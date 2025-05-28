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



static short g_4 = 0x1E87L;
static int g_7 = 0x6801FC3EL;
static unsigned short g_8 = 0x4078L;
static int *g_46[8][4][8] = {{{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}, {{&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, (void*)0, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}};
static int g_92[10][10] = {{0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}, {0x4168CBA4L, 1L, 0x152899D3L, 0x152899D3L, 1L, 0x4168CBA4L, 0x87245417L, 0x9107178DL, 1L, 0x34BB8EBAL}};
static unsigned short g_108 = 1UL;
static int g_125 = 0x91F1F153L;
static unsigned short *g_131 = (void*)0;
static unsigned short **g_130 = &g_131;
static char g_133 = 0xE3L;
static int **g_137 = (void*)0;
static unsigned g_145 = 0x2CE7F336L;
static char *g_164 = &g_133;
static char **g_163[5] = {&g_164, &g_164, &g_164, &g_164, &g_164};
static char ***g_162 = &g_163[3];
static int g_205 = (-1L);
static short g_206 = 0xE0A5L;
static unsigned *g_218 = &g_145;
static int *g_231 = &g_205;
static unsigned short g_262[5] = {65533UL, 65533UL, 65533UL, 65533UL, 65533UL};
static unsigned char g_278 = 254UL;
static char ***g_286 = (void*)0;
static int *g_302 = &g_7;
static int *g_312 = &g_205;
static unsigned g_316 = 0xDDB280B6L;
static int *g_339 = &g_125;
static int **g_338 = &g_339;
static int ***g_382[6] = {&g_338, &g_338, &g_338, &g_338, &g_338, &g_338};
static unsigned *g_426 = (void*)0;
static short g_438 = 0x9774L;
static unsigned short ***g_568 = &g_130;
static int g_575[1] = {0x7C63273EL};
static unsigned char g_587 = 253UL;
static unsigned char *g_603 = &g_278;
static unsigned short **g_653 = &g_131;
static unsigned short g_709 = 7UL;
static int g_821 = (-1L);
static short g_893 = (-9L);
static int g_908 = (-7L);
static int *g_929 = (void*)0;
static char ****g_940[9][2][9] = {{{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}, {{&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}, {&g_286, &g_286, &g_162, &g_286, &g_286, &g_162, &g_162, &g_162, &g_286}}};
static char *****g_939 = &g_940[0][1][1];
static int ***g_999 = (void*)0;
static int ****g_998 = &g_999;
static short ***g_1025 = (void*)0;
static unsigned g_1114 = 0x13D62F87L;
static unsigned g_1131 = 0x9B979D46L;
static int g_1134 = 0xFADB8273L;
static char g_1156[3][7][1] = {{{0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}}, {{0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}}, {{0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}, {0x63L}}};
static int ****g_1171[6] = {&g_382[1], &g_382[1], &g_382[1], &g_382[1], &g_382[1], &g_382[1]};
static int *****g_1170[5] = {&g_1171[4], &g_1171[3], &g_1171[4], &g_1171[3], &g_1171[4]};
static short g_1190 = 0xDABEL;
static int g_1235 = 0L;
static unsigned char g_1277 = 0xA9L;
static int *****g_1391[3] = {(void*)0, (void*)0, (void*)0};
static unsigned g_1453 = 8UL;
static unsigned char g_1507 = 0x81L;
static char g_1513 = 0L;
static int *g_1534 = &g_575[0];
static unsigned **g_1539 = (void*)0;
static unsigned short ****g_1547 = &g_568;
static unsigned char g_1593 = 9UL;
static short *g_1629 = &g_438;
static short **g_1628 = &g_1629;
static short ***g_1641 = &g_1628;
static unsigned g_1651 = 1UL;
static char g_1693[3] = {0x58L, 0x58L, 0x58L};
static unsigned **g_1724 = &g_218;
static unsigned ***g_1723 = &g_1724;
static int *g_1759 = &g_575[0];



static short func_1(void);
static int * func_11(int * p_12, int p_13);
static int func_14(unsigned short p_15, int * p_16, unsigned short p_17, int * p_18);
static unsigned short func_20(unsigned p_21, int p_22, int * p_23, int p_24);
static int * func_26(unsigned short p_27, int * p_28);
static short func_34(int * p_35, int * p_36, unsigned short p_37);
static int * func_38(unsigned p_39, int p_40);
static int * func_47(int * p_48, char p_49);
static int * func_50(unsigned short p_51, unsigned short p_52, int p_53, int p_54, unsigned p_55);
static unsigned short func_56(unsigned short p_57, short p_58, char p_59, int * p_60);
static short func_1(void)
{
    int l_25 = 0x5741311EL;
    int *l_1093[6][10][4] = {{{&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}}, {{&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}}, {{&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}}, {{&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}}, {{&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}}, {{&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}, {&g_92[9][9], &g_92[3][9], &l_25, &g_7}}};
    unsigned l_1104 = 1UL;
    int l_1115 = 3L;
    unsigned short *l_1132 = &g_108;
    unsigned l_1169 = 0x3F92B8BBL;
    unsigned l_1189 = 1UL;
    unsigned short l_1204 = 0xF37EL;
    int l_1249 = 0x2D09EA1EL;
    int *****l_1262 = &g_1171[2];
    unsigned short l_1263 = 65535UL;
    int *l_1265 = (void*)0;
    int l_1275 = 0x80B9EED9L;
    unsigned char l_1304 = 253UL;
    short l_1327 = 0x8A24L;
    int *l_1331[7] = {&g_7, (void*)0, &g_7, (void*)0, &g_7, (void*)0, &g_7};
    unsigned **l_1401[8] = {&g_218, (void*)0, &g_218, (void*)0, &g_218, (void*)0, &g_218, (void*)0};
    unsigned char **l_1414 = &g_603;
    short l_1439 = 0x07E9L;
    unsigned l_1440 = 4294967289UL;
    unsigned l_1508 = 0xF05A0AA8L;
    char l_1518 = 1L;
    int l_1524 = (-2L);
    char **l_1537[5][6] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
    short *l_1562 = (void*)0;
    short **l_1561 = &l_1562;
    short ***l_1560[3][8] = {{&l_1561, &l_1561, &l_1561, (void*)0, &l_1561, &l_1561, &l_1561, &l_1561}, {&l_1561, &l_1561, &l_1561, (void*)0, &l_1561, &l_1561, &l_1561, &l_1561}, {&l_1561, &l_1561, &l_1561, (void*)0, &l_1561, &l_1561, &l_1561, &l_1561}};
    int ****l_1594 = &g_382[1];
    unsigned short l_1595 = 0x829CL;
    int l_1606 = 0L;
    char l_1608 = 0x2DL;
    int l_1634 = 0x92BE8D51L;
    char l_1650 = (-10L);
    unsigned short l_1652 = 0xDD8FL;
    unsigned short l_1679 = 65527UL;
    unsigned l_1695[9][8] = {{0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}, {0UL, 0UL, 4294967295UL, 4294967288UL, 4294967286UL, 4294967288UL, 1UL, 8UL}};
    int l_1708 = 3L;
    int *l_1712 = &l_1249;
    int l_1719[10][10] = {{(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}, {(-2L), (-10L), 0xD3C12FBFL, 0L, 9L, 0L, 0xC4810C9EL, 0x360423F3L, 0L, 0xCA2E3CBBL}};
    char l_1721[8][6][4] = {{{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}, {{0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}, {0xD8L, (-8L), (-1L), 0x16L}}};
    int l_1722[3][10][5] = {{{0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}}, {{0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}}, {{0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}, {0xF4463617L, 0xF4463617L, 0x0084C192L, 0xF4463617L, 0xF4463617L}}};
    int ***l_1735 = &g_137;
    int *l_1766[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1766[i] = &g_205;
    if ((safe_lshift_func_int16_t_s_s(g_4, 15)))
    {
        int *l_5 = (void*)0;
        int *l_6[1][3][8] = {{{&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7, &g_7}}};
        char **l_1102 = &g_164;
        char l_1116[8] = {0x22L, 0x24L, 0x22L, 0x24L, 0x22L, 0x24L, 0x22L, 0x24L};
        int *l_1157[2];
        int ****l_1160 = &g_382[0];
        int l_1163 = 0L;
        unsigned *l_1173 = &g_1114;
        short l_1254 = 0xCEA5L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1157[i] = &g_205;
        g_8 = (g_7 = 0x08F8256AL);
        for (g_8 = 0; (g_8 < 38); ++g_8)
        {
            unsigned short l_19 = 5UL;
            int *l_601 = &g_7;
            int **l_602[3];
            unsigned l_1146 = 0x591F7121L;
            int i;
            for (i = 0; i < 3; i++)
                l_602[i] = &g_312;
        }
        if (func_34(l_1157[0], func_50(g_821, ((((*l_1132) = (safe_add_func_uint16_t_u_u((&g_338 != ((*l_1160) = &g_338)), (safe_add_func_uint16_t_u_u(g_1134, l_1163))))) && g_133) >= 0xB905L), (*g_339), (*g_339), (*g_218)), g_4))
        {
            unsigned short l_1164 = 65532UL;
            int **l_1167 = &g_46[4][0][2];
            int *l_1168 = &l_1163;
            short *l_1172 = &g_4;
            unsigned **l_1199 = &l_1173;
            int l_1202 = 1L;
            if ((l_1164 < (((safe_rshift_func_uint16_t_u_s(func_34(((*l_1167) = (l_1093[4][1][2] = (void*)0)), l_1168, l_1169), 11)) <= ((*l_1172) = (g_1170[0] == &g_1171[3]))) && (~((*g_603) != (*l_1168))))))
            {
                unsigned **l_1174 = &l_1173;
                int l_1183[4][7] = {{(-2L), 0x74131EFBL, (-2L), 0x5ED45A8CL, 0x728E64E4L, 4L, 0L}, {(-2L), 0x74131EFBL, (-2L), 0x5ED45A8CL, 0x728E64E4L, 4L, 0L}, {(-2L), 0x74131EFBL, (-2L), 0x5ED45A8CL, 0x728E64E4L, 4L, 0L}, {(-2L), 0x74131EFBL, (-2L), 0x5ED45A8CL, 0x728E64E4L, 4L, 0L}};
                unsigned char *l_1184 = &g_587;
                int ***l_1191 = (void*)0;
                int i, j;
                (*g_231) = (((*l_1174) = l_1173) != &g_316);
                (*g_312) = (safe_lshift_func_int8_t_s_u((((*l_1168) && (safe_mod_func_uint32_t_u_u(((*g_218) = (0xF6L == ((*l_1184) = ((*g_603) = ((safe_lshift_func_int8_t_s_u((*g_164), 4)) < (safe_lshift_func_int16_t_s_s((*l_1168), l_1183[2][6]))))))), ((safe_lshift_func_int8_t_s_s(func_14((safe_add_func_uint8_t_u_u(g_893, (*g_164))), &l_1183[2][6], (0UL > 0x5AC3L), &l_1163), l_1189)) || g_1190)))) & (*g_302)), 2));
                g_137 = &l_6[0][2][2];
            }
            else
            {
                int l_1201 = (-1L);
                int l_1208 = 0x92BE093CL;
                int *l_1212 = &g_92[3][9];
                for (g_278 = (-9); (g_278 <= 30); g_278++)
                {
                    unsigned short l_1198 = 1UL;
                    int *l_1200 = &g_575[0];
                    int l_1203 = 0L;
                    char l_1213 = 0x4AL;
                    for (g_4 = 22; (g_4 <= (-24)); g_4--)
                    {
                        return g_8;
                    }
                    if ((((*l_1168) > (((safe_sub_func_int32_t_s_s(l_1198, (*l_1168))) < (((&l_1173 == l_1199) == (func_34(func_50(func_34((l_1200 = (*l_1167)), &l_25, l_1201), l_1198, l_1198, (**g_338), (*g_218)), &l_1163, l_1198) > l_1202)) ^ 4294967286UL)) == 0xF5L)) && l_1201))
                    {
                        unsigned l_1207 = 5UL;
                        unsigned short *l_1211 = &g_262[3];
                        (*l_1168) = ((*g_312) = 0x8A56C645L);
                        (*g_302) = ((((l_1203 = l_1201) > (((*g_312) & (((*l_1168) <= 0x6549L) > 0x25L)) > l_1204)) != 0x7C54L) <= (*l_1168));
                        (*g_231) = (*g_231);
                        (*g_231) = 0xB570B51BL;
                    }
                    else
                    {
                        (*l_1212) = l_1213;
                    }
                }
                (*l_1167) = &l_1163;
            }
            return g_7;
        }
        else
        {
            char l_1216[6][5][3] = {{{(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}}, {{(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}}, {{(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}}, {{(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}}, {{(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}}, {{(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}, {(-1L), (-1L), 0x0DL}}};
            int l_1217 = 3L;
            int l_1240 = 0x609BEF51L;
            int *****l_1260 = &g_1171[3];
            int i, j, k;
            for (g_145 = 17; (g_145 > 12); g_145 = safe_sub_func_uint8_t_u_u(g_145, 9))
            {
                unsigned l_1220 = 7UL;
                int *l_1224 = &g_205;
                l_1217 = ((*g_231) = l_1216[0][0][0]);
                for (l_1204 = 0; (l_1204 < 37); l_1204 = safe_add_func_int8_t_s_s(l_1204, 1))
                {
                    return g_893;
                }
                l_1220 = (l_1216[3][2][1] ^ l_1217);
                for (l_1220 = 0; (l_1220 <= 49); l_1220 = safe_add_func_int16_t_s_s(l_1220, 4))
                {
                    unsigned short l_1223 = 0xAF76L;
                    int **l_1225 = &g_231;
                    for (g_108 = 0; (g_108 <= 3); g_108 += 1)
                    {
                        int i, j, k;
                        if (l_1223)
                            break;
                        g_46[(g_108 + 3)][g_108][(g_108 + 1)] = (void*)0;
                        (*g_231) = 1L;
                    }
                    (*l_1225) = l_1224;
                    if ((l_1217 == ((**l_1225) | (((**l_1225) <= ((***g_162) >= ((*g_603) = l_1216[4][0][0]))) || ((((*l_1224) < (safe_mod_func_int16_t_s_s((g_262[1] == ((safe_add_func_int8_t_s_s(0xB5L, (safe_add_func_uint32_t_u_u((!(safe_mod_func_uint8_t_u_u(0UL, (**l_1225)))), (**l_1225))))) < 0x82D3L)), 1UL))) <= (*g_603)) & 0xA65F2E17L)))))
                    {
                        short *l_1234 = (void*)0;
                        int l_1236[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1236[i] = (-1L);
                        (*l_1225) = &l_1163;
                        (*l_1225) = func_50((&g_206 != l_1234), g_1235, (*l_1224), l_1216[0][0][0], (*g_218));
                        return l_1236[0];
                    }
                    else
                    {
                        int *l_1237 = &l_25;
                        (*l_1225) = l_1237;
                        (*l_1225) = func_50(((*l_1132) = ((((*g_302) = (l_1216[0][0][0] || 0x49E9A986L)) < (*g_231)) & (safe_lshift_func_int8_t_s_s(0x51L, 2)))), (**l_1225), ((void*)0 != g_1025), (**g_338), l_1240);
                        return g_92[3][9];
                    }
                }
            }
lbl_1245:
            for (g_8 = 0; (g_8 != 32); g_8 = safe_add_func_uint8_t_u_u(g_8, 9))
            {
                for (g_4 = 4; (g_4 == (-18)); --g_4)
                {
                    return g_206;
                }
                if (g_145)
                    goto lbl_1245;
                return l_1240;
            }
            for (g_205 = 14; (g_205 <= 17); ++g_205)
            {
                unsigned char l_1248 = 0xEEL;
                int l_1250 = (-3L);
                unsigned l_1255 = 0x67BA4288L;
                int *l_1256 = &l_1115;
                unsigned char l_1257 = 1UL;
                if ((l_1216[0][1][0] & l_1248))
                {
                    unsigned char l_1253 = 0x6BL;
                    int ******l_1261 = &g_1170[0];
                    int l_1264 = 0x3BB30CE7L;
                    l_1256 = func_50(l_1249, (((*g_218) = l_1248) == (0L ^ ((0L ^ 0xF29A5139L) | (l_1250 = (&g_940[0][1][1] != (void*)0))))), ((*g_339) = (func_14(l_1248, func_50((safe_rshift_func_uint8_t_u_s((*g_603), 6)), l_1253, l_1254, l_1255, l_1253), l_1253, l_1256) != l_1216[0][0][0])), (*l_1256), g_4);
                    if (l_1257)
                        break;
                    l_1264 = (safe_mod_func_uint16_t_u_u((((((*l_1261) = l_1260) != l_1262) | (func_14(g_262[1], (l_6[0][2][5] = func_50((*l_1256), g_278, l_1216[0][0][0], l_1240, (*g_218))), l_1263, &l_1115) >= l_1216[4][2][2])) & g_908), 65531UL));
                }
                else
                {
                    int *l_1266 = &l_1249;
                    char l_1279 = 0x10L;
                    unsigned char l_1282 = 8UL;
                    l_1266 = l_1265;
                    if ((*g_231))
                    {
                        unsigned short l_1272 = 0x4836L;
                        char *l_1276[5];
                        unsigned short *l_1278 = &g_262[1];
                        int **l_1280 = &l_5;
                        int **l_1281 = &g_46[4][0][2];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1276[i] = &l_1116[6];
                        (*l_1281) = ((*l_1280) = func_50(l_1216[0][0][0], ((*l_1278) = ((*l_1132) = (((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(l_1240)), (safe_mod_func_uint8_t_u_u(((*g_603) || l_1272), (safe_rshift_func_int8_t_s_s((***g_162), (g_1277 = (l_1217 = (((func_56(l_1217, l_1216[4][3][1], l_1216[2][2][0], &l_25) == (*g_603)) == (*g_218)) && l_1275))))))))) >= (*g_312)) <= 0x859DC941L))), l_1279, l_1272, l_1216[0][0][0]));
                        if ((*g_302))
                            continue;
                        (*l_1256) = l_1282;
                    }
                    else
                    {
                        int l_1285 = 5L;
                        char l_1288[5] = {0x6DL, (-1L), 0x6DL, (-1L), 0x6DL};
                        int i;
                        l_1288[1] = (safe_lshift_func_uint16_t_u_s(((((0L == l_1240) <= (l_1217 || l_1285)) != (l_1256 == (void*)0)) <= l_1285), (l_1240 || ((safe_add_func_int8_t_s_s(((void*)0 == &g_426), (*g_603))) | 6L))));
                        if ((*g_302))
                            break;
                        (*l_1256) = 0x3A5DCD5AL;
                    }
                }
                (*l_1256) = 1L;
                return g_1235;
            }
            return g_92[3][9];
        }
    }
    else
    {
        unsigned short ***l_1293 = &g_653;
        unsigned short ****l_1294 = &l_1293;
        short *l_1295 = &g_4;
        int *****l_1296 = &g_1171[3];
        short *l_1299[3];
        int l_1300 = 6L;
        char *l_1303 = &g_1156[0][6][0];
        int *l_1307[10] = {&l_1300, &l_1300, &g_1134, &l_1300, &l_1300, &g_1134, &l_1300, &l_1300, &g_1134, &l_1300};
        int l_1325[9][9] = {{0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}, {0x9C5EFB52L, 0x2EB43207L, (-1L), 0x5715E7BAL, (-1L), 0x2EB43207L, 0x9C5EFB52L, (-9L), 1L}};
        int l_1330 = 5L;
        int *l_1344 = &g_205;
        int *l_1346 = (void*)0;
        unsigned l_1356 = 4294967290UL;
        unsigned short l_1389 = 0x0E43L;
        unsigned **l_1403 = &g_218;
        unsigned char **l_1415[2][9] = {{&g_603, (void*)0, &g_603, (void*)0, &g_603, (void*)0, &g_603, (void*)0, &g_603}, {&g_603, (void*)0, &g_603, (void*)0, &g_603, (void*)0, &g_603, (void*)0, &g_603}};
        unsigned l_1457 = 0x4D117EE2L;
        int l_1465[10];
        int l_1495[7] = {0x3D7ECD36L, 0x46236E0CL, 0x3D7ECD36L, 0x46236E0CL, 0x3D7ECD36L, 0x46236E0CL, 0x3D7ECD36L};
        char l_1533 = 0xDAL;
        unsigned short l_1567 = 0UL;
        int l_1609 = (-2L);
        unsigned l_1613 = 1UL;
        unsigned l_1619 = 0UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1299[i] = (void*)0;
        for (i = 0; i < 10; i++)
            l_1465[i] = 0x974D1131L;
        if ((safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((g_568 = &g_653) != ((*l_1294) = l_1293)), ((*l_1303) = ((*g_164) = (((*l_1295) = 0xF1EBL) == ((l_1296 == &g_1171[1]) | ((safe_mod_func_int16_t_s_s((g_1156[2][5][0] != (l_1300 = (g_1025 == g_1025))), (safe_lshift_func_uint8_t_u_s((*g_603), (*g_164))))) <= 65535UL))))))) && 0UL), l_1304)))
        {
            (*g_312) = (*g_312);
        }
        else
        {
            unsigned short l_1311 = 0x88A1L;
            int l_1329[8] = {1L, 0xC1AB326EL, 1L, 0xC1AB326EL, 1L, 0xC1AB326EL, 1L, 0xC1AB326EL};
            unsigned l_1349 = 0x9D73B87CL;
            int *l_1362 = &l_1300;
            unsigned l_1390 = 0x0491045AL;
            int *l_1394 = &g_1134;
            unsigned char l_1421[6][2];
            int *l_1484 = &g_1134;
            int **l_1485 = &g_339;
            char l_1501 = 1L;
            unsigned short l_1552 = 0x7F16L;
            unsigned short l_1556[1];
            unsigned char l_1557 = 1UL;
            char l_1579[10] = {(-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L)};
            unsigned short **l_1605 = &g_131;
            unsigned short l_1607 = 0xE0CEL;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1421[i][j] = 0x9AL;
            }
            for (i = 0; i < 1; i++)
                l_1556[i] = 0x131EL;
            for (g_821 = 0; (g_821 != (-7)); --g_821)
            {
                char *****l_1314 = &g_940[0][1][1];
                int l_1326[6][6][7] = {{{(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}}, {{(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}}, {{(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}}, {{(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}}, {{(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}}, {{(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}, {(-1L), 0xD9576903L, (-1L), 0x69A49A7BL, 0xD9576903L, 0x9BF9779BL, 0xD9576903L}}};
                int *l_1348 = &l_1329[2];
                int i, j, k;
                l_1093[3][4][3] = l_1307[8];
                for (g_1235 = 0; (g_1235 >= 8); g_1235 = safe_add_func_uint16_t_u_u(g_1235, 5))
                {
                    int **l_1310[8][7][4] = {{{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}, {{&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}, {&l_1307[8], &g_312, &g_302, &l_1307[8]}}};
                    char *****l_1315 = &g_940[3][1][5];
                    int i, j, k;
                    g_312 = &l_1300;
                    if (l_1311)
                    {
                        int l_1318 = (-1L);
                        int *l_1328 = (void*)0;
                        unsigned char *l_1334 = &l_1304;
                        unsigned char l_1337[3][9] = {{0xF7L, 251UL, 5UL, 5UL, 251UL, 0xF7L, 251UL, 5UL, 5UL}, {0xF7L, 251UL, 5UL, 5UL, 251UL, 0xF7L, 251UL, 5UL, 5UL}, {0xF7L, 251UL, 5UL, 5UL, 251UL, 0xF7L, 251UL, 5UL, 5UL}};
                        int i, j;
                        l_1331[1] = func_50((l_1329[5] = ((((safe_lshift_func_int8_t_s_s(((*g_312) != (l_1314 != (l_1315 = (void*)0))), 1)) < (-1L)) > 2L) == ((safe_add_func_int8_t_s_s((l_1318 & (*g_218)), (safe_lshift_func_uint16_t_u_s((l_1326[5][4][4] < 0L), 7)))) | 0x4032L))), l_1330, (**g_338), l_1311, (*g_218));
                        l_1328 = l_1344;
                    }
                    else
                    {
                        int *l_1345 = (void*)0;
                        short l_1347[6][8] = {{(-1L), 0xB453L, 0x1D2DL, 1L, 0xA498L, 8L, 1L, (-1L)}, {(-1L), 0xB453L, 0x1D2DL, 1L, 0xA498L, 8L, 1L, (-1L)}, {(-1L), 0xB453L, 0x1D2DL, 1L, 0xA498L, 8L, 1L, (-1L)}, {(-1L), 0xB453L, 0x1D2DL, 1L, 0xA498L, 8L, 1L, (-1L)}, {(-1L), 0xB453L, 0x1D2DL, 1L, 0xA498L, 8L, 1L, (-1L)}, {(-1L), 0xB453L, 0x1D2DL, 1L, 0xA498L, 8L, 1L, (-1L)}};
                        int i, j;
                        l_1346 = l_1345;
                        (*g_302) = l_1347[4][6];
                        l_1348 = &l_1326[0][3][0];
                        (*g_231) = l_1349;
                    }
                }
                if ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((func_14((*l_1348), &l_1329[7], l_1349, &g_7) >= ((***g_162) = (***g_162))) > (((*g_218) = ((0x9CL < ((((safe_mod_func_uint16_t_u_u(l_1349, g_205)) | 0x0E37L) | 1UL) < 0x74C1L)) || l_1356)) == (*l_1344))) >= 0x03BF881BL), l_1329[7])) != (*l_1348)), 15)))
                {
                    for (l_1327 = (-23); (l_1327 <= 7); l_1327 = safe_add_func_uint16_t_u_u(l_1327, 3))
                    {
                        int l_1359 = 0x971E5088L;
                        return l_1359;
                    }
                    return l_1329[4];
                }
                else
                {
                    int l_1360[3][6][4] = {{{(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}}, {{(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}}, {{(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}, {(-1L), 0L, 0x5EAC5248L, 0xCD8BCF80L}}};
                    int l_1361 = 0L;
                    unsigned short l_1365 = 65535UL;
                    int i, j, k;
                    if (((l_1360[2][1][3] < (!((*l_1295) = (l_1360[2][1][3] >= (!func_14((+l_1361), &l_25, (*l_1348), (l_1362 = (void*)0))))))) != ((safe_rshift_func_uint8_t_u_u((((void*)0 == &g_1171[2]) < (*l_1348)), l_1365)) & l_1329[5])))
                    {
                        (*l_1344) = (*g_231);
                    }
                    else
                    {
                        int **l_1366 = &g_46[1][1][5];
                        (*l_1366) = &l_1329[5];
                        l_1361 = ((*g_312) = ((safe_lshift_func_uint8_t_u_s((((~((&l_1296 != &g_1170[0]) <= ((l_1361 < (~(safe_lshift_func_int16_t_s_u((-6L), 10)))) != (*g_218)))) | ((+(safe_lshift_func_int8_t_s_s(0x2FL, 3))) == (*g_603))) & (l_1360[2][1][0] > ((*g_603) || (*l_1348)))), 0)) > 0xBAL));
                    }
                    if ((*g_231))
                        break;
                    for (g_125 = 0; (g_125 >= (-26)); g_125 = safe_sub_func_int16_t_s_s(g_125, 6))
                    {
                        (*g_231) = (safe_add_func_uint8_t_u_u(l_1360[2][1][3], (-1L)));
                    }
                }
            }
        }
        for (l_1330 = 7; (l_1330 != 16); l_1330++)
        {
            int *l_1633[2][6];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1633[i][j] = &g_92[3][9];
            }
            l_1633[0][5] = (void*)0;
        }
    }
    if (l_1634)
    {
        int *l_1635 = (void*)0;
        int **l_1636 = (void*)0;
        int l_1639 = 0x3CD5EB91L;
        short ****l_1640[8][3][2] = {{{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}, {{&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}, {&l_1560[2][1], &l_1560[2][2]}}};
        unsigned char *l_1648[8] = {&l_1304, (void*)0, &l_1304, (void*)0, &l_1304, (void*)0, &l_1304, (void*)0};
        unsigned short l_1649[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1649[i] = 0UL;
        l_1093[4][1][2] = l_1635;
        (*g_1534) = (((safe_rshift_func_uint16_t_u_u(l_1639, 14)) >= (((*g_1629) & ((&g_1628 == (g_1641 = (void*)0)) >= (((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((*g_218), ((((g_1190 = (**g_1628)) > ((safe_mul_func_uint8_t_u_u((*g_603), ((g_1277 = (*g_603)) < (l_1639 == l_1649[0])))) | (-1L))) > 0x1656A5B6L) == l_1650))), (*g_1629))) ^ (*g_164)) && (*g_218)))) & (*g_218))) | (*g_603));
        (*g_231) = (l_1652 = g_1651);
    }
    else
    {
        int l_1653 = 0xDB910A82L;
        unsigned char l_1672[2][6] = {{0xBFL, 0x76L, 0xBFL, 0x76L, 0xBFL, 0x76L}, {0xBFL, 0x76L, 0xBFL, 0x76L, 0xBFL, 0x76L}};
        unsigned char l_1677 = 255UL;
        short l_1680 = 0L;
        int *l_1684 = &g_92[3][9];
        char **l_1710[8] = {&g_164, &g_164, &g_164, &g_164, &g_164, &g_164, &g_164, &g_164};
        int i, j;
        l_1653 = (*g_1534);
        for (g_1134 = 13; (g_1134 != 20); g_1134 = safe_add_func_uint32_t_u_u(g_1134, 5))
        {
            int *l_1656 = &l_1653;
            char ***l_1657[7] = {&g_163[4], &g_163[4], &g_163[3], &g_163[4], &g_163[4], &g_163[3], &g_163[4]};
            int *l_1660 = &g_205;
            int i;
            l_1656 = &l_1653;
        }
        for (g_145 = 0; (g_145 <= 4); g_145 += 1)
        {
            unsigned char l_1664 = 0xB7L;
            int l_1681[10][9][2] = {{{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}, {{0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}, {0x6E2F0A6CL, 0L}}};
            int *l_1683 = (void*)0;
            short l_1694 = (-10L);
            short l_1702[6][3] = {{0xF5B7L, 1L, 0x087FL}, {0xF5B7L, 1L, 0x087FL}, {0xF5B7L, 1L, 0x087FL}, {0xF5B7L, 1L, 0x087FL}, {0xF5B7L, 1L, 0x087FL}, {0xF5B7L, 1L, 0x087FL}};
            int ****l_1703 = &g_999;
            char l_1705 = 0xF3L;
            unsigned l_1709 = 4294967295UL;
            char l_1728 = 0xCCL;
            int l_1740[10] = {1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L};
            int *l_1746[5] = {&l_1740[5], &l_1740[3], &l_1740[5], &l_1740[3], &l_1740[5]};
            unsigned l_1747 = 4294967295UL;
            int *l_1754 = &l_1708;
            int i, j, k;
            for (g_4 = 1; (g_4 <= 4); g_4 += 1)
            {
                unsigned short l_1665 = 0UL;
                int *l_1676 = &l_1115;
                unsigned char l_1678 = 0x84L;
                int *l_1686 = &g_1134;
                int *l_1687 = &l_1653;
                unsigned l_1704 = 0xD48A4D55L;
                int **l_1711 = &g_46[4][2][7];
                for (g_1593 = 1; (g_1593 <= 4); g_1593 += 1)
                {
                    int l_1673 = 0L;
                    int **l_1674 = (void*)0;
                    int **l_1675 = &g_231;
                    int i;
                    for (l_1595 = 0; (l_1595 <= 4); l_1595 += 1)
                    {
                        int ***l_1661 = &g_137;
                        (*l_1661) = (void*)0;
                        if ((*g_1534))
                            break;
                        (*g_231) = ((*g_231) <= ((safe_lshift_func_int8_t_s_s((***g_162), l_1664)) != l_1653));
                    }
                    (*l_1675) = func_50(l_1665, l_1665, ((-1L) <= (&g_1171[3] == (void*)0)), (*g_339), (safe_sub_func_uint8_t_u_u((l_1664 == ((*g_231) = ((((safe_rshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((*l_1132) = (g_262[g_145] = l_1672[0][2])), (0x9C93L | 0x5C4BL))) == l_1673) ^ l_1672[0][2]), 3)) == 0xEEL) & 0xA3D25049L) < l_1664))), l_1665)));
                }
            }
        }
        if ((*l_1712))
        {
            for (g_1277 = 0; g_1277 < 10; g_1277 += 1)
            {
                for (l_25 = 0; l_25 < 10; l_25 += 1)
                {
                    l_1719[g_1277][l_25] = 0xFECE3CDDL;
                }
            }
        }
        else
        {
            int **l_1764 = (void*)0;
            int **l_1765 = &g_46[4][2][7];
            l_1684 = &l_1653;
            (*l_1765) = &l_1653;
            (*l_1684) = (*l_1684);
        }
    }
    l_1766[3] = &l_1708;
    return (**g_1628);
}







static int * func_11(int * p_12, int p_13)
{
    int l_955 = 0x62DF1EA9L;
    short *l_957 = &g_4;
    short **l_956 = &l_957;
    int l_962 = 0x6ED3D25BL;
    int *l_963 = &g_575[0];
    char l_964 = 0L;
    int **l_965 = (void*)0;
    int **l_966[4] = {&g_231, (void*)0, &g_231, (void*)0};
    int *l_972 = (void*)0;
    int l_974 = 0x30DF525BL;
    unsigned char l_988 = 0x15L;
    char ***l_1049 = &g_163[3];
    unsigned short l_1081[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1081[i] = 0x8E7EL;
    (*l_963) = ((safe_lshift_func_uint8_t_u_s(((l_955 ^ (((*l_956) = &g_893) != (void*)0)) ^ l_955), (l_962 = (((l_955 | p_13) && (safe_add_func_int16_t_s_s((((*g_218) = (~0x0F2483D9L)) != ((*g_312) = ((p_13 > ((safe_rshift_func_uint8_t_u_s(l_955, p_13)) | l_955)) > p_13))), p_13))) && (*g_312))))) & l_955);
    g_46[4][0][2] = (p_12 = p_12);
    if (((*p_12) = (*p_12)))
    {
        int ****l_969[5];
        int l_982 = 0xA7E76001L;
        char ***l_985 = &g_163[3];
        int *l_989 = &g_575[0];
        int *l_1041 = &l_982;
        int i;
        for (i = 0; i < 5; i++)
            l_969[i] = (void*)0;
        for (g_145 = 0; g_145 < 8; g_145 += 1)
        {
            for (g_108 = 0; g_108 < 4; g_108 += 1)
            {
                for (g_278 = 0; g_278 < 8; g_278 += 1)
                {
                    g_46[g_145][g_108][g_278] = &g_7;
                }
            }
        }
        if ((safe_mod_func_int32_t_s_s((*p_12), (p_13 & (&g_382[3] != l_969[0])))))
        {
            unsigned char l_970 = 1UL;
            int *l_971 = &l_962;
            unsigned l_987 = 0x424F66B3L;
            int **l_1004 = &g_339;
            int *l_1006 = &g_575[0];
            int l_1040 = 0L;
            (*p_12) = l_970;
            if (p_13)
                goto lbl_973;
lbl_973:
            l_972 = l_971;
            if (((*g_312) = l_974))
            {
                int l_978 = 0x325E895DL;
                int l_981 = 0xC83438EDL;
                int *l_990 = &g_92[3][9];
                int **l_1003 = &g_339;
                short ***l_1005 = &l_956;
                for (g_4 = 0; (g_4 >= 16); g_4 = safe_add_func_uint8_t_u_u(g_4, 1))
                {
                    int *l_977 = &g_575[0];
                    return l_977;
                }
                (*l_963) = (*p_12);
                if ((l_978 | ((*l_971) = ((safe_rshift_func_uint8_t_u_u(((l_981 = func_34(p_12, p_12, l_978)) | l_978), 2)) >= l_982))))
                {
                    int *l_991 = &l_981;
                    for (l_978 = 0; (l_978 >= (-10)); l_978--)
                    {
                        int l_986 = 8L;
                        p_12 = (l_990 = l_989);
                        (*l_963) = ((*l_989) & p_13);
                    }
                    if ((*p_12))
                    {
                        int ****l_993 = (void*)0;
                        int ***l_995 = &l_966[0];
                        int ****l_994 = &l_995;
                        g_231 = p_12;
                        if (l_982)
                            goto lbl_992;
lbl_992:
                        l_991 = p_12;
                        (*p_12) = (((*l_994) = &g_137) != (void*)0);
                        g_46[4][0][2] = p_12;
                    }
                    else
                    {
                        int *****l_1000 = &g_998;
                        g_929 = p_12;
                        (*l_991) = ((safe_rshift_func_int16_t_s_s(((((*l_1000) = g_998) == &g_999) != (*l_990)), 12)) >= 0x34L);
                        l_990 = &l_981;
                    }
                    g_929 = l_991;
                }
                else
                {
                    l_971 = p_12;
                    (*l_963) = (*p_12);
                    p_12 = l_971;
                    l_1006 = (void*)0;
                }
            }
            else
            {
                int *l_1011 = &g_92[3][9];
                int *l_1028 = &g_92[7][6];
                if ((safe_add_func_uint16_t_u_u((*l_989), 0x4AD2L)))
                {
                    int *l_1020 = &l_982;
                    unsigned char l_1034 = 8UL;
                    for (g_821 = 5; (g_821 < 16); g_821++)
                    {
                        l_1011 = (void*)0;
                    }
                    for (l_964 = 0; (l_964 > 24); l_964 = safe_add_func_int32_t_s_s(l_964, 3))
                    {
                        unsigned l_1016 = 0x91DABE06L;
                        int *l_1017 = (void*)0;
                        (*p_12) = (p_13 && ((((*l_963) = (*p_12)) <= (*l_972)) == func_14((safe_lshift_func_uint16_t_u_u(l_1016, 1)), l_1017, p_13, p_12)));
                        l_1020 = p_12;
                    }
                    if (((((safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s(p_13, (~((p_13 >= p_13) | p_13)))))) == (*g_164)) > p_13) & (*p_12)))
                    {
                        unsigned l_1033[8][2][2] = {{{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}, {{0x9DAE0E0DL, 5UL}, {0x9DAE0E0DL, 5UL}}};
                        int i, j, k;
                        l_989 = p_12;
                        p_12 = l_1028;
                        p_12 = p_12;
                    }
                    else
                    {
                        unsigned char l_1035 = 0x2AL;
                        (*l_971) = func_20((*g_218), ((*g_312) = (-1L)), l_1028, (!((l_1034 > ((*l_989) & (p_13 ^ (*g_218)))) >= l_1035)));
                        (*l_989) = func_20((((safe_rshift_func_int8_t_s_s(p_13, (~p_13))) > 65530UL) & g_575[0]), l_1035, l_1028, (*l_989));
                        (*l_972) = (+(((+((void*)0 != p_12)) && (-2L)) & (*l_1028)));
                        (*p_12) = (l_1040 > ((*g_218) = ((*l_989) > p_13)));
                    }
                }
                else
                {
                    g_46[0][3][5] = l_1041;
                }
                l_1028 = l_971;
            }
        }
        else
        {
            int *l_1042 = &l_962;
            p_12 = (l_989 = l_1042);
            (*l_963) = (safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_13, (*l_1042))), 9));
        }
    }
    else
    {
        int *l_1047 = &l_962;
        char ***l_1050 = &g_163[1];
        short ***l_1086 = &l_956;
        unsigned l_1091 = 2UL;
        for (l_974 = 0; (l_974 <= 4); l_974 += 1)
        {
            unsigned char l_1054 = 0xBDL;
            int *l_1061 = &l_962;
            short ***l_1088 = (void*)0;
            int l_1090 = 0xDA15C8ACL;
            for (g_145 = 0; (g_145 <= 3); g_145 += 1)
            {
                int i;
                p_12 = l_1047;
                for (l_988 = 0; (l_988 <= 4); l_988 += 1)
                {
                    return &g_7;
                }
                if (g_262[l_974])
                {
                    int *l_1048 = &g_575[0];
                    char l_1060[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1060[i] = 0x24L;
                    (*p_12) = 0L;
                    l_1048 = l_1048;
                    for (g_4 = 0; (g_4 <= 4); g_4 += 1)
                    {
                        char ****l_1051 = &g_286;
                        unsigned *l_1055 = (void*)0;
                        unsigned *l_1056 = (void*)0;
                        unsigned *l_1057 = (void*)0;
                        (*l_963) = (*l_1047);
                        if ((*l_1047))
                            break;
                    }
                    for (g_908 = 3; (g_908 >= 0); g_908 -= 1)
                    {
                        (*p_12) = ((void*)0 != p_12);
                    }
                }
                else
                {
                    int *l_1062 = &g_205;
                    for (l_988 = 0; (l_988 <= 4); l_988 += 1)
                    {
                        return l_1062;
                    }
                    for (g_908 = 4; (g_908 >= 0); g_908 -= 1)
                    {
                        return l_1062;
                    }
                    (*l_1061) = (*p_12);
                    for (g_7 = 7; (g_7 >= 0); g_7 -= 1)
                    {
                        int i, j;
                        g_231 = &g_92[(l_974 + 5)][(g_7 + 1)];
                        p_12 = &g_92[g_7][(l_974 + 1)];
                    }
                }
                for (g_206 = 0; (g_206 <= 4); g_206 += 1)
                {
                    int l_1066 = (-9L);
                    for (l_964 = 0; (l_964 <= 0); l_964 += 1)
                    {
                        unsigned char *l_1063 = &g_587;
                        short ****l_1087 = &l_1086;
                        unsigned short *l_1089[10][7] = {{&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_1081[0], (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
                        int *l_1092 = (void*)0;
                        int i, j;
                    }
                    if ((*p_12))
                        break;
                    if ((*p_12))
                        continue;
                }
            }
            (*l_963) = ((*l_1061) = (*p_12));
            if ((*p_12))
                break;
        }
    }
    (*p_12) = 0xE64AEEB7L;
    return &g_92[0][3];
}







static int func_14(unsigned short p_15, int * p_16, unsigned short p_17, int * p_18)
{
    int *l_873 = &g_92[8][1];
    int l_881 = 0xE8EDCA94L;
    unsigned char *l_888 = (void*)0;
    int *l_906 = &g_7;
    unsigned l_907 = 9UL;
    unsigned l_928 = 4294967290UL;
    int **l_950[10][9][2] = {{{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}, {{&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}, {&g_46[4][0][2], &g_46[2][2][5]}}};
    unsigned short *l_952[6] = {&g_262[1], &g_108, &g_262[1], &g_108, &g_262[1], &g_108};
    int i, j, k;
    for (g_709 = 0; (g_709 <= 34); g_709 = safe_add_func_int8_t_s_s(g_709, 9))
    {
        unsigned short *l_872 = &g_108;
        int **l_874 = &g_46[6][3][4];
        int l_879 = (-5L);
        unsigned short *l_880 = (void*)0;
        int *l_895 = &g_575[0];
        unsigned l_905 = 0UL;
        short l_930 = 8L;
        char ****l_938[6][7][6] = {{{&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}}, {{&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}}, {{&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}}, {{&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}}, {{&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}}, {{&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}, {&g_162, (void*)0, (void*)0, (void*)0, &g_162, (void*)0}}};
        char *****l_937 = &l_938[2][5][2];
        int ****l_941[7] = {(void*)0, (void*)0, &g_382[0], (void*)0, (void*)0, &g_382[0], (void*)0};
        int i, j, k;
        (*l_874) = l_873;
        (*l_874) = p_18;
        for (p_17 = 0; (p_17 <= 9); p_17 += 1)
        {
            int i, j;
            g_92[p_17][p_17] = (1UL | p_15);
            if ((*g_312))
                break;
            if (g_7)
                goto lbl_951;
        }
    }
    p_16 = (p_18 = &l_881);
lbl_951:
    p_18 = p_18;
    p_18 = &g_92[3][9];
    return (*l_873);
}







static unsigned short func_20(unsigned p_21, int p_22, int * p_23, int p_24)
{
    unsigned char **l_604 = &g_603;
    unsigned char *l_605 = (void*)0;
    int *l_606 = &g_575[0];
    char ***l_607 = &g_163[3];
    unsigned short l_632 = 1UL;
    unsigned l_634 = 3UL;
    unsigned short **l_652[10];
    unsigned char l_666 = 0x85L;
    unsigned l_700 = 0x4B5F1CF3L;
    short l_701 = 0x2CA6L;
    unsigned char l_708 = 0xA3L;
    unsigned l_710 = 8UL;
    int ***l_717 = &g_338;
    int ***l_719 = &g_338;
    unsigned l_759 = 1UL;
    char l_857 = 0x12L;
    unsigned short l_858[6] = {65535UL, 65535UL, 0x8E3EL, 65535UL, 65535UL, 0x8E3EL};
    int **l_859 = &g_302;
    int i;
    for (i = 0; i < 10; i++)
        l_652[i] = &g_131;
lbl_679:
    (*l_606) = ((*g_312) = (!(((*l_604) = g_603) != l_605)));
lbl_843:
    if (((void*)0 == l_607))
    {
        unsigned char l_612 = 4UL;
        unsigned short ***l_621 = (void*)0;
        unsigned short *l_630 = (void*)0;
        unsigned short *l_631[8] = {&g_108, &g_108, &g_108, &g_108, &g_108, &g_108, &g_108, &g_108};
        int l_633 = (-2L);
        int **l_654[8][8] = {{&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}, {&l_606, &g_231, &g_46[5][2][5], &g_46[4][0][2], &g_46[4][0][2], &g_231, &g_46[4][0][2], &g_46[4][0][2]}};
        int i, j;
        if (((((*l_606) = (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_612, (safe_add_func_uint16_t_u_u((*l_606), (safe_sub_func_int32_t_s_s(((*p_23) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((void*)0 == l_621), l_612)), 6))), (safe_add_func_int32_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((*l_606) <= (255UL | ((safe_sub_func_uint16_t_u_u((g_262[1] = p_24), (l_633 = l_632))) < 254UL))), l_612)) < 0UL), 0)) < l_634) && 0xA4L), p_24)))))))) != 65530UL), p_24))) ^ p_24) ^ 3L))
        {
            p_23 = &p_24;
        }
        else
        {
            int *l_635 = (void*)0;
            int **l_636 = &g_231;
            unsigned char **l_641 = &l_605;
            int *l_642 = &g_92[3][9];
            int ***l_647 = (void*)0;
            int ***l_648[6][4] = {{&g_137, &l_636, &g_137, &l_636}, {&g_137, &l_636, &g_137, &l_636}, {&g_137, &l_636, &g_137, &l_636}, {&g_137, &l_636, &g_137, &l_636}, {&g_137, &l_636, &g_137, &l_636}, {&g_137, &l_636, &g_137, &l_636}};
            int **l_649 = (void*)0;
            int i, j;
lbl_643:
            (*l_636) = l_635;
            for (l_634 = 0; (l_634 < 55); l_634++)
            {
                (*p_23) = (safe_rshift_func_uint16_t_u_u((l_641 != &g_603), p_21));
                l_642 = &l_633;
                if (p_21)
                    goto lbl_643;
                for (g_7 = (-12); (g_7 != (-17)); --g_7)
                {
                    unsigned char ***l_646 = &l_604;
                    (*l_646) = &g_603;
                    if (l_632)
                        goto lbl_843;
                    return p_22;
                }
            }
            (*l_636) = &p_22;
        }
        l_633 = ((*g_312) = (((*l_606) = l_633) <= (l_634 > (safe_rshift_func_int8_t_s_s((l_652[9] == g_653), l_634)))));
        l_606 = &p_22;
    }
    else
    {
        int l_663 = (-4L);
        short *l_699 = &g_438;
        char l_702 = 0xB3L;
        short l_725 = 0xBCD0L;
        char *l_780 = (void*)0;
        int *l_839 = &g_575[0];
        for (g_316 = 13; (g_316 <= 7); g_316--)
        {
            short l_671 = 9L;
            int l_672 = (-1L);
            int **l_682 = &g_231;
            for (g_133 = 1; (g_133 <= 4); g_133 += 1)
            {
                unsigned ***l_659 = (void*)0;
                unsigned **l_660 = &g_218;
                short *l_669 = (void*)0;
                short *l_670[4];
                int *l_677 = &l_663;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_670[i] = &g_4;
                if (((safe_add_func_int8_t_s_s((g_92[(g_133 + 4)][(g_133 + 5)] ^ (*p_23)), ((*g_603) = (*g_603)))) & (((l_660 = (void*)0) != &g_426) | (safe_lshift_func_int8_t_s_s(((p_21 >= (l_663 < (!(((l_666 || ((l_671 = (safe_rshift_func_uint16_t_u_s((l_663 >= (*p_23)), 4))) >= p_21)) ^ p_21) ^ l_672)))) && 249UL), 5)))))
                {
                    unsigned l_673 = 0x8499E377L;
                    int l_674 = 0x70B0497AL;
                    int *l_676 = &l_663;
                    int **l_675 = &l_676;
                    int l_678 = 1L;
                    int i, j;
                    g_92[(g_133 + 4)][g_133] = (((((l_673 = p_24) & (((*g_603) = (((*g_338) != ((*l_675) = &l_663)) && ((void*)0 != l_677))) && p_22)) != l_678) <= 0xFB26L) == 7L);
                    (*g_312) = l_672;
                    if (l_634)
                        goto lbl_679;
                    (*p_23) = 0x7AD83136L;
                }
                else
                {
                    return l_663;
                }
            }
            for (g_278 = 15; (g_278 < 33); g_278 = safe_add_func_uint16_t_u_u(g_278, 2))
            {
                return (*l_606);
            }
            (*l_682) = (void*)0;
        }
        if ((safe_unary_minus_func_uint8_t_u((((*g_603) <= ((safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((*l_606), 6)) >= l_701), l_702)) | (*l_606)), l_663)) < (*l_606))) <= 0x99L))))
        {
            short l_703 = 0L;
            if (((*l_606) = ((*g_218) == (*p_23))))
            {
                unsigned char l_714[2];
                int *l_724[7];
                int l_743 = 1L;
                int i;
                for (i = 0; i < 2; i++)
                    l_714[i] = 248UL;
                for (i = 0; i < 7; i++)
                    l_724[i] = &g_575[0];
                for (p_22 = (-15); (p_22 > 16); ++p_22)
                {
                    unsigned l_713 = 0x972555EFL;
                    int ****l_718 = (void*)0;
                    int l_726[4];
                    int **l_727 = &g_312;
                    int l_738 = 1L;
                    int l_744 = 0x4C75B241L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_726[i] = 6L;
                    (*p_23) = (*p_23);
                    for (g_4 = 0; (g_4 > 22); g_4++)
                    {
                        (*l_727) = func_50((*l_606), (((!0L) && (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((~p_21), (l_738 = (0x70L & (safe_lshift_func_int8_t_s_s(p_22, ((***l_607) = (safe_lshift_func_uint8_t_u_u((*g_603), (*g_603)))))))))), 13))) && (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_34(((*l_727) = &p_24), &g_575[0], p_22), l_743)), 1))), p_22, p_21, l_744);
                    }
                }
                return l_703;
            }
            else
            {
                (*l_717) = (*l_719);
            }
        }
        else
        {
            short l_762 = 0xC0F8L;
            int *l_767[9] = {&g_92[3][9], &g_7, &g_92[3][9], &g_7, &g_92[3][9], &g_7, &g_92[3][9], &g_7, &g_92[3][9]};
            int i;
            for (g_316 = (-20); (g_316 != 17); g_316++)
            {
                unsigned l_749 = 0xFF370F3BL;
                int l_754 = 0x67F373DCL;
                int l_755 = 0xB7D0CA67L;
                unsigned l_758 = 0x0BB03E40L;
                int **l_768 = &l_767[1];
                (*g_312) = (safe_add_func_int16_t_s_s((l_749 = g_262[0]), ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((!(l_754 = 0x5ADCAF45L)), (*p_23))), ((l_755 > (*g_218)) <= l_755))) ^ ((l_755 > (safe_add_func_int16_t_s_s(l_758, l_759))) != p_22))));
                for (g_438 = 0; (g_438 == (-29)); g_438--)
                {
                    int **l_763 = &l_606;
                    (*l_606) = l_762;
                    (*l_763) = &p_22;
                    for (g_4 = 0; (g_4 >= (-3)); --g_4)
                    {
                        int **l_766[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_766[i] = &g_231;
                        g_302 = ((*l_763) = &p_22);
                        return p_21;
                    }
                }
                if ((*p_23))
                {
                    l_767[1] = (void*)0;
                }
                else
                {
                    if ((*p_23))
                        break;
                }
                (*l_768) = &p_24;
            }
            for (g_4 = 0; (g_4 <= 0); g_4 += 1)
            {
                unsigned l_769 = 0x4086D202L;
                unsigned l_770 = 1UL;
                for (g_316 = 1; (g_316 <= 4); g_316 += 1)
                {
                    int *l_771 = &g_7;
                    int i;
                    g_575[g_4] = ((func_34(&p_22, (p_23 = func_50((g_163[(g_4 + 3)] == (void*)0), p_21, ((**g_338) = (((void*)0 != &g_438) & (l_769 & func_34(func_50(p_21, l_725, (**g_338), l_770, p_21), l_771, p_24)))), (*l_606), p_22)), p_24) & (*l_606)) >= p_21);
                    (*l_771) = (*p_23);
                }
                return l_769;
            }
        }
        for (l_700 = 0; (l_700 == 56); l_700++)
        {
            int l_777 = 1L;
            char ****l_794[4][10][6] = {{{&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}}, {{&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}}, {{&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}}, {{&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}, {&g_286, &g_286, &g_162, &g_162, &g_286, &l_607}}};
            int l_824 = 0x143BB271L;
            int *l_838[7] = {(void*)0, (void*)0, &g_7, (void*)0, (void*)0, &g_7, (void*)0};
            int i, j, k;
        }
    }
    for (l_710 = (-10); (l_710 < 34); l_710 = safe_add_func_int16_t_s_s(l_710, 9))
    {
        unsigned l_848 = 4294967292UL;
        char ***l_849 = (void*)0;
        int *l_850[9] = {&g_92[3][9], &g_92[3][9], (void*)0, &g_92[3][9], &g_92[3][9], (void*)0, &g_92[3][9], &g_92[3][9], (void*)0};
        unsigned char l_856[3];
        int i;
        for (i = 0; i < 3; i++)
            l_856[i] = 255UL;
        (*p_23) = (l_848 & ((+(p_21 | (l_849 == (void*)0))) >= ((((*l_606) = func_34(l_606, l_850[1], (5UL & (*l_606)))) == p_21) != (*g_603))));
    }
    (*l_859) = l_606;
    return p_21;
}







static int * func_26(unsigned short p_27, int * p_28)
{
    unsigned l_33 = 0UL;
    int *l_588 = &g_92[4][1];
    int *l_589 = &g_575[0];
    short l_590 = 1L;
    (*p_28) = 7L;
    (*p_28) = ((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_33, p_27)), func_34((l_588 = func_38(l_33, (*p_28))), l_589, (l_590 || (((safe_rshift_func_int16_t_s_s((*l_589), 4)) >= (g_575[0] && g_575[0])) > 0x4AL))))) ^ 0L);
    return p_28;
}







static short func_34(int * p_35, int * p_36, unsigned short p_37)
{
    unsigned short l_597 = 0xC8E2L;
    int *l_600[9][1][7] = {{{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}, {{&g_92[3][9], &g_575[0], (void*)0, &g_7, &g_575[0], &g_575[0], &g_575[0]}}};
    int i, j, k;
    (*g_312) = (safe_lshift_func_uint8_t_u_s((+g_92[3][9]), 2));
    (*g_312) = (safe_add_func_uint16_t_u_u(65529UL, g_8));
    return g_92[9][3];
}







static int * func_38(unsigned p_39, int p_40)
{
    int l_43 = 0x14F16367L;
    char l_71 = 0xF1L;
    int *l_313 = &g_205;
    int *l_319 = &g_7;
    char ***l_323 = (void*)0;
    char ***l_328[4][2] = {{&g_163[3], &g_163[3]}, {&g_163[3], &g_163[3]}, {&g_163[3], &g_163[3]}, {&g_163[3], &g_163[3]}};
    short l_329[5];
    unsigned short *l_330 = &g_262[1];
    int *l_332 = (void*)0;
    int ***l_333 = (void*)0;
    unsigned l_357 = 4UL;
    int *l_360 = &g_92[9][9];
    unsigned short l_370 = 0UL;
    char ****l_397 = &g_286;
    int ****l_436 = &g_382[5];
    int *****l_485 = &l_436;
    unsigned short l_489 = 0UL;
    unsigned short ***l_545 = &g_130;
    int *l_551[8][1][9] = {{{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}, {{&g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8], &g_92[3][9], &g_92[9][8]}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_329[i] = 0xF51DL;
    if ((((void*)0 != &p_40) > (safe_add_func_uint16_t_u_u(l_43, l_43))))
    {
        int *l_45 = &g_7;
        int **l_44[6];
        int i;
        for (i = 0; i < 6; i++)
            l_44[i] = &l_45;
        g_46[4][0][2] = (void*)0;
        p_40 = p_40;
        l_313 = (g_312 = func_47(func_50(func_56((((((safe_add_func_uint8_t_u_u(l_43, g_4)) >= ((safe_sub_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(0L, (g_4 > (g_4 >= g_4)))) < (~((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(g_4, (l_43 < p_39))) >= 0x78BEA8E4L), 0x67L)) & (*l_45)))), p_39)) && g_4)) && p_39) & 0xCC99CF48L) ^ l_71), g_4, g_8, &g_7), p_40, g_8, p_40, p_40), g_4));
        g_231 = (g_46[1][3][7] = &p_40);
    }
    else
    {
        int **l_314 = &g_46[6][1][7];
        (*l_314) = func_47(&p_40, (*l_313));
        return l_313;
    }
    if (g_206)
        goto lbl_320;
lbl_320:
    for (l_43 = 0; (l_43 <= 9); l_43 += 1)
    {
        int *l_317 = (void*)0;
        for (g_125 = 0; (g_125 <= 9); g_125 += 1)
        {
            int l_315 = 5L;
            int **l_318 = &l_313;
            int i, j;
            l_317 = func_50((g_92[l_43][l_43] = g_92[l_43][l_43]), p_40, g_7, (g_316 = l_315), p_40);
            l_319 = ((*l_318) = l_317);
            (*g_302) = (**l_318);
        }
        for (g_145 = 0; (g_145 <= 4); g_145 += 1)
        {
            (*g_312) = 0x7B892A87L;
        }
    }
    if (((0x274D7577L == (safe_sub_func_int16_t_s_s(((void*)0 != l_323), ((*l_330) = ((((void*)0 != &g_131) > (-2L)) >= (((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((*l_313), 0x77EC04D9L)), l_329[0])) > p_39) | (*l_313))))))) | 0xB7AB3F35L))
    {
        int **l_331[6][5][7] = {{{&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}}, {{&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}}, {{&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}}, {{&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}}, {{&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}}, {{&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}, {&g_46[4][0][2], &g_46[4][0][2], &g_231, &l_313, &g_231, &g_231, &g_231}}};
        unsigned short **l_346[4][3][3] = {{{(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}}, {{(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}}, {{(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}}, {{(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}, {(void*)0, (void*)0, &l_330}}};
        unsigned short ***l_347 = &g_130;
        unsigned short **l_349 = &g_131;
        unsigned short ***l_348 = &l_349;
        short *l_350 = &l_329[4];
        int i, j, k;
        l_319 = &p_40;
        for (p_40 = (-24); (p_40 == 13); p_40++)
        {
            char l_341 = 0xE0L;
            for (g_316 = 26; (g_316 >= 28); g_316 = safe_add_func_int16_t_s_s(g_316, 7))
            {
                int ***l_340 = &g_338;
                (*l_340) = g_338;
            }
            if (l_341)
                break;
        }
        g_231 = func_50(((251UL > p_40) | g_278), (p_39 ^ (*g_164)), ((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((*l_347) = l_346[3][0][2]) == ((*l_348) = (void*)0)), ((*l_350) = g_262[1]))), 7UL)) < p_40), (**g_338), (*g_218));
    }
    else
    {
        char l_358[7];
        int *l_406 = &g_92[4][8];
        unsigned char l_412 = 249UL;
        char ****l_416 = &g_286;
        unsigned short **l_431 = &g_131;
        char ***l_486 = (void*)0;
        int *l_487 = &g_7;
        short *l_488 = &l_329[0];
        int *l_496 = &g_92[8][0];
        unsigned char l_497[4];
        unsigned l_498 = 9UL;
        int *l_523 = &g_7;
        short l_580 = 1L;
        int i;
        for (i = 0; i < 7; i++)
            l_358[i] = (-4L);
        for (i = 0; i < 4; i++)
            l_497[i] = 6UL;
        if ((((*l_330) = p_39) != g_206))
        {
            unsigned *l_355[4];
            int l_356 = 0x8190C90DL;
            int **l_359 = &g_46[0][2][0];
            char l_367 = (-1L);
            char ****l_401[9];
            int *l_415 = &g_92[0][6];
            unsigned **l_422 = &l_355[3];
            unsigned **l_423 = (void*)0;
            unsigned *l_425[2];
            unsigned **l_424[6];
            int ***l_427 = &g_137;
            int *l_462 = &g_205;
            unsigned char l_469[3][10] = {{0x5DL, 1UL, 0UL, 255UL, 0UL, 1UL, 0x5DL, 0x96L, 0UL, 0xB8L}, {0x5DL, 1UL, 0UL, 255UL, 0UL, 1UL, 0x5DL, 0x96L, 0UL, 0xB8L}, {0x5DL, 1UL, 0UL, 255UL, 0UL, 1UL, 0x5DL, 0x96L, 0UL, 0xB8L}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_355[i] = &g_145;
            for (i = 0; i < 9; i++)
                l_401[i] = &g_162;
            for (i = 0; i < 2; i++)
                l_425[i] = &l_357;
            for (i = 0; i < 6; i++)
                l_424[i] = &l_425[0];
            (*l_313) = (safe_sub_func_int8_t_s_s(l_357, p_39));
            if ((((*l_330) = ((~l_358[5]) && ((l_360 = &p_40) == &p_40))) <= (safe_lshift_func_uint16_t_u_u(0xD04DL, 15))))
            {
                (*l_313) = (safe_lshift_func_int8_t_s_s(((p_40 & 4294967295UL) <= (*g_218)), 3));
                (*l_360) = ((l_367 = (safe_sub_func_uint32_t_u_u((p_40 && 0x4C4D434EL), 0UL))) && (safe_mod_func_uint16_t_u_u((l_370 && g_206), p_39)));
            }
            else
            {
                int ***l_381 = &g_338;
                int ****l_380[3][8][4] = {{{&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}}, {{&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}}, {{&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}, {&l_381, &l_381, &l_381, &l_381}}};
                int l_383 = (-10L);
                int *l_384 = &g_92[3][9];
                int i, j, k;
                for (g_206 = 0; (g_206 <= 24); g_206++)
                {
                    int *l_375 = &g_92[3][9];
                    if ((p_40 == (((*g_164) = (3UL || (*g_302))) <= (safe_mod_func_uint32_t_u_u(p_40, p_39)))))
                    {
                        (*l_359) = l_375;
                    }
                    else
                    {
                        return l_375;
                    }
                }
                if (((safe_sub_func_int16_t_s_s(p_39, ((l_358[5] >= (*g_312)) >= l_358[5]))) == p_39))
                {
                    (*l_359) = &p_40;
                    (*l_384) = 0L;
                    for (g_316 = 0; (g_316 <= 1); g_316 += 1)
                    {
                        int *l_385 = &g_92[3][9];
                        int i;
                        (*l_359) = &p_40;
                    }
                }
                else
                {
                    int *l_408[8][7][4] = {{{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}, {{&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}, {&l_356, &g_205, &l_356, (void*)0}}};
                    int i, j, k;
                    for (p_39 = 1; (p_39 <= 4); p_39 += 1)
                    {
                        char *****l_398 = &l_397;
                        char ****l_400[2];
                        char *****l_399 = &l_400[0];
                        unsigned char *l_404 = &g_278;
                        short l_405 = 0xD176L;
                        char l_407[3];
                        int **l_409 = &g_302;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_400[i] = (void*)0;
                        for (i = 0; i < 3; i++)
                            l_407[i] = 0xE2L;
                        (*l_359) = l_408[5][5][0];
                        (*l_409) = ((*l_359) = &l_383);
                        (*l_360) = ((*g_302) = (*l_406));
                        (*g_302) = 1L;
                    }
                    if ((*l_313))
                    {
                        unsigned char l_413 = 0xC2L;
                        unsigned char *l_414 = &g_278;
                        (*g_312) = (*g_312);
                        (*l_359) = &g_92[3][9];
                        l_415 = ((*l_359) = &l_383);
                        l_408[3][0][1] = func_50((0xB7L <= p_39), p_40, ((((void*)0 == &g_163[1]) && (((*l_384) ^ g_145) >= ((l_401[0] = l_416) != (void*)0))) || 0L), (*l_384), (*l_384));
                    }
                    else
                    {
                        return &g_205;
                    }
                    for (g_7 = 4; (g_7 >= 0); g_7 -= 1)
                    {
                        int *l_417 = &g_92[5][1];
                        l_417 = &p_40;
                    }
                    return &g_92[8][4];
                }
            }
            (*l_406) = (safe_mod_func_uint32_t_u_u((*g_218), ((safe_add_func_int8_t_s_s((*l_406), p_39)) || 0x0880L)));
            if ((((*l_427) = &g_302) == &l_415))
            {
                return (*g_137);
            }
            else
            {
                unsigned l_442 = 1UL;
                int **l_451 = &g_339;
                char *l_456 = &l_367;
                for (g_278 = 0; (g_278 >= 15); ++g_278)
                {
                    unsigned char l_430 = 0xEBL;
                    unsigned short ***l_432 = &g_130;
                    if (l_430)
                        break;
                    (*l_432) = l_431;
                }
                (*g_137) = l_406;
                if (p_40)
                {
                    unsigned l_433[8] = {4294967286UL, 4294967286UL, 0x7BB5EA8DL, 4294967286UL, 4294967286UL, 0x7BB5EA8DL, 4294967286UL, 4294967286UL};
                    unsigned char *l_434 = (void*)0;
                    unsigned char *l_435 = &g_278;
                    int *****l_437 = &l_436;
                    int *l_439 = (void*)0;
                    int *l_440 = (void*)0;
                    int *l_441 = &l_43;
                    int i;
                    (*g_137) = func_50(p_39, (l_433[3] = 4UL), ((*l_441) = ((**g_338) = (g_206 != (((*l_435) = p_40) < (((+0x87L) && (((*l_437) = l_436) != &g_382[1])) | ((*l_330) = (g_438 > ((*g_164) = ((((*g_312) = 3L) | 0xD95A6424L) || 0x16L))))))))), p_39, (*g_218));
                    (**l_427) = func_50(p_39, l_442, ((((~(-1L)) | ((**g_137) = p_40)) == (((void*)0 != &g_145) | g_316)) != (((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(p_39, (~((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((l_451 != l_451), g_92[3][9])) && p_39), p_39)) != p_39)))), 0)) > g_92[3][9]) < l_433[6])), p_40, (*l_406));
                    if (((*g_302) = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((((void*)0 != l_456) & 0x535241B3L), 6)), 4)) == l_442)))
                    {
                        (*g_137) = func_50(p_40, l_433[5], ((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(0x80L)), g_125)) == l_433[3]), p_39, ((*g_218) = (safe_add_func_int8_t_s_s(l_442, 0xC8L))));
                        p_40 = (!((**g_137) = 0x5A442822L));
                        (**l_427) = l_462;
                    }
                    else
                    {
                        unsigned short l_463 = 0xBB65L;
                        int l_468[2][9][4] = {{{7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}}, {{7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}, {7L, 0x241724FFL, 0x241724FFL, 7L}}};
                        int i, j, k;
                        (*l_406) = ((*l_313) <= p_40);
                    }
                }
                else
                {
                    (**l_427) = &p_40;
                }
            }
        }
        else
        {
            unsigned *l_476 = &l_357;
            for (g_438 = 14; (g_438 > 11); g_438 = safe_sub_func_int32_t_s_s(g_438, 4))
            {
                int *l_472 = &g_92[3][9];
                for (g_108 = 0; (g_108 <= 3); g_108 += 1)
                {
                    int **l_473 = (void*)0;
                    int **l_474 = &l_406;
                    for (l_412 = 0; l_412 < 5; l_412 += 1)
                    {
                        g_163[l_412] = &g_164;
                    }
                    (*l_474) = l_472;
                    for (g_205 = 3; (g_205 >= 0); g_205 -= 1)
                    {
                        int i, j, k;
                        (**l_474) = (**l_474);
                        (*l_472) = (*g_312);
                        return &g_7;
                    }
                }
                for (p_39 = 0; (p_39 <= 1); p_39 += 1)
                {
                    int **l_475 = &l_332;
                    int i;
                    (*l_475) = &p_40;
                    (*l_360) = l_358[p_39];
                }
                g_302 = l_472;
                g_312 = l_406;
            }
            (*l_319) = ((*l_406) == ((*l_476) = ((*g_218) = (*l_313))));
            l_319 = (void*)0;
        }
        g_312 = func_50((p_40 && (safe_lshift_func_int8_t_s_u(((*l_406) == (*l_406)), 4))), (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*l_488) = (safe_mod_func_int8_t_s_s(((*g_164) = ((((*l_487) = ((&l_436 != l_485) < (((*l_416) = (void*)0) != l_486))) >= (*l_406)) != (+(p_40 <= (*l_360))))), p_39))), g_8)), (*l_406))), (*l_360), p_39, (*g_218));
        if (l_489)
        {
            short l_492 = 0x4910L;
            int *l_495[1][1][5] = {{{&g_7, &g_205, &g_7, &g_205, &g_7}}};
            int i, j, k;
            p_40 = ((*l_406) = ((p_39 <= ((safe_lshift_func_uint8_t_u_u(g_108, g_316)) <= l_498)) ^ p_40));
            p_40 = (*g_312);
        }
        else
        {
            int *l_510[6];
            int *l_532[6] = {&g_7, &g_92[3][9], &g_7, &g_92[3][9], &g_7, &g_92[3][9]};
            int l_561[3][6] = {{0x95E7A7E1L, 0x8C53145DL, 0x95E7A7E1L, 0x8C53145DL, 0x95E7A7E1L, 0x8C53145DL}, {0x95E7A7E1L, 0x8C53145DL, 0x95E7A7E1L, 0x8C53145DL, 0x95E7A7E1L, 0x8C53145DL}, {0x95E7A7E1L, 0x8C53145DL, 0x95E7A7E1L, 0x8C53145DL, 0x95E7A7E1L, 0x8C53145DL}};
            int i, j;
            for (i = 0; i < 6; i++)
                l_510[i] = &g_7;
            for (g_7 = (-17); (g_7 == (-5)); ++g_7)
            {
                int **l_501 = &l_496;
                (*l_501) = &p_40;
                (*l_501) = (void*)0;
                (*l_406) = (safe_unary_minus_func_uint8_t_u(0x82L));
            }
            for (g_125 = 24; (g_125 >= 18); g_125--)
            {
                unsigned l_513 = 6UL;
                unsigned char *l_535[4];
                unsigned char **l_534 = &l_535[0];
                int l_549[9][7] = {{9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}, {9L, (-8L), 9L, 0x4ACEC410L, 0x0C897231L, 0xBBD25CC4L, 0xA2A1337FL}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_535[i] = &g_278;
            }
lbl_581:
            for (l_357 = 0; (l_357 > 35); l_357 = safe_add_func_uint16_t_u_u(l_357, 1))
            {
                (*l_360) = 0L;
            }
            for (l_412 = 0; (l_412 > 39); l_412 = safe_add_func_uint32_t_u_u(l_412, 2))
            {
                int l_573 = 7L;
                int l_574 = 7L;
                unsigned l_586 = 0xC1A0B6E5L;
                if ((((safe_sub_func_int8_t_s_s((p_39 <= g_8), 0x7EL)) | 0xB687F3F6L) || (*g_218)))
                {
                    int **l_562[6][4][8] = {{{&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}}, {{&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}}, {{&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}}, {{&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}}, {{&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}}, {{&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}, {&l_487, (void*)0, &l_510[4], &g_46[5][0][3], &g_231, &l_532[4], &l_487, &l_319}}};
                    int i, j, k;
                    l_496 = &p_40;
                }
                else
                {
                    unsigned short ****l_567[4] = {&l_545, &l_545, &l_545, &l_545};
                    unsigned char *l_569 = (void*)0;
                    unsigned char *l_570 = &l_497[3];
                    unsigned char *l_571 = &g_278;
                    int l_572 = (-10L);
                    int i;
                    if (p_39)
                        break;
                    if ((p_39 & (!(safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((*l_571) = ((*l_570) = ((l_545 = &g_130) == (g_568 = &g_130)))), ((*l_406) ^ ((l_572 = l_572) ^ 249UL)))), ((p_40 = (*g_231)) == (*g_218)))))))
                    {
                        if ((*g_231))
                            break;
                        g_46[4][0][2] = (void*)0;
                    }
                    else
                    {
                        (*l_487) = (1L != ((*l_406) = ((*l_397) != (*l_397))));
                    }
                    for (g_205 = 1; (g_205 <= 5); g_205 += 1)
                    {
                        int i;
                        (*l_523) = (p_40 = ((l_573 = 1L) < ((!(l_574 > (((*l_406) = ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((p_40 == (*g_218)), (-6L))), 4)) || g_133)) < l_580))) > 0xC3L)));
                        if (g_278)
                            goto lbl_581;
                        g_587 = (p_40 < ((safe_mod_func_uint16_t_u_u(((((*l_523) = (l_586 || g_7)) & p_39) && (*l_487)), p_39)) & g_262[1]));
                    }
                }
                l_574 = ((*g_302) = p_40);
            }
        }
        l_332 = &g_92[9][3];
    }
    return l_332;
}







static int * func_47(int * p_48, char p_49)
{
    unsigned char l_89 = 0x26L;
    int *l_90 = (void*)0;
    int *l_91 = &g_92[3][9];
    unsigned short **l_132 = &g_131;
    int **l_144[10] = {&g_46[4][0][2], &l_91, &g_46[4][0][2], &l_91, &g_46[4][0][2], &l_91, &g_46[4][0][2], &l_91, &g_46[4][0][2], &l_91};
    char *l_160 = &g_133;
    char **l_159 = &l_160;
    char ***l_158 = &l_159;
    unsigned l_215 = 4294967291UL;
    unsigned *l_219 = &g_145;
    int *l_260 = &g_92[2][9];
    unsigned l_305[1][5] = {{0xACCCAD14L, 2UL, 0xACCCAD14L, 2UL, 0xACCCAD14L}};
    unsigned char l_307[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_307[i] = 0xD5L;
    if (((*l_91) = ((*p_48) = (l_89 != 0x3FE2L))))
    {
        unsigned short *l_113 = &g_108;
        int l_117 = 0L;
        int l_136[5][7] = {{0x0DF3FCB1L, 0x23FB85D1L, 0x68397568L, 0x23FB85D1L, 0x0DF3FCB1L, (-1L), 0x0DF3FCB1L}, {0x0DF3FCB1L, 0x23FB85D1L, 0x68397568L, 0x23FB85D1L, 0x0DF3FCB1L, (-1L), 0x0DF3FCB1L}, {0x0DF3FCB1L, 0x23FB85D1L, 0x68397568L, 0x23FB85D1L, 0x0DF3FCB1L, (-1L), 0x0DF3FCB1L}, {0x0DF3FCB1L, 0x23FB85D1L, 0x68397568L, 0x23FB85D1L, 0x0DF3FCB1L, (-1L), 0x0DF3FCB1L}, {0x0DF3FCB1L, 0x23FB85D1L, 0x68397568L, 0x23FB85D1L, 0x0DF3FCB1L, (-1L), 0x0DF3FCB1L}};
        int **l_139 = &g_46[4][0][2];
        int i, j;
        for (l_89 = (-28); (l_89 > 49); ++l_89)
        {
            if ((*p_48))
                break;
        }
        if ((0x63BBL == 0x1335L))
        {
            short l_105[8][5] = {{(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L), (-1L), (-1L)}};
            int *l_134 = &g_7;
            int i, j;
            for (g_7 = (-27); (g_7 > 11); g_7 = safe_add_func_int8_t_s_s(g_7, 9))
            {
                int l_106 = 0xC79296E5L;
                int **l_135 = &l_91;
                int l_143[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_143[i] = 0x0A92FA66L;
            }
        }
        else
        {
            unsigned short **l_150 = &g_131;
            int l_154[4][7] = {{0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL}, {0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL}, {0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL}, {0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL, 0xD7FD4814L, 0x9FBD2CEFL}};
            char *l_156[2];
            char **l_155 = &l_156[1];
            int l_187 = 0xEBE5BDD1L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_156[i] = &g_133;
            for (g_7 = 0; (g_7 > 23); g_7++)
            {
                return p_48;
            }
            for (g_7 = 20; (g_7 >= (-26)); g_7--)
            {
                char ***l_165 = &l_155;
                int l_184 = 0xD432E6ADL;
                int *l_188 = &l_187;
                l_150 = l_132;
                for (l_117 = 0; (l_117 != (-7)); l_117--)
                {
                    short l_185 = 0xBAC2L;
                    p_48 = p_48;
                    for (p_49 = 0; (p_49 <= 4); p_49 += 1)
                    {
                        int *l_153 = &g_92[9][4];
                        return l_153;
                    }
                    if (((*l_91) = l_154[0][0]))
                    {
                        char ***l_157 = &l_155;
                        (*l_91) = (*p_48);
                        (*l_157) = l_155;
                    }
                    else
                    {
                        char ****l_161[2][2];
                        int l_166 = 0x769405CEL;
                        short l_177[1][1][7] = {{{3L, 3L, (-1L), 3L, 3L, (-1L), 3L}}};
                        unsigned *l_183[10];
                        unsigned char *l_186 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_161[i][j] = &l_158;
                        }
                        for (i = 0; i < 10; i++)
                            l_183[i] = (void*)0;
                        l_166 = ((*l_91) = (((((***l_158) = (0xF54AL & (g_145 || ((g_162 = l_158) == &g_163[3])))) == 0x38L) <= p_49) ^ (p_49 || (l_165 == l_165))));
                        l_187 = (safe_sub_func_uint8_t_u_u((l_154[0][5] = (l_154[0][0] | ((*l_91) = (((4294967295UL ^ (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((0xDF8AF388L & p_49), (safe_sub_func_uint8_t_u_u(0x75L, (l_177[0][0][1] != (safe_lshift_func_int8_t_s_u(p_49, 0))))))), ((1UL < (!(safe_lshift_func_int16_t_s_u(((((safe_unary_minus_func_uint32_t_u((l_184 = 0x3289A580L))) || 0x5B77L) && p_49) | p_49), 12)))) || l_184)))) >= l_185) <= 1L)))), 255UL));
                        return p_48;
                    }
                    l_188 = ((*l_139) = &g_7);
                }
                for (g_133 = 19; (g_133 != 22); g_133 = safe_add_func_uint8_t_u_u(g_133, 9))
                {
                    return p_48;
                }
            }
        }
    }
    else
    {
        short l_197 = 0x2BA4L;
        int *l_201[1][6];
        unsigned char *l_202 = &l_89;
        unsigned *l_203 = (void*)0;
        unsigned *l_204 = &g_145;
        unsigned **l_216 = (void*)0;
        unsigned **l_217[7][1];
        int l_220 = 0x2EB0A1AFL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_201[i][j] = &g_92[3][9];
        }
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_217[i][j] = (void*)0;
        }
        if ((g_8 | 0L))
        {
            (*p_48) = g_205;
            if (g_145)
                goto lbl_221;
            return p_48;
        }
        else
        {
            unsigned l_210 = 0x72973F10L;
            p_48 = func_50(g_206, (p_49 ^ (p_48 == (void*)0)), ((0UL != (safe_unary_minus_func_int16_t_s((l_210 | g_206)))) == (safe_sub_func_int32_t_s_s((*p_48), (((g_145 == 248UL) || (*g_164)) ^ (*p_48))))), g_7, g_92[3][9]);
        }
lbl_221:
        g_46[4][0][2] = func_50(p_49, (safe_add_func_int8_t_s_s((((*l_91) = ((*p_48) = l_215)) | (&g_145 != (l_219 = (g_218 = &g_145)))), g_108)), l_220, p_49, (g_145 = g_125));
        (*l_91) = (*p_48);
        g_46[6][0][3] = (void*)0;
    }
    if (func_56(((safe_rshift_func_uint16_t_u_s(0xC5F0L, g_145)) <= ((*l_160) = p_49)), ((void*)0 == &g_92[8][6]), p_49, p_48))
    {
        int *l_224 = &g_7;
        unsigned short *l_225 = (void*)0;
        unsigned short *l_226[9][5] = {{&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}, {&g_108, (void*)0, &g_8, &g_108, &g_8}};
        char **l_283[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_283[i] = &g_164;
lbl_236:
        for (p_49 = 0; (p_49 <= 9); p_49 += 1)
        {
            for (g_108 = 0; (g_108 <= 9); g_108 += 1)
            {
                return l_224;
            }
        }
        g_231 = (g_46[4][2][7] = func_50((4L == ((void*)0 != &g_145)), ((*l_224) = (*l_224)), p_49, (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(0L, p_49)), p_49)), p_49));
        for (g_205 = 0; (g_205 == 29); ++g_205)
        {
            return &g_7;
        }
        for (g_7 = (-10); (g_7 > (-29)); g_7 = safe_sub_func_uint16_t_u_u(g_7, 3))
        {
            unsigned short l_241[10][5][5] = {{{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}, {{0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}, {0xB08CL, 65535UL, 0xB08CL, 65535UL, 0xB08CL}}};
            unsigned l_245 = 0x700EAA7CL;
            int l_253 = (-1L);
            int *l_261 = &g_92[3][9];
            unsigned short **l_266 = &l_225;
            unsigned short **l_267 = &l_225;
            int l_282 = (-3L);
            unsigned l_301[6][2] = {{0xFB86A834L, 4294967286UL}, {0xFB86A834L, 4294967286UL}, {0xFB86A834L, 4294967286UL}, {0xFB86A834L, 4294967286UL}, {0xFB86A834L, 4294967286UL}, {0xFB86A834L, 4294967286UL}};
            int i, j, k;
            if (l_215)
                goto lbl_236;
            if ((*l_224))
            {
                int *l_254 = &l_253;
                for (g_108 = 0; (g_108 != 49); g_108++)
                {
                    int l_242 = 0x412EF527L;
                    for (l_89 = (-20); (l_89 == 25); l_89 = safe_add_func_uint8_t_u_u(l_89, 1))
                    {
                        l_241[3][1][3] = (*l_224);
                    }
                    if (((*l_91) = l_242))
                    {
                        int l_246[2][5][6] = {{{(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}}, {{(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}, {(-5L), 0xC89BE4A1L, 0x30061F07L, 0x63081A09L, (-8L), 0x9E143BA5L}}};
                        int i, j, k;
                        p_48 = func_50((safe_add_func_int32_t_s_s((l_242 = (*p_48)), ((g_205 != p_49) <= (*p_48)))), l_245, g_206, (l_246[0][0][2] = l_246[0][0][2]), l_241[1][4][4]);
                    }
                    else
                    {
                        int *l_247 = &g_92[8][0];
                        int l_252[7] = {(-7L), (-7L), (-7L), (-7L), (-7L), (-7L), (-7L)};
                        int i;
                        l_247 = (void*)0;
                        g_231 = func_50(p_49, p_49, g_145, (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_252[4] = ((g_46[3][1][1] = p_48) == l_247)), 1)), p_49)), (*l_224));
                    }
                    if (l_241[3][1][3])
                        break;
                    if ((*p_48))
                        continue;
                }
                l_253 = l_245;
                l_254 = p_48;
            }
            else
            {
                int *l_255[10][7] = {{(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}, {(void*)0, &g_7, &g_205, &g_7, &l_253, &l_253, &l_253}};
                unsigned char *l_275 = (void*)0;
                unsigned char *l_276 = &l_89;
                unsigned char *l_277 = &g_278;
                unsigned l_281 = 5UL;
                int i, j;
                for (g_205 = 9; (g_205 >= 1); g_205 -= 1)
                {
                    int l_272 = 1L;
                    int i;
                    p_48 = &l_253;
                    for (g_133 = 9; (g_133 >= 0); g_133 -= 1)
                    {
                        g_46[5][0][3] = l_255[4][4];
                    }
                    if ((*l_224))
                    {
                        (*p_48) = (safe_mod_func_uint8_t_u_u(p_49, (safe_sub_func_uint32_t_u_u(l_245, 0L))));
                        l_261 = l_260;
                        (*l_261) = (((*g_164) && g_262[1]) || (*g_218));
                        if ((*g_231))
                            continue;
                    }
                    else
                    {
                        unsigned short ***l_263 = (void*)0;
                        unsigned short ***l_264 = (void*)0;
                        unsigned short ***l_265 = &g_130;
                        (*p_48) = (((p_49 != (0x81L == 253UL)) <= (6L == (0UL ^ (l_132 != (l_267 = (l_266 = ((*l_265) = &g_131))))))) >= (safe_lshift_func_uint8_t_u_s((((p_49 == (safe_add_func_uint16_t_u_u(((*l_261) = 65535UL), 7UL))) <= g_206) >= 0x9ECDL), l_272)));
                        return &g_92[4][3];
                    }
                }
                g_46[0][2][1] = func_50((((*l_277) = ((*l_276) = (safe_rshift_func_uint16_t_u_u(g_206, (*l_261))))) != (safe_mod_func_uint16_t_u_u((l_281 = (*l_260)), p_49))), (*l_224), p_49, l_282, (l_283[0] != ((*l_158) = l_283[0])));
                (*l_260) = (*p_48);
                for (l_245 = 0; (l_245 < 51); ++l_245)
                {
                    char ***l_287 = &l_283[0];
                    char ****l_288[1];
                    int *l_298 = &g_92[3][9];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_288[i] = &l_287;
                    if ((((g_286 == (g_162 = l_287)) <= ((safe_mod_func_uint32_t_u_u(((~(((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((**l_159) = p_49) == ((safe_unary_minus_func_uint8_t_u(p_49)) | g_92[3][9])), (((0xFBB295AFL ^ (safe_sub_func_int8_t_s_s(p_49, (l_298 == l_255[5][4])))) <= p_49) > p_49))), g_108)) & p_49) < 0xE6L)) && (*g_218)), (*l_298))) & g_4)) >= p_49))
                    {
                        l_224 = &g_7;
                    }
                    else
                    {
                        return &g_92[4][9];
                    }
                    for (l_281 = 0; (l_281 == 45); l_281++)
                    {
                        (*l_91) = (~l_301[1][0]);
                    }
                    return &g_92[3][9];
                }
            }
            return g_302;
        }
    }
    else
    {
        int *l_311 = &g_7;
        g_46[4][0][2] = &g_92[3][9];
        if (((*g_231) = (l_305[0][4] = (p_49 | (safe_rshift_func_int16_t_s_s(p_49, g_145))))))
        {
            int *l_306[9];
            int i;
            for (i = 0; i < 9; i++)
                l_306[i] = &g_7;
            l_306[3] = (void*)0;
        }
        else
        {
            char ***l_310 = &l_159;
            l_307[1] = (*g_231);
            for (g_108 = 0; (g_108 > 32); g_108++)
            {
                if ((*g_302))
                    break;
            }
            (*g_231) = ((void*)0 == l_310);
            return l_311;
        }
        l_311 = p_48;
    }
    (*g_302) = (p_49 ^ (0x29L > (((*l_260) = 1UL) >= g_8)));
    g_46[4][0][2] = &g_7;
    return p_48;
}







static int * func_50(unsigned short p_51, unsigned short p_52, int p_53, int p_54, unsigned p_55)
{
    int *l_85[6][7][3] = {{{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}, {{&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}, {&g_7, &g_7, &g_7}}};
    int **l_86 = (void*)0;
    int **l_87 = &g_46[4][0][2];
    int **l_88 = &l_85[3][4][0];
    int i, j, k;
    (*l_88) = ((*l_87) = l_85[3][4][0]);
    return &g_7;
}







static unsigned short func_56(unsigned short p_57, short p_58, char p_59, int * p_60)
{
    char l_77 = 0L;
    int **l_84 = &g_46[5][0][4];
    for (p_59 = 0; (p_59 <= 5); p_59++)
    {
        for (g_7 = (-5); (g_7 > 20); g_7++)
        {
            int **l_76 = &g_46[7][3][2];
            (*l_76) = p_60;
            (*l_76) = p_60;
            (*l_76) = &g_7;
            if (l_77)
            {
                int *l_82 = (void*)0;
                for (l_77 = (-15); (l_77 <= 19); l_77 = safe_add_func_uint16_t_u_u(l_77, 1))
                {
                    for (p_57 = (-13); (p_57 != 5); ++p_57)
                    {
                        (*l_76) = l_82;
                        return g_4;
                    }
                    for (p_58 = 3; (p_58 >= 0); p_58 -= 1)
                    {
                        int **l_83 = &l_82;
                        int i, j, k;
                        g_46[(p_58 + 3)][p_58][(p_58 + 3)] = g_46[(p_58 + 2)][p_58][(p_58 + 4)];
                        (*l_83) = (g_46[(p_58 + 3)][p_58][(p_58 + 1)] = g_46[(p_58 + 4)][p_58][(p_58 + 3)]);
                    }
                }
                return g_7;
            }
            else
            {
                (*l_76) = p_60;
            }
        }
    }
    (*l_84) = &g_7;
    (*p_60) = (~0x35AE52E9L);
    return p_57;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_575[i], "g_575[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1156[i][j][k], "g_1156[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1235, "g_1235", print_hash_value);
    transparent_crc(g_1277, "g_1277", print_hash_value);
    transparent_crc(g_1453, "g_1453", print_hash_value);
    transparent_crc(g_1507, "g_1507", print_hash_value);
    transparent_crc(g_1513, "g_1513", print_hash_value);
    transparent_crc(g_1593, "g_1593", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1693[i], "g_1693[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
