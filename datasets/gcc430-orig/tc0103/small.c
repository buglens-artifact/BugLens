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



static int g_5 = 0x56F9B2CFL;
static int *g_4 = &g_5;
static int ** volatile g_9 = &g_4;
static unsigned g_24 = 4294967295UL;
static unsigned short g_27 = 0xC39DL;
static int g_29 = (-8L);
static int *g_28 = &g_29;
static unsigned char g_74 = 0x28L;
static unsigned char *g_78 = &g_74;
static short g_80 = 0xA179L;
static int g_82 = 0x8F3C25A1L;
static char g_85 = 0x9EL;
static unsigned g_90 = 0x2739A3A4L;
static unsigned char g_94 = 2UL;
static unsigned g_111 = 0x49BA4104L;
static int * volatile g_112 = &g_29;
static unsigned short g_116 = 0x5FDEL;
static int g_134 = 0xCFDA208EL;
static int *g_137 = &g_5;
static unsigned short **g_182 = (void*)0;
static unsigned g_205 = 0x47FD144FL;
static short g_216 = 0xF718L;
static int * volatile g_234 = &g_134;
static char *g_243 = &g_85;
static char **g_242 = &g_243;
static unsigned char g_308 = 0UL;
static unsigned short g_331 = 0x285BL;
static int * volatile g_368 = (void*)0;
static int * volatile g_402 = &g_134;
static int * volatile g_443 = (void*)0;
static volatile int * volatile * volatile *g_459 = (void*)0;
static unsigned char g_541 = 255UL;
static unsigned ** volatile *g_591 = (void*)0;
static int * volatile g_596 = &g_134;
static volatile unsigned ** volatile g_641 = (void*)0;
static char g_646 = 0xA1L;
static int *g_704 = (void*)0;
static int **g_703 = &g_704;
static unsigned g_786 = 0UL;
static unsigned *g_823 = (void*)0;
static unsigned **g_822 = &g_823;
static unsigned *g_828 = &g_786;
static unsigned char *g_832 = &g_94;
static int * volatile g_893 = &g_134;
static unsigned *g_943 = &g_111;
static unsigned **g_942 = &g_943;
static unsigned short *** volatile g_948 = &g_182;
static int * volatile g_949 = (void*)0;
static int * volatile g_950 = &g_29;



static unsigned short func_1(void);
static int * func_2(int * p_3);
static int func_10(unsigned p_11, int ** p_12, unsigned p_13, char p_14, int * p_15);
static unsigned short func_21(int ** p_22);
static char func_38(unsigned p_39, unsigned * p_40, unsigned * p_41, unsigned p_42);
static unsigned * func_43(unsigned p_44, int ** p_45);
static int func_52(unsigned * p_53, int ** p_54);
static unsigned * func_55(short p_56, unsigned * p_57);
static unsigned * func_59(int ** p_60);
static char func_61(int * p_62, int ** p_63, int p_64, unsigned char p_65, unsigned p_66);
static unsigned short func_1(void)
{
    int l_20 = 0xF23E93D0L;
    int **l_23 = &g_4;
    int **l_25 = &g_4;
    unsigned *l_26 = &g_24;
    int l_951 = 0x715B95DCL;
    (*g_9) = func_2(g_4);
    (*g_950) = func_10(((*l_26) = ((((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(l_20, func_21(l_23))) <= ((g_24 , 0x609FA85FL) == l_20)), g_24)) , (**l_23)) , (&g_4 == l_25)) >= g_24)), l_23, g_27, g_27, g_28);







    return l_951;
}







static int * func_2(int * p_3)
{
    for (g_5 = 0; (g_5 >= (-30)); g_5 = safe_sub_func_uint16_t_u_u(g_5, 1))
    {
        int **l_8 = &g_4;
        (*l_8) = (void*)0;

        ;
        return p_3;


    }
    return &g_5;


}







static int func_10(unsigned p_11, int ** p_12, unsigned p_13, char p_14, int * p_15)
{
    unsigned l_58 = 4294967295UL;
    int l_889 = (-1L);
    for (p_13 = 0; (p_13 != 28); p_13 = safe_add_func_uint16_t_u_u(p_13, 8))
    {
        unsigned *l_701 = &g_90;
        unsigned **l_700 = &l_701;
        int l_891 = 6L;
        short l_920 = 0x872AL;
        (*p_15) = (safe_sub_func_uint8_t_u_u((((p_14 && p_11) >= (((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_5 , g_5), func_38(g_24, func_43((l_889 = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_14, g_27)), (func_52(((*l_700) = func_55(l_58, ((*l_700) = func_59(&g_28)))), g_703) , 0x4AL))), g_541))), g_703), &l_58, l_891))), g_27)) , p_14) | l_58)) || 1UL), l_891));






        ;

        if ((0xD0D5D87DL & l_58))
        {
            int *l_908 = &g_29;
            short l_926 = 3L;
            (*g_9) = l_908;

            ;
            for (g_646 = (-4); (g_646 >= (-8)); --g_646)
            {
                unsigned short l_925 = 1UL;
                int **l_927 = &l_908;
                for (p_11 = 0; (p_11 <= 20); p_11 = safe_add_func_int32_t_s_s(p_11, 1))
                {
                    unsigned l_918 = 0xCB34FDD8L;
                    unsigned short *l_919 = (void*)0;
                    (*l_908) = (!(safe_lshift_func_uint16_t_u_u(g_94, 2)));
                }
                for (l_889 = 0; (l_889 > 11); l_889++)
                {
                    (*p_15) ^= l_891;
                }
                for (g_216 = 0; (g_216 == 19); g_216 = safe_add_func_int8_t_s_s(g_216, 4))
                {
                    int l_934 = 0L;
                    unsigned **l_936 = &g_823;
                    if ((safe_lshift_func_int8_t_s_s(l_934, p_11)))
                    {
                        unsigned **l_935 = &g_823;
                        (*l_908) = 0x9FB5E721L;
                        l_936 = l_935;
                    }
                    else
                    {
                        int *l_937 = &l_889;
                        (*l_937) &= (*p_15);
                        (*l_927) = ((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_82 &= ((65529UL < g_27) , ((**l_927) ^= 0L))) , 0x5FL), p_11)), g_134)) , (*g_9));
                    }
                }
            }
            (*g_703) = (*p_12);

            ;
            return (*p_15);
        }
        else
        {
            unsigned ***l_944 = &g_942;
            unsigned **l_946 = &g_943;
            unsigned ***l_945 = &l_946;
            (*l_945) = ((*l_944) = ((*g_243) , g_942));
            return (*p_15);
        }
    }
    (*p_12) = ((safe_unary_minus_func_int16_t_s(l_58)) , (*p_12));
    (*g_948) = g_182;
    return l_889;
}







static unsigned short func_21(int ** p_22)
{
    (*p_22) = func_2(func_2((*p_22)));

    ;
    return g_5;
}







static char func_38(unsigned p_39, unsigned * p_40, unsigned * p_41, unsigned p_42)
{
    char ***l_892 = (void*)0;
    int l_898 = (-7L);
    short *l_901 = &g_216;
    int **l_904 = &g_28;
    unsigned *l_905 = &g_90;
    int l_906 = 0L;
    int *l_907 = &g_134;
    (*g_893) |= (l_892 != &g_242);
    l_906 ^= (safe_add_func_int32_t_s_s((!((safe_rshift_func_uint16_t_u_u(p_39, l_898)) | ((((safe_sub_func_uint16_t_u_u(g_85, g_205)) || 0x1D58L) <= 251UL) >= 255UL))), (*g_828)));
    (*l_907) = (-1L);
    (*l_907) = 7L;
    return (*l_907);
}







static unsigned * func_43(unsigned p_44, int ** p_45)
{
    int *l_890 = &g_29;
    (*l_890) ^= (*g_596);
    return (*g_822);


}







static int func_52(unsigned * p_53, int ** p_54)
{
    unsigned short *l_705 = &g_27;
    char l_706 = 0x7DL;
    int *l_707 = &g_134;
    int l_710 = 0xAB0C904FL;
    unsigned short *l_711 = &g_116;
    unsigned char l_715 = 248UL;
    unsigned **l_824 = &g_823;
    unsigned **l_825 = &g_823;
    int l_830 = 8L;
    int l_833 = 0x047012AEL;
    char ***l_834 = &g_242;
    char ***l_838 = &g_242;
    int **l_884 = &l_707;
    int l_887 = 0x86C0376DL;
    unsigned short l_888 = 0UL;
    if (((-8L) < ((l_705 = l_705) != ((((*l_707) |= l_706) != ((((&p_54 != &p_54) , (((*g_78) = (*g_78)) < ((l_706 != (safe_lshift_func_int16_t_s_s(((l_706 != (l_706 , 0x80L)) & 65531UL), 15))) > (-4L)))) ^ l_706) < l_710)) , l_711))))
    {
        unsigned l_712 = 0x38770B79L;
        int l_724 = 0x4B91F02FL;
        unsigned short **l_753 = &l_705;
        char **l_778 = &g_243;
        unsigned char l_805 = 0x23L;
        int *l_831 = &l_830;
        l_712 = (*g_596);
        for (g_94 = 0; (g_94 < 20); g_94 = safe_add_func_int8_t_s_s(g_94, 7))
        {
            char l_716 = 0x97L;
            unsigned short **l_754 = &l_705;
            char **l_781 = &g_243;
            int l_796 = 0x49C79638L;
            (*l_707) = 0x45E5F3EEL;
            if ((l_715 >= l_716))
            {
                (*g_9) = ((*g_703) = l_707);

                ;
                ;
            }
            else
            {
                short *l_719 = &g_216;
                int l_738 = 0L;
                int **l_787 = &g_28;
                for (g_308 = 6; (g_308 <= 7); g_308++)
                {
                    (*g_703) = (*p_54);
                }
                if (((((*l_719) = g_82) || ((l_716 , l_712) , (safe_sub_func_int16_t_s_s(((*l_719) = l_712), ((safe_sub_func_int8_t_s_s((l_724 = 0x8FL), (*g_243))) >= (*g_78)))))) == l_712))
                {
                    short *l_729 = (void*)0;
                    unsigned char l_732 = 0x09L;
                    unsigned l_735 = 0x11734E78L;
                    int *l_739 = &g_29;
                    int ***l_741 = &g_703;
                    int ****l_740 = &l_741;
                    unsigned short ***l_746 = &g_182;
                    unsigned short ***l_747 = &g_182;
                    unsigned short ***l_748 = &g_182;
                    unsigned short ***l_749 = &g_182;
                    unsigned short ***l_750 = &g_182;
                    unsigned short ***l_751 = (void*)0;
                    unsigned short **l_752 = &l_711;
                    for (g_205 = 0; (g_205 == 45); ++g_205)
                    {
                        short *l_727 = &g_80;
                        short **l_728 = &l_719;
                        unsigned short ***l_737 = &g_182;
                        unsigned short ****l_736 = &l_737;
                        l_739 = func_55((((*l_728) = l_727) == l_729), func_55((g_216 = (safe_add_func_uint16_t_u_u((0x6F564DADL >= l_732), ((((((l_716 , (safe_rshift_func_int8_t_s_u(l_735, 2))) != (((((((*l_727) |= (l_712 , (((*l_736) = &g_182) != (void*)0))) | l_712) == 7UL) , (*g_402)) != 9UL) == 5UL)) >= l_738) == (*p_53)) || 0x0BF3F6AEL) > (*g_78))))), p_53));

                        ;
                        ;
                    }

                    ;
                    ;
                    (*l_707) = ((((*g_78) , ((((((((*l_740) = &g_703) != (void*)0) != ((safe_rshift_func_int8_t_s_u(0x6BL, 4)) , ((*g_78) = (*g_78)))) , l_716) != (safe_add_func_int16_t_s_s(((l_752 = &l_705) == (l_754 = l_753)), (0L != 0x17L)))) && l_716) == 1L)) , (*l_707)) != l_716);

                    ;
                }
                else
                {
                    char *l_761 = &l_706;
                    int l_767 = 1L;
                    (*p_54) = (*p_54);
                    for (g_134 = 0; (g_134 < (-8)); g_134 = safe_sub_func_uint8_t_u_u(g_134, 7))
                    {
                        if (l_738)
                            break;
                        return l_716;
                    }
                    for (g_74 = 0; (g_74 != 52); g_74++)
                    {
                        (*g_703) = (*g_703);
                        (*g_703) = (void*)0;

                        ;
                    }
                    if (((*g_243) | ((*l_761) &= (safe_mod_func_uint8_t_u_u((*g_78), 5L)))))
                    {
                        int ****l_764 = (void*)0;
                        int ***l_766 = &g_703;
                        int ****l_765 = &l_766;
                        l_724 = (((g_216 , (((*l_761) = ((safe_sub_func_uint8_t_u_u((((*l_707) = ((*g_112) , (-1L))) != (((*l_765) = &p_54) != (void*)0)), (*g_78))) > (l_767 = (~l_716)))) >= l_738)) , (safe_lshift_func_int16_t_s_u((((*l_707) , g_90) < (*l_707)), l_712))) || (*l_707));

                        ;
                        (***l_765) = (void*)0;

                        ;
                        if (l_738)
                            continue;
                    }
                    else
                    {
                        char **l_776 = (void*)0;
                        char ***l_777 = &g_242;
                        char **l_784 = &l_761;
                        int l_785 = (-9L);
                        (*l_707) = (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((((((+(safe_lshift_func_uint16_t_u_s(65534UL, (((l_776 = &g_243) == (l_778 = &g_243)) , (safe_lshift_func_uint8_t_u_s(((((((*g_78) = (l_781 == (void*)0)) | 3L) > (g_216 = ((safe_lshift_func_int16_t_s_s((-1L), (((*l_781) = (*l_778)) != ((*l_784) = l_761)))) ^ (*l_707)))) & 0x3D84L) & l_785), 6)))))) , 253UL) != g_85) <= l_767) , (*l_707)), 3)) == l_785), g_786));

                        ;
                    }
                }

                ;
                (*l_787) = ((*g_703) = (void*)0);

                ;
                ;
                if (((*l_707) = ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_205, (safe_mod_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(l_796, l_724)) ^ ((*l_707) ^ (*l_707))) , g_111), (safe_sub_func_uint32_t_u_u(1UL, (*p_53))))))) || g_80), l_796)) == (*g_78))))
                {
                    unsigned short **l_801 = &l_711;
                    int l_806 = 0xD28606DEL;
                    (*g_703) = (*p_54);
                    for (l_716 = 7; (l_716 > (-27)); l_716 = safe_sub_func_int16_t_s_s(l_716, 1))
                    {
                        unsigned short ***l_802 = &l_754;
                        l_738 ^= ((((*l_711) = g_90) >= ((((*l_802) = l_801) != (((safe_mod_func_int8_t_s_s((((*g_243) , (((*g_78) = (l_712 , l_716)) == ((0x14L < (*l_707)) & ((*g_243) == (~l_805))))) , l_716), l_806)) >= g_27) , l_801)) , (*l_707))) && (*l_707));

                        ;
                    }

                    ;
                    (*l_787) = &l_806;

                    ;
                    return l_805;


                }
                else
                {
                    char l_811 = (-1L);
                    int *l_812 = &g_134;
                    int *l_829 = &l_796;
                    if ((((**l_778) = l_805) ^ (l_805 && (((*g_78) = ((*l_707) , l_712)) , (((g_308 >= ((((*l_719) = (((safe_add_func_int16_t_s_s((*l_707), 0x8160L)) | (safe_mod_func_int32_t_s_s((*g_234), g_541))) , l_716)) < l_811) != (-6L))) > l_811) , 0x96CFL)))))
                    {
                        int *l_815 = (void*)0;
                        int *l_816 = &l_724;
                        (*p_54) = l_812;

                        ;
                        (*l_816) &= ((safe_lshift_func_uint8_t_u_s((*l_812), (*l_707))) < (*g_596));
                        (*l_787) = (((safe_sub_func_uint32_t_u_u((*p_53), (((*l_719) = g_331) != 0x9A97L))) && ((*p_53) < (safe_unary_minus_func_uint8_t_u(((safe_mod_func_uint16_t_u_u(((l_824 = g_822) == l_825), (safe_mod_func_int32_t_s_s(((*l_816) < (*p_53)), (65535UL && (*l_812)))))) == 4UL))))) , (void*)0);
                        (*l_787) = func_55((g_80 , (-1L)), func_55(l_712, func_55(l_724, g_828)));

                        ;
                    }
                    else
                    {
                        return l_805;
                    }

                    ;
                    ;
                    (*l_829) |= (*g_234);
                    l_830 &= (((((*g_243) = (*g_243)) < ((*l_707) , (*l_829))) < (*g_78)) == (*l_707));
                    (*l_829) |= (*g_596);
                }

                ;
                ;
            }

            ;
        }

        ;
        ;
        ;
        l_833 ^= (((*l_831) = ((*l_707) &= (0x40E97CEDL >= 4UL))) ^ (l_712 == ((l_712 < (4294967290UL != ((((((((void*)0 == &l_724) , &l_805) != g_832) || (*p_53)) < 0UL) < 1UL) >= l_805))) ^ (*g_243))));
    }
    else
    {
        char ****l_835 = (void*)0;
        char ****l_836 = (void*)0;
        char ****l_837 = &l_834;
        int l_845 = 0xAAAF633FL;
        unsigned short l_861 = 0xA5B9L;
        unsigned *l_881 = (void*)0;
        (*g_703) = (*p_54);
        for (g_29 = 0; (g_29 != (-30)); g_29 = safe_sub_func_uint32_t_u_u(g_29, 2))
        {
            unsigned l_844 = 0x4832DE92L;
            int *l_846 = &l_833;
            (*p_54) = (void*)0;

            ;
            (*l_707) = (*g_402);
            if ((safe_lshift_func_uint16_t_u_s(1UL, 8)))
            {
                short l_843 = 1L;
                (*l_707) &= l_843;
                (*l_707) &= l_844;
            }
            else
            {
                short l_851 = 0x4EB1L;
                unsigned *l_858 = &g_111;
                int l_859 = (-1L);
                short *l_860 = &g_80;
                (*g_9) = (l_845 , ((*g_703) = l_846));

                ;
                ;
                (*p_54) = func_55(((*l_860) ^= (0xB567B907L || ((safe_mod_func_int32_t_s_s((*l_846), (l_859 = (safe_lshift_func_uint16_t_u_s((l_845 || (l_851 <= (((*l_858) ^= ((0xD470L & (safe_mod_func_uint32_t_u_u((*p_53), (**p_54)))) > ((*g_243) = ((((*g_828) ^= (((safe_rshift_func_uint8_t_u_u(((*l_846) == ((safe_sub_func_int8_t_s_s((6UL == (*l_707)), 0x2CL)) , l_851)), (*l_846))) >= (*g_243)) <= (*g_78))) != (*l_707)) >= 0UL)))) , (*l_846)))), (*l_846)))))) == l_845))), (*l_824));

                ;
            }

            ;
            (*l_707) = ((l_861 | 0xE90B3FFFL) != ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((*g_828) == ((-7L) > (safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((*l_846) > ((((*p_53) == 0x3F97A3E6L) < (((l_845 != (safe_rshift_func_int8_t_s_u((0x82CE0EEBL != 4294967289UL), 2))) < (*l_707)) , (*l_846))) && (*p_53))), 4294967291UL)), 65535UL)))) ^ l_845), g_134)), (-3L))) && (-10L)));
        }

        ;
        ;
        for (l_830 = (-18); (l_830 >= 9); l_830++)
        {
            int l_880 = 0xE34ABCE7L;
            (*p_54) = (*p_54);
            if ((*g_402))
                break;
            if (((*l_707) = ((*g_243) & (l_845 && (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_880 = ((safe_lshift_func_uint8_t_u_u(l_880, l_880)) <= ((*l_707) != (((((*g_243) & (*l_707)) < (*l_707)) & l_880) == l_861)))), 3)), l_845))))))
            {
                short l_882 = 0L;
                int l_883 = 8L;
                l_883 &= (0xB9L & ((*g_243) = l_882));
            }
            else
            {
                return l_861;


            }
        }
    }

    ;
    ;
    ;
    (*l_884) = ((*g_703) = (*g_9));

    ;
    ;
    l_888 &= (safe_mod_func_int32_t_s_s((g_5 && l_887), l_710));
    return g_331;



}







static unsigned * func_55(short p_56, unsigned * p_57)
{
    unsigned *l_702 = &g_24;
    return l_702;


}







static unsigned * func_59(int ** p_60)
{
    unsigned l_67 = 0x9B93B3BBL;
    short l_70 = 0L;
    unsigned char *l_73 = &g_74;
    short *l_79 = &g_80;
    char *l_81 = (void*)0;
    char *l_83 = (void*)0;
    char *l_84 = &g_85;
    char l_106 = 0x9FL;
    int *l_107 = (void*)0;
    int l_108 = 0L;
    unsigned l_125 = 0x4ACFC83CL;
    int l_136 = 0L;
    char l_194 = 1L;
    unsigned short *l_200 = &g_27;
    unsigned short **l_199 = &l_200;
    unsigned l_204 = 4UL;
    unsigned l_240 = 0x9FA13DB7L;
    unsigned l_264 = 1UL;
    unsigned short **l_280 = &l_200;
    unsigned short *l_370 = &g_331;
    unsigned *l_371 = &g_90;
    unsigned short l_386 = 0xF6FBL;
    unsigned short l_411 = 0xE485L;
    int **l_458 = &g_137;
    int ***l_457 = &l_458;
    int *l_486 = &l_136;
    unsigned *l_511 = (void*)0;
    unsigned l_557 = 0xE4434DDAL;
    unsigned l_586 = 0xAB7FAC2BL;
    int l_607 = (-9L);
    int l_635 = 0x6F2CD479L;
    unsigned *l_668 = &l_264;
    if ((func_61((*g_9), (l_67 , (void*)0), (((safe_mod_func_uint16_t_u_u((g_5 , l_70), ((((*l_84) = (g_82 = ((safe_lshift_func_int8_t_s_s((~(((l_70 & ((*l_73) = 253UL)) , (safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_u(((*l_79) = (((g_78 = l_73) != &g_74) ^ 1L)), g_27))))) ^ 0xCAF6L)), l_67)) , l_70))) || l_67) , g_29))) || l_70) , l_67), g_5, l_70) || l_70))
    {
        unsigned *l_104 = &l_67;
        int l_117 = 0x58AA494CL;
        if (((g_90 = ((*l_104) = l_70)) >= ((safe_unary_minus_func_int8_t_s(0xF1L)) < (*g_28))))
        {
            l_106 &= (**p_60);
        }
        else
        {
            (*p_60) = l_107;

            ;
        }

        ;
        l_108 = (*g_4);
        if ((**g_9))
        {
            char l_109 = 0xBAL;
            unsigned *l_110 = &g_111;
            (*g_112) &= (!(((*l_110) |= l_109) , l_109));
        }
        else
        {
            short l_113 = (-7L);
            unsigned short *l_114 = (void*)0;
            unsigned short *l_115 = &g_116;
            l_117 = (((*l_115) |= l_113) & 65529UL);
            return &g_90;


        }
    }
    else
    {
        (*g_28) = (-1L);
    }

    ;
    for (g_85 = (-23); (g_85 <= (-10)); g_85 = safe_add_func_uint16_t_u_u(g_85, 1))
    {
        char l_124 = 0xD9L;
        unsigned l_135 = 0xB54446D1L;
        unsigned *l_138 = (void*)0;
        char l_154 = 7L;
        int *l_179 = (void*)0;
        unsigned char l_207 = 0xF7L;
        int l_208 = 1L;
        for (g_111 = 0; (g_111 < 42); g_111 = safe_add_func_uint16_t_u_u(g_111, 5))
        {
            int *l_129 = &l_108;
            unsigned short *l_181 = (void*)0;
            unsigned short **l_180 = &l_181;
            for (l_108 = 12; (l_108 >= (-3)); l_108 = safe_sub_func_int32_t_s_s(l_108, 9))
            {
                unsigned l_128 = 4294967287UL;
                int l_132 = 0x9A703095L;
                int *l_133 = &g_134;
                unsigned **l_139 = &l_138;
                short *l_211 = &l_70;
                unsigned short *l_212 = &g_116;
                char *l_215 = &l_194;
                l_136 ^= (l_124 & ((l_125 , (safe_rshift_func_int16_t_s_s((((((*l_129) <= l_124) == (*g_78)) , l_124) > (*l_129)), g_116))) , l_135));
                if ((**g_9))
                {
                    int **l_147 = (void*)0;
                    int ***l_146 = &l_147;
                    short l_155 = 7L;
                    int *l_162 = &l_136;
                    (*l_133) |= ((0xBE9465D9L != (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_155, l_124)), (*l_129)))) > g_80);
                    if ((*l_129))
                        break;
                    l_179 = ((((*g_78) != (g_82 == 0x647FL)) , (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((*l_133), (safe_mod_func_int32_t_s_s((((*l_162) = (0x97DBL <= g_134)) <= (safe_lshift_func_uint16_t_u_s((0x90L > ((*g_78) = (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((*l_129), (((g_111 >= (*l_129)) > 0xE801A4E0L) > (*l_133)))), l_154)) | (-1L)), l_124)) , 0xF1BBL), 7)), (*g_112))), g_5)), (-3L))))), 5))), (*g_137))))), l_124))) , (*p_60));
                }
                else
                {
                    unsigned char l_186 = 0x31L;
                    int l_187 = (-6L);
                    int **l_191 = &l_129;
                    int ***l_190 = &l_191;
                    unsigned **l_206 = &l_138;
                    g_182 = l_180;

                    ;
                    (*l_133) = ((safe_unary_minus_func_int16_t_s((*l_129))) > 0x3E7E0054L);
                    for (l_128 = (-30); (l_128 == 33); l_128 = safe_add_func_int8_t_s_s(l_128, 2))
                    {
                        unsigned *l_188 = &g_90;
                        l_187 &= ((*l_133) = l_186);
                        return l_188;



                    }
                    if (l_154)
                    {
                        l_207 |= (safe_add_func_int16_t_s_s(((((l_194 == ((safe_mod_func_int16_t_s_s((g_205 = (((*g_78) = ((((((safe_mod_func_int16_t_s_s((((*l_133) , ((l_199 == g_182) ^ (safe_unary_minus_func_uint8_t_u((((((((*g_78) & (safe_lshift_func_int16_t_s_u(((*l_79) ^= (g_74 >= (*g_137))), 14))) , (*p_60)) == (l_204 , l_129)) > (*g_4)) >= (**l_191)) > (*l_133)))))) || 0xCBD8L), 0xD024L)) , (-10L)) , 0L) ^ (***l_190)) ^ l_194) <= (*l_133))) != (**l_191))), 0xBF4AL)) > 0x4C189411L)) , l_206) != (void*)0) >= 0x33L), 1L));
                        (*g_112) &= l_208;
                        return &g_24;



                    }
                    else
                    {
                        (*l_191) = ((*p_60) = (*g_9));

                        ;
                        ;
                    }

                    ;
                    ;
                }
                g_216 |= ((((*l_211) |= (((*l_79) = g_134) , 0xA063L)) | (((*l_212) &= 0x99E0L) > (-5L))) == (((*l_129) <= (((*l_215) = ((*l_129) == (safe_lshift_func_uint8_t_u_s((*l_133), g_29)))) ^ ((*l_133) || (*g_137)))) , 0xFC47L));
            }


            ;
        }

        ;
        for (l_125 = (-25); (l_125 >= 23); ++l_125)
        {
            (*g_112) = (0xB360L | g_74);
        }
    }

    ;

    if ((((*l_79) = l_106) , (l_136 == (safe_lshift_func_uint16_t_u_u(g_85, l_204)))))
    {
        int *l_221 = &l_108;
        char *l_224 = &l_194;
        unsigned l_265 = 0x0E2A1E26L;
        int l_283 = 3L;
        unsigned char l_353 = 0UL;
        unsigned l_366 = 1UL;
        (*l_221) = (**g_9);
        if (((safe_rshift_func_int8_t_s_s(((l_204 | ((g_94 = ((*l_73) = (*l_221))) && ((*g_78) <= l_67))) <= g_85), 2)) >= (((*l_221) , ((*l_224) = (g_27 < (*l_221)))) <= g_216)))
        {
            unsigned l_229 = 4294967290UL;
            int l_230 = 0x30C45750L;
            unsigned *l_262 = &l_204;
            unsigned **l_261 = &l_262;
            short l_267 = (-1L);
            (*p_60) = (*g_9);

            ;
            if (((0xCEL <= 1UL) > (*g_78)))
            {
                unsigned char l_233 = 255UL;
                int *l_235 = &g_134;
                (*p_60) = ((**g_9) , (*g_9));
                (*g_234) &= ((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(0x3AC0L, l_229)) , (((l_230 = (*l_221)) ^ (!((l_233 | (*l_221)) | 251UL))) == g_216)), 5)) == 0UL);
                if ((0xC83CD3FBL ^ ((0xF6L < ((*l_73) = (((g_116 = (*l_221)) && ((*l_79) = g_24)) || ((((((*g_9) != l_235) ^ ((((g_94 || ((safe_add_func_uint16_t_u_u(2UL, (safe_mod_func_uint16_t_u_u(65527UL, 65535UL)))) < 6UL)) == 7UL) > 0UL) ^ (*g_4))) >= l_229) != 3L) < g_205)))) || l_240)))
                {
                    int l_241 = 0xB55C6A8FL;
                    l_241 = (**p_60);
                }
                else
                {
                    int *l_246 = &g_134;
                    int l_260 = 0x0F418198L;
                    g_242 = &l_224;

                    ;
                    for (g_90 = 0; (g_90 > 5); g_90 = safe_add_func_uint16_t_u_u(g_90, 7))
                    {
                        l_246 = (*g_9);

                        ;
                    }

                    ;
                    for (l_204 = 0; (l_204 < 53); ++l_204)
                    {
                        short l_255 = 0x4899L;
                        unsigned ***l_263 = &l_261;
                        (*l_235) = ((*l_221) = (((*l_79) &= (*l_246)) || (((safe_sub_func_int16_t_s_s((*l_221), g_74)) | g_5) > 0L)));
                        (*l_263) = l_261;
                        if ((*l_221))
                            continue;
                        if (l_255)
                            break;
                    }
                }

                ;
            }
            else
            {
                unsigned char l_266 = 0x9AL;
                (*p_60) = (*p_60);
                (*l_221) = ((*g_112) |= l_267);
                (*p_60) = (*g_9);
            }

            ;
        }
        else
        {
            unsigned l_278 = 0x7F14A642L;
            unsigned char *l_279 = &g_94;
            unsigned short ***l_281 = &l_199;
            unsigned *l_282 = &l_264;
            int l_296 = 6L;
            short l_346 = 4L;
            int **l_347 = &g_4;
            short l_367 = 0xFFC9L;
            unsigned *l_387 = &l_67;
            l_283 |= ((0L ^ ((((safe_rshift_func_uint8_t_u_u((*l_221), (((safe_lshift_func_int16_t_s_u(((*l_79) = (((safe_sub_func_uint32_t_u_u((0x94085A30L >= ((*l_282) ^= (((*l_281) = (((*g_137) ^ l_106) , l_280)) != &l_200))), l_278)) , 1UL) , l_278)), 8)) || (*g_243)) == l_278))) , &l_83) != (void*)0) , l_204)) >= (*g_78));
            for (g_85 = 4; (g_85 < (-21)); g_85 = safe_sub_func_uint32_t_u_u(g_85, 8))
            {
                unsigned l_288 = 0xC8D91A4CL;
                unsigned *l_300 = &l_125;
                unsigned **l_299 = &l_300;
                unsigned char *l_307 = &g_308;
                short l_328 = (-1L);
                (*l_221) = (*l_221);
                for (l_67 = 0; (l_67 > 25); ++l_67)
                {
                    int *l_293 = (void*)0;
                    (*p_60) = (*g_9);

                    ;
                    (*l_221) = (l_288 = 0xFD6FD450L);
                    l_296 = (l_278 < (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((*l_221) && g_216), g_94)), 0x11FDL)));
                }
            }
            if ((**g_9))
            {
                int **l_348 = &l_221;
                l_353 = (!((*l_221) = (**l_347)));
            }
            else
            {
                unsigned short l_358 = 1UL;
                short *l_365 = &l_70;
                int *l_369 = &g_134;
                (*l_221) |= (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((**l_347), 0L)), l_358));
                (*l_369) |= (safe_lshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u((*g_78), l_108)) , ((*l_365) ^= ((*l_79) = (p_60 != p_60)))) , (((((*l_221) , ((*g_78) = ((*l_279) = ((4L || l_366) || ((*l_282) = (((*g_78) | ((*l_221) != (-4L))) ^ (*l_221))))))) ^ l_367) , g_85) || 9L)), 1));
                (*l_369) |= ((*l_221) = ((*g_112) = ((l_370 != &g_116) & ((*l_221) || g_85))));
                return l_371;


            }
            (*l_347) = ((((g_116 , (safe_rshift_func_uint16_t_u_u((**l_347), (g_82 , (**l_347))))) >= (((*l_387) = ((*l_282) = (safe_mod_func_int32_t_s_s(((((**g_242) = (*l_221)) , (l_279 = &g_308)) == ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((((*l_371) |= (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((((safe_mod_func_int8_t_s_s(((((((**l_347) , ((*g_112) ^ (l_296 = (-1L)))) | (-1L)) & (*l_221)) & (*l_221)) || g_331), (**l_347))) | (**l_347)) < 0x04L) , 0x82E4B0C4L), g_29)), l_386))) ^ 4294967294UL) , (*l_221)), (**l_347))), 11)) , (void*)0)), 1UL)))) , g_24)) >= (*l_221)) , (*p_60));

            ;
            ;
        }

        ;
        ;
        l_136 |= (*l_221);
    }
    else
    {
        char l_390 = 0xA5L;
        unsigned char *l_410 = &g_308;
        int l_449 = 0x7F6E0C2EL;
        int l_450 = 0xC49650F0L;
        int *l_468 = &l_108;
        char l_485 = 1L;
        unsigned l_495 = 1UL;
        int *l_521 = &g_134;
        unsigned short l_536 = 0x7ACFL;
        if ((*g_137))
        {
            int l_391 = 0x29A7A9C8L;
            unsigned *l_436 = &l_204;
            int l_445 = 0L;
            char l_456 = 0x91L;
            int *l_477 = &l_136;
            int l_491 = 0x6778101BL;
            unsigned l_518 = 0x3EC79D8EL;
            if (((safe_mod_func_uint32_t_u_u(g_94, l_390)) >= (l_391 < (*g_78))))
            {
                int **l_392 = &g_4;
                unsigned char *l_409 = &g_94;
                (*l_392) = ((*p_60) = (*g_9));

                ;
                if ((**p_60))
                {
                    char l_398 = 0L;
                    int l_399 = 0L;
                    unsigned l_400 = 4294967295UL;
                    int *l_401 = (void*)0;
                    (*g_402) = ((g_111 != g_216) == (-3L));
                }
                else
                {
                    int *l_419 = &l_136;
                    l_411 ^= (safe_sub_func_uint32_t_u_u(((*l_371) = (0x49E6L < (l_391 >= ((safe_mod_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s(0L, (**g_242))) == ((l_409 != &g_94) || ((l_390 , l_410) == &g_308))) | 0x008DL), l_390)) <= (*g_78))))), l_391));
                    for (g_134 = 20; (g_134 != 7); g_134 = safe_sub_func_int32_t_s_s(g_134, 4))
                    {
                        (*p_60) = (*g_9);
                        (*l_392) = (*l_392);
                    }
                    if ((safe_sub_func_uint16_t_u_u(g_94, (l_390 <= ((*l_410) ^= (safe_rshift_func_uint16_t_u_s((246UL > ((!((*l_419) &= (safe_unary_minus_func_uint16_t_u(l_390)))) || (safe_sub_func_uint32_t_u_u(l_391, (((**p_60) , l_390) & (((**l_392) == ((0x58L | (**l_392)) <= 0x7BE5L)) , (**l_392))))))), g_74)))))))
                    {
                        int *l_422 = &g_134;
                        char l_435 = 0xC0L;
                        (*l_422) = (((*g_78) == (1UL == (**l_392))) , (**p_60));
                        (*g_234) = (-2L);
                        return &g_24;


                    }
                    else
                    {
                        (*l_392) = (*p_60);
                        (*l_419) = (**p_60);
                        (*l_392) = (*g_9);
                    }
                    return &g_205;


                }
                if (l_390)
                {
                    unsigned short l_439 = 0x5B7BL;
                    unsigned **l_440 = &l_371;
                    unsigned **l_441 = (void*)0;
                    unsigned **l_442 = &l_436;
                    int *l_444 = &g_134;
                    (*l_444) &= (!((((safe_rshift_func_int16_t_s_s((**l_392), l_439)) ^ (((((g_80 , (&g_24 != ((*l_442) = ((*l_440) = (((((((**g_242) = (**l_392)) < l_391) <= (*g_4)) & (*g_78)) && (&l_264 == &g_24)) , (void*)0))))) != (*g_78)) , (**l_392)) >= 0xB9L) != l_391)) & 0x3C85L) , l_439));

                    ;
                    ;
                }
                else
                {
                    char *l_448 = (void*)0;
                    int *l_454 = &l_136;
                    unsigned l_472 = 0x97D33F3FL;
                    l_445 |= (65535UL < 0L);
                    if ((l_450 = (((*g_78) >= ((0x05L & (*g_78)) ^ (~(safe_sub_func_int16_t_s_s(g_85, g_74))))) <= (l_449 = l_390))))
                    {
                        unsigned short l_451 = 0xE00FL;
                        short l_455 = 2L;
                        int l_471 = (-1L);
                        (*g_234) = (l_455 > 0x143DBAF1L);
                        (*p_60) = (*p_60);
                        (*l_454) = (safe_rshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((g_331 ^= (((*l_454) ^ (((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_456, l_471)), (*l_468))) >= (*g_243)) == 0xB8L)) && (***l_457))), l_472)) || 1UL) , (*l_468)), (*l_468)));
                    }
                    else
                    {
                        int **l_478 = &g_137;
                        (*l_468) = ((safe_rshift_func_int16_t_s_s(0x0226L, 13)) != (safe_lshift_func_uint16_t_u_s((*l_477), (((((*l_468) < (**l_458)) & (**p_60)) , 0x8501L) <= (*l_477)))));
                        (**l_457) = (*p_60);
                        (*g_234) = ((*l_468) = ((*l_454) = (((((*l_477) && (l_485 < 0x8A10E0D5L)) , (void*)0) != l_477) && (*g_78))));
                    }
                    (*l_468) ^= ((((*l_409) ^= 0x8CL) < ((*l_84) ^= (*l_454))) == (!g_29));
                }

                ;
                ;
            }
            else
            {
                short l_492 = 0xCA62L;
                int *l_515 = &l_136;
                if (l_492)
                {
                    unsigned char l_500 = 0UL;
                    for (l_495 = 0; (l_495 < 33); ++l_495)
                    {
                        unsigned short l_503 = 0xD443L;
                        (*l_458) = (*g_9);
                        (*l_477) = (safe_rshift_func_int16_t_s_u(((l_500 && ((safe_sub_func_uint32_t_u_u(l_503, (((**l_458) || (safe_unary_minus_func_uint32_t_u(g_27))) >= l_500))) ^ (*l_477))) == (*l_477)), l_492));
                    }
                    for (l_450 = 0; (l_450 < 4); l_450 = safe_add_func_int8_t_s_s(l_450, 1))
                    {
                        (*l_458) = ((*p_60) = (*g_9));

                        ;
                    }
                }
                else
                {
                    unsigned **l_512 = &l_436;
                    (*l_468) ^= (safe_add_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((*g_78), l_492)) ^ ((&g_90 == ((*l_512) = l_511)) > ((*l_371) = g_80))) , (((safe_mod_func_int16_t_s_s((*l_477), 0x8A6BL)) >= (((-1L) >= (*g_78)) >= 0x54L)) | (*g_4))), l_492));

                    ;
                }

                ;
                (*l_477) ^= 0x684E1554L;
                (*l_468) |= (((*l_477) , &l_485) != &l_194);
            }

            ;
            ;
            (*l_477) = (*l_468);
            if ((*g_112))
            {
                int l_532 = 0x11F92433L;
                (*l_521) = ((safe_mod_func_uint16_t_u_u((*l_468), (*l_477))) < (*l_477));
            }
            else
            {
                int l_535 = (-4L);
                (*l_521) |= (safe_add_func_uint16_t_u_u(l_535, (*l_477)));
            }
        }
        else
        {
            (*l_458) = &l_449;

            ;
            (***l_457) = (*l_521);
        }

        ;
        ;
        (*l_468) ^= l_536;
        (*l_458) = &l_449;

        ;
        (*l_468) = ((***l_457) = (((safe_mod_func_int8_t_s_s((((!(g_29 |= (safe_add_func_int8_t_s_s(((**l_458) <= ((*l_486) ^= (((((*l_370) = 0x7FF2L) >= ((**l_458) ^ (((*g_78) = g_541) && (((*g_402) , (safe_unary_minus_func_int32_t_s(((safe_lshift_func_int8_t_s_u(((*g_243) = ((*l_468) , 9L)), (*l_468))) | (***l_457))))) < (*l_521))))) > 0L) | (***l_457)))), (*l_521))))) <= 0L) , 0xC4L), 1UL)) , 0xE0AAL) <= 0x28E9L));
    }

    ;


    ;
    if ((((((g_29 & g_205) ^ (g_216 ^ (safe_rshift_func_uint8_t_u_s((*l_486), 3)))) <= (g_74 , (safe_lshift_func_int16_t_s_s(0L, (0x26L >= ((((0x9228L < g_331) | 0UL) & g_216) != 255UL)))))) > l_557) | (-5L)))
    {
        unsigned short l_568 = 0x3CC4L;
        int *l_569 = (void*)0;
        int *l_589 = &g_134;
        int *l_590 = &l_108;
        for (l_194 = 0; (l_194 > (-25)); --l_194)
        {
            int l_567 = 0xC4B19332L;
            int *l_572 = &g_5;
            unsigned *l_573 = &g_90;
            for (l_240 = 0; (l_240 < 52); l_240 = safe_add_func_int16_t_s_s(l_240, 3))
            {
                int *l_564 = &l_136;
                (*l_486) = (247UL > ((safe_sub_func_uint8_t_u_u((*g_78), 0L)) | l_568));
            }
            (*l_486) &= (*l_572);
        }
        for (l_108 = (-6); (l_108 != 25); ++l_108)
        {
            unsigned short l_580 = 0x2593L;
            for (g_308 = 0; (g_308 != 2); g_308++)
            {
                unsigned *l_582 = (void*)0;
                unsigned **l_581 = &l_582;
                int *l_583 = &g_134;
                (*l_486) = (*g_402);
                if ((*g_234))
                    break;
                (*l_583) |= ((*l_486) > (l_580 | ((*l_73) = (&g_111 != ((*l_581) = &g_111)))));

                ;
            }
            for (l_411 = 0; (l_411 >= 53); l_411 = safe_add_func_int32_t_s_s(l_411, 5))
            {
                return l_569;


            }
        }
        (*l_486) = ((l_586 != ((safe_add_func_uint32_t_u_u(((*l_486) | 1UL), g_541)) <= g_205)) > (*l_590));
        for (l_108 = 0; (l_108 >= 1); l_108 = safe_add_func_int32_t_s_s(l_108, 1))
        {
            (*l_486) ^= (*g_234);
        }
    }
    else
    {
        unsigned char l_594 = 246UL;
        int *l_595 = (void*)0;
        int l_597 = 5L;
        unsigned *l_602 = (void*)0;
        unsigned *l_603 = &l_67;
        int l_606 = 0x3D48BE78L;
        unsigned *l_608 = &g_205;
        char *l_632 = &l_194;
        int l_636 = 0x10430994L;
        unsigned short *l_654 = &l_411;
        unsigned short ***l_673 = &l_199;
        unsigned l_679 = 6UL;
        int l_695 = (-1L);
        (*g_596) &= ((*l_486) && l_594);
        (*l_486) = (((*l_486) > ((l_597 = (*g_243)) >= (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((*l_603) = 4294967288UL), (g_29 && (((((safe_sub_func_uint16_t_u_u(((*l_370) = (l_606 >= (((l_606 != (((*g_78) , ((g_205 , g_331) , g_5)) || (*g_402))) , &l_83) != (void*)0))), 0x7342L)) < (*g_78)) , l_607) , 7L) >= (-1L))))), 254UL)))) | l_594);
        if ((((((*l_608) = ((*l_603) ^= g_94)) >= (safe_add_func_uint32_t_u_u(((*l_486) = (safe_mod_func_int8_t_s_s((*l_486), 0x0BL))), (+l_597)))) , g_80) != g_27))
        {
            unsigned l_615 = 1UL;
            int *l_620 = &l_136;
            unsigned short l_671 = 0x7923L;
            unsigned short ***l_672 = &l_199;
            (*l_486) ^= l_615;
            if (l_615)
            {
                short l_631 = 6L;
                char *l_633 = &l_194;
                char **l_634 = &l_633;
                int l_647 = 0x9DE76C6DL;
                unsigned *l_659 = &g_90;
                for (g_116 = 6; (g_116 < 50); g_116 = safe_add_func_int32_t_s_s(g_116, 6))
                {
                    for (g_74 = 0; (g_74 >= 38); g_74 = safe_add_func_int8_t_s_s(g_74, 5))
                    {
                        l_620 = &l_597;

                        ;
                    }
                }

                ;
                (*l_458) = (*p_60);

                ;
                if (l_631)
                {
                    unsigned char l_645 = 0UL;
                    for (l_586 = 0; (l_586 == 10); l_586++)
                    {
                        int *l_642 = &g_29;
                        l_647 ^= ((*l_620) | (safe_mod_func_int16_t_s_s(g_27, ((((&g_94 != ((((g_641 == &l_603) == l_631) & l_645) , &g_308)) > g_646) , 0L) | 0x27L))));
                        (*l_642) = ((*g_596) = ((safe_mod_func_int32_t_s_s(((*l_620) = ((((g_74 != g_90) , (l_645 < ((((((*l_84) = (*l_620)) , 0x7C142BA0L) , &g_4) == &l_620) | ((l_647 , l_631) < 0x7A5EL)))) >= (*l_642)) >= 0UL)), l_645)) | l_631));
                    }
                }
                else
                {
                    unsigned l_653 = 0x11595812L;
                    unsigned short *l_655 = &g_331;
                    unsigned *l_658 = &g_205;
                    (*l_486) ^= l_631;
                    (*l_620) ^= 0x7992E8DEL;
                    (*l_486) = (safe_rshift_func_int8_t_s_u((*g_243), ((l_654 == ((g_308 < ((0x74444836L && 0x7132F3E8L) & 0x718BL)) , l_655)) && l_653)));
                    if ((safe_rshift_func_uint8_t_u_s((*g_78), 5)))
                    {
                        return l_658;


                    }
                    else
                    {
                        return l_659;


                    }
                }
            }
            else
            {
                unsigned short l_660 = 0x20EBL;
                int l_665 = 0x89D5DC6CL;
                l_660 = (*l_620);
                for (g_82 = 0; (g_82 < (-13)); g_82 = safe_sub_func_uint32_t_u_u(g_82, 6))
                {
                    unsigned l_663 = 0x115BEE49L;
                    short *l_664 = &l_70;
                    l_665 &= ((l_663 , l_664) == (void*)0);
                    (*l_620) &= l_663;
                }
                if ((*g_234))
                {
                    for (g_646 = 0; (g_646 <= (-19)); g_646--)
                    {
                        (*l_486) |= ((void*)0 != l_668);
                        (*l_486) ^= (*g_112);
                    }
                    l_620 = ((**l_457) = l_620);

                    ;
                    (***l_457) = (*l_620);
                    (**l_458) = (*g_596);
                }
                else
                {
                    short l_678 = 0x438CL;
                    unsigned char *l_680 = (void*)0;
                    unsigned char *l_681 = &l_594;
                    (*l_458) = (*g_9);

                    ;
                    (*p_60) = (*l_458);
                    (*g_112) = (g_111 ^ (((*l_681) ^= (*g_78)) && 0x6EL));
                }

                ;
                for (l_386 = 0; (l_386 < 27); l_386 = safe_add_func_int32_t_s_s(l_386, 6))
                {
                    unsigned l_688 = 0x87D1D765L;
                    (*l_620) &= (*g_112);
                    for (l_586 = (-14); (l_586 == 25); ++l_586)
                    {
                        (*l_620) &= l_688;
                    }
                }
            }

            ;
            ;
        }
        else
        {
            char l_698 = 0xDCL;
            unsigned char *l_699 = &g_541;
            (*l_486) = l_698;
            (*l_486) &= (*g_234);
        }


        (*p_60) = (*p_60);
    }


    return &g_24;



}







static char func_61(int * p_62, int ** p_63, int p_64, unsigned char p_65, unsigned p_66)
{
    int l_95 = (-1L);
    int **l_96 = &g_4;
    int ***l_97 = &l_96;
    int **l_98 = (void*)0;
    short *l_101 = &g_80;
    if ((*p_62))
    {
        (*g_28) = 0xEE2B4074L;
    }
    else
    {
        short *l_88 = &g_80;
        unsigned *l_89 = &g_90;
        unsigned char *l_93 = &g_94;
        (*g_28) = ((safe_sub_func_uint16_t_u_u(0x6E99L, (((((p_66 <= ((((*l_89) = ((void*)0 == l_88)) < g_80) > 0x4B24D3E4L)) | ((*l_93) = (safe_lshift_func_uint16_t_u_u((((*g_78) |= p_65) , g_29), 6)))) || 0x03EB41E2L) == g_5) == p_64))) != p_65);
    }
    (*g_28) = (((l_95 & (~(((*l_97) = l_96) == l_98))) > ((p_65 , (0xFFD659CAL && g_85)) , (((*l_101) = (p_65 && (safe_mod_func_uint8_t_u_u((((p_66 | 0xFD53L) & 0xE059069CL) >= (*g_78)), 1L)))) || p_65))) != l_95);
    return (***l_97);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_646, "g_646", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
