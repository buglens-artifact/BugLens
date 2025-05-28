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



static unsigned char g_16 = 0xB2L;
static short g_33 = 0x1C77L;
static unsigned short g_34[5][9][5] = {{{6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}}, {{6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}}, {{6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}}, {{6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}}, {{6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}, {6UL, 0x9D44L, 65535UL, 0x9D44L, 6UL}}};
static int g_36 = 0L;
static int *g_77 = &g_36;
static unsigned char g_84 = 0x46L;
static int **g_96[8][3][5] = {{{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}, {{&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}, {&g_77, &g_77, (void*)0, &g_77, &g_77}}};
static int g_102 = 0x9A0A0809L;
static int *g_101 = &g_102;
static char g_105[5] = {0x13L, 0x6AL, 0x13L, 0x6AL, 0x13L};
static unsigned char g_113[10][4][3] = {{{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}, {{0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}, {0x6DL, 0x29L, 0x0BL}}};
static unsigned g_120 = 0x09E68FEEL;
static char g_139 = (-1L);
static unsigned g_174 = 0x2F664288L;
static short g_187 = 8L;
static int g_199 = (-10L);
static int g_201 = 0xDE1354FEL;
static const int g_235 = 0x4FC960D3L;
static unsigned short g_247 = 0xCF49L;
static int g_280 = 0x11C7D081L;
static int * const g_303 = &g_201;
static int * const *g_302 = &g_303;
static int ***g_314 = &g_96[4][2][1];
static int ****g_313[10] = {&g_314, &g_314, &g_314, &g_314, &g_314, &g_314, &g_314, &g_314, &g_314, &g_314};
static unsigned *g_386 = &g_120;
static unsigned **g_385 = &g_386;
static char g_393 = 0x1CL;
static char g_407 = (-2L);
static unsigned ****g_499[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static unsigned ***g_501 = &g_385;
static unsigned ****g_500 = &g_501;
static const short g_550 = 0x75A9L;
static unsigned g_566 = 0xD8208BC9L;
static const short *g_615 = &g_187;
static unsigned ***g_647 = &g_385;
static unsigned **** const g_646 = &g_647;
static unsigned **** const *g_645[1] = {&g_646};
static unsigned g_651[6] = {4294967289UL, 6UL, 4294967289UL, 6UL, 4294967289UL, 6UL};
static int *** const *g_687 = &g_314;
static int *** const **g_686 = &g_687;
static int *** const ***g_685 = &g_686;
static unsigned *** const *g_708[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned *** const **g_707[10] = {&g_708[5], &g_708[5], &g_708[5], &g_708[5], &g_708[5], &g_708[5], &g_708[5], &g_708[5], &g_708[5], &g_708[5]};
static unsigned *** const ***g_706 = &g_707[4];
static char g_793 = 0xE4L;
static const unsigned g_824[7] = {0x39CA0C61L, 0x39CA0C61L, 0x39CA0C61L, 0x39CA0C61L, 0x39CA0C61L, 0x39CA0C61L, 0x39CA0C61L};



static unsigned func_1(void);
static unsigned func_6(short p_7, unsigned p_8, int p_9);
static const char func_17(int p_18, short p_19);
static int func_20(unsigned char p_21, const unsigned p_22, unsigned p_23, unsigned short p_24);
static const int * func_45(unsigned char p_46, short * p_47, int * const p_48, short * p_49, unsigned char p_50);
static short * func_51(int p_52, int p_53, int * p_54);
static int * func_55(char p_56, unsigned p_57, unsigned short p_58, int * p_59, unsigned char p_60);
static char func_61(unsigned p_62, const int p_63, int * p_64, const short * p_65, int p_66);
static int * func_67(const short * p_68, short * p_69, unsigned p_70);
static const short * func_71(short p_72, int * p_73);
static unsigned func_1(void)
{
    int l_25 = 0x84CB8F6CL;
    short *l_32[9] = {&g_33, &g_33, &g_33, &g_33, &g_33, &g_33, &g_33, &g_33, &g_33};
    int *l_35 = &g_36;
    const short l_37 = (-3L);
    unsigned short *l_807[7];
    unsigned char l_808 = 0x00L;
    int l_835 = 0xE0155B13L;
    char l_846[10];
    int *l_847 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_807[i] = &g_34[3][2][0];
    for (i = 0; i < 10; i++)
        l_846[i] = (-1L);
    (*l_35) = (safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((((func_6(((safe_lshift_func_uint16_t_u_u(((g_34[3][2][0] = ((safe_sub_func_uint8_t_u_u(g_16, func_17(func_20(l_25, (safe_lshift_func_uint8_t_u_s(l_25, 7)), l_25, ((safe_mod_func_uint8_t_u_u(((((+0x28L) == (((*l_35) = (safe_sub_func_int16_t_s_s((g_34[3][2][0] = (l_25 , l_25)), l_25))) >= (g_33 , 4294967294UL))) < g_33) > l_37), g_33)) != 0x221EBC5FL)), g_174))) < 0UL)) , (*l_35)), 10)) >= 0x45L), l_808, l_25) != l_835) < l_808) && 0x46L) >= 4294967286UL), g_16)), l_835));
    l_35 = l_847;
    for (g_393 = 24; (g_393 >= 8); g_393 = safe_sub_func_int16_t_s_s(g_393, 1))
    {
        unsigned char l_850[2];
        int *l_851 = (void*)0;
        int *l_852 = (void*)0;
        int *l_853 = (void*)0;
        int *l_854 = &g_102;
        int i;
        for (i = 0; i < 2; i++)
            l_850[i] = 254UL;
        (*l_854) = l_850[1];
        return g_120;
    }
    return g_139;
}







static unsigned func_6(short p_7, unsigned p_8, int p_9)
{
    int l_813 = 0xBCF84C67L;
    unsigned char *l_818[9];
    const unsigned *l_822 = (void*)0;
    const unsigned **l_821[7][9] = {{&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}, {&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}, {&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}, {&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}, {&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}, {&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}, {&l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822, &l_822}};
    const unsigned *l_823 = &g_824[1];
    int l_830[9] = {2L, 6L, 2L, 6L, 2L, 6L, 2L, 6L, 2L};
    unsigned *l_831 = &g_174;
    int *l_832 = &g_280;
    unsigned short *l_833[9][10][2] = {{{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}, {{&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}, {&g_34[3][2][0], (void*)0}}};
    unsigned short l_834 = 0UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_818[i] = &g_84;
    p_9 = (g_651[0] , l_834);
    return p_8;
}







static const char func_17(int p_18, short p_19)
{
    int *l_551 = (void*)0;
    int l_553 = 0x445D6298L;
    unsigned ***l_560 = &g_385;
    const unsigned char *l_580 = &g_84;
    unsigned short l_618 = 5UL;
    int l_652[5][10] = {{(-1L), 0x2468C9C5L, 0x770EC9E5L, 9L, 0x81921F77L, 0x51120CEFL, 0x81921F77L, 9L, 0x770EC9E5L, 0x2468C9C5L}, {(-1L), 0x2468C9C5L, 0x770EC9E5L, 9L, 0x81921F77L, 0x51120CEFL, 0x81921F77L, 9L, 0x770EC9E5L, 0x2468C9C5L}, {(-1L), 0x2468C9C5L, 0x770EC9E5L, 9L, 0x81921F77L, 0x51120CEFL, 0x81921F77L, 9L, 0x770EC9E5L, 0x2468C9C5L}, {(-1L), 0x2468C9C5L, 0x770EC9E5L, 9L, 0x81921F77L, 0x51120CEFL, 0x81921F77L, 9L, 0x770EC9E5L, 0x2468C9C5L}, {(-1L), 0x2468C9C5L, 0x770EC9E5L, 9L, 0x81921F77L, 0x51120CEFL, 0x81921F77L, 9L, 0x770EC9E5L, 0x2468C9C5L}};
    const short *l_676 = &g_33;
    short l_716 = 3L;
    int *l_738 = &g_201;
    int **l_737 = &l_738;
    int *l_755[6] = {&l_553, &g_102, &l_553, &g_102, &l_553, &g_102};
    int l_770 = 0xB1EE2C9EL;
    int i, j;
    for (g_201 = 0; (g_201 <= 2); g_201 += 1)
    {
        const short *l_549 = &g_550;
        const short **l_548 = &l_549;
        int l_552 = 4L;
        int l_556 = 0x2F9845E6L;
        const unsigned *l_565[5] = {&g_566, &g_566, &g_566, &g_566, &g_566};
        const unsigned **l_564 = &l_565[4];
        int *l_579 = &l_553;
        const int l_599 = 6L;
        unsigned *** const *l_704 = &g_501;
        unsigned *** const **l_703 = &l_704;
        unsigned *** const ***l_702 = &l_703;
        int *l_735[2][8] = {{&g_201, &l_652[3][4], &g_201, &l_652[3][4], &g_201, &l_652[3][4], &g_201, &l_652[3][4]}, {&g_201, &l_652[3][4], &g_201, &l_652[3][4], &g_201, &l_652[3][4], &g_201, &l_652[3][4]}};
        int **l_734 = &l_735[0][4];
        int i, j;
        l_551 = &p_18;
        l_552 = ((*l_551) = (*l_551));
    }
    return g_34[1][0][2];
}







static int func_20(unsigned char p_21, const unsigned p_22, unsigned p_23, unsigned short p_24)
{
    char l_40 = 1L;
    int *l_74 = &g_36;
    short *l_79[1][5];
    unsigned l_80 = 4294967294UL;
    unsigned char l_100[5] = {0x8BL, 1UL, 0x8BL, 1UL, 0x8BL};
    short *l_152 = &g_33;
    const int *l_234 = &g_235;
    const int **l_233 = &l_234;
    char *l_236 = (void*)0;
    char *l_237[6] = {&g_139, &g_139, &g_105[0], &g_139, &g_139, &g_105[0]};
    int *l_238 = &g_199;
    unsigned l_244 = 2UL;
    unsigned l_254 = 1UL;
    unsigned l_278[1];
    int l_316[10][7][3] = {{{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}, {{0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}, {0x15E3640AL, 0L, 1L}}};
    int *****l_360[4][2] = {{(void*)0, &g_313[3]}, {(void*)0, &g_313[3]}, {(void*)0, &g_313[3]}, {(void*)0, &g_313[3]}};
    int *l_371 = &g_36;
    short *l_375 = &g_33;
    unsigned ***l_437 = (void*)0;
    char l_472[3][9] = {{0x6CL, 0x6CL, 0x0DL, 0xE3L, (-7L), 0xE3L, 0x0DL, 0x6CL, 0x6CL}, {0x6CL, 0x6CL, 0x0DL, 0xE3L, (-7L), 0xE3L, 0x0DL, 0x6CL, 0x6CL}, {0x6CL, 0x6CL, 0x0DL, 0xE3L, (-7L), 0xE3L, 0x0DL, 0x6CL, 0x6CL}};
    unsigned l_506 = 4294967287UL;
    unsigned **l_522 = &g_386;
    int l_523 = 9L;
    unsigned l_526[9] = {0xF308271CL, 0xF308271CL, 1UL, 0xF308271CL, 0xF308271CL, 1UL, 0xF308271CL, 0xF308271CL, 1UL};
    int **l_544 = (void*)0;
    int ***l_543 = &l_544;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_79[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_278[i] = 4294967295UL;
    if ((safe_add_func_uint32_t_u_u(l_40, (((*l_238) = ((g_105[0] = (safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((*l_74) = (((*l_233) = func_45(l_40, func_51(g_34[3][2][0], p_22, func_55((func_61(((l_40 , func_67(func_71(g_33, l_74), l_79[0][3], l_80)) != (void*)0), l_80, l_74, l_79[0][4], l_80) <= g_33), l_100[2], p_23, g_101, g_34[0][8][1])), l_74, l_152, g_16)) == (void*)0)), g_235)) , p_23), g_235))) != p_22)) , g_187))))
    {
        int *l_239[6][8] = {{&g_36, (void*)0, &g_102, (void*)0, &g_36, &g_36, &g_36, (void*)0}, {&g_36, (void*)0, &g_102, (void*)0, &g_36, &g_36, &g_36, (void*)0}, {&g_36, (void*)0, &g_102, (void*)0, &g_36, &g_36, &g_36, (void*)0}, {&g_36, (void*)0, &g_102, (void*)0, &g_36, &g_36, &g_36, (void*)0}, {&g_36, (void*)0, &g_102, (void*)0, &g_36, &g_36, &g_36, (void*)0}, {&g_36, (void*)0, &g_102, (void*)0, &g_36, &g_36, &g_36, (void*)0}};
        int i, j;
        (*l_233) = l_239[5][6];
    }
    else
    {
        unsigned short *l_245 = &g_34[2][7][4];
        unsigned short *l_246 = &g_247;
        int *l_248 = &g_201;
        int l_251 = 3L;
        unsigned l_292 = 1UL;
        int l_336 = 5L;
        unsigned l_458[10] = {0xAAA4100DL, 0x68F39C98L, 0xAAA4100DL, 0x68F39C98L, 0xAAA4100DL, 0x68F39C98L, 0xAAA4100DL, 0x68F39C98L, 0xAAA4100DL, 0x68F39C98L};
        int *l_473 = &l_251;
        unsigned l_474 = 0xEA9B5E3FL;
        short l_507 = 0x8806L;
        int ***l_514 = (void*)0;
        int i;
        if ((safe_sub_func_uint8_t_u_u((((void*)0 == (*l_233)) , (((~p_21) && ((*l_152) = (g_113[1][1][2] , (((safe_mod_func_uint16_t_u_u(((*l_246) = ((*l_245) = l_244)), 0xDFD2L)) >= ((l_248 != &g_199) , (safe_sub_func_int8_t_s_s((((&g_96[3][2][1] == &g_96[6][0][1]) < l_251) , p_21), 1UL)))) || l_251)))) <= g_113[6][1][2])), g_84)))
        {
            int *l_279 = (void*)0;
            unsigned short l_315 = 0xCC27L;
            unsigned short l_333 = 0x75F6L;
            const short *l_372 = (void*)0;
            int **l_419 = &l_238;
            int ***l_418 = &l_419;
            if (((*l_74) = (safe_sub_func_int16_t_s_s((*l_74), l_254))))
            {
                (*l_233) = &l_251;
            }
            else
            {
                int *l_255 = &l_251;
                int * const *l_311 = &l_279;
                int * const **l_310[7];
                int * const ***l_309 = &l_310[6];
                int i;
                for (i = 0; i < 7; i++)
                    l_310[i] = &l_311;
                (*l_255) = ((*g_101) = p_21);
                for (l_254 = 28; (l_254 == 28); l_254 = safe_add_func_uint16_t_u_u(l_254, 7))
                {
                    const short *l_276[4][5][9] = {{{&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}}, {{&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}}, {{&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}}, {{&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}, {&g_33, (void*)0, (void*)0, &g_33, &g_33, &g_33, &g_187, &g_187, &g_187}}};
                    int l_277 = 0x7DD6AF28L;
                    int i, j, k;
                    for (l_40 = 4; (l_40 >= 0); l_40 -= 1)
                    {
                        unsigned **l_259 = (void*)0;
                        unsigned ***l_258 = &l_259;
                        (*l_258) = (void*)0;
                    }
                    (*l_74) = (g_201 && p_24);
                    if ((p_24 || 0xB9L))
                    {
                        return g_280;
                    }
                    else
                    {
                        char l_299 = 0x13L;
                        int *l_300 = &l_251;
                        const short *l_301 = &g_33;
                        int * const **l_304 = &g_302;
                        (*l_233) = (l_279 = ((safe_rshift_func_int8_t_s_s((((*l_245) = func_61(p_23, (safe_mod_func_uint8_t_u_u((g_174 >= ((safe_add_func_uint32_t_u_u(g_84, (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((0L != ((safe_unary_minus_func_uint16_t_u((+l_292))) > ((safe_sub_func_uint32_t_u_u(4294967287UL, ((*l_74) = (g_199 && (safe_mod_func_uint16_t_u_u(g_247, (+((safe_mod_func_uint8_t_u_u((p_24 < g_120), p_24)) || p_21)))))))) < g_34[0][3][4]))) ^ 0x13L), l_251)), g_174)))) > p_21)), l_277)), &l_251, &g_187, l_299)) & (-2L)), 4)) , l_74));
                        (*l_233) = l_300;
                        (*l_233) = func_67(l_301, &g_187, g_187);
                        (*l_304) = g_302;
                    }
                }
                for (l_292 = 4; (l_292 >= 5); ++l_292)
                {
                    (*l_255) = (*g_101);
                }
                for (l_40 = 18; (l_40 > (-12)); l_40 = safe_sub_func_int16_t_s_s(l_40, 7))
                {
                    unsigned char l_322 = 0x7EL;
                    short l_327 = (-6L);
                    unsigned char *l_330 = &l_322;
                    unsigned char *l_331 = &l_100[2];
                    int *l_332 = &g_102;
                    if (p_24)
                    {
                        int * const ****l_312 = &l_309;
                        l_251 = (((*l_312) = l_309) != g_313[9]);
                        (*l_255) = p_23;
                    }
                    else
                    {
                        (*g_101) = p_22;
                        if (l_315)
                            continue;
                        if (l_316[3][6][2])
                            break;
                    }
                    (*l_233) = ((safe_unary_minus_func_int8_t_s(p_21)) , (*l_233));
                    for (l_251 = 0; (l_251 >= 22); l_251++)
                    {
                        (*l_74) = (l_336 = (*g_101));
                    }
                }
            }
            for (l_333 = 25; (l_333 <= 10); --l_333)
            {
                unsigned char l_339 = 255UL;
                int *l_340 = &g_280;
                if (l_339)
                {
                    for (p_24 = 0; (p_24 <= 4); p_24 += 1)
                    {
                        (*l_233) = l_340;
                        (*l_340) = ((*g_101) = (*l_340));
                    }
                }
                else
                {
                    return p_21;
                }
            }
            if (l_336)
            {
                int * const **l_342[8][2][3] = {{{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}, {{&g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302}}};
                unsigned char l_352 = 255UL;
                int l_354 = 0xECDB6F07L;
                unsigned *l_373 = &g_120;
                const unsigned l_374 = 1UL;
                int ****l_394 = &g_314;
                int *l_398[8] = {&g_102, &g_280, &g_102, &g_280, &g_102, &g_280, &g_102, &g_280};
                int *l_405[5][10][5] = {{{&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}}, {{&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}}, {{&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}}, {{&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}}, {{&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}, {&g_36, &g_36, (void*)0, &l_336, &l_354}}};
                int i, j, k;
                (*l_233) = l_279;
                for (l_336 = 0; (l_336 != (-23)); l_336 = safe_sub_func_uint16_t_u_u(l_336, 1))
                {
                    unsigned *l_345 = (void*)0;
                    unsigned *l_346[5] = {(void*)0, &l_254, (void*)0, &l_254, (void*)0};
                    unsigned char *l_350[2];
                    int l_351 = 2L;
                    const int l_353 = 0x739512A2L;
                    int *****l_359 = &g_313[4];
                    int ******l_361 = &l_360[1][1];
                    int l_370 = 0xCD59E5D1L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_350[i] = &l_100[2];
                    (*l_74) = func_61((g_120 = g_113[1][1][2]), ((((**g_302) , (void*)0) == (void*)0) | (l_351 >= 251UL)), &l_351, &g_33, (*l_74));
                    if ((l_354 = (-3L)))
                    {
                        (*g_101) = l_351;
                        return (*g_77);
                    }
                    else
                    {
                        (*g_101) = (safe_mod_func_int16_t_s_s(p_23, l_251));
                        (*g_77) = p_22;
                        (*g_101) = 0x30814F4FL;
                    }
                    (*l_233) = func_55(((safe_lshift_func_int16_t_s_s(func_61((!(g_120 = ((l_359 != ((*l_361) = l_360[1][1])) <= func_61((((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(0x65B3739AL, p_24)), g_139)) > p_21) ^ (!(p_21 || (safe_add_func_uint32_t_u_u((p_23 = (((((*l_152) = l_352) , (l_251 = l_370)) , g_174) && g_105[0])), 7L))))), p_24, &l_354, &g_187, l_336)))), p_22, l_371, l_372, (*g_101)), g_105[0])) > (-1L)), g_113[1][1][2], g_247, l_371, g_187);
                }
                (*g_101) = func_61(g_199, (7L && l_251), &l_336, l_372, (func_61(((*l_373) = g_235), l_374, func_67(((+(p_21 , p_24)) , l_372), l_375, p_22), &g_187, p_22) , (-1L)));
                for (g_187 = 0; (g_187 <= 4); g_187 += 1)
                {
                    int *l_395[1];
                    unsigned short l_396 = 0x8ECCL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_395[i] = &g_280;
                    (*l_74) = p_24;
                    (*g_77) = ((p_23 , l_336) <= (p_23 >= (+(g_105[0] = (l_352 , (((*g_303) , g_235) || p_23))))));
                    l_279 = func_67(l_372, func_51(((safe_add_func_uint8_t_u_u(((!(((((safe_add_func_int32_t_s_s(((*l_371) = ((safe_add_func_int16_t_s_s(0x74DFL, p_24)) , 1L)), ((void*)0 == g_385))) >= 0x2746AA76L) && (((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((l_354 = (safe_lshift_func_int8_t_s_s((l_292 , p_23), 7))), g_393)), g_247)) , l_394) == &g_314)) , g_84) == g_280)) || (*l_74)), g_33)) != p_22), (*g_303), l_395[0]), l_396);
                    for (g_36 = 4; (g_36 >= 0); g_36 -= 1)
                    {
                        unsigned char l_397 = 0x7CL;
                        (*l_233) = (l_398[6] = (((l_397 ^ 253UL) , p_24) , &l_336));
                        return p_23;
                    }
                    for (g_199 = 2; (g_199 >= 0); g_199 -= 1)
                    {
                        int *l_404 = (void*)0;
                        l_405[4][2][0] = &l_354;
                        if ((*g_101))
                            continue;
                        (*l_279) = (g_102 && (-4L));
                    }
                }
            }
            else
            {
                short l_406 = 0xD09BL;
                unsigned ***l_436 = &g_385;
                int l_448 = 0xA0AC41DAL;
                int *l_463 = &l_448;
                (*g_77) = (l_336 = l_406);
                for (g_201 = 3; (g_201 <= 9); g_201 += 1)
                {
                    unsigned *l_416 = (void*)0;
                    unsigned *l_417 = &l_278[0];
                    int l_420 = (-7L);
                    const short *l_427 = (void*)0;
                    int i;
                    (*l_233) = ((func_61((((g_407 = (1L == p_23)) , ((**g_385) & (((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((((*l_417) = g_120) , &g_302) != l_418), l_420)), (g_407 = (safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_102, (safe_lshift_func_uint8_t_u_u(l_406, 0)))), (*l_371)))))) || 0L) < p_22))) , 0xBAE4642CL), p_21, &l_251, l_427, l_420) > l_333) , (void*)0);
                    (*l_74) = (safe_div_func_int8_t_s_s((p_24 , 0x1DL), g_36));
                }
                for (p_21 = (-13); (p_21 != 56); p_21++)
                {
                    unsigned ****l_438 = (void*)0;
                    unsigned ****l_439 = &l_437;
                    int l_442 = 5L;
                    int l_457 = 0xB05A40A2L;
                    int l_462 = (-6L);
                    if ((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_33, (l_436 == ((*l_439) = l_437)))), 9)))
                    {
                        unsigned char *l_445 = (void*)0;
                        unsigned char *l_446 = (void*)0;
                        unsigned char *l_447 = &l_100[2];
                        (*l_418) = &l_248;
                        (*l_74) = (((void*)0 != &l_279) & l_292);
                        l_336 = ((p_24 , ((safe_add_func_uint16_t_u_u(0UL, (!(g_33 = g_33)))) ^ (l_448 = (l_406 >= ((((*l_447) = ((((*g_101) = l_442) , p_23) , (safe_mod_func_uint16_t_u_u(g_84, p_21)))) , (0x96L && p_21)) & 0x49A5L))))) || 2L);
                        return l_442;
                    }
                    else
                    {
                        unsigned short l_453 = 0x0BAAL;
                        int *l_456 = &l_442;
                        int *l_461 = &g_280;
                        (*l_456) = ((safe_sub_func_int32_t_s_s(((((*g_77) = ((p_24 = (((safe_add_func_uint16_t_u_u(((g_36 , l_453) , func_61((p_21 & func_61(((p_21 > (7L || (((g_16 > g_113[8][3][1]) || (safe_rshift_func_uint16_t_u_u(((-1L) <= (((func_61((**g_385), p_22, l_456, &g_33, (*g_101)) & (*g_386)) < l_457) , g_280)), p_21))) ^ g_34[2][0][3]))) & g_393), p_21, &l_457, &g_187, p_24)), p_23, &l_251, l_375, (*g_101))), g_34[3][2][0])) && (*l_456)) , p_22)) || 0x0E87L)) ^ (**g_385)) == 0x1AL), 0x2CA710C9L)) == g_407);
                        l_463 = ((((((p_24 || (((~func_61(l_406, ((l_458[4] >= 0xDF2BL) , ((*l_461) = ((-1L) && (safe_rshift_func_uint16_t_u_s(0xBEBCL, 3))))), l_456, l_79[0][0], p_24)) <= g_34[3][2][0]) , p_21)) , 0xA4L) < p_21) , p_24) | l_462) , &l_251);
                        (*l_371) = (*g_77);
                        l_442 = p_21;
                    }
                }
            }
        }
        else
        {
            int l_464 = 0x2529E886L;
            unsigned *** const l_467 = (void*)0;
            unsigned *** const *l_466[1][5];
            unsigned *** const **l_465 = &l_466[0][3];
            int *l_508[3];
            const int *l_513 = &g_280;
            const short *l_520 = &l_507;
            short *l_521 = &g_187;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_466[i][j] = &l_467;
            }
            for (i = 0; i < 3; i++)
                l_508[i] = &g_280;
            (*l_233) = func_45(((l_464 = p_21) , func_61(p_21, (((((*l_465) = &l_437) != &l_437) , ((safe_add_func_uint32_t_u_u((p_21 == ((p_24 || 1L) != (safe_lshift_func_uint16_t_u_s((func_61((l_458[4] , (((l_464 == g_113[1][1][2]) <= l_472[1][2]) <= p_22)), p_22, &l_336, &g_187, l_458[5]) < g_16), 1)))), p_24)) ^ p_24)) , 0x5A9FEDD1L), l_473, l_79[0][3], p_24)), l_246, l_473, l_245, g_174);
            (*l_233) = func_55(g_113[9][2][0], p_22, (g_201 <= ((((*g_77) = (p_24 != (((p_22 , 247UL) | p_24) || (l_474 , ((0x9BC6L <= 4L) , 8UL))))) , 0x3D00L) && l_464)), &l_336, g_105[2]);
            if (p_22)
            {
                const short l_477 = (-1L);
                int **l_488 = &l_473;
                const int * const *l_517 = (void*)0;
                const int * const **l_516[3][7] = {{&l_517, &l_517, (void*)0, &l_517, &l_517, (void*)0, &l_517}, {&l_517, &l_517, (void*)0, &l_517, &l_517, (void*)0, &l_517}, {&l_517, &l_517, (void*)0, &l_517, &l_517, (void*)0, &l_517}};
                int i, j;
                if ((65531UL | (safe_sub_func_uint8_t_u_u((l_477 == (((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(1UL, func_61((safe_sub_func_uint8_t_u_u(func_61((safe_mod_func_int16_t_s_s((0L <= ((void*)0 == l_488)), 6UL)), ((p_23 >= ((((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_464 < g_174), (**l_233))), g_187)) < (**l_488)) < l_464) < (-1L))) , (-5L)), &l_251, &g_33, p_24), p_23)), p_22, (*l_488), &g_33, p_24))) <= l_464), 246UL)), (**l_233))) < p_21) && p_24)), p_24))))
                {
                    const int ***l_496 = &l_233;
                    const int ****l_495 = &l_496;
                    (*l_473) = (safe_div_func_uint16_t_u_u(((*l_245) = ((*l_246) = g_139)), 8UL));
                    (*l_74) = ((void*)0 != l_495);
                    (***l_495) = func_55((**l_488), ((((**g_302) = (safe_sub_func_uint16_t_u_u(((g_499[1] = (void*)0) == g_500), ((g_102 > (l_464 && ((((p_23 , (safe_lshift_func_int16_t_s_u(((*l_375) = ((safe_add_func_uint8_t_u_u((p_21 != (**l_488)), 0x20L)) > p_21)), 7))) == g_247) >= g_280) ^ p_24))) != 4UL)))) , 0x0FL) || l_506), l_507, l_508[0], g_187);
                    for (l_336 = 9; (l_336 >= 0); l_336 -= 1)
                    {
                        int i;
                        return l_458[l_336];
                    }
                }
                else
                {
                    short l_509 = 0x9736L;
                    int *l_510 = &g_280;
                    int ***l_515 = &g_96[6][2][1];
                    (*l_510) = ((((**g_302) , l_509) , (((*l_473) = ((((*l_371) = (((****g_500) = func_61((*l_234), (0x54C3L | (**l_233)), func_55(p_22, g_33, (*l_473), l_510, g_84), l_79[0][4], p_23)) ^ 0x3E853B37L)) == (*l_473)) && g_84)) , p_22)) || (*l_473));
                    for (l_336 = 0; (l_336 >= 2); ++l_336)
                    {
                        const int * const ***l_518 = &l_516[2][2];
                        int l_519[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_519[i] = (-1L);
                        l_513 = (*l_233);
                        l_519[0] = ((l_515 = l_514) != ((*l_518) = l_516[0][6]));
                    }
                }
            }
            else
            {
                (*l_371) = func_61((****g_500), ((*l_513) , 0x861A6FD0L), func_67(l_520, l_521, (*g_386)), (g_113[1][1][2] , l_152), p_21);
            }
        }
        return p_23;
    }
    if (((void*)0 == l_522))
    {
        l_523 = 0xF3730C2AL;
    }
    else
    {
        int * const *l_530 = &g_101;
        int * const **l_529 = &l_530;
        int * const ***l_528 = &l_529;
        int * const ****l_527 = &l_528;
        int * const **l_545 = &g_302;
        int *l_546[9][9][3] = {{{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}, {{&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}, {&g_280, &g_280, &g_36}}};
        unsigned char *l_547 = &g_113[7][3][1];
        int i, j, k;
        for (g_199 = 0; g_199 < 10; g_199 += 1)
        {
            g_313[g_199] = &g_314;
        }
        (*l_371) = (((g_101 != ((((*l_74) >= (safe_lshift_func_uint16_t_u_u(((((+(l_526[7] = g_247)) && g_34[0][0][1]) , l_527) != &g_313[9]), 9))) , (safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((((*l_547) = (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((g_34[3][4][4] , (safe_rshift_func_int16_t_s_u((***l_529), 6))), g_280)) < 0xFFL), (***l_529)))) , p_22), (-8L))), 0xD7L)) || p_22), p_23))) , &l_278[0])) <= p_23) && (*g_101));
    }
    return (*g_77);
}







static const int * func_45(unsigned char p_46, short * p_47, int * const p_48, short * p_49, unsigned char p_50)
{
    int l_156 = 0x0311020BL;
    int l_166 = 0x08B61AE0L;
    int *l_208 = &g_102;
    const short *l_209[3][5][6] = {{{(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}}, {{(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}}, {{(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}, {(void*)0, &g_187, &g_187, &g_187, (void*)0, (void*)0}}};
    int *l_229[8] = {&g_36, &g_36, (void*)0, &g_36, &g_36, (void*)0, &g_36, &g_36};
    const int *l_230 = &l_156;
    const int *l_231[7][3] = {{(void*)0, &g_102, &l_166}, {(void*)0, &g_102, &l_166}, {(void*)0, &g_102, &l_166}, {(void*)0, &g_102, &l_166}, {(void*)0, &g_102, &l_166}, {(void*)0, &g_102, &l_166}, {(void*)0, &g_102, &l_166}};
    const int *l_232 = (void*)0;
    int i, j, k;
    for (p_46 = 1; (p_46 <= 4); p_46 += 1)
    {
        unsigned char l_157 = 1UL;
        int ***l_191 = &g_96[6][0][0];
        int *l_195 = &g_102;
        (*p_48) = 0x155C2003L;
        for (g_33 = 2; (g_33 >= 0); g_33 -= 1)
        {
            const unsigned char l_172 = 1UL;
            int l_175 = 0x7EDD3F16L;
            int *l_178[8][5] = {{&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}, {&g_102, &g_102, &g_36, &g_102, &g_102}};
            int ***l_189 = &g_96[6][0][1];
            int **l_210 = &g_101;
            char *l_215 = &g_139;
            unsigned *l_216 = &g_120;
            int i, j;
            for (g_84 = 0; (g_84 <= 2); g_84 += 1)
            {
                int **l_153 = &g_77;
                const unsigned *l_184 = &g_120;
                int i, j, k;
                (*l_153) = p_48;
                (*p_48) = (safe_add_func_int32_t_s_s(((*p_47) || ((l_156 , ((g_113[7][2][0] = l_157) , ((g_105[(g_84 + 2)] = ((p_46 ^ (((l_166 = (p_50 < (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((!(safe_lshift_func_int16_t_s_s(1L, 14))), (*g_77))), g_113[7][3][1])), p_46)))) ^ g_113[7][2][2]) != (*p_49))) , p_46)) < l_157))) || g_16)), (*p_48)));
                for (l_156 = 0; (l_156 <= 2); l_156 += 1)
                {
                    char *l_167 = (void*)0;
                    unsigned short *l_170[6] = {&g_34[3][2][0], &g_34[3][2][0], (void*)0, &g_34[3][2][0], &g_34[3][2][0], (void*)0};
                    unsigned *l_173[9] = {&g_174, &g_174, &g_174, &g_174, &g_174, &g_174, &g_174, &g_174, &g_174};
                    short *l_185 = (void*)0;
                    short *l_186 = &g_187;
                    unsigned char *l_188 = &l_157;
                    int ****l_190 = &l_189;
                    int i, j, k;
                    (*l_153) = ((l_167 != (((g_34[4][0][3] = (safe_lshift_func_uint8_t_u_s(g_120, p_50))) < (safe_unary_minus_func_uint8_t_u((l_172 | ((l_175 = g_16) >= (65535UL > (safe_add_func_uint32_t_u_u(l_166, ((p_50 , 0xFE17F827L) > (-1L)))))))))) , (void*)0)) , (void*)0);
                    (*l_153) = func_67(func_71(l_172, l_178[2][2]), &g_33, ((safe_unary_minus_func_uint8_t_u(((*l_188) = ((((p_46 <= (g_34[3][2][0] = (((safe_lshift_func_int8_t_s_s(((g_113[7][2][0] <= (((((*l_186) = (g_113[1][1][2] <= (l_184 == &g_120))) <= 0UL) ^ 0L) > g_120)) && l_157), p_50)) != g_120) & 0x7391EF43L))) & p_46) <= 0x1D08L) || g_33)))) != l_166));
                    l_166 = ((*g_101) = (((*l_190) = l_189) != l_191));
                }
            }
            for (p_50 = 0; (p_50 >= 18); p_50++)
            {
                int **l_194[8][7] = {{&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}, {&g_77, &l_178[5][1], &l_178[3][4], &l_178[3][4], &l_178[5][1], &g_77, &l_178[5][1]}};
                int *l_198 = &g_199;
                int *l_200 = &g_201;
                unsigned char *l_204[8] = {&g_16, &l_157, &g_16, &l_157, &g_16, &l_157, &g_16, &l_157};
                unsigned *l_205[10] = {&g_120, &g_120, (void*)0, (void*)0, &g_120, &g_120, &g_120, (void*)0, (void*)0, &g_120};
                int i, j;
                l_195 = &l_166;
                (*p_48) = (((g_120 = ((safe_div_func_int16_t_s_s((g_113[7][1][0] != (((void*)0 != p_48) , ((((((*l_200) = ((*l_198) = 0x5F4BB7FEL)) , &p_46) == (void*)0) != (safe_lshift_func_uint16_t_u_u(g_105[2], ((*g_77) <= (((l_156 = (*l_195)) , 253UL) > p_50))))) || p_50))), p_46)) && 0xD47EL)) <= 0x53087AE7L) > (*p_48));
                (*g_77) = (g_139 ^ ((safe_div_func_uint8_t_u_u((+(g_113[0][0][2] = p_46)), p_46)) & g_105[0]));
            }
            (*l_210) = p_48;
            l_229[2] = func_55((((*l_216) = (safe_div_func_int8_t_s_s((*l_208), ((*l_215) = (safe_div_func_uint32_t_u_u((*l_195), (*p_48))))))) , (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((*l_215) = ((g_16 < ((safe_lshift_func_int8_t_s_u((((*p_47) & (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((g_113[1][0][2] != ((-7L) != 1UL)), 3)) ^ func_61(((safe_sub_func_int8_t_s_s(0x2DL, p_50)) > 0UL), (*p_48), &l_156, l_209[1][3][0], (*p_48))), (*l_195)))) <= g_36), 2)) , p_46)) < 0x6A66L)), 2)), (*p_48)))), g_34[4][3][2], (*l_195), &g_102, (*l_208));
        }
    }
    return l_232;
}







static short * func_51(int p_52, int p_53, int * p_54)
{
    int *l_137 = &g_36;
    int **l_138 = &g_101;
    short *l_148 = &g_33;
    int **l_149 = &g_77;
    const short *l_150[5];
    int *l_151 = &g_36;
    int i;
    for (i = 0; i < 5; i++)
        l_150[i] = &g_33;
    (*p_54) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(g_16)) , 0xE8F6L), g_36)), (g_102 , ((255UL < ((g_113[8][0][0] ^ (safe_div_func_int16_t_s_s((g_105[0] >= (safe_lshift_func_int16_t_s_u((((void*)0 == l_137) && (*g_77)), 14))), p_52))) > (*l_137))) || 0x763EL))));
    (*l_138) = &p_52;
    (*l_137) = 0x3CEE9F7DL;
    (*l_138) = (l_151 = func_67(func_71(func_61(g_139, (*g_101), (*l_138), func_71((p_53 < (safe_lshift_func_int16_t_s_u((~((*g_101) && (safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((func_61(g_33, (*p_54), ((*l_149) = func_67(func_71(p_52, func_67(&g_33, l_148, g_105[0])), l_148, g_113[0][1][2])), l_150[3], (*g_101)) & g_16), g_34[3][2][0])), 0xAC0673FCL)) >= g_33), p_52)))), (**l_138)))), &g_102), (*p_54)), p_54), &g_33, g_34[3][2][0]));
    return l_148;
}







static int * func_55(char p_56, unsigned p_57, unsigned short p_58, int * p_59, unsigned char p_60)
{
    char *l_103 = (void*)0;
    char *l_104 = &g_105[0];
    int l_106 = 0xADD0F33DL;
    int ***l_112 = &g_96[6][0][1];
    const short *l_121 = &g_33;
    unsigned char *l_122 = &g_113[1][1][2];
    int *l_127 = &g_36;
    (*p_59) = ((l_106 = (((p_56 = ((*l_104) = (!p_58))) , &g_84) != &p_60)) ^ (g_16 , p_58));
    (*p_59) = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((0x653F56D1L <= (safe_unary_minus_func_uint16_t_u(((void*)0 == l_112)))), 6)), ((g_113[1][1][2] , (((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*p_59), (&g_105[0] != (void*)0))), ((0x0EL | g_34[3][2][0]) || g_16))) && p_58) , p_58)) , g_105[1])));
    (*p_59) = 6L;
    (*p_59) = ((((*l_122) = g_102) < ((0xEDL <= (p_59 != (((safe_lshift_func_uint8_t_u_s(func_61(((&p_60 == (void*)0) == (safe_add_func_int8_t_s_s((g_120 | 0UL), 255UL))), (p_59 != l_127), &l_106, l_121, (*l_127)), 1)) , p_56) , &l_106))) ^ 4L)) || g_120);
    return p_59;
}







static char func_61(unsigned p_62, const int p_63, int * p_64, const short * p_65, int p_66)
{
    unsigned char *l_83[1];
    const int l_85[2] = {0x1CA2AE39L, 0x1CA2AE39L};
    unsigned char l_86 = 1UL;
    int **l_92 = &g_77;
    int ***l_91 = &l_92;
    int **l_93 = (void*)0;
    int **l_95 = (void*)0;
    int ***l_94[7][2][9] = {{{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}, {{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}, {{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}, {{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}, {{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}, {{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}, {{&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}, {&l_95, &l_95, (void*)0, &l_95, &l_95, (void*)0, (void*)0, &l_95, (void*)0}}};
    unsigned l_99 = 8UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_83[i] = &g_84;
    (*p_64) = ((g_84 = (safe_lshift_func_uint16_t_u_s(p_62, 6))) && l_85[0]);
    (*p_64) = (*g_77);
    (*p_64) = (((((l_85[0] > l_86) , (safe_mod_func_uint32_t_u_u((p_62 < (g_34[4][6][4] < (safe_add_func_int8_t_s_s((&p_64 != ((*l_91) = &p_64)), (((g_96[6][0][1] = (l_93 = l_93)) == &p_64) || (safe_add_func_int8_t_s_s(g_84, 0xD5L))))))), (-6L)))) & g_34[0][1][2]) | p_62) < g_33);
    (*p_64) = 0x5BC1773AL;
    return l_99;
}







static int * func_67(const short * p_68, short * p_69, unsigned p_70)
{
    (*g_77) = (*g_77);
    return &g_36;
}







static const short * func_71(short p_72, int * p_73)
{
    int *l_76 = &g_36;
    int **l_75[2];
    const short *l_78 = &g_33;
    int i;
    for (i = 0; i < 2; i++)
        l_75[i] = &l_76;
    g_77 = (void*)0;
    g_77 = (p_73 = &g_36);
    return l_78;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_34[i][j][k], "g_34[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_105[i], "g_105[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_113[i][j][k], "g_113[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_651[i], "g_651[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_793, "g_793", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_824[i], "g_824[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
