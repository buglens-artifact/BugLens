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



static int g_4 = 0L;
static int *g_66 = (void*)0;
static int **g_65 = &g_66;
static int g_72 = 0x0A992350L;
static int g_121 = (-1L);
static char g_125 = 0x74L;
static unsigned g_284 = 0xC9B2812DL;
static int *g_367 = (void*)0;
static int *g_525 = &g_72;



static int func_1(void);
static int * func_5(int * p_6);
static char func_7(int * p_8, int * p_9, unsigned p_10);
static int * func_11(int p_12, int * p_13, unsigned p_14, unsigned char p_15, unsigned short p_16);
static int * func_18(int p_19, int p_20);
static char func_23(short p_24, const char p_25, int * p_26, unsigned p_27);
static short func_34(int p_35, int p_36, int * p_37, char p_38);
static int func_42(char p_43, short p_44, short p_45, int * p_46, int * p_47);
static unsigned short func_50(short p_51, int * p_52, unsigned short p_53, int * p_54, int * p_55);
static int func_57(int * p_58, int * p_59, const int p_60, unsigned short p_61);
static int func_1(void)
{
    unsigned l_2 = 0xB13ECA4FL;
    int *l_3 = &g_4;
    (*l_3) = l_2;
    l_3 = func_5(l_3);
    return (*l_3);
}







static int * func_5(int * p_6)
{
    unsigned short l_17 = 0x7A61L;
    int *l_41 = &g_4;
    const unsigned char l_378 = 254UL;
    (*g_525) = (func_7(func_11(l_17, func_18(l_17, ((((-4L) < (0xE5B14F4EL ^ g_4)) | ((safe_mul_func_int8_t_s_s(((func_23((((safe_sub_func_int8_t_s_s((l_17 & (((-1L) == (safe_mod_func_uint8_t_u_u(((((1UL | func_34((safe_sub_func_uint16_t_u_u(g_4, l_17)), l_17, l_41, (*l_41))) <= (*l_41)) & (*p_6)) ^ g_4), g_4))) < (*l_41))), (*l_41))) >= g_4) ^ (*l_41)), l_378, l_41, (*l_41)) < g_4) && 2UL), (*l_41))) & (*l_41))) || 65533UL)), (*l_41), (*l_41), (*l_41)), g_525, l_378) >= l_378);
    return p_6;
}







static char func_7(int * p_8, int * p_9, unsigned p_10)
{
    int l_649 = 0x8A26FA73L;
    (*p_8) = ((((safe_mod_func_int32_t_s_s(l_649, (safe_sub_func_uint16_t_u_u(0xFD69L, l_649)))) | ((g_121 | ((safe_mod_func_uint8_t_u_u(p_10, g_4)) != (-10L))) >= l_649)) != 1UL) <= g_284);
    (*p_8) |= 0L;
    return p_10;
}







static int * func_11(int p_12, int * p_13, unsigned p_14, unsigned char p_15, unsigned short p_16)
{
    const int *l_559 = &g_4;
    unsigned short l_572 = 0xCCA0L;
    int *l_593 = &g_121;
    int l_632 = 0L;
    short l_639 = 0L;
    for (p_14 = 0; (p_14 >= 2); p_14 = safe_add_func_uint32_t_u_u(p_14, 2))
    {
        char l_560 = (-1L);
        int **l_567 = (void*)0;
        int *l_598 = &g_4;
        int *l_641 = &g_4;
        if ((((void*)0 == &g_66) != (l_559 == p_13)))
        {
            return p_13;
        }
        else
        {
            int *l_574 = &g_121;
            char l_631 = (-1L);
            if (((((p_15 > (*p_13)) | 0UL) ^ g_4) != 255UL))
            {
                return &g_72;
            }
            else
            {
                short l_573 = (-8L);
                int *l_575 = &g_4;
                for (p_12 = 0; (p_12 >= (-28)); p_12 = safe_sub_func_uint16_t_u_u(p_12, 3))
                {
                    unsigned l_592 = 0x3C9E9E14L;
                    if ((safe_add_func_int8_t_s_s((l_567 == &p_13), (safe_div_func_uint8_t_u_u(p_15, ((safe_mul_func_int8_t_s_s(((void*)0 != &g_367), func_42((*l_559), g_4, l_572, func_18(g_284, (*p_13)), l_574))) & 5L))))))
                    {
                        int **l_594 = &g_367;
                        (*l_575) = 0x83F40E07L;
                        (*l_593) = func_42((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((*l_575), ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(0x3CL, 5L)), (safe_add_func_int16_t_s_s((((65535UL <= 65532UL) <= (*p_13)) & (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_284, p_16)), ((p_12 <= 0xDDL) & l_592)))), p_14)))) && 4UL))), g_284)) != (-7L)), (*l_574))), g_121, g_121, l_593, p_13);
                        (*l_594) = p_13;
                    }
                    else
                    {
                        (*l_574) &= 0x85F1A2EBL;
                        (*l_593) = (*l_559);
                    }
                    for (g_284 = (-7); (g_284 >= 1); ++g_284)
                    {
                        int **l_599 = (void*)0;
                        int **l_600 = (void*)0;
                        int **l_601 = &g_367;
                        l_598 = func_18((safe_unary_minus_func_int16_t_s(p_12)), ((*l_575) <= g_121));
                        (*l_593) = (*p_13);
                        (*l_601) = p_13;
                    }
                    (*l_598) = 0x2E401CC0L;
                    if (((((void*)0 != &g_525) ^ (safe_rshift_func_uint8_t_u_u((*l_575), 6))) <= (!((*l_575) > ((safe_div_func_int16_t_s_s(p_14, (safe_sub_func_int32_t_s_s(l_592, (func_42((safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_121, 0x3AE2L)), (*l_593))), (*l_574), g_4, p_13, l_593) | g_284))))) >= (-1L))))))
                    {
                        (*g_525) &= (*p_13);
                    }
                    else
                    {
                        int **l_614 = &g_367;
                        p_13 = l_574;
                        (*l_614) = p_13;
                    }
                }
                if ((*l_559))
                    break;
                for (p_15 = 0; (p_15 >= 5); p_15 = safe_add_func_int32_t_s_s(p_15, 2))
                {
                    l_632 &= (safe_mod_func_int32_t_s_s(func_42(p_14, func_42((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_284, 7UL)), (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((g_72 > (safe_add_func_int8_t_s_s(0L, (safe_mod_func_int8_t_s_s(((&g_72 == (void*)0) == (*l_575)), (func_42(g_72, p_15, (*l_575), l_575, p_13) ^ g_284)))))), (*l_559))), l_631)))), p_14, p_15, &g_72, &g_4), g_4, p_13, p_13), 0x92AE7F34L));
                }
                (*g_525) |= (*l_574);
            }
            (*p_13) = l_639;
            if ((*g_525))
            {
                short l_640 = 1L;
                if (l_640)
                    break;
                (*l_593) = (*g_525);
            }
            else
            {
                int **l_642 = &l_598;
                (*l_642) = l_641;
            }
            (*l_641) &= (safe_lshift_func_int8_t_s_s((g_72 >= ((safe_mod_func_uint8_t_u_u((&l_567 != &l_567), g_72)) > 0x1EA7L)), 3));
        }
    }
    return p_13;
}







static int * func_18(int p_19, int p_20)
{
    int * const *l_549 = &g_66;
    int * const **l_550 = &l_549;
    int *l_553 = &g_121;
    int l_554 = 0x0AABB5BDL;
    (*l_550) = l_549;
    for (g_121 = 2; (g_121 > (-22)); --g_121)
    {
        (*g_525) ^= p_20;
        return l_553;
    }
    (*l_553) |= l_554;
    return &g_4;
}







static char func_23(short p_24, const char p_25, int * p_26, unsigned p_27)
{
    unsigned short l_413 = 4UL;
    int **l_426 = &g_66;
    int l_445 = (-8L);
    int l_457 = 0L;
    unsigned l_509 = 0UL;
    if ((*p_26))
    {
        unsigned l_398 = 4294967295UL;
        for (g_125 = (-12); (g_125 <= (-14)); g_125 = safe_sub_func_uint32_t_u_u(g_125, 4))
        {
            int *l_395 = (void*)0;
            unsigned short l_396 = 0x51F2L;
            int l_397 = 0x20151E4FL;
            int *l_418 = &g_72;
            l_397 |= func_42((~((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_42((safe_rshift_func_uint8_t_u_u(g_284, 2)), p_27, (((safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((*p_26) <= g_121), 2)) < g_284) > p_27), (((safe_mul_func_uint8_t_u_u(p_27, (p_25 || (safe_div_func_int16_t_s_s(p_25, 0xA86BL))))) || 0xD5L) < g_4))) || g_121) ^ 0x75F4EF1CL), l_395, (*g_65)), l_396)), p_27)) ^ (*p_26))), g_125, g_4, p_26, p_26);
            (*l_418) ^= (((!l_398) != l_398) >= ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(g_284, (safe_add_func_uint8_t_u_u(p_27, (safe_sub_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((-1L), (safe_add_func_uint8_t_u_u((((l_413 & (safe_lshift_func_uint8_t_u_u(g_4, 2))) & func_42(((safe_mod_func_uint16_t_u_u(p_25, p_25)) <= g_284), l_398, p_25, p_26, &l_397)) == 1L), g_284)))), p_27)) > 0x7B5D82D4L), 0xA12FL)))))) != 0xC9FEL), 7)) == 0x034B1523L));
        }
        (*g_65) = p_26;
    }
    else
    {
        int *l_419 = &g_121;
        int l_442 = 1L;
        short l_505 = 0x7B59L;
        int *l_508 = &g_72;
        int ***l_521 = (void*)0;
        (*l_419) = (*p_26);
        if ((*p_26))
        {
            int ***l_420 = (void*)0;
            int ***l_421 = &g_65;
            unsigned short l_440 = 0UL;
            short l_454 = 0x5691L;
            (*l_421) = &l_419;
            for (g_125 = (-1); (g_125 == (-2)); g_125--)
            {
                unsigned char l_437 = 0x1EL;
                int ***l_441 = &g_65;
                int *l_456 = &l_442;
                (**l_421) = (*g_65);
                if ((!(safe_mul_func_uint8_t_u_u((((l_426 != (*l_421)) & (((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(g_284, 6)) == (l_419 == l_419)) >= 1UL), (safe_sub_func_uint16_t_u_u((4294967293UL <= 0xC1DFEF36L), ((g_284 > g_284) || p_24))))), 1UL)) ^ (*p_26)) >= g_284)) != 8L), p_27))))
                {
                    (***l_421) ^= 0x40B66F2DL;
                    g_72 ^= (safe_add_func_int32_t_s_s((((~l_437) >= (func_42(func_42(g_125, (g_4 == p_25), (((*l_419) & 0x7DL) ^ (safe_add_func_uint16_t_u_u(l_440, (l_441 == &l_426)))), p_26, p_26), p_27, l_442, (*g_65), (**l_441)) & p_27)) & (-9L)), p_27));
                    l_442 ^= func_42(p_27, ((void*)0 == (*g_65)), (safe_mod_func_int8_t_s_s(g_121, g_121)), (*g_65), &l_442);
                    l_445 |= (**g_65);
                }
                else
                {
                    unsigned l_455 = 5UL;
                    if ((*p_26))
                        break;
                    l_457 &= func_42((((safe_mod_func_int32_t_s_s((***l_441), ((safe_lshift_func_uint16_t_u_u(p_24, g_121)) && ((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_454, (g_121 != p_24))), (***l_441))) & l_455)))) ^ p_25) || (***l_441)), g_125, (***l_421), p_26, l_456);
                }
                (***l_421) = (safe_mod_func_int16_t_s_s(g_284, (safe_mod_func_int8_t_s_s(p_24, 0x98L))));
            }
            for (g_121 = 0; (g_121 == 8); g_121 = safe_add_func_uint8_t_u_u(g_121, 1))
            {
                return p_24;
            }
            (*l_426) = (*l_426);
        }
        else
        {
            int *** const l_478 = &g_65;
            int l_494 = 0x929700CEL;
            l_445 |= (0x0A309251L >= (((void*)0 != (*g_65)) >= ((((&g_367 == &g_66) < (0xC4F04436L > (*l_419))) == (safe_div_func_uint8_t_u_u(6UL, 0x13L))) | g_284)));
            (*l_426) = (*l_426);
            if ((safe_mul_func_int16_t_s_s(func_34(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((void*)0 == &g_66), (safe_lshift_func_uint8_t_u_u(g_121, 5)))), 0)) <= 0x85L), p_24, (**l_478), l_445), 8UL)))
            {
                int l_493 = 2L;
                (*l_419) = (*p_26);
                l_442 ^= (g_4 || (safe_mul_func_uint16_t_u_u(65535UL, (g_121 | ((g_4 < 0xA14BL) == (safe_rshift_func_uint16_t_u_u(g_72, 13)))))));
                l_494 = (p_27 <= 1L);
            }
            else
            {
                return p_27;
            }
            (*l_419) = func_34((*p_26), ((void*)0 != l_478), (*g_65), (g_125 > (safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_121, 7)), 0xFAL)), (((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((g_4 != g_284), 6)) ^ g_72) >= g_4), g_284)) && g_284) ^ p_27)))));
        }
        (*l_508) = ((p_24 || l_509) && g_121);
        if ((((l_509 || (p_24 & func_42((safe_unary_minus_func_int8_t_s(((void*)0 != &l_419))), (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_419) && 0xF1B6950BL), 6)) > 0xFC23L), (+(safe_unary_minus_func_int16_t_s(p_25))))), g_72, p_26, (*g_65)))) > g_125) >= g_72))
        {
            int l_516 = 0xD94B7105L;
            (*l_419) = l_516;
            (*g_65) = p_26;
        }
        else
        {
            unsigned l_522 = 0x3F4FC39AL;
            int *l_542 = &l_442;
            (*l_419) &= ((safe_div_func_int32_t_s_s(((g_4 <= (0xE22BL < (*l_508))) > g_125), l_522)) & 65535UL);
            if ((safe_rshift_func_int8_t_s_s((l_521 == &g_65), 6)))
            {
                unsigned l_526 = 0xE2D77209L;
                l_526 = (p_26 == g_525);
            }
            else
            {
                int l_531 = 0x08BDAB43L;
                short l_538 = 0x8971L;
                int **l_539 = (void*)0;
                int *l_543 = &g_4;
                (*l_419) = (safe_lshift_func_uint16_t_u_u(g_125, (((((safe_rshift_func_uint16_t_u_s(l_531, ((safe_mod_func_int16_t_s_s((((l_522 < ((p_27 ^ ((0x1323L && l_522) != (9L < (safe_add_func_uint32_t_u_u(((((void*)0 == l_426) >= g_121) & 0UL), 0xDAAE100CL))))) < g_125)) ^ p_27) | p_24), 0x4DF7L)) != p_24))) == g_72) & p_24) >= 2UL) | p_25)));
                (*l_508) |= l_538;
                p_26 = (*g_65);
                if ((((!(l_426 == l_539)) & l_522) & (func_42((safe_sub_func_uint16_t_u_u(p_24, (~(+(l_522 ^ ((-1L) != g_125)))))), (*l_419), p_24, l_543, (*g_65)) > 0x72F15908L)))
                {
                    int ***l_544 = &g_65;
                    (*l_544) = &p_26;
                    (*g_525) = 0xA0C8EC84L;
                }
                else
                {
                    for (l_413 = 16; (l_413 > 8); --l_413)
                    {
                        (*g_65) = (*g_65);
                        (*l_508) ^= (65535UL >= (safe_rshift_func_int16_t_s_u(((l_521 != l_521) || p_24), 0)));
                    }
                }
            }
            return g_121;
        }
    }
    return g_284;
}







static short func_34(int p_35, int p_36, int * p_37, char p_38)
{
    int *l_56 = &g_4;
    unsigned l_372 = 4294967290UL;
    int *l_373 = &g_4;
    int *l_377 = &g_72;
    (*l_377) = func_42((safe_add_func_int16_t_s_s((p_35 | 0UL), func_50(g_4, l_56, (*l_56), &g_4, &g_4))), (safe_mod_func_uint32_t_u_u(l_372, p_36)), (*l_56), &g_4, l_373);
    return g_125;
}







static int func_42(char p_43, short p_44, short p_45, int * p_46, int * p_47)
{
    unsigned l_374 = 1UL;
    int *l_375 = &g_121;
    int l_376 = 0xEF87003EL;
    (*l_375) = l_374;
    l_376 ^= (*l_375);
    return (*l_375);
}







static unsigned short func_50(short p_51, int * p_52, unsigned short p_53, int * p_54, int * p_55)
{
    unsigned l_62 = 0x09757A83L;
    int *l_279 = &g_121;
    unsigned short l_290 = 0x286EL;
    int ***l_309 = &g_65;
    int l_316 = 0x2D980EBBL;
    unsigned short l_332 = 4UL;
    int l_362 = 0x3F1A1F52L;
    if (func_57(&g_4, p_55, (l_62 == p_51), (((void*)0 == p_54) > g_4)))
    {
        char l_274 = 0L;
        unsigned l_339 = 0UL;
        int l_348 = (-6L);
        int *l_357 = &g_4;
        if ((*p_54))
        {
            int ***l_280 = &g_65;
            int *l_281 = &g_72;
            int l_301 = 1L;
            (*l_281) |= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((p_53 < (+g_4)) == (((void*)0 != &g_66) | l_274)), 0xFE12C45EL)), (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_121, 0x70EFL)), 2))));
            for (g_72 = 0; (g_72 < (-24)); g_72 = safe_sub_func_uint16_t_u_u(g_72, 5))
            {
                int ***l_287 = &g_65;
                if ((*p_52))
                {
                    unsigned l_293 = 6UL;
                    (*g_65) = p_55;
                    (*l_279) = (*p_52);
                    g_284 &= (*l_279);
                    (*l_279) &= (((safe_rshift_func_int16_t_s_u((((void*)0 == (*g_65)) >= g_125), (&g_65 == l_287))) | (safe_div_func_int32_t_s_s(l_290, (~(((safe_lshift_func_uint8_t_u_u(l_293, 4)) <= (safe_rshift_func_uint8_t_u_u(((void*)0 == (*g_65)), 7))) < 4294967291UL))))) & p_53);
                }
                else
                {
                    short l_300 = 0L;
                    int ***l_308 = &g_65;
                    l_301 = ((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(5L, g_284)) != (l_300 != g_4)), (65532UL && p_53))) < (g_121 && p_53)) != l_274) == (*p_52));
                    (*l_279) = ((*p_55) ^ (safe_add_func_int16_t_s_s(p_51, ((safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(0x5BL, g_72)), (g_72 < (*l_279)))) <= (-1L)))));
                    l_316 |= ((l_308 == l_309) > ((g_72 <= (((*l_281) || (*p_55)) && (((*l_279) & (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((void*)0 == l_309) == g_4), g_72)), 10)), p_51))) <= 0xCD19E696L))) | g_72));
                    (*g_65) = p_55;
                }
                (**l_287) = p_55;
            }
        }
        else
        {
            int l_323 = 0xC2682647L;
            int ***l_326 = &g_65;
            int *l_329 = &l_316;
            (*g_65) = p_52;
            (*l_329) |= (0x88L > (safe_lshift_func_int8_t_s_s(0x0BL, (safe_add_func_int16_t_s_s((*l_279), ((((safe_mul_func_uint8_t_u_u(l_274, l_323)) && g_125) != ((~(safe_add_func_int8_t_s_s(((void*)0 == l_326), (safe_sub_func_int32_t_s_s((*p_54), p_53))))) >= 0x68L)) < g_125))))));
        }
        if (((safe_mul_func_int16_t_s_s(g_284, 0x5587L)) | (l_332 >= (safe_add_func_int8_t_s_s((+(safe_sub_func_uint32_t_u_u((p_51 || (safe_sub_func_uint8_t_u_u(p_51, g_4))), (p_51 >= g_72)))), (p_51 > l_339))))))
        {
            return g_125;
        }
        else
        {
            int *l_345 = (void*)0;
            (*l_279) &= 0x107555DCL;
            for (p_51 = (-23); (p_51 <= (-14)); p_51++)
            {
                int *l_344 = &g_4;
                l_348 |= (p_51 | (safe_rshift_func_uint16_t_u_u((l_339 != g_284), p_53)));
                return g_125;
            }
        }
        g_121 = (((l_309 != (void*)0) && ((*p_55) >= 0x25D2D7BAL)) > g_72);
        (*l_279) = (safe_mul_func_uint16_t_u_u(g_72, l_362));
    }
    else
    {
        (*l_279) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((0x56E5381FL ^ 0xD5421003L), 4)), p_51));
        (**l_309) = g_367;
        (*l_279) ^= (*p_55);
    }
    (*l_279) &= (safe_mul_func_uint16_t_u_u(0xAF3BL, p_51));
    return (*l_279);
}







static int func_57(int * p_58, int * p_59, const int p_60, unsigned short p_61)
{
    char l_67 = 6L;
    int *l_92 = &g_4;
    int l_166 = 0x80801E7CL;
    int * const l_251 = &g_72;
    if (g_4)
    {
        int *l_64 = &g_4;
        int **l_63 = &l_64;
        (*l_63) = p_58;
        l_67 = (&l_64 != g_65);
    }
    else
    {
        short l_68 = 0L;
        int l_85 = 0xC55279C8L;
        int *l_120 = &g_121;
        unsigned l_122 = 6UL;
        if (l_68)
        {
            int *l_71 = &g_72;
            int l_91 = 1L;
            int *l_93 = &g_72;
            (*g_65) = (*g_65);
            (*l_71) = ((~(g_4 != (safe_mod_func_uint16_t_u_u(0x9815L, (l_68 && (((void*)0 != &g_66) != g_4)))))) ^ g_4);
            for (p_61 = (-17); (p_61 <= 7); p_61 = safe_add_func_int16_t_s_s(p_61, 3))
            {
                const char l_90 = 0L;
                (*g_65) = p_59;
                (*l_71) |= (0xC0717824L & 0xAD6770D2L);
                for (l_68 = 10; (l_68 <= 15); ++l_68)
                {
                    l_91 |= (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_72, (g_4 | g_4))) < (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_72, l_85)), (safe_mul_func_int16_t_s_s((g_72 == g_72), g_72))))), (((safe_div_func_int32_t_s_s((*p_58), l_90)) <= 65535UL) || (*l_71))));
                    (*g_65) = l_92;
                    (*g_65) = (void*)0;
                    if ((*l_71))
                    {
                        return (*l_71);
                    }
                    else
                    {
                        (*g_65) = (*g_65);
                        (*g_65) = (*g_65);
                    }
                }
                (*g_65) = l_93;
            }
        }
        else
        {
            int *l_94 = &g_72;
            int *l_103 = &l_85;
            (*g_65) = (*g_65);
            (*l_94) = l_68;
            (*l_103) ^= (safe_mod_func_int8_t_s_s(((0x93E9L > 2UL) < ((void*)0 != (*g_65))), (g_72 & (safe_sub_func_int16_t_s_s((*l_94), (safe_mul_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((*l_94), (*l_92))), (!((*p_58) <= 0xCDEFDC03L)))))))));
            p_58 = l_103;
        }
        for (p_61 = 0; (p_61 == 49); p_61++)
        {
            int *l_110 = &l_85;
            (*l_110) |= (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_4, ((g_4 <= (((p_60 | g_72) || g_72) > 3L)) <= (g_4 & g_72)))), (l_68 > g_72)));
            for (l_85 = (-17); (l_85 > (-16)); l_85 = safe_add_func_uint16_t_u_u(l_85, 1))
            {
                const int *l_115 = &g_72;
                const int **l_114 = &l_115;
                const int ***l_113 = &l_114;
                (*l_113) = (void*)0;
            }
            if ((*l_92))
                break;
            (*g_65) = (*g_65);
        }
        (*l_120) |= (l_85 != (p_61 >= (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(p_61, (g_4 != g_72))), 5))));
        l_122 = (*l_92);
    }
    if ((safe_lshift_func_int16_t_s_s((g_125 > ((&l_92 != &p_59) && (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint16_t_u(1UL)))))), 0)))
    {
        unsigned char l_140 = 255UL;
        int **l_164 = &l_92;
        char l_165 = 1L;
        int l_168 = 0x857D46BBL;
        int *l_246 = &l_168;
        if ((((*p_59) | ((safe_mod_func_uint32_t_u_u(9UL, (((safe_mul_func_int8_t_s_s((0x25F8L & ((safe_lshift_func_int16_t_s_s((!g_121), g_121)) || (safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(l_140, (safe_sub_func_int32_t_s_s((*p_59), l_140)))), (safe_div_func_int16_t_s_s(((&g_65 != &g_65) ^ g_72), 1L)))))), g_72)) < l_140) || (*p_59)))) > 0x7C725C80L)) | (-7L)))
        {
            (*g_65) = (*g_65);
        }
        else
        {
            short l_153 = 0L;
            int *l_162 = (void*)0;
            int *l_163 = &g_72;
            (*g_65) = (*g_65);
            (*l_163) ^= (safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(g_121, (safe_mul_func_int8_t_s_s(l_153, ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((+((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*g_65) == (void*)0), (g_125 && ((*g_65) != (void*)0)))), 2)) || l_140)), p_60)), g_125)) < g_121))))), 3)), p_60));
            (*g_65) = l_92;
        }
        if (((void*)0 == l_164))
        {
            unsigned l_167 = 0xF9266F03L;
            int *l_205 = &g_4;
            int ***l_232 = &l_164;
            int *l_240 = &g_121;
            unsigned short l_241 = 65533UL;
            if (l_165)
            {
                int l_187 = 0x13A33BA3L;
                if (l_166)
                {
                    return (*l_92);
                }
                else
                {
                    const unsigned short l_184 = 0xAB68L;
                    l_168 |= l_167;
                    for (l_168 = 0; (l_168 != (-8)); l_168 = safe_sub_func_uint32_t_u_u(l_168, 1))
                    {
                        unsigned char l_171 = 0x5CL;
                        if ((*p_59))
                            break;
                        (*g_65) = (*g_65);
                        if (l_171)
                            break;
                    }
                    for (g_125 = 0; (g_125 == (-14)); --g_125)
                    {
                        int l_174 = 0x9A6180E0L;
                        int *l_177 = &g_121;
                        (*l_177) = (l_174 == ((safe_add_func_uint8_t_u_u(g_72, (*l_92))) != g_4));
                    }
                    l_187 = (((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_121, 6)), (((&g_66 == &p_58) == ((safe_mod_func_int8_t_s_s(0x37L, p_61)) < (246UL ^ l_167))) > l_184))) & ((safe_mul_func_int16_t_s_s(p_61, g_125)) <= 0x91L)) >= l_184);
                }
            }
            else
            {
                char l_188 = 0x30L;
                int *l_193 = &l_166;
                int **l_196 = (void*)0;
                l_188 = (*p_59);
                (*l_193) ^= ((((*p_59) >= (0x5984A900L && 0x317BB980L)) != (!(7UL & (safe_add_func_int8_t_s_s(0x66L, p_61))))) || (safe_mod_func_int32_t_s_s((**l_164), l_188)));
                (*l_193) &= ((safe_mul_func_int16_t_s_s((l_196 != &p_58), (safe_div_func_int32_t_s_s(((~p_60) && (((-1L) != p_60) >= ((*l_92) != p_61))), (g_72 | ((safe_mul_func_uint16_t_u_u(p_61, 65531UL)) < 0x8E99L)))))) != 0L);
            }
            if ((safe_mul_func_uint16_t_u_u((**l_164), g_72)))
            {
                unsigned short l_210 = 1UL;
                (*l_164) = l_205;
                if ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(p_60, 14)) >= (*l_205)), l_210)))
                {
                    const int l_211 = (-1L);
                    int *l_212 = &l_168;
                    (*l_212) |= l_211;
                    l_212 = (*g_65);
                    if (g_4)
                    {
                        int *l_213 = &l_166;
                        (*l_213) |= ((void*)0 == (*g_65));
                        return (*l_205);
                    }
                    else
                    {
                        int *l_221 = &l_168;
                        (*l_221) = (safe_mul_func_uint16_t_u_u(p_61, (safe_sub_func_uint32_t_u_u(((g_4 != ((**l_164) > ((safe_mul_func_int16_t_s_s((**l_164), g_125)) <= p_60))) & ((g_125 || g_121) < (safe_unary_minus_func_int8_t_s(((-4L) | 0x55L))))), 0xD2885B45L))));
                        (*g_65) = (void*)0;
                    }
                    g_72 = (safe_mul_func_uint16_t_u_u(0x98CDL, (safe_sub_func_int32_t_s_s((*l_92), (g_125 || ((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(0x42L, (((safe_lshift_func_uint8_t_u_s(((-1L) > g_4), 4)) != 1UL) == (l_232 != &g_65)))), 0x56B1269FL)) == p_60))))));
                }
                else
                {
                    unsigned l_235 = 0x550C489AL;
                    int *l_239 = &l_168;
                    for (g_125 = (-5); (g_125 != 12); ++g_125)
                    {
                        int *l_236 = &g_72;
                        (*l_236) ^= l_235;
                    }
                    (*l_232) = &g_66;
                    (*l_239) ^= (safe_add_func_int32_t_s_s(0xCDD36E1FL, (((g_4 >= g_121) == (*l_92)) == g_121)));
                }
            }
            else
            {
                return g_125;
            }
            (*l_240) &= ((&p_58 == l_164) || g_125);
            (*l_240) ^= l_241;
        }
        else
        {
            for (l_140 = 0; (l_140 == 18); l_140 = safe_add_func_uint32_t_u_u(l_140, 1))
            {
                (*l_164) = (*g_65);
                if ((*p_59))
                    break;
            }
            for (p_61 = 21; (p_61 > 17); --p_61)
            {
                (*g_65) = (*g_65);
                return (*p_59);
            }
        }
        (*l_246) = (*p_59);
        (*l_246) |= ((void*)0 == &l_166);
    }
    else
    {
        short l_257 = 0xC705L;
        int l_261 = 1L;
        for (l_166 = 0; (l_166 == 23); l_166 = safe_add_func_int32_t_s_s(l_166, 8))
        {
            for (g_121 = (-18); (g_121 >= 9); g_121++)
            {
                int **l_252 = &l_92;
                if ((*p_59))
                    break;
                (*l_252) = l_251;
            }
            for (p_61 = (-3); (p_61 < 25); p_61 = safe_add_func_uint16_t_u_u(p_61, 6))
            {
                unsigned char l_260 = 0xFCL;
                int l_267 = 0x4515C5C0L;
                g_72 ^= ((safe_sub_func_uint8_t_u_u(l_257, (safe_mod_func_int32_t_s_s((p_61 != p_60), g_121)))) < 0x4B1B2C0FL);
                l_261 = l_260;
                for (l_261 = (-24); (l_261 == 29); ++l_261)
                {
                    for (l_257 = 0; (l_257 > (-18)); --l_257)
                    {
                        unsigned l_266 = 4294967293UL;
                        (*g_65) = (*g_65);
                        l_267 = l_266;
                    }
                    return (*p_59);
                }
            }
        }
        (*l_251) = (safe_mul_func_uint16_t_u_u(l_257, (g_72 > (g_121 < 5UL))));
    }
    (*g_65) = (*g_65);
    return (*l_251);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
