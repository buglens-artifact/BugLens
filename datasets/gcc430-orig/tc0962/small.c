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



static char g_4 = 0xC7L;
static int g_14 = 0xE6E2BFBDL;
static int g_18 = 0x1FDBD017L;
static int g_33 = 0x0A644184L;
static int *g_32 = &g_33;
static char g_36 = 0x10L;
static unsigned char g_39 = 1UL;
static short g_57 = 0L;
static short g_65 = 0x5869L;
static short g_131 = (-1L);
static unsigned char g_167 = 0UL;
static unsigned g_207 = 9UL;
static int g_212 = 0xC9525464L;
static unsigned short g_214 = 0x8E3CL;
static unsigned g_236 = 4294967295UL;
static unsigned short g_242 = 0x5EC4L;
static short *g_252 = &g_57;
static short **g_251 = &g_252;
static int g_279 = (-7L);
static unsigned char g_326 = 0UL;
static int **g_351 = &g_32;
static int ***g_350 = &g_351;
static int g_368 = 0x276F2A36L;
static int g_374 = (-5L);
static unsigned short g_632 = 2UL;
static unsigned char g_668 = 0x15L;
static unsigned char ***g_735 = (void*)0;
static int *g_753 = &g_374;
static int **g_752 = &g_753;
static unsigned char *g_783 = (void*)0;
static unsigned g_804 = 0xCBCFC3E0L;
static char *g_889 = &g_36;
static char **g_888 = &g_889;
static short ***g_948 = &g_251;
static short ****g_947 = &g_948;



static int func_1(void);
static unsigned short func_11(char p_12);
static unsigned func_19(int p_20);
static int * func_40(unsigned char * p_41, int p_42, unsigned char * p_43, unsigned char p_44);
static int func_45(int p_46, unsigned short p_47, unsigned char p_48, unsigned short p_49);
static int func_62(short p_63, int p_64);
static short func_76(unsigned short p_77, int p_78);
static unsigned char func_85(int p_86, unsigned char * p_87, short p_88, char * p_89);
static char func_95(short p_96, unsigned char p_97, int * p_98);
static int * func_99(int * p_100);
static int func_1(void)
{
    int l_5 = 0x6FF55E00L;
    unsigned short l_796 = 1UL;
    int l_832 = 0x591F0493L;
    unsigned char *l_837 = &g_326;
    unsigned short l_846 = 0xEA80L;
    char *l_887 = &g_4;
    char **l_886 = &l_887;
    if ((safe_rshift_func_int8_t_s_s(g_4, 3)))
    {
        unsigned char l_8 = 7UL;
        short l_757 = 0xFEAAL;
        unsigned short l_758 = 0x71BEL;
        int *l_759 = (void*)0;
        int ***l_762 = &g_752;
        int *l_763 = &g_212;
        unsigned short *l_772 = (void*)0;
        unsigned short *l_773 = &g_214;
        short l_816 = 0x7B6EL;
        unsigned l_838 = 1UL;
        char **l_852 = (void*)0;
        char *l_855 = &g_4;
        char **l_854 = &l_855;
        unsigned l_867 = 1UL;
        unsigned l_868 = 1UL;
        unsigned l_869 = 3UL;
        unsigned char l_872 = 9UL;
        short l_905 = 0x7246L;
        g_368 = ((l_5 , ((safe_add_func_int32_t_s_s(((l_8 < (safe_mod_func_uint16_t_u_u((func_11(g_4) ^ (func_19(g_4) , (safe_lshift_func_int16_t_s_u(l_8, (l_757 == l_758))))), (-3L)))) ^ l_5), g_632)) < l_757)) >= l_758);


        (*l_763) &= (g_368 ^= (safe_add_func_uint16_t_u_u(((l_5 , ((*l_762) = &g_753)) == &g_753), 0xA1D8L)));
lbl_857:
        if ((((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(l_5, 5)) > 2L), 8UL)) && (**g_251)) <= l_5))
        {
            char l_780 = 0L;
            for (g_39 = (-21); (g_39 >= 34); g_39++)
            {
                unsigned char *l_777 = &g_167;
                unsigned char **l_776 = &l_777;
                int l_789 = (-1L);
                short *l_790 = (void*)0;
                short *l_791 = &g_131;
                (*g_351) = &l_789;

                ;
            }
            for (g_214 = 2; (g_214 < 20); g_214 = safe_add_func_int32_t_s_s(g_214, 6))
            {
                int l_794 = 0L;
                return l_794;
            }
        }
        else
        {
            unsigned char l_795 = 255UL;
            return l_795;
        }
        if ((l_5 = l_796))
        {
            short ****l_799 = (void*)0;
            short ***l_801 = (void*)0;
            short ****l_800 = &l_801;
            int ***l_802 = &g_752;
            unsigned *l_803 = &g_804;
            int *l_805 = &g_14;
            char l_818 = 6L;
            short **l_823 = (void*)0;
lbl_826:
            (*l_805) ^= ((((*l_763) & ((((*l_803) &= (safe_sub_func_uint8_t_u_u((3L == ((g_39 = g_236) , (*g_252))), (((((&g_251 == ((*l_800) = &g_251)) , &g_4) != (void*)0) , l_802) != l_802)))) , (void*)0) != &l_5)) & g_368) > l_796);

            ;
            if ((safe_rshift_func_uint16_t_u_u(65535UL, 2)))
            {
                short l_817 = 0L;
                (*l_805) = (((void*)0 != &g_236) >= (g_57 > (((*l_773) = (safe_add_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((l_796 != (*l_805)) | 0x57L), (((safe_lshift_func_int16_t_s_s((l_816 = (safe_rshift_func_int16_t_s_u((g_131 = (0L | (0xCDBF6F96L >= ((*g_251) != &l_757)))), 3))), 1)) > (*g_252)) ^ 1L))) | l_796), l_817))) | l_817)));
                (*l_805) = l_5;
            }
            else
            {
                unsigned char l_822 = 0x9AL;
                int *l_824 = (void*)0;
                unsigned l_831 = 0UL;
                int ***l_835 = (void*)0;
                short *l_845 = &g_57;
                if (l_818)
                {
                    short l_821 = 8L;
                    int ***l_836 = &g_351;
                    (*l_805) &= (safe_rshift_func_uint8_t_u_u(l_821, l_821));
                    (*l_763) ^= (l_822 = (*l_805));
                    if ((((g_326 < ((*l_763) = (*l_805))) , l_823) == &g_252))
                    {
                        int *l_825 = &g_14;
                        char *l_839 = &g_36;
                        (**g_350) = l_825;

                        ;
                        if (l_796)
                            goto lbl_826;
                        l_5 = (safe_rshift_func_int16_t_s_s((**g_251), (g_4 >= (safe_lshift_func_int8_t_s_s(func_85(((0xBE64194FL || (((*l_773) = func_76(((*l_773) = g_242), l_831)) & (l_832 & (safe_rshift_func_int16_t_s_u((g_326 ^ (l_835 == l_836)), 11))))) ^ g_242), l_837, l_838, l_839), g_242)))));

                        ;
                        return (*g_32);
                    }
                    else
                    {
                        unsigned char l_840 = 0x1CL;
                        unsigned l_847 = 0UL;
                        unsigned *l_848 = &g_207;
                        unsigned *l_849 = &l_847;
                        char ***l_853 = &l_852;
                        (*l_763) |= ((*l_805) = (g_36 & l_840));
                        (*l_763) = (safe_sub_func_uint32_t_u_u(((*l_849) = ((*l_848) ^= (((0xD4L & ((((((*l_805) && ((((~((safe_add_func_int32_t_s_s(l_840, ((((*g_251) == l_845) , (l_840 && l_840)) , 1UL))) , (((l_846 = (g_374 <= g_236)) < l_847) != l_832))) > g_65) == (**g_251)) | 0L)) >= l_840) > (*l_805)) , 0x1D75L) < g_131)) <= g_632) != 1UL))), (*l_763)));
                        (*l_805) = (safe_lshift_func_uint16_t_u_u((((*l_853) = l_852) != l_854), (~((!(-4L)) ^ (*g_252)))));
                    }
                    if (g_326)
                        goto lbl_826;
                }
                else
                {
                    int l_856 = 0L;
                    (*l_763) ^= l_856;
                }
                (**g_350) = l_759;

                ;
            }
        }
        else
        {
            char l_860 = 0x5AL;
            unsigned *l_870 = &g_207;
            int *l_874 = &g_33;
            char l_907 = (-4L);
            unsigned char *l_908 = &g_668;
            char l_909 = (-6L);
            if (g_14)
                goto lbl_857;
            if (((((*l_773) ^= ((((**g_251) = ((safe_lshift_func_uint16_t_u_s(((*l_763) & l_860), l_860)) ^ l_796)) | (l_860 >= (safe_rshift_func_int8_t_s_u(((*l_855) = g_212), ((*l_837) = ((((*l_870) &= g_374) , g_632) > 0x3CL)))))) == 0x983EL)) < g_368) == l_860))
            {
                int *l_873 = &g_14;
                char l_882 = 0xCCL;
                if (l_860)
                {
                    int l_871 = 0L;
                    (*g_351) = l_873;

                    ;
                    (*g_351) = (g_167 , l_874);

                    ;
                    (*g_32) ^= 0xC460345FL;
                }
                else
                {
                    unsigned char l_885 = 255UL;
                    for (g_804 = 0; (g_804 <= 32); g_804++)
                    {
                        int l_877 = 1L;
                        unsigned short *l_890 = &g_242;
                        int *l_891 = &g_368;
                        l_877 = (0xE2L <= (&g_214 != (void*)0));
                        (*l_891) ^= ((0xA70EL == (safe_add_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s(((**g_251) = l_877), (l_882 = 0xF8AEL))) , (safe_div_func_uint32_t_u_u(g_236, (-1L)))) > (*l_873)) ^ l_885), ((*l_890) = ((*l_874) = ((*l_763) = ((*l_773) ^= ((((g_888 = l_886) != &l_887) & 0L) ^ l_846)))))))) <= l_885);

                        ;
                    }

                    ;
                    for (l_796 = 15; (l_796 == 7); --l_796)
                    {
                        return l_885;


                    }
                    for (g_4 = (-10); (g_4 != 27); g_4++)
                    {
                        int *l_896 = &l_5;
                        (**g_350) = l_896;

                        ;
                    }


                }


                ;
            }
            else
            {
                int l_906 = 0x008DC328L;
                int l_912 = 0xE80E84C0L;
                int l_913 = (-10L);
                if (((g_131 | ((((*l_870) = g_39) | (((safe_sub_func_int32_t_s_s(((*l_763) = 0x720277C3L), ((((*g_252) , (g_632 <= ((g_131 , (g_242 = (safe_div_func_uint16_t_u_u(g_242, ((*l_773) = func_85((((((*l_874) = (~((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((*g_252), 13)) == (g_236 = l_905)), l_906)) | l_907))) | 0L) ^ (-6L)) != 0UL), l_908, (**g_251), (*g_888))))))) & 0x7C08L))) <= 0x4875L) , l_909))) , (*l_874)) ^ 0x17L)) && l_846)) != g_14))
                {
                    int l_910 = 0x0D186EE7L;
                    int *l_917 = &g_279;
                    if (l_910)
                    {
                        unsigned char l_911 = 0xD1L;
                        int **l_916 = &l_874;
                        (*l_916) = ((**g_350) = &l_912);

                        ;
                        ;
                        (*l_763) = ((***g_350) = 1L);
                        (*g_351) = l_917;

                        ;
                    }
                    else
                    {
                        (**g_350) = (void*)0;

                        ;
                        return (*l_874);
                    }

                    ;
                    ;
                }
                else
                {
                    return l_846;
                }

                ;
                ;
            }



            ;
            for (g_374 = 24; (g_374 > 0); g_374 = safe_sub_func_int8_t_s_s(g_374, 1))
            {
                int *l_922 = &g_368;
                (**g_350) = func_99(func_99(l_922));

                ;
                return (***g_350);


            }
        }


        ;
    }
    else
    {
        short l_929 = (-1L);
        int l_949 = 0xAFA1E74CL;
        if (((&g_351 != (void*)0) & g_65))
        {
            unsigned l_923 = 0x35ED7C0DL;
            (**g_350) = (**g_350);
            l_923 = (**g_351);
        }
        else
        {
            short l_924 = 0x3574L;
            unsigned char *l_943 = &g_668;
            int *l_944 = (void*)0;
            int *l_945 = &g_368;
            short ****l_946 = (void*)0;
            (*l_945) &= ((*g_32) = (l_924 >= ((safe_div_func_uint8_t_u_u((+((*g_889) , l_924)), (safe_rshift_func_uint8_t_u_s(l_929, l_5)))) >= (safe_div_func_uint8_t_u_u(((*l_943) = ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((**g_251), (safe_div_func_int8_t_s_s(((((*l_837) = (l_924 , ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_929, (safe_unary_minus_func_int8_t_s(l_924)))), 1L)) <= (*g_252)))) || l_929) | l_929), 0x9FL)))), 2L)) >= (***g_350))), l_929)))));
            l_949 = ((l_946 == g_947) > (((((*l_945) == l_929) < l_796) || g_242) <= ((g_4 > l_832) > g_374)));
        }
        (***g_350) &= l_949;
    }


    ;
    (**g_350) = &l_5;

    ;
    return l_846;



}







static unsigned short func_11(char p_12)
{
    int *l_13 = &g_14;
    int *l_16 = (void*)0;
    int *l_17 = &g_18;
    (*l_13) ^= 5L;
    if (g_14)
        goto lbl_15;
lbl_15:
    (*l_13) = 2L;
    (*l_17) |= (0x27L ^ g_14);
    return g_18;
}







static unsigned func_19(int p_20)
{
    unsigned char l_31 = 7UL;
    char *l_54 = (void*)0;
    int l_58 = (-1L);
    unsigned short *l_749 = &g_242;
    int l_754 = 0xE157CB4CL;
    for (p_20 = (-14); (p_20 != (-23)); --p_20)
    {
        unsigned char l_34 = 4UL;
        char *l_35 = &g_36;
        unsigned char *l_37 = (void*)0;
        unsigned char *l_38 = &g_39;
        char **l_55 = &l_35;
        short *l_56 = &g_57;
    }
    (*g_351) = (void*)0;

    ;
    l_754 |= (1L < func_95(((l_31 == (*g_252)) == (func_76(g_65, func_85((safe_div_func_uint16_t_u_u(((*l_749) = (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(p_20, 0x516DL)), 0))), (safe_mod_func_int16_t_s_s(func_85(((g_752 == (void*)0) , p_20), &l_31, p_20, &g_4), p_20)))), &l_31, l_31, l_54)) <= 0UL)), p_20, &l_58));

    ;
    return p_20;


}







static int * func_40(unsigned char * p_41, int p_42, unsigned char * p_43, unsigned char p_44)
{
    int *l_702 = &g_279;
    int *l_707 = &g_374;
    int l_708 = (-5L);
    unsigned char *l_712 = &g_167;
    int *l_742 = (void*)0;
    l_702 = (void*)0;

    ;
    if (((1UL == (safe_rshift_func_uint8_t_u_s(g_39, (safe_add_func_uint8_t_u_u((((((((((l_707 != l_702) , 4294967295UL) | (p_44 <= g_36)) | 0x82FEL) , (p_44 & p_42)) , (*p_43)) || p_42) , 1L) < (***g_350)), 0x39L))))) , l_708))
    {
        unsigned char l_711 = 0xE3L;
        unsigned *l_713 = &g_236;
        (***g_350) = (safe_add_func_uint8_t_u_u(g_36, ((*g_32) != ((*l_713) = ((1UL ^ (l_711 | ((func_85(l_711, l_712, p_42, l_712) , g_242) || 9L))) , 0UL)))));
    }
    else
    {
        unsigned short *l_716 = &g_242;
        unsigned short *l_717 = (void*)0;
        unsigned short *l_718 = (void*)0;
        unsigned short *l_719 = &g_632;
        unsigned l_720 = 0x04AE9748L;
        int *l_721 = &l_708;
        char *l_730 = &g_36;
        unsigned char **l_737 = &l_712;
        unsigned char ***l_736 = &l_737;
        unsigned short l_740 = 65528UL;
        int *l_741 = &g_33;
        (***g_350) ^= (safe_mod_func_uint16_t_u_u(65535UL, ((*g_252) |= ((l_708 > ((*l_721) <= p_42)) || 3L))));
        (**g_350) = func_99(&l_708);

        ;
        for (g_374 = 0; (g_374 == (-1)); g_374--)
        {
            for (g_167 = 0; (g_167 == 15); g_167++)
            {
                (**g_350) = (*g_351);
            }
        }
        (*l_741) |= (safe_rshift_func_int8_t_s_u(((((safe_add_func_int16_t_s_s((((*l_730) = g_212) | (func_45((g_65 > (safe_rshift_func_uint8_t_u_s((((((65530UL | (safe_add_func_int8_t_s_s((p_44 != ((g_236 , g_735) == l_736)), ((g_212 && (safe_lshift_func_int8_t_s_s(((*p_43) , g_368), g_131))) >= 4294967295UL)))) | 2L) >= (*l_721)) , p_44) , 0xB5L), (*l_721)))), g_207, l_740, g_214) || g_242)), (*l_721))) || p_44) ^ g_368) | 1UL), (*l_721)));
    }

    ;
    return l_742;



}







static int func_45(int p_46, unsigned short p_47, unsigned char p_48, unsigned short p_49)
{
    int l_59 = 0x1AB7A3EBL;
    int l_529 = (-4L);
    char *l_576 = &g_4;
    unsigned char *l_672 = &g_39;
    unsigned char **l_671 = &l_672;
    short **l_675 = &g_252;
    short ***l_676 = (void*)0;
    short ***l_677 = &g_251;
    unsigned l_689 = 0x9C9D6FBCL;
    return (*g_32);
}







static int func_62(short p_63, int p_64)
{
    int l_94 = 0x3B032F89L;
    unsigned char *l_171 = &g_39;
    unsigned l_174 = 0xF67225D3L;
    int **l_243 = &g_32;
    char l_362 = 0x7AL;
    int *l_373 = &l_94;
    char *l_383 = (void*)0;
    short *l_423 = &g_57;
    for (g_65 = 0; (g_65 <= 20); ++g_65)
    {
        (*g_32) = (*g_32);
    }
    for (p_64 = 24; (p_64 < (-13)); --p_64)
    {
        char *l_172 = &g_4;
        int l_175 = 0L;
        int l_239 = 0xB73D5C98L;
        for (g_65 = (-9); (g_65 < 5); g_65 = safe_add_func_int32_t_s_s(g_65, 7))
        {
            short *l_170 = &g_57;
            char *l_215 = &g_36;
            int l_216 = (-4L);
            l_94 = (safe_sub_func_int8_t_s_s((l_216 &= ((*l_215) = (((*l_171) = ((safe_mod_func_int16_t_s_s(1L, func_76(g_65, (((*l_170) = (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(g_4, (0x7554L != (safe_add_func_uint8_t_u_u((func_85(((safe_mod_func_uint16_t_u_u(g_39, (safe_lshift_func_int16_t_s_u((l_94 , (p_64 , ((*l_170) = (((p_63 >= func_95(((p_63 , g_33) == p_64), p_63, &g_33)) > 1L) , (-7L))))), 1)))) | l_94), l_171, p_63, l_172) , l_174), l_175))))) , g_167), p_64))) || p_63)))) & (-8L))) == 0x11L))), 1UL));
        }
        for (g_212 = 20; (g_212 < (-1)); g_212 = safe_sub_func_int16_t_s_s(g_212, 3))
        {
            int l_221 = 0x419C157CL;
            int l_228 = 0xD4EBD064L;
            int l_233 = 0x455BE697L;
            char *l_240 = &g_4;
            for (g_33 = (-6); (g_33 == (-26)); --g_33)
            {
                unsigned char *l_237 = (void*)0;
                int l_238 = 0xC6F2265DL;
                unsigned *l_241 = &g_207;
                g_242 ^= (l_221 <= ((safe_sub_func_uint16_t_u_u((((*l_241) = (safe_rshift_func_uint8_t_u_s((p_64 , func_85((((0x79EAL != (l_228 , (((g_4 , func_85((safe_rshift_func_int16_t_s_u(p_63, ((((l_233 = 0x97L) & ((g_236 = (safe_sub_func_uint8_t_u_u(p_64, (p_63 <= 0x08B59E8CL)))) >= p_64)) <= 0x11F43073L) , 0x002CL))), l_237, l_238, l_171)) >= g_57) < l_174))) | p_64) >= l_239), &g_167, l_94, l_240)), g_167))) & p_64), p_63)) && l_238));
            }
            (*g_32) = (-6L);
        }
        return (*g_32);
    }
    (*l_243) = func_99(func_99(&l_94));

    ;
    if ((safe_add_func_uint8_t_u_u((func_85((**l_243), l_171, (safe_sub_func_uint32_t_u_u(p_64, 0x19ACE6F1L)), (g_33 , &g_36)) <= (*g_32)), (safe_unary_minus_func_uint16_t_u(g_36)))))
    {
        short **l_253 = &g_252;
        unsigned short *l_256 = (void*)0;
        unsigned short *l_257 = (void*)0;
        int l_258 = 1L;
        unsigned char *l_259 = &g_39;
        int *l_309 = (void*)0;
        int l_353 = 0x48C0DEFCL;
        unsigned short l_357 = 1UL;
        unsigned short *l_363 = &g_214;
        unsigned l_366 = 4294967287UL;
        int *l_367 = &g_279;
        unsigned short l_370 = 65535UL;
        unsigned l_375 = 0x848C7A06L;
        unsigned char l_382 = 5UL;
        int **l_384 = &l_309;
        unsigned l_405 = 4294967295UL;
        if ((safe_add_func_uint8_t_u_u(((p_63 && (g_251 == l_253)) >= ((!((**g_251) || func_85(((safe_lshift_func_int16_t_s_u(p_63, (l_258 = p_63))) , 0x436E7556L), l_259, p_63, l_259))) != g_242)), g_207)))
        {
            unsigned char **l_262 = (void*)0;
            unsigned char *l_263 = &g_39;
            int *l_264 = &l_258;
lbl_265:
            for (l_258 = 0; (l_258 > 21); ++l_258)
            {
                if ((*g_32))
                    break;
            }
            (*l_264) |= ((*g_32) = (0xC89EL & (((l_263 = (l_171 = l_171)) != (void*)0) >= p_63)));
            if (p_63)
                goto lbl_265;
        }
        else
        {
            short l_266 = 0L;
            int l_308 = 0xCF54E4A9L;
            (**l_243) = (l_266 |= p_63);
            (*l_243) = func_99(&g_212);

            ;
            if ((((safe_mod_func_uint8_t_u_u(p_64, (**l_243))) ^ 249UL) | p_64))
            {
                unsigned l_273 = 0x1D81846CL;
                unsigned char *l_276 = &g_167;
                int *l_277 = &l_94;
                int *l_278 = &g_279;
                int *l_313 = (void*)0;
                unsigned char *l_325 = &g_326;
                (*l_278) ^= ((p_64 , func_95(((**g_251) = (**g_251)), (safe_mod_func_uint8_t_u_u(((0xDEL > (safe_lshift_func_int16_t_s_u((~l_273), g_36))) || ((safe_div_func_int32_t_s_s(((*l_277) |= (((func_85(l_266, l_276, (**l_243), l_259) < 0xBD65L) , (*g_32)) , p_63)), g_65)) ^ p_63)), p_64)), &l_258)) , p_63);

                ;
                for (g_39 = 0; (g_39 != 21); g_39 = safe_add_func_uint16_t_u_u(g_39, 9))
                {
                    int **l_282 = (void*)0;
                    int ***l_283 = (void*)0;
                    l_243 = l_282;

                    ;
                }

                ;
                if ((safe_sub_func_uint32_t_u_u(p_63, func_76((g_242 &= g_214), (0x5385E6D0L < (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_65, 0)), (safe_rshift_func_uint8_t_u_u((((*l_276) = func_85(((*l_277) = (p_63 , l_258)), l_171, (*g_252), &g_36)) | 0xE0L), 1)))))))))
                {
                    int **l_292 = &l_277;
                    (*l_292) = &g_33;

                    ;
                    if (p_63)
                        goto lbl_310;
                    for (g_131 = 28; (g_131 < 14); g_131--)
                    {
                        char *l_305 = (void*)0;
                        char *l_306 = &g_36;
                        int *l_307 = &l_258;
                        l_308 &= ((*l_307) &= ((**l_292) = (safe_lshift_func_int16_t_s_s(((*g_252) = ((safe_lshift_func_uint8_t_u_s(g_65, 4)) < ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((-3L) <= (((safe_sub_func_int8_t_s_s((p_64 || (g_242 , ((*l_278) |= ((*l_306) ^= g_167)))), p_63)) , (g_131 & 0xA4AEA5D3L)) , g_4)), 7)), 0xA5L)) , 0x870D56FBL))), (**l_292)))));
                        return (*g_32);
                    }
lbl_310:
                    g_32 = ((+p_64) , ((*l_292) = (l_309 = func_99(((*l_292) = &p_64)))));

                    ;
                    ;
                    ;
                    (*l_292) = ((**l_292) , &g_33);

                    ;
                }
                else
                {
                    int *l_314 = &g_33;
                    for (l_94 = 0; (l_94 > (-15)); --l_94)
                    {
                        l_314 = l_313;

                        ;
                        (*l_278) |= (-1L);
                    }

                    ;
                    if (g_212)
                        goto lbl_354;
                }

                ;
                ;
                ;
                if (((((((safe_div_func_uint16_t_u_u(1UL, (safe_mod_func_uint16_t_u_u((1UL == (safe_sub_func_int8_t_s_s(func_85(((*l_277) = ((*l_278) = (p_63 >= ((*l_325) &= (l_308 , ((*l_171) &= (((safe_lshift_func_uint8_t_u_s(0xB1L, ((((safe_rshift_func_int8_t_s_s(l_308, 1)) && p_64) != (0x4240L == p_63)) != g_167))) , (void*)0) == (void*)0))))))), l_171, (*g_252), &g_4), l_308))), (*g_252))))) ^ 1UL) <= 0UL) , g_214) ^ p_63) | 0x0FL))
                {
                    return p_63;


                }
                else
                {
                    unsigned l_327 = 0xF4ECE1DEL;
                    (*l_277) = l_327;
                    for (l_327 = (-2); (l_327 >= 46); l_327 = safe_add_func_uint8_t_u_u(l_327, 5))
                    {
                        char l_331 = (-6L);
                        short *l_332 = &g_65;
                        (*l_278) ^= ((safe_unary_minus_func_int32_t_s(l_331)) & ((*l_332) ^= (*g_252)));
                    }
                    (*l_277) &= 0L;
                    (*l_278) = 8L;
                }
            }
            else
            {
                char *l_335 = &g_36;
                (**l_243) |= (safe_div_func_uint8_t_u_u(g_57, ((*l_335) = 0x74L)));
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        (*g_32) = (g_214 <= g_279);
        if ((*g_32))
        {
            int l_338 = (-4L);
            int ***l_349 = (void*)0;
            int ***l_352 = &g_351;
            l_353 ^= (l_258 = ((((safe_sub_func_uint32_t_u_u(l_338, (p_63 ^ 0x65297415L))) , (safe_rshift_func_uint8_t_u_s(l_338, (safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((***g_350) &= (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_63, (4294967294UL > ((((p_63 && (l_349 == (l_352 = g_350))) ^ 0UL) , 0L) , g_279)))), 7UL))), g_131)), p_63))))) , p_63) <= 0x1B200F8AL));
            (***l_352) = 6L;
        }
        else
        {
lbl_354:
            (**g_350) = (void*)0;

            ;
            (*l_367) = ((*g_252) , ((((safe_mod_func_uint32_t_u_u(l_357, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_242 > (l_362 == (p_63 | (7UL <= (((((*l_363) = g_167) < ((((safe_rshift_func_uint8_t_u_s(g_236, 6)) , l_366) != p_63) | 4294967288UL)) | p_64) , p_64))))), 7)), 0)))) == p_64) && l_357) <= p_64));
            if (p_64)
            {
                int *l_369 = &l_94;
                int l_389 = 0x3D4C7E90L;
                l_367 = (*g_351);

                ;
                (*l_369) ^= g_368;
                if (func_76(g_131, ((l_370 || (safe_add_func_uint32_t_u_u((((void*)0 != l_373) || (0x64B61652L && g_167)), g_279))) , (g_374 || (~((((**g_251) = (**g_251)) , g_212) <= l_375))))))
                {
                    (**g_351) = p_63;
                }
                else
                {
                    int *l_390 = &g_368;
                    (*l_369) = (func_85(((*l_369) &= ((func_76(((*l_363) = ((((***g_350) || (safe_div_func_uint32_t_u_u((65532UL >= ((+((safe_lshift_func_int8_t_s_s(9L, 3)) || ((func_95((l_382 <= (**g_251)), g_131, (**g_350)) , g_33) < p_63))) | p_63)), 1L))) <= 3L) || g_368)), p_64) & 0x782FL) <= 0xB9E7L)), &g_39, p_64, l_383) | g_374);
                    (***g_350) |= p_63;
                    (***g_350) ^= (&l_373 != l_384);
                    (*l_390) = (((p_64 & g_65) ^ (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((((((l_258 |= ((*l_373) = ((*g_32) = p_63))) <= ((*g_252) , (l_389 == (g_36 = 0x0DL)))) , p_63) , p_63) != p_64), 0x113CL)), p_64))) , (*l_373));
                }

                ;
            }
            else
            {
                unsigned char **l_394 = &l_171;
                unsigned char ***l_393 = &l_394;
                int l_401 = (-1L);
                short l_404 = 0xAFEBL;
                int l_406 = 0x49201524L;
                l_406 &= (p_63 && ((safe_rshift_func_uint8_t_u_u((*l_367), (((p_63 > (((*l_393) = &l_259) == (void*)0)) >= ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(g_242, ((p_63 , (((*g_252) = (safe_mod_func_uint32_t_u_u(l_401, (l_405 = (safe_sub_func_uint8_t_u_u((((p_64 | p_63) != 1L) == l_404), p_63)))))) && (**g_251))) | g_4))) >= (*l_373)), p_64)) , g_4)) ^ g_39))) > 0x767BE0A9L));

                ;
                p_64 ^= 0x467D1D2DL;
                (*l_367) = p_63;
                for (l_370 = 0; (l_370 == 5); ++l_370)
                {
                    char l_409 = 0x44L;
                    (*l_373) |= ((*l_367) = (-3L));
                    l_409 = p_63;
                    (**g_350) = (void*)0;
                    p_64 &= (safe_sub_func_uint32_t_u_u(8UL, 4294967295UL));
                }
            }

            ;
            ;
        }

        ;
        ;
    }
    else
    {
        char *l_421 = &g_4;
        int l_426 = 0x61F50D46L;
        unsigned *l_444 = (void*)0;
        unsigned **l_443 = &l_444;
        int **l_519 = &g_32;
        for (g_167 = (-27); (g_167 > 53); g_167 = safe_add_func_uint8_t_u_u(g_167, 3))
        {
            int *l_420 = &g_279;
            char *l_422 = &l_362;
        }
        (**l_519) = 0xD744C248L;
    }

    ;
    ;
    return p_63;


}







static short func_76(unsigned short p_77, int p_78)
{
    int *l_176 = &g_33;
    int **l_177 = (void*)0;
    int **l_178 = &g_32;
    short *l_179 = (void*)0;
    unsigned char *l_182 = &g_167;
    int l_210 = 0xDE130CB7L;
    (*l_178) = l_176;

    ;
    if ((**l_178))
    {
        char *l_183 = &g_4;
lbl_188:
        (*l_176) = ((!(**l_178)) == (((void*)0 == l_179) < p_78));
        (**l_178) = (*g_32);
        for (p_77 = 0; (p_77 == 45); p_77++)
        {
            unsigned l_186 = 0xBADE577BL;
            int l_187 = 0L;
            (*g_32) = (1L && func_85((*g_32), l_182, p_78, l_183));
            (*l_176) = p_78;
            for (p_78 = 8; (p_78 != (-23)); p_78 = safe_sub_func_int8_t_s_s(p_78, 8))
            {
                (*g_32) &= (l_187 = l_186);
            }
            if (p_78)
                goto lbl_188;
        }
    }
    else
    {
        unsigned char l_199 = 0x6EL;
        short *l_200 = (void*)0;
        short *l_201 = &g_131;
        short **l_204 = &l_200;
        int l_205 = 6L;
        unsigned *l_206 = &g_207;
        unsigned char *l_208 = &g_167;
        int l_209 = 0x90C89A78L;
        int *l_211 = &g_212;
        unsigned short *l_213 = &g_214;
        (*l_211) ^= ((((safe_lshift_func_uint16_t_u_s(g_33, 14)) < g_39) ^ (l_209 &= ((*l_208) = func_85((safe_sub_func_uint16_t_u_u(0x6CCDL, (safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((*l_201) = (0x480A48E4L < (l_199 &= (**l_178)))), (((safe_rshift_func_int8_t_s_u((*l_176), p_78)) && (((func_85((p_78 ^ ((*l_206) |= ((((((*l_204) = &g_57) == (void*)0) , (*l_204)) != l_179) , l_205))), l_208, g_33, l_208) > 0x3CC5L) ^ 8UL) | p_77)) , (-4L)))) != l_205), l_205)), 12)))), l_182, (*l_176), &g_36)))) , l_210);

        ;
        (*g_32) = 0xDA497F64L;
        (**l_178) = (((0xF0L <= (((-10L) != (*l_211)) || (g_131 ^ ((0UL & ((**l_178) ^ (*l_211))) ^ ((((*l_213) &= (0xC662L <= 1L)) != p_77) < p_78))))) <= 2UL) || (*l_211));
    }
    return g_57;
}







static unsigned char func_85(int p_86, unsigned char * p_87, short p_88, char * p_89)
{
    int **l_173 = &g_32;
    l_173 = l_173;
    return g_36;
}







static char func_95(short p_96, unsigned char p_97, int * p_98)
{
    int *l_101 = &g_33;
    int **l_102 = &g_32;
    unsigned char l_105 = 0UL;
    (*g_32) = 0x9D776076L;
lbl_134:
    (*l_102) = func_99(l_101);

    ;
    for (g_33 = 0; (g_33 < 27); ++g_33)
    {
        int *l_106 = (void*)0;
        int l_107 = 0L;
        char *l_121 = &g_4;
        (*l_102) = (void*)0;

        ;
        l_107 = l_105;
        if ((*p_98))
            continue;
        for (p_97 = 0; (p_97 < 40); ++p_97)
        {
            unsigned l_114 = 0xD67D06F9L;
            short *l_128 = (void*)0;
            short *l_129 = &g_57;
            short *l_130 = &g_131;
            unsigned char *l_132 = &l_105;
            int l_133 = (-10L);
            int l_150 = 0xEC6B6B0DL;
            l_133 = ((1UL ^ (safe_add_func_uint8_t_u_u(((*l_132) &= (safe_add_func_int32_t_s_s(l_114, (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*l_130) = ((((0x29F4L >= (l_121 == &g_4)) == p_97) == g_36) , (safe_add_func_int32_t_s_s(((3UL > (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((*l_129) = (((void*)0 == &p_97) < g_65)), p_97)) , g_33), g_36))) > (-9L)), p_97)))) && p_97), g_39)), g_4)) && g_33), p_96))))), 0UL))) ^ 0x80219EACL);
            l_133 ^= l_114;
            if ((1UL > (*p_98)))
            {
                int ***l_139 = &l_102;
                unsigned short l_146 = 65535UL;
                (*l_102) = p_98;


                if (l_133)
                    goto lbl_134;
                l_107 = (safe_lshift_func_int16_t_s_u(g_36, (safe_mod_func_uint16_t_u_u((((((((*l_139) = &g_32) != (p_96 , &g_32)) < ((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_97, p_97)), l_146)) ^ ((safe_add_func_int8_t_s_s(p_97, 0x71L)) ^ g_33)) ^ (*g_32)), 1)) || g_39)) , (*l_101)) > p_96) == 65532UL), 0xF4D7L))));
            }
            else
            {
                char *l_165 = &g_36;
                unsigned char *l_166 = &g_167;
                int *l_168 = (void*)0;
                int *l_169 = &l_133;
                if ((*p_98))
                {
                    unsigned char l_149 = 255UL;
                    int l_151 = (-10L);
                    l_150 ^= (l_133 = (((*l_101) == 0x1CAE20C2L) | l_149));
                    l_151 = (*p_98);
                }
                else
                {
                    unsigned l_154 = 0UL;
                    l_150 ^= (safe_sub_func_uint8_t_u_u(g_36, l_154));
                    if ((*p_98))
                        continue;
                    return g_131;
                }
                (*l_169) |= (safe_mod_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((*p_98) & (*p_98)), p_97)) & g_57) <= 6UL), (g_39 , ((*l_166) = ((((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((((*l_132) = 8UL) || ((((*l_165) = ((*p_98) != (*p_98))) , (*p_98)) <= 0x8029A732L)), 0)) >= g_33), 0x10A17625L)) , 0x6BL) <= g_131) ^ g_65)))));
                (*l_102) = &g_33;

                ;
            }


        }


    }


    return (*l_101);
}







static int * func_99(int * p_100)
{
    (*p_100) |= 0xD206F84CL;
    return p_100;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_668, "g_668", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
