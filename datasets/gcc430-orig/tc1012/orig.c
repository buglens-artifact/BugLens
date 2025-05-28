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



static int g_13[9] = {(-1L), 0xBBEF7D65L, (-1L), 0xBBEF7D65L, (-1L), 0xBBEF7D65L, (-1L), 0xBBEF7D65L, (-1L)};
static unsigned char g_46 = 255UL;
static int g_48 = (-7L);
static unsigned short g_49[7][7][5] = {{{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}, {{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}, {{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}, {{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}, {{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}, {{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}, {{0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}, {0x11F6L, 65529UL, 0xDF39L, 0x7A0DL, 0xDF39L}}};
static int g_53 = 9L;
static char g_57 = 0L;
static int g_60 = 0x3E3202F6L;
static unsigned g_88[7][1] = {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}};
static short g_91 = 0x99A8L;
static unsigned g_96 = 0x4A90BB50L;
static unsigned g_98[4] = {0x112DD267L, 0UL, 0x112DD267L, 0UL};
static unsigned *g_123 = &g_96;
static unsigned **g_122 = &g_123;
static short g_144 = 1L;
static short g_147[4][2][1] = {{{0x5522L}, {0x5522L}}, {{0x5522L}, {0x5522L}}, {{0x5522L}, {0x5522L}}, {{0x5522L}, {0x5522L}}};
static unsigned char g_211[1] = {0x89L};
static unsigned char g_213 = 0x99L;
static short g_214 = (-1L);
static int *g_229[3][10] = {{&g_48, &g_48, &g_60, &g_53, &g_53, &g_60, &g_48, &g_48, &g_60, &g_48}, {&g_48, &g_48, &g_60, &g_53, &g_53, &g_60, &g_48, &g_48, &g_60, &g_48}, {&g_48, &g_48, &g_60, &g_53, &g_53, &g_60, &g_48, &g_48, &g_60, &g_48}};
static int **g_228 = &g_229[0][3];
static int ***g_252 = (void*)0;
static int g_269 = 2L;
static unsigned char *g_276 = &g_211[0];
static unsigned char **g_275 = &g_276;
static char *g_297 = &g_57;
static char **g_296 = &g_297;
static unsigned short *g_322 = (void*)0;
static unsigned short **g_321[5][10][5] = {{{&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}}, {{&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}}, {{&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}}, {{&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}}, {{&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}, {&g_322, &g_322, &g_322, (void*)0, &g_322}}};
static unsigned short ***g_320 = &g_321[1][4][0];
static int g_356 = (-4L);
static unsigned g_392[7] = {0xCF984D08L, 0xCF984D08L, 0xCF984D08L, 0xCF984D08L, 0xCF984D08L, 0xCF984D08L, 0xCF984D08L};
static short **g_418 = (void*)0;
static short ***g_417[3] = {&g_418, &g_418, &g_418};
static int g_431 = 0x32D2EFFFL;
static int *g_495 = &g_60;
static int g_512 = (-1L);
static int *g_513 = &g_48;
static int *g_540 = &g_60;
static unsigned short g_606 = 0x9D7AL;
static short *g_629 = &g_147[3][1][0];
static unsigned short **g_636 = (void*)0;
static unsigned char g_673 = 0xB2L;
static unsigned short g_703 = 0x297AL;



static char func_1(void);
static int * func_2(int * p_3, short p_4, int p_5, unsigned p_6, unsigned p_7);
static int * func_8(char p_9, unsigned char p_10, unsigned p_11, int * p_12);
static unsigned short func_14(unsigned char p_15, unsigned short p_16, unsigned char p_17, unsigned p_18);
static int func_22(unsigned p_23, short p_24, int * p_25);
static short func_26(int * p_27, int * p_28, unsigned p_29);
static int * func_30(int * p_31);
static int * func_32(int * p_33, short p_34, unsigned char p_35);
static int * func_36(int p_37, unsigned p_38, unsigned p_39, unsigned short p_40, int * p_41);
static int func_50(char p_51);
static char func_1(void)
{
    int l_21 = (-4L);
    unsigned char *l_44 = (void*)0;
    unsigned char *l_45[7];
    int *l_47 = &g_48;
    int *l_355[6][3] = {{&g_356, &g_356, &g_356}, {&g_356, &g_356, &g_356}, {&g_356, &g_356, &g_356}, {&g_356, &g_356, &g_356}, {&g_356, &g_356, &g_356}, {&g_356, &g_356, &g_356}};
    short *l_388 = (void*)0;
    short *l_389 = (void*)0;
    short *l_390 = &g_147[1][0][0];
    unsigned short l_656 = 0x2C16L;
    char l_686 = 0L;
    char l_697 = 9L;
    unsigned *l_715 = (void*)0;
    char l_720[8][3][5] = {{{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}, {{(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}, {(-8L), 0L, 1L, 1L, 1L}}};
    int ****l_748 = &g_252;
    int l_787 = 0L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_45[i] = &g_46;
    (*g_228) = func_2(func_8(g_13[0], (g_211[0] = (func_14(g_13[8], (safe_add_func_int16_t_s_s(l_21, (+1L))), ((l_21 , func_22(g_13[3], ((*l_390) = func_26(func_30((l_47 = func_32(func_36((((safe_add_func_uint8_t_u_u((g_46 = 6UL), (((l_47 == (g_48 , (void*)0)) >= g_13[3]) == g_13[0]))) , 0xC4EB0A11L) , 0x6709E149L), g_48, (*l_47), g_13[8], &g_48), g_147[1][0][0], l_21))), l_355[0][2], g_88[6][0])), g_123)) , (*g_276)), g_13[1]) , g_46)), g_606, l_355[4][2]), l_656, g_88[3][0], g_13[5], g_606);
    if ((safe_rshift_func_uint16_t_u_u((g_512 , g_673), 5)))
    {
        short l_676[6] = {0x7AD8L, 0x7AD8L, 0L, 0x7AD8L, 0x7AD8L, 0L};
        unsigned short *l_677 = &g_49[4][5][0];
        int i;
        if ((safe_add_func_uint16_t_u_u(((*l_677) = l_676[0]), ((0x23710017L < 1UL) == (-9L)))))
        {
            return l_676[1];
        }
        else
        {
            int *l_678 = &g_269;
            (*g_228) = l_678;
        }
        (*g_495) = (l_676[3] >= (**g_296));
    }
    else
    {
        int l_683 = 0L;
        short ***l_690 = &g_418;
        unsigned l_709 = 4294967288UL;
        int *l_713 = &g_60;
        unsigned char *l_721[8][9] = {{&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}, {&g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0], &g_211[0], &g_213, &g_211[0], &g_211[0]}};
        short l_724 = 0x793AL;
        short l_756 = 0x45EEL;
        unsigned l_766 = 0x10E46619L;
        unsigned char l_770 = 0xD7L;
        unsigned l_785 = 4294967295UL;
        unsigned l_786 = 0xC08D321BL;
        int i, j;
        (*g_540) = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_683, (safe_mod_func_uint16_t_u_u((l_686 != (*g_629)), 3L)))), l_683));
        if (l_683)
        {
            int *l_687 = &g_60;
            (*g_495) = ((+(**g_296)) > (*l_687));
        }
        else
        {
            int l_698 = 0x527A0073L;
            int ****l_708 = &g_252;
            unsigned short *l_731 = &g_49[6][3][1];
            unsigned char l_749[7];
            int i;
            for (i = 0; i < 7; i++)
                l_749[i] = 8UL;
            if (l_698)
            {
                char l_701 = 0L;
                short *l_702[8][4] = {{&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}, {&g_147[1][0][0], &g_214, (void*)0, &g_147[1][1][0]}};
                int l_710 = 0xAF99B02FL;
                int i, j;
                l_710 ^= ((*g_495) = ((safe_lshift_func_int8_t_s_u(l_701, ((*g_297) , (((l_698 ^= (*g_629)) <= g_703) , ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((l_708 != (void*)0), l_683)), (l_701 , (l_683 , 0x7D6BL)))) & l_709))))) > l_709));
            }
            else
            {
                unsigned **l_714 = (void*)0;
                int l_716 = 0xD129D8FAL;
                char l_717 = 0L;
                (*g_513) = (-1L);
                (*g_228) = &l_683;
            }
            if ((safe_lshift_func_uint16_t_u_u((((*l_731) = ((l_720[6][2][1] > (0x047F6265L == ((void*)0 != l_721[1][2]))) & (((safe_div_func_int16_t_s_s(((((**g_296) & 4UL) | (*l_713)) && (*l_713)), 65535UL)) | 0xCEL) ^ 0xBA60L))) <= 0x9348L), (*l_713))))
            {
                (*g_228) = &l_683;
            }
            else
            {
                unsigned l_737 = 1UL;
                unsigned char l_763 = 255UL;
                for (g_431 = 0; (g_431 == 18); g_431 = safe_add_func_int32_t_s_s(g_431, 7))
                {
                    (*g_495) = (*g_495);
                }
                for (g_703 = 18; (g_703 <= 17); g_703--)
                {
                    int *l_736[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_736[i] = &g_269;
                    (*g_228) = l_736[1];
                    if (l_737)
                        continue;
                    for (l_737 = 0; (l_737 != 18); l_737++)
                    {
                        int l_746[5];
                        int *l_747 = &g_53;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_746[i] = 0x2B6FADF9L;
                        (*g_228) = l_355[0][2];
                        (*g_513) = (safe_div_func_int16_t_s_s(((((((((*l_747) , &g_252) != l_748) <= g_91) == (*l_747)) , (*g_629)) & l_749[6]) , l_737), 0x88E6L));
                        if ((*l_713))
                            break;
                    }
                }
                for (g_60 = (-28); (g_60 >= 21); ++g_60)
                {
                    unsigned char l_759[6][1][8] = {{{0x1BL, 0UL, 0x12L, 0UL, 0x1BL, 0xC0L, 0x1BL, 0UL}}, {{0x1BL, 0UL, 0x12L, 0UL, 0x1BL, 0xC0L, 0x1BL, 0UL}}, {{0x1BL, 0UL, 0x12L, 0UL, 0x1BL, 0xC0L, 0x1BL, 0UL}}, {{0x1BL, 0UL, 0x12L, 0UL, 0x1BL, 0xC0L, 0x1BL, 0UL}}, {{0x1BL, 0UL, 0x12L, 0UL, 0x1BL, 0xC0L, 0x1BL, 0UL}}, {{0x1BL, 0UL, 0x12L, 0UL, 0x1BL, 0xC0L, 0x1BL, 0UL}}};
                    int *l_760 = (void*)0;
                    int l_771 = 1L;
                    int i, j, k;
                    if ((safe_add_func_uint16_t_u_u((((g_606 <= (*g_513)) , &l_21) != &l_21), (*g_629))))
                    {
                        unsigned l_769 = 0x5E919035L;
                        l_771 &= (((safe_sub_func_int16_t_s_s(((!((**g_296) , (~l_763))) | (safe_rshift_func_int16_t_s_s(((l_766 , l_763) || l_737), 4))), ((safe_sub_func_int16_t_s_s(((((*l_690) = (void*)0) != (void*)0) , l_769), l_763)) != (*g_297)))) && l_770) == 4UL);
                        (*g_228) = (((*l_713) , (-7L)) , &g_269);
                    }
                    else
                    {
                        int l_774[5] = {(-6L), 0xB653AA2FL, (-6L), 0xB653AA2FL, (-6L)};
                        int i;
                        (*g_513) = (g_673 >= (safe_mod_func_uint32_t_u_u(l_774[1], (*g_495))));
                        (*g_513) |= (l_771 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((!0xBCD8L), 12)), (((l_771 ^ l_759[3][0][5]) ^ l_774[1]) & g_53))), 7)));
                        return l_774[1];
                    }
                }
            }
            (*g_513) |= ((l_749[6] < (*g_629)) >= ((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_786, (*l_713))), (*l_713))) <= 6UL) , l_749[4]) | l_787));
        }
    }
    return (**g_296);
}







static int * func_2(int * p_3, short p_4, int p_5, unsigned p_6, unsigned p_7)
{
    int l_659 = 2L;
    int *l_666 = &g_60;
    unsigned char l_670 = 0UL;
    (*g_228) = p_3;
    for (g_53 = 2; (g_53 >= 0); g_53 -= 1)
    {
        int l_668 = 0x37119B6BL;
        if ((*g_495))
        {
            return p_3;
        }
        else
        {
            int **l_667 = &l_666;
            unsigned *l_669 = &g_98[2];
            (*g_513) &= (((*g_495) &= (+(-1L))) < 4294967294UL);
            (*g_513) = (((*g_495) &= (safe_div_func_uint8_t_u_u((&g_418 == &g_418), l_659))) && (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((0L ^ ((*l_669) = (((p_6 >= p_7) < (**g_296)) , p_4))), (**g_296))) , l_670), 0)) , p_4), (*l_666))));
        }
        for (p_5 = 2; (p_5 >= 0); p_5 -= 1)
        {
            int i, j;
            return l_666;
        }
        if ((*l_666))
            break;
        for (p_6 = 0; (p_6 <= 2); p_6 += 1)
        {
            int i, j;
            g_229[g_53][(g_53 + 3)] = ((((*l_666) , (*g_297)) || (*g_297)) , p_3);
        }
    }
    return l_666;
}







static int * func_8(char p_9, unsigned char p_10, unsigned p_11, int * p_12)
{
    unsigned l_652 = 0xFD2B08F0L;
    int l_653 = (-10L);
    int *l_655 = (void*)0;
    (*g_540) = 0xE5B16062L;
    (*g_513) |= (*p_12);
    (*g_228) = l_655;
    return l_655;
}







static unsigned short func_14(unsigned char p_15, unsigned short p_16, unsigned char p_17, unsigned p_18)
{
    int *l_412 = &g_269;
    short *l_416 = &g_147[1][0][0];
    short **l_415[1];
    short ***l_414[1][5];
    unsigned char **l_474 = &g_276;
    int ***l_546 = &g_228;
    unsigned char l_587 = 0xE8L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_415[i] = &l_416;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_414[i][j] = &l_415[0];
    }
    for (g_91 = (-16); (g_91 != (-25)); g_91 = safe_sub_func_int8_t_s_s(g_91, 8))
    {
        unsigned l_411[7][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
        int *l_413 = &g_53;
        int i, j;
        (*l_413) |= func_22(l_411[5][0], l_411[5][0], l_412);
        return p_16;
    }
    if (func_22(((g_96 , l_414[0][1]) != ((*l_412) , g_417[0])), p_17, l_412))
    {
        int *l_419 = &g_356;
        int l_429 = 1L;
        char l_446 = 0x97L;
        int *l_490 = &g_269;
        int *l_496 = &g_269;
        unsigned char *l_521[4][1][5] = {{{&g_213, &g_213, &g_213, (void*)0, &g_213}}, {{&g_213, &g_213, &g_213, (void*)0, &g_213}}, {{&g_213, &g_213, &g_213, (void*)0, &g_213}}, {{&g_213, &g_213, &g_213, (void*)0, &g_213}}};
        short ***l_539[2][3][6];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 6; k++)
                    l_539[i][j][k] = (void*)0;
            }
        }
        (*l_419) ^= func_22(p_15, (*l_412), l_412);
        if (p_18)
        {
            unsigned short l_428 = 65528UL;
            int *l_430 = &g_431;
            for (p_17 = 0; (p_17 >= 58); p_17 = safe_add_func_int16_t_s_s(p_17, 4))
            {
                return (*l_419);
            }
            (*l_430) ^= (((((!((*l_412) != (((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((+6UL) <= func_50(func_50((*g_297)))), ((*l_412) >= (safe_add_func_uint32_t_u_u(p_18, (((((*g_276) <= ((l_428 == p_17) < (*l_412))) & 0x2CDCL) | 8L) > 1UL)))))), (*l_419))) >= (*l_412)) ^ 0L))) || p_17) , 0xD4L) , l_429) > p_17);
        }
        else
        {
            short l_432 = (-2L);
            int *l_480 = &g_431;
            unsigned l_504 = 0x6E1231F7L;
            short ***l_551 = &g_418;
            int *l_552[2];
            short l_607 = 0xC21EL;
            char l_615 = 0xC0L;
            short *l_630 = &g_214;
            int i;
            for (i = 0; i < 2; i++)
                l_552[i] = &g_356;
            if (l_432)
            {
                unsigned char l_447 = 0x33L;
                int *l_459[4];
                short **l_479 = &l_416;
                int i;
                for (i = 0; i < 4; i++)
                    l_459[i] = &g_356;
                for (g_431 = 0; (g_431 == 6); g_431 = safe_add_func_uint16_t_u_u(g_431, 6))
                {
                    unsigned char *l_441 = &g_213;
                    int l_455 = 9L;
                    int *l_460 = &g_53;
                    int **l_491 = &l_419;
                }
            }
            else
            {
                unsigned short l_501[5] = {0x1F73L, 2UL, 0x1F73L, 2UL, 0x1F73L};
                int l_538 = 0x2EB1299AL;
                short l_545 = 0x0700L;
                int ***l_547 = &g_228;
                int *l_564 = &g_356;
                int **l_565 = &l_552[0];
                int l_586 = 0xC25D41FFL;
                int i;
                for (g_48 = 0; (g_48 <= 4); g_48 += 1)
                {
                    short l_492[1];
                    int l_511 = (-7L);
                    unsigned char *l_522[7] = {(void*)0, &g_46, (void*)0, &g_46, (void*)0, &g_46, (void*)0};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_492[i] = (-8L);
                    (*l_419) = (*l_419);
                    (*g_495) = ((!((l_492[0] < (safe_lshift_func_uint8_t_u_s(((*g_276) = ((((*l_490) | p_17) , l_501[2]) , 255UL)), 5))) <= (-1L))) , (*l_412));
                    if ((p_16 < 253UL))
                    {
                        unsigned *l_505[4];
                        int l_510 = (-1L);
                        int i;
                        for (i = 0; i < 4; i++)
                            l_505[i] = &g_96;
                        g_512 = (safe_div_func_uint32_t_u_u((((((((**g_296) &= 1L) != l_504) , (g_98[1] = (l_480 == (l_496 = l_490)))) ^ ((*l_412) , (l_511 ^= ((((-8L) > (((*l_480) | ((safe_lshift_func_uint16_t_u_s(l_510, ((*l_412) >= l_510))) && p_16)) == 0UL)) || 0xAE086F86L) < 5UL)))) > (*l_480)) || (*g_297)), p_18));
                        (*g_228) = g_513;
                    }
                    else
                    {
                        char l_516[5][1][9] = {{{0xE2L, 0xE2L, (-1L), 0xB2L, 0L, 0x0AL, 0x4DL, 0xE2L, (-1L)}}, {{0xE2L, 0xE2L, (-1L), 0xB2L, 0L, 0x0AL, 0x4DL, 0xE2L, (-1L)}}, {{0xE2L, 0xE2L, (-1L), 0xB2L, 0L, 0x0AL, 0x4DL, 0xE2L, (-1L)}}, {{0xE2L, 0xE2L, (-1L), 0xB2L, 0L, 0x0AL, 0x4DL, 0xE2L, (-1L)}}, {{0xE2L, 0xE2L, (-1L), 0xB2L, 0L, 0x0AL, 0x4DL, 0xE2L, (-1L)}}};
                        int i, j, k;
                        (*g_228) = l_496;
                        (*l_412) = ((safe_rshift_func_int16_t_s_u((4294967292UL < l_516[0][0][1]), (safe_rshift_func_int16_t_s_s(func_50((p_18 , (p_15 | (**g_296)))), 6)))) && (((safe_lshift_func_int8_t_s_s(0x9BL, 1)) ^ ((((((*l_474) = &p_17) != (l_522[3] = l_521[2][0][4])) , g_356) , 0x0C1B1A6EL) , p_15)) && l_516[0][0][1]));
                        if ((*g_495))
                            continue;
                        return (*l_412);
                    }
                    for (g_214 = 4; (g_214 >= 0); g_214 -= 1)
                    {
                        unsigned char **l_523 = &g_276;
                        (*g_228) = &l_511;
                        (*g_228) = l_490;
                        (*l_490) = (l_523 != (void*)0);
                        return (*l_496);
                    }
                }
                if ((safe_rshift_func_uint8_t_u_u((*g_276), 4)))
                {
                    for (g_57 = 0; (g_57 >= 16); g_57 = safe_add_func_uint16_t_u_u(g_57, 2))
                    {
                        (*l_490) = (&g_418 != (void*)0);
                        return p_18;
                    }
                }
                else
                {
                    unsigned *l_536 = &g_96;
                    unsigned short *l_537 = &l_501[2];
                    int l_544 = 0x9F23441FL;
                    unsigned *l_553 = (void*)0;
                    unsigned *l_554 = &g_98[2];
                    char *l_555 = &l_446;
                    char l_556 = 0x5BL;
                    short ***l_563 = &l_415[0];
                    if (((p_18 | (p_17 > (*l_496))) && ((g_211[0] > 0x4FCCE658L) & (*g_276))))
                    {
                        return p_17;
                    }
                    else
                    {
                        unsigned l_543 = 0x34D6E846L;
                        int *l_550 = &g_53;
                        (*g_495) = (l_539[1][0][0] != &g_418);
                        (*g_228) = g_540;
                        l_550 = ((*g_228) = &l_544);
                    }
                    l_556 |= func_50(((*l_555) &= (((((((*l_419) = ((**l_474) = (l_551 != &g_418))) != p_15) && ((*l_554) = ((*l_412) = ((0xD925L | (((*g_276) = p_17) , (((*l_536) = (*l_490)) && 1UL))) , 1UL)))) < p_15) < p_16) , (*g_297))));
                    for (g_48 = 0; (g_48 <= 1); ++g_48)
                    {
                        unsigned l_561 = 0xD209AD96L;
                        int *l_562 = (void*)0;
                        if ((*g_495))
                            break;
                        (*l_412) = ((((((p_15 , p_17) || (safe_lshift_func_uint16_t_u_s((*l_496), l_501[2]))) <= l_561) , l_544) , (void*)0) != l_563);
                        g_540 = ((*g_228) = l_564);
                    }
                }
                (*l_565) = ((*g_228) = l_496);
                for (g_213 = 0; (g_213 > 28); g_213++)
                {
                    int l_572 = 0x23D5AF64L;
                    unsigned char *l_577 = (void*)0;
                    for (l_432 = 3; (l_432 == (-5)); --l_432)
                    {
                        if ((**l_565))
                            break;
                        l_587 ^= (p_16 & (safe_sub_func_uint16_t_u_u(p_15, ((l_572 != (safe_sub_func_int32_t_s_s((((((p_16 <= (safe_sub_func_uint8_t_u_u(p_17, (l_577 != &p_17)))) || (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(func_50((*g_297)), 1L)) <= l_586), 3)) > 0xD15DL) && 0x14L), 0xF5802DB8L)), p_15))) , (-10L)) != 4294967288UL) != (*g_276)), 3UL))) < 0xF47C3AB1L))));
                        (**l_546) = l_552[1];
                    }
                }
            }
            for (p_16 = (-21); (p_16 <= 52); p_16++)
            {
                int l_590[5][9];
                unsigned short *l_593 = &g_49[6][6][3];
                char l_621 = 4L;
                int *l_624 = &g_13[4];
                int l_646[7][10][3] = {{{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}, {{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}, {{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}, {{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}, {{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}, {{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}, {{0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}, {0x344CCDD1L, 0x0024F99AL, (-9L)}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_590[i][j] = (-8L);
                }
                l_590[0][6] = p_17;
                (*g_228) = l_552[0];
                if (((safe_add_func_int16_t_s_s(0xAB0AL, ((*l_593) = 0x4CE7L))) > (safe_sub_func_int32_t_s_s(p_18, (safe_add_func_uint32_t_u_u(0x3AAE0DB3L, func_22(l_590[0][6], p_16, l_496)))))))
                {
                    short l_598 = 0xCB1BL;
                    int *l_605 = (void*)0;
                    int l_608[7] = {0xF0C0AC91L, (-2L), 0xF0C0AC91L, (-2L), 0xF0C0AC91L, (-2L), 0xF0C0AC91L};
                    int i;
                    (*l_480) &= p_15;
                }
                else
                {
                    int *l_609 = (void*)0;
                    int *l_612 = &l_429;
                    unsigned *l_616 = &g_98[0];
                    int l_635 = 0x10E44E12L;
                    (*l_412) ^= (0x127FEACCL ^ (*g_540));
                    if ((safe_div_func_int8_t_s_s((((*l_616) = (((*l_612) |= (p_17 , p_16)) , (safe_sub_func_uint16_t_u_u(p_18, l_615)))) >= (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((*g_297) = (*l_412)), ((((0x27L ^ p_16) <= 2L) | p_16) <= (-1L)))), p_15))), (*l_480))))
                    {
                        int **l_625[2][2] = {{(void*)0, &l_612}, {(void*)0, &l_612}};
                        short *l_628 = &g_91;
                        int i, j;
                        (*g_228) = ((safe_mod_func_uint32_t_u_u(((l_612 = l_624) == (((*g_297) , (safe_rshift_func_uint16_t_u_s((l_628 == (l_630 = (g_629 = l_593))), (p_18 , (safe_add_func_int32_t_s_s(l_590[0][6], (safe_div_func_uint32_t_u_u(1UL, (l_635 , (p_18 & (*l_412))))))))))) , (void*)0)), g_211[0])) , &l_590[1][2]);
                        if ((*g_513))
                            break;
                        g_636 = ((*g_320) = (*g_320));
                    }
                    else
                    {
                        return (*l_419);
                    }
                    if ((*l_412))
                    {
                        (*l_490) = l_621;
                        return p_17;
                    }
                    else
                    {
                        int *l_637 = &l_590[1][3];
                        (*g_228) = l_637;
                        l_646[4][8][0] &= (0xA59DL == (p_17 != (((**g_296) & l_590[0][6]) > (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(p_18, (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(9UL, 15)), (*l_496))))), 2L)))));
                        (*g_540) &= ((*l_412) = (*l_480));
                        (**l_546) = (void*)0;
                    }
                }
                for (p_18 = 0; (p_18 <= 1); p_18 += 1)
                {
                    (*l_412) ^= ((*l_480) = 0x0F6A7073L);
                    for (g_144 = 0; (g_144 <= 2); g_144 += 1)
                    {
                        int i, j, k;
                        l_646[(p_18 + 3)][(p_18 + 5)][(p_18 + 1)] = (safe_add_func_uint16_t_u_u(l_646[(p_18 + 4)][(p_18 + 1)][g_144], ((*g_297) <= 0x60L)));
                        return l_646[(p_18 + 3)][(p_18 + 5)][(p_18 + 1)];
                    }
                }
            }
        }
    }
    else
    {
        int *l_649 = &g_53;
        (**l_546) = l_649;
        l_649 = l_649;
        return (*l_412);
    }
    return (*l_412);
}







static int func_22(unsigned p_23, short p_24, int * p_25)
{
    unsigned l_391 = 4294967287UL;
    unsigned **l_393 = &g_123;
    int *l_402 = &g_60;
    (*l_402) &= (((g_392[6] = ((((*g_122) = &p_23) != &p_23) <= l_391)) , (l_393 != l_393)) ^ (safe_rshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(p_24, 5)) >= (((l_391 & l_391) & ((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((p_25 != p_25) >= l_391), l_391)) , (*p_25)), l_391)) , l_391)) <= 65527UL)) & p_24), 10)));
    (*p_25) &= (g_213 | (safe_div_func_int16_t_s_s(0x978FL, (p_23 || (safe_div_func_int8_t_s_s(p_23, ((*g_276) |= ((g_60 == ((void*)0 == (*g_320))) , (*l_402)))))))));
    (*l_402) = (*p_25);
    return (*p_25);
}







static short func_26(int * p_27, int * p_28, unsigned p_29)
{
    short ***l_360 = (void*)0;
    int l_363 = 7L;
    unsigned l_381[5][2];
    short *l_385 = &g_91;
    int *l_387 = &l_363;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_381[i][j] = 0x9AAA8E01L;
    }
    (*p_28) = (((((safe_unary_minus_func_uint32_t_u(func_50((safe_lshift_func_uint8_t_u_s(1UL, 6))))) && (((void*)0 == l_360) , (*p_28))) , ((safe_lshift_func_uint8_t_u_s(func_50(func_50((**g_296))), p_29)) >= p_29)) ^ g_147[0][1][0]) | l_363);
    for (p_29 = 0; (p_29 != 28); p_29 = safe_add_func_uint16_t_u_u(p_29, 7))
    {
        short l_366 = 0L;
        unsigned short *l_367 = &g_49[4][6][1];
        short *l_368[6] = {&l_366, &l_366, (void*)0, &l_366, &l_366, (void*)0};
        int l_369 = 0x4138C168L;
        short **l_384 = (void*)0;
        int ***l_386 = &g_228;
        int i;
        l_366 ^= 0x51EDD1ABL;
        l_381[3][1] = (((l_369 &= ((void*)0 != l_367)) < 4UL) , (safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0UL, l_363)), (safe_add_func_int16_t_s_s((0xE5168BC2L ^ (((safe_add_func_uint32_t_u_u((~(**g_122)), 4294967292UL)) && (safe_unary_minus_func_int16_t_s(((~(safe_lshift_func_int8_t_s_u(l_363, p_29))) <= (**g_122))))) ^ 1UL)), g_88[6][0])))));
        (*g_228) = (l_387 = &l_363);
    }
    return p_29;
}







static int * func_30(int * p_31)
{
    int *l_290 = (void*)0;
    int l_291 = (-8L);
    char *l_295[3];
    char **l_294[7] = {&l_295[1], &l_295[1], &l_295[1], &l_295[1], &l_295[1], &l_295[1], &l_295[1]};
    unsigned short **l_299 = (void*)0;
    unsigned short ***l_298[7][7][2] = {{{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}, {{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}, {{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}, {{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}, {{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}, {{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}, {{&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}, {&l_299, &l_299}}};
    char l_354 = 0x0DL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_295[i] = (void*)0;
    (*g_228) = (void*)0;
    (*g_228) = &l_291;
    (*g_228) = p_31;
    for (g_96 = 0; (g_96 <= 2); g_96 += 1)
    {
        int l_292 = 1L;
        unsigned char *l_293 = &g_213;
        short *l_300 = (void*)0;
        short *l_301 = (void*)0;
        short *l_302 = &g_147[1][0][0];
        int l_303 = 0x2D7FBB29L;
        char **l_309 = (void*)0;
        unsigned short **l_325 = &g_322;
        l_303 = (((((l_292 , l_293) == (void*)0) & (l_294[3] == g_296)) == ((((**g_296) , l_292) , (g_46 > ((*l_302) = ((l_298[6][4][0] == (void*)0) , g_147[1][1][0])))) >= g_57)) , l_292);
        for (g_269 = 1; (g_269 >= 0); g_269 -= 1)
        {
            int *l_304[2][2][4] = {{{&g_53, &l_303, (void*)0, &l_303}, {&g_53, &l_303, (void*)0, &l_303}}, {{&g_53, &l_303, (void*)0, &l_303}, {&g_53, &l_303, (void*)0, &l_303}}};
            int i, j, k;
            l_303 = g_98[(g_96 + 1)];
            return p_31;
        }
        for (l_292 = 2; (l_292 >= 0); l_292 -= 1)
        {
            unsigned char l_319 = 0xC2L;
            int *l_323 = &g_53;
            unsigned **l_344 = (void*)0;
            for (g_214 = 0; (g_214 <= 2); g_214 += 1)
            {
                int ***l_318 = &g_228;
                char l_345 = 0x91L;
                short l_346 = 0x716CL;
                int i, j;
                if ((safe_rshift_func_int8_t_s_s(((void*)0 == &g_229[g_214][(l_292 + 4)]), (safe_add_func_uint8_t_u_u(((void*)0 == l_309), ((safe_rshift_func_uint8_t_u_s((((((g_48 | (1UL | (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_303 = ((l_318 == (void*)0) >= g_88[0][0])), l_292)), 0x816AL)), 0xCAL)))) || (*g_123)) , l_319) , (void*)0) == g_320), 5)) > l_291))))))
                {
                    unsigned l_328 = 0x28C494CCL;
                    (**l_318) = l_323;
                    (*g_228) = (void*)0;
                    if (l_303)
                    {
                        unsigned l_324 = 0x08549FEFL;
                        (*l_323) = l_324;
                        (*g_320) = l_325;
                        (**l_318) = (void*)0;
                        (*l_323) &= 1L;
                    }
                    else
                    {
                        int **l_326[3][10][4] = {{{&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}}, {{&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}}, {{&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}, {&l_323, &l_323, &l_323, &l_323}}};
                        int *l_327[6] = {&g_60, &g_53, &g_60, &g_53, &g_60, &g_53};
                        int i, j, k;
                        l_327[0] = ((**l_318) = p_31);
                        if (l_292)
                            continue;
                    }
                    if (l_328)
                        break;
                }
                else
                {
                    unsigned *l_329 = &g_98[3];
                    int l_341 = 5L;
                    int l_342 = (-5L);
                    int l_343[10][8][3] = {{{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}, {{(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}, {(-1L), 0x442EC23FL, (-8L)}}};
                    unsigned char **l_351 = &l_293;
                    int i, j, k;
                    (*l_323) = (((*l_329) ^= l_303) ^ (((((((((*l_323) < ((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((((*g_276) < (0xDDB2L <= (((((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(0xCDC07732L)), (((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((l_342 &= (l_341 ^= ((0x1F853D6CL >= l_291) > (*l_323)))), 13)), l_343[9][4][1])) > 0L) == 4294967295UL))) & 7UL) , l_344) == (void*)0) >= l_303))) | 1UL), (**g_296))), l_345)) || 6L)) , (**g_122)) & (*l_323)) < (*l_323)) , (*l_323)) <= g_144) & l_303) | l_346));
                    l_341 = (safe_lshift_func_uint16_t_u_s(l_292, (safe_add_func_uint32_t_u_u((((((*l_323) = l_343[9][4][1]) >= (((*l_351) = (g_98[0] , &l_319)) != ((((safe_sub_func_uint16_t_u_u(l_303, ((*l_302) = 0L))) , l_319) | 0x97548190L) , &l_319))) <= (*g_123)) > l_354), l_319))));
                }
            }
        }
    }
    return p_31;
}







static int * func_32(int * p_33, short p_34, unsigned char p_35)
{
    unsigned char l_253 = 0xD2L;
    int l_254 = 0x7197F4D5L;
    int l_256 = (-1L);
    short *l_258 = &g_214;
    short **l_257[3];
    short ***l_259 = (void*)0;
    short ***l_260 = &l_257[2];
    unsigned char l_261 = 0xFDL;
    int i;
    for (i = 0; i < 3; i++)
        l_257[i] = &l_258;
    for (p_34 = 2; (p_34 >= 0); p_34 -= 1)
    {
        char *l_242 = &g_57;
        int l_245 = 0xBF450670L;
        int ***l_251 = (void*)0;
        int ****l_250[8][9] = {{&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}, {&l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251, &l_251}};
        unsigned l_255 = 0x9C6AF297L;
        int i, j;
        l_254 &= (safe_mod_func_int16_t_s_s(((&g_228 == (void*)0) | func_50((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(0xEFL, (g_46 == (((*g_123) ^= ((safe_div_func_int8_t_s_s(((*l_242) = p_34), (safe_div_func_int32_t_s_s(((0x7CED499CL > l_245) , l_245), (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((g_252 = &g_228) == (void*)0) || 0UL), (-1L))), 0xED68L)))))) ^ l_253)) < 1UL)))) , (-1L)), 0x3C53L)))), g_211[0]));
        l_254 ^= (l_255 = p_35);
        l_256 ^= l_254;
        return (**g_252);
    }
    (*l_260) = l_257[0];
    if (l_261)
    {
        char l_262 = 0x54L;
        int *l_263 = &l_254;
        (*l_263) = (l_262 = (0x3EAFCF35L && l_253));
        for (p_35 = (-5); (p_35 > 36); p_35++)
        {
            char *l_268 = &l_262;
            int l_270 = (-8L);
            (*l_263) |= (safe_mod_func_uint16_t_u_u(func_50(((*l_268) = g_13[6])), (g_269 = g_214)));
            (*l_263) = 0x48B5C4B6L;
            if (l_270)
            {
                unsigned char ***l_271 = (void*)0;
                unsigned char *l_274 = &g_211[0];
                unsigned char **l_273 = &l_274;
                unsigned char ***l_272[6][6] = {{&l_273, &l_273, &l_273, &l_273, &l_273, (void*)0}, {&l_273, &l_273, &l_273, &l_273, &l_273, (void*)0}, {&l_273, &l_273, &l_273, &l_273, &l_273, (void*)0}, {&l_273, &l_273, &l_273, &l_273, &l_273, (void*)0}, {&l_273, &l_273, &l_273, &l_273, &l_273, (void*)0}, {&l_273, &l_273, &l_273, &l_273, &l_273, (void*)0}};
                int i, j;
                g_275 = (void*)0;
                l_256 ^= (-1L);
            }
            else
            {
                if (p_35)
                    break;
            }
            if (p_35)
                continue;
        }
    }
    else
    {
        for (g_48 = 0; (g_48 > (-25)); g_48--)
        {
            int *l_279 = &l_254;
            int *l_289 = &l_256;
            (*g_228) = l_279;
            for (p_35 = 11; (p_35 > 12); p_35 = safe_add_func_uint16_t_u_u(p_35, 8))
            {
                unsigned l_288 = 0xE432B5EFL;
                for (g_214 = 14; (g_214 > 27); g_214 = safe_add_func_int8_t_s_s(g_214, 3))
                {
                    for (g_144 = 3; (g_144 >= 0); g_144 -= 1)
                    {
                        int i;
                        (*g_228) = (void*)0;
                        (*l_279) = (((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0L, g_98[g_144])), g_98[g_144])) && 5UL) , g_98[g_144]);
                        if (l_253)
                            break;
                    }
                }
                if (l_288)
                    break;
            }
            (*l_289) |= ((*l_279) |= l_261);
            (*g_228) = (void*)0;
        }
    }
    return p_33;
}







static int * func_36(int p_37, unsigned p_38, unsigned p_39, unsigned short p_40, int * p_41)
{
    unsigned l_134 = 4294967295UL;
    int *l_154[6] = {&g_48, &g_53, &g_48, &g_53, &g_48, &g_53};
    char *l_187 = &g_57;
    char l_227 = 0xC2L;
    int **l_231 = &g_229[0][8];
    int ***l_230 = &l_231;
    unsigned **l_232 = &g_123;
    int l_233 = 0x5BCB941CL;
    int i;
    for (p_38 = 0; (p_38 <= 4); p_38 += 1)
    {
        short l_133 = (-2L);
        int l_145 = 0x9F227602L;
        int l_148 = (-5L);
        int *l_152 = (void*)0;
        int **l_151 = &l_152;
        int **l_153 = &l_152;
        unsigned short *l_183 = &g_49[4][1][0];
        unsigned short **l_182 = &l_183;
        for (g_48 = 4; (g_48 >= 1); g_48 -= 1)
        {
            int *l_129 = &g_53;
            int *l_130 = &g_53;
            if (func_50(p_38))
            {
                int *l_128[10][4][6] = {{{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}, {{&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}, {&g_48, &g_48, &g_48, &g_53, &g_53, &g_53}}};
                int **l_127[8][2] = {{&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}, {&l_128[4][3][1], &l_128[4][3][1]}};
                int i, j, k;
                p_41 = &p_37;
                p_41 = &p_37;
            }
            else
            {
                l_130 = l_129;
            }
        }
        for (g_60 = 4; (g_60 >= 1); g_60 -= 1)
        {
            char l_160 = (-6L);
            int l_185 = 0xBCC87407L;
            g_48 = 0x5EBD512FL;
        }
    }
    l_233 = (safe_lshift_func_uint16_t_u_s(((((*p_41) = (((&g_211[0] == (func_50((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(func_50(l_227), 1)), (p_39 | p_39)))) , l_187)) , g_228) != ((*l_230) = &l_154[0]))) , l_232) == (void*)0), 14));
    return (*g_228);
}







static int func_50(char p_51)
{
    int *l_52 = &g_53;
    int l_58 = 0x39CE8566L;
    unsigned char *l_82 = &g_46;
    int *l_114 = (void*)0;
    int *l_115 = &g_53;
    if (((*l_52) = p_51))
    {
        int **l_54 = &l_52;
        char *l_55 = (void*)0;
        char *l_56[10] = {&g_57, &g_57, &g_57, &g_57, &g_57, &g_57, &g_57, &g_57, &g_57, &g_57};
        int *l_59 = &g_60;
        int i;
        (*l_54) = &g_48;
        (*l_59) |= ((l_58 &= p_51) >= g_53);
        for (g_60 = 0; (g_60 != (-5)); g_60 = safe_sub_func_int8_t_s_s(g_60, 6))
        {
            int l_63 = 0L;
            for (g_57 = 0; (g_57 <= 4); g_57 += 1)
            {
                char l_71 = 0xD0L;
                if ((*l_52))
                    break;
                g_53 = (*l_52);
                l_63 = p_51;
                for (l_63 = 4; (l_63 >= 0); l_63 -= 1)
                {
                    unsigned l_70 = 0x0B252307L;
                    int *l_73 = &g_53;
                    (*l_73) &= (safe_div_func_uint16_t_u_u((((g_13[0] <= (safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s(0x05L, l_70)) != (p_51 == l_71)) ^ g_46), g_13[0]))) , (safe_unary_minus_func_int32_t_s(l_70))) < g_13[2]), g_13[3]));
                }
            }
            return g_53;
        }
        (*l_59) ^= (p_51 == p_51);
    }
    else
    {
        int l_74[3][3];
        int **l_89 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_74[i][j] = 5L;
        }
        if ((l_74[0][0] ^ p_51))
        {
            int *l_81 = &l_58;
            unsigned char *l_87 = (void*)0;
            for (g_53 = 0; (g_53 <= 2); g_53 += 1)
            {
                g_60 = ((*l_52) ^ 0xAAL);
                for (l_58 = 0; (l_58 <= 2); l_58 += 1)
                {
                    int i, j;
                    l_74[g_53][l_58] = l_74[g_53][l_58];
                }
            }
            (*l_81) &= ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((void*)0 == l_81), ((void*)0 == l_82))), p_51)), (safe_lshift_func_int8_t_s_u(((((*l_82) = 252UL) & (((l_74[1][1] = g_57) , ((((p_51 || (g_88[4][0] && (*l_52))) > 0x5A07F58EL) == g_88[1][0]) , l_89)) == l_89)) , g_60), 6)))) , 0xA90DD067L);
        }
        else
        {
            short *l_90 = &g_91;
            char *l_94 = &g_57;
            unsigned *l_95 = &g_96;
            unsigned *l_97 = &g_98[2];
            unsigned short *l_99[9] = {&g_49[0][3][2], &g_49[1][2][0], &g_49[0][3][2], &g_49[1][2][0], &g_49[0][3][2], &g_49[1][2][0], &g_49[0][3][2], &g_49[1][2][0], &g_49[0][3][2]};
            int l_102 = 8L;
            int i;
            if ((((((g_49[3][4][2] = ((((((p_51 < (g_88[4][0] >= ((*l_90) = p_51))) , g_88[4][0]) > ((*l_52) = p_51)) >= g_13[0]) , p_51) | ((*l_97) = ((*l_95) = (safe_rshift_func_int8_t_s_u((((*l_94) &= ((p_51 , p_51) , g_88[4][0])) == g_48), p_51)))))) == p_51) , g_98[3]) , p_51) || g_48))
            {
                if ((safe_lshift_func_uint8_t_u_u(l_102, 7)))
                {
                    int **l_103 = &l_52;
                    (*l_103) = &g_53;
                    for (l_58 = 3; (l_58 >= 0); l_58 -= 1)
                    {
                        (**l_103) ^= 0xE2F772B8L;
                        g_53 |= p_51;
                    }
                    (*l_103) = (g_88[4][0] , &l_102);
                }
                else
                {
                    return g_13[6];
                }
                for (g_57 = (-20); (g_57 < (-2)); ++g_57)
                {
                    int **l_106 = &l_52;
                    (*l_106) = &g_60;
                    if (l_102)
                        break;
                    l_52 = (*l_106);
                }
            }
            else
            {
                (*l_52) ^= ((65527UL ^ p_51) , (((safe_rshift_func_uint16_t_u_s(p_51, p_51)) ^ (p_51 , 1UL)) && ((safe_sub_func_uint32_t_u_u(((*l_97) = ((((void*)0 != &g_91) , (safe_unary_minus_func_int16_t_s(((*l_90) = ((safe_lshift_func_uint8_t_u_u((((*l_94) = p_51) ^ g_49[2][3][1]), p_51)) == g_88[3][0]))))) , 0x00D6BF4BL)), p_51)) == g_48)));
            }
        }
    }
    (*l_115) = ((-7L) ^ l_58);
    if ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(g_46, g_46)), (*l_115))), p_51)))
    {
        unsigned **l_124 = &g_123;
        l_124 = g_122;
    }
    else
    {
        int *l_125 = &g_53;
        int **l_126 = &l_52;
        (*l_126) = l_125;
    }
    return p_51;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_49[i][j][k], "g_49[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_98[i], "g_98[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_144, "g_144", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_147[i][j][k], "g_147[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_211[i], "g_211[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_392[i], "g_392[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_703, "g_703", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
