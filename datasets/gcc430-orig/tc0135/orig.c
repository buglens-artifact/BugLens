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



static volatile unsigned g_2 = 0x53D06CE1L;
static volatile int g_4 = 0x51D69F42L;
static volatile int * volatile g_3[9][3] = {{&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}, {&g_4, (void*)0, &g_4}};
static volatile int * volatile g_5 = &g_4;
static volatile int g_20 = 0L;
static int g_21[3] = {0xD7540573L, 0xD7540573L, 0xD7540573L};
static int *g_56 = &g_21[1];
static int ** volatile g_55[9][7] = {{&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}, {&g_56, &g_56, (void*)0, (void*)0, &g_56, (void*)0, (void*)0}};
static volatile int g_58 = 6L;
static int g_59[2] = {0L, 0L};
static volatile int g_60[9] = {0xA9025B0DL, 8L, 0xA9025B0DL, 8L, 0xA9025B0DL, 8L, 0xA9025B0DL, 8L, 0xA9025B0DL};
static volatile int g_61 = 2L;
static volatile int g_62[6][5][8] = {{{0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}}, {{0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}}, {{0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}}, {{0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}}, {{0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}}, {{0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}, {0xFDDD0C6AL, (-2L), (-6L), (-2L), 0xFDDD0C6AL, (-2L), (-6L), (-2L)}}};
static volatile int g_63 = (-10L);
static int g_64 = (-9L);
static int g_68[9] = {2L, 0x52B7283DL, 2L, 0x52B7283DL, 2L, 0x52B7283DL, 2L, 0x52B7283DL, 2L};
static unsigned short g_81 = 0UL;
static int *g_87[9] = {&g_64, &g_21[0], &g_64, &g_21[0], &g_64, &g_21[0], &g_64, &g_21[0], &g_64};
static unsigned short g_91 = 65535UL;
static unsigned char g_109 = 0xD6L;
static char g_112 = 2L;
static unsigned g_113 = 0x6D350633L;
static unsigned short g_114 = 0x6435L;
static unsigned g_125 = 0x0BEF9B71L;
static unsigned g_127[2][6][6] = {{{4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}}, {{4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}, {4294967292UL, 1UL, 0x703C071EL, 0UL, 0xF1C4289DL, 0xABA37D4AL}}};
static short g_141[4][3] = {{0xB01EL, 0xDD0FL, 0xB01EL}, {0xB01EL, 0xDD0FL, 0xB01EL}, {0xB01EL, 0xDD0FL, 0xB01EL}, {0xB01EL, 0xDD0FL, 0xB01EL}};
static int g_156[8] = {4L, 4L, 4L, 4L, 4L, 4L, 4L, 4L};
static int g_161 = 0x29BDB73DL;
static int * const g_160 = &g_161;
static int * const *g_159 = &g_160;
static unsigned short *g_193[9][2][10] = {{{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}, {{&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}, {&g_114, &g_114, &g_114, &g_114, &g_91, &g_114, (void*)0, &g_114, (void*)0, &g_91}}};
static int ** const volatile g_202 = &g_87[4];
static short g_212 = 0xF78AL;
static int ** volatile g_217 = &g_87[7];
static unsigned g_248 = 7UL;
static char g_253 = 9L;
static char *g_274 = (void*)0;
static int ** volatile g_278 = &g_87[4];
static int ** const volatile g_279 = &g_87[4];
static unsigned g_305 = 0x07237015L;
static short *g_337 = (void*)0;
static short **g_336 = &g_337;
static unsigned g_373 = 0x2C82EA3CL;
static int ** volatile g_375[5] = {&g_56, &g_87[4], &g_56, &g_87[4], &g_56};
static const int *g_410 = &g_64;
static int ** volatile g_412 = &g_87[1];
static unsigned short ** const g_466[9] = {(void*)0, &g_193[0][0][6], (void*)0, &g_193[0][0][6], (void*)0, &g_193[0][0][6], (void*)0, &g_193[0][0][6], (void*)0};
static unsigned short ** const volatile * volatile g_465 = &g_466[6];
static int ** volatile g_478[6] = {&g_87[4], &g_87[4], &g_87[4], &g_87[4], &g_87[4], &g_87[4]};
static volatile unsigned char g_486 = 0x7CL;
static int g_514 = 1L;
static short *** volatile g_516 = &g_336;
static const unsigned short g_556 = 0xBE85L;
static unsigned char *g_562 = &g_109;
static unsigned char **g_561 = &g_562;
static unsigned char *** volatile g_560[5][5][9] = {{{&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}}, {{&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}}, {{&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}}, {{&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}}, {{&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}, {&g_561, &g_561, &g_561, (void*)0, &g_561, (void*)0, &g_561, &g_561, &g_561}}};
static int ** volatile g_717 = &g_56;
static int **g_718[9] = {&g_87[4], &g_87[4], &g_56, &g_87[4], &g_87[4], &g_56, &g_87[4], &g_87[4], &g_56};
static int ** volatile g_728 = &g_56;
static const int g_767 = 0x0E579417L;
static char g_778[4] = {(-1L), 1L, (-1L), 1L};
static const unsigned char g_822 = 0xB7L;
static int *g_868 = (void*)0;
static int **g_867 = &g_868;
static unsigned *g_881 = &g_127[1][1][5];
static unsigned **g_880 = &g_881;
static unsigned char ***g_919 = (void*)0;
static unsigned char ****g_918[4] = {&g_919, &g_919, &g_919, &g_919};
static int g_928 = 0L;



static unsigned char func_1(void);
static int * func_6(char p_7, int * p_8, unsigned p_9, int p_10, unsigned short p_11);
static char func_12(int * p_13, int * p_14);
static int * func_15(int * p_16, const unsigned char p_17);
static int * func_18(const unsigned char p_19);
static int * func_28(short p_29, int ** p_30);
static int * func_36(unsigned p_37, int * const p_38);
static unsigned func_39(int * p_40, int * p_41, unsigned short p_42);
static int * func_43(int p_44, int * p_45);
static int * func_65(int ** p_66, const int * p_67);
static unsigned char func_1(void)
{
    int *l_720[4];
    const unsigned short l_721 = 0xB8AEL;
    int *l_780 = &g_156[5];
    int **l_781 = &l_780;
    int *l_785 = (void*)0;
    unsigned short l_786 = 0x6A3AL;
    int **l_984 = &l_785;
    int i;
    for (i = 0; i < 4; i++)
        l_720[i] = (void*)0;
    (*g_5) = g_2;
    (*l_984) = ((*l_781) = func_6(func_12(func_15((l_720[3] = func_18(g_2)), l_721), ((*l_781) = l_780)), l_785, l_721, (g_156[7] ^ l_721), l_786));
    (*l_984) = (void*)0;
    (*l_984) = (*l_781);
    return (*l_780);
}







static int * func_6(char p_7, int * p_8, unsigned p_9, int p_10, unsigned short p_11)
{
    int *l_787 = &g_161;
    int *l_788 = &g_156[6];
    int **l_789 = &g_56;
    int *l_799 = (void*)0;
    int * const *l_798 = &l_799;
    unsigned char *l_841 = &g_109;
    unsigned char l_859 = 0x4AL;
    int **l_871 = &l_787;
    const int *l_950[9][8] = {{&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}, {&g_767, &g_59[1], (void*)0, &g_68[0], &g_68[0], (void*)0, &g_59[1], &g_767}};
    unsigned l_951 = 0x4993C1ABL;
    int *l_983 = &g_68[0];
    int i, j;
    l_787 = (void*)0;
    return l_983;
}







static char func_12(int * p_13, int * p_14)
{
    unsigned char l_782 = 2UL;
    int *l_783 = &g_68[1];
    int **l_784 = &l_783;
    (*g_160) = l_782;
    (*g_56) = (-9L);
    (*l_784) = l_783;
    return (**l_784);
}







static int * func_15(int * p_16, const unsigned char p_17)
{
    int *l_722 = &g_21[0];
    int **l_723 = &l_722;
    int l_724 = 9L;
    const unsigned short l_725 = 65533UL;
    const short l_726 = (-3L);
    int *l_734 = &g_21[0];
    unsigned char *l_753 = &g_109;
    int *l_779 = &g_156[7];
    if (func_39(p_16, ((*l_723) = l_722), l_724))
    {
        unsigned l_731 = 0xD492B165L;
        int *l_764 = &g_68[0];
        const int *l_766 = &g_767;
        if ((l_725 == l_726))
        {
            int **l_727[3];
            int i;
            for (i = 0; i < 3; i++)
                l_727[i] = &g_87[4];
            (*g_728) = (*g_159);
            for (l_724 = 0; (l_724 < 22); l_724++)
            {
                int l_735 = 0xFDE32081L;
                if (((l_731 & ((**l_723) < (((((*g_562) = 1UL) ^ (safe_mod_func_uint8_t_u_u((l_731 != g_114), func_39(p_16, l_734, l_735)))) > g_253) < p_17))) | p_17))
                {
                    int l_746 = 0x01EC5E1EL;
                    unsigned char *l_760 = &g_109;
                    unsigned char **l_761 = &l_760;
                    unsigned *l_762[5][8] = {{&g_127[0][0][2], (void*)0, &g_125, (void*)0, &g_127[1][5][1], (void*)0, &g_125, (void*)0}, {&g_127[0][0][2], (void*)0, &g_125, (void*)0, &g_127[1][5][1], (void*)0, &g_125, (void*)0}, {&g_127[0][0][2], (void*)0, &g_125, (void*)0, &g_127[1][5][1], (void*)0, &g_125, (void*)0}, {&g_127[0][0][2], (void*)0, &g_125, (void*)0, &g_127[1][5][1], (void*)0, &g_125, (void*)0}, {&g_127[0][0][2], (void*)0, &g_125, (void*)0, &g_127[1][5][1], (void*)0, &g_125, (void*)0}};
                    int i, j;
                    (*l_734) = ((safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(0UL, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((l_746 = (**g_561)), g_114)), 5)))), p_17)) ^ 0xB5L), 0x90EBL)) == 253UL);
                    if ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((1UL || (safe_lshift_func_int8_t_s_u(l_731, (((*g_561) = l_753) != &p_17)))), ((safe_div_func_uint32_t_u_u(2UL, ((g_60[2] ^ (((*l_761) = l_760) == &g_109)) && ((g_127[1][5][1] = l_735) <= 0x13A93218L)))) <= l_746))), 0x3C09L)))
                    {
                        int l_763[3][7] = {{0xFA4CF6BCL, (-8L), 0x18B31C60L, 0x18B31C60L, (-8L), 0xFA4CF6BCL, (-8L)}, {0xFA4CF6BCL, (-8L), 0x18B31C60L, 0x18B31C60L, (-8L), 0xFA4CF6BCL, (-8L)}, {0xFA4CF6BCL, (-8L), 0x18B31C60L, 0x18B31C60L, (-8L), 0xFA4CF6BCL, (-8L)}};
                        int i, j;
                        (**l_723) = l_763[1][0];
                        p_16 = func_28(p_17, &g_56);
                        return l_764;
                    }
                    else
                    {
                        const int **l_765[4][4][9] = {{{(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}}, {{(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}}, {{(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}}, {{(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}, {(void*)0, &g_410, (void*)0, &g_410, &g_410, &g_410, &g_410, &g_410, &g_410}}};
                        int i, j, k;
                        (*l_723) = (void*)0;
                        (*l_723) = (void*)0;
                        (*l_734) = p_17;
                        (*l_723) = func_65(&g_56, (l_766 = (*l_723)));
                    }
                    for (l_735 = (-4); (l_735 > 14); ++l_735)
                    {
                    }
                }
                else
                {
                    (*g_278) = (*g_278);
                    (**g_159) = (((**l_723) ^ 0UL) < (*l_722));
                }
            }
            p_16 = l_764;
            (**l_723) = (p_17 && (~p_17));
        }
        else
        {
            return p_16;
        }
        return p_16;
    }
    else
    {
        int l_775 = 0x028E11A2L;
        (*l_723) = (void*)0;
        for (g_112 = 0; (g_112 >= 28); g_112 = safe_add_func_uint16_t_u_u(g_112, 8))
        {
            (*g_56) = 0xC6C558C2L;
            (*l_723) = p_16;
        }
        (*l_723) = p_16;
        l_775 = (safe_unary_minus_func_uint16_t_u(((safe_div_func_uint16_t_u_u(p_17, l_775)) ^ (((*g_562) = (safe_sub_func_uint32_t_u_u(4294967295UL, 1L))) != 0xD5L))));
    }
    (*g_56) = ((*g_160) = g_778[0]);
    return l_779;
}







static int * func_18(const unsigned char p_19)
{
    int l_31 = 0x8B4DFECBL;
    int *l_33 = &g_21[0];
    int **l_32 = &l_33;
    int *l_570 = &g_156[7];
    unsigned short * const *l_620[7][2][7] = {{{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}, {{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}, {{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}, {{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}, {{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}, {{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}, {{&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}, {&g_193[2][1][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[0][0][6], &g_193[2][1][6], &g_193[3][0][8], &g_193[0][0][6]}}};
    unsigned short * const ** const l_619 = &l_620[0][1][3];
    int l_633 = 0x62415FF6L;
    unsigned char l_653 = 0x76L;
    int *l_693 = &g_59[0];
    int *l_714 = &l_31;
    int **l_713 = &l_714;
    int *l_719 = (void*)0;
    int i, j, k;
    for (g_21[0] = 17; (g_21[0] < 22); ++g_21[0])
    {
        int *l_25 = &g_21[0];
        int **l_24 = &l_25;
        int *l_27 = &g_21[0];
        int **l_26 = &l_27;
        (*l_26) = ((*l_24) = (void*)0);
        if (p_19)
            continue;
        return &g_21[0];
    }
    (*l_32) = func_28(l_31, l_32);
    if ((*g_410))
    {
        return (*g_202);
    }
    else
    {
        int *l_566 = &g_59[0];
        int **l_567 = &g_87[7];
        int **l_568 = &g_56;
        int **l_569[3][7] = {{&l_566, (void*)0, &l_566, (void*)0, &l_566, (void*)0, &l_566}, {&l_566, (void*)0, &l_566, (void*)0, &l_566, (void*)0, &l_566}, {&l_566, (void*)0, &l_566, (void*)0, &l_566, (void*)0, &l_566}};
        unsigned *l_694 = (void*)0;
        unsigned *l_695 = &g_125;
        int i, j;
lbl_625:
        (*l_32) = func_28(((p_19 == (safe_sub_func_uint16_t_u_u(0x37D8L, p_19))) != (p_19 <= g_114)), &g_56);
        if (((**l_32) <= ((l_570 = ((*l_568) = ((*l_567) = l_566))) != (*l_32))))
        {
            int **l_590 = &l_33;
            unsigned *l_599 = &g_125;
            unsigned short *l_600 = &g_81;
            unsigned l_630 = 0x3D21832EL;
            for (g_113 = 0; (g_113 > 40); g_113 = safe_add_func_int16_t_s_s(g_113, 3))
            {
                short *l_586 = &g_212;
                for (g_125 = (-2); (g_125 != 24); g_125++)
                {
                    for (g_253 = 0; (g_253 == 11); g_253 = safe_add_func_uint16_t_u_u(g_253, 5))
                    {
                        unsigned *l_579 = (void*)0;
                        (*g_56) = (safe_div_func_uint32_t_u_u((g_127[1][5][1] = g_114), p_19));
                    }
                }
                for (g_112 = 0; (g_112 <= 8); g_112 += 1)
                {
                    int **l_587 = &g_87[4];
                    volatile int *l_589 = &g_61;
                    volatile int **l_588 = &l_589;
                    int i;
                    for (g_248 = 0; (g_248 <= 2); g_248 += 1)
                    {
                        int i;
                        g_60[g_112] = g_60[g_112];
                        (*l_32) = func_28(((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0x078FL, (safe_rshift_func_uint16_t_u_s(g_21[g_248], 8)))), 0xD8E8E260L)) ^ func_39((*l_568), (*g_202), ((void*)0 != l_586))), l_587);
                    }
                    (*l_588) = &g_60[g_112];
                    (*l_587) = func_65(l_590, (*l_32));
                    for (g_81 = 0; (g_81 <= 2); g_81 += 1)
                    {
                        int i;
                        if (g_60[g_112])
                            break;
                        (*l_587) = &g_21[g_81];
                        (*l_587) = &g_21[g_81];
                    }
                }
                (*l_590) = (*l_32);
            }
            if (((safe_mul_func_uint8_t_u_u((*l_570), (0xDA783A9BL == (safe_mul_func_int16_t_s_s((((*g_160) = ((**g_412) == (safe_div_func_uint8_t_u_u((!0x8CL), (**l_32))))) > ((*l_599) = g_127[1][5][1])), ((*l_600) = (*l_570))))))) & p_19))
            {
                unsigned l_601 = 0x4B0CC1C5L;
                int l_607 = (-1L);
                int **l_624 = (void*)0;
                const int *l_629[10][2] = {{&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}, {&g_21[0], &g_21[0]}};
                int i, j;
                if ((l_601 >= ((**l_567) = 0xEEF9L)))
                {
                    int *l_602 = &g_59[1];
                    (**g_159) = (func_39(((*l_567) = l_602), ((*l_32) = (*l_568)), p_19) != p_19);
                    if (((safe_rshift_func_uint16_t_u_s((**l_590), (((**g_561) = 0xD1L) == ((safe_mul_func_int8_t_s_s(1L, (0x4314L == func_39(((*l_568) = (*l_32)), l_602, (l_607 = p_19))))) >= (((safe_lshift_func_int8_t_s_u(g_127[1][5][1], (*l_570))) == p_19) < 0xD3F8L))))) <= p_19))
                    {
                        unsigned short ** const **l_616 = (void*)0;
                        unsigned short ** const *l_618[8][6] = {{&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}, {&g_466[6], (void*)0, &g_466[3], (void*)0, &g_466[6], (void*)0}};
                        unsigned short ** const **l_617 = &l_618[0][2];
                        int l_623 = 0xD2426275L;
                        int i, j;
                        (**l_568) = (~(safe_lshift_func_uint8_t_u_u(((*g_562) = func_39(l_602, (*l_590), ((*l_600) = ((safe_add_func_int16_t_s_s(p_19, ((safe_rshift_func_int16_t_s_u(p_19, ((((*l_617) = &g_466[6]) != l_619) || 247UL))) < ((**l_590) = (safe_add_func_int32_t_s_s(0L, (p_19 >= p_19))))))) <= l_623)))), 5)));
                        (*l_32) = (*l_590);
                    }
                    else
                    {
                        (**g_159) = ((void*)0 == l_624);
                        if (g_112)
                            goto lbl_625;
                    }
                    for (g_161 = 0; (g_161 < (-1)); --g_161)
                    {
                        const int **l_628 = &g_410;
                        (**l_32) = (p_19 || p_19);
                        l_629[0][1] = ((*l_628) = (*g_217));
                        (*l_628) = (*l_628);
                    }
                }
                else
                {
                    int l_645[8][4][2] = {{{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}, {{1L, 0L}, {1L, 0L}, {1L, 0L}, {1L, 0L}}};
                    int *l_646[9] = {&g_161, (void*)0, &g_161, (void*)0, &g_161, (void*)0, &g_161, (void*)0, &g_161};
                    int i, j, k;
                    (*g_217) = (void*)0;
                    if (p_19)
                    {
                        (*l_568) = (*l_568);
                    }
                    else
                    {
                        l_630 = ((*l_570) = (**l_590));
                    }
                    if ((safe_rshift_func_int8_t_s_s(l_633, 2)))
                    {
                        short *l_636 = (void*)0;
                        short *l_637 = &g_141[3][1];
                        int l_644 = (-6L);
                        (*l_567) = ((*l_32) = l_646[1]);
                        if (g_114)
                            goto lbl_647;
                        (*g_412) = (*g_412);
lbl_647:
                        (*l_32) = (void*)0;
                        (*l_590) = (*g_217);
                    }
                    else
                    {
                        (*l_590) = l_646[0];
                        (**l_568) = (+((**g_159) = (*g_5)));
                        return (*g_279);
                    }
                }
                return (*g_279);
            }
            else
            {
                int **l_656 = &l_33;
                const short *l_674[9] = {&g_141[3][1], &g_212, &g_141[3][1], &g_212, &g_141[3][1], &g_212, &g_141[3][1], &g_212, &g_141[3][1]};
                int i;
                if (((void*)0 != (*g_516)))
                {
                    char l_648 = 0x8DL;
                    int l_654[9] = {0x57464505L, 0x57464505L, (-1L), 0x57464505L, 0x57464505L, (-1L), 0x57464505L, 0x57464505L, (-1L)};
                    int i;
                    if ((l_648 >= (0x62BAAB62L >= (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(4294967293UL, (**g_278))), (l_653 != (l_654[6] = p_19)))))))
                    {
                        int l_655 = 0x417D29C4L;
                        int *l_657 = &g_21[2];
                        int **l_660 = &g_87[4];
                        l_657 = func_28((l_655 = (**l_32)), l_656);
                        (*l_566) = (p_19 | func_39(l_657, ((*l_590) = func_65(&g_56, (*l_590))), p_19));
                        (**g_159) = 0x4764C7D3L;
                        (**g_159) = (((*l_33) = (**g_159)) != (l_654[6] = (((*l_600) = p_19) <= ((safe_sub_func_int32_t_s_s(func_39(func_65(l_660, (*l_32)), (*l_590), p_19), p_19)) == 0x013C2BE4L))));
                    }
                    else
                    {
                        (**l_32) = (-1L);
                    }
                }
                else
                {
                    char *l_673 = &g_112;
                    short *l_675 = &g_141[3][1];
                    int ***l_676 = (void*)0;
                    int ***l_677 = (void*)0;
                    int ***l_678 = &l_567;
                    (**g_159) = (((safe_add_func_int16_t_s_s(((**g_159) ^ (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_19, (safe_div_func_int32_t_s_s((l_633 = ((*l_570) = (**g_159))), 0x245B4F4AL)))), (safe_add_func_int32_t_s_s(p_19, (((*l_673) = (safe_sub_func_uint16_t_u_u(func_39(((*l_568) = (*l_32)), (*g_202), p_19), p_19))) == 2UL)))))), p_19)) <= (-1L)) != (-2L));
                    (*l_32) = func_28(((*l_675) = (l_674[7] != (void*)0)), ((*l_678) = &l_566));
                    for (g_64 = 7; (g_64 <= 6); g_64 = safe_sub_func_uint32_t_u_u(g_64, 2))
                    {
                        (**l_567) = p_19;
                        return (*g_279);
                    }
                }
                for (g_81 = (-5); (g_81 > 45); g_81++)
                {
                    unsigned short l_688 = 65535UL;
                    for (g_112 = (-15); (g_112 <= 23); g_112 = safe_add_func_uint16_t_u_u(g_112, 1))
                    {
                        int *l_685 = &g_156[7];
                        return l_685;
                    }
                    (*l_566) = (*l_570);
                    for (l_31 = (-7); (l_31 < 0); ++l_31)
                    {
                        return (*g_279);
                    }
                    (*l_566) = l_688;
                }
                (**l_568) = (**g_159);
            }
        }
        else
        {
            unsigned l_691 = 1UL;
            int *l_692 = &g_59[0];
            if ((safe_sub_func_int16_t_s_s((0xF3A5L == l_691), p_19)))
            {
                return l_692;
            }
            else
            {
                return (*l_567);
            }
        }
        (*g_56) = (((*l_566) & ((0x861BL & 0x7452L) > func_39((*g_278), l_693, (**l_32)))) || (((*l_695) = (*l_693)) < ((**l_32) != p_19)));
        if ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(p_19, (p_19 >= p_19))), 7)))
        {
            int **l_715 = &l_714;
            for (l_653 = 1; (l_653 >= 31); ++l_653)
            {
                short l_712 = 0xA2C8L;
                (*l_570) = (safe_lshift_func_uint16_t_u_s(1UL, (safe_sub_func_uint16_t_u_u((((safe_mod_func_int8_t_s_s((((*l_567) = (*l_32)) == (void*)0), p_19)) & p_19) <= (safe_sub_func_uint32_t_u_u(0xF259A592L, (+(safe_sub_func_uint16_t_u_u((*l_693), 0L)))))), (1UL != l_712)))));
            }
            l_715 = l_713;
            (**g_159) = ((**l_567) = (-1L));
        }
        else
        {
            int * const l_716 = &g_59[1];
            (**g_159) = (+0L);
            (*l_567) = func_36(p_19, (*l_567));
            if (p_19)
            {
                (*g_717) = l_716;
            }
            else
            {
                (*l_567) = func_28(p_19, (g_718[3] = &g_56));
                (*l_568) = (*l_32);
            }
            (*l_568) = (*l_568);
        }
    }
    return l_719;
}







static int * func_28(short p_29, int ** p_30)
{
    const int *l_546 = &g_161;
    unsigned short *l_551[7] = {&g_81, &g_91, &g_81, &g_91, &g_81, &g_91, &g_81};
    const unsigned short *l_555[10];
    int l_557[9][6] = {{5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}, {5L, 5L, (-5L), 5L, 5L, (-5L)}};
    int i, j;
    for (i = 0; i < 10; i++)
        l_555[i] = &g_556;
    (**p_30) = (*g_5);
    for (p_29 = 0; (p_29 < (-22)); p_29 = safe_sub_func_uint16_t_u_u(p_29, 2))
    {
        unsigned short *l_386[1];
        int l_387 = (-1L);
        int **l_545 = &g_56;
        unsigned short **l_552 = (void*)0;
        const unsigned short *l_553[6][6][7] = {{{&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}}, {{&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}}, {{&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}}, {{&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}}, {{&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}}, {{&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}, {&g_81, &g_91, &g_81, &g_81, &g_114, &g_81, &g_91}}};
        const unsigned short **l_554[10] = {&l_553[1][0][1], &l_553[1][0][1], (void*)0, &l_553[1][0][1], &l_553[1][0][1], (void*)0, &l_553[1][0][1], &l_553[1][0][1], (void*)0, &l_553[1][0][1]};
        unsigned char *l_558 = &g_109;
        unsigned *l_559 = &g_125;
        unsigned char ***l_563 = &g_561;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_386[i] = &g_81;
    }
    return (*p_30);
}







static int * func_36(unsigned p_37, int * const p_38)
{
    const int *l_392 = &g_21[1];
    int **l_398[5];
    short **l_468 = &g_337;
    unsigned short *l_472 = &g_114;
    const int l_477 = 0xB289DD40L;
    unsigned char * const l_500[3][6][1] = {{{&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}}, {{&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}}, {{&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}}};
    unsigned char l_507 = 0xD1L;
    unsigned short **l_510 = &l_472;
    unsigned short ***l_509 = &l_510;
    unsigned short ****l_508 = &l_509;
    int *l_511[2];
    int *l_512[9] = {(void*)0, &g_59[1], (void*)0, &g_59[1], (void*)0, &g_59[1], (void*)0, &g_59[1], (void*)0};
    int *l_513 = &g_514;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_398[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_511[i] = &g_59[1];
    for (g_305 = (-30); (g_305 >= 33); g_305++)
    {
        int **l_391 = &g_87[4];
        unsigned *l_419 = &g_125;
        short ***l_426[5] = {&g_336, &g_336, &g_336, &g_336, &g_336};
        int *l_446 = &g_64;
        const int *l_469 = &g_21[0];
        int i;
        (*l_391) = func_65(l_391, l_392);
        for (g_125 = (-26); (g_125 <= 44); g_125 = safe_add_func_uint16_t_u_u(g_125, 8))
        {
            short l_395 = 1L;
            const int *l_399 = &g_59[1];
            int *l_400 = (void*)0;
            unsigned short **l_476[5][6][1] = {{{&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}}, {{&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}}, {{&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}}, {{&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}}, {{&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}, {&g_193[4][0][9]}}};
            int *l_485 = &g_21[0];
            int i, j, k;
        }
        (**g_159) = (*p_38);
    }
    if (((-9L) == (safe_lshift_func_int8_t_s_u(((void*)0 != l_500[1][5][0]), (safe_add_func_uint16_t_u_u(func_39((*g_217), &g_156[7], p_37), p_37))))))
    {
        short **l_515 = &g_337;
        int l_519[5][7] = {{1L, (-4L), 1L, 0x77C9F149L, 0L, 0L, 7L}, {1L, (-4L), 1L, 0x77C9F149L, 0L, 0L, 7L}, {1L, (-4L), 1L, 0x77C9F149L, 0L, 0L, 7L}, {1L, (-4L), 1L, 0x77C9F149L, 0L, 0L, 7L}, {1L, (-4L), 1L, 0x77C9F149L, 0L, 0L, 7L}};
        int l_525 = 3L;
        int i, j;
        if ((*g_160))
        {
            short *l_520 = &g_141[3][1];
            short *l_521 = &g_212;
            (*g_516) = l_515;
            (*g_5) = (safe_mod_func_int16_t_s_s(((*l_521) = ((*l_520) = l_519[4][2])), ((**l_510) = p_37)));
        }
        else
        {
            int **l_524 = &l_512[3];
            for (g_305 = 0; (g_305 >= 60); g_305++)
            {
                unsigned short **l_528[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_528[i] = &g_193[1][1][7];
                for (g_248 = 0; (g_248 <= 8); g_248 += 1)
                {
                    int i;
                    (*l_524) = func_65(l_524, (*g_202));
                    g_68[g_248] = l_525;
                    for (g_373 = 0; (g_373 <= 1); g_373 += 1)
                    {
                        int i, j, k;
                        (**g_159) = ((safe_rshift_func_int8_t_s_u(((l_528[1] != (*g_465)) == ((g_127[g_373][(g_373 + 4)][(g_373 + 3)] == (g_68[g_248] < (+(safe_sub_func_uint32_t_u_u(p_37, (safe_sub_func_int32_t_s_s((((**l_510) = (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(g_68[g_248], (safe_div_func_uint8_t_u_u(p_37, l_519[1][5])))) <= p_37), 0xD4L))) | p_37), g_127[g_373][(g_373 + 4)][(g_373 + 3)]))))))) != p_37)), g_127[g_373][(g_373 + 4)][(g_373 + 3)])) == 0UL);
                    }
                    for (g_109 = 0; (g_109 <= 1); g_109 += 1)
                    {
                        int *l_539 = &g_156[3];
                        return l_539;
                    }
                }
            }
            return (*g_217);
        }
    }
    else
    {
        int *l_540 = (void*)0;
        for (g_112 = 8; (g_112 >= 0); g_112 -= 1)
        {
            return l_540;
        }
    }
    return (*g_278);
}







static unsigned func_39(int * p_40, int * p_41, unsigned short p_42)
{
    int **l_388[7] = {&g_87[4], &g_87[4], &g_56, &g_87[4], &g_87[4], &g_56, &g_87[4]};
    int i;
    p_41 = func_65(l_388[6], p_41);
    return g_2;
}







static int * func_43(int p_44, int * p_45)
{
    unsigned char l_53[10] = {0x3FL, 0x3FL, 0x44L, 0x3FL, 0x3FL, 0x44L, 0x3FL, 0x3FL, 0x44L, 0x3FL};
    int **l_271 = (void*)0;
    char *l_275 = &g_253;
    int *l_287 = (void*)0;
    unsigned short *l_300 = &g_91;
    short **l_342[5] = {(void*)0, &g_337, (void*)0, &g_337, (void*)0};
    unsigned short l_385 = 2UL;
    int i;
    for (p_44 = 0; (p_44 <= 2); p_44 += 1)
    {
        unsigned short l_46 = 65529UL;
        char *l_272 = &g_253;
        short **l_357 = (void*)0;
        short ***l_358 = &l_342[3];
        short ***l_359 = &g_336;
        short ***l_360 = (void*)0;
        short ***l_361 = (void*)0;
        short **l_363 = &g_337;
        short ***l_362 = &l_363;
        int *l_379 = &g_21[0];
        if ((l_46 >= (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_53[3] = (p_44 <= p_44)), ((g_21[0] && p_44) && 0x75E3AA9CL))), g_4)), p_44))))
        {
            for (l_46 = 0; (l_46 <= 2); l_46 += 1)
            {
                int **l_54 = (void*)0;
                int **l_57 = &g_56;
                (*l_57) = p_45;
                for (g_59[1] = 9; (g_59[1] >= 0); g_59[1] -= 1)
                {
                    for (g_64 = 6; (g_64 >= 2); g_64 -= 1)
                    {
                        int i, j;
                        (*l_57) = func_65(&g_56, p_45);
                        g_3[(g_64 + 2)][l_46] = g_3[(p_44 + 2)][l_46];
                        (*g_160) = l_53[p_44];
                    }
                    for (g_91 = 0; (g_91 <= 2); g_91 += 1)
                    {
                        int i, j;
                        if (g_141[g_91][p_44])
                            break;
                        g_3[(p_44 + 5)][g_91] = g_3[(l_46 + 1)][l_46];
                        (*p_45) = (*p_45);
                        if ((**l_57))
                            continue;
                    }
                    if ((!(*p_45)))
                    {
                        (**l_57) = (*p_45);
                    }
                    else
                    {
                        char **l_273[8][1];
                        int i, j;
                        for (i = 0; i < 8; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_273[i][j] = &l_272;
                        }
                        (**l_57) = ((g_274 = l_272) != (l_275 = &g_253));
                    }
                }
            }
            (*p_45) = (**g_159);
        }
        else
        {
            char **l_276 = &l_275;
            int *l_277[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            unsigned short *l_298 = &g_114;
            int **l_311 = (void*)0;
            short **l_340 = &g_337;
            int i;
            (*p_45) = (((*l_276) = (void*)0) != l_272);
            for (l_46 = 0; (l_46 <= 2); l_46 += 1)
            {
                unsigned short l_310 = 0xE8FCL;
                int ***l_312 = (void*)0;
                int ***l_313 = &l_271;
                short **l_339[5];
                short **l_341 = &g_337;
                int i;
                for (i = 0; i < 5; i++)
                    l_339[i] = &g_337;
                (*g_278) = l_277[3];
                (*g_279) = (*g_159);
                for (g_113 = 0; (g_113 <= 2); g_113 += 1)
                {
                    char *l_284 = &g_112;
                    int l_285 = 6L;
                    unsigned short **l_299 = &l_298;
                    if (((safe_mul_func_int16_t_s_s((g_141[0][1] = (-5L)), (safe_mul_func_int8_t_s_s(((*l_272) = (p_44 >= (-1L))), ((*l_284) = p_44))))) ^ (*g_5)))
                    {
                        int i, j;
                        (*g_56) = (-10L);
                        (*g_56) = ((~l_285) <= p_44);
                    }
                    else
                    {
                        int **l_286[8] = {&g_87[5], &g_87[5], &g_87[4], &g_87[5], &g_87[5], &g_87[4], &g_87[5], &g_87[5]};
                        int i;
                        p_45 = (l_287 = func_65(&g_87[5], (*g_202)));
                        if (l_46)
                            continue;
                    }
                    (*g_56) = (safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s((g_305 = ((safe_mul_func_int8_t_s_s((g_59[1] == (safe_sub_func_int16_t_s_s(l_285, ((((*l_299) = l_298) == (l_300 = l_300)) == ((g_21[1] | ((safe_div_func_int32_t_s_s(((safe_add_func_int32_t_s_s((**g_159), l_46)) == p_44), 0xC1DF6277L)) >= 0x2EC95E62L)) <= p_44))))), (-1L))) == 0x2E62A703L)), 0x6BE708EFL)), p_44)), p_44));
                    (**g_159) = p_44;
                }
                (*g_160) = (safe_add_func_int16_t_s_s(0xBF24L, (safe_lshift_func_uint16_t_u_u(((*l_300) = (l_310 != (((*l_313) = (l_311 = (void*)0)) != &p_45))), (g_63 != g_253)))));
                for (g_161 = 0; (g_161 <= 2); g_161 += 1)
                {
                    unsigned char *l_318[5];
                    int l_319[1][10][7] = {{{(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}, {(-2L), 9L, (-2L), (-4L), 0xCC248D43L, (-7L), 1L}}};
                    unsigned *l_330 = &g_125;
                    int l_333 = (-1L);
                    short ***l_338[8] = {(void*)0, &g_336, (void*)0, &g_336, (void*)0, &g_336, (void*)0, &g_336};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_318[i] = &l_53[3];
                    (*g_56) = (safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((((((*l_298) = p_44) != g_156[7]) & (l_319[0][0][1] = p_44)) > (safe_rshift_func_int8_t_s_u((g_156[7] != (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_330) = (safe_mul_func_int8_t_s_s((p_44 | p_44), p_44))), (safe_sub_func_int8_t_s_s(l_333, (safe_add_func_int32_t_s_s(l_333, l_333)))))), p_44)), 8))), g_59[1]))), g_21[2])) != l_333) ^ 4294967286UL), 14));
                    l_342[3] = (l_341 = (l_340 = (l_339[2] = g_336)));
                    (*g_56) = (249UL > l_46);
                    (*g_56) = l_46;
                    for (g_109 = 0; (g_109 <= 1); g_109 += 1)
                    {
                        p_45 = func_65(&g_87[4], (*g_217));
                    }
                }
            }
            return p_45;
        }
        (*g_160) = ((*p_45) = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_44, 0x78L)) <= (safe_mod_func_int16_t_s_s(p_44, p_44))), (safe_rshift_func_int8_t_s_u(((l_357 == ((*l_362) = ((*l_359) = ((*l_358) = &g_337)))) >= (l_46 <= p_44)), l_46)))) >= 1UL), p_44)), p_44)), 0)));
        if ((!((*g_56) = ((void*)0 != &l_342[3]))))
        {
            int l_372[4][1][4] = {{{0xB92B22A9L, 1L, 0xA53A96FBL, 1L}}, {{0xB92B22A9L, 1L, 0xA53A96FBL, 1L}}, {{0xB92B22A9L, 1L, 0xA53A96FBL, 1L}}, {{0xB92B22A9L, 1L, 0xA53A96FBL, 1L}}};
            int i, j, k;
            if ((((l_372[2][0][3] = (((*l_272) = (((p_44 <= ((safe_div_func_int8_t_s_s(((*p_45) <= (safe_add_func_int8_t_s_s(((((*p_45) > (*p_45)) == (&g_337 != &g_337)) >= (p_44 < p_44)), (safe_sub_func_int32_t_s_s(l_46, 4294967295UL))))), l_372[2][0][0])) >= p_44)) != g_212) | 0x36F438B2L)) & 0xA8L)) | g_373) || l_372[2][0][2]))
            {
                int *l_374 = &g_59[1];
                int **l_376 = &g_87[4];
                (*l_376) = l_374;
            }
            else
            {
                return (*g_217);
            }
        }
        else
        {
            short **l_380[10];
            int i;
            for (i = 0; i < 10; i++)
                l_380[i] = &g_337;
            for (g_112 = 0; (g_112 <= 2); g_112 += 1)
            {
                unsigned short l_378 = 0UL;
                unsigned short **l_381[7] = {(void*)0, (void*)0, &g_193[1][0][0], (void*)0, (void*)0, &g_193[1][0][0], (void*)0};
                unsigned short ***l_382 = (void*)0;
                unsigned short ***l_383 = (void*)0;
                unsigned short ***l_384 = &l_381[0];
                int i;
                for (g_212 = 0; (g_212 <= 2); g_212 += 1)
                {
                    int l_377[9][8] = {{3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}, {3L, (-2L), (-3L), 1L, 0x633E4746L, 0L, 0L, 0x633E4746L}};
                    int i, j;
                    if ((l_377[0][4] | p_44))
                    {
                        return (*g_278);
                    }
                    else
                    {
                        (**g_159) = (*p_45);
                    }
                    (**g_159) = l_378;
                    return l_379;
                }
                if ((*g_160))
                    break;
                for (g_109 = 0; (g_109 <= 2); g_109 += 1)
                {
                    l_380[6] = (void*)0;
                }
                (*l_384) = l_381[2];
            }
            if ((**g_217))
                break;
        }
        (*g_279) = (*g_278);
        for (l_46 = 0; (l_46 <= 2); l_46 += 1)
        {
            for (g_161 = 0; (g_161 <= 2); g_161 += 1)
            {
                (*l_379) = (*p_45);
                return l_287;
            }
            if (l_385)
                break;
            (**g_159) = (*l_379);
        }
    }
    return p_45;
}







static int * func_65(int ** p_66, const int * p_67)
{
    int *l_86 = (void*)0;
    unsigned l_164 = 4294967293UL;
    unsigned short *l_192 = &g_81;
    const int l_214[2][7][8] = {{{4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}}, {{4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}, {4L, 0xA59DDDC5L, 0xD4644126L, 0xA59DDDC5L, 4L, 0x4EFA435CL, 4L, 0xA59DDDC5L}}};
    int i, j, k;
    for (g_68[0] = 0; (g_68[0] == (-22)); g_68[0] = safe_sub_func_int32_t_s_s(g_68[0], 1))
    {
        unsigned char l_77 = 255UL;
        unsigned short *l_78 = (void*)0;
        unsigned short *l_79 = (void*)0;
        unsigned short *l_80 = &g_81;
        unsigned short *l_90 = &g_91;
        int *l_101 = (void*)0;
        unsigned char l_143 = 0xD9L;
        int *l_144 = &g_21[0];
        int l_150 = (-1L);
        const short l_187 = 0x4434L;
        short *l_198 = &g_141[3][1];
        int *l_254[10] = {&g_68[6], &g_21[2], &l_150, &l_150, &g_21[2], &g_68[6], &g_21[2], &l_150, &l_150, &g_21[2]};
        int i;
    }
    return (*p_66);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_62[i][j][k], "g_62[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_127[i][j][k], "g_127[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_141[i][j], "g_141[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_156[i], "g_156[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_486, "g_486", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_778[i], "g_778[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
