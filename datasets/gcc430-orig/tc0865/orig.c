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



static int g_4 = 1L;
static const int g_6 = 1L;
static const int *g_5 = &g_6;
static int g_12 = 0x43C6FE23L;
static short g_15 = 0xC5A3L;
static unsigned short g_68 = 0xEA6CL;
static unsigned g_73 = 1UL;
static int *g_81 = (void*)0;
static int **g_80 = &g_81;
static int g_85 = 0xCE5FA5B8L;
static char g_89 = (-9L);
static unsigned short g_92 = 0x2958L;
static unsigned short g_100 = 1UL;
static char g_102 = 0x8DL;
static unsigned char g_135 = 1UL;
static unsigned g_138 = 4294967288UL;
static unsigned char g_144 = 0x2EL;
static short g_150 = 0x9B2FL;
static short *g_166 = (void*)0;
static unsigned char *g_193 = &g_144;
static unsigned *g_204 = &g_138;
static unsigned **g_203 = &g_204;
static const int **g_239 = &g_5;
static const int ***g_238 = &g_239;
static unsigned g_286 = 0x9F27ABC4L;
static unsigned g_288 = 0x18F84039L;
static char *g_331 = &g_102;
static char **g_330 = &g_331;
static int g_382 = (-4L);
static unsigned g_385 = 0x89F56B13L;
static int g_391 = 0x35BF2678L;
static const int *g_435 = &g_4;
static int * const g_478 = &g_391;
static int * const *g_477 = &g_478;
static unsigned short *g_497 = (void*)0;
static unsigned short **g_496 = &g_497;
static short g_532 = 0x7286L;
static unsigned char *g_553 = (void*)0;
static int g_595 = (-8L);
static const unsigned g_599 = 8UL;
static const unsigned short g_658 = 0x13B7L;
static unsigned ***g_683 = &g_203;
static unsigned ****g_682 = &g_683;
static unsigned char g_744 = 0xCBL;
static unsigned g_747 = 0x838D6F7DL;
static int g_760 = 0x0D2557E9L;
static int *g_763 = &g_12;
static int *g_783 = &g_85;
static char g_800 = 2L;
static char g_802 = 0x92L;
static unsigned short *g_804 = (void*)0;



static short func_1(void);
static short func_18(unsigned short p_19, int p_20, short p_21, int p_22);
static int func_25(char p_26, unsigned p_27);
static unsigned short func_46(short p_47, const char p_48);
static unsigned func_49(char p_50, const unsigned char p_51, unsigned char p_52, int ** p_53, short * p_54);
static char func_55(short p_56, const short * p_57);
static int func_62(unsigned short p_63, const int * p_64, unsigned short p_65, short * p_66);
static const int * func_69(unsigned short * p_70, short * p_71);
static unsigned short * func_74(short p_75);
static const int * func_78(int ** p_79);
static short func_1(void)
{
    int *l_3 = &g_4;
    int **l_2 = &l_3;
    unsigned l_756 = 0x648F8B1FL;
    short l_762 = 0L;
    unsigned short l_790 = 0UL;
    unsigned l_791 = 0x6BD6F2D0L;
    char *l_798 = &g_89;
    char *l_799 = &g_800;
    char *l_801 = &g_802;
    unsigned char *l_803 = &g_744;
lbl_780:
    (*l_2) = (void*)0;
    if (g_4)
    {
        int *l_7 = (void*)0;
        unsigned char l_31 = 0xFDL;
        int l_758 = 1L;
        (*l_2) = ((0x07L || 255UL) , (void*)0);
        if (((g_5 = (void*)0) != &g_6))
        {
            (*l_2) = l_7;
        }
        else
        {
            int l_13 = (-2L);
            for (g_4 = 0; (g_4 != (-7)); g_4--)
            {
                int * const *l_10 = (void*)0;
                int *l_11 = &g_12;
                (*l_11) = (l_10 != &g_5);
                if (l_13)
                    continue;
            }
            if (g_6)
            {
                short *l_14 = &g_15;
                int * const l_30 = (void*)0;
                int *l_759 = &g_760;
                unsigned short **l_761 = &g_497;
                (*l_759) ^= ((((((*l_14) = l_13) && (safe_sub_func_int16_t_s_s(func_18(((((((0xFA4CL > (0xDD93L != (safe_add_func_uint16_t_u_u(0xBB08L, 3L)))) ^ func_25((((((safe_lshift_func_uint16_t_u_u(((void*)0 == &g_15), (l_30 == (void*)0))) > l_31) > g_4) , 0x7DL) , g_12), g_12)) == g_288) || (***g_683)) , l_13) , l_756), l_13, g_658, l_13), 0x5ABBL))) < l_13) , (*g_331)) > l_758);
                (*l_759) ^= (l_761 != ((l_762 & ((void*)0 != &g_683)) , &g_497));
                (*g_80) = g_763;
            }
            else
            {
                unsigned l_774 = 0UL;
                char *l_777 = &g_89;
                (*g_763) = (((*g_435) > (safe_lshift_func_int8_t_s_s(((*l_777) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((((*g_331) = l_13) != (*g_193)), (g_85 , (((0x44L && ((((((safe_sub_func_int8_t_s_s((g_15 , l_774), (((****g_682) <= (((safe_add_func_uint8_t_u_u((*g_193), (*g_193))) > l_13) > 1L)) == (***g_683)))) | (-1L)) > 0xB9DAL) && l_774) | g_135) & (**g_203))) != 65535UL) || 0x1416L)))) != l_774) <= l_762), 11)), 3))), l_774))) <= 255UL);
            }
        }
        (*g_763) = (safe_lshift_func_int16_t_s_s(1L, 14));
    }
    else
    {
        if (g_68)
            goto lbl_780;
        (*g_763) &= (!0xCBC84741L);
    }
    for (g_4 = 0; (g_4 <= 18); ++g_4)
    {
        (*g_763) = 1L;
        (*g_239) = g_783;
    }
    (*g_783) = (safe_add_func_int8_t_s_s((*g_331), ((safe_add_func_int16_t_s_s((func_46((((safe_add_func_int8_t_s_s(((l_791 ^= l_790) == ((*g_204) = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((*g_193), ((*l_803) &= func_62(((**g_330) , func_46((safe_mod_func_uint32_t_u_u(l_756, (***g_683))), ((*l_801) = ((*l_799) = ((*l_798) = (**g_330)))))), (*l_2), g_658, &l_762)))), g_150)))), (**g_330))) , (*g_496)) == g_804), (**g_330)) < 4294967286UL), l_790)) , 0x0AL)));
    return g_6;
}







static short func_18(unsigned short p_19, int p_20, short p_21, int p_22)
{
    unsigned l_757 = 0x8D5E8E1CL;
    return l_757;
}







static int func_25(char p_26, unsigned p_27)
{
    int l_536 = 0xE8B5FA9EL;
    int **l_537 = (void*)0;
    short *l_538 = &g_15;
    char ***l_677 = &g_330;
    char ****l_676 = &l_677;
    int ****l_730 = (void*)0;
    int *l_733 = &g_595;
    unsigned char l_740 = 0x82L;
    short l_741 = (-1L);
    unsigned *l_745 = &g_385;
    unsigned l_746 = 4294967295UL;
    for (p_27 = 0; (p_27 >= 5); ++p_27)
    {
        int l_34 = 0xF620A341L;
        int *l_35 = &g_4;
        int l_44 = 0xDBB9A2F7L;
        unsigned short l_45 = 65533UL;
        const short *l_59 = &g_15;
        const unsigned l_645 = 4294967292UL;
        short *l_662 = &g_15;
        unsigned ***l_680 = &g_203;
        unsigned ****l_679 = &l_680;
        (*l_35) |= l_34;
        for (g_12 = 21; (g_12 != 17); g_12--)
        {
            short * const l_58 = (void*)0;
            unsigned short *l_643 = &l_45;
            int l_644 = 0xA2896639L;
            unsigned char l_661 = 249UL;
            char * const ***l_678 = (void*)0;
            unsigned *** const *l_717 = &g_683;
            unsigned short l_718 = 65535UL;
            if ((((((safe_sub_func_uint8_t_u_u(((0UL || (1UL != p_26)) && ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((g_12 || l_44) , (l_45 , ((((*l_643) = func_46(((((func_49(((*l_35) = func_55((l_58 != (void*)0), l_59)), p_27, l_536, l_537, l_538) <= p_27) < p_27) , 7UL) > 0UL), p_26)) , (*l_35)) , (void*)0))) == l_643), 1)), p_26)) , p_26)), l_644)) , 0x2DF2L) < l_645) && (-5L)) == (*g_204)))
            {
                int *l_646 = &g_12;
                (*g_239) = l_646;
            }
            else
            {
                int l_663 = (-4L);
                unsigned l_667 = 1UL;
                unsigned *****l_681 = &l_679;
                int l_689 = (-6L);
                for (g_138 = 19; (g_138 != 15); g_138 = safe_sub_func_int32_t_s_s(g_138, 3))
                {
                    unsigned *l_659 = &g_286;
                    int l_660 = (-1L);
                    int ***l_664 = &l_537;
                    l_663 ^= ((!func_62((*l_35), &l_644, (((&g_238 != &g_238) ^ (safe_mod_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(p_27, ((safe_mod_func_int32_t_s_s(((0UL != ((*l_659) |= (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(func_49(((g_385 ^= func_49(((p_26 == ((p_26 != l_644) , (*l_35))) , (*g_331)), p_27, p_27, &g_81, l_643)) && g_658), (*g_193), p_26, l_537, &g_150))), 5)))) & (*g_435)), p_26)) | (*g_331)))) == l_660) , 0L) , p_26), l_661))) || p_26), l_662)) ^ l_660);
                    (**g_238) = func_78(((*l_664) = &g_81));
                    l_644 = (*l_35);
                }
                if ((*l_35))
                    break;
                g_85 = p_27;
                if ((safe_rshift_func_uint16_t_u_s(l_667, (((safe_add_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((l_644 &= ((safe_sub_func_uint32_t_u_u(((g_89 , (((safe_sub_func_int8_t_s_s((((((*g_331) , l_676) != l_678) & 0x79D4L) >= (*l_35)), (((*l_681) = l_679) != g_682))) == 0x402DE390L) && 0xAA5EL)) | p_27), p_26)) , p_27)), (-4L))) != l_663) , 0UL), (*g_331))) != p_26) == (*g_193)))))
                {
                    int l_686 = 0xB35B72A7L;
                    unsigned l_690 = 0xEE358DFEL;
                    int *l_691 = (void*)0;
                    int *l_692 = &l_34;
                    short *l_695 = &g_150;
                    unsigned l_696 = 0UL;
                    (*l_35) ^= (-3L);
                    (*l_692) &= (l_644 >= (safe_add_func_uint8_t_u_u((p_26 > ((*g_193) = func_46(p_26, ((l_663 > l_686) & (l_690 &= (((***g_683) | ((safe_mod_func_uint32_t_u_u(((0x882D50D5L != 0x2F4AD020L) > (((*l_643) = func_46(((**g_203) > l_661), p_27)) <= 0xFA91L)), 0x99881F85L)) ^ l_689)) ^ 0x81L)))))), 254UL)));
                    for (g_135 = (-13); (g_135 <= 53); g_135 = safe_add_func_int8_t_s_s(g_135, 5))
                    {
                        int l_697 = 0x7D51D3D4L;
                        char *l_700 = &g_89;
                        short *l_701 = &g_150;
                        if ((*l_35))
                            break;
                        l_644 &= func_46(((p_27 == 1L) && 0x1096L), ((l_662 == l_695) | (l_696 , func_46(l_697, (**g_330)))));
                        (*l_692) = (!(((((*l_692) > (((func_49((**g_330), ((0xFD633E23L <= ((((-2L) >= ((*l_35) = (safe_sub_func_int8_t_s_s((**g_330), (**g_330))))) != p_27) >= ((*l_700) = l_697))) ^ func_49(func_55(g_135, l_538), p_26, p_26, &g_81, l_701)), p_27, l_537, l_538) , p_26) <= p_26) < 9L)) <= 0x64A5E9E9L) ^ (***g_683)) == p_26));
                    }
                    (*l_692) |= 1L;
                }
                else
                {
                    short l_712 = (-1L);
                    int l_719 = 0xABE46468L;
                    if (func_46((((((*l_35) <= (l_644 & func_55(p_26, l_59))) <= ((((safe_sub_func_int32_t_s_s((((****l_676) = func_55(p_27, &g_15)) , (*l_35)), 0x5F236565L)) && 5UL) , g_595) >= 0xB5DFL)) , (-7L)) | p_26), p_27))
                    {
                        const short **l_707 = (void*)0;
                        const short ***l_706 = &l_707;
                        (*l_706) = &l_59;
                    }
                    else
                    {
                        (*l_35) = p_26;
                        l_719 = ((safe_add_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((*l_35) = (((*g_193) ^= p_27) , l_663)), 0xC725BBD2L)) , l_712) <= (safe_rshift_func_int8_t_s_s((l_644 != (safe_add_func_int32_t_s_s((func_55(((**g_477) , p_26), ((((void*)0 != l_717) , l_718) , (void*)0)) >= p_27), (**g_203)))), l_667))), (**g_330))) > (-1L));
                    }
                }
            }
            l_644 = ((((p_26 < (p_26 == 0x60L)) >= ((*l_35) < (safe_sub_func_uint8_t_u_u((((***l_680) = (l_644 ^ (((***l_677) = (*l_35)) | (((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((p_26 < p_27) > 3L) == l_661) , l_718), (****g_682))), 1)) , l_536) >= p_27)))) != p_27), (*g_193))))) > 0x44423EFEL) & 0x2EL);
        }
    }
    for (g_4 = 5; (g_4 > (-6)); --g_4)
    {
        unsigned l_728 = 0xB7C252FAL;
        int *l_729 = &g_85;
        (*g_239) = ((*g_80) = (*g_80));
        (*l_729) &= l_728;
    }
    (*l_733) = ((l_730 != (void*)0) <= (((safe_mod_func_int16_t_s_s((p_27 || p_27), g_532)) & 0x6B88C5B9L) ^ 0x7BF7L));
    if ((~(((+(9UL || ((safe_sub_func_uint32_t_u_u((p_27 , ((*l_745) = (((safe_lshift_func_uint8_t_u_s((*g_193), ((safe_lshift_func_int8_t_s_u((l_740 , ((*g_331) = (*g_331))), (((void*)0 != &l_677) ^ (+l_741)))) , ((*g_331) = (safe_mod_func_int8_t_s_s((((***g_683) = func_55(p_26, &g_532)) == g_744), p_26)))))) & 0xFEE9L) >= 3UL))), 0x99309D30L)) == l_746))) ^ p_27) != p_26)))
    {
        char l_750 = 0x85L;
        (*l_733) = ((p_27 || ((**g_203) ^= (p_26 < p_27))) , ((p_26 != p_26) , (((g_747 >= ((*g_193) == func_46((safe_sub_func_int16_t_s_s(((*l_538) = (l_750 && 0L)), 0x12DCL)), l_750))) < g_599) && l_750)));
        return p_27;
    }
    else
    {
        int ** const *l_755 = (void*)0;
        int ** const **l_754 = &l_755;
        int ** const ***l_753 = &l_754;
        (*l_733) ^= (safe_rshift_func_int16_t_s_s(p_27, (l_753 != (void*)0)));
        (*g_239) = func_78(&g_81);
    }
    return (*g_435);
}







static unsigned short func_46(short p_47, const char p_48)
{
    unsigned l_637 = 0UL;
    short *l_638 = &g_532;
    int l_641 = 0xA8EBB5BFL;
    int l_642 = 0x970F7062L;
    l_642 = (l_641 = ((safe_mod_func_uint32_t_u_u((func_62((p_47 , l_637), (*g_239), l_637, l_638) , p_48), (safe_sub_func_uint16_t_u_u(((((p_47 , func_55(p_47, l_638)) != 1L) , 0x6FA5667CL) & p_48), 0x79E3L)))) , l_637));
    return p_48;
}







static unsigned func_49(char p_50, const unsigned char p_51, unsigned char p_52, int ** p_53, short * p_54)
{
    unsigned char l_541 = 0x0DL;
    int l_542 = 0xE0C9D0F2L;
    const short *l_563 = &g_532;
    unsigned **l_571 = &g_204;
    unsigned l_572 = 0xE3E0AC78L;
    char ** const *l_630 = &g_330;
lbl_547:
    l_542 = ((safe_add_func_uint16_t_u_u(0xE36EL, l_541)) , (-1L));
    for (g_382 = 0; (g_382 >= 29); g_382 = safe_add_func_uint8_t_u_u(g_382, 7))
    {
        unsigned char *l_552 = (void*)0;
        int l_557 = (-1L);
        short *l_605 = &g_15;
        int *l_634 = &g_85;
        for (g_68 = 0; (g_68 > 53); ++g_68)
        {
            unsigned char **l_554 = (void*)0;
            const int l_573 = 0xEF07E157L;
            unsigned ***l_575 = &l_571;
            const unsigned **l_596 = (void*)0;
            const int *l_611 = &g_4;
            short *l_612 = &g_532;
            int l_613 = 0x3FBD7917L;
            if (g_68)
                goto lbl_547;
        }
        (*l_634) = l_542;
    }
    return (**g_203);
}







static char func_55(short p_56, const short * p_57)
{
    unsigned char l_535 = 0xAEL;
    for (p_56 = 0; (p_56 == 4); p_56 = safe_add_func_uint16_t_u_u(p_56, 4))
    {
        unsigned short *l_67 = &g_68;
        int l_76 = 0x2DC6606AL;
        short *l_77 = &g_15;
        unsigned short l_511 = 65535UL;
        int *l_533 = &g_85;
        int *l_534 = &g_4;
    }
    return l_535;
}







static int func_62(unsigned short p_63, const int * p_64, unsigned short p_65, short * p_66)
{
    unsigned l_514 = 4294967293UL;
    short *l_517 = &g_15;
    int *l_518 = &g_4;
    int *l_519 = &g_85;
    (*l_519) ^= ((*l_518) = (safe_lshift_func_int16_t_s_s(0x6136L, (l_514 , ((*l_517) = ((2L != (p_63 , (safe_mod_func_int8_t_s_s(p_63, 0x8DL)))) , p_63))))));
    (*l_518) = ((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((*g_331), ((safe_add_func_uint16_t_u_u((((*l_519) | ((((+((*g_204) || 0x787CF84BL)) | (0x8A2FL && ((((safe_mod_func_uint32_t_u_u((*l_519), p_65)) >= (*g_193)) >= ((safe_add_func_uint16_t_u_u((*l_518), (*l_519))) >= (-6L))) || (*l_518)))) ^ (*l_518)) & 0xC28267DAL)) > 2L), p_63)) && 0x90A5D42AL))), (*l_519))) | (*l_519));
    return (*g_435);
}







static const int * func_69(unsigned short * p_70, short * p_71)
{
    unsigned short l_141 = 7UL;
    unsigned char l_169 = 255UL;
    const int *l_172 = &g_12;
    unsigned l_179 = 0xCC4819D7L;
    int l_182 = (-10L);
    int l_197 = 0L;
    char l_198 = 0L;
    int l_229 = (-1L);
    char *l_305 = &g_89;
    int *l_316 = &g_85;
    char ***l_420 = &g_330;
    unsigned **l_447 = &g_204;
    const int *l_491 = &l_182;
    const int *l_492 = &g_4;
    if (l_141)
    {
        int l_145 = 0x8BF8F4ABL;
        int l_151 = 2L;
        short l_173 = 1L;
        int **l_185 = &g_81;
        unsigned char *l_189 = &g_135;
        unsigned char l_221 = 0x93L;
        unsigned char l_258 = 0xA5L;
        char l_269 = 0xB3L;
        for (g_15 = 0; (g_15 > (-3)); g_15--)
        {
            unsigned short l_147 = 65535UL;
            short *l_148 = (void*)0;
            short *l_149 = &g_150;
            int l_152 = 0x7BB088A0L;
            int l_153 = (-1L);
            l_153 |= (((g_12 <= (l_145 = (g_144 &= 0xA185L))) , 0x4CD0L) & ((*p_70) , (1L && (((l_152 = (((safe_unary_minus_func_int16_t_s((l_147 , ((*l_149) |= (((l_147 < (g_100 || l_147)) > 0x9281L) <= 4294967287UL))))) ^ g_135) >= l_151)) ^ 0x0CDD5450L) < 0x7EL))));
            for (l_153 = 0; (l_153 == 23); l_153 = safe_add_func_uint16_t_u_u(l_153, 3))
            {
                int l_156 = (-1L);
                if (l_156)
                {
                    int l_165 = 0L;
                    if ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((-1L) ^ l_151), ((safe_add_func_int8_t_s_s(((g_166 = func_74((safe_add_func_int32_t_s_s(l_165, l_165)))) == p_70), (safe_rshift_func_uint16_t_u_s((((l_169 , ((((safe_rshift_func_int8_t_s_u(l_141, 3)) , (((void*)0 == p_71) ^ 0x1FB0L)) ^ g_6) < l_165)) > g_12) && 7UL), 1)))) < l_156))) == l_141), 7)))
                    {
                        (*g_80) = (void*)0;
                        return l_172;
                    }
                    else
                    {
                        int *l_174 = (void*)0;
                        int *l_175 = &g_85;
                        if ((*l_172))
                            break;
                        if (l_173)
                            continue;
                        (*l_175) = (l_151 & l_145);
                    }
                    if (l_153)
                        continue;
                    return l_172;
                }
                else
                {
                    const int **l_176 = &g_5;
                    (*l_176) = func_78(&g_81);
                    if ((*l_172))
                        continue;
                    (*g_80) = &l_151;
                    (**g_80) = ((*l_172) | ((-1L) ^ 5L));
                }
            }
            l_152 |= l_151;
            l_182 = (safe_sub_func_uint16_t_u_u((l_151 ^ (((8UL & l_145) & (g_92 <= ((l_147 & l_173) || l_179))) & (safe_rshift_func_int8_t_s_u((((*l_172) ^ l_153) | 0L), 0)))), 1UL));
        }
    }
    else
    {
        int *l_293 = &g_85;
        int l_300 = 5L;
        short *l_301 = (void*)0;
        short *l_302 = &g_15;
        char *l_303 = &l_198;
        int *l_304 = (void*)0;
        (*l_293) &= 0xCF5ED426L;
        g_4 |= ((&g_239 != (void*)0) < ((*l_303) ^= ((safe_add_func_uint16_t_u_u((*p_70), ((*l_302) ^= (((((*l_172) ^ 9UL) && (*l_293)) >= ((*l_293) > ((((((~(safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u((*l_293), 10)) , (void*)0) != &l_172), 15))) & (*l_293)) && 0x6852L) ^ l_300) || (*l_293)) > g_85))) , (*l_172))))) , (*l_172))));
        (*l_293) &= (-8L);
    }
    if ((0UL >= (0xA64B0511L != (((((((*l_305) &= 0x53L) , (safe_rshift_func_uint8_t_u_u(0x3BL, 3))) , g_150) && g_135) < ((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((*l_172), ((*l_172) && ((void*)0 == &l_198)))) < g_286) , (*p_70)), (*l_172))) && (*l_172))) <= 0x9F58L))))
    {
        unsigned char l_314 = 0x25L;
        int *l_315 = &l_182;
        const char l_323 = 1L;
        short l_328 = 0x8A50L;
        int ***l_329 = &g_80;
        char ***l_332 = &g_330;
        (*l_315) = (((((safe_lshift_func_int8_t_s_u(((((*g_193) = (*g_193)) >= 0x32L) , ((*l_172) & ((((void*)0 == (*g_238)) < l_314) ^ (l_314 , 0x0992L)))), 5)) == 0xF2E5EF05L) & 1L) , &g_92) != &l_141);
        l_172 = l_316;
        (*l_316) = (safe_mod_func_int16_t_s_s(0x13F1L, (safe_lshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s(l_323, (*l_172))) , (*l_315)) || (*l_316)), ((*l_172) != (!(safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(l_328, 3)) & (((*p_70) = (*l_172)) , ((*l_305) &= (l_329 != (void*)0)))) , l_315) == (void*)0), g_4))))))));
        (*l_332) = g_330;
    }
    else
    {
        unsigned short l_337 = 4UL;
        unsigned *l_348 = (void*)0;
        int l_375 = 0L;
        int ***l_400 = (void*)0;
        unsigned l_431 = 0x06C33CF6L;
        short l_440 = 0xACF7L;
        int * const *l_461 = (void*)0;
        int * const **l_460 = &l_461;
        int * const ***l_459 = &l_460;
        int *l_465 = &l_375;
        unsigned char l_471 = 0x1CL;
        int *l_475 = &g_391;
        int * const *l_474 = &l_475;
        const unsigned short l_483 = 0xE886L;
        unsigned ***l_485 = (void*)0;
        unsigned ****l_484 = &l_485;
        unsigned ***l_487 = &l_447;
        unsigned ****l_486 = &l_487;
        unsigned ***l_489 = &g_203;
        unsigned ****l_488 = &l_489;
        for (g_288 = 9; (g_288 != 36); ++g_288)
        {
            short l_335 = 1L;
            int l_370 = 0L;
            char *l_384 = &g_102;
            short l_432 = 0xEAB8L;
            unsigned short *l_438 = &l_337;
            unsigned ***l_448 = (void*)0;
            unsigned ***l_449 = &g_203;
            int *l_450 = (void*)0;
            int *l_451 = &l_370;
            unsigned char l_470 = 1UL;
        }
        if (((safe_rshift_func_int8_t_s_u((((((safe_add_func_int32_t_s_s((*g_435), (*l_316))) || ((*l_465) , (((*g_193) && l_483) != (((*g_478) , 4294967295UL) < (((((*l_484) = &g_203) == ((*l_488) = ((*l_486) = &l_447))) ^ (*g_193)) , (*l_172)))))) == 0x60L) , (*l_172)) , (*l_316)), 3)) != 65535UL))
        {
            const int *l_490 = &l_182;
            return l_492;
        }
        else
        {
            (*l_316) = 0x8102B237L;
        }
        for (g_391 = 23; (g_391 != 16); g_391--)
        {
            unsigned short ***l_495 = (void*)0;
            int l_500 = 1L;
            g_496 = &p_70;
            (*l_316) = (*l_316);
            (*g_239) = &l_375;
            (*l_316) = (((+(***g_238)) != (safe_mod_func_int8_t_s_s(((l_500 && 65527UL) , (*g_331)), ((*g_193) = (*l_491))))) <= (safe_mod_func_uint8_t_u_u((*l_492), ((g_89 == l_500) | 0xB0CDL))));
        }
    }
    return &g_85;
}







static unsigned short * func_74(short p_75)
{
    const int **l_115 = &g_5;
    int l_118 = 0xCF1A457CL;
    int l_133 = (-1L);
    unsigned char *l_134 = &g_135;
    unsigned short *l_136 = &g_100;
    unsigned *l_137 = &g_138;
    int *l_139 = &g_85;
    char l_140 = 0x8DL;
    (*l_115) = func_78(g_80);
    (*l_139) ^= ((p_75 == (safe_rshift_func_uint16_t_u_s(p_75, ((l_118 , ((p_75 >= ((safe_add_func_uint32_t_u_u((l_118 , (safe_rshift_func_uint16_t_u_s(g_92, 2))), ((*l_137) = (safe_sub_func_uint16_t_u_u(((*l_136) = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((*l_134) = (safe_rshift_func_int16_t_s_s(((1UL != (g_100 , (l_133 = (safe_add_func_uint8_t_u_u(p_75, g_15))))) && 0xC6L), g_100))), p_75)), 10))), g_12))))) , (-1L))) != p_75)) && g_4)))) , (-10L));
    (*l_139) ^= l_140;
    return &g_100;
}







static const int * func_78(int ** p_79)
{
    int * const l_84 = &g_85;
    int * const *l_83 = &l_84;
    int * const **l_82 = &l_83;
    char *l_88 = &g_89;
    short *l_90 = &g_15;
    unsigned short *l_91 = &g_92;
    int *l_108 = &g_12;
    if ((g_4 | ((((l_91 = ((((((*l_82) = p_79) == &g_81) >= g_4) | (((((((safe_mod_func_int8_t_s_s((((*l_84) == 0x38L) , (~((*l_88) = g_85))), g_12)) ^ (l_90 != (void*)0)) && 4294967295UL) || 0x0404C693L) , g_73) || (*l_84)) < 0x7599L)) , (void*)0)) != (void*)0) , (*l_84)) && g_73)))
    {
        unsigned l_95 = 3UL;
        int l_96 = (-6L);
        unsigned short *l_97 = &g_92;
        unsigned short *l_98 = (void*)0;
        unsigned short *l_99 = &g_100;
        int *l_103 = &g_4;
lbl_109:
        (*l_103) |= (safe_sub_func_int32_t_s_s((((*l_99) = (((l_95 || (*l_84)) | ((*l_97) = (l_96 = (*l_84)))) < (l_95 | (*l_84)))) , ((g_89 > (g_102 = ((safe_unary_minus_func_uint8_t_u(l_95)) & (!g_6)))) , l_96)), g_85));
        if (g_100)
            goto lbl_114;
        for (g_100 = 0; (g_100 >= 48); g_100 = safe_add_func_uint32_t_u_u(g_100, 2))
        {
            for (g_73 = (-24); (g_73 >= 26); g_73 = safe_add_func_uint32_t_u_u(g_73, 1))
            {
                (*p_79) = (*p_79);
            }
            (*p_79) = l_108;
            if ((**p_79))
                break;
        }
        if (g_6)
            goto lbl_109;
    }
    else
    {
        (*p_79) = (*g_80);
    }
lbl_114:
    for (g_89 = 0; (g_89 >= (-21)); g_89--)
    {
        char l_112 = 6L;
        int *l_113 = &g_4;
        (*p_79) = (*g_80);
        (*l_113) = (l_112 |= ((*l_84) = (p_79 != p_79)));
    }
    (*l_84) = ((void*)0 != l_91);
    (*l_84) = (*l_84);
    return (*g_80);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
