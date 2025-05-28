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



static short g_28 = (-1L);
static int g_31 = 1L;
static int *g_39 = &g_31;
static int **g_38 = &g_39;
static unsigned g_50 = 0x9FF9E6B9L;
static int g_57 = 1L;
static unsigned short g_69 = 0x2979L;
static short g_82 = (-9L);
static unsigned char g_102 = 0x27L;
static int **g_123 = &g_39;
static unsigned g_223 = 0xC0FFB38DL;
static unsigned g_232 = 4294967295UL;
static char g_315 = 1L;
static unsigned *g_320 = (void*)0;
static unsigned g_322 = 0x9FB02182L;
static unsigned *g_321 = &g_322;
static volatile unsigned short g_331 = 3UL;
static volatile unsigned short *g_330 = &g_331;
static volatile unsigned short **g_329 = &g_330;
static volatile int g_334 = 0xA5E16FDFL;
static int g_336 = 0x09253C89L;
static unsigned ***g_337 = (void*)0;
static unsigned char g_352 = 0x61L;
static char g_357 = 0x78L;
static unsigned g_368 = 4294967295UL;
static int *g_373 = &g_57;
static int **g_383 = &g_373;
static volatile short g_407 = 0xC83AL;
static volatile short *g_406 = &g_407;
static volatile short **g_405 = &g_406;
static volatile short ***g_404 = &g_405;
static volatile short ****g_403 = &g_404;
static unsigned short g_413 = 4UL;
static int g_421 = (-1L);
static unsigned g_493 = 0UL;
static unsigned g_498 = 7UL;
static char **g_503 = (void*)0;
static char ***g_502 = &g_503;
static int *g_672 = &g_421;
static int **g_671 = &g_672;
static unsigned char g_692 = 3UL;
static char ***g_813 = &g_503;



static unsigned func_1(void);
static unsigned func_4(unsigned short p_5, unsigned short p_6, unsigned char p_7, int p_8, short p_9);
static short func_12(unsigned short p_13);
static unsigned short func_14(unsigned p_15, unsigned short p_16, int p_17, unsigned char p_18, unsigned char p_19);
static int func_23(char p_24, short p_25, char p_26, int p_27);
static int * func_32(unsigned p_33, int ** p_34, int ** p_35, unsigned char p_36, int ** p_37);
static unsigned short func_45(unsigned p_46, int * p_47, int * p_48);
static int * func_51(int * p_52);
static short func_60(int ** p_61);
static int ** func_62(unsigned p_63, unsigned p_64, int p_65);
static unsigned func_1(void)
{
    int l_22 = 3L;
    int *l_690 = &g_336;
    int **l_689 = &l_690;
    unsigned char *l_691 = &g_692;
    char l_693 = 0x6AL;
    unsigned l_776 = 4294967295UL;
    if (((**l_689) = ((~(4294967292UL & (safe_sub_func_uint16_t_u_u((func_4((((((*g_321) = ((safe_mod_func_uint16_t_u_u((func_12(func_14(((*g_321) = (((safe_sub_func_int32_t_s_s(l_22, func_23(l_22, g_28, l_22, l_22))) ^ ((l_693 = (l_22 == ((*l_691) = func_60(l_689)))) > 0L)) || (**l_689))), (*l_690), (**l_689), g_232, (*l_690))) <= (*l_690)), g_336)) & l_776)) && (*l_690)) || 1L) == (*l_690)), (*l_690), (**l_689), g_336, g_336) || (*g_321)), 0x1CD5L)))) > l_22)))
    {
        (*l_690) = (safe_sub_func_uint32_t_u_u(0xA787DD81L, 0x163C3036L));
    }
    else
    {
        short l_962 = (-1L);
        return l_962;
    }



    ;

    return g_331;
}







static unsigned func_4(unsigned short p_5, unsigned short p_6, unsigned char p_7, int p_8, short p_9)
{
    int **l_781 = &g_672;
    int ***l_782 = &g_671;
    char *l_783 = &g_315;
    int *l_784 = (void*)0;
    int l_795 = 0x93AEF413L;
    char ****l_812 = &g_502;
    int ***l_816 = &g_383;
    int ***l_817 = &g_383;
    int **l_818 = &l_784;
    unsigned short *l_866 = &g_413;
    unsigned short **l_865 = &l_866;
    unsigned short ***l_864 = &l_865;
    unsigned short ****l_863 = &l_864;
    unsigned short l_876 = 65528UL;
    unsigned char l_925 = 0xEAL;
    short **l_930 = (void*)0;
    short ***l_929 = &l_930;
    unsigned char l_941 = 0x41L;
    (*g_373) = p_5;
lbl_884:
    if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((l_781 != ((*l_782) = l_781)), g_232)), (l_783 != l_783))))
    {
        int **l_785 = &g_39;
        int ***l_786 = &g_38;
        int ***l_787 = &g_123;
        unsigned short *l_792 = &g_69;
        l_784 = &p_8;

        ;
        (*l_785) = &p_8;

        ;
        (*l_784) = (**g_38);
    }
    else
    {
        int *l_800 = (void*)0;
        int l_802 = (-1L);
        unsigned *l_809 = (void*)0;
        unsigned *l_810 = &g_368;
        int ***l_811 = &g_123;
        p_8 = 0x2BF9F55EL;
        for (p_5 = (-16); (p_5 != 53); p_5 = safe_add_func_uint8_t_u_u(p_5, 7))
        {
            int *l_801 = &g_57;
            for (g_413 = 0; (g_413 < 57); ++g_413)
            {
                (*g_38) = (void*)0;

                ;
            }
            l_801 = l_800;

            ;
        }


        (*g_373) = 0x539CE022L;
        (*g_38) = &p_8;

        ;
    }

    ;
    p_8 = (*g_39);
    if ((*g_39))
    {
        int l_825 = 0xB095452DL;
        int *l_829 = (void*)0;
        char *l_848 = &g_315;
        unsigned l_888 = 8UL;
        for (p_8 = 0; (p_8 < 4); p_8 = safe_add_func_int32_t_s_s(p_8, 9))
        {
            int **l_821 = &l_784;
            char l_824 = (-2L);
            unsigned l_853 = 1UL;
            unsigned l_877 = 1UL;
            int l_887 = 0xC763F68DL;
            if (func_60(l_821))
            {
                for (g_50 = 0; (g_50 == 43); g_50++)
                {
                    return p_5;


                }
            }
            else
            {
                int l_826 = (-1L);
                int *l_849 = &l_795;
                unsigned short ****l_868 = (void*)0;
                l_826 = (((l_824 > ((**g_329) ^ (p_9 >= 3L))) < l_825) && g_315);
                if ((*g_373))
                {
                    char l_830 = (-7L);
                    short *l_850 = (void*)0;
                    short *l_851 = (void*)0;
                    short *l_852 = &g_82;
                    for (g_421 = 6; (g_421 < (-17)); g_421 = safe_sub_func_uint8_t_u_u(g_421, 1))
                    {
                        (*l_821) = &p_8;

                        ;
                        (*g_373) = 0L;
                    }
                    if ((l_830 = ((void*)0 != &g_404)))
                    {
                        unsigned short l_831 = 0UL;
                        (*l_821) = (void*)0;

                        ;
                        (*g_373) = (l_831 = func_12(p_5));


                    }
                    else
                    {
                        (*l_818) = &p_8;

                        ;
                        (*l_818) = (*l_821);
                        (*g_373) = (-1L);
                        (*l_821) = &p_8;
                    }
                    if ((safe_add_func_uint32_t_u_u(((2UL == (((p_6 == (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((0x02F74404L != ((safe_mod_func_uint32_t_u_u(p_8, (safe_lshift_func_int16_t_s_u(((*l_852) = (g_407 || ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((l_848 == (void*)0) | (0x3FL && (func_45((*g_321), l_849, (*l_818)) | p_9))), p_6)), g_315)), 0xD1L)) >= l_830))), g_315)))) | g_357)) == g_413), 2)), g_368))) | (*g_321)) > l_853)) <= 4UL), (-1L))))
                    {
                        int *l_854 = &l_826;
                        unsigned short *****l_867 = &l_863;
                        unsigned short *****l_869 = &l_868;
                        l_849 = &p_8;

                        ;
                        (*l_854) = ((*g_373) = p_6);
                        (*g_373) = 0x6FD6DD8CL;
                        (*g_373) = (safe_mod_func_uint32_t_u_u((+(0L <= p_9)), (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((g_357 = (safe_rshift_func_uint16_t_u_u((((*l_867) = l_863) != ((*l_869) = l_868)), (+(((0x8F425E8CL || (-1L)) & (*l_849)) > ((*l_866) = (safe_lshift_func_int8_t_s_u(((*l_783) = (p_6 || (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((p_5 != p_7), l_876)) & p_6), p_9)))), 3)))))))), g_407)), 0))));
                    }
                    else
                    {
                        return l_877;


                    }

                    ;
                }
                else
                {
                    for (g_69 = 0; (g_69 <= 15); g_69 = safe_add_func_uint16_t_u_u(g_69, 9))
                    {
                        (*l_818) = &p_8;

                        ;
                        if ((*g_373))
                            continue;
                        (*l_849) = ((*g_373) = (safe_rshift_func_int8_t_s_s(0x75L, p_6)));
                        return p_9;


                    }
                    for (g_31 = 0; (g_31 > 9); g_31++)
                    {
                        if (g_368)
                            goto lbl_884;
                        (*l_818) = (void*)0;

                        ;
                    }
                    (*g_373) = (safe_div_func_int32_t_s_s((l_887 = (0UL & (p_9 || ((g_69 != (*l_849)) | ((*l_848) = (*l_849)))))), (*g_373)));
                }

                ;
                if ((*l_849))
                    break;
            }
            if (p_5)
                continue;
            (*g_38) = ((*l_818) = &p_8);

            ;
            ;
            (*l_821) = (*g_38);
        }


    }
    else
    {
        short l_891 = 0xFEBAL;
        int *l_898 = &g_57;
        int *l_927 = &g_336;
        unsigned char *l_931 = &g_352;
        short ****l_932 = &l_929;
        (*g_39) = (safe_sub_func_int8_t_s_s(1L, (p_6 || l_891)));
lbl_919:
        (*l_818) = l_898;

        ;
        for (g_69 = (-13); (g_69 == 60); g_69 = safe_add_func_uint16_t_u_u(g_69, 2))
        {
            int *l_901 = (void*)0;
            int l_902 = 1L;
            int *l_905 = &g_57;
            int *l_922 = &g_336;
            unsigned char *l_926 = &g_352;
            if (((**g_38) = p_9))
            {
                (**l_818) = (~(l_902 = func_45((*g_321), ((*g_38) = l_901), &g_336)));

                ;
                (*g_38) = &p_8;

                ;
            }
            else
            {
                for (g_357 = 0; (g_357 != (-2)); g_357 = safe_sub_func_uint32_t_u_u(g_357, 7))
                {
                    int *l_916 = &g_57;
                    (*g_38) = l_905;

                    ;
                    for (l_795 = 0; (l_795 < (-22)); l_795 = safe_sub_func_int8_t_s_s(l_795, 1))
                    {
                        unsigned char *l_912 = &g_692;
                        int *l_915 = &g_57;
                        (**l_818) = ((safe_rshift_func_int16_t_s_s((p_6 ^ p_5), (((void*)0 != (*g_502)) && (safe_lshift_func_uint8_t_u_u(((*l_912) = 0x8CL), ((p_6 > (*l_905)) & (safe_add_func_int16_t_s_s(func_45(((void*)0 != l_901), l_915, l_916), (*l_916))))))))) >= g_28);
                        (**g_38) = (p_8 = 0x12A1AF24L);
                    }
                    for (p_8 = 15; (p_8 != 28); p_8++)
                    {
                        (*g_373) = func_45((*l_898), l_898, (*g_38));
                        if (p_7)
                            goto lbl_919;
                    }
                    (*l_905) = ((l_898 != (void*)0) < (safe_add_func_int16_t_s_s((****g_403), p_6)));
                }
            }
            if ((*g_39))
                break;
            (*l_784) = (!(p_9 > g_69));
            if (((((**g_38) >= (((*l_898) ^ ((0x3B1BL >= p_5) & ((*l_922) = (*g_373)))) < (safe_div_func_int8_t_s_s(l_925, ((*l_926) = p_6))))) >= func_45(p_5, (*g_38), (*g_38))) & 0x65D9L))
            {
                (*g_38) = (l_927 = &p_8);

                ;
                ;
                return p_9;


            }
            else
            {
                unsigned l_928 = 8UL;
                (**l_818) = (*g_373);
                if (p_9)
                    continue;
                (*l_922) = l_928;
            }
        }
        if (((**l_818) = (((*l_931) = ((void*)0 == l_929)) & (*l_927))))
        {
            (*g_373) = (*l_927);
            (*l_818) = (void*)0;

            ;
            (**g_38) = ((void*)0 == l_932);
            return (*g_321);


        }
        else
        {
            char *l_954 = &g_315;
            int *l_955 = (void*)0;
            if ((safe_add_func_int8_t_s_s(((~((*l_927) = ((*g_39) = (**g_38)))) >= (safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u(0x18FB4D7CL, (safe_sub_func_uint32_t_u_u(((!(p_5 == l_941)) < (l_795 = (safe_add_func_uint8_t_u_u(g_69, (safe_rshift_func_uint8_t_u_s((+func_45((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(func_60(&g_39), (safe_mod_func_int16_t_s_s((****g_403), (((safe_mod_func_int32_t_s_s(((void*)0 != l_954), p_5)) < p_5) || g_692))))), 4)), l_927, l_955)), 2)))))), (*g_321))))), g_692))), g_368)))
            {
                (*l_818) = (*g_38);

                ;
            }
            else
            {
                (**l_818) = ((void*)0 == &g_330);
                return p_9;


            }

            ;
            (*l_927) = (0xC87B246EL <= ((+p_6) >= (((**g_405) >= ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((*l_784) = (*l_927)), 4)), 7)) ^ p_5)) < ((void*)0 == &g_330))));
            (*g_38) = l_898;

            ;
        }

        ;
        ;
    }


    ;
    return p_5;


}







static short func_12(unsigned short p_13)
{
    unsigned l_768 = 0UL;
    int l_769 = 2L;
    int *l_775 = &g_31;
    l_769 = l_768;
    for (g_232 = (-23); (g_232 == 56); g_232 = safe_add_func_uint16_t_u_u(g_232, 1))
    {
        short l_774 = 1L;
        (*g_373) = (safe_mod_func_int16_t_s_s(l_774, 0xD078L));
    }
    (*g_38) = &l_769;

    ;
    return (*l_775);


}







static unsigned short func_14(unsigned p_15, unsigned short p_16, int p_17, unsigned char p_18, unsigned char p_19)
{
    char l_701 = 0x7CL;
    int *l_714 = &g_31;
    unsigned short l_726 = 0x2646L;
    int l_737 = 0x694ED488L;
    short **l_748 = (void*)0;
    short ***l_747 = &l_748;
    short ****l_749 = &l_747;
    char **l_750 = (void*)0;
    int ***l_758 = (void*)0;
    if ((((func_45((*g_321), (*g_38), (*g_38)) == p_18) >= (safe_div_func_int32_t_s_s((**g_383), func_60(&g_373)))) | 3UL))
    {
        int *l_702 = &g_336;
        for (p_19 = 22; (p_19 == 28); ++p_19)
        {
            unsigned l_698 = 1UL;
            if ((*g_373))
            {
                return (*g_330);


            }
            else
            {
                (*g_38) = &p_17;

                ;
                for (g_421 = 0; (g_421 == 5); g_421++)
                {
                    if (l_701)
                        break;
                    l_702 = (*g_38);

                    ;
                    (*g_38) = (*g_383);

                    ;
                }

                ;
            }

            ;
            if (p_19)
                continue;
            return (**g_329);


        }

        ;
        ;
        for (g_352 = 0; (g_352 != 22); ++g_352)
        {
            unsigned short l_711 = 65529UL;
            (**g_383) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0UL, 6)), (safe_add_func_uint32_t_u_u(l_711, ((**g_405) == g_413)))));
            (*g_383) = l_714;

            ;
        }

        ;
    }
    else
    {
        unsigned l_731 = 4UL;
        int *l_734 = (void*)0;
        char *l_739 = &l_701;
        char **l_738 = &l_739;
        (*g_38) = &p_17;

        ;
        if ((*l_714))
        {
            unsigned char *l_730 = &g_352;
            unsigned char **l_729 = &l_730;
            int l_732 = 0xC20FE1FDL;
        }
        else
        {
            unsigned l_736 = 0x3022956AL;
            int *l_740 = &g_31;
            unsigned l_741 = 4294967288UL;
            int ***l_746 = &g_383;
            (*l_740) = ((**g_383) = func_45(((*g_321) = (l_736 && func_45((((*g_321) = l_737) < ((void*)0 == l_738)), l_734, (*g_383)))), l_734, ((*g_38) = l_740)));

            ;
            (*g_38) = func_32(l_741, &l_734, &l_740, (safe_lshift_func_uint8_t_u_s(p_15, (safe_rshift_func_int16_t_s_u((*l_740), (*l_714))))), ((*l_746) = &l_740));

            ;
        }

        ;

    }

    ;
    ;

    p_17 = (((*g_321) = (((*l_749) = l_747) == (void*)0)) | (((*g_502) = (*g_502)) == (l_750 = l_750)));
    for (g_69 = (-23); (g_69 >= 27); ++g_69)
    {
        int ***l_757 = &g_123;
        int *l_764 = (void*)0;
        unsigned l_767 = 0x55F83657L;
        for (g_50 = 0; (g_50 < 47); ++g_50)
        {
            for (p_17 = 1; (p_17 == (-15)); p_17 = safe_sub_func_uint8_t_u_u(p_17, 4))
            {
                int *l_759 = &g_336;
                (*l_714) = ((l_757 == (l_758 = &g_383)) > 1L);

                ;
                l_759 = &p_17;

                ;
                (*g_38) = &p_17;

                ;
                (*g_373) = (*l_759);
            }
            (*g_38) = &p_17;

            ;
        }
        (*g_373) = ((p_15 & (*l_714)) | (safe_div_func_int32_t_s_s((safe_div_func_int8_t_s_s(func_45((*l_714), l_764, (*g_38)), (safe_sub_func_int8_t_s_s(l_767, p_18)))), func_60(&l_714))));
        (*g_38) = &p_17;

        ;
        (*g_38) = &p_17;
    }

    ;
    return p_18;


}







static int func_23(char p_24, short p_25, char p_26, int p_27)
{
    int *l_30 = &g_31;
    int **l_29 = &l_30;
    unsigned char *l_635 = &g_352;
    char l_658 = 0L;
    int **l_685 = &g_39;
    (*l_29) = &p_27;

    ;
    if ((&g_31 != (*l_29)))
    {
        unsigned l_44 = 4294967295UL;
        unsigned *l_49 = &g_50;
        int **l_616 = &g_373;
        (*g_383) = func_32(p_24, g_38, &g_39, (!(safe_sub_func_uint8_t_u_u((((**g_38) ^ (safe_div_func_uint8_t_u_u(l_44, (**l_29)))) <= func_45(((*l_49) = (**l_29)), func_51((*l_29)), (*l_29))), p_25))), &g_373);


        (**g_383) = func_60(l_616);
    }
    else
    {
        unsigned l_628 = 9UL;
        int l_647 = 0x0796485DL;
        int l_648 = 0x9912EF26L;
        int l_654 = 0x7A0D4482L;
        int *l_661 = &g_57;
        for (g_102 = 13; (g_102 != 25); g_102++)
        {
            unsigned l_619 = 0xB54069D9L;
            int *l_620 = (void*)0;
        }
        if ((!(*l_30)))
        {
            short l_621 = 1L;
            unsigned **l_653 = &g_320;
            int *l_674 = (void*)0;
            if (l_621)
            {
                int l_626 = 0x35AFADD1L;
                unsigned l_627 = 0x3609C185L;
                char *l_629 = &g_357;
                unsigned char **l_634 = (void*)0;
                unsigned char *l_636 = &g_102;
                unsigned *l_655 = &g_368;
                (*g_373) = ((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_626, ((**g_329) || ((!g_322) || ((*l_629) = (l_628 = (0UL < l_627))))))), (0x05B540A9L >= ((safe_rshift_func_int8_t_s_u(((l_635 = l_629) == (l_636 = (void*)0)), 4)) != ((safe_div_func_int16_t_s_s(0xFF19L, (**l_29))) > (**g_38)))))) || p_26);

                ;
                ;
                (**g_38) = (safe_add_func_uint16_t_u_u(((**l_29) ^ (safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((**l_29) >= (safe_lshift_func_uint8_t_u_s((l_648 = ((**g_383) & ((*g_321) = (l_647 = 0xF8BB2540L)))), (safe_mod_func_int16_t_s_s((l_621 >= (safe_div_func_int8_t_s_s((l_654 = (l_653 == (void*)0)), func_45(((*l_655) = p_26), (*g_123), &l_626)))), 0xE40FL))))), 0x22A2B110L)), (*g_373)))), l_626));
                for (p_26 = 9; (p_26 > (-21)); p_26--)
                {
                    return (**g_383);
                }
            }
            else
            {
                (**g_38) = l_658;
                (*l_30) = 0L;
                for (g_28 = (-2); (g_28 >= (-15)); --g_28)
                {
                    (*g_38) = &p_27;

                    ;
                }

                ;
            }

            ;
            ;
            if (p_25)
                goto lbl_676;
            if (p_27)
                goto lbl_662;
lbl_676:
            if (((**g_383) = func_45((**l_29), (*l_29), &l_647)))
            {
                l_661 = (void*)0;

                ;
lbl_662:
                (**g_383) = l_621;
                (**g_38) = ((&l_30 != (void*)0) & (p_24 == (p_24 == 0x3AL)));
            }
            else
            {
                unsigned l_669 = 0UL;
                int **l_670 = (void*)0;
                for (g_322 = (-20); (g_322 <= 13); ++g_322)
                {
                    int ***l_673 = &g_671;
                    int l_675 = 0xB4E7FA2CL;
                    if ((((*g_330) && (safe_mod_func_uint8_t_u_u(l_669, p_27))) & (l_670 != ((*l_673) = g_671))))
                    {
                        if (p_24)
                            break;
                    }
                    else
                    {
                        (*g_38) = (void*)0;

                        ;
                        l_674 = (*g_383);

                        ;
                    }
                    if (l_675)
                        break;
                }

                ;
                ;
            }

            ;
            ;
            ;
            for (g_102 = (-25); (g_102 >= 42); g_102 = safe_add_func_int16_t_s_s(g_102, 3))
            {
                (**g_383) = ((*g_502) == (void*)0);
            }
        }
        else
        {
            int l_682 = 6L;
            short *l_686 = &g_28;
            for (g_493 = 7; (g_493 >= 24); g_493 = safe_add_func_uint32_t_u_u(g_493, 3))
            {
                (*g_373) = ((safe_unary_minus_func_int8_t_s((l_682 <= p_25))) && func_60(&g_373));
                return (*l_661);
            }
            (**g_383) = ((p_24 >= (safe_add_func_int8_t_s_s(l_682, ((*l_30) & (*g_406))))) < ((*l_686) = func_60(l_685)));
            (**g_383) = (safe_add_func_int8_t_s_s(0x17L, 0L));
        }

        ;
        ;
        ;
    }

    ;

    ;
    (*l_685) = (void*)0;

    ;
    return p_26;
}







static int * func_32(unsigned p_33, int ** p_34, int ** p_35, unsigned char p_36, int ** p_37)
{
    unsigned short l_606 = 0x2863L;
    for (g_50 = 0; (g_50 < 4); ++g_50)
    {
        int **l_596 = &g_373;
        unsigned short *l_597 = &g_413;
        unsigned short *l_598 = &g_69;
        unsigned char *l_599 = &g_102;
        short *l_600 = (void*)0;
        short *l_601 = &g_28;
        unsigned short **l_608 = &l_598;
        unsigned short ***l_607 = &l_608;
        unsigned short ****l_609 = &l_607;
        (**l_596) = (safe_unary_minus_func_uint8_t_u(((*l_599) = ((safe_lshift_func_int16_t_s_u((-1L), ((0x2637L < ((*l_597) = ((**g_329) >= ((p_37 = l_596) == l_596)))) < ((*l_598) = 3UL)))) & p_36))));

        ;
        (**g_38) = (((**l_596) = ((*l_601) = (**l_596))) >= (safe_mod_func_int16_t_s_s((l_606 > (((*l_609) = l_607) != &g_329)), (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((*g_406), p_33)) ^ ((&g_503 == (void*)0) | 1UL)), l_606)), p_36)))));
    }
    return (*g_383);


}







static unsigned short func_45(unsigned p_46, int * p_47, int * p_48)
{
    unsigned short *l_481 = &g_413;
    unsigned short *l_486 = (void*)0;
    unsigned short *l_487 = &g_69;
    int **l_492 = (void*)0;
    unsigned **l_575 = &g_320;
    unsigned ***l_574 = &l_575;
    return (*g_330);
}







static int * func_51(int * p_52)
{
    unsigned l_55 = 0x7D4763C6L;
    int *l_56 = &g_57;
    unsigned short *l_68 = &g_69;
    unsigned *l_74 = &l_55;
    short *l_81 = &g_82;
    int l_83 = (-3L);
    int **l_196 = &g_39;
    int l_197 = (-2L);
    unsigned char l_205 = 1UL;
    int **l_243 = &l_56;
    short **l_304 = &l_81;
    short ***l_303 = &l_304;
    char *l_377 = &g_357;
    unsigned char l_416 = 0x35L;
    unsigned short l_430 = 3UL;
    short l_440 = 2L;
    (*l_56) = (safe_lshift_func_int8_t_s_s(l_55, 2));
    if ((safe_rshift_func_uint16_t_u_s((func_60(func_62((g_31 <= ((((*l_68) = 0UL) != ((*l_81) = (!(g_28 = (1UL || (safe_sub_func_int8_t_s_s((((*l_56) = (safe_add_func_int32_t_s_s(0x278A4911L, 0xFE983D4FL))) || ((*l_74) = (*l_56))), (((**g_38) >= 0xFFBC9EE5L) > (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((**g_38), (*p_52))), g_28)), 0x6456CFC4L)))))))))) != l_83)), g_31, l_83)) == 0x33C0L), g_31)))
    {
        int *l_188 = &g_57;
        unsigned char *l_217 = &g_102;
        unsigned short l_230 = 2UL;
        unsigned l_251 = 0x6FB2AC54L;
        int *l_308 = (void*)0;
        int l_369 = (-9L);
        if (((*g_38) != (void*)0))
        {
            unsigned char *l_193 = &g_102;
            (*l_56) = 0x422643F9L;
            l_188 = (*g_38);

            ;
            (*l_56) = (safe_div_func_int32_t_s_s((((*l_74) = (safe_lshift_func_uint8_t_u_u((*l_56), ((*l_193) = 2UL)))) || (*l_56)), 9L));
        }
        else
        {
            unsigned l_204 = 0UL;
            unsigned l_206 = 4294967295UL;
            int ***l_207 = &g_123;
            int ***l_208 = &g_123;
            int ***l_209 = (void*)0;
            int ***l_210 = (void*)0;
            int ***l_211 = &l_196;
            int **l_212 = &l_188;
            short *l_221 = &g_28;
            (*l_56) = (safe_rshift_func_uint16_t_u_u(func_60(l_196), 7));
            if ((l_197 <= (safe_lshift_func_int16_t_s_u(((*l_81) = ((l_212 = ((*l_211) = &g_39)) != &l_56)), (*l_56)))))
            {
                short **l_214 = &l_81;
                short ***l_213 = &l_214;
                (*l_213) = &l_81;
                (*l_56) = (g_39 == l_188);
            }
            else
            {
                unsigned short l_218 = 0xD5C6L;
                if ((*g_39))
                {
                    (*l_188) = (*p_52);
                }
                else
                {
                    short *l_222 = (void*)0;
                    (*l_56) = (safe_div_func_int32_t_s_s((l_217 != (void*)0), ((9UL <= ((0xD862L || g_31) <= func_60(&l_188))) ^ (*p_52))));
                }
                for (g_82 = 0; (g_82 != (-23)); g_82 = safe_sub_func_int32_t_s_s(g_82, 9))
                {
                    return (*g_38);


                }
            }

            ;
            p_52 = (void*)0;

            ;
            p_52 = (*g_38);

            ;
        }


        ;
        (*l_56) = (*p_52);
    }
    else
    {
        char *l_378 = (void*)0;
        int *l_392 = (void*)0;
        unsigned short *l_398 = &g_69;
        int l_415 = 0x3A690F25L;
        int l_441 = 1L;
        if ((l_377 != l_378))
        {
            char l_382 = 0xEBL;
            for (g_352 = 0; (g_352 != 2); g_352++)
            {
                unsigned char l_381 = 0x75L;
                int l_384 = 0L;
                char **l_389 = &l_377;
            }
        }
        else
        {
            unsigned l_402 = 0xD07C3FB2L;
            unsigned l_422 = 6UL;
            int *l_432 = &g_336;
            int **l_460 = &l_392;
            (*g_373) = func_60(&g_39);
        }
    }



    return (*g_38);


}







static short func_60(int ** p_61)
{
    int l_187 = 0x86C35E04L;
    return l_187;
}







static int ** func_62(unsigned p_63, unsigned p_64, int p_65)
{
    int **l_84 = (void*)0;
    int *l_86 = &g_31;
    int **l_85 = &l_86;
    unsigned l_90 = 0xB040F4EBL;
    unsigned *l_93 = &l_90;
    short l_97 = 0xAA25L;
    int l_131 = 0L;
    int *l_175 = &g_31;
    unsigned short *l_184 = &g_69;
    unsigned short **l_183 = &l_184;
    char l_186 = 0x14L;
    (*l_85) = (void*)0;

    ;
    for (g_28 = 0; (g_28 > 14); ++g_28)
    {
        int *l_89 = &g_57;
        (*l_89) = (g_28 == g_31);
    }
    if (l_90)
    {
        short *l_95 = (void*)0;
        short **l_94 = &l_95;
        char *l_96 = (void*)0;
        unsigned l_98 = 5UL;
        int **l_121 = &g_39;
        int l_128 = 0x406D402EL;
        unsigned short l_152 = 1UL;
        unsigned short l_165 = 0xB0F7L;
        unsigned short l_168 = 0x4E02L;
        int *l_170 = &g_57;
        unsigned short ***l_185 = &l_183;
        if ((l_98 = (((safe_mod_func_int8_t_s_s(g_69, (l_97 = (((&p_63 == (l_93 = &p_64)) & 0x3BL) && ((((*l_94) = &g_28) == &g_28) <= ((((*l_85) = (void*)0) == (*g_38)) && (**g_38))))))) != (*g_39)) < 0xD8L)))
        {
            short l_115 = 9L;
            int l_117 = 0xE0E7A75EL;
            for (l_98 = 22; (l_98 >= 29); ++l_98)
            {
                unsigned l_116 = 1UL;
                int *l_122 = (void*)0;
                if (p_63)
                {
                    unsigned char *l_101 = &g_102;
                    if (((l_117 = ((((*l_101) = 0xA5L) ^ ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(p_65, g_82)), g_82)) >= (0xB1L | (safe_rshift_func_uint16_t_u_u(g_82, (((~((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(0UL, 4L)), ((safe_sub_func_uint16_t_u_u(g_57, 0xE514L)) & p_65))) && p_64)) > l_115) == (-2L))))))) & l_116)) <= g_57))
                    {
                        unsigned short *l_119 = &g_69;
                        unsigned short **l_118 = &l_119;
                        unsigned short ***l_120 = &l_118;
                        (*l_120) = l_118;
                        return l_121;


                    }
                    else
                    {
                        g_57 = ((p_63 = p_65) > l_116);
                    }
                    (*l_85) = l_122;
                }
                else
                {
                    return g_123;


                }
                for (g_102 = 24; (g_102 >= 5); g_102 = safe_sub_func_int8_t_s_s(g_102, 6))
                {
                    l_128 = ((~(safe_div_func_int16_t_s_s(g_28, g_82))) ^ 0x8EL);
                }
                (*l_85) = (void*)0;
            }
        }
        else
        {
            unsigned char l_142 = 0xF2L;
            int l_154 = 0xDFD65E78L;
            int *l_158 = (void*)0;
            unsigned short *l_162 = &g_69;
            int l_164 = (-1L);
            int *l_182 = &l_154;
            if (p_63)
            {
                unsigned short l_129 = 0UL;
                int *l_130 = (void*)0;
                unsigned short *l_163 = &l_129;
                int *l_169 = &l_154;
                if (l_129)
                {
                    int *l_133 = &g_57;
                    (*l_85) = (l_130 = (*g_38));

                    ;
                    ;
                    if ((**l_121))
                    {
                        int *l_132 = (void*)0;
                        (*l_85) = (l_130 = (*g_38));
                        l_131 = 0xEEF21D7AL;
                        l_132 = (*g_123);

                        ;
                        return l_121;


                    }
                    else
                    {
                        l_133 = l_133;
                    }
                    for (l_131 = 0; (l_131 == (-6)); --l_131)
                    {
                        unsigned char *l_153 = &g_102;
                        l_154 = (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_142, 3)), (safe_mod_func_uint8_t_u_u(((p_64 && (*l_130)) >= (((g_28 || 0x72L) || (p_63 && ((*l_153) = (safe_unary_minus_func_uint32_t_u(((**l_85) != (((*l_133) = (safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((*l_133), (l_152 = ((void*)0 == (*l_121))))), 0xFC7CL)), 0x564EL))) >= (**g_123)))))))) & 0L)), g_82)))), g_82));
                        if ((**g_38))
                            continue;
                    }
                }
                else
                {
                    int *l_155 = (void*)0;
                    int *l_166 = (void*)0;
                    int *l_167 = &l_164;
                    l_155 = (*g_38);

                    ;
                    if (g_57)
                        goto lbl_159;
lbl_159:
                    for (p_63 = 0; (p_63 == 52); ++p_63)
                    {
                        l_158 = l_155;

                        ;
                    }

                    ;
                    l_158 = l_130;

                    ;
                    (*l_167) = (g_102 <= ((safe_mod_func_uint32_t_u_u((&l_129 == (l_163 = (l_162 = &l_152))), l_164)) < l_165));

                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (*l_169) = (((*l_93) = 0xEB7D8DEEL) || ((*l_93) = (l_168 >= (**g_38))));
                l_170 = (*l_121);

                ;
                (*l_85) = l_130;
            }
            else
            {
                (*l_170) = (safe_add_func_int16_t_s_s(g_28, ((safe_add_func_int8_t_s_s(p_63, g_57)) && ((g_82 >= ((((*l_85) = l_175) != (void*)0) > (safe_sub_func_int32_t_s_s((((**g_38) >= (((*l_121) != &l_164) == 65528UL)) < p_65), 6L)))) ^ 0x52B20C39L))));

                ;
                (*l_85) = (*g_123);

                ;
                l_154 = ((*l_170) = (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_64, g_57)), 0x808E4DAEL)));
                if (p_63)
                {
                    return &g_39;


                }
                else
                {
                    return &g_39;


                }
            }

            ;
            ;
            ;
            (*l_182) = (**g_38);
        }

        ;
        ;
        ;
        ;
        g_57 = (((((*l_185) = l_183) != (void*)0) < (*g_39)) == ((((((g_82 || ((void*)0 == (*l_121))) | (&l_175 == (g_123 = &l_175))) && (g_28 = p_65)) | (**l_121)) < l_186) > 1L));

        ;
    }
    else
    {
        (*l_85) = (*g_38);

        ;
    }

    ;
    ;
    ;
    return &g_39;



}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
