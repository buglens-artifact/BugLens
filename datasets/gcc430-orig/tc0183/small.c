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



static int g_6 = (-5L);
static int *g_5 = &g_6;
static char g_43 = 0xB2L;
static unsigned g_46 = 4294967295UL;
static int g_49 = 0x65816309L;
static unsigned g_74 = 4294967293UL;
static unsigned short g_84 = 0x8E11L;
static short g_109 = 0L;
static unsigned g_111 = 0xC51C80F8L;
static int g_114 = 0L;
static int *g_113 = &g_114;
static unsigned char g_127 = 0x61L;
static unsigned char g_129 = 0xE9L;
static unsigned short g_157 = 65532UL;
static short g_161 = 3L;
static unsigned *g_167 = (void*)0;
static unsigned ** const g_166 = &g_167;
static const short *g_239 = &g_109;
static const short **g_238 = &g_239;
static int g_245 = 0xC3CA42F7L;
static int *g_255 = &g_49;
static int g_265 = 0xD50DD5D1L;
static int **g_271 = &g_113;
static char *g_286 = (void*)0;
static const char *g_310 = &g_43;
static char g_314 = 0x82L;
static char *g_313 = &g_314;
static unsigned short *g_330 = &g_84;
static int * const g_404 = &g_114;
static int g_407 = 0x25C51A13L;
static short ***g_415 = (void*)0;
static short ****g_484 = &g_415;
static short *****g_483 = &g_484;
static unsigned g_519 = 0UL;
static short **g_526 = (void*)0;
static short ***g_525 = &g_526;
static const char g_633 = 5L;
static unsigned char * const *g_671 = (void*)0;
static unsigned char *g_675 = &g_127;
static unsigned char **g_674 = &g_675;
static int g_681 = 5L;



static const int func_1(void);
static int * func_2(int * p_3, const int p_4);
static unsigned char func_11(unsigned char p_12, int p_13);
static unsigned char func_14(int * const p_15, int * p_16, unsigned p_17, unsigned p_18);
static unsigned func_29(unsigned p_30, short p_31, int * p_32, char p_33, int p_34);
static char func_36(unsigned p_37, int p_38);
static char func_55(short p_56, unsigned short p_57, const char * p_58, int * p_59);
static unsigned func_60(unsigned char p_61, const unsigned p_62, unsigned p_63);
static unsigned char func_64(int ** p_65, const unsigned p_66, unsigned p_67, int * p_68, const unsigned short p_69);
static int func_78(unsigned * p_79, unsigned short p_80, short p_81, const int p_82);
static const int func_1(void)
{
    const unsigned char l_773 = 0xC5L;
    (*g_271) = func_2(g_5, g_6);

    ;
    ;
    return l_773;
}







static int * func_2(int * p_3, const int p_4)
{
    short l_35 = 0x7F05L;
    int *l_615 = &g_407;
    short l_621 = 0x8794L;
    unsigned short *l_648 = &g_84;
    unsigned **l_686 = &g_167;
    unsigned ***l_685 = &l_686;
    const char *l_729 = &g_43;
    short *****l_745 = &g_484;
    if ((*g_5))
    {
        char l_44 = 0xABL;
        unsigned l_616 = 1UL;
        int *l_624 = &g_6;
        unsigned *l_642 = &g_46;
        short *****l_643 = &g_484;
        int *l_646 = &g_407;
        const unsigned short *l_647 = &g_84;
        int l_708 = 0L;
        for (g_6 = 0; (g_6 <= 3); g_6 = safe_add_func_int16_t_s_s(g_6, 1))
        {
            unsigned l_41 = 1UL;
            char *l_42 = &g_43;
            unsigned *l_45 = &g_46;
            int **l_625 = &g_255;
            int **l_626 = &l_615;
        }
        (*g_5) = ((safe_div_func_int8_t_s_s(((*g_313) = (((func_64(&l_624, g_633, (*l_615), p_3, (safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(p_4, (((((((g_74 , (*g_330)) | (((((*p_3) != ((*l_642) = (safe_rshift_func_uint16_t_u_u(p_4, 13)))) , &g_484) != l_643) && (*l_615))) || p_4) > (*g_330)) | (*l_624)) ^ (*g_330)) , (*l_624)))), 0xB72A41DEL)), (*p_3)))) && 0UL) | (*p_3)) > 0x82B0L)), (-7L))) > (*l_624));
        for (g_114 = 0; (g_114 >= (-17)); g_114 = safe_sub_func_int32_t_s_s(g_114, 6))
        {
            (*g_271) = (*g_271);
            (*g_271) = l_646;

            ;
            (*g_271) = (g_157 , (*g_271));
        }

        ;
        if (((*g_255) = (((*l_646) & (l_647 == l_648)) | (safe_mod_func_int8_t_s_s(((*g_404) > (safe_add_func_int8_t_s_s(func_55(p_4, p_4, &g_43, (*g_271)), 0UL))), g_74)))))
        {
            int l_657 = 5L;
            const char *l_660 = &g_633;
            int *l_664 = &g_407;
            short l_702 = 0xEE61L;
            (*p_3) = (*p_3);
            if (((*l_646) = ((*g_5) = (safe_lshift_func_int16_t_s_s(((*l_624) , (safe_add_func_int32_t_s_s((((p_4 >= l_657) , 0xEFL) , 0L), (safe_lshift_func_int16_t_s_s((((((*g_330) = (p_4 && ((g_49 | p_4) > (~(**g_238))))) , p_4) == l_657) , p_4), 12))))), (*l_615))))))
            {
                unsigned short l_663 = 0xF37CL;
                unsigned char *l_667 = &g_129;
                unsigned char **l_666 = &l_667;
                char l_687 = 0x7AL;
                int * const l_705 = (void*)0;
                (*g_271) = l_615;

                ;
                (*p_3) = func_55((*g_239), (*g_330), l_660, l_624);

                ;
                if (((*g_113) = func_78(l_615, (l_657 = ((((safe_mul_func_uint16_t_u_u(((*g_330) < (0xDE871720L || ((*l_642) = l_663))), (((p_4 , (~(*p_3))) == (252UL <= (!(((*g_313) = func_36(l_663, (*g_255))) , 1UL)))) > 0x62L))) <= g_129) , (*l_624)) , p_4)), (*g_239), l_663)))
                {
                    unsigned char *l_665 = &g_127;
                    unsigned char ***l_668 = &l_666;
                    p_3 = l_664;

                    ;
                    (*g_113) = func_36(((p_4 , 1UL) >= ((*g_404) = (p_4 | (~((*l_665) = g_6))))), (*p_3));
                    (*l_668) = l_666;
                    for (g_46 = (-14); (g_46 < 27); g_46 = safe_add_func_uint32_t_u_u(g_46, 1))
                    {
                        (*g_271) = l_624;
                    }
                }
                else
                {
                    unsigned char * const **l_672 = &g_671;
                    short *l_673 = &l_621;
                    unsigned short *l_680 = &g_157;
                    unsigned **l_684 = &l_642;
                    unsigned ***l_683 = &l_684;
                    const int l_701 = 0xD6F1E857L;
                    (*p_3) = ((65535UL && (((+((*g_313) = 0x6DL)) ^ (func_78(((*g_166) = p_3), func_36(g_46, (*g_5)), p_4, (((((*l_672) = g_671) == ((func_55(((*l_673) = (*l_615)), (*g_330), &g_43, (*g_271)) && p_4) , g_674)) ^ (**g_674)) ^ 0xEC94L)) , 0x90L)) & 0x17C6L)) <= (*l_624));

                    ;
                    if (((*l_664) = (func_55(((*l_673) = ((*l_646) = (0x6D55F53FL >= func_64((func_78(p_3, (*g_330), (safe_add_func_uint16_t_u_u((l_663 > (safe_sub_func_uint16_t_u_u(((*l_680) = l_663), p_4))), (*g_330))), l_663) , &g_113), p_4, (*l_664), p_3, p_4)))), g_245, l_660, &g_49) < g_681)))
                    {
                        unsigned l_682 = 0x75A12033L;
                        (*g_271) = &l_657;

                        ;
                        (*l_646) = l_682;
                        (*g_271) = p_3;

                        ;
                    }
                    else
                    {
                        (*g_271) = &l_657;

                        ;
                    }

                    ;
                    if ((((*l_683) = &g_167) != (((7L >= p_4) & ((*l_680) = ((((&g_166 != l_685) | ((l_663 ^ (((*l_664) , 1UL) < 0UL)) && 0x0AL)) & l_687) , 0x7156L))) , (void*)0)))
                    {
                        (*g_271) = p_3;

                        ;
                        (*g_271) = (*g_271);
                        (*g_113) = (*p_3);
                    }
                    else
                    {
                        int *l_703 = (void*)0;
                        unsigned *l_704 = &g_74;
                        (*g_404) = (~(safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((((*l_624) = ((*l_646) = (safe_lshift_func_int8_t_s_s(((func_64(&g_5, ((*l_704) = (((*l_642) = (safe_add_func_uint32_t_u_u((~(safe_unary_minus_func_uint8_t_u(((**g_674) = ((((*l_646) = p_4) , (((*g_313) = (safe_sub_func_uint16_t_u_u((*g_330), (*l_615)))) || (safe_add_func_int16_t_s_s(func_64(&p_3, (l_701 && ((((void*)0 == &p_3) || (p_4 && (*p_3))) , l_702)), (*l_615), l_703, (*g_330)), (-6L))))) , l_701))))), (*p_3)))) >= l_657)), l_701, p_3, p_4) , l_701) & l_701), p_4)))) , 0xF0726FF2L) > 0xF9DC8992L) , 0x3747L) >= 0x2B2BL), p_4)), 0xC5L)));

                        ;
                        (*l_615) = (p_4 , (*l_664));
                        l_664 = (*g_271);

                        ;
                        (*l_683) = &g_167;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (*g_113) = ((+p_4) != l_663);
            }
            else
            {
                unsigned *l_717 = (void*)0;
                int l_728 = (-7L);
                (*l_615) = (safe_sub_func_int8_t_s_s(1L, p_4));
                (*p_3) = ((safe_lshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(func_55((p_4 < (p_3 != l_717)), (((((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s((*p_3), (safe_mul_func_int16_t_s_s(((**g_238) >= ((*l_646) , ((((safe_lshift_func_int8_t_s_u(p_4, 6)) , (safe_mul_func_uint16_t_u_u(func_36(p_4, (*l_664)), p_4))) > 0xB2A21D33L) | p_4))), l_728)))), (*p_3))) > 0L) != l_728) == 0xFCL) ^ p_4), l_729, &l_657), p_4)) , 1L), p_4)) != (*l_664));

                ;
                (*l_646) = (*g_404);
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            return (*g_271);


        }

        ;

        ;
    }
    else
    {
        int l_730 = (-9L);
        (*p_3) = func_36(l_730, (((((safe_add_func_int32_t_s_s(((0xC8L == (((func_11((**g_674), (*p_3)) != 0x9CE2L) != 1L) && l_730)) > p_4), 0xC9266996L)) | l_730) > 7UL) , g_43) , (*l_615)));


        (*g_271) = p_3;

        ;
        (*p_3) = (*p_3);
        for (g_681 = 0; (g_681 > 3); ++g_681)
        {
            char l_746 = 7L;
            unsigned char **l_769 = &g_675;
            int l_770 = (-1L);
            char ***l_771 = (void*)0;
            char **l_772 = &g_286;
        }
    }

    ;

    ;
    return p_3;


}







static unsigned char func_11(unsigned char p_12, int p_13)
{
    char **l_521 = &g_286;
    short * const **l_524 = (void*)0;
    short ***l_527 = &g_526;
    unsigned *l_534 = &g_46;
    int l_535 = 0L;
    int l_550 = 1L;
    unsigned char l_599 = 0x98L;
    unsigned char l_610 = 0UL;
    (*g_271) = (((l_521 = l_521) != ((safe_mul_func_uint8_t_u_u(((p_13 & (l_524 == (p_12 , (l_527 = g_525)))) , ((!(safe_mul_func_int8_t_s_s(((6L >= (p_13 || (g_84 < (((safe_div_func_uint16_t_u_u(func_78(l_534, l_535, l_535, l_535), (-5L))) == l_535) == p_13)))) <= 0x41L), p_12))) || l_535)), p_13)) , &g_286)) , &l_535);

    ;
    if (((l_550 = (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_div_func_int8_t_s_s((l_535 = (safe_add_func_uint16_t_u_u(((*g_330) = ((l_535 == p_12) , (*g_330))), p_13))), l_550)) || l_550), 0x458A6F3EL)), l_550))) == 0x7B3EL))
    {
        int l_552 = 6L;
        int *l_553 = &g_265;
        unsigned char l_562 = 0xEBL;
        (**g_271) = (safe_unary_minus_func_uint16_t_u(l_552));
        l_553 = &p_13;

        ;
        for (g_84 = 0; (g_84 > 48); g_84 = safe_add_func_uint8_t_u_u(g_84, 5))
        {
            unsigned **l_565 = &l_534;
            unsigned ***l_566 = &l_565;
            int l_573 = (-1L);
            unsigned char **l_576 = (void*)0;
            for (g_49 = 0; (g_49 <= (-28)); g_49--)
            {
                (*g_271) = (*g_271);
            }
            if ((safe_mod_func_int8_t_s_s(((((safe_add_func_int8_t_s_s(p_12, l_573)) , l_573) | p_13) < l_535), 0xDEL)))
            {
                for (g_114 = 0; (g_114 < (-1)); --g_114)
                {
                    unsigned char ***l_577 = &l_576;
                    (*l_577) = l_576;
                    return g_407;


                }
            }
            else
            {
                unsigned char *l_578 = &g_129;
                int l_579 = 0L;
                (**g_271) = (*g_113);
                (*g_404) = (((void*)0 != (*g_483)) < ((&g_129 == (l_578 = &p_12)) , l_579));

                ;
            }
        }
    }
    else
    {
        unsigned l_582 = 0x3D1CE45BL;
        unsigned *l_587 = &g_74;
        int l_589 = (-1L);
        char l_590 = 1L;
        int l_602 = 0xE3570C58L;
        unsigned char *l_603 = &g_127;
        unsigned char *l_604 = &g_129;
        unsigned char l_605 = 0xC7L;
        unsigned short l_606 = 0xB215L;
        short *l_607 = &g_161;
        l_590 = ((*g_404) = ((safe_rshift_func_int16_t_s_s(((((l_582 | ((safe_sub_func_int16_t_s_s(p_12, (*g_330))) | p_13)) , p_13) || (l_535 || ((((safe_mul_func_int16_t_s_s(func_78(l_587, ((safe_unary_minus_func_int32_t_s((p_13 & p_13))) , (*g_330)), l_589, l_535), 0x9DB7L)) , p_12) && 0x02BCL) < p_12))) != 0UL), 5)) , p_12));
        (**g_271) = (safe_add_func_int32_t_s_s(p_12, (((((*l_604) = ((*l_603) = (safe_rshift_func_uint8_t_u_u(((*g_310) ^ l_550), (l_602 = (safe_sub_func_int16_t_s_s(((l_550 & ((safe_sub_func_uint8_t_u_u(((p_12 & p_12) > (l_599 = p_12)), (safe_mul_func_int8_t_s_s(((*g_271) == &p_13), 0xF5L)))) > l_589)) == l_602), p_12))))))) ^ p_12) , l_582) >= p_13)));
        (*g_271) = (*g_271);
        if (((l_605 > ((((((func_55(((*l_607) = l_606), l_605, (*l_521), &l_535) , &l_534) == &l_587) , ((safe_add_func_int32_t_s_s((((*g_113) = l_610) > l_582), p_12)) == (*g_330))) < 0x3AA2L) & 65527UL) <= l_606)) && l_582))
        {
            return l_590;


        }
        else
        {
            int *l_613 = &g_114;
            for (g_49 = 0; (g_49 < 20); g_49 = safe_add_func_uint16_t_u_u(g_49, 7))
            {
                (*g_271) = l_613;

                ;
            }

            ;
        }

        ;
    }

    ;
    return g_111;


}







static unsigned char func_14(int * const p_15, int * p_16, unsigned p_17, unsigned p_18)
{
    short l_405 = (-5L);
    unsigned char *l_412 = &g_129;
    short *l_421 = &g_109;
    short * const *l_420 = &l_421;
    short * const **l_419 = &l_420;
    short * const ***l_418 = &l_419;
    short ****l_472 = &g_415;
    const int *l_490 = &g_265;
    int **l_520 = &g_5;
    l_405 = 4L;
    if (l_405)
    {
        const unsigned short l_406 = 0x18DAL;
        const int *l_413 = &g_265;
        int l_414 = 0x69CEDF13L;
        short **l_429 = &l_421;
        const char *l_440 = &g_43;
        short ****l_474 = &g_415;
        unsigned l_475 = 0xDD8542FDL;
        unsigned l_499 = 4294967295UL;
        if ((l_414 = ((0x44951B01L | ((((**g_238) < (l_406 != (p_18 < 0x26L))) >= (((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*g_330) = ((((((void*)0 == l_412) & p_18) , l_406) != (-1L)) , 0x9318L)), l_406)), 1)) , p_16) == l_413)) || (*l_413))) , (*p_16))))
        {
            short ****l_416 = &g_415;
            char l_417 = 0L;
            int **l_460 = &g_255;
            if ((((((*g_313) = (-1L)) != (((*l_416) = g_415) != ((l_417 && ((((void*)0 == l_418) , ((l_405 && (((*l_413) <= 0x0B847E4AL) <= p_17)) >= g_265)) < l_417)) , (*l_418)))) , &g_239) != l_429))
            {
                char *l_438 = &g_43;
                (*g_404) = (safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_412) = l_417), 2)), (((*g_310) , ((!0L) , p_17)) ^ ((void*)0 == l_438)))), l_405)), ((l_417 && ((0x7417L != l_405) , l_405)) , l_417)));
            }
            else
            {
                unsigned l_439 = 0UL;
                int *l_452 = &g_49;
                if (func_55(l_439, l_405, l_440, p_16))
                {
                    unsigned short l_441 = 0x5849L;
                    int l_451 = 0xB5793460L;
                    if ((l_441 , (safe_mul_func_int8_t_s_s(0L, 2UL))))
                    {
                        int l_444 = 7L;
                        unsigned *l_450 = &g_74;
                        l_451 = ((!l_444) & ((*l_413) , ((safe_lshift_func_uint16_t_u_s(p_18, 11)) >= (safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(((*l_450) = (p_18 != p_17)))), 1)))));
                        (*g_271) = l_452;

                        ;
                        (*g_271) = &l_451;

                        ;
                    }
                    else
                    {
                        (*g_271) = (*g_271);
                        (*g_404) = (**g_271);
                    }

                    ;
                    if (((*p_15) ^ (*l_413)))
                    {
                        short l_455 = 1L;
                        (*l_452) = ((*g_404) = (safe_add_func_uint16_t_u_u(l_455, 0UL)));
                    }
                    else
                    {
                        return g_129;


                    }
                }
                else
                {
                    unsigned *l_459 = &g_74;
                    (*p_15) = (safe_div_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((*g_239))), ((*l_459) = p_18)));
                }


                return l_417;
            }
            (*l_460) = p_15;


        }
        else
        {
            int l_465 = 6L;
            short *****l_473 = &l_472;
            int *l_478 = &g_49;
            (*g_404) = ((safe_add_func_int32_t_s_s(((!(safe_mul_func_int8_t_s_s((((*l_413) >= (*g_310)) , (g_314 == (~p_17))), l_475))) , 0x753B3827L), 0UL)) , l_465);
            for (g_157 = (-3); (g_157 >= 47); g_157 = safe_add_func_int32_t_s_s(g_157, 6))
            {
                short l_487 = 0xF90EL;
                unsigned char l_488 = 4UL;
                l_413 = l_478;

                ;
            }

            ;
            return p_17;
        }


    }
    else
    {
        unsigned l_513 = 4294967289UL;
        int **l_514 = &g_255;
        for (p_18 = (-20); (p_18 <= 5); ++p_18)
        {
            const int l_515 = 0xC9231B19L;
            unsigned *l_516 = &g_111;
            unsigned *l_517 = (void*)0;
            unsigned *l_518 = &g_519;
            (*p_15) = (*p_16);
            (*g_404) = (((safe_add_func_int32_t_s_s(func_55(l_513, (((&p_16 != (l_520 = (g_519 , (void*)0))) == (-2L)) && p_18), l_412, p_16), 1UL)) == 9L) , (*l_490));

            ;
            ;
        }

        ;
    }


    ;
    return g_127;
}







static unsigned func_29(unsigned p_30, short p_31, int * p_32, char p_33, int p_34)
{
    unsigned l_54 = 0x42E5F0E7L;
    unsigned l_72 = 0x61CD5CCFL;
    unsigned *l_73 = &g_74;
    unsigned char *l_130 = &g_129;
    char *l_137 = &g_43;
    int l_138 = 0xE2876691L;
    unsigned char l_139 = 0x34L;
    const unsigned short l_144 = 5UL;
    unsigned short *l_145 = &g_84;
    unsigned *l_147 = &l_54;
    unsigned **l_146 = &l_147;
    unsigned *l_149 = (void*)0;
    unsigned **l_148 = &l_149;
    char l_170 = (-1L);
    unsigned l_190 = 0x54C8FCCFL;
    int * const l_194 = (void*)0;
    unsigned ***l_216 = &l_146;
    unsigned char l_217 = 255UL;
    char l_246 = 0x35L;
    const int l_309 = (-1L);
    int l_343 = 0x31FFB441L;
    unsigned short l_366 = 65530UL;
    l_139 = ((safe_mul_func_uint8_t_u_u(func_36(func_36((safe_mul_func_int16_t_s_s(l_54, l_54)), (*p_32)), (*p_32)), (l_138 = ((*l_137) = func_55(g_46, (func_60(((*l_130) = func_64((((*l_73) = (safe_add_func_int8_t_s_s((g_43 & (l_72 & 0UL)), g_43))) , &p_32), p_34, p_30, &g_6, l_72)), l_72, p_34) , g_74), &g_43, l_73))))) , 2L);

    ;
    if (((l_73 = &g_46) == ((*l_148) = ((((((1UL != (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((252UL >= l_144), ((*l_145) = 65535UL))), (&g_74 == ((*l_146) = &l_54))))) , p_34) && p_33) , (void*)0) == &l_144) , (void*)0))))
    {
        (*g_113) = (*g_113);
        return p_31;
    }
    else
    {
        int l_154 = 0x4446D154L;
        unsigned l_155 = 4294967287UL;
        unsigned short *l_156 = &g_157;
        const unsigned *l_165 = &l_54;
        const unsigned **l_164 = &l_165;
        unsigned short l_181 = 65535UL;
        int l_236 = 0x6A2FA35CL;
        unsigned l_266 = 8UL;
        if (func_36((safe_add_func_int8_t_s_s(func_78(&g_74, (safe_mul_func_int8_t_s_s(3L, ((*l_137) = l_154))), l_155, l_154), func_55(p_30, ((*l_156) = p_30), l_130, &g_114))), (*g_5)))
        {
            short *l_160 = &g_161;
            int l_176 = 8L;
            unsigned char l_187 = 255UL;
            unsigned *l_208 = &g_74;
            l_154 = ((*g_113) = (+(((*g_113) , (safe_add_func_uint16_t_u_u(g_109, ((*l_160) = l_138)))) && (((safe_mul_func_int16_t_s_s(p_31, g_43)) , l_164) == g_166))));
            if ((*p_32))
            {
                short l_186 = 4L;
                int *l_188 = (void*)0;
                int *l_189 = &l_138;
                unsigned ***l_193 = &l_148;
                (*l_189) = (safe_add_func_int32_t_s_s((l_176 = (((l_170 >= ((func_64(&g_5, (safe_rshift_func_uint16_t_u_s(p_31, 8)), (((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(l_176)), (safe_mul_func_uint8_t_u_u(((((((((safe_rshift_func_int16_t_s_s(((l_181 >= ((l_155 > (&g_49 != &g_49)) & (safe_lshift_func_uint16_t_u_s((l_181 < (*p_32)), 13)))) > p_31), 8)) || p_33) , 0x974AA164L) , g_129) >= 1L) || l_186) >= 0xFDL) != (*g_113)), 0xD6L)))) ^ l_187) , p_33), &g_49, g_74) >= (*p_32)) != g_6)) != g_46) > g_49)), 0x12A740B1L));
                if ((p_30 | ((((g_74 , l_190) != (safe_mul_func_uint16_t_u_u((p_33 & ((p_34 == ((g_111 , func_55(g_109, ((((*l_193) = &l_147) != (void*)0) >= 4L), &g_43, &g_6)) & p_30)) <= p_34)), p_31))) && p_30) > 0x8DCFL)))
                {
                    int **l_195 = &g_113;
                    (*l_195) = l_194;

                    ;
                }
                else
                {
                    int *l_196 = &l_138;
                    int **l_200 = &g_113;
                    unsigned short * const l_203 = &g_84;
                    if ((*g_113))
                    {
                        int **l_197 = (void*)0;
                        int **l_198 = &l_196;
                        (*l_189) = (l_145 == (void*)0);
                        (*l_198) = l_196;
                    }
                    else
                    {
                        int **l_199 = (void*)0;
                        (*l_196) = 0L;
                        p_32 = &p_34;

                        ;
                    }

                    ;
                    (*l_200) = &p_34;

                    ;
                    for (p_30 = 0; (p_30 >= 24); p_30 = safe_add_func_int8_t_s_s(p_30, 5))
                    {
                        (*g_113) = ((l_203 == &g_84) , (*l_196));
                        return g_157;


                    }
                }

                ;
                ;
                ;
                return p_33;


            }
            else
            {
                int *l_218 = &g_114;
                (*l_218) = (0x7CL & (safe_mul_func_uint8_t_u_u(p_30, ((safe_lshift_func_int16_t_s_s((l_208 == &p_30), func_36(((**l_146) = (safe_unary_minus_func_uint8_t_u(0UL))), l_155))) <= func_64(&g_5, (safe_sub_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_s(((*l_137) = func_55((l_154 = ((safe_mod_func_int16_t_s_s(((*l_160) = (l_216 == &l_164)), g_46)) , 1L)), l_181, &g_43, &l_138)), g_84)) != p_30) < 0x5BL) < (*g_5)), 3UL)), l_217, &g_6, g_46)))));

                ;
            }

            ;
            for (l_187 = 23; (l_187 >= 51); ++l_187)
            {
                for (g_111 = (-29); (g_111 >= 24); g_111 = safe_add_func_uint8_t_u_u(g_111, 7))
                {
                    return l_170;


                }
            }
        }
        else
        {
            int *l_223 = &g_114;
            int **l_224 = &g_5;
            (*l_224) = l_223;

            ;
        }

        ;
        ;
        if ((*g_5))
        {
            int **l_225 = (void*)0;
            int **l_226 = (void*)0;
            int **l_227 = &g_113;
            (*l_227) = &p_34;

            ;
            (*g_113) = (safe_div_func_uint16_t_u_u(g_111, p_31));
        }
        else
        {
            int **l_230 = (void*)0;
            int **l_231 = &g_5;
            (*l_231) = &g_6;

            ;
        }

        ;
        if (func_60(p_33, ((g_6 < 0x3108L) , 0x2CF90074L), ((safe_mod_func_int32_t_s_s((l_138 = (p_30 <= ((*l_130) = ((g_43 , &l_165) != (*l_216))))), 0xF73C685EL)) <= 0xE06F248DL)))
        {
            int **l_237 = &g_5;
            const short ***l_240 = &g_238;
            (*l_237) = ((l_236 | ((*l_73) = (&g_114 != (void*)0))) , &p_34);

            ;
            (*l_240) = g_238;
        }
        else
        {
            unsigned short *l_241 = &g_84;
            int l_242 = 0xBBEFFA24L;
            int *l_280 = (void*)0;
            int l_297 = (-9L);
            char *l_312 = &g_43;
            p_32 = ((((l_145 = l_241) == (void*)0) < ((*g_113) = (((l_242 , (0xC2F5L && ((((safe_add_func_int8_t_s_s((func_78(&p_30, g_245, (l_246 = l_154), ((safe_mul_func_int16_t_s_s(l_242, (g_157 = ((!p_33) , g_129)))) < g_43)) < 65535UL), 0xECL)) ^ (*g_113)) >= l_242) , 0x7004L))) > l_181) < 0x9479A416L))) , (void*)0);

            ;
            if ((p_30 >= g_245))
            {
                short *l_258 = &g_161;
                int l_267 = 1L;
                int l_268 = 1L;
                g_255 = &p_34;

                ;
                if ((((*g_255) = (((*l_258) = ((**g_238) && ((-1L) == l_242))) < p_30)) | (safe_lshift_func_uint16_t_u_u((((((safe_mul_func_uint8_t_u_u(l_154, ((((safe_add_func_uint8_t_u_u(func_36(l_181, g_265), l_266)) | p_33) , 0xE1L) > p_31))) != l_267) ^ l_242) || l_268) > l_266), l_242))))
                {
                    int l_278 = 0x6D840334L;
                    unsigned char l_279 = 1UL;
                    char *l_287 = &g_43;
                    for (g_245 = 0; (g_245 >= 24); ++g_245)
                    {
                        unsigned l_281 = 7UL;
                        (*g_255) = func_64(g_271, (p_33 , func_60(((*l_130) = ((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((l_267 & 0x61L), (safe_div_func_int16_t_s_s((*g_239), p_30)))), ((p_30 >= p_30) , l_278))) >= l_279)), l_267, p_33)), p_34, l_280, p_30);
                        (*g_271) = &p_34;

                        ;
                        (*g_255) = (((g_129 , l_281) & ((func_36((((*g_239) , l_268) || (-1L)), (*g_5)) & ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((g_286 = (void*)0) == l_287), g_6)), 11)) <= 8L)) ^ 0x3371L)) , (*g_255));
                        p_34 = (*g_5);
                    }
                    (*g_271) = (*g_271);
                }
                else
                {
                    unsigned char *l_294 = &g_127;
                    const int l_295 = 0xB8725458L;
                    int l_296 = 5L;
                    unsigned short *l_301 = &g_84;
                    l_297 = (l_154 = (0UL || ((l_296 = ((safe_sub_func_int8_t_s_s((((-1L) || ((*g_113) = ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(func_78((((((*l_130) = g_245) ^ ((*l_294) = func_78((**l_216), g_127, (p_31 = (**g_238)), ((**g_238) && l_267)))) == p_30) , &p_30), g_84, p_34, l_295), g_46)), 7)) < p_34))) != g_43), 3UL)) != (-1L))) != p_33)));
                    for (l_246 = 6; (l_246 < 3); l_246 = safe_sub_func_int16_t_s_s(l_246, 6))
                    {
                        unsigned short *l_300 = &g_157;
                        unsigned *l_306 = &g_74;
                        int l_311 = 0x72F53F70L;
                        (*g_255) = ((((l_300 == l_301) , &p_33) != (g_313 = ((p_33 | (g_43 = func_60(((func_36((!func_55((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((((g_74 , ((**l_216) = l_306)) != (*g_166)) , (safe_mod_func_int8_t_s_s(0x3DL, l_170))) , p_31), l_309)), p_30)), g_111, g_310, (*g_271))), l_311) >= (*g_239)) | 0L), p_30, l_155))) , l_312))) & p_34);

                        ;
                        ;
                        if ((*g_113))
                            break;
                    }

                    ;
                    ;
                }

                ;
                ;
            }
            else
            {
                int **l_315 = &l_280;
                short *l_322 = (void*)0;
                short *l_323 = &g_109;
                unsigned short l_341 = 0xA888L;
                int l_342 = 0xCEB0BC73L;
                (*g_271) = &l_297;

                ;
                (*l_315) = ((*g_271) = &l_297);

                ;
                (*l_315) = &p_34;

                ;
                if ((safe_sub_func_uint8_t_u_u((!func_64(l_315, l_266, p_30, (*l_315), (safe_add_func_uint8_t_u_u((**l_315), func_55(((*l_323) = (safe_sub_func_uint16_t_u_u((func_60(func_60(func_60(g_157, (((l_137 = &g_43) == &g_43) > p_30), (*l_280)), p_31, (**l_315)), p_34, p_30) == g_265), l_266))), g_6, &g_314, (*l_315)))))), (*g_310))))
                {
                    (*g_271) = &l_297;

                    ;
                }
                else
                {
                    int l_326 = 0xBC78CB2DL;
                    unsigned *l_329 = &l_266;
                    short l_344 = 8L;
                    (*l_280) = (safe_add_func_int8_t_s_s((2L && ((&l_323 == &g_239) <= l_326)), ((*l_312) = (safe_lshift_func_int8_t_s_u(((l_181 || func_78(((*l_148) = l_329), g_43, (**g_238), (g_330 == (void*)0))) == 0L), 6)))));

                    ;
                    for (l_139 = 0; (l_139 > 16); l_139++)
                    {
                        short **l_340 = &l_323;
                        short ** const *l_339 = &l_340;
                        (*l_315) = &p_34;
                        (**l_315) = (func_55((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((func_55((safe_mul_func_uint16_t_u_u(((void*)0 != l_339), (p_33 , p_31))), ((*l_145) = (*g_330)), l_312, ((0L <= ((((**l_315) ^ (l_341 || 2L)) , (void*)0) == &g_314)) , (*g_271))) >= 0x95DC2F38L) || (**l_315)), 0xF7L)), 8)), l_342, &g_43, &l_297) >= (**l_315));

                        ;
                    }

                    ;
                    (*g_113) = l_343;
                    l_344 = p_30;
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
            (*g_271) = &p_34;

            ;
            return g_109;



        }

        ;
        (*g_255) = (*p_32);
    }

    ;
    ;
    ;
    for (g_111 = 0; (g_111 > 50); g_111++)
    {
        int l_351 = 0x6FA8E486L;
        unsigned *l_358 = &l_54;
        int l_365 = 0x81E34F48L;
        int l_367 = 0xC397BB7FL;
        int l_372 = 0x3FAABD57L;
        char ** const l_382 = (void*)0;
        if ((((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(((!p_33) >= (l_351 | (((safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s((((*l_137) = ((safe_rshift_func_int8_t_s_u((((void*)0 == &g_286) >= ((((g_129 , (*g_113)) ^ (((*g_330) = func_78(l_358, (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(((((func_36(g_157, (p_34 , 4L)) == l_351) <= l_365) || p_30) | 65534UL), (*g_330))) == 0L), (*g_330))), p_33)), p_34, (*p_32))) == p_30)) || l_366) , 4L)), p_33)) ^ (-1L))) == l_351), p_30)), (-6L))) , p_33) && p_31))), (*p_32))) , 4294967295UL), l_367)) , 0x7041L) != p_34))
        {
            const unsigned short l_379 = 65529UL;
            (*g_255) = (+(*g_255));
            (*g_255) = (safe_sub_func_int32_t_s_s(((*g_239) && (safe_mul_func_uint8_t_u_u(l_372, g_265))), ((0xDCA199E2L >= ((**g_271) = (**g_271))) == (((l_372 ^ (safe_sub_func_int16_t_s_s(l_372, (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(l_365, l_379)) != l_379), p_31))))) , p_33) > p_31))));
            (*g_271) = &p_34;

            ;
        }
        else
        {
            unsigned l_393 = 0x7976AB2EL;
            if (((g_46 , ((*g_330) = (safe_sub_func_uint32_t_u_u(((*g_5) || (l_382 == &l_137)), (((+(((safe_sub_func_int8_t_s_s((0x79CFL | (safe_div_func_int16_t_s_s(p_31, 0x283CL))), p_34)) , 1UL) == l_351)) , 1L) || 0x44L))))) , (*p_32)))
            {
                const char *l_401 = (void*)0;
                (*g_5) = (func_55(p_34, (((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((((func_78(&l_393, l_393, (((**g_238) != l_393) , (safe_mul_func_uint16_t_u_u(((l_393 , (safe_lshift_func_int8_t_s_u((*g_313), 6))) ^ (p_34 && (&p_34 != &p_34))), 65535UL))), (*p_32)) >= 0xE6BF6D66L) <= (*g_255)) == l_365))) , l_393), g_265)) & 0L) , l_393), l_401, (*g_271)) , l_393);
            }
            else
            {
                (**g_271) = (*p_32);
                (*g_5) = (safe_lshift_func_int8_t_s_u(l_393, 0));
            }
            p_32 = &p_34;

            ;
            l_372 = func_55((**g_238), l_393, &g_43, &p_34);

            ;
            (*g_5) = 1L;
        }

        ;
    }

    ;
    return p_34;



}







static char func_36(unsigned p_37, int p_38)
{
    int **l_47 = (void*)0;
    int *l_48 = &g_49;
    l_47 = (void*)0;
    (*l_48) = p_38;
    (*l_48) = (*g_5);
    return g_6;
}







static char func_55(short p_56, unsigned short p_57, const char * p_58, int * p_59)
{
    unsigned char l_136 = 250UL;
    g_113 = p_59;


    return l_136;
}







static unsigned func_60(unsigned char p_61, const unsigned p_62, unsigned p_63)
{
    int **l_131 = &g_5;
    const int l_132 = 0x349BA410L;
    const int l_133 = 0L;
    char l_134 = 0x26L;
    int *l_135 = &g_114;
    (*l_135) = (((l_131 != (l_132 , l_131)) != func_64(&g_5, l_133, l_134, &g_6, p_61)) , (**l_131));
    return (**l_131);
}







static unsigned char func_64(int ** p_65, const unsigned p_66, unsigned p_67, int * p_68, const unsigned short p_69)
{
    char *l_76 = &g_43;
    char **l_75 = &l_76;
    char *l_77 = &g_43;
    int *l_112 = (void*)0;
    int **l_115 = &g_113;
    short *l_124 = (void*)0;
    short *l_125 = &g_109;
    unsigned char *l_126 = &g_127;
    unsigned char *l_128 = &g_129;
    if ((((*l_75) = (void*)0) != l_77))
    {
        unsigned short *l_83 = &g_84;
        int l_85 = 0x78404D08L;
        char *l_86 = &g_43;
        int *l_88 = &l_85;
        int **l_87 = &l_88;
        g_111 = func_78(&g_46, ((*l_83) = 0x2842L), (l_85 ^ (((*l_75) = l_86) != l_86)), (((*l_87) = (*p_65)) != &g_6));

        ;

    }
    else
    {
        return g_46;
    }
    g_113 = l_112;

    ;
    (*l_115) = &g_114;

    ;
    (**l_115) = ((**l_115) != (4294967295UL == func_78(&g_74, (((*l_126) = func_78(&g_46, p_66, (&l_112 != (((*l_128) = ((!(safe_mul_func_uint8_t_u_u(((*l_126) = (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(p_69, 4)), (2L == ((*l_125) = g_46)))), p_69))), p_69))) ^ 0x0CFAL)) , &g_5)), (**l_115))) , p_69), (**l_115), (**l_115))));
    return p_69;
}







static int func_78(unsigned * p_79, unsigned short p_80, short p_81, const int p_82)
{
    char l_104 = 1L;
    unsigned *l_107 = &g_74;
    short *l_108 = &g_109;
    int l_110 = 0x96D6318EL;
    for (p_80 = (-16); (p_80 > 17); p_80 = safe_add_func_int16_t_s_s(p_80, 7))
    {
        int **l_91 = (void*)0;
        int *l_93 = &g_6;
        int **l_92 = &l_93;
        (*l_92) = &g_6;
    }
    l_110 = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((g_74 && ((safe_mod_func_int8_t_s_s((((g_84 > g_6) <= 0xF1D91A4AL) <= ((*l_108) = (((safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(l_104, ((((*l_107) = ((g_84 && (safe_mul_func_int16_t_s_s(g_46, (((-2L) & (*p_79)) , l_104)))) & g_84)) != g_84) && (*p_79)))), l_104)) , 0x03EB41E2L) != (-8L)))), g_43)) , l_104)) ^ l_104), 0x90EB022BL)), 6));
    return p_81;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
