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



static char g_19 = 0L;
static short g_25 = 0x5440L;
static short *g_30 = (void*)0;
static short g_54 = 4L;
static short g_64 = 8L;
static unsigned short g_75 = 0UL;
static unsigned char g_77 = 0xE3L;
static unsigned g_78[5] = {0x02D78BEAL, 0x02D78BEAL, 0x02D78BEAL, 0x02D78BEAL, 0x02D78BEAL};
static int g_84 = 0x8FB0C4F3L;
static int g_97 = 0x69BA90DDL;
static unsigned g_134[5] = {0UL, 0x36AE2794L, 0UL, 0x36AE2794L, 0UL};
static int *g_142 = &g_97;
static int g_147[1][10] = {{(-7L), (-7L), 0L, (-7L), (-7L), 0L, (-7L), (-7L), 0L, (-7L)}};
static int **g_235 = &g_142;
static unsigned short **g_266[9] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static int g_269 = 0xDB5E15BDL;
static int g_277 = (-1L);
static unsigned char *g_283 = (void*)0;
static unsigned char **g_282 = &g_283;
static unsigned g_313[9][5] = {{0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}, {0x92D2716DL, 6UL, 0x6E2DF889L, 8UL, 0xF8403408L}};
static char g_314[7][5] = {{1L, 0L, 0xDAL, 0xDAL, 0L}, {1L, 0L, 0xDAL, 0xDAL, 0L}, {1L, 0L, 0xDAL, 0xDAL, 0L}, {1L, 0L, 0xDAL, 0xDAL, 0L}, {1L, 0L, 0xDAL, 0xDAL, 0L}, {1L, 0L, 0xDAL, 0xDAL, 0L}, {1L, 0L, 0xDAL, 0xDAL, 0L}};
static char g_321 = 0x37L;
static short *g_416 = &g_54;
static const int g_448 = 1L;
static const short g_474 = 6L;
static const short *g_473[5][9][5] = {{{&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}}, {{&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}}, {{&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}}, {{&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}}, {{&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}, {&g_474, (void*)0, (void*)0, &g_474, (void*)0}}};
static short g_569 = 0xA64EL;
static unsigned char g_623 = 0x39L;
static char g_624 = 7L;
static char **g_659 = (void*)0;
static int *g_705 = &g_277;
static char *g_761[3] = {&g_19, &g_19, &g_19};
static int g_775[3] = {2L, 2L, 2L};
static char **g_816[6] = {(void*)0, &g_761[0], (void*)0, &g_761[0], (void*)0, &g_761[0]};
static int g_832[3][7][3] = {{{(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}}, {{(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}}, {{(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}, {(-4L), 0xD688367FL, (-4L)}}};
static unsigned g_862 = 2UL;
static short * const *g_905 = (void*)0;
static short * const **g_904 = &g_905;
static short * const ***g_903 = &g_904;
static unsigned short ***g_963 = &g_266[2];
static short *g_969 = (void*)0;
static unsigned char g_1044 = 0xFBL;
static short *g_1102 = &g_54;
static unsigned *g_1116[7][5] = {{&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}, {&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}, {&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}, {&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}, {&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}, {&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}, {&g_313[5][1], &g_313[5][1], &g_134[2], (void*)0, &g_313[5][2]}};
static unsigned char g_1173 = 0x8CL;
static unsigned short *****g_1174 = (void*)0;
static int g_1178 = 1L;
static int g_1185 = 0x492F4289L;
static unsigned short g_1188 = 9UL;
static const unsigned char g_1189 = 246UL;
static short **g_1207 = &g_969;
static short ***g_1206 = &g_1207;
static short ****g_1205 = &g_1206;
static short g_1222 = (-10L);



static char func_1(void);
static int func_2(unsigned p_3, int p_4, int p_5);
static unsigned char func_8(unsigned p_9);
static short func_15(unsigned p_16, unsigned short p_17, unsigned p_18);
static unsigned func_20(short p_21, short p_22, unsigned char p_23);
static short func_26(short * p_27, short * const p_28, char p_29);
static short * const func_31(int p_32);
static int func_33(unsigned p_34, const short * p_35);
static const short * func_38(int p_39, char p_40, short * p_41, char p_42, const short * p_43);
static int func_47(short p_48, short * p_49, short * p_50, char p_51, short * p_52);
static char func_1(void)
{
    int l_14 = (-9L);
    short *l_24 = &g_25;
    const short **l_472 = (void*)0;
    int *l_1177[8] = {(void*)0, &g_1178, (void*)0, &g_1178, (void*)0, &g_1178, (void*)0, &g_1178};
    unsigned short ****l_1191 = (void*)0;
    unsigned short *****l_1190 = &l_1191;
    unsigned l_1198 = 4294967295UL;
    unsigned l_1199 = 7UL;
    short **l_1202 = (void*)0;
    short ** const *l_1201 = &l_1202;
    short ** const **l_1200 = &l_1201;
    int *l_1211 = &g_1178;
    unsigned char l_1216[4];
    int i;
    for (i = 0; i < 4; i++)
        l_1216[i] = 0x0EL;
    if ((g_1178 ^= func_2((safe_lshift_func_uint8_t_u_u(0xB1L, func_8((safe_rshift_func_int8_t_s_u(((safe_sub_func_int16_t_s_s(((l_14 > func_15(g_19, (func_20(((*l_24) = g_19), func_26(g_30, func_31(func_33((safe_rshift_func_int8_t_s_u(0L, 7)), (g_473[3][2][4] = func_38(l_14, l_14, g_30, g_19, g_30)))), l_14), l_14) ^ l_14), g_474)) ^ l_14), l_14)) < 7UL), l_14))))), g_775[0], g_775[0])))
    {
        int l_1181 = 8L;
        unsigned *l_1184[2][6] = {{&g_134[4], &g_134[2], &g_313[7][3], &g_134[2], &g_134[4], (void*)0}, {&g_134[4], &g_134[2], &g_313[7][3], &g_134[2], &g_134[4], (void*)0}};
        unsigned short ******l_1192 = &l_1190;
        int l_1197 = 0x92E7E145L;
        int i, j;
        for (g_54 = 25; (g_54 < (-30)); --g_54)
        {
            int l_1182 = 2L;
            short *l_1183 = &g_25;
            (**g_235) = (*g_705);
            if (l_1181)
                continue;
        }
        (*g_235) = (*g_235);
        g_269 = ((0x0AL || ((l_1181 = (l_1181 || l_1181)) <= (g_1185 = 4294967292UL))) >= (((*g_705) = ((safe_lshift_func_int16_t_s_s(((*g_1102) = g_1188), 2)) != ((((~g_1189) != (g_1174 != ((*l_1192) = l_1190))) || (safe_lshift_func_int8_t_s_u(func_2((safe_mod_func_uint32_t_u_u(l_1197, l_1198)), l_1197, g_314[2][1]), l_1199))) ^ l_1197))) < 8UL));
    }
    else
    {
        short ***l_1204 = &l_1202;
        short ****l_1203 = &l_1204;
        const int l_1210 = 5L;
        unsigned short *l_1217 = &g_1188;
        unsigned l_1218 = 0x914DF6D4L;
        unsigned char *l_1219 = &g_1173;
        unsigned short *l_1220 = &g_75;
        int l_1221[1][6];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1221[i][j] = 1L;
        }
        (*g_142) &= ((l_1200 == (g_1205 = l_1203)) > (safe_lshift_func_uint16_t_u_s(l_1210, 4)));

        ;
        (*g_235) = l_1211;

        ;
        l_1221[0][2] = ((*g_705) = (((func_15(l_1210, (safe_rshift_func_uint16_t_u_s(((*l_1220) ^= ((*g_283) != ((*l_1219) = ((func_26((*g_1207), (*g_1207), (*l_1211)) & ((safe_mod_func_uint32_t_u_u(((((*g_1102) > ((l_1216[0] |= 0xFAB9L) != ((*l_1217) = l_1210))) ^ 0x0BB2L) < l_1218), l_1210)) >= l_1218)) || 0x3A5DCD5AL)))), (*g_1102))), l_1218) ^ 4294967286UL) <= 0x1C41L) & 1UL));


    }

    ;

    ;
    ;
    ;


    return g_1222;
}







static int func_2(unsigned p_3, int p_4, int p_5)
{
    int *l_1175 = &g_277;
    int *l_1176[8][9][3] = {{{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}, {{&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}, {&g_147[0][3], &g_832[0][2][0], (void*)0}}};
    int i, j, k;
    (*g_235) = l_1175;

    ;
    g_147[0][1] ^= ((*g_142) = (*g_142));
    return (**g_235);
}







static unsigned char func_8(unsigned p_9)
{
    (*g_705) = p_9;
    (*g_705) = (4294967295UL != p_9);
    return (*g_283);
}







static short func_15(unsigned p_16, unsigned short p_17, unsigned p_18)
{
    int l_720[8][6][4] = {{{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}, {{3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}, {3L, 0xFFC0F8F9L, (-1L), 0xBC24CA35L}}};
    char *l_721 = &g_19;
    int l_725 = 1L;
    unsigned char *l_736 = &g_77;
    unsigned char **l_737 = &g_283;
    short **l_741 = &g_30;
    short ***l_740 = &l_741;
    short ***l_743 = &l_741;
    short ****l_742 = &l_743;
    unsigned short l_744 = 0xA58EL;
    int l_750[3][8] = {{0xF1463473L, 1L, 0xF1463473L, 1L, 0xF1463473L, 1L, 0xF1463473L, 1L}, {0xF1463473L, 1L, 0xF1463473L, 1L, 0xF1463473L, 1L, 0xF1463473L, 1L}, {0xF1463473L, 1L, 0xF1463473L, 1L, 0xF1463473L, 1L, 0xF1463473L, 1L}};
    int l_799 = 0x00AD09A2L;
    unsigned char l_822 = 255UL;
    int l_835 = (-5L);
    int l_850 = 1L;
    int l_893[9][4][5] = {{{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}, {{0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}, {0L, 0x43147C52L, 0L, 8L, 0x52A00839L}}};
    unsigned short *l_953[4];
    unsigned short * const *l_952 = &l_953[0];
    unsigned short * const **l_951 = &l_952;
    int ***l_998 = &g_235;
    int ****l_997 = &l_998;
    char l_1022 = 0x4AL;
    unsigned l_1029[9][9][1] = {{{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}, {{0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}, {0xF26BDF3EL}}};
    short l_1038 = 0xD1A9L;
    short l_1045[3][2][6] = {{{0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL}, {0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL}}, {{0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL}, {0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL}}, {{0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL}, {0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL, 0xF710L, 0x5A4CL}}};
    unsigned short l_1049 = 1UL;
    unsigned l_1080 = 0UL;
    int l_1096 = 0xA8025D10L;
    short *l_1142[10];
    unsigned short ****l_1168 = &g_963;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_953[i] = &g_75;
    for (i = 0; i < 10; i++)
        l_1142[i] = &g_25;
    (*g_705) ^= ((((((l_720[7][0][1] ^ (((void*)0 == l_721) | (l_720[7][0][1] < ((((l_725 = (safe_rshift_func_uint8_t_u_u((~(safe_unary_minus_func_int32_t_s(0x176E7DEBL))), 7))) > ((safe_sub_func_uint8_t_u_u(((((*g_416) = (safe_rshift_func_uint8_t_u_s(0x5AL, 3))) & p_18) ^ (safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((l_736 = l_721) == ((*l_737) = l_721)), (-1L))), g_448)) != g_147[0][9]), l_720[5][5][2]))), 0x8EL)) ^ l_720[2][0][0])) && g_134[2]) <= 0xC707L)))) ^ p_16) < l_720[7][0][1]) | p_18) && l_725) && p_16);

    ;
    ;
    if (((g_19 ^ (safe_add_func_int32_t_s_s((l_740 != ((*l_742) = &l_741)), l_744))) == (0L && p_17)))
    {
        unsigned l_745 = 0UL;
        short *l_751 = &g_569;
        short l_752 = 0x3B11L;
        int l_753 = (-8L);
        short ***l_781 = &l_741;
        int l_810 = (-1L);
        l_753 = func_20((((1L ^ (((*l_721) = (l_745 ^ ((safe_rshift_func_uint16_t_u_s(p_16, ((*g_416) = (p_18 || (1L == (+(safe_sub_func_int8_t_s_s(p_17, (p_16 < func_47(p_17, (**l_740), (*l_741), l_750[1][6], l_751)))))))))) >= 6L))) == p_17)) > l_745) ^ p_18), l_745, l_752);
        for (l_753 = 17; (l_753 >= 19); l_753 = safe_add_func_uint16_t_u_u(l_753, 2))
        {
            int l_778 = 2L;
            for (l_725 = (-20); (l_725 > 19); l_725 = safe_add_func_uint16_t_u_u(l_725, 4))
            {
                int l_764 = 0xAD7C05F1L;
                short * const l_768 = &g_64;
                short *l_792[6][5] = {{&l_752, (void*)0, (void*)0, &l_752, &g_64}, {&l_752, (void*)0, (void*)0, &l_752, &g_64}, {&l_752, (void*)0, (void*)0, &l_752, &g_64}, {&l_752, (void*)0, (void*)0, &l_752, &g_64}, {&l_752, (void*)0, (void*)0, &l_752, &g_64}, {&l_752, (void*)0, (void*)0, &l_752, &g_64}};
                unsigned char *l_798 = &g_623;
                int i, j;
                for (p_18 = 0; (p_18 >= 39); p_18 = safe_add_func_int16_t_s_s(p_18, 7))
                {
                    short *l_762 = &g_569;
                    int l_763[6][8] = {{0x6A46A7ADL, 0xD125E919L, 9L, 0xD125E919L, 0x6A46A7ADL, (-8L), 6L, 0xD125E919L}, {0x6A46A7ADL, 0xD125E919L, 9L, 0xD125E919L, 0x6A46A7ADL, (-8L), 6L, 0xD125E919L}, {0x6A46A7ADL, 0xD125E919L, 9L, 0xD125E919L, 0x6A46A7ADL, (-8L), 6L, 0xD125E919L}, {0x6A46A7ADL, 0xD125E919L, 9L, 0xD125E919L, 0x6A46A7ADL, (-8L), 6L, 0xD125E919L}, {0x6A46A7ADL, 0xD125E919L, 9L, 0xD125E919L, 0x6A46A7ADL, (-8L), 6L, 0xD125E919L}, {0x6A46A7ADL, 0xD125E919L, 9L, 0xD125E919L, 0x6A46A7ADL, (-8L), 6L, 0xD125E919L}};
                    int l_773 = 1L;
                    int i, j;
                    if (l_753)
                        break;
                    (*g_235) = (void*)0;

                    ;
                    if (l_744)
                    {
                        char **l_760 = &l_721;
                        unsigned *l_767 = &g_134[2];
                        short **l_769[9][7] = {{(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}, {(void*)0, &l_751, (void*)0, &g_30, &g_30, (void*)0, &l_751}};
                        short **l_770 = (void*)0;
                        short **l_771 = (void*)0;
                        short **l_772 = &g_416;
                        int i, j;
                        l_764 &= l_763[0][4];
                        (*g_705) = func_47(((*l_751) = (l_720[7][0][1] = ((((*l_721) |= ((p_16 ^ p_16) <= (safe_rshift_func_uint16_t_u_s((!((p_16 < p_17) > ((*l_767) = g_623))), 14)))) == (~func_26(&g_569, func_31(func_26((**l_740), ((*l_772) = l_768), l_764)), p_18))) | 0x0C8CL))), &l_752, l_762, l_773, l_762);

                        ;
                        ;
                    }
                    else
                    {
                        unsigned l_774 = 4294967291UL;
                        if (l_753)
                            break;
                        if (l_774)
                            continue;
                        (*g_235) = (void*)0;
                        return g_775[0];
                    }

                    ;
                    ;
                    l_778 &= ((8L != ((((0x64L | ((p_18 | g_64) == (func_26(&g_569, func_31((p_16 >= p_16)), (1L == l_750[1][6])) == 0x7513L))) != p_18) & p_16) > p_16)) && (-4L));
                }
                if ((*g_705))
                    break;
                (*g_235) = &l_720[7][0][1];

                ;
                if ((safe_rshift_func_int8_t_s_s(l_720[7][0][1], l_720[7][0][1])))
                {
                    int l_793 = (-1L);
                    unsigned short *l_794[8][4] = {{(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}, {(void*)0, &l_744, (void*)0, &l_744}};
                    unsigned char *l_797 = &g_77;
                    char * const *l_815 = &g_761[1];
                    char **l_817 = &g_761[1];
                    int i, j;
                    (**g_235) = (((l_781 == l_781) > (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((p_18 ^ (((safe_sub_func_int16_t_s_s(l_764, (safe_add_func_uint8_t_u_u(0x27L, 0xDAL)))) | (safe_mod_func_int32_t_s_s((*g_142), ((*g_705) = func_26(l_792[3][3], (**l_743), l_778))))) && l_750[1][6])), 2)) != l_720[7][0][1]), l_793))) >= l_764);
                    (*g_705) = ((p_17 = l_752) != func_20(p_16, ((*l_768) = (safe_add_func_uint32_t_u_u(((0x37L < ((l_797 != l_798) < ((p_18 != (l_799 || ((p_18 > (0x12L && l_793)) < (*g_142)))) >= 0UL))) & 0x546C81EFL), l_764))), p_16));


                    if (l_793)
                        continue;
                    for (g_84 = 7; (g_84 != 28); g_84 = safe_add_func_uint8_t_u_u(g_84, 1))
                    {
                        unsigned short l_806 = 2UL;
                        unsigned l_809 = 0UL;
                        unsigned *l_818 = &l_745;
                        int *l_819 = &l_764;
                        l_810 = ((*g_705) = (safe_add_func_int8_t_s_s(func_33((safe_add_func_int8_t_s_s((~p_16), (p_17 != (((-1L) <= ((l_806 ^= p_17) < 0x3B64L)) || (safe_lshift_func_int8_t_s_s(((*l_721) |= p_18), (l_764 = l_809))))))), (**l_781)), 0x35L)));
                        (*l_819) |= ((safe_lshift_func_uint8_t_u_u(((~p_18) <= (safe_mod_func_int16_t_s_s(0x68CCL, l_793))), (p_18 < 0x9BL))) != ((((l_815 != (l_817 = g_816[0])) >= (func_33(((*l_818) &= func_33(l_806, (*l_741))), &g_569) == l_778)) < p_16) < p_18));
                    }

                    ;
                }
                else
                {
                    unsigned l_825 = 0xAD944F7DL;
                    int *l_826[8] = {&g_269, (void*)0, &g_269, (void*)0, &g_269, (void*)0, &g_269, (void*)0};
                    int i;
                    for (g_569 = 0; (g_569 != 17); g_569++)
                    {
                        (*g_142) = p_18;
                        l_764 &= ((l_822 | (safe_rshift_func_uint8_t_u_s(0xA6L, 6))) && l_810);
                    }
                    (*g_705) ^= (**g_235);
                    if (l_825)
                        continue;
                    l_826[6] = &l_778;


                }


            }
        }


        for (g_25 = 0; (g_25 > (-3)); g_25 = safe_sub_func_uint8_t_u_u(g_25, 1))
        {
            unsigned *l_831 = &g_313[7][3];
            (*g_705) ^= (safe_rshift_func_uint16_t_u_s((g_134[0] && (p_16 &= ((*l_831) = 1UL))), 1));
            if (g_832[0][2][0])
                break;
            (*g_235) = &l_720[7][5][0];

            ;
        }
    }
    else
    {
        short *l_847 = &g_64;
        int l_848 = 1L;
        int l_852[10][8] = {{7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}, {7L, 6L, 0x48193E0AL, 1L, 1L, 0x48193E0AL, 6L, 7L}};
        unsigned char ***l_879 = &l_737;
        short *l_906 = (void*)0;
        const unsigned *l_915[3][4][5] = {{{&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}}, {{&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}}, {{&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}, {&g_862, &g_134[2], &g_134[2], &g_134[2], &g_862}}};
        int l_940[3][1][6] = {{{0x2866316CL, 0xB0EFA0D2L, 0xA2BDD557L, 0xB0EFA0D2L, 0x2866316CL, 0xB0EFA0D2L}}, {{0x2866316CL, 0xB0EFA0D2L, 0xA2BDD557L, 0xB0EFA0D2L, 0x2866316CL, 0xB0EFA0D2L}}, {{0x2866316CL, 0xB0EFA0D2L, 0xA2BDD557L, 0xB0EFA0D2L, 0x2866316CL, 0xB0EFA0D2L}}};
        unsigned short ***l_962 = &g_266[6];
        int i, j, k;
        if (((void*)0 == g_266[6]))
        {
            unsigned char ***l_833[10];
            int l_834[2][8][1] = {{{0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}}, {{0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}, {0xD5883799L}}};
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_833[i] = &g_282;
            (*g_705) = ((void*)0 != l_833[5]);
            return l_834[0][6][0];
        }
        else
        {
            short *l_846[7][10] = {{&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}, {&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}, {&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}, {&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}, {&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}, {&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}, {&g_25, &g_54, &g_64, &g_54, &g_54, &g_25, &g_25, &g_54, &g_54, &g_64}};
            unsigned *l_849 = &g_313[5][0];
            int l_851 = (-1L);
            const char *l_866 = &g_321;
            unsigned char ***l_877 = (void*)0;
            short ** const **l_902 = (void*)0;
            int i, j;
            if (func_20((*g_416), (g_569 = l_835), (g_77 = ((*g_283) = (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((0x0D00D879L > (l_852[5][4] = ((*g_705) = (safe_rshift_func_int8_t_s_s((-2L), ((l_851 = (safe_add_func_uint8_t_u_u(func_26(((**l_740) = l_846[3][4]), &g_54, (((p_18 = ((*l_849) = (func_26(l_847, l_846[3][4], ((func_26(l_847, &g_54, l_848) ^ 0x4BEFF496L) && 0xB1L)) > p_16))) ^ (-1L)) & p_16)), l_850))) ^ p_16)))))) > p_16) & 255UL), 1)), l_848)), p_17))))))
            {
                short * const l_871 = &g_64;
                int l_875 = 0x4300C08DL;
                char l_891[5][1] = {{0L}, {0L}, {0L}, {0L}, {0L}};
                int i, j;
                for (g_77 = 0; (g_77 != 50); g_77++)
                {
                    int *l_855[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_855[i] = &l_720[0][5][0];
                    if (l_851)
                        break;
                    if ((*g_705))
                        continue;
                    (*g_235) = &l_852[0][5];

                    ;
                    (*g_235) = l_855[1];

                    ;
                }


                (*g_705) = ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((p_17 != g_84) && (safe_mod_func_int16_t_s_s(g_862, ((((((safe_lshift_func_int16_t_s_u(l_835, l_850)) & 0x8664BE4FL) > (*g_705)) ^ g_25) != l_851) & 1L)))) | 0x6464L), 0xB794096DL)) && p_17), l_725)) < l_852[5][4]);
                if (l_852[0][6])
                {
                    unsigned l_874 = 0x71B93074L;
                    unsigned char ***l_876 = (void*)0;
                    if ((*g_705))
                    {
                        short **l_872 = (void*)0;
                        short **l_873 = &l_846[1][1];
                        unsigned char ****l_878 = (void*)0;
                        (*g_705) &= (safe_lshift_func_uint16_t_u_s((g_775[1] >= (func_26(&g_54, ((*l_873) = l_871), l_848) && l_874)), ((l_875 | 0x69L) && l_874)));
                        (*g_705) = l_750[2][2];
                        (*g_705) = (-1L);
                        (*g_705) ^= (!(l_876 != (l_879 = l_877)));

                        ;
                    }
                    else
                    {
                        (*g_235) = &l_725;

                        ;
                    }


                    ;
                    (*g_235) = (void*)0;

                    ;
                }
                else
                {
                    unsigned short l_884 = 0xF2EFL;
                    int l_892 = 0L;
                    int *l_894[8][6];
                    short l_900 = 9L;
                    unsigned char l_901 = 0xACL;
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_894[i][j] = &g_832[0][0][2];
                    }
                    (*g_235) = &l_851;

                    ;
                    g_832[0][2][0] |= (safe_mod_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((l_884 || 0UL), ((-5L) ^ ((*l_849) = (l_851 == ((*g_416) = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_891[2][0], 5)), func_20(((*l_847) ^= (l_892 = p_16)), (p_17 > ((l_851 > (l_852[5][4] = ((*g_705) ^= (((*l_721) = (g_269 > g_78[4])) < 0x94L)))) && p_16)), p_16))) & 0x91L))))))) >= l_893[2][3][1]) & l_848), l_851));


                    for (g_97 = 4; (g_97 > 8); ++g_97)
                    {
                        short l_899 = 0xEF12L;
                        l_899 ^= (safe_mod_func_int16_t_s_s(p_17, l_725));
                        l_900 = (*g_705);
                        (*g_705) = l_901;
                        (*g_705) ^= (p_18 > (l_902 == g_903));
                    }
                }


                ;
            }
            else
            {
                return p_18;
            }


            ;
        }


        ;
        l_852[5][4] = (l_835 ^ l_852[1][5]);
        (*g_235) = &l_725;

        ;
        if (func_47(p_18, l_847, (l_906 = ((***l_742) = &g_25)), l_744, &g_54))
        {
            unsigned char l_911 = 0UL;
            int l_913 = 0L;
            int ***l_914[5] = {&g_235, &g_235, &g_235, &g_235, &g_235};
            int *l_939 = &g_277;
            unsigned char ****l_956 = &l_879;
            unsigned short ***l_959 = &g_266[6];
            int i;
            (*g_705) = p_18;
            if (l_720[7][0][1])
            {
                for (g_862 = 0; (g_862 == 31); g_862 = safe_add_func_uint32_t_u_u(g_862, 6))
                {
                    for (l_850 = 0; (l_850 < 6); ++l_850)
                    {
                        if (p_18)
                            break;
                        return p_17;


                    }
                }
                (*g_705) = (p_18 && (*g_283));
            }
            else
            {
                const unsigned char l_921 = 0x25L;
                int ***l_930 = &g_235;
                short *l_937 = (void*)0;
                unsigned short * const ***l_954 = &l_951;
                unsigned *l_955 = &g_134[3];
                unsigned short ****l_960 = (void*)0;
                unsigned short ****l_961 = &l_959;
                if (p_18)
                {
                    for (g_25 = 0; (g_25 <= 7); g_25 += 1)
                    {
                        unsigned short l_912[6][2][7] = {{{0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}, {0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}}, {{0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}, {0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}}, {{0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}, {0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}}, {{0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}, {0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}}, {{0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}, {0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}}, {{0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}, {0xBC8CL, 6UL, 0xB0A7L, 65527UL, 0xA6CEL, 65527UL, 0xB0A7L}}};
                        int i, j, k;
                        l_912[2][1][1] |= (0xEBL || (l_911 |= p_17));
                        if (l_912[2][1][1])
                            break;
                    }
                    return l_913;


                }
                else
                {
                    const short *l_918 = &g_54;
                    int l_922[6][4] = {{0xDCB951D5L, 0x2A78DBE8L, 0L, 0x2A78DBE8L}, {0xDCB951D5L, 0x2A78DBE8L, 0L, 0x2A78DBE8L}, {0xDCB951D5L, 0x2A78DBE8L, 0L, 0x2A78DBE8L}, {0xDCB951D5L, 0x2A78DBE8L, 0L, 0x2A78DBE8L}, {0xDCB951D5L, 0x2A78DBE8L, 0L, 0x2A78DBE8L}, {0xDCB951D5L, 0x2A78DBE8L, 0L, 0x2A78DBE8L}};
                    int i, j;
                    for (g_569 = 0; (g_569 <= 4); g_569 += 1)
                    {
                        const unsigned **l_916 = &l_915[2][3][3];
                        unsigned *l_917 = &g_862;
                        int ***l_927 = &g_235;
                        int ****l_928 = (void*)0;
                        int ****l_929 = &l_927;
                        unsigned l_938 = 0UL;
                        int i;
                        g_832[0][2][0] ^= (((((void*)0 == l_914[1]) == (g_78[g_569] ^ func_33(((*l_917) = (((*l_916) = l_915[2][0][2]) == (void*)0)), l_918))) && (safe_add_func_int8_t_s_s((((p_18 == p_17) == l_799) != l_921), l_922[4][0]))) && p_18);
                        (*g_705) ^= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((l_750[0][6] ^ ((((*l_929) = l_927) != (l_930 = &g_235)) ^ ((**l_737) &= l_922[1][1]))) == g_474), l_938)), 2));
                        l_939 = ((***l_929) = (*g_235));

                        ;
                    }

                    ;
                    ;
                    l_852[5][4] &= ((*g_705) = (l_940[1][0][2] & l_922[5][3]));
                    (*g_705) = (-6L);
                    (*g_705) |= (safe_sub_func_int16_t_s_s((0xDAL > (safe_add_func_uint16_t_u_u((l_893[2][3][1] <= (safe_add_func_int16_t_s_s(p_18, (((1L == ((****l_742) = 4L)) < ((*l_721) |= (&l_921 != (*l_737)))) ^ 0x7006L)))), (l_750[1][6] & 9UL)))), l_850));
                }

                ;
                ;
                (*g_705) = (*g_705);
                l_720[4][1][0] ^= ((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s(((*g_416) = (((*l_954) = l_951) == (void*)0)), (l_954 != (void*)0))) & l_852[5][4]) | l_921), ((*g_705) ^ 4294967291UL))) > ((*l_955) = g_775[0]));
                l_852[7][4] ^= ((((l_956 == (void*)0) > ((safe_mod_func_int8_t_s_s(l_848, l_850)) < (func_20(p_18, ((****l_742) = (((*l_961) = l_959) == (g_963 = l_962))), l_822) || 0x8301E1FEL))) > 9L) & l_850);


            }


            ;
        }
        else
        {
            unsigned l_964 = 0xA5571686L;
            int *l_965 = (void*)0;
            int *l_966[4];
            int i;
            for (i = 0; i < 4; i++)
                l_966[i] = &l_720[4][1][0];
            g_269 &= (l_964 = ((*g_705) = (*g_705)));
            l_720[3][2][0] = l_799;
        }

        ;

        ;
    }


    for (g_624 = 5; (g_624 >= 1); g_624 -= 1)
    {
        short * const l_970[9][2] = {{&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}, {&g_569, (void*)0}};
        short *l_971[1][10] = {{&g_64, &g_64, &g_64, &g_64, &g_64, &g_64, &g_64, &g_64, &g_64, &g_64}};
        int l_976 = 0L;
        int *l_977 = (void*)0;
        int *l_978[5] = {&l_720[6][1][1], (void*)0, &l_720[6][1][1], (void*)0, &l_720[6][1][1]};
        short l_979[6][5][8] = {{{(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}}, {{(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}}, {{(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}}, {{(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}}, {{(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}}, {{(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}, {(-4L), (-10L), 2L, (-10L), (-4L), 0x3108L, 2L, 0x3108L}}};
        short ***l_987 = (void*)0;
        int l_1006 = 0L;
        unsigned short ***l_1020 = &g_266[6];
        unsigned char **l_1056 = &l_736;
        char * const *l_1112[3];
        int l_1152[6][7][6] = {{{0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}}, {{0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}}, {{0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}}, {{0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}}, {{0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}}, {{0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}, {0xBD1B9C46L, 0x8217BAE9L, 0x2D3B06CCL, 0xA29061F6L, 0xA400D53CL, (-3L)}}};
        short l_1153 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1112[i] = &g_761[1];
    }
    l_720[7][0][1] ^= (safe_sub_func_int8_t_s_s(g_1173, ((void*)0 != g_1174)));
    return p_16;


}







static unsigned func_20(short p_21, short p_22, unsigned char p_23)
{
    unsigned l_698 = 4294967291UL;
    int l_700 = 0x897E297AL;
    short *l_710 = &g_54;
    int *l_718 = &l_700;
    for (g_84 = 0; (g_84 <= 25); g_84 = safe_add_func_int16_t_s_s(g_84, 4))
    {
        int *l_683 = &g_97;
        int l_693[10] = {0L, (-10L), 0L, (-10L), 0L, (-10L), 0L, (-10L), 0L, (-10L)};
        int i;
        for (g_321 = 3; (g_321 <= 8); g_321 += 1)
        {
            int **l_691 = &l_683;
            short *l_702[7] = {(void*)0, (void*)0, &g_64, (void*)0, (void*)0, &g_64, (void*)0};
            short *l_703 = &g_25;
            unsigned *l_715 = &g_313[5][4];
            int i;
            for (p_22 = 8; (p_22 >= 1); p_22 -= 1)
            {
                const unsigned l_697 = 0x7A383ACEL;
                for (g_97 = 3; (g_97 <= 8); g_97 += 1)
                {
                    int **l_690[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_690[i] = &l_683;
                    (*g_235) = l_683;

                    ;
                }
                if (((**l_691) >= p_21))
                {
                    return g_314[6][1];
                }
                else
                {
                    short **l_711 = &l_703;
                    int l_712 = 9L;
                    (*g_705) = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_683) = ((func_26(((*l_711) = l_710), func_31((*g_705)), p_23) && (func_33((*l_683), (*l_711)) >= l_712)) != l_700)), p_22)), 7));

                    ;
                }

                ;
            }

            ;
            (*g_705) = ((safe_sub_func_uint8_t_u_u((func_33(((*l_715) = g_54), l_702[3]) || (+func_33(l_700, &p_21))), g_474)) == 65535UL);
        }
        (*g_235) = &l_693[5];

        ;
        return g_569;


    }
    (*g_235) = &l_700;

    ;
    for (g_25 = (-26); (g_25 <= (-24)); g_25 = safe_add_func_uint8_t_u_u(g_25, 8))
    {
        char l_719 = (-1L);
    }
    (*l_718) = ((*g_705) |= (*g_142));
    return g_277;


}







static short func_26(short * p_27, short * const p_28, char p_29)
{
    g_97 = (0x4326L == 0x3DB5L);
    return (*g_416);
}







static short * const func_31(int p_32)
{
    short ****l_632 = (void*)0;
    int *l_638 = &g_147[0][4];
    const unsigned char *l_653 = &g_623;
    if (((void*)0 != l_632))
    {
        unsigned l_635 = 0x1B636169L;
        for (g_269 = 0; (g_269 != 15); g_269 = safe_add_func_uint16_t_u_u(g_269, 1))
        {
            int *l_636 = (void*)0;
            int *l_637 = &g_277;
            (*l_637) = l_635;
        }
    }
    else
    {
        int *l_639 = &g_147[0][9];
        unsigned short *l_663[9][10][1] = {{{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}};
        unsigned short **l_662 = &l_663[8][0][0];
        int i, j, k;
        l_639 = l_638;
        (*l_639) = p_32;
        for (g_54 = (-1); (g_54 < 0); g_54 = safe_add_func_int32_t_s_s(g_54, 4))
        {
            const unsigned char *l_654 = (void*)0;
            int **l_656 = &l_639;
            char *l_661 = &g_321;
            char **l_660 = &l_661;
            short *l_679 = &g_569;
            (*g_235) = &g_97;

            ;
        }
        for (g_569 = 0; g_569 < 7; g_569 += 1)
        {
            for (g_97 = 0; g_97 < 5; g_97 += 1)
            {
                g_314[g_569][g_97] = (-1L);
            }
        }
    }
    return &g_569;


}







static int func_33(unsigned p_34, const short * p_35)
{
    int *l_477 = &g_147[0][0];
    int l_524 = 0L;
    char *l_533 = &g_314[2][1];
    unsigned l_555 = 0x97740730L;
    const unsigned char **l_562 = (void*)0;
    const unsigned char ***l_561 = &l_562;
    const unsigned short *l_594 = &g_75;
    unsigned short *l_595[2][2];
    int *l_625 = &l_524;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_595[i][j] = &g_75;
    }
    for (g_64 = (-21); (g_64 == 28); ++g_64)
    {
        short **l_486 = &g_30;
        short ***l_485 = &l_486;
        short ****l_484 = &l_485;
        int l_487 = 1L;
        unsigned char *l_504 = &g_77;
        unsigned l_509 = 0x46598D26L;
        char l_513[6][3];
        unsigned char ***l_560 = &g_282;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_513[i][j] = 0x10L;
        }
        (*g_235) = l_477;

        ;
        for (g_277 = 0; (g_277 >= 15); g_277++)
        {
            unsigned l_480 = 1UL;
            char *l_510 = &g_314[0][1];
        }
        (*g_142) ^= 0xF0DB5287L;
        if (p_34)
        {
            unsigned **l_543 = (void*)0;
            unsigned *l_544 = &l_509;
            int *l_545 = &g_269;
            (**g_235) = 0xA43EC917L;
            (*l_545) &= (safe_lshift_func_int16_t_s_u(((p_34 && ((g_147[0][9] & (**g_235)) != ((safe_add_func_int16_t_s_s(0xA6C3L, (*l_477))) >= (6UL != (((l_544 = &g_134[2]) != l_477) >= 0x5C24L))))) & l_513[0][2]), p_34));

            ;
            for (l_524 = 12; (l_524 <= 8); l_524--)
            {
                unsigned char * const l_548 = &g_77;
                int l_554 = 0L;
                (*l_477) = (((l_548 != l_533) < ((*l_533) = 0x7EL)) != (safe_rshift_func_int16_t_s_s(l_509, ((safe_unary_minus_func_uint16_t_u((((p_34 && ((((safe_lshift_func_int16_t_s_u((-1L), (g_97 == l_554))) & (l_555 &= l_513[0][2])) >= l_513[0][2]) & 4294967295UL)) < p_34) && 0x43DDL))) < p_34))));
            }
            for (g_269 = 0; (g_269 <= (-28)); g_269 = safe_sub_func_int32_t_s_s(g_269, 9))
            {
                int l_558 = 0x4D6E846CL;
            }
        }
        else
        {
            int **l_604 = (void*)0;
            unsigned char *l_614 = &g_77;
            if ((*l_477))
            {
                (*g_235) = (*g_235);
            }
            else
            {
                unsigned short l_602[9][4][7] = {{{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}, {{65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}, {65531UL, 9UL, 0x690EL, 0x6925L, 65534UL, 0xA871L, 0x8BA2L}}};
                unsigned *l_603 = &g_134[3];
                int i, j, k;
                g_97 |= ((*l_477) <= (l_602[4][0][0] < (g_54 = ((*g_142) != ((*l_603) ^= ((-9L) == g_277))))));
                return p_34;
            }
            for (g_54 = 4; (g_54 >= 0); g_54 -= 1)
            {
                short l_605 = (-6L);
                l_605 = ((l_604 != (void*)0) ^ (*l_477));
                (*l_560) = (*l_560);
                for (l_555 = 1; (l_555 <= 4); l_555 += 1)
                {
                    char l_615 = (-1L);
                    int ***l_616 = &g_235;
                    int ***l_617 = &l_604;
                }
            }
            return (*g_142);
        }
    }
    for (g_77 = 1; (g_77 <= 4); g_77 += 1)
    {
        int *l_618[9][10] = {{&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}, {&g_147[0][0], &g_147[0][9], &g_277, (void*)0, &g_147[0][8], (void*)0, &g_147[0][8], (void*)0, &g_277, &g_147[0][9]}};
        int i, j;
        l_477 = l_618[3][8];
        for (g_97 = 0; (g_97 <= 4); g_97 += 1)
        {
            int *l_626 = &g_269;
            unsigned char *** const l_629[7] = {&g_282, (void*)0, &g_282, (void*)0, &g_282, (void*)0, &g_282};
            int i;
            (*g_235) = (void*)0;

            ;
            for (g_75 = 0; (g_75 <= 4); g_75 += 1)
            {
                unsigned char *l_621 = (void*)0;
                unsigned char *l_622[6] = {(void*)0, &g_623, (void*)0, &g_623, (void*)0, &g_623};
                unsigned char ***l_628 = &g_282;
                int l_631 = 0x987EF5AAL;
                int i;
                l_524 &= ((g_624 &= (g_623 = (safe_mod_func_uint16_t_u_u(g_134[g_75], p_34)))) && ((*l_533) |= g_97));
                if (p_34)
                    continue;
                if (g_134[g_75])
                {
                    l_524 &= p_34;
                }
                else
                {
                    int l_627 = (-1L);
                    for (l_555 = 1; (l_555 <= 4); l_555 += 1)
                    {
                        if (g_134[g_75])
                            break;
                        l_626 = l_625;

                        ;
                        l_626 = (void*)0;

                        ;
                    }
                    l_627 = g_134[g_75];
                    if ((l_628 == l_629[5]))
                    {
                        int l_630 = (-8L);
                        (*l_625) |= ((p_34 || p_34) >= (+((*l_533) = (p_34 || (l_631 = l_630)))));
                        if (p_34)
                            continue;
                        g_147[0][9] ^= l_627;
                    }
                    else
                    {
                        if (p_34)
                            break;
                    }
                }
            }

            ;
            return p_34;
        }
    }

    ;
    return g_78[2];
}







static const short * func_38(int p_39, char p_40, short * p_41, char p_42, const short * p_43)
{
    unsigned char l_46[4];
    short *l_65 = &g_64;
    int *l_182 = &g_147[0][9];
    unsigned short l_246 = 1UL;
    short l_250 = (-2L);
    short **l_253 = &l_65;
    unsigned short *l_264 = &g_75;
    unsigned short **l_263 = &l_264;
    short *l_352 = &l_250;
    int l_436 = 0x2209B29BL;
    unsigned l_458 = 4294967293UL;
    int i;
    for (i = 0; i < 4; i++)
        l_46[i] = 0x7BL;
    for (p_42 = 0; (p_42 <= 3); p_42++)
    {
        short *l_53 = &g_54;
        int l_59 = 0x0F1FA6F6L;
        short *l_63 = &g_64;
        short **l_62[6][5][4] = {{{&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}}, {{&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}}, {{&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}}, {{&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}}, {{&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}}, {{&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}, {&l_53, &l_63, &l_53, &g_30}}};
        int *l_145 = &l_59;
        int i, j, k;
        l_46[0] ^= g_19;
        (*l_145) = func_47(((*l_53) ^= 1L), g_30, g_30, (p_39 <= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(l_59, 14)), (l_46[1] & ((l_65 = (p_41 = l_53)) == p_43)))) == ((-6L) & p_42))), &g_64);

        ;
        ;
        for (g_75 = 0; (g_75 <= 3); g_75 += 1)
        {
            return p_43;


        }
    }

    ;
    ;
    ;
    for (g_97 = 1; (g_97 <= 4); g_97 += 1)
    {
        unsigned short l_160 = 65530UL;
        int *l_175 = &g_97;
        for (g_54 = 0; (g_54 <= 3); g_54 += 1)
        {
            short l_149 = (-3L);
            int l_152 = 0x8190269BL;
            for (p_39 = 3; (p_39 >= 0); p_39 -= 1)
            {
                short l_173 = (-1L);
                int **l_176 = &l_175;
                if (p_39)
                {
                    unsigned l_148 = 0xC5736710L;
                    for (g_77 = 0; (g_77 <= 3); g_77 += 1)
                    {
                        int *l_146 = &g_147[0][9];
                        (*l_146) = p_40;
                        (*l_146) ^= 1L;
                        l_149 ^= ((*l_146) |= l_148);
                    }
                    for (l_149 = 0; (l_149 <= 3); l_149 += 1)
                    {
                        int **l_150 = &g_142;
                        int *l_151 = &g_147[0][0];
                        (*l_150) = (void*)0;

                        ;
                        (*l_151) |= g_84;
                        (*l_151) = (0x0C11L < 0x2F3EL);
                        (*l_151) = p_40;
                    }
                }
                else
                {
                    int l_155 = 0xCEA4A799L;
                    int l_164 = (-9L);
                    int l_165 = 0L;
                    char l_166 = 0x4EL;
                    unsigned short *l_170 = &g_75;
                    l_152 |= g_84;
                    for (l_152 = 3; (l_152 >= 0); l_152 -= 1)
                    {
                        int l_158 = 1L;
                        unsigned short *l_159[10] = {&g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75, &g_75};
                        int *l_163 = &g_147[0][9];
                        int i;
                        l_165 |= (l_164 = ((*l_163) = (((safe_sub_func_uint16_t_u_u(g_78[1], (0x9D58L ^ l_155))) | (g_134[l_152] = ((safe_lshift_func_uint8_t_u_u((l_46[p_39] = l_46[0]), 5)) < (l_158 <= (l_160 = g_147[0][9]))))) != (safe_rshift_func_uint16_t_u_s(g_147[0][9], l_155)))));
                    }
                    if ((0xCFL >= l_166))
                    {
                        unsigned short **l_167 = (void*)0;
                        unsigned short **l_168 = (void*)0;
                        unsigned short *l_169 = (void*)0;
                        unsigned short **l_171 = &l_170;
                        int *l_172 = &l_152;
                        int l_174 = (-2L);
                        l_174 = (p_39 != ((l_160 & g_54) | ((l_164 = (g_77 <= ((*l_172) &= ((l_169 = p_41) != ((*l_171) = l_170))))) ^ ((g_147[0][2] | l_46[2]) || l_173))));

                        ;
                        return l_170;


                    }
                    else
                    {
                        if (p_42)
                            break;
                        return p_41;


                    }
                }
                (*l_176) = l_175;
            }
            for (g_75 = 0; (g_75 > 42); g_75 = safe_add_func_int16_t_s_s(g_75, 1))
            {
                const int **l_179 = (void*)0;
                const int *l_181 = &g_97;
                const int **l_180 = &l_181;
                int *l_183 = (void*)0;
                int *l_184 = &l_152;
                short *l_187 = &l_149;
                unsigned *l_194 = &g_134[3];
                (*l_180) = (void*)0;

                ;
                (*l_180) = l_182;

                ;
                (*l_184) = ((*l_182) = (*l_182));
                (*l_182) = (((*l_187) = ((safe_add_func_int16_t_s_s(g_84, (-1L))) | (**l_180))) == (((safe_rshift_func_int16_t_s_u(g_84, 11)) || (safe_lshift_func_uint8_t_u_u((((*l_194) |= ((*l_182) == (safe_add_func_int16_t_s_s(g_97, (*l_175))))) || ((*l_184) &= 1L)), 1))) < g_84));
            }
            p_39 = l_152;
        }
    }
    if (((*l_182) = (*l_182)))
    {
        short l_226[4];
        short **l_292 = &g_30;
        int l_294 = (-1L);
        unsigned short *l_298 = &g_75;
        int i;
        for (i = 0; i < 4; i++)
            l_226[i] = (-1L);
        for (p_39 = 0; (p_39 >= 14); p_39++)
        {
            char *l_199 = &g_19;
            char **l_198 = &l_199;
            int l_202 = 0xADA1A689L;
            if (p_39)
                break;
        }
        for (p_42 = 3; (p_42 >= 0); p_42 -= 1)
        {
            const unsigned l_272 = 4294967295UL;
            short *l_293 = &l_226[0];
            int *l_295 = &g_269;
            int i;
            for (g_97 = 3; (g_97 >= 0); g_97 -= 1)
            {
                const unsigned char l_273 = 253UL;
                unsigned char *l_281 = (void*)0;
                unsigned char **l_280 = &l_281;
                unsigned char ***l_284 = &g_282;
                int i;
                for (g_84 = 0; (g_84 <= 3); g_84 += 1)
                {
                    unsigned short *l_259 = (void*)0;
                    unsigned short *l_260 = &l_246;
                    int i;
                    (*l_182) = l_46[g_97];
                    if ((((*l_260) &= l_46[g_84]) < l_226[g_97]))
                    {
                        int i;
                        (*g_235) = (*g_235);
                        (*l_182) |= (safe_lshift_func_int16_t_s_u(l_226[p_42], (g_78[(g_84 + 1)] ^ g_78[p_42])));
                        (*g_235) = &p_39;

                        ;
                    }
                    else
                    {
                        unsigned short ***l_265 = &l_263;
                        unsigned short ***l_267 = &g_266[0];
                        int *l_268 = &g_269;
                        int *l_276 = &g_277;
                        (*l_182) = p_40;
                        if (p_40)
                            break;
                        p_39 &= ((*l_268) = (((((*l_265) = l_263) == ((*l_267) = g_266[6])) == ((*l_182) = (l_46[g_84] & (((l_46[g_84] == g_19) ^ (*l_182)) <= 0UL)))) >= l_226[g_97]));
                        (*l_276) |= ((safe_rshift_func_uint16_t_u_s(((((*l_182) & 0x6C49L) != ((l_272 > l_273) || l_273)) > (safe_mod_func_uint8_t_u_u((*l_182), l_273))), (*l_268))) || (*l_182));
                    }
                }
                p_39 = ((((l_46[p_42] & l_226[p_42]) == (safe_rshift_func_int8_t_s_u(l_226[p_42], 0))) | 251UL) || (l_280 == ((*l_284) = g_282)));
            }
        }

        ;
        return &g_54;



    }
    else
    {
        unsigned short l_319 = 65535UL;
        short *l_329 = &g_64;
        char *l_330 = &g_321;
        unsigned l_367[7][8][4] = {{{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}, {{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}, {{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}, {{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}, {{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}, {{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}, {{4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}, {4294967292UL, 0x46D64D6BL, 0x8CAB490EL, 4294967290UL}}};
        unsigned l_371 = 1UL;
        unsigned short l_375 = 0x531EL;
        int l_376 = 0xDAF887CBL;
        int l_392 = 0x2309B60FL;
        unsigned short **l_421 = &l_264;
        unsigned char * const *l_427[2];
        unsigned char * const **l_426[6] = {&l_427[0], &l_427[0], &l_427[0], &l_427[0], &l_427[0], &l_427[0]};
        unsigned l_428 = 4294967294UL;
        unsigned l_444 = 0xB90D629EL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_427[i] = (void*)0;
        for (g_84 = 1; (g_84 <= 4); g_84 += 1)
        {
            char *l_320 = &g_321;
            int *l_322 = &g_97;
            int i;
            for (p_42 = 4; (p_42 >= 0); p_42 -= 1)
            {
                int i, j;
                (*g_235) = &p_39;

                ;
                p_39 &= g_313[(g_84 + 3)][p_42];
            }
            if (g_78[g_84])
                continue;
            (*g_235) = &p_39;

            ;
            (*l_322) &= (((*l_264) = (g_314[2][1] && p_40)) <= (g_147[0][9] < (g_78[g_84] | (safe_mod_func_uint8_t_u_u(((+p_40) == (safe_mod_func_uint16_t_u_u((g_147[0][7] < ((((*l_320) = l_319) >= l_319) <= (((*l_65) = g_64) >= p_39))), 2L))), 0x40L)))));
        }

        ;
        if ((func_47((safe_lshift_func_uint8_t_u_u(0xD1L, (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((*l_182), func_47((p_40 < l_319), &g_64, ((*l_253) = l_329), ((*l_330) = 0xFEL), &g_54))), (*l_182))))), &g_54, p_41, (*l_182), &g_54) | (*l_182)))
        {
            short *l_331[5];
            int *l_334 = &g_97;
            unsigned char *l_337 = &l_46[2];
            short ***l_342 = &l_253;
            short ****l_343 = &l_342;
            int *l_344 = (void*)0;
            int *l_345 = &g_277;
            short l_372 = 7L;
            unsigned short ***l_401 = &l_263;
            int i;
            for (i = 0; i < 5; i++)
                l_331[i] = &g_54;
            p_39 |= (p_40 <= p_42);
            if (((safe_add_func_uint8_t_u_u(((*l_182) ^ (((p_42 != ((*l_334) = 1L)) | (p_39 = ((*l_345) = ((safe_add_func_uint8_t_u_u(((*l_337) = p_39), (safe_sub_func_uint16_t_u_u((p_42 && (~((g_314[2][2] &= ((0xE2D6L ^ l_319) == (((safe_add_func_int16_t_s_s(((*l_65) |= ((*l_182) > (((*l_343) = l_342) == (void*)0))), g_313[7][1])) ^ (*l_182)) > l_319))) | p_40))), 0x0ACDL)))) & 0xA6L)))) <= 0xFFL)), l_319)) == g_313[7][3]))
            {
                (*l_334) ^= (p_39 |= p_40);
                (*l_182) = (safe_lshift_func_uint8_t_u_u((*l_345), 7));
            }
            else
            {
                int *l_350[3];
                short *l_354[5][7] = {{&l_250, &g_64, &g_54, &g_64, &l_250, &l_250, &l_250}, {&l_250, &g_64, &g_54, &g_64, &l_250, &l_250, &l_250}, {&l_250, &g_64, &g_54, &g_64, &l_250, &l_250, &l_250}, {&l_250, &g_64, &g_54, &g_64, &l_250, &l_250, &l_250}, {&l_250, &g_64, &g_54, &g_64, &l_250, &l_250, &l_250}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_350[i] = &g_277;
                for (g_277 = 16; (g_277 > 15); g_277 = safe_sub_func_uint16_t_u_u(g_277, 1))
                {
                    unsigned l_351 = 0x71D79BB8L;
                    short *l_353 = &g_64;
                    (*g_235) = l_350[1];

                    ;
                    if (l_351)
                        break;
                    if (func_47((((void*)0 != l_334) & (((*l_182) >= func_47((l_337 != &l_46[0]), (*l_253), l_352, l_319, (l_354[2][3] = l_353))) && 0UL)), &g_54, (*l_253), p_40, &g_54))
                    {
                        int *l_357 = &g_147[0][9];
                        (*l_334) = 0x4CCD08A4L;
                        p_39 = (safe_sub_func_uint32_t_u_u(((*l_357) |= (l_357 != (void*)0)), ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((func_47(l_351, l_329, l_353, p_42, &g_64) < (safe_lshift_func_uint16_t_u_u((&p_43 == &p_43), p_39))), g_54)), 5)) & g_269)));
                        (*l_182) = ((p_39 = (((*l_65) = 0xBE2BL) | (((*l_342) = &p_41) != &l_353))) | (*l_182));

                        ;
                        if (p_42)
                            break;
                    }
                    else
                    {
                        int **l_364 = &l_182;
                        (*l_364) = ((*g_235) = l_334);

                        ;
                        ;
                        (*l_182) = (**g_235);
                        return p_43;


                    }

                    ;
                    ;
                }

                ;
                ;
                for (g_75 = 1; (g_75 <= 4); g_75 += 1)
                {
                    for (p_40 = 1; (p_40 <= 4); p_40 += 1)
                    {
                        const short *l_368 = &g_54;
                        int i, j;
                        (*l_345) = (g_313[(p_40 + 1)][p_40] & 0UL);
                        (*l_334) ^= (p_39 || l_367[2][2][2]);
                        return l_368;



                    }
                    for (p_40 = 0; (p_40 <= 4); p_40 += 1)
                    {
                        return p_43;



                    }
                }
                return &g_54;



            }
            if (((*l_345) &= 0x217F3F56L))
            {
                unsigned char l_377 = 0xA3L;
                p_39 ^= 0x6D6B8274L;
                if (l_319)
                {
                    short *l_378[9][1] = {{&l_372}, {&l_372}, {&l_372}, {&l_372}, {&l_372}, {&l_372}, {&l_372}, {&l_372}, {&l_372}};
                    int l_379 = 0xA83970FAL;
                    unsigned *l_380 = &g_134[2];
                    int i, j;
                    if ((((*l_380) = (l_379 < 0x1B65AA12L)) <= p_40))
                    {
                        (*l_345) = (0x8FC5L && 1UL);
                    }
                    else
                    {
                        (*g_235) = (*g_235);
                    }
                    (*l_182) = 0x5F7B8F47L;
                }
                else
                {
                    int *l_383 = &g_147[0][9];
                    for (p_42 = 21; (p_42 < (-4)); --p_42)
                    {
                        (*g_235) = l_383;

                        ;
                        (*g_235) = (void*)0;

                        ;
                        (*g_235) = &p_39;

                        ;
                        (*g_235) = &p_39;
                    }
                }
            }
            else
            {
                char l_396[4] = {0x4EL, (-10L), 0x4EL, (-10L)};
                unsigned l_397 = 0UL;
                unsigned short ***l_400 = &g_266[4];
                short *l_415[5];
                int l_429 = 0L;
                int i;
                for (i = 0; i < 5; i++)
                    l_415[i] = &g_64;
                for (g_64 = (-12); (g_64 <= 25); g_64 = safe_add_func_uint32_t_u_u(g_64, 4))
                {
                    unsigned *l_386 = &g_313[2][0];
                    char *l_391[3][3] = {{(void*)0, (void*)0, &g_19}, {(void*)0, (void*)0, &g_19}, {(void*)0, (void*)0, &g_19}};
                    int l_393[9][7] = {{0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}, {0xEAF65B7BL, 0x41D894BFL, (-1L), 0x35F22573L, (-4L), 0xC0FE5F93L, 0xCAF53D49L}};
                    int i, j;
                    (*l_182) = (((*l_386) &= p_42) <= (+((safe_sub_func_uint16_t_u_u(((((-1L) && ((safe_mod_func_int32_t_s_s((((**l_263) = (((p_40 > (p_42 < (l_392 = ((*l_330) &= g_84)))) != (1L && l_393[8][0])) ^ ((l_393[8][0] > (!(safe_add_func_int8_t_s_s(g_54, (*l_182))))) < l_396[0]))) & l_397), 1L)) ^ p_40)) && p_40) > (-9L)), 0xA48CL)) ^ (*l_182))));
                    for (p_40 = 0; (p_40 > 6); p_40++)
                    {
                        (*l_334) |= ((+g_269) == (*l_345));
                        (*l_182) = p_40;
                        p_39 = p_39;
                        (*g_235) = l_345;

                        ;
                    }

                    ;
                    if (p_40)
                    {
                        return &g_64;



                    }
                    else
                    {
                        unsigned l_408 = 0xDDCED69EL;
                        (*g_235) = &p_39;

                        ;
                        (*l_182) = (((*l_386) |= (l_400 == l_401)) & (((((safe_rshift_func_int16_t_s_s((p_39 | (l_393[8][0] || (*l_345))), 7)) && ((8UL >= (safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_408, ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(255UL, p_42)), 1L)) != p_39))), l_367[5][2][3]))) >= l_319)) & l_396[1]) <= p_40) < 6L));
                        (*g_235) = &p_39;
                        (*g_235) = &l_392;

                        ;
                    }

                    ;
                }

                ;
                if ((p_39 && l_375))
                {
                    int l_422 = (-1L);
                    g_277 ^= ((*l_334) = (safe_sub_func_uint32_t_u_u(((g_78[1] || func_47(l_367[0][1][3], &g_64, ((**l_342) = l_415[4]), g_134[2], (g_416 = l_329))) ^ ((*l_182) = (safe_sub_func_int32_t_s_s((((((((*l_337) = p_40) || (safe_add_func_int16_t_s_s((l_421 != &l_264), p_40))) >= p_39) ^ g_313[8][2]) || 1L) <= p_39), l_422)))), g_321)));

                    ;
                }
                else
                {
                    l_429 = ((safe_lshift_func_uint8_t_u_s(((g_314[1][1] ^ (safe_unary_minus_func_int8_t_s(((*g_282) != (*g_282))))) | (*l_345)), func_47((*l_182), (***l_343), (*l_253), ((l_426[0] == (void*)0) >= 9L), &g_54))) >= l_428);
                }

                ;
            }

            ;
            ;
            (*l_182) ^= p_42;
        }
        else
        {
            short **l_441 = &g_416;
            int l_457 = (-1L);
            for (g_97 = 0; (g_97 <= 3); g_97 += 1)
            {
                int *l_460 = (void*)0;
                int i;
                (*g_235) = (void*)0;

                ;
                (*g_235) = &p_39;

                ;
                (*l_182) = (safe_add_func_int16_t_s_s(0x48DCL, (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(4294967290UL, ((**g_235) = g_134[g_97]))) >= (((*g_416) |= g_134[(g_97 + 1)]) & ((*l_352) |= l_436))), 1))));
                for (p_39 = 3; (p_39 >= 0); p_39 -= 1)
                {
                    unsigned l_449[8][8][4] = {{{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}, {{0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}, {0xD8602408L, 0UL, 0x076DD908L, 4294967295UL}}};
                    unsigned char **l_452 = (void*)0;
                    int *l_470 = (void*)0;
                    int *l_471 = &l_457;
                    int i, j, k;
                    (*l_182) = (safe_rshift_func_uint16_t_u_s(p_40, 12));
                    if ((safe_add_func_int32_t_s_s(0x49E4FD60L, (&p_43 != &p_41))))
                    {
                        unsigned char ***l_453 = &g_282;
                        int l_456 = 0xC61E6A88L;
                        if ((*l_182))
                            break;
                        l_441 = (void*)0;

                        ;
                        (*l_182) = (safe_lshift_func_int8_t_s_u(l_444, (safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u(((g_448 < (((*l_264) = 0xA0F8L) == ((l_449[2][3][2] < ((*l_352) |= ((((*l_453) = l_452) == &g_283) || ((((*g_416) != ((safe_lshift_func_uint16_t_u_s(0x0E7CL, l_456)) ^ p_40)) || (**g_235)) < l_457)))) & 0xACL))) <= l_449[1][1][2]), 4294967295UL))))));

                        ;
                    }
                    else
                    {
                        unsigned l_459[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_459[i] = 0x6EC48142L;
                        l_392 |= l_458;
                        if (l_459[3])
                            break;
                        l_460 = (*g_235);

                        ;
                    }
                    for (g_75 = 0; (g_75 <= 4); g_75 += 1)
                    {
                        int l_463 = 2L;
                        int i, j, k;
                        l_463 = (((l_367[(g_75 + 2)][(g_97 + 3)][g_97] && 0x49L) && l_449[2][3][2]) != (((*l_330) ^= (safe_sub_func_uint32_t_u_u(p_39, p_40))) != 0x64L));
                        if (l_457)
                            continue;
                        g_277 = ((safe_mod_func_uint32_t_u_u(0UL, p_40)) != (1UL && ((l_367[g_97][(p_39 + 1)][g_97] |= g_321) == (((+((l_392 = ((*l_182) &= 7L)) > (((0x96L > l_463) || (safe_rshift_func_int16_t_s_s(((l_457 > (((g_84 && 7UL) & p_40) <= p_40)) ^ 0xECL), 14))) | p_42))) | 0x1A1E6C8FL) | 0x44L))));
                    }
                    (*l_471) = ((*l_182) = (safe_lshift_func_uint8_t_u_u((p_40 >= l_449[2][3][2]), (4294967292UL & l_457))));
                }

                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
    }

    ;

    ;
    ;
    return p_41;



}







static int func_47(short p_48, short * p_49, short * p_50, char p_51, short * p_52)
{
    short **l_67 = &g_30;
    short ***l_66 = &l_67;
    int l_70 = 0x114FF6A9L;
    int *l_79 = &l_70;
    (*l_66) = &p_52;

    ;
    if ((safe_rshift_func_uint8_t_u_u((l_70 >= (*p_52)), (~255UL))))
    {
        int l_73 = 0x9CDE89C6L;
        unsigned short *l_74 = &g_75;
        short l_131 = 0xB816L;
        int **l_140 = &l_79;
        if (((safe_lshift_func_int16_t_s_u((*p_52), ((*l_74) ^= l_73))) ^ ((*p_52) ^ (l_70 & g_54))))
        {
            short l_76 = 0x1BC6L;
            int **l_80 = (void*)0;
            int *l_82 = (void*)0;
            int **l_81 = &l_82;
            g_77 = l_76;
            g_78[1] = 0xAC77ACAEL;
            l_79 = &l_70;
            (*l_81) = (l_79 = (void*)0);

            ;
        }
        else
        {
            char l_85 = (-3L);
            unsigned short *l_95 = (void*)0;
            int l_100 = 3L;
            (*l_79) = p_51;
            for (l_73 = 4; (l_73 >= 0); l_73 -= 1)
            {
                short *l_83[1];
                char l_86 = 0x8DL;
                unsigned l_123 = 0UL;
                int l_124 = (-5L);
                char *l_139 = &l_86;
                int i;
                for (i = 0; i < 1; i++)
                    l_83[i] = (void*)0;
                if ((g_78[l_73] ^ ((((p_48 <= g_78[l_73]) && ((g_64 >= (p_51 >= 0xBCL)) ^ ((g_84 &= (0L >= g_54)) ^ (0xE879L || l_85)))) <= (-10L)) && g_78[l_73])))
                {
                    int *l_96 = &g_97;
                    (*l_79) |= ((~((l_86 & ((p_51 ^ g_78[l_73]) > p_48)) >= g_78[l_73])) <= (1UL < (((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0xCD2AL, 9)), (~(safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((l_95 == &g_75), 5UL)), 10))))) == l_73) ^ 0x526DL)));
                    (*l_96) &= ((*l_79) & g_19);
                }
                else
                {
                    unsigned l_98 = 6UL;
                    for (g_77 = 0; (g_77 <= 4); g_77 += 1)
                    {
                        int l_99 = 1L;
                        int i;
                        if (g_78[g_77])
                            break;
                        l_99 |= l_98;
                        (*l_79) ^= ((void*)0 != &p_48);
                    }
                }
                for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                {
                    for (g_64 = 0; (g_64 <= 0); g_64 += 1)
                    {
                        l_100 = 1L;
                    }
                    if ((*l_79))
                        break;
                }
                for (g_77 = 0; (g_77 <= 4); g_77 += 1)
                {
                    unsigned char l_114 = 0x73L;
                    if (((safe_unary_minus_func_int16_t_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((((safe_add_func_uint16_t_u_u(((*l_74) = 1UL), (l_100 && ((safe_rshift_func_uint8_t_u_u(l_114, 5)) < (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((!g_97) == p_48), 0L)), 0xB88FC909L)), (~(l_114 | (safe_mod_func_int32_t_s_s((-9L), 4294967292UL)))))))))) < (-1L)) | p_51) || (*l_79)) < 5L), g_77)), (*p_52))), l_114)) || 0x1EL), 9UL)))) <= 0x3EL))
                    {
                        unsigned *l_132 = (void*)0;
                        unsigned *l_133[4][1];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_133[i][j] = &g_134[2];
                        }
                        l_124 = ((~0x822E8431L) | (~l_123));
                        g_97 = (p_48 & 0xAAL);
                        (*l_79) = (safe_lshift_func_uint16_t_u_u((p_51 == (p_48 != (g_134[0] = (safe_mod_func_int16_t_s_s(l_114, (safe_mod_func_int8_t_s_s(g_97, l_131))))))), p_48));
                    }
                    else
                    {
                        if (g_75)
                            break;
                    }
                }
                (*l_79) &= (l_124 < (safe_add_func_int8_t_s_s(((*l_139) = ((safe_sub_func_uint32_t_u_u(g_77, ((-1L) || 0x2D3D223BL))) | g_77)), g_64)));
            }
        }

        ;
        (*l_140) = &g_97;

        ;
    }
    else
    {
        int **l_141[4] = {&l_79, &l_79, &l_79, &l_79};
        unsigned short *l_143[6][10][1] = {{{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}, {{&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}, {&g_75}}};
        unsigned char *l_144 = &g_77;
        int i, j, k;
        g_142 = &g_97;

        ;
        (*g_142) = (((g_75 = g_64) <= ((-4L) == ((*l_144) = 0x57L))) | g_134[0]);
        g_142 = (void*)0;

        ;
        l_79 = &g_97;

        ;
    }

    ;
    return g_78[1];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_134[i], "g_134[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_147[i][j], "g_147[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_313[i][j], "g_313[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_314[i][j], "g_314[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_775[i], "g_775[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_832[i][j][k], "g_832[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1173, "g_1173", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1222, "g_1222", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
