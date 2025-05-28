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



static int g_2 = 0xC68EC0AEL;
static int g_29 = 1L;
static unsigned short g_43[9][3] = {{0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}, {0x68FCL, 0x68FCL, 0x2499L}};
static unsigned g_45[10][8][3] = {{{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}, {{0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}, {0x7F45B6D4L, 0UL, 4294967291UL}}};
static short g_56[9][2][5] = {{{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}, {{(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}, {(-1L), 0x38D7L, 0x1140L, 0x969FL, 0x07F7L}}};
static unsigned short g_70 = 0UL;
static int g_78 = 0L;
static int * const volatile g_77[6][4][2] = {{{&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}}, {{&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}}, {{&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}}, {{&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}}, {{&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}}, {{&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}, {&g_78, &g_78}}};
static short g_99[6] = {0xBFD3L, 0xCC30L, 0xBFD3L, 0xCC30L, 0xBFD3L, 0xCC30L};
static volatile int g_102 = 0x341928B5L;
static volatile int g_103 = (-1L);
static int g_104 = 0xD8DA357BL;
static unsigned *g_113[6] = {&g_45[9][1][0], &g_45[9][1][0], &g_45[8][1][0], &g_45[9][1][0], &g_45[9][1][0], &g_45[8][1][0]};
static unsigned **g_112 = &g_113[3];
static unsigned *** volatile g_111[7] = {&g_112, &g_112, &g_112, &g_112, &g_112, &g_112, &g_112};
static unsigned short g_149 = 0x87EAL;
static unsigned short *g_151 = &g_149;
static unsigned short * const *g_150[1] = {&g_151};
static const int *g_170 = &g_78;
static const int ** volatile g_169 = &g_170;
static int *g_172 = &g_78;
static int ** volatile g_171 = &g_172;
static unsigned short *g_203 = &g_149;
static int g_229 = (-1L);
static int * volatile g_228 = &g_229;
static unsigned short g_230[3][2][9] = {{{0x0127L, 0x4AD8L, 0x4AD8L, 0x0127L, 0x57C1L, 0xAEF2L, 0x8790L, 0x18A8L, 2UL}, {0x0127L, 0x4AD8L, 0x4AD8L, 0x0127L, 0x57C1L, 0xAEF2L, 0x8790L, 0x18A8L, 2UL}}, {{0x0127L, 0x4AD8L, 0x4AD8L, 0x0127L, 0x57C1L, 0xAEF2L, 0x8790L, 0x18A8L, 2UL}, {0x0127L, 0x4AD8L, 0x4AD8L, 0x0127L, 0x57C1L, 0xAEF2L, 0x8790L, 0x18A8L, 2UL}}, {{0x0127L, 0x4AD8L, 0x4AD8L, 0x0127L, 0x57C1L, 0xAEF2L, 0x8790L, 0x18A8L, 2UL}, {0x0127L, 0x4AD8L, 0x4AD8L, 0x0127L, 0x57C1L, 0xAEF2L, 0x8790L, 0x18A8L, 2UL}}};
static const int ** volatile g_248 = (void*)0;
static const int ** volatile g_249 = &g_170;
static const unsigned short * const g_278[8] = {&g_149, &g_149, &g_149, &g_149, &g_149, &g_149, &g_149, &g_149};
static short **g_298 = (void*)0;
static int * volatile g_300 = &g_229;
static unsigned g_312[3][6][10] = {{{0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}}, {{0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}}, {{0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}, {0xE412EDE8L, 0x5E050D9FL, 7UL, 0UL, 1UL, 0x1BFA4B67L, 0x4FC341C2L, 1UL, 6UL, 8UL}}};
static int * volatile g_313 = &g_104;
static unsigned char g_320[9] = {0x06L, 0x06L, 9UL, 0x06L, 0x06L, 9UL, 0x06L, 0x06L, 9UL};
static unsigned char g_322 = 0x6DL;
static char g_353 = 0x57L;
static char g_355[8] = {0x8EL, 0x8EL, 2L, 0x8EL, 0x8EL, 2L, 0x8EL, 0x8EL};
static int *g_357 = (void*)0;
static int ** volatile g_356 = &g_357;
static int ** volatile g_367[4][4] = {{&g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357}, {&g_357, &g_357, &g_357, &g_357}};
static int * volatile g_375 = &g_78;
static int * volatile g_388 = (void*)0;
static int * volatile g_394 = (void*)0;
static int * volatile g_395 = &g_229;
static int ** volatile g_399 = &g_357;
static int ** volatile g_446 = &g_357;
static int * volatile g_449 = &g_229;
static int * volatile g_453 = &g_104;
static const unsigned char *g_463 = (void*)0;
static const unsigned char **g_462 = &g_463;
static unsigned short *g_474 = &g_70;
static int g_485 = 0x6309D587L;
static int * volatile g_527 = &g_104;
static unsigned char *g_556 = (void*)0;
static unsigned *** volatile g_595 = &g_112;
static unsigned g_606[9][9] = {{4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 0x3D5C9EDFL, 0x418E9C63L, 0xC72C9DC6L, 0x418E9C63L, 0x3D5C9EDFL, 0UL, 4294967294UL}};
static int *g_622 = &g_485;
static int **g_621 = &g_622;
static unsigned * volatile g_647 = &g_606[5][4];
static unsigned * volatile *g_646 = &g_647;
static const int ** volatile g_674[5][1] = {{&g_170}, {&g_170}, {&g_170}, {&g_170}, {&g_170}};
static volatile int g_695 = 0x28C47F75L;
static volatile int *g_694[2] = {&g_695, &g_695};
static short g_740 = 0x92C4L;
static short g_741 = 0x5D5CL;
static short g_742 = 0x2DEFL;
static short g_743 = 0xBAC6L;
static short g_744 = (-6L);
static short g_745 = 0x8979L;
static short g_746 = (-3L);
static int g_759 = (-7L);
static const int g_764 = 0x8003915EL;
static int ** volatile g_777 = (void*)0;
static const int ** volatile g_787 = (void*)0;
static int ** volatile g_798[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static int ** volatile g_799 = &g_357;
static int ** volatile g_866 = &g_357;
static short ***g_906 = &g_298;
static const unsigned char * const volatile *g_922 = &g_463;
static const unsigned char * const volatile * volatile *g_921[10][9][2] = {{{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}, {{&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}, {&g_922, &g_922}}};
static const unsigned char * const volatile * volatile ** volatile g_920 = &g_921[4][1][1];
static unsigned short g_960 = 0x1D7BL;
static char * volatile * volatile g_961 = (void*)0;
static char g_972 = 0L;
static int ** volatile g_998 = (void*)0;
static int * volatile g_1023[3][6] = {{&g_2, &g_2, &g_104, &g_104, &g_2, &g_104}, {&g_2, &g_2, &g_104, &g_104, &g_2, &g_104}, {&g_2, &g_2, &g_104, &g_104, &g_2, &g_104}};
static unsigned g_1028[10][8] = {{1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}, {1UL, 4294967294UL, 4294967295UL, 4294967294UL, 4294967294UL, 4294967295UL, 4294967294UL, 1UL}};
static int g_1040 = 0x193CC71EL;
static int g_1041[7][2][10] = {{{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}, {{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}, {{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}, {{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}, {{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}, {{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}, {{0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}, {0x03CD0EA6L, (-2L), 0x0D7595D2L, 0x03CD0EA6L, 0x8A928697L, 0L, 0x81526B6AL, (-1L), 0xBB530171L, 0x45B8A5D9L}}};
static int g_1042 = (-1L);
static int g_1043 = 3L;
static int g_1044 = (-1L);
static int g_1045 = (-1L);
static int g_1046 = 1L;
static int g_1047 = 0x9C692066L;
static int g_1048 = 0x73822C98L;
static int g_1049 = 9L;
static int g_1050[9] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
static int g_1051[4][10] = {{(-1L), 0xDDFECCD3L, 1L, 0x2033A1D0L, 0xADF950E6L, 0xCBE88E37L, 0xC47E2820L, (-7L), 0xC47E2820L, 0xCBE88E37L}, {(-1L), 0xDDFECCD3L, 1L, 0x2033A1D0L, 0xADF950E6L, 0xCBE88E37L, 0xC47E2820L, (-7L), 0xC47E2820L, 0xCBE88E37L}, {(-1L), 0xDDFECCD3L, 1L, 0x2033A1D0L, 0xADF950E6L, 0xCBE88E37L, 0xC47E2820L, (-7L), 0xC47E2820L, 0xCBE88E37L}, {(-1L), 0xDDFECCD3L, 1L, 0x2033A1D0L, 0xADF950E6L, 0xCBE88E37L, 0xC47E2820L, (-7L), 0xC47E2820L, 0xCBE88E37L}};
static int g_1052 = 1L;
static int g_1053 = (-5L);
static int g_1054 = 0x7A2A0F26L;
static int g_1055 = 0x0B18E991L;
static int g_1056 = 0x23D50937L;
static int g_1057 = 0x918949B3L;
static int g_1058 = 6L;
static int g_1059 = 0xA581712BL;
static int g_1060[8] = {0x9705B4CAL, 0x1CCDE37EL, 0x9705B4CAL, 0x1CCDE37EL, 0x9705B4CAL, 0x1CCDE37EL, 0x9705B4CAL, 0x1CCDE37EL};
static int g_1061 = 7L;
static int g_1062 = 0xE6131C9DL;
static int g_1063[10][6][4] = {{{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}, {{(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}, {(-8L), 7L, 9L, 0xA6FDBD3DL}}};
static int g_1064 = 0x373FA8B9L;
static int g_1065 = 0xF5EC36A8L;
static int g_1066 = 0x07C60384L;
static int g_1067 = 9L;
static int g_1068 = (-1L);
static int g_1069 = 0L;
static int g_1070[9] = {1L, 9L, 1L, 9L, 1L, 9L, 1L, 9L, 1L};
static int g_1071 = 1L;
static int g_1072 = 4L;
static int g_1073[6] = {1L, 1L, 3L, 1L, 1L, 3L};
static int g_1074 = 0x5089D7DDL;
static int g_1075 = 0xB023C8CEL;
static int g_1076 = 0xDF434F8CL;
static int g_1077 = (-8L);
static int g_1078 = (-1L);
static int g_1079[8][9][3] = {{{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}, {{0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}, {0xEC01CF30L, 0xD01FA663L, 7L}}};
static int g_1080 = (-3L);
static int g_1081 = 0xDF5C938AL;
static int g_1082 = 0x71A1BEC0L;
static int g_1083 = 0L;
static int g_1084 = 0x59EEF31DL;
static int g_1085[10] = {3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L, 3L};
static int g_1086 = 0x71DACA6CL;
static int g_1087[4] = {0xB355E9EEL, 0xB355E9EEL, 0xB355E9EEL, 0xB355E9EEL};
static int g_1088[4][1][3] = {{{0x9FED073AL, 0x9FED073AL, 0x9FED073AL}}, {{0x9FED073AL, 0x9FED073AL, 0x9FED073AL}}, {{0x9FED073AL, 0x9FED073AL, 0x9FED073AL}}, {{0x9FED073AL, 0x9FED073AL, 0x9FED073AL}}};
static int g_1089 = 0xB038B2A7L;
static int g_1090 = 0x99A7AF56L;
static int g_1091 = (-1L);
static int g_1092 = (-1L);
static int g_1093 = 0x764752F2L;
static int g_1094[9][9] = {{(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}, {(-2L), (-6L), 0x5FB11662L, (-6L), (-2L), 1L, 0x5FB11662L, 1L, (-2L)}};
static int * const g_1039[10][4][6] = {{{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}, {{(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}, {(void*)0, &g_1050[5], &g_1083, &g_1078, &g_1093, &g_1073[2]}}};
static int * const *g_1038 = &g_1039[6][3][0];
static unsigned g_1151 = 4294967291UL;
static unsigned *g_1186 = &g_1151;
static short ****g_1216 = &g_906;
static short *****g_1215 = &g_1216;
static unsigned short g_1221 = 1UL;
static int *g_1302 = &g_1051[1][9];
static unsigned short **g_1322 = &g_474;
static unsigned short **g_1323 = &g_151;



static unsigned short func_1(void);
static int func_5(short p_6, unsigned p_7, unsigned p_8, unsigned char p_9);
static char func_12(short p_13, unsigned short p_14, char p_15, short p_16);
static unsigned short func_20(int p_21, unsigned p_22, unsigned short p_23, unsigned p_24, int p_25);
static unsigned short func_57(int p_58, const short p_59);
static unsigned short func_61(char p_62, unsigned char p_63, short * p_64, unsigned short * p_65, unsigned short p_66);
static short * func_71(int p_72, unsigned char p_73, short * const p_74);
static int * func_82(unsigned * p_83, unsigned char p_84, unsigned char p_85, int * p_86, int * p_87);
static unsigned * func_88(unsigned p_89);
static unsigned func_94(int p_95);
static unsigned short func_1(void)
{
    unsigned char l_41 = 0x7CL;
    short l_795 = 0xD448L;
    unsigned char **l_1191 = (void*)0;
    unsigned char ** const *l_1190 = &l_1191;
    unsigned char ** const **l_1189[9][3] = {{&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}, {&l_1190, &l_1190, &l_1190}};
    char l_1222 = 0x67L;
    int l_1225 = (-1L);
    unsigned short l_1232 = 0x57FEL;
    int *l_1243 = (void*)0;
    short *l_1268 = (void*)0;
    unsigned short l_1272 = 0UL;
    unsigned short l_1279 = 65534UL;
    unsigned l_1280 = 0x014D0F73L;
    unsigned char ***l_1318 = &l_1191;
    unsigned char **** const l_1317 = &l_1318;
    unsigned char **** const * const l_1316 = &l_1317;
    int i, j;
    for (g_2 = 13; (g_2 > (-29)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 2))
    {
        int *l_28 = &g_29;
        int l_30 = 0L;
        unsigned l_33 = 0x75FF4442L;
        unsigned l_40 = 0x5F19716EL;
        unsigned short *l_42 = &g_43[3][0];
        unsigned *l_44 = &g_45[8][1][0];
        unsigned char ***l_1196 = &l_1191;
        unsigned char ****l_1195 = &l_1196;
        unsigned l_1214 = 0xC25CDDF5L;
        short *****l_1218 = (void*)0;
        const int *l_1236 = &g_1069;
        int l_1264 = 0L;
        char l_1266 = 1L;
        int l_1281 = 0x958EE48DL;
        char l_1290 = 0x25L;
        int l_1299 = 5L;
        unsigned *l_1301[4][5][8] = {{{&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}}, {{&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}}, {{&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}}, {{&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}, {&g_312[0][3][3], &g_312[2][2][7], &l_1214, (void*)0, &g_45[4][0][2], &g_312[2][4][7], (void*)0, &g_312[2][2][7]}}};
        int i, j, k;
    }
    for (g_1064 = 17; (g_1064 >= 0); g_1064--)
    {
        unsigned char **** const *l_1319 = &l_1317;
        for (g_1065 = 0; (g_1065 != (-13)); --g_1065)
        {
            unsigned short **l_1321 = (void*)0;
            unsigned short ***l_1320[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1320[i] = &l_1321;
            l_1225 = ((*g_1302) = (safe_sub_func_int16_t_s_s((g_99[5] = (safe_sub_func_int32_t_s_s((l_1316 != l_1319), (&g_278[1] != (g_1323 = (g_1322 = (void*)0)))))), l_41)));

            ;
            ;
        }
    }

    ;
    ;
    return l_1222;
}







static int func_5(short p_6, unsigned p_7, unsigned p_8, unsigned char p_9)
{
    int *l_796 = &g_78;
    int **l_797 = (void*)0;
    unsigned char l_811 = 249UL;
    short l_812 = 5L;
    short * const **l_829 = (void*)0;
    unsigned short *l_861 = &g_149;
    unsigned short **l_895 = &l_861;
    unsigned short ***l_894 = &l_895;
    short l_900 = 0L;
    short ***l_903 = &g_298;
    int * const *l_928[2];
    const int l_955 = (-1L);
    short l_984 = 3L;
    short l_1013 = 0xB551L;
    int l_1097 = 0xBDE3EED5L;
    int *l_1098[10][1] = {{&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}, {&g_1085[6]}};
    const unsigned char ***l_1161[7];
    const unsigned char ****l_1160 = &l_1161[2];
    unsigned l_1183[5] = {9UL, 0x59E8411EL, 9UL, 0x59E8411EL, 9UL};
    unsigned *l_1185 = &g_606[0][3];
    unsigned **l_1184[10] = {&l_1185, &l_1185, &l_1185, &l_1185, &l_1185, &l_1185, &l_1185, &l_1185, &l_1185, &l_1185};
    short l_1187 = (-9L);
    unsigned l_1188 = 0x24C9FA9AL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_928[i] = &g_622;
    for (i = 0; i < 7; i++)
        l_1161[i] = &g_462;
    (*g_799) = l_796;

    ;
    for (g_740 = 23; (g_740 > (-21)); g_740--)
    {
        unsigned short l_806 = 0x0348L;
        short *l_809[5][10] = {{&g_742, (void*)0, &g_742, (void*)0, (void*)0, &g_742, (void*)0, &g_742, &g_742, &g_742}, {&g_742, (void*)0, &g_742, (void*)0, (void*)0, &g_742, (void*)0, &g_742, &g_742, &g_742}, {&g_742, (void*)0, &g_742, (void*)0, (void*)0, &g_742, (void*)0, &g_742, &g_742, &g_742}, {&g_742, (void*)0, &g_742, (void*)0, (void*)0, &g_742, (void*)0, &g_742, &g_742, &g_742}, {&g_742, (void*)0, &g_742, (void*)0, (void*)0, &g_742, (void*)0, &g_742, &g_742, &g_742}};
        unsigned char *l_810 = &g_322;
        int *l_825 = &g_2;
        int ***l_835 = &g_621;
        int l_862 = 0xD5D3B2BAL;
        int *l_878 = &g_78;
        unsigned short **l_893 = &l_861;
        unsigned short ***l_892 = &l_893;
        unsigned short ****l_891[1];
        int ***l_914 = &l_797;
        int ***l_915 = &l_797;
        int l_919 = (-1L);
        unsigned char l_927 = 0UL;
        unsigned l_985 = 0x0027BF8AL;
        unsigned * const *l_1029 = &g_113[0];
        int * const *l_1036 = (void*)0;
        int * const **l_1037[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        const int **l_1095 = &g_170;
        const int ***l_1096 = &l_1095;
        int i, j;
        for (i = 0; i < 1; i++)
            l_891[i] = &l_892;
    }
    (*g_357) = (func_57(((*l_796) = 4L), p_9) | (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(p_7, (safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_1183[1] = 0L), p_7)), ((*l_861) = (p_9 || ((((l_1098[0][0] != (g_1186 = &g_1151)) && (*g_474)) && l_1187) != 7L))))) && p_8), g_312[0][0][6])))), 2)) <= p_6), l_1188)));
    (*g_357) = 1L;
    return p_9;
}







static char func_12(short p_13, unsigned short p_14, char p_15, short p_16)
{
    int *l_530[10] = {(void*)0, (void*)0, &g_2, &g_2, (void*)0, (void*)0, (void*)0, &g_2, &g_2, (void*)0};
    int **l_531 = &l_530[8];
    unsigned l_532 = 1UL;
    unsigned char **l_542 = (void*)0;
    unsigned char ***l_541 = &l_542;
    short ***l_546 = &g_298;
    unsigned **l_594 = &g_113[2];
    int *l_669 = (void*)0;
    int l_707 = (-10L);
    short *l_761[5][7][7] = {{{(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}}, {{(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}}, {{(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}}, {{(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}}, {{(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}, {(void*)0, &g_745, &g_99[0], &g_99[4], &g_743, &g_745, &g_745}}};
    const int *l_789 = &g_78;
    const int **l_791 = &g_170;
    int i, j, k;
    (*l_531) = l_530[2];
    if (l_532)
    {
        int **l_535 = &l_530[8];
        int l_536 = 1L;
        unsigned short *l_538[7] = {(void*)0, (void*)0, &g_70, (void*)0, (void*)0, &g_70, (void*)0};
        int *l_620 = &g_29;
        int **l_619 = &l_620;
        unsigned short l_628 = 65530UL;
        unsigned *l_632 = (void*)0;
        short l_654 = 3L;
        char * const *l_672 = (void*)0;
        unsigned short **l_701 = &l_538[2];
        unsigned short ***l_700 = &l_701;
        unsigned short **l_732 = &g_474;
        short * const ***l_747 = (void*)0;
        int i;
        if ((l_536 = (safe_sub_func_int32_t_s_s(((void*)0 != l_535), 1L))))
        {
            short *l_537 = &g_99[5];
            unsigned char ***l_539 = (void*)0;
            unsigned char ****l_540 = &l_539;
            short ****l_545 = (void*)0;
            int * const l_553 = &g_229;
            int l_561 = 0L;
            unsigned l_623 = 0x5CDE60C6L;
            unsigned short l_635 = 0x1FD6L;
            short *l_650 = &g_99[0];
            unsigned short l_651[8] = {65528UL, 2UL, 65528UL, 2UL, 65528UL, 2UL, 65528UL, 2UL};
            int i;
            if (func_61(g_104, p_15, l_537, l_538[2], (((((*l_540) = l_539) != l_541) == 0x942C8B58L) == (safe_add_func_uint32_t_u_u(((l_546 = &g_298) == &g_298), p_15)))))
            {
                unsigned short l_567 = 0xCD0AL;
                unsigned short *l_568 = &g_230[2][0][7];
                int l_572[10] = {0L, 0x8C5D8B13L, (-9L), (-9L), 0x8C5D8B13L, 0L, 0x8C5D8B13L, (-9L), (-9L), 0x8C5D8B13L};
                unsigned char *l_583 = (void*)0;
                unsigned char *l_584 = &g_320[7];
                short **l_585 = &l_537;
                int i;
                for (g_353 = 3; (g_353 < (-5)); g_353 = safe_sub_func_int8_t_s_s(g_353, 9))
                {
                    int *l_551 = &g_104;
                    int **l_554 = &g_357;
                    short l_569 = (-8L);
                    for (g_29 = 19; (g_29 < 12); g_29 = safe_sub_func_uint8_t_u_u(g_29, 5))
                    {
                        int *l_552 = (void*)0;
                        l_552 = l_551;

                        ;
                    }
                    (*l_551) = p_13;
                    (*l_554) = l_553;

                    ;
                    if ((*g_395))
                    {
                        unsigned char *l_555 = &g_320[7];
                        (*l_531) = ((*l_554) = (*l_554));
                        (*l_553) = ((*g_462) == (g_556 = l_555));

                        ;
                        l_536 = p_13;
                    }
                    else
                    {
                        unsigned l_564 = 0x43E0DB57L;
                        (*l_551) = p_16;
                        (*g_357) = (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_561 = p_15), 7)), l_569));
                        (*l_554) = (*l_531);

                        ;
                    }

                    ;
                }

                ;

                ;
                for (g_485 = 0; (g_485 >= (-1)); g_485 = safe_sub_func_uint16_t_u_u(g_485, 5))
                {
                    char l_582[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_582[i] = 1L;
                    l_572[5] = p_16;
                    for (g_29 = 0; (g_29 <= 21); g_29++)
                    {
                        short l_575[9][1];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_575[i][j] = 1L;
                        }
                        l_572[4] = 0x6D6582A0L;
                        if (l_575[4][0])
                            continue;
                        l_582[0] = (safe_mod_func_int32_t_s_s((*l_553), ((((&g_485 == l_553) != p_14) <= ((safe_rshift_func_uint16_t_u_u((((*l_553) && 0x88L) <= 65535UL), (safe_add_func_int16_t_s_s(p_16, p_13)))) && 1UL)) || g_56[8][0][2])));
                        (*l_553) = (*g_170);
                    }
                }
                l_572[5] = func_61(p_13, ((*l_584) = 0x36L), ((*l_585) = (void*)0), l_538[2], p_14);

                ;
                ;
                if ((*g_453))
                {
                    int l_586 = 0xBF4DC79BL;
                    int l_588 = 0x0B17730CL;
                    unsigned short l_589 = 0x19ADL;
                    int *l_590 = (void*)0;
                    int *l_591 = &g_29;
                    (*l_553) = p_16;
                    l_572[3] = p_16;
                }
                else
                {
                    return p_14;
                }
            }
            else
            {
                short l_596 = 0x39E1L;
                unsigned * const l_614 = &g_606[5][4];
                unsigned * const *l_613 = &l_614;
                int *l_636 = &g_78;
                int **l_637 = &g_172;
                if (p_16)
                {
                    for (g_104 = (-14); (g_104 == 26); g_104 = safe_add_func_int16_t_s_s(g_104, 9))
                    {
                        (*g_595) = l_594;
                    }
                }
                else
                {
                    char l_597[5][10] = {{0x77L, 0L, 0L, 0x77L, (-1L), 0L, (-2L), 0x6FL, 0L, 0xF2L}, {0x77L, 0L, 0L, 0x77L, (-1L), 0L, (-2L), 0x6FL, 0L, 0xF2L}, {0x77L, 0L, 0L, 0x77L, (-1L), 0L, (-2L), 0x6FL, 0L, 0xF2L}, {0x77L, 0L, 0L, 0x77L, (-1L), 0L, (-2L), 0x6FL, 0L, 0xF2L}, {0x77L, 0L, 0L, 0x77L, (-1L), 0L, (-2L), 0x6FL, 0L, 0xF2L}};
                    unsigned * const **l_615 = &l_613;
                    int i, j;
                    if ((!(l_596 >= l_597[3][1])))
                    {
                        unsigned short l_604 = 0x0921L;
                        unsigned *l_605[4];
                        char *l_609 = (void*)0;
                        char *l_610[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_605[i] = &g_606[5][4];
                        for (i = 0; i < 4; i++)
                            l_610[i] = &g_355[2];
                        (*l_553) = func_57(((safe_rshift_func_int16_t_s_u(l_596, 9)) & p_13), ((safe_sub_func_int16_t_s_s(l_596, func_57((l_597[3][1] < ((p_15 = (p_13 > g_312[1][3][5])) != 0UL)), p_13))) <= p_13));
                        (*l_553) = (*g_375);
                        (*l_535) = (*l_531);
                        (*g_313) = (safe_sub_func_uint32_t_u_u((((*l_553) = (*g_375)) < (*g_170)), (-7L)));
                    }
                    else
                    {
                        return p_14;
                    }
                    (*l_615) = l_613;
                    for (g_70 = (-1); (g_70 >= 51); g_70++)
                    {
                        unsigned char l_618 = 255UL;
                        unsigned char l_631 = 0xC0L;
                        (*l_553) = l_618;
                        g_621 = l_619;

                        ;
                    }

                    ;
                    return l_597[3][1];


                }
                (*l_637) = ((*l_535) = func_82(l_632, func_57((*g_622), ((*l_553) || (p_14 = ((safe_lshift_func_uint16_t_u_s((l_596 <= l_635), 7)) == p_15)))), g_320[5], l_636, &g_104));

                ;

            }


            ;

            ;
            ;
            (*l_553) = (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_650) = (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_312[2][5][6], ((void*)0 != g_646))), (safe_lshift_func_uint16_t_u_s(((*g_203) = (*l_553)), (p_16 > p_14)))))), (l_651[5] && 6UL))) || ((**l_594) = p_14)), 0x957BC91CL));
            (*l_535) = (*g_356);
        }
        else
        {
            const unsigned short * const *l_653[7][3] = {{(void*)0, &g_278[1], &g_278[1]}, {(void*)0, &g_278[1], &g_278[1]}, {(void*)0, &g_278[1], &g_278[1]}, {(void*)0, &g_278[1], &g_278[1]}, {(void*)0, &g_278[1], &g_278[1]}, {(void*)0, &g_278[1], &g_278[1]}, {(void*)0, &g_278[1], &g_278[1]}};
            const unsigned short * const **l_652 = &l_653[3][2];
            int ***l_661 = &l_535;
            unsigned *l_662 = (void*)0;
            unsigned char *l_663 = (void*)0;
            unsigned char *l_664[6];
            int ***l_665 = &l_619;
            int l_666 = (-6L);
            int i, j;
            for (i = 0; i < 6; i++)
                l_664[i] = &g_322;
            (*l_652) = &g_278[3];
            (*l_531) = func_82((*g_112), (p_13 <= (l_654 == (safe_lshift_func_uint8_t_u_s((p_16 < p_13), 6)))), (safe_rshift_func_uint16_t_u_s((p_14 == (((*l_661) = &g_172) == (void*)0)), 13)), &l_536, (*l_531));


            ;
            (*l_535) = func_82(l_662, p_13, (g_320[7] = (((0x6DL | g_45[6][7][1]) ^ p_13) || ((*g_474) = (*g_203)))), &l_536, &l_536);

            ;
            l_536 = func_20((((*l_665) = &g_622) == (void*)0), (**g_646), p_15, (**l_535), (l_666 = (**l_535)));


            ;
        }



        ;
        ;
        ;
        (*g_228) = 0x2E4E4361L;
        for (g_485 = 2; (g_485 >= 0); g_485 -= 1)
        {
            int *l_667 = &g_104;
            int **l_668[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_668[i][j] = &g_357;
            }
            l_667 = l_667;
            l_669 = ((*l_535) = &l_536);

            ;
            for (p_14 = 0; (p_14 <= 6); p_14 += 1)
            {
                const int *l_673 = &g_104;
                int l_682 = 0x16BB6632L;
                int i, j;
                (*l_667) = g_320[p_14];
                (*l_669) = (safe_lshift_func_uint16_t_u_u(g_43[(p_14 + 1)][g_485], 4));
                for (g_78 = 0; (g_78 <= 6); g_78 += 1)
                {
                    (*l_535) = (*l_531);
                }
                for (g_149 = 0; (g_149 <= 6); g_149 += 1)
                {
                    const int **l_675 = &g_170;
                    l_672 = l_672;
                    (*l_675) = l_673;

                    ;
                    if ((safe_add_func_int16_t_s_s((-1L), func_57((*l_673), p_13))))
                    {
                        l_536 = 0xBBD3B958L;
                        (*l_675) = (*l_531);

                        ;
                        return g_102;



                    }
                    else
                    {
                        int l_681 = 8L;
                        if ((*l_673))
                            break;
                        (*l_667) = (((0UL ^ ((**g_112) = p_16)) >= (l_682 = (((p_13 <= (((safe_rshift_func_int8_t_s_s((&g_353 == (void*)0), 5)) | (safe_unary_minus_func_uint16_t_u((*g_151)))) >= p_14)) > (l_681 ^ func_57(l_681, (*l_673)))) >= (-1L)))) | 0x9748A5D7L);
                        (*l_669) = p_14;
                        if ((*l_669))
                            continue;
                    }
                }
            }
        }

        ;


        ;
        for (l_654 = (-12); (l_654 > (-1)); l_654++)
        {
            unsigned *l_690 = &g_45[2][1][0];
            int l_691 = 1L;
            char *l_696[10];
            unsigned short **l_698 = &l_538[2];
            unsigned short ***l_697 = &l_698;
            unsigned short ****l_699 = &l_697;
            int ***l_724 = &l_535;
            short ****l_731 = &l_546;
            short * const l_739[4][1][5] = {{{(void*)0, &g_744, (void*)0, &g_740, &g_740}}, {{(void*)0, &g_744, (void*)0, &g_740, &g_740}}, {{(void*)0, &g_744, (void*)0, &g_740, &g_740}}, {{(void*)0, &g_744, (void*)0, &g_740, &g_740}}};
            short * const * const l_738 = &l_739[0][0][3];
            short * const * const *l_737 = &l_738;
            short * const * const **l_736 = &l_737;
            const int *l_763 = &g_764;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_696[i] = (void*)0;
        }
    }
    else
    {
        short l_782 = 0x8090L;
        const int *l_786 = &g_2;
        int l_790 = 0L;
        for (p_14 = 0; (p_14 > 46); ++p_14)
        {
            unsigned l_785 = 4294967294UL;
            const int **l_788[4][3][5] = {{{&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}}, {{&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}}, {{&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}}, {{&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}, {&l_786, &g_170, (void*)0, &g_170, (void*)0}}};
            int i, j, k;
            for (g_78 = 0; (g_78 > (-14)); g_78 = safe_sub_func_int8_t_s_s(g_78, 4))
            {
                unsigned short l_783 = 65533UL;
                int l_784 = 0x4013E77CL;
                l_783 = l_782;
                l_785 = (l_784 = (*g_170));
            }
            l_789 = l_786;

            ;
            l_790 = (*l_786);
        }

        ;
        (*l_531) = &l_790;


    }

    ;


    ;

    ;
    (*l_791) = (*g_249);
    for (g_70 = 0; (g_70 > 12); ++g_70)
    {
        char l_794 = 0L;
        l_794 = 0x4A6D5CD0L;
    }
    return p_15;
}







static unsigned short func_20(int p_21, unsigned p_22, unsigned short p_23, unsigned p_24, int p_25)
{
    unsigned short *l_52 = (void*)0;
    unsigned short *l_53 = &g_43[3][0];
    int l_54 = 0x69F41AF5L;
    short *l_55 = &g_56[4][1][4];
    unsigned char l_60 = 255UL;
    unsigned short *l_69 = &g_70;
    int *l_398 = (void*)0;
    const unsigned char **l_465 = &g_463;
    unsigned char *l_496 = &g_320[3];
    int l_497[1];
    unsigned short l_511 = 1UL;
    unsigned l_513[4][9][5] = {{{4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}}, {{4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}}, {{4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}}, {{4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}, {4294967287UL, 0x0DF77B1CL, 4294967295UL, 0x79860B74L, 5UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_497[i] = 0x231E7329L;
    (*g_313) = ((safe_mod_func_int16_t_s_s(((*l_55) = (safe_lshift_func_uint16_t_u_s(((*l_53) = (safe_mod_func_int32_t_s_s(0x6F2C0E84L, g_45[3][4][0]))), l_54))), func_57((l_60 > func_61((safe_mod_func_uint16_t_u_u(((*l_69) = 65535UL), g_45[8][1][0])), p_25, func_71(g_45[8][1][0], g_45[8][1][0], l_53), l_52, l_60)), l_54))) | l_54);


    ;
    for (p_25 = 1; (p_25 >= (-21)); p_25 = safe_sub_func_int16_t_s_s(p_25, 1))
    {
        int *l_392 = &l_54;
        (*l_392) = (((void*)0 != &p_21) && p_21);
    }
    for (g_322 = 0; (g_322 <= 2); g_322 += 1)
    {
        unsigned l_396 = 0x96AF753DL;
        int l_420 = 0L;
        int **l_430 = (void*)0;
        unsigned short l_436 = 0UL;
        unsigned short **l_455 = &l_53;
        const unsigned char **l_466 = &g_463;
        char l_467[1];
        short *l_475 = &g_99[4];
        int *l_502 = &g_2;
        unsigned **l_525 = &g_113[1];
        int i;
        for (i = 0; i < 1; i++)
            l_467[i] = 0x06L;
        for (p_23 = 0; (p_23 <= 6); p_23 += 1)
        {
            int *l_393 = &g_78;
            unsigned short l_400 = 65526UL;
            const unsigned *l_404 = (void*)0;
            const unsigned **l_403 = &l_404;
            (*g_395) = ((*l_393) = (-1L));
            for (g_149 = 0; (g_149 <= 6); g_149 += 1)
            {
                unsigned short **l_423 = &g_203;
                int i, j, k;
                (*l_393) = (g_312[g_322][(g_322 + 2)][g_322] >= g_43[(g_149 + 2)][g_322]);
                for (g_78 = 3; (g_78 >= 0); g_78 -= 1)
                {
                    const unsigned ***l_405 = &l_403;
                    unsigned char * const l_407 = &g_320[8];
                    unsigned char * const *l_406 = &l_407;
                    int i, j, k;
                    l_396 = g_312[g_322][(g_78 + 1)][(g_149 + 2)];
                    if (l_396)
                    {
                        int l_397 = 0x90DC91D7L;
                        if (l_397)
                            break;
                        return p_23;
                    }
                    else
                    {
                        int i;
                        l_398 = g_113[(g_322 + 1)];

                        ;
                        (*g_399) = g_113[g_78];

                        ;
                        (*g_313) = (*g_395);
                    }

                    ;
                    ;
                    (*l_398) = 0L;
                    if (func_57((((*l_55) = (l_400 || (safe_add_func_int16_t_s_s((g_103 >= (-4L)), ((0x01020721L == (&g_113[(g_322 + 2)] == ((*l_405) = l_403))) & g_355[6]))))) > (*g_151)), (0x15L | 0UL)))
                    {
                        (*l_398) = 1L;
                        l_406 = l_406;
                    }
                    else
                    {
                        int **l_422[2][6] = {{&l_393, &g_357, (void*)0, &g_357, &l_393, &g_172}, {&l_393, &g_357, (void*)0, &g_357, &l_393, &g_172}};
                        int ***l_421 = &l_422[0][4];
                        int i, j;
                        (*g_357) = (safe_sub_func_int32_t_s_s(func_57(p_24, (*l_398)), (l_420 = (((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(g_322, 4)), p_22)) || ((safe_lshift_func_uint8_t_u_u(g_2, 4)) || (safe_sub_func_uint32_t_u_u((g_312[g_322][(g_78 + 1)][(g_149 + 2)] <= p_23), (safe_sub_func_uint32_t_u_u((((((p_25 > 65535UL) <= g_312[g_322][(g_322 + 2)][g_322]) != g_43[3][0]) == (*l_393)) != p_22), 1UL)))))) == 4294967292UL) != p_23) <= l_396))));
                        (*l_398) = (l_420 = (func_57(func_57(p_22, func_57(g_56[1][0][0], (&l_393 != ((*l_421) = &g_357)))), (((((void*)0 == &g_322) != (*g_170)) != (*g_357)) ^ g_43[(g_149 + 2)][g_322])) < 0x5AL));
                        (*l_398) = func_57(g_104, ((((void*)0 == l_423) == p_23) > 0x14L));
                    }
                }
            }
            for (l_54 = 0; (l_54 <= 3); l_54 += 1)
            {
                short l_431 = 0L;
                int i, j, k;
                if ((safe_mod_func_uint16_t_u_u(func_57(((((*l_53) = ((safe_sub_func_uint8_t_u_u(((0xECL ^ (func_57(g_312[g_322][g_322][(g_322 + 4)], g_312[g_322][g_322][(g_322 + 4)]) < g_312[2][2][7])) && (g_367[(g_322 + 1)][l_54] == l_430)), ((((*l_393) = (((*g_151) = p_25) <= ((((*l_393) && p_25) >= 0L) < 0x0AED3171L))) && g_312[g_322][g_322][(g_322 + 4)]) == l_431))) | g_312[g_322][g_322][(g_322 + 4)])) < l_54) || g_322), p_23), p_22)))
                {
                    if ((*g_170))
                        break;
                }
                else
                {
                    (*l_393) = (*g_300);
                    p_25 = (*g_395);
                }
            }
            (*l_393) = (p_24 != p_22);
            for (g_104 = 0; (g_104 <= 2); g_104 += 1)
            {
                const unsigned l_442 = 0xD160A5B1L;
                int *l_443 = &g_2;
                for (p_21 = 0; (p_21 <= 2); p_21 += 1)
                {
                    char *l_439 = &g_353;
                    int i, j, k;
                    for (l_60 = 0; (l_60 <= 3); l_60 += 1)
                    {
                        int i, j, k;
                        (*l_393) = (safe_div_func_int32_t_s_s(g_312[g_322][(l_60 + 2)][(p_21 + 1)], ((safe_lshift_func_uint16_t_u_s(p_21, 6)) || p_21)));
                    }
                    (*l_393) = (((*g_112) = (*g_112)) != &g_312[p_21][(g_322 + 2)][(p_23 + 1)]);
                    (*l_393) = (p_25 = ((*l_393) > func_57(l_436, ((safe_rshift_func_int8_t_s_u(((*l_439) = p_25), g_2)) && (((((p_25 <= 65527UL) & (func_57(p_25, l_442) > g_312[p_21][(g_322 + 2)][(p_23 + 1)])) & g_78) < p_24) || l_442)))));
                }
                for (p_25 = 0; (p_25 <= 6); p_25 += 1)
                {
                    int **l_444 = (void*)0;
                    int **l_445 = &l_398;
                    int i, j, k;
                    (*g_446) = ((*l_445) = l_443);

                    ;
                    ;
                    for (l_420 = 6; (l_420 >= 2); l_420 -= 1)
                    {
                        int i, j;
                        (*l_445) = &p_25;

                        ;
                    }

                    ;
                    (*l_393) = (0xDC15L || g_312[g_322][(g_322 + 2)][p_23]);
                    (*g_449) = ((safe_div_func_int16_t_s_s(p_22, p_24)) != (p_24 & ((*l_393) = 1L)));
                }
                for (p_25 = 3; (p_25 >= 0); p_25 -= 1)
                {
                    return p_25;
                }
            }
        }

        ;
        if (func_61(g_99[5], p_25, l_69, &l_436, (0x89L ^ g_99[3])))
        {
            int * const l_450 = &g_2;
            int **l_451 = &l_398;
            (*l_451) = l_450;

            ;
        }
        else
        {
            unsigned l_452 = 0UL;
            unsigned short **l_454 = &l_69;
            (*g_453) = l_452;
            l_455 = l_454;

            ;
            if (((void*)0 != &g_298))
            {
                int *l_456 = &g_78;
                (*l_456) = p_23;
            }
            else
            {
                int l_457 = 0L;
                if (l_457)
                    break;
            }
        }

        ;
        ;
        if (l_420)
            continue;
        for (g_149 = 0; (g_149 <= 3); g_149 += 1)
        {
            int **l_458 = &l_398;
            const unsigned short * const *l_461 = &g_278[5];
            unsigned *l_487 = &g_312[2][2][7];
            (*l_458) = &p_25;

            ;
            if ((((safe_lshift_func_int8_t_s_u((**l_458), 4)) <= ((void*)0 != l_461)) != p_22))
            {
                const unsigned char ***l_464[9] = {&g_462, &g_462, &g_462, &g_462, &g_462, &g_462, &g_462, &g_462, &g_462};
                int i;
                l_466 = (l_465 = g_462);
            }
            else
            {
                int *l_468 = (void*)0;
                const unsigned *l_472 = &g_312[2][4][4];
                const unsigned **l_471 = &l_472;
                int *l_491 = (void*)0;
                unsigned char *l_494 = &l_60;
                const int l_499 = 0L;
                short *l_501 = &g_56[0][1][2];
                int l_518 = (-1L);
                (*l_398) = l_467[0];
                (*l_458) = func_82(func_82((*g_112), (*l_398), (*l_398), l_468, (*g_446)), p_23, ((p_21 >= (*l_398)) >= (**l_458)), &l_54, l_468);

                ;
                if (((*g_203) || 0x2EE8L))
                {
                    short *l_473 = &g_56[4][1][4];
                    int l_486 = 5L;
                    for (g_353 = 0; (g_353 <= 1); g_353 += 1)
                    {
                        const unsigned *l_470 = &g_45[7][4][2];
                        const unsigned ** const l_469 = &l_470;
                        char *l_476[9] = {(void*)0, &g_355[5], (void*)0, &g_355[5], (void*)0, &g_355[5], (void*)0, &g_355[5], (void*)0};
                        int i, j, k;
                        p_25 = (-1L);
                        (*g_300) = ((func_61(func_61((l_469 != l_471), g_45[(g_322 + 2)][(g_322 + 2)][g_322], l_473, g_474, p_21), p_23, l_475, l_52, g_45[(g_322 + 2)][(g_322 + 2)][g_322]) <= 0x22L) != 1L);
                        if ((**l_458))
                            continue;
                        (**l_458) = func_61((g_355[6] = p_24), (safe_mod_func_int8_t_s_s(func_61(g_312[0][3][0], (safe_add_func_int32_t_s_s(0L, (safe_sub_func_int8_t_s_s((g_45[8][1][0] >= (g_56[(g_149 + 2)][g_353][(g_322 + 2)] = ((void*)0 == &l_466))), (g_485 = ((*l_398) ^ p_22)))))), l_473, &g_43[3][0], l_486), p_21)), l_52, &g_230[2][0][7], p_22);
                    }
                    if ((**l_458))
                        continue;
                    for (l_60 = 0; (l_60 <= 3); l_60 += 1)
                    {
                        int l_488 = 1L;
                        int **l_489 = (void*)0;
                        int **l_490 = &l_468;
                        (*l_458) = func_82(l_487, (**l_458), l_488, ((*l_490) = &p_25), l_491);

                        ;
                        ;
                        (*l_458) = &p_25;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned char **l_495[9][8][3] = {{{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}, {{&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}, {&l_494, &l_494, &l_494}}};
                    int l_498[6][2][2] = {{{0xC383516BL, 0xC383516BL}, {0xC383516BL, 0xC383516BL}}, {{0xC383516BL, 0xC383516BL}, {0xC383516BL, 0xC383516BL}}, {{0xC383516BL, 0xC383516BL}, {0xC383516BL, 0xC383516BL}}, {{0xC383516BL, 0xC383516BL}, {0xC383516BL, 0xC383516BL}}, {{0xC383516BL, 0xC383516BL}, {0xC383516BL, 0xC383516BL}}, {{0xC383516BL, 0xC383516BL}, {0xC383516BL, 0xC383516BL}}};
                    short *l_500[4];
                    short l_512[9][4] = {{0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}, {0xC632L, 0xDB4AL, 0xC632L, 0xDB4AL}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_500[i] = &g_99[0];
                    (**l_458) = (safe_div_func_int8_t_s_s(func_61(g_230[0][1][2], (l_498[3][0][1] = (((((l_496 = l_494) != (*l_465)) | (~(l_497[0] | (*l_398)))) || (p_24 ^ func_61((l_498[3][0][1] || (p_23 >= func_57((func_57(p_21, p_21) > 0xA1A8L), l_499))), p_22, l_500[3], &g_43[3][0], (*g_474)))) || 0UL)), l_501, &g_230[2][0][7], p_23), p_21));

                    ;
                    (*l_458) = l_502;

                    ;
                    l_511 = ((((*l_53) = (safe_div_func_uint32_t_u_u(p_21, (safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((g_355[1] = g_78) >= 0x04L) ^ (safe_sub_func_uint32_t_u_u(func_57((**l_458), p_21), p_25))) <= 65534UL), p_23)), 1L))))) < p_23) < p_24);
                    for (g_104 = 3; (g_104 >= 0); g_104 -= 1)
                    {
                        short *l_514 = &l_512[2][2];
                        short **l_515[1][6][10] = {{{&l_475, (void*)0, &l_501, (void*)0, &l_501, (void*)0, &l_475, (void*)0, &l_500[3], &l_514}, {&l_475, (void*)0, &l_501, (void*)0, &l_501, (void*)0, &l_475, (void*)0, &l_500[3], &l_514}, {&l_475, (void*)0, &l_501, (void*)0, &l_501, (void*)0, &l_475, (void*)0, &l_500[3], &l_514}, {&l_475, (void*)0, &l_501, (void*)0, &l_501, (void*)0, &l_475, (void*)0, &l_500[3], &l_514}, {&l_475, (void*)0, &l_501, (void*)0, &l_501, (void*)0, &l_475, (void*)0, &l_500[3], &l_514}, {&l_475, (void*)0, &l_501, (void*)0, &l_501, (void*)0, &l_475, (void*)0, &l_500[3], &l_514}}};
                        short *l_516 = &g_56[4][1][4];
                        int l_517 = 0xF735F4DDL;
                        int i, j, k;
                        l_517 = func_61(l_512[2][2], l_513[2][0][1], (l_516 = l_514), l_514, (*g_474));

                        ;
                        l_468 = &p_25;

                        ;
                        (*l_468) = l_518;
                        p_25 = p_22;
                    }

                    ;
                }

                ;
                ;
            }

            ;
            for (g_78 = 2; (g_78 >= 0); g_78 -= 1)
            {
                unsigned ***l_526 = &g_112;
                if ((*l_502))
                    break;
                (*g_527) = ((safe_mod_func_int32_t_s_s((p_25 > (func_57(g_149, (g_322 & (safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((p_25 || ((p_21 > p_24) >= (l_525 != ((*l_526) = l_525)))) ^ (**l_458)) <= p_21), g_230[2][0][5])) >= p_24), 7)))) & (-1L))), (-1L))) & 4L);
                (*l_458) = func_82((**l_526), (*l_398), p_23, func_82((*l_525), p_24, ((*l_496) = ((((safe_sub_func_uint16_t_u_u(((*l_53) = (**l_458)), p_24)) ^ g_320[7]) > 0x19F3L) > p_24)), (*g_399), &g_2), &g_2);

                ;
            }
            p_25 = p_24;
        }
    }

    ;
    ;
    return p_22;
}







static unsigned short func_57(int p_58, const short p_59)
{
    short l_387 = (-10L);
    int *l_389[7] = {&g_78, (void*)0, &g_78, (void*)0, &g_78, (void*)0, &g_78};
    int i;
    (*g_300) = (5UL < ((g_353 = (!6L)) | (p_59 ^ (p_58 <= l_387))));
    return p_58;
}







static unsigned short func_61(char p_62, unsigned char p_63, short * p_64, unsigned short * p_65, unsigned short p_66)
{
    int **l_382 = &g_357;
    int *l_383 = &g_229;
    int *l_384 = &g_78;
    (*l_382) = (void*)0;

    ;
    l_383 = (*l_382);

    ;
    (*l_384) = (*g_300);
    return (*l_384);
}







static short * func_71(int p_72, unsigned char p_73, short * const p_74)
{
    short * const l_98[10][7][3] = {{{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}, {{&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}, {&g_99[2], &g_99[1], (void*)0}}};
    int l_277 = 0xF64A7FD8L;
    short *l_381 = &g_99[0];
    int i, j, k;
    for (g_29 = 0; (g_29 <= 17); g_29 = safe_add_func_int32_t_s_s(g_29, 9))
    {
        int l_81[4][8] = {{(-5L), 0x56207CCBL, 0xB151854EL, 0x6196C9A5L, 0x227FA2E5L, 0x6196C9A5L, 0xB151854EL, 0x56207CCBL}, {(-5L), 0x56207CCBL, 0xB151854EL, 0x6196C9A5L, 0x227FA2E5L, 0x6196C9A5L, 0xB151854EL, 0x56207CCBL}, {(-5L), 0x56207CCBL, 0xB151854EL, 0x6196C9A5L, 0x227FA2E5L, 0x6196C9A5L, 0xB151854EL, 0x56207CCBL}, {(-5L), 0x56207CCBL, 0xB151854EL, 0x6196C9A5L, 0x227FA2E5L, 0x6196C9A5L, 0xB151854EL, 0x56207CCBL}};
        int l_351[1][4][3] = {{{0L, (-1L), 0L}, {0L, (-1L), 0L}, {0L, (-1L), 0L}, {0L, (-1L), 0L}}};
        short *l_360 = (void*)0;
        int *l_365 = &l_351[0][1][1];
        unsigned short *l_380 = &g_230[2][0][7];
        int i, j, k;
        p_72 = g_45[8][1][0];
        for (g_78 = (-17); (g_78 < 19); g_78 = safe_add_func_int8_t_s_s(g_78, 7))
        {
            unsigned l_332 = 0x82C6C0A4L;
            for (p_73 = 0; (p_73 <= 3); p_73 += 1)
            {
                int **l_329 = &g_172;
                char *l_352 = &g_353;
                char *l_354 = &g_355[6];
                int i, j;
            }
            return l_360;



        }
        for (g_322 = 0; (g_322 < 24); g_322++)
        {
            unsigned short l_373[4][10][4] = {{{0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}}, {{0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}}, {{0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}}, {{0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}, {0xA488L, 6UL, 0x6A4DL, 65535UL}}};
            int i, j, k;
            (*g_172) = 5L;
            for (g_104 = 0; (g_104 > 26); g_104++)
            {
                int **l_366 = &g_172;
                int **l_368 = &l_365;
                if (l_277)
                    break;
                l_365 = &p_72;

                ;
                (*l_368) = ((*l_366) = &p_72);

                ;
                for (l_277 = (-3); (l_277 != 21); l_277 = safe_add_func_uint32_t_u_u(l_277, 5))
                {
                    char *l_374 = &g_353;
                    (*l_366) = &p_72;

                    ;
                    (*l_366) = &l_277;

                    ;
                    l_365 = (void*)0;

                    ;
                    (*g_375) = ((safe_rshift_func_uint8_t_u_s(g_45[8][1][0], ((*l_374) = l_373[3][0][3]))) == ((g_45[8][1][0] < ((p_72 <= (**l_366)) > 9UL)) < (*g_151)));
                }

                ;
                ;
            }
            for (l_277 = 28; (l_277 <= 17); l_277 = safe_sub_func_uint8_t_u_u(l_277, 2))
            {
                (*g_300) = 0x33BB9B58L;
            }
        }

        ;
        (*g_172) = (((*g_203) = l_277) == ((*l_380) = 0UL));
    }

    ;
    return l_381;



}







static int * func_82(unsigned * p_83, unsigned char p_84, unsigned char p_85, int * p_86, int * p_87)
{
    int *l_328 = &g_104;
    (*l_328) = ((p_87 == (void*)0) >= p_84);
    return &g_229;


}







static unsigned * func_88(unsigned p_89)
{
    unsigned short *l_279[1][7] = {{&g_149, &g_149, &g_149, &g_149, &g_149, &g_149, &g_149}};
    int l_280 = 0x0B72B06DL;
    int *l_299 = &g_78;
    unsigned *l_327 = &g_312[2][2][7];
    int i, j;
    if (((p_89 <= ((g_278[1] == (l_279[0][6] = l_279[0][6])) > (p_89 >= l_280))) > (&p_89 != ((*g_112) = &p_89))))
    {
        short *l_287 = (void*)0;
        short *l_288[1];
        int l_289[10][7] = {{0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}, {0xAAD7BCEBL, 3L, 0L, 3L, 0xAAD7BCEBL, (-8L), 1L}};
        int l_290[5] = {6L, 3L, 6L, 3L, 6L};
        int l_293 = 0L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_288[i] = (void*)0;
        if ((safe_sub_func_uint32_t_u_u(p_89, ((((p_89 <= (safe_div_func_int16_t_s_s((l_280 = (safe_lshift_func_int16_t_s_s((l_290[4] = (l_289[1][4] = p_89)), (4294967294UL > (((**g_112) != l_280) == (~((p_89 >= ((!(safe_sub_func_uint32_t_u_u((g_2 <= 0x69L), (*g_228)))) > l_293)) >= 0L))))))), p_89))) <= p_89) >= 0x25CBC684L) ^ p_89))))
        {
            int * const l_294[9] = {&l_290[4], &l_290[4], &l_290[4], &l_290[4], &l_290[4], &l_290[4], &l_290[4], &l_290[4], &l_290[4]};
            int **l_295 = &g_172;
            short **l_296 = &l_287;
            short ***l_297 = &l_296;
            int i;
            (*l_295) = l_294[7];

            ;
            g_298 = ((*l_297) = l_296);

            ;
            (**l_295) = (+0x5A24C56DL);
            (*g_172) = l_280;
        }
        else
        {
            int **l_301 = &g_172;
            (*g_171) = l_299;

            ;
            (*g_300) = (**g_169);
            (*l_301) = &l_290[4];

            ;
            return l_299;




        }

        ;
        ;
    }
    else
    {
        int **l_302 = &l_299;
        short *l_309[3];
        int l_310 = 6L;
        unsigned *l_311 = &g_312[2][2][7];
        int i;
        for (i = 0; i < 3; i++)
            l_309[i] = &g_99[5];
        (*g_228) = 0L;
        (*l_302) = (void*)0;

        ;
        (*g_313) = ((!g_149) & ((0x5DL ^ (safe_add_func_uint32_t_u_u(p_89, ((*l_311) = ((((+(((*g_300) = (**g_249)) <= ((safe_div_func_int16_t_s_s((l_310 = l_280), 0x06C9L)) ^ (p_89 == g_78)))) > p_89) & p_89) > p_89))))) >= 4294967287UL));
    }



    ;
    for (g_104 = (-30); (g_104 < (-25)); ++g_104)
    {
        int *l_316 = &g_229;
        unsigned char *l_319 = &g_320[7];
        unsigned char *l_321[6] = {&g_322, &g_322, &g_322, &g_322, &g_322, &g_322};
        unsigned l_325 = 0UL;
        int i;
        (*l_316) = p_89;
        (*l_316) = (-5L);
        if (((((*g_203) = ((safe_lshift_func_int8_t_s_s((-1L), 3)) >= p_89)) == (g_45[1][7][0] <= (p_89 == g_99[2]))) ^ ((p_89 < p_89) || (((*l_316) = ((*l_319) = 1UL)) <= (safe_add_func_uint8_t_u_u((((**g_112) > (**g_169)) > l_325), 0L))))))
        {
            unsigned *l_326 = &g_45[9][3][2];
            return l_326;



        }
        else
        {
            if (p_89)
                break;
        }
    }
    return l_327;



}







static unsigned func_94(int p_95)
{
    unsigned l_108 = 0xC8DDEC24L;
    unsigned char l_128 = 0x73L;
    unsigned short *l_148 = &g_149;
    unsigned short * const *l_147[6];
    char l_152 = 0x20L;
    unsigned *l_154 = (void*)0;
    unsigned **l_153 = &l_154;
    int *l_175 = (void*)0;
    int l_189 = 0xE2F7C884L;
    unsigned char l_205[3][7][7] = {{{0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}}, {{0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}}, {{0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}, {0UL, 0UL, 6UL, 7UL, 0x62L, 1UL, 1UL}}};
    const char l_263 = 0x7DL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_147[i] = &l_148;
    for (p_95 = 0; (p_95 < (-2)); --p_95)
    {
        unsigned *l_110 = &l_108;
        unsigned **l_109 = &l_110;
        int l_135[2][10] = {{7L, 7L, 0xE7B18E49L, 7L, 7L, 0xE7B18E49L, 7L, 7L, 0xE7B18E49L, 7L}, {7L, 7L, 0xE7B18E49L, 7L, 7L, 0xE7B18E49L, 7L, 7L, 0xE7B18E49L, 7L}};
        unsigned l_144 = 1UL;
        int l_146 = (-2L);
        int i, j;
        for (g_104 = 11; (g_104 <= (-30)); g_104--)
        {
            unsigned char l_107[10][6] = {{1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}, {1UL, 0xDAL, 0xFDL, 0x97L, 1UL, 1UL}};
            unsigned ***l_114[1];
            short *l_119 = &g_99[0];
            int *l_145 = &l_135[0][0];
            int i, j;
            for (i = 0; i < 1; i++)
                l_114[i] = &l_109;
            l_108 = l_107[3][1];
            l_109 = l_109;
            l_146 = ((*l_145) = (safe_mod_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((l_119 == (void*)0), (safe_add_func_int8_t_s_s(0xF0L, (((safe_sub_func_uint16_t_u_u(g_99[3], (!(safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_128 < (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(p_95, (safe_add_func_int8_t_s_s((((l_135[1][1] ^ (safe_rshift_func_int8_t_s_s(g_2, (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((0xFAL >= g_99[2]) == p_95) | p_95), 0x76694972L)), p_95)), g_104))))) || (-1L)) == l_128), g_99[2])))) ^ l_144), l_107[3][1]))), l_144)), l_128))))) < p_95) || g_2))))) <= (-5L)), 6UL)));
        }
        g_150[0] = l_147[2];
        if (l_152)
            break;
        if (l_135[1][1])
            continue;
    }


    if (((*g_112) == ((*l_153) = (*g_112))))
    {
        int *l_156 = &g_104;
        for (g_149 = 0; (g_149 <= 5); g_149 += 1)
        {
            int l_155 = (-5L);
            return l_155;


        }
        if (((*l_156) = p_95))
        {
            (*l_156) = (safe_rshift_func_uint16_t_u_u((((0x921FL <= p_95) == g_45[8][1][0]) ^ p_95), 10));
        }
        else
        {
            unsigned short l_167 = 1UL;
            const int *l_168 = &g_104;
            (*l_156) = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((*l_153) != (*g_112)), (safe_sub_func_uint8_t_u_u((l_152 > ((g_45[0][2][1] == 0xB2L) | (safe_sub_func_int16_t_s_s(p_95, l_167)))), p_95)))) ^ (((g_102 < l_108) & 255UL) ^ p_95)), 14));
            (*g_169) = l_168;

            ;
            (*g_171) = l_154;

            ;
        }

        ;
        ;
    }
    else
    {
        unsigned char l_178 = 0UL;
        int **l_183 = &g_172;
        unsigned short *l_202 = &g_149;
        short l_259 = 0x399BL;
        for (l_108 = 0; (l_108 < 20); l_108++)
        {
            unsigned l_194 = 4294967293UL;
            l_175 = l_154;

            ;
            if ((*g_170))
                continue;
            if (p_95)
                break;
            if (((*l_175) > ((safe_sub_func_int16_t_s_s((l_178 & (p_95 != g_29)), 0x79B5L)) == (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((g_149 < ((l_183 != (void*)0) >= (safe_rshift_func_int8_t_s_u(((**l_183) || 0x75DDBE6DL), 2)))), p_95)), 2)))))
            {
                int *l_187 = &g_78;
                const int **l_190 = (void*)0;
                const int **l_191[2][5][8] = {{{&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}}, {{&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}, {&g_170, &g_170, &g_170, &g_170, (void*)0, &g_170, (void*)0, &g_170}}};
                int i, j, k;
                if ((safe_unary_minus_func_uint16_t_u(p_95)))
                {
                    for (l_178 = 0; l_178 < 1; l_178 += 1)
                    {
                        g_150[l_178] = &l_148;
                    }
                    (*l_183) = l_187;
                }
                else
                {
                    int *l_188[10] = {&g_78, &g_2, &g_104, &g_104, &g_2, &g_78, &g_2, &g_104, &g_104, &g_2};
                    int i;
                    l_189 = (0x21F7CBC2L <= p_95);
                    return p_95;


                }
                (*g_169) = (*g_169);
            }
            else
            {
                unsigned short l_192 = 0x3E04L;
                int l_193[6][6][3] = {{{(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}}, {{(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}}, {{(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}}, {{(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}}, {{(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}}, {{(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}, {(-1L), 0x5F50615DL, 0x2062B2DEL}}};
                int i, j, k;
                (*g_169) = (*g_169);
                l_193[0][2][1] = l_192;
                return l_194;


            }
        }

        ;
        for (l_178 = 0; (l_178 < 28); l_178++)
        {
            int *l_209 = &g_104;
            int l_232 = 0L;
            unsigned char *l_260 = &l_128;
            const unsigned *l_269 = &l_108;
            const unsigned **l_268 = &l_269;
            short *l_275 = &g_99[0];
            short l_276 = 0x6F4BL;
            for (l_189 = 22; (l_189 > (-6)); l_189 = safe_sub_func_int16_t_s_s(l_189, 7))
            {
                unsigned char l_224 = 252UL;
                int l_227[10][6] = {{1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}, {1L, (-3L), 8L, (-4L), 0xFF9ED612L, 0xA66A1571L}};
                short *l_261 = (void*)0;
                short *l_262 = &g_99[0];
                int i, j;
                for (l_108 = 0; (l_108 <= 0); l_108 += 1)
                {
                    unsigned char *l_199 = &l_128;
                    unsigned short **l_204 = &g_151;
                    int *l_206[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_206[i] = &g_104;
                    l_205[1][3][6] = (((*l_199) = l_128) || (+(p_95 == (safe_lshift_func_int8_t_s_u(0x8BL, (l_202 != ((*l_204) = g_203)))))));
                    if (p_95)
                        break;
                    for (g_104 = 0; (g_104 <= 0); g_104 += 1)
                    {
                        (*l_183) = l_206[2];

                        ;
                        (*l_183) = (*l_183);
                        (*l_183) = &l_189;

                        ;
                    }
                }

                ;
                if (p_95)
                {
                    unsigned short l_216 = 0x0611L;
                    int l_247 = (-4L);
                    for (g_104 = 17; (g_104 > (-17)); --g_104)
                    {
                        (*l_183) = l_209;
                    }

                    ;
                    l_209 = (*g_171);
                    for (g_104 = (-10); (g_104 > (-23)); g_104--)
                    {
                        unsigned char *l_223 = &l_205[2][2][4];
                        unsigned *l_225 = (void*)0;
                        unsigned *l_226[7][7][5] = {{{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}, {{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}, {{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}, {{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}, {{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}, {{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}, {{&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}, {&g_45[8][1][0], &g_45[4][0][0], &g_45[8][1][0], &g_45[3][7][2], &g_45[9][2][1]}}};
                        int *l_231[2];
                        short *l_245 = (void*)0;
                        short *l_246[9][10] = {{&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}, {&g_99[0], &g_99[2], &g_99[2], &g_99[3], &g_99[0], &g_99[0], &g_99[0], &g_99[0], &g_99[3], &g_99[2]}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_231[i] = &g_229;
                        (*g_228) = (safe_div_func_uint32_t_u_u((l_227[2][2] = ((safe_sub_func_int32_t_s_s(p_95, (((l_216 == (p_95 || (p_95 || (safe_mod_func_uint32_t_u_u((((*g_203) & (safe_sub_func_uint16_t_u_u((((*l_223) = (safe_lshift_func_uint16_t_u_u(p_95, 3))) == p_95), 1L))) <= l_224), (*g_170)))))) > g_99[4]) && p_95))) == p_95)), (*l_209)));
                        l_232 = g_230[2][0][7];
                        l_247 = (((g_99[0] = (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s(((safe_add_func_int8_t_s_s((*l_209), ((*l_209) <= ((**g_171) && ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((g_99[5] ^ (*l_209)) == (((p_95 != g_149) < 0x496EL) >= p_95)), 6)), (*g_228))) < p_95))))) || (**l_183)))), g_2)))) && g_229), g_229))) == (*g_151)) || 0x8416L);
                    }
                    if (p_95)
                    {
                        (*g_249) = (*g_169);
                        (*l_183) = (*g_171);
                        (*l_183) = (*g_171);
                        if ((*l_209))
                            break;
                    }
                    else
                    {
                        unsigned l_250 = 0x00602DEBL;
                        return l_250;



                    }
                }
                else
                {
                    return p_95;



                }

                ;
                if ((((l_209 != (void*)0) ^ p_95) && ((*g_151) = ((-7L) && ((((p_95 != (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*l_262) = (l_259 & ((l_260 = (void*)0) == (void*)0))), 7)), l_224)), 0xA9D7D5A0L))) & (**g_112)) ^ l_263) | (*l_209))))))
                {
                    return l_128;



                }
                else
                {
                    const unsigned **l_270 = (void*)0;
                    int *l_271 = &l_189;
                    short **l_274 = &l_261;
                    for (l_224 = 13; (l_224 < 57); l_224++)
                    {
                        (*l_183) = &l_232;

                        ;
                    }
                    if (((safe_sub_func_int32_t_s_s(0xC7A836CBL, 0x5B87094CL)) >= g_99[0]))
                    {
                        l_270 = l_268;

                        ;
                        return (**g_112);



                    }
                    else
                    {
                        (*l_183) = (void*)0;

                        ;
                        (*l_183) = l_271;

                        ;
                        (*l_183) = &l_232;

                        ;
                    }

                    ;
                    for (l_128 = (-2); (l_128 >= 42); l_128++)
                    {
                        (*l_183) = &l_232;
                    }
                    l_227[5][2] = (((*l_274) = l_148) != l_275);

                    ;
                }

                ;
                ;
            }

            ;
            ;
            ;
            return l_276;



        }
    }

    ;
    ;
    ;
    ;
    return p_95;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_43[i][j], "g_43[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_45[i][j][k], "g_45[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_56[i][j][k], "g_56[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_230[i][j][k], "g_230[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_312[i][j][k], "g_312[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_320[i], "g_320[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_355[i], "g_355[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_485, "g_485", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_606[i][j], "g_606[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1028[i][j], "g_1028[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1040, "g_1040", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1041[i][j][k], "g_1041[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1048, "g_1048", print_hash_value);
    transparent_crc(g_1049, "g_1049", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1050[i], "g_1050[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1051[i][j], "g_1051[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1052, "g_1052", print_hash_value);
    transparent_crc(g_1053, "g_1053", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1060[i], "g_1060[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1063[i][j][k], "g_1063[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1064, "g_1064", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1068, "g_1068", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1070[i], "g_1070[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1073[i], "g_1073[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1074, "g_1074", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    transparent_crc(g_1077, "g_1077", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1079[i][j][k], "g_1079[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1080, "g_1080", print_hash_value);
    transparent_crc(g_1081, "g_1081", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1083, "g_1083", print_hash_value);
    transparent_crc(g_1084, "g_1084", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1085[i], "g_1085[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1086, "g_1086", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1087[i], "g_1087[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1088[i][j][k], "g_1088[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1089, "g_1089", print_hash_value);
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1093, "g_1093", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1094[i][j], "g_1094[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1221, "g_1221", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
