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



static int g_5 = 0x43D837BCL;
static int *g_16 = &g_5;
static int **g_15[4][10][6] = {{{&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}}, {{&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}}, {{&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}}, {{&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}, {&g_16, (void*)0, (void*)0, (void*)0, &g_16, &g_16}}};
static int g_66 = (-1L);
static int g_70 = 4L;
static int g_71[5][2] = {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}};
static const int *g_78[6][9] = {{(void*)0, (void*)0, (void*)0, &g_70, (void*)0, (void*)0, (void*)0, &g_5, &g_71[3][1]}, {(void*)0, (void*)0, (void*)0, &g_70, (void*)0, (void*)0, (void*)0, &g_5, &g_71[3][1]}, {(void*)0, (void*)0, (void*)0, &g_70, (void*)0, (void*)0, (void*)0, &g_5, &g_71[3][1]}, {(void*)0, (void*)0, (void*)0, &g_70, (void*)0, (void*)0, (void*)0, &g_5, &g_71[3][1]}, {(void*)0, (void*)0, (void*)0, &g_70, (void*)0, (void*)0, (void*)0, &g_5, &g_71[3][1]}, {(void*)0, (void*)0, (void*)0, &g_70, (void*)0, (void*)0, (void*)0, &g_5, &g_71[3][1]}};
static const unsigned short g_122 = 1UL;
static int g_194 = 5L;
static const unsigned char g_229 = 0xA1L;
static int **g_277 = &g_16;
static const char g_286[1][6][10] = {{{0xD1L, 0xD1L, (-6L), (-1L), 0x9DL, 0x5DL, 5L, 0xD1L, 0xFAL, 5L}, {0xD1L, 0xD1L, (-6L), (-1L), 0x9DL, 0x5DL, 5L, 0xD1L, 0xFAL, 5L}, {0xD1L, 0xD1L, (-6L), (-1L), 0x9DL, 0x5DL, 5L, 0xD1L, 0xFAL, 5L}, {0xD1L, 0xD1L, (-6L), (-1L), 0x9DL, 0x5DL, 5L, 0xD1L, 0xFAL, 5L}, {0xD1L, 0xD1L, (-6L), (-1L), 0x9DL, 0x5DL, 5L, 0xD1L, 0xFAL, 5L}, {0xD1L, 0xD1L, (-6L), (-1L), 0x9DL, 0x5DL, 5L, 0xD1L, 0xFAL, 5L}}};
static char g_407 = 0x10L;
static int *g_473[9][6] = {{&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}, {&g_194, &g_70, &g_5, &g_70, &g_194, &g_5}};
static unsigned short g_492 = 4UL;
static unsigned g_511 = 0xD3423E3AL;
static unsigned char g_648 = 0x0BL;
static unsigned g_687[4] = {0UL, 0UL, 0UL, 0UL};



static char func_1(void);
static int ** func_6(const int ** p_7, unsigned p_8, int ** p_9);
static int ** func_11(const int p_12, int * p_13, int * const p_14);
static short func_27(int ** p_28, unsigned char p_29, int p_30, unsigned short p_31);
static int ** func_32(int p_33, int ** p_34, int * p_35, int ** p_36, short p_37);
static int ** func_38(int p_39);
static const unsigned char func_40(unsigned char p_41, unsigned short p_42, unsigned p_43);
static int * func_46(int ** p_47, int ** p_48, int ** p_49, int * const * p_50, const int * p_51);
static int ** func_52(unsigned p_53, unsigned p_54);
static char func_57(int p_58, int p_59);
static char func_1(void)
{
    int *l_4 = &g_5;
    const int **l_10 = (void*)0;
    const int *l_18 = &g_5;
    const int **l_17 = &l_18;
    int *l_256 = (void*)0;
    unsigned l_257 = 0x48396DE9L;
    int ***l_435 = &g_15[1][5][3];
    unsigned l_440 = 1UL;
    short l_462[9];
    int l_472[6];
    unsigned char l_490 = 255UL;
    const int *l_535 = &g_71[0][1];
    char l_686 = 0x1DL;
    const int *l_690 = &g_71[0][1];
    int i;
    for (i = 0; i < 9; i++)
        l_462[i] = 0x3611L;
    for (i = 0; i < 6; i++)
        l_472[i] = 0xA0DF20E0L;
    (*l_4) = (safe_rshift_func_int8_t_s_u(0x9BL, 4));
    (*l_435) = func_6(l_10, g_5, func_11(((g_15[0][2][0] != l_17) == (safe_rshift_func_int16_t_s_s((4294967295UL & ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((func_27(func_32((*l_4), func_38((func_40((*l_18), (+(g_5 & g_5)), (*l_4)) != g_71[0][1])), l_256, &g_16, l_257), (**l_17), (**l_17), (*l_4)) ^ g_286[0][1][0]), 0)), 0L)) <= g_5), 6)) & g_5)), 0))), l_256, l_256));
    for (g_70 = 0; (g_70 <= 5); g_70 += 1)
    {
        unsigned l_436 = 4294967291UL;
        char l_441 = 0xDAL;
        unsigned l_453 = 7UL;
        int l_458[9] = {(-1L), 9L, (-1L), 9L, (-1L), 9L, (-1L), 9L, (-1L)};
        int ***l_465 = &g_15[0][2][0];
        unsigned l_466 = 0x30E9538AL;
        unsigned char l_469 = 0x0FL;
        unsigned short l_491[7][4][2] = {{{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}, {{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}, {{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}, {{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}, {{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}, {{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}, {{0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}, {0xF375L, 0x6BFEL}}};
        int l_592 = 0x96BE8E4EL;
        short l_657 = (-3L);
        unsigned short l_682[8][6][1] = {{{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}, {{65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}, {65533UL}}};
        int *l_685 = (void*)0;
        int i, j, k;
        for (g_66 = 0; (g_66 <= 3); g_66 += 1)
        {
            int l_446 = 3L;
            int l_467 = 0xE3531BA0L;
            l_446 ^= (0L <= (l_436 & (safe_add_func_uint32_t_u_u(g_407, ((safe_unary_minus_func_uint32_t_u((l_440 <= func_40(((g_194 < (l_441 == (((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(g_194, g_122)) < g_5), g_407)) || g_122) >= 0xE7L))) & g_122), (**l_17), l_441)))) | g_70)))));
            for (l_441 = 0; (l_441 <= 1); l_441 += 1)
            {
                char l_447 = 0xE5L;
                int l_448 = 0x2150C2D9L;
                unsigned l_461 = 1UL;
                for (l_436 = 0; (l_436 <= 1); l_436 += 1)
                {
                    int i, j;
                    return g_71[(l_441 + 3)][l_441];
                }
                for (g_407 = 0; (g_407 <= 5); g_407 += 1)
                {
                    int i, j, k;
                    (*l_4) = (func_40(g_71[(l_441 + 3)][l_441], l_447, l_448) != g_71[(l_441 + 3)][l_441]);
                    (**g_277) &= (safe_add_func_uint16_t_u_u(((0x88BFF651L > (safe_lshift_func_int16_t_s_s(g_407, ((((void*)0 == &g_15[0][7][1]) & g_71[4][1]) == (l_453 ^ (0UL || (safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(g_66, l_448)), l_446)))))))) > g_71[0][1]), 0x0AC2L));
                    if (l_458[6])
                        break;
                    (*l_4) = (g_229 < (251UL > 4UL));
                }
                for (l_446 = 0; (l_446 <= 3); l_446 += 1)
                {
                    int i, j;
                    return g_71[l_446][l_441];
                }
                for (l_446 = 0; (l_446 <= 1); l_446 += 1)
                {
                    int i, j, k;
                    if (g_71[(l_446 + 1)][l_446])
                    {
                        int i, j;
                        if (l_458[(l_446 + 5)])
                            break;
                        (**g_277) |= (l_446 < (func_40(g_71[0][1], g_286[0][0][9], (+((!(safe_rshift_func_uint16_t_u_s(func_40(((void*)0 != g_78[g_70][(l_441 + 5)]), l_436, g_286[0][2][0]), 14))) >= func_40(l_461, g_286[0][1][5], g_286[0][4][8])))) || l_462[8]));
                        (*l_4) = (safe_mod_func_int8_t_s_s(0xBBL, func_40(func_40((~(((l_465 != (void*)0) == (&l_17 != &g_15[0][4][2])) & (g_66 == ((**g_277) & (+((void*)0 != &g_15[0][2][0])))))), l_466, g_286[0][3][5]), g_229, g_194)));
                        l_467 = (*g_16);
                    }
                    else
                    {
                        (*g_16) = (*l_4);
                        (*g_16) = l_458[6];
                    }
                }
            }
        }
        for (g_194 = 5; (g_194 >= 0); g_194 -= 1)
        {
            int l_471[9] = {0x5A7E54F2L, 0x0C4A79FAL, 0x5A7E54F2L, 0x0C4A79FAL, 0x5A7E54F2L, 0x0C4A79FAL, 0x5A7E54F2L, 0x0C4A79FAL, 0x5A7E54F2L};
            unsigned short l_475 = 0x03A4L;
            unsigned l_476[5];
            short l_512[4][6][8] = {{{0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}}, {{0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}}, {{0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}}, {{0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}, {0xFE1DL, (-6L), 0x1EA3L, 0xA573L, 0x9B8FL, 0L, 2L, (-6L)}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_476[i] = 2UL;
        }
        for (l_490 = 0; (l_490 <= 3); l_490 += 1)
        {
            unsigned l_538 = 4294967289UL;
            const int * const *l_556 = &l_535;
            const int * const **l_555 = &l_556;
            int l_580 = 0x80DFEB8AL;
            int *l_615[3];
            const int *l_624[4];
            unsigned l_639 = 1UL;
            int i;
            for (i = 0; i < 3; i++)
                l_615[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_624[i] = &l_592;
        }
    }
    (**g_277) = ((safe_lshift_func_uint8_t_u_s((*l_535), (*l_18))) == (l_690 != (*l_17)));
    return (**l_17);
}







static int ** func_6(const int ** p_7, unsigned p_8, int ** p_9)
{
    unsigned char l_425 = 255UL;
    int * const *l_426[9][7][4] = {{{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}, {{&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}, {&g_16, (void*)0, &g_16, (void*)0}}};
    int l_431 = 0L;
    char l_434 = 0x13L;
    int i, j, k;
    l_434 &= (((*g_16) != (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_425, (+(((void*)0 != l_426[0][4][0]) < (**g_277))))), func_57((**p_9), (safe_div_func_uint8_t_u_u(g_5, (safe_div_func_int32_t_s_s(func_57((((l_431 & func_40((+(safe_lshift_func_uint8_t_u_u(g_229, 0))), p_8, g_286[0][1][7])) ^ 0UL) < 65535UL), g_5), 0xA66E7C27L)))))))) == 0xB5L);
    (**g_277) = (-6L);
    return p_9;
}







static int ** func_11(const int p_12, int * p_13, int * const p_14)
{
    return &g_16;
}







static short func_27(int ** p_28, unsigned char p_29, int p_30, unsigned short p_31)
{
    unsigned char l_336 = 249UL;
    unsigned short l_337 = 0xD6A0L;
    int l_340[3];
    unsigned short l_367 = 1UL;
    short l_389 = 2L;
    int * const *l_403 = &g_16;
    int *l_419 = (void*)0;
    int *l_420[10] = {&g_71[0][1], &l_340[2], &g_71[0][1], &l_340[2], &g_71[0][1], &l_340[2], &g_71[0][1], &l_340[2], &g_71[0][1], &l_340[2]};
    int i;
    for (i = 0; i < 3; i++)
        l_340[i] = 0L;
    if ((safe_lshift_func_uint8_t_u_u(p_29, ((**p_28) >= ((safe_mod_func_int32_t_s_s(l_336, (l_337 | ((p_31 <= (**p_28)) || func_57((~((0UL | 6UL) ^ l_336)), g_122))))) < p_30)))))
    {
        int **l_352 = &g_16;
        int *l_371 = &g_71[0][1];
        int *l_379 = &l_340[2];
        int l_412 = 9L;
lbl_388:
        for (g_66 = 13; (g_66 != 27); g_66 = safe_add_func_uint16_t_u_u(g_66, 9))
        {
            int *l_341 = (void*)0;
            l_340[2] = l_337;
            p_30 ^= (**p_28);
            for (g_194 = 0; (g_194 == (-23)); --g_194)
            {
                int *l_344 = &l_340[1];
                (*l_344) = (*g_16);
            }
            for (g_70 = (-12); (g_70 == (-2)); g_70 = safe_add_func_int16_t_s_s(g_70, 1))
            {
                int *l_349 = &g_194;
            }
        }
        (*l_379) ^= (((safe_lshift_func_uint8_t_u_u(g_5, 0)) & (((*g_16) & g_5) != p_31)) == ((p_29 || (func_57((**p_28), g_71[0][1]) && (safe_div_func_uint8_t_u_u((((void*)0 != &g_78[0][3]) & (**p_28)), (-8L))))) ^ 1L));
        for (p_29 = (-3); (p_29 >= 45); p_29 = safe_add_func_uint16_t_u_u(p_29, 4))
        {
            for (p_30 = 0; (p_30 > 22); p_30++)
            {
                if (l_336)
                    break;
            }
            if (l_337)
                continue;
            (*l_371) = 0x0127DD52L;
        }
        for (g_70 = (-14); (g_70 == 26); g_70 = safe_add_func_int8_t_s_s(g_70, 1))
        {
            int *l_392 = &g_5;
            int *l_415 = &l_340[2];
            for (p_31 = (-19); (p_31 >= 44); p_31++)
            {
                if (g_70)
                    goto lbl_388;
            }
        }
    }
    else
    {
        int *l_418 = &l_340[0];
        (*l_418) = 0x58088B17L;
    }
    p_30 ^= 0x90C7D2AAL;
    return g_5;
}







static int ** func_32(int p_33, int ** p_34, int * p_35, int ** p_36, short p_37)
{
    int l_264 = 4L;
    int l_267 = 0x5A87531FL;
    int **l_268 = &g_16;
    char l_321[2];
    int i;
    for (i = 0; i < 2; i++)
        l_321[i] = (-8L);
    for (p_33 = 0; (p_33 <= 1); p_33 += 1)
    {
        int *l_259 = &g_66;
        for (g_66 = 1; (g_66 >= 0); g_66 -= 1)
        {
            unsigned char l_258 = 0x70L;
            if (l_258)
                break;
        }
        for (g_70 = 0; (g_70 <= 1); g_70 += 1)
        {
            int i, j;
            g_71[g_70][g_70] &= (l_259 == (void*)0);
            if ((**p_36))
                break;
            if ((**p_36))
                continue;
        }
    }
    l_267 ^= (safe_rshift_func_int8_t_s_u((g_5 ^ func_40((safe_rshift_func_int16_t_s_s(l_264, func_57(l_264, l_264))), func_40(g_5, g_5, ((safe_div_func_uint8_t_u_u(g_122, l_264)) || 0L)), g_194)), 2));
    if ((&g_78[1][5] == l_268))
    {
        char l_274 = 0x9FL;
        int l_280 = 1L;
        int **l_289 = &g_16;
        int l_293 = 0x290221D2L;
lbl_283:
        for (g_70 = (-21); (g_70 > 14); g_70 = safe_add_func_uint8_t_u_u(g_70, 1))
        {
            int *l_271 = &l_264;
            (*l_271) |= 0x46F15C1AL;
        }
        for (p_37 = 1; (p_37 >= 0); p_37 -= 1)
        {
            unsigned l_276 = 0x059803E4L;
            int l_297 = 0xB22930BFL;
            unsigned char l_300 = 0x20L;
            if ((safe_add_func_uint8_t_u_u(p_33, (&p_35 == (void*)0))))
            {
                for (l_267 = 0; (l_267 <= 5); l_267 += 1)
                {
                    int i, j;
                    for (p_33 = 0; (p_33 <= 5); p_33 += 1)
                    {
                        int i, j;
                        g_78[l_267][(p_37 + 2)] = &g_71[(p_37 + 3)][p_37];
                    }
                    g_71[(p_37 + 3)][p_37] |= (&g_78[l_267][(p_37 + 6)] != (void*)0);
                }
            }
            else
            {
                int *l_275 = &g_71[0][1];
                int **l_278 = (void*)0;
                (*l_275) = l_274;
                (*l_268) = (*g_277);
                for (l_276 = 0; (l_276 <= 5); l_276 += 1)
                {
                    char l_279[9] = {1L, 5L, 1L, 5L, 1L, 5L, 1L, 5L, 1L};
                    int i;
                    if (l_279[5])
                        break;
                }
                (*p_36) = (*p_36);
            }
            for (l_274 = 5; (l_274 >= 0); l_274 -= 1)
            {
                return &g_16;
            }
            if ((**l_268))
            {
                (*p_34) = (*p_36);
            }
            else
            {
                unsigned l_281 = 4294967295UL;
                for (g_66 = 0; (g_66 <= 5); g_66 += 1)
                {
                    int *l_282 = &l_267;
                    l_280 = 0L;
                    (*l_282) |= l_281;
                }
            }
            for (g_66 = 5; (g_66 >= 1); g_66 -= 1)
            {
                unsigned char l_284 = 0xFEL;
                int l_288 = 2L;
                if (g_5)
                    goto lbl_283;
                if (l_284)
                {
                    int l_285 = 3L;
                    for (g_70 = 4; (g_70 >= 1); g_70 -= 1)
                    {
                        int *l_287[6][4][3] = {{{&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}}, {{&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}}, {{&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}}, {{&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}}, {{&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}}, {{&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}, {&g_71[2][0], &g_5, (void*)0}}};
                        int i, j, k;
                        if (l_285)
                            break;
                        l_288 &= ((1UL & g_286[0][4][8]) < g_5);
                    }
                    if ((*g_16))
                    {
                        return l_289;
                    }
                    else
                    {
                        int *l_290 = (void*)0;
                        int *l_291[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_291[i] = &g_71[0][1];
                        l_280 = (!l_276);
                    }
                }
                else
                {
                    int l_292 = (-1L);
                    l_293 &= l_292;
                    for (l_264 = 0; (l_264 <= 5); l_264 += 1)
                    {
                        unsigned short l_294 = 0xC2E9L;
                        int l_301[1][7][10] = {{{0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}, {0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}, {0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}, {0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}, {0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}, {0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}, {0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L, 0L, 0xC6794A24L}}};
                        int i, j, k;
                        l_301[0][2][3] &= (g_66 > ((0x848CL <= ((func_40(((l_294 | ((safe_lshift_func_int16_t_s_u(((g_5 >= l_276) >= (&p_35 != &p_35)), 3)) < l_297)) < (safe_rshift_func_uint8_t_u_u(g_286[0][4][8], l_294))), p_33, g_70) ^ l_300) || g_286[0][4][8])) == 0UL));
                        if (g_194)
                            goto lbl_283;
                        if (l_301[0][2][3])
                            break;
                    }
                    for (p_33 = 0; (p_33 <= 5); p_33 += 1)
                    {
                        int i, j;
                        g_78[g_66][(g_66 + 2)] = (*p_36);
                    }
                    if ((**l_289))
                        break;
                }
            }
        }
    }
    else
    {
        short l_307 = 0x2B0DL;
        int **l_310 = (void*)0;
        unsigned short l_311 = 65531UL;
        const int *l_330 = &l_267;
        for (l_267 = (-14); (l_267 < (-27)); l_267--)
        {
            int *l_305[3];
            unsigned l_306 = 4294967295UL;
            int i;
            for (i = 0; i < 3; i++)
                l_305[i] = &g_70;
            l_306 = (safe_unary_minus_func_int16_t_s((&g_78[0][3] != (void*)0)));
            if ((**p_36))
                continue;
            l_307 = (*g_16);
        }
        for (g_194 = 1; (g_194 >= 0); g_194 -= 1)
        {
            char l_312 = 0xC5L;
            int l_323[6] = {0x74864215L, 0x74864215L, 0L, 0x74864215L, 0x74864215L, 0L};
            int **l_331 = &g_16;
            int i;
        }
    }
    return &g_16;
}







static int ** func_38(int p_39)
{
    int *l_230 = &g_70;
    int l_231 = 1L;
    short l_254[1][6][6] = {{{9L, (-7L), 0L, (-7L), 9L, (-7L)}, {9L, (-7L), 0L, (-7L), 9L, (-7L)}, {9L, (-7L), 0L, (-7L), 9L, (-7L)}, {9L, (-7L), 0L, (-7L), 9L, (-7L)}, {9L, (-7L), 0L, (-7L), 9L, (-7L)}, {9L, (-7L), 0L, (-7L), 9L, (-7L)}}};
    int i, j, k;
    (*l_230) = p_39;
    l_231 &= (*l_230);
    for (g_66 = 1; (g_66 >= 0); g_66 -= 1)
    {
        int *l_236 = &l_231;
        if ((&l_230 != &g_78[0][3]))
        {
            int *l_244 = &g_5;
            if ((((&l_231 == (void*)0) >= 0x875AL) | (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u(func_40(func_40(p_39, ((l_236 != l_236) | ((-1L) == (*l_230))), ((0UL >= p_39) ^ 0x60BAEE0FL)), p_39, p_39), 6)) ^ g_229) && 255UL), (*l_230)))))
            {
                short l_237 = 0xEE9FL;
                int l_253 = 0xECAD36BBL;
                for (l_231 = 0; (l_231 <= 1); l_231 += 1)
                {
                    int i, j;
                    g_71[(g_66 + 2)][l_231] = g_71[(l_231 + 2)][l_231];
                    if ((((void*)0 == &g_71[(g_66 + 2)][l_231]) || func_40(func_40(p_39, g_70, l_237), ((safe_sub_func_int32_t_s_s(((!((+((p_39 & (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xFDL, (l_244 == (void*)0))), p_39))) <= p_39)) <= p_39)) && l_237), g_5)) | 0x1BL), g_229)))
                    {
                        g_71[(l_231 + 2)][l_231] = ((-4L) & (*l_230));
                    }
                    else
                    {
                        l_253 = func_40((safe_div_func_uint16_t_u_u(((-1L) < func_40(g_229, (safe_mod_func_uint16_t_u_u(p_39, (g_66 || (safe_div_func_int8_t_s_s((p_39 < ((safe_lshift_func_uint8_t_u_u((l_237 >= 0xF2L), func_40((*l_236), (*l_236), (*l_236)))) <= (-8L))), l_237))))), p_39)), g_229)), g_70, p_39);
                    }
                }
                (*l_230) ^= (*g_16);
            }
            else
            {
                l_254[0][1][1] = (-1L);
                (*l_230) = (*l_244);
            }
        }
        else
        {
            int *l_255[7];
            int i;
            for (i = 0; i < 7; i++)
                l_255[i] = &g_194;
            l_255[3] = l_255[3];
        }
    }
    (*l_230) ^= 2L;
    return &g_16;
}







static const unsigned char func_40(unsigned char p_41, unsigned short p_42, unsigned p_43)
{
    unsigned short l_60 = 1UL;
    int **l_87 = &g_16;
    for (p_42 = 0; (p_42 <= 50); p_42 = safe_add_func_int32_t_s_s(p_42, 3))
    {
    }
    return g_229;
}







static int * func_46(int ** p_47, int ** p_48, int ** p_49, int * const * p_50, const int * p_51)
{
    int l_88 = 0L;
    unsigned l_93[2];
    int *l_146 = (void*)0;
    int *l_228 = &g_71[0][1];
    int i;
    for (i = 0; i < 2; i++)
        l_93[i] = 0UL;
    if (l_88)
    {
        int *l_89 = &g_66;
        short l_115 = 0x6AC4L;
        int *l_143 = (void*)0;
lbl_92:
        (*p_49) = l_89;
        if ((func_57(l_88, (l_89 != &l_88)) != (l_88 >= l_88)))
        {
lbl_94:
            if (l_88)
                goto lbl_92;
lbl_117:
            (*g_16) = func_57(l_93[1], (*l_89));
            if (g_66)
                goto lbl_94;
            for (g_66 = 9; (g_66 != (-28)); --g_66)
            {
                (*p_49) = (*p_50);
            }
        }
        else
        {
            unsigned short l_97 = 65532UL;
            int **l_104 = &l_89;
            unsigned l_112 = 0xDA1B12C1L;
            (**p_49) = ((5L <= (l_88 == l_97)) & (g_71[1][0] & (0x68L ^ 1UL)));
            if (((safe_mod_func_int32_t_s_s(0x18A2FD92L, (~(l_97 == ((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x60L, (l_104 != &g_16))), ((safe_mod_func_uint32_t_u_u((**l_104), (0x41C9606EL | (&g_16 == (void*)0)))) < l_88))) ^ (**p_49)))))) != 0xD71D57ADL))
            {
                int *l_109 = (void*)0;
lbl_113:
                (*p_49) = l_109;
                if (l_93[0])
                {
                    if ((safe_sub_func_int8_t_s_s(func_57(l_112, (**l_104)), 255UL)))
                    {
                        (*l_89) = (l_93[1] && (-5L));
                        (*p_49) = (void*)0;
                    }
                    else
                    {
                        unsigned l_114 = 0x4EC2A0AAL;
                        if (l_97)
                            goto lbl_113;
                        (*l_89) &= (g_71[3][1] || l_114);
                        (**l_104) &= l_115;
                        return (*p_48);
                    }
                }
                else
                {
                    unsigned l_123 = 1UL;
                    int l_124 = (-5L);
                    if (l_93[0])
                    {
                        int *l_116 = &l_88;
                        (*p_48) = l_116;
                        if (l_115)
                            goto lbl_117;
                    }
                    else
                    {
                        int l_125 = 0x3D3F511BL;
                        (*l_89) |= 0xF7CC5E97L;
                        l_124 &= func_57((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 == (*p_49)), g_122)), l_123)), (**l_104));
                        (**l_104) |= l_125;
                        return (*p_47);
                    }
                    (**l_104) ^= (&g_78[0][3] == &l_89);
                    for (l_124 = 1; (l_124 >= 0); l_124 -= 1)
                    {
                        unsigned short l_142 = 65533UL;
                        int i;
                        (*g_16) |= ((void*)0 == &l_109);
                        (**p_50) &= (safe_sub_func_uint16_t_u_u((func_57(l_93[l_124], g_5) < g_5), (((safe_lshift_func_uint8_t_u_s(g_122, 5)) | (l_89 != (*p_48))) < l_93[0])));
                        (**p_47) &= (*p_51);
                        (**p_48) = (g_71[0][1] < ((l_123 && (safe_add_func_int32_t_s_s(((((*l_89) != (!(safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_71[1][0], l_123)), (safe_sub_func_uint32_t_u_u(4294967294UL, (+(safe_div_func_int32_t_s_s((*g_16), g_66))))))), l_142)))) || g_71[0][1]) == g_71[0][1]), g_71[0][1]))) || (**l_104)));
                    }
                    return l_143;
                }
            }
            else
            {
                for (g_70 = 1; (g_70 >= 0); g_70 -= 1)
                {
                    for (l_112 = 0; (l_112 <= 5); l_112 += 1)
                    {
                        return (*p_48);
                    }
                    for (l_115 = 4; (l_115 >= 1); l_115 -= 1)
                    {
                        int i, j;
                        if (g_71[g_70][g_70])
                            break;
                        if (g_71[l_115][g_70])
                            break;
                        if ((**p_48))
                            continue;
                        if ((**p_49))
                            continue;
                    }
                }
                (*p_48) = (*p_47);
                for (l_88 = 0; (l_88 != (-21)); l_88--)
                {
                    (*p_49) = &l_88;
                }
            }
            return l_146;
        }
    }
    else
    {
        int l_149 = 0xB2BB32BAL;
        int l_171[10];
        int i;
        for (i = 0; i < 10; i++)
            l_171[i] = 0x3161F60AL;
        if ((safe_lshift_func_int8_t_s_s((l_149 < (safe_add_func_uint8_t_u_u(func_57(l_149, ((safe_add_func_int32_t_s_s((**p_49), l_149)) & (((safe_sub_func_uint16_t_u_u(g_71[0][1], 0xE7A1L)) != (safe_lshift_func_uint16_t_u_u(g_66, 2))) == (safe_div_func_uint16_t_u_u(l_149, ((g_71[0][1] >= g_70) ^ g_71[4][1])))))), 0xD9L))), 4)))
        {
            char l_169 = 1L;
            int *l_175 = &g_71[1][1];
            if ((*g_16))
            {
                short l_164 = 8L;
                int *l_170 = &g_71[0][1];
                l_169 ^= ((~(((safe_add_func_int32_t_s_s(0xC8F8D307L, func_57(((safe_mod_func_uint8_t_u_u(g_66, g_122)) == ((((-1L) ^ l_164) <= (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0xFEL, 6)) ^ ((l_149 && (~(-9L))) | g_66)), 0xE14BL))) || g_70)), l_149))) & g_122) <= (**p_50))) < 9UL);
                (*l_170) = (**p_49);
                l_171[3] ^= (**p_47);
            }
            else
            {
                int *l_172 = (void*)0;
                int *l_173 = (void*)0;
                int *l_174 = &g_71[0][1];
                (*l_174) ^= 0x7884222EL;
            }
            (*p_49) = (*p_49);
            (*l_175) = (*g_16);
        }
        else
        {
            short l_184 = 0xF4DAL;
            unsigned l_185 = 4294967290UL;
            int *l_186 = &g_71[3][0];
            (*l_186) = (func_57(((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((func_57(((**p_48) == func_57(l_171[1], ((0xE9L ^ g_71[0][1]) >= (l_171[4] && (l_93[1] | (safe_rshift_func_uint8_t_u_s(g_71[0][1], 6))))))), l_184) == 0x38FEL), l_185)), l_184)), 7)) != 3L), g_122) >= l_185);
            for (l_185 = 0; (l_185 <= 15); ++l_185)
            {
                char l_193 = 0x95L;
                int *l_219 = (void*)0;
                if (func_57(l_171[3], (*l_186)))
                {
                    int l_189 = 0x55632A55L;
                    (*l_186) |= (g_70 || l_189);
                    for (l_189 = 24; (l_189 != (-30)); --l_189)
                    {
                        int l_192 = 0x12C7D4E6L;
                        (*l_186) ^= l_192;
                        if (l_192)
                            continue;
                        if ((**p_49))
                            break;
                        (*l_186) |= (*p_51);
                    }
                    return (*p_49);
                }
                else
                {
                    unsigned l_195 = 0x1EA2908BL;
                    int *l_196 = &l_171[3];
                    (*l_196) &= func_57((0UL & (l_193 <= g_194)), l_195);
                    for (g_66 = 1; (g_66 >= 0); g_66 -= 1)
                    {
                        int i, j;
                        g_71[(g_66 + 3)][g_66] = (safe_mod_func_int8_t_s_s((g_71[(g_66 + 1)][g_66] > (&l_186 == &p_51)), l_171[(g_66 + 7)]));
                        (*l_186) = (((*l_186) || (safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((*l_186), ((*l_186) && l_193))) | (safe_lshift_func_int16_t_s_s(g_70, l_171[4]))), 0xA8B706D4L)), ((void*)0 != &p_51)))) != 0x96L);
                        (*l_186) = (((*p_51) && 2UL) != (*l_186));
                        if ((**p_50))
                            continue;
                    }
                    if ((g_71[4][0] == (*l_196)))
                    {
                        (*l_196) = func_57((safe_div_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_122, func_57((*l_186), (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*l_196), (!g_122))), (l_186 == l_219)))))), g_194)), g_194)) || l_171[3]), l_149)), g_194);
                        (*l_186) ^= 0xBA7749F3L;
                        if ((*p_51))
                            continue;
                    }
                    else
                    {
                        (*l_186) = (5L >= func_57((*l_196), (safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_171[3], (*l_186))), ((*l_196) < (*l_196)))), (safe_lshift_func_int8_t_s_s((+g_71[2][0]), 7))))));
                        (*l_186) = l_93[1];
                    }
                    if (l_171[3])
                        break;
                }
            }
        }
    }
    (*p_48) = (*p_49);
    return l_228;
}







static int ** func_52(unsigned p_53, unsigned p_54)
{
    int *l_77 = &g_66;
    unsigned short l_83 = 0x67B2L;
    short l_86 = (-9L);
    (*l_77) = (safe_add_func_int16_t_s_s((((g_66 ^ p_54) && ((l_77 != g_78[0][3]) >= (p_54 & (safe_lshift_func_int16_t_s_u((safe_div_func_int32_t_s_s(0x5AEC2C04L, l_83)), 15))))) < ((p_54 | (safe_div_func_uint8_t_u_u(p_53, 0x80L))) & 5L)), l_86));
    (*l_77) = (*l_77);
    return &g_16;
}







static char func_57(int p_58, int p_59)
{
    int *l_73 = &g_5;
    for (p_58 = 0; (p_58 > (-8)); p_58 = safe_sub_func_int8_t_s_s(p_58, 1))
    {
        int *l_63 = (void*)0;
        short l_69[9][1];
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_69[i][j] = 0xB0B9L;
        }
        l_63 = &p_58;
        for (p_59 = 0; (p_59 != (-25)); p_59 = safe_sub_func_uint8_t_u_u(p_59, 1))
        {
            int *l_72 = &g_70;
            int **l_74 = &l_72;
            for (g_66 = (-5); (g_66 >= 13); ++g_66)
            {
                for (g_70 = 0; g_70 < 9; g_70 += 1)
                {
                    for (g_71[0][1] = 0; g_71[0][1] < 1; g_71[0][1] += 1)
                    {
                        l_69[g_70][g_71[0][1]] = 9L;
                    }
                }
                if (p_58)
                    continue;
                l_72 = &p_58;
            }
            (*l_74) = l_73;
            if (p_59)
                break;
        }
    }
    return p_59;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_71[i][j], "g_71[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_286[i][j][k], "g_286[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_687[i], "g_687[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
