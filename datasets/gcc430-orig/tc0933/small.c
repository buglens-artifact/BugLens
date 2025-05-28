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



static unsigned g_10 = 4294967295UL;
static int g_44 = 0x83AFD470L;
static int g_51 = (-2L);
static int g_65 = 0L;
static unsigned char g_69 = 0UL;
static unsigned short g_118 = 0xC9DAL;
static unsigned char g_130 = 0xACL;
static int g_132 = 0x0B3897E0L;
static unsigned g_149 = 4294967295UL;
static char g_162 = 2L;
static unsigned g_180 = 0x6C5F3932L;
static unsigned char *g_212 = &g_130;
static volatile unsigned char g_257 = 6UL;
static unsigned short *g_260 = &g_118;
static unsigned short **g_259 = &g_260;
static unsigned short ***g_258 = &g_259;
static volatile unsigned g_263 = 0x49CAA41AL;
static int *g_273 = &g_44;
static int **g_272 = &g_273;
static volatile int g_318 = 0L;
static char g_368 = (-1L);
static int g_371 = 0xBF49AE90L;
static char *g_425 = (void*)0;
static char **g_424 = &g_425;
static int *g_436 = &g_44;
static volatile unsigned char *g_450 = &g_257;
static volatile unsigned char **g_449 = &g_450;
static volatile unsigned char ***g_448 = &g_449;
static char ***g_495 = &g_424;
static short g_500 = 0x561CL;
static unsigned char g_583 = 0UL;
static int g_597 = 1L;
static volatile unsigned char g_618 = 0x2BL;
static unsigned g_640 = 4294967287UL;
static unsigned g_643 = 0x22CCB5AFL;
static short g_645 = 0xC7E8L;
static int g_663 = 0xC9ED1510L;
static unsigned char g_680 = 0x15L;



static unsigned short func_1(void);
static int func_2(int p_3, char p_4, int p_5);
static int func_6(int p_7, int p_8, int p_9);
static unsigned func_20(unsigned p_21);
static int func_30(unsigned char p_31, int * p_32, int * p_33, int p_34, unsigned p_35);
static unsigned char func_36(unsigned p_37);
static int * func_38(short p_39, unsigned p_40, int * p_41);
static unsigned char func_59(unsigned p_60);
static int * func_66(unsigned char p_67);
static int * func_83(char p_84, int p_85, unsigned p_86, unsigned p_87, unsigned char * p_88);
static unsigned short func_1(void)
{
    unsigned short l_17 = 0xB6B0L;
    unsigned *l_639 = &g_640;
    unsigned char *l_641 = (void*)0;
    unsigned *l_642 = &g_643;
    short *l_644 = &g_645;
    g_680 |= func_2(func_6(g_10, ((0x9B8BL > (safe_mul_func_int16_t_s_s(((*l_644) &= (safe_rshift_func_int16_t_s_s((0xD4L > (safe_mod_func_int32_t_s_s((l_17 > (safe_sub_func_uint32_t_u_u(((*l_639) &= func_20(g_10)), ((*l_642) = (l_641 != (void*)0))))), ((0x3365428CL & 0L) || l_17)))), g_583))), 0x3415L))) >= l_17), g_583), l_17, g_10);

    ;
    ;
    return l_17;
}







static int func_2(int p_3, char p_4, int p_5)
{
    short l_647 = 1L;
    int *l_662 = &g_663;
    int l_664 = 0x2FD935F5L;
    char *l_665 = &g_162;
    int l_666 = 4L;
    char l_667 = 0x17L;
    int ***l_677 = &g_272;
    int l_678 = 3L;
    (*g_436) = p_5;
    if (p_5)
        goto lbl_679;
    p_5 ^= (l_666 = l_667);
lbl_679:
    (*g_436) = (safe_mod_func_uint16_t_u_u(l_667, ((p_3 >= (safe_unary_minus_func_int16_t_s(((1UL && (safe_rshift_func_int16_t_s_u((l_667 != ((*g_436) <= l_666)), 3))) | ((safe_lshift_func_uint16_t_u_s(func_6((safe_add_func_int32_t_s_s(((l_664 &= (((*l_677) = &g_273) != (void*)0)) <= p_4), l_678)), p_5, p_4), p_3)) & (*g_212)))))) | (-1L))));
    (*g_436) &= 0x55FE2709L;
    return p_3;
}







static int func_6(int p_7, int p_8, int p_9)
{
    int *l_646 = (void*)0;
    (*g_272) = l_646;

    ;
    return g_257;
}







static unsigned func_20(unsigned p_21)
{
    int l_24 = 0xF2465CD3L;
    int l_25 = (-5L);
    int *l_26 = &l_24;
    int *l_29 = &l_25;
    unsigned l_489 = 4294967295UL;
    char *l_578 = &g_162;
    char ****l_602 = &g_495;
    int l_638 = 1L;
    for (p_21 = 7; (p_21 == 54); ++p_21)
    {
        l_25 ^= l_24;
    }
    (*l_26) = g_10;
    if ((((safe_lshift_func_uint16_t_u_u(0xDBF0L, 15)) && (((*l_29) &= (*l_26)) == func_30(func_36(g_10), func_83((+(safe_add_func_uint8_t_u_u(l_489, 0x67L))), g_180, g_180, p_21, g_425), &l_24, g_149, p_21))) || p_21))
    {
        char *l_518 = &g_162;
        int l_529 = 1L;
        short *l_530 = &g_500;
        int ***l_550 = &g_272;
        char ****l_604 = &g_495;
lbl_571:
        (*l_26) = (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s((*l_29), ((*l_518) &= func_59(g_51)))) || ((((*l_530) = (safe_lshift_func_int16_t_s_s((p_21 && (safe_lshift_func_int16_t_s_u(0x2244L, ((*g_260) >= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((*l_29), 3)), (safe_lshift_func_int16_t_s_u(g_162, (p_21 | l_529))))))))), 1))) <= 1UL) && 0x1262F949L)) ^ (*l_26)) && l_529), p_21)), g_51)), (**g_449)));
        for (g_500 = 0; (g_500 > (-9)); g_500 = safe_sub_func_int8_t_s_s(g_500, 4))
        {
            unsigned char l_533 = 1UL;
            int *l_534 = &l_529;
            if ((**g_272))
                break;
            if (l_533)
                break;
        }
        if ((((9UL || (safe_rshift_func_int8_t_s_u(2L, 7))) >= func_36(g_149)) & g_149))
        {
            unsigned short ****l_569 = &g_258;
            int l_570 = 0L;
            for (g_180 = 8; (g_180 <= 6); --g_180)
            {
                (*g_272) = (*g_272);
                for (g_69 = 0; (g_69 <= 26); g_69 = safe_add_func_int16_t_s_s(g_69, 1))
                {
                    (***l_550) |= p_21;
                    (*l_26) = (*g_273);
                    (*l_29) = (-5L);
                }
                (*g_436) = (safe_unary_minus_func_uint32_t_u((&g_258 != l_569)));
                if (l_570)
                    continue;
            }
            if (g_51)
                goto lbl_571;
            (**l_550) = (*g_272);
            (**l_550) = &l_570;

            ;
        }
        else
        {
            unsigned short l_590 = 0x7305L;
            char *****l_603 = &l_602;
            int l_613 = 0x20164FC4L;
            int *l_617 = &l_24;
            (*g_436) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((p_21 ^ (func_36(func_59(g_583)) & (((safe_rshift_func_int16_t_s_s((0xDA77ED37L && (safe_lshift_func_uint16_t_u_u(p_21, 14))), g_10)) <= (g_10 > (safe_sub_func_int16_t_s_s(p_21, 0x4C8FL)))) == 0xAAL))) <= g_180) >= l_590), p_21)), p_21));
            if ((+func_30(((*g_212) &= ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x7DL, (safe_div_func_int16_t_s_s((((0x13L || (*g_450)) & g_597) == (safe_lshift_func_uint16_t_u_u(9UL, (l_590 > (0xCFB6A639L ^ (!(((*l_603) = l_602) != l_604))))))), g_597)))), g_162)) <= 0x18L)), (**l_550), &l_25, (***l_550), p_21)))
            {
                int l_611 = (-8L);
                unsigned *l_612 = &g_149;
                int l_614 = 8L;
                for (g_149 = 0; (g_149 >= 7); ++g_149)
                {
                    (*l_29) = func_59(p_21);
                }
                l_614 |= ((*g_436) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_21, 10)), ((p_21 && (l_613 = (((*l_612) = l_611) || 3UL))) > (l_611 | ((*l_518) &= ((***l_550) > 0xBCL)))))));
                (*l_29) = ((*g_436) |= 0xDD5F2A0CL);
                for (l_529 = (-25); (l_529 < (-4)); l_529 = safe_add_func_int16_t_s_s(l_529, 8))
                {
                    (***l_550) = l_611;
                    l_617 = &l_614;

                    ;
                    g_618 ^= 0L;
                    (*l_26) ^= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((*l_617), 5)) | func_59((***l_550))), 6));
                }

                ;
            }
            else
            {
                (*g_273) = (*g_273);
            }


            (*g_272) = &l_613;

            ;
        }


        (*g_436) = ((*l_26) = (*g_436));
    }
    else
    {
        unsigned char l_623 = 0x57L;
        int l_637 = (-10L);
        (*g_436) ^= p_21;
        (*l_26) &= l_623;
        (*l_29) |= (*g_436);
        (*l_26) |= (safe_mul_func_int16_t_s_s(g_500, (0xB405C48AL > ((**g_272) |= (((l_637 = ((***g_258) = (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_21, (safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s(0L, (safe_mul_func_int8_t_s_s(((((*l_29) | 0xEBF8L) <= 0x2767L) & (safe_mul_func_uint8_t_u_u(((**l_602) == (*g_495)), (*l_29)))), p_21)))) ^ p_21))))), (**g_449))))) <= (-1L)) <= g_597)))));
    }


    ;
    return l_638;
}







static int func_30(unsigned char p_31, int * p_32, int * p_33, int p_34, unsigned p_35)
{
    unsigned char l_491 = 0x20L;
    char ***l_494 = &g_424;
    int *l_496 = &g_371;
    short *l_499 = &g_500;
    char ****l_505 = &g_495;
    (*p_32) |= (safe_unary_minus_func_uint16_t_u(l_491));
    (*l_496) &= (safe_add_func_int16_t_s_s(g_51, func_59((&g_424 != (g_495 = l_494)))));
    (*g_273) = (*l_496);
    (*p_32) = (safe_sub_func_int16_t_s_s(((*l_496) |= ((*l_499) = 1L)), ((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(((l_494 = &g_424) == ((*l_505) = &g_424)), p_34)), ((safe_sub_func_int32_t_s_s(((**g_259) == (-9L)), (safe_sub_func_uint32_t_u_u(((*p_32) != g_149), p_35)))) || p_35))) && 0xD0C671B2L)));
    return (*g_436);
}







static unsigned char func_36(unsigned p_37)
{
    unsigned l_42 = 0x6CD04CD0L;
    int *l_43 = &g_44;
    int **l_486 = &g_273;
    (*l_486) = func_38(l_42, p_37, l_43);
    (*g_272) = (*l_486);
    return (*l_43);
}







static int * func_38(short p_39, unsigned p_40, int * p_41)
{
    unsigned l_369 = 1UL;
    int l_378 = 0xFCB9DA4BL;
    unsigned l_393 = 0xAF2CE7C7L;
    int *l_430 = (void*)0;
    unsigned short l_460 = 65535UL;
    int l_482 = 0x7431AA0BL;
    int *l_485 = &g_65;
    for (g_44 = 3; (g_44 > 29); ++g_44)
    {
        short l_55 = 0L;
        int l_56 = 0L;
        int l_362 = (-1L);
        unsigned short **l_380 = (void*)0;
        char *l_383 = &g_368;
        if (g_10)
            break;
        if ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_10, (!(g_51 = 0x0598737AL)))), (safe_sub_func_uint16_t_u_u(0x481DL, (!g_44))))))
        {
            int *l_54 = &g_51;
            char *l_357 = &g_162;
            char *l_367 = &g_368;
            int *l_370 = &g_371;
            l_55 = ((*l_54) = g_51);
            l_56 = (&g_44 == p_41);
            (*l_370) |= (((*l_357) = (safe_sub_func_uint8_t_u_u(g_51, func_59(g_51)))) != (safe_sub_func_int32_t_s_s((p_40 == (safe_mul_func_uint8_t_u_u(l_56, 0xB0L))), ((l_362 ^= (p_39 != g_318)) > (safe_mod_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((((*l_367) = ((p_40 != 255UL) & p_39)) | 0UL) > p_39) & p_39), l_369)) > g_44), p_40))))));
        }
        else
        {
            unsigned char **l_376 = &g_212;
            int l_379 = 0x40BA52D8L;
            for (g_65 = 9; (g_65 != (-30)); g_65--)
            {
                return p_41;


            }
            if ((*p_41))
            {
                int *l_377 = &g_65;
                l_378 = ((*l_377) = (safe_lshift_func_uint16_t_u_s(l_369, ((void*)0 != l_376))));
                return (*g_272);


            }
            else
            {
                int l_392 = 0xF9C4B727L;
                l_379 |= l_378;
                (*g_272) = func_83(((void*)0 != l_380), (safe_mul_func_uint16_t_u_u((*g_260), (((*g_260) != ((!((void*)0 != l_383)) > (safe_add_func_uint8_t_u_u((*g_212), (((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((p_39 >= ((safe_div_func_int16_t_s_s((-3L), l_392)) || g_371)) ^ (*p_41)), l_369)) < (**g_272)), 0)) == (*g_273)) <= l_379))))) && p_39))), l_56, l_393, &g_69);

                ;
            }

            ;
        }
    }
    (*g_272) = p_41;

    ;
    for (g_130 = 0; (g_130 < 43); g_130++)
    {
        int *l_396 = &l_378;
        return (*g_272);


    }
    for (g_51 = (-9); (g_51 == 24); g_51++)
    {
        unsigned short l_399 = 0UL;
        unsigned l_416 = 0xDBF5727AL;
        unsigned char **l_431 = &g_212;
        int ***l_432 = &g_272;
        unsigned short l_455 = 65535UL;
        short l_463 = (-3L);
        char **l_481 = &g_425;
        (*g_272) = &l_378;

        ;
        if (l_399)
        {
            int ***l_406 = &g_272;
            int *l_413 = &l_378;
            int *l_417 = &g_65;
            (*g_272) = p_41;

            ;
            (*l_417) = (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((*l_406) = &g_273) != (void*)0), (safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(p_40, (safe_mod_func_uint32_t_u_u(((void*)0 != &g_162), (((*l_413) = (p_40 || ((*p_41) = ((**g_258) != (void*)0)))) && ((*p_41) |= ((*l_413) = (safe_sub_func_uint8_t_u_u((((***g_258) && g_263) < l_416), l_416))))))))) & 65535UL), (*g_212))))), g_118)), 0xF13DL));
            (***l_406) = (p_40 >= 0UL);
        }
        else
        {
            int *l_420 = &l_378;
            char *l_423 = &g_162;
            char **l_422 = &l_423;
            char ***l_421 = &l_422;
            int ***l_433 = &g_272;
            int l_473 = 0x123524ABL;
            (*g_272) = p_41;

            ;
            (*l_420) &= (*g_273);
            g_424 = ((*l_421) = (void*)0);

            ;
            ;
            if ((safe_sub_func_int8_t_s_s((&g_258 == (void*)0), (safe_mul_func_uint8_t_u_u(((((*l_420) ^= (*p_41)) ^ (l_430 != ((*g_272) = (*g_272)))) ^ 0x403DC51DL), (((l_431 != &g_212) > g_132) || 0x6AL))))))
            {
                int *l_439 = &g_371;
                unsigned char ***l_447 = &l_431;
                if (((((**g_272) >= (l_432 == l_433)) ^ (-1L)) == 1UL))
                {
                    for (g_118 = 0; (g_118 > 53); g_118 = safe_add_func_int16_t_s_s(g_118, 1))
                    {
                        (***l_432) = (*g_273);
                    }
                    return g_436;


                }
                else
                {
                    for (g_69 = 0; (g_69 < 7); g_69++)
                    {
                        (*g_272) = l_439;

                        ;
                        if ((*p_41))
                            continue;
                        (**l_433) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
                if ((*p_41))
                {
                    char l_446 = 0xD3L;
                    (*l_439) |= ((safe_lshift_func_int16_t_s_s((p_40 && (safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(p_40, 5)), func_59(l_446)))), (l_447 == g_448))) < ((*g_449) == (void*)0));
                    for (g_162 = 27; (g_162 < 14); g_162 = safe_sub_func_uint8_t_u_u(g_162, 3))
                    {
                        return p_41;


                    }
                }
                else
                {
                    (*g_272) = p_41;

                    ;
                }
                l_460 |= (((((***g_258) >= (((*l_439) = (*l_439)) != (safe_div_func_uint16_t_u_u(0x25B7L, l_455)))) & (*g_212)) == 0x7EL) <= ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((p_39 ^ p_40), 5)), 0L)) <= 0L));
                l_463 = ((*p_41) &= (((0x7611C71CL > (*l_439)) < 0UL) > (**g_449)));
            }
            else
            {
                for (g_162 = 11; (g_162 <= 25); g_162 = safe_add_func_uint32_t_u_u(g_162, 7))
                {
                    char l_478 = 0x1EL;
                    for (p_40 = 0; (p_40 != 19); p_40 = safe_add_func_uint8_t_u_u(p_40, 1))
                    {
                        unsigned *l_472 = (void*)0;
                        (*l_420) ^= (*p_41);
                        (*p_41) = func_59((safe_add_func_uint8_t_u_u(p_39, (safe_sub_func_int8_t_s_s(((l_473 ^= g_65) && g_65), (safe_add_func_int8_t_s_s(g_257, ((*p_41) > (safe_rshift_func_int16_t_s_u(g_130, l_478))))))))));
                    }
                    for (l_463 = 0; (l_463 == (-10)); l_463 = safe_sub_func_int32_t_s_s(l_463, 1))
                    {
                        (*l_420) |= (***l_432);
                        (***l_432) = (l_481 != (void*)0);
                    }
                }
                l_378 ^= (l_482 | (func_59(((&g_425 != ((*l_421) = (*l_421))) >= ((***g_448) < p_40))) & (safe_lshift_func_int8_t_s_s(p_40, p_39))));
            }

            ;
        }

        ;
        l_378 |= ((4UL <= ((*p_41) = (*g_436))) != p_39);
    }

    ;
    return l_485;


}







static unsigned char func_59(unsigned p_60)
{
    int **l_61 = (void*)0;
    int *l_63 = (void*)0;
    int **l_62 = &l_63;
    int *l_64 = &g_65;
    unsigned char *l_68 = &g_69;
    unsigned short **l_352 = &g_260;
    int l_355 = 0xFE2A3251L;
    char l_356 = (-1L);
lbl_344:
    (*l_64) |= ((((*l_62) = (void*)0) == &g_44) ^ g_44);

    ;
    (*l_62) = func_66(((*l_68) = g_44));

    ;
    if ((((*g_212) && (safe_rshift_func_int16_t_s_s(g_180, 2))) != ((void*)0 != &l_64)))
    {
        unsigned char **l_342 = (void*)0;
        int *l_343 = &g_132;
        (*l_343) |= ((*l_64) = (safe_mul_func_int16_t_s_s((l_342 == (void*)0), p_60)));
    }
    else
    {
        int *l_347 = (void*)0;
        if (g_180)
            goto lbl_344;
        for (g_118 = (-13); (g_118 != 13); g_118++)
        {
            (*l_64) = ((void*)0 != (*g_272));
        }
        l_347 = (*g_272);

        ;
    }
    (*l_64) &= (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(65531UL, (l_352 == ((*g_258) = l_352)))), (safe_sub_func_uint8_t_u_u(l_355, l_356))));
    return (*g_212);
}







static int * func_66(unsigned char p_67)
{
    unsigned short l_70 = 65535UL;
    int l_77 = 0L;
    int l_122 = 0xE28F630BL;
    unsigned short **l_134 = (void*)0;
    unsigned l_137 = 0xC2A5DE23L;
    unsigned char **l_256 = &g_212;
    short l_266 = (-2L);
    int *l_335 = &g_132;
    if ((+(p_67 | l_70)))
    {
        short l_74 = 0x087CL;
        int *l_99 = &g_65;
        g_65 = (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u(0x048FFD52L)), 1));
        l_74 ^= g_10;
        l_77 &= (safe_mul_func_uint16_t_u_u(65531UL, p_67));
        for (l_77 = 5; (l_77 < 18); l_77 = safe_add_func_int8_t_s_s(l_77, 4))
        {
            unsigned char l_98 = 0xF3L;
            for (l_70 = 11; (l_70 < 51); l_70++)
            {
                int *l_82 = &g_65;
                (*l_82) |= (g_10 & p_67);
            }
            l_99 = func_83(g_44, g_44, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_70, g_10)), (safe_unary_minus_func_int8_t_s((safe_sub_func_int32_t_s_s((-5L), (safe_mul_func_uint16_t_u_u(l_98, l_98)))))))), l_77, &g_69);
            (*l_99) &= l_98;
        }
    }
    else
    {
        unsigned l_136 = 9UL;
        int *l_140 = &g_132;
        unsigned short *l_144 = &l_70;
        unsigned short **l_143 = &l_144;
        unsigned char *l_152 = &g_69;
        short l_163 = 0xE403L;
        unsigned l_181 = 0UL;
        int l_240 = (-1L);
        unsigned char **l_254 = &g_212;
        int *l_288 = &g_132;
        for (g_69 = (-20); (g_69 < 34); g_69++)
        {
            unsigned l_106 = 0x80C5262CL;
            int *l_133 = &g_132;
            unsigned short ***l_135 = &l_134;
            for (l_70 = 0; (l_70 >= 6); ++l_70)
            {
                int *l_107 = &l_77;
                int **l_108 = &l_107;
                int *l_109 = &l_77;
                (*l_107) = (0L != ((safe_sub_func_int8_t_s_s(p_67, l_106)) && p_67));
                (*l_108) = (void*)0;

                ;
                (*l_109) = g_51;
                for (g_65 = 0; (g_65 == (-26)); --g_65)
                {
                    unsigned l_114 = 0UL;
                    unsigned short *l_117 = &g_118;
                    short l_121 = (-1L);
                    unsigned char *l_129 = &g_130;
                    int *l_131 = &g_132;
                    (*l_131) |= (safe_rshift_func_int8_t_s_u(0L, ((*l_129) = ((g_65 == (p_67 & ((!l_114) <= ((safe_rshift_func_uint16_t_u_s(((*l_117) = ((*l_109) <= p_67)), (safe_lshift_func_uint16_t_u_u((l_122 = l_121), 3)))) >= (safe_sub_func_uint16_t_u_u(g_69, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_67, p_67)), g_44)))))))) & g_44))));
                    (*l_108) = &g_51;

                    ;
                }

                ;
            }
            (*l_133) |= 6L;
            (*l_135) = l_134;
            (*l_133) = (l_136 | ((*l_133) == p_67));
        }
    }
    (*l_335) |= (p_67 < (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(247UL, 3)), (safe_mod_func_uint8_t_u_u(p_67, p_67)))));
    return (*g_272);


}







static int * func_83(char p_84, int p_85, unsigned p_86, unsigned p_87, unsigned char * p_88)
{
    return &g_65;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
