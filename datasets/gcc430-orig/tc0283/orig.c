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



static short g_14 = (-9L);
static short g_17 = 0x5357L;
static short *g_16 = &g_17;
static int g_49[8] = {(-9L), 0xC0B80722L, (-9L), 0xC0B80722L, (-9L), 0xC0B80722L, (-9L), 0xC0B80722L};
static int g_57[9] = {(-8L), 0x0A6219FFL, (-8L), 0x0A6219FFL, (-8L), 0x0A6219FFL, (-8L), 0x0A6219FFL, (-8L)};
static volatile int g_63 = 5L;
static volatile int g_64 = 0x4C35C241L;
static volatile int g_65 = 1L;
static volatile int g_66 = 0x00BB6E74L;
static volatile int g_67 = (-2L);
static int g_68 = 0xBB4D05C4L;
static int g_69[4][1][6] = {{{(-1L), 0x9958A82DL, 1L, 0x9958A82DL, (-1L), 0x3EC6B9FEL}}, {{(-1L), 0x9958A82DL, 1L, 0x9958A82DL, (-1L), 0x3EC6B9FEL}}, {{(-1L), 0x9958A82DL, 1L, 0x9958A82DL, (-1L), 0x3EC6B9FEL}}, {{(-1L), 0x9958A82DL, 1L, 0x9958A82DL, (-1L), 0x3EC6B9FEL}}};
static int g_71 = 1L;
static int *g_86 = &g_68;
static int **g_85 = &g_86;
static int ***g_84 = &g_85;
static unsigned g_88 = 0x44A59A1FL;
static int g_97 = 0xCAB8BF77L;
static int g_100[8][9][3] = {{{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}, {{0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}, {0xED93686DL, 0L, 0L}}};
static unsigned short g_102 = 0UL;
static unsigned char g_111 = 255UL;
static unsigned char *g_136 = &g_111;
static unsigned char **g_135 = &g_136;
static char g_152 = 4L;
static int g_153 = (-1L);
static unsigned g_166 = 4294967289UL;
static unsigned g_181 = 0UL;
static unsigned short g_182 = 0x01DEL;
static unsigned char g_193 = 0x0CL;
static volatile unsigned char ****g_200[2] = {(void*)0, (void*)0};
static unsigned *g_224 = &g_181;
static unsigned g_283 = 0x45105DDBL;
static char g_289 = 1L;
static unsigned char ***g_316 = &g_135;
static unsigned char ****g_315[10] = {(void*)0, &g_316, (void*)0, &g_316, (void*)0, &g_316, (void*)0, &g_316, (void*)0, &g_316};
static unsigned char *****g_314[3][3][3] = {{{(void*)0, &g_315[7], (void*)0}, {(void*)0, &g_315[7], (void*)0}, {(void*)0, &g_315[7], (void*)0}}, {{(void*)0, &g_315[7], (void*)0}, {(void*)0, &g_315[7], (void*)0}, {(void*)0, &g_315[7], (void*)0}}, {{(void*)0, &g_315[7], (void*)0}, {(void*)0, &g_315[7], (void*)0}, {(void*)0, &g_315[7], (void*)0}}};
static short *g_321 = &g_17;
static unsigned char g_342 = 1UL;
static volatile char g_354[1] = {4L};
static int g_366 = 0x15FEB5DDL;
static unsigned char g_369[7] = {0xB8L, 0xB8L, 0xB8L, 0xB8L, 0xB8L, 0xB8L, 0xB8L};
static short *g_388[1][1] = {{&g_17}};
static short g_407 = 0x2D25L;
static volatile int *g_419 = (void*)0;
static volatile int **g_418 = &g_419;
static volatile int ***g_417 = &g_418;
static volatile int ****g_416 = &g_417;
static volatile int *****g_415 = &g_416;
static volatile int **g_477 = (void*)0;
static volatile int g_480[2][8] = {{0xFC086CD2L, 0xFC086CD2L, 0x9C30B06AL, 0xFC086CD2L, 0xFC086CD2L, 0x9C30B06AL, 0xFC086CD2L, 0xFC086CD2L}, {0xFC086CD2L, 0xFC086CD2L, 0x9C30B06AL, 0xFC086CD2L, 0xFC086CD2L, 0x9C30B06AL, 0xFC086CD2L, 0xFC086CD2L}};
static unsigned **g_487 = &g_224;
static unsigned ***g_486 = &g_487;
static int g_542[9][9] = {{0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}, {0L, 1L, (-6L), 0x12E9B3F7L, 0L, 0xB6A165AFL, 0L, 0x12E9B3F7L, (-6L)}};
static int ****g_564[8] = {&g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84, &g_84};
static int *****g_563 = &g_564[5];
static short *g_602 = (void*)0;
static char g_710[10] = {0x92L, 0x92L, 0x92L, 0x92L, 0x92L, 0x92L, 0x92L, 0x92L, 0x92L, 0x92L};
static unsigned g_735 = 0x7AC04AE6L;
static unsigned *g_763 = &g_88;
static unsigned **g_762 = &g_763;
static unsigned g_800 = 4294967295UL;
static short g_815 = 1L;
static short **g_841[9] = {&g_602, &g_602, &g_388[0][0], &g_602, &g_602, &g_388[0][0], &g_602, &g_602, &g_388[0][0]};
static int g_866 = (-4L);



static int func_1(void);
static int func_2(unsigned char p_3, int p_4, short p_5, unsigned p_6, int p_7);
static unsigned char func_18(short * p_19, unsigned char p_20);
static short * func_21(unsigned p_22, short * p_23, short * p_24, short * p_25);
static unsigned short func_26(unsigned p_27, short p_28, short * p_29, short * p_30);
static unsigned char func_32(short p_33, int p_34, char p_35, short * p_36, short * p_37);
static unsigned func_40(short * p_41);
static short * func_42(unsigned p_43, unsigned p_44);
static int func_45(short * p_46, unsigned short p_47, short * p_48);
static int * func_53(unsigned p_54);
static int func_1(void)
{
    short *l_15 = &g_14;
    int l_31 = (-7L);
    unsigned l_50 = 0xA2C9DBE4L;
    short *l_107 = &g_17;
    short **l_106 = &l_107;
    short *l_183 = (void*)0;
    unsigned char *l_192[10][5] = {{&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}, {&g_193, &g_193, &g_193, &g_193, &g_193}};
    unsigned short l_864 = 1UL;
    int *l_865[3][4];
    int l_867 = 0xCBDD75F0L;
    int **l_868 = (void*)0;
    int **l_869 = &l_865[0][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            l_865[i][j] = &g_866;
    }
    l_867 &= ((func_2(((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s((((*l_15) = g_14) || 1L), 10)) != (g_16 != (void*)0)), 10)), (((((l_31 = (func_18(func_21(((((((void*)0 == l_15) <= func_26(l_31, ((g_193 = ((*g_136) = func_32(((((safe_mod_func_uint32_t_u_u(l_31, func_40(((*l_106) = func_42((func_45(l_15, g_17, l_15) , g_17), l_50))))) && 249UL) | l_50) , (*g_16)), g_182, g_152, l_183, g_16))) , 0xEC99L), l_15, g_16)) && g_17) || (**g_135)) != g_289), l_183, g_16, g_16), l_50) && (*g_136))) != 0xA662E209L) == l_50) < 0UL) | g_369[0]))) >= 0x3BL), l_50, l_50, l_50, l_50) == l_864) , l_50);


    ;
    ;
    ;
    (**g_84) = func_53((***g_486));

    ;
    (*l_869) = ((****g_563) = (*g_85));


    return g_354[0];
}







static int func_2(unsigned char p_3, int p_4, short p_5, unsigned p_6, int p_7)
{
    char l_844 = 0x0CL;
    int l_845 = 0x24E41AE0L;
    int l_846 = 0x12467542L;
    unsigned char ****l_853 = &g_316;
    unsigned char *****l_854 = &g_315[8];
    short *l_859 = &g_17;
    short *l_860 = (void*)0;
    short *l_861 = &g_407;
    int l_862 = 0L;
    int l_863 = (-1L);
    p_7 = l_844;
    l_846 ^= l_845;
    l_863 ^= (safe_rshift_func_uint8_t_u_s((l_846 <= (l_862 = (safe_rshift_func_int16_t_s_u(((*l_861) = (safe_add_func_int32_t_s_s((l_853 == ((*l_854) = l_853)), (~(safe_rshift_func_uint16_t_u_u(p_4, 13)))))), l_844)))), l_844));
    return p_5;
}







static unsigned char func_18(short * p_19, unsigned char p_20)
{
    unsigned char **l_296 = &g_136;
    int l_306 = 0xF83382B7L;
    int *l_343 = (void*)0;
    unsigned short l_423 = 0xBED1L;
    short *l_446 = (void*)0;
    short l_496 = (-1L);
    unsigned ****l_498 = &g_486;
    int l_513 = 0xE6D3BD47L;
    unsigned l_535 = 4294967295UL;
    char l_584[4];
    unsigned l_650 = 5UL;
    int l_659 = 0x5990E871L;
    int l_664 = 0L;
    int ***l_668 = &g_85;
    unsigned char l_758 = 0x26L;
    unsigned l_813 = 4294967292UL;
    int i;
    for (i = 0; i < 4; i++)
        l_584[i] = 0x25L;
    for (g_111 = 0; (g_111 <= 7); g_111 += 1)
    {
        unsigned char l_298[10] = {248UL, 0x27L, 0x44L, 0x44L, 0x27L, 248UL, 0x27L, 0x44L, 0x44L, 0x27L};
        unsigned char **l_299[1];
        int l_308[3][6] = {{0x8197AA4DL, 1L, 0xF29B5222L, 1L, 0x8197AA4DL, 1L}, {0x8197AA4DL, 1L, 0xF29B5222L, 1L, 0x8197AA4DL, 1L}, {0x8197AA4DL, 1L, 0xF29B5222L, 1L, 0x8197AA4DL, 1L}};
        unsigned char ***l_313 = &l_299[0];
        unsigned char ****l_312 = &l_313;
        unsigned char *****l_311 = &l_312;
        short *l_328 = &g_17;
        int ****l_381 = &g_84;
        int *****l_380 = &l_381;
        unsigned l_387 = 4294967294UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_299[i] = &g_136;
        if (g_49[g_111])
            break;
        for (g_97 = 0; (g_97 <= 1); g_97 += 1)
        {
            unsigned char **l_295 = &g_136;
            unsigned char ***l_297[4][7] = {{&l_295, (void*)0, &l_295, &l_295, (void*)0, &l_295, (void*)0}, {&l_295, (void*)0, &l_295, &l_295, (void*)0, &l_295, (void*)0}, {&l_295, (void*)0, &l_295, &l_295, (void*)0, &l_295, (void*)0}, {&l_295, (void*)0, &l_295, &l_295, (void*)0, &l_295, (void*)0}};
            int i, j;
            (*g_86) = g_49[g_111];
            l_298[9] = (p_20 , ((l_295 != (l_296 = l_296)) == g_289));
        }
        for (g_153 = 0; (g_153 <= 1); g_153 += 1)
        {
            int l_307 = (-1L);
            int *l_310 = &g_69[1][0][2];
            unsigned char ******l_317 = (void*)0;
            unsigned char ******l_318 = &g_314[0][2][1];
            short *l_320 = &g_17;
            short **l_319 = &l_320;
            int *l_437 = &g_69[2][0][2];
            for (g_181 = 0; (g_181 <= 1); g_181 += 1)
            {
                unsigned *l_300 = &g_283;
                char *l_305 = &g_152;
                int *l_309 = &g_69[2][0][5];
            }
            l_310 = ((*g_85) = (*g_85));

            ;
        }
    }
    if (p_20)
    {
        int l_466 = 4L;
        short *l_475 = &g_407;
        unsigned ****l_501 = &g_486;
        int l_522 = 0xB20C3715L;
        short l_541 = 0x8040L;
        unsigned l_572 = 0xC5FBA8B8L;
        unsigned char **l_581 = &g_136;
        unsigned l_595 = 4294967295UL;
        unsigned char ****l_624 = &g_316;
        unsigned char ***l_627 = &l_581;
        unsigned short *l_639 = &g_182;
        int l_717 = 0xA7C22A4BL;
        int l_733 = 1L;
        int **l_769[6];
        int l_788 = 7L;
        int i;
        for (i = 0; i < 6; i++)
            l_769[i] = &l_343;
        for (l_306 = 0; (l_306 != (-13)); --l_306)
        {
            unsigned short l_461 = 0UL;
            int l_469[2][6] = {{9L, 0xC17DE61BL, 9L, 0xC17DE61BL, 9L, 0xC17DE61BL}, {9L, 0xC17DE61BL, 9L, 0xC17DE61BL, 9L, 0xC17DE61BL}};
            int l_470 = 0x53066CB4L;
            unsigned ****l_500 = &g_486;
            unsigned ****l_502 = &g_486;
            unsigned char *l_506 = &g_342;
            int ***l_520 = &g_85;
            unsigned l_532 = 0x089D08C2L;
            int i, j;
            l_461 &= func_40(&g_17);
        }
        if (((safe_rshift_func_uint8_t_u_s(l_541, 1)) , (safe_sub_func_uint8_t_u_u(func_32((*p_19), p_20, g_63, (l_572 , p_19), &g_407), (+p_20)))))
        {
            short *l_603 = (void*)0;
            int l_609 = 0L;
            unsigned *****l_621 = &l_498;
            int *l_628 = &g_49[6];
            unsigned char ****l_629[4] = {(void*)0, &l_627, (void*)0, &l_627};
            unsigned char l_674 = 255UL;
            int l_714[7][10][3] = {{{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}, {{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}, {{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}, {{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}, {{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}, {{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}, {{0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}, {0x7B44A3A1L, (-5L), 5L}}};
            short l_770 = 0xB185L;
            int *l_779 = &g_153;
            int i, j, k;
            for (l_306 = 0; (l_306 <= 7); l_306 = safe_add_func_int16_t_s_s(l_306, 1))
            {
                short *l_604 = &g_407;
                int l_605 = 0xEBE34DACL;
                int l_615 = 0xDC1D6468L;
                short **l_619[6][2][4] = {{{&g_388[0][0], &l_446, &l_475, &l_603}, {&g_388[0][0], &l_446, &l_475, &l_603}}, {{&g_388[0][0], &l_446, &l_475, &l_603}, {&g_388[0][0], &l_446, &l_475, &l_603}}, {{&g_388[0][0], &l_446, &l_475, &l_603}, {&g_388[0][0], &l_446, &l_475, &l_603}}, {{&g_388[0][0], &l_446, &l_475, &l_603}, {&g_388[0][0], &l_446, &l_475, &l_603}}, {{&g_388[0][0], &l_446, &l_475, &l_603}, {&g_388[0][0], &l_446, &l_475, &l_603}}, {{&g_388[0][0], &l_446, &l_475, &l_603}, {&g_388[0][0], &l_446, &l_475, &l_603}}};
                unsigned *****l_620 = &l_501;
                int i, j, k;
                if (l_595)
                {
                    int l_598[5][5][8] = {{{5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}}, {{5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}}, {{5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}}, {{5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}}, {{5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}, {5L, 0xAF46723CL, (-1L), (-7L), 0xE5BC7749L, (-7L), 0xBE3EF242L, 1L}}};
                    int i, j, k;
                    if (p_20)
                    {
                        return p_20;
                    }
                    else
                    {
                        unsigned char l_601[9] = {0x32L, 0UL, 0x32L, 0UL, 0x32L, 0UL, 0x32L, 0UL, 0x32L};
                        int i;
                        l_598[3][3][1] = (safe_lshift_func_uint8_t_u_u(func_40(&g_407), (g_102 , (65535UL >= l_598[2][4][3]))));
                        l_605 = (((((safe_rshift_func_int8_t_s_u(p_20, p_20)) < func_45(p_19, g_97, func_21((p_20 >= l_601[1]), p_19, &g_407, func_21(l_601[5], g_602, l_603, &g_407)))) , (*g_321)) , l_604) != (void*)0);
                    }
                }
                else
                {
                    unsigned short l_606[9] = {0xD2B3L, 0xD2B3L, 4UL, 0xD2B3L, 0xD2B3L, 4UL, 0xD2B3L, 0xD2B3L, 4UL};
                    int **l_608 = &g_86;
                    short *l_614 = &g_407;
                    int i;
                    for (l_513 = 7; (l_513 >= 2); l_513 -= 1)
                    {
                        char l_607 = 0x17L;
                        l_615 &= func_32(l_606[8], (((*p_19) = 0x708EL) , l_607), ((((void*)0 != l_608) , l_609) ^ p_20), func_21(l_605, func_21(((((safe_add_func_int32_t_s_s((((((safe_mod_func_uint16_t_u_u(((((((**g_85) , p_20) && 0xD685L) , p_20) && g_152) >= p_20), 65529UL)) , 0UL) ^ l_609) >= 0x9303L) || 0xA957L), (*g_86))) ^ p_20) == p_20) || l_607), p_19, p_19, l_614), &g_407, &g_407), l_604);
                        (*g_86) = l_595;
                    }
                }
                for (g_182 = 0; (g_182 != 6); g_182 = safe_add_func_int8_t_s_s(g_182, 3))
                {
                    unsigned char l_618 = 0UL;
                    return l_618;
                }
                (*g_85) = func_53((func_45(&g_17, p_20, (p_19 = &l_496)) , (p_20 | (l_620 == (func_40(l_603) , l_621)))));

                ;
            }

            ;
            if ((~((*g_16) < ((*l_475) |= (((*****g_563) ^= (safe_rshift_func_uint8_t_u_u(((l_624 == ((g_102 = ((0xD2L && p_20) | (((l_522 = (***g_316)) & (safe_lshift_func_uint8_t_u_u(((+4294967295UL) , ((((*l_628) &= (&l_296 == (l_627 = ((g_283 & 0x1E23L) , (void*)0)))) , l_541) < 65535UL)), 7))) | g_283))) , l_629[2])) , p_20), l_609))) >= 0x14D462F7L)))))
            {
                char l_630 = 7L;
                unsigned l_631 = 4294967295UL;
                char *l_636 = &l_584[3];
                unsigned char ******l_638[5][6];
                unsigned char *******l_637 = &l_638[4][4];
                short ***l_669 = (void*)0;
                int l_711[4] = {1L, 0x1FAE8A41L, 1L, 0x1FAE8A41L};
                unsigned l_713 = 1UL;
                unsigned l_736[8] = {0xD79C856AL, 0x0397F6B5L, 0xD79C856AL, 0x0397F6B5L, 0xD79C856AL, 0x0397F6B5L, 0xD79C856AL, 0x0397F6B5L};
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_638[i][j] = (void*)0;
                }
                (****g_563) = &l_609;

                ;
                l_631 = (l_630 = ((**g_85) = p_20));
                if ((((((p_20 && (l_306 = ((***g_84) = ((l_609 == (safe_mod_func_uint16_t_u_u(p_20, (safe_sub_func_int8_t_s_s(((*l_636) = g_542[8][5]), func_40(&g_407)))))) ^ ((((*l_637) = &g_314[2][1][1]) == (void*)0) < p_20))))) < 0x440FL) != l_631) && (***g_486)) || p_20))
                {
                    int l_660 = 0x8927BF47L;
                    l_343 = (((((-9L) || ((void*)0 != l_639)) ^ p_20) | (safe_add_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((((*****g_563) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_369[0], 3)), (!l_595))) & l_631)) | ((*g_224) = ((safe_add_func_uint8_t_u_u(1UL, func_32((*p_19), l_572, p_20, p_19, &g_17))) & 0xD5FDL))) & 65533UL) || (*p_19)), p_20)) >= l_650), 0x1023L))) , (void*)0);
                    for (g_193 = (-6); (g_193 <= 14); g_193++)
                    {
                        short **l_663[7][10] = {{(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_388[0][0], &l_603, &l_475, &l_475, &l_603, &g_388[0][0], (void*)0, (void*)0}};
                        int *l_665 = &g_153;
                        int i, j;
                        if ((***g_84))
                            break;
                        (*g_85) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((-1L), func_32(l_659, p_20, ((*l_636) = l_660), func_42(l_595, func_32((safe_rshift_func_int8_t_s_u(((0x9BL && (l_663[5][6] == (p_20 , &p_19))) == p_20), 7)), l_664, g_193, &g_17, p_19)), &l_541))), l_595)), p_20)) , l_665);

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned short l_679 = 0xC68CL;
                    unsigned short l_715 = 6UL;
                    short *l_716 = &g_17;
                    int l_718 = 0x513D5EC6L;
                    unsigned char **l_727 = &g_136;
                    if ((~(((*****l_621) |= (safe_sub_func_int16_t_s_s(((l_668 == (((((void*)0 == l_669) , (safe_rshift_func_uint8_t_u_s(l_630, p_20))) <= 0xB5L) , l_668)) , (*p_19)), (safe_sub_func_uint32_t_u_u(p_20, p_20))))) > 1UL)))
                    {
                        unsigned *l_688 = &l_595;
                        unsigned char *******l_689 = &l_638[4][4];
                        int l_692 = 0xDA34EA42L;
                        short *l_696 = &l_541;
                        unsigned l_697 = 0xDB938688L;
                        int *l_698 = &l_692;
                        (***l_668) = l_674;
                        (*g_85) = func_53((((((*p_19) , (safe_sub_func_int8_t_s_s(((((((safe_rshift_func_int16_t_s_u(l_679, 10)) || (safe_sub_func_int32_t_s_s(((l_692 = (((((*l_639) = (((~(safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u((((***l_668) |= p_20) | 0xBF57D2E2L), 9)) || ((+(((safe_lshift_func_uint16_t_u_s(0x860DL, (((*l_688) = p_20) , ((void*)0 == l_689)))) , (safe_rshift_func_int8_t_s_s((((-1L) | 1L) , p_20), g_111))) , 5L)) <= 0xFDL)) > (*g_321)), (*g_224)))) & p_20) >= g_67)) != 0L) , (**g_487)) < (**g_487))) != 0x9F86644EL), 0xFA576EF9L))) ^ (-1L)) >= l_679) && g_480[0][3]) >= p_20), (-1L)))) <= p_20) & l_541) , (***g_486)));

                        ;
                        (***g_84) = l_692;
                        l_698 = func_53(func_40(func_42((((safe_mod_func_int32_t_s_s(func_32(((***g_416) == (void*)0), ((*g_86) && (safe_unary_minus_func_uint16_t_u(l_679))), func_45((p_19 = l_696), (l_697 >= (*g_16)), &g_17), &g_407, &g_407), p_20)) | p_20) != p_20), p_20)));

                        ;
                        ;
                        ;
                    }
                    else
                    {
                        short l_699[10][3][8] = {{{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}, {{(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}, {(-6L), 1L, 0xE83FL, (-6L), 0x5152L, (-1L), 0xB22FL, (-4L)}}};
                        short *l_712 = &l_541;
                        int i, j, k;
                        l_699[4][0][6] ^= (***l_668);
                        (*g_86) = (safe_mod_func_uint8_t_u_u(((**l_296) = (func_32((*g_16), ((*l_628) = ((safe_rshift_func_uint8_t_u_s(func_32((l_714[1][9][2] &= (safe_lshift_func_int16_t_s_u((*g_16), ((((((safe_lshift_func_int16_t_s_s(((*l_712) |= ((((l_674 && (((****l_498) ^= 1UL) > (***l_668))) <= g_480[0][3]) , (safe_lshift_func_uint16_t_u_s(p_20, ((*l_475) = g_710[5])))) , (l_711[1] = (*p_19)))), l_713)) | l_699[9][1][2]) != l_679) | 2L) || g_100[0][8][1]) != 3UL)))), l_715, p_20, p_19, p_19), g_710[7])) | l_609)), p_20, p_19, l_716) && l_717)), p_20));
                        (**l_668) = &l_714[1][8][2];

                        ;
                        (**g_85) |= p_20;
                    }

                    ;
                    ;
                    l_718 &= l_631;
                    if ((0xFDL != func_26((l_718 == (safe_lshift_func_int16_t_s_u(0x439BL, 6))), (*p_19), p_19, l_716)))
                    {
                        unsigned char **l_732 = &g_136;
                        unsigned *l_734 = &l_595;
                        unsigned l_737 = 3UL;
                        (*g_85) = func_53((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((0x726408EDL > ((l_609 >= (((*l_734) = (((((p_20 ^= (l_522 = ((**l_732) = (safe_mod_func_int32_t_s_s((l_714[5][6][1] , (((((*g_136) < ((void*)0 != l_727)) & (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((0xD0L && ((((*l_639) = (((void*)0 == l_732) , g_97)) < (-5L)) , l_713)), l_715)), 5))) , (*p_19)) != 0x19C0L)), 0x174803D8L))))) , l_711[3]) , g_477) != &l_628) || l_733)) , g_735)) >= l_736[4])), 0x1563650DL)), l_737)));

                        ;
                        (**g_85) = (safe_mod_func_int8_t_s_s(0xA7L, 8L));
                    }
                    else
                    {
                        char l_740[1][1];
                        int *l_741 = &l_659;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_740[i][j] = 0x9CL;
                        }
                        l_740[0][0] |= (l_603 == &g_407);
                        (**g_84) = l_741;

                        ;
                    }

                    ;
                    (****g_563) = func_53(l_541);

                    ;
                }

                ;
                ;

                (***g_84) = ((void*)0 != l_629[3]);
            }
            else
            {
                short *l_759 = &g_407;
                int l_760[8][10][3] = {{{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}, {{0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}, {0x516E5AA2L, (-5L), 0x902D979EL}}};
                int **l_768 = (void*)0;
                int i, j, k;
                (**l_668) = func_53(p_20);
                if (((p_20 && (l_714[1][9][2] > func_40(p_19))) != (l_522 = (g_369[0] != g_111))))
                {
                    (***l_668) = 0xFD8FB476L;
                }
                else
                {
                    int l_753[9];
                    unsigned short *l_767 = &g_102;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_753[i] = 2L;
                    for (g_152 = 0; (g_152 < (-6)); g_152 = safe_sub_func_uint16_t_u_u(g_152, 6))
                    {
                        short l_746 = 2L;
                        (*g_86) = (*****g_563);
                        (*****g_563) |= l_746;
                        return p_20;
                    }
                    if ((safe_add_func_int8_t_s_s(((void*)0 == &g_564[5]), ((l_714[0][3][2] < (l_717 &= func_26(g_407, func_32((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((func_32(((*g_321) = l_753[3]), ((*l_628) ^= (((((safe_lshift_func_int16_t_s_u((l_714[1][9][2] , ((((safe_lshift_func_uint16_t_u_u(0xE253L, 3)) <= (!(253UL & (***l_668)))) || l_609) ^ 0x50L)), l_714[3][0][2])) , p_20) | p_20) , l_753[1]) ^ l_758)), g_480[0][2], l_603, l_759) & 0x6E8C530CL), g_289)) & l_541), 5)), g_102, g_111, p_19, &g_407), &g_407, l_759))) && 0UL))))
                    {
                        unsigned ***l_761[4];
                        int l_764 = 0x63C52C6AL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_761[i] = (void*)0;
                        l_764 = func_32((((**g_487) || l_760[3][0][1]) == ((g_762 = (*g_486)) == (void*)0)), l_572, g_65, (l_760[3][0][1] , &g_17), p_19);

                        ;
                        (*g_86) &= (((p_20 ^ ((safe_lshift_func_int8_t_s_u(8L, ((((*g_321) |= (0x21648701L < l_572)) , l_767) == (((void*)0 == &g_315[8]) , &l_423)))) || g_542[8][5])) , p_20) >= (-8L));
                        l_770 ^= ((l_768 != l_769[2]) > (func_45(func_21(p_20, func_42(l_764, func_45(&l_541, g_369[0], &g_17)), &g_407, &g_407), g_542[8][5], l_767) ^ 249UL));
                        (***l_668) = (func_32(((-1L) > p_20), (p_20 , (((*l_628) = (safe_mod_func_int32_t_s_s((l_760[6][3][0] = 0xBEE580E7L), ((9L != (*p_19)) , func_40(l_767))))) , ((safe_sub_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(0xAB0CL, 0xE618L)) & (*g_763)) & p_20), p_20)) < (***l_668)))), l_764, p_19, l_767) | p_20);
                    }
                    else
                    {
                        (**g_417) = (***g_416);
                        return (*g_136);
                    }

                    ;
                    for (l_572 = 18; (l_572 < 49); l_572 = safe_add_func_uint16_t_u_u(l_572, 8))
                    {
                        int l_782 = 7L;
                        l_343 = (l_779 = ((****g_563) = (**g_84)));

                        ;
                        ;
                        l_760[6][4][1] = (safe_rshift_func_uint16_t_u_s(l_782, 1));
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
            (*g_418) = (****g_415);
        }
        else
        {
            int *l_787[2][10] = {{&l_717, (void*)0, &l_717, (void*)0, &l_717, (void*)0, &l_717, (void*)0, &l_717, (void*)0}, {&l_717, (void*)0, &l_717, (void*)0, &l_717, (void*)0, &l_717, (void*)0, &l_717, (void*)0}};
            unsigned l_797 = 0x97106B5BL;
            unsigned short *l_798 = (void*)0;
            unsigned short *l_799[4];
            int i, j;
            for (i = 0; i < 4; i++)
                l_799[i] = (void*)0;
            if (p_20)
            {
                int *l_785 = &g_68;
                (***g_84) = 0xCADF8536L;
                for (l_522 = 0; (l_522 <= (-24)); l_522 = safe_sub_func_int32_t_s_s(l_522, 2))
                {
                    int *l_786 = &g_57[1];
                    l_786 = (((func_40(&g_17) && (***l_668)) > ((0xBD3F0805L <= ((p_20 , (*p_19)) <= g_710[8])) == 0UL)) , l_785);

                    ;
                }
            }
            else
            {
                l_787[0][8] = ((****g_563) = l_787[1][8]);

                ;
                (**g_84) = (**l_668);
                return l_788;


            }
            l_664 |= ((4L < ((func_45(&l_541, (safe_sub_func_int8_t_s_s(((*p_19) | func_32((*g_321), (g_542[8][5] &= (safe_sub_func_uint8_t_u_u(p_20, (safe_sub_func_uint16_t_u_u((0x6BC9L | (safe_rshift_func_uint16_t_u_u((g_800 &= ((func_32((((**g_487) = ((~l_797) , p_20)) , ((*g_224) & p_20)), p_20, p_20, &g_407, &l_496) <= p_20) == g_100[7][4][2])), p_20))), (-1L)))))), g_100[5][1][0], &g_17, &g_407)), (-1L))), &g_407) , (***g_486)) > 4294967295UL)) ^ p_20);
        }


        ;
        ;
        ;
        ;
    }
    else
    {
        unsigned char l_805[10][4] = {{0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}, {0xA5L, 0x97L, 0UL, 0UL}};
        short *l_812 = &g_17;
        unsigned char *l_814 = &g_342;
        unsigned short *l_816 = &l_423;
        int l_817[8][1][3] = {{{1L, 1L, 0L}}, {{1L, 1L, 0L}}, {{1L, 1L, 0L}}, {{1L, 1L, 0L}}, {{1L, 1L, 0L}}, {{1L, 1L, 0L}}, {{1L, 1L, 0L}}, {{1L, 1L, 0L}}};
        int i, j, k;
        l_817[5][0][0] &= ((*g_321) , (safe_mod_func_uint16_t_u_u(g_100[7][4][2], ((*l_816) |= ((((safe_sub_func_uint16_t_u_u((((((l_805[4][2] < 3L) > (safe_lshift_func_uint16_t_u_u((((((*****g_563) = (l_805[9][3] > (g_289 != g_49[0]))) , ((safe_rshift_func_uint8_t_u_s(((*l_814) ^= ((**g_135) = (((safe_rshift_func_uint8_t_u_s((((func_40(l_812) | l_805[4][2]) || l_813) , p_20), 3)) , l_805[0][0]) >= 0x2612L))), 1)) & g_815)) & 65535UL) != l_805[4][2]), 9))) ^ p_20) ^ p_20) && p_20), g_815)) , 1UL) < p_20) , p_20)))));
    }



    ;
    ;
    (***g_416) = (****g_415);
    for (g_815 = 0; (g_815 <= 11); g_815 = safe_add_func_uint32_t_u_u(g_815, 2))
    {
        unsigned char **l_827 = &g_136;
        unsigned ***l_828[7][2][9] = {{{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}, {{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}, {{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}, {{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}, {{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}, {{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}, {{&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}, {&g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487, &g_487}}};
        short *l_829 = &l_496;
        int l_830 = 0x7F9FA19BL;
        short **l_839 = (void*)0;
        int i, j, k;
        (****g_415) = (*g_418);
        for (l_659 = 16; (l_659 <= (-9)); l_659 = safe_sub_func_uint16_t_u_u(l_659, 9))
        {
            char l_825 = (-1L);
            for (g_407 = (-21); (g_407 > 13); ++g_407)
            {
                unsigned l_824 = 4294967291UL;
                unsigned short l_826 = 65535UL;
                l_825 |= l_824;
                if (l_826)
                    continue;
            }
        }
        l_830 &= p_20;
        for (p_20 = 0; (p_20 < 18); p_20++)
        {
            (**l_668) = &l_830;

            ;
            for (g_407 = (-2); (g_407 > (-3)); g_407--)
            {
                for (g_68 = 13; (g_68 != (-23)); g_68 = safe_sub_func_int16_t_s_s(g_68, 7))
                {
                    short ***l_837 = (void*)0;
                    short ***l_838 = (void*)0;
                    short ***l_840 = (void*)0;
                    g_841[7] = (l_839 = (void*)0);
                    for (l_813 = 0; (l_813 == 41); ++l_813)
                    {
                        (****g_563) = &l_830;
                        return p_20;


                    }
                    for (l_813 = 0; (l_813 <= 0); l_813 += 1)
                    {
                        return (**g_135);


                    }
                }
            }
            (*g_86) &= 0x8B6B1B45L;
        }


    }
    return (**g_135);
}







static short * func_21(unsigned p_22, short * p_23, short * p_24, short * p_25)
{
    char l_294 = 0L;
    (*g_85) = (l_294 , func_53(p_22));

    ;
    return p_25;


}







static unsigned short func_26(unsigned p_27, short p_28, short * p_29, short * p_30)
{
    short *l_197 = (void*)0;
    int l_199[8][8][4] = {{{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}, {{1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}, {1L, 0xD218AE0BL, (-1L), 0xD218AE0BL}}};
    int l_201 = (-1L);
    int *l_262 = (void*)0;
    short *l_290[10][4] = {{&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}, {&g_17, &g_17, (void*)0, &g_17}};
    int *l_292 = (void*)0;
    int *l_293 = &g_57[1];
    int i, j, k;
    if (p_28)
    {
        int *l_196 = &g_57[5];
        char l_198[8] = {1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L};
        int i;
        l_198[6] ^= ((safe_sub_func_uint32_t_u_u(((void*)0 != l_196), p_27)) ^ func_40(l_197));
    }
    else
    {
        g_63 ^= l_199[3][7][3];
        l_201 &= (g_200[0] == g_200[0]);
    }
    for (g_193 = (-21); (g_193 <= 48); g_193 = safe_add_func_uint32_t_u_u(g_193, 5))
    {
        unsigned l_214 = 0xF08B4E25L;
        short *l_218 = (void*)0;
        unsigned char ***l_242 = &g_135;
        unsigned char ****l_241 = &l_242;
        int l_252[2];
        int ****l_284 = &g_84;
        int i;
        for (i = 0; i < 2; i++)
            l_252[i] = 5L;
        for (g_88 = 29; (g_88 >= 4); g_88 = safe_sub_func_uint8_t_u_u(g_88, 3))
        {
            unsigned short l_210 = 0xBBECL;
            short **l_212 = &l_197;
            short ***l_211 = &l_212;
            int l_213 = 0x07EEB9DBL;
            unsigned short *l_215[3][10] = {{&g_102, &g_102, &g_102, &g_102, &g_102, (void*)0, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, (void*)0, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, (void*)0, &g_102, &g_102, &g_102, &g_102}};
            short *l_226 = &g_17;
            int *l_230 = &g_57[1];
            unsigned char ****l_245 = &l_242;
            short *l_249 = &g_17;
            int i, j;
            (**g_84) = func_53((func_45(((g_71 < 0UL) , (g_17 , (void*)0)), g_181, (g_64 , &p_28)) >= p_27));

            ;
            if ((0x2379F2B3L | (safe_sub_func_uint16_t_u_u((l_201 = ((*g_16) < (safe_sub_func_int32_t_s_s(p_28, ((8UL <= 5L) == (l_210 > (((l_213 |= ((**g_135) = (((l_210 , (void*)0) != ((*l_211) = (void*)0)) > g_153))) , l_214) <= l_214))))))), l_199[3][7][3]))))
            {
                if ((**g_85))
                    break;
            }
            else
            {
                unsigned **l_221 = (void*)0;
                unsigned *l_223[10] = {&g_181, &l_214, &g_181, &l_214, &g_181, &l_214, &g_181, &l_214, &g_181, &l_214};
                unsigned **l_222 = &l_223[0];
                int l_225 = 1L;
                int *l_227 = &g_68;
                unsigned *l_228 = (void*)0;
                unsigned *l_229 = (void*)0;
                int i;
                (**g_85) = ((safe_rshift_func_int8_t_s_u((func_45(l_218, p_27, ((g_166 = (p_27 >= ((*l_227) ^= (((g_102 = (safe_lshift_func_int8_t_s_s(0xA4L, (((((*l_222) = (void*)0) != (g_224 = func_53(g_69[2][0][5]))) != l_225) & func_45(l_226, p_27, l_218))))) == l_214) < l_214)))) , &g_17)) ^ 0x5E1F845FL), l_199[3][4][2])) , (*g_86));

                ;

                l_230 = &l_199[7][4][2];

                ;
            }

            ;
            ;
            if (p_28)
                break;
            if ((*l_230))
            {
                unsigned char *****l_243 = (void*)0;
                unsigned char *****l_244[6][10][4] = {{{&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}}, {{&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}}, {{&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}}, {{&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}}, {{&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}}, {{&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}, {&l_241, &l_241, &l_241, &l_241}}};
                int l_248 = 0L;
                int i, j, k;
                if ((l_199[7][7][0] && (safe_rshift_func_int16_t_s_u(((((*g_136) = (((func_45(&g_17, (safe_mod_func_uint32_t_u_u(((p_28 < (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((*g_16) , func_45(&g_17, (((****l_241) ^= (l_214 <= ((l_245 = l_241) != ((safe_add_func_uint32_t_u_u((g_97 && g_57[1]), (***g_84))) , g_200[0])))) < l_248), l_249)), 4294967295UL)) != 0xF51F9C94L), l_248)), l_214))) == p_28), p_27)), g_16) , l_214) == 0x85L) | 0xA9EFL)) > 0x09L) & 0xC893L), 13))))
                {
                    char l_253[7][2][9] = {{{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}, {{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}, {{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}, {{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}, {{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}, {{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}, {{0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}, {0x38L, 6L, 0L, 0x26L, 0xFAL, 0L, 2L, 0xBFL, 0x22L}}};
                    int i, j, k;
                    (*g_86) = (252UL > l_248);
                    for (g_17 = 0; (g_17 >= 28); g_17 = safe_add_func_uint16_t_u_u(g_17, 7))
                    {
                        return g_68;
                    }
                    l_252[1] ^= (***g_84);
                    if (l_253[3][0][1])
                        break;
                }
                else
                {
                    return p_27;
                }
                for (l_248 = 0; (l_248 != (-13)); l_248 = safe_sub_func_int16_t_s_s(l_248, 7))
                {
                    for (g_17 = 21; (g_17 != (-25)); --g_17)
                    {
                        l_252[1] = (((+(*g_16)) <= (p_27 & p_27)) , p_27);
                    }
                }
                (***g_84) = (**g_85);
            }
            else
            {
                unsigned short l_258[4][9] = {{0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL, 0x1677L, 0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL}, {0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL, 0x1677L, 0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL}, {0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL, 0x1677L, 0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL}, {0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL, 0x1677L, 0x4CD8L, 0x1677L, 0xDB8FL, 0xDB8FL}};
                unsigned l_261 = 1UL;
                int i, j;
                (***g_84) ^= l_199[2][5][1];
                (*g_86) &= p_28;
                (*g_86) |= (-6L);
                l_262 = func_53(((*g_224) = ((((((l_199[5][2][2] < ((*g_16) = func_45(&g_17, ((void*)0 != &p_30), &g_17))) & l_258[2][2]) ^ ((safe_rshift_func_uint16_t_u_s((p_28 < l_261), l_252[1])) , p_28)) < p_28) , 0x087FA20CL) != 0L)));

                ;
            }
        }
        for (g_182 = (-28); (g_182 >= 38); g_182++)
        {
            char *l_267 = (void*)0;
            char *l_268 = (void*)0;
            char *l_269[5];
            int *l_270 = &g_49[5];
            int *l_271 = &g_69[0][0][3];
            int i;
            for (i = 0; i < 5; i++)
                l_269[i] = &g_152;
            (*l_271) = ((*g_85) == (((*l_270) ^= (safe_sub_func_int8_t_s_s(0L, (g_152 ^= ((*g_224) & l_252[1]))))) , (**g_84)));
            for (g_166 = 0; (g_166 <= 1); g_166 += 1)
            {
                int i, j, k;
                l_252[g_166] = ((((safe_sub_func_int32_t_s_s(g_100[(g_166 + 2)][(g_166 + 7)][g_166], 0x418D4586L)) | ((g_57[(g_166 + 4)] = 0xEF7B771AL) >= l_252[g_166])) | 0x7EACL) , l_252[1]);
            }
            l_271 = (p_27 , func_53((*g_224)));

            ;
            for (g_153 = 0; (g_153 != 29); g_153++)
            {
                unsigned l_276 = 0UL;
                int l_291 = 0x73DDEBD4L;
                if (l_276)
                    break;
                (*l_271) = (p_27 , (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((*p_30), (g_283 = (safe_add_func_int32_t_s_s(p_28, l_276))))), (l_269[1] != (l_276 , (void*)0)))));
                l_291 ^= (!(func_45(&g_17, (*l_271), l_290[9][0]) != p_27));
            }
        }
    }

    ;
    (*l_293) = l_199[3][2][2];
    return (*l_293);
}







static unsigned char func_32(short p_33, int p_34, char p_35, short * p_36, short * p_37)
{
    int *l_184 = &g_153;
    unsigned l_185 = 4294967292UL;
    int *l_186 = &g_57[5];
    int *l_187 = &g_69[0][0][3];
    short *l_188[9][5] = {{&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}, {&g_17, (void*)0, &g_17, &g_17, (void*)0}};
    int *****l_189 = (void*)0;
    short *l_190 = (void*)0;
    int l_191 = (-7L);
    int i, j;
    (*l_184) = p_35;
    l_191 ^= ((*l_184) = (func_40(l_190) == 0xBE4BL));
    (*l_187) = ((g_182 ^= 0xFD60L) || (&g_166 == l_184));
    return (**g_135);
}







static unsigned func_40(short * p_41)
{
    unsigned char *l_113[10];
    int l_115 = 0x35C36BF4L;
    int ***l_123[3][5][8] = {{{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}}, {{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}}, {{&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}, {&g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85, &g_85}}};
    short *l_161 = &g_17;
    short *l_162 = (void*)0;
    int l_178 = 9L;
    int ****l_180 = &g_84;
    int *****l_179 = &l_180;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_113[i] = (void*)0;
    for (g_71 = 0; (g_71 < 22); g_71 = safe_add_func_int16_t_s_s(g_71, 4))
    {
        int l_119 = (-1L);
        unsigned char **l_132[10] = {&l_113[7], &l_113[7], &l_113[8], &l_113[7], &l_113[7], &l_113[8], &l_113[7], &l_113[7], &l_113[8], &l_113[7]};
        int *l_140 = &g_57[1];
        int **l_139 = &l_140;
        int i;
        for (g_88 = 1; (g_88 <= 7); g_88 += 1)
        {
            unsigned char *l_110 = &g_111;
            unsigned char **l_112 = &l_110;
            int l_114 = 7L;
            int i;
            g_57[(g_88 + 1)] = (((*l_112) = l_110) != l_113[9]);
            l_114 |= g_57[(g_88 + 1)];
            for (g_68 = 0; (g_68 >= 0); g_68 -= 1)
            {
                int i, j, k;
                g_69[g_68][g_68][(g_68 + 5)] = l_115;
            }
        }
        for (g_68 = 0; (g_68 <= 9); g_68 = safe_add_func_int8_t_s_s(g_68, 9))
        {
            int l_118 = 7L;
            unsigned char ***l_133 = &l_132[7];
            l_118 = (l_118 && l_119);
        }
    }
    g_69[3][0][0] ^= (~(0x67DE9B01L == (safe_rshift_func_uint16_t_u_u((0L != (safe_add_func_int8_t_s_s((((g_68 &= (g_153 = (+(g_57[1] = 0x27A1DAC0L)))) >= ((*g_16) , (((g_65 ^ (g_102 , (((l_178 < ((**g_135) & ((((*l_179) = &l_123[2][2][6]) != &l_123[2][2][6]) , 0x40L))) < 0UL) | 0x6D23L))) || g_181) & g_181))) ^ g_17), g_152))), g_181))));

    ;
    return g_71;
}







static short * func_42(unsigned p_43, unsigned p_44)
{
    unsigned l_80 = 0UL;
    int l_81[9][1];
    int **l_83 = (void*)0;
    int ***l_82 = &l_83;
    int *l_95[10][2] = {{&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}, {&g_69[0][0][2], &g_69[0][0][3]}};
    unsigned char *l_96[1];
    unsigned short *l_101 = &g_102;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_81[i][j] = 0x83C403CBL;
    }
    for (i = 0; i < 1; i++)
        l_96[i] = (void*)0;
    for (g_17 = 0; (g_17 <= (-14)); --g_17)
    {
        short *l_70[9] = {(void*)0, &g_17, (void*)0, &g_17, (void*)0, &g_17, (void*)0, &g_17, (void*)0};
        int l_77 = 0L;
        unsigned *l_87 = &g_88;
        int i;
        for (p_43 = 0; (p_43 <= 7); p_43 += 1)
        {
            int *l_62 = (void*)0;
            int **l_61 = &l_62;
            int *l_76 = &g_57[1];
            int **l_75 = &l_76;
            (*l_61) = (g_17 , func_53(p_43));

            ;
            for (p_44 = 2; (p_44 <= 7); p_44 += 1)
            {
                int **l_72[7] = {&l_62, &l_62, &l_62, &l_62, &l_62, &l_62, &l_62};
                int i;
                for (g_68 = 2; (g_68 <= 8); g_68 += 1)
                {
                    for (g_69[2][0][5] = 3; (g_69[2][0][5] <= 8); g_69[2][0][5] += 1)
                    {
                        return l_70[6];


                    }
                }
                for (g_68 = 7; (g_68 >= 1); g_68 -= 1)
                {
                    int **l_73 = &l_62;
                    for (g_71 = 6; (g_71 >= 0); g_71 -= 1)
                    {
                        int ***l_74 = &l_73;
                        (*l_61) = func_53((l_72[1] == ((*l_74) = l_73)));
                    }
                }
            }
            (*l_75) = ((*l_61) = &g_68);

            ;
            ;
        }
        (***g_84) = ((p_43 || (g_67 > ((l_77 == (g_68 | ((*l_87) = (safe_sub_func_int16_t_s_s((l_80 |= (*g_16)), (l_77 ^ (l_81[4][0] == (g_49[6] < (((l_81[3][0] , l_82) != g_84) | 1UL))))))))) <= g_57[6]))) >= l_77);
    }
    g_69[0][0][4] &= (safe_rshift_func_uint16_t_u_s((func_45(&g_17, ((*l_101) ^= (g_100[7][4][2] ^= ((g_97 = (safe_sub_func_int32_t_s_s(((g_64 >= ((safe_sub_func_uint16_t_u_u((((**g_84) = (*g_85)) != l_95[7][0]), g_17)) < 7UL)) , p_44), p_43))) == (safe_lshift_func_uint16_t_u_s((g_71 | g_49[3]), p_43))))), &g_17) , g_57[1]), p_43));
    for (g_17 = 12; (g_17 != (-14)); --g_17)
    {
        int l_105 = 0xD709BDCCL;
        (*g_85) = (((l_105 = ((void*)0 == &g_17)) > p_43) , (void*)0);

        ;
    }


    return l_101;


}







static int func_45(short * p_46, unsigned short p_47, short * p_48)
{
    for (g_17 = 0; (g_17 <= 7); g_17 += 1)
    {
        int i;
        if (g_49[g_17])
            break;
    }
    return p_47;
}







static int * func_53(unsigned p_54)
{
    unsigned l_55[4][1][6] = {{{4294967286UL, 7UL, 0xC4186397L, 0xBA54F90BL, 0UL, 0xDA301817L}}, {{4294967286UL, 7UL, 0xC4186397L, 0xBA54F90BL, 0UL, 0xDA301817L}}, {{4294967286UL, 7UL, 0xC4186397L, 0xBA54F90BL, 0UL, 0xDA301817L}}, {{4294967286UL, 7UL, 0xC4186397L, 0xBA54F90BL, 0UL, 0xDA301817L}}};
    int *l_56 = &g_57[1];
    int i, j, k;
    (*l_56) &= l_55[0][0][4];
    for (p_54 = 0; (p_54 <= 8); p_54 += 1)
    {
        int *l_58 = (void*)0;
        short **l_60 = &g_16;
        short ***l_59 = &l_60;
        int i;
        l_58 = &g_57[p_54];

        ;
        (*l_59) = (void*)0;

        ;
    }
    return &g_57[1];


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_49[i], "g_49[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_57[i], "g_57[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_69[i][j][k], "g_69[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_100[i][j][k], "g_100[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_354[i], "g_354[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_369[i], "g_369[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_407, "g_407", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_480[i][j], "g_480[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_542[i][j], "g_542[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_710[i], "g_710[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_815, "g_815", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
