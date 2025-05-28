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
   const char * const f0;
};


static short g_2 = 0L;
static char g_8 = 0L;
static int g_48 = 0x8770CE40L;
static unsigned short g_57 = 65535UL;
static int *g_59 = &g_48;
static int ** volatile g_58 = &g_59;
static unsigned g_68 = 0xFFAE3C77L;
static unsigned g_76 = 4294967291UL;
static char *g_82 = &g_8;
static char **g_81 = &g_82;
static int ***g_85 = (void*)0;
static short g_111 = 0x5150L;
static volatile short g_118 = (-9L);
static volatile short * volatile g_117 = &g_118;
static volatile short * volatile *g_116 = &g_117;
static const int *g_121 = &g_48;
static const int ** volatile g_120 = &g_121;
static volatile unsigned char g_130 = 0x13L;
static int g_132 = 2L;
static const int ** volatile g_140 = &g_121;
static int ** volatile g_144 = (void*)0;
static int ** volatile g_145 = &g_59;
static const int ** volatile g_153 = (void*)0;
static const union U0 g_163 = {0};
static const union U0 *g_162 = &g_163;
static const union U0 ** const volatile g_164 = &g_162;
static char g_177 = (-6L);
static char g_179 = (-7L);
static unsigned char g_184 = 0x89L;
static union U0 g_190 = {0};
static union U0 g_195 = {0};
static unsigned short g_209 = 0xDE68L;
static short *g_212 = &g_111;
static short **g_211 = &g_212;
static short ***g_210 = &g_211;
static const int ** volatile g_218 = &g_121;
static char *** volatile g_219 = &g_81;
static volatile int g_223 = 4L;
static volatile int * volatile g_222 = &g_223;
static char *** volatile g_252 = &g_81;
static int ** volatile g_256 = &g_59;
static const unsigned char **g_275 = (void*)0;
static const unsigned char *** volatile g_274 = &g_275;
static char * const *g_278 = &g_82;
static char * const ** volatile g_277 = &g_278;
static unsigned char g_293 = 0x04L;
static int * volatile ** volatile * const *g_318 = (void*)0;
static unsigned short * volatile *g_330 = (void*)0;
static char *** const volatile g_332 = &g_81;
static char *g_367 = &g_179;
static union U0 *g_374 = &g_195;
static union U0 ** volatile g_373 = &g_374;
static int ** volatile g_375 = &g_59;
static int ** volatile g_380 = &g_59;
static int ** const volatile g_404 = &g_59;
static const int ** volatile g_405 = (void*)0;
static int ** volatile g_418 = &g_59;
static union U0 g_424 = {0};
static short * const *g_429 = &g_212;
static short * const ** volatile g_428 = &g_429;
static short g_467 = 6L;
static union U0 g_471 = {0};
static int ** const volatile g_476 = &g_59;
static union U0 ** volatile g_501 = (void*)0;
static union U0 ** volatile g_503 = (void*)0;
static union U0 ** volatile g_504 = &g_374;
static char g_517 = 5L;
static unsigned char g_562 = 0UL;
static const volatile unsigned g_590 = 0x3F7766E4L;
static int ** volatile g_651 = &g_59;
static const int ** volatile g_675 = &g_121;
static const int ** volatile g_698 = &g_121;
static volatile union U0 g_715 = {0};
static volatile union U0 *g_714 = &g_715;
static int g_736 = 0xCD98A7F5L;
static int ** volatile g_797 = &g_59;
static unsigned short g_827 = 65535UL;
static int ** volatile g_829 = (void*)0;
static int ** volatile g_836 = &g_59;
static int * volatile g_850 = &g_736;
static int ** volatile g_898 = &g_59;
static int ** volatile g_899 = (void*)0;
static int ** volatile g_903 = &g_59;
static int * volatile g_927 = &g_736;
static int *g_931 = &g_736;
static int ** volatile g_930 = &g_931;
static union U0 ** volatile g_942 = &g_374;
static union U0 ** volatile *g_941 = &g_942;
static const short **g_991 = (void*)0;
static const short ***g_990 = &g_991;
static const short ****g_989 = &g_990;
static int ** volatile g_1003 = &g_931;
static int *****g_1004 = (void*)0;
static volatile unsigned char * volatile g_1007 = &g_130;
static volatile unsigned char * volatile *g_1006 = &g_1007;
static unsigned g_1032 = 0xB78D81D6L;
static unsigned *g_1031 = &g_1032;
static unsigned **g_1030 = &g_1031;
static unsigned *** volatile g_1029 = &g_1030;
static unsigned g_1059 = 0x53669515L;
static short ***g_1112 = (void*)0;
static const unsigned g_1129 = 0UL;
static unsigned ***g_1150 = (void*)0;



static unsigned func_1(void);
static short func_3(char * p_4, unsigned p_5, char * p_6);
static unsigned func_9(union U0 p_10, char * p_11, unsigned p_12);
static union U0 func_13(unsigned short p_14, char * const p_15, unsigned short p_16, char * p_17);
static char * func_18(char * p_19, char * p_20, int p_21, char * const p_22);
static int * func_24(char p_25, int p_26);
static unsigned func_30(char * p_31);
static char * func_32(int * p_33, int * p_34);
static int * func_35(unsigned char p_36, int p_37, unsigned short p_38, char * p_39, unsigned p_40);
static char ** func_49(char * const * p_50, unsigned p_51);
static unsigned func_1(void)
{
    char *l_7 = &g_8;
    int l_23 = 0x07383CC4L;
    char **l_863 = (void*)0;
    char **l_864 = &g_82;
    char **l_865 = &g_367;
    char *l_947 = (void*)0;
    int l_948 = 0x1982765AL;
    unsigned char l_1155 = 0x84L;
    (**g_930) = (((g_2 | func_3(l_7, func_9(func_13((l_23 = (((((*l_865) = ((*l_864) = func_18(l_7, l_7, l_23, &g_8))) == l_7) & ((-1L) | g_562)) <= 0xC3L)), &g_8, g_2, &g_8), l_947, l_948), &g_8)) | l_948) & l_1155);
    return g_57;
}







static short func_3(char * p_4, unsigned p_5, char * p_6)
{
    unsigned *l_953 = (void*)0;
    int ****l_955 = &g_85;
    int *****l_954 = &l_955;
    char *l_956 = (void*)0;
    char *l_957 = &g_177;
    union U0 l_967 = {0};
    const short ****l_992 = &g_990;
    int *l_1116 = &g_736;
    char l_1137 = 0L;
    unsigned char *l_1144 = &g_293;
    unsigned ***l_1147 = &g_1030;
    unsigned ****l_1148 = (void*)0;
    unsigned ****l_1149 = &l_1147;
    int **l_1151 = &l_1116;
    unsigned short *l_1154 = &g_57;
    unsigned short **l_1153 = &l_1154;
    unsigned short ***l_1152 = &l_1153;
    if (func_9(func_13((safe_sub_func_int32_t_s_s((&g_68 != l_953), (g_318 != l_954))), (l_956 = p_6), p_5, l_957), l_957, g_76))
    {
        unsigned l_973 = 0xA4A60850L;
        int *l_1020 = &g_736;
        short *** const *l_1024 = &g_210;
        union U0 l_1108 = {0};
        short l_1119 = 5L;
        for (g_209 = (-27); (g_209 > 55); g_209 = safe_add_func_uint16_t_u_u(g_209, 3))
        {
            short l_966 = 0x9236L;
            union U0 l_968 = {0};
            char **l_969 = (void*)0;
            char **l_970 = &l_956;
            int l_976 = (-1L);
            int *l_1008 = &g_736;
            unsigned char l_1019 = 0xBCL;
            unsigned *l_1028 = &l_973;
            unsigned **l_1027 = &l_1028;
            unsigned short *l_1089 = (void*)0;
            unsigned short **l_1088 = &l_1089;
            unsigned short ***l_1087 = &l_1088;
            short ****l_1097 = &g_210;
        }
    }
    else
    {
        unsigned *l_1132 = &g_68;
        int l_1138 = (-3L);
        int * const *l_1141 = (void*)0;
        int * const **l_1140 = &l_1141;
        int * const *** const l_1139 = &l_1140;
        unsigned short l_1142 = 0xB881L;
        char l_1143 = 0L;
        (*g_59) = (safe_add_func_uint32_t_u_u(((*l_1132) = g_467), 0x05643EFFL));
        (**g_256) = ((*g_931) = ((g_209 != ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(func_9(l_967, (**g_252), (*l_1116)), (*l_1116))), l_1137)) > l_1138)) < (((~((g_562 = ((+(((*l_954) = (*l_954)) == l_1139)) < l_1142)) > 0x8FL)) >= l_1143) & 0UL)));
        (*g_59) = p_5;
    }
    (*g_218) = func_35(((*l_1144) = (p_5 != 3L)), ((*g_931) = (-4L)), func_9(l_967, &l_1137, (safe_lshift_func_int16_t_s_u((((*l_1149) = l_1147) == (g_1150 = &g_1030)), 4))), ((**g_252) = (**g_332)), (*g_1031));
    (*l_1151) = (void*)0;
    (*l_1152) = (void*)0;
    return (***g_428);
}







static unsigned func_9(union U0 p_10, char * p_11, unsigned p_12)
{
    char *l_949 = (void*)0;
    int l_950 = 0xE7F56782L;
    (*g_59) = p_12;
    return l_950;
}







static union U0 func_13(unsigned short p_14, char * const p_15, unsigned short p_16, char * p_17)
{
    int *l_868 = (void*)0;
    short ** const l_869 = &g_212;
    union U0 *l_870 = &g_471;
    unsigned short l_881 = 0x526EL;
    int l_891 = 0xA2C4FFF5L;
    int *l_928 = (void*)0;
    for (g_293 = 0; (g_293 > 32); g_293 = safe_add_func_uint32_t_u_u(g_293, 6))
    {
        union U0 **l_871 = &g_374;
        int l_872 = 0x82EA235DL;
        const char l_878 = 0xA4L;
        char l_894 = (-5L);
        union U0 l_895 = {0};
    }
    (*g_59) = 0x26CB09B3L;
    return (*l_870);
}







static char * func_18(char * p_19, char * p_20, int p_21, char * const p_22)
{
    unsigned l_29 = 0x609D70CAL;
    int *l_279 = &g_48;
    int **l_835 = (void*)0;
    char *l_858 = &g_8;
    char **l_857 = &l_858;
    (*g_836) = func_24(g_8, ((safe_rshift_func_int16_t_s_s(p_21, (l_29 >= func_30(func_32(func_35((safe_lshift_func_uint16_t_u_s((l_29 && 65531UL), (0x30F888C5L > p_21))), g_8, (p_21 & (-3L)), p_19, g_2), l_279))))) <= 0x04FAL));
    for (g_76 = 0; (g_76 < 46); g_76 = safe_add_func_uint16_t_u_u(g_76, 4))
    {
        unsigned *l_845 = &g_68;
        int l_846 = 0x0853B436L;
        short *l_847 = &g_467;
    }
    (*g_59) = p_21;
    l_279 = func_24((safe_sub_func_uint32_t_u_u((p_21 > (((p_21 <= (((safe_mod_func_uint8_t_u_u(p_21, ((safe_div_func_int8_t_s_s((0xF834L && p_21), (*p_19))) & (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((*l_279) < (**g_375)), (**g_278))), (*g_59)))))) < p_21) >= p_21)) == p_21) && 248UL)), (*g_121))), (*g_121));
    return p_19;
}







static int * func_24(char p_25, int p_26)
{
    int *l_796 = &g_132;
    short ***l_832 = &g_211;
    (*g_797) = l_796;
    for (g_57 = 0; (g_57 > 42); g_57++)
    {
        char *l_808 = &g_8;
        short l_825 = 0x5B87L;
        int l_831 = 0xE8B60CE4L;
        short ****l_833 = &l_832;
        short ***l_834 = &g_211;
        if ((0x1B75AB05L ^ (-3L)))
        {
            unsigned l_807 = 0x192AEC60L;
            for (g_209 = 0; (g_209 == 26); ++g_209)
            {
                int **l_830 = &l_796;
            }
        }
        else
        {
            l_831 = (**g_675);
        }
        (*g_59) = (~(((l_834 = ((*l_833) = l_832)) != (void*)0) && ((*g_81) == &p_25)));
    }
    l_796 = (*g_145);
    return l_796;
}







static unsigned func_30(char * p_31)
{
    unsigned l_382 = 0x8A9D2048L;
    short ***l_392 = &g_211;
    const short ***l_396 = (void*)0;
    const int *l_406 = (void*)0;
    unsigned short l_436 = 0x3FB0L;
    unsigned char *l_479 = &g_293;
    unsigned char **l_478 = &l_479;
    const unsigned char *l_521 = &g_293;
    const unsigned char **l_520 = &l_521;
    unsigned l_564 = 0xE4B83D75L;
    const union U0 **l_575 = &g_162;
    const union U0 ***l_574 = &l_575;
    int l_582 = 0xCEE8750DL;
    int l_583 = 0L;
    int *l_630 = &g_132;
    union U0 *l_673 = &g_471;
    char ***l_754 = &g_81;
    if (((l_382 <= g_118) ^ (((safe_add_func_uint8_t_u_u(l_382, (((***g_210) < l_382) | (((safe_lshift_func_int8_t_s_s(((*g_367) = 0L), 3)) && g_293) || l_382)))) < (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_unary_minus_func_uint32_t_u(g_8)) == l_382) || l_382), l_382)), l_382))) <= l_382)))
    {
        const short *l_395 = &g_2;
        const short **l_394 = &l_395;
        const short ***l_393 = &l_394;
        const short ****l_397 = &l_393;
        int l_398 = 0x2D16CAFFL;
        unsigned short *l_445 = &l_436;
        unsigned short **l_444 = &l_445;
        if ((l_392 != ((*l_397) = (l_396 = l_393))))
        {
            int *l_401 = &g_132;
            (*g_59) = l_398;
            for (g_68 = 0; (g_68 < 30); ++g_68)
            {
                l_401 = (void*)0;
                if ((**g_58))
                    continue;
            }
            if (l_398)
            {
                unsigned short l_417 = 65535UL;
                (*g_140) = (*g_218);
                if ((((***l_392) = (safe_div_func_uint16_t_u_u(65529UL, 0x12AFL))) ^ l_382))
                {
                    short l_409 = 0xB8C5L;
                    (*g_404) = (*g_380);
                    l_406 = (*g_120);
                    for (l_398 = 0; (l_398 > (-7)); l_398 = safe_sub_func_uint32_t_u_u(l_398, 6))
                    {
                        unsigned short *l_413 = &g_209;
                        unsigned short **l_412 = &l_413;
                        int l_414 = 0xB999902EL;
                        l_401 = (void*)0;
                        (*g_59) = (l_409 != (safe_mod_func_int8_t_s_s((l_412 == (void*)0), l_414)));
                    }
                }
                else
                {
                    (*g_59) = (safe_mod_func_int32_t_s_s((l_398 | g_111), 0xAF3E0FC4L));
                    (*g_418) = func_35(g_76, (**g_380), g_57, p_31, l_417);
                }
                (*g_59) = (0x4EA9L > ((*g_212) == l_417));
            }
            else
            {
                int **l_419 = &g_59;
                short * const * const l_427 = &g_212;
                (*l_419) = (*g_418);
                if (((**l_419) = (g_68 >= 0x1A89L)))
                {
                    return (**l_419);
                }
                else
                {
                    union U0 * const l_422 = &g_190;
                    union U0 *l_423 = &g_424;
                    int *l_425 = (void*)0;
                    for (g_209 = 0; (g_209 > 35); g_209 = safe_add_func_int32_t_s_s(g_209, 1))
                    {
                        l_423 = l_422;
                        (*g_59) = (**g_404);
                    }
                    if ((**g_256))
                    {
                        (*l_419) = &l_398;
                        return g_130;
                    }
                    else
                    {
                        int *l_426 = &g_132;
                        l_426 = l_425;
                        (*g_428) = l_427;
                    }
                }
                (*g_59) = (safe_rshift_func_int8_t_s_u((*g_367), l_382));
            }
        }
        else
        {
            union U0 **l_432 = &g_374;
            int l_433 = 0x1DD0851DL;
            const unsigned short *l_443 = &g_209;
            const unsigned short **l_442 = &l_443;
            (*l_432) = (void*)0;
            if ((l_398 = ((-2L) <= l_433)))
            {
                unsigned short *l_437 = &g_57;
                int l_448 = 0x40B8C9EBL;
                for (g_48 = (-11); (g_48 > 16); g_48 = safe_add_func_int8_t_s_s(g_48, 1))
                {
                    if (l_436)
                        break;
                }
                (*g_59) = (l_433 >= (~((*g_373) != (void*)0)));
                (*g_59) = (((*l_437) = (0xF740049AL != l_398)) > (safe_sub_func_int8_t_s_s(((*p_31) >= ((!0x25L) == ((l_442 != l_444) != (l_398 & (safe_div_func_int32_t_s_s((**g_404), ((l_448 > l_433) && 6L))))))), (*p_31))));
            }
            else
            {
                return g_68;
            }
            (*g_58) = &l_398;
            return l_433;
        }
        (*g_59) = (-1L);
    }
    else
    {
        unsigned char *l_463 = (void*)0;
        unsigned char *l_464 = &g_184;
        short *l_465 = (void*)0;
        short *l_466 = &g_467;
        const int l_468 = 0x098C68CCL;
        union U0 *l_469 = &g_190;
        union U0 *l_470 = &g_471;
        int l_518 = 5L;
        int *l_559 = &g_132;
        const union U0 ***l_612 = &l_575;
        unsigned char l_661 = 0x2DL;
        int **l_674 = &l_559;
        int *** const *l_694 = &g_85;
        int *** const **l_693 = &l_694;
        unsigned l_697 = 4294967287UL;
        if ((safe_mul_func_int16_t_s_s(((*l_466) = ((**g_429) = (safe_lshift_func_uint8_t_u_s(((*l_464) = (safe_sub_func_uint16_t_u_u((((1UL == ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((g_184 >= (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((***g_219), 0xE8L)), (*p_31)))), (*p_31))), (l_382 == (**g_429)))) && ((void*)0 == (*g_277)))) || 0xACB7L) | (*g_121)), 0x9E53L))), 7)))), l_468)))
        {
            l_470 = l_469;
            return g_209;
        }
        else
        {
            unsigned short l_481 = 0UL;
            int *l_482 = &g_48;
            int ****l_486 = &g_85;
            union U0 *l_500 = (void*)0;
            int l_519 = (-5L);
            int l_548 = (-1L);
            int l_552 = 0xEDD23C69L;
            for (g_57 = 20; (g_57 != 33); g_57++)
            {
                char l_474 = (-1L);
                int *l_475 = &g_48;
                unsigned char **l_477 = &l_464;
                int **l_489 = &l_475;
                int ** const *l_488 = &l_489;
                int ** const **l_487 = &l_488;
                union U0 * const *l_490 = &l_470;
                int l_499 = 0xBA4DB70AL;
                const int *l_505 = &g_48;
                int l_563 = (-1L);
            }
            if (((void*)0 != p_31))
            {
                int * const l_595 = &l_519;
                int **l_596 = &g_59;
                unsigned *l_625 = &g_68;
                (*l_596) = l_595;
                if (((*l_559) = (**g_145)))
                {
                    int l_599 = 0x80837693L;
                    unsigned short l_613 = 0UL;
                    unsigned char *l_621 = &g_184;
                    unsigned *l_624 = &g_76;
                    unsigned *l_627 = &g_68;
                    int l_629 = 2L;
                    if ((safe_rshift_func_int8_t_s_u((4294967295UL && l_599), 1)))
                    {
                        union U0 * const *l_611 = &l_469;
                        union U0 * const ** const l_610 = &l_611;
                        unsigned short *l_618 = &g_209;
                        unsigned **l_626 = (void*)0;
                        int l_628 = 0xC22FC88EL;
                        (**g_145) = (**g_418);
                        (*l_596) = (l_559 = func_35(g_57, ((*l_559) = ((*l_595) = (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((**g_211), (&l_481 == (void*)0))), ((safe_rshift_func_int8_t_s_s((***g_219), 4)) || ((*g_367) = ((safe_rshift_func_int8_t_s_u((l_610 == l_612), 1)) && ((*l_482) == l_599)))))))), (*l_482), p_31, l_613));
                        l_629 = (((**l_596) || (safe_add_func_uint16_t_u_u((((*l_559) != ((**l_596) > ((*l_618) = l_613))) >= (((void*)0 != l_621) >= ((safe_sub_func_uint32_t_u_u((*l_595), ((*l_482) = ((l_624 == (l_627 = (l_625 = l_625))) && (*l_595))))) > (*l_559)))), l_628))) | (**l_596));
                        (*l_596) = l_630;
                    }
                    else
                    {
                        return g_293;
                    }
                }
                else
                {
                    unsigned char l_635 = 255UL;
                    (**l_574) = (*g_373);
                    if (((*l_482) = 0xFF4A4D87L))
                    {
                        unsigned short *l_636 = &l_436;
                        int *****l_640 = &l_486;
                        int ******l_639 = &l_640;
                        (*l_630) = (((safe_lshift_func_int8_t_s_u(0xBEL, 2)) & (((*l_636) = (safe_lshift_func_int8_t_s_u((*p_31), l_635))) > (safe_rshift_func_uint16_t_u_u(l_635, (&l_486 != ((*l_639) = &l_486)))))) & (safe_mul_func_uint8_t_u_u(g_118, (&g_68 != (void*)0))));
                        (*g_59) = (**g_218);
                    }
                    else
                    {
                        unsigned short ***l_643 = (void*)0;
                        unsigned short *l_646 = &g_57;
                        unsigned short **l_645 = &l_646;
                        unsigned short ***l_644 = &l_645;
                        (*l_644) = (void*)0;
                        (*l_630) = ((void*)0 == l_646);
                    }
                }
                if ((**g_476))
                {
                    unsigned l_647 = 0x27F82ABCL;
                    if ((((*l_464) = l_647) < (l_595 == &g_590)))
                    {
                        (**l_596) = (safe_add_func_int16_t_s_s((**g_116), (**g_211)));
                    }
                    else
                    {
                        int * const l_650 = &g_132;
                        (*g_651) = l_650;
                    }
                }
                else
                {
                    if ((0xBB6B823CL >= 0x01AF5122L))
                    {
                        unsigned char l_652 = 0x42L;
                        return l_652;
                    }
                    else
                    {
                        (*l_630) = (**g_140);
                        (**l_596) = (*l_559);
                    }
                    for (g_184 = 18; (g_184 > 5); g_184 = safe_sub_func_uint8_t_u_u(g_184, 9))
                    {
                        int l_655 = 0x05E78ADEL;
                        if ((*l_630))
                            break;
                        if (l_655)
                            break;
                    }
                }
            }
            else
            {
                unsigned l_658 = 8UL;
                int *l_671 = &l_518;
                const union U0 *l_672 = &g_195;
                (**g_418) = (((*l_466) = (65535UL >= (l_658 == l_658))) <= (**g_116));
                for (l_436 = 0; (l_436 != 23); ++l_436)
                {
                    int l_664 = 0x60F6C6BBL;
                    char ***l_667 = &g_81;
                    unsigned short *l_668 = (void*)0;
                    unsigned short *l_669 = &g_209;
                    unsigned short *l_670 = &g_57;
                    (*l_482) = (**g_380);
                    l_671 = func_35(((**l_478) = l_661), (**g_476), ((*l_670) = (((safe_rshift_func_uint16_t_u_s(l_664, (((safe_mod_func_int16_t_s_s(((void*)0 != &g_132), (*l_630))) > (((*l_669) = (((*l_667) = &g_367) == (void*)0)) && (**g_429))) >= l_658))) <= l_664) > g_517)), &g_177, (*l_559));
                    (*l_482) = ((l_672 != l_673) != (*l_559));
                }
                (*l_630) = ((l_674 = &g_59) != &l_559);
                (*g_675) = (*g_140);
            }
        }
        (*l_674) = &l_583;
        if ((*l_630))
        {
            unsigned l_678 = 0UL;
            unsigned short *l_680 = &l_436;
            unsigned short **l_679 = &l_680;
            const char l_696 = 1L;
            char l_701 = 0x79L;
            int *l_702 = &g_48;
            char *l_709 = &g_177;
            for (g_517 = 0; (g_517 < 11); g_517 = safe_add_func_int32_t_s_s(g_517, 1))
            {
                short *l_689 = &g_467;
                short *l_690 = &g_2;
                int *** const ***l_695 = &l_693;
                int *l_699 = &l_582;
                int l_700 = 1L;
                (*g_698) = (*g_120);
                l_700 = ((*l_699) = ((*l_630) = (**g_698)));
            }
            (*g_120) = (l_630 = l_702);
        }
        else
        {
            union U0 **l_710 = (void*)0;
            union U0 **l_711 = &l_469;
            (**l_574) = ((*l_711) = (void*)0);
        }
    }
    if ((*l_630))
    {
        int *l_712 = &g_48;
        int **l_713 = &l_712;
        (*l_713) = l_712;
    }
    else
    {
        volatile union U0 **l_716 = &g_714;
        int *l_719 = &g_48;
        int **l_720 = &g_59;
        (*l_716) = g_714;
        l_630 = ((*l_720) = l_719);
    }
    if ((1L == ((*l_630) > (*l_630))))
    {
        unsigned char ***l_729 = &l_478;
        short *l_730 = &g_2;
        int l_733 = 0L;
        char *l_737 = (void*)0;
        short l_741 = (-1L);
        const unsigned l_773 = 0x7E9DC5A7L;
        int *l_793 = &g_48;
        for (g_132 = 0; (g_132 > 5); g_132 = safe_add_func_uint32_t_u_u(g_132, 1))
        {
            int **l_725 = &g_59;
            unsigned *l_726 = &g_76;
            unsigned short *l_734 = (void*)0;
            unsigned short *l_735 = &l_436;
            int ****l_742 = &g_85;
            int l_791 = 0x8470BAADL;
            (*l_725) = &l_582;
            (*l_725) = func_35(((!(**g_404)) <= ((*l_726) = (*l_630))), ((((void*)0 == l_729) && (((**l_392) = (**g_210)) != l_730)) ^ (safe_add_func_uint8_t_u_u((((*l_735) = l_733) | l_733), ((*g_367) = (*p_31))))), g_736, l_737, l_733);
            if ((**l_725))
            {
                int l_755 = 0x67761588L;
                for (l_564 = 0; (l_564 < 11); ++l_564)
                {
                    const int l_740 = 0x5E3D2945L;
                    int *l_749 = &l_583;
                    unsigned short ***l_766 = (void*)0;
                    unsigned short *l_770 = &g_57;
                    unsigned short ** const l_769 = &l_770;
                    unsigned short ** const *l_768 = &l_769;
                    unsigned short ** const **l_767 = &l_768;
                    char *l_774 = &g_177;
                    if (l_740)
                        break;
                    if (l_740)
                        break;
                    if (((((*g_367) = (*p_31)) != l_741) | 0UL))
                    {
                        unsigned l_747 = 0x67FC6D45L;
                        unsigned *l_748 = &l_382;
                        (**l_725) = (l_742 == (void*)0);
                        (*l_725) = &l_582;
                        l_749 = func_35(((safe_div_func_int16_t_s_s((***g_210), 0x71FBL)) >= (**l_725)), (**l_725), ((safe_rshift_func_uint8_t_u_s(l_747, 2)) || ((*l_630) ^ (**l_725))), p_31, ((*l_748) = 0xB58C3867L));
                    }
                    else
                    {
                        (*l_749) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_735) = (*l_749)), ((void*)0 == l_754))), ((*l_726) = (0xCC98D766L == 0x72B958C5L))));
                        l_755 = 0L;
                        if (l_733)
                            continue;
                    }
                    (*l_725) = func_35(((*l_479) = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((l_741 & (247UL & (*p_31))) >= ((**g_429) = l_755)), (((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_755, (*l_630))), ((safe_add_func_uint32_t_u_u((((l_766 == ((*l_767) = l_766)) | (safe_lshift_func_int8_t_s_s((4UL < (*p_31)), 4))) ^ l_755), g_293)) < 3L))) || (*l_749)) >= l_773))), 5))), l_755, g_8, l_774, g_590);
                }
                for (l_741 = 9; (l_741 < (-13)); l_741--)
                {
                    unsigned l_777 = 0xD97C70FBL;
                    (*l_725) = func_35((**l_725), (*l_630), l_755, p_31, (**l_725));
                    if (l_777)
                        break;
                    (*g_59) = (**g_418);
                    (**l_725) = l_777;
                }
                if ((**l_725))
                    break;
            }
            else
            {
                int l_782 = 0xA5BFEA9CL;
                short l_792 = 0xDBFAL;
                (*l_725) = (l_793 = func_35(l_773, (**g_418), ((*l_735) = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(l_733, 3)) || ((l_782 < ((l_733 < (l_791 = ((safe_mod_func_uint32_t_u_u(l_782, g_736)) || ((-9L) <= (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((-1L), 1L)), l_741)))))) || l_792)) & 0L)), 9))), l_737, l_773));
            }
        }
    }
    else
    {
        unsigned short *l_794 = &g_209;
        int l_795 = (-4L);
        (*l_630) = ((((*g_367) = (*p_31)) & (((*l_794) = 0x1734L) || (l_392 != l_392))) > ((**l_478) = l_795));
    }
    return g_590;
}







static char * func_32(int * p_33, int * p_34)
{
    unsigned short l_301 = 65535UL;
    int ****l_305 = &g_85;
    char **l_324 = (void*)0;
    char *l_338 = &g_179;
    unsigned char ***l_344 = (void*)0;
    int l_381 = 0x907F0988L;
    for (g_179 = 0; (g_179 == (-11)); g_179 = safe_sub_func_int16_t_s_s(g_179, 7))
    {
        int *l_282 = &g_48;
        short l_327 = 0xE96EL;
        int l_355 = (-1L);
        char *l_376 = &g_8;
        if ((**g_145))
        {
            int **l_283 = &l_282;
            (*l_283) = l_282;
            for (g_184 = 11; (g_184 == 42); g_184 = safe_add_func_uint16_t_u_u(g_184, 5))
            {
                int * const l_302 = &g_132;
                unsigned char *l_321 = (void*)0;
                unsigned char *l_322 = &g_293;
                (**l_283) = (**g_218);
                for (g_177 = (-25); (g_177 <= 8); g_177 = safe_add_func_uint8_t_u_u(g_177, 6))
                {
                    unsigned short l_290 = 65535UL;
                    unsigned short *l_294 = (void*)0;
                    unsigned short *l_295 = (void*)0;
                    unsigned short *l_296 = &g_57;
                    int ****l_304 = (void*)0;
                    if ((safe_add_func_uint16_t_u_u((((l_290 || (safe_mul_func_uint16_t_u_u(((*l_296) = g_293), (**l_283)))) && ((safe_lshift_func_int16_t_s_s((**l_283), l_290)) == (**l_283))) || (**g_218)), ((safe_sub_func_uint8_t_u_u(l_290, 1L)) | l_301))))
                    {
                        return (**g_252);
                    }
                    else
                    {
                        int **l_303 = &g_59;
                        (*l_283) = p_33;
                        (*p_34) = l_290;
                        if ((*p_33))
                            break;
                        (*l_303) = l_302;
                    }
                    (*g_59) = (-7L);
                    if ((~(l_304 == (l_305 = l_304))))
                    {
                        unsigned short l_317 = 0x33EBL;
                        (*l_302) = (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u(((*l_282) = g_118))) | 0x5AL), (safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((!(safe_add_func_int16_t_s_s(l_317, (((&l_305 != g_318) || g_132) || (*l_302))))), 0x06L)), (247UL | 0x7FL))))), 8)) | 0L) == l_317);
                    }
                    else
                    {
                        (*l_283) = l_282;
                        if ((*l_302))
                            continue;
                        (*g_59) = ((*p_34) != (*l_302));
                    }
                    if ((*l_282))
                    {
                        (**l_283) = (*p_33);
                        (*p_34) = (*l_302);
                        (*l_283) = p_33;
                    }
                    else
                    {
                        (*l_283) = l_282;
                    }
                }
                (*l_302) = (+(safe_lshift_func_uint8_t_u_s(((*l_322) = (*l_302)), 0)));
            }
            if ((**l_283))
                break;
        }
        else
        {
            char **l_323 = (void*)0;
            int l_351 = (-1L);
            char l_359 = (-4L);
            union U0 *l_372 = &g_190;
            int **l_377 = (void*)0;
            if ((l_323 != l_324))
            {
                const unsigned short ***l_328 = (void*)0;
                unsigned short ***l_329 = (void*)0;
                char **l_331 = &g_82;
                (*g_59) = 0xE28AA9EEL;
                (*l_282) = (safe_div_func_int8_t_s_s((***g_252), (0x7D020138L || l_327)));
                g_330 = (void*)0;
                (*g_332) = l_331;
            }
            else
            {
                unsigned char l_339 = 0x7BL;
                unsigned char *l_347 = &g_184;
                unsigned char **l_346 = &l_347;
                unsigned char ***l_345 = &l_346;
                char *l_350 = &g_177;
                unsigned l_352 = 0x7204A06CL;
                int *l_353 = (void*)0;
                int *l_354 = (void*)0;
                int l_356 = 0xC0069232L;
                for (l_301 = 0; (l_301 >= 27); ++l_301)
                {
                    for (g_293 = 5; (g_293 != 3); g_293 = safe_sub_func_uint16_t_u_u(g_293, 1))
                    {
                        int **l_337 = &g_59;
                        (*l_337) = p_33;
                        return l_338;
                    }
                    if ((*p_33))
                        continue;
                    if (l_339)
                        break;
                }
                if ((*g_121))
                    continue;
                if ((*p_34))
                    break;
                l_356 = (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_130, (0xA8359A10L && (l_355 = ((((*g_59) = ((*p_34) & (l_344 != l_345))) != (((safe_mod_func_int16_t_s_s(((*g_212) = ((l_327 != ((*l_350) = (*g_82))) > (0xA6F7DB8AL && ((l_351 ^ g_209) > 0xA91A9485L)))), l_352)) || 0xE3C59E35L) & (**g_81))) | g_68))))), (-8L)));
            }
            for (g_68 = 17; (g_68 != 55); g_68 = safe_add_func_int16_t_s_s(g_68, 7))
            {
                short * const *l_364 = &g_212;
                short * const * const *l_363 = &l_364;
                short * const * const * const *l_362 = &l_363;
                int l_371 = 0L;
                if (l_359)
                {
                    unsigned char l_366 = 255UL;
                    (*l_282) = (**g_256);
                    if ((*l_282))
                    {
                        int **l_360 = (void*)0;
                        int **l_361 = &l_282;
                        p_33 = ((*l_361) = (*g_145));
                        return (*g_81);
                    }
                    else
                    {
                        short l_365 = 0x0865L;
                        int **l_370 = &l_282;
                        (*p_33) = ((void*)0 == l_362);
                        (*l_370) = func_35(l_365, (**g_256), l_366, g_367, (safe_div_func_uint32_t_u_u((*l_282), (*l_282))));
                        (*p_34) = l_371;
                        p_34 = func_35((**l_370), (*p_33), l_366, (*g_81), l_371);
                    }
                }
                else
                {
                    (*g_373) = l_372;
                    (*g_375) = p_33;
                }
                return l_376;
            }
            l_377 = &p_33;
            for (g_48 = 0; (g_48 == 14); ++g_48)
            {
                (*g_222) = (*p_34);
            }
        }
        (*g_380) = (l_282 = (*g_375));
        if ((*p_33))
            break;
    }
    l_381 = ((*g_59) = (**g_145));
    return (*g_81);
}







static int * func_35(unsigned char p_36, int p_37, unsigned short p_38, char * p_39, unsigned p_40)
{
    int *l_255 = (void*)0;
    char * const *l_276 = &g_82;
    if ((safe_sub_func_int32_t_s_s((0x68L || g_8), (-1L))))
    {
        char * const l_53 = &g_8;
        char * const *l_52 = &l_53;
        int **l_264 = (void*)0;
        int **l_265 = &l_255;
        for (p_36 = 0; (p_36 == 50); p_36 = safe_add_func_uint8_t_u_u(p_36, 7))
        {
            unsigned l_262 = 0x327D6BC2L;
            int **l_263 = &g_59;
        }
        (*l_265) = &p_37;
        for (p_40 = 0; (p_40 < 55); p_40++)
        {
            const int **l_268 = &g_121;
            (*l_268) = (*g_140);
        }
    }
    else
    {
        unsigned l_269 = 0xD4FD8FACL;
        l_269 = (g_68 == g_223);
    }
    for (g_177 = (-6); (g_177 >= 29); ++g_177)
    {
        const unsigned char *l_273 = (void*)0;
        const unsigned char ** const l_272 = &l_273;
        (*g_274) = l_272;
        l_255 = &p_37;
        (*g_277) = l_276;
    }
    return (*g_58);
}







static char ** func_49(char * const * p_50, unsigned p_51)
{
    int **l_62 = &g_59;
    int ***l_63 = (void*)0;
    int ***l_64 = (void*)0;
    int **l_66 = &g_59;
    int ***l_65 = &l_66;
    unsigned *l_67 = &g_68;
    unsigned *l_75 = &g_76;
    char *l_80 = &g_8;
    char **l_79 = &l_80;
    unsigned l_138 = 0xBABE52BDL;
    int *l_141 = &g_132;
    union U0 *l_189 = &g_190;
    union U0 *l_194 = &g_195;
    int *l_198 = &g_48;
    short l_201 = 0L;
    int ***l_249 = (void*)0;
    char **l_250 = &l_80;
    char **l_251 = &l_80;
    (*g_58) = &g_48;
    (*g_59) = 0x27283A38L;
    if ((!(g_8 >= (safe_mod_func_uint32_t_u_u(((*l_67) = (l_62 != ((*l_65) = l_62))), (safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((p_51 <= 0L), ((*l_75) = ((safe_mul_func_uint8_t_u_u(0x0AL, (p_51 > g_57))) && (**p_50))))) == 0x6C9FL), 4294967289UL)))))))
    {
        char *l_78 = (void*)0;
        char **l_77 = &l_78;
        return g_81;
    }
    else
    {
        int ****l_86 = &l_63;
        char l_95 = 0L;
        short l_113 = 0x9BF4L;
        int l_142 = 0x7D5E3626L;
        const int *l_154 = &l_142;
        unsigned char *l_240 = (void*)0;
        if (((safe_div_func_uint32_t_u_u((((*l_86) = g_85) != &l_66), (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((**l_62) = ((*l_67) = (+(((*l_79) = (void*)0) != (void*)0)))), (safe_div_func_int16_t_s_s(1L, (safe_mod_func_uint32_t_u_u(l_95, ((**p_50) & (g_2 > ((safe_div_func_uint32_t_u_u(((0x87A7CF83L == p_51) | p_51), 9L)) < 0UL))))))))), p_51)))) == g_76))
        {
            int *l_131 = &g_132;
            int ****l_133 = &g_85;
            unsigned l_174 = 0xEE972AE7L;
            short *l_229 = &l_201;
            for (g_48 = 0; (g_48 <= 10); g_48 = safe_add_func_int32_t_s_s(g_48, 1))
            {
                unsigned short l_139 = 65535UL;
                int * const l_143 = &l_142;
            }
            if ((((1UL >= (*l_131)) > (safe_mod_func_uint32_t_u_u(((void*)0 == &l_64), (safe_mul_func_int8_t_s_s(((*g_117) == ((void*)0 != (*g_81))), (**p_50)))))) == g_48))
            {
                const int *l_152 = &g_132;
                int l_159 = 0xBC4670F8L;
                l_154 = l_152;
                (*l_141) = ((-7L) ^ (safe_sub_func_uint32_t_u_u(((*l_75) = (safe_sub_func_int8_t_s_s((*l_152), (*l_152)))), (l_159 = ((***l_65) = (-8L))))));
                (**l_65) = (void*)0;
            }
            else
            {
                (*l_141) = ((***l_65) = (**g_145));
                (*l_66) = (*l_66);
                return &g_82;
            }
            for (g_57 = 9; (g_57 < 14); ++g_57)
            {
                (*l_141) = p_51;
                (*g_164) = g_162;
            }
            if ((~((&g_82 != &l_80) | g_111)))
            {
                char *l_171 = (void*)0;
                char *l_172 = &l_95;
                unsigned short *l_173 = &g_57;
                short *l_175 = &l_113;
                char *l_176 = &g_177;
                char *l_178 = &g_179;
                int l_182 = 0x96C68BD4L;
                unsigned char *l_183 = &g_184;
                if ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((**g_81), (*l_131))), ((+((*l_172) = (**p_50))) == ((((*l_173) = ((void*)0 != &g_162)) | ((*l_175) = l_174)) ^ ((*l_178) = ((*l_176) = 2L)))))) || (safe_mod_func_uint8_t_u_u(((*l_183) = (l_182 ^ p_51)), (*g_82)))), 0L)))
                {
                    for (p_51 = 0; (p_51 <= 8); p_51 = safe_add_func_int16_t_s_s(p_51, 7))
                    {
                        const int **l_187 = (void*)0;
                        const int **l_188 = &g_121;
                        (*l_141) = ((void*)0 != (*g_164));
                        (*l_188) = (*g_120);
                    }
                }
                else
                {
                    union U0 **l_191 = &l_189;
                    union U0 *l_193 = (void*)0;
                    union U0 **l_192 = &l_193;
                    int *l_197 = &g_132;
                    short ****l_213 = &g_210;
                    (**l_65) = (*g_58);
                    if (((l_194 = ((*l_192) = ((*l_191) = l_189))) == (void*)0))
                    {
                        (**l_65) = &l_182;
                    }
                    else
                    {
                        const int *l_196 = &g_48;
                        unsigned short *l_208 = &g_209;
                        (*g_120) = l_196;
                        (*l_131) = p_51;
                        l_198 = (l_197 = (*g_58));
                        (*l_131) = (((safe_sub_func_uint16_t_u_u(l_201, ((&g_57 == (void*)0) <= ((*l_208) = ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((**g_116), p_51)), 13)) | ((safe_div_func_int8_t_s_s((0x4E63L > ((*l_173) = (&g_48 == (void*)0))), ((*l_178) = (**g_81)))) && g_48)))))) >= g_132) & 0xAAL);
                    }
                    l_182 = ((*l_131) = (((*l_213) = g_210) == &g_116));
                    l_182 = ((((****l_213) = (***g_210)) & 0xC73BL) >= ((*l_176) = (p_51 > ((*l_175) = (g_76 == p_51)))));
                }
            }
            else
            {
                for (l_138 = 21; (l_138 != 2); l_138 = safe_sub_func_int32_t_s_s(l_138, 4))
                {
                    (*g_218) = (*g_140);
                    (*g_219) = &g_82;
                    for (g_76 = (-12); (g_76 >= 58); g_76 = safe_add_func_int16_t_s_s(g_76, 8))
                    {
                        volatile int * volatile *l_224 = &g_222;
                        char *l_230 = &g_177;
                        unsigned short *l_235 = &g_57;
                        int *l_243 = (void*)0;
                        int *l_244 = &l_142;
                        (*l_224) = g_222;
                        (**l_224) = ((((((safe_rshift_func_uint16_t_u_s((p_51 == (safe_lshift_func_int16_t_s_s(1L, 13))), 3)) | (((**g_210) = &l_113) != (l_229 = &l_113))) > p_51) ^ (&l_194 == (void*)0)) | (g_179 = ((*l_230) = ((p_51 && ((*l_131) = (**g_120))) < 1L)))) > (-10L));
                        (*l_198) = (safe_rshift_func_uint8_t_u_u(g_184, (safe_lshift_func_int16_t_s_s((0L <= ((*l_235) = g_118)), 0))));
                        (**l_224) = ((*l_244) = ((*l_141) = ((*l_198) = ((0xBAL == p_51) || (safe_mod_func_uint16_t_u_u((*l_131), (safe_lshift_func_int8_t_s_u((**p_50), ((((l_240 = &g_184) != (void*)0) ^ (p_51 <= 0xCBL)) != ((safe_rshift_func_int16_t_s_s(p_51, 10)) && p_51))))))))));
                    }
                    for (l_201 = 12; (l_201 < 13); l_201++)
                    {
                        (*l_131) = (((safe_rshift_func_int8_t_s_s(1L, (*g_82))) ^ (*g_212)) == p_51);
                    }
                }
            }
        }
        else
        {
            (*l_66) = &l_142;
            (**l_66) = ((void*)0 == l_249);
        }
    }
    return (*g_219);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1129, "g_1129", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
