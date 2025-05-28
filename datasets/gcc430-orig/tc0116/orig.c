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



static int g_9 = (-6L);
static const int *g_8 = &g_9;
static unsigned short g_32 = 0x40A9L;
static int *g_35 = &g_9;
static unsigned short g_39 = 0x19C2L;
static unsigned short *g_38 = &g_39;
static short g_40 = 7L;
static unsigned short g_52 = 65527UL;
static int g_55 = (-9L);
static unsigned g_73 = 0x1653144DL;
static unsigned char g_77 = 1UL;
static char g_81 = (-1L);
static int g_91 = (-9L);
static short g_101 = (-1L);
static unsigned short g_104 = 1UL;
static unsigned short g_144 = 1UL;
static char g_154 = (-5L);
static int g_158 = 0x34A7E5ECL;
static unsigned char g_221 = 255UL;
static unsigned char *g_220 = &g_221;
static short *g_245 = &g_40;
static short **g_244 = &g_245;
static unsigned *g_292 = &g_73;
static unsigned **g_291 = &g_292;
static unsigned short g_340 = 0xC5D3L;
static short g_361 = 0x1920L;
static int g_411 = 0x07628F6BL;
static volatile unsigned char g_507 = 1UL;
static unsigned g_558 = 0x57034A2DL;
static volatile int g_673 = 1L;
static volatile int *g_672 = &g_673;
static volatile int **g_671 = &g_672;
static volatile int ***g_670 = &g_671;
static volatile int * const g_698 = (void*)0;
static volatile int g_701 = 0xC001D9D2L;
static unsigned short **g_736 = (void*)0;
static unsigned short *** const g_735 = &g_736;
static const unsigned char g_747 = 0x6BL;
static short g_755 = 0x336CL;
static volatile int g_796 = 1L;
static unsigned char **g_801 = &g_220;
static unsigned char ***g_800 = &g_801;
static unsigned char ****g_799 = &g_800;
static int g_836 = (-9L);
static unsigned ***g_857 = &g_291;
static unsigned ****g_856 = &g_857;
static int g_869 = (-1L);
static volatile unsigned g_974 = 0x99C28509L;
static char g_1131 = 1L;
static unsigned short g_1156 = 0xEE3EL;
static unsigned short *g_1160 = &g_1156;
static unsigned short g_1162 = 0x40CAL;
static char *g_1168 = (void*)0;
static char **g_1167 = &g_1168;



static unsigned func_1(void);
static const int * func_2(const int * p_3, int * const p_4, int * p_5, unsigned short p_6, int * p_7);
static int func_11(const int * p_12);
static int func_13(int * p_14, int * p_15, unsigned short p_16);
static unsigned short func_17(unsigned char p_18, int p_19);
static int func_22(unsigned short p_23, int * p_24);
static int * func_26(const unsigned short p_27, unsigned p_28, int * p_29, int * p_30);
static unsigned char func_46(char p_47, int * p_48);
static int * func_60(const unsigned p_61, unsigned short * p_62, int * p_63);
static unsigned short * func_65(char p_66, unsigned short * p_67, unsigned short p_68);
static unsigned func_1(void)
{
    int *l_10 = &g_9;
    unsigned short *l_1155 = &g_1156;
    unsigned short *l_1157 = &g_1156;
    unsigned short **l_1158 = (void*)0;
    unsigned short **l_1159 = &l_1157;
    int l_1161 = 0xA674481BL;
    const int **l_1192 = &g_8;
    (*l_1192) = func_2(g_8, &g_9, l_10, ((*l_10) , ((func_11(&g_9) < (l_1155 == (g_1160 = ((*l_1159) = l_1157)))) == (g_1162 = l_1161))), g_292);
    (*l_1192) = &g_9;
    (*g_35) = 0x3EDF7BC7L;
    for (l_1161 = 0; (l_1161 >= (-14)); l_1161 = safe_sub_func_int32_t_s_s(l_1161, 6))
    {
        int * const l_1195 = &g_411;
        (*l_10) = 0xE35CC503L;
        g_8 = l_1195;
        if ((*l_1195))
            continue;
    }
    return (**l_1192);
}







static const int * func_2(const int * p_3, int * const p_4, int * p_5, unsigned short p_6, int * p_7)
{
    const int l_1165 = (-1L);
    int l_1166 = 0L;
    const unsigned char *l_1169 = &g_747;
    const unsigned char **l_1170 = (void*)0;
    const unsigned char **l_1171 = &l_1169;
    unsigned short *l_1172 = (void*)0;
    int **l_1173 = &g_35;
    (*p_4) = ((((*g_220) | (safe_mod_func_uint32_t_u_u(l_1165, (((l_1166 = l_1165) , ((*g_292) = ((void*)0 != g_1167))) & 4294967295UL)))) , (*g_801)) != ((*l_1171) = l_1169));
    (*p_4) = l_1166;
    (*l_1173) = p_4;
    if ((*p_3))
    {
        unsigned short l_1174 = 9UL;
        (*p_7) = ((*p_5) = func_17((**l_1173), (*g_672)));
        if ((l_1174 == (**l_1173)))
        {
            const unsigned short l_1175 = 1UL;
            int *l_1176 = &g_836;
            (*l_1173) = &g_836;
        }
        else
        {
            return &g_836;
        }
        (*p_7) &= 0xC5B6F252L;
    }
    else
    {
        int *l_1187 = &g_9;
        unsigned char *l_1190 = &g_77;
        const unsigned short *l_1191 = &g_340;
        for (g_77 = (-14); (g_77 == 27); ++g_77)
        {
            if ((*g_8))
                break;
            (**l_1173) = (p_6 && p_6);
        }
        for (g_73 = 0; (g_73 <= 28); g_73++)
        {
            unsigned char l_1181 = 255UL;
            unsigned *l_1183 = (void*)0;
            unsigned **l_1182 = &l_1183;
            unsigned ***l_1184 = &l_1182;
            l_1181 |= 0L;
            (*l_1184) = l_1182;
        }
        (*l_1173) = (*l_1173);
    }
    return &g_411;
}







static int func_11(const int * p_12)
{
    unsigned short l_25 = 0x342FL;
    unsigned short *l_31 = &g_32;
    int *l_410 = &g_411;
    int *l_621 = &g_91;
    int **l_620 = &l_621;
    unsigned char **l_625 = &g_220;
    short **l_683 = &g_245;
    unsigned char ** const l_768 = &g_220;
    unsigned char ****l_803 = &g_800;
    int l_824 = 0L;
    unsigned *** const *l_859 = &g_857;
    int l_889 = 3L;
    int l_891 = (-1L);
    unsigned l_953 = 4294967295UL;
    unsigned char l_1074 = 0xABL;
    const short *l_1084 = &g_755;
    const short **l_1083 = &l_1084;
    int *l_1092 = &l_824;
    char *l_1145 = &g_1131;
    int **l_1154 = &g_35;
    if (func_13(((func_17((!((safe_mul_func_int16_t_s_s(((func_22(((((~(g_9 != (l_25 == l_25))) , l_25) , l_25) , ((void*)0 == p_12)), func_26(((*l_31) |= 0x523DL), (safe_lshift_func_uint8_t_u_u((((g_9 | l_25) , 4294967295UL) && l_25), 6)), g_35, &g_9)) , (void*)0) == g_8), 0L)) , l_25)), l_25) & l_25) , &g_9), l_410, g_104))
    {
        int *l_616 = &g_158;
        int **l_617 = &l_410;
        int l_676 = 0xCE6D11E0L;
        unsigned l_712 = 0UL;
        unsigned char ** const l_728 = &g_220;
        int l_731 = 0L;
        unsigned short ** const *l_737 = &g_736;
        unsigned short *l_753 = &g_52;
        int *l_762 = &l_731;
        unsigned short **l_763 = (void*)0;
        unsigned short **l_764 = &l_31;
        int *** const l_765 = &l_620;
        unsigned char **l_766 = (void*)0;
        unsigned char ***l_767 = (void*)0;
        char l_864 = 0L;
        int l_890 = 3L;
        unsigned char l_914 = 255UL;
        int *l_1045 = &g_869;
        unsigned char l_1046 = 8UL;
        unsigned char *****l_1047 = (void*)0;
        (*l_617) = l_616;
        if ((((*g_220) = (&g_35 != (void*)0)) && (*l_410)))
        {
            const unsigned char l_628 = 255UL;
            unsigned short *l_643 = (void*)0;
            unsigned short l_644 = 0xDEEFL;
            (*l_410) ^= (*p_12);
            for (g_154 = 5; (g_154 == 29); ++g_154)
            {
                int l_632 = (-10L);
                int l_651 = 0xDC264661L;
                char *l_656 = &g_81;
                if ((*g_8))
                {
                    char l_629 = 4L;
                    char *l_655 = &l_629;
                    if (func_17((*l_410), g_558))
                    {
                        p_12 = p_12;
                        if ((*g_8))
                            continue;
                        (*l_410) |= (*p_12);
                    }
                    else
                    {
                        int ***l_622 = &l_620;
                        int * const *l_624 = (void*)0;
                        int * const ** const l_623 = &l_624;
                        (*l_622) = l_620;
                        (*g_35) = func_17(((**l_625) = ((l_623 == (void*)0) && ((((*g_35) = (*g_8)) || (0UL && ((((*p_12) , l_625) == &g_220) & (((safe_lshift_func_uint8_t_u_u((*g_220), 7)) != (*g_220)) , l_628)))) < 0x8AL))), l_629);
                    }
                    (**l_617) = (safe_sub_func_uint32_t_u_u(((*g_292) = 0x4B1A32B1L), func_17((*g_220), l_632)));
                    for (g_40 = 29; (g_40 < (-13)); --g_40)
                    {
                        char *l_645 = &l_629;
                        int l_650 = 0xCB4DB1A4L;
                        (*l_410) &= 0L;
                        (*l_410) = ((((*l_410) == l_629) && 0UL) , ((*g_220) ^ (**l_617)));
                        (*g_35) = (safe_mod_func_int32_t_s_s(l_628, (safe_mul_func_int16_t_s_s(((((*g_292) , ((((*g_220) , (4UL | (*p_12))) != ((*l_410) >= ((((l_651 = l_650) == func_17(func_17((~(safe_unary_minus_func_int8_t_s((((-1L) & ((safe_sub_func_int32_t_s_s((-1L), 0x76549AEDL)) ^ l_644)) ^ (*l_410))))), g_101), (*l_410))) , l_655) == l_656))) , &l_616)) != (void*)0) ^ 8L), l_629))));
                        (*l_616) = (l_632 == (*l_410));
                    }
                }
                else
                {
                    (*l_616) = (!(*g_8));
                    (**l_617) = ((void*)0 != &g_38);
                    g_35 = &g_55;
                    (*l_410) = l_628;
                }
                return (*p_12);
            }
            (*l_617) = l_410;
        }
        else
        {
            const unsigned l_661 = 4294967286UL;
            int l_662 = 9L;
            unsigned l_677 = 0xDD9D562EL;
            unsigned short **l_680 = &l_31;
            short l_721 = 9L;
            int l_722 = 6L;
            unsigned **l_738 = &g_292;
            int *l_742 = (void*)0;
            char l_750 = 0xC4L;
            for (l_25 = 0; (l_25 > 27); l_25 = safe_add_func_int16_t_s_s(l_25, 7))
            {
                if ((*g_8))
                    break;
                p_12 = p_12;
            }
            if ((safe_add_func_int32_t_s_s(((void*)0 == &g_244), (*p_12))))
            {
                unsigned *l_663 = &g_558;
                int l_664 = 0L;
                (*l_617) = func_26(l_661, l_662, &l_664, (*l_617));
            }
            else
            {
                int l_667 = 0x10DDFFE7L;
                char *l_678 = (void*)0;
                char *l_679 = &g_154;
                unsigned short **l_682 = &l_31;
                unsigned char ***l_713 = &l_625;
                unsigned short *l_729 = &g_52;
                (**l_617) = 0xD84EE456L;
                if ((g_101 , (!(g_558 | 0x96L))))
                {
                    unsigned short ***l_681 = &l_680;
                    int l_696 = 8L;
                    int *l_697 = &g_411;
                    volatile int *l_700 = &g_701;
                    volatile int **l_699 = &l_700;
                    unsigned char ****l_714 = &l_713;
                    (*l_697) |= (((*g_35) = (((**l_617) = ((((*l_681) = l_680) != l_682) || (l_661 > (l_683 != &g_245)))) < l_25)) > (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((0L <= (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_667, 8)), 1)), (safe_sub_func_int8_t_s_s((p_12 != p_12), l_25))))), 5)), l_696)));
                    (*l_699) = g_698;
                    for (g_39 = (-2); (g_39 > 26); ++g_39)
                    {
                        (*l_697) = (*g_35);
                        if ((*g_8))
                            continue;
                        return (*g_8);
                    }
                    l_722 &= ((*g_292) <= (func_17(((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((*l_697) ^= ((safe_mul_func_int16_t_s_s(l_712, ((((func_17(((((*l_714) = l_713) == &l_625) , 0x32L), (safe_rshift_func_int16_t_s_u(((**l_683) = ((***g_670) , l_662)), (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_721 == (l_667 <= 0xD165L)) == l_677), 0x2FL)), 0x54L))))) >= (*l_410)) == l_662) < 0x097EA0F9L) , 65526UL))) , 0x07FB9234L)), l_677)) | 0x9EL), 0x092AL)) && 7UL), 1L)) <= 0x9280L), g_55) , (*l_697)));
                }
                else
                {
                    (*l_617) = &g_55;
                    p_12 = p_12;
                }
                (**l_617) |= (safe_mul_func_uint16_t_u_u(l_662, g_81));
            }
            if ((l_677 < (*g_245)))
            {
                char l_730 = 0x7AL;
                g_35 = &g_158;
                (*g_35) |= (l_730 >= (g_101 & l_730));
                return (*g_8);
            }
            else
            {
                int l_732 = 0L;
                char *l_739 = (void*)0;
                char *l_740 = &g_154;
                unsigned short *l_741 = &g_104;
                unsigned ***l_744 = &g_291;
                unsigned ****l_743 = &l_744;
                int *l_754 = &l_722;
                (*l_616) = (l_731 == (((**l_728) = (g_221 & l_732)) == ((*l_740) = (safe_mod_func_uint32_t_u_u((g_735 == l_737), (((((&g_736 != &g_736) >= l_661) , (g_81 = ((((void*)0 == l_738) && (*l_616)) ^ 1L))) >= l_732) | (*g_292)))))));
                (*l_617) = func_26(((*l_741) = (*l_616)), g_144, (l_742 = &g_158), &l_722);
                g_755 |= (+func_13(&l_662, l_754, (*l_754)));
            }
        }
        (**l_617) = (*l_616);
        if (((l_625 = (((((*l_764) = &l_25) == (void*)0) , (l_765 == &g_671)) , l_766)) != l_768))
        {
            int *l_769 = &g_411;
            unsigned short ***l_777 = &g_736;
            unsigned short ****l_776 = &l_777;
            unsigned short ***l_780 = &l_764;
            (*l_769) &= (*l_410);
            (*l_410) = (safe_add_func_uint32_t_u_u((*g_292), (safe_add_func_uint16_t_u_u(((*l_753) &= (((safe_rshift_func_int16_t_s_s((func_17((*l_769), (g_104 , (***g_670))) > (((g_55 , (((*l_776) = &l_764) == ((safe_mod_func_int16_t_s_s((*l_410), (*g_245))) , l_780))) , (*l_410)) <= (*g_245))), (*l_616))) & (-1L)) & (*l_616))), 5UL))));
            l_410 = &g_9;
        }
        else
        {
            const int *l_781 = &g_158;
            const int **l_782 = &l_781;
            char *l_787 = &g_154;
            int *l_798 = &g_158;
            int l_841 = (-1L);
            unsigned l_892 = 0x4E6B3CE9L;
            short *l_895 = &g_361;
            unsigned short l_963 = 0x866EL;
            char l_1044 = 0x15L;
            short ***l_1051 = &l_683;
            short ** const *l_1053 = &g_244;
            unsigned char l_1075 = 7UL;
            (*l_782) = l_781;
            if (((safe_lshift_func_uint16_t_u_s(0xBF27L, ((((safe_add_func_uint8_t_u_u((**l_617), ((*l_787) = 0L))) == (safe_mul_func_int16_t_s_s((**l_617), (*l_781)))) & ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((**l_764) ^= 0x68C9L), ((g_77 ^= (!func_17((*g_220), ((l_676 ^= (0xEEF39D40L <= ((safe_add_func_int32_t_s_s((0x2762L && (*l_616)), (*p_12))) < (**l_617)))) && 0x0A6DE01AL)))) | g_796))), 0x62D7L)) < (*l_410))) , 0x3A40L))) | (*l_410)))
            {
                unsigned l_797 = 1UL;
                unsigned char *****l_802 = &g_799;
                unsigned short *l_827 = &l_25;
                int *l_828 = &l_824;
                unsigned *****l_858 = &g_856;
                unsigned *** const **l_860 = (void*)0;
                unsigned **l_863 = (void*)0;
                unsigned *** const l_862 = &l_863;
                unsigned *** const *l_861 = &l_862;
                int *** const l_867 = (void*)0;
                const int ***l_868 = (void*)0;
                if ((((((((*l_781) ^ (&g_8 == &p_12)) ^ (((**l_782) , 4294967286UL) , ((**g_801) &= (((*l_802) = g_799) == l_803)))) , 0UL) | g_40) && 255UL) > l_797))
                {
                    int l_810 = 0x1A579D2AL;
                    const int *l_817 = &l_731;
                    unsigned char *l_818 = &g_77;
                    (*l_616) |= 0L;
                    if (((safe_sub_func_uint16_t_u_u(((((*g_292) = 1UL) && (*g_292)) | (safe_sub_func_uint8_t_u_u((!(**l_617)), (((safe_mod_func_uint8_t_u_u(((*g_220) = l_810), ((((*l_818) = (((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((~(func_17((func_17(l_797, (*l_781)) , (safe_lshift_func_int8_t_s_s(((void*)0 == l_817), 5))), (*l_616)) , (*l_410))), g_158)), l_810)) < (*l_410)) == g_91)) , g_340) && l_810))) > (*l_410)) , (*l_616))))), 0xD3C5L)) >= l_797))
                    {
                        unsigned l_821 = 0x8AD2ECBAL;
                        int *l_822 = (void*)0;
                        int *l_823 = &g_411;
                        volatile int *l_826 = &g_701;
                        volatile int **l_825 = &l_826;
                        (*l_782) = p_12;
                        l_824 &= ((*l_823) |= ((*l_616) ^= (safe_add_func_int8_t_s_s((l_821 = g_673), l_797))));
                        (*l_825) = &g_701;
                    }
                    else
                    {
                        int *l_829 = &l_676;
                        (*l_617) = l_828;
                        (*l_782) = (g_35 = (void*)0);
                        (*l_782) = (l_798 = (l_828 = ((*l_617) = l_829)));
                        (*l_782) = p_12;
                    }
                }
                else
                {
                    char l_832 = (-6L);
                    const unsigned *l_835 = (void*)0;
                    int *l_851 = &g_411;
                    (*l_798) = (safe_add_func_uint8_t_u_u((1UL & ((l_832 , (**l_802)) == (**l_802))), (safe_mul_func_int16_t_s_s(func_17((*l_410), (g_836 = ((***l_765) = ((void*)0 != l_835)))), (*l_828)))));
                    for (g_221 = 0; (g_221 != 4); g_221 = safe_add_func_uint32_t_u_u(g_221, 9))
                    {
                        unsigned short l_850 = 0x0DF4L;
                        l_841 ^= (((*l_828) > (safe_rshift_func_uint16_t_u_s(((****g_799) ^ (*l_410)), 5))) && ((*l_828) = ((*l_410) >= g_221)));
                        (*l_828) = l_850;
                        p_12 = l_851;
                    }
                    (*l_798) = 0x5F7B42AEL;
                    (*l_617) = (void*)0;
                }
                (*l_828) = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((*l_828) <= (((4294967290UL ^ (((**g_801) & (**g_801)) & (*l_616))) >= (*g_245)) & 7L)) == (****g_799)), (*l_828))), g_77));
                (*l_616) = l_864;
                (*l_616) = (safe_sub_func_int32_t_s_s((*p_12), (((*l_828) & func_17(((*g_220) = (((*g_245) &= (*l_828)) <= ((g_869 = (l_867 != (((*g_292) = (0x58L && (*l_828))) , ((((*g_292) < (g_73 , (*g_292))) != (**l_782)) , l_868)))) == 1UL))), (*g_672))) != (**l_782))));
            }
            else
            {
                unsigned char l_878 = 255UL;
                (*l_782) = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((*l_781) , (*l_410)) & 0xFC9B461EL), (***g_800))) & (-1L)), (*g_245))) , p_12);
                (*l_782) = (void*)0;
            }
            (*l_782) = (g_35 = ((*l_617) = ((***g_670) , &g_158)));
            if ((((void*)0 == &g_244) , (safe_mod_func_int16_t_s_s(((*l_410) || 0UL), ((*l_895) &= (*g_245))))))
            {
                unsigned *****l_899 = &g_856;
                unsigned ******l_898 = &l_899;
                int l_917 = 0xD849ADDBL;
                unsigned l_918 = 0xEFF32AB4L;
                char **l_944 = &l_787;
                char **l_945 = (void*)0;
                char *l_947 = &l_864;
                char **l_946 = &l_947;
                int *l_952 = &g_836;
                unsigned short l_961 = 0x1E65L;
                unsigned char l_962 = 0xECL;
                int **l_990 = &l_798;
                const unsigned short l_1004 = 0xA149L;
                char l_1013 = 0x5DL;
                int l_1026 = 1L;
                unsigned l_1033 = 4294967292UL;
                char l_1043 = 1L;
                l_889 = (((*l_410) = (safe_sub_func_int8_t_s_s((((((*l_898) = &g_856) == (void*)0) & (*l_616)) || (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_747, 7)), (**l_617)))), (*l_410)))) && (*g_245));
                (*l_782) = ((((l_917 , (*l_410)) != l_918) < ((((((((**l_617) & 0xF0F1L) | ((safe_lshift_func_int16_t_s_s(5L, 0)) ^ (**l_782))) , (safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((*l_753) = 0x9DD7L), (safe_mul_func_int16_t_s_s(((**l_617) > 1L), (*g_245))))) , (**l_617)), (*l_410))) , (*p_12)) >= (*p_12)), (*l_410)))) ^ (*g_8)) & 0UL) == l_917) > 0xCD1F6C15L)) , p_12);
                g_836 ^= (((void*)0 == &g_736) > ((*l_410) , (safe_lshift_func_int16_t_s_s((**l_782), 14))));
                if ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((l_918 > (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u(((((safe_lshift_func_int8_t_s_s(l_917, 6)) & (((safe_lshift_func_int16_t_s_s(((*l_895) = ((((*l_410) < (*l_410)) , &l_864) == ((*l_946) = ((*l_944) = (void*)0)))), (*l_798))) && (((0xA9B4L || ((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((*l_798), g_40)), (*l_616))) ^ 0UL)) < (*g_245)) , (*l_410))) , l_953)) & (*l_410)) >= (*l_616)))), (*l_410)))) || (*l_410)), (-6L))), 0x9CL)))
                {
                    int *l_964 = &g_869;
                    (*l_798) |= (*g_8);
                    (*l_964) &= (safe_mod_func_int32_t_s_s((-1L), 0x072E4C4BL));
                }
                else
                {
                    int l_973 = 0x518A3878L;
                    int l_991 = 1L;
                    short l_992 = (-7L);
                    unsigned char l_993 = 7UL;
                    unsigned short *l_1021 = &l_961;
                    (*l_952) = ((*l_798) = (safe_add_func_int32_t_s_s((*g_35), (safe_mod_func_uint16_t_u_u((((*g_8) & ((-9L) <= g_221)) != ((*g_8) & (*g_292))), (((safe_lshift_func_int16_t_s_s((((*l_753) &= l_973) > (*g_245)), 14)) == ((g_55 = ((*l_952) , 0x11F798F1L)) | 0x0BE0B64FL)) || 0L))))));
                    p_12 = &g_869;
                    if ((l_973 , (g_974 > (((safe_mul_func_int16_t_s_s(0xA9E7L, (*l_616))) < 1UL) <= (*l_798)))))
                    {
                        int ***l_989 = (void*)0;
                        (*l_616) = ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((*l_410), 4)) , l_973), (g_340 >= (*l_952)))) <= ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(func_17(((l_990 = &g_35) != &p_12), ((l_973 < l_973) != (!(((l_973 == (*l_616)) ^ 0x7463L) || l_991)))), g_340)) , l_992) > 0x87E8A775L), (*l_952))), l_993)), 0)) ^ 0x67L));
                        (*l_952) |= ((*l_410) > (**g_801));
                    }
                    else
                    {
                        short l_1003 = 0xBDE5L;
                        unsigned short **l_1022 = &g_38;
                        unsigned short **l_1023 = &l_1021;
                        (**l_990) = (safe_mul_func_uint16_t_u_u(0xF19DL, ((((safe_add_func_uint8_t_u_u(((****g_799) = (+(**l_782))), 1UL)) | (*g_292)) ^ l_1003) > l_1003)));
                        (*l_617) = (void*)0;
                        (*l_782) = func_26(l_1004, ((safe_mod_func_uint32_t_u_u((((((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((**l_990) &= l_1003) , (****g_799)), func_17((250UL >= l_1003), (***g_670)))), (safe_add_func_uint16_t_u_u((l_973 ^ (l_991 || l_973)), 0x77A3L)))) < 0x1DA7AF60L) ^ (*l_952)) || (*l_616)) == 9UL), 0x6253C242L)) , l_1003), &l_991, &g_9);
                        g_55 ^= ((0xC1B9L || (l_1013 , func_17((*l_952), (**l_990)))) , (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_993, ((**l_764) = (safe_unary_minus_func_int16_t_s((-1L)))))), (((*l_1023) = func_65((safe_sub_func_uint16_t_u_u(0x7D85L, (*g_245))), l_1021, (**l_990))) == (void*)0))));
                    }
                    for (g_144 = 0; (g_144 <= 17); g_144 = safe_add_func_uint16_t_u_u(g_144, 2))
                    {
                        int l_1042 = 1L;
                        l_1046 = (*g_8);
                    }
                }
            }
            else
            {
                unsigned short *l_1048 = (void*)0;
                unsigned short *l_1049 = (void*)0;
                unsigned short *l_1050 = &g_104;
                int l_1059 = 0xAFD4F5DCL;
                char *l_1060 = (void*)0;
                int l_1076 = 0x66B6E36DL;
                (*l_410) = (-1L);
                if ((*p_12))
                {
                    short ****l_1052 = &l_1051;
                    (*g_35) = (((*l_1052) = l_1051) == l_1053);
                    return (*l_410);
                }
                else
                {
                    char **l_1058 = &l_787;
                    int l_1065 = 0x37A2553FL;
                    l_1059 = (*p_12);
                    (*l_1045) |= (*g_35);
                }
                l_1076 |= ((safe_lshift_func_int16_t_s_u(((**l_617) , l_1059), 7)) & (func_17(((safe_mul_func_uint8_t_u_u(((*l_616) >= ((g_9 = func_17((((safe_lshift_func_uint8_t_u_u((1UL | ((func_17((safe_mul_func_uint16_t_u_u(l_1074, (*l_798))), (*g_672)) <= func_17((*l_410), (**l_782))) > (-4L))), (*l_410))) | 0UL) != g_869), g_869)) == (*l_616))), (*l_410))) , l_1075), (*l_798)) , (*l_798)));
            }
        }
    }
    else
    {
        int l_1081 = (-7L);
        short ***l_1082 = &g_244;
        const short ***l_1085 = &l_1083;
        unsigned char ** const ****l_1093 = (void*)0;
        unsigned char ** const *l_1097 = &l_768;
        unsigned char ** const **l_1096 = &l_1097;
        unsigned char ** const ***l_1095 = &l_1096;
        unsigned char ** const ****l_1094 = &l_1095;
        unsigned short *l_1107 = &g_340;
        unsigned short l_1123 = 0xDC4DL;
        int *l_1133 = (void*)0;
        (*g_35) = ((((safe_rshift_func_int8_t_s_u((((****g_799) , (safe_rshift_func_int8_t_s_u(l_1081, (l_1081 < ((l_683 = l_683) != ((*l_1085) = l_1083)))))) , 6L), 6)) >= 0x35A17209L) , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((*l_1094) = (((safe_lshift_func_uint8_t_u_u((*g_220), 5)) == 0UL) , (void*)0)) == &g_799), l_1081)), 6))) , (*l_410));
        (*l_1092) = (safe_rshift_func_uint8_t_u_s((!0x47L), (safe_rshift_func_uint8_t_u_s((((*l_1092) , &l_803) != (void*)0), 1))));
        (*l_1092) ^= 9L;
        for (g_558 = 0; (g_558 <= 45); g_558 = safe_add_func_int16_t_s_s(g_558, 1))
        {
            char l_1104 = 0x13L;
            int *l_1109 = &g_869;
            unsigned short *l_1132 = &l_1123;
            if (l_1104)
            {
                return (*l_410);
            }
            else
            {
                int *l_1108 = (void*)0;
                int **l_1110 = (void*)0;
                int **l_1111 = (void*)0;
                int **l_1112 = (void*)0;
                int **l_1113 = &l_1092;
                (*l_1113) = l_1109;
                for (l_953 = 0; (l_953 != 35); l_953++)
                {
                    for (g_73 = 0; (g_73 != 23); ++g_73)
                    {
                        volatile int *l_1118 = (void*)0;
                        l_1118 = &g_701;
                        return (*l_410);
                    }
                    (*l_1092) = (*g_35);
                    if ((*p_12))
                        break;
                }
                l_1081 ^= (safe_rshift_func_int8_t_s_u((((*l_1109) = func_17((*l_1109), (*l_1092))) , ((((((**l_1113) , (((*l_1109) != ((0xE7L >= (*l_1109)) == l_1123)) & (*g_292))) , 0x1EA2L) , (void*)0) != (void*)0) | (*l_1092))), 7));
            }
            (*l_1092) = (*p_12);
            if (((*g_35) = 5L))
            {
                short l_1126 = 1L;
                (*l_1109) = (*l_1092);
                (*g_35) = ((*p_12) > (((l_1123 <= (safe_add_func_int32_t_s_s((*p_12), ((*l_1109) = (~func_17(l_1126, l_1081)))))) <= (((*l_410) = (9UL && ((*l_410) != ((**l_683) = ((*l_410) == (-2L)))))) <= 3L)) , 0xEDA4DD5BL));
            }
            else
            {
                const int *l_1135 = &g_836;
                const int **l_1134 = &l_1135;
                short l_1136 = (-7L);
                char *l_1139 = &g_81;
                unsigned short *l_1142 = &g_52;
                (*g_35) ^= (0xD2D1L <= (*l_1092));
                (*l_1134) = p_12;
                (*l_1134) = p_12;
            }
        }
    }
    (*l_1154) = func_26((*l_1092), (*l_1092), &g_411, &g_869);
    return (*p_12);
}







static int func_13(int * p_14, int * p_15, unsigned short p_16)
{
    const short l_428 = (-9L);
    int l_430 = (-7L);
    unsigned l_444 = 0x49BACB73L;
    unsigned char l_496 = 0UL;
    short *l_500 = &g_101;
    char l_513 = 0xD8L;
    unsigned char l_531 = 0xD8L;
    int **l_595 = (void*)0;
    int ***l_594 = &l_595;
    int *l_601 = (void*)0;
    int **l_600 = &l_601;
    const int *l_602 = (void*)0;
    short l_611 = 0L;
    short l_612 = 0xBC50L;
    int **l_613 = (void*)0;
    int **l_614 = (void*)0;
    int **l_615 = &g_35;
    (*p_15) ^= 0x218E075FL;
    if ((safe_lshift_func_int16_t_s_u(((func_17((*g_220), p_16) >= (*g_220)) <= p_16), p_16)))
    {
        const unsigned short l_418 = 0UL;
        int l_419 = 0xF2741B67L;
        unsigned short *l_426 = &g_39;
        const unsigned l_427 = 4294967289UL;
        char *l_429 = &g_154;
        unsigned l_431 = 4294967287UL;
        unsigned char l_498 = 0xBAL;
        unsigned char l_512 = 0x7AL;
        if ((safe_lshift_func_int8_t_s_s((((l_431 = ((*g_220) = ((l_430 = (safe_sub_func_int32_t_s_s(l_418, ((((*p_15) = (*g_8)) , p_16) & l_428)))) < l_418))) , l_419) ^ l_428), 5)))
        {
            unsigned char **l_446 = &g_220;
            int l_448 = 1L;
            int **l_471 = (void*)0;
            int **l_472 = &g_35;
            if (l_419)
            {
                g_158 &= (*g_8);
            }
            else
            {
                int l_458 = 3L;
                (*p_14) = (*g_35);
                for (g_144 = 0; (g_144 < 49); g_144 = safe_add_func_uint8_t_u_u(g_144, 8))
                {
                    unsigned short l_445 = 0xB3B8L;
                    unsigned char ***l_447 = &l_446;
                    int *l_449 = &g_55;
                    int **l_450 = (void*)0;
                    int **l_451 = &g_35;
                    (*l_451) = (p_15 = p_14);
                    if ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_16, (safe_add_func_uint32_t_u_u((*g_292), l_458)))), 1UL)))
                    {
                        short l_459 = 0x0673L;
                        if (l_459)
                            break;
                        return (*g_35);
                    }
                    else
                    {
                        int l_470 = 0xEFC3E2CEL;
                        (**l_451) = l_448;
                        (**l_451) = (safe_lshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(l_448, l_448)) && ((p_16 || p_16) >= (safe_mod_func_int8_t_s_s((*l_449), (safe_mod_func_uint16_t_u_u(((*l_426) &= (0UL | 0x5A0FL)), p_16)))))) <= 0xB6AEAC0EL) >= 0L), p_16)) , l_470), 11));
                        (**l_451) &= 0L;
                        (*p_15) &= ((0x1FE9L ^ g_154) && func_17(p_16, g_158));
                    }
                }
            }
            (*l_472) = &g_411;
            (*l_472) = p_15;
        }
        else
        {
            int ***l_473 = (void*)0;
            int ***l_474 = (void*)0;
            int **l_476 = (void*)0;
            int ***l_475 = &l_476;
            (*l_475) = (void*)0;
        }
        for (g_81 = 13; (g_81 <= 5); --g_81)
        {
            int l_481 = (-9L);
            int *l_490 = &g_91;
            int **l_489 = &l_490;
            int ***l_488 = &l_489;
            const unsigned l_495 = 1UL;
            short **l_501 = &g_245;
            short *l_502 = &g_101;
            short *l_504 = (void*)0;
            short **l_503 = &l_504;
            for (g_73 = 0; (g_73 == 6); g_73++)
            {
                unsigned char *l_493 = (void*)0;
                unsigned char *l_494 = &g_77;
                unsigned *l_497 = &l_444;
                int **l_499 = &g_35;
                (*p_15) = l_481;
                l_430 &= (*g_35);
                (*l_499) = func_26(p_16, g_144, func_26(((void*)0 != &l_426), (safe_sub_func_int32_t_s_s((((*l_429) = ((((((*l_497) &= ((func_17(((*g_220) = l_481), ((l_419 &= (safe_lshift_func_uint16_t_u_u((((((l_430 & ((safe_add_func_int32_t_s_s(((void*)0 != l_488), ((((*l_494) = ((safe_mul_func_int8_t_s_s(l_418, g_101)) != 0L)) & l_495) <= p_16))) >= l_496)) <= p_16) ^ p_16) , (-1L)) , 65535UL), 10))) > l_428)) < 0x13L) > 0x25F12828L)) < (*g_8)) <= (*g_8)) , (void*)0) != (void*)0)) && l_498), (*g_8))), &g_411, &l_430), p_14);
            }
            (*p_15) |= (((*l_501) = l_500) == ((*l_503) = (l_502 = l_426)));
        }
        g_158 ^= (g_52 , (l_498 , (((((safe_sub_func_int32_t_s_s(((g_507 != 0x4160C490L) , (safe_add_func_int16_t_s_s(0x092CL, (((!((~((*l_426) |= l_427)) , ((4294967288UL || (safe_add_func_int8_t_s_s(((*g_220) < l_512), l_419))) && 0x24L))) != (*g_245)) , l_513)))), (*g_8))) == l_419) == (*g_35)) , (*p_14)) & (-1L))));
    }
    else
    {
        char l_526 = 0x6AL;
        int l_527 = 1L;
        int l_528 = 0x2E26C057L;
        int *l_593 = &l_528;
        int ***l_596 = &l_595;
        unsigned short *l_597 = (void*)0;
        unsigned short *l_598 = &g_39;
        char *l_599 = &g_81;
        for (l_513 = 0; (l_513 < 28); l_513++)
        {
            (*p_15) |= 1L;
        }
        if ((*g_35))
        {
            unsigned char *l_518 = (void*)0;
            unsigned char *l_519 = &g_77;
            const int l_520 = 0L;
            int **l_521 = &g_35;
            unsigned l_537 = 4294967295UL;
            char l_559 = 1L;
            if ((safe_mod_func_uint16_t_u_u(l_428, (safe_mul_func_uint8_t_u_u(((*p_14) || (*g_8)), g_91)))))
            {
                int l_536 = 0L;
                unsigned short * const l_538 = (void*)0;
                unsigned short *l_539 = &g_144;
                unsigned short l_554 = 0x7C14L;
                unsigned *l_557 = &g_558;
                int l_583 = (-2L);
                (*g_35) |= (0x7AL != l_513);
                (*l_521) = p_14;
                l_528 &= (func_17(p_16, g_411) || ((((((safe_mul_func_uint8_t_u_u((l_526 && 0x6CL), func_17(p_16, (l_527 = (g_40 > 0x1ACDL))))) , l_526) , p_15) != (void*)0) , g_154) , l_526));
                if ((((*l_539) = (((l_526 <= (p_16 , ((+((safe_mul_func_int16_t_s_s((((l_531 < (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_536, 3)), p_16))) , (**l_521)) | 0xFDL), (l_537 | ((((0UL <= (*g_35)) , l_538) == (void*)0) ^ p_16)))) , 255UL)) || g_507))) == p_16) , p_16)) ^ g_158))
                {
                    (**l_521) = (safe_lshift_func_int16_t_s_u((p_16 > (((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((**l_521), (safe_add_func_uint16_t_u_u((((p_16 > (((l_554 <= ((*g_245) = (*g_245))) > ((*l_519) = (!(*g_220)))) || ((*g_292) = ((safe_add_func_int32_t_s_s((0xD473L == (((void*)0 == l_557) , 4UL)), (*p_14))) < 0x542693F3L)))) , &g_81) == (void*)0), 0x0487L)))), p_16)), 255UL)) <= (*g_220)), p_16)) == l_559) < p_16)), 13));
                }
                else
                {
                    char l_560 = 0x5FL;
                    unsigned char l_561 = 253UL;
                    char *l_568 = &g_154;
                    unsigned short *l_584 = &l_554;
                    l_560 = (l_528 ^ (**l_521));
                    (*p_14) = 0x4E5D60B4L;
                    if ((l_561 != g_104))
                    {
                        (*p_14) = (safe_add_func_int32_t_s_s(func_17(p_16, g_81), ((safe_lshift_func_int8_t_s_u(p_16, 1)) , (((*g_245) = l_560) | p_16))));
                    }
                    else
                    {
                        int *l_582 = (void*)0;
                        int **l_581 = &l_582;
                        (*l_521) = &g_411;
                        (*l_581) = ((*l_521) = (void*)0);
                    }
                    (*l_521) = func_26(p_16, ((*l_557) &= l_583), &g_411, &g_411);
                }
            }
            else
            {
                (*p_15) ^= (*g_35);
            }
            (*p_14) = (*p_14);
        }
        else
        {
            return (*g_35);
        }
        (*p_14) = (p_16 & func_17(p_16, (((*l_599) = ((0x58ACL <= (safe_sub_func_int8_t_s_s((p_16 | p_16), (*g_220)))) , g_77)) , 0xF52FCE24L)));
    }
    (*l_615) = p_14;
    return (*g_8);
}







static unsigned short func_17(unsigned char p_18, int p_19)
{
    return p_19;
}







static int func_22(unsigned short p_23, int * p_24)
{
    unsigned l_41 = 4294967291UL;
    int *l_54 = &g_55;
    unsigned short *l_64 = &g_32;
    char l_255 = 0xFEL;
    unsigned l_324 = 0UL;
    int l_326 = (-1L);
    const unsigned *l_376 = &g_73;
    const unsigned **l_375 = &l_376;
    (*l_54) ^= (l_41 , (safe_sub_func_int16_t_s_s(g_40, (safe_sub_func_int8_t_s_s((-8L), func_46(p_23, p_24))))));
    if ((!func_46((((safe_add_func_uint16_t_u_u(65535UL, func_46((safe_rshift_func_int8_t_s_u(p_23, 3)), func_60(g_32, l_64, func_26(p_23, ((&g_52 != ((*l_54) , (g_38 = func_65(((g_39 < (((*l_54) , (*l_54)) , (*l_54))) , (*l_54)), l_64, (*l_54))))) <= 1UL), &g_55, p_24))))) == p_23) & 65530UL), p_24)))
    {
        unsigned char *l_115 = &g_77;
        short * const l_151 = &g_101;
        int *l_152 = &g_55;
        unsigned short *l_171 = &g_32;
        char l_239 = 0x71L;
        short l_345 = 0x702EL;
        if (((safe_mul_func_uint8_t_u_u(p_23, p_23)) >= (~func_46((safe_sub_func_uint8_t_u_u(252UL, ((*l_115) = 0x3BL))), p_24))))
        {
            int **l_116 = &g_35;
            char *l_125 = &g_81;
            unsigned char l_169 = 0x1FL;
            int l_184 = 0x59AEBFD9L;
            short *l_243 = &g_40;
            short **l_242 = &l_243;
            (*l_116) = &g_9;
            if ((safe_lshift_func_int8_t_s_s(((*l_125) &= ((**l_116) >= (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u(((*g_38) |= (safe_lshift_func_int16_t_s_s((p_23 >= ((void*)0 == &g_81)), (*l_54)))), p_23)) > p_23), 12)))), 5)))
            {
                unsigned l_139 = 7UL;
                unsigned l_182 = 8UL;
                int ***l_191 = (void*)0;
                int ***l_192 = (void*)0;
                int ***l_193 = &l_116;
                unsigned l_208 = 0UL;
                short *l_214 = &g_40;
                short **l_213 = &l_214;
                for (g_39 = 0; (g_39 != 48); ++g_39)
                {
                    const int *l_136 = &g_91;
                    unsigned short *l_142 = (void*)0;
                    unsigned short *l_143 = &g_144;
                    unsigned *l_145 = &l_139;
                    int l_146 = (-10L);
                    char *l_153 = &g_154;
                    int *l_157 = &g_158;
                    l_146 |= ((((*l_145) = ((func_46((((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(0x23D3L, ((*l_64) = ((safe_rshift_func_uint16_t_u_u(((void*)0 == l_136), ((*l_143) ^= (safe_mul_func_int8_t_s_s(((l_139 , (safe_mod_func_uint16_t_u_u((247UL | func_46(((void*)0 != &g_9), ((*l_116) = func_60(g_9, ((0x36L < g_77) , &g_39), &g_9)))), g_39))) & g_77), g_55))))) == 0xE341DA9CL)))) , p_23), 2)), p_23)) != g_104) > p_23) , 65535UL) | 0x3897L), p_24) , 1UL) & p_23)) && (*l_54)) || p_23);
                    if ((*g_35))
                        continue;
                    (*l_157) &= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((p_23 <= ((((l_151 == l_143) > ((*l_153) = ((*l_125) = func_46(l_146, l_152)))) == (safe_rshift_func_uint8_t_u_u((p_23 , g_39), 3))) | ((*l_143) = (*g_38)))) & p_23), l_146)), g_39));
                    for (l_41 = 3; (l_41 <= 28); l_41 = safe_add_func_uint16_t_u_u(l_41, 3))
                    {
                        int l_170 = 1L;
                        int *l_183 = &g_91;
                    }
                }
                if ((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s(0x43L, g_55)) , &g_35) != ((*l_193) = &g_35)) | (((safe_lshift_func_int8_t_s_u((*l_152), 7)) && g_154) | (((*l_171) = (((*g_35) = (*l_54)) , (*g_38))) || 0x7CF5L))), (*l_54))), (*l_152))))
                {
                    int l_202 = 0x83836BFEL;
                    unsigned short **l_207 = &l_64;
                    char l_241 = 1L;
                    for (g_144 = 0; (g_144 >= 53); g_144 = safe_add_func_uint8_t_u_u(g_144, 8))
                    {
                        (*l_152) &= (safe_add_func_uint16_t_u_u(p_23, (safe_sub_func_uint16_t_u_u(((*g_38) &= (p_23 | ((((((*l_151) = l_202) , (*g_8)) , ((g_40 >= g_81) , (0x3CL == p_23))) || ((*p_24) , 0x0CL)) <= 0x138CL))), p_23))));
                    }
                    for (g_77 = (-14); (g_77 >= 29); g_77 = safe_add_func_int32_t_s_s(g_77, 5))
                    {
                        (**l_116) = 0xF008F7B8L;
                        if ((*l_54))
                            break;
                    }
                    g_158 |= (~(safe_rshift_func_uint8_t_u_s(((g_38 = ((p_23 & 0xC5E5L) , &g_52)) != ((*l_207) = func_65(g_81, &g_104, (*l_152)))), 7)));
                    if (((((~((*l_152) , 1UL)) | ((((*l_125) = (+(l_208 < (safe_mod_func_int32_t_s_s(0xE08F3222L, ((safe_lshift_func_uint16_t_u_u(((void*)0 != l_213), ((*l_54) & 0x0715622FL))) && (safe_unary_minus_func_uint32_t_u(g_144)))))))) && g_32) != g_73)) & 0x9111B8B9L) > p_23))
                    {
                        unsigned char l_238 = 0x5FL;
                        unsigned *l_240 = &l_139;
                        l_241 ^= (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((*l_115) = (*l_152)), ((*l_125) &= ((*g_8) != (g_220 != (void*)0))))) , (safe_add_func_int32_t_s_s((((((**l_116) && ((*l_240) &= (safe_mul_func_int16_t_s_s(7L, (safe_add_func_uint16_t_u_u((*g_38), l_202)))))) , p_23) , 0L) <= p_23), (*p_24)))), (**l_116)));
                        (*l_54) &= ((*g_38) , (*g_8));
                        (*p_24) = (*g_8);
                    }
                    else
                    {
                        (*l_54) |= (*p_24);
                        (***l_193) = (*g_35);
                    }
                }
                else
                {
                    unsigned short l_256 = 0x5F26L;
                    unsigned *l_273 = &g_73;
                    unsigned **l_272 = &l_273;
                    if ((g_101 & (0x9B9D56F0L || (-1L))))
                    {
                        g_244 = l_242;
                        (**l_193) = (void*)0;
                    }
                    else
                    {
                        unsigned char l_250 = 9UL;
                        (**l_193) = func_60(func_46(((p_23 || (safe_rshift_func_int16_t_s_u((((safe_mul_func_uint16_t_u_u((l_250 == (safe_sub_func_int16_t_s_s(((-1L) ^ ((safe_sub_func_uint32_t_u_u(func_46(p_23, &g_9), (p_23 == g_221))) , ((l_255 | 253UL) >= (*g_245)))), p_23))), (*g_38))) <= 0x018AEFFBL) , p_23), l_256))) >= (*g_38)), (*l_116)), &l_256, &g_158);
                    }
                    for (g_39 = 0; (g_39 == 22); ++g_39)
                    {
                        (**l_193) = p_24;
                    }
                    (*p_24) |= (safe_sub_func_uint8_t_u_u((((p_23 , (safe_add_func_int16_t_s_s(p_23, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(((l_256 >= ((*l_54) <= ((p_23 , &p_24) != &p_24))) ^ ((safe_add_func_int32_t_s_s((p_24 == ((*l_272) = p_24)), l_256)) > l_256)))) > 0UL), p_23)) <= (*l_54)) & p_23) > 0x1FBD920CL), 5)), 0x0F59L)) , (*l_54))))) > 0xD8L) || (*l_54)), p_23));
                    (*l_116) = &g_9;
                }
            }
            else
            {
                unsigned short l_278 = 0x4777L;
                int *l_283 = &g_9;
                unsigned char **l_287 = (void*)0;
                unsigned char ***l_286 = &l_287;
                (**l_116) = (!(safe_add_func_int32_t_s_s(0x202275D2L, ((safe_lshift_func_int16_t_s_s((0x56744AC8L > l_278), (*g_245))) , ((safe_add_func_uint16_t_u_u((*g_38), (func_46((func_46(((safe_mod_func_int32_t_s_s(0x880B996AL, ((((**g_244) = ((p_23 != (func_46(g_154, l_152) ^ g_77)) != 0x4AL)) & (*g_38)) , (*g_8)))) ^ g_104), l_283) , (*l_54)), l_283) == (*g_38)))) , 0x0F48B296L)))));
                (*l_152) = (*g_35);
                (*l_152) = (safe_lshift_func_int16_t_s_s(((*l_283) , p_23), 11));
                (*l_286) = &l_115;
            }
        }
        else
        {
            unsigned *l_289 = &g_73;
            unsigned **l_288 = &l_289;
            unsigned ***l_290 = (void*)0;
            int l_293 = (-4L);
            int l_322 = 0x00FFBC52L;
            int l_323 = 0x704DB0D0L;
            unsigned l_325 = 0xB6DD6E43L;
            char *l_371 = &g_154;
            int *l_374 = &g_9;
            (*p_24) = 0x78DF01C7L;
            g_291 = l_288;
            if (l_293)
            {
                unsigned short l_298 = 0UL;
                int **l_299 = (void*)0;
                int **l_300 = &l_54;
                int *l_333 = &l_322;
                l_152 = ((*l_300) = func_26((safe_add_func_uint32_t_u_u(0x53FAB730L, func_46(g_91, &g_55))), ((**g_244) , (safe_add_func_uint16_t_u_u(65530UL, (l_298 = (g_144 > 0xBFL))))), p_24, &g_9));
                l_326 ^= (func_46((((*g_220) ^ l_293) != (safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u((func_46(p_23, ((*l_300) = l_152)) >= (p_23 , ((((~(safe_sub_func_uint32_t_u_u((l_325 = ((**l_288) = ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u(l_255, (*g_38))) , (l_323 = (((l_322 = (safe_mul_func_uint8_t_u_u((*g_220), 1L))) >= l_293) != 253UL))) , 0x3FL) == (-1L)), p_23)), 0x994EL)), (-7L))), l_324)) <= 0x3DBF3A56L), l_324)), (*g_220))) , p_23))), 0UL))) , (*g_220)) || (*g_220)) , g_221))), 249UL))))), p_24) ^ p_23);
                (*l_333) ^= ((*g_35) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((*l_54), p_23)), (*g_35))), 1)));
            }
            else
            {
                int l_344 = 0xC4C33CC8L;
                l_322 = ((safe_lshift_func_int16_t_s_u(((-1L) | ((*g_220) = ((*g_35) >= ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((g_340 ^= (**g_291)) && 0L), p_23)), (g_154 |= ((((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(((*l_152) > 0xDDABB3DDL))) & (l_344 != g_81)), (*g_245))) < (*l_152)) && 1UL) >= l_345)))) , (**g_291))))), (*l_54))) , (-1L));
                (*g_35) = func_46((l_293 , (safe_lshift_func_int8_t_s_s(3L, 0))), &g_158);
            }
            for (g_77 = (-1); (g_77 != 20); g_77 = safe_add_func_uint32_t_u_u(g_77, 1))
            {
                const char l_360 = (-8L);
                int *l_381 = (void*)0;
                int **l_392 = &l_381;
                unsigned short **l_393 = &l_171;
                if ((p_23 ^ (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_23 < ((*l_152) = ((((**g_244) = func_46(((safe_sub_func_uint32_t_u_u(p_23, ((((**g_244) , (safe_mul_func_int8_t_s_s(func_46((~(-5L)), &g_9), l_322))) , l_360) && 0x8310L))) > l_323), &g_55)) == p_23) < l_360))), 0x8509L)), g_361)) < 0xC3FB7B5DL), 0))))
                {
                    unsigned *l_364 = (void*)0;
                    unsigned *l_365 = &l_41;
                    if (((*l_54) = (safe_sub_func_uint16_t_u_u((((*l_365) = p_23) , (safe_lshift_func_int8_t_s_s(0L, 1))), (&p_23 == &p_23)))))
                    {
                        unsigned short **l_368 = &g_38;
                        int *l_372 = &l_326;
                        (*l_152) &= (&g_32 == ((*l_368) = &p_23));
                        (*l_372) |= ((*p_24) = ((safe_sub_func_uint32_t_u_u((&l_255 == l_371), (**g_291))) != func_46(p_23, &g_55)));
                    }
                    else
                    {
                        int **l_373 = &l_152;
                        unsigned short *l_377 = &g_340;
                        (*l_373) = l_365;
                        l_374 = (void*)0;
                        (*l_373) = &g_9;
                        (*l_373) = func_26(((l_375 == (void*)0) || 1L), (((*g_38) = ((*l_377) ^= (*g_38))) >= (!(**l_373))), l_364, l_152);
                    }
                    l_152 = p_24;
                }
                else
                {
                    if ((func_46((*l_152), &l_326) | (*g_38)))
                    {
                        unsigned short *l_380 = &g_52;
                        int **l_382 = &l_152;
                        if ((*p_24))
                            break;
                        (*l_382) = func_26((((0UL ^ p_23) || func_46((*l_152), func_26(((*l_380) ^= (safe_mul_func_int16_t_s_s((**g_244), (*g_38)))), (*l_54), l_152, (p_24 = &g_158)))) <= l_360), g_101, l_152, l_381);
                    }
                    else
                    {
                        unsigned char l_385 = 1UL;
                        int *l_388 = &l_323;
                        (*g_35) ^= (safe_rshift_func_int8_t_s_u((-8L), (*g_220)));
                        g_55 &= ((*l_388) |= (g_91 > (l_385 , (safe_sub_func_int16_t_s_s(func_46((g_81 = g_81), &g_158), (*g_38))))));
                        if ((*p_24))
                            continue;
                        return (*g_8);
                    }
                    for (l_324 = 0; (l_324 == 7); ++l_324)
                    {
                        int l_391 = 0x76F7A8BFL;
                        return l_391;
                    }
                }
                (*l_392) = (void*)0;
                (*l_392) = func_60((*l_152), ((*l_393) = &g_104), p_24);
            }
        }
        for (l_239 = 0; (l_239 != 9); l_239 = safe_add_func_int32_t_s_s(l_239, 7))
        {
            for (g_40 = 29; (g_40 == 3); g_40 = safe_sub_func_int16_t_s_s(g_40, 1))
            {
                int **l_398 = &l_54;
                (*l_398) = &g_158;
                (*g_35) = (((void*)0 == &g_361) , (+(**l_398)));
            }
        }
    }
    else
    {
        short **l_399 = &g_245;
        int **l_400 = &g_35;
        (*l_400) = func_60(((void*)0 == l_399), &g_144, &g_55);
        for (l_326 = 0; (l_326 > (-4)); --l_326)
        {
            unsigned l_407 = 4294967295UL;
            unsigned short *l_408 = (void*)0;
            char *l_409 = &l_255;
            if ((*p_24))
                break;
            (*l_400) = func_60(func_46(g_221, ((safe_add_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(p_23, ((*l_64) = ((((((*l_409) = (p_23 <= func_46(((l_407 != (*g_38)) <= g_361), func_60(func_46(g_9, &g_158), l_408, &g_55)))) ^ 9UL) && 0x08C032CBL) < 0x6F80DFEFL) , 0UL)))) | (*g_220)) , g_81), p_23)) , &g_158)), &g_39, g_292);
        }
    }
    (*g_35) = (-10L);
    (*g_35) |= ((*g_245) < ((void*)0 != &g_245));
    return (*p_24);
}







static int * func_26(const unsigned short p_27, unsigned p_28, int * p_29, int * p_30)
{
    for (p_28 = 0; (p_28 > 22); p_28 = safe_add_func_int32_t_s_s(p_28, 3))
    {
        if ((*g_8))
            break;
        g_40 ^= (g_32 != (&p_27 == (g_38 = &g_32)));
    }
    return p_29;
}







static unsigned char func_46(char p_47, int * p_48)
{
    unsigned l_50 = 0x66593C39L;
    unsigned short *l_51 = &g_52;
    int *l_53 = &g_9;
    (*p_48) = (safe_unary_minus_func_int16_t_s(((((*l_51) &= (l_50 , (*g_38))) <= (l_53 == &g_9)) == p_47)));
    return (*l_53);
}







static int * func_60(const unsigned p_61, unsigned short * p_62, int * p_63)
{
    unsigned char l_100 = 1UL;
    short *l_109 = &g_101;
    short **l_108 = &l_109;
    short ***l_110 = &l_108;
    for (g_40 = 0; (g_40 <= 4); ++g_40)
    {
        int **l_99 = &g_35;
        short *l_107 = &g_101;
        g_101 |= ((safe_sub_func_uint8_t_u_u(g_81, (func_46(((safe_mul_func_int16_t_s_s(((((*l_99) = &g_9) == (void*)0) || (p_61 & 1UL)), (+((func_46(p_61, p_63) & l_100) >= 5UL)))) & 0L), p_63) && g_52))) | (-6L));
        if ((*p_63))
            continue;
        (**l_99) = (*p_63);
        (*g_35) ^= ((safe_add_func_int8_t_s_s(g_104, (safe_mul_func_int16_t_s_s(g_104, ((*l_107) |= g_55))))) ^ (-5L));
    }
    (*l_110) = l_108;
    return p_63;
}







static unsigned short * func_65(char p_66, unsigned short * p_67, unsigned short p_68)
{
    int l_71 = 0x61EB6136L;
    unsigned *l_72 = &g_73;
    unsigned char *l_76 = &g_77;
    char *l_80 = &g_81;
    int *l_90 = &g_91;
    unsigned l_92 = 1UL;
    (*g_35) = (((p_68 < (*p_67)) | (safe_sub_func_uint32_t_u_u(l_71, ((*l_72) &= 0UL)))) != ((safe_mul_func_uint8_t_u_u((p_66 , ((*l_76) &= g_32)), l_71)) | (safe_rshift_func_int8_t_s_u((((*l_80) = 0L) >= (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u((((*l_90) = (p_68 != l_71)) , 0UL), 0xF084L)) , p_68) , p_68), 3)), l_92)), 2))), p_66))));
    return &g_39;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_755, "g_755", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1156, "g_1156", print_hash_value);
    transparent_crc(g_1162, "g_1162", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
