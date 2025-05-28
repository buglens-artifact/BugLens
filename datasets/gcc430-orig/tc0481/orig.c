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



static unsigned char g_2[3] = {0UL, 0UL, 0UL};
static int g_3 = 0xE7D8A870L;
static int *g_35 = &g_3;
static int **g_34 = &g_35;
static unsigned g_42 = 0x70FC2448L;
static short g_49 = 0x5752L;
static unsigned g_56[10][1] = {{0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}, {0x6CF6D707L}};
static int g_61 = 0xB81002A9L;
static unsigned short g_72 = 0UL;
static unsigned g_80 = 0x454D88F4L;
static unsigned g_91 = 9UL;
static int g_96[7][5][7] = {{{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}, {{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}, {{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}, {{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}, {{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}, {{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}, {{0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}, {0x37DEDC86L, 0x4368EC64L, 0xA845225CL, (-1L), 0x6E94FA07L, (-3L), 0xA845225CL}}};
static char g_104[7][8] = {{(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L}};
static unsigned short g_160 = 65531UL;
static short *g_170 = (void*)0;
static int g_231 = (-8L);
static unsigned g_295 = 9UL;
static unsigned *g_303[7][7][1] = {{{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}, {{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}, {{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}, {{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}, {{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}, {{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}, {{&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}, {&g_295}}};
static unsigned char g_305 = 255UL;
static unsigned char g_307 = 0UL;
static char g_444[4] = {0L, 0x03L, 0L, 0x03L};
static char *g_470 = (void*)0;
static char **g_469 = &g_470;
static short g_503 = 0L;
static short *g_502[4][10][6] = {{{&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}}, {{&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}}, {{&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}}, {{&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}, {&g_503, &g_503, &g_503, (void*)0, &g_503, &g_503}}};
static unsigned g_707 = 1UL;
static char g_764 = 0x77L;
static unsigned char g_765 = 1UL;
static unsigned **g_810[5] = {&g_303[1][4][0], &g_303[1][4][0], &g_303[1][4][0], &g_303[1][4][0], &g_303[1][4][0]};
static char g_1006[4] = {0x7CL, 0x00L, 0x7CL, 0x00L};
static int g_1030[1] = {(-10L)};
static unsigned short *g_1070[10][8][3] = {{{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}, {{&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}, {&g_160, &g_72, &g_160}}};
static unsigned short **g_1069 = &g_1070[5][0][2];
static unsigned char g_1154 = 255UL;



static short func_1(void);
static int * func_7(int ** p_8, unsigned short p_9);
static int ** func_10(int p_11, unsigned p_12);
static char func_15(short p_16);
static int func_18(int * p_19, char p_20, unsigned p_21, char p_22);
static int * func_23(int ** p_24, int * p_25);
static int * func_28(int ** p_29);
static int ** func_30(short p_31);
static unsigned char func_32(int * p_33);
static unsigned func_40(char p_41);
static short func_1(void)
{
    unsigned char l_611 = 1UL;
    int *l_1062[2];
    unsigned char l_1063 = 0x96L;
    unsigned l_1095 = 0x201A5931L;
    unsigned l_1146 = 0x7FA27A3CL;
    int l_1147[9][10] = {{(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}, {(-1L), 1L, (-1L), 0xE2A7F3DCL, 0L, 2L, 1L, 0x92F53044L, 0xE6D7A7D2L, 8L}};
    int l_1157 = (-1L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_1062[i] = (void*)0;
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    {
        unsigned l_4 = 0x073FF82FL;
        int *l_6 = &g_3;
        int **l_5 = &l_6;
        char l_17 = (-9L);
        unsigned short *l_614 = &g_72;
        int *l_1043 = &g_96[6][2][5];
        int *l_1044[9] = {&g_1030[0], &g_1030[0], &g_1030[0], &g_1030[0], &g_1030[0], &g_1030[0], &g_1030[0], &g_1030[0], &g_1030[0]};
        unsigned *l_1059 = (void*)0;
        unsigned *l_1060 = (void*)0;
        unsigned *l_1061 = &g_80;
        unsigned short **l_1071 = &l_614;
        unsigned l_1076 = 0x947DDBBDL;
        char ***l_1079 = &g_469;
        char l_1090 = (-9L);
        unsigned l_1091 = 0x14FDAF23L;
        char l_1152 = (-1L);
        int i;
        (*l_5) = (l_4 , (void*)0);
        (*g_34) = func_7(func_10(((func_15(((l_17 & ((void*)0 != (*l_5))) | ((void*)0 == &l_6))) == (!(safe_unary_minus_func_int16_t_s(l_611)))) && (((*l_614) = (safe_lshift_func_uint8_t_u_s((&g_307 != (void*)0), 4))) == 0x73D6L)), l_611), l_611);
        g_1030[0] = ((*l_1043) |= func_32((*g_34)));
        if (((safe_rshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*l_1043) = (l_611 && (l_611 | (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(func_15(func_32((l_1062[0] = func_23(func_10(l_611, (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(0xF2C3L, 11)) , 0x85L), (safe_lshift_func_uint16_t_u_u(func_40((((*l_1061) = (g_707 &= g_295)) , g_231)), 10))))), (*l_5))))), 14)), l_611))))), l_611)), g_1006[2])) , l_1063))
        {
            unsigned l_1064 = 4294967287UL;
            unsigned short **l_1066 = &l_614;
            unsigned short ***l_1065 = &l_1066;
            unsigned short **l_1068 = &l_614;
            unsigned short ***l_1067 = &l_1068;
            unsigned l_1081[1][10] = {{4294967289UL, 4294967289UL, 0UL, 4294967289UL, 4294967289UL, 0UL, 4294967289UL, 4294967289UL, 0UL, 4294967289UL}};
            char *l_1089 = &g_444[3];
            int l_1094 = 0xECBFABFAL;
            int l_1098 = 0xB974C675L;
            int l_1102 = 0xE6ACE40BL;
            int l_1103 = 0x3FC50F2EL;
            int l_1105 = 1L;
            int l_1108 = 0x7978FF2AL;
            unsigned l_1122 = 0xCC0EDB59L;
            int l_1145 = 0x934A479DL;
            int i, j;
            if (l_1064)
                break;
            l_1071 = (g_1069 = ((*l_1067) = ((*l_1065) = &l_614)));
            if (g_765)
            {
                int l_1087 = 1L;
                unsigned *l_1088 = &g_91;
                unsigned *l_1092 = &l_1091;
                unsigned short l_1093 = 6UL;
                int l_1100 = 1L;
                int l_1101 = (-7L);
                int l_1104 = (-6L);
                int l_1107 = (-1L);
                int l_1109[6];
                unsigned l_1110 = 4294967295UL;
                unsigned short l_1113 = 0x0F57L;
                int i;
                for (i = 0; i < 6; i++)
                    l_1109[i] = 0xF51FAF4FL;
                if (l_1064)
                    break;
                l_1094 ^= (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((((*l_1092) = (l_1064 != (l_1076 == (((((*l_1043) > (&g_469 != l_1079)) != ((safe_unary_minus_func_int16_t_s(l_1081[0][4])) , ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(((g_2[1] != (safe_mod_func_int8_t_s_s((((*g_469) == ((((*l_1088) = l_1087) > l_1081[0][4]) , l_1089)) , l_1087), l_1087))) , l_1087))), l_1090)) == l_1081[0][4]))) , 1UL) != l_1091)))) <= l_1087) > (-7L)) > l_1093), (-7L))), (**g_1069)));
                l_1095 = l_1087;
                for (l_1064 = 0; (l_1064 <= 2); l_1064 += 1)
                {
                    int l_1096 = (-2L);
                    int l_1097 = 0L;
                    int l_1099 = (-1L);
                    int l_1106[2][7][6] = {{{7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}}, {{7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}, {7L, (-1L), 1L, (-4L), (-4L), 1L}}};
                    int l_1116 = 0x68B5A2AEL;
                    int i, j, k;
                    (*l_5) = &g_3;
                    ++l_1110;
                    l_1102 = (((!func_40(((6L == l_1096) , (((l_1099 & l_1113) ^ (l_1101 , l_1099)) > (l_1109[5] ^ ((g_2[g_3] ^= (safe_add_func_uint8_t_u_u(g_72, 0x9CL))) <= l_1098)))))) , 4294967295UL) , l_1116);
                    return l_1102;
                }
            }
            else
            {
                short l_1134 = 0x45E1L;
                int l_1139 = 0x609EEA82L;
                unsigned short *l_1140 = &g_160;
                if ((&g_1070[5][0][2] == (void*)0))
                {
                    int l_1119 = 0xC92E6D87L;
                    for (g_61 = 3; (g_61 >= (-9)); --g_61)
                    {
                        (*l_1043) |= l_1119;
                    }
                }
                else
                {
                    unsigned l_1120 = 0x8F77F18FL;
                    (*l_1043) = l_1120;
                    (*g_34) = l_1062[0];
                    (*l_1043) ^= g_444[3];
                }
                for (l_1064 = 0; (l_1064 <= 0); l_1064 += 1)
                {
                    int l_1121 = 0x32B31DBBL;
                    int **l_1125[5][8] = {{&l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0]}, {&l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0]}, {&l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0]}, {&l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0]}, {&l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0], &l_6, &l_1062[0], &l_1062[0]}};
                    int i, j;
                    ++l_1122;
                    for (l_1105 = 0; (l_1105 <= 1); l_1105 += 1)
                    {
                        int i;
                        l_1062[l_1105] = func_28(l_1125[1][5]);
                    }
                }
                (*l_1043) = (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((func_40(l_1108) == ((*l_1089) = 0xF5L)) | (safe_sub_func_uint16_t_u_u((l_1102 <= l_1134), ((!(safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_1134, (-2L))), 0))) <= ((*l_1140)--))))), (((safe_lshift_func_uint8_t_u_u((l_1098 > ((l_1145 >= 0x0F95E289L) , (*l_1043))), g_1030[0])) , 0xE8D8L) , 6UL))), l_1103)) == l_1146), l_1081[0][4]));
                for (l_1108 = 0; (l_1108 <= 3); l_1108 += 1)
                {
                    (*l_1043) = g_1030[0];
                    if (g_96[6][2][2])
                        break;
                    (*g_34) = &l_1139;
                    for (l_1094 = 3; (l_1094 >= 0); l_1094 -= 1)
                    {
                    }
                }
            }
            return l_1147[2][1];
        }
        else
        {
            int l_1149 = 1L;
            int l_1150 = 0xEE749103L;
            int l_1151 = 6L;
            int l_1153[7] = {0xD0B5A530L, 0L, 0xD0B5A530L, 0L, 0xD0B5A530L, 0L, 0xD0B5A530L};
            int i;
            for (l_1146 = 0; (l_1146 <= 1); l_1146 += 1)
            {
                unsigned char l_1148[10][6][4] = {{{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}, {{0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}, {0x9AL, 0x9DL, 0xE0L, 0x10L}}};
                int i, j, k;
                return l_1148[4][5][3];
            }
            ++g_1154;
        }
    }
    (*g_34) = l_1062[1];
    (*g_34) = l_1062[0];
    return l_1157;
}







static int * func_7(int ** p_8, unsigned short p_9)
{
    unsigned l_914[4][10] = {{0x7CA23D9EL, 4294967286UL, 0x0D99C34AL, 0x54497B3CL, 0x11E8B0EEL, 1UL, 0xB50C8248L, 4294967289UL, 0xB50C8248L, 1UL}, {0x7CA23D9EL, 4294967286UL, 0x0D99C34AL, 0x54497B3CL, 0x11E8B0EEL, 1UL, 0xB50C8248L, 4294967289UL, 0xB50C8248L, 1UL}, {0x7CA23D9EL, 4294967286UL, 0x0D99C34AL, 0x54497B3CL, 0x11E8B0EEL, 1UL, 0xB50C8248L, 4294967289UL, 0xB50C8248L, 1UL}, {0x7CA23D9EL, 4294967286UL, 0x0D99C34AL, 0x54497B3CL, 0x11E8B0EEL, 1UL, 0xB50C8248L, 4294967289UL, 0xB50C8248L, 1UL}};
    int *l_916 = &g_96[6][2][5];
    int l_924 = 0xA718BC9BL;
    int l_925 = (-1L);
    int l_926 = 0x890C6C5EL;
    int l_935 = 0L;
    int l_936 = 6L;
    int l_937 = (-1L);
    int l_938 = 0x6F0CB558L;
    int l_939 = (-5L);
    int l_940[6];
    int l_952 = 0x36FCECE6L;
    char l_953[1][6];
    int *l_1042 = &g_3;
    int i, j;
    for (i = 0; i < 6; i++)
        l_940[i] = 3L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_953[i][j] = 0x38L;
    }
    for (g_49 = 0; (g_49 < 7); g_49 = safe_add_func_uint32_t_u_u(g_49, 6))
    {
        unsigned short l_907[6][8];
        int l_915 = (-1L);
        int l_928 = 5L;
        int l_929 = (-5L);
        int l_930[5][7] = {{0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L}, {0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L}, {0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L}, {0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L}, {0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L, 0xF0F0B09BL, 0x7041EA27L}};
        unsigned l_945 = 0UL;
        unsigned short l_954 = 0x4498L;
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 8; j++)
                l_907[i][j] = 65531UL;
        }
        if ((0x53L && (g_707 != p_9)))
        {
            int *l_904 = &g_96[6][2][5];
            return l_904;
        }
        else
        {
            short l_913 = (-10L);
            int l_921[8] = {0x2AF3C6F1L, 2L, 0x2AF3C6F1L, 2L, 0x2AF3C6F1L, 2L, 0x2AF3C6F1L, 2L};
            unsigned l_981[6] = {4294967287UL, 4294967287UL, 1UL, 4294967287UL, 4294967287UL, 1UL};
            int l_1004 = 0x1B5A81DBL;
            short **l_1041 = (void*)0;
            int i;
            for (p_9 = 0; (p_9 >= 26); p_9++)
            {
                int *l_912 = (void*)0;
                int l_920 = 0x5BE78E27L;
                int l_922 = 1L;
                int l_931[10][3][8] = {{{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}, {{0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}, {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)}}};
                short l_944 = 0L;
                char l_1002[6][7] = {{0xC1L, 0x93L, (-1L), 0x31L, 0x27L, 0x44L, 0x27L}, {0xC1L, 0x93L, (-1L), 0x31L, 0x27L, 0x44L, 0x27L}, {0xC1L, 0x93L, (-1L), 0x31L, 0x27L, 0x44L, 0x27L}, {0xC1L, 0x93L, (-1L), 0x31L, 0x27L, 0x44L, 0x27L}, {0xC1L, 0x93L, (-1L), 0x31L, 0x27L, 0x44L, 0x27L}, {0xC1L, 0x93L, (-1L), 0x31L, 0x27L, 0x44L, 0x27L}};
                int i, j, k;
                if ((l_907[1][2] , (l_913 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_9, ((void*)0 != l_912))), 13)))))
                {
                    int *l_918 = &g_61;
                    int l_923 = 4L;
                    int l_927 = 8L;
                    int l_932 = 0xBDB1C881L;
                    int l_933 = (-10L);
                    int l_934 = 0x64A4670EL;
                    int l_941 = 1L;
                    int l_942 = 0x00800BF3L;
                    int l_943[1][2][8];
                    int *l_948 = &l_930[2][0];
                    int *l_949 = &g_96[6][2][5];
                    int *l_950 = &l_943[0][1][7];
                    int *l_951[9][10] = {{&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}, {&l_936, (void*)0, &l_943[0][0][0], &l_921[1], &l_922, &l_940[2], &l_932, &l_924, (void*)0, (void*)0}};
                    unsigned char *l_965 = &g_2[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_943[i][j][k] = (-9L);
                        }
                    }
                    if (g_305)
                        break;
                    if ((l_914[2][7] != (func_32(l_912) != (((l_915 = l_914[2][7]) | (p_9 || p_9)) >= l_914[2][7]))))
                    {
                        int **l_917[7][2][8] = {{{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}, {{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}, {{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}, {{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}, {{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}, {{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}, {{&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}, {&l_912, &l_912, (void*)0, &l_912, &l_912, (void*)0, &l_912, &l_912}}};
                        char l_919 = 0xCAL;
                        int i, j, k;
                        l_918 = ((*p_8) = l_916);
                        --l_945;
                        (*g_34) = (*p_8);
                    }
                    else
                    {
                        (*l_916) = (p_9 > (*l_918));
                    }
                    ++l_954;
                    if (((safe_add_func_uint8_t_u_u(g_91, (&l_953[0][5] != (void*)0))) || (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((func_32((*g_34)) >= ((++(*l_965)) > ((0L && p_9) , (safe_sub_func_uint16_t_u_u(l_913, (safe_sub_func_int8_t_s_s((l_915 = (((!l_945) == 0x5142AC48L) || p_9)), l_921[3]))))))), p_9)), 0)), p_9))))
                    {
                        unsigned l_972 = 1UL;
                        l_972--;
                        (*l_948) = ((safe_lshift_func_uint8_t_u_u((l_921[4] != 0xB31892ADL), ((*l_916) , (safe_add_func_uint8_t_u_u((0UL || func_32((*g_34))), ((((!0x52A1L) <= (safe_div_func_int32_t_s_s(p_9, (p_9 , p_9)))) >= 65531UL) != g_231)))))) & 1UL);
                    }
                    else
                    {
                        return (*g_34);
                    }
                }
                else
                {
                    unsigned char l_985 = 0x56L;
                    int l_995 = 4L;
                    char l_1003[1][8] = {{7L, 7L, 0L, 7L, 7L, 0L, 7L, 7L}};
                    int l_1005 = 0L;
                    short l_1007[8] = {0xA0A6L, 0x85F9L, 0xA0A6L, 0x85F9L, 0xA0A6L, 0x85F9L, 0xA0A6L, 0x85F9L};
                    int l_1008 = (-4L);
                    int l_1009 = (-7L);
                    int i, j;
                    if ((~l_981[1]))
                    {
                        int *l_982 = &l_935;
                        int *l_983 = (void*)0;
                        int *l_984[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_984[i] = &l_924;
                        l_985--;
                    }
                    else
                    {
                        unsigned short l_990 = 0x5300L;
                        unsigned char *l_991[8][10][3] = {{{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}, {{&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}, {&g_305, (void*)0, (void*)0}}};
                        int *l_992 = &l_939;
                        int *l_993 = (void*)0;
                        int *l_994 = &l_921[2];
                        int *l_996 = &l_915;
                        int *l_997 = &l_937;
                        int *l_998 = &l_936;
                        int *l_999 = &l_921[1];
                        int *l_1000 = (void*)0;
                        int *l_1001[3];
                        char l_1010 = (-9L);
                        unsigned short l_1011[9][5][5] = {{{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}, {{0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}, {0xCB72L, 65535UL, 0UL, 0UL, 65535UL}}};
                        unsigned short *l_1031 = (void*)0;
                        unsigned short *l_1032 = &l_1011[7][3][4];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1001[i] = &l_920;
                        (*l_994) ^= ((*l_992) |= (safe_lshift_func_uint8_t_u_u((p_9 , (*l_916)), (l_990 ^ (g_104[2][2] | (g_305 = g_80))))));
                        l_995 = (-8L);
                        l_1011[0][3][1]--;
                        (*l_916) = (l_1007[1] , (((safe_rshift_func_int8_t_s_u(((p_9 > ((*l_1032) = (((+((l_921[4] = (!(safe_rshift_func_int8_t_s_u(((func_32(&l_935) ^ (++g_160)) , (l_1005 &= (((safe_lshift_func_int16_t_s_u((l_930[2][0] = ((0UL != ((safe_sub_func_uint32_t_u_u(((-9L) < (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((g_104[5][2] |= (l_907[1][6] , func_32(&l_921[1]))), 4)), 0xC436E6D3L)), p_9))), 0UL)) > l_1007[1])) <= 0x0DL)), 13)) <= p_9) == g_1030[0]))), 1)))) != p_9)) == 0xE6L) , p_9))) != l_913), l_1007[7])) != g_42) | 0x05L));
                    }
                    for (g_231 = 0; (g_231 <= 14); g_231++)
                    {
                        int *l_1035 = (void*)0;
                        char ***l_1038[7] = {&g_469, &g_469, &g_469, &g_469, &g_469, &g_469, &g_469};
                        int i;
                        (*l_916) &= (l_915 = l_985);
                        (*g_34) = l_1035;
                        (*l_916) = ((safe_div_func_uint32_t_u_u(p_9, func_32((*g_34)))) < (l_1038[1] == (p_9 , &g_469)));
                    }
                }
                for (l_913 = 0; (l_913 == (-18)); l_913 = safe_sub_func_int16_t_s_s(l_913, 3))
                {
                    return &g_1030[0];
                }
                return &g_1030[0];
            }
            (*l_916) = ((void*)0 != l_1041);
            return &g_1030[0];
        }
    }
    return l_1042;
}







static int ** func_10(int p_11, unsigned p_12)
{
    unsigned char *l_615 = &g_305;
    int *l_616 = &g_96[6][2][5];
    int l_624[3];
    unsigned **l_657[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    unsigned char l_659 = 0x5CL;
    int l_745 = 0xA7843650L;
    char **l_807 = (void*)0;
    unsigned short l_876 = 9UL;
    int **l_901 = &l_616;
    int i;
    for (i = 0; i < 3; i++)
        l_624[i] = 0x289FE443L;
    (*l_616) |= (p_11 > ((*l_615) &= p_11));
    if ((*l_616))
    {
        unsigned **l_617 = &g_303[2][6][0];
        int l_618 = 0x4523E2F4L;
        unsigned l_619[2][7][9] = {{{0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}}, {{0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}, {0UL, 0xE3FD4B33L, 0x6B2BC653L, 0xB563F358L, 0x9DE17E81L, 0xE075732AL, 0UL, 4294967290UL, 6UL}}};
        int l_625 = 0xC2531578L;
        unsigned char *l_626[1];
        unsigned ***l_628 = (void*)0;
        int l_635 = 0x9ECC6AFEL;
        char l_636 = 0x4CL;
        int l_637 = 0xA3BD537FL;
        int l_638 = 0x18466C6AL;
        int l_693 = 0x5BAC394AL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_626[i] = &g_2[0];
        l_625 ^= (((((*l_617) = l_616) != (void*)0) <= (~(l_618 , l_619[0][1][1]))) ^ (safe_rshift_func_uint16_t_u_s((*l_616), (safe_lshift_func_int8_t_s_s(p_11, l_624[1])))));
        if ((((*l_616) = ((*l_615) &= p_11)) != p_11))
        {
            unsigned ***l_627 = &l_617;
            int l_631 = 0x795902DBL;
            short *l_632 = &g_503;
            int *l_633[1];
            int l_634 = 1L;
            unsigned l_639 = 0xD43510F8L;
            int i;
            for (i = 0; i < 1; i++)
                l_633[i] = &l_624[1];
            l_625 |= ((*l_616) = (((l_628 = l_627) == (void*)0) | ((((*l_632) = (l_619[0][1][1] , (safe_mod_func_int8_t_s_s(l_631, (-3L))))) , p_12) , (p_12 > (*l_616)))));
            ++l_639;
        }
        else
        {
            int *l_646 = (void*)0;
            unsigned char l_650[8] = {248UL, 8UL, 248UL, 8UL, 248UL, 8UL, 248UL, 8UL};
            int l_651 = 0x0E28FFBEL;
            unsigned l_740 = 4294967289UL;
            int i;
            (*g_34) = &l_624[1];
            for (g_49 = (-25); (g_49 < 26); ++g_49)
            {
                int *l_644[3][7] = {{(void*)0, &g_96[6][2][5], (void*)0, &g_96[6][2][5], (void*)0, &g_96[6][2][5], (void*)0}, {(void*)0, &g_96[6][2][5], (void*)0, &g_96[6][2][5], (void*)0, &g_96[6][2][5], (void*)0}, {(void*)0, &g_96[6][2][5], (void*)0, &g_96[6][2][5], (void*)0, &g_96[6][2][5], (void*)0}};
                char *l_645 = &l_636;
                short *l_647 = &g_503;
                int i, j;
                l_651 = (((p_12 ^ ((*l_645) &= func_32(l_644[2][4]))) <= ((((*l_616) = (p_11 != p_12)) , l_646) != (((*l_647) = l_619[1][3][7]) , l_646))) > (safe_add_func_uint32_t_u_u((l_650[2] , l_638), 0x3542AC71L)));
                for (g_305 = 2; (g_305 <= 7); g_305 += 1)
                {
                    unsigned l_652 = 0xEF79F7ABL;
                    for (l_625 = 7; (l_625 >= 0); l_625 -= 1)
                    {
                        l_637 ^= p_12;
                        l_652--;
                    }
                }
            }
            for (g_91 = (-3); (g_91 == 35); g_91++)
            {
                unsigned **l_658 = &g_303[2][0][0];
                l_658 = l_657[1];
                if (l_659)
                    continue;
            }
            if ((p_12 , 0x647471D9L))
            {
                char *l_670 = &g_104[4][6];
                char *l_671 = &l_636;
                int l_672 = 0x71832B2FL;
                (*l_616) |= p_12;
            }
            else
            {
                unsigned char l_684 = 5UL;
                unsigned l_692 = 1UL;
                int l_706 = 0L;
                int l_733 = 0x49531C32L;
                int l_734 = 0L;
                int l_735 = 1L;
                int l_736[2];
                unsigned l_757 = 0x8BB27FD6L;
                int **l_768 = &g_35;
                unsigned l_779 = 0UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_736[i] = 0L;
                for (g_91 = 0; (g_91 <= 1); g_91 += 1)
                {
                    int *l_673 = &l_618;
                    int l_675 = 0x2016FE04L;
                    unsigned short *l_688 = &g_72;
                    unsigned short *l_689 = &g_160;
                    int l_705[6][3] = {{0xEA73D1EDL, 9L, 0x21167F32L}, {0xEA73D1EDL, 9L, 0x21167F32L}, {0xEA73D1EDL, 9L, 0x21167F32L}, {0xEA73D1EDL, 9L, 0x21167F32L}, {0xEA73D1EDL, 9L, 0x21167F32L}, {0xEA73D1EDL, 9L, 0x21167F32L}};
                    int i, j;
                    (*g_34) = l_673;
                    if (l_650[(g_91 + 1)])
                        break;
                    if (l_650[(g_91 + 3)])
                    {
                        return &g_35;
                    }
                    else
                    {
                        int *l_674 = &l_638;
                        int *l_676 = &l_651;
                        int *l_677 = &l_675;
                        int *l_678 = &l_625;
                        int *l_679 = (void*)0;
                        int *l_680 = &l_624[1];
                        int l_681 = 5L;
                        int *l_682 = &g_61;
                        int *l_683 = (void*)0;
                        int *l_687 = &l_637;
                        (*l_673) = l_635;
                        ++l_684;
                        (*l_687) = (p_11 , (l_684 | func_32(l_687)));
                    }
                    if ((7UL != ((*l_689) = ((*l_688) = g_42))))
                    {
                        (*l_616) &= ((safe_lshift_func_int16_t_s_s(func_32((p_11 , &l_651)), ((p_12 ^ l_692) ^ p_12))) , 0x425BBFACL);
                        (*g_34) = (*g_34);
                        (*l_616) ^= (*l_673);
                    }
                    else
                    {
                        int *l_694 = (void*)0;
                        int *l_695 = &l_651;
                        int *l_696 = &l_638;
                        int *l_697 = &l_635;
                        int *l_698 = &l_638;
                        int *l_699 = &l_651;
                        int *l_700 = &l_618;
                        int *l_701 = &l_651;
                        int *l_702 = &g_96[6][2][5];
                        int *l_703 = (void*)0;
                        int *l_704[5][5] = {{&g_96[0][1][2], &l_651, &l_637, &l_637, &l_651}, {&g_96[0][1][2], &l_651, &l_637, &l_637, &l_651}, {&g_96[0][1][2], &l_651, &l_637, &l_637, &l_651}, {&g_96[0][1][2], &l_651, &l_637, &l_637, &l_651}, {&g_96[0][1][2], &l_651, &l_637, &l_637, &l_651}};
                        int i, j;
                        g_707--;
                    }
                    for (l_684 = 0; (l_684 <= 4); l_684 += 1)
                    {
                        unsigned l_710 = 0x6312CCD7L;
                        int l_711 = 0xA8EFD78CL;
                        char *l_722 = (void*)0;
                        char *l_725 = (void*)0;
                        char *l_726 = &g_104[5][2];
                        l_711 = ((*l_673) = ((*l_616) |= l_710));
                        (*g_34) = (g_707 , (*g_34));
                        (*g_34) = ((((*l_689) = (safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((((*l_688) ^= ((p_12 != 1UL) ^ 6L)) , (safe_sub_func_int8_t_s_s((-10L), (safe_rshift_func_int8_t_s_u((l_625 = l_706), func_32((*g_34))))))) & p_12), (safe_mod_func_int8_t_s_s(((*l_726) = p_11), 8L)))), l_711)), g_42))) <= 0x847BL) , (*g_34));
                    }
                }
                g_96[6][2][5] |= 0xA267B340L;
                for (l_637 = 23; (l_637 == 24); l_637++)
                {
                    unsigned char l_737 = 0x9EL;
                    for (l_706 = 21; (l_706 < 6); l_706 = safe_sub_func_int16_t_s_s(l_706, 2))
                    {
                        int *l_731 = (void*)0;
                        int *l_732[10][6][4] = {{{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}, {{&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}, {&l_635, &g_61, &l_635, &g_61}}};
                        int i, j, k;
                        l_737--;
                        if (l_740)
                            continue;
                        if (p_11)
                            continue;
                    }
                    for (l_740 = 0; (l_740 < 59); l_740 = safe_add_func_int32_t_s_s(l_740, 2))
                    {
                        g_61 = p_12;
                        (*l_616) ^= (0x14064A3AL && p_11);
                    }
                }
                if ((((*l_615) = (safe_sub_func_int8_t_s_s(l_692, l_745))) <= (safe_div_func_uint32_t_u_u(p_11, func_40(((safe_lshift_func_int8_t_s_u((*l_616), (*l_616))) >= p_11))))))
                {
                    unsigned l_754[6][2] = {{1UL, 4294967295UL}, {1UL, 4294967295UL}, {1UL, 4294967295UL}, {1UL, 4294967295UL}, {1UL, 4294967295UL}, {1UL, 4294967295UL}};
                    int l_775 = 0x46AFD384L;
                    int **l_778 = &l_616;
                    int i, j;
                    if (((g_444[1] != (p_12 < (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((((p_11 <= p_12) , l_754[4][1]) > ((0UL <= ((4294967295UL & (safe_div_func_int16_t_s_s(l_684, (((((0x1C7490ECL && p_11) | 0xD9A1F4DDL) && p_11) <= l_757) , l_619[0][1][1])))) | 5UL)) , (-1L))), 4294967294UL)), 6)))) ^ 0L))
                    {
                        int *l_762 = (void*)0;
                        int *l_763[5][10][4] = {{{(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}}, {{(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}}, {{(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}}, {{(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}}, {{(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}, {(void*)0, &l_625, &l_637, &g_61}}};
                        int i, j, k;
                        g_765 &= ((g_764 ^= (((0x5E2CL && (((func_15((*l_616)) , (safe_add_func_int32_t_s_s((g_61 = (l_624[0] = (safe_sub_func_int32_t_s_s(l_618, ((*l_616) = l_735))))), ((((0xE2A5386EL ^ 4294967295UL) , (&g_307 == &g_307)) != 0x9F23L) & g_72)))) , g_305) || p_11)) <= g_3) | p_11)) , p_12);
                    }
                    else
                    {
                        int **l_766[2];
                        int ***l_767[3];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_766[i] = &g_35;
                        for (i = 0; i < 3; i++)
                            l_767[i] = &l_766[0];
                        (*g_34) = func_23((l_768 = l_766[1]), &g_96[6][2][5]);
                        l_616 = (*g_34);
                        l_625 &= (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((*l_616), (p_11 | (safe_div_func_int32_t_s_s(p_11, (((g_444[1] == 0x291FL) <= (*g_35)) & ((*g_35) == (!((l_775 = ((l_636 & ((*l_616) <= g_3)) <= 9L)) != 0xBD1FL))))))))), 0xF7L));
                    }
                    for (g_231 = (-29); (g_231 < (-21)); g_231 = safe_add_func_int16_t_s_s(g_231, 8))
                    {
                        l_646 = func_23(l_778, func_23(&g_35, &l_651));
                    }
                    (*l_778) = &l_651;
                }
                else
                {
                    unsigned l_782 = 0xDF18F5DFL;
                    if ((l_619[0][3][6] == 0xBDF3L))
                    {
                        l_779++;
                        l_782 = p_11;
                    }
                    else
                    {
                        (*g_34) = &l_638;
                    }
                }
            }
        }
    }
    else
    {
        int *l_793 = &l_745;
        unsigned **l_811 = &g_303[2][6][0];
        unsigned short l_812 = 0x59D5L;
        int l_821 = (-4L);
        int l_824 = 0x74F3F73AL;
        int l_825[6][8][5] = {{{1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}}, {{1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}}, {{1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}}, {{1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}}, {{1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}}, {{1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}, {1L, 0xDB8BCD96L, 0L, (-1L), 7L}}};
        unsigned char l_882 = 8UL;
        int i, j, k;
        for (g_91 = 0; (g_91 < 33); g_91 = safe_add_func_uint32_t_u_u(g_91, 4))
        {
            unsigned l_785 = 4294967287UL;
            int *l_788 = &l_745;
            short *l_800 = (void*)0;
            short *l_801 = &g_503;
            unsigned short *l_806 = &g_160;
            char **l_808 = &g_470;
            unsigned ***l_809[7][5] = {{&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}, {&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}, {&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}, {&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}, {&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}, {&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}, {&l_657[1], &l_657[1], &l_657[1], &l_657[1], &l_657[1]}};
            int i, j;
            for (g_49 = 2; (g_49 <= 6); g_49 += 1)
            {
                short l_789 = (-1L);
                unsigned short *l_790 = &g_160;
                (*l_616) ^= (((*l_615) = (7UL > g_72)) == (l_785 , (safe_sub_func_int8_t_s_s((func_32(l_788) , l_789), ((((void*)0 != &g_502[3][5][0]) > ((*l_790) = (p_12 , (*l_788)))) , p_11)))));
                (*g_34) = (func_32((*g_34)) , l_788);
                for (g_80 = 0; (g_80 <= 3); g_80 += 1)
                {
                    int i;
                    (**g_34) |= g_444[g_80];
                    for (l_745 = 0; (l_745 <= 6); l_745 += 1)
                    {
                        return &g_35;
                    }
                }
                (*l_788) |= (safe_div_func_int8_t_s_s(func_32(l_793), (safe_add_func_int8_t_s_s((&g_56[2][0] != (g_303[3][6][0] = &g_56[0][0])), (*l_616)))));
            }
            (*l_788) = (safe_rshift_func_uint16_t_u_s((((g_810[4] = (((safe_div_func_uint32_t_u_u(((((*l_801) &= (*l_788)) > (p_12 && ((*l_616) = ((((safe_div_func_int32_t_s_s((((((((safe_rshift_func_uint16_t_u_s(((*l_806) = p_12), ((((*l_793) , ((*l_793) | (((g_56[0][0] != g_305) < (*l_793)) > 0x7121L))) , &g_307) != (void*)0))) > (*l_788)) < p_11) | (*l_788)) , (*l_616)) != (*l_616)) , p_11), p_11)) , l_807) != l_808) | g_56[0][0])))) ^ 65535UL), (*l_788))) <= 6L) , &g_303[2][6][0])) != l_811) <= (*l_793)), l_812));
            for (p_12 = 12; (p_12 > 13); p_12 = safe_add_func_int16_t_s_s(p_12, 1))
            {
                return &g_35;
            }
        }
        for (g_295 = 0; (g_295 > 15); ++g_295)
        {
            int *l_819[4];
            unsigned l_826 = 0xA6411B1BL;
            short **l_855 = &g_502[0][0][1];
            int i;
            for (i = 0; i < 4; i++)
                l_819[i] = &l_745;
            for (g_80 = 0; (g_80 < 31); g_80 = safe_add_func_int8_t_s_s(g_80, 9))
            {
                char l_820 = 0x5BL;
                int l_822 = (-5L);
                int l_823 = 0xE1E2DD0DL;
                l_819[1] = (void*)0;
                l_826--;
                for (l_659 = 7; (l_659 == 6); l_659 = safe_sub_func_uint32_t_u_u(l_659, 3))
                {
                    unsigned short *l_833 = (void*)0;
                    unsigned short *l_834 = &l_812;
                    int l_841 = 0xBDBFB532L;
                    (*l_793) = (safe_div_func_uint16_t_u_u(((*l_834)--), (p_12 ^ (safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_841 = 0x2F08L), 0xA2DDL)), func_32(&l_822))))));
                    if (g_295)
                        continue;
                    (*l_793) = (safe_sub_func_int8_t_s_s((*l_793), (func_32(&l_841) || ((*l_615) &= (safe_add_func_int32_t_s_s(l_841, func_32(((*l_616) , (void*)0))))))));
                }
            }
            for (g_305 = 0; (g_305 != 27); g_305 = safe_add_func_uint32_t_u_u(g_305, 3))
            {
                short *l_848 = &g_49;
                unsigned short *l_858 = &g_160;
                unsigned short *l_861 = (void*)0;
                unsigned short *l_862 = &l_812;
                int l_867[7][10] = {{(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}, {(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}, {(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}, {(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}, {(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}, {(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}, {(-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL, (-1L), 0x56EA246AL}};
                int l_877 = 0x1A1292B4L;
                unsigned *l_887[9][10] = {{&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}, {&l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295, &l_826, &g_295}};
                int i, j;
                (*l_793) = ((l_848 == (void*)0) , 0x4EF63AF9L);
                (*l_793) = (g_305 && (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((*l_793), ((func_40(((void*)0 != &g_469)) | ((void*)0 == l_855)) , (*l_616)))), (safe_add_func_uint16_t_u_u(((*l_862) = (++(*l_858))), (safe_sub_func_int32_t_s_s((-1L), 6L)))))), 5)));
                if ((p_11 != (l_867[1][4] & ((safe_add_func_uint16_t_u_u((g_104[5][2] >= g_49), (safe_add_func_int32_t_s_s(((*l_616) = func_32(&g_96[4][2][1])), (l_877 = (safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(p_11, 0x79FAF291L)) <= (((l_876 >= p_11) != (*l_793)) >= (*l_793))), l_867[1][4]))))))) < p_12))))
                {
                    int *l_878 = (void*)0;
                    (*g_34) = l_878;
                }
                else
                {
                    int l_879 = (-1L);
                    int l_880 = (-4L);
                    int l_881[5][1] = {{0xD595C8CFL}, {0xD595C8CFL}, {0xD595C8CFL}, {0xD595C8CFL}, {0xD595C8CFL}};
                    int i, j;
                    ++l_882;
                    for (g_72 = 0; (g_72 <= 2); g_72 += 1)
                    {
                        int i, j;
                        if (g_104[g_72][g_72])
                            break;
                        (*l_616) = (l_624[g_72] = (func_32((*g_34)) < g_104[(g_72 + 3)][(g_72 + 4)]));
                    }
                    for (l_812 = (-30); (l_812 == 32); ++l_812)
                    {
                        unsigned *l_888 = (void*)0;
                        int l_889 = 0L;
                        unsigned l_890 = 1UL;
                        (*l_616) ^= ((*l_793) = (((*l_811) != (l_888 = l_887[2][6])) != p_12));
                        ++l_890;
                        (*l_616) = (safe_sub_func_int8_t_s_s((-1L), (safe_rshift_func_uint8_t_u_s(g_444[1], (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_12, 9)), 3))))));
                    }
                    if (p_12)
                        break;
                }
                if (p_12)
                    break;
            }
            return &g_35;
        }
    }
    (*g_34) = &l_624[0];
    return &g_35;
}







static char func_15(short p_16)
{
    int *l_27 = &g_3;
    int **l_26 = &l_27;
    unsigned short l_292 = 7UL;
    unsigned *l_293 = (void*)0;
    unsigned *l_294 = &g_295;
    unsigned **l_302 = &l_294;
    unsigned char *l_304 = &g_305;
    unsigned char *l_306[3];
    unsigned char l_308 = 0x68L;
    int l_309 = 0xF9168C6DL;
    int *l_608 = &g_61;
    char l_609 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_306[i] = &g_307;
    (*l_608) = func_18(((*l_26) = ((*g_34) = func_23(l_26, (*l_26)))), ((l_292 , (((l_309 = ((p_16 != (((*l_294) = g_104[2][6]) > g_231)) , (safe_mod_func_uint8_t_u_u((l_308 |= ((*l_304) ^= ((g_303[2][6][0] = ((*l_302) = (((safe_div_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((0xFE78L ^ p_16), g_231)) <= g_104[0][4]) | p_16) == g_231), g_231)) , p_16) , (void*)0))) != (void*)0))), 0x9CL)))) <= p_16) < p_16)) , p_16), g_307, p_16);
    (*l_608) &= l_609;
    for (g_91 = 0; g_91 < 3; g_91 += 1)
    {
        g_2[g_91] = 0x5AL;
    }
    return p_16;
}







static int func_18(int * p_19, char p_20, unsigned p_21, char p_22)
{
    int l_310 = 0x6098E488L;
    int *l_311 = &g_61;
    int *l_312 = &g_96[6][2][5];
    unsigned *l_313 = &g_295;
    unsigned char l_320 = 252UL;
    unsigned *l_321 = &g_56[0][0];
    int l_358 = 0x55DD9337L;
    int l_361 = 0x2512C9CCL;
    int l_365 = 0xB9685FBBL;
    int l_366[2];
    short l_373 = 0xE6C3L;
    char l_374[9] = {0x5AL, 0x7AL, 0x5AL, 0x7AL, 0x5AL, 0x7AL, 0x5AL, 0x7AL, 0x5AL};
    char **l_471 = (void*)0;
    unsigned l_488 = 0x0DA55165L;
    unsigned l_567 = 0x4E384A70L;
    int i;
    for (i = 0; i < 2; i++)
        l_366[i] = 0L;
    (*l_311) ^= (l_310 , (+(*p_19)));
    l_312 = (g_42 , p_19);
    if ((((*l_313) &= (*l_311)) >= (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_311) < (((*l_321) ^= ((safe_sub_func_int16_t_s_s(l_320, (p_22 , 1UL))) | (0x03008ED1L && (*l_312)))) | (0xA972CC96L >= (-2L)))), (*l_312))), (*g_35)))))
    {
        l_312 = ((*l_312) , (*g_34));
        (*l_311) ^= (*g_35);
        (*l_311) = func_32(func_28(&g_35));
    }
    else
    {
        char **l_332 = (void*)0;
        int l_339 = 0x5F6C4FDCL;
        int l_354 = 0xC54A5D21L;
        int l_359 = 0L;
        int l_362 = 0L;
        int l_364[6][4] = {{1L, 0xF6605445L, 0xE217BEBAL, 0xF6605445L}, {1L, 0xF6605445L, 0xE217BEBAL, 0xF6605445L}, {1L, 0xF6605445L, 0xE217BEBAL, 0xF6605445L}, {1L, 0xF6605445L, 0xE217BEBAL, 0xF6605445L}, {1L, 0xF6605445L, 0xE217BEBAL, 0xF6605445L}, {1L, 0xF6605445L, 0xE217BEBAL, 0xF6605445L}};
        unsigned l_389[3][4][1] = {{{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}, {{1UL}, {1UL}, {1UL}, {1UL}}};
        unsigned **l_408 = &l_321;
        unsigned short l_452 = 65528UL;
        short *l_505 = &g_503;
        short l_516 = 0x5C0DL;
        char l_517 = (-7L);
        unsigned l_518 = 0x6D0BC901L;
        int l_561 = (-10L);
        unsigned char l_592[10][7][1] = {{{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}, {{252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}, {252UL}}};
        int *l_606[4] = {&l_366[0], &l_365, &l_366[0], &l_365};
        int i, j, k;
        (*g_34) = l_312;
        if (func_32((*g_34)))
        {
            unsigned l_340 = 1UL;
            int **l_341 = &g_35;
            int l_357 = (-1L);
            int l_360 = 0x05469DEEL;
            int l_367 = 0x9AB1E80AL;
            int l_375 = (-7L);
            int l_377[8][10][3] = {{{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}, {{0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}, {0x175A2C40L, 0x175A2C40L, 5L}}};
            int l_385[4] = {0xCFD2FA0CL, 0xB29B4FE4L, 0xCFD2FA0CL, 0xB29B4FE4L};
            int i, j, k;
            for (l_310 = 0; (l_310 > (-7)); l_310--)
            {
                int l_342 = 0x90D64501L;
                int l_363 = 0xE03FC564L;
                int l_368 = 0x1A355F2FL;
                int l_370 = 0x2A105E99L;
                int l_371 = 3L;
                int l_372 = 2L;
                int l_376 = 0x2C39FE19L;
                int l_378 = (-5L);
                int l_379 = 0x60C5C5B2L;
                int l_380 = (-1L);
                int l_381 = (-3L);
                int l_382 = 0L;
                int l_383 = 0x097A6719L;
                int l_384[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_384[i] = 0x4CC6003AL;
                if ((*l_312))
                    break;
                l_340 = ((safe_sub_func_uint32_t_u_u(p_21, (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(0xF6269C12L, (((l_332 == (void*)0) > 4L) < func_32(p_19)))) != (*p_19)), 3)), (safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((*l_313)++), 0x6899F1E4L)) | 2UL), 5UL)))))) >= l_339);
                if (l_340)
                {
                    (*g_34) = func_28(l_341);
                }
                else
                {
                    char l_355 = 0x3EL;
                    int l_369[3];
                    unsigned l_386[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_369[i] = 0x422A79D0L;
                    for (i = 0; i < 1; i++)
                        l_386[i] = 0xE5E5FE19L;
                    if (l_342)
                    {
                        char l_345 = 0xF3L;
                        short *l_353 = &g_49;
                        l_354 |= (g_307 != (p_22 = (safe_add_func_int16_t_s_s(l_345, ((*l_353) = (safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(((*l_311) &= l_342), p_20)), (safe_sub_func_uint16_t_u_u(l_345, (l_345 && (safe_unary_minus_func_uint32_t_u((*l_312)))))))))))));
                    }
                    else
                    {
                        int *l_356[3][4] = {{&l_342, &g_96[2][0][3], &l_342, &g_96[2][0][3]}, {&l_342, &g_96[2][0][3], &l_342, &g_96[2][0][3]}, {&l_342, &g_96[2][0][3], &l_342, &g_96[2][0][3]}};
                        int i, j;
                        ++l_386[0];
                        l_389[1][0][0]++;
                    }
                    if (l_371)
                        break;
                }
                (*g_34) = p_19;
            }
        }
        else
        {
            unsigned char *l_396 = &g_307;
            int *l_399 = &l_366[0];
            unsigned ***l_409 = &l_408;
            unsigned **l_410 = &g_303[2][6][0];
            for (l_339 = 0; l_339 < 10; l_339 += 1)
            {
                for (p_21 = 0; p_21 < 1; p_21 += 1)
                {
                    g_56[l_339][p_21] = 0xB114B1A4L;
                }
            }
            (*l_311) = ((*l_399) |= (func_40(g_56[0][0]) | (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((((((*l_396) = (p_22 <= (*p_19))) == (safe_add_func_int16_t_s_s(p_20, p_22))) >= (((void*)0 != &g_104[2][6]) , l_362)) == (-1L)), p_20)), l_364[4][0]))));
            l_354 ^= (((((safe_lshift_func_uint16_t_u_s(((*l_312) > p_22), 9)) , (safe_add_func_uint8_t_u_u((((*l_399) = ((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((((*l_409) = l_408) != ((((*l_321) = ((l_389[0][0][0] , (((8UL && ((*p_19) , ((g_72 = 65526UL) , g_72))) , (*l_399)) && 1L)) == (*l_311))) ^ 0x1C7F7430L) , l_410)) && g_3), 0x79L)), p_21)) && g_56[0][0])) > p_22), (-1L)))) , &p_19) != (void*)0) && (*l_399));
        }
        if ((p_21 >= (safe_rshift_func_int8_t_s_s(l_364[4][3], p_22))))
        {
            unsigned l_416[6][7][1] = {{{0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}}, {{0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}}, {{0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}}, {{0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}}, {{0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}}, {{0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}, {0x9DE85450L}}};
            int *l_421 = (void*)0;
            char **l_472 = &g_470;
            unsigned char *l_475 = (void*)0;
            int l_481 = 0x5D29837EL;
            int l_483 = (-1L);
            int l_486[4][5] = {{0L, 0x189C8F25L, 0L, 0x189C8F25L, 0L}, {0L, 0x189C8F25L, 0L, 0x189C8F25L, 0L}, {0L, 0x189C8F25L, 0L, 0x189C8F25L, 0L}, {0L, 0x189C8F25L, 0L, 0x189C8F25L, 0L}};
            char l_532 = 0L;
            unsigned l_562[7] = {0x2132F595L, 0x2132F595L, 1UL, 0x2132F595L, 0x2132F595L, 1UL, 0x2132F595L};
            int i, j, k;
            if (func_40(l_389[0][2][0]))
            {
                int *l_413 = &l_364[2][2];
                char *l_414 = (void*)0;
                char *l_415 = &l_374[4];
                (*g_34) = l_413;
                if (func_40((g_104[2][1] = ((*l_415) = 0x5FL))))
                {
                    return (*p_19);
                }
                else
                {
                    unsigned char *l_419 = &g_2[0];
                    unsigned char *l_420 = &l_320;
                    unsigned short *l_422[3][1][7] = {{{&g_72, &g_160, &g_72, &g_160, &g_72, &g_160, &g_72}}, {{&g_72, &g_160, &g_72, &g_160, &g_72, &g_160, &g_72}}, {{&g_72, &g_160, &g_72, &g_160, &g_72, &g_160, &g_72}}};
                    int l_423 = 1L;
                    int i, j, k;
                    (*g_34) = func_28(&l_413);
                    ++l_416[3][3][0];
                    l_423 ^= (func_32((*g_34)) , (((((*l_420) = ((*l_419) = (p_21 != (*l_413)))) > (0x1575L >= func_32(l_421))) , ((*l_413) = 65535UL)) <= p_21));
                }
            }
            else
            {
                short **l_434 = &g_170;
                char *l_439 = (void*)0;
                char *l_440 = &l_374[1];
                int l_441[8] = {0xB279F5BFL, 1L, 0xB279F5BFL, 1L, 0xB279F5BFL, 1L, 0xB279F5BFL, 1L};
                char *l_442 = &g_104[5][2];
                char *l_443 = &g_444[1];
                int *l_445[6] = {&l_441[0], &l_441[0], (void*)0, &l_441[0], &l_441[0], (void*)0};
                int i;
                g_96[5][0][2] &= (func_32(p_19) <= ((safe_lshift_func_int8_t_s_s((g_3 , ((*l_443) &= (safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(((*l_442) = (((*l_440) = (safe_rshift_func_uint16_t_u_u((~((+0x112AFEF8L) | ((safe_sub_func_int8_t_s_s(((void*)0 != l_434), p_21)) && (safe_lshift_func_int16_t_s_u(l_362, (~(safe_lshift_func_int16_t_s_s(((((l_362 < 65535UL) | 0x181C599CL) == p_20) ^ p_22), 10)))))))), 9))) < l_441[2])), g_3)) & 0x97L), (*l_312))))), g_72)) & 0UL));
                for (l_359 = (-29); (l_359 == (-6)); l_359 = safe_add_func_uint32_t_u_u(l_359, 1))
                {
                    (*g_34) = &l_366[0];
                }
                g_96[4][0][2] ^= func_40((*l_311));
            }
            for (l_339 = 8; (l_339 == 20); l_339 = safe_add_func_uint16_t_u_u(l_339, 1))
            {
                unsigned char l_456 = 0xEDL;
                short *l_461 = &l_373;
                char ***l_473 = &l_472;
                char ***l_474 = &l_332;
                int l_479 = 0x3726C7B0L;
                int l_482 = 0L;
                int l_487[9][10][2] = {{{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}, {{0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}, {0x877C398EL, 8L}}};
                int i, j, k;
                (*l_311) = (-1L);
                if (((g_305 , 0xBEAC6DC5L) >= (safe_add_func_int16_t_s_s((*l_311), 65535UL))))
                {
                    return l_452;
                }
                else
                {
                    short *l_453 = &g_49;
                    int l_457 = 0x53EA0AA9L;
                    unsigned short *l_460[3];
                    int l_462 = 0x8B8A0C6FL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_460[i] = &l_452;
                    l_462 &= (((l_453 == ((((0x1443L | g_80) ^ (safe_div_func_uint8_t_u_u(l_456, ((l_389[1][2][0] && (g_49 && (((*l_311) = (l_457 > (((p_21 ^ (safe_lshift_func_int16_t_s_u(((((*p_19) <= (*l_312)) , (void*)0) != (void*)0), 0))) , p_20) ^ p_21))) & p_20))) , 1UL)))) == 1L) , l_461)) , (-3L)) < p_22);
                    for (g_305 = 0; g_305 < 7; g_305 += 1)
                    {
                        for (g_72 = 0; g_72 < 8; g_72 += 1)
                        {
                            g_104[g_305][g_72] = 0x67L;
                        }
                    }
                }
                if (((safe_sub_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((*l_461) = ((l_456 && p_20) | 0x5BEEL)), 5)), l_452)) || (((l_471 = g_469) == ((*l_474) = ((*l_473) = l_472))) , (-1L))) , &l_456) == l_475), 0x2686L)) == 0x62L))
                {
                    int l_476 = 0L;
                    int l_477 = 0xB53206B7L;
                    int *l_478 = (void*)0;
                    int *l_480 = &l_366[0];
                    int *l_484 = &l_361;
                    int *l_485[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_485[i] = &l_477;
                    l_488++;
                    (*g_34) = p_19;
                    (*l_484) |= (*p_19);
                }
                else
                {
                    unsigned l_499[4];
                    short **l_504[10] = {&g_502[0][0][1], (void*)0, (void*)0, (void*)0, (void*)0, &g_502[0][0][1], (void*)0, (void*)0, (void*)0, (void*)0};
                    unsigned char l_506 = 7UL;
                    int l_509 = (-1L);
                    int l_515[5][6][7] = {{{(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}}, {{(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}}, {{(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}}, {{(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}}, {{(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}, {(-10L), 0L, 0x489ACD77L, 0x489ACD77L, 0L, (-10L), 0L}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_499[i] = 0xC25B7947L;
                    if ((safe_add_func_int16_t_s_s((!(safe_mod_func_int32_t_s_s((p_20 > (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(2L, func_32(func_28((l_499[1] , &g_35))))), ((((~((safe_add_func_uint16_t_u_u(((g_170 = (void*)0) == (l_505 = g_502[0][0][1])), p_20)) != 0x5151EAA0L)) , p_22) < 0x95L) == l_506)))), l_506))), 65535UL)))
                    {
                        int *l_507 = &l_354;
                        int *l_508 = &l_482;
                        int *l_510 = &l_361;
                        int *l_511 = (void*)0;
                        int *l_512 = &l_483;
                        int *l_513 = &g_61;
                        int *l_514[10] = {&l_364[4][1], &l_364[4][1], &l_365, &l_364[4][1], &l_364[4][1], &l_365, &l_364[4][1], &l_364[4][1], &l_365, &l_364[4][1]};
                        unsigned short *l_531 = &g_160;
                        int i;
                        l_518--;
                        (*g_34) = &l_487[0][3][0];
                        l_509 = ((((*l_321) ^= (*l_311)) , ((*l_513) = ((safe_div_func_int16_t_s_s(((*l_461) = ((safe_mod_func_int16_t_s_s((p_20 >= ((((((*l_531) = ((func_40(((0L ^ func_40((safe_rshift_func_uint8_t_u_u(0x4AL, ((safe_sub_func_int16_t_s_s(func_32(l_510), ((*l_461) |= l_506))) != (safe_mod_func_int8_t_s_s(p_20, 0xABL))))))) != 0x4E23L)) <= (-1L)) , 0x0909L)) < g_3) | (*p_19)) == p_21) || p_22)), p_22)) , l_532)), 0x8E17L)) & l_515[3][5][5]))) <= p_21);
                    }
                    else
                    {
                        (*g_34) = (void*)0;
                        return (*p_19);
                    }
                    return (*l_312);
                }
                for (p_21 = 0; (p_21 <= 0); p_21 += 1)
                {
                    int *l_533 = &l_361;
                    int *l_534 = &l_366[0];
                    int *l_535 = &g_96[0][2][4];
                    int *l_536 = &l_354;
                    int *l_537 = (void*)0;
                    int *l_538 = (void*)0;
                    int *l_539 = (void*)0;
                    int *l_540 = &l_487[3][5][1];
                    int *l_541 = &l_366[1];
                    int *l_542 = (void*)0;
                    int *l_543 = (void*)0;
                    int *l_544 = &l_487[0][3][0];
                    int *l_545 = &l_365;
                    int *l_546 = &l_358;
                    int *l_547 = &l_479;
                    int *l_548 = &l_482;
                    int *l_549 = &l_364[4][1];
                    int l_550 = 0xE83814A7L;
                    int *l_551 = &g_61;
                    int *l_552 = &l_479;
                    int *l_553 = &l_358;
                    int *l_554 = &l_550;
                    int *l_555 = &l_354;
                    int *l_556 = &l_550;
                    int *l_557 = &l_358;
                    int *l_558 = &g_96[6][2][5];
                    int *l_559 = &l_487[7][8][1];
                    int *l_560[10][6][4] = {{{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}, {{&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}, {&l_550, &l_487[1][7][0], (void*)0, &l_479}}};
                    char l_574 = 0xC1L;
                    unsigned short l_576 = 0xEDC9L;
                    int i, j, k;
                    ++l_562[2];
                    for (l_361 = 0; (l_361 <= 8); l_361 += 1)
                    {
                        char l_565[9][4][7] = {{{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}, {{0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}, {0x20L, 0L, (-1L), 0x2FL, 2L, (-1L), 0xF9L}}};
                        int l_566 = 1L;
                        int i, j, k;
                        ++l_567;
                        if (l_416[(p_21 + 5)][(p_21 + 5)][p_21])
                            continue;
                        if (l_389[1][1][0])
                            continue;
                        if ((*l_558))
                            break;
                    }
                    for (l_481 = 0; (l_481 >= 0); l_481 -= 1)
                    {
                        int i, j, k;
                        (*g_34) = func_23(&g_35, g_303[(l_481 + 5)][(l_481 + 2)][l_481]);
                    }
                    l_555 = &l_486[0][0];
                    for (g_91 = 0; (g_91 <= 0); g_91 += 1)
                    {
                        int l_570 = 0L;
                        int l_571 = 0xDC2F5521L;
                        int l_572 = 0x4C28565BL;
                        int l_573 = 0x13F00FB3L;
                        int l_575 = (-1L);
                        l_576++;
                        (*l_546) |= ((*l_533) = ((*l_312) | (p_20 > p_22)));
                    }
                }
            }
            (*g_34) = p_19;
            for (l_518 = 0; (l_518 <= 0); l_518 += 1)
            {
                unsigned short *l_579[9] = {&g_160, &g_72, &g_160, &g_72, &g_160, &g_72, &g_160, &g_72, &g_160};
                char ***l_584 = &l_472;
                int l_587 = 0xD647195FL;
                char l_593 = (-3L);
                unsigned char *l_599 = &l_320;
                int *l_600 = (void*)0;
                int *l_601 = &l_354;
                int i;
            }
        }
        else
        {
            char *l_604 = &g_444[1];
            unsigned short *l_605 = &g_72;
            int *l_607 = &g_96[6][2][5];
            l_607 = ((g_295 , (safe_add_func_uint16_t_u_u(((*l_605) |= (&p_22 != ((*g_469) = l_604))), (g_231 , (p_22 & (~((void*)0 == p_19))))))) , (l_606[0] = func_28(&g_35)));
            return (*p_19);
        }
    }
    return (*p_19);
}







static int * func_23(int ** p_24, int * p_25)
{
    unsigned l_94 = 0xC9B65FEAL;
    int *l_95 = &g_96[6][2][5];
    int l_97 = (-2L);
    unsigned char l_102 = 0xF3L;
    char *l_103[5] = {&g_104[5][2], &g_104[5][2], &g_104[5][2], &g_104[5][2], &g_104[5][2]};
    int l_105 = (-1L);
    unsigned char *l_106 = &l_102;
    short **l_257 = (void*)0;
    unsigned l_279 = 4294967292UL;
    int l_286[8] = {1L, 1L, (-3L), 1L, 1L, (-3L), 1L, 1L};
    unsigned short l_289 = 0UL;
    int i;
    (*g_34) = func_28(func_30((func_32((((l_97 = (g_34 == ((safe_sub_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u(func_40((g_42 = g_2[2])), ((*l_95) = l_94))) >= g_2[2]) >= l_97) , 0xDFL), ((*l_106) = (safe_lshift_func_int8_t_s_u((l_105 = (safe_add_func_int16_t_s_s((l_97 , (0x18E4L >= l_94)), l_102))), 4))))) , &g_35))) != g_3) , (void*)0)) && (-1L))));
    if ((*l_95))
    {
        char l_223 = 0x98L;
        int l_226 = 0xF7481F4EL;
        int l_233 = 0xD7F041DAL;
        int l_263 = (-1L);
        int *l_275 = &g_96[6][2][5];
        for (g_160 = (-21); (g_160 < 11); ++g_160)
        {
            unsigned *l_220 = &l_94;
            unsigned short *l_224 = (void*)0;
            unsigned short *l_225[7][1] = {{&g_72}, {&g_72}, {&g_72}, {&g_72}, {&g_72}, {&g_72}, {&g_72}};
            int l_232 = 0x8014FFD6L;
            int i, j;
            l_233 = ((((*l_95) , (safe_sub_func_uint32_t_u_u((++(*l_220)), (((((l_223 || ((*g_35) = ((((~(l_223 ^ 0xC2L)) , (l_226 |= 0x1256L)) < 65527UL) != (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_49, (*l_95))), 0xEF96F861L))))) ^ 1L) == g_231) , g_42) >= 4294967293UL)))) >= 0xD94AL) & l_232);
            return (*p_24);
        }
        for (l_94 = 9; (l_94 == 59); l_94 = safe_add_func_int8_t_s_s(l_94, 9))
        {
            unsigned l_238 = 0xB1366764L;
            int l_243 = 0x3CCDA484L;
            int l_244 = 0x0C7D8826L;
            int l_262 = 0xDD62C0C1L;
        }
    }
    else
    {
        unsigned short l_282 = 0UL;
        int l_283 = 0L;
        int *l_284 = &l_105;
        int *l_285[5][9];
        int l_287 = 0xB1892D0DL;
        short l_288 = 0xB68CL;
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 9; j++)
                l_285[i][j] = &g_61;
        }
        (*g_34) = (*p_24);
        l_283 = (safe_mod_func_uint8_t_u_u((*l_95), l_282));
        --l_289;
    }
    (*l_95) = 1L;
    return (*p_24);
}







static int * func_28(int ** p_29)
{
    char l_204 = (-6L);
    int **l_205 = (void*)0;
    unsigned short *l_212 = &g_160;
    unsigned l_213 = 0x42DFEF78L;
    short **l_214 = &g_170;
    int *l_215 = &g_61;
    l_214 = ((l_204 > l_204) , ((((void*)0 == l_205) , (((safe_add_func_int32_t_s_s((g_96[1][0][1] , (+(safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(func_40(l_204), (l_212 == &g_160))) , l_204), 4L)))), l_213)) && 0x749F3D81L) >= l_204)) , (void*)0));
    return l_215;
}







static int ** func_30(short p_31)
{
    int *l_122[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    int l_167 = 0x0C7EA762L;
    short l_172[9] = {0x56C0L, 0x6F07L, 0x56C0L, 0x6F07L, 0x56C0L, 0x6F07L, 0x56C0L, 0x6F07L, 0x56C0L};
    int i;
    for (g_61 = 17; (g_61 <= 26); g_61 = safe_add_func_int16_t_s_s(g_61, 8))
    {
        char l_118 = (-1L);
        int *l_119[3];
        short l_130 = (-1L);
        short l_203 = 0x3424L;
        int i;
        for (i = 0; i < 3; i++)
            l_119[i] = &g_96[6][2][5];
        if (p_31)
        {
            int l_123 = (-7L);
            int l_126 = 0x239877F8L;
            int l_131 = 0L;
            int l_136 = (-10L);
            unsigned char l_138[10][5][1] = {{{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}, {{0x83L}, {0x83L}, {0x83L}, {0x83L}, {0x83L}}};
            int **l_146 = &l_122[2];
            unsigned l_148 = 4294967295UL;
            int l_153 = 0xF92868C9L;
            char l_173[2][10] = {{0xC1L, 0xA2L, 0L, 0L, 0xA2L, 0xC1L, 0xA2L, 0L, 0L, 0xA2L}, {0xC1L, 0xA2L, 0L, 0L, 0xA2L, 0xC1L, 0xA2L, 0L, 0L, 0xA2L}};
            int i, j, k;
            if (p_31)
            {
                unsigned short l_127 = 6UL;
                int l_134 = 0x9BA86230L;
                int l_135 = 7L;
                int l_137 = 0L;
                if ((safe_div_func_int8_t_s_s(l_118, l_118)))
                {
                    l_119[0] = l_119[0];
                    g_96[6][2][5] = (safe_rshift_func_int8_t_s_s(0xF9L, ((void*)0 != l_122[6])));
                    if (l_123)
                        continue;
                }
                else
                {
                    short l_124 = 1L;
                    int l_125[6][5][7] = {{{0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}}, {{0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}}, {{0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}}, {{0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}}, {{0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}}, {{0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}, {0x9C151EC7L, 0xBA3292ADL, 0x652A4294L, 0x85A1DF46L, (-3L), 0L, 0x6553E7E8L}}};
                    int i, j, k;
                    l_123 ^= 0x9F4FA422L;
                    ++l_127;
                    l_130 = (l_127 & 4294967295UL);
                }
                (*g_34) = (*g_34);
                if (l_131)
                {
                    int **l_132[8][4] = {{(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}};
                    int *l_133[5] = {&l_126, (void*)0, &l_126, (void*)0, &l_126};
                    int i, j;
                    l_133[1] = ((*g_34) = (*g_34));
                    l_138[6][0][0]--;
                }
                else
                {
                    for (l_135 = (-8); (l_135 <= (-17)); --l_135)
                    {
                        unsigned l_143 = 0x98317EE6L;
                        l_143--;
                    }
                }
            }
            else
            {
                int **l_147 = &l_119[0];
                return &g_35;
            }
            g_96[6][2][5] = l_148;
            for (l_136 = 0; (l_136 <= 2); l_136 += 1)
            {
                int l_169 = 7L;
                int **l_183 = &l_119[0];
                int i;
                (*g_34) = (*g_34);
                if ((safe_sub_func_int32_t_s_s(((g_2[l_136] || 0xB920L) || g_91), (safe_div_func_uint16_t_u_u(0xB74FL, 65531UL)))))
                {
                    return &g_35;
                }
                else
                {
                    g_96[6][2][5] ^= (l_153 && g_3);
                }
                for (g_91 = 0; (g_91 <= 0); g_91 += 1)
                {
                    unsigned short *l_158 = &g_72;
                    unsigned short *l_159[8];
                    short *l_168 = &l_130;
                    short **l_171 = &l_168;
                    unsigned l_181 = 4294967291UL;
                    int **l_182 = &l_122[3];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_159[i] = &g_160;
                    l_169 = (((((safe_mod_func_uint32_t_u_u(l_138[(l_136 + 6)][(g_91 + 2)][g_91], ((safe_div_func_int16_t_s_s((g_96[6][2][5] && (((g_42 >= ((g_160 &= ((*l_158) = g_104[5][5])) || ((*l_168) = (safe_div_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((g_2[l_136] ^ g_56[3][0]), ((*l_158) = (((0x747AL == (safe_sub_func_int16_t_s_s(0xB526L, ((g_56[2][0] < p_31) == 0x8EL)))) ^ g_104[5][2]) , g_160)))) & p_31) & p_31) & p_31), l_167))))) , g_2[1]) || g_160)), g_56[3][0])) | p_31))) & p_31) && p_31) , p_31) <= p_31);
                    l_172[0] ^= (g_96[6][2][5] |= (g_170 != ((*l_171) = l_159[6])));
                    if (l_173[0][3])
                    {
                        int i;
                        l_181 = ((!((0xCCDAL <= ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((g_91 , (l_138[(l_136 + 6)][(g_91 + 2)][g_91] , ((safe_add_func_uint8_t_u_u(p_31, 1UL)) || (safe_unary_minus_func_int8_t_s(g_160))))), p_31)), g_42)) >= (((g_2[g_91] = ((l_169 = 3L) , g_104[5][2])) >= p_31) || g_2[2]))) < 0xEC8D32F1L)) && p_31);
                    }
                    else
                    {
                        if (p_31)
                            break;
                        if (p_31)
                            break;
                        return &g_35;
                    }
                }
            }
        }
        else
        {
            char l_193 = (-2L);
            int l_200 = 1L;
            unsigned short l_202 = 0x1705L;
            for (g_42 = 0; (g_42 != 46); g_42++)
            {
                unsigned char *l_186 = &g_2[0];
                int l_201[8] = {0L, 0x2A6E8E86L, 0L, 0x2A6E8E86L, 0L, 0x2A6E8E86L, 0L, 0x2A6E8E86L};
                int i;
                l_203 = (l_202 = (((&g_2[0] != l_186) < p_31) , (safe_lshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s(g_104[5][2], g_160)) || (safe_mod_func_int8_t_s_s((l_193 , ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((g_96[5][2][1] <= (0xD2F91FE3L < (l_200 = (safe_lshift_func_int16_t_s_u(p_31, l_193))))), l_201[1])), 5)) || p_31)), p_31))), p_31))));
            }
            g_96[3][0][1] &= 0xF3D91A40L;
            if (g_91)
                continue;
        }
        return &g_35;
    }
    return &g_35;
}







static unsigned char func_32(int * p_33)
{
    int *l_107 = (void*)0;
    int **l_108 = &l_107;
    int l_109 = 9L;
    int l_110 = (-1L);
    (*l_108) = ((*g_34) = l_107);
    l_110 |= l_109;
    for (g_61 = 0; (g_61 >= (-1)); g_61 = safe_sub_func_uint16_t_u_u(g_61, 8))
    {
        unsigned short l_113 = 0xF72EL;
        if (l_113)
            break;
    }
    return g_72;
}







static unsigned func_40(char p_41)
{
    unsigned l_50 = 4294967295UL;
    int l_53 = (-7L);
    int l_66 = (-7L);
    int l_71 = (-1L);
    int *l_83 = &g_61;
    int *l_84 = &l_53;
    int *l_85 = &g_61;
    int *l_86 = &l_66;
    int *l_87 = &l_66;
    int *l_88 = &g_61;
    int *l_89 = &l_53;
    int *l_90[9] = {&l_66, &l_66, &l_66, &l_66, &l_66, &l_66, &l_66, &l_66, &l_66};
    int i;
    if (((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((-3L) || (l_50 = (g_49 = (safe_lshift_func_int8_t_s_s((-2L), 6))))), g_2[0])), (-10L))) | (safe_add_func_uint8_t_u_u(((((4294967286UL != 0xFA43DEE6L) | ((!g_2[0]) || 1L)) | ((~l_53) <= g_3)) || g_42), (-9L)))))
    {
        int *l_54 = &l_53;
        unsigned *l_55[6][5][6] = {{{&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}}, {{&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}}, {{&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}}, {{&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}}, {{&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}}, {{&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}, {&g_56[0][0], &g_56[6][0], (void*)0, (void*)0, &g_56[6][0], (void*)0}}};
        int *l_59 = (void*)0;
        int *l_60 = &g_61;
        int l_67[2][10] = {{0x560F9103L, 0L, 0x560F9103L, 0L, 0x560F9103L, 0L, 0x560F9103L, 0L, 0x560F9103L, 0L}, {0x560F9103L, 0L, 0x560F9103L, 0L, 0x560F9103L, 0L, 0x560F9103L, 0L, 0x560F9103L, 0L}};
        int i, j, k;
        (*l_54) = (g_3 , p_41);
        (*l_60) = (g_2[2] <= ((*l_54) = (g_56[0][0]--)));
        for (l_50 = 0; (l_50 < 56); ++l_50)
        {
            (*g_34) = l_60;
            (*g_34) = l_54;
        }
        for (l_53 = (-29); (l_53 > (-14)); l_53 = safe_add_func_uint32_t_u_u(l_53, 5))
        {
            int *l_68 = (void*)0;
            int *l_69 = (void*)0;
            int *l_70[5][9] = {{&g_61, &l_66, &g_61, &l_66, &g_61, &l_67[0][3], &g_61, &l_66, &g_61}, {&g_61, &l_66, &g_61, &l_66, &g_61, &l_67[0][3], &g_61, &l_66, &g_61}, {&g_61, &l_66, &g_61, &l_66, &g_61, &l_67[0][3], &g_61, &l_66, &g_61}, {&g_61, &l_66, &g_61, &l_66, &g_61, &l_67[0][3], &g_61, &l_66, &g_61}, {&g_61, &l_66, &g_61, &l_66, &g_61, &l_67[0][3], &g_61, &l_66, &g_61}};
            int i, j;
            --g_72;
        }
    }
    else
    {
        char l_75 = (-8L);
        int *l_76 = &l_53;
        int *l_77 = &g_61;
        int *l_78 = &l_66;
        int *l_79[5][10] = {{&g_3, &l_53, (void*)0, &l_53, &g_3, &l_53, (void*)0, &l_53, &g_3, &l_53}, {&g_3, &l_53, (void*)0, &l_53, &g_3, &l_53, (void*)0, &l_53, &g_3, &l_53}, {&g_3, &l_53, (void*)0, &l_53, &g_3, &l_53, (void*)0, &l_53, &g_3, &l_53}, {&g_3, &l_53, (void*)0, &l_53, &g_3, &l_53, (void*)0, &l_53, &g_3, &l_53}, {&g_3, &l_53, (void*)0, &l_53, &g_3, &l_53, (void*)0, &l_53, &g_3, &l_53}};
        int i, j;
        g_80++;
    }
    ++g_91;
    return g_61;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_56[i][j], "g_56[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_444[i], "g_444[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1006[i], "g_1006[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1030[i], "g_1030[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1154, "g_1154", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
