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



static char g_7 = (-9L);
static int g_16 = (-1L);
static int *g_15 = &g_16;
static short g_34 = 0x9102L;
static int *g_42[4][2] = {{&g_16, &g_16}, {&g_16, &g_16}, {&g_16, &g_16}, {&g_16, &g_16}};
static short g_48 = 0x756FL;
static short *g_47 = &g_48;
static short g_67 = (-1L);
static short **g_94 = &g_47;
static short ***g_93 = &g_94;
static int g_100 = (-7L);
static unsigned char g_127 = 253UL;
static unsigned g_152 = 4294967295UL;
static volatile int g_169 = 0xB8F37F1DL;
static volatile int *g_168 = &g_169;
static volatile int **g_167 = &g_168;
static volatile int ***g_166 = &g_167;
static unsigned g_200 = 0x22EDFD8EL;
static int g_213 = 0L;
static int *g_230[2] = {&g_100, &g_100};
static unsigned char *g_244 = (void*)0;
static unsigned char **g_243 = &g_244;
static unsigned short g_262[7] = {0x8567L, 0x8567L, 1UL, 0x8567L, 0x8567L, 1UL, 0x8567L};
static unsigned *g_305 = &g_152;
static unsigned g_323[9][5] = {{4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}, {4294967295UL, 6UL, 8UL, 1UL, 6UL}};
static unsigned g_325 = 4294967295UL;
static unsigned g_327 = 0UL;
static char g_372 = 0x9FL;
static char g_477 = 0x8DL;
static char *g_513 = (void*)0;
static char **g_512[4] = {&g_513, &g_513, &g_513, &g_513};
static char ***g_511 = &g_512[0];
static int **g_521 = &g_42[0][0];
static unsigned *g_575[10] = {&g_325, (void*)0, &g_327, &g_327, (void*)0, &g_325, (void*)0, &g_327, &g_327, (void*)0};
static unsigned **g_574[8] = {(void*)0, &g_575[0], (void*)0, &g_575[0], (void*)0, &g_575[0], (void*)0, &g_575[0]};
static const unsigned short g_589 = 0xD29CL;
static volatile unsigned g_595 = 0x431E254FL;
static volatile unsigned g_611 = 0xB887A22CL;
static unsigned short g_647 = 0x9458L;



static int func_1(void);
static int * func_2(unsigned char p_3, int * const p_4, int * p_5, unsigned char p_6);
static int * const func_8(int p_9, int * p_10, unsigned char p_11, int * p_12, const unsigned p_13);
static int * func_17(short p_18, int * p_19, short p_20);
static int ** func_25(const unsigned short p_26, int p_27, int ** p_28, unsigned p_29);
static short func_35(int ** const p_36);
static int * const * func_37(const unsigned p_38, int ** p_39, short p_40);
static int * func_43(int * const * p_44, short * p_45);
static int func_49(int ** p_50, short * p_51, int ** p_52);
static int ** func_53(char p_54, unsigned p_55);
static int func_1(void)
{
    int l_14 = (-3L);
    int *l_22 = &g_16;
    int **l_21 = &l_22;
    unsigned short l_636 = 0x9636L;
    char *l_637[7] = {&g_7, &g_7, (void*)0, &g_7, &g_7, (void*)0, &g_7};
    int l_638 = 1L;
    int *l_642 = (void*)0;
    int i;
    (*l_21) = func_2(g_7, func_8(l_14, g_15, g_7, func_17(g_16, ((*l_21) = (void*)0), g_16), (*g_305)), g_575[0], l_14);
    (*g_15) = ((*l_22) & ((**g_94) | ((safe_sub_func_uint8_t_u_u(0xFAL, (*l_22))) <= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((l_638 = l_636) != (*l_22)), 2)), (safe_rshift_func_int8_t_s_s((*l_22), 0)))))));
    (*l_22) = (**l_21);
    for (g_325 = 0; (g_325 <= 3); g_325 += 1)
    {
        unsigned char l_641 = 0UL;
        int l_646 = 0xF3366078L;
        for (g_67 = 9; (g_67 >= 0); g_67 -= 1)
        {
            int i;
            (*l_21) = g_575[g_67];
            return (*g_15);
        }
        (**g_166) = (void*)0;
        l_641 = ((**l_21) = 4L);
        for (g_67 = 1; (g_67 >= 0); g_67 -= 1)
        {
            int i, j;
            l_642 = g_42[g_325][g_67];
            (**l_21) = (safe_add_func_int16_t_s_s((0xD9L ^ 0xCAL), (**l_21)));
        }
        for (g_100 = 3; (g_100 >= 0); g_100 -= 1)
        {
            int *l_645 = &g_213;
            int i;
            (*l_21) = func_17((**g_94), l_645, (*g_47));
            (**l_21) = (((*g_47) = (***g_93)) | (*l_645));
            (*l_645) = ((l_646 = ((*l_22) && (*l_645))) ^ ((((**g_94) & (l_641 | l_641)) != (*l_645)) & (-5L)));
        }
    }
    return g_647;
}







static int * func_2(unsigned char p_3, int * const p_4, int * p_5, unsigned char p_6)
{
    int *l_618 = &g_100;
    unsigned **l_629[9] = {(void*)0, &g_575[4], (void*)0, &g_575[4], (void*)0, &g_575[4], (void*)0, &g_575[4], (void*)0};
    int i;
    for (p_6 = 0; (p_6 > 28); p_6++)
    {
        unsigned short *l_623 = &g_262[4];
        unsigned **l_628 = &g_575[0];
        for (g_372 = (-10); (g_372 > (-3)); g_372++)
        {
            return l_618;
        }
        (*g_15) = ((safe_lshift_func_uint16_t_u_u(p_3, (*l_618))) <= (((safe_mod_func_uint16_t_u_u((!(l_623 == l_623)), (*g_47))) & (safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((((*g_305) > 0L) == (l_628 != l_629[4])), 0xA6E80C4CL)) >= p_3) & p_6), (-7L)))) | g_589));
    }
    return l_618;
}







static int * const func_8(int p_9, int * p_10, unsigned char p_11, int * p_12, const unsigned p_13)
{
    unsigned char l_564 = 4UL;
    unsigned *l_572 = &g_327;
    unsigned **l_571 = &l_572;
    int ***l_594 = &g_521;
    unsigned char l_598 = 254UL;
    short *l_607 = &g_67;
    int *l_608 = (void*)0;
    int *l_609[2][7] = {{&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100}, {&g_100, &g_100, &g_100, &g_100, &g_100, &g_100, &g_100}};
    int l_610 = 0x22D6D65BL;
    unsigned short *l_612 = &g_262[2];
    int * const l_613 = (void*)0;
    int i, j;
    if (l_564)
    {
        unsigned ***l_573[7][3][4] = {{{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}, {{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}, {{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}, {{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}, {{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}, {{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}, {{&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}, {&l_571, (void*)0, &l_571, &l_571}}};
        int l_578 = 0L;
        int l_581 = 0x14C194D4L;
        unsigned short *l_582 = &g_262[2];
        int i, j, k;
        (*g_521) = func_17((((safe_mul_func_uint8_t_u_u(p_11, (((safe_lshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((*p_10) | (&p_9 == (*g_521))), ((g_574[2] = l_571) != &g_575[0]))), (safe_add_func_int8_t_s_s((l_578 >= p_13), ((safe_mod_func_uint16_t_u_u(((*l_582) = (l_581 = l_578)), g_152)) & p_9))))) <= p_13) ^ p_9))) | 0x966DL) ^ 0xC4E6L), (*g_521), p_11);
        (*g_15) = 0x5D134C11L;
    }
    else
    {
        short l_583[10][10] = {{0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}, {0L, 0L, 0xA5E8L, (-1L), 6L, 0L, (-5L), 0x4E21L, 5L, (-1L)}};
        unsigned short *l_587 = &g_262[3];
        unsigned short **l_586 = &l_587;
        const unsigned short *l_588 = &g_589;
        int ***l_592 = &g_521;
        int **l_593[6][5][8] = {{{&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}}, {{&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}}, {{&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}}, {{&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}}, {{&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}}, {{&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}, {&g_230[0], &g_230[0], &g_230[1], &g_15, &g_42[1][0], &g_15, (void*)0, &g_15}}};
        int i, j, k;
        g_42[0][1] = func_17(l_583[6][7], (g_42[2][0] = func_17(((safe_mul_func_int16_t_s_s((((*l_586) = &g_262[2]) != (l_588 = &g_262[2])), (func_35(((*l_592) = &p_10)) == (0xF3L != 0xF7L)))) < l_564), l_572, p_9)), p_11);
    }
    (*p_10) = ((&g_167 == l_594) && p_13);
    (*p_10) = (!g_595);
    (*p_10) = (safe_sub_func_uint16_t_u_u(l_598, (p_11 > (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((*g_15), ((p_9 & (p_9 <= l_598)) == (safe_lshift_func_uint16_t_u_s(((*l_612) = ((~(l_610 = ((safe_sub_func_uint32_t_u_u(0UL, (((*g_94) = l_607) == l_607))) ^ p_11))) ^ g_611)), p_9))))), 4)))));
    return l_613;
}







static int * func_17(short p_18, int * p_19, short p_20)
{
    for (p_18 = 0; (p_18 > (-24)); p_18--)
    {
        const short l_30[5][6] = {{0xEF4AL, 0xA8FEL, (-1L), 0xA8FEL, 0xEF4AL, 0L}, {0xEF4AL, 0xA8FEL, (-1L), 0xA8FEL, 0xEF4AL, 0L}, {0xEF4AL, 0xA8FEL, (-1L), 0xA8FEL, 0xEF4AL, 0L}, {0xEF4AL, 0xA8FEL, (-1L), 0xA8FEL, 0xEF4AL, 0L}, {0xEF4AL, 0xA8FEL, (-1L), 0xA8FEL, 0xEF4AL, 0L}};
        short *l_33 = &g_34;
        int **l_430[4];
        int ***l_563 = &l_430[3];
        int i, j;
        for (i = 0; i < 4; i++)
            l_430[i] = &g_15;
    }
    return p_19;
}







static int ** func_25(const unsigned short p_26, int p_27, int ** p_28, unsigned p_29)
{
    int *l_431 = &g_100;
    int **l_432 = &g_42[3][0];
    int l_441 = 0x30FDBB33L;
    short *l_442[2][5][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
    int ** const l_443[4][3] = {{&g_15, &g_42[1][1], &g_42[0][1]}, {&g_15, &g_42[1][1], &g_42[0][1]}, {&g_15, &g_42[1][1], &g_42[0][1]}, {&g_15, &g_42[1][1], &g_42[0][1]}};
    unsigned char ***l_475[10] = {&g_243, &g_243, &g_243, &g_243, &g_243, &g_243, &g_243, &g_243, &g_243, &g_243};
    int **l_478 = &g_42[2][0];
    unsigned l_502[7] = {0x8D528E52L, 0UL, 0x8D528E52L, 0UL, 0x8D528E52L, 0UL, 0x8D528E52L};
    unsigned *l_537 = &g_323[0][4];
    unsigned *l_540 = (void*)0;
    int **l_542 = (void*)0;
    int i, j, k;
    (*l_432) = l_431;
    (*l_432) = (*l_432);
    (**g_166) = (**g_166);
    if ((**p_28))
    {
        return &g_42[3][0];
    }
    else
    {
        int ***l_444 = &l_432;
        unsigned char *l_449 = (void*)0;
        short *l_452 = &g_67;
        short **l_453[7][9] = {{&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}, {&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}, {&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}, {&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}, {&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}, {&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}, {&l_442[1][3][0], &l_452, &l_452, &l_452, &l_442[0][1][0], (void*)0, &l_442[0][1][0], &l_452, &l_452}};
        int **l_455 = &g_42[0][1];
        int ***l_454[10] = {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455};
        char *l_489 = &g_372;
        char **l_488[9][9][3] = {{{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}, {{&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}, {&l_489, &l_489, &l_489}}};
        short ****l_526 = &g_93;
        int i, j, k;
        (**p_28) = (p_27 < (safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s(((((p_26 && ((void*)0 != l_449)) == p_27) <= (*l_431)) || g_16), 0)) <= (***g_93)) <= p_29), (*g_15))));
        (*l_431) = ((safe_rshift_func_int8_t_s_u((p_26 >= (p_27 == (*l_431))), 1)) != 0x92L);
        if (((*l_431) = ((*l_444) != (p_28 = &g_230[0]))))
        {
            const unsigned l_458 = 5UL;
            char *l_476[10][1][6] = {{{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}, {{(void*)0, &g_7, (void*)0, &g_477, (void*)0, &g_477}}};
            unsigned char l_500 = 0x80L;
            char ***l_509 = &l_488[4][1][1];
            short **l_515 = &l_452;
            int **l_516[1][5];
            int ***l_520[1][6][10] = {{{(void*)0, &l_432, (void*)0, &l_478, &l_516[0][4], &l_516[0][4], &l_478, (void*)0, &l_432, (void*)0}, {(void*)0, &l_432, (void*)0, &l_478, &l_516[0][4], &l_516[0][4], &l_478, (void*)0, &l_432, (void*)0}, {(void*)0, &l_432, (void*)0, &l_478, &l_516[0][4], &l_516[0][4], &l_478, (void*)0, &l_432, (void*)0}, {(void*)0, &l_432, (void*)0, &l_478, &l_516[0][4], &l_516[0][4], &l_478, (void*)0, &l_432, (void*)0}, {(void*)0, &l_432, (void*)0, &l_478, &l_516[0][4], &l_516[0][4], &l_478, (void*)0, &l_432, (void*)0}, {(void*)0, &l_432, (void*)0, &l_478, &l_516[0][4], &l_516[0][4], &l_478, (void*)0, &l_432, (void*)0}}};
            const unsigned short l_543 = 0x5987L;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_516[i][j] = (void*)0;
            }
            (*l_432) = (*p_28);
            (*p_28) = (*p_28);
            if (((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(g_372, 0x93L)), ((*g_305) <= (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_475[3] == (void*)0), (**g_94))), (((*l_431) = g_34) || (0x28L == (((*l_431) = (*l_431)) & p_29)))))))) <= l_458) < p_27), 0x3F3F4F50L)), 12)) & g_67))
            {
                unsigned char l_479 = 252UL;
                (*g_15) = l_479;
            }
            else
            {
                int l_484 = 9L;
                const unsigned l_496 = 1UL;
                for (g_325 = 0; (g_325 == 44); ++g_325)
                {
                    char * const *l_487 = &l_476[0][0][1];
                    unsigned *l_492 = (void*)0;
                    int l_495 = 0x66E8A3A9L;
                    short *l_497[5][1] = {{&g_48}, {&g_48}, {&g_48}, {&g_48}, {&g_48}};
                    short l_501 = 0x3F4BL;
                    char ****l_510 = &l_509;
                    unsigned l_514 = 0x853A623CL;
                    int i, j;
                    (*g_15) = (safe_mod_func_uint32_t_u_u(0UL, (l_484 || ((*g_305) = ((((safe_lshift_func_uint16_t_u_u((l_487 == l_488[1][8][1]), (((*g_47) = ((safe_rshift_func_uint16_t_u_u(65535UL, ((void*)0 != l_492))) != (((safe_add_func_int16_t_s_s(((&p_28 == (void*)0) == l_495), l_495)) >= p_29) | l_496))) <= g_262[5]))) <= l_495) == l_484) != p_29)))));
                    if ((((l_496 < l_484) ^ p_29) & (*g_47)))
                    {
                        (*l_478) = (void*)0;
                    }
                    else
                    {
                        const char l_517 = (-6L);
                        (*g_511) = (*l_509);
                        if (l_517)
                            continue;
                        (**g_166) = (void*)0;
                    }
                }
            }
            if ((safe_sub_func_int16_t_s_s((*l_431), (***g_93))))
            {
                (*l_431) = 1L;
                for (g_127 = 0; (g_127 >= 5); g_127++)
                {
                    unsigned l_529 = 1UL;
                    for (l_500 = 0; (l_500 < 43); l_500++)
                    {
                        unsigned char l_527 = 0xE6L;
                        int l_528 = 0x4A85EE1CL;
                        (*g_521) = (*p_28);
                        (*g_15) = (((void*)0 != l_526) & ((l_528 = ((***g_93) = l_527)) >= ((+g_372) != p_26)));
                    }
                    (*g_15) = l_529;
                }
            }
            else
            {
                char l_536 = (-1L);
                unsigned *l_539 = &g_323[0][4];
                unsigned **l_538[1];
                unsigned l_541 = 4294967295UL;
                int l_545 = 0x4F6D5F6AL;
                int i;
                for (i = 0; i < 1; i++)
                    l_538[i] = &l_539;
                (*g_521) = (*g_521);
                l_536 = ((8UL > (((**g_94) = p_27) & 65535UL)) || (safe_mul_func_uint16_t_u_u((((*g_305) = (safe_lshift_func_int16_t_s_u((***g_93), 15))) ^ (safe_add_func_uint8_t_u_u((g_127 = 0x81L), p_29))), 0xC160L)));
                if ((l_537 != (l_540 = &g_323[0][4])))
                {
                    l_541 = 0x275F9DC5L;
                    return l_542;
                }
                else
                {
                    (*l_431) = l_543;
                }
                for (l_500 = 0; (l_500 <= 6); l_500 += 1)
                {
                    unsigned char l_544 = 0x4FL;
                    int *l_560 = (void*)0;
                    int **l_561[3][9][1] = {{{&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}}, {{&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}}, {{&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}, {&g_42[3][0]}}};
                    int i, j, k;
                    for (g_48 = 5; (g_48 >= 0); g_48 -= 1)
                    {
                        (*g_167) = (**g_166);
                    }
                    for (g_213 = 6; (g_213 >= 0); g_213 -= 1)
                    {
                        (**l_444) = (*p_28);
                    }
                    l_545 = l_544;
                    (*g_15) = (safe_add_func_int32_t_s_s(0L, ((***g_93) < (safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_325, ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(g_477, (safe_add_func_uint32_t_u_u(0x1AF0DFCBL, p_29)))), 8)) > (p_27 < ((safe_add_func_uint8_t_u_u(8UL, (p_27 | p_29))) <= l_544))))), (**g_94))))));
                    for (g_213 = 6; (g_213 >= 0); g_213 -= 1)
                    {
                        int **l_562 = (void*)0;
                        (*g_521) = (*p_28);
                        (*p_28) = l_560;
                        (*g_521) = (*p_28);
                        return l_562;
                    }
                }
            }
        }
        else
        {
            return p_28;
        }
    }
    return &g_15;
}







static short func_35(int ** const p_36)
{
    int **l_41 = &g_15;
    int * const **l_428 = (void*)0;
    int * const *l_429[5] = {&g_230[0], &g_230[1], &g_230[0], &g_230[1], &g_230[0]};
    int i;
    l_429[2] = func_37(g_7, l_41, g_7);
    return (**g_94);
}







static int * const * func_37(const unsigned p_38, int ** p_39, short p_40)
{
    int * const *l_46 = &g_15;
    unsigned * const l_302[7] = {&g_200, &g_200, &g_200, &g_200, &g_200, &g_200, &g_200};
    int **l_328 = &g_42[2][1];
    short ****l_414 = &g_93;
    short *l_426 = &g_48;
    int *l_427[2];
    int i;
    for (i = 0; i < 2; i++)
        l_427[i] = (void*)0;
    g_42[3][0] = (*p_39);
    if ((**p_39))
    {
        int **l_299 = &g_230[0];
        int ***l_301[4];
        int ****l_300 = &l_301[0];
        short *l_312[6][1] = {{&g_67}, {&g_67}, {&g_67}, {&g_67}, {&g_67}, {&g_67}};
        unsigned l_351[1];
        short l_373 = 0L;
        char *l_411 = &g_7;
        char **l_410 = &l_411;
        int i, j;
        for (i = 0; i < 4; i++)
            l_301[i] = &l_299;
        for (i = 0; i < 1; i++)
            l_351[i] = 0UL;
        (*l_299) = func_43(l_46, g_47);
        (**p_39) = ((void*)0 != p_39);
        if ((&g_167 == ((*l_300) = (void*)0)))
        {
            unsigned *l_303[7];
            unsigned **l_304[4] = {&l_303[3], &l_303[6], &l_303[3], &l_303[6]};
            short ***l_310 = (void*)0;
            short ****l_311 = &l_310;
            int i;
            for (i = 0; i < 7; i++)
                l_303[i] = &g_200;
            (*g_15) = 0x14BD3B3BL;
            (**p_39) = (((l_302[6] == (g_305 = l_303[6])) >= ((safe_lshift_func_int16_t_s_s(p_40, 10)) <= (safe_sub_func_uint32_t_u_u(((((*l_311) = l_310) == (void*)0) & (*g_47)), 0x7100C481L)))) && 0xADL);
            for (g_213 = 0; (g_213 > (-19)); --g_213)
            {
                (*l_299) = (*p_39);
                for (g_67 = 0; (g_67 == 13); g_67 = safe_add_func_uint8_t_u_u(g_67, 4))
                {
                    (*g_167) = (void*)0;
                }
                return &g_230[0];
            }
            g_230[0] = (*l_299);
        }
        else
        {
            short l_320 = 3L;
            char l_395 = 0x26L;
            short l_402 = 0x78E8L;
            int *l_405[4] = {&g_16, &g_213, &g_16, &g_213};
            char l_412 = 0x9EL;
            int i;
            if (((**l_299) = (*g_15)))
            {
                unsigned short *l_321 = (void*)0;
                unsigned *l_322 = &g_323[0][4];
                unsigned *l_324 = &g_325;
                unsigned *l_326 = &g_327;
                int l_329[8] = {0x95C7453DL, 0x0916B115L, 0x95C7453DL, 0x0916B115L, 0x95C7453DL, 0x0916B115L, 0x95C7453DL, 0x0916B115L};
                short * const *l_369 = &l_312[4][0];
                short * const **l_368 = &l_369;
                short * const ***l_367 = &l_368;
                int i;
                (*g_15) = (func_49(func_53(((**l_299) <= (safe_rshift_func_int16_t_s_u(((***g_93) = p_40), (g_262[2] = (safe_unary_minus_func_uint16_t_u(l_320)))))), ((*l_326) = ((*l_324) = ((*l_322) = p_40)))), l_312[2][0], p_39) == p_40);
                if (l_329[5])
                {
                    char *l_331 = &g_7;
                    char **l_330 = &l_331;
                    char **l_333 = &l_331;
                    char ***l_332 = &l_333;
                    int l_334 = (-4L);
                    const short *l_353[6] = {&l_320, &l_320, &g_48, &l_320, &l_320, &g_48};
                    const short **l_352 = &l_353[5];
                    short *** const *l_365 = &g_93;
                    int i;
                    if ((l_330 != ((*l_332) = (void*)0)))
                    {
                        l_334 = ((**l_46) = (**p_39));
                        return &g_42[3][0];
                    }
                    else
                    {
                        (*g_167) = (**g_166);
                    }
                    for (g_100 = 25; (g_100 >= 17); --g_100)
                    {
                        int l_344 = 1L;
                        (***g_166) = ((**l_46) = (((safe_mod_func_uint8_t_u_u(0xADL, 255UL)) ^ (safe_unary_minus_func_uint8_t_u(((((7UL ^ (l_329[5] = ((*g_305) = ((safe_add_func_int32_t_s_s((((*g_305) >= (safe_rshift_func_int16_t_s_u((***g_93), (l_344 || (safe_mul_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((-4L), 7)) > l_344) <= (safe_rshift_func_uint8_t_u_s(0x9CL, p_38))) && l_351[0]), l_334)))))) ^ 0xCA3E1B3FL), 0L)) & (*g_305))))) >= (***g_166)) != p_40) | (**g_94))))) > 0x9DDDL));
                        (**l_46) = (**p_39);
                        (*l_328) = (*p_39);
                        (**l_46) = (l_352 != (void*)0);
                    }
                    for (g_127 = 5; (g_127 == 40); g_127 = safe_add_func_int8_t_s_s(g_127, 1))
                    {
                        char l_356 = 1L;
                        short *** const **l_366 = &l_365;
                        char *l_370 = (void*)0;
                        char *l_371 = &g_372;
                        (*g_15) = ((((l_356 > (*g_47)) & (((**g_167) > ((safe_lshift_func_uint8_t_u_u((l_320 | p_40), ((safe_mul_func_int16_t_s_s((0xEBL > l_334), (safe_mul_func_int8_t_s_s(((*l_371) = (((safe_mul_func_uint8_t_u_u((((*l_366) = l_365) == l_367), p_40)) == 255UL) <= l_320)), l_320)))) <= (**l_299)))) <= 4294967295UL)) < (*g_305))) < 0x5D9A5195L) <= l_356);
                        (***g_166) = l_373;
                        (**l_299) = (**g_167);
                    }
                    for (g_127 = 17; (g_127 == 26); ++g_127)
                    {
                        if ((***g_166))
                            break;
                        return p_39;
                    }
                }
                else
                {
                    unsigned char l_376[10] = {0x2BL, 2UL, 251UL, 251UL, 2UL, 0x2BL, 2UL, 251UL, 251UL, 2UL};
                    int i;
                    if (l_376[6])
                    {
                        (*l_299) = ((*l_328) = (void*)0);
                        return p_39;
                    }
                    else
                    {
                        short l_377 = 4L;
                        l_377 = (~(***g_166));
                    }
                    (**g_167) = (((**p_39) <= (**l_328)) <= (*g_47));
                    for (g_100 = 0; g_100 < 8; g_100 += 1)
                    {
                        l_329[g_100] = 0xE764DF80L;
                    }
                }
                for (g_213 = 4; (g_213 >= 2); g_213 -= 1)
                {
                    unsigned l_394 = 1UL;
                    unsigned char *l_396 = (void*)0;
                    unsigned char *l_397 = &g_127;
                    int l_398 = 0xFA366EE9L;
                    int i;
                    l_398 = (g_48 || ((**l_46) = ((*l_397) = (((****l_367) = (((safe_rshift_func_uint16_t_u_u((g_262[(g_213 + 2)] = (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((**p_39), (((*g_47) || (safe_lshift_func_uint16_t_u_s(0xCF33L, 9))) && (+(safe_mod_func_uint16_t_u_u(p_38, g_213)))))), ((g_200 <= (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((&g_262[2] == &g_262[2]), p_40)), l_394))) < l_395)))), g_152)) && 0xB5L) == p_38)) || 0L))));
                    if (((**l_46) >= p_38))
                    {
                        (*l_299) = (*p_39);
                    }
                    else
                    {
                        (*g_15) = ((safe_mul_func_int8_t_s_s(p_40, 9L)) > p_40);
                    }
                    if ((safe_unary_minus_func_int16_t_s((**g_94))))
                    {
                        (*l_328) = (*p_39);
                        (**g_166) = (**g_166);
                    }
                    else
                    {
                        (**p_39) = (**p_39);
                        (**g_166) = (*g_167);
                        (*l_299) = (*p_39);
                    }
                    (*g_167) = (*g_167);
                    for (g_16 = 0; (g_16 >= 0); g_16 -= 1)
                    {
                        (**g_167) = (**p_39);
                        if (l_402)
                            break;
                    }
                }
            }
            else
            {
                unsigned l_403[7][8][4] = {{{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}, {{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}, {{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}, {{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}, {{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}, {{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}, {{0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}, {0xDCE14CEFL, 0xDCE14CEFL, 8UL, 0UL}}};
                int * const *l_404 = (void*)0;
                char *l_409 = &g_372;
                char **l_408 = &l_409;
                int i, j, k;
                if (l_403[0][3][2])
                {
                    (*l_299) = l_405[3];
                    (**p_39) = (safe_mod_func_int8_t_s_s((func_49(func_53((&l_405[3] == l_404), (l_408 == l_410)), (*g_94), &g_15) & l_412), 0xEEL));
                }
                else
                {
                    (*l_299) = (*p_39);
                }
            }
        }
        for (g_100 = 0; g_100 < 4; g_100 += 1)
        {
            l_301[g_100] = &l_299;
        }
    }
    else
    {
        short *** const *l_413 = &g_93;
        int l_415 = 0x6F19421CL;
        (**l_46) = ((l_413 == l_414) || (((((*g_47) = l_415) != l_415) == (-10L)) & 0x1361L));
        for (g_152 = 0; (g_152 != 46); ++g_152)
        {
            (*l_328) = (*p_39);
            for (g_372 = 0; (g_372 < 18); g_372 = safe_add_func_uint8_t_u_u(g_372, 3))
            {
                int * const *l_425 = &g_230[0];
                for (g_200 = 13; (g_200 > 10); g_200 = safe_sub_func_uint32_t_u_u(g_200, 2))
                {
                    for (g_213 = 14; (g_213 != (-29)); g_213--)
                    {
                        int *l_424 = &g_100;
                        (*l_328) = l_424;
                    }
                }
                (*g_167) = (*g_167);
                (*g_167) = (void*)0;
            }
            return p_39;
        }
        (*l_328) = l_427[1];
    }
    (*g_15) = (*g_15);
    return p_39;
}







static int * func_43(int * const * p_44, short * p_45)
{
    unsigned l_58 = 1UL;
    int *l_59 = &g_16;
    int **l_60 = &l_59;
    short *l_293 = &g_48;
    unsigned char *l_298 = &g_127;
    (**p_44) = func_49(func_53((safe_add_func_int16_t_s_s((*p_45), (l_58 < (((*l_60) = l_59) == (void*)0)))), g_48), p_45, &g_15);
    (*g_168) = (((0x7A88L && (safe_mul_func_int8_t_s_s((((((g_200 == ((safe_mul_func_uint16_t_u_u((**l_60), (g_262[2] ^ (safe_lshift_func_uint8_t_u_u(g_67, 0))))) == ((*l_298) = 0xD6L))) > (*l_59)) | (**p_44)) >= (*p_45)) | 0x2AL), 250UL))) != (*l_59)) < (-7L));
    return &g_100;
}







static int func_49(int ** p_50, short * p_51, int ** p_52)
{
    short l_218[1][8] = {{0x7058L, 0x7058L, 0L, 0x7058L, 0x7058L, 0L, 0x7058L, 0x7058L}};
    unsigned char *l_226 = &g_127;
    unsigned char **l_225[2];
    unsigned char ***l_224 = &l_225[0];
    int **l_242[2];
    int ***l_241 = &l_242[0];
    int *l_248[3];
    int i, j;
    for (i = 0; i < 2; i++)
        l_225[i] = &l_226;
    for (i = 0; i < 2; i++)
        l_242[i] = &g_230[0];
    for (i = 0; i < 3; i++)
        l_248[i] = &g_16;
    if (l_218[0][7])
    {
        if ((**p_50))
        {
            char l_219 = (-5L);
            (*p_50) = (*p_50);
            l_219 = ((*g_15) = 0L);
            return l_219;
        }
        else
        {
            for (g_100 = 0; (g_100 <= (-13)); g_100--)
            {
                (**g_166) = (*g_167);
                (**g_166) = (**g_166);
                if ((*g_168))
                    continue;
            }
            return (**p_50);
        }
    }
    else
    {
        int l_227[4];
        char *l_286[6][1] = {{&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}, {&g_7}};
        char **l_285 = &l_286[0][0];
        int i, j;
        for (i = 0; i < 4; i++)
            l_227[i] = 7L;
        if ((0xF565L > ((safe_sub_func_int32_t_s_s((l_224 == (void*)0), l_227[2])) != (safe_mod_func_uint8_t_u_u((((g_200 > (*p_51)) < l_227[0]) <= (**p_52)), l_218[0][7])))))
        {
            int *l_237 = (void*)0;
            (*p_50) = (*p_52);
            (*g_167) = (**g_166);
            g_230[0] = ((*p_50) = (*p_52));
            if ((safe_mod_func_uint8_t_u_u(l_227[2], (safe_rshift_func_uint8_t_u_s(247UL, 5)))))
            {
                for (g_16 = 0; (g_16 != 3); g_16 = safe_add_func_int32_t_s_s(g_16, 2))
                {
                    (**g_166) = (**g_166);
                    for (g_100 = 0; (g_100 >= 0); g_100 -= 1)
                    {
                        int i, j;
                        l_237 = (*p_50);
                        if (l_218[g_100][(g_100 + 4)])
                            break;
                        (*g_168) = (**p_52);
                        (*g_166) = (*g_166);
                    }
                    return l_218[0][7];
                }
                if (((safe_unary_minus_func_int16_t_s((*p_51))) ^ (safe_mul_func_uint8_t_u_u(((void*)0 != l_241), l_227[1]))))
                {
                    (*p_50) = (*p_50);
                    (*l_224) = g_243;
                    (**g_166) = (**g_166);
                }
                else
                {
                    (*g_167) = (**g_166);
                    for (g_100 = 1; (g_100 >= 0); g_100 -= 1)
                    {
                        int i;
                        (**l_241) = g_230[g_100];
                    }
                    return (*g_168);
                }
            }
            else
            {
                short l_247[10][9] = {{4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}, {4L, (-8L), 0x2604L, 5L, (-8L), 1L, (-8L), 5L, 0x2604L}};
                int *l_249 = &g_100;
                int i, j;
                for (g_127 = 0; (g_127 != 3); ++g_127)
                {
                    int *l_250 = &g_100;
                    for (g_100 = 0; (g_100 >= 0); g_100 -= 1)
                    {
                        int i, j;
                        if (l_247[5][6])
                            break;
                        return l_247[4][4];
                    }
                    g_42[3][0] = l_248[2];
                    for (g_16 = 0; (g_16 <= 1); g_16 += 1)
                    {
                    }
                    (*g_167) = (**g_166);
                }
                (**g_166) = (**g_166);
            }
        }
        else
        {
            unsigned l_269 = 0x5FF8D062L;
            int l_270 = 0L;
            char ***l_287 = &l_285;
            char ***l_288 = (void*)0;
            char **l_290 = &l_286[4][0];
            char ***l_289 = &l_290;
            for (g_127 = (-7); (g_127 <= 27); g_127++)
            {
                const unsigned l_260 = 1UL;
                int *l_265 = &g_213;
                if ((**p_52))
                    break;
                if (((*g_15) = 0x46CA3F74L))
                {
                    unsigned char l_257 = 0x8AL;
                    unsigned short *l_261 = &g_262[2];
                    int *l_267 = &g_16;
                    for (g_200 = 15; (g_200 >= 5); g_200--)
                    {
                        (**l_241) = (*p_50);
                        if ((***g_166))
                            break;
                        return (**p_50);
                    }
                    if ((safe_lshift_func_int16_t_s_s((l_257 <= ((safe_sub_func_uint16_t_u_u(l_260, ((*l_261) = ((*g_243) == (void*)0)))) ^ (l_260 & g_127))), ((*p_51) = (safe_sub_func_int32_t_s_s(2L, g_200))))))
                    {
                        const int l_266[3][2][1] = {{{0x0BC5C362L}, {0x0BC5C362L}}, {{0x0BC5C362L}, {0x0BC5C362L}}, {{0x0BC5C362L}, {0x0BC5C362L}}};
                        int i, j, k;
                        (**l_241) = l_265;
                        if (l_266[2][1][0])
                            break;
                        (**l_241) = (*p_52);
                        if ((**p_50))
                            continue;
                    }
                    else
                    {
                        (*p_50) = l_267;
                        (*p_50) = (*p_50);
                        (*l_265) = ((*l_267) = (*g_15));
                    }
                    if ((***l_241))
                    {
                        unsigned *l_268[2];
                        int l_271[5];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_268[i] = (void*)0;
                        for (i = 0; i < 5; i++)
                            l_271[i] = 0x450B8E15L;
                        (***g_166) = ((*l_265) = ((**p_52) = (((l_269 = l_227[2]) >= g_100) >= (l_270 != l_271[1]))));
                    }
                    else
                    {
                        int l_282 = 0x46C5116DL;
                        (*g_168) = ((**p_50) = (safe_add_func_int16_t_s_s((*p_51), ((safe_mul_func_int16_t_s_s((~(safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_48, (l_269 | (safe_sub_func_uint16_t_u_u(l_282, l_227[0]))))), g_200))), (*p_51))) >= ((*l_267) != (((safe_rshift_func_uint16_t_u_u((0xD32F5137L || 0xEA7E00CCL), l_270)) == (*l_267)) != (*l_267)))))));
                        (**g_166) = (*g_167);
                    }
                    for (g_200 = 0; g_200 < 2; g_200 += 1)
                    {
                        g_230[g_200] = &g_213;
                    }
                }
                else
                {
                    (**g_167) = ((**p_50) = (**p_50));
                    (*p_50) = (**l_241);
                    for (g_213 = 0; (g_213 <= 0); g_213 += 1)
                    {
                        int i;
                        (*g_167) = (**g_166);
                        (**p_52) = 0L;
                    }
                }
            }
            (*l_289) = ((*l_287) = l_285);
            (**l_241) = (*p_50);
        }
    }
    (**p_50) = (**g_167);
    return (**p_50);
}







static int ** func_53(char p_54, unsigned p_55)
{
    short **l_62[3][9][7] = {{{&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}}, {{&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}}, {{&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}, {&g_47, &g_47, &g_47, &g_47, &g_47, &g_47, &g_47}}};
    short ***l_61 = &l_62[0][4][4];
    int *l_63 = &g_16;
    int **l_64 = (void*)0;
    int **l_65 = &g_42[3][0];
    short ***l_97 = &l_62[2][0][1];
    int l_103 = 1L;
    int **l_112 = &l_63;
    short l_117[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_117[i] = 4L;
    (*l_61) = &g_47;
    (*l_65) = l_63;
    for (p_55 = 0; (p_55 <= 1); p_55 += 1)
    {
        short *l_66 = &g_67;
        int l_69 = 0x92F88B31L;
        int *l_80 = &l_69;
    }
    if ((safe_lshift_func_int8_t_s_u((((((*l_65) = (*l_65)) == ((*l_112) = (void*)0)) && (safe_rshift_func_uint8_t_u_u(0UL, 1))) >= g_100), 2)))
    {
        char l_118 = 0x70L;
        int l_128 = (-1L);
        unsigned short l_153 = 65535UL;
        int l_197 = 0L;
        for (p_54 = 0; (p_54 < 28); p_54 = safe_add_func_int16_t_s_s(p_54, 7))
        {
            unsigned l_149 = 4294967290UL;
            char l_156[6][1] = {{0x9AL}, {0x9AL}, {0x9AL}, {0x9AL}, {0x9AL}, {0x9AL}};
            int l_159 = 0x07053934L;
            unsigned short *l_172 = &l_153;
            unsigned l_185[5][7] = {{4294967295UL, 0xAB9F7BF7L, 0xDE74A5FEL, 0x7228B4A3L, 5UL, 0x7228B4A3L, 0xDE74A5FEL}, {4294967295UL, 0xAB9F7BF7L, 0xDE74A5FEL, 0x7228B4A3L, 5UL, 0x7228B4A3L, 0xDE74A5FEL}, {4294967295UL, 0xAB9F7BF7L, 0xDE74A5FEL, 0x7228B4A3L, 5UL, 0x7228B4A3L, 0xDE74A5FEL}, {4294967295UL, 0xAB9F7BF7L, 0xDE74A5FEL, 0x7228B4A3L, 5UL, 0x7228B4A3L, 0xDE74A5FEL}, {4294967295UL, 0xAB9F7BF7L, 0xDE74A5FEL, 0x7228B4A3L, 5UL, 0x7228B4A3L, 0xDE74A5FEL}};
            int i, j;
            l_117[3] = p_54;
        }
    }
    else
    {
        unsigned char *l_211[8] = {&g_127, &g_127, &g_127, &g_127, &g_127, &g_127, &g_127, &g_127};
        unsigned l_212 = 0UL;
        int i;
        g_213 = ((safe_mul_func_uint8_t_u_u((g_127 = (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(0x76E5D696L, (*g_15))), (*g_168)))), l_212)) ^ (**l_65));
        (**l_65) = ((safe_sub_func_int32_t_s_s(p_55, (safe_rshift_func_int8_t_s_u(l_212, l_212)))) && g_48);
    }
    return &g_42[0][0];
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_262[i], "g_262[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_323[i][j], "g_323[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
