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
   unsigned f0;
   volatile int f1;
   volatile int f2;
};


static int g_9 = 8L;
static unsigned g_11 = 4294967293UL;
static volatile unsigned g_23 = 0UL;
static volatile unsigned *g_22 = &g_23;
static int g_25[9][1][2] = {{{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}, {{(-1L), 0x495231FBL}}};
static char g_81 = 0x51L;
static int g_87 = 1L;
static unsigned g_88 = 0x8004C3D8L;
static short g_101[5][7] = {{0xE0A1L, 1L, 0x2266L, 0L, (-1L), 0L, 0x2266L}, {0xE0A1L, 1L, 0x2266L, 0L, (-1L), 0L, 0x2266L}, {0xE0A1L, 1L, 0x2266L, 0L, (-1L), 0L, 0x2266L}, {0xE0A1L, 1L, 0x2266L, 0L, (-1L), 0L, 0x2266L}, {0xE0A1L, 1L, 0x2266L, 0L, (-1L), 0L, 0x2266L}};
static unsigned char g_102 = 0xD8L;
static unsigned char g_119[6] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
static unsigned short g_133[10][2][9] = {{{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}, {{0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}, {0x9399L, 0xC73DL, 65532UL, 65535UL, 0UL, 3UL, 1UL, 0x9F23L, 2UL}}};
static unsigned short g_135 = 0UL;
static union U0 g_142 = {0xFD65E783L};
static union U0 *g_141 = &g_142;
static union U0 ** volatile g_140 = &g_141;
static unsigned g_149 = 0UL;
static char g_186[1][8] = {{5L, 5L, 6L, 5L, 5L, 6L, 5L, 5L}};
static char g_188[9] = {(-3L), 0x7DL, (-3L), 0x7DL, (-3L), 0x7DL, (-3L), 0x7DL, (-3L)};
static unsigned short g_194 = 65535UL;
static unsigned short g_201 = 0x7CF3L;
static unsigned short g_215 = 0UL;
static int * volatile g_216 = &g_87;
static int **g_217 = (void*)0;
static short *g_222 = &g_101[3][5];
static union U0 ** volatile g_248 = &g_141;
static volatile unsigned g_259[9][1] = {{0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}, {0x84AB6B2FL}};
static unsigned short *g_268 = (void*)0;
static int g_271 = 0x00DB5DDCL;
static int *g_295 = &g_271;
static int **g_294[3][4][5] = {{{&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}}, {{&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}}, {{&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}, {&g_295, &g_295, &g_295, &g_295, &g_295}}};
static int *** volatile g_293[4][1] = {{&g_294[2][0][4]}, {&g_294[2][0][4]}, {&g_294[2][0][4]}, {&g_294[2][0][4]}};
static int *** volatile g_296[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static int g_316 = 0x2215854DL;
static unsigned char g_327 = 0x8AL;
static short g_359 = 0L;
static unsigned char g_394 = 0x52L;
static int g_454 = 0L;
static char g_481 = 0xF2L;
static unsigned g_482 = 0xC9070030L;
static volatile unsigned g_496 = 7UL;
static volatile unsigned *g_495 = &g_496;
static volatile unsigned * volatile *g_494 = &g_495;
static unsigned short g_499 = 0x8A11L;
static volatile int g_502 = 7L;
static volatile unsigned g_503 = 1UL;
static int ** volatile g_506 = (void*)0;
static unsigned g_526 = 4294967289UL;
static volatile unsigned * volatile *g_535 = &g_22;
static volatile unsigned * volatile ** volatile g_534 = &g_535;
static short g_555 = 0xBED1L;
static unsigned char g_563 = 0xBFL;
static int *g_577 = &g_87;
static unsigned g_592 = 0UL;
static unsigned *g_596 = &g_149;
static unsigned **g_595 = &g_596;
static union U0 **g_603 = &g_141;
static union U0 ***g_602 = &g_603;
static short g_614 = (-6L);
static short g_719 = 0x52FBL;
static int ** volatile g_721 = &g_577;
static volatile unsigned g_727 = 0x4567380BL;
static unsigned g_791 = 4294967290UL;
static unsigned *g_790[5] = {&g_791, &g_791, &g_791, &g_791, &g_791};
static volatile int * volatile * volatile * volatile *g_831 = (void*)0;
static int ** volatile g_835[1] = {(void*)0};
static short *g_850 = &g_359;
static char g_885 = 0L;
static int ** volatile g_968 = &g_577;
static union U0 g_970[10][3] = {{{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}, {{0xB9875C09L}, {0x4DDACE54L}, {0x8D5C8E8EL}}};



static union U0 func_1(void);
static int * func_2(int p_3, unsigned p_4, unsigned p_5, int * p_6, int * p_7);
static int * func_12(unsigned * p_13, unsigned p_14);
static unsigned * func_15(int p_16, short p_17, int p_18, int * p_19, unsigned char p_20);
static int * func_26(unsigned p_27, short p_28, int * p_29, unsigned * p_30, int * p_31);
static int func_34(int * p_35, unsigned p_36, unsigned p_37, int * p_38);
static int * func_39(unsigned * p_40);
static unsigned * func_41(char p_42, int * p_43, int p_44, unsigned p_45, unsigned p_46);
static char func_47(int p_48, int p_49, short p_50, char p_51, int p_52);
static unsigned func_57(int * p_58, short p_59);
static union U0 func_1(void)
{
    char l_8[2][10][1] = {{{0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}}, {{0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}, {0x79L}}};
    unsigned *l_10 = &g_11;
    unsigned short l_21 = 0x441AL;
    int *l_24 = &g_25[8][0][0];
    int **l_374 = &g_295;
    int *l_967 = &g_87;
    int **l_969[8][3][9] = {{{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}, {{&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}, {&g_577, &l_967, (void*)0, (void*)0, &l_967, &l_967, (void*)0, (void*)0, &g_577}}};
    int i, j, k;
    (*g_968) = (l_967 = func_2(l_8[0][3][0], g_9, ((*l_10) ^= 1UL), func_12(func_15(l_8[0][3][0], l_21, ((*l_24) = (l_10 != g_22)), func_26((safe_add_func_int32_t_s_s(func_34(((*l_374) = func_39(func_41(func_47(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(func_57(l_10, l_21), g_271)) != l_21), l_8[0][7][0])) ^ 0L), (*g_295), l_21, l_8[0][3][0], l_8[0][1][0]), l_10, l_21, g_186[0][6], g_271))), l_8[1][0][0], l_8[0][3][0], l_10), 0xF9A8F21AL)), l_8[0][3][0], &g_9, g_790[3], &g_9), l_8[0][3][0]), l_21), &g_9));
    (*g_968) = l_24;
    return g_970[4][2];
}







static int * func_2(int p_3, unsigned p_4, unsigned p_5, int * p_6, int * p_7)
{
    char l_929 = (-10L);
    int **l_930 = &g_295;
    unsigned char l_935 = 0xB0L;
    int l_936[2];
    int ****l_941 = (void*)0;
    int *****l_940[9];
    unsigned char l_964 = 0x99L;
    int i;
    for (i = 0; i < 2; i++)
        l_936[i] = 0x4BF30CF5L;
    for (i = 0; i < 9; i++)
        l_940[i] = &l_941;
    if (((*g_577) ^= ((safe_mul_func_uint16_t_u_u(l_929, ((void*)0 != l_930))) ^ (l_929 != l_929))))
    {
        int *l_931 = &g_25[8][0][0];
        int l_932 = 0x85ABFE93L;
        (*g_577) = l_932;
    }
    else
    {
        int l_953 = 1L;
        unsigned *l_955 = &g_791;
        int *l_956 = (void*)0;
        (*g_603) = (*g_248);
        (*g_577) = ((*p_7) ^= 8L);
        for (g_526 = 28; (g_526 >= 40); ++g_526)
        {
            int l_937 = 0x96055593L;
            l_936[0] = (l_929 && l_935);
            for (g_135 = 0; (g_135 <= 4); g_135 += 1)
            {
                unsigned *l_952 = &g_88;
                unsigned char *l_954 = &l_935;
                int i;
                l_956 = func_41(l_937, (p_6 = func_26(p_4, ((*g_222) = (safe_mul_func_int16_t_s_s(((+((l_940[8] == (void*)0) & ((*l_954) = (safe_add_func_int32_t_s_s((*g_216), ((*g_850) ^ (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xE92F4A03L, ((safe_sub_func_int32_t_s_s((((*l_952) = (p_5 && 1L)) < g_592), l_937)) && p_3))), l_953)), g_719)))))))) & 0xED6CL), 0x5039L))), g_790[g_135], l_955, &l_953)), l_937, p_3, p_3);
            }
        }
        for (g_316 = (-6); (g_316 <= (-18)); g_316 = safe_sub_func_uint32_t_u_u(g_316, 1))
        {
            unsigned l_959 = 0xEFDDC1F6L;
            --l_959;
        }
    }
    (*g_577) ^= (safe_rshift_func_uint8_t_u_s(g_316, 0));
    ++l_964;
    return p_6;
}







static int * func_12(unsigned * p_13, unsigned p_14)
{
    char l_863 = 0xA1L;
    int *l_864 = &g_316;
    int l_877 = 0x6FAD0131L;
    int l_878 = 1L;
    short **l_884 = &g_222;
    int ***l_889 = (void*)0;
    int l_907 = 0x94B33D44L;
    unsigned l_926 = 0x56605F92L;
    if ((0x7E9B1662L | l_863))
    {
        int **l_865 = &l_864;
        int *l_870 = &g_9;
        (*l_865) = l_864;
        if (l_863)
            goto lbl_869;
lbl_869:
        for (g_592 = 25; (g_592 >= 25); ++g_592)
        {
            int *l_868[6] = {&g_316, &g_316, (void*)0, &g_316, &g_316, (void*)0};
            int i;
            (**l_865) &= ((void*)0 != (*g_602));
            return l_868[0];
        }
        return l_870;
    }
    else
    {
        unsigned short l_879 = 0xB6FDL;
        int l_905[3][8] = {{0xD6673999L, 1L, 0xD6673999L, 1L, 0xD6673999L, 1L, 0xD6673999L, 1L}, {0xD6673999L, 1L, 0xD6673999L, 1L, 0xD6673999L, 1L, 0xD6673999L, 1L}, {0xD6673999L, 1L, 0xD6673999L, 1L, 0xD6673999L, 1L, 0xD6673999L, 1L}};
        int i, j;
        for (g_135 = (-16); (g_135 >= 36); g_135 = safe_add_func_int8_t_s_s(g_135, 4))
        {
            int *l_873 = &g_316;
            int *l_874 = &g_87;
            int *l_875 = (void*)0;
            int *l_876[7];
            int *l_886 = &g_25[1][0][1];
            int l_908 = 0x086FB4A8L;
            unsigned short l_910 = 0x640DL;
            int i;
            for (i = 0; i < 7; i++)
                l_876[i] = &g_316;
            --l_879;
            if ((safe_mul_func_int16_t_s_s((-1L), func_47(func_47((l_884 != l_884), ((*l_886) = g_885), (p_14 > (0xEC1AL < func_47((safe_lshift_func_uint8_t_u_u(0xACL, ((void*)0 != l_889))), p_14, l_879, p_14, p_14))), g_394, p_14), p_14, (*g_222), g_135, l_879))))
            {
                if (((*l_874) = (((*g_850) = (safe_lshift_func_uint8_t_u_s(func_47(((*l_864) ^= (-1L)), p_14, p_14, g_142.f2, p_14), g_186[0][2]))) ^ p_14)))
                {
                    for (l_879 = 0; (l_879 > 59); ++l_879)
                    {
                        (*g_577) &= (*l_864);
                    }
                }
                else
                {
                    int *l_896 = &g_316;
                    int **l_897 = &l_874;
                    for (g_359 = (-3); (g_359 != 5); g_359 = safe_add_func_uint16_t_u_u(g_359, 7))
                    {
                        return p_13;
                    }
                    (*l_874) ^= p_14;
                    (*l_897) = l_896;
                }
            }
            else
            {
                unsigned char *l_904 = &g_102;
                int l_906 = 0x82DA010DL;
                int l_909 = 0xA7CCCA73L;
                unsigned short *l_917[5] = {&g_133[3][0][0], &g_201, &g_133[3][0][0], &g_201, &g_133[3][0][0]};
                int i;
                (*g_577) ^= ((*l_864) = (((*l_904) = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((*l_873), 0)), 1UL))) <= (&g_831 == (void*)0)));
                l_910--;
                (*l_874) ^= (safe_mul_func_int16_t_s_s(((*g_222) = (((safe_mod_func_uint16_t_u_u((g_499 = ((void*)0 == &p_13)), (*g_850))) && (safe_mul_func_int8_t_s_s((*l_864), (p_14 || (0xA057L >= (((((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((((*l_904) = (p_14 || (safe_mod_func_int8_t_s_s(l_879, ((*l_873) ^ p_14))))) & l_909) != g_316), 0x2B0BL)) == p_14), (*g_222))) < l_926) && p_14) <= (*g_222)) >= 4294967293UL)))))) != g_25[4][0][1])), p_14));
            }
        }
    }
    return (*g_721);
}







static unsigned * func_15(int p_16, short p_17, int p_18, int * p_19, unsigned char p_20)
{
    union U0 ***l_861[4][1];
    char *l_862[10][6] = {{(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}, {(void*)0, &g_481, &g_188[0], &g_481, (void*)0, (void*)0}};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_861[i][j] = &g_603;
    }
    g_316 |= (!(safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_18, func_57(p_19, (safe_sub_func_int32_t_s_s(((*p_19) = (*p_19)), 0x1D9C160FL))))), (g_481 ^= (65526UL || (((void*)0 != l_861[2][0]) >= p_16))))));
    (*g_577) = 0L;
    return p_19;
}







static int * func_26(unsigned p_27, short p_28, int * p_29, unsigned * p_30, int * p_31)
{
    int ***l_794 = &g_294[2][0][4];
    int l_809 = 1L;
    int l_816 = (-1L);
    int l_817 = 0x8643C30EL;
    int l_818 = (-9L);
    int l_820 = (-1L);
    unsigned char l_840 = 0x9FL;
    short **l_849[8][5] = {{&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}, {&g_222, &g_222, &g_222, &g_222, &g_222}};
    unsigned *l_851 = &g_592;
    unsigned char *l_854[6] = {(void*)0, &g_102, (void*)0, &g_102, (void*)0, &g_102};
    int i, j;
    for (g_327 = (-4); (g_327 > 11); g_327 = safe_add_func_uint8_t_u_u(g_327, 4))
    {
        int **l_807 = &g_295;
        int ***l_808 = &l_807;
        int l_814 = 1L;
        unsigned *l_815[2][9][6] = {{{&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}}, {{&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}, {&g_592, &g_88, &g_142.f0, &g_592, &g_142.f0, &g_88}}};
        unsigned l_819 = 0xC669DE0DL;
        int *l_837 = &l_814;
        int *l_838[9] = {&l_816, &l_816, &l_814, &l_816, &l_816, &l_814, &l_816, &l_816, &l_814};
        char l_839 = 0xEAL;
        int i, j, k;
    }
    l_820 = ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(p_28, (safe_rshift_func_int8_t_s_u(l_820, ((l_818 | ((g_222 = &g_614) == (g_850 = &g_359))) >= 4L))))) != ((*l_851)--)), 1)) ^ (l_816 ^= l_840));
    return (*g_721);
}







static int func_34(int * p_35, unsigned p_36, unsigned p_37, int * p_38)
{
    unsigned l_375 = 0xC189CA68L;
    unsigned *l_376 = (void*)0;
    int *l_379 = &g_87;
    int l_390 = 2L;
    int l_391 = 1L;
    int l_393 = 0xAFC24F1CL;
    unsigned l_402 = 1UL;
    int *l_410 = &g_316;
    unsigned l_445 = 4294967289UL;
    unsigned l_457 = 1UL;
    int l_464[4][7][8] = {{{0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}}, {{0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}}, {{0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}}, {{0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}, {0xBA3C1E89L, 0x9353C931L, (-1L), 0x1CCBAB41L, 0x07266328L, (-4L), (-1L), (-1L)}}};
    unsigned short *l_523 = &g_133[9][1][5];
    union U0 **l_530 = &g_141;
    int l_590 = 7L;
    int l_591 = (-10L);
    unsigned **l_598 = &g_596;
    int ***l_656 = &g_217;
    unsigned char l_674 = 255UL;
    int l_703[10][2] = {{0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}, {0x83936941L, 0L}};
    union U0 ****l_732[1];
    unsigned l_774 = 0xA891F600L;
    int *****l_783 = (void*)0;
    int ****l_785 = &l_656;
    int *****l_784 = &l_785;
    int **l_788 = &g_295;
    char *l_789 = &g_481;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_732[i] = &g_602;
    l_375 = p_37;
    for (g_271 = 8; (g_271 >= 3); g_271 -= 1)
    {
        int l_387 = 0x40504685L;
        int l_388 = (-10L);
        int l_389 = (-1L);
        int i;
    }
    if ((safe_unary_minus_func_uint32_t_u((*l_379))))
    {
        int *l_583 = &l_391;
        int *l_584 = &g_87;
        int *l_585 = (void*)0;
        int *l_586 = (void*)0;
        int l_587[9][5][4] = {{{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}, {{0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}, {0x6F234430L, 0xD1E2D263L, 0L, 0xD1E2D263L}}};
        int *l_588[7] = {&g_87, &g_87, &l_587[3][1][0], &g_87, &g_87, &l_587[3][1][0], &g_87};
        int l_589 = 0x8392A8FBL;
        unsigned ***l_597 = &g_595;
        char l_599[4] = {7L, 1L, 7L, 1L};
        unsigned *l_617 = (void*)0;
        unsigned **l_616[8][6][5] = {{{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}, {{&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}, {&l_617, &l_617, (void*)0, &l_617, &l_617}}};
        int l_623[3][1][2];
        unsigned l_627 = 0x17156865L;
        int ***l_716[5];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_623[i][j][k] = (-1L);
            }
        }
        for (i = 0; i < 5; i++)
            l_716[i] = &g_294[2][0][4];
        ++g_592;
        if (((&l_376 == (l_598 = ((*l_597) = g_595))) & (*g_222)))
        {
            (*l_583) ^= l_599[3];
        }
        else
        {
            union U0 ****l_604 = (void*)0;
            union U0 ****l_605 = &g_602;
            union U0 ***l_606 = &l_530;
            int l_609 = (-1L);
            char l_615 = 0xF6L;
            int l_630 = 0x8AF75C86L;
            unsigned l_671[1][6];
            unsigned short l_692 = 0UL;
            int l_704 = (-1L);
            int *l_738 = &l_589;
            unsigned short l_740 = 0x1295L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_671[i][j] = 1UL;
            }
            if (((*l_583) |= (safe_add_func_int32_t_s_s((((0xEB363061L | 1UL) > ((p_36 > (*l_584)) <= ((((*l_605) = g_602) == l_606) > (*l_410)))) <= (safe_mod_func_uint16_t_u_u((*l_379), ((*l_410) | 4L)))), 0xD41C51FCL))))
            {
                unsigned l_611 = 0xAB65B825L;
                int l_624 = (-10L);
                unsigned *l_631 = &l_457;
                int *l_632 = (void*)0;
                for (l_393 = 0; (l_393 <= 0); l_393 += 1)
                {
                    short l_610 = 0x7A02L;
                    unsigned ***l_618 = &l_616[5][3][3];
                    int l_619 = 0L;
                    int l_625[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_625[i] = (-10L);
                    l_611--;
                    (*l_583) |= (((*g_222) == func_47(g_614, l_615, (*g_222), p_37, (*g_216))) && (&g_495 == ((*l_618) = l_616[5][1][1])));
                    for (g_359 = 0; (g_359 <= 0); g_359 += 1)
                    {
                        unsigned short l_620 = 0x96E6L;
                        int l_626[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_626[i] = (-1L);
                        ++l_620;
                        l_627++;
                        (*l_379) &= l_630;
                        l_624 = ((*g_577) = ((void*)0 == (*g_494)));
                    }
                }
                l_632 = func_39(l_631);
            }
            else
            {
                int ***l_657 = &g_217;
                int *l_658 = (void*)0;
                unsigned **l_702 = &l_617;
                int l_726 = 9L;
lbl_695:
                for (l_393 = 0; (l_393 <= 5); l_393 += 1)
                {
                    int *l_633 = &l_623[2][0][1];
                    for (g_102 = 0; (g_102 <= 5); g_102 += 1)
                    {
                        int l_644 = (-10L);
                        unsigned l_655 = 4UL;
                        int i;
                        l_633 = &l_609;
                        if (g_316)
                            goto lbl_695;
                        (*l_583) = (func_47(g_119[l_393], (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(g_119[g_102], (g_592 | (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(((~(*g_577)) & ((void*)0 == (*g_140))), (safe_mod_func_uint8_t_u_u((*l_410), ((++p_37) ^ (*g_577)))))), (p_36 >= 0xF36D3126L)))))) < p_36), 3)), (*l_583), g_327, (*g_577)) < p_36);
                        (*l_379) = ((*g_216) ^ ((safe_add_func_uint32_t_u_u((((((safe_sub_func_uint8_t_u_u((g_119[l_393] = p_37), (safe_sub_func_int16_t_s_s((-3L), l_644)))) & ((safe_mul_func_uint16_t_u_u(((*l_584) <= l_655), ((*g_222) = p_37))) <= (*l_633))) || (*l_584)) && 0x92CB6048L) ^ 0xB1EDL), 0UL)) == (*g_577)));
                    }
                    if (((*l_633) |= (l_656 == l_657)))
                    {
                        unsigned *l_659 = &l_457;
                        int *l_660 = &l_590;
                        unsigned l_669[1][10] = {{0UL, 0UL, 0x03540971L, 0UL, 0UL, 0x03540971L, 0UL, 0UL, 0x03540971L, 0UL}};
                        int i, j;
                        l_658 = &l_609;
                        if (p_37)
                            break;
                        l_660 = func_39(l_659);
                        (*l_658) |= ((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((*l_584), g_119[5])), (0L || p_36))) ^ (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(0xBEEEL, (1L && p_36))), (((l_669[0][9] | p_36) != (*l_660)) ^ p_36))));
                    }
                    else
                    {
                        unsigned short l_670 = 6UL;
                        (*l_379) = l_670;
                    }
                    (*l_410) = (p_36 >= (func_47(((g_481 ^ l_609) & (!(*l_410))), ((9UL | g_481) >= (0xCB48L < (*g_222))), p_36, g_101[1][3], p_37) == (-3L)));
                    for (g_359 = 0; (g_359 <= 4); g_359 += 1)
                    {
                        unsigned char *l_681 = &g_102;
                        int l_682 = (-3L);
                        (*l_633) = func_47((*l_633), l_671[0][3], (*l_633), ((safe_add_func_int8_t_s_s((l_674 ^= g_194), (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(p_36, (g_119[1] || g_194))), ((safe_rshift_func_uint16_t_u_u((0x36L ^ ((*l_681) = 0x57L)), 7)) != l_682))))) <= l_682), l_630);
                        (**l_606) = (*g_248);
                        (*l_583) &= (((safe_mul_func_int16_t_s_s(((&l_657 != (void*)0) >= (!(*g_495))), ((safe_sub_func_uint32_t_u_u(func_47((safe_mul_func_uint8_t_u_u(((&l_586 == &g_577) >= p_37), (safe_sub_func_int16_t_s_s((*g_222), p_36)))), (p_37 > 4294967295UL), l_682, g_186[0][2], p_37), 1L)) != p_36))) & 9UL) ^ 1L);
                    }
                    for (g_499 = 2; (g_499 <= 7); g_499 += 1)
                    {
                        short l_691 = 0xD63CL;
                        int ***l_693 = &g_217;
                        int **l_694 = &l_410;
                        if (l_691)
                            break;
                        l_692 = (*g_577);
                        (*l_584) = ((l_694 = &l_633) != &g_216);
                    }
                }
                l_704 &= ((safe_mod_func_int16_t_s_s((func_47((*p_35), (*p_35), ((safe_mul_func_uint8_t_u_u((((p_36 || (safe_add_func_int32_t_s_s(p_36, (func_47((*g_295), (p_37 != func_47(func_47((((((void*)0 == l_702) || p_36) ^ g_503) ^ p_37), (*p_35), p_37, l_692, (*g_577)), (*p_35), l_703[3][0], l_630, p_36)), l_692, p_36, p_36) < p_37)))) >= l_671[0][3]) && g_359), p_37)) && (*g_222)), g_482, p_37) != p_36), l_609)) == p_36);
                for (g_87 = 10; (g_87 < 2); g_87 = safe_sub_func_uint16_t_u_u(g_87, 7))
                {
                    char l_720 = 1L;
                    int l_725[5][5][9] = {{{8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}}, {{8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}}, {{8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}}, {{8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}}, {{8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}, {8L, (-1L), 0x5B7D6F19L, 0x83BAFBE0L, (-5L), 0x2859C675L, 0x14844B05L, (-4L), 0L}}};
                    int i, j, k;
                    for (l_390 = 1; (l_390 >= 0); l_390 -= 1)
                    {
                        char *l_717 = (void*)0;
                        char *l_718 = &l_599[(l_390 + 2)];
                        int i;
                        g_719 = (((*l_718) = (l_599[(l_390 + 2)] & ((l_599[(l_390 + 1)] >= (((*l_410) = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_316, (((*l_523)--) | p_36))), (*l_410)))) & ((g_102 | ((safe_unary_minus_func_int16_t_s((*g_222))) & (*g_216))) && (safe_mul_func_int16_t_s_s((l_716[4] != l_716[4]), 9L))))) <= p_37))) ^ (*l_379));
                        return l_720;
                    }
                    (*g_721) = p_35;
                    for (l_674 = (-18); (l_674 <= 19); ++l_674)
                    {
                        int l_724 = 5L;
                        g_727--;
                        (*l_583) |= ((*l_410) = (**g_721));
                        if (p_37)
                            continue;
                        return p_37;
                    }
                }
                l_588[5] = &l_630;
            }
            for (g_271 = (-8); (g_271 <= 20); ++g_271)
            {
                unsigned l_735 = 0UL;
                int l_741[5][6] = {{0x3CDC22A9L, 0x59230E6EL, 0L, (-2L), 0L, 0x59230E6EL}, {0x3CDC22A9L, 0x59230E6EL, 0L, (-2L), 0L, 0x59230E6EL}, {0x3CDC22A9L, 0x59230E6EL, 0L, (-2L), 0L, 0x59230E6EL}, {0x3CDC22A9L, 0x59230E6EL, 0L, (-2L), 0L, 0x59230E6EL}, {0x3CDC22A9L, 0x59230E6EL, 0L, (-2L), 0L, 0x59230E6EL}};
                int i, j;
                if (func_57((*g_721), (((*l_583) = ((void*)0 == l_732[0])) < g_271)))
                {
                    for (g_87 = (-5); (g_87 == (-2)); ++g_87)
                    {
                        l_735++;
                        (*l_410) = 0x55BA65CFL;
                        return p_37;
                    }
                }
                else
                {
                    if ((p_35 != (l_738 = p_38)))
                    {
                        unsigned l_739 = 0x5F9BE090L;
                        if ((*g_577))
                            break;
                        if (p_36)
                            continue;
                        (*l_583) |= l_739;
                    }
                    else
                    {
                        return p_37;
                    }
                    if ((*g_216))
                        continue;
                }
                if (func_57(&l_587[3][3][2], l_740))
                {
                    unsigned short l_742 = 0UL;
                    l_742++;
                }
                else
                {
                    unsigned char l_753 = 0x99L;
                    unsigned char *l_758 = (void*)0;
                    unsigned char *l_759 = &g_119[5];
                    (*l_583) = ((l_692 & (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*g_534) == ((*l_597) = &g_596)), (safe_add_func_int32_t_s_s(((*g_577) = p_36), (p_37 > (l_753 >= g_188[1])))))), (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_759) = p_36), 6)), ((&g_577 == &g_577) || p_37)))))) != (*g_222));
                }
            }
        }
    }
    else
    {
        int **l_770 = &g_577;
        int l_771[1][1];
        unsigned l_772 = 0xE11349CBL;
        unsigned *l_773 = &l_402;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_771[i][j] = 1L;
        }
        l_410 = func_41(p_36, func_39(func_39(func_39(((*g_595) = func_39((l_773 = func_41((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_37, (safe_mul_func_uint8_t_u_u(((g_327++) & (*l_410)), ((0x27L == g_149) && (safe_sub_func_uint32_t_u_u(func_57(((*l_770) = (*g_721)), l_771[0][0]), p_36))))))), 65530UL)), &g_9, l_772, p_37, p_36))))))), g_454, l_772, l_774);
    }
    (*g_577) = (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((*l_789) = func_57(func_41((safe_lshift_func_uint8_t_u_s(g_142.f1, 0)), &g_316, (safe_lshift_func_uint16_t_u_u(p_36, ((&l_656 == ((*l_784) = &l_656)) ^ func_47((safe_mul_func_uint16_t_u_u((g_81 > 0x43D0994FL), (((~(((*l_789) = (((*l_788) = (void*)0) == p_35)) < g_186[0][0])) | 1L) >= p_36))), (*p_35), (*g_222), g_133[1][0][4], (*g_577))))), p_37, (**g_595)), p_37)), p_37)), g_194));
    return p_36;
}







static int * func_39(unsigned * p_40)
{
    int *l_347 = (void*)0;
    int **l_346 = &l_347;
    int ***l_348 = (void*)0;
    int ***l_349 = (void*)0;
    int ***l_350 = &g_217;
    int l_357 = 0xF3BA23B5L;
    short *l_358 = &g_359;
    int *l_369 = (void*)0;
    int *l_370 = &g_316;
    (*l_370) &= (safe_mul_func_int8_t_s_s((l_346 == ((*l_350) = &l_347)), (safe_add_func_int32_t_s_s(func_57(p_40, (*g_222)), (((safe_mod_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(0x6A85L, ((*l_358) = l_357))) == ((safe_unary_minus_func_uint8_t_u(((safe_add_func_int16_t_s_s(((g_142.f0 || ((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0xFCL, g_271)), 0x64FBL)), g_142.f0)) != g_186[0][5])) >= g_215), 0x640FL)) <= g_201))) != g_142.f0)), g_9)) < 0UL) & g_186[0][2])))));
    for (l_357 = 0; (l_357 <= 6); ++l_357)
    {
        int l_373 = 9L;
        (*l_370) = l_373;
    }
    return p_40;
}







static unsigned * func_41(char p_42, int * p_43, int p_44, unsigned p_45, unsigned p_46)
{
    int *l_317 = &g_87;
    int *l_318 = &g_87;
    int *l_319 = (void*)0;
    int *l_320 = (void*)0;
    int *l_321 = &g_316;
    int l_322 = 0x53742271L;
    int *l_323 = &g_87;
    int *l_324 = &g_316;
    int *l_325 = &g_87;
    int *l_326[10][5][1] = {{{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}, {{&g_316}, {&g_316}, {&g_316}, {&g_316}, {&g_316}}};
    union U0 **l_332[4][1] = {{&g_141}, {&g_141}, {&g_141}, {&g_141}};
    int l_335 = (-9L);
    char *l_336 = &g_188[0];
    unsigned short l_337 = 6UL;
    unsigned short *l_338 = &g_133[3][0][0];
    int **l_339 = &l_323;
    int i, j, k;
    g_327--;
    g_142.f1 &= (safe_add_func_int16_t_s_s((+(((l_332[3][0] = l_332[3][0]) == &g_141) >= (*l_321))), ((((g_194 ^ (*l_317)) & ((*l_338) = ((safe_lshift_func_uint8_t_u_s(p_44, ((*l_336) &= l_335))) > ((*l_318) || (+((0UL || l_337) | (*l_323))))))) == (*g_222)) <= g_271)));
    (*l_339) = &g_87;
    (*l_323) = (safe_add_func_uint32_t_u_u((1UL & (*l_321)), (safe_rshift_func_uint8_t_u_s((**l_339), 3))));
    return &g_149;
}







static char func_47(int p_48, int p_49, short p_50, char p_51, int p_52)
{
    short l_307 = 0x431BL;
    int *l_308 = &g_87;
    unsigned l_312 = 0x7A7DFD5DL;
    int *l_315 = &g_316;
    if ((g_102 >= ((*l_308) = l_307)))
    {
        return p_48;
    }
    else
    {
        unsigned l_311 = 1UL;
        (*l_308) = (safe_lshift_func_int8_t_s_u(l_311, 3));
        l_312 = p_51;
    }
    (*l_308) = ((*g_222) == (+(*l_308)));
    (*l_315) ^= ((safe_sub_func_int32_t_s_s(2L, (*l_308))) != (0x16FDFC68L & g_135));
    return g_201;
}







static unsigned func_57(int * p_58, short p_59)
{
    unsigned l_64 = 0x51404FC4L;
    int *l_74 = &g_9;
    int l_76 = 2L;
    int l_79[10][7] = {{0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}, {0x4B4EA65DL, (-1L), 6L, (-1L), 0x4B4EA65DL, (-1L), 6L}};
    int *l_85 = &g_9;
    int **l_84 = &l_85;
    short *l_127[4][7] = {{&g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3]}, {&g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3]}, {&g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3]}, {&g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3], &g_101[0][0], &g_101[1][3]}};
    union U0 *l_139 = (void*)0;
    int *l_306 = &l_79[7][6];
    int i, j;
    if ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_23, l_64)), g_9)))
    {
        int **l_75 = &l_74;
        char *l_80 = &g_81;
        int *l_86 = &g_87;
        int *l_103 = (void*)0;
        unsigned char *l_126 = &g_102;
        short *l_131 = &g_101[1][3];
        short **l_130 = &l_131;
        unsigned short *l_132 = &g_133[3][0][0];
        unsigned short *l_134 = &g_135;
        if ((((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_23, (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(((p_59 <= g_9) > (((safe_mod_func_int32_t_s_s((((*l_75) = l_74) == &g_9), p_59)) == l_76) <= ((*l_86) ^= (~(safe_lshift_func_int8_t_s_u(((*l_80) = (l_79[7][6] = g_9)), (safe_lshift_func_uint8_t_u_u(((&p_58 == l_84) <= g_9), (*l_85))))))))))) && g_9), 0UL)))), p_59)) > g_9) & 0xE412C219L))
        {
            unsigned short l_95 = 0xB109L;
            short *l_100 = &g_101[1][3];
            if ((((*l_86) || p_59) <= (g_102 ^= (((g_23 != g_87) <= (g_88++)) > (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_95, 4)), (safe_mul_func_int16_t_s_s(((*l_100) = (~(p_59 < (((void*)0 == p_58) != (*l_85))))), g_81))))))))
            {
                return g_88;
            }
            else
            {
                return p_59;
            }
        }
        else
        {
            unsigned l_109[1][4][9] = {{{4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L}, {4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L}, {4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L}, {4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L, 4294967294UL, 4294967294UL, 0x3945F7E1L}}};
            int i, j, k;
            if (((*l_86) = (l_103 != ((*l_75) = p_58))))
            {
                int *l_108 = &l_79[3][5];
                if (g_81)
                {
                    int l_107 = (-1L);
lbl_106:
                    (*l_75) = (void*)0;
                    for (p_59 = 13; (p_59 < (-23)); p_59 = safe_sub_func_int16_t_s_s(p_59, 3))
                    {
                        if (g_9)
                            goto lbl_106;
                        l_107 = g_102;
                        g_87 = (*l_86);
                    }
                    if (g_9)
                        goto lbl_110;
                }
                else
                {
                    for (p_59 = 6; (p_59 >= 0); p_59 -= 1)
                    {
                        (*l_75) = l_108;
                        (*l_86) = g_101[4][0];
                        return g_101[1][3];
                    }
                }
            }
            else
            {
                return l_109[0][1][2];
            }
lbl_110:
            (*l_86) = 1L;
            for (g_87 = (-28); (g_87 > 0); g_87 = safe_add_func_uint32_t_u_u(g_87, 1))
            {
                for (g_88 = 0; (g_88 <= 6); g_88 += 1)
                {
                    int i, j;
                    g_119[4] &= ((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(l_79[(g_88 + 1)][g_88], 7)) <= 0x04L), (safe_lshift_func_uint16_t_u_s((**l_84), 15)))) ^ 0UL);
                }
            }
        }
        p_58 = p_58;
        (*l_86) &= ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(1UL, (safe_mul_func_uint8_t_u_u(((*l_126) = g_9), ((&p_59 == l_127[0][4]) == (safe_mul_func_uint16_t_u_u((&g_101[4][2] != ((*l_130) = &p_59)), g_119[2]))))))), 1)) && (((*l_134) = ((*l_132) = p_59)) != ((4UL ^ 3L) & (**l_84))));
        for (g_81 = 0; (g_81 < (-4)); --g_81)
        {
            unsigned char l_138 = 0x80L;
            if (l_138)
                break;
            (*g_140) = l_139;
        }
    }
    else
    {
        int *l_143 = &l_79[7][6];
        int l_152 = 0xDDEB7D8DL;
        int l_153[5][4][2] = {{{(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}}, {{(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}}, {{(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}}, {{(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}}, {{(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}, {(-1L), 0xEFE3E8DDL}}};
        short *l_223 = &g_101[1][3];
        int ***l_230 = &g_217;
        int ***l_232 = (void*)0;
        unsigned char l_265[6] = {0x3BL, 0x3BL, 0x2BL, 0x3BL, 0x3BL, 0x2BL};
        int l_274 = 9L;
        int **l_292 = (void*)0;
        union U0 **l_303 = &l_139;
        int i, j, k;
        (*l_143) = 2L;
        if (p_59)
        {
            for (g_81 = 0; (g_81 != (-10)); g_81 = safe_sub_func_uint32_t_u_u(g_81, 4))
            {
                if (p_59)
                    break;
                (*l_143) = (-1L);
                return p_59;
            }
        }
        else
        {
            unsigned l_154 = 4294967286UL;
            unsigned char *l_161 = &g_119[0];
            unsigned short *l_174 = &g_133[3][0][0];
            unsigned char *l_177[3];
            int l_178[8];
            char *l_185 = &g_186[0][2];
            char *l_187 = &g_188[0];
            int **l_285 = &l_143;
            int i;
            for (i = 0; i < 3; i++)
                l_177[i] = &g_102;
            for (i = 0; i < 8; i++)
                l_178[i] = 0xDB7C70F1L;
            for (p_59 = 0; (p_59 >= 5); p_59 = safe_add_func_int16_t_s_s(p_59, 9))
            {
                int *l_148[6][7][6] = {{{(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}}, {{(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}}, {{(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}}, {{(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}}, {{(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}}, {{(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}, {(void*)0, &l_79[7][6], &l_79[2][3], &l_79[7][6], (void*)0, (void*)0}}};
                int i, j, k;
                --g_149;
                l_154++;
            }
            (*l_143) = ((*l_143) > ((*l_161) = ((65530UL > ((safe_mul_func_uint8_t_u_u((*l_74), 0x02L)) != (((p_59 <= p_59) == g_81) < (safe_lshift_func_int16_t_s_u(0xFA9DL, 15))))) && 0xC886L)));
        }
        for (g_149 = 3; (g_149 != 7); g_149 = safe_add_func_uint32_t_u_u(g_149, 2))
        {
            return p_59;
        }
        (*l_84) = &g_9;
    }
    (*l_306) &= 1L;
    return g_142.f0;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_25[i][j][k], "g_25[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_101[i][j], "g_101[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_133[i][j][k], "g_133[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_142.f0, "g_142.f0", print_hash_value);
    transparent_crc(g_142.f1, "g_142.f1", print_hash_value);
    transparent_crc(g_142.f2, "g_142.f2", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_186[i][j], "g_186[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_188[i], "g_188[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_259[i][j], "g_259[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_614, "g_614", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_970[i][j].f0, "g_970[i][j].f0", print_hash_value);
            transparent_crc(g_970[i][j].f1, "g_970[i][j].f1", print_hash_value);
            transparent_crc(g_970[i][j].f2, "g_970[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
