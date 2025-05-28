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



static unsigned char g_3 = 0x9DL;
static unsigned short g_4 = 65535UL;
static int g_29 = 3L;
static short g_49 = 0x4EE0L;
static unsigned g_75[9][5] = {{2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}, {2UL, 2UL, 1UL, 4294967295UL, 3UL}};
static short *g_92 = &g_49;
static int *g_96 = &g_29;
static unsigned g_100 = 0xF9381BC3L;
static short g_110 = 0x28E4L;
static unsigned short g_112[5] = {1UL, 65535UL, 1UL, 65535UL, 1UL};
static unsigned g_131 = 1UL;
static unsigned g_133[3] = {0UL, 0UL, 0UL};
static unsigned g_136 = 0UL;
static int g_146 = 1L;
static char g_147 = 0x3FL;
static int g_148 = 0xF34A0336L;
static int g_152 = (-1L);
static unsigned g_153 = 2UL;
static unsigned g_156 = 4294967295UL;
static char g_162 = 0x6EL;
static unsigned g_163 = 4294967286UL;
static char g_172[10][8][3] = {{{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}, {{1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}, {1L, 0x2BL, 0x32L}}};
static int g_173 = 8L;
static unsigned g_174 = 4294967292UL;
static int g_202 = 0xE7D22268L;
static int g_206 = 3L;
static short g_207 = 0x9EEEL;
static int g_209 = 0x96E64282L;
static unsigned char g_213 = 0x02L;
static char g_234[4] = {0xD1L, 0xD1L, 0xD1L, 0xD1L};
static const short *g_244 = (void*)0;
static const unsigned short g_250 = 0x6B48L;
static const unsigned short *g_249[5][2] = {{(void*)0, &g_250}, {(void*)0, &g_250}, {(void*)0, &g_250}, {(void*)0, &g_250}, {(void*)0, &g_250}};
static unsigned g_271 = 0x1AFD5369L;
static unsigned g_288 = 0xE5818166L;
static unsigned *g_294 = &g_163;
static unsigned * const *g_293 = &g_294;
static unsigned short g_314[4] = {1UL, 1UL, 1UL, 1UL};
static int g_357 = 0x69EAB360L;
static unsigned short g_362 = 1UL;
static int *g_372 = &g_148;
static const int g_390[2][4][2] = {{{1L, 0x440D9E5BL}, {1L, 0x440D9E5BL}, {1L, 0x440D9E5BL}, {1L, 0x440D9E5BL}}, {{1L, 0x440D9E5BL}, {1L, 0x440D9E5BL}, {1L, 0x440D9E5BL}, {1L, 0x440D9E5BL}}};



static int func_1(void);
static int * func_5(int p_6, unsigned p_7, unsigned char p_8, int * p_9, int * const p_10);
static char func_15(unsigned short p_16);
static int * func_17(unsigned char p_18, char p_19, int * p_20, int p_21);
static unsigned char func_22(int p_23);
static int func_24(int * p_25, int p_26, unsigned char p_27);
static int func_30(unsigned p_31, char p_32, int * p_33);
static int * func_36(int * p_37);
static char func_39(int * p_40);
static int * func_41(int p_42, int p_43, short p_44, char p_45, int * p_46);
static int func_1(void)
{
    int *l_2[3];
    unsigned char *l_381[5][9][3] = {{{&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}}, {{&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}}, {{&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}}, {{&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}}, {{&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}, {&g_213, &g_213, &g_213}}};
    int l_382 = (-1L);
    int **l_392 = (void*)0;
    int **l_393 = &g_372;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2[i] = (void*)0;
    g_3 = 0L;
    g_4 = 0xAA29C146L;
    (*l_393) = func_5((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(func_15(g_3), (g_213 &= g_172[7][2][2]))), 3)), g_172[7][2][2], (l_382 = g_202), l_2[2], l_2[2]);
    return g_148;
}







static int * func_5(int p_6, unsigned p_7, unsigned char p_8, int * p_9, int * const p_10)
{
    int l_383[5] = {9L, 0x029195E1L, 9L, 0x029195E1L, 9L};
    int **l_384 = &g_372;
    int **l_385 = &g_96;
    int *l_391 = &g_173;
    int i;
    for (g_173 = 0; g_173 < 4; g_173 += 1)
    {
        g_234[g_173] = 0x1DL;
    }
    (*g_372) = (l_383[2] ^ 0x5B90L);
    (*l_385) = ((*l_384) = (void*)0);
    p_9 = func_17(func_22(p_8), (safe_unary_minus_func_int8_t_s((p_8 >= (p_7 | (((*g_92) = (((((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(0L)), ((func_39(&g_148) & g_136) || (0x31EDEBA6L <= 0xBCFAF827L)))) == 2L) && p_7) || g_390[1][2][1]) ^ p_7)) & p_7))))), l_391, (*l_391));
    return (*l_384);
}







static char func_15(unsigned short p_16)
{
    int *l_28[3][3] = {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}};
    int *l_38[10][7][3] = {{{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}, {{&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}, {&g_29, &g_29, &g_29}}};
    char l_369 = 0x5EL;
    int **l_371[6][2] = {{(void*)0, &g_96}, {(void*)0, &g_96}, {(void*)0, &g_96}, {(void*)0, &g_96}, {(void*)0, &g_96}, {(void*)0, &g_96}};
    unsigned l_380 = 0UL;
    int i, j, k;
    g_372 = func_17(func_22(func_24(l_28[1][2], func_30((0L == g_4), ((&g_29 == l_28[1][2]) < (safe_add_func_uint32_t_u_u(p_16, g_4))), func_36((l_38[5][6][0] = l_28[1][2]))), p_16)), p_16, l_28[0][0], l_369);
    g_372 = &g_206;
    if ((g_202 >= p_16))
    {
        int *l_373 = &g_152;
        l_373 = func_17(g_146, p_16, l_373, g_153);
        (*g_96) ^= p_16;
        (*g_372) &= (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*l_373), p_16)), 11));
        l_373 = &g_357;
    }
    else
    {
        for (g_131 = 0; (g_131 != 49); g_131++)
        {
            g_96 = &g_173;
            if (p_16)
                break;
            return p_16;
        }
    }
    return l_380;
}







static int * func_17(unsigned char p_18, char p_19, int * p_20, int p_21)
{
    int **l_370 = &g_96;
    (*l_370) = p_20;
    return &g_148;
}







static unsigned char func_22(int p_23)
{
    unsigned l_367 = 4294967290UL;
    for (g_152 = 0; (g_152 > (-27)); --g_152)
    {
        int *l_368[1];
        int i;
        for (i = 0; i < 1; i++)
            l_368[i] = &g_206;
        g_29 = l_367;
    }
    return p_23;
}







static int func_24(int * p_25, int p_26, unsigned char p_27)
{
    unsigned short *l_302 = (void*)0;
    unsigned short **l_301 = &l_302;
    int l_305 = 0xE420C5EBL;
    char l_345[3][2];
    int l_356 = (-1L);
    int l_361[4] = {2L, 0xD60F1835L, 2L, 0xD60F1835L};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_345[i][j] = 2L;
    }
    for (g_29 = 3; (g_29 >= 0); g_29 -= 1)
    {
        short l_300 = 6L;
        short **l_306 = &g_92;
        int l_312[5][3][10] = {{{1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}}, {{1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}}, {{1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}}, {{1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}}, {{1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}, {1L, 0x600C539AL, 0x5916AA95L, 0x7FD28B3FL, 2L, (-1L), 2L, 0x7FD28B3FL, 0x5916AA95L, 0x600C539AL}}};
        int l_318 = 0xD02CD53DL;
        unsigned char l_358 = 0xA0L;
        int i, j, k;
        for (g_4 = 0; (g_4 <= 3); g_4 += 1)
        {
            unsigned short ***l_303 = &l_301;
            int l_313 = (-1L);
            int i;
            l_300 |= g_234[g_4];
            if ((((*l_303) = l_301) == (void*)0))
            {
                unsigned l_304 = 0x5B0F2C9DL;
                int l_310 = (-1L);
                int l_311[5] = {0xF1156D1DL, (-1L), 0xF1156D1DL, (-1L), 0xF1156D1DL};
                int i;
                g_96 = &g_206;
                l_304 |= 0xF3632F02L;
                if ((7L != g_112[g_29]))
                {
                    return l_305;
                }
                else
                {
                    short ***l_307 = &l_306;
                    (*l_307) = l_306;
                    for (g_49 = 0; (g_49 <= 3); g_49 += 1)
                    {
                        int *l_308 = (void*)0;
                        int *l_309[5] = {&g_146, (void*)0, &g_146, (void*)0, &g_146};
                        int i;
                        if ((*g_96))
                            break;
                        ++g_314[3];
                    }
                }
            }
            else
            {
                unsigned *l_321 = &g_131;
                unsigned short **l_329 = &l_302;
                int l_333 = 0x30BABF0FL;
                for (g_207 = 1; (g_207 >= 0); g_207 -= 1)
                {
                    int i;
                    if (g_314[g_4])
                        break;
                    for (g_209 = 1; (g_209 >= 0); g_209 -= 1)
                    {
                        int *l_317[2][2][10] = {{{(void*)0, &g_148, &l_312[0][2][0], &g_148, &l_312[0][2][4], &l_312[0][1][3], &l_312[0][2][4], &g_148, &l_312[0][2][0], &g_148}, {(void*)0, &g_148, &l_312[0][2][0], &g_148, &l_312[0][2][4], &l_312[0][1][3], &l_312[0][2][4], &g_148, &l_312[0][2][0], &g_148}}, {{(void*)0, &g_148, &l_312[0][2][0], &g_148, &l_312[0][2][4], &l_312[0][1][3], &l_312[0][2][4], &g_148, &l_312[0][2][0], &g_148}, {(void*)0, &g_148, &l_312[0][2][0], &g_148, &l_312[0][2][4], &l_312[0][1][3], &l_312[0][2][4], &g_148, &l_312[0][2][0], &g_148}}};
                        int i, j, k;
                        l_318 = (*p_25);
                    }
                    if ((*p_25))
                        break;
                }
                if ((safe_mul_func_uint8_t_u_u((((**l_306) = (*g_92)) == p_26), (p_26 && (l_321 != l_321)))))
                {
                    unsigned l_323 = 0xD1562EF1L;
                    for (g_152 = 2; (g_152 >= 0); g_152 -= 1)
                    {
                        int **l_322 = &g_96;
                        (*l_322) = (void*)0;
                    }
                    for (g_163 = 0; (g_163 <= 1); g_163 += 1)
                    {
                        int *l_326 = &l_312[4][0][3];
                        int i;
                        l_323--;
                        (*l_326) ^= g_133[g_163];
                    }
                }
                else
                {
                    int *l_330 = (void*)0;
                    int *l_331 = &l_305;
                    int **l_332 = &l_330;
                    (*l_331) = ((&g_29 != (void*)0) | (((*l_303) = l_329) == &g_249[3][1]));
                    (*l_332) = &p_26;
                    (*l_331) |= l_333;
                    for (g_49 = 3; (g_49 >= 0); g_49 -= 1)
                    {
                        unsigned l_334[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_334[i] = 4294967289UL;
                        l_313 = ((**l_332) &= l_334[0]);
                    }
                }
            }
        }
        if ((safe_rshift_func_uint8_t_u_u(((g_136 >= l_312[0][2][4]) < (((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(5L, l_312[3][2][6])), (0x345715C2L | (p_26 | p_27)))) != p_26) <= (g_3 ^ 0xA8L))), p_26)))
        {
            int *l_348[1];
            int i;
            for (i = 0; i < 1; i++)
                l_348[i] = &g_146;
            g_148 = ((safe_add_func_uint16_t_u_u(l_345[2][0], p_27)) == ((0x5B2D6D7EL | (*p_25)) > (g_234[g_29] ^= (safe_mul_func_int8_t_s_s(l_345[0][0], g_314[3])))));
        }
        else
        {
            int *l_349 = &g_152;
            int *l_350 = &g_152;
            int *l_351 = (void*)0;
            int *l_352 = &l_312[4][0][5];
            int *l_353 = &g_148;
            int *l_354 = &l_312[4][1][4];
            int *l_355[2];
            int i;
            for (i = 0; i < 2; i++)
                l_355[i] = &g_146;
            l_358--;
            --g_362;
            return p_26;
        }
    }
    return l_345[2][0];
}







static int func_30(unsigned p_31, char p_32, int * p_33)
{
    unsigned short *l_246 = &g_112[1];
    const unsigned short *l_248 = (void*)0;
    const unsigned short **l_247[5][9] = {{&l_248, &l_248, &l_248, (void*)0, &l_248, &l_248, &l_248, &l_248, &l_248}, {&l_248, &l_248, &l_248, (void*)0, &l_248, &l_248, &l_248, &l_248, &l_248}, {&l_248, &l_248, &l_248, (void*)0, &l_248, &l_248, &l_248, &l_248, &l_248}, {&l_248, &l_248, &l_248, (void*)0, &l_248, &l_248, &l_248, &l_248, &l_248}, {&l_248, &l_248, &l_248, (void*)0, &l_248, &l_248, &l_248, &l_248, &l_248}};
    int l_251[8] = {(-5L), (-5L), 1L, (-5L), (-5L), 1L, (-5L), (-5L)};
    int l_268[1][3];
    short l_274 = (-1L);
    int *l_295[3][3][7] = {{{&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}, {&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}, {&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}}, {{&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}, {&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}, {&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}}, {{&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}, {&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}, {&g_206, &g_206, &g_146, &g_206, &g_206, &g_206, &g_146}}};
    unsigned l_299 = 0xD31E41F7L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_268[i][j] = 0x3721B999L;
    }
    if (((!((l_246 == (g_249[4][1] = l_246)) >= l_251[2])) ^ p_32))
    {
        int **l_252 = (void*)0;
        int *l_253 = &l_251[3];
        int *l_254 = &l_251[5];
        l_253 = &g_29;
        (*l_254) ^= ((*p_33) <= (*p_33));
    }
    else
    {
        unsigned l_255[1][1][5] = {{{0x10D5989FL, 0x1716B6ADL, 0x10D5989FL, 0x1716B6ADL, 0x10D5989FL}}};
        int **l_258 = &g_96;
        unsigned *l_259 = &l_255[0][0][4];
        int *l_276 = &g_146;
        int i, j, k;
        (*p_33) &= ((((*l_246) |= l_255[0][0][3]) || ((*g_92) = (safe_mod_func_int32_t_s_s(func_39(((*l_258) = p_33)), ((*l_259) ^= 0xED81734CL))))) == l_251[1]);
        for (g_147 = 0; (g_147 != (-14)); --g_147)
        {
            unsigned l_298 = 0x5DF6C037L;
            for (p_31 = 0; (p_31 == 8); ++p_31)
            {
                char l_285 = 0L;
                int *l_290 = &g_173;
                unsigned * const *l_291[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
                int l_297 = 0x21E11CBFL;
                int i;
                for (g_173 = 0; (g_173 <= (-13)); g_173 = safe_sub_func_uint16_t_u_u(g_173, 8))
                {
                    int *l_269 = (void*)0;
                    int *l_270[7] = {&g_29, (void*)0, &g_29, (void*)0, &g_29, (void*)0, &g_29};
                    char *l_275 = &g_162;
                    int l_289 = 1L;
                    int i;
                    g_29 ^= (p_31 <= ((safe_mod_func_int32_t_s_s((g_271 = l_268[0][0]), func_39(p_33))) >= ((*l_275) = (safe_sub_func_uint32_t_u_u(l_274, 0x8F001C75L)))));
                    (*l_258) = l_276;
                    if ((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((**l_258) = (p_33 != (void*)0)) <= (l_285 != (safe_add_func_int16_t_s_s(g_288, p_31)))), ((*p_33) != ((((3UL <= l_289) & ((g_133[2] != 1L) != g_3)) < g_202) > 0xDFL)))), (*g_92))), (-8L))))
                    {
                        g_96 = p_33;
                    }
                    else
                    {
                        unsigned * const **l_292[6] = {&l_291[2], &l_291[2], (void*)0, &l_291[2], &l_291[2], (void*)0};
                        int i;
                        (*l_258) = l_290;
                        g_152 &= (p_32 >= ((*l_246) = (l_251[2] = func_39(p_33))));
                        (*l_276) &= (*p_33);
                        g_293 = l_291[2];
                    }
                    if (func_39(&l_251[5]))
                    {
                        g_96 = (l_295[2][0][2] = &g_206);
                    }
                    else
                    {
                        unsigned l_296 = 0x7F697AC6L;
                        if ((*g_96))
                            break;
                        (*l_258) = &g_148;
                        if (l_296)
                            break;
                    }
                }
                (*l_290) = ((*l_276) = ((l_297 <= p_32) <= l_298));
                return (*p_33);
            }
        }
    }
    return l_299;
}







static int * func_36(int * p_37)
{
    short l_47 = 0xABE7L;
    short *l_48[2];
    int l_50[6][6][3] = {{{0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}}, {{0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}}, {{0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}}, {{0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}}, {{0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}}, {{0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}, {0L, 0L, 0x52F52174L}}};
    int *l_51 = (void*)0;
    int *l_177 = &g_173;
    const int *l_183 = &l_50[1][3][0];
    unsigned l_235 = 4294967287UL;
    const short *l_243 = (void*)0;
    const short **l_242[1][7];
    int l_245 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_48[i] = &g_49;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_242[i][j] = &l_243;
    }
    (*l_177) &= (func_39(func_41(((((g_4 > (*p_37)) == (p_37 == (void*)0)) && (-10L)) < l_47), (l_47 >= g_4), (l_50[5][4][2] = l_47), l_47, l_51)) == g_152);
    for (g_131 = 0; (g_131 <= 2); g_131 += 1)
    {
        int *l_178 = &g_148;
        int *l_179[10];
        unsigned short l_180 = 65527UL;
        int i;
        for (i = 0; i < 10; i++)
            l_179[i] = &g_148;
        ++l_180;
        if ((*p_37))
            break;
        for (g_148 = 0; (g_148 <= 2); g_148 += 1)
        {
            for (g_153 = 0; g_153 < 9; g_153 += 1)
            {
                for (g_162 = 0; g_162 < 5; g_162 += 1)
                {
                    g_75[g_153][g_162] = 4294967295UL;
                }
            }
            return &g_29;
        }
        for (g_136 = 0; (g_136 <= 2); g_136 += 1)
        {
            short **l_196 = &l_48[1];
            int l_197 = 0x9EF3D33EL;
            short *l_198 = (void*)0;
            short *l_199 = &g_110;
            int l_204 = 0xEA9B3E44L;
            int l_208 = 0xD28B2901L;
            int l_210 = 0x6A63E400L;
            int l_211 = 0xF9118A8FL;
            int l_212 = 0xBE4E106FL;
            int **l_216 = &l_178;
        }
    }
    (*p_37) = ((func_39(p_37) > (safe_lshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s(g_29, (((*p_37) || ((*l_177) = (((((safe_lshift_func_int16_t_s_u((*l_183), (*l_177))) | (0x75A8L > (*l_183))) <= ((g_244 = &l_47) != &g_110)) >= l_245) && (*l_183)))) | 0x7A38L))) ^ (*p_37)) < (*l_183)), (*l_183)))) < (*l_183));
    return &g_173;
}







static char func_39(int * p_40)
{
    unsigned l_166[2];
    int *l_169 = &g_152;
    int l_170 = 8L;
    int *l_171[2];
    int i;
    for (i = 0; i < 2; i++)
        l_166[i] = 0x450A63B9L;
    for (i = 0; i < 2; i++)
        l_171[i] = &g_152;
    --l_166[0];
    g_174--;
    g_96 = p_40;
    return g_163;
}







static int * func_41(int p_42, int p_43, short p_44, char p_45, int * p_46)
{
    int l_54[5][9] = {{0xFE74D024L, 0xF274C111L, 1L, 4L, 0xF274C111L, 0xA1B6BD7AL, 0xF274C111L, 4L, 1L}, {0xFE74D024L, 0xF274C111L, 1L, 4L, 0xF274C111L, 0xA1B6BD7AL, 0xF274C111L, 4L, 1L}, {0xFE74D024L, 0xF274C111L, 1L, 4L, 0xF274C111L, 0xA1B6BD7AL, 0xF274C111L, 4L, 1L}, {0xFE74D024L, 0xF274C111L, 1L, 4L, 0xF274C111L, 0xA1B6BD7AL, 0xF274C111L, 4L, 1L}, {0xFE74D024L, 0xF274C111L, 1L, 4L, 0xF274C111L, 0xA1B6BD7AL, 0xF274C111L, 4L, 1L}};
    unsigned l_140 = 0UL;
    int *l_159 = (void*)0;
    int *l_160 = &g_29;
    int *l_161[10];
    int i, j;
    for (i = 0; i < 10; i++)
        l_161[i] = (void*)0;
    for (g_49 = 0; (g_49 <= 23); ++g_49)
    {
        unsigned l_57 = 1UL;
        int *l_87 = &l_54[2][4];
        int l_113 = 1L;
        short l_125 = 1L;
        int l_134 = 0xABC2DE93L;
        int l_145 = 5L;
        int l_149 = 0xF78AD59AL;
        int l_150 = 6L;
        int l_151[10] = {0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L, 0L, 1L};
        int i;
        for (p_45 = 4; (p_45 >= 0); p_45 -= 1)
        {
            int i, j;
            g_29 |= (l_54[p_45][(p_45 + 1)] = l_54[p_45][(p_45 + 1)]);
            for (p_44 = (-14); (p_44 < (-2)); ++p_44)
            {
                short *l_66 = &g_49;
            }
        }
        for (p_44 = 10; (p_44 != (-26)); p_44 = safe_sub_func_uint16_t_u_u(p_44, 1))
        {
            short *l_109 = &g_110;
            unsigned short *l_111 = &g_112[1];
            int *l_117[1];
            int l_143 = 7L;
            int i;
            for (i = 0; i < 1; i++)
                l_117[i] = (void*)0;
            if ((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((+(((*l_109) = l_54[2][3]) & ((*l_111) |= (l_54[4][5] > (g_75[2][0] ^ g_29))))), p_44)) | l_113), l_54[0][0])))
            {
                unsigned l_116[5] = {4UL, 7UL, 4UL, 7UL, 4UL};
                int i;
                if ((*g_96))
                    break;
                for (l_113 = 1; (l_113 != (-23)); l_113 = safe_sub_func_uint8_t_u_u(l_113, 8))
                {
                    g_96 = &g_29;
                    l_116[1] = l_54[0][1];
                    return l_117[0];
                }
                return l_117[0];
            }
            else
            {
                unsigned l_124 = 4294967295UL;
                int l_135 = (-1L);
                unsigned short l_142[2][7] = {{65535UL, 0UL, 0x3AAEL, 0x3AAEL, 0UL, 65535UL, 0UL}, {65535UL, 0UL, 0x3AAEL, 0x3AAEL, 0UL, 65535UL, 0UL}};
                int l_144[3][3][8] = {{{8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}, {8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}, {8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}}, {{8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}, {8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}, {8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}}, {{8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}, {8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}, {8L, 0xAA12BE6CL, 7L, 7L, 0xAA12BE6CL, 8L, 0x22E13D98L, 0x17211454L}}};
                int i, j, k;
                for (p_45 = 0; (p_45 <= 14); p_45 = safe_add_func_uint8_t_u_u(p_45, 6))
                {
                    unsigned *l_130 = &g_131;
                    unsigned *l_132 = &g_133[2];
                    unsigned char *l_137 = &g_3;
                    int l_141 = 0L;
                    l_134 ^= (g_100 | (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_s(l_124, (((((!l_125) & p_45) | (+((safe_add_func_int16_t_s_s(l_54[0][5], 0xB5C8L)) < ((*l_132) = ((*l_130) &= ((safe_rshift_func_int8_t_s_u(l_54[3][4], g_112[1])) >= (l_54[0][2] <= g_75[5][3]))))))) > 65535UL) <= p_43))) >= p_42) < 0x31L), 0)));
                    (*l_87) ^= p_43;
                    p_42 = ((((*l_137) &= ((*l_87) >= (((4294967290UL || (l_134 &= (g_136 |= (l_135 = ((*g_96) = (*g_96)))))) < 0x7AL) > (*l_87)))) >= (safe_sub_func_int32_t_s_s(l_140, 9UL))) != ((((l_141 < l_141) <= 1L) || 1L) != l_142[1][2]));
                }
                for (g_3 = 0; g_3 < 9; g_3 += 1)
                {
                    for (p_43 = 0; p_43 < 5; p_43 += 1)
                    {
                        g_75[g_3][p_43] = 0x13CA6591L;
                    }
                }
                ++g_153;
            }
            --g_156;
        }
        l_159 = &p_42;
    }
    ++g_163;
    return &g_29;
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
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_112[i], "g_112[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_234[i], "g_234[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_314[i], "g_314[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_390[i][j][k], "g_390[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
