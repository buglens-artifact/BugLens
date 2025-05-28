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



static unsigned char g_7 = 0x31L;
static int g_9 = 0x10B999FBL;
static int g_78 = 1L;
static short g_79[9][7][4] = {{{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}, {{0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}, {0x6E99L, 0x037BL, 0xDFF6L, 0x3F99L}}};
static short g_94[6][5] = {{1L, 0xAC11L, 0xA06AL, 0xBA41L, 0xC0EDL}, {1L, 0xAC11L, 0xA06AL, 0xBA41L, 0xC0EDL}, {1L, 0xAC11L, 0xA06AL, 0xBA41L, 0xC0EDL}, {1L, 0xAC11L, 0xA06AL, 0xBA41L, 0xC0EDL}, {1L, 0xAC11L, 0xA06AL, 0xBA41L, 0xC0EDL}, {1L, 0xAC11L, 0xA06AL, 0xBA41L, 0xC0EDL}};
static int g_97[5] = {9L, 9L, 9L, 9L, 9L};
static char g_106[4] = {(-2L), 0x12L, (-2L), 0x12L};
static int *g_137[6] = {&g_9, &g_9, (void*)0, &g_9, &g_9, (void*)0};
static int **g_136 = &g_137[4];
static int g_202[8] = {5L, 1L, 5L, 1L, 5L, 1L, 5L, 1L};
static unsigned g_287[5][7][7] = {{{6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}}, {{6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}}, {{6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}}, {{6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}}, {{6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}, {6UL, 0xEC199B82L, 1UL, 0x2946B7A6L, 0x749505C1L, 0xF46E8A0CL, 0xD37BD4C3L}}};
static int *g_300 = &g_9;
static int g_320 = 0xBD8A15FCL;
static int *g_321 = &g_78;
static int g_572 = 4L;
static unsigned g_577 = 0xD563EE79L;
static char g_707[7][4] = {{(-1L), 0x88L, 0x33L, 0x33L}, {(-1L), 0x88L, 0x33L, 0x33L}, {(-1L), 0x88L, 0x33L, 0x33L}, {(-1L), 0x88L, 0x33L, 0x33L}, {(-1L), 0x88L, 0x33L, 0x33L}, {(-1L), 0x88L, 0x33L, 0x33L}, {(-1L), 0x88L, 0x33L, 0x33L}};
static int *g_713[10] = {&g_78, (void*)0, &g_78, (void*)0, &g_78, (void*)0, &g_78, (void*)0, &g_78, (void*)0};
static unsigned char g_777 = 0x82L;
static unsigned g_821 = 0xC3874AE6L;
static int *g_885 = (void*)0;
static int g_1017 = 0x289EF693L;
static unsigned short g_1081[9][1] = {{0x0F94L}, {0x0F94L}, {0x0F94L}, {0x0F94L}, {0x0F94L}, {0x0F94L}, {0x0F94L}, {0x0F94L}, {0x0F94L}};
static unsigned short g_1209 = 0x69F7L;
static unsigned char g_1256 = 1UL;
static int g_1306 = 0x3B8120DCL;
static short g_1334 = 0L;
static int g_1533 = (-9L);



static int func_1(void);
static int * func_2(unsigned p_3, int * p_4, short p_5, unsigned char p_6);
static short func_10(unsigned char p_11, int * p_12, int * p_13, unsigned short p_14);
static short func_21(int * p_22, int * p_23, unsigned p_24);
static int * func_25(short p_26, unsigned p_27, int * p_28, char p_29);
static short func_35(int p_36, int * p_37, unsigned char p_38);
static unsigned short func_40(int * p_41, short p_42, unsigned p_43);
static int * func_44(short p_45, unsigned p_46, int * p_47, char p_48);
static int * func_49(int p_50, int * p_51, int * p_52, unsigned p_53, unsigned char p_54);
static int func_55(unsigned p_56, unsigned p_57, short p_58);
static int func_1(void)
{
    int *l_8[1];
    unsigned l_30 = 1UL;
    unsigned l_1350 = 4294967289UL;
    int **l_1537 = &g_137[4];
    int *l_1538[3];
    unsigned short l_1548 = 0xBAEDL;
    int ***l_1550 = &g_136;
    unsigned char l_1577 = 0x88L;
    int i;
    for (i = 0; i < 1; i++)
        l_8[i] = &g_9;
    for (i = 0; i < 3; i++)
        l_1538[i] = &g_1306;
    (*l_1537) = func_2(g_7, l_8[0], ((func_10((safe_div_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(((g_9 != (safe_div_func_uint32_t_u_u(5UL, g_9))) & g_7), (func_21(&g_9, func_25(((g_7 , g_9) , g_7), l_30, &g_9, g_7), g_572) >= g_287[3][2][3]))) | g_287[3][1][2]) && 0xE03EC048L), l_1350)), l_8[0], &g_1306, g_7) & 0x1EE9L) == 0xDE3CL), g_1017);
    (*l_1537) = l_1538[2];
    if ((((0xD6L || 0x9FL) | (~(-1L))) & g_94[2][3]))
    {
        unsigned l_1543 = 0x6486487BL;
        int *l_1549 = &g_202[0];
        (*l_1549) = (((&g_136 == ((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((g_821 , ((g_9 && l_1543) >= ((((*l_1549) >= (-10L)) ^ (-6L)) ^ (*l_1549)))), g_9)), g_1081[5][0])) , l_1550)) < g_1081[5][0]) != 0UL);
        return g_106[2];
    }
    else
    {
        int l_1551 = 0x003473A8L;
        int l_1580 = 0x30CA4E1EL;
        int *l_1592[10][6] = {{&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}, {&g_320, (void*)0, (void*)0, &g_78, &g_1533, &g_78}};
        int **l_1595[5][9][5] = {{{&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}}, {{&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}}, {{&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}}, {{&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}}, {{&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}, {&g_713[4], &g_137[4], (void*)0, &l_8[0], &g_300}}};
        char l_1609 = 0L;
        int i, j, k;
        if (((void*)0 == &g_713[4]))
        {
            short l_1556 = 0x8031L;
            int *l_1566 = &g_1017;
            for (g_1209 = 0; (g_1209 <= 4); g_1209 += 1)
            {
                unsigned l_1559 = 0x71465C91L;
                int *l_1568 = &g_320;
                if (l_1551)
                {
                    unsigned char l_1567 = 0x26L;
                    (*g_300) = (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(l_1556, (safe_lshift_func_uint8_t_u_u((l_1559 == ((4UL <= l_1551) && (safe_div_func_int8_t_s_s((-1L), (safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_287[3][4][4] >= l_1559), g_1533)) != 65532UL), g_97[1])))))), 0)))), 2));
                    if (l_1567)
                        break;
                }
                else
                {
                    if ((*g_300))
                        break;
                    if ((*l_1566))
                        break;
                }
                (*l_1537) = l_1568;
                for (l_1556 = 1; (l_1556 <= 4); l_1556 += 1)
                {
                    unsigned l_1573[2][6] = {{8UL, 4294967288UL, 0x12DE106FL, 0x12DE106FL, 4294967288UL, 8UL}, {8UL, 4294967288UL, 0x12DE106FL, 0x12DE106FL, 4294967288UL, 8UL}};
                    int **l_1576 = &l_8[0];
                    int *l_1589 = (void*)0;
                    int i, j;
                    (*l_1537) = ((((l_1551 & (safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(l_1551, 11)), func_35((((l_1573[0][3] >= 0x5899L) <= (l_1573[0][3] == ((*l_1568) == g_1081[7][0]))) <= (*l_1566)), l_1568, (**l_1576))))) > g_106[1]) , 0x16AED505L) , &g_1533);
                    for (g_1334 = 1; (g_1334 <= 4); g_1334 += 1)
                    {
                        int i, j, k;
                        if (g_287[g_1334][(g_1334 + 2)][(g_1209 + 2)])
                            break;
                        (*l_1568) = (((l_1577 , (((((safe_mul_func_int8_t_s_s(g_821, l_1580)) || func_10(((safe_div_func_int32_t_s_s((*g_300), l_1551)) & ((safe_rshift_func_int8_t_s_u((**l_1576), 4)) != (&g_320 == l_1566))), l_1566, l_1589, (*l_1568))) ^ 0x5A725AB6L) , 0x16L) <= g_9)) , (*l_1566)) != l_1551);
                    }
                }
            }
            (*l_1537) = (((((g_821 & ((void*)0 != &g_320)) >= 0xB510AD47L) , (safe_mul_func_int8_t_s_s(((l_1592[3][4] == l_1566) , g_1017), ((!((safe_sub_func_int32_t_s_s(((l_1595[0][8][3] != (void*)0) && g_1533), g_707[2][3])) , g_1081[5][0])) | g_1209)))) && g_1334) , &g_1533);
        }
        else
        {
            (*g_300) = (*g_300);
        }
        for (l_1350 = 0; (l_1350 == 6); l_1350 = safe_add_func_uint32_t_u_u(l_1350, 3))
        {
            int l_1602 = 0L;
            int ***l_1608 = &g_136;
            short l_1614 = 0xA2AFL;
            unsigned l_1617 = 4294967295UL;
            unsigned char l_1619 = 253UL;
            for (g_320 = 0; (g_320 > (-16)); g_320 = safe_sub_func_uint8_t_u_u(g_320, 9))
            {
                unsigned l_1606 = 0x9BDA9196L;
                int ***l_1607 = &l_1595[2][1][3];
                (*g_300) = (*g_300);
            }
            if ((*g_300))
                break;
            (*l_1537) = (((safe_lshift_func_int16_t_s_s(g_1017, 6)) || ((g_94[2][1] & l_1617) >= ((safe_unary_minus_func_int32_t_s(((g_106[3] & (+0x76541D3EL)) , (g_320 > g_202[0])))) || g_572))) , &g_78);
        }
        return g_1533;
    }
}







static int * func_2(unsigned p_3, int * p_4, short p_5, unsigned char p_6)
{
    unsigned l_1363 = 4294967288UL;
    int *l_1374 = &g_1306;
    int ***l_1402 = &g_136;
    int l_1409 = 2L;
    int *l_1439 = &g_9;
    int *l_1440 = (void*)0;
    unsigned char l_1516 = 3UL;
    int **l_1534 = &g_321;
    for (g_1256 = 0; (g_1256 <= 35); ++g_1256)
    {
        unsigned char l_1370 = 0x90L;
        int *l_1379[2];
        int *l_1410[10][6] = {{&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}, {&l_1409, (void*)0, (void*)0, &l_1409, (void*)0, (void*)0}};
        unsigned l_1455[6] = {0xA1744425L, 0x5A5D2BABL, 0xA1744425L, 0x5A5D2BABL, 0xA1744425L, 0x5A5D2BABL};
        int i, j;
        for (i = 0; i < 2; i++)
            l_1379[i] = &g_1306;
        g_885 = p_4;
        if ((((&g_137[4] == (void*)0) > ((((safe_add_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_5, (safe_rshift_func_int8_t_s_u(g_106[3], (func_10((safe_mul_func_uint16_t_u_u(((*p_4) | (l_1363 , ((safe_sub_func_uint32_t_u_u(g_320, (safe_mod_func_int8_t_s_s((((((safe_add_func_uint32_t_u_u(l_1363, l_1370)) >= g_1081[5][0]) ^ 5L) > l_1370) != 3UL), g_94[5][3])))) , 0xA0AB3C8EL))), p_5)), p_4, p_4, l_1363) >= p_3))))) >= 0x0071L), g_320)) <= l_1370) | l_1370) , l_1363)) , l_1370))
        {
            int *l_1373 = &g_320;
            int **l_1380[4][1];
            char l_1441 = 0x0DL;
            int **l_1477[7] = {&l_1373, &l_1373, &l_1379[0], &l_1373, &l_1373, &l_1379[0], &l_1373};
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1380[i][j] = &g_713[3];
            }
            l_1374 = (p_3 , func_49((safe_sub_func_int8_t_s_s(((-1L) == func_21(l_1373, l_1374, (safe_add_func_uint8_t_u_u(0x57L, (g_94[0][2] , p_5))))), l_1370)), l_1379[0], l_1374, g_1017, p_6));
            for (p_3 = 0; (p_3 == 51); p_3 = safe_add_func_uint8_t_u_u(p_3, 8))
            {
                int *l_1393 = &g_1017;
                int ***l_1394 = &l_1380[1][0];
                for (g_1017 = 22; (g_1017 <= (-23)); g_1017 = safe_sub_func_int16_t_s_s(g_1017, 3))
                {
                    unsigned char l_1395[5][8][6] = {{{0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}}, {{0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}}, {{0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}}, {{0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}}, {{0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}, {0xE6L, 1UL, 0xC2L, 255UL, 0x0DL, 255UL}}};
                    int i, j, k;
                    (*g_885) = (g_106[3] > (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_u(g_202[0], 5)) >= (p_4 != (void*)0)) , l_1394) != (void*)0), p_5)) ^ l_1395[4][5][0]), (*l_1373))) == 0xEC67L) > (*l_1373)));
                }
                if ((*l_1374))
                {
                    int l_1398 = (-1L);
                    (*p_4) = func_21(l_1374, p_4, g_1256);
                    for (g_1334 = 0; (g_1334 != 16); g_1334++)
                    {
                        if ((*p_4))
                            break;
                        (*l_1374) = (*p_4);
                    }
                    (**l_1394) = l_1379[1];
                }
                else
                {
                    int *l_1401 = &g_202[2];
                    l_1401 = p_4;
                    (**l_1394) = p_4;
                }
                (*l_1374) = (((l_1402 != ((p_5 , 1L) , l_1394)) || (((((*p_4) & (*p_4)) , g_320) ^ (+(((safe_mul_func_uint16_t_u_u(65530UL, (((safe_rshift_func_int16_t_s_s(p_3, 14)) || 0L) ^ g_577))) && g_1209) , g_106[3]))) == g_9)) & g_9);
                (**l_1394) = &g_202[0];
            }
            (*l_1373) = (safe_lshift_func_int16_t_s_u((-8L), 1));
            if ((p_6 > g_1334))
            {
                int l_1431[10][4][6] = {{{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}, {{1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}, {1L, 0x7FF9557CL, (-1L), 0x7FF9557CL, 1L, (-1L)}}};
                int *l_1434 = &g_320;
                int i, j, k;
                for (l_1370 = 0; (l_1370 <= 3); l_1370 += 1)
                {
                    int ***l_1417 = &l_1380[1][0];
                    int i;
                    if (((g_287[3][1][2] != ((*l_1374) , (l_1409 , 7UL))) , (l_1379[0] == l_1410[0][2])))
                    {
                        unsigned l_1411 = 4294967294UL;
                        int *l_1412 = &l_1409;
                        int i;
                        g_137[l_1370] = (l_1411 , l_1412);
                        (*p_4) = (safe_add_func_int32_t_s_s((*p_4), 0x9053E671L));
                    }
                    else
                    {
                        int *l_1418 = &l_1409;
                        (*l_1373) = (((safe_sub_func_int8_t_s_s(0L, ((((&l_1380[1][0] == (((void*)0 != l_1417) , &g_136)) != (!((p_6 , p_4) == p_4))) > 0x58L) >= g_79[4][0][0]))) , 0x9423L) >= 65531UL);
                    }
                }
                l_1434 = l_1440;
            }
            else
            {
                unsigned l_1450 = 0xDCE1CF20L;
                int *l_1454 = &g_202[0];
                unsigned l_1463 = 7UL;
                if ((9UL <= ((((((l_1441 || ((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(p_3, g_79[7][1][3])), (safe_lshift_func_uint8_t_u_s(g_577, p_5)))), 13)) <= (l_1450 <= (p_5 >= (0xCFL | 255UL))))) , p_6) > l_1450) , g_94[0][2]) , g_202[6]) ^ (*p_4))))
                {
                    (*l_1402) = &p_4;
                    g_136 = &l_1373;
                    (*g_885) = (!func_10(g_79[7][0][1], (*g_136), (*g_136), g_1081[5][0]));
                    for (g_1209 = 12; (g_1209 >= 37); ++g_1209)
                    {
                        int l_1453 = 0x4F2D4857L;
                        if (l_1453)
                            break;
                        return l_1454;
                    }
                }
                else
                {
                    short l_1458 = 0L;
                    if ((1L | (l_1455[3] < ((safe_mul_func_int8_t_s_s(((+g_777) > 1L), p_6)) & 0xD39E40F4L))))
                    {
                        return p_4;
                    }
                    else
                    {
                        (*g_885) = l_1458;
                        return l_1379[0];
                    }
                }
                if ((*p_4))
                    break;
                if ((***l_1402))
                {
                    int *l_1462[10][5][4] = {{{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}, {{&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}, {&g_320, &g_320, &g_78, &g_202[7]}}};
                    int i, j, k;
                    for (g_1209 = 8; (g_1209 > 12); ++g_1209)
                    {
                        int *l_1461[3][8];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_1461[i][j] = &l_1409;
                        }
                        (*g_136) = l_1410[5][3];
                        (*g_300) = l_1463;
                        if ((*p_4))
                            continue;
                        l_1461[1][5] = (*g_136);
                    }
                    if ((*p_4))
                        continue;
                    for (g_9 = 0; (g_9 == (-20)); g_9--)
                    {
                        unsigned l_1468 = 0x9B2CE4B1L;
                        (*l_1374) = func_55(g_1334, (safe_rshift_func_int8_t_s_s(g_1017, p_6)), l_1468);
                        return l_1454;
                    }
                    for (l_1463 = 0; (l_1463 < 17); l_1463++)
                    {
                        if ((*p_4))
                            break;
                        (**l_1402) = (*g_136);
                    }
                }
                else
                {
                    (*g_136) = l_1454;
                    (*g_136) = (void*)0;
                    return p_4;
                }
                if (((p_3 || g_1017) && (safe_div_func_uint32_t_u_u(g_202[3], (1L ^ g_287[3][1][2])))))
                {
                    int *l_1480 = &g_9;
                    for (p_6 = 0; (p_6 != 28); p_6 = safe_add_func_uint16_t_u_u(p_6, 9))
                    {
                        (*g_136) = (*g_136);
                        (*l_1374) = (((safe_add_func_int16_t_s_s(0x059EL, (*l_1454))) , g_777) == g_97[1]);
                    }
                }
                else
                {
                    int *l_1487 = &l_1409;
                    int *l_1517[2][9];
                    char l_1523 = 0x5FL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_1517[i][j] = &g_202[2];
                    }
                    if ((safe_sub_func_uint32_t_u_u((((((safe_add_func_uint8_t_u_u(0x8DL, (safe_mul_func_int16_t_s_s((((((*g_136) == l_1487) ^ (((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((*p_4), (*l_1487))), (g_94[5][1] , func_35((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_94[4][1], ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(((void*)0 == (*g_136)), 1L)) >= 65531UL) > 0x5CL), (*p_4))), g_1306)) | 1UL))), g_572)), (*g_136), (*l_1454))))) , 0x9074L) == 0x48F1L)) , (*l_1454)) <= g_1256), p_5)))) , p_6) >= p_3) < p_5) , p_5), (*l_1454))))
                    {
                        (*l_1454) = (safe_sub_func_int32_t_s_s((*p_4), (safe_div_func_uint8_t_u_u((((((+((p_3 || (p_6 , g_106[3])) ^ g_79[6][6][0])) , (**l_1402)) != p_4) ^ p_3) >= 0x211FL), p_5))));
                        (*l_1454) = 3L;
                    }
                    else
                    {
                        int ***l_1518 = &l_1477[1];
                        (*l_1454) = ((((*p_4) , &g_136) != l_1518) > p_3);
                    }
                    if ((*p_4))
                    {
                        l_1454 = (*g_136);
                    }
                    else
                    {
                        (*p_4) = func_35(func_35((((safe_lshift_func_int8_t_s_s((g_707[5][1] <= ((p_4 != p_4) & (&g_137[0] != (void*)0))), (safe_mod_func_uint32_t_u_u(0xF3A6BA55L, ((&g_136 == (void*)0) , g_9))))) >= l_1523) , (-2L)), (*g_136), g_7), (*g_136), (*l_1374));
                    }
                }
            }
        }
        else
        {
            int l_1526 = (-10L);
            int **l_1529 = (void*)0;
            (*g_300) = ((((safe_lshift_func_uint16_t_u_u(l_1526, 0)) , (*p_4)) == (p_3 | (+(safe_mod_func_uint8_t_u_u((l_1526 || (255UL < p_6)), (-1L)))))) == g_1256);
            l_1440 = p_4;
            (*l_1440) = 2L;
            for (g_821 = 0; (g_821 > 14); g_821 = safe_add_func_int8_t_s_s(g_821, 3))
            {
                int **l_1532[7] = {&g_885, &g_885, &g_885, &g_885, &g_885, &g_885, &g_885};
                int i;
                l_1410[0][2] = &l_1526;
                if (g_1533)
                    continue;
            }
        }
    }
    (*l_1374) = (*p_4);
    (*l_1534) = p_4;
    (*l_1374) = (((p_6 < 0x63L) , g_79[1][4][1]) > ((&g_202[0] == (void*)0) , ((~(&p_4 == (g_777 , (void*)0))) > ((-1L) || g_287[3][1][2]))));
    return (*l_1534);
}







static short func_10(unsigned char p_11, int * p_12, int * p_13, unsigned short p_14)
{
    int *l_1351 = &g_202[0];
    int **l_1352 = &g_713[9];
    (*p_12) = 0xA0D1249AL;
    (*l_1352) = l_1351;
    return (*l_1351);
}







static short func_21(int * p_22, int * p_23, unsigned p_24)
{
    int ***l_809 = &g_136;
    unsigned l_812 = 4294967287UL;
    int *l_813 = &g_202[0];
    int **l_814 = (void*)0;
    char l_820 = 1L;
    unsigned l_823[10] = {4294967295UL, 1UL, 4294967295UL, 1UL, 4294967295UL, 1UL, 4294967295UL, 1UL, 4294967295UL, 1UL};
    int l_824 = 0x823BCB19L;
    int l_910 = 0xDF538413L;
    unsigned char l_956 = 1UL;
    int *l_978[9][4][6] = {{{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}, {{&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}, {&g_78, &g_320, &l_824, (void*)0, &g_202[0], (void*)0}}};
    int l_1001 = (-5L);
    int l_1071 = (-5L);
    unsigned short l_1177 = 0xF2A5L;
    unsigned l_1232 = 3UL;
    int *l_1340 = (void*)0;
    char l_1348[4] = {0xCFL, 1L, 0xCFL, 1L};
    int i, j, k;
    p_23 = p_22;
    for (p_24 = 6; (p_24 < 26); ++p_24)
    {
        unsigned short l_817 = 0UL;
        (*l_813) = l_817;
        return g_106[3];
    }
    if ((p_24 ^ g_821))
    {
        int l_822[7] = {(-1L), (-2L), (-1L), (-2L), (-1L), (-2L), (-1L)};
        int **l_854 = &g_713[8];
        int l_856 = 0x4D426EE7L;
        int l_880[3][8] = {{0x1DF1E400L, 0x1DF1E400L, 0xA17FECC8L, 0x1DF1E400L, 0x1DF1E400L, 0xA17FECC8L, 0x1DF1E400L, 0x1DF1E400L}, {0x1DF1E400L, 0x1DF1E400L, 0xA17FECC8L, 0x1DF1E400L, 0x1DF1E400L, 0xA17FECC8L, 0x1DF1E400L, 0x1DF1E400L}, {0x1DF1E400L, 0x1DF1E400L, 0xA17FECC8L, 0x1DF1E400L, 0x1DF1E400L, 0xA17FECC8L, 0x1DF1E400L, 0x1DF1E400L}};
        int l_882 = 0x204AF780L;
        unsigned l_897[6] = {1UL, 1UL, 4294967293UL, 1UL, 1UL, 4294967293UL};
        int *l_929 = &g_202[0];
        unsigned short l_980 = 0x38E0L;
        unsigned l_981 = 0xFDBE6018L;
        int i, j;
        l_824 = (*g_300);
        if ((((void*)0 == &g_136) , ((*p_23) >= ((g_97[2] < (safe_add_func_int8_t_s_s(((-1L) < l_822[2]), (+((p_24 & 1UL) & ((-1L) < g_320)))))) , g_106[3]))))
        {
            unsigned short l_849 = 0x8E6AL;
            int *l_855 = &g_9;
            unsigned l_881 = 0x687A3093L;
            int l_884 = 0L;
            if ((p_24 , (*p_23)))
            {
                short l_829 = (-1L);
                int l_830 = (-1L);
                char l_879 = (-1L);
                for (g_572 = 26; (g_572 <= 22); g_572 = safe_sub_func_uint32_t_u_u(g_572, 6))
                {
                    l_830 = l_829;
                    return p_24;
                }
                l_856 = (safe_div_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((g_106[1] ^ p_24), (-3L))) < ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_821, g_577)), 0xF4L)) | 0L), 14)), p_24)) > (*l_813))), 251UL));
                l_855 = func_49(p_24, ((((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_320 , (*l_813)), p_24)), p_24)) == 0x79L) < 0x338C7C6AL) , p_23), l_855, p_24, p_24);
                (*l_813) = (((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_572, 1L)), (safe_lshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(p_24, p_24)) < ((((((+(((*l_855) , (safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u((!((void*)0 == &l_854)), (l_829 , 65535UL))) , l_879) , l_829) , 0x1629L), 65535UL))) <= p_24)) <= l_880[2][7]) , 1UL) && g_707[5][2]) != 0UL) , l_881)), p_24)))), p_24)) || g_707[3][1]) <= p_24);
            }
            else
            {
                unsigned l_896 = 0x0E235D56L;
                int *l_902 = &g_202[3];
                unsigned l_909 = 0UL;
                if ((*p_22))
                {
                    int *l_883 = (void*)0;
                    (*l_854) = g_885;
                    if (g_9)
                        goto lbl_908;
                }
                else
                {
                    (*l_813) = ((((safe_lshift_func_int8_t_s_u(g_7, 7)) || (safe_sub_func_int32_t_s_s(((&g_137[2] != l_854) <= func_35((*p_22), &g_320, g_287[4][2][1])), func_35(func_35(((safe_div_func_int32_t_s_s(7L, (safe_mod_func_int8_t_s_s(func_35((safe_sub_func_uint8_t_u_u(((&g_9 == (void*)0) | l_896), p_24)), &l_884, p_24), g_79[8][1][1])))) , (*p_22)), p_23, (*l_855)), p_22, l_897[1])))) , p_24) , 7L);
lbl_908:
                    for (l_856 = 0; (l_856 == 25); l_856 = safe_add_func_int16_t_s_s(l_856, 5))
                    {
                        int *l_905 = &g_9;
                        (*l_813) = (*p_22);
                        (*l_813) = ((((safe_add_func_int32_t_s_s((l_902 != (((safe_sub_func_int8_t_s_s((((0x2EL > (-1L)) < g_79[4][0][2]) > (*l_855)), 0x4AL)) <= (-2L)) , l_905)), (((safe_mul_func_uint16_t_u_u(p_24, g_94[0][2])) < p_24) , (*l_855)))) & p_24) > 0xE16C6972L) < g_106[2]);
                    }
                    (*l_902) = (l_909 , 0x9191A672L);
                }
                (*l_902) = (*l_855);
            }
            for (g_821 = 0; g_821 < 5; g_821 += 1)
            {
                g_97[g_821] = 0L;
            }
            (*l_854) = p_22;
        }
        else
        {
            unsigned short l_911 = 6UL;
            int l_919 = 0x33AC28F2L;
            int *l_921 = &l_824;
            int *l_923 = &g_202[3];
            int ***l_949 = &g_136;
            unsigned short l_979 = 0x0766L;
            for (g_572 = 7; (g_572 >= 0); g_572 -= 1)
            {
                unsigned char l_924 = 255UL;
                int *l_938 = &g_78;
                int *l_948 = &g_320;
                unsigned l_950[4][9][7] = {{{1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}}, {{1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}}, {{1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}}, {{1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}, {1UL, 4294967294UL, 1UL, 4294967289UL, 0xD9977B0AL, 3UL, 0x7D12CCB0L}}};
                int i, j, k;
                for (g_320 = 4; (g_320 >= 1); g_320 -= 1)
                {
                    int *l_912 = &g_9;
                    unsigned l_920 = 1UL;
                }
                if ((*p_22))
                    continue;
                for (g_777 = 1; (g_777 <= 7); g_777 += 1)
                {
                    unsigned l_957 = 1UL;
                    int *l_963 = &l_919;
                    if ((*l_929))
                    {
                        int i;
                        g_202[g_777] = (p_24 < (+(*l_938)));
                    }
                    else
                    {
                        unsigned char l_962 = 255UL;
                        (*l_948) = (g_106[0] | func_35((((void*)0 != &p_23) >= (p_24 , 0x9817B301L)), p_23, (*l_938)));
                        (*l_938) = (*p_23);
                        (*l_938) = (safe_sub_func_int8_t_s_s(((((g_106[3] == ((safe_lshift_func_int16_t_s_s((p_24 , 0L), (*l_963))) >= (g_287[3][1][2] | 0x36FAL))) | p_24) != 0x00L) , p_24), p_24));
                        if ((*p_22))
                            break;
                    }
                }
                (*l_854) = (((safe_sub_func_uint16_t_u_u(((255UL <= (func_35((safe_sub_func_uint8_t_u_u(g_320, 0xEAL)), ((((*l_948) < (((p_24 != (*l_929)) & (((((safe_mul_func_int16_t_s_s(1L, (safe_lshift_func_int8_t_s_s(p_24, 6)))) || (*g_300)) && 0x3DCEL) , p_24) != 0x19C9L)) | 1L)) != (*p_23)) , l_978[0][2][4]), p_24) && 0xA1B8L)) , l_979), l_980)) , p_24) , &g_202[3]);
            }
        }
        (*l_854) = p_23;
        (*l_854) = func_49((*l_929), &g_202[0], &l_824, l_981, ((safe_mul_func_int8_t_s_s((((((*l_929) , 1UL) && (func_35((((*p_22) , (~(!65526UL))) <= (safe_mod_func_int32_t_s_s(((-6L) || g_572), 4294967289UL))), p_22, p_24) && g_577)) , g_79[0][5][3]) ^ 9UL), g_79[1][5][1])) > g_94[0][2]));
    }
    else
    {
        int *l_990 = &g_202[3];
        unsigned l_1016 = 4294967295UL;
        int *l_1152[3];
        int ***l_1253 = &g_136;
        int l_1254 = 3L;
        char l_1259[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1152[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_1259[i] = 1L;
    }
    return p_24;
}







static int * func_25(short p_26, unsigned p_27, int * p_28, char p_29)
{
    unsigned l_39 = 0x992DB756L;
    int l_778 = 5L;
    int *l_783 = (void*)0;
    int l_793 = 5L;
    int *l_807[5];
    unsigned l_808 = 0x006DB834L;
    int i;
    for (i = 0; i < 5; i++)
        l_807[i] = (void*)0;
    if (((safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(func_35(l_39, p_28, l_39), 12)) , func_40(p_28, l_39, g_106[3])), p_27)) && l_778))
    {
        for (l_778 = (-22); (l_778 > 29); l_778 = safe_add_func_uint32_t_u_u(l_778, 5))
        {
            int *l_781 = &g_202[2];
            (*l_781) = (l_39 , 0L);
        }
    }
    else
    {
        int **l_782 = &g_713[9];
        (*l_782) = &l_778;
        l_783 = &g_202[2];
    }
    for (l_778 = 20; (l_778 <= (-21)); --l_778)
    {
        unsigned l_788 = 0x6CD0D5D8L;
        int *l_796 = &l_778;
        int *l_805 = &g_78;
        short l_806 = 0xD786L;
        l_793 = ((((((safe_rshift_func_uint8_t_u_u(((+(((l_788 == 7L) > (safe_rshift_func_uint8_t_u_u(((g_97[1] , l_788) , g_97[1]), 1))) != (((p_26 && 0xA56F2707L) > l_788) == ((safe_mul_func_uint8_t_u_u((((*p_28) <= g_79[4][5][2]) >= g_9), g_94[0][2])) , p_29)))) , p_29), 6)) ^ 0xF4A2EBE1L) , p_27) != (*p_28)) || (*p_28)) , l_788);
        (*l_805) = func_35(((safe_add_func_int8_t_s_s(((void*)0 != l_796), (((((0xB1L && 0x4CL) | ((((g_320 < (0x8B5CL & (safe_lshift_func_uint16_t_u_s(func_35((safe_sub_func_uint8_t_u_u(0xD4L, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(0xC9L, p_27)), p_26)))), &l_778, (*l_796)), g_707[5][0])))) <= g_97[1]) > g_97[3]) , 0x2AL)) == (*l_796)) & 0x69L) ^ (*l_796)))) , 0x473C7546L), p_28, p_29);
        (*l_805) = (*p_28);
        (*l_805) = (l_806 > g_572);
    }
    l_808 = l_39;
    return p_28;
}







static short func_35(int p_36, int * p_37, unsigned char p_38)
{
    unsigned l_59 = 0xC02DFCE9L;
    int *l_605 = &g_78;
    unsigned char l_637 = 255UL;
    unsigned l_657 = 0x94A380ADL;
    unsigned l_677 = 1UL;
    int l_685[10][9][2] = {{{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}, {{5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}, {5L, 0x4AEF8A81L}}};
    int l_735[2][2] = {{1L, 0xF38F71D2L}, {1L, 0xF38F71D2L}};
    unsigned char l_769[6][5][5] = {{{251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}}, {{251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}}, {{251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}}, {{251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}}, {{251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}}, {{251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}, {251UL, 0xD7L, 251UL, 0xD7L, 251UL}}};
    int i, j, k;
    return g_79[5][2][3];
}







static unsigned short func_40(int * p_41, short p_42, unsigned p_43)
{
    int l_424 = (-7L);
    unsigned char l_425 = 0x93L;
    unsigned l_440 = 0x8EC9BFC1L;
    short l_443[8] = {(-1L), (-10L), (-1L), (-10L), (-1L), (-10L), (-1L), (-10L)};
    int l_471 = 0xEC917653L;
    unsigned l_510 = 0x71C99DF3L;
    unsigned short l_540 = 1UL;
    int l_563 = 0xB3A03D13L;
    short l_602 = 0x99B2L;
    int i;
    (*g_321) = (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((p_43 > 1L), p_43)), (l_424 || l_425)));
lbl_604:
    if (p_43)
        goto lbl_432;
lbl_432:
    l_424 = l_424;
    if ((g_9 >= (safe_mod_func_uint16_t_u_u(p_43, l_425))))
    {
        int *l_439 = (void*)0;
        char l_442 = 0x55L;
        if (((safe_rshift_func_uint16_t_u_s((g_287[1][1][2] , l_424), 9)) >= l_440))
        {
            unsigned l_441[1];
            int **l_444 = &g_137[4];
            int i;
            for (i = 0; i < 1; i++)
                l_441[i] = 0x02EFC462L;
            l_443[4] = (((g_94[3][4] , ((l_440 || (&g_321 == (g_202[0] , &g_137[4]))) ^ (&p_41 != (void*)0))) >= (g_94[0][2] , (l_441[0] && l_442))) , 0x47DA7E7BL);
            (*l_444) = l_439;
            return l_443[4];
        }
        else
        {
            int **l_445 = &g_137[4];
            int l_457 = 0x17F9BE16L;
            (*l_445) = (void*)0;
            if ((*p_41))
            {
                int l_448 = 0x589CC45FL;
                int l_460 = 1L;
                (*l_445) = (g_79[1][2][2] , &g_320);
                (*g_321) = (*g_321);
                (*g_321) = ((safe_mod_func_int8_t_s_s(3L, l_448)) ^ g_97[1]);
                for (g_78 = (-25); (g_78 > (-27)); --g_78)
                {
                    int ***l_454 = &l_445;
                    (*l_454) = &g_137[4];
                    l_457 = (((*p_41) <= (safe_mul_func_uint8_t_u_u(g_97[1], (7L != p_42)))) <= (1UL <= (&g_300 == (((&p_41 == (void*)0) || p_42) , &g_321))));
                    if ((*g_321))
                        break;
                    l_457 = (safe_lshift_func_int16_t_s_s(((p_41 == (l_460 , p_41)) , (-5L)), p_42));
                }
            }
            else
            {
                int l_472 = 0xAA286EEAL;
                if ((l_440 == (g_287[1][0][0] >= ((safe_lshift_func_uint16_t_u_u(p_42, g_287[4][3][6])) != g_9))))
                {
                    short l_473 = 0xBDBDL;
                    (*g_321) = (safe_mod_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(255UL, (((((p_43 != ((safe_rshift_func_int16_t_s_u((((g_287[1][6][4] < 252UL) , l_471) , 0x15A1L), 9)) , g_9)) | 1UL) != 0x65L) >= g_106[2]) <= 0xDED700B4L))) && l_472) | g_94[0][2]), l_473));
                }
                else
                {
                    unsigned l_488 = 0xB2C6D27BL;
                    (*l_445) = (void*)0;
                    if (((p_42 < (1L != 4294967290UL)) , (g_97[4] || ((safe_mul_func_int16_t_s_s((g_78 && p_42), p_43)) >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_320, 3)), (safe_rshift_func_uint8_t_u_s(p_43, 4))))))))
                    {
                        (*l_445) = &l_424;
                        (*g_321) = (-1L);
                    }
                    else
                    {
                        (*l_445) = func_49(p_43, func_49(((-10L) >= (0x76L >= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((!(g_202[0] != p_42)), 0x2C1EL)), p_43)))), &g_320, p_41, l_488, g_94[1][4]), p_41, p_42, g_320);
                    }
                    for (l_425 = 0; (l_425 == 30); l_425 = safe_add_func_uint16_t_u_u(l_425, 9))
                    {
                        if (l_488)
                            break;
                        (*l_445) = func_44(p_43, g_79[6][5][2], p_41, (g_97[3] , (((safe_mul_func_uint16_t_u_u(p_43, 1UL)) && 3UL) < 0x3FL)));
                        return p_43;
                    }
                }
                for (l_472 = 0; (l_472 <= 4); l_472 += 1)
                {
                    int *l_495 = &l_424;
                    int i;
                    g_137[l_472] = &l_424;
                    (*g_321) = (l_472 || (safe_add_func_uint16_t_u_u(g_287[3][1][2], g_287[0][1][5])));
                    for (l_471 = 1; (l_471 <= 4); l_471 += 1)
                    {
                        int ***l_498 = &l_445;
                        int l_499[5][6] = {{0xC499B9B3L, 0xD7EB9255L, 0x465BDC0FL, 0xD7EB9255L, 0xC499B9B3L, 0x46C01F14L}, {0xC499B9B3L, 0xD7EB9255L, 0x465BDC0FL, 0xD7EB9255L, 0xC499B9B3L, 0x46C01F14L}, {0xC499B9B3L, 0xD7EB9255L, 0x465BDC0FL, 0xD7EB9255L, 0xC499B9B3L, 0x46C01F14L}, {0xC499B9B3L, 0xD7EB9255L, 0x465BDC0FL, 0xD7EB9255L, 0xC499B9B3L, 0x46C01F14L}, {0xC499B9B3L, 0xD7EB9255L, 0x465BDC0FL, 0xD7EB9255L, 0xC499B9B3L, 0x46C01F14L}};
                        int i, j;
                        (*g_321) = ((l_498 != &l_445) | ((l_499[0][4] , (safe_lshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_43, l_472)) & ((safe_unary_minus_func_int8_t_s(1L)) , (-1L))), 4))) , ((l_472 >= (*p_41)) & 0x18A5L)));
                    }
                }
                (*g_321) = (*p_41);
            }
            return g_78;
        }
    }
    else
    {
        int *l_516 = &g_9;
        p_41 = &l_424;
        for (l_424 = 0; (l_424 == 2); l_424 = safe_add_func_uint16_t_u_u(l_424, 7))
        {
            short l_513 = 1L;
            unsigned char l_517 = 0x76L;
            int ***l_518 = &g_136;
            if ((*p_41))
                break;
            for (l_471 = 0; (l_471 <= 3); l_471 += 1)
            {
                int **l_509 = (void*)0;
                int i;
                g_137[l_471] = func_49((safe_mul_func_uint16_t_u_u(((0xCB9BL & (l_509 != &g_300)) && (l_443[(l_471 + 3)] & l_510)), (p_42 || (p_42 | l_517)))), p_41, p_41, p_42, g_320);
                for (l_425 = 0; (l_425 <= 5); l_425 += 1)
                {
                    if ((*p_41))
                        break;
                }
            }
            (*l_518) = &g_300;
            (**l_518) = l_516;
        }
    }
    if ((safe_rshift_func_int8_t_s_u(0x90L, 1)))
    {
        int ***l_521 = &g_136;
        (*l_521) = &p_41;
        (*g_136) = p_41;
    }
    else
    {
        int **l_522 = &g_321;
        (*l_522) = p_41;
        for (l_424 = (-17); (l_424 < 8); ++l_424)
        {
            int *l_556 = &g_320;
            unsigned l_560 = 0x7E97E340L;
            unsigned l_571 = 0xA6A89854L;
            for (l_471 = 0; (l_471 > 26); ++l_471)
            {
                short l_535 = 1L;
                int *l_557 = &g_202[1];
                int ***l_584 = &l_522;
                unsigned l_592 = 4294967290UL;
                if ((g_94[2][2] , 0x21E599BFL))
                {
                    int l_532 = 0x69438219L;
                    int l_564[7][6] = {{0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}, {0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}, {0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}, {0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}, {0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}, {0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}, {0x03BE2B87L, (-1L), 0x1B2874B3L, 0x9E43A25FL, (-1L), 0x272203BEL}};
                    int ***l_565 = &l_522;
                    int i, j;
                    if ((*p_41))
                        break;
                    for (l_425 = 10; (l_425 != 22); ++l_425)
                    {
                        int *l_531[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_531[i] = &g_320;
                        l_532 = (g_79[0][4][3] , (+(safe_div_func_uint32_t_u_u((&g_321 == (void*)0), ((*p_41) , p_43)))));
                        if ((*p_41))
                            break;
                        (*l_522) = &g_78;
                    }
                    l_535 = (safe_add_func_uint8_t_u_u(g_9, p_43));
                    if ((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(l_540, g_106[0])) & 6L) != g_106[3]), 2)))
                    {
                        p_41 = l_557;
                        l_563 = ((safe_div_func_uint16_t_u_u(65528UL, g_287[0][1][5])) ^ g_202[7]);
                        (*l_556) = (*l_557);
                        l_564[0][1] = (*g_300);
                    }
                    else
                    {
                        (*l_522) = p_41;
                        (*l_557) = (p_43 && ((l_565 == ((0xCCL <= (*l_557)) , (void*)0)) | ((safe_unary_minus_func_int8_t_s(((l_443[4] != g_572) != p_43))) , g_97[4])));
                        (*l_557) = (p_43 < 0x5CL);
                        (*l_556) = (((0xACDF83FEL | ((safe_mul_func_uint8_t_u_u(p_42, ((void*)0 != &g_136))) > 1UL)) == (safe_mod_func_uint32_t_u_u(0x5F1A6FC8L, ((((&l_557 != &p_41) , (**l_565)) != (*l_522)) , g_78)))) < g_577);
                    }
                }
                else
                {
                    unsigned short l_589[10][7] = {{0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}, {0UL, 7UL, 0UL, 7UL, 0UL, 7UL, 0UL}};
                    short l_603[8][5];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_603[i][j] = 0x47F5L;
                    }
                    for (l_540 = 0; (l_540 <= 3); l_540 += 1)
                    {
                        int i, j;
                        (*l_556) = (l_443[(l_540 + 4)] | (p_43 <= 0xD11AL));
                    }
                    if ((safe_mul_func_uint16_t_u_u(((&g_136 == l_584) == 0xD5D12417L), (*l_556))))
                    {
                        (*l_584) = (g_78 , &p_41);
                        (*l_556) = (*p_41);
                        (**l_584) = p_41;
                    }
                    else
                    {
                        int *l_597 = (void*)0;
                        (*l_556) = (!((void*)0 != l_597));
                        (*l_556) = (safe_lshift_func_int16_t_s_s(((void*)0 != &g_136), 1));
                        if (l_589[2][2])
                            break;
                        (*l_557) = 0x26B1329EL;
                    }
                    for (l_540 = 0; (l_540 > 11); l_540 = safe_add_func_uint32_t_u_u(l_540, 9))
                    {
                        (*l_557) = (*g_300);
                        if (l_471)
                            goto lbl_604;
                    }
                }
            }
        }
        (*l_522) = &l_563;
    }
    return l_443[1];
}







static int * func_44(short p_45, unsigned p_46, int * p_47, char p_48)
{
    unsigned l_230 = 4294967293UL;
    int l_255 = 0x44FA07D2L;
    int *l_269[9] = {(void*)0, (void*)0, &g_202[0], (void*)0, (void*)0, &g_202[0], (void*)0, (void*)0, &g_202[0]};
    int **l_332 = &g_137[2];
    unsigned char l_346 = 0x57L;
    unsigned char l_412[3];
    unsigned char l_413 = 9UL;
    unsigned l_414 = 0xA13F2A16L;
    int i;
    for (i = 0; i < 3; i++)
        l_412[i] = 0x4DL;
    if ((*p_47))
    {
        int l_210 = (-4L);
        int *l_211[1][4];
        unsigned l_263 = 0x5A0778CEL;
        int **l_268[8] = {(void*)0, (void*)0, &l_211[0][3], (void*)0, (void*)0, &l_211[0][3], (void*)0, (void*)0};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_211[i][j] = &g_202[7];
        }
        for (p_45 = 0; (p_45 <= 4); p_45 += 1)
        {
            unsigned short l_215 = 0x3BF1L;
            int l_250 = 0xF4FE8CBAL;
            int l_267[4][4] = {{0x8337A895L, 0x98C00AADL, 8L, 8L}, {0x8337A895L, 0x98C00AADL, 8L, 8L}, {0x8337A895L, 0x98C00AADL, 8L, 8L}, {0x8337A895L, 0x98C00AADL, 8L, 8L}};
            int i, j;
            l_210 = (*p_47);
            for (l_210 = 4; (l_210 >= 0); l_210 -= 1)
            {
                int **l_212 = &g_137[4];
                int l_248 = 0x3BDF7145L;
                (*l_212) = l_211[0][1];
                for (p_46 = 0; (p_46 <= 4); p_46 += 1)
                {
                    int l_247[1];
                    int ***l_260 = &g_136;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_247[i] = 0x62B848EAL;
                    if ((g_94[p_46][p_46] , (safe_div_func_int32_t_s_s((*p_47), p_46))))
                    {
                        int *l_246[3][5];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_246[i][j] = &g_9;
                        }
                        l_248 = (((safe_div_func_int32_t_s_s((*p_47), p_46)) || 0x75L) <= l_215);
                    }
                    else
                    {
                        unsigned char l_249 = 0x78L;
                        l_249 = (*p_47);
                        l_250 = 0x43211AB2L;
                        l_255 = (*p_47);
                    }
                    l_263 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_45, (&g_136 != (p_48 , (void*)0)))), (p_48 , 0x3AL)));
                    for (l_248 = 0; (l_248 <= 4); l_248 += 1)
                    {
                        return p_47;
                    }
                    (*l_212) = p_47;
                }
                for (l_250 = 4; (l_250 >= 1); l_250 -= 1)
                {
                    unsigned short l_266 = 1UL;
                    for (g_78 = 4; (g_78 >= 1); g_78 -= 1)
                    {
                        (*l_212) = p_47;
                        l_267[2][0] = (safe_mod_func_int32_t_s_s(l_266, g_97[2]));
                        if (l_230)
                            break;
                    }
                }
            }
        }
        l_269[0] = p_47;
        for (g_78 = 0; (g_78 <= 7); g_78 += 1)
        {
            int i;
            g_202[g_78] = (((safe_div_func_int32_t_s_s((g_202[g_78] || (p_46 == g_79[8][5][0])), (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((1L != (safe_div_func_int8_t_s_s(((((*p_47) < (safe_sub_func_uint16_t_u_u(g_94[2][1], g_97[1]))) && ((g_78 , ((void*)0 != p_47)) != 1L)) & g_202[g_78]), g_202[g_78]))), p_46)), (*p_47))))) , 2L) == (*p_47));
            for (p_45 = 0; (p_45 >= (-18)); p_45 = safe_sub_func_int32_t_s_s(p_45, 4))
            {
                p_47 = p_47;
            }
            if ((*p_47))
                continue;
            g_202[g_78] = (*p_47);
        }
    }
    else
    {
        int *l_294 = &g_202[6];
        short l_402 = 0xA32EL;
        for (p_48 = 0; (p_48 == (-2)); p_48 = safe_sub_func_uint32_t_u_u(p_48, 2))
        {
            int *l_284 = (void*)0;
            char l_344 = 0xBCL;
            int ***l_345 = &g_136;
            int l_411 = 0xEB383CFDL;
            l_269[0] = l_284;
        }
        (*l_332) = func_49(l_412[0], l_294, func_49((*l_294), l_294, p_47, p_45, g_9), p_45, g_287[2][0][4]);
        (*g_321) = l_413;
        for (g_78 = 5; (g_78 >= 0); g_78 -= 1)
        {
            int *l_418[3];
            int i;
            for (i = 0; i < 3; i++)
                l_418[i] = &g_9;
            for (l_346 = 0; (l_346 <= 4); l_346 += 1)
            {
                int i;
                if ((((g_202[(l_346 + 3)] >= (((p_48 , (0x5C2AL != (l_414 > ((((*l_294) != p_46) , (((((p_45 , g_7) & ((g_202[(l_346 + 3)] , g_9) < g_97[1])) > g_94[0][2]) || 0UL) >= g_320)) , 1L)))) | (-9L)) , (*p_47))) == g_94[0][2]) < p_45))
                {
                    int l_417 = 0x13CB0025L;
                    unsigned l_419 = 0xE6A8B6C9L;
                    int i;
                    g_202[(g_78 + 1)] = (((*g_321) ^ ((0x2C296948L || l_417) , (((*l_294) , &g_78) != p_47))) && (((l_294 == l_418[1]) >= (l_419 || (-3L))) != 0x088FB3B7L));
                    return p_47;
                }
                else
                {
                    (*l_294) = (*g_300);
                }
            }
        }
    }
    return p_47;
}







static int * func_49(int p_50, int * p_51, int * p_52, unsigned p_53, unsigned char p_54)
{
    int *l_207 = &g_9;
    int **l_209 = &g_137[4];
    for (g_78 = 0; (g_78 <= (-12)); g_78 = safe_sub_func_int16_t_s_s(g_78, 1))
    {
        int **l_196 = &g_137[1];
        (*l_196) = p_51;
        if ((*p_51))
        {
            int l_197 = 0xEA383889L;
            int *l_201 = &g_202[0];
            char l_208 = 0x18L;
            if (l_197)
                break;
            (*l_201) = (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(l_197)), 2));
            for (l_197 = 2; (l_197 >= (-24)); l_197 = safe_sub_func_int8_t_s_s(l_197, 1))
            {
                (*l_201) = (*p_51);
                for (p_53 = 22; (p_53 < 43); p_53 = safe_add_func_uint32_t_u_u(p_53, 4))
                {
                    p_51 = p_52;
                    (*l_196) = l_207;
                    (*l_201) = (l_208 ^ 6L);
                    if ((*l_207))
                        continue;
                }
                (*l_196) = &g_9;
                (*l_201) = (*p_51);
            }
        }
        else
        {
            (*l_196) = p_51;
            (*l_196) = p_51;
        }
    }
    (*l_209) = p_51;
    return p_52;
}







static int func_55(unsigned p_56, unsigned p_57, short p_58)
{
    unsigned l_66 = 0UL;
    int *l_73 = &g_9;
    int l_133 = 0L;
    int *l_138 = &g_9;
    if ((((safe_add_func_int32_t_s_s((((((safe_mul_func_int8_t_s_s(l_66, l_66)) == p_56) , p_58) , g_7) <= ((safe_div_func_int16_t_s_s(g_7, (((((((safe_mul_func_int16_t_s_s(g_9, g_9)) & ((safe_rshift_func_uint16_t_u_s(((void*)0 == l_73), (*l_73))) <= p_57)) , l_73) == l_73) , &g_9) == &g_9) & (-1L)))) || 0x9EF6L)), 4294967293UL)) != p_58) <= g_7))
    {
        short l_82 = (-1L);
        int l_98 = (-5L);
        int *l_108 = &g_78;
        int **l_134[2][4][1] = {{{&l_108}, {&l_108}, {&l_108}, {&l_108}}, {{&l_108}, {&l_108}, {&l_108}, {&l_108}}};
        unsigned short l_158[4] = {0x45F2L, 0xE6F3L, 0x45F2L, 0xE6F3L};
        int i, j, k;
lbl_95:
        for (p_56 = 0; (p_56 == 55); p_56 = safe_add_func_int8_t_s_s(p_56, 5))
        {
            int l_76 = 0xD1BA0576L;
            int *l_77 = &g_78;
            (*l_77) = l_76;
        }
        for (l_66 = 0; (l_66 <= 3); l_66 += 1)
        {
            int *l_87[9][1][5] = {{{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}, {{&g_9, (void*)0, &g_9, &g_78, (void*)0}}};
            int **l_88 = &l_73;
            int i, j, k;
            (*l_88) = ((p_58 , ((safe_mod_func_int32_t_s_s(l_82, (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_82, (l_87[0][0][3] != (void*)0))), (g_78 ^ p_57))))) != p_57)) , &g_78);
            (*l_88) = &g_78;
            for (g_78 = 0; (g_78 <= 0); g_78 += 1)
            {
                short l_93 = 0xFD73L;
                int *l_96 = (void*)0;
                int l_103 = 0xCFDA208EL;
                for (p_58 = 0; (p_58 <= 3); p_58 += 1)
                {
                    for (p_56 = 0; (p_56 <= 0); p_56 += 1)
                    {
                        int i, j, k;
                        g_94[0][2] = (safe_add_func_uint16_t_u_u((((g_79[(p_58 + 1)][(p_56 + 1)][p_58] || (safe_mod_func_uint32_t_u_u(1UL, g_79[(g_78 + 8)][(p_56 + 5)][p_58]))) & (((0x70AEE99EL != g_79[(l_66 + 1)][(l_66 + 2)][p_58]) | (p_56 > p_58)) == l_82)) < (1L == p_58)), l_93));
                    }
                    if (g_9)
                        goto lbl_95;
                }
                l_96 = l_96;
                g_97[1] = p_56;
                l_98 = 0L;
            }
            for (p_58 = 3; (p_58 >= 0); p_58 -= 1)
            {
                unsigned l_116 = 0UL;
                int **l_117[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_117[i] = (void*)0;
                (*l_88) = &g_9;
                if (l_82)
                {
                    int *l_107 = &l_98;
                    (*l_88) = l_107;
                    if (p_58)
                        continue;
                }
                else
                {
                    for (p_56 = 1; (p_56 <= 4); p_56 += 1)
                    {
                        int l_109 = 1L;
                        (*l_88) = l_108;
                        l_109 = (&l_73 != (void*)0);
                    }
                }
                for (p_56 = 0; (p_56 <= 3); p_56 += 1)
                {
                    int *l_130 = &g_9;
                    int i, j, k;
                    (*l_108) = ((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_79[p_56][(p_56 + 1)][p_56], g_79[p_58][p_56][p_58])), (0x4812L | ((((((l_116 , l_117[4]) == (void*)0) , (((p_56 | ((((safe_rshift_func_int8_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u(p_57, g_7)))) | 0x0E0AL) >= p_57) || 0xBFD2L)) >= g_79[1][5][0]) >= 0xBBL)) | 5UL) || 0xC015L) || g_7)))), 6)) < (*l_108));
                    for (l_82 = 0; (l_82 == 22); l_82 = safe_add_func_int16_t_s_s(l_82, 4))
                    {
                        (*l_108) = ((1L || g_106[2]) & (safe_add_func_uint16_t_u_u((g_94[3][1] & g_106[3]), p_56)));
                        (*l_88) = ((safe_lshift_func_uint8_t_u_s(((g_79[p_56][(p_56 + 1)][p_56] , ((safe_lshift_func_uint16_t_u_u(p_56, (l_130 != (void*)0))) ^ p_56)) , (*l_130)), 2)) , (g_79[1][2][0] , &g_9));
                        (*l_88) = l_130;
                    }
                    for (l_98 = 0; (l_98 >= (-23)); l_98--)
                    {
                        l_133 = g_106[2];
                        (*l_108) = g_94[0][2];
                    }
                    return p_56;
                }
            }
        }
        l_73 = &l_98;
        for (l_98 = 4; (l_98 >= 0); l_98 -= 1)
        {
            unsigned char l_151[8] = {1UL, 5UL, 1UL, 5UL, 1UL, 5UL, 1UL, 5UL};
            int l_155 = (-1L);
            int i;
            for (l_133 = 0; (l_133 <= 4); l_133 += 1)
            {
                unsigned l_141 = 1UL;
                for (p_57 = 0; (p_57 <= 4); p_57 += 1)
                {
                    int ***l_135[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_135[i] = &l_134[1][3][0];
                    (*l_108) = g_94[(l_133 + 1)][p_57];
                    (*l_108) = p_58;
                    g_136 = &l_108;
                    (*l_108) = (+(g_7 | ((p_56 <= ((p_56 , l_138) == ((4294967292UL == (p_57 , ((((safe_add_func_int8_t_s_s(g_9, ((l_141 != (0xCFFC910CL && (*l_138))) , (-1L)))) ^ 4294967295UL) != p_57) ^ 0x15L))) , (*g_136)))) | p_56)));
                }
                return g_106[1];
            }
            (*g_136) = ((g_97[3] | (safe_lshift_func_int8_t_s_u(1L, 2))) , (*g_136));
            for (l_82 = 0; (l_82 <= 4); l_82 += 1)
            {
                char l_154 = 0x5FL;
                (*g_136) = &l_133;
                (*g_136) = (*g_136);
                for (l_133 = 0; (l_133 <= 4); l_133 += 1)
                {
                    unsigned char l_150 = 0x2CL;
                    int *l_156 = &l_155;
                    l_155 = ((g_106[3] , (safe_add_func_uint8_t_u_u((g_94[1][0] || ((p_58 > ((p_57 || (safe_mul_func_int16_t_s_s((-1L), (safe_rshift_func_uint8_t_u_u(((l_150 || l_150) , l_151[4]), 1))))) , (safe_add_func_int16_t_s_s(((void*)0 != &g_137[4]), 0x3311L)))) & l_154)), l_150))) & 0x85L);
                    l_156 = (*g_136);
                    (*g_136) = (*g_136);
                    for (p_57 = 1; (p_57 <= 4); p_57 += 1)
                    {
                        int i;
                        if (g_97[l_82])
                            break;
                        l_155 = g_97[l_82];
                        (*g_136) = &l_133;
                        return l_155;
                    }
                }
                (*g_136) = (*g_136);
                for (p_57 = 0; (p_57 <= 4); p_57 += 1)
                {
                    int *l_157 = &g_78;
                    for (l_155 = 4; (l_155 >= 1); l_155 -= 1)
                    {
                        (*l_108) = (!p_57);
                        l_157 = (*g_136);
                        if (l_158[2])
                            break;
                    }
                    (*l_108) = ((((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s((*l_108), l_154)))) >= ((((void*)0 != &g_137[4]) && g_78) >= p_57)) , 0x74L) < g_106[0]);
                }
            }
            for (l_66 = 0; (l_66 <= 4); l_66 += 1)
            {
                unsigned l_171[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_171[i] = 0xC6CB6C50L;
                if (p_58)
                    break;
                for (g_78 = 3; (g_78 >= 0); g_78 -= 1)
                {
                    int *l_163 = &l_155;
                    int i, j, k;
                    (*g_136) = (*g_136);
                    for (p_58 = 7; (p_58 >= 0); p_58 -= 1)
                    {
                        int *l_162 = &l_155;
                        l_163 = l_162;
                        (*l_162) = (4294967293UL || 0x7B9E1711L);
                    }
                    (*l_163) = g_79[l_66][(g_78 + 1)][g_78];
                }
                for (l_82 = 4; (l_82 >= 1); l_82 -= 1)
                {
                    int i, j;
                    (*l_108) = (safe_mod_func_uint32_t_u_u(g_97[l_98], (safe_unary_minus_func_int8_t_s((safe_div_func_int8_t_s_s(g_94[l_66][l_98], (safe_lshift_func_int8_t_s_s(g_94[l_82][l_82], (((l_171[0] < p_56) && (safe_sub_func_int16_t_s_s((-3L), (l_171[0] , (safe_add_func_uint8_t_u_u(((void*)0 != &g_136), l_155)))))) & g_97[1])))))))));
                }
            }
            for (p_56 = 0; (p_56 <= 4); p_56 += 1)
            {
                short l_186[10] = {0xF97BL, 0xB863L, 0xEB07L, 0xEB07L, 0xB863L, 0xF97BL, 0xB863L, 0xEB07L, 0xEB07L, 0xB863L};
                int i;
                (*l_108) = (safe_sub_func_uint8_t_u_u(g_94[0][2], (((p_58 , &g_137[4]) != ((((0x3CL != ((((safe_add_func_uint32_t_u_u(g_94[0][2], (safe_rshift_func_uint8_t_u_u(((!((!l_155) >= ((((safe_mod_func_int16_t_s_s(0xC2A1L, (safe_div_func_uint8_t_u_u(p_58, l_186[4])))) | g_106[3]) && 251UL) == 0L))) && p_57), p_58)))) || 0x1AL) ^ p_58) | 0xE7FCL)) != p_57) ^ g_78) , &l_73)) > p_56)));
                (*l_108) = 0L;
                (*l_108) = ((*l_138) & (*l_138));
            }
        }
    }
    else
    {
        int *l_193 = &l_133;
        l_138 = &l_133;
        for (g_78 = (-5); (g_78 < 23); g_78 = safe_add_func_int32_t_s_s(g_78, 1))
        {
            int *l_192[8];
            int i;
            for (i = 0; i < 8; i++)
                l_192[i] = &g_9;
            if ((safe_div_func_int16_t_s_s(((void*)0 != &g_136), g_94[0][2])))
            {
                if (p_57)
                {
                    int *l_191 = &g_9;
                    (*g_136) = l_191;
                    return g_79[2][4][3];
                }
                else
                {
                    (*g_136) = (*g_136);
                    (*g_136) = l_192[6];
                }
                l_193 = l_193;
            }
            else
            {
                (*g_136) = l_192[5];
                (*l_138) = (*l_73);
            }
            (*l_193) = 0L;
            (*g_136) = l_193;
        }
    }
    return g_94[0][4];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_79[i][j][k], "g_79[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_94[i][j], "g_94[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_202[i], "g_202[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_287[i][j][k], "g_287[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_707[i][j], "g_707[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1081[i][j], "g_1081[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1334, "g_1334", print_hash_value);
    transparent_crc(g_1533, "g_1533", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
