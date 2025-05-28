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



static unsigned g_6 = 0x05DAE5A6L;
static int g_63[9][5][5] = {{{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}, {{0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}, {0xEB41E225L, 0x5A1B5826L, 8L, 0xF7CB2C1DL, 1L}}};
static int * volatile g_69 = &g_63[2][4][3];
static unsigned g_72 = 4294967295UL;
static unsigned g_78 = 4294967288UL;
static unsigned *g_77 = &g_78;
static char g_79 = (-1L);
static short g_82 = 0x7A4AL;
static unsigned g_89 = 0x40678986L;
static int g_119 = 0xF553DE48L;
static short g_134 = (-1L);
static int *g_155 = (void*)0;
static int ** volatile g_154 = &g_155;
static volatile unsigned char g_159 = 0x87L;
static volatile unsigned char * volatile g_158 = &g_159;
static int ***g_174 = (void*)0;
static unsigned char g_190[5] = {9UL, 0x40L, 9UL, 0x40L, 9UL};
static volatile int g_195 = 9L;
static unsigned g_203 = 0xDD2CD65AL;
static unsigned char g_233 = 0xC5L;
static unsigned *g_247[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static unsigned **g_246 = &g_247[7];
static unsigned short g_253 = 0x16B1L;
static unsigned char g_278 = 0xAFL;
static volatile int g_309 = 0x3B48CEB1L;
static int g_343 = 5L;
static int **g_352 = &g_155;
static volatile unsigned g_421 = 4294967290UL;
static unsigned char *g_474[4][6][8] = {{{&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}}, {{&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}}, {{&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}}, {{&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}, {&g_190[1], (void*)0, (void*)0, &g_233, &g_233, (void*)0, (void*)0, &g_190[1]}}};
static unsigned char **g_473 = &g_474[1][4][0];
static unsigned char **g_475 = &g_474[1][4][0];
static unsigned g_510[6] = {0xF0C6B29AL, 0xF0C6B29AL, 0x8EEAB735L, 0xF0C6B29AL, 0xF0C6B29AL, 0x8EEAB735L};
static unsigned short g_538 = 65535UL;
static unsigned short *g_537 = &g_538;
static unsigned g_595 = 0xE7E34BBFL;
static unsigned char g_626 = 0x6DL;
static volatile char g_684 = 0x7DL;
static volatile char *g_683 = &g_684;
static volatile char * volatile * volatile g_682 = &g_683;
static int ***g_687 = &g_352;
static unsigned **g_725 = (void*)0;
static int *g_736 = &g_63[2][4][3];
static int ** volatile g_735 = &g_736;
static unsigned **g_803 = &g_77;
static unsigned **g_805 = &g_77;
static unsigned g_843[6][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
static int g_932 = 0x31958209L;
static volatile short g_951 = 0x3946L;
static volatile short *g_950 = &g_951;
static volatile short **g_949 = &g_950;
static short g_1050 = 1L;
static short g_1119 = 0x6A8CL;
static unsigned g_1162 = 0UL;
static int ** volatile g_1167[7][5][3] = {{{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}, {{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}, {{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}, {{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}, {{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}, {{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}, {{&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}, {&g_736, &g_736, &g_736}}};
static short g_1230[1] = {0x52B8L};
static volatile unsigned *g_1257 = (void*)0;
static volatile unsigned **g_1256 = &g_1257;
static volatile unsigned ***g_1255[10][8] = {{&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}, {&g_1256, &g_1256, &g_1256, &g_1256, &g_1256, (void*)0, &g_1256, (void*)0}};
static volatile unsigned *** volatile * volatile g_1254[7] = {&g_1255[4][2], &g_1255[4][2], &g_1255[4][3], &g_1255[4][2], &g_1255[4][2], &g_1255[4][3], &g_1255[4][2]};
static int ** volatile g_1263 = &g_736;
static unsigned short g_1265 = 65535UL;
static volatile int g_1278 = 0x149676FAL;
static volatile int *g_1277 = &g_1278;
static volatile int **g_1276 = &g_1277;
static volatile int ***g_1275 = &g_1276;
static volatile int ****g_1274 = &g_1275;
static volatile int ***** volatile g_1273 = &g_1274;
static unsigned char g_1291 = 0x09L;



static unsigned char func_1(void);
static short func_2(unsigned p_3, int p_4, unsigned p_5);
static unsigned short func_9(int p_10, unsigned char p_11, unsigned short p_12, unsigned p_13);
static unsigned char func_19(unsigned p_20, unsigned p_21);
static unsigned func_24(short p_25, char p_26, short p_27);
static unsigned char func_29(unsigned p_30, unsigned short p_31, unsigned char p_32, char p_33, int p_34);
static unsigned char func_37(short p_38, unsigned p_39, unsigned p_40, int p_41);
static int func_46(int p_47);
static int func_48(unsigned char p_49, unsigned p_50, unsigned short p_51);
static int func_54(short p_55, unsigned p_56, unsigned p_57, short p_58, int p_59);
static unsigned char func_1(void)
{
    char l_14[7][9] = {{(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}, {(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}, {(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}, {(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}, {(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}, {(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}, {(-2L), (-1L), (-1L), (-1L), (-2L), (-1L), (-1L), (-1L), (-2L)}};
    unsigned *l_60 = (void*)0;
    int l_61 = (-1L);
    unsigned char l_66 = 1UL;
    short l_192 = 0x865AL;
    unsigned *l_1073 = &g_89;
    unsigned char *l_1290[10][4][5] = {{{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}, {{(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}, {(void*)0, &g_1291, (void*)0, &g_1291, (void*)0}}};
    int l_1292 = 0x48CD7B59L;
    int l_1308[7][4][5] = {{{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}, {{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}, {{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}, {{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}, {{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}, {{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}, {{4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}, {4L, 0xF1EAE545L, 4L, (-3L), 4L}}};
    int l_1309 = 0x4F36DF57L;
    int i, j, k;
    l_1308[0][3][2] |= (func_2(((0x0B999FB0L ^ g_6) & g_6), ((l_1292 |= (safe_mod_func_uint16_t_u_u(func_9(l_14[5][7], ((safe_lshift_func_uint16_t_u_u(l_14[5][7], 15)) > ((safe_lshift_func_int16_t_s_u((func_19((safe_rshift_func_uint8_t_u_u((l_14[5][7] >= g_6), 4)), ((*l_1073) = func_24((safe_unary_minus_func_uint8_t_u(func_29(((safe_rshift_func_uint8_t_u_s(func_37((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(func_46(func_48((((safe_add_func_int32_t_s_s(func_54(g_6, (l_61 &= g_6), g_6, l_14[5][2], g_6), g_63[2][3][2])) || g_63[2][4][3]) != g_63[2][4][3]), l_66, l_66)), 0x2BB420BBL)), l_66)), l_66, g_6, g_190[0]), 5)) || 0xB60EL), g_190[3], l_192, l_14[5][7], l_14[1][1]))), l_192, l_66))) > l_192), g_1265)) == g_932)), g_6, g_6), g_203))) == 0x91L), g_1291) >= g_203);
    return l_1309;
}







static short func_2(unsigned p_3, int p_4, unsigned p_5)
{
    int l_1303 = 1L;
    unsigned char *l_1304[8][1][1] = {{{&g_1291}}, {{&g_1291}}, {{&g_1291}}, {{&g_1291}}, {{&g_1291}}, {{&g_1291}}, {{&g_1291}}, {{&g_1291}}};
    int l_1305 = (-1L);
    int l_1306[2];
    int l_1307 = 1L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1306[i] = 9L;
    l_1307 &= (!(safe_sub_func_int16_t_s_s((p_3 > (safe_lshift_func_int8_t_s_s((g_79 = (func_24((*g_950), (((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(0x65L, (l_1305 = ((safe_mod_func_int32_t_s_s(0x558B36FCL, 0x486BAB8FL)) && func_24((~g_79), (l_1303 && p_5), p_4))))), 6)) || p_5) != l_1306[1]), p_4) <= p_4)), p_5))), g_89)));
    return (**g_949);
}







static unsigned short func_9(int p_10, unsigned char p_11, unsigned short p_12, unsigned p_13)
{
    unsigned short l_1268 = 0xF015L;
    int ****l_1271[2][5][5] = {{{&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}}, {{&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}, {&g_174, &g_174, &g_174, &g_687, &g_174}}};
    int *****l_1270 = &l_1271[0][0][0];
    int ******l_1272 = &l_1270;
    unsigned short l_1287 = 0UL;
    unsigned char l_1288 = 3UL;
    int l_1289 = 0x8CF62220L;
    int i, j, k;
    for (g_1050 = 0; (g_1050 <= 14); ++g_1050)
    {
        int l_1269[9][5] = {{0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}, {0x1C4B2B62L, 0L, 0L, 0L, 0x1C4B2B62L}};
        int i, j;
        l_1268 = ((*g_69) = (-10L));
        return l_1269[7][0];
    }
    (*g_352) = &p_10;
    (**g_1276) = ((*g_155) = ((l_1289 & (-8L)) > p_11));
    return g_595;
}







static unsigned char func_19(unsigned p_20, unsigned p_21)
{
    int l_1078 = 6L;
    int l_1085 = 0x6165A8E4L;
    char *l_1089 = &g_79;
    char **l_1088 = &l_1089;
    unsigned l_1103 = 0x149F52CDL;
    int l_1120[6][9][4] = {{{0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}}, {{0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}}, {{0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}}, {{0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}}, {{0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}}, {{0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}, {0x8A25F2B6L, 0x1A6986BFL, 0L, 0x2030A231L}}};
    int ***l_1130 = &g_352;
    unsigned short **l_1180 = &g_537;
    unsigned short ***l_1179 = &l_1180;
    short l_1218[2];
    unsigned ***l_1227 = &g_805;
    unsigned l_1242 = 4294967295UL;
    unsigned l_1243 = 0UL;
    char l_1247 = 1L;
    unsigned *l_1264[8];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1218[i] = 0x5A27L;
    for (i = 0; i < 8; i++)
        l_1264[i] = &g_78;
    l_1085 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((l_1078 || (-1L)) || func_54(((0L ^ (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((**g_805), l_1078)), 1UL)), 3))) && g_190[0]), (p_20 == func_24(l_1078, p_20, l_1078)), p_20, p_21, p_20)), 13)), 7));
    for (g_82 = 19; (g_82 <= 20); g_82 = safe_add_func_uint16_t_u_u(g_82, 9))
    {
        char ***l_1090 = &l_1088;
        int l_1097[5];
        int l_1098 = (-3L);
        unsigned char l_1099 = 248UL;
        char l_1166 = 9L;
        unsigned short l_1181 = 1UL;
        unsigned char l_1199 = 1UL;
        unsigned ***l_1226 = &g_805;
        int *l_1238 = &l_1098;
        unsigned char l_1261 = 8UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1097[i] = 1L;
        if (func_24(l_1078, (((*l_1090) = l_1088) == &g_683), ((safe_add_func_int32_t_s_s(((((**g_682) || (+(safe_rshift_func_int16_t_s_u(l_1085, (p_20 > func_24(p_21, (safe_mod_func_int16_t_s_s(0x41BDL, (((l_1098 ^= l_1097[0]) == 0x90392724L) | l_1097[2]))), (*g_950))))))) != l_1099) != l_1097[0]), 0xE76BB7BAL)) < l_1097[3])))
        {
            int *l_1100[6][7][6] = {{{&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}}, {{&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}}, {{&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}}, {{&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}}, {{&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}}, {{&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}, {&g_63[6][0][3], &l_1098, &l_1098, &g_63[2][4][3], &g_343, &g_63[0][0][1]}}};
            int l_1144 = 0L;
            unsigned **l_1195 = (void*)0;
            unsigned short l_1215 = 0xF756L;
            unsigned ***l_1217 = &g_725;
            unsigned ****l_1216 = &l_1217;
            unsigned char l_1219 = 5UL;
            short *l_1221 = (void*)0;
            short **l_1220 = &l_1221;
            int i, j, k;
            if ((l_1085 |= p_21))
            {
                int *l_1109 = &l_1098;
                unsigned char l_1114 = 0x3FL;
                for (l_1085 = (-3); (l_1085 == (-14)); l_1085 = safe_sub_func_int8_t_s_s(l_1085, 4))
                {
                    int l_1106 = 0x492D5A19L;
                    if (l_1103)
                    {
                        short *l_1115 = &g_1050;
                        short *l_1116 = &g_134;
                        short *l_1117 = (void*)0;
                        short *l_1118[8] = {&g_1119, &g_1119, &g_1119, &g_1119, &g_1119, &g_1119, &g_1119, &g_1119};
                        int i;
                        (*l_1109) = ((((0x22D676F6L | (!(safe_add_func_uint32_t_u_u((*g_77), (*g_77))))) & func_24(l_1106, ((*l_1089) = ((safe_rshift_func_uint16_t_u_s(l_1097[0], (l_1120[3][2][0] = ((l_1109 == l_1100[1][3][0]) || (safe_div_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_20, ((*l_1116) = ((*l_1115) = func_37((*l_1109), p_20, l_1099, l_1114))))), p_21)))))) && p_21)), l_1106)) && p_21) <= p_21);
                        return (*g_158);
                    }
                    else
                    {
                        int l_1121 = 0x3FBDA009L;
                        if (l_1121)
                            break;
                    }
                }
            }
            else
            {
                int ***l_1131 = &g_352;
                unsigned short *l_1132 = (void*)0;
                unsigned **l_1192 = &g_77;
                int l_1196 = 0x5687CA95L;
                for (g_684 = 0; g_684 < 9; g_684 += 1)
                {
                    for (g_538 = 0; g_538 < 5; g_538 += 1)
                    {
                        for (l_1103 = 0; l_1103 < 5; l_1103 += 1)
                        {
                            g_63[g_684][g_538][l_1103] = 0x389F38CBL;
                        }
                    }
                }
                if (func_54((*g_950), p_20, func_24(((safe_add_func_int32_t_s_s((+p_20), (((((((g_1119 == ((p_20 < 0xEDAFC0FBL) <= (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_253, 7)), (g_203 > ((((g_538 = ((safe_add_func_uint16_t_u_u((l_1130 == l_1131), 0L)) > l_1097[0])) > p_21) & p_21) < p_21)))))) != l_1099) == p_20) < p_21) | g_190[1]) || p_20) | l_1099))) ^ 0x198AL), p_20, p_21), p_21, p_20))
                {
                    int l_1135 = 1L;
                    l_1144 = (safe_lshift_func_uint8_t_u_u((l_1135 >= (safe_add_func_uint32_t_u_u(((**g_805) &= (&p_20 == &p_20)), p_20))), (safe_add_func_uint32_t_u_u((g_595 && ((*g_950) || (safe_sub_func_uint8_t_u_u(((*g_683) & (safe_sub_func_int8_t_s_s((p_20 <= 0x003E32A0L), 0xD3L))), 0xA2L)))), 0x37811411L))));
                    if (p_20)
                        break;
                }
                else
                {
                    int l_1163 = 0x3C9F0AEFL;
                    short *l_1164 = &g_1050;
                    short l_1165[5][10] = {{6L, 0L, 6L, 0x109AL, (-1L), (-1L), 1L, (-7L), (-2L), 0xDAB4L}, {6L, 0L, 6L, 0x109AL, (-1L), (-1L), 1L, (-7L), (-2L), 0xDAB4L}, {6L, 0L, 6L, 0x109AL, (-1L), (-1L), 1L, (-7L), (-2L), 0xDAB4L}, {6L, 0L, 6L, 0x109AL, (-1L), (-1L), 1L, (-7L), (-2L), 0xDAB4L}, {6L, 0L, 6L, 0x109AL, (-1L), (-1L), 1L, (-7L), (-2L), 0xDAB4L}};
                    int l_1182[7] = {0x7C7AEA1CL, 0x7C7AEA1CL, (-1L), 0x7C7AEA1CL, 0x7C7AEA1CL, (-1L), 0x7C7AEA1CL};
                    unsigned **l_1193 = &g_77;
                    int i, j;
                    for (l_1098 = 0; (l_1098 == 20); l_1098 = safe_add_func_uint32_t_u_u(l_1098, 7))
                    {
                        (**l_1130) = &l_1097[0];
                        if (p_20)
                            break;
                    }
                    if ((((**g_805) == p_21) == ((((safe_div_func_int32_t_s_s(func_24(((func_24((*g_950), func_24(((*l_1164) ^= (safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((p_21 > (safe_lshift_func_uint16_t_u_s((l_1097[0] = p_21), ((safe_div_func_uint8_t_u_u(p_21, ((((safe_mod_func_uint8_t_u_u(func_54(g_1162, (**g_805), l_1098, g_843[2][0], l_1098), (-2L))) ^ l_1099) <= 255UL) && l_1163))) <= p_20)))), (*g_77))), l_1163)), 4))))), p_20, p_21), g_253) | l_1165[4][5]) && 0xBCB2L), p_20, l_1166), l_1165[3][8])) > (-1L)) || p_20) <= p_20)))
                    {
                        int **l_1168 = &g_736;
                        (*l_1168) = ((*g_352) = &l_1144);
                        l_1182[5] ^= (safe_mod_func_int32_t_s_s(((***l_1130) = (safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((l_1099 == (*g_77)), (+(l_1097[1] = ((l_1179 == (void*)0) ^ ((g_233 <= func_54((**g_949), (*g_77), (***l_1130), p_20, (**l_1168))) & l_1097[0])))))) <= l_1099), l_1181)), (**g_352))), p_20))), l_1163));
                    }
                    else
                    {
                        int l_1187 = 1L;
                        (*g_69) = func_54((0L || (func_54((safe_lshift_func_uint8_t_u_u(func_24(p_21, p_20, p_21), 2)), p_21, (g_203 < (func_54(p_20, l_1187, l_1187, l_1187, l_1187) <= l_1165[4][5])), l_1181, (*g_69)) | 0x31L)), (**g_805), p_20, g_595, p_20);
                        l_1187 = 5L;
                        l_1120[3][2][0] &= (((*g_77) = 4294967289UL) || (p_20 == (safe_rshift_func_uint16_t_u_u(65535UL, 9))));
                    }
                    for (l_1098 = 0; (l_1098 < (-30)); --l_1098)
                    {
                        unsigned ***l_1194[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1194[i] = &g_803;
                        if (p_21)
                            break;
                        l_1196 = (l_1192 != (l_1195 = l_1193));
                        l_1182[3] = (l_1097[0] || 255UL);
                    }
                }
                l_1120[1][4][1] = (p_21 || (safe_lshift_func_uint8_t_u_u(((l_1196 ^= ((p_21 >= l_1199) != (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*g_950) | (safe_rshift_func_int8_t_s_u(p_20, 3))), ((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(65535UL, 13)), 11)), 0)) != (((l_1218[0] |= ((safe_add_func_int32_t_s_s((l_1085 &= (g_63[1][1][0] ^= ((l_1215 != 0UL) == (((void*)0 != l_1216) == p_20)))), 0x8529FCA7L)) != g_253)) != l_1181) <= p_21)))) != l_1219))), 15)))) || (**g_682)), 0)));
                return p_20;
            }
            l_1120[3][2][0] = ((&g_950 != l_1220) || p_21);
        }
        else
        {
            char l_1228 = 0x6CL;
            unsigned char *l_1229[6];
            short *l_1231[6] = {&g_134, &g_134, &g_134, &g_134, &g_134, &g_134};
            unsigned l_1236[6] = {0x2FE371BCL, 4294967290UL, 0x2FE371BCL, 4294967290UL, 0x2FE371BCL, 4294967290UL};
            int l_1239 = (-10L);
            int l_1248 = 0xC1419C22L;
            int i;
            for (i = 0; i < 6; i++)
                l_1229[i] = (void*)0;
            (*g_69) = (((g_1230[0] = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_21, ((*g_950) <= (l_1226 == l_1227)))), (l_1228 < p_20)))) == 0x3FL) == func_54(func_24(l_1228, func_54(g_119, (**g_805), p_21, l_1228, p_20), g_595), l_1181, p_21, p_21, l_1228));
            if (func_54((~(g_134 = l_1181)), p_21, (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((**g_949), p_20)), (p_20 && (&l_1181 == &g_253)))), l_1228, l_1228))
            {
                int *l_1237 = (void*)0;
                if (l_1236[4])
                    break;
                l_1238 = l_1237;
                if (l_1239)
                {
                    unsigned *l_1244 = &l_1242;
                    int l_1249[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1249[i] = (-1L);
                    if (((func_54((g_1119 = 1L), (**g_805), ((*l_1244) = (safe_div_func_uint16_t_u_u(l_1242, l_1243))), ((l_1249[0] = (safe_mod_func_uint8_t_u_u((l_1248 = (((-5L) < 4294967289UL) & ((~((*g_950) && p_21)) & ((p_21 & g_63[6][3][3]) == l_1247)))), 0x2CL))) == g_134), l_1236[4]) == p_20) || p_20))
                    {
                        unsigned ***l_1253 = &g_725;
                        unsigned ****l_1252 = &l_1253;
                        int l_1258 = (-5L);
                        int l_1262 = 0xCDA8DAC5L;
                        l_1262 ^= (safe_add_func_uint16_t_u_u((l_1252 == g_1254[6]), ((p_21 >= (l_1261 = func_54(p_21, p_21, (!l_1258), (l_1248 = (safe_lshift_func_uint8_t_u_s(0xB9L, 4))), l_1249[0]))) | l_1239)));
                    }
                    else
                    {
                        (*g_1263) = ((**l_1130) = &l_1249[0]);
                        (*g_352) = &l_1249[0];
                        (**g_352) ^= 1L;
                        return p_21;
                    }
                }
                else
                {
                    (**l_1130) = ((*g_735) = &l_1248);
                    (*g_352) = (**g_687);
                    (*g_155) ^= 2L;
                }
                if (l_1239)
                    continue;
            }
            else
            {
                return p_21;
            }
        }
        (**g_687) = &l_1097[0];
    }
    l_1085 = ((((**l_1227) = (*g_805)) == l_1264[3]) > (*g_158));
    return p_20;
}







static unsigned func_24(short p_25, char p_26, short p_27)
{
    int *l_884[4] = {(void*)0, &g_63[2][4][3], (void*)0, &g_63[2][4][3]};
    unsigned ***l_916 = &g_246;
    int l_965 = 0x6103AAA2L;
    unsigned l_988 = 0xD315CD96L;
    unsigned l_1020 = 4294967295UL;
    int i;
    for (p_25 = 11; (p_25 == (-14)); p_25--)
    {
        int *l_869 = (void*)0;
        unsigned l_882[7] = {1UL, 0x1888D4BCL, 1UL, 0x1888D4BCL, 1UL, 0x1888D4BCL, 1UL};
        int l_921 = 0xC2899C53L;
        unsigned short l_974[4][10][2];
        unsigned l_1067[3][6][3] = {{{0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}}, {{0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}}, {{0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}, {0xEC2CA74EL, 4294967292UL, 0xEC2CA74EL}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 10; j++)
            {
                for (k = 0; k < 2; k++)
                    l_974[i][j][k] = 1UL;
            }
        }
        for (g_626 = (-2); (g_626 == 56); ++g_626)
        {
            char l_876 = 0x3FL;
            unsigned l_891 = 0xB1991332L;
            int l_898[2][10] = {{9L, 0x6FFC6498L, 0xC031B288L, 0x6FFC6498L, 9L, 0x6FFC6498L, 0xC031B288L, 0x6FFC6498L, 9L, 0x6FFC6498L}, {9L, 0x6FFC6498L, 0xC031B288L, 0x6FFC6498L, 9L, 0x6FFC6498L, 0xC031B288L, 0x6FFC6498L, 9L, 0x6FFC6498L}};
            unsigned char l_911 = 0UL;
            unsigned l_986 = 0x92C8D928L;
            int l_1018 = 0L;
            int *l_1037 = &l_898[0][2];
            unsigned l_1070 = 0UL;
            int i, j;
        }
        l_869 = &l_965;
        l_884[3] = (void*)0;
    }
    return p_26;
}







static unsigned char func_29(unsigned p_30, unsigned short p_31, unsigned char p_32, char p_33, int p_34)
{
    int *l_194 = &g_63[2][2][0];
    int l_234 = 0xA405F353L;
    unsigned *l_245 = &g_89;
    unsigned **l_244 = &l_245;
    int **l_268 = (void*)0;
    int ***l_267 = &l_268;
    unsigned short *l_296 = (void*)0;
    int l_304 = 3L;
    int l_377 = 0x4E14868EL;
    int l_385 = 0x463DE361L;
    char l_395 = 9L;
    int ***l_414 = &g_352;
    unsigned char ***l_477[10][6][4] = {{{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}, {{&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}, {&g_475, (void*)0, &g_473, &g_475}}};
    short l_511 = (-2L);
    int l_574 = 0L;
    char *l_599[6][10] = {{&l_395, &l_395, &g_79, &l_395, &l_395, &l_395, &g_79, &l_395, &l_395, &g_79}, {&l_395, &l_395, &g_79, &l_395, &l_395, &l_395, &g_79, &l_395, &l_395, &g_79}, {&l_395, &l_395, &g_79, &l_395, &l_395, &l_395, &g_79, &l_395, &l_395, &g_79}, {&l_395, &l_395, &g_79, &l_395, &l_395, &l_395, &g_79, &l_395, &l_395, &g_79}, {&l_395, &l_395, &g_79, &l_395, &l_395, &l_395, &g_79, &l_395, &l_395, &g_79}, {&l_395, &l_395, &g_79, &l_395, &l_395, &l_395, &g_79, &l_395, &l_395, &g_79}};
    char **l_598[4][10] = {{&l_599[0][2], &l_599[4][5], &l_599[5][1], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[5][1], &l_599[4][5]}, {&l_599[0][2], &l_599[4][5], &l_599[5][1], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[5][1], &l_599[4][5]}, {&l_599[0][2], &l_599[4][5], &l_599[5][1], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[5][1], &l_599[4][5]}, {&l_599[0][2], &l_599[4][5], &l_599[5][1], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[0][2], &l_599[5][1], &l_599[4][5]}};
    unsigned l_690 = 0x302C98F9L;
    unsigned l_691 = 0UL;
    unsigned ***l_815 = (void*)0;
    unsigned short l_816 = 0x9722L;
    char **l_829 = &l_599[0][2];
    unsigned l_859[5][5] = {{0UL, 4UL, 1UL, 4UL, 0UL}, {0UL, 4UL, 1UL, 4UL, 0UL}, {0UL, 4UL, 1UL, 4UL, 0UL}, {0UL, 4UL, 1UL, 4UL, 0UL}, {0UL, 4UL, 1UL, 4UL, 0UL}};
    int i, j, k;
    for (p_32 = 0; (p_32 <= 4); p_32 += 1)
    {
        int **l_193[1][3][5] = {{{(void*)0, (void*)0, &g_155, &g_155, &g_155}, {(void*)0, (void*)0, &g_155, &g_155, &g_155}, {(void*)0, (void*)0, &g_155, &g_155, &g_155}}};
        unsigned *l_199 = &g_89;
        unsigned l_225 = 0xDE7F64FBL;
        unsigned l_254 = 4294967295UL;
        unsigned short *l_312[3];
        unsigned l_403 = 0xF544D161L;
        short l_454 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_312[i] = &g_253;
        (*g_154) = &p_34;
    }
    if ((&g_475 != l_477[5][5][2]))
    {
        int *l_478 = &g_343;
        char *l_532 = &l_395;
        int *l_554 = &l_377;
        unsigned short **l_560 = &l_296;
        unsigned short l_571 = 0xAF33L;
        unsigned l_572 = 1UL;
        unsigned char l_576 = 7UL;
        l_478 = (void*)0;
        for (p_31 = 0; (p_31 <= 4); p_31 += 1)
        {
            short l_487 = 1L;
            unsigned short l_489 = 0x3140L;
            int l_512 = 0xFCCAE577L;
            int *l_555 = &g_63[1][2][1];
            for (g_134 = 4; (g_134 >= 0); g_134 -= 1)
            {
                int l_488[3][5] = {{0xA20F8656L, 0xA20F8656L, 0x6F2417CCL, 0xEA6E4AB8L, (-6L)}, {0xA20F8656L, 0xA20F8656L, 0x6F2417CCL, 0xEA6E4AB8L, (-6L)}, {0xA20F8656L, 0xA20F8656L, 0x6F2417CCL, 0xEA6E4AB8L, (-6L)}};
                int l_513[9][5][5] = {{{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}, {{0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}, {0x5030865EL, 0x237D9C39L, 1L, 0x0548C225L, 0xB03DB8F9L}}};
                unsigned char l_515 = 0UL;
                int i, j, k;
                (*l_194) |= g_190[g_134];
                for (g_253 = 0; (g_253 <= 3); g_253 += 1)
                {
                    char *l_481 = &g_79;
                    int l_482 = 0x4B96A36FL;
                    unsigned short l_500 = 5UL;
                    unsigned short *l_509 = (void*)0;
                    unsigned **l_526 = &g_247[5];
                    l_488[2][4] &= ((safe_mod_func_int8_t_s_s(((*l_481) = g_72), p_34)) == ((p_33 <= (l_482 & (0x85037E9DL | (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((~(0x0DL & ((void*)0 == &p_32))), l_487)), g_190[g_134]))))) == g_190[g_134]));
                    p_34 = func_54(g_203, (func_54(l_489, ((*g_77) |= (safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(0UL, (((safe_lshift_func_int16_t_s_u((p_32 & ((*l_194) = (0x372EL < (safe_rshift_func_uint8_t_u_s(((l_482 >= p_30) != (safe_div_func_uint8_t_u_u(0xA5L, l_482))), l_482))))), g_78)) != 0xED3FE8A4L) || p_31))) | g_195), p_30))), l_500, g_89, p_31) != 0x56C5L), p_34, p_34, p_31);
                    if ((l_513[6][1][4] &= func_37(p_31, (l_512 = ((safe_sub_func_int8_t_s_s(g_190[g_134], (safe_sub_func_uint32_t_u_u((g_233 <= (l_488[2][4] < (((g_510[5] = ((*l_481) = (safe_lshift_func_int16_t_s_s(func_48(p_32, (*g_77), (l_482 = (8UL | g_78))), p_32)))) == 0xCEL) >= 65535UL))), l_500)))) != l_511)), l_500, l_488[1][4])))
                    {
                        unsigned l_514 = 0x0D3CC4E3L;
                        return l_514;
                    }
                    else
                    {
                        short *l_516 = (void*)0;
                        short *l_517[1][8] = {{&l_511, &l_511, &l_511, &l_511, &l_511, &l_511, &l_511, &l_511}};
                        int l_518 = 0xE4D4F3FDL;
                        unsigned *l_519 = &g_510[3];
                        char **l_531 = &l_481;
                        unsigned short *l_539 = &l_489;
                        int i, j;
                        (*l_194) = func_54((p_34 & p_31), (*g_77), ((*l_245) = p_31), (l_515 && (-1L)), func_54((func_54(p_30, l_488[2][0], ((*l_519) = func_54((g_82 = (l_518 |= l_513[5][0][0])), p_33, p_31, g_203, l_489)), l_513[3][2][1], (*g_69)) < p_34), p_33, l_487, g_72, g_190[g_134]));
                        p_34 = (((*g_77) & ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((void*)0 == &l_511), 3)), ((*g_77) ^ ((l_526 != l_526) >= func_37(l_518, (((((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((*l_531) = &p_33) != l_532) != 0xB07A346CL), p_30)), p_30)) >= 8UL) == l_488[2][4]) & l_512) == p_33), g_190[g_134], l_518))))) < 0UL)) < l_488[2][4]);
                        (*l_194) = (safe_mod_func_int8_t_s_s(func_37(g_6, p_34, (safe_rshift_func_int8_t_s_s(p_32, g_190[g_134])), ((!((*l_539) = ((l_296 != (g_537 = &l_500)) < l_500))) != ((void*)0 == &g_63[2][4][3]))), 0xC9L));
                    }
                }
            }
            for (g_278 = 0; (g_278 <= 4); g_278 += 1)
            {
                int l_546 = 0L;
                int **l_549 = &l_478;
                int i;
                for (g_79 = 7; (g_79 >= 0); g_79 -= 1)
                {
                    for (p_30 = 0; p_30 < 5; p_30 += 1)
                    {
                        g_190[p_30] = 0x44L;
                    }
                }
                for (l_304 = 1; (l_304 <= 4); l_304 += 1)
                {
                    for (g_82 = 0; (g_82 <= 4); g_82 += 1)
                    {
                        return p_34;
                    }
                    for (p_30 = 0; (p_30 <= 3); p_30 += 1)
                    {
                        unsigned l_540 = 4294967295UL;
                        int l_541[7] = {0x92D6F1E8L, 0x92D6F1E8L, (-1L), 0x92D6F1E8L, 0x92D6F1E8L, (-1L), 0x92D6F1E8L};
                        int i;
                        (*l_194) = ((l_541[4] &= (l_512 != l_540)) <= (safe_add_func_uint8_t_u_u(255UL, g_159)));
                    }
                }
                (**l_414) = g_247[(g_278 + 3)];
                for (l_489 = 0; (l_489 <= 4); l_489 += 1)
                {
                    unsigned short *l_550 = &g_538;
                    short *l_553 = &l_511;
                }
            }
            for (l_395 = 3; (l_395 >= 0); l_395 -= 1)
            {
                (*g_352) = &p_34;
                (**l_414) = &p_34;
                for (g_278 = 0; (g_278 <= 4); g_278 += 1)
                {
                    l_555 = l_554;
                }
            }
        }
        for (l_234 = 0; (l_234 <= 6); l_234 = safe_add_func_uint16_t_u_u(l_234, 3))
        {
            short l_573 = 0x794EL;
            unsigned *l_575[2][10][7] = {{{(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}}, {{(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}, {(void*)0, (void*)0, (void*)0, &g_78, &g_78, &g_6, &g_78}}};
            unsigned short l_578 = 0xB73BL;
            unsigned l_610 = 0x7CDC1C22L;
            unsigned **l_669 = &g_77;
            volatile char * volatile * volatile *l_685 = &g_682;
            int ****l_686 = &g_174;
            short *l_692[9] = {&g_134, &g_134, &l_573, &g_134, &g_134, &l_573, &g_134, &g_134, &l_573};
            unsigned l_693 = 0xEA6B1524L;
            int l_707 = 0x30773509L;
            int i, j, k;
            if ((safe_lshift_func_uint8_t_u_s((l_560 == (void*)0), ((l_576 ^= (0x955BL < (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((p_34 > (safe_mod_func_uint32_t_u_u(((*g_77) = p_33), (-1L)))) ^ (func_37((p_32 <= func_54(((safe_sub_func_uint32_t_u_u(((g_309 != (l_571 != p_34)) <= 0x8EB8B534L), g_79)) > 0x44L), p_33, l_572, g_6, (*l_554))), l_573, p_33, l_574) & 9L)), g_233)) | 0x9458L), 0)), 0x879CE2B2L)))) | p_33))))
            {
                unsigned l_577 = 0x240EF5F0L;
                int l_579 = 0x0D3BEB96L;
                l_579 = func_54(g_195, l_577, l_578, p_33, p_34);
                (*l_554) = ((*l_194) &= p_32);
                for (l_385 = 22; (l_385 < (-14)); l_385 = safe_sub_func_uint32_t_u_u(l_385, 3))
                {
                    for (l_304 = 21; (l_304 >= (-24)); --l_304)
                    {
                        (*l_194) = 1L;
                    }
                }
                if (p_30)
                    break;
            }
            else
            {
                unsigned l_591 = 0xD7D351BFL;
                unsigned *l_592 = &g_510[5];
                unsigned *l_593 = (void*)0;
                unsigned *l_594[1];
                int l_596[5][10] = {{(-6L), 0xF7A28A39L, (-1L), 0xF7A28A39L, (-6L), 0xA89854C4L, 9L, 0xF7A28A39L, 0x71CA20C2L, 0xF7A28A39L}, {(-6L), 0xF7A28A39L, (-1L), 0xF7A28A39L, (-6L), 0xA89854C4L, 9L, 0xF7A28A39L, 0x71CA20C2L, 0xF7A28A39L}, {(-6L), 0xF7A28A39L, (-1L), 0xF7A28A39L, (-6L), 0xA89854C4L, 9L, 0xF7A28A39L, 0x71CA20C2L, 0xF7A28A39L}, {(-6L), 0xF7A28A39L, (-1L), 0xF7A28A39L, (-6L), 0xA89854C4L, 9L, 0xF7A28A39L, 0x71CA20C2L, 0xF7A28A39L}, {(-6L), 0xF7A28A39L, (-1L), 0xF7A28A39L, (-6L), 0xA89854C4L, 9L, 0xF7A28A39L, 0x71CA20C2L, 0xF7A28A39L}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_594[i] = &g_595;
                if (((safe_mod_func_int16_t_s_s((((*g_77) > (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_s((((((*l_554) ^= l_591) != func_54(g_233, p_34, (func_37(l_573, ((**l_244) ^= (p_34 <= (p_32 = (l_573 || p_30)))), (l_596[3][0] &= ((*l_592) ^= p_34)), p_34) == 0xD6L), g_203, p_34)) < (*g_77)) || g_190[0]), 3)))), l_591))) || p_32), 1L)) && p_32))
                {
                    short l_597[6][10] = {{3L, 0x7987L, 0x3E86L, (-3L), 0x7987L, 1L, 0x7987L, (-3L), 0x3E86L, 0x7987L}, {3L, 0x7987L, 0x3E86L, (-3L), 0x7987L, 1L, 0x7987L, (-3L), 0x3E86L, 0x7987L}, {3L, 0x7987L, 0x3E86L, (-3L), 0x7987L, 1L, 0x7987L, (-3L), 0x3E86L, 0x7987L}, {3L, 0x7987L, 0x3E86L, (-3L), 0x7987L, 1L, 0x7987L, (-3L), 0x3E86L, 0x7987L}, {3L, 0x7987L, 0x3E86L, (-3L), 0x7987L, 1L, 0x7987L, (-3L), 0x3E86L, 0x7987L}, {3L, 0x7987L, 0x3E86L, (-3L), 0x7987L, 1L, 0x7987L, (-3L), 0x3E86L, 0x7987L}};
                    int i, j;
                    for (p_33 = 3; (p_33 >= 0); p_33 -= 1)
                    {
                        (*l_554) |= l_597[2][0];
                        (**l_414) = &p_34;
                        (***l_414) = 0xF6787409L;
                    }
                    for (g_233 = 0; (g_233 <= 3); g_233 += 1)
                    {
                        p_34 ^= (-4L);
                        (*l_194) ^= 0x411D9644L;
                    }
                    (*l_194) |= p_30;
                }
                else
                {
                    char ***l_600 = &l_598[2][2];
                    unsigned l_601 = 0xC077D0EFL;
                    unsigned char **l_602 = &g_474[1][5][6];
                    int l_628 = 0x05527B5EL;
                    (*l_600) = l_598[2][3];
                    (*g_352) = l_575[1][8][0];
                    if (p_32)
                    {
                        p_34 = l_601;
                        p_34 = ((void*)0 != l_602);
                    }
                    else
                    {
                        int l_607 = 1L;
                        (*g_154) = (*g_154);
                        (*l_554) = ((l_578 & (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(4294967292UL, (l_607 != g_119))) > (*l_554)) || (safe_rshift_func_int8_t_s_u(((l_596[3][0] = (func_48((l_610 & (safe_lshift_func_int8_t_s_s(g_190[1], ((*l_532) ^= l_578)))), l_573, p_33) || (*g_77))) != p_33), p_30))), g_89))) & p_30);
                    }
                    if (((*l_554) = l_601))
                    {
                        unsigned l_625 = 4UL;
                        short *l_627[4][8] = {{&l_573, &g_134, &l_573, &g_134, &l_573, &l_573, &l_573, &l_573}, {&l_573, &g_134, &l_573, &g_134, &l_573, &l_573, &l_573, &l_573}, {&l_573, &g_134, &l_573, &g_134, &l_573, &l_573, &l_573, &l_573}, {&l_573, &g_134, &l_573, &g_134, &l_573, &l_573, &l_573, &l_573}};
                        int i, j;
                        (*g_69) = (safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_601, ((safe_sub_func_int8_t_s_s((0L && ((!(safe_mod_func_uint32_t_u_u(((p_32 |= (*l_194)) & (safe_lshift_func_uint8_t_u_u(func_54((l_628 = ((safe_add_func_uint32_t_u_u(((((g_82 = g_159) || (0xE5L > (0xD3L ^ ((*l_532) &= func_54(p_31, (*g_77), l_578, l_601, (*g_69)))))) | l_625) < 0x1983L), g_626)) > g_278)), (*g_77), p_31, p_34, p_33), 5))), 4294967295UL))) >= p_34)), l_596[3][0])) > 9UL))), 0xB1L));
                        return p_33;
                    }
                    else
                    {
                        unsigned short l_629[8][9];
                        unsigned short *l_649 = &g_253;
                        short *l_650 = &g_82;
                        int *l_651 = &g_343;
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_629[i][j] = 0xC1D6L;
                        }
                        (*l_651) ^= (l_629[1][6] >= ((safe_add_func_uint16_t_u_u((((*l_554) |= (g_119 ^ (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((*l_650) = ((p_32 = (safe_add_func_int32_t_s_s(l_629[1][6], func_48(p_30, ((safe_add_func_int16_t_s_s(g_233, g_72)) < (0UL > ((*l_649) = ((safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s(((9UL != func_37((safe_unary_minus_func_int32_t_s(func_37((safe_div_func_int16_t_s_s(g_190[0], 1UL)), p_31, p_33, p_30))), l_610, l_629[1][6], l_596[2][7])) >= 1L), 0x5D54D649L)), 6)) == g_510[3])))), p_34)))) || 1L)), 0)), p_30)), g_510[5])))) || 4294967295UL), p_34)) < 250UL));
                        if ((*l_194))
                            continue;
                    }
                }
                for (g_233 = 0; (g_233 <= 5); g_233 += 1)
                {
                    short *l_656 = &g_82;
                    int l_659 = (-4L);
                    unsigned short *l_660 = &g_253;
                    int i;
                    (*g_352) = (void*)0;
                    if ((~(safe_sub_func_uint8_t_u_u(g_510[g_233], ((g_510[g_233] >= (*g_69)) < (safe_div_func_int16_t_s_s(((*l_656) = (-6L)), ((*l_660) = (safe_add_func_int32_t_s_s((l_659 = (p_34 < g_233)), ((void*)0 == &g_473)))))))))))
                    {
                        return l_573;
                    }
                    else
                    {
                        return l_573;
                    }
                }
            }
            for (g_89 = 0; (g_89 != 41); g_89 = safe_add_func_uint8_t_u_u(g_89, 5))
            {
                unsigned l_665 = 0xCF9DF461L;
                short *l_668 = &g_134;
                (*l_554) = ((*l_194) = ((-1L) <= func_54(func_54(p_30, p_31, p_33, (safe_sub_func_int16_t_s_s(l_578, p_34)), p_33), p_34, l_578, g_309, l_665)));
                for (g_253 = 0; (g_253 != 39); g_253 = safe_add_func_int32_t_s_s(g_253, 1))
                {
                    (*l_554) = (l_668 != l_668);
                    if ((*l_554))
                        continue;
                }
                for (l_385 = 0; (l_385 <= 1); l_385 += 1)
                {
                    unsigned l_679[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_679[i] = 0x986843C1L;
                    for (p_31 = 0; (p_31 <= 1); p_31 += 1)
                    {
                        int i, j, k;
                        (*g_352) = l_575[l_385][(p_31 + 4)][(l_385 + 2)];
                    }
                    l_669 = &g_77;
                    (*l_554) &= (-3L);
                    for (g_233 = 0; (g_233 <= 1); g_233 += 1)
                    {
                        int l_678 = 0x57D80BF3L;
                        int l_680 = (-4L);
                        int *l_681 = &g_63[7][4][2];
                        (*l_554) = (safe_sub_func_int32_t_s_s((((l_680 &= (safe_sub_func_uint32_t_u_u((p_30 = ((p_34 |= ((((safe_div_func_uint8_t_u_u((&p_31 != &g_253), ((*l_532) = func_48(l_573, p_31, (safe_sub_func_uint32_t_u_u((+(*g_77)), 0xC0A6C708L)))))) < 1L) | (l_679[1] = (func_54(((*l_668) = 1L), g_78, p_30, l_678, p_33) >= (*l_554)))) == 0UL)) <= l_678)), p_33))) >= g_626) & p_33), p_32));
                        l_681 = &p_34;
                    }
                }
            }
            (*l_685) = g_682;
            if (func_37((g_134 = (g_82 ^= ((((*l_554) &= ((((*l_686) = &g_352) == (g_687 = &g_352)) & (safe_sub_func_uint8_t_u_u(p_30, ((*l_532) |= l_690))))) <= func_54((l_691 != (*l_194)), (*l_194), (((-1L) == ((*l_194) >= g_159)) < p_33), g_72, p_31)) & p_30))), p_34, p_32, l_693))
            {
                int l_706[3][3][3] = {{{(-1L), (-1L), 0x72E9FC39L}, {(-1L), (-1L), 0x72E9FC39L}, {(-1L), (-1L), 0x72E9FC39L}}, {{(-1L), (-1L), 0x72E9FC39L}, {(-1L), (-1L), 0x72E9FC39L}, {(-1L), (-1L), 0x72E9FC39L}}, {{(-1L), (-1L), 0x72E9FC39L}, {(-1L), (-1L), 0x72E9FC39L}, {(-1L), (-1L), 0x72E9FC39L}}};
                int i, j, k;
                l_707 ^= (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(func_48(((void*)0 == &g_78), (!(((p_33 || (safe_rshift_func_uint16_t_u_s((g_6 != func_48((*l_554), (safe_mod_func_uint32_t_u_u((p_30 = ((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(0x2659956AL, p_31)), ((p_33 && 5UL) || p_30))) < p_30)), p_34)), p_32)), 8))) != 0x677AL) != p_32)), p_33), l_706[1][0][0])), g_510[0]));
            }
            else
            {
                p_34 = ((*l_194) = p_32);
                if ((*l_194))
                    break;
                (*g_352) = &p_34;
                (*g_352) = (**g_687);
            }
        }
    }
    else
    {
        unsigned short l_708 = 0x792DL;
        char l_715[9][4][7] = {{{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}, {{(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}, {(-1L), 4L, 1L, 4L, (-1L), 4L, 1L}}};
        int l_716[10] = {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)};
        int *l_734 = &l_716[0];
        unsigned ***l_814 = &g_803;
        int *l_825[6][8][5] = {{{&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}}, {{&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}}, {{&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}}, {{&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}}, {{&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}}, {{&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}, {&l_377, &g_343, (void*)0, &g_343, &l_716[6]}}};
        unsigned char l_826[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_826[i] = 0xE6L;
        if ((p_34 = func_37(l_708, ((*l_245) = func_48((l_708 == (safe_rshift_func_uint16_t_u_u(p_33, 0))), ((safe_div_func_uint32_t_u_u(((*g_683) >= l_708), (+(safe_rshift_func_uint16_t_u_s(0x117CL, 4))))) || ((void*)0 == &l_245)), (*g_537))), l_715[7][2][4], p_32)))
        {
            int *l_717 = &l_304;
            char **l_745[8] = {&l_599[0][2], &l_599[0][2], &l_599[3][1], &l_599[0][2], &l_599[0][2], &l_599[3][1], &l_599[0][2], &l_599[0][2]};
            int l_752 = 0L;
            int i;
            l_716[8] = (p_33 && (-5L));
            (*l_717) ^= (*g_69);
            if ((*l_717))
            {
                if ((*l_717))
                {
                    for (l_574 = 1; (l_574 <= 4); l_574 += 1)
                    {
                        unsigned short **l_721 = &l_296;
                        unsigned short ***l_720 = &l_721;
                        unsigned **l_722 = &l_245;
                        unsigned ***l_723 = (void*)0;
                        unsigned ***l_724[8] = {(void*)0, (void*)0, &l_244, (void*)0, (void*)0, &l_244, (void*)0, (void*)0};
                        int i;
                        (*l_717) &= (safe_sub_func_int16_t_s_s((((((*l_720) = (void*)0) == (void*)0) < 0xBA07L) > (g_190[l_574] <= ((g_246 = l_722) == (g_725 = &g_247[3])))), (safe_sub_func_uint32_t_u_u(0x9C2460FAL, (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((void*)0 == &g_510[2]), 0x7AAAL)), l_716[8])), 14))))));
                        l_734 = l_734;
                    }
                }
                else
                {
                    return p_30;
                }
            }
            else
            {
                unsigned l_739 = 0UL;
                unsigned **l_740 = &g_247[7];
                unsigned ***l_741 = &g_246;
                char **l_744 = (void*)0;
                short *l_756 = &g_134;
                (*g_735) = (l_734 = ((*g_154) = &p_34));
                if ((((~(*g_683)) <= (safe_rshift_func_int16_t_s_u((l_739 > 0x09A9D602L), 4))) > ((*g_77) <= (l_740 != ((*l_741) = (void*)0)))))
                {
                    (*g_352) = (*g_154);
                    (*l_194) = ((safe_add_func_uint16_t_u_u((*g_537), p_32)) & ((l_598[0][9] = l_744) == l_745[1]));
                    (**l_414) = &p_34;
                    (*g_352) = &p_34;
                }
                else
                {
                    if ((((safe_rshift_func_int8_t_s_u(((*l_717) <= p_31), 2)) || p_34) ^ l_752))
                    {
                        unsigned **l_753 = &g_247[2];
                        (**g_687) = (void*)0;
                        (*l_741) = l_753;
                    }
                    else
                    {
                        (**g_352) |= ((safe_rshift_func_uint8_t_u_s(250UL, 3)) >= 249UL);
                        (*g_155) = ((&g_82 != l_756) <= func_48(p_31, (safe_add_func_int16_t_s_s(0L, 0x7F3EL)), ((*g_537) = (*g_537))));
                        (*l_717) &= (!(**g_735));
                        (*l_717) = ((*l_194) = (***g_687));
                    }
                }
            }
        }
        else
        {
            unsigned char l_759 = 247UL;
            short *l_762 = &g_82;
            unsigned ***l_773 = &g_246;
            unsigned **l_804 = &g_77;
            int *l_819 = &l_377;
            int *l_822[3][4] = {{&g_63[2][4][3], (void*)0, &g_63[2][4][3], (void*)0}, {&g_63[2][4][3], (void*)0, &g_63[2][4][3], (void*)0}, {&g_63[2][4][3], (void*)0, &g_63[2][4][3], (void*)0}};
            int l_844 = 0xB36EDC3DL;
            int *l_864[9] = {&g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3]};
            int i, j;
            if (func_54(p_33, l_759, (safe_sub_func_uint8_t_u_u((p_33 ^ ((*l_762) ^= g_190[0])), p_34)), p_32, (p_34 >= ((((((safe_rshift_func_int8_t_s_u((*g_683), (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s(g_595, (-4L))), l_759)))) || (*l_194)) == p_30) != (*g_537)) | (-1L)) | g_72))))
            {
                unsigned *l_785 = &g_78;
                unsigned char l_787[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_787[i] = 0xF7L;
                p_34 = (g_6 == (0xE42C0F4CL <= (0xA2C5L <= l_759)));
                if (func_37((((*l_734) <= (0x990AL <= (*g_537))) & ((void*)0 == l_773)), (safe_mod_func_uint32_t_u_u(l_759, (safe_mod_func_uint8_t_u_u((p_33 || (safe_unary_minus_func_uint8_t_u(((0x31L | (p_32 &= ((~(((*l_785) = (safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((func_48((safe_add_func_uint16_t_u_u(((**g_682) != p_34), p_31)), p_34, p_33) ^ g_78), p_30)), g_134))) && (*g_77))) && 0x418EL))) & p_31)))), p_31)))), (*l_734), p_31))
                {
                    (*g_154) = &p_34;
                }
                else
                {
                    unsigned l_786 = 0x21B4EB1FL;
                    int l_792 = 0x0E3C31A5L;
                    int **l_793 = &g_736;
                    int *l_794 = &g_343;
                    int **l_795 = &l_734;
                    l_787[0] |= (l_786 & l_759);
                    l_792 ^= (p_33 ^ (safe_sub_func_int32_t_s_s((0UL ^ ((0xBF4AL | (((g_79 = ((*l_734) || (**g_735))) ^ (p_31 | l_759)) || p_30)) > 0x89L)), l_787[2])));
                    (*l_795) = (l_794 = ((*l_793) = ((**l_414) = &p_34)));
                }
            }
            else
            {
                int ****l_798[7][7][5] = {{{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}, {{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}, {{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}, {{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}, {{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}, {{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}, {{&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}, {&l_414, &g_687, &l_267, &l_267, &l_414}}};
                int l_800 = 1L;
                unsigned short l_842 = 0xA3BFL;
                unsigned char **l_851 = &g_474[3][3][0];
                int **l_856 = &g_736;
                int i, j, k;
                for (g_595 = 0; (g_595 <= 27); ++g_595)
                {
                    unsigned **l_802 = (void*)0;
                    unsigned ***l_801[9][4][3];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_801[i][j][k] = &l_802;
                        }
                    }
                    for (p_31 = 0; (p_31 <= 3); p_31 += 1)
                    {
                        int *****l_799 = &l_798[5][2][0];
                        p_34 &= (-5L);
                        if (p_31)
                            continue;
                        l_800 &= (&l_267 == ((*l_799) = l_798[5][6][3]));
                        return p_34;
                    }
                    (*l_194) &= ((g_803 = (void*)0) == (g_805 = l_804));
                }
                if ((((*g_735) == (void*)0) < ((**g_805) = ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_33, (p_32 != ((safe_div_func_uint8_t_u_u(7UL, (((l_814 != l_815) < ((p_30 <= func_54(g_79, l_816, p_32, (*l_734), l_759)) & (*g_537))) ^ p_30))) > 0UL)))), p_33)) != 0x3FL))))
                {
                    unsigned l_818 = 4294967291UL;
                    (*l_734) |= 0L;
                    for (g_421 = 0; g_421 < 7; g_421 += 1)
                    {
                        for (p_33 = 0; p_33 < 7; p_33 += 1)
                        {
                            for (g_195 = 0; g_195 < 5; g_195 += 1)
                            {
                                l_798[g_421][p_33][g_195] = &g_174;
                            }
                        }
                    }
                    for (g_253 = 0; (g_253 <= 3); g_253 += 1)
                    {
                        char l_817 = 0x18L;
                        (**l_414) = (*g_735);
                        l_818 &= l_817;
                        l_819 = &l_716[8];
                    }
                }
                else
                {
                    for (g_253 = 0; (g_253 >= 4); ++g_253)
                    {
                        (*g_352) = l_822[0][3];
                        (*g_736) |= (~(safe_rshift_func_uint8_t_u_u((*g_158), p_33)));
                        if (p_30)
                            break;
                    }
                    (**l_414) = &p_34;
                    (**g_687) = l_825[1][0][0];
                }
                if ((func_48(p_32, p_32, l_826[1]) && (p_33 < 0x54L)))
                {
                    char l_841[10][6] = {{0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}, {0x65L, 0x65L, 0L, 0xA0L, 0x01L, 0xA0L}};
                    short *l_857 = &g_134;
                    int i, j;
                    if (p_33)
                    {
                        char ***l_827 = &l_598[0][9];
                        char ***l_828 = (void*)0;
                        int l_838 = 9L;
                        (**l_414) = &p_34;
                        (***g_687) = (((l_829 = ((*l_827) = &l_599[0][2])) != (void*)0) & (safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s((((safe_add_func_int8_t_s_s((g_79 = ((safe_lshift_func_uint8_t_u_s(p_34, l_838)) == ((**g_805) >= ((**g_735) = p_33)))), ((l_838 & p_31) >= (g_843[1][0] = (l_842 = (func_54((&p_33 != (void*)0), p_33, l_841[7][4], g_510[5], (*l_819)) == l_841[7][4])))))) && 254UL) && 0UL), l_844)), 5L)));
                        return p_31;
                    }
                    else
                    {
                        short **l_858[7] = {&l_762, &l_762, &l_762, &l_762, &l_762, &l_762, &l_762};
                        int *l_860[5] = {&l_304, (void*)0, &l_304, (void*)0, &l_304};
                        int i;
                        (*l_194) = (safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_div_func_int16_t_s_s(((l_851 = &g_474[2][1][6]) != (void*)0), (safe_add_func_int8_t_s_s(p_32, (safe_sub_func_int32_t_s_s(((*l_414) != l_856), (l_857 != (l_762 = l_857)))))))) | func_54(g_79, p_34, p_34, p_32, (*g_69))), (*l_734))), l_859[0][4]));
                        (**g_687) = l_860[2];
                        (*l_734) = (0x1DD1L < g_843[1][0]);
                    }
                    (*l_734) |= p_33;
                }
                else
                {
                    int *l_863[9][2];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_863[i][j] = &g_343;
                    }
                    for (g_78 = 0; (g_78 <= 35); g_78++)
                    {
                        (*g_736) = ((void*)0 != (*g_475));
                        (*g_352) = l_863[5][0];
                    }
                    (**g_687) = (*l_856);
                }
                (**g_687) = l_864[2];
            }
        }
        (*l_734) ^= (*l_194);
    }
    p_34 |= p_31;
    (*g_352) = (*g_735);
    return p_30;
}







static unsigned char func_37(short p_38, unsigned p_39, unsigned p_40, int p_41)
{
    return (*g_158);
}







static int func_46(int p_47)
{
    char l_87 = 1L;
    int l_88 = (-1L);
    char l_136 = 0xF8L;
    for (g_82 = (-11); (g_82 <= 24); g_82 = safe_add_func_int8_t_s_s(g_82, 1))
    {
        unsigned l_91 = 0UL;
        int l_96 = 1L;
        int l_121 = 0x9A05EB5DL;
        int l_122[6][2][6] = {{{0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}, {0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}}, {{0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}, {0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}}, {{0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}, {0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}}, {{0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}, {0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}}, {{0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}, {0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}}, {{0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}, {0x6DC9F68CL, 1L, 0x0314B3E7L, 0L, 0x0314B3E7L, 1L}}};
        int l_126[5];
        int **l_177 = &g_155;
        int ***l_176 = &l_177;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_126[i] = 0x47C869DDL;
        for (g_72 = 0; (g_72 <= 26); ++g_72)
        {
            char l_90 = 0L;
            l_87 = (-2L);
            l_88 = p_47;
            l_90 ^= g_89;
            return l_91;
        }
        for (l_87 = 23; (l_87 < 20); --l_87)
        {
            unsigned char l_94 = 0UL;
            int *l_95[7][9][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
            unsigned l_101 = 0x036B5224L;
            char *l_125 = &g_79;
            short *l_133 = &g_134;
            unsigned char *l_135[9][8][3] = {{{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}, {{(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}, {(void*)0, &l_94, &l_94}}};
            short l_141 = 0x0BEDL;
            int i, j, k;
            l_96 ^= l_94;
            for (l_88 = 4; (l_88 >= 0); l_88 -= 1)
            {
                for (g_79 = 1; (g_79 <= 4); g_79 += 1)
                {
                    int i, j, k;
                    for (l_94 = 0; (l_94 <= 4); l_94 += 1)
                    {
                        int i, j, k;
                        return g_63[(g_79 + 2)][g_79][g_79];
                    }
                    return g_63[(l_88 + 1)][g_79][l_88];
                }
                if ((*g_69))
                    continue;
                for (l_91 = 1; (l_91 <= 4); l_91 += 1)
                {
                    int l_120 = 0xBE801A4EL;
                    for (g_89 = 0; (g_89 <= 4); g_89 += 1)
                    {
                        int i, j, k;
                        g_63[(g_89 + 1)][l_91][g_89] ^= p_47;
                        (*g_69) &= (0L > ((func_54(func_54(p_47, (~(+(safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((0x65D988D0L < (*g_77)) > l_96), 14)), 0x8CDB4028L)))), p_47, (1UL ^ (l_91 | 4UL)), p_47), p_47, p_47, p_47, l_101) & l_91) & 4294967295UL));
                        if (p_47)
                            continue;
                    }
                    for (l_94 = 0; (l_94 > 26); ++l_94)
                    {
                        l_96 &= p_47;
                    }
                    l_122[3][1][0] |= (safe_unary_minus_func_int32_t_s((l_121 ^= (safe_lshift_func_uint8_t_u_s(((*g_69) != (safe_sub_func_uint32_t_u_u(0x2128C81AL, (safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(func_54(p_47, (safe_add_func_uint16_t_u_u(((void*)0 != l_95[1][7][0]), (safe_sub_func_uint16_t_u_u((0x7DB5L & g_78), (g_119 = ((l_96 = (safe_div_func_uint8_t_u_u((((p_47 ^ (p_47 | p_47)) & 4294967291UL) != p_47), 0x6AL))) ^ p_47)))))), l_120, l_91, p_47), p_47)), p_47))))), p_47)))));
                }
            }
            if (((((safe_sub_func_int8_t_s_s(((*l_125) ^= (~l_87)), 0xA3L)) >= l_126[3]) != (g_89 < (safe_div_func_uint16_t_u_u((&g_6 != &g_6), (safe_lshift_func_uint8_t_u_s(((l_136 = (safe_div_func_int16_t_s_s(((~0x0F87BC80L) && p_47), ((*l_133) = l_88)))) == l_88), 2)))))) != 1L))
            {
                unsigned l_151 = 0xA926A063L;
                unsigned short l_153 = 0xAB9FL;
                unsigned l_169 = 0xF0D64EE2L;
                for (g_119 = 8; (g_119 > 22); ++g_119)
                {
                    l_88 ^= (*g_69);
                }
                p_47 &= l_136;
                for (l_121 = 25; (l_121 <= (-27)); l_121 = safe_sub_func_int8_t_s_s(l_121, 3))
                {
                    unsigned l_142[5][9] = {{4294967295UL, 4294967290UL, 4294967295UL, 4294967286UL, 0x04E30F3DL, 0x7654C189L, 1UL, 0x43311D11L, 0xBAEACE35L}, {4294967295UL, 4294967290UL, 4294967295UL, 4294967286UL, 0x04E30F3DL, 0x7654C189L, 1UL, 0x43311D11L, 0xBAEACE35L}, {4294967295UL, 4294967290UL, 4294967295UL, 4294967286UL, 0x04E30F3DL, 0x7654C189L, 1UL, 0x43311D11L, 0xBAEACE35L}, {4294967295UL, 4294967290UL, 4294967295UL, 4294967286UL, 0x04E30F3DL, 0x7654C189L, 1UL, 0x43311D11L, 0xBAEACE35L}, {4294967295UL, 4294967290UL, 4294967295UL, 4294967286UL, 0x04E30F3DL, 0x7654C189L, 1UL, 0x43311D11L, 0xBAEACE35L}};
                    unsigned l_152 = 4294967295UL;
                    int **l_165 = &l_95[3][8][0];
                    unsigned l_166 = 4294967287UL;
                    int i, j;
                    if (func_54(l_141, func_54(((l_142[0][7] != (safe_add_func_int32_t_s_s(p_47, (safe_sub_func_uint8_t_u_u(((*g_69) >= p_47), ((*l_125) = ((safe_mod_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u(((*g_77) = ((*g_77) != (*g_77))), func_54(l_142[1][1], l_151, g_89, p_47, l_151))) < p_47), l_152)) && l_87))))))) < g_6), g_6, g_89, p_47, l_126[4]), l_88, l_153, p_47))
                    {
                        int ***l_162 = (void*)0;
                        int **l_164 = &l_95[1][7][0];
                        int ***l_163 = &l_164;
                        (*g_154) = &p_47;
                        if (p_47)
                            continue;
                        (*g_69) = ((*g_155) = (safe_div_func_uint32_t_u_u((g_158 != (void*)0), l_88)));
                        l_88 = ((((*l_163) = (void*)0) != l_165) | 0UL);
                    }
                    else
                    {
                        return p_47;
                    }
                    if (l_166)
                        continue;
                    if ((**g_154))
                        break;
                }
                if (p_47)
                {
                    for (l_96 = 4; (l_96 >= 0); l_96 -= 1)
                    {
                        int ****l_175 = &g_174;
                        unsigned *l_180[9][9] = {{&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}, {&l_101, (void*)0, (void*)0, (void*)0, (void*)0, &l_101, (void*)0, (void*)0, (void*)0}};
                        int i, j, k;
                        g_63[(l_96 + 1)][l_96][l_96] = (p_47 ^ func_54(g_119, (safe_div_func_int8_t_s_s(l_169, (safe_add_func_int32_t_s_s((*g_69), g_78)))), (l_88 = ((safe_mod_func_uint32_t_u_u((((*l_175) = g_174) != l_176), (safe_sub_func_int8_t_s_s((((*g_77) = (&g_134 != &g_134)) | 0UL), p_47)))) & p_47)), g_89, p_47));
                        (*l_177) = (*g_154);
                        if (p_47)
                            break;
                    }
                    p_47 |= (-8L);
                }
                else
                {
                    p_47 &= 5L;
                }
            }
            else
            {
                unsigned l_181[3];
                int l_182[6][8] = {{8L, 0L, 6L, (-1L), 7L, 0xAA2D425EL, 7L, (-1L)}, {8L, 0L, 6L, (-1L), 7L, 0xAA2D425EL, 7L, (-1L)}, {8L, 0L, 6L, (-1L), 7L, 0xAA2D425EL, 7L, (-1L)}, {8L, 0L, 6L, (-1L), 7L, 0xAA2D425EL, 7L, (-1L)}, {8L, 0L, 6L, (-1L), 7L, 0xAA2D425EL, 7L, (-1L)}, {8L, 0L, 6L, (-1L), 7L, 0xAA2D425EL, 7L, (-1L)}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_181[i] = 4294967286UL;
                p_47 = l_136;
                l_182[3][3] = ((*g_69) = l_181[0]);
            }
        }
    }
    for (g_134 = 0; (g_134 == 19); g_134 = safe_add_func_int32_t_s_s(g_134, 4))
    {
        int *l_187[2][8] = {{&g_63[1][2][2], &l_88, &g_63[1][2][2], &l_88, &g_63[1][2][2], &l_88, &g_63[1][2][2], &l_88}, {&g_63[1][2][2], &l_88, &g_63[1][2][2], &l_88, &g_63[1][2][2], &l_88, &g_63[1][2][2], &l_88}};
        int i, j;
        l_88 &= (safe_div_func_uint8_t_u_u(0x3CL, l_136));
        for (g_78 = 0; (g_78 >= 3); g_78++)
        {
            unsigned l_191 = 0x24EEE4FCL;
            (*g_69) &= ((g_190[0] == ((*g_77) >= 0x6BE9DCC0L)) <= l_191);
        }
    }
    return p_47;
}







static int func_48(unsigned char p_49, unsigned p_50, unsigned short p_51)
{
    int l_70 = 1L;
    unsigned *l_71 = &g_72;
    int *l_80 = &g_63[2][4][3];
    int *l_81[6][4] = {{&l_70, (void*)0, &l_70, (void*)0}, {&l_70, (void*)0, &l_70, (void*)0}, {&l_70, (void*)0, &l_70, (void*)0}, {&l_70, (void*)0, &l_70, (void*)0}, {&l_70, (void*)0, &l_70, (void*)0}, {&l_70, (void*)0, &l_70, (void*)0}};
    int i, j;
    (*g_69) &= (safe_add_func_int16_t_s_s(0x9C78L, p_50));
    g_82 = ((*l_80) = func_54(((((((p_51 == p_50) > ((*l_71) = l_70)) != ((func_54((((safe_rshift_func_int8_t_s_s(p_50, 5)) >= l_70) == (1UL <= ((g_77 = l_71) != &g_78))), l_70, p_50, g_63[2][4][4], (*g_69)) >= p_51) > l_70)) >= p_49) ^ p_49) || g_79), g_6, l_70, g_6, p_51));
    return p_51;
}







static int func_54(short p_55, unsigned p_56, unsigned p_57, short p_58, int p_59)
{
    int *l_62[7] = {&g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3], &g_63[2][4][3]};
    char l_64 = 1L;
    int i;
    p_59 &= (l_64 &= 0x0D69B45CL);
    for (p_55 = 0; (p_55 <= 6); p_55 += 1)
    {
        unsigned char l_65 = 249UL;
        return l_65;
    }
    return g_6;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_63[i][j][k], "g_63[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_190[i], "g_190[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_510[i], "g_510[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_843[i][j], "g_843[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1230[i], "g_1230[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    transparent_crc(g_1291, "g_1291", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
