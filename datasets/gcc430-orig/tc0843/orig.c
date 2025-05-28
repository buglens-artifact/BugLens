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



static int g_19[6][2] = {{0xE1C97412L, 1L}, {0xE1C97412L, 1L}, {0xE1C97412L, 1L}, {0xE1C97412L, 1L}, {0xE1C97412L, 1L}, {0xE1C97412L, 1L}};
static int *g_18 = &g_19[0][0];
static int g_60 = 0xE17C927DL;
static int g_62[3] = {0xFFEA1E17L, 0xFFEA1E17L, 0xFFEA1E17L};
static int g_134 = 0x0B72F399L;
static int g_135 = (-9L);
static int g_138 = 1L;
static const int *g_151 = (void*)0;
static const int **g_155 = &g_151;
static int *g_196 = &g_60;
static int g_259 = 0x6E1166E0L;
static unsigned g_287[1] = {0xFBFE8984L};
static short g_318 = 0x8D85L;
static char g_388 = 0x2CL;
static const int g_397 = 1L;



static unsigned char func_1(void);
static int * func_2(int * p_3, const unsigned char p_4);
static int * func_5(int * p_6, const short p_7, int p_8, int * p_9, int * p_10);
static int * func_11(char p_12, int * p_13, const int p_14, int * p_15, unsigned p_16);
static int func_22(unsigned char p_23, short p_24, int * const p_25);
static unsigned short func_28(int p_29, int p_30);
static unsigned char func_33(unsigned short p_34, short p_35, int * p_36);
static char func_39(int * p_40);
static int ** func_42(const int * p_43);
static const int * func_44(int * p_45, unsigned p_46, int * p_47, int p_48);
static unsigned char func_1(void)
{
    unsigned char l_17 = 247UL;
    unsigned l_31 = 0x66E9F086L;
    unsigned short l_339 = 0x73BEL;
    int *l_349 = &g_19[1][0];
    int *l_438 = &g_62[0];
    int l_462 = 0L;
    int ***l_464 = (void*)0;
    int *l_527[4][5][7] = {{{&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}}, {{&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}}, {{&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}}, {{&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}, {&g_138, (void*)0, &g_62[0], &g_19[0][0], &g_134, &g_62[0], &g_60}}};
    unsigned short l_528 = 65529UL;
    int **l_562 = &l_527[1][3][6];
    int ***l_561 = &l_562;
    char l_568[8][9] = {{3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}, {3L, 6L, (-1L), 1L, 0x7BL, (-5L), 0xD3L, 0xC9L, (-1L)}};
    int i, j, k;
    l_438 = func_2(func_5(func_11(l_17, g_18, (safe_div_func_int8_t_s_s((0xFEL ^ g_19[5][1]), ((~func_22((safe_lshift_func_uint16_t_u_s(func_28((*g_18), l_31), 7)), (((+((l_339 , (safe_lshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((0xEA18E5C5L & l_31) && l_339), g_287[0])) <= l_31), 13))) , 0xE39CL)) >= g_287[0]) , l_17), &g_19[2][0])) , 0xA9L))), l_349, (*l_349)), g_287[0], g_287[0], g_18, g_196), g_287[0]);
    if (g_135)
        goto lbl_439;
lbl_439:
    (*g_155) = l_349;
    if (((*g_196) != (*g_196)))
    {
        (*g_155) = (void*)0;
        return g_62[0];
    }
    else
    {
        unsigned l_452 = 0x0678CA93L;
        char l_467 = 0x4EL;
        int *l_469 = &g_19[0][0];
        int l_521 = (-1L);
        (*g_155) = l_438;
        for (l_339 = 0; (l_339 > 45); l_339 = safe_add_func_int8_t_s_s(l_339, 2))
        {
            unsigned l_447[5][4][4] = {{{0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}}, {{0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}}, {{0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}}, {{0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}}, {{0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}, {0x66BC7413L, 1UL, 0x5105DE15L, 8UL}}};
            int *l_457[3];
            unsigned short l_517 = 65535UL;
            int l_531 = 0xB094EBACL;
            int **l_533 = (void*)0;
            int ***l_532 = &l_533;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_457[i] = &g_60;
        }
        for (g_60 = 0; (g_60 <= 1); g_60 += 1)
        {
            int **l_537[6] = {&l_527[0][3][4], &l_527[0][3][4], (void*)0, &l_527[0][3][4], &l_527[0][3][4], (void*)0};
            int i;
            (*l_469) = (safe_unary_minus_func_int32_t_s(((safe_sub_func_int32_t_s_s(0x7BF32AAAL, (l_537[5] != &l_469))) < g_287[0])));
            for (g_318 = 1; (g_318 >= 0); g_318 -= 1)
            {
                int i, j;
                g_19[(g_318 + 2)][g_318] = (*l_438);
                for (l_467 = 3; (l_467 >= 0); l_467 -= 1)
                {
                    int i, j, k;
                    for (l_452 = 0; (l_452 <= 2); l_452 += 1)
                    {
                        int i, j, k;
                        g_19[(l_467 + 1)][g_318] = (safe_add_func_uint16_t_u_u(1UL, 0x9C44L));
                        g_19[(g_318 + 1)][g_318] = (safe_rshift_func_uint8_t_u_u(255UL, (safe_rshift_func_uint8_t_u_u(0UL, 0))));
                        (*g_18) = g_62[g_60];
                    }
                    (*l_438) = (((safe_rshift_func_uint16_t_u_s(((l_527[g_318][l_467][g_318] != (void*)0) , ((7UL != ((safe_div_func_int32_t_s_s((*g_151), g_135)) != (*g_196))) , (safe_mul_func_uint16_t_u_u(65535UL, (safe_mul_func_int16_t_s_s(g_287[0], g_388)))))), 4)) , (*g_155)) == &g_19[(g_318 + 2)][g_318]);
                    (*g_155) = (*g_155);
                }
            }
        }
    }
    for (l_528 = 23; (l_528 <= 43); ++l_528)
    {
        short l_566 = (-1L);
        for (g_388 = 0; (g_388 > 11); g_388++)
        {
            int *l_567 = &g_62[0];
            for (g_60 = 0; (g_60 <= 3); g_60 += 1)
            {
                int l_558 = 0L;
                if ((safe_mod_func_uint8_t_u_u((*l_438), g_62[0])))
                {
                    int ***l_565 = &l_562;
                    int i, j, k;
                    l_527[g_60][g_60][(g_60 + 2)] = (g_287[0] , l_527[g_60][(g_60 + 1)][g_60]);
                    l_558 = l_558;
                    for (g_134 = 3; (g_134 >= 0); g_134 -= 1)
                    {
                        (*l_349) = (((g_134 > (safe_lshift_func_uint8_t_u_u(((((*g_155) != (void*)0) > ((l_561 != ((safe_mul_func_uint8_t_u_u(g_135, (&g_155 == (l_558 , &g_155)))) , l_565)) == g_397)) , l_566), 7))) , 0xD0L) && 6UL);
                    }
                    l_527[g_60][(g_60 + 1)][(g_60 + 1)] = l_567;
                }
                else
                {
                    (*l_438) = 0x8579C1D8L;
                }
                if (l_568[5][8])
                    continue;
            }
            return g_134;
        }
        (*g_155) = (*g_155);
        (*g_196) = (&g_155 != &g_155);
    }
    return g_135;
}







static int * func_2(int * p_3, const unsigned char p_4)
{
    int *l_431 = &g_19[5][0];
    int *l_437 = (void*)0;
    for (g_138 = 0; (g_138 >= (-12)); g_138 = safe_sub_func_int16_t_s_s(g_138, 3))
    {
        unsigned short l_432 = 65535UL;
        (*g_155) = func_44(l_431, (0x9C020679L > (g_62[0] | ((l_432 , (safe_sub_func_int16_t_s_s((((safe_add_func_int8_t_s_s(g_397, (g_135 , g_388))) != l_432) , (-1L)), p_4))) & 0xC601L))), l_437, (*p_3));
    }
    (*g_155) = l_431;
    return p_3;
}







static int * func_5(int * p_6, const short p_7, int p_8, int * p_9, int * p_10)
{
    short l_371 = 0xE4FFL;
    const unsigned l_378 = 1UL;
    int l_385 = 0x63E3B50CL;
    const int *** const l_386 = (void*)0;
    int l_428[6];
    int i;
    for (i = 0; i < 6; i++)
        l_428[i] = 0L;
    for (g_60 = 2; (g_60 >= 0); g_60 -= 1)
    {
        int **l_401 = &g_196;
        int ***l_400 = &l_401;
        const short l_427 = (-4L);
        int i;
        (*g_155) = &g_62[g_60];
        for (g_259 = 2; (g_259 >= 0); g_259 -= 1)
        {
            char l_365 = (-4L);
            int **l_384 = (void*)0;
            int ***l_383 = &l_384;
            const int *l_422 = &g_259;
            for (p_8 = 0; (p_8 <= 2); p_8 += 1)
            {
                unsigned char l_387 = 0x1AL;
                unsigned short l_389 = 0xB514L;
                int i;
                (*g_155) = &g_62[g_259];
                if (((safe_mod_func_uint16_t_u_u((l_365 | g_62[g_259]), p_8)) , (p_8 != (g_287[0] , (((((safe_rshift_func_uint8_t_u_u(((+(safe_lshift_func_int8_t_s_u((~p_7), 5))) >= (safe_unary_minus_func_uint8_t_u(((((l_365 , l_371) , (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(l_365, g_62[1])), l_371)), 0x75L))) != g_62[g_60]) && g_287[0])))), g_19[0][0])) , p_8) == 0L) , l_378) && (*p_6))))))
                {
                    int * const *l_394 = (void*)0;
                    for (l_371 = 0; (l_371 <= 0); l_371 += 1)
                    {
                        int i;
                        if (g_287[l_371])
                            break;
                        (*g_155) = (g_134 , &g_62[g_259]);
                        (*g_155) = (*g_155);
                    }
                    if ((g_259 , (((safe_rshift_func_int8_t_s_u(g_62[g_60], ((safe_lshift_func_uint16_t_u_u(((g_19[0][0] , l_383) == (l_385 , l_386)), l_387)) | ((g_388 || l_389) ^ p_7)))) , 0x2D4C6D43L) & p_7)))
                    {
                        (*p_9) = (safe_mul_func_uint8_t_u_u(((g_287[0] < p_7) , ((safe_mul_func_int8_t_s_s(((p_7 , (((&p_9 != (g_287[0] , l_394)) , (0xC0L | 8L)) | (safe_add_func_int8_t_s_s(((((p_8 , g_397) , p_6) != p_6) && p_8), g_60)))) && (*p_9)), p_8)) , p_8)), 250UL));
                        (*g_155) = &g_62[g_259];
                    }
                    else
                    {
                        unsigned short l_412 = 0UL;
                        (*p_9) = (((safe_div_func_uint8_t_u_u(((l_400 != (void*)0) <= (safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((g_259 , (l_389 != (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_62[1], l_412)), (((void*)0 == &g_18) > l_412))))) , 6UL), 7)), p_8)) , &l_401) == &g_155), 0x97L))), (**l_401))) <= l_387) | (***l_400));
                    }
                    (*g_18) = ((safe_mul_func_uint8_t_u_u(g_388, (safe_lshift_func_int8_t_s_s((((!g_62[0]) & p_8) , p_8), 5)))) < (*g_151));
                }
                else
                {
                    for (l_371 = 2; (l_371 >= 0); l_371 -= 1)
                    {
                        int i;
                        (*l_401) = ((safe_div_func_uint16_t_u_u(0xF834L, (g_62[g_60] ^ g_259))) , p_6);
                        g_62[g_60] = (*p_9);
                    }
                    (*p_6) = (*g_151);
                    for (l_389 = 0; (l_389 <= 1); l_389 += 1)
                    {
                        return &g_19[5][0];
                    }
                }
                for (g_134 = 0; (g_134 <= 0); g_134 += 1)
                {
                    if (((*l_383) == (*l_400)))
                    {
                        return &g_62[0];
                    }
                    else
                    {
                        int i;
                        (*l_383) = &p_6;
                        (***l_383) = (safe_unary_minus_func_int8_t_s(g_287[g_134]));
                        (*p_9) = ((((*g_18) > ((safe_add_func_int16_t_s_s(g_19[4][1], 0xEF18L)) ^ 0xBAL)) ^ (*g_196)) && (**g_155));
                        (*p_6) = g_287[g_134];
                    }
                    for (l_389 = 0; (l_389 <= 0); l_389 += 1)
                    {
                        int i;
                        if (g_287[g_134])
                            break;
                    }
                }
                for (g_135 = 0; (g_135 <= 0); g_135 += 1)
                {
                    (*g_155) = l_422;
                    for (l_365 = 0; (l_365 <= 0); l_365 += 1)
                    {
                        return &g_19[3][1];
                    }
                    (*g_18) = (g_62[2] >= ((~(0x0158L || ((g_135 != (g_135 < g_134)) , (safe_div_func_int32_t_s_s((*g_151), (**g_155)))))) < ((safe_div_func_int8_t_s_s(g_388, ((p_8 < l_427) & p_7))) < p_8)));
                }
            }
            (*g_155) = (*l_401);
            for (g_134 = 2; (g_134 >= 0); g_134 -= 1)
            {
                for (g_388 = 0; (g_388 <= 2); g_388 += 1)
                {
                    (**l_400) = p_9;
                }
            }
        }
        (*p_6) = (l_428[5] && (g_138 > g_138));
        for (g_388 = 0; (g_388 >= 0); g_388 -= 1)
        {
            return p_9;
        }
        for (g_388 = 0; (g_388 >= 0); g_388 -= 1)
        {
            (*g_18) = (l_386 != &g_155);
        }
    }
    return p_9;
}







static int * func_11(char p_12, int * p_13, const int p_14, int * p_15, unsigned p_16)
{
    char l_352 = 0x9AL;
    short l_362 = 6L;
    (*p_13) = (((safe_rshift_func_uint16_t_u_s(((l_352 == 0xB3E9L) <= func_39(&g_60)), 2)) && ((1UL | ((safe_div_func_uint8_t_u_u(((*p_13) , (safe_unary_minus_func_int8_t_s((g_135 , ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(0x6863L, (p_12 >= 1UL))), 0x9E2F6929L)) != l_362), 0x40B1L)) ^ (*p_13)))))), 8L)) > 0x4CFCL)) != 0x15L)) != l_362);
    (*g_155) = (void*)0;
    return &g_62[1];
}







static int func_22(unsigned char p_23, short p_24, int * const p_25)
{
    unsigned l_344 = 0x0240F325L;
    int l_345[7][9] = {{0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}, {0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}, {0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}, {0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}, {0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}, {0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}, {0x0E952917L, 1L, 0x0E952917L, (-4L), 1L, 0x1A7B5C51L, 0xFFD309D1L, 0xFFD309D1L, 0x1A7B5C51L}};
    int **l_348 = &g_18;
    int i, j;
    (*g_196) = ((l_344 > l_345[3][7]) ^ ((g_138 , 0xA97FB238L) <= func_33(((-8L) != ((safe_mul_func_uint16_t_u_u((l_348 != &g_18), (**l_348))) | (func_33(g_19[4][0], p_24, &g_60) < (**l_348)))), (**l_348), (*l_348))));
    (*g_155) = (*g_155);
    (*g_196) = (**l_348);
    return (*p_25);
}







static unsigned short func_28(int p_29, int p_30)
{
    short l_32[2][2];
    int *l_41[6] = {&g_19[1][1], &g_19[4][1], &g_19[1][1], &g_19[4][1], &g_19[1][1], &g_19[4][1]};
    int l_273 = 4L;
    int **l_274 = &l_41[5];
    unsigned char l_286 = 0UL;
    unsigned l_288 = 0UL;
    int l_335[3][3] = {{0xAD74BA81L, 0x0FECEFA5L, 0xAD74BA81L}, {0xAD74BA81L, 0x0FECEFA5L, 0xAD74BA81L}, {0xAD74BA81L, 0x0FECEFA5L, 0xAD74BA81L}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_32[i][j] = (-1L);
    }
    (*l_274) = ((((l_32[0][0] != (((((func_33((((safe_mod_func_int32_t_s_s((+(func_39(l_41[5]) <= (safe_add_func_uint8_t_u_u(g_19[5][1], (safe_lshift_func_int8_t_s_u((&l_41[5] != &g_196), ((safe_add_func_uint32_t_u_u((0xBAE6BA0DL != ((((p_30 == (*g_18)) == 0x96L) , (void*)0) == (void*)0)), p_30)) & p_30))))))), (*g_18))) ^ g_259) & g_259), p_30, &g_19[1][1]) != g_19[0][0]) || 0L) , p_29) | p_29) | p_29)) < l_273) , 0x56802493L) , &l_273);
    (*g_196) = (safe_lshift_func_int16_t_s_u((((**l_274) , &l_41[5]) == (((&l_274 != &l_274) || (safe_mod_func_uint16_t_u_u(func_39((((((safe_rshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((func_39(&p_29) == (p_30 < p_29)) , g_138))), p_30)) | g_259) , (**l_274)), l_286)) > g_19[0][0]) & (**l_274)) && g_134) , &p_29)), g_259))) , &l_41[5])), g_19[0][0]));
    if (p_29)
    {
        return g_287[0];
    }
    else
    {
        char l_291 = (-10L);
        for (g_60 = 5; (g_60 >= 0); g_60 -= 1)
        {
            short l_292 = (-4L);
            int **l_297 = &g_18;
            l_288 = p_29;
            g_134 = (safe_add_func_int32_t_s_s(0x73EC10CDL, p_30));
            for (g_134 = 0; (g_134 <= 5); g_134 += 1)
            {
                int l_295 = 0x064F0C36L;
                char l_317 = 0xE2L;
                int * const l_337 = &g_60;
                if (l_291)
                {
                    int **l_296 = &g_196;
                    p_29 = l_292;
                    g_259 = (+(safe_rshift_func_uint8_t_u_u(g_19[0][0], 1)));
                    if (((l_295 || (g_62[2] ^ (l_296 != l_297))) | ((((-9L) ^ (safe_div_func_int32_t_s_s(l_291, ((safe_unary_minus_func_int16_t_s((g_138 <= ((((&l_41[1] != &l_41[5]) > (-2L)) > (*g_196)) && 0UL)))) ^ g_19[5][0])))) != g_62[1]) , p_30)))
                    {
                        int i;
                        (*g_155) = (*g_155);
                        g_259 = (safe_lshift_func_int8_t_s_s((**l_297), (safe_sub_func_uint16_t_u_u(3UL, ((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s((**l_296), p_30)), ((g_134 <= (safe_rshift_func_uint16_t_u_u((p_30 , ((safe_add_func_uint32_t_u_u((**l_297), (*g_18))) <= (**l_296))), l_295))) ^ l_295))), 0xD54A5A2AL)) != l_317)))));
                        (*g_155) = (p_29 , (*g_155));
                        l_41[g_134] = &p_29;
                    }
                    else
                    {
                        return (**l_296);
                    }
                    g_318 = (*g_18);
                }
                else
                {
                    unsigned short l_336 = 0x4B80L;
                    for (l_291 = 0; (l_291 <= 1); l_291 += 1)
                    {
                        int i, j;
                        if (l_32[l_291][l_291])
                            break;
                    }
                    if ((((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((**l_297), 0)), (safe_rshift_func_uint8_t_u_s(p_30, 6)))), 3)) <= (safe_mod_func_uint32_t_u_u(l_291, (safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(g_62[0], ((l_291 ^ (((g_62[2] == (safe_mul_func_int16_t_s_s(0xDBD2L, l_335[0][0]))) == (l_295 != (**l_297))) ^ 0xE3L)) < l_336))), (*g_196)))))) , l_291))
                    {
                        int *l_338 = &l_273;
                        l_338 = l_337;
                        p_29 = (**l_297);
                    }
                    else
                    {
                        (*l_274) = &p_30;
                    }
                }
                (*l_274) = (*l_274);
                (*l_274) = &p_30;
            }
        }
        (*g_196) = (-1L);
    }
    return p_30;
}







static unsigned char func_33(unsigned short p_34, short p_35, int * p_36)
{
    int *l_271 = (void*)0;
    int l_272 = 0L;
    (*g_196) = l_272;
    return g_134;
}







static char func_39(int * p_40)
{
    int *l_49 = (void*)0;
    int **l_258 = &l_49;
    unsigned l_260 = 9UL;
    l_258 = func_42(func_44(&g_19[4][0], g_19[0][0], l_49, (*g_18)));
    (*g_196) = ((g_60 | ((g_138 && (g_259 , (((((l_260 == ((safe_mod_func_int16_t_s_s(0L, (safe_sub_func_uint16_t_u_u(((l_260 , p_40) != (g_138 , p_40)), g_135)))) || 0xC8495D76L)) , (*p_40)) > g_19[4][0]) , g_62[0]) , g_60))) , (*p_40))) < 1UL);
    return g_259;
}







static int ** func_42(const int * p_43)
{
    char l_143 = 0x46L;
    int **l_236 = (void*)0;
    int **l_257 = &g_18;
    for (g_60 = 0; (g_60 > (-25)); g_60 = safe_sub_func_int8_t_s_s(g_60, 1))
    {
        int *l_132 = &g_62[0];
        int **l_133 = &l_132;
        l_132 = &g_19[0][0];
        (*l_133) = &g_19[0][0];
        for (g_134 = 0; (g_134 <= 2); g_134 += 1)
        {
            int **l_146 = &g_18;
            int i;
            g_62[g_134] = (g_62[g_134] != g_62[g_134]);
            for (g_135 = 20; (g_135 > (-24)); --g_135)
            {
                for (g_138 = 0; (g_138 <= 19); g_138 = safe_add_func_int8_t_s_s(g_138, 6))
                {
                    unsigned char l_144 = 1UL;
                    if (((safe_sub_func_uint8_t_u_u(l_143, g_19[2][0])) == g_62[g_134]))
                    {
                        int *l_145 = &g_62[g_134];
                        (*l_145) = l_144;
                        (*l_145) = (*p_43);
                        return &g_18;
                    }
                    else
                    {
                        return l_146;
                    }
                }
                return &g_18;
            }
            for (g_135 = 2; (g_135 >= 0); g_135 -= 1)
            {
                int i;
                g_62[g_135] = g_62[g_134];
                if ((**l_146))
                {
                    (*l_133) = (g_62[g_135] , &g_135);
                    if ((*g_18))
                        break;
                }
                else
                {
                    if ((*p_43))
                        break;
                }
                (*l_133) = &g_62[0];
            }
        }
    }
    if (l_143)
    {
        const int *l_147 = &g_62[0];
        int *l_150 = &g_62[0];
        unsigned l_168[8] = {4294967288UL, 4294967288UL, 4294967288UL, 4294967288UL, 4294967288UL, 4294967288UL, 4294967288UL, 4294967288UL};
        const unsigned short l_176 = 0x304AL;
        int l_188[8] = {0x383A4A27L, 0x383A4A27L, 0x5C40892BL, 0x383A4A27L, 0x383A4A27L, 0x5C40892BL, 0x383A4A27L, 0x383A4A27L};
        int i;
        l_147 = l_147;
        for (g_138 = (-19); (g_138 == 28); g_138++)
        {
            g_151 = func_44(l_150, g_134, (l_143 , l_150), (*l_150));
        }
        if (l_143)
        {
            int **l_152[8] = {&g_18, &g_18, &l_150, &g_18, &g_18, &l_150, &g_18, &g_18};
            int i;
            g_151 = &g_135;
lbl_199:
            for (g_60 = (-9); (g_60 >= 3); ++g_60)
            {
                int l_158[4][8] = {{0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L}, {0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L}, {0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L}, {0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L, 0x7E7D7187L, 0L}};
                int i, j;
                g_155 = &g_151;
                for (g_134 = 2; (g_134 >= 0); g_134 -= 1)
                {
                    int i;
                    g_62[g_134] = g_62[g_134];
                    (*l_150) = g_62[g_134];
                }
                if ((safe_div_func_uint16_t_u_u(0xE037L, g_62[2])))
                {
                    int *l_159 = &g_135;
                    int * const l_177 = &g_62[0];
                    int **l_178[7];
                    int **l_179 = (void*)0;
                    int **l_180[2];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_178[i] = &l_150;
                    for (i = 0; i < 2; i++)
                        l_180[i] = &l_150;
                    if (((*p_43) <= (l_158[2][1] || ((((void*)0 == l_159) <= (safe_sub_func_uint8_t_u_u((0x81461015L || ((safe_div_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u(g_19[2][0], ((safe_mod_func_int8_t_s_s(0x35L, g_138)) , (*l_159)))) , l_168[3]) , (**g_155)) && (*l_150)), g_62[1])) > 0x44L)), l_158[1][4]))) & (*g_151)))))
                    {
                        (*g_155) = (*g_155);
                    }
                    else
                    {
                        unsigned char l_175[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_175[i] = 0x13L;
                        l_158[2][1] = (*p_43);
                        (*l_159) = (((safe_sub_func_uint32_t_u_u(l_143, (l_143 | (!(!((9UL && (safe_mul_func_uint16_t_u_u((((*l_159) > ((safe_add_func_uint32_t_u_u(g_62[0], l_175[1])) ^ l_175[1])) >= l_176), (((*g_155) != p_43) ^ g_135)))) , l_175[0])))))) ^ g_19[0][0]) & l_143);
                        (*g_155) = (*g_155);
                    }
                    if (l_143)
                        continue;
                    p_43 = l_177;
                }
                else
                {
                    unsigned short l_183 = 0xF400L;
                    int *l_193 = &g_62[0];
                    (*l_150) = 0xB319EDEBL;
                    l_158[3][1] = ((g_62[2] ^ (7L || 0L)) > ((((**g_155) | ((l_183 == 4294967295UL) , ((&g_151 == &p_43) != ((safe_add_func_uint16_t_u_u(0xBDA1L, g_60)) , l_158[2][1])))) , (void*)0) != (*g_155)));
                    if ((l_158[3][6] ^ (safe_sub_func_uint32_t_u_u(((l_188[3] | l_143) > (0UL != ((((65535UL < ((((g_19[0][0] , (safe_div_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_135, l_183)), (*l_150)))) , (void*)0) == l_193) < l_143)) , &l_193) == (void*)0) , g_135))), g_62[0]))))
                    {
                        unsigned char l_194 = 0xCFL;
                        if (l_194)
                            break;
                        (*g_155) = (*g_155);
                    }
                    else
                    {
                        int *l_195 = &g_134;
                        (*l_193) = (-7L);
                        (*g_155) = l_195;
                    }
                }
                (*g_155) = g_196;
            }
            for (g_134 = 1; (g_134 <= 7); g_134 += 1)
            {
                unsigned short l_197 = 65534UL;
                int *l_198 = &g_135;
                (*l_150) = ((0x69L <= (255UL && l_197)) | l_197);
                for (l_197 = 0; (l_197 <= 7); l_197 += 1)
                {
                    (*g_155) = func_44(l_198, g_62[1], &g_138, ((-1L) ^ 0xD7L));
                    for (g_60 = 7; (g_60 >= 1); g_60 -= 1)
                    {
                        int i;
                        (*g_155) = (*g_155);
                    }
                    if ((*p_43))
                        break;
                    for (l_143 = 2; (l_143 <= 7); l_143 += 1)
                    {
                        (*g_196) = (*p_43);
                    }
                }
                for (g_135 = 6; (g_135 >= 0); g_135 -= 1)
                {
                    unsigned l_200 = 1UL;
                    if (g_134)
                        goto lbl_199;
                    if (l_200)
                    {
                        if (l_143)
                            break;
                        return &g_196;
                    }
                    else
                    {
                        int i;
                        (*g_196) = 0L;
                        (*l_150) = (*g_18);
                    }
                }
            }
        }
        else
        {
            unsigned l_203 = 1UL;
            (*l_150) = (((((+(*l_150)) <= (safe_mod_func_uint16_t_u_u(((0UL > l_203) != (l_203 || l_143)), ((&l_188[7] != (*g_155)) & g_135)))) & 0xAD06L) , l_203) == 0x4234L);
            (*l_150) = ((void*)0 != p_43);
            for (l_203 = 25; (l_203 > 24); l_203--)
            {
                for (g_134 = 0; g_134 < 8; g_134 += 1)
                {
                    l_168[g_134] = 4294967286UL;
                }
            }
        }
    }
    else
    {
        unsigned short l_207 = 65528UL;
        int l_208 = (-7L);
        int * const *l_228 = &g_18;
        int **l_235 = &g_18;
        if ((l_143 & g_62[2]))
        {
            unsigned l_206 = 1UL;
            l_208 = ((-1L) != ((((0xE7BAF2F3L | (g_19[5][1] >= (l_143 | l_206))) ^ (l_206 , 0L)) , (*g_18)) && ((((l_143 && l_206) & g_62[2]) || 6UL) > l_207)));
            for (l_143 = (-27); (l_143 >= 19); l_143 = safe_add_func_int8_t_s_s(l_143, 6))
            {
                int l_213[1];
                int l_221[3][3] = {{0x523E7098L, 0x54691793L, 0x523E7098L}, {0x523E7098L, 0x54691793L, 0x523E7098L}, {0x523E7098L, 0x54691793L, 0x523E7098L}};
                char l_224 = 1L;
                int **l_234 = (void*)0;
                int ***l_233 = &l_234;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_213[i] = 0x4C28BF45L;
                if ((+((l_207 & (g_134 | (&p_43 != ((*g_18) , &g_196)))) <= (+(safe_add_func_int8_t_s_s(((g_60 > ((l_213[0] , 4294967294UL) , ((void*)0 != p_43))) >= g_62[1]), l_213[0]))))))
                {
                    return &g_196;
                }
                else
                {
                    short l_214 = 0xEE32L;
                    l_214 = l_207;
                    (*g_155) = p_43;
                    for (g_134 = 0; (g_134 >= (-10)); g_134 = safe_sub_func_int16_t_s_s(g_134, 9))
                    {
                        int l_225 = (-10L);
                        if ((*g_18))
                            break;
                        (*g_196) = (safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_134, (l_221[0][1] > l_143))) , g_19[0][0]), (safe_lshift_func_uint16_t_u_s((l_224 < l_143), (((g_138 <= (0x68L != l_225)) != 0xA3L) < l_143)))));
                    }
                    (*g_155) = p_43;
                }
                (*l_233) = ((((((safe_mul_func_int16_t_s_s((g_19[0][0] , (g_134 ^ (255UL >= 0L))), (+4UL))) , (l_228 == ((g_60 | l_206) , ((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(0UL, l_206)) < g_135), g_19[0][0])) , &g_196)))) & (*p_43)) , (void*)0) == (void*)0) , (void*)0);
                return l_235;
            }
            return l_236;
        }
        else
        {
            unsigned l_237[1];
            int ***l_240 = &l_235;
            int i;
            for (i = 0; i < 1; i++)
                l_237[i] = 1UL;
            (*g_196) = (-8L);
            if ((l_237[0] , (l_237[0] || (safe_sub_func_uint32_t_u_u(l_237[0], ((void*)0 == l_240))))))
            {
                unsigned short l_255 = 0x9E94L;
                if ((safe_mod_func_uint8_t_u_u(((void*)0 != &l_236), (***l_240))))
                {
                    char l_243 = 0xFDL;
                    (*g_155) = (*l_235);
                    l_243 = 0x222C9369L;
                }
                else
                {
                    unsigned short l_250 = 0xA393L;
                    (*g_155) = (((safe_div_func_uint8_t_u_u(6UL, (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_62[0], l_250)), (safe_sub_func_int32_t_s_s(((***l_240) >= ((*p_43) != (safe_rshift_func_int8_t_s_s((g_60 , (l_250 < ((l_255 , &p_43) != &p_43))), 6)))), 1UL)))))) != (***l_240)) , (void*)0);
                    p_43 = p_43;
                    return l_235;
                }
                (*g_196) = (*p_43);
            }
            else
            {
                int *l_256[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_256[i] = (void*)0;
                (*g_196) = (+((&g_155 != ((***l_240) , &g_155)) , (&p_43 != &g_151)));
                p_43 = l_256[1];
                (*g_155) = p_43;
            }
            (*g_155) = (void*)0;
        }
        return l_235;
    }
    return l_257;
}







static const int * func_44(int * p_45, unsigned p_46, int * p_47, int p_48)
{
    int *l_51 = &g_19[0][0];
    int **l_50 = &l_51;
    int **l_52 = &l_51;
    int l_53 = (-6L);
    int l_96 = 0xA47519ADL;
    (*l_50) = (void*)0;
    l_53 = (l_52 == (void*)0);
    for (l_53 = (-27); (l_53 < 17); l_53 = safe_add_func_int16_t_s_s(l_53, 3))
    {
        const unsigned char l_56 = 251UL;
        if ((p_48 || l_56))
        {
            char l_59[5][1];
            int **l_80 = &g_18;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_59[i][j] = 1L;
            }
            for (p_48 = 0; (p_48 > (-12)); p_48 = safe_sub_func_int8_t_s_s(p_48, 6))
            {
                int l_76 = 0xEF2D6A39L;
                unsigned l_84 = 0x97E38F94L;
                for (p_46 = 0; (p_46 <= 0); p_46 += 1)
                {
                    const int *l_109 = &g_19[0][0];
                    const int **l_108 = &l_109;
                    int i, j;
                    for (g_60 = 0; (g_60 >= 0); g_60 -= 1)
                    {
                        int *l_61 = &g_62[0];
                        int i, j;
                        (*l_61) = l_59[(g_60 + 1)][g_60];
                    }
                    if ((l_59[(p_46 + 4)][p_46] , l_59[(p_46 + 4)][p_46]))
                    {
                        int l_63 = 0xC3231A29L;
                        if (l_63)
                            break;
                    }
                    else
                    {
                        int *l_64 = &g_62[0];
                        (*l_64) = 0x116104DBL;
                        (*l_64) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(0L, p_48)), g_19[4][1])), l_56)), ((*l_64) == ((safe_unary_minus_func_int16_t_s((l_56 || (safe_sub_func_uint32_t_u_u(((l_59[0][0] == ((((void*)0 != &g_18) , l_76) & g_60)) <= 0x93B57206L), l_56))))) >= l_76))));
                    }
                    for (g_60 = 0; (g_60 == (-2)); g_60 = safe_sub_func_uint16_t_u_u(g_60, 2))
                    {
                        int *l_79 = &g_62[0];
                        (*l_79) = (*g_18);
                        (*l_52) = &g_19[0][0];
                    }
                    if ((l_80 == &g_18))
                    {
                        unsigned char l_83 = 0x8CL;
                        if ((**l_80))
                            break;
                        l_84 = ((((void*)0 == &g_60) , p_48) & (p_48 > l_83));
                    }
                    else
                    {
                        int *l_97 = &l_96;
                        l_96 = (safe_div_func_int8_t_s_s(0x4BL, (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s(((-1L) | (((0x4779CF81L & (safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_19[5][1], 0xEBL)), 7))) || (safe_sub_func_uint8_t_u_u(g_19[0][0], p_48))) || g_19[2][1])), 3))))));
                        (*l_52) = l_97;
                        (**l_52) = (l_84 && (safe_add_func_uint16_t_u_u(g_19[0][0], ((safe_mul_func_int8_t_s_s((((&g_19[2][0] == l_97) > (safe_rshift_func_int16_t_s_s((**l_80), (safe_mul_func_int8_t_s_s(g_62[0], (((((safe_add_func_uint8_t_u_u((**l_50), g_62[0])) | ((void*)0 != l_108)) , (*p_45)) , p_48) , 255UL)))))) < p_48), 0xBFL)) && (*p_45)))));
                    }
                }
            }
        }
        else
        {
            unsigned char l_129 = 0xA8L;
            for (l_96 = 0; (l_96 <= 23); l_96 = safe_add_func_int16_t_s_s(l_96, 2))
            {
                if (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_48, g_62[0])), 6)) < (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((&p_45 == &g_18), (g_62[0] > 0x2CL))) > 0x34BEL), 7))))
                {
                    int *l_122 = (void*)0;
                    int *l_123 = &g_62[0];
                    (*l_123) = ((p_46 != g_19[4][0]) >= (safe_mul_func_int8_t_s_s(((void*)0 != (*l_50)), p_48)));
                    for (p_48 = 0; (p_48 != 1); p_48 = safe_add_func_uint32_t_u_u(p_48, 1))
                    {
                        unsigned char l_126 = 0x22L;
                        (*l_52) = (void*)0;
                        g_60 = l_126;
                    }
                    for (p_46 = 28; (p_46 > 39); p_46++)
                    {
                        l_129 = (p_48 > p_48);
                    }
                    (*l_52) = &g_19[0][0];
                }
                else
                {
                    (*l_52) = &p_48;
                }
            }
        }
        (*l_52) = &p_48;
    }
    return &g_62[0];
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_19[i][j], "g_19[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
