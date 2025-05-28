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



static short g_4 = (-1L);
static unsigned g_6[4] = {0x951EA66EL, 0UL, 0x951EA66EL, 0UL};
static int g_27[7][8][2] = {{{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}, {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}, {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}, {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}, {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}, {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}, {{(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}, {(-1L), 0L}}};
static int *g_26 = &g_27[4][7][0];
static int g_59 = (-1L);
static unsigned g_73 = 1UL;
static char g_75 = 0x81L;
static unsigned g_83 = 4294967295UL;
static char g_98[9] = {0x3FL, 0x3DL, 0x3FL, 0x3DL, 0x3FL, 0x3DL, 0x3FL, 0x3DL, 0x3FL};
static char *g_97 = &g_98[0];
static unsigned short g_101 = 0x67A1L;
static unsigned short g_116 = 0UL;
static unsigned char g_123[2][5][4] = {{{0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}}, {{0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}, {0xBBL, 0UL, 1UL, 0UL}}};
static short g_125 = (-1L);
static unsigned short g_163[7] = {65529UL, 65529UL, 65529UL, 65529UL, 65529UL, 65529UL, 65529UL};
static unsigned g_189 = 2UL;
static int g_192 = 9L;
static int g_197[6][1][9] = {{{0L, 0L, 0xCBCBC71EL, 0L, 0L, (-1L), 0L, 0L, 0xCBCBC71EL}}, {{0L, 0L, 0xCBCBC71EL, 0L, 0L, (-1L), 0L, 0L, 0xCBCBC71EL}}, {{0L, 0L, 0xCBCBC71EL, 0L, 0L, (-1L), 0L, 0L, 0xCBCBC71EL}}, {{0L, 0L, 0xCBCBC71EL, 0L, 0L, (-1L), 0L, 0L, 0xCBCBC71EL}}, {{0L, 0L, 0xCBCBC71EL, 0L, 0L, (-1L), 0L, 0L, 0xCBCBC71EL}}, {{0L, 0L, 0xCBCBC71EL, 0L, 0L, (-1L), 0L, 0L, 0xCBCBC71EL}}};
static unsigned g_203 = 1UL;
static int *g_209 = (void*)0;
static unsigned char *g_236 = &g_123[0][1][0];
static unsigned char **g_235 = &g_236;
static int *g_239[9][4] = {{(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}, {(void*)0, &g_59, (void*)0, &g_59}};
static int *g_240 = &g_192;
static int g_284 = 0x5E3D64DDL;
static short *g_318[1][10][8] = {{{&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}, {&g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125, &g_125}}};
static unsigned char ***g_321 = &g_235;
static unsigned char ****g_320 = &g_321;
static int *g_326 = &g_284;
static int g_327 = 0xB4AD3666L;
static unsigned short *g_448[3] = {&g_163[4], &g_163[4], &g_163[4]};
static unsigned short **g_447 = &g_448[1];
static int *g_504 = &g_59;
static int *g_507[10][8][2] = {{{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}, {{&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}, {&g_59, &g_327}}};
static unsigned g_512[7][4][3] = {{{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}, {{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}, {{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}, {{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}, {{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}, {{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}, {{0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}, {0x01545B3FL, 4294967295UL, 0x5FE194E9L}}};
static unsigned short ***g_553 = &g_447;
static unsigned short ***g_555 = &g_447;
static unsigned short ****g_580 = &g_555;
static int *g_670 = (void*)0;
static short g_692[10] = {0xA9F7L, 0x3F3FL, 0L, 0L, 0x3F3FL, 0xA9F7L, 0x3F3FL, 0L, 0L, 0x3F3FL};
static int g_777 = (-1L);
static unsigned *g_783[4] = {&g_6[2], &g_6[2], &g_6[2], &g_6[2]};
static unsigned **g_782 = &g_783[2];
static unsigned ***g_781 = &g_782;
static short **g_785 = &g_318[0][0][0];
static short ***g_784 = &g_785;
static short g_797 = (-1L);
static short g_802 = 0xA925L;
static char g_831[8][5] = {{0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}, {0x37L, 0x74L, 0x37L, 0L, 0x71L}};
static unsigned *g_990 = &g_83;
static unsigned **g_989 = &g_990;
static unsigned ***g_988 = &g_989;
static unsigned char g_1168 = 0xBBL;
static unsigned short g_1173 = 6UL;
static char g_1228 = 5L;
static short g_1270 = 7L;



static int func_1(void);
static int * func_2(unsigned p_3);
static unsigned char func_21(int * p_22, char p_23);
static int * func_24(int * p_25);
static short func_32(int * p_33, int p_34);
static int * func_35(unsigned p_36, unsigned p_37, unsigned p_38);
static unsigned func_39(unsigned short p_40, unsigned short p_41, int * p_42);
static unsigned char func_45(unsigned short p_46, int * p_47, int * p_48, unsigned p_49);
static int * func_52(int * p_53, unsigned char p_54, char p_55);
static int * func_60(char p_61, char p_62, char p_63);
static int func_1(void)
{
    int *l_1138 = &g_192;
    int l_1174 = 0x923DF262L;
    unsigned char **l_1176 = &g_236;
    unsigned ****l_1183 = &g_988;
    int ***l_1211 = (void*)0;
    short l_1232 = 5L;
    unsigned short l_1273[7][7] = {{0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}, {0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}, {0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}, {0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}, {0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}, {0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}, {0xB824L, 0UL, 0UL, 0xB824L, 2UL, 1UL, 0xE0C6L}};
    unsigned short ***l_1292 = (void*)0;
    int l_1293 = 0xFF4D1893L;
    int i, j;
    g_507[3][5][1] = func_2(g_4);
    for (g_203 = 10; (g_203 > 11); g_203++)
    {
        unsigned l_1139 = 0UL;
        char *l_1140 = &g_75;
        unsigned short l_1149 = 0xA56FL;
        int l_1169 = 0x7C5FA7DAL;
        int l_1170 = (-1L);
        int **l_1216 = &g_326;
        int ***l_1215 = &l_1216;
        short l_1219 = (-10L);
        int l_1237[3];
        unsigned l_1255 = 0x71F76C87L;
        char l_1256 = (-1L);
        int l_1258 = 0xF1D09A05L;
        int l_1271 = 0xBE5A4053L;
        int l_1272 = 2L;
        int i;
        for (i = 0; i < 3; i++)
            l_1237[i] = 0xD6F9C07AL;
    }
    return g_197[1][0][6];
}







static int * func_2(unsigned p_3)
{
    int *l_5[6];
    short *l_796 = &g_797;
    int l_800 = 0x19E74BDEL;
    short *l_801[3][4][10] = {{{&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}}, {{&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}}, {{&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}, {&g_692[2], &g_692[3], &g_692[2], &g_692[4], &g_692[5], (void*)0, &g_692[5], &g_802, &g_692[7], &g_692[5]}}};
    int l_803[8];
    char *l_830[9][10] = {{&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}, {&g_831[7][3], &g_831[1][3], &g_831[5][4], &g_831[3][4], &g_831[7][0], &g_831[4][1], &g_831[7][0], &g_831[3][4], &g_831[5][4], &g_831[1][3]}};
    unsigned char l_832 = 255UL;
    short ***l_847 = (void*)0;
    int l_861 = 1L;
    unsigned char ****l_887 = &g_321;
    unsigned **l_931 = &g_783[0];
    char l_962 = (-1L);
    unsigned ****l_986 = &g_781;
    unsigned ***l_993[1][10];
    short l_1016 = 0xE0BAL;
    unsigned *****l_1032 = (void*)0;
    char l_1118 = 0xFEL;
    short l_1124 = 1L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_5[i] = (void*)0;
    for (i = 0; i < 8; i++)
        l_803[i] = (-6L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_993[i][j] = &g_989;
    }
    g_6[1] = 0x05BA7723L;
    if (((*g_504) = ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_6[3], ((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((0x4D03L ^ ((safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(p_3, (g_831[1][3] &= (func_21(func_24(g_26), ((((l_803[1] = (safe_rshift_func_uint16_t_u_u((p_3 < (((*l_796) ^= (safe_mod_func_uint32_t_u_u(p_3, p_3))) > (safe_lshift_func_uint8_t_u_u(0UL, 3)))), l_800))) || p_3) >= g_6[1]) || 0x33L)) | p_3)))) == p_3) == 6UL), 5)) ^ l_832)), 0UL)), p_3)), p_3)) >= 0x88L))), p_3)) != 0x49L)))
    {
        int *l_835 = &g_327;
        int l_885 = 7L;
        int **l_886 = &g_239[3][1];
        int l_932[6] = {0x49531C32L, (-2L), 0x49531C32L, (-2L), 0x49531C32L, (-2L)};
        unsigned ***l_935 = &g_782;
        char l_1003 = 8L;
        short *l_1010[8][2][7] = {{{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}, {{&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}, {&g_797, &g_4, &g_4, &g_802, (void*)0, (void*)0, &g_797}}};
        unsigned char l_1023 = 0x7EL;
        unsigned *****l_1033 = &l_986;
        char l_1042 = 0xF2L;
        unsigned char *l_1043 = (void*)0;
        unsigned char *l_1044 = &l_832;
        int i, j, k;
        for (g_73 = 0; (g_73 <= 2); g_73 += 1)
        {
            short l_833 = 0x1493L;
            int l_834[5];
            int l_862[10][5] = {{(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}, {(-4L), (-4L), 0x216E2BA2L, (-4L), (-4L)}};
            int i, j;
            for (i = 0; i < 5; i++)
                l_834[i] = 0L;
            (*g_326) = l_833;
            for (g_203 = 0; (g_203 <= 4); g_203 += 1)
            {
                int i, j;
                l_834[2] &= ((*g_326) = g_831[g_203][g_203]);
            }
            for (g_59 = 2; (g_59 >= 0); g_59 -= 1)
            {
                unsigned l_838 = 0x1BCA20DBL;
                int *l_843 = &g_327;
                unsigned char l_876 = 0UL;
                int i, j;
                for (g_125 = 0; (g_125 <= 7); g_125 += 1)
                {
                    int *l_846[4][9][5] = {{{&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}}, {{&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}}, {{&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}}, {{&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}, {&l_800, &g_192, &g_59, &l_803[1], (void*)0}}};
                    int **l_863 = &g_239[1][0];
                    int i, j, k;
                    if (g_831[(g_73 + 3)][(g_73 + 1)])
                    {
                        int **l_844 = &g_240;
                        unsigned *l_845 = &g_83;
                        int i, j;
                        (*l_843) = func_32(l_835, (((l_803[g_125] <= 1UL) & ((*l_845) = func_45((!(safe_lshift_func_uint16_t_u_s(l_838, (!(+((safe_mod_func_int16_t_s_s((0x4DE11660L < ((*l_845) = (((*g_97) &= g_831[(g_73 + 3)][(g_73 + 1)]) | ((safe_div_func_uint16_t_u_u(func_32(l_843, (l_834[4] &= (func_45((*l_835), ((*l_844) = (void*)0), &g_777, (**g_782)) != p_3))), g_831[(g_73 + 3)][(g_73 + 1)])) < (*l_835))))), (****g_580))) > p_3)))))), l_846[0][6][2], &l_803[1], p_3))) | g_512[5][1][1]));
                    }
                    else
                    {
                        unsigned short l_854 = 0xDDCAL;
                        (*g_326) |= (l_847 != &g_785);
                        (*l_843) ^= (safe_rshift_func_uint8_t_u_u(((**g_235) != 0x7BL), 6));
                        (*l_843) = (((*g_326) = p_3) | (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((*l_843), (l_862[3][1] ^= ((*g_97) = (l_854 < (safe_mod_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(((**g_447) != p_3), p_3)) || ((l_834[1] &= (safe_div_func_int16_t_s_s(l_854, ((-4L) | (((*l_796) ^= 0L) > (*l_843)))))) > l_833)) && l_861), p_3))))))), 0xFEL)));
                    }
                    (*l_863) = l_835;
                }
                if (((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(0x7BL, (safe_sub_func_int16_t_s_s(g_831[(g_59 + 3)][(g_59 + 1)], g_831[(g_73 + 5)][(g_73 + 2)])))), func_32(&l_834[2], (l_862[3][2] = ((safe_div_func_int32_t_s_s(func_32(&g_27[4][7][0], g_831[(g_73 + 4)][(g_73 + 2)]), (safe_rshift_func_uint8_t_u_u(0xBFL, 4)))) < 0L))))) != (*g_97)))
                {
                    int *l_877 = &g_27[0][0][1];
                    int l_884[8] = {6L, 0x1C11764BL, 6L, 0x1C11764BL, 6L, 0x1C11764BL, 6L, 0x1C11764BL};
                    int i;
                    for (l_838 = 0; (l_838 <= 4); l_838 += 1)
                    {
                        int *l_882[2][7] = {{(void*)0, (void*)0, &l_803[2], (void*)0, (void*)0, &l_803[2], (void*)0}, {(void*)0, (void*)0, &l_803[2], (void*)0, (void*)0, &l_803[2], (void*)0}};
                        unsigned *l_883 = &g_83;
                        int i, j;
                        g_507[2][5][1] = &l_800;
                        (*l_843) ^= (*g_504);
                        l_884[5] |= (p_3 == (safe_rshift_func_uint16_t_u_u(((*g_97) | (((g_831[(l_838 + 2)][(g_73 + 1)] |= l_876) > func_32(l_877, p_3)) > (safe_add_func_int16_t_s_s((((*l_883) = (safe_mod_func_uint32_t_u_u(func_45((**g_447), &g_27[5][7][1], l_882[1][4], (*l_843)), g_692[7]))) > p_3), p_3)))), (*l_877))));
                        if ((*g_26))
                            break;
                    }
                    if (p_3)
                        break;
                }
                else
                {
                    (*l_835) = ((*l_843) & ((***g_553) | (l_885 = l_834[2])));
                }
                return l_843;
            }
        }
        (*l_886) = &g_59;
        if (((void*)0 == l_887))
        {
            int *l_888 = (void*)0;
            unsigned short *l_947 = &g_116;
            char l_949[3][7] = {{0xE0L, (-1L), 0xACL, (-1L), 0xE0L, (-1L), 0xACL}, {0xE0L, (-1L), 0xACL, (-1L), 0xE0L, (-1L), 0xACL}, {0xE0L, (-1L), 0xACL, (-1L), 0xE0L, (-1L), 0xACL}};
            unsigned short ****l_954 = &g_553;
            int *l_957 = &l_861;
            int i, j;
            (*g_26) &= p_3;
            (*g_504) ^= p_3;
            for (l_885 = 0; (l_885 <= 23); ++l_885)
            {
                unsigned char l_905 = 0x17L;
                int l_908 = 2L;
                (*g_326) |= 0x0C8872A3L;
                if ((*l_835))
                {
                    short ****l_891 = &g_784;
                    (*g_26) &= (&g_785 == ((*l_891) = (void*)0));
                }
                else
                {
                    unsigned char l_894 = 250UL;
                    int l_906 = 1L;
                    unsigned char *l_907 = &l_832;
                    if (p_3)
                        break;
                    for (g_83 = 6; (g_83 != 54); g_83++)
                    {
                        (*g_326) = (l_894 <= (*l_835));
                    }
                    (*l_886) = &g_192;
                    l_908 ^= 0L;
                }
                (*l_886) = (*l_886);
            }
            for (p_3 = 0; (p_3 <= 1); p_3 += 1)
            {
                unsigned l_921 = 8UL;
                unsigned char l_922[6][2] = {{0UL, 0x6DL}, {0UL, 0x6DL}, {0UL, 0x6DL}, {0UL, 0x6DL}, {0UL, 0x6DL}, {0UL, 0x6DL}};
                unsigned ***l_933[5][10] = {{&g_782, &g_782, &g_782, (void*)0, &g_782, &g_782, &g_782, &l_931, (void*)0, &l_931}, {&g_782, &g_782, &g_782, (void*)0, &g_782, &g_782, &g_782, &l_931, (void*)0, &l_931}, {&g_782, &g_782, &g_782, (void*)0, &g_782, &g_782, &g_782, &l_931, (void*)0, &l_931}, {&g_782, &g_782, &g_782, (void*)0, &g_782, &g_782, &g_782, &l_931, (void*)0, &l_931}, {&g_782, &g_782, &g_782, (void*)0, &g_782, &g_782, &g_782, &l_931, (void*)0, &l_931}};
                int l_938 = (-1L);
                unsigned char l_950 = 0xC9L;
                unsigned char ***l_953 = &g_235;
                unsigned char l_956 = 0x27L;
                int i, j;
            }
        }
        else
        {
            unsigned l_960 = 0x8DE2EDA4L;
            unsigned char ***l_974 = &g_235;
            unsigned l_982 = 0x8FC69040L;
            unsigned ***l_992[10] = {&g_989, &g_989, &g_989, &g_989, &g_989, &g_989, &g_989, &g_989, &g_989, &g_989};
            unsigned ****l_1000 = (void*)0;
            unsigned l_1004[8][2][6] = {{{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}, {{1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}, {1UL, 0xCC1DEAF8L, 0UL, 0x84D64483L, 0xD641A8E4L, 0x9A0BCC58L}}};
            int l_1024[6] = {1L, 1L, (-1L), 1L, 1L, (-1L)};
            char l_1025[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1025[i] = 1L;
            (*g_504) = func_32((*l_886), p_3);
            if ((0x63L < (**g_235)))
            {
                unsigned short l_975 = 0xC371L;
                int *l_976 = &g_27[6][5][1];
                short l_981 = 1L;
                unsigned *****l_987 = &l_986;
                unsigned ****l_991 = &g_988;
                unsigned ****l_994 = &l_992[7];
                unsigned char ***l_995 = &g_235;
                for (g_327 = 0; (g_327 != (-15)); g_327 = safe_sub_func_uint8_t_u_u(g_327, 3))
                {
                    unsigned short l_966 = 0x98B5L;
                    unsigned short l_967 = 0xB28DL;
                    (*g_26) = p_3;
                    if (l_960)
                    {
                        unsigned char l_961 = 0UL;
                        (*g_326) |= l_961;
                    }
                    else
                    {
                        int ***l_963 = &l_886;
                        if (l_962)
                            break;
                        (*l_963) = (void*)0;
                    }
                    for (g_192 = (-12); (g_192 != (-21)); g_192--)
                    {
                        int l_970 = 0x03117E2FL;
                        int *l_971[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int i;
                        l_966 = p_3;
                        if (l_967)
                            break;
                        (*g_504) = ((safe_mod_func_uint32_t_u_u(func_45((~((l_970 || (func_45(l_970, &g_59, l_971[2], p_3) > (*l_835))) <= (safe_add_func_int16_t_s_s(((void*)0 != l_974), (***g_784))))), l_971[2], &l_803[1], p_3), l_960)) | l_975);
                        (*g_26) = p_3;
                    }
                    return l_976;
                }
                for (g_73 = 16; (g_73 == 24); ++g_73)
                {
                    g_504 = &l_800;
                    (*g_504) &= ((*l_835) |= (1UL == func_32(l_976, (safe_add_func_uint16_t_u_u((l_981 = 1UL), (***g_784))))));
                    for (l_981 = 4; (l_981 != 14); l_981++)
                    {
                        int *l_985 = (void*)0;
                        return l_985;
                    }
                }
                g_507[3][5][1] = func_60((((((*l_987) = l_986) != (void*)0) ^ p_3) <= (((****g_580) &= (((*l_991) = g_988) != ((*l_994) = (l_993[0][4] = l_992[0])))) || (p_3 < p_3))), ((*g_97) &= ((*l_835) = (((void*)0 != l_995) >= p_3))), p_3);
                for (g_777 = 21; (g_777 != 29); g_777 = safe_add_func_uint16_t_u_u(g_777, 3))
                {
                    (*g_26) = p_3;
                    for (g_73 = 0; g_73 < 1; g_73 += 1)
                    {
                        for (g_327 = 0; g_327 < 10; g_327 += 1)
                        {
                            l_993[g_73][g_327] = (void*)0;
                        }
                    }
                    for (g_125 = 0; (g_125 >= (-14)); g_125--)
                    {
                        return &g_777;
                    }
                }
            }
            else
            {
                return (*l_886);
            }
            for (g_4 = 3; (g_4 >= 1); g_4 -= 1)
            {
                int l_1026 = 1L;
                int *l_1027[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1027[i] = (void*)0;
                if (p_3)
                    break;
                (*g_504) ^= 0xCB70D6EFL;
                for (l_982 = 0; (l_982 <= 2); l_982 += 1)
                {
                    unsigned ****l_1001 = (void*)0;
                    short l_1002 = 0x5F40L;
                    char **l_1005[10] = {&l_830[1][1], &l_830[5][9], &l_830[1][1], &l_830[5][9], &l_830[1][1], &l_830[5][9], &l_830[1][1], &l_830[5][9], &l_830[1][1], &l_830[5][9]};
                    int i;
                    (*l_886) = func_52(func_60(p_3, (l_1000 == l_1001), l_1002), (+((*g_236) = ((**g_447) || (l_982 == ((((l_1003 &= (&l_962 != &g_98[6])) > p_3) & p_3) | l_1004[6][0][2]))))), p_3);
                    (*l_835) = ((*g_989) == (**g_988));
                    l_1005[5] = l_1005[5];
                    for (p_3 = 0; (p_3 <= 4); p_3 += 1)
                    {
                        int l_1013 = 2L;
                        int i, j, k;
                        (*l_886) = &g_27[2][4][0];
                        (*g_326) ^= p_3;
                        (*g_504) = ((*g_326) = (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(p_3, ((((l_1010[2][1][4] = (void*)0) != l_801[l_982][l_982][p_3]) >= p_3) >= (***g_553)))), ((safe_mod_func_int8_t_s_s((l_1013 >= (func_32(&l_1013, ((((*g_97) | (((***g_784) = (safe_div_func_int8_t_s_s((g_831[(g_4 + 1)][g_4] &= (l_1002 ^ (***g_553))), p_3))) < (-9L))) <= (*l_835)) != 0x0EL)) <= l_960)), 5L)) == l_1016))));
                        return &g_284;
                    }
                }
                (*g_504) = ((((**g_447) = p_3) < 1UL) || (((((safe_sub_func_int8_t_s_s(1L, (safe_lshift_func_int16_t_s_s(p_3, 0)))) == ((safe_div_func_int32_t_s_s(((**g_447) ^ (l_1025[1] = (l_1024[2] = l_1023))), (**g_989))) >= (p_3 <= (p_3 | l_1026)))) > 7L) != 0x8AL) < p_3));
                for (l_832 = 0; (l_832 <= 2); l_832 += 1)
                {
                    int *l_1029 = &l_803[1];
                    for (l_982 = 0; (l_982 <= 2); l_982 += 1)
                    {
                        (*l_886) = (void*)0;
                        (*g_504) = 0x757E82BDL;
                    }
                    l_1024[2] |= (*g_326);
                    (*l_886) = l_1027[0];
                    for (g_192 = 1; (g_192 <= 9); g_192 += 1)
                    {
                        int *l_1028[9][3][7] = {{{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}, {{&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}, {&l_932[2], &g_27[4][7][0], &g_327, &l_1024[2], &g_327, &l_803[2], &l_861}}};
                        int i, j, k;
                        (*l_886) = &l_803[3];
                        l_1029 = l_1028[2][2][5];
                    }
                }
            }
        }
        (*g_326) = ((safe_lshift_func_uint8_t_u_s((*g_236), (*g_97))) != ((*l_1044) = (((***g_553) = (l_1032 != l_1033)) || (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(p_3, ((p_3 && (safe_add_func_int16_t_s_s(((*g_990) ^ ((void*)0 != &g_27[4][7][0])), l_1042))) || 0xF6D3A95DL))) ^ (***g_553)), (*l_835))), 9)))));
    }
    else
    {
        unsigned **l_1059 = &g_783[2];
        int l_1065 = 0x4B83CA26L;
        unsigned l_1068 = 0x1292B460L;
        int *l_1131 = &g_284;
        for (l_861 = 22; (l_861 != 4); l_861--)
        {
            int l_1048 = 0x83AB456DL;
            int *l_1049 = &l_800;
            for (g_59 = 8; (g_59 >= 0); g_59 -= 1)
            {
                int l_1047 = 0x3D2A52C9L;
                int l_1060 = 1L;
                int l_1069 = (-1L);
                int l_1070 = (-9L);
                unsigned **l_1075[7][5] = {{&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}, {&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}, {&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}, {&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}, {&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}, {&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}, {&g_783[1], &g_783[2], (void*)0, &g_783[2], &g_783[1]}};
                short l_1080[9] = {0x42EEL, 0x42EEL, 1L, 0x42EEL, 0x42EEL, 1L, 0x42EEL, 0x42EEL, 1L};
                int l_1085 = (-4L);
                int i, j;
                for (g_203 = 0; (g_203 <= 8); g_203 += 1)
                {
                    l_1048 = l_1047;
                    for (l_832 = 1; (l_832 <= 8); l_832 += 1)
                    {
                        int **l_1050 = (void*)0;
                        int **l_1051 = (void*)0;
                        int **l_1052 = &g_504;
                        short ****l_1058 = &g_784;
                        short *****l_1057 = &l_1058;
                        (*l_1052) = (l_1049 = (void*)0);
                        l_1060 = (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((*l_1057) = &g_784) != &g_784), p_3)), ((*g_781) != (l_1059 = (void*)0))));
                    }
                }
                for (g_83 = 0; (g_83 <= 1); g_83 += 1)
                {
                    int *l_1074 = &g_59;
                    int i, j, k;
                    (*g_326) &= (0x262954ADL != (l_1060 ^= g_123[g_83][(g_83 + 2)][(g_83 + 1)]));
                    if ((((p_3 != p_3) | (l_1070 ^= (l_1069 ^= (p_3 ^ (safe_add_func_uint8_t_u_u((((l_1060 && (g_98[(g_83 + 4)] = (((l_1060 = (safe_div_func_int32_t_s_s(p_3, 0x9FAF291EL))) ^ (l_1065 || l_1065)) | (safe_div_func_int16_t_s_s((l_1047 | 0x7F03L), p_3))))) < 9L) || l_1068), 0xE6L)))))) >= 0xA17E96ECL))
                    {
                        unsigned char ***l_1073[6][6] = {{&g_235, &g_235, &g_235, &g_235, &g_235, &g_235}, {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235}, {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235}, {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235}, {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235}, {&g_235, &g_235, &g_235, &g_235, &g_235, &g_235}};
                        int i, j;
                        (*g_240) = ((~(((0x4BL == func_45(((safe_add_func_uint16_t_u_u((&g_235 == (g_321 = l_1073[0][1])), g_98[(g_83 + 4)])) & p_3), &l_1070, l_1074, ((&g_239[7][0] == &l_1049) < l_1068))) && 9UL) | l_1047)) || p_3);
                        l_1065 = ((*g_240) = p_3);
                    }
                    else
                    {
                        int *l_1081[5][6][2] = {{{&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}}, {{&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}}, {{&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}}, {{&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}}, {{&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}, {&l_1065, &g_27[4][7][0]}}};
                        int **l_1082 = &l_1081[0][0][1];
                        int i, j, k;
                        l_1065 = (((**l_986) = (*g_781)) == l_1075[0][3]);
                        l_1080[8] = ((*g_326) = ((*g_240) = (safe_add_func_int16_t_s_s(l_1068, (safe_rshift_func_uint8_t_u_u(p_3, 3))))));
                        (*l_1082) = l_1081[0][0][1];
                        l_1065 ^= (+(safe_mod_func_int8_t_s_s(1L, p_3)));
                    }
                    if (func_32(&g_777, (p_3 <= (((***g_988) < l_1085) < ((***g_555) = (safe_lshift_func_int8_t_s_u(((*g_97) = 0x74L), 5)))))))
                    {
                        if (l_1065)
                            break;
                        return &g_284;
                    }
                    else
                    {
                        l_1070 = l_1047;
                        (*g_326) = p_3;
                    }
                    (*g_326) = (safe_rshift_func_uint8_t_u_s((255UL <= (l_1047 ^ (((func_45((**g_447), &l_803[6], &l_1065, ((safe_add_func_int8_t_s_s((*g_97), p_3)) > (safe_lshift_func_uint8_t_u_s(func_32(&l_1065, l_1065), 0)))) != 0UL) | (*l_1074)) < (*l_1074)))), 3));
                }
            }
            for (l_1048 = 1; (l_1048 <= 5); l_1048 += 1)
            {
                (*g_26) = ((*g_326) = (0x768C57A9L ^ 0xA65068BFL));
            }
        }
        for (g_327 = 15; (g_327 == 16); g_327 = safe_add_func_uint32_t_u_u(g_327, 6))
        {
            int l_1104 = 5L;
            int l_1105 = 0x9BB50102L;
            if (p_3)
                break;
            l_1105 |= (safe_div_func_int8_t_s_s(p_3, (func_39(p_3, l_1068, &g_777) || (~(((****l_887) = (p_3 & (0xFF778FA5L < (safe_div_func_uint8_t_u_u(func_39(p_3, ((***g_553) = ((safe_rshift_func_int16_t_s_s(func_39((safe_sub_func_uint16_t_u_u((func_32(func_52(&g_327, p_3, p_3), l_1104) && 0x67086844L), l_1104)), l_1104, &l_1065), 11)) == l_1068)), &g_777), 0x9DL))))) != 1UL)))));
            for (g_101 = (-29); (g_101 > 45); ++g_101)
            {
                int **l_1108 = &g_26;
                (*l_1108) = &l_861;
                for (l_962 = 0; (l_962 <= 8); l_962 += 1)
                {
                    if (l_1105)
                        break;
                }
            }
        }
        (*g_26) ^= (*g_240);
        for (g_797 = 0; (g_797 < 8); g_797++)
        {
            int *l_1122 = &g_27[5][6][1];
            int l_1130 = (-8L);
            if (p_3)
            {
                return &g_59;
            }
            else
            {
                int **l_1111[8][1] = {{&g_240}, {&g_240}, {&g_240}, {&g_240}, {&g_240}, {&g_240}, {&g_240}, {&g_240}};
                int i, j;
                g_239[3][1] = (void*)0;
                g_239[7][0] = (g_507[3][5][1] = &g_284);
                for (g_192 = 0; (g_192 < 16); g_192 = safe_add_func_int32_t_s_s(g_192, 6))
                {
                    unsigned l_1127[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1127[i] = 0x485F603BL;
                    for (g_189 = 0; (g_189 < 33); g_189 = safe_add_func_int16_t_s_s(g_189, 2))
                    {
                        unsigned short *l_1121 = &g_101;
                        int *l_1123 = &g_59;
                        l_1123 = func_60((safe_rshift_func_int8_t_s_u(((***g_321) | 0xB2L), 3)), (!(((p_3 ^ 0xB0L) >= (l_1118 = (-1L))) & (safe_div_func_int32_t_s_s((func_45(p_3, func_60((*g_97), (*g_97), func_45(((*l_1121) = ((***g_555) &= (0xEDB0C766L > 1L))), l_1122, &g_192, p_3)), &l_800, l_1065) < l_1065), p_3)))), (*g_97));
                    }
                    if (((*g_26) = (l_1124 && ((p_3 && (((safe_mod_func_uint16_t_u_u(l_1065, (l_1127[0] & ((((*l_1122) == ((safe_div_func_uint16_t_u_u((***g_553), (~(l_1130 ^= l_1127[0])))) || ((***g_988) && 0x70851FA2L))) >= 3L) == p_3)))) == (****g_580)) == p_3)) ^ l_1068))))
                    {
                        (*g_26) = ((+(l_1065 = 3UL)) < 0x20B0L);
                    }
                    else
                    {
                        if (l_1068)
                            break;
                        l_1131 = (g_670 = func_60(p_3, p_3, ((*l_1122) |= (*g_97))));
                    }
                    (*g_26) |= (l_1127[0] && (-1L));
                }
            }
            (*g_326) |= p_3;
            for (g_189 = (-5); (g_189 == 33); g_189 = safe_add_func_int32_t_s_s(g_189, 8))
            {
                unsigned l_1134 = 4294967295UL;
                if (l_1134)
                    break;
            }
        }
    }
    (*g_326) ^= (0L && (p_3 || p_3));
    return &g_27[4][7][0];
}







static unsigned char func_21(int * p_22, char p_23)
{
    unsigned char l_804 = 1UL;
    unsigned short *l_818 = &g_163[6];
    unsigned short **l_819 = &l_818;
    unsigned short *l_820 = &g_163[4];
    int l_823 = 0L;
    int *l_828 = &g_327;
    unsigned l_829 = 9UL;
    (*g_326) &= (0x9B8FL == (((l_804 >= (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_804, (g_116 && (0xAD47531DL && (*p_22))))), (safe_add_func_uint16_t_u_u(((((*l_819) = ((*g_447) = l_818)) == l_820) != (safe_add_func_uint16_t_u_u(p_23, l_804))), l_823)))), (*g_240))))) >= p_23) == p_23), 0x6C31707BL)), (**g_785)))) ^ 0xE8L) > (**g_235)));
    (*p_22) = ((*g_240) = (((safe_lshift_func_uint8_t_u_s(((*g_236) = func_45((safe_mod_func_uint16_t_u_u((&g_321 != (void*)0), (l_823 = (**g_785)))), &g_192, l_828, (((*g_97) &= 0x9AL) ^ ((*g_236) |= (*l_828))))), (*l_828))) >= l_829) != (***g_784)));
    return (*g_236);
}







static int * func_24(int * p_25)
{
    char l_652 = 0x70L;
    char l_672 = 0xB1L;
    int *l_678 = &g_327;
    unsigned *l_752 = &g_512[0][0][1];
    unsigned char l_755[10] = {248UL, 1UL, 248UL, 1UL, 248UL, 1UL, 248UL, 1UL, 248UL, 1UL};
    unsigned ***l_780 = (void*)0;
    int i;
    for (g_4 = (-26); (g_4 < 4); g_4++)
    {
        int l_43[9][5] = {{6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}, {6L, (-9L), 0xE20B395BL, 0x3DB47DC4L, (-10L)}};
        int i, j;
    }
    for (g_203 = 0; (g_203 <= 43); g_203 = safe_add_func_uint8_t_u_u(g_203, 2))
    {
        unsigned l_656 = 0UL;
        short *l_657 = &g_125;
        (*g_555) = (**g_580);
        (*g_326) &= ((l_656 != ((*l_657) &= l_656)) == l_652);
    }
    for (g_75 = 5; (g_75 >= 0); g_75 -= 1)
    {
        unsigned *l_662 = &g_73;
        unsigned **l_661 = &l_662;
        short **l_674 = (void*)0;
        short ***l_673 = &l_674;
        int *l_705[4][2][6] = {{{&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}, {&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}}, {{&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}, {&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}}, {{&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}, {&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}}, {{&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}, {&g_27[4][7][0], &g_59, &g_284, &g_27[5][4][1], &g_327, &g_284}}};
        int *l_718 = &g_192;
        unsigned l_753 = 4294967290UL;
        int i, j, k;
        if ((func_32(&g_192, g_98[(g_75 + 2)]) & l_652))
        {
            short **l_659 = (void*)0;
            short ***l_658 = &l_659;
            for (g_327 = 7; (g_327 >= 0); g_327 -= 1)
            {
                for (l_652 = 0; (l_652 <= 8); l_652 += 1)
                {
                    return &g_59;
                }
            }
            (*l_658) = &g_318[0][3][4];
        }
        else
        {
            int *l_660 = &g_27[4][7][0];
            unsigned **l_664 = (void*)0;
            short ***l_675 = &l_674;
            short l_681 = (-10L);
            unsigned l_726 = 5UL;
            int *l_754 = &g_27[4][7][0];
            if ((*p_25))
                break;
            if (((&g_27[3][7][1] == l_660) > (*p_25)))
            {
                int l_666 = 0xD52414BAL;
                int l_668 = 1L;
                short ****l_676[4][2] = {{&l_675, &l_675}, {&l_675, &l_675}, {&l_675, &l_675}, {&l_675, &l_675}};
                int i, j;
                if ((*p_25))
                {
                    unsigned ***l_663[10][8] = {{&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}, {&l_661, &l_661, &l_661, &l_661, &l_661, &l_661, &l_661, (void*)0}};
                    int i, j;
                    l_664 = l_661;
                    if ((*p_25))
                        continue;
                }
                else
                {
                    unsigned l_667[6][9][4] = {{{0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}}, {{0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}}, {{0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}}, {{0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}}, {{0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}}, {{0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}, {0xF0044B4BL, 0x9D456FE0L, 0x74F20061L, 0UL}}};
                    int i, j, k;
                    for (g_73 = 0; (g_73 <= 8); g_73 += 1)
                    {
                        (*g_504) = ((safe_unary_minus_func_int16_t_s(l_666)) == l_652);
                    }
                    l_667[2][0][2] = (*l_660);
                    l_668 &= (l_666 != (*l_660));
                    for (g_101 = 0; (g_101 <= 8); g_101 += 1)
                    {
                        int **l_669 = &g_239[3][1];
                        (*l_669) = &g_27[1][7][1];
                        (*l_669) = &g_27[0][1][1];
                    }
                }
                l_672 &= (((((func_45(g_98[(g_75 + 2)], g_670, p_25, g_101) | (0L <= (*p_25))) <= l_652) ^ (safe_unary_minus_func_uint16_t_u(l_666))) | 0x417EC245L) == (*g_97));
                (*p_25) &= g_98[(g_75 + 2)];
                if ((((*l_660) = ((l_668 & 5L) > (l_673 == (l_675 = l_675)))) || (0xE798L && 0UL)))
                {
                    (*g_504) = (*p_25);
                }
                else
                {
                    (*g_504) &= 0xBFD057ABL;
                    for (g_59 = 2; (g_59 <= 8); g_59 += 1)
                    {
                        int **l_677[8] = {&g_507[8][6][1], &g_239[3][1], &g_507[8][6][1], &g_239[3][1], &g_507[8][6][1], &g_239[3][1], &g_507[8][6][1], &g_239[3][1]};
                        int i;
                        l_678 = p_25;
                    }
                }
            }
            else
            {
                unsigned l_682 = 0x13F96033L;
                int *l_688 = (void*)0;
                unsigned char ****l_714 = (void*)0;
                for (g_125 = 8; (g_125 >= 1); g_125 -= 1)
                {
                    char l_683 = 0x27L;
                    unsigned short ***l_704 = &g_447;
                    int **l_706[7][1] = {{&l_705[2][0][2]}, {&l_705[2][0][2]}, {&l_705[2][0][2]}, {&l_705[2][0][2]}, {&l_705[2][0][2]}, {&l_705[2][0][2]}, {&l_705[2][0][2]}};
                    int i, j;
                }
                for (g_203 = 0; (g_203 <= 8); g_203 += 1)
                {
                    if ((safe_lshift_func_uint16_t_u_s((~(*l_678)), 3)))
                    {
                        int **l_709 = &g_507[0][5][0];
                        (*l_709) = &g_27[3][5][0];
                        g_239[3][1] = ((*l_709) = l_660);
                        return &g_327;
                    }
                    else
                    {
                        unsigned *l_711 = &g_6[0];
                        unsigned **l_710[1];
                        unsigned ***l_712 = &l_710[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_710[i] = &l_711;
                        (*l_712) = l_710[0];
                        return p_25;
                    }
                }
                for (g_189 = 0; (g_189 <= 8); g_189 += 1)
                {
                    int **l_713 = &g_507[3][5][1];
                    (*l_713) = &g_27[4][7][0];
                }
                if ((*g_240))
                {
                    unsigned char *****l_715 = &g_320;
                    int l_719[7][2][6] = {{{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}, {{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}, {{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}, {{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}, {{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}, {{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}, {{0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}, {0L, 1L, 0L, 0xCCF53FAAL, 9L, 0L}}};
                    int *l_738[10][6] = {{&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}, {&g_284, (void*)0, &g_284, (void*)0, (void*)0, &g_284}};
                    unsigned *l_750 = &g_189;
                    unsigned **l_751[8] = {&l_750, &l_750, &l_750, &l_750, &l_750, &l_750, &l_750, &l_750};
                    int i, j, k;
                    if ((0xADAEL > ((***g_555) &= (l_714 == ((*l_715) = (void*)0)))))
                    {
                        (*p_25) = (&g_321 != &g_321);
                    }
                    else
                    {
                        int l_716[9][7][4] = {{{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}, {{(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}, {(-5L), 0xA00538D2L, 0L, 0x7B73C8A6L}}};
                        int **l_717[10][6] = {{&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}, {&g_504, &l_705[0][0][2], &g_239[8][3], (void*)0, &g_507[4][7][1], &g_507[4][7][1]}};
                        int i, j, k;
                        if (l_716[3][1][1])
                            break;
                        l_718 = p_25;
                        l_719[0][1][4] = (*g_26);
                        (*g_240) = ((*p_25) <= ((safe_div_func_uint16_t_u_u(func_45((*l_678), p_25, l_660, g_27[0][0][1]), (+((safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s(((*l_660) > l_726), (**g_235))) || (****g_580)), 0x7B213B93L)) < (*l_678))))) > (*g_97)));
                    }
                    for (l_726 = 0; (l_726 <= 8); l_726 += 1)
                    {
                        unsigned *l_736 = (void*)0;
                        unsigned **l_735 = &l_736;
                        int l_737 = 0L;
                        int **l_739 = &g_507[3][5][1];
                        int i;
                        (*g_240) &= func_45(((*p_25) < ((2L ^ (g_98[(g_75 + 2)] = ((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((*p_25), ((safe_div_func_int16_t_s_s(((*p_25) ^ ((safe_add_func_uint16_t_u_u((****g_580), ((***g_553) < ((void*)0 != l_735)))) == func_45(l_719[0][1][4], p_25, &g_59, g_75))), l_737)) != 9UL))) ^ (*l_678)), 7)) ^ 0L) <= 255UL) & (*l_660)))) >= (*p_25))), l_678, l_738[2][5], (*l_660));
                        (*l_739) = l_660;
                    }
                    (*g_326) ^= (safe_sub_func_uint16_t_u_u(((*g_321) == (void*)0), ((****g_580) = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(0xB7E2L, (*l_678))), ((func_45((safe_rshift_func_int16_t_s_s((((*g_97) = (safe_mod_func_uint32_t_u_u(l_682, ((*g_504) = ((*g_240) &= ((l_752 = l_750) == &g_189)))))) & func_45((*l_678), p_25, p_25, g_692[5])), l_753)), l_754, &g_284, l_755[7]) & (*l_754)) || (*l_678)))))));
                }
                else
                {
                    unsigned l_766 = 0UL;
                    if (((*l_718) |= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(g_83, ((*l_678) && 0x9AD5L))) > ((safe_div_func_int32_t_s_s(((*l_660) > ((safe_mod_func_uint16_t_u_u(func_32(&g_327, (*g_326)), (**g_447))) != ((0xF5A7C87EL > (*l_754)) ^ 0x56FA021AL))), 1L)) | l_766)), (*l_678))), 11))))
                    {
                        (*g_504) = (((safe_add_func_uint16_t_u_u((***g_555), (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((l_766 && 0L), (*l_678))), (safe_sub_func_uint16_t_u_u(0x8F57L, l_766)))))) < g_777) < (func_45((safe_div_func_uint16_t_u_u((l_780 != g_781), (-6L))), &g_27[4][7][0], l_660, (***g_781)) != l_766));
                        (*l_678) = ((*g_240) |= ((*g_26) = func_32(p_25, (*p_25))));
                        if ((*l_660))
                            continue;
                    }
                    else
                    {
                        (*l_718) = ((void*)0 == g_784);
                        return &g_27[5][4][0];
                    }
                    for (g_777 = 0; (g_777 < 1); g_777 = safe_add_func_uint8_t_u_u(g_777, 3))
                    {
                        char l_790 = (-6L);
                        int *l_791 = &g_27[4][7][0];
                        (*g_240) = (*l_718);
                        (*l_754) = ((l_766 | (safe_add_func_uint8_t_u_u(((((*l_661) = &g_73) != p_25) || func_45(((**g_785) ^ (!l_790)), l_678, l_791, (*l_791))), (*g_97)))) > 0x3CL);
                    }
                }
            }
        }
    }
    (*p_25) = 0x7E000D84L;
    return l_678;
}







static short func_32(int * p_33, int p_34)
{
    short l_653 = 0x8E12L;
    (*g_326) = l_653;
    return l_653;
}







static int * func_35(unsigned p_36, unsigned p_37, unsigned p_38)
{
    int *l_205 = &g_192;
    int **l_206[7][9] = {{&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}, {&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}, {&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}, {&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}, {&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}, {&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}, {&l_205, &l_205, (void*)0, (void*)0, (void*)0, &g_26, &l_205, &l_205, &g_26}};
    char *l_207 = &g_75;
    int *l_208 = &g_59;
    short l_232[8] = {1L, 0xE8E8L, 1L, 0xE8E8L, 1L, 0xE8E8L, 1L, 0xE8E8L};
    char l_281 = 0x01L;
    unsigned char ****l_324 = &g_321;
    unsigned short *l_412 = (void*)0;
    unsigned char l_446 = 0x83L;
    short **l_585 = (void*)0;
    short ***l_584 = &l_585;
    unsigned *l_634 = &g_512[0][0][1];
    unsigned **l_633 = &l_634;
    unsigned char l_650 = 9UL;
    int i, j;
    g_26 = l_205;
    g_209 = (l_208 = func_60((*g_97), ((*l_207) = p_37), p_37));
    for (g_189 = 0; (g_189 <= 6); g_189 += 1)
    {
        int *l_213[9] = {&g_27[4][7][0], &g_27[4][7][0], (void*)0, &g_27[4][7][0], &g_27[4][7][0], (void*)0, &g_27[4][7][0], &g_27[4][7][0], (void*)0};
        unsigned l_217 = 0x89D17400L;
        int i;
        (*l_205) |= ((*g_209) = (g_163[g_189] ^ 0xF6FAL));
        for (g_83 = 2; (g_83 <= 6); g_83 += 1)
        {
            unsigned char *l_210 = (void*)0;
            int i, j;
        }
        if (((p_38 = p_36) & ((*g_26) |= (*l_205))))
        {
            int *l_228[9];
            int i;
            for (i = 0; i < 9; i++)
                l_228[i] = &g_27[4][7][0];
            if (func_45((g_98[1] | g_6[1]), &g_59, func_60(p_38, (g_6[1] & (safe_rshift_func_int16_t_s_s(l_217, 13))), (*g_97)), (safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0xA4L, 6)), 4294967289UL)) > 3L), p_38))))))
            {
                int *l_229[5] = {&g_27[4][7][1], &g_27[1][7][0], &g_27[4][7][1], &g_27[1][7][0], &g_27[4][7][1]};
                int *l_264 = &g_192;
                int i;
                if ((safe_rshift_func_int8_t_s_u(p_38, (&g_26 != (void*)0))))
                {
                    int *l_227 = &g_27[4][7][0];
                    if ((*g_26))
                    {
                        l_228[0] = l_227;
                    }
                    else
                    {
                        l_227 = (l_229[3] = l_229[2]);
                        if (p_38)
                            continue;
                        l_213[5] = l_227;
                    }
                }
                else
                {
                    for (p_36 = 19; (p_36 < 20); p_36 = safe_add_func_uint16_t_u_u(p_36, 4))
                    {
                        if (p_36)
                            break;
                        (*l_205) &= 1L;
                        if (p_36)
                            break;
                    }
                }
                if ((*g_26))
                {
                    int l_241 = 0x78AA5749L;
                    int *l_263 = &g_192;
                    g_209 = func_52(l_229[2], p_37, l_232[6]);
                    for (g_125 = 0; (g_125 <= 6); g_125 += 1)
                    {
                        unsigned char ***l_237 = &g_235;
                        int l_238 = 0x65C70F8AL;
                        (*l_208) = (safe_lshift_func_int16_t_s_u((((*l_237) = g_235) == &g_236), (l_238 < (*g_97))));
                        g_240 = (g_239[3][1] = (g_26 = (g_209 = &g_59)));
                        return l_213[2];
                    }
                    l_213[2] = (void*)0;
                    if (l_241)
                    {
                        unsigned short *l_260 = &g_101;
                        int *l_261 = &g_27[0][2][0];
                        short *l_262[8][10];
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_262[i][j] = &l_232[2];
                        }
                        (*l_205) = (1L & (safe_lshift_func_int8_t_s_s((p_36 != (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(252UL, 5)) > ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*l_261) = ((safe_sub_func_int16_t_s_s(g_73, 65528UL)) != (func_45((safe_sub_func_uint16_t_u_u(((*l_260) = l_241), g_59)), (g_209 = &g_27[4][7][0]), l_261, p_37) != (*g_236)))), p_37)), g_116)), g_6[3])) && p_38)), 0xC7B2L))), 5)));
                        if (p_36)
                            continue;
                        (*g_26) = l_241;
                        return l_263;
                    }
                    else
                    {
                        l_228[5] = l_264;
                    }
                }
                else
                {
                    if ((*g_240))
                        break;
                }
                (*l_205) = (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((0x209CL > (safe_div_func_int8_t_s_s(p_38, (g_125 && g_203)))), (safe_add_func_uint16_t_u_u(((!(safe_div_func_int8_t_s_s(p_36, ((*g_97) = 1L)))) && g_59), func_45(g_27[6][0][1], l_228[0], &g_27[3][2][0], p_38))))), p_38));
            }
            else
            {
                int *l_276 = &g_192;
                short *l_285 = &g_125;
                (*g_209) ^= (p_38 <= func_45((safe_unary_minus_func_uint8_t_u(0x94L)), &g_192, l_276, g_101));
                (*g_209) = ((*g_240) = (((*g_209) <= func_45((0x0AL < ((*g_240) ^ ((safe_mod_func_int16_t_s_s((((*l_285) = ((safe_div_func_int32_t_s_s(p_38, ((((l_281 = g_163[0]) & (!(*l_276))) > func_45(func_45((safe_add_func_uint8_t_u_u((p_38 == (~(((*l_207) = p_38) == g_284))), (*l_276))), &g_192, &g_284, p_37), l_213[2], l_213[2], p_38)) || (*g_97)))) | 4UL)) ^ g_116), g_101)) || p_37))), l_276, &g_59, g_27[2][7][1])) | p_38));
            }
            return l_228[3];
        }
        else
        {
            return l_213[2];
        }
    }
    if (p_38)
    {
        unsigned short l_296 = 0UL;
        int l_309 = (-9L);
        int *l_312 = &g_192;
        int *l_361[9][8][3] = {{{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}, {{&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}, {&g_59, (void*)0, (void*)0}}};
        int *l_392 = &g_27[1][7][0];
        unsigned char ***l_423 = (void*)0;
        short **l_431 = (void*)0;
        short *l_460 = &l_232[6];
        int *l_533 = (void*)0;
        int i, j, k;
        for (g_73 = 14; (g_73 <= 5); g_73 = safe_sub_func_int16_t_s_s(g_73, 9))
        {
            unsigned *l_292 = (void*)0;
            unsigned *l_293 = &g_83;
            int l_297 = (-10L);
            short *l_298 = &l_232[4];
            int l_310 = 0xBDD129D9L;
            int *l_311 = &l_310;
            int *l_325 = &g_192;
            unsigned short *l_411[3][7] = {{&g_163[4], (void*)0, &g_163[4], (void*)0, (void*)0, &g_163[4], (void*)0}, {&g_163[4], (void*)0, &g_163[4], (void*)0, (void*)0, &g_163[4], (void*)0}, {&g_163[4], (void*)0, &g_163[4], (void*)0, (void*)0, &g_163[4], (void*)0}};
            unsigned short **l_410 = &l_411[1][5];
            unsigned short **l_413[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_413[i] = (void*)0;
        }
        if (p_36)
        {
            unsigned char ***l_424 = &g_235;
            int l_425[9] = {0x1C8532F7L, 0x1C8532F7L, 0x87E986DFL, 0x1C8532F7L, 0x1C8532F7L, 0x87E986DFL, 0x1C8532F7L, 0x1C8532F7L, 0x87E986DFL};
            int l_432 = 0L;
            int i;
            if ((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((((g_197[1][0][6] < ((safe_mod_func_uint8_t_u_u((*l_208), 0xE8L)) == ((*g_240) < ((safe_sub_func_uint16_t_u_u(g_6[1], ((((*l_324) = l_423) == (l_424 = &g_235)) >= ((*l_207) = ((*g_97) = p_36))))) && ((0x37BFL & (*l_312)) == p_38))))) | l_425[7]) < 1UL) && p_37), 0x0DDEL)), g_6[1])))
            {
                short **l_430 = &g_318[0][1][5];
                int l_439[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_439[i] = 0xF8428E9EL;
                for (g_59 = 0; (g_59 != 29); ++g_59)
                {
                    unsigned l_433 = 0xA993EE35L;
                    unsigned *l_444 = &g_83;
                    char l_445 = (-8L);
                    (*l_205) = (*g_209);
                    (*l_312) ^= (*g_26);
                    if ((safe_mod_func_int32_t_s_s((l_430 != l_431), ((p_38 != p_38) | p_37))))
                    {
                        l_432 = 0x9ABD4E39L;
                        l_433 ^= (*g_26);
                    }
                    else
                    {
                        g_239[3][2] = &g_27[4][7][0];
                    }
                    if (func_45((p_37 || func_45((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u((65532UL < (1L != l_439[0])))) <= (1UL >= (safe_rshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((void*)0 == l_444), (func_45(g_75, l_444, &g_327, p_38) | p_38))) & l_445) | l_446), 5)))), g_98[0])), &l_432, &g_27[2][5][1], g_75)), l_444, &l_309, p_38))
                    {
                        unsigned short ***l_449 = &g_447;
                        (*l_205) = p_38;
                        (*l_449) = g_447;
                    }
                    else
                    {
                        unsigned char l_454 = 7UL;
                        l_432 = ((safe_lshift_func_uint8_t_u_s(l_445, 4)) ^ (((safe_div_func_uint8_t_u_u((0UL > l_439[0]), l_439[0])) == l_454) || p_36));
                    }
                }
                (*g_240) = (safe_lshift_func_uint8_t_u_s(func_39((*l_208), p_38, &g_284), 3));
            }
            else
            {
                int *l_461 = &g_27[2][2][1];
                for (p_36 = 5; (p_36 >= 29); p_36 = safe_add_func_uint8_t_u_u(p_36, 8))
                {
                    unsigned short *l_459[9][6][4] = {{{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}, {{&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}, {&g_163[6], &g_163[2], &l_296, &g_163[2]}}};
                    int *l_464 = (void*)0;
                    int i, j, k;
                    if (((g_75 | (((void*)0 == l_459[6][5][1]) | func_45(((l_460 != (void*)0) != p_37), &g_192, l_461, (safe_lshift_func_int8_t_s_s(0xCDL, 3))))) == (-9L)))
                    {
                        l_312 = l_464;
                        if (p_36)
                            break;
                        l_461 = &g_27[3][5][0];
                        if (p_38)
                            break;
                    }
                    else
                    {
                        l_464 = &l_432;
                    }
                }
            }
        }
        else
        {
            unsigned char ****l_473 = &g_321;
            int *l_477 = &l_309;
            unsigned *l_513 = &g_83;
            unsigned short *l_514 = (void*)0;
            unsigned short *l_515 = &g_101;
            unsigned *l_516[3];
            int i;
            for (i = 0; i < 3; i++)
                l_516[i] = &g_73;
            for (p_38 = (-25); (p_38 != 3); p_38++)
            {
                short l_472[3][2];
                int *l_506 = &g_327;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_472[i][j] = (-1L);
                }
                for (g_73 = 0; (g_73 < 34); g_73 = safe_add_func_int32_t_s_s(g_73, 4))
                {
                    for (g_125 = 0; (g_125 <= (-30)); --g_125)
                    {
                        int *l_471[10] = {&g_284, &g_327, &g_284, &g_327, &g_284, &g_327, &g_284, &g_327, &g_284, &g_327};
                        int i;
                        (*l_208) |= ((g_326 = &g_192) != l_471[0]);
                        if (l_472[0][1])
                            break;
                    }
                    (*g_240) = ((l_473 = &l_423) == &g_321);
                    for (g_284 = 0; (g_284 >= (-27)); g_284--)
                    {
                        int *l_476 = &g_192;
                        l_361[4][6][1] = l_476;
                        l_312 = l_477;
                        (*l_392) &= (-1L);
                        if (p_38)
                            continue;
                    }
                }
                for (g_101 = 19; (g_101 >= 47); g_101++)
                {
                    int *l_480 = &g_27[0][2][1];
                    (*l_477) = func_45((*l_312), l_480, &g_327, p_37);
                    (*g_240) = l_472[0][1];
                    (*l_205) = (-1L);
                    if ((*g_326))
                        continue;
                }
                for (l_296 = 0; (l_296 <= 25); l_296 = safe_add_func_int8_t_s_s(l_296, 2))
                {
                    char l_483 = 0x6DL;
                    unsigned char *l_484 = &l_446;
                    unsigned short *l_505 = &g_101;
                    (*l_205) = (((*l_484) |= (((*g_236) && l_483) >= p_37)) || (safe_add_func_uint16_t_u_u((((**g_447) == l_472[0][1]) >= ((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((*g_97) = (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u((func_45((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((*l_505) = ((*l_477) | (((((safe_div_func_uint8_t_u_u((func_45((*l_392), g_504, &g_27[4][7][0], p_38) >= g_125), 0x80L)) != (*l_477)) > p_37) > (*g_504)) & 0x2DL))), (*l_477))) == p_38), 13)), 4)), l_506, l_506, p_38) ^ g_284), 0xF0BAL))))), l_483)) <= (*l_208)), 0x94B10454L)) <= p_37), (*l_312))) >= p_38)), l_483)));
                }
                return g_507[3][5][1];
            }
            (*l_312) ^= (((void*)0 == &p_38) ^ (*l_392));
            (*g_240) &= ((*g_326) |= ((*g_504) ^ (0x4A1BEA8EL && (g_73 = (safe_rshift_func_uint16_t_u_s(((*l_515) = ((((*l_513) &= ((p_36 ^ 0xA3A10FEBL) & (safe_mod_func_int32_t_s_s(((+8L) && (((**g_447) = g_512[0][0][1]) || (p_36 | (p_37 & ((p_37 > p_37) && 4294967287UL))))), 0x6A719317L)))) || 0x76D6071CL) && p_38)), p_36))))));
            for (g_203 = 7; (g_203 == 39); g_203 = safe_add_func_uint32_t_u_u(g_203, 2))
            {
                if ((*l_477))
                {
                    return &g_59;
                }
                else
                {
                    return &g_284;
                }
            }
        }
        (*l_208) = ((void*)0 == &l_423);
        for (g_75 = 0; (g_75 > 22); g_75 = safe_add_func_int16_t_s_s(g_75, 6))
        {
            unsigned l_527[6][3][1] = {{{0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}}};
            short *l_530 = &g_125;
            char l_558 = 0xCBL;
            unsigned l_565[4];
            int *l_569 = &g_327;
            unsigned char l_577 = 0xE4L;
            int l_578[8] = {4L, 4L, 0xFE3DED2DL, 4L, 4L, 0xFE3DED2DL, 4L, 4L};
            unsigned char ***l_608 = &g_235;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_565[i] = 0xD370E5B0L;
            if (((((*l_205) & p_37) <= ((safe_lshift_func_int16_t_s_s(((*l_460) = 0x7B39L), ((*l_530) &= func_45((0x13255D97L >= ((1L & (*l_208)) > (safe_mod_func_int32_t_s_s(1L, ((*g_326) = (((*g_97) = l_527[4][2][0]) ^ ((safe_lshift_func_int16_t_s_s(p_38, p_36)) | p_38))))))), &g_192, &g_327, l_527[3][0][0])))) == 0x5071AE0DL)) | 255UL))
            {
                char l_531 = 0x84L;
                int *l_547 = &g_192;
                unsigned short ***l_551 = &g_447;
                unsigned short ***l_556 = &g_447;
                short **l_561 = &g_318[0][1][6];
                if (l_531)
                {
                    int *l_532 = (void*)0;
                    l_533 = l_532;
                }
                else
                {
                    int *l_540 = &g_27[4][7][0];
                    for (p_37 = 0; (p_37 > 8); p_37 = safe_add_func_int32_t_s_s(p_37, 2))
                    {
                        (*l_208) &= (251UL ^ (l_531 < ((!(*g_236)) || (0L != (((*l_530) = (l_531 != (l_531 && func_45((0x4C77029BL < g_197[1][0][6]), l_540, &g_192, p_38)))) == p_36)))));
                        g_240 = &g_27[4][7][0];
                    }
                }
                for (l_446 = 24; (l_446 < 22); l_446--)
                {
                    int *l_543[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_543[i] = &g_327;
                    return l_543[0];
                }
                if ((p_36 != ((void*)0 == &p_38)))
                {
                    int *l_557 = &g_27[4][6][1];
                    for (p_38 = 27; (p_38 >= 18); p_38 = safe_sub_func_uint32_t_u_u(p_38, 2))
                    {
                        int *l_546 = (void*)0;
                        unsigned *l_548 = &g_189;
                        unsigned short ****l_552 = (void*)0;
                        unsigned short ****l_554[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_554[i] = &l_551;
                        l_558 |= (65534UL >= (((((*g_240) & (func_45(p_38, l_546, l_547, ((*l_548) = (*l_547))) && (p_36 | (safe_lshift_func_uint8_t_u_u(func_45(((**g_447) = ((g_555 = (g_553 = l_551)) != l_556)), l_548, l_557, p_38), 7))))) < (*l_547)) < 0x57L) && 0xD1A5L));
                    }
                    if (p_37)
                        break;
                    (*g_209) = (((*l_205) == ((safe_div_func_int16_t_s_s(0xA82CL, p_37)) && 5L)) < p_38);
                    (*l_392) &= 0xE9A7AB96L;
                }
                else
                {
                    short ***l_562 = &l_561;
                    if (((&l_530 == ((*l_562) = l_561)) > (safe_lshift_func_uint8_t_u_u(l_565[1], (((0x724FL & (safe_sub_func_int32_t_s_s((*g_240), func_45((***g_553), &g_27[1][6][1], (l_547 = &g_284), ((**g_447) > (***g_553)))))) && p_38) | p_38)))))
                    {
                        int *l_568 = &g_27[6][3][0];
                        g_507[3][5][1] = l_568;
                        if (l_558)
                            break;
                        return &g_59;
                    }
                    else
                    {
                        return l_569;
                    }
                }
            }
            else
            {
                unsigned *l_573[6] = {(void*)0, &g_83, (void*)0, &g_83, (void*)0, &g_83};
                unsigned **l_572 = &l_573[4];
                int i;
                (*g_26) = ((***g_555) == (&p_38 != ((*l_572) = &g_83)));
                if ((*g_504))
                    continue;
                return &g_59;
            }
            g_239[3][1] = (l_312 = &l_309);
            for (g_59 = 0; (g_59 >= 0); g_59 -= 1)
            {
                int *l_583 = (void*)0;
                if (p_38)
                {
                    int *l_574 = &g_27[5][0][1];
                    return l_574;
                }
                else
                {
                    l_578[4] |= (((*l_460) &= (safe_div_func_int16_t_s_s((*l_569), l_577))) | ((***g_553) | 0x6B57L));
                }
                for (l_309 = 0; (l_309 <= 0); l_309 += 1)
                {
                    unsigned short ****l_579 = &g_555;
                    int i, j, k;
                    if (((((g_580 = l_579) != (void*)0) > (safe_rshift_func_uint16_t_u_u((253UL <= (g_512[(g_59 + 4)][(g_59 + 2)][(l_309 + 2)] > (g_197[(g_59 + 3)][g_59][(l_309 + 2)] | p_36))), 13))) <= ((**g_235) = p_37)))
                    {
                        short ***l_586[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_586[i] = &l_585;
                        g_507[3][5][1] = l_583;
                        (*l_205) ^= ((*g_326) |= (*l_569));
                        (*g_326) |= (l_584 == l_586[3]);
                    }
                    else
                    {
                        (*l_392) = (safe_add_func_uint8_t_u_u(p_37, p_37));
                        if (p_38)
                            break;
                        (*g_240) = (safe_lshift_func_uint16_t_u_u(p_38, 1));
                        g_240 = &g_27[4][7][0];
                    }
                }
            }
            for (g_327 = 3; (g_327 >= 0); g_327 -= 1)
            {
                unsigned short ****l_606 = &g_553;
                unsigned char *l_611 = &g_123[0][4][2];
                char l_616[10];
                int i, j;
                for (i = 0; i < 10; i++)
                    l_616[i] = (-1L);
                (*g_504) = 0xD6767814L;
                l_569 = g_239[(g_327 + 4)][g_327];
                for (g_192 = 6; (g_192 >= 0); g_192 -= 1)
                {
                    int l_603 = 0xDC18C268L;
                    for (g_101 = 0; (g_101 <= 3); g_101 += 1)
                    {
                        unsigned char ****l_607[7][10][3] = {{{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}, {{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}, {{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}, {{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}, {{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}, {{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}, {{&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}, {&l_423, (void*)0, &l_423}}};
                        int i, j, k;
                        l_578[(g_327 + 3)] = (safe_div_func_int32_t_s_s(7L, (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(g_163[g_327], g_163[g_327])) | l_603), ((*g_236) = (safe_rshift_func_int16_t_s_s(func_45((((void*)0 != l_606) < ((*l_530) = ((((((*g_320) = (*g_320)) == (l_608 = (void*)0)) || (safe_lshift_func_uint16_t_u_s(((p_38 == p_37) > (*g_97)), 8))) <= (*g_504)) != p_36))), &l_578[4], g_239[(g_327 + 1)][g_327], g_327), 13))))), 2)), p_38)), p_36))));
                        g_239[(g_101 + 1)][g_327] = &g_27[3][7][1];
                    }
                    if (((*g_209) |= ((*l_312) = 0xC71C9F83L)))
                    {
                        int i, j;
                        (*g_504) = ((void*)0 == &l_423);
                        return &g_327;
                    }
                    else
                    {
                        int i, j;
                        if ((*g_504))
                            break;
                        return &g_327;
                    }
                }
                for (g_189 = 0; (g_189 <= 0); g_189 += 1)
                {
                    int *l_613 = &g_284;
                    int i, j;
                    g_239[g_327][g_327] = g_239[g_327][g_327];
                    for (g_73 = 0; (g_73 <= 0); g_73 += 1)
                    {
                        unsigned char *l_612 = &l_446;
                        int *l_617 = &l_578[4];
                        int i, j, k;
                        (*l_205) = g_197[(g_327 + 2)][g_189][(g_327 + 1)];
                        if (g_197[(g_327 + 1)][g_189][g_189])
                            continue;
                        (*l_208) = func_45((func_45(func_45((****g_580), &l_578[4], (g_239[g_327][g_327] = g_239[g_327][g_327]), (l_611 != l_612)), l_613, &g_27[4][7][0], ((safe_mod_func_int8_t_s_s(p_37, l_616[1])) & (-5L))) == 0xD93AL), &g_192, l_617, g_83);
                        if ((*g_209))
                            continue;
                    }
                }
            }
        }
    }
    else
    {
        int *l_622 = (void*)0;
        int l_626 = 0L;
        unsigned short l_649 = 1UL;
        for (g_203 = (-8); (g_203 > 5); ++g_203)
        {
            int *l_623 = &g_327;
            for (g_83 = 13; (g_83 > 30); g_83++)
            {
                (*g_326) = ((*g_504) &= 0xCE19B71EL);
                if ((*g_240))
                    break;
                l_623 = l_622;
            }
            (*g_26) &= (*l_205);
            (*l_205) = p_36;
        }
        for (g_327 = 0; (g_327 <= 8); g_327 = safe_add_func_int8_t_s_s(g_327, 3))
        {
            short l_627 = 0x8111L;
            int l_645 = 0xBF7DB6F3L;
            int *l_646[5];
            int i;
            for (i = 0; i < 5; i++)
                l_646[i] = &l_626;
            if (l_626)
                break;
            if ((l_627 ^= (((****l_324) = (****g_320)) == (*l_205))))
            {
                if (p_37)
                    break;
            }
            else
            {
                unsigned **l_629 = (void*)0;
                unsigned ***l_628 = &l_629;
                unsigned *l_632 = &g_203;
                unsigned **l_631 = &l_632;
                unsigned ***l_630[3];
                int l_648 = 1L;
                int i;
                for (i = 0; i < 3; i++)
                    l_630[i] = &l_631;
                l_633 = ((*l_628) = (void*)0);
                for (l_626 = 5; (l_626 >= 0); l_626 -= 1)
                {
                    int l_647 = 1L;
                    int i;
                    (*l_205) &= (safe_add_func_uint16_t_u_u(g_163[l_626], (((l_647 = func_45((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_36, (safe_add_func_uint32_t_u_u((0UL || (-10L)), g_163[l_626])))), (safe_lshift_func_uint16_t_u_s((l_645 = l_627), 10)))), &g_27[4][7][0], l_646[4], func_45(g_163[l_626], l_646[3], l_632, g_83))) >= 7UL) == l_648)));
                    if (p_36)
                    {
                        (*l_205) = (l_649 || ((((*l_208) && g_512[0][1][1]) || l_650) ^ (p_38 && p_36)));
                    }
                    else
                    {
                        unsigned char l_651 = 0UL;
                        (*l_208) ^= (*g_240);
                        if (p_36)
                            continue;
                        (*g_504) |= l_651;
                    }
                }
            }
            if ((*g_326))
                break;
        }
    }
    return &g_327;
}







static unsigned func_39(unsigned short p_40, unsigned short p_41, int * p_42)
{
    int *l_56[4][3] = {{&g_27[4][7][0], &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[4][7][0], &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[4][7][0], &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[4][7][0], &g_27[4][7][0], &g_27[4][7][0]}};
    unsigned char *l_176 = (void*)0;
    unsigned char **l_175 = &l_176;
    unsigned char ***l_174 = &l_175;
    unsigned char l_182 = 0x8FL;
    short *l_195 = &g_4;
    unsigned char l_204 = 0xD5L;
    int i, j;
    if ((*g_26))
    {
        int *l_44 = &g_27[4][7][0];
        unsigned char *l_179[9][1] = {{&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}, {&g_123[0][1][0]}};
        int *l_180 = &g_27[6][3][1];
        int i, j;
        g_163[4] = ((p_42 == l_44) == (((*l_44) = func_45((safe_div_func_uint16_t_u_u(p_40, g_6[0])), p_42, func_52(l_56[2][2], g_27[1][0][1], (safe_add_func_int32_t_s_s((*p_42), (+g_6[1])))), g_6[1])) && p_40));
        (*l_180) = (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(p_40, ((safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((void*)0 != l_174) > (func_45(((((safe_div_func_uint8_t_u_u((g_123[0][1][0] = 0x20L), p_41)) >= g_98[0]) == p_41) <= (&g_4 == (void*)0)), &g_59, l_180, (*l_180)) || (*l_44))), 0xCC64L)) & 0xD399L), p_40)) && p_41))), (-2L))), p_41));
        (*g_26) |= ((*p_42) = (-5L));
    }
    else
    {
        int l_181 = 1L;
        l_182 = ((*p_42) = (l_181 < 0xFDD6L));
    }
    for (g_101 = (-16); (g_101 == 47); g_101 = safe_add_func_int16_t_s_s(g_101, 4))
    {
        char l_187[8][2] = {{0x6CL, 0x27L}, {0x6CL, 0x27L}, {0x6CL, 0x27L}, {0x6CL, 0x27L}, {0x6CL, 0x27L}, {0x6CL, 0x27L}, {0x6CL, 0x27L}, {0x6CL, 0x27L}};
        unsigned l_188 = 0x78E08496L;
        int i, j;
        if ((*p_42))
            break;
        g_189 = ((*g_26) = (safe_rshift_func_int16_t_s_s((l_187[0][0] & g_101), l_188)));
        (*g_26) ^= 3L;
    }
    for (g_73 = 0; (g_73 <= 6); g_73 += 1)
    {
        int **l_190 = &l_56[2][2];
        unsigned char *l_191 = &g_123[0][4][2];
        int i;
        (*l_190) = &g_27[4][7][0];
        g_192 |= ((*g_26) = ((void*)0 == l_191));
        if (g_163[g_73])
            break;
        (*p_42) = (safe_add_func_int32_t_s_s(func_45(g_101, p_42, &g_27[6][4][0], (1L & 0x65L)), (l_195 == (void*)0)));
        for (g_125 = 2; (g_125 >= 0); g_125 -= 1)
        {
            unsigned l_196[2];
            int l_199 = 7L;
            unsigned char ***l_200 = &l_175;
            int i;
            for (i = 0; i < 2; i++)
                l_196[i] = 0xFD0877F9L;
            l_196[1] |= ((*g_26) = (**l_190));
            for (g_83 = 0; (g_83 <= 8); g_83 += 1)
            {
                char l_198 = 0L;
                int l_202 = 2L;
                for (p_40 = 0; (p_40 <= 8); p_40 += 1)
                {
                    int i, j;
                    l_56[g_125][g_125] = l_56[g_125][g_125];
                    (**l_190) = g_197[1][0][6];
                    (*l_190) = l_56[2][1];
                    for (g_59 = 8; (g_59 >= 2); g_59 -= 1)
                    {
                        unsigned char ****l_201 = &l_200;
                        (*p_42) = ((+((void*)0 == &g_192)) < ((void*)0 == (*l_190)));
                        l_199 = func_45(p_41, p_42, p_42, l_198);
                        l_202 |= (((*l_201) = l_200) == &l_175);
                    }
                }
                (*p_42) = (*g_26);
                return p_40;
            }
        }
    }
    l_204 = (g_83 | g_203);
    return g_192;
}







static unsigned char func_45(unsigned short p_46, int * p_47, int * p_48, unsigned p_49)
{
    int **l_161 = (void*)0;
    int **l_162 = &g_26;
    (*l_162) = &g_59;
    return g_123[1][0][2];
}







static int * func_52(int * p_53, unsigned char p_54, char p_55)
{
    char l_102 = 2L;
    int l_106 = 0xBE7AC75EL;
    unsigned char **l_147 = (void*)0;
    unsigned l_158 = 1UL;
    int *l_160[7];
    int i;
    for (i = 0; i < 7; i++)
        l_160[i] = &g_27[6][3][0];
    for (p_54 = 0; (p_54 <= 1); p_54 += 1)
    {
        int *l_65 = (void*)0;
        int l_76 = 0x2D7E08CDL;
        short *l_127 = &g_4;
        unsigned char *l_159 = &g_123[0][3][3];
        for (p_55 = 0; (p_55 <= 1); p_55 += 1)
        {
            int **l_64[4];
            unsigned *l_72 = &g_73;
            char *l_74[6] = {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75};
            int l_117[10][1] = {{0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}, {0xC2C3437DL}};
            short *l_126[4] = {(void*)0, &g_4, (void*)0, &g_4};
            int i, j;
            for (i = 0; i < 4; i++)
                l_64[i] = (void*)0;
            for (g_59 = 0; (g_59 <= 1); g_59 += 1)
            {
                return p_53;
            }
            p_53 = func_60(((l_65 = &g_59) != p_53), p_55, (l_76 = (((safe_lshift_func_uint8_t_u_u(g_59, (safe_lshift_func_int8_t_s_u(g_27[4][7][0], 3)))) ^ (p_55 && (0x38L <= (safe_add_func_int16_t_s_s((g_27[4][7][0] || ((*l_72) = (0x6328DA4CL < (-8L)))), g_4))))) == 0xE2L)));
            (*g_26) ^= (*l_65);
            if (l_102)
            {
                int l_105[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_105[i] = 0x7E6E873FL;
                (*g_26) = (*l_65);
                for (g_59 = 2; (g_59 <= 8); g_59 += 1)
                {
                    int i, j, k;
                    l_106 &= ((g_27[(p_55 + 4)][(p_54 + 5)][p_55] ^ ((&g_26 == &g_26) > l_105[3])) <= p_55);
                    if (l_105[3])
                    {
                        int *l_107 = &g_27[(p_55 + 4)][(p_54 + 5)][p_55];
                        unsigned char *l_122 = &g_123[0][4][2];
                        short *l_124 = &g_125;
                        int i;
                        l_107 = p_53;
                        g_116 |= (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((g_98[(p_55 + 4)] |= (((*l_72) = p_55) >= ((*p_53) < (g_75 < p_54)))), g_75)) < ((*g_26) >= (+g_101))) & (*p_53)), p_54)), (*p_53)));
                        (*g_26) = (g_27[(p_55 + 4)][(p_54 + 5)][p_55] || (((((*l_107) & ((*g_97) = (+0xA8L))) <= l_117[7][0]) > (safe_sub_func_uint16_t_u_u(0x3CC2L, (((~g_27[(p_55 + 4)][(p_54 + 5)][p_55]) > ((*l_124) = (safe_div_func_uint8_t_u_u(((*l_122) = 0UL), 1L)))) != (l_126[3] != l_127))))) || (*p_53)));
                        if ((*p_53))
                            continue;
                    }
                    else
                    {
                        if ((*p_53))
                            break;
                        if ((*p_53))
                            continue;
                    }
                    (*g_26) = (*g_26);
                }
            }
            else
            {
                char l_131 = (-2L);
                int l_140[4] = {0x531B7E96L, 0xE3CAE63CL, 0x531B7E96L, 0xE3CAE63CL};
                int i;
                if ((0x7036L == 0xD5D3L))
                {
                    unsigned short l_130 = 65533UL;
                    int *l_142[9][3][6] = {{{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}, {{&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}, {&g_27[1][4][1], &g_27[4][7][0], &g_27[4][7][0], &g_59, &g_27[4][7][0], &g_27[4][7][0]}}};
                    int i, j, k;
                    if (((0x700720EAL == g_75) || (*g_26)))
                    {
                        (*p_53) = (g_73 <= (safe_add_func_uint8_t_u_u(p_54, ((*g_97) = p_55))));
                        (*p_53) = (p_55 && ((l_130 <= 0xE0C1L) | g_123[1][0][2]));
                        (*p_53) = l_131;
                    }
                    else
                    {
                        unsigned char **l_132 = (void*)0;
                        unsigned char ***l_133 = &l_132;
                        int l_141 = 0xD3EDD010L;
                        unsigned short *l_145 = (void*)0;
                        unsigned short *l_146 = &g_101;
                        (*l_133) = l_132;
                        (*l_65) = ((*g_26) &= (safe_mod_func_uint16_t_u_u(((*l_146) = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((!(l_140[3] = ((*l_72) ^= g_98[0]))), (4L ^ ((l_141 == p_55) | ((l_142[7][2][5] = &l_141) == &g_59))))), (safe_div_func_uint16_t_u_u((p_54 < (*l_65)), l_102))))), 0x336FL)));
                        if ((*g_26))
                            break;
                        (*l_133) = l_147;
                    }
                    for (g_101 = 0; (g_101 <= 1); g_101 += 1)
                    {
                        int i, j, k;
                        g_27[g_101][p_55][p_54] = g_27[(p_55 + 4)][(p_54 + 2)][g_101];
                        (*l_65) = ((((*g_97) = (6L >= ((+g_123[p_55][(p_55 + 1)][(p_54 + 2)]) >= ((-1L) & (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_123[p_54][(p_54 + 2)][(p_55 + 1)] != g_4), (safe_sub_func_int32_t_s_s(g_123[p_54][(p_54 + 2)][(p_55 + 1)], (g_27[g_101][p_55][p_54] |= ((*p_53) < (g_6[0] >= g_73))))))), g_101)))))) && g_6[1]) > 0UL);
                        if ((*p_53))
                            continue;
                        return p_53;
                    }
                }
                else
                {
                    for (g_125 = 0; (g_125 <= 1); g_125 += 1)
                    {
                        int i, j, k;
                        (*g_26) = (g_27[(p_54 + 2)][(p_54 + 6)][p_54] & g_27[(p_54 + 3)][(g_125 + 6)][g_125]);
                    }
                    (*g_26) |= (*p_53);
                    p_53 = &g_27[4][7][0];
                    (*p_53) = (*g_26);
                }
            }
        }
        l_160[5] = func_60((safe_mod_func_int32_t_s_s(l_106, l_102)), (*g_97), (safe_div_func_int8_t_s_s(p_54, ((*l_159) ^= l_158))));
    }
    return &g_59;
}







static int * func_60(char p_61, char p_62, char p_63)
{
    int **l_77 = &g_26;
    int *l_79 = &g_27[4][4][1];
    int **l_78 = &l_79;
    int l_87 = 0L;
    char *l_99[2];
    int i;
    for (i = 0; i < 2; i++)
        l_99[i] = &g_98[4];
    (*l_78) = ((*l_77) = &g_27[4][7][0]);
    for (g_73 = 0; (g_73 <= 1); g_73 += 1)
    {
        unsigned *l_82 = &g_83;
        int l_84 = (-1L);
        int *l_85 = (void*)0;
        int *l_86 = (void*)0;
        char *l_96 = &g_75;
        int *l_100[6];
        int i;
        for (i = 0; i < 6; i++)
            l_100[i] = (void*)0;
        l_87 = (((*l_82) = (65535UL && (((**l_78) = (safe_div_func_uint16_t_u_u((g_6[1] >= ((*g_26) != p_63)), g_27[4][7][0]))) || p_63))) & l_84);
        g_101 &= (safe_add_func_int8_t_s_s((p_62 == ((*g_26) | (safe_sub_func_int16_t_s_s((5UL > (safe_lshift_func_uint16_t_u_u((((*l_96) &= (safe_sub_func_int32_t_s_s((&g_27[6][2][1] == (void*)0), g_6[1]))) != g_59), (g_97 == l_99[1])))), g_27[4][7][0])))), p_61));
        g_59 |= (*g_26);
        for (g_83 = 0; (g_83 <= 1); g_83 += 1)
        {
            (*l_78) = &g_27[4][3][0];
            for (p_61 = 0; (p_61 <= 1); p_61 += 1)
            {
                int i, j, k;
                (*l_78) = &g_27[g_83][(p_61 + 3)][g_73];
            }
        }
    }
    return &g_59;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_27[i][j][k], "g_27[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_98[i], "g_98[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_123[i][j][k], "g_123[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_197[i][j][k], "g_197[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_512[i][j][k], "g_512[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_692[i], "g_692[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_831[i][j], "g_831[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1173, "g_1173", print_hash_value);
    transparent_crc(g_1228, "g_1228", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
