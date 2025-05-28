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


union U0 {
   unsigned char f0;
   int f1;
   char f2;
   unsigned f3;
};


static int g_2 = 0x743D837BL;
static unsigned g_40 = 0x0CD9796AL;
static unsigned g_42 = 9UL;
static int g_46 = (-1L);
static int g_48 = 0xCE1A812CL;
static short g_50 = 0L;
static union U0 g_57 = {0xB5L};
static int *g_73 = (void*)0;
static int **g_72 = &g_73;
static unsigned g_87 = 0xDE151060L;
static unsigned short g_127 = 0xF3DDL;
static unsigned short g_149 = 0x23CFL;
static unsigned *g_157 = &g_40;
static unsigned *g_193 = &g_87;
static unsigned char g_231 = 253UL;
static unsigned char *g_230 = &g_231;
static int g_268 = 7L;
static unsigned short g_289 = 1UL;
static short g_306 = (-1L);
static union U0 g_335 = {2UL};
static char g_340 = 1L;
static unsigned short g_363 = 0xF70AL;
static union U0 *g_403 = (void*)0;
static union U0 **g_402 = &g_403;
static short g_418 = 2L;
static unsigned char **g_441 = &g_230;
static unsigned char ***g_440 = &g_441;
static int g_498 = 0x8EE17491L;
static short g_538 = (-10L);
static char *g_621 = &g_57.f2;
static char **g_620 = &g_621;
static char ***g_619 = &g_620;
static short *g_669 = &g_418;
static short **g_668 = &g_669;
static short ***g_667 = &g_668;
static unsigned short *g_756 = &g_289;
static unsigned short **g_755 = &g_756;
static unsigned short **g_759 = &g_756;
static unsigned short g_803 = 3UL;
static unsigned char ****g_834 = &g_440;
static int g_988 = (-1L);



static int func_1(void);
static int func_5(char p_6, char p_7, char p_8);
static unsigned short func_9(unsigned p_10, int p_11, union U0 p_12, char p_13, unsigned p_14);
static unsigned func_16(int p_17, union U0 p_18, short p_19, int p_20);
static union U0 func_21(int p_22, unsigned char p_23, short p_24, char p_25, unsigned short p_26);
static unsigned char func_33(unsigned char p_34, unsigned short p_35, unsigned p_36, int p_37, union U0 p_38);
static int * func_51(union U0 p_52, unsigned * p_53, short * p_54, unsigned * p_55, int * p_56);
static unsigned * func_58(unsigned p_59, short p_60);
static int * func_113(int * p_114, unsigned char * p_115, unsigned * p_116);
static int * func_117(short * p_118, unsigned p_119);
static int func_1(void)
{
    union U0 l_43 = {1UL};
    union U0 l_537 = {254UL};
    int l_540 = 0x5DACDAEBL;
    unsigned l_893 = 0x38851668L;
    unsigned **l_946 = (void*)0;
    int l_958 = (-10L);
    int *l_960 = &l_540;
    unsigned short *l_976 = &g_149;
    unsigned char ****l_1019 = &g_440;
    short ****l_1041 = &g_667;
    int l_1059 = 0xC3487542L;
    for (g_2 = 17; (g_2 > (-13)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 1))
    {
        char l_15 = 0xFDL;
        unsigned *l_39 = &g_40;
        unsigned *l_41 = &g_42;
        short *l_49 = &g_50;
        int *l_536 = &l_43.f1;
        char *l_539 = &l_537.f2;
        int *l_887 = &l_540;
        union U0 l_888 = {0x3FL};
        int l_894 = 0xC4824531L;
        int *l_947 = &g_498;
        union U0 l_991 = {0UL};
        int l_1020 = 0x83E38871L;
        unsigned l_1046 = 0xB8F64F30L;
        unsigned l_1047 = 2UL;
        (*l_887) = func_5(((*l_539) = (func_9(l_15, ((*l_536) = ((1UL | func_16(g_2, (l_43 = func_21(l_15, (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((*l_49) = (safe_div_func_uint8_t_u_u(func_33((1L || 3L), g_2, ((*l_41) &= ((*l_39) ^= l_15)), g_2, l_43), l_43.f2))), g_2)), l_15)), l_15, l_15, l_43.f0)), l_15, l_15)) || (*g_157))), l_537, l_15, l_15) | l_537.f0)), g_363, l_540);


                if (func_9((*g_157), (*l_887), l_888, (**g_620), (safe_sub_func_int32_t_s_s((!(-1L)), (0x8F2943E0L != (safe_lshift_func_uint16_t_u_s(func_9(((*l_41) = l_893), func_33((****g_834), l_894, l_43.f2, g_57.f0, l_888), l_888, (***g_619), (*g_157)), 0)))))))
        {
            short l_897 = 1L;
            char ***l_900 = &g_620;
            int l_908 = 1L;
            for (l_43.f3 = (-17); (l_43.f3 >= 53); l_43.f3 = safe_add_func_uint32_t_u_u(l_43.f3, 6))
            {
                unsigned *l_898 = &l_893;
                int *l_899 = &g_46;
                int *l_909 = (void*)0;
                int *l_910 = &g_268;
                (*g_72) = l_899;

                ;
                (*l_899) = (**g_72);
                (*l_910) |= (l_908 |= (func_16((*l_887), l_537, (**g_668), (l_900 == &g_620)) ^ (safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s(((**g_668) == func_9(((*l_39) = (safe_div_func_uint8_t_u_u((~((*l_887) < ((safe_lshift_func_int8_t_s_s((*l_887), (***g_619))) == 255UL))), (****g_834)))), (*l_887), g_57, (***g_619), l_893)), (***g_619)))))));
                (*g_402) = (*g_402);
            }


            (*l_887) = l_908;
            (*g_402) = (void*)0;
        }
        else
        {
            int l_916 = (-5L);
            short l_930 = 1L;
            int l_944 = 0x206B7548L;
            int **l_959 = &l_947;
            int **l_961 = &g_73;
            unsigned short l_972 = 0xA7E9L;
            union U0 l_989 = {255UL};
            char **l_994 = &g_621;
            int l_1013 = 0x8EE99DD9L;
            short l_1043 = 0x2B69L;
            int *l_1044 = &l_1013;
            for (g_498 = 0; (g_498 != 15); g_498 = safe_add_func_int8_t_s_s(g_498, 2))
            {
                unsigned char l_919 = 0x6BL;
                unsigned short ***l_920 = (void*)0;
                for (g_127 = 0; (g_127 == 37); g_127 = safe_add_func_uint32_t_u_u(g_127, 1))
                {
                    unsigned short *l_915 = &g_363;
                    int *l_921 = &g_48;
                    char ***l_924 = &g_620;
                    (*l_921) &= func_9((((*l_915) ^= (**g_755)) > l_916), (safe_rshift_func_uint8_t_u_u(func_9(((*l_41) = (*g_157)), (l_919 > (*g_157)), l_43, (&g_755 == l_920), l_43.f2), 0)), l_888, (*l_887), l_916);
                    (*l_921) ^= (safe_rshift_func_uint16_t_u_u(((**g_755) = (((void*)0 == l_924) >= (*g_621))), 5));
                }
                return l_916;
            }
            for (l_894 = 0; (l_894 <= (-7)); l_894 = safe_sub_func_uint8_t_u_u(l_894, 1))
            {
                int l_929 = 1L;
                unsigned l_933 = 0x3E09FE74L;
                int *l_950 = &l_916;
                if ((g_46 = (safe_add_func_uint16_t_u_u((*l_887), (*g_756)))))
                {
                    (*l_887) = g_46;
                    if (l_929)
                        break;
                    (*g_402) = (*g_402);
                    return l_930;


                }
                else
                {
                    unsigned char l_934 = 0UL;
                    union U0 *l_935 = &g_335;
                    int *l_945 = &g_46;
                    (*l_945) |= (!((((!(safe_rshift_func_int8_t_s_s((*g_621), ((*l_539) = (-6L))))) < (func_9(l_933, l_934, ((*l_935) = g_57), (0xD0L < l_930), (safe_rshift_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((***g_440) = 0xEAL), func_9((*g_157), l_944, g_57, (***g_619), (*g_157)))), (*l_887))) & (**g_755)) & (-9L)), 0x5EEFFDCBL)) || 0x818AL) == (*g_157)) || (***g_619)), l_929))) ^ (*g_669))) != (**g_755)) > 1L));
                    if ((l_946 != &g_157))
                    {
                        int **l_948 = (void*)0;
                        int **l_949 = &l_945;
                        if (l_43.f0)
                            break;
                        l_540 = (((*l_949) = l_947) != &l_540);

                        ;
                        if (l_944)
                            continue;
                    }
                    else
                    {
                        unsigned l_951 = 0x9A271FDFL;
                        (*g_72) = l_950;

                        ;
                        (*l_950) = (l_951 != ((safe_lshift_func_int8_t_s_s(func_33((***g_440), (safe_rshift_func_int16_t_s_s(l_916, func_9((*l_950), func_9(((*l_39) = (*g_157)), (*l_950), ((*l_935) = l_537), (*l_950), (safe_div_func_int16_t_s_s(((**g_668) = 0x9BB4L), l_958))), l_888, (**g_620), (*l_950)))), l_43.f2, g_268, l_537), 3)) | 0xBDL));

                                                if ((*l_945))
                            continue;
                    }

                    ;
                }
            }


            (*l_887) = g_335.f2;
            if ((((*l_959) = &g_46) == (l_887 = l_960)))
            {
                int l_964 = 0xA0670E3DL;
                unsigned char l_990 = 255UL;
                (*l_947) = (safe_sub_func_uint16_t_u_u((l_964 != ((***g_667) && (**g_755))), 0xEF24L));
                (*l_961) = (*l_959);

                ;
                (*l_961) = &l_958;

                ;
                for (g_538 = (-3); (g_538 >= 7); g_538 = safe_add_func_uint16_t_u_u(g_538, 4))
                {
                    union U0 l_971 = {251UL};
                    unsigned short *l_975 = &g_289;
                    unsigned char *l_983 = &l_888.f0;
                    short l_1012 = 0xD8C2L;
                    int l_1026 = 0xD3CD3B30L;
                    short ****l_1039 = &g_667;
                }
            }
            else
            {
                short l_1045 = 4L;
                (*l_959) = l_1044;

                ;
                (*l_947) = ((*g_756) >= ((*l_1044) == (*l_887)));
                l_1045 = (*l_960);
            }


            ;
        }



        (*g_72) = func_51((l_43 = l_537), l_536, l_49, l_41, func_58(l_1046, l_1047));

                ;
        (*l_887) = (func_33((*l_960), ((safe_unary_minus_func_int8_t_s((**g_620))) ^ ((((*l_539) = (0x0A134E3CL && ((safe_mod_func_int32_t_s_s(((*g_669) ^ ((safe_rshift_func_int16_t_s_s(0x7E86L, 6)) <= (*g_157))), ((*l_41) = (*g_157)))) | ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((l_958 = (***g_667)) == (safe_add_func_uint8_t_u_u(((**g_441) = 0x51L), 1L))), 4)) & (**g_668)), (*l_960))) & (*g_157))))) <= 0xC5L) != (*g_756))), (*g_157), l_1059, l_43) >= (*g_621));
    }


    return g_538;
}







static int func_5(char p_6, char p_7, char p_8)
{
    unsigned short *l_545 = &g_289;
    int *l_554 = (void*)0;
    unsigned short *l_555 = &g_127;
    int l_556 = 0x69884704L;
    union U0 l_580 = {0x9CL};
    int *l_590 = &l_556;
    char ***l_616 = (void*)0;
    int l_657 = (-1L);
    unsigned l_680 = 0UL;
    unsigned l_686 = 4294967295UL;
    int ***l_735 = &g_72;
    union U0 l_818 = {3UL};
    unsigned char ***l_880 = &g_441;
    if (((safe_div_func_int16_t_s_s((~g_340), ((*l_545) = (g_42 || (p_8 != (-1L)))))) == ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((p_8 ^ (((((*l_555) |= ((safe_lshift_func_uint8_t_u_s((0x94FAL < (g_157 != l_554)), 7)) > p_8)) == p_8) & p_8) != 1L)), l_556)) == l_556), 0xF01BC57FL)) >= g_149)))
    {
        unsigned char *****l_561 = (void*)0;
        int l_565 = 0x21ABD48EL;
        short *l_582 = &g_50;
        union U0 l_584 = {1UL};
        short *l_586 = &g_418;
        union U0 l_635 = {0x6FL};
        int l_638 = 0xBEEB4EADL;
        unsigned *l_682 = &g_42;
        unsigned l_715 = 3UL;
        int *l_725 = &l_556;
        int ***l_766 = &g_72;
        int l_794 = 0L;
        for (g_57.f3 = 10; (g_57.f3 >= 5); --g_57.f3)
        {
            unsigned char l_575 = 0xE0L;
            int l_577 = 2L;
            union U0 l_579 = {1UL};
            int l_597 = (-8L);
            union U0 *l_728 = (void*)0;
            union U0 *l_729 = &g_335;
            char **l_732 = &g_621;
            int l_762 = 0L;
        }

        (**l_766) = &l_657;

        ;
        (***l_766) = p_6;
        for (l_638 = 18; (l_638 < (-22)); l_638 = safe_sub_func_int16_t_s_s(l_638, 1))
        {
            unsigned l_825 = 0x10D2439BL;
            unsigned char ****l_832 = (void*)0;
            int l_844 = 0x1E131060L;
            if (((*g_756) != (safe_add_func_int8_t_s_s((**g_620), p_6))))
            {
                unsigned short l_841 = 65535UL;
                union U0 l_868 = {255UL};
                if ((p_6 >= (((void*)0 == (*g_668)) == (p_6 >= p_7))))
                {
                    union U0 l_826 = {0x78L};
                    unsigned char *l_827 = &g_335.f0;
                    unsigned char ****l_833 = &g_440;
                    (*l_725) &= ((**g_72) ^= func_9(l_825, p_8, l_826, (***g_619), l_825));
                    (*l_590) = func_9((0L <= 0x23005C01L), (((*l_827) &= ((***g_440) &= l_825)) || (l_825 < ((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((l_832 == (g_834 = l_833)), (safe_lshift_func_uint8_t_u_u((***g_440), (safe_add_func_uint16_t_u_u((**g_759), (safe_lshift_func_int16_t_s_u(l_826.f0, l_825)))))))), l_825)) ^ (*g_157)))), l_826, p_6, l_841);
                    (*g_73) |= 1L;
                }
                else
                {
                    int l_847 = 0xA7C3C166L;
                    unsigned char *l_857 = (void*)0;
                    unsigned char *l_858 = &l_818.f0;
                    union U0 l_859 = {246UL};
                    (*l_725) |= ((safe_add_func_int16_t_s_s(((*g_669) = (((l_844 = ((***l_735) = (-1L))) || ((*g_157) = ((((****g_834) ^ (safe_lshift_func_int8_t_s_s((((0x8D22L & (*g_669)) & func_33(l_847, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s((***g_667))), 4)), ((*l_858) = (safe_add_func_int8_t_s_s(p_7, (func_16((safe_sub_func_uint32_t_u_u(8UL, (l_847 | l_844))), l_580, (*g_669), l_841) | 0xF77C7446L)))))), p_7, p_7, l_859)) <= 9L), 4))) == (**g_620)) & 0UL))) && 0xB0L)), 0x2006L)) < l_841);
                }
                (***l_735) = (((((*l_725) | ((*l_586) = p_8)) ^ ((*l_555) |= (**g_759))) || (func_9((safe_rshift_func_int16_t_s_s((0x6831AB81L != (func_16(g_306, l_584, (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(p_7, (((func_16((p_6 && 4294967295UL), l_868, p_7, p_7) >= (*g_73)) >= l_841) == (-2L)))) >= 0x35BDFFE3L), (-1L))), p_7)), l_844) == 0x41EE44D2L)), 0)), p_8, l_580, (***g_619), l_841) & p_7)) > (**g_72));
                for (g_498 = (-4); (g_498 != 5); ++g_498)
                {
                    char ****l_873 = &g_619;
                    int l_874 = 0x38061F8DL;
                    unsigned char *l_877 = (void*)0;
                    unsigned *l_878 = &g_42;
                    int *l_879 = &l_874;
                    for (g_42 = 0; (g_42 <= 8); ++g_42)
                    {
                        (*l_725) = (l_873 == (void*)0);
                        l_874 ^= (+((***l_735) = (p_6 || 0xA409B4E6L)));
                        if (l_874)
                            continue;
                        (*l_590) = (~p_7);
                    }
                    for (l_580.f2 = 6; (l_580.f2 < (-15)); l_580.f2 = safe_sub_func_int8_t_s_s(l_580.f2, 1))
                    {
                        l_879 = &l_874;
                        if (p_6)
                            break;
                    }

                                        (***l_735) &= ((void*)0 == l_880);
                }
            }
            else
            {
                return p_6;


            }
        }
    }
    else
    {
        (*l_590) &= (safe_sub_func_int16_t_s_s(p_6, (func_16(p_7, l_580, (***g_667), g_231) > (safe_lshift_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(0x32L, 0xECL)) & ((void*)0 == &g_72)), 5)))));
    }


    return p_8;


}







static unsigned short func_9(unsigned p_10, int p_11, union U0 p_12, char p_13, unsigned p_14)
{
    g_538 = p_11;
    return g_306;
}







static unsigned func_16(int p_17, union U0 p_18, short p_19, int p_20)
{
    int l_532 = (-10L);
    int l_533 = 0x2DF01602L;
    int *l_534 = &l_532;
    int *l_535 = &g_46;
    l_533 ^= (safe_lshift_func_int16_t_s_s(g_127, l_532));
    (*l_535) |= ((*l_534) |= 0x3F65DDE7L);
    return (*l_535);
}







static union U0 func_21(int p_22, unsigned char p_23, short p_24, char p_25, unsigned short p_26)
{
    unsigned char l_61 = 1UL;
    short *l_63 = &g_50;
    unsigned *l_64 = &g_40;
    int *l_70 = &g_48;
    int **l_69 = &l_70;
    int **l_71 = (void*)0;
    union U0 l_86 = {255UL};
    unsigned char *l_88 = &l_86.f0;
    unsigned char *l_89 = &l_61;
    union U0 l_90 = {1UL};
    int *l_91 = &g_46;
    (*l_69) = func_51(g_57, func_58(l_61, p_24), l_63, l_64, &g_48);

    ;
lbl_444:
    (*l_91) = (((p_26 != ((*l_63) = (g_57.f2 & (l_71 != g_72)))) & (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_24, (!(safe_lshift_func_int16_t_s_u(p_25, g_42))))), (safe_lshift_func_uint16_t_u_u(func_33(((*l_89) ^= ((*l_88) = (safe_lshift_func_int16_t_s_u(func_33(g_57.f0, (safe_lshift_func_uint16_t_u_u((g_87 = func_33(p_26, g_57.f2, g_48, p_25, l_86)), p_24)), g_2, g_57.f0, l_86), 5)))), g_42, g_57.f0, p_26, l_90), p_24))))) & g_42);
    for (p_24 = 0; (p_24 <= (-18)); p_24 = safe_sub_func_uint16_t_u_u(p_24, 4))
    {
        unsigned short l_428 = 65535UL;
        int l_458 = 5L;
        for (p_26 = (-27); (p_26 >= 46); ++p_26)
        {
            int l_419 = (-1L);
            int l_420 = 9L;
            for (l_86.f1 = (-11); (l_86.f1 <= (-13)); l_86.f1--)
            {
                (*g_72) = (void*)0;

                ;
            }

                        for (p_23 = (-25); (p_23 == 23); ++p_23)
            {
                unsigned l_104 = 6UL;
                char *l_454 = (void*)0;
                char *l_455 = &l_86.f2;
                union U0 l_456 = {0x5DL};
                unsigned short *l_457 = (void*)0;
                for (l_61 = 0; (l_61 > 4); l_61++)
                {
                    char l_423 = (-1L);
                    unsigned char ***l_443 = &g_441;
                    unsigned char ****l_442 = &l_443;
                    for (l_86.f3 = 0; (l_86.f3 >= 6); l_86.f3 = safe_add_func_int32_t_s_s(l_86.f3, 3))
                    {
                        unsigned *l_120 = &g_87;
                        unsigned *l_439 = &g_42;
                        (*l_91) = l_104;
                        (*l_69) = func_58((((!(safe_mod_func_uint32_t_u_u((&g_42 == (void*)0), 0x7753CA6AL))) > (l_420 = ((safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((g_418 &= (safe_add_func_int16_t_s_s((-1L), ((*g_72) == ((*l_69) = func_113(func_117(&p_24, ((*l_120) = g_40)), g_230, &g_42)))))) ^ 0x8CC00561L), 0x46581DE7L)) > l_419), 4)) < 0xE4E1L))) >= 1L), p_24);

                        ;
                        (*l_69) = (*g_72);

                        ;
                        p_22 ^= ((safe_sub_func_uint16_t_u_u((g_418 & l_423), p_23)) < (((+(safe_add_func_uint16_t_u_u(g_363, (g_2 == p_25)))) != (safe_rshift_func_uint8_t_u_u(l_428, (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u(((*l_439) = (((*l_64) = (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_23, (func_33((safe_rshift_func_int16_t_s_s(2L, p_26)), g_335.f0, p_24, g_48, l_90) || (*g_230)))), g_87))) <= l_428)), p_23)), 2))))) || 0x57668B80L));
                    }

                                        if ((g_440 == ((*l_442) = &g_441)))
                    {
                        short l_447 = 0xC8E5L;
                        if (l_90.f0)
                            goto lbl_444;
                        g_48 |= ((safe_sub_func_int16_t_s_s(((3UL < 0x53FE0DA0L) & ((*l_91) = 0x907D6A33L)), g_335.f2)) <= l_447);
                        return l_86;


                                            }
                    else
                    {
                        p_22 &= 0L;
                    }
                    (*l_69) = &p_22;

                    ;
                }
                l_458 = (safe_rshift_func_uint16_t_u_s(((*l_91) = ((p_23 > g_42) != (safe_mod_func_int8_t_s_s(0xC8L, func_33(p_24, l_428, l_419, ((safe_lshift_func_int8_t_s_u(((*l_455) = 0x5DL), (**g_441))) < (0xDA634267L && l_419)), l_456))))), 5));
                (*g_72) = func_117(&g_418, p_26);
            }

                    }
        for (g_48 = (-1); (g_48 >= 13); g_48 = safe_add_func_int16_t_s_s(g_48, 1))
        {
            int l_499 = 0xB2A8AC25L;
            unsigned short l_508 = 0x4B0BL;
            unsigned char ****l_517 = &g_440;
            char *l_522 = &g_335.f2;
            char **l_521 = &l_522;
            if (p_25)
            {
                int *l_463 = &g_268;
                unsigned char *l_482 = &l_61;
                unsigned short *l_513 = (void*)0;
                if (((p_23 > (0xFEL & ((((p_25 ^ (!((*l_63) |= p_22))) == (**g_441)) & p_25) > (safe_div_func_int32_t_s_s(g_46, ((*l_463) |= p_23)))))) > 1L))
                {
                    int **l_479 = &l_91;
                    for (g_340 = (-11); (g_340 == 23); ++g_340)
                    {
                        unsigned char *l_466 = (void*)0;
                        char *l_477 = &l_90.f2;
                        int l_478 = 5L;
                        p_22 &= ((((*l_91) && ((void*)0 == l_466)) || (safe_sub_func_int8_t_s_s(g_268, (p_23 ^ l_458)))) < (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((*l_477) ^= p_25), l_478)) & (&l_463 == l_479)), p_26)), g_42)), (-9L))));

                                            }
                    (*g_72) = func_58((*g_157), ((*l_63) = p_25));

                    ;
                    (*g_402) = (*g_402);
                }
                else
                {
                    return l_90;


                                    }

                ;
                for (g_57.f0 = 0; (g_57.f0 <= 14); ++g_57.f0)
                {
                    int l_485 = 0x826A9580L;
                    if ((l_482 != &p_23))
                    {
                        (*g_72) = &p_22;

                        ;
                        l_485 &= ((safe_sub_func_int16_t_s_s(0L, g_57.f2)) ^ l_428);
                        (*g_73) = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((p_23 >= (*g_73)), (((*g_73) || (0x0CEBL < g_87)) >= 0x8446L))), (((((p_25 != (safe_mod_func_int8_t_s_s(0L, p_23))) != g_418) < l_458) == l_485) | p_23))) >= p_25);
                        (**g_72) = p_22;
                    }
                    else
                    {
                        short l_495 = 0x3DFAL;
                        unsigned short *l_502 = (void*)0;
                        char *l_503 = &g_335.f2;
                        (*l_91) &= ((g_289 = (((~(p_25 & ((((safe_unary_minus_func_int8_t_s(((*l_503) = (safe_sub_func_int32_t_s_s(l_495, (((l_499 = ((safe_lshift_func_uint8_t_u_u(p_24, 5)) != g_498)) ^ (safe_add_func_int8_t_s_s(0xC8L, (g_335.f0 || (0xBD83L >= g_42))))) <= (l_502 == (void*)0))))))) != g_306) || p_25) != 0xBFB1L))) ^ p_25) != p_24)) > p_24);

                                                (*l_91) &= (p_26 < ((g_149 ^ (l_499 & p_24)) || l_428));
                        if (p_23)
                            break;
                    }
                }

                ;
                p_22 |= ((!(safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((g_57.f2 = g_306), 6)), l_508))) && ((*l_64) &= 1UL));

                                for (g_306 = (-5); (g_306 > 23); g_306++)
                {
                    int l_511 = 0xDAA44A33L;
                    char *l_512 = &g_340;
                    (*g_72) = (*g_72);
                    (*l_91) ^= ((((l_458 == (l_511 & ((*l_512) = (0x91L ^ (l_511 && (0xC1B60DAFL >= p_25)))))) & ((void*)0 != l_513)) < p_22) >= p_23);
                }
            }
            else
            {
                unsigned l_514 = 0x0825FA09L;
                unsigned char *****l_518 = &l_517;
                if (l_514)
                    break;
                (*g_72) = (*g_72);
                (*g_72) = func_58((+(*g_157)), g_335.f2);

                ;
                (*g_72) = func_58(((*l_64) = (safe_lshift_func_int8_t_s_u((&g_440 == ((*l_518) = l_517)), 1))), g_48);
            }

                        ;
            for (g_46 = 0; (g_46 == (-12)); g_46--)
            {
                char ***l_523 = &l_521;
                unsigned l_524 = 0x77F1D14FL;
                int *l_525 = &l_458;
                int *l_526 = &g_268;
                unsigned short *l_527 = &l_428;
                (*l_523) = l_521;
                (*l_526) ^= ((*l_525) ^= (g_46 && ((((&l_63 != (void*)0) & ((p_23 = p_25) & ((p_24 && (g_498 = l_524)) | (+1L)))) ^ ((0x48L == (0xCB0CL && p_24)) != g_231)) && p_26)));
                (*l_526) &= (((*l_527) = (((*g_157) | (p_22 != (-7L))) >= g_57.f2)) & l_458);
            }
            for (l_428 = 22; (l_428 != 8); --l_428)
            {
                if (p_24)
                    break;
                (*g_72) = func_58((*l_91), (g_306 = g_149));

                ;
            }
            (*l_91) = 0L;
        }
    }
    return l_90;


    }







static unsigned char func_33(unsigned char p_34, unsigned short p_35, unsigned p_36, int p_37, union U0 p_38)
{
    unsigned *l_44 = &g_40;
    int *l_45 = &g_46;
    int *l_47 = &g_48;
    (*l_45) = (g_40 || ((void*)0 != l_44));
    (*l_47) |= g_46;
    return p_38.f0;
}







static int * func_51(union U0 p_52, unsigned * p_53, short * p_54, unsigned * p_55, int * p_56)
{
    int l_67 = 0x4BF7D69FL;
    int *l_68 = (void*)0;
    (*p_56) = (safe_add_func_int32_t_s_s((&g_50 == p_54), l_67));
    return l_68;


}







static unsigned * func_58(unsigned p_59, short p_60)
{
    int *l_62 = &g_48;
    l_62 = l_62;
    return l_62;


}







static int * func_113(int * p_114, unsigned char * p_115, unsigned * p_116)
{
    int l_241 = 1L;
    union U0 l_266 = {249UL};
    int l_271 = 0xEF52FE4DL;
    unsigned short *l_396 = (void*)0;
    char l_414 = 0L;
    char l_417 = (-10L);
    for (g_127 = 0; (g_127 >= 18); g_127++)
    {
        unsigned char **l_236 = &g_230;
        int l_251 = 0x5F798932L;
        union U0 *l_280 = &l_266;
        int l_307 = (-4L);
        int l_332 = 0x875AC5E7L;
        short *l_336 = (void*)0;
        short *l_337 = (void*)0;
        short *l_338 = &g_50;
        short *l_339 = &g_306;
        int ***l_399 = &g_72;
        int l_412 = 0x2930BF4EL;
        unsigned char l_415 = 1UL;
        for (g_231 = 0; (g_231 == 8); ++g_231)
        {
            unsigned char ***l_237 = &l_236;
            int l_240 = 0xE918E3CBL;
            int *l_242 = &g_46;
            unsigned char l_250 = 0x81L;
            int *l_252 = &l_251;
            (*l_237) = l_236;
            (*l_252) = (safe_sub_func_uint8_t_u_u((l_240 > (g_57.f2 = l_241)), (((*l_242) = (-1L)) && (safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((9UL != l_241) >= ((*g_157) = l_241)), ((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(g_42)), l_250)) == l_251))) == l_251), (*p_116))))));

                        for (g_40 = 0; (g_40 != 13); g_40++)
            {
                int l_257 = (-6L);
                union U0 **l_258 = (void*)0;
                union U0 *l_260 = &g_57;
                union U0 **l_259 = &l_260;
                (*l_252) = (safe_lshift_func_uint8_t_u_s((l_241 = (*g_230)), l_257));
                (*l_259) = &g_57;
            }
            if ((*l_242))
                continue;
        }
        for (l_251 = 0; (l_251 == (-7)); --l_251)
        {
            short l_265 = 5L;
            int *l_267 = &g_268;
            (*l_267) |= func_33(((safe_add_func_uint8_t_u_u(l_265, l_241)) <= l_265), g_46, (&g_72 == &g_72), ((((!0xF77066E7L) == 8UL) | ((*g_230) > (*p_115))) & l_251), l_266);
            for (g_149 = (-15); (g_149 >= 16); g_149++)
            {
                (*l_267) &= l_266.f2;
            }
        }
        if (l_271)
        {
            int *l_273 = &g_268;
            int **l_272 = &l_273;
            int *l_275 = &g_46;
            int **l_274 = &l_275;
            short *l_277 = (void*)0;
            short **l_276 = &l_277;
            short ***l_278 = &l_276;
            union U0 *l_279 = &l_266;
            (*l_274) = ((*l_272) = (*g_72));



            (*l_278) = l_276;
            l_280 = l_279;
        }
        else
        {
            unsigned char l_308 = 246UL;
            int l_309 = 1L;
            int *l_310 = (void*)0;
            int *l_311 = (void*)0;
            int *l_312 = (void*)0;
            int *l_313 = &l_251;
            for (g_42 = 25; (g_42 > 52); ++g_42)
            {
                union U0 *l_283 = &l_266;
                union U0 **l_284 = &l_280;
                unsigned short *l_285 = &g_149;
                unsigned short *l_286 = (void*)0;
                unsigned short *l_287 = (void*)0;
                unsigned short *l_288 = &g_289;
                int *l_292 = (void*)0;
                int *l_293 = &g_46;
                short *l_304 = &g_50;
                short *l_305 = &g_306;
                (*l_284) = l_283;
                (*l_293) = (((*l_288) ^= ((*l_285) |= g_2)) && (safe_rshift_func_int8_t_s_u((&g_230 == (void*)0), ((*g_230) = l_241))));
                l_307 |= ((safe_mod_func_uint16_t_u_u((+(safe_div_func_int16_t_s_s(((*l_305) ^= ((*l_293) < (safe_sub_func_int16_t_s_s(0x9793L, (+((*l_304) = (safe_add_func_uint8_t_u_u(((**l_236) = (*g_230)), (safe_rshift_func_uint8_t_u_s((l_251 != (g_42 != ((*l_288) = l_241))), 2)))))))))), (l_266.f2 && l_271)))), l_241)) | 0L);
            }
            if (l_308)
                break;
            (*l_313) &= (l_309 != (+(*g_230)));
        }
        if ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(func_33(l_251, (((((*l_339) = ((*p_116) < (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*l_338) = ((safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_251, 0x905622B1L)), ((+l_307) & (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((+func_33(((*g_230) = func_33((*p_115), l_251, (safe_sub_func_uint8_t_u_u(l_332, ((((safe_div_func_uint16_t_u_u(g_42, 0xABBAL)) ^ (-1L)) >= (*g_157)) & (*g_230)))), l_266.f2, (*l_280))), l_251, l_266.f2, l_266.f0, g_335)), 8)), 1L))))) != (*g_157))), l_332)), 1L)))) & g_149) | g_340) < l_307), (*g_157), g_127, g_335), g_268)), l_271)))
        {
            unsigned short *l_341 = (void*)0;
            int *l_342 = &l_307;
            int l_384 = 0L;
            (*l_342) = (l_341 == (void*)0);
            for (g_231 = 0; (g_231 >= 51); ++g_231)
            {
                unsigned char l_350 = 0xA5L;
                (*l_342) ^= func_33((*g_230), g_87, (*g_157), g_48, g_335);
                for (g_306 = 2; (g_306 == (-7)); g_306 = safe_sub_func_int8_t_s_s(g_306, 3))
                {
                    unsigned char ***l_347 = &l_236;
                    unsigned char l_353 = 0UL;
                    unsigned *l_375 = &g_40;
                }
                for (g_335.f0 = 0; (g_335.f0 != 10); ++g_335.f0)
                {
                    (*l_342) = l_350;
                }
                for (l_266.f1 = 0; (l_266.f1 < (-20)); l_266.f1 = safe_sub_func_uint32_t_u_u(l_266.f1, 9))
                {
                    short l_391 = 8L;
                    int **l_392 = &l_342;
                    (*l_342) = (l_391 ^ g_363);
                    (*l_392) = (void*)0;

                    ;
                    return (*g_72);


                }

                            }
            p_114 = (*g_72);
            if ((l_251 ^= (*l_342)))
            {
                unsigned char l_393 = 2UL;
                unsigned short **l_397 = &l_396;
                unsigned char l_398 = 250UL;
                (*l_342) = (((~((*p_116) |= (0x16L && (~((*g_157) >= l_393))))) ^ ((0xB26FL >= l_251) & func_33(((((*p_115) < (l_341 == ((*l_397) = l_396))) > func_33((*g_230), g_306, l_398, g_335.f0, (*l_280))) ^ 0xAFF0C2FFL), g_231, (*g_157), (*l_342), g_57))) > 255UL);
                return (*g_72);


            }
            else
            {
                return p_114;


            }
        }
        else
        {
            union U0 **l_404 = &g_403;
            int *l_405 = &l_241;
            int *l_413 = &l_307;
            union U0 l_416 = {0xDEL};
            l_307 = ((*l_405) = (func_33((0x19L && l_251), l_266.f2, (l_399 == l_399), (safe_sub_func_uint16_t_u_u((g_402 == l_404), ((*g_230) <= (*g_230)))), (*l_280)) | l_251));
            g_268 &= ((((func_33((l_241 = (*g_230)), ((safe_div_func_int32_t_s_s((((l_414 = ((*l_413) = (func_33((((safe_sub_func_uint32_t_u_u(0x2E93F132L, (safe_add_func_uint32_t_u_u((((void*)0 != &g_73) != func_33((*g_230), g_335.f0, (*g_157), g_87, (*l_280))), l_412)))) ^ 0x94L) >= g_340), g_363, (*p_116), g_231, l_266) != l_266.f2))) == l_271) <= l_266.f2), 0x746557D3L)) >= g_363), (*p_116), l_415, l_416) && 0x7293L) != g_289) & g_127) >= l_417);
        }
    }
    return p_116;


}







static int * func_117(short * p_118, unsigned p_119)
{
    short l_121 = 0x6825L;
    unsigned *l_122 = (void*)0;
    unsigned *l_123 = (void*)0;
    unsigned *l_124 = &g_40;
    union U0 l_125 = {0x44L};
    unsigned short *l_126 = &g_127;
    int l_137 = (-1L);
    int l_140 = 0L;
    unsigned short l_145 = 0x4A1BL;
    unsigned l_154 = 0x01A4A5B4L;
    int l_159 = 0x41B9AD14L;
    int *l_172 = &l_159;
    int **l_174 = &l_172;
    int ***l_173 = &l_174;
    union U0 l_189 = {0xFDL};
    int l_225 = 9L;
lbl_184:
    if (func_33(g_87, ((*l_126) &= (func_33(g_48, (l_121 <= (p_119 | ((void*)0 == p_118))), ((*l_124) |= l_121), (l_124 == (void*)0), l_125) | p_119)), g_50, l_121, g_57))
    {
        int *l_128 = &g_46;
        int **l_135 = &l_128;
        (*l_128) = p_119;
        (*l_128) = func_33((safe_sub_func_uint16_t_u_u((*l_128), (*l_128))), g_48, ((*l_124) = p_119), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_127 || ((l_128 == l_128) && 4294967289UL)), (*p_118))), g_2)), l_125);
        (*l_135) = (*g_72);


    }
    else
    {
        char l_136 = (-1L);
        union U0 l_156 = {0x5FL};
        short *l_158 = &g_50;
        if (p_119)
        {
            l_136 &= (l_125.f2 > l_125.f2);
lbl_167:
            l_137 = p_119;
        }
        else
        {
            short *l_146 = &l_121;
            int l_147 = 0x8921B677L;
            unsigned short *l_148 = &g_149;
            int l_150 = 0x99908823L;
            int l_151 = 0x4CEA6EDCL;
            union U0 l_152 = {0x08L};
            char *l_153 = (void*)0;
            int *l_155 = &l_150;
            int **l_164 = &l_155;
            int *l_166 = &l_151;
            int **l_165 = &l_166;
            (*l_155) = (((safe_add_func_uint8_t_u_u(l_140, ((g_57.f2 = (func_33(p_119, p_119, (l_137 = func_33(g_46, ((*l_126) = p_119), (safe_rshift_func_uint16_t_u_u(((l_136 < ((*l_146) = (g_50 = l_145))) <= g_87), (l_150 &= ((*l_148) |= (l_147 |= 65535UL))))), l_151, l_152)), g_2, l_152) || 0UL)) & p_119))) ^ l_154) ^ l_154);

                        (*l_165) = ((*l_164) = (*g_72));



        }
        if (g_149)
            goto lbl_167;
    }
    if (func_33((safe_rshift_func_uint16_t_u_u(((g_48 ^= (safe_div_func_int32_t_s_s((((0xB14BL > p_119) > g_127) > ((*l_172) = (&g_40 != (void*)0))), (l_121 || (&g_50 == &g_50))))) & (((*l_173) = (void*)0) != (void*)0)), g_46)), g_57.f0, (*g_157), p_119, l_125))
    {
        unsigned l_181 = 4294967295UL;
        int l_194 = 0xEE892D9DL;
        int *l_202 = (void*)0;
        int *l_203 = &l_137;
        if ((safe_lshift_func_int16_t_s_s((0x85L == g_42), ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_181, 2)), func_33(g_87, (safe_sub_func_uint16_t_u_u(p_119, 0L)), p_119, p_119, l_125))) == 0L))))
        {
            unsigned short l_187 = 5UL;
            int *l_188 = &l_125.f1;
            int l_201 = 1L;
            if (g_57.f2)
                goto lbl_184;
            g_46 &= l_181;
            if ((0x47C0CCACL && (safe_mod_func_uint8_t_u_u((func_33(func_33(l_187, (0L < 1L), p_119, ((*l_188) = l_187), l_189), l_181, p_119, p_119, g_57) || 0x849AL), g_127))))
            {
                int *l_190 = (void*)0;
                return l_190;


            }
            else
            {
                unsigned *l_192 = (void*)0;
                unsigned **l_191 = &l_192;
                int l_206 = 0xD10C2188L;
                l_194 = ((g_193 = ((*l_191) = &p_119)) != &l_154);

                ;
                ;
                (*l_172) = ((((safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(l_201, ((l_202 = (void*)0) != l_203))), (((*l_203) = 0L) && (((safe_mod_func_uint16_t_u_u(((*l_126) ^= g_42), 0x26BEL)) ^ (l_206 < (safe_sub_func_int16_t_s_s(7L, (safe_sub_func_int32_t_s_s(p_119, p_119)))))) < g_87)))), 0x57B996F1L)) < g_48) <= g_2) == p_119);
                (*l_172) = p_119;
            }

            ;
        }
        else
        {
            int *l_211 = &l_137;
            int **l_212 = (void*)0;
            int **l_213 = &l_203;
            (*l_213) = l_211;
            (**l_213) = p_119;
            (*l_211) = (~p_119);
        }


    }
    else
    {
        int **l_214 = &l_172;
        union U0 l_217 = {2UL};
        unsigned *l_218 = &g_40;
        short *l_220 = &l_121;
        short **l_219 = &l_220;
        unsigned char *l_223 = &l_125.f0;
        union U0 l_224 = {0xC5L};
        int l_226 = 0x30CB797AL;
        int *l_227 = &l_137;
        (*l_214) = (*g_72);


        if (l_121)
            goto lbl_228;
lbl_229:
        l_226 ^= ((*p_118) & (((~(((*l_214) = func_51(l_217, l_218, ((*l_219) = &g_50), &g_42, func_58((+((safe_lshift_func_int16_t_s_u((0x69F80F1BL <= (func_33(((*l_223) = l_217.f2), p_119, (*g_157), g_57.f0, l_224) | 1UL)), p_119)) > l_225)), g_50))) == (*g_72))) == 0x161F60A7L) == p_119));

        ;
        ;
lbl_228:
        (*l_227) |= (g_2 < (((*l_214) = (*g_72)) != l_227));
        if (g_46)
            goto lbl_229;
    }


    ;

    return (*g_72);



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_335.f2, "g_335.f2", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
