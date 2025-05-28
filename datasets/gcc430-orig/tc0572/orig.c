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



static char g_15 = 0x9BL;
static unsigned char g_20 = 255UL;
static unsigned char *g_26 = &g_20;
static unsigned char **g_25 = &g_26;
static int g_42 = 1L;
static unsigned char g_46 = 0x4CL;
static short g_50 = 0xE60DL;
static unsigned g_51 = 4294967294UL;
static char g_75 = 1L;
static char g_76 = 0x2DL;
static unsigned g_79 = 0xCDE87198L;
static unsigned char g_112 = 0UL;
static unsigned char *g_111 = &g_112;
static unsigned short g_115 = 0x21C6L;
static int *g_116 = (void*)0;
static int g_121 = (-1L);
static short g_158 = 0L;
static unsigned char **g_340 = (void*)0;
static unsigned short **g_442 = (void*)0;
static unsigned short *g_475 = (void*)0;
static unsigned short **g_474 = &g_475;
static unsigned char ****g_540 = (void*)0;
static unsigned *g_584 = &g_79;
static unsigned **g_583 = &g_584;
static unsigned g_747 = 4294967295UL;
static unsigned short g_806 = 65527UL;
static int g_813 = (-1L);
static int **g_833 = &g_116;
static unsigned short ****g_843 = (void*)0;
static unsigned short g_853 = 0UL;
static unsigned char g_962 = 255UL;
static short *g_982 = &g_50;
static short **g_981 = &g_982;
static short ***g_980 = &g_981;
static char *g_992 = &g_15;
static char **g_991 = &g_992;
static unsigned *g_1038 = (void*)0;
static int ****g_1121 = (void*)0;
static unsigned short ***g_1141 = &g_474;
static int g_1178 = 0xAC6EAF2FL;
static unsigned *g_1287 = (void*)0;
static unsigned g_1369 = 0x9D513C1FL;
static unsigned short *****g_1449 = (void*)0;
static unsigned short ******g_1448 = &g_1449;



static int func_1(void);
static int func_7(int p_8, unsigned p_9, int p_10);
static unsigned func_11(char p_12);
static int func_21(unsigned char * p_22);
static unsigned func_29(unsigned char * p_30, short p_31, unsigned char * p_32, char p_33, short p_34);
static unsigned char * func_35(unsigned char * p_36, int p_37, unsigned char * p_38);
static unsigned char * func_39(int p_40);
static int * func_58(char p_59);
static unsigned char ** func_64(char p_65, unsigned p_66, unsigned char p_67, int * p_68, int * p_69);
static unsigned func_95(unsigned char p_96, unsigned char * p_97, unsigned char ** p_98);
static int func_1(void)
{
    unsigned l_6 = 5UL;
    unsigned char *l_961 = &g_962;
    unsigned short l_975 = 0x40CCL;
    int *l_1018 = (void*)0;
    int l_1025 = (-6L);
    unsigned short ***l_1053 = &g_442;
    unsigned short *****l_1061 = &g_843;
    unsigned short l_1078 = 0xE9FCL;
    unsigned l_1081 = 4294967292UL;
    char l_1083 = 0xA6L;
    unsigned char ***l_1111 = &g_25;
    unsigned char ****l_1110 = &l_1111;
    unsigned l_1116 = 0x6DF8255FL;
    unsigned char *l_1126 = &g_20;
    unsigned char l_1135 = 2UL;
    int l_1203 = 0x209AFF51L;
    unsigned char *l_1230 = &g_962;
    char l_1232 = 0x30L;
    unsigned char l_1265 = 6UL;
    short *l_1292 = (void*)0;
    unsigned char **l_1302 = &g_26;
    unsigned char **l_1355 = &l_1126;
    unsigned short l_1357 = 0xF903L;
    short l_1363 = 0xEDA4L;
    int *l_1364 = &g_121;
    int *l_1365 = &g_813;
    unsigned l_1366 = 0xBACAA0B2L;
    unsigned short *l_1370 = &g_115;
    int *l_1371 = &g_1178;
    unsigned l_1372 = 1UL;
    short l_1390 = 0L;
    short l_1398 = 1L;
    short l_1399 = 1L;
    unsigned l_1400 = 0xAC540303L;
    unsigned **l_1401 = &g_584;
    char l_1410 = 4L;
    if (((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(1L, l_6)) <= func_7(l_6, func_11(l_6), g_853)), func_95(l_6, l_961, &l_961))) , l_6))
    {
        int **l_963 = &g_116;
        short *l_968 = &g_50;
        short *l_976 = &g_158;
        unsigned char *l_977 = (void*)0;
        unsigned short *l_978 = &g_115;
        unsigned short *l_979 = &g_806;
        short ***l_983 = &g_981;
        int l_984 = 0xB49D0AFDL;
        (*l_963) = func_58(l_6);
        l_984 = ((((**l_963) = (safe_add_func_uint8_t_u_u((**l_963), (safe_add_func_uint16_t_u_u(((((*l_979) = ((*l_978) = ((((**l_963) == ((*l_968) = 0x1D9AL)) < (l_6 , g_75)) || func_95(((((((g_962 != g_42) ^ (safe_sub_func_uint32_t_u_u(((((!((*l_976) = ((*l_968) = ((**l_963) ^ (safe_add_func_int16_t_s_s(func_7((safe_lshift_func_int16_t_s_u((+(((**l_963) || 0x90143CACL) | l_975)), l_975)), (*g_584), g_853), (**l_963))))))) , l_975) > l_975) | l_975), 4294967293UL))) >= l_6) <= 0x42L) == l_975) < (*g_116)), l_977, &l_977)))) , g_980) != l_983), (-1L)))))) < (*g_26)) , l_975);
    }
    else
    {
        int **l_985 = (void*)0;
        int **l_986 = &g_116;
        unsigned l_987 = 4294967292UL;
        unsigned char l_988 = 0xC8L;
        char *l_989 = (void*)0;
        char *l_990 = &g_75;
        unsigned *l_993 = (void*)0;
        unsigned *l_994 = &l_6;
        int l_999 = 0x8873BE40L;
        unsigned l_1026 = 7UL;
        unsigned char **l_1036 = &l_961;
        int *l_1042 = (void*)0;
        short l_1089 = 0xCDB3L;
        int *l_1138 = &l_999;
        unsigned short ***l_1146 = &g_442;
        unsigned char l_1231 = 255UL;
        int l_1281 = (-8L);
        unsigned char l_1297 = 0xBFL;
        unsigned char l_1319 = 0x6CL;
        unsigned char *l_1354 = &g_46;
        (*l_986) = &g_813;
        if (((*g_584) > ((*l_994) = (l_987 != (((((**g_981) = ((((*g_111) = ((1L >= ((((*l_990) = ((((**l_986) && (((*g_982) , &g_116) != l_986)) != ((g_15 , (*g_116)) && l_988)) == 0x68L)) , l_6) != 1UL)) != l_6)) | 0x23L) >= 1L)) | l_975) , g_991) == &l_989)))))
        {
            unsigned short l_1001 = 1UL;
            unsigned char **l_1016 = &g_111;
            char *l_1020 = &g_15;
            unsigned *l_1037 = &g_747;
            int *l_1058 = &g_813;
            short l_1070 = 0xD1A9L;
            unsigned char ****l_1113 = &l_1111;
            short ***l_1117 = (void*)0;
lbl_1148:
            for (g_112 = 0; (g_112 <= 47); g_112 = safe_add_func_int16_t_s_s(g_112, 4))
            {
                unsigned char *l_1011 = &g_20;
                unsigned l_1015 = 0x9D8365A8L;
                int l_1022 = 1L;
                int *l_1032 = &l_1022;
                unsigned char l_1045 = 1UL;
                int l_1057 = 2L;
            }
            if ((((((*g_584) > (**l_986)) != (*g_116)) || (safe_rshift_func_int8_t_s_s((*l_1058), ((void*)0 != l_1061)))) >= ((*l_994) = (&g_843 != (void*)0))))
            {
                short l_1069 = (-1L);
                unsigned char **l_1077 = (void*)0;
                int l_1082 = 0x321B78B7L;
                unsigned char *l_1115 = &g_112;
                (*l_1058) = (func_7(((void*)0 == (**g_980)), (**g_583), (func_29(func_39((((((*l_1058) = (safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u((*l_1058), ((**g_991) >= ((**g_583) == 9L))))))) , (safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((g_51 , l_1069) != (**l_986)), 1UL)) <= (*l_1058)) && 0L), 65530UL))) > 0xA0L) , (*g_116))), (*g_982), (*l_1036), l_1069, (*g_982)) ^ l_1070)) ^ l_1069);
                if (g_42)
                    goto lbl_1084;
lbl_1084:
                l_1083 = (((safe_mod_func_uint8_t_u_u(((*g_26) = ((*g_111) = (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(func_11((*g_992)), func_95(((**l_1036) = l_1025), (*l_1036), l_1077))), 3)))), l_1078)) <= (safe_lshift_func_uint8_t_u_u((l_1081 < l_975), l_1082))) , l_1082);
                for (g_42 = 13; (g_42 <= (-4)); g_42 = safe_sub_func_uint32_t_u_u(g_42, 1))
                {
                    unsigned char *l_1091 = &g_962;
                    int l_1092 = 1L;
                    for (g_76 = 0; (g_76 <= 14); g_76++)
                    {
                        char l_1090 = 0L;
                        int l_1093 = 0xCE5760FAL;
                        unsigned short *****l_1098 = &g_843;
                        short l_1107 = 0L;
                        unsigned char *****l_1112 = &l_1110;
                        unsigned short *l_1114 = &g_853;
                        l_1093 = ((((l_1089 && l_1090) , ((*l_1091) = (l_961 != (((+g_79) , (~g_747)) , l_1091)))) , (0x16L & (*g_26))) , (((l_1092 < (**g_981)) >= (*l_1058)) >= (*g_584)));
                        (*l_1058) = (l_1093 = (((**g_583) = (((safe_add_func_int8_t_s_s(l_1116, (*l_1058))) , (void*)0) == l_1117)) > 3L));
                    }
                    (*l_986) = &l_1025;
                }
            }
            else
            {
                unsigned char *l_1124 = &g_20;
                int l_1130 = (-8L);
                unsigned short l_1198 = 0x40F9L;
                int *l_1211 = &g_813;
                if (func_21(((*l_1058) , (void*)0)))
                {
                    int *l_1118 = &g_813;
                    unsigned short ****l_1119 = &l_1053;
                    unsigned short ******l_1125 = &l_1061;
                    short l_1129 = 0xFA2BL;
                    unsigned char *l_1131 = &g_46;
                    short l_1132 = 1L;
                    if ((*g_116))
                    {
                        (*l_986) = l_1118;
                    }
                    else
                    {
                        int ***l_1120 = &l_986;
                        (*l_1118) = (l_1119 != l_1119);
                        (*l_1120) = &g_116;
                        (*l_1058) = (*g_116);
                        (**l_986) = (((*l_1118) && (g_1121 != g_1121)) && ((void*)0 == (*g_583)));
                    }
                    (*l_1118) = ((**g_583) == ((-1L) ^ ((safe_rshift_func_uint8_t_u_s(0x50L, func_21(l_1124))) && (((*l_1125) = &g_843) == (func_29(func_35(l_1126, (safe_lshift_func_int8_t_s_u(((0xBF793AF7L | l_1129) == l_1130), 2)), (*l_1016)), (*l_1118), l_1131, (**g_991), l_1132) , &g_843)))));
                    (*l_986) = l_1118;
                }
                else
                {
                    int l_1136 = 0x0BA3A79BL;
                    unsigned char **l_1137 = &l_1124;
                    unsigned *l_1149 = (void*)0;
                    unsigned short l_1189 = 0UL;
                    unsigned char *l_1204 = (void*)0;
                    if ((safe_add_func_int8_t_s_s(((l_1135 , (((*g_116) = (l_1136 = 0L)) , &g_1038)) == ((((*l_990) = (**g_991)) ^ (func_95((*g_111), func_39(l_1130), l_1137) < g_853)) , (void*)0)), (-3L))))
                    {
                        unsigned short ****l_1142 = &l_1053;
                        unsigned short l_1145 = 0xAD33L;
                        unsigned short ****l_1147 = &l_1146;
                        (*l_986) = l_1138;
                        (*l_1138) = (safe_sub_func_uint16_t_u_u(l_1136, l_1136));
                        l_1136 = func_11((**g_991));
                        (*l_1138) = (((*l_1142) = ((0xD9B53313L == (**g_583)) , g_1141)) != ((*l_1147) = (((*l_1058) >= ((~(((void*)0 == &g_121) , (safe_rshift_func_int8_t_s_u(l_1130, 7)))) != l_1145)) , l_1146)));
                    }
                    else
                    {
                        if (l_1136)
                            goto lbl_1148;
                    }
                    (*l_986) = func_58(((*g_583) == l_1149));
                    if ((safe_sub_func_uint32_t_u_u((**g_583), (safe_lshift_func_int16_t_s_s(((*g_26) ^ func_21((*l_1016))), (((safe_add_func_int8_t_s_s(l_1130, l_1136)) , (((0x53L < (safe_mod_func_int8_t_s_s(((*l_1058) = func_29(((&g_112 != (*l_1016)) , (void*)0), l_1136, (*l_1036), (*l_1058), (*l_1138))), (**g_991)))) , 0x965AL) && 0xC671L)) & (**g_991)))))))
                    {
                        char l_1158 = 0x81L;
                        int l_1163 = (-1L);
                        int l_1164 = (-9L);
                        unsigned short *l_1173 = &g_806;
                        unsigned char *l_1174 = &l_1135;
                        unsigned char *l_1175 = &g_46;
                        int *l_1176 = (void*)0;
                        int *l_1177 = &g_1178;
                        unsigned char *l_1185 = &g_112;
                        unsigned char *l_1186 = &g_962;
                        l_1164 = ((l_1136 ^ (l_1158 <= (safe_rshift_func_int16_t_s_u((l_1163 = func_11((safe_rshift_func_int16_t_s_s((***g_980), 0)))), 0)))) < (func_95((l_1130 = (((*l_994) = 0x8318BDE2L) , 0xE4L)), ((*l_1137) = (*l_1137)), &g_111) , (*l_1138)));
                        (*l_1138) = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(0L, 11)) == (((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((*l_1173) = ((*l_1058) == l_1163)) | func_29(l_1174, (**g_981), ((((*l_1177) = (((***g_980) | (*g_982)) && func_21(l_1175))) , (*l_1058)) , (void*)0), (*g_992), (***g_980))) != 6L), l_1130)), (*l_1058))) != (**g_583)) , (*l_1058))), l_1164));
                        (*l_986) = (func_21(func_35(((*l_1036) = (*l_1137)), (safe_mod_func_int16_t_s_s((**g_981), l_1136)), func_35(func_39((safe_rshift_func_uint16_t_u_s((l_1025 = l_1130), ((+(*g_111)) <= (safe_sub_func_uint32_t_u_u((((((*l_1037) = ((((*l_1126) = 0x34L) ^ func_29(l_1185, (*l_1058), l_1186, (*g_992), l_1130)) <= 9UL)) , 1L) <= l_1136) > (*g_982)), l_1136)))))), (*l_1138), (*l_1137)))) , (void*)0);
                        (*l_1058) = 0x3C41A159L;
                    }
                    else
                    {
                        int l_1192 = 0x0CBED822L;
                        unsigned char l_1193 = 0x91L;
                        (*g_116) = ((((((safe_add_func_uint16_t_u_u((l_1136 != l_1189), ((safe_mod_func_uint32_t_u_u((*g_584), (*g_116))) == ((*l_1058) = ((*g_116) > func_21((*l_1036))))))) ^ ((l_1192 ^ ((l_1130 , &l_1192) == &l_1136)) > (*g_111))) ^ 0x1D6ABEADL) ^ l_1193) || 0xB2D1BA31L) ^ 0x6DL);
                        (*g_116) = (*g_116);
                        l_1130 = 0x2CD0B864L;
                        l_1130 = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_1198, (safe_mul_func_int32_t_s_s(((*g_116) >= 1UL), ((*g_982) , (((*g_982) = ((safe_sub_func_uint16_t_u_u((func_7((l_1203 , func_95((l_1193 >= func_7((*g_116), (func_21(l_1204) , 0xA1B11405L), g_962)), &l_1193, l_1036)), l_1198, l_1189) , (*l_1138)), (***g_980))) & l_1136)) < (**l_986))))))), 1L));
                    }
                    l_1211 = func_58((((safe_lshift_func_int8_t_s_u((**g_991), 2)) > 255UL) ^ (((*l_1138) = (safe_rshift_func_int8_t_s_s((&l_1189 == (**g_1141)), 2))) >= (l_1025 = ((*l_1058) = ((**g_981) || l_1189))))));
                }
                for (g_121 = 0; (g_121 > (-18)); g_121 = safe_sub_func_uint32_t_u_u(g_121, 5))
                {
                    int *l_1214 = (void*)0;
                    unsigned char l_1219 = 0xF5L;
                    (*l_986) = l_1214;
                    (*l_1211) = func_21((((*g_584) & (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((*g_992), ((+((*l_1058) == (*g_111))) && (((*l_1036) = func_39(((*l_1211) = ((l_1219 , ((((g_115 = 0x2BA0L) <= 0x1A08L) , (safe_rshift_func_uint8_t_u_u((*g_26), (safe_add_func_uint8_t_u_u(((*l_1211) >= 0xFBBB32C8L), (*g_26)))))) == 2L)) , (*l_1211))))) == (void*)0)))), 1))) , (void*)0));
                    (*l_986) = &l_1130;
                }
            }
        }
        else
        {
            unsigned short *l_1228 = &l_1078;
            unsigned char *l_1229 = (void*)0;
            short l_1239 = 0x9DD4L;
            (**l_986) = (*g_116);
            (*l_1138) = (safe_lshift_func_int16_t_s_s(((*g_982) = (safe_rshift_func_uint16_t_u_u(l_6, func_29((*l_1036), (((*l_1228) = func_21((l_1203 , (void*)0))) , (((func_95(func_29(func_35(l_1229, (*g_116), &l_1135), (**g_981), (*l_1036), (*g_992), (***g_980)), l_1230, &l_1229) != l_1231) , 0x7EDFL) && l_1232)), (*l_1036), (*g_992), (*g_982))))), 14));
            (*g_116) = (safe_add_func_int8_t_s_s(((*g_992) = (*g_992)), (((safe_lshift_func_uint16_t_u_u(1UL, 15)) | ((safe_add_func_int8_t_s_s((**l_986), l_1239)) , (((~(((*g_116) , l_1239) , l_1239)) & (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*g_584) >= (g_121 = (*g_116))), 0x4495L)), l_1239))) , 0xCEE591EAL))) != l_1239)));
            for (g_20 = (-25); (g_20 != 5); g_20++)
            {
                unsigned l_1248 = 0x927A1156L;
                for (l_1089 = 0; (l_1089 == (-1)); l_1089--)
                {
                    short l_1251 = 1L;
                    unsigned short l_1267 = 2UL;
                    int l_1268 = (-9L);
                    g_116 = func_58((*g_992));
                    (*g_116) = l_1248;
                    if (l_1248)
                    {
                        return g_20;
                    }
                    else
                    {
                        unsigned short l_1263 = 65529UL;
                        int l_1264 = 0x3CC0343AL;
                        unsigned char *l_1266 = &l_1265;
                        (*l_1138) = (0x73F600F9L < 0x0B7D34D3L);
                        l_1268 = ((((**g_991) && (safe_add_func_int32_t_s_s((((l_1248 == l_1251) , (!((*g_982) = l_1248))) >= (((**g_583) >= ((safe_mod_func_uint16_t_u_u((*l_1138), func_29(((g_51 = (((((**l_986) = ((((((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((g_158 , (safe_add_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((((*l_990) = ((**g_991) = l_1239)) >= ((safe_unary_minus_func_int16_t_s(l_1263)) || l_1248)), 1L)) == l_1239) || (*g_992)), (**l_986)))), l_1239)) < l_1264), l_1248)) || (**g_583)) , l_1248) , &g_1141) != &g_1141) && 0xF7L)) , (*g_116)) > 1L) != (*g_26))) , (void*)0), l_1265, l_1266, g_158, g_20))) == l_1267)) > l_1251)), l_1248))) >= (*g_584)) || l_1239);
                    }
                }
            }
        }
        for (g_806 = 7; (g_806 <= 24); g_806 = safe_add_func_int16_t_s_s(g_806, 1))
        {
            unsigned short ***l_1277 = &g_474;
            int l_1280 = 0xD1457BE2L;
            int l_1282 = (-1L);
            unsigned **l_1285 = (void*)0;
            unsigned *l_1286 = &l_1081;
            unsigned char l_1304 = 0xC2L;
            unsigned char ****l_1320 = &l_1111;
            unsigned char l_1324 = 1UL;
            unsigned l_1340 = 0xFFC93EA0L;
            l_1280 = (safe_add_func_int8_t_s_s((**g_991), (safe_lshift_func_uint8_t_u_u(((((-3L) | ((safe_mod_func_uint32_t_u_u(((l_1277 == (void*)0) > ((***g_980) = (safe_mod_func_uint8_t_u_u(((*g_26) = l_1280), (**g_991))))), ((l_1281 , (**g_991)) | l_1280))) ^ (-9L))) <= l_1282) > l_1280), 6))));
            if (((*l_1138) = func_21(func_39(((l_1282 < (safe_sub_func_uint8_t_u_u(((*g_26) = (((***g_980) > (((g_1038 = (void*)0) != (g_1287 = l_1286)) != (safe_add_func_uint32_t_u_u(((*g_26) , (((*l_1138) != (safe_sub_func_int32_t_s_s((+(l_1280 = (((void*)0 != l_1292) ^ (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((l_1297 && l_1282), 1UL)) , l_1282), (**g_583)))))), l_1282))) < l_1282)), 9L)))) ^ 252UL)), l_1083))) , 0xA17918F6L)))))
            {
                unsigned char *l_1300 = &l_1265;
                unsigned char *l_1301 = &g_46;
                int *l_1303 = (void*)0;
                (*l_1138) = (((0xDA41L < (l_1280 , (**g_981))) , (safe_mod_func_uint8_t_u_u(func_7(l_1280, l_1280, func_95(((*g_111) = l_1282), func_35(l_1300, (&g_843 == &g_843), l_1301), l_1302)), 1UL))) < 65530UL);
                (*l_986) = l_1303;
                if ((l_1304 = (l_1280 != ((***g_980) = 0x7B57L))))
                {
                    unsigned char l_1310 = 255UL;
                    short l_1311 = 0x3A66L;
                    for (g_121 = 0; (g_121 < 16); ++g_121)
                    {
                        int *l_1313 = &g_1178;
                        int **l_1312 = &l_1313;
                        int l_1314 = (-2L);
                        int *l_1321 = &g_813;
                        (*l_986) = l_1303;
                        if (l_1025)
                            continue;
                        (*l_1321) = ((safe_unary_minus_func_uint8_t_u((((safe_add_func_uint32_t_u_u(((*l_994) = (((((*l_1138) = l_1310) >= ((***g_980) & (func_7((l_1311 , ((((l_1280 = (&g_1178 != ((*l_1312) = &g_1178))) <= 0xC8B039AEL) || (((l_1314 & ((l_1304 ^ ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_1319 = l_1314), 0x992AL)), (*g_26))) >= 1L)) , l_1314)) && 0xA53414EAL) < l_1314)) | l_1311)), (**g_583), g_115) == (*g_26)))) , l_1320) != (void*)0)), (**g_583))) == 0x5FL) < l_1304))) & l_1310);
                    }
                    (*l_986) = &g_42;
                }
                else
                {
                    (*l_1138) = (safe_lshift_func_int16_t_s_u(l_1324, 3));
                    if ((*l_1138))
                        break;
                }
                for (g_75 = 25; (g_75 != 11); g_75 = safe_sub_func_int8_t_s_s(g_75, 2))
                {
                    unsigned l_1327 = 0x940474C8L;
                    unsigned char *l_1328 = &g_20;
                    int l_1329 = 0x6D171B75L;
                    (*l_1138) = (((l_1327 = ((**g_981) != 65535UL)) <= ((((func_29(l_1328, l_1329, (l_1300 = (void*)0), (**g_991), func_29((*l_1036), (safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(((**g_583) = ((**g_991) | 0x96L)), l_1280)) > 1L) , (**g_583)) > (*l_1138)), l_1282)), l_1301, (*g_992), (***g_980))) | 0xBDD7L) > 0x2EL) & (-1L)) ^ 0xD9L)) <= 8UL);
                    if (g_1178)
                        continue;
                    (*l_1138) = 0x71B36E0EL;
                }
            }
            else
            {
                int l_1349 = (-7L);
                int l_1356 = 0L;
                int *l_1358 = &l_1025;
                (*l_986) = func_58((*g_992));
                (*l_1358) = ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((*g_992), (((0x66L | ((((((***g_980) | (((*l_1138) = (safe_rshift_func_uint8_t_u_s(((*g_26) = l_1340), (l_1357 = (l_1356 = ((((**l_986) = (*g_116)) ^ (safe_rshift_func_uint16_t_u_s((l_1280 = (safe_rshift_func_uint16_t_u_s((((l_1324 == (g_158 = (safe_sub_func_int16_t_s_s((**g_981), (safe_mod_func_uint16_t_u_u(l_1349, (((safe_add_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(func_95((*g_111), l_1354, l_1355), l_1304)) && l_1324), l_1324)) < 0xD76FL) | l_1282))))))) , l_1349) ^ 0xC5L), (*g_982)))), (**g_981)))) < (**g_583))))))) | l_1304)) | 0xE43A01A1L) != (***g_980)) ^ 0xCC0F29A1L) < 253UL)) , 0UL) | (*g_992)))), (*g_992))) , 0x6E164387L);
                if ((*g_116))
                    continue;
            }
        }
    }
    if (((**g_583) , (safe_mod_func_int16_t_s_s((**g_981), ((safe_add_func_uint8_t_u_u(l_1116, (((*l_1365) = ((func_7(((*l_1365) = ((*l_1364) = l_1363)), (*g_584), ((*l_1371) = (l_1366 != (safe_add_func_uint8_t_u_u(g_1369, (5L != ((*l_1370) = func_21((*l_1302))))))))) ^ (*g_584)) == (*g_982))) || l_1372))) , 0x7EF6L)))))
    {
        int l_1375 = 4L;
        (*l_1364) = (safe_sub_func_uint32_t_u_u(l_1375, (safe_add_func_uint16_t_u_u((+l_1375), (*g_982)))));
    }
    else
    {
        int l_1383 = 0L;
        unsigned short ***l_1389 = &g_442;
        unsigned char *l_1404 = &g_20;
        short l_1411 = 0L;
        int *l_1424 = &l_1025;
lbl_1445:
        for (g_158 = 0; (g_158 <= (-20)); g_158 = safe_sub_func_int32_t_s_s(g_158, 1))
        {
            int **l_1380 = &l_1365;
            int l_1391 = 2L;
            (*l_1380) = (void*)0;
            for (g_1178 = 23; (g_1178 == 24); ++g_1178)
            {
                unsigned l_1386 = 0x24C3FE19L;
                if (l_1383)
                    break;
                (*l_1364) = (safe_add_func_int32_t_s_s(l_1386, ((***g_980) < ((l_1386 | (((safe_sub_func_int16_t_s_s((***g_980), (g_540 != ((l_1383 < (((l_1390 = (!((((void*)0 == l_1389) | (**g_583)) >= l_1383))) <= (*g_584)) | 249UL)) , (void*)0)))) , l_1383) , l_1386)) && 0x5BFA823EL))));
                (*l_1380) = func_58(l_1391);
            }
            (*l_1380) = func_58((**g_991));
            (**l_1380) = ((((*l_1370) = func_7((**l_1380), ((safe_add_func_uint32_t_u_u((4L != 0x5FB4L), (((safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_1398, ((l_1383 >= (6L && (((*g_26) = l_1383) | (0x8478L & (l_1399 != (**l_1380)))))) | 0x7B5BL))) > l_1400), (*l_1365))) , l_1401) == &g_584))) , 0UL), g_747)) | (***g_980)) <= (**l_1380));
        }
        if ((*l_1365))
        {
            int l_1402 = 0L;
            unsigned char *l_1403 = (void*)0;
            unsigned char ****l_1405 = &l_1111;
            (*l_1364) = ((((**l_1355) = l_1383) , (func_11((*g_992)) | l_1402)) && (((func_29(l_1403, ((*l_1364) , (***g_980)), l_1404, l_1383, (***g_980)) , (**g_991)) > l_1402) != l_1383));
            (*l_1365) = ((l_1405 != g_540) , ((func_7((((*l_1365) ^ (((*l_1364) ^ (*l_1364)) || (safe_add_func_int8_t_s_s((((253UL ^ 0xE4L) > ((**g_981) = (((l_1383 != (safe_add_func_uint8_t_u_u(((l_1410 , (*g_584)) <= 6UL), 249UL))) & (*g_992)) == (-1L)))) > (*l_1365)), (*g_111))))) < l_1383), l_1402, l_1411) | l_1383) == 0xF8B3L));
        }
        else
        {
            unsigned short l_1419 = 65530UL;
            char l_1435 = 0xA5L;
            int *l_1441 = &g_813;
            for (l_1411 = 0; (l_1411 < 6); l_1411 = safe_add_func_uint8_t_u_u(l_1411, 7))
            {
                int l_1420 = 0x415B6883L;
                int *l_1423 = &g_813;
                int **l_1436 = &l_1364;
                for (l_1232 = 14; (l_1232 != 19); ++l_1232)
                {
                    int l_1416 = 0x3897149FL;
                    unsigned char *l_1417 = (void*)0;
                    int *l_1418 = &g_813;
                    int **l_1431 = &g_116;
                    int **l_1432 = &l_1418;
                    if (func_95(func_95(((*l_1365) , l_1416), l_1417, &g_26), (*l_1355), &g_111))
                    {
                        int **l_1421 = &l_1364;
                        g_116 = func_58(l_1383);
                        l_1418 = &l_1025;
                        g_116 = (l_1411 , func_58(l_1419));
                        (*l_1421) = (((*l_1365) = l_1420) , &g_121);
                    }
                    else
                    {
                        int *l_1422 = &l_1383;
                        int **l_1425 = (void*)0;
                        int **l_1426 = &l_1418;
                        int **l_1427 = &l_1423;
                        char *l_1430 = &l_1083;
                        l_1423 = l_1422;
                        (*l_1427) = ((*l_1426) = (l_1424 = (void*)0));
                        (*l_1365) = ((((l_1419 | (((((func_11(func_95((*g_111), l_1417, &g_26)) , 0xC3L) | ((*l_1430) = ((((*l_1422) , 0x59588EC1L) , g_962) <= g_1369))) == 0x93E9L) , (*g_26)) && l_1419)) , &g_51) == &g_1369) , l_1420);
                    }
                    (*l_1432) = ((*l_1431) = func_58((**g_991)));
                    for (g_1178 = (-15); (g_1178 <= 11); ++g_1178)
                    {
                        (*l_1432) = &l_1383;
                    }
                }
                g_116 = (l_1435 , &g_121);
                (*l_1436) = &l_1025;
            }
            for (g_813 = 27; (g_813 != 3); g_813--)
            {
                for (l_1081 = (-21); (l_1081 <= 24); l_1081++)
                {
                    int **l_1442 = &l_1441;
                    (*l_1442) = l_1441;
                    (*l_1364) = (*l_1441);
                }
            }
        }
        for (g_158 = (-24); (g_158 != (-19)); g_158++)
        {
            unsigned short l_1450 = 65531UL;
            char ***l_1451 = (void*)0;
            char ***l_1452 = (void*)0;
            char ***l_1453 = &g_991;
            if (l_1135)
                goto lbl_1445;
            (*l_1364) = (safe_add_func_int16_t_s_s(func_95((g_1448 == (void*)0), (((***g_980) , ((l_1450 , (void*)0) == ((*l_1453) = &g_992))) , func_39((func_21(l_1404) , 0xD8E3D2EDL))), &g_111), (*l_1364)));
            (*l_1364) = l_1450;
        }
    }
    return (*l_1365);
}







static int func_7(int p_8, unsigned p_9, int p_10)
{
    unsigned short *****l_959 = (void*)0;
    int *l_960 = &g_813;
    (*l_960) = (p_9 , (l_959 != l_959));
    return g_121;
}







static unsigned func_11(char p_12)
{
    unsigned char *l_18 = (void*)0;
    unsigned char *l_19 = &g_20;
    short *l_49 = &g_50;
    unsigned char **l_53 = &l_18;
    short l_54 = 0xF6F0L;
    int *l_545 = &g_42;
    unsigned char *l_590 = &g_46;
    int l_600 = 0L;
    unsigned char *l_618 = &g_112;
    short **l_632 = &l_49;
    short ***l_631 = &l_632;
    int *l_648 = &g_42;
    int l_661 = 0xB96A1F44L;
    unsigned short ***l_688 = &g_442;
    int l_718 = 0x87CBDCA1L;
    int *l_790 = (void*)0;
    unsigned short ***l_828 = &g_442;
    unsigned char *l_889 = (void*)0;
    char l_893 = 0xF6L;
    short l_928 = 0x56A6L;
    if ((safe_add_func_int16_t_s_s((((p_12 , g_15) & (~(safe_rshift_func_uint8_t_u_u(((*l_19) = g_15), 6)))) || func_21(l_19)), (((safe_add_func_uint32_t_u_u(func_29(((*l_53) = func_35(func_39(p_12), (safe_mod_func_int16_t_s_s((g_51 = (g_15 >= ((*l_49) = g_15))), g_15)), l_18)), p_12, l_19, l_54, p_12), g_112)) , p_12) || l_54))))
    {
        int **l_542 = &g_116;
        int *l_544 = (void*)0;
        int **l_543 = &l_544;
        short l_548 = 0x3DE5L;
        unsigned char *l_549 = &g_20;
        unsigned char **l_550 = &l_19;
        int *l_551 = &g_42;
        char *l_575 = &g_75;
        char **l_574 = &l_575;
        unsigned l_580 = 0x8252309EL;
        unsigned **l_585 = &g_584;
        l_545 = ((*l_543) = ((g_50 >= p_12) , ((*l_542) = (void*)0)));
lbl_622:
        (*l_551) = (p_12 , func_21(func_35(((*l_53) = (*l_53)), (p_12 , l_54), ((*l_550) = func_35((g_46 , (void*)0), ((safe_sub_func_uint32_t_u_u(5UL, (~(l_548 , g_75)))) ^ p_12), l_549)))));
        (*l_542) = (void*)0;
        for (g_15 = 0; (g_15 >= (-14)); --g_15)
        {
            short l_564 = (-6L);
            unsigned char *l_572 = (void*)0;
            unsigned short *l_595 = &g_115;
            int *l_621 = &g_42;
            unsigned char *l_634 = (void*)0;
            int **l_649 = &l_621;
            int **l_650 = &g_116;
            int **l_651 = &l_621;
            int **l_652 = &l_621;
            int **l_653 = &l_621;
            int **l_654 = &g_116;
            int **l_655 = &l_621;
            int **l_656 = (void*)0;
            int **l_657 = &g_116;
            int **l_658 = &l_621;
            int **l_659 = &l_551;
            unsigned l_660 = 1UL;
            if ((safe_lshift_func_uint8_t_u_s(p_12, 5)))
            {
                short l_581 = 0x41F0L;
                short **l_586 = &l_49;
                for (g_75 = 0; (g_75 > 28); g_75 = safe_add_func_int16_t_s_s(g_75, 5))
                {
                    unsigned char **l_573 = &l_549;
                    unsigned short ***l_577 = &g_474;
                    char **l_578 = &l_575;
                    short ***l_587 = &l_586;
                    (*l_551) = (safe_sub_func_int16_t_s_s(((*l_49) = g_46), ((g_42 || (p_12 < (0UL <= l_564))) > (safe_rshift_func_uint8_t_u_u(p_12, 7)))));
                    if (((g_75 >= l_564) , ((void*)0 == &g_50)))
                    {
                        (*l_551) = (((&g_42 != (void*)0) , (*l_550)) == (void*)0);
                        return l_564;
                    }
                    else
                    {
                        unsigned *l_571 = &g_79;
                        int l_579 = 5L;
                        unsigned char *l_582 = &g_20;
                        (*l_543) = ((*l_542) = (void*)0);
                        l_585 = (func_29(((*l_53) = func_39(((safe_add_func_uint32_t_u_u((l_564 | (((safe_mod_func_uint16_t_u_u((((*l_571) = g_158) > (func_95(p_12, l_572, l_573) < (l_574 == ((safe_unary_minus_func_uint16_t_u((g_158 , ((void*)0 != l_577)))) , l_578)))), l_579)) , 0x71D6L) , g_50)), l_580)) < l_581))), p_12, l_582, p_12, p_12) , g_583);
                        (*l_542) = &g_121;
                        (*l_542) = &l_579;
                    }
                    (*l_587) = l_586;
                }
            }
            else
            {
                g_116 = (*l_543);
            }
            if ((1UL || func_29(func_35(((func_29(&g_112, g_76, ((func_29((*l_53), ((*l_49) = (safe_add_func_int32_t_s_s(l_564, func_21(((*l_550) = func_39(p_12)))))), l_590, g_75, g_158) < 0L) , l_572), p_12, g_15) == (*g_584)) , (void*)0), p_12, l_572), g_75, l_572, g_158, g_51)))
            {
                (*l_543) = (g_116 = (void*)0);
                l_600 = (((l_564 == ((safe_rshift_func_int8_t_s_s((((0UL && ((safe_mod_func_uint32_t_u_u(((void*)0 != l_595), ((*l_551) = (safe_rshift_func_int8_t_s_s(((**l_574) = ((p_12 | p_12) , (safe_sub_func_uint32_t_u_u((((l_564 >= 0x89DCL) && ((((*g_111) = (*g_111)) && p_12) , g_75)) || 8UL), p_12)))), 6))))) , 1L)) < p_12) ^ g_15), g_79)) != l_564)) , p_12) , l_564);
                (*l_551) = l_564;
                (*l_551) = 0x3CD10E40L;
            }
            else
            {
                short l_609 = 1L;
                int *l_625 = &g_42;
                unsigned char *l_633 = &g_20;
                if ((safe_rshift_func_int16_t_s_s(g_158, 0)))
                {
                    int *l_606 = (void*)0;
                    unsigned char *l_614 = &g_20;
                    int l_615 = 0x5B71B016L;
                    for (g_121 = (-28); (g_121 < (-26)); ++g_121)
                    {
                        int *l_605 = &g_121;
                        (*l_542) = l_605;
                        if ((*l_605))
                            break;
                        (*l_543) = l_606;
                    }
                    if (((safe_lshift_func_uint8_t_u_s(l_609, 4)) , (safe_mod_func_uint8_t_u_u((*g_26), (((safe_add_func_int16_t_s_s((g_158 = func_29(l_614, g_50, (*l_53), l_615, (safe_add_func_uint32_t_u_u(((p_12 | func_29(l_618, (safe_mod_func_uint32_t_u_u((**g_583), (**g_583))), l_614, l_609, p_12)) ^ l_609), 0x02E42034L)))), l_609)) , g_112) , p_12)))))
                    {
                        l_621 = &l_615;
                        if (g_51)
                            goto lbl_622;
                        (*l_543) = (*l_543);
                    }
                    else
                    {
                        unsigned char *l_623 = &g_20;
                        (*l_621) = (*l_621);
                        (*l_542) = l_621;
                        (*l_542) = ((*l_543) = func_58((func_21(l_614) && func_21((l_623 = (void*)0)))));
                    }
                    (*l_542) = (*l_543);
                }
                else
                {
                    unsigned l_624 = 4294967286UL;
                    unsigned char *l_627 = (void*)0;
                    int **l_645 = &l_621;
                    if (l_624)
                        break;
                    if (p_12)
                    {
                        (*l_542) = l_625;
                        (*l_551) = p_12;
                    }
                    else
                    {
                        unsigned short l_626 = 5UL;
                        int l_628 = 2L;
                        (*l_551) = (((p_12 || ((((l_626 = p_12) >= (0xE526L == func_29(l_627, l_628, (*l_53), ((**l_574) = (func_21(func_39((p_12 | func_29(((safe_sub_func_uint16_t_u_u((((void*)0 == l_631) || (*l_625)), p_12)) , l_633), g_75, l_634, p_12, g_46)))) & l_628)), g_115))) , (*l_625)) && l_624)) & p_12) , 0xC11DD320L);
                    }
                    (*l_551) = (((*g_584) <= (safe_sub_func_int8_t_s_s(p_12, (safe_sub_func_uint8_t_u_u((0xB483EAACL >= (func_29(l_633, (((*l_595) = ((g_158 ^ (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((&l_625 != l_645) < ((**l_645) == p_12)), 0UL)), (-1L)))) >= 65535UL)) >= (*l_621)), (*l_550), g_75, p_12) , 0x48BCF3B1L)), g_75))))) > p_12);
                }
                (*l_551) = 0x11FA0658L;
            }
            l_661 = ((*l_648) = ((g_115 >= p_12) < (p_12 && func_29((*l_550), (safe_rshift_func_int8_t_s_s(1L, (((*l_659) = ((*l_543) = l_648)) == &g_121))), func_35((*l_53), p_12, (*l_53)), l_660, g_115))));
        }
    }
    else
    {
        unsigned char *l_662 = &g_112;
        unsigned short l_663 = 3UL;
        (*l_545) = func_29((*l_53), p_12, l_662, l_663, l_663);
        (*l_648) = l_663;
        for (g_46 = 0; (g_46 < 47); ++g_46)
        {
            unsigned short ***l_675 = &g_474;
            unsigned char **l_676 = &l_19;
            int l_677 = (-5L);
            for (g_76 = 21; (g_76 == (-9)); g_76 = safe_sub_func_int32_t_s_s(g_76, 2))
            {
                short l_668 = 0xD579L;
            }
            for (g_115 = 27; (g_115 < 23); g_115--)
            {
                return (*l_545);
            }
            for (g_79 = (-16); (g_79 <= 29); g_79 = safe_add_func_int32_t_s_s(g_79, 3))
            {
                char l_713 = 0x84L;
                int l_714 = 0x9DD2BB8DL;
                unsigned char **l_720 = &g_111;
                for (l_677 = 2; (l_677 == 6); l_677++)
                {
                    unsigned char *l_703 = (void*)0;
                    int l_706 = 0L;
                    int **l_707 = (void*)0;
                    int **l_708 = &g_116;
                    (*l_708) = (((safe_add_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((((p_12 , ((void*)0 != (**l_675))) < 0xFAE4L) | ((*l_545) < ((p_12 & (p_12 & ((safe_mod_func_uint8_t_u_u(func_29(l_703, (p_12 >= 0UL), l_662, l_706, g_46), p_12)) < p_12))) , l_706))), 0xCD74CA90L)) & 0L) , 1L), l_677)) && 0x7AD30C7CL) , &g_121);
                    l_714 = ((safe_lshift_func_int16_t_s_u(((((safe_add_func_int16_t_s_s((((**l_708) = (*g_116)) < p_12), (l_663 | ((((p_12 <= 0x3112L) >= (p_12 | p_12)) , ((((g_158 = ((((p_12 , func_95(((**g_583) && p_12), (*l_676), &l_19)) <= 0UL) , l_663) , p_12)) < p_12) && 0x6E772F33L) , 252UL)) || g_115)))) || (*g_111)) , (void*)0) != (void*)0), p_12)) & l_713);
                    if ((*l_648))
                        continue;
                    for (g_75 = 0; (g_75 < 15); ++g_75)
                    {
                        unsigned char l_717 = 255UL;
                        unsigned char **l_719 = (void*)0;
                        l_717 = (p_12 == p_12);
                        (*l_708) = &g_121;
                        if ((*g_116))
                            continue;
                        (*l_648) = ((*g_116) = func_95((*l_648), (*l_676), ((0xB9L >= func_95(l_718, ((*l_53) = l_662), l_719)) , l_720)));
                    }
                }
                (*l_648) = p_12;
                (*l_545) = l_714;
                (*l_648) = 0xC2DD8730L;
            }
            return p_12;
        }
    }
    if (p_12)
    {
        return (**g_583);
    }
    else
    {
        int l_740 = 0x96C1C525L;
        unsigned char **l_749 = (void*)0;
        unsigned short ****l_758 = &l_688;
        unsigned **l_820 = &g_584;
        unsigned char *l_830 = &g_46;
        int **l_831 = (void*)0;
        int **l_835 = &g_116;
        unsigned short *****l_844 = (void*)0;
        unsigned short ****l_846 = &l_828;
        unsigned short *****l_845 = &l_846;
        unsigned char ****l_880 = (void*)0;
        for (l_718 = (-13); (l_718 >= 15); l_718 = safe_add_func_uint32_t_u_u(l_718, 4))
        {
            short l_737 = 0x5459L;
            unsigned char *l_748 = (void*)0;
            int l_753 = 0xDB18C6D6L;
            int l_774 = 0x252EB74CL;
            int ***l_832 = (void*)0;
            int ***l_834 = &l_831;
            for (l_661 = (-19); (l_661 < (-23)); l_661 = safe_sub_func_uint8_t_u_u(l_661, 1))
            {
                int **l_727 = &l_545;
                (*l_727) = func_58((safe_mod_func_int16_t_s_s(g_15, p_12)));
            }
            for (g_20 = (-30); (g_20 < 23); g_20 = safe_add_func_int32_t_s_s(g_20, 7))
            {
                int *l_730 = &g_42;
                unsigned char **l_752 = &l_590;
                char *l_827 = &g_75;
                unsigned short ***l_829 = &g_442;
                if (p_12)
                {
                    int **l_731 = &l_545;
                    (*l_731) = l_730;
                }
                else
                {
                    char l_736 = 0x3EL;
                    int **l_754 = &g_116;
                    for (g_112 = 0; (g_112 < 47); g_112++)
                    {
                        unsigned char *l_741 = &g_112;
                        int l_744 = 0xC6F9AD18L;
                        unsigned *l_745 = (void*)0;
                        unsigned *l_746 = &g_747;
                        (*l_730) = (*l_730);
                        (*l_730) = func_95(((safe_lshift_func_int8_t_s_s(l_736, (((*l_49) = (l_737 | p_12)) < (safe_add_func_int16_t_s_s(l_740, func_29(l_741, ((g_51 < (((*l_746) = (((**g_583) = (safe_rshift_func_uint8_t_u_s((g_76 & l_744), 7))) > l_736)) , (**g_583))) >= 0x28B2L), l_748, g_42, (*l_648))))))) , p_12), (*l_53), l_749);
                        (*l_730) = ((0xEFL && (0xAD8F5C55L || func_29(l_748, ((l_753 = (safe_lshift_func_int16_t_s_u(((*l_730) ^ func_95(p_12, l_741, l_752)), 2))) > 0xDF26L), l_748, p_12, g_112))) >= p_12);
                    }
                    (*l_730) = l_740;
                    (*l_754) = &l_661;
                }
                for (g_747 = 0; (g_747 == 45); ++g_747)
                {
                    unsigned short *l_757 = &g_115;
                    char *l_759 = (void*)0;
                    char *l_760 = &g_76;
                    unsigned l_772 = 3UL;
                    unsigned char **l_773 = &l_590;
                    char l_782 = 0x0BL;
                    int **l_786 = (void*)0;
                    int **l_787 = &l_730;
                    unsigned l_814 = 1UL;
                    if (((l_757 != l_757) < func_95((((+((*l_760) = (l_758 != l_758))) <= p_12) , (((*l_757) = (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((p_12 < ((*l_730) & 0xABL)), 0)), (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((l_772 = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s((g_50 , (*l_730)))), 7))), 6L)), 7))))) & p_12)), (*l_53), l_773)))
                    {
                        (*l_648) = p_12;
                        if (p_12)
                            continue;
                        if (l_774)
                            break;
                        if (p_12)
                            break;
                    }
                    else
                    {
                        unsigned char *l_777 = &g_20;
                        char *l_780 = &g_76;
                        int l_781 = 3L;
                        int *l_783 = (void*)0;
                        int *l_784 = &l_774;
                        int *l_785 = &l_661;
                        (*l_785) = ((*l_784) = ((*l_730) = ((0x52E86C61L || (safe_add_func_int8_t_s_s(((*l_760) = (func_29(func_35((*l_773), p_12, l_777), (safe_mod_func_uint8_t_u_u(((&g_75 == (l_780 = &g_15)) > l_781), p_12)), (*l_773), g_51, g_121) < g_158)), 252UL))) , l_782)));
                    }
                    (*l_787) = func_58(func_95(p_12, func_39(p_12), &l_18));
                    for (g_76 = 0; (g_76 > 20); ++g_76)
                    {
                        (*l_787) = (void*)0;
                        (*l_787) = &g_42;
                        (*l_648) = ((((*l_730) ^ (*g_584)) , (l_790 = ((*l_787) = l_730))) == (void*)0);
                    }
                    for (g_46 = 0; (g_46 != 37); g_46 = safe_add_func_uint32_t_u_u(g_46, 8))
                    {
                        unsigned short *l_805 = &g_806;
                        int l_809 = (-1L);
                        unsigned char *l_810 = &g_112;
                        unsigned l_815 = 5UL;
                        g_813 = (safe_add_func_int32_t_s_s((((*g_584) = ((safe_rshift_func_int8_t_s_s(((p_12 != (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_u(((l_737 <= p_12) > ((**l_787) = ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_805) = ((*l_757) = l_753)), 10)), (safe_add_func_uint8_t_u_u(((l_809 == ((l_810 == (*l_752)) > (safe_rshift_func_int8_t_s_s(((0L > (g_813 >= p_12)) > g_121), 5)))) != l_814), l_809)))) == 0x15L))), 0)) , l_737) ^ l_815) , p_12), p_12))) ^ g_158), 6)) , 0xD221CF66L)) == p_12), 1L));
                        (**l_787) = 0x23C09960L;
                        g_116 = (*l_787);
                    }
                }
                (*l_730) = (safe_mod_func_int16_t_s_s(func_95(func_29(l_748, (func_29((*l_752), (((((((safe_add_func_int8_t_s_s(0x5EL, ((*l_827) = (((l_820 == (void*)0) && p_12) & (safe_sub_func_int16_t_s_s(((!(safe_mod_func_uint8_t_u_u(((l_774 = (safe_rshift_func_int16_t_s_s((p_12 >= p_12), 12))) , 0UL), l_737))) ^ p_12), l_740)))))) == l_753) , l_828) == l_829) < l_737) <= p_12) , 0x33F0L), (*l_53), p_12, p_12) >= 6L), (*l_752), p_12, p_12), l_830, &l_748), p_12));
            }
            if ((*l_648))
                continue;
            (*l_834) = (g_833 = l_831);
        }
        (*l_835) = &l_740;
        if ((safe_unary_minus_func_uint16_t_u((((safe_lshift_func_int8_t_s_u(1L, 1)) & ((((safe_lshift_func_int16_t_s_s(((g_843 = l_758) == ((0x1A87L >= 4UL) , ((*l_845) = &l_828))), 2)) < (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((g_853 , (safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(((void*)0 == &l_545), (safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(((*l_648) <= 65535UL), (*g_111))))))) < p_12), 0x8DCC8A75L))), p_12)), p_12)), p_12))) , p_12) && 0L)) || (**l_835)))))
        {
            unsigned char ***l_861 = (void*)0;
            int l_862 = 0x0E12267AL;
            unsigned short *l_863 = &g_115;
            unsigned short *l_864 = &g_806;
            (*l_648) = (((*l_864) = ((*l_863) = (l_862 = (l_861 == &l_53)))) || ((safe_add_func_int8_t_s_s(g_42, ((((safe_mod_func_uint16_t_u_u(func_95((*l_648), (*l_53), (((**l_835) , (safe_lshift_func_int8_t_s_u((~(*l_648)), 1))) , (void*)0)), g_46)) , p_12) , p_12) ^ l_862))) , l_862));
            return (*g_584);
        }
        else
        {
            short l_877 = (-4L);
            char *l_878 = &g_15;
            int l_879 = 4L;
            (*l_835) = (void*)0;
            (*l_835) = (void*)0;
            l_879 = ((p_12 , g_46) || (safe_add_func_int32_t_s_s((((((*l_878) = (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((*l_648), ((p_12 || (l_877 && g_50)) ^ (p_12 , p_12)))), 0xD2CE3A9BL))) < 1UL) , 4294967291UL) , l_877), (**g_583))));
        }
        (*l_648) = (l_880 == (void*)0);
    }
    for (l_54 = 0; (l_54 <= (-25)); l_54--)
    {
        unsigned short l_890 = 0xA0F9L;
        int l_891 = 6L;
        unsigned short l_894 = 65535UL;
        int ***l_900 = &g_833;
        for (g_79 = 12; (g_79 >= 22); g_79 = safe_add_func_uint8_t_u_u(g_79, 1))
        {
            unsigned short *l_887 = &g_115;
            int l_888 = 0L;
            unsigned char *l_892 = &g_20;
            char l_899 = (-3L);
            int ***l_902 = &g_833;
            int ****l_901 = &l_902;
            (*l_648) = (l_888 = (65535UL > ((**l_632) = ((safe_mod_func_int16_t_s_s((p_12 & ((*l_887) = p_12)), func_21((*l_53)))) | p_12))));
            l_894 = (func_21(l_889) == func_29((*l_53), ((((((0x9DL | ((~((+l_890) == p_12)) & l_891)) ^ func_95(p_12, l_892, &l_19)) >= 0x77L) < l_893) , 8UL) > 0x7775L), (*l_53), g_75, g_75));
            g_121 = func_95((safe_mod_func_uint8_t_u_u((l_888 , p_12), (+(safe_lshift_func_int16_t_s_u((l_888 == p_12), ((((p_12 , (l_899 , l_900)) == ((*l_901) = &g_833)) || 0xF3L) || p_12)))))), (*l_53), &l_618);
        }
        for (g_46 = (-7); (g_46 != 56); g_46 = safe_add_func_int16_t_s_s(g_46, 5))
        {
            int *l_905 = (void*)0;
            int **l_906 = &l_790;
            (*l_906) = l_905;
        }
    }
    if (p_12)
    {
        unsigned short l_907 = 65535UL;
        int ***l_909 = &g_833;
        unsigned char *l_912 = (void*)0;
        int *l_927 = &l_661;
        char *l_929 = &g_75;
        int **l_930 = &l_790;
        (*l_648) = p_12;
        (*l_930) = func_58((((l_907 , p_12) >= ((safe_unary_minus_func_int8_t_s(((*l_929) = (((((*l_909) = (void*)0) != &l_545) < ((safe_add_func_uint16_t_u_u(((*l_648) = 65530UL), ((***l_631) = (p_12 , ((func_29(l_912, ((safe_lshift_func_uint8_t_u_s((p_12 <= (safe_sub_func_uint32_t_u_u(func_95((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(((*l_927) = (((!(safe_add_func_int8_t_s_s((g_747 , g_51), 0x81L))) >= l_907) > p_12)), (**g_583))), p_12)), (*g_584))) , p_12), 4)) , l_928) > g_158), l_912, &l_18), 0UL))), p_12)) , g_115), l_912, g_50, g_158) , p_12) >= g_15))))) , p_12)) >= 0xDC19BCA6L)))) == p_12)) <= 7UL));
    }
    else
    {
        unsigned char l_939 = 0x5AL;
        char *l_942 = (void*)0;
        char *l_943 = (void*)0;
        char *l_944 = (void*)0;
        char *l_945 = &g_76;
        int **l_946 = &l_790;
        (*l_648) = (safe_sub_func_int32_t_s_s(p_12, (((*l_945) = ((safe_mod_func_int8_t_s_s(((!(+p_12)) == (*g_111)), (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(l_939, func_95((*l_648), &l_939, &l_18))), ((safe_rshift_func_uint8_t_u_u(p_12, 7)) == g_747))))) == 7UL)) != p_12)));
        (*l_946) = (void*)0;
        for (g_50 = 8; (g_50 > (-9)); g_50--)
        {
            int *l_949 = &l_661;
            unsigned char *l_958 = (void*)0;
            l_648 = ((*l_946) = func_58(p_12));
            (*l_946) = l_949;
            (*l_946) = ((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(0x02L, (+(safe_add_func_uint8_t_u_u(0xE9L, ((**l_946) < (-6L))))))), 5)) , func_58(((((((**l_946) , (((safe_add_func_int16_t_s_s((**l_946), func_29(&l_939, ((*l_648) = 0L), ((*l_53) = l_958), g_121, g_20))) < (*l_949)) , 0x7CC353EEL)) , p_12) , 0x8B68L) , (-1L)) && (*l_949))));
        }
        l_946 = (void*)0;
    }
    return p_12;
}







static int func_21(unsigned char * p_22)
{
    unsigned char *l_24 = &g_20;
    unsigned char **l_23 = &l_24;
    g_25 = l_23;
    return g_20;
}







static unsigned func_29(unsigned char * p_30, short p_31, unsigned char * p_32, char p_33, short p_34)
{
    unsigned l_57 = 0x1A0197CBL;
    int **l_541 = &g_116;
    for (p_34 = 0; (p_34 < 22); p_34 = safe_add_func_uint8_t_u_u(p_34, 1))
    {
        return l_57;
    }
    (*l_541) = func_58(l_57);
    return p_34;
}







static unsigned char * func_35(unsigned char * p_36, int p_37, unsigned char * p_38)
{
    int *l_52 = &g_42;
    (*l_52) = g_51;
    return p_36;
}







static unsigned char * func_39(int p_40)
{
    int *l_41 = &g_42;
    unsigned char *l_45 = &g_46;
    l_41 = l_41;
    for (p_40 = 0; (p_40 < (-2)); --p_40)
    {
        (*l_41) = p_40;
    }
    return l_45;
}







static int * func_58(char p_59)
{
    unsigned char *l_191 = &g_112;
    int l_203 = 0x1D961218L;
    unsigned short *l_219 = &g_115;
    int *l_225 = &g_121;
    short l_244 = (-8L);
    unsigned char l_313 = 0UL;
    unsigned l_350 = 1UL;
    unsigned char ***l_353 = &g_340;
    unsigned char ***l_402 = &g_340;
    unsigned l_411 = 0x48CE3E4DL;
    unsigned short ***l_476 = &g_442;
    short l_478 = (-7L);
    short l_499 = (-2L);
    short l_520 = 0x12FAL;
    char l_539 = 0xA8L;
    for (p_59 = 0; (p_59 > (-9)); p_59--)
    {
        short *l_73 = &g_50;
        unsigned char **l_187 = &g_111;
        int l_190 = 0L;
        unsigned char l_196 = 1UL;
        int l_202 = (-5L);
        char *l_211 = (void*)0;
        char *l_212 = &g_76;
        int *l_220 = &g_42;
        int *l_291 = &g_121;
        unsigned char l_342 = 6UL;
        int l_361 = 0xD3AF3EE6L;
        char l_417 = 0x0EL;
        unsigned l_518 = 0xB18CC3C2L;
        unsigned char *l_519 = (void*)0;
    }
    for (p_59 = (-9); (p_59 == (-30)); --p_59)
    {
        int **l_533 = &l_225;
        unsigned char ****l_536 = (void*)0;
        (*l_533) = &l_203;
        (*l_225) = (safe_sub_func_int16_t_s_s((((l_402 = &g_340) != l_353) > (safe_add_func_int16_t_s_s((p_59 < 0xBD7356E3L), func_95((g_115 , (func_95(p_59, &g_112, (*l_353)) && (**l_533))), &l_313, (*l_353))))), (-10L)));
        (*l_533) = &g_121;
        (*l_225) = l_539;
    }
    (*l_225) = (&l_402 != g_540);
    return &g_42;
}







static unsigned char ** func_64(char p_65, unsigned p_66, unsigned char p_67, int * p_68, int * p_69)
{
    unsigned short l_99 = 65530UL;
    unsigned char *l_101 = (void*)0;
    int **l_117 = &g_116;
    unsigned l_155 = 4294967291UL;
    char l_156 = 0x4EL;
    short *l_174 = (void*)0;
    short *l_175 = (void*)0;
    short *l_176 = &g_158;
    unsigned char **l_178 = (void*)0;
    unsigned char ***l_177 = &l_178;
    for (g_42 = 0; (g_42 >= 21); ++g_42)
    {
        int l_86 = 0x375426BEL;
        int *l_87 = &l_86;
        if (g_79)
            break;
        for (g_79 = 0; (g_79 < 8); g_79 = safe_add_func_uint8_t_u_u(g_79, 2))
        {
            for (g_76 = (-19); (g_76 == 22); g_76++)
            {
                if (l_86)
                    break;
                return &g_26;
            }
        }
        (*l_87) = (p_65 < 0xB03C7580L);
    }
    for (g_51 = 0; (g_51 < 9); g_51 = safe_add_func_uint32_t_u_u(g_51, 3))
    {
        short l_92 = (-3L);
        unsigned char *l_100 = (void*)0;
        unsigned char **l_102 = &l_101;
        unsigned char *l_110 = &g_46;
        unsigned short *l_113 = &l_99;
        unsigned short *l_114 = &g_115;
        int **l_118 = &g_116;
        (*p_69) = ((safe_sub_func_uint16_t_u_u(l_92, (((l_92 >= 5UL) & (func_95((l_99 , (p_67 = l_99)), l_101, l_102) != ((1L || (-1L)) <= (*p_68)))) == g_15))) < l_92);
        (*p_69) = (((*p_68) ^ (p_66 | ((*l_114) = ((*l_113) = (safe_add_func_uint32_t_u_u(g_79, (l_92 > (safe_lshift_func_uint16_t_u_u((0xA103C289L ^ func_95((l_99 , ((*l_110) = ((0L & func_95(l_92, (g_26 = (*l_102)), &l_100)) < (-1L)))), g_111, &l_101)), 9))))))))) && l_92);
        g_116 = p_68;
        l_118 = l_117;
    }
    if ((l_99 & g_76))
    {
        int *l_119 = &g_42;
        char *l_134 = &g_76;
        unsigned char **l_153 = (void*)0;
lbl_152:
        if ((*p_69))
        {
            int *l_120 = &g_121;
            char *l_133 = &g_76;
            l_119 = ((*l_117) = (void*)0);
            (*l_117) = p_68;
            (*l_120) = ((*p_69) = (**l_117));
            if ((safe_mod_func_uint8_t_u_u((*g_111), p_65)))
            {
                unsigned l_137 = 0UL;
                for (g_51 = 0; (g_51 < 32); ++g_51)
                {
                    unsigned char **l_131 = &l_101;
                    if ((*g_116))
                    {
                        if ((*g_116))
                            break;
                        return &g_26;
                    }
                    else
                    {
                        int l_128 = 1L;
                        unsigned char **l_132 = &g_26;
                        (**l_117) = ((l_133 = ((safe_mod_func_uint16_t_u_u(l_128, (safe_add_func_int32_t_s_s((g_76 , func_95(func_95((**l_117), &g_46, l_131), ((*l_131) = l_101), l_132)), p_67)))) , &p_65)) == l_134);
                        return &g_111;
                    }
                }
                if (p_66)
                    goto lbl_152;
                (**l_117) = (l_119 != l_120);
                for (l_99 = 18; (l_99 != 45); l_99++)
                {
                    (*p_69) = func_95(l_137, &g_46, &g_111);
                }
                (*l_117) = &g_42;
            }
            else
            {
                unsigned short l_138 = 0UL;
                (*g_116) = l_138;
                (*p_68) = (4L | (safe_mod_func_uint16_t_u_u(0x01D6L, (safe_add_func_int32_t_s_s((*g_116), (safe_lshift_func_uint8_t_u_s(l_138, 1)))))));
                if (l_99)
                    goto lbl_152;
                (*l_120) = (safe_lshift_func_uint8_t_u_s((((0x09D1F70EL ^ (safe_rshift_func_int8_t_s_u((!(g_121 , l_138)), 6))) != ((*p_69) = (g_115 <= p_65))) , (safe_sub_func_int32_t_s_s(((p_66 < p_66) < (((g_115 , &g_50) != (void*)0) , p_66)), (*g_116)))), 6));
            }
        }
        else
        {
            unsigned char **l_151 = &g_111;
            return l_151;
        }
        return l_153;
    }
    else
    {
        int l_154 = (-10L);
        short *l_157 = &g_158;
        unsigned short *l_163 = &l_99;
        char *l_164 = &l_156;
        unsigned char **l_169 = &g_26;
        (*l_117) = ((((*p_68) , ((((0x00C0L | ((*l_157) = func_95(((((l_154 >= l_155) & (+l_154)) && (g_42 == l_156)) , l_154), (l_154 , (void*)0), &l_101))) , 4UL) ^ 0x6C79L) < p_67)) | p_66) , (void*)0);
        (*p_69) = (safe_sub_func_uint16_t_u_u((0x0FL | (safe_mod_func_uint32_t_u_u(p_65, (((*l_164) = (((*l_163) = 0xBCE8L) , (g_15 , p_67))) || ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((&g_111 != (l_169 = &g_111)), (safe_sub_func_int8_t_s_s(p_66, (safe_lshift_func_uint16_t_u_u(p_65, p_66)))))), g_76)) , l_99))))), p_65));
        (*p_68) = (*p_69);
    }
    (*p_68) = (((func_95((*g_111), func_39((l_174 != &g_50)), ((*l_177) = (((*l_176) = 0x9B38L) , &g_26))) || func_95((*g_111), &g_112, (*l_177))) , &l_99) != &l_99);
    return &g_26;
}







static unsigned func_95(unsigned char p_96, unsigned char * p_97, unsigned char ** p_98)
{
    int *l_103 = (void*)0;
    int **l_104 = &l_103;
    int l_105 = (-1L);
    (*l_104) = l_103;
    return l_105;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
