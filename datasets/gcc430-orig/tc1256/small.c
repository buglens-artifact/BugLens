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



static unsigned char g_6 = 0x1EL;
static int g_20 = (-1L);
static unsigned g_44 = 0x1D534A2CL;
static int g_46 = 5L;
static unsigned g_62 = 0UL;
static unsigned g_65 = 0UL;
static unsigned *g_78 = &g_65;
static unsigned **g_77 = &g_78;
static unsigned char g_79 = 1UL;
static int g_82 = 0x790EB5CFL;
static const unsigned g_102 = 0xC0213A2BL;
static const unsigned *g_105 = (void*)0;
static char g_108 = 0x8EL;
static unsigned g_111 = 0x39E942A6L;
static char *g_119 = &g_108;
static char **g_118 = &g_119;
static int *g_127 = &g_82;
static int g_158 = 1L;
static int g_160 = (-3L);
static unsigned *g_165 = &g_44;
static unsigned **g_164 = &g_165;
static unsigned ***g_163 = &g_164;
static char g_167 = 6L;
static unsigned short g_173 = 8UL;
static int *g_198 = &g_160;
static int g_235 = 1L;
static int ***g_282 = (void*)0;
static int ****g_281 = &g_282;
static unsigned g_288 = 0x6CAC0D8AL;
static short g_318 = 2L;
static short *g_330 = (void*)0;
static short **g_329 = &g_330;
static int g_406 = 0x82E34CCAL;
static unsigned *g_492 = &g_288;
static const unsigned **g_609 = (void*)0;
static const unsigned ***g_608 = &g_609;
static const unsigned ****g_607 = &g_608;
static unsigned short g_620 = 0xCCA2L;
static unsigned short g_622 = 0x6BC4L;
static unsigned short g_626 = 0x4250L;
static const int g_672 = 0x6F752C27L;
static char g_685 = 0xD8L;
static unsigned char g_758 = 0UL;
static unsigned ******g_771 = (void*)0;



static unsigned short func_1(void);
static int func_4(int p_5);
static int * func_8(unsigned p_9, unsigned p_10, unsigned p_11, unsigned char p_12, unsigned p_13);
static int func_14(int p_15, unsigned char p_16, unsigned p_17, char p_18);
static char func_24(unsigned short p_25, int * p_26, unsigned p_27, const int * p_28, int * const p_29);
static unsigned short func_30(unsigned p_31);
static unsigned short func_36(unsigned p_37, int * p_38, int p_39, int p_40);
static int * func_48(unsigned short p_49, int p_50, int p_51);
static unsigned short func_52(unsigned p_53);
static unsigned char func_54(unsigned * p_55, unsigned p_56, int p_57, unsigned short p_58, unsigned short p_59);
static unsigned short func_1(void)
{
    unsigned l_7 = 0x3C633843L;
    int l_822 = 0xA65DB6C5L;
    int *l_823 = &g_82;
    (*l_823) = ((safe_mul_func_int16_t_s_s((l_822 = (func_4((g_6 , l_7)) | l_7)), 65535UL)) < (g_685 != l_7));
    (*g_198) = (*g_198);
    return g_102;
}







static int func_4(int p_5)
{
    int *l_19 = &g_20;
    int *l_21 = (void*)0;
    int **l_821 = &g_198;
    (*l_821) = func_8((func_14(g_6, (l_19 != l_21), g_6, ((void*)0 != l_19)) ^ p_5), p_5, p_5, g_758, p_5);
    return p_5;
}







static int * func_8(unsigned p_9, unsigned p_10, unsigned p_11, unsigned char p_12, unsigned p_13)
{
    short l_816 = 5L;
    unsigned ****l_819 = &g_163;
    int *l_820 = &g_20;
    (*l_820) = (l_816 , (safe_sub_func_uint32_t_u_u((l_819 == (l_816 , &g_163)), p_13)));
    return l_820;
}







static int func_14(int p_15, unsigned char p_16, unsigned p_17, char p_18)
{
    int l_41 = 7L;
    unsigned *l_42 = (void*)0;
    unsigned *l_43 = &g_44;
    int *l_45 = &g_46;
    int l_47 = (-3L);
    int l_545 = 8L;
    const int *l_640 = &l_41;
    unsigned l_807 = 1UL;
    if ((~((safe_add_func_int8_t_s_s(func_24(func_30((safe_mul_func_int8_t_s_s(((g_20 , (((safe_sub_func_uint8_t_u_u(((func_36(((*l_43) = l_41), &g_20, (l_47 = ((*l_45) = p_15)), l_41) ^ (safe_mul_func_int16_t_s_s((((p_16 == ((safe_mod_func_uint32_t_u_u(func_52(((safe_lshift_func_int8_t_s_u((**g_118), g_111)) , 4294967289UL)), p_18)) == l_41)) , (void*)0) != (void*)0), l_545))) | 255UL), l_41)) , (**g_77)) , 1UL)) || p_16), (*g_119)))), &l_41, l_545, l_640, g_78), 0x5FL)) && 4L)))
    {
        unsigned ****l_769 = (void*)0;
        unsigned *****l_768 = &l_769;
        unsigned ******l_767 = &l_768;
        unsigned *******l_770 = &l_767;
        unsigned *******l_772 = (void*)0;
        unsigned *******l_773 = &g_771;
        unsigned ******l_775 = &l_768;
        unsigned *******l_774 = &l_775;
        unsigned short *l_776 = (void*)0;
        unsigned short *l_777 = (void*)0;
        l_47 = p_16;
        p_15 = (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1L, ((p_16 & (safe_mul_func_uint8_t_u_u(((p_17 < g_6) && p_16), (((*l_770) = l_767) == ((*l_774) = ((*l_773) = g_771)))))) && p_15))), ((g_620 = (p_17 , (*l_640))) & (-10L))));
    }
    else
    {
        unsigned short l_778 = 0x211BL;
        unsigned l_783 = 0x43FCA100L;
        unsigned *l_799 = &g_44;
        char * const *l_804 = (void*)0;
        int l_811 = 0xB49C45F6L;
        const unsigned short l_812 = 0x9280L;
        if (l_778)
        {
            char l_779 = 0x2DL;
            short *l_789 = &g_318;
            int l_794 = 0x9A528D81L;
            if (l_779)
            {
                int l_782 = (-1L);
                unsigned *l_788 = &g_111;
                short **l_790 = (void*)0;
                short **l_791 = &l_789;
                short *l_792 = &g_318;
                int *l_793 = &l_47;
                (*l_793) = (safe_add_func_int16_t_s_s((l_782 = p_18), (l_783 | (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((func_54(l_43, ((*l_788) = ((**g_77) = l_778)), p_17, (p_17 , (p_16 || ((((*l_792) = ((*g_329) != ((*l_791) = l_789))) ^ 0x9522L) <= p_15))), g_288) & 65530UL), g_160)), p_16)))));
            }
            else
            {
                char * const **l_805 = (void*)0;
                char * const **l_806 = &l_804;
                unsigned short *l_810 = &g_620;
                int l_813 = 0xA97CDC5EL;
                l_794 = p_18;
                if ((0x7F04L < (((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((func_54(l_799, (*l_640), g_167, l_778, (l_811 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((*l_806) = l_804) != ((l_807 = ((*g_119) = (-8L))) , &g_119)), ((*l_810) = (safe_mul_func_int16_t_s_s(p_15, g_46))))), 6)))) & l_778), l_794)) || l_783), p_17)) ^ l_812) , l_813)))
                {
                    int **l_814 = &g_198;
                    (*l_814) = &p_15;
                    (*l_814) = &l_813;
                }
                else
                {
                    return l_779;
                }
            }
        }
        else
        {
            int *l_815 = &g_20;
            g_198 = l_815;
            (*l_815) = (*l_640);
            return p_16;
        }
    }
    return p_17;
}







static char func_24(unsigned short p_25, int * p_26, unsigned p_27, const int * p_28, int * const p_29)
{
    unsigned l_641 = 0xFFD4D851L;
    unsigned *l_677 = (void*)0;
    int *l_686 = &g_20;
    unsigned ******l_712 = (void*)0;
    unsigned l_721 = 0xFC9776F6L;
    char l_722 = 0x10L;
    unsigned l_738 = 6UL;
    unsigned char l_743 = 0UL;
    if (l_641)
    {
        int l_642 = (-5L);
        unsigned *****l_644 = (void*)0;
        unsigned ******l_643 = &l_644;
        unsigned short l_659 = 0UL;
        int *l_663 = (void*)0;
        if ((l_641 == l_642))
        {
            unsigned *** const ***l_645 = (void*)0;
            int *l_646 = (void*)0;
            int *l_647 = (void*)0;
            int *l_648 = &g_158;
            int **l_649 = &g_127;
            (*l_649) = func_48((p_27 , (l_643 != l_645)), g_20, ((*l_648) = (((*g_77) = (*g_77)) != p_29)));
            (*l_649) = ((&p_25 == ((*g_78) , &g_626)) , func_48((((*g_119) = (safe_mod_func_uint32_t_u_u(0xC6BE9547L, (((((l_641 >= g_235) & ((((**l_649) = ((safe_sub_func_int8_t_s_s(l_641, (((**l_649) , &p_28) == &p_26))) ^ (**g_118))) , 0xD450L) , 0xDA2FBA9FL)) == 0xFE7959B5L) | l_642) | g_288)))) , 0xB5D7L), g_65, g_82));
        }
        else
        {
            unsigned char *l_660 = (void*)0;
            int l_661 = 0xB6896B48L;
            int l_662 = (-1L);
            if ((safe_rshift_func_uint8_t_u_u((((g_108 != (func_54(((*g_164) = (*g_164)), func_52((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((+l_659) != ((l_661 = g_235) || (l_659 | p_25))))), g_102))), (((0x602FL > l_662) <= l_641) <= p_25), p_27, g_620) ^ 0x7DL)) <= p_25) , 0x40L), 3)))
            {
                int **l_664 = &g_198;
                (*l_664) = ((*g_198) , l_663);
            }
            else
            {
                return p_25;
            }
            (*p_26) = (l_641 , (*p_26));
            for (g_108 = 0; (g_108 > 17); g_108++)
            {
                char *l_670 = &g_167;
                const int *l_671 = &g_672;
                int l_673 = 0xB87AF637L;
                int *l_687 = &g_160;
                if ((*p_29))
                {
                    unsigned l_676 = 0xDFD065A8L;
                    for (g_406 = (-10); (g_406 == 0); g_406 = safe_add_func_uint8_t_u_u(g_406, 2))
                    {
                        l_673 = ((*p_26) = ((-1L) > (!p_25)));
                        if (l_676)
                            continue;
                        return p_25;
                    }
                    return l_673;
                }
                else
                {
                    short l_680 = 0L;
                    if ((0xA187L == ((+p_25) < 0UL)))
                    {
                        unsigned short *l_681 = &g_622;
                        int l_684 = 6L;
                        l_686 = func_48(((*l_681) = (g_65 < p_27)), g_79, ((((safe_rshift_func_uint8_t_u_u((l_684 , g_318), l_661)) && l_641) , ((((g_318 , g_685) , (void*)0) == (void*)0) < (*p_29))) & p_27));
                        if (l_680)
                            break;
                    }
                    else
                    {
                        p_28 = &l_673;
                        (*l_686) = 0L;
                        l_687 = func_48(p_27, p_25, g_173);
                    }
                    (*l_687) = l_680;
                }
            }
        }
    }
    else
    {
        char l_690 = 0xAFL;
        unsigned char *l_693 = &g_79;
        char l_696 = 0xB3L;
        int *l_697 = &g_160;
        const char *l_701 = &l_690;
        const char **l_700 = &l_701;
        unsigned * const **l_716 = (void*)0;
        unsigned * const ***l_715 = &l_716;
        unsigned * const ****l_714 = &l_715;
        unsigned * const *****l_713 = &l_714;
        int **l_725 = &l_697;
        int **l_726 = &g_198;
        if ((safe_mul_func_int16_t_s_s((((((l_690 ^ (*g_198)) , (((safe_sub_func_int32_t_s_s((*p_28), ((255UL || ((*l_693) = g_672)) || ((func_52(p_27) > (safe_lshift_func_int16_t_s_u((p_25 < ((*g_119) | p_25)), p_27))) && 0L)))) | g_65) & p_25)) >= 0xAF0BL) < l_696) , p_27), 0x7531L)))
        {
            p_28 = l_697;
        }
        else
        {
            const unsigned l_702 = 0x367BAA7FL;
            int *l_709 = &g_158;
            short *l_723 = &g_318;
            int **l_724 = &l_697;
            (*l_697) = (safe_rshift_func_uint16_t_u_s((&g_119 == l_700), (((l_702 >= 0x997EL) == (safe_add_func_uint8_t_u_u(p_25, ((*g_119) = ((*p_28) & ((safe_mul_func_int16_t_s_s((*l_697), l_702)) == (*g_119))))))) , p_25)));
            (*l_686) = ((safe_add_func_uint16_t_u_u((((*l_709) = g_160) , ((*l_686) != (*g_119))), ((*p_26) , ((safe_rshift_func_uint16_t_u_s((l_712 != l_713), (((p_27 < 0x0D0BL) == (((((*l_723) = ((safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((p_27 | l_721), l_722)) <= (*l_697)), (*l_697))) ^ 0L)) || 65535UL) && (-8L)) , g_288)) < p_25))) ^ g_44)))) >= p_27);
            (*l_724) = (void*)0;
            (*p_29) = (*p_28);
        }
        l_686 = ((*l_726) = ((*l_725) = l_686));
        (*p_26) = (*g_198);
    }
    for (g_62 = 0; (g_62 > 41); ++g_62)
    {
        unsigned l_729 = 3UL;
        unsigned ****l_752 = &g_163;
        unsigned short *l_753 = &g_173;
        int **l_754 = &g_198;
        (*l_686) = ((*p_29) = (-1L));
        l_729 = (*p_26);
        (*p_29) = ((safe_lshift_func_uint16_t_u_s(g_44, (g_672 >= ((l_729 , (safe_rshift_func_uint8_t_u_u(255UL, (func_52((*g_165)) >= ((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_111, 0x3017L)), (*g_119))) , g_626) <= 0L) | l_738))))) , 0xB7L)))) >= g_318);
        (*l_754) = (((safe_mul_func_int8_t_s_s(((func_52((((*l_753) = ((safe_rshift_func_int16_t_s_u((l_729 | l_743), 11)) , (g_79 || (0xC3L | ((((safe_lshift_func_int8_t_s_s(p_25, (p_25 != (safe_add_func_int32_t_s_s((*p_26), func_54(func_48(((safe_rshift_func_int8_t_s_u(((g_167 > p_27) , 0xF2L), p_25)) , g_46), p_25, g_65), (**g_77), g_318, p_27, p_27)))))) & (**g_118)) , l_752) != l_752))))) , 0x11AF4199L)) , 0UL) & 4294967286UL), p_25)) != p_25) , l_686);
    }
    for (g_6 = (-20); (g_6 != 44); g_6 = safe_add_func_int32_t_s_s(g_6, 7))
    {
        int l_757 = (-1L);
        int *l_759 = &g_20;
        int **l_760 = &g_198;
        (*p_26) = l_757;
        if (g_758)
            break;
        (*l_760) = l_759;
    }
    return (**g_118);
}







static unsigned short func_30(unsigned p_31)
{
    int *l_550 = &g_160;
    short l_564 = 0xDADBL;
    unsigned char l_565 = 4UL;
    unsigned char l_575 = 247UL;
    int l_576 = 0xE0087D48L;
    char l_577 = (-4L);
    unsigned ** const *l_578 = &g_77;
    unsigned char l_627 = 0x21L;
    short l_628 = 4L;
    for (g_44 = 1; (g_44 != 32); g_44 = safe_add_func_int16_t_s_s(g_44, 9))
    {
        return p_31;
    }
    for (g_6 = 0; (g_6 <= 35); g_6 = safe_add_func_uint32_t_u_u(g_6, 7))
    {
        int **l_551 = &g_127;
        int **l_552 = &g_198;
        int l_553 = 1L;
        (*l_552) = ((*l_551) = l_550);
        if (l_553)
            break;
    }
    if ((safe_add_func_uint16_t_u_u(func_52((*l_550)), (*l_550))))
    {
        unsigned short l_570 = 9UL;
        unsigned char *l_571 = &g_6;
        const unsigned l_574 = 4294967287UL;
        short **l_583 = &g_330;
        int *l_601 = &l_576;
        unsigned ***l_603 = (void*)0;
        unsigned ****l_602 = &l_603;
        if (((safe_sub_func_int16_t_s_s(p_31, (*l_550))) >= ((safe_mul_func_uint16_t_u_u((((7UL && (l_570 != (func_54(func_48(((((*l_571) = (p_31 >= l_570)) & (safe_mod_func_uint8_t_u_u(func_54((*g_164), (**g_77), ((l_574 | (-1L)) , g_406), l_575, p_31), l_576))) , g_79), g_160, l_574), l_574, g_167, l_577, l_570) < g_173))) , l_578) != &g_77), 65531UL)) , p_31)))
        {
            int **l_579 = (void*)0;
            int **l_580 = &l_550;
            const int l_584 = 0x11E12D3CL;
            unsigned short *l_585 = &g_173;
            unsigned short *l_586 = &l_570;
            const unsigned *l_595 = &g_102;
            char *l_596 = &l_577;
            (*l_580) = &g_160;
            g_82 = (((*l_586) = (safe_lshift_func_uint8_t_u_s((g_6 = (((*l_585) = (((void*)0 == l_583) || ((((*l_550) = 0xA75F5F8EL) & 6UL) && (l_584 == func_52(((((+((**g_118) , l_570)) && func_52(p_31)) , p_31) , 4294967291UL)))))) == 0x8ECAL)), l_574))) > g_82);
            (**l_580) = p_31;
            l_550 = (func_52(((func_52((((**l_580) > (((((safe_lshift_func_uint8_t_u_u(((*g_78) > (*g_198)), 6)) | (safe_mul_func_uint16_t_u_u((((*l_596) = ((safe_add_func_uint8_t_u_u(0UL, ((**g_118) = 0xF3L))) && ((**g_163) != l_595))) , g_108), (safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((((&g_119 != (void*)0) , p_31) , 0xC669B84BL), 0x6FB15338L)), 252UL))))) , 0xE8L) <= p_31) ^ l_570)) & (-4L))) && g_158) && p_31)) , l_601);
        }
        else
        {
            unsigned *****l_604 = &l_602;
            unsigned ****l_606 = &l_603;
            unsigned *****l_605 = &l_606;
            (*g_198) = 0xB90C254BL;
            (*l_601) = (((*l_605) = ((*l_604) = l_602)) != g_607);
        }
        g_127 = l_601;
        (*l_601) = ((*l_550) , (*l_601));
    }
    else
    {
        unsigned l_612 = 0xBE6F6EB6L;
        const unsigned *****l_629 = &g_607;
        unsigned ***l_635 = &g_77;
        unsigned l_638 = 0xB7F81CF0L;
        for (g_235 = 0; (g_235 == (-10)); --g_235)
        {
            unsigned l_617 = 4294967289UL;
            unsigned short *l_618 = &g_173;
            unsigned short *l_619 = &g_620;
            unsigned short *l_621 = &g_622;
            unsigned char *l_623 = &l_565;
            unsigned short *l_624 = (void*)0;
            unsigned short *l_625 = &g_626;
            if ((((l_612 ^ (0x41L && (((*l_625) = (safe_mod_func_uint16_t_u_u((func_52((*g_492)) ^ ((*l_623) = ((p_31 == (safe_rshift_func_int16_t_s_s((l_617 & ((*l_621) = ((*l_619) = ((*l_618) = ((void*)0 == (*g_329)))))), (0x7164L < (-1L))))) & g_158))), 0xB0DCL))) , l_627))) & p_31) , (*l_550)))
            {
                return l_628;
            }
            else
            {
                const unsigned ******l_630 = &l_629;
                int l_639 = 0x832897F3L;
                (*g_198) = (((*l_630) = l_629) == (func_54(&l_612, (((safe_rshift_func_int16_t_s_s(((-3L) >= ((((0x9CL <= (safe_add_func_uint16_t_u_u(g_82, ((l_635 != (*g_607)) != (0x9DCEL | (((safe_lshift_func_uint16_t_u_s(l_638, (*l_550))) ^ 0x85BDL) , p_31)))))) & 0x14C5L) & 0x8789L) <= 4294967286UL)), l_617)) != 0UL) >= l_639), g_406, p_31, p_31) , (void*)0));
            }
            return g_160;
        }
    }
    return g_620;
}







static unsigned short func_36(unsigned p_37, int * p_38, int p_39, int p_40)
{
    unsigned l_60 = 1UL;
    unsigned *l_61 = &g_62;
    unsigned *l_64 = &g_65;
    unsigned **l_63 = &l_64;
    int *l_505 = (void*)0;
    int l_510 = (-1L);
    char l_536 = 0x99L;
    l_505 = func_48(func_52((((~(func_54(&g_44, ((*l_61) = l_60), (p_38 == ((*l_63) = p_38)), (((void*)0 == &g_65) ^ p_37), p_40) < 0xB7L)) , g_111) != g_173)), p_40, l_60);
    if (((*g_127) = ((((p_38 = func_48((*l_505), g_6, (safe_lshift_func_int8_t_s_u(func_52(p_40), 3)))) == (void*)0) != ((*g_78) ^ (l_510 = ((safe_lshift_func_int8_t_s_u((((func_52((*l_505)) != p_39) || (*l_505)) , (*g_119)), g_108)) != p_39)))) < (*l_505))))
    {
        int l_522 = 0x9FF89872L;
        for (g_6 = 0; (g_6 > 35); g_6 = safe_add_func_int32_t_s_s(g_6, 1))
        {
            int l_515 = 1L;
            char *l_519 = &g_167;
            for (g_20 = 0; (g_20 <= (-4)); --g_20)
            {
                unsigned l_516 = 4294967294UL;
                l_516 = ((*l_505) = l_515);
            }
            (*g_127) = (safe_mul_func_int8_t_s_s((**g_118), (+(((*p_38) || (*p_38)) , ((*l_519) = (*l_505))))));
            if ((*p_38))
                continue;
        }
        for (g_167 = 0; (g_167 != 16); g_167 = safe_add_func_int8_t_s_s(g_167, 7))
        {
            short l_523 = (-1L);
            int **l_524 = (void*)0;
            int **l_525 = &g_198;
            int *l_526 = (void*)0;
            int *l_527 = &g_235;
            (*p_38) = (*p_38);
            (*l_525) = ((l_522 , l_522) , func_48(((func_52(l_523) & ((*p_38) <= (0L || (*p_38)))) , ((*l_505) | p_40)), g_46, p_40));
            (*l_525) = (((*l_527) = g_6) , func_48(g_6, p_40, ((*l_527) = ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_46, func_52(p_39))), ((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((0x7CL && (-10L)), (*l_505))), 0x0C97L)) ^ l_536))) >= 1UL))));
        }
    }
    else
    {
        int *l_537 = &l_510;
        int **l_538 = &g_127;
        (*l_538) = l_537;
    }
    return p_40;
}







static int * func_48(unsigned short p_49, int p_50, int p_51)
{
    unsigned l_203 = 1UL;
    int l_217 = 0xA13B0C04L;
    char **l_236 = &g_119;
    char l_259 = 0L;
    unsigned *l_264 = &g_44;
    char l_303 = (-1L);
    short *l_327 = &g_318;
    short **l_326 = &l_327;
    int *l_379 = (void*)0;
    unsigned short l_399 = 65535UL;
    char l_411 = 2L;
    unsigned short *l_439 = (void*)0;
    int **l_497 = (void*)0;
    int ***l_496 = &l_497;
    int ***l_498 = &l_497;
    for (g_46 = 24; (g_46 == (-11)); --g_46)
    {
        unsigned **l_205 = &g_165;
        int * const *** const l_213 = (void*)0;
        int l_216 = 0x7B7F5E46L;
        char **l_227 = &g_119;
        short *l_317 = &g_318;
        unsigned l_324 = 0xA47A8C7CL;
        int *l_369 = (void*)0;
    }
    for (p_50 = 0; (p_50 < 7); p_50++)
    {
        unsigned *l_435 = &g_65;
        int l_463 = 0xB6227447L;
    }
    return &g_160;
}







static unsigned short func_52(unsigned p_53)
{
    return g_158;
}







static unsigned char func_54(unsigned * p_55, unsigned p_56, int p_57, unsigned short p_58, unsigned short p_59)
{
    const char l_73 = 0xF0L;
    int *l_122 = (void*)0;
    unsigned l_176 = 0x911D4959L;
    int l_180 = (-1L);
    int l_188 = 1L;
    for (p_58 = (-16); (p_58 <= 33); p_58 = safe_add_func_int32_t_s_s(p_58, 8))
    {
        unsigned *l_70 = &g_65;
        int *l_74 = &g_20;
        const unsigned **l_151 = &g_105;
        int l_168 = (-1L);
        const char *l_200 = (void*)0;
        const char **l_199 = &l_200;
        (*l_74) = (safe_lshift_func_uint16_t_u_s((0x1CF2BBA2L < ((*l_70) = 0xEBB4EE00L)), (safe_sub_func_uint16_t_u_u(0x7C08L, l_73))));
    }
    return p_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
