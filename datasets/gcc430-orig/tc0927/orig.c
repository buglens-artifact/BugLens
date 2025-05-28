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



static const unsigned g_8 = 0UL;
static int g_23 = 0x952F3411L;
static unsigned char g_62 = 6UL;
static unsigned short g_63[10][5][5] = {{{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}, {{65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}, {65533UL, 65535UL, 0UL, 0xB218L, 0xC594L}}};
static int g_71[8][1] = {{2L}, {2L}, {2L}, {2L}, {2L}, {2L}, {2L}, {2L}};
static int g_85 = 0xC77B72BAL;
static int *g_84 = &g_85;
static short g_108 = (-1L);
static int g_116 = 2L;
static int ** volatile g_130 = (void*)0;
static unsigned g_142 = 0x0A24D0A3L;
static int **g_158 = &g_84;
static const volatile int g_166 = 0x6D6AB550L;
static char g_179[6] = {0x23L, 0x23L, 0x5CL, 0x23L, 0x23L, 0x5CL};
static int g_191 = 0x37E68EC6L;
static short g_206 = (-1L);
static short *g_205 = &g_206;
static int g_224[5][1][6] = {{{0x66F09C54L, 0L, (-8L), 0L, 0x66F09C54L, 0L}}, {{0x66F09C54L, 0L, (-8L), 0L, 0x66F09C54L, 0L}}, {{0x66F09C54L, 0L, (-8L), 0L, 0x66F09C54L, 0L}}, {{0x66F09C54L, 0L, (-8L), 0L, 0x66F09C54L, 0L}}, {{0x66F09C54L, 0L, (-8L), 0L, 0x66F09C54L, 0L}}};
static unsigned short g_249 = 0xBA6CL;
static short g_253 = 1L;
static unsigned char g_270 = 0UL;
static const int ** volatile g_272 = (void*)0;
static int *g_323 = (void*)0;
static int ** volatile g_322 = &g_323;
static int g_339 = 1L;
static int *g_338[8] = {&g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339, &g_339};
static unsigned g_365 = 0x66770F7DL;
static unsigned char g_370 = 4UL;
static unsigned g_409[7] = {0x2458E79AL, 1UL, 0x2458E79AL, 1UL, 0x2458E79AL, 1UL, 0x2458E79AL};
static volatile int g_435 = 0x78908FC8L;
static int ** volatile g_467[2] = {(void*)0, (void*)0};
static unsigned short *g_485[2][8] = {{&g_63[1][0][1], &g_63[1][0][1], &g_63[6][0][3], &g_249, &g_63[4][0][0], &g_249, &g_63[6][0][3], &g_63[1][0][1]}, {&g_63[1][0][1], &g_63[1][0][1], &g_63[6][0][3], &g_249, &g_63[4][0][0], &g_249, &g_63[6][0][3], &g_63[1][0][1]}};
static unsigned short **g_484[4] = {&g_485[1][1], &g_485[1][1], &g_485[1][1], &g_485[1][1]};
static unsigned short *** volatile g_483 = &g_484[1];
static int *g_492 = &g_224[2][0][2];
static int g_507 = (-10L);
static const unsigned char g_552[7][2][10] = {{{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}, {{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}, {{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}, {{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}, {{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}, {{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}, {{0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}, {0xAFL, 0UL, 7UL, 1UL, 7UL, 0UL, 0xAFL, 246UL, 0x31L, 0x84L}}};
static const unsigned char * const g_551 = &g_552[2][0][0];
static const unsigned char * const *g_550 = &g_551;
static int *g_567 = &g_71[3][0];
static const int *g_580 = &g_23;
static const int ** volatile g_579 = &g_580;
static int ***g_721 = &g_158;
static const int ** volatile g_722 = &g_580;
static unsigned char *g_730 = &g_270;
static unsigned char **g_729 = &g_730;
static short ***g_732 = (void*)0;
static int *g_733[9] = {&g_71[4][0], &g_71[4][0], &g_71[4][0], &g_71[4][0], &g_71[4][0], &g_71[4][0], &g_71[4][0], &g_71[4][0], &g_71[4][0]};
static unsigned *g_785 = &g_409[4];
static unsigned **g_784 = &g_785;



static int func_1(void);
static int * func_2(const int p_3, char p_4, int p_5, int * p_6, int * p_7);
static char func_14(short p_15, int p_16, short p_17, char p_18, int * p_19);
static unsigned short func_28(int * p_29, unsigned short p_30, int * p_31, unsigned short p_32, int * p_33);
static int * func_34(const int p_35, int * p_36, char p_37);
static int func_38(int * p_39, char p_40, int * p_41);
static int * func_42(unsigned p_43);
static int * func_45(short p_46, unsigned char p_47, int * p_48);
static char func_49(const unsigned char p_50, int * p_51, int * p_52, int p_53);
static int * func_55(unsigned short p_56);
static int func_1(void)
{
    int l_11 = 0x1220985AL;
    int *l_22[2][9][10] = {{{&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}}, {{&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}, {&g_23, &g_23, &g_23, &g_23, (void*)0, (void*)0, &g_23, &g_23, &g_23, (void*)0}}};
    unsigned l_44 = 0xA6C65B0BL;
    int l_83 = (-1L);
    int *l_112 = (void*)0;
    int *l_113[4] = {&l_83, &l_83, &l_83, &l_83};
    int *l_114 = &l_83;
    int *l_115 = &g_116;
    int l_340 = 0x0595EDE5L;
    char l_559 = 1L;
    int *l_560 = (void*)0;
    unsigned char l_821 = 0xBFL;
    int l_822 = 0xBBF7CC9FL;
    int ***l_823[4];
    int **l_824 = &g_338[3];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_823[i] = (void*)0;
    (*g_722) = func_2(g_8, (safe_mul_func_uint8_t_u_u(l_11, (safe_mul_func_int8_t_s_s(((l_11 < func_14(g_8, (safe_mod_func_uint32_t_u_u(((l_22[1][7][5] != l_22[0][6][6]) <= (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_28(func_34(((*l_114) = func_38(func_42(l_44), func_49((l_83 > g_8), g_84, l_22[1][4][0], g_8), l_22[1][7][9])), l_115, g_116), g_249, g_338[3], l_340, &l_340), g_365)), 9UL))), 1L)), g_191, g_365, l_113[0])) <= g_507), 0L)))), l_559, &g_507, l_560);


    ;
    ;



    ;
    (*l_115) = (((**g_784) > (safe_sub_func_int32_t_s_s(((l_821 <= (*l_115)) || l_822), (**g_784)))) == (*l_115));
    l_115 = func_55((*l_115));

    ;
    (*l_115) = (((*g_721) = &l_22[1][6][9]) != (l_824 = &l_560));

    ;
    ;
    return g_142;


}







static int * func_2(const int p_3, char p_4, int p_5, int * p_6, int * p_7)
{
    int *l_568 = &g_71[3][0];
    int l_571 = 0x1A638DACL;
    char l_603 = 0xD0L;
    const char l_630 = 0xFEL;
    unsigned short l_641 = 0x8EC8L;
    int l_666[10][1][1] = {{{0L}}, {{0L}}, {{0L}}, {{0L}}, {{0L}}, {{0L}}, {{0L}}, {{0L}}, {{0L}}, {{0L}}};
    const int *l_680[6][6] = {{&g_71[1][0], &g_23, &g_224[0][0][4], &g_23, &g_71[1][0], &g_116}, {&g_71[1][0], &g_23, &g_224[0][0][4], &g_23, &g_71[1][0], &g_116}, {&g_71[1][0], &g_23, &g_224[0][0][4], &g_23, &g_71[1][0], &g_116}, {&g_71[1][0], &g_23, &g_224[0][0][4], &g_23, &g_71[1][0], &g_116}, {&g_71[1][0], &g_23, &g_224[0][0][4], &g_23, &g_71[1][0], &g_116}, {&g_71[1][0], &g_23, &g_224[0][0][4], &g_23, &g_71[1][0], &g_116}};
    short **l_696 = (void*)0;
    int i, j, k;
    for (g_108 = (-7); (g_108 > (-27)); g_108--)
    {
        (*g_492) = 0x52C03F2FL;
    }
    if ((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x8F30L, 11)), func_49((*g_551), g_567, l_568, (((safe_sub_func_int8_t_s_s(g_253, ((!func_38(l_568, (*l_568), ((*g_158) = l_568))) && p_3))) == l_571) || 1L)))))
    {
        unsigned short **l_574 = &g_485[1][1];
        int *l_578[2][1][10] = {{{&g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0}}, {{&g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0, &g_116, (void*)0}}};
        int i, j, k;
        for (g_142 = (-22); (g_142 == 2); g_142++)
        {
            unsigned short **l_575 = &g_485[1][1];
            l_575 = l_574;
            for (l_571 = 0; (l_571 == 3); l_571++)
            {
                return l_578[0][0][9];


            }
            if ((*p_6))
                continue;
        }
        (*l_568) = (*g_567);
    }
    else
    {
        unsigned l_589 = 0x52B76D16L;
        int l_626 = 4L;
        const int *l_660 = &g_71[3][0];
        unsigned char l_679 = 0xA9L;
        int ***l_686[9];
        short **l_706 = (void*)0;
        unsigned char *l_726[7];
        unsigned char **l_725 = &l_726[0];
        unsigned char ***l_731 = &g_729;
        int i;
        for (i = 0; i < 9; i++)
            l_686[i] = (void*)0;
        for (i = 0; i < 7; i++)
            l_726[i] = &g_270;
lbl_606:
        (*g_579) = &p_3;

        ;
        if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((void*)0 != &g_205) && (*g_205)), (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_589, ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((*l_568), (*g_580))), (safe_lshift_func_int16_t_s_s((g_253 = p_4), 3)))) & ((*p_6) = ((*g_492) = (safe_lshift_func_int16_t_s_u(1L, 7))))))), (safe_mod_func_uint16_t_u_u(p_3, (*g_205))))))), p_4)))
        {
            int l_615 = 0x47304197L;
            int *l_657 = &l_615;
            short **l_697 = (void*)0;
            int *l_700 = (void*)0;
            int l_708 = (-10L);
            int ***l_720 = &g_158;
            for (g_142 = 13; (g_142 < 33); g_142 = safe_add_func_uint8_t_u_u(g_142, 3))
            {
                unsigned l_605 = 0x72F117D0L;
                int l_627 = (-1L);
                unsigned char *l_650 = &g_370;
                if ((((*g_205) < (p_4 > 0x918826C2L)) || (-1L)))
                {
                    unsigned *l_602 = &g_409[5];
                    if (((g_552[2][0][0] == ((((*l_602) = g_8) > 0L) > p_3)) ^ ((*p_6) == (**g_158))))
                    {
                        if ((*g_567))
                            break;
                        (*g_158) = func_55(p_3);

                        ;
                        (*g_567) = 1L;
                    }
                    else
                    {
                        (*p_6) = (*p_6);
                    }

                    ;
                    if (l_603)
                        break;
                    (*g_158) = (*g_158);
                }
                else
                {
                    unsigned short l_604[3][2] = {{0x6843L, 0x6843L}, {0x6843L, 0x6843L}, {0x6843L, 0x6843L}};
                    int l_616 = 1L;
                    int i, j;
                    l_605 = l_604[1][1];
                    if (g_8)
                        goto lbl_606;
                    (*g_158) = &p_5;

                    ;
                    if ((safe_sub_func_uint8_t_u_u(p_4, l_605)))
                    {
                        if (p_4)
                            goto lbl_606;
                    }
                    else
                    {
                        short l_625 = 0L;
                        unsigned short *l_640[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_640[i] = &g_63[6][0][2];
                        (*g_84) = (l_627 = ((*g_567) = (~((((safe_mod_func_int16_t_s_s((l_626 = (safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_615, ((l_616 = 0UL) != (*p_6)))), (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_63[6][0][2], 4294967294UL)), l_625))))), l_604[0][1])) | p_3) != (*g_205)) || l_615))));
                        (*g_158) = func_55((safe_mod_func_uint8_t_u_u(((l_630 | ((l_626 && ((*g_84) = (**g_579))) >= 1UL)) || ((**g_158) = (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(l_626)) > (*p_6)), (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(p_3, p_5)), (l_641 = (l_625 & g_166)))))), (*l_568))))), l_615)));

                        ;
                    }

                    ;
                }

                ;
                if ((((safe_sub_func_uint8_t_u_u((((*g_205) = p_3) && (safe_mul_func_uint8_t_u_u(255UL, 0xDBL))), (*l_568))) ^ ((((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(func_49(((*l_650) = l_615), &l_571, func_55((safe_mul_func_int16_t_s_s((((g_253 && (~(*l_568))) & (safe_mod_func_uint16_t_u_u(p_5, (*l_568)))) < p_3), 7L))), l_627), 7)), 3)) || (*g_551)) | 1UL) ^ p_3)) && p_3))
                {
                    int *l_659 = &g_224[2][0][0];
                    (*g_567) = 0x37DE936AL;
                    for (g_253 = 0; (g_253 < 23); g_253++)
                    {
                        int *l_658[6] = {&g_224[4][0][1], &g_224[4][0][1], &l_626, &g_224[4][0][1], &g_224[4][0][1], &l_626};
                        int i;
                        return l_659;




                    }
                    (*g_158) = &l_571;

                    ;
                }
                else
                {
                    l_660 = &p_3;

                    ;
                    (**g_158) = (-2L);
                    return (*g_322);




                }

                ;
            }

            ;
            for (g_253 = (-7); (g_253 < (-7)); ++g_253)
            {
                unsigned short l_665 = 0x57A6L;
                int *l_693 = (void*)0;
                short l_699 = 1L;
            }
            (*g_722) = &p_3;
        }
        else
        {
            (***g_721) = (safe_sub_func_uint32_t_u_u(func_49(p_5, (**g_721), &l_666[4][0][0], p_4), 1L));
        }

        ;
lbl_781:
        (**g_721) = (void*)0;

        ;
        if ((((((*l_725) = &g_62) != (void*)0) == 0x2100L) >= (*g_205)))
        {
            int l_750 = 0x0B229A7BL;
            int *l_757[3][8][8] = {{{&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}}, {{&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}}, {{&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}, {&g_507, &l_666[4][0][0], &g_507, &l_666[5][0][0], &g_507, &g_85, &g_507, &g_507}}};
            short *l_762 = &g_253;
            char *l_763 = &l_603;
            int i, j, k;
            if ((*g_580))
            {
                for (g_253 = 0; (g_253 >= 17); g_253 = safe_add_func_uint16_t_u_u(g_253, 9))
                {
                    short l_736 = 0x40ADL;
                    l_736 = (*p_6);
                    (*g_492) = ((&l_736 != &g_253) != ((*l_568) = g_339));
                    (*g_158) = &p_5;

                    ;
                    if ((*p_6))
                        continue;
                }

                ;
            }
            else
            {
                int l_743 = 9L;
                int *l_746 = &l_666[4][0][0];
                short l_749 = (-1L);
                (*l_746) = (((0x04D7F099L | (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(l_743, (((l_743 <= (*p_6)) == (safe_add_func_uint8_t_u_u((g_85 || l_743), l_750))) || 0x106FL))), (-5L))), l_750))) <= (*g_205)) | (**g_729));
                p_6 = ((*g_158) = (*g_322));

                ;
                ;
            }

            ;
            ;
            p_5 = (safe_mod_func_int8_t_s_s(((*l_763) = (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_3, ((*g_492) = (((((~((*l_568) = ((*l_762) = ((*g_580) | (+(safe_add_func_int8_t_s_s(0x57L, (((*g_205) = (((safe_mul_func_uint16_t_u_u(1UL, (p_3 && 5UL))) < (**g_729)) | 0x02L)) && p_5)))))))) ^ 0x761EL) < p_5) && 0x7B3AL) || p_4)))), p_3))), 0xBAL));
        }
        else
        {
            short l_790 = 0x5FEBL;
            for (g_23 = 27; (g_23 > (-19)); g_23 = safe_sub_func_int8_t_s_s(g_23, 7))
            {
                unsigned char *l_776[3][4] = {{(void*)0, (void*)0, &l_679, (void*)0}, {(void*)0, (void*)0, &l_679, (void*)0}, {(void*)0, (void*)0, &l_679, (void*)0}};
                unsigned char *l_777 = (void*)0;
                unsigned char *l_778[10][7][3] = {{{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}, {{&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}, {&g_370, &g_370, &l_679}}};
                unsigned char *l_779 = &g_370;
                int *l_780 = (void*)0;
                int i, j, k;
                if (((p_4 ^ ((*g_205) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0x94L, 0)), func_49(((*l_779) = (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_5, p_5)), (((**l_725) = (**g_729)) && (*l_660))))), (*g_322), l_780, p_3))), (-4L))))) & p_3))
                {
                    unsigned **l_786[9][5] = {{&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}, {&g_785, (void*)0, &g_785, &g_785, (void*)0}};
                    unsigned ** const l_787[8][8][4] = {{{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}, {{&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}, {&g_785, &g_785, &g_785, &g_785}}};
                    const int l_799 = 0L;
                    unsigned short *l_800 = &g_63[9][3][3];
                    int i, j, k;
                    if (g_85)
                        goto lbl_781;
                    (*g_492) = func_49(p_5, func_55((safe_mod_func_int16_t_s_s(((l_786[6][0] = g_784) == l_787[5][2][2]), (safe_lshift_func_int8_t_s_u((~p_3), p_4))))), (*g_322), l_799);
                }
                else
                {
                    const int *l_801 = &g_224[2][0][0];
                    l_801 = (*g_722);

                    ;
                }
                (*p_6) = l_790;
            }
            for (g_339 = (-22); (g_339 >= 9); g_339++)
            {
                const int **l_804 = &g_580;
                unsigned short *l_810 = &l_641;
                int l_813 = (-1L);
                (*l_804) = &p_3;
                for (l_679 = (-3); (l_679 == 48); ++l_679)
                {
                    unsigned short * const l_809 = &g_63[2][3][0];
                    char *l_811 = &g_179[2];
                    int *l_812 = (void*)0;
                    int *l_814 = &l_666[4][0][0];
                }
                (*p_6) = (((*l_568) = ((*g_730) = p_3)) | 255UL);
                return (*g_158);



            }
        }

        ;
        ;
    }

    ;
    ;
    ;
    (*g_722) = (*g_579);
    return (*g_322);




}







static char func_14(short p_15, int p_16, short p_17, char p_18, int * p_19)
{
    unsigned l_413 = 0UL;
    int *l_422 = &g_71[3][0];
    unsigned char *l_431 = (void*)0;
    unsigned char *l_432 = &g_62;
    unsigned char *l_433[9][1][2] = {{{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}, {{&g_370, &g_370}}};
    unsigned l_434 = 0UL;
    unsigned short *l_438 = &g_63[1][0][0];
    unsigned char *l_441 = &g_370;
    const int l_490 = 0x08A6282CL;
    int *l_537 = &g_85;
    int i, j, k;
    (*l_422) = (((safe_mod_func_uint16_t_u_u(l_413, (*l_422))) & g_435) & g_206);
    if ((safe_sub_func_uint16_t_u_u(((*l_438) = (*l_422)), ((safe_lshift_func_int16_t_s_s((*g_205), (!(+func_49(((*l_441) = (g_206 != (*l_422))), l_422, l_422, (*l_422)))))) >= 0x2FL))))
    {
        unsigned short l_463 = 0UL;
        int l_470[5];
        unsigned char **l_473[8][10][3] = {{{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}, {{&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}, {&l_433[2][0][0], (void*)0, &l_431}}};
        unsigned *l_491 = &g_142;
        unsigned char *l_505 = (void*)0;
        unsigned char *l_506 = &g_270;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_470[i] = 4L;
        for (p_15 = 23; (p_15 > (-25)); p_15 = safe_sub_func_int16_t_s_s(p_15, 3))
        {
            short *l_461 = &g_253;
            short l_462 = 0xA1C9L;
            (*p_19) = (safe_mod_func_uint32_t_u_u((l_463 = ((0xC439L <= (safe_lshift_func_int16_t_s_s(((0x72L >= g_249) >= 4UL), 0))) < (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((*g_205) = 0L), (l_462 = (((9UL < p_16) != (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((!(((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s(g_191)), 13)) ^ ((*l_461) = p_16)) && (*p_19))) != g_63[6][0][2]) > g_85), g_409[2])), 3))) | 65531UL)))), 1UL)), (-7L))))), p_17));
            (*g_158) = func_55(l_462);

            ;
        }
        for (g_191 = (-3); (g_191 != (-3)); g_191++)
        {
            int * const l_466 = &g_116;
            int **l_468 = (void*)0;
            int **l_469[6][3][6] = {{{(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}}, {{(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}}, {{(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}}, {{(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}}, {{(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}}, {{(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}, {(void*)0, &l_422, &g_84, &g_338[3], &g_338[3], &g_84}}};
            char *l_474 = &g_179[1];
            unsigned char **l_478[2];
            int *l_479[5];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_478[i] = &l_433[6][0][0];
            for (i = 0; i < 5; i++)
                l_479[i] = &g_224[2][0][0];
            p_19 = l_466;

            ;
            if ((*p_19))
                break;
            if (l_463)
                break;
            if (((l_470[3] = l_463) >= (safe_rshift_func_uint8_t_u_u(0x2BL, (((*l_474) = (l_473[5][4][2] != l_473[5][4][2])) | (((*l_422) || ((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u((l_478[1] != (void*)0), p_18)))) && (-8L))) == p_15))))))
            {
                unsigned short **l_482 = (void*)0;
                for (g_85 = 0; (g_85 > (-26)); g_85 = safe_sub_func_int32_t_s_s(g_85, 3))
                {
                    (*l_422) = (*p_19);
                    return g_435;
                }
                for (p_16 = 0; p_16 < 6; p_16 += 1)
                {
                    for (p_18 = 0; p_18 < 3; p_18 += 1)
                    {
                        for (g_85 = 0; g_85 < 6; g_85 += 1)
                        {
                            l_469[p_16][p_18][g_85] = &g_84;
                        }
                    }
                }
                (*g_483) = l_482;
                if (l_470[3])
                    continue;
            }
            else
            {
                if ((*p_19))
                    break;
            }
        }



        (*p_19) = (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((*g_205), func_49(((*l_506) = func_49(l_490, func_42(((*l_491) = p_17)), g_492, (((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(0x6EC1L, (((1L >= (safe_mul_func_uint8_t_u_u((((((*p_19) = (*p_19)) <= (safe_div_func_uint32_t_u_u((g_179[3] == p_16), 0x5249A5ACL))) | p_16) ^ 1UL), 5UL))) | (*g_205)) ^ l_470[2]))), 0x35090CE9L)), 0x1DL)), 0x11L)) < p_16) != 1L))), p_19, l_422, g_507))), 10));
    }
    else
    {
        for (g_249 = 0; (g_249 <= 3); g_249 += 1)
        {
            int *l_512 = &g_224[2][0][0];
            (*g_492) = (0UL ^ (safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((*g_205), (*l_422))), 13)));
            for (g_206 = 0; (g_206 <= 0); g_206 += 1)
            {
                unsigned l_515[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_515[i][j] = 0xEEAEE49BL;
                }
                for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
                {
                    int i, j, k;
                    g_338[(g_206 + 5)] = (*g_322);
                    p_19 = ((*g_158) = func_55(((*l_438) = g_63[(p_16 + 6)][g_249][(g_206 + 4)])));

                    ;
                    ;
                }
                if ((*p_19))
                    continue;
                if ((*g_492))
                    continue;
                for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
                {
                    for (g_253 = 0; (g_253 <= 4); g_253 += 1)
                    {
                        int i, j, k;
                        (*g_158) = l_512;

                        ;
                        (*p_19) = (safe_div_func_int8_t_s_s((&g_63[(g_206 + 9)][(g_206 + 1)][g_253] == (void*)0), (p_15 ^ l_515[2][0])));
                        if ((**g_158))
                            break;
                        (*g_492) = ((*p_19) = (p_15 && (safe_sub_func_int16_t_s_s((*g_205), p_18))));
                    }
                }
            }
        }




    }





lbl_555:
    for (g_253 = 3; (g_253 >= 0); g_253 -= 1)
    {
        const short l_518 = (-9L);
        int *l_522 = &g_224[3][0][3];
        p_19 = func_55(p_17);

        ;
        for (g_339 = 0; (g_339 <= 3); g_339 += 1)
        {
            const int l_521[3][7][4] = {{{(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}}, {{(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}}, {{(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}, {(-1L), (-1L), 0L, 0L}}};
            int *l_523 = &g_224[2][0][0];
            char l_526 = 6L;
            unsigned char l_541 = 0xCAL;
            int i, j, k;
            (*p_19) = ((*l_422) | (p_18 ^ func_49(l_518, func_55((*l_422)), p_19, (safe_div_func_int8_t_s_s((func_49(l_521[2][6][0], l_522, (l_523 = func_55(l_521[2][6][0])), g_179[3]) | 65535UL), (*l_522))))));

            ;
            for (g_116 = 0; (g_116 <= 4); g_116 += 1)
            {
                short l_525 = (-8L);
                int *l_539 = &g_23;
                for (g_23 = 1; (g_23 <= 4); g_23 += 1)
                {
                    int i, j, k;
                    p_19 = func_55(g_63[(g_23 + 4)][g_253][(g_339 + 1)]);
                    if ((p_16 ^ (safe_unary_minus_func_uint32_t_u((0xA6L >= p_15)))))
                    {
                        (*l_522) = ((void*)0 != &p_18);
                    }
                    else
                    {
                        (*l_422) = (l_525 = (*p_19));
                        if (l_526)
                            break;
                    }
                }
                (*l_523) = (&l_434 == &g_409[4]);
                if (((*l_522) = ((*p_19) = (-7L))))
                {
                    return g_270;
                }
                else
                {
                    int *l_540[1][3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_540[i][j] = &g_71[0][0];
                    }
                    if (func_49(((*l_422) = (g_179[5] && (*l_422))), ((*g_158) = p_19), func_55(p_17), (safe_add_func_int8_t_s_s(g_63[2][0][4], (*l_523)))))
                    {
                        unsigned char l_535[1];
                        int **l_536[10][8] = {{&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}, {&l_523, &l_422, &l_422, (void*)0, &g_492, &l_523, &g_338[3], (void*)0}};
                        int *l_538 = &g_191;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_535[i] = 0UL;
                        (*l_523) = ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*l_422) = (*l_522)), func_49(g_142, ((*g_158) = p_19), func_55((safe_add_func_int8_t_s_s(func_49(g_63[6][0][2], func_55(l_535[0]), p_19, ((*l_538) = (func_49((*l_523), (l_537 = func_55(l_525)), p_19, p_16) == (*l_523)))), 0x1BL))), p_18))), g_409[4])) | 0x93L);

                        ;
                        l_539 = (void*)0;

                        ;
                        l_540[0][0] = (*g_322);


                    }
                    else
                    {
                        unsigned char l_542 = 0UL;
                        (*g_158) = func_45(l_541, l_542, p_19);

                        ;
                        (*g_492) = (*p_19);
                        (**g_158) = ((*l_522) = l_542);
                    }

                    ;
                    ;

                    if ((*g_492))
                        break;
                }

                ;
                ;
            }
        }
    }
    for (g_249 = 0; (g_249 == 48); g_249 = safe_add_func_uint8_t_u_u(g_249, 1))
    {
        unsigned char * const *l_547 = &l_433[3][0][1];
        int *l_556 = &g_224[2][0][0];
        int **l_557 = (void*)0;
        int **l_558[7][2][5] = {{{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}, {{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}, {{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}, {{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}, {{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}, {{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}, {{&g_338[5], &g_338[5], &l_537, &g_323, &l_556}, {&g_338[5], &g_338[5], &l_537, &g_323, &l_556}}};
        int i, j, k;
        (*g_492) = (*p_19);
        if ((*p_19))
            continue;
        if (((*l_537) = (p_18 | p_16)))
        {
            const unsigned char *l_549 = &g_62;
            const unsigned char * const *l_548[4][9] = {{&l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549}, {&l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549}, {&l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549}, {&l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549, &l_549}};
            int *l_554 = (void*)0;
            int i, j;
            for (g_108 = 0; (g_108 != (-29)); g_108 = safe_sub_func_int32_t_s_s(g_108, 2))
            {
                int *l_553 = (void*)0;
                (*l_537) = func_49((p_18 & (l_547 == (g_550 = l_548[1][5]))), p_19, l_553, func_49((*g_551), l_554, func_55((*l_422)), p_15));

                ;
            }


            (*g_158) = func_55(p_18);

            ;
            (*g_158) = func_42((*l_422));

            ;
        }
        else
        {
            if (l_413)
                goto lbl_555;
        }
        p_19 = ((*g_158) = l_556);

        ;
        ;
    }
    return g_365;
}







static unsigned short func_28(int * p_29, unsigned short p_30, int * p_31, unsigned short p_32, int * p_33)
{
    unsigned short l_351 = 0UL;
    int l_352 = (-1L);
    unsigned short *l_353 = &g_63[9][2][0];
    unsigned short l_390 = 0xE2D4L;
    if (((g_71[3][0] == (p_30 != p_30)) == ((+(*g_205)) && (+((safe_mod_func_uint16_t_u_u((~func_49(func_49(g_8, func_55(((*l_353) = ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((g_8 <= ((((-5L) & (safe_add_func_uint32_t_u_u(g_142, (l_352 = l_351)))) && p_32) >= 0L)), g_142)) <= l_351) < g_224[1][0][1]), g_71[1][0])), 12)) <= g_270))), (*g_322), p_30), p_33, (*g_158), l_351)), 0x1E5DL)) < 1L)))))
    {
        unsigned l_354 = 0x1D824BCEL;
        unsigned char ** const l_359 = (void*)0;
        int *l_366 = (void*)0;
        int *l_391[5];
        int i;
        for (i = 0; i < 5; i++)
            l_391[i] = &g_23;
        if (l_354)
        {
            unsigned short l_387 = 9UL;
            for (g_62 = 0; (g_62 >= 56); ++g_62)
            {
                for (g_249 = 0; (g_249 == 55); g_249 = safe_add_func_int32_t_s_s(g_249, 1))
                {
                    unsigned char **l_361 = (void*)0;
                    unsigned char ***l_360 = &l_361;
                    int l_378 = 0xA1802248L;
                    (*l_360) = l_359;
                    if (((*p_31) = l_354))
                    {
                        unsigned char l_364 = 8UL;
                        unsigned char *l_367 = &l_364;
                        unsigned char *l_368[4][7] = {{&g_270, &g_62, &g_62, (void*)0, (void*)0, &g_62, &g_62}, {&g_270, &g_62, &g_62, (void*)0, (void*)0, &g_62, &g_62}, {&g_270, &g_62, &g_62, (void*)0, (void*)0, &g_62, &g_62}, {&g_270, &g_62, &g_62, (void*)0, (void*)0, &g_62, &g_62}};
                        unsigned char *l_369[9][1];
                        unsigned char *l_371 = (void*)0;
                        unsigned char *l_372 = &g_370;
                        int *l_373 = &g_23;
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_369[i][j] = &g_370;
                        }
                        (*l_373) = (g_270 <= (safe_mul_func_uint8_t_u_u(func_49(((*l_372) = ((*l_367) = func_49(l_351, (*g_158), (*g_158), p_30))), l_373, p_33, p_32), p_32)));
                        (*g_158) = l_366;

                        ;
                        (*p_33) = 0x3B41750EL;
                    }
                    else
                    {
                        int **l_381 = &g_338[3];
                        (*p_31) = (*p_31);
                        (*p_31) = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_378, l_378)), (safe_mul_func_int8_t_s_s((l_366 == ((*l_381) = ((*g_158) = (void*)0))), (safe_unary_minus_func_uint8_t_u(g_365))))));

                        ;
                        if ((*p_31))
                            break;
                    }

                    ;
                }
                (*g_158) = &l_352;

                ;
                for (l_352 = 3; (l_352 > 8); l_352++)
                {
                    (*p_31) = (*g_84);
                    for (g_253 = 5; (g_253 >= 0); g_253 -= 1)
                    {
                        int i;
                        return g_179[g_253];


                    }
                }
            }

            ;

            for (g_206 = (-3); (g_206 >= (-26)); --g_206)
            {
                (*p_33) = ((*p_31) = l_387);
                (*g_158) = (*g_322);

                ;
            }
            return p_30;


        }
        else
        {
            l_390 = ((*p_33) = (((void*)0 == p_33) | (g_179[0] != (((-4L) > g_370) && (-5L)))));
            (*g_158) = (*g_322);

            ;
            (*p_33) = (((*g_158) = &l_352) != l_391[0]);

            ;
        }

        ;
    }
    else
    {
        for (p_30 = 0; (p_30 > 55); p_30 = safe_add_func_int32_t_s_s(p_30, 7))
        {
            (*g_158) = (void*)0;

            ;
        }
    }

    ;
    for (g_108 = (-26); (g_108 == 26); g_108++)
    {
        char *l_400[4];
        unsigned *l_407 = &g_142;
        unsigned *l_408 = &g_409[4];
        int l_410[7] = {(-1L), (-1L), 0x85742EE5L, (-1L), (-1L), 0x85742EE5L, (-1L)};
        int i;
        for (i = 0; i < 4; i++)
            l_400[i] = &g_179[5];
        (*g_158) = func_42(func_49((safe_div_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_30, 0xEE1AL)) >= (l_352 = g_71[1][0])), ((*l_353) = g_166))), (*g_158), (*g_158), ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(g_206, (((!(safe_mul_func_uint8_t_u_u((((*l_407) = l_390) != (((*l_408) = (&g_253 == &g_253)) < l_410[6])), l_351))) <= p_32) || (-1L)))), g_339)) | g_191)));

        ;
    }

    ;
    (*p_33) = l_390;
    (*p_33) = (*p_31);
    return p_30;


}







static int * func_34(const int p_35, int * p_36, char p_37)
{
    unsigned short l_119 = 0xA6E1L;
    unsigned short l_122 = 0x3D8BL;
    unsigned char l_127 = 0x3AL;
    int *l_133 = &g_116;
    char *l_211 = &g_179[4];
    int l_218 = 0xB4EE9B08L;
    char l_250[4] = {0x2CL, 1L, 0x2CL, 1L};
    unsigned short l_290[6][5][7] = {{{1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}}, {{1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}}, {{1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}}, {{1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}}, {{1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}}, {{1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}, {1UL, 0x82EEL, 0x7EB9L, 0x217AL, 0x89D2L, 0UL, 65535UL}}};
    int l_304[10] = {0xBD235115L, (-1L), 0xBD235115L, (-1L), 0xBD235115L, (-1L), 0xBD235115L, (-1L), 0xBD235115L, (-1L)};
    int *l_325 = &g_224[0][0][5];
    int l_337 = 0x529B2F41L;
    int i, j, k;
    if (((*p_36) = (safe_add_func_uint32_t_u_u((l_119 != (((void*)0 == &g_108) ^ 0x1CA74A03L)), (g_63[1][1][3] | (((!(l_122 > (&g_62 == (void*)0))) & (p_37 && l_119)) | g_63[8][3][2]))))))
    {
        short *l_123 = &g_108;
        int l_124 = 1L;
        (*p_36) = (((0x826EL | 0x865EL) | ((*l_123) = (g_8 < p_37))) >= l_124);
        (*p_36) = (safe_lshift_func_int16_t_s_u(((*l_123) = (-5L)), 10));
    }
    else
    {
        const unsigned short l_134 = 0x4FFDL;
        int *l_148 = &g_23;
        g_116 = g_71[5][0];
        for (l_119 = 0; (l_119 <= 4); l_119 += 1)
        {
            short *l_128[3][8][1] = {{{&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}}, {{&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}}, {{&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}, {&g_108}}};
            int l_129[1][5];
            int **l_131 = (void*)0;
            int *l_132 = &g_85;
            unsigned l_141 = 2UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_129[i][j] = 2L;
            }
            (*p_36) = (&g_84 != (void*)0);
            l_132 = func_42(((0x48L == (9UL < (l_129[0][4] = l_127))) | (l_119 < 0x53C0L)));

            ;
            l_133 = func_55(l_119);

            ;
            for (g_108 = 0; (g_108 <= 4); g_108 += 1)
            {
                unsigned short *l_147 = &l_122;
                int **l_149 = &l_132;
                unsigned char *l_152 = &g_62;
                (*l_148) = func_49(l_134, func_42((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((void*)0 != p_36), (65535UL || (g_142 = (l_141 ^ g_8))))), (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_134, ((*l_147) = g_8))), (l_148 == l_133))))), 0xA135L))), p_36, p_35);
                (*l_149) = p_36;

                ;
                (*l_149) = func_55(func_49(((*l_152) = ((safe_mod_func_int16_t_s_s((-1L), g_23)) != p_37)), p_36, p_36, p_35));

                ;
                for (p_37 = 3; (p_37 >= 0); p_37 -= 1)
                {
                    int i, j, k;
                    (*l_148) = (g_63[(p_37 + 1)][l_119][g_108] == (g_63[(p_37 + 1)][p_37][g_108] | (safe_mul_func_uint8_t_u_u(((*l_152) = (*l_133)), ((g_63[8][3][2] < g_63[6][0][2]) || ((**l_149) == 0x6CB9L))))));
                    if ((*p_36))
                        continue;
                    for (l_122 = 0; (l_122 <= 0); l_122 += 1)
                    {
                        int i, j, k;
                        g_71[(l_119 + 2)][l_122] = ((void*)0 == l_128[(l_122 + 1)][(p_37 + 3)][l_122]);
                        (*l_133) = g_71[(l_122 + 4)][l_122];
                    }
                    for (g_142 = 0; (g_142 <= 4); g_142 += 1)
                    {
                        int *l_155 = &g_71[7][0];
                        return l_155;


                    }
                }
                for (p_37 = 0; (p_37 <= 4); p_37 += 1)
                {
                    const int l_161[1][7][7] = {{{0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}, {0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}, {0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}, {0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}, {0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}, {0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}, {0xA59180C4L, (-1L), 0xB6114672L, 0x87D74882L, 0x4C48B7B4L, 0x87D74882L, 0xB6114672L}}};
                    int i, j, k;
                    (*l_133) = ((g_8 & ((-5L) >= ((g_158 = &g_84) == (void*)0))) | ((safe_mul_func_int8_t_s_s((l_161[0][2][1] && (safe_mul_func_int16_t_s_s((-5L), ((*l_133) ^ (func_49((safe_sub_func_int32_t_s_s((~((g_63[(p_37 + 2)][l_119][p_37] = p_37) | ((func_49(p_37, &g_71[3][0], l_148, g_108) | g_108) | 0x20L))), (*l_132))), (*l_149), p_36, p_37) || (*l_148)))))), g_166)) || g_62));
                }
            }

            ;
        }

        ;
    }

    ;
    (*p_36) = (safe_rshift_func_int16_t_s_s((*l_133), g_63[6][0][2]));
    for (g_62 = 0; (g_62 <= 53); g_62 = safe_add_func_uint8_t_u_u(g_62, 5))
    {
        unsigned short l_173 = 8UL;
        char *l_178 = &g_179[3];
        unsigned char *l_180[8] = {&l_127, &l_127, &l_127, &l_127, &l_127, &l_127, &l_127, &l_127};
        int l_181 = 0xD72065D4L;
        char *l_190 = (void*)0;
        int l_192 = (-5L);
        int *l_193 = (void*)0;
        short *l_204[4][2] = {{&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}, {&g_108, &g_108}};
        unsigned l_210 = 0xEE9E0683L;
        unsigned l_256 = 0x27701506L;
        const int *l_271 = &g_23;
        int *l_293 = &g_191;
        int *l_312[10][3] = {{(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}, {(void*)0, (void*)0, &g_71[3][0]}};
        short **l_334 = &g_205;
        int i, j;
        if ((p_37 <= (safe_mul_func_uint8_t_u_u(l_173, (((p_36 == (void*)0) < (func_49((safe_add_func_int8_t_s_s(p_37, (l_181 = (safe_lshift_func_int8_t_s_s(((*l_178) = p_37), p_35))))), p_36, (*g_158), g_71[2][0]) || (*l_133))) >= g_166)))))
        {
            unsigned l_208 = 4294967287UL;
            int **l_209[3][9][4] = {{{&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}}, {{&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}}, {{&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}, {&l_133, &l_133, &g_84, &g_84}}};
            unsigned l_223[9] = {0x26F25053L, 4294967291UL, 0x26F25053L, 4294967291UL, 0x26F25053L, 4294967291UL, 0x26F25053L, 4294967291UL, 0x26F25053L};
            int *l_242 = (void*)0;
            int i, j, k;
            for (p_37 = 0; (p_37 <= 5); ++p_37)
            {
                (*p_36) = (*l_133);
            }
            for (g_142 = 0; (g_142 == 27); g_142 = safe_add_func_uint16_t_u_u(g_142, 7))
            {
                int *l_207 = (void*)0;
                int l_227 = 0x6CEAAE59L;
                int l_267 = 1L;
                unsigned char *l_268 = &l_127;
                unsigned char *l_269 = &g_270;
                (*g_158) = p_36;

                ;
            }
            (*p_36) = 0x387034F7L;
        }
        else
        {
            const int **l_273 = (void*)0;
            const int **l_274 = &l_271;
            unsigned l_277 = 0xCFE1AAB1L;
            const unsigned short l_278 = 0x3423L;
            int *l_289 = (void*)0;
            (*l_274) = l_271;
            (*l_274) = func_55(p_35);
            (*p_36) = func_49((1L < ((safe_div_func_int8_t_s_s(p_35, l_277)) && l_278)), p_36, (*g_158), l_290[1][1][2]);
            p_36 = p_36;
        }
        if ((((*g_205) = (safe_mul_func_int16_t_s_s((l_271 == (l_293 = func_55(g_166))), ((*l_133) ^ (safe_div_func_uint16_t_u_u((g_63[6][0][2] && (safe_lshift_func_int8_t_s_u(((*l_211) = g_62), (*l_133)))), (safe_div_func_int16_t_s_s(0x4D27L, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((p_35 == 65530UL) != l_304[3]), (*p_36))), (*g_205))))))))))) != 0UL))
        {
            int **l_307 = (void*)0;
            for (l_127 = 0; (l_127 >= 52); l_127 = safe_add_func_uint8_t_u_u(l_127, 4))
            {
                return (*g_158);


            }
            p_36 = ((*g_158) = p_36);

            ;
        }
        else
        {
            int *l_313 = &l_181;
            (*p_36) = (((~(safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((p_37 && 0xA8FCL), 1)), (7L == g_166)))) && (g_62 ^ func_49(g_63[6][0][2], l_312[7][0], l_313, (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((func_49((safe_mul_func_uint8_t_u_u((+(g_270 = p_37)), (-1L))), l_133, &l_181, g_224[2][0][0]) && g_224[0][0][3]), p_37)), 3))))) ^ (*p_36));
            for (g_108 = 0; (g_108 >= (-19)); g_108 = safe_sub_func_uint16_t_u_u(g_108, 1))
            {
                short * const l_324 = &g_108;
                (*p_36) = 0xF8924D8FL;
                if ((0x1AL == ((g_270 < p_35) || (*l_133))))
                {
                    (*g_322) = ((*g_158) = p_36);

                    ;
                    ;
                    return p_36;


                }
                else
                {
                    (*l_133) = (&g_206 == l_324);
                    return l_325;


                }
            }
        }

        ;
        g_85 = ((*p_36) = (safe_div_func_int32_t_s_s(((-1L) && (safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((!(*p_36)), (safe_sub_func_uint8_t_u_u((g_270 = (((*l_334) = l_204[1][1]) != (void*)0)), ((safe_add_func_int32_t_s_s(((*l_325) = (*l_133)), (l_337 = (*p_36)))) && (func_49(p_35, (*g_322), (*g_158), p_35) && g_108)))))) < g_23), g_142))), (-1L))));
        (*p_36) = 0x32225452L;
    }

    ;
    ;
    return (*g_158);


}







static int func_38(int * p_39, char p_40, int * p_41)
{
    unsigned short l_101 = 0xDAA1L;
    unsigned char *l_102 = &g_62;
    short *l_107[8][5][6] = {{{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}, {{&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}, {&g_108, &g_108, &g_108, &g_108, (void*)0, &g_108}}};
    int l_109 = 0xBAA24DD3L;
    unsigned short l_110 = 3UL;
    int *l_111 = &g_85;
    int i, j, k;
    for (p_40 = (-13); (p_40 > (-26)); p_40--)
    {
        char l_88 = 0L;
        if ((*g_84))
            break;
        if (l_88)
            continue;
    }
    (*g_84) = (*p_39);
    g_84 = p_41;

    ;
    (*l_111) = ((*p_39) = (!(((0x7DC1DF72L ^ g_8) >= (safe_add_func_uint16_t_u_u((+((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s((((0L >= (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int8_t_s(((-1L) < ((*l_102) = (safe_rshift_func_uint8_t_u_u(func_49(((((((*l_102) = l_101) | (p_40 >= p_40)) || (((safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((l_109 = (g_108 = (-1L))) == 1UL), p_40)), 0x7EE71932L)) != l_101) || g_23)) <= l_110) && l_101), p_41, &g_85, p_40), 4))))))))) <= l_101) || l_110), p_40)), 2)) <= l_110), g_63[4][0][1])) < 0L)), (-6L)))) || l_109)));
    return p_40;
}







static int * func_42(unsigned p_43)
{
    const unsigned short l_54 = 0UL;
    int *l_61[6] = {&g_23, &g_23, &g_23, &g_23, &g_23, &g_23};
    int **l_73 = &l_61[3];
    int *l_82 = &g_71[3][0];
    int i;
    (*l_73) = func_45((func_49(l_54, func_55(g_23), func_55((g_63[6][0][2] = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_43, p_43)), ((((g_62 = (((void*)0 != l_61[1]) < (p_43 | 3UL))) >= g_8) != g_23) > p_43))))), g_8) && 0x98L), g_23, l_61[1]);


    (**l_73) = (safe_lshift_func_uint16_t_u_s(((**l_73) > (safe_mul_func_int16_t_s_s(func_49((**l_73), &g_71[3][0], (*l_73), (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(func_49((g_8 == g_23), &g_71[3][0], (*l_73), g_8), g_8)), p_43))), g_63[6][0][2]))), g_71[4][0]));
    return l_82;


}







static int * func_45(short p_46, unsigned char p_47, int * p_48)
{
    unsigned l_69 = 0x67F41B6AL;
    int *l_70 = &g_71[3][0];
    int l_72 = 0x70F82EDDL;
    l_72 = ((((*l_70) = ((*p_48) = (safe_lshift_func_int16_t_s_u(g_8, (0xF7E4L | l_69))))) == 0UL) > 0x49L);
    return &g_71[5][0];


}







static char func_49(const unsigned char p_50, int * p_51, int * p_52, int p_53)
{
    int *l_64 = (void*)0;
    int **l_65 = &l_64;
    int l_66[7][7] = {{0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}, {0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}, {0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}, {0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}, {0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}, {0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}, {0x5F053D0CL, 1L, 0x1EF224B3L, (-1L), 0L, 0xF1497EA9L, 0L}};
    int i, j;
    (*l_65) = l_64;
    return l_66[3][2];
}







static int * func_55(unsigned short p_56)
{
    return &g_23;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_63[i][j][k], "g_63[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_71[i][j], "g_71[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_224[i][j][k], "g_224[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_409[i], "g_409[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_552[i][j][k], "g_552[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
