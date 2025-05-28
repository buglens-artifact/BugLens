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



static char g_2 = 2L;
static volatile int g_12 = 0xB3A3FC4BL;
static volatile int *g_11 = &g_12;
static int g_40 = (-1L);
static short g_113 = 0x41ABL;
static unsigned g_129 = 0x72D1EC86L;
static unsigned short g_157 = 2UL;
static int g_201 = 0xF40EE7F3L;
static unsigned char g_221 = 0x0DL;
static unsigned char g_234 = 2UL;
static int *g_290 = &g_201;
static int **g_289 = &g_290;
static int ***g_288 = &g_289;
static const int *g_373 = &g_40;
static const int ** volatile g_372 = &g_373;
static const int ** volatile g_420 = (void*)0;
static int *g_430 = &g_201;
static volatile unsigned g_458 = 7UL;
static const int ** volatile g_510 = &g_373;
static int g_521 = 0xE3364E70L;
static char g_532 = 0x61L;
static int ** volatile g_634 = &g_290;
static int *g_636 = &g_521;
static int ** volatile g_665 = (void*)0;



static char func_1(void);
static int * func_4(unsigned p_5, const int p_6, int * p_7, unsigned char p_8);
static int * func_9(unsigned p_10);
static short func_22(unsigned p_23, int * p_24);
static int func_28(const int * p_29, char p_30, short p_31, short p_32, unsigned short p_33);
static int * func_34(const int p_35, int p_36, int p_37, int * p_38);
static int * func_49(int p_50, int * p_51, unsigned short p_52, const char p_53, const int * p_54);
static char func_60(int * p_61, int p_62, unsigned short p_63);
static unsigned func_65(unsigned p_66, unsigned char p_67, int p_68, short p_69);
static const int * func_72(int p_73, unsigned char p_74);
static char func_1(void)
{
    unsigned short l_3 = 65535UL;
    int **l_666 = &g_430;
    unsigned short l_678 = 0UL;
    (*l_666) = ((g_2 != (l_3 > l_3)) , func_4(l_3, l_3, func_9((g_11 != (void*)0)), (((g_129 & l_3) >= 255UL) | l_3)));
    (*g_11) = (((l_3 <= g_234) ^ (-7L)) ^ ((0x3516L > 0xDB26L) >= (safe_lshift_func_int16_t_s_s((g_129 <= (safe_mod_func_int32_t_s_s(l_3, l_3))), ((+(((safe_unary_minus_func_uint16_t_u(g_129)) == 0xA236L) & g_201)) && 9L)))));
    for (g_157 = 0; (g_157 < 22); g_157 = safe_add_func_int32_t_s_s(g_157, 9))
    {
        int *l_679 = &g_201;
        (*g_11) = (safe_sub_func_uint16_t_u_u(g_157, g_221));
        (*l_679) |= ((g_12 , l_678) <= 0x7F5C01F2L);
    }
    return g_234;
}







static int * func_4(unsigned p_5, const int p_6, int * p_7, unsigned char p_8)
{
    int ***l_645 = &g_289;
    int l_662 = 0L;
    const int **l_664 = &g_373;
    for (g_113 = (-15); (g_113 < 26); g_113++)
    {
        unsigned char l_646 = 255UL;
        int *l_649 = (void*)0;
        int *l_650 = &g_521;
        unsigned char l_661 = 0x6FL;
        const int *l_663 = &g_201;
        (*g_430) &= (safe_mod_func_uint8_t_u_u(g_458, g_2));
        (*l_650) ^= ((l_645 != &g_289) ^ (l_646 | ((safe_rshift_func_uint16_t_u_s(((*g_288) != (void*)0), (((func_22(g_201, l_649) >= p_8) > 0xA9L) , p_8))) > p_8)));
        (*g_634) = func_34((g_458 | g_221), p_6, p_8, l_649);
    }
    (*l_664) = &p_6;
    return p_7;
}







static int * func_9(unsigned p_10)
{
    int l_17 = (-1L);
    short l_25 = 0xAA41L;
    int l_639 = (-1L);
    int *l_640 = (void*)0;
    l_17 = (((safe_sub_func_uint16_t_u_u(((((l_17 <= (safe_rshift_func_int8_t_s_u(0L, 0))) < (((((safe_lshift_func_int16_t_s_s(func_22(l_25, &l_17), 7)) , &l_17) != &l_17) < (l_25 | (safe_mod_func_int16_t_s_s((func_65((p_10 | p_10), p_10, l_25, l_639) < 4294967295UL), l_25)))) > g_221)) != 0x7AL) >= 5UL), g_234)) == l_25) == 0x82L);
    (**g_288) = &l_17;
    (*g_11) = p_10;
    return l_640;
}







static short func_22(unsigned p_23, int * p_24)
{
    int *l_55 = &g_40;
    int * const l_633 = &g_201;
    int ***l_635 = &g_289;
    for (p_23 = 4; (p_23 == 1); p_23 = safe_sub_func_int32_t_s_s(p_23, 5))
    {
        int *l_39 = &g_40;
    }
    g_636 = p_24;
    return g_458;
}







static int func_28(const int * p_29, char p_30, short p_31, short p_32, unsigned short p_33)
{
    unsigned l_486 = 1UL;
    unsigned char l_487 = 0x01L;
    int l_493 = 0x0D50F7A9L;
    int *l_564 = (void*)0;
    const int **l_568 = &g_373;
    const int ***l_567 = &l_568;
    if ((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((g_234 > (+(safe_add_func_uint32_t_u_u((p_33 || (65535UL && (safe_sub_func_int8_t_s_s(func_65(l_486, l_486, ((-1L) && p_31), (l_487 , (safe_lshift_func_int8_t_s_u(((*p_29) == (*g_290)), p_32)))), 254UL)))), p_30)))) | l_487), l_486)), 65535UL)))
    {
        unsigned l_492 = 0x6B98C718L;
        (*g_430) ^= ((((safe_lshift_func_int8_t_s_s(((l_492 & p_30) , (0xFE96L < (g_234 <= p_33))), 5)) && l_493) && g_157) != (p_33 , g_458));
    }
    else
    {
        unsigned char l_494 = 0x35L;
        int *l_495 = &g_201;
        int l_630 = 0x666F7A1EL;
        if ((l_494 ^ 0x47BC0F4CL))
        {
            const int l_513 = 0x185FC9C7L;
            short l_533 = 0x279DL;
            int ***l_581 = &g_289;
            int l_594 = 0xECDE7762L;
            int l_598 = 0x0F72359BL;
            (**g_288) = l_495;
            for (p_32 = 7; (p_32 <= 29); ++p_32)
            {
                return (*g_290);
            }
            if ((safe_sub_func_uint8_t_u_u(l_493, l_486)))
            {
                short l_516 = 0xBAF4L;
                int *l_517 = &g_40;
                (**g_289) = (*g_290);
                (***g_288) &= (p_31 , (*g_11));
                if (((**g_372) != (*l_495)))
                {
                    (*g_11) = func_60((*g_289), (safe_add_func_int16_t_s_s((p_32 <= 0x447DL), p_32)), (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u((g_234 , 1UL), 1)))));
                }
                else
                {
                    unsigned l_505 = 4294967291UL;
                    short l_519 = 6L;
                    int *l_520 = &g_521;
                    (*g_510) = func_72(((l_505 ^ (g_458 , ((p_30 < l_505) < g_234))) >= (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_40, ((*l_495) <= (g_2 <= g_157)))), l_486))), l_487);
                    (*l_520) |= ((((safe_sub_func_int16_t_s_s((l_513 , l_513), 65535UL)) != (((safe_mod_func_uint8_t_u_u(func_60(func_49((l_516 & g_113), l_517, (((((p_30 , ((safe_unary_minus_func_uint16_t_u(0x1BCCL)) , l_505)) , g_113) | p_30) | 0xD225L) , g_12), (*l_517), l_495), g_2, p_33), (-6L))) == g_221) != l_493)) != l_519) > l_513);
                    (*l_495) = (*p_29);
                    for (g_221 = 0; (g_221 > 12); g_221 = safe_add_func_uint32_t_u_u(g_221, 1))
                    {
                        unsigned l_524 = 0x7C3AB263L;
                        int *l_531 = &g_40;
                        g_532 |= (0x222ED12DL ^ (((func_65(g_2, l_524, ((*l_495) && (*p_29)), ((((safe_add_func_int16_t_s_s((&g_289 == ((l_513 == ((safe_lshift_func_int8_t_s_u(((!(safe_add_func_uint8_t_u_u((l_531 != (void*)0), 251UL))) ^ (*p_29)), g_234)) & (*p_29))) , &g_420)), 65535UL)) & p_31) , (*g_372)) == l_520)) , (*l_520)) , 0xECA3DCBDL) , l_493));
                        if ((*l_495))
                            break;
                        l_533 ^= (*p_29);
                    }
                }
                p_29 = ((((safe_rshift_func_uint8_t_u_s((*l_517), (safe_rshift_func_uint16_t_u_u((&p_29 != (void*)0), (safe_mod_func_uint8_t_u_u(g_129, (((safe_sub_func_int32_t_s_s((((*l_495) > ((*l_517) ^ l_493)) != l_486), ((*p_29) <= g_40))) , 8UL) , g_532))))))) , p_32) == g_157) , &l_513);
            }
            else
            {
                const int ***l_561 = (void*)0;
                int l_571 = 0xD1B0B12AL;
                for (g_2 = (-24); (g_2 != 0); g_2++)
                {
                    unsigned short l_560 = 0x3789L;
                    if ((safe_lshift_func_uint16_t_u_s(l_533, 13)))
                    {
                        int l_550 = (-1L);
                        (*g_430) = (*p_29);
                        (*g_290) = (g_221 & (safe_add_func_int32_t_s_s((((p_32 == g_40) ^ ((g_234 , l_493) != (g_12 != (((safe_add_func_uint16_t_u_u(p_33, (+((+(g_40 , ((((0xFB946C83L <= (*p_29)) < g_129) , 0xF8L) || p_32))) & (*p_29))))) >= 0UL) , l_513)))) >= l_550), 4294967295UL)));
                        return (*p_29);
                    }
                    else
                    {
                        const int l_555 = 0x3C5BBEB2L;
                        int l_562 = 6L;
                        (***g_288) = (g_2 > (p_29 == (void*)0));
                        l_562 |= ((safe_lshift_func_int8_t_s_s((((g_113 | ((g_113 , 0x5BL) < (p_32 | 2L))) & l_555) == ((safe_mod_func_uint8_t_u_u((*l_495), l_555)) >= ((((((((safe_rshift_func_int16_t_s_u(g_2, 3)) , p_30) , l_560) , 0x95L) , (void*)0) != l_561) , g_221) , g_113))), 5)) & p_33);
                    }
                }
                if (((!0xAD9D1F72L) > ((((p_30 > g_40) != (safe_unary_minus_func_uint32_t_u(((p_33 , &l_513) == (void*)0)))) , l_495) == l_564)))
                {
                    int *l_569 = &g_521;
                    unsigned l_570 = 4294967295UL;
                    l_571 = (safe_sub_func_uint32_t_u_u((0L >= (&g_289 != l_567)), ((((g_113 < 0L) && func_60(l_569, ((*p_29) ^ (l_570 || (0UL || (*p_29)))), (*l_569))) == l_533) < p_30)));
                    for (l_533 = 0; (l_533 != 7); ++l_533)
                    {
                    }
                }
                else
                {
                    char l_580 = 8L;
                    (*g_290) = ((!((safe_sub_func_int16_t_s_s(g_458, func_65(l_580, p_32, (l_581 == &g_289), (((func_65(g_201, p_32, (***g_288), g_221) ^ p_30) | g_234) < 0x52L)))) || (-1L))) ^ 0L);
                    (*l_567) = (*l_567);
                }
                p_29 = l_495;
            }
            for (g_221 = (-20); (g_221 == 28); g_221++)
            {
                unsigned short l_611 = 0x7865L;
                for (g_129 = 13; (g_129 == 12); g_129 = safe_sub_func_uint16_t_u_u(g_129, 2))
                {
                    short l_590 = 0x97D0L;
                    int l_595 = 0x8D2A5D6BL;
                    (*g_290) &= ((!((g_113 | ((safe_add_func_uint32_t_u_u(p_30, g_234)) < g_129)) <= 0x6CL)) == 5L);
                    if ((*p_29))
                    {
                        (*g_290) ^= (l_590 < 1L);
                        (*g_11) &= (253UL <= (*l_495));
                        if ((*p_29))
                            continue;
                    }
                    else
                    {
                        int *l_591 = &g_201;
                        (*l_568) = l_591;
                    }
                    for (g_521 = (-11); (g_521 < 27); ++g_521)
                    {
                        l_595 &= l_594;
                        (**l_567) = p_29;
                    }
                }
                for (p_31 = 26; (p_31 >= (-30)); p_31--)
                {
                    return l_598;
                }
                for (g_157 = 0; (g_157 <= 13); g_157 = safe_add_func_uint8_t_u_u(g_157, 4))
                {
                    (*g_11) = (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((p_31 | g_2), (+((((((&g_289 == l_581) & (247UL && (g_521 != (safe_rshift_func_int16_t_s_s(l_611, (*l_495)))))) >= (*p_29)) >= p_31) , 0x4668L) & 0x42A3L)))), g_234)), p_33)), p_31));
                    (**l_567) = func_34(g_157, (*g_290), ((*g_290) && ((safe_lshift_func_int16_t_s_u(g_234, p_30)) ^ g_521)), l_564);
                    return (*g_290);
                }
            }
        }
        else
        {
            int **l_617 = &g_430;
            (*g_11) = (safe_lshift_func_int16_t_s_u(g_221, (safe_unary_minus_func_uint8_t_u((&l_495 != l_617)))));
            (*g_11) |= (((p_30 < ((safe_lshift_func_uint8_t_u_u(func_65(p_31, (safe_rshift_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((*l_495), g_2)) > (((((safe_sub_func_uint16_t_u_u(p_30, ((***l_567) ^ (p_30 != ((g_234 || (safe_rshift_func_uint16_t_u_u(0x1C57L, 8))) <= (**l_617)))))) | 0x7A04748DL) , g_129) , (*l_495)) , (-1L))) <= g_201) < (**l_617)), 2)), (*p_29), p_32), p_33)) ^ p_33)) != g_221) ^ 0L);
        }
        (*g_11) ^= (*l_495);
    }
    return l_486;
}







static int * func_34(const int p_35, int p_36, int p_37, int * p_38)
{
    int l_439 = 1L;
    int l_476 = (-1L);
    int **l_477 = &g_430;
    p_38 = &p_36;
    for (p_37 = (-19); (p_37 <= 27); p_37++)
    {
        int *l_436 = &g_201;
        unsigned short l_451 = 0x02B3L;
        short l_463 = 1L;
    }
    (*g_288) = l_477;
    return (*l_477);
}







static int * func_49(int p_50, int * p_51, unsigned short p_52, const char p_53, const int * p_54)
{
    int *l_64 = (void*)0;
    unsigned l_71 = 6UL;
    int l_416 = 1L;
    for (p_50 = 0; (p_50 > (-4)); p_50 = safe_sub_func_int16_t_s_s(p_50, 6))
    {
        unsigned short l_70 = 0xF0C8L;
        int l_408 = 0L;
        unsigned l_415 = 0x822CC9B3L;
        int *l_431 = &l_416;
    }
    return (*g_289);
}







static char func_60(int * p_61, int p_62, unsigned short p_63)
{
    short l_204 = (-9L);
    const int *l_205 = &g_40;
    short l_241 = 0L;
    unsigned char l_292 = 0xC2L;
    unsigned l_306 = 0x6A5FA510L;
    unsigned l_343 = 4294967295UL;
    unsigned short l_368 = 0x9A11L;
    if (func_65(g_40, (p_63 | (~l_204)), ((((void*)0 != l_205) == p_62) & (&g_12 == (void*)0)), (*l_205)))
    {
        short l_208 = (-1L);
        const int **l_209 = &l_205;
        for (l_204 = 0; (l_204 < 0); l_204 = safe_add_func_uint32_t_u_u(l_204, 7))
        {
            (*g_11) = (*g_11);
        }
        (*g_11) = l_208;
        (*l_209) = func_72(g_12, l_208);
    }
    else
    {
        int l_210 = (-1L);
        int l_214 = 1L;
        int l_255 = 0x0C132715L;
        char l_291 = 0x2CL;
        unsigned l_319 = 0UL;
        unsigned short l_385 = 0UL;
        l_214 = ((*g_11) , ((l_210 | (((safe_add_func_uint8_t_u_u((((-8L) < (((((g_157 , (*g_11)) >= (safe_unary_minus_func_int16_t_s(((((((p_63 >= (l_210 > (g_157 & 0x9FE6F2A2L))) < l_210) , g_113) < g_2) , 8UL) == l_210)))) == l_210) || p_63) && p_62)) || 0xE089L), 5L)) == 0x7C79L) > 0L)) ^ 0x91L));
        (*g_11) = (*g_11);
        if ((*g_11))
        {
            char l_258 = 8L;
            int *l_278 = &l_214;
            int **l_323 = &l_278;
            const unsigned l_386 = 0x625C3156L;
            int l_390 = 0xB9A7BD52L;
            for (g_201 = 0; (g_201 >= (-7)); g_201--)
            {
                unsigned short l_226 = 0x0154L;
                int *l_227 = &l_214;
                int **l_272 = &l_227;
                (*l_227) ^= ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(((g_12 , (p_62 == g_12)) ^ (*l_205)), g_221)), 6)) == (safe_lshift_func_uint16_t_u_s(p_63, (+((g_113 <= (safe_rshift_func_int16_t_s_u(l_226, 14))) < (0x10C2F07FL ^ 0x52FCFA51L))))));
                if ((safe_lshift_func_int16_t_s_u((p_62 ^ p_63), (safe_rshift_func_int8_t_s_u(l_214, (safe_mod_func_int32_t_s_s((g_234 || (safe_mod_func_int8_t_s_s((p_63 <= ((safe_lshift_func_uint16_t_u_s(0xD647L, 14)) , g_234)), g_201))), ((safe_add_func_int16_t_s_s(((*l_205) | 0x823D4B9EL), l_241)) & l_210))))))))
                {
                    const int l_252 = 0x0F1B27E7L;
                    int l_254 = 0x759D5BA9L;
                    for (l_226 = 18; (l_226 == 60); l_226 = safe_add_func_int8_t_s_s(l_226, 1))
                    {
                        int l_253 = 0x6858601BL;
                        int *l_265 = &l_255;
                        l_255 &= (safe_sub_func_int16_t_s_s(((*g_11) , (-1L)), ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_210, ((((safe_mod_func_uint16_t_u_u(l_210, ((l_252 , ((l_253 && ((*l_205) <= (l_252 | (g_234 | l_254)))) <= g_157)) & g_40))) & p_62) ^ l_214) == p_63))), p_63)) == 0xDAL)));
                        (*l_265) &= ((safe_rshift_func_uint16_t_u_s(l_258, 1)) == (((l_253 >= (safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((*l_205), (((((*l_227) == (255UL | p_62)) | (safe_sub_func_uint16_t_u_u(((~(g_2 , (((g_129 ^ ((((0xCE0FL | 0x7687L) == 0x5BL) && g_12) , l_253)) | 0x6DL) , 7L))) < 0x2376L), p_62))) != (*l_227)) , p_62))) , g_221), 0x83A2L))) <= p_62) != 0UL));
                    }
                    (*g_11) = (g_12 ^ (*l_205));
                    if ((safe_mod_func_int8_t_s_s(g_157, 0x55L)))
                    {
                        unsigned l_268 = 0x12867139L;
                        (*g_11) = (l_258 <= l_268);
                    }
                    else
                    {
                        return g_12;
                    }
                }
                else
                {
                    unsigned short l_269 = 0x1C5BL;
                    const int *l_270 = &g_40;
                    const int **l_271 = &l_205;
                    (*l_271) = (p_62 , ((((void*)0 != &g_40) , ((*l_205) , (((p_62 ^ (-1L)) , l_269) | l_258))) , l_270));
                }
                if ((*g_11))
                    break;
                (*l_272) = (void*)0;
            }
            if (l_255)
            {
                int l_273 = 1L;
                unsigned short l_287 = 65535UL;
                unsigned l_322 = 0x37DFAF21L;
                int l_328 = 0x7E533C78L;
                (*g_11) = l_273;
                for (p_63 = 0; (p_63 <= 27); ++p_63)
                {
                    char l_286 = (-4L);
                    if ((*g_11))
                        break;
                }
                if (l_287)
                {
                    int l_331 = 0x3DB5F00AL;
                    (**g_288) = ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((((&l_273 != (void*)0) <= l_328) < ((p_62 , (*g_288)) != &p_61)), ((((func_65((safe_mod_func_int32_t_s_s(p_63, (*g_290))), (g_40 || l_214), l_331, g_40) , l_331) < (*l_278)) | 0x5B86L) ^ p_63))) | g_129), p_63)) , &l_328);
                    (***g_288) ^= (+(g_129 > (*l_278)));
                    (**l_323) = (((6L != ((0x4A55E2D7L | (*l_205)) == (safe_unary_minus_func_int8_t_s(0xA5L)))) || (safe_rshift_func_int8_t_s_u(l_328, 0))) == (p_63 < ((safe_lshift_func_uint8_t_u_s((l_273 ^ ((*g_11) && (***g_288))), g_234)) , g_157)));
                    (**g_288) = p_61;
                }
                else
                {
                    (*l_323) = p_61;
                    (**g_289) = ((*l_205) != ((safe_rshift_func_uint8_t_u_u((((((g_201 , 0x7AL) & ((((&g_289 != &g_289) != (0x1466L || (p_62 != p_62))) && ((((p_62 , g_234) > 0x2E51L) > l_210) > p_62)) > g_201)) , (*l_205)) , (-3L)) || 0UL), p_63)) , 0xC3L));
                }
            }
            else
            {
                const unsigned l_348 = 4294967295UL;
                int *l_387 = &g_40;
                if ((safe_lshift_func_int8_t_s_s(l_343, 7)))
                {
                    unsigned l_351 = 8UL;
                    int l_361 = 1L;
                    (*g_289) = (void*)0;
                    for (g_129 = (-29); (g_129 > 35); g_129 = safe_add_func_uint8_t_u_u(g_129, 9))
                    {
                        unsigned char l_358 = 0x05L;
                        (**l_323) = (~((safe_rshift_func_int8_t_s_u(func_65(p_63, (l_348 < ((**l_323) ^ (((safe_lshift_func_int8_t_s_u((((func_65(p_62, p_62, l_351, (~(func_65((safe_rshift_func_int16_t_s_s(g_157, 4)), (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((p_63 , (void*)0) == &l_323), l_348)), (**l_323))), p_63, p_62) , p_62))) , g_201) == p_63) >= l_358), g_129)) , g_12) , g_201))), (**l_323), g_129), g_129)) <= p_62));
                        l_361 &= (0x8DL < (safe_mod_func_uint8_t_u_u(p_63, 2L)));
                        (**l_323) = (safe_mod_func_int16_t_s_s((~(p_62 <= 4UL)), (*l_278)));
                    }
                    (*l_278) &= ((void*)0 == p_61);
                    if ((safe_mod_func_int32_t_s_s((*g_11), ((-4L) ^ (p_62 , (safe_sub_func_int32_t_s_s((-1L), p_62)))))))
                    {
                        (*g_372) = func_72((((l_348 ^ (((l_368 , ((&l_278 != &p_61) == (g_113 , (((!(safe_unary_minus_func_uint32_t_u(((g_201 >= l_348) , ((246UL || ((safe_mod_func_uint8_t_u_u(g_12, 0xC9L)) != 0UL)) >= 0xE578CB2BL))))) < l_361) | 5UL)))) & 0x2FL) != l_348)) , 0xC52F704FL) , g_234), p_63);
                        (*g_289) = (void*)0;
                    }
                    else
                    {
                        const int l_374 = 1L;
                        (**l_323) ^= ((+(((-1L) && l_361) , ((g_129 <= l_348) && l_374))) ^ (safe_mod_func_int32_t_s_s(((*g_288) != (void*)0), l_348)));
                    }
                }
                else
                {
                    int * const *l_384 = &l_278;
                    int * const **l_383 = &l_384;
                    (*g_11) = (safe_mod_func_uint32_t_u_u((((void*)0 != &g_372) & 0xD5CBL), ((safe_mod_func_int32_t_s_s(0L, (safe_mod_func_int16_t_s_s((p_62 >= ((((((((void*)0 != l_383) , &g_289) != (void*)0) , l_385) > l_386) , 0xE0L) & p_62)), g_40)))) || 65527UL)));
                    (*g_289) = (*g_289);
                }
                (*g_289) = l_387;
                (*l_278) = (((*l_387) >= ((-1L) || (safe_rshift_func_int16_t_s_u(g_2, 9)))) >= (*l_205));
            }
            (*g_11) |= l_390;
        }
        else
        {
            (*g_288) = &p_61;
        }
    }
    l_205 = func_72(g_12, (func_65((func_65((p_63 && l_368), (((safe_lshift_func_int8_t_s_u(g_40, 4)) , g_157) > (((((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_234, l_368)) | 0x2CC46ED3L), ((safe_sub_func_int32_t_s_s(((+(p_62 < g_40)) , l_368), g_234)) & 0xD0DEL))), g_113)) , 3UL) <= p_63) , g_113) != g_40)), l_343, g_234) , p_62), p_63, l_292, g_129) , g_157));
    for (g_129 = 28; (g_129 >= 22); --g_129)
    {
        char l_404 = 0xA6L;
        int *l_407 = (void*)0;
        if ((&g_289 == &g_372))
        {
            return l_204;
        }
        else
        {
            unsigned short l_403 = 1UL;
            (*g_11) = l_403;
            (*g_11) = 0L;
            if (l_404)
                break;
            (*g_11) &= (p_63 & l_403);
        }
        if ((*g_11))
            continue;
        if (l_404)
            continue;
        for (p_62 = 0; (p_62 > (-8)); p_62 = safe_sub_func_int32_t_s_s(p_62, 4))
        {
            (*g_289) = l_407;
            return g_113;
        }
    }
    return g_221;
}







static unsigned func_65(unsigned p_66, unsigned char p_67, int p_68, short p_69)
{
    short l_75 = 0x691CL;
    unsigned char l_76 = 0x10L;
    const int *l_196 = &g_40;
    const int **l_195 = &l_196;
    int *l_199 = (void*)0;
    int *l_200 = &g_201;
    (*l_195) = func_72(l_75, l_76);
    (*l_200) ^= ((g_129 < p_66) > (safe_mod_func_uint32_t_u_u(p_67, (g_40 && ((void*)0 != &l_196)))));
    return p_67;
}







static const int * func_72(int p_73, unsigned char p_74)
{
    int *l_79 = &g_40;
    int l_122 = (-8L);
    int **l_168 = &l_79;
    int ***l_167 = &l_168;
    for (g_2 = 0; (g_2 >= (-11)); g_2--)
    {
        int *l_83 = &g_40;
        int l_102 = 0x7A03D6E0L;
        (*l_79) &= (g_2 , (p_74 , (l_79 != &g_40)));
        if (g_40)
        {
            const unsigned l_82 = 0UL;
            int **l_130 = &l_79;
            const int *l_169 = (void*)0;
            if (((safe_lshift_func_uint16_t_u_s(g_2, ((((((p_73 <= g_40) || (g_40 , (l_82 , p_73))) & p_74) || g_2) , &g_40) != l_83))) ^ g_40))
            {
                int *l_103 = &l_102;
                int **l_115 = &l_103;
                int ***l_114 = &l_115;
                if ((safe_lshift_func_int16_t_s_s(((p_74 & g_40) != (safe_add_func_uint16_t_u_u(l_82, ((((*l_79) <= g_2) & 0L) , ((g_2 , p_73) | ((g_2 == 0x2CL) , g_40)))))), 11)))
                {
                    const unsigned l_101 = 0xC6110BDBL;
                    for (p_73 = 0; (p_73 > (-7)); p_73--)
                    {
                        int *l_100 = &g_40;
                        g_40 = ((safe_lshift_func_int16_t_s_u(p_73, 1)) || ((g_2 & g_40) & (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((*l_83) == p_74) <= (*l_79)), ((l_100 == &g_40) > p_73))), 15)), p_73)), g_2))));
                        l_102 ^= (p_73 < (((*l_100) <= p_73) , ((*l_83) | l_101)));
                        if (l_82)
                            continue;
                        if ((*l_83))
                            break;
                    }
                    if ((*l_79))
                        break;
                }
                else
                {
                    unsigned l_104 = 0x4E6B2E54L;
                    if (p_74)
                    {
                        unsigned l_109 = 4294967294UL;
                        int * const l_112 = &g_40;
                        l_103 = l_103;
                        g_113 &= ((p_74 > l_104) && (g_2 & (((void*)0 != &g_40) <= (safe_lshift_func_uint16_t_u_u(g_40, ((safe_lshift_func_int16_t_s_s(l_109, ((g_40 <= (((((safe_rshift_func_uint8_t_u_u((l_104 | g_2), 7)) , l_112) != (void*)0) == p_73) > p_74)) , p_74))) & 1UL))))));
                    }
                    else
                    {
                        if (p_74)
                            break;
                    }
                }
                (*l_114) = (void*)0;
                (*l_103) = (safe_sub_func_int8_t_s_s(((p_73 , g_113) >= ((safe_rshift_func_int16_t_s_s((*l_79), (safe_sub_func_uint8_t_u_u(((l_122 && (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(((&g_11 == (g_129 , l_130)) | g_113), 7)) > 0xC1L), g_40)), g_129))) & 251UL), p_73)))) , p_74)), p_73));
            }
            else
            {
                int **l_141 = &l_79;
                if ((((l_79 == &g_40) <= ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(1L, 4294967293UL)) || (1UL != p_73)), 6)) > ((+(safe_rshift_func_uint16_t_u_s(0x3294L, (0x4CL > 255UL)))) == 0x2A7AC8E6L))) , 0xE83D7068L))
                {
                    (*l_83) = ((((*l_83) ^ (safe_sub_func_uint8_t_u_u(p_73, p_74))) | (safe_lshift_func_uint16_t_u_s(((p_74 <= (g_113 != g_2)) & ((l_141 == (g_2 , l_141)) != (*l_79))), 13))) ^ g_40);
                }
                else
                {
                    unsigned short l_147 = 0x990FL;
                    int ***l_166 = &l_141;
                    for (g_113 = 0; (g_113 >= (-7)); --g_113)
                    {
                        unsigned l_146 = 0x4727EF2EL;
                        g_40 = ((safe_lshift_func_int8_t_s_u((l_146 >= p_74), 3)) >= (l_147 & (((safe_add_func_int32_t_s_s(0xFFB0DC27L, ((void*)0 != l_130))) < (((-1L) < (((g_129 , (((safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s(1L, g_113)))) < g_113) , (*l_130))) != &g_40) , l_147)) < g_40)) >= (*l_83))));
                        g_157 &= ((safe_add_func_uint8_t_u_u((*l_79), g_40)) , (((safe_add_func_uint8_t_u_u((((p_73 || g_40) < g_40) < ((g_113 || (**l_141)) >= g_113)), (&l_102 != l_79))) <= p_74) | 0x8CL));
                        (**l_130) = ((((**l_130) > p_73) | (safe_mod_func_uint16_t_u_u((p_73 && ((safe_rshift_func_uint8_t_u_s(p_74, 3)) && ((!(g_157 , ((safe_add_func_uint16_t_u_u((0x43C8L ^ ((safe_rshift_func_int16_t_s_u((*l_83), 2)) != ((p_74 > ((void*)0 == l_166)) < g_157))), 4UL)) , p_74))) == 0xE818L))), (**l_141)))) == (*l_83));
                    }
                }
            }
            (**l_130) |= (g_113 && 0L);
            (*l_79) = ((void*)0 != l_167);
            return l_169;
        }
        else
        {
            int *l_184 = &g_40;
            for (g_113 = 12; (g_113 < (-13)); g_113 = safe_sub_func_int32_t_s_s(g_113, 5))
            {
                int l_186 = 0x823213DDL;
                for (g_157 = 11; (g_157 != 45); g_157++)
                {
                    int l_178 = 0L;
                    int *l_181 = &l_102;
                    (*l_181) |= (safe_rshift_func_uint8_t_u_s((((((g_40 || (p_74 == 0x96EA0D35L)) , &g_11) != (*l_167)) , (safe_sub_func_int32_t_s_s(l_178, (g_40 , (0x85B538FEL <= (safe_lshift_func_uint8_t_u_u(p_73, 1))))))) | 0xBBL), g_157));
                    if (((((*l_83) , g_40) , 0xC6L) , (safe_lshift_func_int16_t_s_s(((void*)0 != l_184), p_74))))
                    {
                        int *l_185 = &l_102;
                        (*l_184) = (l_185 != ((((((((~((((g_40 != (*l_181)) && (0x8B5CL & l_186)) , (&g_11 != &l_83)) == ((safe_add_func_int32_t_s_s((g_2 == (*l_181)), g_113)) != (-3L)))) == p_73) , 4294967288UL) != (*l_181)) , &l_102) == l_185) ^ 0xB2L) , (void*)0));
                        if (p_73)
                            continue;
                    }
                    else
                    {
                        (*l_184) = (safe_sub_func_int32_t_s_s(p_74, (safe_sub_func_uint32_t_u_u((0x7BL < p_73), (+((p_74 > g_113) | ((0x6A9AA895L == p_74) , ((p_74 < (((safe_add_func_int32_t_s_s(((*l_167) != &g_11), (***l_167))) || p_74) >= g_40)) , (*l_83)))))))));
                        return &g_40;
                    }
                    if (g_157)
                        continue;
                }
            }
            return l_184;
        }
    }
    return &g_40;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
