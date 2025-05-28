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



static short g_24 = (-1L);
static unsigned char g_46 = 0xC3L;
static unsigned char g_55 = 0x82L;
static int g_68[2][2][7] = {{{0x910760B9L, 0x0969E0CDL, 0x1CEA0262L, 0x0969E0CDL, 0x910760B9L, 0x9757A836L, 0x910760B9L}, {0x910760B9L, 0x0969E0CDL, 0x1CEA0262L, 0x0969E0CDL, 0x910760B9L, 0x9757A836L, 0x910760B9L}}, {{0x910760B9L, 0x0969E0CDL, 0x1CEA0262L, 0x0969E0CDL, 0x910760B9L, 0x9757A836L, 0x910760B9L}, {0x910760B9L, 0x0969E0CDL, 0x1CEA0262L, 0x0969E0CDL, 0x910760B9L, 0x9757A836L, 0x910760B9L}}};
static short *g_72[4][5] = {{&g_24, &g_24, &g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24, &g_24, &g_24}, {&g_24, &g_24, &g_24, &g_24, &g_24}};
static short **g_71 = &g_72[3][3];
static short g_85 = (-5L);
static char g_119 = 0x16L;
static unsigned g_126 = 4294967295UL;
static unsigned short g_144 = 1UL;
static int g_154 = (-1L);
static const int *g_165 = (void*)0;
static const int **g_164 = &g_165;
static unsigned g_174[9] = {4294967291UL, 0x515F4A00L, 4294967291UL, 0x515F4A00L, 4294967291UL, 0x515F4A00L, 4294967291UL, 0x515F4A00L, 4294967291UL};
static const char g_188 = (-4L);
static const char *g_187 = &g_188;
static const unsigned char g_225[4][10] = {{0x31L, 0xD3L, 6UL, 0x1AL, 0xD3L, 4UL, 0xD3L, 0x1AL, 6UL, 0xD3L}, {0x31L, 0xD3L, 6UL, 0x1AL, 0xD3L, 4UL, 0xD3L, 0x1AL, 6UL, 0xD3L}, {0x31L, 0xD3L, 6UL, 0x1AL, 0xD3L, 4UL, 0xD3L, 0x1AL, 6UL, 0xD3L}, {0x31L, 0xD3L, 6UL, 0x1AL, 0xD3L, 4UL, 0xD3L, 0x1AL, 6UL, 0xD3L}};
static const unsigned char *g_224 = &g_225[3][7];
static const unsigned char g_277 = 0x20L;
static const unsigned char *g_276[6] = {&g_225[3][7], &g_277, &g_225[3][7], &g_277, &g_225[3][7], &g_277};
static unsigned short *g_298 = (void*)0;
static unsigned short **g_297[5] = {&g_298, &g_298, &g_298, &g_298, &g_298};
static unsigned char g_351 = 5UL;
static unsigned short g_352 = 0xAB4BL;
static char g_365 = 0x5DL;
static int *g_379 = &g_68[1][0][2];
static int g_429 = 0x14F86CB5L;
static short g_559 = 0x7AD3L;
static unsigned short ***g_572[6][9] = {{&g_297[1], (void*)0, &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1]}, {&g_297[1], (void*)0, &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1]}, {&g_297[1], (void*)0, &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1]}, {&g_297[1], (void*)0, &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1]}, {&g_297[1], (void*)0, &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1]}, {&g_297[1], (void*)0, &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1], &g_297[1]}};
static const unsigned short g_595 = 0x006DL;
static int g_672[3] = {(-1L), (-1L), (-1L)};
static unsigned **g_722 = (void*)0;
static char *g_748 = &g_119;
static char **g_747 = &g_748;
static unsigned char *g_764 = &g_55;
static unsigned char **g_763[2][7] = {{&g_764, &g_764, &g_764, &g_764, &g_764, (void*)0, &g_764}, {&g_764, &g_764, &g_764, &g_764, &g_764, (void*)0, &g_764}};
static unsigned char *** const g_762 = &g_763[0][3];
static const unsigned char **g_766 = &g_224;
static const unsigned char ***g_765[1][7][9] = {{{&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}, {&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}, {&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}, {&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}, {&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}, {&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}, {&g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766, &g_766}}};
static const unsigned g_768 = 0x30D8A3D0L;
static char g_770 = 0xD0L;
static unsigned short g_771[4] = {0x370DL, 0x0979L, 0x370DL, 0x0979L};
static const unsigned g_840 = 0x929CF4DBL;
static int *g_855 = &g_68[1][0][6];
static char g_937 = 1L;
static unsigned short ***g_986 = &g_297[1];
static unsigned g_1003[3] = {0x49E83734L, 0x49E83734L, 0x49E83734L};
static unsigned *g_1002 = &g_1003[1];
static unsigned **g_1001 = &g_1002;
static unsigned ***g_1000[8][8][4] = {{{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}, {{&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}, {&g_1001, (void*)0, &g_1001, &g_1001}}};
static unsigned g_1051 = 2UL;
static unsigned g_1057[8][5][6] = {{{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}, {{0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}, {0x867ED2BCL, 0x305902CCL, 0x6253203BL, 9UL, 0xA6F05964L, 0UL}}};
static int g_1092 = 1L;
static short *g_1110 = &g_85;
static unsigned g_1114 = 0UL;
static const unsigned char g_1122 = 0x03L;
static unsigned short g_1279 = 1UL;
static const unsigned char g_1292[2][8][5] = {{{251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}}, {{251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}, {251UL, 255UL, 0xD4L, 254UL, 0xDAL}}};
static unsigned short g_1321 = 0xB301L;
static unsigned char g_1324 = 0x33L;
static int **g_1416[8] = {&g_855, (void*)0, &g_855, (void*)0, &g_855, (void*)0, &g_855, (void*)0};
static int **g_1417 = &g_855;
static char ***g_1422 = &g_747;
static unsigned g_1561 = 0x7C9480AAL;
static int *g_1572[6][10][4] = {{{(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}}, {{(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}}, {{(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}}, {{(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}}, {{(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}}, {{(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}, {(void*)0, &g_429, &g_429, &g_429}}};
static int **g_1571 = &g_1572[3][4][2];
static const unsigned char g_1587 = 0xB3L;
static char g_1618 = 0x25L;
static const int g_1709[6] = {1L, 1L, 0x98CF8450L, 1L, 1L, 0x98CF8450L};
static unsigned *g_1728[5] = {&g_1114, &g_1114, &g_1114, &g_1114, &g_1114};
static unsigned **g_1727 = &g_1728[4];



static const unsigned char func_1(void);
static int func_4(int p_5, int p_6);
static int func_9(char p_10, const char p_11, unsigned p_12);
static short func_17(int p_18, unsigned char p_19, unsigned char p_20, unsigned p_21);
static unsigned func_27(unsigned short p_28, int p_29);
static short * func_34(short p_35, short * p_36, unsigned p_37);
static int func_39(unsigned p_40, unsigned p_41, const char p_42);
static const short func_49(const unsigned char * p_50, const unsigned p_51, const char p_52, const unsigned p_53);
static short * func_58(unsigned char * p_59, short * const p_60);
static unsigned char * func_61(int p_62, short * p_63, int p_64, int p_65, unsigned char * p_66);
static const unsigned char func_1(void)
{
    int l_22 = (-4L);
    short *l_23 = &g_24;
    short *l_1095 = &g_559;
    unsigned short *l_1096 = &g_771[3];
    int l_1787[1];
    unsigned short *l_1795[4][10] = {{&g_771[0], &g_1321, &g_1321, &g_144, &g_1321, &g_144, &g_771[2], (void*)0, &g_1321, (void*)0}, {&g_771[0], &g_1321, &g_1321, &g_144, &g_1321, &g_144, &g_771[2], (void*)0, &g_1321, (void*)0}, {&g_771[0], &g_1321, &g_1321, &g_144, &g_1321, &g_144, &g_771[2], (void*)0, &g_1321, (void*)0}, {&g_771[0], &g_1321, &g_1321, &g_144, &g_1321, &g_144, &g_771[2], (void*)0, &g_1321, (void*)0}};
    unsigned char *l_1796 = &g_351;
    int l_1797 = 0x4F32F571L;
    int l_1808 = 9L;
    unsigned char l_1809[2][2] = {{0x62L, 1UL}, {0x62L, 1UL}};
    unsigned short l_1814 = 0xCFBCL;
    unsigned l_1815 = 0xFDDADEA6L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1787[i] = 1L;
    (*g_379) = (safe_add_func_uint32_t_u_u((func_4((safe_mul_func_int16_t_s_s((func_9((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(func_17((g_1324 = ((l_22 && (((*l_23) = l_22) || (safe_rshift_func_int8_t_s_s((func_27((g_24 > ((*g_855) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((l_23 = func_34(g_24, &g_24, g_24)) != l_1095), 3)), ((*l_1096) = l_22))))), l_22) >= (-1L)), (*g_187))))) ^ 0L)), l_22, l_22, l_22), 8UL)), l_22)), (*g_187), l_22) == 0xB0169AF3L), 8UL)), l_22) ^ l_22), l_1787[0]));

    ;



    ;

    ;


    for (g_937 = 0; (g_937 > 23); g_937 = safe_add_func_int32_t_s_s(g_937, 5))
    {
        int *l_1790 = &g_672[0];
        char l_1816 = 0x94L;
        l_1790 = &l_1787[0];

        ;
        (*g_855) = (l_1787[0] != ((l_1787[0] >= ((*g_855) || (*g_855))) <= ((safe_lshift_func_int16_t_s_s((((*g_764) = 0x73L) != l_1787[0]), ((safe_mod_func_int8_t_s_s(((l_1797 = (l_1795[1][2] == ((**g_986) = func_58(l_1796, l_1095)))) >= l_1787[0]), l_22)) && (*l_1790)))) | l_1787[0])));
        (*g_164) = l_1790;

        ;
        (*l_1790) = (safe_add_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s((*l_1790), ((((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((*l_1096) = ((*l_1790) && ((*l_1790) <= (safe_lshift_func_uint8_t_u_u(((l_1809[1][0] = (0x7972L != l_1808)) | ((*l_1790) ^ (*l_1790))), ((0x22L && (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(2L, l_1814)), l_1787[0]))) == l_1815)))))), (*l_1790))) ^ (*l_1790)), (*l_1790))) && 0xD4FCL) == l_1787[0]) <= l_1815))) & l_1816) || (**g_1001)) | 0x5277L), (*g_1002)));
    }


    ;
    return (*g_764);


}







static int func_4(int p_5, int p_6)
{
    char ***l_1421 = &g_747;
    int l_1425[6][4][3] = {{{1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}}, {{1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}}, {{1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}}, {{1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}}, {{1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}}, {{1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}, {1L, 0xDF7FE436L, 0xDF7FE436L}}};
    unsigned short **l_1432[2];
    int l_1462 = 0xDC945711L;
    unsigned char *l_1468 = &g_351;
    int ***l_1483[4][6] = {{&g_1416[7], &g_1417, &g_1416[4], &g_1417, &g_1416[7], (void*)0}, {&g_1416[7], &g_1417, &g_1416[4], &g_1417, &g_1416[7], (void*)0}, {&g_1416[7], &g_1417, &g_1416[4], &g_1417, &g_1416[7], (void*)0}, {&g_1416[7], &g_1417, &g_1416[4], &g_1417, &g_1416[7], (void*)0}};
    unsigned short l_1512 = 0UL;
    int l_1515 = 0x6478E8D5L;
    int *l_1516 = &g_672[2];
    unsigned short ****l_1527 = &g_986;
    short **l_1529[4][1];
    unsigned **l_1541[1];
    unsigned **l_1543 = &g_1002;
    int *l_1547 = &g_154;
    const int l_1562 = 8L;
    unsigned char l_1568 = 0xE4L;
    unsigned l_1706 = 4294967295UL;
    int l_1710 = 0xD5E04546L;
    char l_1738 = 0x7EL;
    unsigned * const *l_1767 = &g_1002;
    unsigned * const **l_1766[1][8][6] = {{{&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}, {&l_1767, &l_1767, &l_1767, (void*)0, &l_1767, &l_1767}}};
    unsigned * const ***l_1765 = &l_1766[0][4][4];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1432[i] = &g_298;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1529[i][j] = &g_72[3][3];
    }
    for (i = 0; i < 1; i++)
        l_1541[i] = &g_1002;
    if ((safe_sub_func_int16_t_s_s((((g_1422 = l_1421) == l_1421) >= (safe_add_func_uint32_t_u_u(l_1425[1][3][0], (safe_mul_func_uint16_t_u_u(l_1425[5][1][1], ((*g_1110) = (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0L, ((void*)0 != l_1432[0]))), (l_1425[3][1][1] | ((**g_747) = 0x53L)))))))))), p_5)))
    {
        int l_1433 = 0x18CF0EE6L;
        unsigned **l_1434 = &g_1002;
        short *l_1467 = &g_559;
        int l_1528 = 0x02C7D322L;
        int l_1530 = (-10L);
        if (l_1433)
        {
            (*g_379) = 0L;
        }
        else
        {
            unsigned l_1438 = 0x024F47E3L;
            short *l_1474[4][7][3] = {{{&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}}, {{&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}}, {{&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}}, {{&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}, {&g_24, &g_24, &g_85}}};
            unsigned char *l_1477 = &g_1324;
            int ***l_1484 = &g_1416[7];
            int *l_1514[6] = {&l_1425[4][3][0], &l_1425[4][3][0], &g_672[1], &l_1425[4][3][0], &l_1425[4][3][0], &g_672[1]};
            int i, j, k;
            for (g_24 = 0; (g_24 >= 0); g_24 -= 1)
            {
                unsigned **l_1449 = (void*)0;
                const int l_1463 = 0L;
                int l_1469 = 0L;
                const short *l_1472[4][8] = {{&g_24, (void*)0, &g_559, (void*)0, &g_24, (void*)0, &g_559, (void*)0}, {&g_24, (void*)0, &g_559, (void*)0, &g_24, (void*)0, &g_559, (void*)0}, {&g_24, (void*)0, &g_559, (void*)0, &g_24, (void*)0, &g_559, (void*)0}, {&g_24, (void*)0, &g_559, (void*)0, &g_24, (void*)0, &g_559, (void*)0}};
                int *l_1511[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1511[i] = &g_68[0][1][3];
                for (g_85 = 0; (g_85 >= 0); g_85 -= 1)
                {
                    unsigned **l_1436 = &g_1002;
                    const int *l_1437 = &l_1425[1][3][0];
                    (*g_855) = p_6;
                    for (g_46 = 0; (g_46 <= 0); g_46 += 1)
                    {
                        unsigned ***l_1435[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1435[i] = (void*)0;
                        (*g_164) = &p_6;

                        ;
                        l_1436 = l_1434;
                        (*g_164) = l_1437;

                        ;
                    }
                }
                for (g_1279 = 0; (g_1279 <= 0); g_1279 += 1)
                {
                    unsigned l_1450 = 4294967294UL;
                    short **l_1473 = &g_72[1][3];
                    if (l_1438)
                        break;
                    if (((safe_sub_func_int16_t_s_s(((*g_1110) = l_1438), (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((~l_1433), 0x1702L)), ((*g_855) = 0x10784268L))), p_6)))) | (safe_lshift_func_int16_t_s_s((((void*)0 == l_1449) != (p_5 || (((0xFBL | l_1450) >= 9UL) || (-1L)))), 4))))
                    {
                        const int *l_1452 = (void*)0;
                        const int **l_1451 = &l_1452;
                        const unsigned char *l_1455 = (void*)0;
                        (*l_1451) = ((*g_164) = &p_6);

                        ;
                        ;
                        (*g_855) = p_5;
                        (*g_164) = (*g_164);
                        (*g_855) = (p_6 | (l_1469 = func_49(func_61(l_1433, func_34(((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(p_5)), (-1L))) == l_1463), l_1467, g_768), (**l_1451), g_351, l_1468), p_6, (*g_187), l_1438)));


                    }
                    else
                    {
                        return p_5;


                    }


                    ;
                    if ((safe_mod_func_int16_t_s_s((((-1L) >= (((l_1438 || ((*l_1467) = p_6)) || (l_1472[3][4] != ((*l_1473) = &g_559))) ^ func_49(func_61((*g_165), l_1474[2][1][2], g_429, (safe_mul_func_int8_t_s_s(0xBAL, p_5)), l_1477), l_1450, (***g_1422), p_5))) >= l_1433), p_5)))
                    {
                        (*g_379) = (safe_mod_func_int32_t_s_s(l_1462, p_6));
                        (*g_164) = &p_6;
                    }
                    else
                    {
                        int *l_1480[7] = {&g_672[2], &l_1462, &g_672[2], &l_1462, &g_672[2], &l_1462, &g_672[2]};
                        int i;
                        (*g_164) = l_1480[3];

                        ;
                        (*g_164) = (*g_164);
                    }

                    ;
                    for (p_6 = 0; (p_6 <= 0); p_6 += 1)
                    {
                        (*g_379) = (p_5 == l_1425[3][2][1]);
                    }
                }
                for (l_1438 = 0; (l_1438 <= 0); l_1438 += 1)
                {
                    int ***l_1486 = (void*)0;
                    int ****l_1485 = &l_1486;
                    int *l_1513 = &g_672[0];
                    if ((safe_mod_func_uint32_t_u_u(((4294967295UL == ((l_1483[3][4] != ((*l_1485) = (l_1484 = l_1483[0][1]))) & (~(safe_lshift_func_int8_t_s_u((((*g_1002) = (safe_mod_func_uint16_t_u_u(0x7BB2L, ((safe_sub_func_int16_t_s_s(p_5, l_1433)) || (safe_sub_func_int8_t_s_s(((*g_1110) == p_6), (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((0x8EL | p_5), p_6)) ^ (-1L)), 0x78B9DA8AL)))))))) < (*g_379)), 5))))) < p_5), p_5)))
                    {
                        const char l_1509 = 0x15L;
                        int *l_1510 = &g_1092;
                        (*g_855) = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0x12C4L, (safe_sub_func_int32_t_s_s(p_6, p_5)))), p_5)), l_1509)), p_6));
                        l_1511[2] = l_1510;
                        l_1512 = 0x3FDF13A1L;
                    }
                    else
                    {
                        (*g_164) = l_1513;

                        ;
                    }

                    ;
                    (*g_164) = l_1514[1];

                    ;
                    for (g_85 = 0; (g_85 >= 0); g_85 -= 1)
                    {
                        if (l_1515)
                            break;
                    }
                }


                for (p_5 = 0; (p_5 >= 0); p_5 -= 1)
                {
                    (*g_164) = (l_1514[3] = l_1516);

                    ;
                    for (g_1321 = 0; (g_1321 <= 0); g_1321 += 1)
                    {
                        const unsigned char *l_1517 = &g_225[3][7];
                        int l_1518 = 0xD23C5CE3L;
                        (*g_164) = (l_1514[1] = (void*)0);

                        ;
                        if (l_1433)
                            continue;
                        l_1518 = (p_6 = ((*g_379) = func_49(l_1517, ((void*)0 != &l_1472[3][4]), (*g_748), (**g_1001))));
                    }

                    ;
                }
            }



            ;
            (*g_855) = 0xA53ED959L;
        }



        l_1530 = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((*g_379) = p_6) | (safe_sub_func_uint16_t_u_u((l_1528 = (((*l_1467) = (0x192FA58DL != ((*g_1002) = (*g_1002)))) ^ (&g_986 == l_1527))), (l_1529[0][0] != (void*)0)))), (((-1L) | 4294967295UL) | p_5))), l_1433));
    }
    else
    {
        short l_1544 = (-1L);
        const unsigned char *l_1554 = (void*)0;
        int *l_1565 = (void*)0;
        const unsigned l_1574 = 4294967295UL;
        unsigned char *l_1599 = &g_55;
        unsigned l_1611 = 0x1A899B15L;
        short *l_1656[2];
        char l_1686[2];
        unsigned char l_1737 = 255UL;
        int l_1777 = 1L;
        const unsigned char l_1783 = 255UL;
        int i;
        for (i = 0; i < 2; i++)
            l_1656[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1686[i] = 0xD3L;
        if (((((1UL <= ((*g_764) = (&g_164 != &g_1416[1]))) & ((safe_mul_func_int16_t_s_s((*l_1516), (safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_5, (*l_1516))), ((safe_sub_func_int32_t_s_s(p_5, 0x7EDBBF91L)) > (safe_mod_func_int8_t_s_s(((***l_1421) = (+((void*)0 != &g_379))), p_6))))))) ^ p_5)) || p_6) >= p_5))
        {
            unsigned **l_1542[5][8][4] = {{{&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}}, {{&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}}, {{&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}}, {{&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}}, {{&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}, {&g_1002, &g_1002, &g_1002, (void*)0}}};
            int l_1550 = 1L;
            unsigned * const l_1560[6] = {&g_1561, &g_1561, &g_1561, &g_1561, &g_1561, &g_1561};
            unsigned * const *l_1559 = &l_1560[2];
            int l_1563 = 0x483727BFL;
            int l_1564 = 0x777DE75CL;
            int *l_1579 = &g_1092;
            short *l_1635 = &g_559;
            unsigned char l_1640 = 0x48L;
            unsigned char l_1653 = 0x8CL;
            unsigned l_1655 = 0x4E92620DL;
            int i, j, k;
lbl_1619:
            if ((l_1541[0] == (l_1543 = l_1542[2][3][1])))
            {
                short l_1553 = 0x2C8EL;
                if ((l_1544 = 0L))
                {
                    int *l_1548 = &g_154;
                    unsigned * const **l_1558 = (void*)0;
                    if ((+(safe_lshift_func_int16_t_s_u(p_5, 1))))
                    {
                        return l_1544;


                    }
                    else
                    {
                        (*g_164) = l_1547;

                        ;
lbl_1549:
                        (*g_164) = l_1548;
                    }

                    ;
                    if (g_351)
                        goto lbl_1549;
                    (*g_379) = (l_1544 < (((1UL && 0x91L) && l_1550) != (l_1564 = (l_1550 & (*l_1548)))));
                }
                else
                {
                    (*g_164) = l_1565;

                    ;
                }

                ;
                for (l_1462 = 0; (l_1462 > (-22)); l_1462--)
                {
                    return l_1568;


                }
            }
            else
            {
                unsigned l_1577[1][7][8];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 8; k++)
                            l_1577[i][j][k] = 4294967295UL;
                    }
                }
lbl_1575:
                l_1565 = &l_1564;

                ;
                for (l_1550 = 0; (l_1550 <= (-24)); l_1550 = safe_sub_func_uint32_t_u_u(l_1550, 9))
                {
                    const int *l_1576[4];
                    int l_1578 = (-2L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1576[i] = &g_68[1][0][2];
                    for (g_144 = 0; (g_144 <= 8); g_144 += 1)
                    {
                        int ***l_1573 = &g_1571;
                        (*l_1573) = g_1571;
                        if (l_1574)
                            break;
                        if (l_1550)
                            goto lbl_1575;
                        if ((*g_855))
                            continue;
                    }
                    if ((*l_1516))
                        continue;
                    (*g_164) = l_1576[3];

                    ;
                    if (l_1577[0][2][5])
                    {
                        l_1578 = p_5;
                    }
                    else
                    {
                        l_1579 = (void*)0;

                        ;
                    }
                }
            }
            for (g_144 = 0; (g_144 <= 0); g_144 += 1)
            {
                const unsigned l_1580 = 4294967295UL;
                char *l_1585[2][5][4];
                char *l_1586 = &g_770;
                unsigned **** const l_1607 = &g_1000[0][4][0];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1585[i][j][k] = &g_365;
                    }
                }
                for (g_1092 = 0; g_1092 < 2; g_1092 += 1)
                {
                    for (g_559 = 0; g_559 < 7; g_559 += 1)
                    {
                        g_763[g_1092][g_559] = &g_764;
                    }
                }
                if (l_1580)
                    break;
                (*g_855) = (0x49470CE7L | (func_49((g_276[(g_144 + 3)] = g_276[(g_144 + 5)]), g_559, ((*l_1586) = ((safe_lshift_func_int16_t_s_u(p_6, l_1580)) <= ((***g_1422) = (-9L)))), g_1587) != p_6));
                (*g_855) = p_5;
                for (g_1092 = 0; (g_1092 >= 0); g_1092 -= 1)
                {
                    short *l_1596 = &g_85;
                    const int l_1617 = 4L;
                    unsigned short l_1632 = 0x1098L;
                    int l_1633 = 0L;
                    int i, j;
                    if ((((*l_1586) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((***l_1421) = (safe_lshift_func_int8_t_s_s(l_1580, (safe_sub_func_uint16_t_u_u((func_49(((*g_766) = func_61(l_1580, l_1596, (*l_1516), (safe_sub_func_int32_t_s_s(0xB41C9861L, 0x9D4373E1L)), l_1599)), (safe_mod_func_uint32_t_u_u(l_1563, 3UL)), (*l_1516), (**g_1001)) > p_5), (*g_1110)))))) > p_6), p_5)), p_6))) >= p_6))
                    {
                        int *l_1602 = (void*)0;
                        l_1602 = &p_6;

                        ;
                        (*g_379) = (*g_379);
                        (*g_855) = (p_6 <= 4294967287UL);
                    }
                    else
                    {
                        unsigned char l_1616 = 0x20L;
                        (*g_164) = &p_5;

                        ;
                        (*g_164) = &p_6;

                        ;
                        (*g_379) = 0xA4290061L;
                        (*g_379) = (safe_add_func_int16_t_s_s(((((**g_1001) = (safe_mod_func_uint32_t_u_u(((((***l_1421) = (0xE45DL >= ((!(((((p_6 >= p_5) | ((void*)0 != l_1607)) & (g_1618 = (safe_unary_minus_func_uint8_t_u((p_5 <= ((safe_rshift_func_uint16_t_u_u(l_1617, 14)) == (*g_1110))))))) | 0xE4L) && (**g_1001))) < 0x1A73L))) == (*g_187)) || l_1617), (**g_1001)))) >= (*g_379)) || p_5), p_6));
                    }


                    ;
                    if ((*g_379))
                    {
                        unsigned l_1634 = 0xEC62771CL;
                        if (g_1587)
                            goto lbl_1619;
                        l_1634 = (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((*l_1421) != (void*)0), (((*g_1110) = (safe_lshift_func_uint16_t_u_s(0x2734L, 15))) != (safe_mul_func_uint8_t_u_u(0x96L, ((*g_764) = (((*g_1002) = 0x5416ABCBL) | p_6))))))), (l_1633 = (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(l_1632, l_1632)) != p_6), 3)))));
                        (*l_1547) = ((*g_855) = p_5);
                        return (*g_855);


                    }
                    else
                    {
                        if (g_1587)
                            goto lbl_1619;
                    }
                }
            }
            if (((((**g_1001) = (&g_559 == l_1635)) ^ (((*l_1516) = (*l_1516)) != (((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(2L, 2)), 0xF481L)) > l_1640) & (safe_mod_func_uint32_t_u_u((+((void*)0 != &l_1568)), (safe_lshift_func_int16_t_s_u((func_39((((safe_lshift_func_int16_t_s_s(p_5, 6)) | l_1563) && 0x439FL), p_6, p_6) <= p_5), 12))))))) | p_5))
            {
                char l_1663 = 0L;
                const int l_1664 = 0x6AD1175CL;
                const unsigned char *l_1674 = &g_351;
                unsigned **l_1681 = &g_1002;
                if (((p_6 < p_6) || (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((((((+((safe_mod_func_uint16_t_u_u(p_6, 65535UL)) && 0UL)) & 0x2B607794L) || func_39(((**g_1001) = func_17(p_5, ((**l_1421) != (*g_747)), l_1653, p_5)), p_6, p_5)) <= p_6) && 0UL) || (-7L)) != p_6), (*l_1547))), p_5))))
                {
                    (*g_379) = p_6;
                    if ((*g_855))
                    {
                        return (*g_379);


                    }
                    else
                    {
                        int *l_1654 = &l_1462;
                        l_1654 = &p_5;

                        ;
                    }
                }
                else
                {
                    int l_1665 = 0xE0085796L;
                    int *l_1666[2][2][6];
                    short *l_1672 = &g_85;
                    const unsigned l_1675 = 9UL;
                    unsigned *l_1680 = &g_1057[7][2][0];
                    unsigned **l_1679 = &l_1680;
                    unsigned ***l_1683 = &l_1542[2][3][1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_1666[i][j][k] = &g_429;
                        }
                    }
                    (*l_1516) = ((*g_379) = func_17(p_5, l_1655, p_5, ((**l_1559) = (p_6 >= p_5))));
                    for (g_1114 = 0; (g_1114 == 8); g_1114 = safe_add_func_int16_t_s_s(g_1114, 1))
                    {
                        unsigned short l_1669 = 0x3177L;
                        unsigned char *l_1673 = (void*)0;
                        unsigned *l_1676 = &g_1003[1];
                        (*l_1516) = 0x8EED511DL;
                        (*l_1516) = l_1669;
                        (*l_1547) = (safe_mul_func_uint16_t_u_u(func_49(func_61(p_6, l_1672, p_5, p_6, l_1673), p_5, p_5, ((*l_1676) = func_49(l_1674, p_6, p_5, l_1675))), l_1675));


                    }
                    if (((safe_mod_func_uint32_t_u_u((p_5 == (((((*l_1679) = (void*)0) != (void*)0) || (((l_1541[0] != l_1681) && p_5) | 9L)) > l_1665)), l_1665)) & 0x08L))
                    {
                        unsigned l_1682 = 4294967287UL;
                        (*g_379) = p_5;
                        return p_5;


                    }
                    else
                    {
                        (*g_379) = (1UL | (l_1683 == &g_1001));
                        (*g_164) = &p_5;

                        ;
                    }

                    ;
                    ;
                }


                (*g_379) = ((safe_sub_func_uint16_t_u_u(l_1686[0], (*g_1110))) && (safe_mod_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(p_6, (safe_mul_func_uint16_t_u_u(p_6, func_17(p_6, p_6, p_6, g_144))))) < p_5), p_5)));
            }
            else
            {
                for (g_937 = (-1); (g_937 > (-18)); --g_937)
                {
                    return p_6;


                }
            }


        }
        else
        {
            unsigned short l_1697 = 0x545DL;
            const short *l_1708[6] = {(void*)0, &g_24, (void*)0, &g_24, (void*)0, &g_24};
            const short **l_1707[2];
            int *** const l_1718 = &g_1571;
            int l_1724 = (-1L);
            unsigned * const ***l_1769[6] = {&l_1766[0][4][4], (void*)0, &l_1766[0][4][4], (void*)0, &l_1766[0][4][4], (void*)0};
            int i;
            for (i = 0; i < 2; i++)
                l_1707[i] = &l_1708[5];
lbl_1725:
            (*l_1547) = (!p_6);
            for (g_1092 = (-14); (g_1092 < (-13)); g_1092 = safe_add_func_int32_t_s_s(g_1092, 8))
            {
                unsigned short *****l_1714[8] = {&l_1527, &l_1527, &l_1527, &l_1527, &l_1527, &l_1527, &l_1527, &l_1527};
                short l_1719 = 0xC35DL;
                int *l_1720[6][4] = {{&g_1092, &g_1092, &l_1425[4][0][0], &g_1092}, {&g_1092, &g_1092, &l_1425[4][0][0], &g_1092}, {&g_1092, &g_1092, &l_1425[4][0][0], &g_1092}, {&g_1092, &g_1092, &l_1425[4][0][0], &g_1092}, {&g_1092, &g_1092, &l_1425[4][0][0], &g_1092}, {&g_1092, &g_1092, &l_1425[4][0][0], &g_1092}};
                int *l_1721 = &g_672[2];
                unsigned l_1726 = 0x07891927L;
                int i, j;
                if ((safe_unary_minus_func_uint16_t_u(((**g_766) != (&g_572[3][7] != (l_1527 = l_1527))))))
                {
                    int *l_1715 = &l_1710;
                    l_1715 = &p_6;

                    ;
                    for (g_352 = 0; (g_352 <= 2); g_352 += 1)
                    {
                        int i;
                        (*g_164) = (void*)0;

                        ;
                        (*l_1715) = ((&g_747 != (void*)0) != g_1003[g_352]);
                        return p_6;
                    }
                    l_1719 = ((*l_1547) > (safe_lshift_func_uint16_t_u_s((l_1718 != &g_1571), 5)));
                }
                else
                {
                    (*g_164) = &p_5;

                    ;
                }


                (*g_164) = (l_1721 = (l_1720[1][0] = l_1720[4][3]));

                ;
                ;
                for (p_6 = 0; (p_6 == 7); p_6 = safe_add_func_uint32_t_u_u(p_6, 9))
                {
                    return (*l_1547);


                }
                for (g_1321 = 1; (g_1321 <= 4); g_1321 += 1)
                {
                    int l_1736 = 0x0EE5FD54L;
                    int i;
                    for (g_770 = 0; (g_770 <= 5); g_770 += 1)
                    {
                        int i, j, k;
                        l_1724 = ((*g_855) = g_1057[(g_770 + 2)][g_1321][(g_1321 + 1)]);
                        if (l_1515)
                            goto lbl_1725;
                        (*g_164) = &p_6;

                        ;
                        (*g_164) = (*g_164);
                    }
                    (*l_1516) = p_6;
                    if (p_5)
                        continue;
                    if ((l_1726 || ((p_6 == (*g_748)) != (g_1727 == (void*)0))))
                    {
                        char l_1735 = 0x8DL;
                        (*l_1516) = ((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((((0x93B7L == (safe_add_func_int8_t_s_s(p_6, (~(**g_747))))) > l_1697) < ((*l_1547) = p_5)) > ((l_1735 ^ l_1736) == l_1737)), 1)) & ((*g_764) = 0xB4L)), l_1738)) | (-3L));
                    }
                    else
                    {
                        return (*g_855);


                    }
                }

                ;
            }
            for (g_559 = 23; (g_559 < 10); g_559--)
            {
                (*g_164) = &p_5;

                ;
            }


            for (g_24 = (-3); (g_24 != 19); g_24 = safe_add_func_uint8_t_u_u(g_24, 8))
            {
                int l_1759[4] = {0L, 0x8C7C2259L, 0L, 0x8C7C2259L};
                unsigned l_1781 = 4294967295UL;
                int l_1782 = 0L;
                int i;
                (*g_164) = (void*)0;

                ;
                (*g_164) = (void*)0;
                for (g_119 = 28; (g_119 > (-2)); g_119 = safe_sub_func_uint32_t_u_u(g_119, 2))
                {
                    const unsigned char *l_1757 = &g_277;
                    int l_1758 = 0L;
                    unsigned * const ****l_1768[10][9] = {{&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}, {&l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765, &l_1765}};
                    int i, j;
                    if (func_49(func_61((safe_rshift_func_int16_t_s_s((-1L), func_49(&l_1737, l_1724, (safe_sub_func_int16_t_s_s((0xA2A2L != (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((func_49((*g_766), (*l_1516), (safe_mod_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u((func_49(l_1757, ((***g_1422) <= ((*l_1468) = ((*g_764) = l_1758))), (*g_748), (**g_1001)) == (**g_747)), l_1724)) == (*l_1547)) >= l_1758), p_5)), (*g_1002)) <= p_6) ^ l_1758), 0UL)), l_1759[3]))), (*l_1516))), p_6))), &l_1544, (*l_1516), l_1697, &l_1568), l_1724, (*l_1547), p_6))
                    {
                        int l_1760 = 0x4515E2FAL;
                        return l_1760;
                    }
                    else
                    {
                        (*l_1516) = (safe_mul_func_int16_t_s_s(l_1758, (-1L)));
                    }


                    (*g_379) = p_6;
                    if ((safe_rshift_func_int8_t_s_s(((l_1769[1] = l_1765) == &g_1000[0][4][0]), p_6)))
                    {
                        (*l_1547) = 0xF08C1055L;
                        return (*g_855);
                    }
                    else
                    {
                        char *l_1776[10] = {(void*)0, (void*)0, &l_1686[0], (void*)0, (void*)0, &l_1686[0], (void*)0, (void*)0, &l_1686[0], (void*)0};
                        int l_1778 = 1L;
                        int i;
                        (*l_1516) = (safe_mod_func_int16_t_s_s(p_5, (safe_add_func_uint16_t_u_u(4UL, ((safe_mod_func_uint32_t_u_u(((*g_1002) ^ (l_1758 = (p_5 <= (l_1777 = p_5)))), p_5)) | ((void*)0 != &l_1757))))));
                        (*l_1547) = (((*g_855) = l_1778) | ((((*l_1599) = (*g_764)) == p_6) < (safe_mod_func_uint16_t_u_u(p_6, ((*g_748) ^ (7L != ((l_1782 = (l_1781 = p_6)) >= l_1783)))))));
                    }
                    (*l_1718) = &g_1572[3][4][2];
                }
                if (g_1321)
                    goto lbl_1725;
            }
        }


        ;
        ;

    }



    ;
    ;
    for (g_1279 = 0; (g_1279 <= 10); g_1279++)
    {
        int l_1786 = 7L;
        p_5 = (l_1786 <= 0xEC7769BDL);
    }
    return p_5;


}







static int func_9(char p_10, const char p_11, unsigned p_12)
{
    int *l_1396 = &g_1092;
    int l_1408 = 0xE53E7D06L;
    (*g_164) = l_1396;

    ;
    (*g_164) = (*g_164);
    if (((*l_1396) = (*g_379)))
    {
        int l_1399 = 0x5263598DL;
        int *l_1409 = &g_672[2];
        (*l_1409) = (((*g_379) = (246UL && (l_1399 >= (((*l_1396) = (p_10 >= (safe_sub_func_uint16_t_u_u((((**g_1001) && (safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((p_11 > ((0xDF71L < 0xFBD1L) || (safe_lshift_func_uint8_t_u_u((*g_764), l_1399)))), (*l_1396))) | p_11), l_1399))) ^ 0x3301L), l_1399)))) == (*g_1110))))) & l_1408);
    }
    else
    {
        unsigned char l_1414[1][4][8] = {{{0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L}, {0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L}, {0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L}, {0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L, 0xF5L, 0xF1L}}};
        int ***l_1415[4][7] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
        char l_1418 = 0xD9L;
        int i, j, k;
        (*g_855) = ((func_17((((safe_lshift_func_int8_t_s_s(func_39((**g_1001), (**g_1001), p_10), (safe_rshift_func_uint8_t_u_u(((*l_1396) = (((p_12 == (!(l_1418 = (l_1414[0][2][3] == (&g_855 == (g_1417 = (g_1416[7] = &l_1396))))))) < p_12) != 0x46E3L)), 3)))) < p_12) >= p_10), (*g_224), l_1408, g_768) ^ p_10) >= p_12);



        ;
    }



    ;
    (*l_1396) = (1L & p_11);
    return (*l_1396);



}







static short func_17(int p_18, unsigned char p_19, unsigned char p_20, unsigned p_21)
{
    char l_1325 = (-1L);
    unsigned short * const l_1332 = &g_1279;
    int *l_1338[1];
    int l_1339[1];
    unsigned ***l_1346[3];
    const char **l_1359 = &g_187;
    int *l_1361[6] = {&l_1339[0], &l_1339[0], &l_1339[0], &l_1339[0], &l_1339[0], &l_1339[0]};
    unsigned *l_1375 = &g_174[7];
    unsigned **l_1374 = &l_1375;
    unsigned **l_1380 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_1338[i] = &g_429;
    for (i = 0; i < 1; i++)
        l_1339[i] = 0x9EE4C756L;
    for (i = 0; i < 3; i++)
        l_1346[i] = &g_1001;
lbl_1360:
    (*g_855) = (1L > (l_1325 | func_39(((safe_rshift_func_int16_t_s_s(1L, 4)) & (safe_sub_func_uint32_t_u_u((~(safe_lshift_func_int8_t_s_s((*g_748), (*g_748)))), (p_18 != ((void*)0 == l_1332))))), (safe_unary_minus_func_int16_t_s(((*g_1110) = l_1325))), p_20)));
lbl_1363:
    (*g_855) = (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_20, (safe_rshift_func_int8_t_s_u(p_19, (safe_mul_func_int16_t_s_s(((l_1339[0] = (safe_mul_func_int8_t_s_s(l_1339[0], 0x6EL))) <= ((void*)0 != l_1346[2])), 1UL)))))), 9L));
    for (g_126 = 0; (g_126 == 14); g_126++)
    {
        unsigned **l_1353 = &g_1002;
        int l_1356 = 0xF2CB36BCL;
        unsigned ****l_1395[4][8] = {{&l_1346[2], &g_1000[0][2][3], &l_1346[2], (void*)0, &l_1346[2], &g_1000[5][3][2], (void*)0, (void*)0}, {&l_1346[2], &g_1000[0][2][3], &l_1346[2], (void*)0, &l_1346[2], &g_1000[5][3][2], (void*)0, (void*)0}, {&l_1346[2], &g_1000[0][2][3], &l_1346[2], (void*)0, &l_1346[2], &g_1000[5][3][2], (void*)0, (void*)0}, {&l_1346[2], &g_1000[0][2][3], &l_1346[2], (void*)0, &l_1346[2], &g_1000[5][3][2], (void*)0, (void*)0}};
        int i, j;
        if (l_1325)
        {
            (*g_164) = &l_1339[0];

            ;
            if ((*g_379))
                break;
            for (g_1279 = 11; (g_1279 == 11); ++g_1279)
            {
                short l_1351 = 0L;
                int *l_1352 = &g_1092;
                if ((l_1325 | 0x8E7FF10CL))
                {
                    return l_1351;



                }
                else
                {
                    const char **l_1358 = &g_187;
                    const char ***l_1357[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1357[i] = &l_1358;
                    (*g_164) = l_1352;

                    ;
                    l_1353 = l_1353;
                    for (p_19 = 0; (p_19 > 30); p_19++)
                    {
                        return l_1356;


                    }
                    l_1359 = &g_187;
                }

                ;
            }

            ;
        }
        else
        {
            char l_1373 = 0xBAL;
            unsigned **l_1378[4][10] = {{&l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375}, {&l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375}, {&l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375}, {&l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375, &l_1375}};
            unsigned **l_1379[1][8][7];
            int *l_1382 = &g_68[0][0][4];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_1379[i][j][k] = &l_1375;
                }
            }
            for (g_1092 = 6; (g_1092 >= 0); g_1092 -= 1)
            {
                int i;
                for (g_1051 = 0; (g_1051 <= 8); g_1051 += 1)
                {
                    int *l_1362 = &l_1339[0];
                    for (g_24 = 0; g_24 < 5; g_24 += 1)
                    {
                        g_297[g_24] = &g_298;
                    }
                    if (l_1325)
                        goto lbl_1360;
                    for (p_21 = 0; (p_21 <= 1); p_21 += 1)
                    {
                        int i, j, k;
                        l_1361[2] = &g_68[p_21][p_21][g_1092];


                        return g_174[(g_1092 + 2)];



                    }
                    (*g_164) = l_1362;

                    ;
                }
                for (g_55 = 0; (g_55 <= 2); g_55 += 1)
                {
                    if (p_20)
                        goto lbl_1363;
                }
                (*g_855) = (g_174[(g_1092 + 2)] <= ((*g_1110) = p_21));
            }
            for (g_1114 = 0; (g_1114 <= 3); g_1114 += 1)
            {
                const unsigned char l_1369 = 255UL;
                for (g_1051 = 0; (g_1051 <= 8); g_1051 += 1)
                {
                    int i;
                    return g_174[g_1051];



                }
                for (l_1325 = 0; (l_1325 <= 1); l_1325 += 1)
                {
                    unsigned *l_1368 = &g_1057[7][2][0];
                    unsigned *l_1370[7][3][4] = {{{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}, {{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}, {{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}, {{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}, {{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}, {{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}, {{&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}, {&g_1051, &g_1051, &g_1051, &g_1051}}};
                    unsigned *l_1371 = (void*)0;
                    unsigned *l_1372 = &g_1051;
                    int i, j, k;
                    if ((g_174[(l_1325 + 3)] < l_1373))
                    {
                        unsigned ***l_1376 = (void*)0;
                        unsigned ***l_1377[6] = {&g_722, (void*)0, &g_722, (void*)0, &g_722, (void*)0};
                        int *l_1381 = &g_154;
                        int i;
                        (*g_379) = ((g_722 = (l_1374 = (l_1378[1][9] = l_1374))) == (l_1380 = l_1379[0][4][4]));

                        ;
                        ;
                        (*g_164) = l_1381;

                        ;
                    }
                    else
                    {
                        (*g_164) = l_1372;

                        ;
                        if (l_1369)
                            break;
                    }

                    ;
                    if ((**g_164))
                        break;
                }
            }
            (*g_164) = l_1382;

            ;
            g_672[0] = (!(p_20 > ((safe_lshift_func_uint16_t_u_u(((p_19 == ((*g_1002) = (safe_mul_func_int16_t_s_s(p_19, ((*l_1382) = (*l_1382)))))) || l_1356), p_19)) && (*g_748))));
        }

        ;
        if (p_21)
            break;
    }
    return p_21;



}







static unsigned func_27(unsigned short p_28, int p_29)
{
    int l_1105 = 0L;
    const unsigned char *l_1106 = &g_225[3][7];
    short **l_1107[6][3][6] = {{{&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}}, {{&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}}, {{&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}}, {{&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}}, {{&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}}, {{&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}, {&g_72[3][3], &g_72[0][1], &g_72[3][4], (void*)0, &g_72[3][3], &g_72[3][3]}}};
    int l_1108 = 0L;
    short l_1109 = 3L;
    unsigned short l_1111 = 0UL;
    int **l_1115[8];
    unsigned char l_1187 = 0xDFL;
    const unsigned char l_1199 = 1UL;
    char **l_1237 = &g_748;
    unsigned *l_1253 = &g_174[7];
    unsigned l_1256 = 0xF9A76D38L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1115[i] = &g_379;
    (*g_379) = ((safe_add_func_int16_t_s_s(((((**g_1001) = p_29) != p_29) | (((((*g_71) != (g_1110 = func_34((safe_lshift_func_uint16_t_u_u(l_1109, 11)), (*g_71), g_46))) >= 0xECBFF749L) != l_1111) <= (*g_187))), l_1105)) ^ p_28);
    for (l_1111 = 0; (l_1111 == 10); l_1111 = safe_add_func_uint16_t_u_u(l_1111, 5))
    {
        unsigned short *l_1123 = &g_771[0];
        const unsigned char *l_1133 = &g_55;
        const int l_1134[5] = {0L, 0L, 0L, 0L, 0L};
        short **l_1153 = &g_1110;
        unsigned * const l_1185 = &g_126;
        int l_1186 = (-10L);
        unsigned **l_1218 = (void*)0;
        unsigned l_1226[8] = {0x435AA483L, 0UL, 0x435AA483L, 0UL, 0x435AA483L, 0UL, 0x435AA483L, 0UL};
        int i;
        for (g_46 = 0; (g_46 <= 2); g_46 += 1)
        {
            short l_1130 = 0L;
            int *l_1150 = &g_672[2];
            if (p_29)
                break;
        }
    }
    for (g_770 = 0; (g_770 < 25); g_770 = safe_add_func_uint16_t_u_u(g_770, 7))
    {
        unsigned *l_1249[5][9][5] = {{{&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}}, {{&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}}, {{&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}}, {{&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}}, {{&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}, {&g_174[0], &g_1057[7][2][0], &g_174[7], &g_174[7], &g_1057[7][0][3]}}};
        unsigned *l_1252 = &g_1057[6][1][4];
        int l_1266 = 0x0BCC1E2BL;
        unsigned * const *l_1278 = &g_1002;
        unsigned * const **l_1277 = &l_1278;
        unsigned * const ***l_1276 = &l_1277;
        char l_1323 = 0xD9L;
        int i, j, k;
        (*g_855) = 0x786A3BD9L;
        for (g_352 = 0; (g_352 <= 2); g_352 += 1)
        {
            unsigned short l_1240 = 0xFD98L;
            const unsigned char *l_1245 = &l_1187;
            unsigned **l_1250 = (void*)0;
            unsigned **l_1251 = &l_1249[0][1][0];
            short *l_1254 = &l_1109;
            unsigned char *l_1255 = (void*)0;
            int l_1284 = 0L;
            int *l_1300[9] = {(void*)0, (void*)0, &g_1092, (void*)0, (void*)0, &g_1092, (void*)0, (void*)0, &g_1092};
            int i;
            for (g_937 = 0; (g_937 <= 2); g_937 += 1)
            {
                if (p_29)
                    break;
                if ((*g_855))
                    break;
            }
            g_747 = l_1237;
            if ((safe_mod_func_int16_t_s_s(l_1240, (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((-1L) > (*g_1110)), func_49(l_1245, func_49(func_61((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint16_t_u_u(((0x69L == ((*g_748) = (*g_748))) == (255UL & (0xB6646B03L & ((l_1252 = ((*l_1251) = l_1249[3][5][3])) != l_1253)))), p_28)))), l_1254, l_1240, g_365, l_1255), p_29, l_1240, l_1240), p_28, (*g_1002)))), p_29)) >= l_1256) ^ 3L))))
            {
                short l_1269 = 0x1468L;
                int *l_1301 = &g_68[1][1][1];
                for (g_351 = 0; (g_351 <= 2); g_351 += 1)
                {
                    int l_1257 = 0xFF4B06E3L;
                    int *l_1283[2][4][1];
                    unsigned char *l_1290 = &g_351;
                    int ***l_1297 = &l_1115[7];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1283[i][j][k] = &g_154;
                        }
                    }
                    for (g_559 = 2; (g_559 >= 0); g_559 -= 1)
                    {
                        unsigned short l_1280 = 0x187EL;
                        short *l_1289 = &g_85;
                        const unsigned char *l_1291 = &g_1292[0][5][0];
                        int i;
                        g_672[g_351] = l_1257;
                        g_672[g_352] = (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1266, (safe_sub_func_uint16_t_u_u(l_1269, (safe_rshift_func_int8_t_s_u((4294967292UL <= p_29), 7)))))), (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((l_1276 != &l_1277) && ((((&l_1250 != &g_722) && (((*l_1254) = (l_1257 == 6L)) > 1L)) | p_29) ^ g_1279)), (*g_1002))), l_1280)))), 0x8FL)) > l_1266), l_1269));
                        if (l_1240)
                            continue;
                        (*g_855) = (safe_mod_func_uint16_t_u_u((p_28 = (l_1283[1][0][0] == (void*)0)), (l_1284 || (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(251UL, ((((func_49((l_1291 = func_61(l_1266, (g_72[3][0] = l_1289), p_29, g_1057[7][2][0], func_61(((*g_855) = 0L), l_1254, p_29, l_1266, l_1290))), p_29, (**g_747), (*g_1002)) ^ 1UL) & p_29) >= (*g_1110)) && p_29))), 5)))));

                        ;
                    }


                    for (p_28 = (-11); (p_28 >= 36); ++p_28)
                    {
                        char * const *l_1296 = &g_748;
                        char * const **l_1295 = &l_1296;
                        (*l_1295) = (void*)0;

                        ;
                        (*g_379) = p_29;
                        (*g_855) = (&l_1115[7] != l_1297);
                    }
                    return l_1266;
                }
                for (p_29 = 0; (p_29 > 20); p_29 = safe_add_func_int16_t_s_s(p_29, 7))
                {
                    int *l_1302 = &g_672[2];
                    int *l_1303 = &g_154;
                    l_1301 = l_1300[4];

                    ;
                    if (p_28)
                        break;
                    l_1303 = l_1302;

                    ;
                }

                ;
                for (g_351 = 0; (g_351 >= 36); g_351 = safe_add_func_uint16_t_u_u(g_351, 1))
                {
                    unsigned char l_1309 = 0xDEL;
                    unsigned short *l_1320[10] = {(void*)0, &g_1279, &l_1240, &l_1240, &g_1279, (void*)0, &g_1279, &l_1240, &l_1240, &g_1279};
                    unsigned *l_1322 = &l_1256;
                    int i;
                    (*g_855) = 6L;
                    for (p_28 = 0; (p_28 <= 7); p_28 += 1)
                    {
                        int * const l_1306[1][2] = {{&g_672[2], &g_672[2]}};
                        int **l_1307[3];
                        int **l_1308 = &g_855;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1307[i] = (void*)0;
                        (*l_1308) = l_1306[0][1];

                        ;
                        (*g_164) = (*g_164);
                    }
                    (*g_164) = l_1301;
                    (*g_379) = ((((*g_1110) > l_1309) || ((l_1309 || (((**l_1278) = ((safe_add_func_uint8_t_u_u(l_1266, (safe_lshift_func_uint16_t_u_u(func_49(&l_1199, ((*l_1322) = ((safe_add_func_int32_t_s_s((-4L), p_28)) != (safe_lshift_func_uint16_t_u_s((g_1321 = (safe_lshift_func_int8_t_s_u(l_1309, (p_29 || (*g_748))))), 0)))), p_29, l_1266), l_1323)))) == p_28)) != 1L)) & (-5L))) && l_1323);
                }

                ;
                ;
            }
            else
            {
                return (**g_1001);
            }


            ;
            ;
            ;
            return l_1266;
        }
    }
    return (**g_1001);
}







static short * func_34(short p_35, short * p_36, unsigned p_37)
{
    int l_38[4];
    char l_48 = (-8L);
    const unsigned char *l_54 = &g_55;
    short * const l_73 = &g_24;
    unsigned short ***l_438[5] = {&g_297[1], (void*)0, &g_297[1], (void*)0, &g_297[1]};
    int l_439 = 0x3FF8AF2FL;
    short *l_443 = &g_85;
    int l_484 = 0x3E47ADD7L;
    unsigned char l_490 = 255UL;
    int *l_528[5][1] = {{&l_484}, {&l_484}, {&l_484}, {&l_484}, {&l_484}};
    const char **l_545 = &g_187;
    unsigned *l_627 = &g_126;
    unsigned **l_626 = &l_627;
    unsigned l_673 = 4294967295UL;
    char l_679 = 0xCEL;
    char *l_745 = &g_365;
    char **l_744 = &l_745;
    unsigned char l_802 = 0xF5L;
    short *l_907 = &g_24;
    unsigned ***l_939 = &l_626;
    unsigned ****l_938 = &l_939;
    unsigned char *l_953 = &g_351;
    unsigned l_981 = 0x778E0379L;
    int *l_1026 = (void*)0;
    int l_1029[8] = {(-4L), 0L, (-4L), 0L, (-4L), 0L, (-4L), 0L};
    char *l_1093[4] = {&l_679, &l_48, &l_679, &l_48};
    unsigned char l_1094 = 0x14L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_38[i] = 1L;
    for (p_37 = 0; (p_37 <= 3); p_37 += 1)
    {
        unsigned char *l_45[5] = {&g_46, &g_46, &g_46, &g_46, &g_46};
        int l_47 = 0x7EF23E46L;
        int l_441[7] = {0x6A26EEE2L, 0x6A26EEE2L, (-1L), 0x6A26EEE2L, 0x6A26EEE2L, (-1L), 0x6A26EEE2L};
        unsigned char l_445 = 0xF3L;
        short l_457 = 0x35C0L;
        int l_458[4];
        unsigned l_493 = 4294967295UL;
        unsigned char l_494 = 0UL;
        unsigned short l_537 = 0x4DE8L;
        int *l_593[1];
        int i;
        for (i = 0; i < 4; i++)
            l_458[i] = 0xEA6689E2L;
        for (i = 0; i < 1; i++)
            l_593[i] = &l_484;
    }
    return l_443;


}







static int func_39(unsigned p_40, unsigned p_41, const char p_42)
{
    const unsigned char *l_86 = &g_46;
    const int l_88 = 0x8BA70195L;
    char l_137 = (-6L);
    int *l_138 = &g_68[0][0][1];
    char l_149 = 0x5FL;
    unsigned short l_155 = 1UL;
    int l_176 = 0xD7FE7CF9L;
    short *l_184 = &g_24;
    int l_195 = (-1L);
    char **l_270 = (void*)0;
    char ***l_269[9] = {(void*)0, &l_270, (void*)0, &l_270, (void*)0, &l_270, (void*)0, &l_270, (void*)0};
    const short l_342 = 0xA5CBL;
    const unsigned short *l_408[5];
    const unsigned short **l_407 = &l_408[4];
    int i;
    for (i = 0; i < 5; i++)
        l_408[i] = &l_155;
    for (p_40 = 0; (p_40 <= 3); p_40 += 1)
    {
        const unsigned char *l_79 = &g_55;
        int l_82 = (-1L);
        const short *l_107 = &g_24;
        const short **l_106 = &l_107;
        int l_116 = 0xB31B8100L;
        char *l_183[2];
        const char *l_186 = (void*)0;
        const char **l_185[3];
        unsigned char *l_189 = &g_55;
        const unsigned l_192 = 4294967295UL;
        const char l_256 = 0L;
        unsigned l_258 = 0xAFC14AF0L;
        unsigned short l_259 = 0xAB27L;
        int i;
        for (i = 0; i < 2; i++)
            l_183[i] = &g_119;
        for (i = 0; i < 3; i++)
            l_185[i] = &l_186;
        for (p_41 = 0; (p_41 <= 1); p_41 += 1)
        {
            const unsigned char *l_83 = (void*)0;
            short *l_84 = &g_85;
            const unsigned char **l_87 = &l_86;
            int l_89 = (-9L);
            int *l_90 = &l_89;
            short **l_110 = &g_72[p_41][p_40];
            char *l_153[7];
            char **l_152 = &l_153[2];
            int **l_163 = (void*)0;
            unsigned char l_175 = 0UL;
            int i, j;
            for (i = 0; i < 7; i++)
                l_153[i] = &l_149;
            (*l_90) = ((0xA2L & func_49(l_79, (safe_lshift_func_uint8_t_u_u(l_82, l_82)), g_24, (func_49(l_83, (((0x48C55279L > (((((*l_84) = p_40) == func_49(((*l_87) = l_86), l_88, g_46, p_40)) >= 0xDBL) < 0xAF686033L)) | 0x7601L) <= l_88), l_82, l_88) | l_82))) <= l_89);
            if (g_24)
                break;
            for (g_55 = 0; (g_55 <= 1); g_55 += 1)
            {
                const int *l_100 = &l_88;
                const int **l_99 = &l_100;
                int l_101 = 0xD8ED9CDEL;
                char *l_141 = (void*)0;
                unsigned short *l_142 = (void*)0;
                unsigned short *l_143 = &g_144;
                unsigned l_158 = 0UL;
                const int l_166 = (-9L);
                int i, j, k;
                if ((g_68[p_41][g_55][(g_55 + 4)] = ((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0L, (safe_lshift_func_int8_t_s_s(((g_68[g_55][p_41][(p_41 + 1)] <= 0x7E2F045CL) != ((l_101 = (safe_sub_func_uint8_t_u_u((((*l_99) = &l_88) != &g_68[p_41][g_55][(p_40 + 3)]), (&l_83 == (void*)0)))) || (safe_lshift_func_uint16_t_u_s(0x8BA3L, 14)))), 2)))), 0xA85175EFL)) < g_68[1][0][5])))
                {
                    short ***l_108 = &g_71;
                    short ***l_109[3][8] = {{&g_71, &g_71, &g_71, &g_71, &g_71, (void*)0, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, (void*)0, &g_71, &g_71}, {&g_71, &g_71, &g_71, &g_71, &g_71, (void*)0, &g_71, &g_71}};
                    unsigned *l_115 = (void*)0;
                    int i, j;
                    (*l_99) = &g_68[1][1][1];

                    ;
                    if ((safe_sub_func_uint8_t_u_u((((l_106 == (l_110 = &g_72[3][3])) && (safe_mul_func_uint8_t_u_u(g_55, p_42))) > (safe_add_func_int32_t_s_s(g_68[1][0][2], l_82))), ((p_41 == (l_116 = ((-1L) && (p_40 && (-6L))))) < 0x6052L))))
                    {
                        int *l_117 = &l_89;
                        (*l_99) = (*l_99);
                        (*l_99) = &l_88;

                        ;
                        (*l_99) = l_117;

                        ;
                    }
                    else
                    {
                        (*l_90) = 0xA49A9C08L;
                        if (l_88)
                            continue;
                    }

                    ;
                }
                else
                {
                    char *l_118 = &g_119;
                    if ((p_41 | ((*l_118) = g_85)))
                    {
                        int *l_120 = (void*)0;
                        int *l_121 = (void*)0;
                        int *l_122 = &g_68[1][1][1];
                        (*l_122) = ((*l_90) = 0x9196E2F7L);
                    }
                    else
                    {
                        unsigned *l_125 = &g_126;
                        unsigned char l_133 = 0x51L;
                        int l_136 = 0x24304B69L;
                        l_136 = (((safe_mul_func_uint16_t_u_u((g_24 == ((*l_125) = p_41)), p_42)) >= (safe_mul_func_uint16_t_u_u((*l_90), p_42))) > (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_133, (safe_rshift_func_int8_t_s_s((((((*l_118) = (p_42 ^ p_40)) && (-3L)) < (*l_90)) < (*l_90)), 6)))), p_42)));
                        (*l_90) = l_137;
                    }
                    l_138 = (void*)0;

                    ;
                }

                ;
                if (((g_126 == l_82) >= (safe_sub_func_uint32_t_u_u((~(p_42 == ((g_119 = g_24) == p_42))), ((p_42 & ((*l_143) = g_55)) <= p_40)))))
                {
                    return p_40;
                }
                else
                {
                    const short l_173 = 0x0126L;
                    for (g_85 = 0; (g_85 <= 3); g_85 += 1)
                    {
                        (*l_90) = 0x6F0504CBL;
                        (*l_99) = &g_68[1][0][2];

                        ;
                        (*l_90) = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_68[1][0][2], l_149)), 10));
                        if (p_41)
                            continue;
                    }
                    for (g_119 = 0; (g_119 <= 3); g_119 += 1)
                    {
                        char **l_150 = (void*)0;
                        char ***l_151[9] = {&l_150, &l_150, &l_150, &l_150, &l_150, &l_150, &l_150, &l_150, &l_150};
                        int i;
                        (*l_90) = (l_82 | g_144);
                        l_152 = l_150;

                        ;
                        (*l_90) = (-1L);
                    }
                    (*l_90) = 4L;
                    (*l_90) = (g_154 & (l_176 = (l_155 ^ (((safe_rshift_func_int8_t_s_u(l_158, (safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_163 == g_164), 6UL)) <= l_166), (safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_42, (l_173 | p_42))), 0UL)) <= g_174[7]) != l_82), l_175)))))) ^ 0x00ABL) != p_41))));
                }
            }

            ;
        }
        (*g_164) = &l_116;

        ;
    }

    ;
    (*g_164) = &l_195;

    ;
    for (g_119 = 0; (g_119 <= 1); g_119 += 1)
    {
        int **l_337[5] = {&l_138, &l_138, &l_138, &l_138, &l_138};
        const unsigned char *l_359 = (void*)0;
        const int l_360 = 0x1EC9D5EBL;
        const unsigned char l_372[6][2][5] = {{{0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}, {0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}}, {{0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}, {0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}}, {{0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}, {0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}}, {{0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}, {0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}}, {{0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}, {0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}}, {{0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}, {0x2DL, 1UL, 1UL, 0x2DL, 0x5CL}}};
        char **l_394 = (void*)0;
        int i, j, k;
        l_176 = (((void*)0 != l_337[3]) && p_42);
        if ((**g_164))
            break;
        for (g_144 = 0; (g_144 <= 1); g_144 += 1)
        {
            unsigned short l_345 = 1UL;
            unsigned short l_346 = 0xA8C9L;
            unsigned char *l_357[3][9] = {{&g_46, &g_55, (void*)0, &g_55, &g_46, (void*)0, &g_46, &g_55, (void*)0}, {&g_46, &g_55, (void*)0, &g_55, &g_46, (void*)0, &g_46, &g_55, (void*)0}, {&g_46, &g_55, (void*)0, &g_55, &g_46, (void*)0, &g_46, &g_55, (void*)0}};
            int l_376 = (-1L);
            int *l_378 = &g_68[1][0][2];
            int i, j;
            l_176 = (((g_352 = (g_351 = (safe_sub_func_uint8_t_u_u(p_41, ((+p_42) & ((safe_mul_func_uint8_t_u_u((p_41 == l_342), (p_41 == (((l_346 = (safe_mod_func_uint8_t_u_u(p_40, l_345))) | ((((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_225[0][9], p_42)) ^ 0L), 0x75L)) >= p_41) || l_155) || g_277)) < (-1L))))) ^ 1L)))))) >= (*g_224)) && 0x9175AB73L);
        }
        for (g_429 = 0; (g_429 <= 3); g_429 += 1)
        {
            (*g_379) = p_42;
            (*g_379) = 1L;
        }
    }
    return p_42;


}







static const short func_49(const unsigned char * p_50, const unsigned p_51, const char p_52, const unsigned p_53)
{
    const int l_78 = 4L;
    for (g_55 = (-26); (g_55 >= 11); g_55 = safe_add_func_int32_t_s_s(g_55, 7))
    {
        int *l_77 = &g_68[1][0][2];
        (*l_77) = g_68[1][0][2];
    }
    return l_78;
}







static short * func_58(unsigned char * p_59, short * const p_60)
{
    short *l_74[8][7] = {{&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}, {&g_24, (void*)0, &g_24, (void*)0, &g_24, &g_24, &g_24}};
    int i, j;
    return l_74[3][1];


}







static unsigned char * func_61(int p_62, short * p_63, int p_64, int p_65, unsigned char * p_66)
{
    int *l_67 = &g_68[1][0][2];
    short *l_70 = &g_24;
    short **l_69 = &l_70;
    l_67 = &p_62;

    ;
    (*l_67) = p_62;
    g_71 = l_69;

    ;
    return p_66;



}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_68[i][j][k], "g_68[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_174[i], "g_174[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_225[i][j], "g_225[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_672[i], "g_672[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_771[i], "g_771[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1003[i], "g_1003[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1051, "g_1051", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1057[i][j][k], "g_1057[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1122, "g_1122", print_hash_value);
    transparent_crc(g_1279, "g_1279", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1292[i][j][k], "g_1292[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1321, "g_1321", print_hash_value);
    transparent_crc(g_1324, "g_1324", print_hash_value);
    transparent_crc(g_1561, "g_1561", print_hash_value);
    transparent_crc(g_1587, "g_1587", print_hash_value);
    transparent_crc(g_1618, "g_1618", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1709[i], "g_1709[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
