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



static int g_2 = 0xA61928C1L;
static unsigned g_20 = 0x06310FECL;
static unsigned g_26 = 0x6F93BD5DL;
static unsigned *g_25 = &g_26;
static short g_30 = 0x3A38L;
static unsigned char g_56 = 0x97L;
static unsigned char g_57[1] = {0xB6L};
static int *g_89[4] = {&g_2, &g_2, &g_2, &g_2};
static int **g_88 = &g_89[3];
static int g_94 = 0xA48ADB29L;
static char g_108 = 4L;
static unsigned g_123 = 1UL;
static unsigned g_138 = 0x10F58447L;
static unsigned char g_139[5][5][2] = {{{5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}}, {{5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}}, {{5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}}, {{5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}}, {{5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}, {5UL, 255UL}}};
static int **g_154 = &g_89[3];
static unsigned short g_157[9][9][3] = {{{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}, {{3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}, {3UL, 0x3F81L, 65530UL}}};
static unsigned g_241 = 0xA71FD06FL;
static char g_296 = 0x75L;
static unsigned char g_308 = 0xC8L;
static unsigned short g_331 = 0UL;
static short g_339 = 0x292EL;
static int ***g_391 = (void*)0;
static int ****g_390 = &g_391;
static int ***** const g_389[6][3] = {{&g_390, (void*)0, &g_390}, {&g_390, (void*)0, &g_390}, {&g_390, (void*)0, &g_390}, {&g_390, (void*)0, &g_390}, {&g_390, (void*)0, &g_390}, {&g_390, (void*)0, &g_390}};
static unsigned char *g_491 = &g_308;
static unsigned char **g_490 = &g_491;
static char g_536[1][5] = {{0L, 0L, 0L, 0L, 0L}};
static int g_565 = 0x62CFD0A3L;
static int g_586 = 1L;
static int g_723 = (-8L);
static char g_781 = (-2L);
static unsigned * const *g_786 = (void*)0;
static unsigned g_789 = 0x92E333B3L;
static unsigned g_790 = 4UL;
static unsigned g_791 = 0x40168C48L;
static unsigned g_792 = 0UL;
static unsigned * const g_788[10] = {&g_792, &g_791, (void*)0, (void*)0, &g_791, &g_792, &g_791, (void*)0, (void*)0, &g_791};
static unsigned * const *g_787 = &g_788[0];
static const int g_839 = 0xBA11D63BL;
static const int g_841[9] = {0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L, 0x1938F0C8L};
static int *** const *g_947 = &g_391;
static int *** const **g_946[2] = {&g_947, &g_947};
static int *****g_959[8][8][4] = {{{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}, {{(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}, {(void*)0, &g_390, &g_390, (void*)0}}};
static int ******g_958[5][3] = {{&g_959[6][4][3], &g_959[6][7][1], &g_959[6][7][1]}, {&g_959[6][4][3], &g_959[6][7][1], &g_959[6][7][1]}, {&g_959[6][4][3], &g_959[6][7][1], &g_959[6][7][1]}, {&g_959[6][4][3], &g_959[6][7][1], &g_959[6][7][1]}, {&g_959[6][4][3], &g_959[6][7][1], &g_959[6][7][1]}};
static const unsigned *g_994 = &g_26;
static const unsigned **g_993 = &g_994;
static int ** const *g_1059 = &g_88;
static int ** const **g_1058[7] = {(void*)0, &g_1059, (void*)0, &g_1059, (void*)0, &g_1059, (void*)0};
static int ** const ***g_1057 = &g_1058[0];
static int ** const ****g_1056 = &g_1057;
static int g_1102 = 0xD3903B87L;
static short *g_1109 = (void*)0;
static short *g_1110[2] = {&g_30, &g_30};
static unsigned g_1111 = 0x999BB03EL;
static unsigned short *g_1117[6][5][8] = {{{&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}}, {{&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}}, {{&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}}, {{&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}}, {{&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}}, {{&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}, {&g_157[0][0][2], &g_331, &g_157[8][5][1], &g_157[8][5][1], &g_157[0][0][2], &g_157[3][7][0], &g_157[0][0][2], &g_157[8][5][1]}}};
static unsigned short **g_1116 = &g_1117[3][4][5];
static int g_1122 = (-5L);
static char *g_1139 = &g_296;
static unsigned short g_1148[6][2] = {{65531UL, 65533UL}, {65531UL, 65533UL}, {65531UL, 65533UL}, {65531UL, 65533UL}, {65531UL, 65533UL}, {65531UL, 65533UL}};
static unsigned short g_1150 = 65526UL;
static unsigned *g_1173 = &g_789;
static unsigned **g_1172 = &g_1173;
static unsigned ***g_1171 = &g_1172;
static unsigned short **g_1280 = &g_1117[2][2][4];
static int ** const ** const * const g_1287 = (void*)0;
static int ** const ** const * const *g_1286 = &g_1287;
static char **g_1312 = &g_1139;
static const unsigned *g_1339 = (void*)0;
static const unsigned **g_1338 = &g_1339;
static const unsigned ***g_1337 = &g_1338;



static unsigned func_1(void);
static int * func_5(int p_6, short p_7, unsigned p_8, int * p_9, short p_10);
static unsigned char func_12(const unsigned char p_13, unsigned p_14, unsigned char p_15, short p_16, int p_17);
static unsigned char func_21(short p_22, const int p_23);
static int * const func_32(int p_33, unsigned p_34);
static int func_51(short p_52, int p_53, const int p_54, int p_55);
static unsigned char func_62(int ** p_63, unsigned * p_64, int ** p_65);
static int ** func_66(unsigned * p_67, int p_68, int p_69, const short * const p_70, const int p_71);
static int func_76(const unsigned short p_77, int p_78, unsigned p_79, char p_80);
static int func_81(const unsigned p_82, int ** p_83);
static unsigned func_1(void)
{
    unsigned *l_27 = &g_26;
    int l_28 = 0xE3D3B0CFL;
    const int l_31[3] = {0xDEC995F7L, 0xDEC995F7L, 0xDEC995F7L};
    short *l_1080 = &g_339;
    unsigned short *l_1089 = &g_331;
    int l_1090 = 0x7C0456AEL;
    unsigned short l_1134 = 0xA607L;
    int **l_1161 = &g_89[2];
    const char l_1183 = (-1L);
    int l_1190 = 0xF2739003L;
    const int l_1195[1] = {0x078C1CE2L};
    char l_1197 = 0x50L;
    int ** const *l_1221 = &g_88;
    unsigned l_1275 = 18446744073709551615UL;
    int *l_1289 = &l_1090;
    unsigned l_1290 = 0UL;
    char l_1291[8][9][3] = {{{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}, {{0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}, {0x52L, (-4L), 0x12L}}};
    int l_1295 = (-4L);
    int l_1304[10][9][2] = {{{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}, {{0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}, {0xF78E9DA4L, 0x00D45C30L}}};
    int l_1328 = (-1L);
    short l_1358[4][7] = {{(-8L), 8L, (-8L), (-1L), (-1L), 8L, (-1L)}, {(-8L), 8L, (-8L), (-1L), (-1L), 8L, (-1L)}, {(-8L), 8L, (-8L), (-1L), (-1L), 8L, (-1L)}, {(-8L), 8L, (-8L), (-1L), (-1L), 8L, (-1L)}};
    unsigned short l_1362 = 65535UL;
    int i, j, k;
    for (g_2 = 0; (g_2 >= 8); g_2++)
    {
        unsigned short l_18 = 1UL;
        unsigned *l_19 = &g_20;
        int l_24 = (-1L);
        short *l_29[3][3] = {{&g_30, &g_30, &g_30}, {&g_30, &g_30, &g_30}, {&g_30, &g_30, &g_30}};
        int *l_1016[4][9] = {{&g_2, (void*)0, &g_586, (void*)0, (void*)0, &g_2, (void*)0, (void*)0, &g_586}, {&g_2, (void*)0, &g_586, (void*)0, (void*)0, &g_2, (void*)0, (void*)0, &g_586}, {&g_2, (void*)0, &g_586, (void*)0, (void*)0, &g_2, (void*)0, (void*)0, &g_586}, {&g_2, (void*)0, &g_586, (void*)0, (void*)0, &g_2, (void*)0, (void*)0, &g_586}};
        int i, j;
    }
    l_1090 = ((g_789 & l_28) , (~(((*l_1080) = 0x322CL) == ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((void*)0 != &g_25), 4)), func_21(((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((*l_1089) = g_139[2][2][0]) , (g_791 | (-1L))), g_241)), l_31[1])) , l_28), l_31[2]))) || 0x7B0CL))));
    for (g_791 = 0; (g_791 <= 2); g_791 += 1)
    {
        unsigned **l_1091[1][10] = {{(void*)0, &l_27, (void*)0, &l_27, (void*)0, &l_27, (void*)0, &l_27, (void*)0, &l_27}};
        unsigned ***l_1092 = &l_1091[0][1];
        int l_1094 = 0xFDDE03E1L;
        int l_1095 = 0x220D2079L;
        unsigned char l_1108[5][4][2] = {{{255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}}, {{255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}}, {{255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}}, {{255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}}, {{255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}, {255UL, 0xE9L}}};
        unsigned l_1112 = 18446744073709551615UL;
        int l_1119[2][9][6] = {{{4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}}, {{4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}, {4L, (-5L), 0x030C6731L, 0xE7B562B8L, 0x20040693L, (-6L)}}};
        char l_1136 = 0L;
        short *l_1145 = &g_339;
        const unsigned l_1147 = 0xB5399A1EL;
        int **l_1151 = (void*)0;
        unsigned l_1152[4];
        unsigned l_1175 = 1UL;
        int l_1176[9][4][1] = {{{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}}};
        unsigned short l_1181[4];
        unsigned char **l_1213[10];
        const unsigned l_1241 = 4UL;
        short l_1303[4] = {(-1L), 0x1748L, (-1L), 0x1748L};
        unsigned l_1357 = 0x9F99100DL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1152[i] = 0x85F032ACL;
        for (i = 0; i < 4; i++)
            l_1181[i] = 65535UL;
        for (i = 0; i < 10; i++)
            l_1213[i] = &g_491;
    }
    return l_1362;
}







static int * func_5(int p_6, short p_7, unsigned p_8, int * p_9, short p_10)
{
    char l_1025[8] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
    unsigned short *l_1026 = (void*)0;
    unsigned short *l_1027 = &g_157[6][2][0];
    unsigned short l_1028 = 0UL;
    int *l_1040 = &g_723;
    int **l_1041 = (void*)0;
    int **l_1042 = &g_89[3];
    int l_1063 = 0x447A5E07L;
    unsigned short **l_1065 = &l_1027;
    int i;
lbl_1047:
    (*l_1042) = func_32(g_57[0], p_10);
    for (p_8 = 0; (p_8 < 29); p_8++)
    {
        for (g_56 = 0; (g_56 <= 38); ++g_56)
        {
            if (p_10)
                goto lbl_1047;
        }
    }
    for (g_723 = 2; (g_723 >= 0); g_723 -= 1)
    {
        unsigned l_1051 = 0x93914713L;
        const int *l_1054 = (void*)0;
        int *l_1055[3][1];
        unsigned short **l_1064 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_1055[i][j] = &g_94;
        }
        for (g_56 = 0; (g_56 <= 2); g_56 += 1)
        {
            short l_1048[1][1][5] = {{{0L, 0x56BCL, 0L, 0x56BCL, 0L}}};
            int **l_1049[3];
            int **l_1050 = &g_89[3];
            unsigned char l_1052[5];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1049[i] = &g_89[1];
            for (i = 0; i < 5; i++)
                l_1052[i] = 1UL;
            (*l_1050) = func_32((l_1048[0][0][0] , g_308), p_7);
            for (g_20 = 0; (g_20 <= 2); g_20 += 1)
            {
                l_1052[3] = l_1051;
            }
        }
        for (g_792 = 0; (g_792 <= 2); g_792 += 1)
        {
            const int *l_1053 = &g_841[5];
            l_1054 = l_1053;
            for (p_7 = 2; (p_7 >= 0); p_7 -= 1)
            {
                return l_1055[1][0];
            }
        }
        for (g_138 = 0; (g_138 <= 2); g_138 += 1)
        {
            int ** const *****l_1060 = &g_1056;
            int ******l_1061 = &g_959[6][7][1];
            int *******l_1062 = &g_958[4][1];
            short l_1077[8] = {1L, 1L, 0x0347L, 1L, 1L, 0x0347L, 1L, 1L};
            int i;
            p_9 = (void*)0;
            l_1063 = (((*l_1060) = g_1056) != ((*l_1062) = l_1061));
            l_1065 = l_1064;
            for (g_56 = 0; (g_56 <= 2); g_56 += 1)
            {
                short l_1066 = 0L;
                int **l_1078 = &l_1055[1][0];
                (*l_1078) = func_32(l_1066, ((safe_lshift_func_int16_t_s_u((g_2 >= ((g_20 || ((safe_add_func_uint16_t_u_u(func_12(l_1066, (safe_mod_func_int8_t_s_s(((p_6 = l_1066) < (g_157[0][0][2] && ((**g_490) >= (safe_div_func_uint8_t_u_u((!((p_7 | ((p_7 < p_7) || l_1066)) > (*g_25))), p_10))))), 2UL)), (**g_490), l_1077[6], g_94), 3L)) && 1UL)) != l_1066)), 3)) , p_8));
                for (g_108 = 2; (g_108 >= 0); g_108 -= 1)
                {
                    for (l_1028 = 0; (l_1028 <= 0); l_1028 += 1)
                    {
                        unsigned short l_1079 = 4UL;
                        if (l_1079)
                            break;
                        if (p_10)
                            continue;
                    }
                    if (p_8)
                        continue;
                }
            }
        }
    }
    return (*l_1042);
}







static unsigned char func_12(const unsigned char p_13, unsigned p_14, unsigned char p_15, short p_16, int p_17)
{
    short l_537 = 0xEC6DL;
    int l_539 = 1L;
    unsigned short l_544 = 0UL;
    unsigned *l_545 = &g_123;
    int l_558 = 0x4303A70FL;
    unsigned char l_629 = 0xA6L;
    unsigned l_633[8] = {0x10C12152L, 0UL, 0x10C12152L, 0UL, 0x10C12152L, 0UL, 0x10C12152L, 0UL};
    int **l_658 = (void*)0;
    unsigned char l_706[10][8][3] = {{{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}, {{0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}, {0x23L, 1UL, 6UL}}};
    unsigned l_779 = 0UL;
    int l_797 = 0xB9D957ECL;
    const int *l_838 = &g_839;
    unsigned l_871[6][3][1] = {{{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}};
    short l_913 = (-1L);
    short l_923 = 0x121AL;
    int *****l_945 = &g_390;
    short l_982 = 4L;
    int *l_1007 = (void*)0;
    unsigned char l_1011 = 250UL;
    int i, j, k;
    if (p_13)
    {
        int **l_540[7][8] = {{&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}, {&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}, {&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}, {&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}, {&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}, {&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}, {&g_89[3], &g_89[2], &g_89[1], &g_89[2], &g_89[3], &g_89[3], &g_89[3], &g_89[2]}};
        int *l_564 = &g_565;
        const unsigned char **l_589 = (void*)0;
        const unsigned char ***l_588 = &l_589;
        unsigned l_591 = 0xA5699BB9L;
        int i, j;
        for (g_339 = 0; (g_339 <= 1); g_339 += 1)
        {
            int *l_538[2];
            unsigned short *l_543[10][4] = {{&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}, {&g_157[0][0][2], &g_157[0][0][2], (void*)0, &g_157[0][0][2]}};
            unsigned char **l_547 = &g_491;
            int *l_559 = &g_2;
            unsigned short l_601 = 0x7123L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_538[i] = (void*)0;
            l_539 = (l_537 = (-1L));
            l_539 = ((p_16 || 0x9DL) , p_17);
            for (p_14 = 0; (p_14 <= 1); p_14 += 1)
            {
                unsigned char ***l_546[1][8] = {{&g_490, &g_490, &g_490, &g_490, &g_490, &g_490, &g_490, &g_490}};
                int l_560 = 0x90D1874FL;
                unsigned l_571[10];
                int i, j;
                for (i = 0; i < 10; i++)
                    l_571[i] = 0xAA91EACDL;
                l_547 = &g_491;
            }
        }
        l_558 = (4294967295UL > (*g_25));
    }
    else
    {
        const short * const l_616 = &g_30;
        unsigned **l_617 = &g_25;
        int l_618 = 0x23BF54EFL;
        l_618 = ((safe_rshift_func_uint8_t_u_u(((*g_491) = (((((((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_51((l_539 = (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(1L, (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((*g_25) >= p_16), p_14)), p_13)))), l_618))), l_618, l_618, p_16), g_56)), l_618)) || l_618) || 255UL) == 3UL) <= g_57[0]) < 0x244C1E1BL) , (*g_491))), l_537)) , p_17);
        if ((l_539 = 0L))
        {
            short l_621[4] = {0x308EL, 0L, 0x308EL, 0L};
            int l_622 = 0x4C2B4BDAL;
            int i;
            l_622 = (l_621[1] = (safe_rshift_func_int16_t_s_s(g_123, (p_16 | (*g_491)))));
        }
        else
        {
            int *l_623 = (void*)0;
            char *l_626 = (void*)0;
            char *l_627 = (void*)0;
            char *l_628[8] = {&g_536[0][3], &g_536[0][3], &g_536[0][0], &g_536[0][3], &g_536[0][3], &g_536[0][0], &g_536[0][3], &g_536[0][3]};
            int l_630 = 0x5979D70DL;
            int *l_632[1][9][6] = {{{&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}, {&l_558, &g_94, &l_558, &g_94, &l_558, &l_558}}};
            int i, j, k;
            (*g_154) = l_623;
            l_618 = (l_618 && (p_15 == ((safe_rshift_func_uint16_t_u_s(p_16, ((l_630 = (l_629 = 3L)) != (safe_unary_minus_func_int16_t_s((-6L)))))) || ((*l_545) = ((g_536[0][3] = p_16) , 0x1EB6BEADL)))));
        }
        l_633[0] = l_618;
    }
    return p_17;
}







static unsigned char func_21(short p_22, const int p_23)
{
    unsigned char l_35 = 4UL;
    int *l_45 = &g_2;
    int **l_44[10] = {&l_45, &l_45, &l_45, &l_45, &l_45, &l_45, &l_45, &l_45, &l_45, &l_45};
    int **l_46[4] = {&l_45, &l_45, &l_45, &l_45};
    int **l_47[8] = {&l_45, &l_45, &l_45, &l_45, &l_45, &l_45, &l_45, &l_45};
    int **l_48 = &l_45;
    unsigned *l_72 = &g_26;
    const short * const l_73 = &g_30;
    char *l_534 = &g_108;
    char l_535 = 0xFBL;
    int i;
    (*l_48) = func_32(l_35, (l_35 > 0x99EA5D84L));
    (*l_48) = ((safe_add_func_uint16_t_u_u((((*l_534) = (((0xB13B1067L ^ func_51(p_22, (g_57[0] = (g_56 = ((p_22 , (~((void*)0 == l_45))) && 8UL))), (safe_lshift_func_uint16_t_u_s((+(safe_mul_func_uint8_t_u_u(func_62((g_2 , func_66(l_72, ((void*)0 != &p_23), p_22, l_73, p_22)), &g_123, &l_45), p_22))), 10)), p_22)) == p_22) != g_138)) == p_23), l_535)) , (*g_154));
    return p_22;
}







static int * const func_32(int p_33, unsigned p_34)
{
    int * const l_43 = (void*)0;
    if (p_34)
    {
        int **l_36 = (void*)0;
        int *l_38 = &g_2;
        int **l_37 = &l_38;
        (*l_37) = &g_2;
    }
    else
    {
        for (p_33 = 26; (p_33 == (-7)); p_33 = safe_sub_func_uint32_t_u_u(p_33, 8))
        {
            for (p_34 = 0; (p_34 >= 5); p_34++)
            {
                return &g_2;
            }
            if (p_33)
                continue;
        }
    }
    return l_43;
}







static int func_51(short p_52, int p_53, const int p_54, int p_55)
{
    const int *l_530 = (void*)0;
    const int **l_529 = &l_530;
    const int ***l_528 = &l_529;
    unsigned char l_531 = 0x99L;
    unsigned short *l_532 = &g_157[0][0][2];
    int *l_533 = &g_94;
    (*l_533) = (p_53 = (0xD3C5L ^ ((*l_532) = (l_528 == ((l_531 < (p_54 != 1L)) , &l_529)))));
    return p_54;
}







static unsigned char func_62(int ** p_63, unsigned * p_64, int ** p_65)
{
    const unsigned char l_250 = 0x71L;
    const char l_257[8][9][2] = {{{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}, {{0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}, {0xACL, 0xFCL}}};
    int *l_260 = &g_2;
    int ** const l_259 = &l_260;
    int ** const *l_258 = &l_259;
    int ***l_271 = &g_88;
    int ****l_270 = &l_271;
    short l_343 = 1L;
    int *l_344 = &g_94;
    unsigned char *l_359 = (void*)0;
    unsigned short l_403 = 1UL;
    int i, j, k;
    if ((safe_mod_func_int8_t_s_s(l_250, (~(safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((l_250 || (0UL == l_257[5][0][1])) != ((l_258 = &p_63) == &l_259)), ((*l_260) , (*g_25)))), (*p_64)))))))
    {
        int *l_261 = (void*)0;
        int *l_262 = &g_94;
        short *l_265 = &g_30;
        int *****l_272 = &l_270;
        unsigned l_284 = 18446744073709551606UL;
        char *l_293 = (void*)0;
        char *l_294 = (void*)0;
        char *l_295 = &g_108;
        (*g_154) = (*g_154);
        (*l_262) = 0L;
        (*l_262) = (((((*l_265) = (g_94 , g_26)) >= ((((***l_258) < (safe_div_func_int16_t_s_s((((*p_64) , (safe_sub_func_uint32_t_u_u((&l_258 != ((*l_272) = l_270)), (safe_sub_func_int8_t_s_s((g_94 && ((((safe_mod_func_int32_t_s_s(((*g_25) , (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((**p_63) , 1UL))), (**g_154)))), 0xFC918A1DL)) >= 2L) , (*l_262)) || (*p_64))), g_138))))) <= 65533UL), 0xA9AFL))) , &g_26) == (void*)0)) , (*l_262)) || (**l_259));
        (*l_262) = (safe_rshift_func_uint8_t_u_u(((l_284 = (safe_mul_func_uint8_t_u_u((*****l_272), g_2))) , (0x7CL >= ((safe_mul_func_int8_t_s_s(g_139[2][3][1], ((*l_295) = func_76(g_26, (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((~(safe_lshift_func_int8_t_s_u((****l_270), 1))), ((*p_64) , ((*p_64) && (*p_64))))), (***l_271))), g_139[1][2][1], g_108)))) && g_296))), 1));
    }
    else
    {
        char l_301 = 0xD4L;
        unsigned char *l_307 = &g_139[0][1][1];
        unsigned short *l_309[2];
        unsigned *l_310 = &g_138;
        int l_311 = 0x55107FC3L;
        int **l_312 = &l_260;
        int i;
        for (i = 0; i < 2; i++)
            l_309[i] = (void*)0;
    }
    (*l_344) = (safe_div_func_int32_t_s_s(l_343, (**l_259)));
    for (g_123 = 10; (g_123 != 45); g_123 = safe_add_func_int32_t_s_s(g_123, 6))
    {
        unsigned char l_356 = 0UL;
        int l_407 = 1L;
        unsigned l_410 = 4294967289UL;
        int **l_426[8] = {&g_89[1], &g_89[1], &l_344, &g_89[1], &g_89[1], &l_344, &g_89[1], &g_89[1]};
        int l_525 = 1L;
        int i;
        (*l_344) = ((-10L) == g_108);
        for (g_94 = 3; (g_94 >= 0); g_94 -= 1)
        {
            unsigned short l_351 = 1UL;
            unsigned char *l_361 = &l_356;
            unsigned char **l_360 = &l_361;
            short *l_362[9] = {&g_339, &g_30, &g_339, &g_30, &g_339, &g_30, &g_339, &g_30, &g_339};
            int l_363 = (-6L);
            unsigned char *l_366 = &g_139[0][0][1];
            int *l_367 = &l_363;
            char *l_423 = (void*)0;
            char *l_424 = &g_296;
            unsigned *l_425 = &g_138;
            int l_526[5][2] = {{(-4L), (-4L)}, {(-4L), (-4L)}, {(-4L), (-4L)}, {(-4L), (-4L)}, {(-4L), (-4L)}};
            unsigned l_527 = 18446744073709551615UL;
            int i, j;
            (*l_367) = l_356;
        }
        return (*g_491);
    }
    return (*l_344);
}







static int ** func_66(unsigned * p_67, int p_68, int p_69, const short * const p_70, const int p_71)
{
    int *l_87 = &g_2;
    int **l_86 = &l_87;
    short *l_90[2];
    int l_91 = 0xA1B6174EL;
    int l_92 = 0L;
    int *l_93 = &g_94;
    unsigned char *l_204 = &g_139[0][0][1];
    int * const *l_243 = &g_89[2];
    int * const **l_242 = &l_243;
    int * const ***l_244 = &l_242;
    unsigned char l_245 = 0xD3L;
    unsigned l_246[8] = {0xEA1ABC11L, 0x1241E13DL, 0xEA1ABC11L, 0x1241E13DL, 0xEA1ABC11L, 0x1241E13DL, 0xEA1ABC11L, 0x1241E13DL};
    int i;
    for (i = 0; i < 2; i++)
        l_90[i] = &g_30;
    return &g_89[3];
}







static int func_76(const unsigned short p_77, int p_78, unsigned p_79, char p_80)
{
    int *l_95 = &g_94;
    short l_106 = 0x9887L;
    char *l_107[4][3];
    int l_115 = 0xCAC19DAAL;
    short *l_120 = &l_106;
    short l_124[9] = {0L, 0L, (-1L), 0L, 0L, (-1L), 0L, 0L, (-1L)};
    int ***l_125 = &g_88;
    int **l_126[9][6] = {{&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}, {&g_89[0], (void*)0, (void*)0, (void*)0, &g_89[3], &g_89[3]}};
    unsigned char l_127 = 6UL;
    unsigned char l_140 = 0xCDL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_107[i][j] = &g_108;
    }
    p_78 = ((((*l_95) = 0xA031552AL) , 0x1E9E5145L) , ((((((g_2 < (safe_mul_func_uint8_t_u_u((g_2 | 255UL), p_78))) , ((g_108 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(func_81((safe_sub_func_uint8_t_u_u(g_94, ((-4L) ^ (255UL > 0x9BL)))), &l_95), l_106)), (*l_95))), (-1L)))) || (*l_95))) == (*g_25)) & 0x7FA172C1L) <= p_79) < 65535UL));
    if (((&l_95 != &l_95) | (safe_sub_func_uint16_t_u_u(0UL, (func_81(((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((*l_95), (l_115 <= (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u(((((*l_125) = ((((*g_25) == (p_80 & (((((((*l_120) = g_30) ^ (safe_lshift_func_uint8_t_u_u((g_123 != l_124[1]), 0))) || (*l_95)) == 0xACL) >= g_2) == g_108))) > p_78) , (void*)0)) != l_126[2][1]) && 0xA6105BDFL), g_123)) && l_127), 0))))), (*l_95))) , g_2), &g_89[3]) , p_77)))))
    {
        const unsigned short l_132 = 0x48D7L;
        int **l_133 = (void*)0;
        int *l_146[2];
        int i;
        for (i = 0; i < 2; i++)
            l_146[i] = &g_94;
        (*l_95) = (safe_add_func_int8_t_s_s((((*g_25) <= ((p_77 , (safe_mul_func_uint8_t_u_u(p_80, (((l_140 = (safe_lshift_func_uint16_t_u_s(((p_78 < (p_79 != (((*g_25) , (g_123 && g_26)) | g_138))) == g_139[0][0][1]), 10))) ^ g_30) < (-1L))))) != 0x8500L)) > 0xC2L), g_139[0][0][1]));
        for (g_30 = 1; (g_30 <= 8); g_30 += 1)
        {
            int **l_153 = (void*)0;
            int i;
            p_78 = 1L;
            if (l_124[g_30])
                break;
            p_78 = ((*l_95) = p_79);
            for (p_80 = 5; (p_80 >= 0); p_80 -= 1)
            {
                int l_147 = 0L;
                int **l_160 = &l_95;
            }
        }
        (*g_154) = (void*)0;
    }
    else
    {
        int l_176[3][6] = {{0xEBDA9155L, 1L, 0xEBDA9155L, 1L, 0xEBDA9155L, 1L}, {0xEBDA9155L, 1L, 0xEBDA9155L, 1L, 0xEBDA9155L, 1L}, {0xEBDA9155L, 1L, 0xEBDA9155L, 1L, 0xEBDA9155L, 1L}};
        int *l_194 = &g_94;
        int i, j;
        (*l_95) = p_79;
        if (p_77)
        {
            unsigned short l_173[8][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
            int i, j;
            l_176[0][3] = ((p_80 , (safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((-6L), g_94)) , ((0x3CFAL <= ((l_173[5][0] != ((safe_sub_func_uint16_t_u_u(g_139[2][2][0], (&g_157[0][0][2] != &g_157[0][0][2]))) && p_78)) > 5L)) , g_123)), 0x46EFL))) <= g_2);
        }
        else
        {
            unsigned char *l_187 = &l_127;
            unsigned l_199[10][9] = {{1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}, {1UL, 4294967289UL, 7UL, 0xFF91A108L, 0xFF91A108L, 7UL, 4294967289UL, 1UL, 1UL}};
            int **l_200 = (void*)0;
            int i, j;
            (*l_95) = p_80;
            (*g_154) = (((*l_187) = ((safe_div_func_int8_t_s_s(0xF2L, p_77)) , (4294967294UL <= (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint8_t_u(((func_81((p_79 , (!0x4868E2EFL)), &g_89[3]) , p_79) || (&p_80 != &g_108)))))), 13)) ^ g_157[3][7][0]), g_138)) && l_176[0][3]), p_80))))) , (void*)0);
            l_194 = func_32((safe_mul_func_int16_t_s_s(((*l_120) = ((safe_div_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((((*g_154) = l_194) == &p_78), (safe_add_func_int32_t_s_s(p_80, ((safe_sub_func_uint8_t_u_u(p_79, (p_79 | (*l_194)))) , 8L))))) & ((((p_79 && ((((g_139[0][0][1] != p_77) || g_157[0][0][2]) <= p_77) < 0x353FL)) == g_30) , 0xD2C1439DL) >= 0UL)), 0xA8395A48L)) > 0L)), g_157[3][7][0])), l_199[7][1]);
        }
        (*g_154) = (*g_154);
    }
    return p_77;
}







static int func_81(const unsigned p_82, int ** p_83)
{
    return (**p_83);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_157[i][j][k], "g_157[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_536[i][j], "g_536[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_841[i], "g_841[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1102, "g_1102", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1122, "g_1122", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1148[i][j], "g_1148[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1150, "g_1150", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
