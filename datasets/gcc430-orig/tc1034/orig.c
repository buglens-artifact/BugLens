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


union U0 {
   int f0;
};

union U1 {
   unsigned char f0;
   unsigned f1 : 17;
};

union U2 {
   int f0;
};


static int g_9 = 0x6C3F0BC5L;
static int g_50 = 0L;
static union U1 g_53[6] = {{0x95L}, {0x95L}, {0x0DL}, {0x95L}, {0x95L}, {0x0DL}};
static short g_59 = 1L;
static short g_64 = 0x5003L;
static short *g_63 = &g_64;
static unsigned g_71 = 0x61826471L;
static int g_83 = 0xC3330F6BL;
static unsigned char g_84[1] = {253UL};
static short g_87 = 0x54C4L;
static int g_89 = 0x5C16B7C5L;
static int *g_91[8] = {&g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83, &g_83};
static union U1 *g_98 = &g_53[5];
static union U2 g_103 = {0x3DA97B9BL};
static union U2 *g_102 = &g_103;
static union U0 g_110 = {0xF81B78F4L};
static int **g_120 = &g_91[6];
static int ***g_119 = &g_120;
static unsigned short g_162 = 0xC01EL;
static int g_163 = 0xB7756587L;
static unsigned g_188 = 4294967295UL;
static char g_217 = (-1L);
static char *g_216 = &g_217;
static unsigned short g_231 = 0x4A96L;
static unsigned short *g_283 = &g_231;
static unsigned short **g_282 = &g_283;
static unsigned *g_302 = &g_188;
static unsigned **g_301 = &g_302;
static unsigned ***g_300 = &g_301;
static union U1 g_307 = {0xECL};
static int *g_434 = &g_163;
static int *g_435[8] = {&g_83, &g_110.f0, &g_83, &g_110.f0, &g_83, &g_110.f0, &g_83, &g_110.f0};
static char g_455 = 0L;
static int g_489 = 0L;
static union U0 *g_505 = &g_110;
static unsigned g_511 = 0xD8488520L;
static unsigned short g_591 = 1UL;
static unsigned short ***g_661[4][2] = {{&g_282, &g_282}, {&g_282, &g_282}, {&g_282, &g_282}, {&g_282, &g_282}};
static unsigned short ****g_660 = &g_661[3][0];
static unsigned short ****g_663 = &g_661[3][0];
static union U2 **g_730[4] = {&g_102, &g_102, &g_102, &g_102};
static short **g_793 = &g_63;
static char g_814 = 0x5AL;
static unsigned char *g_850 = &g_53[5].f0;
static unsigned char **g_849 = &g_850;
static union U0 *g_856 = &g_110;
static union U1 **g_882[8][10] = {{&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}, {&g_98, &g_98, (void*)0, &g_98, (void*)0, &g_98, &g_98, &g_98, &g_98, (void*)0}};
static union U1 ***g_881 = &g_882[0][1];
static unsigned g_911 = 0x6529F9C1L;
static union U2 ***g_1086[6] = {&g_730[0], &g_730[0], &g_730[1], &g_730[0], &g_730[0], &g_730[1]};
static union U2 ****g_1085 = &g_1086[3];
static unsigned char g_1117 = 255UL;
static char **g_1229 = &g_216;
static char ***g_1228[10] = {&g_1229, &g_1229, &g_1229, &g_1229, &g_1229, &g_1229, &g_1229, &g_1229, &g_1229, &g_1229};
static char g_1260 = 2L;
static int g_1343 = 1L;
static int g_1365[10][2][5] = {{{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}, {{0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}, {0x8649D631L, 0x44ACD43AL, (-8L), (-1L), 5L}}};
static int *g_1364[10] = {(void*)0, (void*)0, &g_1365[0][1][0], (void*)0, (void*)0, &g_1365[0][1][0], (void*)0, (void*)0, &g_1365[0][1][0], (void*)0};
static char g_1429[8][6][5] = {{{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}, {{(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}, {(-10L), 0xAFL, 0x5FL, 0x94L, 0xEDL}}};
static int g_1440 = 0x14D6DBB4L;
static int *g_1448[10] = {&g_1365[8][0][4], &g_89, &g_50, &g_50, &g_89, &g_1365[8][0][4], &g_89, &g_50, &g_50, &g_89};
static int g_1523 = 0xD62F0B63L;
static unsigned char g_1585 = 246UL;
static int g_1623[5] = {0xD3E98D00L, 0xD3E98D00L, 0xD3E98D00L, 0xD3E98D00L, 0xD3E98D00L};
static union U0 **g_1673 = &g_856;
static union U0 g_1753[8][8][4] = {{{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}, {{{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}, {{0xE880E4F2L}, {-6L}, {0xB095BE47L}, {0x4044B86AL}}}};
static int ****g_1791 = &g_119;
static int *****g_1790 = &g_1791;
static unsigned g_1799 = 4294967295UL;
static int *g_1852 = &g_110.f0;
static int g_1861 = 0L;
static int *g_1866 = &g_1861;
static int **g_1865 = &g_1866;
static unsigned short *****g_1869 = &g_660;
static char g_1918 = 0x24L;
static int *g_1933 = &g_1623[3];
static unsigned char ***g_1967 = (void*)0;
static int g_1971 = 0L;
static short g_2053 = 0xC14FL;
static int *g_2084 = &g_1343;
static union U0 *g_2143 = (void*)0;
static unsigned short g_2200 = 0x773FL;
static int *g_2211 = &g_1343;
static unsigned g_2245 = 0UL;
static short g_2339 = (-8L);
static int ***g_2365[3] = {&g_1865, &g_1865, &g_1865};
static short g_2443 = 0xD3C6L;
static unsigned g_2480 = 0xE9666819L;
static unsigned g_2497[6][7][6] = {{{4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}}, {{4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}}, {{4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}}, {{4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}}, {{4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}}, {{4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}, {4294967290UL, 0xCBD086D4L, 1UL, 1UL, 0xCBD086D4L, 4294967290UL}}};
static unsigned short g_2505[4][7] = {{6UL, 0UL, 0x6873L, 0UL, 6UL, 0xC0A9L, 6UL}, {6UL, 0UL, 0x6873L, 0UL, 6UL, 0xC0A9L, 6UL}, {6UL, 0UL, 0x6873L, 0UL, 6UL, 0xC0A9L, 6UL}, {6UL, 0UL, 0x6873L, 0UL, 6UL, 0xC0A9L, 6UL}};



static int func_1(void);
static int * func_2(int * p_3, char p_4);
static int * func_5(short p_6, unsigned p_7);
static int * func_10(int * p_11, int * p_12, union U0 p_13);
static int * func_14(int * p_15, int * p_16, unsigned p_17, unsigned char p_18);
static unsigned func_19(union U0 p_20, int * p_21, unsigned short p_22, int * p_23, int * p_24);
static union U0 func_27(short p_28, unsigned p_29, int * p_30, short p_31);
static unsigned short func_32(unsigned p_33, int * p_34, int * p_35, unsigned p_36);
static unsigned func_37(unsigned char p_38, short p_39, int * p_40, int * p_41);
static unsigned short func_44(int * p_45);
static int func_1(void)
{
    int *l_8 = &g_9;
    int *l_1093 = &g_9;
    unsigned short *l_1100[6];
    int l_1101 = (-1L);
    int l_1366 = 1L;
    int **l_2504 = &g_91[5];
    unsigned short l_2513[6][10] = {{65534UL, 0x855FL, 6UL, 6UL, 0x855FL, 65534UL, 0x5224L, 6UL, 0xCE6AL, 4UL}, {65534UL, 0x855FL, 6UL, 6UL, 0x855FL, 65534UL, 0x5224L, 6UL, 0xCE6AL, 4UL}, {65534UL, 0x855FL, 6UL, 6UL, 0x855FL, 65534UL, 0x5224L, 6UL, 0xCE6AL, 4UL}, {65534UL, 0x855FL, 6UL, 6UL, 0x855FL, 65534UL, 0x5224L, 6UL, 0xCE6AL, 4UL}, {65534UL, 0x855FL, 6UL, 6UL, 0x855FL, 65534UL, 0x5224L, 6UL, 0xCE6AL, 4UL}, {65534UL, 0x855FL, 6UL, 6UL, 0x855FL, 65534UL, 0x5224L, 6UL, 0xCE6AL, 4UL}};
    int *l_2540[7];
    union U2 *l_2541 = &g_103;
    int i, j;
    for (i = 0; i < 6; i++)
        l_1100[i] = &g_162;
    for (i = 0; i < 7; i++)
        l_2540[i] = (void*)0;
    (*l_2504) = func_2(func_5((l_8 == (l_1093 = func_10(func_14(l_8, l_8, func_19((((safe_mul_func_uint8_t_u_u(g_9, 249UL)) & (*l_8)) , func_27((g_9 > ((((*l_8) <= ((l_1101 = func_32(func_37((safe_sub_func_int16_t_s_s(((((func_44(&g_9) < (*l_8)) , 0x2E55EDE5L) || (*l_8)) < 0UL), (-1L))), (*l_8), &g_9, l_8), l_1093, l_8, (*l_1093))) | 0UL)) >= (*l_1093)) ^ g_9)), g_9, l_8, (*l_8))), g_1364[6], l_1366, l_1093, l_1093), g_1623[3]), l_8, g_1753[7][7][3]))), g_1753[7][7][3].f0), g_1429[0][0][2]);






    ;



    ;


    ;
    ;
    ;

    if (g_2505[0][4])
    {
        char l_2508 = 0xCBL;
        for (g_455 = 7; (g_455 > 2); g_455 = safe_sub_func_int32_t_s_s(g_455, 5))
        {
            (*l_8) = ((4L >= l_2508) == 0xEA8D96F5L);
        }
        return (**g_1865);
    }
    else
    {
        union U2 l_2517 = {0xCE230C5EL};
        int *l_2520 = (void*)0;
        for (g_103.f0 = 0; (g_103.f0 < 20); ++g_103.f0)
        {
            char l_2511 = 1L;
            int *l_2512 = &g_89;
            (*l_8) &= ((l_2511 >= (*g_2084)) == (*g_216));
            if (l_2513[0][4])
                continue;
        }
        for (g_1117 = 0; (g_1117 <= 1); g_1117 += 1)
        {
            unsigned l_2515 = 0x6FD71BC4L;
            int *l_2516 = &l_1101;
            for (g_87 = 0; (g_87 <= 1); g_87 += 1)
            {
                int *l_2514 = &g_9;
                l_2514 = l_2514;
                return (*l_2514);


            }
            (*l_2504) = l_2516;
            for (g_1523 = 3; (g_1523 >= 0); g_1523 -= 1)
            {
                char l_2535[10][3] = {{3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}, {3L, 3L, (-1L)}};
                int i, j;
                for (g_59 = 3; (g_59 >= 0); g_59 -= 1)
                {
                    unsigned char l_2525 = 255UL;
                    int l_2534 = 1L;
                    for (g_163 = 0; (g_163 <= 1); g_163 += 1)
                    {
                        int i, j, k;
                        g_1365[(g_59 + 3)][g_1117][(g_1523 + 1)] = (g_1753[(g_59 + 1)][(g_1523 + 1)][g_59] , (safe_mod_func_uint16_t_u_u(0x5AF8L, g_1365[(g_1523 + 6)][g_1117][(g_163 + 1)])));
                        g_1365[(g_163 + 3)][g_163][(g_163 + 1)] = g_1753[(g_59 + 1)][(g_1523 + 1)][g_59].f0;
                        (*g_1852) |= (safe_mul_func_int16_t_s_s((((*l_8) > (((*g_2143) , 4L) < (l_2525 & ((*l_2516) = ((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((-4L) <= (*l_2516)), ((l_2534 |= g_1365[(g_163 + 3)][g_163][(g_163 + 1)]) && ((void*)0 != &l_2517)))), l_2525)), (*l_2516))) > (**g_793)), 0x7F54L)) | l_2535[2][1]))))) , (*g_63)), (**g_793)));
                    }
                }
                for (l_1101 = 3; (l_1101 >= 0); l_1101 -= 1)
                {
                    (*l_2504) = (void*)0;
                }
            }
        }


        for (g_2245 = 0; (g_2245 <= 9); g_2245 += 1)
        {
            char l_2538 = 0x67L;
            int *l_2539 = (void*)0;
            int i;
            (*g_1852) |= ((*l_8) < ((((safe_mul_func_int16_t_s_s((((*g_63) , (*g_63)) & (**g_793)), (*g_63))) , 0xAAL) , g_814) || (*l_8)));
        }
        (*l_8) = l_2517.f0;
    }


    g_91[6] = &l_1101;
    l_2541 = l_2541;
    return (*g_1866);


}







static int * func_2(int * p_3, char p_4)
{
    unsigned char l_2261 = 255UL;
    unsigned char l_2262[2];
    unsigned char ****l_2265 = (void*)0;
    unsigned l_2266[8][1] = {{0x5653D423L}, {0x5653D423L}, {0x5653D423L}, {0x5653D423L}, {0x5653D423L}, {0x5653D423L}, {0x5653D423L}, {0x5653D423L}};
    int *l_2267[4] = {&g_9, &g_1623[3], &g_9, &g_1623[3]};
    short l_2268[5][10][2] = {{{0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}}, {{0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}}, {{0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}}, {{0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}}, {{0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}, {0x2076L, 0x2760L}}};
    union U0 l_2269 = {-8L};
    int *l_2283 = &g_83;
    union U1 l_2301 = {0x91L};
    union U2 l_2356[10] = {{-8L}, {0L}, {-8L}, {0L}, {-8L}, {0L}, {-8L}, {0L}, {-8L}, {0L}};
    unsigned short *l_2357 = &g_162;
    unsigned l_2358 = 0x3FBEB0F3L;
    unsigned l_2421 = 0xACB922D4L;
    unsigned l_2425 = 4294967295UL;
    short l_2427 = 0xCB15L;
    unsigned l_2454 = 0UL;
    union U1 **l_2496[4][8][3] = {{{&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}}, {{&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}}, {{&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}}, {{&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}, {&g_98, &g_98, &g_98}}};
    unsigned short l_2499 = 0x7F74L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2262[i] = 1UL;
    if ((((((safe_mod_func_uint32_t_u_u(p_4, (*p_3))) <= (**g_1229)) | p_4) <= p_4) >= p_4))
    {
        union U0 **l_2270 = &g_2143;
        int l_2278[4][3] = {{(-2L), 0x3A35E06CL, (-2L)}, {(-2L), 0x3A35E06CL, (-2L)}, {(-2L), 0x3A35E06CL, (-2L)}, {(-2L), 0x3A35E06CL, (-2L)}};
        unsigned l_2285 = 7UL;
        int *l_2296 = (void*)0;
        union U2 *l_2308 = &g_103;
        char *l_2319[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_2319[i] = &g_1429[0][0][2];
        for (g_591 = 0; (g_591 <= 0); g_591 += 1)
        {
            short l_2275[8][9] = {{0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}, {0xC334L, 0L, 0x98A5L, 0xDB22L, (-1L), 0xA3E0L, 0x817BL, 0x817BL, 0xA3E0L}};
            int l_2279 = 0xECDCC21DL;
            unsigned *l_2300 = &g_71;
            int l_2305 = (-1L);
            unsigned l_2322 = 0UL;
            int i, j;
            (*g_2084) = (-1L);
            for (g_71 = 0; (g_71 <= 0); g_71 += 1)
            {
                union U0 ***l_2271 = (void*)0;
                union U0 ***l_2272 = &l_2270;
                int *l_2284 = (void*)0;
                int l_2286 = 0x7332E7A5L;
                unsigned *l_2291 = &g_2245;
                union U2 l_2292 = {0xF2FC99F1L};
                unsigned *l_2293 = &l_2285;
                int **l_2297 = &g_1448[9];
                char *l_2318[6][6][3] = {{{&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}}, {{&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}}, {{&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}}, {{&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}}, {{&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}}, {{&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}, {&g_1918, &g_1918, &g_217}}};
                unsigned *l_2320 = &l_2266[1][0];
                unsigned *l_2321[6][8] = {{&g_511, &g_511, &g_911, &g_511, &g_511, (void*)0, &g_911, (void*)0}, {&g_511, &g_511, &g_911, &g_511, &g_511, (void*)0, &g_911, (void*)0}, {&g_511, &g_511, &g_911, &g_511, &g_511, (void*)0, &g_911, (void*)0}, {&g_511, &g_511, &g_911, &g_511, &g_511, (void*)0, &g_911, (void*)0}, {&g_511, &g_511, &g_911, &g_511, &g_511, (void*)0, &g_911, (void*)0}, {&g_511, &g_511, &g_911, &g_511, &g_511, (void*)0, &g_911, (void*)0}};
                int l_2338 = 1L;
                int i, j, k;
                (*l_2272) = l_2270;
                if (((((*g_63) = (!g_84[g_591])) || (((**g_793) &= p_4) ^ (safe_rshift_func_int16_t_s_s(l_2275[3][3], 0)))) >= (safe_add_func_int8_t_s_s(p_4, l_2278[0][1]))))
                {
                    union U2 *l_2280 = &g_103;
                    (*g_2084) |= l_2279;
                    (***g_1085) = l_2280;

                    ;
                    (*g_2084) &= (*p_3);
                    (*g_1852) = 0L;
                }
                else
                {
                    int *l_2287 = (void*)0;
                    unsigned l_2288 = 0UL;
                    for (g_1343 = 0; (g_1343 == 23); g_1343 = safe_add_func_int8_t_s_s(g_1343, 1))
                    {
                        return p_3;


                    }
                    (*p_3) |= 1L;
                    p_3 = p_3;
                }
                if ((safe_mod_func_uint8_t_u_u(p_4, 0x22L)))
                {
                    int **l_2298 = (void*)0;
                    int **l_2299 = &l_2267[0];
                    union U1 *l_2302 = &g_53[4];
                    (*l_2299) = ((*l_2297) = l_2267[0]);
                    if ((p_4 & (**g_793)))
                    {
                        if (l_2275[3][3])
                            break;
                    }
                    else
                    {
                        (**l_2299) = (*p_3);
                    }
                    (*g_1852) = (((*l_2302) = l_2301) , ((safe_add_func_int8_t_s_s(l_2275[3][2], l_2305)) | (*g_1933)));
                }
                else
                {
                    short l_2309 = 0x5CE9L;
                    for (g_1117 = (-29); (g_1117 < 10); g_1117++)
                    {
                        l_2308 = l_2308;
                    }
                    if (l_2309)
                        break;
                }
                if ((*p_3))
                {
                    char l_2323 = 0xD8L;
                    l_2323 = (*g_1933);
                    if (l_2323)
                        continue;
                    if ((*p_3))
                        break;
                }
                else
                {
                    int *l_2336 = &l_2292.f0;
                    int l_2340 = 8L;
                    (*p_3) = (l_2292 , (*p_3));
                    (*l_2283) &= (*p_3);
                    for (l_2292.f0 = 0; (l_2292.f0 < (-4)); l_2292.f0 = safe_sub_func_uint8_t_u_u(l_2292.f0, 7))
                    {
                        int l_2337 = (-9L);
                        (*g_1852) &= ((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_4, g_2339)), p_4)) ^ l_2340);
                    }
                }
            }
        }


    }
    else
    {
        for (g_64 = 0; (g_64 < 4); g_64++)
        {
            union U1 **l_2343 = &g_98;
            (*l_2343) = (void*)0;

            ;
        }


        (*g_2084) &= (*p_3);
    }



    if ((((safe_sub_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(0xE53FL, 1)), (~(safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((*l_2357) = ((safe_mul_func_uint8_t_u_u((*l_2283), (*l_2283))) >= p_4)), (*l_2283))), p_4))))) == 4294967295UL), p_4)) && p_4) | l_2358))
    {
        int *l_2359[5] = {(void*)0, &g_1623[0], (void*)0, &g_1623[0], (void*)0};
        int i;
        if (((*g_2084) == (*l_2283)))
        {
            (*l_2283) ^= (*p_3);
        }
        else
        {
            int l_2364 = 0x008C5D1BL;
            (*p_3) = ((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_2364 <= l_2364), ((~(g_2365[0] == (void*)0)) || 4294967294UL))), (safe_mod_func_int8_t_s_s(((p_4 , p_4) || p_4), (safe_lshift_func_uint8_t_u_u(((**g_849) = p_4), l_2364)))))) , l_2364);
        }
        (*l_2283) |= ((4294967294UL == (-4L)) < (-7L));
    }
    else
    {
        unsigned char ***l_2376 = &g_849;
        unsigned char ***l_2378 = &g_849;
        union U2 l_2394[6] = {{-1L}, {4L}, {-1L}, {4L}, {-1L}, {4L}};
        unsigned l_2422[1];
        int l_2426 = 1L;
        unsigned char l_2441 = 8UL;
        union U1 l_2469 = {0x7BL};
        unsigned short l_2476 = 65533UL;
        int l_2502 = 0xA489C879L;
        int i;
        for (i = 0; i < 1; i++)
            l_2422[i] = 0xBFEC47B7L;
        for (g_911 = 0; (g_911 <= 9); g_911 += 1)
        {
            union U2 l_2386 = {1L};
            unsigned char *l_2406 = &g_84[0];
            unsigned char l_2434 = 0x3EL;
            int *l_2447 = &g_163;
            unsigned short l_2482 = 0xF5F2L;
            int ****l_2493 = &g_119;
            for (g_591 = 0; (g_591 <= 0); g_591 += 1)
            {
                union U2 l_2392 = {1L};
                char l_2398 = 0L;
                int *l_2399 = &g_1753[7][7][3].f0;
                union U0 l_2404 = {0x483FAFD5L};
                int i, j;
                (*p_3) &= l_2266[(g_591 + 1)][g_591];
                for (g_231 = 0; (g_231 <= 1); g_231 += 1)
                {
                    union U2 l_2393 = {-9L};
                    int l_2402 = 3L;
                    unsigned char *l_2405 = &g_84[0];
                    int i;
                    if ((*p_3))
                        break;
                    if ((*g_1933))
                    {
                        unsigned char ****l_2377 = &l_2376;
                        unsigned *l_2379 = &g_2245;
                        int l_2389[7][5] = {{4L, 0L, 1L, 0L, 4L}, {4L, 0L, 1L, 0L, 4L}, {4L, 0L, 1L, 0L, 4L}, {4L, 0L, 1L, 0L, 4L}, {4L, 0L, 1L, 0L, 4L}, {4L, 0L, 1L, 0L, 4L}, {4L, 0L, 1L, 0L, 4L}};
                        int i, j, k;
                        g_1365[g_911][(g_591 + 1)][(g_591 + 4)] = (safe_mul_func_uint8_t_u_u(p_4, l_2266[(g_591 + 1)][g_591]));
                    }
                    else
                    {
                        char l_2395 = 0x01L;
                        union U0 l_2403 = {0L};
                        int i, j;
                        (*l_2399) = (p_4 || l_2386.f0);
                        g_1448[(g_231 + 3)] = p_3;
                        (*g_1933) = ((*p_3) ^ ((safe_add_func_uint8_t_u_u(((0x5BD6E393L >= (l_2266[(g_591 + 3)][g_591] = ((l_2402 > (((l_2404 = l_2403) , l_2405) == l_2406)) , ((*p_3) ^ ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((*l_2399) | (l_2269 , p_4)), 0xDEL)) | (*p_3)), p_4)) == l_2386.f0))))) , 0x21L), p_4)) && (*l_2399)));
                    }
                    (*g_2084) = (*g_1852);
                    for (g_59 = 0; (g_59 > 1); g_59++)
                    {
                        (*l_2283) ^= (0x8FL < (+((safe_lshift_func_int8_t_s_u(6L, 4)) , 0L)));
                        (*g_1673) = &l_2269;

                        ;
                        return p_3;



                    }
                }
            }
            for (g_188 = 0; (g_188 <= 0); g_188 += 1)
            {
                short **l_2423 = &g_63;
                short ***l_2424 = &l_2423;
                char *l_2442 = &g_1429[2][1][3];
                short l_2481 = (-1L);
                int **l_2483 = &g_2084;
                union U2 l_2500 = {0L};
                int i, j;
                (*g_1852) |= l_2266[(g_188 + 1)][g_188];
                l_2426 &= (((safe_sub_func_uint32_t_u_u(p_4, ((safe_add_func_int8_t_s_s((!4L), ((**g_1229) = (safe_add_func_int8_t_s_s((p_4 >= (l_2421 > (((*p_3) >= l_2422[0]) < (((*l_2424) = l_2423) == &g_63)))), (l_2425 , l_2422[0])))))) ^ (-2L)))) != 254UL) & p_4);
                if ((((l_2427 | (safe_add_func_int16_t_s_s((l_2426 ^ (*g_1933)), l_2386.f0))) & p_4) ^ 65535UL))
                {
                    union U0 *l_2444 = &g_110;
                    (*g_1673) = l_2444;

                    ;
                }
                else
                {
                    unsigned *l_2457 = &l_2421;
                    int l_2458 = 7L;
                    short **l_2459 = &g_63;
                    short **l_2460 = (void*)0;
                    int *l_2479 = &l_2269.f0;
                    int i, j;
                    if ((((safe_rshift_func_int8_t_s_u((*g_216), (((~((**g_793) = p_4)) >= (*l_2447)) > l_2458))) < p_4) != l_2458))
                    {
                        l_2458 = ((l_2459 = &g_63) == (l_2460 = (void*)0));
                        (*p_3) |= l_2458;
                    }
                    else
                    {
                        return p_3;


                    }
                    (*g_2084) &= (p_4 & (l_2266[(g_188 + 3)][g_188] |= (((p_4 & ((*l_2357) = p_4)) , (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((5L != ((safe_mul_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((((((*l_2447) = ((*p_3) >= g_2480)) <= (*g_1933)) ^ (**g_1229)) & 0xF4L), (**g_793))) , (*g_216)) == l_2481), p_4)) || l_2469.f0)), (-8L))), g_1623[3]))) >= l_2482)));
                    l_2483 = &l_2267[0];

                    ;
                }

                ;
                for (g_231 = 0; (g_231 <= 9); g_231 += 1)
                {
                    unsigned l_2484 = 6UL;
                    int l_2485 = 0x950BB044L;
                    union U2 l_2488 = {0xA8F4955DL};
                    int *****l_2494 = &l_2493;
                    union U1 **l_2495 = &g_98;
                    unsigned l_2498 = 7UL;
                    unsigned char **l_2501 = (void*)0;
                    union U1 *l_2503 = &g_53[5];
                    if (l_2485)
                    {
                        if ((*p_3))
                            break;
                    }
                    else
                    {
                        int i, j, k;
                        g_1365[g_231][g_188][g_188] = l_2484;
                    }
                    (*g_1852) = (((safe_mod_func_int32_t_s_s((*p_3), (((**l_2483) >= (*p_3)) & (*p_3)))) , l_2495) != l_2496[2][0][1]);
                    for (g_9 = 2; (g_9 >= 0); g_9 -= 1)
                    {
                        (*g_1852) ^= (*p_3);
                        l_2502 |= (((2UL || ((g_2497[0][5][3] || (((*l_2447) && (((***l_2424) = l_2426) & l_2498)) , l_2499)) || ((*g_850) = p_4))) , (*l_2378)) != ((l_2488 = (l_2500 = l_2500)) , l_2501));
                    }
                    (*l_2495) = l_2503;

                    ;
                }
            }
        }


    }


    return p_3;


}







static int * func_5(short p_6, unsigned p_7)
{
    char l_2137 = 0xE7L;
    unsigned *l_2138 = &g_1799;
    int l_2139 = 0xDC2F84EAL;
    union U2 l_2140 = {4L};
    union U0 *l_2141 = &g_1753[7][7][3];
    union U0 **l_2142[6][1] = {{&g_505}, {&g_505}, {&g_505}, {&g_505}, {&g_505}, {&g_505}};
    unsigned char l_2144[5][7][7] = {{{0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}}, {{0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}}, {{0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}}, {{0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}}, {{0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}, {0x00L, 0x09L, 4UL, 248UL, 248UL, 4UL, 0x09L}}};
    unsigned short ****l_2145 = &g_661[3][0];
    union U2 ****l_2146 = (void*)0;
    int **l_2159 = &g_91[6];
    int l_2175 = 1L;
    union U2 *l_2177 = (void*)0;
    unsigned short *l_2191 = (void*)0;
    union U2 l_2192 = {1L};
    unsigned *l_2196 = &g_71;
    int i, j, k;
    if ((((l_2137 >= (((((l_2138 != (((l_2139 = (l_2137 <= l_2137)) , ((((((l_2140 , (((((g_2143 = l_2141) == &g_1753[7][1][1]) >= ((+0xE5B1L) , l_2144[3][6][0])) < p_7) | p_7)) < (*g_63)) , g_1440) , (*g_1869)) != l_2145) <= p_7)) , l_2138)) , 1L) , (void*)0) != l_2146) , 0x14L)) , &l_2144[3][6][0]) != (*g_849)))
    {
        unsigned l_2149 = 7UL;
        int **l_2160 = (void*)0;
        short ***l_2167 = (void*)0;
        short ***l_2168 = (void*)0;
        union U2 *l_2176[7][7][5] = {{{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, &g_103, (void*)0, &g_103}}};
        unsigned short ******l_2178 = &g_1869;
        unsigned short *****l_2180 = &g_660;
        unsigned short ******l_2179 = &l_2180;
        int *l_2193[5][4];
        unsigned *l_2195 = &g_71;
        unsigned **l_2194[9] = {&l_2195, &l_2195, &l_2195, &l_2195, &l_2195, &l_2195, &l_2195, &l_2195, &l_2195};
        int l_2197 = 0L;
        short l_2198[10][6][4] = {{{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}, {{(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}, {(-6L), 1L, 0xF3E0L, (-6L)}}};
        unsigned short l_2199[2][10] = {{0x0F74L, 1UL, 65535UL, 1UL, 0x0F74L, 0x2D4AL, 0x0F74L, 1UL, 65535UL, 1UL}, {0x0F74L, 1UL, 65535UL, 1UL, 0x0F74L, 0x2D4AL, 0x0F74L, 1UL, 65535UL, 1UL}};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
                l_2193[i][j] = &g_1623[3];
        }
        if ((safe_add_func_int8_t_s_s(l_2149, (g_1971 , ((*g_216) |= p_7)))))
        {
            unsigned *l_2150 = &g_1799;
            unsigned short ***l_2153[6][5] = {{&g_282, &g_282, (void*)0, &g_282, &g_282}, {&g_282, &g_282, (void*)0, &g_282, &g_282}, {&g_282, &g_282, (void*)0, &g_282, &g_282}, {&g_282, &g_282, (void*)0, &g_282, &g_282}, {&g_282, &g_282, (void*)0, &g_282, &g_282}, {&g_282, &g_282, (void*)0, &g_282, &g_282}};
            int l_2156 = (-7L);
            int i, j;
            (*g_2084) = (l_2144[3][6][0] <= (((**g_300) = (void*)0) == l_2150));

            ;
            (*g_2084) = (((safe_mul_func_int16_t_s_s((l_2137 < (l_2153[3][3] == ((0x92L && p_6) , (*l_2145)))), (l_2149 && (((l_2156 != p_6) == ((safe_sub_func_int8_t_s_s((l_2159 != l_2160), (**g_1229))) < l_2156)) < p_7)))) > 0xC89D99ADL) | 65535UL);
            (*g_1933) |= p_7;
            for (p_6 = 0; (p_6 > (-15)); --p_6)
            {
                int *l_2163 = &l_2156;
                return &g_1971;


            }
        }
        else
        {
            short ****l_2164 = (void*)0;
            short ***l_2166[2][5] = {{&g_793, &g_793, &g_793, &g_793, &g_793}, {&g_793, &g_793, &g_793, &g_793, &g_793}};
            short ****l_2165[2][3][1] = {{{&l_2166[1][0]}, {&l_2166[1][0]}, {&l_2166[1][0]}}, {{&l_2166[1][0]}, {&l_2166[1][0]}, {&l_2166[1][0]}}};
            int l_2171 = 1L;
            int i, j, k;
            (*g_1933) |= ((l_2167 = &g_793) == l_2168);

            ;
            (*g_2084) ^= (~p_7);
            (*g_1852) = ((safe_add_func_uint32_t_u_u(0x30B0C232L, l_2171)) <= (**g_793));
            for (g_71 = (-6); (g_71 == 51); g_71 = safe_add_func_int8_t_s_s(g_71, 9))
            {
                union U0 l_2174[9] = {{-3L}, {-3L}, {0x01B68CF4L}, {-3L}, {-3L}, {0x01B68CF4L}, {-3L}, {-3L}, {0x01B68CF4L}};
                int i;
                (*g_1852) = ((l_2174[5] , (*g_216)) | l_2175);
            }
        }

        ;
        ;
        l_2177 = ((***g_1085) = l_2176[2][4][2]);

        ;
        ;
        (*g_2084) &= ((((((*l_2179) = ((*l_2178) = &g_663)) == (((*g_1933) ^= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((*g_63) = (((p_6 , (safe_rshift_func_uint8_t_u_s((p_6 , ((l_2196 = &p_7) == (void*)0)), (**g_1229)))) > 0x1EC546E9L) , p_6)) >= l_2197), p_7)), p_7)) == 0xB38943F2L) ^ 65535UL) >= l_2198[9][2][3]) || p_6) && p_7), l_2199[0][7])), g_2200))) , (void*)0)) | p_6) , (void*)0) != (void*)0);

        ;
        ;
        ;
    }
    else
    {
        unsigned char l_2209 = 0xA2L;
        int l_2210 = (-1L);
        union U2 l_2258 = {-5L};
        for (g_1523 = 0; (g_1523 <= 5); g_1523 += 1)
        {
            union U1 *l_2201 = &g_307;
            int *l_2202 = &g_163;
            union U2 l_2250[5] = {{-1L}, {-1L}, {-1L}, {-1L}, {-1L}};
            int i;
            for (g_162 = 0; (g_162 <= 5); g_162 += 1)
            {
                int *l_2207[1];
                unsigned short ***l_2214 = &g_282;
                unsigned **l_2219[1];
                int ******l_2254 = &g_1790;
                int i;
                for (i = 0; i < 1; i++)
                    l_2207[i] = &g_1623[3];
                for (i = 0; i < 1; i++)
                    l_2219[i] = &l_2138;
                for (g_83 = 0; (g_83 <= 3); g_83 += 1)
                {
                    int l_2208[6] = {6L, 1L, 6L, 1L, 6L, 1L};
                    unsigned **l_2220 = &g_302;
                    int i;
                    l_2201 = &g_53[g_162];

                    ;
                    for (g_511 = 0; (g_511 <= 5); g_511 += 1)
                    {
                        short *l_2205[2][3] = {{(void*)0, (void*)0, &g_64}, {(void*)0, (void*)0, &g_64}};
                        int *l_2206 = &g_1623[3];
                        int i, j;
                        l_2210 |= l_2208[5];
                        g_2211 = &l_2208[5];

                        ;
                        (*l_2206) |= (((-1L) < (safe_add_func_uint16_t_u_u(p_7, ((void*)0 == l_2214)))) && ((safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s(65527UL, 12)) , l_2219[0]) != l_2220), 8)) <= ((*g_216) < l_2208[5])));
                    }


                }
                if ((safe_add_func_uint8_t_u_u(((~0x28L) != (safe_add_func_int16_t_s_s((g_53[g_162] , ((-5L) == (**g_793))), ((safe_lshift_func_int16_t_s_u((((*l_2202) = (*l_2202)) , ((safe_mod_func_uint16_t_u_u((g_53[g_1523] , 0x948AL), 0xE1C9L)) <= ((safe_sub_func_int16_t_s_s(p_6, 0x1F07L)) != l_2210))), 11)) != (**g_793))))), 0xC3L)))
                {
                    int *l_2231 = &g_1440;
                    return l_2231;



                }
                else
                {
                    unsigned short l_2243[7][8] = {{0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}, {0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}, {0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}, {0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}, {0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}, {0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}, {0UL, 1UL, 65535UL, 1UL, 0UL, 0xD754L, 65535UL, 0xD754L}};
                    union U2 **l_2249 = &l_2177;
                    union U2 *l_2251 = &g_103;
                    int ******l_2255 = &g_1790;
                    int i, j;
                    for (l_2140.f0 = 3; (l_2140.f0 >= 0); l_2140.f0 -= 1)
                    {
                        unsigned short l_2242 = 0x7640L;
                        unsigned *l_2244 = &g_2245;
                        char *l_2246 = &g_814;
                        (*l_2202) = ((*g_2084) = (safe_add_func_uint16_t_u_u((((((((***g_300) = (((*l_2246) &= (func_32(((*l_2244) = (g_71 = (safe_add_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(((**g_793) >= 1L), 6)), (p_6 <= 0xBB49L))) ^ (-4L)) || (p_6 & p_6)), 8)) && (*g_216)) && 1UL) > l_2243[3][2]), p_6)))), &l_2210, l_2202, (*l_2202)) > (*l_2202))) < 0x1EL)) | 1L) , (void*)0) != (void*)0) < p_6) <= p_6), p_6)));
                    }
                    (*l_2202) = (safe_rshift_func_uint8_t_u_s((!((((((void*)0 != l_2249) | l_2209) <= ((((*l_2251) = l_2250[3]) , (l_2243[1][0] == (safe_lshift_func_uint8_t_u_s((((*g_1852) = (l_2254 != l_2255)) >= (*g_2084)), (*g_216))))) > p_6)) >= p_6) < l_2210)), 5));
                    if (p_7)
                        break;
                    (*l_2159) = &l_2210;
                }
                if (p_6)
                    continue;
                (*l_2202) = 0x3263F184L;
            }

            ;
            l_2210 = (safe_mod_func_int8_t_s_s((*l_2202), 255UL));
        }



    }


    ;
    ;
    ;
    ;
    ;

    return &g_89;



}







static int * func_10(int * p_11, int * p_12, union U0 p_13)
{
    int ****l_1754 = &g_119;
    int *****l_1755 = &l_1754;
    int l_1756 = 0xB37293D0L;
    int *l_1757 = &g_1440;
    int *l_1758 = &l_1756;
    union U2 l_1777[2][1][10] = {{{{0L}, {0L}, {-9L}, {0x7893E688L}, {0xD4E15C75L}, {0x7893E688L}, {-9L}, {0L}, {0L}, {-9L}}}, {{{0L}, {0L}, {-9L}, {0x7893E688L}, {0xD4E15C75L}, {0x7893E688L}, {-9L}, {0L}, {0L}, {-9L}}}};
    union U0 **l_1782[6];
    union U1 l_1796 = {0x7DL};
    unsigned short l_1822 = 5UL;
    char **l_1841 = (void*)0;
    unsigned char ***l_1851 = &g_849;
    unsigned short *****l_1870 = &g_660;
    unsigned l_1897 = 1UL;
    short ***l_1921 = &g_793;
    union U2 **l_1924 = (void*)0;
    unsigned short l_1983 = 65535UL;
    unsigned short ***l_1991 = &g_282;
    unsigned ***l_2085[10][1] = {{&g_301}, {&g_301}, {&g_301}, {&g_301}, {&g_301}, {&g_301}, {&g_301}, {&g_301}, {&g_301}, {&g_301}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1782[i] = &g_856;
    l_1756 &= ((*p_12) &= (((*l_1755) = l_1754) == &g_119));
    l_1758 = l_1757;

    ;
    if ((~(*p_11)))
    {
        unsigned short ****l_1761 = &g_661[3][0];
        unsigned short ****l_1762 = &g_661[2][0];
        int l_1765 = (-1L);
        int l_1768 = (-2L);
        char **l_1775 = &g_216;
        union U2 ***l_1778 = (void*)0;
        unsigned short l_1853 = 65535UL;
        int ***l_1867 = &g_1865;
        for (g_71 = 0; (g_71 <= 1); g_71 += 1)
        {
            char **l_1773 = &g_216;
            int *****l_1792 = &g_1791;
            unsigned char l_1795 = 0xBFL;
            int *l_1805 = &g_1623[3];
            int *l_1807 = &l_1765;
            unsigned l_1809 = 0x095C6C87L;
            int i;
            if ((*p_12))
            {
                unsigned short *****l_1763 = (void*)0;
                unsigned short *****l_1764 = &g_663;
                char ***l_1774 = &l_1773;
                int l_1776 = 9L;
                int **l_1780[2];
                union U1 l_1787 = {1UL};
                unsigned l_1797 = 0x88E4B04CL;
                union U0 *l_1800 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1780[i] = (void*)0;
                if ((~(((*l_1757) = (l_1765 &= (safe_mul_func_uint8_t_u_u(251UL, (l_1761 != ((*l_1764) = (l_1762 = &g_661[2][0]))))))) >= (l_1768 = (((((safe_add_func_int32_t_s_s((0UL != l_1768), 0x13975AD4L)) > (((p_11 != (((((p_13.f0 == (((((safe_add_func_int8_t_s_s(((((safe_add_func_uint8_t_u_u((((*l_1774) = l_1773) == l_1775), 0x37L)) , (**g_1229)) & 0x46L) < (*g_63)), l_1776)) ^ p_13.f0) == (*p_12)) , (void*)0) != (void*)0)) == 1UL) == (*p_12)) , l_1777[1][0][8]) , p_12)) > l_1768) == (**g_1229))) <= 1L) , (-8L)) , l_1776)))))
                {
                    (*p_12) = l_1765;
                }
                else
                {
                    union U2 **l_1779 = &g_102;
                    l_1776 = l_1765;
                    (*p_11) &= ((*g_1085) != (((*g_98) = (*g_98)) , l_1778));
                    (**g_1085) = l_1779;
                }
                if (((g_1429[0][0][2] , &l_1755) != (void*)0))
                {
                    unsigned char l_1781 = 255UL;
                    union U0 **l_1783[8][9][2] = {{{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}, {{&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}, {&g_505, (void*)0}}};
                    union U0 l_1786 = {0L};
                    int *l_1798[7][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                    int i, j, k;
                    l_1781 |= (*p_12);
                    l_1783[6][4][1] = l_1782[5];
                    if ((l_1768 ^ (((**l_1775) = (safe_add_func_uint32_t_u_u(p_13.f0, 0UL))) >= g_1799)))
                    {
                        (*g_1673) = l_1800;

                        ;
                        if ((*p_12))
                            continue;
                        (*p_12) &= l_1768;
                    }
                    else
                    {
                        if ((*p_11))
                            break;
                    }
                }
                else
                {
                    int *l_1808 = &g_163;
                    if ((*p_12))
                    {
                        int l_1806[5][4] = {{0x7A9C3AC1L, 0L, 1L, 1L}, {0x7A9C3AC1L, 0L, 1L, 1L}, {0x7A9C3AC1L, 0L, 1L, 1L}, {0x7A9C3AC1L, 0L, 1L, 1L}, {0x7A9C3AC1L, 0L, 1L, 1L}};
                        int i, j;
                        (*l_1757) = (safe_lshift_func_uint8_t_u_s(p_13.f0, ((***l_1774) = p_13.f0)));
                        (*p_11) = ((*l_1758) |= (((+(**g_793)) > 0x847FL) ^ (safe_sub_func_int16_t_s_s((p_13.f0 <= ((6L || (*g_63)) < p_13.f0)), (*g_63)))));
                        p_12 = func_14(p_11, p_11, l_1765, g_103.f0);
                    }
                    else
                    {
                        p_11 = l_1807;

                        ;
                        (*l_1758) |= (p_11 != (p_12 = (void*)0));

                        ;
                        return l_1808;



                    }
                }
                (*l_1758) = ((l_1809 >= (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_1777[1][0][9] , (safe_add_func_int8_t_s_s((*g_216), ((g_1429[3][5][3] , (*g_881)) == (void*)0)))), (safe_add_func_uint16_t_u_u((p_13.f0 , (safe_add_func_int16_t_s_s(func_32(((p_13.f0 || (safe_rshift_func_uint16_t_u_s(((((*l_1807) , l_1765) == l_1822) == p_13.f0), (**g_793)))) != (*g_216)), p_11, p_11, g_1117), 65526UL))), p_13.f0)))), p_13.f0))) && p_13.f0);
                return p_12;



            }
            else
            {
                unsigned char l_1829 = 0x4FL;
                int *l_1844[8][7][1] = {{{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}, {{&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}, {&g_110.f0}}};
                int i, j, k;
                if (((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((*g_302), 0xA8E6A53DL)), (-1L))) & l_1829), p_13.f0)) < l_1765))
                {
                    int **l_1832[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1832[i] = &g_91[5];
                    g_91[6] = (void*)0;
                    (*p_12) = (*p_11);
                    (*l_1807) = (safe_lshift_func_int8_t_s_s((p_13.f0 & 0x7838L), (((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_1841 != (void*)0), ((*p_11) = l_1829))), 11)), 1)) > l_1829) != (safe_rshift_func_uint8_t_u_s(255UL, 2)))));
                    (*g_1673) = &p_13;

                    ;
                }
                else
                {
                    l_1805 = l_1844[7][2][0];

                    ;
                }

                ;
            }

            ;
            if ((*p_12))
                continue;
            return p_12;



        }


        for (g_511 = 0; (g_511 <= 23); g_511 = safe_add_func_int32_t_s_s(g_511, 4))
        {
            int *l_1862 = (void*)0;
            int **l_1864 = &g_1364[6];
            for (g_188 = 0; (g_188 <= 54); ++g_188)
            {
                int *l_1849 = (void*)0;
                int *l_1850 = &l_1777[1][0][8].f0;
                unsigned char *l_1858 = &g_84[0];
                int l_1863 = 0xBA470B56L;
                (*l_1758) = func_32((((*l_1850) = p_13.f0) , (&g_849 != l_1851)), p_12, func_14(g_1852, (p_11 = p_12), l_1853, ((**g_849) = (safe_rshift_func_int16_t_s_u(l_1863, p_13.f0)))), p_13.f0);
            }
            p_12 = func_14(((*l_1864) = p_12), p_11, p_13.f0, ((*g_216) > p_13.f0));
            (*l_1758) |= (l_1765 ^ p_13.f0);
        }
        (*l_1867) = g_1865;
    }
    else
    {
        unsigned short *****l_1868 = &g_663;
        unsigned short ******l_1871 = &g_1869;
        union U2 l_1899 = {0x7D20AC91L};
        int l_1923 = 1L;
        union U0 ***l_1964 = &l_1782[5];
        char l_1970 = 0x2CL;
        int *l_1977 = &g_9;
        union U1 l_1985 = {0xADL};
        union U2 **l_2009 = &g_102;
        union U1 **l_2023 = &g_98;
        unsigned *l_2024 = &g_511;
        int l_2025 = 0x76BC6E03L;
        short *l_2048[3][2][6] = {{{(void*)0, &g_87, (void*)0, &g_87, (void*)0, &g_87}, {(void*)0, &g_87, (void*)0, &g_87, (void*)0, &g_87}}, {{(void*)0, &g_87, (void*)0, &g_87, (void*)0, &g_87}, {(void*)0, &g_87, (void*)0, &g_87, (void*)0, &g_87}}, {{(void*)0, &g_87, (void*)0, &g_87, (void*)0, &g_87}, {(void*)0, &g_87, (void*)0, &g_87, (void*)0, &g_87}}};
        int *l_2134 = &g_9;
        int i, j, k;
        if ((l_1868 != ((*l_1871) = (l_1870 = g_1869))))
        {
            unsigned short **l_1882 = &g_283;
            int l_1896[9] = {2L, 0x8B7F74FEL, 2L, 0x8B7F74FEL, 2L, 0x8B7F74FEL, 2L, 0x8B7F74FEL, 2L};
            unsigned l_1898 = 0xE0DB6417L;
            short *l_1916 = &g_64;
            int l_1917[4];
            unsigned l_1922 = 1UL;
            unsigned short *l_1925 = &g_591;
            int l_1926 = 0x0AD071C1L;
            union U1 l_1934 = {0x01L};
            union U2 l_1943 = {0L};
            unsigned char ***l_1965 = &g_849;
            int ***l_1984 = &g_120;
            int i;
            for (i = 0; i < 4; i++)
                l_1917[i] = 0L;
            for (g_162 = 0; (g_162 < 55); g_162 = safe_add_func_int16_t_s_s(g_162, 1))
            {
                union U1 l_1883 = {0xD3L};
                unsigned short l_1888 = 0UL;
                short *l_1889 = &g_87;
                int *l_1900 = (void*)0;
                unsigned short l_1908 = 0xEAD8L;
                union U0 *l_1919 = &g_110;
                if ((((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s(0x1339L, (l_1882 == (l_1883 , (**g_660))))) == ((*l_1889) = ((**g_793) = ((safe_lshift_func_uint16_t_u_u(0x27FBL, 3)) & (safe_lshift_func_int16_t_s_u(l_1883.f0, l_1888)))))), 2)), 4)), (((*p_12) = (((3L == (((((!(safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((*p_12), p_13.f0)) , l_1888), p_13.f0)), l_1896[5]))) < 249UL) != 0UL) < p_13.f0) == l_1896[5])) != l_1897) >= l_1883.f0)) < l_1898))) , l_1899) , 0x2988B185L))
                {
                    unsigned l_1907 = 0x4A8E862AL;
                    int *l_1910 = &g_83;
                    if ((*p_12))
                    {
                        if ((*p_12))
                            break;
                    }
                    else
                    {
                        int **l_1909 = &g_91[6];
                        (*l_1909) = (void*)0;
                    }
                    return l_1910;


                }
                else
                {
                    unsigned l_1920[5][2];
                    int i, j;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1920[i][j] = 0x46D60E0AL;
                    }
                    for (l_1898 = 0; (l_1898 != 17); ++l_1898)
                    {
                        union U1 l_1913 = {246UL};
                        g_1918 |= (l_1913 , ((safe_mul_func_uint16_t_u_u((((((*p_11) || (*p_12)) <= ((void*)0 == l_1916)) , (*g_793)) != (void*)0), (**g_793))) , (((**g_849) = l_1917[1]) && p_13.f0)));
                        (*g_1673) = l_1919;

                        ;
                        (*l_1758) &= (*p_11);
                    }
                    (*l_1757) = (*p_12);
                    (*g_1852) = ((l_1920[4][1] , l_1921) != &g_793);
                }
            }
            l_1926 &= ((l_1923 = l_1922) && (((*l_1925) = ((0x13B6L & (p_13.f0 > p_13.f0)) | ((0x15882112L >= ((((l_1898 >= 0L) , l_1896[6]) , (*l_1757)) , l_1896[5])) | l_1917[0]))) | p_13.f0));
            for (l_1796.f0 = 0; (l_1796.f0 <= 5); l_1796.f0 += 1)
            {
                unsigned short l_1932 = 0x26ADL;
                int l_1946 = 1L;
                unsigned char *l_1947 = &g_53[5].f0;
                unsigned char *l_1948[2];
                int *l_1972 = &l_1926;
                int i;
                for (i = 0; i < 2; i++)
                    l_1948[i] = &g_307.f0;
                for (g_1799 = 2; (g_1799 <= 7); g_1799 += 1)
                {
                    unsigned l_1929[10] = {0x89C02EDBL, 0xCDFAD597L, 5UL, 5UL, 0xCDFAD597L, 0x89C02EDBL, 0xCDFAD597L, 5UL, 5UL, 0xCDFAD597L};
                    int i;
                    for (g_83 = 5; (g_83 >= 0); g_83 -= 1)
                    {
                        (*p_12) = 1L;
                    }
                    (*p_12) = l_1932;
                }
                if ((((*g_1852) |= ((l_1934 , (l_1923 ^= (safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(p_13.f0, (((safe_rshift_func_uint16_t_u_u((((*l_1925) |= l_1896[5]) <= p_13.f0), p_13.f0)) < p_13.f0) > p_13.f0))) | (*g_216)) , 1UL), p_13.f0)), p_13.f0)))) ^ 0xC4L)) != p_13.f0))
                {
                    g_1448[1] = ((*l_1757) , &l_1946);


                }
                else
                {
                    unsigned short l_1951 = 0x7BF8L;
                    int l_1956 = 3L;
                    int *l_1957 = (void*)0;
                    union U0 ***l_1961 = &l_1782[5];
                    union U0 ****l_1960 = &l_1961;
                    union U0 ***l_1963[5][4][7] = {{{&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}}, {{&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}}, {{&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}}, {{&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}}, {{&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}, {&l_1782[5], &l_1782[2], &l_1782[5], &l_1782[3], &l_1782[5], &g_1673, (void*)0}}};
                    union U0 ****l_1962[6] = {&l_1963[3][2][3], &l_1963[3][2][2], &l_1963[3][2][3], &l_1963[3][2][2], &l_1963[3][2][3], &l_1963[3][2][2]};
                    unsigned char ****l_1966 = (void*)0;
                    union U2 *l_1968 = &g_103;
                    int i, j, k;
                    for (g_307.f0 = 1; (g_307.f0 <= 5); g_307.f0 += 1)
                    {
                        return p_11;


                    }

                    (*l_1757) |= (*p_11);
                    if ((l_1946 = (g_1971 &= (safe_mod_func_int32_t_s_s((((*l_1960) = &g_1673) != (l_1964 = &g_1673)), ((((g_1967 = l_1965) == (void*)0) < 0UL) ^ (((*l_1968) = l_1943) , (l_1899.f0 <= ((safe_unary_minus_func_int16_t_s(2L)) & l_1970)))))))))
                    {
                        unsigned l_1978[2];
                        short *l_1979[2];
                        int l_1980[10] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
                        unsigned *l_1981 = &l_1897;
                        int l_1982[2][9][10] = {{{1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}}, {{1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}, {1L, (-2L), 0xBF66A5CEL, 0xE5BFF5B1L, 0xBF66A5CEL, (-2L), 1L, (-1L), (-3L), 0x1F41F45DL}}};
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_1978[i] = 0x4A7BBA1AL;
                        for (i = 0; i < 2; i++)
                            l_1979[i] = &g_87;
                        l_1977 = func_14(l_1972, &l_1896[5], p_13.f0, ((safe_rshift_func_uint16_t_u_s(l_1899.f0, l_1923)) == (((safe_add_func_uint32_t_u_u(((func_32(g_84[0], p_12, p_12, g_217) != p_13.f0) && (*g_63)), 0x5DFC54E3L)) != 65535UL) , l_1899.f0)));

                        ;
                        (*p_12) |= (0xAEL < (((((*l_1981) ^= (l_1978[0] != (l_1980[4] ^= (*g_63)))) , &g_1790) != (void*)0) , (l_1982[0][7][5] & (((l_1983 = ((**g_849) = (&g_1228[9] != (void*)0))) ^ (((l_1984 == l_1984) , &p_12) != &p_12)) , 0x5D9FD935L))));
                        (*l_1757) = (p_13.f0 > ((*l_1972) |= (l_1985 , (l_1943.f0 && p_13.f0))));
                    }
                    else
                    {
                        (*g_1852) |= (*l_1977);
                        (*g_1852) ^= (*l_1977);
                        if ((*p_11))
                            continue;
                    }

                    ;
                    ;
                    ;
                    ;
                    p_12 = &l_1946;

                    ;
                }


                ;
                ;
                for (l_1932 = 0; (l_1932 <= 5); l_1932 += 1)
                {
                    int *l_1990[4][10][6] = {{{&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}}, {{&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}}, {{&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}}, {{&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}, {&g_1365[7][1][2], &g_1623[2], &g_1440, &g_83, &l_1926, &l_1923}}};
                    int i, j, k;
                    l_1990[3][4][5] = func_14(p_11, func_14((p_13.f0 , ((**g_1865) , (p_12 = &l_1923))), &l_1923, ((safe_add_func_uint32_t_u_u((**g_301), (((safe_sub_func_int32_t_s_s((&l_1841 == (void*)0), (-3L))) <= p_13.f0) < (***g_300)))) , 0UL), (*l_1972)), p_13.f0, (*l_1977));

                    ;
                }

                ;
                return p_11;



            }

            ;
            ;
        }
        else
        {
            unsigned l_1994 = 0x992AE73EL;
            union U1 *l_2011 = &g_53[1];
            int l_2020 = 0xD81E0273L;
            if (((((p_13.f0 >= (**g_301)) < ((*l_1977) || ((*l_1757) & p_13.f0))) || ((*p_12) = (((((p_13.f0 >= ((**l_1868) == (l_1991 = l_1991))) != (safe_lshift_func_uint16_t_u_s(p_13.f0, (*l_1977)))) , 0x67L) != p_13.f0) >= 8L))) < l_1994))
            {
                unsigned l_1999 = 1UL;
                union U1 **l_2012 = &l_2011;
                for (g_511 = 0; (g_511 <= 4); g_511 += 1)
                {
                    short l_2000 = (-1L);
                    int l_2005[2][4][1] = {{{0x410BD8B0L}, {0x410BD8B0L}, {0x410BD8B0L}, {0x410BD8B0L}}, {{0x410BD8B0L}, {0x410BD8B0L}, {0x410BD8B0L}, {0x410BD8B0L}}};
                    char l_2008 = 5L;
                    int *l_2010[1][4][3] = {{{&g_9, (void*)0, (void*)0}, {&g_9, (void*)0, (void*)0}, {&g_9, (void*)0, (void*)0}, {&g_9, (void*)0, (void*)0}}};
                    int i, j, k;
                    if ((*g_1852))
                        break;
                    for (g_1971 = 4; (g_1971 >= 1); g_1971 -= 1)
                    {
                        (*l_1977) = (safe_lshift_func_uint16_t_u_u((((*p_11) > (((safe_mul_func_uint16_t_u_u((l_2000 = (l_1923 &= l_1999)), ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((**g_1229), 1)), l_2005[0][2][0])) | (l_2005[0][2][0] == ((safe_mul_func_int16_t_s_s(((l_2008 , &l_1970) == &l_2008), ((((p_13.f0 ^ (**g_793)) <= 5UL) > 0xEF48L) && p_13.f0))) > (-10L)))))) , (**g_1085)) != l_2009)) ^ (*g_63)), 7));
                        (*g_1933) ^= l_1994;
                        g_434 = l_2010[0][0][0];

                        ;
                    }
                    for (g_1260 = 0; (g_1260 <= 3); g_1260 += 1)
                    {
                        (*p_11) = (*p_11);
                    }
                }


                (*l_2012) = l_2011;
            }
            else
            {
                int l_2015 = 3L;
                (*g_1933) = ((*g_1852) = ((safe_add_func_int8_t_s_s((((+((*l_1757) = p_13.f0)) || (((~(((*g_216) = (((*l_1757) = (247UL && l_2015)) >= (**g_301))) | ((l_2015 || ((**g_793) = ((safe_sub_func_uint8_t_u_u((p_13.f0 && ((safe_sub_func_uint16_t_u_u(l_1994, (*g_63))) != (l_2020 |= (*l_1977)))), 4L)) && l_2015))) || (-10L)))) , 0x1797L) , (*l_1758))) <= p_13.f0), p_13.f0)) > p_13.f0));
                (*p_11) = (*p_11);
                return p_11;


            }


        }


        ;
        ;
        if ((((safe_add_func_uint8_t_u_u((*l_1977), ((1L < 65535UL) <= ((*g_302) && ((&l_1985 == ((*l_2023) = &l_1796)) , (*p_11)))))) != (((((*g_1933) = 8L) != ((*l_2024) = (**g_301))) > 9UL) == l_2025)) ^ (*l_1758)))
        {
            unsigned l_2027 = 0x02147B63L;
            int *l_2029 = &l_1923;
            union U2 ****l_2037 = &g_1086[2];
            for (g_83 = 2; (g_83 <= 9); g_83 += 1)
            {
                int l_2026 = (-1L);
                union U2 ****l_2036 = &g_1086[3];
                unsigned char l_2045 = 252UL;
                int i;
                if (l_2026)
                {
                    if ((*p_12))
                    {
                        (*g_1933) &= l_2027;
                        return p_12;




                    }
                    else
                    {
                        (*g_1933) = (*p_12);
                        (*p_11) = (safe_unary_minus_func_int32_t_s(0L));
                        (*g_1933) = (*p_11);
                        return &g_9;




                    }
                }
                else
                {
                    int *l_2030 = &g_1623[3];
                    short l_2044 = (-7L);
                    int i;
                    g_1364[g_83] = func_14(l_2030, p_12, (safe_mod_func_int8_t_s_s((~(((safe_unary_minus_func_int8_t_s((*g_216))) || ((safe_add_func_uint16_t_u_u(65529UL, (*l_2029))) < (l_2036 != ((((**g_793) ^= 0xF73AL) | p_13.f0) , l_2037)))) , p_13.f0)), (*l_1977))), p_13.f0);
                    if ((*g_1933))
                    {
                        (*l_1758) ^= (safe_mul_func_uint16_t_u_u(p_13.f0, (safe_mul_func_int16_t_s_s(((**g_301) != (~(-6L))), (p_13.f0 >= (safe_rshift_func_int8_t_s_s((((-6L) || p_13.f0) , l_2044), l_2045)))))));
                        return p_11;




                    }
                    else
                    {
                        (*l_1977) = (*l_1977);
                    }
                }
                g_1448[g_83] = &l_2026;


            }



        }
        else
        {
            short *l_2049 = &g_59;
            int *l_2052 = &g_1971;
            int *l_2097[2][9] = {{(void*)0, &l_1756, &g_89, &g_1440, &g_1440, &g_89, &l_1756, (void*)0, &g_89}, {(void*)0, &l_1756, &g_89, &g_1440, &g_1440, &g_89, &l_1756, (void*)0, &g_89}};
            int l_2101 = 0x281D14C8L;
            union U2 l_2121[6][6][2] = {{{{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}}, {{{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}}, {{{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}}, {{{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}}, {{{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}}, {{{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}, {{0xB334CE2CL}, {0x9982453DL}}}};
            int i, j, k;
            (*l_1758) = (safe_add_func_uint32_t_u_u(((void*)0 != (*g_793)), ((*g_302) = (l_2048[2][0][5] != l_2049))));
            for (g_1117 = (-18); (g_1117 >= 37); g_1117++)
            {
                (*p_11) = 0xEF502CCBL;
                p_11 = l_2052;

                ;
            }

            ;
            if ((*l_2052))
            {
                union U2 ***l_2056 = &l_2009;
                int l_2061 = 0xF42E4216L;
                unsigned char *l_2066 = &g_1585;
                int l_2069[10] = {0x1FBEA87EL, 0L, 0x75DC4E2EL, 0x75DC4E2EL, 0L, 0x1FBEA87EL, 0L, 0x75DC4E2EL, 0x75DC4E2EL, 0L};
                union U1 *l_2090 = &g_307;
                unsigned char l_2108 = 255UL;
                union U2 l_2132 = {0x8C8EEA5EL};
                unsigned *l_2133 = &l_1897;
                int i;
                if ((g_2053 & (!(safe_sub_func_uint32_t_u_u(((+((((*l_2052) = ((void*)0 != l_2056)) > (((*l_2049) ^= ((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((-1L) != (4294967295UL && l_2061)), ((((*l_2024) = ((**g_793) , (safe_lshift_func_int8_t_s_u(((*g_216) = ((safe_mul_func_uint8_t_u_u(((**g_849) = ((*l_2066) ^= 0xB9L)), (l_2069[2] = (safe_mul_func_int16_t_s_s((**g_793), (*l_1758)))))) || 4L)), 1)))) >= (-9L)) < 0xD4L))) >= (*l_1977)), l_2061)) | p_13.f0)) , (*g_63))) ^ p_13.f0)) || (*l_2052)), (*l_1977))))))
                {
                    int *****l_2074[7] = {&g_1791, &g_1791, &l_1754, &g_1791, &g_1791, &l_1754, &g_1791};
                    short **l_2082 = &l_2049;
                    unsigned short l_2083 = 0x4BE3L;
                    int i;
                    for (g_89 = 12; (g_89 < (-17)); g_89 = safe_sub_func_uint16_t_u_u(g_89, 8))
                    {
                        unsigned short l_2079 = 0x201DL;
                        (*l_1977) &= ((safe_add_func_uint16_t_u_u((2UL < (((l_2074[5] == l_2074[5]) , (((l_2069[2] && ((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((*g_1852) ^= (l_2079 | 1UL)) > p_13.f0), (safe_rshift_func_uint16_t_u_s(p_13.f0, ((*g_63) = (l_2082 != &l_2048[1][1][2])))))) >= l_2083), p_13.f0)) , (*l_2052))) > 2UL) == (*g_1933))) != (*l_2052))), l_2069[4])) >= 0x97A5L);
                        p_11 = func_14(g_2084, p_11, ((*l_1977) >= ((~p_13.f0) && ((void*)0 == l_2085[1][0]))), (safe_mul_func_int16_t_s_s((((*l_2052) >= (safe_mod_func_uint32_t_u_u(1UL, l_2061))) , l_2079), l_2069[7])));

                        ;
                    }

                    ;
                    (*l_1977) = (*l_1977);
                    if ((*l_1977))
                    {
                        return p_11;




                    }
                    else
                    {
                        char l_2093 = 0L;
                        int *l_2096 = (void*)0;
                        (*l_2023) = l_2090;

                        ;
                        (*l_1757) |= (safe_mul_func_uint16_t_u_u(l_2093, ((*p_12) , p_13.f0)));
                        g_435[0] = (void*)0;
                        p_12 = l_2096;

                        ;
                    }

                    ;
                    ;
                    p_12 = ((safe_unary_minus_func_uint32_t_u((l_2108 , 0x6F5FF655L))) , p_12);
                }
                else
                {
                    int l_2113[2][3][1];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_2113[i][j][k] = 0xB09231E6L;
                        }
                    }
                    (*p_11) = 0x2196B067L;
                    if (((*p_11) = ((safe_sub_func_uint32_t_u_u((252UL && p_13.f0), (*p_12))) || l_2069[1])))
                    {
                        return p_11;




                    }
                    else
                    {
                        int l_2114 = 0x6300D0E5L;
                        l_2113[1][1][0] = ((safe_rshift_func_uint16_t_u_s(l_2113[1][1][0], ((5L || l_2114) , (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(l_2114, ((((void*)0 != (*g_663)) <= ((*g_302) , 0xFA6C195BL)) <= 255UL))) <= (-7L)), 7))))) ^ (*p_11));
                        (*l_1757) &= ((l_2113[1][1][0] <= p_13.f0) ^ (safe_rshift_func_int8_t_s_u(((l_2121[3][5][0] , ((*l_2066) = (((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((*g_63) = func_32(p_13.f0, p_11, &l_2061, (*l_1977))), p_13.f0)), p_13.f0)) < (**g_1229)) != (*l_2052)))) == (*l_2052)), 2)));
                    }
                }

                ;
                ;
                ;
                (*l_2052) |= ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(0xF973L, p_13.f0)), (*l_1757))), p_13.f0)) , (*l_2134));
            }
            else
            {
                (*l_1758) &= (*p_12);
            }

            ;
            ;
            ;
        }

        ;


        ;
        ;
    }

    ;




    ;
    ;
    ;
    g_434 = p_12;

    ;
    return p_12;




}







static int * func_14(int * p_15, int * p_16, unsigned p_17, unsigned char p_18)
{
    char l_1691 = 0xC1L;
    short l_1692 = 0L;
    union U2 l_1698 = {-3L};
    int l_1702 = 0xE06BF1C7L;
    int *l_1711[9] = {&g_1623[3], &g_1623[3], &g_50, &g_1623[3], &g_1623[3], &g_50, &g_1623[3], &g_1623[3], &g_50};
    union U1 *l_1720[3][4][9] = {{{&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}}, {{&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}}, {{&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}, {&g_307, &g_53[1], &g_307, &g_307, &g_53[5], &g_53[3], &g_53[3], &g_53[2], &g_53[2]}}};
    union U1 **l_1721[9] = {&l_1720[2][1][6], &l_1720[2][1][6], (void*)0, &l_1720[2][1][6], &l_1720[2][1][6], (void*)0, &l_1720[2][1][6], &l_1720[2][1][6], (void*)0};
    union U1 *l_1722 = &g_53[4];
    unsigned l_1723 = 4294967290UL;
    unsigned char l_1724 = 0x9AL;
    unsigned char l_1734 = 7UL;
    int i, j, k;
    for (g_110.f0 = (-26); (g_110.f0 == (-11)); ++g_110.f0)
    {
        char l_1688 = 0x45L;
        int ****l_1696 = &g_119;
        int *****l_1695[8][8][3] = {{{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}, {{&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}, {&l_1696, (void*)0, &l_1696}}};
        int i, j, k;
        if (l_1688)
            break;
        for (g_1585 = 0; (g_1585 != 8); ++g_1585)
        {
            l_1691 &= (*p_15);
            if (l_1692)
                continue;
        }
        for (l_1688 = (-25); (l_1688 <= (-11)); l_1688++)
        {
            int ******l_1697 = &l_1695[4][1][2];
            char *l_1701[8] = {(void*)0, &l_1691, (void*)0, &l_1691, (void*)0, &l_1691, (void*)0, &l_1691};
            unsigned short *****l_1708 = (void*)0;
            int l_1714 = 0x025E0AF7L;
            int i;
        }
    }
    l_1722 = l_1720[2][1][6];

    ;
    if ((l_1723 ^ ((l_1724 &= (*p_15)) != 0L)))
    {
        union U0 l_1730 = {0xC3121519L};
        union U2 *l_1731 = (void*)0;
        int l_1732 = 0x2CC331BFL;
        union U2 ***l_1733[3];
        int **l_1735[9][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
        short l_1750 = 0x20BEL;
        unsigned *l_1751 = &g_911;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1733[i] = (void*)0;
        (*p_16) = (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((g_87 ^= ((safe_unary_minus_func_uint32_t_u((((l_1730 , ((l_1731 = &l_1698) != (void*)0)) >= ((**g_1229) = (**g_1229))) < (+(p_17 > (((((**g_793) = p_17) , 1L) , l_1732) | l_1730.f0)))))) && (-1L))), l_1732)), l_1730.f0));

        ;
        (*p_16) ^= (((*g_1085) = (*g_1085)) != l_1733[2]);
        (*p_15) = func_32(l_1734, &g_9, (p_16 = p_16), (safe_mul_func_int8_t_s_s((0xF0L && (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((*g_302) ^ ((*l_1751) &= func_32(((((func_32(p_18, p_15, p_15, (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((p_18 > l_1750), (***g_300))), p_17))) == 0x4202L) || p_18) ^ (**g_1229)) ^ (*p_15)), p_15, &l_1702, p_17))), (**g_793))), p_17)) <= 0UL), 1)) < p_18), g_59))), 0x92L)));
    }
    else
    {
        int *l_1752 = &g_9;
        return l_1752;


    }
    return p_15;


}







static unsigned func_19(union U0 p_20, int * p_21, unsigned short p_22, int * p_23, int * p_24)
{
    int l_1373 = 0x81DB5105L;
    int *l_1374 = &g_110.f0;
    unsigned **l_1384 = &g_302;
    unsigned **l_1385 = &g_302;
    int l_1400 = 1L;
    unsigned char *l_1426 = &g_53[5].f0;
    union U0 l_1446 = {2L};
    union U1 l_1473[10][10] = {{{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}, {{0UL}, {0UL}, {0x6BL}, {0UL}, {0UL}, {1UL}, {0UL}, {0UL}, {0x6BL}, {0UL}}};
    union U0 **l_1483 = (void*)0;
    int l_1498 = 0xB26935D5L;
    short **l_1516 = &g_63;
    int *l_1536 = &g_89;
    union U2 l_1559 = {0x02BA007BL};
    unsigned *l_1566 = &g_511;
    char *l_1569 = &g_1429[0][0][2];
    int l_1587 = 0x6C6A5378L;
    unsigned short ****l_1595 = (void*)0;
    unsigned l_1624[4];
    int **l_1654 = &g_1364[7];
    union U1 l_1679[8][7][4] = {{{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}, {{{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}, {{0x48L}, {0xDCL}, {0x82L}, {1UL}}}};
    unsigned short **l_1685 = &g_283;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1624[i] = 4294967289UL;
    if ((+(p_20.f0 | (safe_mul_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u(0x7EL, 1)) ^ ((**g_793) = ((**g_793) || p_22))) > (*l_1374)), 65534UL)))))
    {
        unsigned l_1375[9] = {2UL, 0x89D19B69L, 2UL, 0x89D19B69L, 2UL, 0x89D19B69L, 2UL, 0x89D19B69L, 2UL};
        int l_1376 = 0x13BAFA6EL;
        union U2 *l_1377 = (void*)0;
        int *l_1378 = &g_110.f0;
        int i;
        l_1376 = l_1375[6];
        (***g_1085) = l_1377;

        ;
        l_1378 = (void*)0;

        ;
    }
    else
    {
        unsigned char l_1390 = 0xC7L;
        unsigned l_1399 = 4294967295UL;
        union U1 *l_1401 = &g_53[5];
        int l_1404 = 0x2A9EA119L;
        unsigned char *l_1427 = &g_307.f0;
        union U0 **l_1433 = &g_856;
        int l_1438[6][2] = {{0xC7329CA6L, 0x6D14230FL}, {0xC7329CA6L, 0x6D14230FL}, {0xC7329CA6L, 0x6D14230FL}, {0xC7329CA6L, 0x6D14230FL}, {0xC7329CA6L, 0x6D14230FL}, {0xC7329CA6L, 0x6D14230FL}};
        char **l_1459 = &g_216;
        short **l_1518[3];
        unsigned *l_1565 = &g_911;
        char **l_1567 = (void*)0;
        char **l_1568 = (void*)0;
        unsigned short ****l_1594 = &g_661[2][0];
        int i, j;
        for (i = 0; i < 3; i++)
            l_1518[i] = &g_63;
        l_1374 = &g_9;

        ;
        if ((((safe_add_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s((*g_63))) > 0L) >= ((l_1384 = l_1384) == l_1385)), p_22)) | ((**l_1385) &= p_20.f0)) < ((safe_rshift_func_uint8_t_u_u((*g_850), (safe_sub_func_uint32_t_u_u(p_22, ((**g_1229) | (*l_1374)))))) < l_1390)))
        {
            char l_1391 = 8L;
            unsigned short *l_1398 = &g_231;
            union U1 *l_1402 = &g_307;
            short *l_1403[10];
            union U0 l_1435 = {0x10468A0DL};
            unsigned short l_1454 = 1UL;
            char l_1463 = 0x3AL;
            int *l_1488 = (void*)0;
            char l_1492 = 0x50L;
            int i;
            for (i = 0; i < 10; i++)
                l_1403[i] = &g_87;
            l_1391 |= (*p_24);
            if ((((l_1404 ^= ((p_20.f0 < ((*l_1374) < ((**g_793) |= (safe_lshift_func_uint8_t_u_s(((!(safe_sub_func_uint32_t_u_u((((**g_300) = (*g_301)) == p_21), 0xF299084AL))) && ((*l_1398) = (*l_1374))), l_1399))))) <= (((l_1400 , l_1401) != l_1402) != (-4L)))) ^ p_20.f0) || (-5L)))
            {
                int l_1425 = 0x04250AC3L;
                int l_1428 = 0x41564F3CL;
                unsigned l_1430 = 4294967290UL;
                int l_1447 = (-3L);
                (*p_23) = ((safe_add_func_int16_t_s_s((((((****g_1085) , ((*g_216) = (safe_mul_func_uint16_t_u_u((l_1391 != (0xED8DL | (safe_mul_func_uint8_t_u_u((p_20.f0 | (*l_1374)), (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((**g_849) = (safe_mul_func_uint8_t_u_u(((l_1425 &= ((*g_302) |= (safe_lshift_func_uint8_t_u_s(l_1391, 1)))) != (((l_1427 = l_1426) == (*g_849)) ^ l_1399)), (*g_850)))), l_1428)), l_1428)), g_1429[0][0][2])) >= (*l_1374)), l_1391)), 1L)))))), 0x7348L)))) == 0L) , 4294967289UL) , (*g_63)), l_1399)) | l_1404);

                ;
                if (((*l_1374) = l_1430))
                {
                    unsigned l_1443 = 0xD861F216L;
                    for (l_1430 = (-26); (l_1430 != 29); ++l_1430)
                    {
                        unsigned *l_1434 = &l_1399;
                        int *l_1439[3][1][5] = {{{&g_89, &g_1365[0][1][0], &g_89, &g_1365[0][1][0], &g_89}}, {{&g_89, &g_1365[0][1][0], &g_89, &g_1365[0][1][0], &g_89}}, {{&g_89, &g_1365[0][1][0], &g_89, &g_1365[0][1][0], &g_89}}};
                        int i, j, k;
                        g_1440 ^= ((p_20.f0 = ((*l_1374) = ((p_20.f0 == (((*l_1427) = ((&g_505 == l_1433) || ((**l_1384) |= l_1404))) , 0xA7L)) | 0x95DCL))) > 0x4E00422CL);
                        if ((*p_24))
                            continue;
                        if ((*l_1374))
                            break;
                        (*p_24) = (func_32((*l_1374), p_24, p_23, (safe_lshift_func_uint16_t_u_u((l_1443 |= p_22), p_20.f0))) , 1L);
                    }
                    (*p_23) |= l_1404;
                }
                else
                {
                    for (l_1390 = 0; l_1390 < 10; l_1390 += 1)
                    {
                        g_1228[l_1390] = &g_1229;
                    }
                    for (g_50 = (-19); (g_50 <= 12); g_50++)
                    {
                        unsigned short l_1449[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1449[i] = 0x6AA3L;
                        if ((*l_1374))
                            break;
                        (*p_24) = ((*l_1401) , (l_1449[0] < (safe_lshift_func_uint16_t_u_s(p_20.f0, p_20.f0))));
                    }
                    l_1428 = (safe_sub_func_int32_t_s_s(l_1447, p_20.f0));
                    (*l_1374) = l_1454;
                }
            }
            else
            {
                short l_1475 = 0xD669L;
                union U0 *l_1502 = &g_110;
                int ****l_1511 = &g_119;
                if (((safe_sub_func_uint8_t_u_u((+255UL), (**g_1229))) | 0L))
                {
                    char ***l_1460[5] = {&l_1459, &l_1459, &l_1459, &l_1459, &l_1459};
                    int l_1468[1][2][6];
                    unsigned char l_1489[10] = {1UL, 1UL, 7UL, 1UL, 1UL, 7UL, 1UL, 1UL, 7UL, 1UL};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_1468[i][j][k] = (-4L);
                        }
                    }
                    l_1459 = l_1459;
                    for (g_110.f0 = 0; (g_110.f0 < 5); g_110.f0++)
                    {
                        p_21 = &g_9;

                        ;
                        if (l_1463)
                            break;
                    }

                    ;
                    for (g_1117 = 0; (g_1117 == 58); g_1117++)
                    {
                        l_1404 &= (l_1454 ^ (safe_add_func_uint32_t_u_u((*g_302), (l_1435.f0 = (*p_24)))));
                        (*p_24) |= l_1468[0][0][0];
                    }
                    for (g_489 = 13; (g_489 == (-17)); g_489--)
                    {
                        int *l_1474 = &l_1468[0][1][1];
                        union U0 ***l_1482 = &l_1433;
                        (*l_1474) |= (0x49DDL < (!(safe_mod_func_uint32_t_u_u(p_20.f0, ((((l_1473[5][1] , p_20.f0) > (*p_23)) != l_1475) | p_20.f0)))));
                        (*l_1474) |= (safe_add_func_uint8_t_u_u(l_1475, l_1489[2]));
                        (*p_24) = ((((**g_1229) && (l_1492 < (safe_unary_minus_func_int8_t_s(((void*)0 == &g_1228[9]))))) == 7UL) > (((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(0UL, 7)) | (((-1L) || ((((**l_1384) &= p_22) == ((*g_850) | 0L)) , l_1468[0][0][0])) & 0x462D186FL)) ^ l_1498), (*l_1374))) == 8L) >= 255UL));
                    }
                }
                else
                {
                    union U0 *l_1501 = &l_1435;
                    int *l_1503 = &g_1365[0][1][0];
                    int *l_1504[2][5] = {{&l_1404, (void*)0, &g_89, &g_89, (void*)0}, {&l_1404, (void*)0, &g_89, &g_89, (void*)0}};
                    int **l_1505[7];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_1505[i] = &g_91[6];
                    l_1435.f0 |= ((*l_1503) ^= (safe_add_func_uint16_t_u_u(p_20.f0, ((*l_1374) = ((p_20 , &l_1435) == (l_1502 = l_1501))))));

                    ;
                    p_23 = ((*p_23) , p_23);
                }

                ;
                ;
                if (l_1438[3][0])
                {
                    int **l_1506 = &g_91[6];
                    int ****l_1509 = &g_119;
                    int *****l_1510 = &l_1509;
                    short ***l_1517 = &l_1516;
                    (*l_1506) = p_24;
                    (*p_23) = (((safe_mul_func_int8_t_s_s(((**g_1229) = (((((*l_1510) = l_1509) == l_1511) <= p_20.f0) == ((((*l_1398) |= ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_1517) = l_1516) != l_1518[0]), p_22)), (((*g_850) ^ (safe_rshift_func_uint8_t_u_u(p_22, (((*l_1374) <= 1L) <= p_22)))) , p_22))) ^ p_20.f0)) && 0x7ABEL) <= p_22))), 0xE0L)) , p_20.f0) , 0L);
                }
                else
                {
                    for (g_489 = 0; (g_489 == 12); ++g_489)
                    {
                        (***g_1085) = (***g_1085);
                        if (g_1523)
                            continue;
                    }
                    for (g_1117 = 0; (g_1117 == 60); g_1117 = safe_add_func_uint32_t_u_u(g_1117, 9))
                    {
                        (*p_24) = (*p_23);
                        return g_64;
                    }
                }
                (*l_1536) ^= ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((0xFEE7B2ADL < (*l_1374)) | (safe_mul_func_int16_t_s_s((**g_793), p_20.f0))), (*g_216))), ((*l_1426) = p_20.f0))) , (safe_rshift_func_uint16_t_u_u((*l_1374), (safe_add_func_int32_t_s_s(l_1438[2][1], p_20.f0)))));
            }

            ;
            ;
        }
        else
        {
            char **l_1537 = &g_216;
            int l_1540 = 0x5CCC201EL;
            int *l_1551 = &g_1365[0][1][0];
            int l_1556 = 8L;
            union U0 *l_1557[8][6] = {{&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}, {&g_110, &g_110, &g_110, &g_110, &g_110, &g_110}};
            union U1 *l_1564 = &l_1473[5][1];
            int i, j;
            (*l_1536) |= ((l_1404 = ((*g_216) ^= ((void*)0 == l_1537))) <= (*g_850));
            (*p_23) = (safe_mul_func_int8_t_s_s(l_1540, ((**g_849) = ((l_1404 = (safe_lshift_func_int8_t_s_s(((*g_850) > 0UL), 1))) > 0x09L))));
            l_1557[3][0] = &g_110;
            for (g_511 = 3; (g_511 <= 9); g_511 += 1)
            {
                int l_1558 = 1L;
                for (g_489 = 7; (g_489 >= 2); g_489 -= 1)
                {
                    int i;
                    if ((*p_24))
                    {
                        int i;
                        if ((*p_24))
                            break;
                        g_1364[g_511] = p_24;
                        (*l_1374) ^= (((l_1558 & (*l_1551)) > (l_1559 , (*l_1536))) ^ (safe_lshift_func_int16_t_s_s(l_1390, ((p_22 < l_1399) , (**g_793)))));
                    }
                    else
                    {
                        (*p_23) = ((p_20.f0 >= (*l_1536)) < p_22);
                        (*p_23) = (-1L);
                    }
                    for (g_188 = (-5); (g_188 != 27); g_188++)
                    {
                        l_1564 = (void*)0;

                        ;
                        if ((*p_23))
                            continue;
                        if (l_1438[3][0])
                            break;
                    }
                    (*l_1536) = (*p_23);
                }
            }


            ;
        }


        ;
        ;
        (*p_23) = ((((*g_301) = p_24) != (l_1566 = l_1565)) , (((((*g_1229) = (*l_1459)) == (l_1569 = l_1427)) | (-2L)) , (safe_sub_func_uint16_t_u_u(0xB0EEL, l_1390))));

        ;
        ;
        ;
        for (g_489 = 0; (g_489 >= (-30)); g_489 = safe_sub_func_int16_t_s_s(g_489, 1))
        {
            int *l_1584 = &g_1343;
            for (l_1498 = 0; (l_1498 >= (-26)); l_1498--)
            {
                int *l_1576 = &g_163;
                int **l_1577 = &l_1374;
                unsigned *l_1586 = &l_1399;
                (*l_1536) &= ((l_1438[3][0] ^ (**g_1229)) | ((p_20.f0 && (((**l_1385) = ((safe_lshift_func_int8_t_s_s((((*l_1586) = ((func_32((safe_lshift_func_int8_t_s_s(((*l_1569) = ((**g_793) || (safe_rshift_func_int16_t_s_u(((*g_63) = func_32((*l_1576), l_1584, l_1374, g_1585)), (*l_1576))))), l_1390)), p_23, l_1584, g_84[0]) && p_22) ^ (**l_1577))) , 1L), p_20.f0)) >= (-7L))) > 4294967289UL)) > p_20.f0));
                if (l_1587)
                    break;
                for (g_911 = 0; (g_911 >= 53); ++g_911)
                {
                    int *l_1596 = &l_1404;
                    (**l_1577) = (safe_sub_func_int16_t_s_s((**g_793), (safe_mod_func_int32_t_s_s(((l_1595 = l_1594) == (void*)0), (((l_1559 , l_1438[3][0]) , (((**l_1577) & (*l_1576)) , func_32(p_22, ((*g_302) , l_1596), p_23, p_22))) , l_1404)))));

                    ;
                    if ((*l_1584))
                        break;
                    for (g_59 = 0; (g_59 != 17); g_59++)
                    {
                        unsigned short l_1599 = 5UL;
                        (*p_23) ^= l_1599;
                    }
                    (*l_1536) = (*p_24);
                }
            }
        }

                ;
    }

        ;
    ;

    ;
    ;
    ;
    ;
    ;
    for (g_59 = 0; (g_59 == 8); ++g_59)
    {
        unsigned char l_1610 = 0x5EL;
        int l_1611 = 0xDC982F5CL;
        unsigned short l_1617 = 0x039DL;
        int *l_1647 = &g_1623[4];
        unsigned short ***l_1652 = &g_282;
        int l_1677 = 1L;
        union U1 l_1680 = {1UL};
        int l_1683 = 1L;
        union U2 *l_1684 = &l_1559;
        (*p_24) = (((*l_1374) >= (((((*g_216) != (~(*l_1374))) != ((safe_lshift_func_int16_t_s_u(0x88BCL, 4)) || 1UL)) > 9L) == ((p_22 & (4L <= (safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_20.f0, (**g_793))), p_20.f0)))) == 0L))) , (*p_24));
        for (g_163 = 0; (g_163 <= 1); g_163 += 1)
        {
            unsigned short *l_1614 = &g_162;
            int l_1634 = 4L;
            int *l_1666[10][2] = {{&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}, {&g_1343, &g_1365[1][1][3]}};
            char l_1676 = 0x22L;
            int i, j;
        }
        (***g_1085) = (l_1677 , (p_20 , l_1684));

        ;
    }

    ;
    (**g_663) = l_1685;
    return g_89;


}







static union U0 func_27(short p_28, unsigned p_29, int * p_30, short p_31)
{
    short l_1107 = 0x1D2FL;
    int *l_1110[5];
    char **l_1111 = &g_216;
    unsigned l_1112 = 9UL;
    unsigned short *l_1113 = &g_162;
    unsigned short *l_1114 = &g_231;
    unsigned char *l_1115[7][5][3] = {{{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}, {{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}, {{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}, {{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}, {{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}, {{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}, {{(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}, {(void*)0, &g_53[5].f0, (void*)0}}};
    unsigned short l_1116 = 0x3C4CL;
    union U0 l_1127[6] = {{4L}, {4L}, {0xA602415BL}, {4L}, {4L}, {0xA602415BL}};
    int *l_1128[7] = {&g_163, &g_9, &g_163, &g_9, &g_163, &g_9, &g_163};
    unsigned l_1129 = 0x3555C577L;
    unsigned *l_1130 = &g_71;
    unsigned short l_1131 = 0x34A5L;
    short l_1142 = 0x3D9CL;
    union U1 l_1151 = {0x96L};
    union U1 **l_1155 = &g_98;
    unsigned short l_1277[5][5][2] = {{{0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}}, {{0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}}, {{0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}}, {{0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}}, {{0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}, {0UL, 65535UL}}};
    int *l_1290 = &g_89;
    union U2 ****l_1342 = &g_1086[1];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1110[i] = &g_163;
    (*p_30) = ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(((((*g_850) , (*g_881)) != (*g_881)) <= (safe_unary_minus_func_uint8_t_u(((g_1117 |= (l_1116 = func_32(((((*l_1114) = ((*l_1113) = ((l_1107 != (safe_lshift_func_uint16_t_u_u(((*p_30) <= ((func_32(((void*)0 != &g_1086[3]), p_30, l_1110[2], g_84[0]) , l_1111) == (void*)0)), l_1112))) == p_29))) & p_28) ^ p_28), p_30, l_1110[3], g_59))) ^ 0xB4L)))), 0UL)) & (*g_216)), (*p_30))) , (*p_30));
    if ((((*g_63) |= (safe_add_func_uint32_t_u_u((***g_300), (*g_302)))) ^ l_1131))
    {
        char l_1134 = 0x1AL;
        unsigned char **l_1135 = &l_1115[4][1][2];
        int *l_1143 = &g_9;
        int l_1144 = (-1L);
        char *l_1149 = &l_1134;
        int **l_1150 = &g_434;
        union U1 **l_1154 = &g_98;
        union U2 l_1156 = {9L};
        union U2 **l_1157 = &g_102;
        union U0 l_1166 = {0xA5E7444CL};
        l_1144 &= (((((((**g_849) = ((4294967293UL < ((*g_856) , (safe_rshift_func_int16_t_s_s(((*g_216) < (l_1134 < ((void*)0 == l_1135))), ((safe_lshift_func_uint16_t_u_u(((func_32((((safe_lshift_func_uint16_t_u_s((~(safe_lshift_func_uint16_t_u_u(p_28, l_1134))), l_1134)) < p_31) , l_1142), l_1143, p_30, p_31) < (*p_30)) <= p_28), 14)) < p_29))))) != (-2L))) != (*l_1143)) , (*l_1143)) > (*p_30)) > p_31) == (*l_1143));
        l_1144 |= (safe_add_func_int16_t_s_s(((65535UL && (**g_793)) != ((safe_lshift_func_int8_t_s_u(((*l_1149) = ((**l_1111) = ((**g_793) | p_28))), 5)) == (*p_30))), (+(l_1127[5] , p_29))));
        (*l_1150) = p_30;

        ;
        if ((((((l_1151 , p_28) & (((**l_1150) = (safe_mod_func_uint32_t_u_u(((*g_302) &= ((((*g_881) = l_1154) != l_1155) >= (((((*g_102) = l_1156) , (((!0xEA8E9E8FL) & ((void*)0 == l_1157)) == ((*l_1113) |= (*l_1143)))) && 1UL) != (*p_30)))), 0x77E584D6L))) & p_29)) || p_28) || (**g_793)) == (**g_849)))
        {
            for (g_455 = (-1); (g_455 < (-17)); g_455--)
            {
                char **l_1160 = &l_1149;
                char ***l_1161 = &l_1111;
                int l_1164 = 0xECFBEAC3L;
                union U2 l_1165 = {0xF5F25864L};
                (*l_1157) = (*l_1157);
                (*l_1161) = l_1160;

                ;
                for (l_1151.f0 = 0; (l_1151.f0 > 55); l_1151.f0++)
                {
                    (*p_30) = (*p_30);
                    l_1164 &= (*p_30);
                    (*l_1150) = (l_1165 , p_30);
                }
                l_1144 = ((**l_1150) = (*p_30));
            }

            ;
            return l_1166;

                    }
        else
        {
            unsigned char l_1167 = 254UL;
            int l_1179 = 0xD09E40A5L;
            union U2 *l_1197 = &g_103;
            unsigned ***l_1201 = &g_301;
            unsigned ***l_1202 = &g_301;
            union U0 *l_1220 = &l_1166;
            if ((**l_1150))
            {
                unsigned short l_1178 = 0xE5BCL;
                unsigned l_1192 = 3UL;
                int l_1198[4][3][2] = {{{8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}}, {{8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}}, {{8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}}, {{8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}, {8L, 0x8DF1D7FDL}}};
                int i, j, k;
                l_1167 &= ((*p_30) & (((*g_850) = (p_29 && (*l_1143))) > p_28));
                for (g_83 = 0; (g_83 >= 0); g_83 -= 1)
                {
                    int i;
                    if (((safe_rshift_func_int8_t_s_u((~(safe_rshift_func_int16_t_s_s((((**g_849) = (safe_lshift_func_uint16_t_u_s((g_84[g_83] && p_31), p_31))) != ((safe_sub_func_int8_t_s_s(((1UL < (safe_rshift_func_int8_t_s_s((*g_216), 0))) | 2UL), (*g_216))) < p_28)), 2))), 3)) & ((g_9 > (*g_216)) , l_1178)))
                    {
                        (*l_1143) &= g_84[g_83];
                        (*l_1150) = p_30;
                    }
                    else
                    {
                        l_1179 &= (p_29 , (*p_30));
                    }
                    for (g_163 = 7; (g_163 >= 0); g_163 -= 1)
                    {
                        unsigned *l_1195 = &l_1112;
                        union U0 **l_1196 = &g_856;
                        l_1179 |= (safe_mul_func_uint8_t_u_u(((((*g_856) , (((*l_1130) ^= (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_84[g_83], ((*l_1195) ^= (safe_mod_func_int16_t_s_s((**g_793), (p_31 , (4UL ^ (safe_mul_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s((-1L), (*g_63))) <= l_1192) | ((*l_1114) = (safe_sub_func_int32_t_s_s((*g_434), (*p_30))))) != 0xF433L), g_84[g_83]))))))))), g_84[g_83]))) , 0xEEF50B19L)) , (*g_850)) < p_28), (*g_216)));
                        (*l_1196) = &l_1127[3];

                        ;
                    }
                    for (g_455 = 0; (g_455 <= 7); g_455 += 1)
                    {
                        (*l_1157) = l_1197;
                    }
                }

                ;
                l_1198[0][1][0] |= func_32(l_1192, l_1128[1], &l_1179, g_231);
            }
            else
            {
                unsigned l_1207 = 0xA91460ABL;
                union U2 ***l_1209 = &l_1157;
                union U2 ****l_1208 = &l_1209;
                (**l_1150) = (safe_add_func_uint8_t_u_u(((**l_1150) > ((g_300 = l_1201) != (((**g_793) < l_1167) , l_1202))), (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_29, (l_1207 ^= 0xDDEFL))), ((*g_1085) != ((*l_1208) = &l_1157))))));
            }

            ;
            for (l_1179 = 18; (l_1179 > 22); l_1179 = safe_add_func_uint16_t_u_u(l_1179, 3))
            {
                for (l_1156.f0 = 0; (l_1156.f0 == (-18)); --l_1156.f0)
                {
                    if ((*p_30))
                        break;
                    (*g_434) = ((g_87 , (((*l_1135) = l_1115[3][2][0]) == ((*g_849) = (*g_849)))) , (*p_30));
                }
            }
            for (g_83 = (-28); (g_83 > (-24)); g_83++)
            {
                unsigned short l_1224 = 1UL;
                for (p_28 = (-3); (p_28 >= (-10)); --p_28)
                {
                    (*l_1150) = &l_1179;

                    ;
                    for (l_1142 = 0; (l_1142 > 4); ++l_1142)
                    {
                        union U0 **l_1221 = (void*)0;
                        union U0 **l_1222 = &g_505;
                        union U0 **l_1223 = &g_856;
                        int l_1225 = 0x39C07DD6L;
                        (*l_1143) = ((((*l_1143) >= 1L) == (p_29 , ((*l_1114) = (l_1224 = ((p_31 , (+(((*l_1223) = ((*l_1222) = l_1220)) == (p_31 , &g_110)))) || ((p_29 <= (func_32(g_1117, p_30, p_30, g_64) >= 0x34L)) , 0xE8L)))))) && (***g_300));

                        ;
                        ;
                        (*g_300) = (*g_300);
                        l_1225 ^= ((*p_30) ^= (**l_1150));
                    }
                    (*p_30) = (*p_30);
                }
                if ((*p_30))
                    continue;
            }

            ;
            ;
            ;
            for (g_50 = (-16); (g_50 < (-20)); g_50 = safe_sub_func_uint32_t_u_u(g_50, 3))
            {
                char ***l_1231 = &g_1229;
                char ****l_1230 = &l_1231;
                (*l_1143) ^= func_32((g_1228[9] != ((*l_1230) = (void*)0)), &l_1179, ((*l_1150) = l_1110[0]), l_1167);

                ;
                ;
                (**l_1150) &= (*p_30);
            }

            ;
        }


        ;
        ;
    }
    else
    {
        int l_1235 = (-2L);
        union U2 **l_1242 = &g_102;
        union U1 *l_1264 = &g_53[2];
        char l_1285 = 0x53L;
        int **l_1312 = &l_1110[2];
        if ((*p_30))
        {
            short l_1232 = 0xA4D8L;
            int *l_1238 = &g_163;
            union U0 l_1259[10] = {{-1L}, {-1L}, {-5L}, {-1L}, {-1L}, {-5L}, {-1L}, {-1L}, {-5L}, {-1L}};
            int i;
            (*p_30) &= (0xE13D7E78L <= ((l_1232 ^= (**g_1229)) > (safe_mul_func_int16_t_s_s(p_28, (p_28 , (p_31 = p_31))))));
            (*p_30) = (l_1235 < (safe_sub_func_uint16_t_u_u(p_28, (*g_63))));
            for (g_188 = 2; (g_188 <= 9); g_188 += 1)
            {
                unsigned short l_1239[1][6];
                int ***l_1240 = &g_120;
                union U2 **l_1243[5];
                unsigned l_1279 = 4294967291UL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_1239[i][j] = 1UL;
                }
                for (i = 0; i < 5; i++)
                    l_1243[i] = &g_102;
                if (l_1239[0][4])
                {
                    int *l_1241 = &g_163;
                    for (g_87 = 7; (g_87 >= 0); g_87 -= 1)
                    {
                        (*l_1238) = ((void*)0 != l_1240);
                    }
                    p_30 = l_1241;

                    ;
                }
                else
                {
                    int l_1256[7] = {0x4E78E367L, 0L, 0x4E78E367L, 0L, 0x4E78E367L, 0L, 0x4E78E367L};
                    int i;
                    l_1243[0] = l_1242;
                    g_435[4] = ((((((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(p_29, ((*p_30) , p_28))), (*p_30))) > p_29) | (safe_lshift_func_int16_t_s_u(l_1235, p_31))) , 0xD9532695L) != ((safe_sub_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((((*g_63) |= (safe_mul_func_int8_t_s_s(l_1235, 4L))) && (**g_793)), 0xF1A2L)) < l_1256[2]), (*g_850))) != (*p_30))) | p_28) != (**g_1229)) , (void*)0);
                    (*l_1238) ^= ((safe_sub_func_int16_t_s_s(((!(l_1127[3] , 5UL)) & (**g_301)), ((*l_1114) &= 65529UL))) , l_1256[2]);
                    return l_1259[6];

                                    }

                ;
                for (p_28 = 4; (p_28 >= 1); p_28 -= 1)
                {
                    unsigned short l_1261 = 1UL;
                    (*p_30) = (((*p_30) , (**g_793)) && ((l_1235 = g_1260) != (((*g_856) = (p_29 , l_1259[5])) , (***g_300))));
                    if (((*p_30) = l_1261))
                    {
                        unsigned short l_1262 = 0xEAB0L;
                        union U0 l_1263 = {0xD9A5B560L};
                        l_1262 ^= (*p_30);
                        if (l_1262)
                            break;
                        return l_1263;

                                            }
                    else
                    {
                        int *l_1278 = &g_489;
                        int l_1280[4];
                        union U0 l_1281 = {-6L};
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1280[i] = 1L;
                        l_1264 = ((*l_1155) = l_1264);
                        l_1259[6].f0 ^= ((safe_add_func_uint8_t_u_u(((**l_1242) , 0xDCL), l_1261)) < (safe_add_func_uint32_t_u_u((((***g_300) >= ((g_84[0] = ((**g_849) &= (safe_lshift_func_uint16_t_u_s(func_32((((0x0EE7L ^ func_32(func_32((((*l_1278) &= ((((*l_1114) ^= (0UL >= ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_29, ((safe_sub_func_uint32_t_u_u(((*l_1238) = 0xC7791422L), (*g_302))) >= (*g_216)))), (**g_793))) ^ (*g_302)))) ^ l_1277[4][0][1]) != p_31)) , p_29), p_30, p_30, l_1279), &l_1235, p_30, p_29)) , (*l_1238)) <= 0xBFEE6426L), p_30, &l_1235, g_50), 8)))) < p_28)) && l_1261), l_1280[1])));
                        return l_1281;

                                            }
                }
            }

            ;
        }
        else
        {
            union U0 l_1286 = {-5L};
            for (l_1235 = 0; (l_1235 <= 3); l_1235 += 1)
            {
                union U0 **l_1282 = &g_505;
                (*l_1282) = &g_110;

                ;
                (*p_30) &= (safe_sub_func_int16_t_s_s(l_1285, (0xD57FL >= p_29)));
                return l_1286;

                            }
            (*p_30) = (*p_30);
        }

        ;
        if (l_1285)
        {
            unsigned *l_1289 = &l_1112;
            int l_1297 = 0x67CE4940L;
            unsigned l_1299[10][9] = {{0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}, {0xCA84A34DL, 0x1C37F3DEL, 1UL, 0x1C37F3DEL, 0xCA84A34DL, 4294967295UL, 0xCA84A34DL, 0x1C37F3DEL, 1UL}};
            short *l_1300 = (void*)0;
            short *l_1301 = &l_1107;
            int i, j;
            (*l_1290) = (safe_sub_func_uint32_t_u_u(((*l_1289) &= (***g_300)), (func_32(((*l_1130) = 4294967295UL), l_1290, ((safe_add_func_int16_t_s_s(l_1285, ((safe_sub_func_uint32_t_u_u((*g_302), (safe_add_func_int16_t_s_s(l_1297, ((*l_1301) &= ((**g_793) = (safe_unary_minus_func_int32_t_s(((*p_30) = l_1299[5][6]))))))))) < (!(((l_1285 , (((((safe_mul_func_int16_t_s_s((-2L), 0xEFC7L)) | (***g_300)) == 1L) | l_1297) & (**g_301))) && (*g_302)) <= p_29))))) , &l_1297), p_31) , p_29)));
            for (g_1260 = 0; (g_1260 > (-29)); g_1260 = safe_sub_func_int8_t_s_s(g_1260, 1))
            {
                int l_1308 = (-5L);
                int l_1313 = 4L;
                g_91[0] = &l_1235;
                for (g_188 = (-11); (g_188 > 57); ++g_188)
                {
                    char ***l_1311 = &g_1229;
                    l_1313 &= (((((*l_1289) = l_1285) || ((*l_1289) &= (l_1308 || ((l_1299[7][2] | ((((((**g_1229) & ((**g_849) = (safe_add_func_int16_t_s_s(((((((l_1308 ^ 0x58L) && func_32(g_87, p_30, p_30, p_29)) < p_31) , l_1311) != (void*)0) ^ 1UL), 0x4581L)))) > 0x0CL) && (*g_850)) & 0x14C03BCEL) , l_1235)) , 0x3259CE92L)))) , l_1312) != &p_30);
                    for (g_9 = 0; g_9 < 7; g_9 += 1)
                    {
                        l_1128[g_9] = &l_1235;
                    }
                    if ((*p_30))
                        continue;
                    for (g_231 = 0; (g_231 <= 52); g_231++)
                    {
                        return l_1127[2];


                                            }
                }
                for (g_231 = 0; (g_231 <= 2); g_231 += 1)
                {
                    unsigned l_1330 = 3UL;
                    for (g_89 = 2; (g_89 >= 0); g_89 -= 1)
                    {
                        char l_1318[7][6] = {{0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}, {0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}, {0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}, {0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}, {0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}, {0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}, {0x29L, (-1L), (-1L), 0L, (-1L), (-1L)}};
                        int *l_1319[6][7][4] = {{{&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}}, {{&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}}, {{&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}}, {{&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}}, {{&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}}, {{&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}, {&g_110.f0, &l_1235, &g_110.f0, &l_1235}}};
                        int i, j, k;
                        p_30 = ((**l_1155) , p_30);
                        (***g_1085) = (((*g_216) = ((*g_63) || ((safe_mod_func_uint16_t_u_u(p_29, p_31)) < p_31))) , (***g_1085));
                        if ((**l_1312))
                            continue;
                        (**l_1312) ^= (*l_1290);
                    }
                    for (g_163 = 0; (g_163 <= 2); g_163 += 1)
                    {
                        union U0 **l_1335[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int l_1338 = 9L;
                        unsigned char ***l_1341 = &g_849;
                        int i;
                        (*l_1290) ^= (0x06L != (safe_mul_func_uint16_t_u_u(p_28, (0xA966BAEFL != p_31))));
                        g_856 = &g_110;
                        g_1343 ^= ((((l_1308 <= ((safe_mod_func_int16_t_s_s(l_1338, ((~((*g_850) = ((safe_sub_func_int16_t_s_s(((void*)0 == l_1341), p_31)) && ((((((**g_793) | (*g_63)) != 1L) , l_1342) != &g_1086[3]) <= 0x27FD8CD3L)))) ^ l_1338))) > l_1330)) , l_1308) , 0xF906L) < 0x7578L);
                    }
                }
            }



            for (g_83 = 1; (g_83 > (-4)); g_83 = safe_sub_func_uint8_t_u_u(g_83, 1))
            {
                return l_1127[3];


                            }
        }
        else
        {
            union U2 *l_1347 = &g_103;
            int *l_1353 = &g_9;
            union U0 l_1363 = {0L};
            (*p_30) = (**l_1312);
            for (l_1116 = 0; (l_1116 <= 2); l_1116 += 1)
            {
                union U0 l_1346[3] = {{-7L}, {-7L}, {-7L}};
                int *l_1348 = &l_1127[3].f0;
                int i;
                for (l_1129 = 0; (l_1129 <= 9); l_1129 += 1)
                {
                    return l_1346[1];

                                    }
                (***l_1342) = l_1347;
                for (g_911 = 0; (g_911 <= 2); g_911 += 1)
                {
                    int l_1356 = 0x23BFC5D0L;
                    for (g_814 = 0; (g_814 <= 2); g_814 += 1)
                    {
                        short l_1357 = (-1L);
                        union U2 l_1362 = {1L};
                        int i;
                        (*p_30) = ((*l_1348) = (((**g_793) ^ (safe_add_func_uint8_t_u_u((*g_850), (g_307.f0 = (safe_mul_func_int16_t_s_s((&g_1228[6] == ((((p_28 | func_32((*l_1348), ((*l_1312) = l_1353), l_1353, ((((safe_mul_func_uint8_t_u_u((*g_850), l_1356)) < (-1L)) == l_1356) ^ p_31))) , (*l_1353)) | 0L) , &g_1228[9])), 65535UL)))))) & (-6L)));

                        if (l_1357)
                            break;
                        (*p_30) &= ((safe_mod_func_uint8_t_u_u(((g_53[g_911] , (**l_1242)) , ((**g_849) |= p_31)), (g_84[0] = (safe_add_func_int16_t_s_s((*g_63), 0UL))))) <= ((l_1362 , (*g_63)) , (6L | (0x7884L || l_1357))));
                        return l_1363;

                                            }
                    for (l_1235 = 2; (l_1235 >= 0); l_1235 -= 1)
                    {
                        if ((**l_1312))
                            break;
                    }
                }
            }


        }




    }




    ;


    return l_1127[3];


    }







static unsigned short func_32(unsigned p_33, int * p_34, int * p_35, unsigned p_36)
{
    int l_1094 = 0x146EFB65L;
    union U2 l_1097 = {3L};
    int l_1098 = 0L;
    int l_1099 = 0x80F7CC9AL;
    l_1099 &= ((***g_300) == ((*p_34) != (l_1094 == ((safe_lshift_func_int16_t_s_u((l_1097 , (+(**g_793))), (!(((*g_216) , l_1097) , (l_1098 == (*p_35)))))) ^ p_36))));
    return l_1097.f0;
}







static unsigned func_37(unsigned char p_38, short p_39, int * p_40, int * p_41)
{
    char l_514 = 0x7DL;
    unsigned l_527 = 1UL;
    int l_530 = 0xE997629BL;
    short **l_559 = (void*)0;
    union U1 **l_565 = (void*)0;
    unsigned short l_581 = 65535UL;
    int *l_582[6];
    unsigned l_587 = 0x6B6E7694L;
    int ***l_604 = &g_120;
    unsigned l_639 = 0x5970D6D2L;
    char **l_647[7] = {&g_216, (void*)0, &g_216, (void*)0, &g_216, (void*)0, &g_216};
    unsigned char l_664 = 0x9AL;
    union U2 **l_672[10] = {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102};
    unsigned l_675[9][9] = {{1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}, {1UL, 0xB0360453L, 0xDDA81103L, 0x4A2E3760L, 4294967295UL, 0x8E9A5AF0L, 4294967295UL, 0x4A2E3760L, 0xDDA81103L}};
    unsigned ***l_704 = &g_301;
    unsigned l_748 = 4294967295UL;
    union U1 *l_768 = &g_307;
    unsigned char *l_845 = &g_84[0];
    unsigned char **l_844 = &l_845;
    unsigned short l_857 = 4UL;
    short ***l_903 = (void*)0;
    unsigned short l_957 = 0x020AL;
    unsigned short *l_962 = &l_581;
    union U0 **l_966 = (void*)0;
    int *l_1023 = &g_50;
    short ***l_1027 = &l_559;
    unsigned l_1038 = 0x2605F783L;
    int l_1054 = 0x8C2375F5L;
    unsigned l_1064 = 0xF0DC4647L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_582[i] = &g_83;
    for (g_71 = 10; (g_71 > 4); g_71--)
    {
        int l_515 = 0x737CB8A4L;
        union U2 **l_517 = (void*)0;
        union U1 **l_567 = (void*)0;
        char l_575 = 0x3AL;
        if (g_511)
            break;
        for (g_50 = 0; (g_50 <= (-26)); g_50 = safe_sub_func_int32_t_s_s(g_50, 1))
        {
            union U2 **l_516 = &g_102;
            int l_526 = 0x419C1FF5L;
            int l_528 = 0x205E78FEL;
            int *l_529[3];
            union U1 l_535 = {250UL};
            int i;
            for (i = 0; i < 3; i++)
                l_529[i] = (void*)0;
            l_515 = l_514;
            l_530 = ((((l_516 = &g_102) != l_517) | (safe_mul_func_uint8_t_u_u((p_38 = (safe_mul_func_uint16_t_u_u((**g_282), (safe_add_func_uint16_t_u_u(((l_526 = (safe_lshift_func_int8_t_s_u(((*g_216) &= l_514), 0))) != ((((l_527 & (-1L)) , l_528) < (*p_41)) >= (((l_528 != l_527) | 0x6D18L) == l_528))), 65535UL))))), l_528))) < p_39);
            for (l_527 = 9; (l_527 < 10); l_527++)
            {
                unsigned short l_540 = 0x346AL;
                int l_561[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_561[i] = 0x6716D169L;
                (*g_120) = &l_530;
                if (((safe_sub_func_uint8_t_u_u(g_162, (*g_216))) > (l_535 , (p_38 , (safe_sub_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(l_515, p_38)) | (0x7E973C6CL > l_540)) == (&p_40 == (*g_119))), l_530))))))
                {
                    unsigned char *l_545 = (void*)0;
                    unsigned char *l_546 = (void*)0;
                    unsigned char *l_547[2];
                    int l_550[3][6] = {{(-4L), 0x06432531L, (-10L), (-10L), 0x06432531L, (-4L)}, {(-4L), 0x06432531L, (-10L), (-10L), 0x06432531L, (-4L)}, {(-4L), 0x06432531L, (-10L), (-10L), 0x06432531L, (-4L)}};
                    union U1 l_551 = {0x30L};
                    char *l_554[3];
                    int l_555[8][3][3] = {{{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}, {{6L, 1L, 6L}, {6L, 1L, 6L}, {6L, 1L, 6L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_547[i] = &g_53[5].f0;
                    for (i = 0; i < 3; i++)
                        l_554[i] = (void*)0;
                    l_555[2][1][2] &= (safe_mul_func_uint8_t_u_u((p_38 = (safe_mul_func_int8_t_s_s((*g_216), g_103.f0))), (((safe_mod_func_uint8_t_u_u(1UL, p_39)) | l_550[0][0]) , (l_551 , (safe_mod_func_int8_t_s_s((g_455 = (0xA8L < g_64)), p_39))))));
                }
                else
                {
                    unsigned l_556 = 2UL;
                    unsigned l_560 = 0xA7447785L;
                    l_556 &= l_515;
                    l_560 |= (0xA9L < (safe_sub_func_int16_t_s_s((p_39 , ((void*)0 == l_559)), 0x653AL)));
                    l_561[1] |= (l_527 , (*p_40));
                }
                if ((*p_41))
                    break;
            }
        }
        for (g_188 = (-19); (g_188 <= 24); g_188 = safe_add_func_uint32_t_u_u(g_188, 5))
        {
            int *l_564 = &g_83;
            union U1 ***l_566[6] = {&l_565, &l_565, &l_565, &l_565, &l_565, &l_565};
            int l_572 = 0xFC4A867AL;
            int i;
            (*l_564) ^= (*p_40);
            l_567 = l_565;
            l_575 = (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(l_572, (safe_rshift_func_uint16_t_u_u((**g_282), 6)))), 7));
            return l_527;


        }
        for (g_64 = 0; (g_64 <= (-4)); --g_64)
        {
            for (g_50 = (-28); (g_50 != 12); ++g_50)
            {
                int *l_580 = &g_163;
                (*l_580) = l_575;
            }
        }
    }


    if ((l_581 >= (((*p_41) | ((*p_40) <= (l_587 = (safe_mul_func_int8_t_s_s((((*g_216) > (p_41 != p_40)) || (p_39 = (safe_add_func_uint16_t_u_u(p_39, 0x49D0L)))), 255UL))))) | (***g_300))))
    {
        union U0 l_588 = {-1L};
        unsigned **l_599 = &g_302;
        union U1 *l_606 = &g_53[5];
        int l_628[9];
        unsigned short l_640 = 65530UL;
        int l_665 = (-6L);
        int ***l_688 = (void*)0;
        union U2 l_733 = {0L};
        unsigned l_747 = 4294967289UL;
        int *l_783 = (void*)0;
        int l_798 = (-1L);
        unsigned char *l_821 = &g_84[0];
        union U2 ***l_895 = &g_730[2];
        union U1 ***l_930 = &g_882[0][1];
        unsigned short **l_947 = &g_283;
        unsigned l_951[1][5] = {{0xEF0CD50BL, 1UL, 0xEF0CD50BL, 1UL, 0xEF0CD50BL}};
        int l_975 = 0x26479AE3L;
        union U2 *l_994[1][9] = {{&g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}};
        int i, j;
        for (i = 0; i < 9; i++)
            l_628[i] = 0x7624D3E9L;
        for (g_87 = 5; (g_87 >= 1); g_87 -= 1)
        {
            unsigned l_594 = 3UL;
            short *l_595 = &g_59;
            unsigned char l_596[3];
            int l_610 = (-8L);
            char *l_648 = &g_217;
            int l_659 = 0x6753ECFAL;
            char l_731 = 0xA5L;
            int i;
            for (i = 0; i < 3; i++)
                l_596[i] = 0x02L;
            if ((((*l_595) &= ((*g_63) ^= (l_588 , ((p_39 >= ((((!l_588.f0) < 65531UL) == (((safe_rshift_func_int8_t_s_s((*g_216), 2)) == (~g_591)) < (((safe_rshift_func_int8_t_s_u(0L, 3)) > ((l_594 == g_231) & 0xBBL)) > (*g_216)))) ^ (***g_300))) & (-1L))))) | p_38))
            {
                unsigned l_597 = 0xD1D4121BL;
                l_597 &= ((**g_282) <= l_596[1]);
            }
            else
            {
                unsigned l_601 = 0x581A599BL;
                unsigned char l_608 = 255UL;
                int l_609 = 6L;
                for (g_455 = 0; (g_455 <= 5); g_455 += 1)
                {
                    int l_598[8][3] = {{0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}, {0x9ABA5912L, 1L, (-4L)}};
                    unsigned **l_600 = &g_302;
                    int i, j;
                    if ((*p_41))
                    {
                        l_598[3][1] |= l_588.f0;
                        l_601 &= ((p_38 , l_599) != l_600);
                    }
                    else
                    {
                        unsigned l_605 = 4294967287UL;
                        union U1 **l_607 = &g_98;
                        l_605 = ((*g_63) , (safe_lshift_func_uint8_t_u_u((g_455 <= (l_604 != (l_601 , l_604))), 5)));
                        (*l_607) = l_606;
                        if (l_601)
                            break;
                    }
                    for (g_591 = 0; (g_591 <= 5); g_591 += 1)
                    {
                        l_609 = l_608;
                    }
                }
            }
            l_610 = (*p_40);
            l_588.f0 |= (*p_41);
            for (p_38 = 0; (p_38 <= 7); p_38 += 1)
            {
                int l_617[1];
                union U2 l_620 = {0x65B43DF3L};
                unsigned char *l_627 = &g_307.f0;
                int l_652 = 0x9AD82F7AL;
                char l_678 = 0xD0L;
                char l_690 = 0xAEL;
                union U0 l_696 = {0xCD924608L};
                short *l_723[3][6][7] = {{{(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}}, {{(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}}, {{(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}, {(void*)0, &g_64, &g_87, (void*)0, &g_64, &g_64, &g_64}}};
                union U2 **l_728 = &g_102;
                union U1 *l_740 = &g_53[0];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_617[i] = 0xAA3AF160L;
                l_628[0] = ((((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(0x78L, (safe_mod_func_uint8_t_u_u((l_617[0] ^ ((*g_216) = p_38)), (((safe_sub_func_uint16_t_u_u(((l_620 , 0xB52B5F1AL) & (safe_sub_func_uint16_t_u_u((((*g_63) = ((*l_595) = ((safe_rshift_func_int8_t_s_s((((*g_102) , (p_38 > ((l_588.f0 ^= ((*g_302) = ((((safe_sub_func_int8_t_s_s(l_620.f0, (((*l_627) = ((**g_301) & (*p_41))) != 1L))) , 0x73832D81L) & (*p_40)) || 0x9F82D43BL))) ^ 0xB88482BBL))) , 0L), l_594)) == p_39))) , p_38), g_162))), l_610)) | l_628[1]) , g_64))))), 4UL)) >= 251UL) & p_38) || 65535UL) != 0xD5L) == l_628[1]);
                for (g_83 = 0; (g_83 <= 7); g_83 += 1)
                {
                    unsigned *l_641 = &l_594;
                    union U1 l_646 = {0UL};
                    int l_651 = 0L;
                    if ((safe_unary_minus_func_uint16_t_u((((*l_641) = ((p_38 ^ (*g_216)) > (((safe_mod_func_uint8_t_u_u(((*g_216) <= (safe_unary_minus_func_int8_t_s(p_39))), ((safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(((**g_282) & l_596[1]), (((((((**g_300) = l_582[g_87]) == &g_188) ^ (safe_add_func_uint16_t_u_u((*g_283), 0x252FL))) & 1L) >= p_39) , l_639))) && p_38), p_38)) , 0x54L))) != l_640) , (*p_40)))) <= p_38))))
                    {
                        int l_649 = 0x41AE5EADL;
                        l_649 = ((p_39 || ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((((l_646 , (l_647[4] != (l_588 , &g_216))) < 0x4D961C2AL) && (+p_39)) , (l_610 < (l_648 == l_648))), (*p_41))), (***g_300))) && 0x2D851FC0L)) , l_646.f0);
                    }
                    else
                    {
                        char l_650 = 6L;
                        unsigned char **l_653 = &l_627;
                        int l_654 = 0xE7779221L;
                        unsigned short *****l_662 = &g_660;
                        int i;
                        l_652 = (g_84[0] , (+(l_651 = (l_628[1] , ((&l_595 != &g_63) , l_650)))));
                        l_654 ^= ((p_38 , ((l_646 , (7UL > l_651)) || (&g_84[0] != ((*l_653) = &l_596[1])))) >= p_38);
                        l_665 = ((safe_lshift_func_uint16_t_u_s(0x9D18L, 0)) >= (l_654 &= ((g_53[5].f0 && ((((*l_648) ^= (p_39 | ((l_628[1] = (safe_add_func_uint32_t_u_u(l_659, (0xB1D7L < ((((*l_662) = g_660) == (g_663 = &g_661[3][0])) & l_664))))) == (1L != l_588.f0)))) && 0xD4L) & 0x3C22L)) | 0UL)));
                        l_652 = 0xAF21BD40L;
                    }

                    ;
                    (*g_120) = ((p_39 < (((safe_mul_func_uint16_t_u_u(p_39, (((l_665 ^ (((**g_282) <= l_665) == (safe_add_func_int32_t_s_s(l_646.f0, (l_672[1] == &g_102))))) > (((((safe_mul_func_uint16_t_u_u((****g_660), (*g_63))) | 0xCBL) != l_651) >= (-1L)) | g_188)) ^ (*g_216)))) & 255UL) == l_675[6][1])) , p_40);
                }

                ;
                if ((p_38 , ((*g_98) , (*p_40))))
                {
                    for (g_231 = 26; (g_231 <= 24); g_231 = safe_sub_func_int8_t_s_s(g_231, 9))
                    {
                        l_610 |= (*p_40);
                        (**g_119) = p_41;
                        l_678 = (l_640 <= (**g_301));
                    }
                }
                else
                {
                    unsigned char *l_687 = &g_307.f0;
                    int l_689 = 0xF05F0478L;
                    unsigned l_701 = 0x0DD8B501L;
                    l_610 = (safe_sub_func_uint32_t_u_u(((p_39 , g_64) , (l_596[1] == (&g_59 != ((*g_98) , ((safe_mul_func_int8_t_s_s((0x92DE98E3L ^ ((((((safe_add_func_uint16_t_u_u(65535UL, ((((l_665 = (((l_659 || ((*l_687) = ((l_628[6] = g_188) , l_665))) >= 3L) < 0xDC04EB85L)) ^ p_39) ^ 0UL) <= (*p_40)))) >= p_38) , (void*)0) == l_688) || 0x3BED84AFL) && (**g_301))), 0x21L)) , (void*)0))))), 0xF81B0409L));
                    if ((*p_41))
                        continue;
                    l_689 = (*p_41);
                    if (l_690)
                    {
                        unsigned short l_691 = 0xA1CBL;
                        unsigned short *l_699[6] = {&l_691, (void*)0, &l_691, (void*)0, &l_691, (void*)0};
                        int l_700 = 0xBDF03352L;
                        int i;
                        l_691 |= (*p_40);
                        if (l_691)
                            continue;
                        l_610 &= (l_689 >= (safe_lshift_func_uint8_t_u_s(((p_39 , ((*g_216) = p_38)) || ((((((**g_282) , (safe_lshift_func_int16_t_s_s((l_696 , (((****g_660) = 0x6AC8L) ^ (l_594 < g_455))), ((*g_63) = (safe_add_func_uint16_t_u_u((l_700 = l_659), (*g_63))))))) ^ (*g_302)) == l_701) != 1L) != l_691)), 5)));
                        if ((*p_41))
                            continue;
                    }
                    else
                    {
                        return g_162;


                    }
                }
                if ((p_39 | ((safe_add_func_uint16_t_u_u((&l_599 == l_704), p_38)) && (*g_63))))
                {
                    unsigned l_720[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_720[i] = 4294967295UL;
                    for (l_530 = 0; (l_530 < 21); l_530 = safe_add_func_uint16_t_u_u(l_530, 1))
                    {
                        unsigned l_707[10] = {1UL, 0x3BD0E6F7L, 4294967295UL, 4294967295UL, 0x3BD0E6F7L, 1UL, 0x3BD0E6F7L, 4294967295UL, 4294967295UL, 0x3BD0E6F7L};
                        int i;
                        l_707[0] |= (*p_41);
                    }
                    for (l_620.f0 = 27; (l_620.f0 == 9); l_620.f0 = safe_sub_func_int16_t_s_s(l_620.f0, 4))
                    {
                        int l_710 = (-3L);
                        union U2 ***l_729[5] = {(void*)0, &l_728, (void*)0, &l_728, (void*)0};
                        int i;
                        l_710 ^= 0x4765E7BEL;
                        if ((*p_40))
                            continue;
                        l_610 ^= (safe_add_func_int8_t_s_s((((safe_unary_minus_func_int8_t_s(((l_696.f0 = (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((g_162 == (l_594 >= ((*g_63) = (l_720[1] | (safe_add_func_uint32_t_u_u((l_723[1][0][5] == ((((((((+(safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((g_730[0] = l_728) == (void*)0), 0xF5A6L)), 6))) , ((l_710 & ((*l_595) = 0x960EL)) == (*g_216))) && g_307.f0) & (***g_300)) , 0xF8871AD6L) ^ (*p_40)) == (***g_300)) , &p_39)), p_38)))))) != (*p_41)), l_710)), 0x2FBA2F94L)), p_39))) < (**g_301)))) & (*g_216)) , (*g_216)), l_720[1]));
                    }
                    return g_231;


                }
                else
                {
                    int l_732 = (-10L);
                    union U0 l_736 = {0x703E1B05L};
                    union U1 l_737[7] = {{255UL}, {0x5EL}, {255UL}, {0x5EL}, {255UL}, {0x5EL}, {255UL}};
                    int i;
                    if (l_731)
                    {
                        unsigned l_738 = 0x368963F3L;
                        l_732 = (*p_40);
                        l_732 &= (l_733 , (safe_mul_func_int8_t_s_s(((p_39 != (((4294967289UL != ((**g_301) &= p_38)) | 0xB593L) | p_39)) <= ((((*g_63) |= ((l_736 , p_38) != ((****g_663) = (l_737[2] , 0x181FL)))) & l_731) || p_38)), l_738)));
                    }
                    else
                    {
                        unsigned l_739 = 0x08A6B480L;
                        (*g_120) = (void*)0;
                        l_739 = (-6L);
                        if (l_596[0])
                            break;
                    }
                    l_696.f0 = (p_39 , ((void*)0 == l_740));
                    for (l_587 = (-21); (l_587 == 28); l_587 = safe_add_func_uint8_t_u_u(l_587, 9))
                    {
                        (*g_120) = p_40;
                        if (l_659)
                            break;
                        l_652 &= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x51E4L, p_38)), (l_747 != p_38)));
                    }
                }
            }
        }

        ;
        if (l_748)
        {
            unsigned short *l_763[9][8];
            int l_765 = 0x4EEDD81EL;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 8; j++)
                    l_763[i][j] = &l_640;
            }
            for (g_231 = 0; (g_231 <= 3); g_231 += 1)
            {
                unsigned char *l_753 = &g_84[0];
                union U2 ***l_754 = &g_730[2];
                int l_755 = (-4L);
                unsigned short *l_764[10] = {&l_581, &l_581, &g_162, &l_581, &l_581, &g_162, &l_581, &l_581, &g_162, &l_581};
                int i;
                l_665 = (*p_41);
                l_665 |= (((((*l_753) = (g_307.f0 = (safe_sub_func_uint32_t_u_u((((***g_300) = ((-1L) && p_39)) && (**g_301)), (safe_sub_func_uint32_t_u_u((((***g_660) = &l_581) != (void*)0), p_38)))))) != (((*p_41) ^ (p_39 | (((*l_754) = l_672[(g_231 + 6)]) != (void*)0))) < p_39)) >= (*p_41)) > l_755);

                ;
                l_628[1] = (*p_41);
                for (g_489 = 0; (g_489 <= 3); g_489 += 1)
                {
                    unsigned **l_756 = &g_302;
                    int **l_759 = &l_582[4];
                    int i;
                    (*g_300) = l_756;
                    l_530 &= (l_755 &= (((l_733 , ((*l_753) ^= ((safe_sub_func_uint16_t_u_u((((*l_759) = &l_530) == (void*)0), (safe_unary_minus_func_int8_t_s((p_39 < p_39))))) == (safe_sub_func_uint32_t_u_u(((**l_599) = 0x34F2F4AAL), (l_763[2][1] == (((l_733 = (*g_102)) , (***l_754)) , l_764[5]))))))) ^ l_765) | l_765));
                    for (l_530 = 0; (l_530 <= 1); l_530 += 1)
                    {
                        union U1 **l_766 = &l_606;
                        union U1 **l_767[6] = {&g_98, &g_98, &g_98, &g_98, &g_98, &g_98};
                        int i;
                        l_768 = ((*l_766) = l_606);

                        ;
                    }
                }
            }

            ;

            ;
            for (l_665 = 0; (l_665 >= (-14)); l_665 = safe_sub_func_uint32_t_u_u(l_665, 4))
            {
                unsigned l_771 = 0x66F49C49L;
                l_771 = (*p_41);
                if ((*p_40))
                    break;
                l_628[1] &= (*p_40);
            }
            for (l_587 = (-20); (l_587 != 30); l_587 = safe_add_func_uint32_t_u_u(l_587, 6))
            {
                int *l_782 = &g_83;
                l_765 ^= (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((*g_63) = (safe_rshift_func_int16_t_s_s(1L, 0))), 12)), (9UL >= p_38)));
                for (l_664 = 0; (l_664 == 3); l_664 = safe_add_func_uint8_t_u_u(l_664, 5))
                {
                    unsigned l_790 = 4294967291UL;
                    short **l_791 = &g_63;
                    short ***l_792[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_792[i][j] = (void*)0;
                    }
                    l_783 = l_782;

                    ;
                    for (g_455 = 0; (g_455 >= (-22)); g_455 = safe_sub_func_int16_t_s_s(g_455, 5))
                    {
                        union U1 *l_786 = &g_53[5];
                        int **l_787 = &l_783;
                        g_98 = (l_786 = &g_53[4]);
                        (*l_782) = ((*l_782) || (*g_216));
                        (*l_787) = ((**g_119) = p_41);

                        ;
                        return g_591;



                    }
                    (*g_120) = p_41;
                    (*l_783) = ((p_38 && g_64) | ((safe_rshift_func_uint8_t_u_s(l_765, 6)) , (l_790 ^ (&g_63 == (g_793 = l_791)))));
                }

                ;
                (*l_782) = l_765;
                return g_455;



            }
        }
        else
        {
            unsigned char l_799 = 3UL;
            union U2 *l_801 = &l_733;
            int l_815 = 0L;
            int l_837[4][6][9] = {{{0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}}, {{0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}}, {{0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}}, {{0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}, {0x2EE226E2L, 0xF32032DFL, (-9L), 0xCEB9223FL, 1L, 0L, 2L, 1L, 0x92384845L}}};
            union U1 l_879 = {0x0AL};
            int i, j, k;
            (**g_119) = &l_628[0];


            for (l_665 = 0; (l_665 >= 11); ++l_665)
            {
                short ***l_796 = &l_559;
                union U2 l_797 = {-9L};
                (*l_796) = &g_63;

                ;
                if ((*p_40))
                    break;
                l_799 |= (((p_38 >= (l_797 , (-8L))) <= (+(l_798 < 0x0193B9D7L))) < (p_38 < (p_38 & (((*g_216) = (*g_216)) >= g_64))));
            }

            ;
            for (l_798 = 0; (l_798 <= 8); l_798 += 1)
            {
                union U1 l_808[4][1] = {{{1UL}}, {{1UL}}, {{1UL}}, {{1UL}}};
                unsigned char **l_848 = &l_821;
                union U0 *l_853 = &g_110;
                int i, j;
                if (l_628[l_798])
                    break;
                for (g_71 = 1; (g_71 <= 8); g_71 += 1)
                {
                    union U2 *l_800 = &g_103;
                    int l_827 = (-1L);
                    int ****l_836 = &l_688;
                    for (l_664 = 1; (l_664 <= 8); l_664 += 1)
                    {
                        unsigned l_813[2][8] = {{0x77E5E2C0L, 0xD072E0F5L, 0UL, 0UL, 0xD072E0F5L, 0x77E5E2C0L, 0xD072E0F5L, 0UL}, {0x77E5E2C0L, 0xD072E0F5L, 0UL, 0UL, 0xD072E0F5L, 0x77E5E2C0L, 0xD072E0F5L, 0UL}};
                        int l_816 = 1L;
                        int i, j;
                        l_628[l_664] |= (l_800 == l_801);
                        l_816 &= ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0xE0L, 5)), 1)), l_628[l_798])) || ((((**g_793) <= (l_808[3][0] , (l_815 &= ((safe_sub_func_uint8_t_u_u(p_39, ((safe_sub_func_int32_t_s_s((0x13EBD104L || p_38), (l_813[0][1] |= 5UL))) , ((((*p_41) >= g_814) , (*g_216)) , p_38)))) , p_39)))) , &g_119) == &g_119));
                    }
                    l_827 = (g_83 < (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((l_821 == l_821) != p_39), (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(p_39)), ((l_665 = (((safe_mul_func_int8_t_s_s(p_39, (*g_216))) < p_39) != (65528UL || p_38))) || (*p_41)))))), 1L)));
                    if (((safe_mod_func_uint32_t_u_u(l_815, (((safe_lshift_func_uint8_t_u_u((l_783 != &g_489), (((safe_sub_func_int16_t_s_s(((**g_793) &= (safe_mul_func_uint8_t_u_u(((247UL >= (p_39 , (l_837[1][1][3] &= ((void*)0 == l_836)))) && l_628[l_798]), ((void*)0 != &l_768)))), l_799)) <= l_808[3][0].f0) == p_39))) , p_38) , (**g_301)))) == g_217))
                    {
                        unsigned char ***l_846 = (void*)0;
                        unsigned char ***l_847[2][10][9] = {{{&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}}, {{&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}, {&l_844, &l_844, &l_844, &l_844, (void*)0, &l_844, &l_844, &l_844, &l_844}}};
                        int i, j, k;
                        l_588.f0 &= ((safe_lshift_func_uint8_t_u_s(l_808[3][0].f0, 1)) ^ (((+(safe_mul_func_uint16_t_u_u(0xC781L, (safe_mul_func_uint16_t_u_u(p_39, (*g_63)))))) == 0UL) , (((l_848 = l_844) != g_849) != ((****g_660) = p_39))));

                        ;
                    }
                    else
                    {
                        union U0 **l_854 = (void*)0;
                        union U0 **l_855 = &g_505;
                        g_856 = ((*l_855) = ((safe_rshift_func_uint8_t_u_u(0x5FL, 7)) , l_853));

                        ;
                        l_837[1][1][3] = 0xEDE341B5L;
                        (**g_119) = (void*)0;
                        l_628[l_798] ^= 0x6F4DB532L;
                    }
                    for (l_581 = 0; (l_581 <= 1); l_581 += 1)
                    {
                        (**g_119) = p_40;
                        return l_857;


                    }
                }

                ;
                if ((*p_40))
                    continue;
                for (g_59 = 0; (g_59 <= 1); g_59 += 1)
                {
                    if (l_665)
                        break;
                    for (g_110.f0 = 0; (g_110.f0 <= 1); g_110.f0 += 1)
                    {
                        unsigned l_872 = 1UL;
                        short *l_875[2];
                        int l_876 = 0x1E71FB2DL;
                        union U1 ***l_880 = &l_565;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_875[i] = &g_87;
                        l_876 = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((~p_38), (safe_lshift_func_int8_t_s_s((*g_216), 3)))), ((**g_282) ^ (p_39 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_872 ^= ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((*g_63) = (p_38 < (**g_282))), p_38)), 5)) > p_38)), (*p_40))), (safe_rshift_func_uint8_t_u_u((*g_850), l_799)))) >= 0xD08BL)))));
                        (*g_120) = p_40;
                        l_628[l_798] = (safe_mod_func_int8_t_s_s(((*g_63) != ((l_879 , l_880) == g_881)), p_39));
                    }
                    if ((*p_40))
                        continue;
                    for (g_103.f0 = 1; (g_103.f0 >= 0); g_103.f0 -= 1)
                    {
                        unsigned short l_889 = 0x9049L;
                        union U2 ***l_894 = &l_672[5];
                        union U2 ****l_896 = &l_895;
                        unsigned char *l_897 = (void*)0;
                        unsigned char *l_898 = &l_808[3][0].f0;
                        int l_899 = 0x86C383F2L;
                        int l_900 = 0xE257E39CL;
                        l_900 = ((safe_add_func_uint32_t_u_u(((((*g_850) >= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(l_889, (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_39, ((((l_894 != ((*l_896) = l_895)) == (l_899 &= ((**g_849) || ((*l_898) = ((**l_848) = l_889))))) == (3L || p_39)) <= (****g_660)))), 0xA61973A5L)))), (**g_849)))) | 251UL) || (-9L)), 2UL)) , 7L);
                        return g_89;


                    }
                }
            }
        }


        ;
        ;

        ;
        l_628[5] ^= (safe_mul_func_uint16_t_u_u((((((void*)0 == l_903) <= ((**l_599) |= (safe_lshift_func_uint16_t_u_s((((*g_850) <= ((p_39 , ((safe_add_func_uint8_t_u_u((**g_849), p_38)) & (p_39 & ((g_730[0] = &g_102) == &g_102)))) >= (*g_63))) != (*p_40)), 15)))) , &g_882[0][1]) == (void*)0), 0x3CD5L));
        for (l_527 = 0; (l_527 >= 8); ++l_527)
        {
            unsigned short l_910 = 3UL;
            union U1 *l_917 = (void*)0;
            union U2 l_919 = {0xD811E85DL};
            int l_928 = 0x8E0A4F71L;
            int l_931 = 0xC6AE8453L;
            if (l_910)
            {
                unsigned l_934 = 1UL;
                int l_938 = 1L;
                union U1 l_940 = {0x66L};
                union U0 l_950 = {0xC98AEA13L};
                g_911 = 0xA1844784L;
                for (g_489 = 2; (g_489 <= 7); g_489 += 1)
                {
                    unsigned char l_912 = 0xFFL;
                    return l_912;



                }
                for (l_733.f0 = 0; (l_733.f0 < (-17)); l_733.f0 = safe_sub_func_uint32_t_u_u(l_733.f0, 3))
                {
                    union U2 *l_918 = &g_103;
                    int *l_922 = &l_588.f0;
                    char **l_923 = &g_216;
                    int *l_943 = (void*)0;
                    if ((*p_40))
                    {
                        union U1 *l_915[7][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                        union U1 **l_916 = &l_768;
                        int i, j;
                        (*l_916) = l_915[6][0];

                        ;
                        (*l_916) = ((~(-6L)) , l_917);
                        (**l_895) = l_918;
                    }
                    else
                    {
                        unsigned *l_929[2][8][4] = {{{&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}}, {{&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}, {&l_639, &g_911, &l_639, &l_639}}};
                        int i, j, k;
                        (**g_119) = ((g_84[0] , l_919) , p_41);
                        (**l_604) = p_41;
                        l_931 = (safe_add_func_uint8_t_u_u((*l_922), ((&g_216 != l_923) ^ (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((**g_301) ^= (((*g_216) = (*g_216)) && p_38)) == ((g_307.f1 = (l_928 |= p_38)) != (l_930 != (void*)0))), g_231)), p_39)))));

                    }
                    for (l_581 = 0; (l_581 < 47); l_581 = safe_add_func_int16_t_s_s(l_581, 5))
                    {
                        (*l_922) = (*p_41);
                        return l_934;



                    }
                    (**l_604) = ((*l_918) , l_922);
                    if ((p_39 && (safe_sub_func_uint8_t_u_u((**g_849), 0xF3L))))
                    {
                        int l_937 = 0x274D81A0L;
                        int **l_939 = &l_582[1];
                        if (l_928)
                            break;
                        (*l_939) = ((*g_120) = ((l_937 == (0x9AL < (l_938 > (**g_301)))) , p_40));
                        l_928 = ((*l_599) == (l_940 , l_922));
                        (*l_939) = &l_938;
                    }
                    else
                    {
                        unsigned short **l_946 = &g_283;
                        (*l_922) |= (safe_lshift_func_int8_t_s_s(((*p_41) || l_919.f0), ((safe_lshift_func_uint8_t_u_s((l_946 == l_947), (safe_sub_func_uint16_t_u_u((l_950 , ((~(*p_41)) , (((0x92L & p_38) != 0x0DL) , l_910))), (**g_282))))) | 1L)));
                        l_928 ^= (l_950.f0 || l_951[0][4]);
                        return p_38;



                    }
                }


            }
            else
            {
                l_931 = (!(!0x7496DD78L));
            }
            for (l_798 = 28; (l_798 < (-5)); l_798 = safe_sub_func_int16_t_s_s(l_798, 8))
            {
                union U2 *l_956 = &l_919;
                unsigned short *l_961 = &l_640;
                int l_964 = 0xD16D8FC2L;
                unsigned l_974 = 0x00CE8557L;
                short l_992 = 0x78F5L;
                union U2 *l_995 = &g_103;
                union U1 *l_1017[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1017[i] = &g_307;
                for (g_59 = (-25); (g_59 == (-29)); g_59 = safe_sub_func_uint32_t_u_u(g_59, 8))
                {
                    short l_958 = 0xBD48L;
                    union U1 l_980 = {1UL};
                    int l_987 = 1L;
                    l_956 = (**l_895);

                    ;
                    l_958 |= l_957;
                    for (g_911 = 0; (g_911 != 59); g_911++)
                    {
                        int l_963 = 7L;
                        l_931 = (((***g_660) = (***g_663)) == (l_962 = l_961));

                        ;
                        l_964 = l_963;
                        l_964 = 0x3AF1CD8CL;
                        if ((*p_41))
                            continue;
                    }
                    if ((*p_41))
                    {
                        union U1 l_965[2] = {{0UL}, {0UL}};
                        int l_967[7][2][7] = {{{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}, {{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}, {{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}, {{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}, {{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}, {{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}, {{0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}, {0xE505A89EL, (-6L), 0x1AE80172L, 0xFF2E2EE5L, 0x9E9E0830L, 3L, (-6L)}}};
                        union U0 **l_968 = &g_856;
                        int i, j, k;
                        l_967[0][1][6] = ((l_965[1] , l_966) != (void*)0);
                        (*l_968) = &g_110;
                        l_967[0][1][6] = (*p_40);
                    }
                    else
                    {
                        short l_971 = 0x817CL;
                        short l_983 = 0x8A1FL;
                        int l_984 = (-1L);
                        l_975 |= (((safe_lshift_func_uint8_t_u_u(l_971, ((safe_lshift_func_int16_t_s_u((**g_793), 0)) < (***g_300)))) || l_974) , (*p_41));
                        if ((*p_41))
                            break;
                        l_984 &= (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((p_38 | p_38), 7)) & (p_38 <= ((l_980 , ((**g_282) && (safe_add_func_uint32_t_u_u(0x822AEF60L, ((l_983 | l_980.f0) , (l_964 = ((*g_302) || (*p_40)))))))) != 0xCDL))), 6L));
                        l_987 ^= ((((*g_850) <= (safe_lshift_func_int8_t_s_u((*g_216), (p_38 | l_928)))) ^ l_928) && ((***g_300) = l_974));
                    }
                }

                ;
                for (l_639 = 0; (l_639 == 16); l_639 = safe_add_func_int8_t_s_s(l_639, 2))
                {
                    union U2 *l_993 = (void*)0;
                    char *l_998 = &g_814;
                    union U1 *l_1016 = &g_53[5];
                    g_505 = &g_110;

                    ;
                    l_964 = (*p_41);
                    for (l_957 = 6; (l_957 < 38); l_957++)
                    {
                        int l_1005 = 0xFAF96863L;
                        int l_1006 = 0x173FA7E6L;
                        unsigned short *****l_1013[5][6] = {{&g_663, &g_663, &g_663, &g_663, &g_663, &g_663}, {&g_663, &g_663, &g_663, &g_663, &g_663, &g_663}, {&g_663, &g_663, &g_663, &g_663, &g_663, &g_663}, {&g_663, &g_663, &g_663, &g_663, &g_663, &g_663}, {&g_663, &g_663, &g_663, &g_663, &g_663, &g_663}};
                        int i, j;
                        l_931 &= (*p_40);
                        l_1006 &= ((p_38 && (0xD2ACF874L <= (safe_add_func_int16_t_s_s(0L, (l_998 != l_821))))) && ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((**g_849), (((p_39 > (0x38L | (*g_216))) || p_39) ^ 0x42L))), l_1005)) != 0xFECAL), 7)) < 0x4ABFL));
                        l_964 = ((g_53[5].f0 , (safe_mul_func_int8_t_s_s(0x5AL, ((*l_998) = (safe_mod_func_uint32_t_u_u(p_38, (safe_mul_func_uint8_t_u_u(((*g_850) = p_39), p_39)))))))) , (l_1013[1][3] != (void*)0));
                    }
                    for (g_591 = 0; (g_591 != 5); g_591 = safe_add_func_int16_t_s_s(g_591, 4))
                    {
                        l_1017[2] = l_1016;
                    }
                }


                l_628[2] ^= 0xAB7CC43EL;
            }
            for (l_747 = 1; (l_747 <= 7); l_747 += 1)
            {
                for (l_640 = 0; (l_640 <= 9); l_640 += 1)
                {
                    return g_83;



                }
            }
            if (l_928)
                break;
        }



        ;
        ;
    }
    else
    {
        int *l_1020 = (void*)0;
        int l_1021 = (-8L);
        int l_1022 = (-1L);
        union U2 *l_1026 = &g_103;
        l_1022 ^= ((p_39 , (*g_302)) >= (l_1021 = ((&p_39 == (void*)0) <= 1UL)));
        (*g_120) = l_1023;
        for (l_530 = (-2); (l_530 != (-17)); l_530 = safe_sub_func_uint8_t_u_u(l_530, 2))
        {
            return g_64;


        }
        l_1026 = l_1026;
    }

    ;
    ;
    ;

    ;

    (*l_1027) = &g_63;

    ;
    for (g_87 = 0; (g_87 > (-24)); --g_87)
    {
        int l_1032 = 0x2871171FL;
        int **l_1045[1][5] = {{&g_435[0], &l_582[4], &g_435[0], &l_582[4], &g_435[0]}};
        int l_1047 = 0x35B26266L;
        union U2 l_1053 = {-3L};
        int i, j;
        for (g_511 = 0; (g_511 < 15); ++g_511)
        {
            unsigned l_1033 = 0xFB311EF6L;
            union U0 l_1044 = {1L};
            int l_1076 = (-1L);
            union U2 *l_1088 = &l_1053;
            short **l_1091 = (void*)0;
            (*l_1023) |= 4L;
            l_1032 = (*p_40);
            if (l_1033)
            {
                char l_1034 = (-4L);
                l_1034 = ((*l_1023) = l_1032);
                for (g_307.f0 = 0; (g_307.f0 <= 3); g_307.f0 += 1)
                {
                    unsigned **l_1035 = &g_302;
                    int l_1043 = 0x8F562FA7L;
                    int ***l_1046 = &l_1045[0][3];
                    int i;
                    (*l_1023) = (((*g_300) = l_1035) == (void*)0);
                    (*l_1023) = 0x81D7D452L;
                    l_1047 &= (+(safe_mul_func_int8_t_s_s((((*l_604) = &p_41) != ((*l_1046) = ((((0x07L && l_1038) , (p_39 ^ ((safe_mul_func_uint16_t_u_u(((((0UL || (((**l_559) = l_1032) & (safe_lshift_func_int16_t_s_s(l_1043, 5)))) & ((l_1044 , ((**g_282) ^= ((&g_730[g_307.f0] != (void*)0) && p_38))) , 9L)) >= 0UL) | 0xE8L), 0UL)) || l_1034))) | p_38) , l_1045[0][0]))), (*g_216))));

                    ;
                }

            }
            else
            {
                int l_1050 = 3L;
                int l_1067 = 0x3D9CCA80L;
                unsigned short *****l_1072[4][3][9] = {{{&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}}, {{&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}}, {{&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}}, {{&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}, {&g_663, (void*)0, &g_663, &g_660, (void*)0, &g_660, &g_663, (void*)0, &g_663}}};
                union U0 l_1079 = {0x017277B9L};
                int i, j, k;
                (*g_120) = p_40;
                for (l_1044.f0 = 0; (l_1044.f0 > 20); l_1044.f0 = safe_add_func_int8_t_s_s(l_1044.f0, 9))
                {
                    unsigned char l_1059 = 0xE3L;
                    unsigned short *****l_1071 = &g_663;
                    if (l_1050)
                    {
                        short *l_1068 = &g_59;
                        int l_1075 = 1L;
                        (*l_1023) &= (((safe_sub_func_uint8_t_u_u(((l_1053 , ((*p_41) ^ l_1054)) != (safe_add_func_int16_t_s_s((((*g_283) = (safe_mod_func_int16_t_s_s(((*l_1068) ^= (((**l_559) = l_1059) && (l_1067 &= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_1064, (l_1033 != ((*g_63) = (0xF8EBL ^ (****g_660)))))), (safe_rshift_func_uint16_t_u_u(65527UL, 7))))))), p_38))) , 0x5C7CL), (-1L)))), p_39)) && p_39) != 0xB269L);
                        (*l_1023) = (*p_40);
                        if (l_1059)
                            break;
                        l_1076 = (safe_sub_func_uint16_t_u_u(((p_39 > (p_39 >= (l_1071 == l_1072[2][2][1]))) && ((*g_216) = (safe_sub_func_int32_t_s_s(((*l_1023) = l_1067), l_1050)))), ((l_1050 > l_1075) == (*p_41))));
                    }
                    else
                    {
                        l_1067 = ((*l_1023) &= l_1059);
                    }
                    if ((*p_41))
                        continue;
                }
                for (l_639 = 0; (l_639 <= 2); l_639 += 1)
                {
                    unsigned short l_1084 = 0xBFD6L;
                    union U2 *l_1087 = &l_1053;
                    int *l_1089 = &g_9;
                    short **l_1090 = &g_63;
                    char *l_1092 = &l_514;
                    if ((*p_41))
                        break;
                    if ((*p_41))
                        continue;
                    for (l_957 = 0; (l_957 <= 9); l_957 += 1)
                    {
                        l_1088 = (((safe_rshift_func_int16_t_s_s((l_1079 , ((*g_63) != (g_59 = ((safe_add_func_int32_t_s_s(((*g_216) <= ((safe_rshift_func_uint8_t_u_s((**g_849), 1)) > (**g_849))), (l_1084 && ((void*)0 == g_1085)))) , p_39)))), 1)) >= l_1084) , l_1087);
                        return l_1044.f0;




                    }
                    for (g_455 = 9; (g_455 >= 0); g_455 -= 1)
                    {
                        (*l_1023) ^= (l_1079.f0 , (l_1067 &= (*p_41)));
                        (*g_120) = l_1089;
                        (*l_1023) |= ((((*l_1087) , ((*l_1027) = l_1090)) == l_1091) & ((void*)0 != l_1092));
                        (*l_1023) = 1L;
                    }
                }
            }
        }
    }

    ;
    return p_39;




}







static unsigned short func_44(int * p_45)
{
    char l_48 = 0x86L;
    int *l_49 = &g_50;
    union U1 l_51 = {9UL};
    union U1 *l_52[9] = {&l_51, &l_51, &l_51, &l_51, &l_51, &l_51, &l_51, &l_51, &l_51};
    short *l_58 = &g_59;
    int l_60[4] = {0xD552B890L, (-6L), 0xD552B890L, (-6L)};
    short **l_65 = (void*)0;
    short *l_67[1];
    short **l_66 = &l_67[0];
    int l_86 = 0x08268A79L;
    char l_109 = 0x53L;
    int **l_117 = &g_91[4];
    int ***l_116 = &l_117;
    char *l_178[6] = {&l_109, &l_48, &l_109, &l_48, &l_109, &l_48};
    char **l_177 = &l_178[4];
    short l_218 = (-8L);
    short **l_222 = &l_58;
    unsigned short l_226[3];
    int l_279 = (-1L);
    char l_296 = (-3L);
    unsigned **l_316[3];
    int *l_361 = (void*)0;
    unsigned l_436 = 4294967288UL;
    union U1 **l_462 = &l_52[3];
    int i;
    for (i = 0; i < 1; i++)
        l_67[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_226[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_316[i] = &g_302;
    (*l_49) = (safe_lshift_func_uint8_t_u_u(l_48, 2));
    if (((g_53[5] = l_51) , (safe_mul_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(g_9, (g_53[5] , (((*l_58) = ((~(*l_49)) == (*l_49))) >= ((((l_60[1] > (safe_lshift_func_uint16_t_u_s((*l_49), 10))) , g_63) == ((*l_66) = l_58)) <= (*l_49)))))) , 0xA9177C83L) <= 0x80DD333FL), (*l_49)))))
    {
        unsigned *l_70 = &g_71;
        unsigned l_74 = 4294967295UL;
        union U2 l_81 = {-4L};
        int *l_82 = &g_83;
        char *l_85[7][3][7] = {{{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}, {{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}, {{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}, {{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}, {{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}, {{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}, {{&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}, {&l_48, &l_48, (void*)0, &l_48, (void*)0, &l_48, &l_48}}};
        int *l_88[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_88[i] = &g_89;
        g_89 ^= (!((safe_mod_func_int8_t_s_s((((*l_70) = (0UL || (*l_49))) , (g_87 |= (0x70L ^ (l_86 = (safe_mod_func_int32_t_s_s((g_84[0] |= ((*l_82) = ((*l_49) = ((l_74 <= (l_74 >= (safe_sub_func_int16_t_s_s((*g_63), (safe_lshift_func_uint16_t_u_s(g_64, 6)))))) & (safe_lshift_func_uint16_t_u_u(((*l_49) == (l_81 , l_74)), 14)))))), 0xEC3DF54DL)))))), g_9)) && 0UL));
        return (*l_49);
    }
    else
    {
        int **l_90[10][6] = {{&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}, {&l_49, &l_49, &l_49, &l_49, (void*)0, &l_49}};
        int i, j;
        (*l_49) ^= (*p_45);
        g_91[6] = &l_86;


    }



    if ((*p_45))
    {
        unsigned l_99 = 4294967292UL;
        for (g_64 = (-9); (g_64 > (-5)); ++g_64)
        {
            for (g_87 = 0; g_87 < 1; g_87 += 1)
            {
                g_84[g_87] = 0x55L;
            }
            for (l_48 = (-26); (l_48 > 12); l_48 = safe_add_func_uint8_t_u_u(l_48, 1))
            {
                int **l_96 = &g_91[1];
                union U1 **l_97[5][1][1] = {{{&l_52[8]}}, {{&l_52[8]}}, {{&l_52[8]}}, {{&l_52[8]}}, {{&l_52[8]}}};
                int i, j, k;
                (*l_96) = (void*)0;
                g_98 = &g_53[5];
            }
        }


        l_99 &= (*p_45);
        for (l_86 = 0; (l_86 != 20); l_86 = safe_add_func_uint8_t_u_u(l_86, 6))
        {
            union U2 *l_104[9] = {&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103};
            int i;
            l_104[2] = g_102;
        }
    }
    else
    {
        int l_105 = (-1L);
        (*l_49) = (l_105 ^ l_105);
        return (*l_49);


    }


    if ((*l_49))
    {
        unsigned char l_115[1];
        unsigned char l_143 = 0x15L;
        int *l_153 = (void*)0;
        int l_157 = 0xFD1935D6L;
        char *l_164 = (void*)0;
        int l_181[1][2][4] = {{{(-4L), (-4L), (-1L), (-4L)}, {(-4L), (-4L), (-1L), (-4L)}}};
        union U1 l_189 = {0x4AL};
        short **l_224[10][7][3] = {{{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}, {{&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}, {&g_63, &l_67[0], &g_63}}};
        short **l_225 = &l_67[0];
        unsigned short l_227 = 0x9FF0L;
        union U2 *l_239 = (void*)0;
        char l_259 = 1L;
        char l_274 = 0x40L;
        int ****l_317[3];
        union U1 **l_328 = &g_98;
        union U2 l_337 = {1L};
        union U0 l_341 = {0xC63D06EAL};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_115[i] = 0x90L;
        for (i = 0; i < 3; i++)
            l_317[i] = &l_116;
        if ((*p_45))
        {
            short l_108 = 8L;
            int ****l_118 = &l_116;
            unsigned char *l_121[5][6][4] = {{{&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}}, {{&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}}, {{&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}}, {{&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}}, {{&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}, {&l_115[0], (void*)0, &l_115[0], &g_84[0]}}};
            char *l_124 = &l_109;
            unsigned *l_136 = &g_71;
            int *l_150 = &g_83;
            union U0 l_170[4] = {{-2L}, {-2L}, {-2L}, {-2L}};
            int i, j, k;
            for (l_86 = 5; (l_86 > 1); l_86--)
            {
                int **l_112 = &l_49;
                int ***l_111 = &l_112;
                int *l_113 = (void*)0;
                int *l_114 = &g_89;
                if (l_108)
                    break;
                if (((*l_114) &= (l_109 & (g_110 , (((*l_111) = ((*l_49) , (void*)0)) != &g_91[5])))))
                {
                    return l_115[0];


                }
                else
                {
                    (*l_49) ^= l_108;
                }

                ;
            }
            (*l_49) = (*p_45);
            if ((((((*l_118) = l_116) != (g_119 = g_119)) , ((g_110 , (l_115[0] >= (g_53[5].f0 = (*l_49)))) >= 6L)) , (((*l_124) = (safe_mul_func_uint8_t_u_u((*l_49), 9L))) || (((*g_102) = (*g_102)) , 1L))))
            {
                unsigned l_127 = 0UL;
                int l_134 = 7L;
                (*l_49) ^= (*p_45);
                for (l_109 = 0; (l_109 <= 0); l_109 += 1)
                {
                    return g_87;


                }
                for (l_108 = (-10); (l_108 != (-24)); l_108 = safe_sub_func_uint8_t_u_u(l_108, 5))
                {
                    short l_135 = (-1L);
                    union U1 *l_144 = &g_53[5];
                    (*l_49) = (((l_127 != ((((g_53[5].f0 , (safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((l_134 = 0UL) || ((l_115[0] > ((*l_124) |= (l_135 | (&g_71 == l_136)))) | (safe_add_func_uint32_t_u_u((g_50 , (((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((~0xA1L), (-1L))), (*g_63))) < l_115[0]) , g_50)), l_143)))), 0x1112FB1CL)), l_115[0])) , l_134), 0xD41A25E9L))) , l_135) ^ (*p_45)) < 0xF0L)) , l_144) != (void*)0);
                    return l_115[0];


                }
            }
            else
            {
                unsigned l_147 = 6UL;
                l_147 ^= (safe_add_func_uint32_t_u_u(g_53[5].f0, (&g_120 == &g_120)));
                for (g_103.f0 = 28; (g_103.f0 < 10); g_103.f0--)
                {
                    unsigned char l_179 = 0x4BL;
                }
            }
            return (*l_150);


        }
        else
        {
            int l_183 = 0x20018315L;
            int l_202 = 0x849BAEF5L;
            union U1 *l_208 = &l_51;
            for (l_157 = 5; (l_157 >= 0); l_157 -= 1)
            {
                int *l_180[3][6] = {{&l_157, &l_157, &l_157, &g_89, &g_163, &g_89}, {&l_157, &l_157, &l_157, &g_89, &g_163, &g_89}, {&l_157, &l_157, &l_157, &g_89, &g_163, &g_89}};
                int i, j;
                if ((*p_45))
                    break;
                l_181[0][1][2] = ((*l_49) = (-5L));
                for (g_64 = 5; (g_64 >= 0); g_64 -= 1)
                {
                    short l_182 = 0xBB0AL;
                    (*l_49) ^= (l_182 , ((l_183 < g_87) | (*g_63)));
                }
            }
            if (l_183)
            {
                int l_186 = 0L;
                unsigned *l_187 = &g_188;
                if ((((*g_63) ^ ((((((*l_187) ^= (safe_mod_func_int16_t_s_s((g_84[0] && l_186), ((*l_58) = (*g_63))))) | ((0xE1L || ((g_53[5].f0 & (!(g_110.f0 >= ((65535UL != (((*l_49) ^ 1UL) == g_87)) >= 0xF4L)))) , 0xE5L)) >= 3UL)) , 0x88L) | g_89) ^ l_186)) == 65535UL))
                {
                    unsigned l_193[4][10][6] = {{{0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}}, {{0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}}, {{0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}}, {{0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}, {0x0C17D96CL, 4294967295UL, 0xC78700D4L, 0UL, 0UL, 0UL}}};
                    int i, j, k;
                    if ((+((l_189 , (*l_49)) | g_71)))
                    {
                        (*l_49) = 0xDABF531EL;
                        (*l_49) = (*p_45);
                        (*g_120) = (**g_119);
                    }
                    else
                    {
                        unsigned l_190 = 0x220C78BCL;
                        unsigned char *l_201 = &g_84[0];
                        l_202 = (l_190 > ((safe_sub_func_int16_t_s_s(((*l_58) |= (*g_63)), l_193[2][3][1])) > (g_87 &= ((safe_sub_func_int16_t_s_s((~(safe_rshift_func_int16_t_s_u((*g_63), 8))), (safe_unary_minus_func_uint32_t_u(l_186)))) <= ((*l_201) ^= (safe_rshift_func_uint8_t_u_u(0x4AL, 6)))))));
                    }
                }
                else
                {
                    int *l_205 = &g_50;
                    for (l_48 = 0; l_48 < 1; l_48 += 1)
                    {
                        l_67[l_48] = &g_87;
                    }

                    for (g_83 = 0; (g_83 == 12); g_83 = safe_add_func_int16_t_s_s(g_83, 9))
                    {
                        (*l_49) = l_186;
                    }
                    (*l_49) ^= (l_186 | l_115[0]);
                    (*l_117) = l_205;
                }


            }
            else
            {
                unsigned l_209 = 0xF683C115L;
                char *l_210 = &l_109;
                unsigned char *l_213 = &l_189.f0;
                unsigned char *l_214 = &l_115[0];
                int l_215 = 0L;
                int l_219 = 0x271BD982L;
                l_219 |= (safe_rshift_func_uint8_t_u_s((((void*)0 == l_208) == (((*g_63) <= ((g_103.f0 == ((*g_63) & (((l_209 , l_210) != ((safe_add_func_int16_t_s_s(((1L > ((*l_214) = (((*l_213) |= g_84[0]) || l_202))) ^ l_215), 65533UL)) , g_216)) != (*g_63)))) < (*p_45))) , (-1L))), l_218));
            }


        }


        for (l_51.f0 = (-10); (l_51.f0 > 48); ++l_51.f0)
        {
            short ***l_223[6][4] = {{&l_65, (void*)0, &l_65, &l_66}, {&l_65, (void*)0, &l_65, &l_66}, {&l_65, (void*)0, &l_65, &l_66}, {&l_65, (void*)0, &l_65, &l_66}, {&l_65, (void*)0, &l_65, &l_66}, {&l_65, (void*)0, &l_65, &l_66}};
            int l_230[3][1];
            int ****l_232 = &l_116;
            int *l_275 = &g_163;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_230[i][j] = 0L;
            }
            if (((l_224[6][3][0] = l_222) != l_225))
            {
                if (l_226[1])
                    break;
            }
            else
            {
                char l_235[10][4][6] = {{{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}, {{(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}, {(-1L), 7L, (-1L), 0x44L, 0x75L, (-5L)}}};
                int l_236 = (-10L);
                int ****l_237 = &l_116;
                union U1 l_263[10] = {{0x95L}, {0xDBL}, {0x95L}, {0xDBL}, {0x95L}, {0xDBL}, {0x95L}, {0xDBL}, {0x95L}, {0xDBL}};
                int i, j, k;
                (*l_49) = l_227;
                (*l_117) = (void*)0;
                l_236 = (safe_rshift_func_uint8_t_u_s((l_230[2][0] == ((*l_58) ^= (g_231 ^ (0x76FBL == (((&g_119 == l_232) , (*g_216)) & (safe_sub_func_int16_t_s_s((((*p_45) <= g_231) == ((-1L) == 0x37L)), (-1L)))))))), l_235[3][0][0]));
                for (g_59 = 3; (g_59 >= 0); g_59 -= 1)
                {
                    union U2 **l_238[4][7] = {{&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}, {&g_102, &g_102, &g_102, &g_102, &g_102, &g_102, &g_102}};
                    int l_249 = 0xD38B5704L;
                    unsigned l_260 = 0x054E4649L;
                    unsigned *l_266 = &g_188;
                    int l_272 = 3L;
                    int ***l_273 = &l_117;
                    int i, j;
                    (*l_49) &= ((void*)0 != l_237);
                    (*l_49) = 1L;
                    l_239 = &g_103;

                    ;
                    for (l_236 = 3; (l_236 >= 0); l_236 -= 1)
                    {
                        int *l_240 = &g_163;
                        unsigned char *l_245 = (void*)0;
                        unsigned char *l_246 = &g_84[0];
                        unsigned char *l_258 = &l_143;
                        int i, j, k;
                        (*l_49) |= l_235[(g_59 + 6)][g_59][(g_59 + 1)];
                        (*l_240) ^= ((*l_49) = (*p_45));
                        (*l_49) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((((((((*l_246) = ((((*l_239) = (*g_102)) , (*g_63)) && (l_230[2][0] ^ 7L))) != (+(safe_sub_func_uint8_t_u_u(l_249, ((*p_45) & (l_259 = ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u((*g_216), (0xBBL ^ ((*l_258) = ((safe_sub_func_int16_t_s_s((*g_63), (*g_63))) == g_83))))) == (*g_216)) < (*l_240)) | 0x61L), (*p_45))), 0x45B7L)) != l_235[3][0][0]))))))) >= 0x14B4F62CL) && (*p_45)) != 4294967295UL) != 2UL), 3)), l_260));
                    }
                    for (l_249 = 3; (l_249 >= 0); l_249 -= 1)
                    {
                        unsigned *l_265 = (void*)0;
                        unsigned **l_264 = &l_265;
                        unsigned char *l_267 = &l_189.f0;
                        unsigned char *l_268 = &l_115[0];
                        unsigned ***l_271 = &l_264;
                        int i, j, k;
                        (*l_117) = &l_249;
                        (*l_49) = (safe_mul_func_int8_t_s_s(l_235[(g_59 + 5)][g_59][(g_59 + 1)], (((l_263[8] , (*p_45)) | (*p_45)) , ((**l_177) = (((*l_268) = ((*l_267) = (((*l_264) = &g_188) != (l_266 = &g_188)))) , (safe_mod_func_uint32_t_u_u(((((*l_271) = &l_265) != (void*)0) && ((*g_216) = l_272)), 1L)))))));

                        ;
                        (*l_49) = (l_273 == (void*)0);
                        if (l_235[(g_59 + 5)][g_59][(g_59 + 1)])
                            continue;
                    }


                }
            }
            if (l_274)
                continue;
            (*l_275) |= ((*l_49) = (-10L));
            for (g_231 = 0; (g_231 <= 2); g_231 += 1)
            {
                int i;
                for (g_87 = 2; (g_87 >= 0); g_87 -= 1)
                {
                    int l_276 = 0xAF650090L;
                    for (l_227 = 0; (l_227 <= 2); l_227 += 1)
                    {
                        int i;
                        return l_226[l_227];


                    }
                    l_276 = (*p_45);
                    for (g_103.f0 = 2; (g_103.f0 >= 0); g_103.f0 -= 1)
                    {
                        return g_9;


                    }
                    if ((*p_45))
                        break;
                }
                return l_226[g_231];


            }
        }


        ;
        if ((((safe_lshift_func_int16_t_s_s((&g_53[5] == (void*)0), (l_279 == (*g_63)))) ^ l_259) || (safe_rshift_func_int16_t_s_s(l_189.f0, 12))))
        {
            int *l_285[3][7][7] = {{{(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}}, {{(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}}, {{(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}, {(void*)0, &l_181[0][0][0], &g_83, &l_181[0][1][2], (void*)0, &g_163, (void*)0}}};
            int *l_331 = (void*)0;
            int i, j, k;
            if ((*p_45))
            {
                unsigned short ***l_284 = &g_282;
                int *l_286[9][7][4] = {{{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}, {{&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}, {&l_181[0][1][2], &g_110.f0, &g_89, (void*)0}}};
                int i, j, k;
                (*l_284) = g_282;
                (*l_49) = (l_189 , ((l_286[6][4][0] = l_285[0][4][3]) != p_45));
            }
            else
            {
                unsigned l_293 = 0xB9474F29L;
                int l_303[1];
                char **l_312 = &g_216;
                int i;
                for (i = 0; i < 1; i++)
                    l_303[i] = 2L;
                for (g_231 = 0; (g_231 <= 2); g_231 += 1)
                {
                    unsigned *l_294 = &g_188;
                    int l_295 = (-3L);
                    unsigned char l_299 = 255UL;
                    char **l_326 = (void*)0;
                    unsigned short l_327 = 0UL;
                    int l_330 = (-8L);
                }
            }
            (*g_120) = l_331;
        }
        else
        {
            if ((*p_45))
            {
                unsigned char l_334[9] = {0x65L, 0xBBL, 0x65L, 0xBBL, 0x65L, 0xBBL, 0x65L, 0xBBL, 0x65L};
                int i;
                for (l_86 = 0; (l_86 <= 7); l_86 += 1)
                {
                    if ((*p_45))
                        break;
                    (*l_49) &= (+(safe_lshift_func_int16_t_s_s((-7L), l_334[1])));
                }
            }
            else
            {
                union U2 **l_335 = &l_239;
                int l_336 = 6L;
                (*l_335) = (void*)0;

                ;
                (*l_49) ^= l_336;
                (*l_117) = (((*g_102) = l_337) , p_45);


            }


            for (g_89 = 20; (g_89 <= (-21)); g_89 = safe_sub_func_uint32_t_u_u(g_89, 8))
            {
                unsigned char l_340 = 0xA1L;
                l_340 &= (0x046EE43BL | ((*l_49) , (**g_301)));
                if ((*p_45))
                    continue;
            }
        }


        l_86 |= (((0xB32BL & (l_341 , (*l_49))) ^ (*g_63)) > (*g_216));
    }
    else
    {
        unsigned short l_344 = 0x4329L;
        unsigned short l_345 = 5UL;
        int l_359 = 0x49C646EDL;
        union U2 *l_399 = &g_103;
        int l_487 = 0L;
        for (g_71 = (-5); (g_71 == 46); g_71 = safe_add_func_int32_t_s_s(g_71, 5))
        {
            (**l_116) = (*g_120);
            (*l_49) ^= (*p_45);
        }
        l_345 = l_344;
        if ((*p_45))
        {
            (*l_49) |= ((void*)0 != &g_120);
        }
        else
        {
            short l_360 = (-4L);
            int l_362 = (-1L);
            unsigned l_368 = 0x36F3B57BL;
            int l_385 = 0x221D23D8L;
            union U0 l_386 = {0x63B76497L};
            union U1 *l_392 = &g_53[5];
            union U2 *l_439 = &g_103;
            int *l_442 = &l_60[1];
            int l_446 = (-7L);
            int ***l_491 = &l_117;
            unsigned l_507[7] = {0UL, 0x9EB313F7L, 0UL, 0x9EB313F7L, 0UL, 0x9EB313F7L, 0UL};
            int i;
            for (g_103.f0 = (-16); (g_103.f0 == (-20)); g_103.f0--)
            {
                unsigned l_363[9][7] = {{0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}, {0x69586FA0L, 4294967295UL, 0UL, 0x745581D9L, 4294967295UL, 0UL, 4294967295UL}};
                unsigned **l_415[9][8] = {{&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}, {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302}};
                unsigned short ***l_425[3];
                int l_456 = 0x7C520808L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_425[i] = &g_282;
                for (l_109 = 6; (l_109 <= (-25)); --l_109)
                {
                    unsigned short l_352 = 0xE7BCL;
                    if ((safe_mod_func_uint16_t_u_u(l_352, (*g_63))))
                    {
                        int l_353[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_353[i] = 2L;
                        (**l_116) = (**g_119);
                        return l_353[2];


                    }
                    else
                    {
                        unsigned short l_354 = 0xFAF3L;
                        (*l_49) = (~(*p_45));
                        (*l_49) |= l_354;
                    }
                    for (l_345 = 0; (l_345 > 32); l_345 = safe_add_func_int32_t_s_s(l_345, 3))
                    {
                        (*l_49) = (safe_mul_func_uint8_t_u_u((l_345 & ((l_359 ^= 0x80C5L) > ((**g_282) = l_360))), g_307.f0));
                        if ((*p_45))
                            continue;
                        l_362 |= ((void*)0 == l_361);
                        if (l_352)
                            break;
                    }
                    (*l_49) |= l_363[1][3];
                }
                for (g_162 = (-26); (g_162 <= 11); g_162 = safe_add_func_int8_t_s_s(g_162, 1))
                {
                    unsigned l_382 = 0xDC4FCF80L;
                    unsigned **l_391 = (void*)0;
                    union U1 **l_393 = (void*)0;
                    union U1 **l_394 = (void*)0;
                    union U1 **l_395 = &l_52[3];
                    char l_396 = 6L;
                    unsigned short ***l_397[9] = {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282};
                    union U2 l_422 = {1L};
                    int *l_457 = &l_86;
                    int i;
                    for (g_87 = 0; (g_87 > (-24)); g_87 = safe_sub_func_int32_t_s_s(g_87, 1))
                    {
                        short l_375 = 4L;
                        union U1 **l_381 = &g_98;
                        union U1 ***l_380 = &l_381;
                        l_368 |= (*p_45);
                        (*l_49) = l_363[1][3];
                        (*l_49) = (safe_mul_func_uint8_t_u_u((g_53[5].f0 , ((l_382 ^= ((((safe_lshift_func_uint8_t_u_s(l_345, (255UL ^ g_162))) >= ((**g_301) | ((l_375 && (safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(((l_345 ^ ((void*)0 == l_380)) , 0x3EL), 0x55L)) == 0x36FF04E8L) , l_359), l_363[1][3]))) <= 1L))) && 0UL) != (*g_63))) || 0xF4910751L)), g_231));
                    }
                    (*l_395) = (g_98 = (((*g_63) ^ (g_110 , (l_386.f0 = (safe_mul_func_uint16_t_u_u((l_385 < l_363[1][3]), ((l_386 , (((safe_lshift_func_uint16_t_u_s(l_344, (safe_mul_func_int16_t_s_s(((*g_216) && g_89), 2L)))) , (*g_102)) , (*g_300))) != l_391)))))) , l_392));
                    if (((*g_98) , (((l_360 <= g_89) , ((((void*)0 != &g_301) && 4294967292UL) | (l_385 || (0L != l_396)))) , 0xB518DC31L)))
                    {
                        int l_398 = 0x86921A87L;
                        (*g_120) = p_45;
                        l_398 &= (&g_282 == l_397[2]);
                    }
                    else
                    {
                        union U2 **l_400 = &g_102;
                        union U2 **l_401 = &l_399;
                        int l_417 = 0L;
                        unsigned short ****l_426 = &l_397[2];
                        int *l_432 = &l_60[3];
                        int **l_433[7] = {&l_49, &l_49, &l_49, &l_49, &l_49, &l_49, &l_49};
                        int i;
                        (*l_401) = ((*l_400) = l_399);
                        l_417 &= ((l_396 , (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((-1L), (safe_unary_minus_func_uint32_t_u(4294967287UL)))) , (safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((*g_98) , l_415[0][1]) == (void*)0) < (safe_unary_minus_func_int32_t_s((*p_45)))), g_110.f0)), (*g_216)))), 9)) | (**g_282)), 6)), (*g_283)))) && (*g_283));
                        g_435[0] = (g_434 = ((**g_119) = (((*l_432) = (safe_rshift_func_uint16_t_u_s((((safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_int16_t_s((l_422 , (-1L)))))) && ((safe_lshift_func_int8_t_s_s(8L, ((l_425[1] != ((*l_426) = (void*)0)) || (safe_mul_func_int16_t_s_s(l_359, (safe_unary_minus_func_int8_t_s(0xB5L))))))) | (*p_45))) == (((+((((((((safe_mod_func_int16_t_s_s((l_344 != (*g_302)), l_359)) == l_363[1][3]) && (*p_45)) , l_386.f0) | l_363[4][0]) | (-2L)) <= 65526UL) || g_84[0])) || 0x02E1E27FL) >= (-1L))), 12))) , (void*)0)));

                        ;

                    }


                    if (((*l_49) = ((((*l_392) , 1UL) & (l_436 , (**g_282))) , ((safe_add_func_uint16_t_u_u((*g_283), (*g_63))) || (((**l_177) = l_363[1][3]) != 0xC3L)))))
                    {
                        union U2 **l_440 = &g_102;
                        int *l_443[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_443[i] = &l_386.f0;
                        (*l_440) = l_439;
                        (*g_120) = (**g_119);
                        (*l_49) = (safe_unary_minus_func_uint8_t_u(((((((((*l_49) , (l_442 = p_45)) != (void*)0) > (l_385 = l_360)) , ((l_360 && (safe_add_func_int8_t_s_s(l_446, (l_359 = (0L || (safe_mod_func_uint8_t_u_u(l_359, 0x84L))))))) == l_345)) < g_163) > 1L) <= 0xD5BA05F7L)));

                        ;
                        l_456 |= ((((((*l_58) = (l_446 > ((safe_mul_func_int16_t_s_s(l_362, ((((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((((((g_455 >= (*l_49)) > (250UL > (-1L))) , 0x4C015F69L) , (*g_302)) >= (((-1L) < (*g_302)) < l_363[0][4])) , (-6L)), (-7L))) >= l_363[1][3]), 0xBB5AL)) ^ l_345) == l_363[7][1]) != l_362))) && (*g_216)))) & 0x76CAL) > 0x95569543L) && (-9L)) , (*p_45));
                    }
                    else
                    {
                        p_45 = l_457;

                        ;
                    }
                }
                (*l_117) = (**l_116);
                for (l_368 = 0; (l_368 >= 31); l_368 = safe_add_func_uint16_t_u_u(l_368, 7))
                {
                    for (g_163 = 0; g_163 < 3; g_163 += 1)
                    {
                        l_425[g_163] = &g_282;
                    }
                }
            }

            ;


            ;
            ;
            if ((*p_45))
            {
                char l_470[7][4] = {{0x2DL, 0x8EL, 0x8CL, 0x0FL}, {0x2DL, 0x8EL, 0x8CL, 0x0FL}, {0x2DL, 0x8EL, 0x8CL, 0x0FL}, {0x2DL, 0x8EL, 0x8CL, 0x0FL}, {0x2DL, 0x8EL, 0x8CL, 0x0FL}, {0x2DL, 0x8EL, 0x8CL, 0x0FL}, {0x2DL, 0x8EL, 0x8CL, 0x0FL}};
                unsigned l_475 = 0x8F5F5F9BL;
                unsigned short *l_488 = &l_226[1];
                int ***l_490 = &g_120;
                int *l_492 = &g_83;
                int l_493[6][1][9] = {{{0x78831B73L, (-10L), 0x9E675E34L, 1L, 0x06229DF0L, 0xF67C84FDL, 0x06229DF0L, 1L, 0x9E675E34L}}, {{0x78831B73L, (-10L), 0x9E675E34L, 1L, 0x06229DF0L, 0xF67C84FDL, 0x06229DF0L, 1L, 0x9E675E34L}}, {{0x78831B73L, (-10L), 0x9E675E34L, 1L, 0x06229DF0L, 0xF67C84FDL, 0x06229DF0L, 1L, 0x9E675E34L}}, {{0x78831B73L, (-10L), 0x9E675E34L, 1L, 0x06229DF0L, 0xF67C84FDL, 0x06229DF0L, 1L, 0x9E675E34L}}, {{0x78831B73L, (-10L), 0x9E675E34L, 1L, 0x06229DF0L, 0xF67C84FDL, 0x06229DF0L, 1L, 0x9E675E34L}}, {{0x78831B73L, (-10L), 0x9E675E34L, 1L, 0x06229DF0L, 0xF67C84FDL, 0x06229DF0L, 1L, 0x9E675E34L}}};
                int i, j, k;
                for (g_307.f0 = (-3); (g_307.f0 >= 12); ++g_307.f0)
                {
                    union U1 **l_464 = &l_52[3];
                    union U1 ***l_463 = &l_464;
                    int l_465 = 0xCC0EF0A0L;
                    (*l_49) ^= (l_462 == ((*l_463) = &g_98));

                    ;
                    l_465 ^= (-8L);
                }
                l_362 = (safe_add_func_uint16_t_u_u(65533UL, (((safe_add_func_int32_t_s_s(l_470[5][1], (((safe_rshift_func_int16_t_s_s(l_386.f0, (*g_63))) && l_446) && l_368))) || ((*g_63) = (safe_rshift_func_uint16_t_u_s(((+(-10L)) < (((**l_222) = l_475) ^ l_344)), (*g_63))))) & l_475)));
                l_493[2][0][6] |= (safe_mul_func_int16_t_s_s((l_360 == ((safe_unary_minus_func_uint32_t_u((l_360 > ((((*l_49) ^= l_385) | ((*g_98) , ((*l_492) = (l_470[0][0] != (((safe_mod_func_int16_t_s_s((((*g_63) = ((*g_216) ^ (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((*l_488) = (((*g_283) = (safe_rshift_func_uint16_t_u_s((0x1D76BE41L & (l_487 = ((*l_399) , (l_359 = (*p_45))))), l_345))) >= 0x8F2BL)), g_489)), 4)))) & g_83), 0x84B4L)) , l_490) == l_491))))) && (*p_45))))) >= g_163)), 0x56FDL));
            }
            else
            {
                unsigned char l_496 = 0xA9L;
                int l_500 = 0x5DB71145L;
                union U0 *l_508 = &g_110;
                l_496 |= ((*l_49) = (safe_lshift_func_int8_t_s_u(l_345, 2)));
                for (g_50 = 0; (g_50 == (-1)); g_50--)
                {
                    int *l_499 = (void*)0;
                    union U0 *l_503 = (void*)0;
                    l_500 |= l_344;
                    for (l_436 = 0; (l_436 == 40); l_436 = safe_add_func_int32_t_s_s(l_436, 4))
                    {
                        union U0 **l_504[5][3] = {{&l_503, &l_503, &l_503}, {&l_503, &l_503, &l_503}, {&l_503, &l_503, &l_503}, {&l_503, &l_503, &l_503}, {&l_503, &l_503, &l_503}};
                        int l_506 = 0xE81E9459L;
                        int i, j;
                        g_505 = l_503;

                        ;
                        l_506 &= (*p_45);
                        l_507[6] = (0UL > (l_386.f0 = (g_59 , (!(*p_45)))));
                    }
                    l_508 = &l_386;

                    ;
                }

                ;
                ;
                for (g_83 = 1; (g_83 <= 6); g_83 += 1)
                {
                    (*g_120) = (*g_120);
                }
            }

            ;
        }

        ;


        ;
        ;
        return (*g_283);


    }



    return (*g_283);


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_84[i], "g_84[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_110.f0, "g_110.f0", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_1117, "g_1117", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1365[i][j][k], "g_1365[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1429[i][j][k], "g_1429[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1440, "g_1440", print_hash_value);
    transparent_crc(g_1523, "g_1523", print_hash_value);
    transparent_crc(g_1585, "g_1585", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1623[i], "g_1623[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1753[i][j][k].f0, "g_1753[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1799, "g_1799", print_hash_value);
    transparent_crc(g_1861, "g_1861", print_hash_value);
    transparent_crc(g_1918, "g_1918", print_hash_value);
    transparent_crc(g_1971, "g_1971", print_hash_value);
    transparent_crc(g_2053, "g_2053", print_hash_value);
    transparent_crc(g_2200, "g_2200", print_hash_value);
    transparent_crc(g_2245, "g_2245", print_hash_value);
    transparent_crc(g_2339, "g_2339", print_hash_value);
    transparent_crc(g_2443, "g_2443", print_hash_value);
    transparent_crc(g_2480, "g_2480", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2497[i][j][k], "g_2497[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2505[i][j], "g_2505[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
