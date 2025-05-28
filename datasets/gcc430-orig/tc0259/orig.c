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



static int g_6[8][4][7] = {{{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}, {{0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}, {0x3FE5E81AL, (-1L), 0x7F609B2BL, 0xA73D2D67L, (-9L), 2L, 1L}}};
static short g_38 = 0xBE66L;
static int g_47 = (-1L);
static volatile unsigned g_92 = 0x14B3F584L;
static int *g_97[3][9][7] = {{{&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}}, {{&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}}, {{&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}, {&g_6[3][0][4], &g_6[7][3][1], &g_47, &g_6[7][3][1], &g_6[3][0][4], &g_6[7][3][1], &g_47}}};
static int **g_96 = &g_97[2][3][2];
static volatile char g_220 = (-1L);
static volatile unsigned g_255 = 0x7EC4DDADL;
static int *g_286 = &g_6[7][3][1];
static const int *g_344[1][10] = {{&g_47, &g_6[3][0][6], &g_47, &g_6[3][0][6], &g_47, &g_6[3][0][6], &g_47, &g_6[3][0][6], &g_47, &g_6[3][0][6]}};
static short g_381 = 0xD94AL;
static short g_462 = 0x70D5L;
static unsigned short g_625[6] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
static volatile unsigned short g_631 = 0xF76BL;
static int ***g_887 = &g_96;
static int *g_943 = &g_6[7][3][1];
static unsigned g_1051 = 0x945B28AEL;
static unsigned char g_1144 = 249UL;
static short g_1283 = 0xCDA9L;
static int * const g_1286 = &g_47;
static int *g_1393[1] = {&g_47};



static unsigned func_1(void);
static int func_2(char p_3, unsigned char p_4);
static int func_9(const unsigned p_10, unsigned p_11, unsigned p_12, int p_13);
static const unsigned func_14(int p_15, const short p_16, unsigned char p_17, unsigned short p_18);
static unsigned char func_28(const unsigned p_29, unsigned p_30, int p_31);
static const int func_39(int p_40, int * p_41, int * p_42, char p_43);
static int * func_48(short p_49, unsigned short p_50, int * p_51);
static int func_52(int * p_53, const int p_54);
static int func_56(unsigned char p_57, int * p_58, int * p_59, unsigned char p_60);
static int * func_61(unsigned char p_62);
static unsigned func_1(void)
{
    char l_5 = (-8L);
    (*g_286) = (~func_2(l_5, g_6[7][3][1]));


    return l_5;
}







static int func_2(char p_3, unsigned char p_4)
{
    char l_19 = 7L;
    int l_733 = (-4L);
    int *l_1389 = &g_6[7][3][1];
    for (p_3 = 9; (p_3 == 14); p_3++)
    {
        unsigned l_27 = 4294967290UL;
        int *l_1388 = &g_6[7][0][3];
        int *l_1390 = (void*)0;
        int **l_1391 = (void*)0;
        int **l_1392 = &l_1389;
    }
    (**g_887) = l_1389;
    (*g_286) = p_3;
    g_1393[0] = (**g_887);


    return (*l_1389);
}







static int func_9(const unsigned p_10, unsigned p_11, unsigned p_12, int p_13)
{
    short l_734 = 0xBBEFL;
    int **l_735 = &g_97[2][3][0];
    int l_745 = (-8L);
    int *l_803 = &g_47;
    char l_822[3][8][5] = {{{(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}}, {{(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}}, {{(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}, {(-5L), 2L, 5L, 0L, 0x43L}}};
    int l_826[9][8] = {{0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}, {0x82A9AA49L, 0L, 0x82A9AA49L, 0xCC4FB5A6L, 7L, 1L, 0xE06B4DBAL, 1L}};
    unsigned l_834 = 0x23716B50L;
    unsigned l_925 = 4294967289UL;
    short l_926 = 5L;
    const int *l_942 = &g_6[4][3][2];
    int **l_981 = &g_97[2][3][2];
    int *l_1037[8][3][10] = {{{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}, {{&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}, {&l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0, (void*)0, (void*)0, &l_826[8][6], (void*)0}}};
    int *l_1044 = &l_826[3][6];
    int * const l_1065[2] = {(void*)0, (void*)0};
    int l_1080 = (-4L);
    unsigned short l_1090 = 8UL;
    int *l_1092 = &g_6[7][3][1];
    int *l_1117 = (void*)0;
    unsigned l_1213 = 0xF209DFE9L;
    int l_1270 = 0x3D1D281AL;
    char l_1324 = 0xF2L;
    int *l_1355[3];
    const char l_1358 = 0x72L;
    int l_1372[6] = {0xA6534712L, 0xA6534712L, 9L, 0xA6534712L, 0xA6534712L, 9L};
    int l_1373 = 1L;
    short l_1379 = 0x38D4L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1355[i] = (void*)0;
    (*l_735) = func_61(l_734);
    if (p_10)
    {
        int l_736 = 0x42F5FDE0L;
        int *l_739[1][1][4];
        unsigned l_757 = 4294967295UL;
        unsigned short l_806[8] = {0x3A50L, 0x337AL, 0x3A50L, 0x337AL, 0x3A50L, 0x337AL, 0x3A50L, 0x337AL};
        int *l_877 = (void*)0;
        int ***l_893[10][7] = {{&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}, {&g_96, &l_735, &g_96, &l_735, &g_96, &g_96, &l_735}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_739[i][j][k] = &g_6[7][3][1];
            }
        }
        (*l_735) = func_61((0x500CD773L != p_11));
        for (l_734 = 0; (l_734 >= 0); l_734 -= 1)
        {
            int *l_742 = &g_47;
            int * const *l_747 = &l_739[0][0][0];
            int * const **l_746[6];
            unsigned l_754 = 0UL;
            int i;
            for (i = 0; i < 6; i++)
                l_746[i] = &l_747;
            for (g_381 = 0; (g_381 <= 0); g_381 += 1)
            {
                int *l_744 = &g_6[1][2][6];
                int *l_758 = &g_6[7][3][1];
                unsigned char l_771 = 255UL;
                int *l_774 = &g_6[7][3][1];
                (*g_286) = (*g_286);
                for (l_736 = 0; (l_736 <= 0); l_736 += 1)
                {
                    int *l_743 = &g_47;
                    int i, j;
                    for (p_11 = 0; (p_11 <= 0); p_11 += 1)
                    {
                        int i, j, k;
                        g_6[(g_381 + 5)][g_381][(g_381 + 4)] = ((g_6[(l_734 + 7)][(l_734 + 1)][(l_736 + 5)] & g_38) & g_631);
                        if ((*l_743))
                            continue;
                        g_344[p_11][(l_734 + 3)] = l_743;
                        l_745 = p_13;
                    }
                    (*l_743) = (&g_96 != l_746[2]);
                    (*l_743) = ((safe_add_func_int8_t_s_s(p_13, g_462)) || (safe_add_func_uint32_t_u_u(0xBA4CA5C4L, (((p_13 & ((safe_lshift_func_int8_t_s_s(((g_38 , &l_735) == (void*)0), (&g_96 != ((*l_743) , &l_735)))) | p_11)) > g_6[7][3][1]) >= (*g_286)))));
                    g_344[g_381][(l_736 + 5)] = l_739[0][0][3];
                }
                for (g_47 = 0; (g_47 >= 0); g_47 -= 1)
                {
                    int *l_756 = &g_47;
                    for (g_38 = 0; (g_38 <= 0); g_38 += 1)
                    {
                        short l_755 = 0x76F4L;
                        int i, j;
                        l_755 = l_754;
                        if (p_13)
                            break;
                        g_344[g_38][(g_47 + 2)] = l_756;
                    }
                    if ((~p_12))
                    {
                        int i, j;
                        (*g_286) = p_10;
                        if (l_757)
                            break;
                        (**l_747) = p_11;
                        g_344[l_734][(g_381 + 3)] = l_758;
                    }
                    else
                    {
                        (*l_758) = (0UL != (g_6[7][3][1] >= (safe_rshift_func_uint16_t_u_u(g_6[6][0][3], 4))));
                    }
                    if (((((safe_mul_func_uint8_t_u_u(p_11, ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((*l_756), (-3L))), (safe_mul_func_uint8_t_u_u(p_10, ((void*)0 != l_758))))) & p_10), 3)) == func_56(g_625[5], l_756, l_758, l_771)))) == 1UL) == p_10) ^ (*l_742)))
                    {
                        int i, j, k;
                        (*l_758) = (((safe_mul_func_int16_t_s_s(func_56(g_255, l_774, l_744, p_10), (((void*)0 == &l_739[0][0][2]) == g_625[2]))) | ((safe_sub_func_int8_t_s_s(p_12, g_47)) && g_462)) <= g_47);
                        (*g_286) = ((0x3EL & ((((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_12 >= g_381), 3)), ((g_625[3] || 0xD58AL) != ((void*)0 != (*l_747))))), (((safe_mul_func_int8_t_s_s(p_10, (safe_lshift_func_int16_t_s_s(0x22D3L, g_6[4][3][4])))) > 3UL) && p_12))), 1UL)) , 8L) == 0xCA2E0828L) >= 0L)) >= g_462);
                        l_739[l_734][l_734][g_47] = l_744;
                        (*l_744) = p_11;
                    }
                    else
                    {
                        int *l_802 = &g_47;
                        (*l_774) = ((safe_mod_func_uint8_t_u_u((l_735 != (void*)0), ((func_56((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint32_t_u_u((0xC4D49A40L & p_12), p_13)) && (safe_add_func_uint8_t_u_u(0xDFL, p_12))))), (p_12 | (func_56(((p_12 == p_11) , 0x3AL), l_802, l_803, g_631) < 0xDE19L)))), 15)), l_758, l_802, g_462) > p_10) , 9L))) ^ (*g_286));
                    }
                }
            }
        }
        (*g_286) = (p_13 && 0x0DEFL);
        if ((safe_mul_func_int8_t_s_s((&l_735 == (void*)0), l_806[2])))
        {
            unsigned l_812 = 4294967295UL;
            const int *l_816 = &g_6[7][3][1];
            int *l_823 = &g_6[1][3][0];
            (*l_803) = p_12;
            for (l_757 = 0; (l_757 <= 5); l_757 += 1)
            {
                int **l_811 = &g_286;
                const int *l_817 = &g_6[2][0][4];
                unsigned l_827 = 0xBE5007FBL;
                for (l_745 = 4; (l_745 >= 0); l_745 -= 1)
                {
                    int *l_813 = &g_47;
                }
                for (g_47 = 1; (g_47 <= 5); g_47 += 1)
                {
                    l_826[5][2] = ((((safe_rshift_func_uint16_t_u_s(p_10, (g_220 , (safe_mul_func_uint16_t_u_u(0xF4E3L, 0UL))))) <= func_56(l_822[1][4][2], &g_6[1][3][3], l_823, (((0xB0L >= (+(safe_add_func_uint8_t_u_u((0x43E14F09L != p_11), 0L)))) & 0x3DE6E728L) >= p_13))) <= p_13) < 0x5BFEL);
                    return l_827;
                }
            }
            (*l_823) = (*g_286);
            if ((p_10 < ((void*)0 == l_816)))
            {
                for (p_11 = 0; (p_11 < 28); p_11++)
                {
                    int *l_832[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_832[i] = &g_47;
                    for (g_462 = 0; (g_462 < 1); g_462 = safe_add_func_int8_t_s_s(g_462, 3))
                    {
                        int *l_833 = &g_47;
                        (*l_735) = l_832[3];
                        if (p_10)
                            continue;
                        (*l_735) = l_833;
                    }
                    return l_834;
                }
            }
            else
            {
                int *l_837 = &g_6[7][3][1];
                for (g_47 = 0; (g_47 != (-18)); --g_47)
                {
                    (*l_823) = p_11;
                }
                l_823 = l_837;
            }
        }
        else
        {
            int *l_846 = &g_47;
            char l_873 = (-7L);
            int l_907 = 0x2696DEC0L;
            for (p_13 = 0; (p_13 >= (-16)); p_13 = safe_sub_func_int16_t_s_s(p_13, 8))
            {
                int ***l_849 = &l_735;
                for (l_734 = 14; (l_734 <= (-18)); l_734 = safe_sub_func_uint16_t_u_u(l_734, 7))
                {
                    int *l_850 = (void*)0;
                    int *l_863[9][3] = {{(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}, {(void*)0, &g_6[7][3][1], (void*)0}};
                    int i, j;
                    for (p_11 = 0; (p_11 < 20); ++p_11)
                    {
                        (*l_846) = (func_56(((safe_rshift_func_int16_t_s_u(((0x2619707CL || g_255) , p_10), 1)) || 1UL), l_846, &g_6[7][0][2], (safe_mod_func_int32_t_s_s((&g_96 == l_849), 4294967290UL))) == g_462);
                        if (p_12)
                            break;
                        (*l_735) = l_850;
                    }
                    (*l_735) = ((!(safe_add_func_int32_t_s_s(p_12, ((p_10 || p_13) == g_92)))) , (void*)0);
                    (*l_846) = ((((safe_add_func_uint16_t_u_u(p_13, (p_13 & g_92))) && (*l_846)) < p_10) != func_56((g_381 ^ 0x9EL), ((((-2L) < g_38) == 0xC9L) , (void*)0), l_739[0][0][3], g_381));
                }
            }
            if ((safe_sub_func_uint8_t_u_u((p_10 | (safe_mul_func_int8_t_s_s((&g_96 == &l_735), ((void*)0 == &g_6[2][0][4])))), (safe_unary_minus_func_uint8_t_u((g_38 , (p_10 ^ ((safe_lshift_func_uint16_t_u_u(((-4L) != ((p_12 > 0xE5F8A376L) > l_873)), p_12)) || p_10))))))))
            {
                int *l_878 = &l_826[5][6];
                (*l_846) = func_56(g_462, l_846, &g_47, g_631);
                for (g_47 = 0; (g_47 <= 28); g_47++)
                {
                    int *l_876 = &l_826[2][3];
                    unsigned char l_891 = 0xA6L;
                    unsigned l_892 = 4UL;
                    int * const *l_895[1];
                    int * const **l_894[10] = {&l_895[0], &l_895[0], &l_895[0], &l_895[0], &l_895[0], &l_895[0], &l_895[0], &l_895[0], &l_895[0], &l_895[0]};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_895[i] = (void*)0;
                }
            }
            else
            {
                unsigned short l_908 = 65528UL;
                if (p_12)
                {
                    return (*l_846);
                }
                else
                {
                    int *l_911 = &g_6[7][3][1];
                    (*l_846) = l_908;
                    for (l_834 = 0; (l_834 == 37); ++l_834)
                    {
                        unsigned l_912[6][8] = {{4294967295UL, 3UL, 0xCDB5BFBCL, 0UL, 4294967295UL, 9UL, 1UL, 4294967288UL}, {4294967295UL, 3UL, 0xCDB5BFBCL, 0UL, 4294967295UL, 9UL, 1UL, 4294967288UL}, {4294967295UL, 3UL, 0xCDB5BFBCL, 0UL, 4294967295UL, 9UL, 1UL, 4294967288UL}, {4294967295UL, 3UL, 0xCDB5BFBCL, 0UL, 4294967295UL, 9UL, 1UL, 4294967288UL}, {4294967295UL, 3UL, 0xCDB5BFBCL, 0UL, 4294967295UL, 9UL, 1UL, 4294967288UL}, {4294967295UL, 3UL, 0xCDB5BFBCL, 0UL, 4294967295UL, 9UL, 1UL, 4294967288UL}};
                        int i, j;
                        (*l_735) = &l_907;
                        l_911 = &l_907;

                        ;
                        (*l_735) = (void*)0;
                        l_912[2][2] = p_12;
                    }


                    ;
                    for (g_381 = 17; (g_381 == (-11)); g_381 = safe_sub_func_int8_t_s_s(g_381, 4))
                    {
                        return l_908;


                    }
                }


                (*g_887) = &l_803;

                ;
            }



        }


    }
    else
    {
        unsigned l_915 = 0x9E7D68D2L;
        int *l_916 = &g_47;
        (*l_735) = l_916;
    }


    if (((safe_rshift_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((p_10 , ((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((0xF7L && (((p_13 < (*l_803)) , l_925) >= (g_255 >= (((p_10 <= l_926) , (safe_sub_func_int16_t_s_s((*l_803), 0x7F22L))) > 0x8FCDL)))) , &g_96) != (void*)0), 0xBFFBL)), 0x8D5AL)) , g_462)), g_381)) , g_381) == 0xFD71L), 2)) , (*g_286)))
    {
        unsigned short l_935[7] = {0xCBEBL, 0xCBEBL, 1UL, 0xCBEBL, 0xCBEBL, 1UL, 0xCBEBL};
        const int *l_936 = &l_826[5][2];
        int *l_958[7] = {&l_826[6][0], &l_826[6][0], (void*)0, &l_826[6][0], &l_826[6][0], (void*)0, &l_826[6][0]};
        int *l_1009[5][4] = {{&g_6[2][2][3], (void*)0, &g_6[7][1][5], (void*)0}, {&g_6[2][2][3], (void*)0, &g_6[7][1][5], (void*)0}, {&g_6[2][2][3], (void*)0, &g_6[7][1][5], (void*)0}, {&g_6[2][2][3], (void*)0, &g_6[7][1][5], (void*)0}, {&g_6[2][2][3], (void*)0, &g_6[7][1][5], (void*)0}};
        unsigned char l_1028[7][10] = {{0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}, {0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}, {0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}, {0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}, {0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}, {0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}, {0x3EL, 0x3BL, 255UL, 6UL, 5UL, 3UL, 1UL, 1UL, 3UL, 5UL}};
        int ***l_1036 = &l_735;
        int *l_1038 = &g_47;
        unsigned char l_1040 = 0xDFL;
        short l_1041 = 0x3830L;
        char l_1063[3];
        short l_1149 = 0L;
        const int *l_1193 = &l_826[6][2];
        int *l_1224[4];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1063[i] = 0x09L;
        for (i = 0; i < 4; i++)
            l_1224[i] = &g_47;
        (*g_286) = p_12;
        if ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((0UL <= ((l_935[6] ^ ((*l_803) == ((void*)0 != l_936))) >= 253UL)) & (((!((safe_sub_func_uint16_t_u_u(func_56((safe_mod_func_int16_t_s_s(g_381, (safe_unary_minus_func_uint32_t_u(((((void*)0 == l_942) <= (*l_936)) & (*l_942)))))), g_943, &g_6[3][0][4], (*l_942)), g_625[2])) > 0xBB6CL)) >= (*l_936)) == p_11)), p_12)), g_220)))
        {
            const unsigned short l_952[8] = {65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL, 65535UL};
            int ***l_957 = &g_96;
            int i;
            (*g_286) = ((void*)0 != &g_96);
            (*g_943) = (safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(((p_12 & (safe_mul_func_int8_t_s_s(((*l_936) > (safe_sub_func_uint16_t_u_u(0UL, 0L))), 0x01L))) < (&g_96 == ((p_13 > ((l_952[6] != (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((((void*)0 != l_957) == (*l_936)) , (void*)0) == &l_735) <= p_13), 3)), p_12))) == p_13)) , &g_96))), p_11)) , p_12) , p_10), (*l_942)));
        }
        else
        {
            unsigned l_965 = 0x6196EAF5L;
            int *l_966 = &l_826[5][2];
            unsigned l_967 = 0x1F148C21L;
            int ***l_974 = &l_735;
            const int *l_989 = &l_826[5][2];
            int *l_1039 = &g_47;
            int *l_1093 = &l_826[5][2];
            const short l_1122 = 0x4D75L;
            if (((g_631 > g_6[6][3][3]) != (*l_942)))
            {
                int * const l_976 = &l_826[6][3];
                for (p_11 = 0; (p_11 == 36); p_11 = safe_add_func_int16_t_s_s(p_11, 3))
                {
                    (*l_966) = 6L;
                    for (l_925 = (-19); (l_925 > 48); l_925++)
                    {
                        unsigned l_975 = 0xC90ADB26L;
                        int **l_977 = (void*)0;
                        int **l_978 = &g_943;
                        l_975 = (!(safe_rshift_func_uint16_t_u_u((p_13 > g_47), (l_974 != (void*)0))));
                        (*l_978) = l_976;

                        ;
                    }
                    for (g_381 = 0; (g_381 < (-29)); g_381 = safe_sub_func_uint8_t_u_u(g_381, 1))
                    {
                        (*g_887) = l_981;

                        ;
                        (**l_974) = (void*)0;
                        (*l_966) = (*l_936);
                    }
                }

                ;
            }
            else
            {
                short l_987 = 0x3C64L;
                int l_988 = (-7L);
                for (l_965 = 0; (l_965 == 14); ++l_965)
                {
                    int l_991 = 0x4F4DE1E8L;
                    const int *l_996[10][9] = {{&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}, {&g_47, &l_988, &g_47, &l_826[6][2], (void*)0, (void*)0, (void*)0, (void*)0, &l_826[5][2]}};
                    int i, j;
                    for (l_745 = 0; (l_745 <= (-30)); l_745 = safe_sub_func_uint32_t_u_u(l_745, 1))
                    {
                        int *l_986[10][10][2] = {{{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1]}}};
                        const int **l_990 = &g_344[0][8];
                        int i, j, k;
                        l_988 = ((p_11 && l_987) >= 0xB4L);
                        (*l_990) = l_989;
                        (*l_803) = (g_255 && (((p_10 , 5L) ^ l_987) || g_462));
                        (*l_735) = &g_47;
                    }
                    if ((*l_803))
                        continue;
                    (*g_286) = 0x0912D677L;
                    for (l_745 = (-15); (l_745 != (-4)); l_745++)
                    {
                        (*l_735) = &l_988;


                        l_989 = l_996[3][8];

                        ;
                        return p_11;




                    }
                }


                (*l_981) = func_61((safe_mod_func_uint32_t_u_u(l_988, (*l_936))));
            }


            ;
            if (p_12)
            {
                int *l_1001[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_1001[i] = &g_6[0][3][6];
                for (l_925 = 0; (l_925 < 26); ++l_925)
                {
                    short l_1002[8];
                    int *l_1010 = &g_47;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1002[i] = (-1L);
                    if ((*l_942))
                        break;
                    (*g_943) = p_12;
                    (*l_803) = p_13;
                    (*l_735) = l_1010;
                }
                l_1009[1][0] = l_1009[0][0];
                if (p_13)
                {
                    unsigned l_1017 = 2UL;
                    for (g_462 = 0; (g_462 < 16); g_462++)
                    {
                        int *l_1020 = (void*)0;
                        (*g_286) = p_13;
                        (*g_943) = (safe_mod_func_int16_t_s_s((l_1009[2][3] == (void*)0), (safe_rshift_func_int16_t_s_u(((l_1017 & (safe_add_func_uint8_t_u_u(g_625[2], p_13))) , (safe_add_func_uint16_t_u_u(func_56(g_462, (g_625[2] , l_1009[4][1]), &g_47, p_13), g_255))), (*l_803)))));
                        (*l_966) = ((safe_mul_func_uint16_t_u_u(p_11, func_56((l_966 != l_1009[0][3]), l_1020, l_1020, g_462))) & (-9L));
                    }
                }
                else
                {
                    int l_1029 = 0x05B4CB6FL;
                    (*l_966) = l_1028[0][1];
                    return l_1029;




                }
            }
            else
            {
                int *** const l_1035[9][9] = {{&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}, {&g_96, (void*)0, &l_981, &l_981, (void*)0, &g_96, &l_981, &l_981, &l_735}};
                unsigned l_1102 = 0x15E24375L;
                int i, j;
                l_1041 = (safe_mul_func_uint16_t_u_u((g_38 || p_12), ((safe_unary_minus_func_uint16_t_u((((p_13 >= (&g_6[4][1][1] == ((safe_rshift_func_int16_t_s_u(g_255, 3)) , &g_6[4][2][2]))) | 0x7EDFL) , l_1040))) != g_625[2])));
                if ((p_12 ^ ((p_10 > g_381) > (((*l_966) | g_47) || (((safe_add_func_uint8_t_u_u(0x2DL, (g_6[6][3][3] && p_10))) || 250UL) | g_6[3][0][6])))))
                {
                    unsigned l_1052[1];
                    const int *l_1062 = &l_826[8][5];
                    const int **l_1071[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1052[i] = 1UL;
                    for (i = 0; i < 1; i++)
                        l_1071[i] = &l_942;
                    for (l_967 = (-19); (l_967 == 13); l_967 = safe_add_func_int16_t_s_s(l_967, 5))
                    {
                        int l_1047 = (-1L);
                        int *l_1050 = &g_47;
                        (*l_981) = func_61(((*l_942) >= ((l_1047 , (safe_rshift_func_int16_t_s_u(((func_56((*l_989), &g_47, l_1050, (p_11 < g_625[2])) , g_6[7][3][1]) <= (*l_989)), p_11))) , 0xF8L)));
                        (*l_1039) = p_11;
                        if (l_1052[0])
                            continue;
                        return p_12;




                    }
                    (*l_735) = (void*)0;
                    if (p_11)
                    {
                        int *l_1061 = (void*)0;
                        int *l_1064 = (void*)0;
                        int **l_1066[5];
                        int **l_1067[4] = {&l_966, (void*)0, &l_966, (void*)0};
                        int **l_1068 = (void*)0;
                        int **l_1069 = &l_1039;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1066[i] = &g_97[2][3][2];
                        (*l_981) = l_1061;
                        (*l_1069) = l_1065[1];

                        ;
                    }
                    else
                    {
                        int l_1070 = 0L;
                        (*g_286) = ((0xD51AL < (*l_966)) , ((l_1070 || ((*g_286) != l_1070)) | p_12));
                    }

                    ;
                    l_936 = l_1062;
                }
                else
                {
                    char l_1076 = 0L;
                    unsigned char l_1091 = 0UL;
                    int *l_1103[7] = {&g_47, &g_6[0][1][2], &g_47, &g_6[0][1][2], &g_47, &g_6[0][1][2], &g_47};
                    int i;
                    for (p_13 = 0; (p_13 != 13); ++p_13)
                    {
                        int *l_1079[5][2][10] = {{{&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}}, {{&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}, {&g_6[7][3][1], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1], &l_826[5][2], &l_826[6][7], &l_826[5][2], &g_6[7][3][1]}}};
                        int i, j, k;
                        (*l_1044) = (-1L);
                        (*l_974) = (*l_974);
                        (*g_943) = ((((p_13 , (safe_rshift_func_uint8_t_u_s((0xF0L | l_1076), (((((safe_rshift_func_uint8_t_u_u((g_462 | (*l_989)), g_462)) >= ((((*l_1044) != l_1080) > 0xF26FL) == g_38)) , g_92) , 0x444CL) != 0x6363L)))) || g_6[7][1][3]) | p_10) , p_13);
                    }
                    for (l_1076 = 0; (l_1076 <= 29); ++l_1076)
                    {
                        int *l_1083 = (void*)0;
                        (*l_1036) = (void*)0;

                        ;
                        (*g_943) = ((p_10 < (l_1083 != (void*)0)) && p_13);
                    }

                    ;
                    (*l_1039) = (((l_1091 >= p_13) || 1L) , 0L);
                    for (l_745 = 0; (l_745 >= 15); l_745++)
                    {
                        (*g_887) = ((((safe_add_func_uint32_t_u_u(g_625[2], (*l_936))) < (g_255 , (safe_rshift_func_int16_t_s_s((*l_1038), 1)))) || p_13) , &l_1103[1]);

                        ;
                    }


                }

                ;
                ;
                (*l_1093) = p_12;
            }

            ;
            ;
            for (l_967 = 0; (l_967 >= 46); l_967 = safe_add_func_int32_t_s_s(l_967, 6))
            {
                int *l_1116 = &l_826[5][2];
                for (g_462 = 0; (g_462 >= 29); g_462++)
                {
                    int l_1143 = 0L;
                    for (l_925 = (-15); (l_925 != 3); l_925 = safe_add_func_int32_t_s_s(l_925, 1))
                    {
                        l_1117 = l_1116;

                        ;
                        (*l_1038) = 9L;
                        (*g_943) = (~(safe_mul_func_uint16_t_u_u(0xD639L, g_625[2])));
                    }
                    (*l_1038) = (safe_sub_func_uint32_t_u_u(g_462, ((safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*l_989), (safe_mod_func_uint16_t_u_u(g_38, l_1143)))), 1L)), 0x1BCDC8A0L)), 10)), (*l_1093))), p_11)) != g_6[7][0][3]), (*l_1116))) , 9L) , p_13), 0xD7L)) | p_13)));
                    if (p_11)
                        break;
                    return p_10;




                }
            }

            ;
        }


        ;
        ;
        ;
        if (g_1144)
        {
            int **l_1145 = &l_1037[0][1][2];
            char l_1146 = (-3L);
            (*l_1044) = p_11;
            (*g_943) = ((void*)0 != l_1145);
            return l_1146;




        }
        else
        {
            int *l_1148 = &l_826[1][7];
            int l_1175 = 0x0B851EFAL;
            unsigned l_1191[6][1][2] = {{{4294967289UL, 3UL}}, {{4294967289UL, 3UL}}, {{4294967289UL, 3UL}}, {{4294967289UL, 3UL}}, {{4294967289UL, 3UL}}, {{4294967289UL, 3UL}}};
            int i, j, k;
            if ((9L > g_47))
            {
                int l_1147 = 0xF635F6E0L;
                int l_1150 = 0x0141B78DL;
                l_1150 = (l_1147 ^ ((p_12 | l_1147) || (*l_1148)));
            }
            else
            {
                int *l_1155 = &g_6[2][2][6];
                l_1148 = l_1148;
                for (g_1144 = (-3); (g_1144 != 58); ++g_1144)
                {
                    char l_1174 = 0x57L;
                    const short l_1192 = 0xF18EL;
                    const int *l_1194[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1194[i] = &l_826[1][3];
                    (*l_981) = l_1148;
                    for (l_834 = 0; (l_834 == 36); l_834 = safe_add_func_int8_t_s_s(l_834, 3))
                    {
                        return p_12;





                    }
                    if ((safe_add_func_uint8_t_u_u((g_255 != g_625[4]), (*l_1148))))
                    {
                        const unsigned l_1190 = 1UL;
                        (*l_1044) = (safe_rshift_func_uint16_t_u_s(((g_220 , (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((p_13 > (safe_mod_func_int16_t_s_s((+g_1144), g_220))), l_1191[4][0][0])), l_1192))) & 0x1EDB3AFAL), 11));
                    }
                    else
                    {
                        short l_1195[8] = {0x1408L, 1L, 0x1408L, 1L, 0x1408L, 1L, 0x1408L, 1L};
                        int i;
                        (*g_286) = ((void*)0 != &g_97[2][0][0]);
                        l_1194[0] = l_1193;
                        if (l_1195[4])
                            break;
                    }
                    (*l_1036) = &l_1092;

                    ;
                }


                ;
                (*l_981) = l_1155;
            }


            ;
            (*l_1038) = (*l_1148);
        }


        ;
        for (l_1090 = 0; (l_1090 != 45); l_1090 = safe_add_func_uint32_t_u_u(l_1090, 8))
        {
            unsigned l_1202 = 0x2DB269B2L;
            unsigned l_1207 = 0xAA52100EL;
            int *l_1210 = (void*)0;
            if ((safe_add_func_int32_t_s_s(((g_255 <= p_10) , (((safe_add_func_uint8_t_u_u(g_220, l_1202)) || (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_1207, (l_1202 ^ ((safe_sub_func_uint32_t_u_u(l_1202, p_13)) || ((p_12 >= p_13) >= 0xD57FL))))), 2))) , (*g_943))), g_1144)))
            {
                const int *l_1216[7] = {&g_6[4][1][2], &g_6[7][3][1], &g_6[4][1][2], &g_6[7][3][1], &g_6[4][1][2], &g_6[7][3][1], &g_6[4][1][2]};
                int *l_1217 = &l_826[3][2];
                int i;
                (*g_943) = (g_92 && ((((safe_sub_func_int8_t_s_s(g_255, p_13)) == (!6UL)) , ((l_1213 && (func_56(g_38, ((0L && (p_12 == ((((safe_add_func_uint16_t_u_u((4UL < (-1L)), (*l_936))) , l_1216[2]) != l_1210) > g_625[2]))) , l_1210), l_1217, p_13) , (*l_803))) != p_11)) , g_1144));
            }
            else
            {
                int *l_1225 = &l_826[5][0];
                for (p_11 = 0; (p_11 <= 34); p_11 = safe_add_func_uint16_t_u_u(p_11, 2))
                {
                    unsigned char l_1223 = 0x25L;
                    int l_1229 = 0xA319EBD9L;
                    for (l_1213 = (-25); (l_1213 < 51); ++l_1213)
                    {
                        int ***l_1222 = (void*)0;
                        (*g_943) = (l_1222 == (void*)0);
                        if (l_1223)
                            continue;
                        if (p_11)
                            break;
                    }
                    if ((((l_1224[3] == l_1225) || g_255) && (-1L)))
                    {
                        unsigned l_1226 = 0x371DDB44L;
                        (*l_803) = (((l_1226 || p_11) != p_10) != l_1226);
                        if (p_10)
                            continue;
                        if ((*g_943))
                            break;
                    }
                    else
                    {
                        l_1229 = (safe_rshift_func_uint8_t_u_u((p_10 , p_11), 4));
                    }
                }
                (*g_943) = (*g_286);
            }
            for (p_13 = (-29); (p_13 > (-6)); ++p_13)
            {
                for (l_1041 = 0; (l_1041 == 23); l_1041 = safe_add_func_uint16_t_u_u(l_1041, 6))
                {
                    return p_12;





                }
                (*l_981) = func_61(p_11);
                for (l_1207 = 0; (l_1207 <= 23); l_1207++)
                {
                    (*l_803) = p_10;
                    for (g_1051 = 0; (g_1051 != 1); g_1051 = safe_add_func_int8_t_s_s(g_1051, 9))
                    {
                        (*l_981) = (void*)0;
                    }
                }
            }
            for (l_1207 = 2; (l_1207 <= 6); l_1207 += 1)
            {
                int i;
                (*g_887) = &l_1210;

                ;
                (**g_887) = l_1210;
                return l_935[l_1207];





            }
        }
    }
    else
    {
        int l_1238 = 6L;
        int *l_1243 = &g_6[1][0][5];
        int l_1277 = 0L;
        int ***l_1330 = &l_981;
        const unsigned l_1335 = 4294967295UL;
        unsigned l_1359[4] = {1UL, 0x41A892F8L, 1UL, 0x41A892F8L};
        int *l_1366 = &g_6[7][0][2];
        int i;
        (*l_981) = (((4294967295UL == (-1L)) != l_1238) , ((g_220 , (g_6[3][0][4] , g_625[2])) , (void*)0));
        for (g_462 = 3; (g_462 >= 0); g_462 -= 1)
        {
            char l_1248 = 0x58L;
            int *l_1263 = &g_6[7][3][1];
            int * const *l_1274[6];
            int * const **l_1273 = &l_1274[0];
            int *l_1296 = &g_47;
            unsigned short l_1301 = 0x8F92L;
            int *l_1311 = &g_6[7][3][1];
            const int l_1325 = (-7L);
            int i;
            for (i = 0; i < 6; i++)
                l_1274[i] = &g_97[2][4][5];
            (*l_1243) = ((safe_mod_func_uint32_t_u_u(g_47, (safe_lshift_func_int16_t_s_u(p_10, 6)))) , (*g_286));
            if (l_1248)
                break;
            (*g_286) = (*l_1243);
            for (g_381 = 3; (g_381 >= 0); g_381 -= 1)
            {
                int *l_1257[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1257[i] = &g_6[7][3][1];
                for (g_47 = 3; (g_47 >= 0); g_47 -= 1)
                {
                    int i, j, k;
                    if (func_56((g_6[(g_47 + 1)][g_462][(g_381 + 2)] & (func_56(g_255, l_1243, &g_6[(g_47 + 1)][g_462][(g_381 + 2)], (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_10, (safe_lshift_func_int8_t_s_s(func_56(g_6[(g_47 + 1)][g_462][(g_381 + 2)], l_1243, &g_6[3][3][5], (safe_rshift_func_int8_t_s_s(p_13, p_10))), p_11)))), 0x54EDBDFFL))) > p_11)), l_1257[2], l_1243, p_11))
                    {
                        if (l_1248)
                            break;
                    }
                    else
                    {
                        if (l_1248)
                            break;
                        return p_10;



                    }
                    (*g_887) = &l_1044;

                    ;
                    for (g_1144 = 0; (g_1144 <= 3); g_1144 += 1)
                    {
                        int i, j, k;
                        (*l_735) = (**g_887);
                        g_6[(g_381 + 3)][g_381][(g_47 + 2)] = ((safe_rshift_func_int16_t_s_u(0x1B40L, 10)) != 6L);
                        (*g_96) = (p_10 , (*g_96));
                    }
                }
                for (l_1248 = 0; (l_1248 <= 2); l_1248 += 1)
                {
                    const int **l_1261 = (void*)0;
                    const int ***l_1260 = &l_1261;
                    int *l_1262 = &g_47;
                    int i, j, k;
                    (*l_1260) = &g_344[0][5];

                    ;
                    g_6[g_381][(l_1248 + 1)][(l_1248 + 2)] = (*l_1243);
                }
            }
            for (l_1080 = 0; (l_1080 <= 2); l_1080 += 1)
            {
                unsigned l_1264 = 1UL;
                int *l_1269 = &g_47;
                for (g_1144 = 0; (g_1144 <= 2); g_1144 += 1)
                {
                    int i, j, k;
                    g_6[(g_1144 + 4)][g_462][(l_1080 + 3)] = (&g_6[(l_1080 + 4)][(g_1144 + 1)][l_1080] == (p_12 , &g_6[(l_1080 + 4)][(g_1144 + 1)][l_1080]));
                    return (*l_1263);



                }
                (*l_735) = l_1243;
                (*l_1243) = (+(safe_add_func_int32_t_s_s((*l_1243), p_13)));
                l_1277 = (*l_1243);
                for (p_12 = 0; (p_12 <= 2); p_12 += 1)
                {
                    int *l_1279[7] = {&l_826[1][3], &g_6[7][3][1], &l_826[1][3], &g_6[7][3][1], &l_826[1][3], &g_6[7][3][1], &l_826[1][3]};
                    int ***l_1282 = &l_735;
                    char l_1312[3];
                    int *l_1313 = &l_1277;
                    short l_1320 = 0x9909L;
                    unsigned l_1332[4][8] = {{0x7AC79092L, 0x9B72C615L, 0x568F7E71L, 4294967288UL, 0x9B72C615L, 0UL, 0x9B72C615L, 4294967288UL}, {0x7AC79092L, 0x9B72C615L, 0x568F7E71L, 4294967288UL, 0x9B72C615L, 0UL, 0x9B72C615L, 4294967288UL}, {0x7AC79092L, 0x9B72C615L, 0x568F7E71L, 4294967288UL, 0x9B72C615L, 0UL, 0x9B72C615L, 4294967288UL}, {0x7AC79092L, 0x9B72C615L, 0x568F7E71L, 4294967288UL, 0x9B72C615L, 0UL, 0x9B72C615L, 4294967288UL}};
                    unsigned char l_1340 = 0x03L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1312[i] = 3L;
                    if ((*l_942))
                    {
                        short l_1278 = (-1L);
                        int **l_1287[6][4][1] = {{{&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}}, {{&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}}, {{&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}}, {{&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}}, {{&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}}, {{&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}, {&l_1037[7][1][5]}}};
                        int **l_1288 = &l_1243;
                        int i, j, k;
                        g_97[p_12][(g_462 + 2)][(p_12 + 2)] = (l_1278 , ((p_11 , p_11) , (p_10 , l_1279[3])));
                        (*l_1092) = (((p_11 , (g_1051 > (p_12 , 0xBAECC966L))) , (*l_1263)) < g_38);
                        (*l_981) = func_61((safe_add_func_int32_t_s_s(p_13, (*g_286))));
                        (*l_1288) = g_1286;

                        ;
                    }
                    else
                    {
                        int l_1293 = 0L;
                        (*g_286) = (p_12 , p_11);
                        (*l_735) = func_61((safe_add_func_int8_t_s_s(((+(!(safe_mod_func_int32_t_s_s((-3L), l_1293)))) , 0x51L), (g_92 == (safe_add_func_int16_t_s_s((*l_1269), g_1283))))));
                    }
                    if ((p_11 , (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((g_462 == g_1051) > ((safe_rshift_func_uint8_t_u_u(g_38, (safe_unary_minus_func_int8_t_s((l_1312[2] == (*l_1243)))))) != p_12)) , 0xBD4BL), 9)), 0x946CL))))
                    {
                        int **l_1321[9][9][3] = {{{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}, {{&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}, {&l_1313, &g_97[2][3][2], (void*)0}}};
                        int i, j, k;
                        (**l_1282) = (void*)0;
                        (*l_735) = l_1313;
                        (*l_1044) = ((safe_mod_func_int16_t_s_s(g_220, (*l_803))) , (0x55L && ((((*l_803) == ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((l_1320 > ((((l_1321[5][3][0] != ((((safe_rshift_func_uint16_t_u_s((&g_6[1][1][4] == &l_1277), 12)) & ((func_56((((g_92 > (*l_1243)) && 0xD1L) & g_625[5]), &g_47, &l_1277, (*l_1269)) | l_1324) , l_1325)) > g_381) , &g_1286)) , &l_1269) != &l_1269) > 0x4303L)), g_625[2])) == p_12), p_10)) , p_11)) < 0x3F89L) , 0x12L)));
                    }
                    else
                    {
                        char l_1331 = (-1L);
                        const int *l_1333 = &g_6[2][0][0];
                        const int **l_1334 = &g_344[0][4];
                        (*l_981) = func_61(((*l_1282) != (*l_1273)));
                        (*l_1334) = l_1333;
                    }
                    if (l_1335)
                        continue;
                    (*l_1092) = (safe_mod_func_uint8_t_u_u(((-5L) & g_625[2]), ((((((safe_lshift_func_uint8_t_u_u((l_1340 <= ((g_625[2] , p_11) , p_11)), 7)) < ((((((safe_sub_func_int16_t_s_s(p_11, ((safe_add_func_int16_t_s_s(((*l_1243) , (*l_1313)), 5UL)) && g_631))) || p_11) , (void*)0) == (void*)0) ^ 0UL) , (*l_1269))) , l_1282) == &g_96) , p_12) , 254UL)));
                }
            }
        }



        ;
        (*g_1286) = ((safe_mod_func_uint16_t_u_u(((p_10 >= (safe_add_func_uint16_t_u_u((p_12 >= g_6[5][1][3]), p_11))) | p_10), g_625[3])) | g_625[2]);
        if (((((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(0x1BL, ((((*l_1243) || (((g_625[4] , (safe_lshift_func_uint8_t_u_u(((g_631 ^ p_10) == 0xF7D6DC85L), 1))) , 0xD0L) , 0x331BL)) & p_12) ^ g_38))) != (*l_1243)), 1)) || g_631) && (*l_1092)) & l_1373))
        {
            unsigned char l_1374 = 0x9FL;
            int *l_1377 = &l_1372[1];
            (*l_1243) = ((g_220 <= g_6[5][1][3]) > (((l_1374 , 65530UL) <= ((safe_add_func_uint16_t_u_u(func_56(g_625[2], l_1377, l_1377, p_12), g_1283)) , (*l_1243))) >= g_6[7][3][1]));
            (*l_981) = l_1377;


        }
        else
        {
            int * const *l_1378 = &l_1037[6][1][0];
            l_1379 = ((void*)0 == l_1378);
        }


    }




    ;
    ;
    ;
    return p_11;





}







static const unsigned func_14(int p_15, const short p_16, unsigned char p_17, unsigned short p_18)
{
    unsigned short l_726[8] = {1UL, 1UL, 65535UL, 1UL, 1UL, 65535UL, 1UL, 1UL};
    int *l_727 = &g_6[0][3][6];
    int **l_732 = &g_97[2][1][2];
    int i;
    (*l_732) = func_48((p_15 , g_6[7][3][1]), ((safe_lshift_func_int16_t_s_s(p_15, 12)) ^ ((!func_39(((g_47 , g_47) , l_726[1]), l_727, (*g_96), ((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(0xEE2AL, p_18)) , 3UL), 6)) , 6L))) >= (*g_286))), l_727);



    (*l_732) = l_727;
    return (*l_727);
}







static unsigned char func_28(const unsigned p_29, unsigned p_30, int p_31)
{
    char l_36 = 1L;
    int l_721 = 0L;
    int *l_722 = (void*)0;
    int *l_723 = &g_47;
    for (p_31 = 0; (p_31 <= 0); p_31 = safe_add_func_uint8_t_u_u(p_31, 1))
    {
        int *l_720 = (void*)0;
        for (p_30 = 0; (p_30 >= 15); p_30 = safe_add_func_int32_t_s_s(p_30, 8))
        {
            int *l_37[9] = {&g_6[5][0][2], (void*)0, &g_6[5][0][2], (void*)0, &g_6[5][0][2], (void*)0, &g_6[5][0][2], (void*)0, &g_6[5][0][2]};
            int i;
            g_38 = l_36;
            l_721 = (func_39(l_36, &g_6[7][3][1], &g_6[7][3][1], (p_29 , g_6[5][3][4])) , (safe_mod_func_uint16_t_u_u(p_31, g_38)));
            (*g_96) = l_720;
        }
    }
    (*l_723) = p_31;
    (*l_723) = 0L;
    return g_6[7][3][1];
}







static const int func_39(int p_40, int * p_41, int * p_42, char p_43)
{
    int *l_55 = &g_47;
    int ***l_653[8][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
    char l_656 = 0xC1L;
    unsigned short l_666 = 1UL;
    int l_714 = 0xD53A441AL;
    int *l_717 = &g_47;
    int i, j;
    for (p_43 = 0; (p_43 != 10); p_43 = safe_add_func_int16_t_s_s(p_43, 3))
    {
        int *l_46 = &g_47;
        int l_260 = 0xECF892ACL;
        int **l_636 = &l_55;
        int *l_637 = &g_47;
        unsigned l_716 = 0x056A9908L;
        (*l_46) = (0xE8D55003L || g_38);
    }
    (*g_96) = l_717;
    return p_43;
}







static int * func_48(short p_49, unsigned short p_50, int * p_51)
{
    int *l_265 = (void*)0;
    int ***l_291 = (void*)0;
    int l_295 = 0xF994BD5DL;
    int l_300 = 0x0535F0EFL;
    char l_306 = 1L;
    int *l_365 = &l_300;
    int l_398 = 0x279E3E11L;
    int l_402[5][9][5] = {{{0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}}, {{0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}}, {{0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}}, {{0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}}, {{0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}, {0x55E468F2L, 0xA6E33E4AL, 0L, 0L, (-1L)}}};
    unsigned l_425 = 4294967294UL;
    unsigned char l_461 = 0UL;
    unsigned short l_486 = 1UL;
    int l_532[5];
    short l_585 = 0x3B30L;
    unsigned l_611[5] = {0x3CC80852L, 0UL, 0x3CC80852L, 0UL, 0x3CC80852L};
    int l_618 = (-1L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_532[i] = 0xEC4FB41EL;
    if ((*p_51))
    {
        int l_268 = 0x0C32814FL;
        int *l_282 = (void*)0;
        for (g_47 = 0; (g_47 > (-17)); g_47 = safe_sub_func_uint16_t_u_u(g_47, 4))
        {
            short l_280 = 1L;
            for (p_50 = 0; (p_50 < 2); p_50 = safe_add_func_uint8_t_u_u(p_50, 2))
            {
                return l_265;



            }
            for (g_38 = (-10); (g_38 > (-29)); g_38 = safe_sub_func_int32_t_s_s(g_38, 7))
            {
                if (l_268)
                    break;
            }
            for (p_50 = 0; (p_50 != 12); ++p_50)
            {
                unsigned l_275 = 0UL;
                int *l_281 = &g_6[1][2][3];
                if ((func_56((func_56(func_56((safe_mul_func_uint16_t_u_u((p_49 , (safe_mod_func_int16_t_s_s(l_275, ((safe_mod_func_int32_t_s_s(0xA272F2B7L, l_280)) & ((func_56(g_6[7][3][1], l_281, (*g_96), g_6[7][3][1]) > 0x57AFE2B7L) < l_268))))), g_6[7][3][1])), l_282, (*g_96), p_49), l_281, l_265, g_255) , 0x56L), p_51, &l_268, p_50) , (*p_51)))
                {
                    unsigned l_285 = 4294967295UL;
                    int *l_288 = &l_268;
                    if ((*p_51))
                    {
                        int *l_283 = &g_47;
                        int *l_284[8][5] = {{&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}, {&g_47, &g_47, &g_47, &l_268, &g_47}};
                        int i, j;
                        l_285 = ((func_56(g_220, p_51, l_283, p_49) == g_6[7][3][1]) >= 255UL);
                        if (l_280)
                            continue;
                        (*g_96) = g_286;
                    }
                    else
                    {
                        int *l_287 = &g_6[6][3][1];
                        (*l_288) = ((l_280 , 1UL) > ((l_285 | (0x08L != (g_255 | g_6[3][2][0]))) >= (l_287 != l_288)));
                        if ((*p_51))
                            break;
                    }
                    (*g_96) = p_51;
                }
                else
                {
                    int ***l_289[5][6][2] = {{{&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}}, {{&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}}, {{&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}}, {{&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}}, {{&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}, {&g_96, &g_96}}};
                    int i, j, k;
                    (*g_96) = p_51;
                    g_96 = &p_51;

                    ;
                    (*g_96) = (*g_96);
                }
                if ((*p_51))
                    continue;
                (*g_96) = p_51;
            }
        }

        ;
        return p_51;



    }
    else
    {
        int l_290 = 0x40CACAE9L;
        int ***l_294 = &g_96;
        char l_316 = (-3L);
        int ***l_357 = (void*)0;
        const int * const *l_409 = &g_344[0][2];
        unsigned l_418 = 4294967295UL;
        unsigned l_431 = 0x6BABBA2CL;
        unsigned l_442[1];
        int i;
        for (i = 0; i < 1; i++)
            l_442[i] = 0xB6165750L;
        (*g_96) = (*g_96);
        (*g_96) = func_61(l_290);
        if ((g_92 || (*g_286)))
        {
            for (l_290 = 0; (l_290 <= 2); l_290 += 1)
            {
                int l_301 = (-1L);
                int *l_302[9][5][1] = {{{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}, {{&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}, {&g_6[7][3][1]}}};
                int i, j, k;
                if (l_290)
                    break;
                for (p_49 = 0; (p_49 <= 2); p_49 += 1)
                {
                    unsigned char l_307 = 0x2BL;
                    if ((l_291 != ((func_56(g_38, func_61((g_38 , (&g_286 != (void*)0))), p_51, (safe_lshift_func_uint8_t_u_u((0UL & 0xB982EFF8L), p_50))) == l_290) , l_294)))
                    {
                        if ((*g_286))
                            break;
                        l_295 = (*p_51);
                        if (l_290)
                            continue;
                    }
                    else
                    {
                        int l_305 = 0L;
                        l_295 = (((((safe_rshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((+l_300), g_220)) | l_301), ((func_56(g_38, l_302[1][4][0], func_61((safe_mul_func_int16_t_s_s(g_6[3][1][3], g_47))), p_49) || l_305) & 0xAAL))) <= l_306) < p_50) & 1UL) == g_6[3][3][4]);
                        if (l_305)
                            continue;
                        if (l_307)
                            continue;
                        return p_51;


                    }
                    if ((*g_286))
                        continue;
                    (**l_294) = (*g_96);
                    for (g_47 = 0; (g_47 <= 2); g_47 += 1)
                    {
                        int i, j, k;
                        g_97[l_290][(g_47 + 6)][l_290] = g_97[p_49][(l_290 + 1)][l_290];
                    }
                }
                for (p_50 = 0; (p_50 <= 2); p_50 += 1)
                {
                    (*g_96) = (*g_96);
                    for (l_300 = 2; (l_300 >= 0); l_300 -= 1)
                    {
                        int i, j, k;
                        (**l_294) = (void*)0;
                        return g_97[l_290][(p_50 + 2)][(l_290 + 4)];


                    }
                    for (g_38 = 2; (g_38 >= 0); g_38 -= 1)
                    {
                        int i, j, k;
                        (**l_294) = g_97[p_50][g_38][(l_290 + 1)];
                        l_302[1][4][0] = (*g_96);


                        return p_51;


                    }
                }
            }
        }
        else
        {
            int l_324[4][7][9] = {{{(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}}, {{(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}}, {{(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}}, {{(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}, {(-1L), 0xF9C56E4CL, 0x4E49107BL, 0xC5D278B5L, 1L, 0L, 0x2E03E5B3L, 0xA9890DADL, 3L}}};
            int l_354[2];
            int *l_366 = (void*)0;
            unsigned short l_376 = 5UL;
            int *l_396 = &l_295;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_354[i] = 0xDD438CA1L;
            if ((p_50 & (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((4294967295UL && ((p_51 != (void*)0) || 0x8CL)), 2)), (0xC1D7L > g_47)))))
            {
                const unsigned short l_323 = 2UL;
                if (l_324[2][0][3])
                {
                    return (*g_96);


                }
                else
                {
                    unsigned char l_340 = 0UL;
                    int *l_341 = &g_47;
                    (*l_341) = (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((0x3CL || 1L) , (safe_sub_func_uint8_t_u_u((g_92 < ((l_323 > (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_49, 6)), (safe_sub_func_int8_t_s_s((((*p_51) ^ (p_50 == (safe_unary_minus_func_uint32_t_u(((func_56((((safe_rshift_func_uint8_t_u_u((4294967293UL == (p_50 , 0x3BAA376DL)), g_6[7][3][1])) != 0x0530D646L) | (-9L)), (*g_96), (*g_96), g_38) <= p_49) , g_6[6][3][1]))))) || l_323), p_50))))) != g_6[6][1][4])), 0x98L))) == l_340), g_47)) | g_47), p_50));
                }
            }
            else
            {
                short l_347 = (-1L);
                int *l_367 = &l_300;
                (**l_294) = (*g_96);
                for (l_316 = 3; (l_316 >= 0); l_316 -= 1)
                {
                    const int * const l_342 = &g_6[7][3][1];
                    const int **l_343 = (void*)0;
                    int * const *l_359 = &g_97[2][4][5];
                    int * const **l_358 = &l_359;
                    int *l_360 = &g_47;
                    g_344[0][8] = l_342;
                }
            }
            for (l_376 = (-18); (l_376 <= 18); l_376 = safe_add_func_uint16_t_u_u(l_376, 4))
            {
                short l_389 = 0x9E49L;
                int ***l_390 = (void*)0;
                int *l_399 = &l_354[0];
                for (p_49 = (-15); (p_49 <= (-29)); --p_49)
                {
                    int l_391 = 0xA9901845L;
                    int ***l_394 = (void*)0;
                    if (l_389)
                    {
                        l_391 = (l_390 != (void*)0);
                        if ((*p_51))
                            continue;
                        (*l_294) = (((((p_50 ^ (((0xCA7786C9L | (safe_sub_func_int32_t_s_s(func_56(g_6[4][1][0], p_51, ((+func_56((p_50 > (((l_391 , l_391) >= ((func_56(g_381, p_51, (*g_96), p_49) == p_50) == 0xE6D1L)) == 3UL)), (*g_96), (*g_96), p_49)) , (*g_96)), p_50), g_6[7][3][1]))) , l_394) != &g_96)) | 0xA7L) != g_92) <= (-10L)) , &g_286);

                        ;
                    }
                    else
                    {
                        unsigned l_395 = 0xCE6CB70DL;
                        (*g_96) = func_61(((p_50 < l_395) , ((&g_344[0][8] == &p_51) , func_56((func_52(l_396, (safe_unary_minus_func_uint16_t_u((l_398 | (l_389 | func_56(g_38, (*g_96), p_51, g_6[7][3][1])))))) , p_49), l_399, p_51, g_6[3][3][4]))));


                        (*l_399) = (p_49 >= ((safe_rshift_func_int16_t_s_u(g_381, (((((p_49 , p_51) == (l_391 , func_61(g_6[5][3][2]))) >= 0xE3L) && 0x3CL) , 0x9D69L))) , p_49));
                    }


                    ;
                    return p_51;



                }
                (*l_399) = ((((p_51 != (void*)0) >= (l_402[2][8][1] , (0x28L != ((&g_96 != l_291) <= p_50)))) , l_291) == ((safe_add_func_uint16_t_u_u(g_220, p_50)) , &g_96));
            }
            (*l_396) = (safe_rshift_func_int16_t_s_u(((((*g_96) != ((g_6[7][3][1] <= (((safe_lshift_func_uint16_t_u_s((&g_286 == l_409), 7)) < 0x34E69548L) != (safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_6[7][3][1], (g_6[7][3][1] != ((((safe_mul_func_uint8_t_u_u(g_381, p_49)) != (*p_51)) , 0xDFL) || 0xB3L)))), g_381)))))) , (void*)0)) <= g_255) && p_50), 1));
            (*l_365) = (*p_51);
        }
        if ((*p_51))
        {
            int *l_430 = (void*)0;
            for (l_398 = 0; (l_398 >= (-16)); l_398--)
            {
                char l_424[4][4] = {{(-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L}};
                int i, j;
                (*l_365) = (*p_51);
                for (g_47 = 0; (g_47 >= 12); g_47++)
                {
                    unsigned l_423 = 0xAECCED3FL;
                    for (p_49 = 0; (p_49 <= 0); p_49 += 1)
                    {
                        if (l_423)
                            break;
                        l_424[2][2] = 4L;
                    }
                    (*g_96) = p_51;
                    if (l_425)
                        continue;
                }
            }
            p_51 = func_61(((*l_365) <= (func_56((safe_sub_func_uint16_t_u_u(((g_6[7][3][1] != g_38) , g_220), 0x75B7L)), l_430, (**l_294), p_49) & 0x7052L)));
        }
        else
        {
            unsigned char l_432 = 0x6DL;
            int **l_437 = &g_97[0][7][0];
            (*g_96) = ((l_431 && ((void*)0 == &g_286)) , (*g_96));
            if ((*p_51))
            {
                (*l_365) = (l_432 && ((safe_rshift_func_uint16_t_u_u((p_50 <= (p_49 != ((safe_add_func_uint16_t_u_u(65531UL, l_432)) , (((((0xF3L > p_50) , l_437) == (((((safe_rshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s(l_442[0], 0xFEACL)) ^ 4294967288UL) && 0x2D8EL), 6)) , 0x7A92L) , (-8L)) , g_92) , (void*)0)) <= g_47) < (-1L))))), g_38)) == 0x3BL));
            }
            else
            {
                for (l_290 = 6; (l_290 > 26); ++l_290)
                {
                    return p_51;


                }
            }
            for (l_432 = 0; (l_432 < 15); l_432 = safe_add_func_int32_t_s_s(l_432, 7))
            {
                unsigned l_447 = 7UL;
                l_447 = (-6L);
            }
            if ((safe_lshift_func_int16_t_s_s(p_49, g_6[0][2][4])))
            {
                int l_460 = 0xA7E8DAC9L;
                (**l_294) = func_61((p_50 , (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_51 == (void*)0), (safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s((((p_49 | (l_460 > ((l_461 ^ ((g_462 <= p_50) < g_6[4][2][2])) <= 0x38L))) <= p_49) <= g_47), 0x4EL)) , g_381), 0)))), 0x59E3L))));
                (*l_365) = func_56(g_6[7][3][1], ((g_462 , ((safe_lshift_func_uint8_t_u_u(p_49, 5)) , p_50)) , (*g_96)), (*g_96), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_47, 4)), 1UL)));
            }
            else
            {
                (*l_365) = (*p_51);
            }
        }
    }
    for (l_300 = 0; (l_300 != (-19)); l_300--)
    {
        int l_475 = (-5L);
        int l_489 = 1L;
        int ***l_531 = &g_96;
        char l_612 = 0x70L;
        int *l_632[4] = {&l_295, &g_47, &l_295, &g_47};
        int i;
    }
    return (*g_96);


}







static int func_52(int * p_53, const int p_54)
{
    int l_256 = 0x27199927L;
    int ***l_257[4] = {&g_96, &g_96, &g_96, &g_96};
    int *l_258 = &g_6[7][3][1];
    const unsigned char l_259[1] = {255UL};
    int i;
    (*g_96) = (((g_255 >= l_256) >= (func_56((l_257[3] == (p_54 , (void*)0)), func_61(p_54), l_258, (1L > (*l_258))) && l_259[0])) , (*g_96));
    (*p_53) = ((*p_53) & (((void*)0 != (*g_96)) == (4UL >= (*l_258))));
    (*p_53) = (+(*p_53));
    (*g_96) = p_53;


    return g_6[7][3][1];
}







static int func_56(unsigned char p_57, int * p_58, int * p_59, unsigned char p_60)
{
    int *l_73 = &g_6[7][3][1];
    int **l_72 = &l_73;
    int l_87 = 0xB4649573L;
    int l_110 = 0L;
    const int l_174 = 1L;
    unsigned l_188 = 6UL;
    for (g_38 = 0; (g_38 > (-20)); --g_38)
    {
        unsigned l_82 = 0x2529581CL;
        int l_95 = 0xA102B466L;
        int *l_223 = (void*)0;
        unsigned l_249[3][9][1] = {{{0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}}, {{0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}}, {{0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}, {0x26879413L}}};
        int i, j, k;
    }
    return p_57;
}







static int * func_61(unsigned char p_62)
{
    int *l_63 = (void*)0;
    int **l_64 = &l_63;
    (*l_64) = l_63;
    g_47 = g_6[4][1][2];
    return &g_6[5][0][0];


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_625[i], "g_625[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1283, "g_1283", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
