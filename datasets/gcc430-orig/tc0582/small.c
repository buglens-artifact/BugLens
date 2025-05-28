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



static int g_9 = 0xCCE1E2C0L;
static int g_19 = (-8L);
static char g_38 = (-5L);
static unsigned char g_44 = 246UL;
static unsigned char g_48 = 0x67L;
static unsigned char *g_47 = &g_48;
static short g_50 = 1L;
static short g_52 = 0x4763L;
static short *g_51 = &g_52;
static char g_61 = 0L;
static char g_63 = 0L;
static int g_79 = 0x8B536E21L;
static int *g_104 = &g_79;
static unsigned short g_153 = 0xF191L;
static unsigned short g_156 = 0xF603L;
static char g_158 = (-1L);
static unsigned g_204 = 4294967295UL;
static int g_206 = 0x11E098A5L;
static short g_212 = 5L;
static unsigned short *g_215 = &g_153;
static unsigned short **g_214 = &g_215;
static unsigned char **g_217 = &g_47;
static unsigned char *g_243 = &g_48;
static int *g_256 = &g_9;
static unsigned *g_261 = &g_204;
static unsigned **g_260 = &g_261;
static unsigned short g_263 = 0xAA62L;
static short **g_287 = &g_51;
static short ***g_286 = &g_287;
static unsigned char g_299 = 0xBFL;
static unsigned g_392 = 4294967294UL;
static short g_421 = (-1L);
static unsigned char g_471 = 0UL;
static int *g_486 = &g_206;
static unsigned char g_514 = 0x18L;
static char *g_623 = &g_63;
static char **g_622 = &g_623;
static unsigned char g_655 = 0x88L;
static unsigned short *g_709 = &g_153;



static int func_1(void);
static int func_2(int p_3, int p_4, unsigned short p_5, short p_6);
static short func_11(char p_12);
static int func_20(int p_21, int * p_22, int * p_23);
static unsigned char func_26(int * p_27);
static int * func_28(unsigned p_29, int p_30);
static int * func_32(char p_33, int p_34, char p_35);
static short * func_53(char p_54, int p_55, unsigned short p_56, char * p_57, unsigned p_58);
static char func_65(unsigned p_66, unsigned char * p_67, char p_68, int p_69);
static int * func_70(short * p_71);
static int func_1(void)
{
    unsigned short l_10 = 65530UL;
    int l_603 = 0L;
    unsigned char *l_636 = (void*)0;
    unsigned char **l_660 = (void*)0;
    short l_684 = 4L;
    if (func_2((safe_mod_func_uint32_t_u_u(g_9, 4294967295UL)), ((l_10 > (((((func_11(l_10) | 2UL) & 0xD6DC17AEL) != g_9) < ((l_603 = (l_10 ^ l_10)) ^ 0xABB8L)) <= l_10)) >= 0xF3L), l_10, g_392))
    {
        char *l_621 = (void*)0;
        char **l_620 = &l_621;
        char ***l_619 = &l_620;
        int l_624 = 1L;
        int l_686 = 0xF02646C2L;
        unsigned short *l_707 = &g_263;
        int *l_727 = &g_9;
        int **l_728 = &g_104;
        if ((safe_mod_func_uint16_t_u_u(((((*l_619) = (void*)0) != g_622) != ((l_10 != ((0x0813L || ((*g_51) = (***g_286))) > (*g_261))) == 4294967295UL)), 0xF701L)))
        {
            unsigned char l_625 = 0xF2L;
            int *l_626 = &g_19;
            int *l_627 = &l_624;
            int l_647 = (-5L);
            unsigned short **l_708 = &l_707;
            int l_720 = 1L;
            (*l_627) = ((*l_626) = ((***g_286) || l_625));
            if (l_603)
            {
                char l_646 = 0xE2L;
                for (g_52 = (-17); (g_52 <= 4); ++g_52)
                {
                    unsigned char **l_637 = &g_47;
                    for (g_9 = 0; (g_9 >= (-4)); g_9 = safe_sub_func_uint8_t_u_u(g_9, 7))
                    {
                        char ****l_632 = (void*)0;
                        char ****l_633 = &l_619;
                        (*l_626) = (((*l_633) = &g_622) == (void*)0);

                        ;
                    }
                    (*l_626) = ((((**g_622) = (safe_rshift_func_int16_t_s_s(((*g_51) = (0x9B4EL | (l_624 = func_65((**g_260), ((*l_637) = l_636), (0x83L ^ (*g_623)), (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(func_65((*g_261), &g_471, ((((*g_51) = (safe_add_func_uint8_t_u_u((*g_243), 6L))) & l_646) ^ 0x9E5CEA65L), l_647), (*g_261))), 1L)), 0x65L)))))), 8))) > l_603) <= 0xA4L);

                    ;
                }

                ;
                ;
            }
            else
            {
                int l_650 = 0x6A45C7D8L;
                unsigned ***l_695 = &g_260;
                unsigned ****l_694 = &l_695;
                unsigned char *l_696 = &g_655;
                int l_703 = 0xDEA12437L;
                char l_704 = (-1L);
                if ((func_2((*g_486), (~0x8AD1CCD0L), ((*g_215) = func_2(l_624, (safe_mul_func_uint16_t_u_u(((*g_215) = func_2((*g_486), (*l_627), l_650, ((**g_287) = (((*g_215) && (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((*l_626) = (-1L)), (*l_627))), l_624))) || (*l_626))))), (*l_627))), g_655, (*l_627))), l_624) && 4294967295UL))
                {
                    int *l_659 = &l_603;
                    for (l_647 = 9; (l_647 <= 0); l_647--)
                    {
                        int **l_658 = &g_256;
                        (*l_658) = &g_9;

                        ;
                        (*l_658) = l_659;

                        ;
                        l_660 = &g_243;

                        ;
                    }


                    ;
                    return (*g_486);


                }
                else
                {
                    char ****l_665 = &l_619;
                    unsigned char *l_670 = &g_514;
                    char l_679 = 0x69L;
                    int *l_687 = &l_650;
                    if (((~((*g_261) = l_624)) < ((safe_sub_func_uint16_t_u_u((((l_650 && 0L) | ((((void*)0 != l_665) <= (safe_mul_func_uint16_t_u_u(1UL, (safe_mod_func_int32_t_s_s((((*g_51) <= (*g_51)) != ((l_670 == (void*)0) & (*g_215))), 0x9365E1F1L))))) || l_624)) == l_650), (-1L))) >= 0xFF773DE4L)))
                    {
                        unsigned short *l_685 = &g_156;
                        int **l_688 = &g_256;
                        (*l_627) = g_50;
                        (*l_688) = l_687;

                        ;
                        (*g_256) = ((*l_626) = ((-2L) >= (**l_688)));
                    }
                    else
                    {
                        int **l_689 = &l_627;
                        (*l_689) = func_70((*g_287));

                        ;
                        return l_624;
                    }

                    ;
                    for (g_655 = 0; (g_655 <= 41); g_655 = safe_add_func_uint8_t_u_u(g_655, 7))
                    {
                        return (*g_486);


                    }
                    if ((l_10 || ((safe_mul_func_int16_t_s_s(func_65(((void*)0 != l_694), l_696, l_624, (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((l_624 && (((*g_256) = (safe_sub_func_uint32_t_u_u(((*g_243) == (*l_687)), (*l_626)))) && (*g_256))), 1L)) && (*l_687)), 2))), l_703)) != 0L)))
                    {
                        (*l_627) = (-9L);
                        (*l_626) = 0x98A865B8L;
                        (*g_256) = (*l_626);
                    }
                    else
                    {
                        return l_704;


                    }
                }

                ;
                g_256 = &l_624;

                ;
            }

            ;

            ;
            (*l_627) = (safe_lshift_func_uint16_t_u_u(l_603, ((*g_709) = (func_2((((((*l_708) = l_707) != g_709) != ((**g_287) = 0x276EL)) == ((safe_add_func_int8_t_s_s(((**g_622) = l_686), (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(0xBAL, 4)), func_65((**g_260), &l_625, (((*l_626) = (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((*l_627), l_624)), 0x26L))) ^ (*l_627)), (*g_486)))))) && l_720)), (*g_486), (*g_709), l_10) < l_686))));
        }
        else
        {
            char l_723 = 0xE9L;
            int **l_725 = (void*)0;
            int **l_726 = &g_104;
            g_256 = ((*l_726) = &l_603);

            ;
            ;
        }

        ;


        ;
        ;
        g_79 = ((*l_727) = (((*g_623) < (l_624 ^ (*g_243))) & (*g_709)));
        (*l_728) = &g_19;

        ;
        (*l_727) = ((*g_104) = (*g_104));
    }
    else
    {
        int **l_729 = &g_104;
        l_603 = l_684;
        g_256 = ((*l_729) = &l_603);

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;

    (*g_104) = (((void*)0 != &g_622) != 0L);
    (*g_104) = l_684;
    return (*g_486);



}







static int func_2(int p_3, int p_4, unsigned short p_5, short p_6)
{
    int l_604 = 0x2C3A808CL;
    int *l_605 = &g_79;
    int **l_606 = &l_605;
    unsigned char *l_611 = &g_44;
    char *l_616 = &g_61;
    (*l_606) = l_605;
    (*l_606) = func_70(((**g_286) = &g_421));

    ;
    return p_3;
}







static short func_11(char p_12)
{
    unsigned l_17 = 4294967294UL;
    int *l_18 = &g_19;
    short l_31 = 0x08E2L;
    int *l_264 = &g_206;
    int *l_407 = &g_79;
    unsigned char *l_415 = (void*)0;
    char l_464 = (-1L);
    unsigned l_476 = 0x33945E73L;
    char *l_539 = &g_158;
    unsigned **l_556 = &g_261;
    unsigned short ***l_565 = &g_214;
    short *l_573 = &g_212;
    int *l_595 = (void*)0;
    int *l_596 = &g_19;
    int **l_597 = (void*)0;
    int **l_598 = &l_595;
    if ((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((!((*l_18) = l_17)), func_20(((*l_264) = (safe_mod_func_uint8_t_u_u((l_18 == &g_9), func_26(func_28(l_31, g_9))))), l_264, l_264))), 0xAA02679FL)))
    {
        unsigned short l_304 = 65527UL;
        int l_313 = (-1L);
        unsigned l_314 = 1UL;
        int **l_315 = &l_18;
        unsigned char l_316 = 0UL;
        char *l_321 = &g_158;
        int **l_331 = &g_256;
        short *l_344 = &l_31;
        int l_360 = (-4L);
        unsigned l_366 = 4294967286UL;
        unsigned l_376 = 6UL;
        unsigned short **l_386 = &g_215;
        unsigned short l_423 = 0xABB4L;
        unsigned short l_439 = 65533UL;
        char **l_521 = &l_321;
        char ***l_520 = &l_521;
        unsigned **l_553 = &g_261;
        short **l_558 = (void*)0;
        l_313 = (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((void*)0 != &g_261), (~l_304))) && g_212), (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_12, ((*g_243) = (*l_18)))) < (safe_sub_func_uint8_t_u_u(p_12, (safe_mod_func_int16_t_s_s(0x96F3L, 65528UL))))), (***g_286)))));
        (*l_18) = 0L;
        g_104 = (void*)0;

        ;
        if (((l_314 & (l_316 >= (((void*)0 == (*g_260)) && (*l_18)))) != (*g_261)))
        {
            int *l_334 = (void*)0;
            int *l_335 = (void*)0;
            int *l_336 = &g_79;
            (*l_336) = (((safe_mod_func_uint8_t_u_u((g_158 && ((**l_315) = p_12)), (safe_sub_func_uint32_t_u_u((p_12 & p_12), (l_313 = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(((l_331 = &g_256) != (void*)0))) < (((safe_add_func_uint8_t_u_u((((~(((0xC893FE44L & p_12) >= 0x42L) ^ (*g_215))) != p_12) ^ (*g_261)), 1UL)) < p_12) | 0xD8L)), 0x38E5L)), p_12))))))) | p_12) || (*l_18));
        }
        else
        {
            int l_343 = 1L;
            unsigned **l_355 = &g_261;
            unsigned l_361 = 4294967290UL;
            unsigned char **l_372 = (void*)0;
            char *l_435 = &g_63;
            int *l_448 = &l_360;
            char ***l_519 = (void*)0;
            unsigned short l_543 = 0x0AC2L;
            if ((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s(65535UL, 7)) && (safe_rshift_func_int16_t_s_u((+(***g_286)), 10))) ^ ((((((*g_243) = (*g_47)) && g_156) < l_343) >= 3UL) <= (*l_18))), 0x6C59L)))
            {
                unsigned char l_345 = 4UL;
                unsigned ***l_347 = &g_260;
                unsigned ****l_346 = &l_347;
                int *l_350 = &l_343;
                (*l_315) = func_70(l_344);

                ;
                (*l_331) = &g_9;
                for (l_313 = 0; (l_313 >= 13); l_313 = safe_add_func_int8_t_s_s(l_313, 7))
                {
                    unsigned char *l_371 = &g_48;
                    unsigned char l_373 = 0x30L;
                    (*l_350) = ((safe_lshift_func_uint16_t_u_u((((*g_47) = ((**g_287) ^ (*l_18))) != l_343), p_12)) ^ (0x69L > (p_12 <= (**l_315))));
                    (**l_315) = (((*l_350) = (4294967286UL >= (func_65((*g_261), &l_345, g_79, (l_355 == (void*)0)) >= (-1L)))) == (safe_sub_func_int32_t_s_s((l_360 = (safe_rshift_func_uint16_t_u_s((**l_315), 5))), 0xD4331722L)));
                    if (((l_361 ^ (safe_rshift_func_int16_t_s_s((!((safe_lshift_func_uint8_t_u_u(l_343, (l_361 <= (**g_260)))) && 1L)), 3))) < func_65((**g_260), &l_316, l_366, (g_153 <= (*l_18)))))
                    {
                        (*l_350) = (safe_add_func_int16_t_s_s(((***g_286) = (**g_287)), (func_65(((safe_rshift_func_int8_t_s_u(p_12, 3)) | (**l_315)), l_371, (l_372 != &g_243), g_79) == func_65(func_65((**g_260), &l_345, p_12, l_373), &l_373, g_206, g_38))));
                        (*l_331) = (void*)0;

                        ;
                    }
                    else
                    {
                        (*l_18) = (safe_add_func_uint32_t_u_u(l_376, p_12));
                        return (***g_286);
                    }

                    ;
                    for (g_204 = (-1); (g_204 < 42); ++g_204)
                    {
                        unsigned short **l_385 = &g_215;
                        char l_389 = 0x9AL;
                        char *l_390 = &g_61;
                        unsigned char *l_391 = &g_48;
                        (*l_350) = (safe_rshift_func_uint16_t_u_s(p_12, ((*l_344) = ((***g_286) = (safe_sub_func_uint8_t_u_u((((*l_321) = g_52) >= ((*l_18) = (safe_sub_func_uint16_t_u_u(((**l_386) = (l_343 ^ (l_385 == l_386))), ((func_65(((((0xFBB5E838L != l_361) || ((*l_390) = (safe_sub_func_uint16_t_u_u((~l_389), (0x5F81L | p_12))))) >= p_12) < l_361), l_391, p_12, p_12) && p_12) > 0x5853L))))), p_12))))));
                        (**l_315) = g_392;
                    }
                }

                ;
            }
            else
            {
                short l_422 = 0x3A69L;
                char **l_424 = &l_321;
                for (l_31 = 11; (l_31 <= (-7)); --l_31)
                {
                    unsigned ***l_406 = &g_260;
                    unsigned ****l_405 = &l_406;
                    int l_418 = 0x08104924L;
                    char ***l_425 = &l_424;
                    for (g_263 = 0; (g_263 <= 21); g_263 = safe_add_func_int32_t_s_s(g_263, 6))
                    {
                        int *l_408 = &l_343;
                        short *l_419 = (void*)0;
                        short *l_420 = &g_421;
                        l_407 = &l_418;

                        ;
                        if (p_12)
                            continue;
                    }


                    (*l_425) = l_424;
                    (*l_315) = (void*)0;

                    ;
                }

                ;

                for (g_204 = 0; (g_204 >= 45); g_204 = safe_add_func_uint8_t_u_u(g_204, 5))
                {
                    for (l_313 = 0; (l_313 != (-26)); l_313 = safe_sub_func_int32_t_s_s(l_313, 6))
                    {
                        unsigned short l_430 = 0xFF46L;
                        if (l_430)
                            break;
                        (*l_331) = &g_19;

                        ;
                    }
                }

                ;
            }

            ;
            ;

            if (((safe_mul_func_int8_t_s_s(((*l_435) = ((*l_321) = (safe_rshift_func_int8_t_s_s((-1L), p_12)))), l_361)) | ((**l_355) = 0UL)))
            {
                int *l_438 = (void*)0;
                int l_455 = 0x9666D4F1L;
                unsigned char *l_465 = &g_48;
                short *l_491 = &l_31;
                g_19 = ((safe_lshift_func_uint16_t_u_s(0xAA78L, (**g_287))) > (*g_47));
                (*l_315) = (*l_315);
                if (p_12)
                {
                    unsigned char *l_451 = &l_316;
                    int *l_454 = &g_19;
                    l_439 = (((*g_287) == (void*)0) && ((*g_51) | p_12));
                    if ((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((p_12 >= 0x84L), 13)), (**g_287))) ^ g_263) != p_12))
                    {
                        g_19 = (l_455 >= (safe_sub_func_int16_t_s_s(func_65((safe_mul_func_int8_t_s_s(((*g_261) && (1L && 0L)), p_12)), l_415, p_12, g_63), 2L)));
                        (*l_331) = l_454;

                        ;
                        (*g_256) = ((safe_mod_func_int8_t_s_s(p_12, (safe_mod_func_uint16_t_u_u(0x670CL, (*l_448))))) < func_65((**g_260), &l_316, (*l_448), g_44));
                        (*l_331) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned char *l_466 = &g_48;
                        l_464 = (*l_448);
                        (*l_454) = ((l_466 = l_465) != (void*)0);
                        (*l_454) = (safe_lshift_func_int8_t_s_u(((*l_321) = (((func_65((func_65((safe_add_func_uint16_t_u_u(0UL, g_471)), l_466, p_12, (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_12, (***g_286))), (*l_448)))) < (**g_287)), &g_44, g_9, g_50) ^ (*l_448)) > 0x4AA70455L) < (*g_47))), 3));
                    }
                }
                else
                {
                    unsigned l_483 = 1UL;
                    int *l_484 = (void*)0;
                    (*l_315) = (*l_331);

                    ;
                    if (l_17)
                        goto lbl_485;
                    if (((*l_448) = l_476))
                    {
                        unsigned l_477 = 8UL;
                        (*l_315) = l_484;

                        ;
                        (*l_315) = &g_19;

                        ;
                        (*l_331) = (void*)0;

                        ;
                    }
                    else
                    {
lbl_485:
                        (*l_331) = (void*)0;

                        ;
                        (*l_315) = ((*l_331) = &g_19);

                        ;
                        ;
                        g_256 = l_484;

                        ;
                        (*l_331) = &l_343;

                        ;
                    }

                    ;
                    ;
                    (*l_331) = &g_9;

                    ;
                }
                for (l_423 = 0; (l_423 <= 13); l_423 = safe_add_func_uint8_t_u_u(l_423, 2))
                {
                    short l_496 = 0xD8F4L;
                    short *l_497 = &g_421;
                    unsigned char ***l_511 = &l_372;
                    for (g_44 = 0; (g_44 == 50); ++g_44)
                    {
                        (*l_315) = func_70(((**g_286) = l_491));

                        ;
                        ;
                    }
                    (*l_315) = &l_455;

                    ;
                    (*l_331) = &g_9;

                    ;
                    if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((((p_12 | (6L | l_496)) >= ((*l_497) = (((**g_287) = p_12) <= ((!0x65CCL) <= ((**l_315) ^ ((**l_386) = p_12)))))) || ((**g_260) = (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((*l_18) = 0xC1F8C9C4L), (!func_65((**g_260), l_415, g_50, (*g_486))))), 0xD1637CF6L)))), (-2L))), p_12)))
                    {
                        int *l_502 = &l_360;
                        (*l_331) = l_502;

                        ;
                        (*l_331) = l_18;

                        ;
                        (*l_315) = l_502;

                        ;
                    }
                    else
                    {
                        return l_496;


                    }

                    ;
                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                (*l_448) = (((((((void*)0 == l_448) == (***g_286)) > (*l_448)) | ((l_519 == l_520) || (p_12 ^ (safe_lshift_func_int16_t_s_s(((*l_344) = (safe_rshift_func_int8_t_s_u(p_12, 0))), 2))))) ^ (*l_448)) | 0x800BL);
                l_448 = ((*l_315) = &g_19);

                ;
                ;
                for (g_471 = 24; (g_471 <= 24); ++g_471)
                {
                    (*l_448) = p_12;
                    (*l_315) = (void*)0;

                    ;
                }

                ;
            }

            ;
            ;

            ;
            for (g_471 = 13; (g_471 >= 27); g_471 = safe_add_func_int16_t_s_s(g_471, 2))
            {
                unsigned ***l_533 = &g_260;
                unsigned ****l_532 = &l_533;
                int l_538 = 0x11D74782L;
                unsigned **l_540 = (void*)0;
                unsigned *l_542 = &l_366;
                unsigned **l_541 = &l_542;
                unsigned char *l_557 = &g_514;
                (*l_448) = (0UL | 0L);
                if ((safe_add_func_int16_t_s_s((((*l_355) == ((*l_541) = func_70(func_53((((*l_532) = &g_260) == &g_260), (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_538, 15)), 6)), (*g_215), ((**l_520) = l_539), (!func_65((p_12 >= func_65((**g_260), l_539, (*l_448), l_538)), l_539, g_212, p_12)))))) != l_543), l_538)))
                {
                    (*l_448) = (p_12 >= p_12);
                    return p_12;


                }
                else
                {
                    for (l_17 = 0; (l_17 != 30); l_17 = safe_add_func_uint16_t_u_u(l_17, 8))
                    {
                        unsigned l_548 = 0xA153ECADL;
                        unsigned ***l_554 = (void*)0;
                        unsigned ***l_555 = &l_540;
                    }
                    (*l_315) = &g_9;

                    ;
                    if (p_12)
                        break;
                }

                ;
                ;
            }

            ;
            ;
            (*l_331) = &l_343;

            ;
        }

        ;
        ;
        ;


    }
    else
    {
        unsigned short **l_559 = &g_215;
        unsigned short ***l_560 = &l_559;
        int l_568 = 0L;
        unsigned char *l_571 = &g_44;
        short *l_572 = &g_421;
        int **l_585 = (void*)0;
        unsigned char ***l_592 = (void*)0;
        (*l_560) = l_559;
        if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_565 != (void*)0), ((*g_47) & g_204))), 252UL)))
        {
            int *l_574 = (void*)0;
            int **l_575 = (void*)0;
            int **l_576 = &g_104;
            short *l_577 = &g_50;
            (*l_576) = l_574;

            ;
            if ((*l_407))
            {
                (*l_576) = func_70(l_577);

                ;
                (*l_576) = (void*)0;

                ;
            }
            else
            {
                int ***l_586 = &l_575;
                for (g_263 = 0; (g_263 <= 30); g_263++)
                {
                    int l_580 = (-2L);
                    (*l_576) = l_407;

                    ;
                    l_580 = (*g_256);
                    for (g_19 = 26; (g_19 > (-9)); g_19--)
                    {
                        (*l_576) = (void*)0;

                        ;
                        (*l_576) = &l_568;

                        ;
                        (*l_576) = &g_79;

                        ;
                    }
                }

                ;
                (*l_576) = (void*)0;

                ;
                (*l_407) = ((safe_add_func_uint16_t_u_u(p_12, 0x0F6AL)) || ((*l_571) = ((*g_47) = ((l_585 != ((*l_586) = &l_407)) && (&g_47 == (void*)0)))));

                ;
            }

            ;
        }
        else
        {
            unsigned l_591 = 0UL;
            unsigned char *l_593 = &g_299;
            unsigned char **l_594 = &l_593;
            (*l_407) = ((*l_18) = ((((**l_559) = func_26(l_407)) >= 0L) < l_591));
        }
    }


    ;

    ;
    ;


    (*l_596) = (!g_263);
    (*l_598) = &g_79;

    ;
    (*l_595) = (((*l_596) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((*g_47) = (*g_47)), 4)), (~(p_12 || (&g_261 != l_556)))))) > p_12);
    return p_12;


}







static int func_20(int p_21, int * p_22, int * p_23)
{
    unsigned l_269 = 1UL;
    unsigned l_270 = 0xD94B26CCL;
    int *l_272 = (void*)0;
    int l_273 = (-1L);
    short ***l_289 = &g_287;
    unsigned char *l_293 = (void*)0;
    unsigned **l_298 = &g_261;
    if (((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(l_269, (*g_51))), 7)) && 0xB51EL))
    {
        char l_271 = 0xE6L;
        l_270 = ((void*)0 != &g_215);
        (*p_23) = (*g_256);
        (*p_23) = l_271;
        l_272 = l_272;
    }
    else
    {
        char l_276 = 1L;
        unsigned char *l_285 = &g_44;
        short ****l_288 = &g_286;
        short ****l_290 = &l_289;
        l_273 = ((*p_22) = (0x8E3D9C56L && 0x9854512FL));
        (*p_22) = (safe_mul_func_uint16_t_u_u(l_276, (*g_51)));
        (*p_22) = (((l_276 | (l_276 && ((*g_243) = p_21))) == ((*l_285) = ((252UL != 0x71L) > ((safe_add_func_uint32_t_u_u(((func_65((safe_mod_func_int16_t_s_s(((*p_23) & 4294967295UL), (safe_sub_func_uint32_t_u_u(((**g_260) = (0xB2L | func_65((((p_21 >= (*g_261)) >= l_276) < g_44), l_285, p_21, p_21))), 0UL)))), l_285, g_38, l_276) < 0xEF9BL) || 3L), (-9L))) ^ (*g_256))))) <= l_276);
        (*p_23) = (func_26(p_23) > (((*l_288) = g_286) != ((*l_290) = l_289)));
    }
    (*p_23) = (safe_add_func_uint32_t_u_u(0x4010C408L, func_65((*g_261), l_293, (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((4294967295UL > p_21), (*g_256))), 7)) > (&g_261 == (l_298 = l_298))) ^ g_156), p_21)));
    return g_299;
}







static unsigned char func_26(int * p_27)
{
    unsigned short l_195 = 4UL;
    char *l_196 = &g_63;
    int l_197 = 0x77104E18L;
    unsigned *l_202 = (void*)0;
    unsigned *l_203 = &g_204;
    int *l_205 = &g_206;
    unsigned l_207 = 0x9453CEA5L;
    int **l_208 = &g_104;
    unsigned char **l_216 = (void*)0;
lbl_211:
    (*l_208) = &g_79;

    ;
    for (g_204 = 0; (g_204 > 44); g_204++)
    {
        if (g_204)
            goto lbl_211;
        (*p_27) = (g_212 <= (safe_unary_minus_func_int32_t_s((**l_208))));
        g_214 = (void*)0;

        ;
        g_217 = l_216;

        ;
    }
    if ((**l_208))
    {
        char l_218 = 0L;
        return l_218;
    }
    else
    {
        unsigned l_219 = 1UL;
        unsigned char *l_220 = &g_44;
        int *l_223 = &g_79;
        short **l_230 = &g_51;
        short ***l_229 = &l_230;
        unsigned l_253 = 0xAB4B5E31L;
        if (((l_219 == func_65(((*l_203) = (p_27 != (void*)0)), l_220, l_219, (0xC4L || 0x1CL))) | 1UL))
        {
            int *l_221 = &l_197;
            int l_222 = (-6L);
            char *l_226 = &g_158;
            (*l_208) = l_221;

            ;
            l_223 = func_32((**l_208), l_219, (l_222 = ((*l_221) == ((*l_196) = (-1L)))));


            ;
            if ((((*g_215) = (+0x8C12L)) | (*l_221)))
            {
                int *l_224 = (void*)0;
                (*l_208) = (void*)0;

                ;
                p_27 = l_224;

                ;
            }
            else
            {
                char l_225 = 0xF3L;
                short ****l_231 = (void*)0;
                short ****l_232 = (void*)0;
                short ****l_233 = &l_229;
                (*p_27) = ((*l_223) >= (((((func_65(l_225, &g_44, (*l_221), (l_226 == &g_38)) > (safe_sub_func_int8_t_s_s(0xF8L, (((*l_233) = l_229) == (void*)0)))) <= l_225) && (*l_223)) >= (*g_51)) | 0x2110L));
            }



        }
        else
        {
            int l_234 = 1L;
            int *l_244 = &l_197;
            (*l_223) = (0UL < l_234);
            (*g_104) = (*g_104);
            (**l_208) = (safe_add_func_int8_t_s_s(g_52, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((l_234 || 0UL) == l_234) <= (*g_104)), (((*l_196) = g_204) ^ (g_206 != (**l_208))))), 5)), g_79))));
            (*g_104) = (!func_65(g_44, l_220, (func_65(g_212, g_243, g_212, ((*g_104) ^ ((*l_244) = (*g_104)))) != (**l_208)), (**l_208)));
        }



        ;
        (*l_229) = &g_51;
        for (g_50 = 0; (g_50 <= 18); g_50 = safe_add_func_int32_t_s_s(g_50, 7))
        {
            for (g_48 = (-19); (g_48 == 31); g_48++)
            {
                (*l_208) = &g_79;

                ;
                return (**l_208);
            }
        }
        if ((((***l_229) = ((0UL <= ((((*g_51) & (((*l_203) = (~((func_65((((((((*l_203) = g_212) && 4294967295UL) != (safe_mul_func_uint16_t_u_u((*l_223), func_65((*l_223), l_220, (*l_223), (safe_add_func_uint16_t_u_u(l_253, (*g_215))))))) > g_38) && g_79) == l_197), l_220, l_195, (*l_223)) || (*l_223)) | (*l_223)))) < 0xFB2AC543L)) ^ (*l_223)) ^ l_207)) || g_212)) && (*l_223)))
        {
            return (*l_223);


        }
        else
        {
            int *l_257 = &l_197;
            for (g_204 = 0; (g_204 > 35); g_204 = safe_add_func_int32_t_s_s(g_204, 7))
            {
                l_257 = (p_27 = g_256);

                ;
                ;
            }


            ;
            for (g_79 = (-28); (g_79 >= (-1)); g_79 = safe_add_func_int8_t_s_s(g_79, 6))
            {
                unsigned ***l_262 = &g_260;
                (*l_262) = g_260;
            }
            g_79 = ((*g_215) == 0x31B9L);
            (*l_208) = &g_79;

            ;
        }

        ;

    }


    (*l_208) = func_28((*g_261), (**l_208));
    return g_263;
}







static int * func_28(unsigned p_29, int p_30)
{
    int l_36 = (-1L);
    char *l_37 = &g_38;
    int *l_189 = &g_79;
    int l_190 = 2L;
    int *l_191 = (void*)0;
    int *l_192 = &l_190;
    (*l_192) = ((g_156 = (&g_9 == (l_189 = func_32(((&g_9 != &p_30) > p_29), g_9, ((*l_37) = (l_36 = (-8L))))))) > l_190);


    ;
    return &g_79;


}







static int * func_32(char p_33, int p_34, char p_35)
{
    unsigned char *l_43 = &g_44;
    short *l_49 = &g_50;
    char *l_59 = &g_38;
    char *l_60 = &g_61;
    char *l_62 = &g_63;
    short **l_106 = (void*)0;
    short *l_108 = &g_52;
    short **l_107 = &l_108;
    int l_115 = 0xD1A88BB4L;
    int *l_127 = &g_79;
    int **l_132 = &l_127;
    unsigned char **l_185 = (void*)0;
    unsigned char ***l_186 = (void*)0;
    unsigned char ***l_187 = (void*)0;
    unsigned char ***l_188 = &l_185;
    if ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(1UL, ((*l_43) = 0xB0L))) ^ (safe_add_func_int16_t_s_s(((*l_49) = (l_43 != g_47)), (g_51 != ((*l_107) = func_53(g_48, p_35, ((((0x18L & ((((*l_60) = ((*l_59) = p_34)) && p_33) <= p_33)) >= (*g_51)) <= (*g_47)) || g_52), l_62, p_33)))))), g_52)))
    {
        unsigned l_109 = 1UL;
        int *l_126 = &l_115;
        int **l_128 = &l_126;
        if (l_109)
        {
            short *l_110 = &g_50;
            int **l_111 = &g_104;
            (*l_111) = func_70(l_110);

            ;
        }
        else
        {
            short *l_112 = &g_50;
            unsigned char *l_118 = &g_44;
            int *l_123 = &g_79;
            int **l_124 = &g_104;
            int **l_125 = &l_123;
            if ((*g_104))
            {
                int *l_113 = &g_79;
                (*g_104) = (-2L);
                if (p_35)
                    goto lbl_129;
                l_113 = func_70(l_112);
                if (p_33)
                    goto lbl_184;
            }
            else
            {
                int **l_114 = &g_104;
                (*l_114) = (void*)0;

                ;
            }


            (*l_125) = ((*l_124) = func_70(&g_50));

            ;
            (*l_124) = l_126;

            ;
        }

        ;
lbl_129:
        (*l_128) = l_127;

        ;
        (*l_128) = func_70(((*l_107) = (void*)0));
    }
    else
    {
        (*l_127) = (safe_lshift_func_uint16_t_u_u(((*g_51) && 5L), 8));
    }


    ;
    (*l_132) = &g_9;

    ;
lbl_184:
    for (g_38 = (-21); (g_38 >= (-19)); g_38 = safe_add_func_uint32_t_u_u(g_38, 1))
    {
        char l_141 = 0L;
        int l_151 = (-1L);
        int *l_159 = &l_115;
        unsigned short *l_162 = (void*)0;
        unsigned char **l_166 = &l_43;
    }
    (*l_188) = l_185;
    return &g_9;



}







static short * func_53(char p_54, int p_55, unsigned short p_56, char * p_57, unsigned p_58)
{
    unsigned char l_64 = 251UL;
    short *l_105 = (void*)0;
    if (((p_56 >= (&g_48 != &g_48)) || ((l_64 < func_65(l_64, p_57, g_9, g_9)) != 0xA4L)))
    {
        int *l_82 = &g_79;
        int **l_81 = &l_82;
        unsigned char *l_88 = &l_64;
        unsigned char **l_87 = &l_88;
        (*l_81) = func_70(&g_52);
        if ((((g_79 = (safe_mod_func_int16_t_s_s((*l_82), p_54))) || (p_54 && 65527UL)) | ((safe_rshift_func_int8_t_s_u(func_65(p_54, ((*l_87) = (void*)0), g_48, (g_61 > (2L || p_54))), l_64)) < l_64)))
        {
            char l_94 = 0x8AL;
            unsigned char *l_95 = &l_64;
            char *l_100 = (void*)0;
            char *l_101 = (void*)0;
            char *l_102 = &g_61;
            p_55 = (((*p_57) = (*p_57)) & (p_55 <= ((g_48 & (safe_unary_minus_func_uint16_t_u(((safe_mod_func_int8_t_s_s((~l_94), ((*l_102) = (((func_65(l_94, l_95, ((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((p_55 < (!p_58)), (l_94 || 0x71L))), 4294967295UL)) > p_56), p_58) != (*g_47)) & 0x44L) && p_54)))) ^ p_54)))) < g_48)));
        }
        else
        {
            (*l_81) = &p_55;

            ;
        }

        ;
        ;
    }
    else
    {
        short *l_103 = &g_52;
        g_104 = func_70(l_103);

        ;
    }
    return l_105;


}







static char func_65(unsigned p_66, unsigned char * p_67, char p_68, int p_69)
{
    return p_68;
}







static int * func_70(short * p_71)
{
    int *l_80 = &g_79;
    for (g_63 = 0; (g_63 < (-16)); g_63 = safe_sub_func_uint8_t_u_u(g_63, 6))
    {
        int *l_75 = &g_9;
        int **l_74 = &l_75;
        int *l_77 = &g_9;
        int **l_76 = &l_77;
        int *l_78 = &g_79;
        (*l_78) = (((*l_76) = ((*l_74) = &g_9)) == (void*)0);
    }
    return l_80;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
