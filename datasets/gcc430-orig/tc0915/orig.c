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



static unsigned g_17[10] = {4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL, 4294967291UL};
static int *g_29[1] = {(void*)0};
static int g_48 = (-4L);
static char g_72 = 0x3AL;
static int **g_74 = &g_29[0];
static int ***g_73[8] = {&g_74, &g_74, &g_74, &g_74, &g_74, &g_74, &g_74, &g_74};
static int g_106 = 0x7A3F1713L;
static unsigned char g_123 = 0x7EL;
static int g_127 = 1L;
static int *g_128 = (void*)0;
static int *g_129 = &g_106;
static int g_136 = 0L;
static int *g_163 = &g_127;
static int **g_162 = &g_163;
static char g_175[1][10] = {{(-10L), 0L, (-10L), 0L, (-10L), 0L, (-10L), 0L, (-10L), 0L}};
static unsigned char g_188 = 1UL;
static unsigned short g_190 = 65534UL;
static int g_251 = (-10L);
static unsigned g_293[2][5][9] = {{{0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}}, {{0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}, {0x5E8387B1L, 0x83D9F478L, 0x262B0756L, 0xEFF2212AL, 0xF1C4D4D5L, 0x1C41A086L, 0xF1C4D4D5L, 0xEFF2212AL, 0x262B0756L}}};
static short g_326 = 0x84F2L;
static char *g_329[7] = {(void*)0, &g_72, (void*)0, &g_72, (void*)0, &g_72, (void*)0};
static char **g_328 = &g_329[5];
static char ***g_327 = &g_328;
static int *g_373 = &g_48;
static int g_402 = 1L;
static unsigned short *g_404[4] = {&g_190, &g_190, &g_190, &g_190};
static unsigned short **g_403 = &g_404[1];
static short g_451 = 1L;
static int **g_491 = &g_129;
static int *g_531[9] = {&g_402, &g_402, &g_402, &g_402, &g_402, &g_402, &g_402, &g_402, &g_402};
static int g_563[2][5] = {{0x2D4A2E9BL, 1L, 0x75B76DDDL, 0x75B76DDDL, 1L}, {0x2D4A2E9BL, 1L, 0x75B76DDDL, 0x75B76DDDL, 1L}};
static int *g_564[10][9][2] = {{{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}, {{&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}, {&g_136, &g_402}}};
static int ***g_584 = (void*)0;
static int g_590 = 0xBFB975A8L;
static short g_614[8][4] = {{(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}, {(-5L), (-1L), (-5L), (-1L)}};
static short *g_640 = &g_614[1][0];
static short **g_639 = &g_640;
static short ***g_638[1] = {&g_639};
static unsigned short g_644 = 65535UL;
static unsigned *g_667 = &g_293[0][4][2];
static unsigned short g_701 = 0x8287L;
static unsigned g_782 = 0x325DC456L;
static unsigned char *g_830[4][7] = {{(void*)0, &g_123, &g_188, &g_123, (void*)0, &g_123, (void*)0}, {(void*)0, &g_123, &g_188, &g_123, (void*)0, &g_123, (void*)0}, {(void*)0, &g_123, &g_188, &g_123, (void*)0, &g_123, (void*)0}, {(void*)0, &g_123, &g_188, &g_123, (void*)0, &g_123, (void*)0}};
static unsigned char **g_829 = &g_830[3][3];



static unsigned func_1(void);
static unsigned short func_2(char p_3, int p_4);
static char func_10(unsigned p_11, unsigned p_12);
static int * func_18(unsigned p_19, unsigned p_20, int * p_21, unsigned p_22);
static int * func_24(int * p_25, unsigned p_26, unsigned short p_27, short p_28);
static unsigned func_32(unsigned short p_33, int * p_34);
static unsigned short func_35(int * p_36, unsigned p_37, int * p_38, int * p_39, char p_40);
static int * func_41(unsigned p_42);
static int * func_43(unsigned short p_44, unsigned p_45);
static short func_52(int p_53, int ** p_54, int * p_55);
static unsigned func_1(void)
{
    int l_15 = (-1L);
    char l_16 = 0x1DL;
    int *l_801[7][6] = {{&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}, {&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}, {&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}, {&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}, {&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}, {&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}, {&g_590, &g_590, (void*)0, &g_563[0][2], &g_590, &g_563[0][2]}};
    char l_802 = 4L;
    unsigned l_803 = 4294967295UL;
    int l_870 = 0x45344CCBL;
    int l_891 = 0x3C0AC274L;
    int i, j;
    l_870 = (func_2((safe_add_func_int8_t_s_s((((*g_640) = (safe_rshift_func_int16_t_s_s((((safe_unary_minus_func_int8_t_s(((func_10((safe_lshift_func_int8_t_s_s((!l_15), 7)), (0x7BFFL ^ l_16)) && g_127) || l_16))) >= l_15) , (*g_640)), 14))) != l_802), 1UL)), l_803) , 0x226A817FL);

    ;


    if (l_16)
        goto lbl_874;
lbl_874:
    for (g_106 = 0; (g_106 == (-9)); g_106 = safe_sub_func_uint8_t_u_u(g_106, 7))
    {
        char l_873 = (-1L);
        if (l_873)
            break;
    }
    for (g_136 = 0; (g_136 < 17); g_136++)
    {
        int *l_877 = &l_870;
        short l_892 = (-7L);
        l_801[6][4] = l_877;


        for (g_48 = (-2); (g_48 > 26); g_48 = safe_add_func_int32_t_s_s(g_48, 9))
        {
            char l_880 = 0xA4L;
            unsigned char l_888 = 4UL;
            unsigned l_889 = 4294967295UL;
            unsigned char *l_890 = &l_888;
            int *l_893 = &l_891;
            (*g_491) = l_893;

            ;
            (*g_491) = l_893;
        }


        return g_563[0][1];


    }
    return g_614[2][1];
}







static unsigned short func_2(char p_3, int p_4)
{
    unsigned l_804 = 0x2076F79BL;
    int *l_805 = (void*)0;
    short l_808 = (-1L);
    unsigned short ***l_815[5] = {&g_403, &g_403, &g_403, &g_403, &g_403};
    unsigned short ***l_816 = &g_403;
    unsigned **l_821 = &g_667;
    unsigned char **l_831 = &g_830[0][0];
    short *l_834 = &l_808;
    short l_838 = 0x67F5L;
    int l_841 = 0L;
    int i;
    (*g_491) = l_805;

    ;
    (*g_491) = &p_4;

    ;
    for (g_188 = (-17); (g_188 <= 53); g_188 = safe_add_func_int16_t_s_s(g_188, 5))
    {
        unsigned **l_820 = &g_667;
        unsigned ***l_819 = &l_820;
        int l_822 = 0xD870F38BL;
        char *l_825 = &g_175[0][1];
        unsigned l_828 = 0x0654D980L;
        if (l_808)
            break;
        for (g_326 = 0; (g_326 < 22); ++g_326)
        {
            for (p_4 = 0; (p_4 > 23); p_4++)
            {
                return p_3;


            }
        }
        l_828 = (0xB7E6L && (safe_lshift_func_int16_t_s_s(p_3, (((l_816 = l_815[3]) == (void*)0) & (l_822 = (safe_mod_func_uint16_t_u_u(((((*l_819) = &g_667) != l_821) > l_822), (safe_mod_func_int8_t_s_s(((*l_825) = 0x8BL), ((safe_rshift_func_uint16_t_u_s(p_4, 15)) , l_822))))))))));
        return p_4;


    }
    for (g_106 = 1; (g_106 <= 9); g_106 += 1)
    {
        int l_837 = (-1L);
        short *l_839 = &l_808;
        short *l_840 = (void*)0;
        int *l_842 = &g_590;
        unsigned short ***l_869 = &g_403;
        int i;
        (*g_373) = g_17[g_106];
        l_831 = g_829;
        if (((l_841 = (g_701 , ((*l_839) = (safe_rshift_func_int16_t_s_s(((p_3 , g_17[g_106]) > ((l_834 = ((*g_639) = &l_808)) == &l_808)), ((safe_mod_func_uint32_t_u_u(((((l_837 = (l_804 , p_3)) > l_838) <= p_3) | p_3), 0x4F026039L)) == g_17[g_106])))))) && 0x6D6CL))
        {
            unsigned short l_845[6] = {65535UL, 0x5268L, 65535UL, 0x5268L, 65535UL, 0x5268L};
            unsigned char *l_848 = &g_188;
            int l_861 = 0xBB74E8CBL;
            int i;
            l_842 = func_18((*g_667), p_3, &l_841, ((p_4 , p_3) != l_837));

            ;
            ;
            l_845[2] = (safe_lshift_func_uint8_t_u_s(((!p_3) , p_4), 0));
            l_861 = (safe_sub_func_int8_t_s_s((((p_3 = p_3) && 0xF5L) & ((*l_848) = 0xDAL)), (safe_lshift_func_uint16_t_u_u((((**g_639) = p_4) || ((((p_4 = (p_4 < (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_u(p_4, (l_837 >= ((*g_373) = ((((safe_mod_func_uint8_t_u_u(((~l_845[0]) && g_17[g_106]), p_4)) || p_4) || 4294967290UL) >= p_4))))) , (-9L)) ^ p_4), l_845[2])), 0)), 0x9CL)))) > g_136) != 65531UL) == 1UL)), 2))));
            if (p_4)
                continue;
        }
        else
        {
            unsigned short l_864 = 65530UL;
            p_4 = ((((((safe_rshift_func_int16_t_s_u(l_864, (safe_add_func_int16_t_s_s(((p_4 <= (~p_4)) , (p_4 , p_3)), (safe_sub_func_uint8_t_u_u(((void*)0 == l_869), p_3)))))) <= 0x6D7DL) < 255UL) | l_864) , 0x80L) != p_4);
        }

        ;
        ;
        for (g_72 = 0; (g_72 <= 3); g_72 += 1)
        {
            for (l_841 = 0; l_841 < 1; l_841 += 1)
            {
                g_638[l_841] = &g_639;
            }
        }
    }

    ;
    ;
    return p_3;



}







static char func_10(unsigned p_11, unsigned p_12)
{
    int *l_23 = (void*)0;
    char l_800 = 0xEDL;
    for (p_11 = 0; (p_11 <= 9); p_11 += 1)
    {
        int *l_135 = &g_136;
        int i;
    }
    (*g_491) = func_43(p_11, (+(*g_667)));

    ;
    ;
    return l_800;
}







static int * func_18(unsigned p_19, unsigned p_20, int * p_21, unsigned p_22)
{
    int *l_799 = (void*)0;
    (*g_491) = (*g_491);
    (*g_491) = l_799;

    ;
    return l_799;


}







static int * func_24(int * p_25, unsigned p_26, unsigned short p_27, short p_28)
{
    unsigned l_296[8][7][4] = {{{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}, {{0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}, {0xB09E32A8L, 0xC164280CL, 4294967295UL, 0xD368114CL}}};
    int l_297 = 0x20751F6BL;
    int l_299[3];
    unsigned l_306 = 0x31412B05L;
    int **l_359 = (void*)0;
    int *l_365 = &g_106;
    int *l_370 = &g_136;
    unsigned char l_372 = 252UL;
    unsigned char l_420[7][3][3] = {{{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}, {{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}, {{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}, {{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}, {{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}, {{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}, {{0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}, {0x89L, 6UL, 9UL}}};
    int *l_422 = &g_136;
    unsigned l_471[1][10] = {{0x68B84ED5L, 0x2A6E3FCCL, 0xE4F31DF2L, 0xE4F31DF2L, 0x2A6E3FCCL, 0x68B84ED5L, 0x2A6E3FCCL, 0xE4F31DF2L, 0xE4F31DF2L, 0x2A6E3FCCL}};
    int **l_499 = &l_370;
    int ****l_568 = &g_73[7];
    int *****l_567 = &l_568;
    char l_586 = (-1L);
    int **l_620 = (void*)0;
    short *l_627 = &g_326;
    short **l_626[4][3][8] = {{{&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}}, {{&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}}, {{&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}}, {{&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}, {&l_627, &l_627, &l_627, &l_627, &l_627, &l_627, (void*)0, &l_627}}};
    int *l_673 = &g_563[0][3];
    int l_691 = 0x8CBE89B6L;
    char l_712[8][10][3] = {{{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}, {{(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}, {(-8L), 8L, 0xA3L}}};
    unsigned short l_718 = 0xF6B9L;
    int l_719 = 7L;
    unsigned short **l_751[9] = {&g_404[1], &g_404[0], &g_404[1], &g_404[0], &g_404[1], &g_404[0], &g_404[1], &g_404[0], &g_404[1]};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_299[i] = 0xC78F9643L;
    if ((((safe_lshift_func_uint16_t_u_s((l_296[2][1][3] = p_27), l_297)) || 9UL) < p_28))
    {
        int l_298 = 0x1B0A25A8L;
        int l_310[10] = {0x8354CC95L, 0x8354CC95L, 0L, 0x8354CC95L, 0x8354CC95L, 0L, 0x8354CC95L, 0x8354CC95L, 0L, 0x8354CC95L};
        int *l_317 = &l_310[8];
        unsigned short l_332 = 0x77B7L;
        unsigned l_345 = 4294967287UL;
        int **l_346[3];
        short l_470 = 1L;
        unsigned *l_472 = &l_345;
        unsigned char *l_478 = &l_420[3][0][1];
        unsigned short ***l_529 = &g_403;
        int *l_539 = &g_402;
        int l_598 = 0x2E07DF4DL;
        int l_623[5] = {0x992DBA5DL, 0x05248C5DL, 0x992DBA5DL, 0x05248C5DL, 0x992DBA5DL};
        unsigned l_665 = 0x0F7A034CL;
        char l_684 = 1L;
        unsigned l_689 = 9UL;
        int ****l_715 = &g_584;
        int l_750 = 0x76D1130FL;
        int i;
        for (i = 0; i < 3; i++)
            l_346[i] = &g_29[0];
        for (l_297 = 0; (l_297 <= 9); l_297 += 1)
        {
            int *l_311 = &g_48;
            int ****l_316 = (void*)0;
            int *l_390 = (void*)0;
            unsigned char l_423 = 3UL;
            for (g_106 = 0; (g_106 <= 1); g_106 += 1)
            {
                unsigned char l_309 = 0xF4L;
                int i;
                p_25 = p_25;
                l_299[0] = (l_298 = g_17[l_297]);
                for (g_136 = 3; (g_136 >= 0); g_136 -= 1)
                {
                    int i, j, k;
                    l_310[8] = (((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((l_296[(g_106 + 4)][(g_106 + 1)][g_136] == (safe_lshift_func_uint16_t_u_u(l_296[(g_106 + 5)][g_106][g_136], 9))), 6)), ((((1L != (l_306 , g_127)) & ((safe_mod_func_uint32_t_u_u((0xAD51L >= 0xDDC8L), (g_175[0][1] & g_72))) , p_27)) > 4UL) || 0xA6L))) , p_27) & l_309);
                    for (g_48 = 0; (g_48 <= 7); g_48 += 1)
                    {
                        return p_25;


                    }
                }
            }
            for (g_188 = 0; (g_188 <= 7); g_188 += 1)
            {
                int *l_331 = &g_251;
                int l_337 = 0x27353276L;
                short l_347 = (-1L);
                int ****l_349 = &g_73[7];
                unsigned char *l_380 = (void*)0;
                unsigned char *l_381[5][1][3] = {{{&g_123, &l_372, &g_123}}, {{&g_123, &l_372, &g_123}}, {{&g_123, &l_372, &g_123}}, {{&g_123, &l_372, &g_123}}, {{&g_123, &l_372, &g_123}}};
                unsigned l_397 = 1UL;
                int *l_398 = (void*)0;
                unsigned *l_399 = (void*)0;
                unsigned *l_400 = (void*)0;
                unsigned *l_401[9][8][3] = {{{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}, {{(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}, {(void*)0, &g_17[3], &l_306}}};
                int l_439 = 0xE4239D20L;
                int i, j, k;
            }
        }
        if (((safe_add_func_int16_t_s_s((0xEE1EL >= (((-1L) > ((safe_add_func_uint8_t_u_u(0x1FL, p_28)) & ((safe_sub_func_int8_t_s_s((((*l_317) & g_251) < l_470), (l_471[0][9] == ((*l_472) = p_26)))) , (*l_422)))) | (*l_370))), p_26)) , (*l_317)))
        {
            unsigned char **l_475 = (void*)0;
            unsigned char *l_477 = &l_420[5][0][1];
            unsigned char **l_476 = &l_477;
            char *l_479 = &g_175[0][1];
            char **l_480 = &l_479;
            int l_489 = (-1L);
            int *l_490[9] = {&g_136, &g_136, (void*)0, &g_136, &g_136, (void*)0, &g_136, &g_136, (void*)0};
            int ****l_496 = &g_73[0];
            int *****l_495 = &l_496;
            unsigned short *l_513 = &l_332;
            unsigned short ***l_528 = (void*)0;
            short *l_607 = &g_451;
            int i;
            p_25 = (((((**g_403) = p_27) < (((((safe_mod_func_int8_t_s_s(p_27, ((*l_317) = p_27))) | 0xFFDCL) , ((*l_476) = (void*)0)) == l_478) == ((*g_328) != ((*l_480) = l_479)))) > (safe_sub_func_int16_t_s_s(p_26, g_175[0][3]))) , (void*)0);

            ;
        }
        else
        {
            unsigned short l_690 = 0xA93FL;
            int ***l_697 = &l_346[1];
            for (l_665 = 0; (l_665 != 21); ++l_665)
            {
                int l_678 = (-4L);
                (*l_499) = (*g_491);
                (*l_317) = ((safe_add_func_int16_t_s_s((**g_639), 0x34AAL)) , ((l_678 != 0x0DE91AD8L) , (func_32((safe_rshift_func_int8_t_s_u(l_678, func_35((((safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s((**g_639), 4)))) , (l_684 < (safe_rshift_func_uint16_t_u_u((p_26 < ((safe_add_func_uint16_t_u_u((p_26 && 248UL), l_689)) , l_678)), l_690)))) , (void*)0), (*l_673), p_25, (*g_491), l_691))), (*g_491)) ^ 3L)));
                if ((*l_370))
                    continue;
            }

            ;
            for (g_326 = 0; (g_326 < (-15)); g_326 = safe_sub_func_int8_t_s_s(g_326, 5))
            {
                short **l_694 = &l_627;
                short ***l_695 = &l_626[2][0][6];
                int ***l_696 = &l_346[2];
                int l_700[8][3][6] = {{{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}, {{0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}, {0L, 0xA5EB1980L, 0xCFE13005L, 0L, 0xAA8FEB24L, 0L}}};
                int i, j, k;
                (*l_695) = l_694;
                g_701 = (((*l_478) = ((l_696 == l_697) && (safe_rshift_func_int16_t_s_s(l_700[0][2][3], 12)))) <= p_27);
            }
        }

        ;
        for (l_332 = 23; (l_332 < 30); l_332 = safe_add_func_uint16_t_u_u(l_332, 6))
        {
            unsigned char l_714 = 0x2FL;
            unsigned l_720 = 0x857E639CL;
            unsigned short ****l_739 = &l_529;
            int l_742 = 0xF65257FBL;
            char *l_745 = &g_72;
            int ****l_756 = &g_584;
            unsigned char **l_757[4][3] = {{&l_478, (void*)0, &l_478}, {&l_478, (void*)0, &l_478}, {&l_478, (void*)0, &l_478}, {&l_478, (void*)0, &l_478}};
            int i, j;
            (*g_491) = p_25;

            ;
        }

        ;
    }
    else
    {
        int *l_766 = &g_136;
        int *l_767 = &g_563[1][4];
        unsigned l_798 = 0UL;
        for (l_586 = 2; (l_586 >= 0); l_586 -= 1)
        {
            unsigned *l_762 = &l_471[0][9];
            int **l_763 = (void*)0;
            int l_784 = 0L;
            short *l_793 = &g_326;
            (*g_373) = (safe_mod_func_int8_t_s_s((-2L), 0xB1L));
        }
    }

    ;
    ;
    return p_25;


}







static unsigned func_32(unsigned short p_33, int * p_34)
{
    short l_148 = (-5L);
    int *l_164 = (void*)0;
    int l_201 = (-1L);
    short l_228 = 0xD68BL;
    int *l_287 = &g_106;
    char *l_290[7] = {&g_175[0][1], &g_175[0][1], &g_175[0][1], &g_175[0][1], &g_175[0][1], &g_175[0][1], &g_175[0][1]};
    char **l_289 = &l_290[2];
    int i;
    for (g_72 = 0; (g_72 > (-21)); g_72 = safe_sub_func_uint32_t_u_u(g_72, 8))
    {
        unsigned short l_139 = 65535UL;
        int *l_160 = &g_127;
        int **l_159 = &l_160;
        int l_200 = 0xB268F716L;
        int *l_213 = &l_200;
        unsigned char l_214 = 0x3EL;
        int ***l_223[2][9][6] = {{{(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}}, {{(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}, {(void*)0, (void*)0, &g_74, (void*)0, (void*)0, &g_74}}};
        unsigned l_234 = 4294967295UL;
        char *l_253 = &g_175[0][1];
        char **l_252[1][10][2] = {{{&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}, {&l_253, &l_253}}};
        int i, j, k;
    }
    for (g_188 = 9; (g_188 >= 41); ++g_188)
    {
        int **l_283 = &l_164;
        int **l_284 = (void*)0;
        int **l_285 = (void*)0;
        int **l_286 = &g_128;
        int **l_288 = &g_129;
        char **l_291 = (void*)0;
        unsigned *l_292 = &g_293[0][4][2];
        (*p_34) = ((((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((*g_162) == (*g_162)) < (func_35((l_287 = ((*l_286) = ((*l_283) = &l_201))), g_190, ((*l_288) = p_34), &l_201, g_106) || g_175[0][1])), l_228)) >= g_72), p_33)) , p_33) , l_289) != l_291);

        ;

        ;
        ;
        (*l_286) = (*l_286);
        return p_33;


    }
    return p_33;
}







static unsigned short func_35(int * p_36, unsigned p_37, int * p_38, int * p_39, char p_40)
{
    (*p_39) = 0x9C901BE3L;
    return g_136;
}







static int * func_41(unsigned p_42)
{
    int **l_133 = (void*)0;
    int *l_134 = &g_48;
    l_134 = func_43(p_42, g_17[2]);

    ;
    ;
    l_134 = l_134;
    return l_134;


}







static int * func_43(unsigned short p_44, unsigned p_45)
{
    unsigned l_46[10][4][4] = {{{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}, {{0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}, {0x4E8160A8L, 0xD49ACB08L, 4294967295UL, 0x1D691704L}}};
    int *l_47 = &g_48;
    int ***l_76 = &g_74;
    int l_101 = 0x36F28A7DL;
    int **l_119 = &l_47;
    int **l_120 = (void*)0;
    int *l_132 = (void*)0;
    int i, j, k;
    if (l_46[7][1][0])
    {
        int **l_49 = &l_47;
        int ****l_75[4][7] = {{&g_73[5], (void*)0, &g_73[0], (void*)0, (void*)0, (void*)0, &g_73[0]}, {&g_73[5], (void*)0, &g_73[0], (void*)0, (void*)0, (void*)0, &g_73[0]}, {&g_73[5], (void*)0, &g_73[0], (void*)0, (void*)0, (void*)0, &g_73[0]}, {&g_73[5], (void*)0, &g_73[0], (void*)0, (void*)0, (void*)0, &g_73[0]}};
        short l_79[2];
        unsigned l_109 = 0x9B249F0FL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_79[i] = 0x12CBL;
        (*l_49) = l_47;
        (**l_49) = (((safe_lshift_func_int16_t_s_u(func_52((p_45 , (safe_add_func_uint32_t_u_u(g_17[9], p_45))), &g_29[0], l_47), 15)) , (((g_73[0] = g_73[0]) == l_76) ^ ((+p_44) >= p_45))) | g_17[0]);
        l_79[1] = ((*l_47) = p_45);
        for (p_44 = 0; (p_44 < 43); p_44++)
        {
            int *l_84[7][4] = {{&g_48, &g_48, (void*)0, &g_48}, {&g_48, &g_48, (void*)0, &g_48}, {&g_48, &g_48, (void*)0, &g_48}, {&g_48, &g_48, (void*)0, &g_48}, {&g_48, &g_48, (void*)0, &g_48}, {&g_48, &g_48, (void*)0, &g_48}, {&g_48, &g_48, (void*)0, &g_48}};
            int *l_113 = &l_101;
            int i, j;
            for (g_48 = 0; (g_48 >= 22); g_48++)
            {
                int *l_88[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_88[i] = &g_48;
                l_47 = l_84[3][1];
                for (p_45 = 0; (p_45 <= 12); p_45 = safe_add_func_uint32_t_u_u(p_45, 8))
                {
                    int l_87 = 0x19522E61L;
                    int l_100 = 0xC4E31865L;
                    if (p_44)
                    {
                        unsigned l_97 = 0xBC7F4BD8L;
                        l_87 = 0x54F1F2BDL;
                        l_84[0][3] = l_88[0];
                        l_101 = (safe_add_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_72, l_97)), 11)), g_72)) < (p_45 && g_72)) < (p_44 != (-9L))) <= (p_44 ^ (l_100 = (l_87 <= 0xCBL)))), l_97));
                    }
                    else
                    {
                        (*l_49) = (*g_74);

                        ;
                        return l_84[3][1];


                    }
                }
                (*l_49) = (*g_74);

                ;
            }
            for (g_48 = 0; g_48 < 2; g_48 += 1)
            {
                l_79[g_48] = 0x8F35L;
            }
            for (p_45 = (-27); (p_45 > 38); p_45 = safe_add_func_uint16_t_u_u(p_45, 4))
            {
                unsigned short l_104 = 0x6B75L;
                int l_110 = 7L;
                for (g_48 = 0; (g_48 <= 3); g_48 += 1)
                {
                    int *l_105[8] = {&g_48, &g_106, &g_48, &g_106, &g_48, &g_106, &g_48, &g_106};
                    int i;
                    l_104 = p_45;
                    for (l_101 = 3; (l_101 >= 0); l_101 -= 1)
                    {
                        if (p_44)
                            break;
                        l_105[2] = (*g_74);
                    }
                    if ((safe_add_func_uint8_t_u_u(l_104, (l_109 <= 0x2DB6L))))
                    {
                        int l_111 = (-1L);
                        l_111 = (p_44 , (l_110 = ((!g_17[6]) <= p_44)));
                        (*l_49) = (void*)0;

                        ;
                        (*l_49) = &l_110;

                        ;
                    }
                    else
                    {
                        int *l_112[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_112[i] = &g_106;
                        l_112[2] = l_105[6];


                    }
                }

                ;
                return l_84[3][1];


            }
            (*l_49) = (**l_76);

            ;
        }

        ;
    }
    else
    {
        int **l_114[2];
        int ***l_118[8][5] = {{&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}, {&l_114[1], &l_114[1], &l_114[1], &l_114[1], &l_114[1]}};
        int l_121[4][10][2] = {{{0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}}, {{0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}}, {{0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}}, {{0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}, {0x39DADE5FL, 0x02D142C5L}}};
        unsigned char *l_122 = &g_123;
        int *l_126[4] = {&g_127, &g_127, &g_127, &g_127};
        unsigned char l_130 = 0x54L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_114[i] = (void*)0;
        l_47 = (*g_74);

        ;
        if (g_72)
            goto lbl_131;
        for (p_44 = 20; (p_44 > 52); p_44 = safe_add_func_uint16_t_u_u(p_44, 8))
        {
            short l_117 = 0x6283L;
            if (l_117)
                break;
        }
lbl_131:
        l_101 = (((func_52((((p_44 & ((*l_122) = ((((*l_76) = l_114[0]) != (l_120 = (l_119 = l_114[0]))) < (l_121[1][5][1] , 0x79FDBB31L)))) < g_127) <= p_45), &l_47, g_129) >= g_127) == l_130) || 1L);

        ;
        ;
        return l_132;


    }

    ;
    return (**l_76);


}







static short func_52(int p_53, int ** p_54, int * p_55)
{
    unsigned short l_58[3][7][1] = {{{65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}}, {{65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}}, {{65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}}};
    int l_59 = 0xAF769BF4L;
    int **l_60 = &g_29[0];
    int ***l_61 = &l_60;
    int l_64 = (-10L);
    unsigned l_67 = 0xE960871EL;
    int *l_68 = (void*)0;
    int *l_69 = (void*)0;
    int *l_70 = &l_59;
    char *l_71 = &g_72;
    int i, j, k;
    l_59 = ((*p_55) = l_58[2][5][0]);
    (*l_61) = l_60;
    (*p_55) = (((*l_71) = (g_17[9] || ((((safe_add_func_uint16_t_u_u(g_17[1], g_17[3])) < ((*p_55) ^ l_64)) , 2L) > (safe_mod_func_int32_t_s_s((((*l_70) = (l_67 , (*p_55))) & 1L), (*p_55)))))) || g_17[9]);
    return p_53;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_175[i][j], "g_175[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_293[i][j][k], "g_293[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_563[i][j], "g_563[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_590, "g_590", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_614[i][j], "g_614[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_782, "g_782", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
