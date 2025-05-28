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



static volatile int g_18 = 0x0D0714ADL;
static unsigned g_25 = 4294967286UL;
static int g_65 = 0x5FF74F57L;
static int *g_64 = &g_65;
static int g_82 = (-1L);
static unsigned g_105[1][2][3] = {{{0x843D8BAAL, 0x843D8BAAL, 4294967292UL}, {0x843D8BAAL, 0x843D8BAAL, 4294967292UL}}};
static int g_108 = 0x4590BACEL;
static int g_109 = (-3L);
static int g_140 = 0xDBE92475L;
static int *g_139 = &g_140;
static int *g_184 = &g_109;
static unsigned char g_194 = 255UL;
static unsigned short g_243 = 1UL;
static volatile unsigned short g_246 = 65529UL;
static unsigned char g_326 = 0xB7L;
static int **g_370 = &g_139;
static int ***g_369 = &g_370;
static int g_414 = 0x039D80E3L;
static volatile int g_517 = 0x38248ECBL;
static volatile int *g_516 = &g_517;



static char func_1(void);
static int func_2(unsigned p_3, int p_4, int p_5, unsigned char p_6, unsigned short p_7);
static unsigned char func_14(unsigned short p_15, char p_16, unsigned p_17);
static unsigned char func_29(int p_30, unsigned p_31, short p_32);
static unsigned func_33(short p_34, short p_35, unsigned char p_36, int p_37, int p_38);
static int * func_39(int * p_40, unsigned short p_41, int * p_42);
static int * func_43(int * p_44, int p_45, int * p_46, int * p_47, unsigned p_48);
static int * func_49(int p_50, int * p_51);
static int func_52(int * p_53, int * p_54, int p_55);
static int * func_56(int p_57, int * p_58, char p_59);
static char func_1(void)
{
    char l_8 = 0x70L;
    unsigned l_11 = 0UL;
    int *l_402 = (void*)0;
    int ***l_466 = &g_370;
    int ***l_545 = &g_370;
    short l_557 = 0x6BE3L;
    if (func_2(l_8, (((l_8 || (safe_lshift_func_uint16_t_u_u(l_11, 1))) <= (safe_lshift_func_uint8_t_u_u(func_14(((g_18 < l_11) > (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0x1AC3DC99L, g_25)), (safe_div_func_uint8_t_u_u(((((safe_unary_minus_func_uint8_t_u(func_29(g_25, func_33(g_25, l_8, g_25, g_25, l_11), g_105[0][1][0]))) == 0xE199A933L) > g_194) == 0x99L), (-6L))))) ^ 5L) < (-3L)), 2))), g_194, g_105[0][1][2]), l_8))) >= l_8), g_194, g_326, g_105[0][0][0]))
    {
        unsigned l_405 = 0xAC3D2FF1L;
        int *l_451 = &g_414;
        int **l_469 = &g_184;
        unsigned short l_484 = 0x4110L;
        unsigned l_538 = 0x37D235A6L;
        (*g_370) = l_402;
        (*g_64) = (&l_402 == (void*)0);
        for (g_65 = 8; (g_65 >= 4); g_65--)
        {
            unsigned l_423[8][1] = {{2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}, {2UL}};
            int l_482 = 0xE9E2E698L;
            unsigned short l_493 = 0x27C9L;
            int l_500 = 0x7C236B1BL;
            int i, j;
            (*g_64) = l_8;
            (*g_64) = l_405;
            if ((safe_sub_func_uint16_t_u_u((((g_105[0][0][1] & ((safe_lshift_func_int16_t_s_s((g_18 | (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((0x5896220EL | ((+(+(0x1AL >= g_414))) <= ((safe_div_func_uint16_t_u_u(g_108, g_243)) | g_326))), 1)), ((safe_add_func_uint32_t_u_u((g_109 <= 0UL), (*g_64))) >= l_11)))), 2)) || g_18)) || l_11) | 0x0B62L), 65535UL)))
            {
                short l_424 = 0L;
                int ***l_426 = &g_370;
                int ***l_467 = &g_370;
                unsigned l_481 = 0UL;
                for (g_25 = 0; (g_25 <= 0); g_25 += 1)
                {
                    short l_425 = (-1L);
                    int *l_452[3];
                    int ***l_459[8][5] = {{&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}, {&g_370, (void*)0, (void*)0, (void*)0, &g_370}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_452[i] = &g_109;
                    if ((0xD675L != (((g_194 && (safe_add_func_uint8_t_u_u((l_423[7][0] ^ g_140), l_425))) < 0L) >= 0xF4F49C8EL)))
                    {
                        unsigned l_435 = 0xEB05B6C1L;
                        (**g_369) = (*g_370);
                        (*g_64) = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(l_435, 4)), ((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((void*)0 == (*g_369)), g_18)), (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((*g_64), l_435)), 5)))), 4)) | ((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_140, (((void*)0 == &g_370) && 4294967287UL))), l_435)) == g_65))));
                    }
                    else
                    {
                        (*g_64) = (safe_unary_minus_func_uint8_t_u(0x61L));
                    }
                    for (l_424 = 0; (l_424 <= 0); l_424 += 1)
                    {
                        int i, j, k;
                        if (g_105[g_25][g_25][(g_25 + 2)])
                            break;
                        (*g_64) = l_423[7][0];
                        (**g_369) = l_451;
                        (*g_370) = func_39((**g_369), g_140, l_452[0]);
                    }
                    if (((safe_mod_func_int8_t_s_s(g_82, (safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u((g_82 > g_105[0][1][0]), (l_459[4][0] == &g_370))) | (*l_451)) || 0x31L), (0xCF57A329L <= (-8L)))))) || (-1L)))
                    {
                        int l_468 = 0x165345CDL;
                        short l_478 = 0L;
                        short l_483 = 0xF5B1L;
                        (*g_64) = (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((l_466 == l_467) < (l_468 & g_65)), ((l_469 != (*g_369)) < (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0x19B8L, (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((l_478 | (((safe_mul_func_uint8_t_u_u(l_481, l_423[7][0])) != l_423[2][0]) || 5UL)), g_109)), l_478)))), g_109))))), (-1L))), l_482));
                        if (l_483)
                            continue;
                        return l_482;
                    }
                    else
                    {
                        (*g_64) = l_484;
                        (*l_451) = 0x1E379746L;
                    }
                    if ((*g_64))
                        continue;
                    for (l_11 = 0; (l_11 <= 0); l_11 += 1)
                    {
                        (**l_466) = (*g_370);
                    }
                }
            }
            else
            {
                int *l_489 = (void*)0;
                int l_499 = 9L;
                int ***l_530 = &l_469;
                for (g_140 = 0; (g_140 <= (-20)); g_140 = safe_sub_func_int8_t_s_s(g_140, 1))
                {
                    int l_496 = 6L;
                    for (l_11 = 0; (l_11 > 5); ++l_11)
                    {
                        (*g_369) = (*g_369);
                        (*g_370) = (**g_369);
                        (*l_469) = l_489;
                        (*g_370) = (*l_469);
                    }
                    for (g_108 = 0; (g_108 > (-28)); g_108 = safe_sub_func_uint8_t_u_u(g_108, 3))
                    {
                        int *l_492 = &g_140;
                        (*l_451) = (*g_64);
                        (**g_369) = l_492;
                        l_500 = (*l_492);
                    }
                    if (((g_246 || (g_25 > (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((0x98L != (*l_451)), ((250UL | (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_423[3][0], 2)), l_500))) || ((safe_sub_func_uint32_t_u_u(l_423[1][0], ((safe_div_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((l_496 ^ 65533UL), g_105[0][1][0])) > g_243), 0x20L)) != l_496))) > l_496)))), 0xBCF8L)))) || l_493))
                    {
                        unsigned l_515[6] = {0x0ECD12D2L, 0x0ECD12D2L, 1UL, 0x0ECD12D2L, 0x0ECD12D2L, 1UL};
                        int i;
                        if (l_515[5])
                            break;
                        (*g_64) = (*l_451);
                    }
                    else
                    {
                        volatile int **l_518 = &g_516;
                        (*l_518) = g_516;
                    }
                    for (l_405 = 7; (l_405 == 42); l_405 = safe_add_func_int8_t_s_s(l_405, 8))
                    {
                        return g_414;
                    }
                }
                if ((((65528UL | (((((l_482 != (&g_370 != l_466)) != ((((!(l_423[7][0] >= (safe_div_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_18, (-6L))), 3)) >= 0UL), 0x289DCFF2L)))) ^ 4294967292UL) < l_500) == 4294967295UL)) > (-7L)) != 0x80L) ^ 0UL)) != g_25) & g_65))
                {
                    char l_529 = (-4L);
                    (*g_370) = (*g_370);
                    (*l_469) = (*g_370);
                    if (l_529)
                        break;
                }
                else
                {
                    char l_537 = 0x54L;
                    (*g_64) = ((&g_370 == l_530) & ((g_414 && g_517) <= (g_25 || g_194)));
                }
                (*g_369) = (*g_369);
            }
            for (g_194 = (-22); (g_194 <= 13); g_194++)
            {
                (*l_451) = (safe_div_func_int8_t_s_s(g_414, g_414));
            }
        }
    }
    else
    {
        int *l_546[2];
        char l_577 = 0x48L;
        int l_603 = 1L;
        int l_626 = 1L;
        short l_682 = 0x2F00L;
        int i;
        for (i = 0; i < 2; i++)
            l_546[i] = &g_109;
        (*g_139) = (&g_370 == l_545);
        for (g_243 = 0; (g_243 <= 0); g_243 += 1)
        {
            unsigned char l_548[9][10][2] = {{{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}, {1UL, 1UL}}};
            short l_551 = 0L;
            int *l_590 = &g_65;
            int l_616 = 0L;
            unsigned short l_618 = 65527UL;
            unsigned short l_649 = 0x1CDDL;
            int i, j, k;
            (*g_370) = l_546[1];
            (***l_545) = (**g_370);
            for (g_414 = 0; (g_414 <= 0); g_414 += 1)
            {
                int *l_547 = &g_414;
                unsigned l_556 = 1UL;
                unsigned l_574[8][4][8] = {{{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}, {{0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}, {0UL, 4294967295UL, 0x50E7F090L, 9UL, 0UL, 0x7D08A530L, 0xCA392003L, 0xE50E91ABL}}};
                int i, j, k;
            }
            if (((+(safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_s(func_2((***l_466), l_551, (g_140 > (((***l_545) >= (safe_add_func_uint32_t_u_u(g_109, (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((g_105[0][0][2] >= ((void*)0 == (*g_369))), l_548[4][1][1])), 15))))) | (***l_545))), l_551, l_548[4][1][1]), 3))))) >= g_140))
            {
                unsigned short l_602 = 0xA864L;
                for (l_577 = 0; (l_577 <= 0); l_577 += 1)
                {
                    char l_594 = 0x50L;
                    unsigned l_601[3];
                    unsigned short l_604 = 0UL;
                    int l_605 = 0x14B9D376L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_601[i] = 0x40804DAEL;
                    if ((g_194 != (((***l_466) && 2UL) < g_105[0][0][1])))
                    {
                        int *l_589 = &g_65;
                        (**g_369) = (**g_369);
                        (**l_545) = l_589;
                        return g_25;
                    }
                    else
                    {
                        short l_593[4] = {0xAE2DL, 0xA965L, 0xAE2DL, 0xA965L};
                        int i;
                        (*g_370) = l_590;
                        if ((*l_590))
                            break;
                        l_605 = (l_604 >= 0x5AL);
                    }
                    for (g_109 = 0; (g_109 >= 0); g_109 -= 1)
                    {
                        (**g_369) = &l_605;
                        (*g_516) = (*g_139);
                        (**l_466) = l_590;
                    }
                }
                for (l_551 = 0; (l_551 <= 0); l_551 += 1)
                {
                    unsigned l_608[8] = {5UL, 0xA0242A00L, 5UL, 0xA0242A00L, 5UL, 0xA0242A00L, 5UL, 0xA0242A00L};
                    int i;
                    if (((safe_mul_func_uint8_t_u_u((0x1634B710L < (!l_608[0])), g_517)) || ((l_602 && 0xB0BDL) & g_517)))
                    {
                        (***l_466) = (*g_64);
                        return g_25;
                    }
                    else
                    {
                        (*g_516) = (*g_64);
                        return g_326;
                    }
                }
                (***l_545) = 0x0CCD1347L;
                (**l_545) = (*g_370);
            }
            else
            {
                int l_613 = 0x9E6E4D09L;
                unsigned l_619 = 1UL;
                if ((safe_mul_func_int16_t_s_s((l_613 && 0x45F8L), func_2(g_82, l_613, g_82, (safe_lshift_func_uint16_t_u_u(0x7DD1L, 3)), l_613))))
                {
                    unsigned l_617 = 4294967289UL;
                    int l_633 = 0x26631ACEL;
                    (*g_370) = func_43((**l_545), l_616, &l_603, func_49(l_617, (*g_370)), l_618);
                    l_613 = ((*l_590) >= (l_619 || g_82));
                    (*g_516) = ((safe_lshift_func_uint16_t_u_s(l_617, (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(l_617, (func_33(g_18, g_326, g_108, l_626, (**g_370)) || 1UL))) || l_619), 0x8895D589L)))) == g_105[0][0][1]);
                    for (g_326 = 0; (g_326 <= 0); g_326 += 1)
                    {
                        int i;
                        (***g_369) = (l_546[(g_326 + 1)] == (void*)0);
                        (*g_64) = (safe_mul_func_uint16_t_u_u(l_613, (*l_590)));
                    }
                }
                else
                {
                    char l_652[4] = {5L, 0xDCL, 5L, 0xDCL};
                    int i;
                    for (g_414 = 0; (g_414 >= 0); g_414 -= 1)
                    {
                        short l_644 = 0x7D97L;
                        int l_657 = 7L;
                        (*g_370) = (*g_370);
                        (*g_64) = (*g_516);
                        (*g_370) = func_43(func_49((((func_52((**l_545), &l_616, ((safe_sub_func_int8_t_s_s(l_644, ((g_243 < (safe_rshift_func_uint16_t_u_s(func_2(((***l_545) ^ (safe_add_func_uint8_t_u_u(g_109, ((void*)0 == &g_370)))), l_619, g_140, l_613, g_82), 14))) || l_649))) || (*l_590))) > g_194) && 0x95CAE070L) & 1UL), &l_616), l_644, (**g_369), (**g_369), g_194);
                        (*g_370) = func_39(&l_613, l_657, (**g_369));
                    }
                    (*g_370) = (*g_370);
                    for (l_616 = 0; (l_616 <= 0); l_616 += 1)
                    {
                        (*g_370) = func_49(((0UL < (-10L)) == (g_243 < (safe_mod_func_uint32_t_u_u((((((safe_rshift_func_uint8_t_u_s(g_517, 6)) == (g_82 >= (0xC4L <= (((void*)0 != (*g_369)) & 1L)))) < (*l_590)) == (***l_545)) > 1UL), (-8L))))), (*g_370));
                        (*g_370) = (*g_370);
                    }
                    (**l_545) = func_49((safe_sub_func_uint16_t_u_u(l_613, 0xBF7BL)), &l_626);
                }
                if ((*l_590))
                    break;
            }
            for (l_626 = 0; (l_626 >= 0); l_626 -= 1)
            {
                (*g_370) = &l_626;
                return g_65;
            }
        }
        for (g_243 = 27; (g_243 == 16); g_243--)
        {
            int ***l_677 = &g_370;
        }
        return g_109;
    }
    return g_326;
}







static int func_2(unsigned p_3, int p_4, int p_5, unsigned char p_6, unsigned short p_7)
{
    int **l_401 = &g_64;
    (*g_139) = (g_246 && ((void*)0 != l_401));
    (*l_401) = (**g_369);
    (**l_401) = (*g_64);
    return p_5;
}







static unsigned char func_14(unsigned short p_15, char p_16, unsigned p_17)
{
    int l_207 = 0x2B63680AL;
    int *l_209 = &g_140;
    unsigned l_284 = 0xC445802CL;
    unsigned char l_306 = 0xF6L;
    int **l_400 = &l_209;
    g_184 = (void*)0;
    for (g_25 = 0; (g_25 <= 20); g_25 = safe_add_func_uint32_t_u_u(g_25, 4))
    {
        int *l_208 = &g_140;
        short l_218 = 0x4976L;
        int *l_230 = &g_109;
        unsigned l_325 = 4294967295UL;
        char l_349 = 0xAFL;
        int ***l_399 = &g_370;
    }
    (***g_369) = (p_16 != 0x13A1359EL);
    return g_18;
}







static unsigned char func_29(int p_30, unsigned p_31, short p_32)
{
    int **l_193[10];
    int *l_195 = &g_108;
    int l_202 = 0x3A50B06DL;
    int i;
    for (i = 0; i < 10; i++)
        l_193[i] = &g_139;
    g_139 = &g_140;
    g_139 = &g_82;
    (*g_139) = 0xB1B58F1CL;
    (*g_184) = (*g_139);
    return (*l_195);
}







static unsigned func_33(short p_34, short p_35, unsigned char p_36, int p_37, int p_38)
{
    int *l_81 = &g_82;
    int **l_183[1][9][6] = {{{&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}, {&g_64, &g_64, &g_139, (void*)0, &g_139, (void*)0}}};
    int i, j, k;
    g_184 = func_39(func_43(func_49(func_52(func_56((safe_sub_func_int32_t_s_s(g_25, (safe_mod_func_int16_t_s_s(g_25, (-3L))))), g_64, p_38), l_81, g_82), l_81), p_37, g_139, &g_140, g_25), p_35, l_81);
    g_184 = func_39(&g_82, g_109, &g_109);
    for (g_65 = 0; (g_65 > (-5)); --g_65)
    {
        int l_189[9] = {0x697B8A6DL, 0x697B8A6DL, (-6L), 0x697B8A6DL, 0x697B8A6DL, (-6L), 0x697B8A6DL, 0x697B8A6DL, (-6L)};
        int *l_192[3];
        int i;
        for (i = 0; i < 3; i++)
            l_192[i] = &g_108;
        for (p_35 = (-21); (p_35 >= (-13)); p_35 = safe_add_func_uint8_t_u_u(p_35, 8))
        {
            (*g_139) = l_189[4];
            g_64 = &g_82;
            (*g_139) = p_38;
        }
        for (p_38 = 0; (p_38 == 9); p_38 = safe_add_func_int32_t_s_s(p_38, 7))
        {
            l_192[0] = (void*)0;
        }
    }
    (*g_64) = (*g_64);
    return g_109;
}







static int * func_39(int * p_40, unsigned short p_41, int * p_42)
{
    int **l_182 = &g_139;
    (*p_42) = (-10L);
    (*l_182) = &g_109;
    return &g_108;
}







static int * func_43(int * p_44, int p_45, int * p_46, int * p_47, unsigned p_48)
{
    int *l_146 = &g_109;
    int l_156 = (-1L);
    unsigned short l_166 = 0x3135L;
    for (g_65 = 0; (g_65 < 26); ++g_65)
    {
        int *l_145[5];
        int i;
        for (i = 0; i < 5; i++)
            l_145[i] = &g_109;
        for (g_140 = 0; (g_140 >= 0); g_140 -= 1)
        {
            int l_155[6] = {0x69C6CBE7L, 0xECE3592EL, 0x69C6CBE7L, 0xECE3592EL, 0x69C6CBE7L, 0xECE3592EL};
            int **l_161[5][6][3] = {{{&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}}, {{&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}}, {{&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}}, {{&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}}, {{&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}, {&l_145[2], (void*)0, &l_145[2]}}};
            short l_171 = (-2L);
            int i, j, k;
            for (p_48 = 0; (p_48 <= 0); p_48 += 1)
            {
                int *l_143 = (void*)0;
                int **l_144[6][7][6] = {{{&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}}, {{&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}}, {{&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}}, {{&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}}, {{&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}}, {{&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}, {&l_143, (void*)0, &l_143, &l_143, &g_139, &l_143}}};
                int i, j, k;
                l_145[2] = l_143;
                p_47 = l_146;
            }
            (*g_64) = (safe_sub_func_int32_t_s_s((p_48 ^ (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_108, 6)), ((((g_105[0][1][2] <= (((*l_146) != (safe_sub_func_int32_t_s_s(l_155[2], (l_156 | (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((&p_45 == (void*)0), g_105[0][0][2])), l_155[2])))))) | 4294967295UL)) == p_48) >= 4UL) | g_65)))), p_48));
            g_64 = l_146;
            p_46 = &g_65;
            for (g_82 = 0; (g_82 <= 0); g_82 += 1)
            {
                char l_172 = 0xA0L;
                (*l_146) = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((g_140 ^ (l_166 || p_45)), 2)) & (((*g_139) < 0x844FDB9DL) || g_25)), (~(safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((p_48 == (0xC248L ^ ((g_140 < p_48) & l_171))) == p_45), l_172)), g_65)))));
                p_46 = &g_108;
            }
        }
    }
    for (g_65 = 0; (g_65 >= 0); g_65 -= 1)
    {
        int *l_173 = (void*)0;
        int **l_174 = &g_139;
        g_139 = (void*)0;
        (*l_174) = l_173;
        for (l_166 = 0; (l_166 <= 0); l_166 += 1)
        {
            unsigned l_177[3];
            int i;
            for (i = 0; i < 3; i++)
                l_177[i] = 8UL;
            for (p_45 = 0; (p_45 <= 0); p_45 += 1)
            {
                int *l_175 = &g_140;
                int i, j, k;
                if (g_105[l_166][(l_166 + 1)][(p_45 + 1)])
                {
                    int i, j, k;
                    if (g_105[g_65][l_166][p_45])
                        break;
                }
                else
                {
                    int *l_176 = &g_82;
                    l_176 = l_175;
                }
                (*p_47) = ((l_177[0] <= (safe_div_func_uint32_t_u_u(p_45, p_45))) != (l_177[0] ^ ((safe_div_func_uint16_t_u_u(g_82, (((((void*)0 == &p_44) || ((*l_175) & (*l_175))) > (*l_146)) & (*l_175)))) >= (*l_175))));
            }
            for (p_45 = 0; (p_45 >= 0); p_45 -= 1)
            {
                return &g_140;
            }
        }
    }
    return l_146;
}







static int * func_49(int p_50, int * p_51)
{
    int l_116[4][5][10] = {{{0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}}, {{0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}}, {{0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}}, {{0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}, {0x2C0FF22BL, 0xB5AAB374L, 4L, 0x99B5C0F6L, (-1L), (-1L), 0x087C2297L, 9L, 9L, 0x087C2297L}}};
    unsigned short l_129 = 65531UL;
    int *l_138 = &g_109;
    int i, j, k;
    for (g_82 = 0; (g_82 <= 0); g_82 += 1)
    {
        int **l_106 = &g_64;
        (*l_106) = p_51;
        g_64 = (*l_106);
        if ((*g_64))
            continue;
        for (g_65 = 0; (g_65 >= 0); g_65 -= 1)
        {
            unsigned short l_107 = 0x8CF6L;
            int *l_119 = &g_109;
            (*l_106) = p_51;
            for (p_50 = 0; (p_50 <= 0); p_50 += 1)
            {
                int *l_135[4];
                unsigned l_136 = 4294967287UL;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_135[i] = &g_65;
                l_107 = g_105[g_82][(g_82 + 1)][(g_65 + 1)];
            }
            for (l_107 = 0; (l_107 <= 0); l_107 += 1)
            {
                (*l_106) = (*l_106);
                if ((*g_64))
                    continue;
                for (g_109 = 0; (g_109 >= 0); g_109 -= 1)
                {
                    int *l_137 = &g_109;
                    for (g_108 = 0; (g_108 <= 0); g_108 += 1)
                    {
                        (*l_106) = l_137;
                    }
                }
                for (g_108 = 0; (g_108 <= 0); g_108 += 1)
                {
                    (*l_106) = &g_82;
                    (*l_106) = p_51;
                    (*l_106) = l_119;
                    if ((*p_51))
                    {
                        (*l_106) = p_51;
                        (*l_106) = &g_109;
                    }
                    else
                    {
                        return p_51;
                    }
                }
            }
        }
    }
    return l_138;
}







static int func_52(int * p_53, int * p_54, int p_55)
{
    int *l_99[6];
    unsigned l_100[5][3][8] = {{{0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}}, {{0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}}, {{0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}}, {{0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}}, {{0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}, {0x5B73647BL, 0xF6E5819CL, 0UL, 0x503A71B0L, 0xC92AC9E0L, 0xC92AC9E0L, 0x503A71B0L, 0UL}}};
    int **l_101[7] = {&l_99[1], &l_99[1], (void*)0, &l_99[1], &l_99[1], (void*)0, &l_99[1]};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_99[i] = &g_65;
    g_64 = func_56((p_55 && (((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_82, (safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_65, ((safe_sub_func_int32_t_s_s(((~g_65) | p_55), (safe_div_func_int8_t_s_s(((((+(p_55 | (0x76AFL == (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(p_55, 14)), ((void*)0 != l_99[1])))))) & g_25) < 7L) ^ l_100[0][1][6]), (-1L))))) && p_55))), g_82)))), 0x2EL)) ^ g_65) < p_55)), &g_82, g_82);
    for (g_82 = (-22); (g_82 != (-11)); g_82 = safe_add_func_uint32_t_u_u(g_82, 9))
    {
        unsigned short l_104 = 0x6DEAL;
        if (l_104)
            break;
    }
    g_64 = &g_82;
    return p_55;
}







static int * func_56(int p_57, int * p_58, char p_59)
{
    int *l_66 = &g_65;
    int **l_67[5][9][5] = {{{&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}}, {{&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}}, {{&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}}, {{&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}}, {{&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}, {&l_66, (void*)0, &g_64, &g_64, &l_66}}};
    int *l_68[2][8][9] = {{{&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}}, {{&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}, {&g_65, (void*)0, &g_65, (void*)0, (void*)0, &g_65, (void*)0, &g_65, &g_65}}};
    unsigned l_69[2][4][5] = {{{0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}, {0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}, {0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}, {0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}}, {{0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}, {0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}, {0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}, {0x88240862L, 0xA7E8B7DDL, 4294967291UL, 1UL, 0xA7E8B7DDL}}};
    unsigned l_70 = 0UL;
    int *l_79 = &g_65;
    int *l_80 = &g_65;
    int i, j, k;
    l_68[0][6][3] = l_66;
    (*g_64) = (*g_64);
    if (l_69[1][1][2])
    {
        l_70 = (*p_58);
        p_58 = p_58;
    }
    else
    {
        int *l_73 = (void*)0;
        (*p_58) = (*g_64);
        p_58 = &g_65;
        for (l_70 = (-5); (l_70 >= 2); ++l_70)
        {
            int *l_76[8] = {&g_65, (void*)0, &g_65, (void*)0, &g_65, (void*)0, &g_65, (void*)0};
            int i;
            p_58 = l_73;
            for (p_59 = (-30); (p_59 < (-3)); p_59 = safe_add_func_uint16_t_u_u(p_59, 8))
            {
                for (p_57 = 4; (p_57 >= 0); p_57 -= 1)
                {
                    int i, j, k;
                    l_67[p_57][(p_57 + 1)][p_57] = (void*)0;
                    for (g_65 = 1; (g_65 >= 0); g_65 -= 1)
                    {
                        int i, j, k;
                        l_68[g_65][p_57][(g_65 + 2)] = l_68[g_65][(g_65 + 2)][(p_57 + 1)];
                    }
                }
                (*l_66) = (*g_64);
                return l_76[1];
            }
            l_73 = &g_65;
        }
        (*g_64) = (safe_rshift_func_int16_t_s_s(g_65, 2));
    }
    p_58 = l_79;
    return l_80;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_105[i][j][k], "g_105[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
