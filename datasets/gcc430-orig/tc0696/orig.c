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



static unsigned g_12 = 0xC0F8067EL;
static int g_41[5] = {0x3F4B1415L, 0x3F4B1415L, 0x3F4B1415L, 0x3F4B1415L, 0x3F4B1415L};
static volatile int g_42 = 0xF67AB6CEL;
static int g_43 = 0x12C005D9L;
static int g_44 = 1L;
static unsigned g_86[3][4] = {{0x9EDE1510L, 0xE235BD63L, 0x9EDE1510L, 0xE235BD63L}, {0x9EDE1510L, 0xE235BD63L, 0x9EDE1510L, 0xE235BD63L}, {0x9EDE1510L, 0xE235BD63L, 0x9EDE1510L, 0xE235BD63L}};
static volatile unsigned char g_106[8] = {0UL, 0UL, 0x2CL, 0UL, 0UL, 0x2CL, 0UL, 0UL};
static short g_110 = 3L;
static int **g_123 = (void*)0;
static char g_133 = 0x2AL;
static volatile unsigned g_170 = 0UL;
static volatile unsigned *g_169[3] = {&g_170, &g_170, &g_170};
static unsigned g_172 = 0x4017EA37L;
static unsigned *g_171 = &g_172;
static unsigned short g_201 = 0UL;
static short g_211 = 0x8AC6L;
static unsigned *g_224 = &g_172;
static volatile unsigned g_227 = 0x1BD6A1D8L;
static volatile unsigned *g_226 = &g_227;
static volatile unsigned **g_225 = &g_226;
static char *g_240 = &g_133;
static char **g_239[2] = {&g_240, &g_240};
static int *g_245 = &g_44;
static int g_284 = 0L;
static short g_312 = 1L;
static char g_314 = (-5L);
static unsigned char g_320 = 0x5FL;
static int *g_330[10][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
static volatile int g_333 = 0L;
static unsigned g_344 = 0UL;
static int ***g_369 = (void*)0;
static unsigned short g_452[1] = {65533UL};
static int g_493[2][4][5] = {{{0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}, {0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}, {0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}, {0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}}, {{0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}, {0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}, {0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}, {0x53DBD92EL, 3L, 1L, 3L, 0x53DBD92EL}}};
static volatile unsigned ***g_504 = (void*)0;
static volatile unsigned short g_526 = 0x9CDAL;
static int ****g_544 = &g_369;
static int *****g_543[3][9] = {{(void*)0, &g_544, &g_544, &g_544, (void*)0, &g_544, &g_544, &g_544, (void*)0}, {(void*)0, &g_544, &g_544, &g_544, (void*)0, &g_544, &g_544, &g_544, (void*)0}, {(void*)0, &g_544, &g_544, &g_544, (void*)0, &g_544, &g_544, &g_544, (void*)0}};
static int **g_578[2] = {&g_330[1][0], &g_330[1][0]};
static unsigned short *g_588 = &g_452[0];
static unsigned short **g_587 = &g_588;
static volatile int *g_631 = (void*)0;
static unsigned char *g_638 = &g_320;
static unsigned char **g_637 = &g_638;
static unsigned char ***g_636[9] = {(void*)0, &g_637, (void*)0, &g_637, (void*)0, &g_637, (void*)0, &g_637, (void*)0};
static volatile unsigned char *g_652 = (void*)0;
static volatile int g_723[5][2][10] = {{{0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}, {0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}}, {{0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}, {0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}}, {{0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}, {0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}}, {{0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}, {0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}}, {{0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}, {0x6E3E07AFL, 0x5F4DCB98L, (-3L), 6L, 1L, 0x66B1F832L, 0x6E3E07AFL, (-2L), 0xAFA1E74CL, 0xF37B5578L}}};
static volatile unsigned g_864 = 0x39A06BEFL;
static short *g_954 = &g_211;
static int g_959 = 0xBCCC7960L;
static volatile char g_977 = (-1L);
static short g_982[9] = {0xAA1EL, 0xAA1EL, 0x7942L, 0xAA1EL, 0xAA1EL, 0x7942L, 0xAA1EL, 0xAA1EL, 0x7942L};
static volatile short g_996 = 0x749FL;
static int *g_1031[8][7][4] = {{{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}, {{&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}, {&g_959, &g_284, &g_959, &g_284}}};
static unsigned short ***g_1167 = &g_587;
static int *g_1177 = &g_493[0][1][4];
static int **g_1176[8] = {&g_1177, &g_1177, &g_1177, &g_1177, &g_1177, &g_1177, &g_1177, &g_1177};
static int *g_1230 = &g_41[4];
static unsigned ***g_1380 = (void*)0;
static unsigned short ****g_1400 = &g_1167;
static unsigned short *****g_1399[10][4] = {{&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}, {&g_1400, &g_1400, (void*)0, &g_1400}};
static int *g_1404 = &g_284;
static unsigned char g_1410 = 0xC7L;
static volatile char ****g_1578 = (void*)0;
static char ***g_1580 = &g_239[0];
static char ****g_1579[7][6] = {{&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}, {&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}, {&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}, {&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}, {&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}, {&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}, {&g_1580, &g_1580, (void*)0, (void*)0, &g_1580, &g_1580}};
static int *g_1625 = &g_284;



static unsigned func_1(void);
static int func_2(short p_3, int p_4, unsigned p_5);
static short func_13(unsigned char p_14, unsigned p_15, char p_16);
static unsigned func_20(int p_21, unsigned p_22, unsigned char p_23, unsigned p_24);
static unsigned short func_30(char p_31, int p_32, char p_33);
static int * func_34(char p_35, unsigned p_36, int * p_37);
static short func_38(int * p_39);
static int func_63(char p_64, int p_65, short p_66, int p_67);
static char func_68(int ** p_69, unsigned p_70, unsigned p_71, char p_72);
static int ** func_73(int ** p_74, unsigned char p_75, unsigned short p_76, unsigned short p_77);
static unsigned func_1(void)
{
    unsigned l_19 = 0x2E96673EL;
    unsigned l_29 = 4294967291UL;
    unsigned char l_1266 = 0x86L;
    int *l_1498 = &g_41[4];
    int **l_1499 = &g_330[2][0];
    unsigned l_1561[8];
    unsigned char ***l_1582 = &g_637;
    unsigned l_1589 = 2UL;
    unsigned l_1592 = 0x58CAAFB1L;
    unsigned char l_1613 = 7UL;
    int l_1616 = 0x9D94CF7FL;
    unsigned short ****l_1655 = &g_1167;
    unsigned short *****l_1656 = (void*)0;
    unsigned short *****l_1657 = &g_1400;
    unsigned short ****l_1658 = &g_1167;
    unsigned char l_1659 = 4UL;
    char l_1664 = 0L;
    int l_1665[10];
    int i;
    for (i = 0; i < 8; i++)
        l_1561[i] = 0UL;
    for (i = 0; i < 10; i++)
        l_1665[i] = (-1L);
    (*g_1404) = func_2((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(g_12, (func_13(g_12, (l_19 ^ ((func_20(g_12, l_19, (((*g_1230) = (((safe_sub_func_uint8_t_u_u(0x2BL, (safe_rshift_func_int8_t_s_u(l_19, 3)))) | (l_29 || (func_30((~l_29), g_12, g_12) , (*g_638)))) < 0x15A379B6L)) ^ 1L), g_320) | 0L) == 0x797F4632L)), l_1266) ^ l_19))) == l_29), l_19)), l_1266)), (*g_1177), l_1266);

    ;
    ;

    (*l_1499) = l_1498;
    for (g_314 = 0; (g_314 < (-29)); g_314 = safe_sub_func_int8_t_s_s(g_314, 8))
    {
        unsigned short l_1502[6];
        int l_1506 = 1L;
        short l_1516 = 1L;
        char *l_1520 = (void*)0;
        unsigned char l_1534 = 246UL;
        unsigned short l_1535 = 6UL;
        int ***l_1574 = &g_1176[0];
        int l_1602 = 0x62462A69L;
        unsigned char l_1617 = 0UL;
        int i;
        for (i = 0; i < 6; i++)
            l_1502[i] = 65535UL;
        if (l_1502[3])
            break;
        for (g_211 = 0; (g_211 <= 8); g_211 += 1)
        {
            short l_1503 = 0x3041L;
            int l_1514 = 1L;
            int **l_1526 = &g_1031[3][2][1];
            char ****l_1581[5] = {&g_1580, &g_1580, &g_1580, &g_1580, &g_1580};
            char l_1614 = 1L;
            short l_1620 = 9L;
            char l_1639 = 0L;
            unsigned l_1644 = 2UL;
            char l_1646 = 0x9AL;
            unsigned char ***l_1654[1][6] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
            int i, j;
        }
    }
    (*g_1230) = (((*l_1498) ^ (((((((*l_1657) = l_1655) != l_1658) == (l_1659 >= (func_68(&l_1498, (safe_div_func_int32_t_s_s(((*g_588) < (g_982[4] = ((*g_954) = (safe_mod_func_uint32_t_u_u((*l_1498), 0x07A0AAD6L))))), (*g_1404))), (*g_171), (*l_1498)) & l_1664))) & l_1665[8]) , (*g_637)) == (**l_1582))) == 0x436DL);
    return (*l_1498);
}







static int func_2(short p_3, int p_4, unsigned p_5)
{
    char l_1496 = 0L;
    int l_1497[9][9] = {{0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}, {0xED3EB108L, 1L, 4L, 0L, 8L, 0x37E33BB6L, 0L, 1L, 0L}};
    int i, j;
    l_1497[5][6] = ((0x636FL && (****g_1400)) , l_1496);
    return l_1496;
}







static short func_13(unsigned char p_14, unsigned p_15, char p_16)
{
    unsigned short l_1277[10][6] = {{0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}, {0xC49CL, 0xC68AL, 0x1379L, 65528UL, 65528UL, 0x1379L}};
    int **l_1278 = &g_245;
    unsigned short l_1290 = 0xA4F1L;
    unsigned l_1430 = 18446744073709551615UL;
    unsigned char l_1495 = 8UL;
    int i, j;
    for (g_312 = 0; (g_312 >= 15); ++g_312)
    {
        int *l_1279[10] = {&g_44, &g_44, &g_43, &g_44, &g_44, &g_43, &g_44, &g_44, &g_43, &g_44};
        unsigned char l_1282 = 0x3FL;
        short l_1283 = 0x1B6DL;
        int *l_1284 = (void*)0;
        unsigned char l_1285 = 0xE2L;
        unsigned l_1286 = 0x584C8B0BL;
        int l_1287 = 0xB0E56208L;
        int i;
        (**l_1278) = ((((p_16 >= (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((p_15 != (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((l_1277[3][2] <= (func_68(l_1278, (**l_1278), ((((*g_171) = 1UL) , (l_1279[4] = (*l_1278))) == (func_68(l_1278, (safe_lshift_func_uint16_t_u_s((**g_587), 14)), l_1282, l_1283) , l_1284)), p_16) == p_14)) || l_1285) & 0xED74L), p_15)), 0x27L))), 0)), 3)) | 0x80101339L) , (*g_954))) , l_1286) || 0x759E09F4L) <= l_1287);
        (**l_1278) = 0x0315202DL;
    }
    (**l_1278) = 1L;
    for (g_312 = 0; (g_312 < 24); g_312 = safe_add_func_int16_t_s_s(g_312, 2))
    {
        int *l_1291 = &g_959;
        unsigned **l_1309 = &g_224;
        unsigned ***l_1308 = &l_1309;
        unsigned ****l_1307[7][4] = {{(void*)0, &l_1308, (void*)0, &l_1308}, {(void*)0, &l_1308, (void*)0, &l_1308}, {(void*)0, &l_1308, (void*)0, &l_1308}, {(void*)0, &l_1308, (void*)0, &l_1308}, {(void*)0, &l_1308, (void*)0, &l_1308}, {(void*)0, &l_1308, (void*)0, &l_1308}, {(void*)0, &l_1308, (void*)0, &l_1308}};
        short *l_1328[8] = {&g_110, (void*)0, &g_110, (void*)0, &g_110, (void*)0, &g_110, (void*)0};
        int i, j;
        for (g_320 = 0; (g_320 <= 5); g_320 += 1)
        {
            int ***l_1294 = (void*)0;
            int l_1295 = 0xAD8D24CFL;
            short l_1340 = 3L;
            int l_1346 = 0x822F5662L;
            char l_1347 = 0xEDL;
            (*l_1278) = (l_1290 , l_1291);

            ;
            for (g_133 = 0; (g_133 <= 0); g_133 += 1)
            {
                unsigned l_1300 = 0xA4A6D574L;
                int i, j;
            }
        }
    }

    ;
    for (g_110 = 0; (g_110 == (-21)); g_110 = safe_sub_func_int16_t_s_s(g_110, 8))
    {
        unsigned short l_1363 = 0x9817L;
        int l_1366 = (-4L);
        unsigned short ****l_1396 = (void*)0;
        unsigned short *****l_1395 = &l_1396;
        unsigned *l_1397 = &g_172;
        unsigned char l_1460 = 0xB2L;
        short **l_1462 = &g_954;
        unsigned l_1466 = 0xE76FC0B6L;
        char **l_1482 = &g_240;
        for (p_16 = 0; (p_16 > 19); p_16 = safe_add_func_uint8_t_u_u(p_16, 4))
        {
            int *l_1359 = &g_284;
            short l_1360 = 0xB488L;
            unsigned l_1370 = 4294967293UL;
            for (g_344 = 0; (g_344 == 30); g_344++)
            {
                int **l_1373[5] = {&g_1230, (void*)0, &g_1230, (void*)0, &g_1230};
                unsigned **l_1382[5][3][8] = {{{&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}}, {{&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}}, {{&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}}, {{&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}}, {{&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}, {&g_171, &g_224, &g_224, &g_224, (void*)0, (void*)0, &g_224, &g_224}}};
                unsigned ***l_1381 = &l_1382[3][1][4];
                int i, j, k;
                for (g_312 = 0; (g_312 != 18); g_312 = safe_add_func_int32_t_s_s(g_312, 3))
                {
                    int *l_1367 = &l_1366;
                    for (p_15 = 0; (p_15 <= 2); p_15 += 1)
                    {
                        int i, j;
                        (*l_1278) = l_1359;

                        ;
                        l_1360 = p_16;
                        (*l_1278) = (void*)0;

                        ;
                    }


                    for (l_1360 = 17; (l_1360 == (-2)); --l_1360)
                    {
                        return l_1363;


                    }
                    for (g_314 = 0; (g_314 >= (-13)); g_314 = safe_sub_func_int32_t_s_s(g_314, 1))
                    {
                        l_1366 = ((*l_1359) = p_16);
                    }
                    (*l_1278) = l_1367;

                    ;
                }
                for (g_312 = 22; (g_312 > (-23)); g_312--)
                {
                    int **l_1383 = (void*)0;
                    int l_1384 = (-4L);
                    if (l_1370)
                        break;
                    l_1366 = (func_20(((safe_lshift_func_uint8_t_u_u(func_68(func_73(l_1373[4], (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_1359) < (((-5L) || (safe_lshift_func_uint8_t_u_s((*l_1359), (*g_240)))) || (!p_15))) , ((l_1381 = g_1380) == (void*)0)), 0)), func_68((l_1383 = func_73(l_1383, (*g_638), (***g_1167), (**g_587))), p_16, l_1366, (*g_240)))), (**g_587), p_14), l_1384, (*g_224), p_14), 4)) <= (*l_1359)), l_1384, p_14, l_1384) > p_14);

                    ;
                }

                ;
            }
        }


        for (g_959 = 13; (g_959 > (-12)); --g_959)
        {
            int *l_1411 = &g_959;
            unsigned char **l_1416 = (void*)0;
            int l_1427 = (-1L);
            unsigned *l_1443 = &l_1430;
            unsigned short ***l_1475 = &g_587;
        }
        (*l_1278) = &l_1366;

        ;
    }


    return l_1495;
}







static unsigned func_20(int p_21, unsigned p_22, unsigned char p_23, unsigned p_24)
{
    unsigned short l_1265 = 0xD536L;
    (*g_1230) = (-8L);
    return l_1265;
}







static unsigned short func_30(char p_31, int p_32, char p_33)
{
    int *l_40 = &g_41[4];
    unsigned **l_295 = (void*)0;
    unsigned ***l_296 = &l_295;
    unsigned l_299 = 18446744073709551615UL;
    int l_1264 = 0x69011646L;
    l_40 = func_34((func_38(l_40) && func_63((((*l_296) = l_295) == (void*)0), ((safe_mod_func_uint32_t_u_u(l_299, p_31)) && p_33), (safe_add_func_uint32_t_u_u((*l_40), (*l_40))), p_33)), g_284, l_40);

    ;
    ;
    return l_1264;
}







static int * func_34(char p_35, unsigned p_36, int * p_37)
{
    short l_316 = 0x45E8L;
    int **l_326 = (void*)0;
    int l_426 = 0L;
    unsigned short l_444 = 0x3794L;
    int l_462 = 0xD9299BDAL;
    unsigned **l_482 = &g_224;
    unsigned ***l_481 = &l_482;
    int *l_484 = &g_41[1];
    char *l_525 = &g_133;
    int *l_537 = &g_43;
    unsigned l_606 = 4294967294UL;
    int l_607[4][9] = {{(-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L)}, {(-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L)}, {(-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L)}, {(-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L), 8L, (-4L)}};
    unsigned char ***l_639 = (void*)0;
    unsigned l_674 = 7UL;
    unsigned short ***l_685 = &g_587;
    int *l_692 = (void*)0;
    unsigned char **l_708 = (void*)0;
    int l_719 = (-1L);
    int *l_755[2][1];
    unsigned char l_788 = 0x01L;
    int l_806 = 0x8CAE3C12L;
    int *l_812 = &g_43;
    unsigned *l_837 = (void*)0;
    unsigned **l_836 = &l_837;
    int l_866 = 0x7A1D04C5L;
    int l_961 = 2L;
    int l_962 = 0xCDBFEBEAL;
    int *l_1000[6][8] = {{&g_44, &l_719, &l_719, &g_44, &l_719, (void*)0, &l_962, (void*)0}, {&g_44, &l_719, &l_719, &g_44, &l_719, (void*)0, &l_962, (void*)0}, {&g_44, &l_719, &l_719, &g_44, &l_719, (void*)0, &l_962, (void*)0}, {&g_44, &l_719, &l_719, &g_44, &l_719, (void*)0, &l_962, (void*)0}, {&g_44, &l_719, &l_719, &g_44, &l_719, (void*)0, &l_962, (void*)0}, {&g_44, &l_719, &l_719, &g_44, &l_719, (void*)0, &l_962, (void*)0}};
    char l_1053[3][7] = {{8L, 1L, (-1L), (-1L), 1L, 8L, 1L}, {8L, 1L, (-1L), (-1L), 1L, 8L, 1L}, {8L, 1L, (-1L), (-1L), 1L, 8L, 1L}};
    int *l_1160 = &g_41[4];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_755[i][j] = (void*)0;
    }
    for (g_110 = 0; (g_110 <= 2); g_110 += 1)
    {
        char ***l_308 = &g_239[1];
        int l_328 = (-1L);
        int **l_382 = (void*)0;
        int l_402 = 1L;
        unsigned char *l_410 = &g_320;
        unsigned **l_430 = &g_224;
        int ***l_522 = &l_382;
        short l_549 = (-1L);
        unsigned char l_573 = 0UL;
        short l_613[4][2][7] = {{{0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}, {0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}}, {{0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}, {0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}}, {{0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}, {0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}}, {{0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}, {0x7742L, 0x9E60L, 0L, 0x5776L, 0x9E60L, 0x6948L, 0x9E60L}}};
        char ***l_675 = &g_239[0];
        int l_679 = 0xA13BBF6BL;
        unsigned short ***l_686 = &g_587;
        int i, j, k;
    }
    return p_37;


}







static short func_38(int * p_39)
{
    int l_49 = (-1L);
    unsigned *l_99[5] = {&g_12, &g_12, &g_12, &g_12, &g_12};
    char l_101 = 0x10L;
    int l_125[10] = {(-5L), 0xC45F469FL, 0xDA1B12C1L, 0xDA1B12C1L, 0xC45F469FL, (-5L), 0xC45F469FL, 0xDA1B12C1L, 0xDA1B12C1L, 0xC45F469FL};
    char *l_193 = &g_133;
    char **l_192 = &l_193;
    unsigned char l_214 = 0UL;
    int l_215 = (-2L);
    int *l_233 = &g_44;
    int **l_232 = &l_233;
    char **l_242[9] = {&l_193, &g_240, &l_193, &g_240, &l_193, &g_240, &l_193, &g_240, &l_193};
    short *l_246 = (void*)0;
    unsigned l_283 = 0UL;
    int i;
    for (g_43 = 3; (g_43 >= 0); g_43 -= 1)
    {
        int *l_50 = &g_41[4];
        short l_180 = 0xA4FBL;
        char *l_185 = (void*)0;
        char **l_187 = (void*)0;
        for (g_44 = 4; (g_44 >= 0); g_44 -= 1)
        {
            volatile int *l_46 = &g_42;
            volatile int **l_45 = &l_46;
            int l_153 = 0x5F142755L;
            unsigned char l_181 = 0xD4L;
            char *l_184 = &g_133;
            int i;
            (*l_45) = (g_41[g_44] , &g_42);
            (*l_46) = (safe_rshift_func_uint8_t_u_s(l_49, 6));
            if ((l_50 == (void*)0))
            {
                int *l_55 = &l_49;
                int l_118 = 1L;
                unsigned l_150 = 2UL;
                char *l_151 = (void*)0;
                char *l_152[9][9] = {{&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}, {&g_133, &g_133, &l_101, (void*)0, (void*)0, &l_101, &g_133, &g_133, &l_101}};
                char l_174 = 1L;
                int i, j;
                for (l_49 = 24; (l_49 >= (-10)); l_49 = safe_sub_func_int8_t_s_s(l_49, 5))
                {
                    int l_60 = (-1L);
                }
                for (l_101 = 2; (l_101 >= 0); l_101 -= 1)
                {
                    unsigned short l_141[7][3] = {{0x3012L, 65530UL, 4UL}, {0x3012L, 65530UL, 4UL}, {0x3012L, 65530UL, 4UL}, {0x3012L, 65530UL, 4UL}, {0x3012L, 65530UL, 4UL}, {0x3012L, 65530UL, 4UL}, {0x3012L, 65530UL, 4UL}};
                    int i, j;
                    (*l_55) = (*p_39);
                    for (g_110 = 2; (g_110 >= 0); g_110 -= 1)
                    {
                        return l_101;
                    }
                    for (g_110 = 0; (g_110 <= 2); g_110 += 1)
                    {
                        int **l_126 = (void*)0;
                        int **l_127 = &l_55;
                        char *l_132 = &g_133;
                        int l_136[8][10][3] = {{{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}, {{0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}, {0x4BB3B6D2L, 0x774EDE3BL, (-1L)}}};
                        int i, j, k;
                        (*l_127) = p_39;

                        ;
                        (*l_46) = ((g_41[g_44] = (safe_sub_func_int8_t_s_s(0L, (safe_rshift_func_uint8_t_u_s(func_63(((*l_132) = (**l_127)), (*l_46), l_125[2], ((g_41[g_44] < ((*p_39) | ((((safe_sub_func_int8_t_s_s(l_136[6][9][0], (l_49 = (safe_sub_func_uint32_t_u_u((g_41[g_44] <= (safe_mod_func_uint16_t_u_u(g_41[4], l_141[6][1]))), 0L))))) != 0x32BAL) <= (*p_39)) , 0x9C871B15L))) || 1UL)), (*l_50)))))) ^ g_12);
                        (**l_127) = (l_141[6][1] | ((g_42 > (*l_50)) | ((safe_rshift_func_int16_t_s_s(g_110, 11)) & ((*l_50) != l_101))));
                    }
                }

                ;
                (*l_55) = (+((safe_mod_func_uint32_t_u_u(((*l_55) && (safe_add_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(l_125[0], func_68((g_123 = g_123), l_150, (((*l_55) | (l_153 = 0xA9L)) & (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(g_86[2][3], l_125[0])), (*l_50))), g_41[4]))), g_86[2][3]))) <= (*p_39)), g_86[2][3]))), g_43)) != 0UL));
                for (l_101 = 6; (l_101 >= 0); l_101 -= 1)
                {
                    int l_168 = 0x70DA0356L;
                    unsigned **l_173 = &g_171;
                    int l_179 = 0x4541D115L;
                    (*l_55) = ((safe_mod_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x345BFC95L, ((((l_168 = g_43) < (g_133 = (g_169[1] == ((*l_173) = g_171)))) , (*l_50)) , l_174))), (safe_div_func_int32_t_s_s(0x218DAE91L, (safe_lshift_func_int16_t_s_s(func_68(g_123, (g_41[3] , l_179), (*l_46), g_41[4]), 13)))))) < 65526UL) , (*g_171)), l_180)) != g_44) ^ (*p_39)) , l_179), (*l_50))) || l_181);
                    (*l_50) = l_125[0];
                }
            }
            else
            {
                char **l_186 = &l_185;
                char ***l_188 = (void*)0;
                char ***l_189 = &l_187;
                char **l_191 = &l_184;
                char ***l_190 = &l_191;
                char ***l_194 = &l_192;
                int l_197 = 2L;
                unsigned short *l_200 = &g_201;
                int l_206 = 0xE75AC6F2L;
                (*l_46) = (safe_mod_func_int16_t_s_s(((l_184 != ((*l_186) = l_185)) | (((*l_190) = ((*l_189) = l_187)) != ((*l_194) = l_192))), (safe_rshift_func_uint8_t_u_s((l_197 || (l_197 = ((safe_add_func_uint16_t_u_u(((*l_200) = ((void*)0 == &p_39)), (safe_lshift_func_int16_t_s_u(g_43, 9)))) > (safe_sub_func_uint8_t_u_u((g_41[4] <= g_41[3]), l_197))))), l_206))));

                ;
                if (g_41[4])
                    continue;
            }
            if (g_86[0][1])
                break;
        }
    }
    if (((safe_add_func_uint16_t_u_u(l_125[4], (safe_add_func_uint16_t_u_u((g_44 == g_211), (safe_div_func_uint16_t_u_u((func_68(func_73(&p_39, l_125[1], (l_214 != func_68(g_123, func_63(l_49, (l_101 | 250UL), g_41[4], l_125[2]), l_101, g_106[7])), g_211), (*g_171), (*g_171), l_125[0]) & l_125[0]), l_215)))))) , 0x589615D4L))
    {
        unsigned short l_220[9][4][2] = {{{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}, {{0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}, {0UL, 0xFCE4L}}};
        unsigned **l_221 = &g_171;
        unsigned *l_223 = &g_172;
        unsigned **l_222[8];
        int *l_231[9];
        int **l_230 = &l_231[3];
        short *l_247 = &g_110;
        short l_272 = 0x0DEFL;
        int *l_276 = &l_49;
        unsigned ***l_289 = &l_222[0];
        unsigned char *l_294[4][2];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_222[i] = &l_223;
        for (i = 0; i < 9; i++)
            l_231[i] = &l_125[0];
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_294[i][j] = &l_214;
        }
        (*p_39) = (((&g_110 == (void*)0) , (((safe_sub_func_uint32_t_u_u(((((void*)0 != l_99[0]) >= ((safe_mod_func_int8_t_s_s((l_220[7][3][0] > (func_63(func_68(&p_39, (((!l_101) , ((*l_221) = p_39)) == (g_224 = l_99[1])), l_220[7][3][0], l_220[3][1][1]), l_214, g_172, (*p_39)) | l_220[2][0][1])), g_201)) , l_220[7][3][0])) != 1L), 0x1033DE3EL)) , g_225) != (void*)0)) ^ l_214);

        ;
        ;
        for (g_211 = 8; (g_211 >= 3); g_211 -= 1)
        {
            unsigned short l_234 = 0UL;
            short *l_241 = &g_110;
            int *l_244 = &l_125[0];
            unsigned char l_270 = 0x3EL;
            for (g_172 = 0; (g_172 <= 9); g_172 += 1)
            {
                int *l_229 = &g_43;
                int **l_228 = &l_229;
                int i;
                (*l_228) = (void*)0;

                ;
                (*l_228) = &g_43;

                ;
                (**l_228) = ((l_230 != l_232) && ((*l_229) || ((**l_230) = ((l_234 | ((*l_233) , (*p_39))) <= (((&g_110 == &g_211) && func_63((**l_228), (*l_229), l_234, (*p_39))) || (**l_232))))));
            }
        }
        (*l_230) = (((**l_232) = ((safe_add_func_uint16_t_u_u((((*l_289) = &g_171) != &g_169[1]), ((*p_39) & (*g_245)))) , func_63(((**l_232) = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((&l_214 == l_294[2][1]) , ((void*)0 == l_294[0][1])), 13)), (*l_233)))), g_41[4], g_41[2], (*p_39)))) , (void*)0);



        (*g_245) = (**l_232);
    }
    else
    {
        return g_211;
    }

    ;
    ;
    return g_172;
}







static int func_63(char p_64, int p_65, short p_66, int p_67)
{
    int *l_102 = &g_44;
    int **l_103 = &l_102;
    (*l_103) = l_102;
    return g_44;
}







static char func_68(int ** p_69, unsigned p_70, unsigned p_71, char p_72)
{
    return g_43;
}







static int ** func_73(int ** p_74, unsigned char p_75, unsigned short p_76, unsigned short p_77)
{
    int *l_100 = &g_41[2];
    l_100 = &g_41[4];
    (*l_100) = (p_76 && g_43);
    return p_74;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_41[i], "g_41[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_86[i][j], "g_86[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_452[i], "g_452[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_493[i][j][k], "g_493[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_526, "g_526", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_723[i][j][k], "g_723[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_982[i], "g_982[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1410, "g_1410", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
