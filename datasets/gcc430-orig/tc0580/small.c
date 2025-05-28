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



static unsigned char g_9 = 0xFAL;
static int g_23 = 0x8B15E314L;
static int *g_22 = &g_23;
static short g_61 = 0x6E66L;
static int g_75 = 1L;
static int g_81 = 0x4674E6A8L;
static int *g_95 = (void*)0;
static int **g_94 = &g_95;
static short g_100 = 0xBA05L;
static char g_113 = 0xD0L;
static char g_116 = 0xB8L;
static char *g_124 = &g_116;
static volatile unsigned char g_130 = 0UL;
static unsigned char g_153 = 0UL;
static unsigned char * const *g_197 = (void*)0;
static short g_222 = 0xDB10L;
static unsigned g_237 = 4294967295UL;
static unsigned g_240 = 4UL;
static unsigned short g_263 = 65535UL;
static unsigned char g_306 = 1UL;
static int g_312 = 0xD676504FL;
static int *g_341 = &g_312;
static short *g_361 = &g_100;
static short **g_360 = &g_361;
static unsigned short g_417 = 0x6498L;
static const unsigned g_453 = 0x64DC235FL;
static const unsigned char g_466 = 255UL;
static short g_476 = 0x828BL;
static int g_549 = 0xE34D3533L;
static unsigned char ***g_567 = (void*)0;
static unsigned char ****g_566 = &g_567;
static unsigned char *****g_565 = &g_566;
static const int *g_637 = (void*)0;
static const int **g_636 = &g_637;
static int **g_728 = &g_341;
static int *g_764 = &g_75;
static unsigned g_783 = 0UL;



static int func_1(void);
static int * func_3(char p_4, short p_5, int * p_6, unsigned char p_7, unsigned p_8);
static short func_15(int p_16, int * p_17, const short p_18, int p_19);
static short func_24(unsigned p_25, short p_26, int * const p_27, int p_28);
static int * func_32(int * p_33, short p_34, short p_35, int p_36);
static int * func_37(unsigned short p_38);
static int * func_41(int * p_42, int * p_43, int * p_44, char p_45, int * p_46);
static int * func_47(const int * p_48, int * p_49);
static int * func_50(short p_51);
static short func_67(int * const p_68, int * p_69, const short p_70, int * p_71);
static int func_1(void)
{
    unsigned char l_2 = 0x0AL;
    int *l_559 = &g_312;
    int l_577 = 0L;
    unsigned char ******l_578 = &g_565;
    unsigned short l_611 = 0UL;
    int l_631 = 0xFE50AFB3L;
    unsigned char *l_650 = &g_153;
    unsigned char **l_649 = &l_650;
    int *l_732 = &g_75;
    unsigned char l_745 = 0x39L;
    unsigned short l_765 = 0x553AL;
    unsigned l_795 = 0x4DF26C3CL;
    short l_806 = (-1L);
    int *l_807 = &g_23;
    if (l_2)
    {
        const char l_14 = (-5L);
        int *l_31 = &g_23;
        int **l_553 = &l_31;
        short l_556 = (-1L);
        unsigned *l_557 = &g_237;
        int **l_558 = &g_22;
        (*l_553) = func_3(((g_9 < ((safe_lshift_func_uint8_t_u_u(g_9, 2)) > l_2)) < ((*g_124) = (safe_lshift_func_int16_t_s_s(((-1L) == l_14), func_15(((safe_lshift_func_uint8_t_u_s(l_14, 0)) >= l_2), g_22, func_24(((safe_rshift_func_int8_t_s_u(((void*)0 != l_31), 0)) == g_9), g_23, &g_23, (*g_22)), g_9))))), l_2, g_22, g_417, g_466);
        (*l_558) = func_3((*l_559), (**g_360), (*l_553), (*l_559), (*l_31));
    }
    else
    {
        unsigned l_560 = 0xE9E68F76L;
        char **l_563 = &g_124;
        int *l_570 = &g_312;
        unsigned char ******l_579 = &g_565;
        unsigned char **l_651 = &l_650;
        int *l_667 = &g_81;
        unsigned l_689 = 1UL;
        unsigned char l_710 = 0x3EL;
        unsigned short l_723 = 0xECD3L;
        int l_778 = (-6L);
        unsigned *l_820 = (void*)0;
        unsigned **l_819 = &l_820;
        (*g_94) = func_50(l_560);
        if ((safe_add_func_int8_t_s_s((l_560 < (&g_124 != l_563)), (((0x7644L & g_476) <= (g_130 || (*g_124))) != l_560))))
        {
            unsigned char ***** const l_564 = (void*)0;
            unsigned char ******l_568 = &g_565;
            int l_569 = 0xFA338E81L;
            char * const l_573 = &g_113;
            unsigned char *l_574 = &g_306;
            int **l_575 = &l_559;
            int *l_576 = &g_23;
            (*g_341) = (l_564 != ((*l_568) = g_565));
            l_559 = func_32((*g_94), ((*g_361) = ((void*)0 != &g_417)), l_569, ((&l_569 == l_570) && (((safe_add_func_uint32_t_u_u((l_573 != &g_113), (((*l_574) = (g_81 == 0xE69DL)) & (*g_124)))) && 2UL) != 4UL)));
            l_577 = ((*g_95) = (**l_575));
            (*l_575) = (*l_575);
        }
        else
        {
            unsigned *l_580 = &l_560;
            int l_587 = 9L;
            unsigned short *l_594 = (void*)0;
            unsigned short *l_595 = &g_263;
            unsigned char *l_602 = &g_9;
            const int l_666 = (-7L);
            unsigned l_686 = 0UL;
            char *l_692 = &g_116;
            char *l_694 = &g_116;
            unsigned l_722 = 4294967295UL;
            int *l_762 = (void*)0;
            unsigned char l_786 = 0x09L;
            int * const l_796 = &g_75;
            (*g_22) = func_24(((*l_580) = 1UL), ((*g_124) ^ ((!(safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 5)), ((safe_rshift_func_int16_t_s_u(l_587, 11)) > (*g_124))))) ^ g_81)), (*g_94), (*g_341));
            if ((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((g_453 && g_453), g_113)), (safe_rshift_func_uint16_t_u_s((((*l_595) = (*l_559)) != ((safe_rshift_func_uint8_t_u_s((((*l_570) >= (g_240 = g_549)) >= ((safe_rshift_func_int8_t_s_s((*g_124), ((safe_sub_func_uint8_t_u_u(((*l_602) = ((((l_570 != (void*)0) && 65534UL) ^ 0x56L) >= 0L)), l_587)) == (*g_124)))) >= (**g_360))), 2)) | l_587)), (*g_361))))))
            {
                const unsigned l_612 = 4294967295UL;
                char l_652 = 0L;
                unsigned char l_653 = 0x7CL;
                for (g_116 = (-7); (g_116 == 28); g_116++)
                {
                    int *l_613 = &g_312;
                    char l_625 = 0xDFL;
                    unsigned l_638 = 0UL;
                }
                for (g_240 = 0; (g_240 >= 48); g_240 = safe_add_func_int32_t_s_s(g_240, 5))
                {
                    return (*l_559);
                }
                (*g_636) = func_3((*g_124), (*l_570), func_32(func_32(func_32(&g_23, (((l_587 & 0UL) >= (((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((l_612 || g_75), ((**g_360) & (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((l_649 = (void*)0) == l_651) || (*l_559)), 0x88L)), (*g_361)))))), 12)) > l_612) <= 255UL)) < 0xAB30L), (*g_361), l_652), l_587, (**g_360), l_653), (**g_360), (*g_361), (*l_570)), l_652, g_312);
            }
            else
            {
                int *l_660 = &g_23;
                for (g_476 = 25; (g_476 > 3); g_476 = safe_sub_func_uint8_t_u_u(g_476, 6))
                {
                    if ((*l_559))
                        break;
                }
                if (((*g_636) != (*g_636)))
                {
                    for (g_81 = (-12); (g_81 < (-14)); g_81--)
                    {
                        unsigned **l_658 = (void*)0;
                        unsigned **l_659 = &l_580;
                        (*l_570) = l_587;
                        (*l_570) = (((*l_559) | ((*g_22) = (&g_240 == ((*l_659) = &g_237)))) > g_222);
                        (*g_636) = (g_22 = l_660);
                    }
                }
                else
                {
                    int * const l_661 = &l_587;
                    (*g_22) = ((4UL >= (((((((*l_580) = l_587) < ((*g_124) != (!((*l_661) >= (*l_559))))) && 0UL) == (*l_559)) >= 0L) == (*l_661))) | 0xD2L);
                    if ((*l_661))
                    {
                        (*g_636) = l_667;
                    }
                    else
                    {
                        unsigned char *****l_675 = &g_566;
                        (*g_22) = (safe_add_func_int8_t_s_s(((**l_563) = (func_15((*l_559), l_667, (**g_360), (((*g_124) = ((*l_570) & (safe_rshift_func_int16_t_s_u((-7L), (safe_lshift_func_uint16_t_u_u(((*l_660) & (safe_unary_minus_func_int32_t_s(l_666))), (l_675 == l_675))))))) < 3UL)) & (**g_360))), 0xE5L));
                        (*l_559) = (*l_559);
                        g_197 = (void*)0;
                    }
                }
                for (g_417 = 0; (g_417 < 5); g_417 = safe_add_func_int8_t_s_s(g_417, 6))
                {
                    int l_683 = 0L;
                    (*l_570) = ((safe_unary_minus_func_int32_t_s(((0xA07844BDL ^ (safe_lshift_func_uint8_t_u_s((*l_667), 3))) ^ (safe_rshift_func_uint8_t_u_s(l_683, 2))))) < l_666);
                    (*g_636) = &l_631;
                    for (g_61 = 0; (g_61 == (-19)); g_61 = safe_sub_func_int16_t_s_s(g_61, 9))
                    {
                        (*g_636) = &l_587;
                    }
                }
            }
            if (l_587)
            {
                int *l_687 = (void*)0;
                int l_688 = 1L;
                (*g_636) = &l_587;
                (*g_636) = func_3((*g_124), (*g_361), func_32(&g_23, l_686, (**g_360), (g_549 = (l_587 = ((((*g_124) & (0x385FB9EFL ^ g_237)) || (*g_637)) ^ (*l_559))))), l_688, g_222);
                return l_689;
            }
            else
            {
                unsigned char l_693 = 0x8CL;
                char **l_695 = &l_694;
                short *l_696 = &g_476;
                int *l_706 = (void*)0;
                if ((((*l_559) ^ ((void*)0 == (*g_566))) != (safe_mod_func_int16_t_s_s(((*l_696) = ((**g_360) = ((((*l_563) = &g_116) == l_692) ^ (((**l_651) = l_666) && (l_693 & (((*l_695) = l_694) == (void*)0)))))), g_417))))
                {
                    (*g_22) = (*l_559);
                    (*l_667) = 0x80203B96L;
                    return (*g_22);
                }
                else
                {
                    char l_701 = 1L;
                    l_706 = func_32(&l_631, ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((*l_595) = g_222), ((void*)0 != &g_361))) > l_693), l_701)) == (((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((-1L) || g_417), 0x9E821E24L)), g_417)) && 0xA2B3L) <= 0x8ED5L)), (*g_361), g_75);
                    (*g_22) = (*l_706);
                }
                if ((*l_570))
                {
                    int * const l_709 = &g_312;
                    short l_713 = 0x9859L;
                    int *l_714 = &g_312;
                    if ((safe_lshift_func_int8_t_s_u((*g_124), 5)))
                    {
                        return (*g_22);
                    }
                    else
                    {
                        const int *l_715 = &g_81;
                        const int **l_716 = (void*)0;
                        const int **l_717 = &l_715;
                        (*l_559) = (*l_667);
                        (*g_636) = (l_714 = func_32(&g_81, (safe_rshift_func_int8_t_s_s((*g_124), 4)), l_713, (*l_709)));
                        (*l_717) = ((*g_636) = l_715);
                        (*g_636) = (*g_636);
                    }
                    (*l_559) = ((*g_22) = 0x30DBBA3AL);
                    (*g_22) = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(l_722, 4)) < (+((*l_667) = (l_587 && (**g_360))))), (*l_559)));
                }
                else
                {
                    int ***l_724 = (void*)0;
                    int ***l_725 = &g_94;
                    int **l_727 = &l_570;
                    int ***l_726 = &l_727;
                    (*l_559) = l_587;
                    g_728 = ((*l_726) = ((*l_725) = (void*)0));
                    (*l_570) = 0xA3BCBC5DL;
                }
                for (l_710 = (-2); (l_710 < 39); l_710 = safe_add_func_int32_t_s_s(l_710, 6))
                {
                    int l_731 = 0L;
                    (*l_667) = l_731;
                    (*g_636) = &l_587;
                    (*g_636) = l_732;
                    (*l_570) = (*g_637);
                }
            }
            for (g_476 = 0; (g_476 != (-22)); g_476 = safe_sub_func_int16_t_s_s(g_476, 1))
            {
                char **l_743 = &l_694;
                const int l_744 = (-1L);
                char ***l_750 = (void*)0;
                char ***l_751 = (void*)0;
                char ***l_752 = &l_563;
                short *l_755 = &g_61;
                short *l_756 = &g_222;
                short l_763 = 0x10D6L;
                short l_766 = 0x5F12L;
                (*l_667) = (safe_sub_func_uint16_t_u_u(1UL, (safe_lshift_func_uint16_t_u_u((*l_570), (((255UL || (+(*l_559))) > (*g_124)) == (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(((func_15(((0x64A6L || (&g_116 != ((*l_743) = &g_116))) >= (*l_570)), &l_587, l_744, g_549) > 0x1325L) <= (*l_732)), l_745)) && 0L), 4)))))));
                (*g_636) = (void*)0;
            }
        }
        for (l_577 = 5; (l_577 > 2); l_577 = safe_sub_func_int8_t_s_s(l_577, 5))
        {
            int * const l_813 = &g_23;
            int *l_814 = &g_81;
            l_814 = l_813;
            return (*l_559);
        }
        (*l_807) = (((*g_361) || (g_263 | ((*l_732) = (safe_rshift_func_int16_t_s_s((*l_667), ((*l_667) ^ ((safe_sub_func_int16_t_s_s((-8L), (**g_360))) <= ((-1L) && (((*l_819) = &g_783) != &l_795))))))))) < 0x33C57FA7L);
    }
    (*l_807) = (*l_807);
    return (*l_559);
}







static int * func_3(char p_4, short p_5, int * p_6, unsigned char p_7, unsigned p_8)
{
    unsigned char *l_522 = &g_9;
    unsigned char **l_521 = &l_522;
    unsigned char ***l_520 = &l_521;
    unsigned char ****l_519 = &l_520;
    unsigned char *****l_523 = &l_519;
    unsigned char **l_527 = (void*)0;
    unsigned char *** const l_526 = &l_527;
    unsigned char *** const *l_525 = &l_526;
    unsigned char *** const **l_524 = &l_525;
    int l_528 = (-4L);
    int l_529 = 0xE3C6B991L;
    short l_530 = 9L;
    int l_537 = 0x89285C79L;
    int l_538 = 0xEBC4DABDL;
    int *l_552 = &g_312;
    (*p_6) = (safe_sub_func_int32_t_s_s(l_538, (*p_6)));
    for (g_61 = 0; (g_61 <= 22); g_61++)
    {
        unsigned l_545 = 0x843BA7C9L;
        unsigned l_546 = 4294967292UL;
        int *l_547 = &l_538;
    }
    return l_552;
}







static short func_15(int p_16, int * p_17, const short p_18, int p_19)
{
    (*p_17) = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(p_16, 2)) >= p_18), 6)), g_23));
    return p_16;
}







static short func_24(unsigned p_25, short p_26, int * const p_27, int p_28)
{
    unsigned short l_52 = 3UL;
    int *l_309 = &g_23;
    int *l_311 = &g_312;
    unsigned char * const * const *l_428 = &g_197;
    unsigned char *l_443 = &g_153;
    unsigned char **l_442 = &l_443;
    unsigned char ***l_441 = &l_442;
    unsigned char ****l_440 = &l_441;
    char l_449 = 1L;
    int * const l_452 = &g_312;
    int *l_507 = &g_75;
    int **l_508 = &g_341;
    if (((*p_27) = 0xD2044653L))
    {
        int *l_323 = &g_81;
        int l_419 = (-6L);
        int **l_425 = &g_95;
        (*l_425) = func_32(func_37((safe_sub_func_int16_t_s_s(((l_323 = func_41(func_47(&g_23, (l_309 = func_50(l_52))), g_22, g_22, l_52, l_311)) == (void*)0), p_25))), l_419, l_419, g_237);
        if (((((*g_361) != p_26) || 0xD7FA94BBL) ^ ((((p_26 < (*l_309)) | (((&g_94 != &g_94) ^ (*l_309)) || (((((*g_124) = p_25) == 0x5FL) && p_28) <= 0xBDA3L))) < p_26) >= 0x9BCA180FL)))
        {
            unsigned char * const **l_429 = &g_197;
            unsigned char * const ***l_430 = &l_429;
            (*l_311) = (safe_sub_func_uint32_t_u_u((l_428 == ((*l_430) = l_429)), (-6L)));
        }
        else
        {
            return (**g_360);
        }
    }
    else
    {
        unsigned l_431 = 0xF76A16CEL;
        int * const l_434 = &g_312;
        int *l_467 = &g_81;
        (*g_94) = (*g_94);
        if (l_431)
        {
            return l_431;
        }
        else
        {
            unsigned char *l_438 = (void*)0;
            unsigned char ** const l_437 = &l_438;
            unsigned char ** const *l_436 = &l_437;
            unsigned char ** const **l_435 = &l_436;
            unsigned char ** const ***l_439 = &l_435;
            unsigned char *****l_444 = &l_440;
            short *l_445 = &g_100;
            int l_446 = 0x6C137A94L;
            int l_470 = 0L;
            (*g_94) = (*g_94);
            if (((*l_434) = ((p_26 = (safe_mod_func_int16_t_s_s((l_446 == ((((((*****l_444) = (safe_mod_func_uint8_t_u_u((&l_445 != &g_361), g_240))) == (*g_124)) || (*l_434)) < 0xF0BD8342L) || (*l_311))), (*l_311)))) != (*l_311))))
            {
                (*g_94) = &p_28;
            }
            else
            {
                const unsigned char ****l_461 = (void*)0;
                const unsigned char *l_465 = &g_466;
                const unsigned char **l_464 = &l_465;
                const unsigned char ***l_463 = &l_464;
                const unsigned char ****l_462 = &l_463;
                (*g_22) = ((safe_lshift_func_int8_t_s_u((*g_124), p_26)) <= (*g_361));
                (*g_341) = func_67(l_452, &l_446, (p_26 && (safe_unary_minus_func_int32_t_s(((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((((((*l_462) = (void*)0) != (void*)0) ^ 0x1179202AL) <= (*l_434)) & g_61), 5)), 1)) <= (*g_124)), (*l_434))) && (*g_22))))), l_467);
                (*g_94) = &p_28;
            }
            if ((*l_309))
            {
                int **l_473 = &l_311;
                unsigned *l_477 = &g_240;
                if (((g_153 = ((p_26 & l_470) | ((*l_477) = ((safe_add_func_uint16_t_u_u(((((g_130 & (func_67((*g_94), ((*l_473) = &p_28), (safe_rshift_func_uint16_t_u_u(0x63A5L, 8)), (*g_94)) | (((*l_442) = &g_9) == (void*)0))) >= (*g_124)) > g_476) & 0x6673L), (**g_360))) == p_25)))) >= l_470))
                {
                    (*p_27) = ((**l_473) < p_28);
                }
                else
                {
                    const int *l_480 = &g_312;
                    (*l_473) = &p_28;
                    for (g_153 = 0; (g_153 != 32); ++g_153)
                    {
                        const int **l_481 = &l_480;
                        (*l_481) = l_480;
                    }
                }
            }
            else
            {
                unsigned short l_493 = 65532UL;
                int *l_499 = &l_470;
                for (p_28 = 0; (p_28 > (-3)); p_28 = safe_sub_func_int32_t_s_s(p_28, 6))
                {
                    unsigned l_497 = 0x2EA5B64EL;
                    short *l_498 = &g_222;
                    unsigned short *l_502 = &l_52;
                    for (l_470 = (-6); (l_470 > (-21)); --l_470)
                    {
                        int l_488 = 0xE4BE6754L;
                        (*g_94) = &p_28;
                        (*g_341) = (g_312 | (safe_add_func_int8_t_s_s(l_488, 1L)));
                        (*g_94) = (*g_94);
                        if (l_488)
                            break;
                    }
                }
            }
            g_341 = ((*g_94) = l_507);
        }
        return (**g_360);
    }
    (*l_508) = &p_28;
    return (*l_309);
}







static int * func_32(int * p_33, short p_34, short p_35, int p_36)
{
    for (g_237 = (-24); (g_237 <= 52); g_237++)
    {
        int ***l_422 = &g_94;
        (*l_422) = &p_33;
        for (p_35 = 0; (p_35 != (-21)); --p_35)
        {
            if ((*g_22))
                break;
        }
    }
    return p_33;
}







static int * func_37(unsigned short p_38)
{
    short *l_324 = (void*)0;
    short **l_325 = &l_324;
    short l_326 = 0x345EL;
    int *l_330 = &g_312;
    unsigned char *l_336 = &g_153;
    unsigned char *l_338 = &g_306;
    unsigned char **l_337 = &l_338;
    (*g_95) = ((((*l_325) = l_324) != &g_61) & l_326);
    for (p_38 = 23; (p_38 >= 15); --p_38)
    {
        short *l_329 = &l_326;
        char *l_333 = &g_113;
        (*g_94) = func_41(((*g_94) = func_50(((*l_329) = 0x0B9EL))), l_330, l_330, ((*l_333) = ((*l_330) <= (safe_add_func_int32_t_s_s((*l_330), (p_38 || 0x6AAB39F8L))))), l_330);
    }
    if ((safe_mod_func_uint8_t_u_u(((l_336 != ((*l_337) = l_336)) || (((safe_mod_func_int8_t_s_s(func_67((*g_94), l_330, g_9, (g_341 = (*g_94))), (~(((-6L) == p_38) || 0L)))) > p_38) ^ (-2L))), 0xAAL)))
    {
        int *l_342 = &g_81;
        int * const l_370 = &g_75;
        unsigned short * const l_374 = &g_263;
        short *l_382 = &l_326;
        (*g_94) = l_342;
        if (((*l_330) != (*l_330)))
        {
            return (*g_94);
        }
        else
        {
            int *l_349 = &g_75;
            const unsigned char **l_377 = (void*)0;
            if ((p_38 <= (*l_330)))
            {
                int l_346 = 0x15A0E331L;
                unsigned short *l_347 = &g_263;
                int l_353 = 0L;
                int l_354 = 0x60AADBF9L;
                char *l_358 = &g_113;
                if ((p_38 & ((*l_347) = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((*g_341), (l_346 = (0x40L < (*g_124))))))))))
                {
                    int l_348 = (-1L);
                    (*g_94) = (*g_94);
                    (*l_342) = ((*l_330) = l_348);
                }
                else
                {
                    return l_349;
                }
                for (g_312 = 0; (g_312 <= (-3)); g_312--)
                {
                    unsigned short l_355 = 3UL;
                    short **l_362 = &g_361;
                    unsigned l_363 = 0x37243089L;
                    int l_365 = 1L;
                    (*g_94) = (void*)0;
                    l_354 = ((l_353 = (safe_unary_minus_func_int8_t_s((p_38 && g_240)))) == g_312);
                    if ((*l_330))
                    {
                        char **l_359 = &l_358;
                        (*l_349) = ((*g_22) = ((*g_124) != l_355));
                        (*g_94) = (*g_94);
                        (*l_349) = ((*l_342) = (safe_rshift_func_uint8_t_u_s((&g_113 == ((*l_359) = l_358)), 2)));
                        (*g_94) = (*g_94);
                    }
                    else
                    {
                        short l_364 = (-1L);
                        l_363 = (g_360 == l_362);
                        (*l_349) = l_364;
                        l_365 = (l_353 = l_346);
                        (*g_94) = &l_353;
                    }
                    for (g_61 = 0; (g_61 >= (-21)); g_61 = safe_sub_func_int16_t_s_s(g_61, 4))
                    {
                        (*g_94) = l_330;
                        return (*g_94);
                    }
                }
                (*g_22) = ((*l_349) = (*l_330));
            }
            else
            {
                int *l_371 = &g_23;
                unsigned short *l_376 = &g_263;
                unsigned short **l_375 = &l_376;
                unsigned char ***l_378 = &l_337;
                char l_379 = 0x22L;
                (*g_94) = func_50(p_38);
                (*g_341) = (g_222 & ((255UL && (safe_sub_func_uint16_t_u_u((func_67(l_370, l_371, (((safe_add_func_uint32_t_u_u(((l_374 == ((*l_375) = &g_263)) > (l_377 == ((*l_378) = (void*)0))), (*l_371))) >= 0x74E81C6BL) || (*l_371)), (*g_94)) & p_38), l_379))) <= p_38));
                (*l_342) = p_38;
            }
        }
        for (g_100 = 0; (g_100 == (-30)); g_100 = safe_sub_func_int16_t_s_s(g_100, 5))
        {
            (*g_94) = func_50(p_38);
        }
        (*g_94) = func_50(((*l_382) = ((**g_360) = (9L == (*g_361)))));
    }
    else
    {
        const int *l_389 = (void*)0;
        int *l_411 = &g_312;
        (*g_94) = l_330;
        for (p_38 = (-5); (p_38 != 43); p_38++)
        {
            int *l_387 = &g_75;
            unsigned char ***l_388 = &l_337;
            const int **l_390 = &l_389;
            unsigned short *l_404 = (void*)0;
            (*g_94) = (*g_94);
            (*g_22) = (safe_add_func_uint32_t_u_u(func_67((*g_94), l_387, p_38, (*g_94)), (&l_338 != ((*l_388) = (void*)0))));
            (*g_94) = func_47(((*l_390) = func_47(l_389, ((*g_94) = func_50((*g_361))))), l_387);
            if ((*l_330))
            {
                short l_406 = 0x0AC0L;
                int *l_410 = &g_75;
                for (l_326 = 3; (l_326 <= (-24)); l_326 = safe_sub_func_uint32_t_u_u(l_326, 2))
                {
                    int *l_393 = &g_312;
                    (*l_390) = l_393;
                    return l_330;
                }
                for (g_100 = 0; (g_100 > (-11)); g_100 = safe_sub_func_uint8_t_u_u(g_100, 8))
                {
                    int l_396 = 0x1B61A870L;
                    unsigned short *l_416 = &g_417;
                }
            }
            else
            {
                int *l_418 = (void*)0;
                (*g_94) = (void*)0;
                return l_418;
            }
        }
    }
    return l_330;
}







static int * func_41(int * p_42, int * p_43, int * p_44, char p_45, int * p_46)
{
    int l_316 = 0x0322CA61L;
    int *l_322 = &g_312;
    for (g_23 = (-9); (g_23 <= (-13)); g_23 = safe_sub_func_uint16_t_u_u(g_23, 2))
    {
        int *l_315 = &g_312;
        (*p_46) = (*g_95);
        (*g_94) = l_315;
    }
    (*p_43) = l_316;
    for (g_222 = (-20); (g_222 < (-23)); g_222 = safe_sub_func_uint16_t_u_u(g_222, 9))
    {
        unsigned l_319 = 0xA246DCAAL;
        int *l_320 = &g_81;
        int **l_321 = (void*)0;
        (*g_94) = (*g_94);
        (*g_94) = func_50(g_81);
        (*l_320) = ((*g_22) = ((*p_46) = (func_67(p_42, ((*g_94) = (*g_94)), p_45, p_42) > l_319)));
        l_322 = ((*g_94) = func_47(func_50(l_316), p_44));
    }
    return p_46;
}







static int * func_47(const int * p_48, int * p_49)
{
    short l_310 = 0x2E8FL;
    (*g_94) = func_50((0L && l_310));
    return (*g_94);
}







static int * func_50(short p_51)
{
    int l_55 = 0L;
    int * const l_72 = (void*)0;
    int *l_74 = &g_75;
    int l_275 = (-1L);
    unsigned l_282 = 0x628F2B3AL;
    unsigned char *l_283 = &g_9;
    unsigned char l_291 = 0xABL;
    int *l_305 = &g_23;
    int *l_307 = &l_275;
    int *l_308 = &g_81;
    for (g_23 = 0; (g_23 == (-19)); g_23 = safe_sub_func_int8_t_s_s(g_23, 8))
    {
        short *l_59 = (void*)0;
        short *l_60 = &g_61;
        int *l_73 = &g_23;
        int **l_76 = &l_73;
        unsigned char *l_272 = &g_153;
        const unsigned short l_273 = 0x58D2L;
        unsigned char *l_288 = (void*)0;
        if ((l_55 <= (((safe_mod_func_int16_t_s_s((0x06C49A7EL < (safe_unary_minus_func_uint16_t_u(((((*l_60) = p_51) <= (((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u(((*l_272) = (safe_unary_minus_func_int16_t_s(func_67(l_72, ((*l_76) = (l_74 = l_73)), p_51, &g_75)))), ((g_237 && g_23) <= p_51))) > p_51) ^ l_273), p_51)) >= 0x2FEA18C0L) & 0x8BL)) != l_273)))), g_116)) | (*g_124)) & (-1L))))
        {
            int l_274 = (-1L);
            l_275 = ((*l_74) <= l_274);
            return &g_23;
        }
        else
        {
            unsigned char **l_284 = (void*)0;
            unsigned char **l_285 = &l_272;
            unsigned char **l_286 = (void*)0;
            unsigned char **l_287 = &l_283;
            int l_289 = 0x34EBF0AEL;
            int l_290 = 0x6CF6D457L;
            if ((((safe_add_func_uint16_t_u_u(((void*)0 == l_74), (safe_mod_func_int16_t_s_s((*l_74), ((safe_add_func_int8_t_s_s((+((*g_124) = l_282)), p_51)) || (((((void*)0 == &l_272) < (l_289 = (((*l_287) = ((*l_285) = l_283)) == l_288))) < p_51) < l_290)))))) >= (-2L)) | l_290))
            {
                return &g_75;
            }
            else
            {
                (*g_94) = &l_275;
            }
            if ((p_51 || ((void*)0 != g_197)))
            {
                int * const l_298 = &g_81;
                int *l_299 = &l_275;
                unsigned char l_301 = 0xA7L;
                char **l_303 = &g_124;
                char ***l_302 = &l_303;
                if ((*g_22))
                    break;
                if ((*g_22))
                {
                    if ((*g_95))
                        break;
                    (*l_76) = &l_290;
                    l_290 = 0x35180EF6L;
                }
                else
                {
                    char l_292 = 0x9DL;
                    int *l_293 = &g_75;
                    short l_294 = 0xFEAEL;
                    int **l_300 = &l_74;
                    g_81 = ((l_291 < ((**g_94) = (*g_22))) > (l_294 = ((*l_293) = (l_292 = 1L))));
                    (*g_94) = (void*)0;
                    (*l_293) = ((safe_unary_minus_func_uint32_t_u((p_51 & (**l_76)))) == ((safe_lshift_func_uint8_t_u_s(l_301, 5)) & 65535UL));
                }
                (*l_302) = &g_124;
            }
            else
            {
                int *l_304 = &g_23;
                (*g_94) = (*g_94);
                (*g_94) = l_304;
                (*g_94) = l_305;
            }
            if (p_51)
                break;
            g_306 = (*l_74);
        }
        (*l_76) = (*g_94);
        (*g_94) = &l_275;
    }
    return l_308;
}







static short func_67(int * const p_68, int * p_69, const short p_70, int * p_71)
{
    unsigned char l_79 = 0UL;
    int l_88 = 0x9B3460EEL;
    short *l_101 = &g_100;
    int * const *l_111 = &g_95;
    char *l_144 = (void*)0;
    const int l_249 = 0x995B8313L;
    unsigned short *l_262 = &g_263;
    unsigned l_271 = 0x18543001L;
    for (g_75 = (-15); (g_75 < 2); g_75++)
    {
        int *l_80 = &g_81;
        const int l_82 = 0x9A2DD318L;
        (*l_80) = l_79;
        if ((*g_22))
            continue;
        if ((((*l_80) = ((l_82 != 0x1BB5L) != (l_79 == 0x1350L))) & p_70))
        {
            p_71 = &g_81;
        }
        else
        {
            (*l_80) = (*g_22);
            if ((*p_71))
                break;
            return p_70;
        }
        if ((*g_22))
            break;
    }
    for (l_79 = 0; (l_79 == 2); l_79++)
    {
        int l_85 = 0x388B32A1L;
        int *l_91 = &g_75;
        short **l_114 = &l_101;
        char *l_208 = &g_113;
        int *l_255 = &g_81;
        int **l_256 = &l_91;
        int **l_257 = &l_91;
    }
    if ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(((*l_262) = p_70), 14)) & ((g_81 > p_70) && p_70)), 13)))
    {
        unsigned char l_268 = 4UL;
        (*g_94) = p_69;
        for (g_263 = 0; (g_263 > 37); g_263 = safe_add_func_uint32_t_u_u(g_263, 6))
        {
            unsigned char l_266 = 0x6DL;
            unsigned short l_269 = 0x1F8FL;
            if ((*g_22))
            {
                (*p_71) = (l_266 == 0x5BL);
                if ((**g_94))
                    break;
                (*p_71) = 1L;
            }
            else
            {
                unsigned l_267 = 0x1BBC4476L;
                if ((l_266 || (*p_69)))
                {
                    (*p_71) = (**g_94);
                    (*g_94) = p_69;
                }
                else
                {
                    return l_267;
                }
                if (l_268)
                    continue;
            }
            (*p_71) = (l_269 = (**g_94));
        }
    }
    else
    {
        int *l_270 = &l_88;
        (*g_94) = l_270;
        return l_271;
    }
    return p_70;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
