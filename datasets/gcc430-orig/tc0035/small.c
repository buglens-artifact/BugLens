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



static char g_12 = 1L;
static unsigned g_41 = 1UL;
static int g_56 = 1L;
static unsigned short g_77 = 1UL;
static int *g_79 = &g_56;
static int ** volatile g_78 = &g_79;
static int g_85 = (-5L);
static short g_106 = 0L;
static volatile short g_113 = 7L;
static unsigned g_123 = 0x16A71534L;
static char g_131 = (-9L);
static unsigned g_169 = 4294967288UL;
static unsigned char g_185 = 1UL;
static int g_206 = (-1L);
static unsigned char *g_209 = &g_185;
static unsigned char **g_208 = &g_209;
static unsigned char *** volatile g_210 = (void*)0;
static volatile unsigned g_244 = 4294967295UL;
static volatile unsigned *g_243 = &g_244;
static volatile unsigned ** volatile g_242 = &g_243;
static unsigned char g_247 = 1UL;
static int g_274 = (-4L);
static char g_289 = 0x36L;
static volatile unsigned char g_308 = 0xE8L;
static unsigned * volatile g_357 = &g_169;
static unsigned * volatile * volatile g_356 = &g_357;
static int ** volatile g_364 = (void*)0;
static int * volatile g_380 = &g_85;
static int ** volatile g_381 = &g_79;
static int ** volatile g_396 = &g_79;
static unsigned g_411 = 0x113F0E6EL;
static unsigned short *g_419 = &g_77;
static int ** volatile g_457 = &g_79;
static unsigned *g_499 = &g_169;
static volatile int g_607 = 0x4FF903ECL;
static volatile int * volatile g_606 = &g_607;
static volatile int * volatile *g_605 = &g_606;
static volatile int * volatile **g_604 = &g_605;
static volatile int * volatile ***g_603 = &g_604;
static unsigned g_671 = 4294967291UL;
static unsigned short g_676 = 65528UL;
static int g_689 = 1L;
static char g_733 = 1L;
static char *g_740 = &g_131;
static char ** volatile g_739 = &g_740;
static char ** volatile * volatile g_741 = &g_739;
static unsigned char ***g_786 = &g_208;
static int *g_844 = &g_274;
static int g_854 = 4L;
static volatile unsigned g_937 = 0x1B5C6717L;
static char **g_959 = (void*)0;
static char ***g_958 = &g_959;
static int g_992 = 3L;
static int g_1002 = 0x237B978FL;
static int ** volatile g_1057 = &g_79;
static unsigned char g_1145 = 0x19L;
static char ****g_1171 = &g_958;
static unsigned ***g_1189 = (void*)0;
static unsigned g_1192 = 0UL;
static unsigned short g_1200 = 0x27E6L;
static int g_1204 = (-7L);



static unsigned func_1(void);
static unsigned char func_6(unsigned char p_7, unsigned p_8, short p_9, unsigned p_10, unsigned p_11);
static char func_19(unsigned char p_20, int p_21, unsigned short p_22);
static int func_26(unsigned p_27, unsigned char p_28, unsigned char p_29, unsigned short p_30);
static int func_31(unsigned short p_32, int p_33, unsigned p_34, char p_35, char p_36);
static int func_42(unsigned p_43, unsigned * p_44, unsigned * p_45);
static unsigned func_46(unsigned p_47);
static unsigned func_57(unsigned char p_58, unsigned p_59, int * p_60, int * p_61);
static short func_64(int * p_65, unsigned p_66, int * p_67, int * p_68);
static int * func_69(short p_70, unsigned short p_71, unsigned * p_72, int * p_73, unsigned p_74);
static unsigned func_1(void)
{
    unsigned l_13 = 4294967295UL;
    char l_14 = 0x85L;
    int l_1206 = 1L;
    l_1206 = (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((func_6(g_12, l_13, g_12, l_13, (((g_12 , 0UL) & l_14) , (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(func_19(g_12, g_12, l_13), g_854)), l_14)))) || 0L), 0x8DL)) | l_13), 11));



    ;
    return l_13;
}







static unsigned char func_6(unsigned char p_7, unsigned p_8, short p_9, unsigned p_10, unsigned p_11)
{
    short l_855 = 0x8604L;
    int l_856 = 7L;
    int l_857 = 1L;
    unsigned ****l_859 = (void*)0;
    char **l_861 = &g_740;
    char ***l_860 = &l_861;
    int *l_863 = &g_85;
    short l_931 = 0L;
    unsigned l_1046 = 0x228DF719L;
    unsigned char *l_1052 = &g_247;
    unsigned **l_1075 = &g_499;
    int ***l_1076 = (void*)0;
    unsigned short l_1194 = 2UL;
    int *l_1205 = &g_56;
    l_857 = (l_856 = l_855);
    l_857 = (safe_unary_minus_func_uint8_t_u((((g_671 , &g_499) != (((void*)0 != l_859) , &g_357)) | p_10)));
    return (***g_786);
}







static char func_19(unsigned char p_20, int p_21, unsigned short p_22)
{
    unsigned l_23 = 4294967288UL;
    int l_432 = 1L;
    unsigned l_476 = 1UL;
    char l_573 = 0x01L;
    char l_590 = 0x27L;
    int **l_591 = &g_79;
    unsigned **l_622 = (void*)0;
    unsigned short l_623 = 0x2721L;
    unsigned short l_661 = 0xCEA1L;
    unsigned char ***l_666 = &g_208;
    unsigned short l_732 = 65526UL;
    int *l_738 = (void*)0;
    unsigned l_823 = 0xE2171B48L;
    if ((l_23 && 0x63L))
    {
        char l_52 = 0x7DL;
        int l_53 = (-1L);
        char l_437 = (-1L);
        unsigned *l_545 = &g_169;
        unsigned l_592 = 0UL;
        unsigned char **l_651 = (void*)0;
        short *l_691 = (void*)0;
        int **l_840 = &g_79;
        int l_841 = 0xCF213C3EL;
        unsigned short l_845 = 65532UL;
        for (p_22 = 0; (p_22 != 41); ++p_22)
        {
            unsigned char l_37 = 251UL;
            unsigned *l_40 = &g_41;
            unsigned short *l_365 = &g_77;
            int *l_429 = &g_56;
            unsigned char l_436 = 247UL;
            char l_452 = 0L;
            unsigned char l_511 = 255UL;
            char *l_513 = (void*)0;
            int *l_543 = &l_53;
            int *l_579 = (void*)0;
            int *l_593 = (void*)0;
            (*l_429) = func_26((1L <= g_12), g_12, (g_12 , ((g_12 != (func_31(((l_37 | (((*l_365) = (safe_mod_func_int32_t_s_s((l_23 < ((*l_40) = p_22)), func_42(func_46((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_s((l_53 = ((l_23 <= (-4L)) < l_52)), 4)) , p_20) > p_21), l_23))), l_40, &g_169)))) != p_22)) >= 0x9155L), g_247, l_37, p_20, p_22) , 0x8CB4L)) & 0xD687L)), p_20);


        }


        if (p_22)
        {
            int l_602 = 0x6D02DC39L;
            unsigned char ***l_610 = &g_208;
            char l_624 = (-7L);
            unsigned char l_688 = 0xF1L;
            unsigned l_692 = 0UL;
            unsigned **l_711 = &g_499;
            unsigned l_715 = 8UL;
            int l_750 = 1L;
            int *l_763 = &g_85;
            char **l_811 = &g_740;
            char ***l_810 = &l_811;
            if ((safe_sub_func_uint16_t_u_u(65531UL, p_22)))
            {
                int *l_599 = (void*)0;
                int *l_600 = &g_85;
                int *l_601 = &l_53;
                unsigned short l_667 = 65526UL;
                int l_682 = 3L;
                int **l_745 = &l_601;
                if ((((((p_21 = (safe_unary_minus_func_uint16_t_u(p_20))) || ((*l_601) = (p_20 > ((*l_600) = (((safe_div_func_uint16_t_u_u(p_21, p_21)) ^ p_21) <= 3L))))) && func_26(g_123, (*g_209), func_46(l_602), p_20)) , l_602) | p_20))
                {
                    int ***l_609 = &l_591;
                    int ****l_608 = &l_609;
                    unsigned char ***l_612 = &g_208;
                    unsigned char ****l_611 = &l_612;
                    unsigned **l_619 = &l_545;
                    short *l_625 = &g_106;
                    unsigned *l_668 = &l_23;
                    int *l_669 = (void*)0;
                    int *l_670 = &g_274;
                    (*l_601) = (g_603 == l_608);
                    (*l_601) = (65535UL & ((((l_610 != ((*l_611) = l_610)) >= (((safe_div_func_int16_t_s_s(g_289, (p_20 && ((*l_625) = (safe_sub_func_uint8_t_u_u(((**g_208) = (safe_sub_func_uint16_t_u_u(func_42(p_21, ((*l_619) = &g_123), func_69((((safe_sub_func_uint32_t_u_u(l_602, (*g_243))) , l_622) == (void*)0), (*g_419), &g_41, &g_85, l_623)), l_437))), l_624)))))) | (*l_601)) ^ (*l_600))) == 0xC2DEC578L) , l_437));


                    ;
                    for (l_623 = 0; (l_623 == 60); l_623 = safe_add_func_uint8_t_u_u(l_623, 9))
                    {
                        int *l_632 = &g_85;
                        unsigned *l_656 = (void*)0;
                        (***g_603) = ((safe_mod_func_int8_t_s_s(g_131, (safe_sub_func_int8_t_s_s(0x5BL, ((p_20 < func_46((g_411 = g_607))) , func_57((((**g_208) = p_21) == (p_21 >= p_21)), (*g_499), (*g_396), l_632)))))) , (***g_603));

                        ;
                        (**g_605) = (safe_mod_func_int16_t_s_s((!((safe_lshift_func_uint8_t_u_u((l_602 , (g_308 < 0xF8L)), 1)) >= (g_77 == func_42((func_42((*l_632), &l_476, l_600) , (((safe_mod_func_int32_t_s_s((8UL & p_20), (*g_79))) , (*g_79)) == (*l_632))), (*l_619), l_545)))), p_20));
                        (*g_79) = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*l_601), (((*l_610) = (*l_610)) == l_651))), (g_41 < ((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0xBAL, ((*g_209) = ((*l_619) == (l_656 = &g_169))))), (safe_div_func_int16_t_s_s(g_274, (safe_add_func_int8_t_s_s(l_602, 0x11L)))))) ^ (**g_605))))) || 0xC409C2E3L) | 0UL), 0x65L)) < g_106) , (*g_419)) & (*g_419)), 4)) , (*g_209)), l_661));

                        ;
                        if (p_20)
                            continue;
                    }
                    if ((p_21 >= ((safe_div_func_uint16_t_u_u(func_57(((void*)0 != &l_602), p_21, &l_432, ((g_671 = ((*l_670) = (safe_sub_func_uint16_t_u_u(func_26(((*l_668) = (((0xAC64666FL & p_21) , ((l_610 != l_666) > l_667)) <= 0x7FL)), p_22, (*g_209), p_21), g_131)))) , &p_21)), p_22)) , 0x7FL)))
                    {
                        unsigned char **l_674 = &g_209;
                        int l_675 = 0xA79E5910L;
                        char *l_677 = &l_590;
                        unsigned short *l_678 = &l_667;
                        unsigned l_679 = 0x1BDF6BB4L;
                        (***g_604) = (l_592 <= (**g_356));
                        (**l_609) = func_69(((-6L) == p_22), func_46(p_21), &g_123, &g_206, p_22);

                        ;
                        (***l_608) = func_69(p_22, (p_21 , ((*l_678) = ((**g_242) >= ((5UL | (((*l_677) = ((g_676 = ((**l_591) = ((*g_419) = (safe_add_func_uint32_t_u_u((((*l_610) = l_674) != (void*)0), ((func_31((*g_419), (****l_608), l_675, (***l_609), p_20) && p_20) ^ (***l_609))))))) > p_21)) ^ (*g_209))) == l_592)))), &g_169, &g_206, l_679);

                        ;
                        (*g_605) = (void*)0;

                        ;
                    }
                    else
                    {
                        return p_21;
                    }

                    ;
                    ;
                }
                else
                {
                    int l_685 = (-1L);
                    unsigned *l_690 = &l_476;
                    if (func_57(((((safe_add_func_uint8_t_u_u((0x3A02C0E1L != (****g_603)), func_42(l_682, ((p_20 , ((*l_601) > ((safe_add_func_uint32_t_u_u(p_21, func_31(l_685, (((safe_sub_func_uint16_t_u_u((+((l_688 <= l_437) ^ l_53)), g_206)) || g_689) || 0x16D57432L), p_22, g_247, g_123))) > p_22))) , &g_41), l_690))) , l_691) == &g_106) , (*g_209)), (*g_499), l_690, &g_206))
                    {
                        unsigned **l_697 = &l_690;
                        (*g_79) = l_692;
                        (***g_604) = (safe_sub_func_uint16_t_u_u(((*g_419) = p_21), (l_688 | func_42((safe_lshift_func_int16_t_s_u((((*l_545) = (**g_242)) < ((*l_601) = ((*g_79) = (*l_600)))), 14)), ((*l_697) = l_690), l_599))));
                    }
                    else
                    {
                        return (**l_591);
                    }

                    ;
                }

                ;
                ;
                ;
                l_599 = &p_21;

                ;
                if (((+((***l_610) = ((g_85 == func_31(p_20, ((safe_mod_func_int8_t_s_s(g_289, (1UL ^ (*g_79)))) , (g_289 | ((**g_208) = (**g_208)))), ((*l_601) , 0xD0251063L), p_20, (*l_601))) , p_21))) ^ 0UL))
                {
                    unsigned ***l_712 = &l_711;
                    int l_736 = (-8L);
                    (*g_79) = ((safe_unary_minus_func_uint32_t_u((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((-5L), 3)), ((((g_676 >= (*l_599)) && (safe_rshift_func_uint16_t_u_u((*g_419), 10))) == g_41) & (safe_add_func_int8_t_s_s((((((*l_712) = l_711) == &l_545) , p_21) >= ((safe_lshift_func_int16_t_s_s(p_21, g_106)) < 0L)), 0x46L))))), l_715)))) , (*l_601));
                    if (((**l_591) < (l_592 != (*l_599))))
                    {
                        (*g_79) = (safe_lshift_func_int16_t_s_s(l_592, 13));
                        (*g_78) = func_69(g_113, (*g_419), &g_123, &g_206, (safe_lshift_func_uint16_t_u_u(func_31((*g_419), ((*l_600) = p_22), (*g_499), ((((g_123 , (**l_591)) || 0xC7L) , 0x0E899C9AL) | 9L), l_715), 11)));

                        ;
                        (*g_605) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned l_728 = 0xD807253AL;
                        short *l_729 = &g_106;
                        unsigned l_730 = 0xF2C22F1AL;
                        char *l_731 = &g_131;
                        int **l_737 = &l_601;
                        (*l_600) = 1L;
                        g_733 = (p_21 >= (l_732 = ((((*g_209) ^ ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(func_46(p_22), p_20)) , (safe_div_func_int8_t_s_s(((*l_731) = ((((g_56 ^ (((*l_729) = (safe_div_func_int16_t_s_s((65533UL < (l_728 , p_21)), p_22))) ^ l_730)) , &l_667) != &g_676) == 0x6533L)), 8L))), 6)) >= 0L)) == 9L) || p_22)));

                        ;
                        (*l_591) = func_69((g_85 < p_22), (func_31(p_21, (**g_78), (*g_499), (safe_rshift_func_uint8_t_u_s((((**g_603) != ((!l_736) , l_737)) < p_22), l_736)), g_123) , (*g_419)), l_545, l_738, (*g_499));

                        ;
                        (*g_741) = g_739;
                    }

                    ;
                }
                else
                {
                    unsigned l_742 = 0xCEDD759CL;
                    (*l_601) = l_742;
                }

                ;
                if ((((0xD8L == (**g_208)) | ((safe_sub_func_int32_t_s_s(((*l_601) = ((***g_741) , (((void*)0 != &g_209) , p_21))), p_22)) | p_20)) | (*g_209)))
                {
                    (*l_745) = &p_21;

                    ;
                    (*l_599) = p_20;
                    l_53 = (safe_div_func_uint8_t_u_u((*g_209), (safe_mod_func_uint8_t_u_u((0xB1L < 1L), (***g_741)))));
                }
                else
                {
                    return (**l_591);
                }

                ;
            }
            else
            {
                unsigned char l_751 = 0xEAL;
                int l_762 = 0x690EF11AL;
                int *l_812 = &l_750;
                if ((~(((l_750 ^ l_751) & ((*g_419) != p_21)) >= 255UL)))
                {
                    char l_752 = 0x13L;
                    short *l_755 = &g_106;
                    int **l_760 = &l_738;
                    unsigned *l_761 = &g_169;
                    (*l_760) = func_69(l_751, l_752, (((safe_div_func_int32_t_s_s(func_31(((((((((*l_755) = 0x7BFDL) || l_751) , (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((&p_21 != ((*l_760) = &p_21)), func_31((func_42(p_21, l_545, l_761) != (*g_243)), g_56, (*g_499), (*g_740), p_21))), 0x74L))) || (-2L)) & 0x178D584DL) , (**l_760)) || l_602), l_762, (*g_499), (*g_740), p_21), l_762)) < 0UL) , &g_169), &g_85, p_20);

                    ;
                    ;
                    l_763 = &p_21;

                    ;
                    (**l_760) = (p_21 = func_46(g_12));

                    ;
                    if (p_20)
                    {
                        (*l_760) = ((*l_763) , (p_21 , &p_21));

                        ;
                    }
                    else
                    {
                        (*l_591) = &p_21;

                        ;
                        (*g_79) = (*l_763);
                        return l_52;


                    }

                    ;
                }
                else
                {
                    short l_774 = (-10L);
                    int ***l_784 = &l_591;
                    unsigned char *l_803 = &l_751;
                    int *l_809 = &g_56;
                    (*l_666) = (*l_610);
                    for (l_592 = 0; (l_592 < 21); ++l_592)
                    {
                        unsigned short **l_769 = &g_419;
                        unsigned short *l_771 = &l_661;
                        unsigned short **l_770 = &l_771;
                        unsigned short *l_773 = &g_676;
                        unsigned short **l_772 = &l_773;
                        (***g_604) = (safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u(((0xA7L | ((((*l_770) = ((*l_769) = &g_77)) != ((*l_772) = &g_676)) >= l_774)) , (***g_741)), 2))));

                        ;
                        if (p_22)
                            continue;
                        if ((****g_603))
                            continue;
                    }
                    for (l_751 = 0; (l_751 >= 38); l_751++)
                    {
                        unsigned ***l_778 = &l_711;
                        unsigned ****l_777 = &l_778;
                        short *l_783 = &l_774;
                        unsigned char ****l_785 = (void*)0;
                        int l_790 = 0x9681F869L;
                        unsigned short *l_791 = &l_661;
                        unsigned short *l_792 = &l_732;
                        (*l_591) = (void*)0;

                        ;
                        (***g_604) = (((*l_777) = &l_711) != ((g_123 ^ (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((*g_419) >= (p_21 <= 0L)), 5)) && 1L), ((((*l_783) = 0x0BA2L) , (*g_603)) == l_784)))) , (void*)0));
                        p_21 = func_31((*g_419), (l_666 != (g_786 = &g_208)), l_52, (safe_add_func_int16_t_s_s((!g_185), (g_676 = ((*l_792) = ((*l_791) = (((*l_763) = p_22) , (safe_unary_minus_func_int8_t_s(l_790)))))))), p_20);
                        (*l_591) = &p_21;

                        ;
                    }


                    if ((safe_rshift_func_int8_t_s_u(func_26((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((**g_739), (((+g_56) , &g_786) == &g_786))), 4)), (safe_add_func_uint32_t_u_u(2UL, ((*l_763) = (247UL >= (*g_740))))))), ((*l_803) = ((***l_666) = ((*g_740) || p_22))), p_21, l_53), 0)))
                    {
                        int *l_808 = &l_602;
                        (****g_603) = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(0x4EL, 4)), 10)) , (void*)0) != (*g_242));
                        l_808 = &l_750;

                        ;
                        (*l_808) = (((l_762 , l_810) != (void*)0) >= (*l_808));
                        (*l_591) = l_812;

                        ;
                    }
                    else
                    {
                        (*l_591) = func_69(func_31(p_21, p_22, (**g_356), ((***l_810) = (safe_add_func_uint32_t_u_u((*g_499), (p_20 , func_31((*g_419), ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((1L == l_53), (*g_740))), 2)) < g_676), (*g_499), p_22, l_592))))), g_77), (*g_419), &l_476, &g_56, (*g_499));

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                p_21 = (safe_div_func_int8_t_s_s(0x98L, p_21));
                for (l_476 = 23; (l_476 > 30); l_476 = safe_add_func_int16_t_s_s(l_476, 1))
                {
                    unsigned *l_824 = &l_23;
                    l_738 = ((*l_591) = (*g_457));

                    ;
                    (***g_604) = (((-7L) >= ((***l_666) = func_42(((*l_824) = l_823), &l_476, ((*l_711) = l_812)))) || (&g_106 == (void*)0));

                    ;
                }

                ;
                ;
                for (l_53 = 0; (l_53 < 25); ++l_53)
                {
                    (*g_605) = (void*)0;

                    ;
                }

                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            int l_837 = 0x5FC18ED5L;
            short *l_838 = &g_106;
            int ***l_839 = &l_591;
            unsigned *l_842 = &g_123;
            int *l_843 = &g_56;
            (****g_603) = p_20;
            (***g_604) = (safe_div_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0x1CL, 2)) && (safe_add_func_uint32_t_u_u((~p_22), (safe_add_func_int32_t_s_s((p_21 = ((((((p_20 ^ (safe_lshift_func_uint8_t_u_u(255UL, 5))) && (l_841 = ((((*l_838) = l_837) , (((*l_839) = (void*)0) == l_840)) || ((*g_419) = p_21)))) , &l_841) != l_545) <= p_20) , 0L)), (-1L)))))), 0x69L));

            ;
            l_843 = &p_21;

            ;
            (*g_605) = (*g_605);
        }



        ;
        ;
        ;

        (*l_840) = &p_21;

        ;
        (**l_840) = (((g_844 = &g_274) != (void*)0) , ((***g_786) || ((*g_844) , func_31(func_31(p_20, p_21, l_845, ((void*)0 == l_622), (***g_741)), p_20, g_206, p_22, p_20))));
    }
    else
    {
        unsigned *l_852 = &g_123;
        int l_853 = 1L;
        (***g_604) = ((**l_591) & ((((-1L) | (safe_mod_func_int8_t_s_s(func_31((*g_419), (((g_123 <= ((safe_div_func_int8_t_s_s((g_113 , ((*g_740) = ((!(p_20 ^ (safe_add_func_uint8_t_u_u(func_42(g_274, &g_169, l_852), (***g_741))))) == 2L))), p_22)) , p_22)) ^ l_853) & p_21), l_853, (**l_591), g_854), l_853))) , 0x82L) <= l_853));
    }

    ;

    ;
    ;

    return p_20;


}







static int func_26(unsigned p_27, unsigned char p_28, unsigned char p_29, unsigned short p_30)
{
    unsigned short l_370 = 65535UL;
    int *l_371 = (void*)0;
    int l_372 = 0L;
    unsigned char l_373 = 0x88L;
    unsigned l_378 = 0xA5E65953L;
    int l_393 = 0x2D83D518L;
    unsigned *l_420 = &g_169;
    unsigned short **l_423 = &g_419;
    unsigned short *l_425 = &l_370;
    unsigned short **l_424 = &l_425;
    unsigned *l_426 = &g_123;
    unsigned *l_427 = &l_378;
    int **l_428 = &g_79;
    l_372 = (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(l_370, (g_185 && 255UL))), func_46((g_113 >= (func_42(((void*)0 == l_371), l_371, l_371) <= 4294967290UL)))));

    ;
    if ((l_373 = (-2L)))
    {
        unsigned short l_379 = 0xF5E0L;
        int *l_382 = (void*)0;
        int **l_383 = (void*)0;
        int **l_384 = &l_371;
        unsigned *l_394 = &g_41;
        int *l_395 = &g_85;
        (*g_380) = (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((&g_274 != &g_274), (l_378 , ((*g_79) = l_379)))), (**g_208)));
        (*g_381) = &l_372;

        ;
        (*g_396) = (((*g_209) == ((((((((*l_384) = l_382) != (((*l_394) = ((safe_rshift_func_int8_t_s_u(((*g_209) <= (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_uint32_t_u_u(func_42(func_64(&l_372, (*g_357), &g_206, &l_372), l_382, &l_378), (-1L))), g_274)), l_393))), p_27)) > p_28)) , &l_372)) <= (*g_209)) || g_113) , (*g_209)) ^ (**g_208)) > g_247)) , l_395);

        ;
    }
    else
    {
        char l_399 = 3L;
        int ***l_401 = (void*)0;
        int ***l_402 = (void*)0;
        int **l_404 = &g_79;
        int ***l_403 = &l_404;
        unsigned *l_410 = &g_411;
        unsigned **l_409 = &l_410;
        short *l_412 = &g_106;
        l_371 = (*g_78);

        ;
        (*l_371) = (safe_sub_func_uint32_t_u_u((g_206 & (l_399 , (((safe_unary_minus_func_int16_t_s(((((((**g_208) = ((((*l_403) = ((*l_371) , &l_371)) == &l_371) || (safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u((p_28 || ((((*l_412) = (g_79 == ((*l_409) = &p_27))) | (safe_lshift_func_uint16_t_u_s(0xB171L, g_41))) , p_28)), 14)) , (***l_403)), 1)))) > p_27) >= p_29) ^ p_30) < 0x1FL))) & (*l_371)) | 0xBCL))), (*l_371)));

        ;
        ;
        l_371 = func_69((***l_403), (safe_lshift_func_int16_t_s_u((((g_419 = &g_77) == &p_30) <= (((func_31(g_247, (**g_78), ((*l_371) != (g_274 == (g_247 & (*l_371)))), p_27, p_29) > 0x93B1L) < p_27) > 0xB5L)), 14)), &l_378, &g_85, g_56);

        ;
        ;
    }

    ;
    ;
    (*l_428) = func_69((func_31(p_27, p_29, ((*l_420) = (**g_356)), (safe_mod_func_uint16_t_u_u((p_30 = ((p_30 > (g_77 != func_42((g_274 , (((*l_426) = (((((*l_423) = &g_77) == ((((*l_424) = &l_370) != (void*)0) , &g_77)) < g_206) > p_29)) ^ 0x46631219L)), l_427, &g_41))) > g_12)), 1L)), p_29) , 0xF51DL), p_27, &l_378, &l_372, p_29);

    ;
    return p_28;


}







static int func_31(unsigned short p_32, int p_33, unsigned p_34, char p_35, char p_36)
{
    return p_32;
}







static int func_42(unsigned p_43, unsigned * p_44, unsigned * p_45)
{
    return p_43;
}







static unsigned func_46(unsigned p_47)
{
    unsigned char l_54 = 2UL;
    int *l_55 = &g_56;
    int l_75 = 0x54C62B41L;
    unsigned short *l_76 = &g_77;
    (*l_55) = (+l_54);
    (*l_55) = (func_57((safe_mod_func_uint16_t_u_u(((((g_12 > (+0xE7FB108FL)) <= 65535UL) , 65535UL) <= func_64(l_55, (*l_55), &g_56, func_69(g_56, ((*l_76) = (((l_75 >= 0x9018101BL) ^ 0xEE1EL) <= p_47)), l_55, &g_56, (*l_55)))), 3L)), g_247, &g_206, &g_206) && 0x734024CBL);

    ;
    return g_169;
}







static unsigned func_57(unsigned char p_58, unsigned p_59, int * p_60, int * p_61)
{
    int *l_363 = &g_56;
    (*g_78) = l_363;

    ;
    return (*l_363);
}







static short func_64(int * p_65, unsigned p_66, int * p_67, int * p_68)
{
    int *l_84 = &g_85;
    int l_109 = 0xD701FB03L;
    short l_158 = 0x52D3L;
    int l_203 = 4L;
    int *l_207 = &g_56;
    unsigned *l_228 = (void*)0;
    unsigned **l_227 = &l_228;
    unsigned char **l_240 = &g_209;
    int *l_303 = &g_85;
    char *l_323 = &g_289;
    int **l_362 = &l_303;
    (*l_84) = ((*p_65) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((-9L), 12)), ((void*)0 == g_79))));
    for (g_56 = 11; (g_56 == (-15)); --g_56)
    {
        unsigned short l_94 = 0x6E6AL;
        unsigned l_104 = 5UL;
        short *l_105 = &g_106;
        unsigned *l_122 = &g_123;
        char *l_165 = (void*)0;
        int *l_171 = &g_56;
        int l_186 = 0xE6839756L;
        unsigned char ***l_349 = &g_208;
        unsigned char ****l_348 = &l_349;
        int **l_361 = &l_303;
    }
    (*l_362) = (void*)0;

    ;
    return g_308;
}







static int * func_69(short p_70, unsigned short p_71, unsigned * p_72, int * p_73, unsigned p_74)
{
    (*g_78) = p_72;


    return p_72;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1002, "g_1002", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
