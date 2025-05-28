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



static int g_3 = (-5L);
static unsigned short g_7 = 65535UL;
static unsigned char g_26 = 0UL;
static char g_61[9][8] = {{0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}, {0x9CL, 1L, 0x18L, (-1L), 9L, 0x06L, 2L, 1L}};
static unsigned short g_88 = 5UL;
static unsigned g_95 = 4294967295UL;
static unsigned char g_99[4][2] = {{255UL, 0xCBL}, {255UL, 0xCBL}, {255UL, 0xCBL}, {255UL, 0xCBL}};
static int g_103 = 0x53116D36L;
static int g_105 = 0x92D2A8C7L;
static int g_107 = (-1L);
static char g_108[3] = {(-1L), (-1L), (-1L)};
static int *g_112 = (void*)0;
static unsigned g_123 = 0x014C235FL;
static unsigned g_129[3][3][1] = {{{0xB764D413L}, {0xB764D413L}, {0xB764D413L}}, {{0xB764D413L}, {0xB764D413L}, {0xB764D413L}}, {{0xB764D413L}, {0xB764D413L}, {0xB764D413L}}};
static unsigned short g_174[6][5] = {{0x9B00L, 0xAA66L, 0xD4F9L, 0xAA66L, 0x9B00L}, {0x9B00L, 0xAA66L, 0xD4F9L, 0xAA66L, 0x9B00L}, {0x9B00L, 0xAA66L, 0xD4F9L, 0xAA66L, 0x9B00L}, {0x9B00L, 0xAA66L, 0xD4F9L, 0xAA66L, 0x9B00L}, {0x9B00L, 0xAA66L, 0xD4F9L, 0xAA66L, 0x9B00L}, {0x9B00L, 0xAA66L, 0xD4F9L, 0xAA66L, 0x9B00L}};
static const int g_179 = (-5L);
static const int *g_182 = (void*)0;
static short g_200[6] = {0x81A1L, 0x81A1L, 0x81A1L, 0x81A1L, 0x81A1L, 0x81A1L};
static unsigned short g_220[5][2] = {{0x5402L, 1UL}, {0x5402L, 1UL}, {0x5402L, 1UL}, {0x5402L, 1UL}, {0x5402L, 1UL}};
static unsigned short *g_219 = &g_220[0][0];
static unsigned char g_253 = 1UL;
static char g_262 = (-9L);
static unsigned g_265 = 0UL;
static int g_266 = 9L;
static char *g_295 = &g_61[5][6];
static int **g_320 = &g_112;
static unsigned char g_340 = 0x94L;
static short *g_344 = &g_200[4];
static short **g_343[1][1][3] = {{{&g_344, &g_344, &g_344}}};
static const unsigned char g_374 = 0x92L;
static short g_404 = 1L;
static unsigned char *g_452 = &g_99[1][1];
static unsigned char **g_451 = &g_452;
static unsigned short g_487[3][8] = {{1UL, 1UL, 0x5FDAL, 1UL, 1UL, 0x5FDAL, 1UL, 1UL}, {1UL, 1UL, 0x5FDAL, 1UL, 1UL, 0x5FDAL, 1UL, 1UL}, {1UL, 1UL, 0x5FDAL, 1UL, 1UL, 0x5FDAL, 1UL, 1UL}};
static int *g_525 = &g_105;
static unsigned char g_529 = 9UL;
static unsigned char ***g_558 = &g_451;
static unsigned char ****g_557 = &g_558;
static int *g_635 = &g_105;
static unsigned g_692 = 9UL;
static unsigned short **g_714 = &g_219;
static unsigned short ***g_713 = &g_714;
static char **g_722[2] = {&g_295, &g_295};
static unsigned char **g_780 = &g_452;
static unsigned **g_790 = (void*)0;



static const unsigned func_1(void);
static unsigned func_8(unsigned p_9, unsigned p_10);
static unsigned func_15(const short p_16, int * p_17);
static short func_18(unsigned short * p_19, unsigned short p_20, unsigned p_21, unsigned p_22);
static unsigned short * func_23(unsigned char p_24);
static int * func_34(int p_35, unsigned char * p_36, unsigned p_37, unsigned short p_38);
static int func_39(int * const p_40, unsigned p_41, unsigned p_42, unsigned short * p_43);
static int func_52(char p_53);
static unsigned short * func_64(int p_65, unsigned short * p_66, unsigned char p_67, char * p_68);
static int * func_75(int p_76, char * p_77, short p_78, unsigned p_79);
static const unsigned func_1(void)
{
    int *l_2[1][8][9] = {{{&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}, {&g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3, &g_3}}};
    unsigned short *l_6 = &g_7;
    unsigned char *l_528 = &g_529;
    unsigned char * const ***l_556 = (void*)0;
    unsigned l_571[1][6][9] = {{{0UL, 0xB8EF2232L, 0x8C36216CL, 4294967292UL, 0xFF948422L, 4294967292UL, 0x8C36216CL, 0xB8EF2232L, 0UL}, {0UL, 0xB8EF2232L, 0x8C36216CL, 4294967292UL, 0xFF948422L, 4294967292UL, 0x8C36216CL, 0xB8EF2232L, 0UL}, {0UL, 0xB8EF2232L, 0x8C36216CL, 4294967292UL, 0xFF948422L, 4294967292UL, 0x8C36216CL, 0xB8EF2232L, 0UL}, {0UL, 0xB8EF2232L, 0x8C36216CL, 4294967292UL, 0xFF948422L, 4294967292UL, 0x8C36216CL, 0xB8EF2232L, 0UL}, {0UL, 0xB8EF2232L, 0x8C36216CL, 4294967292UL, 0xFF948422L, 4294967292UL, 0x8C36216CL, 0xB8EF2232L, 0UL}, {0UL, 0xB8EF2232L, 0x8C36216CL, 4294967292UL, 0xFF948422L, 4294967292UL, 0x8C36216CL, 0xB8EF2232L, 0UL}}};
    int l_641 = 0xD3AD8CE1L;
    const char l_652[5][5][9] = {{{0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}}, {{0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}}, {{0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}}, {{0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}}, {{0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}, {0xF6L, 0L, 0xF1L, 0x73L, (-1L), 0x73L, 0xF1L, 0L, 0xF6L}}};
    unsigned short l_660[4] = {0x0EA2L, 3UL, 0x0EA2L, 3UL};
    unsigned char ****l_681 = &g_558;
    unsigned char ****l_683 = &g_558;
    int l_690 = 0xE9D5348DL;
    unsigned short *l_693 = (void*)0;
    unsigned *l_792 = &l_571[0][0][4];
    unsigned **l_791 = &l_792;
    int *l_795 = &g_3;
    int **l_796 = &l_2[0][2][7];
    int i, j, k;
    g_3 = 0xBAC64A68L;
    if ((0xE53EL > (safe_rshift_func_uint16_t_u_u((~((*l_6) = 65526UL)), ((((func_8(g_3, g_3) == (safe_mul_func_int16_t_s_s((g_179 | ((l_528 == &g_529) || (1UL & g_179))), 0x21AAL))) , 1L) || (*g_452)) | 4294967295UL)))))
    {
        char *l_545 = &g_108[2];
        char **l_544 = &l_545;
        int l_546 = (-3L);
        int l_579 = 0xA09B96BEL;
        short *l_661 = (void*)0;
        int l_667[8][4][5] = {{{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}, {{0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}, {0x54A5E0AAL, 1L, (-1L), (-1L), 1L}}};
        unsigned l_676 = 0x4E193117L;
        unsigned char *****l_682 = (void*)0;
        unsigned *l_684 = (void*)0;
        unsigned *l_685 = &l_571[0][1][6];
        unsigned *l_691 = &g_692;
        int *l_694 = (void*)0;
        int i, j, k;
        (*g_112) = (((safe_add_func_uint8_t_u_u((**g_451), (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((*g_295), (l_546 = ((-1L) <= (safe_lshift_func_int16_t_s_u(((*g_344) = (((safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((func_18(func_64(g_103, &g_174[3][1], func_15((*g_344), &g_107), ((*l_544) = l_528)), (*g_219), l_546, l_546) == (*g_452)), 0xF44D1190L)), (*g_452))) > (*g_219)), (*g_344))) ^ (**g_451)) | (-10L))), 14)))))), 4294967290UL)))) , 0x371B1DCFL) , 0x3CB527FCL);
        for (g_266 = 27; (g_266 <= 11); g_266--)
        {
            short l_551 = 1L;
            unsigned short *l_559 = &g_487[1][3];
            short **l_588 = &g_344;
            const char l_601[5] = {0xBCL, 0L, 0xBCL, 0L, 0xBCL};
            int *l_634 = &g_103;
            int i;
            if ((safe_add_func_uint16_t_u_u(l_551, (*g_344))))
            {
                unsigned short l_560 = 0x953AL;
                unsigned short *l_578 = &g_174[3][1];
                const unsigned char **l_587[5];
                unsigned l_589 = 1UL;
                short **l_608 = &g_344;
                unsigned *l_613[2];
                const unsigned l_614 = 4294967295UL;
                short *l_615 = &g_404;
                short l_622 = 0xAC75L;
                short *l_662[2][10];
                unsigned l_668[10];
                unsigned short **l_673 = (void*)0;
                unsigned short ***l_672 = &l_673;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_587[i] = (void*)0;
                for (i = 0; i < 2; i++)
                    l_613[i] = &l_571[0][5][7];
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_662[i][j] = &g_200[2];
                }
                for (i = 0; i < 10; i++)
                    l_668[i] = 0UL;
                for (g_103 = 0; (g_103 >= 0); g_103 -= 1)
                {
                    unsigned *l_580 = (void*)0;
                    unsigned *l_581 = &g_95;
                    short l_602 = 0x964DL;
                    int l_610 = 6L;
                    int i, j;
                }
                if ((safe_mul_func_uint8_t_u_u(((*g_452) = func_15((((g_265 = l_560) & g_200[3]) < ((*l_615) = func_15(l_614, &l_546))), (g_525 = &g_107))), ((l_560 , (void*)0) != (void*)0))))
                {
                    unsigned short **l_620 = &l_559;
                    int l_647 = 0xF7C07A49L;
                    for (g_404 = (-17); (g_404 != 9); g_404++)
                    {
                        (*g_525) = (*g_525);
                        return g_26;
                    }
                    if (((safe_rshift_func_uint16_t_u_s((!(*g_219)), (249UL && l_579))) || func_18(((*l_620) = &g_220[1][1]), (*g_219), l_546, g_200[5])))
                    {
                        int **l_621 = &l_2[0][4][0];
                        (*l_621) = (void*)0;
                    }
                    else
                    {
                        int l_627 = 0x125A9EFFL;
                        short **l_628 = (void*)0;
                        int **l_636 = &l_2[0][0][2];
                        (*g_525) = ((l_622 && 0UL) != ((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_627, 6)), 6)) | 0x2ABFE3EEL) , (((***g_558) | ((l_628 != ((safe_rshift_func_uint8_t_u_u(0UL, ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((l_2[0][4][0] != &l_546) || 4294967294UL))), l_627)) > l_622))) , (void*)0)) < g_88)) == 0x47BCL)) && 0x71FEE7CAL));
                        if ((*g_112))
                            break;
                        (*l_636) = (g_635 = l_634);
                    }
                    for (g_103 = (-16); (g_103 == (-16)); g_103 = safe_add_func_int32_t_s_s(g_103, 3))
                    {
                        short l_642 = 0L;
                        short *l_648 = &l_622;
                        int **l_649 = &l_2[0][4][0];
                        (*l_649) = func_75((safe_rshift_func_int16_t_s_u((l_641 & l_642), ((**l_620) = (*g_219)))), ((((safe_lshift_func_uint16_t_u_s(((**g_451) < (*g_295)), 12)) , (*g_344)) || l_642) , ((*l_544) = &g_108[2])), ((*l_648) = (safe_sub_func_int8_t_s_s((4L <= l_647), 0x76L))), g_174[3][2]);
                        (*g_112) = (*l_634);
                    }
                    if (func_15((func_18(l_559, (*g_219), (safe_add_func_int8_t_s_s((*g_295), (g_107 < g_262))), g_200[0]) , l_652[4][1][5]), l_2[0][7][0]))
                    {
                        if ((*g_525))
                            break;
                        if (l_589)
                            break;
                        return g_88;
                    }
                    else
                    {
                        l_546 = (((*l_634) = (*g_182)) < (safe_add_func_int32_t_s_s((*g_182), 0xB6B4F1A6L)));
                    }
                }
                else
                {
                    unsigned short l_659 = 0x555EL;
                    int **l_663 = &l_634;
                    int l_669 = 0xE7BFAB79L;
                    (*l_663) = func_75((((func_52((((((((*l_634) || (((*g_525) = (safe_mul_func_int16_t_s_s((((**l_544) = func_15(((safe_rshift_func_int16_t_s_u((*l_634), func_18(&g_220[0][0], (*g_219), ((*g_344) , ((l_659 = ((*g_525) = (*g_182))) , l_579)), g_487[2][1]))) & l_546), l_613[0])) != l_660[1]), (*l_634)))) & 4L)) >= 0x4DL) ^ (*g_344)) & (*g_344)) , l_661) == l_662[1][6])) == l_546) , l_579) , 0x7C3BB8EAL), &g_262, l_622, l_546);
                    if ((*g_182))
                        continue;
                    if ((((*g_525) = ((l_669 = ((((safe_unary_minus_func_int8_t_s(((-1L) || (safe_mul_func_uint16_t_u_u(((*l_559) = (((l_622 < (((void*)0 == &g_219) > 4294967291UL)) ^ (*g_344)) , ((*g_219) = l_667[4][3][1]))), (*l_634)))))) == (l_667[4][2][2] & 0xCACAL)) >= l_668[5]) , 1UL)) && l_668[4])) , (*g_182)))
                    {
                        return l_614;
                    }
                    else
                    {
                        if (l_667[4][2][3])
                            break;
                        (*l_663) = l_2[0][6][6];
                        (*g_635) = ((safe_div_func_uint8_t_u_u(((g_99[1][1] || g_340) , (**g_451)), l_622)) <= (*g_295));
                        (**g_557) = (**g_557);
                    }
                }
                (*l_672) = &l_6;
            }
            else
            {
                (*g_525) = (*l_634);
            }
        }
        (*g_525) = ((g_692 && (*g_182)) , (*g_182));
        if (l_667[4][3][1])
        {
            l_694 = l_2[0][5][5];
        }
        else
        {
            (*g_112) = (*g_525);
        }
    }
    else
    {
        unsigned short l_698 = 1UL;
        char **l_738 = &g_295;
        char *l_783 = &g_262;
        int *l_785 = &g_3;
        int *l_786 = &g_107;
        int **l_793 = &l_2[0][4][0];
        int **l_794[9][8] = {{&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}, {&l_786, &l_785, &g_525, &l_785, &g_525, &g_635, &g_525, &l_785}};
        int i, j;
        (*g_525) = (safe_unary_minus_func_int8_t_s(((*g_295) = (-1L))));
        for (g_262 = 5; (g_262 <= (-23)); g_262 = safe_sub_func_uint32_t_u_u(g_262, 1))
        {
            unsigned char l_703 = 0xCBL;
            int *l_716 = &g_105;
            const char l_726 = 0xA1L;
            int l_757 = (-8L);
            unsigned short ***l_763[3][6][10] = {{{(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}}, {{(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}, {(void*)0, (void*)0, (void*)0, (void*)0, &g_714, &g_714, &g_714, &g_714, &g_714, &g_714}}};
            short **l_787 = &g_344;
            int i, j, k;
        }
        (*l_793) = l_2[0][6][6];
        l_795 = ((*l_793) = (void*)0);
    }
    (*l_796) = (void*)0;
    for (g_265 = 0; (g_265 >= 56); ++g_265)
    {
        const unsigned short l_799 = 0x0821L;
        (*g_525) = ((*g_295) , (-6L));
        return l_799;
    }
    return g_265;
}







static unsigned func_8(unsigned p_9, unsigned p_10)
{
    unsigned l_13 = 0xF1448112L;
    int *l_14 = &g_3;
    char *l_505 = &g_262;
    int **l_523 = (void*)0;
    int **l_524[6] = {&l_14, &l_14, &l_14, &l_14, &l_14, &l_14};
    int i;
    if (((*l_14) = ((safe_rshift_func_int16_t_s_s((p_9 > 0xCFD66C4AL), l_13)) > g_3)))
    {
        unsigned char *l_25[8][2];
        int l_485 = 0xA0DB8510L;
        unsigned short *l_486 = &g_487[1][3];
        int l_494 = 3L;
        int **l_495 = (void*)0;
        int **l_496 = &g_112;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 2; j++)
                l_25[i][j] = &g_26;
        }
        if (((func_15(((*l_14) , (*l_14)), ((*l_496) = ((func_18(func_23((g_26 = p_10)), ((p_10 , g_374) , (+((*l_486) = (l_485 , p_10)))), g_3, p_9) & l_494) , &g_103))) , (**l_496)) , p_9))
        {
            char l_502 = 5L;
            (*l_14) = func_52(((((((**g_451) = (safe_mod_func_uint32_t_u_u((*l_14), (p_9 , p_10)))) , 0L) < (*g_219)) >= g_200[4]) ^ 0xE3L));
        }
        else
        {
            for (l_485 = 28; (l_485 >= (-30)); l_485 = safe_sub_func_uint8_t_u_u(l_485, 8))
            {
                unsigned l_506[7] = {0x0949766DL, 0x0949766DL, 4294967293UL, 0x0949766DL, 0x0949766DL, 4294967293UL, 0x0949766DL};
                int i;
                (*l_496) = func_75((*g_112), l_505, l_506[1], (*l_14));
                if (p_10)
                    break;
            }
        }
        (**l_496) = 0x53891C05L;
        (*l_496) = l_14;
    }
    else
    {
        char l_509 = 0xACL;
        int l_512 = 9L;
        (*l_14) = ((safe_rshift_func_int8_t_s_u(l_509, 4)) , ((safe_lshift_func_uint16_t_u_s(l_512, 15)) == (safe_lshift_func_uint16_t_u_s(p_9, ((*g_344) = 0x040AL)))));
    }
    (*l_14) = (((l_14 != (void*)0) >= (((p_10 <= ((&g_182 == &l_14) == p_10)) || ((*l_14) | (((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(p_10, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(p_10, (*l_14))), (*g_295))))), 1L)) <= p_10) , p_9))) != (*g_219))) | 0x3AL);
    g_182 = (g_525 = (g_112 = l_14));
    return p_10;
}







static unsigned func_15(const short p_16, int * p_17)
{
    unsigned short l_499[3];
    int i;
    for (i = 0; i < 3; i++)
        l_499[i] = 0x2292L;
    for (g_123 = 0; (g_123 > 17); ++g_123)
    {
        return l_499[1];
    }
    return l_499[1];
}







static short func_18(unsigned short * p_19, unsigned short p_20, unsigned p_21, unsigned p_22)
{
    unsigned short **l_488 = &g_219;
    unsigned short ***l_489 = (void*)0;
    unsigned short **l_491 = &g_219;
    unsigned short ***l_490 = &l_491;
    int l_492 = 0xFD903DDCL;
    int *l_493 = &g_105;
    (*l_493) = (((l_488 = l_488) != ((*l_490) = &g_219)) ^ l_492);
    return p_22;
}







static unsigned short * func_23(unsigned char p_24)
{
    int * const l_44[1][9] = {{(void*)0, &g_3, (void*)0, &g_3, (void*)0, &g_3, (void*)0, &g_3, (void*)0}};
    short l_51[4];
    unsigned short *l_74 = (void*)0;
    int *l_460[7] = {(void*)0, &g_107, (void*)0, &g_107, (void*)0, &g_107, (void*)0};
    int i, j;
    for (i = 0; i < 4; i++)
        l_51[i] = (-5L);
    for (p_24 = 0; (p_24 > 24); p_24++)
    {
        unsigned l_29 = 0x885C82F7L;
        l_29 = g_3;
        if (g_3)
            continue;
    }
    for (g_26 = (-8); (g_26 == 45); g_26++)
    {
        int l_62 = 0xD1DD14A1L;
        int l_63 = 0L;
        unsigned char l_93 = 255UL;
        int l_97 = 1L;
        unsigned char *l_376 = &g_253;
        unsigned char l_474 = 0x67L;
        int **l_484 = &l_460[3];
        for (p_24 = (-15); (p_24 == 22); ++p_24)
        {
            int l_48 = 9L;
            char *l_60[6][9][3] = {{{&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}}, {{&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}}, {{&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}}, {{&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}}, {{&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}}, {{&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}, {&g_61[8][0], (void*)0, &g_61[8][0]}}};
            int l_73[5][3][10] = {{{1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}}, {{1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}}, {{1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}}, {{1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}}, {{1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}, {1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L, 1L, 7L}}};
            unsigned short **l_92 = &l_74;
            unsigned *l_94[2][2][8] = {{{&g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0}, {&g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0}}, {{&g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0}, {&g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0, &g_95, (void*)0}}};
            unsigned char *l_96 = &l_93;
            unsigned char *l_98[3][2][8] = {{{&g_99[1][1], &g_26, (void*)0, &g_26, &g_99[1][1], &g_26, (void*)0, &g_26}, {&g_99[1][1], &g_26, (void*)0, &g_26, &g_99[1][1], &g_26, (void*)0, &g_26}}, {{&g_99[1][1], &g_26, (void*)0, &g_26, &g_99[1][1], &g_26, (void*)0, &g_26}, {&g_99[1][1], &g_26, (void*)0, &g_26, &g_99[1][1], &g_26, (void*)0, &g_26}}, {{&g_99[1][1], &g_26, (void*)0, &g_26, &g_99[1][1], &g_26, (void*)0, &g_26}, {&g_99[1][1], &g_26, (void*)0, &g_26, &g_99[1][1], &g_26, (void*)0, &g_26}}};
            int l_100 = 0x3FFCED71L;
            int l_377 = (-1L);
            int **l_459[7][2] = {{&g_112, &g_112}, {&g_112, &g_112}, {&g_112, &g_112}, {&g_112, &g_112}, {&g_112, &g_112}, {&g_112, &g_112}, {&g_112, &g_112}};
            unsigned char ***l_469 = &g_451;
            unsigned char ****l_483 = &l_469;
            int i, j, k;
            l_460[3] = func_34(func_39(l_44[0][5], (((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int16_t_s_u(((l_48 > (safe_mul_func_int16_t_s_s(l_51[1], (func_52(((safe_sub_func_uint8_t_u_u((g_26 & (safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((l_62 = p_24) != (l_100 = (l_63 , (((((*l_96) = ((g_61[8][0] <= (l_73[4][1][6] = ((((*l_92) = func_64(p_24, (((+(safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((l_73[4][1][6] = (g_3 == p_24)), g_61[8][0])), 0xA8L))) & p_24) , l_74), l_48, l_60[2][8][2])) != (void*)0) < l_93))) && 3L)) , &g_3) == (void*)0) ^ l_97)))), 0xE5F56056L)) != 4294967295UL), l_97))), p_24)) != 1UL)) , p_24)))) || p_24), g_61[4][2])))) | l_97) < p_24), l_97, g_219), l_376, p_24, l_377);
            if (p_24)
                continue;
            g_103 = (safe_mod_func_int8_t_s_s((((*g_219) & l_62) < ((*l_92) != ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((p_24 != 0x0E7AL), 1UL)), 4)) <= (((*l_469) = &g_452) != &l_376)), ((**l_92) = (safe_lshift_func_uint8_t_u_u((0x7B7341E7L || g_174[5][2]), (*g_452)))))) , (void*)0))), 255UL));
            l_63 = (safe_rshift_func_int8_t_s_u(((l_474 = (((*g_295) = p_24) == p_24)) != ((l_93 , &g_344) == (l_63 , &g_344))), (safe_sub_func_int8_t_s_s(g_103, (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*l_483) = l_469) != (void*)0), p_24)), 1UL)), 0x1D6DDF1EL))))));
        }
        (*l_484) = l_460[0];
    }
    return l_74;
}







static int * func_34(int p_35, unsigned char * p_36, unsigned p_37, unsigned short p_38)
{
    unsigned l_394 = 4294967292UL;
    unsigned short **l_409 = (void*)0;
    int l_418 = 0x8702FF14L;
    int l_437 = (-9L);
    const short *l_445 = &g_200[5];
    short *l_446[9];
    unsigned char *l_450 = &g_99[1][1];
    unsigned char **l_449 = &l_450;
    int *l_458 = &l_418;
    int i;
    for (i = 0; i < 9; i++)
        l_446[i] = &g_404;
    for (p_35 = 0; (p_35 > (-5)); --p_35)
    {
        unsigned char l_399 = 0x2AL;
        char l_400 = 8L;
        int l_405 = (-7L);
        for (p_37 = 21; (p_37 != 36); p_37 = safe_add_func_uint16_t_u_u(p_37, 5))
        {
            unsigned char l_382[6] = {1UL, 1UL, 0xB6L, 1UL, 1UL, 0xB6L};
            int **l_438 = &g_112;
            int i;
            if (l_382[5])
            {
                int *l_383 = &g_105;
                (*l_383) = 0xC3E73E67L;
            }
            else
            {
                unsigned l_401 = 0x20EFFC47L;
                short *l_402 = (void*)0;
                short *l_403[5] = {&g_404, &g_404, &g_404, &g_404, &g_404};
                unsigned short l_406 = 0xCACEL;
                unsigned short **l_411 = &g_219;
                int *l_416[9];
                int *l_424 = &l_418;
                int i;
                for (i = 0; i < 9; i++)
                    l_416[i] = &g_3;
                if (((0x48L ^ (safe_mul_func_int8_t_s_s(p_35, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((((*p_36) = (g_129[1][2][0] > l_394)) == (g_174[4][2] & 0x4AL)), ((*g_344) = 0xB0B2L))), (l_405 = ((safe_add_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((((((((~l_382[5]) >= l_382[1]) || l_399) != p_38) , l_400) | l_401) ^ l_401), l_401)) , g_108[0]), l_382[5])) == l_399)))), l_394)), g_129[1][2][0])) ^ p_35)))) , 0xAEACB07AL))
                {
                    char **l_407 = &g_295;
                    unsigned short ***l_410[1][8] = {{&l_409, (void*)0, &l_409, (void*)0, &l_409, (void*)0, &l_409, (void*)0}};
                    unsigned char *l_412 = &l_399;
                    unsigned char *l_414 = &l_382[4];
                    unsigned char **l_413[4];
                    int l_415 = 0x0BC62BDAL;
                    int l_417 = (-3L);
                    int *l_421 = &l_417;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_413[i] = &l_414;
                    l_417 = (((!l_406) , ((p_36 == ((*l_407) = p_36)) && (safe_unary_minus_func_uint8_t_u((p_37 <= ((((l_415 = ((((&g_219 != (l_411 = l_409)) , (l_412 == (p_36 = p_36))) & func_52(p_37)) , p_38)) , (void*)0) == l_416[0]) , l_394)))))) == g_220[4][0]);
                    g_107 = (l_418 = p_37);
                    for (g_107 = 0; (g_107 == (-7)); g_107--)
                    {
                        l_421 = (void*)0;
                        return &g_105;
                    }
                }
                else
                {
                    l_418 = 0x1BC52FFDL;
                    for (g_340 = 0; (g_340 != 17); g_340 = safe_add_func_uint8_t_u_u(g_340, 7))
                    {
                        l_424 = (void*)0;
                    }
                }
            }
        }
        if ((*g_112))
            continue;
        l_405 = 0xC6D6B910L;
    }
    for (g_266 = (-5); (g_266 > 17); g_266 = safe_add_func_int16_t_s_s(g_266, 9))
    {
        short **l_447 = (void*)0;
        short **l_448 = &g_344;
        int l_455[2][7][8] = {{{(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}}, {{(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}, {(-8L), 8L, 0x89FBDBFAL, (-1L), 0L, (-1L), 0x89FBDBFAL, 8L}}};
        int *l_456 = (void*)0;
        int *l_457[2][10][10] = {{{&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}}, {{&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}, {&g_107, (void*)0, &g_107, (void*)0, &g_103, &g_107, (void*)0, (void*)0, &l_455[1][4][4], (void*)0}}};
        int i, j, k;
        p_35 = (0xFDEDEA72L < func_52((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*g_295) = (l_445 == ((*l_448) = l_446[3]))), (l_449 != g_451))), (((void*)0 != &l_450) & (safe_mul_func_uint8_t_u_u(((*l_450) = (**g_451)), ((1UL & l_455[1][0][3]) & l_394))))))));
    }
    return &g_103;
}







static int func_39(int * const p_40, unsigned p_41, unsigned p_42, unsigned short * p_43)
{
    int *l_221 = &g_105;
    unsigned short *l_222 = &g_220[3][0];
    unsigned short *l_229 = &g_88;
    char *l_230 = (void*)0;
    unsigned char *l_252 = &g_253;
    char *l_277 = (void*)0;
    short *l_352 = (void*)0;
    unsigned l_359[3][7][10] = {{{0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}}, {{0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}}, {{0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}, {0UL, 0x64EA6D07L, 4294967295UL, 0x0D93FB0AL, 0xEA4BFB77L, 4294967290UL, 0UL, 0xC229446AL, 0x54B015BFL, 5UL}}};
    unsigned char l_364[7][10][3] = {{{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}, {{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}, {{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}, {{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}, {{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}, {{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}, {{0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}, {0xC2L, 0x36L, 0UL}}};
    unsigned short l_369 = 0x004FL;
    const unsigned char *l_373 = &g_374;
    const unsigned char **l_372 = &l_373;
    int **l_375 = &l_221;
    int i, j, k;
    if ((l_221 == (((p_43 != l_222) < (safe_div_func_uint8_t_u_u(p_41, (safe_rshift_func_int8_t_s_s(p_42, ((*l_221) = (0x93L <= func_52(((*l_221) = (((safe_add_func_int32_t_s_s((*l_221), ((*p_43) || ((*l_229) = ((*l_222) = (*l_221)))))) , 0UL) , g_200[0])))))))))) , &g_179)))
    {
        int l_254 = 4L;
        unsigned l_276 = 0x15CDC311L;
        unsigned l_280[10][3][7] = {{{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}, {{0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}, {0x953203D1L, 0UL, 0UL, 0x953203D1L, 4294967295UL, 4294967287UL, 0x2B4910B4L}}};
        unsigned char l_284[7] = {252UL, 252UL, 0xECL, 252UL, 252UL, 0xECL, 252UL};
        short *l_350 = (void*)0;
        short **l_351[10][8] = {{&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}, {&l_350, &l_350, &l_350, &l_350, &l_350, (void*)0, &l_350, &l_350}};
        const int **l_356 = &g_182;
        const int ***l_355 = &l_356;
        int i, j, k;
        if (((*l_221) = (*l_221)))
        {
            short l_245 = 0xF4CFL;
            short l_281 = 0x3CD6L;
            char *l_293 = &g_108[0];
            for (p_42 = 12; (p_42 <= 19); p_42 = safe_add_func_uint32_t_u_u(p_42, 5))
            {
                short l_235 = 0x9CEFL;
                unsigned char *l_243 = &g_99[1][1];
                unsigned char **l_242 = &l_243;
                unsigned char ***l_241 = &l_242;
                char *l_249 = &g_61[5][2];
                unsigned char *l_251 = (void*)0;
                unsigned char **l_250[9][9][1] = {{{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}, {{&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}, {&l_251}}};
                char *l_261 = &g_262;
                unsigned *l_264 = &g_265;
                unsigned **l_263 = &l_264;
                int l_274 = 0x61880405L;
                int **l_301 = (void*)0;
                int i, j, k;
                for (g_105 = 0; (g_105 > (-1)); g_105 = safe_sub_func_int8_t_s_s(g_105, 4))
                {
                    short *l_240 = &g_200[5];
                    int l_244[2];
                    int *l_246 = &l_244[1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_244[i] = 0L;
                    l_244[1] = ((((((((*g_219) == l_235) >= (safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(0x7CCCL, ((*l_240) = ((*l_221) , (((*l_229) = 9UL) , g_26))))) , 0xE01AL), (p_42 , (*g_219))))) || p_42) > l_235) , l_241) == (void*)0) || g_174[0][2]);
                    (*l_246) = l_245;
                }
                l_254 = (((((*l_221) = ((*l_243) = (safe_sub_func_int8_t_s_s(g_123, ((*l_249) = 0xDAL))))) == p_41) , l_230) != (l_252 = &g_26));
                if ((l_254 = (((*l_249) = func_52(l_235)) ^ (g_266 = ((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((p_41 , l_235) , g_219) == l_222), (*p_43))) , (((safe_lshift_func_int16_t_s_u((((*l_263) = (((*l_261) = (l_251 == (l_235 , (void*)0))) , &p_42)) == &g_265), (*g_219))) , p_41) || l_245)), 3)) != (-6L))))))
                {
                    char l_273 = 0xB9L;
                    int *l_300 = (void*)0;
                    int **l_303 = &l_300;
                    if (func_52((((***l_241) = (safe_div_func_int16_t_s_s(func_52(p_41), ((safe_rshift_func_uint16_t_u_s(l_245, 10)) , (l_274 = ((*p_43) = (((safe_add_func_int32_t_s_s((l_273 = 0xCA114316L), p_41)) <= (*p_43)) , l_254))))))) <= ((p_42 , g_219) == g_219))))
                    {
                        int **l_275 = &g_112;
                        unsigned *l_290 = &g_265;
                        char *l_294[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_294[i] = &g_108[1];
                        (*l_275) = &g_103;
                        (*l_275) = func_75((((*l_221) = (*l_221)) || l_276), l_277, ((((safe_div_func_uint8_t_u_u(l_280[3][0][3], p_41)) , 0x69L) <= ((l_281 >= (safe_sub_func_int8_t_s_s(p_41, ((((((1L > (*g_219)) != p_42) , (*g_112)) , g_129[0][1][0]) , (void*)0) == &l_264)))) || g_220[0][0])) , l_284[4]), g_266);
                        (*l_221) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_290) = p_42))), (((safe_mod_func_uint16_t_u_u(l_280[3][0][3], 0x5E9EL)) != p_41) == p_41))), (0x1AL | (l_274 = (l_293 != (g_295 = l_294[0]))))));
                        (*l_221) = ((safe_add_func_uint8_t_u_u(p_42, l_235)) , (safe_mul_func_int16_t_s_s(9L, (((func_52(p_42) ^ 4294967294UL) < l_235) , (((func_52(p_42) <= g_179) , (void*)0) == l_300)))));
                    }
                    else
                    {
                        int ***l_302[6][6] = {{&l_301, &l_301, &l_301, &l_301, &l_301, &l_301}, {&l_301, &l_301, &l_301, &l_301, &l_301, &l_301}, {&l_301, &l_301, &l_301, &l_301, &l_301, &l_301}, {&l_301, &l_301, &l_301, &l_301, &l_301, &l_301}, {&l_301, &l_301, &l_301, &l_301, &l_301, &l_301}, {&l_301, &l_301, &l_301, &l_301, &l_301, &l_301}};
                        unsigned char *l_312[6] = {&g_99[2][0], &g_99[2][0], &g_253, &g_99[2][0], &g_99[2][0], &g_253};
                        int i, j;
                        g_182 = l_221;
                        l_303 = l_301;
                        (*l_241) = (*l_241);
                        g_107 = ((g_129[2][2][0] = ((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_108[0], 10)), 0x43CCL)), (((safe_rshift_func_int8_t_s_s((((((*l_221) = 0L) || (-1L)) , ((*g_182) , &g_26)) == l_312[2]), 5)) , (-6L)) ^ (safe_sub_func_int32_t_s_s(0xD7FDA7F2L, p_42))))) <= 3UL)) > (*g_112));
                    }
                }
                else
                {
                    for (g_265 = 7; (g_265 == 5); --g_265)
                    {
                        int ***l_317 = (void*)0;
                        int ***l_318 = (void*)0;
                        int ***l_319[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_319[i] = &l_301;
                        g_320 = l_301;
                        if (p_42)
                            break;
                    }
                }
            }
        }
        else
        {
            unsigned l_331 = 0x63710419L;
            int l_348 = 0x411622C3L;
            for (g_265 = 0; (g_265 < 57); g_265++)
            {
                char l_329 = (-3L);
                int l_332[5] = {0x17958A9CL, 0xA6FC0044L, 0x17958A9CL, 0xA6FC0044L, 0x17958A9CL};
                char l_342 = 0x70L;
                int **l_349 = &l_221;
                int i;
            }
        }
        (*l_221) = (l_222 != (l_352 = l_350));
        (*l_221) = (g_107 = ((safe_mod_func_uint16_t_u_u(((((*g_112) , ((p_42 , 0x1D78DC2BL) >= ((l_355 != (void*)0) & (0xB9L != (0UL != (((*g_344) > ((*p_43) = (*g_219))) || (*g_295))))))) , (*g_219)) | 0L), p_42)) == l_359[0][0][9]));
        (*l_221) = (safe_rshift_func_int8_t_s_u((func_52(p_41) > 0xA3L), ((((((p_41 > (((*p_43) = (*p_43)) , (p_41 , p_42))) || p_42) , ((safe_div_func_uint8_t_u_u((((!(((g_340 = g_220[1][1]) || l_364[5][8][0]) && g_340)) > g_3) , 0x4DL), 0x62L)) , p_42)) ^ 65526UL) , (void*)0) == &g_219)));
    }
    else
    {
        return (*g_112);
    }
    (*l_375) = func_75((safe_lshift_func_int16_t_s_s(((*p_43) == ((safe_sub_func_int16_t_s_s(p_41, l_369)) && g_174[0][0])), (*l_221))), l_230, (*l_221), (safe_div_func_int32_t_s_s((((*l_221) & (((*l_372) = &l_364[5][8][0]) == &l_364[5][8][0])) , 0x51C7DA0AL), (-3L))));
    return (*l_221);
}







static int func_52(char p_53)
{
    const unsigned *l_101 = &g_95;
    int *l_102 = &g_103;
    int *l_104 = &g_105;
    int *l_106[6][10][4] = {{{&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}}, {{&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}}, {{&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}}, {{&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}}, {{&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}}, {{&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}, {&g_107, &g_107, (void*)0, &g_3}}};
    unsigned short *l_110 = &g_88;
    unsigned short **l_109 = &l_110;
    char *l_111 = &g_61[8][0];
    unsigned char *l_133[2];
    unsigned char **l_132 = &l_133[0];
    int **l_217 = &l_104;
    int **l_218 = &l_106[4][5][3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_133[i] = (void*)0;
    g_108[0] = (g_107 = ((*l_104) = ((*l_102) = (l_101 != &g_95))));
    if (((void*)0 != l_109))
    {
        int l_124 = 0x1B6DC083L;
        unsigned char ***l_140 = &l_132;
        short l_150 = (-5L);
        unsigned short l_152 = 65535UL;
        int **l_167 = (void*)0;
        int **l_168 = (void*)0;
        int **l_169 = &l_106[5][7][2];
        g_112 = func_75(g_99[2][1], l_111, g_99[1][1], (+4294967289UL));
        for (g_107 = 11; (g_107 < 14); g_107 = safe_add_func_int16_t_s_s(g_107, 8))
        {
            unsigned *l_121 = &g_95;
            unsigned *l_122 = &g_123;
            int l_127 = 1L;
            unsigned *l_128 = &g_129[1][2][0];
            int l_130 = (-1L);
            int **l_131 = &g_112;
            if ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((&g_103 == (p_53 , ((*l_131) = ((((safe_sub_func_uint32_t_u_u(((*l_122) = ((*l_121) = 0UL)), (l_124 = p_53))) | (*g_112)) == ((l_130 = ((*l_128) = (l_127 = (safe_mod_func_int8_t_s_s(g_99[1][1], p_53))))) , l_127)) , &g_107)))), 65535UL)) | g_105), g_88)))
            {
                (*l_131) = (g_61[3][0] , &g_103);
            }
            else
            {
                unsigned char ***l_134 = (void*)0;
                unsigned char ***l_135 = &l_132;
                int l_141[9][4] = {{0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}, {0x3A0B3D9AL, 0x3A0B3D9AL, 0xD1B06CC5L, 0x3A0B3D9AL}};
                int l_151 = 0x29BBF80EL;
                int i, j;
                (*l_135) = l_132;
                for (g_88 = 0; (g_88 > 49); g_88++)
                {
                    (*l_104) = ((safe_mul_func_uint8_t_u_u((((*l_121) = ((((void*)0 == l_140) | (**l_131)) , ((p_53 , l_141[4][1]) != ((safe_mul_func_uint8_t_u_u(((p_53 | (safe_add_func_int8_t_s_s(0x27L, (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((l_150 | (((*l_102) = (((l_151 = g_103) | 0x7EL) < 0x3775L)) | (*g_112))) != 1UL), g_3)), 7))))) && 0x96L), 1L)) && 7UL)))) < l_152), 6UL)) , 0x62082439L);
                    for (p_53 = 0; (p_53 < (-22)); --p_53)
                    {
                        if (p_53)
                            break;
                        if ((*g_112))
                            break;
                    }
                }
            }
            (*l_131) = func_75(((l_152 , ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((~(g_99[3][1] = ((safe_mod_func_int16_t_s_s((0UL >= (0x07A3C17DL ^ (0L ^ (0x920AL < g_107)))), l_124)) , (safe_div_func_uint8_t_u_u((((0xDAL >= 7L) && 0x435FL) < p_53), p_53))))), g_108[0])), p_53)), l_150)), g_61[8][0])) & g_108[0])) < p_53), &g_61[8][0], p_53, l_150);
            if (p_53)
                break;
            (*l_131) = (g_123 , (*l_131));
        }
        (*l_169) = func_75((*g_112), &p_53, (*l_104), (p_53 >= p_53));
    }
    else
    {
        unsigned char l_171 = 0xE2L;
        unsigned short l_198 = 1UL;
        int l_202 = (-5L);
        int **l_216 = &g_112;
        if (((6UL & g_99[1][0]) == (*l_104)))
        {
            unsigned l_170[9][5][5] = {{{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}, {{0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}, {0UL, 0xB4B1B456L, 0x926123D7L, 0x7F268E3AL, 0x7F268E3AL}}};
            int *l_175 = &g_105;
            int i, j, k;
            if ((+((*l_102) = l_170[3][0][3])))
            {
                int l_172 = 0x0E83F799L;
                unsigned short *l_173 = &g_174[3][1];
                unsigned l_201 = 0xDD0DCD38L;
                if (((l_171 != ((((*l_173) = ((**l_109) = l_172)) <= l_170[3][0][3]) == g_129[2][2][0])) | l_171))
                {
                    int **l_176 = &l_104;
                    (*l_176) = l_175;
                }
                else
                {
                    const int *l_178 = &g_179;
                    const int **l_177 = &l_178;
                    const int *l_181 = &g_179;
                    const int **l_180[5][8] = {{&l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181}, {&l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181}, {&l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181}, {&l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181}, {&l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181, &l_181}};
                    int l_185 = 0x7079DBC9L;
                    int i, j;
                    g_182 = ((*l_177) = l_175);
                    if ((l_185 = (((safe_add_func_int8_t_s_s(g_88, g_174[2][0])) & 0x0AL) ^ p_53)))
                    {
                        (*l_177) = &g_107;
                        (*l_175) = (*g_182);
                    }
                    else
                    {
                        short *l_199 = &g_200[5];
                        (*l_104) = ((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((p_53 , (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_53 >= (g_99[1][0] = p_53)), 4)), 6L))), (*l_104))) , (((*l_199) = (safe_mod_func_uint16_t_u_u(l_198, ((*l_110) = p_53)))) , ((&g_61[8][0] != (void*)0) <= 0x2066L))), (*l_181))) , 65535UL), p_53)) , 0xEF4969E8L);
                        g_182 = &g_179;
                        g_182 = ((*l_177) = &g_107);
                    }
                    (*l_104) = l_201;
                }
            }
            else
            {
                (*l_104) = 0xE9A43CC3L;
            }
        }
        else
        {
            int *l_203 = &g_3;
            int **l_204 = &l_104;
            (*l_104) = ((*l_102) = l_202);
            g_112 = ((*l_204) = l_203);
            if (l_198)
            {
                unsigned l_205 = 0xC454E90AL;
                return l_205;
            }
            else
            {
                for (g_123 = 0; (g_123 <= 2); g_123 += 1)
                {
                    unsigned short *l_207[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_207[i] = &l_198;
                    for (l_198 = 0; (l_198 <= 2); l_198 += 1)
                    {
                        int *l_206 = (void*)0;
                        l_206 = &g_3;
                    }
                    (*l_102) = (g_108[g_123] & ((*l_102) & ((void*)0 == l_207[1])));
                }
            }
        }
        (*l_216) = func_75((p_53 , (safe_add_func_uint16_t_u_u(((**l_109) = ((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u(((-6L) > (!(((*l_102) = l_171) ^ (((safe_unary_minus_func_int16_t_s(p_53)) || p_53) < p_53)))))), (safe_mul_func_int8_t_s_s(((*l_104) , 0x8AL), g_129[2][0][0])))) != p_53)), p_53))), l_133[1], p_53, p_53);
    }
    (*l_218) = ((*l_217) = l_106[4][6][2]);
    return (*g_112);
}







static unsigned short * func_64(int p_65, unsigned short * p_66, unsigned char p_67, char * p_68)
{
    unsigned l_80[7];
    int *l_87 = &g_3;
    int **l_91 = &l_87;
    int i;
    for (i = 0; i < 7; i++)
        l_80[i] = 0x3E9F7A6BL;
    (*l_91) = func_75(g_3, p_68, p_65, (g_88 = ((g_61[7][6] | l_80[6]) >= (safe_sub_func_int8_t_s_s(0L, ((safe_lshift_func_int8_t_s_u(g_61[2][2], 1)) <= (p_67 , (safe_lshift_func_uint16_t_u_s(((void*)0 != l_87), p_65)))))))));
    return &g_88;
}







static int * func_75(int p_76, char * p_77, short p_78, unsigned p_79)
{
    int *l_90 = (void*)0;
    int **l_89 = &l_90;
    (*l_89) = &p_76;
    (*l_89) = (*l_89);
    return &g_3;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_61[i][j], "g_61[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_99[i][j], "g_99[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_129[i][j][k], "g_129[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_174[i][j], "g_174[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_200[i], "g_200[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_220[i][j], "g_220[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_487[i][j], "g_487[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
