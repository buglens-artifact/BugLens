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



static int g_2 = 0xDF99FF60L;
static int g_87 = (-1L);
static int g_88[10] = {1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L), 1L, (-8L)};
static int *g_104 = (void*)0;
static int **g_103 = &g_104;
static int g_116 = (-10L);
static unsigned g_166 = 0x71139916L;
static int g_197 = (-1L);
static const char g_232 = (-1L);
static char g_284 = (-6L);
static short g_329 = 0x51C9L;
static unsigned short g_501 = 65526UL;
static const unsigned char g_641 = 0UL;
static int g_668 = 0L;
static int g_707 = (-7L);
static unsigned char g_856 = 0UL;
static int g_863[10][7] = {{7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}, {7L, 0x51661750L, (-2L), 0x51661750L, 7L, 0x51661750L, (-2L)}};
static unsigned g_882 = 0x46549289L;



static unsigned func_1(void);
static char func_10(short p_11, unsigned p_12);
static int func_14(int p_15);
static unsigned char func_18(short p_19, unsigned p_20, unsigned char p_21, unsigned p_22, int p_23);
static short func_24(int p_25);
static const short func_28(char p_29, int p_30, int p_31);
static int func_38(int p_39, unsigned short p_40, int p_41, unsigned char p_42, const short p_43);
static unsigned short func_44(unsigned p_45);
static const unsigned func_49(unsigned char p_50);
static unsigned char func_52(unsigned p_53);
static unsigned func_1(void)
{
    int l_13 = 0xF1F13B01L;
    int l_876 = 0L;
    unsigned char l_887[6][5][3] = {{{0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}}, {{0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}}, {{0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}}, {{0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}}, {{0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}}, {{0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}, {0UL, 255UL, 1UL}}};
    int i, j, k;
    for (g_2 = 0; (g_2 != (-5)); --g_2)
    {
        const int l_7 = 4L;
        int *l_861 = (void*)0;
        int *l_862 = (void*)0;
        int **l_873 = &l_861;
        int l_883 = 0x315A3BCDL;
        int *l_888[5];
        int i;
        for (i = 0; i < 5; i++)
            l_888[i] = &l_13;
        g_863[3][2] &= (((g_2 < (~g_2)) , ((safe_mul_func_uint16_t_u_u((l_7 == ((safe_add_func_int8_t_s_s(func_10(l_7, l_13), g_232)) <= (safe_mul_func_int8_t_s_s(1L, l_13)))), l_7)) ^ g_641)) > g_232);
        for (g_501 = 0; (g_501 <= 6); g_501 += 1)
        {
            unsigned l_864 = 0UL;
            const int *l_877 = &g_87;
            int l_886 = 0x0205E98DL;
            for (g_668 = 0; (g_668 <= 6); g_668 += 1)
            {
                for (l_13 = 6; (l_13 >= 0); l_13 -= 1)
                {
                    int i, j;
                    (*g_103) = &g_863[(g_668 + 3)][g_501];
                    if ((**g_103))
                    {
                        int i, j;
                        l_864 ^= func_14(g_863[3][4]);
                        (*g_103) = (l_864 , (*g_103));
                    }
                    else
                    {
                        if ((*g_104))
                            break;
                    }
                }
            }
            for (g_668 = (-18); (g_668 >= (-7)); g_668 = safe_add_func_int32_t_s_s(g_668, 1))
            {
                int *l_875 = (void*)0;
                for (l_13 = 0; (l_13 <= 6); l_13 += 1)
                {
                    int * const l_874 = &g_863[5][1];
                    const unsigned l_884 = 5UL;
                    int i, j;
                    for (g_707 = 6; (g_707 >= 0); g_707 -= 1)
                    {
                        int *l_885 = &l_876;
                        int i, j;
                        (*g_103) = &g_863[(g_707 + 3)][g_707];
                        g_863[(l_13 + 2)][l_13] = g_88[(g_501 + 3)];
                        l_876 &= ((safe_rshift_func_int8_t_s_u(func_38(g_501, g_707, (((g_863[3][2] == 0x18D3L) | (safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((g_856 , &g_104) == (g_329 , l_873)), (func_14((l_874 == l_875)) , g_863[(l_13 + 2)][l_13]))), g_863[1][0]))) >= (**g_103)), (*l_874), g_232), 3)) , 0L);
                        (*l_885) |= (func_38(g_197, (((((((**g_103) & ((**g_103) || (~func_52(((l_877 == (*g_103)) , ((((*g_104) , (safe_rshift_func_int8_t_s_s((((void*)0 != &g_88[(g_707 + 2)]) <= (safe_sub_func_int8_t_s_s(0L, 5UL))), 0))) , g_863[3][2]) , g_882)))))) > g_197) , 0xC0A6FE62L) , (void*)0) == (void*)0) , l_883), g_166, g_284, l_884) != 0x5FL);
                    }
                    return g_863[g_501][l_13];
                }
                (*l_873) = (*g_103);
                l_886 &= 0L;
            }
        }
        g_863[3][2] = l_887[3][3][0];
    }
    return g_707;
}







static char func_10(short p_11, unsigned p_12)
{
    char l_46 = 0L;
    int **l_543[5][4] = {{&g_104, &g_104, &g_104, &g_104}, {&g_104, &g_104, &g_104, &g_104}, {&g_104, &g_104, &g_104, &g_104}, {&g_104, &g_104, &g_104, &g_104}, {&g_104, &g_104, &g_104, &g_104}};
    int * const *l_550 = &g_104;
    int i, j;
    g_856 |= (func_14((safe_lshift_func_uint8_t_u_s(func_18(((((g_2 ^ (func_24((safe_mod_func_int16_t_s_s(func_28((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((func_38((func_44(l_46) , (l_543[3][0] != ((g_232 , (((safe_rshift_func_uint16_t_u_s((p_11 | p_12), 10)) == ((safe_lshift_func_int16_t_s_s(0x1C55L, ((((safe_lshift_func_uint8_t_u_s((p_12 , g_197), 5)) , (void*)0) != l_550) | p_12))) < g_329)) & g_284)) , (void*)0))), p_12, g_2, p_11, g_2) | g_232), 0x28E3F0F9L)), p_12)), 0xEE27L)), g_232, p_12), 0x80E3L))) > g_232)) < g_232) , 0x97L) | g_641), p_11, p_11, p_12, p_11), p_12))) || p_11);
    g_88[6] = func_18(p_12, func_49(g_116), (safe_lshift_func_uint16_t_u_u(g_668, 11)), g_856, g_668);
    return p_12;
}







static int func_14(int p_15)
{
    int *l_855 = &g_87;
    (*l_855) = 1L;
    (*l_855) = (*l_855);
    (*l_855) = (*l_855);
    return p_15;
}







static unsigned char func_18(short p_19, unsigned p_20, unsigned char p_21, unsigned p_22, int p_23)
{
    short l_774 = 0x8747L;
    unsigned l_778 = 0x333E2279L;
    int *l_779 = &g_88[8];
    int *l_780 = (void*)0;
    (*l_779) = (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_774, p_23)), (((l_774 < func_52(p_21)) , g_329) , ((((safe_sub_func_int8_t_s_s((+((g_707 == ((safe_unary_minus_func_uint8_t_u((l_778 && (!g_329)))) , g_88[9])) <= l_774)), p_21)) , l_778) < l_774) ^ p_20))));
    (*g_103) = l_780;
    for (g_284 = (-6); (g_284 >= 18); g_284++)
    {
        int *l_791 = &g_707;
        const int l_834 = (-5L);
        char l_852 = (-1L);
        int ***l_853 = &g_103;
        for (p_21 = (-14); (p_21 < 20); p_21 = safe_add_func_uint8_t_u_u(p_21, 5))
        {
            int l_785 = 0x0E6A8C0EL;
            int * const l_790 = (void*)0;
            if (l_785)
                break;
        }
    }
    return (*l_779);
}







static short func_24(int p_25)
{
    int ** const l_678 = &g_104;
    const short l_744 = (-3L);
    unsigned l_750 = 4294967293UL;
    int *l_769[5][8][5] = {{{&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}}, {{&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}}, {{&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}}, {{&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}}, {{&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}, {&g_197, (void*)0, &g_197, &g_87, &g_2}}};
    int i, j, k;
    if ((!((void*)0 != l_678)))
    {
        unsigned short l_685 = 9UL;
        for (g_668 = 21; (g_668 <= 27); ++g_668)
        {
            char l_686 = 0xB2L;
            int *l_687 = &g_88[0];
            (*l_687) ^= (((safe_add_func_int32_t_s_s(p_25, ((g_87 ^ (((safe_lshift_func_uint8_t_u_u((p_25 ^ ((g_232 && 0x3AL) , g_2)), 1)) >= (!p_25)) && (((((l_685 & l_686) && 0UL) , g_166) == 0x25L) > 0xEA4F172EL))) ^ l_685))) , 0x1BL) >= l_685);
        }
    }
    else
    {
        unsigned l_692 = 0x5D7BEA9AL;
        char l_704 = 1L;
        int l_708 = (-1L);
        int **l_767 = &g_104;
        for (g_329 = 9; (g_329 <= (-26)); g_329--)
        {
            int *l_690 = (void*)0;
            int *l_691 = &g_197;
            int l_705 = 0x07856A5CL;
            (*l_691) = 0x22F98BA9L;
            l_692 = p_25;
            for (g_87 = 0; (g_87 <= 9); g_87 += 1)
            {
                short l_697[9][7] = {{0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}, {0L, 8L, 0xCB19L, (-6L), 0x4CA4L, 0x4CA4L, (-6L)}};
                int *l_706 = &g_707;
                int i, j;
                (*l_706) &= (l_692 | func_38(p_25, (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(0x0B34L, l_697[6][3])), func_38((+(func_38(((func_38((safe_mul_func_int8_t_s_s((func_38(func_38(p_25, g_197, (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((g_87 , (*l_691)) < func_38(p_25, g_116, p_25, l_692, g_87)), l_697[6][3])) && p_25), l_704)), g_329, g_284), p_25, g_197, (*l_691), l_692) != p_25), g_668)), g_329, g_668, p_25, p_25) < 0UL) | p_25), p_25, g_166, g_232, g_501) < g_668)), l_705, g_284, p_25, l_697[6][3]))), g_2, g_329, (*l_691)));
                l_708 = p_25;
            }
            return g_88[0];
        }
        for (g_166 = 0; (g_166 != 5); ++g_166)
        {
            unsigned l_720 = 4294967295UL;
            int l_723 = 0L;
            int *l_756 = &l_723;
            int l_768 = 1L;
            for (g_329 = 0; (g_329 == 28); ++g_329)
            {
                int l_721[7][6] = {{0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}, {0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}, {0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}, {0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}, {0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}, {0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}, {0x3C7C5C0DL, 0L, 0xC53BF6BEL, 9L, 0xC53BF6BEL, 0L}};
                int i, j;
                if ((6L & p_25))
                {
                    int **l_715 = &g_104;
                    for (g_501 = 0; (g_501 <= 9); g_501 += 1)
                    {
                        int *l_722[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_722[i] = (void*)0;
                        l_723 |= (safe_sub_func_int32_t_s_s(func_52(g_88[g_501]), (0x214B7C65L != (((void*)0 != l_715) | (safe_mod_func_uint8_t_u_u((p_25 < (((((((0x6A66L || g_284) <= (safe_lshift_func_int8_t_s_s(g_166, l_720))) , p_25) ^ 1UL) ^ g_641) > l_721[0][2]) || p_25)), g_197))))));
                        g_197 = (((((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_329, p_25)) <= ((safe_unary_minus_func_int32_t_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(func_52(g_329), p_25)), (0xF75AL | l_721[0][2]))))) , 0x591BL)), 0xF8A8L)), l_708)), 2)) , g_329) , (void*)0) == (void*)0) | g_232);
                        (*l_678) = &g_88[g_501];
                        if ((**g_103))
                            continue;
                    }
                    g_197 = (g_2 < ((((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((0x77EBL | (g_87 , l_721[0][2])), ((((((safe_unary_minus_func_int32_t_s((p_25 ^ (func_38(g_641, g_284, (safe_rshift_func_int8_t_s_s((g_166 , func_38(p_25, p_25, g_88[0], p_25, p_25)), g_668)), p_25, p_25) <= p_25)))) , 0UL) , l_720) , 65535UL) | 0xD9AAL) && 2UL))) | g_284) <= p_25), 0)) , g_2) != p_25) <= g_641));
                    if (l_704)
                        continue;
                    if ((p_25 < l_744))
                    {
                        short l_749 = 5L;
                        l_708 = ((p_25 , (l_721[0][2] && 0x24L)) >= ((0xFAL <= (safe_mod_func_int8_t_s_s((~(safe_rshift_func_int8_t_s_u(((+1L) || l_749), ((g_232 != l_721[0][2]) & 0xECB6C1DEL)))), p_25))) != 0x84L));
                        (*g_103) = &g_197;
                        (*g_103) = &l_708;
                        (*g_103) = &l_723;
                    }
                    else
                    {
                        int *l_753 = &l_723;
                        l_723 ^= p_25;
                        if (l_708)
                            continue;
                        if (l_750)
                            continue;
                        (*l_753) = (safe_mod_func_int16_t_s_s((4294967295UL | p_25), g_232));
                    }
                }
                else
                {
                    g_197 ^= (-2L);
                    return g_88[2];
                }
            }
            (*l_756) = ((safe_mul_func_int8_t_s_s(0xDDL, 6UL)) >= 0L);
            for (g_197 = 0; (g_197 < 23); g_197++)
            {
                l_756 = &l_708;
                l_768 &= func_52((((*l_756) , (((safe_add_func_int32_t_s_s(0L, (safe_mul_func_uint8_t_u_u(0x72L, g_284)))) == ((safe_lshift_func_int16_t_s_s(g_88[1], 5)) , ((safe_rshift_func_uint16_t_u_s((!((void*)0 != &g_197)), 13)) && ((((g_197 < p_25) && 4294967291UL) , l_767) == &l_756)))) > 0x19L)) != p_25));
                (*l_756) = 0L;
            }
        }
        (*l_678) = l_769[4][0][0];
        g_197 = (l_767 != &l_769[1][2][1]);
    }
    return p_25;
}







static const short func_28(char p_29, int p_30, int p_31)
{
    int l_591 = (-10L);
    int * const *l_626[8][9][3] = {{{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}, {{&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}, {&g_104, (void*)0, &g_104}}};
    int i, j, k;
    for (g_197 = 0; (g_197 != 26); g_197++)
    {
        int **l_559 = &g_104;
        int *l_560 = &g_88[9];
        int **l_586 = &g_104;
        unsigned char l_611 = 1UL;
        (*l_560) ^= ((((void*)0 != &p_31) || ((void*)0 == l_559)) & 2L);
        if (g_166)
            break;
        (*l_559) = &g_88[0];
        if ((g_88[0] == (0xDE9628D2L != (**l_559))))
        {
            return g_88[0];
        }
        else
        {
            short l_572 = 3L;
            unsigned char l_650 = 6UL;
            unsigned l_677 = 0xAA1D503FL;
            for (p_31 = 0; (p_31 == (-13)); p_31--)
            {
                unsigned char l_575 = 0x19L;
                short l_618[10] = {(-6L), 0xE5B1L, (-2L), (-2L), 0xE5B1L, (-6L), 0xE5B1L, (-2L), (-2L), 0xE5B1L};
                int i;
                for (g_501 = 0; (g_501 <= 9); g_501 += 1)
                {
                    for (g_284 = 2; (g_284 <= 9); g_284 += 1)
                    {
                        int i;
                        if (g_88[g_284])
                            break;
                        g_88[g_501] = func_38(p_31, g_329, g_88[g_284], g_284, ((safe_mul_func_int16_t_s_s(g_329, (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((safe_add_func_uint16_t_u_u(0x72E1L, (255UL == (l_572 | (safe_lshift_func_uint8_t_u_u(p_29, l_575)))))))) , (-1L)), 0x36BCL)), 5)))) == (**l_559)));
                    }
                    for (g_166 = 0; (g_166 <= 9); g_166 += 1)
                    {
                        int i;
                        g_88[g_166] = (+g_88[g_166]);
                        g_88[g_166] = func_52(g_88[g_166]);
                        if (l_575)
                            break;
                    }
                }
                (*l_560) = (((**g_103) && 0L) != (*l_560));
            }
            for (g_329 = 9; (g_329 >= 2); g_329 -= 1)
            {
                int i;
                (*l_560) = (&g_88[g_329] != (*g_103));
            }
            (**g_103) = (g_166 ^ p_31);
            if ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x76L, 3)), (safe_mul_func_int8_t_s_s(p_29, (g_197 & (((p_30 && (((safe_mul_func_int8_t_s_s(l_650, (g_641 != 0x8FL))) & (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((((func_52(((safe_mul_func_uint16_t_u_u((**l_559), p_30)) , g_329)) , p_31) < g_232) , 0xB0L) > g_329), 3)), p_29))) == p_31)) <= p_30) > 0x5977F21CL)))))))
            {
                const char l_667 = 0x3DL;
                g_668 ^= ((safe_sub_func_int32_t_s_s((0xDAL == p_29), func_38(p_31, (p_30 != (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_mod_func_int8_t_s_s((g_232 , ((l_667 && 0xA37D48F3L) || (*l_560))), g_166)) , g_87) < l_650), g_166)), 7)) , g_116), g_641))), g_284, g_116, p_30))) & g_641);
            }
            else
            {
                (**g_103) = (((safe_lshift_func_int8_t_s_s(l_650, (&l_560 != &g_104))) , (safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(func_38(l_650, l_650, (g_87 ^ (safe_rshift_func_uint8_t_u_u(((+((void*)0 != &p_31)) >= p_31), 7))), l_677, p_31), p_29)), p_30))) < 0xEF13L);
            }
        }
    }
    g_88[0] = p_31;
    return p_31;
}







static int func_38(int p_39, unsigned short p_40, int p_41, unsigned char p_42, const short p_43)
{
    const int *l_551 = &g_197;
    int l_552 = 0L;
    char l_553 = (-1L);
    int *l_554 = &g_88[4];
    l_552 = (((g_88[9] && 0x06L) , (l_551 == l_551)) & (*l_551));
    (*l_554) = (l_553 && (((*l_551) , &l_552) == ((*l_551) , &l_552)));
    return (*l_554);
}







static unsigned short func_44(unsigned p_45)
{
    int *l_337 = &g_88[4];
    int *l_343 = (void*)0;
    int l_370 = 0x69CFEAE6L;
    unsigned l_527 = 4294967295UL;
    for (p_45 = 0; (p_45 == 32); p_45++)
    {
        if (g_2)
            break;
    }
    if (((func_49(p_45) ^ g_2) , (g_88[0] <= p_45)))
    {
        unsigned l_338 = 0x38D54B95L;
        char l_348 = 0L;
        int *l_355 = &g_87;
        for (g_284 = 0; (g_284 != (-23)); --g_284)
        {
            unsigned l_333 = 9UL;
            int *l_334 = &g_87;
            (*l_334) = l_333;
            if (g_284)
                continue;
        }
        if (((safe_add_func_int8_t_s_s((l_337 != l_337), ((l_338 , (0xBDL ^ g_284)) & (safe_add_func_int32_t_s_s((*l_337), (*l_337)))))) && g_116))
        {
            unsigned l_349 = 0UL;
            int *l_367 = &g_87;
            for (g_197 = 0; (g_197 == (-24)); g_197 = safe_sub_func_int8_t_s_s(g_197, 8))
            {
                (*g_103) = l_343;
            }
lbl_354:
            (*g_103) = (void*)0;
            if (p_45)
            {
                int **l_352 = &l_337;
                for (g_116 = 0; (g_116 == (-28)); g_116 = safe_sub_func_uint32_t_u_u(g_116, 2))
                {
                    for (g_329 = 19; (g_329 < 4); --g_329)
                    {
                        (*l_337) = p_45;
                        if (p_45)
                            continue;
                    }
                }
                for (g_197 = 1; (g_197 <= 9); g_197 += 1)
                {
                    int *l_353 = &g_87;
                    int i;
                    (*l_353) ^= (((+(0UL != (((g_88[g_197] == (l_338 , l_348)) <= (l_349 >= ((0L <= g_88[g_197]) >= (safe_lshift_func_uint8_t_u_s(((p_45 , l_352) != (void*)0), 3))))) ^ (*l_337)))) , 0xC107L) <= 1L);
                    (**l_352) = (*l_353);
                    return p_45;
                }
                if (g_329)
                    goto lbl_354;
                (*l_352) = l_355;
            }
            else
            {
                short l_364 = 0L;
                (*g_103) = (((safe_sub_func_int16_t_s_s(func_49(p_45), p_45)) == (p_45 != (((0x35CBL >= (safe_mul_func_int16_t_s_s(0L, (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_364 ^ ((safe_mod_func_int8_t_s_s((((g_2 <= 5L) ^ p_45) , g_2), 0x3CL)) , p_45)), l_364)), p_45))))) , 0x1D94L) == p_45))) , l_337);
                (*g_103) = l_367;
            }
            for (g_197 = 0; (g_197 <= 0); g_197++)
            {
                int *l_372[6] = {&g_197, &g_87, &g_197, &g_87, &g_197, &g_87};
                unsigned short l_405 = 65531UL;
                int i;
                (*l_355) ^= 0xE2166110L;
                (*l_367) &= l_370;
                for (p_45 = 0; (p_45 <= 9); p_45 += 1)
                {
                    short l_371 = 0x0CB1L;
                    int l_387 = 0xB9D5FF27L;
                    for (g_284 = 9; (g_284 >= 1); g_284 -= 1)
                    {
                        int i;
                        l_371 &= (*l_337);
                        return p_45;
                    }
                    (*g_103) = l_372[4];
                    (*l_367) = (func_52((&g_104 != &g_104)) , (*l_367));
                    if ((safe_lshift_func_int8_t_s_u(((void*)0 != &g_104), 3)))
                    {
                        unsigned short l_386[4];
                        int *l_388 = (void*)0;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_386[i] = 1UL;
                        l_387 |= ((1L > (safe_mul_func_uint8_t_u_u(g_2, ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((void*)0 != &g_104), (((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((((l_386[0] < (p_45 <= g_2)) <= (0x6B35A9A1L != (*g_104))) , 0L) | 252UL), p_45)), (-1L))) != 0x149B38C7L) > 0x15AEL))), p_45)))) < 0xDBL)))) != (*l_367));
                        (*l_337) |= (-1L);
                        if ((**g_103))
                            continue;
                        (*g_103) = l_388;
                    }
                    else
                    {
                        (*l_337) = (((0xCCL || p_45) ^ 0xB085AE07L) == p_45);
                    }
                }
                if ((p_45 > (*l_367)))
                {
                    unsigned short l_404 = 65534UL;
                    int l_409[4][9] = {{(-1L), (-1L), 0x34DA51A6L, 0x103C37D1L, 0x34DA51A6L, (-1L), (-1L), 0x2DB0F317L, (-10L)}, {(-1L), (-1L), 0x34DA51A6L, 0x103C37D1L, 0x34DA51A6L, (-1L), (-1L), 0x2DB0F317L, (-10L)}, {(-1L), (-1L), 0x34DA51A6L, 0x103C37D1L, 0x34DA51A6L, (-1L), (-1L), 0x2DB0F317L, (-10L)}, {(-1L), (-1L), 0x34DA51A6L, 0x103C37D1L, 0x34DA51A6L, (-1L), (-1L), 0x2DB0F317L, (-10L)}};
                    int i, j;
                    if ((safe_unary_minus_func_uint8_t_u((0xF1L | (safe_lshift_func_int16_t_s_s(func_52((((((safe_mul_func_uint16_t_u_u((g_88[0] >= (((safe_lshift_func_int8_t_s_s((*l_367), ((((*l_355) == ((((*l_355) == g_197) < (*l_337)) && (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((g_232 != l_404), 11)) , 0xB4L), g_2)), p_45)) , g_88[0]), p_45)))) | 0x62L) == (-1L)))) == p_45) , g_2)), 0UL)) <= (*l_367)) || l_405) ^ p_45) , 5UL)), g_197))))))
                    {
                        int *l_406 = &g_88[0];
                        l_406 = (*g_103);
                        (*l_337) = func_52(p_45);
                        (*g_103) = (*g_103);
                    }
                    else
                    {
                        l_409[3][5] &= (safe_sub_func_int16_t_s_s(0x4432L, ((*l_337) , g_88[0])));
                        (*g_103) = l_372[2];
                        if (l_409[3][3])
                            continue;
                        (*g_103) = &l_409[3][5];
                    }
                    if ((&l_409[1][6] != l_367))
                    {
                        (*l_367) = p_45;
                    }
                    else
                    {
                        (*g_103) = (*g_103);
                        l_409[0][4] ^= g_2;
                    }
                    return p_45;
                }
                else
                {
                    short l_419 = 0x2E1BL;
                    (*l_367) = (*l_337);
                    (*l_367) = (p_45 & ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_s(0xFDL, ((g_116 == (((func_52(((((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(5L, ((0x159B43EEL == p_45) , ((safe_add_func_int16_t_s_s(((1UL & l_419) == (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_u(l_419, g_284)) != 7L) > 0xA2FF739BL), 8))), (*l_355))) & 1L)))), 1L)) & g_2) > g_284) , p_45)) <= 0xD7CBL) == 0x2A16L) , l_419)) <= p_45))))) ^ l_419));
                    for (l_370 = 0; (l_370 <= (-2)); l_370--)
                    {
                        (*g_103) = l_355;
                        (**g_103) = ((void*)0 == (*g_103));
                        if (p_45)
                            continue;
                        (*g_103) = l_372[4];
                    }
                }
            }
        }
        else
        {
            unsigned l_432 = 0x22B1AB69L;
            int l_433 = 0L;
            int l_487[4] = {0x8D39A2D7L, (-3L), 0x8D39A2D7L, (-3L)};
            int l_489[4][2][10] = {{{9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}, {9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}}, {{9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}, {9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}}, {{9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}, {9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}}, {{9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}, {9L, 0L, (-4L), 0xF1AD761CL, (-1L), 0x5D0D0D1CL, 0L, 0L, 0x5D0D0D1CL, (-1L)}}};
            int **l_500 = &l_343;
            int i, j, k;
            if ((+(func_52(((((g_88[9] && (safe_sub_func_uint8_t_u_u(g_329, ((p_45 | (func_52(g_166) > (((safe_mul_func_int16_t_s_s(l_432, (0xE5FF6E27L < (g_329 & ((-4L) < g_116))))) || 4294967295UL) <= 0x5EL))) != 0xF988416CL)))) >= 0x990AA2A3L) >= (-3L)) , l_433)) != g_197)))
            {
                for (l_338 = 1; (l_338 <= 9); l_338 += 1)
                {
                    int i;
                    if (g_88[l_338])
                    {
                        int i;
                        g_88[l_338] = (+(safe_unary_minus_func_int8_t_s((g_87 , l_433))));
                    }
                    else
                    {
                        char l_449 = 0L;
                        int l_450 = 8L;
                        l_450 |= (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_45, g_88[0])), p_45)), (safe_sub_func_int8_t_s_s(((-4L) ^ g_88[l_338]), (g_88[l_338] , (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((((l_449 ^ ((g_116 , (255UL >= 0xABL)) != (*l_337))) , 0x7CL) , 0x81F8L), 14)) ^ l_432), g_116)), p_45)))))));
                        (*l_337) |= (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(g_197, (((p_45 , 0x3CL) < 0xC6L) ^ 0x2A4374E7L))), 4));
                        (*g_103) = &g_88[l_338];
                    }
                    for (l_348 = 0; (l_348 >= (-26)); l_348--)
                    {
                        if (p_45)
                            break;
                        return g_284;
                    }
                }
            }
            else
            {
                unsigned char l_457 = 0UL;
                (*l_355) = l_457;
            }
            for (l_348 = 12; (l_348 <= (-26)); l_348 = safe_sub_func_int32_t_s_s(l_348, 8))
            {
                int *l_488 = &g_88[0];
                (*l_355) ^= p_45;
                for (g_284 = 0; (g_284 < (-14)); g_284 = safe_sub_func_int16_t_s_s(g_284, 1))
                {
                    for (p_45 = (-20); (p_45 <= 52); p_45 = safe_add_func_uint16_t_u_u(p_45, 7))
                    {
                        unsigned char l_468 = 0x48L;
                        g_88[6] ^= (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_87, 2)), p_45));
                        (*l_337) = l_468;
                    }
                    (*l_337) = (safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_197, ((((safe_lshift_func_int16_t_s_s(g_116, (~((safe_mul_func_uint8_t_u_u(func_52((((safe_add_func_int16_t_s_s(func_52(g_284), ((((safe_lshift_func_uint16_t_u_u((&l_343 == &l_355), (p_45 > 0x3DL))) , 4294967295UL) == p_45) < g_166))) , 1L) , g_88[6])), l_432)) > l_433)))) >= p_45) | 0L) == p_45))), 9)) || g_284), 0xCEL));
                    for (l_338 = 7; (l_338 < 39); l_338 = safe_add_func_int16_t_s_s(l_338, 5))
                    {
                        (*g_103) = l_337;
                        l_487[0] |= (safe_mul_func_int16_t_s_s((g_87 | 65529UL), g_329));
                    }
                }
                l_489[2][1][5] &= (l_488 == l_343);
            }
            (*l_337) = ((*l_355) , ((g_87 , g_197) && g_166));
        }
        return g_501;
    }
    else
    {
        int * const l_508[5][8] = {{(void*)0, &g_88[3], &g_2, &g_2, &g_87, &g_2, &g_2, &g_2}, {(void*)0, &g_88[3], &g_2, &g_2, &g_87, &g_2, &g_2, &g_2}, {(void*)0, &g_88[3], &g_2, &g_2, &g_87, &g_2, &g_2, &g_2}, {(void*)0, &g_88[3], &g_2, &g_2, &g_87, &g_2, &g_2, &g_2}, {(void*)0, &g_88[3], &g_2, &g_2, &g_87, &g_2, &g_2, &g_2}};
        const int *l_542 = &g_197;
        int i, j;
        if (((((p_45 , ((safe_add_func_int8_t_s_s((p_45 < (safe_sub_func_int16_t_s_s((0UL > (safe_rshift_func_uint8_t_u_u((((p_45 , (~p_45)) , l_508[3][4]) == (void*)0), 7))), (p_45 >= 0x55L)))), (*l_337))) != g_284)) , g_88[0]) & 1UL) || g_88[8]))
        {
            return g_2;
        }
        else
        {
            int *l_522 = &g_2;
            int l_538 = 1L;
            for (g_501 = 0; (g_501 >= 34); ++g_501)
            {
                unsigned l_513 = 0x8442B5E5L;
                (*l_337) = ((safe_sub_func_uint32_t_u_u((p_45 != l_513), (((((void*)0 == l_508[3][1]) < ((safe_mul_func_uint16_t_u_u((g_88[5] != ((((((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((g_88[0] , l_522) != ((((safe_rshift_func_uint16_t_u_s((p_45 < ((safe_sub_func_uint32_t_u_u((l_513 == p_45), (-4L))) || p_45)), 15)) != 4294967289UL) && g_166) , l_522)) | l_513), p_45)), l_527)), 5)) >= 0xE463A917L) <= (*l_522)) , &g_104) == (void*)0) || 0UL)), p_45)) >= 0xF0AFL)) == 0xD414L) , p_45))) , (*l_522));
            }
            for (l_370 = (-24); (l_370 >= 24); l_370++)
            {
                int *l_530[1][7][4];
                const int l_531 = (-10L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_530[i][j][k] = (void*)0;
                    }
                }
                l_522 = l_530[0][1][3];
                if (((p_45 , (~((l_531 || (-4L)) > ((safe_mod_func_uint32_t_u_u((func_52((p_45 < (*l_337))) || func_52((safe_rshift_func_int8_t_s_s((g_116 <= (safe_lshift_func_int8_t_s_s(0xFBL, 1))), l_538)))), p_45)) != p_45)))) <= g_284))
                {
                    (*l_337) = (0x2D268FF0L > ((((safe_unary_minus_func_uint32_t_u(g_284)) >= p_45) ^ (safe_mod_func_int8_t_s_s(((g_501 < ((((~((((func_52((g_329 , p_45)) ^ g_2) >= (((g_329 , 0xF6CAF69AL) >= (-5L)) | 0xD718L)) >= 0xB200L) ^ g_197)) <= 0xE9L) || g_284) < g_116)) ^ p_45), 255UL))) , p_45));
                }
                else
                {
                    (*g_103) = &l_538;
                    for (g_87 = 0; (g_87 <= 0); g_87 += 1)
                    {
                        if ((*l_337))
                            break;
                        (*l_337) = p_45;
                        (*g_104) = (**g_103);
                        l_542 = (void*)0;
                    }
                }
            }
        }
        (*l_337) = 0xEB395863L;
    }
    return p_45;
}







static const unsigned func_49(unsigned char p_50)
{
    unsigned l_51[2][3] = {{0xA0E2C237L, 0x6D1D89E1L, 0xA0E2C237L}, {0xA0E2C237L, 0x6D1D89E1L, 0xA0E2C237L}};
    const int l_73 = 0x12393DFEL;
    char l_84 = 0xE4L;
    int *l_100 = &g_88[0];
    unsigned short l_139[8] = {0x86A5L, 65530UL, 0x86A5L, 65530UL, 0x86A5L, 65530UL, 0x86A5L, 65530UL};
    const unsigned short l_211 = 0xF592L;
    int l_229 = (-1L);
    int l_247[4] = {(-1L), 0x29F77C5EL, (-1L), 0x29F77C5EL};
    unsigned l_289 = 0x733D60B0L;
    int *l_317[7];
    int i, j;
    for (i = 0; i < 7; i++)
        l_317[i] = (void*)0;
    for (p_50 = 0; (p_50 <= 1); p_50 += 1)
    {
        unsigned l_68 = 0xC68AB8ACL;
        unsigned short l_85 = 0xBE6AL;
        char l_91 = 0x18L;
        int **l_115[9][1];
        unsigned l_131 = 1UL;
        int *l_161[9];
        unsigned l_217 = 0x376D0E6FL;
        const int *l_222[7][5] = {{&g_88[1], &g_87, (void*)0, (void*)0, &g_87}, {&g_88[1], &g_87, (void*)0, (void*)0, &g_87}, {&g_88[1], &g_87, (void*)0, (void*)0, &g_87}, {&g_88[1], &g_87, (void*)0, (void*)0, &g_87}, {&g_88[1], &g_87, (void*)0, (void*)0, &g_87}, {&g_88[1], &g_87, (void*)0, (void*)0, &g_87}, {&g_88[1], &g_87, (void*)0, (void*)0, &g_87}};
        int l_261 = 7L;
        unsigned l_320 = 0x7B668EE8L;
        unsigned short l_328 = 0xDD50L;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 1; j++)
                l_115[i][j] = &l_100;
        }
        for (i = 0; i < 9; i++)
            l_161[i] = &g_88[0];
        if ((((p_50 == (func_52(((~(safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_50 > g_2), 5)), (safe_sub_func_uint16_t_u_u(p_50, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_68, (l_51[0][0] | (((safe_mod_func_int16_t_s_s(0x80D4L, (safe_mul_func_uint16_t_u_u(((l_73 != (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((l_84 , l_68), l_84)), g_2)) >= l_73), p_50)) > 0xA53DL) | g_2), 4)), 0x2AL))) , 0x9C0DL), l_85)))) | l_84) == 0x9AL)))), g_2)))))), 5)), 6))) , l_68)) , g_88[1])) , l_84) >= l_91))
        {
            int * const l_102 = &g_88[0];
            char l_140 = (-4L);
            int l_160 = 0x791A1269L;
            int l_212 = 0xA9068132L;
            if ((g_87 | (g_88[0] || (safe_rshift_func_uint16_t_u_u(g_2, (safe_mod_func_uint32_t_u_u(0UL, p_50)))))))
            {
                int l_101 = 0L;
                (*l_102) = (safe_mod_func_uint32_t_u_u((p_50 <= (safe_mod_func_uint32_t_u_u((2L && (l_100 == (l_101 , l_102))), 5UL))), 0xDBF905AFL));
                (*l_102) = g_87;
                for (l_85 = 0; (l_85 <= 1); l_85 += 1)
                {
                    int i, j;
                    return l_51[p_50][(l_85 + 1)];
                }
            }
            else
            {
                int **l_114 = &g_104;
                (*l_100) ^= 0x56B38323L;
                if (func_52(l_91))
                {
                    (*g_103) = (((g_103 != (void*)0) , ((g_87 , (p_50 <= ((p_50 == g_87) >= (((safe_sub_func_int8_t_s_s(p_50, (((*l_102) < ((safe_sub_func_uint8_t_u_u((0x33C814B4L <= 0x41043A42L), 6UL)) & g_2)) & 0x0AL))) ^ p_50) & 1L)))) , 0x71EDBFDFL)) , (*g_103));
                }
                else
                {
                    int *l_109 = &g_2;
                    unsigned short l_153 = 0xDFB7L;
                    (*l_100) = (((((func_52(g_88[0]) <= g_2) < ((((l_109 == l_109) || (safe_rshift_func_uint8_t_u_s(g_2, 7))) , g_2) > (safe_sub_func_uint16_t_u_u(((void*)0 != l_114), 0UL)))) > (*l_109)) != (-3L)) , (-6L));
                    if (((l_115[1][0] != (p_50 , &g_104)) && (g_116 ^ (l_114 != &l_100))))
                    {
                        int l_127 = (-6L);
                        int **l_130 = &l_109;
                        if ((*l_109))
                            break;
                        (*l_102) = (safe_lshift_func_int8_t_s_s(func_52((safe_mul_func_int16_t_s_s(g_88[0], ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((0x13D9L | p_50) , (((safe_rshift_func_uint8_t_u_s((l_127 , (safe_rshift_func_int16_t_s_s(0x47D0L, g_88[4]))), (l_130 != (p_50 , &g_104)))) | 0x17L) , g_116)) >= 0xD3L), p_50)), g_88[2])) != l_131)))), p_50));
                        (*g_103) = l_109;
                    }
                    else
                    {
                        int **l_132 = &g_104;
                        (*l_132) = l_102;
                        if ((*g_104))
                            break;
                        g_87 ^= (*g_104);
                    }
                    (*l_102) = ((((func_52(((g_116 , ((safe_mod_func_int32_t_s_s((*l_102), (*l_109))) <= ((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((((void*)0 != &g_104) , (g_88[0] <= 0x1301L)) | p_50), l_139[0])), p_50)) | p_50))) | p_50)) > 0x3FL) | p_50) >= (*l_109)) ^ l_140);
                    (*l_114) = ((((safe_mod_func_int16_t_s_s(func_52(func_52((((safe_sub_func_uint8_t_u_u(1UL, func_52(p_50))) >= p_50) != (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((0L & (p_50 == (safe_lshift_func_int8_t_s_u((p_50 , (((-1L) ^ (safe_lshift_func_uint16_t_u_s((l_114 != &l_109), l_153))) == 0L)), 7)))) | p_50), g_2)), p_50))))), g_116)) && 65534UL) == 4294967286UL) , (void*)0);
                }
            }
            l_160 ^= (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x9ED3L, ((g_116 | 0x3AL) > (safe_lshift_func_uint16_t_u_u(((p_50 > (-4L)) <= p_50), 9))))), (*l_100)));
            if (((~1L) , p_50))
            {
                short l_175[5][6] = {{0x41CDL, 0x93BCL, 0L, 0L, 0xC723L, 0L}, {0x41CDL, 0x93BCL, 0L, 0L, 0xC723L, 0L}, {0x41CDL, 0x93BCL, 0L, 0L, 0xC723L, 0L}, {0x41CDL, 0x93BCL, 0L, 0L, 0xC723L, 0L}, {0x41CDL, 0x93BCL, 0L, 0L, 0xC723L, 0L}};
                int **l_176 = (void*)0;
                char l_196 = 0x97L;
                int i, j;
                for (l_131 = 2; (l_131 <= 9); l_131 += 1)
                {
                    int i, j;
                    for (g_87 = 0; (g_87 <= 7); g_87 += 1)
                    {
                        int i, j;
                        (*g_103) = &g_88[(p_50 + 7)];
                        l_161[3] = &g_88[(p_50 + 2)];
                        (*g_103) = &g_88[(p_50 + 2)];
                        if (l_51[p_50][(p_50 + 1)])
                            continue;
                    }
                    g_166 |= func_52((l_51[p_50][(p_50 + 1)] , ((((l_139[(p_50 + 4)] == (((((func_52((func_52(g_88[l_131]) , (safe_add_func_int16_t_s_s(func_52((*l_102)), ((safe_rshift_func_int16_t_s_s((~g_2), (l_51[p_50][(p_50 + 1)] | 3L))) | g_2))))) , (void*)0) == (void*)0) >= l_51[p_50][(p_50 + 1)]) != g_2) , p_50)) , (*l_102)) <= p_50) && g_2)));
                }
                for (l_68 = 0; (l_68 <= 1); l_68 += 1)
                {
                    int i, j;
                    if (l_51[l_68][(p_50 + 1)])
                        break;
                    g_88[(p_50 + 3)] = (safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((func_52(g_87) , func_52(func_52(g_88[0]))), ((void*)0 != &l_102))) ^ (~(safe_add_func_int32_t_s_s(l_175[1][3], (l_176 == &l_102))))), 13)) , 0x18F9L), 0x7F47L));
                }
                (*g_103) = (*g_103);
                for (l_68 = 1; (l_68 <= 8); l_68 += 1)
                {
                    int i, j;
                    l_161[(p_50 + 2)] = l_161[(p_50 + 5)];
                    if ((l_51[p_50][(p_50 + 1)] >= (((safe_rshift_func_int8_t_s_u(l_51[p_50][p_50], g_166)) , &g_104) != (((&l_161[3] == &g_104) & ((safe_add_func_uint32_t_u_u(((void*)0 != &l_160), (!((void*)0 == &l_160)))) >= p_50)) , &g_104))))
                    {
                        const short l_187 = (-10L);
                        int l_188 = 0xE252BFD3L;
                        const int **l_193 = (void*)0;
                        (*l_102) = (p_50 | (g_166 , (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_187, 0x1CL)), 3))));
                        if (l_188)
                            continue;
                        (*l_100) = (safe_sub_func_int16_t_s_s((7UL | (-9L)), (g_88[0] | (((*g_103) == (*g_103)) , (((*l_100) >= (((l_176 != l_193) & ((((p_50 , 0L) , 9L) >= g_88[0]) < 0x98L)) >= g_87)) == 1UL)))));
                        g_197 &= (safe_add_func_int32_t_s_s((g_88[0] , ((func_52((g_2 && (*l_102))) == p_50) , (((g_88[0] & ((((-1L) && ((p_50 ^ (((((((*g_103) == (*g_103)) , (*g_103)) == (*g_103)) > (*l_100)) < p_50) || p_50)) | (-6L))) , 0UL) <= g_166)) != l_196) < g_166))), 0x4F4471DAL));
                    }
                    else
                    {
                        char l_202 = 1L;
                        if (p_50)
                            break;
                        g_197 ^= ((safe_mul_func_uint16_t_u_u((g_166 , func_52((*l_100))), (safe_mul_func_int8_t_s_s(g_116, g_166)))) != l_202);
                        l_100 = l_161[(p_50 + 2)];
                        l_212 |= (safe_mod_func_uint8_t_u_u((g_88[0] > (safe_mul_func_uint16_t_u_u(((((((g_166 < (&l_161[3] != &l_102)) , (g_166 | 8UL)) , 0x9FB24213L) || (((safe_mod_func_int32_t_s_s(p_50, (safe_rshift_func_int16_t_s_s(0x96C9L, 7)))) , p_50) > l_202)) != l_211) , (*l_100)), 0xDA1FL))), g_166));
                    }
                    for (l_84 = 0; (l_84 <= 1); l_84 += 1)
                    {
                        return p_50;
                    }
                }
            }
            else
            {
                int l_214 = (-6L);
                if (p_50)
                    break;
                for (g_197 = 0; (g_197 <= 1); g_197 += 1)
                {
                    int *l_213 = (void*)0;
                    int i, j;
                    l_213 = (*g_103);
                    if ((((((((void*)0 != &g_104) , ((((void*)0 == l_213) , l_51[g_197][(g_197 + 1)]) >= p_50)) , func_52(g_2)) == (((g_166 ^ p_50) && l_214) && p_50)) && g_2) || p_50))
                    {
                        short l_215[9][8][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}};
                        int i, j, k;
                        (*l_100) |= l_214;
                        (*l_102) = l_215[1][5][0];
                    }
                    else
                    {
                        int *l_216 = &g_88[9];
                        (*g_103) = l_216;
                        g_87 &= (*l_102);
                        l_213 = (g_88[0] , (*g_103));
                        if (p_50)
                            continue;
                    }
                    (*l_102) = (l_217 , func_52(g_2));
                    return p_50;
                }
                l_214 = func_52(((safe_mul_func_int16_t_s_s((*l_100), p_50)) , (&l_161[3] != &l_102)));
                for (l_217 = 2; (l_217 <= 7); l_217 += 1)
                {
                    int i;
                    if (g_88[(p_50 + 8)])
                    {
                        int i;
                        g_88[(p_50 + 4)] ^= p_50;
                    }
                    else
                    {
                        (*g_103) = l_100;
                    }
                    (*l_102) = p_50;
                    if (((((safe_mul_func_int8_t_s_s(0x34L, (*l_102))) != (((((((((*l_100) & ((p_50 , p_50) & 0x27DD38B3L)) , l_222[0][3]) == (*g_103)) , ((p_50 , g_88[0]) >= 251UL)) , (*l_100)) != 0x19B2L) , &l_100) != (void*)0)) <= g_87) | g_87))
                    {
                        int *l_228[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_228[i] = &l_160;
                        l_229 ^= ((((safe_lshift_func_uint8_t_u_s(((((((1L || g_197) ^ (*l_102)) ^ (safe_sub_func_int32_t_s_s(((g_197 || (*l_100)) <= 0L), (g_197 , 0xB6CD3ABCL)))) >= (safe_unary_minus_func_int16_t_s(p_50))) ^ p_50) && g_87), 7)) , l_228[6]) == &g_88[(p_50 + 8)]) , p_50);
                        (*g_103) = (*g_103);
                        l_214 = p_50;
                    }
                    else
                    {
                        (*g_103) = &l_229;
                        (*g_103) = (((safe_mul_func_uint8_t_u_u(((func_52(g_88[1]) | g_232) >= (*g_104)), p_50)) , p_50) , &g_88[(p_50 + 8)]);
                    }
                    for (g_87 = 0; (g_87 <= 7); g_87 += 1)
                    {
                        int i, j;
                        (*l_100) = (l_51[p_50][(p_50 + 1)] != g_2);
                    }
                }
            }
        }
        else
        {
            unsigned l_237 = 0xF5CFD321L;
            char l_238 = 0L;
            short l_239 = (-4L);
            (*l_100) = ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(g_232, g_2)) && ((*l_100) , (((g_197 >= (l_237 , p_50)) == (((*l_100) && l_237) & (p_50 < l_237))) & l_238))), p_50)) , g_166);
            for (g_87 = 0; (g_87 <= 1); g_87 += 1)
            {
                (*l_100) = l_239;
                for (l_229 = 0; (l_229 <= 1); l_229 += 1)
                {
                    for (g_166 = 0; g_166 < 2; g_166 += 1)
                    {
                        for (l_131 = 0; l_131 < 3; l_131 += 1)
                        {
                            l_51[g_166][l_131] = 0x3EBE0A84L;
                        }
                    }
                }
            }
            (*l_100) = (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((1L == ((0UL >= p_50) && (g_232 >= ((safe_mul_func_uint8_t_u_u(((*l_100) ^ p_50), ((safe_unary_minus_func_uint8_t_u(l_247[1])) && (safe_add_func_int32_t_s_s(((p_50 > 8L) & (-5L)), 4294967295UL))))) | 0xBCL)))), 0x87L)), (-1L)));
        }
        if ((~(safe_rshift_func_int16_t_s_u(((p_50 , p_50) & 0L), p_50))))
        {
            unsigned l_258[10][4] = {{0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}, {0x5147F8CDL, 0x0C50E767L, 0x5147F8CDL, 7UL}};
            const unsigned char l_262 = 255UL;
            int l_290 = 8L;
            int i, j;
            if ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_258[7][0], 0xB272L)), 1)) == g_197), (func_52((*l_100)) <= ((0x01CDL > ((((((((p_50 > ((&l_222[0][3] != ((safe_sub_func_uint16_t_u_u(((p_50 | 0xD6DEL) , 65533UL), g_166)) , &g_104)) , (-1L))) , l_261) , p_50) & 0xAE9B237BL) , (void*)0) != (void*)0) , l_262) >= l_262)) , p_50)))))
            {
                unsigned short l_275 = 0xF560L;
                int *l_288 = &l_229;
                if ((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(l_275, (safe_add_func_int32_t_s_s((((p_50 >= ((safe_mod_func_uint16_t_u_u((g_2 || (0x7B32L == ((l_258[7][0] <= l_275) , ((p_50 & (safe_mul_func_uint8_t_u_u(((void*)0 == &g_104), g_197))) & g_232)))), 0x076CL)) != g_284)) , g_232) == p_50), g_232)))), p_50)), g_232)) | p_50) ^ p_50) && p_50) & p_50), 0x48L)), 0xA3A432BCL)), p_50)))
                {
                    int *l_287 = (void*)0;
                    if ((((safe_rshift_func_int16_t_s_s(((g_116 , (void*)0) == l_287), 15)) == (p_50 < ((func_52(((*g_103) != l_288)) && (*l_288)) , (p_50 , p_50)))) | (-1L)))
                    {
                        (*g_103) = l_288;
                    }
                    else
                    {
                        (*l_288) |= 0L;
                        (*l_100) &= (((&l_100 == &l_161[3]) ^ l_289) > ((g_197 >= (g_284 && (p_50 ^ p_50))) || 0x93820914L));
                    }
                    l_290 |= p_50;
                    if (p_50)
                        continue;
                }
                else
                {
                    (*g_103) = &l_247[1];
                    (*g_103) = l_288;
                }
                return g_232;
            }
            else
            {
                unsigned short l_306 = 0x070EL;
                unsigned short l_307[9][3][5] = {{{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}, {{0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}, {0xC1ACL, 0x88CCL, 65527UL, 0x44D0L, 0UL}}};
                int i, j, k;
                if (p_50)
                {
                    int *l_299 = &g_88[5];
                    int l_308[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_308[i] = 0xAF4C93ABL;
                    l_308[0] |= (safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((((p_50 , 4294967295UL) | (safe_rshift_func_uint16_t_u_u(g_87, 6))) , l_299) != (p_50 , (*g_103))) | ((safe_mod_func_uint16_t_u_u(g_166, (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((!((*l_299) , ((g_197 <= p_50) , 0x1CL))) > l_306), g_2)), l_307[8][0][1])))) < 0x91L)) ^ p_50), p_50)), (*l_299))), g_87));
                }
                else
                {
                    (*g_103) = (void*)0;
                }
                g_197 &= func_52(func_52(((func_52(g_232) , ((safe_sub_func_uint16_t_u_u(((((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_50, 65526UL)), ((((!(safe_lshift_func_int16_t_s_u((*l_100), p_50))) | p_50) || (+func_52((p_50 , l_258[7][2])))) & 1UL))) , 0xCBC7DD93L) | p_50) , l_258[7][0]), g_284)) , l_317[4])) != (*g_103))));
                for (g_116 = 1; (g_116 >= 0); g_116 -= 1)
                {
                    (*l_100) &= (g_197 >= (safe_rshift_func_uint16_t_u_u(p_50, 5)));
                    if (p_50)
                        continue;
                }
            }
            (*l_100) = l_320;
        }
        else
        {
            int **l_321 = (void*)0;
            int l_324[7][5][7] = {{{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}, {{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}, {{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}, {{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}, {{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}, {{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}, {{(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}, {(-1L), 8L, 0xE3AD17ADL, 0xDC53EDA2L, 0xAFD26DE1L, (-9L), 1L}}};
            unsigned l_327[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_327[i] = 4294967294UL;
            l_328 = (((((func_52(((l_321 != (((safe_mul_func_uint16_t_u_u(((((*g_103) == (void*)0) > l_324[2][4][1]) ^ (*l_100)), (((g_284 ^ 2L) == (p_50 == (((+(safe_rshift_func_int8_t_s_u(p_50, 0))) && g_197) , g_87))) , p_50))) , p_50) , &l_100)) , g_87)) && 0x9EL) || g_88[0]) , l_327[0]) < (-2L)) , p_50);
        }
        g_329 ^= (p_50 & (p_50 , (g_232 & func_52((g_197 , g_88[0])))));
        (*g_103) = (*g_103);
        for (g_116 = 0; (g_116 <= 1); g_116 += 1)
        {
            int *l_330 = &l_229;
            (*g_103) = l_330;
        }
    }
    return p_50;
}







static unsigned char func_52(unsigned p_53)
{
    int l_86[5][4] = {{0xBAED416AL, 0x8C87C631L, 0xBAED416AL, 0x8C87C631L}, {0xBAED416AL, 0x8C87C631L, 0xBAED416AL, 0x8C87C631L}, {0xBAED416AL, 0x8C87C631L, 0xBAED416AL, 0x8C87C631L}, {0xBAED416AL, 0x8C87C631L, 0xBAED416AL, 0x8C87C631L}, {0xBAED416AL, 0x8C87C631L, 0xBAED416AL, 0x8C87C631L}};
    int i, j;
    for (p_53 = 0; (p_53 <= 3); p_53 += 1)
    {
        if (l_86[1][3])
            break;
        for (g_87 = 0; g_87 < 5; g_87 += 1)
        {
            for (g_88[0] = 0; g_88[0] < 4; g_88[0] += 1)
            {
                l_86[g_87][g_88[0]] = 0x828C2071L;
            }
        }
        if (g_2)
            break;
        for (g_87 = 3; (g_87 >= 0); g_87 -= 1)
        {
            int *l_90 = (void*)0;
            int **l_89 = &l_90;
            (*l_89) = &g_2;
        }
    }
    return p_53;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_856, "g_856", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_863[i][j], "g_863[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_882, "g_882", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
