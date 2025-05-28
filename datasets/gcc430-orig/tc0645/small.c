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



static int g_9[1] = {0xA3A11C15L};
static int g_61[5][4] = {{0xB91E2550L, 0xB91E2550L, 0L, 0x5CEC8167L}, {0xB91E2550L, 0xB91E2550L, 0L, 0x5CEC8167L}, {0xB91E2550L, 0xB91E2550L, 0L, 0x5CEC8167L}, {0xB91E2550L, 0xB91E2550L, 0L, 0x5CEC8167L}, {0xB91E2550L, 0xB91E2550L, 0L, 0x5CEC8167L}};
static const int *g_60[10] = {(void*)0, &g_9[0], &g_61[1][3], &g_61[1][3], &g_9[0], (void*)0, &g_9[0], &g_61[1][3], &g_61[1][3], &g_9[0]};
static int g_92 = (-3L);
static unsigned char g_100 = 2UL;
static short g_114 = 0xB22BL;
static int g_119[3] = {(-5L), (-5L), (-5L)};
static short *g_140 = &g_114;
static int *g_153[1] = {(void*)0};
static int **g_152 = &g_153[0];
static unsigned g_167 = 0x2A5219CEL;
static char g_169 = (-1L);
static unsigned g_179 = 4294967286UL;
static unsigned g_189 = 0xC2692D65L;
static unsigned short g_195 = 1UL;
static unsigned short g_197 = 0x39F2L;
static short g_203 = 0L;
static unsigned g_225 = 1UL;
static unsigned g_227 = 0x6E038309L;
static int g_242[5][7] = {{0x095B7494L, 0xC542C829L, 0x095B7494L, 0x3656FBFAL, 1L, 0x6B547997L, 0xBE3816ABL}, {0x095B7494L, 0xC542C829L, 0x095B7494L, 0x3656FBFAL, 1L, 0x6B547997L, 0xBE3816ABL}, {0x095B7494L, 0xC542C829L, 0x095B7494L, 0x3656FBFAL, 1L, 0x6B547997L, 0xBE3816ABL}, {0x095B7494L, 0xC542C829L, 0x095B7494L, 0x3656FBFAL, 1L, 0x6B547997L, 0xBE3816ABL}, {0x095B7494L, 0xC542C829L, 0x095B7494L, 0x3656FBFAL, 1L, 0x6B547997L, 0xBE3816ABL}};
static char g_292 = 0L;
static unsigned char *g_303 = &g_100;
static unsigned char **g_302 = &g_303;
static unsigned char ***g_301 = &g_302;
static unsigned *g_359[5] = {&g_227, &g_227, &g_227, &g_227, &g_227};
static unsigned *g_365 = &g_179;
static short g_367 = (-1L);
static const unsigned g_377 = 4294967286UL;
static unsigned char g_400[3] = {0x2BL, 0x2BL, 0x2BL};
static int *g_439[7] = {&g_61[1][2], &g_61[1][2], &g_242[4][4], &g_61[1][2], &g_61[1][2], &g_242[4][4], &g_61[1][2]};
static short g_490 = 0xB20FL;
static unsigned char g_517 = 0UL;
static const int g_533 = (-10L);
static const int *g_532 = &g_533;
static const int **g_531[6] = {&g_532, &g_532, (void*)0, &g_532, &g_532, (void*)0};
static unsigned short g_535[4] = {0x6139L, 0x6139L, 0x6139L, 0x6139L};
static const unsigned short g_547 = 65535UL;
static const unsigned short *g_546[2] = {&g_547, &g_547};
static short **g_563 = &g_140;
static short ***g_562 = &g_563;
static short **g_588 = &g_140;
static short g_597 = 0xCB97L;
static int *g_705 = &g_119[0];
static short g_720 = 0x0480L;
static unsigned short g_760 = 65535UL;



static unsigned func_1(void);
static int * func_2(int p_3, int * p_4, unsigned p_5, int * p_6, unsigned char p_7);
static int * func_10(int * p_11, unsigned short p_12, int p_13, unsigned p_14);
static unsigned char func_17(unsigned short p_18, int * p_19, int p_20, int p_21, int * p_22);
static int * func_23(unsigned p_24, unsigned char p_25, int p_26, const int p_27, unsigned p_28);
static unsigned short func_31(const unsigned p_32, int * p_33, int * const p_34, int * p_35, int * p_36);
static const unsigned func_38(int * p_39, int p_40);
static int * func_41(unsigned short p_42, int * p_43, int * p_44);
static unsigned short func_45(unsigned short p_46, unsigned p_47, int p_48);
static unsigned short func_49(int * p_50, short p_51, int * p_52, const int p_53, int * p_54);
static unsigned func_1(void)
{
    int *l_8[2];
    const int l_37 = 0x6E86FF18L;
    short l_224[2];
    unsigned short *l_226 = (void*)0;
    int l_228 = 0x7D5FC095L;
    int l_229 = 1L;
    unsigned l_234 = 5UL;
    int l_253[6][9][4] = {{{0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}}, {{0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}}, {{0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}}, {{0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}}, {{0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}}, {{0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}, {0xB65A2F4CL, (-1L), 9L, (-10L)}}};
    unsigned char l_278 = 0x74L;
    short l_316 = 0L;
    short l_325 = 8L;
    int l_399 = 0x5A9D1DCEL;
    int l_406 = 0L;
    short **l_466 = &g_140;
    unsigned char * const * const l_477[3] = {(void*)0, (void*)0, (void*)0};
    unsigned l_485 = 0x62730DACL;
    char l_492 = 0x86L;
    short ***l_565 = &l_466;
    short l_599 = (-1L);
    unsigned l_709 = 0UL;
    unsigned l_710 = 0xDC27C74CL;
    int *l_728 = &g_61[2][2];
    unsigned char *l_745 = &g_400[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_8[i] = &g_9[0];
    for (i = 0; i < 2; i++)
        l_224[i] = 0L;
    (*g_152) = func_2((l_8[0] == (void*)0), func_10(&g_9[0], (g_227 ^= (safe_sub_func_uint32_t_u_u((func_17((65535UL | (((void*)0 != l_8[1]) == (((*g_152) = func_23(g_9[0], g_9[0], (safe_lshift_func_uint16_t_u_s(func_31(l_37, l_8[0], l_8[0], l_8[0], l_8[0]), g_9[0])), g_9[0], g_9[0])) != l_8[0]))), l_8[1], g_9[0], g_9[0], l_8[0]) < l_224[0]), g_225))), l_228, l_229), g_225, &l_229, g_225);
    if ((l_234 != (*g_140)))
    {
        unsigned short l_235 = 0xD281L;
        int l_236 = 0xFD3D122BL;
        unsigned char *l_288[1];
        char l_326 = 0x61L;
        int l_346[3][1][9] = {{{1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L}}, {{1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L}}, {{1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L, 0x20DAB1F3L, 1L}}};
        int l_366 = 0xDB9EE69BL;
        unsigned l_398 = 0x0D9BFE80L;
        unsigned l_401 = 0x2729E205L;
        short l_413 = 0xC612L;
        unsigned l_414 = 4294967291UL;
        int *l_459 = &l_253[3][1][3];
        unsigned char * const *l_478 = &l_288[0];
        short l_482 = 5L;
        const int l_495 = 6L;
        int *l_496 = &l_236;
        unsigned l_536 = 0x6415E577L;
        unsigned l_542 = 4294967287UL;
        short ****l_564[8];
        const short *l_585[2][8] = {{&l_316, (void*)0, &l_316, (void*)0, &l_316, (void*)0, &l_316, (void*)0}, {&l_316, (void*)0, &l_316, (void*)0, &l_316, (void*)0, &l_316, (void*)0}};
        const short **l_584 = &l_585[1][0];
        unsigned l_674 = 0x74C5E538L;
        char *l_676[3];
        char **l_675 = &l_676[2];
        int l_693 = 0x7602A738L;
        int *l_708 = &g_119[0];
        unsigned short l_711[6];
        unsigned l_731 = 0x36D2DF41L;
        unsigned short l_741[8] = {0UL, 65526UL, 0UL, 65526UL, 0UL, 65526UL, 0UL, 65526UL};
        unsigned char l_749 = 1UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_288[i] = (void*)0;
        for (i = 0; i < 8; i++)
            l_564[i] = &g_562;
        for (i = 0; i < 3; i++)
            l_676[i] = &l_492;
        for (i = 0; i < 6; i++)
            l_711[i] = 0xB74FL;
        l_236 |= l_235;
        for (l_236 = 3; (l_236 >= 0); l_236 -= 1)
        {
            char l_254 = (-3L);
            int *l_255[10][1][2] = {{{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}, {{&g_61[4][3], &g_61[4][3]}}};
            unsigned char *l_272 = &g_100;
            unsigned char ** const l_271 = &l_272;
            unsigned l_342 = 0x34F03400L;
            unsigned l_343 = 0x212615BAL;
            char l_344 = 0x3FL;
            unsigned short l_385[7][5] = {{1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}, {1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}, {1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}, {1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}, {1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}, {1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}, {1UL, 0x711EL, 65526UL, 0x8F87L, 4UL}};
            int l_407 = 5L;
            int *l_415 = (void*)0;
            short l_431 = 1L;
            unsigned l_515 = 4294967287UL;
            short l_522 = (-1L);
            int l_548 = (-10L);
            unsigned char l_551 = 255UL;
            unsigned l_552[4];
            short l_553 = (-1L);
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_552[i] = 0UL;
            for (g_179 = 0; (g_179 <= 3); g_179 += 1)
            {
                int *l_239 = &g_119[2];
                unsigned char *l_251[4][4] = {{&g_100, &g_100, &g_100, &g_100}, {&g_100, &g_100, &g_100, &g_100}, {&g_100, &g_100, &g_100, &g_100}, {&g_100, &g_100, &g_100, &g_100}};
                short l_252 = 0xCC0CL;
                unsigned l_256 = 1UL;
                int l_317[5];
                int i, j;
                for (i = 0; i < 5; i++)
                    l_317[i] = 0xA4CA32E8L;
                l_256 &= ((safe_lshift_func_uint8_t_u_u((((*g_140) = func_49(l_239, (l_254 > g_179), (*g_152), l_236, l_255[2][0][1])) < (*l_239)), 2)) <= (*l_239));
                (*g_152) = (*g_152);
                for (l_254 = 0; (l_254 >= 0); l_254 -= 1)
                {
                    int l_262 = 0xC70D7D33L;
                    unsigned short *l_323 = (void*)0;
                    unsigned short *l_324 = &l_235;
                    unsigned *l_327 = &l_256;
                    int i;
                    for (g_203 = 0; (g_203 <= 0); g_203 += 1)
                    {
                        int i;
                        g_9[g_203] = ((safe_unary_minus_func_int16_t_s((0xB42A1A4BL ^ (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_92, 0)), (l_262 && (g_189 <= (safe_lshift_func_uint16_t_u_u(g_179, l_236))))))))) | ((*g_140) = (*g_140)));
                    }
                    g_9[l_254] &= (*l_239);
                    if ((0x8300L != (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((void*)0 != l_271) && (safe_add_func_uint32_t_u_u(l_235, (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u(g_119[0])) | (g_203 > (g_167 = ((l_278 && (func_49((*g_152), (*g_140), (*g_152), (*l_239), (*g_152)) < l_235)) > 0xE4E4L)))), g_189))))), l_262)), 254UL)), g_92))))
                    {
                        int l_279 = 4L;
                        unsigned char **l_289 = &l_251[0][3];
                        unsigned *l_293 = &l_256;
                        unsigned *l_294 = &g_225;
                        int l_318 = 1L;
                        (*g_152) = func_23(l_279, (safe_div_func_uint32_t_u_u(l_279, ((*l_293) = func_45(g_203, ((*l_294) = ((*l_293) = (g_119[0] <= ((safe_rshift_func_int8_t_s_u(g_61[1][3], 5)) >= (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((*l_271) = l_288[0]) != ((*l_289) = &g_100)), (+func_45((func_45((g_9[0] <= (safe_rshift_func_uint16_t_u_u(0xED77L, 6))), g_292, g_61[3][3]) > 1L), g_169, g_114)))), g_9[l_254])))))), g_9[0])))), (*l_239), g_9[l_254], l_235);
                        (*g_152) = (*g_152);
                        (*g_152) = (*g_152);
                        l_318 &= (g_100 != ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_195 = l_279), (safe_lshift_func_int16_t_s_u(((void*)0 != g_301), 14)))), (safe_sub_func_int16_t_s_s(func_38(func_23(((*l_293) = (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((((+(safe_rshift_func_int16_t_s_s((g_227 && (*l_239)), ((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_236, ((l_316 = l_279) ^ g_225))), l_236)) <= g_61[3][2])))) == l_236) < l_317[0]), 0x12D6L)) && g_119[2]), (*g_140)))), (**g_302), g_292, l_235, l_235), g_167), g_61[1][3])))) <= l_279));
                    }
                    else
                    {
                        (*g_152) = (*g_152);
                    }
                    g_242[2][4] &= (safe_unary_minus_func_uint16_t_u(func_45(g_197, ((*l_327) = (((safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint8_t_u_s(func_45(g_292, g_9[0], func_49(&l_236, (*g_140), l_255[4][0][1], (*l_239), ((*g_152) = func_10(&l_253[1][5][1], g_169, (*l_239), l_236)))), 2)) | (***g_301)) > g_169))) >= g_225) & g_227)), g_189)));
                }
                (*g_152) = &l_236;
            }
        }
        if ((safe_add_func_int32_t_s_s((*l_459), ((l_565 = g_562) != &g_563))))
        {
            short l_568[6][9] = {{0xF30FL, 6L, 6L, 6L, 0xF30FL, 6L, 6L, 6L, 0xF30FL}, {0xF30FL, 6L, 6L, 6L, 0xF30FL, 6L, 6L, 6L, 0xF30FL}, {0xF30FL, 6L, 6L, 6L, 0xF30FL, 6L, 6L, 6L, 0xF30FL}, {0xF30FL, 6L, 6L, 6L, 0xF30FL, 6L, 6L, 6L, 0xF30FL}, {0xF30FL, 6L, 6L, 6L, 0xF30FL, 6L, 6L, 6L, 0xF30FL}, {0xF30FL, 6L, 6L, 6L, 0xF30FL, 6L, 6L, 6L, 0xF30FL}};
            int l_582 = 0x1E814DEEL;
            short **l_587 = &g_140;
            unsigned ** const l_596 = &g_359[0];
            unsigned short l_598[3][4][9] = {{{1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}}, {{1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}}, {{1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}, {1UL, 5UL, 65534UL, 0UL, 65532UL, 0UL, 65527UL, 8UL, 0x34C6L}}};
            unsigned l_626 = 9UL;
            char l_700 = 0x82L;
            int l_736 = 0x4919C80DL;
            int *l_737 = &l_346[1][0][5];
            int *l_738 = &l_236;
            int **l_739[5][10][5] = {{{(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}}, {{(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}}, {{(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}}, {{(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}}, {{(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}, {(void*)0, &l_738, &l_8[0], &l_738, (void*)0}}};
            int i, j, k;
            if (((safe_rshift_func_uint16_t_u_u(0x3820L, l_568[4][1])) >= (((*l_459) >= 0xFD8BL) > 0xB9L)))
            {
                int l_571 = 0x86759073L;
                if (l_568[0][3])
                {
                    int l_580 = 0xF3E18FBBL;
                    int *l_581 = &l_229;
                    for (l_414 = 23; (l_414 >= 42); l_414++)
                    {
                        (*l_496) = (-8L);
                    }
                    (*l_496) |= l_571;
                    for (l_413 = 2; (l_413 < 20); ++l_413)
                    {
                        int l_574 = (-10L);
                        int l_577 = 0x21173439L;
                        l_366 &= (l_574 != (l_582 &= (((safe_div_func_int32_t_s_s((((*l_459) &= (*l_496)) == (l_577 = l_571)), l_568[4][1])) || ((func_17((*l_459), (*g_152), (*g_532), (safe_rshift_func_int8_t_s_u(g_242[2][2], 5)), (l_581 = l_581)) <= l_571) > (*g_303))) != l_574)));
                        (*l_581) = (*l_581);
                        if (l_574)
                            continue;
                    }
                }
                else
                {
                    short **l_589 = &g_140;
                    int l_591 = 0x9B275B76L;
                    for (l_398 = 0; (l_398 <= 9); l_398 += 1)
                    {
                        short l_583 = 0L;
                        const short ***l_586 = &l_584;
                        int *l_590 = (void*)0;
                        int i;
                        if (l_583)
                            break;
                        g_60[l_398] = (*g_152);
                        (*l_459) |= l_568[4][1];
                    }
                }
            }
            else
            {
                int **l_595[9][2] = {{&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}, {&g_153[0], (void*)0}};
                int i, j;
                (*l_459) ^= (safe_unary_minus_func_int8_t_s(((safe_sub_func_int16_t_s_s(((((void*)0 == l_595[1][1]) >= (l_596 != (void*)0)) != 0x263171A0L), (*l_496))) || (g_597 = l_568[3][3]))));
                return l_598[2][1][0];
            }
            if ((g_100 ^ (((*l_596) = (*l_596)) == &l_398)))
            {
                (*g_152) = (void*)0;
            }
            else
            {
                char l_604[6][5][6] = {{{0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}}, {{0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}}, {{0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}}, {{0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}}, {{0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}}, {{0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}, {0x71L, (-4L), 1L, 0x2AL, 1L, (-1L)}}};
                int l_616[1][9] = {{(-1L), (-1L), 0x01BC5444L, (-1L), (-1L), 0x01BC5444L, (-1L), (-1L), 0x01BC5444L}};
                unsigned char l_638 = 9UL;
                int i, j, k;
                (*l_459) = ((*l_496) = l_599);
                for (g_189 = (-16); (g_189 == 7); ++g_189)
                {
                    if (l_582)
                        break;
                }
                for (g_195 = (-11); (g_195 == 48); g_195 = safe_add_func_int8_t_s_s(g_195, 8))
                {
                    unsigned l_611[8][3][3] = {{{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}, {{0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}, {0xD275DD87L, 0xD42FE1F3L, 4294967294UL}}};
                    unsigned l_615 = 0x5DD8F264L;
                    unsigned short *l_621 = &l_598[2][1][0];
                    int *l_622 = &g_61[3][3];
                    short l_623 = (-3L);
                    const int * const * const l_644[3] = {(void*)0, (void*)0, (void*)0};
                    const int * const * const *l_643 = &l_644[1];
                    const int * const * const **l_642 = &l_643;
                    int i, j, k;
                    (*l_459) = (((((*l_459) & ((l_604[0][2][2] | (0x3721L <= (safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(0L, (safe_mod_func_int16_t_s_s(((l_611[5][0][0] |= (**g_302)) && g_292), (safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_u((!((0L | l_615) | (*l_459))), 4)))))))) | l_616[0][2]), 3)))) <= l_604[0][2][2])) <= l_615) ^ g_400[0]) | 0x2AF6540BL);
                    (*g_152) = (*g_152);
                    if (((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_621) = 0x9D94L), func_49(&l_253[5][2][3], l_604[0][2][2], l_622, (*l_622), (*g_152)))), (-1L))) && 1UL))
                    {
                        char l_627[6][2][8] = {{{0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}, {0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}}, {{0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}, {0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}}, {{0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}, {0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}}, {{0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}, {0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}}, {{0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}, {0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}}, {{0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}, {0x24L, (-1L), (-5L), (-5L), (-5L), 1L, 0x73L, 0xE4L}}};
                        int i, j, k;
                        if (l_623)
                            break;
                        (*l_496) ^= ((((*g_365) != func_17((g_535[3] ^= ((safe_mod_func_int32_t_s_s((l_626 >= 0x84L), ((-9L) ^ (0x6E89L & (*g_140))))) | (g_197 &= 0xC793L))), (*g_152), (+l_627[1][0][3]), l_627[3][1][1], &l_253[1][1][1])) <= l_627[1][0][5]) != (*l_622));
                        (*l_496) &= (safe_rshift_func_int16_t_s_u((**g_563), 6));
                    }
                    else
                    {
                        int l_639[9] = {0x7C9AD13BL, 0xEFE555FAL, 0x7C9AD13BL, 0xEFE555FAL, 0x7C9AD13BL, 0xEFE555FAL, 0x7C9AD13BL, 0xEFE555FAL, 0x7C9AD13BL};
                        int i;
                        (*l_459) ^= ((*l_496) = (safe_sub_func_int16_t_s_s((*g_140), 0xA2DFL)));
                        l_582 = l_604[0][2][2];
                        (*l_459) ^= ((l_582 = (*g_303)) == (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((func_45(l_638, (*g_365), l_639[8]) < (&g_167 != &g_227)) && (safe_lshift_func_uint16_t_u_u((((void*)0 != l_642) && 5UL), l_568[4][1]))), (*l_496))) & l_626), (**g_563))));
                    }
                }
                for (l_316 = 0; (l_316 >= 0); l_316 -= 1)
                {
                    return l_568[3][7];
                }
            }
            if (l_626)
            {
                unsigned short l_648 = 0x8D70L;
                int *l_678[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
                unsigned l_686 = 0xD12D0BDAL;
                unsigned short l_687 = 0xD8DBL;
                unsigned l_694 = 0xF5939155L;
                short l_716 = 0x92C9L;
                int i;
                if (l_568[3][2])
                {
                    unsigned char l_645 = 0UL;
                    int l_651 = 0L;
                    unsigned char * const **l_652 = &l_478;
                    (*l_496) &= l_645;
                    (*g_152) = (void*)0;
                    l_651 = (safe_add_func_int32_t_s_s(l_648, ((253UL < (l_651 < ((*g_301) != ((*l_652) = (*g_301))))) ^ (safe_div_func_int8_t_s_s((*l_496), func_49(&l_651, (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((l_582 |= (**g_302)), 1)), 7)), l_651)), 246UL)), &l_366, (*l_496), (*g_152)))))));
                }
                else
                {
                    unsigned char ****l_671 = &g_301;
                    int l_681 = (-1L);
                    unsigned short *l_682 = (void*)0;
                    unsigned short *l_683 = &l_598[2][2][4];
                    int *l_695 = &l_346[1][0][5];
                    (*l_496) &= (safe_rshift_func_int8_t_s_s(l_648, 0));
                    if ((((safe_rshift_func_uint16_t_u_s((*l_496), (0x6BFAL || ((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_626, ((*g_365) ^= l_598[0][0][7]))), (((*l_671) = &g_302) != &g_302))) & ((safe_lshift_func_uint8_t_u_u((*l_459), ((l_648 <= g_167) | l_674))) <= (*g_140)))))) <= 0x0CD0L) | 7UL))
                    {
                        char ***l_677 = &l_675;
                        (*l_677) = l_675;
                        (*g_152) = l_678[1];
                    }
                    else
                    {
                        return l_598[2][3][6];
                    }
                    (*g_152) = func_10(&l_582, (g_535[3] = ((*l_683) ^= (safe_lshift_func_int16_t_s_u(l_681, 5)))), ((*l_459) = (safe_sub_func_uint32_t_u_u(((l_686 >= (*g_365)) || func_17((*l_496), (*g_152), ((*l_695) = (func_45((l_687 == ((safe_rshift_func_int8_t_s_u((g_292 = ((safe_unary_minus_func_uint8_t_u(func_45((!l_681), (*g_365), (*l_496)))) | (*g_140))), l_568[0][8])) <= 0L)), (*g_365), l_582) || l_681)), l_681, &l_229)), (*g_365)))), g_242[4][5]);
                    return (*g_365);
                }
                if ((((*g_140) = (safe_unary_minus_func_int16_t_s((**g_563)))) <= (!0xA413L)))
                {
                    int l_699 = 0x455C41B0L;
                    int l_701 = (-6L);
                    int *l_702 = &g_61[2][2];
                    l_678[3] = func_23((safe_div_func_uint8_t_u_u(l_568[4][1], g_100)), (g_400[0] = ((*l_459) && (!l_699))), l_700, ((*l_702) = ((l_701 | 0L) || g_203)), (*g_365));
                    (*g_152) = (*g_152);
                }
                else
                {
                    unsigned l_717 = 0UL;
                    int l_721[7] = {0L, 0L, 0L, 0L, 0L, 0L, 0L};
                    int i;
                    (*l_496) |= l_598[2][1][0];
                    (*l_459) = ((*g_303) > ((((safe_mod_func_int32_t_s_s(((*g_562) == (*g_562)), l_716)) >= (0xC9L & (***g_301))) != l_717) == (*g_365)));
                    l_721[5] ^= ((*g_303) | (safe_div_func_int8_t_s_s((l_717 | (*l_708)), ((*l_459) = (g_720 = (**g_302))))));
                }
                if (((((+0x70F3L) != l_568[4][1]) <= ((safe_mul_func_int32_t_s_s(((void*)0 == (**g_301)), (!func_49((*g_152), (safe_div_func_uint8_t_u_u((***g_301), (-5L))), &l_582, l_568[1][0], (*g_152))))) <= 0x75L)) > (*g_705)))
                {
                    for (l_710 = (-25); (l_710 == 41); l_710 = safe_add_func_uint16_t_u_u(l_710, 3))
                    {
                        if (l_626)
                            break;
                        (*g_152) = (*g_152);
                        if (l_731)
                            continue;
                    }
                }
                else
                {
                    (*l_708) = (safe_rshift_func_int8_t_s_u((*l_459), (*l_459)));
                }
            }
            else
            {
                int **l_734 = &g_705;
                int ***l_735 = &g_152;
                (*l_735) = l_734;
            }
            g_439[5] = ((*g_152) = func_2(l_736, ((*g_152) = func_2(((*l_737) = (((**l_675) ^= (-1L)) | (*l_496))), (*g_152), (*l_459), (*g_152), l_626)), g_597, l_738, (*l_738)));
        }
        else
        {
            int *l_740 = &l_399;
            unsigned char *l_744 = &g_400[0];
            int l_748 = 0x1BF984F5L;
            (*l_496) &= (*g_705);
            l_740 = (*g_152);
            (*g_152) = l_740;
            (*g_152) = func_2((*l_459), (*g_152), (safe_div_func_uint32_t_u_u((0x9EL || ((((*g_302) = l_744) == (l_745 = (void*)0)) <= ((g_195 = ((0xF84BL >= (**g_588)) >= 0x15L)) == (safe_add_func_uint32_t_u_u((*g_365), 0L))))), l_748)), &l_236, l_749);
        }
    }
    else
    {
        short l_750 = 0L;
        const char l_751 = 0L;
        int *l_752[10] = {&g_242[4][5], &l_253[5][7][2], &g_242[4][5], &l_253[5][7][2], &g_242[4][5], &l_253[5][7][2], &g_242[4][5], &l_253[5][7][2], &g_242[4][5], &l_253[5][7][2]};
        int *l_753 = &g_242[4][5];
        int i;
        (*g_152) = &l_253[4][1][2];
        (*g_705) = (-1L);
        (*g_152) = func_23(l_750, ((*l_728) & g_167), l_750, ((*l_753) = l_751), (*l_728));
        (*g_152) = func_2((*g_532), l_752[4], g_100, &l_253[0][7][3], ((0x2973L & (safe_mod_func_uint8_t_u_u((**g_302), (~(safe_mod_func_int16_t_s_s((*g_140), ((safe_rshift_func_int8_t_s_u(0x67L, 2)) && (g_760 = ((*l_745) = (((void*)0 != (**g_562)) != (*g_705))))))))))) > (-1L)));
    }
    (*g_152) = &g_61[2][2];
    return (*l_728);
}







static int * func_2(int p_3, int * p_4, unsigned p_5, int * p_6, unsigned char p_7)
{
    int *l_233 = (void*)0;
    for (g_197 = (-24); (g_197 < 1); ++g_197)
    {
        (*g_152) = (*g_152);
    }
    (*g_152) = p_4;
    (*g_152) = l_233;
    return (*g_152);
}







static int * func_10(int * p_11, unsigned short p_12, int p_13, unsigned p_14)
{
    int *l_230 = &g_61[1][3];
    (*l_230) &= (*p_11);
    return l_230;
}







static unsigned char func_17(unsigned short p_18, int * p_19, int p_20, int p_21, int * p_22)
{
    unsigned short l_222 = 0xDE10L;
    (*p_22) &= (-1L);
    if (l_222)
    {
        return p_18;
    }
    else
    {
        int *l_223 = &g_119[0];
        (*l_223) |= ((*p_22) ^= l_222);
    }
    (*p_22) = (*p_22);
    return l_222;
}







static int * func_23(unsigned p_24, unsigned char p_25, int p_26, const int p_27, unsigned p_28)
{
    char *l_220 = &g_169;
    int *l_221 = &g_119[0];
    (*l_221) = (safe_unary_minus_func_int32_t_s((l_220 == &g_169)));
    return l_221;
}







static unsigned short func_31(const unsigned p_32, int * p_33, int * const p_34, int * p_35, int * p_36)
{
    int *l_55 = &g_9[0];
    int **l_56 = (void*)0;
    int **l_57 = &l_55;
    const unsigned l_58[10][9] = {{0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}, {0x9C3CBAA6L, 0x008D6DB9L, 0x588CE324L, 0UL, 0UL, 0UL, 0UL, 0x588CE324L, 0x008D6DB9L}};
    int *l_59[7] = {&g_9[0], &g_9[0], &g_9[0], &g_9[0], &g_9[0], &g_9[0], &g_9[0]};
    const unsigned l_74 = 0x1CA0702DL;
    short *l_137 = &g_114;
    int *l_164 = &g_9[0];
    const unsigned char l_165 = 0xB6L;
    char l_210 = 0x31L;
    unsigned l_213 = 0UL;
    int i, j;
    if (((func_38(((*l_57) = func_41(func_45(func_49(((*l_57) = (p_35 = l_55)), p_32, p_36, l_58[6][8], l_59[6]), (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_74, (safe_sub_func_int8_t_s_s(((!((safe_add_func_int8_t_s_s(g_9[0], (safe_mod_func_int32_t_s_s(g_61[1][3], (*p_34))))) || g_61[3][1])) != (*p_36)), p_32)))), (*p_36))), 2)), g_61[1][3]), &g_61[1][3], p_36)), g_9[0]) <= 1L) || 0x77DD4330L))
    {
        int l_141 = 0L;
        unsigned *l_166 = &g_167;
        char *l_168 = &g_169;
        for (g_92 = (-25); (g_92 <= 12); g_92 = safe_add_func_int8_t_s_s(g_92, 7))
        {
            short *l_139 = &g_114;
            short **l_138[4][4] = {{&l_139, &l_137, &l_137, &l_137}, {&l_139, &l_137, &l_137, &l_137}, {&l_139, &l_137, &l_137, &l_137}, {&l_139, &l_137, &l_137, &l_137}};
            int * const l_144[5][5] = {{&g_119[0], &l_141, &g_119[0], &l_141, &g_119[0]}, {&g_119[0], &l_141, &g_119[0], &l_141, &g_119[0]}, {&g_119[0], &l_141, &g_119[0], &l_141, &g_119[0]}, {&g_119[0], &l_141, &g_119[0], &l_141, &g_119[0]}, {&g_119[0], &l_141, &g_119[0], &l_141, &g_119[0]}};
            int i, j;
            l_141 |= (l_137 == (g_140 = &g_114));
            if ((*p_35))
                break;
            for (g_114 = 0; (g_114 < 28); g_114 = safe_add_func_uint8_t_u_u(g_114, 4))
            {
                int **l_145 = &l_59[1];
                (*l_145) = l_144[1][2];
                g_61[0][0] = (safe_div_func_int16_t_s_s((&l_145 != &l_145), 0xC36BL));
            }
            if ((safe_mod_func_int16_t_s_s(l_141, (*g_140))))
            {
                (*l_57) = &l_141;
                return l_141;
            }
            else
            {
                int ***l_154 = &l_56;
                int l_155 = 0x21B0A344L;
                (*l_57) = &g_119[0];
                l_155 &= ((safe_rshift_func_uint16_t_u_s((&l_144[1][3] == ((*l_154) = g_152)), 12)) & ((*l_55) = 0L));
                if ((*p_34))
                    continue;
            }
        }
        l_141 |= (safe_div_func_uint32_t_u_u((p_32 | (*p_36)), (safe_lshift_func_int16_t_s_s((0x9170L && (0x5F6D2A85L ^ (~(safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s(((*l_168) = (p_32 >= ((*l_166) = (p_32 ^ func_49(&l_141, p_32, (*l_57), l_165, (*g_152)))))), 7)) != p_32) == g_100), g_119[0]))))), 4))));
        for (g_167 = 0; (g_167 <= 0); g_167 += 1)
        {
            unsigned char l_172 = 0xC4L;
            int l_173[8][5] = {{(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}, {(-1L), 0xF1D68DACL, 0xE33A74A0L, 0x6765711EL, 0xA7E552D9L}};
            unsigned char *l_183 = &l_172;
            unsigned char ** const l_182 = &l_183;
            int i, j;
            l_173[7][0] = (safe_rshift_func_uint8_t_u_s((&p_36 != &p_35), (l_172 > 0x77385244L)));
            for (g_92 = 3; (g_92 >= 0); g_92 -= 1)
            {
                unsigned char **l_185[8] = {&l_183, &l_183, (void*)0, &l_183, &l_183, (void*)0, &l_183, &l_183};
                unsigned char ***l_184[6][6] = {{&l_185[0], &l_185[0], &l_185[2], &l_185[0], &l_185[0], &l_185[2]}, {&l_185[0], &l_185[0], &l_185[2], &l_185[0], &l_185[0], &l_185[2]}, {&l_185[0], &l_185[0], &l_185[2], &l_185[0], &l_185[0], &l_185[2]}, {&l_185[0], &l_185[0], &l_185[2], &l_185[0], &l_185[0], &l_185[2]}, {&l_185[0], &l_185[0], &l_185[2], &l_185[0], &l_185[0], &l_185[2]}, {&l_185[0], &l_185[0], &l_185[2], &l_185[0], &l_185[0], &l_185[2]}};
                unsigned char ***l_186 = (void*)0;
                unsigned char ***l_187[6];
                unsigned char ***l_188 = &l_185[7];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_187[i] = &l_185[0];
                g_61[(g_167 + 2)][(g_167 + 2)] = func_49((*g_152), g_61[g_92][g_92], ((*l_57) = &l_173[4][3]), ((g_61[1][3] != (g_92 | g_169)) == func_45(((*g_152) != (p_36 = &l_141)), p_32, g_119[0])), (*g_152));
                if ((*p_34))
                {
                    unsigned *l_178 = &g_179;
                    (**l_57) = func_45((safe_mod_func_uint16_t_u_u(((+((safe_rshift_func_uint16_t_u_u(0x6562L, 8)) >= g_9[0])) & ((*p_33) || ((*l_178) = g_119[0]))), (*g_140))), p_32, l_172);
                }
                else
                {
                    for (g_169 = 21; (g_169 != (-23)); g_169 = safe_sub_func_uint16_t_u_u(g_169, 5))
                    {
                        if ((*p_34))
                            break;
                    }
                    (*g_152) = p_33;
                }
                l_173[7][0] = func_49((*g_152), p_32, (*g_152), (*p_34), p_33);
                (*l_188) = l_182;
            }
        }
        g_189 &= 0x88D9D7E8L;
    }
    else
    {
        unsigned short *l_194 = &g_195;
        unsigned short *l_196 = &g_197;
        short *l_202 = &g_203;
        int l_204 = 0x949581F8L;
        int l_205[6];
        int i;
        for (i = 0; i < 6; i++)
            l_205[i] = 0x6C8BF41CL;
        l_205[0] &= (l_204 &= (safe_lshift_func_int16_t_s_u((0xE2510918L ^ (p_32 <= 0x5AL)), (((safe_add_func_uint16_t_u_u(((*l_196) = (((*l_194) |= g_169) <= 0L)), (safe_div_func_uint16_t_u_u(p_32, (safe_sub_func_int16_t_s_s(((*l_202) = ((*l_137) = 1L)), p_32)))))) < g_100) < 0L))));
        l_205[0] = 0x46FA9DA5L;
    }
    l_210 |= (safe_add_func_uint16_t_u_u((func_45(p_32, p_32, p_32) != p_32), (*g_140)));
    l_213 &= (safe_mod_func_uint32_t_u_u(0x7AD904D1L, (*p_33)));
    for (g_169 = 0; (g_169 >= (-14)); g_169 = safe_sub_func_int16_t_s_s(g_169, 2))
    {
        char l_216[6][2] = {{(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}, {(-4L), 0L}};
        int l_217 = 0x9C6DA3EAL;
        int *l_218 = &g_119[0];
        int i, j;
        l_217 = l_216[4][1];
        l_218 = (void*)0;
        if ((*l_164))
            continue;
        l_217 ^= ((65535UL <= ((*l_137) = p_32)) == ((void*)0 != &l_216[4][1]));
    }
    return p_32;
}







static const unsigned func_38(int * p_39, int p_40)
{
    int *l_132 = (void*)0;
    int ** const l_131 = &l_132;
    int ** const *l_130 = &l_131;
    for (g_114 = (-6); (g_114 == (-22)); --g_114)
    {
        short l_134[9][1][10] = {{{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}, {{1L, 0x33D0L, 0x6F03L, 0x33D0L, 1L, (-9L), 1L, 0x33D0L, 0x6F03L, 0x33D0L}}};
        int i, j, k;
        for (g_92 = 7; (g_92 != 12); ++g_92)
        {
            int **l_126 = (void*)0;
            int *l_128 = &g_119[0];
            int **l_127 = &l_128;
            const int l_129 = 7L;
            int *l_133 = &g_119[0];
            (*l_133) = (safe_sub_func_int32_t_s_s(((*p_39) ^ (g_9[0] <= func_49(((*l_127) = &g_61[2][2]), g_92, p_39, l_129, p_39))), (l_130 == &l_131)));
            g_60[8] = (**l_130);
            (*l_133) &= l_134[8][0][8];
        }
    }
    return p_40;
}







static int * func_41(unsigned short p_42, int * p_43, int * p_44)
{
    unsigned char l_89 = 0x3AL;
    int *l_94 = (void*)0;
    int l_112 = 0x6597F7B6L;
    int *l_116 = &g_9[0];
    const int l_117 = 0xA76656E8L;
    (*p_43) &= l_89;
    (*p_43) = 0xDF8BB411L;
    for (l_89 = 0; (l_89 <= 9); l_89 += 1)
    {
        int *l_90 = &g_61[3][3];
        const int **l_91[7] = {(void*)0, &g_60[l_89], (void*)0, &g_60[l_89], (void*)0, &g_60[l_89], (void*)0};
        int i;
        g_60[l_89] = l_90;
        g_60[1] = (void*)0;
        for (p_42 = 0; (p_42 <= 3); p_42 += 1)
        {
            int *l_93 = &g_61[2][3];
            int i, j;
            g_60[7] = &g_61[p_42][p_42];
            for (g_92 = 0; (g_92 <= 3); g_92 += 1)
            {
                unsigned char *l_97 = (void*)0;
                unsigned char *l_98 = (void*)0;
                unsigned char *l_99 = &g_100;
                const int l_111[2][2][2] = {{{0x8D60A67AL, 0xB2CDE802L}, {0x8D60A67AL, 0xB2CDE802L}}, {{0x8D60A67AL, 0xB2CDE802L}, {0x8D60A67AL, 0xB2CDE802L}}};
                short *l_113 = &g_114;
                int *l_115 = (void*)0;
                int *l_118 = &g_119[0];
                int i, j, k;
                p_43 = l_93;
                l_94 = &g_9[0];
                (*l_118) = (safe_sub_func_int32_t_s_s((g_61[(g_92 + 1)][g_92] = (((*l_99) = p_42) > func_49(&g_61[p_42][p_42], (((8UL < (safe_add_func_uint32_t_u_u(func_49(l_90, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((func_49(&g_9[0], (func_49(&g_9[0], ((*l_113) = (((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(0x63L, func_49(&g_9[0], func_49(&g_61[1][3], g_61[4][1], p_44, l_111[1][1][1], &g_61[1][2]), &g_61[2][0], (*l_93), &g_9[0]))) ^ 0x2EL), l_112)) | p_42) & 0x337A3F17L)), &g_61[0][1], (*p_44), l_115) >= g_9[0]), l_115, g_61[2][1], &g_61[p_42][p_42]) & g_61[2][0]), p_42)), 5)), &g_61[2][1], (*p_44), l_116), (*p_43)))) | 0xD2L) & p_42), p_43, l_117, p_44))), (-1L)));
            }
        }
    }
    return &g_9[0];
}







static unsigned short func_45(unsigned short p_46, unsigned p_47, int p_48)
{
    int *l_82[3][8][5] = {{{&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}}, {{&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}}, {{&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}, {&g_9[0], &g_61[2][0], (void*)0, (void*)0, &g_9[0]}}};
    int **l_81[3];
    int ***l_83 = (void*)0;
    int ***l_84 = (void*)0;
    int ***l_85 = &l_81[0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_81[i] = &l_82[1][1][4];
    (*l_85) = l_81[1];
    for (p_47 = 29; (p_47 >= 33); ++p_47)
    {
        int *l_88 = &g_9[0];
        g_60[8] = ((**l_85) = &g_61[1][3]);
        (**l_85) = l_88;
        return p_46;
    }
    return g_9[0];
}







static unsigned short func_49(int * p_50, short p_51, int * p_52, const int p_53, int * p_54)
{
    const int *l_62[10];
    const int **l_63 = &g_60[0];
    int *l_66[7] = {&g_9[0], &g_9[0], &g_61[1][3], &g_9[0], &g_9[0], &g_61[1][3], &g_9[0]};
    int l_67 = (-9L);
    int i;
    for (i = 0; i < 10; i++)
        l_62[i] = &g_9[0];
    g_60[8] = &p_53;
    (*l_63) = l_62[7];
    l_67 = (safe_add_func_int16_t_s_s(0x443CL, g_61[1][3]));
    return g_61[1][3];
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_61[i][j], "g_61[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_242[i][j], "g_242[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_400[i], "g_400[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_535[i], "g_535[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
