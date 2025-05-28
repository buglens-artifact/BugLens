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
   unsigned f0;
   const unsigned f1;
   signed f2 : 29;
};


static union U0 g_8 = {18446744073709551615UL};
static int g_29 = (-1L);
static int *g_28 = &g_29;
static unsigned g_69 = 18446744073709551608UL;
static const char g_74[1] = {0L};
static unsigned char g_103 = 0xD4L;
static short **g_110 = (void*)0;
static unsigned char g_121 = 0xB8L;
static unsigned short g_123 = 0x25A1L;
static unsigned char g_146 = 5UL;
static union U0 g_152[7][6] = {{{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}, {{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}, {{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}, {{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}, {{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}, {{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}, {{0x29671F1EL}, {18446744073709551613UL}, {18446744073709551615UL}, {0UL}, {0x1307C177L}, {0xA41F08C6L}}};
static union U0 g_176 = {18446744073709551615UL};
static union U0 *g_175 = &g_176;
static union U0 g_178 = {18446744073709551615UL};
static int g_183 = 1L;
static char g_221 = 0xA9L;
static short g_260 = 0x5E63L;
static unsigned g_261 = 18446744073709551615UL;
static const int *g_271 = &g_29;
static const int **g_270[1] = {&g_271};
static int *g_291 = &g_29;
static unsigned g_314[9][3][9] = {{{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}, {{0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}, {0x1D3FE618L, 0x09BB11AEL, 1UL, 0x8C5570C8L, 1UL, 0x071430AAL, 0x11DB535AL, 4UL, 1UL}}};
static unsigned short **g_322[3][1][7] = {{{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
static char g_383 = 0xD0L;
static int g_460 = 1L;
static const int *g_459[10][10][2] = {{{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}, {{&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}, {&g_460, (void*)0}}};
static short g_484 = 0xE396L;
static short g_502[3][8] = {{0L, 0L, 0xB23FL, (-6L), (-9L), (-6L), 0xB23FL, 0L}, {0L, 0L, 0xB23FL, (-6L), (-9L), (-6L), 0xB23FL, 0L}, {0L, 0L, 0xB23FL, (-6L), (-9L), (-6L), 0xB23FL, 0L}};
static const unsigned g_509 = 7UL;
static const unsigned g_513 = 1UL;
static int g_534 = 0xDB767BAFL;
static char g_584 = (-6L);



static unsigned char func_1(void);
static short func_4(union U0 p_5, unsigned short p_6, int p_7);
static int * func_10(int p_11, int * p_12, const int * p_13, int * p_14, int p_15);
static int * func_16(int * p_17, int * p_18);
static int func_21(int * p_22, int * p_23);
static int * func_24(int * p_25, int p_26, unsigned p_27);
static short func_32(int * p_33, union U0 p_34, const unsigned char p_35, int * p_36, int * p_37);
static union U0 func_40(int * p_41);
static const unsigned char func_45(unsigned p_46, unsigned p_47);
static unsigned func_50(union U0 p_51, union U0 p_52, const int ** p_53, int ** p_54, int * p_55);
static unsigned char func_1(void)
{
    union U0 **l_593 = &g_175;
    int l_594 = (-1L);
    int l_597 = (-1L);
    char *l_598[5] = {&g_221, &g_221, &g_221, &g_221, &g_221};
    int l_599[2][9] = {{0x4C6B50D8L, 0x4C6B50D8L, 0L, 1L, 7L, 1L, 0L, 0x4C6B50D8L, 0x4C6B50D8L}, {0x4C6B50D8L, 0x4C6B50D8L, 0L, 1L, 7L, 1L, 0L, 0x4C6B50D8L, 0x4C6B50D8L}};
    unsigned char *l_600 = &g_121;
    int i, j;
    (*g_28) = ((l_599[1][0] = (safe_sub_func_uint16_t_u_u((func_4(g_8, g_8.f0, g_8.f2) >= (((((l_593 != l_593) < ((*l_600) = (((l_594 = (((l_594 ^ (safe_rshift_func_uint8_t_u_s(((l_597 = l_594) >= ((l_594 < g_176.f1) ^ 0x7ABEDC6EL)), g_261))) <= l_594) > 1UL)) == g_513) < l_599[1][0]))) < g_502[0][5]) || 0xECL) & 0x35A639A1L)), l_599[1][0]))) > g_314[4][0][8]);
    (*g_291) = (*g_271);
    return l_599[1][0];
}







static short func_4(union U0 p_5, unsigned short p_6, int p_7)
{
    int l_9[6];
    int i;
    for (i = 0; i < 6; i++)
        l_9[i] = 0L;
    for (g_8.f0 = 0; (g_8.f0 <= 5); g_8.f0 += 1)
    {
        int **l_592 = &g_28;
        int i;
    }
    return l_9[0];
}







static int * func_10(int p_11, int * p_12, const int * p_13, int * p_14, int p_15)
{
    short l_485 = (-9L);
    int *l_501 = &g_183;
    int **l_554 = &l_501;
    for (g_103 = (-21); (g_103 <= 23); g_103 = safe_add_func_int16_t_s_s(g_103, 1))
    {
        unsigned short **l_479 = (void*)0;
        int l_482[3][8] = {{0L, 0x1804D68CL, 0L, 0L, 1L, (-1L), 0x9A9C1944L, 0x9A9C1944L}, {0L, 0x1804D68CL, 0L, 0L, 1L, (-1L), 0x9A9C1944L, 0x9A9C1944L}, {0L, 0x1804D68CL, 0L, 0L, 1L, (-1L), 0x9A9C1944L, 0x9A9C1944L}};
        char *l_490 = &g_221;
        int **l_494 = &g_28;
        int ***l_493[1][9] = {{&l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494, &l_494}};
        unsigned *l_514 = &g_314[7][2][1];
        union U0 l_523 = {0UL};
        union U0 *l_582 = &g_176;
        unsigned *l_590 = (void*)0;
        unsigned **l_589 = &l_590;
        int i, j;
        for (g_221 = 0; (g_221 < (-15)); g_221--)
        {
            unsigned short ***l_480 = &g_322[1][0][5];
            int l_481 = (-1L);
            unsigned short *l_483[7] = {&g_123, &g_123, &g_123, &g_123, &g_123, &g_123, &g_123};
            union U0 l_500 = {1UL};
            const unsigned *l_512 = &g_513;
            int **l_524 = &g_28;
            int l_539 = (-1L);
            int *l_552 = (void*)0;
            int i;
            (*p_14) = (safe_sub_func_int16_t_s_s(p_15, (safe_lshift_func_int16_t_s_u(0x4A4FL, ((p_15 | (g_484 = (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((0x16L || g_74[0]), (safe_rshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((g_123 = (((((*l_480) = l_479) == (void*)0) > l_481) != (0x4D93L | l_482[2][4]))), l_481)), (-1L))) < l_482[2][4]) <= g_178.f0), 8)))) > g_183), p_11)))) & l_485)))));
        }
        for (g_121 = 18; (g_121 < 19); g_121 = safe_add_func_int16_t_s_s(g_121, 6))
        {
            unsigned short l_567 = 65535UL;
            const unsigned *l_573 = &g_178.f0;
            const unsigned **l_572 = &l_573;
            int l_585[5];
            int l_586 = 0x7BE73610L;
            int i;
            for (i = 0; i < 5; i++)
                l_585[i] = 0x6D198E18L;
            for (g_534 = 0; (g_534 < (-24)); g_534--)
            {
                unsigned char l_574 = 0xAFL;
                union U0 **l_577 = (void*)0;
                union U0 **l_578 = &g_175;
                union U0 **l_579 = (void*)0;
                union U0 **l_580 = &g_175;
                union U0 *l_581[4][2] = {{(void*)0, &g_8}, {(void*)0, &g_8}, {(void*)0, &g_8}, {(void*)0, &g_8}};
                char *l_583[10] = {(void*)0, (void*)0, &g_584, (void*)0, (void*)0, &g_584, (void*)0, (void*)0, &g_584, (void*)0};
                unsigned ***l_591 = &l_589;
                int i, j;
                l_586 = (l_567 ^ (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((g_383 = (((void*)0 == l_572) == ((*l_490) = (l_574 > (safe_sub_func_uint32_t_u_u(((l_581[2][0] = (void*)0) != l_582), (-1L))))))) ^ (l_585[3] = g_8.f0)), ((~(*p_12)) | (**l_494)))), (**l_554))));
                (**l_494) = (safe_lshift_func_int8_t_s_s(g_534, 6));
                (*l_591) = l_589;
            }
            if (l_585[3])
                break;
        }
    }
    return &g_460;


}







static int * func_16(int * p_17, int * p_18)
{
    const unsigned l_19 = 0xB66FEBFBL;
    int l_20 = (-9L);
    int *l_39 = (void*)0;
    int **l_38 = &l_39;
    int *l_341 = &l_20;
    unsigned short l_358 = 2UL;
    unsigned *l_374 = &g_314[7][0][7];
    unsigned **l_373 = &l_374;
    union U0 **l_376 = &g_175;
    unsigned short ***l_429 = &g_322[2][0][6];
    if ((l_19 == ((l_20 = 0UL) & ((0xD6C1DFE9L <= func_21(func_24(g_28, ((safe_lshift_func_uint8_t_u_u((g_29 <= func_32(((*l_38) = &g_29), func_40(p_17), func_45((0UL == 9UL), g_29), &g_29, p_17)), g_178.f1)) > g_8.f2), l_19), p_18)) && (*l_39)))))
    {
        (*l_38) = p_17;


    }
    else
    {
        const unsigned l_340[8][3][1] = {{{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}}};
        const int **l_353 = &g_271;
        union U0 l_355 = {0x20F0471EL};
        int *l_364 = &g_29;
        int *l_400 = &l_20;
        unsigned short ***l_428 = &g_322[1][0][1];
        int i, j, k;
        if ((safe_unary_minus_func_int8_t_s((*l_39))))
        {
            int *l_339 = (void*)0;
            unsigned short *l_348[4] = {(void*)0, &g_123, (void*)0, &g_123};
            union U0 l_352[3][3] = {{{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}, {{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}, {{18446744073709551615UL}, {18446744073709551615UL}, {18446744073709551615UL}}};
            unsigned **l_375 = &l_374;
            int i, j;
            for (g_69 = 14; (g_69 > 51); g_69++)
            {
                return &g_183;


            }
            for (g_178.f0 = 0; (g_178.f0 <= 2); g_178.f0 += 1)
            {
                union U0 l_336 = {0UL};
                int *l_356 = &l_20;
                int **l_369 = &g_28;
            }
            (*l_38) = (g_291 = &g_29);

            ;
        }
        else
        {
            unsigned char l_378 = 0x30L;
            char *l_379 = &g_221;
            int l_385 = 0x4B7D85DBL;
            union U0 l_396 = {9UL};
            if (((((*l_379) = l_378) > 3L) ^ (**l_353)))
            {
                int *l_382 = (void*)0;
                int l_384 = 0x9512BAA6L;
                l_385 = (((l_384 = (((func_21(&g_183, &g_29) ^ l_378) & 0xDFCFL) <= (*p_18))) < g_178.f1) >= 0x029EL);
                for (l_20 = 27; (l_20 > (-29)); l_20 = safe_sub_func_uint32_t_u_u(l_20, 7))
                {
                    unsigned l_392 = 0x5DF1FDC0L;
                    if ((*p_18))
                        break;
                }
            }
            else
            {
                if ((*g_271))
                {
                    for (g_383 = 0; (g_383 > (-7)); g_383 = safe_sub_func_int32_t_s_s(g_383, 6))
                    {
                        (*l_341) = (*g_291);
                        p_17 = p_17;
                    }
                }
                else
                {
                    int *l_409 = &l_20;
                    if (func_45(g_29, l_396.f2))
                    {
                        unsigned l_405 = 1UL;
                        unsigned char *l_406 = (void*)0;
                        unsigned char *l_407 = &l_378;
                        unsigned char *l_408 = &g_121;
                        (*g_291) = (&l_355 != (*l_376));
                        (*l_364) = (((*l_408) = ((*l_407) = (safe_add_func_uint8_t_u_u(func_32(p_17, (*g_175), ((!((**l_353) < l_405)) <= ((*l_379) = g_260)), l_400, p_17), (*l_364))))) & g_29);
                    }
                    else
                    {
                        (*l_353) = l_409;

                        ;
                        (*l_353) = l_409;
                    }

                    ;
                    return &g_183;



                }
            }
            if ((*l_400))
            {
                const unsigned l_416 = 18446744073709551606UL;
                int l_417 = 0xDA09434DL;
                union U0 * const *l_421 = &g_175;
                union U0 * const **l_420[4];
                unsigned l_432 = 0xDF442A45L;
                int **l_435 = &l_400;
                int i;
                for (i = 0; i < 4; i++)
                    l_420[i] = &l_421;
                (*l_353) = (void*)0;

                ;
                if ((l_378 ^ ((safe_sub_func_int32_t_s_s(func_45((*l_364), ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(l_416, (*p_17))), (*l_364))) & (*l_400))), (l_417 = (l_396.f2 = (*p_17))))) ^ ((**l_373) = g_383))))
                {
                    (*l_353) = ((*l_38) = l_364);

                    ;
                }
                else
                {
                    (*l_38) = p_18;


                }


                ;
                                for (l_355.f0 = 14; (l_355.f0 == 11); l_355.f0 = safe_sub_func_int8_t_s_s(l_355.f0, 2))
                {
                    unsigned char l_426[6] = {0UL, 0UL, 0x35L, 0UL, 0UL, 0x35L};
                    unsigned short *l_427 = &g_123;
                    unsigned short *l_436 = &l_358;
                    unsigned short ***l_439 = &g_322[2][0][6];
                    unsigned l_443 = 0xBBEADE78L;
                    int i;
                    (**l_435) = ((*l_364) = ((l_420[2] == (void*)0) == (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_426[4], (l_417 = ((*l_427) = (*l_364))))) < (((*l_379) = (((*l_436) = ((((((l_428 != l_429) > ((safe_lshift_func_int16_t_s_u(l_432, (safe_sub_func_int8_t_s_s((l_435 != &g_271), 2L)))) || 0L)) < (**l_435)) == 1L) || (*l_341)) ^ 0xC1L)) >= 1UL)) > l_426[0])), l_385))));
                    (**l_435) = l_426[4];
                    if (l_426[2])
                        continue;
                    for (g_123 = 0; (g_123 != 44); g_123++)
                    {
                        unsigned char l_440 = 255UL;
                        (*l_400) = ((g_8.f2 && ((void*)0 == l_439)) == l_440);
                        (*g_291) = ((safe_sub_func_uint32_t_u_u(l_443, 1UL)) < l_426[0]);
                        (*g_28) = (*l_400);
                        if ((*p_18))
                            continue;
                    }
                }
                for (l_355.f0 = 0; (l_355.f0 < 16); ++l_355.f0)
                {
                    int * const l_446 = (void*)0;
                    if ((*g_28))
                    {
                        int **l_447 = (void*)0;
                        int **l_448 = &g_291;
                        if ((*p_18))
                            break;
                        (*l_448) = l_446;

                        ;
                        (*l_353) = p_17;


                    }
                    else
                    {
                        (*l_376) = &l_355;

                        ;
                        if ((*p_17))
                            break;
                    }

                    ;

                    ;
                    return &g_29;



                }

                ;
            }
            else
            {
                const int l_455 = 0xF94A6298L;
                for (l_378 = (-21); (l_378 >= 21); l_378 = safe_add_func_int16_t_s_s(l_378, 3))
                {
                    unsigned char l_456 = 249UL;
                    if ((g_176.f1 && ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((func_32(p_17, (**l_376), l_455, (*l_38), &g_183) == (-1L)) || l_456), 5)), l_396.f0)) ^ l_455)))
                    {
                        (*g_28) = (-5L);
                    }
                    else
                    {
                        return &g_29;


                    }
                    return &g_183;


                }
                for (g_383 = 15; (g_383 > 22); g_383++)
                {
                    if ((*p_17))
                        break;
                }
            }


            ;
            ;
                    }


        ;
        ;
    }

    ;



    ;
    ;
    return p_18;


}







static int func_21(int * p_22, int * p_23)
{
    char l_317[7][8][4] = {{{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}, {{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}, {{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}, {{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}, {{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}, {{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}, {{0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}, {0x5CL, 7L, 8L, 0L}}};
    unsigned short ***l_323[1][7] = {{(void*)0, &g_322[1][0][2], (void*)0, &g_322[1][0][2], (void*)0, &g_322[1][0][2], (void*)0}};
    unsigned short *l_325 = &g_123;
    unsigned short **l_324 = &l_325;
    unsigned short **l_326 = &l_325;
    unsigned char *l_327[6] = {&g_146, (void*)0, &g_146, (void*)0, &g_146, (void*)0};
    int l_328 = (-1L);
    int l_331 = (-1L);
    unsigned l_332 = 0x1815FD38L;
    int i, j, k;
    for (g_69 = (-11); (g_69 == 52); ++g_69)
    {
        (*g_28) = 0x4D006B99L;
        if ((*p_23))
            continue;
    }
    for (g_69 = 0; g_69 < 1; g_69 += 1)
    {
        g_270[g_69] = &g_271;
    }
    (*g_291) = l_317[4][3][0];
    (*g_28) = (safe_sub_func_uint32_t_u_u((l_317[4][3][0] ^ ((safe_add_func_uint32_t_u_u(g_74[0], ((g_146 = (+(l_328 = ((l_324 = g_322[1][0][2]) == l_326)))) <= l_317[4][3][0]))) > (l_317[2][3][3] || (safe_lshift_func_uint16_t_u_s((l_331 = ((**l_326) = 0xFC92L)), 11))))), l_317[3][6][2]));

    ;
    return l_332;
}







static int * func_24(int * p_25, int p_26, unsigned p_27)
{
    int **l_309 = &g_28;
    int **l_312[2];
    unsigned *l_313[8] = {&g_314[7][2][1], &g_314[7][2][1], &g_314[7][2][1], &g_314[7][2][1], &g_314[7][2][1], &g_314[7][2][1], &g_314[7][2][1], &g_314[7][2][1]};
    int i;
    for (i = 0; i < 2; i++)
        l_312[i] = &g_291;
    (*l_309) = p_25;

    ;
    (*p_25) = (((-1L) || (g_314[4][1][8] = (((safe_mod_func_int32_t_s_s(func_32(p_25, func_40((g_291 = ((*l_309) = &g_183))), g_260, &g_29, &g_183), (*g_271))) != 0xC0L) > p_27))) && p_27);

    ;
    (*g_291) = (*p_25);
    return (*l_309);


}







static short func_32(int * p_33, union U0 p_34, const unsigned char p_35, int * p_36, int * p_37)
{
    short l_187 = (-1L);
    short l_223 = 0x582DL;
    unsigned short *l_228 = (void*)0;
    unsigned short **l_227 = &l_228;
    const short *l_239 = (void*)0;
    const short **l_238 = &l_239;
    int l_243 = 1L;
    unsigned *l_249 = &g_176.f0;
    union U0 l_269 = {0UL};
    char l_296 = (-1L);
    for (g_69 = (-9); (g_69 >= 26); g_69 = safe_add_func_int8_t_s_s(g_69, 1))
    {
        if (l_187)
        {
            int *l_189[9][8] = {{&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}, {&g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183, &g_183}};
            int **l_188 = &l_189[8][2];
            int i, j;
            (*l_188) = &g_29;


        }
        else
        {
            return g_183;
        }
    }
    for (p_34.f0 = (-7); (p_34.f0 < 58); p_34.f0 = safe_add_func_uint16_t_u_u(p_34.f0, 5))
    {
        unsigned char l_208[8][5] = {{0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}, {0UL, 0xF8L, 0UL, 0xF8L, 0UL}};
        int l_218[7];
        int l_219 = 9L;
        int l_222[7] = {0xDA0F3384L, 0x57027B00L, 0xDA0F3384L, 0x57027B00L, 0xDA0F3384L, 0x57027B00L, 0xDA0F3384L};
        unsigned short ***l_229 = &l_227;
        int *l_230 = &l_222[2];
        short *l_235 = &l_187;
        short **l_234 = &l_235;
        int *l_265[2][9][5] = {{{&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}}, {{&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}, {&l_219, &l_219, &l_243, &l_219, &l_243}}};
        const unsigned *l_281 = &g_69;
        const unsigned **l_280 = &l_281;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_218[i] = 0x31375071L;
        for (g_69 = 22; (g_69 < 5); --g_69)
        {
            int l_215[3][3] = {{0x7D35642DL, 8L, 0x7D35642DL}, {0x7D35642DL, 8L, 0x7D35642DL}, {0x7D35642DL, 8L, 0x7D35642DL}};
            char *l_220 = &g_221;
            int **l_224 = (void*)0;
            int *l_226 = &l_219;
            int **l_225 = &l_226;
            int i, j;
            for (g_146 = 11; (g_146 != 17); g_146 = safe_add_func_uint16_t_u_u(g_146, 5))
            {
                int *l_197 = &g_183;
                int **l_196 = &l_197;
                (*l_196) = (void*)0;

                ;
                return p_35;
            }
            l_222[2] = (g_176.f2 >= (p_34.f2 < ((safe_mod_func_int16_t_s_s((255UL | ((p_34.f0 && (((*l_220) = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((!(safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0xEEL, l_208[4][4])), 7))), (l_219 = (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s((0x87L | l_215[2][0]), (safe_lshift_func_int8_t_s_u(l_218[3], 5)))) == l_187) <= l_187), l_218[3])), g_123))))), g_178.f0))) && g_176.f0)) ^ 0x3BL)), 0x440FL)) > l_215[2][0])));
            l_223 = 0xDDAD4C54L;
            (*l_225) = &l_222[2];

            ;
        }
        (*l_229) = l_227;
        (*l_230) = l_187;
        if ((l_187 <= (safe_unary_minus_func_int8_t_s((-1L)))))
        {
            short ***l_236 = &g_110;
            short **l_237 = &l_235;
            int l_276 = 0x95DFF0F6L;
            const unsigned ***l_282 = (void*)0;
            int *l_289[5] = {&l_222[2], &l_222[2], &l_222[2], &l_222[2], &l_222[2]};
            int i;
            if ((safe_lshift_func_int8_t_s_s(((((*l_236) = l_234) == (void*)0) < (l_237 != l_238)), 6)))
            {
                unsigned *l_242 = &g_176.f0;
                int l_245 = (-1L);
                int *l_252 = &l_245;
                if (func_45((l_243 = ((*l_242) = (g_178.f0 == (safe_lshift_func_int8_t_s_u(g_103, 2))))), p_34.f1))
                {
                    int **l_244 = &l_230;
                    (*l_244) = &g_183;

                    ;
                }
                else
                {
                    if (((**g_110) || l_245))
                    {
                        (*l_230) = l_245;
                        return p_35;


                    }
                    else
                    {
                        return p_34.f1;


                    }
                }

                ;
                if ((*l_230))
                    break;

                for (g_121 = 2; (g_121 <= 6); g_121 += 1)
                {
                    unsigned **l_248[10] = {&l_242, &l_242, &l_242, &l_242, &l_242, &l_242, &l_242, &l_242, &l_242, &l_242};
                    int i;
                    for (l_219 = 0; (l_219 <= 6); l_219 += 1)
                    {
                        int i;
                        l_222[l_219] = 1L;
                        (*l_230) = l_218[g_121];
                    }
                    (*l_230) = (((safe_sub_func_uint16_t_u_u(((l_249 = p_37) != p_33), (safe_mod_func_uint32_t_u_u(l_222[g_121], 0x7A2E974CL)))) > (1UL <= g_103)) > p_34.f2);


                    for (l_223 = 0; (l_223 <= 4); l_223 += 1)
                    {
                        short * const l_259 = &g_260;
                        short * const *l_258 = &l_259;
                        short * const **l_257 = &l_258;
                        int i, j;
                        l_252 = &g_183;

                        ;
                        l_222[g_121] = (safe_lshift_func_int8_t_s_u(l_208[g_121][l_223], (0xA1B3C1EEL ^ (safe_sub_func_uint32_t_u_u((g_261 = ((&l_208[g_121][l_223] != (void*)0) < (((*l_257) = g_110) == &l_235))), 0x8ABC683EL)))));

                        ;
                        (*l_230) = ((**g_110) && 3L);
                    }
                }

                ;
            }
            else
            {
                int *l_272 = &g_29;
                if ((*l_230))
                {
                    int **l_262 = &l_230;
                    (*l_262) = &g_183;

                    ;
                }
                else
                {
                    int *l_268 = (void*)0;
                    union U0 **l_273 = &g_175;
                    for (l_223 = 1; (l_223 < (-29)); l_223--)
                    {
                        int **l_266 = &l_265[1][8][1];
                        int **l_267 = &l_230;
                        (*l_267) = ((*l_266) = l_265[0][3][1]);

                        ;
                        g_183 = func_50(func_40(l_268), l_269, g_270[0], &g_28, l_272);
                        (*l_267) = p_33;


                    }


                    (*l_273) = &g_8;

                    ;
                    for (g_123 = 0; (g_123 <= 55); g_123 = safe_add_func_uint32_t_u_u(g_123, 7))
                    {
                        return l_276;


                    }
                }


                for (l_223 = 15; (l_223 != 23); l_223 = safe_add_func_uint16_t_u_u(l_223, 1))
                {
                    int **l_279 = &l_230;
                    (*l_279) = &l_222[2];

                    ;
                }
                return p_34.f1;


            }

            ;
            ;
            l_280 = l_280;
            if ((*p_36))
            {
                int **l_287 = &l_230;
                int **l_288 = &l_265[0][3][1];
                unsigned char *l_290[10][1][9] = {{{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}, {{&l_208[4][4], &l_208[4][4], &l_208[4][4], &l_208[4][4], &g_121, &g_103, (void*)0, &g_103, &g_121}}};
                int l_297[3][4] = {{0x6D37CD8EL, 0x140D0F78L, 0x88622F48L, 0x88622F48L}, {0x6D37CD8EL, 0x140D0F78L, 0x88622F48L, 0x88622F48L}, {0x6D37CD8EL, 0x140D0F78L, 0x88622F48L, 0x88622F48L}};
                int i, j, k;
                if (((p_34.f0 >= 0x31L) >= (safe_mod_func_uint16_t_u_u((l_276 = (safe_add_func_uint8_t_u_u((func_45(((l_287 == (void*)0) != l_276), g_178.f2) > (*p_33)), (l_219 = ((l_289[1] = ((*l_288) = ((*l_287) = p_36))) != (void*)0))))), 6L))))
                {
                    short l_294 = (-1L);
                    int l_295[10] = {0x2DDE1195L, 0x216E4670L, 0x2DDE1195L, 0x216E4670L, 0x2DDE1195L, 0x216E4670L, 0x2DDE1195L, 0x216E4670L, 0x2DDE1195L, 0x216E4670L};
                    int i;
                    if ((*p_33))
                    {
                        if ((*g_28))
                            break;

                    }
                    else
                    {
                        g_152[2][2].f2 = (**l_287);
                        (*l_287) = p_36;
                    }
                    l_289[1] = g_291;


                    l_296 = (l_295[6] = ((safe_add_func_uint16_t_u_u(p_34.f0, p_34.f2)) < l_294));
                }
                else
                {
                    l_297[1][1] = (l_243 = l_269.f2);
                    if ((*g_28))
                        continue;

                }




            }
            else
            {
                if ((safe_rshift_func_int8_t_s_u(g_29, 0)))
                {
                    return p_34.f0;


                }
                else
                {
                    return p_34.f2;


                }
            }




        }
        else
        {
            for (l_219 = (-30); (l_219 > (-30)); l_219 = safe_add_func_uint32_t_u_u(l_219, 5))
            {
                int *l_306 = &l_243;
                for (l_187 = 1; (l_187 < 22); l_187 = safe_add_func_uint32_t_u_u(l_187, 3))
                {
                    for (g_123 = 1; (g_123 <= 6); g_123 += 1)
                    {
                        int i;
                        l_269.f2 = ((*l_230) = l_222[g_123]);
                    }

                                        for (l_269.f0 = (-3); (l_269.f0 != 31); l_269.f0++)
                    {
                        int *l_307 = &l_222[2];
                        int **l_308 = &l_307;
                        (*l_230) = (~(p_34.f2 & 0x8014L));
                        l_307 = l_306;

                        ;
                        (*l_308) = l_306;
                    }

                                    }
            }
        }




    }


    return g_69;
}







static union U0 func_40(int * p_41)
{
    int **l_42 = (void*)0;
    int *l_44 = (void*)0;
    int **l_43 = &l_44;
    (*l_43) = (void*)0;
    return g_8;

    }







static const unsigned char func_45(unsigned p_46, unsigned p_47)
{
    int *l_56 = &g_29;
    const int *l_58 = (void*)0;
    const int **l_57 = &l_58;
    int *l_60 = &g_29;
    int **l_59 = &l_60;
    int *l_181 = (void*)0;
    int *l_182 = &g_183;
    const unsigned l_184 = 1UL;
    (*l_182) = (safe_add_func_uint32_t_u_u(1UL, func_50(g_8, func_40(l_56), l_57, &l_56, ((*l_59) = &g_29))));
    return l_184;
}







static unsigned func_50(union U0 p_51, union U0 p_52, const int ** p_53, int ** p_54, int * p_55)
{
    unsigned l_68[6][7][2] = {{{2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}}, {{2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}}, {{2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}}, {{2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}}, {{2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}}, {{2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}, {2UL, 2UL}}};
    int l_76 = 0xF036206CL;
    int l_107 = 7L;
    unsigned l_113 = 0UL;
    union U0 *l_177 = &g_178;
    int *l_180 = &l_76;
    int i, j, k;
    for (p_51.f0 = (-2); (p_51.f0 < 37); p_51.f0 = safe_add_func_int32_t_s_s(p_51.f0, 1))
    {
        short l_67 = (-1L);
        int l_75[3][3][2] = {{{6L, 6L}, {6L, 6L}, {6L, 6L}}, {{6L, 6L}, {6L, 6L}, {6L, 6L}}, {{6L, 6L}, {6L, 6L}, {6L, 6L}}};
        unsigned char l_138 = 0UL;
        union U0 *l_157 = &g_152[2][2];
        union U0 **l_156[2][7][9] = {{{&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}}, {{&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}, {&l_157, &l_157, &l_157, (void*)0, &l_157, &l_157, &l_157, &l_157, &l_157}}};
        unsigned short *l_161 = &g_123;
        unsigned short **l_160 = &l_161;
        int i, j, k;
    }

        (*l_180) = 0x58DE8A0DL;
    return g_146;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_152[i][j].f0, "g_152[i][j].f0", print_hash_value);
            transparent_crc(g_152[i][j].f1, "g_152[i][j].f1", print_hash_value);
            transparent_crc(g_152[i][j].f2, "g_152[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_176.f0, "g_176.f0", print_hash_value);
    transparent_crc(g_176.f1, "g_176.f1", print_hash_value);
    transparent_crc(g_176.f2, "g_176.f2", print_hash_value);
    transparent_crc(g_178.f0, "g_178.f0", print_hash_value);
    transparent_crc(g_178.f1, "g_178.f1", print_hash_value);
    transparent_crc(g_178.f2, "g_178.f2", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_314[i][j][k], "g_314[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_502[i][j], "g_502[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_509, "g_509", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
