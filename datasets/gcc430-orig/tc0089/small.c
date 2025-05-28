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



static unsigned char g_6[7] = {0x99L, 0x1BL, 0x99L, 0x1BL, 0x99L, 0x1BL, 0x99L};
static int g_8 = 0xF9D78659L;
static volatile char g_11 = 0x77L;
static char g_12 = (-1L);
static volatile int g_13 = 0L;
static volatile char g_14 = 0L;
static volatile unsigned char g_15 = 0xF3L;
static unsigned char g_20 = 0UL;
static unsigned short g_28 = 0x18B4L;
static volatile int g_31 = 0x4C259DBAL;
static volatile unsigned g_32 = 0x50BA4309L;
static unsigned g_63 = 0xAC17B1ABL;
static short g_69 = 0x0657L;
static int g_83 = 0x80CEB71DL;
static char g_97 = 0x4FL;
static int g_105[2] = {(-1L), (-1L)};
static int g_115 = 1L;
static unsigned g_132[6] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
static short g_178 = (-1L);
static unsigned short g_196 = 0xDF9CL;
static unsigned g_198[4] = {0UL, 0x7B1A3902L, 0UL, 0x7B1A3902L};
static int *g_209 = &g_83;
static int **g_208 = &g_209;
static unsigned *g_227 = &g_132[5];
static unsigned char g_229 = 0x60L;
static short g_245[8] = {0L, 0xBF41L, 0L, 0xBF41L, 0L, 0xBF41L, 0L, 0xBF41L};
static char *g_249[8][10][3] = {{{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}, {{&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}, {&g_12, (void*)0, &g_12}}};
static char **g_248[10] = {&g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0], &g_249[4][9][0]};
static short *g_265 = &g_178;
static short **g_264 = &g_265;
static unsigned g_431 = 0x677E2F2CL;
static unsigned short g_448 = 0x59C2L;
static unsigned g_512 = 4UL;
static unsigned short *g_546 = &g_196;
static unsigned short **g_545 = &g_546;
static int g_556 = 1L;
static unsigned short *g_570 = (void*)0;
static unsigned char *g_649 = &g_229;
static unsigned char **g_648[1][5] = {{&g_649, &g_649, &g_649, &g_649, &g_649}};
static volatile int g_656 = 1L;
static char g_723 = 0L;
static unsigned short g_731 = 2UL;
static unsigned g_755[10][9] = {{0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}, {0xE0EFE585L, 0xD54930CDL, 7UL, 0x3FF1BDDEL, 0UL, 4294967288UL, 7UL, 0xAF16A001L, 1UL}};
static volatile unsigned g_766 = 0xD420955EL;
static int *g_804 = &g_105[1];



static char func_1(void);
static short func_2(unsigned p_3, unsigned p_4, int p_5);
static int * func_45(unsigned char p_46, unsigned short * p_47);
static char func_54(unsigned short * p_55, char p_56);
static unsigned short func_66(short p_67);
static int ** func_72(unsigned p_73);
static unsigned func_74(short * p_75, unsigned * p_76);
static unsigned * func_78(unsigned p_79);
static int * func_86(unsigned short p_87);
static char func_89(unsigned short p_90, unsigned short p_91, char p_92);
static char func_1(void)
{
    unsigned char *l_19[8] = {&g_6[5], &g_20, &g_6[5], &g_20, &g_6[5], &g_20, &g_6[5], &g_20};
    int *l_25[6] = {&g_8, &g_8, &g_8, &g_8, &g_8, &g_8};
    int *l_26 = &g_8;
    unsigned short *l_27[7] = {&g_28, &g_28, &g_28, &g_28, &g_28, &g_28, &g_28};
    char l_728 = (-1L);
    short *l_802 = &g_69;
    short *l_811 = &g_245[6];
    short l_839 = 0x0C1CL;
    unsigned char l_840 = 0xEBL;
    unsigned char l_854 = 3UL;
    int i;
    g_8 = (func_2((0xA2C7L > 4L), g_6[1], g_6[5]) > (g_8 && ((g_28 = ((g_20--) | (safe_sub_func_uint16_t_u_u((l_25[2] != l_26), 0x6D54L)))) ^ (*l_26))));
    if ((safe_lshift_func_uint16_t_u_u(0x7BE7L, 15)))
    {
        unsigned l_37[10][9][2] = {{{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}, {{0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}, {0UL, 0x8D8805E5L}}};
        int l_42[5] = {0xF5C6F0D6L, (-1L), 0xF5C6F0D6L, (-1L), 0xF5C6F0D6L};
        short *l_793 = &g_69;
        int i, j, k;
        ++g_32;
        for (g_12 = 0; (g_12 >= 16); g_12 = safe_add_func_int8_t_s_s(g_12, 1))
        {
            short **l_736 = &g_265;
            int l_744 = (-1L);
            int l_747 = 0x339AAF04L;
            int l_748 = 0x0989C779L;
            char l_749[5][9] = {{0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L}, {0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L}, {0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L}, {0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L}, {0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L, 0xDBL, 0x69L}};
            char l_751 = (-3L);
            int l_752[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_752[i] = 0x85282A67L;
            if (l_37[6][3][0])
            {
                int l_729[7][8] = {{0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}, {0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}, {0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}, {0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}, {0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}, {0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}, {0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L, 0x2B50B9CCL, 0x0439A7F3L}};
                unsigned *l_741 = &g_431;
                int l_742 = (-1L);
                char l_743 = 0x25L;
                int l_745 = 0xD31B837AL;
                int l_746 = 4L;
                int l_750 = (-1L);
                int l_753 = 7L;
                short l_754 = 0xB564L;
                int *l_759 = &g_556;
                int **l_758 = &l_759;
                int i, j;
                for (g_8 = 0; (g_8 < 4); ++g_8)
                {
                    unsigned l_733 = 0xFF1ACE5AL;
                    short *l_740[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_740[i] = &g_245[0];
                    l_42[2] &= (safe_lshift_func_uint8_t_u_u(g_8, 1));
                    for (g_20 = (-25); (g_20 != 33); g_20++)
                    {
                        int l_724 = 0xAAB372BCL;
                        short l_727[3];
                        unsigned short *l_730 = &g_731;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_727[i] = 0xE719L;
                    }
                    for (g_20 = (-21); (g_20 == 31); ++g_20)
                    {
                        short ***l_737[2][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_737[i][j] = &l_736;
                        }
                        g_264 = l_736;
                        l_742 &= ((*g_209) = (safe_rshift_func_int16_t_s_u(func_74(l_740[0], l_741), 8)));
                        if ((**g_208))
                            break;
                    }
                }
                g_755[9][2]--;
                (**g_208) ^= (l_25[2] != ((*l_758) = &g_556));
                (*l_26) ^= ((l_751 < (safe_sub_func_int32_t_s_s(0x327EC7AEL, func_74(((*l_736) = (*g_264)), l_759)))) >= l_37[6][3][0]);
            }
            else
            {
                short l_769 = (-1L);
                if ((**g_208))
                {
                    char l_768 = 1L;
                    for (g_69 = 0; (g_69 != 8); g_69++)
                    {
                        char l_767 = 0xA1L;
                        unsigned *l_770 = &l_37[6][3][0];
                        unsigned *l_773 = &g_755[9][2];
                        l_748 = ((((*g_649) |= (safe_add_func_int8_t_s_s(g_766, (l_767 | l_768)))) > 0xC3L) & (l_769 && 65527UL));
                        (*g_209) ^= (func_2(l_767, ((*l_773) = ((*l_770)++)), g_731) && ((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(0xBC22L)) < 0xD5972E2AL), l_769)) != (l_768 ^ l_767)));
                        (*l_26) &= (**g_208);
                        return l_751;
                    }
                }
                else
                {
                    unsigned l_782 = 0x338BF41DL;
                    for (l_748 = 21; (l_748 < (-23)); l_748--)
                    {
                        short l_779 = 0x9444L;
                        int l_780 = 5L;
                        int l_781[3][3][4] = {{{0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}, {0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}, {0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}}, {{0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}, {0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}, {0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}}, {{0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}, {0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}, {0x64543E6BL, 0x436013E8L, 0x5B3C4922L, 0L}}};
                        int i, j, k;
                        ++l_782;
                        if ((**g_208))
                            continue;
                    }
                }
                (*g_209) = (*g_209);
            }
            for (g_20 = (-12); (g_20 > 60); g_20 = safe_add_func_int32_t_s_s(g_20, 1))
            {
                unsigned *l_794[4];
                int l_803 = (-7L);
                unsigned l_814 = 0UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_794[i] = &g_431;
                if ((*g_209))
                    break;
                for (g_115 = 0; (g_115 <= 2); g_115 += 1)
                {
                    unsigned char l_801 = 0x32L;
                    int l_805 = (-1L);
                    unsigned l_806 = 18446744073709551612UL;
                    if (((safe_div_func_uint16_t_u_u((*l_26), (((safe_div_func_int8_t_s_s(func_2((!((safe_div_func_int32_t_s_s(func_74(l_793, l_794[0]), (safe_sub_func_int16_t_s_s((*g_265), (!((+(safe_rshift_func_int8_t_s_u(9L, (((safe_sub_func_uint8_t_u_u(l_801, func_74(l_802, &g_198[1]))) || l_803) ^ 0x23L)))) == 1L)))))) < 0x8EBCDDD4L)), g_14, l_801), (*g_649))) && (*g_649)) | 0L))) < (*g_209)))
                    {
                        if ((**g_208))
                            break;
                        g_804 = ((*g_208) = (*g_208));

                        ;
                        if ((*g_804))
                            break;
                    }
                    else
                    {
                        --l_806;
                        (**g_208) = l_803;
                    }
                    if ((**g_208))
                    {
                        (*l_26) ^= (((*g_209) = ((func_74((*g_264), func_45((*g_649), (*g_545))) != (safe_sub_func_int8_t_s_s(func_74(l_811, l_794[0]), 1L))) || 0L)) || 7L);
                        (*l_26) = (*l_26);
                    }
                    else
                    {
                        if ((*g_804))
                            break;
                    }
                    (*g_209) = (7UL == (safe_add_func_int16_t_s_s(((l_803 ^ (0xC2884DF2L & (func_74(l_802, l_25[2]) & g_556))) >= ((*g_649) < func_2(((*g_227) = (g_14 == g_755[6][6])), g_512, g_755[9][0]))), (*g_265))));
                    ++l_814;
                }
            }
            if (l_37[6][3][0])
            {
                unsigned l_817[10] = {0UL, 0UL, 0xCE9F6125L, 0UL, 0UL, 0xCE9F6125L, 0UL, 0UL, 0xCE9F6125L, 0UL};
                int i;
                return l_817[3];
            }
            else
            {
                for (g_97 = 0; (g_97 >= 29); g_97 = safe_add_func_uint32_t_u_u(g_97, 1))
                {
                    return l_37[8][1][1];
                }
            }
        }

        ;
    }
    else
    {
        short l_822 = 0x6BCCL;
        for (g_731 = 0; (g_731 <= 33); g_731 = safe_add_func_int32_t_s_s(g_731, 2))
        {
            return l_822;
        }
    }

    ;
    if ((0L && (safe_sub_func_uint32_t_u_u((((((safe_sub_func_uint8_t_u_u((*l_26), (safe_rshift_func_int8_t_s_s((!(+(safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((**g_264), 0xE455L)) ^ ((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0xDCD5388DL, 0x651D41EEL)), (l_839 != l_840))) > 0xFFB5L)), (-1L))))), 3)))) == 6UL) < (*l_26)) ^ 0x382FL) != (*g_546)), 0UL))))
    {
        unsigned char **l_843 = &l_19[4];
        int *l_851 = &g_105[1];
        int l_853[3];
        int i;
        for (i = 0; i < 3; i++)
            l_853[i] = 0x99B873E5L;
        if ((*g_209))
        {
            unsigned short l_846 = 6UL;
            (*l_26) = (0UL > (g_229 || (safe_lshift_func_int8_t_s_s((((l_843 != l_843) || (safe_add_func_int16_t_s_s(9L, (0xEFL & (l_846 & (0L ^ (safe_rshift_func_int16_t_s_s((**g_264), l_846)))))))) >= (-1L)), (*l_26)))));
        }
        else
        {
            int l_852 = (-5L);
            for (g_28 = 29; (g_28 < 22); g_28 = safe_sub_func_int8_t_s_s(g_28, 1))
            {
                (*g_208) = l_851;

                ;
                (*l_851) ^= l_852;
            }

            ;
            l_854--;
            (*g_208) = l_26;

            ;
        }

        ;
    }
    else
    {
        unsigned l_863 = 0UL;
        (*g_208) = (void*)0;

        ;
        for (g_431 = 0; (g_431 >= 10); g_431++)
        {
            unsigned *l_861[2][8][1];
            unsigned char l_862 = 0x57L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_861[i][j][k] = &g_755[4][6];
                }
            }
            (*g_804) ^= (safe_rshift_func_int16_t_s_u((*l_26), (((*g_649) ^= (g_198[0] ^ (l_863 = (l_862 = g_723)))) || l_863)));
        }
    }

    ;
    return (*l_26);
}







static short func_2(unsigned p_3, unsigned p_4, int p_5)
{
    int *l_7 = &g_8;
    int l_9 = 0L;
    int *l_10[10] = {&g_8, (void*)0, &g_8, (void*)0, &g_8, (void*)0, &g_8, (void*)0, &g_8, (void*)0};
    unsigned short l_18 = 0xA63AL;
    int i;
    ++g_15;
    return l_18;
}







static int * func_45(unsigned char p_46, unsigned short * p_47)
{
    char l_732 = 0L;
    (**g_208) = l_732;
    for (g_178 = 0; g_178 < 4; g_178 += 1)
    {
        g_198[g_178] = 5UL;
    }
    return (*g_208);


}







static char func_54(unsigned short * p_55, char p_56)
{
    int *l_59 = &g_8;
    int *l_61 = &g_8;
    int **l_60 = &l_61;
    unsigned *l_62 = &g_63;
    unsigned short **l_703 = &g_546;
    int l_715 = 0L;
    unsigned short *l_716 = &g_28;
    unsigned short *l_719 = (void*)0;
    unsigned short *l_720 = (void*)0;
    unsigned short *l_721 = &g_448;
    unsigned short *l_722[3];
    int i;
    for (i = 0; i < 3; i++)
        l_722[i] = (void*)0;
    if (func_2(p_56, ((*l_62) = ((0x94407742L || ((void*)0 != p_55)) < (l_59 == ((*l_60) = (void*)0)))), (safe_rshift_func_int8_t_s_u(p_56, 0))))
    {
        short *l_68[6] = {&g_69, &g_69, &g_69, &g_69, &g_69, &g_69};
        unsigned short l_701 = 0x4DCCL;
        int i;
        l_701 |= (g_6[3] || func_66((g_69 = 0x9EEDL)));

        ;

    }
    else
    {
        unsigned short **l_702 = &g_570;
        unsigned short ***l_704 = &l_702;
        (*l_704) = (l_703 = l_702);

        ;
    }

    ;
    ;

    ;
    (**g_208) = ((~(safe_div_func_uint16_t_u_u((((*l_60) = (*l_60)) != l_62), (g_723 |= ((*l_721) ^= (safe_rshift_func_int16_t_s_u(((*g_265) = func_89((((((safe_sub_func_int8_t_s_s((*l_59), (p_56 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_715, (((l_716 == ((*l_703) = (*l_703))) < (+p_56)) >= (~(safe_sub_func_uint8_t_u_u(func_89(func_74(p_55, l_62), g_431, p_56), 0x4FL)))))), 6))))) <= (*l_59)) | (*g_209)) | (*l_59)) == g_6[3]), (*p_55), (*l_59))), g_20))))))) < (*l_59));

    ;
    ;
    return p_56;
}







static unsigned short func_66(short p_67)
{
    unsigned l_586 = 0x3F904EFDL;
    int l_590[2];
    short *l_611 = &g_245[2];
    short *l_619 = &g_245[5];
    unsigned *l_620 = &g_198[3];
    char *l_633[8][6];
    char *l_634 = &g_12;
    int i, j;
    for (i = 0; i < 2; i++)
        l_590[i] = (-1L);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
            l_633[i][j] = &g_97;
    }
    for (g_69 = (-19); (g_69 < (-6)); g_69 = safe_add_func_int8_t_s_s(g_69, 3))
    {
        unsigned char l_589 = 0x28L;
        char l_592 = 0xFBL;
        unsigned l_642 = 0x9AF85A36L;
        int l_665 = 0xCB3CFCBDL;
        int l_668 = 4L;
        unsigned short l_675 = 1UL;
        for (p_67 = 6; (p_67 >= 0); p_67 -= 1)
        {
            unsigned char l_80 = 8UL;
            int l_585 = 0x9ACFE553L;
            int i;
            for (g_63 = 0; (g_63 <= 6); g_63 += 1)
            {
                short *l_77[4] = {&g_69, &g_69, &g_69, &g_69};
                int *l_581 = &g_105[1];
                int *l_582 = &g_105[1];
                int *l_583 = &g_105[1];
                int *l_584[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_584[i] = &g_105[1];
                for (g_28 = 2; (g_28 <= 6); g_28 += 1)
                {
                    int i;
                }
                --l_586;
                l_590[1] = (l_589 &= l_586);
            }
            (*g_208) = (*g_208);
            if (g_6[p_67])
                break;
            if (p_67)
                break;
        }
        if (p_67)
        {
            int *l_599 = &g_105[1];
            unsigned *l_609[8][5] = {{(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_431, (void*)0, (void*)0}};
            unsigned **l_608 = &l_609[7][4];
            unsigned *l_610 = (void*)0;
            short l_618[9];
            int l_623 = 0x05F7B690L;
            int l_625 = 5L;
            int l_653 = 0x9FBB52CCL;
            int i, j;
            for (i = 0; i < 9; i++)
                l_618[i] = (-5L);
            (*g_209) = ((*l_599) ^= (safe_unary_minus_func_int8_t_s((l_592 == (safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((*g_546), (safe_rshift_func_int8_t_s_u(func_2(p_67, p_67, g_13), 3)))), (*g_209)))))));
            if ((safe_sub_func_uint8_t_u_u(func_89(((*l_599) & ((safe_sub_func_uint8_t_u_u(((*g_546) && (p_67 > (0x79L || (safe_rshift_func_uint16_t_u_s(func_74((*g_264), (l_610 = ((*l_608) = (void*)0))), ((func_74((l_611 = &p_67), func_78((((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((&g_229 != (void*)0), p_67)), l_618[4])), l_590[1])) <= 9L) < l_586))) < g_28) == l_592)))))), 0xEBL)) <= 0x15L)), p_67, (*l_599)), l_590[1])))
            {
                int *l_621 = &g_105[1];
                int *l_622 = &l_590[0];
                int *l_624 = &l_590[1];
                unsigned short l_626 = 65535UL;
                (*l_599) |= func_74(((*g_264) = l_619), l_620);

                ;
                l_626--;
                if ((*g_209))
                    continue;
            }
            else
            {
                char *l_631 = (void*)0;
                char **l_632[10][2][3] = {{{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}, {{&l_631, &l_631, &l_631}, {&l_631, &l_631, &l_631}}};
                int *l_636 = &g_115;
                int **l_635 = &l_636;
                int l_641 = 9L;
                int i, j, k;
                if ((((*l_635) = func_78((safe_add_func_uint8_t_u_u(((l_633[0][2] = l_631) != l_634), 9UL)))) != l_610))
                {
                    short l_645 = 0x2DBFL;
                    short l_650 = 4L;
                    if ((((safe_sub_func_int16_t_s_s(l_641, ((p_67 != 0xB3E9347CL) ^ (p_67 != l_642)))) > (func_2((0UL != func_89(l_592, (safe_rshift_func_uint16_t_u_s((p_67 == 3L), l_592)), l_642)), l_645, g_178) > (**g_264))) & p_67))
                    {
                        unsigned char *l_647[7][6][6] = {{{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}, {{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}, {{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}, {{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}, {{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}, {{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}, {{&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}, {&g_229, &g_20, &g_20, &g_6[2], &l_589, &g_6[1]}}};
                        unsigned char **l_646 = &l_647[2][0][5];
                        int i, j, k;
                        g_648[0][0] = l_646;


                        l_590[1] = l_650;
                        (*g_208) = (*g_208);
                    }
                    else
                    {
                        (**g_208) = (((*l_620)++) || l_653);
                    }


                    if ((safe_div_func_uint16_t_u_u(g_656, (safe_lshift_func_int16_t_s_s((*l_599), 11)))))
                    {
                        l_668 &= (safe_add_func_int16_t_s_s(((l_665 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(p_67, p_67)), ((void*)0 != &g_431)))) && (!((!l_592) != (l_590[0] | (safe_add_func_int16_t_s_s(func_74((*g_264), &g_198[0]), 0x50F7L)))))), 0x72BDL));
                    }
                    else
                    {
                        unsigned l_669 = 0x855BAE4EL;
                        l_669 |= ((*l_599) = p_67);
                    }
                }
                else
                {
                    for (g_63 = 13; (g_63 >= 5); --g_63)
                    {
                        l_599 = &l_641;

                        ;
                        (*l_599) ^= ((**g_208) = l_590[0]);
                        (*g_209) = p_67;
                        (*g_209) = p_67;
                    }

                    ;
                    (**g_208) = l_590[1];
                    return (**g_545);
                }



                ;
                return (**g_545);
            }

            ;
            for (l_653 = 0; (l_653 > (-14)); l_653--)
            {
                int *l_674[9] = {&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]};
                int i;
                ++l_675;
            }
            if (p_67)
                break;
        }
        else
        {
            int *l_684 = (void*)0;
            int *l_685 = &g_105[1];
            (*l_685) |= (func_2(((*g_649) < func_2(func_74(l_611, l_620), p_67, ((safe_sub_func_uint32_t_u_u(g_12, (safe_sub_func_int32_t_s_s(0x9AD87431L, (safe_div_func_int32_t_s_s((**g_208), (func_74(l_611, &l_642) && l_642))))))) == 0xC99AL))), g_132[0], p_67) || (*g_265));
            l_685 = l_684;

            ;
        }
        (**g_208) &= p_67;
    }

    ;
    ;
    (**g_208) = p_67;
    for (p_67 = 0; (p_67 == (-8)); p_67 = safe_sub_func_int32_t_s_s(p_67, 3))
    {
        unsigned char ***l_689 = &g_648[0][0];
        unsigned char ****l_688 = &l_689;
        unsigned char ***l_690 = &g_648[0][2];
        int l_695 = 0xDE3EBFF5L;
        int l_700 = 6L;
        l_700 = ((func_2((*g_227), ((((*l_688) = (void*)0) == l_690) & ((**g_264) = ((l_590[1] = (p_67 < l_590[0])) < (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((l_695 &= l_586) ^ (safe_mod_func_uint16_t_u_u(0xF62EL, (safe_sub_func_int8_t_s_s(0L, ((void*)0 == &g_545)))))), (**g_208))), 0x0A7C07B0L))))), p_67) == l_586) || 0x57C5L);

        ;
        (**g_208) ^= p_67;
    }
    for (g_556 = 0; (g_556 <= 6); g_556 += 1)
    {
        int i;
        return g_6[g_556];
    }
    return (*g_546);
}







static int ** func_72(unsigned p_73)
{
    unsigned l_579 = 4294967295UL;
    int **l_580 = (void*)0;
    l_579 ^= (**g_208);
    return l_580;


}







static unsigned func_74(short * p_75, unsigned * p_76)
{
    short l_578 = 1L;
    return l_578;
}







static unsigned * func_78(unsigned p_79)
{
    unsigned l_441[3][5] = {{0x9EF5ABE5L, 0x9EF5ABE5L, 8UL, 0x9EF5ABE5L, 0x9EF5ABE5L}, {0x9EF5ABE5L, 0x9EF5ABE5L, 8UL, 0x9EF5ABE5L, 0x9EF5ABE5L}, {0x9EF5ABE5L, 0x9EF5ABE5L, 8UL, 0x9EF5ABE5L, 0x9EF5ABE5L}};
    int l_444 = 1L;
    int l_456[8] = {(-3L), 0x5746121AL, (-3L), 0x5746121AL, (-3L), 0x5746121AL, (-3L), 0x5746121AL};
    unsigned char l_462 = 255UL;
    int *l_477[4][6] = {{&l_456[2], &l_456[2], &l_456[5], &l_456[2], &l_456[2], &l_456[5]}, {&l_456[2], &l_456[2], &l_456[5], &l_456[2], &l_456[2], &l_456[5]}, {&l_456[2], &l_456[2], &l_456[5], &l_456[2], &l_456[2], &l_456[5]}, {&l_456[2], &l_456[2], &l_456[5], &l_456[2], &l_456[2], &l_456[5]}};
    unsigned **l_538 = &g_227;
    unsigned char **l_540 = (void*)0;
    unsigned short *l_543 = (void*)0;
    unsigned short **l_542[9] = {&l_543, &l_543, (void*)0, &l_543, &l_543, (void*)0, &l_543, &l_543, (void*)0};
    unsigned short **l_548 = &l_543;
    int i, j;
    for (p_79 = 0; (p_79 > 50); p_79 = safe_add_func_int32_t_s_s(p_79, 6))
    {
        short l_440 = (-1L);
        short l_442 = 0xAA66L;
        unsigned l_443[4];
        int l_455 = 5L;
        int l_459 = 0L;
        int l_460 = 0x7D24074CL;
        int l_461[5];
        short ***l_469 = &g_264;
        short l_487 = 3L;
        unsigned char *l_505 = &l_462;
        unsigned **l_515 = (void*)0;
        unsigned short *l_517 = (void*)0;
        int l_533 = 0L;
        int l_567 = (-1L);
        int i;
        for (i = 0; i < 4; i++)
            l_443[i] = 7UL;
        for (i = 0; i < 5; i++)
            l_461[i] = (-1L);
    }
    return &g_198[1];


}







static int * func_86(unsigned short p_87)
{
    unsigned l_93 = 0xD104A743L;
    char *l_96 = &g_97;
    int *l_370 = (void*)0;
    int *l_371 = (void*)0;
    int *l_372[10][1][5] = {{{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}, {{&g_105[1], &g_105[1], &g_105[1], &g_105[1], &g_105[1]}}};
    unsigned char *l_390 = &g_6[1];
    unsigned l_424 = 4294967291UL;
    unsigned *l_429 = &g_198[1];
    int l_436 = 1L;
    int *l_437[8] = {&g_105[1], &g_83, &g_105[1], &g_83, &g_105[1], &g_83, &g_105[1], &g_83};
    int i, j, k;
    if (((g_105[1] = (p_87 ^ func_89(l_93, g_13, ((*l_96) ^= (safe_lshift_func_int8_t_s_u(g_8, 3)))))) <= (g_6[0] == p_87)))
    {
        unsigned char *l_376 = &g_20;
        unsigned char *l_386[6];
        unsigned **l_401 = &g_227;
        unsigned ***l_400[10][9][2] = {{{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}, {{&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}, {&l_401, &l_401}}};
        int l_402 = 0x3816BA20L;
        char **l_415 = &l_96;
        int l_416 = 7L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_386[i] = (void*)0;
        for (g_97 = 0; (g_97 != (-23)); g_97 = safe_sub_func_uint32_t_u_u(g_97, 3))
        {
            char l_375 = 0x04L;
            int l_377 = 0L;
            unsigned char *l_391 = &g_6[6];
            int l_403 = (-1L);
            if (l_375)
            {
                int *l_378 = &g_83;
                l_377 ^= (l_376 != l_96);
                return l_378;


            }
            else
            {
                int l_385[10][3][7] = {{{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}, {{0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}, {0xA428A5F0L, 0xAB875EE4L, 0xE100A9DAL, 2L, (-1L), 0x76D83F59L, 0xD02EE9E7L}}};
                unsigned char **l_387 = (void*)0;
                unsigned char **l_388 = (void*)0;
                unsigned char **l_389[1][8][3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_389[i][j][k] = &l_376;
                    }
                }
                l_403 |= (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((p_87 > (l_377 = (safe_lshift_func_uint8_t_u_u(func_2((l_385[1][2][4] >= (((l_390 = l_386[0]) != (l_391 = (void*)0)) & (l_402 = (safe_lshift_func_int8_t_s_s(((**g_208) || (safe_mod_func_int8_t_s_s((0UL || (safe_mod_func_uint8_t_u_u(0xE7L, (safe_add_func_int16_t_s_s(((void*)0 != l_400[7][2][1]), 1L))))), g_245[3]))), l_377))))), p_87, p_87), 7)))), 2)), g_105[0]));

                ;
                ;
                g_105[0] = (safe_lshift_func_uint16_t_u_u(((void*)0 == l_376), g_178));
            }

            ;
            ;
            l_402 |= (l_377 = p_87);
        }

        ;
        (*g_208) = (*g_208);
        for (l_93 = 0; (l_93 != 14); l_93++)
        {
            unsigned short *l_412 = &g_196;
            char **l_413 = &l_96;
            char ***l_414 = &g_248[7];
            l_416 |= (g_105[1] = (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((void*)0 == &g_6[1]) | func_2(func_89(((void*)0 != &l_402), ((*l_412) = p_87), p_87), ((+g_83) & ((((*l_414) = l_413) != l_415) && 0x5637L)), g_6[1])), l_402)), g_178)));
            (*g_208) = &l_416;

            ;
        }



        (*g_208) = (*g_208);
    }
    else
    {
        for (g_229 = 19; (g_229 == 60); g_229 = safe_add_func_uint32_t_u_u(g_229, 2))
        {
            short **l_420 = &g_265;
            int *l_422 = &g_8;
            for (g_115 = 4; (g_115 >= 1); g_115 -= 1)
            {
                short ***l_419 = &g_264;
                int l_421 = (-10L);
                l_421 = (((*l_419) = &g_265) != l_420);
                (*g_208) = l_371;

                ;
                for (g_196 = 0; (g_196 <= 5); g_196 += 1)
                {
                    return l_422;


                }
            }
        }


    }



    ;
    g_105[0] = ((p_87 || func_2((safe_unary_minus_func_uint8_t_u(l_424)), g_31, g_115)) <= (safe_sub_func_int8_t_s_s((((-1L) & (((*l_429) ^= 0xBDC441DBL) > (((safe_unary_minus_func_int8_t_s(((g_431 >= (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0xB2L, l_436)), 1))) != g_245[7]))) && 1UL) || p_87))) ^ p_87), g_178)));
    l_371 = l_372[5][0][0];

    ;
    return l_437[3];



}







static char func_89(unsigned short p_90, unsigned short p_91, char p_92)
{
    unsigned short *l_101 = &g_28;
    unsigned short **l_100 = &l_101;
    int *l_109 = &g_105[1];
    short l_135 = 1L;
    volatile int *l_139 = &g_31;
    int l_160 = 0x50AD08F5L;
    int l_164 = 0x52A6C9F1L;
    int l_165 = 0xCC6504EBL;
    char l_239 = 0xAFL;
    char **l_250 = &g_249[4][9][0];
    unsigned l_301 = 1UL;
    short ***l_346[5][10] = {{&g_264, (void*)0, &g_264, &g_264, &g_264, &g_264, (void*)0, &g_264, &g_264, &g_264}, {&g_264, (void*)0, &g_264, &g_264, &g_264, &g_264, (void*)0, &g_264, &g_264, &g_264}, {&g_264, (void*)0, &g_264, &g_264, &g_264, &g_264, (void*)0, &g_264, &g_264, &g_264}, {&g_264, (void*)0, &g_264, &g_264, &g_264, &g_264, (void*)0, &g_264, &g_264, &g_264}, {&g_264, (void*)0, &g_264, &g_264, &g_264, &g_264, (void*)0, &g_264, &g_264, &g_264}};
    unsigned short l_365 = 0x2E3FL;
    int i, j;
    for (p_91 = 0; (p_91 < 18); ++p_91)
    {
        unsigned char l_123 = 0x51L;
        int l_143 = 0x0AB7D555L;
        unsigned l_146 = 1UL;
        l_100 = l_100;
        for (g_97 = 0; (g_97 == (-27)); g_97--)
        {
            int *l_104[5][9][5] = {{{&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}}, {{&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}}, {{&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}}, {{&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}}, {{&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}, {&g_105[1], &g_105[0], (void*)0, &g_83, (void*)0}}};
            unsigned l_106 = 0x02F563EDL;
            char *l_144 = &g_97;
            int i, j, k;
            l_106 = 0L;
            for (l_106 = 24; (l_106 != 20); l_106 = safe_sub_func_int16_t_s_s(l_106, 6))
            {
                char l_114 = (-5L);
                char l_128[6][9] = {{0x59L, (-1L), 0xFAL, (-1L), (-1L), 0xFAL, (-1L), 0x59L, 0x76L}, {0x59L, (-1L), 0xFAL, (-1L), (-1L), 0xFAL, (-1L), 0x59L, 0x76L}, {0x59L, (-1L), 0xFAL, (-1L), (-1L), 0xFAL, (-1L), 0x59L, 0x76L}, {0x59L, (-1L), 0xFAL, (-1L), (-1L), 0xFAL, (-1L), 0x59L, 0x76L}, {0x59L, (-1L), 0xFAL, (-1L), (-1L), 0xFAL, (-1L), 0x59L, 0x76L}, {0x59L, (-1L), 0xFAL, (-1L), (-1L), 0xFAL, (-1L), 0x59L, 0x76L}};
                int *l_129 = &g_105[0];
                volatile int *l_138 = &g_31;
                volatile int **l_137[1];
                int *l_142[2][3];
                char **l_145[2][2][3] = {{{&l_144, &l_144, &l_144}, {&l_144, &l_144, &l_144}}, {{&l_144, &l_144, &l_144}, {&l_144, &l_144, &l_144}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_137[i] = &l_138;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_142[i][j] = (void*)0;
                }
                for (p_90 = 0; (p_90 <= 4); p_90 += 1)
                {
                    int i, j, k;
                    if (((+0xD828L) && (((l_104[p_90][(p_90 + 2)][p_90] = l_104[p_90][(p_90 + 2)][p_90]) != l_109) < func_2((safe_add_func_int16_t_s_s(p_92, 0xC8EEL)), ((*l_109) == func_2((func_2((*l_109), g_97, (((g_115 = ((safe_rshift_func_uint16_t_u_s((l_114 = p_91), 7)) | 0xB496B13AL)) | 0xDD4A0C5CL) <= p_90)) >= 247UL), g_97, g_83)), g_6[1]))))
                    {
                        int **l_116 = &l_104[3][8][4];
                        (*l_116) = l_109;
                    }
                    else
                    {
                        (*l_109) = (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((func_2((safe_sub_func_uint16_t_u_u(5UL, l_123)), (4294967286UL && ((g_12 != 0x52A4L) == (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(func_2(func_2(g_115, g_8, p_90), g_63, g_6[5]), 7UL)) == 0x09FA78CEL), l_128[3][0])))), p_90) >= g_69), p_90)), p_90));
                        if (l_114)
                            break;
                    }
                    for (g_115 = 0; (g_115 <= 1); g_115 += 1)
                    {
                        int **l_130 = &l_104[3][6][1];
                        unsigned *l_131 = &g_132[0];
                        int **l_136 = &l_109;
                        int i;
                        (*l_130) = l_129;
                        g_105[g_115] ^= func_2((++(*l_131)), l_135, g_83);
                        (*l_136) = ((*l_130) = l_109);
                    }
                    if (p_91)
                        continue;
                }
                if (p_91)
                    break;
                l_139 = &g_31;
                (*l_129) = (safe_mod_func_uint32_t_u_u((func_2(g_97, (func_2(g_31, g_105[0], (l_143 |= p_91)) == (((l_144 = l_144) != &g_97) | p_90)), g_8) <= l_146), g_83));
            }
            (*l_139) = 0xD7326E48L;
        }
        for (g_115 = 25; (g_115 < 0); g_115 = safe_sub_func_uint8_t_u_u(g_115, 1))
        {
            int l_155 = (-10L);
            unsigned *l_158[9][4] = {{&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}, {&l_146, (void*)0, &l_146, &l_146}};
            int *l_159[6] = {&g_8, &g_8, &l_143, &g_8, &g_8, &l_143};
            int i, j;
            l_160 ^= ((*l_109) = (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(func_2(((safe_sub_func_uint16_t_u_u((l_155 <= (safe_rshift_func_uint16_t_u_s(p_92, 14))), (g_83 > g_6[2]))) || (p_90 &= g_63)), ((*l_109) = ((l_123 & g_97) != g_11)), (g_6[1] | p_92)), 1UL)) & p_92), 8)));
        }
    }
    for (p_90 = 0; (p_90 >= 13); ++p_90)
    {
        int *l_163[5];
        unsigned char l_166 = 0x74L;
        unsigned **l_254 = &g_227;
        short *l_262 = &g_245[3];
        short **l_261 = &l_262;
        int i;
        for (i = 0; i < 5; i++)
            l_163[i] = &g_105[0];
        --l_166;
        for (l_160 = 0; (l_160 != 6); l_160 = safe_add_func_int16_t_s_s(l_160, 6))
        {
            unsigned char l_192[1][7][3] = {{{255UL, 0xE2L, 0xA7L}, {255UL, 0xE2L, 0xA7L}, {255UL, 0xE2L, 0xA7L}, {255UL, 0xE2L, 0xA7L}, {255UL, 0xE2L, 0xA7L}, {255UL, 0xE2L, 0xA7L}, {255UL, 0xE2L, 0xA7L}}};
            unsigned *l_242[6][8][5] = {{{&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}}, {{&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}}, {{&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}}, {{&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}}, {{&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}}, {{&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}, {&g_132[5], &g_132[3], (void*)0, &g_132[1], &g_132[3]}}};
            unsigned *l_243[3][6][2] = {{{&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}}, {{&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}}, {{&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}, {&g_132[0], (void*)0}}};
            int l_280[4][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
            int l_311 = (-6L);
            int l_354 = 0x76E49E5EL;
            int i, j, k;
            (*l_139) = p_92;
            for (l_166 = 2; (l_166 <= 6); l_166 += 1)
            {
                return p_91;
            }
            for (l_164 = 0; (l_164 < (-4)); --l_164)
            {
                unsigned l_179 = 2UL;
                int l_199 = (-9L);
                char *l_244 = &g_97;
                unsigned char *l_251 = &l_192[0][0][2];
                unsigned l_337 = 0UL;
                char l_353 = 0xC6L;
                for (l_135 = 19; (l_135 != 7); l_135 = safe_sub_func_int16_t_s_s(l_135, 9))
                {
                    unsigned *l_175 = &g_63;
                    short *l_176 = (void*)0;
                    short *l_177 = &g_178;
                    int l_195 = 0x216F8107L;
                    int l_228[3][9][2] = {{{(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}}, {{(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}}, {{(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}, {(-2L), (-2L)}}};
                    int i, j, k;
                }
            }
        }
    }
    if ((safe_mod_func_int8_t_s_s(l_365, (*l_109))))
    {
        int l_366 = (-1L);
        (*l_109) = l_366;
    }
    else
    {
        unsigned short *l_369 = &g_196;
        (*l_139) ^= ((*l_109) = (safe_div_func_uint16_t_u_u(1UL, ((*l_369) ^= g_198[1]))));
        return p_90;
    }
    return (*l_139);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_132[i], "g_132[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_198[i], "g_198[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_245[i], "g_245[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_755[i][j], "g_755[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_766, "g_766", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
