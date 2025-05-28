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



static volatile int g_2[8] = {(-1L), (-7L), (-1L), (-7L), (-1L), (-7L), (-1L), (-7L)};
static int g_3 = 1L;
static volatile int g_6 = 0xF3690F1DL;
static int g_7 = (-7L);
static unsigned short g_31 = 65535UL;
static unsigned short g_39[1][10][2] = {{{0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}, {0UL, 0x151CL}}};
static unsigned char g_42 = 0x40L;
static char g_63 = (-1L);
static int g_78 = (-10L);
static char g_89 = (-7L);
static int * volatile g_91[6][7][2] = {{{&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}}, {{&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}}, {{&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}}, {{&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}}, {{&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}}, {{&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}, {&g_7, &g_3}}};
static int * volatile *g_90 = &g_91[1][1][0];
static int g_99 = (-1L);
static int *g_98 = &g_99;
static char g_109 = (-1L);
static unsigned char g_112 = 1UL;
static char g_115 = (-5L);
static short g_137 = 0x53B5L;
static unsigned short g_150 = 0x36CAL;
static unsigned short g_152 = 0x57DAL;
static unsigned g_156 = 0x1F8A6136L;
static volatile unsigned char *g_197 = (void*)0;
static volatile unsigned char **g_196 = &g_197;
static unsigned char *g_201 = &g_42;
static unsigned *g_237 = &g_156;
static int g_291 = 0xEC5E2515L;
static volatile char * volatile **g_316 = (void*)0;
static unsigned g_334 = 0x3339C9CAL;
static unsigned g_404 = 0x49729E21L;
static unsigned g_422[6][5][6] = {{{4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}}, {{4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}}, {{4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}}, {{4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}}, {{4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}}, {{4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}, {4294967295UL, 4294967291UL, 0xCEE544E4L, 0xF4375B63L, 4294967295UL, 0xC8EBF6A7L}}};
static unsigned g_426[3] = {0x81730C0EL, 0x81730C0EL, 0x81730C0EL};
static unsigned char **g_457[4][5][3] = {{{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}};
static char *g_460[3][7] = {{&g_63, &g_63, &g_109, &g_63, &g_63, &g_109, &g_63}, {&g_63, &g_63, &g_109, &g_63, &g_63, &g_109, &g_63}, {&g_63, &g_63, &g_109, &g_63, &g_63, &g_109, &g_63}};
static char **g_459 = &g_460[1][2];
static char **g_461 = (void*)0;
static volatile char * volatile g_579 = (void*)0;
static volatile char * volatile *g_578[5] = {&g_579, &g_579, &g_579, &g_579, &g_579};
static volatile char * volatile **g_577 = &g_578[0];
static unsigned **g_610 = (void*)0;
static short g_645 = 0L;
static int * volatile g_664 = &g_99;
static int g_679 = 1L;
static int g_694 = 0x833E3BE0L;



static char func_1(void);
static int func_12(unsigned short p_13, unsigned short p_14);
static unsigned short func_19(short p_20, unsigned short p_21, int p_22, char p_23, int p_24);
static char func_26(short p_27, int p_28, int p_29);
static unsigned short func_32(int p_33);
static int func_43(unsigned p_44, int * p_45, unsigned char * p_46, int * p_47, int p_48);
static unsigned short func_57(char p_58, unsigned char p_59, unsigned p_60, int * p_61, int p_62);
static char func_64(int * p_65, unsigned p_66, unsigned p_67);
static int * func_68(int * p_69, int p_70, unsigned char * p_71);
static int * func_72(unsigned char * p_73);
static char func_1(void)
{
    unsigned l_680 = 0xF980C0BBL;
    unsigned char l_695[3][1][9];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
                l_695[i][j][k] = 1UL;
        }
    }
    for (g_3 = (-2); (g_3 <= 11); g_3 = safe_add_func_uint16_t_u_u(g_3, 9))
    {
        int l_687 = 0x7BCFE06BL;
        char **l_691 = (void*)0;
        for (g_7 = 0; (g_7 >= (-27)); g_7--)
        {
            short l_688 = 0xA04EL;
            int l_692 = (-6L);
            int *l_693 = &g_694;
            (*l_693) ^= (safe_lshift_func_uint8_t_u_s(((((((func_12(g_3, g_7) , (((l_680 , (safe_rshift_func_uint16_t_u_u((((*g_237) = (safe_sub_func_int32_t_s_s((+0L), (safe_mod_func_int32_t_s_s((l_687 , func_19(l_688, (((safe_mod_func_uint32_t_u_u(0x8392DBD7L, ((*g_237) = l_680))) , (void*)0) != l_691), l_680, l_680, l_687)), l_680))))) >= l_688), l_688))) , 0x61L) & l_680)) <= l_680) != l_680) | l_692) , l_692) & 0x3CB22FC2L), l_692));
        }
        if (l_680)
            continue;
        if (l_680)
            break;
    }



    ;
    return l_695[0][0][0];
}







static int func_12(unsigned short p_13, unsigned short p_14)
{
    unsigned l_25 = 0x926128F3L;
    unsigned char *l_30 = (void*)0;
    unsigned **l_662[9][6] = {{&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}, {&g_237, &g_237, (void*)0, &g_237, &g_237, &g_237}};
    unsigned ***l_661 = &l_662[7][5];
    unsigned l_663 = 1UL;
    int *l_678 = &g_679;
    int i, j;
    (*l_678) &= ((safe_sub_func_int32_t_s_s((((*g_237) = (safe_mod_func_uint16_t_u_u(p_13, func_19((l_25 ^ (g_7 & func_26(p_14, ((g_31 = g_3) > ((**g_459) = (func_32(l_25) | (safe_sub_func_uint8_t_u_u((&g_237 != ((*l_661) = &g_237)), l_25))))), l_663))), p_14, p_13, p_13, g_291)))) > 0x71CFD9EFL), 4294967287UL)) && l_25);
    (*g_90) = l_678;
    return p_13;
}







static unsigned short func_19(short p_20, unsigned short p_21, int p_22, char p_23, int p_24)
{
    unsigned short l_669 = 5UL;
    int *l_670 = &g_7;
    unsigned char *l_675 = &g_42;
    int *l_676[5][5][9] = {{{&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}}, {{&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}}, {{&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}}, {{&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}}, {{&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}, {&g_3, (void*)0, &g_7, &g_3, &g_3, &g_78, &g_99, &g_78, &g_3}}};
    char l_677 = 0xD7L;
    int i, j, k;
    for (g_31 = 0; (g_31 <= 22); g_31 = safe_add_func_int32_t_s_s(g_31, 9))
    {
        int *l_668 = &g_99;
        (*g_90) = l_668;
    }
    l_677 ^= ((((*g_237) = (l_669 != func_43((((g_89 & (*l_670)) < (*l_670)) , (*g_237)), l_670, l_675, &g_99, (*l_670)))) != 0x0C3E4558L) && (*l_670));

    ;
    return p_22;
}







static char func_26(short p_27, int p_28, int p_29)
{
    int l_665[3][7];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_665[i][j] = 3L;
    }
    (*g_90) = (void*)0;
    (*g_664) = ((-1L) > g_78);
    (*g_664) = 0L;
    return l_665[1][6];
}







static unsigned short func_32(int p_33)
{
    int *l_36 = &g_3;
    unsigned char *l_41[9] = {&g_42, &g_42, &g_42, &g_42, &g_42, &g_42, &g_42, &g_42, &g_42};
    int l_495 = 0x90C96A3DL;
    unsigned char l_496 = 255UL;
    int l_497 = 0x11B4F213L;
    int **l_503 = (void*)0;
    int *l_505 = &g_291;
    int **l_504 = &l_505;
    int *l_506 = &g_291;
    unsigned char ***l_536 = &g_457[2][1][2];
    int *l_597 = &g_291;
    int *l_620 = &g_99;
    int i;
    for (p_33 = 0; (p_33 != 1); p_33++)
    {
        int *l_37 = (void*)0;
        int *l_38 = (void*)0;
        unsigned char *l_40 = (void*)0;
        int *l_500 = &l_495;
    }
    for (g_78 = 0; (g_78 < (-24)); g_78 = safe_sub_func_uint8_t_u_u(g_78, 1))
    {
        return g_291;
    }
    if (((((*l_504) = (void*)0) != l_506) > (safe_add_func_uint8_t_u_u((*l_36), ((safe_lshift_func_uint8_t_u_u((*l_36), 4)) > (((*g_98) <= (*l_36)) != (((p_33 | p_33) <= (p_33 >= 0x62L)) == (*l_36))))))))
    {
        int l_513 = 0x807D5059L;
        int l_528 = 6L;
        int l_530 = 2L;
        unsigned short l_532 = 1UL;
        char l_534 = 0xE5L;
        unsigned char **l_537[10][10][2] = {{{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}, {{&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}, {&l_41[7], &l_41[7]}}};
        int *l_539[8];
        unsigned char *l_570 = &g_112;
        int l_582[6][5] = {{1L, 4L, 0x85DE8108L, 0x8374F5E6L, 4L}, {1L, 4L, 0x85DE8108L, 0x8374F5E6L, 4L}, {1L, 4L, 0x85DE8108L, 0x8374F5E6L, 4L}, {1L, 4L, 0x85DE8108L, 0x8374F5E6L, 4L}, {1L, 4L, 0x85DE8108L, 0x8374F5E6L, 4L}, {1L, 4L, 0x85DE8108L, 0x8374F5E6L, 4L}};
        int **l_594 = &l_505;
        unsigned **l_609 = &g_237;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_539[i] = &g_78;
        for (p_33 = 12; (p_33 < 6); --p_33)
        {
            (*g_98) = l_513;
        }
        for (g_156 = 0; (g_156 < 39); g_156 = safe_add_func_uint8_t_u_u(g_156, 8))
        {
            unsigned short *l_522 = (void*)0;
            unsigned short *l_523 = &g_150;
            int l_526 = 0L;
            short *l_527 = &g_137;
            char *l_531 = &g_115;
            unsigned short *l_533 = &g_152;
            unsigned char *l_535 = &g_42;
            int l_567 = (-4L);
            unsigned l_569 = 0UL;
            if (((**g_459) & (func_43((((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((g_39[0][1][1] = ((*l_523) = l_513)), ((((safe_lshift_func_int16_t_s_s((l_528 = ((*l_527) = l_526)), p_33)) ^ (*l_36)) > (&g_237 != ((safe_unary_minus_func_int32_t_s(((((*l_533) = ((0xC882F7D9L | (((*l_531) &= (l_530 = p_33)) == 0x76L)) , l_532)) < (-8L)) ^ l_534))) , (void*)0))) ^ 255UL))) ^ 0x02B3L), (*l_36))), p_33)) < p_33) , l_513), &g_7, l_535, &l_526, l_532) , l_526)))
            {
                unsigned char **l_538[10];
                unsigned *l_550 = &g_426[2];
                unsigned char *l_551 = &g_42;
                int l_552 = 0xB279E886L;
                int i;
                for (i = 0; i < 10; i++)
                    l_538[i] = (void*)0;
                l_539[5] = func_68(&l_526, (((g_3 , (g_457[1][3][1] = ((((*l_527) = 0xEBA4L) >= (l_536 == (void*)0)) , l_537[3][5][0]))) != l_538[4]) , p_33), l_531);


                l_526 |= (p_33 != ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((((*l_551) |= (((+(((*l_527) = ((*g_237) > p_33)) > 0x57C1L)) && g_115) || (((((p_33 ^ func_43(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((*l_533) |= (+(g_39[0][7][1] &= ((*l_523) = (safe_add_func_uint32_t_u_u((!(~p_33)), ((*l_550) = (func_43(((*l_550) &= (safe_unary_minus_func_uint8_t_u(p_33))), &l_530, l_531, &g_99, p_33) , (*g_237))))))))), 14)), 9)) , (*g_237)), &l_495, l_551, &l_495, p_33)) && p_33) | l_552) >= p_33) && 0x8338L))) | p_33))), 7L)) & (-7L)));


                l_552 = 0x6D220284L;
            }
            else
            {
                unsigned *l_563 = (void*)0;
                unsigned *l_564 = (void*)0;
                unsigned *l_565 = &g_334;
                int l_566 = 8L;
                int l_568 = 9L;
                l_566 = ((l_568 &= (~((safe_sub_func_uint8_t_u_u((((+(p_33 > ((*l_527) = (*l_36)))) || ((p_33 , func_68(&l_495, (((l_526 = (safe_mod_func_uint16_t_u_u(((*g_237) || (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_33, ((*l_565) |= (4294967295UL | (safe_sub_func_int32_t_s_s(p_33, (*g_237))))))), l_566))), l_526))) <= 247UL) , 1L), &l_496)) == (*g_90))) >= l_567), 0x6BL)) && 0x85L))) , l_569);


                l_566 = (!(p_33 , p_33));
            }
        }



        if ((p_33 < 1UL))
        {
            return g_115;


        }
        else
        {
            unsigned short l_593 = 0x253EL;
            unsigned char *l_596 = &g_42;
            int *l_612 = &g_78;
            int l_616 = (-5L);
            for (g_152 = 15; (g_152 >= 51); g_152 = safe_add_func_int32_t_s_s(g_152, 1))
            {
                int ***l_595[1][2][6] = {{{&l_594, &l_594, &l_594, &l_594, &l_594, &l_594}, {&l_594, &l_594, &l_594, &l_594, &l_594, &l_594}}};
                int l_598 = 0x9F4CA683L;
                int l_599 = (-1L);
                unsigned ***l_611 = &l_609;
                unsigned char l_613 = 0UL;
                int i, j, k;
                l_599 |= (safe_mod_func_int32_t_s_s((p_33 >= (((&g_291 != ((*l_504) = l_597)) <= (**g_459)) >= l_598)), 0x6B4B0FF0L));

                ;
                (*l_612) = (safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(((((**g_459) = (!(safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(p_33, 7)), 3)) < g_137), (l_599 ^ (&g_237 != ((*l_611) = (g_610 = l_609)))))))) < ((void*)0 != (*g_577))) > (*l_36)))) > func_43((((l_593 , (void*)0) != (void*)0) || p_33), &g_78, l_596, l_612, l_613)), 0L));

                ;
                ;
            }

            ;
            l_616 |= ((*l_612) = (0x27A9L <= p_33));
        }

        ;
    }
    else
    {
        int *l_617 = &g_78;
        unsigned char *l_618 = &g_42;
        int **l_619 = &l_617;
        unsigned ***l_635 = &g_610;
        unsigned char l_650[3];
        int i;
        for (i = 0; i < 3; i++)
            l_650[i] = 5UL;
        l_620 = ((*l_619) = func_68(((*g_237) , l_617), (*l_36), l_618));


        ;
        for (g_150 = 0; (g_150 <= 39); g_150 = safe_add_func_uint8_t_u_u(g_150, 4))
        {
            unsigned short l_625 = 65530UL;
            unsigned char **l_628 = &l_618;
            int *l_629 = &g_3;
            char l_651 = (-1L);
            (*l_619) = (*l_619);
            for (g_115 = 1; (g_115 <= 7); g_115 += 1)
            {
                short *l_626 = &g_137;
                unsigned char **l_627 = (void*)0;
                int l_630 = 0L;
                int i;
                g_2[g_115] = (((((*l_626) ^= (((safe_lshift_func_int8_t_s_s((*l_36), 1)) > l_625) , p_33)) <= g_42) < ((*l_36) , ((l_627 == l_628) , func_43(((l_625 != 0x40612D27L) , 0x520998B1L), l_629, (*l_628), &g_3, l_630)))) || (*l_617));

                ;
                if ((*g_98))
                    continue;
                if (p_33)
                    break;
                if ((*l_617))
                    break;
                for (g_334 = 0; (g_334 <= 1); g_334 += 1)
                {
                    short *l_644[5][3] = {{&g_645, &g_645, &g_645}, {&g_645, &g_645, &g_645}, {&g_645, &g_645, &g_645}, {&g_645, &g_645, &g_645}, {&g_645, &g_645, &g_645}};
                    unsigned char *l_648[10][5] = {{&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}, {&g_42, &g_42, &g_112, &g_42, (void*)0}};
                    int i, j, k;
                }
            }
        }


        for (g_150 = 0; (g_150 < 18); g_150++)
        {
            (*g_90) = (*l_619);
        }
    }



    ;
    ;
    return g_115;


}







static int func_43(unsigned p_44, int * p_45, unsigned char * p_46, int * p_47, int p_48)
{
    int *l_498 = &g_99;
    int **l_499 = &g_98;
    (*l_499) = l_498;

    ;
    return (*l_498);
}







static unsigned short func_57(char p_58, unsigned char p_59, unsigned p_60, int * p_61, int p_62)
{
    unsigned char *l_74 = &g_42;
    unsigned *l_113 = (void*)0;
    unsigned *l_114 = (void*)0;
    int l_118 = 0L;
    int **l_120 = &g_98;
    unsigned l_121 = 0x7E09DBB3L;
    int l_122[7];
    int *l_462 = &g_78;
    unsigned l_467 = 0xC94128A3L;
    unsigned l_482 = 0x9EDFD804L;
    unsigned l_494[9][4][7] = {{{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}, {{0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}, {0x4281FB8EL, 0x8C8F85F2L, 0xD5FD6842L, 4294967295UL, 2UL, 0xDFD9E4FDL, 4294967292UL}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_122[i] = 0x495124C2L;
    (*l_462) = (0xD1L || ((((((func_64(((*l_120) = func_68(func_72(l_74), ((((((g_115 = 0xE92913E6L) && p_58) , (((g_39[0][1][1] , ((((safe_mod_func_uint16_t_u_u((0x7394L & g_3), g_3)) == l_118) & p_60) <= p_62)) && g_42) >= l_118)) , 65535UL) == g_3) , 0xB4F6F77BL), &g_42)), l_121, l_122[0]) < p_59) >= l_118) & g_3) <= p_59) == p_58) > 1UL));


    ;

    ;
    for (g_78 = 2; (g_78 >= 0); g_78 -= 1)
    {
        unsigned char *l_463 = &g_42;
        int l_465 = 0xE8D31921L;
        int *l_472 = &l_118;
        int i;
        (*l_120) = func_68(&g_99, (*l_462), l_463);

        ;
        if ((safe_unary_minus_func_int32_t_s((p_58 > 0x216BL))))
        {
            unsigned short l_466 = 0UL;
            if ((*g_98))
                break;
            l_465 = (p_62 = (l_466 = l_465));
            g_99 = (!0xBEC1EA12L);
        }
        else
        {
            p_62 = l_467;
        }
        (*l_472) &= ((*g_201) || (p_60 == (safe_add_func_int32_t_s_s((*l_462), (g_426[g_78] |= p_58)))));
        for (l_465 = 0; (l_465 <= 2); l_465 += 1)
        {
            int **l_473[4][5][2];
            int l_484 = 1L;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_473[i][j][k] = &g_98;
                }
            }
            p_62 = (((l_473[0][4][1] = &p_61) != (void*)0) ^ (g_99 = (*g_98)));


            if ((*g_98))
                break;
            for (g_291 = 0; (g_291 <= 2); g_291 += 1)
            {
                unsigned **l_483 = (void*)0;
                int l_492[10] = {8L, 0x6CD2EA72L, 8L, 0x6CD2EA72L, 8L, 0x6CD2EA72L, 8L, 0x6CD2EA72L, 8L, 0x6CD2EA72L};
                char *l_493[8] = {&g_63, (void*)0, &g_63, (void*)0, &g_63, (void*)0, &g_63, (void*)0};
                int i, j;
                l_484 &= (((*g_201) = 255UL) < (safe_rshift_func_uint16_t_u_s((&g_237 != (((safe_mod_func_int8_t_s_s(p_59, p_59)) >= ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((&p_58 == (void*)0) & g_150) , (((*l_120) = ((((*l_472) ^ (g_422[0][4][4] , l_482)) , p_60) , (void*)0)) == &g_7)), p_59)) & 0L), (*l_472))) || p_59)) , l_483)), 9)));

                ;
                (*l_120) = &p_62;

                ;
                g_99 ^= (p_60 , (safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u(((p_58 = (((*l_472) <= ((**l_120) = (p_62 >= ((safe_add_func_int32_t_s_s(((-1L) ^ (safe_sub_func_int32_t_s_s((*l_472), ((l_492[4] < (*g_98)) <= (-8L))))), p_60)) < g_156)))) , p_60)) <= (*l_472)), (*l_472))))));
            }
        }

        ;
    }


    return l_494[4][3][0];


}







static char func_64(int * p_65, unsigned p_66, unsigned p_67)
{
    unsigned *l_123 = (void*)0;
    unsigned char *l_132[2][4][4] = {{{&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}}, {{&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}, {&g_42, &g_42, &g_42, &g_42}}};
    unsigned char **l_131 = &l_132[1][0][3];
    int l_147 = 1L;
    unsigned short l_154 = 0x1554L;
    short l_310 = 0xDC05L;
    unsigned short l_336 = 0x3382L;
    char *l_377 = &g_63;
    char **l_376[5] = {&l_377, (void*)0, &l_377, (void*)0, &l_377};
    unsigned char l_381 = 0UL;
    int i, j, k;
    if ((g_98 != (g_7 , l_123)))
    {
        short *l_138 = (void*)0;
        int l_165 = 7L;
        unsigned char *l_170 = &g_42;
        int l_185 = (-2L);
        int *l_209 = &l_165;
        int **l_245 = &g_98;
        char l_351 = 0xA9L;
        int l_371 = 6L;
        if ((safe_rshift_func_uint16_t_u_u(g_109, 15)))
        {
            (*g_98) &= 0x3FB221D9L;
        }
        else
        {
            short l_164 = 0xE583L;
            int l_173 = 0xC042F281L;
            unsigned l_192 = 1UL;
            short *l_240 = &g_137;
            char *l_248 = &g_109;
            char **l_333 = &l_248;
            char ***l_332 = &l_333;
            if ((*p_65))
            {
                unsigned l_134 = 0xC3FFF759L;
                short *l_136 = &g_137;
                int l_142 = 0x7237AF67L;
                int l_153[6][3][7] = {{{3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}}, {{3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}}, {{3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}}, {{3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}}, {{3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}}, {{3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}, {3L, 0x68C3A653L, 0xAF1AC7F9L, 0x02811D3EL, (-10L), 0x625C23C1L, (-10L)}}};
                int i, j, k;
                for (g_63 = 7; (g_63 != (-9)); g_63 = safe_sub_func_int8_t_s_s(g_63, 1))
                {
                    int **l_128 = &g_98;
                    unsigned char **l_133 = &l_132[0][0][0];
                    int l_157 = 0x67276F1CL;
                    (*l_128) = p_65;
                    if ((*p_65))
                    {
                        unsigned l_129 = 0x6E363805L;
                        int *l_130 = &g_99;
                        (**l_128) = l_129;
                        (*l_130) = ((**l_128) = (*g_98));
                    }
                    else
                    {
                        if ((*g_98))
                            break;
                        (*l_128) = (void*)0;

                        ;
                    }

                    ;
                    l_133 = l_131;
                    if (l_134)
                    {
                        unsigned short l_135[8] = {0xF9C7L, 0x94AEL, 0xF9C7L, 0x94AEL, 0xF9C7L, 0x94AEL, 0xF9C7L, 0x94AEL};
                        int i;
                        (*p_65) |= l_135[3];
                        return p_66;
                    }
                    else
                    {
                        int l_141 = 5L;
                        unsigned l_148 = 0x8F1AC0AFL;
                        unsigned short *l_149 = &g_150;
                        unsigned short *l_151 = &g_152;
                        unsigned short *l_155[5] = {&l_154, &l_154, &l_154, &l_154, &l_154};
                        int i;
                        if ((*p_65))
                            break;
                        (*l_128) = ((l_157 = (((g_156 = (((((l_153[3][0][4] = (p_66 <= (((((*l_151) ^= ((*l_149) = (((l_136 != l_138) , ((safe_add_func_int32_t_s_s(l_141, g_109)) != (l_142 |= 65529UL))) , (g_39[0][1][1] ^= (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_147, (p_67 != ((p_67 , 0xDC0AD4A3L) ^ 0xCAFD7A66L)))), l_148)))))) < 0x3624L) , p_66) > g_42))) , l_154) || 3L) >= l_147) , g_115)) , l_153[3][0][2]) , l_148)) , &g_3);

                        ;
                        return (**l_128);
                    }
                }

                ;
                for (p_67 = 0; (p_67 <= 0); p_67 += 1)
                {
                    int *l_166[2][2][10] = {{{&g_78, &l_153[2][1][5], &g_78, &l_153[0][2][6], &g_78, &g_99, &g_78, &g_78, &g_99, &g_78}, {&g_78, &l_153[2][1][5], &g_78, &l_153[0][2][6], &g_78, &g_99, &g_78, &g_78, &g_99, &g_78}}, {{&g_78, &l_153[2][1][5], &g_78, &l_153[0][2][6], &g_78, &g_99, &g_78, &g_78, &g_99, &g_78}, {&g_78, &l_153[2][1][5], &g_78, &l_153[0][2][6], &g_78, &g_99, &g_78, &g_78, &g_99, &g_78}}};
                    int i, j, k;
                    if ((g_99 = ((*p_65) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(252UL, (l_147 | 0x5D7992C5L))), (safe_sub_func_int32_t_s_s(l_164, 0L)))))))
                    {
                        return l_165;
                    }
                    else
                    {
                        int **l_167 = &l_166[1][1][6];
                        (*l_167) = l_166[1][1][6];
                        (*p_65) = ((safe_sub_func_uint8_t_u_u(p_67, p_67)) == ((&p_66 != (g_156 , func_68(&g_99, l_134, l_170))) | 0x2E47L));


                        l_173 &= (safe_rshift_func_int8_t_s_s(p_67, p_66));
                    }


                    for (g_109 = 2; (g_109 >= 0); g_109 -= 1)
                    {
                        l_165 = (*p_65);
                    }
                }


            }
            else
            {
                int *l_184[3];
                unsigned char *l_212[2];
                unsigned **l_226 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_184[i] = &l_165;
                for (i = 0; i < 2; i++)
                    l_212[i] = (void*)0;
                if (((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_39[0][1][1], (safe_mod_func_uint32_t_u_u((((g_99 > (0x0613AA2FL > (g_39[0][8][1] != g_99))) & (((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((l_165 &= (*p_65)), l_185)), (safe_sub_func_int32_t_s_s(0x91180856L, (((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(65531UL, 4)) <= l_173), g_137)) < l_192) && 255UL))))) >= p_67) , 0xCDD5L)) , p_67), g_99)))), (*g_98))) && p_66))
                {
                    unsigned char *l_198[6] = {&g_42, &g_42, &g_42, &g_42, &g_42, &g_42};
                    int i;
                    if ((*g_98))
                    {
                        unsigned char ***l_195 = &l_131;
                        unsigned char **l_199 = (void*)0;
                        unsigned char **l_200[2];
                        unsigned **l_202 = &l_123;
                        unsigned *l_204[7] = {&g_156, &g_156, &g_156, &g_156, &g_156, &g_156, &g_156};
                        unsigned **l_203 = &l_204[3];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_200[i] = &l_132[1][0][3];
                        (*p_65) = (safe_lshift_func_int16_t_s_s((((*l_195) = (void*)0) == g_196), 14));

                        ;
                        (*p_65) = (((((*l_202) = ((*p_65) , func_68(&g_99, ((+g_156) & p_66), (g_201 = (l_132[1][0][3] = l_198[0]))))) == ((*l_203) = &l_192)) , ((((**l_203) = ((1L > ((((*p_65) > 4294967295UL) && (*p_65)) >= 0x3AL)) > l_173)) , g_7) | g_63)) || p_67);


                        ;

                        l_147 = 0xFB464CA6L;
                    }
                    else
                    {
                        int l_205 = (-7L);
                        int l_206[9][6] = {{0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}, {0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL, 0x2CAA5028L, 0xECA2463EL}};
                        int **l_207 = (void*)0;
                        int **l_208 = (void*)0;
                        int i, j;
                        l_206[4][3] = ((*p_65) ^= l_205);
                        g_99 ^= (*p_65);
                        l_209 = p_65;

                        ;
                    }


                    ;
                    ;
                    ;
                    return g_7;
                }
                else
                {
                    short l_210 = (-1L);
                    int **l_211 = &l_184[2];
                    l_210 ^= (0x285D8874L & (*g_98));
                    (*l_211) = (void*)0;


                    (*l_211) = func_72(l_212[1]);



                }



                for (l_185 = 0; (l_185 <= 29); l_185++)
                {
                    unsigned char l_221 = 1UL;
                    int *l_222 = &g_7;
                    for (l_165 = 0; (l_165 <= (-2)); l_165 = safe_sub_func_int16_t_s_s(l_165, 5))
                    {
                        unsigned short l_217[7][4][6] = {{{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}, {{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}, {{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}, {{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}, {{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}, {{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}, {{0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}, {0x3510L, 0x20E7L, 0xD62FL, 0x20E7L, 0x3510L, 65534UL}}};
                        unsigned *l_220 = (void*)0;
                        int i, j, k;
                        (*p_65) = l_164;
                        if (l_217[2][1][2])
                            break;
                        l_221 &= ((((g_7 , ((*p_65) || (((0x6F64L && p_66) , ((safe_mod_func_int16_t_s_s(((g_156 = (p_67 == (g_3 == g_99))) && p_66), ((g_112 , p_66) || (*l_209)))) , p_67)) != l_173))) , 0xAC4171A6L) , 0xAFL) & p_67);
                        (*p_65) = (*l_209);
                    }
                    for (g_152 = 0; (g_152 <= 1); g_152 += 1)
                    {
                        int **l_223[10] = {&l_222, &l_184[2], &l_184[1], &l_184[1], &l_184[2], &l_222, &l_184[2], &l_184[1], &l_184[1], &l_184[2]};
                        int i;
                        l_209 = l_222;

                        ;
                        l_165 = l_154;
                        (*p_65) = (*p_65);
                    }
                }

                ;
                l_185 &= (((((((*p_65) > ((safe_lshift_func_uint16_t_u_s(((void*)0 != l_226), (g_112 || (safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((((safe_mod_func_int8_t_s_s(g_115, l_147)) , 4294967295UL) , (((p_67 < (safe_sub_func_uint32_t_u_u(((g_237 = (void*)0) != &g_156), g_137))) <= g_137) | (*g_201))) , g_7) && (-1L)), g_3)), l_192)) , 0x14BEL), g_39[0][1][1]))))) , 0x4FEF692BL)) , (*l_209)) && p_66) , l_154) & g_137) <= 9UL);

                ;
            }


            ;
            ;
            if (((*p_65) = ((safe_add_func_int16_t_s_s(((*l_240) = (-1L)), ((safe_rshift_func_int8_t_s_u(0L, 7)) , ((safe_sub_func_int32_t_s_s(((void*)0 != l_245), (g_156 ^= p_66))) ^ (safe_lshift_func_int8_t_s_s((l_154 ^ ((*l_248) = g_112)), ((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((*p_65))) , ((((*l_209) , (-6L)) >= p_67) , g_7)), p_66)) , g_78))))))) ^ (*g_201))))
            {
                int l_254 = 0x4962A275L;
                int l_267 = (-1L);
                short *l_274 = &l_164;
                (*p_65) = (safe_lshift_func_uint8_t_u_u((((l_254 || ((l_248 != l_248) < p_67)) < ((((l_147 == (*g_201)) | l_254) , p_66) , ((safe_mod_func_int16_t_s_s(0x80E3L, g_78)) && g_42))) , 0x89L), (*g_201)));
                for (g_152 = 21; (g_152 == 12); g_152 = safe_sub_func_int16_t_s_s(g_152, 1))
                {
                    (*l_245) = (void*)0;

                    ;
                    (*l_245) = &g_7;

                    ;
                }
                for (g_78 = 0; (g_78 >= 0); g_78 -= 1)
                {
                    int l_259[8][6][4] = {{{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}, {{0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}, {0xA9CC61E1L, (-7L), 0x832B8480L, (-5L)}}};
                    char **l_268 = &l_248;
                    int i, j, k;
                    for (g_115 = 0; (g_115 >= 0); g_115 -= 1)
                    {
                        l_259[5][5][1] |= 0x3A803903L;
                        return g_137;
                    }
                    if ((*l_209))
                    {
                        g_99 &= g_115;
                    }
                    else
                    {
                        return g_7;
                    }
                    for (p_66 = 0; (p_66 <= 1); p_66 += 1)
                    {
                        unsigned char l_262 = 0x8EL;
                        unsigned short *l_266[2][5][7] = {{{&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}}, {{&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}, {&g_39[0][7][1], &l_154, (void*)0, &g_152, (void*)0, &l_154, &g_39[0][7][1]}}};
                        int i, j, k;
                        g_98 = &g_99;

                        ;
                        (*g_98) = 0x7ED58450L;
                        (*l_245) = ((((+(*g_201)) && (safe_add_func_int16_t_s_s(p_67, g_99))) != ((l_254 != l_259[5][5][1]) != (l_262 & ((l_259[5][5][1] != (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_s(l_262, 5))))) || (l_267 = (~(l_173 &= ((*g_98) >= (*g_98))))))))) , (*l_245));
                    }
                    if ((*p_65))
                        continue;
                    for (g_109 = 1; (g_109 >= 0); g_109 -= 1)
                    {
                        char ***l_269 = &l_268;
                        int l_275 = (-3L);
                        int *l_276 = (void*)0;
                        int *l_277[1][9] = {{&l_254, &l_254, &l_254, &l_254, &l_254, &l_254, &l_254, &l_254, &l_254}};
                        int **l_278 = &l_276;
                        int i, j;
                        (*l_269) = l_268;
                        l_267 = (safe_mod_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((*g_201) , ((*l_240) = p_66)), ((((g_109 , l_274) == (l_138 = &l_164)) != (p_67 , l_275)) ^ ((g_39[0][1][1] || p_67) , (*g_201))))) <= 0x7F3C10D4L), (-3L)));

                        ;
                        l_165 = 0x5FD4D0D6L;
                        (*l_278) = ((*l_245) = (void*)0);

                        ;
                    }
                }


                ;
            }
            else
            {
                int *l_290 = &l_147;
                unsigned short l_328 = 0xB25EL;
                unsigned char *l_329 = &g_112;
                unsigned short *l_335 = &g_152;
                int *l_337 = &g_99;
                for (g_99 = 0; (g_99 < (-11)); g_99--)
                {
                    unsigned l_284[8][6] = {{0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}, {0xFD137E3EL, 0xFD137E3EL, 4UL, 0xFD137E3EL, 0xFD137E3EL, 4UL}};
                    int **l_285 = (void*)0;
                    int **l_286 = &g_98;
                    int **l_287 = &g_98;
                    int **l_288 = &g_98;
                    int **l_289 = &l_209;
                    int i, j;
                    for (g_42 = 0; (g_42 < 49); ++g_42)
                    {
                        short l_283 = 0L;
                        if (l_283)
                            break;
                        (*p_65) = l_147;
                    }
                    l_284[0][0] = (g_137 , l_173);
                    g_291 |= (((*l_289) = &l_147) != l_290);

                    ;
                }

                ;
                for (g_152 = 0; (g_152 == 12); g_152 = safe_add_func_uint32_t_u_u(g_152, 1))
                {
                    (*l_290) &= l_173;
                    for (g_291 = 0; (g_291 != (-17)); g_291--)
                    {
                        (*l_245) = &g_3;

                        ;
                        (*l_245) = (void*)0;

                        ;
                    }
                    return g_63;
                }
                if ((safe_lshift_func_uint8_t_u_u((!0xF0L), ((*g_201) , 0x86L))))
                {
                    unsigned char l_306[10][2][7] = {{{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}, {{9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}, {9UL, 0xD3L, 0x47L, 0xD3L, 9UL, 0x8DL, 0x47L}}};
                    int l_309[5][1][6] = {{{0x24261E47L, 0x67602860L, 1L, 0L, 1L, 0x67602860L}}, {{0x24261E47L, 0x67602860L, 1L, 0L, 1L, 0x67602860L}}, {{0x24261E47L, 0x67602860L, 1L, 0L, 1L, 0x67602860L}}, {{0x24261E47L, 0x67602860L, 1L, 0L, 1L, 0x67602860L}}, {{0x24261E47L, 0x67602860L, 1L, 0L, 1L, 0x67602860L}}};
                    int i, j, k;
                    (*p_65) = 0x665E865EL;
                    g_98 = p_65;

                    ;
                    (*l_290) = (l_173 || (((safe_lshift_func_int16_t_s_u(((((*l_240) ^= (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_112, (g_39[0][1][1] < p_67))), (+l_173))) >= 65535UL), ((((l_306[4][1][1] = 1L) >= p_66) & (safe_rshift_func_int16_t_s_u((*l_209), g_99))) | l_309[3][0][0])))) > p_67) <= l_310), 0)) ^ l_147) > l_310));
                }
                else
                {
                    char l_313 = 0x7CL;
                    char **l_318 = &l_248;
                    char ***l_317 = &l_318;
                    for (g_291 = 8; (g_291 < 18); g_291 = safe_add_func_uint32_t_u_u(g_291, 1))
                    {
                        unsigned short *l_321 = &g_152;
                        unsigned *l_326 = (void*)0;
                        unsigned *l_327 = &g_156;
                        l_313 = ((*l_290) = 0x625CBE15L);
                        (*l_290) &= (((g_112 = (safe_lshift_func_uint8_t_u_s(((*g_201) = (*g_201)), p_67))) , 0x0327AA73L) , (g_316 == l_317));
                        (*p_65) = (((safe_add_func_uint16_t_u_u(((*l_321) |= 0xD5C1L), ((((*l_327) = (safe_add_func_uint16_t_u_u(g_89, (safe_mod_func_uint16_t_u_u(p_66, (l_154 || (((g_150 , ((*l_290) , g_39[0][1][1])) , (l_154 & (l_310 & (*g_201)))) == l_147))))))) < l_164) >= 9L))) == l_328) , (-1L));
                        (*l_245) = func_68(&g_99, (*p_65), l_329);

                        ;
                    }
                }
                (*l_290) = ((*l_337) &= ((g_152 >= g_112) , (((*l_290) >= ((((((*l_209) <= ((safe_sub_func_int32_t_s_s(l_310, ((void*)0 != l_332))) , (*p_65))) , ((*l_335) = ((((*l_290) <= l_154) & 0xDEABBF5FL) , g_334))) > 5L) , &g_237) == (void*)0)) >= l_336)));
            }


            ;
            ;
            l_165 ^= (*p_65);
            for (g_112 = 8; (g_112 < 52); g_112 = safe_add_func_uint16_t_u_u(g_112, 6))
            {
                int l_344 = 0x27E15BE1L;
                int *l_348 = (void*)0;
                char *l_350 = &g_63;
                char **l_349 = &l_350;
                unsigned short *l_360 = (void*)0;
                unsigned short *l_361 = &g_152;
                char l_364 = 0x37L;
                for (g_42 = (-23); (g_42 >= 32); ++g_42)
                {
                    g_98 = (((((((safe_rshift_func_uint16_t_u_u((!((g_334 != (l_344 = (p_66 && g_152))) ^ (p_66 ^ l_147))), 13)) , ((safe_mod_func_uint16_t_u_u(65535UL, p_67)) | (safe_unary_minus_func_int32_t_s((0x1E00B8E3L ^ l_192))))) != g_3) , (void*)0) != l_348) || (*l_209)) , (void*)0);

                    ;
                    (*p_65) = (*p_65);
                    (*p_65) |= l_192;
                    (*l_245) = p_65;

                    ;
                }
                if ((((*l_361) = (((p_67 ^ ((((**l_333) = ((**l_332) != ((*l_349) = &g_63))) == (((((*p_65) ^= 0x8E8C16CFL) > (l_344 ^= (((((*g_201) >= (l_147 = (l_351 <= (((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((1L < p_66) >= (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_156, p_66)), 65530UL))), g_99)), g_291)) < l_310) == (*l_209))))) , (*l_209)) > g_291) , 4L))) & 0L) | 0UL)) , 0x95L)) || p_67) | g_39[0][1][1])) > p_66))
                {
                    int *l_369 = &l_344;
                    unsigned *l_374 = &g_156;
                    for (l_185 = 0; (l_185 > 16); ++l_185)
                    {
                        if ((*p_65))
                            break;
                        if ((*p_65))
                            continue;
                        if (l_364)
                            break;
                    }
                    (*l_369) ^= ((((((safe_add_func_int8_t_s_s((g_7 != ((*g_201) < 0x7DL)), (65532UL <= l_173))) || 0L) , ((safe_mod_func_uint8_t_u_u(p_66, l_310)) || (*p_65))) , g_291) != g_115) , (*p_65));
                    for (g_115 = 0; (g_115 >= 0); g_115 -= 1)
                    {
                        int *l_370 = (void*)0;
                        (*p_65) = (*l_369);
                        (*l_245) = l_370;

                        ;
                        (*l_245) = func_68(func_68(p_65, ((l_371 <= 0x4BL) == 5L), &g_42), (*l_209), &g_112);

                        ;
                    }
                    (*l_369) = (safe_sub_func_uint32_t_u_u(((*l_374) = ((((*p_65) = (*l_369)) && p_67) & 0xC427L)), p_67));
                }
                else
                {
                    short l_378 = 0x714BL;
                    for (p_67 = 0; (p_67 <= 0); p_67 += 1)
                    {
                        unsigned l_375 = 1UL;
                        l_375 &= (g_78 = 1L);
                    }
                    (*p_65) |= ((void*)0 == l_376[0]);
                    if (l_378)
                        continue;
                    return p_67;
                }
            }
        }



        ;
        ;
        (*p_65) = (~(*p_65));
        (*l_245) = p_65;

        ;
    }
    else
    {
        unsigned l_382 = 0UL;
        int l_395 = 1L;
        short *l_403 = &l_310;
        int l_438 = 0x5E1F32AAL;
        char ***l_458[8] = {&l_376[0], &l_376[0], (void*)0, &l_376[0], &l_376[0], (void*)0, &l_376[0], &l_376[0]};
        int i;
        for (l_147 = (-28); (l_147 == (-20)); l_147 = safe_add_func_int8_t_s_s(l_147, 5))
        {
            unsigned l_383 = 0x91FB3B16L;
            int l_396 = (-1L);
            for (g_334 = 0; (g_334 <= 4); g_334 += 1)
            {
                unsigned char l_385 = 1UL;
                l_383 = (l_382 &= ((*p_65) ^= l_381));
                if ((*g_98))
                    continue;
                for (g_152 = 0; (g_152 <= 0); g_152 += 1)
                {
                    int l_392 = (-7L);
                    int i;
                    for (g_137 = 0; (g_137 >= 0); g_137 -= 1)
                    {
                        return g_42;
                    }
                    if ((*g_98))
                        break;
                    if ((255UL <= (g_112 = (+((*g_201) = (*g_201))))))
                    {
                        int **l_384 = &g_98;
                        (*l_384) = func_68(&g_7, (*g_98), &g_112);
                        if (l_385)
                            continue;
                    }
                    else
                    {
                        (*g_98) |= 0L;
                    }
                    if ((((-1L) == (safe_mod_func_int32_t_s_s(((*g_98) = (((0x69EE790FL & 4UL) , (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(l_336, (65527UL > ((l_382 , (l_395 = ((**l_131) = ((p_66 , l_392) , (safe_add_func_uint16_t_u_u(((g_137 &= (l_392 = (((*g_237) = (l_385 , p_67)) , (-1L)))) != 0x4516L), g_291)))))) == g_109)))), 6))) & g_99)), (-1L)))) && l_383))
                    {
                        (*p_65) = (-8L);
                        if ((*p_65))
                            break;
                        (*g_98) &= (g_3 | p_66);
                    }
                    else
                    {
                        l_396 &= (*g_98);
                    }
                }
            }
            for (g_150 = 26; (g_150 >= 37); g_150++)
            {
                g_99 &= (*g_98);
            }
        }
        if ((((safe_lshift_func_int16_t_s_s(l_154, ((safe_mod_func_int8_t_s_s(l_336, l_147)) || ((((*l_403) ^= (g_137 = ((*g_201) ^ g_78))) == g_404) != (safe_sub_func_uint16_t_u_u(g_63, ((l_336 <= ((*p_65) && 4294967295UL)) != (*g_201)))))))) < (*g_237)) ^ g_39[0][1][1]))
        {
            int *l_407 = &l_395;
            (*l_407) ^= (*p_65);
        }
        else
        {
            int *l_408 = &l_395;
            for (l_381 = 1; (l_381 <= 4); l_381 += 1)
            {
                (*g_98) ^= (l_147 = l_395);
                for (g_150 = 0; (g_150 <= 1); g_150 += 1)
                {
                    return p_67;
                }
            }
            (*l_408) ^= (*p_65);
            for (g_112 = 0; (g_112 <= 0); g_112 += 1)
            {
                unsigned short *l_415 = (void*)0;
                unsigned short *l_416[9][9] = {{&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}, {&g_150, &g_150, &g_150, &g_39[0][2][0], &l_154, &g_150, &l_336, &l_336, &g_150}};
                int l_417 = 0x935249C1L;
                short *l_425 = &g_137;
                int l_427[8] = {0xAD6CB331L, 0x6E59B0F5L, 0xAD6CB331L, 0x6E59B0F5L, 0xAD6CB331L, 0x6E59B0F5L, 0xAD6CB331L, 0x6E59B0F5L};
                int *l_436 = &l_417;
                int *l_437 = &g_291;
                int i, j;
                (*l_408) = (p_67 ^ l_395);
                (*p_65) ^= (safe_sub_func_uint16_t_u_u((((((*g_201) >= (((*g_201) > (safe_add_func_int16_t_s_s(((*l_403) = ((safe_lshift_func_uint16_t_u_u((l_417 ^= ((*l_408) = 0x003FL)), 2)) == p_66)), (((safe_lshift_func_uint16_t_u_u(0UL, ((*g_237) == ((safe_mod_func_int16_t_s_s(g_422[0][4][4], (g_426[2] = (safe_sub_func_uint16_t_u_u(g_7, (((*l_425) ^= (&l_377 == (void*)0)) , g_39[0][1][1])))))) , l_427[7])))) , 0x9D09711BL) != 0xF3B9260FL)))) & 0L)) , 0x6427L) && l_417) && g_112), g_39[0][1][1]));
                l_147 &= (l_438 = (safe_lshift_func_uint16_t_u_u((((+((*l_437) = (((((*l_377) = g_99) != (p_67 , (g_115 = (((((*g_98) ^= 1L) , ((void*)0 != &g_426[1])) > ((l_427[7] == (safe_add_func_int8_t_s_s(g_3, (l_395 &= 0xA2L)))) == ((((*l_436) = ((safe_sub_func_int16_t_s_s(l_382, g_334)) != 4L)) > l_310) , l_382))) == (*g_237))))) > 0L) | g_39[0][0][0]))) , p_67) , 65535UL), l_382)));
                (*l_436) = ((safe_lshift_func_uint8_t_u_s((g_152 || p_67), (p_67 & (l_395 = (safe_sub_func_int8_t_s_s(p_67, (p_66 == g_109))))))) , ((*l_408) = ((*g_98) = ((safe_lshift_func_uint16_t_u_u((l_336 , 65535UL), (l_147 = (((safe_mod_func_int16_t_s_s((-1L), g_422[0][4][4])) != (*g_98)) ^ (*g_201))))) , 0xDCC85A0CL))));
                for (g_115 = 0; (g_115 <= 0); g_115 += 1)
                {
                    unsigned l_453 = 0x80D07B0AL;
                    (*p_65) = 0L;
                    l_453 = ((safe_add_func_uint8_t_u_u((((*l_408) | (l_438 || (safe_lshift_func_int8_t_s_u(l_336, 4)))) || (l_395 || ((*g_98) == (*l_436)))), ((*g_237) && (*g_237)))) <= (0xB93F2658L <= (*p_65)));
                    (*p_65) = (*p_65);
                    for (g_89 = 0; (g_89 >= 0); g_89 -= 1)
                    {
                        unsigned char ***l_454 = (void*)0;
                        unsigned char ***l_455 = (void*)0;
                        unsigned char ***l_456[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_456[i] = (void*)0;
                        (*l_436) ^= g_39[g_115][(g_115 + 2)][g_89];
                        g_457[1][1][0] = &l_132[1][0][3];
                        (*l_436) ^= (*p_65);
                    }
                }
            }


        }


        g_461 = (g_459 = (void*)0);

        ;
    }

    ;

    ;
    return p_66;


}







static int * func_68(int * p_69, int p_70, unsigned char * p_71)
{
    int **l_119 = &g_98;
    (*l_119) = &p_70;

    ;
    return &g_78;



}







static int * func_72(unsigned char * p_73)
{
    int *l_76 = (void*)0;
    int **l_75[5];
    int *l_77 = &g_78;
    unsigned l_81 = 0x7E338AE6L;
    int l_87[10] = {(-1L), (-3L), (-1L), (-3L), (-1L), (-3L), (-1L), (-3L), (-1L), (-3L)};
    char *l_111[4][7] = {{&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89}, {&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89}, {&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89}, {&g_89, &g_89, &g_89, &g_89, &g_89, &g_89, &g_89}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_75[i] = &l_76;
    l_77 = &g_3;

    ;
    for (g_63 = 0; (g_63 < 19); g_63++)
    {
        int l_82 = 0L;
        int **l_92 = &l_76;
        l_82 ^= l_81;
        for (g_78 = 3; (g_78 >= 0); g_78 -= 1)
        {
            short l_83[3];
            int l_84 = (-10L);
            int i;
            for (i = 0; i < 3; i++)
                l_83[i] = 8L;
            for (l_81 = 0; (l_81 <= 4); l_81 += 1)
            {
                int i;
                l_84 = l_83[0];
                if (l_83[2])
                    break;
                if (l_82)
                    break;
            }
            for (l_84 = 0; (l_84 <= 0); l_84 += 1)
            {
                char *l_88 = &g_89;
                int l_93 = 4L;
                int l_94 = 0xF501B3ADL;
                if ((l_82 , (safe_add_func_int32_t_s_s((l_87[5] && (1L > l_82)), (3UL || (l_83[1] != ((((*l_88) = l_82) , ((l_93 = (g_90 != l_92)) < 0xCB58L)) <= l_94)))))))
                {
                    int l_96 = 0x2C134511L;
                    for (l_81 = 0; (l_81 <= 0); l_81 += 1)
                    {
                        char l_95[5][5][5] = {{{0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}}, {{0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}}, {{0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}}, {{0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}}, {{0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}, {0xA0L, 1L, 0L, 0L, (-2L)}}};
                        int i, j, k;
                        l_95[4][4][1] = l_83[0];
                        l_96 |= (-2L);
                    }
                    if (g_7)
                        continue;
                    l_96 |= (*l_77);
                }
                else
                {
                    int *l_97[3][7][9] = {{{&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}}, {{&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}}, {{&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}, {&l_93, &g_78, &l_93, &g_3, &g_78, &l_84, &g_78, &g_3, &l_93}}};
                    int i, j, k;
                    (*l_92) = l_97[1][0][0];

                    ;
                    for (l_81 = 0; (l_81 <= 0); l_81 += 1)
                    {
                        short *l_108[4][3] = {{&l_83[0], &l_83[0], &l_83[(l_81 + 2)]}, {&l_83[0], &l_83[0], &l_83[(l_81 + 2)]}, {&l_83[0], &l_83[0], &l_83[(l_81 + 2)]}, {&l_83[0], &l_83[0], &l_83[(l_81 + 2)]}};
                        char **l_110 = &l_88;
                        int i, j, k;
                        (*l_92) = l_97[l_81][(l_84 + 5)][(g_78 + 3)];
                        if (l_83[(l_81 + 2)])
                            break;
                        g_98 = l_97[l_81][(l_81 + 3)][(g_78 + 2)];

                        ;
                        g_112 = ((safe_lshift_func_int8_t_s_u(g_39[l_84][(l_84 + 7)][(l_81 + 1)], 3)) < ((((*l_110) = (((((safe_mod_func_int16_t_s_s((!g_39[0][1][1]), g_89)) == (g_89 | (g_99 = (((-7L) | ((l_93 > g_7) < ((g_109 = (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_7, ((l_83[0] , l_83[0]) && l_83[0]))), g_39[0][1][1]))) <= l_82))) < (-2L))))) & 0UL) <= (*l_77)) , p_73)) != l_111[3][3]) <= g_3));


                    }



                    l_97[2][1][7] = &l_84;
                }

                ;


                return &g_7;



            }
        }
        (*l_92) = (*l_92);
    }
    return &g_7;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_39[i][j][k], "g_39[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_422[i][j][k], "g_422[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_426[i], "g_426[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
