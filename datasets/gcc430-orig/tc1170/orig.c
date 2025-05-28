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



static int g_4 = 0x4643CDF9L;
static int *g_5 = &g_4;
static unsigned g_63 = 9UL;
static int g_65 = 0x36F914A1L;
static int * volatile g_64 = &g_65;
static int ** volatile g_66 = &g_5;
static int g_81 = 0x5E2623EEL;
static unsigned short g_87 = 65534UL;
static int g_91 = 2L;
static int *g_90 = &g_91;
static int * volatile *g_95 = &g_5;
static int * volatile ** volatile g_94 = &g_95;
static int * volatile g_105 = &g_81;
static short g_113 = 4L;
static short *g_122 = &g_113;
static unsigned char g_144 = 0xC5L;
static short g_148 = 0xB6C3L;
static short *g_155 = &g_113;
static short **g_154 = &g_155;
static int g_206 = 0xA2C154B2L;
static int *g_218 = &g_4;
static int **g_217 = &g_218;
static int * volatile g_234 = (void*)0;
static int * volatile g_235 = &g_65;
static unsigned g_238 = 4294967295UL;
static char g_242 = (-1L);
static unsigned short g_244 = 65535UL;
static int * volatile g_252 = &g_91;
static unsigned char *g_305 = &g_144;
static int *g_308 = &g_91;
static int g_342 = 0xDF3C2A6CL;
static volatile unsigned short *g_405 = (void*)0;
static volatile unsigned short **g_404 = &g_405;
static char g_430 = 4L;
static int * volatile ** volatile g_453 = &g_95;
static int ***g_493 = &g_217;
static int ****g_492 = &g_493;
static int **g_496 = (void*)0;
static int g_501 = 0x381EB79BL;
static unsigned short g_555 = 0x4B22L;
static volatile int * volatile g_606 = (void*)0;
static int * volatile g_621 = &g_342;



static int func_1(void);
static int * func_2(int p_3);
static int func_13(short p_14, unsigned short p_15, int p_16, unsigned p_17, int p_18);
static int func_21(char p_22, int * p_23, unsigned p_24);
static int * func_27(int p_28, int * p_29, int * p_30, int * p_31, int p_32);
static int * func_33(int ** p_34, short p_35, int * p_36, int p_37);
static int ** func_38(char p_39, int ** p_40, unsigned p_41, short p_42, char p_43);
static char func_44(char p_45, int ** p_46, int * p_47);
static char func_48(int ** p_49, int p_50, int * p_51, char p_52, int p_53);
static unsigned func_58(char p_59, int * p_60);
static int func_1(void)
{
    int **l_12 = &g_5;
    int l_19 = (-1L);
    int l_20 = 0x44CF5927L;
    int *l_622 = &l_20;
    int ****l_641 = &g_493;
    (*l_12) = func_2(g_4);

    ;
    (**g_453) = func_2(func_13(g_4, g_4, l_19, ((((**g_154) = ((l_20 = l_19) == func_21(g_4, (*l_12), g_4))) | (safe_sub_func_int8_t_s_s(g_63, g_91))) != g_206), g_63));


    ;
    (*g_95) = (*l_12);
    for (g_81 = 21; (g_81 < (-6)); g_81 = safe_sub_func_int16_t_s_s(g_81, 9))
    {
        short *l_620 = (void*)0;
        int l_623 = 8L;
        char *l_624 = (void*)0;
        char *l_625 = &g_242;
        (*g_621) = ((*g_308) = ((*g_90) > ((void*)0 == l_620)));
        (**g_493) = l_622;

        ;
        if ((l_623 & ((*l_625) = func_44((*l_622), (*g_493), (*g_217)))))
        {
            unsigned short l_634 = 65526UL;
            int l_635 = (-6L);
            unsigned *l_636 = &g_238;
            int ****l_637 = &g_493;
            int *****l_638 = &g_492;
            (*g_218) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((((l_623 = 0UL) != (l_634 < ((void*)0 == &g_405))) && l_635), ((g_144 <= l_635) < ((*l_636) |= g_342)))) & (((*l_638) = l_637) != &g_94)), 9));
            (*g_218) = (*g_252);
            (****g_492) |= (*g_621);
            (****l_638) = &l_623;

            ;
        }
        else
        {
            int l_648 = 0xD9B2F9ECL;
            (****g_492) = ((safe_mul_func_int8_t_s_s(((&g_493 != l_641) & ((*g_90) = (***g_493))), ((*g_305) != 1L))) && (safe_lshift_func_int16_t_s_u((0xFFL ^ (*g_305)), ((~(safe_sub_func_int16_t_s_s(8L, (l_623 == g_87)))) > (*g_122)))));
            (**g_493) = func_2(((safe_sub_func_uint32_t_u_u(l_648, 4UL)) <= (~g_555)));

            ;
            (*l_622) |= (*g_90);
        }


        ;
        (*g_95) = (void*)0;

        ;
    }
    return (*g_235);
}







static int * func_2(int p_3)
{
    int *l_11 = (void*)0;
    if (p_3)
    {
        g_5 = &p_3;

        ;
    }
    else
    {
        for (p_3 = 0; (p_3 >= 19); ++p_3)
        {
            int *l_10 = &g_4;
            for (g_4 = 0; (g_4 == 10); g_4++)
            {
                return l_10;


            }
        }
        return &g_4;


    }

    ;
    return l_11;



}







static int func_13(short p_14, unsigned short p_15, int p_16, unsigned p_17, int p_18)
{
    int ***l_388 = &g_217;
    int ****l_389 = &l_388;
    int ***l_391 = &g_217;
    int ****l_390 = &l_391;
    int *l_472 = &g_81;
    char *l_556 = &g_430;
    unsigned short *l_597 = &g_555;
    unsigned short **l_596 = &l_597;
    unsigned char l_614 = 255UL;
    (*g_95) = &p_16;

    ;
    (*g_90) = ((**g_154) == 1L);
    if ((((*l_389) = l_388) != ((*l_390) = &g_217)))
    {
        short l_423 = 0xAA96L;
        int *l_440 = &g_65;
        int **l_466 = &g_90;
        (***l_389) = &p_16;

        ;
        for (p_15 = 12; (p_15 == 2); p_15--)
        {
            unsigned short *l_396 = &g_87;
            unsigned short **l_397 = &l_396;
            unsigned short *l_399 = &g_87;
            unsigned short **l_398 = &l_399;
            if (p_15)
                break;
            (****l_390) = ((((*l_397) = l_396) == ((*l_398) = &g_87)) || ((void*)0 == &g_305));
        }
        for (g_4 = 0; (g_4 > (-6)); g_4--)
        {
            unsigned short l_426 = 65528UL;
            int *l_431 = &g_342;
            unsigned l_439 = 7UL;
            int **l_451 = (void*)0;
            if ((safe_sub_func_int8_t_s_s(((***l_388) ^= ((void*)0 == &g_217)), ((void*)0 != g_404))))
            {
                short l_406 = 0x8522L;
                return l_406;



            }
            else
            {
                unsigned l_428 = 0x7655B96CL;
                int *l_465 = (void*)0;
                int *l_474 = &g_65;
                for (g_244 = 19; (g_244 != 30); ++g_244)
                {
                    int **l_437 = &l_431;
                    char l_452 = 2L;
                    for (g_148 = 0; (g_148 <= (-3)); --g_148)
                    {
                        unsigned short *l_427 = &l_426;
                        char *l_429 = &g_430;
                        (*g_217) = &p_16;
                        (*g_90) &= (+func_58(((*l_429) = (2UL == ((((p_17 | 1L) ^ 0x5BL) == (*l_431)) || p_17))), (*g_66)));
                    }
                }
                for (p_14 = 0; (p_14 >= 10); ++p_14)
                {
                    unsigned l_456 = 0UL;
                    int l_459 = 1L;
                    int **l_460 = &l_440;
                    unsigned *l_464 = (void*)0;
                    unsigned **l_463 = &l_464;
                    unsigned short *l_467 = &g_244;
                }
            }
            if (p_18)
                break;
            for (g_342 = 0; (g_342 < 19); g_342 = safe_add_func_int16_t_s_s(g_342, 8))
            {
                (**l_391) = &p_16;
            }
            (*g_252) &= ((0xE16A5420L < (*l_440)) & 4L);
        }

        ;
        (*g_218) ^= (((void*)0 != &l_423) & ((*l_472) == ((void*)0 != &l_423)));
    }
    else
    {
        int **l_490 = &g_5;
        int ****l_491 = &l_391;
        unsigned short *l_497 = &g_244;
        if (((safe_mod_func_uint16_t_u_u(((*l_497) = (p_14 & (0x5BB0L <= func_44((****l_389), (g_496 = func_38(g_4, l_490, (l_491 == (g_492 = g_492)), (safe_mul_func_uint8_t_u_u(1UL, 0xDBL)), (**l_490))), (***l_491))))), 1UL)) & (****l_491)))
        {
            p_16 = (-1L);
            return p_17;
        }
        else
        {
            unsigned char **l_500 = (void*)0;
            int l_504 = 0xC1A00546L;
            (****g_492) = (safe_mod_func_uint16_t_u_u(l_504, (**g_154)));
        }


        ;
        if ((p_17 < 0L))
        {
            int **l_517 = &l_472;
            (*g_496) = (*g_496);
            for (p_18 = 0; (p_18 != (-15)); --p_18)
            {
                unsigned short l_518 = 1UL;
                (***g_492) = func_2(p_15);
                if (p_14)
                    break;
                (*l_472) &= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*g_305) & (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((g_148 && ((void*)0 != &p_17)), (safe_mul_func_int8_t_s_s(p_14, ((g_244 < p_15) != func_44(g_501, l_517, (*g_217))))))), 10))), l_518)), 15));
            }

            ;
        }
        else
        {
            char **l_557 = (void*)0;
            char *l_559 = &g_242;
            char **l_558 = &l_559;
            for (g_113 = 0; (g_113 > 7); g_113 = safe_add_func_uint32_t_u_u(g_113, 6))
            {
            }
            (****l_491) = ((!p_18) | 0x78L);
            (*l_472) = ((**l_391) != (***l_491));
        }

        ;
    }


    ;
    ;
    for (g_501 = (-23); (g_501 <= 13); g_501 = safe_add_func_uint8_t_u_u(g_501, 5))
    {
        unsigned short l_564 = 0UL;
        unsigned *l_571 = &g_238;
        int l_574 = 0xA3015679L;
        int l_587 = 0xAD99CC62L;
        unsigned short ***l_598 = &l_596;
        unsigned short **l_599 = &l_597;
        if (func_44((((((safe_add_func_uint8_t_u_u(p_17, ((((*g_305) |= p_17) | l_564) & ((*l_472) = (p_15 || ((*g_308) = (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((((**g_154) |= p_17) < (safe_sub_func_int32_t_s_s(0x99A5FCF5L, ((*l_571) ^= (~g_4))))) <= ((-10L) || (safe_sub_func_int8_t_s_s(l_564, 0x33L)))) || l_564), l_564)), l_564)))))))) && p_14) <= 0xC2A5C605L) | p_16) < l_574), (*l_391), (**l_388)))
        {
            int l_582 = 0x23736681L;
            short **l_585 = &g_155;
            for (p_14 = 13; (p_14 == 10); --p_14)
            {
                unsigned char l_579 = 1UL;
                short *l_580 = &g_148;
                int l_581 = (-9L);
                short l_586 = 0x63EFL;
                l_582 &= ((safe_mul_func_uint16_t_u_u((l_579 | p_17), (p_16 != ((**g_154) >= ((*l_580) = (0x73L && ((*g_305) = p_18))))))) == (((*g_122) || l_581) <= p_15));
                (*g_308) = (safe_lshift_func_int16_t_s_u((((**g_154) = ((void*)0 == l_585)) | l_586), 1));
                p_16 |= l_579;
                return p_14;


            }
            (*g_90) = p_14;
        }
        else
        {
            l_587 = (p_16 &= (*g_90));
            return (*g_64);


        }


        if ((safe_lshift_func_uint8_t_u_u((((*l_556) = (safe_mul_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(0x950FFBC0L, (((*l_598) = l_596) == (l_599 = &l_597)))) ^ ((void*)0 != (*g_217))), p_18))) != ((safe_rshift_func_int8_t_s_u((g_148 | (safe_div_func_uint16_t_u_u(((&g_122 == &g_155) ^ p_18), p_14))), 7)) > p_18)), 5)))
        {
            for (l_587 = (-6); (l_587 < 18); l_587 = safe_add_func_int8_t_s_s(l_587, 7))
            {
                volatile int * volatile *l_607 = &g_606;
                (*l_607) = g_606;
                (*l_472) &= ((0xA547L | func_44(((*l_556) = (-1L)), (**g_492), &p_16)) >= (p_15 == p_16));
            }
        }
        else
        {
            short l_617 = (-6L);
            if ((7UL | (*g_122)))
            {
                for (g_63 = 0; (g_63 != 34); ++g_63)
                {
                    for (l_574 = 0; (l_574 > (-15)); l_574 = safe_sub_func_int16_t_s_s(l_574, 1))
                    {
                        p_16 = (*g_90);
                    }
                }
                if (l_614)
                {
                    for (p_16 = (-21); (p_16 >= 27); ++p_16)
                    {
                        if (l_617)
                            break;
                    }
                }
                else
                {
                    (*l_472) = (-5L);
                }
            }
            else
            {
                return (*g_90);


            }
        }
        (**l_388) = (void*)0;

        ;
    }
    return p_14;



}







static int func_21(char p_22, int * p_23, unsigned p_24)
{
    int **l_54 = &g_5;
    int l_57 = (-1L);
    unsigned short l_377 = 65528UL;
    int l_383 = (-3L);
    int l_385 = 0x8894FDA7L;
    for (p_22 = (-27); (p_22 > 15); p_22 = safe_add_func_int8_t_s_s(p_22, 7))
    {
        int **l_55 = (void*)0;
        int l_56 = (-6L);
        int **l_210 = (void*)0;
        char *l_376 = &g_242;
        char **l_375 = &l_376;
        int ***l_381 = &l_55;
        int ****l_380 = &l_381;
        unsigned *l_382 = (void*)0;
        int *l_384 = &l_57;
    }
    return (*g_218);
}







static int * func_27(int p_28, int * p_29, int * p_30, int * p_31, int p_32)
{
    int l_261 = 0x326B5A98L;
    unsigned char l_264 = 0xECL;
    int *l_265 = &g_65;
    int *l_266 = &g_91;
    char *l_267 = &g_242;
    unsigned short *l_268 = &g_87;
    unsigned short l_272 = 65526UL;
    int *l_338 = &l_261;
    int **l_360 = &g_308;
    if (((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_261, g_206)), 3)), ((*l_267) |= (((*l_266) = ((*l_265) = (safe_mul_func_int16_t_s_s((*g_155), (l_264 |= g_81))))) == 0xE622A44BL)))) ^ ((g_4 || ((*l_268) = 0xE4B6L)) != g_144)))
    {
        char l_271 = 0xA8L;
        int l_275 = (-1L);
        unsigned char *l_300 = &g_144;
        int ***l_350 = (void*)0;
        if ((safe_sub_func_uint16_t_u_u(g_113, ((l_271 > 1L) > (*g_252)))))
        {
            unsigned l_291 = 0xBAC53C36L;
            int l_292 = (-2L);
            if ((*p_31))
            {
                char l_280 = 4L;
                unsigned char *l_299 = (void*)0;
                l_275 = 0x71802269L;
                l_292 = (g_238 < (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_280, 5)) && (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_4, 1UL)), (safe_sub_func_int32_t_s_s(((*l_265) = 1L), ((0xDBL > (p_32 | (safe_mul_func_uint8_t_u_u(g_242, ((safe_lshift_func_uint8_t_u_s(l_291, 0)) < p_32))))) != 0xB313L)))))), g_4)));
                (*l_265) = (safe_add_func_int32_t_s_s((*g_235), (((((*l_267) = (l_275 >= (l_280 < ((~p_32) | ((((((safe_lshift_func_int16_t_s_u((~((*g_122) = ((l_299 == &g_144) < l_291))), 13)) & ((*l_266) = (&l_264 == l_300))) != 1L) & l_280) != l_280) ^ l_292))))) == g_63) > g_206) | p_28)));
            }
            else
            {
                int *l_307 = &l_261;
                int **l_311 = &g_5;
                if ((*p_31))
                {
                    unsigned char *l_303 = (void*)0;
                    unsigned char *l_306 = &l_264;
                    int l_314 = 0x36BEBD65L;
                    for (g_148 = (-16); (g_148 == 28); g_148 = safe_add_func_int8_t_s_s(g_148, 1))
                    {
                        unsigned char **l_304 = &l_303;
                        (*l_266) ^= ((*l_265) = ((g_305 = ((*l_304) = l_303)) == l_306));

                        ;
                    }

                    ;
                    g_308 = func_33(&p_31, p_32, (*g_217), (g_244 != (*g_252)));

                    ;
                    (*g_252) = (safe_mod_func_int32_t_s_s(func_44(g_113, &g_308, &l_292), (**g_217)));
                }
                else
                {
                    (*l_311) = &p_32;

                    ;
                }


                ;
                ;
                return (*g_217);



            }
        }
        else
        {
            short l_337 = 0L;
            int l_339 = 0x560447B2L;
            int *l_340 = (void*)0;
            int *l_341 = &g_342;
            l_275 = ((*g_308) = 0xB6333A41L);
            for (g_144 = 0; (g_144 < 18); g_144 = safe_add_func_uint32_t_u_u(g_144, 5))
            {
                if ((*p_29))
                    break;
                if (g_238)
                    goto lbl_343;
            }
lbl_343:
            (*l_341) ^= func_44((safe_sub_func_uint8_t_u_u((l_339 = ((((*g_308) = (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_32, func_44(((safe_add_func_int16_t_s_s(p_32, (*g_122))) ^ ((safe_lshift_func_int8_t_s_u((2UL <= 0L), (*g_305))) && func_44(p_28, &g_218, func_33(func_38((g_87 == l_337), &g_308, p_32, (*g_155), p_32), p_28, l_338, l_275)))), &g_218, (*g_217)))), p_32)), l_271))) != g_206) > p_32)), g_87)), &g_308, (*g_217));
            (*l_341) = ((5L ^ g_4) ^ (*l_266));
        }
        for (p_32 = 18; (p_32 > 26); p_32++)
        {
            int ****l_351 = &l_350;
            short *l_356 = &g_148;
            (*l_266) |= (g_238 <= (safe_rshift_func_uint8_t_u_s(((((~g_63) == ((safe_lshift_func_uint16_t_u_s(p_32, (((*l_351) = l_350) != &g_95))) <= ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*g_122) >= (l_356 == (*g_154))), p_28)), 0x70L)) | 8L))) & p_28) && p_32), 3)));
            if ((*p_29))
                continue;
            (*l_266) = (g_87 >= ((func_44((safe_lshift_func_uint16_t_u_u(func_44((0x0EL || g_144), &g_90, &l_261), g_81)), &g_218, &p_32) <= g_113) & (*g_218)));
        }
        (*l_265) &= (*l_266);
    }
    else
    {
        unsigned short l_359 = 65527UL;
        unsigned char **l_361 = &g_305;
        unsigned char *l_363 = &g_144;
        unsigned char **l_362 = &l_363;
        unsigned char *l_365 = (void*)0;
        unsigned char **l_364 = &l_365;
        int *l_366 = &g_81;
        l_359 = 1L;
        (*g_217) = func_33(&g_218, p_32, (*g_217), (*l_265));
        (*l_360) = func_33(l_360, ((*g_122) = (p_28 < (((*l_362) = ((*l_361) = &g_144)) == ((*l_364) = &g_144)))), l_366, (*l_366));

        ;
        ;
    }

    ;
    return (*l_360);


}







static int * func_33(int ** p_34, short p_35, int * p_36, int p_37)
{
    unsigned l_227 = 0xF0A2765BL;
    int l_228 = 0x917EE890L;
    int **l_251 = &g_5;
    l_228 = (safe_div_func_uint8_t_u_u(g_113, (+l_227)));
    for (g_81 = 8; (g_81 >= 8); ++g_81)
    {
        unsigned l_231 = 0x9AC6BCD6L;
        int **l_243 = &g_5;
        if (func_44(l_227, &p_36, &l_228))
        {
            int **l_232 = (void*)0;
            int *l_233 = &g_91;
            char *l_239 = (void*)0;
            char *l_240 = (void*)0;
            char *l_241 = &g_242;
            (*g_235) = ((*l_233) = ((*p_36) != (func_44((l_231 &= p_35), l_232, (*p_34)) ^ g_87)));
            g_244 &= func_44(((safe_add_func_int8_t_s_s(p_35, (g_144 || p_37))) <= func_44(((*l_241) ^= (g_238 = p_35)), &g_90, (*p_34))), l_243, (*p_34));
            for (g_63 = 0; (g_63 == 32); g_63++)
            {
                (*l_233) = (safe_mul_func_uint16_t_u_u((((void*)0 == &g_122) <= l_227), ((9L > (safe_lshift_func_int16_t_s_s(p_37, func_44(((*l_241) |= g_63), &g_218, &l_228)))) < p_37)));
            }
            if ((**p_34))
                break;
        }
        else
        {
            int *l_253 = (void*)0;
            int *l_254 = &g_91;
            (*g_252) = ((*g_235) = func_44(p_35, l_251, &l_228));
            (*l_254) &= 0x486C133AL;
            return (*g_217);



        }
        (*l_243) = &l_228;

        ;
    }


    return (*p_34);



}







static int ** func_38(char p_39, int ** p_40, unsigned p_41, short p_42, char p_43)
{
    short l_223 = 0x768CL;
    int **l_224 = &g_90;
    l_223 &= ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_41, g_4)), (**p_40))) == (**p_40));
    return l_224;


}







static char func_44(char p_45, int ** p_46, int * p_47)
{
    int l_213 = 0xF3E0A319L;
    for (g_91 = 0; (g_91 != 26); ++g_91)
    {
        int *l_214 = (void*)0;
        int *l_215 = (void*)0;
        int *l_216 = &g_65;
        (*l_216) = l_213;
    }
    (*g_95) = &l_213;


    ;
    return l_213;



}







static char func_48(int ** p_49, int p_50, int * p_51, char p_52, int p_53)
{
    int *l_92 = &g_4;
    int *l_93 = &g_65;
    unsigned l_131 = 4294967295UL;
    short **l_153 = &g_122;
    unsigned l_186 = 0xA523A5B0L;
    short l_205 = 0x113CL;
    (*l_93) = (func_58(g_4, (*p_49)) < (((g_90 = &g_4) == l_92) | g_91));

    ;
    (*g_94) = &g_64;

    ;
    if (func_58((safe_rshift_func_uint8_t_u_s((!func_58((safe_mod_func_int8_t_s_s(((p_50 >= 0UL) || (safe_rshift_func_uint8_t_u_s(p_50, 6))), (*l_92))), (*p_49))), (&g_90 != &l_92))), &g_91))
    {
        int l_111 = 0xE6BA1441L;
        int * volatile l_128 = &l_111;
        int l_162 = 0x4C7F9B13L;
        (*g_95) = (*g_66);


        if ((p_53 && ((*l_92) ^ ((*l_93) = (+(*l_93))))))
        {
            unsigned l_104 = 0x677A3B2FL;
            (*g_105) ^= ((*l_93) = (0x26L && (l_104 != 0x96089842L)));
            return (*l_93);
        }
        else
        {
            int * volatile l_106 = (void*)0;
            int l_134 = 0L;
            short l_168 = 0x5A80L;
            l_106 = (*g_95);


            for (g_81 = 5; (g_81 > (-12)); g_81--)
            {
                short *l_112 = &g_113;
                int l_116 = (-10L);
                (*l_93) = (*g_90);
            }
lbl_165:
            (*p_49) = &l_111;


            if ((*p_51))
            {
                int **l_132 = (void*)0;
                int **l_133 = &l_92;
                unsigned char *l_143 = &g_144;
                short *l_147 = &g_148;
                unsigned short *l_156 = &g_87;
                unsigned short l_157 = 0x8660L;
                (**p_49) = (((*g_66) == ((*l_133) = &g_65)) | (l_134 = 0x28L));

                ;
                (**l_133) ^= (**p_49);
                (*l_128) ^= (&p_49 == &p_49);
                if ((safe_add_func_uint8_t_u_u((((*l_128) = (~(safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((*l_143) |= p_53), (((0x4BD3C15FL || ((0x7360L == (safe_sub_func_int16_t_s_s(((*l_147) ^= (*g_122)), (*l_93)))) == (safe_sub_func_uint16_t_u_u((!65527UL), ((*l_156) &= (safe_mul_func_uint16_t_u_u((((g_154 = l_153) == (void*)0) == g_63), (*l_93)))))))) >= g_63) && g_81))), l_157)), 0L)))) != (**l_133)), (**l_133))))
                {
                    for (p_50 = 0; (p_50 > (-17)); p_50--)
                    {
                        char *l_160 = (void*)0;
                        int l_161 = (-1L);
                        l_161 &= (**g_66);
                    }
                }
                else
                {
                    (*g_5) = (-5L);
                    l_162 &= (*l_128);
                }

                ;
            }
            else
            {
                for (p_53 = (-14); (p_53 >= (-23)); --p_53)
                {
                    (*l_93) = ((void*)0 != &g_95);
                    if (g_87)
                        goto lbl_165;
                }
                for (g_87 = 0; (g_87 < 7); g_87++)
                {
                    (*l_128) = (0x43L == g_144);
                    (**p_49) = (((*l_128) == l_168) < p_52);
                    if ((*p_51))
                        break;
                }
                (*l_128) = ((p_52 == (p_50 > (((l_134 ^= ((safe_rshift_func_uint16_t_u_s((*l_128), (safe_mul_func_int16_t_s_s((*g_122), (+(safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((((safe_mul_func_uint8_t_u_u(p_52, ((((*g_5) > (safe_mul_func_int16_t_s_s((-7L), (**g_154)))) ^ (safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((*g_155) >= 0UL), (**p_49))) && p_52), g_91))) <= (-5L)))) == g_113) < p_52))), 1))))))) < g_144)) >= g_91) != (*g_122)))) || p_52);
            }

            ;
            ;
        }


        ;
        ;
    }
    else
    {
        unsigned char *l_195 = &g_144;
        int l_200 = 0L;
        if ((safe_rshift_func_uint8_t_u_s(l_186, (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s(g_148, ((*l_195) = (safe_rshift_func_uint16_t_u_u(p_50, 4))))) < (safe_mod_func_uint16_t_u_u(p_50, func_58(((safe_sub_func_int16_t_s_s(((*g_122) = ((void*)0 != &p_49)), l_200)) & (safe_div_func_uint16_t_u_u((*l_93), (safe_sub_func_uint8_t_u_u((+(((*l_92) ^ g_148) > l_205)), g_65))))), (*p_49))))) >= (*l_92)), 7)), p_52)) >= (*g_90)) == g_148))))
        {
            return p_52;
        }
        else
        {
            (**g_95) = (-1L);
            (*l_93) |= (g_206 || 0x5FL);
        }
        if (g_65)
            goto lbl_207;
lbl_207:
        (*p_49) = &l_200;


        (*g_95) = (**g_94);
        (*p_49) = (*g_66);
    }



    ;
    ;
    (*l_93) = (safe_add_func_int8_t_s_s((*l_92), ((*g_94) == &g_90)));
    return g_144;
}







static unsigned func_58(char p_59, int * p_60)
{
    unsigned l_79 = 1UL;
    if ((safe_lshift_func_int8_t_s_u(p_59, 6)))
    {
lbl_69:
        (*g_64) = g_63;
        (*g_66) = &g_65;

        ;
        (*g_5) &= 0x3C66883CL;
    }
    else
    {
        int **l_70 = &g_5;
        for (g_63 = 0; (g_63 <= 6); g_63 = safe_add_func_int16_t_s_s(g_63, 7))
        {
            if (p_59)
                goto lbl_69;
        }
        (*l_70) = (*g_66);
    }
    for (g_65 = 8; (g_65 != 16); ++g_65)
    {
        int *l_80 = &g_81;
        int *l_82 = &g_65;
        int **l_83 = &g_5;
        unsigned short *l_86 = &g_87;
        (*l_80) = (safe_mul_func_uint16_t_u_u(0x7F46L, (safe_mul_func_uint16_t_u_u((p_59 && ((safe_rshift_func_uint16_t_u_s(p_59, 8)) & (-8L))), l_79))));
        p_60 = ((*l_83) = l_82);

        ;
        ;
        (*l_80) = (((*l_86) = ((*l_80) < (safe_div_func_int8_t_s_s(p_59, g_4)))) | (safe_lshift_func_uint8_t_u_u(p_59, 6)));
    }
    return p_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
