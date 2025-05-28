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



static int g_13 = 0x214A9BACL;
static short g_17 = 0x8589L;
static char g_29 = 1L;
static int g_31 = 0xDF0442E1L;
static int *g_30 = &g_31;
static short g_51 = 8L;
static int g_69 = 0x04CE9D06L;
static unsigned g_121 = 0xDFCA599FL;
static unsigned short g_139 = 0xDD1FL;
static unsigned g_142 = 0x4EC4FEF2L;
static int *g_153 = &g_69;
static short *g_168 = &g_51;
static volatile unsigned short * const * const g_190 = (void*)0;
static volatile unsigned short g_194 = 1UL;
static short g_216 = 0xCC33L;
static unsigned g_218 = 0xB7F3AE84L;
static unsigned short *g_229 = (void*)0;
static int g_230 = 1L;
static unsigned g_270 = 2UL;
static unsigned short g_282 = 65532UL;
static unsigned char g_340 = 1UL;
static unsigned char *g_339 = &g_340;
static char g_419 = 0x9FL;
static volatile int g_428 = 1L;
static volatile int *g_427 = &g_428;
static volatile int **g_426 = &g_427;
static volatile int *** const g_425 = &g_426;
static unsigned short ***g_434 = (void*)0;
static volatile char g_517 = 0x61L;
static const char **g_538 = (void*)0;
static char *g_543 = &g_29;
static char **g_542 = &g_543;
static short * const *g_561 = &g_168;
static short * const **g_560 = &g_561;
static int g_654 = 0x9ECB9247L;
static unsigned short g_682 = 0x2B29L;



static unsigned char func_1(void);
static unsigned short func_6(int p_7, short p_8);
static int * func_25(short p_26, int * p_27, unsigned char p_28);
static unsigned func_36(short * p_37, int * const p_38);
static short * func_39(int * const p_40, unsigned char p_41);
static unsigned func_44(int p_45, short * p_46, const unsigned p_47, char p_48, int * p_49);
static const unsigned func_52(int * p_53, int * p_54, short * const p_55);
static short * const func_57(unsigned short p_58);
static unsigned func_59(short p_60, unsigned p_61, unsigned p_62);
static unsigned char func_63(int p_64, short * p_65);
static unsigned char func_1(void)
{
    unsigned char l_11 = 0UL;
    int *l_12 = &g_13;
    short *l_14 = (void*)0;
    short *l_15 = (void*)0;
    short *l_16 = &g_17;
    int l_20 = (-6L);
    int **l_679 = (void*)0;
    int **l_680 = &g_30;
    unsigned char *l_681 = (void*)0;
    int *l_683 = (void*)0;
    int *l_684 = &g_654;
    int *l_685 = &g_69;
    int *l_686 = &g_31;
    short l_688 = 2L;
    unsigned l_689 = 0xEFF4B9BCL;
    unsigned short ** const l_701 = &g_229;
    unsigned short ** const *l_700 = &l_701;
    unsigned short ** const **l_699 = &l_700;
    unsigned l_708 = 4294967295UL;
    char l_711 = 0x85L;
    short *l_718 = &g_17;
    char *l_719 = (void*)0;
    char *l_720 = &g_419;
    (*l_685) = (safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(((func_6((~((*l_686) = ((*l_685) = ((*l_684) = (((safe_sub_func_uint32_t_u_u((l_11 , (((((*l_12) = l_11) , (*l_12)) >= (((*l_16) = 0x1E19L) , g_17)) , 4294967295UL)), (safe_mod_func_uint8_t_u_u((g_682 = (l_20 & ((*g_339) = ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(65535UL, 2)), (((*l_680) = func_25((g_29 != 0L), g_30, g_29)) == (void*)0))) , (*g_339))))), g_216)))) > g_216) >= (-1L)))))), g_216) ^ g_216) & l_688), 0x5916L)) || l_689) || (*l_12)) , (*l_686)), 0));
    for (g_139 = 0; (g_139 < 8); g_139 = safe_add_func_int32_t_s_s(g_139, 4))
    {
        unsigned l_696 = 0x270FFD1BL;
        const int ***l_702 = (void*)0;
        unsigned l_703 = 0x113D8306L;
        (*l_684) = (-1L);
        (*l_12) = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((l_696 , l_696), (7UL && ((safe_rshift_func_int8_t_s_u((l_696 , (((l_696 , ((((*l_684) = ((l_699 != ((((*l_685) != (&g_426 != l_702)) && g_270) , &l_700)) ^ g_142)) , (*g_153)) <= 0x0529BDA8L)) , &g_560) == &g_560)), 4)) && l_703)))) != g_282), 15));
    }
    (*l_12) = (((*l_16) = (((*l_720) = ((**g_542) = func_44(((((*l_684) != (*l_684)) < 0xDBL) != ((safe_mod_func_uint32_t_u_u(((*g_168) > (*l_12)), (safe_mul_func_uint8_t_u_u(((g_270 = (g_419 ^ func_6((l_708 ^ (safe_sub_func_uint32_t_u_u((l_711 > (safe_sub_func_uint8_t_u_u((*g_339), 0xEEL))), (*l_685)))), (*g_168)))) , (*g_339)), (*l_686))))) < 0x0AL)), &l_688, g_654, (**g_542), (*l_680)))) >= (*l_684))) >= (*l_12));
    return (*g_339);
}







static unsigned short func_6(int p_7, short p_8)
{
    unsigned l_687 = 0x8C583EF6L;
    return l_687;
}







static int * func_25(short p_26, int * p_27, unsigned char p_28)
{
    unsigned char l_34 = 0x5AL;
    int *l_35 = (void*)0;
    int *l_56 = &g_31;
    short *l_66 = &g_51;
    if ((safe_lshift_func_int8_t_s_s(l_34, 6)))
    {
        (*p_27) = (*g_30);
        return l_35;
    }
    else
    {
        short *l_50 = &g_51;
        (*g_30) = (-2L);
        (*l_56) = ((func_36((p_28 , func_39(p_27, (p_26 , ((*g_339) = (safe_sub_func_uint8_t_u_u((((p_26 , func_44((*g_30), l_50, func_52(l_56, &g_31, (g_168 = func_57((func_59((func_63(p_26, l_66) || 0xD0L), p_28, p_28) == 0x80D5298BL)))), g_31, &g_31)) , (*p_27)) >= g_31), p_26)))))), p_27) , 0x13C7L) , (*p_27));
    }
    return p_27;
}







static unsigned func_36(short * p_37, int * const p_38)
{
    int *l_547 = &g_69;
    int **l_548 = &l_547;
    int **l_549 = &g_153;
    int **l_550 = (void*)0;
    int **l_551 = &g_30;
    int *l_552 = &g_31;
    unsigned char *l_553 = &g_340;
    unsigned char **l_554 = &l_553;
    short **l_563 = &g_168;
    short ***l_562 = &l_563;
    const unsigned char l_607 = 0x46L;
    int l_637 = 0x37D7D593L;
    int l_640 = 0x86FA16A5L;
    char l_648 = 0x82L;
    char l_668 = 0x1AL;
    (*l_548) = l_547;
    l_552 = ((*l_551) = ((*l_549) = ((*l_548) = &g_31)));
    if (((*g_153) = (((*l_554) = l_553) == (void*)0)))
    {
        unsigned char l_557 = 0x3BL;
        unsigned short l_567 = 65534UL;
        unsigned short **l_584 = &g_229;
        int *l_591 = (void*)0;
        short l_600 = 0L;
        int l_606 = (-4L);
        short *l_664 = &g_216;
        int l_667 = (-8L);
        for (g_139 = 2; (g_139 < 11); g_139 = safe_add_func_uint16_t_u_u(g_139, 7))
        {
            unsigned short l_575 = 0x88BFL;
            int * const l_576 = &g_69;
            unsigned short **l_595 = &g_229;
            unsigned *l_634 = &g_218;
            unsigned **l_633 = &l_634;
            unsigned ***l_632 = &l_633;
            int l_655 = 0xD2D01060L;
            unsigned l_656 = 0xD121242EL;
            int **l_669 = (void*)0;
            int **l_670 = &l_547;
            int **l_671 = &g_30;
            if (l_557)
            {
                const int l_599 = 0x3FD998B9L;
                unsigned char **l_622 = &g_339;
                for (g_142 = 0; (g_142 == 21); g_142++)
                {
                    short ****l_564 = &l_562;
                    int l_577 = (-1L);
                    unsigned char l_585 = 0x61L;
                    if ((g_560 == ((*l_564) = l_562)))
                    {
                        unsigned *l_570 = &g_270;
                        int l_578 = 0xE1A64805L;
                        (*l_547) = ((safe_add_func_uint16_t_u_u(0xD0DAL, (1UL | (((l_567 , (safe_mod_func_uint8_t_u_u(((&p_38 != (((*l_570) = g_218) , (*g_425))) , ((**l_554) = ((*p_37) <= (safe_rshift_func_uint16_t_u_s((func_63((safe_rshift_func_int16_t_s_u(l_575, 3)), func_39(l_576, l_577)) & g_121), 3))))), 0x24L))) , 0x3CDCB692L) > l_578)))) <= g_428);
                        return g_230;
                    }
                    else
                    {
                        const char l_581 = 9L;
                        int **l_586 = &l_552;
                        int **l_587 = (void*)0;
                        int **l_588 = &g_153;
                        (**l_551) = ((safe_mod_func_uint32_t_u_u(((l_581 , (((l_557 < (**l_549)) < func_44((((*l_576) > (*g_30)) , (*p_38)), ((**l_562) = p_37), (safe_mod_func_int32_t_s_s(((l_584 != l_584) != 8UL), (-1L))), l_585, &g_69)) || (*p_37))) < 0xF1445092L), 0x236DD737L)) >= (*g_543));
                        (*l_586) = p_38;
                        (*l_588) = p_38;
                    }
                }
                for (g_121 = 0; (g_121 <= 46); g_121++)
                {
                    int **l_592 = &g_30;
                    unsigned short ***l_596 = &l_584;
                    char *l_603 = (void*)0;
                    (*l_551) = l_591;
                    (*l_592) = p_38;
                    if ((safe_add_func_int32_t_s_s(0xD7376442L, (((&g_229 != ((*l_596) = l_595)) != (safe_rshift_func_uint16_t_u_u((((((0x6BD0L > ((*g_30) || (*l_547))) ^ ((func_63(func_44((*p_38), p_37, l_599, (**g_542), &g_69), &g_216) > (*g_153)) | l_600)) && (*l_552)) < (-8L)) , (**l_592)), 5))) , 0x6F942094L))))
                    {
                        return g_517;
                    }
                    else
                    {
                        (*l_548) = (*l_592);
                        (*g_153) = (((*l_576) , (*g_542)) != ((safe_lshift_func_uint8_t_u_u(255UL, 5)) , l_603));
                    }
                    if ((safe_lshift_func_int16_t_s_u(((*p_37) = l_606), l_607)))
                    {
                        int **l_608 = &g_153;
                        int **l_609 = &l_552;
                        unsigned *l_616 = &g_218;
                        (*l_608) = p_38;
                        (*l_609) = p_38;
                        (*l_576) = (((**l_592) = (safe_mul_func_int8_t_s_s(((***g_560) || (**g_561)), (((func_44(((*g_153) = (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((0x6BD7L & (((*l_616) = ((**l_608) | func_44((*l_576), &g_51, (**l_592), (**l_549), &g_31))) != 0xD5244CB1L)) == (*l_552)), 65526UL)), (*g_339)))), &g_216, l_599, (*g_543), (*l_551)) && 0x1717A2ABL) ^ 4294967295UL) && 1L)))) <= (***g_560));
                        return (**l_609);
                    }
                    else
                    {
                        return g_270;
                    }
                }
                for (g_230 = 2; (g_230 < (-10)); --g_230)
                {
                    int *l_629 = &l_606;
                    int l_641 = 0x35237FFDL;
                    int l_653 = (-4L);
                }
                (**g_425) = (*g_426);
            }
            else
            {
                unsigned l_661 = 4294967295UL;
                unsigned *l_665 = &g_270;
                unsigned char l_666 = 0x95L;
                (*l_547) = (((((((safe_add_func_uint16_t_u_u((**l_549), ((safe_sub_func_uint8_t_u_u((l_661 | (safe_mul_func_uint16_t_u_u((((void*)0 == l_664) | ((((*l_665) = g_29) , (g_121 = ((**l_633) = l_567))) & l_666)), ((*g_339) || (*l_576))))), 0x39L)) , l_667))) > (*p_38)) == 0xA9C4D51DL) >= l_666) , 1UL) , l_668) , 0x8D0693F2L);
            }
            (*l_670) = p_38;
            (*l_671) = p_38;
        }
        if ((*p_38))
        {
            int * const l_672 = &g_654;
            int **l_673 = &l_547;
            (*l_673) = ((*p_38) , l_672);
        }
        else
        {
            (*p_38) = (*p_38);
        }
        for (l_606 = 0; (l_606 <= 14); l_606 = safe_add_func_int8_t_s_s(l_606, 1))
        {
            int *l_676 = &g_31;
            (*l_548) = l_676;
            for (g_654 = 10; (g_654 <= (-1)); g_654 = safe_sub_func_uint8_t_u_u(g_654, 1))
            {
                (*l_547) = (*p_38);
            }
        }
    }
    else
    {
        return g_282;
    }
    return (**l_548);
}







static short * func_39(int * const p_40, unsigned char p_41)
{
    int **l_535 = &g_153;
    int l_536 = (-1L);
    short *l_537 = &g_51;
    const char ***l_539 = (void*)0;
    const char ***l_540 = (void*)0;
    const char ***l_541 = &g_538;
    char ***l_544 = &g_542;
    int **l_545 = &g_153;
    int *l_546 = &g_230;
    (*g_426) = (((*l_546) = (p_41 >= ((l_535 = l_535) != ((l_536 > func_44(l_536, l_537, g_216, ((((*l_541) = g_538) == ((*l_544) = g_542)) && p_41), &l_536)) , l_545)))) , (**g_425));
    return &g_51;
}







static unsigned func_44(int p_45, short * p_46, const unsigned p_47, char p_48, int * p_49)
{
    unsigned short l_534 = 0x41DCL;
    return l_534;
}







static const unsigned func_52(int * p_53, int * p_54, short * const p_55)
{
    int *l_169 = &g_69;
    short *l_178 = &g_51;
    char *l_179 = &g_29;
    int l_180 = 0x21653139L;
    int ***l_181 = (void*)0;
    unsigned *l_184 = &g_121;
    unsigned *l_187 = (void*)0;
    unsigned *l_188 = &g_142;
    unsigned char l_323 = 0x7AL;
    unsigned short **l_374 = &g_229;
    unsigned short l_417 = 0UL;
    char l_424 = 0x1EL;
    unsigned l_446 = 0x29FAF4F5L;
    volatile int *l_447 = &g_428;
    unsigned short ****l_462 = &g_434;
    const char l_474 = 0x5EL;
    const short l_530 = (-4L);
    int l_531 = 0x3D4F46D5L;
    int *l_532 = &l_180;
    const unsigned char l_533 = 0xA3L;
    g_153 = l_169;
    (*l_169) = (safe_rshift_func_uint8_t_u_u((((*p_55) , 6L) <= (((*l_179) = ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((*g_168), (safe_mod_func_int16_t_s_s((*g_168), (*l_169))))), (*p_55))) && func_63((*l_169), l_178))) ^ (-10L))), l_180));
    if ((((((*p_55) < (-5L)) , l_181) == ((+((*l_169) == (((*l_169) != (((safe_sub_func_uint32_t_u_u(((*p_54) && ((*l_188) = (((*l_184) = (1L == (-1L))) & (safe_sub_func_uint8_t_u_u(((*l_169) , (*l_169)), g_29))))), 0UL)) <= (*l_169)) , 0x64CBL)) || (*l_169)))) , l_181)) | 0x48L))
    {
        int **l_189 = &l_169;
        volatile unsigned short *l_193 = &g_194;
        volatile unsigned short * const *l_192 = &l_193;
        volatile unsigned short * const **l_191 = &l_192;
        (*l_189) = (void*)0;
        (*l_191) = g_190;
        (*l_189) = &g_31;
    }
    else
    {
        const char l_206 = (-1L);
        unsigned char l_217 = 0x2CL;
        int *l_240 = &g_69;
        short l_262 = (-1L);
        unsigned char *l_263 = &l_217;
        int l_329 = 0xA2A86C69L;
        int *l_422 = (void*)0;
        int **l_445 = (void*)0;
        int ***l_444 = &l_445;
        int l_461 = 0xFE50BE48L;
        for (g_121 = (-28); (g_121 == 52); g_121++)
        {
            unsigned char l_205 = 0xD1L;
            short *l_215 = &g_216;
            char *l_233 = &g_29;
        }
        if (((safe_lshift_func_uint16_t_u_u(func_63(((safe_rshift_func_int8_t_s_u((*l_169), ((*l_263) = (((*l_169) & ((((*l_240) & ((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(g_121, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(1L, 2)), ((*l_169) , (!(safe_add_func_uint32_t_u_u(((*l_169) || (0x9FL < (safe_mul_func_uint16_t_u_u((6UL == (*l_169)), (*l_240))))), (*l_240))))))))) , l_262), (*l_169))) & 0L), (*g_168))), 1)) | (*l_169))) ^ (*p_55)) || (*p_55))) || 65535UL)))) , 6L), &g_216), g_121)) & g_216))
        {
            unsigned **l_264 = (void*)0;
            unsigned **l_265 = &l_187;
            unsigned *l_268 = (void*)0;
            unsigned *l_269 = &g_270;
            unsigned short *l_281 = &g_282;
            int l_283 = 0L;
            const int l_287 = (-7L);
            unsigned short l_299 = 0x7334L;
            unsigned short **l_375 = &l_281;
            unsigned l_401 = 4294967288UL;
            int *l_410 = &g_69;
            char *l_418 = &g_419;
            if ((((((*l_265) = p_53) == ((func_59((*p_55), ((*l_269) = (~(!(safe_rshift_func_int8_t_s_u(g_139, 0))))), (safe_rshift_func_uint8_t_u_u(((((*l_240) == (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_281) = (safe_sub_func_int32_t_s_s((-9L), (((*l_240) & 0xFF64A250L) != ((*p_53) < (safe_add_func_uint32_t_u_u(g_31, (*p_54)))))))), (*l_169))), (*g_168)))) == l_283) , 0x24L), (*l_169)))) && (*l_240)) , l_240)) <= 0xBA861831L) , (*p_53)))
            {
                int **l_284 = &g_153;
                short *l_291 = &g_216;
                char **l_298 = &l_179;
                g_153 = (void*)0;
                (*l_284) = &g_31;
                (*l_284) = (*l_284);
                for (g_142 = 0; (g_142 <= 23); g_142 = safe_add_func_int8_t_s_s(g_142, 1))
                {
                    unsigned l_288 = 0x1F4F5D26L;
                    int l_301 = (-1L);
                    if (((65533UL ^ ((l_287 , (((*l_263) = g_194) < l_288)) & (safe_mod_func_int8_t_s_s(l_287, (func_63((**l_284), l_291) | (l_169 == p_53)))))) == g_230))
                    {
                        (*l_169) = (*p_53);
                        return (**l_284);
                    }
                    else
                    {
                        short ***l_292 = (void*)0;
                        short **l_294 = &l_178;
                        short ***l_293 = &l_294;
                        char **l_297 = (void*)0;
                        int l_300 = (-1L);
                        (*l_293) = &g_168;
                        (*l_284) = (func_63((safe_rshift_func_uint16_t_u_u(func_63(g_142, (**l_293)), 6)), l_291) , p_54);
                        l_301 = ((((0UL == (func_63((l_299 = ((l_297 == l_298) , (func_63(g_139, (((*l_179) = g_31) , ((*l_240) , l_291))) == (*g_168)))), &g_216) , 65535UL)) , 0UL) & g_216) & l_300);
                    }
                    if ((*p_54))
                        break;
                    if ((safe_add_func_uint8_t_u_u(g_216, (safe_add_func_uint16_t_u_u(l_283, ((((*l_263) = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((*l_169), ((safe_add_func_uint8_t_u_u(g_270, (l_288 <= ((l_287 ^ (*p_54)) <= (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((g_270 , 0UL), l_288)), 14)))))) >= 65535UL))), l_283))) >= 0x5DL) , 1L))))))
                    {
                        l_301 = 9L;
                    }
                    else
                    {
                        (*l_284) = &g_31;
                    }
                }
            }
            else
            {
                const int l_327 = 0xF0AE526CL;
                int *l_408 = &l_329;
                for (g_29 = 0; (g_29 != (-10)); g_29--)
                {
                    const int l_324 = 0xADA2B93AL;
                    int **l_328 = &l_169;
                    int *l_330 = &g_69;
                }
                if ((*g_30))
                {
                    unsigned char l_341 = 247UL;
                    (*l_169) = ((((((*l_169) , (*p_53)) == (safe_mod_func_uint32_t_u_u(0xB014F3CCL, (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(0L, ((safe_add_func_uint32_t_u_u(0UL, (l_341 = ((g_339 == &g_340) <= 0x1DF52252L)))) , 0x79L))), 0x41L))))) ^ (*p_53)) || 0x494EFE83L) > g_29);
                    for (l_180 = 10; (l_180 >= (-20)); l_180 = safe_sub_func_uint8_t_u_u(l_180, 3))
                    {
                        int **l_344 = (void*)0;
                        int **l_345 = &g_153;
                        unsigned short l_352 = 65533UL;
                        (*l_345) = p_53;
                        (*l_240) = ((((*l_179) = (((*l_263) = l_341) != ((*g_339) = (((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(l_352, ((!(((*l_188) = func_63(((*p_54) >= (g_230 != ((*l_240) = l_287))), &g_51)) && (l_341 , l_341))) != l_262))) , (-8L)), l_206)) , (void*)0) == (void*)0)))) , (void*)0) != (void*)0);
                    }
                    l_283 = (safe_lshift_func_uint8_t_u_s(l_299, ((*l_179) = ((l_341 != (((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_327, ((safe_sub_func_int32_t_s_s(((!0xA152L) | l_327), ((*l_169) = l_287))) , (*l_169)))), (safe_mul_func_int8_t_s_s(g_31, l_341)))) != l_327), l_283)) & 0L) >= (*p_55))) | 2L))));
                }
                else
                {
                    unsigned short l_379 = 5UL;
                    int l_400 = 0x9C21C5B7L;
                    int **l_409 = &g_153;
                    for (l_217 = 0; (l_217 > 4); l_217 = safe_add_func_uint32_t_u_u(l_217, 7))
                    {
                        int **l_367 = &l_169;
                        unsigned short ***l_370 = (void*)0;
                        unsigned short ***l_371 = (void*)0;
                        unsigned short **l_373 = (void*)0;
                        unsigned short ***l_372 = &l_373;
                        unsigned l_378 = 0x9A56468FL;
                        (*l_367) = (((*l_269) = g_218) , &g_31);
                        l_379 = ((*l_240) = (((*l_188) = (safe_mod_func_uint32_t_u_u(((*l_169) , (((*l_372) = &g_229) != (l_375 = l_374))), g_340))) != (g_139 <= (safe_rshift_func_uint8_t_u_u(0xD6L, l_378)))));
                        (*l_240) = (safe_sub_func_int16_t_s_s((*l_169), (*p_55)));
                    }
                    l_400 = (safe_mod_func_uint16_t_u_u((~(*l_169)), (safe_mul_func_int8_t_s_s(((((*l_240) == (((safe_rshift_func_int8_t_s_s((~(safe_sub_func_int32_t_s_s(((((*l_188) = ((safe_add_func_uint32_t_u_u(g_270, (safe_mul_func_uint8_t_u_u(((*l_240) & (((safe_add_func_int16_t_s_s(l_299, (((*p_55) = (&g_270 != &g_270)) & (0x2BL | (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_287, 7L)), 14)))))) ^ (-9L)) >= 0x12L)), l_379)))) , 0UL)) <= 0x565B5AFAL) || (*p_55)), l_327))), g_29)) , (*g_339)) == (-6L))) <= g_29) == l_327), 251UL))));
                    if ((!(*g_30)))
                    {
                        int *l_402 = &g_31;
                        int **l_403 = &l_240;
                        int *l_406 = &g_230;
                        l_283 = ((*l_169) , (l_401 || l_287));
                        g_153 = &l_283;
                        (*l_403) = (l_169 = l_402);
                        (*g_153) = ((safe_sub_func_uint32_t_u_u(6UL, func_63(((*l_406) = l_287), l_281))) >= (((*l_169) , (*g_168)) <= (*l_240)));
                    }
                    else
                    {
                        int **l_407 = &g_153;
                        (*l_407) = &g_31;
                    }
                    l_410 = ((*l_409) = l_408);
                }
            }
            g_69 = (safe_add_func_uint16_t_u_u(((*p_54) | ((*l_169) >= (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(0xF448L, 14)) & l_417), 0xC7L)))), ((((*l_410) != ((*l_418) = ((*l_179) = g_230))) || 1L) | ((*p_54) ^ 1UL))));
        }
        else
        {
            int **l_420 = &g_153;
            unsigned **l_437 = &l_184;
            unsigned **l_439 = (void*)0;
            (*l_420) = p_54;
            if (((*l_169) = (**l_420)))
            {
                int *l_421 = &g_69;
                g_153 = l_421;
            }
            else
            {
                int l_423 = 0xD963D4E4L;
                l_422 = &g_31;
                (*l_420) = p_54;
                if (func_63(l_423, (((((*l_169) = (l_424 == (((*g_168) | (*l_422)) , ((*g_30) >= ((l_181 != ((*p_54) , g_425)) > (*l_240)))))) , (void*)0) != &g_426) , &g_51)))
                {
                    (*g_425) = (*g_425);
                }
                else
                {
                    unsigned short *l_433 = &g_282;
                    unsigned short ** const l_432 = &l_433;
                    unsigned short ** const *l_431 = &l_432;
                    unsigned short ****l_435 = (void*)0;
                    short *l_436 = &l_262;
                    unsigned ***l_438 = &l_437;
                    (*l_169) = (+((safe_mul_func_int16_t_s_s((*p_55), ((*l_436) = (((*g_168) == ((*p_53) == ((l_431 = (void*)0) == (g_434 = g_434)))) , 0L)))) | ((**l_420) ^ (((*l_438) = l_437) == l_439))));
                    (**g_425) = (g_121 , (void*)0);
                    (*l_420) = p_54;
                    (**g_425) = (**g_425);
                }
            }
            p_54 = p_54;
        }
        if ((((safe_mod_func_int16_t_s_s((*g_168), l_446)) , &l_445) != (void*)0))
        {
            int *l_454 = &g_69;
            unsigned short *l_459 = &g_282;
            int l_460 = 0x38E52DD0L;
            const int l_465 = 0x636F13C2L;
            unsigned char l_481 = 0x07L;
            l_447 = (*g_426);
            if ((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((*l_263) = ((((((*g_339) != (func_63((((*l_240) | (-4L)) , (((*l_454) = (*p_53)) ^ (((((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((*l_459) = 0x6CA6L), (*p_55))), ((*p_55) , (+0x907AE64AL)))) ^ (((*p_55) < l_460) <= (*g_168))) ^ l_461) , 0x2BDF74A5L) && (*p_53)))), &l_262) & 4L)) , &g_434) != l_462) < g_230) , 3UL)), (*g_339))) , (*g_339)), 0x82L)), (*p_55))))
            {
                const char l_470 = 0xDDL;
                int l_473 = 0xC868F2EFL;
                g_153 = &l_460;
                (*l_454) = ((((*l_188) = (safe_lshift_func_int8_t_s_s(g_194, 3))) , l_465) , (l_473 = (safe_lshift_func_int16_t_s_s(((((*l_179) = (*l_454)) || (safe_mul_func_int8_t_s_s(func_59((*g_168), g_428, (l_470 , (((l_470 | (safe_lshift_func_uint8_t_u_s(((((void*)0 == &l_179) >= 1L) >= l_470), 7))) , 0x1FL) ^ 1L))), g_419))) <= 0xF343L), 10))));
                return l_474;
            }
            else
            {
                unsigned char l_475 = 0UL;
                int l_478 = (-2L);
                unsigned **l_482 = &l_188;
                (*l_454) = ((l_475 & ((*l_184) = ((safe_add_func_uint8_t_u_u((*g_339), (l_478 <= ((*p_53) , (*p_55))))) , 0UL))) || func_63((safe_sub_func_uint32_t_u_u(5UL, l_481)), (l_475 , &g_51)));
            }
        }
        else
        {
            unsigned l_493 = 0xA586CF68L;
            const unsigned char *l_499 = &g_340;
            char *l_516 = &g_419;
            for (g_121 = 1; (g_121 != 41); g_121++)
            {
                int *l_487 = &l_329;
                const unsigned char *l_498 = &l_323;
                for (g_230 = (-13); (g_230 > 9); g_230++)
                {
                    unsigned l_490 = 0xDCC2A209L;
                    l_487 = p_53;
                    if ((*p_53))
                    {
                        l_490 = ((*p_55) & (safe_mul_func_int16_t_s_s(4L, (*g_168))));
                    }
                    else
                    {
                        (*g_426) = (*g_426);
                    }
                }
                (*l_447) = (safe_sub_func_uint16_t_u_u(l_493, ((safe_sub_func_int8_t_s_s((0x0DL >= ((*l_447) & ((safe_lshift_func_uint8_t_u_u(0xC4L, (((*g_339) = (l_498 != l_499)) ^ ((*l_169) ^ (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(l_493, ((-1L) <= 1UL))) > l_493), (*g_168))))))) == 0xC6L))), 0x6AL)) | (*g_168))));
                if (l_493)
                    continue;
                (**g_425) = (*g_426);
            }
            g_153 = p_54;
            for (l_262 = 13; (l_262 <= (-25)); l_262 = safe_sub_func_uint32_t_u_u(l_262, 2))
            {
                (*l_447) = l_493;
            }
            (*l_447) = (safe_lshift_func_uint8_t_u_u(((*g_339) = (((*g_339) ^ ((((safe_sub_func_uint32_t_u_u(0xA5E84BC4L, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((*g_168), 2)), 6L)))) , (*g_168)) || 4L) & (*p_55))) > l_493)), 5));
        }
    }
    (*l_532) = func_63((0x02L != (safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(g_218, ((*g_339) = (*g_339)))) , ((safe_add_func_uint8_t_u_u((*g_339), (~func_63((((((g_270 = (safe_rshift_func_int16_t_s_s((p_54 == &g_270), 11))) , ((safe_rshift_func_int8_t_s_s(((*l_179) = (-6L)), g_69)) , ((safe_mul_func_uint16_t_u_u(l_530, (*p_55))) , (*l_169)))) , (*l_169)) >= 0UL) > (*g_339)), &g_51)))) >= g_419)), l_531))), l_178);
    return l_533;
}







static short * const func_57(unsigned short p_58)
{
    unsigned l_160 = 0x701D6BCCL;
    int l_163 = (-7L);
    unsigned short *l_164 = &g_139;
    short *l_166 = &g_51;
    short **l_165 = &l_166;
    int *l_167 = &g_69;
    (*l_167) = ((+g_51) , ((((safe_lshift_func_int16_t_s_s(((l_160 = g_51) <= func_63(((safe_rshift_func_uint16_t_u_u(func_63(l_163, &g_51), 10)) > ((p_58 , ((*l_164) = p_58)) , p_58)), ((*l_165) = l_164))), l_163)) & 0x01L) < 0x2C8CL) ^ 0x68L));
    return &g_51;
}







static unsigned func_59(short p_60, unsigned p_61, unsigned p_62)
{
    const int l_113 = 0L;
    for (g_51 = 0; (g_51 <= (-15)); g_51 = safe_sub_func_int8_t_s_s(g_51, 7))
    {
        unsigned char l_88 = 2UL;
        short *l_118 = &g_51;
        int l_145 = 0x81C7DC75L;
        for (p_60 = 0; (p_60 >= (-12)); --p_60)
        {
            int *l_83 = (void*)0;
            int **l_82 = &l_83;
            char l_122 = 8L;
            (*l_82) = &g_69;
            if ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_69, l_88)), 255UL)))
            {
                if (p_61)
                    break;
            }
            else
            {
                int *l_92 = &g_31;
                int **l_91 = &l_92;
                short **l_119 = &l_118;
                unsigned *l_120 = &g_121;
                for (g_29 = 0; (g_29 > (-14)); --g_29)
                {
                    (*l_82) = (*l_82);
                    (*l_82) = &g_69;
                    if (p_61)
                        break;
                    (*l_82) = &g_31;
                }
                (*l_91) = ((*l_82) = (void*)0);
                if ((l_122 = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_120) = ((((safe_sub_func_int16_t_s_s(g_51, (safe_mod_func_int32_t_s_s((&g_30 != ((g_69 , (safe_mul_func_int16_t_s_s((((*l_119) = ((safe_rshift_func_uint16_t_u_u((0xC4F586FDL && p_61), (((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((l_88 | (safe_mul_func_uint16_t_u_u(l_113, func_63((safe_mod_func_uint32_t_u_u(p_61, (safe_sub_func_uint8_t_u_u(p_60, 0xE4L)))), l_118)))) , g_69) ^ 253UL), g_31)), 1UL)) | (*g_30)) <= p_60))) , &p_60)) == &g_51), 0UL))) , (void*)0)), (*g_30))))) , p_62) || 253UL) & p_61)), (-3L))), p_61)), g_29)) || p_60)))
                {
                    unsigned short *l_137 = (void*)0;
                    unsigned short *l_138 = &g_139;
                    unsigned *l_140 = (void*)0;
                    unsigned *l_141 = &g_142;
                    int l_143 = 0L;
                    int *l_144 = &g_69;
                    if ((*g_30))
                        break;
                    l_145 = ((*l_144) = ((((255UL < (safe_mod_func_uint16_t_u_u(func_63((safe_mod_func_uint32_t_u_u(((*l_141) = ((*l_120) = (safe_mod_func_uint16_t_u_u(((*l_138) = (safe_lshift_func_int16_t_s_u((!(safe_lshift_func_int16_t_s_s((g_51 <= ((safe_add_func_uint8_t_u_u(0xCAL, (safe_add_func_uint16_t_u_u(0x3B6DL, 65535UL)))) | (func_63(func_63(func_63(((*g_30) >= g_31), ((*l_119) = l_118)), &g_51), &g_51) , g_69))), 11))), g_121))), p_62)))), l_143)), &g_51), g_51))) || l_113) != g_51) >= g_31));
                    (*l_91) = &g_69;
                }
                else
                {
                    return g_121;
                }
            }
            if (l_113)
                continue;
        }
        for (g_142 = 10; (g_142 != 55); ++g_142)
        {
            int *l_152 = &l_145;
            for (g_29 = (-20); (g_29 < 15); ++g_29)
            {
                unsigned l_154 = 4294967295UL;
                int **l_155 = &l_152;
                for (l_88 = 0; (l_88 >= 1); l_88++)
                {
                    g_153 = l_152;
                    return l_154;
                }
                (*l_155) = &l_145;
            }
            (*g_153) = (*g_30);
            (*g_153) = (safe_sub_func_int16_t_s_s(0L, g_29));
        }
    }
    return l_113;
}







static unsigned char func_63(int p_64, short * p_65)
{
    int l_67 = 0x8A3D3555L;
    int *l_68 = &g_69;
    int **l_71 = (void*)0;
    int ***l_70 = &l_71;
    int **l_76 = (void*)0;
    int **l_77 = &l_68;
    (*l_68) = (l_67 = p_64);
    (*l_70) = &l_68;
    (*l_68) = (safe_mul_func_int8_t_s_s(g_29, (p_64 , (g_29 || (((safe_add_func_int16_t_s_s(g_31, 65535UL)) != (&g_30 != ((*l_70) = (void*)0))) == 0xD7FCCEA5L)))));
    (*l_77) = ((*p_65) , &g_69);
    return p_64;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
