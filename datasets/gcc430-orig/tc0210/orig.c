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



static int g_7 = 0xB8F3D421L;
static int g_50[2] = {0xD505BC98L, 0xD505BC98L};
static int *g_69 = &g_50[1];
static int g_70 = 0L;
static int g_71 = 0xAA798D66L;
static int g_72 = 0x5E7CE1BFL;
static int *g_143 = &g_72;
static int *g_183[3][4] = {{(void*)0, (void*)0, &g_71, (void*)0}, {(void*)0, (void*)0, &g_71, (void*)0}, {(void*)0, (void*)0, &g_71, (void*)0}};
static int **g_212 = &g_183[0][0];
static int *g_236 = &g_50[1];
static int g_330 = 0xD036454BL;
static unsigned char g_346[6] = {0xF2L, 0xF2L, 0xF2L, 0xF2L, 0xF2L, 0xF2L};
static unsigned long long g_492 = 0UL;
static char g_675 = (-1L);
static unsigned short g_689[8][7][4] = {{{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}, {{1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}, {1UL, 65535UL, 0UL, 1UL}}};
static int g_740 = 8L;
static int *g_762 = (void*)0;
static int g_1029 = 0x0610B195L;
static int g_1047 = (-1L);
static unsigned g_1092 = 4294967292UL;
static int *g_1124 = (void*)0;
static int *g_1133 = &g_71;
static int g_1233[2][4][8] = {{{(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}, {(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}, {(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}, {(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}}, {{(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}, {(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}, {(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}, {(-6L), 0xA9B4475AL, 0x3EEB0E53L, 0x3EEB0E53L, 0xA9B4475AL, (-6L), 0xA9B4475AL, 0x3EEB0E53L}}};



static unsigned func_1(void);
static int func_2(int p_3, short p_4);
static int func_8(unsigned long long p_9, int p_10, int * p_11, int p_12, unsigned char p_13);
static int func_14(unsigned long long p_15, long long p_16, short p_17, unsigned long long p_18);
static unsigned long long func_19(unsigned short p_20, unsigned p_21, int * p_22);
static int * func_24(int * p_25, short p_26, int * p_27);
static int * func_28(int * p_29);
static int * func_30(int * p_31, int * p_32, int * p_33, unsigned long long p_34, int * p_35);
static int * func_36(int p_37, int * p_38, unsigned char p_39, unsigned short p_40, int p_41);
static int func_42(int * p_43, unsigned char p_44, int * p_45);
static unsigned func_1(void)
{
    unsigned l_5[7] = {0x951FE77DL, 0xBF34FDA0L, 0x951FE77DL, 0xBF34FDA0L, 0x951FE77DL, 0xBF34FDA0L, 0x951FE77DL};
    int *l_1001 = (void*)0;
    unsigned short l_1021 = 0UL;
    unsigned l_1034 = 0xF70867C3L;
    int *l_1059 = (void*)0;
    int *l_1060 = &g_50[1];
    int l_1083 = 0x8F6470B9L;
    int *l_1093 = (void*)0;
    int ***l_1097 = (void*)0;
    char l_1118 = 0x90L;
    int *l_1132 = (void*)0;
    unsigned short l_1134 = 1UL;
    long long l_1135 = 0xB68479A765E3A107LL;
    unsigned char l_1150 = 1UL;
    int *l_1195 = &g_7;
    char l_1220 = 0xD5L;
    int *l_1269 = &g_7;
    unsigned short l_1273 = 0x46D7L;
    int *l_1286 = &g_71;
    long long l_1289 = 0x90B204505EF9BF99LL;
    unsigned l_1298 = 0x5044394CL;
    int *l_1306 = &g_1047;
    int *l_1307 = &g_71;
    unsigned l_1315 = 4294967295UL;
    int i;
lbl_1239:
    if (func_2(l_5[5], l_5[5]))
    {
        unsigned char l_1008[8][9] = {{0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}, {0xCFL, 0xCFL, 255UL, 0xC3L, 252UL, 0xC3L, 255UL, 0xCFL, 0xCFL}};
        int *l_1018 = &g_50[0];
        unsigned l_1030 = 0x0D8247ABL;
        int i, j;
        (*g_212) = l_1001;
        (*g_236) = (safe_lshift_func_int8_t_s_s((g_675 && ((((void*)0 != &g_212) == ((safe_sub_func_uint64_t_u_u((~18446744073709551615UL), g_492)) >= g_50[0])) <= (g_70 == ((safe_sub_func_uint64_t_u_u(((((void*)0 != &g_72) >= (*g_236)) ^ l_1008[2][7]), 0x7676B5587B9F0FF4LL)) && l_1008[0][0])))), 3));
        if (l_1008[2][7])
        {
            char l_1011[5] = {1L, 0L, 1L, 0L, 1L};
            int *l_1015 = &g_740;
            int i;
            for (g_72 = 0; (g_72 >= (-12)); g_72 = safe_sub_func_int16_t_s_s(g_72, 9))
            {
                long long l_1012 = 0xAA421113EE61BB29LL;
                if ((*g_143))
                    break;
                if (l_1011[0])
                    continue;
                if (l_1011[2])
                    continue;
                if (l_1011[2])
                {
                    unsigned l_1013[1][10][1] = {{{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}}};
                    int *l_1014 = (void*)0;
                    int i, j, k;
                    l_1013[0][3][0] = ((l_1011[0] > g_70) == g_50[1]);
                    l_1015 = l_1014;
                    if (l_1012)
                        continue;
                    if (l_1008[0][7])
                        break;
                }
                else
                {
                    if ((*g_143))
                        break;
                }
            }
            (*g_69) = (((g_72 || (0L == ((((((void*)0 != &g_69) == (func_2((safe_add_func_int8_t_s_s(((((l_1018 == (void*)0) < 254UL) != (safe_sub_func_uint16_t_u_u(((4UL <= l_1021) == g_346[1]), g_50[1]))) >= (*l_1018)), (*l_1018))), g_330) >= 0UL)) > l_1011[0]) < g_689[1][5][1]) > l_1011[0]))) ^ 0x36L) == (*l_1018));
            (*g_236) = (((safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((((safe_unary_minus_func_int32_t_s((*l_1018))) < 1UL) | (g_492 && (((func_2(l_5[5], ((((l_1011[0] & l_5[6]) || g_1029) <= 0xEFL) <= g_492)) | 255UL) | 1L) > g_346[1]))), 7)), 18446744073709551608UL)), 7UL)) >= l_1030) ^ g_50[1]);
        }
        else
        {
            unsigned char l_1043[6] = {4UL, 0x46L, 4UL, 0x46L, 4UL, 0x46L};
            int *l_1052 = &g_330;
            int i;
            (*g_212) = (void*)0;
            if (func_19((*l_1018), (safe_add_func_int8_t_s_s(func_2(((*l_1018) || g_50[1]), g_7), g_689[1][5][3])), &g_71))
            {
                unsigned l_1033 = 0xAB5EAB22L;
                l_1033 = (*l_1018);
                (*g_212) = l_1018;
            }
            else
            {
                unsigned char l_1046 = 250UL;
                (*l_1018) = (*l_1018);
                if (l_1030)
                    goto lbl_1048;
                if ((((0x3BL ^ l_1034) | (&g_212 != &g_212)) | (safe_sub_func_int8_t_s_s(((*l_1018) || (-4L)), (safe_lshift_func_uint16_t_u_s(g_346[1], ((safe_rshift_func_uint16_t_u_u((18446744073709551612UL <= (safe_add_func_int8_t_s_s((18446744073709551606UL > g_50[1]), l_1043[0]))), g_346[1])) == (-4L))))))))
                {
lbl_1048:
                    (*g_143) = (!(((0x0FL >= g_71) ^ ((l_1046 > 18446744073709551615UL) == g_1047)) < l_1043[3]));
lbl_1051:
                    for (g_1029 = 16; (g_1029 < 23); g_1029 = safe_add_func_uint32_t_u_u(g_1029, 1))
                    {
                        if ((*g_236))
                            break;
                        if (l_1021)
                            goto lbl_1051;
                    }
                    if (l_1046)
                        goto lbl_1048;
                }
                else
                {
                    int *l_1053 = &g_330;
                    l_1053 = l_1052;
                    (*g_143) = (*g_143);
                    (*l_1053) = (-6L);
                }
            }
        }
    }
    else
    {
        int l_1054 = (-1L);
        (*g_236) = (l_1054 | g_689[1][5][1]);
        (*g_212) = l_1001;
        (*g_212) = l_1001;
    }
lbl_1129:
    (*g_212) = l_1001;
lbl_1213:
    (*g_212) = &g_50[1];
    for (l_1034 = 0; (l_1034 == 45); l_1034 = safe_add_func_int64_t_s_s(l_1034, 2))
    {
        unsigned l_1073[10][6][4] = {{{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}, {{18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}, {18446744073709551611UL, 1UL, 0x8A95321BL, 0x50E3FEFFL}}};
        int *l_1110[9][9][1] = {{{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}, {{&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}, {&g_740}}};
        int l_1130 = (-10L);
        long long l_1206 = 8L;
        int *l_1225 = (void*)0;
        int *l_1258 = &g_50[1];
        short l_1313 = 0x758EL;
        int i, j, k;
        for (g_72 = 0; (g_72 == 19); g_72 = safe_add_func_uint32_t_u_u(g_72, 7))
        {
            short l_1081 = 0x26F4L;
            int ***l_1100 = &g_212;
            int *l_1103 = &g_330;
            unsigned short l_1117 = 0UL;
            int **l_1143[1][10][1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 10; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1143[i][j][k] = &g_762;
                }
            }
            for (g_70 = 0; (g_70 <= 5); g_70 += 1)
            {
                int *l_1082 = &g_70;
                int i;
                (*g_236) = (((safe_add_func_uint8_t_u_u((g_346[g_70] && g_346[g_70]), l_1073[0][5][1])) < g_330) ^ g_70);
                for (l_1021 = 0; (l_1021 <= 5); l_1021 += 1)
                {
                    unsigned l_1088 = 3UL;
                    if (l_1073[0][5][1])
                    {
                        int *l_1074 = &g_330;
                        (*g_212) = func_36(g_346[3], l_1074, (+(l_1073[0][5][1] ^ ((g_7 ^ (safe_add_func_int16_t_s_s((*l_1074), g_71))) && (0L & (!(safe_add_func_int32_t_s_s((l_1001 != (void*)0), g_346[g_70]))))))), g_72, l_1081);
                        (*g_212) = l_1082;
                    }
                    else
                    {
                        int l_1089 = (-5L);
                        int ***l_1096 = &g_212;
                        (*l_1060) = (l_1073[5][3][1] != (l_1083 ^ func_19((((safe_lshift_func_uint8_t_u_u(func_19((*l_1082), (((g_50[0] >= ((safe_rshift_func_int16_t_s_u(l_1088, (0x1FL < 0x93L))) >= l_1089)) ^ (safe_add_func_int32_t_s_s(l_1089, l_1073[0][3][3]))) >= g_7), &g_1047), 1)) & (*l_1082)) == l_1088), g_740, l_1082)));
                        (*g_212) = func_36(g_1092, func_36(g_1092, l_1093, g_689[2][2][1], (((0x06L == (safe_sub_func_uint32_t_u_u(((l_1096 != l_1097) == (safe_add_func_uint32_t_u_u(l_1081, (((l_1081 <= g_689[0][3][2]) > (-1L)) && (-10L))))), l_1073[0][5][1]))) == 255UL) > g_689[1][5][1]), (*g_69)), g_7, g_346[1], (*g_143));
                        (*g_69) = l_1073[0][5][1];
                    }
                }
                (*l_1060) = ((0x441BE08DL || (-1L)) >= 0x80L);
            }
            if (((l_1100 != &g_212) > ((*l_1060) || ((&g_212 == &g_212) > (!(g_740 && (0xFAL == 0x90L)))))))
            {
                int l_1104[4][2][3];
                int *l_1109 = &g_70;
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1104[i][j][k] = 0x6F4A2128L;
                    }
                }
                (*l_1060) = (safe_sub_func_int16_t_s_s(func_19(((l_1104[1][1][1] < (65535UL != g_70)) == func_19(((((g_1092 || g_346[1]) > (safe_add_func_int8_t_s_s((!(safe_lshift_func_uint8_t_u_u(252UL, g_1092))), l_1073[8][1][1]))) < g_740) | g_492), g_50[1], l_1109)), g_689[3][5][0], &l_1104[3][0][0]), 0xC09CL));
                (*g_212) = func_36((~0xAEC9BE29L), l_1110[2][8][0], (((~(&g_70 != (void*)0)) ^ g_7) ^ (*l_1103)), (g_492 != ((((((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(func_19(g_1029, (*l_1109), &g_70), g_346[1])), 7L)), g_1047)) > g_740) || 0UL) <= 0x9EL) == l_1117) | 0x4C6EL)), l_1118);
                if ((*l_1103))
                {
                    char l_1119 = 0x1AL;
                    int *l_1122 = (void*)0;
                    unsigned short l_1123 = 0x03EBL;
                    if (l_1119)
                    {
                        (**l_1100) = (void*)0;
                    }
                    else
                    {
                        (*g_69) = ((safe_lshift_func_int16_t_s_u((&g_212 != (void*)0), (*l_1109))) | (g_50[1] && 0UL));
                        (*g_212) = l_1122;
                        return g_492;
                    }
                    (*l_1060) = (l_1123 != g_330);
                    for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
                    {
                        if ((*l_1109))
                            break;
                    }
                    (*g_236) = ((void*)0 != g_1124);
                }
                else
                {
                    unsigned short l_1127 = 0x9B95L;
                    int **l_1128 = &g_236;
                    (*g_212) = &l_1104[1][1][1];
                    for (g_675 = (-21); (g_675 == 6); g_675 = safe_add_func_int16_t_s_s(g_675, 4))
                    {
                        l_1127 = (*l_1109);
                    }
                    if ((g_740 <= g_675))
                    {
                        (*g_212) = func_36((l_1128 != &g_236), &l_1104[3][0][2], g_1047, g_70, ((void*)0 != &l_1104[1][0][0]));
                        if (g_1092)
                            goto lbl_1129;
                    }
                    else
                    {
                        int l_1131 = 0x9C270553L;
                        (**l_1128) = (l_1130 < l_1131);
                        (*g_212) = (*l_1128);
                        if ((*l_1109))
                            break;
                        (*l_1128) = l_1132;
                    }
                    (*l_1128) = g_1133;
                }
                (*g_1133) = 0x6A9810F3L;
            }
            else
            {
                l_1135 = l_1134;
                for (g_330 = 23; (g_330 == 0); g_330 = safe_sub_func_uint16_t_u_u(g_330, 4))
                {
                    unsigned l_1140[5][5] = {{18446744073709551615UL, 0x712F39DCL, 0xFCB7CC71L, 0x712F39DCL, 18446744073709551615UL}, {18446744073709551615UL, 0x712F39DCL, 0xFCB7CC71L, 0x712F39DCL, 18446744073709551615UL}, {18446744073709551615UL, 0x712F39DCL, 0xFCB7CC71L, 0x712F39DCL, 18446744073709551615UL}, {18446744073709551615UL, 0x712F39DCL, 0xFCB7CC71L, 0x712F39DCL, 18446744073709551615UL}, {18446744073709551615UL, 0x712F39DCL, 0xFCB7CC71L, 0x712F39DCL, 18446744073709551615UL}};
                    int i, j;
                    for (l_1130 = 0; (l_1130 > 18); l_1130 = safe_add_func_int32_t_s_s(l_1130, 9))
                    {
                        unsigned char l_1146 = 249UL;
                        int l_1147 = 1L;
                        (*g_69) = l_1140[0][2];
                        l_1147 = ((((void*)0 != &g_212) >= (safe_lshift_func_uint16_t_u_s(g_1092, (l_1143[0][6][0] != (void*)0)))) ^ (!(safe_rshift_func_uint16_t_u_s(l_1146, 13))));
                    }
                    for (l_1081 = 0; (l_1081 >= 0); l_1081 -= 1)
                    {
                        int i, j, k;
                        (*g_212) = (void*)0;
                        (*g_212) = func_36((func_19(g_740, func_19(l_1140[3][4], g_346[1], &g_740), &g_7) ^ (g_7 && g_740)), &g_70, g_346[1], g_1047, (*g_1133));
                    }
                    for (l_1021 = 0; (l_1021 != 22); l_1021 = safe_add_func_int8_t_s_s(l_1021, 2))
                    {
                        (*g_69) = l_1140[2][4];
                        if (l_1140[0][2])
                            break;
                        (*g_212) = &g_330;
                        return g_71;
                    }
                    if (l_1140[1][4])
                        break;
                }
            }
        }
        (*g_212) = &g_7;
        if ((l_1150 && ((g_50[1] >= func_2((*g_143), g_50[1])) <= ((((g_689[3][6][1] > g_346[3]) > g_1047) >= (g_346[5] != g_50[1])) < (-2L)))))
        {
            int l_1151 = 0x7664C543L;
            int l_1155 = 0xC251699FL;
            unsigned short l_1156 = 0x331AL;
            short l_1192 = 0x5B4FL;
            int ***l_1244 = &g_212;
            int *l_1251[1][7][6] = {{{(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}, {(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}, {(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}, {(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}, {(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}, {(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}, {(void*)0, (void*)0, &g_70, &g_740, (void*)0, &g_740}}};
            int i, j, k;
            if (l_1151)
            {
                return l_1151;
            }
            else
            {
                int *l_1152 = &l_1151;
                int l_1157 = 0x07FFDE63L;
                (*g_212) = l_1110[2][8][0];
                (*l_1060) = (*g_143);
                (*g_236) = (~l_1157);
                if ((*g_1133))
                {
                    return g_689[1][5][1];
                }
                else
                {
                    int *l_1158[7] = {&g_50[1], &g_330, &g_50[1], &g_330, &g_50[1], &g_330, &g_50[1]};
                    int i;
                    (*g_212) = l_1158[0];
                    (*g_69) = ((*l_1152) || (safe_sub_func_int16_t_s_s(g_1047, ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((*l_1152), 14)) > 247UL), g_70)) ^ g_740))));
                }
            }
            for (l_1135 = (-5); (l_1135 <= 29); ++l_1135)
            {
                int *l_1167 = &g_72;
                (*g_212) = l_1167;
                if ((*g_236))
                    continue;
            }
            if ((safe_add_func_uint16_t_u_u((~func_2((g_1047 < (((safe_sub_func_int32_t_s_s((*g_236), 7L)) < 0UL) <= 0xDACC1110L)), func_2(l_1151, g_346[1]))), l_1151)))
            {
                int **l_1178 = &g_183[2][1];
                (*g_1133) = l_1155;
                for (l_1118 = 0; (l_1118 <= 3); l_1118 += 1)
                {
                    int ***l_1174 = (void*)0;
                    int ***l_1175 = &g_212;
                    unsigned short l_1191 = 0x2235L;
                    (*l_1175) = &g_183[2][1];
                    (*g_212) = l_1110[1][6][0];
                    for (g_72 = 3; (g_72 >= 0); g_72 -= 1)
                    {
                        short l_1185 = 6L;
                        char l_1190 = (-3L);
                        int i, j, k;
                        (**l_1175) = func_36(l_1073[(g_72 + 4)][(l_1118 + 2)][g_72], &g_7, g_1092, (0x2EEDE474L < (l_1155 <= ((((((void*)0 == l_1178) != (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(0x350BL, ((safe_sub_func_int16_t_s_s(0x56E1L, 0L)) >= g_740))), g_330))) && (*g_236)) && g_740) == l_1156))), (*g_236));
                        l_1155 = (g_50[1] > (l_1185 >= (((((safe_mod_func_uint16_t_u_u(g_50[1], ((safe_lshift_func_uint16_t_u_u(((&g_1124 == l_1178) != g_1029), (l_1151 >= (g_1092 | l_1190)))) ^ l_1185))) < 0x5D85L) ^ 0xC6L) == l_1191) | g_689[1][5][1])));
                        (*g_236) = l_1192;
                        if ((*g_236))
                            continue;
                    }
                }
            }
            else
            {
                int *l_1196 = &l_1155;
                int l_1246 = (-6L);
                for (g_492 = 0; (g_492 != 8); g_492 = safe_add_func_uint32_t_u_u(g_492, 1))
                {
                    int l_1199 = (-1L);
                    unsigned l_1223 = 18446744073709551615UL;
                    for (l_1155 = 0; (l_1155 <= 1); l_1155 += 1)
                    {
                        int i, j, k;
                        (*g_212) = (void*)0;
                        l_1110[3][7][0] = func_30(l_1195, l_1196, &g_330, ((func_2(((g_70 < g_70) <= 0xF8B010C41F496668LL), g_1047) | l_1199) <= g_1047), l_1196);
                    }
                    if ((*l_1196))
                    {
                        short l_1202[2][8] = {{1L, 1L, 4L, 1L, 1L, 4L, 1L, 1L}, {1L, 1L, 4L, 1L, 1L, 4L, 1L, 1L}};
                        int i, j;
                        (*g_212) = &l_1199;
                        (*g_69) = l_1202[1][5];
                        (*g_212) = l_1196;
                        if (l_1192)
                            continue;
                    }
                    else
                    {
                        int **l_1205 = &l_1110[3][0][0];
                        l_1110[2][8][0] = &g_71;
                        (*l_1195) = ((void*)0 != l_1205);
                        (*l_1196) = (&l_1199 == (void*)0);
                    }
                    if ((*g_143))
                        continue;
                    if (((l_1206 && 0x65L) <= (((1UL < (!7UL)) >= ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s((((void*)0 == l_1110[1][6][0]) == (g_689[3][5][1] == l_1199)), g_740)) < 0x07L), 1)) == g_50[0])) ^ g_71)))
                    {
                        int *l_1224 = &g_740;
                        if (g_71)
                            goto lbl_1213;
                        (*l_1224) = ((safe_sub_func_uint8_t_u_u((((*l_1196) > (*l_1196)) < (((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_1223, 2L)), (*l_1060))) || g_1047) & g_50[0])), (*l_1196))) <= g_346[1]);
                        (*l_1060) = (*l_1196);
                        (*g_212) = func_30(l_1196, func_36(g_689[1][5][1], l_1225, ((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_19(((void*)0 != &g_212), (0UL || ((*l_1196) > (*l_1195))), &l_1199), l_1156)), 14)) == 4UL), (*l_1196))) >= l_1223), l_1192, l_1192), &l_1151, (*l_1196), l_1196);
                    }
                    else
                    {
                        (*g_212) = &l_1155;
                    }
                }
                for (g_740 = 3; (g_740 >= 0); g_740 -= 1)
                {
                    int l_1232 = 0L;
                    int **l_1238 = &l_1225;
                    int *l_1247[4][7] = {{&l_1155, &g_50[1], &l_1151, &g_50[1], &l_1155, &g_50[1], &l_1151}, {&l_1155, &g_50[1], &l_1151, &g_50[1], &l_1155, &g_50[1], &l_1151}, {&l_1155, &g_50[1], &l_1151, &g_50[1], &l_1155, &g_50[1], &l_1151}, {&l_1155, &g_50[1], &l_1151, &g_50[1], &l_1155, &g_50[1], &l_1151}};
                    int i, j;
                    if (l_1151)
                    {
                        (*g_1133) = (~l_1232);
                        if (g_1233[0][1][3])
                            break;
                        if ((*g_69))
                            continue;
                        return g_1029;
                    }
                    else
                    {
                        (*l_1195) = ((safe_lshift_func_uint8_t_u_s((g_71 > (*l_1060)), 4)) & (((0x58444C72L | l_1232) > 4294967295UL) & (((void*)0 != l_1238) == g_675)));
                        if ((*g_236))
                            continue;
                        (*g_212) = &g_7;
                        (*g_212) = &l_1151;
                    }
                    for (l_1156 = 0; (l_1156 <= 0); l_1156 += 1)
                    {
                        if (l_1083)
                            goto lbl_1239;
                    }
                }
                if ((safe_add_func_uint16_t_u_u(g_70, ((void*)0 == (*l_1244)))))
                {
                    if (l_1083)
                        goto lbl_1129;
                    (*l_1195) = 0x5EF21619L;
                }
                else
                {
                    int *l_1250 = (void*)0;
                    (**l_1244) = &g_740;
                    l_1250 = l_1196;
                }
                (*g_212) = l_1196;
            }
        }
        else
        {
            int *l_1280 = (void*)0;
            int *l_1288[2];
            unsigned l_1290 = 0x07842686L;
            int i;
            for (i = 0; i < 2; i++)
                l_1288[i] = &g_71;
            (*g_212) = &g_70;
            for (l_1118 = 0; (l_1118 < (-26)); l_1118--)
            {
                for (g_1047 = 0; (g_1047 < 27); ++g_1047)
                {
                    (*g_212) = &g_740;
                }
            }
            for (g_740 = 0; (g_740 <= 3); g_740 += 1)
            {
                int *l_1270 = &g_330;
                for (l_1083 = 0; (l_1083 <= 3); l_1083 += 1)
                {
                    int i, j, k;
                    (*g_212) = (void*)0;
                    (*l_1060) = ((void*)0 != &l_1110[4][0][0]);
                    (*g_1133) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((l_1073[(l_1083 + 2)][(l_1083 + 2)][l_1083] > (l_1269 == l_1270)) ^ (l_1073[(g_740 + 5)][(l_1083 + 1)][g_740] <= g_346[2])) ^ l_1073[(g_740 + 5)][(l_1083 + 1)][g_740]), ((void*)0 == &g_762))), (safe_lshift_func_int8_t_s_u(l_1273, g_70)))), g_7));
                }
                for (l_1083 = 0; (l_1083 <= 3); l_1083 += 1)
                {
                    unsigned l_1285[10] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
                    int *l_1287 = (void*)0;
                    int i;
                    for (g_1092 = 0; (g_1092 <= 0); g_1092 += 1)
                    {
                        int i, j, k;
                        (*g_143) = 0x4464D784L;
                        if (l_1073[(g_740 + 4)][(l_1083 + 1)][l_1083])
                            break;
                        (*l_1270) = (safe_sub_func_int16_t_s_s(((void*)0 != &g_212), ((l_1073[(g_1092 + 9)][g_1092][g_1092] <= (safe_add_func_uint16_t_u_u(g_1233[0][3][3], (((safe_lshift_func_uint16_t_u_u((g_675 | g_1047), l_1289)) ^ g_50[1]) <= g_72)))) > g_346[1])));
                        (*l_1269) = l_1285[8];
                    }
                }
                if (l_1290)
                {
                    (*g_212) = (void*)0;
                    for (g_1092 = 0; (g_1092 <= 2); g_1092 += 1)
                    {
                        int i, j, k;
                        (*g_236) = l_1073[g_740][g_740][g_1092];
                        g_183[g_1092][(g_1092 + 1)] = &g_72;
                        (*g_212) = l_1270;
                        return l_1073[g_1092][g_740][g_740];
                    }
                }
                else
                {
                    unsigned l_1291 = 18446744073709551609UL;
                    int *l_1308 = &g_740;
                    int ***l_1314 = &g_212;
                    if ((*g_1133))
                    {
                        int l_1303 = 0xEF284399L;
                        l_1303 = 1L;
                        (*l_1269) = ((safe_sub_func_int32_t_s_s(l_1291, g_346[3])) && 0x9032DEC6L);
                        if ((*l_1270))
                            continue;
                    }
                    else
                    {
                        int *l_1309[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1309[i] = &g_71;
                        l_1270 = l_1307;
                        (*g_212) = l_1270;
                        (*g_1133) = (safe_unary_minus_func_int32_t_s(l_1313));
                        (*g_212) = &g_740;
                    }
                    (*l_1314) = &g_762;
                    (*g_236) = 1L;
                    if (l_1315)
                        break;
                }
                return g_675;
            }
            (*l_1258) = ((safe_lshift_func_uint16_t_u_s((&l_1258 != (void*)0), 5)) >= g_689[2][5][3]);
        }
    }
    return g_689[2][0][2];
}







static int func_2(int p_3, short p_4)
{
    int *l_6[7] = {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7};
    int *l_715 = &g_7;
    unsigned long long l_932 = 18446744073709551613UL;
    int *l_946 = (void*)0;
    long long l_953 = 1L;
    int i;
    l_6[3] = l_6[1];
    for (g_7 = 6; (g_7 >= 2); g_7 -= 1)
    {
        int *l_234 = &g_7;
        int l_923 = 4L;
        int *l_940 = &g_330;
        for (p_4 = 6; (p_4 >= 0); p_4 -= 1)
        {
            int i;
            for (p_3 = 0; (p_3 <= 6); p_3 += 1)
            {
                unsigned l_23 = 18446744073709551606UL;
                int i;
            }
            l_6[g_7] = &p_3;
        }
        (*g_143) = p_3;
        (*g_212) = l_6[1];
    }
    return p_4;
}







static int func_8(unsigned long long p_9, int p_10, int * p_11, int p_12, unsigned char p_13)
{
    int *l_716 = &g_50[1];
    char l_722 = 0xAEL;
    unsigned char l_742[1];
    int *l_794 = &g_50[1];
    short l_805 = (-6L);
    unsigned char l_864[7][10] = {{0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}, {0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}, {0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}, {0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}, {0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}, {0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}, {0x96L, 0x70L, 1UL, 0x15L, 0xF7L, 0xCAL, 4UL, 1UL, 0x4FL, 0x09L}};
    unsigned char l_865 = 7UL;
    int *l_908 = &g_70;
    int l_910[8][6][5] = {{{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}, {{0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}, {0xA675D26CL, 0x3743EE76L, 0x62C8F989L, 0xBBBD9938L, 0L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_742[i] = 255UL;
    (*g_212) = l_716;
    if ((*p_11))
    {
        int l_727[5][2][2];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_727[i][j][k] = 7L;
            }
        }
        for (g_71 = 0; (g_71 >= (-5)); g_71--)
        {
            long long l_737 = 0xCECEF7776368CF81LL;
            unsigned long long l_739 = 1UL;
            int *l_741 = &g_71;
            int ***l_758 = &g_212;
            for (p_9 = 0; (p_9 <= 3); p_9 += 1)
            {
                int *l_728 = &g_330;
                (*g_212) = (*g_212);
                for (p_13 = 0; (p_13 <= 3); p_13 += 1)
                {
                    int *l_719 = &g_71;
                    unsigned long long l_738 = 0UL;
                    if ((*l_716))
                    {
                        (*g_212) = &p_10;
                    }
                    else
                    {
                        if ((*g_236))
                            break;
                        (*g_212) = &p_10;
                        (*g_212) = func_36((p_12 || (-3L)), (*g_212), ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u((l_737 || (8UL && p_9)), p_10)) || l_738) | l_739), g_330)) && 6L), (*l_716))) == (*l_719)), p_12)) > p_10), g_346[1], (*g_236));
                        l_727[0][0][1] = (((0x7B4A10A23038FE28LL == ((*l_728) || g_740)) > p_9) <= (((p_9 > 0xD55C85C6730D8A3DLL) || p_13) > g_71));
                    }
                    (*g_212) = l_741;
                    if (l_742[0])
                        continue;
                }
                for (g_72 = 0; (g_72 <= 3); g_72 += 1)
                {
                    char l_747 = 0x4DL;
                    for (g_492 = 0; (g_492 <= 3); g_492 += 1)
                    {
                        int l_748 = (-1L);
                        (*l_728) = ((safe_add_func_uint8_t_u_u(((*l_728) >= 0L), p_9)) > (safe_add_func_uint16_t_u_u(l_747, l_748)));
                        p_11 = func_36(p_12, &p_10, p_10, (&g_212 != &g_212), l_748);
                        if (l_748)
                            continue;
                        (*g_212) = (*g_212);
                    }
                    if (func_42(&l_727[1][0][0], p_12, &p_10))
                    {
                        int l_749 = 0x03CB5BBCL;
                        return l_749;
                    }
                    else
                    {
                        if ((*l_741))
                            break;
                        (*g_212) = (*g_212);
                    }
                    if (l_747)
                        break;
                }
            }
            (*g_69) = (safe_rshift_func_int8_t_s_u((((((void*)0 != &l_727[3][0][1]) && ((void*)0 != &p_11)) ^ (safe_sub_func_uint8_t_u_u((*l_716), (l_727[4][1][0] & (((((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((void*)0 != l_758) != g_7), p_9)), p_13)) | 1L) & 65535UL) > g_346[1]) ^ p_9))))) == 0x060DAAE4L), l_727[1][0][0]));
            (*l_716) = (*g_236);
        }
        (*g_212) = &p_10;
        if ((*l_716))
        {
            int *l_759 = &g_50[1];
            (*g_69) = func_19(((*p_11) || p_10), g_346[0], l_759);
            for (p_12 = 0; (p_12 <= (-3)); --p_12)
            {
                int *l_763 = &l_727[1][0][0];
                p_11 = &l_727[3][0][1];
                if ((*p_11))
                {
                    (*g_236) = 0x8A31AFA6L;
                }
                else
                {
                    (*g_212) = &p_10;
                    for (g_70 = 0; g_70 < 5; g_70 += 1)
                    {
                        for (p_13 = 0; p_13 < 2; p_13 += 1)
                        {
                            for (g_72 = 0; g_72 < 2; g_72 += 1)
                            {
                                l_727[g_70][p_13][g_72] = 9L;
                            }
                        }
                    }
                }
                (*g_212) = &p_10;
                (*g_212) = (*g_212);
            }
            for (g_71 = (-4); (g_71 == 22); g_71 = safe_add_func_uint64_t_u_u(g_71, 9))
            {
                int **l_781 = &g_236;
                for (g_72 = 0; (g_72 > (-2)); g_72--)
                {
                    unsigned l_770 = 0x6FE8FF53L;
                    for (p_10 = 16; (p_10 <= (-25)); --p_10)
                    {
                        unsigned l_775 = 0x02364BDFL;
                        int *l_778 = &g_72;
                        (*l_716) = func_19(p_10, func_14(l_770, (p_12 || ((safe_sub_func_uint64_t_u_u((g_740 > g_689[4][6][0]), p_10)) == 0x0052AD50BDFCC0DELL)), (safe_lshift_func_uint8_t_u_u(l_775, 6)), (safe_add_func_uint8_t_u_u(((+g_346[1]) <= p_12), 255UL))), l_778);
                        (*g_212) = (void*)0;
                    }
                    (*l_781) = func_36((safe_add_func_int8_t_s_s((l_781 != &g_183[2][1]), (p_9 | 0x38L))), l_716, ((safe_rshift_func_int16_t_s_s(0x12A7L, (((&p_11 == &p_11) ^ ((safe_add_func_int32_t_s_s(func_14(((0xB67FL ^ g_675) != (*p_11)), p_13, p_13, p_9), g_740)) | 0x8B5E7673437818DDLL)) && p_13))) && (**l_781)), p_13, p_12);
                    l_727[0][0][1] = (*p_11);
                    (*l_716) = ((void*)0 != &g_183[2][1]);
                }
            }
        }
        else
        {
            (*g_69) = (safe_sub_func_uint64_t_u_u(p_13, ((safe_rshift_func_uint16_t_u_s(g_675, 11)) == (func_14((g_740 <= ((void*)0 != &l_716)), g_492, g_346[2], p_10) ^ 0xBFL))));
            l_727[1][1][0] = ((0xA6E3A3F6L | 1L) <= 0UL);
        }
    }
    else
    {
        int *l_795 = &g_70;
        int ***l_811 = &g_212;
        int **l_824[4][10] = {{&l_795, &g_183[0][2], &l_716, &g_69, &g_143, &g_143, &g_69, &g_183[2][1], &g_183[1][1], (void*)0}, {&l_795, &g_183[0][2], &l_716, &g_69, &g_143, &g_143, &g_69, &g_183[2][1], &g_183[1][1], (void*)0}, {&l_795, &g_183[0][2], &l_716, &g_69, &g_143, &g_143, &g_69, &g_183[2][1], &g_183[1][1], (void*)0}, {&l_795, &g_183[0][2], &l_716, &g_69, &g_143, &g_143, &g_69, &g_183[2][1], &g_183[1][1], (void*)0}};
        int i, j;
    }
    if (((safe_mod_func_int8_t_s_s((*l_794), (g_330 || 250UL))) == (((&g_212 == &g_212) <= (safe_mod_func_int16_t_s_s(((p_9 <= (4294967295UL & (((g_50[0] | (&g_183[0][3] != (void*)0)) == 0L) ^ p_13))) && p_9), 0x964EL))) >= 0x7CE03C57L)))
    {
        int *l_872 = &g_7;
        (*g_212) = l_872;
    }
    else
    {
        unsigned l_882[3][2] = {{0x55230EDCL, 0x55230EDCL}, {0x55230EDCL, 0x55230EDCL}, {0x55230EDCL, 0x55230EDCL}};
        int **l_904 = (void*)0;
        int i, j;
        if ((*l_794))
        {
            unsigned l_873 = 0x3944499CL;
            (*g_236) = ((0x03465D71235AF570LL ^ l_873) != (((-1L) != p_13) > ((0x43F8L >= p_13) > l_873)));
        }
        else
        {
            unsigned short l_890 = 0xE154L;
            int *l_896 = (void*)0;
            int *l_913 = &g_740;
            for (l_805 = 0; (l_805 > 10); ++l_805)
            {
                for (p_10 = (-29); (p_10 <= 23); p_10++)
                {
                    return p_13;
                }
            }
            for (g_675 = 0; (g_675 <= 1); g_675 += 1)
            {
                int i;
                g_50[g_675] = (-1L);
                (*g_236) = (safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((*l_794), l_882[2][0])), 4));
                (*g_69) = ((((0x2B9AL & (p_9 | 0xAB59L)) ^ (p_10 && (g_346[1] || (safe_unary_minus_func_int64_t_s(0x6B48D3A7AD510D56LL))))) > 0xA8D4L) | (safe_rshift_func_uint16_t_u_u((p_12 != (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0x5FC8F15778E03790LL != g_346[3]), g_50[g_675])), 65527UL))), 7)));
                (*g_236) = l_890;
                for (l_890 = 0; (l_890 <= 2); l_890 += 1)
                {
                    int *l_893 = (void*)0;
                    int l_903 = 0xCD747A4BL;
                    char l_905 = 0x08L;
                    if ((safe_lshift_func_uint8_t_u_u(0x97L, 3)))
                    {
                        int i, j;
                        (*g_212) = (*g_212);
                        p_10 = (g_689[7][2][1] ^ (p_12 | g_72));
                        (*l_716) = (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((0L || (safe_lshift_func_int8_t_s_u((p_13 ^ l_903), ((l_904 != &p_11) > g_689[1][5][0])))), (p_13 || p_13))) == p_12), g_50[g_675]));
                    }
                    else
                    {
                        int *l_909 = &g_7;
                        (*l_716) = (l_905 < ((*l_909) == g_50[g_675]));
                        if (p_12)
                            break;
                        (*l_908) = (*g_236);
                        (*g_236) = (l_910[2][1][4] >= (*g_143));
                    }
                    for (p_13 = 0; (p_13 <= 5); p_13 += 1)
                    {
                        (*g_212) = (*g_212);
                    }
                    for (g_72 = 5; (g_72 <= (-26)); g_72--)
                    {
                        int *l_920 = &g_50[1];
                        (*g_236) = ((p_10 >= (+((void*)0 != l_913))) & ((*l_913) <= (safe_sub_func_uint32_t_u_u(((p_12 > p_12) || ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((l_920 == &l_903), g_740)), 2UL)) > 0x7EE339DAL) != g_7) && p_12)), 0L))));
                        (*g_236) = (-9L);
                        (*g_69) = (g_70 & ((safe_lshift_func_int8_t_s_u(g_50[1], g_740)) != g_689[1][5][1]));
                    }
                }
            }
            p_11 = l_716;
        }
    }
    (*g_69) = (*l_794);
    return (*l_794);
}







static int func_14(unsigned long long p_15, long long p_16, short p_17, unsigned long long p_18)
{
    long long l_694 = 0L;
    int *l_695 = &g_50[1];
    long long l_712[4] = {0xC69FE07C235C76E9LL, 1L, 0xC69FE07C235C76E9LL, 1L};
    int i;
    (*g_212) = func_36(((safe_mod_func_uint16_t_u_u(g_689[1][5][1], ((safe_rshift_func_int16_t_s_s(l_694, 0)) & (g_346[2] | g_70)))) ^ (g_346[1] < l_694)), l_695, g_492, (*l_695), p_17);
    if ((&l_695 == (void*)0))
    {
        for (g_330 = (-5); (g_330 >= 4); ++g_330)
        {
            (*g_212) = (*g_212);
            (*g_212) = (*g_212);
        }
        (*g_69) = p_16;
    }
    else
    {
        (*g_212) = (void*)0;
    }
    for (p_18 = 0; (p_18 > 5); p_18++)
    {
        int l_702 = 0L;
        int ***l_705 = (void*)0;
        (*g_236) = (((safe_add_func_uint16_t_u_u((l_702 | func_19((safe_lshift_func_uint8_t_u_u(p_16, (p_16 <= ((((void*)0 == l_705) | p_17) > ((((((safe_add_func_int32_t_s_s((p_16 > 1UL), (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_15, l_712[1])), p_17)))) != (*l_695)) & (-1L)) ^ g_689[1][5][1]) ^ 0xE2L) >= 65535UL))))), p_18, l_695)), 0x7F3DL)) <= 1L) && p_17);
    }
    (*g_236) = (safe_add_func_int8_t_s_s((*l_695), p_15));
    return (*g_69);
}







static unsigned long long func_19(unsigned short p_20, unsigned p_21, int * p_22)
{
    char l_572 = 5L;
    int *l_573 = &g_50[1];
    int ***l_611 = &g_212;
    unsigned char l_637 = 255UL;
    (*g_69) = 0xA01E512FL;
    return (*l_573);
}







static int * func_24(int * p_25, short p_26, int * p_27)
{
    unsigned char l_235 = 0x49L;
    int *l_239[8] = {&g_50[1], (void*)0, &g_50[1], (void*)0, &g_50[1], (void*)0, &g_50[1], (void*)0};
    int l_240[1][9][2] = {{{0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}, {0x30C1CFC9L, 1L}}};
    int l_291 = 0x240B66F2L;
    unsigned long long l_309[1][1];
    short l_326 = 0L;
    int *l_369[7][8] = {{&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}, {&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}, {&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}, {&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}, {&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}, {&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}, {&l_240[0][0][1], (void*)0, (void*)0, (void*)0, &l_240[0][0][1], &g_330, &g_70, (void*)0}};
    short l_392 = (-5L);
    unsigned long long l_393 = 18446744073709551608UL;
    int l_481 = 1L;
    unsigned l_496 = 0xAED65EE5L;
    char l_509[9] = {4L, (-1L), 4L, (-1L), 4L, (-1L), 4L, (-1L), 4L};
    char l_524[2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_309[i][j] = 9UL;
    }
    for (i = 0; i < 2; i++)
        l_524[i] = (-9L);
    if ((((l_235 | 1UL) != (((p_26 && (l_235 <= ((-9L) & func_42(g_236, (l_235 > g_72), &l_240[0][3][0])))) & g_72) == g_70)) ^ p_26))
    {
        char l_241[9];
        int *l_242 = &g_50[1];
        int l_243 = 0xA609B372L;
        int ***l_244 = (void*)0;
        int l_259 = (-1L);
        int *l_274 = &l_240[0][3][0];
        int *l_308[2][9][2] = {{{&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}}, {{&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}, {&g_70, &g_72}}};
        unsigned long long l_320 = 0UL;
        char l_334 = 0x11L;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_241[i] = 0x7BL;
        (*g_212) = func_36(l_241[4], p_25, g_72, (*l_242), (*l_242));
        for (g_72 = (-7); (g_72 > 23); g_72 = safe_add_func_int8_t_s_s(g_72, 6))
        {
            char l_250 = (-1L);
            int *l_255 = (void*)0;
            int *l_256[2];
            int i;
            for (i = 0; i < 2; i++)
                l_256[i] = &g_71;
        }
        (*g_212) = (void*)0;
        for (g_71 = 0; (g_71 >= 10); g_71++)
        {
            int ***l_268 = &g_212;
            int *l_273 = (void*)0;
            long long l_325 = (-4L);
            for (p_26 = 0; (p_26 <= 0); p_26 += 1)
            {
                int **l_270 = &g_69;
                int i;
                if (g_50[p_26])
                    break;
                for (l_235 = 0; (l_235 <= 0); l_235 += 1)
                {
                    int ***l_269 = (void*)0;
                    int i, j, k;
                    l_240[l_235][(l_235 + 6)][l_235] = (safe_mod_func_uint8_t_u_u((g_50[1] > (0xCF51B75F4EF1C2ACLL > (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((l_268 == l_269), (((0xB548L <= (p_26 != ((l_270 != &g_236) & ((&g_143 != &p_27) == (-4L))))) || p_26) <= (**l_270)))) >= (*l_242)), 0xCF5FL)) && p_26) <= g_70))), p_26));
                }
            }
        }
    }
    else
    {
        int *l_355 = &g_50[1];
        int *l_445 = &g_330;
        int l_455 = 7L;
        int ***l_523[10] = {(void*)0, (void*)0, &g_212, (void*)0, (void*)0, &g_212, (void*)0, (void*)0, &g_212, (void*)0};
        char l_561 = 1L;
        int **l_569 = &l_369[1][7];
        unsigned short l_571 = 0UL;
        int i;
    }
    return (*g_212);
}







static int * func_28(int * p_29)
{
    unsigned l_75 = 0x21E6DB75L;
    int *l_79 = &g_50[1];
    unsigned short l_142 = 0xAE72L;
    int *l_148 = &g_70;
    int **l_219 = (void*)0;
    char l_231 = 0x26L;
    for (g_70 = 1; (g_70 >= 0); g_70 -= 1)
    {
        int *l_74 = &g_50[1];
        int l_80 = 0xE9ABA4A7L;
        int **l_124[2][9][5] = {{{&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}}, {{&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}, {&g_69, &g_69, (void*)0, &l_79, &l_74}}};
        int ***l_123 = &l_124[0][2][4];
        int *l_144 = (void*)0;
        int *l_145 = &g_71;
        int i, j, k;
        for (g_71 = 0; (g_71 <= 1); g_71 += 1)
        {
            unsigned l_78[8] = {0xC15C487EL, 18446744073709551615UL, 0xC15C487EL, 18446744073709551615UL, 0xC15C487EL, 18446744073709551615UL, 0xC15C487EL, 18446744073709551615UL};
            int *l_132 = &g_72;
            int i;
        }
        if (g_50[g_70])
        {
            char l_140 = 0x08L;
            int *l_146 = &g_7;
            (*g_69) = (g_71 < 0x5EL);
            if (func_42(&g_50[1], (safe_rshift_func_uint8_t_u_s(((void*)0 == &g_50[1]), 6)), p_29))
            {
                int *l_135[7] = {(void*)0, (void*)0, &g_72, (void*)0, (void*)0, &g_72, (void*)0};
                unsigned long long l_141[7][8][4] = {{{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}, {{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}, {{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}, {{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}, {{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}, {{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}, {{0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}, {0x012F00CAAA615127LL, 18446744073709551612UL, 0x7FDEBD733D806202LL, 18446744073709551615UL}}};
                int i, j, k;
                l_135[6] = &g_7;
                (*g_143) = ((((func_42(&g_50[0], ((safe_sub_func_int16_t_s_s(0x621DL, ((safe_rshift_func_int16_t_s_s((((g_7 || (l_140 && g_70)) || l_141[0][4][1]) == (l_142 >= l_140)), 9)) ^ (!((g_143 != p_29) & 4294967287UL))))) > (*g_143)), p_29) ^ 0xD7L) | g_72) <= 0x5C6DL) < l_142);
                (*g_69) = (&g_50[1] == &g_71);
            }
            else
            {
                return &g_72;
            }
            for (l_140 = 0; (l_140 <= 1); l_140 += 1)
            {
                short l_147 = (-1L);
                l_146 = l_146;
                return &g_70;
            }
            p_29 = func_30(p_29, &g_70, func_30(&g_70, l_148, &g_72, g_72, &g_50[1]), g_7, l_79);
        }
        else
        {
            char l_151 = (-6L);
            (*g_69) = ((safe_lshift_func_uint8_t_u_u(250UL, 7)) == g_50[0]);
            for (g_72 = 0; (g_72 >= (-1)); --g_72)
            {
                (*g_69) = (l_151 || (*l_148));
                return p_29;
            }
        }
    }
    if ((safe_add_func_int32_t_s_s((func_42(l_148, (*l_148), func_36(g_7, p_29, (~6UL), (*l_148), (*p_29))) < 1L), g_72)))
    {
        short l_158[7] = {0x1141L, 0x1141L, 0xB32BL, 0x1141L, 0x1141L, 0xB32BL, 0x1141L};
        int *l_161 = &g_50[1];
        int **l_194 = &g_143;
        int i;
        for (g_71 = 0; (g_71 <= (-28)); g_71--)
        {
            int **l_159 = &l_148;
        }
        for (g_71 = 4; (g_71 >= 0); g_71 -= 1)
        {
            unsigned l_179 = 0x1C497E37L;
            int *l_184 = &g_70;
            if ((*p_29))
            {
                int *l_182 = &g_70;
                (*g_143) = (safe_mod_func_uint8_t_u_u(l_179, (safe_rshift_func_int16_t_s_s(((void*)0 != l_182), l_179))));
            }
            else
            {
                unsigned l_185 = 18446744073709551608UL;
                int *l_186 = &g_50[1];
                (*l_161) = (*l_161);
                if ((*g_69))
                    continue;
                l_186 = func_30(g_183[2][1], p_29, l_184, (l_185 != (18446744073709551615UL != 0L)), &g_50[1]);
            }
            return p_29;
        }
        for (g_71 = (-14); (g_71 == (-22)); g_71 = safe_sub_func_uint32_t_u_u(g_71, 2))
        {
            return &g_71;
        }
        for (g_72 = (-16); (g_72 >= 11); g_72++)
        {
            int **l_191 = (void*)0;
            int **l_192 = (void*)0;
            int **l_193 = &l_79;
            g_143 = p_29;
            (*l_193) = &g_50[0];
        }
    }
    else
    {
        return (*g_212);
    }
    return (*g_212);
}







static int * func_30(int * p_31, int * p_32, int * p_33, unsigned long long p_34, int * p_35)
{
    unsigned l_53 = 4294967287UL;
    int *l_54[7][6] = {{&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}, {&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}, {&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}, {&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}, {&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}, {&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}, {&g_50[1], &g_50[1], &g_50[1], &g_7, &g_50[1], &g_50[1]}};
    unsigned long long l_67[7] = {0x1F9F6D65DBDCDB7ALL, 0x1F9F6D65DBDCDB7ALL, 0x70D28CDD50170A2CLL, 0x1F9F6D65DBDCDB7ALL, 0x1F9F6D65DBDCDB7ALL, 0x70D28CDD50170A2CLL, 0x1F9F6D65DBDCDB7ALL};
    int **l_68[7];
    int i, j;
    for (i = 0; i < 7; i++)
        l_68[i] = &l_54[4][2];
    (*p_33) = (p_34 < 0x78L);
    g_69 = func_36(g_7, p_31, (safe_rshift_func_uint8_t_u_u(g_50[1], (safe_sub_func_int64_t_s_s(((*p_35) | 1UL), p_34)))), l_67[5], (*p_35));
    return p_35;
}







static int * func_36(int p_37, int * p_38, unsigned char p_39, unsigned short p_40, int p_41)
{
    long long l_46 = (-1L);
    int *l_49 = &g_50[1];
    (*l_49) = func_42(&p_41, l_46, &g_7);
    return &g_50[1];
}







static int func_42(int * p_43, unsigned char p_44, int * p_45)
{
    int *l_48[6][2][10] = {{{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}};
    int **l_47 = &l_48[4][1][3];
    int i, j, k;
    (*l_47) = (void*)0;
    (*p_43) = (*p_45);
    return g_7;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_346[i], "g_346[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_689[i][j][k], "g_689[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_1029, "g_1029", print_hash_value);
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1233[i][j][k], "g_1233[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
