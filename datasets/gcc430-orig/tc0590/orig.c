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



static unsigned short g_3 = 5UL;
static int g_5 = 0xF37831E4L;
static char g_68 = 0L;
static short g_70 = 5L;
static char *g_87 = &g_68;
static char **g_86 = &g_87;
static int g_98 = 0L;
static int g_111 = 0x8DBE583CL;
static int **g_131 = (void*)0;
static unsigned g_135 = 4294967287UL;
static char g_167 = 7L;
static unsigned char g_195 = 0x70L;
static unsigned char *g_194 = &g_195;
static unsigned short g_207 = 1UL;
static char g_211 = 3L;
static int *g_214 = &g_5;
static unsigned short **g_226 = (void*)0;
static int g_248 = (-4L);
static short g_270 = 0xB3CAL;
static unsigned short g_304 = 2UL;
static unsigned g_308 = 4294967288UL;
static int ***g_418 = &g_131;
static int ****g_417 = &g_418;
static int *****g_416 = &g_417;
static unsigned char **g_448 = &g_194;
static unsigned char ***g_447 = &g_448;
static unsigned g_532 = 4294967292UL;
static unsigned char g_625 = 1UL;
static int g_627 = 1L;
static int g_629 = 3L;
static int *g_634 = &g_629;
static short g_657 = 0x1B36L;
static unsigned g_667 = 4294967295UL;
static short *g_694 = &g_70;
static short **g_693 = &g_694;
static int *g_708 = (void*)0;
static int g_713 = 0xAA51419EL;
static int *g_739 = &g_713;
static char ***g_749 = (void*)0;
static int *g_802 = &g_627;
static int g_843 = 0xF8785A31L;
static unsigned *g_850 = (void*)0;
static unsigned **g_849 = &g_850;
static char g_859 = 0xD0L;
static unsigned g_876 = 0x73A22468L;



static unsigned func_1(void);
static unsigned short func_6(char p_7, short p_8);
static unsigned char func_11(int * p_12, int * p_13, unsigned p_14, int * p_15, int * p_16);
static int * func_17(int p_18, int * p_19, int * p_20, int * p_21, int * p_22);
static int func_23(int * p_24);
static unsigned char func_29(unsigned p_30);
static int * func_33(char p_34, int p_35, int * p_36);
static unsigned short func_39(char p_40, int * p_41, int p_42, short p_43, int * p_44);
static short func_47(char p_48, int * p_49, int * p_50, int p_51);
static char func_54(unsigned p_55, unsigned char p_56, int * p_57, char p_58);
static unsigned func_1(void)
{
    char l_2 = 1L;
    int *l_628 = &g_629;
    int *l_647 = (void*)0;
    int ***l_727 = (void*)0;
    short **l_730 = &g_694;
    short ***l_731 = (void*)0;
    short **l_732 = &g_694;
    int **l_740 = (void*)0;
    int **l_741 = &g_634;
    unsigned short l_742 = 65529UL;
    unsigned *l_743 = &g_667;
    char **l_748 = &g_87;
    unsigned *l_750 = &g_532;
    int *l_751 = &g_627;
    int *l_799 = &g_98;
    int l_841 = 0x25048133L;
    unsigned l_842 = 0x4C9BA746L;
    if (l_2)
    {
        int *l_4 = &g_5;
        (*l_4) |= g_3;
    }
    else
    {
        int **l_630 = (void*)0;
        int *l_632 = &g_629;
        int **l_631 = &l_632;
        int **l_633 = (void*)0;
        unsigned l_684 = 4294967292UL;
        int *l_712 = &g_713;
        int l_716 = (-1L);
        int *****l_717 = &g_417;
        unsigned *l_722 = (void*)0;
        (*l_712) &= (func_6((safe_rshift_func_int8_t_s_u((&g_5 == &g_5), func_11(func_17(func_23(&g_5), l_628, ((*l_631) = l_628), (g_634 = l_628), l_628), l_647, g_248, l_647, l_647))), l_684) >= 65526UL);



        for (g_167 = 22; (g_167 < (-30)); g_167 = safe_sub_func_int8_t_s_s(g_167, 4))
        {
            return l_716;
        }
        (**l_631) = ((l_717 == &g_417) != (g_135 &= g_211));
    }



    (*g_634) = (safe_sub_func_uint32_t_u_u(((*l_628) < 0x32L), ((safe_mul_func_int16_t_s_s((-3L), (*l_628))) >= ((*g_694) != (((**g_416) = l_727) != l_727)))));

    ;
    (*g_739) = ((**l_741) = (safe_sub_func_int16_t_s_s(((**l_730) = (l_730 == (l_732 = (void*)0))), (safe_add_func_int32_t_s_s(((~((safe_mod_func_uint8_t_u_u(((((*l_743) = (safe_mul_func_int8_t_s_s((**g_86), ((g_667 | g_207) | (*g_87))))) && g_207) == 0xD4F3L), (**g_86))) && (*g_194))) && (**l_741)), 4294967293UL)))));

    ;
    if ((((**l_741) > (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((*g_194), ((void*)0 == l_748))), (&l_741 == (*g_417))))) ^ ((g_308 = (func_54(((*l_750) = ((g_749 = &l_748) != (void*)0)), (*l_628), l_751, (**g_86)) > g_111)) < 0xFCB66095L)))
    {
        unsigned l_752 = 0x19D9E5A9L;
        int **l_753 = &l_628;
        unsigned short l_756 = 0x8A7EL;
        unsigned l_766 = 0x809E4529L;
        int l_767 = 1L;
        unsigned short l_768 = 0UL;
        short l_797 = 0xE7FCL;
        int l_823 = 0xB7B51AFFL;
        unsigned char l_840 = 0x4CL;
        int *l_844 = (void*)0;
        unsigned char **l_857 = &g_194;
        unsigned char l_879 = 0UL;
        (*l_751) = l_752;
        if (((*l_628) == (&l_647 != (l_753 = l_753))))
        {
            int l_765 = 0xF0DBF6A4L;
            int l_782 = (-4L);
            int l_796 = 0L;
            unsigned l_832 = 0x38EF0B08L;
            char *l_852 = &g_211;
            int *l_867 = (void*)0;
            if ((safe_mul_func_uint8_t_u_u(((***g_447) = l_756), (safe_mul_func_uint8_t_u_u(func_47(((9L | (safe_sub_func_uint8_t_u_u(((**l_753) != ((safe_sub_func_uint32_t_u_u(1UL, (safe_rshift_func_uint16_t_u_s((((((0xD75BDF08L ^ g_625) ^ l_765) != 1UL) & (l_767 ^= (((*l_751) = (**l_753)) < l_766))) & 0L), 13)))) > g_308)), l_765))) && (*g_694)), (*l_753), &l_765, (*g_634)), l_768)))))
            {
                int **l_773 = &l_751;
                short l_774 = 0L;
                int *l_779 = &g_98;
                char ***l_800 = &l_748;
                (*l_751) = (*g_739);
                l_782 |= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((void*)0 != l_773), l_774)), (safe_lshift_func_uint8_t_u_u(((**l_741) &= (safe_mul_func_uint16_t_u_u(((~g_167) > l_765), 6L))), (***g_447)))));
                for (g_135 = 0; (g_135 < 5); g_135++)
                {
                    unsigned char l_795 = 0x1BL;
                    unsigned short *l_798 = &l_768;
                    int l_822 = (-1L);
                }
                (*l_741) = (*l_773);

                ;
            }
            else
            {
                char l_839 = 0x35L;
                (*l_751) &= (((l_823 == (0L & ((g_68 & (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_832, l_782)), (safe_add_func_int32_t_s_s((*g_739), ((g_532 ^ (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((*g_194), l_839)), l_840))) != 3L))))), 0xC9C48DB4L)), l_839))) ^ l_841))) != l_796) | l_842);
            }

            ;
            (*l_753) = (*l_753);
            for (g_627 = 0; (g_627 < 10); g_627 = safe_add_func_uint16_t_u_u(g_627, 4))
            {
                unsigned ***l_851 = &g_849;
                char *l_853 = (void*)0;
                int *l_854 = &l_823;
                (*g_739) = (((safe_lshift_func_int16_t_s_s((((*l_851) = g_849) == &g_850), (l_852 != (l_853 = l_852)))) >= 0x6AC77F46L) != l_765);

                ;
                (*l_741) = l_854;

                ;
                for (g_667 = 26; (g_667 == 4); g_667--)
                {
                    unsigned l_858 = 0x31B66EA6L;
                    unsigned *l_860 = &g_135;
                    int ****l_862 = &g_418;
                    int *****l_861 = &l_862;
                    int *l_863 = &l_767;
                    (*g_447) = l_857;
                    (*l_628) |= ((*l_854) = (!(((65531UL < (-1L)) == g_859) & ((*l_860) = (*l_751)))));
                    if ((0xA9L <= ((*l_751) ^ ((l_858 ^ (l_858 | 252UL)) ^ (((*g_416) != ((*l_861) = (void*)0)) < ((*l_854) != (*l_854)))))))
                    {
                        (*l_799) = (*l_628);
                        (**l_753) = (0xD50B53F1L ^ 0xC914C187L);
                        (*l_741) = (*l_753);

                        ;
                        (*l_753) = &g_713;

                        ;
                    }
                    else
                    {
                        return g_111;



                    }

                    ;
                    ;
                    ;
                }

                ;
                for (l_766 = 16; (l_766 == 49); l_766 = safe_add_func_uint8_t_u_u(l_766, 7))
                {
                    int l_866 = 0x3CCBE0A7L;
                    if (l_866)
                        break;
                }
            }

            ;
            ;
            l_867 = (*l_753);

            ;
        }
        else
        {
            int l_872 = 0L;
            unsigned short *l_873 = (void*)0;
            unsigned short *l_874 = &g_3;
            int l_875 = (-7L);
            (*l_741) = (*l_753);
        }

        ;
        ;
        (*l_751) = (((*g_849) == (void*)0) ^ (safe_mul_func_int16_t_s_s(5L, ((**l_730) |= l_879))));
    }
    else
    {
        unsigned l_883 = 0x386B8BF3L;
        int *l_884 = &g_629;
        for (g_248 = (-14); (g_248 < 11); ++g_248)
        {
            int *l_882 = &l_841;
            l_882 = (void*)0;

            ;
        }
        (*l_751) ^= func_47(l_883, l_884, l_884, (*g_739));
        (*g_634) |= (-1L);
    }


    ;

    ;
    return (*l_751);


}







static unsigned short func_6(char p_7, short p_8)
{
    unsigned l_685 = 0xBC12230EL;
    int *l_686 = &g_627;
    (*l_686) = ((*g_634) = l_685);
    for (p_7 = 9; (p_7 <= (-21)); --p_7)
    {
        char *l_695 = &g_211;
        unsigned l_702 = 0x43DAF746L;
        unsigned short *l_703 = (void*)0;
        unsigned short *l_704 = &g_3;
        unsigned *l_707 = &l_685;
        int *l_709 = &g_98;
        l_709 = func_17((*l_686), l_686, func_33((((*l_704) &= (*l_686)) | p_7), l_702, l_707), l_707, l_707);

        ;
        (*g_634) &= (safe_mul_func_int16_t_s_s((((*l_709) |= 0x1272E4FDL) >= p_7), p_8));
    }


    (*l_686) |= p_8;
    return (*l_686);


}







static unsigned char func_11(int * p_12, int * p_13, unsigned p_14, int * p_15, int * p_16)
{
    char l_650 = 0x52L;
    int *l_653 = &g_629;
    short *l_656 = &g_657;
    short **l_658 = &l_656;
    short *l_659 = &g_657;
    short *l_660 = &g_657;
    unsigned *l_665 = (void*)0;
    unsigned *l_666 = &g_667;
    for (g_627 = 0; (g_627 >= 6); g_627 = safe_add_func_uint32_t_u_u(g_627, 6))
    {
        return l_650;
    }
    (*l_653) = (safe_sub_func_int8_t_s_s(func_23(l_653), ((safe_sub_func_int16_t_s_s(((*l_660) = (((*l_658) = l_656) == (l_659 = l_659))), ((p_14 | (l_650 ^ (safe_lshift_func_uint16_t_u_s(((((*l_666) |= (l_650 == (safe_lshift_func_int8_t_s_s(p_14, 7)))) || (-4L)) ^ 0x5D97L), 3)))) || (-9L)))) < p_14)));
    for (g_629 = (-16); (g_629 != (-24)); g_629 = safe_sub_func_int32_t_s_s(g_629, 2))
    {
        int l_676 = (-1L);
        (*p_12) |= 0L;
        if ((p_14 < (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*p_12) = l_676), ((*l_653) && (&g_86 != (void*)0)))), 13)), ((safe_mul_func_int8_t_s_s(p_14, p_14)) == 65533UL)))))
        {
            unsigned l_681 = 0x79D7E469L;
            (*p_12) = l_681;
            if ((*l_653))
                break;
            p_16 = l_666;

            ;
        }
        else
        {
            p_12 = p_15;

            ;
            return (***g_447);
        }

        ;
        (*p_12) ^= (safe_mod_func_int8_t_s_s((func_47(p_14, p_13, p_16, l_676) ^ 0xB8214D45L), (l_676 | p_14)));
        (*p_12) = l_676;
    }

    ;
    return p_14;
}







static int * func_17(int p_18, int * p_19, int * p_20, int * p_21, int * p_22)
{
    unsigned l_635 = 0xA4A2C857L;
    int l_636 = 0x0AA2D613L;
    short l_641 = (-1L);
    int *l_646 = (void*)0;
    l_636 ^= l_635;
    (*p_21) = ((safe_mul_func_uint8_t_u_u(((&g_308 != &g_135) == (safe_mul_func_uint16_t_u_u(l_641, (safe_mod_func_int8_t_s_s(l_635, (**g_86)))))), (*g_194))) || (safe_add_func_int32_t_s_s(l_635, (((void*)0 == l_646) >= l_636))));
    return &g_627;


}







static int func_23(int * p_24)
{
    unsigned l_25 = 0x82BDB979L;
    unsigned char *l_624 = &g_625;
    int *l_626 = &g_627;
    (*l_626) ^= (l_25 == (l_25 > (safe_unary_minus_func_uint16_t_u((func_29(l_25) > ((*l_624) = ((l_25 & l_25) != (safe_add_func_int8_t_s_s((~0L), l_25)))))))));
    (*p_24) = 4L;
    (*p_24) = (*p_24);
    return (*l_626);
}







static unsigned char func_29(unsigned p_30)
{
    int *l_45 = &g_5;
    short **l_601 = (void*)0;
    int ***l_611 = &g_131;
    for (p_30 = 25; (p_30 == 12); p_30 = safe_sub_func_uint16_t_u_u(p_30, 9))
    {
        short l_46 = 0xCBC2L;
        int *l_59 = &g_5;
        char *l_166 = &g_167;
        int **l_572 = &g_214;
    }
    if ((*l_45))
    {
        int *l_592 = &g_111;
        int **l_593 = &l_45;
        (*l_593) = func_33(((**g_86) = (safe_mul_func_int8_t_s_s((p_30 | (safe_unary_minus_func_uint32_t_u(g_167))), (*l_45)))), ((*l_592) |= (((safe_mod_func_int8_t_s_s((*l_45), ((l_45 != (void*)0) && (*l_45)))) || g_270) || (safe_mod_func_uint8_t_u_u((*l_45), 0x4FL)))), l_45);
        (*l_593) = l_45;
    }
    else
    {
        int *l_594 = &g_98;
        int **l_595 = &g_214;
        unsigned short l_600 = 1UL;
        l_45 = l_594;

        ;
        if (g_532)
            goto lbl_596;
lbl_596:
        (*l_595) = l_594;

        ;
        for (g_70 = 24; (g_70 != (-26)); --g_70)
        {
            unsigned l_599 = 5UL;
            l_599 ^= (*l_594);
        }
        return l_600;
    }
    (*l_45) |= (g_167 > ((void*)0 == l_601));
    if (p_30)
    {
        unsigned l_602 = 0xDD6A2A12L;
        int *l_603 = &g_98;
        (*l_603) = ((*l_45) &= l_602);
    }
    else
    {
        int *l_604 = &g_98;
        int *l_618 = &g_98;
        l_604 = l_45;

        ;
        (*l_618) &= (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((*l_45), 5)) ^ (p_30 < p_30)), ((*g_87) = (safe_add_func_uint32_t_u_u((+((void*)0 == l_611)), (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x0102L, (safe_mul_func_int8_t_s_s((p_30 >= (+(*l_604))), (*l_604))))), (*l_604))))))));
        for (g_195 = 0; (g_195 == 35); g_195++)
        {
            unsigned char l_621 = 253UL;
            (*l_618) &= l_621;
        }
        l_618 = (void*)0;

        ;
    }
    return p_30;
}







static int * func_33(char p_34, int p_35, int * p_36)
{
    unsigned l_461 = 4294967295UL;
    char ***l_469 = &g_86;
    char ****l_468 = &l_469;
    unsigned short l_477 = 0UL;
    char l_487 = (-5L);
    int l_492 = 0xF60658F2L;
    short l_497 = 1L;
    int l_506 = 1L;
    unsigned char l_514 = 0xFEL;
    int *l_515 = &g_5;
    unsigned l_539 = 0xCA3F76A0L;
    int *l_560 = &l_492;
    unsigned short l_565 = 0x70D2L;
    unsigned short *l_567 = &l_565;
    unsigned short **l_566 = &l_567;
    unsigned **l_568 = (void*)0;
    unsigned *l_570 = &g_135;
    unsigned **l_569 = &l_570;
    int l_571 = 0xA698CAD5L;
    if ((2L < g_207))
    {
        int l_470 = 0x67460E2FL;
        unsigned l_484 = 0x94F52823L;
        unsigned short l_485 = 65535UL;
        int l_486 = 0L;
        unsigned l_513 = 2UL;
        int *l_516 = &g_98;
        int *l_526 = &l_470;
        (*p_36) = (*p_36);
        (*p_36) = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((0xC6B1F425L | (l_486 &= (l_470 = (func_47(((g_70 = l_470) || (safe_sub_func_uint32_t_u_u(l_484, 0x7E348761L))), &l_470, p_36, l_485) != g_304)))) == 9UL), l_487)), p_35));
        if ((((p_35 < (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((l_492 &= p_34) & (safe_rshift_func_uint8_t_u_u(l_461, (safe_mul_func_uint16_t_u_u(l_497, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(g_211, 0)), 12)) | l_487)))))) | l_487), p_34)), p_34))) ^ 0x2EL) && 7UL))
        {
            (*p_36) &= l_514;
            l_516 = (l_515 = p_36);



        }
        else
        {
            short *l_523 = &l_497;
            int **l_524 = (void*)0;
            int **l_525 = &g_214;
            char **l_538 = &g_87;
            char ****l_550 = &l_469;
            (*l_516) ^= (safe_rshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s(((*l_515) == 0x54403C0CL), (((*l_515) && (safe_rshift_func_uint8_t_u_s(p_34, 6))) ^ (*l_515)))) & p_35) || 0x632BCC5FL), ((*l_523) = g_308)));
            (*l_525) = p_36;


            if (func_47((**l_525), &l_492, l_526, (*p_36)))
            {
                int l_527 = 7L;
                int *l_528 = &l_527;
                l_527 &= (*p_36);
                if (func_39(l_527, (*l_525), (*l_516), g_195, p_36))
                {
                    int *l_531 = &g_5;
                    char *l_537 = &l_487;
                    l_515 = l_528;

                    ;
                    if (((p_34 && g_3) != (0xE38BL ^ (safe_sub_func_int16_t_s_s(((*l_523) = func_47(g_167, p_36, l_531, (*p_36))), p_34)))))
                    {
                        return p_36;


                    }
                    else
                    {
                        (*p_36) |= g_532;
                    }
                    if ((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((*l_537) |= ((((*l_523) = (*l_526)) && 1L) & p_34)), (*l_531))), p_34)))
                    {
                        return p_36;


                    }
                    else
                    {
                        (*l_525) = p_36;


                        l_528 = (l_516 = (p_36 = p_36));



                    }




                }
                else
                {
                    (*p_36) |= ((p_34 | g_248) | 8UL);
                    l_515 = (void*)0;

                    ;
                }


                ;


            }
            else
            {
                unsigned short l_540 = 65533UL;
                char *l_541 = &g_167;
                (**l_525) &= (((*g_416) == (void*)0) >= (((g_68 ^= ((((g_86 = &g_87) == l_538) > l_539) != (p_34 < (l_540 > 0x8188L)))) <= ((*l_541) ^= (((*g_194) ^= p_35) > (*l_516)))) & 0xF91CL));
                p_36 = &l_470;

                ;
lbl_559:
                for (g_70 = 0; (g_70 <= (-20)); --g_70)
                {
                    int *l_546 = &l_486;
                    int *l_547 = &l_492;
                    for (l_470 = 0; (l_470 == (-18)); l_470 = safe_sub_func_int16_t_s_s(l_470, 9))
                    {
                    }
                }
                for (l_485 = 0; (l_485 > 38); l_485 = safe_add_func_uint32_t_u_u(l_485, 7))
                {
                    char ****l_551 = &l_469;
                    unsigned l_558 = 4294967295UL;
                    (*l_525) = (p_36 = &l_492);

                    ;
                    ;
                    (*l_516) |= (*p_36);
                    (*l_526) &= (*p_36);
                    if (p_35)
                        goto lbl_559;
                }
            }





        }





    }
    else
    {
        return p_36;


    }




    l_571 ^= (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_565, (0xE196C9E7L || (g_308 = ((void*)0 != l_566))))) && (&g_135 != ((*l_569) = &g_135))), p_34));
    return &g_5;



}







static unsigned short func_39(char p_40, int * p_41, int p_42, short p_43, int * p_44)
{
    int l_185 = 0x5843D7D1L;
    short *l_232 = (void*)0;
    short **l_231 = &l_232;
    int **l_238 = &g_214;
    int *l_241 = &g_98;
    unsigned char l_255 = 0xAFL;
    short l_324 = 0xDBA8L;
    int ***l_387 = &l_238;
    int ****l_386 = &l_387;
    char ***l_426 = &g_86;
    char ****l_425 = &l_426;
    unsigned char ***l_449 = &g_448;
    short *l_452 = &g_270;
    char *l_459 = &g_167;
    unsigned *l_460 = &g_308;
    for (p_43 = 0; (p_43 >= 9); p_43++)
    {
        short *l_174 = &g_70;
        int l_177 = (-5L);
        char l_184 = 0xE2L;
        unsigned short *l_225 = (void*)0;
        unsigned short **l_224 = &l_225;
        if ((((safe_mul_func_int16_t_s_s(((*l_174) = g_98), (~(safe_lshift_func_int8_t_s_s(l_177, ((g_98 & ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((g_3 || p_43), l_184)), g_135)) >= (p_43 >= l_185))) < l_177)))))) < g_111) < 1L))
        {
            short **l_190 = (void*)0;
            short **l_191 = &l_174;
            unsigned char *l_192 = (void*)0;
            unsigned char **l_193 = &l_192;
            unsigned char **l_196 = &g_194;
            char *l_197 = (void*)0;
            char *l_198 = &g_68;
            (*p_44) = (safe_rshift_func_uint16_t_u_u((!g_98), (p_42 >= (0xA31E374DL >= (safe_mul_func_uint16_t_u_u(((&p_43 == ((*l_191) = &g_70)) & ((((((*l_193) = l_192) == ((*l_196) = g_194)) & g_68) || ((*l_198) = p_42)) != 0x19AB705BL)), 1UL))))));
            return p_42;
        }
        else
        {
            int *l_200 = &g_5;
            unsigned short l_212 = 0UL;
            if (((*p_44) | g_5))
            {
                int l_199 = 0x26E25B4CL;
                (*p_44) &= l_185;
                if ((*p_44))
                {
                    int l_205 = 0x67FE1305L;
                    unsigned short *l_206 = &g_207;
                    char *l_208 = &g_68;
                    char *l_209 = &l_184;
                    char *l_210 = &g_211;
                    unsigned l_213 = 0xA839ADFCL;
                    int *l_221 = &g_98;
                    unsigned l_233 = 0UL;
                    if ((p_40 & p_40))
                    {
                        (*p_41) &= 0xF3236F7AL;
                        p_41 = l_200;

                        ;
                    }
                    else
                    {
                        (*p_44) = (safe_mod_func_uint8_t_u_u(l_185, (safe_lshift_func_int8_t_s_s(l_213, 2))));
                    }
                    (*l_221) = ((*l_200) = (safe_lshift_func_int16_t_s_s(1L, 14)));
                    if ((1L ^ (l_199 & (p_43 > (safe_mul_func_int16_t_s_s((g_70 ^= ((void*)0 == l_200)), p_43))))))
                    {
                        g_226 = l_224;

                        ;
                    }
                    else
                    {
                        unsigned l_227 = 2UL;
                        int **l_230 = &l_221;
                        (*l_221) &= (*g_214);
                        (*l_230) = &l_205;

                        ;
                        l_233 &= ((((*p_41) == 1UL) && ((*g_214) |= ((+p_40) <= (!p_42)))) || (**l_230));
                        (*l_230) = &p_42;

                        ;
                    }

                    ;

                    return p_42;


                }
                else
                {
                    unsigned char l_234 = 0xE9L;
                    char l_236 = 0x9EL;
                    if (l_177)
                    {
                        (*l_200) = (l_177 && (*g_194));
                    }
                    else
                    {
                        char *l_235 = &g_211;
                        unsigned *l_237 = &g_135;
                        (*p_44) |= ((&g_87 == (void*)0) < ((*l_237) |= l_236));
                        (*p_44) = ((void*)0 == l_238);
                        (**l_238) = (-8L);
                    }
                    for (g_98 = 8; (g_98 <= 10); g_98 = safe_add_func_int32_t_s_s(g_98, 1))
                    {
                        int *l_242 = &l_185;
                        unsigned char *l_247 = (void*)0;
                    }
                }
            }
            else
            {
                char l_266 = 0L;
                (*p_44) = ((safe_lshift_func_int16_t_s_s(g_98, 8)) != (safe_add_func_int32_t_s_s(0xEFAA5275L, (safe_mul_func_int8_t_s_s((p_42 < (safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_266, ((*l_174) = 1L))), 1))), (*l_200))))));
            }
        }
        if (l_177)
        {
            (*l_238) = &p_42;

            ;
            (*g_214) = (*g_214);
            return g_3;


        }
        else
        {
            int l_269 = 0xCF667760L;
            for (g_5 = (-6); (g_5 < 13); g_5 = safe_add_func_uint16_t_u_u(g_5, 8))
            {
                unsigned short *l_271 = (void*)0;
                (*l_241) &= l_269;
                g_98 |= g_270;
                (*l_241) = (l_232 != l_271);
            }
            (*l_241) &= l_184;
        }
        (*p_44) |= 0xBB03D663L;
        if (l_177)
            continue;
    }
    for (p_40 = 0; (p_40 < 4); p_40++)
    {
        int *l_276 = &l_185;
        unsigned short *l_343 = &g_207;
        unsigned char **l_380 = &g_194;
        char ****l_427 = &l_426;
        int l_444 = 0L;
        for (p_43 = (-23); (p_43 > (-12)); p_43++)
        {
            (*p_41) &= ((*l_241) = 0x49015C69L);
        }
    }
    (***l_387) = ((*l_241) = ((g_447 != l_449) | (((safe_mod_func_uint16_t_u_u(p_40, ((*l_452) = (****l_386)))) || (safe_mul_func_uint16_t_u_u((((*l_460) |= ((***l_387) || func_47((((safe_sub_func_int32_t_s_s((~((safe_rshift_func_int8_t_s_u(((*l_459) = ((void*)0 == (**g_417))), 0)) != (func_47(g_5, (p_41 = &p_42), (***l_386), (*p_44)) >= g_68))), p_40)) ^ g_68) >= p_40), (***l_386), (*l_238), p_40))) || (**l_238)), 1L))) > p_42)));


    (*l_241) &= (*g_214);
    return p_40;
}







static short func_47(char p_48, int * p_49, int * p_50, int p_51)
{
    int l_168 = 0x5A66CF4CL;
    int *l_169 = &g_98;
    (*l_169) = ((*p_50) = l_168);
    (*p_50) ^= (*l_169);
    return p_51;
}







static char func_54(unsigned p_55, unsigned char p_56, int * p_57, char p_58)
{
    unsigned l_60 = 0UL;
    int *l_66 = (void*)0;
    int **l_65 = &l_66;
    char *l_67 = &g_68;
    short *l_69 = &g_70;
    int *l_132 = &g_5;
    int *l_162 = (void*)0;
    int *l_163 = &g_98;
    (*p_57) = g_3;
    if ((l_60 <= ((*l_69) |= (g_5 <= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_56, ((*l_67) = ((((*l_65) = &g_5) == &g_5) | g_3)))), 0UL))))))
    {
        int *l_71 = &g_5;
        (*l_65) = l_71;
    }
    else
    {
        char **l_85 = &l_67;
        int l_96 = 4L;
        int *l_101 = (void*)0;
        for (l_60 = 0; (l_60 >= 5); l_60 = safe_add_func_uint16_t_u_u(l_60, 1))
        {
            unsigned l_76 = 0x262954F6L;
            char **l_77 = &l_67;
            int l_112 = 0L;
            char ***l_138 = (void*)0;
            for (p_56 = 0; (p_56 >= 49); p_56++)
            {
                char ***l_78 = &l_77;
                (**l_65) = (g_5 < g_5);
                (**l_65) = l_76;
                (*l_78) = l_77;
            }
            for (l_76 = 0; (l_76 > 15); l_76++)
            {
                char ***l_88 = &g_86;
                int *l_97 = &g_98;
                (*l_65) = p_57;
                (*l_97) &= (safe_rshift_func_uint16_t_u_s(p_55, (safe_mod_func_uint8_t_u_u((((void*)0 == l_85) <= (l_77 == ((*l_88) = g_86))), ((safe_sub_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u(((((+g_70) >= p_55) ^ (*p_57)) | (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((g_87 = &p_58) == &g_68) < 0xC8977B40L), g_5)), l_96))))) != l_96) < g_70), p_55)) && 0x0996BD0CL)))));

                ;
            }
            (*l_66) ^= g_3;
        }

        ;
        ;
        if ((safe_rshift_func_uint8_t_u_s(1UL, ((**l_65) > (g_98 = 0x801335C4L)))))
        {
            return (*l_66);


        }
        else
        {
lbl_160:
            (*l_132) = (safe_mul_func_int16_t_s_s(g_68, p_58));
            (*l_65) = (void*)0;

            ;
            (*l_65) = p_57;

            ;
        }
        for (g_135 = 0; (g_135 < 28); g_135 = safe_add_func_int8_t_s_s(g_135, 9))
        {
            unsigned char l_150 = 247UL;
            unsigned char *l_151 = (void*)0;
            unsigned char *l_152 = &l_150;
            (*l_132) = (safe_rshift_func_uint8_t_u_u(((*l_152) = (safe_mod_func_uint16_t_u_u((3L || l_150), (~((g_3 || g_5) != (((&g_131 != (void*)0) | p_55) || (**g_86))))))), 7));
            if (l_150)
            {
                short l_155 = 0x93D2L;
                int *l_156 = &l_96;
                (*l_65) = (*l_65);
                (*l_66) &= 0x5B8A5FABL;
                (*l_156) |= ((*l_66) = (((*g_87) & (g_70 >= g_3)) != (safe_add_func_int8_t_s_s((p_55 != l_155), 0L))));
                (*l_132) = (*l_66);
            }
            else
            {
                int *l_161 = &l_96;
                if (((0x90L <= (**g_86)) < g_3))
                {
                    for (p_55 = (-30); (p_55 <= 4); p_55 = safe_add_func_uint32_t_u_u(p_55, 4))
                    {
                        int *l_159 = &g_98;
                        if ((*p_57))
                            break;
                        (*l_65) = (void*)0;

                        ;
                        (*l_159) ^= (*p_57);
                    }

                    ;
                    (*p_57) = (*p_57);
                    if (g_3)
                        goto lbl_160;
                }
                else
                {
                    (*l_66) |= g_98;
                    g_5 = (*l_132);
                    (*l_65) = l_161;

                    ;
                }

                ;
                return p_58;


            }
        }
        return p_56;


    }

    ;
    (*l_163) |= (*p_57);
    (*l_163) = (safe_add_func_uint8_t_u_u(2UL, (g_3 >= p_56)));
    return p_55;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_629, "g_629", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_843, "g_843", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
