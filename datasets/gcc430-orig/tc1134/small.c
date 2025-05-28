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



static unsigned short g_11 = 65535UL;
static int g_23 = 1L;
static int *g_53 = (void*)0;
static char g_62 = 1L;
static int g_67[8] = {0xAC3F4083L, 0xAC3F4083L, 0x7A12536DL, 0xAC3F4083L, 0xAC3F4083L, 0x7A12536DL, 0xAC3F4083L, 0xAC3F4083L};
static char g_76 = 0x5BL;
static volatile int g_80 = (-6L);
static volatile int g_81 = 0x8B8566A4L;
static int g_82 = 3L;
static unsigned g_87 = 0xBB7C4EAEL;
static int g_121 = 0xD5353597L;
static unsigned short g_125 = 0x21BEL;
static unsigned char g_135 = 255UL;
static unsigned char *g_134 = &g_135;
static short g_140 = (-7L);
static volatile short g_146[4] = {1L, 1L, 1L, 1L};
static volatile short *g_145 = &g_146[1];
static int g_170 = 1L;
static int * const g_169 = &g_170;
static unsigned g_187 = 4294967288UL;
static int **g_221 = &g_53;
static volatile unsigned short g_244 = 65534UL;
static volatile unsigned short *g_243 = &g_244;
static volatile unsigned short **g_242 = &g_243;
static unsigned short *g_266[3][6][5] = {{{&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}}, {{&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}}, {{&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}, {&g_125, &g_11, &g_11, &g_11, &g_11}}};
static unsigned short **g_265 = &g_266[2][2][1];
static char g_300 = 0xEDL;
static unsigned short g_364 = 0UL;
static short *g_417 = &g_140;
static short **g_416 = &g_417;
static unsigned g_437 = 0x71D9B870L;
static char g_438 = 0x2DL;
static int g_483 = 0x3736988EL;
static volatile unsigned short g_493 = 0xBEEAL;
static unsigned char g_551 = 0x41L;
static volatile int *g_585 = &g_80;
static volatile int **g_584 = &g_585;
static volatile int ***g_583[1][10] = {{&g_584, &g_584, &g_584, &g_584, &g_584, &g_584, &g_584, &g_584, &g_584, &g_584}};
static volatile int ****g_582 = &g_583[0][9];
static int ***g_596[4] = {&g_221, &g_221, &g_221, &g_221};
static volatile unsigned g_609 = 0x62B32FD3L;
static volatile unsigned *g_608 = &g_609;
static volatile unsigned **g_607 = &g_608;
static unsigned g_636[4] = {4294967291UL, 0x506BE9C0L, 4294967291UL, 0x506BE9C0L};
static unsigned *g_635 = &g_636[3];
static const int *g_639 = &g_483;
static int g_662 = 0x32945B6AL;
static int **g_674 = &g_53;
static int *g_678[1][3][6] = {{{(void*)0, &g_82, (void*)0, &g_82, (void*)0, &g_82}, {(void*)0, &g_82, (void*)0, &g_82, (void*)0, &g_82}, {(void*)0, &g_82, (void*)0, &g_82, (void*)0, &g_82}}};
static int *g_679 = &g_67[1];
static short g_696 = (-1L);



static const char func_1(void);
static unsigned func_12(short p_13, char p_14);
static char func_18(unsigned p_19);
static int * func_24(int * p_25, int p_26);
static int * func_27(const int * p_28, char p_29);
static unsigned short func_32(int * p_33, int * const p_34, int * p_35);
static int * func_36(int * p_37, unsigned char p_38);
static int * func_39(int * p_40, int * p_41, int p_42, const unsigned p_43);
static int * func_44(const char p_45, const short p_46);
static unsigned func_47(int * p_48, int * p_49, unsigned char p_50, int p_51, const int * p_52);
static const char func_1(void)
{
    int l_10 = 0xCCDDD1D8L;
    unsigned char l_20 = 246UL;
    int l_719 = 0x27499C8AL;
    unsigned *l_727 = &g_437;
    char *l_728 = &g_62;
    short *l_729 = &g_140;
    if ((safe_rshift_func_int8_t_s_u(((l_719 = (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((l_10 | 0xF576C516L), (0x516A205BL == 0x06C902DAL))) != (g_11 <= 0xF4L)) > func_12((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(func_18(l_20))), l_20)), g_11)), 2)), g_662))) <= (-1L)), l_20)))
    {
        int l_722[1];
        int i;
        for (i = 0; i < 1; i++)
            l_722[i] = 1L;
        l_722[0] ^= (safe_lshift_func_int8_t_s_s(l_719, 7));
    }
    else
    {
        int * const *l_723 = &g_678[0][0][1];
        unsigned *l_724 = &g_87;
        (*g_169) &= ((+l_20) && (((void*)0 != l_723) > ((((**g_242) | (**g_265)) && (g_636[3] = ((*l_724) = 9UL))) < g_11)));
    }




    ;
    ;
    (*g_674) = func_44(((*l_728) &= (safe_lshift_func_int16_t_s_s(((func_18(((*l_727) = (**g_607))) >= g_82) == (-1L)), 2))), ((*l_729) ^= func_18(g_121)));

    ;
    return g_80;
}







static unsigned func_12(short p_13, char p_14)
{
    int *l_22 = &g_23;
    int l_136 = 0x142B0CC6L;
    int **l_167 = (void*)0;
    int **l_168 = &g_53;
    const int l_439 = 0x1E6D9B8BL;
    int *l_690 = &g_23;
    short *l_695 = &g_696;
    unsigned *l_697 = (void*)0;
    unsigned *l_698[8][9] = {{(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}, {(void*)0, &g_437, (void*)0, &g_437, (void*)0, &g_437, &g_187, &g_437, (void*)0}};
    int ** const *l_700 = &l_168;
    int ** const **l_699 = &l_700;
    int *l_703 = (void*)0;
    int *l_704 = &g_23;
    int i, j;
    l_22 = l_22;
    (*l_168) = func_24(func_27(l_22, ((g_438 ^= ((0x96L | (((safe_rshift_func_int16_t_s_u(0x4236L, func_32(((*l_168) = func_36(func_39(func_44((func_47(l_22, (g_53 = l_22), g_23, (*l_22), l_22) <= g_11), p_13), l_22, l_136, g_11), (*g_134))), g_169, &l_136))) < 0UL) | g_437)) == 1L)) <= l_439)), p_14);

    ;


    ;
    (*g_679) &= func_47((*g_674), l_690, (safe_lshift_func_int8_t_s_u(((func_18((g_187 ^= (safe_sub_func_int16_t_s_s(((*g_417) = 0x1439L), ((*l_695) = (*l_22)))))) <= ((void*)0 != l_699)) >= (p_13 <= p_14)), p_14)), (*g_169), (***l_699));

    ;
    if ((safe_add_func_int16_t_s_s((p_14 <= 5UL), (*l_690))))
    {
        int *l_709 = &l_136;
        int **l_710 = &l_22;
        (*g_53) = (***l_700);
        (*l_710) = ((*l_168) = l_709);

        ;
        ;
        for (g_300 = (-19); (g_300 != 24); ++g_300)
        {
            int *l_715 = &g_67[0];
            const int *l_716[4][1];
            const int **l_717[3][5] = {{(void*)0, (void*)0, &g_639, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_639, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_639, (void*)0, (void*)0}};
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_716[i][j] = (void*)0;
            }
            (*g_585) = (safe_div_func_uint32_t_u_u(p_14, func_47(l_715, l_715, (p_14 != (**g_416)), p_13, (g_639 = l_716[2][0]))));

            ;
            ;
            (*g_221) = (*g_674);
            (**l_700) = (***l_699);
            if ((**l_710))
                continue;
        }

        ;
        ;
    }
    else
    {
        int *l_718 = (void*)0;
        l_718 = (***l_699);

        ;
    }

    ;
    ;
    ;
    return p_13;


}







static char func_18(unsigned p_19)
{
    int l_21 = 1L;
    l_21 |= (g_11 && 0x31C5L);
    return g_11;
}







static int * func_24(int * p_25, int p_26)
{
    const unsigned l_686 = 0x207AF5C8L;
    int *l_689 = &g_82;
    for (g_87 = 0; (g_87 < 48); ++g_87)
    {
        int *l_687 = (void*)0;
        int *l_688 = &g_23;
        for (g_300 = (-10); (g_300 >= 18); g_300 = safe_add_func_uint8_t_u_u(g_300, 1))
        {
            if (l_686)
                break;
            return l_687;


        }
        return l_688;


    }
    return l_689;


}







static int * func_27(const int * p_28, char p_29)
{
    short l_446 = 0L;
    int l_457 = 1L;
    unsigned *l_464[6][3][2] = {{{&g_437, &g_437}, {&g_437, &g_437}, {&g_437, &g_437}}, {{&g_437, &g_437}, {&g_437, &g_437}, {&g_437, &g_437}}, {{&g_437, &g_437}, {&g_437, &g_437}, {&g_437, &g_437}}, {{&g_437, &g_437}, {&g_437, &g_437}, {&g_437, &g_437}}, {{&g_437, &g_437}, {&g_437, &g_437}, {&g_437, &g_437}}, {{&g_437, &g_437}, {&g_437, &g_437}, {&g_437, &g_437}}};
    unsigned short *l_496[2][1][2];
    int *l_516 = &g_23;
    int ***l_588[8][4][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
    int *l_597 = &g_483;
    int *l_598 = (void*)0;
    int ****l_602 = &l_588[6][1][0];
    int *l_618 = &g_82;
    const int l_625[3] = {0L, 0L, 0L};
    char * const l_673 = &g_76;
    unsigned *l_680 = &g_187;
    const int *l_681 = &l_625[0];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_496[i][j][k] = &g_11;
        }
    }
    if ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(p_29, g_187)) && (safe_add_func_int16_t_s_s(l_446, (*g_145)))), ((l_446 == (0x1035L >= 0x593AL)) | (safe_div_func_int32_t_s_s(((void*)0 != p_28), 0xE41395B5L))))))
    {
        int **l_453[9][6][4] = {{{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53, &g_53}}};
        short l_533 = 0x06E8L;
        int *l_553 = &l_457;
        int ****l_600 = &g_596[3];
        int *l_620[1];
        unsigned l_663 = 0x911948A0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_620[i] = &g_121;
        if (((safe_div_func_uint8_t_u_u(func_18(g_146[1]), (safe_div_func_int16_t_s_s((*g_417), p_29)))) >= (l_453[4][3][2] == &p_28)))
        {
            const unsigned *l_476[5] = {&g_437, &g_437, &g_437, &g_437, &g_437};
            const unsigned **l_475[10][4][6] = {{{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}, {{&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}, {&l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[3], &l_476[1]}}};
            unsigned short *l_497[10] = {&g_364, &g_11, &g_364, &g_11, &g_364, &g_11, &g_364, &g_11, &g_364, &g_11};
            int i, j, k;
            for (g_170 = 26; (g_170 == (-14)); --g_170)
            {
                int *l_456 = &g_121;
                int l_505 = 0L;
                (*g_221) = l_456;

                ;
                l_457 ^= (*l_456);
                for (g_187 = (-27); (g_187 <= 43); g_187 = safe_add_func_uint16_t_u_u(g_187, 1))
                {
                    for (g_300 = 0; (g_300 >= 25); g_300 = safe_add_func_int32_t_s_s(g_300, 2))
                    {
                        (**g_221) = ((*p_28) <= (*g_169));
                        return l_456;


                    }
                }
                for (g_187 = 0; (g_187 <= 3); g_187 += 1)
                {
                    unsigned **l_502 = &l_464[0][1][1];
                    char *l_503 = &g_438;
                    int l_504 = 1L;
                    int i;
                    (*g_221) = &g_67[(g_187 + 1)];

                    ;
                    for (g_364 = 0; (g_364 <= 3); g_364 += 1)
                    {
                        unsigned **l_465 = &l_464[0][1][1];
                        unsigned *l_472 = &g_87;
                        char *l_492 = &g_62;
                        int i, j, k;
                        (*l_456) ^= (safe_add_func_uint16_t_u_u((((*l_465) = l_464[0][1][1]) == p_28), ((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((((*l_472) = (safe_div_func_int16_t_s_s((-1L), 0x11A5L))) > (safe_mod_func_int8_t_s_s((((void*)0 != l_475[9][0][3]) ^ (+(safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((**g_221) > ((*p_28) ^ (safe_lshift_func_int16_t_s_u(p_29, l_446)))), 3)), 4)))), g_483))), (*g_134))), 0x1D1CFE56L)) == g_67[(g_187 + 1)])));
                        (*l_456) &= (((*l_492) = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*l_472) = p_29), (safe_rshift_func_uint8_t_u_s((func_18(g_187) < (safe_div_func_uint32_t_u_u((p_29 > (*g_417)), (0x82L || p_29)))), 4)))), ((((p_29 && g_67[(g_187 + 1)]) || 1UL) | (**g_416)) == 0xDC81L)))) & 0L);
                        (*l_456) = (g_493 && ((*l_456) || ((**g_221) = (-10L))));
                        if ((*p_28))
                            continue;
                    }
                    l_505 |= (0xAF2135F3L >= ((*g_134) & ((((**g_221) = (safe_mod_func_uint16_t_u_u((((*l_503) = (((l_496[1][0][1] != ((*g_265) = l_497[0])) == (safe_div_func_uint16_t_u_u((g_67[(g_187 + 1)] & (((safe_add_func_uint16_t_u_u((*g_243), (((*l_502) = l_456) != &g_437))) ^ (((0UL <= (*l_456)) & (*p_28)) & p_29)) < p_29)), 0xCF38L))) | (**g_221))) & g_364), 1UL))) >= l_504) || (*g_53))));
                }

                ;
            }



            p_28 = p_28;
        }
        else
        {
            unsigned short l_522[8] = {0UL, 0x00C0L, 0UL, 0x00C0L, 0UL, 0x00C0L, 0UL, 0x00C0L};
            int l_542 = (-1L);
            int ***l_546 = (void*)0;
            int * const l_547 = &g_67[0];
            unsigned **l_606 = &l_464[1][1][0];
            unsigned short l_616[8] = {0x14DFL, 65535UL, 0x14DFL, 65535UL, 0x14DFL, 65535UL, 0x14DFL, 65535UL};
            int i;
            for (g_76 = 0; (g_76 == (-16)); g_76--)
            {
                int *l_531 = (void*)0;
                unsigned short *l_537 = &g_125;
                for (g_364 = (-21); (g_364 <= 7); g_364 = safe_add_func_int8_t_s_s(g_364, 2))
                {
                    int *l_521 = &g_82;
                    unsigned short *l_536 = &l_522[5];
                    for (p_29 = 4; (p_29 < 21); p_29++)
                    {
                        const int **l_512 = (void*)0;
                        const int *l_514 = &g_67[7];
                        const int **l_513 = &l_514;
                        int *l_515 = &l_457;
                        unsigned *l_532 = &g_87;
                        (*l_513) = p_28;

                        ;
                        (*l_513) = func_39(l_515, l_516, ((((*l_521) = (l_533 = ((*l_516) = (p_29 && (((*l_532) = ((safe_add_func_int8_t_s_s((!(safe_add_func_int8_t_s_s(func_47(func_39(func_39(func_39(l_521, &g_82, l_522[4], (safe_lshift_func_int8_t_s_u(((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(65535UL, l_522[6])) > (&g_266[2][2][1] != (void*)0)), 0x2AC2L)), (**g_265))) | p_29), (*g_134)))), l_531, (*g_169), g_187), &g_23, (*p_28), (*l_514)), l_515, (*g_134), (*p_28), p_28), 0x15L))), g_11)) && (*l_516))) && (*p_28)))))) ^ (**g_416)) && 0xA6L), p_29);

                        ;
                        if ((*p_28))
                            break;
                    }
                    g_483 ^= ((~func_47(func_39(&g_67[6], &l_457, (*g_169), g_146[1]), &g_483, ((safe_mod_func_uint16_t_u_u((((((0x1DA84BA1L >= (l_536 != l_537)) <= 0x45CEL) == p_29) & (*l_516)) && p_29), (**g_416))) < 65535UL), (*g_169), l_531)) > g_82);

                    ;
                    (*g_53) &= ((void*)0 == l_516);
                }
            }
            if (((*g_169) = l_522[4]))
            {
                int ** const *l_543 = (void*)0;
                int ***l_544 = (void*)0;
                unsigned short l_552 = 1UL;
                if ((*p_28))
                {
                    int ****l_545[8] = {&l_544, &l_544, &l_544, &l_544, &l_544, &l_544, &l_544, &l_544};
                    unsigned char *l_550 = &g_551;
                    int i;
                    for (g_81 = 0; g_81 < 4; g_81 += 1)
                    {
                        g_146[g_81] = 0x5121L;
                    }
                    (*g_169) = (safe_add_func_uint32_t_u_u((p_29 != 0x266B3823L), ((safe_rshift_func_uint16_t_u_u(l_522[3], func_18((((*l_516) ^= (l_542 ^= p_29)) ^ ((l_543 = (void*)0) != (l_546 = l_544)))))) >= (l_446 <= p_29))));
                    l_542 &= (*g_169);
                    l_457 |= (((void*)0 == &p_28) || (func_32(&g_67[1], l_547, &g_483) > ((p_29 | p_29) ^ (safe_div_func_uint8_t_u_u((l_552 = ((*l_550) = (*g_134))), p_29)))));


                }
                else
                {
                    short *l_554[7] = {&l_446, (void*)0, &l_446, (void*)0, &l_446, (void*)0, &l_446};
                    int i;
                    if ((*l_516))
                    {
                        l_516 = (void*)0;

                        ;
                        return &g_67[5];


                    }
                    else
                    {
                        l_516 = &l_457;

                        ;
                        l_553 = func_36(&l_457, p_29);

                        ;
                        (*l_547) = func_18(func_18((g_170 != ((-10L) != (l_554[0] != (*g_416))))));
                    }

                    ;
                    ;
                }


                ;
                ;
                for (g_62 = (-9); (g_62 == 5); g_62 = safe_add_func_uint32_t_u_u(g_62, 6))
                {
                    (*l_516) |= (*l_547);
                }
            }
            else
            {
                int * const l_565 = &g_82;
                for (p_29 = 0; (p_29 > (-28)); p_29 = safe_sub_func_int8_t_s_s(p_29, 4))
                {
                    int l_562[4][4][5] = {{{4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}}, {{4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}}, {{4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}}, {{4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}, {4L, 4L, 0xF8B28981L, 0x7CF9725AL, 0x9BE0D3AEL}}};
                    int l_563 = 0x86491656L;
                    int i, j, k;
                    for (g_82 = 7; (g_82 >= 0); g_82 -= 1)
                    {
                        int *l_559[1][10] = {{&g_483, &g_483, &g_67[g_82], &g_483, &g_483, &g_67[g_82], &g_483, &g_483, &g_67[g_82], &g_483}};
                        char *l_564 = &g_300;
                        int **l_566 = &l_516;
                        int i, j;
                        l_559[0][2] = &g_67[g_82];
                        (*g_221) = &l_457;

                        ;
                    }
                    (*l_516) &= ((safe_div_func_uint8_t_u_u(((*g_134) = 1UL), g_483)) != (*l_547));
                    (*l_565) &= (*p_28);
                }


                (*l_547) &= (*p_28);
                for (g_364 = 0; (g_364 != 23); g_364++)
                {
                    (*l_547) = (p_28 != p_28);
                    for (g_23 = 24; (g_23 >= (-28)); g_23--)
                    {
                        unsigned char l_581 = 0xAFL;
                        (*g_169) |= (safe_sub_func_uint16_t_u_u(0UL, (p_29 > (p_29 & ((*g_417) ^= (((*g_134) ^= ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_29, p_29)), (((p_29 <= (*g_243)) >= (l_581 & (*l_516))) || 0x1CL))), 0x31L)) >= (*p_28))) < 0x82L))))));
                        (*l_547) ^= ((void*)0 != g_582);
                    }
                    for (g_438 = (-7); (g_438 != 20); g_438++)
                    {
                        unsigned l_589 = 0xA59DCF31L;
                        (*l_547) &= (l_588[1][1][0] != &l_453[4][1][3]);
                        (*l_547) ^= ((l_589 = (*p_28)) > (*g_169));
                        (*l_565) = func_18(g_493);
                    }
                }
                for (g_483 = 0; (g_483 > (-8)); g_483 = safe_sub_func_int8_t_s_s(g_483, 3))
                {
                    for (l_533 = 3; (l_533 >= 0); l_533 -= 1)
                    {
                        (*g_585) = (safe_sub_func_int16_t_s_s(((*g_417) = 9L), (*l_565)));
                    }
                }
            }


            ;
            ;
            (*g_221) = func_39(&g_67[4], ((*g_221) = &g_170), (*p_28), p_29);

            ;
            for (g_87 = 0; (g_87 <= 3); g_87 += 1)
            {
                int ****l_594 = &l_588[3][2][0];
                int ****l_595[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_595[i] = (void*)0;
                (*l_516) = ((g_596[3] = ((*l_594) = l_546)) != &l_453[6][1][3]);
                if (((*l_516) = func_47(l_597, l_598, ((*g_134) = g_146[g_87]), (*p_28), p_28)))
                {
                    int *l_599 = &g_170;
                    unsigned l_605[3][8][5] = {{{0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}}, {{0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}}, {{0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}, {0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L, 4294967295UL, 0x2BB9EBD2L}}};
                    int i, j, k;
                    (*g_221) = l_599;

                    ;
                    if ((****g_582))
                        break;
                    for (g_23 = 0; (g_23 >= 0); g_23 -= 1)
                    {
                        int *****l_601[2][8] = {{&l_595[0], &l_595[0], &l_600, &l_595[0], &l_595[0], &l_600, &l_595[0], &l_595[0]}, {&l_595[0], &l_595[0], &l_600, &l_595[0], &l_595[0], &l_600, &l_595[0], &l_595[0]}};
                        int i, j;
                        (*g_53) ^= ((&g_583[0][5] != (l_602 = l_600)) || ((g_596[1] = &g_221) != (*g_582)));

                        ;
                    }
                    (****g_582) = ((((*g_169) = (**g_221)) == ((g_62 || 0x4E04A876L) || (safe_mod_func_int16_t_s_s(((-7L) >= ((*p_28) != ((l_605[2][5][3] > ((*p_28) & (*p_28))) != ((l_606 != g_607) > (*p_28))))), p_29)))) > p_29);
                }
                else
                {
                    int *l_612 = (void*)0;
                    int *l_613 = &l_457;
                    if ((func_47(l_612, ((*g_221) = func_39((*g_221), l_613, (safe_rshift_func_int8_t_s_u(((+((((*l_553) = ((void*)0 != (***g_582))) != (((*g_417) = (+p_29)) & (0x28D90598L < (*p_28)))) < (p_29 != (*p_28)))) & 0xEFL), 3)), p_29)), l_616[5], (****g_582), p_28) < 0UL))
                    {
                        int *l_617 = &g_170;
                        (***g_582) = (***g_582);
                        (*g_221) = l_617;

                        ;
                    }
                    else
                    {
                        char l_619 = 7L;
                        (*g_221) = func_39(l_613, ((*g_221) = (*g_221)), (*p_28), (*g_608));

                        ;
                        (*l_618) |= ((*l_613) != ((*g_417) |= (0x004EL && func_47((*g_221), l_618, (+p_29), ((((*l_613) | ((l_619 = (*g_169)) <= (func_18(func_18(p_29)) != g_146[1]))) ^ p_29) | 4294967286UL), (*g_221)))));

                        ;
                        (*l_618) = (*p_28);
                    }

                    ;
                }
                for (g_62 = 0; (g_62 <= 0); g_62 += 1)
                {
                    int *l_621 = &l_457;
                    unsigned char l_626 = 0x8AL;
                    unsigned char l_640 = 0x25L;
                    if ((*p_28))
                    {
                        (*l_553) = ((!(*g_145)) | p_29);
                        l_621 = l_620[0];

                        ;
                        (*l_618) = ((*l_547) = (safe_div_func_int16_t_s_s((*g_145), p_29)));
                    }
                    else
                    {
                        int *l_624 = &g_82;
                        p_28 = l_624;

                        ;
                        (*g_221) = func_39((*g_221), l_621, (*g_585), l_625[0]);

                        ;
                        (*g_169) = l_626;
                    }

                    ;
                    (*l_618) |= (0x57EACDEBL == p_29);
                    for (g_82 = 7; (g_82 >= 0); g_82 -= 1)
                    {
                        int i;
                        (*g_585) = (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((func_47(&l_542, &l_542, ((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(2L, l_522[g_82])) >= ((**g_416) = (((void*)0 == p_28) || ((g_635 = l_464[0][1][1]) != &g_87)))), (safe_lshift_func_int16_t_s_u(0xDF85L, 5)))) < g_493), (*p_28), g_639) || (*g_134)), 14)), (*l_621))) | 1UL) != l_640);

                        ;
                    }
                    for (g_187 = 0; (g_187 <= 3); g_187 += 1)
                    {
                        int *l_645 = &l_457;
                        (****g_582) = (p_29 & (safe_lshift_func_int16_t_s_s(((*g_134) == 0xFDL), (safe_add_func_int8_t_s_s(func_47(l_645, l_621, p_29, (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_18((**g_607)), ((safe_sub_func_int16_t_s_s((-10L), p_29)) < 0x62L))), 0xCF42L)), 6UL)), p_28), (*g_134))))));

                        ;
                        (*g_169) &= func_47(func_39(func_39(func_39((*g_221), l_621, (safe_add_func_int16_t_s_s(0x05FBL, (((((~((*g_145) > ((((*g_134) & p_29) == (g_437 && (g_551 = (p_29 < (safe_mod_func_int32_t_s_s((*p_28), 0xC461FC06L)))))) != 0xFF40L))) >= (**g_265)) ^ g_438) | (*p_28)) & (-1L)))), p_29), l_645, (*l_621), (*l_645)), (*g_221), (*l_645), g_62), l_645, (*g_134), (*l_553), p_28);
                        if ((*p_28))
                            continue;
                        (*g_585) &= func_47((*g_221), func_39(l_621, l_645, (*p_28), (*l_547)), ((*p_28) | (*p_28)), g_662, p_28);
                    }
                }
            }

            ;
            ;

            ;
            ;
        }



        ;

        ;
        ;

        ;
        ;
        (*l_618) = l_663;
    }
    else
    {
        int **l_676[6] = {&g_53, (void*)0, &g_53, (void*)0, &g_53, (void*)0};
        int *l_677 = (void*)0;
        int i;
        for (g_140 = (-28); (g_140 < (-20)); ++g_140)
        {
            int *l_672[10][4][6] = {{{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}, {{&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}, {&g_82, &g_67[0], &l_457, &g_67[6], (void*)0, &g_121}}};
            int **l_675 = &g_53;
            int i, j, k;
            (****g_582) = (*p_28);
            (*l_597) &= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((func_47(l_672[9][0][2], l_672[9][0][2], (l_673 == (void*)0), (((**g_265) & ((**g_582) != (l_676[3] = (l_675 = g_674)))) <= func_47(l_677, l_672[2][1][1], p_29, (*p_28), l_677)), p_28) != (-1L)), 0x98ED4BD7L)) && p_29) == (*g_134)), 2)), (*g_635)));

            ;
        }
    }



    ;

    ;

    ;
    ;
    (*l_618) = ((func_47(g_678[0][1][0], func_39(g_679, func_44(g_438, (**g_416)), p_29, ((*l_680) = p_29)), (*g_134), p_29, l_681) & p_29) != g_140);

    ;
    return (*g_674);


}







static unsigned short func_32(int * p_33, int * const p_34, int * p_35)
{
    int l_173 = 8L;
    int *l_176 = &g_170;
    int *l_181 = &g_82;
    int **l_269 = &l_181;
    unsigned char *l_298[8][4][4] = {{{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}, {{&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}, {&g_135, (void*)0, &g_135, &g_135}}};
    unsigned l_366 = 0x087561C7L;
    unsigned short **l_413 = &g_266[2][3][0];
    int i, j, k;
    (*l_176) = ((safe_sub_func_int16_t_s_s(0x0EDBL, l_173)) ^ ((safe_mod_func_int32_t_s_s((g_82 |= func_47(&g_23, l_176, (safe_sub_func_uint32_t_u_u(((*l_176) != (*l_176)), (safe_sub_func_int32_t_s_s((*p_33), 4294967295UL)))), ((*p_35) &= (l_181 != (void*)0)), &l_173)), 0x9B0FDDEAL)) & (*l_176)));

    ;
    if (((void*)0 != &p_34))
    {
        int l_184 = (-4L);
        int *l_185 = &g_23;
        (*p_35) = (*p_34);
        for (g_23 = 0; (g_23 == 3); ++g_23)
        {
            unsigned *l_186 = &g_187;
            int *l_188 = &g_121;
            int l_189 = 0xBFDF1D08L;
            const int l_190 = 1L;
            int **l_191[9][8];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 8; j++)
                    l_191[i][j] = &l_188;
            }
            l_184 = (*l_181);
        }
        return (*l_185);
    }
    else
    {
        int *l_233 = &g_170;
        unsigned l_270 = 4294967295UL;
        l_233 = (*g_221);

        ;
        for (g_76 = (-23); (g_76 != 13); ++g_76)
        {
            unsigned short *l_246 = &g_125;
            unsigned short **l_245 = &l_246;
            int l_255 = 0xF2FB4231L;
            for (g_62 = 0; (g_62 <= 7); g_62 += 1)
            {
                unsigned short *l_237[8][1] = {{&g_125}, {&g_125}, {&g_125}, {&g_125}, {&g_125}, {&g_125}, {&g_125}, {&g_125}};
                unsigned short **l_236 = &l_237[5][0];
                int ***l_239[6] = {(void*)0, &g_221, (void*)0, &g_221, (void*)0, &g_221};
                int ***l_241 = &g_221;
                int i, j;
            }
            for (l_173 = 0; (l_173 <= 0); l_173 = safe_add_func_uint32_t_u_u(l_173, 5))
            {
                short *l_304 = &g_140;
                short **l_303[1][6];
                short *l_305 = &g_140;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_303[i][j] = &l_304;
                }
                (*g_221) = (*g_221);
                (*g_53) &= (l_246 != (l_305 = (void*)0));

                ;
            }
            for (g_23 = 0; (g_23 == 25); g_23++)
            {
                int ***l_312 = &l_269;
                (*g_221) = (*g_221);
            }
        }
    }
    if ((*p_34))
    {
        char l_340 = 0x16L;
        int *l_395 = &g_67[0];
        short *l_402 = (void*)0;
        short **l_429 = &l_402;
        if ((!(*g_53)))
        {
            int l_319 = 0xCBC9E5EEL;
            int l_339 = 0xA41384D2L;
            int l_361[5] = {0x8AD69F50L, 0xFF8A4D87L, 0x8AD69F50L, 0xFF8A4D87L, 0x8AD69F50L};
            unsigned short * const l_387 = &g_364;
            unsigned l_388 = 0x2C7C98F0L;
            char *l_398 = &g_76;
            const int *l_399 = &l_319;
            int i;
            for (g_121 = 20; (g_121 != (-14)); g_121 = safe_sub_func_uint16_t_u_u(g_121, 9))
            {
                unsigned l_338 = 4294967291UL;
                if ((safe_sub_func_int8_t_s_s(func_47((*g_221), p_35, l_319, ((*l_181) = (safe_lshift_func_int8_t_s_s(((*l_181) > (((*g_134) == ((safe_mod_func_uint8_t_u_u((+(safe_sub_func_uint16_t_u_u(((l_339 = ((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(func_18((safe_add_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((*g_53), g_67[0])) == (safe_rshift_func_uint16_t_u_s((*l_181), 4))) & 0x9B8FF13EL) || l_338), 255UL))), 8)), 9L)), (*g_145))) | (**l_269))) > (*l_181)), (*l_181)))), g_67[0])) != g_87)) >= l_338)), l_340))), p_35), l_340)))
                {
                    int l_350[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_350[i] = 0xEEA15874L;
                    for (g_62 = 0; (g_62 >= (-12)); --g_62)
                    {
                        unsigned *l_347 = &l_338;
                        char *l_351 = (void*)0;
                        char *l_352 = (void*)0;
                        unsigned short *l_362 = (void*)0;
                        unsigned short *l_363 = &g_364;
                        unsigned *l_365[9][6] = {{&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87}};
                        int i, j;
                        (*l_269) = ((*g_221) = p_35);



                        if ((*p_35))
                            continue;
                        p_33 = (*g_221);


                        l_366 ^= ((**g_221) = (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((((*l_347) = 0x90644564L) != (*p_33)) > ((*p_35) || (l_350[0] = ((**g_221) < (safe_div_func_uint8_t_u_u(((*g_134) || (g_76 = (~l_350[0]))), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((0xC3FCL ^ ((*l_363) ^= ((g_125 && (((safe_mod_func_int8_t_s_s(func_18(l_361[0]), 0x82L)) != (**l_269)) == 0x029FDCDEL)) < g_11))), l_350[0])), 0)), (*g_134))))))))), (**g_242))), (-1L))));
                    }


                    for (g_170 = 3; (g_170 >= 1); g_170 -= 1)
                    {
                        int i;
                        (**l_269) ^= l_361[(g_170 + 1)];
                    }
                }
                else
                {
                    unsigned short l_389 = 0x37CCL;
                    int *l_392 = &g_82;
                    for (l_339 = 0; (l_339 == 11); l_339 = safe_add_func_int8_t_s_s(l_339, 1))
                    {
                        return l_319;
                    }
                    (*g_169) = (*p_34);
                    for (g_82 = 0; (g_82 != (-20)); g_82--)
                    {
                        char l_375[1];
                        char *l_376 = &g_76;
                        unsigned short *l_390 = (void*)0;
                        unsigned short *l_391 = &l_389;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_375[i] = 0x13L;
                        (*g_169) = (l_340 >= ((*l_391) = ((safe_lshift_func_uint16_t_u_u(l_375[0], (((*l_376) = 9L) ^ (safe_sub_func_uint16_t_u_u((((*l_176) <= ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s(2L, 1)) == ((((*l_387) = (((safe_sub_func_uint16_t_u_u((1UL & ((l_387 != ((*g_265) = (*g_265))) & func_18(g_23))), 0xF084L)) == (-1L)) ^ g_244)) >= 0x0548L) <= l_388)) != l_389), l_375[0])), 1UL)) <= 4294967286UL)) && (*g_134)), l_338))))) <= l_388)));
                        (*l_269) = l_392;

                        ;
                        (*p_35) ^= ((*l_392) | ((0xABFCD6ECL && func_47((*g_221), l_395, l_338, (safe_sub_func_uint8_t_u_u((*l_181), (&l_340 != l_398))), l_399)) <= g_146[1]));
                        (*l_395) = (((**l_269) && l_375[0]) >= (safe_add_func_int8_t_s_s(((void*)0 != l_402), g_146[1])));
                    }
                    l_392 = &l_339;

                    ;
                }


                if ((*l_399))
                    continue;
                for (g_23 = (-25); (g_23 != 22); g_23 = safe_add_func_uint32_t_u_u(g_23, 4))
                {
                    (*g_221) = l_395;

                    ;
                    p_35 = p_35;
                }


                (*p_35) = (safe_lshift_func_int8_t_s_s(g_87, 4));
            }




            (*p_33) ^= (*l_399);
            (*g_169) |= 6L;
        }
        else
        {
            short l_411 = 0x8620L;
            int *l_426 = &g_170;
            for (g_300 = (-13); (g_300 > 8); g_300++)
            {
                unsigned *l_409 = (void*)0;
                unsigned *l_410 = (void*)0;
                int l_420 = 3L;
                if (func_18((l_411 = g_11)))
                {
                    unsigned short **l_412 = (void*)0;
                    l_413 = l_412;

                    ;
                    (*l_181) ^= (((g_416 = g_416) == &g_417) < (4294967292UL != 0x72E3335BL));
                    (*g_221) = (void*)0;

                    ;
                }
                else
                {
                    for (g_187 = (-16); (g_187 == 19); g_187 = safe_add_func_uint16_t_u_u(g_187, 1))
                    {
                        (*p_33) &= l_420;
                    }
                }
                for (l_420 = 0; (l_420 <= (-26)); l_420 = safe_sub_func_int8_t_s_s(l_420, 3))
                {
                    unsigned char l_425 = 0x28L;
                    for (l_340 = 19; (l_340 == 1); l_340--)
                    {
                    }
                    return (**g_242);
                }
            }

            ;
            ;
            for (g_187 = 0; (g_187 > 8); g_187++)
            {
                (**l_269) = (*p_34);
            }
        }




        ;
        l_429 = &g_417;

        ;
    }
    else
    {
        const int l_430 = 0x1F87D238L;
        (*l_269) = func_36(((*g_221) = func_39((*g_221), p_35, (*p_35), l_430)), (((safe_div_func_uint32_t_u_u(((((safe_mod_func_int8_t_s_s(l_430, g_67[0])) == ((*l_181) && (l_430 >= l_430))) <= l_430) <= (*g_169)), (-1L))) > l_430) && l_430));


        ;
    }




    ;
    for (g_87 = (-14); (g_87 <= 24); ++g_87)
    {
        (*p_33) = (*g_169);
    }
    return g_437;
}







static int * func_36(int * p_37, unsigned char p_38)
{
    const int l_138 = 1L;
    short *l_139 = &g_140;
    unsigned short *l_143[7][8][4] = {{{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}, {{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}, {{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}, {{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}, {{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}, {{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}, {{&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}, {&g_11, &g_125, (void*)0, &g_125}}};
    int l_144 = 1L;
    char l_147[9][7] = {{1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}, {1L, (-1L), (-6L), (-1L), 1L, (-1L), 0x02L}};
    unsigned short l_163 = 0x1742L;
    unsigned short l_164[9];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_164[i] = 0x2F66L;
    (*p_37) = (((l_138 > ((*l_139) = 0x3C5DL)) == (safe_sub_func_uint16_t_u_u((l_144 = 65535UL), (g_11 && ((void*)0 != g_145))))) | (&g_146[0] != (void*)0));
    (*p_37) |= l_147[7][2];
    (*p_37) |= (((+(l_144 = 65535UL)) == p_38) | g_76);
    for (p_38 = 0; (p_38 <= 29); p_38 = safe_add_func_uint32_t_u_u(p_38, 2))
    {
        char *l_152 = &l_147[0][3];
        int *l_157 = &g_82;
        int *l_158 = &g_121;
        int *l_161 = &l_144;
        unsigned l_162 = 3UL;
        int **l_165 = (void*)0;
        int **l_166 = &l_161;
        (*l_166) = func_44((func_18((((((safe_add_func_int32_t_s_s(((p_38 >= ((*l_152) = p_38)) || (((safe_rshift_func_uint16_t_u_s((((l_152 == l_152) || ((safe_rshift_func_int8_t_s_u(((*p_37) <= ((*l_157) = (((*l_161) &= func_47(l_157, &l_144, (*g_134), l_138, &l_138)) ^ l_162))), 6)) > l_163)) != (*g_134)), 5)) < 1UL) | (*g_134))), l_164[4])) | p_38) != g_125) <= p_38) != g_121)) <= p_38), (*g_145));

        ;
        return &g_67[0];


    }
    return p_37;


}







static int * func_39(int * p_40, int * p_41, int p_42, const unsigned p_43)
{
    int *l_137 = &g_121;
    (*p_40) ^= 0xBA46063AL;
    return l_137;


}







static int * func_44(const char p_45, const short p_46)
{
    unsigned char l_65[9];
    int *l_71 = &g_23;
    unsigned char l_74[9];
    unsigned char l_77[8] = {1UL, 0xAAL, 1UL, 0xAAL, 1UL, 0xAAL, 1UL, 0xAAL};
    int *l_112 = &g_82;
    int i;
    for (i = 0; i < 9; i++)
        l_65[i] = 247UL;
    for (i = 0; i < 9; i++)
        l_74[i] = 9UL;
    for (g_23 = 0; (g_23 <= 8); g_23 += 1)
    {
        unsigned char l_88 = 0UL;
        int *l_93 = &g_82;
        int *l_105 = &g_67[1];
        for (g_62 = 0; (g_62 <= 8); g_62 += 1)
        {
            int *l_66 = &g_67[0];
            const char l_97 = (-3L);
            int i;
            (*l_66) |= 0x68BD5E57L;
            if ((l_65[g_62] == g_67[0]))
            {
                unsigned short l_68 = 1UL;
                char *l_75 = &g_76;
                int l_78[7][10] = {{1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}, {1L, (-1L), 0xDC482A8EL, 6L, 6L, 0xDC482A8EL, (-1L), 1L, (-1L), 1L}};
                int **l_79 = &g_53;
                int i, j;
                l_78[5][5] ^= (l_77[0] ^= (l_68 < ((*l_75) ^= (p_45 < (safe_mod_func_uint16_t_u_u((l_71 == (void*)0), ((g_11 <= g_67[0]) | (safe_rshift_func_uint8_t_u_s(((-6L) <= (g_11 > l_74[2])), (*l_66))))))))));
                (*l_79) = &l_78[5][5];

                ;
                if (p_45)
                    continue;

                (*l_79) = (*l_79);
            }
            else
            {
                int l_102 = 1L;
                for (g_76 = 7; (g_76 >= 0); g_76 -= 1)
                {
                    int **l_89 = &l_71;
                    int i;
                    for (g_82 = 1; (g_82 <= 7); g_82 += 1)
                    {
                        int **l_83 = &g_53;
                        int ***l_86 = &l_83;
                        int i;
                        (*l_83) = &g_67[g_82];

                        ;
                        l_88 |= (safe_sub_func_int16_t_s_s((+(g_87 = ((((((*l_86) = &g_53) == &g_53) | l_74[(g_76 + 1)]) <= l_65[g_62]) < l_77[g_82]))), (*l_66)));
                    }
                    (*l_89) = &g_67[g_76];

                    ;
                }
                for (g_87 = 0; (g_87 != 33); g_87++)
                {
                    int **l_92 = &l_71;
                    char *l_96 = &g_76;
                    l_93 = ((*l_92) = l_71);

                    ;
                    (*l_66) = (safe_sub_func_uint16_t_u_u(g_67[0], (((*l_96) |= (*l_66)) != (**l_92))));
                    if (l_97)
                        break;
                }
                (*l_66) = ((*l_93) >= (0x660CL != ((0xFF4120E7L <= (safe_add_func_int8_t_s_s((g_11 > p_46), (((safe_rshift_func_uint8_t_u_s((g_11 | l_102), (safe_add_func_int32_t_s_s(l_102, 0L)))) & p_46) < g_76)))) && g_76)));
            }
        }

        ;
        (*l_105) = p_45;
    }

    ;
    for (g_87 = 0; (g_87 >= 9); g_87 = safe_add_func_uint32_t_u_u(g_87, 7))
    {
        int **l_108 = (void*)0;
        int **l_109 = (void*)0;
        int **l_110 = (void*)0;
        int **l_111 = &l_71;
        (*l_111) = l_71;
    }
    if (((*l_112) ^= ((*l_71) ^= ((void*)0 != &g_67[1]))))
    {
        (*l_112) = g_67[0];
        (*l_71) |= (*l_112);
    }
    else
    {
        int **l_113 = &l_112;
        unsigned char *l_118 = &l_74[6];
        int *l_119 = &g_82;
        int *l_120 = &g_121;
        (*l_113) = &g_67[3];

        ;
        (*l_120) &= ((*l_119) |= (func_47(l_112, &g_82, (*l_112), (safe_rshift_func_uint8_t_u_u(((*l_118) = (0L == ((**l_113) > func_18(p_45)))), 5)), l_71) || p_46));

        ;
        for (g_87 = 1; (g_87 <= 7); g_87 += 1)
        {
            unsigned char l_124 = 0x73L;
            int i;
            (*l_119) = (((safe_lshift_func_uint16_t_u_s(((l_77[g_87] > (p_45 | l_77[g_87])) >= 65533UL), 5)) ^ (g_125 = l_124)) | (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(l_77[g_87], (safe_div_func_int32_t_s_s(((*l_112) ^= ((void*)0 == g_134)), func_47(&g_121, &g_23, p_46, (*g_53), l_71))))) && (*l_71)) >= g_76), (*g_134))), 0UL)));
            for (g_125 = 0; (g_125 <= 8); g_125 += 1)
            {
                if ((*g_53))
                    break;
            }
        }
    }

    ;
    return l_112;


}







static unsigned func_47(int * p_48, int * p_49, unsigned char p_50, int p_51, const int * p_52)
{
    int l_58 = 0xD17BA7DAL;
    int *l_59 = &g_23;
    int l_60 = 0xE88B1495L;
    char *l_61[9] = {&g_62, &g_62, (void*)0, &g_62, &g_62, (void*)0, &g_62, &g_62, (void*)0};
    int l_63 = 0xBBE0E206L;
    int **l_64[7][7][3] = {{{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}, {{&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}, {&g_53, &g_53, &g_53}}};
    int i, j, k;
    l_63 &= (safe_add_func_int16_t_s_s(((((p_50 = p_51) | (0x7A8DL < (safe_add_func_int32_t_s_s((((*l_59) = ((+(l_58 ^ (&g_23 == l_59))) >= (l_60 ^ (g_11 != (0x61L ^ p_51))))) && (*l_59)), p_51)))) <= g_11) ^ 4294967295UL), 65532UL));
    g_53 = &g_23;

    ;
    return p_50;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_67[i], "g_67[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_146[i], "g_146[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_636[i], "g_636[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_696, "g_696", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
