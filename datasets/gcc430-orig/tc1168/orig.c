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
   unsigned f0;
   signed f1 : 11;
   unsigned f2 : 21;
   unsigned f3 : 5;
   signed f4 : 24;
};


static unsigned g_7[10] = {0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L,0x544D1878L};
static int g_17 = 7L;
static unsigned short g_63 = 65535UL;
static struct S0 g_85[1] = {{0xE7BA79B2L,17,689,3,-2749}};
static unsigned char g_135[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static unsigned short g_158[9][10] = {{0x066CL,1UL,1UL,0xC468L,0xF5DEL,65535UL,65535UL,0xF5DEL,0xC468L,1UL},{0x1B2AL,0x1B2AL,0x82EEL,65535UL,0xC468L,0x69E0L,0x4F09L,0UL,0x293DL,1UL},{0x82EEL,0xC468L,0x8F19L,0xD43CL,65533UL,65529UL,65533UL,0UL,0xD43CL,0x82EEL},{0UL,0x8F19L,65535UL,0xF5DEL,65529UL,0x1B2AL,0x4F09L,0x1B2AL,65529UL,0xF5DEL},{0x69E0L,0x3641L,0x69E0L,65533UL,0xABEAL,0UL,0x9BC9L,0x8F19L,65535UL,0xE875L},{0xC468L,0xE875L,0x7E36L,0UL,0xF530L,65535UL,65529UL,0x8F19L,0xA02DL,1UL},{0UL,0x4F09L,0x69E0L,0xC468L,65535UL,0x82EEL,0x1B2AL,0x1B2AL,0x82EEL,65535UL},{0xDC2BL,65535UL,65535UL,0xDC2BL,0xE875L,65535UL,0UL,0UL,1UL,0x4097L},{0x4F09L,0xD43CL,0xDC2BL,0xF530L,0xC468L,0xABEAL,65535UL,0UL,1UL,0x3641L}};
static unsigned g_212[2] = {4294967295UL,4294967295UL};
static unsigned g_280 = 4294967291UL;
static unsigned char g_300[2][2] = {{6UL,6UL},{6UL,6UL}};
static long long g_373 = 0xE9BA69A8903FAEA7LL;
static long long g_374 = 0xDDDB8344C8DBCB41LL;
static unsigned long long g_386 = 18446744073709551615UL;
static short g_395[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
static long long g_445 = 0xF2A181275483D43FLL;
static struct S0 g_447[8] = {{0UL,-8,99,4,21},{0UL,-8,99,4,21},{0UL,-8,99,4,21},{0UL,-8,99,4,21},{0UL,-8,99,4,21},{0UL,-8,99,4,21},{0UL,-8,99,4,21},{0UL,-8,99,4,21}};
static struct S0 g_449 = {4294967292UL,-10,1365,0,-1832};
static unsigned char g_456 = 0xEAL;
static short g_469 = 0x0665L;
static int g_483 = 0x44D65A0AL;
static unsigned g_517 = 0xFFE33EB1L;
static int g_597 = 0x5AF0DE5BL;
static unsigned short g_598 = 0x741DL;
static int g_604 = 6L;
static int g_605 = 0x58EDBC71L;
static int g_639 = 0x875E19EBL;
static int g_645 = (-9L);
static unsigned g_656 = 0x3BD6BED4L;
static int g_725 = 0x431105A2L;
static int g_913[3][10][5] = {{{1L,0xEB46E999L,0x2FCE52A1L,6L,0x23BFC475L},{(-1L),0xACBBF2F7L,0x23089A48L,0xFFA498D6L,(-1L)},{(-1L),0L,0x23BFC475L,0L,0xEB46E999L},{(-1L),0x0925D93DL,0xEB46E999L,(-1L),0xEB46E999L},{9L,9L,0xF3B57D01L,0x499C784DL,(-1L)},{(-1L),0x499C784DL,(-2L),0xACAC342FL,0x76396D6DL},{0x2FCE52A1L,(-2L),0L,0L,0xFFA498D6L},{0L,0x499C784DL,0xE991661AL,(-2L),0L},{0xACBBF2F7L,9L,0xACAC342FL,(-1L),0xB84FCB65L},{0xE991661AL,0x0925D93DL,(-1L),(-1L),0x0925D93DL}},{{0x76396D6DL,0L,(-2L),(-2L),0L},{0xC36403C3L,0xEB46E999L,(-1L),0L,(-1L)},{(-1L),0xE991661AL,1L,0xACAC342FL,0xC36403C3L},{0xC36403C3L,0x23BFC475L,(-1L),0x499C784DL,0x1DD8FF16L},{0x76396D6DL,0L,0x0925D93DL,(-1L),(-2L)},{0xE991661AL,0L,0x0925D93DL,0L,0xE991661AL},{0xACBBF2F7L,6L,(-1L),0xFFA498D6L,9L},{0L,0x2FCE52A1L,1L,(-1L),0xF3B57D01L},{0x2FCE52A1L,0xC36403C3L,(-1L),6L,9L},{(-1L),(-1L),(-2L),9L,0xE991661AL}},{{9L,0xACAC342FL,(-1L),0x1DD8FF16L,0x2FCE52A1L},{0xACBBF2F7L,1L,1L,0xACBBF2F7L,(-2L)},{9L,0x23089A48L,(-2L),(-1L),(-1L)},{0xEB46E999L,(-1L),0L,(-1L),0xF3B57D01L},{0x1DD8FF16L,(-1L),0x2FCE52A1L,(-1L),0L},{1L,0L,0xEB46E999L,0xACBBF2F7L,0x76396D6DL},{6L,0L,(-1L),0x1DD8FF16L,0x1DD8FF16L},{6L,0xC36403C3L,6L,0xB84FCB65L,0x0925D93DL},{1L,6L,(-1L),0L,0x499C784DL},{0x1DD8FF16L,(-2L),0x0925D93DL,0x23089A48L,(-1L)}}};
static int g_934 = (-9L);
static short g_939 = 0x7223L;
static int g_1013 = 0x82E120C7L;
static int g_1016[7] = {0x5317633FL,0x00CB2429L,0x00CB2429L,0x5317633FL,0x00CB2429L,0x00CB2429L,0x5317633FL};
static char g_1026 = 0x08L;
static char g_1114 = 0xB4L;
static unsigned char g_1379[7] = {0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L,0xD1L};
static int g_1380 = (-1L);
static struct S0 g_1475 = {0UL,28,146,0,2267};
static unsigned long long g_1531 = 0x2DF8E1815D8E10CALL;
static char g_1552 = 0L;
static int g_1583 = (-1L);
static char g_1617 = 0x0BL;



static unsigned func_1(void);
static struct S0 func_2(short p_3, unsigned p_4, unsigned short p_5, long long p_6);
static unsigned short func_20(unsigned p_21);
static unsigned func_22(unsigned p_23, unsigned short p_24, unsigned p_25, unsigned p_26);
static unsigned func_27(char p_28, unsigned p_29);
static int func_40(short p_41);
static unsigned short func_47(short p_48, unsigned short p_49);
static unsigned char func_50(int p_51, unsigned long long p_52, unsigned char p_53, unsigned p_54, short p_55);
static int func_64(long long p_65, long long p_66, unsigned p_67, int p_68);
static unsigned func_74(unsigned short p_75, unsigned long long p_76, unsigned p_77, unsigned p_78);
static unsigned func_1(void)
{
    int l_14 = (-7L);
    int l_36 = 0xF95E19F8L;
    struct S0 l_1551[7][1] = {{{4294967287UL,16,525,1,854}},{{0x440FF156L,25,56,4,1246}},{{4294967287UL,16,525,1,854}},{{0x440FF156L,25,56,4,1246}},{{4294967287UL,16,525,1,854}},{{0x440FF156L,25,56,4,1246}},{{4294967287UL,16,525,1,854}}};
    char l_1625[8] = {(-1L),0x03L,0x03L,(-1L),0x03L,0x03L,(-1L),0x03L};
    unsigned char l_1667 = 252UL;
    long long l_1678 = 0xFE9ADF6A00B29843LL;
    unsigned long long l_1685[8];
    unsigned long long l_1696[10][10][2] = {{{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL}},{{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL}},{{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL}},{{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL}},{{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL}},{{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0UL,0UL},{0xCC371D40E0A5D789LL,0UL},{0UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL}},{{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL}},{{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL}},{{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL}},{{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL},{6UL,0xCC371D40E0A5D789LL},{0xCC371D40E0A5D789LL,6UL},{0xCC371D40E0A5D789LL,0xCC371D40E0A5D789LL}}};
    unsigned char l_1697[3];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1685[i] = 0xC878D57534D33EE5LL;
    for (i = 0; i < 3; i++)
        l_1697[i] = 1UL;
    l_1551[1][0] = func_2((g_7[9] <= (l_36 = (safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_14, ((+((((((g_17 = 0xD1DC6B79DF9481F3LL) > 0UL) || (safe_rshift_func_uint16_t_u_s(func_20(func_22(func_27(g_17, ((((g_7[9] && (safe_add_func_uint32_t_u_u(l_14, ((safe_sub_func_uint16_t_u_u((0xE65CL < (safe_add_func_uint64_t_u_u(18446744073709551615UL, 0x6E60BE6286C8A81DLL))), g_17)) != l_36)))) | g_7[9]) | 0x29BFAEAD2214C259LL) || 0x124380D33B947E29LL)), g_7[0], l_14, g_913[0][8][3])), g_913[0][8][3]))) <= 6L) != (-1L)) | g_913[1][1][0])) & g_7[8]))), g_7[2])), l_36)))), l_14, g_913[0][9][0], l_14);
    for (g_639 = 1; (g_639 >= 0); g_639 -= 1)
    {
        unsigned l_1558 = 0UL;
        unsigned short l_1575 = 65535UL;
        int l_1584[10] = {0x58C1CD66L,8L,0x58C1CD66L,0x58C1CD66L,8L,0x58C1CD66L,0x58C1CD66L,8L,0x58C1CD66L,0x58C1CD66L};
        struct S0 l_1588 = {0UL,-17,1286,2,-206};
        unsigned l_1616[4];
        int l_1624 = 0xE2F38A32L;
        int i;
        for (i = 0; i < 4; i++)
            l_1616[i] = 0xDA55461DL;
        l_1551[1][0].f4 = g_1552;
        for (g_1013 = 1; (g_1013 >= 0); g_1013 -= 1)
        {
            int l_1553[9][1] = {{0x43BAAEC2L},{0x43BAAEC2L},{0xE7FB420FL},{0x43BAAEC2L},{0x43BAAEC2L},{0xE7FB420FL},{0x43BAAEC2L},{0x43BAAEC2L},{0xE7FB420FL}};
            struct S0 l_1556 = {0x5729FDBEL,-22,149,1,-3222};
            short l_1576[4] = {0x2F75L,0x2F75L,0x2F75L,0x2F75L};
            unsigned char l_1658 = 0xA4L;
            int i, j;
            for (g_725 = 1; (g_725 >= 0); g_725 -= 1)
            {
                struct S0 l_1557 = {7UL,21,720,3,-2999};
                if (g_386)
                    break;
                for (g_449.f0 = 0; (g_449.f0 <= 1); g_449.f0 += 1)
                {
                    unsigned l_1555[9] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int i;
                    for (g_598 = 0; (g_598 <= 1); g_598 += 1)
                    {
                        int l_1554 = (-9L);
                        l_1553[0][0] = 0x8BDB94FBL;
                        if (g_1475.f4)
                            continue;
                        l_1555[4] = func_64(g_447[7].f4, g_1552, l_1551[1][0].f1, ((g_374 = l_1554) ^ 18446744073709551608UL));
                    }
                }
                g_17 = g_7[3];
                l_1557 = (g_447[5] = l_1556);
            }
            l_1558 = g_605;
            if ((safe_mod_func_int8_t_s_s(func_50(l_1558, (safe_add_func_int32_t_s_s(((g_1114 = ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(g_1475.f1, (safe_mod_func_int32_t_s_s((((0xE9L || (-8L)) != ((safe_lshift_func_uint8_t_u_s(((g_449.f0 ^ func_74(g_1379[3], (safe_div_func_int8_t_s_s((l_36 >= l_1558), (func_64((l_1575 = (g_212[1] && g_374)), g_1016[3], l_1556.f2, g_17) | 0x15F20EFEL))), g_939, g_300[0][1])) || g_645), 7)) >= (-1L))) == 0xA4L), g_300[0][1])))), g_447[7].f3)), l_1556.f2)) != g_447[7].f2)) ^ g_395[8]), g_7[0])), l_1556.f2, l_1576[2], g_1475.f4), g_1552)))
            {
                unsigned short l_1577 = 0xAB9DL;
                int l_1578[4];
                unsigned l_1581 = 0xA4F50902L;
                int l_1582[8][2] = {{1L,0x82B4830FL},{(-4L),0x911A3083L},{0x911A3083L,(-4L)},{0x82B4830FL,1L},{0x82B4830FL,(-4L)},{0x911A3083L,0x911A3083L},{(-4L),0x82B4830FL},{1L,0x82B4830FL}};
                int l_1585 = (-10L);
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1578[i] = 0xBDFB514DL;
                l_1585 = (l_1584[7] = ((2L | l_1577) || func_74(g_447[7].f0, l_1575, l_1578[1], func_64((g_373 = (g_913[2][0][1] == ((1UL ^ (((safe_rshift_func_int16_t_s_s(((l_1582[5][0] = (func_74((g_63 = (l_1556.f1 = (l_1582[5][0] = func_74(g_597, l_1581, l_1575, g_280)))), g_517, g_1475.f4, g_517) >= 0x36A1ED8457BB3BBCLL)) || 1UL), l_1558)) || l_1575) | (-1L))) && 0x6BL))), l_1551[1][0].f1, l_1556.f0, g_1583))));
                g_449.f1 = (l_1556.f1 = (g_1016[3] = func_74((safe_sub_func_uint16_t_u_u(l_1581, (0x15C131887D929404LL & l_1576[2]))), l_1578[1], l_1582[5][0], l_1551[1][0].f2)));
                g_447[1] = g_85[0];
                if (g_85[0].f2)
                {
                    g_85[0] = g_447[7];
                    l_1588 = (g_85[0] = g_85[0]);
                }
                else
                {
                    struct S0 l_1589 = {0xB706B1D8L,33,234,1,-1677};
                    short l_1615[2][10][10] = {{{(-3L),0x2498L,0x1557L,0L,1L,0xA84EL,(-1L),0xCB37L,3L,0x4BC6L},{0xA84EL,(-1L),0xCB37L,3L,0x4BC6L,0x6B9DL,(-8L),1L,(-1L),0xC8BEL},{0xA716L,0L,0L,(-6L),0x603AL,0xC8BEL,1L,0xC8BEL,0x603AL,(-6L)},{0x61F3L,(-1L),0x61F3L,0xDD44L,0x660CL,(-8L),0xCB37L,0x687BL,0xE9D2L,0x5789L},{0xCB37L,5L,0x603AL,(-3L),0x8B83L,1L,0x2491L,0x687BL,(-3L),(-1L)},{3L,0x6B9DL,0x61F3L,2L,0xE9D2L,0x72FAL,(-3L),1L,0x72FAL,0x5789L},{0x603AL,0x6B9DL,(-3L),(-1L),(-4L),7L,0xE388L,3L,0xDD44L,0xE9D2L},{0x4BC6L,(-4L),0x8B83L,7L,0xB463L,0xB463L,7L,0x8B83L,(-4L),0x4BC6L},{1L,1L,(-1L),0x4FB5L,0xE388L,2L,0x687BL,(-6L),0L,(-1L)},{0x61F3L,0xB862L,0x6B9DL,1L,0xE388L,5L,0x660CL,(-6L),(-3L),0x4BC6L}},{{0xE388L,0x687BL,0xB862L,1L,0xB463L,(-6L),(-1L),7L,(-3L),0xE9D2L},{(-6L),0xA84EL,0xCBF2L,1L,(-4L),0xCB37L,0xB463L,0x5789L,(-8L),0x5789L},{(-3L),0x4FB5L,(-6L),0xE9D2L,(-6L),0x4FB5L,(-3L),0xA84EL,0x6B9DL,0x6175L},{0xC8BEL,(-1L),1L,(-8L),0x6B9DL,0x4BC6L,3L,0xCB37L,(-1L),0xA84EL},{(-4L),(-1L),0x5789L,0x687BL,0L,(-6L),(-3L),0x6175L,0xB463L,0xDD44L},{0x2498L,0x4FB5L,(-6L),0x4BC6L,2L,0L,0x603AL,(-1L),0x6B9DL,1L},{3L,1L,(-6L),0xCB37L,0L,0x2491L,0xB862L,0xB862L,0x2491L,0L},{(-8L),0xE388L,0xE388L,(-8L),0xB463L,0x8B83L,5L,(-1L),0x660CL,0xC663L},{0xA716L,0x6175L,0x61F3L,0xB862L,0x6B9DL,1L,0xE388L,5L,0x660CL,(-6L)},{(-6L),1L,1L,(-8L),0x4BC6L,0L,(-1L),0xA716L,0x2491L,0xE9D2L}}};
                    int i, j, k;
                    for (l_1588.f0 = 0; (l_1588.f0 <= 1); l_1588.f0 += 1)
                    {
                        int l_1598 = 0xF30B9D60L;
                        g_1016[0] = l_1556.f2;
                        g_85[0] = l_1589;
                        l_1588.f1 = func_64(func_74((safe_add_func_int32_t_s_s(((((((l_1589.f1 = (l_14 <= (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(g_1531, l_1598)) < func_74((safe_lshift_func_int8_t_s_s(((g_1475.f2 != l_1598) < (g_386 <= l_1551[1][0].f0)), (l_1556.f1 <= (safe_div_func_uint32_t_u_u((g_7[9] = g_1475.f0), l_1588.f1))))), g_1016[5], g_1475.f2, l_1551[1][0].f0)) ^ g_449.f2), g_1016[2])), g_725)))) >= l_1578[0]) >= g_1379[3]) != 1UL) && 1L) > l_1589.f0), g_1379[3])), g_1475.f1, l_1551[1][0].f4, l_1584[7]), g_449.f0, g_483, g_1583);
                    }
                    l_1589.f1 = l_1589.f0;
                    for (g_598 = 0; (g_598 <= 1); g_598 += 1)
                    {
                        if (g_1379[3])
                            break;
                    }
                    g_449.f1 = (func_64((l_1584[7] >= g_934), l_1556.f1, ((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((g_1617 = ((l_1616[3] = ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((-1L) != ((g_1026 = l_1551[1][0].f0) > (g_85[0].f2 ^ g_395[8]))) != ((5L >= (safe_add_func_int16_t_s_s((((safe_div_func_uint8_t_u_u(((+0L) >= l_1588.f2), l_1615[1][0][7])) & l_1585) < l_1575), l_1582[5][0]))) || 0xA98EL)), g_158[4][8])), g_445)) | g_598)) <= g_300[0][1])), 0xCCF2L)), 0x7E968811A2C302F7LL)) <= g_913[1][1][2]), g_449.f0) | g_373);
                }
            }
            else
            {
                unsigned l_1628 = 4UL;
                int l_1654 = 2L;
                int l_1657 = 1L;
                unsigned long long l_1660[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1660[i] = 0x30EBE4E3CE551A90LL;
                if (g_483)
                {
                    int l_1638 = 0x00B123A1L;
                    if ((g_1380 && g_645))
                    {
                        g_1475.f1 = l_1553[2][0];
                        return g_449.f3;
                    }
                    else
                    {
                        unsigned long long l_1637[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1637[i] = 0UL;
                        l_1588.f1 = (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1624, l_1625[2])), ((255UL > ((safe_mul_func_int8_t_s_s(g_1552, g_1379[2])) ^ l_1628)) >= (!(((g_656 ^ (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_158[4][8], (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(g_1552, g_913[0][7][4])), 3)))), g_374))) != l_1628) <= g_373))))) <= l_1637[2]), l_1638));
                    }
                }
                else
                {
                    int l_1651 = (-1L);
                    int l_1659 = 1L;
                    int i, j;
                    l_1659 = ((+func_64((safe_rshift_func_int8_t_s_u((g_1617 = g_1617), 1)), func_74((l_1657 = ((safe_div_func_int8_t_s_s(g_85[0].f0, (safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(l_1651, (safe_mod_func_uint32_t_u_u((l_1654 = l_1576[2]), l_1588.f3)))), g_374)), l_1651)))) || (((g_300[g_639][g_639] = g_449.f1) != ((((g_212[1] = (safe_div_func_uint16_t_u_u(l_1624, g_447[7].f1))) | g_1475.f1) > l_1625[2]) > l_1651)) >= l_1551[1][0].f0))), g_158[4][2], l_1553[0][0], g_639), l_1576[0], l_1658)) > 0x14L);
                    if (l_1660[0])
                        continue;
                }
            }
            g_447[7].f4 = l_1576[2];
        }
    }
    for (g_374 = 0; (g_374 != 20); g_374++)
    {
        unsigned l_1694 = 0xDAC007D4L;
        int l_1695[2][8];
        int l_1698 = 0x9BDB981EL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
                l_1695[i][j] = 7L;
        }
        g_725 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(l_1551[1][0].f0, 6)), (l_1667 > l_1667)));
        l_1698 = (+(g_1016[3] = (safe_mul_func_int16_t_s_s((g_395[8] = ((l_1551[1][0].f1 && (((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_212[0] <= (((g_17 <= l_1551[1][0].f0) && (l_14 = ((safe_mul_func_uint16_t_u_u(l_1678, (safe_mul_func_uint16_t_u_u(g_449.f2, (+(g_158[2][6] = 9UL)))))) > (safe_sub_func_int16_t_s_s((((l_1695[1][1] = (safe_lshift_func_int8_t_s_s(((g_7[9] = l_1685[2]) | (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((!(l_1625[2] && (-1L))) | 0UL), l_1694)), l_36)), l_1694))), g_300[0][1]))) == g_1379[0]) && g_7[9]), l_1694))))) <= g_85[0].f2)), 5)), l_1696[9][8][0])) >= 0x6059L), l_36)) && 4294967286UL) != g_1013)) | 0L)), l_1697[2]))));
    }
    return l_1625[2];
}







static struct S0 func_2(short p_3, unsigned p_4, unsigned short p_5, long long p_6)
{
    char l_1515[8][1] = {{0xF1L},{0xE5L},{0xF1L},{0xE5L},{0xF1L},{0xE5L},{0xF1L},{0xE5L}};
    int l_1516 = 0x1AD821A3L;
    int l_1517 = 0x0911C845L;
    struct S0 l_1518 = {0x0E4D06ABL,21,876,0,-125};
    unsigned short l_1528 = 0x2863L;
    int i, j;
    l_1517 = ((safe_add_func_int32_t_s_s((0xA54117A6FDD1845FLL >= (!l_1515[3][0])), g_517)) & (l_1516 = l_1515[2][0]));
    for (g_597 = 2; (g_597 >= 0); g_597 -= 1)
    {
        int i;
        l_1518 = (g_447[(g_597 + 4)] = g_1475);
        g_17 = p_5;
        for (g_1013 = 0; (g_1013 <= 2); g_1013 += 1)
        {
            unsigned char l_1527[1];
            int l_1529[6][1];
            int l_1530 = 0x5C85E95FL;
            struct S0 l_1544[2] = {{0xAF5E9296L,0,342,4,-2866},{0xAF5E9296L,0,342,4,-2866}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_1527[i] = 0UL;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1529[i][j] = (-9L);
            }
            g_449.f4 = (safe_lshift_func_uint16_t_u_u(p_4, (l_1529[4][0] = (func_74(((l_1516 = 0xA0L) | p_6), ((g_386 = (safe_add_func_uint32_t_u_u(g_85[0].f4, 4294967295UL))) ^ (g_447[(g_597 + 4)].f1 = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_1527[0] >= 0xC345D90F5AEEE627LL), l_1527[0])), l_1528)))), l_1527[0], g_447[(g_597 + 4)].f0) == g_517))));
            l_1530 = p_3;
            for (p_6 = 2; (p_6 >= 0); p_6 -= 1)
            {
                short l_1542 = 0x71F1L;
                int l_1543 = (-1L);
                if (((func_22((g_1531 = (g_395[3] ^ 1L)), (p_5 = l_1527[0]), func_74((g_447[(g_597 + 4)].f4 = ((safe_sub_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(1L, ((g_447[(g_597 + 4)].f1 = (-1L)) && (safe_sub_func_uint32_t_u_u(l_1527[0], func_74((g_447[(g_597 + 4)].f4 = func_74(l_1515[3][0], g_1475.f2, func_74(((g_447[(g_597 + 4)].f4 = ((safe_div_func_uint64_t_u_u((g_1016[3] || p_4), 0x1ABE1C78ADBE0536LL)) || g_447[(g_597 + 4)].f1)) || g_445), p_3, l_1529[4][0], l_1529[4][0]), g_1013)), g_447[(g_597 + 4)].f0, g_1016[3], l_1542)))))) > (-6L)), 7UL)) && g_449.f1) >= p_6), g_447[(g_597 + 4)].f2)) <= p_4)), p_4, g_449.f0, l_1527[0]), p_3) >= l_1515[3][0]) & g_939))
                {
                    for (g_373 = 2; (g_373 >= 0); g_373 -= 1)
                    {
                        g_447[(g_597 + 4)].f4 = l_1529[4][0];
                        g_447[2] = (g_85[0] = g_447[(g_597 + 4)]);
                        g_1016[1] = l_1527[0];
                    }
                    for (g_1026 = 0; (g_1026 <= 2); g_1026 += 1)
                    {
                        int i;
                        l_1543 = (g_135[(p_6 + 2)] ^ (g_135[(g_1026 + 7)] < 0L));
                        return l_1544[0];
                    }
                    if (p_5)
                        continue;
                }
                else
                {
                    unsigned l_1545 = 0xF9A3FBB5L;
                    int l_1549 = 1L;
                    unsigned long long l_1550 = 0x2356BA2502E23BABLL;
                    g_447[(g_597 + 4)].f1 = p_3;
                    for (g_63 = 0; (g_63 <= 1); g_63 += 1)
                    {
                        int i;
                        l_1545 = g_212[g_63];
                    }
                    for (p_5 = 0; (p_5 <= 2); p_5 += 1)
                    {
                        long long l_1548[10][3][3];
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_1548[i][j][k] = 4L;
                            }
                        }
                        g_449.f1 = (g_447[7].f3 && (g_447[(g_597 + 4)].f1 = (l_1543 = ((p_6 | ((l_1549 = (l_1548[7][1][0] = g_1531)) && g_1114)) == (0L < l_1550)))));
                        if (p_6)
                            continue;
                    }
                    for (g_598 = 0; (g_598 <= 0); g_598 += 1)
                    {
                        g_604 = (0xCEL != (p_3 <= p_3));
                    }
                }
            }
        }
    }
    return l_1518;
}







static unsigned short func_20(unsigned p_21)
{
    int l_1462[2];
    int l_1463 = 1L;
    unsigned short l_1473 = 1UL;
    unsigned long long l_1488 = 0xF0EB48644BBE07E6LL;
    short l_1498 = 0xCA65L;
    int l_1505 = 0L;
    int l_1506 = 0x4C958B0CL;
    int l_1507[8][10][2] = {{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,0L},{0L,1L}},{{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L}},{{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L}},{{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L}},{{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L}},{{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L}},{{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1462[i] = 0x6AF08BA6L;
    l_1463 = (safe_rshift_func_uint16_t_u_u((l_1462[0] = g_1016[6]), 12));
    for (g_604 = (-13); (g_604 == 21); g_604 = safe_add_func_uint64_t_u_u(g_604, 7))
    {
        int l_1472 = (-3L);
        g_447[7].f4 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((1UL == p_21), (safe_lshift_func_uint8_t_u_s(((func_50(((l_1463 && g_449.f2) != p_21), l_1462[0], p_21, g_449.f3, g_447[7].f3) || g_85[0].f0) == p_21), 7)))), l_1462[0]));
        l_1472 = g_1379[3];
    }
    if ((l_1463 && 0L))
    {
        struct S0 l_1474[9] = {{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590},{4294967295UL,6,825,3,3590}};
        int i;
        l_1463 = (l_1473 = p_21);
        g_1475 = l_1474[2];
        g_447[7].f1 = ((l_1463 > (-6L)) < (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(246UL, ((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(0x65L, (safe_sub_func_int8_t_s_s(0x27L, (p_21 && (g_1026 = (safe_mod_func_uint32_t_u_u((0L < (l_1473 == l_1488)), g_447[7].f2)))))))) != l_1488), 11)) && l_1473))), l_1474[2].f3)));
    }
    else
    {
        short l_1491 = 0L;
        int l_1499 = 0xE5F076D2L;
        int l_1500 = 0xEE4204A3L;
        int l_1508 = (-3L);
        l_1508 = (((safe_div_func_uint32_t_u_u((l_1491 == (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u((l_1500 = (l_1499 = (g_135[9] = ((g_445 > g_445) & l_1498)))), g_395[8])) != g_645), (l_1507[0][7][1] = ((l_1505 = (l_1463 = ((safe_lshift_func_uint8_t_u_s((((249UL && l_1473) ^ (safe_mul_func_uint16_t_u_u(0UL, 0x57F5L))) < p_21), p_21)) & g_7[9]))) < l_1506)))), 10))), g_934)) >= 0xA7F34BC04F7FBDE2LL) < g_1114);
        if (((l_1463 = (((-1L) ^ (safe_sub_func_uint32_t_u_u(g_85[0].f3, g_158[4][8]))) ^ g_449.f4)) ^ 0x0EL))
        {
            unsigned long long l_1511 = 0xA9E3B01640BEAD54LL;
            return l_1511;
        }
        else
        {
            unsigned long long l_1512 = 0x4BE50924F097B5FFLL;
            l_1512 = func_27(p_21, p_21);
        }
    }
    return g_1475.f0;
}







static unsigned func_22(unsigned p_23, unsigned short p_24, unsigned p_25, unsigned p_26)
{
    unsigned char l_1452[2];
    int l_1453 = 0x3A3F7DD4L;
    int l_1458 = 0x4C209A61L;
    int l_1459 = 0x1BE8F8ADL;
    int i;
    for (i = 0; i < 2; i++)
        l_1452[i] = 248UL;
    g_1380 = (3UL ^ (func_50(g_395[8], (safe_rshift_func_uint8_t_u_s(l_1452[1], 0)), (l_1453 = p_23), p_23, g_449.f0) > ((safe_lshift_func_uint16_t_u_u(((l_1458 = ((safe_div_func_int8_t_s_s(0x97L, l_1452[1])) != 0x8AL)) & l_1452[0]), l_1452[1])) >= p_25)));
    return l_1459;
}







static unsigned func_27(char p_28, unsigned p_29)
{
    struct S0 l_39[2][7][5] = {{{{0x7977F45AL,-13,1291,3,-3193},{0x7977F45AL,-13,1291,3,-3193},{7UL,12,286,0,259},{0xE820F90FL,-37,1026,0,-2398},{0x5769E8A2L,-3,168,1,1712}},{{0x321248C3L,5,1409,2,-1930},{0x5769E8A2L,-3,168,1,1712},{0xBA053926L,-0,519,0,-380},{0xE820F90FL,-37,1026,0,-2398},{0xE820F90FL,-37,1026,0,-2398}},{{0xE820F90FL,-37,1026,0,-2398},{3UL,19,138,4,-31},{0xE820F90FL,-37,1026,0,-2398},{0x5316D004L,-43,434,2,3062},{0x8E0133D4L,14,5,3,-2970}},{{0xBA053926L,-0,519,0,-380},{0x5769E8A2L,-3,168,1,1712},{0x321248C3L,5,1409,2,-1930},{2UL,15,444,2,3702},{0x8E0133D4L,14,5,3,-2970}},{{7UL,12,286,0,259},{0x7977F45AL,-13,1291,3,-3193},{0x7977F45AL,-13,1291,3,-3193},{7UL,12,286,0,259},{0xE820F90FL,-37,1026,0,-2398}},{{0x1F81F13DL,-37,20,1,3401},{7UL,12,286,0,259},{0x321248C3L,5,1409,2,-1930},{0x8E0133D4L,14,5,3,-2970},{0x5769E8A2L,-3,168,1,1712}},{{0x1F81F13DL,-37,20,1,3401},{0x321248C3L,5,1409,2,-1930},{0xE820F90FL,-37,1026,0,-2398},{0x321248C3L,5,1409,2,-1930},{0x1F81F13DL,-37,20,1,3401}}},{{{7UL,12,286,0,259},{2UL,15,444,2,3702},{0xBA053926L,-0,519,0,-380},{0x8E0133D4L,14,5,3,-2970},{0x7977F45AL,-13,1291,3,-3193}},{{0xBA053926L,-0,519,0,-380},{2UL,15,444,2,3702},{7UL,12,286,0,259},{7UL,12,286,0,259},{2UL,15,444,2,3702}},{{0xE820F90FL,-37,1026,0,-2398},{0x321248C3L,5,1409,2,-1930},{0x1F81F13DL,-37,20,1,3401},{2UL,15,444,2,3702},{0x7977F45AL,-13,1291,3,-3193}},{{0x321248C3L,5,1409,2,-1930},{7UL,12,286,0,259},{0x1F81F13DL,-37,20,1,3401},{0x5316D004L,-43,434,2,3062},{0x1F81F13DL,-37,20,1,3401}},{{0x7977F45AL,-13,1291,3,-3193},{0x7977F45AL,-13,1291,3,-3193},{7UL,12,286,0,259},{0xE820F90FL,-37,1026,0,-2398},{0x5769E8A2L,-3,168,1,1712}},{{0x7977F45AL,-13,1291,3,-3193},{3UL,19,138,4,-31},{0x5769E8A2L,-3,168,1,1712},{0x1F81F13DL,-37,20,1,3401},{0x1F81F13DL,-37,20,1,3401}},{{0x1F81F13DL,-37,20,1,3401},{0x5316D004L,-43,434,2,3062},{0x1F81F13DL,-37,20,1,3401},{7UL,12,286,0,259},{0x321248C3L,5,1409,2,-1930}}}};
    int l_1298 = 2L;
    int l_1335 = (-1L);
    struct S0 l_1399 = {0xFB4FC266L,21,439,0,2762};
    int i, j, k;
    for (g_17 = 0; (g_17 >= (-21)); g_17 = safe_sub_func_int8_t_s_s(g_17, 7))
    {
        int l_1271 = 0x9180086EL;
        struct S0 l_1273 = {4294967293UL,14,620,0,2934};
        unsigned l_1336 = 0UL;
        for (p_28 = 0; (p_28 <= 1); p_28 += 1)
        {
            unsigned l_1295 = 4294967295UL;
            l_1271 = (func_40(p_28) | l_1271);
            for (g_934 = 0; (g_934 <= 1); g_934 += 1)
            {
                int l_1297 = 6L;
                for (g_939 = 0; (g_939 <= 1); g_939 += 1)
                {
                    unsigned short l_1272 = 0UL;
                    return l_1272;
                }
                for (g_63 = 0; (g_63 <= 1); g_63 += 1)
                {
                    int l_1299[7][3];
                    unsigned l_1302 = 0x891E5D5CL;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_1299[i][j] = 0x8CF9FBC1L;
                    }
                    for (g_656 = 0; (g_656 <= 1); g_656 += 1)
                    {
                        int i, j, k;
                        l_39[g_656][(g_656 + 2)][(g_656 + 3)] = l_39[g_63][(g_656 + 1)][(g_934 + 2)];
                        g_447[5] = (l_1273 = g_447[0]);
                    }
                    for (g_645 = 0; (g_645 != (-13)); g_645 = safe_sub_func_int16_t_s_s(g_645, 2))
                    {
                        long long l_1278 = 0L;
                        int l_1296 = 0L;
                        l_1297 = ((l_1296 = (func_64(((safe_div_func_uint32_t_u_u((g_85[0].f3 < (((l_1278 > (safe_rshift_func_int16_t_s_s(0x2322L, 6))) ^ l_1278) <= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(g_85[0].f2, g_597)) <= g_63), 1)), ((safe_mod_func_int32_t_s_s(4L, ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((65532UL != l_1295), g_212[1])), p_28)), p_28)) && g_447[7].f3))) != g_7[9]))))), g_517)) == p_29), g_63, p_28, p_28) | g_447[7].f0)) ^ 1L);
                        l_1299[6][2] = (g_449.f1 = l_1298);
                    }
                    g_449.f4 = (safe_lshift_func_int8_t_s_s(l_1302, 2));
                }
            }
        }
        if ((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_29, (l_1298 = p_28))), (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(l_1273.f0)), 0)))))
        {
            unsigned char l_1328 = 6UL;
            int l_1337 = 0xDF70CD01L;
            l_1335 = (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(p_28, 12)), ((safe_add_func_uint16_t_u_u((l_1273.f4 = (safe_div_func_uint32_t_u_u(((l_1337 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((l_1328 != (((g_1016[3] = (((safe_add_func_int16_t_s_s(((g_645 < (safe_lshift_func_uint16_t_u_u(l_1328, (l_1298 = (((safe_lshift_func_uint8_t_u_u(p_28, (l_1273.f4 < (func_50(p_28, l_1273.f1, l_1298, g_483, p_29) <= g_1026)))) > l_1273.f4) <= g_939))))) || g_158[4][8]), g_725)) != p_29) ^ p_29)) && 1L) == l_1335)) | 0xD58BL), 0x41L)), 7)), l_1336))) < l_1328), l_1328))), 0x8B81L)) > (-5L)))), 5)), 5));
            g_639 = l_1337;
        }
        else
        {
            char l_1360 = 0x3BL;
            int l_1398 = 0xF1504EB9L;
            char l_1427[8] = {5L,5L,5L,5L,5L,5L,5L,5L};
            int i;
            for (g_456 = 0; (g_456 <= 25); g_456 = safe_add_func_int8_t_s_s(g_456, 7))
            {
                unsigned char l_1363 = 0x72L;
                int l_1364 = 0x54D80B57L;
                l_1364 = func_64((safe_add_func_int8_t_s_s(3L, (safe_mod_func_int32_t_s_s((+(safe_div_func_int64_t_s_s(((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(((0x3742FAB6L != l_1298) | ((g_1026 = ((safe_mul_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(p_28, (safe_rshift_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((((g_300[1][0] && l_1335) ^ func_74(g_447[7].f2, l_1360, ((safe_mul_func_int8_t_s_s(p_29, l_1360)) || l_1336), p_28)) && g_469), p_28)) ^ p_28), p_28)))), p_29)) > l_1360) != 0x64L) & 0x3FL), 65535UL)) < g_469)) | 1UL)), g_1114)), (-1L))) != 0xBCDF4772L), g_374))), 0xE1402334L)))), l_1363, g_373, l_1360);
            }
            for (g_483 = (-16); (g_483 < 3); g_483++)
            {
                int l_1387 = 6L;
                struct S0 l_1400 = {0x64683A86L,-13,118,2,38};
                if ((safe_sub_func_uint8_t_u_u(func_74(g_1026, (((((safe_rshift_func_int16_t_s_s((65533UL != (g_158[1][0] = (safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((g_1016[3] = 0xD6944B59L) < (-9L)), (p_29 ^ (safe_mod_func_int16_t_s_s(((g_63 >= (0x513C6F5CL & 0xB6450EC6L)) || func_50(((safe_lshift_func_int16_t_s_s(func_64(l_1335, p_29, g_469, g_1379[3]), 2)) ^ g_1380), p_28, g_1114, g_449.f3, g_395[3])), p_28))))) != p_29), p_28)))), p_28)) > g_1379[2]) >= 0x36360D49L) >= l_1273.f2) <= l_1271), l_1273.f3, l_1360), l_1360)))
                {
                    for (p_28 = 0; (p_28 >= 24); p_28 = safe_add_func_uint64_t_u_u(p_28, 2))
                    {
                        return g_934;
                    }
                    l_1398 = (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(l_1387, (!l_1387))), ((safe_mul_func_int16_t_s_s(l_1387, (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_456, ((safe_mod_func_uint16_t_u_u(l_1387, 65535UL)) != ((safe_mul_func_int8_t_s_s((((~p_29) & l_1271) & func_74(p_29, l_1387, g_85[0].f1, g_725)), p_28)) ^ 0xE46E4C46218D4E4CLL)))), 0xACCBL)))) >= g_1013)));
                    l_1400 = l_1399;
                }
                else
                {
                    unsigned char l_1421 = 250UL;
                    int l_1422 = 7L;
                    unsigned short l_1441 = 0x30BCL;
                    l_1387 = (0x7317L == 0x346DL);
                    if (g_85[0].f3)
                    {
                        unsigned l_1420[1][7][2];
                        int l_1423[2];
                        char l_1434 = 0x4BL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_1420[i][j][k] = 0xF5276E0FL;
                            }
                        }
                        for (i = 0; i < 2; i++)
                            l_1423[i] = 0x8EC38F55L;
                        l_1273.f1 = g_605;
                        l_1398 = (safe_lshift_func_int8_t_s_s((l_1422 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((l_1271 = (~p_28)), (safe_mul_func_uint16_t_u_u((l_1273.f1 = l_1360), (safe_unary_minus_func_int32_t_s(((l_1400.f1 = g_445) & func_64((safe_sub_func_int16_t_s_s(p_29, (l_1273.f4 != (l_1420[0][5][0] = (safe_rshift_func_int8_t_s_s((0L ^ 0xF079F75FL), (safe_add_func_int32_t_s_s((~p_28), (g_517 = (safe_add_func_uint32_t_u_u((l_1360 != (-9L)), g_1380))))))))))), p_29, p_29, l_1421)))))))), 2)), 0))), l_1423[0]));
                        l_1273.f1 = func_64((((!l_1271) > ((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((l_1427[1] = 1UL))), 2)) >= 0L)) == (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(func_64(func_50(p_28, (safe_lshift_func_int16_t_s_s(l_1421, 11)), g_913[2][9][1], g_158[5][9], l_1434), p_28, l_1422, l_1360), 6)) | g_913[0][8][3]), p_28))), l_1421, p_29, g_7[8]);
                    }
                    else
                    {
                        unsigned l_1442 = 4294967294UL;
                        l_1442 = (0UL & (safe_div_func_uint8_t_u_u(func_64(l_1399.f3, p_28, ((l_1399.f1 != (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((l_1360 ^ (g_1379[3] || (0x75L || l_1441))), g_1026)), g_373))) < (-9L)), g_158[4][8]), l_1427[3])));
                        l_1335 = (5UL <= (l_1387 = l_1442));
                        g_449.f4 = p_28;
                    }
                }
            }
            if (l_1398)
                continue;
        }
        if ((safe_div_func_int64_t_s_s(p_28, p_29)))
        {
            if (p_29)
                break;
        }
        else
        {
            l_1273 = l_1273;
            if (l_1399.f3)
                continue;
        }
    }
    for (g_934 = 0; (g_934 <= (-7)); --g_934)
    {
        struct S0 l_1447[2] = {{4294967295UL,-5,991,3,2855},{4294967295UL,-5,991,3,2855}};
        int i;
        l_1447[0] = g_85[0];
    }
    g_1380 = (safe_div_func_uint32_t_u_u(0xDC1241B2L, g_374));
    return l_1399.f1;
}







static int func_40(short p_41)
{
    int l_46 = 0L;
    int l_728[5][8] = {{0xC84F7A2BL,(-1L),(-1L),(-1L),(-1L),0xC84F7A2BL,(-1L),(-1L)},{(-9L),(-1L),(-9L),0xC84F7A2BL,0xC84F7A2BL,(-9L),(-1L),(-9L)},{0x30989C77L,0xC84F7A2BL,(-1L),0xC84F7A2BL,0x30989C77L,0x30989C77L,0xC84F7A2BL,(-1L)},{0x30989C77L,0x30989C77L,0xC84F7A2BL,(-1L),0xC84F7A2BL,0x30989C77L,0x30989C77L,0xC84F7A2BL},{(-9L),0xC84F7A2BL,0xC84F7A2BL,(-9L),(-1L),(-9L),0xC84F7A2BL,0xC84F7A2BL}};
    unsigned short l_729[7] = {65532UL,65532UL,65532UL,65532UL,65532UL,65532UL,65532UL};
    int l_730[10] = {(-9L),0L,0L,(-9L),0L,0L,(-9L),0L,0L,(-9L)};
    struct S0 l_758 = {0UL,42,623,2,3200};
    int l_906 = 2L;
    unsigned l_999 = 0xCE6B629CL;
    unsigned l_1017[9][4] = {{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL},{3UL,3UL,3UL,3UL}};
    unsigned l_1018 = 1UL;
    unsigned long long l_1035 = 0UL;
    unsigned l_1101 = 0x4D02C703L;
    unsigned l_1156 = 1UL;
    unsigned short l_1215[5] = {65535UL,65535UL,65535UL,65535UL,65535UL};
    short l_1268 = 0x4435L;
    int i, j;
    l_730[0] = (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(l_46, (func_47(p_41, g_17) > g_483))) > (g_725 = g_17)), ((l_729[1] = (l_728[1][1] = ((l_46 > ((safe_sub_func_int32_t_s_s((g_517 <= ((((-7L) == p_41) ^ g_17) < l_46)), p_41)) & 0x2149L)) > p_41))) | 0UL)));
    for (g_449.f0 = 0; (g_449.f0 != 59); g_449.f0++)
    {
        short l_744 = 0x0A23L;
        int l_749 = 0xFAAFC789L;
        struct S0 l_750 = {0UL,34,746,2,-76};
        unsigned char l_1025 = 0xF5L;
        unsigned l_1033 = 0x7A62CB1FL;
        if ((((safe_rshift_func_uint16_t_u_u(0x0D34L, (safe_add_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(((((safe_lshift_func_uint8_t_u_u(0xACL, (g_300[0][1] = (l_728[2][4] = g_373)))) == (safe_rshift_func_int16_t_s_s(g_395[8], 13))) && l_744) && (l_749 = func_74((0xE0L == ((safe_lshift_func_int8_t_s_u((func_64(l_46, p_41, (safe_sub_func_int8_t_s_s((-5L), p_41)), l_46) && p_41), 2)) ^ g_445)), g_645, g_280, g_373))))), g_469)) == 3L), (-8L))))) >= l_729[1]) & l_744))
        {
            if (l_730[0])
            {
                for (g_639 = 0; (g_639 <= 7); g_639 += 1)
                {
                    int i;
                    l_750 = g_447[g_639];
                    if (p_41)
                        break;
                }
            }
            else
            {
                long long l_753[6] = {0x4F229F02D3813B8DLL,3L,3L,0x4F229F02D3813B8DLL,3L,3L};
                int i;
                g_639 = (safe_mul_func_int16_t_s_s(l_753[5], (-1L)));
            }
        }
        else
        {
            int l_754 = 0xF16A0010L;
            l_754 = 0xBDDE8E0EL;
            for (p_41 = 15; (p_41 > 8); --p_41)
            {
                struct S0 l_757 = {0xDB7B0E62L,12,548,0,-1843};
                int l_765 = 0x9E2C22F6L;
                short l_772 = (-1L);
                unsigned char l_810 = 255UL;
                unsigned char l_819 = 0x03L;
                l_758 = l_757;
                g_639 = (safe_sub_func_uint16_t_u_u(func_64(g_300[0][1], l_744, ((0xEDL & 5L) > 3UL), (l_750.f1 = ((l_765 = (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_765, (l_754 = ((l_750.f4 = (safe_mod_func_uint16_t_u_u(g_447[7].f3, (((safe_lshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((-3L), (l_730[8] || g_456))) >= p_41), 12)) ^ g_85[0].f3) || 0xE455EE8E78C0A68ELL)))) | 0UL)))), p_41))) >= (-1L)))), l_750.f0));
                if (l_765)
                {
                    unsigned char l_783[10] = {255UL,255UL,0x93L,248UL,0x93L,255UL,255UL,0x93L,248UL,0x93L};
                    unsigned long long l_784 = 0UL;
                    int l_811 = 0xEF7E3126L;
                    int i;
                    l_730[0] = ((p_41 ^ g_456) || func_74((l_772 || func_74((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint8_t_u_u(g_447[7].f1, ((l_754 & (safe_sub_func_int32_t_s_s((-4L), (((safe_add_func_uint8_t_u_u(l_758.f0, p_41)) || (safe_rshift_func_uint8_t_u_s(g_639, g_7[9]))) > 0xBE16990DL)))) & 4294967289UL))) > 0UL) && p_41), 1L)), g_135[0], l_754, g_373)), p_41, p_41, g_449.f1));
                    if (((g_85[0].f2 & (l_783[0] ^ (8L >= (l_754 = g_456)))) > l_783[8]))
                    {
                        return p_41;
                    }
                    else
                    {
                        long long l_803[6][10] = {{2L,0x8963EEB41E74032FLL,2L,0x07CE2C74967A7298LL,0x8963EEB41E74032FLL,0x5C9481320A115ECFLL,0x5C9481320A115ECFLL,0x8963EEB41E74032FLL,0x07CE2C74967A7298LL,2L},{0xF6633C8BDF94EFEDLL,0xF6633C8BDF94EFEDLL,(-1L),0x8963EEB41E74032FLL,0xD87B3F48EC7A9FEDLL,(-1L),0xD87B3F48EC7A9FEDLL,0x8963EEB41E74032FLL,(-1L),0xF6633C8BDF94EFEDLL},{0xD87B3F48EC7A9FEDLL,0x5C9481320A115ECFLL,2L,0xD87B3F48EC7A9FEDLL,0x07CE2C74967A7298LL,0x07CE2C74967A7298LL,0xD87B3F48EC7A9FEDLL,2L,0x5C9481320A115ECFLL,0xD87B3F48EC7A9FEDLL},{2L,0xF6633C8BDF94EFEDLL,0x5C9481320A115ECFLL,0x07CE2C74967A7298LL,0xF6633C8BDF94EFEDLL,0x07CE2C74967A7298LL,0x5C9481320A115ECFLL,0xF6633C8BDF94EFEDLL,2L,2L},{0xD87B3F48EC7A9FEDLL,0x8963EEB41E74032FLL,(-1L),0xF6633C8BDF94EFEDLL,0xF6633C8BDF94EFEDLL,(-1L),0x8963EEB41E74032FLL,0xD87B3F48EC7A9FEDLL,(-1L),0xD87B3F48EC7A9FEDLL},{0xF6633C8BDF94EFEDLL,0x5C9481320A115ECFLL,0x07CE2C74967A7298LL,0xF6633C8BDF94EFEDLL,0x07CE2C74967A7298LL,0x5C9481320A115ECFLL,0x5C9481320A115ECFLL,(-1L),(-1L),0x5C9481320A115ECFLL}};
                        int i, j;
                        l_754 = l_784;
                        g_447[7].f1 = ((safe_mod_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u(255UL, 6)) < ((l_730[0] = ((safe_mod_func_uint8_t_u_u(5UL, (safe_mul_func_uint16_t_u_u(((g_449.f1 = (safe_lshift_func_uint16_t_u_u(((((((l_757.f4 = p_41) | (safe_sub_func_int64_t_s_s((((((safe_add_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((l_728[0][0] = (safe_mod_func_int64_t_s_s((l_803[0][7] > 0x9669EDB7L), (safe_add_func_int16_t_s_s(g_449.f3, g_639))))), (safe_rshift_func_uint8_t_u_s((l_754 <= (safe_add_func_uint16_t_u_u((l_810 | 0xEAE0725D3B9EAA57LL), 4UL))), g_212[1])))) | p_41) == 0x1761E07FL) ^ 0x6DB5L), l_750.f4)) || 0x18FFE6E21AA1CD6ELL) > p_41) >= g_395[8]) | l_810), l_765))) ^ p_41) == l_750.f2) || l_750.f4) | l_783[0]), 3))) || l_757.f2), g_212[1])))) > 0xC6L)) >= 1UL)) || 0L), 0x07AF76F1599A7B77LL)) != p_41);
                    }
                    if (g_447[7].f3)
                    {
                        if (p_41)
                            break;
                        if (l_754)
                            continue;
                        if (l_750.f2)
                            continue;
                        g_85[0] = g_85[0];
                    }
                    else
                    {
                        l_811 = g_517;
                        if (g_645)
                            continue;
                    }
                }
                else
                {
                    char l_812 = 0x89L;
                    int l_813[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_813[i] = (-6L);
                    if (l_812)
                    {
                        l_765 = (l_813[1] = l_750.f2);
                    }
                    else
                    {
                        g_85[0] = g_85[0];
                        return l_754;
                    }
                }
                for (g_280 = 0; (g_280 < 16); g_280++)
                {
                    g_85[0].f1 = (safe_lshift_func_uint16_t_u_s(0x7738L, l_749));
                    for (g_598 = 2; (g_598 <= 7); g_598 += 1)
                    {
                        unsigned long long l_818 = 0xACE9F6125F37B24FLL;
                        int i;
                        l_818 = (-1L);
                        g_449.f1 = 0L;
                        g_447[g_598] = g_447[g_598];
                        g_447[g_598] = g_447[g_598];
                    }
                    if (p_41)
                        break;
                    l_750.f1 = func_64(p_41, l_819, p_41, func_64((l_754 = (-5L)), ((l_757.f4 = g_395[8]) || p_41), g_605, p_41));
                }
            }
        }
        if ((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint16_t_u(0xE455L)), (safe_lshift_func_int16_t_s_u(l_758.f3, 12)))))
        {
            unsigned l_831 = 0x8CF56F84L;
            int l_857 = 0x7B6D6D8DL;
            int l_918 = 0x387A372FL;
            for (g_469 = 4; (g_469 >= 0); g_469 -= 1)
            {
                int i, j;
                l_730[6] = (l_728[g_469][g_469] = l_728[g_469][(g_469 + 2)]);
                if (l_728[g_469][(g_469 + 1)])
                {
                    g_85[0].f4 = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s(g_17, (4294967288UL && (((l_831 = l_729[4]) || (g_280 = g_395[8])) >= (g_456 <= (safe_sub_func_uint16_t_u_u(p_41, (safe_lshift_func_int16_t_s_s(0L, func_64((g_386 < (0x1FL && 0x84L)), g_395[8], g_374, p_41)))))))))), g_449.f1)), 2)) & l_758.f2);
                    for (g_604 = 0; (g_604 <= 0); g_604 += 1)
                    {
                        int i;
                        g_85[g_604] = g_85[g_604];
                    }
                    g_85[0] = l_750;
                }
                else
                {
                    char l_840 = (-1L);
                    for (g_597 = 25; (g_597 >= (-27)); --g_597)
                    {
                        l_840 = (safe_add_func_uint16_t_u_u(g_447[7].f2, l_750.f0));
                    }
                    return l_840;
                }
                g_447[7].f4 = g_517;
            }
            for (g_639 = 0; (g_639 <= (-12)); g_639--)
            {
                short l_851 = 5L;
                int l_890 = 0L;
                l_851 = (safe_rshift_func_int8_t_s_u(l_831, (safe_sub_func_int64_t_s_s(l_729[1], (safe_sub_func_uint16_t_u_u((!(((safe_add_func_uint16_t_u_u(func_74(func_74(l_831, g_85[0].f2, g_212[1], g_85[0].f0), ((p_41 != (p_41 != p_41)) & g_158[4][8]), g_456, l_831), 0xE610L)) ^ 0x68B8L) ^ 1UL)), g_373))))));
                for (g_645 = (-11); (g_645 == 4); g_645 = safe_add_func_int8_t_s_s(g_645, 1))
                {
                    unsigned l_854 = 0xAC7D080DL;
                    int l_860 = 0L;
                    int l_863 = 1L;
                    int l_868 = 0x7D9ED381L;
                    int l_875 = 1L;
                    unsigned char l_880 = 249UL;
                    long long l_916 = 1L;
                    g_447[7].f4 = (l_854 < (p_41 != 0xEAL));
                    for (g_597 = 25; (g_597 == 1); g_597--)
                    {
                        l_857 = (~g_447[7].f0);
                        l_750.f4 = (l_868 = ((l_860 = (safe_lshift_func_int8_t_s_u(p_41, 0))) < (((l_857 >= ((g_135[1] = 248UL) <= (safe_mod_func_int32_t_s_s((g_85[0].f4 = ((l_863 = p_41) <= p_41)), (safe_mod_func_int8_t_s_s(l_854, (((~g_656) >= ((g_85[0].f1 <= ((((0xFD9CL >= g_85[0].f2) > g_85[0].f0) <= l_758.f1) != 0x2349FBE2B7D67277LL)) != 0x50L)) && g_63))))))) <= g_447[7].f2) | 8L)));
                        return p_41;
                    }
                    l_860 = (l_890 = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_449.f3, l_875)), (safe_lshift_func_uint16_t_u_u((l_868 = 0x1CECL), (safe_sub_func_int32_t_s_s(l_880, (l_728[1][1] >= (l_749 = ((safe_add_func_uint8_t_u_u((0L == ((func_74(((g_63 = func_64((l_758.f4 = ((safe_lshift_func_uint16_t_u_u((l_758.f1 = (l_730[4] = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u((((-3L) < (+p_41)) ^ ((l_863 = ((safe_mod_func_uint64_t_u_u(g_7[9], g_645)) <= p_41)) ^ (-3L))))), 8L)))), 0)) > g_158[0][5])), g_374, l_729[1], g_300[0][1])) >= 0x850AL), g_656, p_41, p_41) < 0x72DBL) >= g_7[9])), g_280)) || p_41))))))))) > 249UL), l_875)));
                    for (l_854 = 0; (l_854 <= 60); l_854 = safe_add_func_uint32_t_u_u(l_854, 8))
                    {
                        unsigned l_893 = 0x86D5F018L;
                        int l_917 = 0x48FCDAF5L;
                        l_890 = g_85[0].f1;
                        l_857 = func_74(l_890, l_890, l_750.f1, ((l_893 = 0x1E02A96FC89E0A47LL) && p_41));
                        l_750.f4 = func_64((l_868 = (l_728[0][3] = (safe_add_func_int64_t_s_s(((p_41 || (safe_add_func_int16_t_s_s((g_469 = (safe_mul_func_uint16_t_u_u(0xAB1EL, l_893))), 0x8D2AL))) == (safe_mod_func_int16_t_s_s(p_41, func_74((safe_rshift_func_int16_t_s_s((func_64((g_373 = g_447[7].f1), (p_41 > ((safe_add_func_int32_t_s_s(g_212[1], func_74(l_906, g_483, p_41, g_135[7]))) | g_7[7])), g_449.f2, g_449.f3) & (-1L)), l_831)), g_645, l_893, p_41)))), 0x07B05A806EBC722DLL)))), g_7[9], g_483, p_41);
                        l_857 = (g_447[7].f4 | ((safe_add_func_int16_t_s_s((-1L), (~(((g_158[1][0] = l_851) <= p_41) > g_469)))) < ((safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(g_913[0][8][3], (safe_div_func_int16_t_s_s(((p_41 != (l_916 | l_831)) || 0x5570L), l_917)))) || p_41), l_918)) > p_41)));
                    }
                }
            }
        }
        else
        {
            unsigned long long l_919 = 0x68879DD516036547LL;
            return l_919;
        }
        for (g_645 = (-10); (g_645 != 14); ++g_645)
        {
            unsigned long long l_942 = 0x1A68CD448DABE902LL;
            int l_949 = 0xB16E8B7AL;
            long long l_997[4][7] = {{0x0962DD58A9516A53LL,0x0962DD58A9516A53LL,0x32F4B6E350420FA4LL,0x32F4B6E350420FA4LL,0x0962DD58A9516A53LL,0x0962DD58A9516A53LL,0x32F4B6E350420FA4LL},{(-2L),0xD39CC59B47BE3A40LL,(-2L),0xD39CC59B47BE3A40LL,(-2L),0xD39CC59B47BE3A40LL,(-2L)},{0x0962DD58A9516A53LL,0x32F4B6E350420FA4LL,0x32F4B6E350420FA4LL,0x0962DD58A9516A53LL,0x0962DD58A9516A53LL,0x32F4B6E350420FA4LL,0x32F4B6E350420FA4LL},{0x1B536E1ADCBC37BFLL,0xD39CC59B47BE3A40LL,0x1B536E1ADCBC37BFLL,0xD39CC59B47BE3A40LL,0x1B536E1ADCBC37BFLL,0xD39CC59B47BE3A40LL,0x1B536E1ADCBC37BFLL}};
            unsigned char l_998 = 1UL;
            unsigned long long l_1027 = 0xEA28F55D9DB851E1LL;
            unsigned l_1034 = 6UL;
            struct S0 l_1043[8] = {{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425},{0x26DA7FBAL,41,1359,0,-2425}};
            int i, j;
            if (func_64(p_41, p_41, ((g_395[0] | (l_46 != (p_41 ^ l_750.f3))) > (p_41 == l_46)), (g_605 = (0x79L >= 0xE8L))))
            {
                int l_937 = 0L;
                struct S0 l_956 = {8UL,-29,1230,4,-3053};
                l_750.f1 = g_604;
                for (g_445 = 1; (g_445 >= 0); g_445 -= 1)
                {
                    for (g_604 = 0; g_604 < 10; g_604 += 1)
                    {
                        g_135[g_604] = 255UL;
                    }
                }
                for (l_750.f0 = 0; (l_750.f0 == 3); l_750.f0 = safe_add_func_int8_t_s_s(l_750.f0, 3))
                {
                    unsigned char l_938 = 0xF5L;
                    int l_950 = 0L;
                    if ((18446744073709551609UL || ((g_939 = ((safe_lshift_func_int16_t_s_u((((safe_mul_func_int16_t_s_s((-1L), 4UL)) <= ((safe_lshift_func_uint16_t_u_u((7UL || (g_300[0][1] = (safe_sub_func_uint8_t_u_u((g_135[1] = 0x84L), (g_934 = p_41))))), (safe_mod_func_int32_t_s_s(((l_937 = g_469) != (g_656 > (p_41 && p_41))), p_41)))) | p_41)) ^ 0UL), p_41)) >= l_938)) != 255UL)))
                    {
                        short l_955 = 0x4E81L;
                        l_955 = (safe_mod_func_uint64_t_u_u(p_41, func_64(l_942, g_212[0], l_750.f0, (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(((((l_750.f4 = (g_447[7].f2 == (safe_lshift_func_uint16_t_u_s((l_950 = (l_949 = (l_730[5] = l_758.f1))), 8)))) && 1UL) != (safe_mul_func_uint8_t_u_u(p_41, (safe_mul_func_int8_t_s_s(p_41, g_639))))) > g_85[0].f1), p_41)) || g_85[0].f0), l_942)))));
                        return l_949;
                    }
                    else
                    {
                        return g_605;
                    }
                }
                l_758 = l_956;
            }
            else
            {
                unsigned long long l_977 = 0xCA9D4647209358A7LL;
                int l_978 = 0x39922751L;
                struct S0 l_1020 = {0xB4E9AF71L,20,235,0,-3714};
                if (g_913[1][9][2])
                {
                    int l_968 = 0L;
                    int l_979 = 0xED343F6EL;
                    for (p_41 = 17; (p_41 > 28); p_41++)
                    {
                        int l_963 = (-7L);
                        l_728[1][1] = (g_17 < g_913[0][8][3]);
                        g_447[7].f4 = func_74((l_979 = ((safe_rshift_func_uint16_t_u_s(p_41, (safe_mod_func_int8_t_s_s((l_963 = p_41), p_41)))) && ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_968 || ((g_939 = ((p_41 != g_456) & (((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(g_598, 4)), 4)) & (((safe_div_func_int8_t_s_s(func_64((0xE6588133BC01FE35LL || (l_977 = g_7[9])), p_41, g_517, g_517), g_449.f1)) == l_963) != g_447[7].f3)), l_730[0])) && l_942) | p_41) <= p_41) != l_963))) & l_978)), 12)), 7L)) > p_41))), l_750.f2, p_41, l_968);
                    }
                    l_730[0] = l_978;
                    if (p_41)
                        break;
                }
                else
                {
                    int l_996 = 0x0DF2F6FDL;
                    if (func_74((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((func_64(l_942, func_74((g_447[7].f4 > ((safe_lshift_func_uint8_t_u_u((g_212[1] != (safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((g_386 = ((safe_add_func_uint16_t_u_u(l_750.f2, func_74(p_41, g_913[0][8][3], g_85[0].f4, l_749))) & 0xEDC5108CL)) && g_158[4][8]), g_449.f3)), p_41)) == g_913[0][8][3]), (-1L)))), 4)) < l_996)), g_63, l_997[2][2], p_41), g_449.f3, l_978) ^ 0xB121E758L), g_456)), l_998)), p_41)), g_280, p_41, l_999))
                    {
                        unsigned short l_1002 = 0x6089L;
                        struct S0 l_1019 = {0UL,-1,1178,3,-1422};
                        l_758.f1 = (safe_mod_func_uint64_t_u_u(l_1002, (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_996 = (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(l_996, 4)) > (0L < g_85[0].f0)), ((p_41 ^ (p_41 & (p_41 <= (p_41 == p_41)))) == 0xBB77L)))), g_158[7][5])), 4294967294UL))));
                        g_1016[4] = (safe_lshift_func_int8_t_s_u(0x79L, ((!l_978) >= ((l_1018 = ((p_41 ^ ((p_41 ^ ((~g_1013) & func_74(g_725, p_41, g_449.f3, (g_1016[3] = func_64((safe_lshift_func_uint8_t_u_u(p_41, p_41)), g_85[0].f2, g_395[8], g_469))))) <= p_41)) || l_1017[8][0])) & l_977))));
                        l_1019 = g_85[0];
                    }
                    else
                    {
                        g_447[5] = g_85[0];
                    }
                    if ((l_978 = g_280))
                    {
                        l_978 = g_445;
                        g_604 = (~0x033FC604L);
                    }
                    else
                    {
                        unsigned char l_1028[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1028[i] = 1UL;
                        l_978 = 0xE3438F58L;
                        l_1020 = (l_750 = l_758);
                        l_978 = (func_74(p_41, (l_749 = (safe_lshift_func_uint8_t_u_u((l_949 = (safe_sub_func_uint64_t_u_u(func_64((l_728[1][1] || (g_212[1] | (g_447[7].f2 && l_1025))), (l_758.f4 = l_744), (g_1026 = l_730[1]), p_41), l_1027))), 0))), g_449.f4, l_1028[0]) > 0xCD0870F0FB1C4C3ALL);
                        g_639 = ((g_373 >= p_41) & 2L);
                    }
                    if (l_750.f1)
                        continue;
                }
                if (((safe_lshift_func_int16_t_s_s(((func_64((((g_1016[3] = 0x4030B517L) & func_74((safe_div_func_int32_t_s_s(func_64((l_750.f4 = l_730[0]), g_645, func_64(l_1033, g_386, p_41, g_456), (l_728[1][1] = p_41)), l_1034)), g_939, l_1035, l_1020.f4)) & 0xB463L), l_998, g_483, l_1020.f3) ^ 0x1DL) && l_978), 10)) == l_1025))
                {
                    int l_1036 = 1L;
                    struct S0 l_1044 = {4294967295UL,13,1203,1,-2545};
                    l_730[0] = (l_1036 & ((safe_lshift_func_int8_t_s_u(((g_598 ^ l_758.f4) & (g_598 | ((safe_div_func_int16_t_s_s(((~(l_949 = (g_7[9] && ((safe_mul_func_int8_t_s_s(g_447[7].f0, func_64(p_41, g_913[0][8][3], g_447[7].f1, p_41))) & p_41)))) == p_41), g_447[7].f3)) < 0x0B00F241L))), 4)) || g_913[0][5][4]));
                    if (p_41)
                    {
                        l_1044 = l_1043[1];
                    }
                    else
                    {
                        unsigned short l_1049[9][2][4] = {{{4UL,0xCC61L,65535UL,65535UL},{65531UL,65531UL,0x8164L,0UL}},{{9UL,0xC710L,65535UL,0xC8C4L},{65535UL,0xC8C4L,4UL,65535UL}},{{65531UL,0xC8C4L,0UL,0xC8C4L},{0xC8C4L,0xC710L,65535UL,0UL}},{{0xF3D6L,65531UL,4UL,65535UL},{9UL,0xCC61L,0x0EB1L,0xC8C4L}},{{9UL,4UL,4UL,9UL},{0xF3D6L,0xC8C4L,65535UL,4UL}},{{0xC8C4L,0xCC61L,0UL,0UL},{65531UL,0xF3D6L,4UL,0UL}},{{65535UL,0xCC61L,65535UL,4UL},{9UL,0xC8C4L,0x8164L,9UL}},{{9UL,65535UL,0xF3D6L,0UL},{65535UL,0xC8C4L,0xF3D6L,0xF3D6L}},{{9UL,9UL,0UL,65531UL},{0xCC61L,4UL,0xC710L,0UL}}};
                        int i, j, k;
                        g_447[5] = g_85[0];
                        l_758 = l_1044;
                        l_758.f4 = (g_1016[3] = (safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s(p_41, g_135[4])), l_1049[2][0][0])));
                        if (g_469)
                            break;
                    }
                }
                else
                {
                    unsigned long long l_1059[7] = {18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551615UL,18446744073709551615UL};
                    int l_1060 = 0x0C1D6FD5L;
                    struct S0 l_1061[7][8] = {{{0xBEAE357CL,-27,1211,2,-399},{0x23856C97L,19,717,4,3493},{6UL,-42,658,1,-1839},{0x26A34B02L,34,1445,0,-3309},{4294967295UL,-0,977,3,3262},{1UL,-5,788,3,2012},{4294967295UL,-0,977,3,3262},{0x26A34B02L,34,1445,0,-3309}},{{4294967295UL,-0,977,3,3262},{1UL,-5,788,3,2012},{4294967295UL,-0,977,3,3262},{0x26A34B02L,34,1445,0,-3309},{6UL,-42,658,1,-1839},{0x23856C97L,19,717,4,3493},{0xBEAE357CL,-27,1211,2,-399},{3UL,4,194,3,3213}},{{0UL,-34,169,0,2238},{6UL,-42,658,1,-1839},{4294967295UL,27,1140,1,-1660},{0x23856C97L,19,717,4,3493},{0x23856C97L,19,717,4,3493},{4294967295UL,27,1140,1,-1660},{6UL,-42,658,1,-1839},{0UL,-34,169,0,2238}},{{0UL,-34,169,0,2238},{0x26A34B02L,34,1445,0,-3309},{0x13AC18E2L,12,403,2,-1069},{4294967295UL,-0,977,3,3262},{6UL,-42,658,1,-1839},{0x08604041L,-38,1047,0,1706},{4294967295UL,27,1140,1,-1660},{0x08604041L,-38,1047,0,1706}},{{4294967295UL,-0,977,3,3262},{0x9D58403CL,11,216,3,-2289},{3UL,4,194,3,3213},{0x9D58403CL,11,216,3,-2289},{4294967295UL,-0,977,3,3262},{0x08604041L,-38,1047,0,1706},{1UL,-5,788,3,2012},{6UL,-42,658,1,-1839}},{{0xBEAE357CL,-27,1211,2,-399},{0x26A34B02L,34,1445,0,-3309},{0x9D58403CL,11,216,3,-2289},{4294967295UL,-34,771,2,-3199},{4294967295UL,27,1140,1,-1660},{4294967295UL,27,1140,1,-1660},{4294967295UL,-34,771,2,-3199},{0x9D58403CL,11,216,3,-2289}},{{6UL,-42,658,1,-1839},{6UL,-42,658,1,-1839},{0x9D58403CL,11,216,3,-2289},{0UL,-34,169,0,2238},{0x13AC18E2L,12,403,2,-1069},{0x23856C97L,19,717,4,3493},{1UL,-5,788,3,2012},{0xBEAE357CL,-27,1211,2,-399}}};
                    int i, j;
                    if (p_41)
                        break;
                    g_447[7] = l_750;
                    for (g_934 = 17; (g_934 == 21); g_934++)
                    {
                        unsigned l_1052 = 0x4C7C02EDL;
                        l_1052 = func_74(p_41, p_41, l_906, g_605);
                        l_750.f4 = (g_85[0].f3 | (g_939 & (~(g_212[1] <= l_1043[1].f4))));
                        l_1060 = (g_447[7].f1 = (safe_mod_func_int32_t_s_s(0xFE906C49L, (safe_add_func_int16_t_s_s((p_41 && (-1L)), (+func_64(g_725, (safe_lshift_func_int8_t_s_u(g_373, 5)), p_41, func_64(l_1059[5], (g_445 = g_85[0].f4), g_447[7].f4, g_63))))))));
                    }
                    l_1061[3][2] = l_758;
                }
                l_749 = (safe_rshift_func_uint8_t_u_u(9UL, 2));
                l_730[0] = (((func_74((l_1020.f4 = l_1043[1].f3), ((g_158[7][0] = func_64((g_445 = func_64(((l_1043[1].f1 ^ ((safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((g_447[7].f0 = (safe_add_func_uint16_t_u_u(65535UL, g_386))), (~(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_41 >= (g_7[9] == l_1020.f0)), (((safe_mod_func_int8_t_s_s((l_949 | ((safe_add_func_uint8_t_u_u(l_1020.f0, (-5L))) ^ p_41)), 254UL)) && p_41) <= 0UL))), 2)), 12)) != g_1016[6]) < g_1013)))) <= 18446744073709551611UL) < 0x68D1E379D6FC778CLL), 8L)) & p_41)) == l_728[2][3]), g_449.f4, l_758.f3, p_41)), g_449.f3, p_41, l_942)) <= p_41), g_447[7].f3, g_7[9]) == l_1020.f2) & g_597) <= g_395[8]);
            }
            if ((safe_sub_func_int64_t_s_s((g_158[4][8] >= (safe_sub_func_uint16_t_u_u(7UL, ((l_758.f1 = (g_63 != l_749)) < ((p_41 < (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((!p_41), (g_598 = ((safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_1043[1].f4, 0x3BL)), (func_74((l_750.f4 = g_386), p_41, g_447[7].f0, g_280) || g_456))) == 0UL)))), g_449.f2)), 6))) && g_85[0].f4))))), l_1017[2][3])))
            {
                struct S0 l_1096 = {2UL,36,948,3,-1462};
                l_750 = l_1096;
                for (g_1013 = 1; (g_1013 >= 0); g_1013 -= 1)
                {
                    int i, j;
                    l_750 = (l_1043[0] = l_1096);
                    l_1043[1].f4 = g_300[g_1013][g_1013];
                    l_1101 = (safe_rshift_func_uint16_t_u_s((l_1043[1].f4 < (l_1018 <= (safe_rshift_func_int8_t_s_u(func_64(g_447[7].f2, p_41, func_74(g_374, (18446744073709551609UL && g_469), g_598, l_1096.f0), p_41), 4)))), 8));
                    g_85[0].f4 = (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((-3L) | (safe_mod_func_uint64_t_u_u((((l_1033 == ((safe_sub_func_int64_t_s_s((+1L), l_1017[1][0])) & ((g_386 = 1UL) < (((((safe_add_func_uint32_t_u_u(g_85[0].f1, ((l_949 = (((l_1096.f1 = (g_1114 | p_41)) ^ l_1043[1].f2) && g_725)) >= g_300[g_1013][g_1013]))) && p_41) | l_1043[1].f4) & l_1096.f3) >= l_1096.f4)))) && 0xA5FEE324L) != p_41), g_605))), 0xCC43L)), g_913[1][5][0]));
                }
                return p_41;
            }
            else
            {
                char l_1127 = 0x1FL;
                int l_1128 = 0xE8349CB2L;
                int l_1129 = 1L;
                g_85[0].f1 = (l_1043[1].f1 = (safe_mul_func_int8_t_s_s(0x00L, (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((func_74((l_758.f1 = (g_373 ^ (safe_mul_func_uint16_t_u_u((g_158[6][2] = l_1101), (safe_sub_func_uint64_t_u_u((l_1043[1].f4 = 18446744073709551615UL), (0xF9DBA054134CE1FDLL >= 0x2BC8193AD7CB6904LL))))))), p_41, g_1026, (l_1127 = (safe_sub_func_uint16_t_u_u(p_41, 0x3297L)))) && 0xDE1126E1L), l_1128)), 0x88L)))));
                if (l_1129)
                    break;
            }
            for (l_949 = 0; (l_949 == 21); ++l_949)
            {
                l_758 = (g_447[7] = g_85[0]);
                l_750 = g_449;
                for (l_1027 = 0; (l_1027 > 21); l_1027 = safe_add_func_uint16_t_u_u(l_1027, 7))
                {
                    return g_934;
                }
            }
            for (g_656 = 19; (g_656 == 43); g_656++)
            {
                l_758 = (g_85[0] = l_758);
                g_85[0] = l_758;
            }
        }
        if (l_999)
            break;
    }
    if ((safe_lshift_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(g_639, (safe_div_func_int32_t_s_s((1L ^ (safe_mul_func_uint16_t_u_u((l_1017[8][0] <= (safe_add_func_int32_t_s_s(p_41, (func_50(g_913[1][7][4], (safe_mod_func_uint32_t_u_u(func_74((l_758.f1 = 0x2EE0L), (func_74(func_50(((l_906 = (safe_sub_func_int8_t_s_s(p_41, p_41))) <= (safe_mod_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(func_64((((((p_41 <= l_728[1][0]) > g_449.f2) == 0xABL) == l_1017[8][0]) > 0x26BFL), g_449.f0, g_212[1], g_447[7].f3), 3)) < p_41) == 1UL) <= 0x9DB603F2577D0C3BLL), p_41)) >= l_1017[5][2]), g_386))), p_41, l_730[0], l_1017[6][0], g_1026), p_41, p_41, g_7[9]) < (-5L)), g_1026, g_656), p_41)), l_729[0], l_1017[8][0], p_41) | p_41)))), l_1017[8][0]))), l_46)))) || l_1156), g_1016[3])))
    {
        short l_1172 = 0xE053L;
        struct S0 l_1174 = {0xB4208DD3L,17,786,1,-3865};
        long long l_1216 = 0x6F64BEAF14D647D8LL;
        for (g_597 = 8; (g_597 >= 0); g_597 -= 1)
        {
            int l_1165 = 0x96BC8AA4L;
            unsigned char l_1173 = 255UL;
            int i;
            if ((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_41 ^ (l_758.f4 = g_725)), g_395[6])), (g_939 = g_280))), (safe_mul_func_int16_t_s_s(((l_1165 = p_41) == 0x73L), func_74(((((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(1L, (1L != ((safe_div_func_int32_t_s_s(p_41, 0x8375601FL)) && l_1172)))), 1L)) > l_1173) && 65531UL) < 0x43BBEE65L), l_1035, g_395[8], g_17))))))
            {
                unsigned l_1182[5];
                struct S0 l_1183 = {0UL,13,143,2,-1088};
                int i;
                for (i = 0; i < 5; i++)
                    l_1182[i] = 0x4CBA154BL;
                g_447[0] = l_1174;
                for (g_598 = 0; (g_598 <= 8); g_598 += 1)
                {
                    int l_1181 = 3L;
                    l_1165 = 0xDDAA6467L;
                    for (g_483 = 0; (g_483 <= 8); g_483 += 1)
                    {
                        int i, j;
                        l_758 = l_758;
                        g_447[7].f4 = ((l_1165 = ((((g_158[g_598][g_597] || ((safe_rshift_func_uint16_t_u_u(g_158[g_483][(g_483 + 1)], g_447[7].f1)) < (((safe_lshift_func_int8_t_s_s((g_158[5][7] || func_74(g_158[g_483][(g_483 + 1)], g_447[7].f0, g_913[1][2][2], l_1181)), 0)) != 0xA5C7L) >= g_656))) >= l_1182[2]) ^ g_656) & p_41)) | g_158[0][8]);
                        l_1183 = g_447[4];
                        if (p_41)
                            break;
                    }
                }
                if (g_85[0].f0)
                    break;
            }
            else
            {
                char l_1186 = 0x5BL;
                char l_1191 = 3L;
                unsigned l_1192 = 5UL;
                l_906 = ((safe_mod_func_uint16_t_u_u(p_41, p_41)) || (g_913[1][8][2] < l_1186));
                for (g_1026 = 8; (g_1026 >= 1); g_1026 -= 1)
                {
                    int l_1193 = 1L;
                    int i, j;
                    g_604 = 0xC9CFAF0EL;
                    if ((safe_mod_func_uint8_t_u_u((((~0xFF52AB47F78B77A5LL) == (safe_rshift_func_uint8_t_u_u(func_50(g_158[g_597][g_597], g_913[0][8][0], (g_85[0].f2 <= (l_1191 = 0L)), p_41, p_41), ((g_1026 > p_41) <= l_1192)))) >= l_1193), g_725)))
                    {
                        return g_1114;
                    }
                    else
                    {
                        return p_41;
                    }
                }
            }
            if (g_386)
                continue;
            g_447[7].f4 = (safe_mod_func_int32_t_s_s((+g_645), l_1017[5][2]));
        }
        if (l_730[0])
        {
            unsigned short l_1200[1];
            int l_1209 = 0xFFD27961L;
            long long l_1223 = (-7L);
            int i;
            for (i = 0; i < 1; i++)
                l_1200[i] = 0x2AB9L;
            l_1216 = ((safe_lshift_func_int8_t_s_s((l_1200[0] = 0xD0L), 3)) || ((safe_mul_func_uint16_t_u_u(func_50(g_386, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((l_1174.f4 > p_41), 3)), (safe_mul_func_int16_t_s_s(l_1209, (safe_div_func_int16_t_s_s(g_645, ((!65527UL) || (((safe_unary_minus_func_int64_t_s(0x862B4B8D883A3C99LL)) && (~(safe_div_func_uint32_t_u_u((p_41 | l_1174.f1), l_758.f0)))) || 1L)))))))), l_728[1][1], p_41, l_1215[2]), g_645)) < g_483));
            g_725 = ((l_1174.f1 = (p_41 = (safe_lshift_func_uint8_t_u_u((g_725 <= (safe_rshift_func_uint8_t_u_s(255UL, (0x8FL != (-1L))))), 6)))) && ((~(safe_sub_func_int16_t_s_s(p_41, (0UL != ((func_64(l_1223, g_212[1], g_300[1][0], p_41) < 0xD0L) == l_1223))))) >= g_447[7].f4));
        }
        else
        {
            short l_1232 = 0x6356L;
            int l_1243 = 0xBF700747L;
            int l_1244 = 0x5386B4EEL;
            int l_1247 = (-6L);
            l_758 = g_85[0];
            l_730[0] = ((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(p_41, (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(func_47(p_41, g_449.f1), 12)), l_1232)))), (((!g_934) & ((g_1026 = (safe_rshift_func_int16_t_s_s(g_17, 6))) < p_41)) <= p_41))) > g_913[0][8][3]);
            l_1247 = ((safe_mod_func_uint8_t_u_u(0x1BL, (safe_sub_func_int16_t_s_s(((((l_1244 = (safe_div_func_int32_t_s_s(p_41, ((p_41 > (-10L)) && (safe_lshift_func_int16_t_s_u((0x3FC87AD4039BB5ECLL | (l_1243 = l_1232)), l_730[9])))))) <= (safe_mul_func_int16_t_s_s((0x17FDF9FA3F14CF03LL & g_605), g_913[0][8][3]))) >= l_729[1]) & l_730[0]), l_729[4])))) == p_41);
            l_1174.f1 = 3L;
        }
    }
    else
    {
        int l_1256[2];
        int l_1259 = 0L;
        int i;
        for (i = 0; i < 2; i++)
            l_1256[i] = 0x0D90741AL;
        l_1259 = ((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_1256[1] = (g_449.f3 ^ (safe_sub_func_int16_t_s_s(1L, (safe_lshift_func_int16_t_s_u((g_395[1] = p_41), 4)))))), p_41)), (safe_lshift_func_uint16_t_u_u((func_74(p_41, p_41, g_604, g_374) | l_1035), 7)))) || (-5L));
        l_1259 = ((safe_sub_func_int64_t_s_s(0x72CE1686060E4578LL, (g_135[7] || (l_1256[0] = (l_1017[6][1] & (l_728[1][1] = ((l_1259 >= g_447[7].f3) == (safe_sub_func_uint32_t_u_u((l_906 = g_1013), (safe_lshift_func_int16_t_s_u((p_41 <= (safe_add_func_uint16_t_u_u(l_1268, (safe_add_func_uint64_t_u_u(func_64((g_374 = func_64(p_41, l_1259, l_1256[1], p_41)), l_1256[0], l_1256[1], p_41), l_1256[1]))))), g_1016[3]))))))))))) < 0x65C3L);
    }
    return l_1215[2];
}







static unsigned short func_47(short p_48, unsigned short p_49)
{
    int l_62 = 3L;
    char l_69 = 4L;
    int l_83 = (-1L);
    unsigned l_215 = 18446744073709551612UL;
    struct S0 l_601[2][9][7] = {{{{0xE34376C3L,-0,281,4,2865},{0x03B4EFA6L,-16,895,2,-3347},{0xE34376C3L,-0,281,4,2865},{1UL,0,147,3,-1796},{4294967289UL,26,182,0,-1064},{1UL,0,147,3,-1796},{0xE34376C3L,-0,281,4,2865}},{{4294967295UL,33,320,4,-2436},{0xC565604DL,31,1146,4,2122},{0x0EC9D6DFL,18,1145,2,-2088},{4294967295UL,33,320,4,-2436},{4294967295UL,33,320,4,-2436},{0x0EC9D6DFL,18,1145,2,-2088},{0xC565604DL,31,1146,4,2122}},{{0x858C7D1FL,27,337,0,-2233},{1UL,0,147,3,-1796},{0UL,16,448,1,1916},{1UL,0,147,3,-1796},{0UL,16,448,1,1916},{0xAFFA96B5L,-3,609,2,-895},{0UL,27,57,0,2922}},{{0x1EB833DCL,-35,1319,2,161},{1UL,29,552,3,1552},{0x0EC9D6DFL,18,1145,2,-2088},{0x0EC9D6DFL,18,1145,2,-2088},{1UL,29,552,3,1552},{0x1EB833DCL,-35,1319,2,161},{0x0EC9D6DFL,18,1145,2,-2088}},{{0xE34376C3L,-0,281,4,2865},{1UL,0,147,3,-1796},{4294967289UL,26,182,0,-1064},{1UL,0,147,3,-1796},{0xE34376C3L,-0,281,4,2865},{0x03B4EFA6L,-16,895,2,-3347},{0xE34376C3L,-0,281,4,2865}},{{1UL,29,552,3,1552},{0x0EC9D6DFL,18,1145,2,-2088},{0x0EC9D6DFL,18,1145,2,-2088},{1UL,29,552,3,1552},{0x1EB833DCL,-35,1319,2,161},{0x0EC9D6DFL,18,1145,2,-2088},{0x06F93402L,8,690,0,-1232}},{{0UL,16,448,1,1916},{1UL,0,147,3,-1796},{0UL,16,448,1,1916},{0xAFFA96B5L,-3,609,2,-895},{0UL,27,57,0,2922},{0xAFFA96B5L,-3,609,2,-895},{0UL,16,448,1,1916}},{{1UL,29,552,3,1552},{1UL,29,552,3,1552},{0xC565604DL,31,1146,4,2122},{0x06F93402L,8,690,0,-1232},{1UL,29,552,3,1552},{4294967295UL,33,320,4,-2436},{0x06F93402L,8,690,0,-1232}},{{0xE34376C3L,-0,281,4,2865},{0xAFFA96B5L,-3,609,2,-895},{0xC6B4759EL,25,382,1,-2170},{1UL,0,147,3,-1796},{0xC6B4759EL,25,382,1,-2170},{0xAFFA96B5L,-3,609,2,-895},{0xE34376C3L,-0,281,4,2865}}},{{{0x1EB833DCL,-35,1319,2,161},{0x06F93402L,8,690,0,-1232},{0x0EC9D6DFL,18,1145,2,-2088},{0x1EB833DCL,-35,1319,2,161},{1UL,29,552,3,1552},{0x0EC9D6DFL,18,1145,2,-2088},{0x0EC9D6DFL,18,1145,2,-2088}},{{0UL,27,57,0,2922},{1UL,0,147,3,-1796},{0x858C7D1FL,27,337,0,-2233},{1UL,0,147,3,-1796},{0UL,27,57,0,2922},{0x03B4EFA6L,-16,895,2,-3347},{0UL,27,57,0,2922}},{{1UL,29,552,3,1552},{0x1EB833DCL,-35,1319,2,161},{0x0EC9D6DFL,18,1145,2,-2088},{0x06F93402L,8,690,0,-1232},{0x1EB833DCL,-35,1319,2,161},{0x1EB833DCL,-35,1319,2,161},{0x06F93402L,8,690,0,-1232}},{{0xC6B4759EL,25,382,1,-2170},{1UL,0,147,3,-1796},{0xC6B4759EL,25,382,1,-2170},{0xAFFA96B5L,-3,609,2,-895},{0xE34376C3L,-0,281,4,2865},{0xAFFA96B5L,-3,609,2,-895},{0xC6B4759EL,25,382,1,-2170}},{{1UL,29,552,3,1552},{0x06F93402L,8,690,0,-1232},{0xC565604DL,31,1146,4,2122},{1UL,29,552,3,1552},{1UL,29,552,3,1552},{0xC565604DL,31,1146,4,2122},{0x06F93402L,8,690,0,-1232}},{{0UL,27,57,0,2922},{0xAFFA96B5L,-3,609,2,-895},{0UL,16,448,1,1916},{1UL,0,147,3,-1796},{0UL,16,448,1,1916},{0xAFFA96B5L,-3,609,2,-895},{0UL,27,57,0,2922}},{{0x1EB833DCL,-35,1319,2,161},{1UL,29,552,3,1552},{0x0EC9D6DFL,18,1145,2,-2088},{0x0EC9D6DFL,18,1145,2,-2088},{1UL,29,552,3,1552},{0x1EB833DCL,-35,1319,2,161},{0x0EC9D6DFL,18,1145,2,-2088}},{{0xE34376C3L,-0,281,4,2865},{1UL,0,147,3,-1796},{4294967289UL,26,182,0,-1064},{1UL,0,147,3,-1796},{0xE34376C3L,-0,281,4,2865},{0x03B4EFA6L,-16,895,2,-3347},{0xE34376C3L,-0,281,4,2865}},{{1UL,29,552,3,1552},{0x0EC9D6DFL,18,1145,2,-2088},{0x0EC9D6DFL,18,1145,2,-2088},{1UL,29,552,3,1552},{0x1EB833DCL,-35,1319,2,161},{0x0EC9D6DFL,18,1145,2,-2088},{0x06F93402L,8,690,0,-1232}}}};
    unsigned l_636 = 0x75F64115L;
    char l_722[9][3] = {{0x1FL,0x1FL,0x1FL},{1L,1L,1L},{0x1FL,0x1FL,0x1FL},{1L,1L,1L},{0x1FL,0x1FL,0x1FL},{1L,1L,1L},{0x1FL,0x1FL,0x1FL},{1L,1L,1L},{0x1FL,0x1FL,0x1FL}};
    int i, j, k;
    l_62 = (func_50(((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_62, (g_63 = p_48))), 0xD5D2985DL)), (g_7[9] > (func_64(l_69, (+0x3003F8612730C409LL), p_48, (safe_mod_func_int64_t_s_s((((safe_add_func_uint32_t_u_u(func_74((safe_mul_func_uint8_t_u_u(254UL, (safe_add_func_int64_t_s_s((l_83 = 0x969C113E7BE80AACLL), p_48)))), g_17, p_49, l_62), l_62)) || g_135[1]) != l_62), g_7[9]))) < 0x2D0A6261L)))) <= p_49), g_7[9], l_69, p_48, l_215) <= p_49);
    for (l_69 = 0; (l_69 <= (-5)); --l_69)
    {
        short l_610 = (-4L);
        int l_611 = 0L;
        if (g_63)
        {
            g_447[5] = g_449;
        }
        else
        {
            unsigned l_587 = 6UL;
            long long l_615 = 1L;
            for (g_456 = 0; (g_456 <= 1); g_456 += 1)
            {
                int i;
                for (g_63 = 0; (g_63 <= 1); g_63 += 1)
                {
                    unsigned l_592 = 0x3F5A2B8BL;
                    int l_600 = 0xCDC25D8EL;
                    for (g_374 = 6; (g_374 >= 3); g_374 -= 1)
                    {
                        int i, j;
                        g_447[4] = g_85[0];
                        g_449.f4 = (g_158[g_374][(g_456 + 1)] == 0x2AL);
                        l_62 = (g_17 || (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(((((p_48 >= p_48) && (((safe_lshift_func_uint8_t_u_s(0x56L, 6)) | (+l_587)) > (safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(g_445, func_74(l_592, g_158[0][1], (g_597 = (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((g_469 = g_85[0].f2), 6)) <= 9UL), 4UL))), p_49))), 0x826677C7L)))) != g_517) > p_49))), 4)), p_49)));
                    }
                    for (g_445 = 0; (g_445 <= 1); g_445 += 1)
                    {
                        unsigned long long l_599 = 0x95D460CDAF2B0F31LL;
                        l_600 = (l_599 = (g_598 = p_48));
                        l_600 = p_49;
                    }
                    for (g_449.f0 = 0; (g_449.f0 <= 1); g_449.f0 += 1)
                    {
                        l_601[1][0][6] = g_85[0];
                        if (g_300[0][1])
                            break;
                    }
                    for (g_386 = 0; (g_386 <= 1); g_386 += 1)
                    {
                        return p_49;
                    }
                }
                g_447[2] = g_447[7];
                g_85[0].f4 = (safe_mul_func_int8_t_s_s((g_605 = (g_604 = 0x3CL)), (p_49 ^ func_74(g_135[7], ((safe_mod_func_uint16_t_u_u(((l_611 = ((g_598 < ((safe_sub_func_uint32_t_u_u((g_212[g_456] = l_601[1][0][6].f0), l_69)) > (l_587 != g_158[4][8]))) <= (l_610 && p_48))) > l_610), 0x49A4L)) == p_49), l_587, l_587))));
            }
            for (g_374 = 0; (g_374 <= (-13)); g_374 = safe_sub_func_uint64_t_u_u(g_374, 9))
            {
                l_611 = l_69;
                for (g_604 = 8; (g_604 >= 0); g_604 -= 1)
                {
                    struct S0 l_614 = {0x04D085FEL,-17,609,3,-1765};
                    int i, j;
                    g_447[7].f1 = g_158[g_604][(g_604 + 1)];
                    for (l_215 = 0; (l_215 <= 0); l_215 += 1)
                    {
                        int i, j, k;
                        l_614 = (l_601[0][7][2] = l_601[(l_215 + 1)][g_604][(l_215 + 2)]);
                        l_601[(l_215 + 1)][g_604][(l_215 + 2)].f1 = l_614.f0;
                        if (p_48)
                            break;
                    }
                    if (p_48)
                        continue;
                }
                if (l_615)
                    break;
            }
        }
        g_85[0] = g_85[0];
    }
    if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((0xA3F1L | (safe_lshift_func_uint16_t_u_s((func_64(((safe_rshift_func_uint16_t_u_s((g_598 = ((((g_374 = ((safe_mul_func_uint8_t_u_u((l_601[1][0][6].f4 = (g_300[0][1] <= (l_215 & ((safe_add_func_uint64_t_u_u(g_449.f1, ((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((l_601[1][0][6].f1 = (func_74((g_63 = (p_48 == g_447[7].f2)), ((safe_sub_func_uint64_t_u_u(p_48, (g_605 > (p_49 ^ p_48)))) && 0x28L), p_49, p_49) <= 0x1F006597E560529ELL)) | p_48), 1)), g_604)) >= g_447[7].f3))) == 1UL)))), g_7[9])) && l_601[1][0][6].f0)) != 0x94E45239D83C9609LL) > g_449.f2) || l_636)), l_215)) ^ g_300[0][1]), g_300[0][1], l_601[1][0][6].f3, g_449.f0) || g_447[7].f4), 5))) < l_636), g_449.f1)), 0xFE6A28EFDB7C8F3DLL)), 4L)))
    {
        unsigned l_640 = 1UL;
        int l_641[9][9] = {{0x2EC80323L,(-1L),0x191BC4BAL,0x191BC4BAL,(-1L),0x2EC80323L,0L,(-1L),0L},{0xFC53FBAFL,0xC2A613AFL,0xA1293615L,0xE3BB2C14L,0x6A37B271L,0xE62193F5L,(-1L),0xC2A613AFL,(-1L)},{0x2EC80323L,(-1L),0x191BC4BAL,0x191BC4BAL,(-1L),0x2EC80323L,0L,(-1L),0L},{0xFC53FBAFL,0xC2A613AFL,0xA1293615L,0xE3BB2C14L,0x6A37B271L,0xE62193F5L,(-1L),0xC2A613AFL,(-1L)},{0x2EC80323L,(-1L),0x191BC4BAL,0x191BC4BAL,(-1L),0x2EC80323L,0L,(-1L),0L},{0xFC53FBAFL,0xC2A613AFL,0xA1293615L,0xE3BB2C14L,0x6A37B271L,0xE62193F5L,(-1L),0xC2A613AFL,(-1L)},{0x40DEDA19L,0x2EC80323L,0x1CE0004EL,0x1CE0004EL,0x2EC80323L,0x40DEDA19L,0xD84D7FA4L,0x2EC80323L,0xD84D7FA4L},{1L,0xE62193F5L,0L,0x966C0AD4L,0xFC53FBAFL,4L,0xB2DBF3E1L,0xE62193F5L,0xB2DBF3E1L},{0x40DEDA19L,0x2EC80323L,0x1CE0004EL,0x1CE0004EL,0x2EC80323L,0x40DEDA19L,0xD84D7FA4L,0x2EC80323L,0xD84D7FA4L}};
        int i, j;
        l_641[1][1] = (((l_62 = (-1L)) | ((g_639 = p_49) != (p_49 == l_640))) != g_300[0][1]);
    }
    else
    {
        int l_642 = 0L;
        int l_675 = (-9L);
        unsigned long long l_718[8][9][2] = {{{0x025FD0439A7F3B79LL,0x9A113D8571DCE72DLL},{18446744073709551606UL,0xE94F61CE3D883A7DLL},{18446744073709551606UL,0x9A113D8571DCE72DLL},{0x025FD0439A7F3B79LL,18446744073709551613UL},{0x9A113D8571DCE72DLL,18446744073709551612UL},{0x3CCA6ECCDDF4C338LL,0x025FD0439A7F3B79LL},{0UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551607UL},{0x19954E905E53BEF6LL,0UL}},{{0xFF9812D98DBCF2C2LL,0x3CCA6ECCDDF4C338LL},{0xF7042B834044A04DLL,0x2A57E7198275EFECLL},{18446744073709551612UL,0x2A57E7198275EFECLL},{0xF7042B834044A04DLL,0x3CCA6ECCDDF4C338LL},{0xFF9812D98DBCF2C2LL,0UL},{0x19954E905E53BEF6LL,18446744073709551607UL},{18446744073709551611UL,18446744073709551611UL},{0UL,0x025FD0439A7F3B79LL},{0x3CCA6ECCDDF4C338LL,18446744073709551612UL}},{{0x9A113D8571DCE72DLL,18446744073709551613UL},{0x025FD0439A7F3B79LL,0x9A113D8571DCE72DLL},{18446744073709551606UL,0xE94F61CE3D883A7DLL},{18446744073709551606UL,0x9A113D8571DCE72DLL},{0x025FD0439A7F3B79LL,18446744073709551613UL},{0x9A113D8571DCE72DLL,18446744073709551612UL},{0x3CCA6ECCDDF4C338LL,0x025FD0439A7F3B79LL},{0UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551607UL}},{{0x19954E905E53BEF6LL,0UL},{0xFF9812D98DBCF2C2LL,0x3CCA6ECCDDF4C338LL},{0xF7042B834044A04DLL,0x2A57E7198275EFECLL},{18446744073709551612UL,0x2A57E7198275EFECLL},{0xF7042B834044A04DLL,0x3CCA6ECCDDF4C338LL},{0xFF9812D98DBCF2C2LL,0UL},{0x19954E905E53BEF6LL,18446744073709551607UL},{0x580B2FD2763A0B0ALL,0x580B2FD2763A0B0ALL},{0UL,0xEA22F17683145742LL}},{{0xFF9812D98DBCF2C2LL,0UL},{0x3CCA6ECCDDF4C338LL,0xF7042B834044A04DLL},{0xEA22F17683145742LL,0x3CCA6ECCDDF4C338LL},{0x9A113D8571DCE72DLL,18446744073709551611UL},{0x9A113D8571DCE72DLL,0x3CCA6ECCDDF4C338LL},{0xEA22F17683145742LL,0xF7042B834044A04DLL},{0x3CCA6ECCDDF4C338LL,0UL},{0xFF9812D98DBCF2C2LL,0xEA22F17683145742LL},{0UL,0x580B2FD2763A0B0ALL}},{{0x580B2FD2763A0B0ALL,18446744073709551613UL},{0x2A57E7198275EFECLL,18446744073709551607UL},{0xE94F61CE3D883A7DLL,0xFF9812D98DBCF2C2LL},{0x025FD0439A7F3B79LL,0UL},{0UL,0UL},{0x025FD0439A7F3B79LL,0xFF9812D98DBCF2C2LL},{0xE94F61CE3D883A7DLL,18446744073709551607UL},{0x2A57E7198275EFECLL,18446744073709551613UL},{0x580B2FD2763A0B0ALL,0x580B2FD2763A0B0ALL}},{{0UL,0xEA22F17683145742LL},{0xFF9812D98DBCF2C2LL,0UL},{0x3CCA6ECCDDF4C338LL,0xF7042B834044A04DLL},{0xEA22F17683145742LL,0x3CCA6ECCDDF4C338LL},{0x9A113D8571DCE72DLL,18446744073709551611UL},{0x9A113D8571DCE72DLL,0x3CCA6ECCDDF4C338LL},{0xEA22F17683145742LL,0xF7042B834044A04DLL},{0x3CCA6ECCDDF4C338LL,0UL},{0xFF9812D98DBCF2C2LL,0xEA22F17683145742LL}},{{0UL,0x580B2FD2763A0B0ALL},{0x580B2FD2763A0B0ALL,18446744073709551613UL},{0x2A57E7198275EFECLL,18446744073709551607UL},{0xE94F61CE3D883A7DLL,0xFF9812D98DBCF2C2LL},{0x025FD0439A7F3B79LL,0UL},{0UL,0UL},{0x025FD0439A7F3B79LL,0xFF9812D98DBCF2C2LL},{0xE94F61CE3D883A7DLL,18446744073709551607UL},{0x2A57E7198275EFECLL,18446744073709551613UL}}};
        int i, j, k;
        l_642 = (~0x8D860F28L);
        for (p_48 = 0; (p_48 >= 0); p_48 -= 1)
        {
            int l_648 = 0xC81794A0L;
            int l_679 = 0xF0C5EFA6L;
            if (p_48)
            {
                unsigned char l_649 = 0xDBL;
                l_62 = func_64(p_49, l_636, p_49, p_49);
                l_83 = (g_639 = p_48);
                l_648 = func_64(p_49, (safe_sub_func_int32_t_s_s(0L, (((g_645 = (-1L)) && (p_48 <= ((g_280 = l_642) | (((0x26B740A50EDF8F5ALL != (safe_rshift_func_int8_t_s_u(l_648, (0x2CCF4A3439BD3F99LL == func_74(l_642, l_648, l_649, p_49))))) > l_642) & 0x9FL)))) == 0xF9AE47CDL))), g_373, l_648);
            }
            else
            {
                unsigned l_661 = 4UL;
                int l_678 = (-10L);
                if (p_49)
                {
                    char l_662 = (-1L);
                    int l_688 = 0L;
                    if ((g_604 = ((safe_sub_func_uint64_t_u_u((((g_639 || (safe_lshift_func_int8_t_s_u(((0xF4C7D419L >= func_74((safe_mul_func_int8_t_s_s((g_656 = p_48), (safe_div_func_int16_t_s_s((!(g_395[1] = 9L)), g_469)))), func_64((0xB3E64056L < (safe_mod_func_uint8_t_u_u(7UL, g_447[7].f3))), (!0x541581588D3286E3LL), g_300[0][1], g_447[7].f0), l_661, g_605)) ^ 0xB4741AC7L), p_49))) || l_661) > p_49), p_49)) || l_662)))
                    {
                        g_447[7].f4 = (safe_lshift_func_int16_t_s_s(0L, 12));
                        g_639 = (65530UL && (func_64(((l_648 & (safe_div_func_uint32_t_u_u((l_648 | func_50((l_642 && (g_386 = (safe_add_func_int64_t_s_s((0xAFF2B0A51C313F0CLL >= (safe_mul_func_uint16_t_u_u(p_48, ((safe_add_func_uint16_t_u_u(p_48, (g_447[7].f1 & (l_675 = func_64((l_601[1][0][6].f1 = 0L), l_661, p_48, p_49))))) >= p_49)))), p_48)))), p_49, l_661, p_48, p_48)), 4294967287UL))) || g_605), l_648, g_517, g_645) <= p_48));
                        if (l_601[1][0][6].f3)
                            continue;
                    }
                    else
                    {
                        if (l_215)
                            break;
                        l_675 = g_447[7].f2;
                    }
                    l_688 = ((((g_517 >= (l_678 = (248UL <= (g_456 = (safe_mod_func_int8_t_s_s((l_648 = 0x28L), 254UL)))))) >= l_679) == (safe_rshift_func_int16_t_s_u((~p_49), (safe_mul_func_int8_t_s_s(((func_64((safe_sub_func_int16_t_s_s((l_642 >= (safe_mul_func_uint16_t_u_u(g_598, 65530UL))), p_49)), l_69, g_597, p_48) | p_49) && 18446744073709551612UL), g_449.f2))))) | g_447[7].f0);
                    if (l_679)
                        break;
                }
                else
                {
                    char l_693[2][9] = {{0xE6L,0x42L,0x42L,0xE6L,0x16L,(-3L),0x16L,0xE6L,0x42L},{0x16L,0x16L,0xE3L,(-3L),3L,(-3L),0xE3L,0x16L,0x16L}};
                    int l_694 = 0L;
                    int i, j;
                    if (((g_469 = g_639) || (l_661 >= p_48)))
                    {
                        int l_695 = 0x74346A2EL;
                        l_679 = g_447[7].f4;
                        l_694 = (safe_sub_func_uint32_t_u_u(p_49, ((l_675 | (safe_lshift_func_int8_t_s_u(p_49, 5))) & (l_693[0][5] = g_447[7].f3))));
                        l_695 = (-7L);
                        return l_636;
                    }
                    else
                    {
                        unsigned long long l_710[1];
                        int l_715 = (-8L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_710[i] = 18446744073709551615UL;
                        g_85[0].f1 = (safe_add_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_300[1][0] = (l_718[1][2][0] = ((safe_rshift_func_uint8_t_u_u((0x539BA59BFBAC284CLL != (func_64((l_679 = (l_710[0] = g_447[7].f1)), g_85[0].f4, (safe_rshift_func_int16_t_s_s((!(safe_rshift_func_uint16_t_u_u((g_598 = g_645), p_49))), 13)), (l_648 = l_715)) != 0L)), (safe_mod_func_int16_t_s_s(p_48, p_49)))) < 0UL))), 246UL)), g_63)), 0x9506BDA3L)), g_395[8])) < (-3L)), l_694));
                        return l_718[1][2][0];
                    }
                }
                for (g_456 = 0; g_456 < 8; g_456 += 1)
                {
                    struct S0 tmp = {1UL,-6,1380,2,2171};
                    g_447[g_456] = tmp;
                }
                g_604 = (((l_62 | p_49) < (safe_sub_func_uint64_t_u_u(((g_445 = (((p_48 < (safe_unary_minus_func_uint16_t_u((l_722[6][1] || 0x02CE9C00L)))) >= (safe_mod_func_uint32_t_u_u(p_48, (l_83 = g_605)))) <= 0x1CL)) & (p_48 > 0xB7CEE2705F821519LL)), (-1L)))) & p_48);
            }
            for (l_679 = 0; (l_679 >= 0); l_679 -= 1)
            {
                int i;
                g_639 = (g_449.f2 == 0xAA81C005L);
                g_447[0] = g_85[l_679];
            }
        }
    }
    return p_49;
}







static unsigned char func_50(int p_51, unsigned long long p_52, unsigned char p_53, unsigned p_54, short p_55)
{
    unsigned char l_218 = 1UL;
    int l_220 = 0x79F8ACBFL;
    int l_222 = 0x977A379CL;
    unsigned short l_299[4][4][10] = {{{0UL,0x26B4L,0xF05DL,0xE91AL,0x3014L,1UL,0UL,65535UL,1UL,0UL},{0UL,0x800DL,1UL,5UL,0UL,65535UL,2UL,65530UL,65535UL,0x428AL},{0x4306L,65530UL,0UL,0UL,0UL,0xC13AL,65535UL,1UL,0xC76DL,0x5EB0L},{65530UL,0xFA2EL,0xE91AL,0x26B4L,0xA1F6L,0UL,0xD14CL,0x4081L,7UL,0xDD27L}},{{0xAFB2L,0x3014L,0UL,0xC6F9L,8UL,0x35ADL,6UL,0UL,65533UL,0xC76DL},{0xC76DL,0UL,0x5EB0L,0x6B14L,0UL,65535UL,3UL,0UL,0x800DL,0x800DL},{8UL,0xC6F9L,0x800DL,0UL,0UL,0x800DL,0xC6F9L,8UL,1UL,0x2A7FL},{0xA1F6L,5UL,0x7824L,2UL,0xAFB2L,0UL,65535UL,0x6C6CL,0UL,0UL}},{{0x2A7FL,0x5EB0L,0x7824L,0xAFB2L,0UL,0x6C6CL,8UL,8UL,65535UL,0x4306L},{6UL,0x528BL,0x800DL,0x2A7FL,0x7824L,0UL,0x35ADL,65535UL,0xAFB2L,65532UL},{1UL,0x5EB0L,0x26B4L,65532UL,0UL,65535UL,65535UL,65526UL,0UL,65533UL},{65526UL,0xC13AL,0x9F7AL,0xE91AL,0UL,0UL,6UL,3UL,1UL,0x35ADL}},{{65527UL,0UL,1UL,65529UL,7UL,8UL,0xBDF2L,65531UL,0x3014L,0x8D76L},{0x5EB0L,7UL,0xF05DL,65533UL,0xD14CL,2UL,65531UL,0x7824L,0UL,0x7824L},{0x2DA0L,1UL,65531UL,0x622BL,65531UL,1UL,0x2DA0L,0xAFB2L,3UL,0UL},{65535UL,65535UL,0x3014L,65535UL,65533UL,0xC6F9L,0x428AL,65527UL,65535UL,0xAFB2L}}};
    int l_336[10][3] = {{(-5L),0x41DBD2F2L,0L},{0x41DBD2F2L,(-5L),0L},{0x045376FBL,0x045376FBL,0L},{(-5L),0x41DBD2F2L,0L},{0x41DBD2F2L,(-5L),0L},{0x045376FBL,0x045376FBL,0L},{(-5L),0x41DBD2F2L,0L},{0x41DBD2F2L,(-5L),0L},{0x045376FBL,0x045376FBL,0L},{(-5L),0x41DBD2F2L,0L}};
    struct S0 l_337 = {7UL,-24,589,2,4003};
    unsigned short l_362 = 0xC374L;
    char l_476 = 3L;
    int i, j, k;
    for (p_51 = 0; (p_51 == 10); ++p_51)
    {
        short l_219 = 0x0FEBL;
        int l_221 = 0xD49E9B30L;
        int l_230 = (-1L);
        struct S0 l_268 = {0UL,-20,306,4,2745};
        short l_297 = (-1L);
        l_222 = (l_221 = (l_220 = (l_219 = l_218)));
        if ((((!p_51) ^ 0x1256L) ^ (safe_sub_func_uint16_t_u_u(l_219, l_221))))
        {
            long long l_225 = 0L;
            int l_271 = 0x78714E5AL;
            int l_301 = 0xC0B517CFL;
            int l_303 = 0x58A8DD20L;
            if ((((l_221 = (0x0BFEL || l_225)) <= (p_55 <= p_52)) & func_64(g_85[0].f1, p_51, p_51, ((safe_div_func_int32_t_s_s((!((p_54 < l_218) > 0x2247L)), g_17)) ^ 0UL))))
            {
                unsigned l_253 = 0xDCD77AE1L;
                int l_260 = 0x3E7B376BL;
                for (l_221 = 28; (l_221 == 14); l_221--)
                {
                    l_230 = (g_212[1] | 0x399AEB2DA1838799LL);
                    g_85[0].f1 = ((safe_mul_func_uint16_t_u_u((g_158[2][0] = 0x8BC7L), (((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(p_51, 0x27DEL)), 2)) >= (l_220 = (safe_sub_func_int64_t_s_s(((g_135[1] <= l_220) >= (safe_add_func_uint32_t_u_u((0x11ECB1D280DFA0F3LL >= ((safe_rshift_func_int8_t_s_s(g_63, (l_220 && (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((l_230 != 0x0FDDL) >= g_85[0].f3), p_55)), 4L)), g_85[0].f2)), g_85[0].f1))))) > p_54)), 0xA71F3DFEL))), p_51)))) > g_212[0]))) != g_17);
                }
                if ((safe_rshift_func_int16_t_s_s(p_53, func_64(l_253, (0L >= ((l_225 & (((l_260 = func_74((safe_mul_func_uint16_t_u_u((0x9B6BL <= (safe_sub_func_uint16_t_u_u(g_212[1], ((safe_lshift_func_uint8_t_u_u((l_230 < ((p_54 <= l_225) | 3UL)), 0)) ^ l_253)))), g_135[1])), p_51, l_253, p_54)) ^ 7L) ^ 0x6552C6B39B4082F0LL)) < 0x714449521B49657BLL)), l_220, g_17))))
                {
                    struct S0 l_261 = {0UL,27,715,0,-1201};
                    g_85[0].f4 = g_158[0][6];
                    l_261 = g_85[0];
                }
                else
                {
                    if (p_54)
                        break;
                }
                for (l_225 = (-29); (l_225 == 1); l_225 = safe_add_func_uint64_t_u_u(l_225, 9))
                {
                    for (p_53 = 0; (p_53 <= 1); p_53 += 1)
                    {
                        int i;
                        g_85[0].f1 = g_212[p_53];
                    }
                    for (l_253 = 0; (l_253 <= 0); l_253 += 1)
                    {
                        unsigned short l_264 = 1UL;
                        l_222 = (g_212[1] >= l_264);
                    }
                    if (g_63)
                        break;
                    for (p_55 = 14; (p_55 >= (-29)); p_55--)
                    {
                        g_85[0].f4 = 0L;
                    }
                }
            }
            else
            {
                unsigned char l_267 = 1UL;
                int l_274[10] = {0x210C7448L,(-4L),(-7L),0x210C7448L,0L,0L,0x210C7448L,(-7L),0x210C7448L,0L};
                char l_298 = 0x5CL;
                int l_302 = 0x9A285613L;
                int i;
                if (l_267)
                {
                    g_85[0] = l_268;
                    for (l_221 = 0; (l_221 > 7); l_221 = safe_add_func_uint16_t_u_u(l_221, 1))
                    {
                        l_268 = l_268;
                        if (g_135[1])
                            continue;
                    }
                    g_85[0].f4 = 0x492963F9L;
                    l_271 = p_54;
                }
                else
                {
                    for (l_267 = (-16); (l_267 != 57); l_267 = safe_add_func_int32_t_s_s(l_267, 6))
                    {
                        l_274[1] = p_51;
                        if (g_85[0].f0)
                            break;
                    }
                }
                l_271 = (((l_274[1] = l_220) >= (func_64((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_85[0].f3 || (safe_unary_minus_func_int32_t_s(((func_74(g_85[0].f3, g_7[9], l_271, g_17) ^ (g_280 = 0L)) & 255UL)))), 2L)), 3UL)), p_54, p_54, g_158[4][8]) || l_271)) || g_17);
                g_85[0].f1 = ((((safe_lshift_func_int16_t_s_s(((l_225 ^ (p_51 || (func_74((l_303 = (safe_rshift_func_int8_t_s_u((l_302 = (((l_301 = (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((l_271 = (l_274[1] = ((((g_300[0][1] = func_64(g_85[0].f1, ((p_52 | (safe_sub_func_int16_t_s_s(p_55, ((safe_sub_func_int16_t_s_s((l_274[7] = (((safe_sub_func_int8_t_s_s(((l_268.f1 = ((l_220 = (safe_add_func_uint64_t_u_u(l_267, (((l_297 > l_298) != (l_299[3][3][9] != 0xBB3ADCCEB260C81BLL)) != 7UL)))) <= g_85[0].f3)) != p_51), 0x0AL)) > l_271) <= l_271)), p_52)) != 18446744073709551613UL)))) != g_17), g_85[0].f3, g_7[9])) > 0x87E794C5C5D794C9LL) > p_55) || g_85[0].f1))), 1)), 9L))) <= l_299[3][3][9]) > p_53)), 7))), g_17, l_225, p_53) == p_53))) & l_268.f4), 5)) && p_51) | 0x68A5E5BAL) || 0xBBED5568L);
                if (p_55)
                    break;
            }
        }
        else
        {
            char l_320[3][3] = {{1L,0x2CL,0x2CL},{1L,0x2CL,0x2CL},{1L,0x2CL,0x2CL}};
            int i, j;
            l_222 = ((p_54 != l_268.f2) != (g_135[9] == g_63));
            l_230 = g_212[0];
            for (l_222 = 23; (l_222 != (-10)); l_222--)
            {
                int l_319 = 0xAD781459L;
                int l_321 = 1L;
                l_220 = p_55;
                g_85[0].f4 = ((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((-3L), (-8L))), (g_158[4][8] = (g_280 || g_7[2])))) == (func_74((l_268.f4 = l_268.f3), (((l_319 = (p_55 == (((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s(0x2CL, ((safe_div_func_int32_t_s_s(g_7[3], g_212[1])) < l_218))))), 10)) | l_220) && 0x34ABDD1CL))) | g_135[1]) ^ g_85[0].f0), p_54, g_7[9]) | l_222));
                g_85[0].f1 = ((l_321 = l_320[0][1]) ^ (p_52 != ((safe_sub_func_uint8_t_u_u((g_158[4][8] == func_74((!(func_74(g_7[9], (((safe_sub_func_int8_t_s_s((g_300[0][0] != (safe_lshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(p_54, l_218)) < l_320[2][1]) || (safe_div_func_uint64_t_u_u(p_55, l_320[2][2]))), p_52))), 3UL)) && p_54) | p_52), g_85[0].f1, p_51) ^ g_300[1][1])), p_55, g_300[0][1], g_158[4][8])), 8L)) & g_212[1])));
            }
        }
        l_268.f1 = ((!(p_55 = p_55)) > (l_220 = p_54));
    }
    if ((l_220 = ((g_85[0].f1 = ((func_64(g_212[1], (func_74(p_54, l_220, p_54, g_7[0]) == (safe_sub_func_int16_t_s_s(l_299[3][3][9], (l_336[9][2] = ((l_222 = p_55) != 2UL))))), g_7[2], p_55) || l_336[9][2]) != 0UL)) == l_218)))
    {
        l_337 = l_337;
    }
    else
    {
        struct S0 l_338 = {4294967292UL,7,526,0,783};
        unsigned l_359 = 4294967288UL;
        char l_424 = 0L;
        unsigned char l_492 = 0x75L;
        int l_511 = 0xF8177A7EL;
        char l_542 = 1L;
        l_338 = l_338;
        if ((((p_52 && (safe_lshift_func_uint16_t_u_u(g_85[0].f0, 6))) || (g_158[4][8] > (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((((p_52 <= (safe_lshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((l_220 = func_74(l_337.f4, g_300[1][0], ((safe_add_func_uint32_t_u_u((l_338.f4 = l_218), p_51)) | (((safe_mod_func_int32_t_s_s((l_336[9][2] = (g_63 && l_337.f4)), l_338.f2)) != 0xD0FDD6F7D2836525LL) & l_337.f3)), l_218)), l_338.f0)), g_7[9])) ^ g_212[1]), l_338.f0))) || g_7[9]) < l_359), p_55)), l_338.f2)) >= g_158[2][4]), p_51)), g_280)))) ^ l_337.f3))
        {
            unsigned char l_375 = 0xADL;
            long long l_376 = 0L;
            int l_385[3];
            unsigned char l_409 = 254UL;
            int i;
            for (i = 0; i < 3; i++)
                l_385[i] = 1L;
            if ((safe_mod_func_uint16_t_u_u(func_64((l_362 & (safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(p_54, func_64((func_74(((((safe_sub_func_uint16_t_u_u((p_51 | (safe_sub_func_uint8_t_u_u(g_85[0].f4, (!g_17)))), (~(l_338.f4 = l_338.f2)))) & (g_374 = (((g_373 = g_17) >= p_55) <= l_337.f4))) >= 0L) || g_85[0].f0), g_85[0].f4, g_300[0][1], l_299[1][1][2]) || p_55), l_375, g_212[1], g_300[0][1]))), p_55))), l_375, g_7[3], l_376), l_376)))
            {
                int l_415 = 0x2ADA55E9L;
                struct S0 l_446[10][3][5] = {{{{4294967295UL,14,1173,1,-2541},{0x42EEA318L,-17,1277,2,818},{4294967295UL,43,129,3,1837},{4294967287UL,16,789,2,746},{0x9B35DA1DL,-9,1220,4,1026}},{{0UL,-27,662,1,-779},{4294967289UL,-15,307,1,-1774},{4294967287UL,-2,205,4,647},{0x0F737CDFL,1,681,3,3262},{0x70BF6DC8L,5,407,0,-1278}},{{0x69D896A5L,26,1344,2,1708},{0x8873DA1FL,16,151,4,3820},{4294967295UL,43,129,3,1837},{0x9B35DA1DL,-9,1220,4,1026},{0UL,21,889,3,-759}}},{{{4294967295UL,-39,740,3,882},{4294967295UL,-39,728,2,-2123},{1UL,5,111,4,-817},{1UL,5,111,4,-817},{4294967295UL,-39,728,2,-2123}},{{0x70BF6DC8L,5,407,0,-1278},{4294967295UL,-39,728,2,-2123},{4294967287UL,16,789,2,746},{4294967295UL,14,1173,1,-2541},{0x3A99EEA8L,19,585,1,-3154}},{{0x6DD5B110L,-5,596,3,-775},{0x8873DA1FL,16,151,4,3820},{0UL,21,889,3,-759},{0UL,-27,662,1,-779},{4294967290UL,-3,953,4,3370}}},{{{4294967295UL,43,129,3,1837},{4294967289UL,-15,307,1,-1774},{0x6DD5B110L,-5,596,3,-775},{0x69D896A5L,26,1344,2,1708},{2UL,-6,1338,2,-614}},{{0x6DD5B110L,-5,596,3,-775},{0x42EEA318L,-17,1277,2,818},{0x0F737CDFL,1,681,3,3262},{4294967295UL,-39,740,3,882},{4294967287UL,16,789,2,746}},{{0x70BF6DC8L,5,407,0,-1278},{0UL,-27,662,1,-779},{0UL,-27,662,1,-779},{0x70BF6DC8L,5,407,0,-1278},{4294967287UL,16,789,2,746}}},{{{4294967295UL,-39,740,3,882},{0x0F737CDFL,1,681,3,3262},{0x42EEA318L,-17,1277,2,818},{0x6DD5B110L,-5,596,3,-775},{2UL,-6,1338,2,-614}},{{0x69D896A5L,26,1344,2,1708},{0x6DD5B110L,-5,596,3,-775},{4294967289UL,-15,307,1,-1774},{4294967295UL,43,129,3,1837},{4294967290UL,-3,953,4,3370}},{{0UL,-27,662,1,-779},{0UL,21,889,3,-759},{0x8873DA1FL,16,151,4,3820},{0x6DD5B110L,-5,596,3,-775},{0x3A99EEA8L,19,585,1,-3154}}},{{{4294967295UL,14,1173,1,-2541},{4294967287UL,16,789,2,746},{4294967295UL,-39,728,2,-2123},{0x70BF6DC8L,5,407,0,-1278},{4294967295UL,-39,728,2,-2123}},{{1UL,5,111,4,-817},{1UL,5,111,4,-817},{4294967295UL,-39,728,2,-2123},{4294967295UL,-39,740,3,882},{0UL,21,889,3,-759}},{{0x9B35DA1DL,-9,1220,4,1026},{4294967295UL,43,129,3,1837},{0x8873DA1FL,16,151,4,3820},{0x69D896A5L,26,1344,2,1708},{0x70BF6DC8L,5,407,0,-1278}}},{{{0x0F737CDFL,1,681,3,3262},{4294967287UL,-2,205,4,647},{4294967289UL,-15,307,1,-1774},{1UL,-17,40,2,1553},{4294967287UL,-2,205,4,647}},{{0x0F737CDFL,1,681,3,3262},{0x70BF6DC8L,5,407,0,-1278},{0x326B4D6FL,26,133,1,-790},{0x42EEA318L,-17,1277,2,818},{0UL,21,889,3,-759}},{{2UL,-6,1338,2,-614},{0x8873DA1FL,16,151,4,3820},{1UL,-17,40,2,1553},{0x8873DA1FL,16,151,4,3820},{2UL,-6,1338,2,-614}}},{{{2UL,-6,1338,2,-614},{0x0F737CDFL,1,681,3,3262},{0x69D896A5L,26,1344,2,1708},{4294967287UL,-2,205,4,647},{0x8873DA1FL,16,151,4,3820}},{{0x0F737CDFL,1,681,3,3262},{4294967295UL,-15,850,3,-1906},{4294967295UL,-39,728,2,-2123},{0x69D896A5L,26,1344,2,1708},{1UL,-17,40,2,1553}},{{0x69D896A5L,26,1344,2,1708},{4294967295UL,-39,728,2,-2123},{4294967295UL,-15,850,3,-1906},{0x0F737CDFL,1,681,3,3262},{0x8873DA1FL,16,151,4,3820}}},{{{4294967287UL,-2,205,4,647},{0x69D896A5L,26,1344,2,1708},{0x0F737CDFL,1,681,3,3262},{2UL,-6,1338,2,-614},{2UL,-6,1338,2,-614}},{{0x8873DA1FL,16,151,4,3820},{1UL,-17,40,2,1553},{0x8873DA1FL,16,151,4,3820},{2UL,-6,1338,2,-614},{0UL,21,889,3,-759}},{{0x42EEA318L,-17,1277,2,818},{0x326B4D6FL,26,133,1,-790},{0x70BF6DC8L,5,407,0,-1278},{0x0F737CDFL,1,681,3,3262},{4294967287UL,-2,205,4,647}}},{{{1UL,-17,40,2,1553},{0UL,21,889,3,-759},{1UL,5,111,4,-817},{0x69D896A5L,26,1344,2,1708},{4294967287UL,16,789,2,746}},{{0x3A99EEA8L,19,585,1,-3154},{4294967289UL,-15,307,1,-1774},{0x70BF6DC8L,5,407,0,-1278},{4294967287UL,-2,205,4,647},{4294967295UL,-15,850,3,-1906}},{{4294967295UL,14,1173,1,-2541},{4294967295UL,-39,740,3,882},{0x8873DA1FL,16,151,4,3820},{0x8873DA1FL,16,151,4,3820},{4294967295UL,-39,740,3,882}}},{{{4294967287UL,16,789,2,746},{4294967295UL,-39,740,3,882},{0x0F737CDFL,1,681,3,3262},{0x42EEA318L,-17,1277,2,818},{0x6DD5B110L,-5,596,3,-775}},{{4294967295UL,-39,728,2,-2123},{4294967289UL,-15,307,1,-1774},{4294967295UL,-15,850,3,-1906},{1UL,-17,40,2,1553},{0x9B35DA1DL,-9,1220,4,1026}},{{0x70BF6DC8L,5,407,0,-1278},{0UL,21,889,3,-759},{4294967295UL,-39,728,2,-2123},{0x3A99EEA8L,19,585,1,-3154},{4294967290UL,-3,953,4,3370}}}};
                int i, j, k;
                g_85[0].f1 = ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((0x72581F8AE68A92C4LL == ((safe_lshift_func_uint16_t_u_u((l_385[0] = l_362), (g_85[0].f2 || g_85[0].f4))) == (~(g_386 = p_53)))), (safe_add_func_int64_t_s_s(p_52, (((((g_212[1] && g_85[0].f3) & l_218) < l_375) && g_300[1][1]) | l_337.f2))))), g_212[1])), 65529UL)) > 0UL);
                g_85[0] = g_85[0];
                if ((g_85[0].f4 = func_64((safe_mul_func_int16_t_s_s(l_337.f1, g_300[0][1])), (g_374 = (safe_mod_func_uint64_t_u_u(g_135[1], (safe_mul_func_uint8_t_u_u(l_338.f3, (-1L)))))), p_51, (g_395[8] = (((~p_51) > p_53) != l_385[2])))))
                {
                    int l_404[9][3] = {{0x032C8552L,0x42C5639CL,0x6BABC24AL},{0x64E5F82FL,0x42C5639CL,0x42C5639CL},{1L,0x42C5639CL,5L},{0x032C8552L,0x42C5639CL,0x6BABC24AL},{0x64E5F82FL,0x42C5639CL,0x42C5639CL},{1L,0x42C5639CL,5L},{0x032C8552L,0x42C5639CL,0x6BABC24AL},{0x64E5F82FL,0x42C5639CL,0x42C5639CL},{5L,1L,0x3F3C2144L}};
                    int l_410[9] = {1L,0xA986C054L,1L,0xA986C054L,1L,0xA986C054L,1L,0xA986C054L,1L};
                    int i, j;
                    for (l_220 = 0; (l_220 != 6); l_220 = safe_add_func_uint8_t_u_u(l_220, 3))
                    {
                        g_85[0] = l_338;
                    }
                    l_410[1] = (safe_div_func_int8_t_s_s(g_280, (((safe_sub_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_404[2][2], ((p_52 = (safe_div_func_int32_t_s_s(p_53, g_373))) && ((65535UL <= (-9L)) & (l_218 < (safe_lshift_func_uint8_t_u_u(l_409, g_135[3]))))))), 1UL)) == g_300[0][1]) ^ (-7L))));
                    l_337 = l_337;
                }
                else
                {
                    int l_425 = (-1L);
                    for (l_222 = 0; (l_222 <= 1); l_222 += 1)
                    {
                        int l_426[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                        struct S0 l_448 = {4294967295UL,26,627,2,68};
                        int i;
                        g_85[0].f4 = func_64(g_212[l_222], g_280, (safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((g_395[8] = (g_7[7] >= p_55)), (l_385[0] = l_415))) > g_7[9]), (l_425 = (safe_mul_func_uint16_t_u_u((l_426[2] = (safe_rshift_func_int8_t_s_s((((func_74(func_74((g_158[4][8] = (l_424 = (g_300[1][1] <= (safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s(l_415, g_85[0].f2)), 18446744073709551615UL))))), g_374, l_415, l_425), p_52, g_212[1], g_17) & p_53) ^ p_53) <= (-1L)), g_374))), 65531UL))))), l_375);
                        l_338.f1 = (safe_rshift_func_int8_t_s_u(0x28L, (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_280, 3)), (((safe_div_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u((g_300[0][1] = (2L >= p_52)), (p_55 > (g_395[8] >= (safe_div_func_int16_t_s_s(g_212[l_222], (g_445 = (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(func_74(((g_135[1] = ((safe_add_func_uint64_t_u_u(g_63, 1UL)) == 255UL)) & (-5L)), l_415, g_85[0].f4, p_51), p_55)), g_158[2][7]))))))))) == l_385[0]) | 0xBBA5L), 0xF660C1D4L)) != p_54) < p_55)))));
                        g_449 = (l_448 = (g_447[7] = (l_446[2][2][3] = (g_85[0] = g_85[0]))));
                        g_456 = (safe_sub_func_uint32_t_u_u(l_446[2][2][3].f4, ((safe_div_func_int64_t_s_s((l_425 <= func_74(((g_449.f1 = p_51) > (p_55 ^ (l_385[0] = 0xFB78395CL))), l_220, l_425, (safe_div_func_int16_t_s_s(func_64(p_53, (g_445 = g_85[0].f1), g_85[0].f3, g_395[2]), p_53)))), 5L)) < 0xA67A99ABL)));
                    }
                }
                for (l_376 = 0; (l_376 > (-25)); l_376 = safe_sub_func_int32_t_s_s(l_376, 8))
                {
                    l_338 = l_337;
                    if (g_7[9])
                        break;
                }
            }
            else
            {
                int l_465 = (-10L);
                int l_482 = 0x888AE711L;
                struct S0 l_512 = {0x1F34522CL,-5,1139,4,-3788};
                for (l_359 = 0; (l_359 > 5); l_359 = safe_add_func_uint32_t_u_u(l_359, 1))
                {
                    unsigned short l_468 = 0UL;
                    int l_477[3][9][3] = {{{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L}},{{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)}},{{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L},{(-10L),(-10L),(-10L)},{0x5E00BF62L,0x1A1981E2L,0x5E00BF62L}}};
                    int i, j, k;
                    for (l_375 = 0; (l_375 <= 2); l_375 += 1)
                    {
                        int i;
                        l_385[l_375] = (-9L);
                    }
                    for (p_53 = 0; (p_53 <= 33); p_53 = safe_add_func_int64_t_s_s(p_53, 9))
                    {
                        unsigned char l_470 = 0x54L;
                        l_385[1] = (safe_add_func_int16_t_s_s((l_465 | (((safe_mod_func_int8_t_s_s((g_469 = (l_468 = (g_449.f3 & l_465))), func_74(l_470, g_85[0].f3, (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(g_7[9])), (((l_470 < p_54) <= (((safe_add_func_int16_t_s_s(((g_280 & 2UL) || l_476), p_52)) || 0x72L) || p_53)) <= 0xC35E81A2D0BD806CLL))), g_447[7].f4))) <= p_55) | l_477[1][1][2])), g_158[4][8]));
                        g_85[0].f1 = (+l_468);
                        p_51 = (0x7C3CL == (safe_rshift_func_uint16_t_u_u(func_64(g_449.f4, g_280, p_52, g_212[1]), (((l_477[0][0][0] = (0x0295L | (safe_mod_func_int8_t_s_s(((l_482 = (g_373 != p_54)) > g_483), g_7[9])))) || p_54) <= l_468))));
                    }
                    p_51 = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((func_74((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_492 || func_74(func_74(l_337.f1, ((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(func_74(g_386, g_135[1], ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(0x25L, (safe_sub_func_uint8_t_u_u((p_53 | (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(l_465, 248UL)), 15))), l_465)))), 3)) != l_477[1][8][2]), 1UL)) && l_477[1][1][2]), l_465), g_63)) ^ p_53) == 0L), g_449.f1)) <= l_511), l_465, p_51), g_300[0][1], l_477[1][1][2], g_447[7].f4)), p_53)), 6)), g_449.f0, p_54, l_477[1][6][1]) >= p_51), g_158[1][2])) && g_449.f1), 7));
                }
                l_512 = l_512;
                for (l_218 = 0; l_218 < 8; l_218 += 1)
                {
                    struct S0 tmp = {4294967295UL,34,1268,3,-3331};
                    g_447[l_218] = tmp;
                }
            }
            l_385[1] = (safe_rshift_func_int8_t_s_s(g_212[1], g_300[0][1]));
        }
        else
        {
            unsigned short l_524[6][1] = {{0x3248L},{0x53F7L},{0x3248L},{0x53F7L},{0x3248L},{0x53F7L}};
            unsigned char l_527[4][7][4] = {{{1UL,255UL,0x64L,6UL},{0UL,0UL,0x04L,0x6EL},{0x3BL,0x6BL,0UL,0UL},{249UL,249UL,0x33L,1UL},{0x36L,0x56L,0x04L,0x6BL},{0xAEL,0x93L,0x52L,0x04L},{1UL,0x93L,0xE1L,0x6BL}},{{0x93L,0x56L,0x3BL,1UL},{0UL,249UL,255UL,0UL},{0x09L,0x6BL,255UL,0x6EL},{0x93L,0UL,0xAEL,6UL},{0x52L,255UL,0x52L,0xE2L},{0UL,0x09L,251UL,0x6EL},{0x36L,1UL,0UL,0x09L}},{{255UL,249UL,0UL,0x52L},{0x36L,0xC4L,251UL,0x6BL},{0UL,0x04L,0x52L,0x93L},{0x52L,0x93L,0xAEL,1UL},{0x93L,0xC4L,255UL,1UL},{0x09L,255UL,255UL,0x09L},{0UL,0x6BL,0x3BL,0x93L}},{{0x93L,0x09L,0x6EL,0UL},{0xAEL,0x41L,0xE1L,0UL},{0xA2L,0x52L,4UL,251UL},{0x56L,0x3BL,1UL,0x52L},{1UL,1UL,0x64L,0xAEL},{0x58L,0xA4L,4UL,255UL},{0x93L,255UL,0UL,255UL}}};
            int l_534 = (-5L);
            int l_543 = 3L;
            int i, j, k;
            for (p_52 = 0; (p_52 <= 1); p_52 += 1)
            {
                int l_528 = 0x72BBF874L;
                int l_533 = 1L;
                g_85[0].f1 = ((safe_div_func_uint8_t_u_u((g_300[0][1] = (l_336[9][2] = 5UL)), g_517)) ^ g_373);
                for (l_338.f0 = 0; (l_338.f0 <= 0); l_338.f0 += 1)
                {
                    int i;
                    if (p_54)
                        break;
                    g_447[(l_338.f0 + 2)] = (g_85[l_338.f0] = l_338);
                    for (g_445 = 9; (g_445 >= 2); g_445 -= 1)
                    {
                        int i, j;
                        p_51 = (safe_sub_func_uint16_t_u_u(((g_212[p_52] & (((g_300[l_338.f0][(l_338.f0 + 1)] = (~((g_158[5][1] = g_135[g_445]) == (l_534 = ((g_135[(l_338.f0 + 9)] || (safe_lshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s(l_476, (l_524[4][0] > (l_527[0][6][1] > (g_373 = ((((l_528 = (l_524[4][0] < 0x418F1D3EL)) <= (g_85[l_338.f0].f1 = (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_533, l_492)), l_337.f1)))) >= 0L) < 0xCB56B94A494A3481LL)))))) <= g_85[0].f3), g_63))) || p_55))))) > p_52) && 0xC0L)) | p_51), g_447[(l_338.f0 + 2)].f3));
                        return l_336[9][1];
                    }
                }
            }
            for (g_386 = 0; (g_386 > 32); g_386 = safe_add_func_int32_t_s_s(g_386, 2))
            {
                int l_539 = 0xDF544292L;
                short l_562[1][2][6] = {{{0xCDDCL,0xD77DL,0xD77DL,0xCDDCL,0xD77DL,0xD77DL},{0xCDDCL,0xD77DL,0xD77DL,0xCDDCL,0xD77DL,0xD77DL}}};
                int i, j, k;
                for (p_55 = 9; (p_55 >= 0); p_55 -= 1)
                {
                    unsigned short l_563 = 0x5136L;
                    l_534 = (p_51 = 0xD368EE60L);
                    if (g_300[0][1])
                        break;
                    for (l_220 = 0; (l_220 <= 1); l_220 += 1)
                    {
                        int l_544 = (-3L);
                        g_447[7].f1 = ((((0x28L <= func_64((l_543 = (l_534 = (l_539 = func_64(((safe_add_func_int64_t_s_s(func_74(g_300[0][1], l_539, l_511, (p_55 && p_53)), (g_374 != (safe_sub_func_int16_t_s_s(((((g_158[4][8] = (p_55 == g_373)) == l_542) == 0x30L) == p_51), g_212[1]))))) && p_53), l_424, g_212[1], g_395[8])))), g_449.f4, p_51, p_55)) == l_338.f3) == l_544) || g_212[1]);
                    }
                    for (l_476 = 0; (l_476 <= 1); l_476 += 1)
                    {
                        p_51 = (l_539 = (safe_lshift_func_int8_t_s_u((((func_74(p_52, func_74(p_52, (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s(0L, (g_469 = ((g_449.f3 > ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(g_135[9], (safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_52, p_51)), (safe_div_func_int16_t_s_s(p_53, (l_563 = l_562[0][1][5]))))))), g_85[0].f1)), 2)) & g_456)) == g_135[1])))))), g_447[7].f4, l_527[3][1][0]), g_373, l_524[4][0]) < 0xEBL) & 0UL) ^ 18446744073709551609UL), 4)));
                    }
                }
            }
        }
        p_51 = (safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_51, 2)), (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((func_64(((l_220 || l_338.f1) | func_64((safe_div_func_int16_t_s_s(1L, l_218)), g_7[9], l_218, p_53)), g_447[7].f1, g_447[7].f4, g_7[4]) ^ p_55), l_476)), l_542)))), l_337.f1)), g_17));
    }
    l_337 = l_337;
    return l_299[3][3][9];
}







static int func_64(long long p_65, long long p_66, unsigned p_67, int p_68)
{
    struct S0 l_143 = {0x54CC1A98L,12,1047,0,2694};
    unsigned l_161 = 0x387D5A15L;
    unsigned long long l_171[3];
    int l_172 = 0x31591765L;
    unsigned l_214 = 0xC34D346FL;
    int i;
    for (i = 0; i < 3; i++)
        l_171[i] = 1UL;
    for (p_67 = 0; (p_67 >= 37); p_67 = safe_add_func_uint16_t_u_u(p_67, 1))
    {
        unsigned char l_144 = 255UL;
        g_85[0] = l_143;
        l_144 = 0x5A33BAAAL;
    }
    for (p_67 = 0; (p_67 > 56); p_67 = safe_add_func_int8_t_s_s(p_67, 3))
    {
        struct S0 l_147[4][8] = {{{1UL,-37,867,4,-2166},{0x559B54C1L,14,1353,2,992},{4294967287UL,29,362,4,401},{0x559B54C1L,14,1353,2,992},{1UL,-37,867,4,-2166},{0x631F3868L,-19,968,3,-1259},{0x631F3868L,-19,968,3,-1259},{1UL,-37,867,4,-2166}},{{0x559B54C1L,14,1353,2,992},{0x1A12AFEDL,2,540,1,1499},{0x1A12AFEDL,2,540,1,1499},{0x559B54C1L,14,1353,2,992},{0x7DA599C3L,34,869,1,-4041},{1UL,-37,867,4,-2166},{0x7DA599C3L,34,869,1,-4041},{0x559B54C1L,14,1353,2,992}},{{0x1A12AFEDL,2,540,1,1499},{0x7DA599C3L,34,869,1,-4041},{0x1A12AFEDL,2,540,1,1499},{0x631F3868L,-19,968,3,-1259},{4294967287UL,29,362,4,401},{4294967287UL,29,362,4,401},{0x631F3868L,-19,968,3,-1259},{0x1A12AFEDL,2,540,1,1499}},{{0x7DA599C3L,34,869,1,-4041},{0x7DA599C3L,34,869,1,-4041},{4294967287UL,29,362,4,401},{1UL,-37,867,4,-2166},{4294967295UL,15,1094,3,673},{1UL,-37,867,4,-2166},{4294967287UL,29,362,4,401},{0x7DA599C3L,34,869,1,-4041}}};
        int i, j;
        l_147[1][3] = l_143;
        if (p_66)
            break;
        l_147[1][3].f1 = ((l_147[1][3].f4 = (~0L)) == l_143.f2);
    }
    if ((safe_sub_func_uint16_t_u_u((((safe_div_func_int64_t_s_s(p_65, (safe_mul_func_int8_t_s_s(func_74((safe_sub_func_uint32_t_u_u(func_74(g_85[0].f3, l_143.f1, (safe_div_func_uint32_t_u_u(0xE3FAC453L, p_66)), (p_67 | (g_158[4][8] = (g_135[2] = l_143.f0)))), ((!(((((safe_add_func_uint16_t_u_u(((((((l_143.f4 > l_143.f0) && p_68) == g_17) < l_143.f3) | g_7[9]) ^ 0xADL), p_68)) && g_7[9]) || l_143.f1) != 0x7076BF4272561975LL) >= 1L)) || 0xA2EE58E92035A7E5LL))), l_143.f3, l_161, g_17), p_65)))) != p_68) | g_7[9]), 0UL)))
    {
        g_85[0].f4 = (safe_lshift_func_int16_t_s_u((g_85[0].f3 > 0x49L), 12));
    }
    else
    {
        int l_166 = (-3L);
        unsigned long long l_173 = 18446744073709551611UL;
        int l_191[4][2];
        struct S0 l_204 = {0UL,-42,879,3,-3443};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_191[i][j] = 0x43408DA1L;
        }
        if ((l_143.f1 == (((safe_sub_func_uint32_t_u_u((func_74(g_7[7], l_166, (((safe_mul_func_int16_t_s_s((l_161 ^ ((func_74(g_85[0].f3, ((safe_add_func_int32_t_s_s(p_68, g_85[0].f3)) || l_161), g_85[0].f0, g_85[0].f0) ^ g_158[4][9]) && 3L)), l_171[0])) != l_172) >= 7L), p_66) && p_66), (-1L))) != l_173) ^ 0x0A4EC380L)))
        {
            unsigned short l_178[8][4] = {{0UL,0UL,1UL,0UL},{0UL,0xF9E0L,0xF9E0L,0UL},{0xF9E0L,0UL,0xF9E0L,0xF9E0L},{0UL,0UL,1UL,0UL},{0UL,0xF9E0L,0xF9E0L,0UL},{0xF9E0L,0UL,0xF9E0L,0xF9E0L},{0UL,0UL,1UL,0UL},{0UL,0xF9E0L,0xF9E0L,0UL}};
            int i, j;
            for (l_161 = 0; (l_161 >= 60); l_161 = safe_add_func_int16_t_s_s(l_161, 7))
            {
                unsigned l_186 = 0xB71334DCL;
                int l_189 = 0x211D2C57L;
                int l_190 = 0x98AF31ACL;
                g_85[0] = g_85[0];
                for (l_166 = 3; (l_166 == 12); l_166++)
                {
                    l_178[4][3] = p_65;
                }
                g_85[0].f1 = (safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(1L, (l_191[1][0] = (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((p_67 == l_186))), func_74((safe_mul_func_uint8_t_u_u((l_190 = (l_189 = 0x59L)), ((l_191[1][0] = l_161) && (safe_mul_func_int8_t_s_s(p_68, (safe_mod_func_int16_t_s_s((-7L), (safe_add_func_uint32_t_u_u((((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s(((l_143.f4 = l_186) < (0x6FL == g_158[4][8])), g_85[0].f0)), 0x89L)) < g_7[7]) & p_68), g_158[4][8]))))))))), p_67, l_178[7][2], p_65)))))), g_7[9]));
                l_143.f4 = 0xAA48E181L;
            }
        }
        else
        {
            for (p_68 = 0; (p_68 > 21); p_68 = safe_add_func_int16_t_s_s(p_68, 3))
            {
                struct S0 l_205 = {0x00CADEF5L,15,179,1,761};
                for (p_66 = 8; (p_66 >= 2); p_66 -= 1)
                {
                    int i, j;
                    return g_158[p_66][(p_66 + 1)];
                }
                l_205 = l_204;
            }
        }
        l_204.f1 = (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_135[9], g_85[0].f1)), p_66));
        return g_85[0].f2;
    }
    for (p_68 = (-23); (p_68 < (-1)); p_68 = safe_add_func_uint32_t_u_u(p_68, 2))
    {
        long long l_213 = 0xE12775CE7BF9E3F9LL;
        l_213 = (l_143.f0 ^ (g_212[1] = (l_143.f1 = 0L)));
        if (p_68)
            break;
    }
    return l_214;
}







static unsigned func_74(unsigned short p_75, unsigned long long p_76, unsigned p_77, unsigned p_78)
{
    struct S0 l_84[7][8][4] = {{{{1UL,9,1153,0,1497},{1UL,-12,443,2,1236},{0x4365C17AL,-1,1254,1,-1618},{0xC345E11DL,-30,1152,3,-3471}},{{0UL,-28,568,1,-3533},{0xC77BB9FEL,40,487,2,3516},{0x35F7338AL,-19,6,2,2565},{0xA64B9282L,14,238,0,-3470}},{{0x370A27EAL,37,898,2,1089},{4294967295UL,8,184,0,2187},{0xC345E11DL,-30,1152,3,-3471},{0x53EA2BDDL,10,1160,3,-837}},{{4294967295UL,32,5,3,1468},{0x8ADBC88EL,6,730,4,1967},{1UL,35,720,1,1714},{7UL,-31,910,3,3324}},{{2UL,-12,264,0,477},{4294967292UL,-34,786,4,-2262},{0xB588299CL,-10,1166,4,-2833},{0x28F5DBB7L,24,181,0,-175}},{{0x90ED9ABDL,20,1377,0,-284},{0xCDDED4E1L,37,1358,4,-2667},{0x89CDEE7BL,40,1110,0,-4004},{0x8C36732CL,26,378,4,1750}},{{0x807A6E46L,43,943,1,1301},{0UL,-30,1129,1,3573},{1UL,-19,702,4,-1389},{0xEA94A57CL,-22,165,2,3317}},{{4294967289UL,25,271,1,3835},{1UL,6,1332,3,619},{7UL,-8,870,4,3921},{0x53EA2BDDL,10,1160,3,-837}}},{{{0xB0CAFCEBL,-24,1055,1,1347},{0UL,-15,591,1,-257},{0x554F4372L,-2,1300,2,1737},{4294967292UL,-34,786,4,-2262}},{{0x28F5DBB7L,24,181,0,-175},{7UL,-8,870,4,3921},{7UL,-31,910,3,3324},{0x496B13ACL,2,16,3,-2425}},{{0x4AE622E3L,-35,1237,3,4094},{1UL,-12,443,2,1236},{0xEA94A57CL,-22,165,2,3317},{0xCDDED4E1L,37,1358,4,-2667}},{{0x8C36732CL,26,378,4,1750},{0x9D4396DDL,-3,1181,0,-444},{0xA0BD5792L,2,1190,0,2171},{0xA0BD5792L,2,1190,0,2171}},{{0x595DB7A7L,-33,1051,3,-151},{0x595DB7A7L,-33,1051,3,-151},{7UL,-8,870,4,3921},{4294967295UL,-32,896,2,-3574}},{{4294967295UL,29,1266,0,-2644},{0x3FDE7498L,18,383,1,1636},{1UL,30,198,1,2557},{0x807A6E46L,43,943,1,1301}},{{0xC409728EL,-13,1179,1,-3751},{0xB7C037E6L,19,1361,3,3911},{1UL,27,599,1,-4055},{1UL,30,198,1,2557}},{{0x90ED9ABDL,20,1377,0,-284},{0xB7C037E6L,19,1361,3,3911},{4294967293UL,-38,407,0,-1144},{0x807A6E46L,43,943,1,1301}}},{{{0xB7C037E6L,19,1361,3,3911},{0x3FDE7498L,18,383,1,1636},{0x53EA2BDDL,10,1160,3,-837},{4294967295UL,-32,896,2,-3574}},{{0UL,11,922,1,-1464},{0x595DB7A7L,-33,1051,3,-151},{0xC345E11DL,-30,1152,3,-3471},{0xA0BD5792L,2,1190,0,2171}},{{1UL,35,720,1,1714},{0x9D4396DDL,-3,1181,0,-444},{0x56D104A7L,36,376,0,-111},{0xCDDED4E1L,37,1358,4,-2667}},{{0x554F4372L,-2,1300,2,1737},{1UL,-12,443,2,1236},{0xB7C037E6L,19,1361,3,3911},{0x496B13ACL,2,16,3,-2425}},{{1UL,9,1153,0,1497},{7UL,-8,870,4,3921},{0x35F7338AL,-19,6,2,2565},{4294967292UL,-34,786,4,-2262}},{{4294967295UL,-41,399,2,3446},{0UL,-15,591,1,-257},{0x2F563EDDL,-41,1090,1,2111},{0x53EA2BDDL,10,1160,3,-837}},{{0UL,11,922,1,-1464},{0x8CFF8D1EL,-43,651,0,2772},{0x84758604L,37,46,3,-1074},{0x37D7650DL,-27,1122,4,1646}},{{0x0DCC6590L,10,6,4,-4058},{0x89CDEE7BL,40,1110,0,-4004},{0UL,-28,568,1,-3533},{0UL,11,922,1,-1464}}},{{{0x807A6E46L,43,943,1,1301},{0x6C230793L,15,125,3,67},{0x24405C6DL,-30,1146,0,-3182},{0xCD9F560EL,36,1030,3,2237}},{{0x8CFF8D1EL,-43,651,0,2772},{0x595DB7A7L,-33,1051,3,-151},{0x7C98E343L,23,955,1,-129},{4294967286UL,25,79,2,-588}},{{0x4AE622E3L,-35,1237,3,4094},{0x53EA2BDDL,10,1160,3,-837},{4294967286UL,-16,942,1,1482},{2UL,-12,264,0,477}},{{0x15E5E7DFL,7,453,1,3968},{0x1C00ABC3L,32,466,4,1929},{0x879D152BL,8,1403,2,613},{0xB0CAFCEBL,-24,1055,1,1347}},{{0xCD9F560EL,36,1030,3,2237},{4294967295UL,-32,896,2,-3574},{4294967292UL,-34,786,4,-2262},{7UL,17,1146,0,-1386}},{{1UL,-10,995,1,910},{4294967289UL,25,271,1,3835},{4294967286UL,25,79,2,-588},{7UL,-31,910,3,3324}},{{4294967295UL,-3,703,2,3335},{4294967295UL,36,249,2,-2407},{1UL,30,198,1,2557},{0x879D152BL,8,1403,2,613}},{{0x24405C6DL,-30,1146,0,-3182},{4294967293UL,-38,407,0,-1144},{4294967286UL,-16,942,1,1482},{0UL,-33,1186,3,3846}}},{{{0x3FDE7498L,18,383,1,1636},{0x9D4396DDL,-3,1181,0,-444},{0x90ED9ABDL,20,1377,0,-284},{1UL,35,720,1,1714}},{{4294967295UL,-41,399,2,3446},{1UL,9,945,0,-854},{0xB588299CL,-10,1166,4,-2833},{0x90ED9ABDL,20,1377,0,-284}},{{0x807A6E46L,43,943,1,1301},{0x969097B3L,-32,890,1,-3675},{1UL,9,1153,0,1497},{4294967295UL,-41,399,2,3446}},{{4294967292UL,-31,794,2,-3244},{0x0F123D7EL,-21,526,2,-3028},{2UL,-12,264,0,477},{0x0F123D7EL,-21,526,2,-3028}},{{4294967295UL,8,184,0,2187},{4294967293UL,-38,407,0,-1144},{0x091AFF67L,3,216,4,-2485},{1UL,30,198,1,2557}},{{0x02198734L,38,1053,4,3420},{0x9911037DL,-21,1123,4,-1196},{4294967289UL,25,271,1,3835},{0UL,-40,1229,4,-2615}},{{0xD252A4F9L,-19,1290,0,2252},{4294967293UL,25,510,2,-2166},{0x0DCC6590L,10,6,4,-4058},{7UL,17,1146,0,-1386}},{{0xD252A4F9L,-19,1290,0,2252},{0x4AE622E3L,-35,1237,3,4094},{4294967289UL,25,271,1,3835},{1UL,27,599,1,-4055}}},{{{0x02198734L,38,1053,4,3420},{7UL,17,1146,0,-1386},{0x091AFF67L,3,216,4,-2485},{0x84758604L,37,46,3,-1074}},{{4294967295UL,8,184,0,2187},{0x53EA2BDDL,10,1160,3,-837},{2UL,-12,264,0,477},{0x37D7650DL,-27,1122,4,1646}},{{4294967292UL,-31,794,2,-3244},{0x69F8A89CL,-18,648,1,-4073},{1UL,9,1153,0,1497},{4294967295UL,32,5,3,1468}},{{0x807A6E46L,43,943,1,1301},{0xEA94A57CL,-22,165,2,3317},{0xB588299CL,-10,1166,4,-2833},{0UL,11,922,1,-1464}},{{4294967295UL,-41,399,2,3446},{0x595DB7A7L,-33,1051,3,-151},{0x90ED9ABDL,20,1377,0,-284},{4294967292UL,-34,786,4,-2262}},{{0x3FDE7498L,18,383,1,1636},{0x370A27EAL,37,898,2,1089},{4294967286UL,-16,942,1,1482},{0x84758604L,37,46,3,-1074}},{{0x24405C6DL,-30,1146,0,-3182},{0x595DB7A7L,-33,1051,3,-151},{0x8CFF8D1EL,-43,651,0,2772},{4294967294UL,-6,364,0,-265}},{{7UL,-31,910,3,3324},{0xCD9F560EL,36,1030,3,2237},{0x554F4372L,-2,1300,2,1737},{0x69F8A89CL,-18,648,1,-4073}}},{{{0x2F563EDDL,-41,1090,1,2111},{4294967295UL,36,249,2,-2407},{0xA0BD5792L,2,1190,0,2171},{4294967295UL,-37,996,3,1329}},{{0xEA94A57CL,-22,165,2,3317},{0x091AFF67L,3,216,4,-2485},{1UL,35,720,1,1714},{0x53EA2BDDL,10,1160,3,-837}},{{0x3CC2ED11L,27,132,1,-1522},{0x7C98E343L,23,955,1,-129},{4294967295UL,-3,703,2,3335},{0x496B13ACL,2,16,3,-2425}},{{4294967295UL,32,5,3,1468},{4294967295UL,8,184,0,2187},{0x02198734L,38,1053,4,3420},{4294967288UL,23,1207,3,1641}},{{1UL,-12,443,2,1236},{4294967287UL,15,1079,0,2567},{0x7C98E343L,23,955,1,-129},{0x02198734L,38,1053,4,3420}},{{1UL,9,945,0,-854},{0x4AE622E3L,-35,1237,3,4094},{0UL,43,1243,1,-3984},{0x56D104A7L,36,376,0,-111}},{{4294967295UL,-32,896,2,-3574},{0x496B13ACL,2,16,3,-2425},{4294967295UL,29,1266,0,-2644},{0x2F563EDDL,-41,1090,1,2111}},{{4294967292UL,-34,786,4,-2262},{0x7C98E343L,23,955,1,-129},{0x69F8A89CL,-18,648,1,-4073},{1UL,35,720,1,1714}}}};
    unsigned l_97 = 0x326E4838L;
    unsigned long long l_128 = 1UL;
    unsigned l_136 = 4294967295UL;
    char l_139 = 1L;
    int l_140 = 0x3DD3D9F1L;
    int i, j, k;
    g_85[0] = l_84[2][2][0];
    for (p_78 = 18; (p_78 >= 50); p_78 = safe_add_func_int64_t_s_s(p_78, 1))
    {
        short l_88 = 0xD154L;
        int l_102 = (-1L);
        if ((((0L & l_88) == (l_88 > g_85[0].f0)) == ((safe_lshift_func_uint16_t_u_s((!(((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_97, (p_78 > g_17))), (p_75 = (l_84[2][2][0].f3 & (+(l_102 = (safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((l_84[2][2][0].f4 = g_17), g_85[0].f3)), g_85[0].f4)))))))) | g_7[1]), p_78)) > l_84[2][2][0].f1) && l_88)), 13)) <= l_84[2][2][0].f1)))
        {
            long long l_109 = 0xD8A59CA4D4997D19LL;
            struct S0 l_112 = {4294967288UL,43,544,1,-1557};
            if ((safe_sub_func_int64_t_s_s(((safe_add_func_int8_t_s_s((l_88 == (safe_add_func_int32_t_s_s(g_7[9], l_109))), (-4L))) <= p_78), ((((l_102 = (~(~0xBF6EL))) == p_75) | p_75) & (safe_mod_func_uint8_t_u_u(g_85[0].f2, p_76))))))
            {
                g_85[0].f1 = g_85[0].f2;
            }
            else
            {
                g_85[0] = l_112;
            }
        }
        else
        {
            for (p_77 = 0; p_77 < 7; p_77 += 1)
            {
                for (l_102 = 0; l_102 < 8; l_102 += 1)
                {
                    for (p_76 = 0; p_76 < 4; p_76 += 1)
                    {
                        struct S0 tmp = {0x57EAC764L,-17,1106,2,188};
                        l_84[p_77][l_102][p_76] = tmp;
                    }
                }
            }
        }
        l_102 = g_7[9];
    }
    for (p_77 = (-7); (p_77 <= 9); ++p_77)
    {
        unsigned char l_119 = 0xA0L;
        int l_129 = (-9L);
        l_129 = (p_76 > (safe_mod_func_uint8_t_u_u((l_84[2][2][0].f1 = (safe_rshift_func_int8_t_s_s(l_84[2][2][0].f0, (l_119 || (((safe_mul_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(0x7F4EL, g_85[0].f0)) != (((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(g_17, g_85[0].f1)), l_119)) ^ l_128) >= 1UL)) <= g_85[0].f2), l_119)) & 0xEDB77992E5D78F82LL) > 0x418936BB2FC288D6LL))))), p_75)));
        l_136 = (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u((l_84[2][2][0].f1 = g_17), (((safe_mul_func_uint16_t_u_u((l_97 <= (g_135[1] = (p_77 | ((g_85[0].f2 <= (~g_85[0].f1)) ^ g_85[0].f3)))), p_78)) || g_17) >= p_75)))));
        g_85[0].f4 = l_129;
    }
    l_84[2][2][0].f1 = ((p_76 || (safe_mod_func_uint32_t_u_u(p_76, (g_135[1] || 0UL)))) && (!(l_84[2][2][0].f2 && (((g_85[0].f3 = ((l_139 == g_85[0].f3) <= ((l_97 != l_84[2][2][0].f0) <= (-5L)))) || g_85[0].f2) | 0L))));
    return l_140;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_85[i].f0, "g_85[i].f0", print_hash_value);
        transparent_crc(g_85[i].f1, "g_85[i].f1", print_hash_value);
        transparent_crc(g_85[i].f2, "g_85[i].f2", print_hash_value);
        transparent_crc(g_85[i].f3, "g_85[i].f3", print_hash_value);
        transparent_crc(g_85[i].f4, "g_85[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_135[i], "g_135[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_158[i][j], "g_158[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_212[i], "g_212[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_280, "g_280", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_300[i][j], "g_300[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_395[i], "g_395[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_445, "g_445", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_447[i].f0, "g_447[i].f0", print_hash_value);
        transparent_crc(g_447[i].f1, "g_447[i].f1", print_hash_value);
        transparent_crc(g_447[i].f2, "g_447[i].f2", print_hash_value);
        transparent_crc(g_447[i].f3, "g_447[i].f3", print_hash_value);
        transparent_crc(g_447[i].f4, "g_447[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_449.f0, "g_449.f0", print_hash_value);
    transparent_crc(g_449.f1, "g_449.f1", print_hash_value);
    transparent_crc(g_449.f2, "g_449.f2", print_hash_value);
    transparent_crc(g_449.f3, "g_449.f3", print_hash_value);
    transparent_crc(g_449.f4, "g_449.f4", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_605, "g_605", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_913[i][j][k], "g_913[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1016[i], "g_1016[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1379[i], "g_1379[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1380, "g_1380", print_hash_value);
    transparent_crc(g_1475.f0, "g_1475.f0", print_hash_value);
    transparent_crc(g_1475.f1, "g_1475.f1", print_hash_value);
    transparent_crc(g_1475.f2, "g_1475.f2", print_hash_value);
    transparent_crc(g_1475.f3, "g_1475.f3", print_hash_value);
    transparent_crc(g_1475.f4, "g_1475.f4", print_hash_value);
    transparent_crc(g_1531, "g_1531", print_hash_value);
    transparent_crc(g_1552, "g_1552", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1617, "g_1617", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
