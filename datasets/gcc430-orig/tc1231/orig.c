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
   volatile unsigned char f0;
   int f1;
   volatile char f2;
   unsigned f3;
   volatile unsigned f4;
};


static volatile unsigned g_12 = 0UL;
static unsigned short g_13 = 0xC7AFL;
static int g_36 = 0L;
static unsigned g_39[3][7] = {{4294967295UL, 0xD6CAD8E6L, 4294967295UL, 0xD6CAD8E6L, 4294967295UL, 0xD6CAD8E6L, 4294967295UL}, {4294967295UL, 0xD6CAD8E6L, 4294967295UL, 0xD6CAD8E6L, 4294967295UL, 0xD6CAD8E6L, 4294967295UL}, {4294967295UL, 0xD6CAD8E6L, 4294967295UL, 0xD6CAD8E6L, 4294967295UL, 0xD6CAD8E6L, 4294967295UL}};
static int g_40 = 0xDC705BE7L;
static int g_41 = 0xE2E0F619L;
static short g_85 = 0x25F3L;
static unsigned g_110 = 5UL;
static unsigned short g_145[2] = {0UL, 0UL};
static unsigned char g_176 = 0x5BL;
static unsigned char g_197 = 0x69L;
static char g_217 = 0x80L;
static unsigned char g_277 = 255UL;
static int g_311 = 0x50122098L;
static int g_353 = 3L;
static unsigned g_407 = 4294967295UL;
static char g_422 = 0x4DL;
static unsigned g_511 = 0x07622CB6L;
static unsigned char g_574 = 0xEAL;
static unsigned g_675 = 0x764EA9A2L;
static unsigned char g_743 = 0x9AL;
static unsigned short g_814 = 0xAB7FL;
static unsigned g_852[4][3][8] = {{{3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}}, {{3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}}, {{3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}}, {{3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}, {3UL, 0UL, 0xDC6FC2EFL, 4UL, 0xC8948D59L, 4294967286UL, 0xC8948D59L, 4UL}}};
static int g_859 = (-1L);
static char g_874 = 7L;
static unsigned short g_878[7] = {0xEF69L, 3UL, 0xEF69L, 3UL, 0xEF69L, 3UL, 0xEF69L};
static unsigned short g_884 = 0x8829L;
static unsigned g_885[9][2] = {{0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}, {0x682B87A2L, 0xEE347F73L}};
static short g_888 = 3L;
static int g_966[6] = {1L, 1L, (-1L), 1L, 1L, (-1L)};
static char g_973 = 0x68L;
static char g_1024 = 0x41L;
static unsigned char g_1248[4] = {4UL, 4UL, 4UL, 4UL};
static unsigned g_1510 = 1UL;
static short g_1511 = 0xF8D5L;
static int g_1591[2][8] = {{0x0847C77BL, 0x0847C77BL, 0xEE2537CAL, 1L, 0xB018DEC2L, 1L, 0xEE2537CAL, 0x0847C77BL}, {0x0847C77BL, 0x0847C77BL, 0xEE2537CAL, 1L, 0xB018DEC2L, 1L, 0xEE2537CAL, 0x0847C77BL}};
static int g_1600[5][8] = {{6L, (-1L), 0xFDBD69E9L, 0xCB5917C7L, (-1L), 0xCB5917C7L, 0xFDBD69E9L, (-1L)}, {6L, (-1L), 0xFDBD69E9L, 0xCB5917C7L, (-1L), 0xCB5917C7L, 0xFDBD69E9L, (-1L)}, {6L, (-1L), 0xFDBD69E9L, 0xCB5917C7L, (-1L), 0xCB5917C7L, 0xFDBD69E9L, (-1L)}, {6L, (-1L), 0xFDBD69E9L, 0xCB5917C7L, (-1L), 0xCB5917C7L, 0xFDBD69E9L, (-1L)}, {6L, (-1L), 0xFDBD69E9L, 0xCB5917C7L, (-1L), 0xCB5917C7L, 0xFDBD69E9L, (-1L)}};
static int g_1612 = 0L;
static char g_1671 = 0x21L;
static int g_1711 = 2L;
static int g_1992 = 0xEDF3F9DBL;
static unsigned g_2075[9][1][7] = {{{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}, {{1UL, 0x1FFB7691L, 0UL, 4294967286UL, 4294967292UL, 0x9D0FE493L, 1UL}}};
static int g_2170 = 1L;
static unsigned g_2181 = 2UL;
static int g_2328[5] = {0x132D7464L, 0x132D7464L, 0x132D7464L, 0x132D7464L, 0x132D7464L};
static short g_2346[4][10][3] = {{{1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}}, {{1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}}, {{1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}}, {{1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}, {1L, 0x9CD4L, 1L}}};
static char g_2404 = 0x36L;
static volatile union U0 g_2456 = {2UL};
static volatile union U0 g_2525 = {0xFFL};
static union U0 g_2545 = {5UL};
static union U0 g_2548 = {247UL};
static unsigned short g_2561 = 1UL;
static union U0 g_2583 = {0x0CL};
static union U0 g_2591 = {251UL};
static union U0 g_2592 = {1UL};
static unsigned char g_2612 = 0x2FL;
static int g_2623 = 3L;
static union U0 g_2626 = {0UL};
static int g_2647 = 0x083DDCC0L;
static volatile union U0 g_2648 = {0x6EL};
static union U0 g_2658[5][4] = {{{0x2CL}, {0UL}, {248UL}, {0UL}}, {{0x2CL}, {0UL}, {248UL}, {0UL}}, {{0x2CL}, {0UL}, {248UL}, {0UL}}, {{0x2CL}, {0UL}, {248UL}, {0UL}}, {{0x2CL}, {0UL}, {248UL}, {0UL}}};
static volatile union U0 g_2698 = {0UL};
static union U0 g_2737 = {0xD5L};
static int g_2920 = 0x87DCAFD5L;
static union U0 g_2921 = {0x91L};
static union U0 g_2938 = {9UL};



static unsigned short func_1(void);
static union U0 func_8(unsigned short p_9, int p_10, unsigned char p_11);
static short func_19(unsigned p_20, unsigned p_21, int p_22);
static unsigned func_23(unsigned p_24, short p_25, int p_26, unsigned short p_27, char p_28);
static int func_30(char p_31);
static short func_48(unsigned char p_49);
static unsigned func_54(int p_55);
static unsigned char func_58(unsigned char p_59, unsigned p_60, unsigned p_61, int p_62, unsigned short p_63);
static unsigned char func_68(unsigned p_69);
static int func_79(int p_80, unsigned p_81, unsigned p_82);
static unsigned short func_1(void)
{
    unsigned char l_14 = 0xDBL;
    int l_29 = 0x6728AD64L;
    int l_2441 = 0x76ACF38AL;
    g_1600[1][7] = (+(safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((func_8((l_14 = ((g_12 & g_13) , 0xF8B5L)), ((((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_29 = (g_13 >= ((((g_2346[0][0][0] = ((func_19(func_23(g_13, (0x8722L <= ((g_13 < ((-1L) <= (g_13 <= (-4L)))) < 0xFBL)), g_13, g_13, l_29), l_29, l_29) > g_2404) & g_2346[1][3][2])) && 8L) <= g_13) >= 1UL))), l_2441)), 0xFA6D3935L)) >= g_2404) ^ l_2441) <= g_2328[3]), l_2441) , l_29), g_1992)), 65534UL)), g_2181)));
    l_29 = l_29;
    g_2583.f1 = ((safe_rshift_func_int16_t_s_s(g_85, 12)) || g_852[3][2][0]);
    return g_36;
}







static union U0 func_8(unsigned short p_9, int p_10, unsigned char p_11)
{
    short l_2449 = 0xD7A0L;
    short l_2494[6] = {0x22E1L, 0x22E1L, 0x694AL, 0x22E1L, 0x22E1L, 0x694AL};
    int l_2518 = (-5L);
    unsigned char l_2522 = 255UL;
    int l_2589[9];
    unsigned l_2637 = 1UL;
    short l_2699 = (-1L);
    unsigned short l_2726 = 65535UL;
    unsigned short l_2806 = 1UL;
    unsigned char l_2876 = 254UL;
    char l_2899 = 6L;
    unsigned char l_2932 = 253UL;
    int l_2935 = 6L;
    int l_2936 = 0xE945F99EL;
    int l_2937 = 0xB868E2F5L;
    int i;
    for (i = 0; i < 9; i++)
        l_2589[i] = 0xD076DD8AL;
    for (g_422 = 23; (g_422 >= 16); g_422--)
    {
        char l_2465 = 0x55L;
        int l_2466[3];
        int l_2576 = (-9L);
        unsigned l_2618 = 0x5B3F66E2L;
        int l_2711 = 1L;
        short l_2779 = 0xE2EAL;
        char l_2784 = 0x9AL;
        int l_2919 = (-10L);
        int i;
        for (i = 0; i < 3; i++)
            l_2466[i] = 0x9EFF3905L;
        for (g_574 = 0; (g_574 <= 41); g_574 = safe_add_func_uint8_t_u_u(g_574, 6))
        {
            unsigned short l_2446[1][9][6] = {{{65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}, {65530UL, 0x5FE4L, 2UL, 0x567AL, 0UL, 0x567AL}}};
            int l_2467[8][9] = {{0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}, {0x987F128BL, 0x81E12C52L, 0x841D1CBCL, 0x611D0BB0L, 0x265DB02CL, 0x20F826B8L, 0x265DB02CL, 0x611D0BB0L, 0x841D1CBCL}};
            unsigned l_2566[8] = {0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL};
            int i, j, k;
            for (g_2404 = 0; g_2404 < 7; g_2404 += 1)
            {
                g_878[g_2404] = 0xD53AL;
            }
            if (l_2446[0][8][5])
            {
                unsigned short l_2463 = 0xB864L;
                int l_2464 = 0x05C527E4L;
                l_2467[7][2] = (safe_rshift_func_uint8_t_u_s((p_10 & func_58(l_2449, ((((l_2465 = ((safe_sub_func_int16_t_s_s(1L, ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((g_2456 , (g_743 = ((+(((g_197 , (p_11 && (safe_add_func_uint8_t_u_u((p_11 = (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((l_2463 > p_10) >= (l_2464 = ((l_2463 <= p_11) != g_2346[1][3][2]))), l_2449)), p_11))), p_9)))) & 1L) , 0x91L)) , g_2404))), l_2449)), p_10)) ^ g_1024))) > l_2449)) & 0xB2C344D8L) , g_966[5]) >= l_2466[1]), l_2463, l_2446[0][8][5], l_2446[0][8][5])), g_814));
            }
            else
            {
                unsigned l_2471 = 0x60628700L;
                int l_2493 = 1L;
                int l_2495 = (-1L);
                for (g_41 = 0; (g_41 > 0); ++g_41)
                {
                    int l_2470 = (-5L);
                    unsigned char l_2490 = 0x0EL;
                    l_2471 = l_2470;
                    g_1600[1][7] |= (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_878[1], (l_2495 ^= func_79((safe_div_func_uint32_t_u_u(((p_9 <= (g_878[6] , (l_2494[4] |= (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_2467[2][4] = (g_277 < (safe_sub_func_uint8_t_u_u((p_11 = ((((safe_sub_func_uint32_t_u_u(((((+(safe_mod_func_uint16_t_u_u(((p_11 , (((safe_lshift_func_uint8_t_u_u(func_79(l_2490, (safe_rshift_func_uint16_t_u_u(1UL, p_11)), (l_2493 >= g_277)), l_2446[0][8][5])) || 0x439DL) , g_852[1][1][3])) & p_10), l_2490))) < g_1612) , g_2181) <= (-1L)), 0x61B5E848L)) , l_2449) ^ p_11) <= l_2449)), l_2493)))), g_1024)), p_10))))) < 0xDFL), 3L)), g_1591[0][2], g_41)))), 2L));
                }
                g_36 ^= (safe_rshift_func_int16_t_s_u(((p_10 , p_10) > ((((1L < g_2328[3]) != ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((p_11 < l_2446[0][4][2]), (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_9 ^= (safe_div_func_int32_t_s_s(g_311, p_11))), (safe_div_func_int32_t_s_s((!((safe_rshift_func_uint8_t_u_s((((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((l_2518 = l_2494[4]), 6UL)) & 0x57C69CC3L) < g_1591[0][7]), 0x7763L)), g_2328[3])) , l_2446[0][2][2]) != 0xB244587BL), g_407)) , l_2449)), g_1591[1][5])))), g_2075[8][0][4])))), l_2446[0][4][5])) , 0xDDL)) & p_10) , 0xEBL)), g_145[0]));
            }
            if (l_2494[3])
            {
                char l_2519 = 0xE6L;
                l_2519 = p_9;
                l_2522 = (safe_sub_func_int16_t_s_s(((0x5CFAFCEBL == l_2466[1]) , p_9), ((!l_2446[0][1][0]) | (p_11 | (func_79(l_2494[2], p_11, l_2519) || l_2518)))));
            }
            else
            {
                unsigned short l_2536 = 0xCF16L;
                unsigned short l_2565 = 65533UL;
                for (g_1671 = (-3); (g_1671 != (-2)); g_1671 = safe_add_func_int32_t_s_s(g_1671, 4))
                {
                    char l_2564 = (-8L);
                    for (g_888 = 1; (g_888 >= 0); g_888 -= 1)
                    {
                        int i, j;
                        g_353 = (((g_2525 , (safe_sub_func_int32_t_s_s(l_2466[g_888], (l_2467[0][4] |= (safe_sub_func_uint16_t_u_u((g_39[(g_888 + 1)][(g_888 + 1)] , g_39[g_888][(g_888 + 5)]), (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(l_2466[g_888], ((((g_743 = (((safe_sub_func_uint16_t_u_u(l_2536, (safe_rshift_func_int8_t_s_s(p_10, 2)))) | func_58((safe_mod_func_int8_t_s_s(p_9, l_2466[0])), l_2536, l_2446[0][8][5], g_878[3], p_9)) , 254UL)) ^ l_2446[0][8][5]) & g_1600[0][2]) <= l_2449))) | 0xC7A9L), 0L)))))))) < p_9) ^ 0x2AL);
                        g_40 &= ((0x18FE3E15L < (safe_sub_func_uint16_t_u_u((p_9 , (safe_div_func_int8_t_s_s(func_79(((g_2545 , ((l_2494[4] , (g_39[g_888][(g_888 + 5)] || l_2466[1])) & func_79(l_2536, (0x1F65E95DL ^ g_1600[1][7]), l_2522))) , (-10L)), g_2075[8][0][4], g_874), (-1L)))), g_888))) , 0xECC3B1FEL);
                    }
                    if (l_2536)
                        continue;
                    for (g_85 = (-18); (g_85 != (-30)); g_85--)
                    {
                        return g_2548;
                    }
                    g_1600[0][6] = ((((safe_add_func_uint16_t_u_u(0xDE8CL, (safe_rshift_func_uint16_t_u_s(((func_79((((g_1600[1][4] <= ((func_79(((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(((l_2518 = g_2328[1]) , func_79(func_58(((safe_add_func_int32_t_s_s((+(((((safe_div_func_int32_t_s_s((l_2467[2][5] = g_2561), g_966[0])) , ((safe_add_func_uint16_t_u_u(0x2693L, (g_885[5][1] >= 65526UL))) || l_2536)) , 0x3086L) && 0x1D7CL) > 0L)), 0xCC821BA2L)) >= g_1612), p_11, l_2465, l_2466[1], l_2564), l_2466[1], l_2564)), 0x0E85L)) , 0xDDL), g_852[1][1][3])) & l_2565), l_2566[1], l_2446[0][5][4]) & l_2565) != 0xAE37L)) , p_9) & g_1591[1][6]), g_1671, g_859) ^ p_10) & 0L), 0)))) && g_145[0]) , 0UL) && l_2446[0][5][1]);
                }
                if (g_145[1])
                    continue;
                l_2467[7][2] |= 0x163EA5DDL;
            }
        }
        for (g_1511 = (-19); (g_1511 >= (-27)); g_1511 = safe_sub_func_uint16_t_u_u(g_1511, 1))
        {
            unsigned char l_2580 = 3UL;
            int l_2590 = 0xCD48547EL;
            if ((func_58(g_859, (safe_unary_minus_func_uint8_t_u(l_2449)), (g_852[1][1][3] = 0x28AAAB18L), (safe_sub_func_uint8_t_u_u(0x7BL, ((((l_2576 = ((safe_lshift_func_uint16_t_u_s(((g_884 & func_79(func_58(p_9, (g_407 & 0xA86056F9L), ((safe_div_func_uint32_t_u_u(g_145[0], g_85)) >= (-6L)), p_9, g_2170), p_9, g_2404)) || 2UL), p_9)) , 0x69BFL)) == l_2466[1]) <= p_9) < p_9))), p_11) , p_9))
            {
                short l_2577 = 0x4D47L;
                l_2577 ^= 0x872D5ECBL;
            }
            else
            {
                for (g_1024 = 2; (g_1024 >= 0); g_1024 -= 1)
                {
                    unsigned l_2588 = 0xB8F37996L;
                    int i, j, k;
                    l_2590 = (safe_mod_func_uint16_t_u_u(((l_2580 |= g_2346[(g_1024 + 1)][(g_1024 + 1)][g_1024]) < (g_888 = (~((g_966[(g_1024 + 1)] >= 0UL) <= (g_966[(g_1024 + 3)] , ((g_966[(g_1024 + 1)] == (func_79(g_852[g_1024][g_1024][g_1024], (g_2548 , (g_2583 , (!(safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((g_878[6] > g_2404), p_10)) >= p_9), 0xC7A41F3BL))))), l_2588) & p_10)) < g_885[5][1])))))), l_2589[3]));
                    for (g_884 = 0; (g_884 <= 0); g_884 += 1)
                    {
                        int i, j, k;
                        g_2456.f1 = g_2075[(g_1024 + 1)][g_884][(g_884 + 6)];
                        return g_2591;
                    }
                    return g_2548;
                }
                return g_2592;
            }
            for (g_36 = 0; (g_36 <= 5); g_36 += 1)
            {
                char l_2599 = 0x16L;
                g_2170 = (safe_add_func_int32_t_s_s((1UL != p_11), l_2449));
                if (g_1992)
                    continue;
                g_2612 &= ((safe_div_func_uint32_t_u_u(g_277, ((((safe_sub_func_uint16_t_u_u((func_79(l_2599, g_41, (safe_rshift_func_uint16_t_u_u((g_2561 ^= (((((safe_rshift_func_int8_t_s_s(0x3DL, (l_2599 ^ ((safe_mod_func_int8_t_s_s(p_10, (((((p_10 & func_58(((safe_add_func_uint16_t_u_u(65535UL, (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((l_2466[1] > 0x7BB2L), (-3L))), l_2599)))) || l_2599), l_2580, l_2466[1], p_10, l_2599)) , 0x6CL) , l_2589[3]) <= g_2548.f2) , 0x62L))) || p_11)))) == (-6L)) == 0xA3B9L) | l_2522) > l_2518)), 15))) && g_2404), l_2465)) || p_11) == p_9) && g_2525.f2))) != g_852[2][0][0]);
            }
            g_1600[1][1] = (p_9 == (((l_2449 && (l_2590 <= 0x7689L)) > 1UL) , l_2576));
        }
        if ((p_10 <= g_2545.f0))
        {
            int l_2613 = 0L;
            l_2613 = (-4L);
        }
        else
        {
            short l_2614 = 1L;
            int l_2625 = (-1L);
            char l_2665 = 4L;
            int l_2666 = (-1L);
            g_1711 = (l_2522 <= 6UL);
            if ((l_2614 , l_2576))
            {
                int l_2624 = 0xF8F40D07L;
                int l_2673[10][9][2] = {{{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}, {{1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}, {1L, 0x71FDA660L}}};
                int i, j, k;
                for (g_407 = 0; (g_407 != 11); g_407++)
                {
                    unsigned char l_2617 = 0x34L;
                    if (func_58((((p_9 == (((l_2465 > (g_2525.f2 || (l_2522 <= ((func_58(g_277, l_2617, l_2618, g_2591.f2, ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_2612, 7)), g_888)) | (-4L))) < p_11) != g_2623)))) , 0x3537B517L) , p_9)) | l_2624) & g_2612), l_2522, g_217, g_353, p_9))
                    {
                        unsigned short l_2638 = 65535UL;
                        int l_2653 = 0x9EE5190CL;
                        l_2625 &= (p_10 , 0x6CBB98E9L);
                        g_2545.f1 = (g_2626 , (((safe_rshift_func_uint8_t_u_u((p_11 |= l_2494[4]), (((safe_rshift_func_uint16_t_u_u(p_10, g_1992)) ^ (safe_rshift_func_uint16_t_u_s(func_58(((safe_mod_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u(l_2466[1], 2)) <= g_2626.f2) | g_885[5][1]) | (l_2637 , ((65535UL < p_9) || 0xF2207F79L))), g_852[1][1][3])) , g_407), l_2638, l_2637, p_9, p_10), 12))) || 0x4DL))) <= g_407) || g_12));
                        g_2456.f1 = (safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(0xDE18L, ((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_2612, 1L)), (+((func_58(g_2647, ((g_2648 , (g_2545.f4 | (safe_rshift_func_int8_t_s_s((l_2625 ^= (l_2653 = (g_1671 = (safe_lshift_func_uint16_t_u_s(p_10, ((-3L) || (((l_2638 == g_176) , p_11) , 0UL))))))), 6)))) , g_407), g_1248[2], l_2624, l_2624) & (-6L)) ^ l_2638)))) , l_2653))) == p_10), 4294967295UL));
                        l_2653 ^= l_2638;
                    }
                    else
                    {
                        l_2576 = g_2591.f2;
                    }
                    g_2545.f1 = (((safe_sub_func_uint32_t_u_u(((l_2666 |= ((safe_rshift_func_uint8_t_u_s((func_79(l_2625, p_9, (g_2658[1][3] , (func_79(p_10, l_2624, ((g_1671 = (safe_div_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(l_2466[2], (p_10 <= (l_2665 >= ((0x2AA5L <= p_11) >= 0xF04BL))))) , 4294967289UL) || l_2618), p_11))) | 0x5BL)) == g_422))) & l_2624), p_10)) ^ p_10)) < p_11), p_10)) , g_2612) | l_2617);
                    l_2625 = (safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_2545.f3, 2)), func_79(g_1992, (l_2624 = (((p_9 = 0UL) | l_2614) == l_2625)), l_2673[3][8][1]))), func_58(l_2625, (p_10 , l_2494[4]), g_1511, g_2545.f2, l_2614)));
                    if (p_11)
                        break;
                }
                l_2673[6][2][0] = (l_2576 = g_2658[1][3].f0);
                g_1600[1][7] &= (l_2589[3] = (l_2625 |= (l_2673[3][8][1] & (safe_add_func_int32_t_s_s((-1L), (((l_2576 <= (g_2346[3][2][0] | g_2456.f2)) && g_39[0][2]) , (((g_39[0][4] , p_11) <= (safe_div_func_uint32_t_u_u(1UL, g_2181))) , l_2665)))))));
            }
            else
            {
                char l_2700[8] = {(-1L), 0x1BL, (-1L), 0x1BL, (-1L), 0x1BL, (-1L), 0x1BL};
                int i;
                l_2518 &= (safe_rshift_func_int8_t_s_s((((((l_2589[3] = (safe_lshift_func_uint16_t_u_s(p_11, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(0xA96A4AF1L, g_1511)) < (((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_1591[1][7], (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(0xB9L, (g_2698 , 6UL))), 1)))), p_10)) == ((l_2494[1] ^ 0x4ECB2DECL) >= 0x8D86L)), p_10)) == g_2346[1][5][0]) > p_10)), l_2699)), g_407))))) , p_9) & g_2170) | p_9) <= l_2700[0]), g_574));
            }
            if (g_2075[7][0][1])
                break;
        }
        if (p_11)
        {
            unsigned l_2712 = 4294967287UL;
            int l_2725 = 8L;
            int l_2748 = (-9L);
            unsigned short l_2765[7] = {0xAD8CL, 65535UL, 0xAD8CL, 65535UL, 0xAD8CL, 65535UL, 0xAD8CL};
            int l_2862[9][7] = {{1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}, {1L, 1L, 0x94A6EC78L, 0x8F2E103AL, 4L, 0xCE0FD16BL, 0L}};
            int i, j;
            if ((safe_mod_func_uint32_t_u_u(p_11, func_79((g_859 = (((safe_add_func_uint16_t_u_u(g_574, ((~((func_79((safe_mod_func_uint16_t_u_u(func_79(func_79(g_2591.f0, (l_2711 |= (safe_rshift_func_uint8_t_u_u((((func_79(l_2494[4], (((-5L) >= func_58(((safe_sub_func_uint32_t_u_u((!0x3697E171L), (func_58(p_9, g_1248[2], l_2465, l_2576, g_197) != (-7L)))) && p_10), p_9, g_1612, g_814, g_2075[5][0][4])) , 4294967295UL), l_2466[1]) | p_11) && l_2637) || l_2466[1]), g_885[3][0]))), p_11), p_10, g_277), g_966[4])), p_10, l_2466[0]) != l_2712) < g_39[2][6])) >= 0xE17DD59EL))) & l_2712) && l_2589[8])), l_2712, g_2647))))
            {
                short l_2733 = 0x030EL;
                int l_2736 = 0x04404CF5L;
                int l_2795[5] = {(-8L), 2L, (-8L), 2L, (-8L)};
                short l_2807[6][5][4] = {{{0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}}, {{0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}}, {{0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}}, {{0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}}, {{0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}}, {{0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}, {0x2F6BL, 0L, 0x790AL, 1L}}};
                char l_2877 = 0L;
                int i, j, k;
                l_2725 ^= (+(g_2545.f0 , ((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((0x9312FBD8L | (safe_lshift_func_int16_t_s_s((p_9 , g_878[0]), 3))), p_11)), (g_2456.f2 , (g_852[1][1][3] <= (((safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(l_2449, (safe_div_func_int32_t_s_s(g_1248[2], p_10)))), g_1591[1][2])) < g_884) ^ g_2404))))) , g_2548.f0)));
                l_2576 = (((p_10 , (l_2726 , ((g_2328[3] && ((g_884 &= (safe_div_func_uint32_t_u_u(p_11, l_2725))) >= ((g_36 = p_10) , (safe_sub_func_int16_t_s_s(l_2494[4], (!l_2733)))))) == 0x1DL))) != 1UL) == p_11);
                for (g_2626.f3 = 0; (g_2626.f3 <= 22); g_2626.f3 = safe_add_func_int16_t_s_s(g_2626.f3, 1))
                {
                    unsigned l_2750 = 0x94422981L;
                    int l_2757 = (-6L);
                    for (g_85 = 1; (g_85 >= 0); g_85 -= 1)
                    {
                        int i;
                        if (g_145[g_85])
                            break;
                        l_2736 = 0xF1BE4320L;
                        if (p_10)
                            break;
                        l_2576 = ((g_2737 , 7UL) , 0x0ACF09C1L);
                    }
                    for (g_1510 = 0; (g_1510 > 53); g_1510++)
                    {
                        unsigned l_2749[4] = {0x9CE4C498L, 0xD3598B09L, 0x9CE4C498L, 0xD3598B09L};
                        int l_2758 = 0x15AF14B1L;
                        int i;
                        l_2749[3] = ((safe_mod_func_int8_t_s_s((l_2466[1] < (safe_lshift_func_int16_t_s_u(func_58(((g_2456.f2 | p_10) >= (safe_lshift_func_uint8_t_u_u(((-1L) && (-5L)), 0))), g_2328[4], ((safe_lshift_func_int16_t_s_s((((((((g_888 = (l_2725 |= p_9)) != (0x9B9EL < ((((l_2637 && g_511) , g_353) < 0x595BA468L) < 0x5AL))) == 8L) , l_2699) || 65533UL) | 0L) ^ g_407), 15)) , g_1612), l_2736, l_2748), 5))), p_11)) > g_422);
                        g_40 ^= ((((l_2750 = ((0x8AC86F73L >= g_2525.f2) > 1UL)) , 0xBEEBL) || ((safe_lshift_func_int8_t_s_u((l_2758 = ((g_878[6] ^= (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(func_79(p_11, p_10, l_2733), (l_2576 = (((g_2626.f2 != l_2757) , g_311) ^ 4L)))), g_2626.f1))) == g_311)), 0)) || p_10)) != g_1711);
                    }
                    g_41 = (safe_mod_func_int16_t_s_s((l_2711 > ((l_2522 <= (safe_rshift_func_int8_t_s_u((((p_11 || l_2750) , g_2591) , func_79((g_966[4] = (((g_353 != ((l_2757 = (p_11 >= ((g_2404 = (g_966[2] & ((l_2589[7] = ((((g_859 = g_675) , 0x8CC5L) <= (-1L)) , (-3L))) || l_2748))) >= 0x20L))) , p_10)) == (-1L)) <= p_9)), l_2736, l_2466[2])), 6))) ^ l_2750)), 0xD416L));
                    l_2765[4] |= (-5L);
                }
                if (func_79((((g_884 = ((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((p_10 || (((safe_mod_func_uint8_t_u_u(p_9, ((safe_add_func_uint8_t_u_u(5UL, p_10)) && ((safe_unary_minus_func_int8_t_s(func_79(l_2466[0], ((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((g_217 = g_277), l_2779)) && (safe_add_func_uint32_t_u_u((0x18DEL <= ((p_10 == p_11) && 0L)), 0xB4F55AC2L))), 4UL)) && g_2525.f2), g_39[2][5]))) , g_2525.f2)))) >= l_2784) == l_2733)), g_1591[1][2])) | 1L) | l_2576), g_852[2][1][3])) < p_10)) <= (-7L)) == 0x1B8EL), p_10, p_10))
                {
                    int l_2791 = (-5L);
                    int l_2803 = 0x9D39CA9CL;
                    if (l_2466[2])
                    {
                        unsigned char l_2794 = 254UL;
                        int l_2796 = 4L;
                        unsigned l_2820 = 0xA6210C82L;
                        l_2796 |= (((safe_sub_func_uint8_t_u_u(g_2075[8][0][4], p_11)) < (g_2591.f2 >= ((l_2795[3] &= ((l_2794 = ((~(((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((+p_10), (l_2791 >= (p_9 && g_110)))), (func_79(((safe_rshift_func_uint8_t_u_s(g_885[3][0], (0xC2L || 255UL))) | p_10), g_878[6], l_2733) <= 0xB0DEL))) || 2L) != l_2736)) | g_1600[1][7])) >= g_145[0])) || 1L))) , g_2623);
                        l_2807[1][1][1] = (((((g_2075[3][0][2] = g_2623) , ((0xC6L && ((l_2791 = g_2648.f0) >= func_58((g_2626.f3 & func_58(((safe_rshift_func_int8_t_s_u(g_1591[1][2], l_2765[4])) | ((((g_1510 = (safe_sub_func_uint8_t_u_u(l_2803, ((safe_lshift_func_uint16_t_u_s(p_11, (l_2576 , 0x1C8BL))) == l_2796)))) , g_1248[2]) , 0x89L) <= 0L)), g_39[1][6], l_2748, l_2795[3], l_2725)), l_2733, p_9, l_2733, p_11))) , g_2626.f4)) && l_2806) == 1L) <= 0x6084F89FL);
                        l_2791 = (0L ^ (safe_add_func_uint16_t_u_u(7UL, (safe_rshift_func_int16_t_s_s((g_2346[0][4][1] = (((safe_div_func_uint8_t_u_u(p_9, (safe_mod_func_uint16_t_u_u(0x290AL, 0x21CEL)))) < ((((safe_rshift_func_uint8_t_u_s(((l_2725 &= (g_1024 ^= 1L)) , p_10), l_2466[1])) && (l_2820 = func_79((safe_sub_func_uint8_t_u_u(p_10, 1L)), l_2794, l_2796))) & l_2796) == 0xB9CACC8EL)) >= g_1248[0])), 14)))));
                    }
                    else
                    {
                        char l_2827 = 0x9DL;
                        unsigned l_2832 = 5UL;
                        g_2583.f1 = func_79((safe_mod_func_uint8_t_u_u((l_2576 ^= (g_277 = func_58(((g_2592 , ((safe_div_func_int8_t_s_s((((l_2791 , (l_2791 == ((safe_rshift_func_uint8_t_u_u(func_58((l_2827 = (p_11 = l_2791)), (((safe_mod_func_int8_t_s_s((0x98D2L > p_9), (safe_div_func_uint8_t_u_u((g_1248[2] = (g_574 = l_2791)), 0xAAL)))) == l_2725) , 4294967295UL), p_9, g_145[0], p_10), g_2545.f2)) == l_2466[1]))) ^ p_10) , l_2832), 255UL)) , g_1510)) , p_11), g_1024, l_2791, p_9, p_9))), 255UL)), p_10, g_2561);
                    }
                    if (((safe_rshift_func_int8_t_s_s(p_10, (g_884 != 0x7301L))) , func_58(g_2525.f2, (l_2725 = (safe_div_func_uint32_t_u_u((l_2795[1] &= (g_2545.f3 = 0xF76065F3L)), (safe_rshift_func_uint8_t_u_s((l_2465 , (l_2618 || p_11)), 4))))), p_10, p_9, g_2328[4])))
                    {
                        l_2711 = g_814;
                    }
                    else
                    {
                        unsigned short l_2859 = 7UL;
                        if (l_2466[0])
                            break;
                        if (g_2591.f2)
                            continue;
                        l_2736 = (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(g_2525.f2, (safe_mod_func_uint8_t_u_u((g_197 &= ((safe_add_func_uint8_t_u_u((p_9 , (((g_814 | (((safe_add_func_uint8_t_u_u((g_1248[0] = l_2711), p_9)) >= (g_885[0][1] = (g_966[3] > 0x29F7L))) , (g_40 > (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_2859, (-1L))), 12)) != 5UL), p_11))))) & p_10) & p_9)), 0xEDL)) >= 2UL)), 7UL)))), l_2765[4]));
                        if (g_407)
                            continue;
                    }
                    g_2592.f1 = g_2561;
                    for (g_2583.f3 = 0; (g_2583.f3 <= 28); ++g_2583.f3)
                    {
                        l_2862[0][4] = (-1L);
                        l_2803 = g_2583.f4;
                        return g_2548;
                    }
                }
                else
                {
                    unsigned char l_2875 = 0x53L;
                    l_2795[1] = 0x336B4E0DL;
                    if (((safe_sub_func_int32_t_s_s((-2L), (((safe_sub_func_uint16_t_u_u((p_9 = (l_2589[3] &= (g_814 = (func_58(l_2765[4], (l_2862[5][2] , l_2765[4]), (l_2518 = (l_2876 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(g_12, 1)), l_2712)), (l_2576 |= 0L))) & (safe_rshift_func_uint8_t_u_u(g_1591[1][2], (l_2875 = (p_11 = 248UL))))))), g_814, l_2466[2]) & p_10)))), 0x47B8L)) && g_859) , l_2725))) , 0x01F27245L))
                    {
                        l_2877 &= 0xAD306A48L;
                        l_2862[0][4] = l_2862[8][3];
                    }
                    else
                    {
                        l_2795[2] = (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((g_2548 , (l_2862[1][0] <= 0x90FEL)))), (safe_rshift_func_uint8_t_u_u(p_9, 3))));
                    }
                }
            }
            else
            {
                char l_2898 = 0xEBL;
                for (g_574 = 0; (g_574 <= 2); g_574 += 1)
                {
                    int l_2887[1];
                    int l_2900[3];
                    int l_2901 = 0L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2887[i] = (-1L);
                    for (i = 0; i < 3; i++)
                        l_2900[i] = (-2L);
                    l_2711 ^= (safe_div_func_uint32_t_u_u((0xA669L && g_2583.f0), func_58(p_11, p_9, g_878[0], (safe_mod_func_int32_t_s_s(func_79((l_2887[0] = 2L), p_11, p_9), l_2494[1])), l_2765[4])));
                    l_2589[3] = (((func_58(((+(safe_mul_func_uint32_t_u_u(func_58((safe_rshift_func_uint16_t_u_s((p_9 > (l_2887[0] , (safe_div_func_uint8_t_u_u(((l_2466[1] ^ (safe_add_func_uint16_t_u_u((func_58((255UL & (p_11 = (l_2900[1] = ((safe_div_func_uint8_t_u_u(func_58(p_9, (g_2456.f2 == p_11), l_2898, (p_9 && 5UL), l_2899), 8L)) , g_1711)))), g_1591[1][6], l_2887[0], l_2887[0], g_878[6]) , g_2592.f2), 65535UL))) , 0x75L), 7L)))), p_9)), l_2887[0], l_2466[1], l_2898, p_9), 0UL))) >= g_2623), p_10, p_9, g_1600[1][7], g_110) , l_2901) || 65526UL) > p_9);
                    for (g_353 = 4; (g_353 >= 0); g_353 -= 1)
                    {
                        return g_2592;
                    }
                    for (g_2591.f1 = 2; (g_2591.f1 >= 0); g_2591.f1 -= 1)
                    {
                        int i, j, k;
                        g_2623 = g_2346[(g_574 + 1)][(g_574 + 6)][g_2591.f1];
                    }
                }
            }
            g_2623 ^= (l_2862[0][4] = func_58(g_852[1][1][0], (safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_11, ((((safe_rshift_func_uint16_t_u_u(((l_2919 |= (((safe_rshift_func_int16_t_s_s((l_2725 = ((safe_rshift_func_uint16_t_u_u((((g_675 , ((func_58(((g_884 = (g_353 < (func_58(g_2592.f2, ((((g_1600[1][3] |= (l_2576 = (l_2518 = (safe_sub_func_int32_t_s_s((p_10 , (~(safe_add_func_uint8_t_u_u(p_10, (l_2711 = (-1L)))))), ((func_79(((g_2346[1][3][2] | g_966[3]) , l_2576), l_2618, l_2748) != l_2726) >= 0xD555L)))))) , p_9) , 0xCAF6B08FL) | g_511), l_2494[4], l_2712, g_1511) & g_1248[0]))) == p_10), l_2862[0][4], g_85, g_878[1], g_885[6][0]) , l_2466[1]) , 0UL)) < g_311) > g_852[1][1][3]), p_11)) , l_2466[1])), g_40)) && g_2545.f0) || 0x67F430B1L)) , l_2465), 11)) >= g_2920) , g_1248[2]) >= p_9))), l_2618)), 12)) , 0x7C15L) == g_40))), p_10, l_2862[0][4], g_2328[3]));
            g_2583.f1 = p_9;
        }
        else
        {
            return g_2921;
        }
    }
    l_2589[3] = (l_2699 > func_23(p_11, p_9, ((((g_2561 & (l_2876 , 0L)) | ((l_2589[5] = func_68((((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_30(g_878[5]), ((0x02L && g_2648.f0) , g_2591.f2))), 0xE5L)) != g_2647) > g_2346[1][3][2]))) > g_2623)) < g_1591[1][2]) & 1UL), l_2522, l_2899));
    l_2937 |= (l_2936 = ((((l_2589[3] = ((g_2648.f0 < ((safe_add_func_uint32_t_u_u(func_19((safe_rshift_func_uint16_t_u_u(func_54((func_19((l_2935 ^= ((safe_div_func_uint32_t_u_u(p_11, 0x0EE35326L)) < ((func_54(l_2932) | (((g_859 >= (safe_sub_func_uint16_t_u_u((g_2561 = 65530UL), ((((l_2518 = g_1711) ^ (((l_2589[3] <= l_2876) || 65533UL) , 65535UL)) == p_11) & 0x2BL)))) , 0xC08D3C93L) , l_2806)) < l_2589[2]))), p_11, p_11) , 1L)), g_2920)), p_11, p_9), 0x8CA38CBAL)) , g_973)) != 0L)) && p_10) | g_2328[1]) | 0x2385136BL));
    return g_2938;
}







static short func_19(unsigned p_20, unsigned p_21, int p_22)
{
    unsigned short l_1851 = 0x31CCL;
    int l_1903 = 0L;
    unsigned l_1995 = 0xF3D3399EL;
    short l_2038 = 0x1AAAL;
    int l_2074 = 0L;
    int l_2258 = (-1L);
    char l_2381 = 7L;
    unsigned short l_2426 = 0x3531L;
    unsigned short l_2430 = 65532UL;
    for (g_884 = 20; (g_884 > 39); g_884 = safe_add_func_int32_t_s_s(g_884, 9))
    {
        int l_1867 = 0x27291845L;
        for (g_1671 = 5; (g_1671 >= 0); g_1671 -= 1)
        {
            return g_197;
        }
        g_1600[4][0] = (g_1711 ^ p_20);
        if (p_20)
        {
            g_40 &= (l_1851 , g_41);
        }
        else
        {
            unsigned char l_1852 = 0xB3L;
            unsigned short l_1876 = 6UL;
            unsigned l_1877[3];
            short l_1878[8][8][4] = {{{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}, {{0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}, {0x868AL, 0x1F5BL, 7L, (-10L)}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1877[i] = 0x039D1005L;
            l_1867 = func_58((l_1852 || (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((g_217 |= g_859) > ((safe_add_func_int32_t_s_s(g_277, (g_852[1][1][3] || (p_21 , p_21)))) < ((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(l_1867, (g_110 = ((safe_div_func_uint16_t_u_u(l_1852, ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((l_1851 < p_21) , g_878[4]), 0x7EL)), l_1876)), l_1877[0])) && p_22))) , g_1511)))) , g_973), p_20)) == l_1878[6][4][2]))), 0)), (-1L))) | l_1878[6][4][2]), 1))), g_878[6], g_885[5][1], l_1852, g_1248[3]);
        }
    }
    for (g_874 = 6; (g_874 >= 0); g_874 -= 1)
    {
        unsigned short l_1879 = 0x73BBL;
        int l_1880 = 0x5BD5F42AL;
        unsigned short l_1932 = 0xDD99L;
        unsigned short l_2092[3];
        unsigned l_2138 = 0x85F162C6L;
        int l_2183 = 1L;
        int l_2302[7][6][6] = {{{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}, {{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}, {{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}, {{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}, {{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}, {{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}, {{1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}, {1L, 0xE15F3E58L, 0xCC127999L, 0x0D1E62DEL, 0xF3579ED5L, 0x61A975FCL}}};
        unsigned char l_2385 = 0x28L;
        char l_2386 = 7L;
        short l_2403 = 0x722CL;
        char l_2410 = 0x5EL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2092[i] = 9UL;
        for (g_85 = 4; (g_85 >= 0); g_85 -= 1)
        {
            int i, j;
            l_1880 ^= (l_1879 |= g_1600[g_85][g_874]);
            for (g_311 = 2; (g_311 <= 6); g_311 += 1)
            {
                unsigned char l_1900 = 0xACL;
                unsigned short l_1906 = 0UL;
                for (g_1510 = 0; (g_1510 <= 3); g_1510 += 1)
                {
                    unsigned short l_1883 = 0x0C1DL;
                    int l_1907[6][9][1] = {{{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}}, {{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}}, {{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}}, {{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}}, {{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}}, {{9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}, {9L}}};
                    int i, j, k;
                    for (g_176 = 0; (g_176 <= 6); g_176 += 1)
                    {
                        int i;
                        if (g_1248[g_1510])
                            break;
                        l_1880 = ((((g_1248[g_1510] & (safe_rshift_func_int16_t_s_s(g_1248[g_1510], g_878[g_311]))) < (((((g_40 | g_39[0][4]) , l_1879) , func_79(p_21, (((func_79(((!0x0CL) >= (!p_20)), g_1248[g_1510], g_39[1][6]) , g_13) & g_41) , p_21), p_22)) <= l_1879) & g_13)) >= g_1248[2]) != 0x75FFCEFEL);
                        l_1883 = 3L;
                    }
                    l_1907[2][6][0] ^= (p_22 = (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(1L, l_1851)) , ((((1UL ^ p_20) <= ((func_79(p_21, l_1900, (((p_22 , (safe_rshift_func_uint8_t_u_u(((l_1903 = g_888) || (safe_div_func_int32_t_s_s((0x371FL != l_1883), l_1903))), 1))) && 0xC933L) > p_22)) | 1UL) || p_20)) != 4294967292UL) , g_888)), l_1883)) , 1UL) | g_1671) == l_1900), g_1600[g_85][g_874])), g_1511)), 0xB74A2678L)), g_1600[g_85][g_874])), l_1906)), l_1879)) || 65531UL) , 9L));
                }
            }
        }
        if ((func_68((safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(p_21, 9)) , (g_966[5] ^ l_1880)) > (safe_mod_func_uint32_t_u_u(l_1880, p_22))), 3))) < (0x1185B0A0L & 0x4E1123F5L)))
        {
            unsigned l_1914 = 0x7C77825CL;
            int l_1947 = 0L;
            int l_2059 = (-4L);
            for (p_22 = 6; (p_22 >= 2); p_22 -= 1)
            {
                unsigned l_1931 = 0xA78FE99FL;
                int l_1948 = 1L;
                int l_1976 = 0x8CA495C0L;
                unsigned l_1991 = 0x728D3775L;
                int l_1998 = 9L;
                for (g_888 = 6; (g_888 >= 1); g_888 -= 1)
                {
                    for (g_41 = 3; (g_41 >= 0); g_41 -= 1)
                    {
                        int i;
                        l_1914 = (g_40 = 0L);
                        return g_966[g_41];
                    }
                }
                if ((g_197 & 0x5151L))
                {
                    int l_1934[2][5];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_1934[i][j] = 3L;
                    }
                    for (g_743 = 1; (g_743 <= 5); g_743 += 1)
                    {
                        int l_1933 = (-1L);
                        int l_1935 = (-1L);
                        int i;
                        l_1935 = ((0xEC686AB3L ^ func_58((((0xF62B2130L | (0xA1A41CC7L != (safe_sub_func_uint8_t_u_u(((g_885[1][1] = (l_1880 &= (g_966[g_743] == (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((g_878[g_743] = (((safe_rshift_func_int16_t_s_s((g_85 &= 0xA6B1L), 8)) , (l_1933 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(p_21, ((g_852[2][0][5] = g_145[0]) && (((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((+g_966[g_743]) && ((+4294967288UL) , g_859)), 3UL)), l_1931)) && p_20) , l_1932)))), p_20)))) , l_1914)) || 0x5D04L), 1L)) , l_1934[0][4]), l_1931))))) & l_1931), 0x6BL)))) & g_277) != p_20), g_966[g_743], p_21, l_1931, g_145[0])) < 6L);
                        return p_21;
                    }
                    return g_422;
                }
                else
                {
                    g_41 ^= p_22;
                    l_1880 = (((((l_1879 & func_79((p_21 != (l_1948 |= (safe_unary_minus_func_int8_t_s(((safe_sub_func_uint8_t_u_u(g_110, (safe_add_func_uint8_t_u_u(p_22, func_58(p_21, g_888, func_58((safe_div_func_uint32_t_u_u((p_22 != (safe_sub_func_uint8_t_u_u((l_1947 ^= ((((safe_add_func_int32_t_s_s((l_1931 , l_1903), 8L)) ^ g_874) || p_22) && (-1L))), 1UL))), p_20)), p_22, l_1903, g_1591[1][2], g_1600[1][6]), p_22, p_20))))) || g_1600[1][7]))))), l_1914, p_20)) & g_852[1][1][3]) | p_20) , p_21) > p_22);
                }
                if ((func_58(g_1591[1][3], ((safe_sub_func_uint32_t_u_u(p_21, (p_22 || g_852[1][0][5]))) , p_22), (g_110 = l_1903), ((1L > g_874) , (l_1948 = ((((g_145[0] < l_1948) | g_885[5][1]) , 1L) && g_145[0]))), p_20) >= p_22))
                {
                    int l_1963 = (-1L);
                    int i;
                    if ((l_1851 != (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(func_58((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_1914, 6)), (g_743 >= l_1851))), g_1248[1], ((l_1879 > ((l_1947 = (!(((safe_lshift_func_uint16_t_u_s((g_878[p_22] = p_21), 6)) || (p_21 || (safe_sub_func_uint16_t_u_u(func_68(((g_41 <= g_145[0]) != g_888)), l_1914)))) && p_20))) || g_852[1][1][3])) ^ g_1024), g_874, l_1851), 2)) > l_1963), p_22))))
                    {
                        return p_21;
                    }
                    else
                    {
                        unsigned l_1977 = 0UL;
                        l_1903 = ((g_85 || ((g_40 = ((safe_sub_func_uint8_t_u_u(p_22, (func_58(g_675, (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s((g_884 = (l_1976 ^= func_58((0x72F3BE07L > (safe_add_func_uint8_t_u_u((g_743 ^= (((g_675 , l_1931) , 0x06L) < ((-9L) ^ l_1880))), l_1963))), g_888, l_1947, g_145[0], l_1932))), 1)), 2)) , p_20), l_1948)), l_1879)), g_1511, l_1931, l_1932) || l_1851))) ^ l_1932)) && g_277)) , 0x93406C2BL);
                        g_1711 &= func_68((func_79(g_859, l_1914, p_20) , l_1903));
                        l_1977 = g_39[0][0];
                    }
                }
                else
                {
                    unsigned short l_1980[4][7][5] = {{{0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}}, {{0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}}, {{0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}}, {{0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}, {0x5D68L, 0x5657L, 0xF226L, 1UL, 0xF561L}}};
                    int l_1994 = 0xD76748DCL;
                    int i, j, k;
                    l_1880 = (g_110 & (!(safe_mod_func_int16_t_s_s(0L, ((l_1980[0][0][1] &= 0xD7F2L) , 0x23A4L)))));
                    g_1600[1][7] = ((g_407 = (g_675 = (safe_lshift_func_uint16_t_u_u((l_1932 > ((func_58(func_58(((l_1980[0][0][1] ^ (safe_sub_func_int16_t_s_s(((((l_1994 |= (safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_1991, (g_1992 > l_1947))), (l_1903 = (func_58(g_145[1], p_20, (safe_unary_minus_func_int16_t_s(l_1947)), (p_20 , (-8L)), p_21) >= (-10L))))) ^ 0x26BEL), p_21))) || p_20) <= l_1995) >= 0x59F243A9L), 0x6FCDL))) && 7UL), l_1947, p_21, g_85, g_407), g_511, l_1947, g_966[5], g_885[8][1]) || l_1914) , p_22)), 4)))) , l_1991);
                    for (g_884 = 0; (g_884 <= 5); g_884 += 1)
                    {
                        short l_1999 = 1L;
                        g_1600[1][7] = (0x54EBL >= (safe_add_func_int16_t_s_s(l_1998, (l_1880 = l_1999))));
                        g_36 = (safe_rshift_func_uint8_t_u_s((4UL && (0UL != (((safe_mod_func_uint16_t_u_u(func_58((safe_mod_func_uint32_t_u_u(p_22, p_21)), l_1914, p_21, l_1998, ((((((safe_mod_func_int16_t_s_s((!func_58(l_1914, (((g_36 < l_1999) & g_859) & p_21), p_22, g_885[5][1], p_22)), l_1932)) ^ p_21) || 0x81FEL) && 0x64C4802FL) , p_21) != 0xC6517451L)), 0xFEFFL)) > p_21) <= p_21))), l_1947));
                        g_36 ^= p_21;
                    }
                    l_1880 = (safe_sub_func_int16_t_s_s(func_79((l_1914 , (safe_div_func_int32_t_s_s(p_21, 0x344AB928L))), l_1998, (safe_sub_func_int16_t_s_s(1L, (safe_div_func_int16_t_s_s(p_20, g_743))))), g_1600[4][6]));
                }
            }
            for (g_422 = 2; (g_422 >= 0); g_422 -= 1)
            {
                int l_2042[8] = {1L, 0xAEBC9E82L, 1L, 0xAEBC9E82L, 1L, 0xAEBC9E82L, 1L, 0xAEBC9E82L};
                int l_2058 = (-1L);
                int i, j;
                if (g_39[g_422][g_422])
                {
                    unsigned short l_2024 = 0x7218L;
                    for (g_110 = 2; (g_110 <= 6); g_110 += 1)
                    {
                        unsigned short l_2025 = 65526UL;
                        int i;
                        g_1711 = (safe_div_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(func_58(g_966[(g_422 + 1)], (g_966[g_422] , 0x7263A37CL), (safe_rshift_func_int8_t_s_s((((func_79(((safe_add_func_uint32_t_u_u(g_966[(g_422 + 1)], func_79(((g_878[g_110] = 0x025FL) && ((0x7D61CE16L != g_39[2][0]) == p_21)), p_20, p_20))) & l_2024), g_743, g_973) && l_2024) , (-7L)) , (-1L)), g_874)), l_2024, p_22), 0UL)) == 0UL) <= g_966[(g_422 + 1)]) == l_2025), l_1995));
                    }
                    g_40 = (safe_add_func_int32_t_s_s((0x382396E9L <= 0x78BCADB3L), 1UL));
                    for (g_675 = 0; (g_675 <= 3); g_675 += 1)
                    {
                        return l_1914;
                    }
                    for (g_511 = 0; (g_511 <= 3); g_511 += 1)
                    {
                        p_22 = (0xA276L != g_973);
                        p_22 = p_22;
                    }
                }
                else
                {
                    int l_2039 = 0x17D67AFCL;
                    unsigned short l_2040 = 7UL;
                    for (g_859 = 3; (g_859 >= 0); g_859 -= 1)
                    {
                        unsigned short l_2041[6];
                        int l_2043 = 0xD490840CL;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_2041[i] = 0xAA71L;
                        l_2043 |= (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((~p_20) , (l_2042[2] ^= (((func_79(l_1879, (l_1903 & (func_58(g_176, (l_1995 <= 0UL), (safe_add_func_int8_t_s_s(p_20, (((safe_sub_func_int16_t_s_s((l_2038 = func_79((g_1591[1][2] = g_973), g_407, p_22)), l_2039)) , l_2040) & p_20))), g_511, g_353) <= p_21)), g_277) > g_878[6]) >= l_2041[2]) >= p_22))), 6)) , g_217), g_878[6]));
                        g_353 = (g_1511 > 9UL);
                    }
                }
                for (p_20 = 0; (p_20 <= 3); p_20 += 1)
                {
                    int l_2057[9] = {(-1L), 0xE223A447L, (-1L), 0xE223A447L, (-1L), 0xE223A447L, (-1L), 0xE223A447L, (-1L)};
                    int i;
                    p_22 = (safe_rshift_func_uint8_t_u_u(l_2042[2], 6));
                    g_1600[1][6] = (+(safe_div_func_int32_t_s_s((g_36 || (+(((g_110 , ((func_58(func_58((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u(func_58((g_110 , (l_2042[2] = (+(g_1248[(g_422 + 1)] = l_1932)))), ((g_217 = (l_2059 &= (p_21 || (p_22 >= ((safe_rshift_func_uint8_t_u_u(p_22, 6)) , ((((g_39[0][6] , ((func_58(l_2057[8], g_885[5][1], p_21, l_2058, l_1932) , p_22) | g_966[0])) | l_1947) >= 0x45FF9675L) < 4294967292UL)))))) || p_22), p_21, p_21, g_1600[1][7]), 3)))), 0L)), p_20, g_675, p_22, g_145[0]), p_20, g_852[1][1][3], g_1591[1][2], g_1612) || 0L) >= l_1880)) || (-4L)) , g_884))), g_1711)));
                    p_22 = (((((safe_mod_func_int8_t_s_s((l_1903 = l_2042[7]), (safe_lshift_func_uint16_t_u_u((l_1880 != (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((func_58(l_1914, l_2057[5], (func_79(((p_21 , (l_2042[2] != (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_2074 |= ((((safe_sub_func_uint8_t_u_u(((-1L) < ((((p_21 = (g_407 = (l_1947 , l_2058))) , g_675) || g_1248[2]) , 0xD08029F8L)), l_2058)) == g_422) , l_2057[8]) ^ l_2038)), g_217)), l_2057[6])))) , g_39[g_422][g_422]), p_22, g_422) || p_21), p_20, l_2042[6]) != p_20) <= p_22), 7)) , p_22), g_511))), 8)))) , g_2075[8][0][4]) , g_743) != (-1L)) , l_2057[8]);
                    return g_1600[3][5];
                }
            }
        }
        else
        {
            int l_2082[7][6][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
            short l_2106 = (-1L);
            unsigned l_2212 = 1UL;
            char l_2240 = 0x78L;
            int l_2296 = (-1L);
            unsigned short l_2327 = 0UL;
            int i, j, k;
            if (((safe_sub_func_int8_t_s_s((((func_58(l_2074, ((g_277 |= (safe_sub_func_uint16_t_u_u((g_878[g_874] = l_2074), (func_79(g_884, (safe_add_func_uint16_t_u_u(0x8B0AL, (((l_2082[4][0][0] = (g_1671 = (0xD6E81FD7L | (g_511 , p_20)))) ^ g_973) , (g_85 = ((safe_sub_func_uint8_t_u_u(0xC3L, 0xCCL)) < g_176))))), g_1591[1][2]) <= g_1600[1][4])))) || 255UL), p_20, l_1903, p_20) || p_22) , p_21) < l_1879), g_885[4][0])) || g_852[1][1][3]))
            {
                short l_2091 = 0xB908L;
                unsigned l_2105 = 0x45F66166L;
                int l_2107 = (-3L);
                short l_2162 = 0xB007L;
                unsigned short l_2220 = 0xD875L;
                unsigned short l_2225 = 0x2B1CL;
                int l_2264 = 0xBFEB0714L;
                char l_2265 = 0x33L;
                if ((+(l_2091 &= (((g_353 , (safe_rshift_func_int8_t_s_u((((1UL <= (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(p_20, 8)) != 0xDDL), p_22))) ^ l_1879) < ((g_511 | func_68(l_1995)) >= l_1995)), g_1248[2]))) , 0xFCC4L) | p_20))))
                {
                    short l_2097[7][9] = {{0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}, {0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}, {0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}, {0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}, {0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}, {0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}, {0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL, 0x49BBL, 0x503BL}};
                    int l_2104 = 0x0BB6949FL;
                    char l_2163 = 0xA4L;
                    int i, j;
                    l_2074 ^= (l_2107 = (((l_2092[1] < (((safe_sub_func_uint16_t_u_u((p_22 | ((safe_div_func_int8_t_s_s(l_2097[1][0], ((safe_sub_func_int32_t_s_s(func_58(l_2082[4][0][0], (func_68((safe_lshift_func_int16_t_s_s(l_2091, 2))) , ((((safe_mod_func_int16_t_s_s((l_2104 = p_22), func_68((l_2097[5][8] <= ((p_21 || g_1511) ^ p_20))))) , 0x19L) == p_22) >= g_888)), g_1711, g_878[g_874], l_2105), l_2097[1][0])) , g_40))) == 0x04L)), p_21)) , 0xF9L) && l_2106)) ^ g_1600[1][6]) | g_2075[5][0][6]));
                    if (g_110)
                    {
                        int i;
                        if (l_2082[1][5][0])
                            break;
                        p_22 = ((safe_lshift_func_uint8_t_u_s(((+(safe_sub_func_uint8_t_u_u(((g_878[g_874] = (safe_rshift_func_int16_t_s_u(p_21, p_22))) & g_1600[2][3]), ((l_2082[0][0][0] ^= (p_21 , p_21)) != l_2097[1][0])))) >= 0L), (((l_2105 && (l_2104 = l_1851)) & p_22) ^ l_2097[1][0]))) && (-1L));
                    }
                    else
                    {
                        p_22 |= 0L;
                        p_22 = (safe_add_func_int8_t_s_s(0x9EL, ((safe_lshift_func_uint8_t_u_u(255UL, ((l_2105 == p_21) > ((((l_2105 && (l_1880 = 248UL)) && (((safe_add_func_int16_t_s_s(l_2092[2], 0xC229L)) , (((safe_add_func_int8_t_s_s(((!(safe_add_func_uint32_t_u_u(g_197, 9L))) || (-5L)), (-7L))) || 1L) >= g_110)) || g_2075[8][0][4])) , g_885[3][0]) < l_2104)))) || p_20)));
                    }
                    if (p_22)
                    {
                        g_1600[1][7] = l_2097[6][4];
                        g_1600[1][7] = g_2075[8][0][4];
                    }
                    else
                    {
                        unsigned l_2143[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_2143[i] = 1UL;
                        if (p_22)
                            break;
                        g_41 = (((func_68((p_21 = ((safe_add_func_uint16_t_u_u(((0xF7C949F4L == (g_1591[1][2] ^ (func_68((l_1851 | l_1903)) == (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(l_2038, (safe_lshift_func_int8_t_s_s((g_1024 &= (g_1992 ^ 0L)), l_2082[3][3][0])))) == l_2038), p_20))))) && 0x53L), 0xA647L)) <= p_21))) | p_20) < 0x2880L) <= g_41);
                        l_2104 = (l_2038 != (safe_lshift_func_uint8_t_u_u(func_68((((safe_sub_func_int32_t_s_s((p_20 | ((safe_div_func_int32_t_s_s(l_2138, func_68(g_41))) ^ ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_2082[3][0][0] < (l_2143[0] = (g_814 , ((((!(g_1511 = g_2075[1][0][5])) | (0x370F1F03L & 5L)) ^ p_22) | g_885[5][1])))), (-3L))), 15)) || g_878[6]))), p_20)) > 3UL) & g_1248[2])), 4)));
                        return l_2038;
                    }
                    if (func_68((g_1510 &= (safe_sub_func_uint8_t_u_u((((((p_21 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u(func_68((safe_rshift_func_int16_t_s_u((p_20 <= l_2097[1][0]), ((p_20 < ((((l_2104 = (((l_2082[4][0][0] = p_22) != (safe_mod_func_int8_t_s_s(0L, (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(((func_68(((((g_1671 |= ((safe_add_func_uint8_t_u_u((g_966[4] == ((g_1711 && (g_39[2][0] , (g_511 = ((-1L) | 0xC8E4L)))) && 0L)), 1L)) != g_743)) , l_2162) >= 65530UL) || g_41)) && g_2075[8][0][4]) < p_20), p_21)), 11))))) ^ l_2091)) && 4L) | g_1600[2][4]) != l_2163)) , l_2082[4][0][0])))), 0x9FA4L)) < g_885[6][1]), p_20)), 1))) , p_21) == g_878[g_874]) , 0UL) != 0x866D5D17L), p_20)))))
                    {
                        return g_878[4];
                    }
                    else
                    {
                        return p_22;
                    }
                }
                else
                {
                    if (l_1879)
                        break;
                }
                for (l_1851 = 0; (l_1851 <= 3); l_1851 += 1)
                {
                    l_1880 = (l_2092[1] , 0x2DAD4884L);
                    if (p_21)
                    {
                        p_22 = 0x3D10F1BBL;
                    }
                    else
                    {
                        return g_574;
                    }
                    p_22 = g_675;
                }
                for (l_1880 = 2; (l_1880 >= 0); l_1880 -= 1)
                {
                    unsigned char l_2182 = 0xD0L;
                    int l_2201[10][5] = {{0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}, {0x860C3CFAL, 1L, (-1L), (-1L), (-4L)}};
                    int i, j;
                    for (g_859 = 0; (g_859 <= 3); g_859 += 1)
                    {
                        int l_2184 = 1L;
                        int i;
                        g_353 = (g_1711 &= (l_2092[l_1880] || ((((g_1600[1][7] , l_2074) || (safe_add_func_int16_t_s_s((func_58(((l_2092[l_1880] && ((l_2184 = (l_1879 == (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_878[g_874], (g_2170 > g_852[0][1][1]))), (l_2183 |= (((func_79((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((g_2181 , g_145[0]) , 0UL), g_1248[1])), 0x26L)), l_2182)), p_20)) == g_41), g_277)), g_110, p_20) & 4294967294UL) != g_874) == p_20)))))) < 0xB7F7L)) ^ l_2092[1]), g_176, l_2162, g_110, p_21) || 0L), g_814))) & 0x0B47L) ^ p_22)));
                        l_2082[4][0][0] = (((((safe_mod_func_int8_t_s_s((g_145[0] ^ (g_814 ^ (((safe_mod_func_uint16_t_u_u(((p_22 > (l_2092[0] == l_2184)) ^ (l_2038 || (+((safe_add_func_int16_t_s_s(g_1600[0][4], (safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_2162 > (-1L)) < p_21), g_743)), p_22)))) & 0x8DD6L)))), 0x385CL)) | 0UL) < p_20))), 0x86L)) & 7L) , 0x3789L) >= p_21) < p_22);
                        g_1600[1][7] &= ((safe_mod_func_uint16_t_u_u(0x735FL, (l_1851 | g_36))) && p_22);
                        g_1600[1][7] = (safe_rshift_func_int16_t_s_u((l_2074 &= 0xC216L), (253UL < ((l_2201[9][2] &= l_1851) == (((0xBC4209ABL & (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(l_2038, (l_2082[2][5][0] ^= g_878[6]))), (safe_sub_func_uint16_t_u_u((l_2092[l_1880] = (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((0UL > l_2092[2]), 1)), ((g_966[4] & 65535UL) == (-2L))))), l_2212))))) && (-6L)) >= 0x2AL)))));
                    }
                    g_1711 = ((l_2092[l_1880] || (func_79(l_2092[l_1880], ((safe_lshift_func_int16_t_s_s(((p_22 <= ((safe_lshift_func_int8_t_s_s(((p_22 , (g_743 || (((safe_unary_minus_func_uint8_t_u(255UL)) , (safe_mod_func_uint32_t_u_u(((g_145[0] = (l_2220 , ((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_1591[0][4], (p_22 && 0xEC391AAFL))), l_2074)) && 0x0EBBL))) , p_21), g_1510))) != p_21))) | 0L), l_2074)) > l_2220)) , 0L), l_2092[l_1880])) && 1UL), l_2074) >= 0xA33EL)) , p_21);
                }
                if ((func_58((((l_2225 > ((func_79((safe_sub_func_int16_t_s_s((func_68(p_20) || p_22), ((safe_div_func_uint16_t_u_u(p_22, 0x4EF1L)) == p_22))), (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((g_1612 != ((safe_add_func_uint32_t_u_u(0x56456A56L, 6UL)) , p_22)), 250UL)) || p_22), p_20)) == p_22) <= 1UL) , 0x6FABL), p_21)), g_878[2])), g_743) <= l_1995) >= 0xA9L)) != g_277) , g_885[5][1]), l_2082[6][3][0], g_874, g_1711, l_2240) , 0x5F6302BFL))
                {
                    if (g_852[0][1][0])
                        break;
                }
                else
                {
                    unsigned char l_2256 = 1UL;
                    char l_2276 = 8L;
                    if (g_145[1])
                    {
                        unsigned short l_2255 = 0xD063L;
                        g_2170 &= (safe_mod_func_uint8_t_u_u((g_1510 , ((!(g_878[g_874] == g_852[2][1][5])) > (safe_div_func_uint8_t_u_u((p_22 == (safe_mod_func_uint32_t_u_u((((6UL < (safe_mod_func_int16_t_s_s(((g_407 |= ((safe_sub_func_uint32_t_u_u((p_22 ^ ((safe_mod_func_int8_t_s_s(((((l_2240 ^ ((safe_mod_func_int16_t_s_s(g_1671, l_2255)) | p_21)) & 6L) , 8L) | 0xA1ACA8ABL), p_20)) , 0UL)), p_20)) ^ g_217)) , l_2183), l_2256))) , p_20) >= l_2091), p_20))), p_20)))), g_110));
                        p_22 ^= g_884;
                    }
                    else
                    {
                        int l_2257[6];
                        short l_2263 = 1L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_2257[i] = 0x77135D9CL;
                        l_2082[4][0][0] ^= (g_36 = (func_58(((func_68(p_22) , ((p_22 = ((g_743 > l_2257[5]) && ((l_2258 == l_2138) && func_79((l_2107 = g_1248[2]), (p_21 = (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_21, (((g_176 , 4294967295UL) && l_2263) , g_197))), 0x5A76L))), p_22)))) , g_40)) , 247UL), g_1591[0][1], p_20, l_2264, p_20) , l_2256));
                        p_22 = (0UL < p_22);
                        return l_2263;
                    }
                    for (g_1510 = 0; (g_1510 <= 3); g_1510 += 1)
                    {
                        return l_2265;
                    }
                    g_2170 = (safe_sub_func_uint8_t_u_u(l_2092[0], func_79(g_311, g_874, func_58((safe_add_func_int16_t_s_s(g_1248[2], (g_885[8][1] <= (safe_sub_func_int16_t_s_s((l_2183 |= ((safe_mod_func_int32_t_s_s(0xD8D67643L, (((((l_2258 > l_1851) , (safe_mod_func_uint16_t_u_u(func_79(g_2075[1][0][0], l_2256, g_966[4]), l_1880))) && p_21) == l_2276) , p_22))) & p_22)), g_110))))), p_22, l_2276, l_2276, p_21))));
                }
            }
            else
            {
                unsigned short l_2293 = 0UL;
                int l_2301 = 0x991DFA72L;
                l_2302[0][2][4] &= (((safe_lshift_func_int16_t_s_u(((((l_2082[4][0][0] = (safe_rshift_func_int8_t_s_u(p_21, (safe_lshift_func_int8_t_s_s(l_2240, 3))))) , func_58((safe_sub_func_int16_t_s_s(0x003FL, (l_1880 |= (safe_lshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((l_2183 = g_874), 1)) == (safe_sub_func_uint32_t_u_u(((l_2293 ^= (l_2082[4][0][0] ^= 252UL)) & (safe_rshift_func_int16_t_s_s(func_58(g_878[2], (l_2296 = p_20), ((safe_lshift_func_int16_t_s_s(g_39[1][5], (((safe_div_func_int32_t_s_s(func_79(g_1591[1][2], g_145[0], g_39[0][5]), g_878[6])) & g_1600[1][7]) < l_2301))) <= g_1510), p_21, p_22), p_20))), 7L))), p_22)) >= g_2170) & (-10L)), 11))))), g_878[g_874], g_814, p_21, g_885[4][0])) | p_20) || l_1995), 4)) != (-10L)) ^ 0xF572216FL);
            }
            if ((!((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_20 || p_20), g_878[g_874])), g_39[1][1])) >= (g_1248[1] = (g_277 = (safe_rshift_func_int8_t_s_s(8L, 5)))))))
            {
                short l_2323 = 0x59CAL;
                int l_2324 = (-1L);
                unsigned l_2325 = 4294967295UL;
                int l_2326 = 1L;
                short l_2382[3][10][8] = {{{6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}}, {{6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}}, {{6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}, {6L, 0x3864L, 1L, 0x136FL, 0x136FL, 1L, 0x3864L, 6L}}};
                int i, j, k;
                p_22 ^= (l_2074 = (g_422 != (p_20 , (l_2082[4][5][0] = l_2258))));
                for (l_1903 = 0; (l_1903 <= 3); l_1903 += 1)
                {
                    int i, j;
                    p_22 ^= (-2L);
                    if (g_966[(l_1903 + 1)])
                        continue;
                    if ((g_41 ^= (safe_sub_func_uint32_t_u_u(4294967295UL, ((safe_div_func_int16_t_s_s(func_79(g_966[(l_1903 + 2)], g_1600[l_1903][(g_874 + 1)], ((func_79(func_58((l_1880 |= (safe_rshift_func_int16_t_s_s((l_2325 = (p_22 != ((-6L) | (l_2074 = (l_2183 <= ((l_2324 = (g_1248[2] & (safe_lshift_func_int8_t_s_s((l_2323 |= (!((l_2302[0][2][4] |= ((safe_rshift_func_uint16_t_u_u(((l_2296 = ((((safe_lshift_func_int8_t_s_s(p_20, ((safe_sub_func_uint16_t_u_u(func_58(p_22, p_22, l_1903, p_20, l_2296), 1UL)) , 0x6AL))) <= p_22) > g_814) > p_22)) , p_22), p_22)) >= p_21)) | g_675))), l_2138)))) || l_2302[0][2][4])))))), 1))), l_2038, p_20, l_2212, g_277), l_2326, l_2327) & g_39[2][3]) || (-1L))), 0xD9F6L)) <= p_20)))))
                    {
                        g_36 = g_966[4];
                    }
                    else
                    {
                        unsigned l_2343 = 0x1DAFD376L;
                        p_22 = (g_353 = l_2326);
                        g_1711 = func_58(p_22, g_2328[3], g_1511, (p_20 <= (safe_mod_func_int16_t_s_s(g_888, (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_22, (safe_sub_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_20, g_277)), (safe_rshift_func_uint8_t_u_s((g_39[0][2] <= g_39[2][4]), 4)))) , (-1L)) >= 4L), g_1511)))), g_511))))), l_2343);
                    }
                    for (l_1995 = 0; (l_1995 <= 2); l_1995 += 1)
                    {
                        int l_2347 = (-1L);
                        int i, j, k;
                        g_41 = (0L <= (safe_div_func_uint32_t_u_u(((-1L) & (g_852[(l_1995 + 1)][l_1995][(g_874 + 1)] ^ ((g_852[l_1995][l_1995][(g_874 + 1)] || ((p_22 | (g_1024 = g_852[l_1995][l_1995][(g_874 + 1)])) >= (((g_2346[1][3][2] , g_1600[1][7]) , p_22) , 65535UL))) || p_20))), g_85)));
                        l_2082[4][0][0] = g_110;
                        p_22 &= ((l_2347 = (g_852[1][1][3] ^ l_2240)) || p_21);
                    }
                }
                if (((l_2038 ^ (p_20 == (0x3D5AL ^ ((safe_add_func_uint32_t_u_u((p_22 , (g_852[1][1][3] &= func_68(((g_1510 = (safe_add_func_uint16_t_u_u(p_22, g_36))) , l_1880)))), (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(g_1612)), l_2323)))) , l_2302[0][2][4])))) && p_20))
                {
                    unsigned l_2380 = 0xDE9C3EDBL;
                    if (p_20)
                        break;
                    g_1711 ^= ((safe_rshift_func_int8_t_s_s(func_58((p_22 < (l_2296 ^= (g_145[0] | (g_675 || ((safe_unary_minus_func_uint8_t_u((((~g_407) >= (g_1600[1][2] , p_22)) || (safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s(0L, (p_20 == (safe_rshift_func_int8_t_s_u((l_2082[1][1][0] |= 0x66L), p_20))))) < p_20), p_22)) ^ p_20) ^ l_2240), l_2240)) >= g_13), g_2328[3]))))) == g_1992))))), p_20, l_2326, p_20, p_22), 1)) || 65528UL);
                    p_22 = (((g_859 | (g_966[3] , (l_2326 = (safe_div_func_uint32_t_u_u(p_20, ((((g_422 && 0xBDE0L) | ((((g_1600[0][7] ^= (safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((g_353 , (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(func_79((safe_lshift_func_uint16_t_u_u(g_422, p_21)), (l_2380 = g_2181), g_1591[1][2]), p_22)), 3))), g_2075[4][0][1])) < p_20) , g_874), (-4L)))) | 0x70DED4D3L) , 0xD7L) <= 0UL)) == p_20) | p_21)))))) , p_21) <= g_885[5][1]);
                }
                else
                {
                    int l_2387 = 0x06087F94L;
                    int l_2405 = 1L;
                    p_22 = p_22;
                    l_2381 &= p_22;
                    l_2324 = (((g_145[0] = 65527UL) || ((((g_878[5] , ((l_2382[2][2][4] <= ((g_2075[8][0][4] ^ (safe_div_func_int8_t_s_s((((g_1024 = l_2385) || (1UL || p_22)) & l_2212), 255UL))) & l_1932)) , p_22)) >= l_2386) , 4294967287UL) ^ l_2387)) > p_21);
                    for (l_2074 = 0; (l_2074 <= 3); l_2074 += 1)
                    {
                        int l_2402 = 3L;
                        int l_2409 = 0x6F76FFB3L;
                        char l_2413 = 0xA4L;
                        int i;
                        l_2405 = func_68((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((func_58(l_2302[2][5][4], g_878[g_874], g_145[1], g_41, ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((g_1248[l_2074] |= (safe_add_func_uint16_t_u_u(p_21, (p_21 < l_2402)))), func_58((func_79(p_21, g_1612, g_1591[1][2]) , l_2403), p_21, l_2381, g_2404, p_20))) == g_353), 2)), l_2402)) <= l_2326)) , g_885[5][1]), 9)), 5)), g_743)));
                        l_2302[0][2][4] = (g_311 < (((0xBBF73A12L <= (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((l_2409 = g_814))), p_21))) , l_2410) ^ (l_2106 < (0x5FC8L <= func_79(l_2403, (safe_div_func_uint8_t_u_u(246UL, 0x9AL)), l_2413)))));
                        p_22 = l_2106;
                        g_41 = (safe_sub_func_int32_t_s_s((g_1711 , g_859), (l_2405 ^= ((((l_1880 = ((p_21 , (((((p_22 , ((((g_574 || p_22) == (0xE65CL == (!0xABE5L))) > (safe_lshift_func_uint8_t_u_s((g_85 == g_39[2][3]), g_675))) , l_1995)) > g_885[5][1]) >= g_888) ^ l_2402) < 4L)) , 0x7C41L)) | g_1024) , 65535UL) || 0UL))));
                    }
                }
            }
            else
            {
                int l_2429 = 0x2283B539L;
                l_2082[4][0][0] |= g_13;
                for (g_36 = 0; (g_36 <= 3); g_36 += 1)
                {
                    int i;
                    p_22 = ((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(0xF0L, ((g_878[g_36] ^ (safe_div_func_int8_t_s_s(func_79(l_2258, l_2426, g_888), 247UL))) ^ ((((((safe_lshift_func_uint8_t_u_u((l_2426 || l_2429), l_2296)) , p_22) & g_966[4]) , g_36) & l_2082[3][1][0]) != l_2302[0][2][4])))) , 5UL), p_22)), g_1711)) , g_41);
                }
            }
            return l_2430;
        }
        for (g_511 = 0; (g_511 <= 3); g_511 += 1)
        {
            return p_20;
        }
    }
    g_1711 |= (g_2170 ^= g_2346[3][5][1]);
    g_1711 = func_48((safe_add_func_int32_t_s_s((p_22 = g_1511), (safe_sub_func_uint32_t_u_u((func_68(l_2430) , g_422), (safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(((g_1671 |= p_20) | (0x0BL >= p_21)), 3)) , p_20) , l_1851), 0xB66AL)), p_20)))))));
    return p_20;
}







static unsigned func_23(unsigned p_24, short p_25, int p_26, unsigned short p_27, char p_28)
{
    short l_1839 = 0x2A09L;
    int l_1846 = 1L;
    l_1839 = func_30((safe_rshift_func_uint16_t_u_u(65535UL, 1)));
    g_36 = ((safe_div_func_uint8_t_u_u((p_27 & (func_79((p_26 != p_27), g_40, ((0x5AD07D02L <= p_25) & ((safe_sub_func_uint32_t_u_u((l_1846 = l_1839), p_25)) , ((((safe_mod_func_int8_t_s_s((l_1846 |= (l_1839 >= l_1839)), l_1839)) , l_1846) | g_885[5][1]) >= l_1839)))) || l_1839)), 0xEAL)) , (-4L));
    return g_675;
}







static int func_30(char p_31)
{
    unsigned char l_45 = 0x53L;
    int l_974[7][5][4] = {{{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}, {{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}, {{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}, {{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}, {{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}, {{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}, {{0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}, {0x7A5177FAL, 1L, 6L, 0x9C7E0B51L}}};
    int l_998[1];
    int l_1016 = 0x701D93C4L;
    int l_1025 = 0x5827AA51L;
    char l_1169 = 0xF5L;
    int l_1250 = (-1L);
    unsigned l_1323 = 4294967295UL;
    unsigned l_1373 = 0x056F43C3L;
    int l_1389 = (-1L);
    int l_1405 = 1L;
    int l_1411[4] = {1L, 1L, 1L, 1L};
    unsigned char l_1424[1][2];
    int l_1630 = 1L;
    int l_1648 = 3L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_998[i] = 0x195419A8L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1424[i][j] = 0xB5L;
    }
    for (p_31 = 23; (p_31 >= (-5)); p_31--)
    {
        int l_978 = 0x2FAA8082L;
        int l_984[5][8] = {{(-4L), (-4L), 0x354848E6L, 0L, 0x42E1F5CDL, 0L, 0x354848E6L, (-4L)}, {(-4L), (-4L), 0x354848E6L, 0L, 0x42E1F5CDL, 0L, 0x354848E6L, (-4L)}, {(-4L), (-4L), 0x354848E6L, 0L, 0x42E1F5CDL, 0L, 0x354848E6L, (-4L)}, {(-4L), (-4L), 0x354848E6L, 0L, 0x42E1F5CDL, 0L, 0x354848E6L, (-4L)}, {(-4L), (-4L), 0x354848E6L, 0L, 0x42E1F5CDL, 0L, 0x354848E6L, (-4L)}};
        int l_985 = 0x15C90D72L;
        int l_989[1];
        int l_1206[7][6][2] = {{{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}, {{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}, {{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}, {{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}, {{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}, {{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}, {{(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}, {(-5L), 0x3EFBE4F0L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_989[i] = 7L;
        for (g_36 = 0; (g_36 > 27); g_36 = safe_add_func_uint32_t_u_u(g_36, 2))
        {
            for (g_40 = 0; g_40 < 3; g_40 += 1)
            {
                for (g_41 = 0; g_41 < 7; g_41 += 1)
                {
                    g_39[g_40][g_41] = 0xF0DC4B63L;
                }
            }
        }
        for (g_41 = 15; (g_41 >= (-20)); --g_41)
        {
            int l_44 = 0xED0F12AFL;
            int l_975 = 0xE102653CL;
            int l_979[9][8] = {{0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}, {0xEFE7C0CAL, 0x56264E32L, 0xEFE7C0CAL, 0x69A7D5C1L, 8L, 0L, 4L, 0xC0CC53A1L}};
            int i, j;
            if ((l_44 = g_13))
            {
                unsigned short l_986 = 0xF8C8L;
                int l_988 = (-2L);
                int l_990 = 1L;
                l_45 |= (p_31 , g_41);
                for (l_45 = 0; (l_45 <= 2); l_45 += 1)
                {
                    int i, j;
                    for (l_44 = 0; (l_44 <= 2); l_44 += 1)
                    {
                        int i, j;
                        return g_39[l_45][l_44];
                    }
                    return g_39[l_45][(l_45 + 1)];
                }
                for (g_36 = 28; (g_36 >= (-18)); g_36 = safe_sub_func_int8_t_s_s(g_36, 7))
                {
                    return g_13;
                }
                if (((l_44 ^= 0x60D5L) <= (func_48(p_31) ^ (safe_lshift_func_uint8_t_u_u(p_31, (((safe_div_func_uint16_t_u_u(g_884, (safe_sub_func_int8_t_s_s((0x4881L >= ((g_966[4] ^= p_31) , (((safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_973 = p_31), ((l_974[0][4][3] , p_31) <= p_31))), g_852[1][1][3])) ^ p_31), l_975)) || 2L) == 4UL))), g_884)))) < g_852[2][1][7]) > p_31))))))
                {
                    unsigned char l_987 = 253UL;
                    int l_997 = (-1L);
                    g_36 = (((p_31 , (l_990 |= ((l_975 = ((g_36 , p_31) , ((l_989[0] &= ((!(safe_sub_func_int16_t_s_s((((l_978 & (func_79(l_979[4][7], (l_986 = (g_675 = func_79(l_45, (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((l_984[1][0] = (func_68(g_675) >= 246UL)) | g_852[2][2][4]) < p_31), p_31)), l_985)), p_31))), l_987) <= l_974[3][2][0])) < l_978) ^ l_988), g_878[5]))) >= (-1L))) | g_36))) != g_878[6]))) , 65535UL) >= p_31);
                    g_40 = p_31;
                    l_998[0] = func_58((l_988 = ((safe_sub_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((g_888 = func_68(((g_311 <= 4294967286UL) | (l_989[0] = (((-1L) & ((func_58(g_966[3], l_975, ((l_44 = 9L) ^ (safe_sub_func_int16_t_s_s(((l_997 = (func_58(p_31, g_675, l_986, g_878[6], p_31) < 0x21L)) ^ 4294967295UL), g_85))), l_989[0], g_743) , p_31) < g_13)) < g_353))))), 1UL)) != 6UL), l_45)) <= p_31)), l_985, l_990, g_41, g_852[3][0][4]);
                }
                else
                {
                    short l_1003 = 0xFDF9L;
                    if (g_13)
                        break;
                    g_353 |= (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((l_985 & 1UL) != ((+l_1003) < ((g_85 |= 1L) , 0x99B2L))), (l_975 = (safe_lshift_func_uint8_t_u_u((l_1003 ^ p_31), 7))))), ((0x5A9363DCL && g_41) ^ g_407)));
                }
            }
            else
            {
                short l_1023 = 0L;
                g_1024 ^= (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((g_966[4] <= func_58(l_998[0], (l_978 , ((l_984[1][0] = (((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_45 ^ ((safe_lshift_func_uint16_t_u_s(((l_1016 = (g_36 && 0x8DL)) , p_31), (safe_div_func_int16_t_s_s(g_973, ((safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((func_58(p_31, p_31, p_31, l_1023, p_31) <= 0x7F46L), p_31)) > g_277), 11)) , p_31))))) >= g_852[1][1][3])), p_31)), p_31)) & 0L) , 0x91E82F5AL)) , g_859)), l_989[0], p_31, g_885[1][1])) , g_874) , l_998[0]), g_511)), l_985));
            }
            l_1025 = p_31;
            g_36 = l_974[0][4][3];
            l_989[0] = (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((p_31 || func_79(l_989[0], (((safe_sub_func_int16_t_s_s((0xA0A0L != (l_975 ^= (l_984[4][0] == (p_31 && (func_54(l_985) > (0x36L >= g_966[4])))))), g_973)) >= 0xF6F6L) , 1UL), l_979[8][7])), l_978)), 0));
        }
        if (p_31)
        {
            unsigned char l_1032 = 6UL;
            for (l_1016 = 0; (l_1016 <= 5); l_1016 += 1)
            {
                int l_1037 = 0x8998C8F5L;
                int l_1044[9][9];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_1044[i][j] = (-7L);
                }
                for (g_1024 = 0; (g_1024 <= 6); g_1024 += 1)
                {
                    int i;
                    g_41 = (g_966[l_1016] > l_1032);
                    l_984[1][0] = ((((safe_lshift_func_int16_t_s_s(func_58((func_58((safe_mod_func_uint32_t_u_u(l_1032, g_888)), p_31, ((l_1037 = g_878[6]) <= l_998[0]), p_31, (safe_lshift_func_int8_t_s_u(((g_145[0] <= (safe_mod_func_int8_t_s_s(0xFEL, p_31))) ^ 0UL), l_1044[1][7]))) ^ 0x8FL), p_31, p_31, l_998[0], l_974[0][4][3]), 15)) >= g_145[0]) | l_1044[1][7]) ^ p_31);
                }
            }
            return p_31;
        }
        else
        {
            if (g_176)
                break;
            l_984[0][6] = func_68(p_31);
        }
        for (g_353 = 13; (g_353 >= 29); g_353 = safe_add_func_int16_t_s_s(g_353, 9))
        {
            short l_1051[2];
            unsigned short l_1056 = 0UL;
            int l_1057 = 0L;
            unsigned char l_1132 = 2UL;
            unsigned char l_1148 = 7UL;
            unsigned char l_1204 = 0xD3L;
            int l_1216 = 0x856F7A43L;
            int i;
            for (i = 0; i < 2; i++)
                l_1051[i] = 0x6B45L;
            if (((l_1057 = (safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((l_1051[0] ^ g_13), func_58((g_40 > ((safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(l_1056, l_989[0])) <= ((g_878[6] != (p_31 , l_974[5][3][3])) || l_1025)), 0xF4L)) > 0x67L)), l_1051[0], l_1056, p_31, p_31))), l_1051[0]))) ^ 0x22L))
            {
                unsigned l_1080[6][8] = {{0x6927A3E8L, 0xFDB3614EL, 4294967292UL, 0xFDB3614EL, 0x6927A3E8L, 0xB411BFF1L, 0x1BA19EF7L, 0xFDB3614EL}, {0x6927A3E8L, 0xFDB3614EL, 4294967292UL, 0xFDB3614EL, 0x6927A3E8L, 0xB411BFF1L, 0x1BA19EF7L, 0xFDB3614EL}, {0x6927A3E8L, 0xFDB3614EL, 4294967292UL, 0xFDB3614EL, 0x6927A3E8L, 0xB411BFF1L, 0x1BA19EF7L, 0xFDB3614EL}, {0x6927A3E8L, 0xFDB3614EL, 4294967292UL, 0xFDB3614EL, 0x6927A3E8L, 0xB411BFF1L, 0x1BA19EF7L, 0xFDB3614EL}, {0x6927A3E8L, 0xFDB3614EL, 4294967292UL, 0xFDB3614EL, 0x6927A3E8L, 0xB411BFF1L, 0x1BA19EF7L, 0xFDB3614EL}, {0x6927A3E8L, 0xFDB3614EL, 4294967292UL, 0xFDB3614EL, 0x6927A3E8L, 0xB411BFF1L, 0x1BA19EF7L, 0xFDB3614EL}};
                int l_1103 = (-9L);
                int l_1149 = (-8L);
                int l_1150 = 0x8524017CL;
                int i, j;
                for (g_36 = 0; (g_36 == (-25)); g_36 = safe_sub_func_int32_t_s_s(g_36, 5))
                {
                    char l_1082 = 0L;
                    int l_1083 = 0xCEF00186L;
                    if (g_852[1][1][3])
                    {
                        int l_1081 = 0L;
                        l_1083 = (safe_div_func_int32_t_s_s(func_79((safe_sub_func_int8_t_s_s(p_31, (safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_41, p_31)), 0xF2L)) & ((p_31 ^ (safe_mod_func_int8_t_s_s((((p_31 , (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((((p_31 , ((~((safe_div_func_int16_t_s_s((~(safe_div_func_int16_t_s_s(p_31, (g_85 = (g_874 , l_1080[5][6]))))), p_31)) ^ 0x4691L)) ^ 0x7BL)) ^ 0x27L) , p_31) > l_984[1][0]), g_885[2][1])) ^ 0x72D396EAL), l_1051[1]))) != 0x4DD26ADDL) , g_885[5][1]), l_1081))) <= l_1080[5][6])), l_1082)))), p_31, g_852[2][1][7]), g_13));
                        if (p_31)
                            break;
                        l_989[0] = (safe_rshift_func_int16_t_s_u((l_1083 = g_885[1][0]), 15));
                        if (l_998[0])
                            break;
                    }
                    else
                    {
                        short l_1086 = 0xCC68L;
                        l_1083 = func_79((l_1086 < (l_1103 |= (g_878[6] != (((safe_lshift_func_int8_t_s_u(((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(2L, p_31)) != l_1083), (g_407 ^ g_852[1][1][3]))), (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(g_407, g_852[1][1][3])), g_311)), l_1080[4][3])), p_31)))) == 0xA726EC78L), 6)) || p_31) , g_973)))), p_31, g_574);
                        g_40 = g_145[0];
                        g_40 = p_31;
                    }
                    g_41 = (l_1056 > (safe_mod_func_uint32_t_u_u(l_1082, (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_1025, (safe_mod_func_uint32_t_u_u(((p_31 , l_1103) < ((safe_add_func_uint8_t_u_u(p_31, (+((safe_rshift_func_int8_t_s_s(((l_998[0] = ((g_353 <= (((-1L) && (safe_add_func_uint32_t_u_u((0x446E03B3L && g_353), g_511))) , l_1056)) & g_277)) , p_31), 6)) & 4L)))) | g_884)), 0x427FD74CL)))), 0)))));
                    l_984[1][0] = (g_13 >= 0x1844L);
                }
                if (func_58((l_1150 = ((safe_add_func_int32_t_s_s((((g_874 |= 0x77L) , p_31) >= 0xF064C9A0L), (l_1149 = (safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_31, (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((g_39[1][2] = (safe_add_func_int8_t_s_s(l_1132, (g_217 &= p_31)))) , ((g_852[3][2][4] &= (((g_217 = (l_1103 = (g_973 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((0x7FB5L <= (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((l_985 == ((p_31 , 0x5244717AL) | 0x7DD06543L)) | l_989[0]), l_974[6][1][3])), 0x88615CADL)), 7)), 2L)))) ^ 249UL), 0x73CC0135L))), g_973)), 0xBC26L))))) , l_1080[5][6]) , p_31)) >= l_1080[5][6])) ^ 1L), l_1148)), 0)), 1L)))), l_1148))))) <= p_31)), p_31, p_31, g_1024, l_1080[5][6]))
                {
                    for (l_1057 = 0; (l_1057 <= 6); l_1057 += 1)
                    {
                        int i;
                        return g_878[l_1057];
                    }
                    g_40 = l_985;
                    for (g_859 = (-15); (g_859 > 0); ++g_859)
                    {
                        char l_1161 = 0xE7L;
                        g_36 = (safe_sub_func_uint8_t_u_u(250UL, ((l_1051[0] , (g_743 = (safe_lshift_func_uint16_t_u_u(p_31, ((g_675 || (safe_add_func_int8_t_s_s(0x5CL, (safe_lshift_func_int8_t_s_s((0x4BBB2FF9L == g_145[0]), (l_1161 , 5L)))))) & 0x8126L))))) > p_31)));
                    }
                    for (g_743 = 0; (g_743 <= 2); g_743 += 1)
                    {
                        int i, j, k;
                        l_1057 &= (g_852[(g_743 + 1)][g_743][(g_743 + 1)] , (safe_div_func_uint8_t_u_u(g_852[(g_743 + 1)][g_743][(g_743 + 4)], g_852[(g_743 + 1)][g_743][(g_743 + 5)])));
                    }
                }
                else
                {
                    unsigned short l_1166 = 0x0650L;
                    int l_1170[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1170[i] = 0L;
                    for (l_1149 = 17; (l_1149 < (-24)); l_1149 = safe_sub_func_int16_t_s_s(l_1149, 1))
                    {
                        char l_1173 = 0x7EL;
                        l_1170[1] = (l_1080[5][6] < (func_58(l_989[0], l_1166, (l_1057 = l_998[0]), (g_40 = p_31), (l_1169 = (g_217 >= (g_145[0] &= (safe_div_func_int8_t_s_s((l_998[0] , (l_1166 | (l_984[1][0] = func_79(l_1166, g_966[4], g_878[6])))), g_85)))))) < 1L));
                        l_989[0] &= (p_31 | (safe_lshift_func_uint16_t_u_s((l_1173 = (p_31 ^ 0x32CDL)), 8)));
                    }
                }
                g_40 = (l_1103 = ((l_1150 | ((safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_13, (safe_mod_func_uint8_t_u_u((((g_973 ^= ((func_79(g_36, ((l_984[1][0] | (((safe_mod_func_uint32_t_u_u(((l_998[0] = (l_1149 = ((safe_lshift_func_uint8_t_u_u(0x23L, 6)) & l_989[0]))) , (safe_lshift_func_uint16_t_u_u((+((safe_lshift_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(l_989[0], p_31)) != func_79(l_1150, p_31, l_984[1][0])) == p_31) & l_1080[4][4]), g_311)) ^ g_197)), l_1080[5][6]))), 0x352C174AL)) , 0x34L) >= l_1051[1])) , 8UL), g_574) < l_978) ^ 0x93L)) != 0UL) , l_989[0]), p_31)))) || p_31), 65533UL)) , 65535UL) , l_984[1][0]), g_41)) , 0x7A6FL)) != 65535UL));
            }
            else
            {
                int l_1205 = 0x4AFA96D1L;
                int l_1207 = (-9L);
                l_1207 = (l_1206[1][0][0] |= (~(l_1205 = (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((g_574 ^= (p_31 > 65527UL)) , (safe_lshift_func_int8_t_s_s(0L, p_31))), ((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_31, (l_1057 = p_31))) || (l_1025 , ((((l_1204 |= g_973) && 0x2958L) ^ (-1L)) , 1L))), l_984[3][7])) , 0x10L))), p_31)))));
                l_1025 = ((p_31 & l_1057) != (safe_rshift_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u(l_1204, (g_1024 | (g_973 = (safe_div_func_uint8_t_u_u(((((0x74L >= g_966[4]) , (safe_sub_func_uint32_t_u_u((0L | (l_1207 = 1L)), (l_1216 |= g_40)))) | p_31) , 1UL), p_31)))))) , p_31) || l_984[3][4]) > l_978), 0)));
            }
            if (g_422)
                continue;
        }
    }
    for (g_1024 = 25; (g_1024 != 10); g_1024 = safe_sub_func_int16_t_s_s(g_1024, 1))
    {
        int l_1219 = 0x72C56D9EL;
        char l_1251 = 0x7EL;
        unsigned char l_1345 = 249UL;
        int l_1369 = (-6L);
        unsigned l_1406 = 9UL;
        g_41 ^= l_1219;
        for (g_41 = 0; (g_41 <= 2); g_41 += 1)
        {
            int l_1228 = 0x2707A5BEL;
            int l_1229[6] = {0x3DD40C7AL, 1L, 0x3DD40C7AL, 1L, 0x3DD40C7AL, 1L};
            int l_1256 = 0xF7FB1336L;
            short l_1299 = 0x16D4L;
            int i;
            l_1219 = func_58((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_966[(g_41 + 1)], ((((((func_48((func_68((g_675 = g_878[6])) , (p_31 , ((g_110 | (safe_add_func_int32_t_s_s(((((((g_852[1][1][3] = (g_39[1][6] || (((safe_div_func_uint16_t_u_u((l_1229[5] = ((((l_1228 = 1L) , l_1169) >= l_1219) ^ l_974[0][4][3])), l_1219)) , 0x4F4EL) ^ g_966[(g_41 + 1)]))) >= g_40) < 1UL) | 0UL) == (-10L)) >= p_31), g_878[3]))) , l_1219)))) , p_31) , p_31) || g_422) ^ p_31) , p_31) , 0x4CC1L))) || g_311), 1)), g_1024, p_31, g_973, g_41);
            l_1025 = (safe_sub_func_int8_t_s_s(0x4AL, (l_1229[5] >= 0x90D03CB8L)));
            for (l_1228 = 2; (l_1228 >= 0); l_1228 -= 1)
            {
                int l_1249[2];
                short l_1264 = (-1L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1249[i] = 0x07261AFDL;
                if ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int8_t_s_u(((g_852[g_41][l_1228][(l_1228 + 4)] & g_39[2][6]) , ((l_974[0][4][3] > (safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s((((((safe_rshift_func_uint8_t_u_u(((l_1249[1] ^= (safe_div_func_uint32_t_u_u((func_48(p_31) || 0x6B17L), (safe_div_func_int8_t_s_s(0x7FL, (g_852[g_41][l_1228][(l_1228 + 4)] & (g_1248[2] = ((p_31 && 0x1117C5F2L) == g_1024)))))))) != g_852[g_41][l_1228][(l_1228 + 4)]), l_1250)) > g_852[g_41][l_1228][(l_1228 + 4)]) | 0x37L) ^ l_1251) && g_878[1]))) >= 0x18E2L), 0xEA8AL)), g_13)), 65528UL))) == g_973)), g_852[0][1][0])) || p_31))))
                {
                    char l_1252 = 0x96L;
                    l_1229[5] = (g_878[6] >= (g_885[2][0] | ((l_1252 <= func_58((l_974[6][4][1] > (l_1229[0] = ((safe_unary_minus_func_int8_t_s(((p_31 , p_31) , (safe_sub_func_int32_t_s_s(p_31, (((0xBDL >= p_31) || l_1229[5]) ^ p_31)))))) , g_966[4]))), g_40, l_974[6][3][3], p_31, g_888)) & g_814)));
                }
                else
                {
                    short l_1265 = 2L;
                    for (g_353 = 5; (g_353 >= 0); g_353 -= 1)
                    {
                        return p_31;
                    }
                    if (p_31)
                    {
                        if (p_31)
                            break;
                        l_1256 ^= l_1229[1];
                        g_40 &= (l_1219 >= l_1251);
                    }
                    else
                    {
                        l_1256 |= g_36;
                        l_1249[1] = l_1249[1];
                        l_998[0] ^= ((g_36 |= g_878[6]) , (((safe_lshift_func_int8_t_s_u(g_110, 7)) <= ((safe_div_func_uint32_t_u_u(((~((p_31 , (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u(func_58(l_1264, l_1229[4], ((g_885[0][1] = 0x5FBD0C67L) , (((g_1248[2] <= 1L) && p_31) || g_145[1])), l_1251, l_1228), l_974[5][3][3]))))) , p_31)) , 4294967290UL), (-3L))) , 0xD6C1FC12L)) , (-2L)));
                    }
                    l_1265 = g_966[(g_41 + 1)];
                    g_36 = (safe_lshift_func_int8_t_s_s((((l_1219 & (~((safe_add_func_int8_t_s_s((g_1024 > (+((-1L) != (0x0B16CA29L != 0x8F86F3E5L)))), (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((((safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(p_31, (safe_rshift_func_int16_t_s_u((l_1229[4] , p_31), g_353)))) != 0xB1L), g_145[0])) == 1L) || g_1248[2]), 1)) <= 0L), 0x59F5B944L)), 7)) & 0x55FBL) == g_277))) <= 1UL))) & 0L) && p_31), 5));
                }
                if (l_974[3][2][1])
                    break;
                l_1219 = 0xD0DBC3A9L;
                for (g_422 = 0; (g_422 <= 5); g_422 += 1)
                {
                    unsigned char l_1284 = 0xEFL;
                    l_1284 = g_852[g_41][l_1228][(l_1228 + 4)];
                    for (g_888 = 5; (g_888 >= 0); g_888 -= 1)
                    {
                        unsigned l_1287 = 4294967291UL;
                        int l_1296 = (-8L);
                        int i;
                        l_1025 = p_31;
                        l_1296 = (((safe_add_func_int8_t_s_s((l_1287 || 2UL), (safe_rshift_func_uint16_t_u_u((((~((safe_div_func_int8_t_s_s((((p_31 && 0UL) > (l_1251 , 0x3EL)) | (safe_add_func_int32_t_s_s(((g_1248[(g_41 + 1)] = g_85) != ((safe_add_func_uint16_t_u_u(l_1284, g_511)) ^ l_1219)), 1UL))), l_1251)) != 0xA84FL)) || 1UL) || g_145[0]), g_277)))) > 0xE75BL) || (-1L));
                        g_40 = g_966[(g_41 + 1)];
                        g_36 = (g_353 = (safe_mul_func_int32_t_s_s((g_40 &= l_1299), (func_79(p_31, (p_31 , ((safe_sub_func_uint16_t_u_u((l_1249[1] = g_966[(g_41 + 1)]), (g_407 || ((g_966[4] <= l_1287) != (safe_sub_func_int32_t_s_s(p_31, l_1284)))))) , g_878[1])), p_31) <= 9L))));
                    }
                }
            }
        }
        if (((safe_add_func_int8_t_s_s(((g_1248[1] || (((((g_353 = p_31) < ((safe_rshift_func_uint8_t_u_s(g_145[0], 6)) , (65535UL > ((safe_rshift_func_uint16_t_u_s(func_79(g_888, l_1169, g_36), 2)) == g_13)))) > p_31) != p_31) || g_197)) > p_31), l_1169)) > (-1L)))
        {
            short l_1312 = 8L;
            for (g_110 = 14; (g_110 <= 44); g_110 = safe_add_func_uint16_t_u_u(g_110, 1))
            {
                l_1312 = g_1024;
            }
        }
        else
        {
            unsigned short l_1335 = 0x3859L;
            int l_1337 = 7L;
            int l_1340 = (-10L);
            for (g_85 = 0; (g_85 < 28); g_85++)
            {
                char l_1330 = 7L;
                unsigned char l_1333 = 0x6AL;
                int l_1334 = 3L;
                short l_1370 = 1L;
                for (g_36 = (-6); (g_36 > (-19)); --g_36)
                {
                    int l_1332 = 1L;
                    int l_1368 = (-1L);
                    for (l_1250 = 1; (l_1250 >= 0); l_1250 -= 1)
                    {
                        unsigned l_1331 = 0UL;
                        int i, j, k;
                        l_1332 = ((l_1334 &= (g_885[(l_1250 + 3)][l_1250] | (g_353 = (g_852[(l_1250 + 2)][(l_1250 + 1)][(l_1250 + 1)] ^ (func_58((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_852[(l_1250 + 2)][l_1250][(l_1250 + 3)], l_1323)), (+func_79(((((((safe_sub_func_uint32_t_u_u((g_852[(l_1250 + 2)][(l_1250 + 1)][(l_1250 + 1)] | func_58(g_197, func_79((((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(g_277, p_31)), (l_974[0][4][3] , p_31))) > l_1251) , 0x2EBFAB28L), l_1330, p_31), g_885[8][0], p_31, g_40)), l_974[2][3][1])) <= 2UL) ^ l_1331) & l_1332) , g_885[4][0]) == p_31), g_39[2][3], l_1333)))), l_1251)), l_1323, g_110, p_31, l_1219) , 1L))))) , l_1334);
                        if (g_1024)
                            break;
                        if (g_885[(l_1250 + 3)][l_1250])
                            break;
                    }
                    if (l_1323)
                    {
                        int l_1336 = 5L;
                        l_1337 ^= (((g_966[4] & (l_1336 = ((0x587245B9L >= g_888) <= ((l_1335 || (l_1334 , (g_743 |= g_422))) != 0x8AL)))) || 0UL) != p_31);
                        g_41 = p_31;
                    }
                    else
                    {
                        unsigned short l_1341 = 65535UL;
                        unsigned l_1344 = 6UL;
                        l_1341 |= (l_1337 | (safe_div_func_uint16_t_u_u(l_1332, (l_1340 = p_31))));
                        l_1219 = (safe_sub_func_int8_t_s_s((l_1344 != (l_1345 = l_1335)), (func_79((func_79((func_79(p_31, g_36, l_1332) , (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((l_1016 = ((g_885[5][1] | g_743) >= l_45)) && g_675), g_675)), 6))), l_1250, g_852[1][1][3]) != p_31), l_1169, p_31) , g_574)));
                    }
                    l_1370 = ((safe_add_func_uint8_t_u_u(6UL, ((((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((l_1369 &= (safe_div_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((l_998[0] = (l_1334 = func_58(l_1169, g_311, ((((l_1025 > (l_1332 = (safe_lshift_func_int8_t_s_s((l_1219 || l_1335), ((l_1332 , (safe_rshift_func_uint16_t_u_u(func_58(((safe_mod_func_int8_t_s_s(((((((g_884 != l_998[0]) && l_1332) >= g_973) >= 252UL) != p_31) || g_13), p_31)) <= g_407), g_878[3], p_31, l_1345, g_511), g_888))) < p_31))))) , 4294967288UL) < p_31) , l_998[0]), g_311, p_31))), l_1368)) | g_36), p_31))), g_878[1])) ^ p_31), 0xB5L)), g_852[1][0][0])) != 4L) <= p_31) && g_41))) , g_311);
                    l_1016 |= ((l_1219 |= (p_31 | p_31)) & (l_1337 = l_1332));
                }
                return p_31;
            }
            if (g_1248[2])
                break;
            for (g_110 = 0; (g_110 <= 3); g_110 += 1)
            {
                int l_1388 = 6L;
                int l_1390 = 0xD27FE6CAL;
                int i;
                l_1390 |= ((g_888 &= (((safe_div_func_uint16_t_u_u(0x5123L, (g_1248[2] ^ (l_1373 = g_1248[2])))) ^ l_1337) & (safe_sub_func_int16_t_s_s(p_31, ((safe_sub_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_s(func_58((0xADL ^ ((safe_add_func_uint16_t_u_u((p_31 , (g_966[5] & ((safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((l_1388 ^= (safe_lshift_func_uint16_t_u_s(0x27DFL, g_511))) & g_176), g_574)) ^ 0x5DD77F85L), g_85)) != p_31))), p_31)) || p_31)), g_1024, g_878[6], g_311, g_878[6]), g_1248[g_110])) , g_852[1][1][3]) , p_31) != p_31) >= l_1389), 0xB8L)) <= p_31))))) , g_966[3]);
            }
            g_41 = g_277;
        }
        g_353 = (safe_rshift_func_int16_t_s_s((func_58(g_39[0][6], (p_31 && (((l_1219 && 0UL) >= (safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(0x987FFC22L, ((safe_add_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_u((l_1405 = (l_1369 = ((safe_sub_func_uint32_t_u_u(func_79(l_1389, (safe_add_func_int16_t_s_s((func_58(l_1323, l_1405, (p_31 || l_1250), p_31, l_1025) , l_1406), l_1369)), l_1373), g_145[0])) | g_973))), g_197)) < p_31) > p_31) == l_974[0][4][3]) >= l_1406), 0xFA72658AL)) , 0xB7F6846EL))) , l_1373) != g_422), l_974[0][4][3]))) != l_1025)), l_974[0][4][3], p_31, g_13) , p_31), g_36));
    }
    for (g_407 = (-7); (g_407 <= 21); g_407 = safe_add_func_int32_t_s_s(g_407, 9))
    {
        unsigned char l_1412 = 0xE3L;
        int l_1413[5][3];
        int l_1414[4][7][9] = {{{1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}}, {{1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}}, {{1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}}, {{1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}, {1L, 0x0FD8838EL, 1L, 0x944794F7L, 8L, 0xBA02E094L, 1L, (-10L), 0L}}};
        unsigned l_1419[4];
        int l_1445[3][4][4] = {{{0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}}, {{0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}}, {{0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}, {0xB7F5C17AL, 0xB7F5C17AL, 0L, 0x034B945DL}}};
        int l_1592 = (-1L);
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_1413[i][j] = 0x09721FCCL;
        }
        for (i = 0; i < 4; i++)
            l_1419[i] = 0x837FDFB2L;
        if ((l_1413[1][2] = (((1UL < (g_85 = 0x0212L)) ^ p_31) > (l_1025 = (safe_rshift_func_uint16_t_u_u(g_966[2], ((l_1016 = ((((l_1412 = ((l_1411[2] , l_974[0][4][3]) > 0x9CL)) ^ p_31) , (l_1412 ^ 0x2B328F09L)) >= g_511)) && p_31)))))))
        {
            unsigned l_1422 = 4294967293UL;
            int l_1423 = 2L;
            l_1414[3][1][5] |= l_1412;
            l_998[0] |= (g_41 ^= ((g_814 == g_884) < (safe_div_func_uint8_t_u_u(g_1248[2], (safe_div_func_int16_t_s_s(((l_1413[1][2] = (l_1419[1] || func_58((safe_lshift_func_int16_t_s_u((func_58(p_31, func_58((l_1422 = ((l_1413[2][2] = (g_217 == p_31)) | p_31)), (g_675 = ((l_1414[3][5][2] , g_511) && g_675)), l_1423, g_966[5], p_31), l_1423, l_1424[0][1], p_31) , p_31), l_1423)), g_852[1][1][3], l_1419[1], g_407, p_31))) , 0xAE43L), 9L))))));
        }
        else
        {
            int l_1431 = 1L;
            int l_1493 = (-1L);
            unsigned short l_1536[5][4][8] = {{{0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}}, {{0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}}, {{0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}}, {{0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}}, {{0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}, {0UL, 0UL, 0xE4ADL, 0xCD69L, 0xB5CBL, 0x2E59L, 0UL, 0x6191L}}};
            unsigned l_1557 = 0x0F7F12CEL;
            int i, j, k;
            if ((safe_div_func_int8_t_s_s((g_353 <= ((l_1413[4][1] &= g_407) ^ (g_888 = (0x23L < ((safe_add_func_uint8_t_u_u(((0UL & (l_1431 <= (safe_lshift_func_int8_t_s_s(((l_1445[2][1][3] = (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0x81L, ((((safe_unary_minus_func_int8_t_s(g_743)) != (safe_sub_func_uint16_t_u_u(9UL, ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(g_422, 5)), l_1419[3])) | p_31) == g_878[6]) && g_176)))) ^ 0x92L) , g_197))), 3))) > 0x0328C6E2L), 1)))) & 0xB9ACL), p_31)) == p_31))))), l_974[5][3][3])))
            {
                unsigned l_1460 = 0x80FEBB7FL;
                short l_1502 = (-1L);
                int l_1503 = 1L;
                for (g_311 = 6; (g_311 >= 2); g_311 -= 1)
                {
                    int l_1461 = (-10L);
                    unsigned l_1472 = 0x7861FC99L;
                    int l_1500 = 5L;
                    int i;
                    for (l_1412 = 0; (l_1412 <= 3); l_1412 += 1)
                    {
                        int l_1458 = 0xF7AF0916L;
                        unsigned short l_1459 = 0x6708L;
                        int i;
                        l_1445[2][1][3] = func_58((safe_mod_func_uint16_t_u_u(g_878[(l_1412 + 3)], (func_58(((~(l_1458 = (safe_sub_func_int8_t_s_s(((0UL & (g_878[g_311] > g_878[(l_1412 + 3)])) | (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_1431, p_31)), 3))), (((((255UL && g_852[1][1][3]) , (safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(l_1414[3][1][5], g_859)), g_878[g_311]))) > 1L) <= p_31) != 0x6762L))))) < g_13), l_1459, l_1413[1][2], l_1460, l_1431) ^ 1UL))), g_888, l_1412, l_1461, l_1460);
                    }
                    g_41 &= ((g_878[g_311] < (func_79((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((g_878[g_311] != (0xEF6D38A9L <= (+func_79((safe_div_func_uint8_t_u_u(255UL, (safe_mod_func_int8_t_s_s((((func_58(p_31, g_40, p_31, g_110, (l_1472 , p_31)) && l_1460) , 0x99D719B0L) <= 0xF46D0044L), 2L)))), l_1460, p_31)))) ^ l_1431), g_36)), 0x9DL)), p_31, p_31) != g_311)) | g_878[3]);
                    for (l_1169 = 5; (l_1169 >= 0); l_1169 -= 1)
                    {
                        short l_1501 = (-1L);
                        g_353 |= (!(((safe_add_func_uint16_t_u_u(p_31, (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((((safe_div_func_int32_t_s_s(((l_1503 = ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((func_79((safe_sub_func_uint8_t_u_u((((l_1500 = (l_1461 = (+(safe_mod_func_int32_t_s_s(g_1024, (l_998[0] &= (0x13E42CD1L > ((l_1493 = (0xC3DA9513L <= (safe_rshift_func_int8_t_s_u(p_31, p_31)))) != (g_973 = (safe_add_func_int32_t_s_s(((l_1413[4][0] ^ (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_31, (g_966[4] , 0x44L))), p_31))) <= p_31), 0x92ED6CDFL))))))))))) , g_885[7][1]) && p_31), g_852[2][2][7])), l_1501, l_1502) , p_31), 2)) || l_1431), 0UL)) & 0x26L)) , p_31), g_574)) < p_31) ^ 1UL) != g_743), l_1016)) >= p_31), p_31)) >= 0xB5L), p_31)))) > p_31) & l_1419[0]));
                    }
                    return p_31;
                }
                g_353 &= (l_1413[1][1] ^ 0xE54AL);
                if (p_31)
                    continue;
            }
            else
            {
                unsigned l_1539 = 4294967289UL;
                short l_1558 = (-2L);
                char l_1567 = 1L;
                int l_1571 = 0xDB2A5F6CL;
                int l_1609 = 0xA70B671FL;
                int l_1613 = 0x820D4FB1L;
                if (((safe_add_func_uint32_t_u_u(func_79(p_31, l_1419[1], l_1493), l_1373)) <= func_79((g_966[4] &= (safe_sub_func_int32_t_s_s(func_58(((((((safe_mod_func_uint32_t_u_u((l_1445[1][2][0] && (0L != func_79(((p_31 | (l_1445[2][2][2] = g_878[6])) >= 0xC6L), g_1510, p_31))), 1UL)) != l_1414[3][6][1]) , p_31) , 0x5A5DL) < p_31) , g_311), g_885[5][1], l_1025, p_31, g_110), g_1511))), l_1431, p_31)))
                {
                    unsigned short l_1527 = 65535UL;
                    int l_1556[3][7][7] = {{{0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}}, {{0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}}, {{0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}, {0x3EBDFF12L, (-2L), (-1L), 0L, 7L, 0xBC86ACA9L, 0xB156B09FL}}};
                    int l_1586 = (-1L);
                    unsigned char l_1593[1][10][10] = {{{9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}, {9UL, 0x9EL, 0x62L, 255UL, 9UL, 1UL, 0x27L, 1UL, 9UL, 255UL}}};
                    int i, j, k;
                    for (g_85 = 0; (g_85 != (-26)); g_85--)
                    {
                        short l_1530 = 0x212EL;
                        unsigned short l_1545 = 65531UL;
                        g_36 = (func_79(g_878[0], (8UL <= ((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_1419[1] , ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s(p_31, 1)))) , ((l_1405 = p_31) <= (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_1527, ((g_884 , (safe_mod_func_int32_t_s_s((l_1493 = l_1530), (safe_rshift_func_uint8_t_u_u((p_31 >= l_1424[0][1]), 5))))) > 0x53L))) | g_966[4]), g_973))))), g_973)), 0x8AL)) , 255UL), g_966[4])) , 0x8042L) == 0x235EL) == p_31)), p_31) , 1L);
                        g_36 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(func_58((g_110 | p_31), g_41, (l_1536[1][2][1] ^ ((((safe_rshift_func_uint16_t_u_u(((l_1539 ^ (+g_39[0][5])) , ((((safe_unary_minus_func_int32_t_s(0x4662C53CL)) | (safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((l_1527 > (l_998[0] = (7L | p_31))) < l_1431), 0xAEL)) , l_1545), l_1545))) == 0xEBL) , p_31)), 6)) || 4294967293UL) == p_31) , (-10L))), g_1248[2], p_31))), 1L));
                        l_998[0] ^= ((safe_rshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((l_1413[0][1] &= (+(g_966[0] ^ (safe_unary_minus_func_uint16_t_u(((g_878[2] < ((g_743 = (safe_unary_minus_func_int16_t_s(((((l_1445[2][1][3] = (((!l_1527) , p_31) != (g_145[1] = l_1527))) >= func_79((((func_79((g_859 &= (safe_lshift_func_int16_t_s_s(((func_79(g_422, (safe_rshift_func_int8_t_s_s((l_1556[0][3][5] ^= (l_1405 = g_407)), 4)), p_31) < l_1169) > 0x2787L), 2))), p_31, l_1557) || 0x0DL) , p_31) , l_1411[2]), l_1016, g_277)) ^ g_85) , g_36)))) < l_1527)) && l_1558)))))) , g_13), l_1419[2])) , g_884), l_1419[2])) | p_31);
                        if (g_1248[2])
                            break;
                    }
                    if (l_1414[3][6][2])
                    {
                        char l_1566 = 1L;
                        g_40 = (((g_878[6] = func_58(((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((l_1556[0][3][5] ^= ((0UL == 0x6E10B036L) | 1L)))), g_966[1])) , (((g_353 &= 1L) ^ func_79(((safe_mod_func_int16_t_s_s((-6L), ((l_1556[0][3][5] = 0x1D45BE67L) && ((safe_add_func_uint8_t_u_u((+g_878[6]), ((((l_1536[1][1][3] , l_1566) <= g_859) , 8UL) >= 0x2BEAL))) < l_1419[1])))) >= g_966[4]), l_1567, p_31)) >= p_31)), p_31, g_888, p_31, l_1567)) != 0x59CCL) , p_31);
                        l_1445[2][2][1] |= (l_1571 = ((safe_sub_func_uint8_t_u_u(p_31, (safe_unary_minus_func_uint32_t_u(p_31)))) <= l_1557));
                        l_1493 = (((safe_lshift_func_int16_t_s_s((~l_1566), (((g_878[5] > p_31) >= (0xD1L >= (l_1556[0][3][5] |= p_31))) , (safe_div_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(g_874, (safe_div_func_int32_t_s_s((g_884 != p_31), (safe_add_func_uint8_t_u_u(((l_1556[1][3][6] = (p_31 , g_145[0])) > 0x27B6BB21L), p_31)))))) && l_1025), l_1566)) >= g_1511), l_1566))))) < g_40) ^ 0x0BF0L);
                        g_41 &= ((l_1586 |= (safe_sub_func_int32_t_s_s((l_1556[1][0][4] || p_31), (l_998[0] = (-8L))))) >= func_58((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(func_79((g_884 , 0L), p_31, ((p_31 , (g_878[3] = ((g_1591[1][2] != l_1566) || l_1592))) || 0xAA71L)), 8)), 0xEAL)), g_888, l_1593[0][4][1], l_1414[2][1][0], g_40));
                    }
                    else
                    {
                        l_1556[2][2][5] = (((safe_lshift_func_int8_t_s_u(g_110, (safe_add_func_int32_t_s_s((l_998[0] = ((func_58((safe_mod_func_int8_t_s_s(g_39[2][1], (l_1571 = l_1592))), p_31, g_574, g_675, g_814) >= (((0x21L || p_31) <= g_1511) != g_675)) < 5UL)), g_40)))) <= l_1593[0][7][7]) , 0x9A485976L);
                        l_1556[1][3][6] |= l_1557;
                        g_41 = (l_1493 &= (l_1556[2][4][1] = (g_1600[1][7] = p_31)));
                        l_1556[0][3][5] = (safe_add_func_int16_t_s_s(g_852[1][1][3], 0x94CEL));
                    }
                }
                else
                {
                    unsigned l_1607 = 4294967295UL;
                    if (l_1539)
                        break;
                    l_1613 |= ((l_1571 = func_79(((g_1612 |= ((p_31 , (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_1607, (safe_unary_minus_func_int16_t_s(((g_675 == (func_79(l_1609, l_1405, ((safe_lshift_func_uint8_t_u_u(l_1536[4][3][1], 3)) == g_145[0])) > 1UL)) & g_36))))), g_814))) ^ (-8L))) && g_1511), g_1248[3], p_31)) > l_1431);
                }
            }
            return p_31;
        }
    }
    if ((p_31 && l_1025))
    {
        int l_1623 = 0x6D7E8723L;
        int l_1631 = 0x70769A54L;
        for (g_743 = 10; (g_743 != 11); g_743 = safe_add_func_int16_t_s_s(g_743, 9))
        {
            char l_1622 = 0xB0L;
            char l_1651[10][4] = {{0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}, {0xE6L, 0L, (-10L), 1L}};
            unsigned l_1676 = 0x0F62A2C2L;
            int l_1724 = 0L;
            int i, j;
            g_1600[2][4] = ((!((safe_sub_func_int8_t_s_s((g_1024 = func_79(((0xE1748935L || (g_36 = ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((-1L) != 2UL), ((g_40 = (func_58(l_1622, l_1623, (func_79(p_31, (((((g_1024 > ((l_1631 = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xEDF8623BL, g_407)), l_1630)), (-1L))) != l_1623)) | g_878[4])) >= 0xC6L) , g_1600[2][7]) & p_31) >= l_998[0]), g_1511) ^ g_40), l_1623, p_31) ^ g_145[0])) , p_31))), g_1248[2])) & 0x0CABL))) ^ g_511), g_966[1], g_878[6])), p_31)) < p_31)) < l_1622);
            for (l_1630 = 15; (l_1630 > (-21)); l_1630 = safe_sub_func_int8_t_s_s(l_1630, 8))
            {
                unsigned l_1650 = 1UL;
                int l_1692 = 6L;
                int l_1693[7][1] = {{0x18F9D7D2L}, {0x18F9D7D2L}, {0x18F9D7D2L}, {0x18F9D7D2L}, {0x18F9D7D2L}, {0x18F9D7D2L}, {0x18F9D7D2L}};
                unsigned l_1710 = 0x35ECDDF5L;
                int i, j;
                for (l_1623 = (-25); (l_1623 == 8); ++l_1623)
                {
                    char l_1652 = 0xC8L;
                    unsigned char l_1653 = 1UL;
                    int l_1654 = 0x006B76D0L;
                    unsigned l_1687 = 0x82817F19L;
                    for (g_884 = 0; (g_884 <= 32); g_884 = safe_add_func_uint32_t_u_u(g_884, 1))
                    {
                        unsigned l_1649 = 1UL;
                        l_1405 &= (!(0x1750BF91L == (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((safe_add_func_int16_t_s_s(l_1622, ((l_1650 = ((func_68(g_1511) <= g_36) , ((safe_sub_func_int8_t_s_s(func_68(func_79(l_1648, l_1649, l_1623)), p_31)) <= 5L))) || 0x2024EF9FL))) <= g_859) < l_1651[9][1]), g_13)), g_874)), 2))));
                        if (g_422)
                            continue;
                    }
                    if (g_85)
                    {
                        l_1653 = l_1652;
                    }
                    else
                    {
                        unsigned short l_1657 = 5UL;
                        l_1654 = l_1631;
                        if (g_407)
                            continue;
                        g_1671 ^= func_68((p_31 , (safe_div_func_uint32_t_u_u((l_1657 = p_31), (safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(func_79(func_58((safe_sub_func_int16_t_s_s((((safe_add_func_int16_t_s_s(l_1622, (safe_lshift_func_uint16_t_u_s((g_176 ^ (l_1650 == ((safe_unary_minus_func_uint8_t_u((((p_31 | (safe_div_func_int8_t_s_s((p_31 <= ((l_1650 <= 1L) ^ g_874)), p_31))) & p_31) , 255UL))) != l_1650))), 12)))) >= (-5L)) , g_1248[2]), g_574)), g_1600[1][1], g_878[6], p_31, p_31), l_1631, l_1631), g_852[1][1][6])), 1L))))));
                        l_1654 = (!(safe_add_func_int8_t_s_s(l_998[0], (safe_add_func_int8_t_s_s(((((l_1676 ^ (g_885[6][0] = func_68(g_1671))) <= (safe_div_func_int16_t_s_s((0xBCL != (4294967295UL < ((safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((g_814 = p_31), ((((g_884 & (-8L)) , (-1L)) , p_31) || g_13))), g_1600[4][3])) ^ 0xCCD7L))), 0xC0C2L))) | 0x6AE7215CL) == g_675), g_675)))));
                    }
                    for (l_1250 = 0; (l_1250 != 0); l_1250 = safe_add_func_int32_t_s_s(l_1250, 7))
                    {
                        l_1654 = (safe_rshift_func_uint16_t_u_u(g_277, 9));
                        l_1654 = (l_1693[1][0] = (((((g_36 = l_1687) , l_1651[4][2]) ^ ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(p_31, p_31)), p_31)) > 5UL)) & (((l_1622 , (l_1692 = (func_79(p_31, (p_31 < g_1024), p_31) > 0xEF1621C2L))) < g_675) == g_407)) , (-10L)));
                    }
                    l_1389 |= (safe_lshift_func_int8_t_s_s(((!(p_31 < (safe_lshift_func_int8_t_s_u(l_1693[2][0], ((func_58(p_31, g_852[3][1][3], g_852[1][2][0], ((safe_add_func_int32_t_s_s((func_68(func_79((l_1710 |= (((((safe_add_func_int8_t_s_s(g_41, p_31)) < ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_874, l_1693[1][0])), 2UL)), l_1654)) , g_311)) && 0x309F9114L) && 0xAF197FB2L) > 0x150FL)), g_878[6], l_1016)) < 0L), 0x5BCA2E87L)) > g_1711), p_31) , g_85) >= 0x63L))))) < 0L), p_31));
                }
                g_1711 = (g_1600[1][7] = ((safe_rshift_func_int16_t_s_u((func_58((g_277 = (safe_mod_func_int32_t_s_s(((g_874 < (l_1724 = ((+(safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((4294967290UL | p_31) == (l_1323 <= p_31)), ((p_31 > (safe_div_func_uint16_t_u_u(g_176, g_966[4]))) < (((0xCEL > g_966[4]) & g_888) >= 0x9A54L)))) ^ 0UL), l_1710))) > 255UL))) == l_1631), p_31))), l_1405, l_1623, p_31, p_31) & g_13), 8)) , p_31));
            }
            l_1631 = (((g_1612 & (((p_31 | (((safe_sub_func_int8_t_s_s(p_31, ((p_31 ^ l_1631) > (safe_sub_func_int8_t_s_s(l_1651[3][2], ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_31, (((g_1024 |= (((safe_sub_func_int16_t_s_s(l_1651[7][2], (safe_div_func_int8_t_s_s(p_31, p_31)))) , p_31) , 0x07L)) || g_852[1][1][3]) == 0xDAL))), g_277)) > 0UL)))))) ^ l_1016) >= l_998[0])) & l_1676) > g_85)) && l_974[0][4][3]) == 0L);
        }
        l_1648 &= p_31;
    }
    else
    {
        unsigned char l_1756 = 0UL;
        int l_1759[4][5] = {{(-3L), 1L, 0x7832EAA2L, 0xDD1598C7L, 0xDD1598C7L}, {(-3L), 1L, 0x7832EAA2L, 0xDD1598C7L, 0xDD1598C7L}, {(-3L), 1L, 0x7832EAA2L, 0xDD1598C7L, 0xDD1598C7L}, {(-3L), 1L, 0x7832EAA2L, 0xDD1598C7L, 0xDD1598C7L}};
        int i, j;
        for (l_1648 = 0; (l_1648 >= 0); ++l_1648)
        {
            int l_1747 = 0x68FD120CL;
            char l_1825 = 0x69L;
            short l_1836 = 1L;
            l_1025 = g_884;
            g_1711 = ((g_1248[2] , ((g_885[5][1] <= (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(65535UL, l_1250)), (((((((((func_79((((safe_lshift_func_uint16_t_u_u((p_31 , 65535UL), (g_852[2][1][6] && func_68((g_39[1][5] = (safe_mod_func_int16_t_s_s(p_31, ((l_1747 = ((g_110 |= 0x5DB72953L) | g_145[0])) | l_1016)))))))) , g_885[5][1]) | 0x376BL), p_31, l_1373) <= l_1630) > 0xDBEB1001L) <= g_885[5][1]) , 0xBBL) == l_1411[2]) >= p_31) > 0x416EA418L) < 0x86L) , 254UL)))) , g_176)) , p_31);
            g_1600[1][7] = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((l_1747 = (safe_add_func_uint8_t_u_u(g_574, l_1747))), (func_68((l_1389 = g_41)) | g_1024))), p_31));
            if ((((safe_rshift_func_uint16_t_u_u((1UL < ((g_407 == (-2L)) || func_68(l_1756))), ((!((5UL && ((safe_mod_func_int8_t_s_s((p_31 && 4UL), (l_1759[2][3] = ((((l_1756 || 65529UL) == g_1600[1][7]) , p_31) , g_859)))) , (-1L))) & l_1747)) | p_31))) >= g_859) | 0x5392L))
            {
                unsigned l_1795[5];
                int l_1820 = 0xB2C841AAL;
                int i;
                for (i = 0; i < 5; i++)
                    l_1795[i] = 0UL;
                for (g_40 = (-26); (g_40 < 1); ++g_40)
                {
                    int l_1770 = 0xDA32B8C7L;
                    int l_1773 = 6L;
                    int l_1786 = (-1L);
                    char l_1794 = (-1L);
                    for (l_1016 = 0; (l_1016 != 8); l_1016 = safe_add_func_int8_t_s_s(l_1016, 1))
                    {
                        short l_1787 = (-1L);
                        int l_1796[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1796[i] = 1L;
                        l_1787 = ((safe_add_func_int32_t_s_s((((~(safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_1770 , l_1630), p_31)), ((p_31 , (p_31 >= ((l_1773 < (((g_511 |= (0x930AL > ((safe_lshift_func_uint8_t_u_s((l_1786 = ((((func_79(((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_31 , ((g_814 = (p_31 , g_859)) >= g_878[6])), p_31)), 65527UL)), 0)), g_859)), g_1600[1][7])) >= (-4L)), g_884, p_31) , g_973) ^ g_966[4]) < g_1248[1]) | 0x25500005L)), 6)) || p_31))) | (-6L)) <= l_1747)) < p_31))) , l_1756)))) , g_85) , p_31), l_1411[1])) | 0x70L);
                        g_353 = ((((((((safe_div_func_uint8_t_u_u((((0x5D1FB170L == (l_1786 , p_31)) != 252UL) , ((safe_add_func_uint16_t_u_u(g_145[0], ((((safe_sub_func_uint32_t_u_u((l_1796[2] &= (p_31 < ((func_79(l_45, l_1770, l_1794) , l_1759[2][3]) >= l_1795[2]))), g_973)) < g_1024) , l_1796[6]) != l_1795[2]))) > g_852[2][2][6])), l_1787)) , p_31) , g_885[5][1]) , p_31) <= l_1759[2][3]) , g_110) >= 0x2EE20E1DL) >= p_31);
                    }
                    for (l_1250 = 0; (l_1250 > 22); l_1250 = safe_add_func_uint8_t_u_u(l_1250, 8))
                    {
                        unsigned l_1819 = 0x5EA7F105L;
                        int l_1821 = 0x7A94A666L;
                        int l_1822[10][10] = {{9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}, {9L, 0x2264C726L, 0L, 9L, 0xD52541CDL, (-10L), 0xBE6311B5L, 0x2A9FA7DCL, 0xBE6311B5L, (-10L)}};
                        int i, j;
                        l_1822[0][0] = (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((l_1821 &= ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((l_1759[3][4] = ((((safe_div_func_int32_t_s_s(g_874, (l_1025 = l_1250))) > (((safe_lshift_func_uint16_t_u_s((l_1630 & ((p_31 >= p_31) , (safe_mod_func_uint8_t_u_u((l_1747 = func_58(l_1747, g_1600[2][2], (l_1820 |= ((safe_rshift_func_uint8_t_u_s(((((func_79(g_145[0], func_58(((safe_lshift_func_int16_t_s_s(g_1591[1][2], l_1795[2])) , g_973), l_1794, p_31, g_277, l_1819), l_1795[4]) , (-6L)) != g_311) , 0xA645L) <= p_31), l_1747)) && g_1671)), g_1248[2], l_1759[2][4])), p_31)))), g_1248[2])) , l_1819) <= g_511)) != p_31) , p_31)), 3)) == 0L), g_1510)), l_1250)) || l_974[2][0][0])), p_31)), g_814));
                    }
                }
            }
            else
            {
                g_1600[1][7] = ((safe_mod_func_int32_t_s_s(g_41, p_31)) ^ l_1825);
                l_1759[3][3] = ((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint8_t_u(((g_1024 ^= ((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s((((g_852[1][1][3] = (g_353 > (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0x1408L, ((p_31 , 0xAC3FL) ^ (((0x92E4L == g_1591[1][2]) ^ 5UL) , 65535UL)))), g_110)))) ^ 0x86FC0D15L) , l_1411[3]), g_859)) , 1L) , g_852[0][2][6]) < 246UL), l_1836)) , p_31)) && g_966[3]))))) >= 1UL);
                l_1759[2][2] = p_31;
            }
        }
        l_1648 ^= (l_1759[2][3] = (safe_add_func_uint32_t_u_u((g_852[1][2][3] = l_1630), p_31)));
        return l_1759[2][3];
    }
    return g_814;
}







static short func_48(unsigned char p_49)
{
    unsigned char l_53 = 0x1AL;
    int l_905 = 0xFF9993A4L;
    unsigned l_930 = 0xAE8425B4L;
    short l_953 = 0x2FF9L;
    int l_954 = 8L;
    for (g_36 = 2; (g_36 >= 0); g_36 -= 1)
    {
        int l_52 = 0x3BC9FC22L;
        if ((safe_rshift_func_int16_t_s_u(((((l_52 & l_53) | (!(l_905 = func_54((safe_div_func_uint8_t_u_u(func_58((((((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((g_40 ^= 0L) , func_68(p_49)) < (safe_div_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(p_49, g_13)) || (0x33EFB2E9L < 0L)) , g_41), g_277)) ^ g_277) | 65530UL), l_53))), 14)), p_49)) , p_49) < g_277) >= 0xDAL) && 0x479CL), p_49, l_53, g_13, g_41), 0x70L)))))) , (-10L)) != l_52), g_41)))
        {
            return l_905;
        }
        else
        {
            unsigned short l_912 = 65535UL;
            int l_913 = 0x6C74C21BL;
            l_913 = ((g_574 != (((g_511 = (l_53 , (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((func_58((p_49 = (5UL != (safe_lshift_func_int16_t_s_s((g_888 &= (l_912 = (-9L))), p_49)))), l_905, l_913, ((g_176 ^ l_52) > (-4L)), l_52) != l_913), l_905)) || p_49), 0x73E74D4DL)))) ^ 6L) && g_885[6][1])) != 1L);
        }
        for (g_110 = 0; (g_110 <= 2); g_110 += 1)
        {
            int i, j;
            if (g_39[g_110][(g_110 + 4)])
                break;
        }
        for (g_422 = 0; (g_422 <= 2); g_422 += 1)
        {
            for (g_874 = 0; (g_874 <= 2); g_874 += 1)
            {
                int i, j;
                if (g_39[g_36][(g_422 + 1)])
                    break;
            }
        }
        for (g_422 = 2; (g_422 >= 0); g_422 -= 1)
        {
            unsigned l_917[10][2][7] = {{{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}, {{4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}, {4294967295UL, 4294967294UL, 0xE67925ADL, 0xEF8165AEL, 4294967295UL, 0xEAAF1211L, 0x37AB7BAAL}}};
            int i, j, k;
            for (g_888 = 2; (g_888 >= 0); g_888 -= 1)
            {
                int l_942 = 1L;
                for (g_311 = 0; (g_311 <= 2); g_311 += 1)
                {
                    int l_916 = 0x05A2A2F7L;
                    int l_933 = 0x072CC977L;
                    unsigned short l_943 = 0UL;
                    for (l_53 = 0; (l_53 <= 2); l_53 += 1)
                    {
                        int i, j;
                        g_40 = ((safe_sub_func_int8_t_s_s(g_39[g_422][(l_53 + 4)], func_79(g_885[5][1], p_49, g_197))) , l_916);
                    }
                    l_52 = func_58((l_917[5][1][4] | (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((p_49 , (safe_sub_func_int16_t_s_s((((((~g_36) ^ (((safe_div_func_uint32_t_u_u((+((~l_930) >= (safe_sub_func_int16_t_s_s(0L, ((g_885[4][0] = (l_933 = 0xCF52B6EDL)) < func_79(((~((((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_874, func_79((g_859 = (g_311 >= (((g_353 = (safe_sub_func_int8_t_s_s((~g_217), g_110))) ^ 0xD91926EDL) , p_49))), g_277, p_49))), 4294967293UL)), 9)) , (-7L)) != 0x0949L) <= l_942)) , l_930), g_40, l_52)))))), g_874)) , 0x75L) & 0x51L)) , l_933) < l_943) >= (-4L)), p_49))) ^ 0xDA7B25BCL), 0)), p_49)), g_40)) & l_52) >= 0x65D058EDL), 6))), p_49, p_49, p_49, l_52);
                }
                if (l_52)
                    continue;
                g_353 = (l_52 = l_53);
                for (g_40 = 2; (g_40 >= 0); g_40 -= 1)
                {
                    g_353 = p_49;
                    if (l_52)
                        continue;
                    if (p_49)
                        break;
                }
            }
            if (g_743)
                continue;
        }
    }
    for (g_277 = 7; (g_277 <= 43); g_277 = safe_add_func_uint16_t_u_u(g_277, 7))
    {
        unsigned l_952 = 5UL;
        int l_955 = 1L;
        g_353 = (safe_lshift_func_int16_t_s_s(((((g_511 , func_79(g_407, (safe_rshift_func_uint8_t_u_u((l_955 ^= ((p_49 ^ ((((safe_add_func_int32_t_s_s(((l_905 = func_58(l_905, (l_954 = (g_675 = func_79(l_952, l_953, func_58(l_53, ((9L >= 0x0465L) > p_49), l_905, g_217, p_49)))), p_49, g_311, p_49)) != 3L), g_885[5][1])) | 0x0771L) == g_145[0]) | 65533UL)) | p_49)), l_53)), p_49)) <= p_49) , 65529UL) , 0x0E4FL), 4));
        l_905 = func_58(((((((g_878[6] = p_49) == 0xCD6CL) , g_885[5][1]) <= (l_53 <= p_49)) , ((!(((g_814 , l_953) >= l_953) || (~((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_852[1][1][3], 0)), l_930)) < g_852[0][0][2])))) | l_930)) , 248UL), l_955, l_905, g_40, p_49);
    }
    l_954 = l_930;
    return p_49;
}







static unsigned func_54(int p_55)
{
    char l_481 = 2L;
    int l_482 = (-10L);
    unsigned l_492 = 0UL;
    int l_495[2];
    int l_497 = (-1L);
    unsigned l_519 = 0xF0CAE248L;
    int l_683 = 1L;
    unsigned short l_688 = 0xF424L;
    int l_745 = 0x4DF63BA0L;
    unsigned l_754 = 4294967295UL;
    int l_798[4][10][6] = {{{0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}}, {{0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}}, {{0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}}, {{0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}, {0x1B70E989L, 8L, (-1L), 0x6F123FE4L, 1L, 0xEB05917AL}}};
    unsigned char l_894 = 1UL;
    int l_900 = 0x0A0ED5EBL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_495[i] = 0xFCE031FBL;
    if ((((safe_mod_func_uint16_t_u_u(((0x69L == (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_482 = l_481), 13)), (safe_div_func_uint16_t_u_u(g_39[1][6], g_422))))) , g_145[1]), func_58(l_481, (safe_unary_minus_func_uint8_t_u(func_79((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((4294967295UL != g_145[0]), (safe_rshift_func_uint16_t_u_s(((func_79(l_481, l_492, l_481) || 0x19L) || 250UL), 0)))), g_311)), g_145[0], g_39[0][1]))), l_481, p_55, l_492))) > l_492) <= l_481))
    {
        int l_496 = (-6L);
        int l_504[8][4][5] = {{{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}, {{0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}, {0x80F45DC1L, 2L, 0x254A12D0L, 0x42BEEC04L, 0x7CC634ACL}}};
        unsigned char l_505 = 0x14L;
        short l_552 = 0L;
        int l_649 = (-1L);
        unsigned char l_674 = 8UL;
        int i, j, k;
        l_495[1] = ((safe_add_func_int8_t_s_s((l_495[1] || (g_176 = (l_496 >= l_496))), (l_504[6][2][0] &= (l_496 ^ func_79(func_79((g_311 = l_497), g_36, ((l_496 , (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((0x76L < (safe_mod_func_uint32_t_u_u((0xC738L <= g_277), l_495[1]))), 0xF6L)), g_353))) & p_55)), g_422, g_39[1][5]))))) <= p_55);
        for (g_277 = 0; (g_277 <= 2); g_277 += 1)
        {
            unsigned l_510 = 8UL;
            int l_531 = (-1L);
            unsigned char l_617 = 249UL;
            for (g_176 = 0; (g_176 <= 2); g_176 += 1)
            {
                int l_523 = 0xA3DD6A2AL;
                int l_542 = (-1L);
                unsigned char l_561 = 3UL;
                int l_596 = (-1L);
                int l_633 = (-1L);
                char l_644 = 1L;
                unsigned char l_673 = 0xD3L;
                int i, j;
                for (l_496 = 0; l_496 < 3; l_496 += 1)
                {
                    for (g_197 = 0; g_197 < 7; g_197 += 1)
                    {
                        g_39[l_496][g_197] = 0UL;
                    }
                }
                if (((l_496 |= func_79(g_39[g_277][(g_277 + 3)], g_176, (l_504[6][2][0] < l_505))) | (safe_mod_func_int8_t_s_s((((p_55 >= l_510) , 65529UL) > (l_504[6][2][0] == g_353)), l_510))))
                {
                    int l_516[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_516[i] = 1L;
                    if (g_422)
                    {
                        g_511 = p_55;
                        l_516[0] = (l_496 && (l_495[1] = (((safe_add_func_uint16_t_u_u(0UL, g_39[g_277][(g_277 + 3)])) || 0x270FL) , (g_217 = (((g_422 == ((p_55 ^ (func_79((func_79(l_516[0], g_39[0][4], ((safe_rshift_func_uint16_t_u_s(((l_519 && l_496) & 1UL), 11)) , p_55)) ^ l_516[0]), p_55, p_55) < g_277)) , 8L)) > 0x52FE8088L) >= l_510)))));
                    }
                    else
                    {
                        unsigned l_522 = 0xC10CFE91L;
                        int l_530 = 0L;
                        l_523 = (safe_lshift_func_int8_t_s_s((l_522 = 1L), 3));
                        if (p_55)
                            continue;
                        g_353 = (l_531 = (p_55 , (safe_lshift_func_uint8_t_u_u(l_523, (g_422 , func_79((l_516[0] = l_505), (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((l_530 = g_110), (l_492 && (l_504[4][0][0] , (g_407 , ((l_522 <= 0x438FL) && g_217)))))), p_55)), l_504[6][2][0]))))));
                    }
                }
                else
                {
                    unsigned char l_543 = 0x1DL;
                    int l_573 = (-7L);
                    if ((~func_79(((safe_rshift_func_int16_t_s_s((g_85 = g_217), (safe_sub_func_int32_t_s_s((((l_504[2][1][1] = (((0xCDL >= ((safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((0xDDD755F2L & (-5L)), 0)) < (safe_add_func_int16_t_s_s(0x5944L, ((l_542 = p_55) , (((l_543 > l_531) & (safe_mod_func_int32_t_s_s(p_55, g_13))) >= p_55))))) ^ l_531), 5)) , p_55)) == l_481) | p_55)) > g_39[1][6]) , l_531), 0UL)))) && 4294967295UL), p_55, p_55)))
                    {
                        unsigned char l_549 = 1UL;
                        int l_572 = 1L;
                        g_40 &= ((safe_unary_minus_func_uint8_t_u((l_523 ^= p_55))) , ((g_217 = (safe_div_func_uint16_t_u_u(g_36, (func_79((g_311 = (g_145[0] <= (l_504[6][2][0] = l_549))), ((safe_div_func_int16_t_s_s(((p_55 == func_79(g_145[0], g_13, (~l_481))) < p_55), l_542)) , l_497), p_55) & 0x9663F59EL)))) <= l_552));
                        l_573 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(func_79((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(l_542, l_561)), (safe_lshift_func_uint8_t_u_u(g_353, ((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((-1L), g_110)), (func_79(g_176, l_504[6][2][0], (g_39[0][4] &= (safe_lshift_func_uint16_t_u_s((g_145[0] = ((safe_sub_func_uint8_t_u_u((l_572 |= (g_197 |= 0x1FL)), p_55)) , l_549)), 12)))) & 9L))) >= 0L))))), l_497, l_549), g_110)), 3));
                    }
                    else
                    {
                        if (p_55)
                            break;
                    }
                    if ((func_79((g_311 = (g_36 == l_495[1])), g_574, g_145[0]) > (g_36 , ((l_531 = p_55) & 4294967292UL))))
                    {
                        unsigned l_575 = 0x176B55D9L;
                        return l_575;
                    }
                    else
                    {
                        short l_580[1][9][9] = {{{(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}, {(-4L), (-10L), (-4L), 1L, (-1L), 5L, (-1L), 0L, (-1L)}}};
                        int l_597 = (-1L);
                        int l_598[5] = {0L, (-7L), 0L, (-7L), 0L};
                        int i, j, k;
                        g_353 = (((safe_div_func_uint32_t_u_u((((l_580[0][6][8] <= (!(safe_unary_minus_func_int32_t_s(((0xA0FAFE86L && (l_573 |= 0xB0D0B31CL)) , p_55))))) || (g_511 = (l_504[6][2][0] = (((safe_lshift_func_int8_t_s_u(l_481, 5)) , l_523) , (p_55 ^ (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((func_79((((((g_197 = p_55) , (l_573 = 0x97A66987L)) & p_55) || p_55) , g_511), p_55, p_55) <= g_574) , g_176), g_36)), 14))))))) == g_85), p_55)) <= g_353) <= 0x32F2DA41L);
                        g_353 ^= p_55;
                        if (p_55)
                            continue;
                        l_598[0] |= ((((p_55 > (((l_597 ^= (func_79(p_55, (safe_sub_func_int8_t_s_s((l_531 = (safe_sub_func_uint8_t_u_u(((2L == (safe_rshift_func_uint8_t_u_s(0UL, g_574))) != g_353), ((((safe_rshift_func_int8_t_s_u(l_596, 1)) > g_39[g_277][(g_277 + 3)]) || (-6L)) | 0x8ABC5DBCL)))), l_573)), g_40) && g_217)) , 0x7AL) , 251UL)) ^ l_505) >= 1UL) < 7UL);
                    }
                    if (((g_422 = g_277) | (((g_353 |= (l_561 | l_543)) >= g_197) > p_55)))
                    {
                        unsigned l_599 = 0xDF7DF3B9L;
                        if (g_197)
                            break;
                        if (p_55)
                            continue;
                        l_531 |= l_599;
                    }
                    else
                    {
                        int l_602 = 0x70350CB7L;
                        int l_618 = 1L;
                        g_353 = (safe_div_func_uint32_t_u_u(l_602, (l_496 |= (safe_div_func_int32_t_s_s((p_55 != (l_618 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(func_79((safe_lshift_func_int16_t_s_s((g_85 = ((((!(g_13 , (func_79((((safe_sub_func_int16_t_s_s((g_40 || ((l_542 & l_492) < (l_602 <= ((safe_rshift_func_int8_t_s_s((l_543 || ((func_79((p_55 , p_55), p_55, p_55) & l_573) == 0xDA96L)), 5)) > 246UL)))), g_511)) < 0x76L) != g_422), p_55, l_531) , l_543))) != l_617) , 1L) < g_145[1])), 0)), p_55, l_510), p_55)) | p_55), g_13)))), (-10L))))));
                        g_353 |= (((l_496 = l_618) < (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_523 = 4294967292UL), 0xC850F37CL)), 8))) < (l_495[1] , ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(func_79(l_495[1], p_55, (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(0x9F9F0EFAL, (l_573 = (p_55 < 0x7EL)))) , p_55), 4))), g_277)) , p_55), g_511)) >= g_40)));
                        g_40 |= (g_353 = (func_79(g_176, g_145[0], (((((l_618 && (l_573 ^= ((func_79((g_311 ^= (((g_41 <= 0x54B4L) == 0xDE3EL) | (safe_sub_func_uint16_t_u_u(2UL, (~(func_79((((0x9CD31DE4L && l_504[4][3][1]) , l_602) | 0x6DL), p_55, l_495[1]) || g_511)))))), g_39[g_277][(g_277 + 3)], g_422) == g_13) && (-1L)))) | l_633) , g_197) & l_618) | l_617)) != p_55));
                        l_531 = g_422;
                    }
                }
                for (l_510 = 0; (l_510 <= 3); l_510 += 1)
                {
                    char l_650 = 0x15L;
                    for (g_40 = 1; (g_40 >= 0); g_40 -= 1)
                    {
                        int i, j, k;
                        l_633 &= ((l_531 = l_495[g_40]) , (l_504[(g_176 + 2)][g_176][(g_40 + 3)] == (p_55 | l_504[(g_176 + 2)][g_176][(g_40 + 3)])));
                        g_353 ^= (func_79((g_311 = (safe_mod_func_uint16_t_u_u((((l_504[(g_40 + 1)][l_510][(g_277 + 2)] = p_55) ^ (g_40 || (safe_div_func_int8_t_s_s(p_55, l_496)))) | g_197), ((safe_sub_func_uint16_t_u_u(func_79((func_79(((g_85 = ((safe_add_func_uint32_t_u_u(l_644, (p_55 != ((safe_lshift_func_uint8_t_u_s((((l_649 = (0xD120E31FL < ((safe_sub_func_uint32_t_u_u((l_523 = g_13), g_197)) , (-10L)))) >= g_145[0]) , p_55), 1)) | l_531)))) <= 0L)) & g_197), g_197, g_407) > l_650), g_176, p_55), l_505)) || l_495[0])))), g_176, l_650) & 4L);
                        g_675 = func_79(l_495[g_40], (func_79(l_495[g_40], ((safe_sub_func_uint32_t_u_u(((l_482 = (l_633 |= func_79((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((g_353 = ((g_13 >= (((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_481, 0xEE993A2CL)), 0xEB92F680L)), (safe_add_func_uint32_t_u_u(((l_531 |= (safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((l_649 | (!(((((l_650 || ((safe_rshift_func_uint16_t_u_s(l_650, p_55)) , 0L)) , l_650) && p_55) & 0x24BBL) , g_145[0]))), l_673)), 5))) , g_407), l_674)))) && g_41) && 0x93E5A850L)) && l_673)) <= p_55), l_495[g_40])), l_504[(g_176 + 2)][g_176][(g_40 + 3)])), p_55, p_55))) & 0x3A8B89E6L), l_542)) == p_55), g_145[0]) | g_40), g_422);
                    }
                    return l_504[6][2][0];
                }
                for (l_481 = 0; (l_481 >= 2); l_481 = safe_add_func_int16_t_s_s(l_481, 1))
                {
                    int l_678 = 0x571E23E3L;
                    int l_701 = 0L;
                    g_353 &= (l_531 = (0x9DL && (g_277 | l_678)));
                    l_523 = g_277;
                    if ((safe_mod_func_uint16_t_u_u(func_79(((l_495[1] |= g_145[0]) , (safe_mod_func_int8_t_s_s(l_683, (safe_rshift_func_int16_t_s_u(0x0610L, (((safe_mod_func_uint16_t_u_u((l_688 == ((((g_277 && (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(g_675, (l_701 |= (((safe_add_func_uint32_t_u_u(g_277, (p_55 <= (~(safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((l_504[6][2][0] | p_55) , 0UL), l_678)), 15)) , p_55), 1)))))) || l_492) , g_277)))), 0))) <= g_217) , p_55) & l_678)), g_277)) ^ p_55) , p_55)))))), l_596, g_110), 0xFEC6L)))
                    {
                        return p_55;
                    }
                    else
                    {
                        int l_702 = 0xF5186B3EL;
                        l_482 = (l_702 >= l_701);
                    }
                }
            }
        }
        l_482 = 5L;
        return g_176;
    }
    else
    {
        int l_721 = 0x1D81F037L;
        int l_734 = 0xA4800508L;
        int l_740[8] = {1L, 1L, (-1L), 1L, 1L, (-1L), 1L, 1L};
        unsigned l_744 = 0UL;
        unsigned short l_774[5];
        unsigned l_837 = 0x9E366C77L;
        int i;
        for (i = 0; i < 5; i++)
            l_774[i] = 0x4F87L;
        g_353 |= g_176;
        if ((g_353 == (safe_rshift_func_int8_t_s_s((g_217 ^= 0x36L), g_311))))
        {
            unsigned l_739 = 0x3AFC5F10L;
            int l_741 = 0x1AFF27FEL;
            int l_742 = 0x30C6C37DL;
            char l_836 = 0xF8L;
            unsigned l_857 = 0UL;
            if ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((l_744 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((g_217 = (p_55 >= ((g_743 &= (l_740[3] = (g_110 = ((l_742 |= func_58((g_197 = (safe_rshift_func_uint16_t_u_u(l_721, 15))), (((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_721, 6)), g_145[0])), (((l_740[3] &= func_79((((func_79(g_85, (safe_div_func_int32_t_s_s(0x1615A40FL, (safe_rshift_func_int8_t_s_u((l_683 = (safe_rshift_func_uint16_t_u_s((l_495[1] = (l_497 = g_41)), 9))), func_79(((((l_734 = g_675) >= (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_739 = p_55), 0x78FCL)) <= (-4L)), p_55))) > 0xC1L) || 0x4BL), g_277, p_55))))), l_519) , l_739) , g_277) , p_55), p_55, p_55)) , (-1L)) <= p_55))) >= 65532UL) <= g_511), p_55, g_145[1], l_741)) && p_55)))) | g_41))) , 0L) != 0UL) == (-1L)), g_574)), (-3L)))), l_688)) | 0xF0B0L) , l_745), l_721)), 0x287DL)), g_39[0][1])), 0x90E4L)))
            {
                int l_759[3];
                char l_801 = 0x96L;
                int l_877 = 3L;
                unsigned l_883[2];
                int i;
                for (i = 0; i < 3; i++)
                    l_759[i] = (-10L);
                for (i = 0; i < 2; i++)
                    l_883[i] = 4294967295UL;
                if ((safe_lshift_func_int16_t_s_u(0x0E54L, 4)))
                {
                    unsigned short l_758[1];
                    int l_802 = 1L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_758[i] = 0xBA30L;
                    g_353 &= (safe_lshift_func_int8_t_s_s(l_519, ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((g_217 = l_754), func_79((4294967295UL && (safe_unary_minus_func_uint8_t_u(((p_55 && g_41) ^ (0xB4BAAAACL || ((safe_add_func_uint8_t_u_u(0x7AL, l_741)) && func_79(l_758[0], p_55, l_758[0]))))))), l_759[2], p_55))), p_55)) >= l_683)));
                    g_40 = (0xC89B5859L || 4294967291UL);
                    for (l_688 = 19; (l_688 != 50); l_688++)
                    {
                        short l_779 = (-2L);
                        int l_795 = 0x6D844ECBL;
                        l_740[3] = ((0x1FL >= ((safe_add_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((g_145[0] | (safe_lshift_func_uint8_t_u_s((((g_217 >= ((safe_lshift_func_int16_t_s_s(0x62DEL, func_58(((safe_sub_func_uint32_t_u_u((g_110 = p_55), ((l_497 = (g_145[0] ^ ((g_511 && ((safe_rshift_func_uint16_t_u_s(p_55, p_55)) & g_176)) & p_55))) < g_41))) && 0x6882FA7AL), l_739, l_740[3], g_145[0], g_217))) >= 0x5245L)) , g_197) < l_758[0]), g_422))), g_13)) != p_55) < l_741), p_55)) > l_774[3])) < g_41);
                        l_740[1] = ((safe_sub_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(func_58((func_58((l_779 <= g_39[0][1]), (g_36 < l_754), p_55, (safe_mod_func_int8_t_s_s(((0x7577905DL ^ (((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_55, p_55)), (safe_div_func_int8_t_s_s(((g_217 = g_41) > l_741), 0x7DL)))), g_145[0])) < p_55) ^ l_492)) ^ g_675), l_744)), p_55) , g_675), p_55, g_675, l_779, p_55), p_55)) <= g_197), l_683)) , 0x8723C8CFL);
                        g_353 = (safe_unary_minus_func_uint8_t_u((safe_add_func_int16_t_s_s((g_85 ^ (l_795 |= (safe_rshift_func_uint8_t_u_u(p_55, g_145[0])))), (g_675 , ((g_511 = p_55) != g_40))))));
                    }
                    l_802 = (safe_rshift_func_int16_t_s_u(0xB5D4L, (g_145[0] = (g_41 | (g_574 ^= (l_801 &= (p_55 & ((l_798[0][9][5] = func_68(g_176)) <= (safe_rshift_func_uint8_t_u_s(0x94L, 6))))))))));
                }
                else
                {
                    short l_811 = 0L;
                    l_734 = (l_759[2] <= ((((safe_mod_func_int16_t_s_s(0L, (safe_mod_func_uint16_t_u_u(0x0BA2L, (safe_rshift_func_uint8_t_u_u(func_79(g_217, (g_39[1][2] = (safe_lshift_func_int8_t_s_u((g_422 = (((g_85 ^= g_40) , ((l_798[0][6][0] && l_811) , (safe_add_func_int8_t_s_s((g_814 , (safe_add_func_uint8_t_u_u(9UL, p_55))), g_353)))) , g_197)), 4))), l_741), 2)))))) || 0x3170451AL) || p_55) <= l_811));
                }
                g_40 = (((p_55 == (g_743 , (((0x85L & g_675) <= ((((l_497 &= g_277) , ((safe_rshift_func_int8_t_s_s(((l_497 &= (~(((l_745 , (func_79((safe_add_func_int16_t_s_s(((g_41 , (((safe_sub_func_uint16_t_u_u(g_814, g_40)) > p_55) & 1UL)) <= g_41), p_55)), l_721, p_55) ^ 0x15L)) ^ 0xBF802825L) == 0xDBL))) , 0L), 1)) == 0x472DL)) == g_40) != p_55)) || g_574))) == 0x89L) == 0x4BL);
                if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u(func_58(p_55, (l_497 |= 7UL), ((l_742 |= g_40) < func_58((((safe_sub_func_int16_t_s_s((l_495[1] ^= 0x9198L), ((safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((((p_55 || (l_734 = ((l_683 = (safe_unary_minus_func_int16_t_s(l_759[2]))) | g_197))) , (((g_110 | p_55) ^ 0xF6L) <= g_743)) != 0xE2DF13E5L), l_836)) == p_55), p_55)) || g_407))) , g_277) > g_197), g_574, l_759[0], l_759[2], g_277)), p_55, l_740[1]), g_145[1])) ^ l_837) > 0x18EEL) < g_814), g_39[2][0])), g_353)))
                {
                    unsigned char l_858 = 255UL;
                    int l_860 = 0xCF202BF8L;
                    l_860 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((p_55 < (((g_814 = ((safe_mod_func_int16_t_s_s((~(safe_sub_func_uint8_t_u_u(((!(((safe_rshift_func_int8_t_s_u((!(l_858 ^= (safe_mod_func_int8_t_s_s((((g_13 >= (safe_mod_func_int16_t_s_s(0x0E52L, (func_58(g_852[1][1][3], ((l_482 &= p_55) > 1UL), (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_422, 12)), g_574)), p_55, l_857) ^ p_55)))) < 0x7DL) , g_13), p_55)))), 4)) | p_55) || g_36)) , p_55), p_55))), g_217)) & g_859)) && (-4L)) > g_743)) & g_40), 3)), l_495[0]));
                }
                else
                {
                    unsigned l_870 = 0xC5F57A51L;
                    unsigned char l_871 = 0xE0L;
                    unsigned l_872[8] = {1UL, 0xF9D09408L, 1UL, 0xF9D09408L, 1UL, 0xF9D09408L, 1UL, 0xF9D09408L};
                    int l_876 = 0x8550FAB3L;
                    int i;
                    if ((g_145[0] , (g_145[0] >= (safe_rshift_func_uint16_t_u_s(0x1F9DL, 9)))))
                    {
                        int l_869 = 0L;
                        int l_873 = 0xDC0CB478L;
                        int l_875[10] = {0x895D2622L, (-1L), 0x895D2622L, (-1L), 0x895D2622L, (-1L), 0x895D2622L, (-1L), 0x895D2622L, (-1L)};
                        int i;
                        g_878[6] &= ((l_759[2] , ((p_55 , ((l_877 = ((l_876 = ((l_875[6] |= ((g_874 &= (l_873 |= ((p_55 || ((l_741 = (((func_58(((l_869 = 0xB680A9D8L) && 0x13A2FA95L), ((((g_859 , (l_857 & g_353)) , func_58(p_55, l_870, g_511, p_55, l_871)) || 0x2EL) ^ l_872[1]), g_407, g_85, p_55) & (-1L)) <= p_55) | g_814)) && 0L)) && (-4L)))) | 65535UL)) , l_870)) < 0xDFL)) >= 0L)) && p_55)) | p_55);
                        g_885[5][1] ^= ((safe_lshift_func_uint16_t_u_u(0xDAB6L, (((p_55 >= (safe_lshift_func_int8_t_s_s((-6L), 5))) == (+p_55)) & (((l_875[6] & (func_58((l_740[3] = l_883[0]), ((g_197 = (l_482 = (4UL == ((~((g_574 , g_878[6]) , g_884)) , l_869)))) >= g_39[1][1]), p_55, g_311, p_55) <= 1UL)) & 0x5412L) == g_874)))) <= 0xAE5D3980L);
                        g_888 |= ((p_55 <= func_58((l_742 = 4UL), p_55, g_145[1], l_740[7], (1L >= (func_79(func_58((l_873 = p_55), (p_55 , (safe_add_func_uint32_t_u_u(p_55, 0x9CEECADFL))), g_311, p_55, p_55), p_55, l_837) || 0xE9B7B6BAL)))) | p_55);
                    }
                    else
                    {
                        int l_889[5] = {0xFA2655D3L, 0x60421BE9L, 0xFA2655D3L, 0x60421BE9L, 0xFA2655D3L};
                        int i;
                        l_876 = l_889[0];
                        l_894 = (safe_add_func_int32_t_s_s(0x2C8404A4L, (safe_lshift_func_uint16_t_u_s(g_197, 12))));
                        return g_85;
                    }
                }
                l_495[1] = (((safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u((func_79(l_759[2], g_874, g_878[6]) < func_58((l_734 = (safe_mod_func_int32_t_s_s(l_900, 0x0A14673DL))), func_79(g_110, g_217, (l_742 = ((safe_add_func_int8_t_s_s(0x8DL, p_55)) < 0x86L))), l_745, p_55, g_885[5][1])), p_55)))) || 2L) & 5L);
            }
            else
            {
                g_40 = p_55;
                return g_885[3][1];
            }
        }
        else
        {
            l_740[1] = p_55;
        }
        l_721 = (safe_lshift_func_int8_t_s_u(l_683, 2));
        l_497 = l_740[3];
    }
    g_40 |= p_55;
    return l_495[1];
}







static unsigned char func_58(unsigned char p_59, unsigned p_60, unsigned p_61, int p_62, unsigned short p_63)
{
    short l_453 = 3L;
    int l_474[5];
    int i;
    for (i = 0; i < 5; i++)
        l_474[i] = 0x2BA53DFAL;
    for (p_62 = 28; (p_62 <= (-22)); p_62--)
    {
        int l_458 = 0xC20C8464L;
        unsigned char l_468 = 0xDFL;
        l_453 &= p_59;
        for (g_176 = (-23); (g_176 > 23); g_176++)
        {
            int l_459 = 6L;
            int l_469 = 0xBA334867L;
            l_469 = (0xC5E9L != (((safe_sub_func_int8_t_s_s(p_59, (func_79(p_59, l_458, (l_459 , (safe_add_func_int32_t_s_s(g_217, ((g_217 != ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((g_422 <= g_40), l_468)) < g_407), g_197)), g_145[0])) , l_468)) & (-1L)))))) || 4294967295UL))) && g_36) , 0L));
            l_474[3] = (safe_mod_func_int32_t_s_s(func_79(l_469, (l_453 <= l_453), g_197), (safe_sub_func_uint8_t_u_u((p_59 = 255UL), (l_458 = g_353)))));
            return p_60;
        }
    }
    return l_474[3];
}







static unsigned char func_68(unsigned p_69)
{
    unsigned l_77 = 1UL;
    unsigned short l_99 = 65535UL;
    int l_121 = 2L;
    int l_201 = 0L;
    int l_203 = (-5L);
    int l_207[9][2][1] = {{{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}};
    unsigned l_309 = 0x8BB38E12L;
    unsigned short l_324 = 0xFE90L;
    int l_352 = (-1L);
    unsigned short l_415 = 8UL;
    char l_416[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_416[i] = (-10L);
    for (p_69 = 0; (p_69 <= 2); p_69 += 1)
    {
        unsigned short l_76 = 1UL;
        int l_78 = 4L;
        int l_88 = (-5L);
        unsigned l_122 = 5UL;
        unsigned char l_137 = 252UL;
        int l_310 = 0xBE375A39L;
        int l_313 = 1L;
        unsigned l_330 = 1UL;
        unsigned char l_392 = 7UL;
        int l_393 = 0xA1AB72B3L;
        unsigned l_406 = 1UL;
        unsigned short l_421 = 0x4D76L;
        if ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((l_78 = ((l_76 ^= g_39[2][0]) == l_77)), func_79(p_69, ((safe_sub_func_uint32_t_u_u((p_69 && (g_85 = 0x0FL)), p_69)) ^ 0xEEBBL), ((+((l_88 | (p_69 >= l_77)) <= 0x3CL)) && l_77)))), 13)), g_40)))
        {
            int l_100 = 0L;
            int l_107 = 0L;
            l_100 = (safe_add_func_int8_t_s_s(g_41, (((safe_add_func_int32_t_s_s((p_69 ^ func_79((0L || ((g_39[0][6] == ((((g_13 != ((l_78 = g_39[0][4]) && (safe_lshift_func_uint8_t_u_s(g_85, 2)))) >= (0L > (0xA5BFF831L | 0xFE7A216DL))) | g_85) & g_40)) == 0L)), p_69, g_13)), l_99)) >= g_13) | l_88)));
            g_40 = (safe_div_func_int8_t_s_s((1L && func_79(((g_110 = func_79(l_100, (safe_div_func_uint16_t_u_u((0xCC6491A5L | (func_79((g_85 == l_100), (0x11AD4971L & (l_107 &= (safe_sub_func_int32_t_s_s(l_77, l_99)))), ((safe_mod_func_int8_t_s_s(func_79(g_36, g_40, l_99), p_69)) ^ l_100)) > p_69)), l_99)), g_13)) & 2UL), g_40, g_85)), p_69));
            if (((((safe_mod_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u((4294967295UL < l_76), (safe_sub_func_int16_t_s_s(((-1L) < (safe_sub_func_int16_t_s_s(4L, l_99))), (((safe_lshift_func_int16_t_s_u(l_77, 14)) | (((((p_69 & (((func_79((l_121 = (0L && (l_76 & l_77))), l_76, g_13) <= l_76) , g_40) , 0x64C9L)) && g_13) , l_122) <= g_40) <= g_39[0][5])) && 1UL))))) ^ 0x7569L), 0x51F7L)) == 0xA5L) & l_76) == 1L))
            {
                unsigned l_123 = 0xC4FCC00BL;
                unsigned short l_136 = 8UL;
                l_137 = func_79(l_123, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_136 = (+(p_69 | (((l_100 &= p_69) , (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((0x85L > ((0xA827L ^ (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_69, (p_69 != g_41))), 2))) , g_41)), p_69)), p_69))) & p_69)))), p_69)), l_121)), g_36);
            }
            else
            {
                unsigned char l_138 = 0UL;
                int l_144 = 2L;
                for (l_122 = 0; (l_122 <= 2); l_122 += 1)
                {
                    int i, j;
                    l_138 = g_39[p_69][(p_69 + 1)];
                }
                for (l_78 = 2; (l_78 >= 0); l_78 -= 1)
                {
                    int l_166[10] = {0x89EA80ACL, 0xAD613349L, 0x89EA80ACL, 0xAD613349L, 0x89EA80ACL, 0xAD613349L, 0x89EA80ACL, 0xAD613349L, 0x89EA80ACL, 0xAD613349L};
                    int l_175[5][2][6] = {{{0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}, {0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}}, {{0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}, {0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}}, {{0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}, {0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}}, {{0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}, {0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}}, {{0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}, {0x3B7CC5CFL, 0x407DDA1AL, 1L, 0x407DDA1AL, 0x3B7CC5CFL, 0x5E64651CL}}};
                    int i, j, k;
                    g_40 = (safe_mod_func_int8_t_s_s((-1L), ((l_88 <= g_13) & g_39[1][3])));
                    g_40 = func_79((g_39[0][5] ^ ((safe_unary_minus_func_uint8_t_u(func_79(func_79(p_69, l_100, (g_39[2][3] != (-1L))), (l_107 = p_69), (safe_rshift_func_uint16_t_u_s(0xFC3CL, ((g_145[0] ^= ((l_144 = 0x83L) ^ p_69)) ^ 0xC424L)))))) ^ p_69)), l_138, p_69);
                    for (l_122 = 16; (l_122 < 39); l_122++)
                    {
                        unsigned short l_156 = 3UL;
                        int l_157 = (-1L);
                        l_144 |= (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((p_69 != 0xFA2AEE08L) <= (l_157 = (safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((l_156 = (-4L)) == (0L > g_41)), func_79(l_157, func_79(((safe_rshift_func_uint8_t_u_u(func_79(p_69, (safe_sub_func_int32_t_s_s(l_157, (((safe_sub_func_int16_t_s_s((g_39[l_78][p_69] != g_13), l_157)) , l_100) & g_145[1]))), l_157), 7)) , 0x2FE60FC5L), g_39[p_69][(p_69 + 4)], p_69), p_69))) , 0x7769L), 0x086DL)))), g_39[0][2])) != l_107), 0xFDC485AAL));
                        return p_69;
                    }
                    for (l_121 = 8; (l_121 < (-15)); l_121--)
                    {
                        unsigned char l_179 = 0xC4L;
                        l_166[3] = l_76;
                        l_88 = (1L & ((safe_add_func_int16_t_s_s(g_110, (safe_add_func_int32_t_s_s(((l_77 < (safe_div_func_uint32_t_u_u((g_176 = ((((safe_lshift_func_uint8_t_u_u((l_175[0][1][3] = (l_144 &= (l_166[3] |= l_138))), 0)) , p_69) >= l_138) , g_36)), func_79(l_121, ((safe_add_func_int16_t_s_s(0xB9CBL, l_179)) , 0UL), g_145[1])))) || p_69), l_179)))) , l_175[1][1][5]));
                        l_107 ^= p_69;
                    }
                }
            }
            g_40 |= p_69;
        }
        else
        {
            unsigned short l_182 = 0xE28CL;
            unsigned l_198 = 0UL;
            char l_199 = 6L;
            int l_251 = 1L;
            unsigned l_254 = 0x841AED08L;
            unsigned char l_290 = 247UL;
            int l_300 = (-1L);
            unsigned l_325 = 4294967295UL;
            for (g_176 = 0; (g_176 <= 1); g_176 += 1)
            {
                int l_200 = 1L;
                int l_202 = (-8L);
                int l_216 = 0x640A0A01L;
                unsigned l_295[9][8][2] = {{{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}, {{0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}, {0xB74988DBL, 0x405030D3L}}};
                int i, j, k;
                if (((safe_div_func_int8_t_s_s((((func_79((((g_145[g_176] , func_79((l_182 &= g_39[p_69][g_176]), ((((safe_lshift_func_int8_t_s_s((((g_145[0] = func_79(g_39[p_69][(g_176 + 1)], g_36, ((safe_lshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(g_176, (l_201 ^= (safe_mod_func_int32_t_s_s((l_121 = ((l_200 = ((((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((g_197 = (g_145[1] = g_145[g_176])), 0xB6F6L)), p_69)) == (l_198 < l_121)) , g_145[0]) , l_199)) > g_110)), g_85))))), g_13)) != l_199), p_69)) < 0xDEL))) <= g_110) ^ g_41), 5)) == 251UL) | g_110) || g_176), l_122)) >= (-1L)) , l_99), g_13, l_202) == p_69) >= l_78) == g_110), 0x0AL)) <= l_203))
                {
                    int l_206 = 0xA2536C65L;
                    g_40 = (safe_rshift_func_int8_t_s_u((func_79((l_206 , l_121), g_13, (l_207[3][0][0] >= ((safe_add_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(((g_217 &= func_79(((l_201 ^= (l_199 | (safe_add_func_int32_t_s_s(g_110, l_206)))) , func_79(l_207[6][0][0], (safe_rshift_func_int16_t_s_s((l_216 , 0xFEC9L), 8)), g_39[p_69][(g_176 + 1)])), g_13, l_206)) && p_69), g_36)) && 4UL) <= l_198), l_200)) , g_145[g_176]))) <= p_69), g_110));
                    if ((safe_mod_func_uint16_t_u_u(((g_36 | g_40) > g_197), (g_39[0][2] && (l_207[7][1][0] = (safe_sub_func_int8_t_s_s((0xB44BL >= ((safe_div_func_int32_t_s_s(((g_145[1] < (g_85 , (func_79(l_207[3][0][0], (l_77 , 0xD77E6F0FL), g_176) == p_69))) | p_69), (-5L))) || l_203)), (-1L))))))))
                    {
                        l_121 ^= (!(safe_div_func_int8_t_s_s(0x4DL, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(l_198, 5)), (p_69 != (p_69 , 0x09L)))), (0x61DA3FA1L != 0xD20EC942L))))));
                        if (g_145[0])
                            break;
                    }
                    else
                    {
                        l_88 = (((p_69 >= p_69) , g_145[0]) != p_69);
                    }
                    l_202 = ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((0x5325L < p_69), 9)), g_110)) && (g_41 != g_110));
                }
                else
                {
                    int l_236 = 0x28BDB423L;
                    int l_280 = (-3L);
                    l_216 = (0x6544L <= g_145[0]);
                    if (l_236)
                    {
                        unsigned l_239 = 0x8604C873L;
                        int l_250 = (-1L);
                        l_251 |= (safe_div_func_uint16_t_u_u((((-3L) >= l_239) & ((l_99 <= (l_250 = (4UL & ((p_69 > (safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((1L != l_239) != p_69), ((func_79(g_145[0], p_69, l_216) & p_69) && g_176))) > 1UL), p_69)) == l_236), 5L)), l_122)), g_145[0]))) < l_236)))) , p_69)), l_199));
                        l_202 &= ((safe_lshift_func_uint16_t_u_u(func_79(g_85, func_79((l_254 | (l_251 ^= (-7L))), l_239, g_85), (0x9E08L ^ 0x69CCL)), 1)) , l_236);
                        l_202 &= (p_69 & p_69);
                    }
                    else
                    {
                        l_88 = l_182;
                    }
                    if ((p_69 | (((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(0x9FL, p_69)) & g_40), l_251)) , l_201) < p_69)))
                    {
                        return p_69;
                    }
                    else
                    {
                        int l_281 = 0xC397EF02L;
                        l_201 = ((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(l_198, 2)) < ((((safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(p_69, (safe_rshift_func_uint8_t_u_s(g_13, l_78)))), (g_40 = ((((!(((g_41 != (safe_mod_func_int32_t_s_s(0x49481C2CL, (safe_add_func_int32_t_s_s(g_277, (+func_79(l_216, ((l_280 ^= (safe_sub_func_int8_t_s_s(0xFAL, p_69))) , g_145[1]), g_85))))))) == 0x96L) < 0x62808190L)) != l_281) , p_69) , l_281)))), g_277)) >= 0L), 0xD206L)) < g_145[0]) < 1L) < g_277)), p_69)) & p_69);
                    }
                    l_295[2][5][0] = (safe_lshift_func_uint16_t_u_u(((l_251 = p_69) & (safe_mod_func_uint8_t_u_u((g_277 && ((p_69 && ((func_79((((func_79(((safe_div_func_uint32_t_u_u(p_69, func_79((g_41 | 255UL), func_79(func_79(((safe_sub_func_uint8_t_u_u(func_79(l_290, ((safe_sub_func_int8_t_s_s(((p_69 , ((g_40 |= (safe_rshift_func_int8_t_s_u(0x52L, 5))) < p_69)) <= 0x0EL), 248UL)) || (-8L)), l_280), 0x1CL)) , l_201), g_36, g_145[1]), g_110, g_217), l_254))) , 1L), g_41, g_39[1][2]) < p_69) != p_69) || 247UL), l_202, p_69) != g_145[0]) & (-3L))) < l_236)), p_69))), 14));
                }
            }
            if (l_76)
                break;
            for (l_251 = 0; (l_251 <= 2); l_251 += 1)
            {
                unsigned l_308[10][5][5] = {{{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}, {{0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}, {0UL, 0x47274797L, 1UL, 0x16D7C74EL, 1UL}}};
                int l_312 = 0x9A0AD21AL;
                int i, j, k;
                if (l_207[3][0][0])
                    break;
                g_40 = (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((l_300 = p_69), (func_79(p_69, (safe_div_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(l_198, g_217)), (g_110 = (safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(p_69, ((g_13 | (((p_69 || (g_176 == (p_69 >= l_308[5][2][3]))) | g_36) ^ l_309)) , l_99)))))))), g_197) && l_310))), p_69));
                l_312 = (g_311 ^= func_79(((func_79(l_122, g_176, ((65531UL == 0x81C9L) , (~((p_69 | p_69) > (l_199 >= g_40))))) == 0x7488CC12L) | l_308[5][2][3]), l_198, g_110));
            }
            if ((func_79((l_300 = func_79(l_313, g_197, ((safe_add_func_int32_t_s_s(l_122, ((func_79((+(safe_div_func_int8_t_s_s((func_79(((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_41, ((l_324 , (l_78 = ((p_69 != l_325) != g_41))) == (safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((-1L), l_199)), p_69))))), 0L)) > g_13) > l_137) <= 65534UL), 7)) , 0xECE2656EL), g_197, g_13) == p_69), 0xA7L))), l_330, p_69) < 0UL) && l_325))) != g_311))), p_69, g_197) , l_78))
            {
                char l_339 = 0x59L;
                for (g_110 = 0; (g_110 <= 2); g_110 += 1)
                {
                    char l_378[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_378[i] = 0xEDL;
                    l_251 = (safe_lshift_func_int16_t_s_u(((g_39[g_110][(p_69 + 4)] < g_40) , func_79(g_85, (((~(safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(g_41, 1)) || (safe_rshift_func_uint16_t_u_s(l_339, ((safe_add_func_uint8_t_u_u(func_79(((g_353 &= (0x22L && (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(l_309, (((l_201 = l_199) == (((l_78 = l_77) , g_39[g_110][(p_69 + 4)]) == l_352)) > 0x9B10L))) , g_197), p_69)), g_39[g_110][(p_69 + 4)])) >= p_69), 7)), g_217)))) == p_69), g_110, p_69), g_36)) & p_69)))), 0x7A01B2F9L))) || 0x171C30D0L) , 0x5623D9EDL), p_69)), g_41));
                    for (l_313 = 0; (l_313 <= 2); l_313 += 1)
                    {
                        char l_372 = 0x42L;
                        int l_373 = 0x254C3248L;
                        l_373 &= (1L | (safe_div_func_uint8_t_u_u((l_254 <= (safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(((g_353 = (func_79(func_79((p_69 || (((g_39[g_110][(p_69 + 4)] , l_137) & func_79((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((0x18L != (0x7AL < (l_137 > (safe_mod_func_int16_t_s_s((p_69 >= g_40), g_197))))), 6)) , 3UL), p_69)), g_217, g_353)) ^ 0x42DBL)), l_77, g_145[1]), p_69, g_40) || g_41)) != g_176), 6)), l_182)), p_69)), p_69))), l_372)));
                    }
                    l_78 |= (l_392 = (l_313 = func_79((safe_rshift_func_int16_t_s_s((func_79(((safe_mod_func_int32_t_s_s(g_39[2][4], l_378[0])) < ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_69, 4)), (safe_lshift_func_int16_t_s_u(0xBA25L, 15)))) != 0UL)), ((safe_sub_func_int32_t_s_s((!((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((l_290 < ((p_69 ^ (p_69 >= ((g_36 , g_39[2][1]) < 0x93C5L))) >= 0xFFD58227L)) ^ g_145[0]))), 0x73L)) , 0L)), p_69)) , 4294967289UL), g_217) != l_198), p_69)), p_69, g_41)));
                    for (l_352 = 0; (l_352 <= 0); l_352 += 1)
                    {
                        int i, j, k;
                        l_207[(p_69 + 1)][(l_352 + 1)][l_352] = p_69;
                        return l_393;
                    }
                }
                g_353 = (safe_lshift_func_int8_t_s_u((((((l_201 &= (safe_sub_func_uint8_t_u_u(p_69, ((p_69 >= func_79(l_393, ((!func_79((1UL && g_311), l_254, (g_39[2][4] = (l_300 = func_79(((g_145[0] = (g_85 > ((p_69 != p_69) , p_69))) & 0x2B47L), g_41, p_69))))) == 0x6EL), p_69)) && g_110)))) <= p_69) & g_176) , 0L) <= g_36), 4));
            }
            else
            {
                unsigned char l_398 = 0x35L;
                l_398 = g_36;
            }
        }
        for (g_110 = 0; (g_110 <= 2); g_110 += 1)
        {
            char l_399 = 1L;
            short l_408 = (-9L);
            int l_409 = 0x34001218L;
            char l_423 = 0L;
            int l_429 = 0xB64D7C8FL;
            char l_444 = 0x8CL;
            if (l_399)
                break;
            l_88 &= (func_79(l_393, (((l_207[7][0][0] = (safe_rshift_func_uint16_t_u_u(p_69, ((func_79(((l_409 ^= ((p_69 | (func_79(func_79(l_352, func_79(((safe_div_func_uint32_t_u_u((0xA322L | ((safe_add_func_uint32_t_u_u(l_406, p_69)) ^ (g_407 = (g_217 |= l_99)))), func_79(p_69, p_69, p_69))) , p_69), g_176, p_69), g_145[0]), l_408, l_399) , 0L)) <= p_69)) ^ g_311), p_69, g_176) == p_69) , 0x41B2L)))) | l_399) > g_145[0]), g_176) > l_324);
            l_88 &= g_197;
            l_313 = ((safe_mod_func_int8_t_s_s(((l_393 |= ((l_207[3][0][0] = func_79(((g_176 | ((l_409 = func_79((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(((l_416[0] = (g_197 |= l_415)) , func_79(l_99, ((g_40 | (((safe_div_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(func_79((l_207[7][0][0] & l_88), l_421, l_392), p_69)) <= 4294967295UL), l_310)) > 2UL) & p_69)) , g_217), p_69)))) , 0UL), g_422)), p_69, l_409)) , g_176)) >= p_69), l_423, l_77)) != l_324)) && l_309), 4L)) == 0xEFC2L);
            for (l_310 = 0; (l_310 <= 2); l_310 += 1)
            {
                int l_428 = (-1L);
                l_88 = ((l_207[3][0][0] = (g_40 | ((g_422 = (l_428 = (l_409 = ((g_41 <= (safe_sub_func_uint32_t_u_u((l_313 = g_13), g_407))) != ((l_429 &= ((l_409 && (safe_add_func_int32_t_s_s(0x0C0B7CC7L, func_79(l_392, (g_40 || func_79((g_311 = (l_201 |= 0L)), l_428, p_69)), g_176)))) , (-1L))) , 0x1FL))))) || p_69))) != p_69);
                l_428 = ((g_36 >= ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(p_69, (p_69 , ((safe_div_func_int16_t_s_s(p_69, func_79((safe_rshift_func_int8_t_s_s((l_88 = (safe_lshift_func_int16_t_s_u((!g_85), 0))), 6)), (safe_mod_func_int32_t_s_s((((((l_408 || 0x7AL) , (safe_rshift_func_uint8_t_u_s(g_145[0], p_69))) , 4294967288UL) < l_444) , g_41), 0x91EE2544L)), g_145[0]))) != l_428)))), 13)) | g_36)) != 0xEEC1L);
            }
        }
    }
    return g_422;
}







static int func_79(int p_80, unsigned p_81, unsigned p_82)
{
    return g_85;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_39[i][j], "g_39[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_145[i], "g_145[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_852[i][j][k], "g_852[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_878[i], "g_878[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_884, "g_884", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_885[i][j], "g_885[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_888, "g_888", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_966[i], "g_966[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1248[i], "g_1248[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1510, "g_1510", print_hash_value);
    transparent_crc(g_1511, "g_1511", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1591[i][j], "g_1591[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1600[i][j], "g_1600[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1612, "g_1612", print_hash_value);
    transparent_crc(g_1671, "g_1671", print_hash_value);
    transparent_crc(g_1711, "g_1711", print_hash_value);
    transparent_crc(g_1992, "g_1992", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_2075[i][j][k], "g_2075[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2170, "g_2170", print_hash_value);
    transparent_crc(g_2181, "g_2181", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2328[i], "g_2328[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2346[i][j][k], "g_2346[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2404, "g_2404", print_hash_value);
    transparent_crc(g_2456.f0, "g_2456.f0", print_hash_value);
    transparent_crc(g_2456.f2, "g_2456.f2", print_hash_value);
    transparent_crc(g_2525.f0, "g_2525.f0", print_hash_value);
    transparent_crc(g_2525.f2, "g_2525.f2", print_hash_value);
    transparent_crc(g_2545.f0, "g_2545.f0", print_hash_value);
    transparent_crc(g_2545.f2, "g_2545.f2", print_hash_value);
    transparent_crc(g_2548.f0, "g_2548.f0", print_hash_value);
    transparent_crc(g_2548.f2, "g_2548.f2", print_hash_value);
    transparent_crc(g_2561, "g_2561", print_hash_value);
    transparent_crc(g_2583.f0, "g_2583.f0", print_hash_value);
    transparent_crc(g_2583.f1, "g_2583.f1", print_hash_value);
    transparent_crc(g_2583.f2, "g_2583.f2", print_hash_value);
    transparent_crc(g_2583.f3, "g_2583.f3", print_hash_value);
    transparent_crc(g_2583.f4, "g_2583.f4", print_hash_value);
    transparent_crc(g_2591.f0, "g_2591.f0", print_hash_value);
    transparent_crc(g_2591.f2, "g_2591.f2", print_hash_value);
    transparent_crc(g_2592.f0, "g_2592.f0", print_hash_value);
    transparent_crc(g_2592.f2, "g_2592.f2", print_hash_value);
    transparent_crc(g_2612, "g_2612", print_hash_value);
    transparent_crc(g_2623, "g_2623", print_hash_value);
    transparent_crc(g_2626.f0, "g_2626.f0", print_hash_value);
    transparent_crc(g_2626.f2, "g_2626.f2", print_hash_value);
    transparent_crc(g_2647, "g_2647", print_hash_value);
    transparent_crc(g_2648.f0, "g_2648.f0", print_hash_value);
    transparent_crc(g_2648.f2, "g_2648.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2658[i][j].f0, "g_2658[i][j].f0", print_hash_value);
            transparent_crc(g_2658[i][j].f2, "g_2658[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2698.f0, "g_2698.f0", print_hash_value);
    transparent_crc(g_2698.f2, "g_2698.f2", print_hash_value);
    transparent_crc(g_2737.f0, "g_2737.f0", print_hash_value);
    transparent_crc(g_2737.f2, "g_2737.f2", print_hash_value);
    transparent_crc(g_2920, "g_2920", print_hash_value);
    transparent_crc(g_2921.f0, "g_2921.f0", print_hash_value);
    transparent_crc(g_2921.f2, "g_2921.f2", print_hash_value);
    transparent_crc(g_2938.f0, "g_2938.f0", print_hash_value);
    transparent_crc(g_2938.f2, "g_2938.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
