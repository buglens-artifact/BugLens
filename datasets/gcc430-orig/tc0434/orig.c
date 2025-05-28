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



static short g_7[4] = {0x4074L, 0x4074L, 0x4074L, 0x4074L};
static int g_9 = 0x5A9C4C8DL;
static int *g_8 = &g_9;
static int g_60 = (-10L);
static int *g_82 = &g_60;
static int **g_81 = &g_82;
static short g_93 = 0x1377L;
static unsigned g_99[8][9][3] = {{{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}, {{0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}, {0x00AFC629L, 0x87A386FCL, 1UL}}};
static int g_101[6][9] = {{0xC840D7AAL, 4L, 1L, (-3L), 1L, (-3L), 1L, 4L, 0xC840D7AAL}, {0xC840D7AAL, 4L, 1L, (-3L), 1L, (-3L), 1L, 4L, 0xC840D7AAL}, {0xC840D7AAL, 4L, 1L, (-3L), 1L, (-3L), 1L, 4L, 0xC840D7AAL}, {0xC840D7AAL, 4L, 1L, (-3L), 1L, (-3L), 1L, 4L, 0xC840D7AAL}, {0xC840D7AAL, 4L, 1L, (-3L), 1L, (-3L), 1L, 4L, 0xC840D7AAL}, {0xC840D7AAL, 4L, 1L, (-3L), 1L, (-3L), 1L, 4L, 0xC840D7AAL}};
static unsigned short g_126 = 65527UL;
static unsigned short g_128[3][1] = {{0UL}, {0UL}, {0UL}};
static char g_129 = 1L;
static unsigned *g_136 = (void*)0;
static unsigned **g_135 = &g_136;
static unsigned char g_151 = 255UL;
static unsigned char *g_179[1] = {(void*)0};
static unsigned char **g_178 = &g_179[0];
static unsigned char ***g_177 = &g_178;
static char g_185[6] = {1L, 1L, 7L, 1L, 1L, 7L};
static short g_186[7][9] = {{0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}, {0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}, {0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}, {0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}, {0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}, {0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}, {0xABDEL, 0x93EEL, 0L, 0x202AL, 0L, (-6L), 0L, 0x202AL, 0L}};
static char g_224 = 0x8DL;
static unsigned g_262 = 1UL;
static unsigned *g_274[6][10] = {{&g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0]}, {&g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0]}, {&g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0]}, {&g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0]}, {&g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0]}, {&g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0], &g_99[5][2][2], &g_99[5][5][0], &g_262, &g_99[5][5][0]}};
static char *g_298[2] = {&g_129, &g_129};
static char **g_297 = &g_298[0];
static int ****g_441 = (void*)0;
static int *g_450 = &g_101[1][2];
static unsigned ***g_523 = &g_135;
static int g_530 = 1L;
static unsigned g_531 = 4294967293UL;
static char ***g_583 = (void*)0;
static char ****g_582 = &g_583;
static short *g_596 = &g_93;
static short **g_595 = &g_596;
static unsigned short g_639 = 0UL;
static char g_668 = (-1L);
static int g_706 = 1L;
static unsigned g_776[10][7][3] = {{{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}, {{0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}, {0x9BBC85B4L, 0xE5CB6719L, 4294967295UL}}};
static unsigned g_778 = 1UL;
static unsigned char g_819 = 0x44L;
static int *g_821[7] = {&g_9, &g_101[5][2], &g_9, &g_101[5][2], &g_9, &g_101[5][2], &g_9};
static short g_858[5][3][1] = {{{0xCE82L}, {0xCE82L}, {0xCE82L}}, {{0xCE82L}, {0xCE82L}, {0xCE82L}}, {{0xCE82L}, {0xCE82L}, {0xCE82L}}, {{0xCE82L}, {0xCE82L}, {0xCE82L}}, {{0xCE82L}, {0xCE82L}, {0xCE82L}}};
static unsigned char g_921 = 0xE2L;
static int g_1079 = 5L;
static int g_1106 = (-1L);
static unsigned short **g_1110 = (void*)0;
static unsigned short *g_1149[4] = {(void*)0, &g_128[2][0], (void*)0, &g_128[2][0]};
static unsigned short **g_1148 = &g_1149[0];
static unsigned short **g_1150 = &g_1149[2];
static unsigned char g_1175 = 246UL;
static short g_1221[7] = {0x8CDDL, 0x8CDDL, 0x9AE9L, 0x8CDDL, 0x8CDDL, 0x9AE9L, 0x8CDDL};
static int **g_1237 = (void*)0;
static int ***g_1236[6][3][6] = {{{(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}}, {{(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}}, {{(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}}, {{(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}}, {{(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}}, {{(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}, {(void*)0, &g_1237, (void*)0, &g_1237, &g_1237, &g_1237}}};
static int g_1316 = 0x60A575AFL;
static int g_1408 = 4L;
static char ****g_1423 = (void*)0;
static unsigned *g_1448[10][1][5] = {{{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}, {{&g_531, &g_531, &g_776[5][6][2], (void*)0, &g_531}}};
static unsigned **g_1447 = &g_1448[5][0][2];
static unsigned **g_1456 = &g_274[3][5];
static unsigned char g_1508 = 253UL;



static unsigned func_1(void);
static int * func_2(char p_3, int * p_4, int * p_5, int * p_6);
static int * func_10(unsigned p_11, short p_12, int p_13, int * p_14, unsigned short p_15);
static unsigned func_17(int * p_18, int * p_19, int * p_20, unsigned p_21);
static unsigned short func_25(int p_26, int * p_27, short p_28);
static char func_31(unsigned p_32, unsigned p_33);
static unsigned func_38(int * p_39);
static unsigned short func_40(unsigned char p_41, short p_42, int p_43, int p_44, int p_45);
static unsigned short func_54(int * p_55, char p_56);
static short func_69(unsigned p_70, char p_71);
static unsigned func_1(void)
{
    int l_22[5][6][7] = {{{0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}}, {{0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}}, {{0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}}, {{0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}}, {{0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}, {0xEE491BA6L, 1L, 0x2E91C841L, 0x5CF1C946L, 0xC5674FA7L, 0xC914A3A6L, (-4L)}}};
    unsigned *l_875 = &g_531;
    int l_1080 = (-8L);
    unsigned l_1081[7];
    int *l_1519[5];
    unsigned ***l_1520 = &g_1447;
    int l_1521 = 0xBD1181F3L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1081[i] = 2UL;
    for (i = 0; i < 5; i++)
        l_1519[i] = &l_22[2][5][5];
    l_1519[2] = func_2(g_7[3], g_8, func_10((safe_unary_minus_func_uint32_t_u(((func_17(((l_22[2][5][5] || ((safe_add_func_uint8_t_u_u((func_25((*g_8), &g_9, ((safe_rshift_func_int8_t_s_u(func_31(((*l_875) = (g_776[5][6][2] = ((((**g_595) = (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((+func_38(&g_9)) , (l_22[3][1][6] || l_22[1][4][0])), 7)) & 1L), l_22[2][5][5]))) , (*g_8)) ^ l_22[2][5][5]))), l_22[2][5][5]), 0)) , l_22[2][5][5])) , 0xD2L), 255UL)) , 65535UL)) , (void*)0), &l_22[2][5][5], &l_22[2][5][5], l_22[2][5][5]) , 0L) >= l_1080))), l_1081[4], l_1081[6], &l_1080, g_7[3]), l_875);


    ;




    ;
    ;

    ;

    l_1519[1] = &l_22[0][1][1];
    (*l_1520) = &l_875;

    ;
    return l_1521;



}







static int * func_2(char p_3, int * p_4, int * p_5, int * p_6)
{
    int l_1513 = (-4L);
    int *l_1515 = &g_530;
    int **l_1514 = &l_1515;
    int ***l_1516 = &g_1237;
    int **l_1518 = &l_1515;
    int ***l_1517 = &l_1518;
    (*p_4) = (0x39FB33A4L ^ (l_1513 ^ (l_1514 != ((*l_1517) = ((*l_1516) = &l_1515)))));

    ;
    return p_5;



}







static int * func_10(unsigned p_11, short p_12, int p_13, int * p_14, unsigned short p_15)
{
    unsigned char **l_1082 = &g_179[0];
    int l_1083 = 0xD1096411L;
    int *l_1086 = (void*)0;
    int l_1099 = (-3L);
    unsigned char *l_1105 = &g_819;
    char ***l_1120 = &g_297;
    unsigned short l_1190 = 0xB8DFL;
    unsigned char l_1200 = 0x68L;
    unsigned char l_1204 = 0UL;
    char l_1230 = 0xD1L;
    unsigned *l_1261[9][6] = {{&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}, {&g_531, &g_776[5][6][2], &g_531, &g_776[5][6][2], &g_776[5][6][2], &g_531}};
    char l_1306[7];
    int *l_1358 = &g_101[5][2];
    short l_1359 = 8L;
    unsigned l_1369[9] = {4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL};
    int *l_1370 = &g_101[5][7];
    int **l_1377[6][4][6] = {{{&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}}, {{&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}}, {{&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}}, {{&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}}, {{&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}}, {{&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}, {&l_1370, &l_1370, &g_82, (void*)0, (void*)0, (void*)0}}};
    unsigned short **l_1390 = &g_1149[2];
    short l_1409 = 0x983FL;
    int *l_1429 = (void*)0;
    unsigned short l_1433 = 0xD1BAL;
    unsigned short l_1439 = 65528UL;
    int *l_1441 = &l_1083;
    unsigned char *l_1442 = &g_819;
    unsigned l_1445 = 0x107DF650L;
    int l_1446 = 0xC4D4CDD3L;
    int ****l_1457 = &g_1236[5][2][4];
    short **l_1468 = &g_596;
    short **l_1504 = &g_596;
    int *l_1512 = &g_101[5][2];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1306[i] = 0L;
    for (p_15 = 0; (p_15 <= 1); p_15 += 1)
    {
        int l_1084 = 0L;
        for (g_921 = 0; (g_921 <= 1); g_921 += 1)
        {
            (*g_177) = l_1082;
        }
        if (l_1083)
            continue;
        for (g_706 = 0; (g_706 <= 1); g_706 += 1)
        {
            int l_1088 = 0L;
            short ***l_1089 = &g_595;
            int **l_1092[9][5] = {{&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}, {&g_821[0], &l_1086, (void*)0, &l_1086, &g_821[0]}};
            int i, j;
            if ((*p_14))
                break;
        }
    }
    if ((safe_add_func_uint8_t_u_u((((((*l_1105) = ((safe_sub_func_int16_t_s_s((*g_596), (+((safe_rshift_func_int8_t_s_u(0xB4L, (((l_1099 < (safe_rshift_func_int16_t_s_u((l_1086 == ((((safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s(0x40B5L, p_11)))) <= (*p_14)) , (-9L)) , (l_1083 , &g_1079))), 5))) ^ (*p_14)) , 0x0FL))) , p_11)))) , 0x25L)) > l_1099) , 1L) ^ p_11), g_1106)))
    {
        unsigned char l_1109 = 0x32L;
        short **l_1117 = &g_596;
        char *l_1118 = (void*)0;
        char *l_1119 = &g_185[2];
        int l_1121 = 0xC81177F4L;
        int *l_1127[3];
        short l_1141 = 9L;
        int *l_1153 = &g_706;
        unsigned char **l_1158 = (void*)0;
        short l_1214 = 2L;
        short l_1216 = 0x5CC8L;
        char l_1226 = 0x44L;
        int l_1245 = 0x2B874DDAL;
        unsigned l_1274 = 0x364CA2FAL;
        int *l_1285[1][6];
        unsigned l_1315 = 0x34370E4CL;
        int **l_1352 = &l_1127[0];
        int **l_1353 = &g_821[0];
        int **l_1354 = &g_450;
        int **l_1355 = &l_1285[0][3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1127[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1285[i][j] = (void*)0;
        }
        if (((l_1121 = (((p_13 , ((*g_135) = (**g_523))) == (void*)0) | (safe_mul_func_int8_t_s_s(l_1109, ((((void*)0 != g_1110) < (((safe_mul_func_int8_t_s_s((((p_11 > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((*l_1119) = (l_1117 != l_1117)), p_11)), 10))) , l_1120) != l_1120), l_1109)) , l_1109) | p_11)) > p_15))))) <= (-10L)))
        {
            int *l_1122 = &g_101[5][2];
            return l_1122;


        }
        else
        {
            int **l_1123 = (void*)0;
            int **l_1124[10] = {&g_82, &g_82, &g_821[0], &g_82, &g_82, &g_821[0], &g_82, &g_82, &g_821[0], &g_82};
            char l_1161 = 0L;
            int *l_1181 = &g_1079;
            unsigned l_1197 = 0UL;
            unsigned short l_1201 = 0xEA0FL;
            int i;
            l_1086 = (p_15 , &l_1083);

            ;
            if ((safe_lshift_func_uint16_t_u_s((((*l_1086) >= (func_31(g_668, (*l_1086)) == (*p_14))) && ((**g_595) = func_25(l_1109, (l_1127[1] = &p_13), (p_11 , (**g_595))))), 11)))
            {
                unsigned l_1132 = 0x6910317AL;
                unsigned *l_1133 = &g_776[5][6][2];
                int l_1136 = 0x79F80CCCL;
                unsigned short *l_1142[4][10][3] = {{{&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}}, {{&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}}, {{&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}}, {{&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}, {&g_126, &g_126, &g_639}}};
                int *l_1168 = (void*)0;
                int *l_1172[7] = {&g_60, (void*)0, &g_60, (void*)0, &g_60, (void*)0, &g_60};
                unsigned l_1189[5] = {0x283C954CL, 1UL, 0x283C954CL, 1UL, 0x283C954CL};
                int i, j, k;
                if (l_1132)
                {
                    unsigned char l_1143 = 0x44L;
                    int *l_1154 = &g_101[5][2];
                    (*g_8) = (*g_8);
                    if (l_1132)
                    {
                        (*p_14) = (*g_8);
                        g_450 = &p_13;

                        ;
                    }
                    else
                    {
                        unsigned l_1146 = 1UL;
                        unsigned short ***l_1147[9] = {&g_1110, (void*)0, &g_1110, (void*)0, &g_1110, (void*)0, &g_1110, (void*)0, &g_1110};
                        int i;
                        (*g_8) = ((*p_14) = (safe_lshift_func_int8_t_s_u(l_1146, ((+(((g_1148 = (g_1110 = g_1110)) == (g_1150 = &g_1149[0])) && (((*l_1086) = (p_15 ^ (safe_rshift_func_uint16_t_u_u(p_13, 9)))) , (*g_8)))) >= l_1132))));

                        ;
                    }


                    ;
                    g_821[5] = l_1153;
                    g_82 = l_1154;

                    ;
                }
                else
                {
                    int l_1163 = 0x4FB064BFL;
                    int *l_1169 = &g_9;
                    if ((safe_lshift_func_int16_t_s_s(((*g_596) = (*g_596)), 5)))
                    {
                        unsigned char **l_1157 = &g_179[0];
                        int l_1162 = (-7L);
                        int *l_1164 = &g_1079;
                        int l_1165[4][1];
                        unsigned *l_1166 = (void*)0;
                        unsigned *l_1167 = &l_1132;
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1165[i][j] = 0x3C702F8DL;
                        }
                        (*g_8) = ((&l_1142[2][7][2] == (((*l_1167) = (l_1165[1][0] = ((*l_1133) = (((l_1157 = ((*g_177) = l_1157)) == l_1158) != func_31((((&g_776[5][6][2] == &g_531) & (l_1162 = (safe_rshift_func_int8_t_s_u(l_1161, 5)))) || (((((*l_1164) = (l_1163 && (((-6L) && ((p_12 | (*p_14)) || p_12)) , l_1132))) , 0L) <= p_11) || l_1136)), l_1165[2][0]))))) , &g_1149[0])) & p_13);
                        return &g_1106;


                    }
                    else
                    {
                        unsigned l_1176 = 4294967292UL;
                        p_14 = &l_1121;

                        ;
                        g_821[0] = l_1168;
                        (*l_1153) = (*l_1086);
                        (*p_14) = (((func_25((*p_14), (l_1169 = &p_13), (safe_mul_func_uint8_t_u_u(((*l_1105) = ((*g_8) | (func_31(l_1163, ((safe_add_func_int16_t_s_s(((0L < p_13) != l_1163), 0x383BL)) , 0xC5D014B6L)) | p_13))), g_1175))) , (*l_1169)) , (-10L)) , l_1176);

                        ;
                    }

                    ;
                    ;
                    for (l_1099 = 0; (l_1099 != (-20)); --l_1099)
                    {
                        int *l_1179 = &g_1079;
                        int **l_1180[4][8][8] = {{{&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}}, {{&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}}, {{&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}}, {{&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}, {&l_1179, (void*)0, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179, &l_1179}}};
                        int *l_1184 = &l_1083;
                        int i, j, k;
                        (*g_8) = (((p_15 > (((l_1086 != (l_1181 = l_1179)) == 1L) >= (*l_1169))) == ((0x461F5ACFL | (*p_14)) < (safe_lshift_func_int16_t_s_u((*l_1169), (g_262 , (*l_1086)))))) , (*p_14));
                        (*l_1153) = 0xA6F8BB4FL;
                        return &g_60;


                    }
                    (*l_1086) = ((((*p_14) , (((((l_1189[2] < 0x1A54C379L) | p_11) , p_13) < p_11) <= 0xBB778C21L)) <= (*l_1086)) , 1L);
                    l_1169 = ((l_1190 && (((p_12 | func_31((((*l_1120) = (*l_1120)) == (void*)0), (&l_1124[9] == &l_1124[6]))) > (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_1197, 3)) , (((safe_mod_func_uint32_t_u_u((+((*l_1086) , (*l_1086))), (*p_14))) , l_1200) , 0x95B4L)), (*l_1086))) & (-1L)), (*l_1086)))) || p_13)) , &l_1083);

                    ;
                }



                ;
                g_450 = &p_13;

                ;
                l_1168 = (void*)0;
                l_1201 = (*g_450);
            }
            else
            {
                unsigned short l_1218 = 65527UL;
                int *l_1229[6] = {&g_101[4][6], (void*)0, &g_101[4][6], (void*)0, &g_101[4][6], (void*)0};
                unsigned l_1233 = 1UL;
                int i;
                for (g_1175 = 20; (g_1175 < 58); ++g_1175)
                {
                    int l_1217 = 0xEB5A956EL;
                    (*g_8) = l_1204;
                    for (l_1204 = (-12); (l_1204 < 19); l_1204 = safe_add_func_int32_t_s_s(l_1204, 6))
                    {
                        int l_1209 = (-1L);
                        unsigned *l_1215 = &g_262;
                        l_1209 = (p_12 > (safe_add_func_int16_t_s_s((*g_596), p_12)));
                        (*g_8) = 1L;
                        (*l_1153) = (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((((((*l_1215) = l_1214) & (*p_14)) | p_12) <= (p_15 = (p_12 , 0UL))) <= l_1216), p_11)), (p_13 > (4294967287UL > l_1217))));
                        (*p_14) = l_1218;
                    }
                    for (g_668 = 0; (g_668 != (-2)); --g_668)
                    {
                        p_14 = &g_101[5][2];

                        ;
                    }
                    if (l_1218)
                        continue;
                }


                if (((*l_1086) = (+(*g_8))))
                {
                    int ****l_1238 = (void*)0;
                    int ****l_1239 = &g_1236[4][0][3];
                    int l_1244 = 0x8B8CC5CAL;
                    g_82 = &p_13;

                    ;
                    for (g_126 = 0; (g_126 > 2); g_126 = safe_add_func_uint16_t_u_u(g_126, 1))
                    {
                        return l_1229[1];



                    }
                    (*l_1086) = ((*g_82) = (((*g_8) = 0xF00E36ADL) == ((((*l_1086) & l_1230) != ((*g_596) = ((safe_rshift_func_uint8_t_u_s(((p_11 && (l_1233 > (((safe_add_func_int8_t_s_s((((*p_14) = (((*l_1239) = g_1236[4][0][3]) != (void*)0)) < (p_12 != (safe_mod_func_uint16_t_u_u(((!(safe_add_func_uint32_t_u_u((1UL | p_15), p_12))) > l_1244), p_15)))), 0x35L)) || p_11) & l_1244))) <= 4UL), l_1245)) > p_15))) && (*p_14))));
                }
                else
                {
                    int *l_1246 = &l_1121;
                    short *l_1253 = &g_1221[6];
                    int l_1254 = 0x015473F5L;
                    p_14 = (p_11 , &l_1099);

                    ;
                }



                l_1086 = &l_1083;
            }





            ;
        }




        ;

        ;
        if ((safe_rshift_func_int8_t_s_s(p_15, 0)))
        {
            int l_1268 = 2L;
            int l_1269[5][5][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}}};
            char **l_1279 = &g_298[0];
            short l_1314 = (-1L);
            int i, j, k;
            (*l_1120) = ((safe_rshift_func_int16_t_s_s(0xF9B0L, p_12)) , ((safe_add_func_int32_t_s_s((*p_14), ((*l_1153) < ((l_1261[0][2] = l_1127[1]) == p_14)))) , (*l_1120)));


            for (p_13 = (-9); (p_13 != 18); ++p_13)
            {
                for (l_1226 = 0; l_1226 < 7; l_1226 += 1)
                {
                    g_1221[l_1226] = (-8L);
                }
            }
            for (l_1214 = 20; (l_1214 < (-1)); l_1214 = safe_sub_func_uint8_t_u_u(l_1214, 2))
            {
                int *l_1273 = &l_1269[2][0][0];
                int *l_1295 = &g_101[5][2];
                if ((safe_add_func_int8_t_s_s((((*g_596) , (**g_595)) < l_1268), (l_1269[2][0][0] = 0xC7L))))
                {
                    int **l_1272 = &l_1153;
                    (*l_1273) = (safe_rshift_func_uint8_t_u_s(((*l_1086) > (l_1274 , (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((*l_1120) = l_1279) == (void*)0), (safe_add_func_int8_t_s_s(p_13, l_1269[3][4][0])))), p_12)))), (*l_1153)));
                    (*l_1272) = &l_1099;

                    ;
                    if (l_1269[2][0][0])
                    {
                        unsigned *l_1282 = (void*)0;
                        unsigned *l_1283 = &g_262;
                        (*g_8) = (*l_1273);
                        (*p_14) = (*p_14);
                        (*l_1086) = (-6L);
                        if ((*p_14))
                            break;
                    }
                    else
                    {
                        int *l_1284[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1284[i] = &l_1269[2][0][0];
                        if ((*p_14))
                            break;
                        return l_1285[0][3];




                    }
                }
                else
                {
                    int *l_1290[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1290[i] = &g_706;
                    for (l_1268 = 0; (l_1268 <= (-6)); l_1268--)
                    {
                        int *l_1288 = &g_101[5][2];
                        int **l_1289[4] = {(void*)0, &l_1127[0], (void*)0, &l_1127[0]};
                        int i;
                        l_1290[2] = (p_12 , &p_13);
                        if ((*p_14))
                            break;
                    }


                    for (g_819 = 0; (g_819 >= 49); g_819++)
                    {
                        int *l_1293 = (void*)0;
                        (*p_14) = (*l_1086);
                        return l_1293;




                    }
                    for (g_668 = 0; (g_668 <= 2); g_668 += 1)
                    {
                        int *l_1294 = &g_9;
                        return l_1294;




                    }
                }

                ;
                return l_1295;




            }

            ;
            for (l_1083 = 23; (l_1083 <= 20); l_1083 = safe_sub_func_int8_t_s_s(l_1083, 6))
            {
                int *l_1298 = &g_60;
                short **l_1334 = &g_596;
                unsigned l_1338 = 0x3216C931L;
                int l_1339 = 0xF9C62ACAL;
                l_1298 = (p_14 = (void*)0);

                ;
                ;
                if (p_11)
                {
                    int **l_1299 = &l_1127[1];
                    (*l_1299) = &p_13;
                }
                else
                {
                    unsigned l_1318 = 0xA4AA8CD7L;
                    for (g_1079 = 0; (g_1079 < (-21)); g_1079 = safe_sub_func_int32_t_s_s(g_1079, 7))
                    {
                        (*g_8) = 5L;
                    }
                    for (g_706 = 2; (g_706 >= 0); g_706 -= 1)
                    {
                        unsigned short *l_1311 = &g_128[2][0];
                        short *l_1317[4];
                        short ***l_1333[7] = {&g_595, &l_1117, &g_595, &l_1117, &g_595, &l_1117, &g_595};
                        int l_1337 = 0x381C8F5DL;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_1317[i] = &l_1216;
                        l_1127[g_706] = g_274[(g_706 + 2)][(g_706 + 2)];
                        (*g_8) = (l_1318 ^ 250UL);
                        l_1337 = (p_12 , (p_11 == ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((-6L) > (*g_8)) , (((g_595 = l_1117) != l_1334) , (((safe_add_func_int32_t_s_s(((*g_8) = (*l_1086)), func_31(p_11, l_1269[1][3][0]))) & 1L) , 9UL))), l_1314)), l_1337)), l_1338)), (*l_1153))) , p_13) , 0x56L), l_1318)), l_1339)), 4)) , (*l_1086))));
                    }
                    if ((*g_8))
                    {
                        short ***l_1340 = &l_1117;
                        int **l_1341 = &l_1127[1];
                        int *l_1342[5][8][6] = {{{&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}}, {{&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}}, {{&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}}, {{&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}}, {{&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}, {&l_1121, &l_1269[2][0][0], &g_1106, &l_1269[2][0][0], &g_60, &l_1083}}};
                        unsigned *l_1343 = &g_778;
                        unsigned *l_1344[5][5] = {{(void*)0, &g_99[5][5][0], &g_99[2][5][0], &g_262, &g_99[1][7][0]}, {(void*)0, &g_99[5][5][0], &g_99[2][5][0], &g_262, &g_99[1][7][0]}, {(void*)0, &g_99[5][5][0], &g_99[2][5][0], &g_262, &g_99[1][7][0]}, {(void*)0, &g_99[5][5][0], &g_99[2][5][0], &g_262, &g_99[1][7][0]}, {(void*)0, &g_99[5][5][0], &g_99[2][5][0], &g_262, &g_99[1][7][0]}};
                        char l_1345 = 2L;
                        int i, j, k;
                        if (l_1269[2][0][0])
                            break;
                        l_1342[2][0][3] = ((((void*)0 != l_1340) , 4L) , ((*l_1341) = &p_13));


                        (*l_1153) = l_1345;
                        g_82 = &p_13;

                        ;
                    }
                    else
                    {
                        unsigned l_1346 = 0UL;
                        if (l_1346)
                            break;
                    }
                    for (p_13 = 1; (p_13 >= 0); p_13 -= 1)
                    {
                        int *l_1347 = (void*)0;
                        return l_1347;




                    }
                }
            }



        }
        else
        {
            l_1127[1] = &p_13;
        }



        ;

        (*l_1086) = (((*l_1358) = func_25((*l_1086), &l_1121, (*l_1086))) == 7L);
    }
    else
    {
        short ***l_1360 = &g_595;
        short ****l_1361 = &l_1360;
        unsigned char l_1362 = 0xE8L;
        char l_1373 = 6L;
        int *l_1374 = &g_60;
        unsigned char l_1376[4] = {0xE0L, 0x05L, 0xE0L, 0x05L};
        int i;
        p_14 = &p_13;

        ;
        l_1362 = ((*p_14) = (((*l_1361) = l_1360) == (void*)0));
        (*l_1358) = ((*g_8) = l_1362);
        for (p_11 = 0; (p_11 == 12); p_11 = safe_add_func_int32_t_s_s(p_11, 6))
        {
            unsigned char *l_1365 = (void*)0;
            int l_1368 = 3L;
            int **l_1375 = &g_821[0];
            (*p_14) = (((((l_1365 = &l_1362) == (*l_1082)) , (safe_mul_func_int16_t_s_s(l_1368, (!(p_15 = ((l_1369[2] >= ((*l_1358) = (l_1362 >= (p_15 > 0x39L)))) ^ (safe_lshift_func_uint8_t_u_s(l_1368, l_1373)))))))) , (*g_177)) != (*g_177));

            ;
            (*l_1375) = l_1374;
            (*p_14) = l_1376[1];
        }


    }





    ;
    ;

    g_450 = &l_1083;

    ;
    if ((*g_8))
    {
        int *l_1380 = &l_1099;
        (*l_1358) = ((safe_add_func_uint16_t_u_u(0x94BEL, p_11)) , 3L);
        p_14 = l_1380;

        ;
    }
    else
    {
        int *l_1384 = &g_706;
        int l_1385[5] = {0xA3345141L, 1L, 0xA3345141L, 1L, 0xA3345141L};
        unsigned l_1391 = 0xD5B43391L;
        unsigned ***l_1393 = &g_135;
        int l_1410 = 1L;
        char ****l_1417[9] = {&g_583, &l_1120, &g_583, &l_1120, &g_583, &l_1120, &g_583, &l_1120, &g_583};
        unsigned short **l_1422 = (void*)0;
        int l_1432 = 0L;
        char l_1434 = 0x3EL;
        int *l_1461 = &l_1385[0];
        unsigned char l_1473 = 252UL;
        unsigned char l_1489 = 0x19L;
        short **l_1505 = &g_596;
        int i;
        if ((*l_1370))
        {
            int l_1381 = 0L;
            char l_1392 = 0x24L;
            int ****l_1458 = &g_1236[4][0][3];
            unsigned l_1470 = 0x823C3949L;
            unsigned l_1471[6] = {0xBAAA0A38L, 1UL, 0xBAAA0A38L, 1UL, 0xBAAA0A38L, 1UL};
            int i;
            if (((((l_1381 || 0xC259L) & p_11) , l_1393) != (void*)0))
            {
                unsigned short ***l_1396 = &g_1110;
                int l_1397 = (-1L);
                int *l_1404[4] = {&g_101[5][2], &l_1397, &g_101[5][2], &l_1397};
                char *l_1407[9][1];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1407[i][j] = &g_668;
                }
                if ((((safe_sub_func_uint16_t_u_u(65535UL, ((((((*l_1396) = l_1390) != (void*)0) || l_1397) && (~(safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((p_15 , ((void*)0 != &g_595)), (((*l_1384) = (((safe_sub_func_uint32_t_u_u(p_12, (*g_450))) , (void*)0) != &g_523)) ^ g_1408))) || p_13) || l_1409), p_15)))) || l_1381))) > p_13) | (*g_596)))
                {
                    p_13 = l_1381;
                    (*g_450) = l_1381;
                }
                else
                {
                    char *****l_1418[3];
                    unsigned short **l_1421 = &g_1149[3];
                    int l_1426[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1418[i] = &g_582;
                    for (i = 0; i < 3; i++)
                        l_1426[i] = (-1L);
                    g_450 = &p_13;

                    ;
                    (*g_8) = (*g_450);
                    p_14 = &l_1397;

                    ;
                    (*l_1370) = (l_1410 | ((**g_595) = ((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((g_582 = l_1417[3]) != ((safe_lshift_func_int16_t_s_s((((*l_1396) = &g_1149[0]) == (l_1422 = l_1421)), 1)) , (g_1423 = (void*)0))), p_15)), p_12)) == ((*g_450) = ((safe_sub_func_uint8_t_u_u(p_13, p_11)) <= l_1426[0]))) , p_11) != p_15)));

                    ;
                    ;
                }

                ;
                ;

                ;
                ;
            }
            else
            {
                int *l_1427[6][8] = {{&l_1385[4], &l_1385[4], &l_1385[3], &g_101[0][7], &g_706, &l_1385[4], &g_706, &g_101[0][7]}, {&l_1385[4], &l_1385[4], &l_1385[3], &g_101[0][7], &g_706, &l_1385[4], &g_706, &g_101[0][7]}, {&l_1385[4], &l_1385[4], &l_1385[3], &g_101[0][7], &g_706, &l_1385[4], &g_706, &g_101[0][7]}, {&l_1385[4], &l_1385[4], &l_1385[3], &g_101[0][7], &g_706, &l_1385[4], &g_706, &g_101[0][7]}, {&l_1385[4], &l_1385[4], &l_1385[3], &g_101[0][7], &g_706, &l_1385[4], &g_706, &g_101[0][7]}, {&l_1385[4], &l_1385[4], &l_1385[3], &g_101[0][7], &g_706, &l_1385[4], &g_706, &g_101[0][7]}};
                int i, j;
                p_14 = l_1427[5][2];

                ;
            }

            ;
            ;

            ;
            ;
            (*l_1370) = (((p_11 = ((((safe_unary_minus_func_uint32_t_u(((*l_1370) || (-7L)))) == 1UL) > 0x4B3CA13CL) > l_1392)) & 0x56E4F91AL) != p_15);
            for (g_530 = (-10); (g_530 != (-25)); g_530--)
            {
                int *l_1440 = &g_1106;
                unsigned ***l_1449[1];
                int *l_1453 = &l_1385[2];
                int i;
                for (i = 0; i < 1; i++)
                    l_1449[i] = &g_1447;
                (*l_1370) = (((safe_add_func_uint16_t_u_u(((0x1B20L != (l_1439 >= ((*l_1440) == (-1L)))) > p_12), (*l_1440))) != (*l_1440)) > 4L);
                l_1446 = l_1381;
                l_1384 = (l_1440 = ((((g_1447 = g_1447) != (void*)0) <= 8UL) , (void*)0));

                ;
                ;
                for (p_11 = (-4); (p_11 <= 33); p_11 = safe_add_func_uint32_t_u_u(p_11, 9))
                {
                    int *l_1452 = &g_706;
                    unsigned **l_1455 = &g_136;
                    unsigned ***l_1454[5] = {(void*)0, &l_1455, (void*)0, &l_1455, (void*)0};
                    int *****l_1459 = (void*)0;
                    int *****l_1460 = &l_1458;
                    short **l_1469 = &g_596;
                    unsigned l_1472 = 5UL;
                    int i;
                    l_1453 = (l_1452 = (l_1440 = &p_13));

                    ;
                    ;
                    ;
                    (*l_1440) = ((((*g_523) != (g_1456 = (*g_523))) || (((*l_1461) = ((l_1457 != ((*l_1460) = l_1458)) , ((l_1472 = ((*g_596) , p_12)) | 6UL))) >= l_1473)) , 0x4DE7DEA0L);

                    ;
                }

                ;
                ;
            }

            ;
            ;
        }
        else
        {
            int l_1491[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1491[i] = 0L;
            g_450 = &p_13;

            ;
            for (l_1190 = 0; (l_1190 <= 0); l_1190 += 1)
            {
                unsigned l_1488 = 0xAEF8B975L;
                short l_1490[9][2][3] = {{{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}, {{0x6DB8L, 0xFD4FL, (-1L)}, {0x6DB8L, 0xFD4FL, (-1L)}}};
                int i, j, k;
                for (l_1230 = 0; (l_1230 <= 6); l_1230 += 1)
                {
                    char ****l_1480 = (void*)0;
                    char *****l_1481 = &l_1480;
                    int i;
                    if (((*l_1384) = (((+((p_11 , p_15) , (*l_1370))) > p_12) & l_1306[l_1230])))
                    {
                        unsigned l_1509 = 4294967295UL;
                        unsigned l_1510 = 4294967294UL;
                        (*l_1358) = (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(l_1509, l_1510)), p_13));
                    }
                    else
                    {
                        int *l_1511 = &g_706;
                        return l_1511;




                    }
                }
            }
        }

        ;
        ;

        ;
        ;
        ;
        ;
    }

    ;
    ;

    ;
    ;
    return l_1512;





}







static unsigned func_17(int * p_18, int * p_19, int * p_20, unsigned p_21)
{
    unsigned ***l_904[5][1][2];
    int l_907 = 0x40356544L;
    short l_910 = 0x6197L;
    int *l_911 = &g_60;
    int l_928 = 0xFDE1B83EL;
    short l_1039 = 0x37D6L;
    unsigned short *l_1072 = &g_126;
    unsigned short **l_1071[8] = {&l_1072, &l_1072, &l_1072, &l_1072, &l_1072, &l_1072, &l_1072, &l_1072};
    unsigned short ***l_1070 = &l_1071[6];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_904[i][j][k] = &g_135;
        }
    }
    if (((l_904[2][0][0] == &g_135) < ((safe_lshift_func_uint8_t_u_s(l_907, 6)) != (safe_add_func_int8_t_s_s((p_21 , p_21), l_910)))))
    {
        return p_21;
    }
    else
    {
        short l_914 = 0L;
        unsigned *l_920 = &g_776[5][6][2];
        unsigned **l_919 = &l_920;
        unsigned short *l_985 = &g_639;
        unsigned short **l_984 = &l_985;
        unsigned short ***l_983[10][4] = {{(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}, {(void*)0, &l_984, &l_984, &l_984}};
        int l_1001[10];
        int l_1024[10] = {(-3L), 1L, (-3L), 1L, (-3L), 1L, (-3L), 1L, (-3L), 1L};
        unsigned ****l_1025[8][7][4] = {{{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}, {{&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}, {&l_904[0][0][0], &g_523, (void*)0, &g_523}}};
        unsigned char l_1061 = 0x05L;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1001[i] = 4L;
        l_911 = p_18;

        ;
        if (((*p_20) = ((safe_mod_func_int32_t_s_s((*p_20), l_914)) , (safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(((*g_596) = (((*l_919) = &g_776[5][6][2]) == (void*)0)), 0x0CFBL)) > ((!func_25(g_921, p_19, p_21)) | p_21)) > p_21), p_21)))))
        {
            int l_927 = 0xEBA270D1L;
            int *l_952 = &l_927;
            int **l_951 = &l_952;
            int l_964[8][10][3] = {{{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}, {{0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}, {0xD732CAD3L, 0x160E489BL, 0xCA6CF691L}}};
            int *l_1003 = &g_530;
            unsigned l_1016[8] = {4294967294UL, 4294967294UL, 0x3216FC2DL, 4294967294UL, 4294967294UL, 0x3216FC2DL, 4294967294UL, 4294967294UL};
            int **l_1021 = &g_821[6];
            int i, j, k;
            for (g_921 = (-26); (g_921 >= 4); g_921 = safe_add_func_uint8_t_u_u(g_921, 2))
            {
                unsigned l_926 = 0x48761047L;
                int ***l_953 = &l_951;
                int *l_963 = &g_9;
                if ((safe_rshift_func_uint8_t_u_u((l_926 = p_21), (((p_21 || (*g_8)) , (*g_8)) , 0x3AL))))
                {
                    l_928 = l_927;
                }
                else
                {
                    char l_947 = 0L;
                    unsigned char *l_948 = (void*)0;
                    unsigned char *l_949 = &g_819;
                    int l_950 = 9L;
                    if (l_926)
                    {
                        int **l_929[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_929[i] = &g_82;
                        g_821[0] = (l_911 = (void*)0);
                    }
                    else
                    {
                        unsigned l_930[2][9][8] = {{{0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}}, {{0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}, {0x04A259DCL, 4294967295UL, 0UL, 0x8B677074L, 4294967286UL, 0x342B8CB4L, 0x436A3236L, 0x7E93737EL}}};
                        int i, j, k;
                        if (l_930[1][1][7])
                            break;
                    }
                    (*p_20) = (safe_lshift_func_uint8_t_u_u(p_21, (l_950 = ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(l_926, (((safe_lshift_func_uint8_t_u_u(((*l_949) = (safe_mod_func_int8_t_s_s((p_21 & p_21), p_21))), 4)) == l_926) , p_21))) == 0xE9L), p_21)) >= l_947))));
                }
                (*l_953) = l_951;
                for (g_262 = (-27); (g_262 < 29); ++g_262)
                {
                    char l_958 = 0x88L;
                    int l_965 = 0x20EDCE3AL;
                    unsigned short *l_980 = &g_126;
                    unsigned short ***l_986 = (void*)0;
                    unsigned char *l_987 = &g_819;
                }
                if ((*p_20))
                {
                    unsigned char *l_1002 = &g_819;
                    int l_1017 = 0xFDDC64DDL;
                    int **l_1018 = &g_821[5];
                    (*p_20) = (((*l_951) == (((*l_1002) = (((safe_lshift_func_uint8_t_u_u(((*l_963) = ((p_21 != 0UL) || ((l_1001[2] = (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_31(l_964[7][2][2], p_21), ((*p_20) & (!l_914)))), 255UL)), 2))) == 0x8AEF3CC2L))), p_21)) <= 0L) > 0x6EDDL)) , l_1003)) != p_21);
                    (*g_8) = 1L;
                    (*l_1018) = (func_25((p_21 , ((p_21 && p_21) < p_21)), &l_1001[2], l_907) , p_20);
                }
                else
                {
                    int **l_1019 = (void*)0;
                    int **l_1020 = &g_450;
                    if ((*p_19))
                        break;
                    (*l_1020) = l_963;

                    ;
                }
            }


            (*l_1021) = &l_1001[5];


            if ((((safe_mod_func_uint16_t_u_u((1L | ((l_1001[2] == (((((l_1024[4] = func_25(((l_914 ^ 9UL) , (-5L)), &l_907, p_21)) | p_21) || p_21) == 0x7988L) , p_21)) == p_21)), 0xF7BFL)) , l_1025[7][6][2]) != (void*)0))
            {
                (*p_20) = ((void*)0 != &p_18);
            }
            else
            {
                char l_1028 = 0xCDL;
                unsigned char **l_1044[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1044[i] = &g_179[0];
                if (l_1024[4])
                {
                    (*l_1021) = p_19;
                    (*l_1021) = (*l_1021);
                }
                else
                {
                    unsigned l_1045 = 0xD15611B7L;
                    unsigned *l_1046 = &l_1045;
                    (*p_20) = (((**l_984) = (!(safe_lshift_func_uint16_t_u_s(g_776[6][1][1], (0x76E9L | func_31(((*l_1046) = (l_1028 | (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_964[3][0][2] = ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_21, (l_1039 = 8L))), (safe_add_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(((void*)0 != l_1044[2]), 0UL)) != l_1028) || l_1028) , l_1001[2]), p_21)))) >= l_1045)), 2)), p_21)), 247UL)))), p_21)))))) > 65526UL);
                    p_18 = l_1046;

                    ;
                }


                (*p_20) = l_1028;
                (*l_1021) = p_20;
                for (l_910 = 2; (l_910 <= (-26)); --l_910)
                {
                    for (l_1028 = 0; (l_1028 >= 0); ++l_1028)
                    {
                        p_20 = &l_1001[2];

                        ;
                        (*l_1021) = (void*)0;
                    }


                    for (g_129 = 0; (g_129 <= (-16)); g_129--)
                    {
                        (*l_1021) = (*l_1021);
                        (*l_1021) = (p_21 , p_19);
                        if ((*p_19))
                            continue;
                        (*l_1021) = p_19;
                    }
                    return p_21;


                }
            }


            for (g_224 = 0; (g_224 <= 6); g_224 += 1)
            {
                int i;
                (*l_1021) = g_821[g_224];
                (*g_177) = (*g_177);
                p_20 = g_821[g_224];
            }


        }
        else
        {
            unsigned char l_1062[4][10] = {{1UL, 248UL, 0UL, 0x80L, 0UL, 1UL, 0xF8L, 255UL, 0UL, 255UL}, {1UL, 248UL, 0UL, 0x80L, 0UL, 1UL, 0xF8L, 255UL, 0UL, 255UL}, {1UL, 248UL, 0UL, 0x80L, 0UL, 1UL, 0xF8L, 255UL, 0UL, 255UL}, {1UL, 248UL, 0UL, 0x80L, 0UL, 1UL, 0xF8L, 255UL, 0UL, 255UL}};
            int *l_1067 = (void*)0;
            int i, j;
            for (g_224 = 0; (g_224 != 1); g_224 = safe_add_func_int16_t_s_s(g_224, 9))
            {
                char l_1059[10][1][6] = {{{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}, {{0x98L, 0xC9L, 0xBDL, (-9L), (-6L), (-9L)}}};
                int l_1063 = (-5L);
                unsigned *l_1075[1][2][3];
                unsigned char l_1076 = 3UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1075[i][j][k] = (void*)0;
                    }
                }
                if ((p_21 & ((safe_rshift_func_uint16_t_u_u(p_21, ((*p_20) == ((l_1063 = (((safe_rshift_func_uint16_t_u_s(g_129, (l_1059[6][0][0] , ((((*g_8) = 0L) > (safe_unary_minus_func_int32_t_s(l_1059[8][0][2]))) , l_1061)))) , l_1062[2][8]) | p_21)) || (-1L))))) || l_1063)))
                {
                    for (g_126 = 0; (g_126 == 42); g_126++)
                    {
                        int **l_1066[10] = {&l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911, &l_911};
                        int i;
                        p_20 = (l_1067 = p_19);


                    }
                }
                else
                {
                    unsigned short l_1073 = 65535UL;
                    unsigned *l_1074 = &g_99[5][5][0];
                    (*p_20) = ((safe_sub_func_int32_t_s_s((((-6L) > p_21) >= (((l_1070 != &l_1071[6]) < l_1073) , p_21)), l_1076)) , (*g_8));
                }
                if ((*p_20))
                    continue;
                if ((*p_20))
                    continue;
                for (g_93 = 0; (g_93 <= 13); g_93++)
                {
                    g_821[0] = p_20;
                }
            }



            return g_1079;
        }




    }




    ;
    return p_21;
}







static unsigned short func_25(int p_26, int * p_27, short p_28)
{
    int *l_892 = &g_101[5][2];
    int *l_894 = &g_706;
    unsigned char **l_900[3][1][3];
    int **l_902 = (void*)0;
    int **l_903[8];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_900[i][j][k] = &g_179[0];
        }
    }
    for (i = 0; i < 8; i++)
        l_903[i] = &g_821[1];
    for (p_26 = (-1); (p_26 == (-27)); p_26 = safe_sub_func_uint16_t_u_u(p_26, 6))
    {
        unsigned char l_891 = 251UL;
        int **l_893 = &g_821[0];
        char l_897[4];
        unsigned ****l_901 = &g_523;
        int i;
        for (i = 0; i < 4; i++)
            l_897[i] = (-10L);
        (*g_8) = l_891;
        (*l_893) = l_892;
        (*l_893) = l_894;
        (*p_27) = (+(((safe_unary_minus_func_int8_t_s(((*l_892) , p_26))) , (void*)0) != l_901));
    }
    p_27 = &p_26;

    ;
    return p_28;
}







static char func_31(unsigned p_32, unsigned p_33)
{
    int *l_883 = (void*)0;
    int l_888 = 0xDFD18B90L;
    for (g_129 = 0; (g_129 != (-16)); g_129 = safe_sub_func_uint8_t_u_u(g_129, 8))
    {
        int *l_882 = &g_101[5][0];
        for (g_126 = 3; (g_126 < 7); g_126 = safe_add_func_int8_t_s_s(g_126, 3))
        {
            char *l_886[5];
            int i;
            for (i = 0; i < 5; i++)
                l_886[i] = (void*)0;
            for (g_60 = 0; (g_60 < 14); g_60 = safe_add_func_uint16_t_u_u(g_60, 4))
            {
                unsigned short *l_887 = &g_639;
                l_883 = l_882;

                ;
                (*l_882) = ((safe_rshift_func_int16_t_s_s(p_33, 5)) | ((*l_887) = ((p_33 < (l_886[1] == l_886[4])) <= 0UL)));
            }
        }
    }

    ;
    return l_888;
}







static unsigned func_38(int * p_39)
{
    unsigned l_46 = 0x2489AFFFL;
    int *l_49[6][7][1] = {{{&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}}, {{&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}}, {{&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}}, {{&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}}, {{&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}}, {{&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}, {&g_9}}};
    int l_343[4][5] = {{0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL}, {0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL}, {0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL}, {0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL, 0x84498844L, 0xFC4F5A4CL}};
    short l_344 = 0x5F67L;
    int l_473 = 1L;
    unsigned ***l_537[10] = {&g_135, &g_135, (void*)0, (void*)0, &g_135, &g_135, &g_135, (void*)0, (void*)0, &g_135};
    short l_570 = (-1L);
    unsigned l_598 = 0x91F4D7D5L;
    unsigned short l_608[9] = {1UL, 65528UL, 1UL, 65528UL, 1UL, 65528UL, 1UL, 65528UL, 1UL};
    int l_709 = 0xCD339046L;
    short l_726 = 0L;
    int *l_739 = &g_9;
    unsigned *l_780 = &g_776[2][1][0];
    unsigned **l_779 = &l_780;
    unsigned char l_783[5][5][2] = {{{0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}}, {{0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}}, {{0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}}, {{0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}}, {{0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}, {0x7CL, 0xCBL}}};
    int l_798[7][3] = {{7L, 0x339679DFL, (-8L)}, {7L, 0x339679DFL, (-8L)}, {7L, 0x339679DFL, (-8L)}, {7L, 0x339679DFL, (-8L)}, {7L, 0x339679DFL, (-8L)}, {7L, 0x339679DFL, (-8L)}, {7L, 0x339679DFL, (-8L)}};
    unsigned l_800[8];
    unsigned l_807 = 0x7F8E504DL;
    char l_808 = 0xAEL;
    short l_811 = 8L;
    int *l_874 = &g_101[1][0];
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_800[i] = 0xBC6EFC9CL;
    if ((func_40((l_46 <= (safe_rshift_func_int16_t_s_s(l_46, (l_49[2][1][0] == ((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((-5L), func_54(p_39, (g_7[1] != (-1L))))), (+(!(safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(l_343[1][2], 0x62L)) <= l_344), 0xE33AE435L)))))) , p_39))))), g_9, (*g_8), (*g_8), g_224) , (*p_39)))
    {
        int l_457 = 1L;
        return l_457;
    }
    else
    {
        int l_458 = 1L;
        char l_460 = 0xBDL;
        unsigned l_474[1][5][8] = {{{0xE6787CCAL, 4294967286UL, 0xD22A2BCFL, 0xD22A2BCFL, 4294967286UL, 0xE6787CCAL, 4294967286UL, 0xD22A2BCFL}, {0xE6787CCAL, 4294967286UL, 0xD22A2BCFL, 0xD22A2BCFL, 4294967286UL, 0xE6787CCAL, 4294967286UL, 0xD22A2BCFL}, {0xE6787CCAL, 4294967286UL, 0xD22A2BCFL, 0xD22A2BCFL, 4294967286UL, 0xE6787CCAL, 4294967286UL, 0xD22A2BCFL}, {0xE6787CCAL, 4294967286UL, 0xD22A2BCFL, 0xD22A2BCFL, 4294967286UL, 0xE6787CCAL, 4294967286UL, 0xD22A2BCFL}, {0xE6787CCAL, 4294967286UL, 0xD22A2BCFL, 0xD22A2BCFL, 4294967286UL, 0xE6787CCAL, 4294967286UL, 0xD22A2BCFL}}};
        int l_475 = 0x8A022494L;
        unsigned char l_529[8][6][5] = {{{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}, {{0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}, {0x35L, 0x53L, 0x35L, 0x22L, 0UL}}};
        short l_539 = (-1L);
        int *l_554 = (void*)0;
        char ***l_581 = &g_297;
        char ****l_580 = &l_581;
        unsigned short l_634[8][8][2] = {{{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}, {{0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}, {0x6C8FL, 0UL}}};
        unsigned short l_641 = 0x8264L;
        unsigned short l_656 = 0x5984L;
        int l_665 = 0L;
        short l_730 = 0xB121L;
        int *l_744 = &l_709;
        int **l_743 = &l_744;
        int i, j, k;
        (*g_450) = (*p_39);
        l_458 = 6L;
        if (((*g_450) = 0x52FAEC3FL))
        {
            int l_459 = (-1L);
            short *l_461 = &l_344;
            int ***l_494 = (void*)0;
            int *l_497 = &l_458;
            int l_528 = 0x37C7AF58L;
            unsigned short l_547[3][1][3];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_547[i][j][k] = 0x4195L;
                }
            }
            if (((p_39 == (void*)0) || (((~l_459) && ((*l_461) = l_460)) , (**g_297))))
            {
                short l_464 = 0xE9D3L;
                int l_481 = 0x539C225AL;
                unsigned l_522 = 0x23FBD791L;
                int l_532[6][5] = {{0x01EF845DL, 0L, 1L, 1L, 0L}, {0x01EF845DL, 0L, 1L, 1L, 0L}, {0x01EF845DL, 0L, 1L, 1L, 0L}, {0x01EF845DL, 0L, 1L, 1L, 0L}, {0x01EF845DL, 0L, 1L, 1L, 0L}, {0x01EF845DL, 0L, 1L, 1L, 0L}};
                int i, j;
                for (g_262 = 21; (g_262 < 12); g_262 = safe_sub_func_uint16_t_u_u(g_262, 7))
                {
                    short l_465 = 0L;
                    int **l_482 = &l_49[2][1][0];
                    if ((!((l_464 >= l_465) || l_458)))
                    {
                        if ((*p_39))
                            break;
                    }
                    else
                    {
                        unsigned l_466 = 0x82821DB6L;
                        unsigned char *l_480 = &g_151;
                        l_475 = ((l_466 >= 9L) , (0L ^ ((l_465 == 0xB1L) , (((safe_mod_func_int8_t_s_s((((l_458 = l_458) < (((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x10L, l_459)), 2)) != (**g_297)) != 1UL)) < l_474[0][2][4]), 0x0CL)) == (*p_39)) , 2L))));
                        l_481 = (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((*l_480) = l_465), l_459)), l_459));
                        g_450 = &l_458;

                        ;
                    }
                    (*g_450) = l_459;
                    (*l_482) = &l_481;
                }


                ;
                if ((*p_39))
                {
                    for (l_46 = 2; (l_46 <= 32); ++l_46)
                    {
                        int **l_485 = &g_82;
                        int ***l_496 = (void*)0;
                        int ****l_495 = &l_496;
                        (*g_450) = ((**g_297) , (-10L));
                        (*l_485) = (p_39 = (void*)0);

                        ;
                        ;
                        (*g_450) = ((((safe_lshift_func_int8_t_s_s((~(safe_sub_func_int16_t_s_s(l_474[0][2][4], l_458))), 4)) , ((l_475 = l_459) > ((l_464 == l_458) ^ (safe_mod_func_uint16_t_u_u(((!(l_494 != ((*l_495) = &g_81))) == 65535UL), 1L))))) ^ 3L) ^ l_481);

                        ;
                    }

                    ;

                }
                else
                {
                    short l_498[7] = {0x52F2L, 0x52F2L, 0x8E87L, 0x52F2L, 0x52F2L, 0x8E87L, 0x52F2L};
                    int l_506 = (-8L);
                    int l_517[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_517[i] = 0x52A53C02L;
                    l_497 = (void*)0;

                    ;
                    for (l_464 = 1; (l_464 >= 0); l_464 -= 1)
                    {
                        unsigned l_515 = 0x09F55AB7L;
                        unsigned short *l_516 = &g_126;
                        unsigned l_533 = 0UL;
                        l_517[0] = (3UL || (0x11E9L != ((*l_516) = ((l_498[2] == ((safe_mod_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_474[0][2][4], (((l_506 = (safe_unary_minus_func_int8_t_s(l_474[0][2][4]))) <= (safe_sub_func_uint8_t_u_u(l_464, (**g_297)))) , 0x2A59L))), 1UL)) , 0xD8BAL) | 0x712EL), l_515)) & (*g_8))) , l_498[6]))));
                        (*g_450) = (*g_450);
                        (*g_450) = 6L;
                        (*g_450) = ((safe_rshift_func_uint16_t_u_s(((l_515 ^ (l_515 , l_515)) == l_533), 6)) | g_9);
                    }
                }

                ;

                ;
            }
            else
            {
                short l_538 = (-3L);
                int *l_540 = (void*)0;
                int *l_559 = &g_530;
                unsigned short l_573 = 1UL;
                unsigned short *l_574 = &l_547[2][0][2];
                int **l_577 = &l_540;
                for (g_93 = 5; (g_93 < 8); g_93 = safe_add_func_int8_t_s_s(g_93, 4))
                {
                    (*l_497) = ((*g_450) = ((l_529[5][5][2] ^ l_475) >= l_474[0][2][6]));
                }
                for (l_473 = 5; (l_473 >= 0); l_473 -= 1)
                {
                    for (g_151 = 0; (g_151 <= 6); g_151 += 1)
                    {
                        int **l_536 = &l_49[2][1][0];
                        (*l_536) = p_39;
                    }
                }
                (*g_450) = (safe_mod_func_int32_t_s_s(0xDE68AEB9L, ((l_458 = (l_475 = l_474[0][3][3])) , (((safe_mul_func_int16_t_s_s(g_185[1], (((*l_559) = g_60) , ((*l_574) = ((safe_mod_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(0L, (g_101[3][2] , ((**g_297) , (*p_39))))) <= 0x8D78L), l_573)) , g_9))))) , g_185[1]) & g_93))));
                if ((safe_sub_func_int16_t_s_s((g_7[1] == g_101[2][0]), (((((*l_577) = p_39) == (void*)0) < (safe_sub_func_int32_t_s_s((-1L), (g_224 < (l_580 != g_582))))) >= ((safe_mul_func_uint8_t_u_u(l_460, (*l_497))) && (*p_39))))))
                {
                    int **l_586 = (void*)0;
                    int **l_587 = &l_49[2][1][0];
                    (*l_587) = ((*l_577) = (void*)0);

                    ;
                }
                else
                {
                    char l_590 = (-1L);
                    short **l_593 = &l_461;
                    if ((((safe_lshift_func_int8_t_s_u((**g_297), (l_590 && (safe_add_func_uint16_t_u_u(((*l_574) = (((*l_593) = &g_186[6][5]) == ((g_128[1][0] = l_590) , &l_538))), (*l_497)))))) , l_590) <= (248UL != l_590)))
                    {
                        int l_594[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_594[i] = 1L;
                        (*g_450) = (*g_8);
                        return l_594[1];
                    }
                    else
                    {
                        short ***l_597 = &l_593;
                        (*l_577) = &l_458;

                        ;
                        (*g_450) = ((((*l_597) = g_595) != &g_596) ^ (*p_39));

                        ;
                        return l_598;
                    }
                }
            }

            ;


            ;
            ;
            for (g_530 = 0; (g_530 >= (-30)); g_530 = safe_sub_func_uint16_t_u_u(g_530, 9))
            {
                int **l_601 = &l_554;
                int l_604[9][7] = {{0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}, {0x36188BACL, 4L, 0xA1B42E72L, 0L, 6L, 1L, 1L}};
                int l_607 = 0xE39943D1L;
                int i, j;
                (*l_601) = p_39;
                (*l_601) = p_39;
                (*g_450) = (safe_lshift_func_int8_t_s_u(l_604[3][3], (l_529[5][5][1] < func_40(l_539, ((**g_595) = (**g_595)), (((safe_add_func_int16_t_s_s(((l_604[1][5] & ((g_128[1][0] , l_539) == l_607)) , l_608[1]), g_128[2][0])) < (-9L)) , (*g_450)), (*g_8), g_126))));
            }

            ;
            for (g_60 = 0; (g_60 <= 0); g_60 += 1)
            {
                unsigned l_609 = 0xAEEEAB0CL;
                int l_632 = (-1L);
                int l_638 = 0xB01776A5L;
                int *l_645 = &l_459;
                l_528 = l_460;
            }
        }
        else
        {
            unsigned l_652 = 0xCCAD0091L;
            int *l_672 = (void*)0;
            int l_679 = 0x8D0BE911L;
            int l_694 = (-1L);
            unsigned char l_704 = 1UL;
            for (g_126 = 0; (g_126 <= 2); g_126 += 1)
            {
                int l_653 = 8L;
                int **l_663[4][1][1] = {{{(void*)0}}, {{(void*)0}}, {{(void*)0}}, {{(void*)0}}};
                int *l_693 = &l_665;
                int i, j, k;
                for (g_151 = 0; (g_151 <= 5); g_151 += 1)
                {
                    int l_654 = 0x6FCFF188L;
                    int l_655 = 1L;
                    int *l_669[6][7] = {{&l_343[0][2], &l_475, &l_654, &l_475, &l_343[0][2], &l_653, &l_343[0][2]}, {&l_343[0][2], &l_475, &l_654, &l_475, &l_343[0][2], &l_653, &l_343[0][2]}, {&l_343[0][2], &l_475, &l_654, &l_475, &l_343[0][2], &l_653, &l_343[0][2]}, {&l_343[0][2], &l_475, &l_654, &l_475, &l_343[0][2], &l_653, &l_343[0][2]}, {&l_343[0][2], &l_475, &l_654, &l_475, &l_343[0][2], &l_653, &l_343[0][2]}, {&l_343[0][2], &l_475, &l_654, &l_475, &l_343[0][2], &l_653, &l_343[0][2]}};
                    char l_670 = 0x9DL;
                    int i, j;
                    (*g_450) = (safe_add_func_int8_t_s_s((((*g_596) = (safe_rshift_func_int8_t_s_s(((***l_581) = 1L), 3))) & (safe_mul_func_int16_t_s_s(g_128[0][0], (l_537[(g_151 + 2)] == (void*)0)))), l_652));
                    if ((*g_450))
                    {
                        int i, j;
                        l_554 = g_274[g_151][(g_126 + 7)];
                        l_653 = (*p_39);
                        l_654 = 0x2CB14E56L;
                    }
                    else
                    {
                        return l_655;


                    }
                    for (l_473 = 5; (l_473 >= 0); l_473 -= 1)
                    {
                        int i;
                        if (g_185[g_151])
                            break;
                        return l_656;


                    }
                    if ((*g_450))
                        break;
                    for (l_458 = 5; (l_458 >= 0); l_458 -= 1)
                    {
                        unsigned short *l_664[10];
                        int i, j;
                        for (i = 0; i < 10; i++)
                            l_664[i] = &g_639;
                        l_669[5][2] = (g_82 = ((l_654 | (((safe_mul_func_int8_t_s_s((l_665 = (g_128[2][0] >= ((8L || ((****l_580) = (l_655 > (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((l_663[3][0][0] == &p_39), (**g_297))), 13))))) , (g_639 = 0x676DL)))), ((safe_lshift_func_uint8_t_u_u((0L < l_652), 0)) && l_655))) > g_668) , 7L)) , (void*)0));

                        ;
                        if (l_670)
                            continue;
                    }


                }
                for (l_570 = 7; (l_570 >= 0); l_570 -= 1)
                {
                    int *l_671 = &l_475;
                    int *l_684[2];
                    short l_696 = 0x8C42L;
                    int l_703[1][8][2] = {{{0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}, {0xBD3363C1L, 0xA22D5DFDL}}};
                    unsigned char l_711 = 0xFCL;
                    unsigned char *l_723 = &l_529[7][3][0];
                    int l_727[3][5] = {{3L, 3L, 0x1706DB9BL, 3L, 3L}, {3L, 3L, 0x1706DB9BL, 3L, 3L}, {3L, 3L, 0x1706DB9BL, 3L, 3L}};
                    unsigned short *l_728 = (void*)0;
                    unsigned short *l_729[3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_684[i] = (void*)0;
                    for (i = 0; i < 3; i++)
                        l_729[i] = &l_634[1][7][0];
                    for (l_458 = 0; (l_458 <= 9); l_458 += 1)
                    {
                        int i, j, k;
                        l_49[0][1][0] = g_274[g_126][(g_126 + 2)];
                        if (l_529[(g_126 + 4)][g_126][g_126])
                            break;
                        g_450 = (l_672 = l_671);

                        ;
                        ;
                    }
                }
            }



            ;
            ;
            ;
            if ((*p_39))
            {
                int l_733 = 0x63323A5AL;
                for (g_639 = 0; (g_639 <= 1); g_639 += 1)
                {
                    int *l_734 = &g_530;
                    unsigned char *l_736 = &l_704;
                    int l_737[6][10] = {{0x230580DBL, 2L, 0L, 0xA4050B61L, (-5L), 0xA4050B61L, 0L, 2L, 0x230580DBL, (-4L)}, {0x230580DBL, 2L, 0L, 0xA4050B61L, (-5L), 0xA4050B61L, 0L, 2L, 0x230580DBL, (-4L)}, {0x230580DBL, 2L, 0L, 0xA4050B61L, (-5L), 0xA4050B61L, 0L, 2L, 0x230580DBL, (-4L)}, {0x230580DBL, 2L, 0L, 0xA4050B61L, (-5L), 0xA4050B61L, 0L, 2L, 0x230580DBL, (-4L)}, {0x230580DBL, 2L, 0L, 0xA4050B61L, (-5L), 0xA4050B61L, 0L, 2L, 0x230580DBL, (-4L)}, {0x230580DBL, 2L, 0L, 0xA4050B61L, (-5L), 0xA4050B61L, 0L, 2L, 0x230580DBL, (-4L)}};
                    int i, j;
                    (*g_450) = (safe_add_func_uint8_t_u_u(l_733, (((*l_734) = l_733) , ((*l_736) = ((safe_unary_minus_func_int8_t_s(0x2FL)) < 254UL)))));
                    (*g_450) = l_737[4][2];
                    for (g_262 = 0; (g_262 <= 1); g_262 += 1)
                    {
                        int **l_738 = &l_49[3][2][0];
                        (*l_738) = p_39;
                        (*l_738) = p_39;
                        p_39 = ((*l_738) = (void*)0);

                        ;
                    }
                    if ((*g_450))
                        continue;
                    for (g_126 = 0; (g_126 <= 2); g_126 += 1)
                    {
                        if (l_737[4][2])
                            break;
                    }
                }

                ;
            }
            else
            {
                int **l_740 = &l_739;
                (*l_740) = l_739;
                l_554 = p_39;

                ;
                for (l_458 = 0; (l_458 <= (-23)); --l_458)
                {
                    (*l_740) = (*l_740);
                }
                (*l_740) = p_39;
            }

            ;
            ;
        }

        ;


        ;
        ;
        if ((*g_8))
        {
            int ***l_745 = &l_743;
            (*l_745) = l_743;
        }
        else
        {
            int **l_746 = (void*)0;
            int **l_747 = &g_450;
            unsigned short *l_752 = &g_126;
            unsigned short **l_751 = &l_752;
            int *l_753 = &g_706;
            char ***l_775 = (void*)0;
            (*l_747) = &l_343[2][4];

            ;
            for (g_60 = 0; (g_60 >= 0); g_60 -= 1)
            {
                unsigned short *l_750 = &l_608[6];
                unsigned short **l_749 = &l_750;
                unsigned short ***l_748[4] = {&l_749, (void*)0, &l_749, (void*)0};
                int **l_754 = (void*)0;
                int **l_755 = (void*)0;
                int *l_756 = &l_458;
                int i;
                l_751 = (void*)0;

                ;
                l_756 = ((*l_747) = l_753);

                ;
                ;
                for (l_539 = 0; (l_539 <= 5); l_539 += 1)
                {
                    char ***l_765[6][3] = {{(void*)0, &g_297, &g_297}, {(void*)0, &g_297, &g_297}, {(void*)0, &g_297, &g_297}, {(void*)0, &g_297, &g_297}, {(void*)0, &g_297, &g_297}, {(void*)0, &g_297, &g_297}};
                    unsigned short ***l_771 = &l_751;
                    int l_777 = 0x29FA814DL;
                    int i, j;
                    for (l_473 = 0; (l_473 <= 5); l_473 += 1)
                    {
                        int i;
                        if (l_608[(l_539 + 2)])
                            break;
                    }
                    if ((g_101[(g_60 + 1)][(l_539 + 3)] > 5UL))
                    {
                        int i, j;
                        p_39 = &g_101[(g_60 + 4)][g_60];

                        ;
                        (*l_747) = &g_101[l_539][(g_60 + 5)];

                        ;
                        (*l_756) = g_101[l_539][(g_60 + 5)];
                    }
                    else
                    {
                        unsigned short l_766 = 0xEB6AL;
                        unsigned char *l_773[3];
                        int l_774 = 4L;
                        unsigned ***l_781 = &l_779;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_773[i] = &g_151;
                        (*l_747) = (((**l_749) = g_151) , (void*)0);

                        ;
                        (*l_753) = g_778;
                        (*l_781) = l_779;
                    }

                    ;
                    g_82 = ((*l_747) = (*l_747));

                    ;
                    for (g_668 = 0; (g_668 >= 0); g_668 -= 1)
                    {
                        int i, j, k;
                        if (l_474[g_668][(g_60 + 4)][(g_60 + 6)])
                            break;
                    }
                }

                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
    }

    ;


    ;

    for (l_344 = 2; (l_344 >= 0); l_344 -= 1)
    {
        char l_782 = (-1L);
        unsigned char *l_786[3];
        int l_787 = (-3L);
        unsigned char l_796 = 0UL;
        int l_797 = 4L;
        int **l_799[2];
        int l_801 = (-7L);
        unsigned l_802 = 4294967295UL;
        unsigned l_830[10][4] = {{0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}, {0x775B9977L, 0x775B9977L, 1UL, 0UL}};
        short l_851 = 0x16DEL;
        char l_853 = (-1L);
        unsigned char l_854 = 3UL;
        char ****l_864 = &g_583;
        int i, j;
        for (i = 0; i < 3; i++)
            l_786[i] = &l_783[0][3][0];
        for (i = 0; i < 2; i++)
            l_799[i] = &l_49[4][4][0];
        g_706 = (g_60 = (l_782 == l_783[0][3][0]));
        l_797 = (((safe_lshift_func_int16_t_s_u(((**g_595) = ((*l_739) & l_797)), l_797)) >= 0xDD08L) > 0x951FB398L);
        g_450 = (void*)0;

        ;
        g_101[5][2] = (func_40(l_800[7], (**g_595), (l_801 , (*g_8)), l_802, (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(l_807, l_808)) | 0x7640L), (4294967295UL <= 0UL)))) , 0x8B0D3E85L);
        for (l_726 = 0; (l_726 <= 2); l_726 += 1)
        {
            int **l_810[9][1] = {{&g_450}, {&g_450}, {&g_450}, {&g_450}, {&g_450}, {&g_450}, {&g_450}, {&g_450}, {&g_450}};
            unsigned char *l_849 = (void*)0;
            int i, j;
            for (g_531 = 2; (g_531 <= 6); g_531 += 1)
            {
                int ***l_809[3];
                unsigned l_818[10] = {1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL, 1UL};
                short l_835 = 0xCC31L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_809[i] = &l_799[1];
                l_810[3][0] = &p_39;
                if ((l_811 = g_186[(l_726 + 1)][(l_344 + 2)]))
                {
                    g_82 = p_39;

                    ;
                }
                else
                {
                    unsigned l_812 = 1UL;
                    int l_820 = 1L;
                    int *l_831 = (void*)0;
                    if ((l_812 = (((*g_297) = &l_808) == (void*)0)))
                    {
                        int *l_813[8] = {&g_101[0][3], &g_101[0][3], &l_797, &g_101[0][3], &g_101[0][3], &l_797, &g_101[0][3], &g_101[0][3]};
                        short l_814 = 0L;
                        int i, j, k;
                        l_813[1] = l_813[1];
                        l_820 = (g_776[(l_726 + 1)][(l_344 + 4)][l_726] == (((l_814 > g_668) , ((*g_596) & ((*l_739) , (safe_mod_func_uint32_t_u_u((l_812 || (((safe_unary_minus_func_uint8_t_u((l_818[6] > 255UL))) >= g_9) , g_819)), (-9L)))))) >= l_812));
                    }
                    else
                    {
                        unsigned l_827 = 1UL;
                        p_39 = p_39;
                        g_821[0] = g_821[0];
                        l_820 = ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s(0x030BL, ((**g_595) = (safe_sub_func_int16_t_s_s((((l_827 == l_820) , l_827) > l_812), (**g_595)))))))) >= l_827);
                    }
                    for (g_778 = 0; (g_778 <= 2); g_778 += 1)
                    {
                        short l_828 = 0xA2E2L;
                        int l_829 = 9L;
                        l_829 = l_828;
                        if (l_830[6][3])
                            continue;
                        p_39 = p_39;
                        l_49[2][1][0] = (l_831 = p_39);
                    }

                    ;
                    if ((*l_739))
                        break;
                    for (l_473 = 0; (l_473 <= 2); l_473 += 1)
                    {
                        unsigned short l_832 = 0x2EEAL;
                        int l_836 = 0xA2CF42DFL;
                        if ((*g_8))
                            break;
                        l_49[4][6][0] = p_39;
                        l_836 = ((l_832 == (*g_596)) & ((l_832 | (safe_lshift_func_int8_t_s_s((&g_596 == (g_101[5][2] , (void*)0)), l_832))) | l_835));
                        l_836 = 0x379DE7C3L;
                    }
                }
            }


            for (l_807 = 0; (l_807 <= 2); l_807 += 1)
            {
                int l_838 = 0x8D5D66C9L;
                short l_848 = 0x0D5BL;
                int *l_860 = &g_706;
                for (g_224 = 0; (g_224 <= 2); g_224 += 1)
                {
                    char l_843[6][3][2] = {{{0xF1L, 0x70L}, {0xF1L, 0x70L}, {0xF1L, 0x70L}}, {{0xF1L, 0x70L}, {0xF1L, 0x70L}, {0xF1L, 0x70L}}, {{0xF1L, 0x70L}, {0xF1L, 0x70L}, {0xF1L, 0x70L}}, {{0xF1L, 0x70L}, {0xF1L, 0x70L}, {0xF1L, 0x70L}}, {{0xF1L, 0x70L}, {0xF1L, 0x70L}, {0xF1L, 0x70L}}, {{0xF1L, 0x70L}, {0xF1L, 0x70L}, {0xF1L, 0x70L}}};
                    int l_850 = (-1L);
                    int l_852 = 0x77AF69DEL;
                    int l_856 = 0xC2B96341L;
                    int i, j, k;
                    for (g_262 = 0; (g_262 <= 2); g_262 += 1)
                    {
                        char l_837 = 0xABL;
                        l_838 = l_837;
                    }
                    if (((l_838 = (((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_639, 12)), (0x00L | l_838))) & 0xB9BAADA9L) && (**g_595))) || l_843[2][1][1]))
                    {
                        l_838 = ((*l_739) < l_853);
                        return l_854;


                    }
                    else
                    {
                        unsigned l_855[7] = {0xFED33AB4L, 0xFED33AB4L, 0x9A27743BL, 0xFED33AB4L, 0xFED33AB4L, 0x9A27743BL, 0xFED33AB4L};
                        short **l_857[4][10] = {{(void*)0, &g_596, &g_596, &g_596, (void*)0, &g_596, (void*)0, &g_596, &g_596, &g_596}, {(void*)0, &g_596, &g_596, &g_596, (void*)0, &g_596, (void*)0, &g_596, &g_596, &g_596}, {(void*)0, &g_596, &g_596, &g_596, (void*)0, &g_596, (void*)0, &g_596, &g_596, &g_596}, {(void*)0, &g_596, &g_596, &g_596, (void*)0, &g_596, (void*)0, &g_596, &g_596, &g_596}};
                        int l_859 = 0x33875635L;
                        int i, j;
                        l_856 = (l_850 = l_855[4]);
                        l_859 = ((~(l_857[3][2] == (void*)0)) & (g_858[4][2][0] = 1L));
                        l_860 = p_39;

                        ;
                    }

                    ;
                    for (l_854 = 0; (l_854 <= 9); l_854 += 1)
                    {
                        short l_861[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_861[i] = 6L;
                        g_450 = p_39;
                        l_861[3] = l_850;
                        l_838 = 1L;
                    }
                }

                ;
                for (g_60 = 0; (g_60 <= 5); g_60 += 1)
                {
                    short l_866 = 0xB5D0L;
                    int l_870 = 0x6797AE80L;
                    unsigned short l_871 = 1UL;
                    for (g_129 = 5; (g_129 >= 0); g_129 -= 1)
                    {
                        unsigned short l_865 = 1UL;
                        unsigned short *l_867 = &l_608[8];
                        unsigned short *l_872 = &g_128[0][0];
                        int l_873 = (-1L);
                        int i, j;
                        l_838 = (safe_mod_func_uint32_t_u_u((((g_101[g_129][(l_726 + 3)] | (((((l_864 == &g_583) , (!l_865)) >= (l_873 = (l_866 | ((((*l_867) = g_101[g_129][(l_726 + 3)]) || (l_866 & ((l_865 >= (((*l_872) = ((safe_rshift_func_uint8_t_u_u((((*l_867) = ((l_870 = ((*g_596) == 0xC7D5L)) , g_93)) >= 1UL), l_871)) ^ 1UL)) < l_865)) , l_865))) <= l_865)))) >= 0x4E6EL) , l_871)) >= (**g_595)) || (*g_596)), 0xCD0EABDFL));
                        if (l_866)
                            break;
                        if (l_865)
                            break;
                    }
                }
                l_838 = (((**g_297) = 0xA9L) || l_838);
                l_874 = p_39;
            }
        }

        ;
    }




    ;
    return (*l_739);



}







static unsigned short func_40(unsigned char p_41, short p_42, int p_43, int p_44, int p_45)
{
    char **l_345 = &g_298[0];
    char ***l_346 = &g_297;
    int *l_347 = (void*)0;
    int *l_348 = &g_60;
    unsigned l_351 = 0UL;
    short *l_377 = &g_93;
    char ***l_414[6][3];
    unsigned ***l_415[6];
    unsigned l_447 = 8UL;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
            l_414[i][j] = &g_297;
    }
    for (i = 0; i < 6; i++)
        l_415[i] = &g_135;
    (*l_348) = (((*l_346) = l_345) == (void*)0);
    if ((safe_lshift_func_int8_t_s_u((((*l_348) == p_42) == l_351), 5)))
    {
        unsigned short l_360 = 0x2033L;
        short *l_361[5];
        int l_362 = 0xC9B00F3DL;
        int *l_369 = &g_101[1][7];
        unsigned l_370 = 0xD7D3A677L;
        int i;
        for (i = 0; i < 5; i++)
            l_361[i] = (void*)0;
        (*l_369) = ((g_60 < ((+(((safe_mul_func_uint8_t_u_u(((((p_42 == (*l_369)) & p_42) >= p_41) || (*l_348)), 0x68L)) & 1L) > 0x0167L)) ^ (*l_369))) | g_99[5][5][0]);
        return (*l_369);
    }
    else
    {
        short *l_378 = &g_186[6][3];
        int l_381 = 0xB83C1876L;
        unsigned *l_382 = &g_99[4][2][2];
        int ***l_407 = &g_81;
        unsigned char ***l_410 = &g_178;
        int *l_413 = &g_60;
        if ((((((g_151 < ((safe_sub_func_int32_t_s_s((p_43 > (safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((*l_378) = ((l_377 = &p_42) != &p_42)), 0x6BC1L)), ((*l_382) = (safe_mod_func_uint8_t_u_u((((p_44 | (p_45 ^ p_41)) , ((((l_381 || 6UL) , (*l_348)) < (-1L)) < (*l_348))) , l_381), 0xA6L)))))), (*l_348))) && g_185[3])) >= l_381) && 1UL) && (-5L)) < (*l_348)))
        {
            unsigned short l_390 = 0x05E3L;
            int *l_401 = (void*)0;
            for (g_126 = 0; (g_126 < 33); g_126 = safe_add_func_int16_t_s_s(g_126, 8))
            {
                unsigned short l_385 = 0UL;
                int l_400 = 7L;
                (*l_348) = p_45;
                for (g_262 = 0; (g_262 >= 28); ++g_262)
                {
                    unsigned l_399 = 0x383E0AA7L;
                    int *l_402 = &g_60;
                    int **l_403 = &l_348;
                    p_43 = (((((**l_345) = (l_400 = (safe_mul_func_uint16_t_u_u(1UL, (((((*l_382) = 0UL) < 0x8ACB194FL) | ((p_43 ^ l_390) , (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((g_185[3] ^ (l_390 == (safe_add_func_uint16_t_u_u(((g_185[1] & p_44) != g_7[1]), l_399)))), l_390)) , p_43), 0x8930L)), 7)))) ^ 0xF2D00B81L))))) & p_43) || (**g_297)) || (*g_8));
                    l_402 = l_401;

                    ;
                    (*l_403) = &p_43;

                    ;
                    (*l_403) = &p_43;
                }
            }

            ;
        }
        else
        {
            int l_425 = 8L;
            int l_435 = 0xF0D1B4B3L;
            int *l_453 = &g_101[5][2];
            for (g_262 = 0; (g_262 <= 6); g_262 += 1)
            {
                char l_418 = 1L;
                int *l_430 = &g_101[5][2];
                int l_440[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_440[i] = 7L;
                for (p_43 = 1; (p_43 <= 6); p_43 += 1)
                {
                    int *l_404 = &g_60;
                    int ***l_405 = &g_81;
                    int ****l_406 = &l_405;
                    char ***l_434 = &l_345;
                    int i, j;
                    g_82 = l_404;

                    ;
                    (*l_348) = ((&g_186[g_262][(g_262 + 1)] != &g_186[p_43][(p_43 + 2)]) , ((0x2E6C88F2L && ((((*l_406) = l_405) == l_407) | (((p_41 = (safe_sub_func_uint16_t_u_u(0x9AB0L, p_44))) && (l_410 != &g_178)) , (*l_404)))) <= g_60));
                    for (l_381 = 0; (l_381 == 1); l_381 = safe_add_func_uint8_t_u_u(l_381, 3))
                    {
                        char ****l_433[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_433[i] = (void*)0;
                        l_413 = &p_44;

                        ;
                        (*g_82) = (((((((((void*)0 == l_414[2][2]) , (void*)0) != l_415[2]) >= (safe_mul_func_uint8_t_u_u((*l_348), (((((*l_413) = (p_41 < (*l_404))) > (l_418 = (!(-1L)))) ^ (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(0x60C1L, 0L)), 4)), 5))) <= p_43)))) ^ 3L) , l_425) <= p_45) > p_45);
                        (*l_430) = (0x3C6FL == (((*g_8) & 3UL) | (safe_mod_func_int8_t_s_s(((p_41 >= (l_435 = ((((safe_mul_func_uint16_t_u_u(func_69(p_42, l_425), (-4L))) == (-5L)) != 0x23L) != 0x8CL))) > p_41), p_42))));

                        ;
                        if ((**g_81))
                            continue;
                    }
                    (*g_82) = (((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((*l_430) = p_41) >= p_45) , (*l_348)), ((((l_435 = p_43) ^ p_41) , ((**l_345) = (**g_297))) , ((*l_348) == ((g_93 , l_440[0]) | (-1L)))))), (*l_348))) || p_42) & 0x6BC0FC32L);
                }
            }

            ;
            if ((g_441 == (void*)0))
            {
                unsigned short l_446 = 0xCF20L;
                l_435 = (safe_rshift_func_uint16_t_u_s((!(~(safe_lshift_func_uint8_t_u_s(255UL, p_41)))), l_446));
                if (((*l_348) = l_447))
                {
                    int **l_451 = &l_347;
                    int **l_452 = &l_348;
                    for (l_446 = 1; (l_446 < 52); l_446 = safe_add_func_uint32_t_u_u(l_446, 1))
                    {
                        return p_45;
                    }
                    (*l_452) = ((*l_451) = g_450);



                    (*l_452) = l_453;

                    ;
                }
                else
                {
                    for (p_41 = 0; (p_41 <= 2); p_41 += 1)
                    {
                        (*l_413) = 5L;
                    }
                }


                ;
            }
            else
            {
                return p_43;
            }


            ;
        }


        ;
        ;
        ;
        for (g_129 = 0; (g_129 <= (-5)); --g_129)
        {
            int l_456[2][7][7] = {{{0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}}, {{0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}, {0L, 0x28787CF8L, 0L, 0x519BC063L, 0L, 0x7F0A4E52L, 1L}}};
            int i, j, k;
            if (((*l_413) = l_456[1][2][5]))
            {
                if (l_456[1][2][5])
                    break;
                return p_43;
            }
            else
            {
                return g_186[6][3];
            }
        }
    }


    ;
    ;
    return p_44;
}







static unsigned short func_54(int * p_55, char p_56)
{
    int l_123 = (-6L);
    short l_152 = 0L;
    unsigned char *l_166 = (void*)0;
    char l_187 = 0x7BL;
    unsigned char l_236 = 255UL;
    unsigned *l_273 = &g_262;
    int l_320 = 0x9904F228L;
    char l_336 = 0x6AL;
    for (p_56 = 0; (p_56 == 27); ++p_56)
    {
        int *l_59 = &g_60;
        (*l_59) = 0x633EF28FL;
        if ((*g_8))
        {
            int l_78 = 0x8CF8356FL;
            unsigned l_121 = 0xD9C3D7FAL;
            int **l_122 = &l_59;
            (*g_82) = (safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((p_56 , (((g_7[3] | ((safe_mod_func_uint16_t_u_u((*l_59), 0x7787L)) , (safe_lshift_func_uint16_t_u_s((g_60 , p_56), func_69(((*l_59) <= (safe_sub_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((-8L), p_56)) , 4294967295UL) & 0xA938281BL), (*g_8))) == 1L) >= (*l_59)), l_78))), p_56))))) , l_121) <= p_56)) <= (*l_59)), (*l_59))) , g_9), 0xFD55L));

            ;
            (*l_122) = p_55;

            ;
            return l_123;
        }
        else
        {
            unsigned short *l_124 = (void*)0;
            unsigned short *l_125 = &g_126;
            unsigned short *l_127 = &g_128[2][0];
            unsigned short l_130 = 0x094BL;
            l_123 = ((g_129 = ((*l_127) = ((*l_125) = p_56))) , ((-7L) != (((g_99[5][5][0] , l_130) ^ (**g_81)) , 254UL)));
        }
    }
    for (l_123 = 2; (l_123 >= 0); l_123 -= 1)
    {
        int *l_131 = &g_101[5][2];
        int **l_132 = &l_131;
        (*l_132) = ((*g_81) = l_131);

        ;
        if ((**g_81))
            break;
        for (g_93 = 0; (g_93 <= 0); g_93 += 1)
        {
            int i, j;
            (*g_82) = g_128[l_123][g_93];
            return l_123;
        }
    }

    ;
    if (((**g_81) = (p_56 , (p_55 != ((l_123 = (&g_82 == &p_55)) , &g_99[2][0][2])))))
    {
        int l_140 = 5L;
        int l_167 = 0x5DAC31F8L;
        for (g_129 = 0; (g_129 <= 0); g_129 += 1)
        {
            unsigned l_133 = 0x0E7B76DEL;
            if (l_133)
                break;
            for (l_133 = 0; (l_133 <= 0); l_133 += 1)
            {
                int *l_139[5] = {&g_101[5][2], (void*)0, &g_101[5][2], (void*)0, &g_101[5][2]};
                unsigned char *l_150 = &g_151;
                int i;
                for (l_123 = 0; (l_123 <= 0); l_123 += 1)
                {
                    int ***l_134 = &g_81;
                    unsigned ***l_137 = &g_135;
                    int **l_138 = &g_82;
                    for (p_56 = 5; (p_56 >= 0); p_56 -= 1)
                    {
                        int i, j;
                        g_101[(g_129 + 1)][(p_56 + 1)] = g_101[(g_129 + 2)][(l_133 + 1)];
                    }
                    (*l_134) = (void*)0;

                    ;
                    (*l_137) = g_135;
                    (*l_138) = p_55;

                    ;
                }

                ;
                l_140 = (*p_55);
                for (l_123 = 0; (l_123 >= 0); l_123 -= 1)
                {
                    for (p_56 = 0; (p_56 >= 0); p_56 -= 1)
                    {
                        int **l_141 = &g_82;
                        l_140 = 8L;
                        (*l_141) = p_55;

                        ;
                    }
                    p_55 = ((safe_rshift_func_uint16_t_u_s(0x02BBL, 8)) , p_55);
                    if ((*p_55))
                        break;
                    return p_56;
                }
                if (((safe_rshift_func_int8_t_s_u((p_56 || func_69((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_56 || 0xCAL), ((p_56 >= ((*l_150) = g_93)) | l_152))), 0x35L)), (g_9 || (safe_lshift_func_int16_t_s_s(((g_129 > 65528UL) || l_152), 12))))), p_56)) , (*p_55)))
                {
                    unsigned char **l_155 = &l_150;
                    unsigned char ***l_156 = &l_155;
                    int l_159 = 0xF5253A83L;
                    int l_164 = 0xE54040A6L;
                    (*l_156) = l_155;
                    l_123 = (safe_mod_func_int16_t_s_s((l_159 , (safe_add_func_int32_t_s_s((((func_69(func_69((~(((safe_sub_func_int32_t_s_s((g_60 = (p_56 == (func_69((g_99[5][5][0] = ((((void*)0 == p_55) > 1L) >= (l_159 > (g_101[5][2] || (0x2CL && (((((248UL ^ 253UL) | 8UL) , l_123) > g_129) & g_129)))))), g_129) | 0L))), 2UL)) <= p_56) > l_152)), g_126), p_56) != 0xFEL) >= g_7[0]) , l_164), 0x911EF981L))), p_56));

                    ;
                }
                else
                {
                    unsigned short l_165 = 0x66B1L;
                    int **l_168 = (void*)0;
                    int **l_169 = (void*)0;
                    int **l_170[1][10][9] = {{{&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}, {&g_8, &g_8, &l_139[2], &l_139[1], &g_8, &l_139[1], (void*)0, &l_139[1], &l_139[1]}}};
                    int i, j, k;
                    l_140 = (func_69(l_140, l_165) , (g_101[5][2] = (l_166 == &g_151)));

                    ;
                    if ((*p_55))
                        break;
                    if (l_167)
                        continue;
                    p_55 = (g_82 = (*g_81));

                    ;
                }

                ;
            }

            ;
            ;
            for (l_133 = 0; (l_133 <= 0); l_133 += 1)
            {
                char *l_184[2][5][1] = {{{&g_185[4]}, {&g_185[4]}, {&g_185[4]}, {&g_185[4]}, {&g_185[4]}}, {{&g_185[4]}, {&g_185[4]}, {&g_185[4]}, {&g_185[4]}, {&g_185[4]}}};
                int *l_188 = &l_140;
                short l_199 = (-1L);
                int i, j, k;
                (*l_188) = ((g_101[(g_129 + 4)][(g_129 + 8)] = (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((&g_101[(g_129 + 4)][(g_129 + 8)] == (void*)0), (g_186[6][3] = (((safe_add_func_int8_t_s_s(((g_177 == (void*)0) & (safe_mul_func_int8_t_s_s((g_185[1] = (safe_add_func_int8_t_s_s(g_128[(g_129 + 2)][l_133], func_69(p_56, g_126)))), (p_56 < l_140)))), (-6L))) == 0xF6B8L) , p_56)))), p_56))) && l_187);

                ;
            }
            return l_167;
        }
        if (((((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_123 = (-5L)), 0x1750L)), g_129)) < p_56) >= p_56) ^ g_101[4][4]))
        {
            char *l_213[5];
            unsigned l_214 = 0UL;
            int *l_215 = &l_123;
            int i;
            for (i = 0; i < 5; i++)
                l_213[i] = &g_129;
            (*l_215) = ((*g_82) = (((p_56 = func_69(p_56, p_56)) < l_214) , ((void*)0 != &g_136)));

            ;
        }
        else
        {
            int l_217[6][9] = {{(-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L)}, {(-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L)}, {(-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L)}, {(-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L)}, {(-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L)}, {(-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L), 0x3B134FB9L, (-1L), 0x3B134FB9L, (-10L)}};
            int **l_232 = &g_82;
            int i, j;
            if (((**g_81) = (safe_unary_minus_func_uint16_t_u(l_217[0][7]))))
            {
                return p_56;
            }
            else
            {
                int l_225[4] = {0x66237C08L, 0x896D3C32L, 0x66237C08L, 0x896D3C32L};
                unsigned l_226 = 0x38581BCBL;
                int i;
                (*g_81) = (*g_81);
                (*g_82) = (safe_rshift_func_int16_t_s_s(((l_140 , (safe_sub_func_uint16_t_u_u((g_186[6][3] < (~g_60)), (safe_sub_func_uint32_t_u_u(p_56, g_224))))) || func_69(p_56, l_187)), l_225[3]));

                ;
                (*g_82) = l_226;
                for (l_167 = 0; (l_167 <= 4); l_167++)
                {
                    char *l_229 = &l_187;
                    unsigned char *l_230 = (void*)0;
                    int l_231 = (-2L);
                    (*g_82) = ((~func_69(l_226, ((*l_229) = 0xF0L))) && ((p_56 > 0x3E55E6CBL) || (l_231 = (l_140 = 0xC5L))));

                    ;
                    l_231 = 0x18F33F5BL;
                }
            }

            ;
            (*l_232) = (*g_81);

            ;
        }

        ;
        ;
        return l_140;
    }
    else
    {
        unsigned **l_233 = &g_136;
        int l_237 = (-1L);
        int l_241 = 0xC3147032L;
        unsigned *l_261 = &g_262;
        char *l_295 = &g_185[2];
        char **l_294 = &l_295;
        int **l_338 = &g_82;
        if (((**g_81) = (p_56 && (&g_136 != (l_233 = (g_135 = &g_136))))))
        {
            unsigned short *l_238 = (void*)0;
            unsigned short *l_239 = &g_126;
            short *l_240 = &g_186[6][3];
            int *l_244 = &l_123;
            int l_264 = 0x4853F64DL;
            unsigned ***l_292 = &l_233;
            int **l_337 = &g_82;
            (*l_244) = ((*g_82) = (safe_lshift_func_uint8_t_u_s(0xD6L, (l_123 , ((func_69(l_236, (((*l_239) = l_237) < (l_241 = ((*l_240) = 0x1E09L)))) < p_56) , ((func_69(l_241, (((safe_lshift_func_uint16_t_u_s(0x7A02L, 6)) | p_56) , 0x0DL)) >= (*p_55)) >= p_56))))));

            ;
            for (g_126 = 0; (g_126 >= 10); g_126++)
            {
                int l_251 = 0x9B1B88C5L;
                char *l_252[3];
                unsigned char *l_263 = &l_236;
                int *l_318 = &g_60;
                int i;
                for (i = 0; i < 3; i++)
                    l_252[i] = &g_224;
            }
            (*l_337) = &l_264;

            ;
        }
        else
        {
            (*g_81) = p_55;

            ;
        }


        ;
        (*l_338) = &l_237;

        ;
    }


    ;
    return l_152;
}







static short func_69(unsigned p_70, char p_71)
{
    int **l_79 = &g_8;
    int ***l_80 = &l_79;
    g_81 = ((*l_80) = l_79);

    ;
    for (p_70 = 0; (p_70 <= 12); p_70 = safe_add_func_uint8_t_u_u(p_70, 1))
    {
        int ***l_91 = (void*)0;
        unsigned char l_111 = 0x46L;
        int l_114 = (-4L);
        for (p_71 = 0; (p_71 >= (-1)); p_71 = safe_sub_func_int32_t_s_s(p_71, 2))
        {
            unsigned l_92 = 4294967293UL;
            unsigned *l_98 = &g_99[5][5][0];
            int *l_112 = (void*)0;
            int *l_113[4][10][6] = {{{&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}}, {{&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}}, {{&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}}, {{&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}, {&g_9, (void*)0, (void*)0, &g_101[5][2], &g_9, &g_101[5][2]}}};
            int i, j, k;
            if ((safe_rshift_func_int16_t_s_s(g_9, ((safe_lshift_func_int16_t_s_s(((0xA0L <= 0xEEL) , (+((void*)0 == l_91))), (g_93 = (((*g_82) , l_92) < l_92)))) ^ (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((((((*l_98) = (p_70 && 0UL)) && (-1L)) || 3UL) || p_71) , 65535UL), 15)), g_7[0]))))))
            {
                if (p_70)
                    break;
            }
            else
            {
                int *l_100 = &g_101[5][2];
                (*l_100) = 0x4C470FE6L;
            }
            l_114 = (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(g_9)) > (safe_sub_func_uint16_t_u_u(g_99[5][5][0], p_70))), l_92)), p_71)) | ((safe_rshift_func_int8_t_s_s((((void*)0 != &g_81) <= (g_7[3] , ((g_101[5][2] & g_9) <= l_111))), 4)) , (***l_80))) , l_92);
            if ((***l_80))
                continue;
            l_112 = ((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((p_71 ^ (g_101[5][2] & (***l_80))), p_70)) <= ((((p_70 <= g_93) , ((g_60 != 65531UL) != p_71)) , &g_82) == &l_113[3][4][1])), 0x085CE8A8L)), 0UL)) , (*g_81));

            ;
        }
    }
    return (***l_80);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_99[i][j][k], "g_99[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_101[i][j], "g_101[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_128[i][j], "g_128[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_186[i][j], "g_186[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_776[i][j][k], "g_776[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_819, "g_819", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_858[i][j][k], "g_858[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1221[i], "g_1221[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1316, "g_1316", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1508, "g_1508", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
