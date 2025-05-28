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



static int g_7[2][9] = {{0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L}, {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L}};
static const int * const g_6[2] = {&g_7[0][6], &g_7[0][6]};
static unsigned g_47 = 4294967295UL;
static int g_59 = (-1L);
static unsigned g_68 = 4294967295UL;
static int g_73 = 0x148CB42BL;
static unsigned short g_74[4][3] = {{0xDA53L, 6UL, 0xDA53L}, {0xDA53L, 6UL, 0xDA53L}, {0xDA53L, 6UL, 0xDA53L}, {0xDA53L, 6UL, 0xDA53L}};
static char g_83 = (-6L);
static unsigned g_120 = 0x9B834A4FL;
static int *g_123 = &g_59;
static const int g_126 = (-1L);
static unsigned short g_157 = 0xD193L;
static unsigned g_158 = 0xC723E32BL;
static unsigned *g_168 = &g_158;
static unsigned **g_167 = &g_168;
static unsigned char g_195 = 4UL;
static short g_231 = 0x503CL;
static short *g_230[9][3][9] = {{{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}, {{&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}, {&g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231, &g_231}}};
static short **g_229[9] = {&g_230[7][1][7], (void*)0, &g_230[7][1][7], (void*)0, &g_230[7][1][7], (void*)0, &g_230[7][1][7], (void*)0, &g_230[7][1][7]};
static short ***g_228[7][2][3] = {{{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}, {{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}, {{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}, {{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}, {{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}, {{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}, {{&g_229[7], (void*)0, &g_229[7]}, {&g_229[7], (void*)0, &g_229[7]}}};
static unsigned char *g_314 = &g_195;
static unsigned char **g_313 = &g_314;
static unsigned g_338 = 0x82C96FFEL;
static short *** const *g_342[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static int *g_355[10] = {(void*)0, (void*)0, &g_59, (void*)0, (void*)0, &g_59, (void*)0, (void*)0, &g_59, (void*)0};
static char *g_362 = &g_83;
static char **g_361[10][5] = {{&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}, {&g_362, &g_362, &g_362, &g_362, (void*)0}};
static unsigned short *g_435 = &g_74[2][2];
static unsigned short **g_434 = &g_435;
static unsigned char g_531 = 0x71L;
static char **g_540 = &g_362;
static char ***g_539[5] = {&g_540, &g_540, &g_540, &g_540, &g_540};
static char ***g_542[10] = {&g_540, &g_540, &g_540, &g_540, &g_540, &g_540, &g_540, &g_540, &g_540, &g_540};
static unsigned char g_666[8] = {246UL, 0xA2L, 246UL, 0xA2L, 246UL, 0xA2L, 246UL, 0xA2L};
static unsigned ***g_670[9] = {&g_167, (void*)0, &g_167, (void*)0, &g_167, (void*)0, &g_167, (void*)0, &g_167};
static unsigned **** const g_669[9] = {&g_670[3], &g_670[3], &g_670[5], &g_670[3], &g_670[3], &g_670[5], &g_670[3], &g_670[3], &g_670[5]};
static int g_731 = 0x37A60BDEL;
static int g_895 = (-6L);
static char g_902 = (-3L);
static int **g_963 = (void*)0;
static const int * const g_1077 = (void*)0;
static char g_1105[1][10][2] = {{{(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}, {(-1L), 0x95L}}};
static short g_1111[8][6] = {{0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}, {0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L, 0x19FFL, 0x1F31L}};
static unsigned g_1169 = 0x7362F8B8L;
static unsigned short g_1193 = 0xCC12L;
static unsigned g_1213 = 0x45A26CB7L;
static const short g_1282[8][9][1] = {{{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}, {{0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}, {0x9CEFL}}};
static const short *g_1281 = &g_1282[6][2][0];
static const short **g_1280 = &g_1281;
static const short ***g_1279[1][8][7] = {{{&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}, {&g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280, &g_1280}}};
static int * const g_1306[6][7] = {{(void*)0, &g_73, &g_7[0][6], &g_7[0][6], &g_73, (void*)0, &g_73}, {(void*)0, &g_73, &g_7[0][6], &g_7[0][6], &g_73, (void*)0, &g_73}, {(void*)0, &g_73, &g_7[0][6], &g_7[0][6], &g_73, (void*)0, &g_73}, {(void*)0, &g_73, &g_7[0][6], &g_7[0][6], &g_73, (void*)0, &g_73}, {(void*)0, &g_73, &g_7[0][6], &g_7[0][6], &g_73, (void*)0, &g_73}, {(void*)0, &g_73, &g_7[0][6], &g_7[0][6], &g_73, (void*)0, &g_73}};



static int func_1(void);
static int * func_2(const int * const p_3, char p_4, int p_5);
static unsigned char func_8(int p_9, unsigned short p_10, int * const p_11, int * const p_12, int * const p_13);
static unsigned func_14(unsigned p_15, int * p_16, int * const p_17, int * p_18);
static short func_23(int * p_24);
static int func_25(unsigned char p_26, int p_27);
static int func_37(unsigned char p_38, int * p_39, short p_40, int * p_41, unsigned char p_42);
static int * func_43(unsigned p_44, int * p_45);
static int func_48(int p_49, int * p_50, int * p_51);
static short func_62(int * p_63, short p_64, int * p_65, int * p_66);
static int func_1(void)
{
    int l_536 = 0x3B91FB55L;
    const int l_537 = 1L;
    short l_538 = (-1L);
    char ****l_541[6];
    int l_543[4] = {5L, 0L, 5L, 0L};
    int *l_544[5];
    unsigned *l_548 = &g_120;
    unsigned short l_809[8][5][6] = {{{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}, {{9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}, {9UL, 0x2ED4L, 7UL, 0xFD19L, 0x65B6L, 1UL}}};
    int **l_860 = &g_123;
    short *l_861 = &l_538;
    int *l_867 = (void*)0;
    int **l_866 = &l_867;
    unsigned short l_875 = 0xACB5L;
    unsigned l_991 = 4294967293UL;
    const unsigned char l_998[3][4] = {{0x7BL, 0x98L, 0x7BL, 0x98L}, {0x7BL, 0x98L, 0x7BL, 0x98L}, {0x7BL, 0x98L, 0x7BL, 0x98L}};
    unsigned l_1033 = 0xA245BA55L;
    int l_1034 = 0L;
    unsigned l_1037 = 0xEAC64161L;
    unsigned char *l_1138 = &g_195;
    unsigned l_1199 = 0x94B3C73DL;
    short l_1239 = 0x0EFFL;
    int *l_1243 = &l_543[2];
    int l_1248 = (-9L);
    int l_1254[10] = {2L, 0xDB74664EL, (-5L), (-5L), 0xDB74664EL, 2L, 0xDB74664EL, (-5L), (-5L), 0xDB74664EL};
    int *l_1263[2];
    char l_1310[5][6][8] = {{{0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}}, {{0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}}, {{0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}}, {{0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}}, {{0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}, {0L, 5L, 7L, 7L, (-1L), 0x79L, 0x31L, 0x1FL}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_541[i] = &g_539[1];
    for (i = 0; i < 5; i++)
        l_544[i] = &l_543[2];
    for (i = 0; i < 2; i++)
        l_1263[i] = (void*)0;
    (*l_860) = func_2(g_6[0], (func_8((((*l_548) = func_14((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(func_23(&g_7[1][3]), (((l_536 = 0x4106L) < ((l_537 > l_538) & ((g_539[1] = g_539[1]) == (g_542[5] = &g_540)))) >= l_543[2]))) != l_543[2]), (-1L))), l_544[3], g_168, g_168)) <= 8L), g_231, &l_543[2], g_168, &l_543[2]) | g_126), l_809[6][0][2]);
    if ((((*l_861) = ((void*)0 != &g_59)) != (**l_860)))
    {
        unsigned ** const l_865 = &l_548;
        int **l_868 = &l_867;
        int l_869[2];
        unsigned l_876 = 0x888C883CL;
        unsigned l_894 = 0xA846F179L;
        unsigned l_903 = 0x3835FE0BL;
        int l_906 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_869[i] = (-7L);
        for (g_338 = 27; (g_338 >= 19); g_338--)
        {
            int *l_864 = &l_536;
            (*l_860) = l_864;
            (*g_123) = (l_865 != l_865);
            (*l_864) = ((l_866 != l_868) && ((g_120 = g_158) | ((*l_864) > ((*g_314) = (l_869[1] >= (safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((l_875 = func_14((*g_168), func_43((*g_168), ((*l_860) = &g_59)), &l_869[0], &g_73)))) <= (**g_434)), l_876)) >= g_731), 4)))))));
            return l_876;
        }
        for (g_59 = 0; (g_59 == 20); ++g_59)
        {
            unsigned l_887 = 4294967294UL;
            int *l_899 = &g_73;
            unsigned l_1000 = 0xD41C7E66L;
            for (g_47 = 0; (g_47 <= 9); g_47 += 1)
            {
                int l_881 = 5L;
                int *l_886 = &l_536;
                (*l_886) = (((*g_314) = (((((**g_434) = (*g_435)) ^ (safe_mod_func_uint8_t_u_u(0xD0L, (l_869[1] | 0x266AL)))) == l_881) & (safe_mul_func_int8_t_s_s(((*g_314) < (l_876 != ((safe_lshift_func_uint8_t_u_s((*g_314), ((*g_362) = (func_48(l_876, &g_7[1][0], l_886) | l_887)))) < 0x04229DFAL))), 0UL)))) ^ 0x90L);
                for (g_338 = 0; (g_338 <= 9); g_338 += 1)
                {
                    int l_915 = 0xE2B82461L;
                    const unsigned char l_930 = 0xD6L;
                    int i;
                }
            }
        }
        for (l_876 = 0; (l_876 <= 3); l_876 += 1)
        {
            char *l_1024 = &g_902;
            int i;
            (*l_860) = func_43((3UL & l_543[l_876]), func_43((((&l_865 != (void*)0) == (safe_rshift_func_int16_t_s_u(2L, (((safe_unary_minus_func_uint8_t_u((*g_314))) < ((safe_mod_func_uint16_t_u_u(0x483CL, (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_158, (((*l_861) = (func_62(&g_7[0][6], l_894, (*l_860), &g_7[0][6]) == l_894)) | 0x5549L))), 6)))) != g_195)) | 0x68L)))) || 0x8F823D46L), &l_869[1]));
            if ((safe_lshift_func_uint8_t_u_s((*g_314), 5)))
            {
                int l_1018[7] = {0x5DC90D28L, 0x5DC90D28L, (-2L), 0x5DC90D28L, 0x5DC90D28L, (-2L), 0x5DC90D28L};
                int i;
                l_543[l_876] = ((**l_860) = ((func_14(((safe_mul_func_int8_t_s_s((((*g_314) = 251UL) || (~l_1018[4])), (func_62(&l_543[l_876], (safe_sub_func_int16_t_s_s(l_894, l_903)), &l_543[l_876], (*l_860)) | l_903))) < l_869[1]), &g_7[0][6], &l_869[1], &g_59) <= l_906) == 0UL));
                if (l_894)
                    continue;
            }
            else
            {
                unsigned short l_1021 = 65528UL;
                char *l_1025 = &g_902;
                (*g_123) = (((*l_548) = g_902) | l_543[l_876]);
                for (l_894 = 0; (l_894 <= 1); l_894 += 1)
                {
                    (**l_860) = (((*g_314) = 0xFBL) && l_903);
                    for (g_338 = 0; (g_338 <= 1); g_338 += 1)
                    {
                        return l_1021;
                    }
                }
                for (g_83 = (-1); (g_83 != 24); g_83 = safe_add_func_int16_t_s_s(g_83, 4))
                {
                    unsigned l_1027 = 4294967295UL;
                    if (((l_1025 = l_1024) != ((*g_540) = (void*)0)))
                    {
                        char l_1026 = 0xF6L;
                        return l_1026;
                    }
                    else
                    {
                        (*g_123) = l_543[l_876];
                        (*l_860) = &g_7[0][6];
                        return l_1027;
                    }
                }
            }
            g_123 = &g_7[0][6];
        }
    }
    else
    {
        int **l_1028 = &g_355[4];
        char l_1035[9][2][5] = {{{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}, {{0xB9L, (-1L), (-3L), 1L, 0x15L}, {0xB9L, (-1L), (-3L), 1L, 0x15L}}};
        int *l_1036 = &l_543[1];
        int i, j, k;
        (*l_1028) = ((*l_860) = (*l_860));
        (**l_860) = (((((void*)0 != &g_355[5]) || ((*g_435) <= (**l_860))) || (*g_123)) > func_48((safe_sub_func_int8_t_s_s(0L, (0xD4L && ((*g_314) = (((safe_mod_func_int8_t_s_s(l_1033, (**l_860))) > l_1034) > l_1035[5][1][4]))))), l_1036, (*l_860)));
        (*l_1028) = &g_59;
    }
    if (l_1037)
    {
        unsigned l_1042 = 4294967291UL;
        int l_1051 = 0x6B44D36AL;
        int l_1052 = 2L;
        char ** const *l_1067[4] = {(void*)0, &g_361[6][2], (void*)0, &g_361[6][2]};
        char ** const **l_1066 = &l_1067[1];
        unsigned char l_1103 = 247UL;
        int *l_1154 = &l_536;
        int l_1174[6][3] = {{0x9FC938BCL, 0xEF948EA4L, 0x9FC938BCL}, {0x9FC938BCL, 0xEF948EA4L, 0x9FC938BCL}, {0x9FC938BCL, 0xEF948EA4L, 0x9FC938BCL}, {0x9FC938BCL, 0xEF948EA4L, 0x9FC938BCL}, {0x9FC938BCL, 0xEF948EA4L, 0x9FC938BCL}, {0x9FC938BCL, 0xEF948EA4L, 0x9FC938BCL}};
        int *l_1175 = &g_7[0][1];
        int i, j;
        for (g_83 = (-13); (g_83 >= 16); ++g_83)
        {
            int l_1045 = 0x7950C352L;
            for (g_73 = 0; (g_73 >= 13); g_73++)
            {
                unsigned char l_1046 = 0xE0L;
                l_1046 = (((l_1042 = (-1L)) <= 0xE6L) & (safe_add_func_int32_t_s_s(0x154779F9L, l_1045)));
            }
            (*l_860) = &g_7[1][2];
            l_1052 = (l_1051 = (l_1045 != (0L < func_48((g_731 = func_25((safe_add_func_uint8_t_u_u((*g_314), (*g_314))), (safe_mul_func_uint8_t_u_u(l_1045, func_14(l_1042, &g_59, (*l_860), func_43(l_1042, (*l_860))))))), &l_1045, &l_543[3]))));
            l_1051 = l_1045;
        }
        for (l_991 = (-6); (l_991 >= 11); l_991 = safe_add_func_int16_t_s_s(l_991, 8))
        {
            int l_1055 = (-7L);
            return l_1055;
        }
        for (g_120 = 15; (g_120 > 31); g_120 = safe_add_func_int8_t_s_s(g_120, 1))
        {
            short l_1058 = 8L;
            unsigned ****l_1059 = &g_670[5];
            const int *l_1060 = &l_536;
            int *l_1073[5];
            int l_1075 = 0xA436E510L;
            int *l_1094 = &l_1052;
            int *l_1120 = &l_543[2];
            unsigned char *l_1141 = &g_531;
            short l_1155[5][1][6] = {{{(-5L), 1L, (-5L), 1L, (-5L), 1L}}, {{(-5L), 1L, (-5L), 1L, (-5L), 1L}}, {{(-5L), 1L, (-5L), 1L, (-5L), 1L}}, {{(-5L), 1L, (-5L), 1L, (-5L), 1L}}, {{(-5L), 1L, (-5L), 1L, (-5L), 1L}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1073[i] = &g_7[0][7];
            (*l_860) = func_43(l_1058, &l_543[2]);
            (**l_860) = (**l_860);
            if (l_1042)
            {
                int *l_1068 = &g_7[1][5];
                int l_1076 = (-2L);
                char ****l_1090 = &g_542[5];
                int l_1095 = 0x6827AE74L;
                int *l_1098 = &l_536;
                (**l_860) = ((void*)0 == l_1059);
                g_355[4] = (void*)0;
                for (l_538 = 5; (l_538 >= 0); l_538 -= 1)
                {
                    const int **l_1061 = &l_1060;
                    const int *l_1063[6] = {&l_1051, &l_1051, &g_59, &l_1051, &l_1051, &g_59};
                    const int **l_1062 = &l_1063[4];
                    int *l_1074 = &l_1052;
                    char ****l_1091 = &g_542[5];
                    int i;
                    (*l_1062) = ((*l_1061) = l_1060);
                    if ((safe_sub_func_int16_t_s_s((l_1042 == (((void*)0 == l_1066) <= (*l_1060))), l_1051)))
                    {
                        l_1068 = func_43(((*g_168) = l_1076), &g_59);
                    }
                    else
                    {
                        int l_1080[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1080[i] = 0x582FB0D9L;
                        (*l_860) = (*l_860);
                        l_1068 = ((*l_860) = func_2((*l_860), (*g_362), (*l_1068)));
                    }
                    for (g_158 = 0; (g_158 <= 5); g_158 += 1)
                    {
                        int *l_1087 = &g_7[0][6];
                        const int *l_1096[5][2][7] = {{{&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}, {&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}}, {{&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}, {&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}}, {{&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}, {&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}}, {{&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}, {&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}}, {{&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}, {&l_536, &l_536, &l_536, (void*)0, (void*)0, &g_7[1][5], &g_59}}};
                        int i, j, k;
                        (*l_1068) = (safe_rshift_func_uint8_t_u_u((0x0AL | (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x46L, ((**g_540) = func_48(g_531, l_1074, l_1087)))), l_1052))), 7));
                        l_1051 = ((*l_1068) = ((safe_sub_func_uint32_t_u_u(((((*l_1068) >= (-1L)) ^ func_48(g_68, ((*l_860) = l_1068), &l_1075)) <= ((l_541[l_538] = l_1090) != l_1091)), (((*g_314) = (((safe_mul_func_uint8_t_u_u(func_14((*g_168), l_1094, l_1074, &g_7[0][5]), (*l_1068))) ^ l_1051) <= (*g_314))) > l_1095))) ^ 0x166D76B6L));
                        (*l_1062) = l_1096[4][1][0];
                    }
                }
                if ((*g_123))
                {
                    for (g_157 = 0; (g_157 <= 4); g_157 += 1)
                    {
                        int l_1097 = 4L;
                        int i;
                    }
                }
                else
                {
                    unsigned ***l_1101 = &g_167;
                    int *l_1102 = &g_7[0][6];
                    (*l_860) = l_1098;
                    (*l_860) = func_2(func_43((safe_rshift_func_uint8_t_u_s((l_1101 == l_1101), ((**g_540) = (*l_1098)))), (*l_860)), ((g_666[4] || (**l_860)) != ((*l_1094) ^ func_48(g_120, l_1102, &g_73))), (*l_1102));
                    (*l_860) = (*l_860);
                    (*l_860) = &g_73;
                }
            }
            else
            {
                int l_1104 = 1L;
                unsigned l_1170 = 0x0EC37915L;
                char *l_1192 = &g_902;
                unsigned l_1194[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_1194[i] = 1UL;
                if (((l_1103 | l_1104) && g_1105[0][1][1]))
                {
                    unsigned short *l_1108 = &l_809[0][4][3];
                    int l_1109[2][8] = {{0xD63E54E5L, 0x8098F498L, (-1L), (-1L), 0x8098F498L, 0xD63E54E5L, 0x8098F498L, (-1L)}, {0xD63E54E5L, 0x8098F498L, (-1L), (-1L), 0x8098F498L, 0xD63E54E5L, 0x8098F498L, (-1L)}};
                    const int l_1110[6] = {(-9L), (-9L), (-9L), (-9L), (-9L), (-9L)};
                    int i, j;
                    if (((safe_lshift_func_uint16_t_u_s(((**g_434) = (**l_860)), (((*l_1108) = l_1104) == l_1109[1][0]))) && (*l_1094)))
                    {
                        (*l_860) = (void*)0;
                        (*l_860) = &g_73;
                    }
                    else
                    {
                        int l_1112 = 0x2327875BL;
                        (*g_123) = l_1110[0];
                        (*l_860) = func_2(func_43((**l_860), &g_73), g_1111[6][2], (((**g_540) = func_48(g_157, &l_1051, &l_1109[1][0])) < ((**l_860) || l_1112)));
                    }
                    for (g_59 = 0; (g_59 >= (-16)); g_59 = safe_sub_func_int16_t_s_s(g_59, 7))
                    {
                        int *l_1115 = (void*)0;
                        unsigned *l_1121 = &l_1037;
                        (*l_1094) = func_14(l_1110[0], l_1115, &l_1104, &g_7[0][6]);
                        (*l_1120) = (safe_mul_func_int8_t_s_s((*g_362), (safe_mod_func_int32_t_s_s(func_14((*g_168), func_43(((*l_1121) = func_14((*g_168), func_43((&g_342[0] != (void*)0), l_1120), &l_1075, &l_1104)), &l_1109[1][2]), &g_7[0][6], &l_1051), 0xB6BBFDB5L))));
                        if (l_1104)
                            continue;
                        (*l_1094) = l_1110[3];
                    }
                    for (l_1034 = 0; (l_1034 != 19); l_1034 = safe_add_func_uint16_t_u_u(l_1034, 4))
                    {
                        if (l_1104)
                            break;
                    }
                }
                else
                {
                    int l_1137 = (-6L);
                    unsigned char *l_1140 = &g_666[4];
                    const int l_1142 = (-1L);
                    int l_1143 = 0L;
                    for (g_59 = 0; (g_59 > (-25)); g_59 = safe_sub_func_uint32_t_u_u(g_59, 7))
                    {
                        char l_1126[7] = {0x7DL, 0x9AL, 0x7DL, 0x9AL, 0x7DL, 0x9AL, 0x7DL};
                        unsigned char **l_1139[7] = {&l_1138, &l_1138, &g_314, &l_1138, &l_1138, &g_314, &l_1138};
                        int i;
                        (*l_860) = &g_7[0][6];
                        if (l_1126[6])
                            break;
                        l_1143 = (safe_rshift_func_uint16_t_u_u((**g_434), ((4L & ((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_1137 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0x2FFB2281L, ((*l_1120) <= (*l_1094)))), 8))), (*l_1060))), 2)) != (!((l_1140 = l_1138) != (l_1141 = &g_666[4])))) | 0xCB3BL) | l_1142)) ^ 0xD83EL)));
                    }
                    (*l_1094) = (3L && func_62(&l_1075, (**l_860), &l_1052, &l_1104));
                    (*l_860) = &g_7[0][6];
                }
                for (g_59 = 24; (g_59 >= (-28)); --g_59)
                {
                    int **l_1153 = &l_1094;
                    int *l_1176[1];
                    char *l_1191 = (void*)0;
                    unsigned ****l_1207 = &g_670[5];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1176[i] = &l_1075;
                }
                (**l_860) = (-1L);
            }
            (*l_860) = &g_73;
        }
    }
    else
    {
        unsigned short l_1218 = 65535UL;
        int *l_1224 = &l_543[2];
        unsigned l_1242 = 4UL;
        int l_1247 = 0xC83981FEL;
        unsigned l_1249 = 1UL;
        const int *l_1270 = (void*)0;
        short *l_1273[5];
        int i;
        for (i = 0; i < 5; i++)
            l_1273[i] = (void*)0;
        for (g_158 = (-14); (g_158 == 56); g_158 = safe_add_func_uint32_t_u_u(g_158, 1))
        {
            unsigned l_1226 = 0UL;
            int l_1236[8][2][3] = {{{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}, {{1L, 1L, 0x14D284E9L}, {1L, 1L, 0x14D284E9L}}};
            int i, j, k;
            if (l_1218)
                break;
            for (g_47 = (-5); (g_47 >= 33); g_47++)
            {
                short l_1223 = (-6L);
                int l_1233 = 0x9929795AL;
                for (l_1034 = 0; (l_1034 > (-9)); l_1034--)
                {
                    short l_1227 = 1L;
                    unsigned l_1232 = 0x0569C92DL;
                    for (l_536 = 0; (l_536 <= 8); l_536 += 1)
                    {
                        int *l_1225[7][4][9] = {{{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}, {{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}, {{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}, {{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}, {{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}, {{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}, {{&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}, {&l_536, &l_536, (void*)0, (void*)0, &l_536, &l_536, &l_536, (void*)0, (void*)0}}};
                        int i, j, k;
                        (*l_860) = func_2(&g_73, l_1223, ((l_1223 <= ((*l_861) = func_62(l_1224, (*l_1224), l_1225[2][2][0], l_1225[5][1][2]))) & (l_1226 ^ (-3L))));
                        l_1233 = (l_1227 >= ((l_1223 >= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((**g_434), 15)), l_1232))) < ((*l_548) = (&g_963 == &g_963))));
                        (*l_860) = l_1224;
                        return l_1226;
                    }
                }
            }
            for (l_875 = 0; (l_875 > 43); l_875++)
            {
                int *l_1246 = &l_1236[0][0][1];
                l_1236[7][0][1] = ((*l_1224) = (*l_1224));
                (*l_1224) = ((safe_lshift_func_uint16_t_u_s((l_1239 == (0xFF0CACB9L > (safe_sub_func_int16_t_s_s(((l_1242 = (*g_314)) || (l_1236[2][0][1] != (((func_48(g_1111[6][2], l_1243, func_43(((safe_sub_func_int32_t_s_s((*l_1224), (l_1236[7][0][1] ^ 1L))) < (*g_435)), l_1246)) | (*g_314)) | l_1247) || l_1236[7][0][1]))), l_1248)))), 10)) <= (-1L));
            }
        }
        l_1249 = (*l_1224);
        for (l_1239 = (-4); (l_1239 == (-20)); l_1239 = safe_sub_func_int16_t_s_s(l_1239, 6))
        {
            const unsigned l_1257 = 4294967286UL;
            int *l_1264 = &l_1254[4];
            const int *l_1269 = &l_1254[6];
            short ***l_1283 = &g_229[7];
            unsigned *l_1301 = (void*)0;
            (*l_860) = l_1224;
            for (l_536 = 0; (l_536 < 28); l_536 = safe_add_func_uint32_t_u_u(l_536, 7))
            {
                const int *l_1256 = (void*)0;
                const int **l_1255 = &l_1256;
                const unsigned *l_1262[2];
                const unsigned **l_1261 = &l_1262[0];
                const unsigned ***l_1260 = &l_1261;
                int i;
                for (i = 0; i < 2; i++)
                    l_1262[i] = &g_338;
                if (l_1254[8])
                    break;
                (*l_1255) = func_2(((*l_1255) = &g_59), (**g_540), ((*l_1224) = (l_1257 > ((((safe_mul_func_int16_t_s_s(0x76DFL, (l_1260 != (void*)0))) | func_62(func_43(((*g_168) = 1UL), l_1224), l_1257, l_1263[0], l_1264)) < (*l_1264)) || (*g_435)))));
                (*l_1255) = l_1264;
                (*l_1243) = ((*l_1264) = 9L);
            }
            if ((safe_rshift_func_int8_t_s_u((*l_1264), 1)))
            {
                const int *l_1268 = (void*)0;
                const int **l_1267[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1267[i] = &l_1268;
                l_1269 = &g_126;
                l_1270 = l_1269;
                (*l_1224) = (*l_1224);
            }
            else
            {
                const short *l_1278 = (void*)0;
                const short **l_1277[9][10] = {{&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}, {&l_1278, &l_1278, &l_1278, &l_1278, (void*)0, &l_1278, (void*)0, &l_1278, &l_1278, &l_1278}};
                const short ***l_1276 = &l_1277[7][0];
                short ****l_1284 = &g_228[2][0][0];
                int l_1285[4][7][1] = {{{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}, {{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}, {{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}, {{(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}, {(-9L)}}};
                const int l_1288 = 0x7629FCE4L;
                int **l_1307[10] = {&l_1243, &l_1264, &l_1263[0], &l_1263[0], &l_1264, &l_1243, &l_1264, &l_1263[0], &l_1263[0], &l_1264};
                int **l_1308 = (void*)0;
                int **l_1309 = &g_355[4];
                int i, j, k;
                (*l_1243) = (l_1285[3][0][0] = ((safe_mod_func_int16_t_s_s(func_48(((void*)0 == l_1273[2]), &g_59, &g_7[1][6]), ((safe_rshift_func_int16_t_s_u((((g_1279[0][1][5] = l_1276) != ((*l_1284) = l_1283)) <= ((void*)0 != (*g_434))), 8)) & (*l_1224)))) > 255UL));
                for (l_536 = (-25); (l_536 > (-10)); l_536++)
                {
                    unsigned short l_1302[7][5][6] = {{{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}, {{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}, {{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}, {{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}, {{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}, {{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}, {{65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}, {65535UL, 0xD470L, 1UL, 0x6A37L, 0UL, 0x05FEL}}};
                    int l_1305 = 0xCBA8FB1EL;
                    int i, j, k;
                    if (l_1288)
                        break;
                    (*l_1243) = l_1288;
                    if ((*l_1224))
                    {
                        int l_1289 = 0x0CE494F6L;
                        if (l_1289)
                            break;
                    }
                    else
                    {
                        short l_1298[4][3][10] = {{{0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}}, {{0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}}, {{0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}}, {{0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}, {0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL, 0L, 0x93AAL, 0x4EA5L, 0x4EA5L, 0x93AAL}}};
                        int i, j, k;
                        l_1302[2][1][2] = (((safe_mul_func_uint16_t_u_u((**g_434), (safe_mod_func_int32_t_s_s((*l_1269), ((*l_548) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((*l_1243) = l_1298[1][1][4]) != ((*g_314) && ((*g_314) = (*g_314)))), (safe_sub_func_uint8_t_u_u((l_1285[3][0][0] || ((l_1285[3][6][0] = (((-8L) != (*l_1264)) ^ (((l_1301 = (void*)0) == (void*)0) == l_1298[1][1][4]))) & 0xF535E6BDL)), (*l_1269))))), l_1298[2][1][8]))))))) && (*l_1264)) || l_1298[1][1][4]);
                        l_1285[3][0][0] = ((safe_rshift_func_int16_t_s_u(5L, 9)) < g_126);
                        l_1305 = l_1298[1][1][4];
                    }
                }
                (*l_1309) = g_1306[0][1];
            }
        }
    }
    return l_1310[1][4][5];
}







static int * func_2(const int * const p_3, char p_4, int p_5)
{
    unsigned l_827[9] = {4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL};
    int l_829 = 0x877FD66DL;
    char **** const l_842 = &g_539[2];
    int *l_856 = &l_829;
    int *l_859 = &g_7[0][6];
    int i;
    for (p_4 = 0; (p_4 <= (-11)); p_4 = safe_sub_func_int8_t_s_s(p_4, 8))
    {
        int * const l_830 = &g_59;
        int *l_831 = (void*)0;
        short l_832 = 0x3C87L;
        short l_836 = (-1L);
        for (g_338 = 26; (g_338 == 54); ++g_338)
        {
            int l_816 = 0x9CB24DFAL;
            int *l_826 = &g_7[0][6];
            for (g_59 = 0; (g_59 > (-19)); g_59 = safe_sub_func_int16_t_s_s(g_59, 1))
            {
                int l_825 = 7L;
                unsigned *l_828 = &l_827[3];
                int **l_833 = &g_123;
                if (l_816)
                    break;
                (*l_826) = (safe_lshift_func_uint8_t_u_u(((*g_314) = l_816), func_14((safe_rshift_func_uint16_t_u_u(((p_5 && (func_48(g_666[4], &g_73, func_43(((safe_sub_func_int8_t_s_s(((((&g_669[2] == (void*)0) || (((*l_828) = (l_825 < (((*l_826) = ((!0x06A23EF4L) && func_48(p_4, l_826, &l_825))) > l_827[3]))) && g_531)) >= 0x8A4CL) & 1UL), 0x79L)) || g_666[4]), &g_59)) > l_829)) == 4294967295UL), 11)), &g_59, l_830, l_831)));
                (*l_833) = func_43(p_4, func_43(l_832, func_43(l_829, &p_5)));
            }
            (*l_830) = ((*l_826) < ((safe_mod_func_uint8_t_u_u(((l_836 >= 5L) & 4294967295UL), p_5)) >= ((safe_unary_minus_func_uint16_t_u(0x3E52L)) || g_195)));
        }
    }
    p_5 = ((safe_mod_func_uint8_t_u_u((&g_342[9] == (void*)0), (safe_mul_func_uint16_t_u_u((l_842 != (void*)0), (safe_lshift_func_uint8_t_u_s(0x5DL, (p_5 <= ((*p_3) ^ (((*g_435) | l_829) || g_195))))))))) || l_827[7]);
    for (p_4 = 28; (p_4 > (-27)); p_4--)
    {
        int l_851[10][8][1] = {{{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}};
        unsigned char *l_857 = &g_666[4];
        short *l_858 = &g_231;
        int i, j, k;
        l_859 = func_43((g_7[0][2] > ((*p_3) & ((l_827[3] && (safe_mod_func_int16_t_s_s(p_5, p_5))) ^ ((*l_858) = (((*l_857) = ((*g_314) = (safe_lshift_func_int16_t_s_s(l_851[0][1][0], (safe_mul_func_int8_t_s_s((g_59 >= ((safe_lshift_func_uint8_t_u_s(func_14(l_851[0][1][0], (l_856 = &g_59), &g_7[0][6], &g_7[0][5]), 4)) ^ (*g_435))), p_5)))))) & 0xB4L))))), &g_7[1][0]);
    }
    return &g_59;
}







static unsigned char func_8(int p_9, unsigned short p_10, int * const p_11, int * const p_12, int * const p_13)
{
    unsigned char l_553 = 0UL;
    short *l_554 = (void*)0;
    short *l_555 = (void*)0;
    short *l_556 = &g_231;
    char * const *l_561[6] = {&g_362, &g_362, &g_362, &g_362, &g_362, &g_362};
    int l_562 = 0L;
    unsigned *l_565[2];
    unsigned char l_576 = 0x96L;
    int *l_578 = &g_7[0][3];
    char l_585 = (-1L);
    unsigned l_592 = 4294967295UL;
    int *l_628[8][10][3] = {{{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}, {{&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}, {&g_7[0][6], (void*)0, &l_562}}};
    const unsigned *l_688 = (void*)0;
    const unsigned **l_687 = &l_688;
    int *l_697 = &g_59;
    char l_700 = 0x76L;
    int *l_772 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_565[i] = (void*)0;
    if (((g_120 = (((((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((*l_556) = l_553), 0)), l_553)) > ((l_562 = (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_561[4] != (void*)0), ((l_553 | l_553) > g_47))), p_10))) < ((safe_lshift_func_uint8_t_u_u(p_10, 6)) < g_47))) | p_10) == (*p_13)) ^ l_553) >= (*p_13)) | l_553)) <= (-9L)))
    {
        const unsigned l_570 = 4294967287UL;
        unsigned char l_574[1][10][10] = {{{255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}, {255UL, 0xD3L, 0x00L, 1UL, 1UL, 0x5BL, 0x62L, 0x68L, 255UL, 2UL}}};
        int *l_575 = &g_59;
        int i, j, k;
        for (g_338 = 0; (g_338 == 53); g_338++)
        {
            int *l_573[1][7][5] = {{{&l_562, &g_59, &l_562, &g_59, &l_562}, {&l_562, &g_59, &l_562, &g_59, &l_562}, {&l_562, &g_59, &l_562, &g_59, &l_562}, {&l_562, &g_59, &l_562, &g_59, &l_562}, {&l_562, &g_59, &l_562, &g_59, &l_562}, {&l_562, &g_59, &l_562, &g_59, &l_562}, {&l_562, &g_59, &l_562, &g_59, &l_562}}};
            int * const l_579[3][3] = {{&l_562, &l_562, &l_562}, {&l_562, &l_562, &l_562}, {&l_562, &l_562, &l_562}};
            unsigned l_611[8] = {0x8C7E6524L, 0xD2EB6CDEL, 0x8C7E6524L, 0xD2EB6CDEL, 0x8C7E6524L, 0xD2EB6CDEL, 0x8C7E6524L, 0xD2EB6CDEL};
            unsigned ***l_620 = &g_167;
            int **l_627 = &l_573[0][6][0];
            int i, j, k;
            for (g_158 = 1; (g_158 <= 9); g_158 += 1)
            {
                int **l_577[1];
                int **l_580 = &g_355[4];
                int i;
                for (i = 0; i < 1; i++)
                    l_577[i] = &l_573[0][3][2];
                (*p_13) = (safe_mul_func_uint8_t_u_u(l_570, func_48(l_553, (g_355[g_158] = func_43((g_47 = ((safe_sub_func_int8_t_s_s(func_48(p_10, func_43((*g_168), &l_562), l_573[0][3][2]), p_10)) == l_574[0][4][2])), l_575)), &l_562)));
                l_578 = func_43(l_576, l_573[0][2][4]);
                (*l_580) = l_579[1][0];
            }
            (*l_578) = (*l_578);
            for (g_59 = 0; (g_59 != 11); ++g_59)
            {
                int **l_586 = &g_123;
                unsigned *l_587 = &g_47;
                int *l_613 = &g_73;
                short ***l_617 = &g_229[7];
                for (l_553 = (-22); (l_553 < 46); l_553++)
                {
                    return l_585;
                }
                (*l_586) = &g_7[1][5];
                if (((*p_12) = (((**l_586) = (*g_123)) & (((l_587 == p_13) ^ ((func_14((safe_mul_func_uint16_t_u_u((*g_435), ((*l_556) = (p_9 > (safe_add_func_uint32_t_u_u(l_592, g_74[1][2])))))), func_43((safe_sub_func_uint32_t_u_u(p_9, 0x0C52BBFBL)), &g_73), l_575, &g_73) > 0xFDL) == (*l_575))) || 0x5564L))))
                {
                    short l_598 = 0xD6C3L;
                    char l_605 = 9L;
                    if (func_62((*l_586), ((*l_556) = (*l_575)), (*l_586), (*l_586)))
                    {
                        (*p_13) = (*p_13);
                    }
                    else
                    {
                        (*p_11) = ((**l_586) = (*l_575));
                        return p_10;
                    }
                    for (p_9 = 9; (p_9 >= 27); p_9 = safe_add_func_int16_t_s_s(p_9, 3))
                    {
                        char *l_602 = &l_585;
                        char **l_601 = &l_602;
                        int l_606[4] = {(-10L), (-1L), (-10L), (-1L)};
                        int i;
                        (**l_586) = func_62(&g_73, (((*g_540) == ((*l_601) = (void*)0)) & (safe_lshift_func_uint8_t_u_u(l_605, (((l_606[2] = ((p_10 && l_606[3]) | ((**g_540) != (safe_add_func_int16_t_s_s((*l_578), (*l_575)))))) ^ (**g_434)) <= p_9)))), l_573[0][3][2], &l_562);
                        (*p_11) = (*p_12);
                    }
                    (**l_586) = 6L;
                }
                else
                {
                    unsigned char l_612 = 0x03L;
                    unsigned char *l_614 = &l_553;
                    unsigned ***l_619 = &g_167;
                    unsigned ****l_618[7] = {(void*)0, (void*)0, &l_619, (void*)0, (void*)0, &l_619, (void*)0};
                    int i;
                    (*p_11) = (*p_13);
                    (*p_13) = (safe_lshift_func_uint16_t_u_u(((func_48(((*l_575) <= l_611[6]), func_43(l_612, &g_73), func_43(p_10, l_613)) & l_612) != 4294967292UL), (*l_575)));
                    if (((*p_11) = ((((*l_614) = ((*g_314) = p_10)) <= ((safe_rshift_func_uint16_t_u_u(((**l_586) = (l_617 != (void*)0)), 1)) || ((!(((l_620 = (void*)0) != &g_167) | 4294967295UL)) ^ (!(((*l_613) = p_10) & (safe_lshift_func_uint8_t_u_u(p_10, func_14((*g_168), &g_7[0][6], p_13, (*l_586))))))))) >= p_10)))
                    {
                        (**l_586) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_13), p_10)), (p_10 || p_10)));
                        (*g_123) = (*l_613);
                        if ((*p_11))
                            continue;
                    }
                    else
                    {
                        if (l_612)
                            break;
                    }
                }
            }
            (*l_627) = l_573[0][3][3];
        }
    }
    else
    {
        int *l_629[10][2][4] = {{{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}, {{&g_7[0][6], &g_73, &g_73, &g_7[0][6]}, {&g_7[0][6], &g_73, &g_73, &g_7[0][6]}}};
        int i, j, k;
        g_123 = p_12;
        if ((p_10 && ((*g_314) = 255UL)))
        {
            int *l_630 = &g_7[0][6];
            int l_631 = 0xD7B41C34L;
            if ((((void*)0 == l_629[5][1][0]) < (p_10 & (((l_631 = ((**g_540) = ((*l_578) = (8UL & func_48((func_62(&g_73, p_10, l_630, &l_562) || p_9), &l_562, l_630))))) < 0xCEL) > (*p_11)))))
            {
                return p_10;
            }
            else
            {
                int *l_632 = &g_7[0][6];
                l_632 = l_632;
                (*l_630) = ((*g_314) < (p_10 & p_9));
                for (g_68 = 0; (g_68 != 30); g_68 = safe_add_func_int32_t_s_s(g_68, 2))
                {
                    int **l_635[1];
                    unsigned short * const l_645 = &g_74[0][1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_635[i] = &g_355[4];
                    g_355[9] = func_43((*l_632), &g_59);
                    for (p_10 = 29; (p_10 > 45); p_10++)
                    {
                        int l_642[3][5][1];
                        const unsigned short *l_646 = &g_74[1][0];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 5; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_642[i][j][k] = (-1L);
                            }
                        }
                        (*p_13) = (safe_lshift_func_uint16_t_u_s(p_9, (*l_632)));
                        (*l_632) = (safe_lshift_func_int16_t_s_u((-1L), func_48(l_642[0][1][0], func_43(p_9, (g_355[5] = &l_631)), &l_631)));
                        l_628[3][2][2] = func_43((safe_add_func_uint32_t_u_u(g_531, (l_645 != l_646))), &l_562);
                    }
                    (*p_12) = ((*p_13) = (~((*l_630) = ((*g_314) >= ((*g_362) = (*g_362))))));
                    return p_10;
                }
            }
            (*l_630) = (safe_mul_func_uint8_t_u_u(1UL, (*g_314)));
        }
        else
        {
            int *l_651 = &g_73;
            l_651 = func_43(((safe_mul_func_uint8_t_u_u(p_9, 1L)) | ((*g_314) & 0x31L)), l_651);
        }
    }
    for (g_195 = 0; (g_195 > 55); ++g_195)
    {
        int *l_662 = &g_7[1][8];
        unsigned ****l_671 = &g_670[6];
        unsigned * const *l_686 = &g_168;
        int **l_694 = &g_123;
        unsigned char *l_705 = &l_576;
        int * const l_759 = &g_7[0][6];
        unsigned short ** const l_793 = &g_435;
    }
    return p_9;
}







static unsigned func_14(unsigned p_15, int * p_16, int * const p_17, int * p_18)
{
    int **l_545 = &g_355[4];
    unsigned short **l_546 = &g_435;
    int *l_547[10][8][3] = {{{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}, {{(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}, {(void*)0, &g_7[0][8], &g_7[0][6]}}};
    int i, j, k;
    (*l_545) = &g_7[0][6];
    (*l_545) = &g_7[1][2];
    (*l_545) = func_43((&g_435 != l_546), func_43(p_15, l_547[7][0][0]));
    return p_15;
}







static short func_23(int * p_24)
{
    const int l_34 = (-8L);
    short * const *l_398 = &g_230[7][1][7];
    int l_417 = 0xF22135DBL;
    int *l_421 = &g_7[0][3];
    char l_441[6] = {0L, 0L, 0L, 0L, 0L, 0L};
    unsigned short *l_524 = (void*)0;
    int i;
    if ((*p_24))
    {
        unsigned l_28 = 0x863CC1DAL;
        int *l_401 = &g_59;
        unsigned short *l_423[1];
        int i;
        for (i = 0; i < 1; i++)
            l_423[i] = &g_74[1][1];
        (*p_24) = func_25(l_28, (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(3UL)), (safe_sub_func_int8_t_s_s((l_34 != (safe_add_func_int32_t_s_s((*p_24), func_37((~0x18L), func_43(l_34, p_24), l_34, p_24, l_28)))), l_34)))));
        if (l_28)
        {
            char l_394 = 0xB4L;
            (*p_24) = l_394;
            (*p_24) = (-6L);
            return l_28;
        }
        else
        {
            unsigned char l_395 = 0UL;
            int *l_402 = &g_73;
            unsigned char l_418[7][4][6] = {{{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}, {{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}, {{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}, {{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}, {{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}, {{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}, {{0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}, {0xCAL, 0xD8L, 0x22L, 0xD8L, 0xCAL, 255UL}}};
            int l_420 = 0x3F8848ADL;
            int i, j, k;
            p_24 = (void*)0;
            for (g_68 = 1; (g_68 <= 9); g_68 += 1)
            {
                short l_405 = (-1L);
                unsigned short *l_425 = &g_74[1][0];
                int i;
                if (l_395)
                    break;
                g_355[g_68] = func_43((safe_sub_func_int8_t_s_s((g_157 || ((*g_314) | (*g_314))), ((((void*)0 != l_398) & (l_34 | ((l_34 && 0x6802L) <= (safe_mul_func_int8_t_s_s(l_34, l_395))))) ^ l_34))), l_401);
                (*l_401) = l_395;
                for (l_28 = 0; (l_28 <= 9); l_28 += 1)
                {
                    int l_412 = 0xE8B4BC99L;
                    unsigned *l_415 = (void*)0;
                    unsigned *l_416[1][6] = {{&g_120, (void*)0, &g_120, (void*)0, &g_120, (void*)0}};
                    int **l_419[6][3][4] = {{{&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}}, {{&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}}, {{&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}}, {{&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}}, {{&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}}, {{&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}, {&g_355[9], &g_355[g_68], &g_355[g_68], &g_355[g_68]}}};
                    char l_422 = (-9L);
                    int i, j, k;
                    g_355[g_68] = l_402;
                    if ((*l_401))
                    {
                        int **l_403 = &g_355[g_68];
                        int **l_404 = &l_402;
                        (*l_402) = 0x03C47382L;
                        if ((*l_402))
                            break;
                        (*l_404) = ((*l_403) = &g_59);
                    }
                    else
                    {
                        return l_405;
                    }
                    if (func_62(&g_73, (safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(l_34, (((*l_401) == (l_412 >= (safe_mod_func_uint32_t_u_u((l_417 = 0UL), func_62((p_24 = func_43(l_418[1][2][1], &l_412)), (l_420 = (*l_401)), &g_73, l_421))))) != (*l_421)))) <= (*l_421)), (*l_401))) || (*p_24)), l_422)), &g_59, l_421))
                    {
                        p_24 = &l_420;
                        p_24 = &g_7[0][1];
                    }
                    else
                    {
                        unsigned short **l_424[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_424[i] = &l_423[0];
                        (*p_24) = (func_48((&g_314 == (void*)0), &g_7[0][5], &g_59) & ((l_425 = l_423[0]) != (void*)0));
                        return (*l_401);
                    }
                }
            }
        }
        return (*l_421);
    }
    else
    {
        unsigned short l_442 = 7UL;
        int *l_463 = (void*)0;
        int l_464 = 0x8AF3D902L;
        for (l_417 = 0; l_417 < 10; l_417 += 1)
        {
            for (g_120 = 0; g_120 < 5; g_120 += 1)
            {
                g_361[l_417][g_120] = &g_362;
            }
        }
        for (g_120 = (-20); (g_120 >= 41); g_120++)
        {
            int l_449[1][4] = {{0x598C4625L, (-1L), 0x598C4625L, (-1L)}};
            int **l_462 = &g_355[0];
            unsigned short l_473 = 0xBD6EL;
            int l_474 = 2L;
            int i, j;
            for (g_68 = 0; (g_68 <= 4); g_68++)
            {
                int *l_438 = &l_417;
                short *l_443[4];
                unsigned *l_447 = (void*)0;
                unsigned ** const l_446 = &l_447;
                unsigned ** const *l_445 = &l_446;
                unsigned ** const **l_444 = &l_445;
                int **l_448 = &g_355[4];
                unsigned short *l_460[1];
                char l_461 = 0x8BL;
                int i;
                for (i = 0; i < 4; i++)
                    l_443[i] = &g_231;
                for (i = 0; i < 1; i++)
                    l_460[i] = (void*)0;
                (*g_123) = (safe_sub_func_uint16_t_u_u(((**g_434) = (safe_rshift_func_int16_t_s_u(((0x3AD06E9AL < (g_434 != (void*)0)) != ((safe_add_func_int32_t_s_s(((*l_438) = ((*p_24) && func_62(l_438, ((*l_421) = (safe_mod_func_int16_t_s_s(l_441[5], l_442))), ((*l_448) = func_43((((*l_444) = (void*)0) != &g_167), &g_73)), p_24))), (-3L))) || (**g_313))), 14))), l_449[0][1]));
                for (g_59 = 0; (g_59 > 5); g_59++)
                {
                    return (*l_421);
                }
                (*l_438) = ((*p_24) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((*g_435), l_442)), ((l_442 ^ ((l_461 = 1UL) | (((func_48(((*g_313) != (*g_313)), p_24, func_43((*g_168), &l_449[0][1])) >= (**g_434)) && 0x0FL) | (**g_434)))) != (*g_435)))), (*g_314))), (-4L))));
                (*l_448) = func_43((*l_438), p_24);
            }
            (*l_462) = &l_449[0][1];
            (*p_24) = (l_463 != (void*)0);
        }
    }
    return (*l_421);
}







static int func_25(unsigned char p_26, int p_27)
{
    unsigned l_249 = 0xA750E9EDL;
    char l_252 = (-3L);
    int *l_253 = &g_73;
    short * const *l_256 = &g_230[7][1][8];
    char *l_259 = &l_252;
    unsigned char *l_312[9] = {&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195};
    unsigned char ** const l_311 = &l_312[7];
    int *l_354 = &g_7[0][6];
    int l_376 = 0x4A2ECB4CL;
    int **l_393[1];
    int i;
    for (i = 0; i < 1; i++)
        l_393[i] = (void*)0;
    (*l_253) = (safe_mul_func_uint8_t_u_u(l_249, (safe_lshift_func_uint16_t_u_s((g_74[1][0] < (l_249 > p_27)), l_252))));
    if (p_27)
    {
        int l_268[4];
        short *l_282 = &g_231;
        int i;
        for (i = 0; i < 4; i++)
            l_268[i] = 1L;
        for (g_68 = 5; (g_68 != 25); g_68++)
        {
            unsigned char l_262 = 247UL;
            return l_262;
        }
        for (g_68 = 0; (g_68 <= 1); g_68 += 1)
        {
            short ***l_270 = (void*)0;
            int l_286 = (-8L);
            short l_297 = (-1L);
            for (p_27 = 0; (p_27 <= 1); p_27 += 1)
            {
                unsigned short * const l_267 = &g_157;
                int *l_269 = &g_7[p_27][g_68];
                short ****l_271 = &g_228[2][0][0];
                int i, j;
                (*l_269) = ((&g_195 == &g_195) != ((g_7[p_27][(g_68 + 7)] == (0x31B9A4E5L <= ((g_126 == 0UL) < (safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((&g_74[1][0] == l_267), ((*l_253) = func_48((p_27 | p_26), &g_7[0][5], &g_7[0][2])))) & l_268[0]), p_26))))) && l_268[0]));
                (*l_253) = ((*l_269) = ((&l_256 == ((*l_271) = l_270)) < (safe_rshift_func_uint16_t_u_u(65526UL, 9))));
                if ((*l_269))
                    break;
                for (l_249 = 3; (l_249 <= 8); l_249 += 1)
                {
                    char l_278 = 0xF4L;
                    short * const l_281 = &g_231;
                    short **l_283 = &g_230[7][1][7];
                    int *l_284 = &g_7[1][4];
                    if ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(l_278, (g_7[1][1] & (4L >= func_48((~(l_281 == ((*l_283) = l_282))), &g_59, func_43((l_268[3] = (((((*l_259) = (p_27 != 0xDBL)) >= 0xAFL) || p_27) < l_268[0])), l_284)))))), 0)))
                    {
                        return l_268[0];
                    }
                    else
                    {
                        int **l_285 = &g_123;
                        (*l_285) = (void*)0;
                        (*l_269) = (((l_286 & 65528UL) > g_59) || (l_297 = (255UL != (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(0x1395L, ((&g_229[4] == &g_229[7]) < (l_268[0] && (safe_rshift_func_int16_t_s_u(((*l_253) | 0x32D7ADB1L), l_286)))))), p_26)), g_7[0][6])), 0x16L)))));
                    }
                }
            }
        }
    }
    else
    {
        int l_300 = 0x30C50E76L;
        int *l_329 = &g_7[0][6];
        short ** const *l_344 = (void*)0;
        short ** const **l_343 = &l_344;
        char **l_360 = &l_259;
        unsigned l_382[2];
        unsigned ** const l_385[4][5][7] = {{{&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}}, {{&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}}, {{&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}}, {{&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}, {&g_168, &g_168, &g_168, &g_168, &g_168, &g_168, &g_168}}};
        short ***l_389 = &g_229[7];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_382[i] = 0x718F28EBL;
        if ((safe_sub_func_int16_t_s_s(func_48(l_300, &g_73, &g_59), p_26)))
        {
            unsigned char *l_307 = (void*)0;
            unsigned char *l_308[6][9] = {{&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, (void*)0}, {&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, (void*)0}, {&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, (void*)0}, {&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, (void*)0}, {&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, (void*)0}, {&g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, &g_195, (void*)0}};
            int l_309 = (-9L);
            int **l_310 = &g_123;
            int i, j;
            (*l_253) = func_48((safe_sub_func_uint8_t_u_u(0xB2L, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_26 = g_120), 5)), func_48(g_158, func_43((l_309 = 0xE6EBF4BDL), &g_59), &l_300))))), ((*l_310) = &p_27), &l_300);
            g_313 = l_311;
        }
        else
        {
            unsigned short *l_319 = &g_74[1][0];
            int l_324[9][8][3] = {{{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}, {{9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}, {9L, 0xD012A8B3L, 0L}}};
            int l_325[1];
            int *l_326 = &g_7[0][6];
            short *** const *l_340 = &g_228[4][1][0];
            int * const *l_353 = &g_123;
            short ***l_390 = &g_229[7];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_325[i] = 1L;
            if ((safe_add_func_uint32_t_u_u((0x2AL || func_62(func_43((&g_229[7] == &l_256), func_43(((*g_168) = ((*l_253) | (safe_lshift_func_int8_t_s_u((((*l_326) = (g_47 > ((((*l_319) = p_27) ^ (l_300 <= (safe_mul_func_int8_t_s_s(((*l_259) = (l_325[0] = (l_324[5][3][1] = (safe_mod_func_int32_t_s_s(0x8C3ED867L, l_300))))), 0xDEL)))) & 7L))) & l_300), 2)))), &g_59)), p_27, &g_73, &g_73)), 0xD0CED8A4L)))
            {
                unsigned char l_328[6][10] = {{6UL, 0x95L, 0x35L, 0x95L, 6UL, 0x7DL, 0x35L, 0x7DL, 6UL, 0x95L}, {6UL, 0x95L, 0x35L, 0x95L, 6UL, 0x7DL, 0x35L, 0x7DL, 6UL, 0x95L}, {6UL, 0x95L, 0x35L, 0x95L, 6UL, 0x7DL, 0x35L, 0x7DL, 6UL, 0x95L}, {6UL, 0x95L, 0x35L, 0x95L, 6UL, 0x7DL, 0x35L, 0x7DL, 6UL, 0x95L}, {6UL, 0x95L, 0x35L, 0x95L, 6UL, 0x7DL, 0x35L, 0x7DL, 6UL, 0x95L}, {6UL, 0x95L, 0x35L, 0x95L, 6UL, 0x7DL, 0x35L, 0x7DL, 6UL, 0x95L}};
                int *l_339[2][7][3] = {{{&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}}, {{&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}, {&g_73, &g_73, (void*)0}}};
                int i, j, k;
                for (l_249 = 0; (l_249 <= 0); l_249 += 1)
                {
                    int **l_327 = &l_326;
                    int i;
                    (*l_327) = &l_325[l_249];
                    for (g_47 = 0; (g_47 <= 2); g_47 += 1)
                    {
                        (**l_327) = (p_27 != l_328[2][9]);
                        if (p_26)
                            break;
                        g_123 = ((*l_327) = (l_329 = &g_59));
                    }
                    (*l_327) = func_43((safe_mod_func_uint16_t_u_u(p_26, 65535UL)), (*l_327));
                    (*l_327) = (*l_327);
                    for (g_120 = 0; (g_120 <= 2); g_120 += 1)
                    {
                        short *** const **l_341 = (void*)0;
                        int **l_345 = &l_253;
                        char **l_352 = &l_259;
                        p_27 = (((*l_329) = ((g_342[5] = l_340) != l_343)) && 5UL);
                        (*l_345) = ((*l_327) = &p_27);
                        (*l_329) = ((**l_327) = func_48(((+p_27) || g_68), &g_59, &l_300));
                    }
                }
                for (l_300 = (-3); (l_300 < 24); ++l_300)
                {
                    char ***l_363 = &g_361[3][0];
                    int l_381 = 0L;
                    int **l_383 = &g_123;
                    (*l_383) = func_43((safe_lshift_func_int16_t_s_u(((4294967295UL & (l_360 != ((*l_363) = g_361[6][2]))) & (safe_mod_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s((*g_362), ((safe_mod_func_uint16_t_u_u(0UL, (safe_add_func_uint8_t_u_u((p_26 = (l_381 = (safe_rshift_func_uint8_t_u_s((!((((*l_329) <= p_27) | (l_376 = p_27)) <= (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((((*g_314) = (*g_314)) < 0xB7L), l_381)), 0x85L)))), 2)))), l_382[0])))) < p_27))), 1UL)) <= p_27) && p_27) > p_27), 0x48L))), g_7[1][4])), &g_7[0][6]);
                }
                for (l_249 = 0; (l_249 <= 1); l_249 += 1)
                {
                    int l_384 = 3L;
                    return l_384;
                }
            }
            else
            {
                unsigned ***l_386 = &g_167;
                int **l_387 = &g_355[4];
                int **l_388 = &l_326;
                (*l_386) = l_385[3][0][0];
                (*l_388) = ((*l_387) = func_43(p_27, (l_326 = ((*l_387) = func_43(p_27, &g_73)))));
                (*l_387) = &g_59;
                p_27 = ((**l_388) = (l_389 != (g_228[1][1][2] = l_390)));
            }
            (*l_253) = ((*l_354) = (*l_253));
        }
        for (g_68 = 9; (g_68 == 15); ++g_68)
        {
            if ((*l_354))
                break;
            (*l_329) = 0x998E22B8L;
        }
    }
    g_355[4] = &g_59;
    return (*l_354);
}







static int func_37(unsigned char p_38, int * p_39, short p_40, int * p_41, unsigned char p_42)
{
    unsigned char l_46[8][8] = {{0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}, {0xA0L, 1UL, 252UL, 255UL, 0UL, 1UL, 246UL, 250UL}};
    int l_91 = 0xCF7E1B1CL;
    int *l_151 = &l_91;
    int *l_183 = &g_59;
    unsigned **l_200 = &g_168;
    short l_201 = (-3L);
    int i, j;
    for (p_38 = 1; (p_38 <= 7); p_38 += 1)
    {
        int *l_84[10] = {&g_7[1][8], &g_7[0][6], &g_7[1][8], &g_7[0][6], &g_7[1][8], &g_7[0][6], &g_7[1][8], &g_7[0][6], &g_7[1][8], &g_7[0][6]};
        char *l_121 = &g_83;
        const short l_141[5] = {(-10L), (-1L), (-10L), (-1L), (-10L)};
        unsigned **l_169 = &g_168;
        int l_181[7][4] = {{(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}, {(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}, {(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}, {(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}, {(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}, {(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}, {(-4L), 0xB88CA998L, 0x4C412B3BL, 0xB88CA998L}};
        short l_192 = 0x4C83L;
        int i, j;
        if ((g_47 = (*p_41)))
        {
            for (g_47 = 0; (g_47 <= 7); g_47 += 1)
            {
                int *l_58[8][5] = {{&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}, {&g_7[0][6], &g_7[0][6], &g_59, &g_7[0][6], &g_7[0][6]}};
                unsigned *l_67 = &g_68;
                char *l_81 = (void*)0;
                char *l_82 = &g_83;
                int i, j;
                l_91 = func_48((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_59 = l_46[g_47][g_47]), (((((((*l_82) = (safe_lshift_func_int16_t_s_u(func_62(func_43(((*l_67) = g_7[1][7]), p_39), g_47, p_39, &g_7[0][6]), (safe_rshift_func_uint8_t_u_s((p_38 & g_7[0][6]), 3))))) ^ p_40) ^ l_46[3][0]) != l_46[4][3]) <= l_46[3][2]) == p_40))), p_40)) < 4294967287UL), 0)), p_39, l_84[4]);
            }
        }
        else
        {
            char l_92[7] = {0x07L, 0x07L, (-1L), 0x07L, 0x07L, (-1L), 0x07L};
            int l_102 = 0x16A80D17L;
            short l_132[7][4] = {{0x7EEDL, 3L, 0x3854L, 0xCA3DL}, {0x7EEDL, 3L, 0x3854L, 0xCA3DL}, {0x7EEDL, 3L, 0x3854L, 0xCA3DL}, {0x7EEDL, 3L, 0x3854L, 0xCA3DL}, {0x7EEDL, 3L, 0x3854L, 0xCA3DL}, {0x7EEDL, 3L, 0x3854L, 0xCA3DL}, {0x7EEDL, 3L, 0x3854L, 0xCA3DL}};
            const int *l_162 = &g_7[0][6];
            int i, j;
            l_92[4] = func_62(&l_91, func_48(g_74[1][1], &g_7[0][1], &g_59), &l_91, l_84[4]);
            if ((g_73 = 0L))
            {
                int *l_101 = &g_59;
                for (g_68 = 2; (g_68 <= 9); g_68 += 1)
                {
                    unsigned *l_96 = &g_47;
                    unsigned **l_95 = &l_96;
                    int *l_100 = &g_73;
                    int **l_99 = &l_100;
                    int i;
                    if ((~(((((*p_39) >= l_92[3]) || ((-1L) || (safe_lshift_func_uint16_t_u_s((l_84[g_68] == ((*l_95) = (void*)0)), 13)))) | (safe_lshift_func_int16_t_s_u(0L, (((*l_99) = l_84[9]) == p_41)))) ^ func_48((func_48((l_102 = (((func_62(l_101, g_7[0][6], p_41, p_39) == p_38) != l_91) | g_68)), p_39, &l_91) <= 1L), &g_7[0][6], p_39))))
                    {
                        g_59 = (g_74[1][0] == p_38);
                    }
                    else
                    {
                        int **l_103 = &l_84[(p_38 + 1)];
                        (*l_103) = ((*l_99) = p_39);
                        if ((*p_39))
                            continue;
                    }
                    return (*p_39);
                }
                for (p_40 = 7; (p_40 >= 1); p_40 -= 1)
                {
                    unsigned l_104[10];
                    int **l_105 = &l_84[1];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_104[i] = 0UL;
                    l_91 = (&p_41 == &p_39);
                    (*l_105) = func_43(l_104[9], &g_73);
                    p_39 = ((*l_105) = (p_41 = (void*)0));
                }
                if ((g_74[0][2] < p_38))
                {
                    if (p_42)
                        break;
                    for (g_59 = 1; (g_59 <= 7); g_59 += 1)
                    {
                        unsigned char l_106 = 0x98L;
                        return l_106;
                    }
                    g_73 = (g_68 <= (safe_add_func_uint8_t_u_u(p_38, 0x5DL)));
                    (*l_101) = (*l_101);
                }
                else
                {
                    unsigned l_109 = 0x492E8FA5L;
                    (*l_101) = p_42;
                }
            }
            else
            {
                const unsigned short l_110 = 65532UL;
                if (l_110)
                    break;
                for (g_68 = 0; (g_68 <= 7); g_68 += 1)
                {
                    g_73 = (g_7[0][5] < p_38);
                    for (p_40 = 0; (p_40 <= 7); p_40 += 1)
                    {
                        int l_115 = 0x854D8CADL;
                        g_59 = (safe_mul_func_int16_t_s_s(0x1A5EL, (safe_rshift_func_int8_t_s_s(l_115, 7))));
                    }
                    g_73 = (0x87F91F76L > (*p_41));
                }
            }
            if ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_120 ^ l_46[0][3]), 4)), (p_38 >= ((void*)0 != l_121)))))
            {
                int *l_122[2][2] = {{&g_7[0][6], &l_91}, {&g_7[0][6], &l_91}};
                const int *l_125[3][2] = {{&g_126, &g_126}, {&g_126, &g_126}, {&g_126, &g_126}};
                const int **l_124 = &l_125[2][1];
                const int **l_127 = (void*)0;
                const int *l_129 = &g_73;
                const int **l_128 = &l_129;
                int i, j;
                g_123 = l_122[1][1];
                (*l_128) = ((*l_124) = (void*)0);
            }
            else
            {
                for (p_42 = 0; (p_42 <= 7); p_42 += 1)
                {
                    int **l_130 = &l_84[0];
                    int l_131 = 0xDF9A620EL;
                    (*l_130) = &g_73;
                    l_131 = (*g_123);
                }
                if (l_132[0][0])
                    break;
            }
            if ((l_91 = l_91))
            {
                const int l_135 = 0x60806C52L;
                int *l_136 = (void*)0;
                short *l_137 = &l_132[1][1];
                int l_138 = (-1L);
                int *l_154 = &g_73;
                int *l_182 = &l_138;
                unsigned short *l_184 = &g_157;
                l_138 = (safe_add_func_int16_t_s_s(((((*l_137) = ((l_135 | ((((void*)0 != &g_68) && p_38) | l_46[6][0])) || (l_91 = func_62(&g_7[0][6], g_68, &g_7[1][4], l_136)))) & g_7[0][6]) ^ l_92[2]), g_7[0][6]));
                for (l_138 = 6; (l_138 >= 0); l_138 -= 1)
                {
                    unsigned *l_142 = &g_120;
                    int l_150 = (-4L);
                    short **l_160 = &l_137;
                    unsigned l_171 = 0x773B0532L;
                }
                (*l_182) = ((safe_lshift_func_uint16_t_u_s((0x762FL >= ((safe_add_func_int16_t_s_s(g_126, g_120)) == 0xBAACL)), p_40)) | ((*l_184) = p_42));
            }
            else
            {
                unsigned l_189 = 0xA0A612E5L;
                unsigned char *l_193 = &l_46[5][4];
                unsigned char *l_194 = &g_195;
                unsigned *l_208 = &g_120;
                (*l_151) = (((safe_rshift_func_uint16_t_u_u(((+((safe_lshift_func_uint8_t_u_u(((l_189 && (safe_rshift_func_uint8_t_u_u(((*l_193) = (p_42 < l_192)), 3))) | ((*l_194) = g_158)), 6)) == (g_158 == (func_48((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((void*)0 == l_200), 0x593F6757L)), ((*l_151) < 4294967291UL))), &g_73, &g_73) > 0L)))) | l_201), 9)) == p_42) == 0xFBL);
                if ((safe_mul_func_int8_t_s_s(((func_48(p_42, func_43(((safe_rshift_func_int8_t_s_s(l_189, p_40)) == 0x8D2DL), &g_7[0][6]), &g_59) ^ 0x4194430BL) || p_38), g_74[1][0])))
                {
                    if ((*g_123))
                        break;
                    for (l_189 = 0; (l_189 <= 2); l_189 += 1)
                    {
                        const int **l_213 = &l_162;
                        int i, j;
                        (*l_213) = (void*)0;
                        return g_74[l_189][l_189];
                    }
                }
                else
                {
                    for (l_201 = 0; l_201 < 7; l_201 += 1)
                    {
                        for (p_42 = 0; p_42 < 4; p_42 += 1)
                        {
                            l_132[l_201][p_42] = 0x90D9L;
                        }
                    }
                }
                if ((*l_183))
                {
                    int **l_216 = &l_84[4];
                    g_59 = func_48(p_42, ((*l_216) = func_43((safe_add_func_uint8_t_u_u((*l_162), ((*l_183) && g_158))), l_208)), func_43((safe_mul_func_int16_t_s_s(0xA906L, ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*l_151) = 0xA89A1ED7L), 0xCA35FFEBL)), l_189)) >= p_38))), &g_7[1][0]));
                }
                else
                {
                    short *l_225 = &l_132[0][0];
                    short **l_224 = &l_225;
                    short ***l_223[3][1];
                    short ****l_226 = (void*)0;
                    short ****l_227 = &l_223[0][0];
                    char *l_246 = &l_92[4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_223[i][j] = &l_224;
                    }
                    if (((((*l_227) = l_223[0][0]) == g_228[2][0][0]) > (safe_sub_func_int16_t_s_s(func_62(func_43(((**g_167) = 9UL), &l_102), p_38, &l_181[3][3], p_39), 0x76D0L))))
                    {
                        int **l_240 = &l_84[3];
                        (*l_151) = (-3L);
                        (*l_240) = func_43((l_189 && ((*l_121) = l_189)), &g_7[0][6]);
                        if ((*l_151))
                            break;
                    }
                    else
                    {
                        int **l_241 = &l_183;
                        (*l_241) = (void*)0;
                        (*l_151) = ((safe_add_func_int32_t_s_s((*g_123), ((g_126 > (safe_mod_func_int32_t_s_s((l_246 != &g_83), p_42))) < (-1L)))) == (*l_162));
                    }
                }
                for (g_157 = 0; (g_157 <= 7); g_157 += 1)
                {
                    l_102 = (+l_189);
                }
            }
        }
        return p_38;
    }
    return (*l_183);
}







static int * func_43(unsigned p_44, int * p_45)
{
    return p_45;
}







static int func_48(int p_49, int * p_50, int * p_51)
{
    int *l_85 = &g_73;
    int l_86[3];
    char *l_89 = &g_83;
    int *l_90[4][6][7] = {{{&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}}, {{&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}}, {{&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}}, {{&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}, {&g_59, &l_86[0], &g_59, &g_7[0][8], &l_86[1], (void*)0, &l_86[0]}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_86[i] = 0x852B186EL;
    l_85 = &g_7[0][6];
    l_86[0] = (*p_51);
    g_73 = ((safe_sub_func_uint32_t_u_u((&g_83 != l_89), 1UL)) ^ (*p_50));
    return (*p_50);
}







static short func_62(int * p_63, short p_64, int * p_65, int * p_66)
{
    unsigned *l_71 = (void*)0;
    int l_78 = 0x0676DFA5L;
    for (p_64 = 0; (p_64 == (-15)); p_64 = safe_sub_func_int32_t_s_s(p_64, 1))
    {
        int *l_72 = &g_73;
        int *l_75 = &g_7[1][7];
        int **l_76 = (void*)0;
        int **l_77 = &l_72;
        g_74[1][0] = ((*l_72) = (((void*)0 != l_71) & ((+p_64) ^ 0x7A5C6A8BL)));
        (*l_77) = l_75;
    }
    return l_78;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_74[i][j], "g_74[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_531, "g_531", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_666[i], "g_666[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1105[i][j][k], "g_1105[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1111[i][j], "g_1111[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1169, "g_1169", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1282[i][j][k], "g_1282[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
