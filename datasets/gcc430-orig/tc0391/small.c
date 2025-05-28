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



static short g_7 = 1L;
static int g_14 = 0x963BA20BL;
static volatile unsigned g_36 = 4294967290UL;
static unsigned short g_49 = 65529UL;
static short g_67 = 1L;
static short *g_66 = &g_67;
static unsigned g_103 = 0UL;
static int g_120 = 1L;
static int g_122 = 0x2FE07384L;
static int * volatile g_121 = &g_122;
static unsigned g_135 = 1UL;
static unsigned g_140 = 0x2E2EE0BDL;
static int g_142 = 0L;
static int * volatile g_141 = &g_142;
static int * volatile g_145 = &g_142;
static short **g_148 = &g_66;
static short *** volatile g_147 = &g_148;
static int g_165 = 0x04CE6FA9L;
static char g_173 = 0xF1L;
static unsigned char g_177 = 0xA4L;
static volatile unsigned char g_281 = 0UL;
static int g_343 = 1L;
static unsigned short g_352 = 0x0A69L;
static unsigned short * volatile g_357 = &g_352;
static unsigned short * volatile *g_356 = &g_357;
static unsigned short * volatile **g_355 = &g_356;
static unsigned short **g_359 = (void*)0;
static unsigned short ***g_358 = &g_359;
static int *g_379 = &g_343;
static int ** volatile g_378 = &g_379;
static unsigned char *g_384 = &g_177;
static unsigned char ** volatile g_383 = &g_384;
static int ** volatile g_414 = &g_379;
static short g_458 = 4L;
static int ** volatile g_483 = &g_379;
static int ** volatile g_484 = &g_379;
static int g_618 = (-1L);
static volatile int g_623 = 1L;
static volatile short g_626 = 0x05F4L;
static volatile char g_630 = 0x6EL;
static short g_656 = 0x899BL;
static short *g_655 = &g_656;
static int g_967 = 0xAED675A7L;
static int *g_976 = &g_165;
static int ** volatile g_981 = &g_976;
static unsigned char g_1078 = 0x61L;



static char func_1(void);
static int * func_2(short p_3, int * p_4, int * p_5);
static int * func_8(unsigned p_9, unsigned p_10);
static unsigned func_12(int p_13);
static int func_39(short * p_40, short * p_41, int * p_42);
static short * func_43(short p_44, short * p_45);
static unsigned short func_46(unsigned short p_47);
static short ** func_50(unsigned p_51, unsigned short * p_52, unsigned p_53, char p_54);
static int func_56(short p_57, short ** p_58, int p_59);
static unsigned func_60(int p_61, short * p_62, unsigned p_63);
static char func_1(void)
{
    short *l_6 = &g_7;
    int l_11 = 0x6A756A33L;
    int l_15 = 0x6D4A0D46L;
    int **l_1110 = &g_976;
    (*l_1110) = func_2(((*l_6) |= 1L), func_8(l_11, (l_11 & func_12((l_15 = g_14)))), g_976);
    (*g_981) = func_2((*g_655), (*l_1110), (*l_1110));
    return g_173;
}







static int * func_2(short p_3, int * p_4, int * p_5)
{
    unsigned char **l_977 = &g_384;
    unsigned char ***l_978 = &l_977;
    short *l_987 = &g_67;
    int l_1000 = 0x0AAD10D6L;
    unsigned l_1024 = 0x7D29C3FCL;
    unsigned short **l_1104 = (void*)0;
    if ((((*l_978) = l_977) == &g_384))
    {
        char l_989 = 0x3EL;
        int *l_990 = &g_165;
        for (g_122 = (-8); (g_122 <= 20); ++g_122)
        {
            short l_1001 = 8L;
            (*g_981) = p_4;
            if ((*p_4))
                continue;
            for (g_352 = 0; (g_352 < 16); ++g_352)
            {
                int **l_984 = &g_379;
                (*l_984) = (void*)0;
                for (g_49 = 0; (g_49 >= 5); g_49 = safe_add_func_uint16_t_u_u(g_49, 5))
                {
                    short *l_988 = &g_7;
                    int l_995 = 0L;
                    if (((&p_3 != l_987) == p_3))
                    {
                        return l_990;
                    }
                    else
                    {
                        unsigned char l_1002 = 0x42L;
                        (*l_990) = (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((*g_121) && ((**g_383) | l_995)) ^ (((-8L) & (safe_add_func_int8_t_s_s(((p_3 < 0x96F67719L) != (((l_1000 = (safe_sub_func_uint8_t_u_u((0L & 0x6E4074CCL), (*g_384)))) | l_1001) || p_3)), 0xCFL))) >= l_1002)), 4)), (*g_655)));
                        (*l_984) = &l_1000;
                    }
                }
                (*p_4) &= l_1000;
                (*g_484) = p_4;
            }
        }
    }
    else
    {
        unsigned l_1006 = 0xB270CE44L;
        int *l_1009 = &g_122;
        int l_1046 = 0xFD84C814L;
        if ((*p_4))
        {
            unsigned l_1003 = 0x7718B64AL;
            (*g_145) |= ((g_67 < (safe_mod_func_uint32_t_u_u(p_3, 0xBA105096L))) >= l_1006);
            (*p_5) = (*p_5);
            return p_5;
        }
        else
        {
            unsigned *l_1008 = (void*)0;
            unsigned **l_1007 = &l_1008;
            int l_1025 = 3L;
            char l_1027 = 0L;
            unsigned l_1053 = 0xE7A1B7E4L;
            short *l_1065 = &g_458;
            unsigned char l_1088 = 0x41L;
            char l_1102 = 0L;
            unsigned *l_1103 = &l_1024;
            int **l_1105 = &g_379;
            int **l_1106 = &g_379;
            char *l_1107 = &g_173;
            char *l_1108 = (void*)0;
            unsigned char **l_1109 = &g_384;
            if ((((*l_987) = p_3) && (p_5 != ((*l_1007) = &g_103))))
            {
                int **l_1010 = &g_379;
                (*l_1010) = l_1009;
            }
            else
            {
                unsigned l_1021 = 0x79746DD2L;
                short **l_1037 = &g_655;
                int l_1074 = 0x533C9541L;
                int *l_1092 = &l_1046;
                if (((*l_1009) = 0x9B8FBCA8L))
                {
                    char l_1013 = 0x95L;
                    char l_1014 = 0L;
                    char *l_1026 = &l_1014;
                    unsigned short *l_1032 = &g_49;
                    int l_1033 = 0x3F854D8CL;
                    int *l_1038 = &l_1000;
                    int *l_1039 = &g_967;
                    int *l_1040 = &g_142;
                    int *l_1041 = &l_1025;
                    int *l_1042 = &g_14;
                    int *l_1043 = &g_142;
                    int *l_1044 = &l_1025;
                    int *l_1045 = &g_967;
                    int *l_1047 = &l_1033;
                    int *l_1048 = &g_165;
                    int *l_1049 = (void*)0;
                    int *l_1050 = &g_142;
                    int *l_1051 = &l_1000;
                    int *l_1052 = &g_967;
                    (*l_1009) ^= (*g_976);
                    if ((safe_add_func_uint16_t_u_u(1UL, (((*l_1026) = (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((*l_987) ^= l_1021), (safe_sub_func_int32_t_s_s(((*g_976) = (0L == l_1024)), l_1013)))), (l_1000 & (l_1025 < p_3))))) <= (l_1013 ^ l_1027)))))
                    {
                        int **l_1028 = &l_1009;
lbl_1029:
                        (*g_976) = (*p_4);
                        (*l_1028) = (*g_981);
                        if (l_1006)
                            goto lbl_1029;
                        l_1000 ^= ((*p_4) = (*g_145));
                    }
                    else
                    {
                        unsigned *l_1034 = &l_1021;
                        (*p_5) = 0x9ED2F006L;
                        (*g_141) &= (*l_1009);
                        (*g_976) ^= (0UL >= (safe_sub_func_uint32_t_u_u((p_3 & l_1021), (-1L))));
                        return p_4;
                    }
                    --l_1053;
                }
                else
                {
                    unsigned char l_1056 = 0x10L;
                    int **l_1093 = &g_379;
lbl_1091:
                    if (((*p_4) = (l_1024 && (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((**g_356) = (safe_lshift_func_uint8_t_u_u(p_3, (**g_383)))), l_1021)), (*l_1009))) > p_3) && 3UL))))
                    {
                        int *l_1066 = &g_142;
                        int *l_1067 = &l_1025;
                        int *l_1068 = &l_1025;
                        int *l_1069 = (void*)0;
                        int *l_1070 = &g_14;
                        int *l_1071 = &l_1046;
                        int *l_1072 = &g_165;
                        int *l_1073 = (void*)0;
                        int *l_1075 = &g_165;
                        int *l_1076 = &g_967;
                        int *l_1077 = &g_343;
                        unsigned char *l_1085 = &g_1078;
                        (*p_4) = (*g_121);
                        if (l_1021)
                            goto lbl_1091;
                        --g_1078;
                        (*l_1070) |= ((safe_add_func_uint8_t_u_u((**g_383), (*l_1072))) | (safe_mod_func_uint32_t_u_u(((*g_384) >= ((*l_1085) = 1UL)), p_3)));
                    }
                    else
                    {
                        int *l_1086 = &l_1046;
                        int *l_1087 = (void*)0;
                        (*l_1009) = (4294967295UL ^ 0xE62C4EECL);
                        l_1088++;
                    }
                    (*l_1093) = l_1092;
                }
                for (g_7 = 0; (g_7 < (-12)); g_7--)
                {
                    l_1046 |= (*p_5);
                }
            }
            for (g_1078 = 0; (g_1078 == 3); ++g_1078)
            {
                return (*g_981);
            }
            (*l_1106) = func_8((safe_sub_func_int32_t_s_s((**g_981), (*p_4))), g_142);
        }
    }
    return p_5;
}







static int * func_8(unsigned p_9, unsigned p_10)
{
    int *l_725 = &g_14;
    int **l_726 = &l_725;
    short *l_741 = &g_656;
    int l_744 = 0x39D021F3L;
    int l_833 = 1L;
    int l_858 = (-1L);
    unsigned l_906 = 4294967295UL;
    unsigned short ***l_969 = &g_359;
    unsigned short ****l_970 = &g_358;
    char *l_971 = &g_173;
    int *l_972 = &l_744;
    short *l_973 = (void*)0;
    short *l_974 = &g_458;
    int *l_975 = &g_967;
    (*l_725) |= (+(((*g_655) = p_9) ^ (***g_355)));
    (*l_726) = (void*)0;
    for (g_14 = 15; (g_14 == 14); g_14--)
    {
        unsigned l_735 = 0UL;
        int *l_738 = &g_165;
        int l_785 = 0x357C3A35L;
        int l_802 = 0x1A031D18L;
        int l_811 = 0x1C60C0C0L;
        int l_823 = 5L;
        short l_842 = (-5L);
        int l_855 = 0x4C0E27DAL;
        int l_877 = 0xFB32BE0FL;
        int l_901 = 0x56551CF8L;
        unsigned short l_964 = 0x65B0L;
        if ((*g_141))
            break;
        if (p_10)
            continue;
        if ((safe_add_func_uint32_t_u_u(((!((**g_356)--)) | (p_9 <= (0xBFL || g_173))), (safe_unary_minus_func_uint8_t_u((*g_384))))))
        {
            int *l_734 = &g_165;
            short *l_739 = &g_656;
            l_735 = ((*l_734) = p_10);
            for (g_618 = 0; (g_618 >= 28); g_618 = safe_add_func_uint16_t_u_u(g_618, 7))
            {
                (*l_726) = l_738;
                (**l_726) = (p_10 | (((*l_734) != (*l_725)) && (*l_734)));
                (**l_726) &= (*g_141);
            }
            if (p_9)
                break;
        }
        else
        {
            unsigned char l_740 = 0x55L;
            short *l_748 = &g_67;
            char *l_752 = &g_173;
            int l_757 = (-7L);
            int l_807 = 8L;
            int l_829 = 0xEF9496C1L;
            int l_870 = 0xB116B153L;
            int *l_909 = &l_823;
            int *l_910 = &g_343;
            int *l_911 = &l_785;
            int *l_912 = (void*)0;
            int *l_913 = &g_165;
            int *l_914 = &l_901;
            int *l_915 = &l_833;
            int *l_916 = &g_165;
            int *l_917 = &l_823;
            int *l_918 = &l_785;
            int *l_919 = (void*)0;
            int *l_920 = &l_901;
            int *l_921 = &l_858;
            int *l_922 = (void*)0;
            int *l_923 = &l_877;
            int *l_924 = &l_858;
            int *l_925 = &l_823;
            int *l_926 = &l_802;
            int *l_927 = &l_802;
            int *l_928 = &l_858;
            int *l_929 = &l_807;
            int *l_930 = &l_802;
            int *l_931 = (void*)0;
            int *l_932 = &g_142;
            int *l_933 = (void*)0;
            int *l_934 = &g_343;
            int *l_935 = &g_142;
            int *l_936 = &l_823;
            int *l_937 = (void*)0;
            int *l_938 = (void*)0;
            int *l_939 = (void*)0;
            int *l_940 = &l_811;
            int *l_941 = &l_802;
            int *l_942 = &g_343;
            int *l_943 = &l_829;
            int *l_944 = &l_877;
            int *l_945 = &l_855;
            int *l_946 = &l_829;
            int *l_947 = (void*)0;
            int *l_948 = (void*)0;
            int *l_949 = &g_343;
            int *l_950 = (void*)0;
            int *l_951 = &l_802;
            int *l_952 = &l_858;
            int *l_953 = &l_877;
            int *l_954 = &l_870;
            int *l_955 = &l_744;
            int *l_956 = &l_855;
            int *l_957 = &l_807;
            int *l_958 = &l_870;
            int *l_959 = &g_165;
            int *l_960 = &g_165;
            int *l_961 = &l_877;
            int *l_962 = &l_807;
            int *l_963 = (void*)0;
            if (((-9L) | l_740))
            {
                short *l_742 = &g_67;
                int *l_743 = &g_165;
                l_744 = func_39(l_741, l_742, l_743);
                if (p_9)
                    break;
            }
            else
            {
                char l_749 = 0x34L;
                int *l_754 = (void*)0;
                int l_797 = 1L;
                int l_808 = 0xAC0C862FL;
                int l_839 = 5L;
                int l_864 = 6L;
                for (g_343 = 0; (g_343 == (-29)); g_343 = safe_sub_func_uint8_t_u_u(g_343, 7))
                {
                    short *l_747 = &g_656;
                    int l_753 = (-1L);
                    int *l_755 = &g_142;
                    int *l_756 = &l_744;
                    int *l_758 = &g_165;
                    int *l_759 = (void*)0;
                    int *l_760 = &g_142;
                    int *l_761 = &l_753;
                    int *l_762 = &g_165;
                    int *l_763 = &g_142;
                    int *l_764 = &g_165;
                    int *l_765 = &g_142;
                    int *l_766 = &g_142;
                    int *l_767 = &g_142;
                    int *l_768 = &g_165;
                    int *l_769 = &l_744;
                    int *l_770 = &g_142;
                    int *l_771 = &l_744;
                    int *l_772 = &l_744;
                    int *l_773 = &l_753;
                    int *l_774 = &g_122;
                    int *l_775 = &g_122;
                    int *l_776 = &g_165;
                    int *l_777 = (void*)0;
                    int *l_778 = (void*)0;
                    int *l_779 = &g_165;
                    int *l_780 = &l_753;
                    int *l_781 = &l_744;
                    int *l_782 = &l_744;
                    int *l_783 = &g_165;
                    int *l_784 = &g_142;
                    int *l_786 = &g_142;
                    int *l_787 = &l_753;
                    int *l_788 = &l_785;
                    int *l_789 = &l_785;
                    int *l_790 = &l_744;
                    int *l_791 = &l_744;
                    int *l_792 = &g_142;
                    int *l_793 = (void*)0;
                    int *l_794 = &l_753;
                    int *l_795 = (void*)0;
                    int *l_796 = &g_165;
                    int *l_798 = &g_165;
                    int *l_799 = &g_142;
                    int *l_800 = &g_122;
                    int *l_801 = (void*)0;
                    int *l_803 = (void*)0;
                    int *l_804 = &l_802;
                    int *l_805 = &g_165;
                    int *l_806 = &l_744;
                    int *l_809 = &l_808;
                    int *l_810 = &l_808;
                    int *l_812 = (void*)0;
                    int *l_813 = &l_802;
                    int *l_814 = &l_753;
                    int *l_815 = (void*)0;
                    int *l_816 = &l_811;
                    int *l_817 = &l_744;
                    int *l_818 = &g_122;
                    int *l_819 = &l_807;
                    int *l_820 = &g_165;
                    int *l_821 = &l_753;
                    int *l_822 = &l_753;
                    int *l_824 = (void*)0;
                    int *l_825 = &l_802;
                    int *l_826 = &g_165;
                    int *l_827 = &l_808;
                    int *l_828 = &l_807;
                    int *l_830 = &g_165;
                    int *l_831 = &g_142;
                    int *l_832 = &g_122;
                    int *l_834 = &g_122;
                    int *l_835 = &l_823;
                    int *l_836 = &g_142;
                    int *l_837 = &l_753;
                    int *l_838 = &l_785;
                    int *l_840 = &l_807;
                    int *l_841 = (void*)0;
                    int *l_843 = (void*)0;
                    int *l_844 = &l_785;
                    int *l_845 = &l_807;
                    int *l_846 = &g_142;
                    int *l_847 = &l_785;
                    int *l_848 = (void*)0;
                    int *l_849 = &g_122;
                    int *l_850 = &g_165;
                    int *l_851 = (void*)0;
                    int *l_852 = &l_807;
                    int *l_853 = &l_829;
                    int *l_854 = (void*)0;
                    int *l_856 = (void*)0;
                    int *l_857 = &l_808;
                    int *l_859 = &g_165;
                    int *l_860 = &l_744;
                    int *l_861 = &l_823;
                    int *l_862 = &l_811;
                    int *l_863 = &l_807;
                    int *l_865 = &g_165;
                    int *l_866 = &l_855;
                    int *l_867 = &g_165;
                    int *l_868 = &l_833;
                    int *l_869 = (void*)0;
                    int *l_871 = &l_833;
                    int l_872 = 0x1DE01AF9L;
                    int *l_873 = (void*)0;
                    int *l_874 = &l_811;
                    int *l_875 = &l_829;
                    int *l_876 = &l_833;
                    int *l_878 = (void*)0;
                    int *l_879 = &l_811;
                    int *l_880 = &g_142;
                    int *l_881 = &l_808;
                    int *l_882 = &l_744;
                    int *l_883 = &l_829;
                    int *l_884 = &l_872;
                    int *l_885 = &l_858;
                    int *l_886 = (void*)0;
                    int l_887 = 0x904A2A2AL;
                    int *l_888 = &l_833;
                    int *l_889 = &l_753;
                    int *l_890 = &l_839;
                    int l_891 = 1L;
                    int *l_892 = &l_839;
                    int *l_893 = (void*)0;
                    int *l_894 = &l_753;
                    int *l_895 = &l_802;
                    int *l_896 = &l_807;
                    int *l_897 = &l_833;
                    int *l_898 = &l_753;
                    int *l_899 = &l_753;
                    int *l_900 = &l_823;
                    int *l_902 = &l_785;
                    int *l_903 = &l_807;
                    int *l_904 = &l_870;
                    int *l_905 = &l_802;
                    (*l_738) = ((((*g_121) == ((*l_738) ^ l_749)) & (safe_lshift_func_int8_t_s_s((((void*)0 == l_752) != l_753), 7))) | (*l_738));
                    l_755 = l_754;
                    ++l_906;
                    (*l_726) = &l_864;
                }
            }
            l_964--;
            (*l_914) = ((*l_952) = ((*l_738) < (*l_962)));
            (*l_738) = g_967;
        }
    }
    (*l_975) &= ((((*l_971) ^= (p_9 >= (safe_unary_minus_func_uint32_t_u((0UL >= (((*l_970) = l_969) != l_969)))))) >= ((!((*l_974) &= ((g_14 || 0x6EL) & func_39((**g_147), l_741, l_972)))) || (*l_972))) == p_10);
    return g_976;
}







static unsigned func_12(int p_13)
{
    int *l_16 = &g_14;
    int *l_17 = (void*)0;
    int *l_18 = &g_14;
    int *l_19 = &g_14;
    int *l_20 = &g_14;
    int l_21 = 6L;
    int *l_22 = &g_14;
    int l_23 = (-1L);
    int *l_24 = &g_14;
    int *l_25 = &l_21;
    int *l_26 = &l_23;
    int *l_27 = &g_14;
    int *l_28 = (void*)0;
    int *l_29 = (void*)0;
    int *l_30 = &l_23;
    int *l_31 = (void*)0;
    int *l_32 = &g_14;
    int *l_33 = &g_14;
    int *l_34 = &l_21;
    int *l_35 = &l_21;
    unsigned short *l_48 = &g_49;
    short **l_654 = &g_66;
    --g_36;
    (*l_27) = func_39(((*l_654) = func_43((((void*)0 == &l_21) <= func_46(((*l_48) |= p_13))), l_48)), (g_655 = l_48), &l_21);
    return (*l_18);
}







static int func_39(short * p_40, short * p_41, int * p_42)
{
    unsigned l_659 = 0x0D080C8FL;
    int l_664 = 0xFF648C51L;
    int l_665 = 0x6CCA64ABL;
    int l_672 = 0xB469A38AL;
    int l_699 = (-2L);
    unsigned l_714 = 0x018CC115L;
    if ((safe_sub_func_uint16_t_u_u(l_659, l_659)))
    {
        int **l_660 = &g_379;
        (*l_660) = p_42;
    }
    else
    {
        int *l_661 = &g_165;
        int *l_662 = &g_142;
        int *l_663 = &g_165;
        int *l_666 = (void*)0;
        int *l_667 = (void*)0;
        int *l_668 = &g_142;
        int l_669 = 2L;
        int *l_670 = &g_165;
        int *l_671 = &g_165;
        int *l_673 = (void*)0;
        int *l_674 = &g_343;
        int *l_675 = &l_665;
        int *l_676 = &l_669;
        int *l_677 = (void*)0;
        int *l_678 = &g_343;
        int *l_679 = &g_14;
        int *l_680 = &l_669;
        int *l_681 = &l_672;
        int *l_682 = &l_664;
        int l_683 = 5L;
        int *l_684 = &g_122;
        int *l_685 = &g_165;
        int *l_686 = (void*)0;
        int *l_687 = &g_14;
        int *l_688 = &g_165;
        int *l_689 = (void*)0;
        int *l_690 = &g_122;
        int *l_691 = &l_669;
        int *l_692 = &l_672;
        int l_693 = 0x07AAD604L;
        int *l_694 = &l_669;
        int *l_695 = &g_165;
        int *l_696 = (void*)0;
        int *l_697 = &g_14;
        int *l_698 = &l_669;
        int *l_700 = (void*)0;
        int *l_701 = &l_693;
        int *l_702 = &l_669;
        int *l_703 = &g_142;
        unsigned l_704 = 0x3B1A930AL;
        --l_704;
        if (((*p_42) = (*p_42)))
        {
            unsigned short l_709 = 1UL;
            (*l_690) &= ((safe_lshift_func_uint16_t_u_s((***g_355), 10)) | (l_709 > l_665));
        }
        else
        {
            unsigned char l_718 = 255UL;
            for (g_49 = 0; (g_49 <= 47); ++g_49)
            {
                int l_715 = 0x27927304L;
                (*l_681) &= (safe_sub_func_int32_t_s_s((((((*p_41) >= l_715) >= l_718) == (*l_684)) | 0x9E78L), (*g_141)));
                (*g_483) = (void*)0;
            }
        }
    }
    for (l_665 = 24; (l_665 > (-29)); l_665 = safe_sub_func_uint16_t_u_u(l_665, 9))
    {
        for (g_142 = 5; (g_142 >= (-20)); g_142 = safe_sub_func_int8_t_s_s(g_142, 2))
        {
            int *l_724 = &g_122;
            (*p_42) = (l_665 < (safe_unary_minus_func_uint8_t_u(((**g_383) = 0UL))));
            (*l_724) |= (*p_42);
        }
        return l_672;
    }
    return l_699;
}







static short * func_43(short p_44, short * p_45)
{
    char *l_171 = (void*)0;
    char *l_172 = &g_173;
    unsigned char *l_176 = &g_177;
    unsigned *l_180 = &g_103;
    unsigned *l_182 = &g_140;
    unsigned **l_181 = &l_182;
    int l_183 = 0xC0B8F99DL;
    unsigned l_184 = 2UL;
    short *l_185 = &g_67;
    unsigned l_186 = 4294967295UL;
    unsigned l_187 = 0x90BACEAEL;
    int *l_188 = &l_183;
    int *l_189 = &l_183;
    int *l_190 = &g_122;
    int *l_191 = (void*)0;
    int *l_192 = &l_183;
    int *l_193 = (void*)0;
    int *l_194 = &g_122;
    int l_195 = 6L;
    int *l_196 = &g_142;
    int *l_197 = &g_142;
    int *l_198 = &g_14;
    int *l_199 = &g_14;
    int *l_200 = &l_195;
    int *l_201 = &g_122;
    int *l_202 = &l_183;
    int *l_203 = &g_14;
    int l_204 = 1L;
    int l_205 = 0xB5AAB374L;
    int *l_206 = &g_165;
    int *l_207 = &l_183;
    int l_208 = 0L;
    int *l_209 = &l_195;
    int *l_210 = (void*)0;
    int l_211 = 8L;
    int *l_212 = &l_183;
    int *l_213 = &g_165;
    int *l_214 = &g_165;
    int *l_215 = &g_165;
    int *l_216 = &l_183;
    int *l_217 = &l_183;
    int *l_218 = &l_205;
    int l_219 = 0x3D09CE06L;
    int *l_220 = &l_204;
    int *l_221 = &l_208;
    int *l_222 = &l_211;
    int *l_223 = &l_183;
    int *l_224 = &l_208;
    int *l_225 = &g_14;
    int *l_226 = (void*)0;
    int *l_227 = (void*)0;
    int *l_228 = &g_122;
    int l_229 = 0xA22099EBL;
    int *l_230 = &l_229;
    int *l_231 = &l_229;
    int *l_232 = (void*)0;
    int *l_233 = &g_165;
    int *l_234 = &g_14;
    int *l_235 = (void*)0;
    int *l_236 = &g_165;
    int *l_237 = &l_211;
    int *l_238 = &l_205;
    int *l_239 = (void*)0;
    int *l_240 = &l_208;
    int *l_241 = &l_219;
    int *l_242 = &g_14;
    int *l_243 = &g_165;
    int *l_244 = &l_229;
    int *l_245 = &g_122;
    int *l_246 = &g_142;
    int *l_247 = &g_142;
    int l_248 = 0x79916B1FL;
    int l_249 = 1L;
    int *l_250 = &g_165;
    int l_251 = 3L;
    int *l_252 = &l_219;
    int *l_253 = &l_204;
    int *l_254 = &l_183;
    int *l_255 = &l_219;
    int *l_256 = &g_122;
    int *l_257 = &l_229;
    int *l_258 = &l_219;
    int *l_259 = (void*)0;
    int *l_260 = &l_195;
    int l_261 = 1L;
    int *l_262 = &l_229;
    int *l_263 = &l_205;
    int *l_264 = (void*)0;
    int l_265 = 0x1F1E8637L;
    int *l_266 = &l_251;
    int *l_267 = (void*)0;
    int *l_268 = &l_261;
    int *l_269 = &g_122;
    int *l_270 = &l_204;
    int *l_271 = &l_205;
    int *l_272 = &l_205;
    int l_273 = 4L;
    int *l_274 = &l_208;
    int *l_275 = &g_165;
    int *l_276 = &g_122;
    int *l_277 = &l_208;
    int *l_278 = (void*)0;
    int *l_279 = &l_261;
    int *l_280 = &l_219;
    unsigned l_294 = 4294967295UL;
    unsigned short ***l_394 = &g_359;
    short *l_470 = (void*)0;
    int l_563 = 0xD4304509L;
    short *l_653 = &g_458;
    (*l_188) = ((safe_unary_minus_func_int8_t_s((((*l_172) = (safe_add_func_uint32_t_u_u(0x257628AEL, (&g_148 == (void*)0)))) != (((((safe_lshift_func_uint8_t_u_s((++(*l_176)), g_36)) && (l_180 != ((*l_181) = l_180))) | (l_183 >= (p_44 && func_60(l_184, l_185, g_135)))) == l_186) == l_187)))) ^ 0xA51DL);
    ++g_281;
    if ((*l_223))
    {
        unsigned char l_286 = 0x01L;
        unsigned short *l_291 = &g_49;
        unsigned l_297 = 0UL;
        int l_306 = 0L;
lbl_301:
        for (g_173 = 16; (g_173 != (-9)); g_173 = safe_sub_func_int16_t_s_s(g_173, 1))
        {
            (*l_271) &= (+(*l_243));
            (*l_270) = (*g_141);
        }
        if ((((g_103 >= l_286) && (l_294 = ((safe_add_func_int8_t_s_s((-1L), (*l_213))) | ((*l_233) != (safe_mod_func_uint16_t_u_u((++(*l_291)), g_103)))))) && (safe_add_func_int16_t_s_s(0x6D93L, ((*l_291) |= (l_297 > (p_44 | 255UL)))))))
        {
            int l_300 = (-9L);
            int l_309 = 0xCC9C0103L;
            int l_312 = 0x63A6EC57L;
            int l_313 = 0x6CCD6D71L;
            int l_332 = 0x7FDBCA6FL;
            int *l_373 = &l_219;
            unsigned short ****l_405 = &g_358;
            if ((safe_mod_func_uint16_t_u_u(l_286, l_300)))
            {
                int l_304 = 2L;
                int l_305 = 0xED02C9C0L;
                int l_307 = 0x42F35A27L;
                int l_310 = 7L;
                int l_349 = 0x1BED5062L;
                short *l_361 = (void*)0;
                if (g_142)
                    goto lbl_301;
                if (((safe_add_func_uint32_t_u_u(g_36, l_300)) == g_49))
                {
                    int l_308 = 0x95D16D18L;
                    int l_311 = 0x93EADC2AL;
                    int *l_314 = &l_195;
                    int *l_315 = &l_211;
                    int *l_316 = (void*)0;
                    int *l_317 = &g_165;
                    int *l_318 = &l_211;
                    int *l_319 = &l_273;
                    int *l_320 = &l_309;
                    int *l_321 = &l_211;
                    int *l_322 = &g_122;
                    int *l_323 = &g_122;
                    int *l_324 = &l_261;
                    int *l_325 = &l_305;
                    int *l_326 = (void*)0;
                    int *l_327 = &l_261;
                    int *l_328 = &l_304;
                    int *l_329 = &l_229;
                    int *l_330 = &l_310;
                    int *l_331 = &l_183;
                    int l_333 = 0xC7DC2514L;
                    int *l_334 = (void*)0;
                    int *l_335 = &l_305;
                    int *l_336 = &g_165;
                    int *l_337 = &l_219;
                    int *l_338 = &l_208;
                    int *l_339 = (void*)0;
                    int *l_340 = &g_122;
                    int *l_341 = &l_183;
                    int *l_342 = &g_142;
                    int *l_344 = &l_211;
                    int *l_345 = (void*)0;
                    int *l_346 = &l_333;
                    int *l_347 = &l_306;
                    int *l_348 = &l_265;
                    int *l_350 = &l_261;
                    int *l_351 = &l_307;
                    ++g_352;
                    return (*g_148);
                }
                else
                {
                    unsigned short ****l_360 = &g_358;
                    (*l_189) &= (g_355 != ((*l_360) = g_358));
                }
                return l_361;
            }
            else
            {
                unsigned l_362 = 0UL;
                int **l_386 = &l_193;
                int **l_387 = &l_235;
                if (((*l_230) = ((*l_197) &= l_362)))
                {
                    int **l_369 = (void*)0;
                    int **l_370 = &l_252;
                    (*l_279) ^= ((safe_sub_func_int8_t_s_s(((+(func_46((((*g_358) = (*g_358)) != (void*)0)) && ((*p_45) = (l_306 > func_60((+(*g_141)), (*g_148), (l_332 = ((safe_sub_func_uint32_t_u_u(func_60(g_135, l_291, (++(*l_182))), l_306)) && (*l_240)))))))) < (-8L)), 1UL)) <= 1UL);
                    (*l_370) = &g_165;
                    for (l_261 = (-27); (l_261 > 1); ++l_261)
                    {
                        unsigned l_374 = 4294967289UL;
                        if (p_44)
                            break;
                        (*l_370) = (l_373 = &l_229);
                        (*l_194) &= p_44;
                        ++l_374;
                    }
                }
                else
                {
                    int *l_377 = &l_309;
                    (*g_378) = l_377;
                    if (p_44)
                        goto lbl_385;
lbl_385:
                    for (g_135 = 0; (g_135 == 24); g_135 = safe_add_func_int32_t_s_s(g_135, 1))
                    {
                        int **l_382 = &l_235;
                        l_373 = ((*l_382) = &l_219);
                        (*l_238) |= p_44;
                        g_383 = g_383;
                        if (p_44)
                            continue;
                    }
                    (*g_379) |= (*g_145);
                }
                (*l_387) = ((*l_386) = (*g_378));
            }
            if (p_44)
            {
                (*l_231) = (*g_145);
            }
            else
            {
                unsigned *l_395 = &l_297;
                int l_402 = 0xD6A1B3C1L;
                for (g_122 = (-11); (g_122 <= 4); g_122++)
                {
                    (*l_231) = ((*g_66) & (*g_66));
                    return l_291;
                }
                (*l_274) ^= (((safe_lshift_func_uint8_t_u_u((*l_373), 2)) < (safe_sub_func_uint16_t_u_u(((*p_45) < (func_46(l_286) | (l_394 != &g_359))), (((*l_395) = g_352) > ((safe_sub_func_int16_t_s_s((l_402 ^= (safe_rshift_func_uint16_t_u_s((0x181DL & (safe_sub_func_int8_t_s_s(p_44, 0L))), 15))), p_44)) | (*g_379)))))) > 0UL);
                if ((0x8BABL && ((*g_148) != (void*)0)))
                {
                    (*l_277) ^= ((*l_244) = func_60(p_44, (**g_147), (0xC6L && (g_173 &= (safe_rshift_func_int16_t_s_s((l_405 != (void*)0), l_297))))));
                    (*l_201) = p_44;
                }
                else
                {
                    (*g_378) = &l_208;
                    (*l_223) &= 0x7B25FE38L;
                }
            }
        }
        else
        {
            unsigned l_412 = 1UL;
            for (l_204 = 0; (l_204 != 8); l_204 = safe_add_func_uint16_t_u_u(l_204, 5))
            {
                short *l_413 = (void*)0;
                (*l_198) = (~(((*l_172) = ((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(p_44, 3)) || (*g_384)), ((***g_355) = l_412))) | 0xDEL)) | func_60(l_297, l_413, g_135)));
                (*g_414) = (*g_378);
            }
        }
    }
    else
    {
        (*l_237) = func_46((safe_sub_func_uint32_t_u_u((*l_236), 0x2605A821L)));
    }
    for (l_205 = 27; (l_205 != 3); l_205--)
    {
        int l_421 = 0xA9CAEAABL;
        int l_427 = 0x8ED05F35L;
        short *l_455 = &g_67;
        short l_456 = 1L;
        short l_459 = 0x93D7L;
        int l_487 = 0L;
        int l_488 = 1L;
        int l_489 = 3L;
        int l_536 = 0x7BC99AC3L;
        int l_538 = (-7L);
        int l_582 = 0x3A11EBBAL;
        int l_590 = 0xC90FF421L;
        if (p_44)
            break;
        for (g_142 = 0; (g_142 > 0); ++g_142)
        {
            unsigned *l_426 = (void*)0;
            unsigned *l_428 = &l_184;
            unsigned short *l_431 = &g_49;
            int l_454 = 0x6560A787L;
            short l_478 = (-1L);
            int l_479 = 0x2FDAFAECL;
            if (((l_421 != g_103) | (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*l_428)++), ((0xA543894AL ^ (*g_145)) < (((p_44 & (l_427 != (**g_148))) > ((*l_431) = p_44)) == (p_44 | p_44))))) == 0xDEL), 0xCAL))))
            {
                return (*g_148);
            }
            else
            {
                short *l_457 = (void*)0;
                int l_464 = 8L;
                unsigned short ***l_469 = &g_359;
                int l_476 = 1L;
                int l_477 = 0x0BA7A7D8L;
                if ((safe_add_func_int32_t_s_s((!(safe_mod_func_uint16_t_u_u(func_60((func_60((*l_274), l_431, ((**l_181) = (((func_60(((*l_279) ^= (safe_lshift_func_uint16_t_u_s(p_44, ((safe_mod_func_int16_t_s_s((((func_60((*g_121), (*g_148), (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(65535UL, 13)), ((func_60((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(0x53D69D35L, ((safe_rshift_func_uint8_t_u_s((((+((*l_172) = g_120)) >= ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((void*)0 != &p_45) && 0xD3L), 0x94D6L)), 7)) || l_421)) && p_44), l_454)) >= p_44))), g_120)), l_185, p_44) || p_44) == p_44)))) ^ (*g_384)) == p_44) == 5L), (**g_148))) != (*l_258))))), l_455, p_44) != (**g_148)) > p_44) ^ l_456))) && 0xCF8AL), l_457, g_458), p_44))), 1UL)))
                {
                    unsigned short l_466 = 0xDE47L;
                    if (l_459)
                    {
                        unsigned l_460 = 0x3A13BA32L;
                        --l_460;
                    }
                    else
                    {
                        int **l_463 = &l_222;
                        int l_465 = (-7L);
                        (*l_463) = (void*)0;
                        l_466++;
                    }
                }
                else
                {
                    (*l_268) |= ((*l_213) |= ((l_469 = &g_359) == (void*)0));
                }
                if ((g_281 == (l_454 = (*l_270))))
                {
                    int l_471 = 0xED3AB3DBL;
                    (*l_217) = ((+(l_464 >= ((*l_428) &= (((*p_45) ^= (func_60(p_44, l_470, ((((l_471 | p_44) >= g_120) > ((safe_add_func_uint16_t_u_u((*g_357), func_60(p_44, (*g_148), g_14))) <= l_464)) <= (*g_66))) && p_44)) && (***g_355))))) > 0x6AL);
                    (*l_221) = ((((void*)0 == (*g_358)) | (*l_241)) >= p_44);
                }
                else
                {
                    for (l_208 = 0; (l_208 >= 13); l_208 = safe_add_func_int8_t_s_s(l_208, 3))
                    {
                        unsigned char l_480 = 0x09L;
                        ++l_480;
                        (*g_483) = &l_265;
                    }
                }
            }
            (*l_253) |= l_427;
        }
        (*g_484) = &l_427;
        if ((safe_rshift_func_int16_t_s_s((-7L), 13)))
        {
            short l_490 = 0xB79DL;
            int *l_491 = (void*)0;
            int *l_492 = (void*)0;
            int *l_493 = &g_122;
            int *l_494 = &l_273;
            int *l_495 = &g_343;
            int *l_496 = &g_343;
            int *l_497 = &l_427;
            int *l_498 = &g_14;
            int *l_499 = &l_489;
            int *l_500 = (void*)0;
            int l_501 = 0L;
            int l_502 = (-1L);
            int *l_503 = &l_265;
            int *l_504 = &l_261;
            int *l_505 = &l_195;
            int *l_506 = &l_265;
            int *l_507 = &l_251;
            int *l_508 = &l_427;
            int *l_509 = &l_489;
            int *l_510 = &l_487;
            int *l_511 = (void*)0;
            int *l_512 = &l_487;
            int *l_513 = (void*)0;
            int *l_514 = &l_229;
            int *l_515 = &l_502;
            int *l_516 = &l_427;
            int *l_517 = &l_487;
            int *l_518 = (void*)0;
            int *l_519 = &l_502;
            int *l_520 = (void*)0;
            int *l_521 = (void*)0;
            int *l_522 = (void*)0;
            int *l_523 = &l_211;
            int *l_524 = &l_487;
            int *l_525 = &g_122;
            int *l_526 = &l_195;
            int *l_527 = &l_261;
            int *l_528 = &l_488;
            int *l_529 = &l_195;
            int *l_530 = &l_219;
            int *l_531 = &l_261;
            int *l_532 = &l_204;
            int *l_533 = &l_249;
            int *l_534 = &l_204;
            int *l_535 = &l_248;
            int *l_537 = &l_273;
            int *l_539 = &l_265;
            int *l_540 = &l_501;
            int *l_541 = &g_165;
            int *l_542 = (void*)0;
            int *l_543 = &l_248;
            int *l_544 = &l_195;
            int *l_545 = &l_502;
            int *l_546 = (void*)0;
            int *l_547 = &l_248;
            int *l_548 = &l_265;
            int *l_549 = &l_502;
            int *l_550 = &l_487;
            int *l_551 = &l_211;
            int *l_552 = &g_14;
            int *l_553 = (void*)0;
            int *l_554 = (void*)0;
            int *l_555 = &l_427;
            int *l_556 = &l_488;
            int *l_557 = &l_261;
            int *l_558 = (void*)0;
            int *l_559 = (void*)0;
            int *l_560 = &g_14;
            int *l_561 = &l_204;
            int *l_562 = &l_211;
            int *l_564 = &g_165;
            int *l_565 = &l_204;
            int *l_566 = (void*)0;
            int *l_567 = &g_14;
            int *l_568 = &l_489;
            int *l_569 = &l_219;
            int *l_570 = &l_265;
            int *l_571 = &l_208;
            int *l_572 = &l_183;
            int *l_573 = (void*)0;
            int *l_574 = &l_204;
            int *l_575 = &l_261;
            int *l_576 = &l_195;
            int *l_577 = (void*)0;
            int *l_578 = &l_536;
            int l_579 = 0x02B604AAL;
            int *l_580 = (void*)0;
            int *l_581 = &g_142;
            int *l_583 = &l_582;
            int *l_584 = (void*)0;
            int *l_585 = &l_273;
            int *l_586 = &l_211;
            int *l_587 = &l_248;
            int *l_588 = (void*)0;
            int *l_589 = &l_208;
            int *l_591 = &l_579;
            int *l_592 = &l_536;
            int l_593 = (-9L);
            int *l_594 = &l_211;
            int *l_595 = (void*)0;
            int *l_596 = &g_14;
            int *l_597 = &l_538;
            int *l_598 = &l_536;
            int *l_599 = &l_229;
            int *l_600 = &g_343;
            int *l_601 = &l_211;
            int *l_602 = &l_273;
            int *l_603 = &g_122;
            int *l_604 = &l_248;
            int *l_605 = (void*)0;
            int *l_606 = &g_14;
            int *l_607 = (void*)0;
            int *l_608 = &g_14;
            int *l_609 = &l_579;
            int l_610 = (-7L);
            int *l_611 = &l_248;
            int *l_612 = &l_208;
            int *l_613 = &l_204;
            int *l_614 = (void*)0;
            int *l_615 = &l_248;
            int *l_616 = &l_590;
            int *l_617 = (void*)0;
            int *l_619 = &l_261;
            int *l_620 = (void*)0;
            int *l_621 = (void*)0;
            int *l_622 = &l_501;
            int *l_624 = &l_248;
            int *l_625 = (void*)0;
            int *l_627 = &l_488;
            int *l_628 = &l_488;
            int *l_629 = &l_536;
            int *l_631 = &l_273;
            int *l_632 = &l_610;
            int *l_633 = &l_195;
            int *l_634 = (void*)0;
            int *l_635 = &g_122;
            unsigned l_636 = 1UL;
            (*l_215) |= (((*l_172) = ((*p_45) >= 0L)) || 0x98L);
            --l_636;
        }
        else
        {
            unsigned l_650 = 0x0CEC7D19L;
            if ((~(*g_121)))
            {
                int **l_639 = &l_277;
                int *l_640 = &g_122;
                (*l_224) = p_44;
                l_640 = ((*l_639) = (*g_378));
            }
            else
            {
                unsigned short l_646 = 0x349AL;
                int l_649 = 3L;
                for (p_44 = 0; (p_44 == (-18)); p_44--)
                {
                    short l_645 = (-10L);
                    (*l_192) &= (safe_lshift_func_int8_t_s_s(l_645, g_120));
                    (*l_250) ^= p_44;
                }
                (*l_233) = ((+l_582) | g_120);
                if (l_646)
                    break;
                for (g_135 = (-10); (g_135 > 22); ++g_135)
                {
                    ++l_650;
                }
            }
        }
    }
    return l_653;
}







static unsigned short func_46(unsigned short p_47)
{
    unsigned short l_55 = 65530UL;
    unsigned short l_64 = 0x3205L;
    int *l_65 = &g_14;
    short **l_110 = &g_66;
    unsigned *l_159 = &g_103;
    unsigned short *l_162 = &l_55;
    unsigned char l_163 = 1UL;
    int *l_164 = &g_165;
    (*g_147) = func_50(l_55, &g_49, ((func_56((func_60(((*l_65) |= l_64), g_66, (p_47 && 0xA5C1L)) == (safe_rshift_func_uint8_t_u_u(1UL, (safe_add_func_uint16_t_u_u(0x66C7L, (*g_66)))))), l_110, g_36) <= p_47) >= p_47), g_49);
    for (g_135 = 0; (g_135 > 29); g_135 = safe_add_func_int16_t_s_s(g_135, 2))
    {
        unsigned short l_151 = 0x2F9DL;
        int *l_155 = &g_122;
        int **l_156 = &l_65;
        (*l_65) = (g_140 | func_60((*g_121), (*g_148), l_151));
        if (l_151)
            continue;
        for (g_103 = 0; (g_103 == 37); g_103 = safe_add_func_uint32_t_u_u(g_103, 3))
        {
            int **l_154 = &l_65;
            (*l_154) = &g_122;
        }
        (*l_156) = l_155;
    }
    (*l_65) = 0L;
    (*l_164) ^= ((safe_mod_func_int16_t_s_s((func_56((*l_65), l_110, (((l_65 != (l_159 = &g_140)) || (safe_sub_func_uint16_t_u_u(((*l_162) = p_47), (l_163 & p_47)))) || ((0x7717L != (*l_65)) == (*l_65)))) == p_47), p_47)) != 0xBB22B282L);
    return (*l_164);
}







static short ** func_50(unsigned p_51, unsigned short * p_52, unsigned p_53, char p_54)
{
    short **l_146 = &g_66;
    return l_146;
}







static int func_56(short p_57, short ** p_58, int p_59)
{
    unsigned short l_111 = 9UL;
    short *l_112 = &g_67;
    int *l_118 = &g_14;
    int **l_117 = &l_118;
    unsigned *l_119 = &g_103;
    unsigned *l_138 = (void*)0;
    unsigned *l_139 = &g_140;
    unsigned short **l_143 = (void*)0;
    unsigned short ***l_144 = &l_143;
    (*g_121) |= func_60(l_111, (l_112 = &g_67), (g_120 = ((*l_119) = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(0xE6E2L, ((-5L) <= (&g_14 != ((*l_117) = (void*)0))))) || (p_58 == &g_66)), g_49)))));
    (*g_141) &= (safe_add_func_uint8_t_u_u(func_60((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((4L < g_103), g_103)), 1)), (*p_58), ((*l_139) = ((safe_lshift_func_int8_t_s_s(g_49, 5)) || ((*g_66) = ((safe_sub_func_uint16_t_u_u((g_135--), p_57)) < g_122))))), 0xA1L));
    (*l_144) = l_143;
    (*g_145) ^= (p_59 = p_57);
    return (*g_141);
}







static unsigned func_60(int p_61, short * p_62, unsigned p_63)
{
    int l_68 = 0L;
    int l_69 = 0xCD908FBDL;
    int *l_70 = &l_68;
    int *l_71 = &g_14;
    int *l_72 = (void*)0;
    int *l_73 = &g_14;
    int *l_74 = &g_14;
    int *l_75 = &l_68;
    int *l_76 = &g_14;
    int *l_77 = &l_68;
    int *l_78 = (void*)0;
    int *l_79 = (void*)0;
    int *l_80 = &l_68;
    int *l_81 = &l_68;
    int *l_82 = &g_14;
    int *l_83 = &g_14;
    int *l_84 = &g_14;
    int *l_85 = &l_68;
    int *l_86 = (void*)0;
    int l_87 = (-8L);
    int *l_88 = &g_14;
    int *l_89 = &l_68;
    int *l_90 = &l_87;
    int *l_91 = &l_87;
    int l_92 = (-1L);
    int *l_93 = &l_68;
    int *l_94 = &l_68;
    int *l_95 = &g_14;
    int l_96 = (-1L);
    int *l_97 = &l_87;
    int *l_98 = &l_96;
    int *l_99 = &l_68;
    int *l_100 = (void*)0;
    int *l_101 = (void*)0;
    int *l_102 = (void*)0;
    --g_103;
    (*l_83) &= 1L;
    (*l_80) = ((*l_95) | (*g_66));
    (*l_99) &= p_63;
    return p_61;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
