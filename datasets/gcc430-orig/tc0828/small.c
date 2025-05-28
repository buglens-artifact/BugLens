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



static unsigned short g_2 = 1UL;
static int g_4 = 0x3C7730F9L;
static short g_27 = 1L;
static short g_29 = (-1L);
static int g_45 = 0xE511BD77L;
static char g_56 = (-9L);
static unsigned short g_73 = 65535UL;
static int *g_140 = &g_45;
static int g_160 = 0xC440229AL;
static unsigned char g_162 = 0x00L;
static unsigned char g_180 = 0x9CL;
static unsigned g_197 = 0UL;
static short g_208 = 0x7086L;
static unsigned short g_267 = 0xC95AL;
static char *g_280 = &g_56;
static char **g_279 = &g_280;
static char ***g_278 = &g_279;
static int **g_419 = &g_140;
static int ***g_418 = &g_419;
static int g_434 = 1L;
static unsigned short *g_443 = &g_2;
static unsigned short **g_442 = &g_443;
static char g_446 = 0xADL;
static char *g_568 = &g_446;
static char **g_567 = &g_568;
static short g_652 = (-1L);
static char *****g_667 = (void*)0;
static unsigned g_862 = 0x66BE8752L;
static unsigned char *g_919 = &g_162;
static unsigned char **g_918 = &g_919;
static unsigned char ***g_917 = &g_918;



static unsigned char func_1(void);
static unsigned short func_9(unsigned char p_10, int p_11, int * p_12);
static unsigned char func_17(int * p_18, int * p_19);
static short func_34(int * p_35, int * p_36, int * p_37);
static int * func_38(unsigned char p_39, int * p_40, unsigned p_41, unsigned char p_42, int p_43);
static int * func_57(short p_58, unsigned char p_59, unsigned short p_60, unsigned char p_61);
static int func_62(short p_63, char * p_64, short p_65, short p_66);
static unsigned func_74(int * p_75, char * p_76, int p_77, unsigned p_78, unsigned p_79);
static char * func_81(short p_82, unsigned p_83, unsigned short * p_84);
static unsigned short * func_85(unsigned short * p_86);
static unsigned char func_1(void)
{
    int *l_3 = &g_4;
    int l_610 = 1L;
    short l_625 = (-9L);
    char *l_649 = &g_446;
    int *l_673 = &l_610;
    int *l_687 = &g_45;
    unsigned short *l_776 = &g_73;
    int *l_788 = &g_160;
    unsigned l_861 = 1UL;
    short **l_888 = (void*)0;
    (*l_3) = g_2;
    if (((safe_sub_func_int32_t_s_s((&g_4 != (void*)0), (safe_mul_func_int16_t_s_s((l_3 != &g_4), (((**g_442) = func_9((*l_3), (0xE7B79F6AL != (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(func_17(l_3, &g_4), 5)), 0x3091L))), &g_4)) != l_610))))) | (-1L)))
    {
        short l_621 = 0x0C93L;
        char ***l_622 = &g_279;
        unsigned l_653 = 0x6885D054L;
        int *l_664 = &g_45;
        int l_676 = 0x6073A5E5L;
        unsigned short **l_759 = &g_443;
        int *l_796 = &l_610;
        unsigned short l_798 = 0x93A2L;
        int *l_817 = &g_160;
        if (((**g_419) = (((safe_div_func_int32_t_s_s((func_74(&l_610, (**g_278), (g_56 < g_446), (g_73 , (+(g_2 , ((g_162 , ((***g_418) <= (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((*l_3), l_621)), 6)), 1L)) & (***g_278)), (*l_3))))) >= 0x16E8C024L)))), g_180) , 0x254A12D0L), (*l_3))) && l_621) != (**g_442))))
        {
            char ****l_640 = &l_622;
            int l_641 = 0x877D466FL;
            int l_688 = 0xDD7976C7L;
            int *l_724 = &g_4;
            int l_750 = 0L;
            if (func_62(g_4, (*g_567), (((+(&g_279 != l_622)) != ((*l_3) || (safe_sub_func_uint32_t_u_u(0xA38E3547L, (*l_3))))) ^ (((*g_443) = ((**g_442) & (*g_443))) > 0x6C6DL)), l_625))
            {
                unsigned *l_638 = (void*)0;
                unsigned *l_639 = &g_197;
                char **l_646 = (void*)0;
                char *l_648 = (void*)0;
                char **l_647 = &l_648;
                int l_650 = 0xCF3344FEL;
                short *l_651 = &g_27;
                int *l_654 = &g_45;
                (*l_3) = ((safe_mod_func_uint16_t_u_u(((0x3B13L && ((g_208 , ((safe_add_func_int32_t_s_s((&g_278 == (((((*l_639) = (((void*)0 == &g_29) ^ (((safe_lshift_func_uint8_t_u_u(g_446, 7)) , (safe_lshift_func_int8_t_s_u((!(*l_3)), (safe_add_func_int32_t_s_s(((*g_567) != (*g_567)), (*l_3)))))) , 1L))) , l_3) != &g_434) , l_640)), l_641)) && g_160)) != 0xE248D668L)) | (**g_567)), 0x4F3FL)) , l_621);
                (*l_654) = (safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((0x05E6L && (((*l_3) = func_62((func_62((((*l_647) = ((*g_567) = ((**l_622) = (*g_567)))) == l_649), l_649, ((*l_651) = (l_650 >= ((*l_3) ^ (l_650 > (((-10L) & l_621) < 0xBFL))))), g_652) > l_621), l_649, l_653, g_2)) , l_650)), l_653)), 0x47A0BBB9L));
            }
            else
            {
                int *l_663 = &l_641;
                unsigned char *l_672 = &g_180;
                unsigned short **l_686 = &g_443;
                unsigned short l_695 = 0x6F59L;
                int *l_725 = &g_160;
                unsigned char l_735 = 0x4BL;
                int l_789 = 3L;
                unsigned short l_815 = 0UL;
                if ((((((safe_rshift_func_int16_t_s_s((0xA7L | ((safe_mul_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((func_74(((3L <= ((safe_div_func_int8_t_s_s((l_663 == l_664), (+((safe_rshift_func_int16_t_s_s(((((void*)0 == &g_197) , g_667) != (void*)0), 12)) , ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_672) = (g_667 == &l_640)), 3)), g_4)) , (-1L)))))) > 0x3FL)) , l_673), l_672, (*l_663), (*l_664), (*l_664)) | 0x30E7815AL), 0x6A877772L)) || g_56) != l_641), 0x59L)) >= 0x7C12L)), g_197)) , g_162) , &g_434) != (void*)0) > 1L))
                {
                    unsigned char l_677 = 1UL;
                    if (((((((l_676 != ((l_677 , func_34(l_663, ((l_641 || (((safe_lshift_func_uint16_t_u_u(((((1L && g_29) <= (((*l_664) != (safe_div_func_uint16_t_u_u(0x7B4BL, (safe_mul_func_uint8_t_u_u(func_34(l_664, &l_610, &l_641), (*g_280)))))) , (*l_663))) , l_641) > l_677), (*l_663))) , (**g_442)) , g_45)) , l_663), (*g_419))) <= g_160)) && (*g_443)) , 254UL) & 1L) == g_208) < 0xC2L))
                    {
                        (*l_664) = l_677;
                        (**g_418) = (void*)0;
                    }
                    else
                    {
                        (*g_419) = (**g_418);
                        l_641 = (*l_663);
                        (*l_664) = (*l_673);
                    }
                    (*l_673) = ((void*)0 != l_663);
                    (*l_664) = l_641;
                }
                else
                {
                    int l_698 = 0xDA413857L;
                    int l_699 = 0L;
                    int l_755 = 0L;
                    for (l_610 = 12; (l_610 < (-3)); l_610--)
                    {
                        int **l_689 = (void*)0;
                        int **l_690 = &l_687;
                        l_686 = &g_443;
                        l_687 = ((**g_418) = (*g_419));
                        if (l_688)
                            break;
                        (*l_690) = ((**g_418) = &l_641);
                    }
                    if ((safe_mod_func_int16_t_s_s((func_62(((0xB6F69516L || 0x10BEA66BL) != (((safe_rshift_func_int16_t_s_s((1L == (l_695 & 0L)), g_197)) && (**g_442)) , (((safe_mod_func_int32_t_s_s(((+((!0x89746B82L) > (((*l_672) = g_56) , l_698))) ^ (*g_443)), l_698)) , (void*)0) != &g_197))), l_649, (*l_664), g_267) && l_699), g_208)))
                    {
                        (*l_3) = 0x35748182L;
                    }
                    else
                    {
                        int l_726 = (-6L);
                        (**g_418) = (**g_418);
                        (*l_673) = ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_641 || (safe_div_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u(0xDC56L, (*g_443))) > (g_162 = (((safe_div_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(0x012050BDL, (safe_mul_func_uint8_t_u_u(((*l_672) = g_180), (safe_sub_func_int8_t_s_s(((g_446 , (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((**g_442), 0xE81FL)), func_34((*g_419), l_724, l_725))) ^ g_56), l_726)), 4294967295UL))) <= (*l_724)), 3L)))))) || 65529UL), (*g_443))) & l_698) == l_726))) || (***g_278)) , 0xED61L), g_197))), g_2)), 1L)) <= g_56);
                    }
                    for (g_27 = 4; (g_27 > (-30)); --g_27)
                    {
                        short *l_744 = &l_625;
                        int l_745 = (-1L);
                        unsigned *l_756 = &g_197;
                        char *l_777 = &g_56;
                        (*g_419) = ((safe_div_func_int16_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_699 || l_735), (**g_567))), (safe_sub_func_int8_t_s_s(0L, (((safe_div_func_uint16_t_u_u(((*g_443) = ((safe_add_func_uint8_t_u_u(((*l_724) , 0xBCL), g_434)) && (safe_mul_func_int16_t_s_s(((*l_744) = (g_267 , (0x96821634L <= (-9L)))), 0xEA71L)))), 1UL)) < l_745) | (**g_279)))))) | (*l_673)) > (*l_724)) || 0x0BL), g_160)) , (void*)0);
                        (*l_725) = (safe_mul_func_uint16_t_u_u(((g_45 != (safe_rshift_func_uint8_t_u_s((((((*g_443) = (l_750 | (safe_mul_func_int8_t_s_s((*l_724), ((+(g_160 <= g_446)) | (safe_lshift_func_int8_t_s_s(((*g_280) = ((g_73 > l_755) ^ ((*l_756) = l_698))), 4))))))) , ((((((safe_mod_func_uint16_t_u_u((**g_442), g_4)) >= l_745) < l_745) >= l_745) > l_745) && 0x14L)) , &g_443) == l_759), 1))) | g_208), (*l_664)));
                        (*l_663) = func_74(func_57(((void*)0 != &g_443), (safe_lshift_func_int8_t_s_u((***g_278), ((func_74(func_57((safe_sub_func_uint8_t_u_u(g_56, (*g_568))), (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(func_34(((**g_418) = (l_664 = func_57((safe_sub_func_int16_t_s_s((((*l_664) , ((**g_442) = (safe_mul_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((1UL != (-1L)) ^ ((*l_759) == l_776)), 0xCEA1L)), (*l_724))) == (*l_664)), (**g_442))))) || 0UL), (*l_724))), g_73, (*l_664), g_197))), l_725, l_663), l_755)), 2)), l_745, l_698), (**g_278), g_446, g_652, (*l_663)) & l_745) | (*l_3)))), (*l_724), l_745), l_777, g_29, g_27, g_160);
                    }
                }
                for (g_27 = 0; (g_27 < 21); g_27 = safe_add_func_int16_t_s_s(g_27, 5))
                {
                    int ***l_812 = (void*)0;
                    if ((safe_div_func_int16_t_s_s(((*l_725) >= ((safe_rshift_func_int16_t_s_s((func_74(((safe_sub_func_int32_t_s_s((g_267 > ((1UL == g_29) < func_34((**g_418), l_788, l_664))), (*l_724))) , (**g_418)), (**l_622), g_434, g_4, g_162) , 0xEDADL), 13)) >= l_789)), (*l_725))))
                    {
                        int *l_797 = &l_641;
                        short *l_801 = &g_29;
                        short **l_800 = &l_801;
                        short ***l_799 = &l_800;
                        (*l_799) = ((g_29 > (*l_724)) , (((((safe_rshift_func_uint8_t_u_u(((*l_672) = func_74((*g_419), (*g_567), g_162, (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((func_34(l_796, (*g_419), l_797) > 0x8226L) , 0xD6L), (*l_663))), 5UL)), l_798)), 5)) || g_73) | (*l_796)) , 0x02CFL) , (void*)0));
                        (*l_3) = (*l_796);
                    }
                    else
                    {
                        int *l_816 = &g_160;
                        (*l_664) = ((*l_664) > (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((**g_567), (safe_div_func_int8_t_s_s((*g_568), (((**g_442) , (((*l_664) , l_812) != (g_418 = &g_419))) & (((*l_663) && (safe_mod_func_int32_t_s_s(((*l_788) = (*l_724)), (*l_663)))) < g_197)))))), l_815)), (*l_664))));
                        (*g_419) = l_816;
                    }
                    (**g_418) = l_817;
                    (**g_418) = &l_610;
                    if ((*l_796))
                        break;
                }
            }
        }
        else
        {
            int l_820 = 0x23E30681L;
            l_673 = ((*g_419) = (**g_418));
            (*l_817) = (safe_div_func_uint8_t_u_u((*l_788), l_820));
        }
    }
    else
    {
        unsigned l_849 = 2UL;
        char ***l_877 = &g_567;
        int *l_895 = (void*)0;
        char *l_914 = &g_56;
        for (g_652 = 0; (g_652 < 25); g_652 = safe_add_func_int32_t_s_s(g_652, 4))
        {
            char l_848 = 0x18L;
            int *l_854 = &g_160;
            char ***l_876 = (void*)0;
            int *l_879 = &l_610;
            unsigned l_896 = 0xDD1C60B4L;
            short *l_920 = (void*)0;
            unsigned *l_921 = &g_197;
        }
    }
    return (*g_919);
}







static unsigned short func_9(unsigned char p_10, int p_11, int * p_12)
{
    char ****l_389 = (void*)0;
    unsigned short *l_400 = &g_73;
    int l_409 = 0xC5CBDCE6L;
    unsigned char *l_410 = &g_180;
    short *l_411 = &g_208;
    int *l_416 = (void*)0;
    unsigned char l_429 = 255UL;
    int *l_477 = &g_4;
    unsigned short *l_530 = (void*)0;
    int l_561 = 0x813B1EECL;
    if ((((safe_rshift_func_int8_t_s_s(((void*)0 != l_389), (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_197, (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((((l_400 == l_400) || (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((*l_411) = (safe_rshift_func_int8_t_s_s((((*g_140) = ((safe_mod_func_uint32_t_u_u(((g_45 >= 4294967292UL) > ((*l_410) = (l_409 >= p_10))), p_10)) >= p_10)) >= l_409), (***g_278)))), g_160)), l_409))) , 0x0EL), p_11)), 0)))) != 5UL), l_409)), 0xE375L)))) != g_197) != g_56))
    {
        int ***l_417 = (void*)0;
        unsigned l_424 = 1UL;
        char *l_431 = &g_56;
        char *****l_527 = &l_389;
        for (g_160 = (-14); (g_160 != 8); g_160 = safe_add_func_uint8_t_u_u(g_160, 8))
        {
            int l_425 = 0xC999DDE4L;
            int *l_432 = (void*)0;
            int *l_433 = &g_434;
            unsigned short *l_444 = &g_267;
            char *l_445 = &g_446;
            unsigned *l_447 = &g_197;
            short l_525 = 2L;
            for (g_56 = (-30); (g_56 >= 3); g_56 = safe_add_func_int16_t_s_s(g_56, 2))
            {
                unsigned *l_428 = &g_197;
                int l_430 = 0L;
                l_425 = ((*g_140) = (((g_45 != ((p_11 <= (p_10 == func_34(l_416, ((((l_417 != g_418) > (((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_424 ^ l_425), ((*l_428) = (safe_mul_func_int8_t_s_s(func_34(p_12, (**g_418), (*g_419)), 0x73L))))), l_429)) > g_160) , g_29)) | (*g_280)) , (**g_418)), p_12))) , l_430)) && 65534UL) >= l_425));
            }
            if ((l_425 , (func_74(&l_425, l_431, ((*l_433) = p_11), ((*l_447) = (safe_rshift_func_uint8_t_u_s(((*l_410) = (safe_mod_func_int8_t_s_s(((*l_445) = ((*g_280) = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((g_442 == &g_443))), ((void*)0 != l_444))))), p_11))), 4))), p_10) , (*p_12))))
            {
                unsigned char *l_464 = &l_429;
                if (((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((*l_400) = (safe_div_func_int32_t_s_s((*p_12), func_34((**g_418), p_12, ((((*l_410) = p_11) & ((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(p_10, ((**g_442) = (safe_sub_func_int16_t_s_s(g_197, (0xCF8855C0L && ((safe_div_func_int8_t_s_s(p_10, (((*l_464) = (safe_lshift_func_uint8_t_u_s(((*p_12) , 0UL), 1))) , (-10L)))) && p_10))))))), 14)) != p_10) , &l_445) == (*g_278))) , &l_425))))), g_27)), (*p_12))) ^ g_434))
                {
                    unsigned l_473 = 1UL;
                    (***g_418) = (safe_div_func_uint32_t_u_u((0xBF086C29L != ((((l_389 == ((((***g_418) , p_10) && (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((*p_12), func_74((**g_418), (**g_278), l_473, g_208, l_473))), g_434)), 4))) , &g_278)) | g_4) , 0xC4EAL) && 0x0420L)), 0x1856F501L));
                    if ((*p_12))
                        break;
                }
                else
                {
                    int *l_474 = &g_45;
                    if ((*p_12))
                        break;
                    if ((**g_419))
                    {
                        if ((*p_12))
                            break;
                    }
                    else
                    {
                        (*l_474) = func_34(l_474, (**g_418), (*g_419));
                        (**g_419) = 0x4A63CADAL;
                    }
                }
                if (l_425)
                    continue;
            }
            else
            {
                char ****l_488 = &g_278;
                char *****l_489 = &l_389;
                int l_490 = (-3L);
                for (p_11 = 0; (p_11 < 20); p_11 = safe_add_func_uint8_t_u_u(p_11, 3))
                {
                    (**g_418) = l_477;
                    (*l_477) = l_424;
                    (***g_418) = (*p_12);
                }
                (*p_12) = (safe_div_func_int16_t_s_s((func_74(func_57(((*l_411) = (((safe_mul_func_uint8_t_u_u(g_267, p_10)) | (~(safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((***g_278), func_74((*g_419), ((&g_278 != ((*l_489) = l_488)) , (**g_278)), g_160, p_11, p_10))), p_11)) < 65530UL), g_434)))) , p_10)), l_425, p_10, p_11), (**g_278), l_424, g_73, p_11) , 0xA5FEL), l_490));
            }
            for (g_29 = 0; (g_29 < 10); g_29++)
            {
                unsigned char l_505 = 9UL;
                int *l_531 = (void*)0;
                char *l_544 = (void*)0;
                int **l_560 = &l_531;
                int *l_562 = &l_409;
                if ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((p_11 , (p_10 >= 65535UL)), (p_10 != ((*l_445) = ((((l_410 == (*g_279)) ^ ((**g_279) = (safe_rshift_func_int8_t_s_u(l_425, (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((-2L) != ((safe_mod_func_int8_t_s_s((~(((((0x3FFDL && p_10) && (*g_280)) , (void*)0) == (void*)0) | l_505)), 255UL)) && 0x141136A1L)) != p_11), g_29)), g_162)))))) && 0x8DL) && (-1L)))))), 1)))
                {
                    short l_506 = 0xDE6CL;
                    if ((l_506 , (((safe_lshift_func_int8_t_s_u(((*g_280) = (p_11 ^ 0L)), 5)) > (func_34((*g_419), (g_208 , p_12), p_12) , (((*g_419) = func_57((!p_10), p_11, (*g_443), l_506)) != p_12))) < g_446)))
                    {
                        (*g_419) = p_12;
                        if ((***g_418))
                            continue;
                        if ((*p_12))
                            break;
                        (*p_12) = (*p_12);
                    }
                    else
                    {
                        unsigned char l_513 = 1UL;
                        (**g_418) = (((*g_443) >= (safe_add_func_uint32_t_u_u((0xA9EBL ^ l_513), ((*l_447) = (safe_div_func_int32_t_s_s((*p_12), (***g_418))))))) , func_57(g_29, (safe_rshift_func_int8_t_s_s(func_34(p_12, func_57(g_208, ((**g_419) , g_73), (**g_442), l_505), p_12), l_506)), p_11, p_10));
                    }
                    (*l_477) = (**g_419);
                }
                else
                {
                    char l_526 = 0x1FL;
                    if (l_505)
                        break;
                    if (func_34((*g_419), (*g_419), p_12))
                    {
                        unsigned l_518 = 0xC1E8B13FL;
                        int l_521 = 2L;
                        short *l_524 = &g_27;
                        (*g_419) = (l_518 , (*g_419));
                        (*g_419) = (void*)0;
                        (*p_12) = (l_424 == func_74((*g_419), l_445, ((*l_433) = p_11), ((safe_mod_func_int8_t_s_s(l_521, 253UL)) , (safe_mul_func_uint8_t_u_u(((*l_410) = ((((*l_524) = (((((((*l_411) = 0xB2F5L) ^ l_505) , p_10) ^ 0x5123L) && 0x9B8AL) == l_505)) <= l_425) == 0xBEL)), 0x53L))), l_525));
                        (*g_419) = (void*)0;
                    }
                    else
                    {
                        int *l_532 = &g_160;
                        int **l_533 = &l_531;
                        (**g_418) = (func_34(p_12, func_57(g_4, (l_526 , ((&l_389 != l_527) , ((p_10 == (p_10 < ((**g_442) = (*g_443)))) != (safe_rshift_func_int16_t_s_u(((l_530 != (void*)0) | 0xAAL), 6))))), g_73, p_11), l_531) , l_531);
                        (*l_477) = func_74(((*g_419) = l_532), (*g_279), func_34(((*l_533) = &l_425), p_12, p_12), (~(((safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((((*g_443) = (safe_lshift_func_int8_t_s_u((-1L), 0))) | ((void*)0 == &l_533)) , p_10), p_10)) & 0xDD5AL), l_525)) != p_11) == (*p_12))), g_45);
                        (*l_477) = (safe_mul_func_uint8_t_u_u(((*l_410) = ((*l_531) = (safe_mod_func_uint16_t_u_u(((0xA8L || func_74(p_12, l_544, (*l_531), (safe_div_func_int8_t_s_s(p_11, (***g_278))), (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_425 , (*l_532)), ((*l_477) != l_526))), 0UL)))) , (*l_531)), 0x7B8CL)))), 0x26L));
                    }
                }
                (*l_477) = (((((safe_unary_minus_func_uint8_t_u((((*g_280) = (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-3L), (((p_10 ^ g_27) < ((void*)0 == (*g_418))) || p_10))), (p_10 , (*l_477))))) ^ ((*l_410) = (l_425 = p_10))))) || 0UL) , l_425) , p_11) != (*g_443));
                (*p_12) = func_74(func_57(g_446, ((safe_lshift_func_uint16_t_u_s((g_208 != ((safe_sub_func_uint32_t_u_u(0UL, l_425)) | ((((func_34(p_12, ((*g_419) = (void*)0), ((*l_560) = p_12)) != ((*l_562) = ((*l_477) = ((((*l_447) = g_45) > l_561) > l_525)))) | 0x6955CDB5L) || p_11) | 0x7CD3L))), g_446)) <= p_10), p_11, p_10), l_544, p_10, p_10, p_10);
            }
        }
    }
    else
    {
        int l_571 = (-6L);
        if (((**g_419) = 9L))
        {
            char *l_566 = (void*)0;
            char **l_565 = &l_566;
            int l_576 = 0x40C20C84L;
            (**g_418) = (*g_419);
            (**g_418) = func_38(func_17((*g_419), p_12), p_12, (safe_mod_func_int32_t_s_s(((l_565 == g_567) || (safe_sub_func_uint16_t_u_u(l_571, (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_576, ((*p_12) , l_571))), l_571))))), p_11)), g_446, l_571);
        }
        else
        {
            int *l_579 = &l_561;
            int *l_580 = &g_434;
            int l_583 = 0x2F2D1F36L;
            (*p_12) = (*p_12);
            p_12 = ((*g_419) = func_57(((((safe_lshift_func_int8_t_s_s(p_11, l_571)) > 7L) , ((*l_580) = ((*l_579) = l_571))) , (safe_div_func_uint8_t_u_u((p_10 <= ((((((*l_477) | p_11) || l_583) && (***g_418)) < (*l_477)) > g_27)), 0x16L))), l_583, (*l_477), g_180));
        }
        for (g_56 = (-28); (g_56 > (-30)); --g_56)
        {
            short l_590 = 0x5CDCL;
            int l_598 = (-1L);
            if (((**g_442) && (safe_rshift_func_int16_t_s_u(g_73, 0))))
            {
                if ((***g_418))
                    break;
                (**g_418) = func_57(p_11, ((*l_410) = 0x2DL), ((((safe_lshift_func_uint8_t_u_s(l_590, ((**g_567) = 0xF7L))) < p_10) , 0L) , (**g_442)), g_160);
            }
            else
            {
                unsigned char l_595 = 8UL;
                int *l_606 = (void*)0;
                int *l_607 = &g_45;
                for (g_4 = 0; (g_4 > (-1)); --g_4)
                {
                    unsigned char **l_593 = &l_410;
                    unsigned char ***l_594 = &l_593;
                    (*l_594) = l_593;
                    l_595 = (*l_477);
                    for (g_160 = (-19); (g_160 <= (-27)); --g_160)
                    {
                        unsigned l_605 = 4294967288UL;
                        l_598 = 0x906127FCL;
                        g_45 = (safe_mul_func_int8_t_s_s(((((*p_12) & 4L) || ((p_10 >= (((*g_568) = ((*l_477) | (safe_mul_func_int8_t_s_s(0x25L, (*g_568))))) <= 0xBDL)) < (l_605 = ((safe_add_func_int8_t_s_s((***g_278), g_56)) , g_4)))) >= 6L), p_10));
                    }
                }
                (*l_607) = ((***g_418) = 0x1E24F128L);
            }
            (*l_477) = func_34(p_12, &l_409, ((**g_418) = ((p_11 <= (*l_477)) , (*g_419))));
            if ((*l_477))
                break;
            for (g_2 = 0; (g_2 != 23); g_2 = safe_add_func_int8_t_s_s(g_2, 9))
            {
                (*l_477) = 0x7B9F676CL;
                if (l_571)
                    break;
            }
        }
    }
    return p_11;
}







static unsigned char func_17(int * p_18, int * p_19)
{
    unsigned char l_20 = 5UL;
    if (g_4)
    {
        return l_20;
    }
    else
    {
        int *l_21 = (void*)0;
        l_21 = &g_4;
        for (g_2 = 0; (g_2 >= 8); ++g_2)
        {
            unsigned short l_28 = 0x1534L;
            int *l_44 = &g_45;
            int *l_54 = &g_45;
            char *l_55 = &g_56;
            int **l_386 = &l_44;
            for (l_20 = 0; (l_20 <= 40); ++l_20)
            {
                unsigned l_26 = 4294967294UL;
                g_27 = (l_26 = g_4);
            }
            g_29 = l_28;
            (*l_54) = (safe_add_func_int16_t_s_s((-6L), (safe_mul_func_int16_t_s_s((*l_21), func_34(func_38(l_28, (l_44 = &g_4), (*l_21), l_20, ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(l_28, 2)), (safe_add_func_uint16_t_u_u(((((*l_55) = (safe_mod_func_uint32_t_u_u(((void*)0 == l_54), l_20))) == g_2) , 0x3674L), 0x22CBL)))) , l_20)), &g_4, &g_4)))));
            (*l_386) = &g_160;
        }
    }
    return g_73;
}







static short func_34(int * p_35, int * p_36, int * p_37)
{
    return g_160;
}







static int * func_38(unsigned char p_39, int * p_40, unsigned p_41, unsigned char p_42, int p_43)
{
    int l_67 = 0L;
    char *l_68 = &g_56;
    int **l_365 = &g_140;
    int l_366 = (-5L);
    unsigned *l_369 = &g_197;
    int *l_372 = &l_366;
    short *l_373 = &g_29;
    char **l_382 = &l_68;
    int l_383 = 0x9832924EL;
    char *l_384 = &g_56;
    int *l_385 = &g_160;
    (*l_365) = func_57((func_62(g_29, ((p_39 == l_67) , l_68), ((void*)0 == &g_56), l_67) != l_67), l_67, g_2, l_67);
    (*l_372) = func_74(((((l_366 = (-8L)) && (safe_mod_func_uint8_t_u_u((((*l_369) = 0x9161BFE2L) || (func_74((*l_365), (*g_279), p_39, g_27, p_41) , (((***g_278) = (safe_lshift_func_uint16_t_u_u((p_39 || 0xBAB0L), p_39))) , (**l_365)))), g_2))) | (**l_365)) , (*l_365)), l_68, p_39, g_160, p_41);
    (*l_385) = ((*l_372) = (func_62(((*p_40) , (*l_372)), (*g_279), ((*l_373) = 1L), p_43) , (func_74(func_57((((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((func_74(&g_45, (g_208 , ((*l_382) = ((**g_278) = (*g_279)))), (*l_372), g_73, (*l_372)) , p_43) | p_43), p_42)), 4)), 4UL)) > 0xC417D1C9L) || l_383), p_43, g_160, p_41), l_384, (*l_372), (*l_372), g_56) ^ 0L)));
    return (*l_365);
}







static int * func_57(short p_58, unsigned char p_59, unsigned short p_60, unsigned char p_61)
{
    unsigned char l_358 = 1UL;
    int **l_359 = &g_140;
    short *l_362 = &g_208;
    char *l_363 = &g_56;
    int *l_364 = &g_45;
    (*l_364) = (safe_mul_func_int16_t_s_s(p_60, ((*l_362) = (func_74(((*l_359) = (l_358 , &g_4)), (((safe_lshift_func_int8_t_s_s(((void*)0 != &g_197), (p_58 & (((*l_362) = (p_60 < p_59)) == p_58)))) , g_29) , l_363), g_267, g_27, l_358) , (**l_359)))));
    return &g_4;
}







static int func_62(short p_63, char * p_64, short p_65, short p_66)
{
    unsigned short *l_71 = (void*)0;
    unsigned short *l_72 = &g_73;
    int *l_80 = &g_4;
    unsigned short **l_87 = &l_71;
    int l_352 = 0x1C03A7F7L;
    int **l_353 = (void*)0;
    int **l_354 = (void*)0;
    int **l_355 = &l_80;
    l_352 = (((*l_72) = ((void*)0 == p_64)) <= (func_74(l_80, func_81(p_65, p_63, func_85(((*l_87) = l_71))), (g_208 , g_208), p_65, g_2) > 5L));
    (*l_355) = &l_352;
    (*l_355) = &g_160;
    return (**l_355);
}







static unsigned func_74(int * p_75, char * p_76, int p_77, unsigned p_78, unsigned p_79)
{
    int **l_348 = &g_140;
    int ***l_349 = &l_348;
    int *l_350 = (void*)0;
    int *l_351 = &g_45;
    (*l_351) = (((*l_349) = l_348) != (void*)0);
    return g_180;
}







static char * func_81(short p_82, unsigned p_83, unsigned short * p_84)
{
    int *l_141 = &g_45;
    unsigned l_175 = 0UL;
    unsigned short *l_176 = &g_2;
    int **l_231 = (void*)0;
    int ***l_230 = &l_231;
    char *l_234 = (void*)0;
    char **l_233 = &l_234;
    unsigned short l_323 = 0xA619L;
    (*l_141) = (p_83 != g_27);
    for (p_82 = 0; (p_82 != 3); ++p_82)
    {
        char *l_144 = &g_56;
        return l_144;
    }
    for (g_27 = 0; (g_27 > (-16)); g_27 = safe_sub_func_uint16_t_u_u(g_27, 6))
    {
        int **l_147 = (void*)0;
        int ***l_148 = &l_147;
        int **l_150 = &l_141;
        int ***l_149 = &l_150;
        (*l_149) = ((*l_148) = l_147);
        for (g_56 = 0; (g_56 != 12); g_56 = safe_add_func_uint32_t_u_u(g_56, 7))
        {
            char *l_153 = (void*)0;
            return l_153;
        }
        l_141 = (p_82 , &g_4);
    }
    if (p_83)
    {
        int l_158 = (-5L);
        unsigned short *l_159 = (void*)0;
        unsigned char *l_161 = &g_162;
        int *l_163 = (void*)0;
        int *l_164 = &g_45;
        char l_185 = 0xE5L;
        char **l_283 = &g_280;
        int **l_331 = (void*)0;
        int **l_332 = (void*)0;
        (*l_164) = ((safe_mod_func_int8_t_s_s((*l_141), g_56)) == (safe_mul_func_uint8_t_u_u(g_45, ((*l_161) = ((g_27 , (l_158 > ((*l_141) ^ (p_83 , ((*l_141) , (g_160 = 0x9D05L)))))) || 1UL)))));
        if (p_83)
        {
            int *l_186 = &g_160;
            unsigned short *l_192 = &g_2;
            char **l_255 = &l_234;
            int **l_261 = &g_140;
            short *l_275 = (void*)0;
            char ***l_277 = &l_255;
            char ****l_276 = &l_277;
            unsigned char *l_281 = &g_180;
            for (g_29 = 29; (g_29 > 1); g_29--)
            {
                int l_198 = 0x97B64956L;
                int *l_206 = &l_158;
                int ***l_232 = (void*)0;
                unsigned short l_268 = 65534UL;
                if (g_4)
                {
                    unsigned char *l_179 = &g_180;
                    int *l_187 = &g_45;
                    if ((safe_sub_func_int16_t_s_s(((((*l_164) = ((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_56, (g_162 | (((safe_add_func_uint8_t_u_u(l_175, ((((void*)0 != l_176) & ((safe_mod_func_int8_t_s_s((-1L), ((*l_179) = g_2))) & (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((*l_164), 0)) ^ g_45), 0xDDL)))) != l_185))) , p_84) == &g_2)))), (*l_141))) , 2L)) , g_27) != p_83), g_29)))
                    {
                        char *l_195 = &l_185;
                        unsigned *l_196 = &g_197;
                        l_187 = l_186;
                        (*l_186) = (~(safe_sub_func_uint32_t_u_u(g_180, ((*l_196) = (p_83 , (((safe_mul_func_uint16_t_u_u((((*l_195) = (~(0UL ^ ((((l_192 == (p_83 , func_85(l_159))) , (safe_add_func_int32_t_s_s(1L, ((*l_164) = 0x9405672CL)))) >= (*l_187)) == g_180)))) && g_27), p_82)) , g_56) & p_82))))));
                        return l_179;
                    }
                    else
                    {
                        int l_201 = 0xE1BE5EA2L;
                        short *l_202 = (void*)0;
                        l_158 = (l_198 == (safe_mul_func_int16_t_s_s(l_201, ((*l_187) = g_180))));
                    }
                    (*l_186) = (*l_186);
                    for (l_198 = 16; (l_198 != (-28)); l_198 = safe_sub_func_int32_t_s_s(l_198, 7))
                    {
                        int **l_205 = &g_140;
                        int **l_207 = &l_163;
                        (*l_205) = &g_45;
                        (*l_207) = ((*l_205) = (l_206 = (*l_205)));
                        (*g_140) = p_82;
                    }
                    g_45 = g_208;
                }
                else
                {
                    unsigned short *l_215 = &g_2;
                    char ***l_235 = &l_233;
                    char **l_237 = &l_234;
                    char ***l_236 = &l_237;
                    int l_254 = 0xB20B9766L;
                    char *l_258 = &g_56;
                    unsigned short *l_266 = &g_267;
                    (*l_236) = ((*l_235) = ((safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((l_215 != (void*)0), g_208)), ((*l_186) , (safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((*l_141) | ((*l_141) != (l_230 == l_232))) , p_83), g_29)), g_180)), 0x49F5E646L)) , 0UL), g_160)), p_83))))), 1)) , l_233));
                    for (g_56 = 0; (g_56 != (-27)); g_56--)
                    {
                        int **l_240 = (void*)0;
                        int **l_241 = &g_140;
                        (*l_186) = p_83;
                        g_140 = &g_45;
                        (*l_241) = l_186;
                        (*g_140) = ((*g_140) , (*l_186));
                    }
                    for (g_56 = (-21); (g_56 != 0); g_56 = safe_add_func_int8_t_s_s(g_56, 4))
                    {
                        short l_252 = 0xAE06L;
                        unsigned *l_253 = (void*)0;
                        (*l_206) = (safe_mul_func_int8_t_s_s(((l_254 = ((safe_add_func_uint16_t_u_u(g_4, (((+(safe_mod_func_uint16_t_u_u(0xBBA8L, 3L))) ^ (~(4294967295UL <= (g_29 && ((*l_164) = (l_252 <= ((void*)0 != &g_197))))))) , g_4))) >= (*l_186))) != g_2), 0xDEL));
                        (*l_236) = l_255;
                        (*l_186) = (*l_206);
                    }
                    l_254 = (safe_mul_func_int16_t_s_s(((p_82 < ((*l_258) = p_82)) < ((safe_mul_func_int16_t_s_s(((l_261 == &l_164) , p_82), ((*l_164) , (safe_lshift_func_int8_t_s_s(((p_82 || (((safe_mul_func_uint16_t_u_u(0x0324L, ((*l_266) = g_45))) , l_206) == l_186)) , p_82), g_197))))) | 3UL)), (*l_141)));
                }
                (*l_186) = p_83;
                if (l_268)
                    continue;
                (*l_186) = (safe_mul_func_uint8_t_u_u(255UL, (0xE839CC64L > ((g_160 >= 1UL) & ((*l_161) = p_82)))));
            }
            (*l_186) = (*l_186);
            (*l_186) = (safe_add_func_int8_t_s_s(g_56, ((*l_281) = (((*l_161) = ((safe_lshift_func_int8_t_s_s(g_45, 3)) > (g_56 , ((g_29 = ((*l_141) == g_56)) || (((*l_276) = &l_233) == (g_278 = g_278)))))) && (*g_280)))));
            l_164 = &g_4;
        }
        else
        {
            int **l_282 = &l_141;
            char *l_286 = (void*)0;
            unsigned l_299 = 1UL;
            (*l_282) = &g_4;
            (*g_278) = l_283;
            if (p_82)
            {
                unsigned char l_289 = 0x80L;
                unsigned short **l_290 = &l_159;
                short *l_291 = &g_29;
                for (l_185 = 0; (l_185 >= 2); ++l_185)
                {
                    (*l_164) = ((g_56 > (g_208 > g_45)) > ((**g_278) != ((*l_233) = l_286)));
                    if (p_83)
                        continue;
                }
                (*l_164) = ((safe_add_func_int32_t_s_s(p_83, (((((**l_282) || l_289) , ((l_289 > ((*l_291) = (((*l_290) = &g_267) == (p_82 , p_84)))) , (safe_mul_func_int8_t_s_s((**g_279), (0x0C42L >= p_82))))) , (void*)0) != &l_176))) | (**l_282));
            }
            else
            {
                unsigned short l_298 = 0x2560L;
                unsigned *l_300 = &g_197;
                char *l_316 = &l_185;
                (*l_282) = &l_158;
                (*l_282) = &g_45;
                if (((((safe_sub_func_int8_t_s_s(0L, (((((*l_300) = (safe_mul_func_int8_t_s_s((**g_279), ((l_298 > (g_267 = 0xEF68L)) > (&g_45 != (l_299 , &g_4)))))) & (safe_div_func_int32_t_s_s((l_300 != ((p_82 , p_82) , g_140)), g_2))) >= 8L) >= 9UL))) >= p_83) , p_82) ^ p_83))
                {
                    char *l_311 = &g_56;
                    (*l_164) = (safe_div_func_int32_t_s_s(((0xE5L ^ (*l_141)) == (((void*)0 == &g_267) <= ((safe_add_func_uint32_t_u_u(((*l_300) = (safe_div_func_int8_t_s_s((**l_282), (safe_sub_func_uint16_t_u_u((l_298 != g_208), g_160))))), g_27)) != l_298))), (*l_164)));
                    (*l_164) = g_180;
                    return l_311;
                }
                else
                {
                    (*l_282) = &l_158;
                    if (p_83)
                    {
                        int **l_324 = &g_140;
                        short *l_327 = &g_27;
                        (*l_141) = (p_82 | (p_83 != (((((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(l_298, ((*l_300) = (l_316 != ((*l_283) = (*l_283)))))) >= g_267) , (((safe_mod_func_uint8_t_u_u((**l_282), p_82)) , p_83) < p_83)), 1)) , 0x9E08L) != g_4) > g_208) , 0UL)));
                        (**l_282) = (safe_div_func_uint8_t_u_u(((*l_164) || (((*l_327) = (((g_4 == ((*l_141) || (safe_rshift_func_int8_t_s_s(((***g_278) = ((l_323 , g_56) , p_82)), 1)))) || (((void*)0 == l_324) == (safe_sub_func_uint8_t_u_u((*l_164), (***g_278))))) | 0x87L)) , 0x65L)), p_82));
                    }
                    else
                    {
                        unsigned l_328 = 4294967295UL;
                        (*l_141) = l_328;
                    }
                    (*l_164) = (p_82 != (safe_mul_func_uint8_t_u_u(g_4, g_45)));
                }
            }
        }
        g_140 = &l_158;
        g_140 = &g_160;
    }
    else
    {
        unsigned short **l_337 = &l_176;
        int l_338 = 0x3804CC39L;
        char ***l_345 = &l_233;
        int *l_347 = &g_45;
        for (p_82 = 2; (p_82 > 16); ++p_82)
        {
            int *l_335 = (void*)0;
            int **l_336 = &l_335;
            int *l_339 = &g_45;
            (*l_336) = l_335;
            l_337 = &p_84;
            (*l_339) = (g_56 == (g_4 | (7UL < l_338)));
            for (g_160 = (-14); (g_160 >= (-26)); g_160 = safe_sub_func_uint32_t_u_u(g_160, 4))
            {
                int l_342 = 0xFADBB900L;
                char ****l_346 = &l_345;
                (*l_339) = ((l_342 < ((p_82 , g_56) , ((((*g_280) = (**g_279)) && l_342) || g_45))) || ((((safe_lshift_func_int8_t_s_s((((***g_278) = (((*l_346) = l_345) != (void*)0)) > l_338), p_82)) != p_83) , (-4L)) && g_162));
            }
        }
        (*l_347) = l_338;
    }
    return (*g_279);
}







static unsigned short * func_85(unsigned short * p_86)
{
    unsigned char l_88 = 255UL;
    unsigned short *l_109 = (void*)0;
    int *l_126 = &g_45;
    if (l_88)
    {
        int *l_93 = &g_45;
        for (g_45 = (-1); (g_45 > (-27)); g_45 = safe_sub_func_int32_t_s_s(g_45, 3))
        {
            for (g_56 = 0; (g_56 > 16); ++g_56)
            {
                return p_86;
            }
        }
        (*l_93) = 0x05A9AD1DL;
    }
    else
    {
        char l_98 = (-10L);
        int *l_107 = &g_45;
        unsigned char l_116 = 0x9DL;
        int **l_137 = &l_126;
        char *l_138 = &l_98;
        if ((safe_div_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(l_98, 6)) ^ (l_88 | l_98)) ^ ((safe_lshift_func_uint8_t_u_s(l_98, l_88)) | 0x84D8L)), (safe_lshift_func_int8_t_s_u(((0x16E91F13L == l_88) ^ (((((((safe_div_func_uint16_t_u_u(0xB025L, 7L)) >= 0UL) ^ g_45) , g_56) >= l_98) < l_98) , g_45)), 7)))))
        {
            int *l_112 = &g_45;
            for (l_88 = 9; (l_88 >= 27); ++l_88)
            {
                int **l_108 = &l_107;
                (*l_108) = l_107;
                (*l_108) = l_107;
                return l_109;
            }
            for (g_56 = 0; (g_56 > 14); g_56 = safe_add_func_int16_t_s_s(g_56, 1))
            {
                int **l_113 = &l_107;
                l_112 = (void*)0;
                (*l_113) = l_107;
                (*l_113) = (*l_113);
            }
        }
        else
        {
            char *l_121 = (void*)0;
            char *l_122 = &l_98;
            unsigned char l_123 = 9UL;
            char *l_124 = &g_56;
            short *l_125 = &g_27;
            (*l_107) = ((((*l_107) >= (*l_107)) ^ (((*l_125) = (((safe_lshift_func_int8_t_s_s(g_45, ((*l_124) = ((((*l_107) , l_116) | (((safe_rshift_func_int8_t_s_s(((((((*l_122) = (safe_mod_func_int16_t_s_s((g_27 >= 0x513AA7A4L), g_29))) , &g_56) == &g_56) , l_123) | (*l_107)), 5)) , l_88) > g_4)) > l_123)))) , g_4) ^ l_88)) , 7UL)) & (*l_107));
        }
        l_126 = &g_4;
        if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_56, g_27)), (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((*l_138) = (safe_mul_func_int8_t_s_s(g_45, (g_2 ^ ((l_107 != ((*l_137) = (void*)0)) , ((*l_107) | (0xBD00L < g_2))))))), (-3L))), 13)))))
        {
            int ***l_139 = &l_137;
            (*l_107) = g_27;
            (*l_139) = &l_126;
            g_140 = (*l_137);
        }
        else
        {
            (*l_137) = (g_4 , (void*)0);
            (*l_137) = (*l_137);
            (*l_137) = &g_4;
        }
    }
    return l_109;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
