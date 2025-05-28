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
   char f0;
};


static int g_10 = 0xAC488899L;
static const int *g_9 = &g_10;
static struct S0 g_27 = {0xFFL};
static int g_53 = 0x3ECDC0F1L;
static int g_56 = 0L;
static int g_70 = 6L;
static int *g_69 = &g_70;
static unsigned g_178 = 0x03F0CD8BL;
static unsigned char g_188 = 255UL;
static int **g_195 = &g_69;
static int g_270 = (-1L);
static int g_283 = 0x5A4E873CL;
static int g_288 = (-8L);
static short g_296 = 0xCD97L;
static unsigned g_298 = 0x79EB048EL;
static unsigned g_337 = 0xCA9757F0L;
static unsigned short g_424 = 1UL;
static struct S0 *g_433 = &g_27;
static struct S0 * const *g_432 = &g_433;
static unsigned g_507 = 1UL;
static unsigned short g_642 = 0xC588L;
static unsigned g_730 = 0x47FD3BF1L;
static short g_872 = 0xAC58L;
static char g_934 = 0L;
static short g_986 = 8L;
static unsigned g_1018 = 1UL;



static int func_1(void);
static int * func_2(int p_3, short p_4, int * p_5, int * p_6, int p_7);
static int * func_11(int * p_12);
static int * func_13(unsigned p_14);
static char func_15(unsigned p_16, const int p_17, unsigned short p_18, int p_19, short p_20);
static char func_21(unsigned p_22, char p_23, struct S0 p_24, int * p_25);
static unsigned char func_29(int * p_30, int * p_31, const unsigned p_32);
static int * func_33(unsigned p_34, int * p_35, int * p_36, char p_37);
static int * func_39(int * p_40, struct S0 p_41, int * p_42);
static struct S0 func_43(int * p_44, int * p_45, int * p_46);
static int func_1(void)
{
    unsigned l_8 = 6UL;
    unsigned l_26 = 3UL;
    int *l_28 = &g_10;
    char l_1043 = 0xCFL;
    int **l_1096 = &g_69;
    (*l_1096) = func_2(l_8, (g_9 != (void*)0), &g_10, func_11(func_13((func_15(((func_21(l_26, l_8, g_27, l_28) || (*l_28)) || g_337), l_8, l_1043, g_296, g_296) > g_986))), l_26);


    return (**l_1096);
}







static int * func_2(int p_3, short p_4, int * p_5, int * p_6, int p_7)
{
    int l_1094 = (-6L);
    for (g_298 = (-9); (g_298 > 37); g_298 = safe_add_func_uint16_t_u_u(g_298, 1))
    {
        unsigned char l_1095 = 0x32L;
        p_5 = func_13(func_15((l_1094 & ((void*)0 != &p_7)), g_188, g_27.f0, l_1094, g_288));

        ;
        if (l_1095)
            break;
    }

    ;
    return &g_70;


}







static int * func_11(int * p_12)
{
    return &g_56;


}







static int * func_13(unsigned p_14)
{
    unsigned l_1073 = 9UL;
    struct S0 *l_1085 = &g_27;
    int l_1091 = 1L;
    for (g_27.f0 = 0; (g_27.f0 < (-5)); g_27.f0--)
    {
        int *l_1048 = &g_10;
        int l_1049 = 6L;
        if (p_14)
            break;
        (*l_1048) = func_15(func_29(&g_10, l_1048, (p_14 != (func_15((p_14 && func_15(g_872, g_986, p_14, g_424, g_1018)), (*l_1048), g_642, l_1049, g_1018) & 1UL))), p_14, p_14, p_14, p_14);
    }
    for (g_337 = (-17); (g_337 >= 15); ++g_337)
    {
        int *l_1052 = &g_53;
        int *l_1053 = &g_270;
        int l_1054 = 8L;
        int *l_1055 = &g_270;
        int *l_1056 = (void*)0;
        int *l_1057 = &g_53;
        int *l_1058 = (void*)0;
        int *l_1059 = &g_70;
        int *l_1060 = &g_270;
        int *l_1061 = (void*)0;
        int *l_1062 = &g_10;
        int *l_1063 = &l_1054;
        int *l_1064 = &g_56;
        int *l_1065 = &g_56;
        int *l_1066 = &g_10;
        int *l_1067 = (void*)0;
        int *l_1068 = (void*)0;
        int *l_1069 = &g_10;
        int *l_1070 = (void*)0;
        int *l_1071 = &l_1054;
        int *l_1072 = (void*)0;
        struct S0 * const *l_1090 = (void*)0;
        --l_1073;
        (*l_1053) ^= (safe_add_func_int16_t_s_s(1L, (safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((g_986 >= (((*l_1057) == (safe_mul_func_int16_t_s_s(((void*)0 == l_1085), (-1L)))) < ((1L & ((g_337 || (-1L)) | (*l_1071))) > 0xBB5EL))) & g_507), l_1073)), g_642))))));
        l_1091 |= (safe_sub_func_uint8_t_u_u(func_15(p_14, (&g_195 == (void*)0), (safe_rshift_func_uint16_t_u_u((l_1090 == &l_1085), l_1073)), g_986, g_283), g_10));
    }
    return &g_53;


}







static char func_15(unsigned p_16, const int p_17, unsigned short p_18, int p_19, short p_20)
{
    short l_1044 = 0x348DL;
    int l_1045 = 0x2E1B9E65L;
    l_1045 = (p_17 | l_1044);
    return g_188;
}







static char func_21(unsigned p_22, char p_23, struct S0 p_24, int * p_25)
{
    unsigned l_38 = 0x2E809B4AL;
    int *l_47 = &g_10;
    int *l_737 = (void*)0;
    int *l_1032 = &g_270;
    struct S0 l_1033 = {1L};
    struct S0 **l_1042 = (void*)0;
    if ((((func_29(func_33(l_38, p_25, func_39(p_25, func_43(p_25, l_47, l_47), g_69), g_288), l_737, g_288) & 0x39L) != 0xFC13L) == l_38))
    {
        (*l_47) |= (safe_mul_func_uint8_t_u_u(g_298, (l_737 != &g_270)));
    }
    else
    {
        const unsigned l_1029 = 2UL;
        int *l_1030 = (void*)0;
        int *l_1031 = &g_56;
        (*l_1031) ^= ((((safe_add_func_uint8_t_u_u(g_270, p_22)) || (((void*)0 == &g_195) && func_29(&g_10, p_25, l_1029))) ^ 4294967288UL) > g_288);
        (**g_432) = p_24;
    }



    (*l_1032) = func_29(l_47, l_1032, (((safe_sub_func_int16_t_s_s((*l_47), (safe_mul_func_int16_t_s_s(p_23, (((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((&g_433 == l_1042), (-2L))) < (*p_25)), 1L)) == g_642) || (*g_9)))))) < g_56) != g_507));
    (*p_25) = (0x59L > g_298);
    p_25 = p_25;
    return p_23;
}







static unsigned char func_29(int * p_30, int * p_31, const unsigned p_32)
{
    short l_742 = 0xBE2BL;
    int *l_743 = &g_10;
    int *l_744 = &g_270;
    int *l_745 = &g_10;
    int *l_746 = &g_270;
    int *l_747 = &g_270;
    int *l_748 = &g_270;
    int l_749 = (-1L);
    int *l_750 = (void*)0;
    int *l_751 = &g_70;
    int *l_752 = &g_53;
    int *l_753 = &g_53;
    int *l_754 = &g_270;
    int *l_755 = &g_53;
    int *l_756 = &g_270;
    int *l_757 = &g_270;
    int *l_758 = (void*)0;
    int *l_759 = &g_56;
    int *l_760 = &g_70;
    int *l_761 = (void*)0;
    int *l_762 = &g_53;
    int *l_763 = &g_70;
    int *l_764 = &l_749;
    int *l_765 = &l_749;
    int *l_766 = &g_270;
    int *l_767 = &g_270;
    int *l_768 = (void*)0;
    int *l_769 = &g_53;
    int *l_770 = &g_53;
    int l_771 = (-2L);
    int *l_772 = &l_749;
    int *l_773 = (void*)0;
    int *l_774 = &l_749;
    int l_775 = 6L;
    int l_776 = 1L;
    int *l_777 = &l_749;
    int *l_778 = &l_776;
    int *l_779 = &l_776;
    int *l_780 = &l_771;
    int *l_781 = &g_53;
    int *l_782 = &l_775;
    int l_783 = (-8L);
    int *l_784 = &l_771;
    int *l_785 = &g_270;
    int l_786 = 0L;
    int *l_787 = &g_70;
    int l_788 = 0x204E5148L;
    int *l_789 = &l_786;
    int *l_790 = (void*)0;
    int *l_791 = &l_786;
    int *l_792 = &g_56;
    int l_793 = 0x7CF645BFL;
    int *l_794 = (void*)0;
    int *l_795 = &l_776;
    int l_796 = (-3L);
    int *l_797 = (void*)0;
    int *l_798 = (void*)0;
    int *l_799 = &g_270;
    int *l_800 = &l_788;
    int *l_801 = &l_796;
    int *l_802 = &g_56;
    int *l_803 = (void*)0;
    int *l_804 = &l_776;
    int l_805 = 0L;
    int *l_806 = (void*)0;
    int *l_807 = &l_749;
    int *l_808 = &l_783;
    int *l_809 = &l_805;
    int *l_810 = &l_788;
    int *l_811 = &l_783;
    int l_812 = (-1L);
    int *l_813 = &l_812;
    int l_814 = (-1L);
    int *l_815 = &g_56;
    int *l_816 = &l_775;
    int l_817 = 0x8646D64DL;
    int *l_818 = &l_793;
    int *l_819 = &l_749;
    int *l_820 = &g_70;
    int *l_821 = &l_749;
    int *l_822 = &l_749;
    int *l_823 = &l_788;
    int *l_824 = &l_775;
    int l_825 = 0xB439EF4DL;
    int *l_826 = (void*)0;
    int *l_827 = (void*)0;
    int *l_828 = &l_776;
    int l_829 = 7L;
    int *l_830 = &l_805;
    int *l_831 = &l_771;
    int *l_832 = (void*)0;
    int l_833 = 0xA96BA0FEL;
    int *l_834 = &l_786;
    int *l_835 = (void*)0;
    int *l_836 = &l_796;
    int l_837 = 0x15A19D07L;
    int *l_838 = &l_817;
    int *l_839 = &l_786;
    int l_840 = 0x06719EA2L;
    int *l_841 = (void*)0;
    int *l_842 = (void*)0;
    int *l_843 = &l_814;
    int *l_844 = &l_805;
    int *l_845 = &l_796;
    int *l_846 = &g_53;
    int *l_847 = &l_812;
    int l_848 = 1L;
    int *l_849 = &g_70;
    int l_850 = 2L;
    int *l_851 = &g_70;
    int *l_852 = (void*)0;
    int *l_853 = &l_817;
    int *l_854 = (void*)0;
    int l_855 = 1L;
    int *l_856 = &l_850;
    int *l_857 = &l_775;
    int l_858 = 0xD5363CB6L;
    int *l_859 = &l_776;
    int *l_860 = &l_817;
    int l_861 = (-1L);
    int *l_862 = &l_817;
    int *l_863 = &l_793;
    int *l_864 = &l_775;
    int *l_865 = &l_771;
    int *l_866 = &l_814;
    int *l_867 = &l_793;
    int *l_868 = &l_814;
    int *l_869 = &l_825;
    int *l_870 = (void*)0;
    int *l_871 = &l_749;
    int *l_873 = &l_833;
    int *l_874 = &l_848;
    int *l_875 = &l_796;
    int *l_876 = &l_776;
    int *l_877 = &g_10;
    int *l_878 = &l_861;
    int *l_879 = &l_796;
    int *l_880 = &l_775;
    int *l_881 = &l_749;
    int *l_882 = &g_270;
    int *l_883 = &l_825;
    int l_884 = 0xD720C5B3L;
    int *l_885 = &l_796;
    int *l_886 = (void*)0;
    int *l_887 = &l_786;
    int l_888 = 0xE426B522L;
    int *l_889 = &g_56;
    int *l_890 = &l_783;
    int *l_891 = &l_833;
    int *l_892 = (void*)0;
    int *l_893 = &l_793;
    int *l_894 = (void*)0;
    int *l_895 = &l_840;
    int *l_896 = &l_858;
    int *l_897 = &l_848;
    int *l_898 = &l_829;
    int *l_899 = &l_783;
    int *l_900 = (void*)0;
    int *l_901 = (void*)0;
    int *l_902 = &g_56;
    int *l_903 = &g_270;
    int *l_904 = (void*)0;
    int *l_905 = &l_858;
    int *l_906 = (void*)0;
    int *l_907 = &l_855;
    int l_908 = 5L;
    int *l_909 = (void*)0;
    int *l_910 = &l_855;
    int l_911 = 0xDD1ABF67L;
    int l_912 = 0xD434EBCEL;
    int *l_913 = &l_911;
    int *l_914 = &g_270;
    int *l_915 = &l_788;
    int *l_916 = &l_812;
    int *l_917 = (void*)0;
    int *l_918 = &l_814;
    int *l_919 = (void*)0;
    int *l_920 = &l_829;
    int l_921 = (-1L);
    int l_922 = 9L;
    int *l_923 = (void*)0;
    int *l_924 = (void*)0;
    int *l_925 = &l_884;
    int *l_926 = &l_888;
    int *l_927 = &l_783;
    int l_928 = 0x293E5168L;
    int *l_929 = &g_56;
    int *l_930 = &l_921;
    int *l_931 = &l_776;
    int *l_932 = &l_858;
    int l_933 = 0xC17BA4ABL;
    int *l_935 = (void*)0;
    int *l_936 = &l_848;
    int *l_937 = &l_884;
    int *l_938 = (void*)0;
    int *l_939 = &l_855;
    int *l_940 = &l_786;
    int *l_941 = &l_922;
    int *l_942 = &l_783;
    int l_943 = 0L;
    int *l_944 = &l_850;
    int *l_945 = &l_788;
    int l_946 = 0L;
    int *l_947 = &l_786;
    int l_948 = 0xB9EBAA96L;
    int *l_949 = (void*)0;
    int *l_950 = &l_833;
    int *l_951 = &l_921;
    int *l_952 = &l_771;
    int *l_953 = &l_933;
    int *l_954 = (void*)0;
    int *l_955 = (void*)0;
    int *l_956 = &g_270;
    int *l_957 = &l_858;
    int *l_958 = &l_817;
    int l_959 = 0xD1D9D8BAL;
    int *l_960 = (void*)0;
    int *l_961 = &l_796;
    int *l_962 = &l_825;
    int *l_963 = (void*)0;
    int *l_964 = &l_928;
    int *l_965 = (void*)0;
    int *l_966 = &l_912;
    int *l_967 = &l_814;
    int *l_968 = &l_793;
    int *l_969 = &l_749;
    int *l_970 = (void*)0;
    int *l_971 = (void*)0;
    int *l_972 = &l_858;
    int *l_973 = &g_270;
    int *l_974 = (void*)0;
    int *l_975 = (void*)0;
    int *l_976 = &g_10;
    int *l_977 = &l_776;
    int *l_978 = &l_922;
    int *l_979 = &l_921;
    int *l_980 = (void*)0;
    int l_981 = 0xA4C1BB28L;
    int *l_982 = &l_888;
    int *l_983 = &g_70;
    int *l_984 = (void*)0;
    int l_985 = 1L;
    int *l_987 = &l_833;
    int *l_988 = &l_805;
    int l_989 = 0x536F2928L;
    int *l_990 = &l_837;
    int *l_991 = &l_805;
    int *l_992 = &g_53;
    int *l_993 = &l_829;
    int *l_994 = &l_948;
    int *l_995 = &l_943;
    int *l_996 = &l_858;
    int *l_997 = &l_912;
    int *l_998 = &l_814;
    int *l_999 = (void*)0;
    int *l_1000 = (void*)0;
    int *l_1001 = &l_840;
    int *l_1002 = &l_946;
    int *l_1003 = &l_928;
    int *l_1004 = (void*)0;
    int l_1005 = 0L;
    int *l_1006 = &l_1005;
    int *l_1007 = &l_840;
    int *l_1008 = (void*)0;
    int *l_1009 = &l_837;
    int l_1010 = 0xE7E4AFB5L;
    int *l_1011 = &l_948;
    int *l_1012 = &g_10;
    int *l_1013 = &l_855;
    int *l_1014 = &l_776;
    int *l_1015 = &l_817;
    int l_1016 = 1L;
    int *l_1017 = &l_948;
    if ((safe_mod_func_int32_t_s_s((-2L), p_32)))
    {
        short l_740 = 0x5F11L;
        (*p_30) = (l_740 || l_740);
        (*p_30) = (*g_9);
    }
    else
    {
        int *l_741 = (void*)0;
        l_741 = p_31;

        ;
    }
    (*p_30) |= 0x3D3453F8L;
    --g_1018;
    for (l_771 = (-13); (l_771 >= (-10)); ++l_771)
    {
        int **l_1023 = (void*)0;
        int **l_1024 = &l_873;
        (*l_1024) = p_31;

        ;
    }

    ;
    return p_32;
}







static int * func_33(unsigned p_34, int * p_35, int * p_36, char p_37)
{
    int *l_735 = &g_70;
    int **l_736 = &l_735;
    (*l_736) = l_735;
    return p_35;


}







static int * func_39(int * p_40, struct S0 p_41, int * p_42)
{
    const char l_71 = 0x5DL;
    int l_135 = 6L;
    int l_182 = (-1L);
    int l_185 = 1L;
    int *l_191 = &l_182;
    struct S0 l_351 = {0xFDL};
    int l_589 = 1L;
    int l_591 = 2L;
    int l_619 = (-1L);
    int l_638 = 0xED18002EL;
    (*p_40) ^= (*g_69);
    (*p_40) = (1L <= g_27.f0);
    if (l_71)
    {
        short l_73 = 0x9CE8L;
        struct S0 l_94 = {0x67L};
        int *l_96 = &g_10;
        int l_138 = 9L;
        int l_160 = 0xE56265DCL;
        struct S0 *l_352 = &g_27;
        if ((*p_40))
        {
            short l_72 = (-9L);
            int *l_74 = &g_70;
            int *l_75 = &g_53;
            int *l_76 = &g_10;
            int *l_77 = &g_53;
            int *l_78 = &g_53;
            int *l_79 = (void*)0;
            int *l_80 = &g_53;
            int *l_81 = (void*)0;
            int *l_82 = &g_10;
            int *l_83 = &g_10;
            int *l_84 = &g_53;
            int *l_85 = &g_10;
            int *l_86 = &g_56;
            int *l_87 = &g_53;
            int *l_88 = (void*)0;
            int *l_89 = &g_56;
            int *l_90 = (void*)0;
            unsigned l_91 = 6UL;
            struct S0 *l_95 = &l_94;
            int **l_97 = &g_69;
            l_91--;
            (*l_95) = l_94;
            (*l_97) = l_96;

            ;
            (*l_95) = func_43(&g_70, p_40, &g_70);
        }
        else
        {
            unsigned l_102 = 0x7BC4A6B1L;
            struct S0 * const l_107 = &l_94;
            int l_183 = 0L;
            int l_208 = 0xAA811637L;
            int l_252 = (-4L);
            int l_253 = 0x08B9B0A5L;
            int l_266 = (-5L);
            (*p_40) &= (p_41.f0 ^ ((&g_10 == (void*)0) ^ 1UL));
            if ((safe_mod_func_int32_t_s_s((-10L), (safe_lshift_func_int16_t_s_s((l_102 >= (safe_sub_func_int8_t_s_s((*l_96), (*l_96)))), ((safe_mul_func_uint16_t_u_u(65531UL, (1L < ((l_107 != &p_41) > (((safe_mod_func_uint8_t_u_u((l_102 || g_56), 1UL)) != 0x3524L) && 0x99L))))) <= l_102))))))
            {
                unsigned char l_124 = 0x5BL;
                int l_155 = 0x260AD585L;
                char l_184 = 0L;
                int l_187 = (-1L);
                int *l_196 = &l_187;
                int *l_197 = &g_70;
                int *l_198 = &l_187;
                int *l_199 = &g_10;
                int *l_200 = &l_155;
                int *l_201 = &g_70;
                int *l_202 = (void*)0;
                int *l_203 = &l_138;
                int *l_204 = &l_138;
                int *l_205 = &l_135;
                int *l_206 = &l_187;
                int *l_207 = &l_160;
                int *l_209 = &l_160;
                int *l_210 = &l_185;
                int *l_211 = &g_56;
                int *l_212 = &l_208;
                int *l_213 = &l_138;
                int *l_214 = &l_182;
                int *l_215 = &l_160;
                int *l_216 = &l_183;
                int *l_217 = &l_187;
                int *l_218 = &g_56;
                int *l_219 = &g_70;
                int *l_220 = &l_138;
                int *l_221 = &g_53;
                int *l_222 = &g_70;
                int *l_223 = &l_183;
                int *l_224 = &l_160;
                int *l_225 = &g_53;
                int *l_226 = &l_183;
                int *l_227 = &l_135;
                int *l_228 = &l_135;
                int *l_229 = &g_70;
                int *l_230 = &l_187;
                int *l_231 = (void*)0;
                int *l_232 = &l_155;
                int *l_233 = &l_155;
                int *l_234 = &l_160;
                int *l_235 = (void*)0;
                int *l_236 = &l_185;
                int *l_237 = (void*)0;
                int *l_238 = &g_53;
                int *l_239 = &l_155;
                int *l_240 = &g_56;
                int *l_241 = &g_56;
                int *l_242 = &l_135;
                int *l_243 = (void*)0;
                int *l_244 = (void*)0;
                int *l_245 = &l_208;
                int *l_246 = &l_185;
                int *l_247 = &g_56;
                int *l_248 = (void*)0;
                int *l_249 = &g_70;
                int *l_250 = &l_187;
                int *l_251 = &l_208;
                int *l_254 = (void*)0;
                int l_255 = 1L;
                int *l_256 = &l_135;
                int l_257 = 8L;
                int *l_258 = (void*)0;
                int *l_259 = &l_183;
                int *l_260 = &l_187;
                int *l_261 = &l_138;
                int *l_262 = &l_185;
                int *l_263 = &l_253;
                int *l_264 = &l_252;
                int *l_265 = &l_135;
                int *l_267 = &g_70;
                int l_268 = (-1L);
                int *l_269 = &l_135;
                int *l_271 = &g_53;
                int *l_272 = &g_53;
                int *l_273 = (void*)0;
                int *l_274 = &l_268;
                int *l_275 = &l_208;
                int *l_276 = &g_70;
                int *l_277 = &g_10;
                int *l_278 = &l_183;
                int *l_279 = &g_53;
                int *l_280 = (void*)0;
                int *l_281 = (void*)0;
                int *l_282 = &g_10;
                int *l_284 = &l_138;
                int *l_285 = (void*)0;
                int *l_286 = &g_10;
                int *l_287 = &l_187;
                int *l_289 = &g_270;
                int *l_290 = &g_270;
                int *l_291 = &l_160;
                int *l_292 = (void*)0;
                int *l_293 = &g_10;
                int *l_294 = &l_255;
                int *l_295 = &l_252;
                int *l_297 = &l_208;
                for (l_73 = (-17); (l_73 == (-12)); l_73++)
                {
                    unsigned l_112 = 0x577C8A60L;
                    unsigned l_134 = 1UL;
                    int l_181 = 0x1577CD18L;
                    int l_186 = (-1L);
                    struct S0 *l_194 = (void*)0;
                    struct S0 **l_193 = &l_194;
                    if (l_112)
                    {
                        int *l_113 = &g_70;
                        int *l_114 = &g_56;
                        int *l_115 = &g_53;
                        int *l_116 = &g_10;
                        int *l_117 = &g_56;
                        int *l_118 = &g_10;
                        int *l_119 = &g_53;
                        int *l_120 = &g_56;
                        int *l_121 = &g_70;
                        int *l_122 = &g_10;
                        int *l_123 = &g_10;
                        l_124++;
                        return p_42;


                    }
                    else
                    {
                        (*g_69) &= ((safe_rshift_func_int8_t_s_s(0xA0L, 6)) || (((safe_rshift_func_int8_t_s_s((-5L), (safe_unary_minus_func_uint8_t_u(p_41.f0)))) ^ (safe_sub_func_int8_t_s_s((g_27.f0 != (l_134 < ((void*)0 == &p_41))), 0xB4L))) ^ (0UL && 0xE3L)));
                    }
                    if (((&p_42 != &l_96) || g_53))
                    {
                        int *l_136 = &g_70;
                        int **l_137 = &l_96;
                        l_135 |= (*g_69);
                        (*l_107) = func_43(l_96, p_42, l_136);
                        (*l_137) = &g_70;

                        ;
                    }
                    else
                    {
                        int *l_139 = &l_135;
                        int *l_140 = &l_138;
                        int *l_141 = &g_70;
                        int *l_142 = (void*)0;
                        int *l_143 = &g_10;
                        int *l_144 = &g_53;
                        int *l_145 = &g_53;
                        int *l_146 = &g_53;
                        int *l_147 = &l_138;
                        int *l_148 = &g_53;
                        int *l_149 = &l_135;
                        int *l_150 = &g_70;
                        int *l_151 = &g_10;
                        int *l_152 = &l_138;
                        int *l_153 = &g_10;
                        int *l_154 = &g_53;
                        int *l_156 = &g_70;
                        int *l_157 = &l_155;
                        int *l_158 = &g_53;
                        int *l_159 = &l_155;
                        int *l_161 = &g_10;
                        int *l_162 = (void*)0;
                        int *l_163 = &g_53;
                        int *l_164 = &g_53;
                        int *l_165 = &g_70;
                        int *l_166 = (void*)0;
                        int *l_167 = &l_155;
                        int *l_168 = &l_135;
                        int *l_169 = &g_10;
                        int *l_170 = &l_160;
                        int *l_171 = (void*)0;
                        int *l_172 = &g_56;
                        int *l_173 = &g_10;
                        int *l_174 = &g_53;
                        int *l_175 = &g_53;
                        int *l_176 = &g_10;
                        int *l_177 = &l_135;
                        int **l_192 = &l_145;
                        ++g_178;
                        g_188--;
                        (*l_192) = l_191;

                        ;
                        (*g_69) = 0xB369A1ECL;
                    }
                    (*g_69) &= 0xF1A53783L;
                    (*l_193) = &g_27;

                    ;
                }

                ;
                g_195 = &p_40;

                ;
                (*p_40) &= (-1L);
                g_298--;
            }
            else
            {
                unsigned l_333 = 0xFD481444L;
                int *l_336 = &l_252;
                (*l_191) = ((safe_lshift_func_int8_t_s_u(p_41.f0, (safe_sub_func_int16_t_s_s(0x4148L, 3UL)))) || (((safe_lshift_func_uint8_t_u_s(g_10, 2)) && p_41.f0) | 1L));
                for (g_178 = 0; (g_178 >= 18); g_178 = safe_add_func_int16_t_s_s(g_178, 6))
                {
                    int *l_309 = &l_252;
                    int *l_310 = &g_270;
                    int *l_311 = &l_185;
                    int *l_312 = &l_182;
                    int *l_313 = (void*)0;
                    int *l_314 = &l_138;
                    int *l_315 = (void*)0;
                    int *l_316 = &l_138;
                    int *l_317 = &l_208;
                    int *l_318 = &l_182;
                    int *l_319 = &g_10;
                    int *l_320 = &l_138;
                    int l_321 = 1L;
                    int *l_322 = &g_53;
                    int *l_323 = (void*)0;
                    int *l_324 = &g_10;
                    int *l_325 = &g_53;
                    int *l_326 = &g_56;
                    int *l_327 = (void*)0;
                    int *l_328 = &g_10;
                    int *l_329 = &l_185;
                    int *l_330 = &g_10;
                    int *l_331 = &g_70;
                    int *l_332 = &g_56;
                    --l_333;
                }
                (*p_40) ^= (0x6B76L < g_70);
                g_337--;
            }

            ;
            ;
            (*l_96) = (*g_69);
            if ((*g_9))
            {
                unsigned l_340 = 0x7D5C82D1L;
                l_340 |= (*l_96);
            }
            else
            {
                short l_347 = 0xA5BAL;
                int *l_350 = &l_266;
                l_347 &= (((((safe_mul_func_int16_t_s_s((*l_96), (*l_191))) == g_53) > (!((void*)0 == &g_9))) >= (((*l_191) ^ g_56) | ((safe_mod_func_int16_t_s_s((*l_191), (safe_lshift_func_uint16_t_u_s(g_56, p_41.f0)))) && p_41.f0))) ^ 0x12L);
                (*l_96) = (safe_rshift_func_uint16_t_u_u(p_41.f0, 15));
                return p_42;



            }
        }

        ;
        ;
        ;
        (*l_352) = l_351;
        for (l_185 = (-11); (l_185 == 28); ++l_185)
        {
            unsigned l_357 = 0x307BCC87L;
            for (g_56 = 13; (g_56 < 21); g_56 = safe_add_func_int32_t_s_s(g_56, 1))
            {
                if (l_357)
                    break;
                (**g_195) = (safe_add_func_uint32_t_u_u((((-1L) != (safe_mul_func_int16_t_s_s(l_357, g_270))) || 0xCBL), (p_41.f0 != ((-9L) <= ((!(((*l_191) < (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((0xA65F83DEL >= ((safe_add_func_uint32_t_u_u(g_53, (-1L))) == 0x511DL)) == p_41.f0), g_10)), 2))) & 1UL)) <= 3UL)))));
            }
            (*l_191) |= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((*p_42), 0xA7DC5F5FL)) > (*g_69)), 3)), ((((((*p_42) ^ g_56) >= ((safe_sub_func_int32_t_s_s((*l_96), (safe_sub_func_uint32_t_u_u(p_41.f0, ((**g_195) == p_41.f0))))) > 65535UL)) != 0x5A25L) > 1UL) <= (*g_9)))) >= g_188);
        }
        (*l_96) |= (*l_191);
    }
    else
    {
        int *l_378 = &g_70;
        int l_389 = (-1L);
        int l_459 = 1L;
        int l_624 = (-6L);
        int l_640 = (-6L);
        l_378 = (*g_195);
        if ((((!g_270) | p_41.f0) <= ((0xFAL && (*l_191)) == (*l_191))))
        {
            int *l_379 = &g_10;
            int *l_380 = &g_56;
            int *l_381 = (void*)0;
            int *l_382 = &l_185;
            int *l_383 = &g_70;
            int *l_384 = &g_270;
            int *l_385 = &l_182;
            int *l_386 = &g_10;
            int *l_387 = &g_10;
            int *l_388 = &g_70;
            int *l_390 = &l_182;
            int *l_391 = &g_270;
            int *l_392 = &l_182;
            int *l_393 = &l_185;
            int *l_394 = &l_135;
            int *l_395 = &g_270;
            int *l_396 = &g_270;
            int *l_397 = &g_270;
            int *l_398 = &l_135;
            int *l_399 = &l_182;
            int *l_400 = &l_182;
            int *l_401 = (void*)0;
            int *l_402 = (void*)0;
            int *l_403 = &g_53;
            int *l_404 = &g_270;
            int *l_405 = &g_270;
            int *l_406 = (void*)0;
            int *l_407 = &l_389;
            int *l_408 = &g_56;
            int l_409 = 1L;
            int *l_410 = &g_53;
            int *l_411 = &l_135;
            int l_412 = 0xBE358026L;
            int *l_413 = &g_10;
            int *l_414 = &l_135;
            int *l_415 = &l_185;
            int *l_416 = &l_182;
            int *l_417 = (void*)0;
            int *l_418 = &l_182;
            int *l_419 = (void*)0;
            int *l_420 = &l_412;
            int *l_421 = &g_56;
            int *l_422 = &g_70;
            int *l_423 = &l_412;
            --g_424;
        }
        else
        {
            char l_429 = 0x3EL;
            int l_457 = 8L;
            int l_486 = 0x9B3265BCL;
            int l_592 = 0xBB593A66L;
            (*p_40) |= (*l_378);
            if (((((!(safe_add_func_uint16_t_u_u(p_41.f0, g_283))) || 0x47L) <= (l_429 != l_429)) < p_41.f0))
            {
                int **l_450 = &l_191;
                int l_480 = 0x91D4868CL;
                for (l_351.f0 = 0; (l_351.f0 < (-8)); l_351.f0 = safe_sub_func_int16_t_s_s(l_351.f0, 4))
                {
                    struct S0 * const *l_434 = &g_433;
                    int l_451 = (-6L);
                    l_434 = g_432;
                    for (g_10 = 22; (g_10 >= (-9)); g_10--)
                    {
                        unsigned char l_447 = 0x45L;
                        int *l_452 = &l_135;
                        int *l_453 = &g_270;
                        int *l_454 = &l_182;
                        int *l_455 = &l_389;
                        int l_456 = 0xFDC9A4B1L;
                        int *l_458 = &l_389;
                        int *l_460 = &g_53;
                        int *l_461 = &l_451;
                        int *l_462 = &g_70;
                        int *l_463 = (void*)0;
                        int *l_464 = &g_53;
                        int *l_465 = &g_53;
                        int *l_466 = (void*)0;
                        int *l_467 = &l_185;
                        int *l_468 = &g_56;
                        int *l_469 = &l_456;
                        int *l_470 = &l_457;
                        int *l_471 = (void*)0;
                        int *l_472 = &l_459;
                        int *l_473 = &l_185;
                        int *l_474 = &l_457;
                        int *l_475 = &l_457;
                        int *l_476 = &l_459;
                        int *l_477 = &l_185;
                        int *l_478 = (void*)0;
                        int *l_479 = &l_389;
                        int l_481 = 0x0761ED40L;
                        int *l_482 = &g_53;
                        int *l_483 = &g_56;
                        int *l_484 = (void*)0;
                        int *l_485 = &g_70;
                        int *l_487 = &g_270;
                        int *l_488 = &g_56;
                        int *l_489 = (void*)0;
                        int *l_490 = &l_456;
                        int *l_491 = &l_389;
                        int *l_492 = (void*)0;
                        int *l_493 = &l_486;
                        int *l_494 = &l_480;
                        int *l_495 = (void*)0;
                        int *l_496 = &l_486;
                        int *l_497 = (void*)0;
                        int *l_498 = (void*)0;
                        int *l_499 = (void*)0;
                        int *l_500 = &l_185;
                        int *l_501 = &l_459;
                        int *l_502 = (void*)0;
                        int *l_503 = &l_135;
                        int *l_504 = &l_135;
                        int *l_505 = &l_182;
                        int *l_506 = &l_135;
                        (*g_195) = (*g_195);
                        l_451 ^= (safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_429, ((+p_41.f0) ^ (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(g_70, 1)), 7UL))))) ^ (!((!(((*l_191) != l_447) < p_41.f0)) > p_41.f0))), (safe_lshift_func_uint8_t_u_u((l_450 == &p_42), 1)))), 0x0BL));
                        g_507--;
                    }
                    (*g_433) = (**g_432);
                    (*p_40) = 0xD499C858L;
                }
                (*p_40) = (safe_unary_minus_func_int32_t_s(((g_70 | ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(l_457, (((+(safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((~0xA5L) || (*l_191)), (safe_sub_func_int32_t_s_s((*g_69), (*l_191))))) != (*g_9)), p_41.f0)), (safe_sub_func_int16_t_s_s(g_270, g_178))))) == g_283) || (*p_42)))) ^ 1L), 7UL)), p_41.f0)) || p_41.f0)) & p_41.f0)));
            }
            else
            {
                short l_544 = 0x70AFL;
                int l_571 = 0x3FF0B444L;
                int l_622 = 4L;
                int l_711 = (-1L);
                int ***l_733 = (void*)0;
                int ***l_734 = &g_195;
                for (g_283 = (-5); (g_283 >= 5); g_283 = safe_add_func_int32_t_s_s(g_283, 5))
                {
                    int *l_529 = &g_70;
                    int *l_530 = (void*)0;
                    int l_531 = 8L;
                    int *l_532 = &l_135;
                    int l_533 = (-3L);
                    int *l_534 = &g_10;
                    int *l_535 = &l_531;
                    int *l_536 = &g_56;
                    int *l_537 = &g_270;
                    int *l_538 = &l_531;
                    int *l_539 = &g_56;
                    int *l_540 = &g_70;
                    int *l_541 = &l_185;
                    int *l_542 = &l_531;
                    int *l_543 = (void*)0;
                    int *l_545 = &g_270;
                    int *l_546 = &l_459;
                    int *l_547 = &l_457;
                    int *l_548 = (void*)0;
                    int *l_549 = &l_185;
                    int l_550 = 0x1339926BL;
                    int *l_551 = &g_270;
                    int *l_552 = &l_185;
                    int *l_553 = &l_182;
                    int *l_554 = &l_457;
                    int *l_555 = &l_550;
                    int *l_556 = &l_389;
                    int *l_557 = &l_531;
                    int *l_558 = &l_457;
                    int *l_559 = &l_182;
                    int *l_560 = (void*)0;
                    int *l_561 = &l_185;
                    int *l_562 = &l_457;
                    int *l_563 = &l_486;
                    int *l_564 = (void*)0;
                    int *l_565 = &l_135;
                    int *l_566 = &l_185;
                    int *l_567 = &l_531;
                    int *l_568 = &l_531;
                    int *l_569 = &g_56;
                    int *l_570 = &g_70;
                    int *l_572 = (void*)0;
                    int *l_573 = &l_486;
                    int *l_574 = &l_459;
                    int *l_575 = &l_486;
                    int *l_576 = (void*)0;
                    int *l_577 = (void*)0;
                    int *l_578 = &l_533;
                    int *l_579 = &g_70;
                    int *l_580 = &l_182;
                    int *l_581 = &l_550;
                    int *l_582 = &l_531;
                    int *l_583 = &g_70;
                    int *l_584 = &g_270;
                    int *l_585 = (void*)0;
                    int *l_586 = &l_457;
                    int l_587 = 0xBBD532AEL;
                    int *l_588 = &g_10;
                    int *l_590 = (void*)0;
                    int l_593 = (-5L);
                    int *l_594 = &l_531;
                    int *l_595 = &l_550;
                    int *l_596 = &l_533;
                    int *l_597 = &l_571;
                    int *l_598 = &g_270;
                    int *l_599 = &l_533;
                    int *l_600 = &g_56;
                    int *l_601 = &l_182;
                    int *l_602 = &l_591;
                    int *l_603 = &g_53;
                    int *l_604 = &l_593;
                    int *l_605 = &g_53;
                    int *l_606 = (void*)0;
                    int *l_607 = &l_533;
                    int *l_608 = &g_56;
                    int *l_609 = &l_591;
                    int *l_610 = &l_593;
                    int *l_611 = &g_70;
                    int *l_612 = &l_533;
                    int *l_613 = &l_550;
                    int *l_614 = &l_185;
                    int *l_615 = &l_550;
                    int *l_616 = &l_389;
                    int l_617 = 0xB268BF3FL;
                    int *l_618 = &l_589;
                    int *l_620 = &l_591;
                    int *l_621 = &l_486;
                    int *l_623 = &l_550;
                    int *l_625 = &l_531;
                    int *l_626 = (void*)0;
                    int *l_627 = &l_589;
                    int *l_628 = &l_619;
                    int *l_629 = &l_587;
                    int *l_630 = &g_53;
                    int *l_631 = (void*)0;
                    int *l_632 = &l_389;
                    int *l_633 = &l_459;
                    int *l_634 = &g_10;
                    int *l_635 = &l_486;
                    int *l_636 = &l_486;
                    int *l_637 = (void*)0;
                    int *l_639 = &l_135;
                    int *l_641 = &l_591;
                    --g_642;
                    (*l_556) = l_622;
                }
                (*g_195) = p_40;

                ;
                if ((safe_rshift_func_int16_t_s_s((g_27.f0 != (((void*)0 != &p_41) >= (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(p_41.f0, (safe_rshift_func_int8_t_s_u(0x91L, p_41.f0)))), (g_337 != (safe_rshift_func_int8_t_s_s(g_178, 7))))) || (*l_191)), 1UL)) && 65529UL) && (*l_378)))), 15)))
                {
                    short l_657 = 0x5DB8L;
                    int *l_662 = (void*)0;
                    int *l_663 = (void*)0;
                    int *l_664 = &l_622;
                    int *l_665 = &l_182;
                    int *l_666 = &l_389;
                    int *l_667 = &l_624;
                    int *l_668 = (void*)0;
                    int *l_669 = &l_589;
                    int *l_670 = &l_591;
                    int *l_671 = &l_486;
                    int *l_672 = (void*)0;
                    int l_673 = 1L;
                    int *l_674 = (void*)0;
                    int *l_675 = &l_592;
                    int *l_676 = &l_459;
                    int *l_677 = &l_640;
                    int *l_678 = (void*)0;
                    int *l_679 = &l_182;
                    int *l_680 = &l_571;
                    int *l_681 = &l_389;
                    int *l_682 = &l_589;
                    int *l_683 = &l_182;
                    int *l_684 = &g_10;
                    int *l_685 = &l_457;
                    int *l_686 = &g_56;
                    int l_687 = 3L;
                    int *l_688 = &g_10;
                    int *l_689 = &g_10;
                    int *l_690 = (void*)0;
                    int *l_691 = (void*)0;
                    int *l_692 = &l_589;
                    int *l_693 = (void*)0;
                    int *l_694 = &l_592;
                    int *l_695 = (void*)0;
                    int *l_696 = &g_10;
                    int *l_697 = (void*)0;
                    int *l_698 = &l_457;
                    int *l_699 = &g_70;
                    int *l_700 = &g_53;
                    int *l_701 = &l_457;
                    int *l_702 = &l_622;
                    int *l_703 = (void*)0;
                    int *l_704 = &l_571;
                    int *l_705 = (void*)0;
                    int *l_706 = (void*)0;
                    int *l_707 = &l_459;
                    int *l_708 = &l_640;
                    int *l_709 = &l_591;
                    int *l_710 = &l_389;
                    int *l_712 = &l_622;
                    int *l_713 = &l_619;
                    int *l_714 = &g_10;
                    int *l_715 = &l_591;
                    int *l_716 = &l_571;
                    int *l_717 = &g_56;
                    int *l_718 = &l_389;
                    int *l_719 = &g_10;
                    int *l_720 = &l_389;
                    int *l_721 = &l_619;
                    int *l_722 = &l_640;
                    int *l_723 = &l_622;
                    int *l_724 = (void*)0;
                    int *l_725 = &l_638;
                    int *l_726 = &l_640;
                    int *l_727 = &l_640;
                    int *l_728 = &l_640;
                    int *l_729 = &l_619;
                    if (l_657)
                    {
                        (*p_42) ^= 1L;
                        (*l_378) = 1L;
                    }
                    else
                    {
                        char l_658 = 0L;
                        (**g_195) ^= (((+l_658) | (0xD1AF20C6L & g_178)) | 0UL);
                    }
                    for (g_337 = 0; (g_337 != 6); g_337 = safe_add_func_int8_t_s_s(g_337, 2))
                    {
                        const struct S0 *l_661 = &g_27;
                        (*g_69) &= (l_661 == (void*)0);
                    }
                    l_622 = (*g_69);
                    ++g_730;
                }
                else
                {
                    return p_42;


                }
                (*l_734) = &l_191;

                ;
            }

            ;
            ;
            (**g_432) = func_43(&l_457, (*g_195), &l_457);
            (*g_195) = (*g_195);

            ;
            ;
        }

        ;
        ;
        ;
    }

    ;
    ;
    ;
    return p_42;




}







static struct S0 func_43(int * p_44, int * p_45, int * p_46)
{
    int *l_48 = (void*)0;
    l_48 = p_44;


    for (g_27.f0 = 7; (g_27.f0 != 4); g_27.f0 = safe_sub_func_uint32_t_u_u(g_27.f0, 9))
    {
        int **l_67 = (void*)0;
        int **l_68 = &l_48;
        for (g_10 = (-21); (g_10 <= 6); g_10++)
        {
            int **l_65 = (void*)0;
            int **l_66 = &l_48;
            for (g_53 = 0; (g_53 == (-16)); g_53 = safe_sub_func_uint8_t_u_u(g_53, 8))
            {
                short l_59 = (-9L);
                for (g_56 = 0; (g_56 > (-23)); g_56--)
                {
                    struct S0 l_60 = {0L};
                    l_59 = (*p_46);
                    return l_60;
                }
                for (g_56 = 0; (g_56 == 8); ++g_56)
                {
                    int **l_63 = (void*)0;
                    int **l_64 = &l_48;
                    (*l_64) = p_46;


                    if ((*p_45))
                        break;
                }
            }
            (*l_66) = &g_53;

            ;
        }


        (*l_68) = (void*)0;

        ;
    }


    return g_27;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
