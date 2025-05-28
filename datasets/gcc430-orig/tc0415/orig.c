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



static unsigned char g_6[3] = {0x90L, 0x90L, 0x90L};
static short g_38 = (-5L);
static volatile short g_56 = 0x0276L;
static volatile short *g_55 = &g_56;
static unsigned g_60 = 4294967286UL;
static int g_62 = (-6L);
static unsigned char g_84 = 253UL;
static unsigned char g_97 = 253UL;
static unsigned g_106 = 0UL;
static short g_133 = (-4L);
static unsigned short g_150 = 0xC856L;
static unsigned char *g_153 = &g_97;
static unsigned g_154 = 3UL;
static unsigned *g_202 = &g_154;
static char g_204 = 2L;
static int *g_234[2] = {&g_62, &g_62};
static int g_275 = 0x1955D0B8L;
static int *g_274 = &g_275;
static volatile unsigned short **g_278 = (void*)0;
static unsigned **g_297[2][9] = {{&g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202}, {&g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202, &g_202}};
static unsigned g_301 = 4294967295UL;
static int *g_383 = (void*)0;
static short *g_437 = &g_133;
static short **g_436[2][10] = {{&g_437, (void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, (void*)0}, {&g_437, (void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, (void*)0}};
static char g_448 = 0x8BL;
static unsigned char *g_478 = &g_84;
static char *g_516[2][3][7] = {{{&g_204, &g_448, &g_448, &g_204, (void*)0, &g_204, &g_448}, {&g_204, &g_448, &g_448, &g_204, (void*)0, &g_204, &g_448}, {&g_204, &g_448, &g_448, &g_204, (void*)0, &g_204, &g_448}}, {{&g_204, &g_448, &g_448, &g_204, (void*)0, &g_204, &g_448}, {&g_204, &g_448, &g_448, &g_204, (void*)0, &g_204, &g_448}, {&g_204, &g_448, &g_448, &g_204, (void*)0, &g_204, &g_448}}};
static unsigned char **g_536 = &g_478;
static unsigned ***g_619 = &g_297[0][5];
static unsigned ****g_618[4][2] = {{&g_619, &g_619}, {&g_619, &g_619}, {&g_619, &g_619}, {&g_619, &g_619}};
static unsigned ****g_622 = &g_619;
static unsigned char g_640 = 4UL;
static volatile unsigned short g_661 = 3UL;
static unsigned g_664 = 0x142099F8L;
static unsigned ******g_700 = (void*)0;
static char g_712 = 0x8AL;
static int g_834 = 0L;
static unsigned g_839 = 0xEB4B5232L;
static int g_858 = (-1L);
static unsigned short *g_891 = &g_150;
static unsigned short **g_890 = &g_891;
static int g_924[9][4][7] = {{{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}, {{(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}, {(-7L), (-7L), (-1L), (-6L), 7L, (-1L), (-1L)}}};



static unsigned func_1(void);
static int func_2(int p_3, unsigned p_4, int p_5);
static unsigned char func_10(short p_11, int p_12);
static unsigned char func_13(int p_14, unsigned p_15, int p_16);
static char func_17(unsigned p_18);
static char func_21(unsigned short p_22, char p_23, int p_24);
static short func_33(unsigned short p_34, unsigned p_35);
static short func_40(int p_41, int * p_42, char p_43, short * p_44, unsigned short p_45);
static int func_46(unsigned short p_47, int * p_48, short * p_49, unsigned p_50);
static short func_51(unsigned char p_52, int p_53, int p_54);
static unsigned func_1(void)
{
    short l_7 = (-8L);
    char *l_859[4][3][7] = {{{&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}}, {{&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}}, {{&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}}, {{&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}, {&g_448, &g_448, &g_448, &g_448, &g_448, (void*)0, &g_448}}};
    int l_860[6] = {0x96CE7120L, 0x96CE7120L, 0x633D48B8L, 0x96CE7120L, 0x96CE7120L, 0x633D48B8L};
    int *l_863 = &g_275;
    int *l_922 = (void*)0;
    int *l_923[8] = {(void*)0, (void*)0, &g_924[5][3][1], (void*)0, (void*)0, &g_924[5][3][1], (void*)0, (void*)0};
    int i, j, k;
    g_924[5][3][1] |= func_2(g_6[2], l_7, ((*l_863) = ((l_860[3] = (safe_mod_func_uint8_t_u_u(func_10((g_6[0] ^ 2L), l_7), g_6[2]))) ^ (!(((safe_mod_func_int8_t_s_s(l_7, ((g_6[2] > 0xBBD799A4L) && g_6[0]))) > l_7) == 0x04L)))));
    for (g_97 = 0; (g_97 <= 1); g_97 += 1)
    {
        int l_925 = 1L;
        unsigned l_926 = 0x1F4497B2L;
        int i;
        l_925 = l_925;
        if (l_926)
            break;
        return g_301;
    }
    l_922 = &l_860[3];
    return g_448;
}







static int func_2(int p_3, unsigned p_4, int p_5)
{
    int **l_864[8] = {&g_234[0], &g_234[1], &g_234[0], &g_234[1], &g_234[0], &g_234[1], &g_234[0], &g_234[1]};
    int *l_865 = &g_858;
    unsigned short ***l_903 = (void*)0;
    short **l_913 = &g_437;
    int i;
    l_865 = &g_858;
    (*l_865) = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((*l_865), 6)), (0x7AL | p_3)));
    for (p_5 = 0; (p_5 == (-2)); --p_5)
    {
        int l_874 = 0xD75325AEL;
        if (((*l_865) &= (safe_rshift_func_uint16_t_u_u(p_4, l_874))))
        {
            char l_885 = 7L;
            unsigned l_895 = 0xD826CEC5L;
            int l_896 = 0L;
            (*l_865) = 0L;
            for (l_874 = 16; (l_874 == (-2)); l_874 = safe_sub_func_uint32_t_u_u(l_874, 4))
            {
                g_234[0] = &l_874;
            }
            for (g_154 = 0; (g_154 == 42); ++g_154)
            {
                unsigned short ***l_892[1][7][3] = {{{&g_890, &g_890, &g_890}, {&g_890, &g_890, &g_890}, {&g_890, &g_890, &g_890}, {&g_890, &g_890, &g_890}, {&g_890, &g_890, &g_890}, {&g_890, &g_890, &g_890}, {&g_890, &g_890, &g_890}}};
                unsigned short **l_893 = &g_891;
                int l_894 = 6L;
                int i, j, k;
                l_896 = (1L == (safe_add_func_uint16_t_u_u(((l_894 = (g_448 < (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(2UL, (l_885 ^ (safe_add_func_int16_t_s_s((((*l_865) &= (safe_div_func_uint16_t_u_u((~(func_51((*g_153), p_4, (p_5 < ((g_278 != (l_893 = g_890)) < p_3))) == l_894)), (**g_890)))) && l_885), l_895))))), 0xFF73L)))) >= p_4), l_885)));
            }
            if (l_874)
                break;
        }
        else
        {
            char **l_897 = &g_516[0][1][2];
            int **l_910 = &l_865;
            int l_914 = 2L;
            if (((void*)0 != l_897))
            {
                char l_915 = 0x79L;
                for (g_60 = 0; (g_60 <= 2); g_60 += 1)
                {
                    unsigned short l_898 = 65526UL;
                    short *l_902 = &g_38;
                    int i;
                    (*l_865) = (func_51((l_898 | (((func_13(func_17((*g_202)), (((*l_902) ^= (safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u(p_4, (*g_153)))))) | ((0x4BL && (g_6[g_60] = func_51(l_874, ((void*)0 != l_903), l_898))) != p_5)), p_4) < (*g_437)) < (-3L)) ^ 248UL)), l_898, p_5) && 0x15L);
                }
                l_915 |= ((safe_lshift_func_int8_t_s_s((((&g_536 != &g_536) == (((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((((&g_234[1] == (l_910 = &g_234[0])) < ((*l_865) = (p_3 <= func_17(l_874)))) < (safe_sub_func_uint8_t_u_u(((*g_153) &= (l_913 != (void*)0)), 0xCBL))), 5)) == 0x24L) == (*g_891)), (-1L))) | 1UL) || (-1L))) < 253UL), l_874)) ^ l_914);
                if (l_915)
                    continue;
            }
            else
            {
                unsigned *****l_918[4][5] = {{(void*)0, (void*)0, &g_618[1][1], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_618[1][1], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_618[1][1], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_618[1][1], (void*)0, (void*)0}};
                int l_921 = 2L;
                int i, j;
                l_921 = (((safe_add_func_int8_t_s_s((&g_62 == ((*l_910) = &g_834)), (-3L))) >= p_5) != (safe_sub_func_uint8_t_u_u((**g_536), func_13(p_4, p_5, p_3))));
                for (p_3 = 0; p_3 < 4; p_3 += 1)
                {
                    for (g_84 = 0; g_84 < 2; g_84 += 1)
                    {
                        g_618[p_3][g_84] = (void*)0;
                    }
                }
                (*l_910) = &g_62;
                if (p_4)
                    break;
            }
            if (l_874)
                continue;
        }
    }
    return (*l_865);
}







static unsigned char func_10(short p_11, int p_12)
{
    unsigned char l_443 = 2UL;
    int l_444 = 0xF756F641L;
    char *l_445 = (void*)0;
    char *l_446 = (void*)0;
    char *l_447 = &g_448;
    unsigned l_449 = 4294967295UL;
    int *l_856 = (void*)0;
    int *l_857 = &g_858;
    (*l_857) |= ((-8L) == func_13((0L && p_11), ((((g_6[1] < (g_6[1] >= 0xBEL)) <= func_17((((0x86L < (safe_add_func_int8_t_s_s(func_21((safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((*g_153) = (((*l_447) |= (safe_mod_func_int16_t_s_s((l_443 &= (safe_add_func_int16_t_s_s(func_33(p_12, p_12), p_12))), l_444))) != l_449)), l_449)), g_275)), p_11, p_12), p_11))) && l_444) & l_444))) <= g_6[1]) ^ g_6[2]), l_449));
    return p_11;
}







static unsigned char func_13(int p_14, unsigned p_15, int p_16)
{
    int *l_855[7][3] = {{&g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62}};
    int i, j;
    p_14 = 6L;
    return p_16;
}







static char func_17(unsigned p_18)
{
    int **l_841 = (void*)0;
    int **l_842 = &g_234[1];
    unsigned **l_843 = &g_202;
    unsigned **l_846 = &g_202;
    int *l_852[7][8] = {{&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}, {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62}};
    unsigned short l_853 = 65528UL;
    char l_854 = 0x5BL;
    int i, j;
    (*l_842) = &g_834;
    for (g_154 = 0; (g_154 <= 1); g_154 += 1)
    {
        unsigned short l_850 = 0x2550L;
        int l_851 = 0L;
        for (g_204 = 0; g_204 < 2; g_204 += 1)
        {
            for (g_106 = 0; g_106 < 9; g_106 += 1)
            {
                g_297[g_204][g_106] = &g_202;
            }
        }
        for (g_204 = 1; (g_204 >= 0); g_204 -= 1)
        {
            char l_847 = (-1L);
            for (g_301 = 0; (g_301 <= 1); g_301 += 1)
            {
                unsigned ***l_844 = &g_297[0][2];
                unsigned ***l_845[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_845[i][j] = (void*)0;
                }
                l_851 = ((func_51(((*g_478) = ((l_843 != (l_846 = l_843)) | l_847)), (safe_sub_func_int16_t_s_s((*g_437), func_51(p_18, func_51(l_850, (l_850 == (((*g_622) = (*g_622)) == (void*)0)), l_850), (*g_274)))), (*g_274)) >= p_18) < p_18);
                for (g_62 = 1; (g_62 >= 0); g_62 -= 1)
                {
                    int i;
                    g_234[g_301] = &g_834;
                }
            }
            return p_18;
        }
    }
    l_853 &= p_18;
    l_854 |= (-1L);
    return p_18;
}







static char func_21(unsigned short p_22, char p_23, int p_24)
{
    int l_450 = (-2L);
    short *l_453 = &g_38;
    unsigned short l_461 = 0x6BABL;
    char l_462[8] = {0x16L, 0x16L, 0L, 0x16L, 0x16L, 0L, 0x16L, 0x16L};
    unsigned *l_472 = (void*)0;
    int l_531 = (-3L);
    int **l_565 = &g_274;
    short l_588 = (-7L);
    unsigned ****l_621 = &g_619;
    unsigned l_645[10][4][6] = {{{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}, {{4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}, {4294967290UL, 1UL, 0xDF2252E6L, 4294967295UL, 1UL, 6UL}}};
    short ***l_658[5][10] = {{(void*)0, (void*)0, &g_436[1][6], &g_436[1][4], &g_436[1][5], &g_436[1][4], &g_436[1][6], (void*)0, (void*)0, &g_436[1][6]}, {(void*)0, (void*)0, &g_436[1][6], &g_436[1][4], &g_436[1][5], &g_436[1][4], &g_436[1][6], (void*)0, (void*)0, &g_436[1][6]}, {(void*)0, (void*)0, &g_436[1][6], &g_436[1][4], &g_436[1][5], &g_436[1][4], &g_436[1][6], (void*)0, (void*)0, &g_436[1][6]}, {(void*)0, (void*)0, &g_436[1][6], &g_436[1][4], &g_436[1][5], &g_436[1][4], &g_436[1][6], (void*)0, (void*)0, &g_436[1][6]}, {(void*)0, (void*)0, &g_436[1][6], &g_436[1][4], &g_436[1][5], &g_436[1][4], &g_436[1][6], (void*)0, (void*)0, &g_436[1][6]}};
    unsigned short *l_728 = &g_150;
    unsigned short **l_727 = &l_728;
    int *l_767 = &g_62;
    unsigned l_795 = 0xC8C3A15DL;
    unsigned l_807 = 0UL;
    unsigned l_815 = 0UL;
    unsigned char l_833[4][4][3] = {{{0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}}, {{0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}}, {{0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}}, {{0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}, {0UL, 247UL, 0x4FL}}};
    int i, j, k;
    if ((l_450 <= (safe_mod_func_uint16_t_u_u(((void*)0 != l_453), ((-1L) | (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((p_24 | (((*g_383) = 0x189BFEB2L) > func_51(func_51(((*g_153) = (p_23 ^ (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((l_461 == ((l_461 == 0x06L) && p_23)) || g_133))), l_450)))), l_462[4], (*g_274)), p_24, (*g_274)))) != l_462[4]), (*g_202))), 1)))))))
    {
        unsigned *l_471 = &g_301;
        int l_477[4] = {0x7FB96776L, 0x5B90D3B0L, 0x7FB96776L, 0x5B90D3B0L};
        unsigned short *l_479 = &g_150;
        int l_553 = 0L;
        unsigned l_564 = 0x8E4DBC96L;
        int l_577[6][7] = {{2L, 0x1CE40BFDL, 0xE60FEAD7L, 0x1CE40BFDL, 2L, (-1L), 2L}, {2L, 0x1CE40BFDL, 0xE60FEAD7L, 0x1CE40BFDL, 2L, (-1L), 2L}, {2L, 0x1CE40BFDL, 0xE60FEAD7L, 0x1CE40BFDL, 2L, (-1L), 2L}, {2L, 0x1CE40BFDL, 0xE60FEAD7L, 0x1CE40BFDL, 2L, (-1L), 2L}, {2L, 0x1CE40BFDL, 0xE60FEAD7L, 0x1CE40BFDL, 2L, (-1L), 2L}, {2L, 0x1CE40BFDL, 0xE60FEAD7L, 0x1CE40BFDL, 2L, (-1L), 2L}};
        int *l_584 = &l_577[0][1];
        int l_672 = 0x7116BC9AL;
        int l_692 = 1L;
        unsigned *****l_699[7] = {&l_621, &l_621, &l_621, &l_621, &l_621, &l_621, &l_621};
        unsigned ******l_698[10] = {&l_699[2], (void*)0, &l_699[2], (void*)0, &l_699[2], (void*)0, &l_699[2], (void*)0, &l_699[2], (void*)0};
        int i, j;
        if ((65535UL | (l_461 != (safe_rshift_func_uint16_t_u_u((l_450 == (safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((l_461 || (~0UL)) <= ((l_471 != l_472) < g_38)), p_23)) > g_275), g_38)), 0))), 14)))))
        {
            int **l_480 = &g_234[1];
            char *l_487 = &l_462[4];
            unsigned *l_561 = (void*)0;
            (*g_383) = l_477[2];
            (*l_480) = &p_24;
            for (l_450 = (-29); (l_450 < 10); ++l_450)
            {
                unsigned l_502[4] = {4294967291UL, 0xD63BAE20L, 4294967291UL, 0xD63BAE20L};
                int l_504 = 0xA9329A6EL;
                unsigned char l_530 = 246UL;
                int i;
                if ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_6[2], (l_462[4] == ((void*)0 == l_487)))), p_22)))
                {
                    return g_84;
                }
                else
                {
                    unsigned char **l_517[3][6] = {{&g_153, &g_478, &g_153, &g_478, &g_153, &g_478}, {&g_153, &g_478, &g_153, &g_478, &g_153, &g_478}, {&g_153, &g_478, &g_153, &g_478, &g_153, &g_478}};
                    int l_543 = 0xCA54A0DFL;
                    int i, j;
                    (*l_480) = &p_24;
                    for (g_97 = 0; (g_97 < 49); g_97++)
                    {
                        short l_503 = 0x9611L;
                        int *l_509 = (void*)0;
                        char *l_515 = &g_204;
                        char **l_514[9][9][3] = {{{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}, {{&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}, {&l_487, &l_487, &l_487}}};
                        unsigned char ***l_518 = &l_517[2][5];
                        int i, j, k;
                        (*g_383) = ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_24, 12)) | (+247UL)), 6)) >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(g_97, 0)), func_51((*g_478), func_51(p_24, p_23, func_51((*g_478), (8UL >= func_51(p_22, l_502[3], l_503)), (*g_274))), l_504))) > l_462[6]), 2)), l_477[1])));
                        (*g_383) ^= ((safe_lshift_func_int16_t_s_u((func_51((((*l_487) = (+g_106)) & (!(safe_lshift_func_int8_t_s_u(func_51(p_22, ((void*)0 != l_509), (*g_274)), 6)))), (safe_div_func_uint32_t_u_u(0UL, (safe_lshift_func_uint16_t_u_s((&g_448 != (g_516[0][1][2] = (void*)0)), 8)))), p_24) == 65533UL), p_22)) != 0x35F56BD3L);
                        (*l_518) = l_517[2][5];
                        (*g_383) ^= ((-10L) <= (p_24 & (l_531 |= (safe_mod_func_uint8_t_u_u(func_51((*g_153), l_477[1], p_23), (safe_div_func_uint32_t_u_u(((func_51(((safe_rshift_func_int8_t_s_s(p_24, 1)) <= ((*l_515) = (!(safe_lshift_func_int8_t_s_u(0x0FL, (((safe_unary_minus_func_uint8_t_u(func_51((safe_sub_func_uint32_t_u_u((*g_202), p_24)), l_502[3], (*g_274)))) >= l_502[3]) <= l_530)))))), p_24, p_22) || 0x97BBA10BL) >= 0xF913L), p_22)))))));
                    }
                    for (g_448 = 0; (g_448 < (-16)); g_448 = safe_sub_func_int32_t_s_s(g_448, 6))
                    {
                        (*l_480) = &g_62;
                    }
                    for (p_22 = (-27); (p_22 >= 32); p_22 = safe_add_func_uint32_t_u_u(p_22, 3))
                    {
                        unsigned char ***l_537 = (void*)0;
                        unsigned char ***l_538 = &g_536;
                        int l_552 = 0L;
                        unsigned l_554 = 0x91262365L;
                        (*g_383) = (l_517[2][5] != ((*l_538) = g_536));
                        (*g_383) ^= p_22;
                        (*l_480) = &l_477[2];
                        l_543 = ((safe_add_func_uint32_t_u_u((*g_202), l_554)) | p_24);
                    }
                }
                (*l_480) = (void*)0;
                (*l_480) = &p_24;
            }
            for (g_204 = 0; (g_204 == 11); g_204 = safe_add_func_uint8_t_u_u(g_204, 1))
            {
                (*g_383) = (((((*g_202) || ((safe_lshift_func_int8_t_s_u(((((void*)0 == &g_516[0][1][2]) && (l_561 != l_471)) != ((**g_536) != ((!(safe_rshift_func_uint8_t_u_s((l_564 != ((*l_479) = p_23)), 1))) == (0x7AF1566BL & l_553)))), 4)) != p_22)) && l_477[3]) ^ 0x29L) >= p_22);
                (*l_480) = &g_62;
            }
        }
        else
        {
            int l_567 = 0x6694C583L;
            int *l_569 = &l_477[2];
            unsigned char *l_604 = &g_97;
            unsigned ***l_605 = &g_297[1][8];
            short l_662[6] = {0x76CFL, 0L, 0x76CFL, 0L, 0x76CFL, 0L};
            unsigned l_666 = 0UL;
            int l_673 = 1L;
            unsigned *****l_683 = &g_622;
            short ****l_744 = &l_658[3][5];
            int i;
            if (((void*)0 != l_565))
            {
                for (l_450 = 1; (l_450 >= 0); l_450 -= 1)
                {
                    int l_566 = 0xC6BA9A2DL;
                    unsigned **l_576 = &l_471;
                    int *l_578 = (void*)0;
                    int *l_579 = &l_531;
                    int i;
                    for (g_301 = 0; (g_301 <= 1); g_301 += 1)
                    {
                        int l_568 = 2L;
                        int i, j;
                        (*g_383) |= (l_566 >= (p_23 & p_24));
                        if (l_567)
                            break;
                        if (l_568)
                            break;
                    }
                    g_234[l_450] = l_569;
                    g_234[l_450] = &p_24;
                    (*l_579) ^= ((*g_383) = (p_24 ^ (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((+(*l_569)), (((safe_add_func_uint8_t_u_u((((*l_576) = l_472) == (void*)0), p_23)) < 1UL) == l_577[0][0]))), l_577[1][2]))));
                    for (p_22 = 0; (p_22 <= 1); p_22 += 1)
                    {
                        int **l_580 = &g_234[0];
                        l_531 |= ((*g_383) = l_477[2]);
                        (*l_580) = &g_62;
                    }
                }
            }
            else
            {
                int **l_581 = &g_234[1];
                unsigned ***l_606 = &g_297[1][4];
                unsigned l_617 = 4294967294UL;
                short *l_648 = &g_38;
                (*l_581) = l_569;
                p_24 = p_23;
                for (p_23 = 8; (p_23 > 1); p_23--)
                {
                    (*l_581) = l_569;
                    for (l_450 = 1; (l_450 >= 0); l_450 -= 1)
                    {
                        int **l_585[9] = {&l_569, &l_569, &l_584, &l_569, &l_569, &l_584, &l_569, &l_569, &l_584};
                        int i;
                        l_584 = ((*l_581) = l_584);
                        (*l_581) = &l_531;
                    }
                    (*l_581) = &l_531;
                    (*l_581) = (void*)0;
                }
                if (((*l_584) |= (((0xD1DAL <= ((*g_437) ^= p_23)) ^ p_24) != ((-3L) > (&l_461 != (void*)0)))))
                {
                    short *l_613 = &l_588;
                    int l_614[6][7] = {{(-5L), 0xB19BAE85L, 2L, 0xB19BAE85L, (-5L), 0xB19BAE85L, 2L}, {(-5L), 0xB19BAE85L, 2L, 0xB19BAE85L, (-5L), 0xB19BAE85L, 2L}, {(-5L), 0xB19BAE85L, 2L, 0xB19BAE85L, (-5L), 0xB19BAE85L, 2L}, {(-5L), 0xB19BAE85L, 2L, 0xB19BAE85L, (-5L), 0xB19BAE85L, 2L}, {(-5L), 0xB19BAE85L, 2L, 0xB19BAE85L, (-5L), 0xB19BAE85L, 2L}, {(-5L), 0xB19BAE85L, 2L, 0xB19BAE85L, (-5L), 0xB19BAE85L, 2L}};
                    int i, j;
                    for (g_84 = 0; (g_84 == 45); g_84 = safe_add_func_int32_t_s_s(g_84, 6))
                    {
                        unsigned l_589[3];
                        unsigned ****l_607 = (void*)0;
                        unsigned ****l_608 = (void*)0;
                        unsigned ****l_609 = &l_606;
                        unsigned ****l_610 = (void*)0;
                        unsigned ***l_612 = &g_297[1][8];
                        unsigned ****l_611 = &l_612;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_589[i] = 1UL;
                        (*l_569) = ((l_588 == (l_589[1] >= (*g_202))) || (((*g_202) || p_22) ^ (!(safe_div_func_int16_t_s_s(p_22, p_24)))));
                        (*l_569) |= (safe_lshift_func_uint8_t_u_s(func_40((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((*g_437), ((-1L) && ((void*)0 == l_604)))), 9)), ((((*g_383) > p_24) | p_23) == (((*l_453) = (l_605 == ((*l_611) = ((*l_609) = l_606)))) > g_97)))), &l_531, p_22, l_613, l_614[2][6]), p_23));
                    }
                    if (l_614[3][1])
                    {
                        return p_23;
                    }
                    else
                    {
                        (*l_584) ^= l_617;
                        return p_22;
                    }
                }
                else
                {
                    int l_623 = 9L;
                    unsigned char l_637 = 0x25L;
                    (*l_584) = (p_23 <= l_450);
                    for (g_97 = 0; (g_97 <= 1); g_97 += 1)
                    {
                        unsigned *****l_620 = &g_618[2][0];
                        int l_636 = 4L;
                        unsigned char *l_638 = (void*)0;
                        unsigned char *l_639 = &g_640;
                        int i;
                        l_623 = ((((*l_620) = g_618[2][0]) != (g_622 = l_621)) | 0xC2L);
                        (*g_383) = (safe_add_func_uint8_t_u_u((0x2FL & ((**g_536) = ((*l_639) ^= (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(p_23, (safe_rshift_func_int16_t_s_s((*l_584), 7)))) & (p_22 | func_51((*l_569), func_51((safe_mod_func_int8_t_s_s(p_22, (((*l_471) |= ((((((*g_153) > 1L) ^ func_51((~((**g_536) = (*g_478))), l_636, (*g_274))) > 0x25309283L) & l_637) | p_22)) | p_23))), (*l_584), (*l_584)), (*g_274)))), (*l_569))), l_588))))), 0xB1L));
                        p_24 = (0L && (safe_mod_func_int16_t_s_s((*g_437), (*l_569))));
                    }
                    (*g_383) = (safe_mod_func_uint16_t_u_u((l_645[5][0][2] < p_22), func_40(((&l_479 == &l_479) == func_51((*g_153), p_24, ((safe_add_func_int32_t_s_s(p_24, ((*l_569) < p_24))) >= p_22))), &g_62, p_24, l_648, g_448)));
                }
            }
            for (p_22 = 0; (p_22 != 30); p_22 = safe_add_func_int32_t_s_s(p_22, 4))
            {
                short *l_655[1];
                int l_663[2];
                int *l_678 = &l_663[1];
                unsigned l_718 = 4294967291UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_655[i] = &l_588;
                for (i = 0; i < 2; i++)
                    l_663[i] = (-9L);
                for (g_106 = 0; (g_106 <= 1); g_106 += 1)
                {
                    short ***l_660 = (void*)0;
                    short ****l_659 = &l_660;
                    int l_665 = 0xD840AE68L;
                    int l_693 = 0L;
                    int **l_695 = &g_383;
                    int i, j;
                    if (func_51((safe_lshift_func_int16_t_s_u(p_23, (safe_add_func_uint8_t_u_u((*g_478), func_51((func_40((g_664 = (p_22 <= (+((*l_453) &= ((((safe_rshift_func_uint8_t_u_s((l_658[3][5] == ((*l_659) = (void*)0)), g_661)) || (*g_383)) < l_662[4]) >= l_663[1]))))), &g_62, (*l_569), l_655[0], g_204) != l_665), p_24, p_24))))), p_23, p_24))
                    {
                        int **l_667[8] = {&g_383, &g_383, &g_234[1], &g_383, &g_383, &g_234[1], &g_383, &g_383};
                        short *l_674 = &l_662[4];
                        int i;
                        (*g_383) &= ((p_24 >= l_666) > p_22);
                        l_553 |= (0xADL | func_40(p_23, (g_234[1] = &p_24), func_51(func_51(p_22, (func_51((*g_153), (safe_add_func_int8_t_s_s(((*l_569) ^ func_51((safe_lshift_func_int8_t_s_s(((*g_383) != (*l_584)), 0)), (l_672 = 0xDA11F161L), (*g_274))), p_22)), l_673) != 1UL), p_24), (*g_383), l_663[1]), l_674, p_23));
                        (*l_584) = ((*g_383) >= (*g_383));
                        return p_22;
                    }
                    else
                    {
                        int **l_675 = (void*)0;
                        int **l_676 = (void*)0;
                        int **l_677[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_677[i] = (void*)0;
                        g_234[1] = &g_62;
                    }
                    for (g_60 = 0; (g_60 <= 1); g_60 += 1)
                    {
                        unsigned *****l_681 = &l_621;
                        unsigned ******l_682[3];
                        int **l_694 = &l_569;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_682[i] = &l_681;
                        l_678 = &p_24;
                    }
                    (*l_695) = &g_62;
                }
                for (g_97 = 16; (g_97 <= 21); g_97 = safe_add_func_int8_t_s_s(g_97, 3))
                {
                    short **l_703 = &l_453;
                    short **l_705 = &l_655[0];
                    int *l_708 = &l_477[2];
                    if ((*g_383))
                    {
                        (*g_383) &= ((l_698[1] != g_700) != l_462[2]);
                        (*l_569) |= (safe_sub_func_uint32_t_u_u(0UL, p_23));
                        if ((*g_383))
                            continue;
                    }
                    else
                    {
                        short **l_704 = (void*)0;
                        int *l_706 = &l_663[0];
                        int **l_707 = &l_678;
                        (*g_383) |= (l_703 == (l_705 = (g_436[1][6] = l_704)));
                        (*l_707) = l_706;
                    }
                }
                if ((*l_569))
                    continue;
            }
            for (g_448 = 0; (g_448 != 5); g_448++)
            {
                unsigned short l_734 = 6UL;
                int l_745 = 0x1E5AE63EL;
                for (g_154 = 0; (g_154 >= 22); ++g_154)
                {
                    if (l_734)
                    {
                        int **l_735 = (void*)0;
                        int **l_736 = &l_584;
                        (*l_736) = &p_24;
                        (*l_736) = &g_62;
                        return p_22;
                    }
                    else
                    {
                        int **l_737 = &g_383;
                        (*l_737) = (void*)0;
                        (*l_737) = l_569;
                        if ((*l_584))
                            break;
                    }
                    for (p_22 = (-6); (p_22 > 32); p_22 = safe_add_func_uint8_t_u_u(p_22, 6))
                    {
                        int **l_740 = (void*)0;
                        int **l_741 = &g_234[1];
                        short ****l_742 = &l_658[0][5];
                        short *****l_743[6] = {&l_742, &l_742, &l_742, &l_742, &l_742, &l_742};
                        int i;
                        (*l_741) = &p_24;
                        l_745 &= (((l_744 = l_742) != (void*)0) != p_24);
                    }
                    if (p_23)
                        break;
                    if (p_22)
                        continue;
                }
            }
            l_569 = &g_62;
        }
    }
    else
    {
        int *l_752 = &g_62;
        for (p_22 = 0; (p_22 != 36); p_22 = safe_add_func_int32_t_s_s(p_22, 1))
        {
            int **l_766 = &l_752;
            for (g_106 = (-2); (g_106 != 21); g_106 = safe_add_func_int32_t_s_s(g_106, 9))
            {
                int **l_750 = (void*)0;
                int **l_751[9][2] = {{&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}, {&g_234[0], &g_234[1]}};
                unsigned char *l_763 = &g_640;
                int i, j;
                (*g_383) &= (+0x1EF594F8L);
                g_234[1] = (l_752 = (void*)0);
                (*g_383) = func_51((l_531 ^= (safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((**g_536), func_51(((*l_763) ^= ((*g_437) > (safe_sub_func_uint8_t_u_u((**g_536), (*g_153))))), (((*g_202) = func_51((**g_536), ((safe_add_func_uint8_t_u_u(p_23, l_450)) == 0x6BL), (*g_274))) & p_23), g_712))), p_22)), l_645[8][3][0])) & p_23), (-1L)))), p_23, g_664);
            }
            (*l_766) = &l_531;
            l_767 = &g_62;
        }
    }
    (*l_767) ^= p_23;
    g_383 = &p_24;
    for (p_24 = 0; (p_24 > (-24)); p_24 = safe_sub_func_int8_t_s_s(p_24, 1))
    {
        unsigned char l_770 = 254UL;
        short *l_773 = &g_38;
        unsigned l_779 = 4294967295UL;
        int *l_786 = (void*)0;
        unsigned char ***l_835 = &g_536;
        unsigned l_837 = 0xDE954978L;
        (*l_767) = 0x3B369409L;
        for (p_23 = 1; (p_23 >= 0); p_23 -= 1)
        {
            unsigned short l_771 = 65526UL;
            int l_787[2][2][5];
            int l_794 = 1L;
            short *l_814 = &g_133;
            unsigned short l_826 = 1UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_787[i][j][k] = 0x9FEEB200L;
                }
            }
            for (l_461 = 0; (l_461 <= 1); l_461 += 1)
            {
                for (g_84 = 0; (g_84 <= 1); g_84 += 1)
                {
                    int i, j, k;
                    (*l_767) = (((l_645[g_84][(g_84 + 2)][(l_461 + 4)] || p_23) > 4294967295UL) & 0xB5L);
                }
            }
            for (g_712 = 3; (g_712 >= 0); g_712 -= 1)
            {
                int l_780 = 1L;
                short *l_781 = (void*)0;
                int i, j, k;
                for (l_450 = 0; (l_450 <= 1); l_450 += 1)
                {
                    int *l_772 = &g_62;
                    int *l_776 = &l_531;
                    for (g_204 = 1; (g_204 >= 0); g_204 -= 1)
                    {
                        int *l_774 = &l_531;
                        int i, j;
                        l_770 = p_23;
                        if (l_771)
                            continue;
                        (*l_774) &= func_40((~p_23), l_772, (((void*)0 != l_772) < p_22), l_773, (*l_772));
                    }
                    (*l_767) = (p_23 && (p_22 | 65535UL));
                    if (p_24)
                    {
                        (*l_772) = (-3L);
                        return p_22;
                    }
                    else
                    {
                        int l_775 = 0x7C6781F1L;
                        (*l_772) = l_775;
                    }
                    (*l_776) &= (*l_772);
                }
                (*l_767) = (l_787[0][1][0] = ((safe_add_func_uint8_t_u_u(l_779, (*l_767))) || p_22));
                (*l_767) |= ((void*)0 != l_781);
            }
            for (g_712 = 0; (g_712 <= 3); g_712 += 1)
            {
                char l_800 = 0xFAL;
                int i, j, k;
                for (g_275 = 0; (g_275 <= 7); g_275 += 1)
                {
                    int **l_810 = &l_767;
                    int i, j, k;
                    if (((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(l_787[0][0][2], ((safe_rshift_func_int16_t_s_s(0x1E46L, 5)) <= ((*g_202) = l_794)))) || (l_795 <= (safe_rshift_func_uint8_t_u_s(p_24, p_23)))), 6)) | (safe_mod_func_int32_t_s_s(l_800, ((l_462[(g_712 + 2)] &= p_24) | ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(p_24, l_807)), 0x4B4CF3FDL)), p_24)) ^ (*l_767)))))))
                    {
                        unsigned short l_808 = 0x3114L;
                        return l_808;
                    }
                    else
                    {
                        int **l_809 = &l_786;
                        (*l_767) = p_22;
                        (*l_809) = &p_24;
                        (*l_809) = &g_62;
                    }
                    if ((*g_383))
                        break;
                    (*l_786) = func_40((*l_786), ((*l_810) = &g_62), (safe_rshift_func_uint8_t_u_u((*g_478), 1)), l_773, (*l_786));
                }
                (*l_767) &= (*g_383);
                if ((l_787[0][1][0] || 0x5CL))
                {
                    unsigned l_813 = 0UL;
                    g_234[1] = &l_531;
                    (*l_767) = l_800;
                }
                else
                {
                    unsigned char l_816 = 255UL;
                    if (l_816)
                        break;
                }
            }
            for (g_62 = 3; (g_62 >= 0); g_62 -= 1)
            {
                int **l_817 = &g_234[1];
                int *l_827 = &l_531;
                int *l_828 = &l_794;
                (*l_817) = &p_24;
                (*l_828) = ((safe_lshift_func_int8_t_s_s((((*l_827) = (l_787[0][0][3] |= func_51(((6UL >= (((*g_153) ^= ((!p_23) && (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(p_24, p_22)), ((*g_478) &= p_23))))) != func_51(p_23, l_826, p_23))) & (*l_767)), l_826, (*g_274)))) != p_23), 4)) <= g_640);
            }
            for (l_531 = 5; (l_531 >= 0); l_531 -= 1)
            {
                char l_840 = (-1L);
                for (g_712 = 0; (g_712 <= 3); g_712 += 1)
                {
                    unsigned char ****l_836 = &l_835;
                    int l_838 = 0xE1B9C0F5L;
                    if ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(func_51((*g_478), l_833[2][1][2], (g_834 = ((**l_565) = (&g_516[0][1][2] == (void*)0)))), func_51((**g_536), (((*l_836) = l_835) != (void*)0), (g_839 = ((l_837 || l_838) <= 1UL))))), g_60)))
                    {
                        return p_24;
                    }
                    else
                    {
                        l_840 = p_22;
                    }
                }
            }
        }
    }
    return (*l_767);
}







static short func_33(unsigned short p_34, unsigned p_35)
{
    int *l_36 = (void*)0;
    short *l_37 = &g_38;
    int l_57[2][10][3] = {{{0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}}, {{0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}, {0L, 0L, (-5L)}}};
    unsigned *l_59[2][6][2] = {{{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}, {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}}};
    unsigned l_441[5][5] = {{0UL, 0x2E69865AL, 8UL, 0x2E69865AL, 0UL}, {0UL, 0x2E69865AL, 8UL, 0x2E69865AL, 0UL}, {0UL, 0x2E69865AL, 8UL, 0x2E69865AL, 0UL}, {0UL, 0x2E69865AL, 8UL, 0x2E69865AL, 0UL}, {0UL, 0x2E69865AL, 8UL, 0x2E69865AL, 0UL}};
    int **l_442 = (void*)0;
    int i, j, k;
    l_36 = l_36;
    l_57[0][6][0] = (((p_34 < ((((*l_37) ^= 1L) & (safe_unary_minus_func_uint16_t_u((func_40(func_46(g_6[0], l_36, l_37, (g_60 = (func_51(((g_55 != &g_56) < ((0xCDFF9052L == g_6[2]) || l_57[0][1][2])), g_6[2], p_35) < (*g_55)))), g_383, g_106, l_37, g_6[2]) && (*g_55))))) != g_301)) | 0xACAFL) > l_441[4][3]);
    g_383 = &g_62;
    return p_34;
}







static short func_40(int p_41, int * p_42, char p_43, short * p_44, unsigned short p_45)
{
    int **l_384 = &g_234[1];
    int l_389 = 0xA0AB2461L;
    short *l_392 = &g_133;
    unsigned short l_410 = 1UL;
    int l_431 = 0xC4867547L;
    (*l_384) = (void*)0;
    if ((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((0L | (7L && func_51(l_389, l_389, (p_43 & ((1UL == (((safe_rshift_func_int16_t_s_s(((*l_392) = 0x680CL), (safe_lshift_func_int16_t_s_u(8L, 0)))) || p_43) | p_41)) | (*g_153)))))), 2)) < l_389) ^ 0x70L), (-2L))))
    {
        char l_395[4] = {0x09L, 0xB4L, 0x09L, 0xB4L};
        int *l_398[5][7][7] = {{{&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}}, {{&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}}, {{&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}}, {{&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}}, {{&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}, {&g_62, &l_389, &l_389, &g_62, &g_62, &l_389, &l_389}}};
        int l_409 = 0L;
        int i, j, k;
        p_41 = (l_395[1] | (safe_div_func_uint8_t_u_u(((*g_153) = p_43), func_51(p_43, l_395[2], p_45))));
        p_41 = (p_43 <= ((safe_add_func_int16_t_s_s(p_41, (safe_sub_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(g_150, ((p_45 ^ l_409) <= p_45))), p_41)), l_389)) > 4294967290UL), (*g_55))))) < l_410));
    }
    else
    {
        char l_411 = 0x70L;
        int *l_412 = (void*)0;
        int *l_413 = &g_62;
        unsigned char l_416 = 0xE1L;
        int l_422[9] = {0x1B677FF2L, 0x5BA079E2L, 0x1B677FF2L, 0x5BA079E2L, 0x1B677FF2L, 0x5BA079E2L, 0x1B677FF2L, 0x5BA079E2L, 0x1B677FF2L};
        int i;
        (*l_413) |= l_411;
        for (l_411 = 20; (l_411 != (-19)); --l_411)
        {
            unsigned short *l_417 = &g_150;
            unsigned short *l_418 = &l_410;
            unsigned char *l_421 = &l_416;
            int l_423 = 1L;
            int l_430 = 0x6CB05A65L;
            l_416 = p_41;
            (*l_413) = (((!((*l_418) = (((*l_417) ^= 0xB20CL) && g_56))) != (((safe_lshift_func_uint8_t_u_u((*g_153), 7)) >= ((*l_421) = p_45)) == func_51(p_43, (l_430 &= ((l_422[6] & l_423) || ((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_41, p_41)), (*l_413))), p_45)) <= (-1L)) | l_423) & p_45))), (*l_413)))) == 0xABL);
        }
    }
    if (l_431)
    {
        int *l_432 = &g_62;
        p_41 = ((*l_432) = 0x3C5D142CL);
    }
    else
    {
        unsigned **l_433 = &g_202;
        unsigned ***l_434 = &g_297[1][8];
        int *l_435[4][2][5] = {{{(void*)0, &g_62, &g_62, &g_62, (void*)0}, {(void*)0, &g_62, &g_62, &g_62, (void*)0}}, {{(void*)0, &g_62, &g_62, &g_62, (void*)0}, {(void*)0, &g_62, &g_62, &g_62, (void*)0}}, {{(void*)0, &g_62, &g_62, &g_62, (void*)0}, {(void*)0, &g_62, &g_62, &g_62, (void*)0}}, {{(void*)0, &g_62, &g_62, &g_62, (void*)0}, {(void*)0, &g_62, &g_62, &g_62, (void*)0}}};
        short ***l_438 = (void*)0;
        short **l_440 = &l_392;
        short ***l_439 = &l_440;
        int i, j, k;
        (*l_434) = l_433;
        l_435[3][1][0] = &p_41;
        (*l_439) = (g_436[1][6] = g_436[1][6]);
    }
    return (*g_437);
}







static int func_46(unsigned short p_47, int * p_48, short * p_49, unsigned p_50)
{
    int *l_61 = &g_62;
    int l_82 = 0x33775BA8L;
    short l_105[5][7];
    int l_108 = 7L;
    unsigned *l_113 = &g_60;
    unsigned **l_112[7] = {&l_113, &l_113, &l_113, &l_113, &l_113, &l_113, &l_113};
    unsigned short l_119 = 0xE4B1L;
    unsigned short *l_149 = &g_150;
    unsigned char l_207[3];
    int l_372 = 0L;
    int l_382 = 0x935085E4L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
            l_105[i][j] = 1L;
    }
    for (i = 0; i < 3; i++)
        l_207[i] = 253UL;
    (*l_61) = g_6[2];
    if (((*l_61) &= (safe_add_func_int8_t_s_s(0L, (&g_60 == (void*)0)))))
    {
        unsigned short l_65 = 1UL;
        if ((l_65 != ((safe_unary_minus_func_uint8_t_u(255UL)) > (safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(p_47, (*l_61))) < (safe_div_func_int16_t_s_s((*l_61), (*l_61)))), (-10L))))))
        {
            unsigned l_81[8][10][1] = {{{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}, {{0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}, {0xDDFA37A4L}}};
            int i, j, k;
            (*l_61) ^= (+l_65);
            if ((l_65 & func_51(g_56, func_51((g_6[2] <= ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(0xB5AAL, (*l_61))), g_6[2])) < (safe_lshift_func_uint8_t_u_u(g_60, (*l_61))))), ((safe_lshift_func_uint8_t_u_u((func_51(p_47, l_65, g_6[1]) != g_60), g_6[2])) >= l_81[3][6][0]), g_6[2]), (*l_61))))
            {
                return l_82;
            }
            else
            {
                unsigned char *l_83 = &g_84;
                int l_87[1][1];
                unsigned *l_93[1];
                unsigned **l_92 = &l_93[0];
                unsigned *l_95 = (void*)0;
                unsigned **l_94 = &l_95;
                unsigned char *l_96 = &g_97;
                int *l_98 = &l_82;
                unsigned short *l_99 = (void*)0;
                unsigned short *l_100[1][6];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_87[i][j] = 4L;
                }
                for (i = 0; i < 1; i++)
                    l_93[i] = (void*)0;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_100[i][j] = &l_65;
                }
                (*l_61) = (p_50 <= func_51(((*l_83) = 0x35L), ((safe_sub_func_uint16_t_u_u((p_47 |= func_51(l_87[0][0], g_62, ((*l_98) &= (safe_div_func_int16_t_s_s((((*l_61) | 0x5DL) || (((*l_96) = (safe_rshift_func_uint8_t_u_u((((*l_92) = (void*)0) != ((*l_94) = &p_50)), 4))) ^ 0x38L)), g_60))))), 0x9BFCL)) | l_81[2][0][0]), (*l_61)));
            }
            (*l_61) &= g_60;
        }
        else
        {
            unsigned *l_107[3][5] = {{&g_60, (void*)0, &g_60, (void*)0, &g_60}, {&g_60, (void*)0, &g_60, (void*)0, &g_60}, {&g_60, (void*)0, &g_60, (void*)0, &g_60}};
            int i, j;
            l_108 &= (((*l_61) = (safe_lshift_func_uint16_t_u_u(((void*)0 == &g_6[2]), 7))) || (safe_mod_func_int16_t_s_s((((l_105[0][4] == (((*l_61) | 246UL) ^ g_6[2])) < (g_60 |= g_106)) > l_65), g_84)));
            for (g_56 = 0; g_56 < 3; g_56 += 1)
            {
                for (g_62 = 0; g_62 < 5; g_62 += 1)
                {
                    l_107[g_56][g_62] = (void*)0;
                }
            }
            (*l_61) = g_60;
            for (l_65 = 0; (l_65 >= 23); l_65 = safe_add_func_int8_t_s_s(l_65, 5))
            {
                unsigned **l_111 = (void*)0;
                unsigned char l_114 = 0xF6L;
                l_114 = ((l_112[1] = l_111) == (void*)0);
                return g_60;
            }
        }
    }
    else
    {
        unsigned char *l_120[8] = {&g_97, &g_97, (void*)0, &g_97, &g_97, (void*)0, &g_97, &g_97};
        int l_121[5] = {(-9L), (-1L), (-9L), (-1L), (-9L)};
        int i;
        for (p_47 = 1; (p_47 <= 6); p_47 += 1)
        {
            if ((*l_61))
                break;
        }
        l_121[0] = (((void*)0 != &l_105[0][4]) & (g_6[2] > (safe_sub_func_uint8_t_u_u(((*l_61) = ((-1L) > ((p_50 > func_51(((*l_61) = ((safe_div_func_uint32_t_u_u((func_51(p_47, g_6[2], (*l_61)) | g_62), (*l_61))) && l_119)), l_121[4], l_121[4])) <= 1L))), p_47))));
    }
    for (l_119 = 0; (l_119 <= 4); l_119 += 1)
    {
        int l_130 = 0x299BB118L;
        unsigned char *l_143 = &g_6[2];
        short l_217[9][6][1] = {{{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}, {{0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}, {0x28B1L}}};
        int i, j, k;
        for (l_108 = 0; (l_108 <= 4); l_108 += 1)
        {
            int i, j;
            return l_105[l_108][(l_108 + 2)];
        }
        p_48 = &g_62;
        for (l_82 = 0; (l_82 <= (-24)); l_82 = safe_sub_func_int16_t_s_s(l_82, 4))
        {
            unsigned char l_128 = 0x47L;
            int l_175 = 0xCF5B4EFAL;
            int l_194 = 0x9E7A3501L;
            char *l_203[8][6] = {{&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}, {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204}};
            unsigned char **l_227[4] = {&l_143, &g_153, &l_143, &g_153};
            int l_232 = 0L;
            unsigned short l_241 = 3UL;
            int i, j;
        }
    }
    for (p_47 = 0; (p_47 <= 1); p_47 += 1)
    {
        int l_263 = 0xB5398DE5L;
        unsigned **l_296 = &l_113;
        unsigned char **l_309 = &g_153;
        int l_353 = 1L;
        int i;
        if ((g_204 == ((safe_add_func_uint16_t_u_u((*l_61), (&g_234[p_47] == &l_61))) > (&g_133 != (void*)0))))
        {
            int l_256[9] = {0x7DCE9F13L, 0x5B948CDDL, 0x7DCE9F13L, 0x5B948CDDL, 0x7DCE9F13L, 0x5B948CDDL, 0x7DCE9F13L, 0x5B948CDDL, 0x7DCE9F13L};
            int l_264 = 0x7AF2A45AL;
            int **l_265 = &g_234[0];
            unsigned l_332[9] = {4294967290UL, 4294967290UL, 8UL, 4294967290UL, 4294967290UL, 8UL, 4294967290UL, 4294967290UL, 8UL};
            int i;
            (*l_61) = ((0xC7L < (((safe_sub_func_uint8_t_u_u((*g_153), (safe_rshift_func_int8_t_s_s(l_256[6], func_51(((-1L) && l_256[6]), (p_50 || (safe_div_func_uint32_t_u_u((*g_202), p_47))), (l_264 ^= (safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(l_256[6], 13)) ^ l_263), 65532UL)))))))) <= g_204) > 0x87L)) <= (*g_55));
            (*l_265) = p_48;
            for (l_108 = 5; (l_108 < 28); l_108 = safe_add_func_int16_t_s_s(l_108, 6))
            {
                int *l_276 = &l_256[5];
                unsigned *l_277 = &g_154;
                if (p_50)
                {
                    int l_281 = 0x59912A8FL;
                    int l_295 = 0x6175C34AL;
                    for (l_263 = (-10); (l_263 == (-20)); l_263 = safe_sub_func_uint32_t_u_u(l_263, 6))
                    {
                        int *l_273 = (void*)0;
                        int **l_272[4][3] = {{(void*)0, &l_273, &l_273}, {(void*)0, &l_273, &l_273}, {(void*)0, &l_273, &l_273}, {(void*)0, &l_273, &l_273}};
                        int l_284[2];
                        int *l_285 = &l_264;
                        int *l_294 = &l_284[1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_284[i] = 3L;
                        (*l_61) = ((safe_sub_func_int16_t_s_s((*g_55), p_47)) > ((((g_274 = g_202) != l_276) > ((l_277 = (void*)0) != &p_50)) | ((void*)0 == g_278)));
                        (*l_61) = ((*l_285) ^= func_51(((*g_153) |= (safe_lshift_func_uint16_t_u_u(((*l_149) &= p_50), 7))), l_281, (safe_sub_func_uint16_t_u_u(l_281, func_51(p_50, p_50, ((*g_274) = func_51((&g_234[1] != &g_234[p_47]), (l_284[1] & (*g_55)), (*l_61))))))));
                        (*l_294) |= (((safe_rshift_func_uint16_t_u_u((((+(((*l_285) = (func_51((*g_153), p_50, (*g_274)) || (safe_rshift_func_int8_t_s_u(g_62, 6)))) > p_50)) == (p_50 < (safe_rshift_func_uint8_t_u_u(253UL, 2)))) < (safe_mod_func_uint32_t_u_u(1UL, p_50))), 14)) < (*g_153)) & (*g_55));
                        (*l_294) = (*l_61);
                    }
                    for (g_62 = 3; (g_62 <= 8); g_62 += 1)
                    {
                        int *l_298 = (void*)0;
                        int *l_299 = &l_263;
                        int i;
                        l_295 &= l_256[g_62];
                        g_297[1][8] = l_296;
                        (*l_299) = (p_50 | 0xEC1EL);
                    }
                }
                else
                {
                    int l_300 = 0L;
                    (*l_61) |= ((g_150 | l_300) < g_301);
                }
                (*l_265) = &l_108;
                for (l_82 = 6; (l_82 >= 0); l_82 -= 1)
                {
                    for (l_119 = 2; (l_119 <= 6); l_119 += 1)
                    {
                        short l_304 = 0L;
                        (*l_61) |= (safe_lshift_func_int8_t_s_s(p_47, 3));
                        if (l_304)
                            break;
                        if (l_304)
                            continue;
                    }
                }
            }
            for (l_82 = 0; (l_82 <= (-28)); l_82 = safe_sub_func_uint32_t_u_u(l_82, 8))
            {
                int *l_312 = &l_263;
                short l_313 = (-10L);
                l_313 = func_51(p_50, ((*l_312) ^= (safe_lshift_func_int8_t_s_u((func_51(((*g_153) = (p_50 & (p_50 != g_133))), ((*l_61) &= ((l_309 == (void*)0) > p_50)), (safe_rshift_func_int16_t_s_u(p_50, 15))) || 0x9893L), 6))), (*g_274));
                for (g_133 = 0; (g_133 > (-21)); g_133 = safe_sub_func_int8_t_s_s(g_133, 8))
                {
                    short l_318 = 0x8FC5L;
                    int *l_320 = &l_108;
                    (*l_320) |= (safe_div_func_int8_t_s_s(func_51(((p_50 ^ p_47) >= ((((void*)0 == (*l_309)) | (l_318 >= (*g_153))) && (*l_312))), (safe_unary_minus_func_uint8_t_u((&g_234[1] != (void*)0))), (*g_274)), (*l_61)));
                    (*l_265) = p_48;
                }
                for (l_313 = (-19); (l_313 >= (-6)); l_313 = safe_add_func_int16_t_s_s(l_313, 5))
                {
                    unsigned l_328 = 0x7F0D0040L;
                    unsigned *l_331 = (void*)0;
                    unsigned char **l_343[10][8][2] = {{{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}, {{&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}, {&g_153, &g_153}}};
                    unsigned char **l_344 = (void*)0;
                    int i, j, k;
                    for (g_97 = 4; (g_97 > 40); g_97 = safe_add_func_int16_t_s_s(g_97, 1))
                    {
                        short l_325[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_325[i] = (-3L);
                        p_48 = (void*)0;
                        (*l_61) = l_325[3];
                        if (p_50)
                            continue;
                    }
                    for (g_62 = 26; (g_62 == (-9)); g_62--)
                    {
                        return l_328;
                    }
                    (*l_312) = ((safe_sub_func_uint16_t_u_u(((*l_149) = 1UL), (*l_312))) & ((*l_61) = 0x9E1CA537L));
                    if ((l_331 == (void*)0))
                    {
                        l_332[3] |= l_328;
                    }
                    else
                    {
                        short *l_351 = &l_105[0][4];
                        int *l_352[5][9][5] = {{{(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}}, {{(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}}, {{(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}}, {{(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}}, {{(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}, {(void*)0, &l_264, (void*)0, &l_264, (void*)0}}};
                        int i, j, k;
                        l_353 ^= (((((*l_312) |= (safe_add_func_int16_t_s_s(func_51((safe_mod_func_int16_t_s_s(func_51(p_50, (&g_234[1] != (void*)0), (safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_343[0][4][0] != l_344), (safe_sub_func_int16_t_s_s(((*l_351) = (safe_mod_func_int32_t_s_s(((p_48 != (void*)0) == (*l_61)), (safe_add_func_uint8_t_u_u((*g_153), p_50))))), (*g_55))))), 252UL)), 65531UL))), g_84)), p_47, p_47), g_204))) >= p_47) & g_60) && 3UL);
                        (*l_61) |= 0xCFAD3511L;
                        p_48 = p_48;
                        (*l_265) = (*l_265);
                    }
                }
            }
        }
        else
        {
            unsigned char l_360 = 4UL;
            int l_361 = 0x60831A35L;
            int *l_377[1][4][10] = {{{&g_62, &l_361, &g_62, &l_108, &l_108, &g_62, &l_361, &g_62, &g_62, &g_62}, {&g_62, &l_361, &g_62, &l_108, &l_108, &g_62, &l_361, &g_62, &g_62, &g_62}, {&g_62, &l_361, &g_62, &l_108, &l_108, &g_62, &l_361, &g_62, &g_62, &g_62}, {&g_62, &l_361, &g_62, &l_108, &l_108, &g_62, &l_361, &g_62, &g_62, &g_62}}};
            int **l_378 = (void*)0;
            int i, j, k;
            for (l_119 = 22; (l_119 <= 44); l_119 = safe_add_func_uint32_t_u_u(l_119, 1))
            {
                int *l_364 = &g_62;
                for (g_204 = 0; (g_204 <= (-17)); g_204--)
                {
                    int l_358[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_358[i][j] = (-1L);
                    }
                    (*l_61) |= l_358[2][0];
                    for (g_154 = 0; (g_154 <= 6); g_154 += 1)
                    {
                        unsigned short l_359[8] = {0x7A25L, 65534UL, 0x7A25L, 65534UL, 0x7A25L, 65534UL, 0x7A25L, 65534UL};
                        int i;
                        l_61 = &g_62;
                        if (l_359[4])
                            continue;
                    }
                }
                l_361 = l_360;
                for (g_133 = 0; (g_133 > 18); g_133 = safe_add_func_int8_t_s_s(g_133, 9))
                {
                    int **l_365 = &l_61;
                    if (l_360)
                        break;
                    (*l_365) = l_364;
                }
            }
            (*l_61) = (l_108 &= (p_47 && ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(p_50, (((safe_sub_func_uint8_t_u_u(l_372, ((*l_61) | (*g_202)))) & l_360) >= 0x2B3B6EA3L))) ^ ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((func_51(((void*)0 != &g_202), (*l_61), (*g_274)) || 0xC4D3313AL), (*g_153))), (*l_61))) | 4UL)), 14)) & 7UL)));
            l_377[0][2][2] = p_48;
            for (l_119 = (-28); (l_119 <= 46); l_119++)
            {
                int **l_381[2][10][4] = {{{&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}}, {{&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}, {&g_234[0], &g_234[1], &l_61, &l_61}}};
                int i, j, k;
                g_234[1] = &g_62;
            }
        }
    }
    return l_382;
}







static short func_51(unsigned char p_52, int p_53, int p_54)
{
    unsigned l_58 = 0xFFD52699L;
    return l_58;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_924[i][j][k], "g_924[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
