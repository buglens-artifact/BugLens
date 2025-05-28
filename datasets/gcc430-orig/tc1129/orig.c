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


struct S0 {
   unsigned f0 : 21;
   signed f1 : 24;
   const short f2;
   signed f3 : 28;
};


static int g_3 = 0xD6887694L;
static int g_84 = (-1L);
static char g_97 = 0x31L;
static unsigned g_98 = 0x25B9E7DCL;
static int g_126 = (-1L);
static short g_136 = 0xA657L;
static unsigned g_154 = 4294967295UL;
static struct S0 g_200[7][7] = {{{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}, {{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}, {{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}, {{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}, {{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}, {{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}, {{868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}, {1004,122,6L,7727}, {868,-1059,-7L,11864}}};
static unsigned char g_219 = 255UL;
static unsigned g_237 = 4294967291UL;
static unsigned g_241 = 0xC80E76C4L;
static unsigned g_271 = 4294967295UL;
static unsigned g_301[5] = {0xBB6C139FL, 0xBB6C139FL, 0xBB6C139FL, 0xBB6C139FL, 0xBB6C139FL};
static char g_341 = 0x8CL;
static short g_398 = (-3L);
static int g_399 = 0x2DB644A8L;
static short g_423 = 0x5D07L;
static short g_425 = 2L;
static char g_426 = 3L;
static int g_427[10][4][2] = {{{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}, {{5L, 1L}, {5L, 1L}, {5L, 1L}, {5L, 1L}}};
static int g_430 = 0x56FF441DL;
static unsigned char g_432 = 0x7CL;
static char g_446[5][6][8] = {{{0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}}, {{0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}}, {{0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}}, {{0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}}, {{0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}, {0x88L, 1L, 0L, 1L, 0x88L, 1L, 0L, 1L}}};
static char g_447 = 0xB1L;
static char g_448[10][6] = {{0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}, {0x13L, 5L, 0xB5L, (-1L), 0xB9L, (-9L)}};
static unsigned short g_451 = 3UL;
static short g_521 = (-9L);
static unsigned char g_599 = 0xD2L;
static char g_649 = 4L;
static unsigned char g_714[9] = {253UL, 253UL, 2UL, 253UL, 253UL, 2UL, 253UL, 253UL, 2UL};
static unsigned g_738[3][2][1] = {{{1UL}, {1UL}}, {{1UL}, {1UL}}, {{1UL}, {1UL}}};
static unsigned char g_838 = 8UL;
static short g_851 = 1L;
static unsigned short g_853 = 0x9FC9L;
static unsigned g_969 = 4294967295UL;
static unsigned char g_1097 = 0x5DL;
static struct S0 g_1119[4] = {{819,-1659,1L,3621}, {866,-2806,-7L,1945}, {819,-1659,1L,3621}, {866,-2806,-7L,1945}};
static unsigned g_1270[3] = {0xC6061F70L, 0xC6061F70L, 0xC6061F70L};
static unsigned g_1375 = 0x479A765EL;
static const short g_1395[4][2] = {{0x4D02L, 8L}, {0x4D02L, 8L}, {0x4D02L, 8L}, {0x4D02L, 8L}};
static unsigned g_1396[8][8][1] = {{{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}, {{4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}, {4294967295UL}}};
static int g_1397 = (-8L);
static unsigned short g_1473 = 1UL;
static char g_1525 = 1L;
static char g_1551 = 0xA3L;



static char func_1(void);
static int func_4(int p_5);
static unsigned short func_12(char p_13, unsigned char p_14);
static int func_16(unsigned short p_17, const unsigned char p_18, unsigned p_19, int p_20);
static const unsigned func_22(int p_23, unsigned char p_24, unsigned p_25, unsigned p_26, unsigned p_27);
static short func_30(unsigned p_31);
static const unsigned short func_37(unsigned p_38, short p_39, struct S0 p_40);
static int func_57(unsigned p_58);
static unsigned short func_66(unsigned char p_67);
static char func_70(unsigned p_71);
static char func_1(void)
{
    unsigned l_2[6];
    int l_1131[3];
    short l_1135 = 0x1DC0L;
    unsigned l_1146 = 0xB18D2F6DL;
    int l_1147[6];
    int l_1187[3][3][5] = {{{0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}, {0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}, {0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}}, {{0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}, {0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}, {0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}}, {{0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}, {0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}, {0x8B116718L, 0x8B116718L, 0xAFE366C7L, 0x8B116718L, 0x8B116718L}}};
    short l_1199 = 8L;
    short l_1201 = 6L;
    const int l_1251 = 0L;
    unsigned char l_1536[10] = {0x90L, 0x90L, 0xDFL, 0x90L, 0x90L, 0xDFL, 0x90L, 0x90L, 0xDFL, 0x90L};
    int l_1567 = 0L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_2[i] = 0x4FDA0E60L;
    for (i = 0; i < 3; i++)
        l_1131[i] = 0x59F72F98L;
    for (i = 0; i < 6; i++)
        l_1147[i] = 0x841A1C7FL;
    for (g_3 = 0; (g_3 <= 5); g_3 += 1)
    {
        unsigned short l_15[7];
        int l_1108 = 0L;
        int i;
        for (i = 0; i < 7; i++)
            l_15[i] = 65535UL;
        l_1108 = ((l_2[4] , func_4((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((g_3 ^ (func_12(g_3, l_15[6]) & ((safe_mul_func_int8_t_s_s(((g_447 >= (l_2[0] && g_447)) > (0xD2220074L == l_15[3])), 0x7CL)) , (-1L)))), g_341)), l_2[3])) && 0x49BAL), 5)))) || g_738[0][1][0]);
        if ((safe_lshift_func_uint8_t_u_u(g_341, 7)))
        {
            int l_1111 = 0L;
            unsigned l_1118 = 0x39D307DDL;
            unsigned l_1141 = 0xB85D2E14L;
            int i;
            g_427[7][3][1] |= l_1111;
            if (((g_1097 ^= (safe_mul_func_int16_t_s_s(g_426, (l_15[6] ^ (safe_rshift_func_uint8_t_u_s((func_37(((l_2[2] <= func_57(l_2[4])) <= (((func_70(l_2[5]) , (safe_mod_func_uint8_t_u_u(func_70((l_1108 = 0x0922617DL)), 247UL))) != g_838) ^ l_1111)), l_1118, g_1119[2]) && l_2[g_3]), 3)))))) == l_2[3]))
            {
                char l_1128 = 0L;
                for (g_1097 = (-24); (g_1097 <= 55); g_1097 = safe_add_func_int8_t_s_s(g_1097, 9))
                {
                    g_1119[2].f3 = (safe_rshift_func_uint16_t_u_s(((func_30(l_2[5]) , (((func_70((((safe_mod_func_int16_t_s_s((l_15[6] , (g_427[9][2][1] > l_1128)), l_1128)) > func_66((safe_lshift_func_int8_t_s_u((((l_1131[0] <= (g_1119[2].f3 = (g_200[3][3].f1 = ((safe_lshift_func_int16_t_s_s(l_1128, 8)) != func_22(g_154, g_446[3][2][0], l_1128, g_447, l_2[2]))))) <= l_1111) || (-3L)), l_1131[0])))) || 0L)) , 0xC3F2F27AL) && 0x3FB615D5L) | 0L)) < 0xCA77L), 8));
                    if (l_1128)
                        break;
                    return l_15[6];
                }
                if (l_1128)
                    break;
            }
            else
            {
                unsigned char l_1134 = 0x60L;
                unsigned l_1138 = 2UL;
                g_200[3][3].f1 |= l_1134;
                g_427[2][1][1] = l_1135;
                l_1147[3] = func_16((((safe_sub_func_int32_t_s_s(0x887BB232L, (l_1108 , g_97))) , (((l_1138 |= (l_1131[0] ^ (g_200[3][3].f2 && 0UL))) != (safe_lshift_func_uint16_t_u_u((l_1134 | (l_1141 < ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((g_200[3][3].f3 >= 5L) == 0x80L), 3L)), 3L)) || l_15[6]))), 15))) > 0L)) , l_15[2]), l_1134, g_599, l_1146);
            }
        }
        else
        {
            int l_1153 = 0x02ACF7F8L;
            unsigned short l_1155 = 0x2B9BL;
            for (g_341 = 0; (g_341 < (-6)); g_341 = safe_sub_func_uint32_t_u_u(g_341, 4))
            {
                int l_1152 = 0xFE20E75AL;
                int l_1154 = (-2L);
                unsigned l_1160 = 0UL;
                for (g_1097 = 0; (g_1097 > 25); ++g_1097)
                {
                    int l_1158 = 0x268D210EL;
                    int l_1159[4] = {0xD7B51DD5L, 0L, 0xD7B51DD5L, 0L};
                    int i;
                    ++l_1155;
                    l_1160++;
                }
                return l_1152;
            }
            for (g_969 = 0; (g_969 <= 2); g_969 += 1)
            {
                int i;
                return l_1131[g_969];
            }
            if (l_1108)
                break;
        }
        for (g_219 = 0; (g_219 >= 50); g_219 = safe_add_func_uint8_t_u_u(g_219, 4))
        {
            const short l_1169[9][6] = {{0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}, {0x8671L, 1L, 0xCA5AL, 1L, 0x8671L, (-1L)}};
            int i, j;
            for (l_1135 = 0; (l_1135 <= (-11)); l_1135 = safe_sub_func_uint32_t_u_u(l_1135, 6))
            {
                int l_1178 = (-1L);
                g_200[3][3].f3 = (((safe_lshift_func_int8_t_s_s((l_1169[2][5] , func_66(((0xC917L == (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((-7L), (safe_add_func_uint8_t_u_u(g_851, func_70(((safe_lshift_func_int8_t_s_s(func_70((~l_1178)), 6)) ^ l_1178)))))), (safe_mod_func_int32_t_s_s(2L, 0x8510E1FFL))))) ^ 1UL))), l_1147[3])) != l_1178) > l_1178);
                g_84 = (-7L);
            }
        }
        if (l_1146)
            break;
    }
    for (g_341 = 12; (g_341 != (-18)); g_341 = safe_sub_func_uint8_t_u_u(g_341, 6))
    {
        unsigned char l_1186 = 0x2BL;
        char l_1188 = 0xD6L;
        int l_1189 = 0x76730353L;
        int l_1190[9][6] = {{0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L)}};
        int l_1200 = 0x1F77F00DL;
        int l_1203[5][8][4] = {{{1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}}, {{1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}}, {{1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}}, {{1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}}, {{1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}, {1L, 1L, 0x9B42B77DL, (-10L)}}};
        unsigned short l_1204[9] = {1UL, 1UL, 4UL, 1UL, 1UL, 4UL, 1UL, 1UL, 4UL};
        unsigned l_1230 = 0xC323A68DL;
        int i, j, k;
        if (g_271)
            break;
        for (g_98 = (-2); (g_98 == 35); g_98++)
        {
            short l_1185 = 0xF88CL;
            int l_1191 = (-1L);
            int l_1192 = 0x635BE877L;
            int l_1193 = (-5L);
            int l_1194 = 0x6514BEE8L;
            int l_1195 = 0x0F06DF69L;
            unsigned short l_1196 = 65535UL;
            int l_1202 = 0xB48E55D6L;
            unsigned l_1237 = 0x2331A843L;
            g_427[1][1][0] |= (l_1186 = ((g_451 = g_219) & l_1185));
            l_1196++;
            --l_1204[2];
            if (l_1188)
            {
                int l_1207[2];
                int l_1208 = 0x0624A4BDL;
                int l_1209 = 7L;
                int l_1210 = 0x2E747E43L;
                int l_1211[10] = {(-1L), 0x3B4941F8L, 0x45D6E44FL, 0x45D6E44FL, 0x3B4941F8L, (-1L), 0x3B4941F8L, 0x45D6E44FL, 0x45D6E44FL, 0x3B4941F8L};
                unsigned l_1212[4][10] = {{0x27225A3DL, 1UL, 6UL, 0UL, 0xDE1B6D36L, 0UL, 0xDE1B6D36L, 0UL, 6UL, 1UL}, {0x27225A3DL, 1UL, 6UL, 0UL, 0xDE1B6D36L, 0UL, 0xDE1B6D36L, 0UL, 6UL, 1UL}, {0x27225A3DL, 1UL, 6UL, 0UL, 0xDE1B6D36L, 0UL, 0xDE1B6D36L, 0UL, 6UL, 1UL}, {0x27225A3DL, 1UL, 6UL, 0UL, 0xDE1B6D36L, 0UL, 0xDE1B6D36L, 0UL, 6UL, 1UL}};
                int l_1235 = 1L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1207[i] = 0xEB61CBDAL;
                --l_1212[2][7];
                g_200[3][3].f3 = g_426;
                for (l_1195 = 0; (l_1195 < (-23)); l_1195--)
                {
                    short l_1228 = 6L;
                    unsigned l_1229 = 4294967295UL;
                    int l_1234 = 0xB8E39360L;
                    int l_1236 = 0x4A43B6D0L;
                    if (((safe_sub_func_uint8_t_u_u((func_66((l_1229 = (safe_unary_minus_func_uint32_t_u(func_70((0xC91F1977L <= ((safe_lshift_func_uint16_t_u_s(func_70((g_851 , g_969)), 14)) != (l_1196 , (g_136 = ((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_241, (safe_mul_func_int8_t_s_s(l_2[4], l_1211[4])))), ((0x76B7L > l_1228) , 0xBDFFL))) != g_126)))))))))) ^ 0x9D09L), g_426)) != 0UL))
                    {
                        unsigned l_1231 = 0x6529DF5EL;
                        g_1119[2].f3 = (l_1230 = g_714[5]);
                        ++l_1231;
                        ++l_1237;
                    }
                    else
                    {
                        return g_219;
                    }
                }
            }
            else
            {
                short l_1246 = 3L;
                for (l_1191 = 1; (l_1191 <= 4); l_1191 += 1)
                {
                    int i, j, k;
                    if (g_446[l_1191][(l_1191 + 1)][(l_1191 + 2)])
                        break;
                    for (l_1202 = 4; (l_1202 >= 0); l_1202 -= 1)
                    {
                        int i, j, k;
                        g_1119[2].f3 |= 0x7601412BL;
                        g_427[9][2][1] = ((safe_mul_func_int8_t_s_s(g_446[l_1191][(l_1202 + 1)][(l_1202 + 1)], 255UL)) , 0xC47507C5L);
                    }
                    g_427[8][3][0] &= ((l_1147[3] = ((func_66((g_446[l_1191][l_1191][(l_1191 + 1)] , func_70((safe_lshift_func_uint8_t_u_u(0xA5L, 7))))) < ((~((g_200[3][3].f3 = ((g_451 |= (g_301[l_1191] | ((g_97 = (((safe_lshift_func_uint8_t_u_s(g_301[l_1191], l_1190[7][2])) || l_1195) & l_1246)) | l_1146))) <= g_446[l_1191][l_1191][(l_1191 + 1)])) || 1L)) <= l_1246)) && 8UL)) > g_154);
                }
                l_1190[5][3] &= (safe_rshift_func_int8_t_s_u(0L, (l_1204[2] != ((!g_446[1][4][1]) | (safe_mod_func_int32_t_s_s(l_1251, l_1187[2][0][4]))))));
            }
        }
    }
    if (func_4((((safe_mod_func_uint16_t_u_u(l_1199, (safe_mod_func_uint8_t_u_u((g_271 , ((((-1L) & ((g_451 <= (g_446[1][5][1] == g_738[0][1][0])) , (safe_add_func_uint8_t_u_u((l_1131[2] >= l_1147[3]), (l_1187[2][0][4] = (safe_rshift_func_int16_t_s_s(g_97, 4))))))) <= (-7L)) ^ 0xFE4FL)), g_241)))) < 0x82L) < g_427[9][2][1])))
    {
        g_1119[2].f1 = 0xABAC3632L;
    }
    else
    {
        const unsigned char l_1262[8] = {255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL};
        int l_1285 = 0x6388C95BL;
        int l_1289 = 0L;
        const char l_1322 = 0xA6L;
        int l_1435 = 0xD6C412B9L;
        struct S0 l_1436 = {214,2992,0x02E2L,-1085};
        char l_1482 = (-8L);
        unsigned short l_1492 = 0x62CFL;
        int l_1504 = 4L;
        short l_1514 = 0x10C8L;
        short l_1515 = 0L;
        char l_1535 = (-3L);
        char l_1540 = 0x27L;
        int i;
        g_84 = (safe_rshift_func_int8_t_s_s(((l_1262[6] | 0x189EL) != (g_200[3][3] , g_451)), 1));
        if (func_66(l_1262[5]))
        {
            unsigned short l_1271 = 0x793DL;
            int l_1272[10][8] = {{1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}, {1L, 5L, 1L, (-8L), 5L, (-1L), 0x8EFE8851L, (-1L)}};
            char l_1309 = 0x64L;
            unsigned l_1328 = 0UL;
            short l_1353 = 0L;
            struct S0 l_1401 = {442,-3776,0L,-2875};
            int l_1443 = 0x2CD52529L;
            unsigned l_1470 = 6UL;
            int i, j;
            for (g_649 = 7; (g_649 <= (-29)); --g_649)
            {
                unsigned l_1269 = 4294967293UL;
                short l_1299[8] = {(-2L), (-2L), 1L, (-2L), (-2L), 1L, (-2L), (-2L)};
                int i;
                g_427[9][2][1] = ((safe_mul_func_int16_t_s_s(g_447, (safe_mod_func_int32_t_s_s(0x51FDFD6DL, ((((l_1269 ^= g_447) >= g_1270[0]) >= 0x757CL) , g_851))))) & l_1271);
                for (g_97 = 0; (g_97 <= 4); g_97 += 1)
                {
                    int l_1294 = 0x2F187663L;
                    g_1119[2].f1 = l_1269;
                    l_1187[0][0][0] |= ((func_66((--g_838)) == (safe_sub_func_uint16_t_u_u((l_1147[0] = 0x1946L), ((((-8L) ^ g_447) || func_66((g_1097 ^= ((safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(0xACL, (safe_rshift_func_uint16_t_u_s((g_451 = l_1271), 9)))) | ((-2L) == ((safe_rshift_func_int16_t_s_s(g_427[3][0][1], (l_1285 = ((l_1262[7] >= g_714[5]) | g_1119[2].f1)))) & 0xDFL))) < g_1119[2].f2), g_427[8][0][1])) , l_1251)))) && l_1272[4][5])))) , g_97);
                    for (g_341 = 4; (g_341 >= 1); g_341 -= 1)
                    {
                        unsigned l_1286 = 4294967295UL;
                        int i, j, k;
                        l_1286++;
                        g_427[9][2][1] ^= ((g_425 ^= (((g_446[g_341][g_341][(g_97 + 2)] , ((((l_1289 = l_1269) , ((safe_lshift_func_int8_t_s_s((g_1119[2].f2 | (((g_446[g_97][g_97][(g_97 + 3)] = (((safe_mul_func_uint8_t_u_u(0x2BL, (g_136 && (((g_1270[1] < 0xE58A9532L) || ((g_1119[2].f3 &= g_448[4][5]) < l_1262[6])) >= l_1294)))) < 0x59L) == (-5L))) || 0x37L) || g_521)), g_136)) , g_432)) , 0UL) && l_1286)) <= l_1294) ^ g_237)) , l_1269);
                    }
                }
                l_1272[1][3] = (l_1262[2] == ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(g_448[4][5], 9L)), func_57(l_1299[4]))) & g_714[1]));
            }
            if ((safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u((g_1119[2] , l_1271), ((g_451 = ((l_1147[3] = g_341) == ((l_1201 < l_1272[1][3]) <= (((~g_738[0][1][0]) >= ((safe_lshift_func_int8_t_s_s(l_1187[1][1][0], ((l_1131[0] , (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((0x2A5AL == 0x8046L) & l_1187[2][0][4]), (-1L))), 4294967287UL))) != l_1272[9][4]))) , g_969)) && l_1309)))) && 0x3D71L))))))
            {
                unsigned l_1325 = 4294967295UL;
                int l_1326 = (-1L);
                int l_1327 = (-5L);
                g_427[2][0][1] = (l_1327 |= (safe_mul_func_int8_t_s_s((g_432 || ((g_200[3][3].f1 = l_1285) & 0xE140306DL)), (((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((g_426 & ((safe_mul_func_uint16_t_u_u((1UL | (g_446[0][2][7] = ((l_1309 >= (l_1147[3] = func_70((l_1325 = (1L ^ (l_1322 > (safe_lshift_func_uint8_t_u_s(0xDEL, g_1119[2].f2)))))))) < l_1285))), g_84)) != 0L)), 65528UL)) == l_1326), l_1326)) && l_1326), 0xC7L)) , 0xDBE8L) < g_200[3][3].f3) && 0x61L) | g_427[9][2][1]))));
            }
            else
            {
                unsigned short l_1329 = 0x69E4L;
                unsigned l_1348[9] = {8UL, 0x2126677AL, 8UL, 0x2126677AL, 8UL, 0x2126677AL, 8UL, 0x2126677AL, 8UL};
                int l_1356 = 0x03EB4F87L;
                int l_1376 = 0x09192A60L;
                unsigned char l_1400 = 0xC8L;
                char l_1431[10] = {1L, 0x52L, 1L, 0x52L, 1L, 0x52L, 1L, 0x52L, 1L, 0x52L};
                unsigned short l_1432 = 0UL;
                int i;
                if (l_1271)
                {
                    l_1328 = g_599;
                    l_1329 = l_1187[2][0][4];
                }
                else
                {
                    unsigned short l_1349[1];
                    int l_1359 = 1L;
                    int l_1360[4][8] = {{0L, 0L, 0x3F980F75L, 1L, 1L, 0x9DCF1C4FL, 1L, 1L}, {0L, 0L, 0x3F980F75L, 1L, 1L, 0x9DCF1C4FL, 1L, 1L}, {0L, 0L, 0x3F980F75L, 1L, 1L, 0x9DCF1C4FL, 1L, 1L}, {0L, 0L, 0x3F980F75L, 1L, 1L, 0x9DCF1C4FL, 1L, 1L}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1349[i] = 4UL;
                    for (g_430 = (-1); (g_430 <= 23); g_430++)
                    {
                        short l_1350[4][5] = {{0xB4F8L, 0x1E4CL, (-1L), (-1L), 0x1E4CL}, {0xB4F8L, 0x1E4CL, (-1L), (-1L), 0x1E4CL}, {0xB4F8L, 0x1E4CL, (-1L), (-1L), 0x1E4CL}, {0xB4F8L, 0x1E4CL, (-1L), (-1L), 0x1E4CL}};
                        int i, j;
                        g_427[2][0][0] = (safe_mod_func_uint16_t_u_u(((l_1329 == ((safe_mod_func_uint8_t_u_u(g_714[1], l_1272[1][3])) | l_1329)) || (safe_mod_func_int8_t_s_s((l_1251 != (safe_lshift_func_uint16_t_u_s(l_1146, (func_16((safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_430, (safe_mul_func_uint8_t_u_u(((l_1348[4] , ((g_430 , 4294967295UL) ^ g_126)) | l_1271), l_1329)))), l_1349[0])) == 0x2E5FL) > 1UL), (-1L))), l_1348[4], l_1348[4], l_1328) , l_1350[3][2])))), (-5L)))), l_1348[4]));
                        g_200[3][3].f1 &= (l_1262[6] & (((g_98 = g_851) <= ((0x3B4F47F1L || ((g_1270[0] = 0xE0175A67L) && ((l_1285 = g_1270[0]) <= (g_425 = ((((safe_sub_func_uint8_t_u_u((((g_649 = l_1353) > ((func_70(l_1348[4]) , (safe_mod_func_uint32_t_u_u((g_599 > g_1270[1]), (-2L)))) , l_1262[4])) == 0x4EF9L), g_714[1])) && g_1097) <= (-10L)) >= g_398))))) , g_200[3][3].f0)) , g_1119[2].f1));
                        l_1356 |= g_1119[2].f2;
                    }
                    for (l_1289 = 0; (l_1289 == 15); l_1289++)
                    {
                        int l_1361[8] = {(-1L), 0x2D71EC4CL, (-1L), 0x2D71EC4CL, (-1L), 0x2D71EC4CL, (-1L), 0x2D71EC4CL};
                        unsigned short l_1362 = 0x641FL;
                        int i;
                        l_1362--;
                        g_200[3][3].f1 = (safe_mod_func_int16_t_s_s((l_1361[0] >= ((-1L) > g_599)), (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_1289, 0xA64FL)), ((g_649 , (-7L)) > l_1328)))));
                        if (l_1349[0])
                            continue;
                        l_1285 &= 4L;
                    }
                    for (g_3 = 16; (g_3 > (-7)); g_3--)
                    {
                        char l_1394 = (-6L);
                        g_1119[2].f1 = func_12(l_1359, g_84);
                        g_427[9][1][0] = func_22((safe_lshift_func_uint8_t_u_u(l_1349[0], 7)), (l_1135 , l_1356), g_1119[2].f2, (g_301[0] = func_12(g_398, (g_838 ^= g_427[6][3][0]))), (l_1376 = g_1375));
                        g_1397 ^= func_16(((((((g_838 = (safe_add_func_uint8_t_u_u(g_451, ((l_1360[2][1] = (safe_unary_minus_func_int16_t_s(func_37(((0x7AC92825L == (((((safe_sub_func_uint8_t_u_u(6UL, g_1375)) != (safe_sub_func_uint32_t_u_u(l_1147[2], l_1272[1][3]))) && (g_853 = (safe_add_func_int32_t_s_s(g_200[3][3].f1, (func_66((((safe_sub_func_uint8_t_u_u((l_1285 = (safe_sub_func_uint8_t_u_u((l_1329 >= (safe_mod_func_int32_t_s_s(((l_1394 >= g_1395[0][1]) , g_1270[1]), g_1396[4][6][0]))), 0x86L))), l_1348[2])) || 0L) | 0xD73CL)) >= g_1119[2].f3))))) , g_430) == 0x64L)) > l_1394), l_1289, g_200[3][3])))) > l_1272[1][3])))) > 0x74L) >= g_423) , g_237) || l_1376) | 0xDC191935L), g_398, g_1396[6][2][0], g_1119[2].f1);
                    }
                }
                for (g_447 = 16; (g_447 < (-2)); g_447 = safe_sub_func_uint8_t_u_u(g_447, 4))
                {
                    unsigned char l_1419 = 0x97L;
                    int l_1425 = 3L;
                    int l_1429 = 0x244946D6L;
                    int l_1430 = (-9L);
                    if (g_838)
                    {
                        unsigned char l_1412 = 253UL;
                        int l_1424 = 0x4CED6792L;
                        l_1187[2][0][4] &= ((l_1400 || (((l_1401 , ((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(0x9EL, 0)) | func_22((safe_add_func_uint16_t_u_u(l_1356, (g_136 |= l_1201))), l_1147[1], (l_1251 , (safe_add_func_uint8_t_u_u((((~l_1251) | func_66(g_126)) >= l_1262[1]), g_1395[0][1]))), g_738[0][1][0], g_714[1])), 0x63E21468L)) | 9L)) == 4UL) , l_1309)) , g_969);
                        l_1425 = ((safe_sub_func_uint16_t_u_u((l_1412 |= 65535UL), (safe_lshift_func_int16_t_s_u(((5UL || ((safe_rshift_func_uint8_t_u_s((func_30((g_301[1] = g_448[1][0])) < (safe_mul_func_int8_t_s_s(l_1419, g_1395[0][1]))), 7)) ^ (((safe_mod_func_int8_t_s_s(g_1397, l_1424)) & ((l_1135 , 0x8FL) , g_1097)) >= 0UL))) & g_1396[4][5][0]), 2)))) <= g_1270[1]);
                    }
                    else
                    {
                        unsigned short l_1426 = 0x5DDCL;
                        --l_1426;
                    }
                    --l_1432;
                    if (func_37(l_1435, l_1146, l_1436))
                    {
                        unsigned short l_1448 = 0UL;
                        int l_1449 = (-9L);
                        if (l_1356)
                            break;
                        l_1430 = g_427[9][2][1];
                        l_1187[2][0][4] = (g_1270[0] > (l_1329 == (safe_sub_func_int16_t_s_s((((~(g_599 & 0xA78B2791L)) ^ (((func_37(l_1353, ((l_1449 = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_1443, 0)), ((safe_rshift_func_int16_t_s_s((l_1436.f3 || (g_200[1][6] , (safe_mul_func_uint8_t_u_u((l_1425 = (l_1272[8][7] &= ((l_1448 = 6UL) != 0x701DL))), l_1449)))), l_1436.f2)) , l_1199)))) , l_1435), l_1401) < l_1348[8]) != 0L) , l_1401.f3)) && g_521), 0x8F5EL))));
                        return l_1436.f3;
                    }
                    else
                    {
                        int l_1454[4][1][3] = {{{0xE4F5C376L, (-1L), 0xE4F5C376L}}, {{0xE4F5C376L, (-1L), 0xE4F5C376L}}, {{0xE4F5C376L, (-1L), 0xE4F5C376L}}, {{0xE4F5C376L, (-1L), 0xE4F5C376L}}};
                        int l_1467 = 1L;
                        int i, j, k;
                        g_1119[2].f3 = (safe_rshift_func_int16_t_s_s((((g_241 = (g_200[3][3].f1 == (((l_1272[1][3] = (l_1454[2][0][1] > l_1436.f2)) && g_738[1][1][0]) || (func_70((l_1436.f3 = g_200[3][3].f3)) == ((func_70((safe_add_func_int32_t_s_s((g_427[9][2][1] &= l_1131[0]), ((safe_rshift_func_int8_t_s_u(0xA8L, l_1285)) ^ l_1431[3])))) || l_1348[4]) & 0L))))) , (-2L)) == l_1401.f2), l_1435));
                        l_1356 = ((((safe_mul_func_int16_t_s_s(((l_1262[6] > (safe_mul_func_int8_t_s_s((~(safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((g_1395[3][1] > ((++g_853) < ((g_1119[2].f1 ^ l_1262[6]) | 0xFCBDL))), func_70((g_97 , (g_738[0][1][0] = (g_1375 ^= (l_1470 | func_12(l_1435, g_200[3][3].f2)))))))) <= g_430), 0xC069L))), g_1395[0][1]))) ^ g_1097), g_430)) == 0L) >= l_1199) || l_1285);
                        if (g_1375)
                            break;
                    }
                }
            }
        }
        else
        {
            short l_1471 = 0x3D42L;
            int l_1472 = 0xE13DFA3EL;
            short l_1485 = 1L;
            int l_1494 = 1L;
            int l_1496 = 0L;
            int l_1499 = 0x034173EDL;
            int l_1500 = (-9L);
            unsigned l_1501 = 0x8BD8FCDBL;
            unsigned short l_1534 = 0x316DL;
            unsigned l_1547 = 1UL;
            g_1473--;
            for (g_1397 = 0; (g_1397 < 0); g_1397 = safe_add_func_int16_t_s_s(g_1397, 7))
            {
                unsigned l_1488 = 0UL;
                int l_1489[5][4] = {{0x444FBF93L, 0x74984FA5L, 0x444FBF93L, 0x74984FA5L}, {0x444FBF93L, 0x74984FA5L, 0x444FBF93L, 0x74984FA5L}, {0x444FBF93L, 0x74984FA5L, 0x444FBF93L, 0x74984FA5L}, {0x444FBF93L, 0x74984FA5L, 0x444FBF93L, 0x74984FA5L}, {0x444FBF93L, 0x74984FA5L, 0x444FBF93L, 0x74984FA5L}};
                int i, j;
                g_427[9][2][1] = g_241;
                g_1119[2].f1 &= (((l_1489[1][2] = func_57((safe_add_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((l_1485 = func_70((++g_154))), (safe_rshift_func_uint8_t_u_s((0xC23CL ^ (~l_1147[5])), l_1488)))) , 0x358BL), l_1262[6])))) >= l_1488) != ((safe_add_func_uint32_t_u_u(g_969, l_1488)) | l_1251));
                g_200[3][3].f1 = g_126;
                g_3 = (~l_1492);
            }
            if ((~l_1485))
            {
                char l_1493[7] = {0x36L, 0L, 0x36L, 0L, 0x36L, 0L, 0x36L};
                char l_1495 = 0L;
                int l_1497 = 0x43D220B2L;
                int l_1498 = 6L;
                unsigned l_1513[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1513[i] = 0xBDCC9EA7L;
                l_1501++;
                if ((l_1498 = ((((func_70(g_1395[0][1]) && (g_1396[4][2][0] = ((func_57(g_425) != l_1199) && 4294967290UL))) , (0x72573E1DL && (l_1472 , ((g_1270[1]--) , (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(0x5FL, 7)), l_1513[1])), l_1514)))))) < g_969) || l_1515)))
                {
                    g_200[3][3].f3 = l_1495;
                    for (g_237 = 0; (g_237 <= 0); g_237 += 1)
                    {
                        int i;
                        g_1119[2].f3 = (safe_lshift_func_int8_t_s_s((g_1270[(g_237 + 1)] , g_738[0][1][0]), (g_446[0][2][1] = (g_447 |= ((8L > 0UL) || (((255UL == g_446[0][2][7]) < (g_448[9][2] & func_66(g_1119[2].f3))) & 0UL))))));
                    }
                    for (g_599 = 0; (g_599 <= 2); g_599 += 1)
                    {
                        int i;
                        return g_1270[g_599];
                    }
                }
                else
                {
                    unsigned short l_1520 = 0x7912L;
                    int l_1548 = 0L;
                    ++l_1520;
                    for (l_1501 = 23; (l_1501 > 12); --l_1501)
                    {
                        g_1525 = g_427[0][2][0];
                        g_3 = g_84;
                    }
                    if (((func_37(l_1498, func_57(g_1119[2].f2), g_1119[0]) == (safe_rshift_func_uint8_t_u_s((((((g_423 | g_446[0][2][7]) ^ (((g_714[2] = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((1L < (safe_mul_func_int8_t_s_s(l_1534, 0xE6L))) , l_1436.f0), g_432)), g_430))) == g_3) == g_446[0][2][7])) , g_426) ^ l_1147[3]) >= l_1535), l_1536[8]))) ^ l_1497))
                    {
                        return g_219;
                    }
                    else
                    {
                        int l_1537 = 0L;
                        l_1537 = (g_3 = l_1471);
                        l_1548 = (safe_add_func_uint16_t_u_u((g_97 , l_1285), (0L || ((func_4(((l_1540 , func_4((l_1147[3] ^= func_70(l_1534)))) ^ (((safe_lshift_func_uint16_t_u_s(g_398, ((func_70((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((0x04B6L | l_1547) , l_1520), l_1536[8])), l_1535))) , g_1395[0][1]) > g_241))) == g_1119[2].f2) & 0x7D06L))) ^ g_1375) | 3L))));
                    }
                }
            }
            else
            {
                unsigned short l_1552 = 5UL;
                unsigned l_1572 = 0x39487D66L;
                unsigned l_1583 = 2UL;
                int l_1584 = 4L;
                for (g_426 = 0; (g_426 <= (-11)); g_426 = safe_sub_func_int16_t_s_s(g_426, 1))
                {
                    ++l_1552;
                }
                g_1119[2].f3 = ((safe_sub_func_int16_t_s_s((g_398 |= (((safe_lshift_func_int8_t_s_s(g_3, 7)) ^ ((g_432 , (safe_sub_func_int16_t_s_s(l_1501, (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(g_838, (((safe_add_func_uint8_t_u_u((((l_1567 > (((g_301[2] | (g_425 = (safe_lshift_func_uint16_t_u_s((g_1473 = (safe_mod_func_uint16_t_u_u((l_1285 , (((l_1504 = (g_853 = ((((l_1472 && ((func_66(g_851) || 0xF3967739L) , 0xD2L)) <= l_1552) , (-10L)) > l_1572))) ^ g_301[1]) , l_1534)), g_271))), 13)))) ^ 0L) >= l_1131[0])) == g_136) ^ l_1547), g_219)) && g_448[6][0]) || g_521))) > g_521), 6))))) & 0xB5DBL)) < l_1552)), g_1270[0])) & g_427[3][0][0]);
                l_1584 |= func_22((+(func_37(l_1572, l_1436.f2, g_1119[2]) | 0x27EDL)), g_1097, (l_1499 > (safe_rshift_func_int16_t_s_s(((g_1396[4][3][0] && (safe_rshift_func_int16_t_s_u(((l_1436.f3 = (safe_sub_func_uint32_t_u_u(((func_70((safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_s(((g_1119[2].f0 > g_423) , 0x8CL), l_1500)) <= 6UL) , l_1572) > 0xD2BBA2A7L), 7))) >= 0x3D4FL) <= g_446[3][3][5]), g_1397))) < 1UL), 5))) || g_446[0][2][7]), l_1583))), g_1396[4][6][0], l_1131[2]);
            }
        }
    }
    return g_423;
}







static int func_4(int p_5)
{
    short l_746 = 8L;
    int l_747 = 0L;
    unsigned short l_756[3];
    unsigned l_763[8][5] = {{4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}, {4294967294UL, 0UL, 4294967295UL, 0UL, 4294967294UL}};
    int l_814 = 0xA406A38CL;
    int l_818 = 0L;
    char l_850 = 0xB4L;
    unsigned l_864[8];
    int l_867 = (-2L);
    char l_890 = 0x01L;
    int l_965[1][8] = {{(-3L), (-10L), (-3L), (-10L), (-3L), (-10L), (-3L), (-10L)}};
    unsigned l_1016 = 0x1D761AECL;
    unsigned l_1043[3];
    char l_1094[9][9] = {{0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}, {0x4BL, 1L, 0x7FL, 1L, 0x4BL, 1L, 0x7FL, 1L, 0x4BL}};
    struct S0 l_1102 = {152,-1170,-1L,3373};
    int i, j;
    for (i = 0; i < 3; i++)
        l_756[i] = 0xC5EDL;
    for (i = 0; i < 8; i++)
        l_864[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_1043[i] = 0x38C86F29L;
    l_747 |= (p_5 != l_746);
    for (g_154 = 0; (g_154 <= 9); ++g_154)
    {
        int l_754 = (-9L);
        int l_755 = 0x55BD0DEFL;
        int l_758 = 1L;
        unsigned char l_760 = 0xE6L;
        int l_813[1];
        unsigned char l_825 = 1UL;
        short l_891 = 0xE76EL;
        unsigned l_1013[2];
        short l_1096 = (-5L);
        unsigned short l_1107[2];
        int i;
        for (i = 0; i < 1; i++)
            l_813[i] = 0x3EA3E1B9L;
        for (i = 0; i < 2; i++)
            l_1013[i] = 0xDB2A2CE3L;
        for (i = 0; i < 2; i++)
            l_1107[i] = 0x3367L;
        for (g_649 = 0; (g_649 >= 21); g_649++)
        {
            unsigned l_757[8][6] = {{0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}, {0UL, 9UL, 1UL, 9UL, 0UL, 4294967295UL}};
            int l_770 = 0x11170924L;
            unsigned l_792 = 6UL;
            int l_817[9] = {0x7305CE43L, 0L, 0x7305CE43L, 0L, 0x7305CE43L, 0L, 0x7305CE43L, 0L, 0x7305CE43L};
            int i, j;
            if (((+1L) >= ((safe_mul_func_int8_t_s_s((((l_747 && (0xB08DL != (l_754 , 0x3837L))) || g_430) , (((l_755 = g_219) , (g_200[0][0] , (+(l_757[1][5] = (func_66(l_756[2]) , 4294967290UL))))) & (-1L))), 255UL)) == 1UL)))
            {
                unsigned l_759[3][9] = {{0xB392889AL, 4294967295UL, 0xB85D08D4L, 1UL, 1UL, 0x91C71FBDL, 1UL, 1UL, 0xB85D08D4L}, {0xB392889AL, 4294967295UL, 0xB85D08D4L, 1UL, 1UL, 0x91C71FBDL, 1UL, 1UL, 0xB85D08D4L}, {0xB392889AL, 4294967295UL, 0xB85D08D4L, 1UL, 1UL, 0x91C71FBDL, 1UL, 1UL, 0xB85D08D4L}};
                int i, j;
                g_200[3][3].f1 = func_66(g_341);
                l_747 |= (l_757[1][5] , ((((l_755 >= (l_759[0][4] = (l_758 = g_738[0][1][0]))) > l_756[2]) != func_70((l_760 &= (g_200[3][3] , g_126)))) != p_5));
            }
            else
            {
                unsigned l_771 = 4294967294UL;
                int l_782 = 0xC9C0ED55L;
                int l_819 = 0x65F88258L;
                char l_820 = 0x9EL;
                int l_822 = (-7L);
                int l_824[5] = {0L, 0L, 0L, 0L, 0L};
                int i;
                p_5 = (l_747 = (g_84 = ((func_66((!(++g_432))) , (l_763[0][2] < (safe_mul_func_uint8_t_u_u(func_66((safe_add_func_int32_t_s_s((p_5 , 0xA3F54090L), g_649))), l_763[0][2])))) & ((func_66((safe_lshift_func_int8_t_s_s((l_770 &= p_5), 4))) <= l_771) != p_5))));
                if ((l_755 = (((((l_770 &= (g_446[0][2][7] >= ((g_427[9][2][1] = (0x28L ^ (((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((((safe_mul_func_int8_t_s_s(g_446[0][2][7], p_5)) || (g_219 <= p_5)) <= (g_200[3][3].f0 , (safe_mod_func_uint8_t_u_u((((l_758 = (g_200[3][3].f3 = l_758)) < (-10L)) < p_5), 0xC3L)))) || 0x91L), p_5)), 4)) & l_756[1]) > 255UL))) && 0x0F2511EDL))) >= g_154) >= l_754) ^ 0x793D96A8L) , 0L)))
                {
                    unsigned l_783 = 0UL;
                    int l_805 = 0x3B842B0DL;
                    int l_807 = 1L;
                    for (g_430 = 4; (g_430 >= 1); g_430 -= 1)
                    {
                        int i, j;
                        l_783--;
                        l_747 |= 0x00ECBE2BL;
                        g_200[3][3].f1 &= ((safe_add_func_uint16_t_u_u((l_763[(g_430 + 1)][g_430] != ((((0x53A4L < l_763[(g_430 + 3)][g_430]) ^ (g_448[4][5] >= ((((p_5 || (l_754 && (safe_sub_func_int8_t_s_s(((g_200[3][3].f3 , p_5) && (safe_sub_func_uint16_t_u_u((~g_200[3][3].f0), p_5))), g_154)))) > 0x21L) < p_5) || p_5))) , g_599) == p_5)), g_448[4][5])) < 0x20CFD685L);
                        --l_792;
                    }
                    if (g_427[1][2][1])
                    {
                        if (g_200[3][3].f3)
                            break;
                        if (p_5)
                            continue;
                        g_427[6][1][0] &= 0L;
                    }
                    else
                    {
                        unsigned l_806 = 0xC664CE8BL;
                        l_807 &= ((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((g_714[0]++) , ((safe_unary_minus_func_int32_t_s(p_5)) , (p_5 < (func_66(g_200[3][3].f1) , ((p_5 , ((safe_mod_func_int16_t_s_s((g_399 <= ((((l_805 = (0L && (safe_rshift_func_int8_t_s_u((p_5 ^ g_423), 4)))) || g_271) >= g_399) && l_806)), (-2L))) , g_3)) <= g_446[0][2][7]))))))), 1L)) > 0x197ED221L);
                    }
                    if (g_447)
                        break;
                    for (g_521 = (-13); (g_521 >= (-26)); g_521--)
                    {
                        unsigned l_810[4][9] = {{0xE82FF33CL, 0UL, 0x2D130F7BL, 4294967289UL, 1UL, 0xFDAA821BL, 3UL, 0x675C2F4DL, 0x2D130F7BL}, {0xE82FF33CL, 0UL, 0x2D130F7BL, 4294967289UL, 1UL, 0xFDAA821BL, 3UL, 0x675C2F4DL, 0x2D130F7BL}, {0xE82FF33CL, 0UL, 0x2D130F7BL, 4294967289UL, 1UL, 0xFDAA821BL, 3UL, 0x675C2F4DL, 0x2D130F7BL}, {0xE82FF33CL, 0UL, 0x2D130F7BL, 4294967289UL, 1UL, 0xFDAA821BL, 3UL, 0x675C2F4DL, 0x2D130F7BL}};
                        int i, j;
                        l_810[0][4]++;
                        if (l_782)
                            continue;
                    }
                }
                else
                {
                    char l_815 = (-2L);
                    int l_816 = (-9L);
                    int l_821 = 0x64925D54L;
                    int l_823 = 1L;
                    ++l_825;
                    l_823 = (safe_rshift_func_int8_t_s_s((((l_747 & (~0x3EL)) < func_70((p_5 ^ p_5))) , (((g_447 = 1L) < 0x61L) , g_241)), p_5));
                }
            }
        }
        for (g_451 = 0; (g_451 <= 0); g_451 += 1)
        {
            int l_830 = 0xB71D4AA0L;
            int l_839 = (-6L);
            int l_852 = (-1L);
            int l_964 = 0x55D9059FL;
            int l_967 = 0x3CAEF687L;
            int l_968 = 0L;
            unsigned l_1071 = 1UL;
            struct S0 l_1081 = {387,214,-1L,-220};
            for (p_5 = 3; (p_5 >= 0); p_5 -= 1)
            {
                unsigned l_831 = 8UL;
                int l_854 = 7L;
                int l_865[8][1] = {{0xB75D4052L}, {0xB75D4052L}, {0xB75D4052L}, {0xB75D4052L}, {0xB75D4052L}, {0xB75D4052L}, {0xB75D4052L}, {0xB75D4052L}};
                int i, j, k;
                ++l_831;
                l_813[0] = (0x9FACED20L >= (safe_sub_func_int32_t_s_s(g_738[(g_451 + 2)][g_451][g_451], (g_301[g_451] , (0x243FD99EL >= g_448[4][5])))));
                l_854 = ((safe_mul_func_uint16_t_u_u((l_839 = (g_838 = func_70(g_301[1]))), (safe_mod_func_int8_t_s_s((g_448[5][1] |= p_5), (((l_852 = (g_851 = func_70(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((+l_763[0][2]) > (func_66(g_738[(g_451 + 2)][g_451][g_451]) >= (safe_mod_func_int16_t_s_s(p_5, (g_599 && p_5))))), l_830)) == g_200[3][3].f2), l_830)), p_5)) == l_850)))) & (-1L)) & 4294967295UL))))) || g_853);
                for (g_126 = 0; (g_126 >= 0); g_126 -= 1)
                {
                    unsigned short l_863 = 65526UL;
                    int l_866 = 0L;
                    int i, j, k;
                    l_747 = p_5;
                    l_866 &= (func_66(func_66(p_5)) > (((l_814 = (g_427[7][2][0] <= (9UL >= (((safe_rshift_func_int8_t_s_u((g_301[g_451] | ((l_865[4][0] &= ((func_70((g_738[(g_451 + 2)][g_451][g_126] = ((l_839 & func_66(((((((l_818 |= (((safe_mod_func_uint32_t_u_u(g_425, ((g_200[3][3].f3 = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((-10L), 11)), l_863))) || g_423))) , l_864[0]) , g_398)) , 0x72L) , 0x52AD50BDL) , p_5) >= 0x3766L) < l_854))) , 0xC1502364L))) | l_746) , p_5)) == p_5)), p_5)) , 0L) <= 2L)))) , p_5) || l_814));
                    for (l_754 = 0; (l_754 <= 4); l_754 += 1)
                    {
                        unsigned short l_880[7];
                        int l_881 = 0x13BE538EL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_880[i] = 65535UL;
                        g_427[9][2][1] = ((g_853 = (l_867 = l_760)) , (safe_mul_func_int16_t_s_s(0x88EEL, p_5)));
                        l_813[0] &= (l_854 & (((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((l_881 = (~(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((l_839 != (safe_add_func_int32_t_s_s(g_426, 6UL))), 4)), (g_301[0] && func_66(l_839)))) > func_70(g_219)) != l_880[0]))) ^ 0xE6B68F27L) < l_839), 0)), g_448[4][5])) ^ p_5) != g_425));
                        l_866 |= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((~1UL), func_70((g_237 = 0xBFB717B8L)))) == (safe_lshift_func_int8_t_s_u(l_760, p_5))), (g_126 < (p_5 > ((3UL && (safe_sub_func_uint32_t_u_u((~l_890), g_200[3][3].f1))) & g_426)))));
                        l_891 = (func_66(l_814) ^ (g_649 ^ func_66(l_754)));
                    }
                }
            }
            for (l_755 = 0; (l_755 <= 4); l_755 += 1)
            {
                unsigned l_892 = 0UL;
                char l_911[5][4];
                int l_912 = 0L;
                int l_947 = (-2L);
                int l_963 = 0x3E885339L;
                int l_966 = (-10L);
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_911[i][j] = 0x9BL;
                }
                for (g_853 = 1; (g_853 <= 7); g_853 += 1)
                {
                    int i, j, k;
                    return g_738[(g_451 + 2)][(g_451 + 1)][g_451];
                }
                for (l_850 = 0; (l_850 <= 4); l_850 += 1)
                {
                    int i, j, k;
                    if (g_738[(g_451 + 1)][g_451][g_451])
                    {
                        int i, j;
                        if (l_763[(g_451 + 1)][l_850])
                            break;
                        l_813[0] = 1L;
                        return l_763[(g_451 + 3)][l_755];
                    }
                    else
                    {
                        ++l_892;
                    }
                    for (g_599 = 0; (g_599 <= 4); g_599 += 1)
                    {
                        int i, j, k;
                        if (l_864[(g_599 + 2)])
                            break;
                        g_427[8][0][1] = (safe_lshift_func_uint16_t_u_u(g_427[(l_755 + 4)][g_451][g_451], 5));
                        if (g_427[(g_451 + 7)][g_451][(g_451 + 1)])
                            continue;
                        p_5 = (func_70(((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(l_763[(g_599 + 3)][l_755], p_5)) == (g_649 || (((g_200[3][3].f0 >= func_66(p_5)) == (safe_mod_func_int32_t_s_s((g_427[(l_755 + 4)][g_451][g_451] = ((g_738[(g_451 + 1)][g_451][g_451] <= (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(func_66(l_755), l_892)), 0x2E1E4C48L))) ^ l_890)), (-8L)))) < g_738[0][1][0]))), g_738[(g_451 + 1)][g_451][g_451])) == 0x90C6L), l_864[7])) != l_891) == l_911[4][3]) ^ l_839), g_714[1])) >= 0x1AE486D1L)) >= 0x150815EBL);
                    }
                    p_5 = l_864[(l_755 + 2)];
                }
                l_912 = (p_5 = func_66(p_5));
                if ((l_839 = (l_912 = p_5)))
                {
                    unsigned char l_936 = 0xADL;
                    for (g_649 = 0; (g_649 <= 1); g_649 += 1)
                    {
                        int i;
                        return l_864[(l_755 + 2)];
                    }
                    for (g_399 = 0; (g_399 <= 4); g_399 += 1)
                    {
                        int l_935 = 0xE764C257L;
                        l_839 = 0xDE75E878L;
                        if (l_763[0][2])
                            continue;
                        l_936 ^= (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(g_241, (safe_mul_func_int8_t_s_s(p_5, p_5)))) != (safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((0x0395L | (func_70(p_5) > ((safe_rshift_func_int16_t_s_s((((g_714[1] | p_5) , ((g_84 <= 0x8740ECCFL) & l_935)) | p_5), 4)) , p_5))), 0x74B83E5FL)) >= g_126) & l_758), g_853)) , l_911[3][2]), l_852)), 0x47L)), 8)) | l_763[2][1]) < g_432), 1L))), g_447)), l_839));
                        p_5 = 0x6066AA84L;
                    }
                }
                else
                {
                    int l_944[4][1][2] = {{{0xA9F0C58EL, 0xA9F0C58EL}}, {{0xA9F0C58EL, 0xA9F0C58EL}}, {{0xA9F0C58EL, 0xA9F0C58EL}}, {{0xA9F0C58EL, 0xA9F0C58EL}}};
                    int i, j, k;
                    for (l_760 = 0; (l_760 <= 5); l_760 += 1)
                    {
                        unsigned l_962 = 0x8C236650L;
                        int i, j;
                        p_5 = (safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u(g_448[(g_451 + 3)][l_760], ((((safe_rshift_func_int8_t_s_s(0x25L, 7)) , (safe_rshift_func_uint8_t_u_u((l_947 = (--g_432)), 6))) >= (g_446[1][4][4] < (safe_mod_func_uint16_t_u_u(l_756[0], p_5)))) || func_70(p_5))))));
                        l_912 = 3L;
                        g_427[9][2][0] |= (~(((safe_sub_func_uint32_t_u_u(g_448[(g_451 + 3)][l_760], (!(g_200[3][3] , g_301[1])))) != (l_813[0] = (safe_rshift_func_uint8_t_u_u((g_3 < (((func_70(g_430) , ((p_5 ^ ((p_5 != (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_5, 248UL)) , p_5), g_448[(g_451 + 3)][l_760])), 4294967295UL))) != g_448[4][5])) >= p_5)) < 255UL) == g_446[0][2][7])), l_962)))) >= p_5));
                        if (l_944[0][0][1])
                            break;
                    }
                    ++g_969;
                }
            }
            l_965[0][1] = (g_301[0] && (func_70(g_969) <= p_5));
            for (g_341 = 0; (g_341 >= 0); g_341 -= 1)
            {
                unsigned l_988 = 4294967295UL;
                int l_995 = 4L;
                int l_1015 = 0x2B0ED9B8L;
                int l_1095 = 0xF552E989L;
                int i, j, k;
                if ((((g_738[(g_341 + 1)][g_341][g_451] >= (safe_add_func_int32_t_s_s(0x1D89219CL, (l_967 < (g_851 = p_5))))) <= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_5, g_738[(g_341 + 1)][g_341][g_451])), (safe_mul_func_int16_t_s_s((l_968 = func_70(g_301[1])), p_5))))) | (-1L)))
                {
                    int l_992 = 0x7DF19980L;
                    int l_1014[4] = {0x7C711B62L, (-8L), 0x7C711B62L, (-8L)};
                    int i;
                    for (l_850 = 0; (l_850 <= 0); l_850 += 1)
                    {
                        short l_991 = 6L;
                        l_995 = (safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((g_599++), 1)) ^ ((safe_sub_func_int16_t_s_s(l_988, (safe_sub_func_uint8_t_u_u(l_991, (p_5 , (l_992 = 0L)))))) != (l_839 & (l_814 = l_825)))), (safe_sub_func_int16_t_s_s((~l_760), func_66(l_825)))));
                        p_5 = (((safe_sub_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(0xB625L, (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_1014[3] = (p_5 , (func_66(g_451) != (safe_add_func_int8_t_s_s(p_5, (((((safe_lshift_func_int16_t_s_s(((((l_965[0][6] <= ((l_864[0] || (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int8_t_s((-1L))) , ((l_1013[1] = (((g_219 |= (((safe_mul_func_uint16_t_u_u((l_852 & g_430), 0x0D20L)) == g_714[1]) & p_5)) >= l_756[1]) & 0x62017D9CL)) && 1UL)), p_5))) , g_448[7][3])) , g_423) > g_714[1]) && l_991), g_200[3][3].f3)) < g_154) == g_84) && p_5) || g_241)))))), p_5)), 0x43L)))) & p_5), p_5)) & p_5) < (-1L));
                        if (g_714[1])
                            continue;
                    }
                    l_1016--;
                    if (l_813[0])
                        continue;
                }
                else
                {
                    short l_1019[8] = {(-6L), 0x22B1L, (-6L), 0x22B1L, (-6L), 0x22B1L, (-6L), 0x22B1L};
                    unsigned short l_1044 = 0x257CL;
                    int l_1073[6];
                    int l_1080 = 0x9B2130E4L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1073[i] = (-2L);
                    if ((g_446[1][1][3] || (p_5 | (((l_1019[1] != (safe_rshift_func_uint8_t_u_s(g_425, g_426))) , (l_967 , (l_813[0] = (l_1013[0] ^ (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(((~7L) <= p_5), l_988)), 11)))))) ^ 0x93L))))
                    {
                        unsigned l_1032 = 0UL;
                        p_5 = (((safe_lshift_func_int8_t_s_u((((func_66(p_5) >= (safe_sub_func_uint16_t_u_u(0x7C1FL, ((safe_rshift_func_uint8_t_u_s((l_1032 & (safe_lshift_func_uint8_t_u_s((l_763[3][0] < (safe_sub_func_uint16_t_u_u(((g_200[3][3].f3 = (safe_mul_func_int16_t_s_s(func_66(g_427[1][3][0]), (p_5 == (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_1013[1], p_5)), 0xE1L)))))) == g_200[3][3].f2), l_852))), g_200[3][3].f0))), g_853)) == l_1015)))) , 4294967295UL) <= 0UL), 3)) != 0xEF45E87AL) ^ l_1043[0]);
                        --l_1044;
                        if (g_738[2][0][0])
                            continue;
                        p_5 = ((p_5 , 0x4B6C3D93L) & (((g_446[0][2][7] = 0x49L) < ((safe_mod_func_uint8_t_u_u(((4294967295UL ^ 1UL) == (p_5 < (!((safe_rshift_func_int8_t_s_s(func_66(l_988), 3)) & l_813[0])))), g_425)) , 0x3EL)) & p_5));
                    }
                    else
                    {
                        g_84 = g_448[4][5];
                        g_427[9][2][1] &= 0L;
                    }
                    if ((((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_5, 4)) == func_66((l_1015 = (safe_mod_func_int32_t_s_s((g_398 | l_1019[1]), ((safe_lshift_func_int8_t_s_u(((((safe_rshift_func_uint8_t_u_u(p_5, (((((l_1019[1] != ((((l_758 = (l_813[0] = (+(4294967287UL > (((safe_sub_func_int16_t_s_s(p_5, g_714[1])) == (+(safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((((l_968 = func_70(l_1043[0])) , p_5) & p_5), (-9L))), 0xE570C73AL)) >= l_1071), p_5)), g_649)))) | 0x1D43L))))) == p_5) != p_5) && 0xE0656D1AL)) ^ l_825) < l_1013[0]) | p_5) ^ p_5))) | g_341) < 0x90L) == g_241), l_988)) ^ 0x5354L)))))), 3L)) || g_126) || 1UL))
                    {
                        struct S0 l_1072[2][2] = {{{990,-3140,1L,-7102}, {990,-3140,1L,-7102}}, {{990,-3140,1L,-7102}, {990,-3140,1L,-7102}}};
                        int i, j;
                        l_1080 &= (g_84 = (((l_1072[1][1] , ((p_5 &= (func_66((((g_425 == (l_1073[1] |= l_756[1])) | (4294967295UL == g_84)) ^ ((l_968 = func_66((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x4AD9L, (safe_rshift_func_uint16_t_u_u(l_1015, (g_200[2][2] , (l_1072[1][1].f1 = (g_853 = (8L < l_760)))))))), 255UL)))) != l_1072[1][1].f3))) , g_3)) , p_5)) , p_5) , g_451));
                        g_427[9][2][1] ^= l_830;
                    }
                    else
                    {
                        l_1080 &= (g_714[1] ^ p_5);
                        if (g_448[4][5])
                            break;
                        p_5 = (g_738[(g_341 + 1)][g_341][g_451] <= (0xF0D82F6EL | func_70(g_853)));
                        if (l_968)
                            continue;
                    }
                    for (l_890 = 0; (l_890 <= 0); l_890 += 1)
                    {
                        unsigned l_1090 = 0x2F2A3AC7L;
                        int l_1093 = 0xCC234A12L;
                        l_747 = ((l_1081 , 0xEDL) & func_66((((safe_mul_func_uint8_t_u_u(g_341, g_200[3][3].f1)) <= ((safe_lshift_func_int8_t_s_u((g_649 <= (p_5 && (safe_add_func_int8_t_s_s(p_5, (safe_lshift_func_uint8_t_u_s(((l_995 = l_1090) || 1L), 4)))))), g_427[2][3][1])) == p_5)) && p_5)));
                        l_1093 = ((p_5 & ((g_448[2][4] ^ p_5) && l_1015)) | (safe_sub_func_uint32_t_u_u(3UL, ((!g_237) <= 0x4CF1L))));
                    }
                }
                l_995 = p_5;
                ++g_1097;
            }
        }
        g_427[9][2][1] = ((l_755 = (l_813[0] = (l_747 = g_237))) == (((safe_mod_func_int16_t_s_s(l_850, (l_1102 , p_5))) && g_430) > (g_1097 | (safe_rshift_func_uint16_t_u_s((p_5 , func_70(((safe_sub_func_uint32_t_u_u(l_1107[1], (g_423 ^ p_5))) , g_446[0][2][7]))), 14)))));
    }
    return g_241;
}







static unsigned short func_12(char p_13, unsigned char p_14)
{
    int l_34 = 1L;
    struct S0 l_43[3][2] = {{{938,-1221,-1L,6749}, {938,-1221,-1L,6749}}, {{938,-1221,-1L,6749}, {938,-1221,-1L,6749}}, {{938,-1221,-1L,6749}, {938,-1221,-1L,6749}}};
    unsigned l_725 = 1UL;
    int i, j;
    l_43[1][1].f3 = func_16((safe_unary_minus_func_int8_t_s(((-1L) > g_3))), g_3, (((+func_22((((safe_lshift_func_int16_t_s_u((g_714[1] &= func_30((((safe_sub_func_int16_t_s_s(0xA4D9L, (0x7CL ^ p_14))) , l_34) , ((l_43[1][1].f1 = ((((safe_mod_func_int16_t_s_s(((func_37((l_34 == (safe_mul_func_int8_t_s_s(0L, l_34))), l_34, l_43[1][1]) | l_34) != (-1L)), p_14)) >= 0xD8FC9CD9L) != 0x12EF95A9L) , (-1L))) & g_341)))), 4)) && 4L) == g_341), g_341, l_43[1][1].f3, g_200[3][3].f0, l_43[1][1].f2)) != l_725) , p_14), g_3);
    g_200[3][3].f1 = (safe_lshift_func_int8_t_s_u(p_13, 6));
    return l_34;
}







static int func_16(unsigned short p_17, const unsigned char p_18, unsigned p_19, int p_20)
{
    short l_726 = 0xA2B2L;
    struct S0 l_735[2][3] = {{{818,-94,-1L,-10455}, {818,-94,-1L,-10455}, {818,-94,-1L,-10455}}, {{818,-94,-1L,-10455}, {818,-94,-1L,-10455}, {818,-94,-1L,-10455}}};
    unsigned l_739 = 0UL;
    int i, j;
    g_200[3][3].f1 = (p_19 , l_726);
    g_427[0][2][1] = (safe_sub_func_uint16_t_u_u((func_66(l_726) > (safe_lshift_func_uint8_t_u_u(g_241, ((p_17 ^ ((((safe_add_func_int16_t_s_s((((l_726 | (p_18 < p_18)) , (l_726 >= g_427[9][2][1])) | 1L), (-8L))) >= g_219) , 7L) || l_726)) , l_726)))), p_19));
    p_20 = ((((l_735[0][0].f1 = (((g_451 = l_726) < (g_649 || func_37(func_57(((l_726 & ((g_738[0][1][0] |= ((func_66((safe_add_func_uint32_t_u_u(func_66(p_18), (l_735[0][0] , (safe_mul_func_uint16_t_u_u(g_126, (4UL > (p_17 | g_599)))))))) == g_84) < g_271)) & p_18)) <= 4UL)), l_726, l_735[0][0]))) , l_735[0][0].f3)) < g_426) & l_739) , p_18);
    return g_447;
}







static const unsigned func_22(int p_23, unsigned char p_24, unsigned p_25, unsigned p_26, unsigned p_27)
{
    unsigned short l_715 = 2UL;
    struct S0 l_724 = {648,-3167,0x0870L,15589};
    l_715++;
    l_724.f3 = func_37(p_27, ((((g_200[3][3].f0 = 0x5D53896CL) < ((safe_mul_func_int16_t_s_s(((g_3 | ((p_23 , (safe_mod_func_uint32_t_u_u(((((p_25 , (safe_add_func_uint16_t_u_u(((func_66((l_715 == p_27)) , func_66(g_200[3][3].f1)) & 0x0FL), g_425))) && 0x95BCB04AL) <= g_98) > l_715), l_715))) == l_715)) != (-9L)), 0xF148L)) , g_447)) < 8UL) > p_26), l_724);
    return g_136;
}







static short func_30(unsigned p_31)
{
    int l_420 = 1L;
    int l_421 = 0x0ECA9D41L;
    int l_422 = 0x8BA9425BL;
    int l_424[10] = {0x8696A82EL, 0x82D3B849L, 0x8696A82EL, 0x82D3B849L, 0x8696A82EL, 0x82D3B849L, 0x8696A82EL, 0x82D3B849L, 0x8696A82EL, 0x82D3B849L};
    char l_428[5][7][7] = {{{0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}}, {{0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}}, {{0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}}, {{0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}}, {{0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}, {0L, 0xE0L, (-1L), 0x5FL, 2L, 1L, 0x51L}}};
    char l_429[9][9] = {{5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}, {5L, (-1L), (-3L), 4L, (-6L), 0xD4L, (-6L), 0x32L, 7L}};
    int l_431 = (-10L);
    char l_449 = 0xF7L;
    int l_535 = (-1L);
    struct S0 l_627 = {765,-3130,-1L,-3996};
    short l_650 = (-1L);
    int l_654[5][3] = {{(-9L), 9L, (-9L)}, {(-9L), 9L, (-9L)}, {(-9L), 9L, (-9L)}, {(-9L), 9L, (-9L)}, {(-9L), 9L, (-9L)}};
    unsigned l_680[4][7] = {{0UL, 0xE7F1230AL, 0UL, 8UL, 0UL, 0xE7F1230AL, 0UL}, {0UL, 0xE7F1230AL, 0UL, 8UL, 0UL, 0xE7F1230AL, 0UL}, {0UL, 0xE7F1230AL, 0UL, 8UL, 0UL, 0xE7F1230AL, 0UL}, {0UL, 0xE7F1230AL, 0UL, 8UL, 0UL, 0xE7F1230AL, 0UL}};
    char l_713 = 0xBCL;
    int i, j, k;
    ++g_432;
    for (g_425 = 6; (g_425 >= 0); g_425 -= 1)
    {
        int l_445 = (-7L);
        int l_450 = 0xB2666C24L;
        unsigned l_489 = 4294967295UL;
        short l_526 = (-6L);
        int l_527[4];
        short l_538 = 0x2829L;
        char l_545 = 0x74L;
        int l_555 = 1L;
        int l_575 = 0xE0946BB5L;
        short l_596 = 1L;
        int l_626 = 1L;
        unsigned l_651 = 0x530C57E0L;
        unsigned short l_667 = 4UL;
        int i;
        for (i = 0; i < 4; i++)
            l_527[i] = (-9L);
        if ((l_431 = g_98))
        {
            return g_219;
        }
        else
        {
            char l_455 = 2L;
            unsigned short l_456[7] = {0xFC23L, 0xFC23L, 0x950BL, 0xFC23L, 0xFC23L, 0x950BL, 0xFC23L};
            int l_472 = 4L;
            short l_503 = 0xE685L;
            int l_523 = 0x25456EE9L;
            int l_530 = 0x98D0773CL;
            int l_533 = (-1L);
            int l_540 = (-3L);
            int l_542 = 0x3AE28D11L;
            int l_543 = 1L;
            int l_547 = 0x77296D60L;
            struct S0 l_553 = {918,561,1L,-5248};
            const short l_583[2] = {0x2FC6L, 0x2FC6L};
            int i;
            if (((-1L) ^ (safe_mul_func_int8_t_s_s((l_456[0] = ((g_398 = (((safe_mod_func_uint16_t_u_u(l_428[4][0][1], ((safe_rshift_func_int8_t_s_s((((func_57(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((++g_451), (l_445 = l_450))), (l_450 >= (safe_unary_minus_func_uint8_t_u(l_455))))) < (g_446[0][2][7] , func_66(l_450)))) != g_430) , g_432) < (-6L)), g_446[0][2][7])) , (-1L)))) , (-1L)) > 6UL)) && l_445)), l_429[6][3]))))
            {
                unsigned char l_473 = 1UL;
                g_427[7][0][0] = (((!(func_66(((p_31 && (-1L)) , ((safe_lshift_func_uint8_t_u_u((g_219 < ((func_66(l_449) > (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(func_70(((g_154 , ((func_66((g_98 <= (safe_rshift_func_uint16_t_u_u(((l_472 = (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((safe_unary_minus_func_int8_t_s((func_70(g_425) <= g_97))) | 0UL) == 0xA8L) | p_31), 0x1DDCL)), l_456[5])), p_31))) >= p_31), 4)))) != p_31) < l_456[0])) | g_301[4])), p_31)), l_473))) | 8L)), l_449)) && g_3))) < l_445)) >= 4294967292UL) , 0x228AD69EL);
            }
            else
            {
                unsigned l_474 = 4294967292UL;
                if (p_31)
                    break;
                if (l_445)
                    continue;
                if (p_31)
                    continue;
                for (g_426 = 7; (g_426 >= 0); g_426 -= 1)
                {
                    l_474 = 0x64C1D553L;
                }
            }
            if ((((g_200[3][3].f1 , 65530UL) == (l_420 , ((((safe_add_func_uint16_t_u_u((l_450 <= l_450), g_200[3][3].f2)) , ((g_200[3][3].f2 == (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_445 >= g_399), g_200[3][3].f0)), p_31))) && l_424[8])) < 2L) <= 0xCE09D906L))) == 4L))
            {
                struct S0 l_494[5][7] = {{{334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}}, {{334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}}, {{334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}}, {{334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}}, {{334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}, {334,1174,0x1DA7L,1603}}};
                int l_524 = 1L;
                int l_529 = 0x8A269476L;
                int l_531 = (-7L);
                int l_539 = (-1L);
                int l_541 = 0x49255DAFL;
                int l_544[10][5][4] = {{{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}, {{9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}, {9L, 4L, 0x52BE3175L, 9L}}};
                unsigned short l_559 = 1UL;
                int i, j, k;
                if ((safe_mul_func_int8_t_s_s(((6L & (l_472 |= (g_446[2][4][4] &= (0x7B10L < ((l_424[8] , func_66((safe_add_func_uint32_t_u_u((g_98 = (+8UL)), (0x9BEAL < (safe_lshift_func_int8_t_s_s(g_301[1], 7))))))) <= (p_31 && (p_31 , l_450))))))) >= 0x58L), p_31)))
                {
                    int l_487 = 0xD54C2E6CL;
                    int l_488 = 0L;
                    short l_520 = 0x0E8FL;
                    int l_525 = 0x3629C3E4L;
                    int l_528 = 9L;
                    int l_532[4][9] = {{(-2L), 0L, 0L, 0L, (-2L), 0L, 0L, 0L, (-2L)}, {(-2L), 0L, 0L, 0L, (-2L), 0L, 0L, 0L, (-2L)}, {(-2L), 0L, 0L, 0L, (-2L), 0L, 0L, 0L, (-2L)}, {(-2L), 0L, 0L, 0L, (-2L), 0L, 0L, 0L, (-2L)}};
                    int l_536 = (-1L);
                    int l_537[4][2] = {{(-9L), 0xEF343B49L}, {(-9L), 0xEF343B49L}, {(-9L), 0xEF343B49L}, {(-9L), 0xEF343B49L}};
                    int l_546 = 0x0BA9BD95L;
                    int i, j;
                    l_489--;
                    if ((safe_lshift_func_uint16_t_u_s((func_37(g_241, p_31, l_494[4][5]) , (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_136, ((safe_mod_func_int16_t_s_s((g_425 ^ ((g_423 || ((p_31 , (!(func_66((((safe_mul_func_int16_t_s_s(p_31, p_31)) == l_487) || 4294967290UL)) == p_31))) & g_154)) , l_503)), l_472)) || g_446[0][2][7]))), 0))), l_494[4][5].f0)))
                    {
                        return g_423;
                    }
                    else
                    {
                        unsigned l_504 = 0xD44AD4DFL;
                        unsigned l_509 = 0x2A50666EL;
                        int l_522[9][1];
                        char l_534 = 0L;
                        unsigned short l_548 = 65531UL;
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_522[i][j] = 0x7AA8C055L;
                        }
                        l_445 ^= (p_31 , ((((l_504 && ((((((-4L) == ((l_450 = ((safe_sub_func_uint8_t_u_u(((l_424[8] = (func_70(g_423) , (safe_lshift_func_int8_t_s_u((l_494[4][5].f1 = p_31), l_509)))) && (safe_mul_func_uint16_t_u_u(p_31, (safe_mod_func_int8_t_s_s(l_456[2], l_494[4][5].f1))))), 0x9CL)) , 0xECL)) | g_200[3][3].f2)) > 0xACFDL) , 0x1790L) <= p_31) , g_200[3][3].f3)) && p_31) , 0x08L) >= p_31));
                        g_521 = (g_237 != ((func_66(p_31) != (safe_rshift_func_int8_t_s_s((0x8C72L || ((l_456[0] & g_447) == func_70((g_432 >= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_301[1], (g_98 && l_456[0]))), g_154)))))), g_430))) > l_520));
                        if (g_399)
                            break;
                        --l_548;
                    }
                }
                else
                {
                    int l_556 = 0x1BF2CFC2L;
                    int l_557 = 1L;
                    int l_558[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_558[i] = 1L;
                    for (g_423 = 0; (g_423 <= 8); g_423 += 1)
                    {
                        int l_554 = 1L;
                        int i, j;
                        if (l_429[(g_425 + 2)][(g_425 + 1)])
                            break;
                        l_431 = (0xCDCEL < (l_539 || ((+((safe_mul_func_uint8_t_u_u(g_3, (g_241 <= (g_448[4][5] ^ ((((l_554 = (l_553 , g_398)) != g_84) > (!(g_136 = p_31))) <= l_524))))) | (-9L))) >= g_126)));
                    }
                    for (g_426 = 6; (g_426 >= 1); g_426 -= 1)
                    {
                        int i;
                        l_555 = (l_456[g_426] <= l_456[g_426]);
                    }
                    g_427[9][2][1] = func_57(l_556);
                    --l_559;
                }
                if (func_70((safe_mul_func_int8_t_s_s((func_70(p_31) > g_241), (safe_rshift_func_uint8_t_u_s(p_31, 6))))))
                {
                    unsigned char l_566 = 0UL;
                    for (l_503 = 0; (l_503 <= 4); l_503 += 1)
                    {
                        if (l_553.f2)
                            break;
                        return l_543;
                    }
                    --l_566;
                    l_523 = l_450;
                }
                else
                {
                    char l_597[9];
                    int l_598[8] = {0x6E19CA67L, 0x237127C9L, 0x6E19CA67L, 0x237127C9L, 0x6E19CA67L, 0x237127C9L, 0x6E19CA67L, 0x237127C9L};
                    int i;
                    for (i = 0; i < 9; i++)
                        l_597[i] = 0x65L;
                    l_527[0] &= ((6L >= 5L) < (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u(l_472, l_575)) , ((safe_unary_minus_func_uint8_t_u(p_31)) , func_57((safe_mul_func_int8_t_s_s(func_66((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((8UL & ((g_200[3][3].f1 ^= (-6L)) , (l_575 && (p_31 == l_450)))), 6)), g_98)) <= g_427[9][2][1]) , g_301[2])), p_31))))), g_426)) , 0xD9L), p_31)));
                    l_529 = l_583[1];
                    if (p_31)
                        continue;
                    if ((((g_599 = ((l_598[0] = (p_31 > (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((g_200[3][3].f3 > (l_421 |= 0L)), ((safe_mul_func_uint16_t_u_u((!(p_31 || p_31)), (safe_add_func_uint32_t_u_u((((l_422 ^= ((l_575 = (l_597[0] = ((safe_add_func_int16_t_s_s(0x637EL, (safe_mod_func_uint32_t_u_u(0xEF2F2967L, (l_431 = func_66(l_596)))))) | g_451))) < 0x3AL)) < p_31) <= l_450), g_271)))) || 249UL))), l_598[7])))) != p_31)) >= g_521) >= g_200[3][3].f0))
                    {
                        short l_608[10][4][3] = {{{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}, {{0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}, {0x8815L, 0x8D69L, (-1L)}}};
                        int l_609[2][4] = {{0x2B04D01DL, 0x1031C20FL, 0x2B04D01DL, 0x1031C20FL}, {0x2B04D01DL, 0x1031C20FL, 0x2B04D01DL, 0x1031C20FL}};
                        int i, j, k;
                        l_609[1][3] = (((safe_mul_func_int8_t_s_s(((g_200[3][3] , func_57(p_31)) > 4294967295UL), g_398)) > (l_424[6] = (((((g_426 >= g_448[4][5]) && (safe_add_func_int16_t_s_s(l_542, (l_598[7] |= ((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(func_70(((((0x1A2CL && 0x1978L) , p_31) != l_608[0][1][0]) || (-4L))), 0L)), l_559)) && l_422))))) & g_200[3][3].f0) == 0xF9L) && 8L))) ^ p_31);
                        return l_544[2][0][0];
                    }
                    else
                    {
                        return g_98;
                    }
                }
                l_424[4] = (p_31 < (safe_mul_func_uint16_t_u_u(func_57((((((safe_add_func_int32_t_s_s(l_545, (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(0UL, (((safe_mod_func_uint8_t_u_u((p_31 != (~l_553.f2)), ((safe_mul_func_uint16_t_u_u(l_547, (l_523 | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(4294967295UL, g_446[3][5][1])), 1))))) || l_540))) >= p_31) ^ 1UL))) ^ l_626), p_31)))) >= l_431) == 0x0D763750L) , g_599) | g_599)), 0xA08EL)));
                l_431 ^= func_37(l_503, g_237, l_627);
            }
            else
            {
                short l_630 = 0xCC63L;
                int l_635 = 3L;
                l_445 = ((((safe_sub_func_int8_t_s_s(g_301[0], ((l_630 = p_31) <= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_31 ^ (2L & func_66(((((l_635 &= (g_521 & 0xCD9BL)) && (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_70(p_31), p_31)), p_31))) , l_627) , 254UL)))), 15)), (-6L))) > g_599)))) , p_31) > p_31) < 0x0BA3C26AL);
                for (l_545 = 6; (l_545 >= 0); l_545 -= 1)
                {
                    unsigned short l_640 = 7UL;
                    l_635 |= 0L;
                    g_200[3][3].f3 = g_451;
                    l_424[8] = (((func_37((g_271 ^= l_640), (7L < (safe_sub_func_int8_t_s_s(l_640, (l_627.f0 ^ g_426)))), l_627) < (func_70(((safe_add_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(g_448[7][3], 14)) <= g_3) | 0x57L) < l_630), l_553.f3)) >= l_640)) >= 0xD9L)) ^ 0xC743L) || 0x7FBBL);
                }
                g_200[3][3].f3 ^= ((safe_mul_func_int16_t_s_s((g_398 = l_553.f2), p_31)) || g_448[4][5]);
            }
            l_651++;
            l_424[8] = l_654[3][1];
        }
        g_200[3][3].f3 |= ((safe_sub_func_int16_t_s_s(((l_424[8] = (l_527[2] &= 0x275EL)) , (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0x04L, g_446[0][2][7])) > (0x3EL < (l_667 ^= (safe_sub_func_int8_t_s_s((~((safe_rshift_func_int16_t_s_s(p_31, (g_398 ^= (l_627.f1 = (~((l_527[2] = (l_627.f3 = (g_423 < ((((func_70(l_424[0]) <= ((((((0x73ADL & p_31) , l_654[0][0]) & 4294967287UL) == p_31) & 0x722C51EFL) >= g_3)) >= p_31) > l_627.f3) & l_431)))) , p_31)))))) ^ 1UL)), 0xF2L))))), p_31)), p_31))), 0UL)) ^ 0x84CE3364L);
        for (l_650 = 8; (l_650 >= 1); l_650 -= 1)
        {
            int l_676 = 6L;
            int l_677 = 9L;
            int l_687 = 0L;
            int l_688 = 0xFC24DB18L;
            int i, j;
            l_424[2] = ((l_677 &= (!(safe_mul_func_uint16_t_u_u(((g_451 ^= ((g_448[4][5] = (l_429[g_425][(g_425 + 1)] = g_447)) & (((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((g_432 >= (g_237 != p_31)), 4)), ((g_432 , (safe_mod_func_uint16_t_u_u((func_70((func_66(l_421) , g_84)) && l_676), p_31))) && 0xA64BL))) || p_31) , g_3))) , g_447), g_521)))) , p_31);
            if (((safe_lshift_func_int16_t_s_u((l_680[3][2] != ((safe_add_func_uint32_t_u_u((0x9F71L < (l_627.f1 , (safe_add_func_int32_t_s_s(((-8L) == g_301[4]), ((((func_70((~0x309BA223L)) == (safe_mod_func_uint32_t_u_u(func_70(p_31), 0x3AC786D2L))) ^ p_31) , g_341) == g_97))))), l_421)) == l_445)), 13)) <= p_31))
            {
                unsigned short l_689 = 1UL;
                l_689++;
            }
            else
            {
                g_200[3][3].f3 = (safe_rshift_func_int8_t_s_s(p_31, 7));
                return p_31;
            }
            if ((1UL <= 0UL))
            {
                if (l_687)
                    break;
                return l_450;
            }
            else
            {
                unsigned short l_694 = 0x8BF0L;
                l_688 = l_545;
                ++l_694;
            }
            l_421 ^= (safe_rshift_func_int8_t_s_u((func_66((((g_219--) ^ ((-1L) || l_535)) , ((l_422 = (safe_lshift_func_uint8_t_u_s((1L >= l_654[3][1]), ((l_555 = (func_70((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(((l_424[8] = (g_446[0][2][7] <= func_57((l_424[7] &= (g_98 = l_429[4][5]))))) , func_66((((safe_mul_func_uint8_t_u_u((l_575 = (g_432++)), (safe_rshift_func_uint8_t_u_s(g_200[3][3].f0, 4)))) , l_688) > l_713))), g_521)), 0))) & 0x7CL)) && 6L)))) , 0xB1L))) <= g_446[0][2][7]), 7));
        }
    }
    g_200[3][3].f1 = (0x5EL & p_31);
    return l_429[4][3];
}







static const unsigned short func_37(unsigned p_38, short p_39, struct S0 p_40)
{
    unsigned char l_418 = 4UL;
    int l_419[8] = {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L};
    int i;
    for (p_39 = 7; (p_39 == (-23)); p_39 = safe_sub_func_int16_t_s_s(p_39, 9))
    {
        const int l_52 = (-9L);
        l_419[6] = (safe_lshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(p_39, ((safe_rshift_func_int8_t_s_u(0x2BL, l_52)) & 0x2CL))) , (((safe_sub_func_uint8_t_u_u(((p_38 != (safe_add_func_int32_t_s_s(func_57(p_40.f2), (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_39, (safe_mod_func_int16_t_s_s(l_418, (-4L))))), g_200[3][3].f2))))) , 1UL), g_398)) | p_39) & p_40.f0)) , g_241), l_52));
    }
    return p_40.f1;
}







static int func_57(unsigned p_58)
{
    short l_65 = 4L;
    int l_93 = (-5L);
    int l_94 = 0x234CD274L;
    int l_197[4][4] = {{(-6L), 0x7FA4D0A6L, (-6L), 0x7FA4D0A6L}, {(-6L), 0x7FA4D0A6L, (-6L), 0x7FA4D0A6L}, {(-6L), 0x7FA4D0A6L, (-6L), 0x7FA4D0A6L}, {(-6L), 0x7FA4D0A6L, (-6L), 0x7FA4D0A6L}};
    int l_299 = 1L;
    char l_355 = (-2L);
    unsigned l_359[2][3];
    unsigned short l_381[1];
    unsigned l_393 = 1UL;
    int l_400 = (-10L);
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_359[i][j] = 0xE7823650L;
    }
    for (i = 0; i < 1; i++)
        l_381[i] = 0xEF1CL;
    for (p_58 = 26; (p_58 < 50); ++p_58)
    {
        int l_83 = 0x5D264A48L;
        int l_95[7][3][6] = {{{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}, {{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}, {{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}, {{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}, {{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}, {{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}, {{0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}, {0xFDC0328AL, 0xFDC0328AL, 0x045C746EL, 0x38556AD5L, (-3L), 1L}}};
        int l_122 = (-5L);
        int l_137 = (-1L);
        unsigned l_234 = 0x5C9495E1L;
        unsigned short l_356 = 0x8B28L;
        unsigned l_411 = 0x4BC6540DL;
        int i, j, k;
        l_94 = ((safe_add_func_int8_t_s_s(0x67L, (l_93 = (!(safe_sub_func_int16_t_s_s((l_65 > func_66((safe_lshift_func_uint8_t_u_s((func_70((+(safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((1L >= l_65) && (((((safe_sub_func_uint16_t_u_u(0xA897L, (safe_unary_minus_func_int8_t_s(((((g_84 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_83, (p_58 | g_3))), p_58))) < l_83) >= (-10L)) , p_58))))) && 1UL) < l_83) || p_58) , (-1L))) | 0L) || l_83), g_3)), g_3)))) || l_83), 6)))), p_58)))))) <= l_83);
        for (l_93 = 0; (l_93 <= 2); l_93 += 1)
        {
            int l_109 = 0x1155E334L;
            unsigned short l_119 = 0x16CEL;
            unsigned l_123 = 4294967295UL;
            unsigned l_155 = 1UL;
            struct S0 l_159 = {1126,-3334,0xC493L,7598};
            int l_328 = 1L;
            unsigned char l_334 = 249UL;
            unsigned char l_342 = 251UL;
            for (l_83 = 2; (l_83 >= 0); l_83 -= 1)
            {
                int l_96 = 0x405D2149L;
                unsigned l_127 = 0xD96C0B5FL;
                int l_170 = 0xDB89AE2EL;
                for (l_65 = 0; (l_65 <= 2); l_65 += 1)
                {
                    int l_118 = (-6L);
                    int i, j, k;
                    if (l_95[(l_65 + 2)][l_93][(l_93 + 1)])
                    {
                        if (l_96)
                            break;
                        return g_3;
                    }
                    else
                    {
                        int i, j, k;
                        --g_98;
                        l_119 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(p_58, (((g_97 <= g_84) , ((safe_mul_func_uint16_t_u_u((l_95[1][1][1] = (safe_mul_func_uint8_t_u_u(func_66((l_109 ^= p_58)), p_58))), ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((l_118 = l_94), (!g_98))) , ((g_98 , 0UL) > 0x9C08A916L)), 4)), l_94)), 12)) , 0xCE17L))) > g_98)) , p_58))), 6));
                        l_94 = ((((safe_add_func_uint32_t_u_u((l_122 = l_96), (g_97 >= ((g_84 > p_58) == p_58)))) >= (((p_58 , (l_123 & (safe_sub_func_uint8_t_u_u(l_95[(l_65 + 2)][l_93][(l_93 + 1)], (g_126 = p_58))))) , p_58) , 0xB3473E55L)) , l_109) <= (-1L));
                        l_127 ^= l_94;
                    }
                    if ((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((g_3 <= (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((l_137 ^= ((l_95[6][0][2] = (g_136 = (p_58 | p_58))) > (p_58 != (((l_93 < g_98) > (-6L)) == 0x5B7D993EL)))) >= ((((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((l_94 = (!l_65)), 4)) < g_97), 0xE2L)) > l_118) != 1L), g_84)), p_58)) >= l_109) < l_93) <= 0xC527L)), p_58)), p_58))), p_58)), 7)))
                    {
                        struct S0 l_158 = {1021,-3451,-2L,9722};
                        g_84 = ((safe_mul_func_int16_t_s_s(((func_66((safe_sub_func_uint16_t_u_u((~p_58), (safe_lshift_func_uint16_t_u_u(func_66((l_94 | (((g_3 <= g_3) , 0xE3AE0F9FL) < (safe_rshift_func_int16_t_s_u((-9L), 5))))), 13))))) != ((((g_154 = g_136) <= g_84) && g_136) != p_58)) != l_155), 0xC011L)) > 8UL);
                        l_158.f1 = ((safe_rshift_func_uint8_t_u_u(((l_158 , l_159) , (safe_add_func_uint32_t_u_u((~p_58), p_58))), 2)) > (safe_mul_func_int16_t_s_s((+0x59ADL), (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u(0x14L, (l_170 = l_95[(l_65 + 2)][l_93][(l_93 + 1)]))) , l_96) <= g_154), 0L)), g_84)))));
                    }
                    else
                    {
                        if (p_58)
                            break;
                    }
                }
                l_94 ^= (safe_add_func_int8_t_s_s(l_123, (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(g_3, 0xDFF3C429L)), (l_65 >= l_127)))));
                g_84 = ((func_70((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(func_70(((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_136, p_58)), ((((safe_mod_func_int8_t_s_s(((p_58 & ((safe_lshift_func_int8_t_s_u((1UL && func_70((+l_94))), ((((0UL & ((safe_mod_func_int8_t_s_s(p_58, ((safe_add_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_s(func_70((func_66((safe_rshift_func_int16_t_s_s(p_58, p_58))) == p_58)), 7)) <= 2UL) > l_109) >= l_95[5][0][5]), l_197[1][3])) , (-2L)))) != 0x2B9E97E8L)) >= l_122) < g_136) && p_58))) | l_197[2][2])) , (-1L)), 0x76L)) > g_3) || 4294967291UL) || 0x3FFEL))) && g_98)), l_159.f1)) , 0x9CL), 0xF7L))) , l_127) | g_136);
            }
            if ((safe_mod_func_int8_t_s_s((g_200[3][3] , 0x58L), func_66(g_126))))
            {
                unsigned l_215 = 0xA5DA8195L;
                int l_216 = 0L;
                int l_218 = 9L;
                if ((g_97 | ((l_94 &= ((safe_add_func_int32_t_s_s(0x47C546E7L, l_137)) == ((safe_mod_func_uint8_t_u_u((p_58 , g_84), (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0xDEL, ((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((l_215 = (safe_add_func_int32_t_s_s(func_70(((0x4CFE09ADL < ((func_70(g_200[3][3].f3) , g_136) , g_200[3][3].f1)) == p_58)), g_200[3][3].f3))), p_58)) , (-1L)), l_155)) < l_159.f0))) <= l_155), p_58)))) > 65535UL))) < p_58)))
                {
                    for (l_215 = 0; (l_215 <= 2); l_215 += 1)
                    {
                        int i, j, k;
                        l_95[(l_215 + 1)][l_215][l_93] = l_95[l_215][l_215][l_215];
                    }
                }
                else
                {
                    int l_217[10] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
                    int l_224[7] = {0xB4DAEAD1L, 2L, 0xB4DAEAD1L, 2L, 0xB4DAEAD1L, 2L, 0xB4DAEAD1L};
                    int i;
                    g_219--;
                    if (p_58)
                    {
                        g_200[3][3].f1 = (safe_sub_func_uint32_t_u_u(l_197[1][3], l_218));
                        l_224[5] = (-3L);
                    }
                    else
                    {
                        char l_225 = 0x0FL;
                        l_225 = (g_97 <= func_70(p_58));
                        l_94 = ((g_200[3][3].f3 = (safe_mul_func_int16_t_s_s(g_98, g_200[3][3].f3))) > g_126);
                        l_94 = l_225;
                    }
                    for (g_97 = 0; (g_97 <= 2); g_97 += 1)
                    {
                        int i, j, k;
                        l_234 = (safe_mul_func_uint16_t_u_u(0xAAABL, ((safe_add_func_int8_t_s_s((l_95[g_97][l_93][(g_97 + 3)] = l_95[g_97][l_93][(g_97 + 3)]), (safe_rshift_func_uint16_t_u_u(p_58, 4)))) >= (p_58 && l_217[0]))));
                    }
                    for (l_109 = 3; (l_109 >= 0); l_109 -= 1)
                    {
                        g_200[3][3].f1 &= (l_217[3] || (g_98++));
                    }
                }
                g_237++;
                for (g_98 = 0; (g_98 <= 3); g_98 += 1)
                {
                    int i, j;
                    return l_197[l_93][g_98];
                }
            }
            else
            {
                unsigned l_240 = 0UL;
                l_240 = g_237;
            }
            ++g_241;
            if ((g_84 == (safe_add_func_int32_t_s_s((-1L), (l_159.f3 || l_65)))))
            {
                unsigned short l_272 = 9UL;
                int l_296[6][5][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}};
                int i, j, k;
                for (l_155 = 0; (l_155 <= 2); l_155 += 1)
                {
                    short l_270[9][1];
                    int l_298 = 0x70504D8EL;
                    struct S0 l_304 = {219,-2767,-1L,6984};
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_270[i][j] = 0xD498L;
                    }
                    for (l_123 = 0; (l_123 <= 2); l_123 += 1)
                    {
                        int l_273 = 8L;
                        int i, j, k;
                        l_273 ^= (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((65533UL < (safe_sub_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s(l_95[(l_123 + 1)][l_155][(l_93 + 3)], 2)) , l_119) | p_58), (g_219 = ((p_58 == l_83) > (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(func_66(g_3), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((g_271 = l_270[2][0]), 0x12D8L)), l_272)) , l_159.f1), 65534UL)), 0x7A50L)), 7)))), p_58))))))) , 0xE7L), l_123)) , 65526UL), 1)) == g_126) < l_119), p_58));
                    }
                    for (g_136 = 0; (g_136 >= 0); g_136 -= 1)
                    {
                        int i, j, k;
                        if (l_95[(l_155 + 2)][l_155][(l_155 + 2)])
                            break;
                        if (l_95[(l_93 + 1)][l_155][(g_136 + 5)])
                            continue;
                    }
                    if (l_95[(l_155 + 3)][l_155][l_155])
                    {
                        char l_297 = 0x43L;
                        int l_300 = (-3L);
                        g_200[3][3].f3 = (((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((!((func_70((func_70((safe_mod_func_int8_t_s_s(p_58, (safe_mul_func_uint16_t_u_u((g_84 , l_159.f0), ((l_109 = (safe_add_func_int16_t_s_s(3L, ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((func_70(g_200[3][3].f0) | (l_94 = (safe_add_func_int8_t_s_s((l_297 = (safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_3, p_58)), ((l_296[0][4][0] || g_200[3][3].f3) != p_58))) && p_58), p_58))), 7UL)))), l_197[0][2])), 1UL)) >= g_237)))) && p_58)))))) & p_58)) ^ 3L) != g_98)), 4)) < p_58), 1L)) > g_154) , 0xAF24A4C6L);
                        --g_301[1];
                        l_159.f3 = ((p_58 ^ (l_304 , (((p_58 | (((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(1L, g_136)), g_241)) < (~((l_296[0][4][0] = func_66(l_159.f1)) == (g_200[3][3].f3 , g_200[3][3].f0)))), l_300)) && p_58) , 1UL)) , g_126) ^ 0UL))) == g_200[3][3].f1);
                    }
                    else
                    {
                        unsigned l_313 = 0x6956F44BL;
                        int l_318 = 1L;
                        l_95[4][0][1] ^= (~((l_109 = ((func_66((safe_mod_func_uint32_t_u_u((!l_313), func_70((p_58 , func_66(g_301[1])))))) || (l_197[1][3] < (((safe_add_func_uint16_t_u_u((l_159.f0 < (safe_mul_func_int8_t_s_s((0xE5901075L & 1L), 0xF9L))), l_318)) < 0x8EL) & g_200[3][3].f1))) ^ g_84)) , p_58));
                    }
                }
            }
            else
            {
                unsigned short l_323 = 65535UL;
                int l_329[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_329[i] = 0xF350E1C6L;
                l_109 = (l_299 > (g_98 = (safe_rshift_func_uint16_t_u_u((func_70((((safe_lshift_func_uint8_t_u_s((l_93 ^ (l_323 = 9L)), 2)) & (l_94 = 249UL)) <= l_159.f1)) & func_70(((safe_rshift_func_int16_t_s_s((g_136 = (safe_mod_func_uint8_t_u_u(p_58, ((p_58 > l_328) , g_301[3])))), 1)) >= l_329[1]))), g_98))));
                if ((safe_sub_func_int16_t_s_s(7L, ((safe_add_func_uint8_t_u_u((g_84 , l_83), (p_58 | ((l_234 <= ((l_334 = p_58) > func_66(func_70(p_58)))) != 0UL)))) , l_329[1]))))
                {
                    unsigned char l_335 = 247UL;
                    int l_376 = (-1L);
                    if (g_301[1])
                    {
                        l_335--;
                    }
                    else
                    {
                        short l_340 = 0L;
                        l_299 ^= (safe_rshift_func_int8_t_s_u(l_137, 1));
                        l_342++;
                        if (g_97)
                            continue;
                        l_109 |= (((!((((g_97 , 251UL) == (safe_lshift_func_int16_t_s_u(l_94, func_70(p_58)))) != (func_70((l_299 |= (~g_3))) >= g_200[3][3].f1)) < (((l_137 |= ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(func_70((safe_add_func_uint32_t_u_u(l_95[4][0][4], g_200[3][3].f2))), l_329[1])), 1)), p_58)) , 5L)) == l_122) == g_200[3][3].f1))) > l_355) , l_356);
                    }
                    for (g_154 = 0; (g_154 < 54); g_154 = safe_add_func_uint16_t_u_u(g_154, 2))
                    {
                        l_359[0][1] &= l_356;
                        l_376 = ((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((func_70(g_219) | ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_301[1], func_66((safe_mod_func_uint16_t_u_u((l_356 > (safe_mul_func_int8_t_s_s(g_200[3][3].f2, (-9L)))), func_70(((safe_lshift_func_uint16_t_u_s(l_329[1], 10)) , p_58))))))), g_136)), 1L)) <= 0xB678B59EL)), p_58)), l_328)) ^ g_341);
                        l_109 = 0L;
                    }
                    l_137 = ((safe_rshift_func_uint8_t_u_u(p_58, 2)) < (l_299 = ((safe_sub_func_int8_t_s_s(g_84, (l_381[0] = g_98))) > func_70(l_359[0][0]))));
                }
                else
                {
                    g_84 = g_97;
                    for (g_98 = 0; (g_98 <= 2); g_98 += 1)
                    {
                        int i;
                        return l_329[g_98];
                    }
                }
                if (p_58)
                    break;
                for (g_97 = (-30); (g_97 == (-11)); g_97++)
                {
                    unsigned short l_396 = 0x5CBCL;
                    l_329[1] = (safe_lshift_func_uint16_t_u_s(p_58, 8));
                    if (g_271)
                    {
                        char l_387 = (-7L);
                        int l_390 = (-5L);
                        g_200[3][3].f1 &= p_58;
                        l_329[1] = g_98;
                        l_95[4][0][0] |= (p_58 != (l_137 = (((safe_unary_minus_func_int16_t_s((((l_390 = (((((l_159.f1 = l_387) < 0x14F1L) != ((safe_add_func_int16_t_s_s((l_137 , p_58), g_271)) > l_387)) == p_58) , func_70((g_237 , g_3)))) == 0x7CED22EAL) ^ l_387))) || p_58) != l_329[1])));
                    }
                    else
                    {
                        unsigned char l_397 = 0xA5L;
                        l_397 = (l_299 &= ((safe_rshift_func_int16_t_s_s(l_393, 7)) , (safe_add_func_int8_t_s_s(l_396, l_137))));
                    }
                }
            }
        }
        for (l_137 = 1; (l_137 >= 0); l_137 -= 1)
        {
            unsigned char l_401 = 0x21L;
            int l_410 = 0x828B4411L;
            --l_401;
            for (g_399 = 1; (g_399 >= 0); g_399 -= 1)
            {
                int i, j;
                l_411 = ((safe_mul_func_int16_t_s_s(l_359[l_137][(l_137 + 1)], (((((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_58, (((l_410 = ((func_70(g_200[3][3].f2) || (l_393 != (p_58 > func_70((((p_58 , 1L) != (l_401 && l_401)) || g_200[3][3].f1))))) & g_398)) < g_98) , g_98))), l_65)) <= p_58) && p_58) ^ 0xC8L) >= l_197[3][2]))) < l_401);
            }
        }
    }
    return g_3;
}







static unsigned short func_66(unsigned char p_67)
{
    unsigned l_90 = 4294967289UL;
    l_90++;
    return g_84;
}







static char func_70(unsigned p_71)
{
    unsigned short l_89[8] = {65535UL, 0x9CC0L, 65535UL, 0x9CC0L, 65535UL, 0x9CC0L, 65535UL, 0x9CC0L};
    int i;
    l_89[3] &= (safe_add_func_int8_t_s_s(g_3, (safe_mul_func_uint8_t_u_u((p_71 >= (-1L)), 0x69L))));
    return p_71;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_200[i][j].f0, "g_200[i][j].f0", print_hash_value);
            transparent_crc(g_200[i][j].f1, "g_200[i][j].f1", print_hash_value);
            transparent_crc(g_200[i][j].f2, "g_200[i][j].f2", print_hash_value);
            transparent_crc(g_200[i][j].f3, "g_200[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_301[i], "g_301[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_427[i][j][k], "g_427[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_446[i][j][k], "g_446[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_447, "g_447", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_448[i][j], "g_448[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_714[i], "g_714[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_738[i][j][k], "g_738[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_838, "g_838", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1119[i].f0, "g_1119[i].f0", print_hash_value);
        transparent_crc(g_1119[i].f1, "g_1119[i].f1", print_hash_value);
        transparent_crc(g_1119[i].f2, "g_1119[i].f2", print_hash_value);
        transparent_crc(g_1119[i].f3, "g_1119[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1270[i], "g_1270[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1375, "g_1375", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1395[i][j], "g_1395[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1396[i][j][k], "g_1396[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1397, "g_1397", print_hash_value);
    transparent_crc(g_1473, "g_1473", print_hash_value);
    transparent_crc(g_1525, "g_1525", print_hash_value);
    transparent_crc(g_1551, "g_1551", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
