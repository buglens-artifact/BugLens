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



static volatile int g_12 = 0x65425A80L;
static volatile int *g_11 = &g_12;
static int g_14 = 0L;
static volatile unsigned char g_15 = 249UL;
static int g_55 = 4L;
static char g_79[3][2] = {{0xB1L, (-4L)}, {0xB1L, (-4L)}, {0xB1L, (-4L)}};
static char g_83[5][9][5] = {{{0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}}, {{0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}}, {{0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}}, {{0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}}, {{0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}, {0x8CL, 0x39L, 1L, 0x13L, 0xC9L}}};
static volatile char g_88 = (-10L);
static volatile char g_89 = 0x7DL;
static volatile char g_90 = (-1L);
static volatile char g_91 = 1L;
static volatile char g_92 = 0x9EL;
static volatile char g_93 = 0L;
static volatile char g_94[6][2] = {{1L, (-7L)}, {1L, (-7L)}, {1L, (-7L)}, {1L, (-7L)}, {1L, (-7L)}, {1L, (-7L)}};
static volatile char g_95 = 0x0DL;
static volatile char g_96[4] = {1L, 1L, 1L, 1L};
static volatile char g_97 = (-1L);
static volatile char g_98 = 0x99L;
static volatile char g_99 = 0x86L;
static volatile char g_100[6][6] = {{0x84L, 1L, (-1L), (-1L), 1L, 0xBDL}, {0x84L, 1L, (-1L), (-1L), 1L, 0xBDL}, {0x84L, 1L, (-1L), (-1L), 1L, 0xBDL}, {0x84L, 1L, (-1L), (-1L), 1L, 0xBDL}, {0x84L, 1L, (-1L), (-1L), 1L, 0xBDL}, {0x84L, 1L, (-1L), (-1L), 1L, 0xBDL}};
static volatile char g_101 = (-1L);
static volatile char g_102 = 0x44L;
static volatile char g_103 = 3L;
static volatile char g_104 = (-1L);
static volatile char g_105 = (-3L);
static volatile char g_106[10][3] = {{(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}, {(-1L), 0xD7L, 0xF9L}};
static volatile char g_107[4] = {0xA9L, 0xB0L, 0xA9L, 0xB0L};
static volatile char g_108 = (-5L);
static volatile char g_109 = (-1L);
static volatile char g_110[3] = {0xD9L, 0xD9L, 0xD9L};
static volatile char g_111 = 0x78L;
static volatile char g_112 = (-1L);
static volatile char g_113 = (-7L);
static volatile char g_114 = 0L;
static volatile char g_115 = 1L;
static volatile char g_116 = 1L;
static volatile char g_117 = (-1L);
static volatile char g_118 = 0xE5L;
static volatile char g_119 = 1L;
static volatile char g_120 = 0x1AL;
static volatile char g_121 = 0L;
static volatile char g_122 = (-1L);
static volatile char g_123 = 0xEDL;
static volatile char g_124 = 0x3DL;
static volatile char g_125 = 0L;
static volatile char g_126 = 0x0EL;
static volatile char g_127 = (-10L);
static volatile char *g_87[9][10] = {{&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}, {&g_122, &g_92, &g_122, &g_125, &g_107[0], &g_104, &g_119, &g_108, &g_115, &g_96[0]}};
static volatile char **g_86 = &g_87[4][1];
static short g_160 = 0xA345L;
static int g_161[9][3][7] = {{{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}, {{0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}, {0x8BF0F89DL, 8L, 0xB1E0E4F9L, 8L, 0x8BF0F89DL, 0L, 0x8BF0F89DL}}};
static unsigned char g_162[1][8] = {{251UL, 0xD1L, 251UL, 0xD1L, 251UL, 0xD1L, 251UL, 0xD1L}};
static short g_182 = 6L;
static short g_185[6] = {1L, 1L, 0x1020L, 1L, 1L, 0x1020L};
static int g_187 = 0x5D9C112FL;
static int *g_205 = &g_55;
static char *g_224 = &g_83[1][5][4];
static char **g_223 = &g_224;
static unsigned short g_236[3] = {0xD897L, 0xD897L, 0xD897L};
static unsigned g_260[10][4] = {{0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}, {0x6EF0C4D1L, 0xF87B300BL, 0xFC1A0B69L, 7UL}};
static unsigned g_287 = 0UL;
static int *g_307 = (void*)0;
static int g_345 = 0x9841200CL;
static int **g_356 = &g_205;
static const int *g_399 = &g_345;
static short *g_406 = &g_185[4];
static int *g_414 = &g_187;
static volatile int g_415 = 0xABE865AEL;
static unsigned g_450 = 1UL;
static int g_491 = 0x1FF8839DL;
static const int *g_490 = &g_491;
static const int **g_489 = &g_490;
static unsigned char *g_571 = &g_162[0][7];
static unsigned char **g_570[1][2][5] = {{{&g_571, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, &g_571}}};
static unsigned char g_591 = 0UL;
static unsigned short *g_600 = &g_236[0];
static unsigned short **g_599 = &g_600;
static short g_609 = (-4L);
static short **g_694 = &g_406;
static short ** const *g_693 = &g_694;
static const unsigned g_750 = 0x6867FA64L;
static int ***g_765 = &g_356;
static const short g_768 = (-1L);
static const short g_770 = 0xA16BL;
static const short *g_769 = &g_770;
static const short g_772 = 7L;
static int g_775 = 0L;
static int ***g_782 = (void*)0;
static unsigned *g_805 = &g_287;
static unsigned **g_804[8][1] = {{&g_805}, {&g_805}, {&g_805}, {&g_805}, {&g_805}, {&g_805}, {&g_805}, {&g_805}};



static unsigned char func_1(void);
static const int * func_2(int * p_3, int * p_4);
static int * func_5(short p_6, int * p_7, int * p_8);
static unsigned char func_24(int * p_25);
static unsigned char func_28(unsigned p_29, int * p_30);
static int * func_32(int p_33, int p_34, short p_35);
static char func_36(unsigned p_37, int p_38, int p_39, int p_40);
static int func_41(unsigned short p_42, unsigned char p_43, char p_44, const unsigned char p_45, unsigned char p_46);
static const unsigned char func_58(const int * p_59, unsigned p_60, unsigned p_61);
static int func_64(char p_65, unsigned short p_66, const int * const p_67, short p_68);
static unsigned char func_1(void)
{
    int *l_13 = &g_14;
    const int *l_715[1];
    char * const *l_761 = &g_224;
    int l_808 = 0x86A49D6BL;
    int i;
    for (i = 0; i < 1; i++)
        l_715[i] = &g_187;
    l_715[0] = func_2(((*g_356) = func_5((safe_rshift_func_uint16_t_u_s((g_11 != l_13), 12)), &g_14, l_13)), &g_345);
    for (g_160 = 0; (g_160 > 12); g_160 = safe_add_func_int32_t_s_s(g_160, 1))
    {
        int l_722 = (-5L);
        int *l_739 = &g_187;
        char *** const l_747 = &g_223;
        int **l_781 = &g_307;
        int ***l_780 = &l_781;
        unsigned **l_803 = (void*)0;
        for (g_591 = 2; (g_591 <= 47); ++g_591)
        {
            char ***l_726 = (void*)0;
            char ****l_725 = &l_726;
            int l_730 = 0L;
            short ** const *l_754 = &g_694;
            short ***l_795[4] = {(void*)0, &g_694, (void*)0, &g_694};
            int i;
            if ((safe_rshift_func_uint16_t_u_s(l_722, (safe_sub_func_int32_t_s_s(1L, (((*l_725) = &g_223) != &g_86))))))
            {
                unsigned short l_727 = 0x878BL;
                (*l_13) = l_727;
            }
            else
            {
                char l_737 = 1L;
                unsigned *l_738 = &g_287;
                int *l_758[9][2] = {{&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}, {&g_14, &l_730}};
                unsigned short l_773 = 65535UL;
                int i, j;
                if (((**g_599) || ((**g_599) = func_28((0UL != (((*l_13) = (safe_add_func_int16_t_s_s(l_730, (l_722 ^ ((***g_693) = (safe_lshift_func_int8_t_s_s((-9L), func_58((*g_356), l_730, (safe_add_func_int32_t_s_s(((g_260[2][2] = ((*l_738) = (((safe_lshift_func_uint8_t_u_s((*g_571), l_737)) > (*g_399)) && g_109))) >= 1UL), l_737)))))))))) && l_737)), l_739))))
                {
                    for (g_287 = 0; (g_287 != 43); g_287 = safe_add_func_int32_t_s_s(g_287, 8))
                    {
                        return (*g_571);
                    }
                    (*g_356) = (void*)0;
                    if ((*g_11))
                        continue;
                }
                else
                {
                    unsigned *l_744 = &g_260[2][2];
                    char * const * const *l_748 = (void*)0;
                    int l_749[7][4] = {{0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}, {0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}, {0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}, {0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}, {0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}, {0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}, {0x5E978C69L, 0x5E978C69L, 7L, 0x5E978C69L}};
                    const short *l_771[1];
                    int l_791 = (-1L);
                    unsigned short ***l_794 = &g_599;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_771[i] = &g_772;
                    if ((safe_mod_func_int32_t_s_s((g_108 < (((void*)0 != &g_571) | func_41(func_58(func_32(func_58((*g_356), ((*l_744) = ((*l_738) = 0x7A63ABE4L)), func_58((*g_356), (safe_rshift_func_int8_t_s_u((l_747 == l_748), 7)), (((*g_571) = l_749[5][3]) & l_737))), (*l_739), (**g_694)), g_609, l_749[5][3]), l_730, l_737, g_750, l_749[1][3]))), g_185[4])))
                    {
                        if ((*g_399))
                            break;
                    }
                    else
                    {
                        short l_753 = (-1L);
                        const int **l_755 = &l_715[0];
                        (*l_13) = l_753;
                        (*g_356) = func_32((*g_490), ((((void*)0 == l_754) >= (func_24(l_738) && (*g_11))) & func_58(((*l_755) = l_13), l_730, l_737)), (*g_406));
                    }
                    for (l_737 = 0; (l_737 > (-28)); l_737--)
                    {
                        int * const l_759 = (void*)0;
                        int **l_760 = &l_758[8][0];
                        l_758[5][1] = func_32((*g_490), (*g_399), ((*g_406) = (**g_694)));
                        (*l_760) = l_759;
                    }
                    if ((*l_739))
                    {
                        char * const **l_762 = &l_761;
                        int ***l_764 = &g_356;
                        int ****l_763[6][8] = {{&l_764, &l_764, (void*)0, &l_764, (void*)0, &l_764, (void*)0, &l_764}, {&l_764, &l_764, (void*)0, &l_764, (void*)0, &l_764, (void*)0, &l_764}, {&l_764, &l_764, (void*)0, &l_764, (void*)0, &l_764, (void*)0, &l_764}, {&l_764, &l_764, (void*)0, &l_764, (void*)0, &l_764, (void*)0, &l_764}, {&l_764, &l_764, (void*)0, &l_764, (void*)0, &l_764, (void*)0, &l_764}, {&l_764, &l_764, (void*)0, &l_764, (void*)0, &l_764, (void*)0, &l_764}};
                        const short *l_767 = &g_768;
                        const short **l_766[5][4][6] = {{{(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}}, {{(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}}, {{(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}}, {{(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}}, {{(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}, {(void*)0, (void*)0, (void*)0, &l_767, (void*)0, &l_767}}};
                        unsigned short *l_774[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_774[i] = (void*)0;
                        (*g_414) = (0xA9L > func_64(((g_182 ^ (((*l_762) = l_761) == (void*)0)) || (((((g_765 = &g_356) != &g_356) & ((l_771[0] = (g_769 = (*g_694))) == (void*)0)) < ((*l_744) = ((*l_738) = (*l_739)))) <= 249UL)), (**g_599), &l_730, (*g_406)));
                        (*l_739) = func_41((g_775 = ((**g_599) = l_773)), l_730, l_730, (safe_rshift_func_int16_t_s_u(l_749[0][2], (((safe_rshift_func_int8_t_s_u((0xF933F029L < ((*l_13) = (0x542DACFFL ^ (l_780 == (g_782 = (void*)0))))), (((safe_lshift_func_uint8_t_u_s((((*g_224) == 0xABL) ^ (*g_224)), l_749[5][3])) & (***g_693)) < l_730))) == (*g_414)) ^ 0xA559959AL))), (*g_571));
                        l_715[0] = ((**g_765) = (**g_765));
                    }
                    else
                    {
                        unsigned short ***l_793 = &g_599;
                        unsigned short ****l_792[9][6][4] = {{{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}, {{&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}, {&l_793, &l_793, &l_793, &l_793}}};
                        int i, j, k;
                        (*l_13) = ((((safe_mod_func_int32_t_s_s(((l_749[5][3] ^ (*g_571)) & (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_791 = (*l_739)), 3)), (**g_694)))), (*g_414))) <= (*g_224)) >= ((l_794 = &g_599) == &g_599)) || (&g_694 != l_795[3]));
                    }
                    if ((*g_399))
                        break;
                }
                (*g_11) = (*g_414);
                return (*g_571);
            }
            return (*g_571);
        }
        if ((*g_11))
        {
            unsigned short **l_802 = &g_600;
            if ((*g_414))
            {
                int *l_798 = &g_55;
                for (g_491 = 0; (g_491 > 25); g_491++)
                {
                    l_798 = (**g_765);
                }
                for (g_117 = 0; g_117 < 5; g_117 += 1)
                {
                    for (g_121 = 0; g_121 < 9; g_121 += 1)
                    {
                        for (g_491 = 0; g_491 < 5; g_491 += 1)
                        {
                            g_83[g_117][g_121][g_491] = 1L;
                        }
                    }
                }
                if (((void*)0 != (*g_765)))
                {
                    return (*g_571);
                }
                else
                {
                    unsigned short ***l_799 = (void*)0;
                    unsigned short ***l_800 = (void*)0;
                    unsigned short ***l_801[10] = {(void*)0, &g_599, &g_599, &g_599, &g_599, (void*)0, &g_599, &g_599, &g_599, &g_599};
                    int i;
                    if ((*l_13))
                        break;
                    if ((*l_739))
                        break;
                    l_802 = (g_599 = &g_600);
                }
            }
            else
            {
                (**g_765) = (void*)0;
            }
        }
        else
        {
            unsigned ***l_806 = &l_803;
            int l_807 = 0xB1D2CE99L;
            (*g_11) = ((*l_739) = 1L);
            (*l_13) = 0x2816E7D7L;
            (*l_806) = (g_804[2][0] = l_803);
            (*g_11) = l_807;
        }
    }
    return (*l_13);
}







static const int * func_2(int * p_3, int * p_4)
{
    unsigned short *l_549 = &g_236[0];
    unsigned short **l_548 = &l_549;
    unsigned short ***l_550 = (void*)0;
    unsigned short ***l_551 = &l_548;
    unsigned short **l_552 = &l_549;
    int l_553 = 0x812D030EL;
    unsigned char ** const l_574[4][7][9] = {{{&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}}, {{&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}}, {{&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}}, {{&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}, {&g_571, &g_571, &g_571, &g_571, (void*)0, &g_571, &g_571, &g_571, &g_571}}};
    short **l_587 = &g_406;
    short l_610 = 0L;
    int **l_613[7][3] = {{&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}, {&g_307, &g_307, &g_307}};
    int l_665[8][9] = {{0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}, {0xF7043A28L, 1L, 0x5EB92F68L, 1L, 0xF7043A28L, 0L, (-1L), 1L, 0x96EE0FD7L}};
    int i, j, k;
    l_553 = (safe_mod_func_uint16_t_u_u(((((*l_551) = l_548) == l_552) >= g_97), l_553));
    for (g_182 = 5; (g_182 > (-8)); g_182 = safe_sub_func_int32_t_s_s(g_182, 1))
    {
        unsigned l_562 = 4294967289UL;
        short **l_583 = (void*)0;
        unsigned short **l_601[2][5] = {{&g_600, &l_549, &l_549, &l_549, &l_549}, {&g_600, &l_549, &l_549, &l_549, &l_549}};
        unsigned char *l_608 = &g_162[0][5];
        int * const *l_624 = &g_307;
        const int * const l_671 = &g_345;
        int l_691 = (-10L);
        int i, j;
        if ((*p_3))
        {
            unsigned l_563 = 7UL;
            unsigned char **l_573 = &g_571;
            (*p_3) = (safe_sub_func_int32_t_s_s((*p_4), (l_553 > (safe_sub_func_int16_t_s_s((*g_406), g_79[0][1])))));
            if ((safe_mod_func_int8_t_s_s(l_562, l_563)))
            {
                unsigned char ***l_572[10][10][2] = {{{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}, {{&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}, {&g_570[0][1][0], &g_570[0][0][2]}}};
                int l_581 = 0x621FB47DL;
                unsigned short **l_602 = &l_549;
                int i, j, k;
                if ((*p_4))
                    break;
                if (((((*g_571) = (safe_lshift_func_int8_t_s_u(0x07L, (safe_sub_func_int8_t_s_s(l_562, ((safe_rshift_func_uint16_t_u_u(((l_573 = g_570[0][1][0]) != l_574[0][1][5]), ((((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*g_406) = (safe_lshift_func_int8_t_s_s(l_563, 1))), func_28(l_562, func_32((*g_490), ((*p_3) = (((*g_11) < ((0xFEL && l_562) <= l_553)) == (*p_4))), l_553)))), l_553)) == l_563) && 1UL) | (*p_4)))) < l_563)))))) && 0x38L) ^ (*g_399)))
                {
                    int l_582 = (-1L);
                    short ***l_584 = &l_583;
                    unsigned char *l_590 = &g_591;
                    (*g_356) = func_32(l_581, (*p_4), ((*g_406) = (!(l_582 && l_582))));
                    (*g_356) = p_4;
                    (*l_584) = l_583;
                    if ((safe_lshift_func_uint16_t_u_u(((l_587 == (void*)0) && ((*p_3) == (safe_add_func_uint8_t_u_u((l_582 = ((*g_571) = (~0x76L))), ((void*)0 == l_590))))), 5)))
                    {
                        (*g_356) = (*g_356);
                    }
                    else
                    {
                        int *l_596 = &g_187;
                        (*p_3) = (safe_lshift_func_uint8_t_u_s((0x43L & ((safe_mod_func_int16_t_s_s((*g_406), ((*g_571) | (l_582 | l_562)))) >= func_24(p_3))), 3));
                        l_596 = func_32(l_581, (*p_4), l_563);
                    }
                }
                else
                {
                    int l_607[2][9][8] = {{{(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}}, {{(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}, {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L}}};
                    int i, j, k;
                    for (g_127 = 0; g_127 < 5; g_127 += 1)
                    {
                        for (g_89 = 0; g_89 < 9; g_89 += 1)
                        {
                            for (g_345 = 0; g_345 < 5; g_345 += 1)
                            {
                                g_83[g_127][g_89][g_345] = 5L;
                            }
                        }
                    }
                    (*g_414) = (safe_rshift_func_int8_t_s_u((func_28((func_28(((l_601[1][1] = g_599) == ((*l_551) = l_602)), (*g_356)) == 0x82L), func_32(l_553, ((safe_mod_func_uint16_t_u_u((g_609 = ((*l_549) = (safe_add_func_uint8_t_u_u((l_581 == ((*g_406) = l_607[0][6][4])), (((*l_573) = (*l_573)) != l_608))))), l_553)) <= 0L), l_581)) ^ 65532UL), l_581));
                    (*g_205) = ((*p_4) = func_24((*g_356)));
                    (**g_356) = ((*g_599) != (*g_599));
                }
                if (l_581)
                {
                    for (g_187 = 1; (g_187 >= 0); g_187 -= 1)
                    {
                        int **l_614 = &g_307;
                        int i, j;
                        l_610 = 0xBB7B21E6L;
                        (*g_11) = (safe_lshift_func_int16_t_s_s((l_613[4][0] != (l_614 = l_614)), (&g_571 == &g_571)));
                        if (g_79[g_187][g_187])
                            continue;
                        return p_3;
                    }
                    p_3 = &l_581;
                    (*g_356) = (*g_356);
                }
                else
                {
                    (*g_356) = &l_581;
                }
            }
            else
            {
                unsigned * const l_616 = (void*)0;
                unsigned * const *l_615[7];
                int l_621 = 8L;
                char ** const l_631 = &g_224;
                int i;
                for (i = 0; i < 7; i++)
                    l_615[i] = &l_616;
                for (l_610 = 0; (l_610 <= 8); l_610 += 1)
                {
                    unsigned *l_618[7][8][4] = {{{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}, {{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}, {{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}, {{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}, {{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}, {{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}, {{(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}, {(void*)0, &g_260[2][2], &g_287, &g_260[9][3]}}};
                    unsigned * const *l_617 = &l_618[0][4][2];
                    int l_632 = 0x7AE7E247L;
                    int i, j, k;
                    l_617 = l_615[0];
                    (*g_11) = (safe_mod_func_uint8_t_u_u((l_621 != (safe_add_func_uint32_t_u_u((((void*)0 != l_624) <= ((-6L) && (l_621 > 0xF8B3FF27L))), (func_41((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((**l_548) = (safe_sub_func_uint32_t_u_u(l_563, (((void*)0 != l_631) ^ 0x8EL)))), (*g_406))), l_563)), l_632, l_632, l_610, l_563) ^ l_632)))), 0x88L));
                }
                (*g_11) = (-1L);
            }
            for (g_345 = 0; (g_345 > 5); ++g_345)
            {
                char **l_639 = &g_224;
                char ***l_640 = &l_639;
                int **l_641 = &g_307;
                int ***l_642 = &l_613[3][1];
                unsigned *l_643 = &g_260[2][2];
                int l_654[9][1];
                unsigned short *l_669[8][1][2] = {{{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}, {{&g_236[1], &g_236[0]}}};
                int i, j, k;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_654[i][j] = 0xA70B156AL;
                }
                if (((safe_mod_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((*l_640) = l_639) == (void*)0), 1L)) | (((void*)0 == l_601[0][1]) && l_563)), ((((*l_642) = l_641) == (void*)0) ^ ((*l_643) = g_92)))) || l_562))
                {
                    unsigned l_646 = 4294967295UL;
                    (*g_356) = func_32((safe_mod_func_uint32_t_u_u((1L ^ 0x42L), (l_646 && (safe_sub_func_uint8_t_u_u((((*g_406) = (safe_sub_func_uint32_t_u_u(l_646, func_58(p_4, g_236[2], (safe_unary_minus_func_uint32_t_u(((*l_643) = (l_553 != ((1UL ^ (l_562 >= l_610)) | 0x1CL))))))))) ^ l_553), l_654[2][0]))))), l_563, g_98);
                }
                else
                {
                    unsigned l_664 = 0xCD8643E6L;
                    int l_670 = 0x24FD674DL;
                    int l_680 = (-5L);
                    for (l_553 = (-15); (l_553 < (-24)); --l_553)
                    {
                        char l_663 = (-10L);
                        unsigned short *l_668 = &g_236[1];
                        short *l_672 = (void*)0;
                        short *l_673 = &l_610;
                    }
                    (*g_356) = (void*)0;
                    for (g_14 = 0; (g_14 > (-15)); g_14 = safe_sub_func_int32_t_s_s(g_14, 4))
                    {
                        short l_681 = (-10L);
                        const int *l_682 = &g_161[0][0][1];
                        (*g_414) = ((*l_671) && ((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_654[2][0] | l_563), l_680)), 5L)) || l_681));
                        (*g_11) = (l_563 && 0x80183A16L);
                        return l_682;
                    }
                    p_3 = p_4;
                }
                (*g_414) = (*l_671);
                (*g_356) = p_4;
                for (l_610 = 0; (l_610 >= 17); ++l_610)
                {
                    int l_686 = 0L;
                    (*g_414) = ((safe_unary_minus_func_uint16_t_u(func_28(l_654[1][0], &l_665[3][8]))) > l_686);
                }
            }
            (*g_356) = (void*)0;
        }
        else
        {
            short **l_689 = &g_406;
            int l_692 = 1L;
            for (g_591 = 0; (g_591 <= 2); g_591 += 1)
            {
                unsigned *l_690[9] = {&g_287, &g_287, &g_287, &g_287, &g_287, &g_287, &g_287, &g_287, &g_287};
                int l_710 = 0x4257B8AEL;
                int i, j;
                (*p_3) = (safe_add_func_int32_t_s_s(((g_100[(g_591 + 3)][(g_591 + 1)] <= ((((*l_671) < 254UL) == 0xC7L) >= (l_691 = (l_689 == l_583)))) ^ l_692), (l_692 > ((*l_549) = (*g_600)))));
                for (g_491 = 0; (g_491 <= 2); g_491 += 1)
                {
                    short ***l_696[2][8][2] = {{{&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}}, {{&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}, {&l_587, &l_583}}};
                    int l_697 = 0x68141FBDL;
                    int i, j, k;
                }
            }
            if ((*g_399))
                break;
            for (g_591 = 0; (g_591 >= 29); ++g_591)
            {
                return p_3;
            }
        }
        (*g_414) = ((*p_4) = (*g_399));
        return p_4;
    }
    return p_4;
}







static int * func_5(short p_6, int * p_7, int * p_8)
{
    int l_31[10] = {0x7FB07D0DL, 0x29CBC21BL, (-1L), (-1L), 0x29CBC21BL, 0x7FB07D0DL, 0x29CBC21BL, (-1L), (-1L), 0x29CBC21BL};
    unsigned l_48[7];
    int *l_227 = (void*)0;
    short *l_407 = &g_182;
    unsigned char *l_447 = &g_162[0][7];
    short l_494[7][2][1] = {{{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}, {{1L}, {1L}}};
    char *l_508[4];
    int l_517 = (-1L);
    unsigned short *l_543 = (void*)0;
    unsigned short *l_544 = &g_236[0];
    unsigned *l_545 = &g_260[2][2];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_48[i] = 0UL;
    for (i = 0; i < 4; i++)
        l_508[i] = &g_79[0][1];
    if (g_15)
    {
        short l_215[9];
        unsigned l_228 = 6UL;
        unsigned l_231 = 0x9FBD7E93L;
        short *l_232 = &g_185[4];
        unsigned short *l_235 = &g_236[0];
        int i;
        for (i = 0; i < 9; i++)
            l_215[i] = (-1L);
        for (g_14 = 0; (g_14 <= 24); g_14 = safe_add_func_uint32_t_u_u(g_14, 8))
        {
            unsigned l_47 = 1UL;
            for (p_6 = 0; (p_6 < (-20)); --p_6)
            {
                char *l_216 = &g_79[0][1];
                char **l_222[9][9][3] = {{{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}, {{&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}, {&l_216, (void*)0, &l_216}}};
                char ***l_221[4][4][3] = {{{&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}}, {{&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}}, {{&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}}, {{&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}, {&l_222[1][4][2], &l_222[4][8][2], &l_222[4][8][2]}}};
                int i, j, k;
                (*g_11) = (safe_mod_func_int8_t_s_s((((((~p_6) && (0x8D9AL & 0UL)) <= (~((safe_mod_func_uint8_t_u_u(func_24(&g_14), p_6)) & ((*l_216) = ((safe_rshift_func_uint16_t_u_s((func_28(l_31[3], func_32((((*l_216) = func_36(g_14, func_41(l_31[1], l_47, l_48[4], p_6, g_14), g_182, l_215[6])) != l_31[7]), g_14, p_6)) >= l_48[4]), 6)) < p_6))))) > g_160) && l_31[3]), l_215[7]));
                g_223 = &l_216;
            }
        }
        (*p_7) = func_41(func_64(((((safe_rshift_func_uint16_t_u_u(l_215[2], 8)) ^ l_215[6]) != l_228) & (safe_rshift_func_uint8_t_u_s(((!((*l_232) = l_231)) && ((*l_235) = (safe_add_func_uint16_t_u_u(0x06A6L, g_107[0])))), 5))), p_6, p_7, p_6), g_14, (*g_224), g_83[0][1][4], p_6);
        (*g_11) = ((*p_8) = (*p_8));
    }
    else
    {
        unsigned short l_244 = 8UL;
        unsigned char l_285 = 255UL;
        const int * const l_295 = &g_161[5][2][1];
        int *l_308[6];
        int *l_316 = &g_55;
        int *l_369 = &l_31[3];
        unsigned char *l_401 = &g_162[0][7];
        int i;
        for (i = 0; i < 6; i++)
            l_308[i] = &g_187;
        for (g_14 = 0; (g_14 == 10); ++g_14)
        {
            const int l_250 = 0xA5E111E5L;
            unsigned short l_253 = 0UL;
            const int l_290[10] = {0L, 0L, 0xD9C01360L, 0L, 0L, 0xD9C01360L, 0L, 0L, 0xD9C01360L, 0L};
            int *l_315 = &g_161[6][0][6];
            int i;
            for (g_187 = 0; (g_187 < (-6)); g_187 = safe_sub_func_uint16_t_u_u(g_187, 1))
            {
                unsigned short l_241 = 1UL;
                int l_254 = 0xC4DB800EL;
            }
        }
        (*l_316) = func_41(func_24(p_8), (*l_295), (*l_295), ((*l_401) = (~255UL)), (*l_295));
        (*p_7) = (p_6 <= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((((g_406 = &g_185[4]) == l_407) || (*g_406)) <= ((*g_414) = ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0x66006FFAL, ((*l_316) = 0xF4D1F46AL))), 0L)) < (safe_rshift_func_int16_t_s_s(((func_28(g_125, g_414) <= g_187) | p_6), g_83[1][7][3]))))), 3L)), p_6)));
        (*l_316) = g_415;
    }
    for (g_182 = (-30); (g_182 > 23); ++g_182)
    {
        unsigned l_451[3][10][7] = {{{4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}}, {{4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}}, {{4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}, {4294967295UL, 0x620D03C9L, 0x9D8AEC21L, 1UL, 4294967295UL, 1UL, 0x1073F229L}}};
        int **l_488[2];
        char *l_509 = &g_79[1][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_488[i] = &g_414;
        p_8 = l_227;
        for (g_187 = 1; (g_187 <= 1); g_187++)
        {
            unsigned short *l_454[6][4] = {{&g_236[0], &g_236[0], &g_236[0], &g_236[0]}, {&g_236[0], &g_236[0], &g_236[0], &g_236[0]}, {&g_236[0], &g_236[0], &g_236[0], &g_236[0]}, {&g_236[0], &g_236[0], &g_236[0], &g_236[0]}, {&g_236[0], &g_236[0], &g_236[0], &g_236[0]}, {&g_236[0], &g_236[0], &g_236[0], &g_236[0]}};
            int l_467 = (-1L);
            int *l_493[7][5][4];
            char **l_510 = &g_224;
            const int * const l_518 = &l_467;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_493[i][j][k] = &g_161[4][1][1];
                }
            }
            for (g_160 = 0; (g_160 == 18); ++g_160)
            {
                unsigned l_428 = 0x97597BC2L;
                int *l_429 = &g_161[6][0][6];
                unsigned *l_432 = &g_260[2][2];
                short l_433 = 0L;
                unsigned char *l_443 = &g_162[0][4];
                int * const *l_492 = (void*)0;
                const int **l_499 = &g_399;
                for (g_14 = 3; (g_14 >= 0); g_14 -= 1)
                {
                    for (g_55 = 3; (g_55 >= 0); g_55 -= 1)
                    {
                        (*g_11) = 0x11A5E9F1L;
                    }
                    (*g_11) = ((*g_406) | 65535UL);
                }
            }
            (*p_7) = 0x38E35471L;
            if (((*p_7) = ((((safe_lshift_func_uint8_t_u_s(((g_109 < ((*g_406) >= ((void*)0 != &g_11))) == ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((65534UL == (&g_185[4] == l_454[1][3])), (safe_rshift_func_int8_t_s_u((((l_508[3] = l_447) != ((*l_510) = l_509)) <= 0x34F0L), g_236[0])))), g_79[0][1])) <= p_6)), 3)) || (-1L)) < g_79[1][1]) >= g_187)))
            {
                (*g_11) = (*g_399);
            }
            else
            {
                int l_519[7][2][5] = {{{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}, {{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}, {{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}, {{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}, {{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}, {{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}, {{(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}, {(-1L), (-1L), 0x77A0CF33L, (-1L), (-1L)}}};
                int i, j, k;
                (*g_356) = func_32((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_64((safe_mod_func_uint32_t_u_u(p_6, 1UL)), (g_236[0] = (l_517 = (+1UL))), l_518, l_519[3][0][3]), ((*g_406) = 0xD963L))), 0x28L)), l_519[3][0][3], p_6);
            }
            if ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(0UL, (p_6 | (safe_sub_func_int8_t_s_s((((*l_447) = g_100[4][1]) | (safe_add_func_uint32_t_u_u((~p_6), (*p_7)))), (safe_unary_minus_func_uint32_t_u((p_6 >= p_6)))))))) >= (safe_lshift_func_int16_t_s_s(func_58(func_32(p_6, (*p_7), p_6), g_491, g_187), 15))), p_6)), p_6)))
            {
                for (g_160 = 3; (g_160 >= (-17)); g_160 = safe_sub_func_uint16_t_u_u(g_160, 3))
                {
                    return p_7;
                }
            }
            else
            {
                l_493[5][4][0] = (g_414 = ((*g_356) = func_32((g_114 && 0x0D98FE43L), (*g_414), (*g_406))));
            }
        }
    }
    (*g_414) = (*g_399);
    (*p_7) = func_36(((*l_545) = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((*l_544) = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*g_406) | (*g_406)), g_161[0][0][0])), 3))), (*g_406))), 3)) < 0L)), p_6, p_6, (*g_11));
    return (*g_356);
}







static unsigned char func_24(int * p_25)
{
    (*g_11) = (*p_25);
    return g_14;
}







static unsigned char func_28(unsigned p_29, int * p_30)
{
    return g_79[0][1];
}







static int * func_32(int p_33, int p_34, short p_35)
{
    const int * const l_217 = &g_187;
    const int *l_219 = &g_14;
    const int **l_218[4][7][9] = {{{(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}}, {{(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}}, {{(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}}, {{(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}, {(void*)0, &l_219, &l_219, &l_219, &l_219, &l_219, (void*)0, (void*)0, &l_219}}};
    const int **l_220 = &l_219;
    int i, j, k;
    (*l_220) = l_217;
    return &g_187;
}







static char func_36(unsigned p_37, int p_38, int p_39, int p_40)
{
    (*g_205) = 4L;
    return p_38;
}







static int func_41(unsigned short p_42, unsigned char p_43, char p_44, const unsigned char p_45, unsigned char p_46)
{
    int *l_196 = (void*)0;
    int l_204 = 0x84B152E2L;
    char * const *l_211 = (void*)0;
    for (p_43 = (-10); (p_43 == 41); ++p_43)
    {
        int *l_54 = &g_55;
        unsigned short l_214[8][5][6] = {{{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}, {{0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}, {0x6FB3L, 1UL, 0xCDC6L, 0x3C3AL, 0xE6F0L, 0xDA1BL}}};
        int i, j, k;
        for (p_42 = 0; (p_42 == 16); ++p_42)
        {
            char l_53 = 5L;
            return l_53;
        }
        (*l_54) = g_14;
        if ((safe_mod_func_uint8_t_u_u(func_58(&g_14, (*l_54), p_44), (+(g_162[0][7] = 1UL)))))
        {
            for (g_187 = 0; (g_187 == 21); g_187++)
            {
                int **l_197 = &l_196;
                (*l_197) = l_196;
                (*l_197) = l_54;
                (*l_197) = &g_187;
                if ((*l_196))
                    continue;
            }
            g_161[2][1][4] = (safe_sub_func_int32_t_s_s((*l_54), g_185[4]));
        }
        else
        {
            const unsigned char l_206 = 0xF2L;
            unsigned l_210 = 0x8B055CD9L;
            if ((safe_rshift_func_int16_t_s_s(((0x2CC7L <= (safe_rshift_func_int16_t_s_u((&p_44 != (void*)0), 1))) < (p_46 = func_58(l_54, (g_79[0][1] >= (((*g_86) == (void*)0) >= g_14)), l_204))), 10)))
            {
                g_205 = &g_55;
            }
            else
            {
                unsigned short l_209 = 0xCD56L;
                char *l_213 = &g_79[1][0];
                char **l_212 = &l_213;
                if (l_206)
                    break;
                (*l_54) = (l_210 = ((safe_rshift_func_int8_t_s_u(g_162[0][7], l_209)) & 0x2BL));
                (*l_54) = (l_211 != l_212);
                return l_214[0][3][3];
            }
        }
    }
    return p_44;
}







static const unsigned char func_58(const int * p_59, unsigned p_60, unsigned p_61)
{
    int *l_62[6][6] = {{&g_55, &g_55, &g_55, &g_55, &g_14, &g_55}, {&g_55, &g_55, &g_55, &g_55, &g_14, &g_55}, {&g_55, &g_55, &g_55, &g_55, &g_14, &g_55}, {&g_55, &g_55, &g_55, &g_55, &g_14, &g_55}, {&g_55, &g_55, &g_55, &g_55, &g_14, &g_55}, {&g_55, &g_55, &g_55, &g_55, &g_14, &g_55}};
    char l_63 = 0L;
    unsigned l_69 = 0x62954F61L;
    volatile char **l_128 = &g_87[4][1];
    unsigned short l_143 = 0xE236L;
    int **l_191 = &l_62[4][3];
    int *l_193 = (void*)0;
    int **l_192 = &l_193;
    int i, j;
    l_63 = 0x0D8AC507L;
    g_83[1][5][4] = func_64(l_69, (((safe_unary_minus_func_int16_t_s(p_61)) == p_60) != p_61), &g_55, g_55);
    for (p_60 = 0; (p_60 != 57); ++p_60)
    {
        const int *l_130 = (void*)0;
        const int **l_129 = &l_130;
        const char *l_145 = &g_79[0][1];
        int l_169 = 0xB705B545L;
        unsigned l_186[9][8][3] = {{{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}, {{0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}, {0x96A5D4AFL, 0x2BBB44E8L, 0x96A5D4AFL}}};
        int i, j, k;
        l_128 = g_86;
        (*l_129) = p_59;
        for (g_55 = (-15); (g_55 <= (-7)); g_55 = safe_add_func_int8_t_s_s(g_55, 2))
        {
            unsigned l_134 = 1UL;
            int l_135[1][1][7] = {{{9L, (-1L), 9L, (-1L), 9L, (-1L), 9L}}};
            short l_190[3][1][5] = {{{(-1L), 0x73C7L, 0x8CDEL, 0x8CDEL, 0x73C7L}}, {{(-1L), 0x73C7L, 0x8CDEL, 0x8CDEL, 0x73C7L}}, {{(-1L), 0x73C7L, 0x8CDEL, 0x8CDEL, 0x73C7L}}};
            int i, j, k;
        }
    }
    (*l_192) = ((*l_191) = &g_14);
    return g_161[6][0][6];
}







static int func_64(char p_65, unsigned short p_66, const int * const p_67, short p_68)
{
    int *l_75 = &g_14;
    char *l_78 = &g_79[0][1];
    int *l_80 = (void*)0;
    int *l_81[4][6][8] = {{{&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}}, {{&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}}, {{&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}}, {{&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}, {&g_14, &g_14, &g_55, &g_55, &g_14, &g_55, &g_14, &g_55}}};
    short l_82 = 0xE3ACL;
    int i, j, k;
    l_82 = (0x7ABE3335L | ((safe_sub_func_int32_t_s_s((*p_67), (safe_lshift_func_int16_t_s_s((g_55 | (((((void*)0 != l_75) >= ((void*)0 != p_67)) ^ (((*l_78) = (safe_rshift_func_uint16_t_u_s((p_65 | 1L), 14))) >= (-8L))) | (-5L))), p_66)))) | 1UL));
    g_55 = (*l_75);
    return g_55;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_79[i][j], "g_79[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_94[i][j], "g_94[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_100[i][j], "g_100[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_106[i][j], "g_106[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_161[i][j][k], "g_161[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_162[i][j], "g_162[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_182, "g_182", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_236[i], "g_236[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_260[i][j], "g_260[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
