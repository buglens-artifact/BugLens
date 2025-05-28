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



static int g_2 = 0L;
static int g_22 = (-1L);
static char g_67 = 0xE2L;
static int g_70 = 0x681C37F5L;
static int *g_69 = &g_70;
static int **g_77 = &g_69;
static unsigned g_115 = 1UL;
static unsigned g_121 = 0x3E6CB936L;
static unsigned char g_135 = 0xF2L;
static int g_146 = 7L;
static unsigned char g_171 = 0x4FL;
static unsigned g_172 = 4294967294UL;
static unsigned char g_193 = 0x89L;
static int g_224 = 0x1DD1C3DCL;
static int *g_223[6][4][3] = {{{&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}}, {{&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}}, {{&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}}, {{&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}}, {{&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}}, {{&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}, {&g_224, (void*)0, &g_224}}};
static unsigned short g_236 = 3UL;
static unsigned short *g_239 = &g_236;
static unsigned g_257 = 0x2A8A4705L;
static unsigned char *g_261 = &g_193;
static unsigned char **g_260 = &g_261;
static short g_271 = 0xD969L;
static char g_347 = 0x26L;
static unsigned char *g_372[10] = {&g_135, &g_135, &g_135, &g_135, &g_135, &g_135, &g_135, &g_135, &g_135, &g_135};
static int g_471 = 0xECEA6689L;
static int *g_472 = (void*)0;
static short g_491[8][1] = {{(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}, {(-5L)}};
static int **g_497 = &g_472;
static unsigned short **g_563[2] = {&g_239, &g_239};
static unsigned short ***g_562 = &g_563[0];
static unsigned *g_593 = &g_115;
static unsigned **g_592 = &g_593;
static unsigned char g_634 = 4UL;
static unsigned g_714[10][2][5] = {{{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}, {{0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}, {0x67A078F5L, 0xFFC6CB5FL, 0xEB609022L, 0xF3E6491BL, 0x02B9E302L}}};
static char g_720 = 0xB3L;
static short g_728 = (-10L);
static unsigned ***g_745[9][9] = {{&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}, {&g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592, &g_592}};
static unsigned ***g_747 = &g_592;
static int g_770 = 0L;
static unsigned g_781 = 0x079621B1L;
static int ***g_795 = &g_497;
static int ****g_794[2] = {&g_795, &g_795};
static short *g_820[5][2][8] = {{{(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}, {(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}}, {{(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}, {(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}}, {{(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}, {(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}}, {{(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}, {(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}}, {{(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}, {(void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0], (void*)0, &g_491[1][0]}}};
static short **g_819 = &g_820[1][1][1];
static unsigned short ****g_829 = &g_562;
static unsigned short *****g_828 = &g_829;
static short g_846 = 9L;



static unsigned char func_1(void);
static int * func_3(char p_4, char p_5, int * p_6, int * p_7, unsigned short p_8);
static int * func_10(int * p_11);
static int * func_12(unsigned char p_13);
static int * func_16(int p_17, unsigned p_18, unsigned char p_19, int * p_20);
static char func_30(unsigned p_31, int p_32);
static int * func_38(unsigned short p_39, short p_40, char p_41, int p_42, unsigned short p_43);
static unsigned short func_48(unsigned char p_49, int p_50, int p_51, int p_52);
static unsigned func_53(unsigned p_54, int * p_55, int * p_56, short p_57, int p_58);
static unsigned func_59(int * p_60, int ** p_61, int ** p_62, int ** p_63, unsigned p_64);
static unsigned char func_1(void)
{
    int *l_470 = &g_471;
    char *l_485 = &g_67;
    char **l_484 = &l_485;
    char **l_488 = &l_485;
    int l_495 = 1L;
    int l_525 = 8L;
    short l_537 = 0x0274L;
    char l_595 = 0xF9L;
    unsigned char **l_631[10][1][9] = {{{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}, {{&g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261, (void*)0, &g_261}}};
    unsigned short ***l_667 = &g_563[0];
    char l_687 = 0x96L;
    unsigned l_725 = 0xEF86B536L;
    unsigned ***l_744 = &g_592;
    int l_799 = 1L;
    short l_800 = (-10L);
    unsigned short l_833[4][5][5] = {{{0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}}, {{0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}}, {{0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}}, {{0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}, {0x4BDFL, 0x0C31L, 0x4BDFL, 0x3C84L, 0x4DBCL}}};
    unsigned char l_843[2][10] = {{0x00L, 2UL, 251UL, 0UL, 0UL, 251UL, 2UL, 0x00L, 251UL, 0x00L}, {0x00L, 2UL, 251UL, 0UL, 0UL, 251UL, 2UL, 0x00L, 251UL, 0x00L}};
    int *l_859 = &l_495;
    int i, j, k;
    if (g_2)
    {
        int l_9 = (-1L);
        int *l_469[3];
        int **l_473 = &g_472;
        int i;
        for (i = 0; i < 3; i++)
            l_469[i] = &g_22;
        (*l_473) = func_3(l_9, g_2, (l_469[1] = func_10(func_12(l_9))), (g_472 = l_470), g_2);



        ;


        ;
    }
    else
    {
        unsigned char l_478 = 0xF1L;
        char **l_486 = &l_485;
        int **l_496 = &l_470;
        if ((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(func_30(l_478, (safe_lshift_func_int16_t_s_u(0L, l_478))), 0x0C94L)) ^ ((*l_470) != l_478)), 65528UL)))
        {
            int ***l_481[10][7] = {{(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}, {(void*)0, &g_77, &g_77, (void*)0, &g_77, &g_77, &g_77}};
            char ***l_487[3];
            short *l_489 = &g_271;
            short *l_490 = &g_491[6][0];
            unsigned char l_494 = 0UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_487[i] = (void*)0;
            (*g_69) = ((((g_77 = &g_223[2][2][1]) == &g_69) != (((*l_490) = (safe_sub_func_uint8_t_u_u(0x83L, (((((*g_239) = ((l_484 != (l_488 = l_486)) | ((*l_489) = l_478))) >= 0xABB5L) < 65528UL) && (((*l_470) > l_478) && (*l_470)))))) <= l_478)) || g_135);

            ;
            (*g_77) = (void*)0;
            (*l_496) = ((*g_77) = func_3((((g_271 = ((*l_490) = (func_59(func_38((*l_470), ((*l_490) = g_257), (safe_mod_func_uint16_t_u_u(l_494, 0xB65FL)), (l_495 = (*g_69)), l_478), l_496, (g_497 = &g_69), l_496, (*l_470)) | (**l_496)))) != 0xA817L) && (*l_470)), g_257, (*l_496), l_470, (*g_239)));

            ;

            ;
        }
        else
        {
            for (l_478 = (-9); (l_478 <= 15); l_478 = safe_add_func_uint8_t_u_u(l_478, 1))
            {
                (*g_77) = (void*)0;

                ;
            }

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
    if ((safe_mod_func_int32_t_s_s(((*l_470) = (*l_470)), l_495)))
    {
        unsigned l_506 = 0x04144361L;
        int l_507 = (-10L);
        int *l_533 = &l_507;
        int *l_546 = (void*)0;
        int **l_547[1][3][2] = {{{&l_533, (void*)0}, {&l_533, (void*)0}, {&l_533, (void*)0}}};
        unsigned short **l_561 = &g_239;
        unsigned short ***l_560 = &l_561;
        int i, j, k;
        for (g_70 = 0; (g_70 <= 9); g_70 += 1)
        {
            short l_504 = 0xAA03L;
            short *l_505[3][1];
            int **l_530 = (void*)0;
            int l_578 = (-1L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_505[i][j] = &g_491[6][0];
            }
            (*g_77) = func_3(func_30(g_22, ((*l_470) = (safe_mod_func_int16_t_s_s((l_506 = l_504), l_507)))), g_70, func_3(((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(l_507, (((((*g_261) = 0x9CL) != ((void*)0 == &l_495)) <= l_507) & l_504))), l_507)) ^ l_507), g_491[2][0], &l_495, &l_507, l_504), &l_507, g_172);
            for (g_347 = 9; (g_347 >= 0); g_347 -= 1)
            {
                short l_528[10] = {1L, (-9L), 1L, (-9L), 1L, (-9L), 1L, (-9L), 1L, (-9L)};
                int *l_534 = (void*)0;
                char ***l_538 = &l_488;
                int l_541 = 2L;
                unsigned *l_548 = &g_121;
                int l_581 = 8L;
                int i;
                l_507 = l_506;
                for (g_471 = 9; (g_471 >= 1); g_471 -= 1)
                {
                    char ***l_522 = &l_484;
                    int l_523 = 5L;
                    int **l_531 = &l_470;
                    unsigned l_532 = 0xB31209D4L;
                    short l_540 = 0x37B0L;
                    int i;
                    for (g_2 = 0; (g_2 <= 0); g_2 += 1)
                    {
                        int l_516 = 0xEE6F4AF1L;
                        unsigned short *l_524 = &g_236;
                        int *l_529 = &g_22;
                        int i, j;
                        (*l_531) = func_3(func_53((safe_div_func_uint8_t_u_u(func_59(func_3((safe_add_func_int32_t_s_s((l_516 = (+g_491[(g_2 + 7)][g_2])), (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(g_491[(g_2 + 7)][g_2])), (*l_470))))), ((safe_mod_func_int16_t_s_s(((g_271 = ((0x1C49L || (&l_484 == l_522)) | g_115)) && (l_525 = ((*l_524) = l_523))), (func_30((l_528[4] != 0L), l_523) ^ (*l_470)))) != l_523), &l_523, l_529, g_22), &g_69, l_530, l_531, l_506), l_532)), &g_70, l_533, g_70, (*l_470)), g_471, l_534, &l_495, g_146);

                        ;
                        ;
                    }
                    if ((+(((**g_260) || 0xD6L) != (func_59(((*g_77) = &l_507), l_530, &l_533, &g_472, (65531UL == (**l_531))) < 0xA5L))))
                    {
                        char ***l_539 = (void*)0;
                        l_537 = (safe_rshift_func_int16_t_s_s((g_491[3][0] = 0xDE72L), 7));
                        (*l_533) = ((l_538 == l_539) == 4UL);
                    }
                    else
                    {
                        l_541 = ((*g_69) = l_540);
                    }

                    ;
                }
                if (((g_172 && (safe_mul_func_uint16_t_u_u((func_30(((safe_div_func_uint32_t_u_u(((*l_548) = func_59(l_546, &g_223[4][0][1], &g_472, l_547[0][2][0], g_491[3][0])), func_53(g_257, &l_495, &l_495, g_491[4][0], g_236))) | (*g_261)), l_528[9]) && 2UL), g_236))) || (*l_470)))
                {
                    int *l_549[1];
                    char **l_555 = &l_485;
                    short l_567 = 0xCD50L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_549[i] = &g_224;
                    for (g_67 = 0; (g_67 <= 9); g_67 += 1)
                    {
                        int *l_550 = &g_224;
                        char **l_553 = (void*)0;
                        char ***l_554[1][2];
                        unsigned short ****l_564 = &g_562;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_554[i][j] = &l_484;
                        }
                        l_550 = l_549[0];
                        (*l_533) = ((l_528[g_70] < ((g_471 != (l_553 == (l_555 = ((*l_538) = &l_485)))) > (-1L))) && (safe_mod_func_int8_t_s_s((safe_mul_func_int32_t_s_s(((0x52L || (g_121 == (l_560 != ((*l_564) = g_562)))) == 0L), 0UL)), (*g_261))));
                        if (l_528[4])
                            break;
                    }
                    for (g_224 = (-15); (g_224 >= 22); g_224 = safe_add_func_int32_t_s_s(g_224, 9))
                    {
                        return (**g_260);



                    }
                    (*g_77) = &l_541;



                    (*l_533) = ((*l_470) && (l_567 ^ (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((func_59(l_549[0], &l_546, &g_223[5][2][2], l_530, ((safe_add_func_uint16_t_u_u(l_504, ((-1L) == g_172))) ^ 0x056FL)) | g_121), (*l_470))), 0x2DL))));
                }
                else
                {
                    char l_579[6] = {0L, 0L, 0L, 0L, 0L, 0L};
                    int i;
                    if ((safe_mod_func_uint32_t_u_u(((*l_548) = g_115), g_347)))
                    {
                        (*l_533) = (safe_mul_func_uint16_t_u_u((l_504 == (l_579[2] = func_59(&l_495, &g_223[1][1][0], &g_223[1][1][2], &l_546, l_578))), g_171));

                        ;
                        (*g_77) = &l_541;

                        ;

                    }
                    else
                    {
                        int *l_580 = (void*)0;
                        l_470 = l_580;

                        ;
                    }



                    ;
                    return l_581;



                }



            }
        }



        ;
        (*g_497) = &l_495;


        ;
        (*l_470) = (-9L);
    }
    else
    {
        unsigned char l_582[3][8][5] = {{{0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}}, {{0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}}, {{0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}, {0x95L, 0x95L, 0xE5L, 0x95L, 0x95L}}};
        int l_588[10][6][4] = {{{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}, {{0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}, {0L, 0x4EB38D69L, (-1L), 0x4EB38D69L}}};
        int l_594 = 0xF51031C2L;
        unsigned char l_656 = 0UL;
        int l_679[7][5][4] = {{{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}, {{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}, {{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}, {{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}, {{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}, {{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}, {{(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}, {(-1L), (-8L), (-6L), 0x3C3D0A9BL}}};
        unsigned char l_703 = 1UL;
        int *l_712[3];
        unsigned short *l_727 = &g_236;
        unsigned ***l_734 = (void*)0;
        unsigned ***l_735 = &g_592;
        unsigned char l_798 = 0x6BL;
        unsigned short l_834[8][4][2] = {{{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}, {{0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}, {0x70BAL, 65528UL}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_712[i] = (void*)0;
        (*l_470) = l_582[0][2][1];
        (*l_470) = l_582[2][4][1];
        for (g_193 = 0; (g_193 <= 2); g_193 += 1)
        {
            int l_583 = (-1L);
            unsigned short l_606 = 1UL;
            unsigned char l_629 = 255UL;
            int **l_638 = &l_470;
            int l_649 = (-1L);
            int ***l_684[3];
            char *l_690 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_684[i] = &g_77;
            if (l_582[1][1][4])
                break;
            for (g_236 = 0; (g_236 <= 2); g_236 += 1)
            {
                unsigned **l_590 = (void*)0;
                for (l_495 = 2; (l_495 >= 0); l_495 -= 1)
                {
                    int i, j, k;
                    for (g_271 = 0; (g_271 <= 1); g_271 += 1)
                    {
                        int i, j, k;
                        if (l_582[g_193][(g_271 + 1)][g_236])
                            break;
                    }
                    if ((((g_347 = l_583) || l_582[0][2][1]) || (safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(5L, 0x31A2L)) && (((l_582[g_193][(l_495 + 4)][(l_495 + 1)] = (+(**g_260))) <= l_588[1][5][3]) && (*l_470))), 6))))
                    {
                        char l_589 = 0x98L;
                        (*g_497) = (void*)0;
                        (*g_497) = &g_224;
                        if (l_589)
                            break;
                    }
                    else
                    {
                        unsigned ***l_591[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_591[i] = &l_590;
                        g_592 = l_590;

                        ;
                        return (**g_260);
                    }
                    l_594 = ((*l_470) = 0xEC1C79E0L);
                }


                ;
                return l_595;
            }
            for (g_224 = 0; (g_224 <= 1); g_224 += 1)
            {
                int l_596[3][3][1] = {{{0x149ED41AL}, {0x149ED41AL}, {0x149ED41AL}}, {{0x149ED41AL}, {0x149ED41AL}, {0x149ED41AL}}, {{0x149ED41AL}, {0x149ED41AL}, {0x149ED41AL}}};
                int i, j, k;
                return l_596[0][2][0];
            }
            for (g_146 = 0; (g_146 <= 1); g_146 += 1)
            {
                unsigned l_597 = 3UL;
                char **l_604 = &l_485;
                char *l_605 = &l_595;
                int *l_607 = &g_22;
                unsigned short ***l_668 = (void*)0;
                char l_688 = 0x9AL;
                char *l_689 = &g_347;
                unsigned short l_713 = 6UL;
                l_607 = func_38(l_597, (1UL == ((safe_add_func_uint16_t_u_u(((-5L) && (!g_491[7][0])), (*l_470))) ^ ((safe_rshift_func_uint8_t_u_u(1UL, 5)) != ((void*)0 != l_604)))), ((*l_605) = ((**l_488) = 0x9AL)), l_583, l_606);

                ;
            }
        }
        for (g_135 = 0; (g_135 == 60); ++g_135)
        {
            unsigned char l_731[9] = {254UL, 254UL, 0xC3L, 254UL, 254UL, 0xC3L, 254UL, 254UL, 0xC3L};
            unsigned short ****l_743 = &g_562;
            unsigned short *****l_742 = &l_743;
            int l_776 = 0x8AF6DB52L;
            short *l_817 = &l_537;
            short **l_816 = &l_817;
            unsigned l_832 = 0x0052AD50L;
            unsigned l_835 = 1UL;
            unsigned short **l_844 = &l_727;
            unsigned char l_854 = 1UL;
            int i;
            if (l_731[0])
                break;
        }
    }



    ;
    ;
    return (**g_260);



}







static int * func_3(char p_4, char p_5, int * p_6, int * p_7, unsigned short p_8)
{
    p_6 = p_6;
    return p_7;


}







static int * func_10(int * p_11)
{
    short l_373 = (-2L);
    short *l_376 = &l_373;
    int *l_393 = &g_224;
    int l_457[7] = {(-1L), (-1L), 0xFDB362B9L, (-1L), (-1L), 0xFDB362B9L, (-1L)};
    unsigned short l_458 = 0xCF85L;
    int i;
    if (l_373)
    {
        short *l_374[10] = {&g_271, &l_373, &g_271, &l_373, &g_271, &l_373, &g_271, &l_373, &g_271, &l_373};
        int l_375 = (-1L);
        unsigned *l_377 = &g_121;
        unsigned char ***l_388 = &g_260;
        int l_391[4][4] = {{0x3D28C436L, 0xCF82B645L, 0x7350418DL, 0xCF82B645L}, {0x3D28C436L, 0xCF82B645L, 0x7350418DL, 0xCF82B645L}, {0x3D28C436L, 0xCF82B645L, 0x7350418DL, 0xCF82B645L}, {0x3D28C436L, 0xCF82B645L, 0x7350418DL, 0xCF82B645L}};
        unsigned short *l_392 = &g_236;
        int l_394[10][2];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 2; j++)
                l_394[i][j] = 1L;
        }
        (*p_11) = (((l_375 = g_171) >= func_30(((((*l_377) = (&g_271 == (l_376 = l_374[1]))) < (safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((func_30(((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_373, (l_388 != (void*)0))), (*p_11))) <= (safe_mul_func_uint16_t_u_u(((*l_392) = l_391[3][2]), func_53(g_67, l_393, l_393, (*l_393), g_67)))), l_391[3][2]) && l_391[3][2]), 0x9D228DB7L)), l_391[3][2])) || 4294967290UL), (*l_393)))) != l_391[3][2]), l_394[7][0])) == (**g_260));

        ;
    }
    else
    {
        for (g_193 = 0; (g_193 <= 9); g_193 += 1)
        {
            return &g_22;


        }
    }

    ;
    for (g_257 = 0; (g_257 == 30); g_257 = safe_add_func_int32_t_s_s(g_257, 1))
    {
        int *l_397 = &g_70;
        return l_397;


    }
    for (g_172 = 1; (g_172 == 41); g_172++)
    {
        unsigned l_401 = 8UL;
        int l_408 = (-10L);
        char l_409 = 0x52L;
        unsigned short **l_421 = &g_239;
        char l_468[1];
        int i;
        for (i = 0; i < 1; i++)
            l_468[i] = 0xF3L;
        for (g_22 = 0; (g_22 <= 9); g_22 += 1)
        {
            unsigned l_400 = 1UL;
            unsigned *l_404 = &l_400;
            unsigned char l_405 = 6UL;
            char *l_407 = &g_67;
            char **l_406 = &l_407;
            l_401 = l_400;
            l_408 = func_53(g_135, p_11, func_38((l_401 < ((((*l_404) = (safe_div_func_int16_t_s_s(0xB80CL, 0x9532L))) != (*p_11)) ^ g_347)), l_405, (((*l_406) = &g_67) != &g_67), (*p_11), l_405), l_405, (*l_393));
            if (l_401)
                break;
            for (g_271 = 2; (g_271 >= 0); g_271 -= 1)
            {
                unsigned short **l_419 = &g_239;
                int l_425 = 0L;
                l_409 = (l_400 != l_405);
                for (l_405 = 0; (l_405 <= 2); l_405 += 1)
                {
                    int l_412[7];
                    unsigned short ***l_420 = &l_419;
                    unsigned short ***l_422 = &l_421;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_412[i] = 1L;
                    g_223[(g_271 + 1)][g_271][g_271] = func_38((g_67 <= (safe_rshift_func_uint8_t_u_u(255UL, 2))), l_412[1], g_146, (*p_11), (~((void*)0 == &l_409)));
                    (*l_393) = (l_425 = (safe_sub_func_uint16_t_u_u((((l_400 ^ ((safe_div_func_int32_t_s_s(1L, 0xEB1FF3E3L)) && (*l_393))) == (g_223[(l_405 + 3)][g_271][l_405] != p_11)) == (safe_sub_func_int8_t_s_s((((*l_420) = l_419) != ((*l_422) = l_421)), (safe_rshift_func_int16_t_s_s(((((void*)0 == (*g_260)) >= (**g_260)) <= l_409), 11))))), 0x9D79L)));
                    g_223[(l_405 + 2)][l_405][l_405] = &g_70;
                }
            }
        }
        for (g_236 = 0; (g_236 < 46); g_236++)
        {
            int l_439[7][9] = {{1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}, {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L}};
            unsigned char **l_461 = &g_261;
            int i, j;
            for (g_224 = 0; (g_224 > (-20)); g_224 = safe_sub_func_uint32_t_u_u(g_224, 3))
            {
                int *l_436 = &l_408;
                unsigned short l_456 = 0xD772L;
                unsigned char **l_463 = &g_372[2];
                (*g_77) = p_11;

                ;
                for (g_70 = 0; (g_70 == (-1)); g_70 = safe_sub_func_int8_t_s_s(g_70, 8))
                {
                    int l_440 = 0x17DFAC4BL;
                    short l_460 = (-1L);
                    unsigned char ***l_462 = (void*)0;
                    for (g_121 = 0; (g_121 <= 2); g_121 += 1)
                    {
                        int i, j, k;
                        if ((*p_11))
                            break;
                    }
                }
            }
        }


        (*p_11) = (((safe_add_func_int16_t_s_s(((l_409 || l_408) > 0L), (safe_lshift_func_int8_t_s_u(((void*)0 != &l_458), func_59(func_38((g_171 & 0x1EL), (*l_393), (*l_393), (*p_11), l_401), &g_223[4][0][1], &g_223[4][2][0], &g_223[4][0][1], g_271))))) | (*l_393)) <= l_468[0]);

        ;
        (*l_393) = (*g_69);
    }


    return &g_70;


}







static int * func_12(unsigned char p_13)
{
    int *l_21[2];
    int *l_23 = &g_22;
    int **l_222 = &l_21[0];
    unsigned l_243 = 0UL;
    unsigned l_247 = 0x17CDE6F3L;
    int *l_277 = &g_22;
    int l_290 = 0x6D8BA3A8L;
    unsigned char **l_312 = &g_261;
    int l_328 = 1L;
    unsigned short **l_365 = (void*)0;
    unsigned char *l_371 = &g_135;
    int i;
    for (i = 0; i < 2; i++)
        l_21[i] = &g_22;
    if ((safe_lshift_func_uint16_t_u_u((((*l_222) = func_16(((((l_21[0] = l_21[0]) != l_23) == p_13) != (safe_rshift_func_int8_t_s_s(0xCAL, 1))), p_13, (*l_23), &g_22)) != g_223[4][0][1]), 5)))
    {
        for (g_171 = (-3); (g_171 < 16); g_171++)
        {
            unsigned short *l_235 = &g_236;
            int l_240 = 0xB66617ECL;
            (*l_23) = (g_67 <= (safe_mod_func_uint8_t_u_u(255UL, p_13)));
            if (p_13)
            {
                unsigned short l_229 = 65535UL;
                (**l_222) = (l_229 = (-1L));
            }
            else
            {
                char *l_234 = &g_67;
                unsigned short *l_238 = &g_236;
                unsigned short **l_237[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_237[i] = &l_238;
                (**l_222) = ((**l_222) ^ (((1L ^ ((*l_234) = 0x2DL)) == g_22) != (l_235 != (g_239 = (void*)0))));

                ;
                if (l_240)
                    continue;
            }
            (**l_222) = (safe_rshift_func_int16_t_s_u(l_243, 6));
            (**l_222) = 0xED02343AL;
        }

        ;
    }
    else
    {
        int *l_244 = &g_224;
        return l_244;


    }



    ;
    for (g_171 = 0; (g_171 < 17); g_171 = safe_add_func_uint16_t_u_u(g_171, 5))
    {
        int l_255 = 1L;
        int l_258 = 1L;
        int l_259 = 0L;
        int **l_263 = &g_69;
        unsigned short **l_299 = &g_239;
        char l_311 = (-7L);
        char l_318 = 8L;
        unsigned short l_321 = 0x14DBL;
        short l_333[6][2] = {{(-1L), (-1L)}, {(-1L), (-1L)}, {(-1L), (-1L)}, {(-1L), (-1L)}, {(-1L), (-1L)}, {(-1L), (-1L)}};
        int *l_335 = &l_258;
        char l_348[3];
        unsigned char *l_349 = &g_135;
        int i, j;
        for (i = 0; i < 3; i++)
            l_348[i] = 0xB6L;
        if ((0xC4CE350BL > l_247))
        {
            int *l_248 = &g_22;
            unsigned short *l_256[1];
            int i;
            for (i = 0; i < 1; i++)
                l_256[i] = &g_236;
            (*l_222) = l_248;
            (*l_248) = p_13;
            (*l_222) = func_38((g_257 = (g_236 = ((9L <= ((0x3817B0A8L || func_48(g_70, (g_146 != (g_22 <= g_171)), ((l_255 = (safe_sub_func_int32_t_s_s(0xE00818ECL, (safe_mul_func_int8_t_s_s(p_13, p_13))))) ^ p_13), (*l_23))) < g_22)) | g_172))), g_135, (*l_248), l_258, l_259);
        }
        else
        {
            unsigned char ***l_262 = &g_260;
            (*l_23) = 1L;
            (*l_262) = g_260;
        }
        if (((*l_222) != (l_23 = &l_258)))
        {
            int l_268 = 0xAEBFF18DL;
            short *l_269 = (void*)0;
            short *l_270 = &g_271;
            int *l_273 = &l_259;
            int *l_289 = &g_70;
            int **l_294 = (void*)0;
            unsigned l_317 = 0x31EB3652L;
            if ((0x883BL <= (g_171 | ((0xB7F8293AL <= ((safe_mul_func_uint8_t_u_u(3UL, (~((safe_rshift_func_uint8_t_u_s(0xEFL, 2)) < p_13)))) == ((*g_261) = (*g_261)))) < ((*l_270) = (255UL <= l_268))))))
            {
                if (l_268)
                    break;

            }
            else
            {
                int *l_272 = &l_255;
                int *l_274 = &g_224;
                (*l_23) = (&l_263 == &g_77);
                return l_274;


            }
            l_273 = l_273;
            for (g_22 = 7; (g_22 >= (-5)); --g_22)
            {
                int l_285 = (-8L);
                unsigned short **l_293 = (void*)0;
                int *l_314 = &l_290;
                char l_334 = (-4L);
                (*g_77) = l_277;

                ;
            }
            (*l_23) = (*l_273);
        }
        else
        {
            unsigned short **l_342 = &g_239;
            int *l_350 = &l_255;
            (**l_222) = p_13;
            for (l_247 = 0; (l_247 <= 2); l_247 += 1)
            {
                int l_345 = (-1L);
                int **l_346 = &l_277;
                unsigned short **l_363 = &g_239;
                (*g_77) = l_335;

                ;
                if (func_59(func_38(((safe_mul_func_uint8_t_u_u((*l_23), (p_13 && (safe_add_func_uint32_t_u_u((((*g_260) = (*g_260)) != (void*)0), p_13))))) || ((*g_261) = ((((safe_mod_func_int32_t_s_s(((l_342 == &g_239) || p_13), func_30(((safe_mod_func_int8_t_s_s((-10L), 0x20L)) < (-4L)), (**l_263)))) >= p_13) != 0x4B2344DFL) ^ (**g_260)))), g_115, l_345, (**g_77), l_345), &g_223[1][2][2], l_346, &g_223[3][1][2], g_2))
                {
                    (*l_277) = (**g_77);
                }
                else
                {
                    for (l_318 = 0; (l_318 <= 2); l_318 += 1)
                    {
                        int i, j, k;
                        if (g_347)
                            break;
                        (*l_277) = (*g_69);
                        (*l_346) = func_38(g_70, l_348[1], g_236, p_13, (((void*)0 != l_349) | (((*g_77) = (*g_77)) == l_350)));

                        ;
                        (**l_222) = 0x589C4CF2L;
                    }

                    ;
                    ;
                    return (*g_77);


                }

                ;
                (*l_350) = (p_13 <= p_13);
                if ((p_13 < (safe_rshift_func_uint16_t_u_u((func_30(g_22, p_13) >= (p_13 <= (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((((&l_312 != (void*)0) <= (p_13 | (safe_div_func_int32_t_s_s((~0L), (-4L))))) <= 0xDDL), 0xC9D5L)), (-1L))), (**l_346))), (**l_263))))), p_13))))
                {
                    unsigned short ***l_364[1];
                    int ***l_366[8];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_364[i] = &l_299;
                    for (i = 0; i < 8; i++)
                        l_366[i] = (void*)0;
                    l_365 = l_363;

                    ;
                    l_346 = (void*)0;

                    ;
                }
                else
                {
                    unsigned char l_369[2][5][8] = {{{0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}}, {{0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}, {0x8DL, 0UL, 0UL, 0xC2L, 250UL, 0UL, 0x06L, 249UL}}};
                    unsigned short *l_370 = &l_321;
                    int i, j, k;
                    if ((safe_sub_func_int8_t_s_s(((*g_261) || (l_369[1][0][7] || (g_121 && ((**l_263) > ((*l_370) = p_13))))), ((l_371 = (*g_260)) != (g_372[2] = &p_13)))))
                    {
                        return (*g_77);



                    }
                    else
                    {
                        return (*g_77);



                    }
                }

                ;
                ;
            }

            ;
            (*g_77) = &g_70;

            ;
            (*l_222) = (*g_77);
        }

        ;
        ;
        return &g_22;


    }


    return &g_22;


}







static int * func_16(int p_17, unsigned p_18, unsigned char p_19, int * p_20)
{
    unsigned short l_33 = 0x11E0L;
    int *l_65 = &g_22;
    int l_108 = 1L;
    unsigned l_125 = 0x2966C64AL;
    int ***l_141 = &g_77;
    unsigned short l_155 = 65531UL;
    unsigned l_159 = 0x68AEAC46L;
    unsigned l_213 = 0xB7FD2DEEL;
    unsigned *l_219 = &g_115;
    int *l_220 = (void*)0;
    int l_221[8] = {0xDEAA3913L, 0L, 0xDEAA3913L, 0L, 0xDEAA3913L, 0L, 0xDEAA3913L, 0L};
    int i;
    for (g_22 = 18; (g_22 < (-26)); g_22 = safe_sub_func_uint8_t_u_u(g_22, 5))
    {
        unsigned l_66 = 4294967295UL;
        unsigned *l_120 = &g_121;
        unsigned short l_124[8][7] = {{8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}, {8UL, 4UL, 0xFCA7L, 4UL, 8UL, 0xEFF9L, 8UL}};
        int l_128 = 0xEDD96C0BL;
        int ***l_140[5][2][10] = {{{(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}, {(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}}, {{(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}, {(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}}, {{(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}, {(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}}, {{(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}, {(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}}, {{(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}, {(void*)0, (void*)0, &g_77, (void*)0, (void*)0, &g_77, &g_77, &g_77, &g_77, (void*)0}}};
        unsigned short l_158[7] = {0x5E80L, 0x5E80L, 0xC40AL, 0x5E80L, 0x5E80L, 0xC40AL, 0x5E80L};
        int l_205 = 0L;
        int **l_214 = &l_65;
        int i, j, k;
        if ((safe_lshift_func_int8_t_s_s(func_30(p_19, l_33), 3)))
        {
            unsigned l_71[5][7][4] = {{{9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}}, {{9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}}, {{9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}}, {{9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}}, {{9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}, {9UL, 0UL, 4294967295UL, 1UL}}};
            int *l_73 = &g_70;
            char *l_95 = &g_67;
            int **l_103 = &g_69;
            int i, j, k;
            p_20 = ((*l_103) = func_38(p_17, ((safe_div_func_int32_t_s_s((*p_20), 4294967295UL)) > (safe_mul_func_int8_t_s_s(((*l_95) = (func_48(l_33, ((*l_73) = func_30(func_53(func_59(l_65, &p_20, &p_20, &l_65, func_30(l_66, g_22)), &g_70, &g_22, p_18, l_71[0][1][2]), (*p_20))), g_2, (*l_65)) == 65526UL)), p_19))), p_17, g_22, g_2));

            ;
            ;
            ;
        }
        else
        {
            unsigned l_111 = 0x5BC9E733L;
            unsigned *l_114 = &g_115;
            int **l_122 = &l_65;
            int **l_123 = &l_65;
            char *l_126 = (void*)0;
            char *l_127[10];
            int l_188 = (-1L);
            int i;
            for (i = 0; i < 10; i++)
                l_127[i] = &g_67;
            if (((safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(l_108, (0xC4L == (l_111 >= (l_128 = (safe_div_func_uint32_t_u_u(func_53(((*l_114) = l_66), func_38((safe_lshift_func_uint16_t_u_u((1L >= (l_120 == (void*)0)), func_59(p_20, l_122, &g_69, l_123, l_124[0][6]))), g_2, p_18, (*p_20), (**l_122)), (*l_122), l_125, g_2), (-4L)))))))) || g_2) >= 0xFDL), 0x2085L)) && p_17))
            {
                int ***l_133 = &l_123;
                unsigned char *l_134[2][3][6] = {{{&g_135, &g_135, &g_135, (void*)0, &g_135, &g_135}, {&g_135, &g_135, &g_135, (void*)0, &g_135, &g_135}, {&g_135, &g_135, &g_135, (void*)0, &g_135, &g_135}}, {{&g_135, &g_135, &g_135, (void*)0, &g_135, &g_135}, {&g_135, &g_135, &g_135, (void*)0, &g_135, &g_135}, {&g_135, &g_135, &g_135, (void*)0, &g_135, &g_135}}};
                int *l_136 = &l_128;
                int i, j, k;
                if ((((safe_lshift_func_int16_t_s_s(func_48((p_19 = (safe_div_func_uint16_t_u_u((func_59((*g_77), l_122, &g_69, ((*l_133) = &g_69), p_19) > 65534UL), g_70))), ((*l_136) = l_128), p_18, (*l_65)), 1)) == g_135) <= l_66))
                {
                    if (g_67)
                        break;
                }
                else
                {
                    int ***l_139 = &l_122;
                    int l_145[10] = {0L, 0L, (-7L), 0L, 0L, (-7L), 0L, 0L, (-7L), 0L};
                    int *l_160 = &g_22;
                    int i;
                    if ((safe_mod_func_int8_t_s_s(0x6BL, ((*l_65) & (p_17 & ((0x9EFA0E0CL == ((g_121 || (((*l_133) = &p_20) != ((*l_139) = &g_69))) != 65535UL)) || (*p_20)))))))
                    {
                        (*l_136) = (l_140[3][0][7] == l_141);
                    }
                    else
                    {
                        int l_142 = 0x5CF48442L;
                        (*l_136) = (l_142 = (*p_20));
                        (*l_136) = (safe_div_func_int8_t_s_s(((((1UL != (*l_65)) | (l_145[7] = (g_22 != p_17))) ^ g_146) && ((safe_rshift_func_int8_t_s_s(p_17, g_115)) < ((7UL == (g_67 && 0x2051L)) < 5UL))), g_121));
                        (**l_141) = func_38(((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((*l_136), (g_67 = p_19))), g_146)) | ((safe_div_func_int8_t_s_s(g_70, p_19)) < ((p_18 >= l_155) < (((safe_rshift_func_uint16_t_u_s(p_17, (l_142 < l_158[5]))) && g_146) ^ g_135)))) == l_159) < (*l_136)), p_19, g_135, (*p_20), p_17);

                        ;
                        return l_160;


                    }

                    ;
                    ;
                    (**l_141) = func_38(g_146, (g_2 == ((safe_lshift_func_int8_t_s_s((g_67 = p_18), (((p_20 = &g_70) == &g_70) != ((safe_sub_func_uint32_t_u_u(p_19, (safe_sub_func_int32_t_s_s(p_19, (*l_160))))) <= (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((g_172 = (g_171 = p_17)), p_18)), p_18)))))) || p_18)), p_18, p_17, p_17);

                    ;
                    ;
                    for (l_159 = 0; (l_159 > 59); l_159 = safe_add_func_uint32_t_u_u(l_159, 4))
                    {
                        unsigned l_179 = 0UL;
                        (**g_77) = (func_53(((safe_add_func_uint32_t_u_u((***l_139), (0xA8CDCF8FL ^ (***l_141)))) < g_115), (*g_77), p_20, (safe_mod_func_int32_t_s_s((*p_20), 0x627D2885L)), l_179) ^ 0L);
                        (*g_77) = (*g_77);
                        (*l_122) = (*g_77);
                        (*l_136) = (**g_77);
                    }

                    ;
                    for (l_111 = 0; (l_111 < 5); ++l_111)
                    {
                        int *l_191 = &l_145[0];
                        short *l_192 = (void*)0;
                        unsigned char **l_196 = &l_134[1][2][2];
                        (*g_77) = func_38(g_70, (safe_sub_func_uint32_t_u_u(p_19, (safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((l_188 = ((*l_136) = (**g_77))), 6L)), ((g_193 = (safe_mul_func_uint16_t_u_u(func_53((*l_160), (*g_77), l_191, (0xC5L != p_17), (*l_160)), (**l_123)))) > 4L))))), p_19, (***l_139), (*l_65));
                        (*g_77) = func_38((((((*l_136) <= (g_67 == (p_19 == 6UL))) != (((*l_196) = &p_19) != (void*)0)) < (-3L)) & (~(safe_rshift_func_uint8_t_u_s((((void*)0 != l_120) ^ 0UL), g_67)))), g_171, (***l_141), (*p_20), g_135);
                    }


                }

                ;
                ;

                ;
                ;
                ;

                (*l_141) = &g_69;
                (*l_136) = (*p_20);
            }
            else
            {
                unsigned char l_203[2];
                int l_204 = 0x7EB36993L;
                unsigned short *l_212 = &l_158[3];
                int i;
                for (i = 0; i < 2; i++)
                    l_203[i] = 0xC2L;
                l_188 = (safe_div_func_uint16_t_u_u(p_18, ((((l_203[0] && 1L) > ((l_205 = (l_204 = (**l_122))) != func_48(g_146, (*l_65), (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(0xD5L, func_30(func_59(func_38(((*l_212) = (p_19 == l_203[0])), p_17, p_18, l_213, p_17), g_77, g_77, l_214, g_172), (*p_20)))) <= g_22) <= (**l_123)), p_19)), l_203[1])), (*p_20)))) ^ g_171) & (**l_214))));


                ;
                l_204 = (*p_20);
                (**l_141) = &g_70;

                ;
                if ((*p_20))
                    break;
            }

            ;
            ;

            ;
            ;
            ;
        }

        ;
        ;

        ;
        if (g_135)
            break;
        return &g_70;


    }

    ;
    ;
    (*p_20) = (safe_lshift_func_int8_t_s_u(func_59(&g_22, &p_20, (*l_141), (*l_141), (safe_add_func_int32_t_s_s((-1L), (((*l_65) = p_17) >= (func_53(((*l_219) = p_17), l_220, p_20, g_172, g_121) == l_221[0]))))), 0));

    ;
    (**l_141) = (*g_77);

    ;
    return p_20;


}







static char func_30(unsigned p_31, int p_32)
{
    int **l_34 = (void*)0;
    int **l_35 = (void*)0;
    int *l_37 = &g_22;
    int **l_36 = &l_37;
    (*l_36) = &p_32;

    ;
    return p_31;
}







static int * func_38(unsigned short p_39, short p_40, char p_41, int p_42, unsigned short p_43)
{
    int *l_98 = &g_70;
    for (g_70 = 3; (g_70 != (-30)); g_70--)
    {
        (*g_77) = &g_22;


        (*g_77) = l_98;
    }
    for (p_43 = 0; (p_43 < 32); p_43++)
    {
        int **l_101 = (void*)0;
        int *l_102 = &g_70;
        l_102 = ((*g_77) = l_98);


        return l_98;


    }
    return l_98;


}







static unsigned short func_48(unsigned char p_49, int p_50, int p_51, int p_52)
{
    int **l_74 = &g_69;
    int ***l_75 = (void*)0;
    int ***l_76 = (void*)0;
    int *l_91 = &g_70;
    if ((l_74 == (g_77 = &g_69)))
    {
        return g_70;
    }
    else
    {
        int *l_79[3][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
        int **l_78 = &l_79[0][1];
        int i, j;
        (*l_74) = &p_52;

        ;
        (*l_78) = ((*l_74) = &p_52);


        (*l_78) = (void*)0;
        for (p_52 = 22; (p_52 >= 11); p_52 = safe_sub_func_uint32_t_u_u(p_52, 2))
        {
            short l_82 = 0L;
            int *l_85 = &g_70;
            if (func_53(p_49, (*l_78), &p_52, p_52, p_52))
            {
                int l_88 = 7L;
                l_82 = (*g_69);
                p_50 = (safe_lshift_func_uint16_t_u_s((l_85 == &p_50), 7));
                (*l_85) = (safe_mul_func_uint16_t_u_u((0x1619L > p_49), (l_88 == (**l_74))));
                for (g_67 = 0; (g_67 < 1); g_67 = safe_add_func_int16_t_s_s(g_67, 8))
                {
                    (*l_78) = &p_50;
                    (*l_85) = (**g_77);
                    for (p_51 = 1; (p_51 >= 0); p_51 -= 1)
                    {
                        int i, j;
                        l_79[p_51][p_51] = l_91;
                    }
                }
            }
            else
            {
                short l_94 = 0x2792L;
                for (p_50 = 0; (p_50 < 0); p_50++)
                {
                    for (g_67 = 1; (g_67 >= 0); g_67 -= 1)
                    {
                        return l_94;


                    }
                }
                return (*l_85);


            }
        }


    }

    ;
    ;
    return g_67;


}







static unsigned func_53(unsigned p_54, int * p_55, int * p_56, short p_57, int p_58)
{
    int *l_72 = (void*)0;
    p_56 = l_72;

    ;
    return p_58;
}







static unsigned func_59(int * p_60, int ** p_61, int ** p_62, int ** p_63, unsigned p_64)
{
    int *l_68 = &g_22;
    g_67 = 0x9096A9CBL;
    g_69 = l_68;

    ;
    return g_22;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_491[i][j], "g_491[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_634, "g_634", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_714[i][j][k], "g_714[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
