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



static int g_5 = 0x2751C76DL;
static int *g_40 = &g_5;
static int ** volatile g_39 = &g_40;
static int g_65 = 8L;
static unsigned g_73 = 6UL;
static int g_80 = 5L;
static int ** volatile g_89 = &g_40;
static int * volatile g_107 = &g_80;
static int * volatile g_129 = &g_80;
static int ** volatile g_133 = &g_40;
static int * volatile g_233 = &g_65;
static volatile int g_235 = 1L;
static volatile int *g_234 = &g_235;
static int **g_252 = &g_40;
static int ***g_251 = &g_252;
static unsigned g_390 = 4294967289UL;
static int ** volatile g_582 = &g_40;



static int func_1(void);
static int * func_2(short p_3);
static unsigned char func_10(short p_11, unsigned p_12);
static char func_16(unsigned p_17, int * p_18, int p_19, unsigned p_20);
static unsigned func_25(unsigned char p_26, int * p_27, unsigned p_28, short p_29);
static short func_34(unsigned p_35);
static int * func_41(short p_42, unsigned short p_43, unsigned p_44, int p_45, int p_46);
static short func_47(unsigned p_48, short p_49, int * p_50);
static char func_59(unsigned char p_60, char p_61, unsigned char p_62);
static int * func_66(int ** p_67);
static int func_1(void)
{
    int *l_4 = &g_5;
    int **l_581 = (void*)0;
    (*g_582) = func_2(((l_4 != &g_5) >= (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0xE1ABE8F2L == (func_10((((safe_unary_minus_func_int32_t_s((4294967295UL != (safe_div_func_int32_t_s_s((0xE6L && ((g_5 == (func_16((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(func_25((*l_4), &g_5, (safe_sub_func_int32_t_s_s((g_5 | g_5), (*l_4))), (*l_4)), g_390)), (*l_4))), l_4, g_390, g_5) < g_390)) <= (*l_4))), 0x56F86E5EL))))) == 0x5276L) && (*l_4)), (*l_4)) >= (*l_4))), g_5)), 0x7FL))));

    ;

    return (*l_4);
}







static int * func_2(short p_3)
{
    short l_396 = 0xB31FL;
    unsigned char l_397 = 5UL;
    int *l_398 = &g_80;
    int l_433 = 0x54614522L;
    unsigned l_515 = 2UL;
    short l_539 = 0xE06CL;
    int l_550 = 0xF8FA0988L;
    short l_568 = 0x3C48L;
    unsigned short l_572 = 65531UL;
    if (((safe_lshift_func_uint8_t_u_s(p_3, (p_3 | g_390))) | (((*l_398) & (*l_398)) ^ g_5)))
    {
        int **l_399 = &l_398;
        unsigned l_445 = 0UL;
        char l_456 = 0x8DL;
        unsigned l_461 = 0xBE23AFDFL;
        int l_536 = 0x6A59B379L;
        int l_549 = 0x27FF61B4L;
        (*g_251) = l_399;

        ;
        (*l_399) = (*l_399);
        if ((p_3 && (func_10(g_65, (safe_add_func_uint8_t_u_u(254UL, (~g_390)))) >= (*l_398))))
        {
            unsigned l_404 = 0x05BA0CF0L;
            int **l_409 = &g_40;
            unsigned short l_424 = 0x1935L;
            unsigned short l_426 = 2UL;
            (*g_252) = (*l_399);
            if ((0x4D3313AEL > (*g_129)))
            {
                unsigned char l_429 = 0x55L;
                if (((safe_mul_func_uint16_t_u_u(p_3, 0xEE27L)) & ((safe_sub_func_int8_t_s_s((l_409 == (void*)0), g_390)) || g_65)))
                {
                    char l_425 = 0x4BL;
                    for (l_404 = 0; (l_404 == 12); ++l_404)
                    {
                        int *l_413 = &g_5;
                        (*l_409) = l_413;

                        ;
                    }

                    ;
                    for (l_396 = 0; (l_396 < 29); l_396 = safe_add_func_int8_t_s_s(l_396, 2))
                    {
                        (*l_409) = (void*)0;

                        ;
                    }

                    ;
                    (*l_409) = (*l_399);

                    ;
                    for (l_396 = 28; (l_396 >= 25); --l_396)
                    {
                        (*l_399) = (**g_251);
                        (*l_409) = (void*)0;

                        ;
                        (*l_409) = (*g_89);
                    }

                    ;
                }
                else
                {
                    char l_432 = 0xE2L;
                    int *l_434 = &g_5;
                    (**g_251) = (*g_39);

                    ;
                    if ((*l_398))
                    {
                        (**g_251) = l_398;
                    }
                    else
                    {
                        (*g_252) = (*g_252);
                        return l_434;



                    }
                }

                ;
                ;
                (**g_252) = (safe_sub_func_int32_t_s_s(p_3, g_80));
                (**g_251) = (void*)0;

                ;
                for (l_429 = 11; (l_429 < 30); l_429 = safe_add_func_uint32_t_u_u(l_429, 2))
                {
                    (*g_234) = ((safe_div_func_uint32_t_u_u((p_3 == (safe_lshift_func_int16_t_s_s(l_429, 13))), (~(safe_div_func_int8_t_s_s(func_59(l_429, p_3, l_445), l_429))))) >= p_3);

                    ;
                }
            }
            else
            {
                int l_446 = 0x1538B121L;
                l_446 = (**g_133);
                (*l_398) = (safe_div_func_uint8_t_u_u(g_65, (-1L)));
            }

            ;
            ;
            (*l_409) = (*l_399);

            ;
        }
        else
        {
            unsigned short l_449 = 0UL;
            int l_450 = 0xE064B953L;
            int **l_457 = &g_40;
            short l_460 = 0x14D3L;
            char l_499 = (-10L);
            int ***l_513 = &g_252;
            if ((*g_107))
            {
                char l_487 = 0x41L;
                int *l_494 = &g_5;
                l_450 = l_449;
                (***g_251) = (safe_sub_func_uint32_t_u_u((g_80 != (safe_mod_func_uint16_t_u_u(((func_10((safe_unary_minus_func_int16_t_s(((l_456 == ((*l_398) || p_3)) || (l_457 != (void*)0)))), p_3) ^ (safe_rshift_func_uint8_t_u_u(l_460, p_3))) || 1L), (**l_399)))), l_461));
                (**g_251) = l_398;
                if ((((safe_div_func_uint8_t_u_u(func_59(p_3, (**l_399), g_73), g_390)) | (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(2UL, g_73)), g_80))) & (((-2L) | 1L) & g_5)))
                {
                    char l_468 = 0xDEL;
                    volatile int l_493 = 0x05A65902L;
                    if ((*l_398))
                    {
                        return (*l_457);



                    }
                    else
                    {
                        (*l_399) = (*l_399);
                        (***g_251) = ((g_80 ^ (safe_mod_func_int16_t_s_s((**l_399), g_80))) <= ((void*)0 == &l_398));
                        (**l_399) = func_34(g_235);

                        ;
                    }

                    ;
                    for (p_3 = (-4); (p_3 > 26); ++p_3)
                    {
                        int *l_492 = &g_80;
                        (**g_251) = l_492;

                        ;
                        if ((*g_233))
                            continue;
                        l_493 = (*g_234);
                        (*l_399) = l_494;

                        ;
                    }

                    ;
                }
                else
                {
                    int *l_502 = (void*)0;
                    (**g_252) = (((0x43C5L < (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((+g_5) ^ ((l_499 & 0xFAL) <= (safe_mul_func_int16_t_s_s((l_494 != l_502), ((**l_399) >= p_3))))), 65528UL)), g_390))) ^ p_3) > 1UL);
                    (**g_251) = (*g_133);

                    ;
                    (*l_399) = (*g_89);
                    if ((safe_mod_func_int16_t_s_s((0x6E580612L <= p_3), ((-5L) || ((p_3 ^ (!0x4B08L)) & func_59((((!(safe_div_func_uint16_t_u_u(p_3, (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_80, ((void*)0 != l_513))), (*l_494))), 0x63L))))) != g_80) | (-1L)), p_3, (*l_494)))))))
                    {
                        (*l_494) = p_3;
                    }
                    else
                    {
                        (*l_399) = (*l_399);
                        (*l_494) = p_3;
                    }
                }

                ;
                ;
            }
            else
            {
                unsigned char l_514 = 249UL;
                unsigned short l_516 = 65533UL;
                int *l_524 = (void*)0;
                (**l_513) = func_66(l_399);

                ;
                ;
                if (l_516)
                {
                    int *l_522 = &g_65;
                    if ((p_3 ^ ((*g_251) == (void*)0)))
                    {
                        (*g_234) = ((0xD4B7L != (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int8_t_s_s(1L, g_390)) || func_16(((void*)0 != l_522), l_522, g_390, p_3)))), g_73))) <= (*l_522));

                        ;
                    }
                    else
                    {
                        unsigned l_523 = 1UL;
                        l_524 = (**l_513);
                    }

                    ;
                    (**l_457) = (p_3 >= (0L ^ (l_399 == l_399)));
                    for (g_390 = (-3); (g_390 <= 23); g_390 = safe_add_func_int32_t_s_s(g_390, 8))
                    {
                        unsigned l_531 = 0xC2C1A542L;
                        (*l_522) = 0x42189F8DL;
                        (*l_457) = (*g_39);
                        (*g_107) = (p_3 >= func_59(g_80, (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0xA88BL, func_10(l_531, l_445))), ((+((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_536, ((safe_sub_func_uint32_t_u_u(((0xB4L >= l_539) != p_3), p_3)) >= 0x5FL))), l_531)) >= g_65)) & p_3))), (*l_522)));

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned char l_540 = 7UL;
                    (*g_40) = l_540;
                }

                ;
                ;
                (*g_234) = p_3;
            }

            ;
            ;
        }

        ;
        ;
        if ((safe_add_func_uint8_t_u_u(((p_3 || (func_34(g_73) <= ((safe_mul_func_int16_t_s_s(g_80, g_65)) == (((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(l_549, g_390)), 9L)) || ((void*)0 == &g_252)) < p_3)))) >= 1L), p_3)))
        {
            (*l_399) = (*g_133);

            ;
            (*l_399) = l_398;
            (**g_251) = l_398;
            l_550 = ((*g_89) != (*g_252));
        }
        else
        {
            int l_567 = 2L;
            (*g_234) = (safe_div_func_int8_t_s_s(((safe_add_func_int32_t_s_s(p_3, (safe_add_func_uint16_t_u_u(((!(safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((-6L), (!g_65))) >= (safe_sub_func_uint16_t_u_u((g_80 == g_80), (p_3 < g_5)))), ((g_390 & (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_567, l_461)), 0x935FL))) != 0xD45638A3L)))) <= 0x555CL), g_235)))) || (-1L)), 1L));
            l_398 = (*g_89);

            ;
            l_568 = (*g_129);
        }

        ;
    }
    else
    {
        (***g_251) = (*g_107);
        (*g_252) = &l_550;

        ;
        for (g_65 = 7; (g_65 >= 5); g_65 = safe_sub_func_int32_t_s_s(g_65, 1))
        {
            (*g_40) = ((void*)0 != (*g_251));
        }
    }

    ;
    ;
    ;
    if ((~(safe_unary_minus_func_int32_t_s((func_34((0x49L < g_390)) > l_572)))))
    {
        for (l_515 = (-23); (l_515 >= 40); l_515 = safe_add_func_uint8_t_u_u(l_515, 7))
        {
            l_398 = (*g_39);

            ;
            if (p_3)
                continue;
        }
    }
    else
    {
        (*g_40) = (0x98F7L <= (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0xDEL, 7)), p_3)));
        (*g_40) = p_3;
    }

    ;
    (**g_251) = (*g_133);
    (*g_234) = (safe_mul_func_uint16_t_u_u(p_3, func_10(((void*)0 == (*g_251)), (0x44B3BA55L || (&l_398 == (void*)0)))));

    ;
    return (*g_89);



}







static unsigned char func_10(short p_11, unsigned p_12)
{
    int **l_392 = (void*)0;
    int *l_393 = &g_65;
    (*g_133) = l_393;

    ;
    return (*l_393);
}







static char func_16(unsigned p_17, int * p_18, int p_19, unsigned p_20)
{
    int **l_391 = &g_40;
    (**g_251) = p_18;

    ;
    (*l_391) = (*g_133);
    return p_20;
}







static unsigned func_25(unsigned char p_26, int * p_27, unsigned p_28, short p_29)
{
    int l_36 = 0xFD47030FL;
    for (p_26 = 0; (p_26 > 17); ++p_26)
    {
        int l_51 = (-1L);
        int **l_389 = &g_40;
        if ((func_34(l_36) && 0xC7A2L))
        {
            return g_5;
        }
        else
        {
            int *l_52 = &l_36;
            unsigned l_55 = 0xA1325A46L;
            short l_165 = (-2L);
            (*g_252) = func_41(func_47(l_51, (((l_52 == (*g_39)) == ((safe_sub_func_uint16_t_u_u((l_55 == ((safe_sub_func_int8_t_s_s((&g_5 != p_27), ((&p_27 != &g_40) <= 0x52276C1FL))) <= p_26)), p_28)) == g_5)) ^ (*l_52)), p_27), (*l_52), p_29, l_165, g_5);

            ;
        }

        ;
        if (func_34(((safe_sub_func_uint32_t_u_u(((((safe_div_func_uint16_t_u_u((((*p_27) | l_36) == (safe_mod_func_int16_t_s_s((l_51 || (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((func_47(p_26, (((safe_mul_func_uint16_t_u_u(p_29, ((*g_233) <= (((*g_251) == l_389) == p_29)))) | 0x649F2D25L) < 1L), (*l_389)) & g_5), 0)), g_5))), g_5))), l_36)) & (-7L)) | g_5) > 0UL), g_390)) != 0x50DB7EAFL)))
        {
            p_27 = (*g_252);
            return p_29;
        }
        else
        {
            (*g_234) = func_59((g_65 == func_34(g_235)), p_28, g_73);

            ;
        }

        ;
    }

    ;
    (**g_251) = (void*)0;

    ;
    return p_26;
}







static short func_34(unsigned p_35)
{
    int *l_37 = &g_5;
    int **l_38 = (void*)0;
    (*g_39) = l_37;

    ;
    return (*l_37);
}







static int * func_41(short p_42, unsigned short p_43, unsigned p_44, int p_45, int p_46)
{
    int l_168 = (-1L);
    int **l_173 = &g_40;
    char l_282 = 5L;
    int *l_345 = (void*)0;
    int l_361 = 0x27C5AEF2L;
    int l_373 = 0xB06E81FAL;
    if ((0x6262BB9AL < ((((safe_add_func_int32_t_s_s((l_168 ^ ((((*g_107) & p_43) < p_43) < (safe_sub_func_int8_t_s_s(p_42, p_42)))), ((safe_mul_func_int8_t_s_s((-2L), (((void*)0 == l_173) | g_80))) && 1UL))) == p_42) ^ g_80) && g_65)))
    {
        int *l_181 = (void*)0;
        int ***l_193 = (void*)0;
        for (p_43 = 0; (p_43 != 40); ++p_43)
        {
            int **l_180 = &g_40;
            int l_190 = 0x7E9E4A88L;
            unsigned l_217 = 0xB3FE45E2L;
        }
    }
    else
    {
        (*g_252) = (*g_39);
    }
    if (func_59(l_282, ((safe_rshift_func_int16_t_s_u(p_43, ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(1UL, (safe_mod_func_int32_t_s_s(l_168, (safe_unary_minus_func_int16_t_s(func_47(p_45, (safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(func_47(p_46, (safe_lshift_func_uint16_t_u_u(((void*)0 != (*g_251)), 0)), &p_46), 0x6F8FL)), 0x8F30D59EL)), &l_168))))))), 0x8997L)) > 0xE331L))) >= p_42), l_168))
    {
        unsigned l_324 = 0xC62E2D7CL;
        int ***l_329 = &g_252;
        (*g_234) = l_324;
        p_46 = (safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s(func_47(((g_73 >= ((l_329 == &l_173) == (safe_sub_func_int16_t_s_s(((p_44 > func_59(g_65, p_42, (0xC4L <= ((((safe_unary_minus_func_int32_t_s(((~0xA96FL) | 0x0BA5L))) ^ p_45) & p_45) & p_45)))) && 0x47L), 0x82B9L)))) ^ p_44), p_45, &g_5), 0xD357L)), g_5));
    }
    else
    {
        int *l_336 = &g_65;
        if (((8L | g_73) < l_168))
        {
            int *l_333 = &l_168;
            (*g_252) = l_333;

            ;
            for (g_73 = 0; (g_73 < 45); g_73++)
            {
                (*l_173) = (void*)0;

                ;
                (*g_234) = (g_65 < p_44);
                (**g_251) = (*g_39);
                l_336 = &p_46;

                ;
            }

            ;
            ;
            (*g_234) = func_59(func_47((g_5 > ((safe_rshift_func_uint16_t_u_s(((*g_234) ^ ((p_44 == ((void*)0 != (*g_251))) && ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_65 & p_44), (g_73 & ((void*)0 == (*g_252))))), g_5)) > 0x15L))), 6)) <= g_5)), g_73, l_345), g_5, g_5);

            ;
            for (p_46 = 0; (p_46 > (-11)); p_46 = safe_sub_func_uint32_t_u_u(p_46, 4))
            {
                if (p_44)
                {
                    return (*g_252);


                }
                else
                {
                    unsigned char l_350 = 1UL;
                    for (p_42 = 0; (p_42 != (-29)); --p_42)
                    {
                        l_350 = 1L;
                        (*g_234) = (safe_lshift_func_int16_t_s_s(p_43, ((p_45 && ((safe_div_func_int16_t_s_s(0xB2C8L, (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((p_42 >= func_59(p_46, (safe_sub_func_uint32_t_u_u(l_361, ((void*)0 == &g_252))), p_42)) <= p_42), (*l_333))), 8L)))) > p_45)) != p_44)));
                        if (p_44)
                            break;
                        (*g_252) = (*l_173);
                    }
                    (*l_333) = 0x0FA37F32L;
                    if (p_42)
                        continue;
                    if (l_350)
                        continue;
                }
                return (*l_173);


            }
        }
        else
        {
            (*l_173) = &p_46;

            ;
            (*l_173) = l_336;

            ;
        }

        ;
        ;
        (*g_234) = p_43;
    }

    ;
    if (l_168)
    {
        return (*l_173);


    }
    else
    {
        unsigned l_362 = 0x0B7D4B85L;
        int **l_374 = &g_40;
        l_362 = (*g_233);
        for (p_42 = 21; (p_42 > 21); ++p_42)
        {
            (*g_107) = ((&g_133 == (void*)0) == (0x98C8L == ((safe_mod_func_uint32_t_u_u((p_45 && (safe_div_func_uint16_t_u_u(0x242FL, (safe_add_func_uint8_t_u_u(l_362, ((l_373 != ((l_374 == &l_345) | 0x7A09L)) >= p_45)))))), p_44)) || 0UL)));
            return (*g_133);


        }
    }
    return (*l_173);


}







static short func_47(unsigned p_48, short p_49, int * p_50)
{
    int *l_58 = (void*)0;
    unsigned short l_63 = 0xB878L;
    int **l_85 = (void*)0;
    unsigned l_86 = 0x0BA59A11L;
    int l_164 = 6L;
    p_50 = l_58;

    ;
    if ((func_59(g_5, l_63, p_49) | (safe_add_func_uint16_t_u_u(0UL, (safe_mul_func_int8_t_s_s(p_49, (l_85 == &p_50)))))))
    {
        int *l_87 = (void*)0;
        int *l_88 = &g_65;
        (*l_88) = l_86;
        (*g_89) = p_50;
    }
    else
    {
        for (p_49 = 1; (p_49 <= (-5)); p_49 = safe_sub_func_uint32_t_u_u(p_49, 1))
        {
            return p_49;
        }
    }

    ;
    if ((safe_rshift_func_uint16_t_u_s(3UL, ((g_80 || (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((&p_50 == (void*)0), g_80)), ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(func_34(p_48), g_73)), (0x8B5E6827L || 0xC2A8B70FL))) >= p_49))), 6)), p_49))) ^ g_73))))
    {
        unsigned l_106 = 0xC2A5DE23L;
        int **l_123 = (void*)0;
        (*g_107) = l_106;
        if (((1UL ^ (l_106 <= (safe_add_func_int32_t_s_s(func_59(p_49, (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(0UL, (safe_rshift_func_int8_t_s_s((&g_107 != &g_107), 6)))) && (safe_add_func_uint8_t_u_u(g_80, p_48))), 9)), p_48), g_80)))) ^ p_48))
        {
            int **l_118 = &l_58;
            (*l_118) = (*g_89);
        }
        else
        {
            unsigned l_121 = 0x12CA4FACL;
            int **l_122 = &l_58;
            int *l_124 = (void*)0;
            int *l_125 = &g_80;
            for (g_65 = 0; (g_65 <= 9); g_65 = safe_add_func_int32_t_s_s(g_65, 2))
            {
                if (l_121)
                    break;
                (*g_39) = (*g_39);
            }
            (*l_122) = (*g_89);
            (*l_125) = (l_123 != &g_40);
            (*l_122) = p_50;
        }

        ;
    }
    else
    {
        char l_137 = 0x8FL;
        int l_144 = 0x25D181DDL;
        int l_159 = (-1L);
        for (l_86 = (-20); (l_86 < 37); l_86 = safe_add_func_int8_t_s_s(l_86, 9))
        {
            int *l_128 = &g_5;
            (*g_129) = (l_128 != (*g_89));
        }
        for (g_73 = (-17); (g_73 > 54); g_73 = safe_add_func_int16_t_s_s(g_73, 6))
        {
            int *l_132 = &g_80;
            (*g_133) = l_132;

            ;
            for (l_86 = 28; (l_86 == 35); ++l_86)
            {
                unsigned char l_136 = 254UL;
            }
            (*g_133) = (void*)0;

            ;
            for (l_63 = 17; (l_63 <= 5); l_63--)
            {
                int ***l_153 = (void*)0;
                int **l_154 = &l_132;
                l_154 = &g_40;

                ;
                if ((*g_107))
                    continue;
            }
        }
        (*g_39) = p_50;

        ;
        l_164 = (7L >= ((p_49 || ((safe_sub_func_uint8_t_u_u((0xB5L <= l_159), ((safe_mul_func_uint8_t_u_u(9UL, g_73)) ^ (g_65 | 0L)))) ^ (safe_div_func_int16_t_s_s((l_159 == 0x1EC2L), g_5)))) <= g_65));
    }
    return p_48;
}







static char func_59(unsigned char p_60, char p_61, unsigned char p_62)
{
    int *l_64 = &g_65;
    int **l_77 = &g_40;
    unsigned l_78 = 0x42DE3FC8L;
    (*l_64) = 0x51CC0D68L;
    (*l_64) = 9L;
    (*l_77) = func_66(&l_64);

    ;
    ;
    if (l_78)
    {
        return g_73;
    }
    else
    {
        int *l_79 = (void*)0;
        l_79 = l_79;
        return g_80;
    }
}







static int * func_66(int ** p_67)
{
    int *l_68 = (void*)0;
    int l_76 = 0x82E93B6AL;
    (*p_67) = l_68;


    g_65 = func_34(func_34((func_34((safe_mul_func_uint16_t_u_u((g_5 < g_65), ((safe_add_func_uint16_t_u_u(g_73, func_34(((safe_rshift_func_int8_t_s_u(g_5, 2)) != g_5)))) == ((void*)0 != (*p_67)))))) || 1L)));

    ;
    l_76 = (**g_39);
    return (*p_67);


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
