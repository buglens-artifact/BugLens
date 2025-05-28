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



static unsigned short g_2 = 0xA362L;
static short g_7 = 0L;
static int g_16 = 0xD2C87A75L;
static char g_75 = 1L;
static unsigned g_84 = 0x4251D174L;
static unsigned *g_83 = &g_84;
static int g_86 = 0x7E161529L;
static unsigned short g_114 = 4UL;
static unsigned short g_120 = 1UL;
static unsigned short *g_132[6][10][4] = {{{&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}}, {{&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}}, {{&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}}, {{&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}}, {{&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}}, {{&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}, {&g_120, &g_2, &g_2, &g_120}}};
static short g_136[1] = {5L};
static unsigned g_150 = 0x5A2DF7CCL;
static unsigned g_153 = 4294967292UL;
static int g_156 = (-1L);
static const int **g_168 = (void*)0;
static unsigned char g_197 = 253UL;
static unsigned short g_224 = 0xA3EFL;
static unsigned char g_245 = 255UL;
static unsigned char *g_244[3] = {&g_245, &g_245, &g_245};
static char g_256 = 0x03L;
static char g_257 = 0x17L;
static short g_259[6][6] = {{0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L}, {0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L}, {0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L}, {0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L}, {0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L}, {0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L, 0x81AAL, 0xEF35L}};
static short g_261[2] = {0x95FCL, 0x95FCL};
static unsigned char g_262 = 251UL;
static char g_280 = 0x16L;
static int g_281 = 0L;
static int g_282 = 0x304A45FEL;
static unsigned g_317 = 0x2866832CL;
static unsigned char g_337 = 246UL;
static short g_363[4] = {1L, (-1L), 1L, (-1L)};
static int g_364 = 0x36EDDF0EL;
static unsigned short g_385 = 0x4950L;
static int g_400 = 0L;
static unsigned short g_401 = 0xF96CL;
static int g_430 = 0xA86CC851L;
static unsigned g_432 = 0xF08E9BBEL;
static int *g_477 = &g_156;
static int **g_476 = &g_477;
static char g_498[4] = {0L, 0L, 0L, 0L};
static unsigned short g_499 = 0UL;
static char *g_579[8] = {&g_75, &g_256, &g_75, &g_256, &g_75, &g_256, &g_75, &g_256};
static char **g_578 = &g_579[3];
static short g_607 = 0x6E7CL;
static int g_615 = 0xF17830FDL;
static unsigned g_616[5] = {0x91202AA5L, 0x91202AA5L, 0x91202AA5L, 0x91202AA5L, 0x91202AA5L};
static int g_663 = 0L;
static const int g_725 = (-1L);
static unsigned char g_741 = 247UL;
static unsigned g_742 = 4294967295UL;
static unsigned g_754 = 0x50804B5FL;
static char g_777 = 0x0DL;
static unsigned g_798 = 0UL;
static int g_840 = (-10L);
static int g_931[3] = {0x465B81D0L, 0x465B81D0L, 0x465B81D0L};
static unsigned g_970 = 4UL;
static unsigned char **g_1049 = &g_244[0];
static unsigned char ***g_1048[10][9] = {{&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}, {&g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0, &g_1049, &g_1049, (void*)0}};
static unsigned char g_1136 = 0UL;
static const short *g_1151 = &g_607;
static const short **g_1150 = &g_1151;
static unsigned short *g_1165[2][5][6] = {{{&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}}, {{&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}, {&g_385, (void*)0, &g_224, &g_385, &g_224, (void*)0}}};
static unsigned short **g_1164[6] = {&g_1165[0][1][5], &g_1165[0][1][5], &g_1165[0][1][5], &g_1165[0][1][5], &g_1165[0][1][5], &g_1165[0][1][5]};
static int g_1190 = 0x1E69468EL;
static unsigned short g_1191[6] = {0x14A9L, 0x14A9L, 0x14A9L, 0x14A9L, 0x14A9L, 0x14A9L};
static int * const g_1236 = (void*)0;
static int * const *g_1235 = &g_1236;
static int * const **g_1234[9][2][1] = {{{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}, {{&g_1235}, {&g_1235}}};
static int g_1251 = 9L;
static int g_1310 = 0xA6418684L;
static unsigned short g_1347 = 65531UL;
static unsigned **g_1351 = (void*)0;
static char g_1455 = 0x77L;
static unsigned g_1482[1][5] = {{4294967294UL, 0xD437C6A8L, 4294967294UL, 0xD437C6A8L, 4294967294UL}};
static const int *g_1493 = &g_16;
static unsigned g_1611 = 0x1B3620A7L;
static unsigned char g_1637[7][10] = {{0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}, {0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}, {0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}, {0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}, {0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}, {0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}, {0x76L, 0x45L, 0x79L, 250UL, 255UL, 0xC6L, 0x08L, 0x25L, 0x25L, 0x08L}};
static unsigned **g_1677 = (void*)0;
static unsigned ***g_1676 = &g_1677;
static unsigned short g_1708 = 65535UL;
static int g_1725[5][6][4] = {{{0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}}, {{0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}}, {{0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}}, {{0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}}, {{0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}, {0x57393AA5L, 0x0510F5DFL, 0xB12E0BF0L, 0xF7B53977L}}};
static const int g_1836[10] = {2L, (-1L), (-6L), (-6L), (-1L), 2L, (-1L), (-6L), (-6L), (-1L)};
static char g_1839 = (-4L);
static int g_1858[5][6] = {{0x20EB2A6EL, 0x192713B0L, 0x3E92AE4CL, 0x192713B0L, 0x20EB2A6EL, 0x15E88C9AL}, {0x20EB2A6EL, 0x192713B0L, 0x3E92AE4CL, 0x192713B0L, 0x20EB2A6EL, 0x15E88C9AL}, {0x20EB2A6EL, 0x192713B0L, 0x3E92AE4CL, 0x192713B0L, 0x20EB2A6EL, 0x15E88C9AL}, {0x20EB2A6EL, 0x192713B0L, 0x3E92AE4CL, 0x192713B0L, 0x20EB2A6EL, 0x15E88C9AL}, {0x20EB2A6EL, 0x192713B0L, 0x3E92AE4CL, 0x192713B0L, 0x20EB2A6EL, 0x15E88C9AL}};



static unsigned char func_1(void);
static int func_8(const short p_9);
static unsigned char func_12(const short p_13, int p_14);
static unsigned func_32(int p_33, const int p_34, short p_35, const unsigned short p_36);
static char func_43(int * p_44, int p_45, int * p_46);
static int * func_47(int * p_48, const unsigned p_49, unsigned p_50);
static int * func_51(const unsigned char p_52, char p_53, const int p_54, unsigned short p_55);
static unsigned char func_56(const int p_57, int p_58, int * p_59, int * p_60, char p_61);
static int func_64(int p_65);
static unsigned char func_67(const int * p_68, char p_69, unsigned short p_70, int * p_71);
static unsigned char func_1(void)
{
    unsigned l_1702[8][6] = {{7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}, {7UL, 7UL, 0x66A6AB25L, 0UL, 7UL, 0UL}};
    int l_1707 = 1L;
    unsigned short l_1716 = 0x690EL;
    int l_1719 = 1L;
    unsigned short l_1735 = 4UL;
    int l_1746 = (-1L);
    int l_1747 = 0L;
    int l_1749[2];
    unsigned l_1784 = 4294967287UL;
    short l_1798 = 0L;
    unsigned short l_1808 = 0x25CDL;
    const unsigned l_1811 = 0x7C44D57AL;
    const unsigned char l_1826 = 0x0AL;
    unsigned short l_1868 = 0xBC0AL;
    int *l_1893 = &l_1707;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1749[i] = 0x49BFE82FL;
    if ((g_2 , (safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(g_7, g_7)) , ((((l_1702[0][5] = func_8((g_7 , g_2))) != (6UL < (safe_mod_func_int16_t_s_s((g_1708 = (safe_lshift_func_int16_t_s_u(l_1707, (((l_1707 || 1L) , (-10L)) == g_282)))), 6UL)))) , l_1707) >= 0x68L)), 0x91L))))
    {
        const int l_1709 = 0xA8C1FD2AL;
        int l_1710[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1710[i] = 0x2A705934L;
        l_1710[0] = (g_741 , l_1707);
    }
    else
    {
        char l_1723 = (-3L);
        short l_1740 = 2L;
        int l_1750 = 4L;
        int l_1756 = 1L;
        int l_1771 = 0L;
        unsigned short * const *l_1783[2];
        unsigned short * const **l_1782 = &l_1783[0];
        char l_1790 = 1L;
        const int *l_1796 = &g_663;
        const int *l_1835[3][4] = {{&g_1836[5], &g_1836[5], &g_725, &g_725}, {&g_1836[5], &g_1836[5], &g_725, &g_725}, {&g_1836[5], &g_1836[5], &g_725, &g_725}};
        char l_1875 = (-9L);
        int i, j;
        for (i = 0; i < 2; i++)
            l_1783[i] = &g_1165[1][2][5];
        for (g_256 = 29; (g_256 != (-4)); g_256 = safe_sub_func_int16_t_s_s(g_256, 1))
        {
            char l_1715 = 9L;
            unsigned char l_1722 = 255UL;
            int l_1724 = 0xF4DA25F5L;
            int l_1748 = 0xB39C5DBBL;
            int l_1754[1];
            unsigned *l_1785 = &g_84;
            short l_1809[10][3] = {{0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}, {0L, 0xA95FL, 0x221EL}};
            char l_1825 = (-1L);
            const unsigned l_1831 = 1UL;
            const int *l_1851[3][8][4] = {{{&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}}, {{&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}}, {{&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}, {&g_931[2], &l_1771, &g_931[0], &g_931[1]}}};
            unsigned short l_1880 = 0x8C2BL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1754[i] = (-1L);
            if ((safe_add_func_uint32_t_u_u(((func_64(l_1715) , 3UL) ^ l_1716), ((safe_div_func_uint32_t_u_u(((((**g_1049) = l_1719) ^ l_1715) , ((((l_1724 ^= ((((safe_mod_func_int16_t_s_s(l_1722, (l_1723 & l_1723))) , 0xCF4A468FL) , l_1723) , 1L)) != 5L) >= l_1715) <= g_1725[2][3][0])), 7L)) != l_1715))))
            {
                int *l_1726 = &g_931[1];
                int *l_1727 = &g_931[1];
                int *l_1728 = &g_1725[2][3][0];
                int *l_1729 = &g_156;
                int *l_1730 = &l_1724;
                int *l_1731 = &g_1725[4][4][1];
                int *l_1732 = (void*)0;
                int *l_1733 = &g_86;
                int *l_1734 = &g_16;
                int l_1742 = 5L;
                int l_1745 = 4L;
                int l_1751 = 0xA63D8F86L;
                int l_1752 = 0x85A7BEE5L;
                int l_1753 = (-5L);
                int l_1755 = 0x5A53BE64L;
                unsigned char l_1757 = 0xE3L;
                int l_1780 = 1L;
                l_1735++;
                for (g_663 = 0; (g_663 < (-19)); g_663--)
                {
                    char l_1741 = (-4L);
                    int *l_1743 = (void*)0;
                    int *l_1744[7][1] = {{&g_16}, {&g_16}, {&g_16}, {&g_16}, {&g_16}, {&g_16}, {&g_16}};
                    const int l_1770 = (-1L);
                    int i, j;
                    --l_1757;
                    for (g_1455 = 8; (g_1455 >= 3); g_1455 -= 1)
                    {
                        short *l_1760[2][7];
                        int l_1763 = 0x8BAEA99EL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_1760[i][j] = &g_363[2];
                        }
                        l_1771 &= (func_64(((((l_1750 = 0x5AEAL) <= func_64(((((*l_1734) , (safe_rshift_func_int16_t_s_s(l_1763, (*g_1151)))) == (((*l_1726) = (((*l_1729) = ((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_1754[0], l_1763)), ((*l_1726) , (+(((safe_mod_func_uint32_t_u_u((((**g_1049) >= (l_1756 ^ l_1763)) , (*g_83)), l_1763)) > l_1724) >= 0x7998L))))) , (*l_1731))) < (**g_1150))) , l_1770)) & (-5L)))) < l_1763) , (-1L))) < l_1756);
                    }
                }
                for (g_280 = 0; (g_280 < 25); g_280 = safe_add_func_int8_t_s_s(g_280, 5))
                {
                    unsigned *l_1774 = &g_317;
                    int l_1777 = (-3L);
                    unsigned short ***l_1781 = &g_1164[1];
                    for (g_401 = 0; (g_401 <= 3); g_401 += 1)
                    {
                        int i;
                        (*l_1730) = g_498[g_401];
                        if (g_498[g_401])
                            continue;
                    }
                    (*l_1731) |= ((((++(*l_1774)) , ((l_1777 , ((l_1780 ^= (safe_rshift_func_int16_t_s_u((**g_1150), 14))) > l_1702[0][5])) | l_1777)) , l_1781) != l_1782);
                }
            }
            else
            {
                int l_1791[5] = {0x6FA92439L, 0xCE5207AAL, 0x6FA92439L, 0xCE5207AAL, 0x6FA92439L};
                unsigned l_1803[3];
                int l_1810 = 0x58A299D8L;
                const unsigned *l_1830 = &g_432;
                const unsigned **l_1829[1][8][10] = {{{&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}, {&l_1830, (void*)0, &l_1830, &l_1830, (void*)0, &l_1830, &l_1830, &l_1830, &l_1830, &l_1830}}};
                const unsigned l_1833 = 0xC147C763L;
                int l_1856 = (-3L);
                int l_1866 = 0x83103A24L;
                unsigned short l_1869 = 65535UL;
                int l_1878 = 0x879B3566L;
                int l_1879 = 0L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1803[i] = 0x7686AF9AL;
                if ((func_64(l_1784) , (((**g_1049) = (((l_1702[0][5] , (l_1785 == &l_1784)) >= 1L) | (**g_578))) & (l_1747 != (l_1748 = ((safe_div_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((((((**g_578) || l_1702[0][5]) && l_1784) , 0xE329L) >= l_1790), 7)) & 8UL) & l_1754[0]), (**g_578))) , 0x93C0L))))))
                {
                    unsigned char l_1792 = 254UL;
                    (*g_476) = (void*)0;
                    l_1792 ^= l_1791[0];
                    return l_1754[0];
                }
                else
                {
                    unsigned l_1795 = 1UL;
                    int *l_1797[7] = {&l_1754[0], &l_1754[0], &g_1725[1][0][1], &l_1754[0], &l_1754[0], &g_1725[1][0][1], &l_1754[0]};
                    char l_1843 = 0x81L;
                    int l_1867 = 0xD07D253AL;
                    int i;
                    l_1798 &= (func_64(l_1749[0]) <= (safe_lshift_func_uint8_t_u_s(((&g_1049 != &g_1049) & l_1795), (l_1796 != l_1796))));
                    if ((l_1754[0] = ((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((l_1803[0] | ((4UL && ((l_1810 = (((0x0FL < (!l_1723)) < (((*l_1785) = 0x9D76B508L) > (safe_sub_func_uint32_t_u_u(l_1724, (safe_lshift_func_uint16_t_u_s((l_1790 , (l_1791[4] , ((l_1750 <= 8UL) < l_1803[0]))), l_1808)))))) == l_1809[6][0])) > l_1784)) != (**g_1150))), l_1723)), l_1803[0])) >= 1UL)))
                    {
                        char *l_1822 = &g_498[3];
                        int l_1827 = 0L;
                        int l_1828[1];
                        int l_1832[9] = {0L, 0L, 0x195A2D46L, 0L, 0L, 0x195A2D46L, 0L, 0L, 0x195A2D46L};
                        const int **l_1834 = &g_1493;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1828[i] = 0L;
                        l_1828[0] ^= l_1803[0];
                        if (l_1702[0][5])
                            continue;
                    }
                    else
                    {
                        char l_1840 = 0xF1L;
                        unsigned l_1844 = 0xCC4EAA34L;
                        short *l_1854 = (void*)0;
                        short *l_1855 = &g_136[0];
                        char *l_1857 = &l_1715;
                        (*g_476) = func_51(l_1748, (safe_div_func_int32_t_s_s(l_1754[0], (l_1831 | (func_64((l_1724 |= (g_663 , g_1839))) || l_1840)))), g_7, (safe_add_func_int32_t_s_s(l_1843, l_1844)));
                        l_1707 |= (((++(**g_1049)) | ((l_1702[0][5] == (safe_lshift_func_int8_t_s_u(((((-3L) != 7L) , func_67(l_1797[2], (0xCFL && (safe_lshift_func_int8_t_s_u((**g_578), l_1840))), l_1844, (*g_476))) != l_1840), g_1858[2][4]))) == l_1803[0])) != l_1791[2]);
                        return l_1840;
                    }
                    for (l_1746 = 0; (l_1746 > 8); l_1746 = safe_add_func_int8_t_s_s(l_1746, 4))
                    {
                        int l_1863 = 0x8090DDBBL;
                        (*g_476) = &l_1748;
                        (**g_476) &= (safe_lshift_func_uint16_t_u_u((func_67(&l_1749[1], l_1863, l_1803[0], (*g_476)) <= ((safe_lshift_func_uint16_t_u_s((l_1866 , ((l_1863 ^ l_1866) == ((l_1867 == 0L) >= l_1868))), (**g_1150))) <= l_1735)), 15));
                        return l_1869;
                    }
                }
                for (l_1719 = 0; (l_1719 <= 5); l_1719 += 1)
                {
                    int *l_1870 = &l_1856;
                    int *l_1876 = &l_1747;
                    int *l_1877[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1877[i] = &l_1748;
                    (*l_1870) = 0x8A191C0EL;
                    (*l_1876) = (l_1756 = ((*l_1870) = (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0xAA6D9E4EL, l_1803[0])), l_1875))));
                    l_1880--;
                    l_1748 ^= (*l_1876);
                }
            }
            (*g_476) = (((void*)0 == &g_1151) , func_51(l_1749[1], func_64(l_1735), (safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(0x7DE8L, ((safe_sub_func_uint32_t_u_u((l_1748 ^= (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_1716 , l_1716), l_1702[4][4])), (**g_1150)))), 0xC17F112EL)) & 4294967295UL))), l_1707)), l_1702[0][5]));
        }
    }
    (*l_1893) ^= ((**g_1150) >= ((-1L) | l_1719));
    return (**g_1049);
}







static int func_8(const short p_9)
{
    int *l_15 = &g_16;
    int l_1426 = 0x11965DA3L;
    int l_1427 = 0x7385E90FL;
    int l_1429 = 0x04147B69L;
    int l_1431 = 0xE855DF3BL;
    int l_1432 = 0x703AE63BL;
    int l_1437 = 0L;
    int l_1439 = 0xF1375B15L;
    int l_1447 = (-1L);
    int l_1448 = 0L;
    int l_1450 = 0L;
    int l_1451 = (-5L);
    char l_1452[7] = {0xF6L, 0xF6L, 1L, 0xF6L, 0xF6L, 1L, 0xF6L};
    int l_1453 = 1L;
    int l_1454[7] = {0L, 0x42FAFAA2L, 0L, 0x42FAFAA2L, 0L, 0x42FAFAA2L, 0L};
    unsigned l_1457[10][2][8] = {{{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}, {{4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}, {4294967287UL, 0UL, 9UL, 4294967290UL, 4294967290UL, 9UL, 0UL, 4294967287UL}}};
    unsigned char **l_1462 = &g_244[0];
    short l_1471 = 0xF8B3L;
    short *l_1487 = (void*)0;
    short **l_1486[10][7][3] = {{{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}, {{&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}, {&l_1487, (void*)0, &l_1487}}};
    int l_1511 = 0xC9CD8FC8L;
    const short *l_1547 = (void*)0;
    unsigned l_1548[6] = {0xC9992A33L, 4294967294UL, 0xC9992A33L, 4294967294UL, 0xC9992A33L, 4294967294UL};
    unsigned l_1663 = 4294967287UL;
    int *l_1666 = &l_1437;
    int *l_1667 = &l_1447;
    int *l_1668[9][10] = {{&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}, {&l_1432, &l_1429, &l_1432, &l_1453, &g_931[2], &l_1437, (void*)0, &l_1431, &g_86, &l_1432}};
    unsigned char l_1669 = 0xA4L;
    short *l_1672 = &g_136[0];
    unsigned **l_1675[7][8] = {{&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}, {&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}, {&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}, {&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}, {&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}, {&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}, {&g_83, (void*)0, (void*)0, (void*)0, (void*)0, &g_83, &g_83, (void*)0}};
    unsigned ***l_1674 = &l_1675[5][0];
    unsigned l_1698 = 0xD7814848L;
    int i, j, k;
    if ((safe_mod_func_uint16_t_u_u((((*l_15) = (func_12(g_2, ((*l_15) = 0L)) , (p_9 || (*l_15)))) > (((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(p_9, (0xFF03L || p_9))), 0)), 7)) <= 0xABL) , (-1L))), p_9)))
    {
        unsigned l_1399 = 0xA1ACCDF2L;
        short *l_1404[7][9][4] = {{{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}, {{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}, {{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}, {{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}, {{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}, {{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}, {{(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}, {(void*)0, (void*)0, &g_363[1], &g_261[1]}}};
        int l_1405 = (-8L);
        int l_1428 = 1L;
        int l_1434 = 1L;
        int l_1435 = 0x25BAACD2L;
        int l_1440 = 0L;
        int l_1442 = (-5L);
        int l_1445 = 0x5593D7E7L;
        int l_1446[1][4] = {{0L, 0x76703597L, 0L, 0x76703597L}};
        unsigned l_1472 = 0x92C41795L;
        unsigned char l_1473 = 0xE7L;
        unsigned l_1537 = 0xB31EC109L;
        unsigned char l_1543[10] = {248UL, 248UL, 0x86L, 248UL, 248UL, 0x86L, 248UL, 248UL, 0x86L, 248UL};
        unsigned short *l_1544 = &g_385;
        int i, j, k;
        if (((((((safe_add_func_uint32_t_u_u(((*l_15) = p_9), ((-3L) <= (safe_rshift_func_int8_t_s_u((p_9 <= l_1399), 6))))) , 1UL) , p_9) > (*g_83)) < 7UL) <= l_1405))
        {
            int l_1422 = 0x99B124BAL;
            short l_1430 = 0x33ACL;
            int l_1433 = 0xFC00851BL;
            int l_1438 = 0x71573233L;
            int l_1443 = 0x53DCE4FCL;
            int l_1444[8][9][3] = {{{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}, {{(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}, {(-1L), 0x44A393AFL, (-1L)}}};
            int l_1456 = 0xFDB28595L;
            int l_1501[2];
            const unsigned short *l_1517[9];
            const unsigned short * const *l_1516 = &l_1517[8];
            const unsigned short * const **l_1515 = &l_1516;
            unsigned char l_1523 = 251UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1501[i] = 0x7C6489D9L;
            for (i = 0; i < 9; i++)
                l_1517[i] = &g_499;
            for (g_1251 = (-27); (g_1251 >= 3); g_1251++)
            {
                int *l_1414 = &g_430;
                int *l_1415 = &g_1190;
                unsigned short *l_1425[4] = {&g_401, (void*)0, &g_401, (void*)0};
                int l_1436 = (-10L);
                int l_1441[7][9][4] = {{{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}, {{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}, {{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}, {{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}, {{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}, {{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}, {{0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}, {0L, 0L, 0L, 0x16F59576L}}};
                char l_1449 = 0x94L;
                char l_1522[9] = {(-1L), 7L, (-1L), 7L, (-1L), 7L, (-1L), 7L, (-1L)};
                int i, j, k;
                (*l_1414) = (safe_add_func_int16_t_s_s((p_9 < (((safe_lshift_func_uint8_t_u_s(p_9, 0)) & (*g_1151)) , p_9)), (*l_15)));
                if (((p_9 >= 6UL) , ((*l_15) = (safe_mod_func_uint32_t_u_u(l_1399, (p_9 , ((l_1457[0][0][1]--) , 0x272FE0E1L)))))))
                {
                    int l_1475 = 2L;
                    int *l_1494 = &g_364;
                    int *l_1495 = &l_1426;
                    int *l_1496 = &l_1444[2][6][0];
                    int *l_1497 = &l_1433;
                    int *l_1498 = &l_1422;
                    int *l_1499[10] = {&l_1451, &l_1428, &l_1451, &l_1428, &l_1451, &l_1428, &l_1451, &l_1428, &l_1451, &l_1428};
                    short l_1500 = 0x728DL;
                    unsigned l_1502 = 0x5FDA3885L;
                    int i;
                    if ((safe_sub_func_int8_t_s_s((l_1462 != (void*)0), (p_9 != (0x7E6F5ADAL != ((*l_1414) = 0x486CA722L))))))
                    {
                        unsigned char l_1474[9] = {0xFAL, 0UL, 0xFAL, 0UL, 0xFAL, 0UL, 0xFAL, 0UL, 0xFAL};
                        short ***l_1488 = &l_1486[2][1][2];
                        unsigned *l_1489 = &g_1482[0][4];
                        unsigned **l_1490 = &l_1489;
                        int i;
                        (*g_476) = func_47(&l_1444[6][7][1], p_9, (*l_1414));
                        (*l_1414) = (safe_mod_func_uint32_t_u_u(p_9, (safe_div_func_uint8_t_u_u((((**g_1049) = l_1474[5]) | (p_9 ^ (safe_sub_func_int32_t_s_s((((((g_1482[0][4] < l_1474[2]) >= 1UL) , p_9) != p_9) & l_1474[1]), 0xF7732671L)))), 0x4CL))));
                        (*g_476) = (l_1435 , func_47(&l_1454[1], (((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u(((((void*)0 != &g_83) , &g_1151) != ((*l_1488) = l_1486[7][2][0])), 7)))) | (((*l_1490) = l_1489) == &l_1472)) , 0xA3B7DBDFL), l_1475));
                    }
                    else
                    {
                        const int *l_1492 = (void*)0;
                        const int **l_1491 = &l_1492;
                        (*l_1414) = 0L;
                        g_1493 = ((*l_1491) = &l_1434);
                        return l_1433;
                    }
                    ++l_1502;
                    for (l_1472 = 0; (l_1472 <= 36); l_1472 = safe_add_func_int32_t_s_s(l_1472, 4))
                    {
                        return (**g_476);
                    }
                }
                else
                {
                    unsigned char l_1512 = 0x37L;
                    short l_1518[6] = {6L, 0x3BCCL, 6L, 0x3BCCL, 6L, 0x3BCCL};
                    int l_1519 = 1L;
                    int *l_1520 = &l_1450;
                    int *l_1521[4][5][2] = {{{&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}}, {{&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}}, {{&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}}, {{&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}, {&g_931[1], &l_1456}}};
                    int i, j, k;
                    for (g_430 = 0; (g_430 <= 7); g_430 += 1)
                    {
                        int *l_1507 = &l_1437;
                        int l_1508 = 0x43255804L;
                        int *l_1509 = &l_1444[3][1][1];
                        int *l_1510[5][1][4] = {{{(void*)0, &l_1450, &l_1443, &l_1441[3][5][1]}}, {{(void*)0, &l_1450, &l_1443, &l_1441[3][5][1]}}, {{(void*)0, &l_1450, &l_1443, &l_1441[3][5][1]}}, {{(void*)0, &l_1450, &l_1443, &l_1441[3][5][1]}}, {{(void*)0, &l_1450, &l_1443, &l_1441[3][5][1]}}};
                        int i, j, k;
                        --l_1512;
                    }
                    (*l_1414) |= p_9;
                    l_1523--;
                }
                (*g_476) = &l_1443;
            }
            (*g_476) = func_47(&l_1439, l_1445, (*l_15));
            (*g_476) = &l_1511;
        }
        else
        {
            unsigned short l_1526[10] = {1UL, 65532UL, 1UL, 65532UL, 1UL, 65532UL, 1UL, 65532UL, 1UL, 65532UL};
            int i;
            --l_1526[1];
        }
        (*g_476) = func_47(((*g_476) = &l_1437), (((0x21L <= (*l_15)) ^ ((safe_sub_func_int16_t_s_s((*g_1151), p_9)) , l_1446[0][3])) , 6UL), (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(p_9, (safe_mod_func_int16_t_s_s((**g_1150), l_1537)))), p_9)));
        (*g_476) = (void*)0;
        (*l_15) = ((safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u(7UL, (*g_1493))))) ^ ((*l_1544) ^= (safe_mod_func_uint32_t_u_u(p_9, (*l_15)))));
    }
    else
    {
        int l_1555 = 0x82FCA715L;
        unsigned char *l_1556 = &g_1136;
        int *l_1561 = &l_1426;
        short **l_1562 = (void*)0;
        char **l_1639 = (void*)0;
        unsigned l_1650 = 0xCB7494ABL;
        int l_1661 = 4L;
        int l_1662 = 0xC7DF6CEFL;
        (*l_15) = (safe_add_func_uint16_t_u_u(((g_259[4][2] = (0x73L >= (l_1547 != (*g_1150)))) , (l_1548[2] <= ((safe_div_func_int16_t_s_s(((((((*l_1556) &= ((safe_lshift_func_uint16_t_u_s(func_64(func_56(p_9, (*l_15), &l_1453, ((*g_476) = &l_1450), (((safe_mod_func_uint32_t_u_u(p_9, p_9)) , 1UL) , (**g_578)))), p_9)) > l_1555)) < g_280) >= 0xBFCB5769L) , p_9) > p_9), p_9)) || (*g_1493)))), 0L));
        for (l_1432 = 0; (l_1432 >= (-25)); l_1432--)
        {
            unsigned char l_1563 = 3UL;
            int l_1565 = 8L;
            int l_1607 = (-1L);
            if (((safe_sub_func_int32_t_s_s(l_1563, l_1563)) == 0UL))
            {
                short l_1564 = 0x58B4L;
                short **l_1580 = &l_1487;
                int l_1584 = 0x962EB3E4L;
                if ((l_1564 & (--(*l_1556))))
                {
                    int *l_1568[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1568[i] = &l_1450;
                    for (l_1426 = 0; (l_1426 <= 5); l_1426 += 1)
                    {
                        int **l_1569 = &l_1568[0];
                        (*l_1569) = ((*g_476) = l_1568[0]);
                    }
                    for (g_1190 = (-1); (g_1190 <= (-25)); g_1190--)
                    {
                        if (p_9)
                            break;
                    }
                    return (*l_15);
                }
                else
                {
                    unsigned l_1583 = 1UL;
                    int *l_1597 = &l_1454[6];
                    int *l_1600 = &l_1511;
                    int *l_1601 = (void*)0;
                    int *l_1602 = &l_1450;
                    int *l_1603[10] = {&l_1511, (void*)0, &l_1511, (void*)0, &l_1511, (void*)0, &l_1511, (void*)0, &l_1511, (void*)0};
                    unsigned l_1604 = 4UL;
                    int i;
                    if ((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((**g_1049) ^= l_1563), (**g_578))), 5)) , ((safe_lshift_func_int8_t_s_u(p_9, (safe_lshift_func_uint8_t_u_u((l_1580 == (void*)0), (l_1565 , (*l_15)))))) | (0x2E80E26CL == (safe_mod_func_int8_t_s_s(l_1583, p_9))))) && 0UL))
                    {
                        return l_1564;
                    }
                    else
                    {
                        char *l_1585[9];
                        int l_1586 = (-1L);
                        int *l_1595[5];
                        int *l_1596 = &g_1251;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1585[i] = &l_1452[0];
                        for (i = 0; i < 5; i++)
                            l_1595[i] = &g_615;
                        (*l_15) = (*g_1493);
                        (*g_476) = &l_1586;
                        (*l_15) = (p_9 , p_9);
                        l_1586 &= (((*g_476) = l_1597) == (void*)0);
                    }
                    for (l_1451 = 0; (l_1451 <= 3); l_1451 += 1)
                    {
                        int i;
                        (*g_477) = (((safe_lshift_func_int8_t_s_u((0xAD0221ECL & (!g_363[l_1451])), g_363[l_1451])) > g_1191[(l_1451 + 1)]) & p_9);
                        (*g_476) = l_1597;
                    }
                    ++l_1604;
                    if (p_9)
                        continue;
                }
                (*g_476) = (void*)0;
            }
            else
            {
                unsigned short l_1608 = 0xA92DL;
                --l_1608;
                if (g_1611)
                    continue;
            }
            if (l_1607)
                break;
        }
        for (g_224 = 0; (g_224 > 57); g_224++)
        {
            unsigned l_1615 = 0UL;
            int l_1619 = (-1L);
            int *l_1651 = &l_1453;
            int *l_1652 = &l_1454[4];
            int *l_1653 = &g_86;
            int *l_1654 = (void*)0;
            int *l_1655 = &g_364;
            int *l_1656 = &g_931[1];
            int *l_1657 = &l_1511;
            int *l_1658 = &l_1448;
            int *l_1659 = (void*)0;
            int *l_1660[4][1][3] = {{{(void*)0, &g_430, &l_1431}}, {{(void*)0, &g_430, &l_1431}}, {{(void*)0, &g_430, &l_1431}}, {{(void*)0, &g_430, &l_1431}}};
            int i, j, k;
            for (l_1437 = 0; (l_1437 <= 3); l_1437 += 1)
            {
                unsigned short l_1627 = 0UL;
            }
            if (l_1650)
                break;
            l_1663--;
            if (p_9)
                continue;
        }
    }
    l_1669--;
    if (((*l_15) , (&p_9 != l_1672)))
    {
        const char l_1673 = 0x4EL;
        unsigned short * const l_1678[3][8][4] = {{{&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}}, {{&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}}, {{&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}, {&g_499, &g_499, &g_224, &g_224}}};
        int l_1680 = (-2L);
        const unsigned short l_1681 = 0x3635L;
        int ***l_1693 = &g_476;
        unsigned short l_1694 = 0xCBAEL;
        unsigned l_1695 = 0x0A38313EL;
        int i, j, k;
        for (l_1447 = 6; (l_1447 >= 0); l_1447 -= 1)
        {
            const unsigned char l_1679 = 0x4BL;
            int *l_1692 = &l_1454[3];
            if (l_1673)
                break;
            l_1680 = (!((l_1674 != g_1676) == ((+((p_9 , ((p_9 <= (0xD7EC3205L <= l_1673)) == (((0L & (((void*)0 == l_1678[2][6][1]) >= 1L)) , 0x5C21E1F5L) , l_1679))) , 9UL)) | (*l_1666))));
            for (l_1450 = 0; (l_1450 <= 8); l_1450 += 1)
            {
                (*l_1666) ^= (p_9 ^ 0xC7L);
                return l_1679;
            }
            (**l_1693) = func_51(l_1681, ((l_1695 = (safe_mod_func_uint8_t_u_u(((p_9 | (p_9 , (((safe_div_func_uint32_t_u_u(((*g_83) ^ (p_9 != ((**g_1049) = (safe_lshift_func_uint16_t_u_u(l_1681, p_9))))), 0x5521D646L)) <= (*l_1692)) , l_1694))) == 6UL), p_9))) <= p_9), g_261[1], p_9);
            for (g_798 = 0; (g_798 <= 6); g_798 += 1)
            {
                unsigned char l_1696 = 250UL;
                int l_1697 = 0x059A256FL;
                l_1696 &= p_9;
                (***l_1693) = (*l_1692);
                --l_1698;
            }
        }
        (*g_476) = &l_1426;
        return (*l_15);
    }
    else
    {
        short l_1701 = 0x05B8L;
        (*l_15) = (p_9 , p_9);
        l_1701 = (*l_1667);
        (*l_1667) |= p_9;
    }
    (*g_476) = (void*)0;
    return (*g_1493);
}







static unsigned char func_12(const short p_13, int p_14)
{
    unsigned l_25 = 0xCBCB1A7AL;
    int *l_155 = &g_156;
    int *l_930 = &g_931[1];
    const unsigned l_1245[4][8][1] = {{{0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}}, {{0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}}, {{0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}}, {{0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}, {0xA0331DD1L}}};
    unsigned short * const *l_1378 = &g_132[5][0][2];
    const int *l_1382 = &g_725;
    const int **l_1381 = &l_1382;
    short l_1385[4][6] = {{0x445AL, (-3L), 0x340BL, (-1L), (-10L), (-4L)}, {0x445AL, (-3L), 0x340BL, (-1L), (-10L), (-4L)}, {0x445AL, (-3L), 0x340BL, (-1L), (-10L), (-4L)}, {0x445AL, (-3L), 0x340BL, (-1L), (-10L), (-4L)}};
    int *l_1386 = (void*)0;
    int *l_1387[9];
    int *l_1388[8][8][4] = {{{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}, {{&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}, {&g_931[1], &g_931[1], (void*)0, (void*)0}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1387[i] = &g_1251;
    for (g_7 = 27; (g_7 != (-13)); --g_7)
    {
        int *l_19 = &g_16;
        int *l_20 = (void*)0;
        int *l_21 = (void*)0;
        int *l_22 = &g_16;
        int *l_23 = &g_16;
        int *l_24[2];
        int i;
        for (i = 0; i < 2; i++)
            l_24[i] = &g_16;
        l_25++;
        return g_16;
    }
    for (g_2 = 12; (g_2 != 17); g_2 = safe_add_func_uint16_t_u_u(g_2, 7))
    {
        const int l_1244 = 1L;
        for (g_7 = (-4); (g_7 > 11); ++g_7)
        {
            unsigned *l_148 = (void*)0;
            unsigned *l_149 = &g_150;
            int l_154 = 0xC6A97375L;
            int l_841[8] = {(-1L), (-1L), 0xB9E8881BL, (-1L), (-1L), 0xB9E8881BL, (-1L), (-1L)};
            int i;
        }
        (*l_930) &= (*l_155);
        l_1378 = (void*)0;
    }
    p_14 |= (safe_sub_func_uint32_t_u_u(func_56(p_13, ((*l_155) ^= ((*l_930) != func_67(((*l_1381) = l_930), ((safe_rshift_func_int16_t_s_s((((((void*)0 != &l_155) , l_930) != (void*)0) ^ (-10L)), (*g_1151))) || p_13), l_1385[1][3], l_155))), (*g_476), (*g_476), (**g_578)), 0UL));
    return (*l_1382);
}







static unsigned func_32(int p_33, const int p_34, short p_35, const unsigned short p_36)
{
    int *l_1246 = &g_86;
    int l_1247 = 0x3920D85FL;
    int *l_1248 = &l_1247;
    int *l_1249 = &g_364;
    int *l_1250[10][2][8] = {{{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}, {{&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}, {&g_931[1], (void*)0, (void*)0, (void*)0, &g_931[1], &l_1247, &g_931[1], (void*)0}}};
    unsigned l_1252 = 0x91B238E9L;
    unsigned short l_1260 = 65531UL;
    char l_1266[3][7] = {{0xBCL, 1L, 0x3BL, 0x35L, 0L, 0x6AL, 0L}, {0xBCL, 1L, 0x3BL, 0x35L, 0L, 0x6AL, 0L}, {0xBCL, 1L, 0x3BL, 0x35L, 0L, 0x6AL, 0L}};
    unsigned l_1294 = 1UL;
    char l_1341 = 0xBDL;
    int i, j, k;
    l_1252++;
    if ((safe_sub_func_int8_t_s_s(p_35, (--(**g_1049)))))
    {
        short l_1259 = 0x4234L;
        unsigned short l_1270 = 0x1F6BL;
        int l_1279 = 5L;
        int l_1282[8] = {0xA73E7556L, 0x10B2FE10L, 0xA73E7556L, 0x10B2FE10L, 0xA73E7556L, 0x10B2FE10L, 0xA73E7556L, 0x10B2FE10L};
        short *l_1304[6] = {&l_1259, &g_259[4][2], &l_1259, &g_259[4][2], &l_1259, &g_259[4][2]};
        short **l_1303 = &l_1304[1];
        int *l_1315 = &l_1282[2];
        int l_1340[6] = {5L, 5L, 0L, 5L, 5L, 0L};
        int i;
        --l_1260;
        if (p_35)
        {
            int **l_1263 = &l_1246;
            char ** const l_1267 = &g_579[3];
            unsigned short * const *l_1276[9][9] = {{&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}, {&g_132[0][6][0], &g_1165[0][1][5], &g_132[2][7][1], &g_132[4][7][3], &g_132[4][5][3], (void*)0, &g_132[0][6][0], (void*)0, &g_132[0][8][0]}};
            int l_1281 = 1L;
            int l_1285 = 0xF6B70F15L;
            int l_1288 = 1L;
            int l_1289 = 0xBFEAF240L;
            int l_1291 = (-1L);
            int l_1292[2];
            short **l_1305 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1292[i] = 0x20626580L;
            (*l_1263) = ((*g_476) = (*g_476));
            (*g_477) = ((**l_1263) >= ((7UL < (**l_1263)) > (safe_sub_func_int8_t_s_s(((**g_578) ^= (((l_1266[1][1] , (void*)0) != l_1267) == ((0x2E93B540L == (*g_83)) , (((((safe_rshift_func_int8_t_s_s(((~l_1270) | (-5L)), 5)) >= (**g_1049)) , p_35) <= (**l_1263)) <= p_33)))), l_1259))));
            for (g_1190 = (-29); (g_1190 > 0); g_1190 = safe_add_func_int16_t_s_s(g_1190, 9))
            {
                unsigned short **l_1275 = &g_1165[0][3][0];
                int l_1280 = 5L;
                int l_1283 = 0x804E5B29L;
                int l_1284 = 8L;
                int l_1286 = 0x40E666FEL;
                int l_1287 = 0x9A0A910CL;
                int l_1290 = 0x8388FEB1L;
                int l_1293 = (-4L);
                int *l_1332[9] = {&l_1288, &g_430, &l_1288, &g_430, &l_1288, &g_430, &l_1288, &g_430, &l_1288};
                char *l_1333 = (void*)0;
                int i;
            }
            for (g_1310 = 0; (g_1310 > 28); g_1310 = safe_add_func_int32_t_s_s(g_1310, 6))
            {
                if (p_33)
                    break;
                (*l_1248) &= p_33;
                ++g_1347;
            }
        }
        else
        {
            for (g_840 = 0; (g_840 <= 1); g_840 += 1)
            {
                int l_1350 = (-8L);
                unsigned ***l_1352[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1352[i] = &g_1351;
                (*l_1248) ^= ((*g_1151) >= p_35);
                (*l_1248) = l_1350;
                g_1351 = g_1351;
                for (g_663 = 1; (g_663 >= 0); g_663 -= 1)
                {
                    int i;
                    (*g_477) |= ((void*)0 != &g_579[(g_840 + 6)]);
                    (*l_1248) ^= (!(safe_rshift_func_uint16_t_u_u(0x9D96L, 7)));
                    for (g_150 = 0; (g_150 <= 1); g_150 += 1)
                    {
                        int l_1355 = 0x23915437L;
                        int i, j, k;
                        if (l_1355)
                            break;
                        (**g_476) = p_36;
                    }
                }
            }
        }
    }
    else
    {
        unsigned short **l_1370[10][10] = {{&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}, {&g_1165[0][1][5], (void*)0, &g_1165[0][4][5], (void*)0, &g_132[1][4][0], (void*)0, &g_1165[0][4][5], (void*)0, &g_1165[0][1][5], &g_1165[1][2][3]}};
        unsigned * const **l_1375 = (void*)0;
        int l_1376[1];
        int *l_1377 = &g_1190;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1376[i] = 0xD16C58DAL;
        for (g_385 = 0; (g_385 == 48); ++g_385)
        {
            (*g_476) = (void*)0;
        }
        (*l_1246) = p_33;
    }
    (*g_476) = (void*)0;
    (*l_1246) = (*l_1249);
    return g_281;
}







static char func_43(int * p_44, int p_45, int * p_46)
{
    int l_936 = 1L;
    unsigned short *l_937 = &g_401;
    int *l_939 = &g_16;
    unsigned *l_940 = &g_754;
    unsigned char **l_941 = (void*)0;
    unsigned *l_942 = (void*)0;
    unsigned *l_943 = &g_616[1];
    int l_945[9][8][3] = {{{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}, {{0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}, {0L, 9L, 0x3D4FE7EBL}}};
    unsigned l_946 = 0UL;
    unsigned char l_952 = 0xE6L;
    unsigned char **l_963 = &g_244[2];
    int *l_967 = &g_156;
    int l_969 = (-1L);
    short l_987 = 0x9C4AL;
    unsigned l_1117 = 0x8350148BL;
    int l_1153 = 1L;
    const unsigned char l_1202[10] = {0UL, 5UL, 0UL, 5UL, 0UL, 5UL, 0UL, 5UL, 0UL, 5UL};
    int l_1209 = (-10L);
    unsigned short l_1211 = 0x1DC4L;
    unsigned l_1224 = 0x38796F78L;
    int ** const *l_1229 = &g_476;
    unsigned l_1243[9][1][4] = {{{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}, {{0x105C9579L, 0UL, 4294967295UL, 0UL}}};
    int i, j, k;
    if ((((*p_44) | (*p_46)) > (((*l_943) ^= (safe_rshift_func_int8_t_s_s((func_67(func_47((((safe_mod_func_uint8_t_u_u((l_936 && l_936), p_45)) , ((*l_937) = (l_936 = l_936))) , &l_936), ((*l_940) = (safe_unary_minus_func_int32_t_s(((*l_939) = (*p_46))))), ((l_941 == l_941) <= g_280)), p_45, p_45, l_939) , 2L), 2))) <= (*p_44))))
    {
        int *l_944[2][5];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_944[i][j] = &g_931[1];
        }
        --l_946;
    }
    else
    {
        short l_949 = (-9L);
        int *l_950 = &g_16;
        int *l_951[2];
        unsigned char *l_968 = &g_262;
        int i;
        for (i = 0; i < 2; i++)
            l_951[i] = &g_16;
        l_952--;
        for (l_949 = 25; (l_949 >= (-7)); --l_949)
        {
            int l_964 = 7L;
            for (g_430 = 0; (g_430 <= (-13)); g_430--)
            {
                unsigned char ***l_961 = &l_941;
                int l_962 = 0xEBA4DC65L;
                (*l_939) = 1L;
                (*p_46) = (safe_add_func_int32_t_s_s(((*l_950) = (((*l_961) = &g_244[1]) == (l_962 , l_963))), (l_964 , p_45)));
            }
        }
        g_364 |= (((safe_rshift_func_uint8_t_u_u((func_67(p_44, (func_67(p_46, ((p_45 | (func_67(func_47(l_967, p_45, (((255UL | func_67(p_44, (((*l_963) != l_968) , p_45), (*l_950), p_44)) && (*l_950)) != p_45)), (**g_578), p_45, p_46) , (*l_939))) && 0xFAL), (*l_967), p_46) >= l_969), (*l_967), p_44) != (*l_967)), p_45)) ^ g_970) | 0x0FL);
        l_967 = &l_945[7][3][1];
    }
    (*g_476) = p_44;
    if ((((safe_rshift_func_uint16_t_u_u((((*p_44) || (*l_939)) , (*l_967)), 12)) > p_45) , ((*p_46) = (safe_lshift_func_int16_t_s_s((*l_939), 13)))))
    {
        int l_977[7][3][7] = {{{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}, {{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}, {{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}, {{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}, {{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}, {{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}, {{0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}, {0x76A9FEEAL, 7L, 0x368DE41BL, 0x3C6A7D52L, 0x76A9FEEAL, 0L, 0x0992F75DL}}};
        int l_990 = 1L;
        int l_991 = 0x470FB447L;
        int l_994 = 0x00531D9FL;
        int l_995 = 0xC4202608L;
        int l_998 = 0xF308A1D4L;
        unsigned char ***l_1014 = &l_941;
        unsigned char l_1028[8] = {251UL, 5UL, 251UL, 5UL, 251UL, 5UL, 251UL, 5UL};
        short *l_1037 = &g_261[0];
        unsigned short **l_1050[10] = {&g_132[5][4][1], &g_132[5][4][1], (void*)0, &g_132[5][4][1], &g_132[5][4][1], (void*)0, &g_132[5][4][1], &g_132[5][4][1], (void*)0, &g_132[5][4][1]};
        unsigned char l_1059 = 7UL;
        unsigned l_1166 = 0x3D751177L;
        int i, j, k;
        (*g_477) = (((!((((((safe_mod_func_int8_t_s_s(((+g_197) , (*l_967)), l_977[4][1][2])) , (safe_add_func_uint32_t_u_u((*l_939), ((!2L) , (safe_rshift_func_int8_t_s_u(((**g_578) = ((safe_rshift_func_int8_t_s_s(l_977[4][1][2], (((((*l_963) = &g_245) == &g_245) <= ((*l_939) >= g_261[1])) < 1L))) != p_45)), 3)))))) == (*g_83)) >= l_977[4][1][2]) > 4294967295UL) < 4294967295UL)) , p_45) , (**g_476));
        if (((*l_939) = func_64((**g_476))))
        {
            int l_988 = 1L;
            int l_989[2];
            unsigned char **l_1020 = &g_244[2];
            unsigned char **l_1021 = (void*)0;
            int *l_1047 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_989[i] = 6L;
            for (g_245 = 0; (g_245 <= 2); g_245 += 1)
            {
                int l_984 = 0x566414D5L;
                int l_992 = 1L;
                int l_993 = 0x2A83BE3CL;
                int l_996 = 1L;
                int l_997 = 1L;
                unsigned char l_999 = 0xE4L;
                int i;
                l_984 |= func_64(g_931[g_245]);
                (*g_476) = &g_931[g_245];
                for (g_197 = 0; (g_197 <= 3); g_197 += 1)
                {
                    int *l_985 = &g_430;
                    int *l_986[5] = {&g_430, &l_969, &g_430, &l_969, &g_430};
                    short *l_1015 = (void*)0;
                    short *l_1016 = &g_261[1];
                    int i;
                    --l_999;
                    (*l_939) = 0x547B5F69L;
                    for (g_16 = 2; (g_16 >= 0); g_16 -= 1)
                    {
                        p_46 = func_47(p_46, (*g_83), p_45);
                        return p_45;
                    }
                    (*g_477) = (~(safe_div_func_int16_t_s_s(((*l_1016) = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((l_993 |= (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_984, 0)), (0xABA153EEL <= (*g_477))))), (+(*g_477)))), func_67(func_47((*g_476), (*g_83), (*l_985)), (safe_rshift_func_int16_t_s_s(((l_1014 != (void*)0) , (*l_939)), 11)), (*l_967), (*g_476)))) > p_45)), p_45)));
                    for (g_798 = 0; (g_798 <= 3); g_798 += 1)
                    {
                        unsigned char l_1017 = 0x85L;
                        (*l_985) = (*l_985);
                        ++l_1017;
                    }
                }
                for (g_256 = 0; (g_256 <= 3); g_256 += 1)
                {
                    unsigned char ***l_1022 = &l_963;
                    int l_1038 = (-1L);
                    int i;
                }
            }
        }
        else
        {
            char l_1055[6] = {(-1L), 0x0EL, (-1L), 0x0EL, (-1L), 0x0EL};
            unsigned **l_1120 = &l_943;
            int *l_1123[8];
            int i;
            for (i = 0; i < 8; i++)
                l_1123[i] = &g_364;
            for (g_364 = 16; (g_364 <= (-20)); --g_364)
            {
                const char l_1064[10][9][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
                int l_1074 = 0x8B740D8FL;
                int l_1116 = 0xB2D4062EL;
                int i, j, k;
                if (func_67(p_44, l_1055[2], p_45, (*g_476)))
                {
                    int *l_1056 = &g_931[2];
                    int *l_1057 = &g_156;
                    int *l_1058[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1058[i] = (void*)0;
                    l_1059--;
                    for (l_952 = (-26); (l_952 < 7); ++l_952)
                    {
                        int l_1069 = 0xB19829E5L;
                        (*l_1057) ^= 8L;
                        (*g_476) = func_51(l_1064[1][5][0], (**g_578), (safe_add_func_int8_t_s_s(9L, (l_1064[1][5][0] , (*l_967)))), (((safe_div_func_uint32_t_u_u(4294967287UL, l_1069)) , &l_987) != ((l_995 &= (safe_rshift_func_int16_t_s_u(((+l_998) | p_45), 13))) , (void*)0)));
                    }
                }
                else
                {
                    return l_1055[2];
                }
                if ((&g_798 == p_46))
                {
                    unsigned short l_1076 = 0UL;
                    int l_1092 = 0x488076D3L;
                    (*l_939) |= ((*p_46) > (*p_46));
                    for (g_84 = 28; (g_84 <= 1); g_84 = safe_sub_func_uint32_t_u_u(g_84, 5))
                    {
                        int *l_1075 = (void*)0;
                        int l_1079 = (-4L);
                        l_1076--;
                        return l_1079;
                    }
                    l_1092 |= (((safe_div_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_45, ((**g_578) = ((l_1055[5] <= (&p_46 != (void*)0)) == (p_45 , 4294967288UL))))), (safe_mod_func_int32_t_s_s(((*p_44) = (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_1064[9][3][0], ((0xBA279084L & l_1074) , l_1055[2]))), g_931[1])), 1))), l_1076)))) < (-1L)) & p_45);
                }
                else
                {
                    char l_1093 = 0x6EL;
                    int l_1098[4][7] = {{(-1L), (-6L), 1L, (-10L), 9L, (-1L), 9L}, {(-1L), (-6L), 1L, (-10L), 9L, (-1L), 9L}, {(-1L), (-6L), 1L, (-10L), 9L, (-1L), 9L}, {(-1L), (-6L), 1L, (-10L), 9L, (-1L), 9L}};
                    short ** const l_1149 = (void*)0;
                    int i, j;
                    if ((func_64(((*g_477) = (p_45 || 0x7AL))) > l_1055[2]))
                    {
                        int *l_1094 = (void*)0;
                        int *l_1095 = &l_998;
                        int *l_1096 = &l_936;
                        int *l_1097 = &g_931[1];
                        int *l_1099 = &l_1074;
                        int *l_1100 = &l_990;
                        int *l_1101 = &g_86;
                        int *l_1102 = &l_1074;
                        int *l_1103 = &l_1098[1][3];
                        int *l_1104 = &l_936;
                        int *l_1105 = &l_969;
                        int *l_1106 = &g_156;
                        int *l_1107 = &g_156;
                        int *l_1108 = (void*)0;
                        int *l_1109 = (void*)0;
                        int *l_1110 = &l_994;
                        int *l_1111 = &l_1098[1][3];
                        int *l_1112 = &l_1098[1][6];
                        int *l_1113 = &l_1098[1][3];
                        int *l_1114 = &g_430;
                        int *l_1115[1][9][1] = {{{&g_430}, {&g_430}, {&g_430}, {&g_430}, {&g_430}, {&g_430}, {&g_430}, {&g_430}, {&g_430}}};
                        int i, j, k;
                        l_1117++;
                    }
                    else
                    {
                        unsigned ***l_1121 = (void*)0;
                        unsigned ***l_1122 = &l_1120;
                        int l_1124 = 0xE2AD6F3BL;
                        (*l_939) |= (*g_477);
                        (*l_1122) = l_1120;
                        (*g_476) = func_47(&l_1098[3][0], p_45, (l_1124 = func_67(p_44, (**g_578), ((func_67(func_47((*g_476), p_45, (0x6EF9L & (l_1116 = ((p_45 , (l_1064[1][5][0] == l_1098[2][6])) , 0xB3B3L)))), l_990, p_45, (*g_476)) == g_257) <= g_7), l_1123[3])));
                    }
                    (*g_477) = (*p_44);
                    for (g_84 = 0; (g_84 < 5); g_84 = safe_add_func_int8_t_s_s(g_84, 6))
                    {
                        short l_1127 = 1L;
                        int l_1128 = 2L;
                        short l_1129 = 1L;
                        int l_1130 = 1L;
                        int l_1131 = (-10L);
                        int l_1132 = 0x67094027L;
                        int l_1133 = 0x399228BCL;
                        int l_1134 = (-1L);
                        int l_1135[3];
                        const short ***l_1152 = &g_1150;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1135[i] = (-2L);
                        g_1136--;
                        (*g_476) = func_47(func_47(func_47((*g_476), ((safe_lshift_func_int16_t_s_u(g_7, 1)) , (safe_add_func_uint8_t_u_u((((0xE80BL & (safe_div_func_uint8_t_u_u(((((*l_940)++) || p_45) | (((--(*l_943)) , l_1149) == ((*l_1152) = g_1150))), ((**g_578) = (0x7F2CL ^ p_45))))) != (*l_967)) || l_1153), l_1093))), p_45), (*g_83), g_725), p_45, l_1028[2]);
                        if ((*p_44))
                            continue;
                    }
                }
                return p_45;
            }
            (*g_477) &= (((*l_967) , (*l_1120)) == (void*)0);
            (*l_967) = (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((*g_1151), 0)) & p_45), (safe_sub_func_uint32_t_u_u(func_64(l_1028[2]), l_977[4][1][2])))) | ((l_1166 = ((safe_div_func_int32_t_s_s(((((void*)0 != g_1164[1]) <= (**g_1150)) == ((!(p_45 , (*g_1151))) | 0L)), p_45)) <= 0UL)) & p_45)), p_45));
        }
        (*l_967) ^= (func_67(p_46, func_67((*g_476), (**g_578), ((*l_937) = 0x790CL), &l_945[7][3][1]), p_45, (*g_476)) < (*p_44));
    }
    else
    {
        unsigned char **l_1167 = &g_244[1];
        unsigned char ***l_1168 = &l_963;
        int l_1171 = (-1L);
        int l_1180 = 1L;
        unsigned l_1181 = 0xBE1AA250L;
        unsigned short *l_1187[8];
        int *l_1205[10];
        int l_1210 = 0x73913704L;
        int i;
        for (i = 0; i < 8; i++)
            l_1187[i] = &g_114;
        for (i = 0; i < 10; i++)
            l_1205[i] = &g_840;
        (*l_1168) = l_1167;
        for (l_987 = 0; (l_987 < (-23)); --l_987)
        {
            int *l_1172 = &l_936;
            int *l_1173 = &g_931[2];
            int *l_1174 = (void*)0;
            int l_1175 = (-10L);
            int l_1176 = 8L;
            int l_1177 = 0x37D5802CL;
            int *l_1178 = &l_936;
            int *l_1179[6] = {(void*)0, &g_931[2], (void*)0, &g_931[2], (void*)0, &g_931[2]};
            int l_1186 = 0L;
            const unsigned short *l_1188 = &g_401;
            char l_1189 = 0x74L;
            int i;
            l_1181--;
            (*l_967) = (((**g_578) = (((safe_add_func_uint8_t_u_u(((p_45 , (((l_1186 , l_1187[7]) == l_1188) || l_1189)) != (*g_1151)), ((g_1190 & l_1181) > (~(((*l_1178) != 0x9CE572E3L) != (*p_46)))))) > g_1191[4]) , (*l_1172))) & 0xA7L);
        }
        for (g_337 = 1; (g_337 <= 5); g_337 += 1)
        {
            short *l_1196 = &g_136[0];
            char l_1212[4];
            unsigned l_1221 = 0x94C6058AL;
            int *l_1233 = &l_945[3][1][1];
            int ** const l_1232 = &l_1233;
            int ** const *l_1231[4][5][1] = {{{&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}}, {{&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}}, {{&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}}, {{&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}, {&l_1232}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_1212[i] = 1L;
            (*g_476) = func_47(p_46, (safe_lshift_func_uint8_t_u_u(255UL, (0xD446L > (safe_div_func_int32_t_s_s(((((*l_1196) ^= g_1191[g_337]) , (g_1191[g_337] >= (safe_div_func_uint8_t_u_u(0xB7L, ((**g_578) = (safe_unary_minus_func_uint32_t_u((p_45 , 1UL)))))))) > g_1191[g_337]), (*g_477)))))), (*l_939));
            if (((((1L > ((*l_1196) = (g_1191[g_337] <= ((p_45 > (((((safe_add_func_uint8_t_u_u(func_67(&l_945[7][3][1], (**g_578), (*l_939), p_46), p_45)) > 0UL) | g_1191[g_337]) && 255UL) & p_45)) & 0UL)))) | 4294967293UL) && (*g_477)) | l_1202[2]))
            {
                l_1211 &= ((**g_476) = (safe_add_func_uint32_t_u_u(p_45, ((*p_46) <= func_67(p_46, (l_1205[4] == ((0xF928L > (**g_1150)) , &g_1190)), (safe_sub_func_int16_t_s_s((!(safe_unary_minus_func_uint16_t_u(l_1209))), l_1210)), (*g_476))))));
            }
            else
            {
                short l_1217 = 0L;
                for (g_114 = 0; (g_114 <= 2); g_114 += 1)
                {
                    const unsigned l_1220 = 1UL;
                    const int *l_1223 = &g_725;
                    const int **l_1222 = &l_1223;
                    if ((*l_1223))
                    {
                        l_1180 = ((*l_967) = ((safe_mod_func_int8_t_s_s((-10L), (*l_967))) , 0xD372C836L));
                        (*l_1222) = ((*g_476) = (*g_476));
                    }
                    else
                    {
                        int ** const **l_1230[9];
                        char *l_1242 = &g_256;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1230[i] = &l_1229;
                        (*p_46) = (((**g_476) < ((*g_83) = (safe_add_func_uint8_t_u_u((((l_1231[0][4][0] = l_1229) != (p_45 , (g_1234[3][1][0] = (void*)0))) , (**g_1049)), ((*l_1242) |= (((*l_943) = p_45) , (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(0x53L)), func_67((*l_1232), (1L > p_45), p_45, p_46))) >= 0x946DL), 0x1DBDACE4L)))))))) , (*p_46));
                    }
                    for (g_385 = 0; (g_385 <= 2); g_385 += 1)
                    {
                        (*l_1222) = ((**l_1229) = p_44);
                    }
                }
            }
            (**g_476) = l_1180;
            for (l_1221 = 0; (l_1221 <= 2); l_1221 += 1)
            {
                return p_45;
            }
        }
    }
    return l_1243[2][0][1];
}







static int * func_47(int * p_48, const unsigned p_49, unsigned p_50)
{
    int *l_929 = &g_430;
    return l_929;
}







static int * func_51(const unsigned char p_52, char p_53, const int p_54, unsigned short p_55)
{
    int *l_844[1];
    unsigned short l_849 = 65535UL;
    int l_862[3][8][4] = {{{1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}}, {{1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}}, {{1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}, {1L, 1L, 0x281C6574L, 0x82FA61EAL}}};
    unsigned char *l_863 = &g_262;
    unsigned char l_898 = 0UL;
    int l_909[8] = {(-8L), (-8L), 1L, (-8L), (-8L), 1L, (-8L), (-8L)};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_844[i] = &g_86;
    for (g_75 = 26; (g_75 > 14); --g_75)
    {
        return l_844[0];
    }
    g_86 = ((((((*l_863) = (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_52, p_52)), 0x553DL))) , p_54) , (void*)0) != (*g_578)) , 1L);
    for (g_257 = (-8); (g_257 >= (-26)); g_257 = safe_sub_func_int32_t_s_s(g_257, 8))
    {
        unsigned l_869[10][7][3] = {{{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}, {{0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}, {0x11246A3CL, 0xC08488B7L, 0x044FE6F8L}}};
        unsigned l_872[7] = {1UL, 4294967291UL, 1UL, 4294967291UL, 1UL, 4294967291UL, 1UL};
        int l_879 = 0x4E58180FL;
        int l_880 = 0xE4EF0240L;
        const int *l_897[3];
        const int **l_896 = &l_897[1];
        unsigned char *l_903 = &g_245;
        unsigned char *l_908[4] = {&g_197, &g_197, &g_197, &g_197};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_897[i] = &g_725;
    }
    for (g_385 = (-23); (g_385 <= 38); ++g_385)
    {
        char l_912 = 0L;
        unsigned *l_920 = &g_616[4];
        unsigned **l_921 = &l_920;
        int l_924[10] = {0x21AE029BL, (-1L), (-1L), (-1L), (-1L), 0x21AE029BL, (-1L), (-1L), (-1L), (-1L)};
        int i;
        if (l_912)
            break;
        for (g_280 = 0; (g_280 <= 13); g_280++)
        {
            int l_919 = 4L;
            for (g_153 = (-28); (g_153 != 42); g_153 = safe_add_func_int32_t_s_s(g_153, 5))
            {
                for (g_16 = (-23); (g_16 > 2); ++g_16)
                {
                    if (p_53)
                        break;
                }
                l_919 = (g_725 , l_912);
            }
        }
        l_924[8] = ((p_55 ^ ((l_844[0] == ((*l_921) = l_920)) , (safe_div_func_int32_t_s_s((l_924[8] , (g_16 = l_924[1])), (p_52 && (((safe_sub_func_int32_t_s_s(p_55, (safe_mod_func_int16_t_s_s((-1L), g_120)))) ^ 7L) == 1UL)))))) , p_54);
        (*g_476) = &l_924[8];
    }
    return l_844[0];
}







static unsigned char func_56(const int p_57, int p_58, int * p_59, int * p_60, char p_61)
{
    const int *l_157[10] = {&g_16, &g_16, &g_16, &g_16, &g_16, &g_16, &g_16, &g_16, &g_16, &g_16};
    char *l_160 = &g_75;
    int *l_166 = &g_86;
    int **l_165 = &l_166;
    int ***l_167 = &l_165;
    unsigned *l_169 = (void*)0;
    unsigned *l_170[8][6] = {{&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}, {&g_150, (void*)0, &g_150, (void*)0, &g_150, (void*)0}};
    int l_251 = 0x1D7F75DEL;
    int l_252 = 0xE7919D2BL;
    int l_258 = (-6L);
    int l_260[7] = {0x0B6333A4L, (-6L), 0x0B6333A4L, (-6L), 0x0B6333A4L, (-6L), 0x0B6333A4L};
    unsigned short * const l_273 = (void*)0;
    int l_304 = (-10L);
    unsigned char l_365[2][4][8] = {{{0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}, {0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}, {0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}, {0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}}, {{0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}, {0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}, {0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}, {0x8DL, 255UL, 0x62L, 0x1BL, 246UL, 0xE8L, 246UL, 0x1BL}}};
    unsigned l_378 = 0x12EEAC10L;
    short l_506 = 0x1DAAL;
    unsigned short l_507[4] = {1UL, 0x8EC2L, 1UL, 0x8EC2L};
    unsigned short *l_647 = &g_114;
    const int *l_653 = &l_260[3];
    unsigned l_664 = 0x37A28554L;
    char l_687 = (-1L);
    char l_730 = 1L;
    unsigned char l_731 = 0xBDL;
    short *l_747 = &l_506;
    short **l_746 = &l_747;
    int *l_772[2][3];
    short l_797[2];
    unsigned char *l_817 = (void*)0;
    unsigned char *l_818 = &g_337;
    const int **l_829 = &l_157[4];
    unsigned l_832[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_772[i][j] = &l_251;
    }
    for (i = 0; i < 2; i++)
        l_797[i] = (-10L);
    for (i = 0; i < 1; i++)
        l_832[i] = 0UL;
    if (func_67(l_157[4], ((*l_160) = (!(safe_mod_func_uint32_t_u_u((*g_83), (-9L))))), ((((((*l_166) ^= (g_150 ^= (safe_mod_func_uint32_t_u_u((*g_83), (safe_rshift_func_int16_t_s_u(((0xCDC6EB25L || (p_57 & (((p_58 != 0x8DL) , ((*l_167) = l_165)) == g_168))) && g_120), 11)))))) | 0x376A86D7L) ^ 0L) , 0UL) == g_153), &g_156))
    {
        const int l_183 = 0xF1A4D47DL;
        int l_223 = (-1L);
        unsigned char *l_246[3][4][7] = {{{&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}}, {{&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}}, {{&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}, {&g_245, &g_197, &g_197, &g_197, &g_245, &g_197, &g_197}}};
        int l_253 = 0x20795C42L;
        int l_255 = 6L;
        unsigned l_274 = 5UL;
        const short *l_307 = &g_261[1];
        short *l_336 = &g_261[1];
        int *l_338 = &l_255;
        int l_431 = (-9L);
        char **l_440 = &l_160;
        char ***l_439[5] = {&l_440, &l_440, &l_440, &l_440, &l_440};
        int **l_478[9][10][2] = {{{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}, {{&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}, {&l_338, (void*)0}}};
        int i, j, k;
        for (g_120 = 0; (g_120 <= 3); g_120 = safe_add_func_int32_t_s_s(g_120, 5))
        {
            unsigned char l_180 = 255UL;
            int l_192 = 1L;
            int l_193 = 1L;
            int l_194 = 2L;
            int l_195 = 0x3848CAB2L;
            unsigned short l_208 = 0xF2D7L;
            for (g_75 = (-20); (g_75 >= (-18)); g_75 = safe_add_func_int8_t_s_s(g_75, 5))
            {
                int l_179 = 0x5F8867BCL;
                for (p_58 = 0; (p_58 <= 5); p_58 += 1)
                {
                    const int **l_175 = (void*)0;
                    const int **l_176 = &l_157[8];
                    int l_196[10] = {1L, 0xC46A301CL, 1L, 0xC46A301CL, 1L, 0xC46A301CL, 1L, 0xC46A301CL, 1L, 0xC46A301CL};
                    int i, j;
                    if (l_180)
                    {
                        return p_57;
                    }
                    else
                    {
                        (*p_59) = 2L;
                        if (g_136[0])
                            break;
                    }
                }
            }
            for (l_193 = 3; (l_193 >= 0); l_193 -= 1)
            {
                int *l_214 = &l_195;
                int *l_215 = (void*)0;
                int *l_216 = &g_156;
                int *l_217 = &g_86;
                int *l_218 = &g_16;
                int *l_219 = (void*)0;
                int *l_220 = &g_16;
                int *l_221 = &l_195;
                int *l_222[7][6][6] = {{{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}, {{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}, {{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}, {{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}, {{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}, {{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}, {{&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}, {&l_195, &l_195, (void*)0, (void*)0, &g_16, &l_195}}};
                int i, j, k;
                g_224++;
                for (l_195 = 3; (l_195 >= 0); l_195 -= 1)
                {
                    unsigned l_227 = 4294967293UL;
                    int l_232 = (-7L);
                    for (g_150 = 0; (g_150 <= 3); g_150 += 1)
                    {
                        short *l_228 = &g_136[0];
                        int l_231[5][2][8] = {{{0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}, {0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}}, {{0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}, {0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}}, {{0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}, {0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}}, {{0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}, {0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}}, {{0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}, {0L, (-1L), (-4L), 1L, 0xA1FC9FD4L, 0xA1FC9FD4L, 1L, (-4L)}}};
                        int i, j, k;
                        g_86 |= (((((l_227 | ((((*l_228) = 0x4DA5L) | 0UL) < (safe_add_func_int16_t_s_s(g_7, (*l_221))))) , (void*)0) == (void*)0) && (*l_216)) != g_114);
                        return l_232;
                    }
                }
            }
        }
        for (g_197 = 3; (g_197 <= 9); g_197 += 1)
        {
            int l_233[3];
            unsigned char l_240[7];
            int l_254 = 0xBD653036L;
            unsigned short **l_298[9][4][5] = {{{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}, {{&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}, {&g_132[4][5][3], &g_132[4][5][3], &g_132[4][5][3], (void*)0, &g_132[4][5][3]}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_233[i] = 0x67B5BB63L;
            for (i = 0; i < 7; i++)
                l_240[i] = 5UL;
            l_233[1] &= (2UL <= (*p_59));
            for (p_61 = 3; (p_61 >= 0); p_61 -= 1)
            {
                unsigned short *l_241 = &g_114;
                unsigned char **l_247 = &l_246[0][0][2];
                int *l_248 = &g_86;
                int *l_249 = (void*)0;
                int *l_250[7] = {&g_86, &g_86, &l_233[1], &g_86, &g_86, &l_233[1], &g_86};
                int l_272 = 1L;
                short *l_277[3][6] = {{&g_259[3][0], &g_261[1], &g_259[3][0], &g_261[1], &g_259[3][0], &g_261[1]}, {&g_259[3][0], &g_261[1], &g_259[3][0], &g_261[1], &g_259[3][0], &g_261[1]}, {&g_259[3][0], &g_261[1], &g_259[3][0], &g_261[1], &g_259[3][0], &g_261[1]}};
                unsigned l_299 = 0xBC621D0DL;
                unsigned short l_310 = 65534UL;
                int i, j;
            }
        }
        (*l_338) |= (!(safe_div_func_int32_t_s_s(((((*l_166) = (p_57 | (g_337 ^= (p_58 > (safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(g_280, ((*l_336) &= (safe_sub_func_int8_t_s_s((~(safe_mod_func_int32_t_s_s((+((*p_60) = l_183)), (p_58 , (g_150 &= (safe_div_func_uint16_t_u_u(func_64((safe_sub_func_uint8_t_u_u(p_58, (((((**l_165) = g_224) && (***l_167)) , &g_245) == (void*)0)))), 8L))))))), 0L))))), p_61)), l_253)))))) == p_58) ^ p_57), g_282)));
        if ((safe_lshift_func_int8_t_s_u(p_57, (*l_338))))
        {
            unsigned short l_343[9][2][3] = {{{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}, {{0x4A47L, 0UL, 0UL}, {0x4A47L, 0UL, 0UL}}};
            char l_344[6][4] = {{9L, 1L, 2L, 1L}, {9L, 1L, 2L, 1L}, {9L, 1L, 2L, 1L}, {9L, 1L, 2L, 1L}, {9L, 1L, 2L, 1L}, {9L, 1L, 2L, 1L}};
            int i, j, k;
            (**l_165) = (safe_div_func_uint8_t_u_u((l_253 ^= ((*l_338) , l_343[7][1][0])), l_344[5][1]));
        }
        else
        {
            int l_351 = (-1L);
            int l_429 = 0xF9D6B5C0L;
            int l_459 = 0x8126BFCCL;
            (**l_165) |= (*p_59);
            for (g_245 = 0; (g_245 < 53); g_245 = safe_add_func_uint8_t_u_u(g_245, 3))
            {
                unsigned short *l_354[4];
                int l_368 = 0x0475242AL;
                short l_396 = 4L;
                int *l_404 = &l_368;
                int i;
                for (i = 0; i < 4; i++)
                    l_354[i] = &g_114;
            }
            for (g_337 = 0; (g_337 > 25); ++g_337)
            {
                unsigned char l_447 = 254UL;
                int *l_475 = &g_16;
                for (l_223 = 27; (l_223 == (-4)); l_223 = safe_sub_func_uint32_t_u_u(l_223, 4))
                {
                    unsigned l_452 = 0xCC75241BL;
                    int l_460 = (-1L);
                    int *l_487 = &l_253;
                    if ((((void*)0 == l_439[4]) < (safe_div_func_uint32_t_u_u(p_57, (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((l_447 != ((safe_add_func_int32_t_s_s(((~(safe_rshift_func_int8_t_s_s(g_262, l_452))) , (((+1UL) != (safe_sub_func_uint8_t_u_u((l_460 = (((l_429 , (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_351 |= (*p_59)) , l_452), p_58)), l_459))) != p_57) ^ 2UL)), l_429))) < 0xA8AA2FDAL)), (*p_60))) > (*g_83))), g_257)), p_57)) == l_429) & p_57)))))
                    {
                        if ((*p_59))
                            break;
                    }
                    else
                    {
                        int l_472 = (-1L);
                        unsigned short *l_481[6][2][9] = {{{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_120, (void*)0, (void*)0, (void*)0}}};
                        unsigned char l_482 = 0x6DL;
                        int i, j, k;
                        (*l_165) = ((l_447 || (*g_83)) , l_475);
                        (*p_59) = (((((g_168 == (l_478[7][8][0] = g_476)) ^ ((*l_336) = ((l_351 = (((l_482 = ((safe_div_func_uint32_t_u_u(0xC89EFCA3L, (*p_59))) || l_460)) , (l_472 > p_57)) != (safe_lshift_func_uint16_t_u_u((func_67(&l_429, p_57, p_57, p_60) , 0x3F00L), 15)))) | 0x66B7L))) && 1UL) & l_460) < 0x604514AFL);
                    }
                    (**l_167) = p_60;
                    (*l_475) = func_64(((safe_sub_func_uint32_t_u_u((*g_83), (*p_59))) || (*p_60)));
                }
            }
        }
    }
    else
    {
        int *l_496 = &g_430;
        int *l_497[8][1][4] = {{{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}, {{(void*)0, (void*)0, &l_258, (void*)0}}};
        unsigned short *l_502 = &g_120;
        unsigned short *l_505[8] = {(void*)0, &g_224, (void*)0, &g_224, (void*)0, &g_224, (void*)0, &g_224};
        int i, j, k;
        if ((safe_div_func_int8_t_s_s(0x89L, (p_61 = g_262))))
        {
            (**g_476) |= 7L;
            for (g_262 = 11; (g_262 >= 52); g_262++)
            {
                (*g_476) = (**l_167);
            }
            (*p_60) &= ((void*)0 == &g_477);
        }
        else
        {
            for (l_251 = 0; (l_251 == (-11)); --l_251)
            {
                (*l_166) = 0x63EA5185L;
                (*p_59) = (safe_div_func_uint16_t_u_u(p_61, ((*p_60) ^ (*g_83))));
            }
        }
        ++g_499;
        g_364 &= (((**g_476) ^= (-6L)) & ((p_57 ^ (--(*l_502))) == ((*l_496) = (--l_507[2]))));
    }
    for (g_245 = 8; (g_245 <= 57); g_245++)
    {
        int *l_514 = &g_430;
        (*p_60) = (*g_477);
        for (g_262 = (-26); (g_262 == 53); g_262 = safe_add_func_uint32_t_u_u(g_262, 3))
        {
            unsigned char **l_515 = (void*)0;
            (*g_476) = l_514;
            (***l_167) ^= (p_61 ^ ((((*l_160) &= (*l_514)) ^ 0x81L) >= (0x755FL & (((((p_61 , &l_273) != (void*)0) < 0x02F0L) , l_515) != &g_244[2]))));
        }
    }
    if ((*l_166))
    {
        int l_516[6][4] = {{(-7L), (-7L), 0L, (-3L)}, {(-7L), (-7L), 0L, (-3L)}, {(-7L), (-7L), 0L, (-3L)}, {(-7L), (-7L), 0L, (-3L)}, {(-7L), (-7L), 0L, (-3L)}, {(-7L), (-7L), 0L, (-3L)}};
        unsigned *l_527 = (void*)0;
        unsigned *l_528[7][5] = {{&g_317, &g_317, &g_317, &g_317, &g_317}, {&g_317, &g_317, &g_317, &g_317, &g_317}, {&g_317, &g_317, &g_317, &g_317, &g_317}, {&g_317, &g_317, &g_317, &g_317, &g_317}, {&g_317, &g_317, &g_317, &g_317, &g_317}, {&g_317, &g_317, &g_317, &g_317, &g_317}, {&g_317, &g_317, &g_317, &g_317, &g_317}};
        int l_529 = 3L;
        unsigned short *l_538 = &g_224;
        int *l_539 = &l_251;
        const int l_553[8][4][8] = {{{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}, {{0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}, {0L, (-1L), 1L, 5L, 0xBA1302DDL, 0xF9D61D91L, 0x81A45E2FL, (-1L)}}};
        const unsigned l_560 = 4294967295UL;
        int i, j, k;
        (*p_60) &= func_64((l_516[4][3] , (safe_rshift_func_int8_t_s_s((l_516[3][2] , g_224), l_516[4][3]))));
        l_529 |= (0x5A1CL || (l_516[5][1] = ((p_61 == (safe_rshift_func_uint8_t_u_s(((0x44E361DCL ^ (*g_83)) && ((*p_59) >= (***l_167))), g_499))) | (*p_59))));
        if ((g_364 ^ (safe_lshift_func_uint16_t_u_s(((safe_mod_func_int16_t_s_s((**l_165), (safe_sub_func_int8_t_s_s((((l_529 == ((*l_538) = p_58)) || l_516[4][3]) , (((*l_539) |= (+0xA2D60493L)) , ((*g_83) == (0L < p_57)))), p_58)))) >= (*g_477)), p_57))))
        {
            for (g_120 = 0; (g_120 > 57); ++g_120)
            {
                for (g_84 = 0; (g_84 > 55); g_84 = safe_add_func_int32_t_s_s(g_84, 3))
                {
                    short l_546[8][8][4] = {{{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}, {{(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}, {(-6L), 0xC823L, 0xB95EL, (-8L)}}};
                    int i, j, k;
                    return l_546[7][4][0];
                }
                (**l_167) = p_59;
                for (g_499 = 0; (g_499 <= 3); g_499 += 1)
                {
                    int i, j;
                    l_516[(g_499 + 1)][g_499] &= (**g_476);
                    l_516[(g_499 + 1)][g_499] = (*l_539);
                    if ((*p_60))
                        break;
                }
                (*l_539) &= (*p_59);
            }
        }
        else
        {
            const short l_554[2] = {0xEF23L, 0xEF23L};
            int l_572 = 1L;
            char *l_574 = (void*)0;
            unsigned short *l_591 = &g_385;
            char l_611 = 0xD0L;
            int i;
            for (g_84 = 0; (g_84 <= 9); g_84 += 1)
            {
                unsigned l_577 = 2UL;
                int l_592 = 0xE0776BAAL;
                char *l_601 = (void*)0;
                int l_608 = (-1L);
                int l_621 = (-3L);
                for (g_432 = 0; (g_432 <= 9); g_432 += 1)
                {
                    int i;
                    (**l_165) = (*p_60);
                    (**g_476) ^= (p_61 == ((safe_lshift_func_int16_t_s_u((*l_539), 10)) & (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_553[1][1][2], p_58)), 7))));
                }
            }
            (*p_59) &= l_554[1];
            return p_58;
        }
        for (g_401 = 0; (g_401 >= 21); g_401++)
        {
            char ***l_634 = (void*)0;
            char ***l_635 = (void*)0;
            (**l_165) = (((g_153--) , (safe_lshift_func_uint8_t_u_s((((***l_167) , &l_160) != ((p_61 == (safe_mod_func_int32_t_s_s(((void*)0 == (*g_578)), (*g_83)))) , (g_578 = &g_579[3]))), 2))) || (((p_58 , ((0UL == 4294967295UL) >= 254UL)) > (-1L)) ^ (*l_166)));
            return p_61;
        }
    }
    else
    {
        unsigned short *l_643 = &g_224;
        unsigned short *l_645 = &g_114;
        int l_667 = 0x3149704FL;
        short *l_676 = &g_363[0];
        unsigned char *l_679 = (void*)0;
        unsigned char *l_680 = &g_262;
        int *l_688[7][7][5] = {{{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}, {{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}, {{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}, {{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}, {{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}, {{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}, {{&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}, {&l_251, &l_251, &l_260[4], &l_260[6], &l_260[6]}}};
        unsigned char l_811 = 0x30L;
        int *l_812 = &g_86;
        int i, j, k;
        for (g_245 = 0; (g_245 > 6); g_245 = safe_add_func_int32_t_s_s(g_245, 3))
        {
            unsigned short *l_646 = &l_507[2];
            int *l_655 = &l_251;
            int *l_657 = (void*)0;
            int *l_658 = &l_251;
            int *l_659 = &l_251;
            int *l_660 = &l_304;
            int *l_661 = &g_156;
            int *l_662[10] = {&g_430, (void*)0, (void*)0, (void*)0, (void*)0, &g_430, (void*)0, (void*)0, (void*)0, (void*)0};
            int i;
            for (g_400 = (-9); (g_400 >= 12); ++g_400)
            {
                unsigned short *l_642[8];
                unsigned short **l_644[6] = {&l_642[6], &l_642[6], &g_132[4][5][3], &l_642[6], &l_642[6], &g_132[4][5][3]};
                int l_650 = 0L;
                const int *l_654 = &l_304;
                int i;
                for (i = 0; i < 8; i++)
                    l_642[i] = &g_2;
                (*g_477) = ((safe_lshift_func_int8_t_s_s(((((l_645 = (l_643 = l_642[7])) == (l_647 = l_646)) , ((*g_578) = ((p_58 , 4294967288UL) , (*g_578)))) != &p_61), (safe_sub_func_int8_t_s_s(((*l_160) = (0UL > (func_64(l_650) | 0UL))), p_57)))) > 65528UL);
                for (g_401 = (-8); (g_401 >= 22); g_401 = safe_add_func_uint8_t_u_u(g_401, 9))
                {
                    l_654 = l_653;
                    l_655 = (*g_476);
                    for (g_337 = 1; (g_337 <= 5); g_337 += 1)
                    {
                        unsigned l_656 = 4294967293UL;
                        (**g_476) = (l_656 < ((*p_60) > 0UL));
                    }
                }
            }
            ++l_664;
            return p_58;
        }
        g_16 = (l_667 , (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((0x07604E48L != (l_667 <= (((safe_mod_func_int16_t_s_s(((*l_676) = p_61), (-6L))) && ((safe_mod_func_uint8_t_u_u((--(*l_680)), (safe_add_func_uint16_t_u_u((((**g_476) = ((p_57 <= (***l_167)) < (safe_div_func_int8_t_s_s(0L, l_667)))) ^ l_667), 1UL)))) > 0x9F001B81L)) < l_687))) , p_61), 5L)) == l_667), 13)) , (**g_578)) , (-3L)));
        for (g_257 = 0; (g_257 <= 3); g_257 += 1)
        {
            unsigned l_703 = 0x92D319FBL;
            int l_714 = 4L;
            const int *l_724[6][9] = {{&g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725}, {&g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725}, {&g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725}, {&g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725}, {&g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725}, {&g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725, &g_725}};
            int l_750 = (-3L);
            int l_752 = 0x9AEA40A3L;
            int l_753 = 0xD2D8BEFCL;
            int i, j;
            (*g_476) = p_59;
            for (l_687 = 0; (l_687 <= 4); l_687 += 1)
            {
                unsigned short l_706 = 0x322BL;
                int l_738 = 0x34526C5CL;
                int l_745 = 1L;
                int l_748 = (-1L);
                int l_751 = 0xCC53FE96L;
                (*l_166) |= (-1L);
                for (g_401 = 0; (g_401 <= 3); g_401 += 1)
                {
                    unsigned short **l_704 = &l_643;
                    unsigned short **l_705 = &g_132[5][3][0];
                    int l_749 = 0x3A74848FL;
                    int i, j, k;
                    (*l_166) = g_363[g_401];
                    if ((safe_add_func_int16_t_s_s((((g_363[g_257] >= func_64(((l_706 = ((safe_rshift_func_int16_t_s_s(((0xBFL < 0UL) | ((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(g_363[g_401], (++(*g_83)))) > (safe_sub_func_uint16_t_u_u(g_363[g_401], g_363[g_401]))), l_703)) & (&g_224 != ((*l_705) = ((*l_704) = &l_507[0])))), 7)) , g_2)), g_150)) ^ p_61)) <= (**g_476)))) , 65534UL) >= g_257), 1L)))
                    {
                        int *l_707[9];
                        short *l_710 = &g_136[0];
                        short *l_711 = &l_506;
                        short *l_712 = (void*)0;
                        short *l_713[5][9] = {{&g_607, &g_261[1], &g_607, (void*)0, &g_261[1], &g_607, &g_261[1], (void*)0, &g_607}, {&g_607, &g_261[1], &g_607, (void*)0, &g_261[1], &g_607, &g_261[1], (void*)0, &g_607}, {&g_607, &g_261[1], &g_607, (void*)0, &g_261[1], &g_607, &g_261[1], (void*)0, &g_607}, {&g_607, &g_261[1], &g_607, (void*)0, &g_261[1], &g_607, &g_261[1], (void*)0, &g_607}, {&g_607, &g_261[1], &g_607, (void*)0, &g_261[1], &g_607, &g_261[1], (void*)0, &g_607}};
                        const int **l_723[7];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_707[i] = &g_282;
                        for (i = 0; i < 7; i++)
                            l_723[i] = &l_157[6];
                        (*l_166) = ((l_714 = (!((2L <= (((g_281 &= g_197) , g_432) == ((g_197 > p_58) == (safe_add_func_int16_t_s_s(g_86, l_703))))) , ((*l_711) = (g_259[1][2] |= (((*l_710) = ((p_58 >= ((*l_676) = ((p_60 != l_707[2]) , g_607))) <= 0x31L)) && p_57)))))) <= (-1L));
                        l_688[l_687][(l_687 + 2)][l_687] = (*g_476);
                        (*p_59) = (0xC9L | ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_61, 3)), ((65529UL || p_61) , (((~p_61) & ((*l_711) |= (((l_730 , l_731) == g_430) & (**g_578)))) & l_706)))), (-9L))) < p_58));
                    }
                    else
                    {
                        return p_61;
                    }
                    g_430 = ((**g_476) = ((((*p_59) && 2L) , ((*l_680) = ((safe_rshift_func_uint8_t_u_s(0x5FL, 2)) && ((*l_653) & ((((((l_714 = (safe_add_func_int16_t_s_s((l_738 ^= ((*l_676) = (safe_lshift_func_int16_t_s_u((**l_165), 7)))), (safe_add_func_int8_t_s_s(((*l_160) = ((g_742 = g_741) & ((((p_61 ^ ((l_745 = (((((safe_lshift_func_int8_t_s_s(((+p_61) & (p_61 && (**g_578))), p_61)) ^ 248UL) || p_58) , 0xED103084L) & 6UL)) >= (*g_83))) & (**g_578)) & p_57) , (*p_59)))), p_61))))) , (void*)0) == l_746) >= (*p_59)) , 0x38L) < p_57))))) < (***l_167)));
                    g_754--;
                }
            }
        }
        if ((**g_476))
        {
            unsigned char l_779 = 0x8AL;
            int *l_788 = (void*)0;
            unsigned short l_792 = 65535UL;
            for (g_742 = 0; (g_742 > 29); g_742 = safe_add_func_uint32_t_u_u(g_742, 4))
            {
                int l_763 = 0x2B106A2BL;
                if (((**l_165) , ((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(l_763, (--(*l_643)))), (((((*l_676) = (p_58 || (p_58 != l_763))) , p_61) | p_57) == l_763))) || (*g_83))))
                {
                    int l_776 = 0x3843A48DL;
                    int *l_786 = &g_156;
                    (*g_476) = l_772[1][2];
                    for (g_663 = 4; (g_663 <= 1); g_663 = safe_sub_func_uint8_t_u_u(g_663, 1))
                    {
                        int l_775[8] = {7L, 7L, 0x397A8EF7L, 7L, 7L, 0x397A8EF7L, 7L, 7L};
                        int l_778 = 0x0E93E1DAL;
                        int i;
                        l_779++;
                    }
                    (**l_165) = ((safe_sub_func_uint8_t_u_u(((l_763 || (safe_sub_func_int32_t_s_s((p_61 >= func_67((*g_476), l_763, p_58, l_786)), ((g_259[4][2] ^= (p_57 == (safe_unary_minus_func_int16_t_s(g_616[4])))) ^ p_61)))) <= p_57), 7UL)) , 0x78DB1885L);
                }
                else
                {
                    (**l_167) = l_788;
                    return p_61;
                }
                if (l_763)
                    continue;
            }
            for (g_86 = (-20); (g_86 == (-13)); ++g_86)
            {
                char l_795 = 0x65L;
                int l_796 = (-1L);
                const unsigned short *l_805 = (void*)0;
                if ((*p_59))
                {
                    int l_791 = 0x55CEB5BDL;
                    (*p_60) |= l_791;
                    (*g_476) = (void*)0;
                    if (l_792)
                        break;
                    for (g_256 = 0; (g_256 <= 5); g_256 += 1)
                    {
                        int i, j;
                        (*p_60) ^= (g_259[g_256][g_256] || ((safe_add_func_int8_t_s_s(l_260[g_256], (~p_61))) < 65535UL));
                    }
                }
                else
                {
                    --g_798;
                    for (g_114 = 17; (g_114 < 12); --g_114)
                    {
                        unsigned short *l_803 = &g_2;
                        unsigned short **l_804[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_804[i] = &l_643;
                        (*p_59) |= (((g_132[1][5][3] = l_803) != l_805) ^ 0xF804L);
                        g_430 ^= (*p_59);
                    }
                }
                if (((safe_unary_minus_func_int16_t_s(p_57)) < (safe_sub_func_uint16_t_u_u(l_779, g_245))))
                {
                    (*p_59) = (safe_sub_func_int32_t_s_s(0x7F7A818DL, (*g_83)));
                }
                else
                {
                    for (g_114 = 0; (g_114 <= 1); g_114 += 1)
                    {
                        int i;
                        if (g_261[g_114])
                            break;
                        return p_61;
                    }
                }
                l_811 = (*p_60);
            }
        }
        else
        {
            (**l_167) = l_812;
        }
    }
    (**l_165) = ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u((--(*l_818)), (safe_rshift_func_uint16_t_u_s(((*l_647)++), (safe_div_func_uint8_t_u_u(p_61, (safe_div_func_int16_t_s_s((*l_653), (p_57 , (**l_165)))))))))) && 1UL), p_58)) || p_58);
    return p_58;
}







static int func_64(int p_65)
{
    unsigned l_66[3][8][6] = {{{3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}}, {{3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}}, {{3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}, {3UL, 0UL, 0UL, 3UL, 0x6883CE71L, 4294967291UL}}};
    unsigned *l_72 = (void*)0;
    int l_73 = 0L;
    char *l_74 = &g_75;
    int *l_124 = (void*)0;
    int *l_125[2];
    unsigned l_143 = 4294967293UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_125[i] = &l_73;
    for (p_65 = 0; (p_65 <= 2); p_65 += 1)
    {
        return g_16;
    }
    if ((func_67(&g_16, ((*l_74) = (p_65 , ((0xC7F5175DL <= ((l_66[2][1][4] >= (l_73 = l_66[1][1][1])) <= (((-1L) ^ p_65) | (l_66[1][5][0] > ((p_65 , 0x2AL) && p_65))))) & g_2))), g_16, l_72) , l_73))
    {
        int *l_105 = &g_16;
        char **l_118[3][8][10] = {{{&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}}, {{&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}}, {{&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}, {&l_74, &l_74, &l_74, (void*)0, (void*)0, &l_74, &l_74, &l_74, &l_74, &l_74}}};
        char ***l_117 = &l_118[1][1][0];
        int i, j, k;
        l_105 = (void*)0;
        for (g_84 = 0; (g_84 != 12); ++g_84)
        {
            char l_112 = (-1L);
            unsigned short *l_113 = &g_114;
            if (p_65)
                break;
            g_86 |= (safe_lshift_func_int16_t_s_u(((safe_div_func_int16_t_s_s(1L, ((*l_113) = l_112))) , (g_7 > ((+(safe_mod_func_int8_t_s_s(l_112, ((l_73 <= p_65) , (p_65 , (p_65 , p_65)))))) != 2UL))), 7));
        }
        (*l_117) = &l_74;
    }
    else
    {
        int *l_119[10] = {(void*)0, (void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0, (void*)0, &g_86, (void*)0};
        int **l_123[10] = {(void*)0, (void*)0, &l_119[2], (void*)0, (void*)0, &l_119[2], (void*)0, (void*)0, &l_119[2], (void*)0};
        unsigned short *l_128 = (void*)0;
        unsigned short **l_129 = (void*)0;
        unsigned short **l_130 = (void*)0;
        unsigned short **l_131[3][2] = {{&l_128, (void*)0}, {&l_128, (void*)0}, {&l_128, (void*)0}};
        short *l_135 = &g_136[0];
        int i, j;
        --g_120;
        l_125[0] = (l_124 = &g_86);
        g_16 ^= ((g_75 , (((safe_mod_func_uint8_t_u_u(((((g_132[4][5][3] = l_128) == (void*)0) > p_65) > g_86), (safe_rshift_func_uint8_t_u_s(0x34L, (((*l_135) = 0xBF62L) > p_65))))) & g_114) || p_65)) & p_65);
    }
    p_65 = (((p_65 >= ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((*g_83) = p_65), (p_65 ^ (p_65 , p_65)))), (safe_sub_func_int16_t_s_s(l_143, (safe_rshift_func_int8_t_s_s(g_7, ((*l_74) = g_120))))))) , (safe_add_func_int32_t_s_s(g_84, p_65)))) && 0xA9L) <= p_65);
    return g_7;
}







static unsigned char func_67(const int * p_68, char p_69, unsigned short p_70, int * p_71)
{
    int l_78[4] = {0xA82FB348L, 0xCCF76E5FL, 0xA82FB348L, 0xCCF76E5FL};
    int *l_85 = &g_16;
    unsigned short l_92 = 65532UL;
    unsigned l_104[1];
    int i;
    for (i = 0; i < 1; i++)
        l_104[i] = 0x5721BA6CL;
    if ((safe_rshift_func_int8_t_s_s(p_69, (1L < (0x5DCFD1F9L & l_78[2])))))
    {
        int l_89 = 1L;
        g_86 = ((*l_85) ^= (((safe_rshift_func_int8_t_s_s((p_71 == ((p_69 <= ((g_75 ^ (p_69 & p_70)) , ((p_69 != p_70) >= (g_83 == (void*)0)))) , &g_84)), 5)) , (void*)0) != l_85));
        for (p_69 = 0; (p_69 > (-26)); p_69--)
        {
            l_89 ^= (*p_68);
        }
        return l_89;
    }
    else
    {
        char l_93 = 0L;
        l_85 = &g_86;
        if ((safe_lshift_func_uint16_t_u_s((l_92 > l_93), 1)))
        {
            (*l_85) |= (*p_68);
        }
        else
        {
            for (g_86 = 0; (g_86 < (-11)); g_86--)
            {
                for (l_92 = (-1); (l_92 < 17); l_92 = safe_add_func_int16_t_s_s(l_92, 5))
                {
                    for (g_84 = 0; (g_84 <= 3); g_84 += 1)
                    {
                        int i;
                        if (l_78[g_84])
                            break;
                    }
                }
                for (p_69 = 21; (p_69 <= 9); --p_69)
                {
                    return p_70;
                }
                return g_2;
            }
        }
    }
    (*l_85) = ((((g_16 > ((p_70 , p_69) , p_69)) , &g_16) != ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(((((((p_69 , ((*l_85) | g_75)) || (*l_85)) , 1UL) ^ p_70) , (-2L)) & l_104[0]), p_69)) & 0xE9B690C2L), 0x7FA1A718L)) , p_68)) > g_16);
    return g_2;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_259[i][j], "g_259[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_261[i], "g_261[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_498[i], "g_498[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_616[i], "g_616[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_725, "g_725", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_931[i], "g_931[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_970, "g_970", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1191[i], "g_1191[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1310, "g_1310", print_hash_value);
    transparent_crc(g_1347, "g_1347", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1482[i][j], "g_1482[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1611, "g_1611", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1637[i][j], "g_1637[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1708, "g_1708", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1725[i][j][k], "g_1725[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1836[i], "g_1836[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1839, "g_1839", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1858[i][j], "g_1858[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
