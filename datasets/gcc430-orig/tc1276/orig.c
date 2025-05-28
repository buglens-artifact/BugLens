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


struct S0 {
   unsigned f0 : 26;
};

struct S1 {
   unsigned f0;
   short f1;
};

struct S2 {
   signed f0 : 29;
   signed f1 : 24;
   const signed f2 : 15;
   unsigned f3 : 16;
   signed f4 : 11;
   unsigned f5 : 15;
   const unsigned f6 : 14;
   unsigned f7 : 31;
   const signed f8 : 13;
   unsigned f9 : 4;
};


static short g_4 = 0x607AL;
static short g_35 = 1L;
static int g_50 = 7L;
static int *g_49 = &g_50;
static struct S1 g_61 = {4294967295UL,0x4C80L};
static struct S0 g_68 = {5831};
static char g_70 = (-1L);
static int **g_85 = &g_49;
static short *g_99 = &g_35;
static short **g_98 = &g_99;
static unsigned short g_105 = 65528UL;
static unsigned char g_115 = 0UL;
static const struct S1 **g_130 = (void*)0;
static char *g_139 = (void*)0;
static char ** const g_138 = &g_139;
static char g_144 = 0xC9L;
static struct S1 g_150 = {1UL,0x8AAAL};
static unsigned short g_168 = 0x0C1DL;
static struct S2 g_188 = {16087,3181,26,57,-39,91,17,41469,81,2};
static struct S2 *g_187 = &g_188;
static struct S2 g_231 = {13074,265,-46,99,-15,57,49,5016,73,2};
static const char g_280 = (-1L);
static const char *g_279 = &g_280;
static char * const g_353 = (void*)0;
static char * const *g_352 = &g_353;
static char * const **g_351 = &g_352;
static struct S1 *g_359 = &g_61;
static char g_374 = 0L;
static unsigned g_394 = 9UL;
static struct S2 g_405 = {13274,1916,38,22,-14,98,92,39451,-64,2};
static struct S1 g_443 = {4294967288UL,1L};
static unsigned g_565 = 0x2CD9F857L;
static char *g_602 = &g_374;
static struct S2 ** const g_614 = &g_187;
static unsigned short g_633 = 0x6E87L;
static const int *g_647 = &g_50;
static int *g_722 = &g_50;
static unsigned char g_784 = 250UL;
static int ** const *g_788 = &g_85;
static int ** const **g_787 = &g_788;
static struct S0 **g_818 = (void*)0;



static unsigned char func_1(void);
static int func_2(char p_3);
static unsigned char func_5(struct S2 p_6, int p_7);
static struct S2 func_8(struct S2 p_9, char p_10);
static struct S2 func_12(struct S1 p_13, unsigned short p_14, char p_15, const int p_16);
static unsigned char func_17(int p_18, char p_19, struct S2 p_20, unsigned p_21, const char p_22);
static unsigned func_25(int p_26, struct S1 p_27, unsigned short p_28, char p_29);
static struct S0 func_30(unsigned char p_31, short p_32, short p_33);
static struct S0 func_42(short * p_43, unsigned char p_44, unsigned char p_45, struct S1 p_46);
static unsigned func_47(short * p_48);
static unsigned char func_1(void)
{
    unsigned short l_747 = 0x7047L;
    struct S1 **l_750 = &g_359;
    struct S1 ***l_749 = &l_750;
    struct S1 * const *l_752 = &g_359;
    struct S1 * const **l_751 = &l_752;
    struct S2 l_753 = {-10642,-3550,-36,221,-15,152,0,29783,-17,2};
    int *l_816 = (void*)0;
    unsigned short l_829 = 65535UL;
    if (func_2(g_4))
    {
        int *l_738 = &g_50;
        int **l_739 = &l_738;
        (*l_739) = l_738;
        (*l_739) = (*l_739);
    }
    else
    {
        const unsigned char l_744 = 255UL;
        unsigned char *l_745 = &g_115;
        unsigned *l_746 = &g_394;
        int l_748 = (-1L);
        l_748 = ((safe_mod_func_int16_t_s_s(((l_744 | ((((*l_745) = g_144) , &g_115) == (((*g_99) <= 0x3E33L) , ((*g_722) , g_602)))) < (((*l_746) = g_405.f8) >= l_744)), 1UL)) > l_747);
    }





    ;
    ;
    ;
    if ((+(l_749 == l_751)))
    {
        int l_754 = 0xFBB9AA26L;
        short l_774 = 0x15A9L;
        int l_775 = 0x666A6580L;
        int ** const **l_790 = &g_788;
        int *l_795 = &l_775;
        int *l_798 = (void*)0;
        struct S1 l_810 = {4294967295UL,-9L};
        struct S2 **l_812 = &g_187;
        unsigned l_819 = 0UL;
        if (l_754)
        {
            struct S2 l_764 = {-9856,-2590,-78,41,-4,47,76,22711,68,2};
            struct S0 l_767 = {6086};
            unsigned short *l_771 = &g_105;
            unsigned short **l_770 = &l_771;
            unsigned short *l_773 = &g_105;
            unsigned short **l_772 = &l_773;
            unsigned char *l_780 = (void*)0;
            unsigned char *l_781 = &g_115;
            unsigned char *l_782 = (void*)0;
            unsigned char *l_783 = &g_784;
            int ** const ***l_789 = (void*)0;
            for (g_394 = (-1); (g_394 == 51); ++g_394)
            {
                int **l_757 = &g_49;
                (*l_757) = &g_50;

                ;
            }
            (*g_722) = ((safe_lshift_func_uint16_t_u_u(7UL, 14)) || ((safe_mul_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((((func_5(l_764, (safe_lshift_func_int8_t_s_s((l_767 , l_764.f6), 2))) & (g_405.f9 <= (safe_lshift_func_int16_t_s_u((**g_98), 3)))) , (((((*l_772) = ((*l_770) = &l_747)) != (void*)0) >= (-1L)) == l_753.f8)) > g_188.f6) , g_374), g_188.f1)) <= l_774), l_775)) ^ g_35));

            ;
            ;
            (*g_722) = (((safe_add_func_uint8_t_u_u(((((((safe_mod_func_uint32_t_u_u(l_753.f5, l_764.f4)) <= ((*l_781) = g_565)) <= (((*l_783) = (g_443.f0 <= 0x3BL)) , (g_405.f8 >= (+(safe_add_func_int16_t_s_s(((l_790 = g_787) == &g_788), (((g_565 == g_61.f0) != 0x81FEL) ^ 0x4F6DL))))))) ^ 0x15C3L) >= g_144) , l_753.f8), (*g_602))) && g_188.f2) && l_753.f5);
        }
        else
        {
            unsigned char l_802 = 0x14L;
            int l_811 = 1L;
            (*g_722) = (-1L);
            for (l_774 = 0; (l_774 < 16); l_774 = safe_add_func_uint32_t_u_u(l_774, 1))
            {
                struct S1 l_808 = {4294967290UL,3L};
                struct S0 *l_814 = &g_68;
                int * const l_815 = (void*)0;
                int *l_817 = &g_50;
                if (l_775)
                {
                    int l_797 = 0x6C78A627L;
                    (*g_722) = 0x60CD8B46L;
                    for (g_168 = 0; (g_168 == 53); g_168 = safe_add_func_uint8_t_u_u(g_168, 1))
                    {
                        int **l_796 = &g_722;
                        g_49 = (void*)0;

                        ;
                        (*l_796) = l_795;

                        ;
                    }
                    l_797 = 0x59E75832L;
                }
                else
                {
                    int *l_799 = &l_775;
                    l_799 = l_798;

                    ;
                    for (g_105 = 0; (g_105 >= 47); g_105++)
                    {
                        unsigned short *l_803 = &l_747;
                        const int l_809 = 1L;
                        struct S2 ***l_813 = &l_812;
                        (*l_795) = (((l_802 | (((*l_803) = g_405.f1) >= (((**g_98) = (**g_98)) , ((safe_lshift_func_int8_t_s_s((((*g_99) = ((safe_mod_func_int8_t_s_s(((l_808 , func_25((~l_809), l_810, g_115, (l_808.f1 | l_753.f1))) , 0x3FL), (*l_795))) || l_802)) & l_802), 0)) , l_753.f4)))) != l_802) , l_809);
                        if (l_811)
                            break;
                        (*l_813) = (l_753.f7 , l_812);
                        (*g_722) = (!0x56D7A59DL);
                    }
                }
                (*l_814) = g_68;
                l_816 = l_815;
                l_817 = &l_775;

                ;
            }

            ;
        }

        ;
        (*g_722) = ((((g_818 != g_818) == ((func_8((g_105 , (((void*)0 != (**l_749)) , g_405)), (l_819 = (((*g_279) , g_818) == (void*)0))) , g_231.f6) & g_405.f1)) <= 0L) || (*g_99));
        return g_168;


    }
    else
    {
        int **l_820 = &g_49;
        struct S1 l_827 = {0UL,-1L};
        short *l_828 = &g_61.f1;
        (*l_820) = (void*)0;

        ;
        (*g_722) = ((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_828) = ((*g_99) = ((safe_sub_func_uint32_t_u_u(g_405.f3, (*g_647))) & ((((l_827 , g_565) , g_405.f6) >= (g_4 && (g_231.f9 ^ g_443.f0))) ^ (*g_647))))), g_61.f0)), 1UL)) , 0xEB79B396L);
    }

    ;
    l_829 = l_747;
    (*g_614) = &l_753;

    ;
    return g_50;


}







static int func_2(char p_3)
{
    const unsigned l_11 = 4294967295UL;
    short *l_34 = &g_35;
    short l_36 = 0x46B3L;
    unsigned l_37 = 7UL;
    struct S0 *l_148 = &g_68;
    unsigned short *l_149 = &g_105;
    unsigned *l_153 = &l_37;
    struct S2 l_154 = {15845,-3971,-35,75,-8,30,92,9011,58,3};
    struct S1 l_172 = {0UL,0xF21FL};
    short l_173 = 1L;
    unsigned char l_490 = 0x89L;
    int *l_491 = (void*)0;
    struct S2 l_531 = {-18574,-2422,-9,201,-29,51,13,42942,-50,1};
    int l_606 = (-10L);
    struct S1 l_612 = {0x26E957CDL,-7L};
    char *l_615 = &g_70;
    struct S0 *l_643 = &g_68;
    int ***l_697 = &g_85;
    struct S1 l_734 = {1UL,0x4A7FL};
    struct S2 l_735 = {-17605,2594,-168,250,27,66,59,40539,42,3};
    int l_737 = (-2L);
    g_405.f1 = (+(func_5(func_8((l_11 , func_12(((g_4 > ((g_4 != 1UL) ^ (func_17((safe_sub_func_uint32_t_u_u(((*l_153) = func_25((((l_11 ^ (g_4 | g_4)) < ((*l_149) = (((*l_148) = func_30(((((*l_34) = ((+253UL) | l_11)) >= l_36) <= l_11), l_37, l_36)) , g_105))) != g_144), g_150, g_61.f0, p_3)), p_3)), l_11, l_154, p_3, p_3) < 2UL))) , l_172), p_3, l_173, g_144)), p_3), l_173) < l_490));





    ;
    ;
    ;
    if (p_3)
    {
        struct S1 *l_495 = &g_150;
        short **l_505 = &l_34;
        int l_530 = 1L;
        unsigned l_558 = 0x98ACD116L;
        int *l_583 = &l_530;
        char *l_616 = &g_70;
        unsigned short *l_650 = &g_105;
        struct S1 ****l_662 = (void*)0;
        struct S2 l_665 = {-14355,3116,121,243,-44,52,68,44833,-7,2};
        char l_676 = 3L;
        int *l_682 = &l_606;
        struct S0 l_701 = {1522};
        struct S2 l_713 = {-20040,791,-41,169,20,105,103,12472,75,2};
        struct S1 l_736 = {0xF75F5F3CL,0L};
        for (g_35 = (-7); (g_35 > 10); g_35 = safe_add_func_int8_t_s_s(g_35, 1))
        {
            int l_524 = 1L;
            struct S0 *l_536 = &g_68;
            struct S2 *l_542 = &l_531;
            short *l_564 = &g_61.f1;
            int l_575 = (-5L);
            int l_577 = 0L;
            int *l_578 = &l_577;
            const unsigned char l_652 = 0x4FL;
            if (l_154.f8)
            {
                struct S1 **l_494 = &g_359;
                l_495 = ((*l_494) = &g_443);

                ;
                ;
                (*l_148) = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0x8CDFL, p_3)), 254UL)) , g_68);
            }
            else
            {
                int *l_500 = &g_50;
                (*l_500) = p_3;
            }
            for (l_36 = (-5); (l_36 < 16); ++l_36)
            {
                char l_506 = 0x5CL;
                short *l_523 = (void*)0;
                for (l_172.f0 = 0; (l_172.f0 <= 6); l_172.f0++)
                {
                    char *l_529 = &l_506;
                    const int l_532 = 0x6935B740L;
                    struct S1 l_544 = {0xE321A14BL,-1L};
                    l_506 = ((void*)0 != l_505);
                    for (g_168 = (-3); (g_168 >= 51); g_168++)
                    {
                        (*l_495) = (*l_495);
                        return l_506;
                    }
                    if ((safe_sub_func_int16_t_s_s(0xFEE5L, (safe_mod_func_int8_t_s_s(func_17((safe_sub_func_uint8_t_u_u(p_3, ((((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_70, ((safe_sub_func_uint16_t_u_u(p_3, (safe_rshift_func_int16_t_s_u(p_3, 5)))) > l_524))), ((*l_153) = 9UL))) || (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((*l_529) = p_3) <= g_188.f9), l_524)), 6))) ^ g_405.f4) <= l_524))), l_530, l_531, l_524, l_532), 0x43L)))))
                    {
                        struct S1 ***l_533 = (void*)0;
                        struct S1 **l_534 = &l_495;
                        int *l_535 = &l_524;
                        struct S0 **l_537 = &l_148;
                        const int *l_539 = &l_530;
                        const int **l_538 = &l_539;
                        (*l_535) = ((l_534 = &g_359) == &g_359);

                        ;
                        (*l_537) = l_536;
                        (*l_538) = &l_532;

                        ;
                        (*l_538) = (void*)0;

                        ;
                    }
                    else
                    {
                        const int *l_541 = (void*)0;
                        const int **l_540 = &l_541;
                        struct S2 **l_543 = &l_542;
                        struct S1 *l_545 = (void*)0;
                        struct S1 *l_546 = (void*)0;
                        struct S1 *l_547 = &g_61;
                        (*l_540) = &l_532;

                        ;
                        (*l_543) = l_542;
                        (*l_547) = ((*l_495) = l_544);
                        l_542 = &g_231;

                        ;
                    }

                    ;
                }
            }

            ;
        }

        ;
        ;
        for (g_50 = 0; (g_50 < (-15)); g_50--)
        {
            int l_668 = 0xA04CEC2FL;
            struct S2 **l_687 = &g_187;
            int l_700 = 0x9AD8F9EDL;
            struct S2 *l_704 = &l_531;
            if (((safe_sub_func_uint8_t_u_u((g_61.f1 != (safe_mul_func_int8_t_s_s((~(((*l_148) , l_662) == (void*)0)), (1UL <= ((safe_mod_func_uint32_t_u_u(((*l_153) = ((!(~((g_4 , g_231.f4) ^ ((((l_154 , (void*)0) == &g_138) & l_668) , 0xBF84L)))) || 4294967294UL)), p_3)) || (*g_99)))))), g_231.f2)) || 0xA7L))
            {
                unsigned *l_673 = (void*)0;
                unsigned *l_674 = &g_394;
                const int l_675 = 0x7B0D8139L;
                struct S1 l_677 = {0x5ECDE776L,-1L};
                if ((0xCBL < ((l_668 != (safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint32_t_u_u(((*l_674) = ((*l_153) = (!0xEEB78836L))), func_25(((l_675 != l_676) , l_675), l_677, l_677.f1, (*l_583)))) & p_3) && 1UL), 4))) & 4294967289UL)))
                {
                    char l_678 = (-4L);
                    (*l_583) = ((l_678 = ((p_3 == (-6L)) == (*l_583))) > g_405.f6);
                }
                else
                {
                    int **l_679 = &g_49;
                    (*l_679) = &l_606;

                    ;
                    if (l_677.f0)
                        break;
                }
            }
            else
            {
                int *l_685 = &l_606;
                short *l_692 = &g_4;
                struct S1 l_693 = {3UL,-1L};
                int ***l_694 = &g_85;
                for (g_150.f1 = 0; (g_150.f1 >= 8); g_150.f1 = safe_add_func_int32_t_s_s(g_150.f1, 3))
                {
                    int ****l_695 = (void*)0;
                    int ****l_696 = (void*)0;
                    if (p_3)
                        break;
                    l_682 = &l_606;
                    for (l_668 = 0; (l_668 <= 1); l_668++)
                    {
                        int **l_686 = &g_49;
                        struct S2 ***l_688 = (void*)0;
                        struct S2 ***l_689 = &l_687;
                        if (l_668)
                            break;
                        l_583 = ((*l_686) = l_685);

                        ;
                        ;
                        (*l_689) = l_687;
                    }
                    (*l_682) = (safe_sub_func_uint32_t_u_u(g_405.f2, func_25(p_3, (g_61 = l_693), ((l_697 = l_694) != &g_85), (l_700 = (safe_mul_func_int8_t_s_s(p_3, 1UL))))));
                }
            }
            l_701 = g_68;
            if (p_3)
            {
                (*l_682) = (*g_647);
            }
            else
            {
                for (l_676 = 0; (l_676 >= (-29)); --l_676)
                {
                    (*l_687) = l_704;

                    ;
                }
            }
        }



        ;
        l_531.f1 = ((*l_583) = ((&g_68 == &l_701) == (&l_612 != &l_612)));
        if (p_3)
        {
            int l_707 = 1L;
            struct S1 l_708 = {4294967287UL,1L};
            short l_720 = 0xC578L;
            unsigned char *l_721 = &l_490;
            if (((*l_682) = (safe_mul_func_int8_t_s_s((((((func_25(l_707, l_708, (*l_583), (g_144 , p_3)) < (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_721) = (func_5(l_713, (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_3, (safe_mul_func_uint8_t_u_u(l_708.f0, p_3)))), p_3))) | l_720)), (*g_602))), (*l_583)))) , l_708.f0) >= 8UL) || p_3) ^ p_3), 1L))))
            {
                return p_3;



            }
            else
            {
                int **l_723 = &l_583;
                (*l_723) = g_722;

                ;
            }

            ;
        }
        else
        {
            unsigned l_733 = 0UL;
            (*l_643) = func_42((*g_98), ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(p_3)), ((*g_99) = (**g_98)))) < (((((safe_mul_func_int16_t_s_s(p_3, (safe_rshift_func_int16_t_s_u(p_3, ((safe_rshift_func_uint16_t_u_u(func_25((l_733 , func_25(((*l_583) | 0x3D782C50L), l_734, l_733, l_733)), l_734, g_443.f0, p_3), (*l_682))) != g_150.f1))))) , l_735) , 6UL) , p_3) & (-1L))), (*l_682), l_736);

            ;
        }

        ;
    }
    else
    {
        return p_3;
    }



    ;
    return l_737;



}







static unsigned char func_5(struct S2 p_6, int p_7)
{
    struct S0 * const l_487 = &g_68;
    struct S0 *l_489 = &g_68;
    struct S0 **l_488 = &l_489;
    (*l_488) = (p_6.f2 , l_487);
    return g_443.f0;
}







static struct S2 func_8(struct S2 p_9, char p_10)
{
    struct S1 **l_438 = &g_359;
    struct S1 ***l_439 = &l_438;
    struct S1 * const l_442 = &g_443;
    struct S1 * const *l_441 = &l_442;
    struct S1 * const **l_440 = &l_441;
    int l_446 = (-8L);
    int *l_453 = &l_446;
    unsigned short l_454 = 65532UL;
    short *l_478 = &g_61.f1;
    struct S2 **l_485 = &g_187;
    if ((safe_lshift_func_int16_t_s_s((((((((((p_9.f2 > ((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((((*l_453) = (safe_mod_func_uint16_t_u_u(((p_9.f1 != ((*g_99) = 0L)) , (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((((*l_439) = l_438) == ((*l_440) = &g_359)), (p_9.f4 <= ((safe_mul_func_uint16_t_u_u((((*g_99) = l_446) || ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(0xFEL, ((p_9.f1 = l_446) && p_9.f0))), l_446)), p_9.f8)) <= g_105)), 0xC7B6L)) == 0x64L)))) == g_188.f3), p_9.f8))), p_9.f4))) > p_9.f2) <= g_231.f0), l_454)) ^ (-10L)), p_9.f3)) == p_9.f2)) , g_231.f4) , 6L) & g_61.f0) && (*g_99)) ^ p_9.f4) == p_9.f3) & g_231.f9) != 0x7EL), 9)))
    {
        struct S1 l_459 = {0xEDAD87BEL,-9L};
        char *l_464 = &g_70;
        unsigned short *l_465 = &g_105;
        struct S2 l_466 = {-11522,167,-54,165,-10,12,56,5853,61,3};
        struct S0 l_469 = {7328};
        int *l_482 = &g_50;
        struct S2 **l_484 = &g_187;
        if ((safe_mod_func_int16_t_s_s((-3L), (safe_sub_func_int16_t_s_s((l_466 , 0xE3C4L), p_9.f9)))))
        {
            unsigned char *l_474 = &g_115;
            char l_477 = 0x11L;
            int *l_481 = (void*)0;
            struct S2 **l_483 = &g_187;
            p_9.f0 = (((*g_99) = (((((((((safe_mod_func_uint8_t_u_u((l_469 , (safe_sub_func_uint16_t_u_u((p_9.f2 >= (*g_99)), (safe_rshift_func_uint8_t_u_u(((*l_474) = g_231.f1), 5))))), ((l_477 & (*g_99)) || (g_280 & (safe_rshift_func_int16_t_s_s(0L, 7)))))) & 0x0FL) , g_50) | l_477) || g_443.f0) || 0xA2E9C4CBL) , p_9.f8) , l_453) != (void*)0)) , 0x0F1E17E1L);
            l_482 = l_481;

            ;
            (*l_483) = &p_9;

            ;
        }
        else
        {
            l_485 = l_484;
        }


        ;
    }
    else
    {
        int *l_486 = &g_50;
        l_453 = l_486;

        ;
    }


    ;
    ;
    return p_9;


}







static struct S2 func_12(struct S1 p_13, unsigned short p_14, char p_15, const int p_16)
{
    short *l_174 = &g_150.f1;
    int l_175 = 0x23213DDAL;
    short l_176 = 0x33AEL;
    struct S0 l_179 = {5343};
    unsigned char l_180 = 0x38L;
    int l_181 = 0x08CA6926L;
    unsigned l_203 = 0x4B51E4AAL;
    const int *l_205 = &l_175;
    struct S2 *l_230 = &g_231;
    const unsigned l_285 = 1UL;
    struct S1 l_328 = {0x854BE676L,-9L};
    struct S2 *l_404 = &g_405;
    if ((l_175 , (((((-5L) < (g_61.f0 == 0x58306E76L)) <= l_176) & ((l_179 , p_13.f1) >= ((l_180 && l_180) <= 4294967286UL))) & l_181)))
    {
        int *l_182 = &l_181;
        struct S0 l_217 = {1340};
        short l_236 = 0xCF31L;
        short l_330 = 0xF672L;
        int **l_406 = &l_182;
        if (p_13.f1)
        {
            int **l_183 = &l_182;
            struct S1 l_184 = {0x895B54F2L,0xCA52L};
            struct S1 *l_185 = (void*)0;
            struct S1 *l_186 = &g_150;
            struct S0 *l_229 = &l_217;
            (*l_183) = l_182;
            (*l_186) = l_184;
            if ((((**l_183) = l_180) >= g_50))
            {
                struct S2 **l_189 = &g_187;
                const int *l_204 = &g_50;
                (*l_189) = g_187;
                for (g_50 = (-22); (g_50 <= (-15)); g_50 = safe_add_func_int16_t_s_s(g_50, 6))
                {
                    unsigned char *l_198 = &l_180;
                    unsigned char *l_199 = &g_115;
                    unsigned l_202 = 0UL;
                    const int **l_206 = &l_205;
                    (*l_182) = (((1L == (safe_mul_func_uint16_t_u_u(g_188.f2, 0L))) || (safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((((*l_198) = (g_4 && g_70)) < ((*l_199) = p_14)) ^ (safe_add_func_uint32_t_u_u(9UL, l_202))), (*g_139))), p_13.f0))) <= l_203);
                    l_205 = l_204;

                    ;
                    (*l_206) = l_204;
                    (*l_183) = &l_175;

                    ;
                }

                ;
                ;
            }
            else
            {
                unsigned short *l_209 = (void*)0;
                unsigned short *l_210 = &g_105;
                int l_213 = 1L;
                if ((safe_add_func_int8_t_s_s(((((*l_210) = (p_14 < (*l_182))) ^ (safe_rshift_func_int8_t_s_u(0xDEL, 5))) != func_25((**l_183), p_13, (p_13 , p_13.f1), func_25(p_13.f1, p_13, l_213, l_213))), p_15)))
                {
                    int *l_214 = &g_50;
                    (**l_183) = (-1L);
                    (*l_183) = l_214;

                    ;
                    for (l_180 = (-16); (l_180 >= 33); ++l_180)
                    {
                        struct S0 *l_218 = &l_179;
                        struct S2 **l_219 = &g_187;
                        (*l_218) = l_217;
                        (*l_219) = &g_188;
                    }
                }
                else
                {
                    struct S1 **l_220 = &l_186;
                    (*l_220) = &g_150;
                    (*l_182) = ((-8L) > (safe_add_func_int8_t_s_s((**g_138), ((safe_unary_minus_func_uint8_t_u(1UL)) <= (*l_182)))));
                    for (l_184.f0 = (-18); (l_184.f0 <= 30); l_184.f0++)
                    {
                        unsigned char l_228 = 0xD2L;
                    }
                    (**l_220) = (**l_220);
                }

                ;
                l_230 = &g_188;

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            unsigned short *l_239 = &g_168;
            struct S0 l_244 = {8025};
            (*l_182) = (safe_mod_func_int8_t_s_s(0L, ((*l_182) , (g_61 , ((safe_mul_func_uint16_t_u_u((l_236 >= (&l_236 != (*g_98))), g_231.f0)) & ((((*l_239) = ((((safe_mul_func_uint8_t_u_u(g_231.f1, ((5UL >= p_13.f1) && p_15))) && g_188.f5) ^ 0xE4F7C98BL) | g_188.f8)) < p_15) >= g_4))))));
            if ((g_188.f2 ^ (safe_rshift_func_uint16_t_u_u(g_188.f5, (safe_lshift_func_int16_t_s_s(p_14, (l_244 , (*l_205))))))))
            {
                l_205 = &l_175;
            }
            else
            {
                int *l_247 = &g_50;
                int **l_248 = &g_49;
                for (g_70 = 28; (g_70 <= 26); --g_70)
                {
                    return (*g_187);
                }
                l_205 = l_247;

                ;
                (*l_248) = l_247;

                ;
            }

            ;
            l_175 = ((8UL >= (safe_mul_func_int16_t_s_s((l_244.f0 , p_16), (*g_99)))) < ((((safe_mod_func_int16_t_s_s((*l_205), (safe_rshift_func_int16_t_s_u(((-4L) ^ (p_13.f0 || g_115)), 1)))) , &l_244) != &g_68) , l_244.f0));
        }

        ;
        ;
        ;
        if (p_16)
        {
            unsigned char *l_261 = &l_180;
            int l_262 = 0x179B6A97L;
            struct S1 l_263 = {0xD2FB5778L,0x0F05L};
            unsigned short *l_264 = &g_105;
            const char *l_278 = &g_70;
            struct S0 *l_320 = &l_179;
            int **l_372 = &l_182;
            short l_401 = 0x7E10L;
            int **l_402 = &g_49;
            if ((safe_lshift_func_uint8_t_u_u(((*l_261) = (0x0836L | ((*l_264) = (((*l_182) = p_15) , (((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(func_25((((((**g_138) = p_15) , (g_68 , l_261)) != &l_180) , l_262), l_263, l_262, p_14), 2)), 0xB5F3F9DCL)) >= p_13.f1) == 0x38BCB9B1L))))), 5)))
            {
                int l_294 = 0L;
                int *l_303 = &g_50;
                struct S0 *l_309 = &l_179;
                struct S0 **l_308 = &l_309;
                (*l_182) = p_15;
                if ((((g_188.f0 , &g_187) != &g_187) || g_4))
                {
                    unsigned l_273 = 0x7FDA55CEL;
                    const int l_295 = 0x8178A366L;
                    int *l_304 = (void*)0;
                    (*l_182) = (((*l_205) , 0xA2D1B407L) || (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0x79D1L, ((safe_mod_func_uint16_t_u_u(l_273, (safe_mul_func_uint16_t_u_u(7UL, ((safe_rshift_func_int16_t_s_s((p_13.f1 = (*g_99)), (*g_99))) ^ p_15))))) , 0x0307L))), g_188.f6)), 0x75L)));
                    (*l_182) = (((g_279 = l_278) == (void*)0) , ((0x9E7BL > ((safe_lshift_func_uint16_t_u_u(4UL, p_13.f0)) ^ (safe_add_func_int8_t_s_s(l_285, ((safe_mod_func_int16_t_s_s((**g_98), (safe_add_func_uint8_t_u_u(1UL, (safe_mul_func_int16_t_s_s((((*l_174) = ((p_13.f1 = ((safe_mod_func_uint8_t_u_u(0x16L, p_14)) != l_262)) ^ l_294)) || l_295), p_15)))))) , l_294))))) & p_15));

                    ;
                    for (g_35 = 26; (g_35 < (-24)); --g_35)
                    {
                        int *l_300 = &l_262;
                        (*l_300) = ((*l_182) = (safe_lshift_func_uint16_t_u_s((255UL <= p_13.f1), 8)));
                    }
                    for (l_203 = 6; (l_203 > 24); l_203 = safe_add_func_uint16_t_u_u(l_203, 5))
                    {
                        l_304 = l_303;

                        ;
                    }

                    ;
                }
                else
                {
                    const unsigned l_307 = 0x776AB288L;
                    (*l_182) = (safe_add_func_uint8_t_u_u((func_17(p_13.f0, ((((((0x6154L >= 0xA273L) >= (*g_279)) <= p_15) > 0x15F3A981L) || p_14) && (((((*l_182) = 0x8466L) || 0x61FEL) >= g_115) != g_70)), (*g_187), p_16, l_307) >= (**g_98)), 0x1EL));
                }

                ;
                l_205 = l_303;

                ;
                (*l_308) = &l_217;

                ;
            }
            else
            {
                int **l_310 = (void*)0;
                g_49 = (p_16 , (void*)0);

                ;
            }

            ;
            if ((*l_205))
            {
                unsigned char l_329 = 0x5CL;
                int **l_331 = &g_49;
                for (g_115 = (-10); (g_115 >= 14); ++g_115)
                {
                    int l_321 = (-8L);
                }
                l_330 = (((!0xB6112E7AL) ^ p_16) < l_329);
                l_182 = ((*l_331) = l_182);

                ;
            }
            else
            {
                unsigned l_354 = 0xC279BA28L;
                int *l_363 = &l_175;
                struct S1 l_383 = {0UL,-3L};
                struct S1 **l_388 = &g_359;
                struct S1 ***l_387 = &l_388;
                for (l_262 = 0; (l_262 >= (-19)); l_262 = safe_sub_func_uint32_t_u_u(l_262, 7))
                {
                    struct S1 l_334 = {6UL,-1L};
                    char l_355 = (-8L);
                    struct S1 **l_360 = (void*)0;
                    struct S1 *l_362 = &l_263;
                    struct S1 **l_361 = &l_362;
                    int **l_364 = &l_182;
                    g_150 = l_334;
                    for (l_203 = 0; (l_203 <= 16); l_203++)
                    {
                        short l_337 = 0L;
                        struct S2 **l_356 = (void*)0;
                        struct S2 **l_357 = &l_230;
                        struct S2 l_358 = {9579,3018,50,31,31,129,124,44597,11,2};
                        (*l_182) = ((-1L) < (((p_13.f0 | l_262) | (l_337 == ((*l_264) = (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_s(1L, 2)) , ((p_13.f1 & (!(((safe_unary_minus_func_uint16_t_u(((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(1L, 14)), (((g_351 = (void*)0) != (void*)0) != l_354))), (*l_205))) || (-1L)))) | p_15) > l_355))) == (*g_279))) < 7L) > (*l_182)), l_355)), 0x8FL))))) != (*l_182)));

                        ;
                        (*l_357) = &g_231;

                        ;
                        return l_358;
                    }
                    (*l_361) = (g_359 = (void*)0);

                    ;
                    ;
                    (*l_364) = l_363;

                    ;
                }

                ;
                for (l_330 = 0; (l_330 <= 11); l_330 = safe_add_func_uint8_t_u_u(l_330, 1))
                {
                    struct S0 **l_367 = &l_320;
                    unsigned short *l_373 = &g_168;
                    int l_384 = 5L;
                    struct S2 l_391 = {-5917,1232,168,20,-35,61,39,6977,-88,0};
                    unsigned *l_393 = &g_394;
                    int *l_396 = (void*)0;
                    struct S2 **l_397 = (void*)0;
                    struct S2 **l_398 = &l_230;
                    (*l_367) = &l_217;

                    ;
                    if ((func_17(p_16, (safe_rshift_func_int16_t_s_s(((*l_205) < (((safe_rshift_func_uint16_t_u_u(((*l_264) = (&l_182 != l_372)), (g_374 = ((*l_373) = 65535UL)))) , (safe_mod_func_uint32_t_u_u(p_14, (p_13 , ((safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(0L, (safe_rshift_func_uint16_t_u_s((((!func_25((*l_205), l_383, l_384, p_14)) , p_13.f0) , p_15), 3)))) ^ (-1L)), (-1L))) | 0xCD84E146L))))) <= 9UL)), 7)), (*g_187), (**l_372), (**g_138)) > p_16))
                    {
                        l_175 = func_25(p_14, l_328, ((0x8D92L ^ (safe_mod_func_int8_t_s_s((l_181 = ((*g_139) = (l_387 == &l_388))), g_70))) >= (safe_mul_func_int16_t_s_s((~p_15), 3L))), p_13.f1);
                        l_205 = l_182;

                        ;
                        return l_391;
                    }
                    else
                    {
                        struct S0 *l_392 = &l_179;
                        (*l_392) = ((**l_367) = g_68);
                    }
                    if (((((-2L) & (*l_182)) | ((*g_187) , ((*l_393) = (*l_205)))) < (p_13 , g_188.f4)))
                    {
                        int l_395 = 4L;
                        l_395 = (**l_372);
                        return (*g_187);
                    }
                    else
                    {
                        l_396 = (*l_372);

                        ;
                        if (p_14)
                            continue;
                    }

                    ;
                    (*l_398) = &g_231;

                    ;
                }

                ;
                l_175 = ((*l_205) && (safe_rshift_func_uint16_t_u_s(l_401, (**l_372))));
                return (*g_187);
            }

            ;
            (*l_372) = l_182;
            (*l_402) = ((*l_372) = &l_175);

            ;
            ;
        }
        else
        {
            struct S2 **l_403 = &l_230;
            l_404 = ((*l_403) = &g_188);

            ;
            ;
        }


        ;
        ;
        (*l_406) = l_182;
    }
    else
    {
        struct S1 **l_408 = &g_359;
        struct S1 ***l_407 = &l_408;
        int **l_409 = (void*)0;
        struct S2 l_410 = {-2856,-1173,-35,91,39,42,71,20114,-72,1};
        unsigned l_411 = 1UL;
        struct S2 **l_422 = &g_187;
        if ((func_17((((((*l_407) = &g_359) != ((p_13.f1 ^ (**g_98)) , (void*)0)) , l_179) , (*l_205)), p_15, l_410, g_231.f8, p_16) || l_411))
        {
            int *l_412 = &l_181;
            int **l_413 = &l_412;
            short *l_416 = &g_4;
            struct S0 *l_420 = (void*)0;
            struct S0 **l_419 = &l_420;
            struct S2 **l_421 = &l_404;
            int *l_423 = &g_50;
            (*l_413) = l_412;
            if (((safe_rshift_func_int16_t_s_s((((((*g_138) = &p_15) == &p_15) , p_13.f0) != ((safe_mul_func_int8_t_s_s(p_16, (l_419 == (p_14 , &l_420)))) != (l_421 != l_422))), (*l_412))) <= g_188.f1))
            {
                g_49 = ((*l_413) = l_423);

                ;
                ;
                (*l_413) = (*l_413);
            }
            else
            {
                (*l_413) = &l_181;
            }

            ;
            ;
        }
        else
        {
            short l_424 = 0x740FL;
            int *l_425 = &g_50;
            g_150 = ((**l_408) = p_13);
            (*l_425) = l_424;
        }

        ;
    }


    ;
    ;
    ;
    ;
    ;
    return (*g_187);



}







static unsigned char func_17(int p_18, char p_19, struct S2 p_20, unsigned p_21, const char p_22)
{
    short *l_157 = &g_35;
    int l_158 = 0xD2E0C58DL;
    char *l_159 = &g_144;
    int l_164 = 0x85B538FEL;
    unsigned char l_165 = 4UL;
    unsigned short *l_166 = &g_105;
    unsigned short *l_167 = &g_168;
    struct S1 l_169 = {0x85F0ADDFL,1L};
    int *l_170 = &g_50;
    struct S1 *l_171 = (void*)0;
    (*l_170) = ((((((l_158 = (safe_lshift_func_int8_t_s_s(l_158, 2))) > func_25((((((*g_138) = l_159) == l_159) < g_35) , (0x6EA0D350L & (safe_mul_func_uint16_t_u_u(((*l_167) = ((*l_166) = ((l_164 = (safe_mod_func_uint8_t_u_u((g_68.f0 || l_164), l_165))) , 0xB53BL))), g_150.f0)))), l_169, g_61.f1, l_169.f0)) >= p_20.f9) , l_169.f0) == 65534UL) && g_115);

    ;
    g_61 = l_169;
    return g_150.f0;
}







static unsigned func_25(int p_26, struct S1 p_27, unsigned short p_28, char p_29)
{
    for (g_70 = 0; (g_70 < 1); g_70 = safe_add_func_int8_t_s_s(g_70, 6))
    {
        return p_29;
    }
    return p_28;
}







static struct S0 func_30(unsigned char p_31, short p_32, short p_33)
{
    int l_58 = 0L;
    int l_59 = 0xAAF45328L;
    short *l_60 = &g_35;
    char *l_69 = &g_70;
    int *l_71 = &l_59;
    short *l_74 = &g_35;
    short **l_75 = &l_60;
    struct S1 l_78 = {0xAFCEDF4AL,0x03F8L};
    struct S2 l_123 = {-670,3257,-67,110,36,146,27,19449,-29,2};
    unsigned l_146 = 0x6A28C7CDL;
    struct S0 l_147 = {714};
    (*l_71) = (safe_lshift_func_uint16_t_u_u((~(safe_rshift_func_uint8_t_u_u((((*l_69) = (g_4 || (((func_42((((func_47(&g_4) == g_4) ^ (l_59 = ((safe_mul_func_int16_t_s_s(g_4, g_50)) || (safe_mod_func_uint8_t_u_u(g_50, l_58))))) , l_60), p_31, l_58, g_61) , l_58) && p_33) <= 3L))) == p_33), 5))), p_32));

    ;
    if ((safe_rshift_func_uint8_t_u_u(g_35, (((*l_71) , l_74) != ((*l_75) = &g_35)))))
    {
        short *l_76 = (void*)0;
        int l_77 = 1L;
        char *l_79 = &g_70;
        struct S0 l_106 = {2201};
        if ((p_31 || 0x5BL))
        {
            char *l_80 = &g_70;
            char **l_81 = (void*)0;
            char **l_82 = &l_69;
            int **l_84 = &l_71;
            if ((l_77 || ((p_33 < ((l_80 = l_79) == ((*l_82) = &g_70))) >= g_61.f0)))
            {
                char l_83 = 0x40L;
                int ***l_86 = &l_84;
                int **l_88 = &l_71;
                int ***l_87 = &l_88;
                (*l_87) = ((*l_86) = (((~((**l_82) = l_83)) , p_31) , (g_85 = l_84)));

                ;
            }
            else
            {
                return g_68;
            }

            ;
            (*l_84) = (*g_85);
        }
        else
        {
            char ** const l_91 = &l_69;
            unsigned short *l_104 = &g_105;
            (*l_71) = (safe_mod_func_uint8_t_u_u(((void*)0 == l_91), (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(0UL, g_4)) & (g_98 == &g_99)), ((safe_sub_func_uint8_t_u_u(7UL, g_50)) <= (safe_mod_func_uint16_t_u_u(((*l_104) = 0xEE2FL), 65533UL)))))));
            return l_106;
        }

        ;
    }
    else
    {
        const struct S1 l_117 = {0x60329EC2L,-1L};
        int *l_127 = &l_59;
        int *l_134 = &g_50;
        short *l_135 = (void*)0;
        char * const **l_140 = (void*)0;
        char * const l_143 = &g_144;
        char * const *l_142 = &l_143;
        char * const **l_141 = &l_142;
        struct S0 *l_145 = &g_68;
        for (l_58 = 0; (l_58 != 5); l_58 = safe_add_func_uint16_t_u_u(l_58, 4))
        {
            int l_113 = 0xFF36FBD3L;
            unsigned char *l_114 = &g_115;
            short *l_116 = &g_61.f1;
            struct S1 *l_118 = &l_78;
            int *l_126 = &l_59;
            (*l_118) = (((*g_99) , (safe_lshift_func_uint16_t_u_u((1UL < (*g_99)), (safe_rshift_func_int16_t_s_u(((*l_116) = (p_33 < (((*l_114) = (l_113 | (((g_61 , (l_113 & g_61.f0)) , &g_105) == (void*)0))) & l_113))), 11))))) , l_117);
            if (((safe_rshift_func_uint16_t_u_s(((((*l_71) && l_113) , p_31) > ((((safe_sub_func_uint32_t_u_u(g_115, 1UL)) <= l_113) <= ((l_117.f0 , l_123) , l_117.f0)) ^ 0xBAL)), 6)) || 0x75D9B7F1L))
            {
                return g_68;
            }
            else
            {
                for (g_50 = 10; (g_50 >= (-23)); --g_50)
                {
                    struct S1 l_133 = {5UL,0x0BCFL};
                    if (((*l_71) = (*l_71)))
                    {
                        (*g_85) = (void*)0;

                        ;
                        (*g_85) = l_126;

                        ;
                        l_127 = (*g_85);
                    }
                    else
                    {
                        (*g_85) = (void*)0;

                        ;
                        if ((*l_127))
                            continue;
                    }

                    ;
                    if ((l_123 , (&g_115 != &g_115)))
                    {
                        unsigned char **l_128 = (void*)0;
                        unsigned char ***l_129 = &l_128;
                        const struct S1 ***l_131 = &g_130;
                        (*l_129) = l_128;
                        (*l_131) = g_130;
                    }
                    else
                    {
                        const struct S1 l_132 = {0xA7083D25L,8L};
                        l_133 = l_132;
                        (*l_127) = (*l_126);
                        (*g_85) = (*g_85);
                        (*g_85) = l_126;

                        ;
                    }
                }

                ;
            }

            ;
            (*g_85) = l_134;

            ;
        }
        (*l_145) = func_42(l_135, (((safe_mul_func_int8_t_s_s(((g_138 == ((*l_141) = &l_69)) < p_33), ((-1L) ^ p_31))) ^ (((((*l_71) ^ p_32) == (*l_71)) , (void*)0) != (*g_138))) , 0x1EL), g_105, g_61);

        ;
        ;
        l_146 = g_68.f0;
    }

    ;
    (*l_71) = 0L;
    (*g_85) = (*g_85);

    ;
    ;
    return l_147;



}







static struct S0 func_42(short * p_43, unsigned char p_44, unsigned char p_45, struct S1 p_46)
{
    int *l_62 = (void*)0;
    int **l_63 = &g_49;
    int ***l_64 = (void*)0;
    int ***l_65 = (void*)0;
    int ***l_66 = &l_63;
    short *l_67 = (void*)0;
    (*l_63) = l_62;

    ;
    (*l_66) = &l_62;

    ;
    g_50 = (g_61 , p_44);
    return g_68;
}







static unsigned func_47(short * p_48)
{
    int **l_51 = &g_49;
    int *l_53 = &g_50;
    int **l_52 = &l_53;
    (*l_52) = ((*l_51) = g_49);
    return (**l_52);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_188.f0, "g_188.f0", print_hash_value);
    transparent_crc(g_188.f1, "g_188.f1", print_hash_value);
    transparent_crc(g_188.f2, "g_188.f2", print_hash_value);
    transparent_crc(g_188.f3, "g_188.f3", print_hash_value);
    transparent_crc(g_188.f4, "g_188.f4", print_hash_value);
    transparent_crc(g_188.f5, "g_188.f5", print_hash_value);
    transparent_crc(g_188.f6, "g_188.f6", print_hash_value);
    transparent_crc(g_188.f7, "g_188.f7", print_hash_value);
    transparent_crc(g_188.f8, "g_188.f8", print_hash_value);
    transparent_crc(g_188.f9, "g_188.f9", print_hash_value);
    transparent_crc(g_231.f0, "g_231.f0", print_hash_value);
    transparent_crc(g_231.f1, "g_231.f1", print_hash_value);
    transparent_crc(g_231.f2, "g_231.f2", print_hash_value);
    transparent_crc(g_231.f3, "g_231.f3", print_hash_value);
    transparent_crc(g_231.f4, "g_231.f4", print_hash_value);
    transparent_crc(g_231.f5, "g_231.f5", print_hash_value);
    transparent_crc(g_231.f6, "g_231.f6", print_hash_value);
    transparent_crc(g_231.f7, "g_231.f7", print_hash_value);
    transparent_crc(g_231.f8, "g_231.f8", print_hash_value);
    transparent_crc(g_231.f9, "g_231.f9", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_405.f0, "g_405.f0", print_hash_value);
    transparent_crc(g_405.f1, "g_405.f1", print_hash_value);
    transparent_crc(g_405.f2, "g_405.f2", print_hash_value);
    transparent_crc(g_405.f3, "g_405.f3", print_hash_value);
    transparent_crc(g_405.f4, "g_405.f4", print_hash_value);
    transparent_crc(g_405.f5, "g_405.f5", print_hash_value);
    transparent_crc(g_405.f6, "g_405.f6", print_hash_value);
    transparent_crc(g_405.f7, "g_405.f7", print_hash_value);
    transparent_crc(g_405.f8, "g_405.f8", print_hash_value);
    transparent_crc(g_405.f9, "g_405.f9", print_hash_value);
    transparent_crc(g_443.f0, "g_443.f0", print_hash_value);
    transparent_crc(g_443.f1, "g_443.f1", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
