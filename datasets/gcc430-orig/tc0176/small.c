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



static long long g_9[5][6][4] = {{{(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}}, {{(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}}, {{(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}}, {{(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}}, {{(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}, {(-1L), 1L, 0L, 0x925EF2C36544D187LL}}};
static unsigned long long g_11 = 0xA2F3817D1DC6B79DLL;
static unsigned long long g_16 = 0UL;
static unsigned long long *g_15 = &g_16;
static int g_20 = (-1L);
static int g_22 = 0L;
static int g_41 = 7L;
static int **g_63 = (void*)0;
static unsigned g_92 = 0x4E1BE66BL;
static int *g_100 = &g_22;
static short g_110 = 2L;
static unsigned char g_115[5][9][2] = {{{0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}}, {{0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}}, {{0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}}, {{0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}}, {{0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}, {0x0EL, 0x89L}}};
static long long g_116 = 8L;
static int g_157 = 0x09EAC814L;
static char g_160 = 0x7EL;
static char *g_159 = &g_160;
static int g_180 = 0L;
static int g_181 = 0x324783F6L;
static unsigned long long g_189 = 0x52BA2822E894D084LL;
static unsigned g_204 = 0x7DA599C3L;
static unsigned long long **g_238 = &g_15;
static unsigned long long ***g_237 = &g_238;
static short g_270 = (-5L);
static unsigned short g_281 = 65535UL;
static char **g_284[6] = {&g_159, &g_159, &g_159, &g_159, &g_159, &g_159};
static char ***g_283 = &g_284[3];
static unsigned short g_337 = 1UL;
static int *g_445[4][10][2] = {{{&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}}, {{&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}}, {{&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}}, {{&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}, {&g_181, (void*)0}}};
static char g_490[3][10][7] = {{{0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}}, {{0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}}, {{0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}, {0xFFL, (-1L), 0xE0L, (-1L), 0x8FL, 9L, (-8L)}}};
static short *g_514[4] = {&g_110, &g_110, &g_110, &g_110};
static short **g_513 = &g_514[3];
static long long *g_597 = &g_9[0][2][1];
static long long **g_596 = &g_597;
static int ***g_724 = &g_63;
static int *g_796 = &g_20;
static unsigned char **g_866 = (void*)0;
static unsigned char ***g_865 = &g_866;
static unsigned long long g_1044 = 0x139014B0D1F0D728LL;
static unsigned long long *g_1043 = &g_1044;



static unsigned short func_1(void);
static unsigned char func_2(char p_3, int * p_4, char p_5, char p_6, short p_7);
static int * func_12(unsigned long long * p_13, unsigned short p_14);
static unsigned char func_36(int * p_37);
static unsigned long long func_45(int * p_46, unsigned p_47, unsigned long long p_48, unsigned long long p_49);
static int * func_52(int ** p_53, unsigned long long * p_54, unsigned short p_55, int p_56);
static int ** func_57(unsigned char p_58, int * p_59, int p_60);
static unsigned long long * func_64(int * p_65, int ** p_66, int ** p_67);
static int ** func_68(short p_69, short p_70);
static unsigned long long ** func_72(unsigned p_73, int * p_74, unsigned p_75, unsigned p_76);
static unsigned short func_1(void)
{
    unsigned l_8 = 0x6B950BA1L;
    unsigned long long *l_10 = &g_11;
    char l_17[6][6] = {{1L, 9L, 0x9AL, 9L, 1L, 9L}, {1L, 9L, 0x9AL, 9L, 1L, 9L}, {1L, 9L, 0x9AL, 9L, 1L, 9L}, {1L, 9L, 0x9AL, 9L, 1L, 9L}, {1L, 9L, 0x9AL, 9L, 1L, 9L}, {1L, 9L, 0x9AL, 9L, 1L, 9L}};
    int **l_1046 = (void*)0;
    int **l_1047[5] = {&g_100, &g_445[0][8][1], &g_100, &g_445[0][8][1], &g_100};
    int *l_1048 = &g_181;
    int i, j;
    g_796 = (func_2((((*l_10) = (l_8 , g_9[3][1][0])) , (+g_9[3][1][0])), (l_1048 = func_12(g_15, l_17[0][3])), (***g_283), (*g_159), ((**g_513) == (**g_513))) , (void*)0);
    return g_337;
}







static unsigned char func_2(char p_3, int * p_4, char p_5, char p_6, short p_7)
{
    int **l_1049 = &g_445[0][3][1];
    unsigned long long *l_1050[7] = {&g_11, &g_11, (void*)0, &g_11, &g_11, (void*)0, &g_11};
    char l_1051 = 0xD1L;
    int i;
    (*l_1049) = func_52(l_1049, (l_1050[5] = (void*)0), (((**g_596) = (l_1049 != ((*g_724) = l_1049))) <= l_1051), g_41);
    return p_3;
}







static int * func_12(unsigned long long * p_13, unsigned short p_14)
{
    unsigned short l_18[5][4][8] = {{{1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}}, {{1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}}, {{1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}}, {{1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}}, {{1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}, {1UL, 65526UL, 65535UL, 65526UL, 1UL, 65526UL, 65535UL, 65526UL}}};
    int *l_19 = &g_20;
    unsigned char *l_1008 = &g_115[1][1][0];
    int l_1038 = 0x7AB7ED99L;
    int **l_1040 = &g_445[3][8][0];
    short **l_1041 = &g_514[0];
    int *l_1042[7][9] = {{&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}, {&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}, {&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}, {&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}, {&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}, {&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}, {&g_41, &g_41, &g_41, (void*)0, &g_41, &g_41, &g_41, (void*)0, &g_41}};
    unsigned short l_1045 = 0UL;
    int i, j, k;
    for (g_16 = 0; (g_16 <= 3); g_16 += 1)
    {
        int **l_21 = &l_19;
        int l_606 = 0x9DB237FDL;
        unsigned long long ****l_968 = &g_237;
        unsigned long long l_985[9][8][3] = {{{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}, {{18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}, {18446744073709551615UL, 1UL, 9UL}}};
        int l_1013 = 0xFE4FB1B1L;
        int i, j, k;
        (*l_21) = l_19;
        for (p_14 = 0; (p_14 <= 3); p_14 += 1)
        {
            int *l_42 = &g_22;
            char l_988 = 0x1CL;
            unsigned char *l_1009 = &g_115[4][4][1];
            if ((**l_21))
            {
                long long l_39 = 0x90AAF75D59274CB0LL;
                for (g_20 = 0; (g_20 <= 3); g_20 += 1)
                {
                    char l_38 = 0L;
                    for (g_22 = 0; (g_22 <= 3); g_22 += 1)
                    {
                        int *l_40 = (void*)0;
                        int i, j, k;
                        g_41 = (((safe_rshift_func_uint16_t_u_s(((((((safe_unary_minus_func_uint16_t_u(0UL)) < ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((l_18[(p_14 + 1)][g_22][p_14] , (((((void*)0 != (*l_21)) , (((**l_21) <= 0xD4L) >= (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(p_14, (func_36(&g_22) , l_38))) <= l_39), (**l_21))) ^ p_14), p_14)))) || p_14) != 0x573C098BL)) > p_14) , g_16) , p_14), 11)), g_16)) <= p_14)) >= g_22) , 0L) ^ l_38) , 0x6B03L), 11)) == p_14) | 65535UL);
                        g_41 = p_14;
                    }
                }
                return l_42;
            }
            else
            {
                (**l_21) = ((&g_22 == &g_22) < (**l_21));
            }
            (*l_42) = (-5L);
            for (g_41 = 0; (g_41 <= 3); g_41 += 1)
            {
                unsigned long long l_71 = 0x934983969C113E7BLL;
                int l_995 = 0xFD3F0A9CL;
                unsigned long long *l_1011 = &g_16;
                int i, j, k;
            }
        }
    }
    (*g_100) = (0L | ((**g_238) = ((*l_19) && ((*l_19) , p_14))));
    (*g_100) = (((**g_596) < (safe_mod_func_uint8_t_u_u((!p_14), ((*l_1008) = l_1038)))) , (func_36((l_1042[2][2] = ((*l_1040) = (*l_1040)))) == l_1045));
    return (*l_1040);
}







static unsigned char func_36(int * p_37)
{
    return g_22;
}







static unsigned long long func_45(int * p_46, unsigned p_47, unsigned long long p_48, unsigned long long p_49)
{
    int *l_607[2][3][1] = {{{&g_20}, {&g_20}, {&g_20}}, {{&g_20}, {&g_20}, {&g_20}}};
    long long *l_610[3][1][6] = {{{&g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0}}, {{&g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0}}, {{&g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0}}};
    int l_611 = 1L;
    unsigned short *l_612 = &g_281;
    int **l_613[7] = {&g_100, &g_100, &g_445[0][8][1], &g_100, &g_100, &g_445[0][8][1], &g_100};
    int l_648 = 1L;
    unsigned long long l_657 = 3UL;
    unsigned l_693 = 0xC5F74209L;
    unsigned long long l_716 = 1UL;
    short **l_759 = &g_514[3];
    int *l_767 = &g_22;
    unsigned long long ***l_821[3][6] = {{&g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238}};
    unsigned l_863 = 18446744073709551609UL;
    unsigned char l_879 = 1UL;
    int l_892[5][7][7] = {{{0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}}, {{0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}}, {{0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}}, {{0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}}, {{0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}, {0L, (-3L), 1L, 0L, 1L, 1L, 0L}}};
    short l_903 = 0xB0F6L;
    int *l_907[4] = {&l_648, &g_20, &l_648, &g_20};
    int l_920[1];
    char l_921 = 0x32L;
    unsigned char *l_922 = &g_115[2][0][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_920[i] = 1L;
    g_100 = func_52(&p_46, func_64(l_607[0][2][0], &l_607[0][0][0], &g_100), ((*l_612) = (safe_lshift_func_uint8_t_u_s((g_189 , g_22), (((l_611 = ((void*)0 != &g_63)) >= 0L) < (*g_597))))), g_181);
    if ((~(func_36(p_46) , (-1L))))
    {
        g_445[0][8][1] = &g_22;
    }
    else
    {
        unsigned l_614 = 7UL;
        int l_617 = 0L;
        int l_633 = (-9L);
        unsigned long long *l_640[9][6] = {{(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}, {(void*)0, &g_16, &g_189, &g_16, (void*)0, &g_189}};
        int *l_665 = &g_181;
        int ***l_723 = &g_63;
        int i, j;
        (*g_100) = (l_614 && (l_617 = ((4294967295UL && (safe_add_func_uint64_t_u_u((**g_238), l_614))) , p_48)));
        if (p_48)
            goto lbl_687;
lbl_687:
        for (l_611 = (-13); (l_611 == (-23)); --l_611)
        {
            int l_626[4][5][9] = {{{0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}}, {{0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}}, {{0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}}, {{0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}, {0xEA3E34FAL, 0x1C4C1344L, 0xD06840D2L, 0xAEF57E2FL, (-3L), 1L, 0x7C4619E1L, 0x06133F0CL, 8L}}};
            unsigned *l_627 = &g_204;
            unsigned l_628 = 4294967295UL;
            unsigned long long **l_659 = &g_15;
            int *l_664 = &g_181;
            int *l_666[1];
            int *l_684 = (void*)0;
            unsigned char l_686 = 255UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_666[i] = (void*)0;
        }
        for (g_92 = 19; (g_92 <= 50); g_92 = safe_add_func_int64_t_s_s(g_92, 2))
        {
            unsigned long long l_700 = 18446744073709551615UL;
            int *l_704 = &l_617;
            unsigned l_730 = 1UL;
            int *l_731[7];
            int i;
            for (i = 0; i < 7; i++)
                l_731[i] = &g_181;
            if ((*p_46))
                break;
            for (g_337 = 0; (g_337 <= 3); g_337 += 1)
            {
                int l_692 = 0x41654F36L;
                int i;
                if ((safe_lshift_func_int16_t_s_s((**g_513), 11)))
                {
                    for (p_47 = 0; (p_47 <= 1); p_47 += 1)
                    {
                        int i, j, k;
                        p_46 = func_52(&g_100, (g_115[p_47][g_337][p_47] , func_64(func_52(&l_607[1][2][0], (*g_238), (*l_665), p_49), func_57(l_692, &l_617, p_48), &l_607[0][2][0])), g_110, p_48);
                        (*g_100) = l_693;
                    }
                }
                else
                {
                    if ((*g_100))
                        break;
                    for (g_281 = 0; (g_281 <= 1); g_281 += 1)
                    {
                        int *l_694 = &l_617;
                        p_46 = l_694;
                    }
                    (*g_100) = (*p_46);
                }
                p_46 = p_46;
                for (g_157 = 0; (g_157 <= 1); g_157 += 1)
                {
                    unsigned l_697[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_697[i] = 0UL;
                    if (g_22)
                        goto lbl_687;
                    (*l_665) = (((g_115[1][1][1] > (safe_sub_func_int8_t_s_s(l_697[2], (safe_mul_func_int16_t_s_s(func_36(p_46), ((((l_700 < (***g_283)) , (***g_283)) , (0xF7BCF4CF6B7B5778LL < 0x8F7AB0BE9ED517A1LL)) & 0L)))))) <= l_692) || p_48);
                }
            }
            for (g_116 = 0; (g_116 >= 20); g_116 = safe_add_func_int16_t_s_s(g_116, 3))
            {
                char l_703 = 0xC7L;
                int *l_715 = &g_180;
                int *l_732 = &l_648;
                (*g_100) = l_703;
                p_46 = l_704;
            }
        }
        for (g_157 = 0; (g_157 >= 0); g_157 -= 1)
        {
            char l_755 = (-1L);
            short *l_756[10] = {&g_270, &g_270, &g_270, &g_270, &g_270, &g_270, &g_270, &g_270, &g_270, &g_270};
            int l_757 = 0xEADBDBAFL;
            int l_758 = 0x9FBAEF86L;
            int *l_782 = &l_648;
            char l_797 = (-1L);
            int *l_814[10] = {&g_20, &g_22, &g_20, &g_22, &g_20, &g_22, &g_20, &g_22, &g_20, &g_22};
            int i;
            if ((*g_100))
                break;
            l_758 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((~((l_757 = ((((**g_513) = (((l_755 = ((func_36(p_46) || (func_36(p_46) , (((*l_665) = (*g_100)) >= 0x73E5CCE4L))) ^ (0xE7915F71954174CDLL & (g_116 = (0x03L == func_36(p_46)))))) & 65535UL) >= (-1L))) != p_48) || 0x0996L)) , (***g_237))), (**g_596))), 12));
            for (g_204 = 0; (g_204 <= 0); g_204 += 1)
            {
                int *l_763 = (void*)0;
                char l_810[7][1][6] = {{{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}, {{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}, {{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}, {{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}, {{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}, {{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}, {{0xD5L, 0xB4L, (-1L), (-1L), 0xB4L, 0xD5L}}};
                int i, j, k;
                for (l_611 = 0; (l_611 <= 5); l_611 += 1)
                {
                    short ***l_760 = &l_759;
                    unsigned char *l_764 = (void*)0;
                    unsigned char *l_765 = &g_115[1][7][1];
                    int l_766[6];
                    unsigned l_775 = 0xF14A716AL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_766[i] = 7L;
                    l_607[(g_157 + 1)][(g_204 + 1)][g_204] = p_46;
                    (*l_760) = l_759;
                }
                for (g_110 = 0; (g_110 <= 0); g_110 += 1)
                {
                    unsigned l_798[1];
                    int ****l_805 = (void*)0;
                    unsigned char *l_813 = &g_115[1][1][0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_798[i] = 0x14C4505BL;
                }
            }
        }
    }
    for (g_22 = 5; (g_22 >= 0); g_22 -= 1)
    {
        unsigned long long ***l_819 = &g_238;
        unsigned long long ****l_820[6];
        unsigned long long ***l_822[9][8] = {{&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}, {&g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238, &g_238}};
        int l_825 = 0x2F4EBB16L;
        int *l_828 = &l_611;
        int *l_853 = &g_181;
        int i, j;
        for (i = 0; i < 6; i++)
            l_820[i] = (void*)0;
        (*g_100) = ((safe_sub_func_int32_t_s_s(((((p_47 == (**g_513)) < 0x69B2L) | (((((*l_828) = (safe_mul_func_uint8_t_u_u(((l_821[1][2] = l_819) != (g_237 = l_822[1][2])), (safe_mod_func_uint64_t_u_u(l_825, (safe_mul_func_uint8_t_u_u((((((*g_596) = (*g_596)) == &g_116) || p_48) > 0xE9263D0BL), (***g_283)))))))) , l_825) < (*g_159)) , l_825)) & 8UL), p_49)) < l_825);
        for (g_337 = 0; (g_337 <= 5); g_337 += 1)
        {
            int *l_834 = (void*)0;
            int l_846 = 1L;
            unsigned long long *l_898 = (void*)0;
            for (l_611 = 5; (l_611 >= 0); l_611 -= 1)
            {
                unsigned char *l_831 = &g_115[1][1][0];
                unsigned char *l_833 = &g_115[1][2][1];
                int l_845[8][6] = {{(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}, {(-9L), 7L, 1L, 0x5D2C0868L, 1L, 7L}};
                int i, j;
                for (g_270 = 0; (g_270 <= 5); g_270 += 1)
                {
                    for (g_204 = 0; (g_204 <= 5); g_204 += 1)
                    {
                        (*g_100) = (safe_mul_func_uint8_t_u_u(g_22, p_47));
                    }
                    for (g_92 = 0; (g_92 <= 5); g_92 += 1)
                    {
                        unsigned char **l_832 = &l_831;
                        (*g_100) = (((*l_832) = l_831) == l_833);
                    }
                    g_796 = l_834;
                }
                for (g_92 = 0; (g_92 <= 5); g_92 += 1)
                {
                    long long l_851 = 0xFC1E5F79F1A57486LL;
                    int *l_852 = &l_845[4][1];
                    l_825 = (safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((!((*l_612) = (safe_mod_func_int32_t_s_s(((+(0x20ACE113L > l_845[4][2])) && ((l_846 <= (safe_lshift_func_uint16_t_u_u(0x889CL, 5))) == (&p_47 != &p_47))), (((*l_767) || ((*g_100) = (safe_mod_func_uint16_t_u_u(((((p_49 && p_48) ^ 0xCC4167ABL) & p_47) <= l_851), p_47)))) ^ (-2L)))))), g_20)), 3)) & l_825), g_181)), 0x8B20L));
                    l_853 = l_852;
                }
            }
            for (l_825 = 0; (l_825 <= 5); l_825 += 1)
            {
                int *l_854 = &g_20;
                l_834 = l_854;
            }
            for (g_270 = 0; (g_270 <= 5); g_270 += 1)
            {
                unsigned short l_855 = 65535UL;
                int *l_860 = &g_41;
                unsigned short l_878 = 0x130CL;
                int l_904[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_904[i] = 0xFEC63E63L;
            }
        }
        for (l_825 = 0; (l_825 == 3); ++l_825)
        {
            unsigned long long **l_918 = (void*)0;
            unsigned *l_919 = &g_204;
            l_853 = func_52((*g_724), (*g_238), (safe_add_func_uint32_t_u_u(p_48, 0x268832B0L)), (p_47 > (((safe_unary_minus_func_uint64_t_u(p_48)) & g_9[0][0][3]) || (safe_rshift_func_uint16_t_u_s((func_36((((*l_828) = (((*g_237) == (l_918 = l_918)) ^ 0xE75F58B5A3821ED2LL)) , &l_825)) , p_49), 15)))));
            (*l_853) = (p_47 < (((*l_919) = p_48) <= l_920[0]));
            l_853 = (void*)0;
        }
    }
    if ((&g_115[1][1][0] == (l_921 , (l_922 = &l_879))))
    {
        char l_924 = 0xECL;
        int *l_925 = &g_181;
        short **l_931 = &g_514[3];
        unsigned long long *l_932 = (void*)0;
        long long **l_946[8][7] = {{&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}, {&l_610[2][0][1], &l_610[2][0][1], (void*)0, &g_597, &g_597, &g_597, &g_597}};
        long long ***l_947 = &g_596;
        long long **l_949 = &g_597;
        long long ***l_948 = &l_949;
        int i, j;
        if ((*g_100))
        {
            unsigned char l_923 = 0x13L;
            return l_923;
        }
        else
        {
            short **l_930 = &g_514[3];
            int *l_933 = &g_181;
            unsigned long long *l_934[4];
            unsigned *l_935 = &g_204;
            unsigned short *l_940 = (void*)0;
            unsigned short *l_941 = &g_337;
            int i;
            for (i = 0; i < 4; i++)
                l_934[i] = (void*)0;
            l_933 = func_52(func_57(l_924, l_925, (((safe_add_func_uint8_t_u_u(((((((p_49 , (*g_238)) != (*g_238)) <= ((g_189 = p_49) > 9L)) >= ((safe_lshift_func_int8_t_s_s(((p_47 , (l_930 == l_931)) ^ p_47), p_49)) , p_47)) , (*l_925)) < 0xB2L), 0x9BL)) ^ p_47) , 1L)), l_932, g_281, g_337);
            p_46 = func_52((*g_724), l_934[2], ((*l_941) = ((p_49 , (p_49 = 18446744073709551608UL)) ^ ((+(((*l_935) = g_116) != (safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((&l_922 == (void*)0), ((*l_612) = g_160))) , p_47), p_47)))) == p_47))), p_48);
            l_933 = p_46;
        }
        (*g_100) = ((func_36(p_46) || (safe_lshift_func_int8_t_s_u((((*l_925) || p_49) , func_36(l_925)), 2))) || (safe_mul_func_int16_t_s_s((((*l_947) = l_946[3][6]) == ((*l_948) = &g_597)), (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((p_49 , 0x19EFL), 0)) || (-5L)), p_47)) , (**g_513)), (*l_767))))));
    }
    else
    {
        int *l_956 = &g_157;
        p_46 = l_956;
        for (g_92 = 0; (g_92 <= 5); g_92 += 1)
        {
            char l_964 = 4L;
            int l_965 = (-3L);
            for (g_180 = 0; (g_180 <= 5); g_180 += 1)
            {
                int l_957 = 0x662611D4L;
                long long ***l_958 = &g_596;
                if (l_957)
                {
                    long long ***l_960 = &g_596;
                    long long ****l_959 = &l_960;
                    int *l_963 = (void*)0;
                    int i;
                    g_445[0][8][1] = (((l_958 == ((*l_959) = &g_596)) , ((*l_956) , (safe_rshift_func_int8_t_s_u(((***g_283) = ((**g_513) ^ func_36(p_46))), 1)))) , l_963);
                    return p_48;
                }
                else
                {
                    (*g_100) = ((((*l_612) = (p_49 != l_964)) , func_36(l_956)) >= (l_964 == (l_965 = ((-4L) & l_957))));
                }
            }
        }
    }
    return p_49;
}







static int * func_52(int ** p_53, unsigned long long * p_54, unsigned short p_55, int p_56)
{
    int *l_590 = &g_22;
    unsigned l_591 = 0x10191BC4L;
    int **l_600 = &l_590;
    int *l_601 = &g_157;
    l_591 = ((p_55 < (g_189 , (safe_lshift_func_uint16_t_u_s((!(!g_115[1][1][0])), 9)))) , (((***g_283) = func_36(l_590)) , func_36(l_590)));
    (*l_601) = (safe_add_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(p_56, ((+((((((void*)0 == g_596) & ((safe_add_func_uint32_t_u_u(((((*l_600) = l_590) == l_601) == p_55), ((*l_601) , 4294967292UL))) <= ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((*l_601), p_55)), 248UL)) >= 7UL))) || (*l_601)) || 2L) > (*g_15))) , (*l_590)))) != g_9[3][1][0]), (*l_601)));
    (*l_601) = ((**l_600) | p_55);
    (*l_600) = ((**l_600) , &g_20);
    return &g_157;
}







static int ** func_57(unsigned char p_58, int * p_59, int p_60)
{
    int *l_62 = &g_41;
    int **l_61 = &l_62;
    return g_63;
}







static unsigned long long * func_64(int * p_65, int ** p_66, int ** p_67)
{
    unsigned l_214 = 0UL;
    int l_222[9];
    int *l_290 = (void*)0;
    unsigned long long *l_301 = &g_16;
    int *l_338 = (void*)0;
    unsigned l_344 = 4UL;
    short *l_374[7][7] = {{&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}, {&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}, {&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}, {&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}, {&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}, {&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}, {&g_270, &g_110, (void*)0, &g_110, &g_270, (void*)0, &g_270}};
    int *l_418 = &g_22;
    int l_432 = 0x3A3B5EDEL;
    unsigned long long *l_517 = &g_189;
    unsigned char l_560 = 0UL;
    int l_561 = 1L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_222[i] = (-5L);
    return (*g_238);
}







static int ** func_68(short p_69, short p_70)
{
    int l_87 = 0xCDB24405L;
    int *l_88 = &g_41;
    int **l_89[10] = {(void*)0, &l_88, (void*)0, &l_88, (void*)0, &l_88, (void*)0, &l_88, (void*)0, &l_88};
    unsigned long long **l_90 = &g_15;
    unsigned *l_91[4][3][3] = {{{&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}}, {{&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}}, {{&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}}, {{&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}, {&g_92, &g_92, &g_92}}};
    unsigned long long ***l_95 = &l_90;
    short l_186 = 0x180AL;
    unsigned long long l_211[2][6] = {{0xB7D10769E08EB9DCLL, 18446744073709551612UL, 0xB7D10769E08EB9DCLL, 18446744073709551612UL, 0xB7D10769E08EB9DCLL, 18446744073709551612UL}, {0xB7D10769E08EB9DCLL, 18446744073709551612UL, 0xB7D10769E08EB9DCLL, 18446744073709551612UL, 0xB7D10769E08EB9DCLL, 18446744073709551612UL}};
    int i, j, k;
lbl_149:
    (*l_95) = func_72((g_92 = ((~(((&g_15 == ((safe_sub_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(65535UL, (safe_rshift_func_int16_t_s_u((p_70 = ((safe_sub_func_uint16_t_u_u(((4L | ((safe_mod_func_uint64_t_u_u((*g_15), 0x9CDEE7B07E043BC7LL)) | l_87)) && func_36(l_88)), (l_89[4] == &l_88))) == (-1L))), 3)))) ^ 0x97L), 18446744073709551611UL)) , l_90)) < (*l_88)) , p_70)) , 0xA102817AL)), &g_22, g_16, g_41);
    for (p_69 = (-19); (p_69 > 4); p_69 = safe_add_func_int32_t_s_s(p_69, 2))
    {
        unsigned short l_98[8] = {0xFF8DL, 0x63EDL, 0xFF8DL, 0x63EDL, 0xFF8DL, 0x63EDL, 0xFF8DL, 0x63EDL};
        int *l_99 = &g_41;
        char l_102 = (-1L);
        int **l_103 = &g_100;
        unsigned long long *l_202 = &g_189;
        int i;
        if (l_98[1])
        {
            int *l_101[5];
            int i;
            for (i = 0; i < 5; i++)
                l_101[i] = &g_41;
            g_100 = l_99;
            l_102 = (l_99 != l_101[0]);
            for (p_70 = 7; (p_70 >= 1); p_70 -= 1)
            {
                return l_103;
            }
        }
        else
        {
            short *l_109 = &g_110;
            char *l_111 = &l_102;
            unsigned char *l_114 = &g_115[1][1][0];
            int l_123 = (-1L);
            int **l_147 = &l_88;
            int **l_148 = (void*)0;
            for (g_92 = 0; (g_92 <= 2); g_92 += 1)
            {
                int i;
                (*l_103) = (void*)0;
                (*l_103) = (*l_103);
                for (l_102 = 0; (l_102 <= 2); l_102 += 1)
                {
                    unsigned long long l_104 = 0UL;
                    for (g_22 = 2; (g_22 >= 0); g_22 -= 1)
                    {
                        l_104 = 0x4516B2CFL;
                    }
                }
            }
            if (((safe_rshift_func_int16_t_s_u((g_9[0][3][3] , (g_116 = ((((((*g_15) & 18446744073709551615UL) , (safe_lshift_func_uint16_t_u_u(g_9[1][0][0], 10))) || ((*l_109) = 0L)) >= ((*l_111) = (*l_88))) | ((*l_114) = (((safe_add_func_int8_t_s_s(((func_36((*l_103)) , (*l_99)) && 0UL), g_20)) && p_69) , g_22))))), 6)) , (-5L)))
            {
                int *l_119 = (void*)0;
                for (g_116 = 11; (g_116 <= 10); g_116--)
                {
                    int *l_120[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_120[i] = &g_22;
                    l_120[1] = l_119;
                }
                for (g_116 = 0; (g_116 != 6); g_116++)
                {
                    if (l_123)
                        break;
                }
            }
            else
            {
                unsigned long long *l_139 = &g_16;
                int l_142 = 0x7A57FB1EL;
                char **l_162 = &g_159;
                int l_179 = 0x79458370L;
                int **l_206[1][3][10] = {{{&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100}, {&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100}, {&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100}}};
                unsigned l_207 = 4294967295UL;
                int i, j, k;
                if ((p_69 && ((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((-1L), 0xBE38L)), (safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((((((safe_sub_func_uint64_t_u_u((((+g_22) , &g_16) == l_139), (safe_mod_func_int64_t_s_s(l_142, (g_116 || (p_70 <= p_69)))))) ^ p_69) && p_69) ^ (*g_15)) == p_70))) <= g_9[2][3][2]), g_22)), l_123)))), (*l_88))), (*g_15))) || (-1L))))
                {
                    for (l_102 = 14; (l_102 > 0); l_102--)
                    {
                        if (p_70)
                            break;
                        if (p_69)
                            continue;
                        g_22 = 0x384D70BFL;
                    }
                    if (p_70)
                        break;
                }
                else
                {
                    if (p_69)
                        break;
                    for (l_87 = 0; (l_87 <= 2); l_87 += 1)
                    {
                        unsigned l_145 = 1UL;
                        int **l_146 = &l_88;
                        l_142 = l_145;
                        (*l_103) = (*l_103);
                        return l_148;
                    }
                    if (g_22)
                        goto lbl_149;
                    if (p_70)
                        continue;
                }
                for (l_142 = (-2); (l_142 <= (-13)); l_142--)
                {
                    int *l_156 = &l_142;
                    if ((~(safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(0x1BL, func_36(l_156))), g_157))))
                    {
                        char *l_158[5][9] = {{&l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102}, {&l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102}, {&l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102}, {&l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102}, {&l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102, (void*)0, &l_102}};
                        int l_161 = 1L;
                        char ***l_163 = (void*)0;
                        char **l_164 = &g_159;
                        int i, j;
                        l_161 = (l_158[1][4] != ((*l_156) , g_159));
                        l_164 = l_162;
                    }
                    else
                    {
                        int *l_165 = &l_123;
                        if ((*l_156))
                            break;
                        if (g_115[0][1][1])
                            break;
                        l_165 = l_165;
                        (*l_165) = p_70;
                    }
                    if ((g_181 = ((safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_int16_t_s((safe_add_func_int64_t_s_s((0x1C42CB54L <= (safe_sub_func_int16_t_s_s(((*l_109) = l_142), (0x12C03D8830F48775LL || 18446744073709551608UL)))), (((safe_mul_func_int16_t_s_s((g_180 = ((g_157 = (-6L)) , (p_69 && (((safe_add_func_uint16_t_u_u((l_179 = (p_69 & (((g_160 || ((((~((func_36((*l_147)) & (*l_88)) , 0xBF4B4AC7L)) , l_142) == (*g_159)) >= 0x2EL)) >= p_70) , (**l_147)))), g_157)) , 1L) , 4UL)))), p_70)) , g_41) > p_69))))) || (-1L)) || 0x2FE4L) && 2UL), l_142)) < p_69)))
                    {
                        char l_187 = 0xEFL;
                        unsigned long long *l_188 = &g_189;
                        unsigned *l_203[7] = {&g_204, &g_204, (void*)0, &g_204, &g_204, (void*)0, &g_204};
                        int l_205 = 0L;
                        int i;
                        (*l_103) = (*l_147);
                        (*l_147) = ((0xF9L < (safe_lshift_func_int8_t_s_u(((g_20 , ((((safe_lshift_func_int8_t_s_s(((func_36(l_156) | l_186) == 0L), 4)) | l_142) >= ((*g_15) > ((*l_188) = l_187))) , p_70)) != p_70), 7))) , (void*)0);
                        g_181 = (safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((g_41 == (safe_mod_func_uint16_t_u_u(p_70, l_142))), p_70)), ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s(l_142, 1)) & (l_139 == l_202)) <= (l_205 = 0x1369D0CBL)), g_181)), 0xBA6CL)) ^ 0UL)));
                    }
                    else
                    {
                        g_22 = func_36(l_156);
                    }
                    (*l_103) = (*l_147);
                    return l_206[0][2][8];
                }
                if (l_207)
                    break;
                return l_206[0][0][8];
            }
            (*l_147) = &g_22;
            if ((**l_147))
                break;
        }
    }
    for (l_186 = 6; (l_186 != (-30)); --l_186)
    {
        int *l_210[7][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
        int i, j;
        if ((l_211[1][2] = func_36(l_210[3][0])))
        {
            return &g_100;
        }
        else
        {
            short l_212 = 0xAE8AL;
            int *l_213 = &g_22;
            g_181 = func_36(l_210[0][1]);
            l_212 = p_69;
            if ((*l_88))
                break;
            g_100 = l_213;
        }
    }
    return &g_100;
}







static unsigned long long ** func_72(unsigned p_73, int * p_74, unsigned p_75, unsigned p_76)
{
    int *l_94 = &g_41;
    int **l_93 = &l_94;
    (*l_93) = &g_20;
    (*l_93) = (*l_93);
    return &g_15;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_115[i][j][k], "g_115[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_490[i][j][k], "g_490[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1044, "g_1044", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
