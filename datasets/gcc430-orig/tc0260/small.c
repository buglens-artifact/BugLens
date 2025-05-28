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



static int *g_12 = (void*)0;
static int g_25 = 0x7D2038E8L;
static char g_33 = 7L;
static int *g_35 = &g_25;
static int ** volatile g_34 = &g_35;
static unsigned g_67 = 1UL;
static int g_76 = 0L;
static char g_83 = (-1L);
static unsigned g_85 = 0x8E87BB6AL;
static int **g_87 = &g_35;
static int ***g_86 = &g_87;
static volatile unsigned short *g_108 = (void*)0;
static char g_114 = 9L;
static unsigned char g_119 = 255UL;
static int g_124 = 0L;
static int * volatile g_123 = &g_124;
static int g_145 = 0xE33383FDL;
static short g_331 = 0x261AL;
static volatile unsigned g_335 = 0x25C5B712L;
static short *g_378 = &g_331;
static int g_389 = 0x6C88365FL;
static unsigned short g_391 = 2UL;
static unsigned short g_395 = 1UL;
static unsigned g_499 = 0xCD542100L;
static int * volatile g_503 = &g_124;
static unsigned short g_609 = 0xD60BL;
static int g_730 = 0x1A97A598L;
static unsigned g_732 = 0xC19CA5A4L;
static int g_761 = 0L;
static unsigned g_779 = 0x32302CAEL;
static char g_936 = 0x70L;
static int g_957 = 0L;
static unsigned g_965 = 4294967294UL;
static unsigned * volatile ** volatile g_1312 = (void*)0;
static unsigned *g_1326 = (void*)0;
static unsigned **g_1325 = &g_1326;
static unsigned char g_1331 = 0xD0L;
static unsigned g_1352 = 0x9068058CL;
static volatile int g_1551 = 1L;
static unsigned short g_1553 = 0xF031L;
static unsigned g_1600 = 0x6FEE9763L;
static unsigned *** volatile g_1605 = (void*)0;
static short g_1748 = (-1L);
static volatile unsigned char g_1750 = 0x5CL;
static int g_1776 = 6L;
static unsigned g_1780 = 0UL;
static short g_1954 = 0x327EL;
static volatile short g_1985 = 0L;
static unsigned short g_1988 = 3UL;
static volatile unsigned char *g_2000 = &g_1750;
static volatile unsigned char * volatile * volatile g_1999 = &g_2000;
static int * volatile ** volatile ** volatile g_2003 = (void*)0;
static int ****g_2005 = &g_86;
static int *****g_2004 = &g_2005;
static char g_2025 = 7L;
static int ** volatile g_2052 = &g_12;
static short **g_2060 = (void*)0;
static short *** volatile g_2059 = &g_2060;
static int g_2103 = 0xEE49F0D8L;



static short func_1(void);
static int * func_2(int * p_3, int * p_4);
static int * func_5(unsigned p_6, unsigned p_7, int * p_8);
static unsigned short func_9(int * p_10, unsigned p_11);
static char func_15(int p_16, int * p_17, unsigned p_18);
static int ** func_20(char p_21, int * p_22);
static int * func_37(int * p_38, int ** p_39, unsigned char p_40, unsigned p_41);
static int * func_42(short p_43, unsigned p_44, unsigned p_45, unsigned p_46, int p_47);
static short func_48(int ** p_49, int ** p_50, char p_51);
static char func_53(char p_54, unsigned p_55, int * p_56, int p_57);
static short func_1(void)
{
    char l_19 = 5L;
    int *l_2053 = (void*)0;
    (***g_2005) = func_2(((**g_86) = func_5((func_9(g_12, (safe_lshift_func_int8_t_s_s(func_15(l_19, g_12, l_19), (safe_add_func_int8_t_s_s(l_19, l_19))))) <= l_19), g_965, &g_1776)), l_2053);

    ;
    ;

    ;
    return g_2103;
}







static int * func_2(int * p_3, int * p_4)
{
    short **l_2058 = &g_378;
    int l_2068 = 0xDF4FB979L;
    int *l_2102 = &g_25;
    for (g_1600 = (-20); (g_1600 == 48); g_1600 = safe_add_func_int16_t_s_s(g_1600, 9))
    {
        unsigned l_2067 = 0x4ECE9544L;
        int l_2070 = 1L;
        int *l_2071 = &g_761;
        int *l_2072 = &g_957;
        int *l_2073 = &g_389;
        int *l_2074 = &g_389;
        int *l_2075 = &g_761;
        int *l_2076 = &g_76;
        int *l_2077 = (void*)0;
        int *l_2078 = &g_124;
        int *l_2079 = &g_761;
        int *l_2080 = &g_957;
        int *l_2081 = &g_761;
        int *l_2082 = &l_2068;
        int *l_2083 = &g_761;
        int *l_2084 = &g_124;
        int l_2085 = 0x80D0D37DL;
        int *l_2086 = &g_389;
        int l_2087 = 0xBA73FF3BL;
        int *l_2088 = &l_2070;
        int l_2089 = 0x5B18C2A4L;
        int *l_2090 = &l_2070;
        int *l_2091 = &l_2089;
        int *l_2092 = &g_25;
        int l_2093 = 0x8E2E3B02L;
        int *l_2094 = (void*)0;
        int *l_2095 = (void*)0;
        int *l_2096 = &g_76;
        int l_2097 = (-5L);
        int *l_2098 = (void*)0;
        unsigned l_2099 = 0x69628EF1L;
        for (g_965 = 15; (g_965 <= 2); --g_965)
        {
            (*g_2059) = l_2058;

            ;
        }
        for (g_1780 = (-5); (g_1780 != 45); g_1780 = safe_add_func_int16_t_s_s(g_1780, 7))
        {
            return (*g_87);


        }
        l_2068 = (~(((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_2067 == (l_2068 | g_1954)), 1)), 0L)) >= (&g_2005 == &g_2005)) & (safe_unary_minus_func_uint8_t_u(l_2067))));
        l_2099++;
    }

    ;
    l_2102 = p_4;

    ;
    return (*g_87);


}







static int * func_5(unsigned p_6, unsigned p_7, int * p_8)
{
    int ******l_2006 = (void*)0;
    int ******l_2007 = (void*)0;
    int ******l_2008 = &g_2004;
    unsigned char *l_2024 = &g_1331;
    if ((g_2003 != ((*l_2008) = g_2004)))
    {
        unsigned char l_2036 = 0xC7L;
        for (g_1748 = 0; (g_1748 == 11); g_1748 = safe_add_func_int16_t_s_s(g_1748, 9))
        {
            int *l_2020 = &g_389;
            for (g_85 = 0; (g_85 < 57); g_85 = safe_add_func_int32_t_s_s(g_85, 5))
            {
                unsigned char l_2015 = 250UL;
                int **l_2018 = &g_35;
                for (g_1780 = 0; (g_1780 >= 13); g_1780 = safe_add_func_uint16_t_u_u(g_1780, 1))
                {
                    int l_2016 = (-6L);
                    unsigned char l_2019 = 250UL;
                    if (l_2015)
                    {
                        int **l_2017 = &g_12;
                        l_2016 &= (*p_8);
                        (****g_2005) = (((l_2017 == l_2018) != l_2019) != l_2019);
                        (****g_2004) = l_2020;

                        ;
                        if ((**l_2018))
                            break;
                    }
                    else
                    {
                        (*l_2020) = func_48((***g_2004), func_20(func_9(((**g_86) = l_2020), g_1776), l_2020), p_6);

                        ;
                        (**l_2018) = (g_1780 != (((*g_378) &= (safe_unary_minus_func_int32_t_s(func_9(p_8, g_957)))) != (safe_rshift_func_uint16_t_u_u(0xEB66L, func_9(func_42(p_6, (l_2024 != (*g_1999)), (g_2025 <= 0xAFEB3406L), p_6, g_1748), g_957)))));
                        (*g_87) = (void*)0;

                        ;
                    }

                    ;
                    (*****l_2008) = p_8;

                    ;
                    (*p_8) &= func_9(func_37(p_8, &p_8, p_6, p_6), g_779);
                    if ((****g_2005))
                        continue;
                }
            }
        }

        ;
        (*g_123) = (func_48((**g_2005), &p_8, g_732) >= (func_9(p_8, ((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((*g_378), ((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(((!(safe_mod_func_uint32_t_u_u(((l_2036 ^ (0UL & (safe_div_func_uint16_t_u_u(l_2036, p_7)))) != p_6), 0x95F4277CL))) < (*p_8)), 14)) | (*g_2000)), 6L)) >= g_779))) & p_7), l_2036)) & g_732)) & (-1L)));

        ;
    }
    else
    {
        int *l_2039 = &g_76;
        char l_2044 = (-3L);
        short *l_2051 = &g_1954;
        (*l_2039) |= ((*g_35) ^= (*p_8));
        (*l_2039) &= (l_2044 = (safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0xF898L, p_6)), ((**g_87) = 1L))));
        (******l_2008) = (((*l_2039) = (safe_div_func_int8_t_s_s(((*g_378) > (safe_mod_func_int16_t_s_s(6L, p_6))), (((safe_mod_func_int8_t_s_s(g_732, g_1985)) > 0x4E1CL) | (*g_378))))) > ((*l_2051) ^= (*g_378)));
        (*g_2052) = ((*g_87) = p_8);

        ;
        ;
    }

    ;
    ;
    return (*****l_2008);


}







static unsigned short func_9(int * p_10, unsigned p_11)
{
    return p_11;
}







static char func_15(int p_16, int * p_17, unsigned p_18)
{
    unsigned l_23 = 4294967295UL;
    int *l_24 = &g_25;
    int **l_36 = &l_24;
    int ***l_52 = &l_36;
    l_36 = func_20(l_23, l_24);

    ;
    (*g_87) = func_37(func_42(func_48(&l_24, ((*l_52) = (void*)0), func_53(g_33, (&g_34 == (void*)0), (*g_34), (((void*)0 == &g_25) & g_25))), p_18, p_18, p_18, g_965), (*g_86), g_1748, g_936);

    ;

    return g_1553;
}







static int ** func_20(char p_21, int * p_22)
{
    int *l_30 = &g_25;
    char *l_31 = (void*)0;
    char *l_32 = &g_33;
    (*l_30) = (safe_div_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((l_30 == p_22), (((*l_32) = 1L) || g_25))) ^ 0x61L), (+1L)));
    (*g_34) = &g_25;

    ;
    return &g_12;


}







static int * func_37(int * p_38, int ** p_39, unsigned char p_40, unsigned p_41)
{
    unsigned l_1756 = 0UL;
    unsigned short l_1757 = 0x955FL;
    int *l_1764 = &g_761;
    int l_1790 = 0xC7DEDC7FL;
    unsigned short l_1849 = 7UL;
    int l_1862 = 0L;
    int l_1901 = 0x5938432BL;
    int l_1921 = (-1L);
    int l_1965 = 5L;
    int l_1986 = (-5L);
    unsigned char *l_1998 = &g_1331;
    unsigned char **l_1997 = &l_1998;
    l_1757 |= (safe_add_func_int32_t_s_s(l_1756, 4294967287UL));
    for (g_33 = 0; (g_33 != 14); g_33 = safe_add_func_int32_t_s_s(g_33, 9))
    {
        (**g_86) = (**g_86);
    }
    return (*p_39);


}







static int * func_42(short p_43, unsigned p_44, unsigned p_45, unsigned p_46, int p_47)
{
    int *l_1587 = &g_76;
    short l_1597 = 0xE90DL;
    int l_1598 = 0L;
    unsigned short l_1655 = 0UL;
    int l_1681 = 0x97BE1A57L;
    int l_1698 = (-4L);
    int l_1699 = 1L;
    int l_1701 = 1L;
    int l_1714 = 0x4655D9CDL;
    int l_1715 = 0x3938BC10L;
    int l_1745 = (-7L);
    int l_1747 = 0x8015C272L;
    unsigned char l_1753 = 0xBFL;
    for (g_609 = 13; (g_609 == 6); --g_609)
    {
        int *l_1575 = &g_124;
    }
    for (g_145 = (-22); (g_145 == (-20)); ++g_145)
    {
        int *l_1660 = &g_76;
        int *l_1661 = &g_957;
        int *l_1662 = &g_389;
        int *l_1663 = &g_76;
        int *l_1664 = &g_761;
        int l_1665 = 0x31AFA66DL;
        int l_1666 = (-10L);
        int *l_1667 = &g_124;
        int *l_1668 = &l_1665;
        int *l_1669 = &g_957;
        int *l_1670 = &l_1666;
        int *l_1671 = &l_1598;
        int *l_1672 = &l_1598;
        int *l_1673 = &g_761;
        int *l_1674 = &g_761;
        int l_1675 = 0xB7F31491L;
        int *l_1676 = &g_761;
        int *l_1677 = &g_76;
        int *l_1678 = &g_25;
        int *l_1679 = &g_25;
        int *l_1680 = &g_957;
        int *l_1682 = (void*)0;
        int l_1683 = (-1L);
        int *l_1684 = &l_1666;
        int *l_1685 = &g_761;
        int *l_1686 = &g_124;
        int *l_1687 = &l_1665;
        int *l_1688 = &l_1681;
        int l_1689 = (-1L);
        int *l_1690 = &g_124;
        int *l_1691 = (void*)0;
        int *l_1692 = &g_957;
        int *l_1693 = &l_1666;
        int *l_1694 = &l_1665;
        int *l_1695 = &g_76;
        int *l_1696 = &g_389;
        int *l_1697 = &l_1681;
        int *l_1700 = (void*)0;
        int *l_1702 = &l_1675;
        int *l_1703 = &g_25;
        int *l_1704 = (void*)0;
        int *l_1705 = &g_25;
        int *l_1706 = &l_1598;
        int *l_1707 = (void*)0;
        int *l_1708 = &l_1698;
        int *l_1709 = (void*)0;
        int *l_1710 = &l_1666;
        int *l_1711 = &g_957;
        int *l_1712 = &g_761;
        int *l_1713 = (void*)0;
        int *l_1716 = &l_1715;
        int *l_1717 = &l_1714;
        int *l_1718 = &l_1665;
        int *l_1719 = (void*)0;
        int *l_1720 = &g_389;
        int *l_1721 = (void*)0;
        int *l_1722 = (void*)0;
        int *l_1723 = &l_1683;
        int *l_1724 = &g_76;
        int *l_1725 = &g_389;
        int *l_1726 = &g_25;
        int *l_1727 = &g_124;
        int *l_1728 = &g_389;
        int *l_1729 = &g_761;
        int *l_1730 = &l_1715;
        int *l_1731 = &l_1689;
        int *l_1732 = &l_1665;
        int *l_1733 = &l_1681;
        int *l_1734 = &l_1701;
        int *l_1735 = &l_1666;
        int *l_1736 = &l_1698;
        int *l_1737 = &l_1683;
        int *l_1738 = (void*)0;
        int *l_1739 = &l_1665;
        int *l_1740 = &l_1665;
        int *l_1741 = (void*)0;
        int *l_1742 = &l_1598;
        int *l_1743 = (void*)0;
        int *l_1744 = (void*)0;
        int *l_1746 = &l_1714;
        int *l_1749 = &l_1598;
        g_1750--;
        if (p_43)
            break;
        return (*g_34);


    }
    l_1753 = p_44;
    (***g_86) ^= p_43;
    return (*g_87);


}







static short func_48(int ** p_49, int ** p_50, char p_51)
{
    int *l_1364 = &g_389;
    int *l_1365 = &g_124;
    int *l_1366 = &g_957;
    int *l_1367 = &g_25;
    int *l_1368 = &g_389;
    int *l_1369 = &g_145;
    int *l_1370 = &g_389;
    int *l_1371 = &g_76;
    int *l_1372 = &g_76;
    int *l_1373 = &g_25;
    int *l_1374 = &g_25;
    int *l_1375 = (void*)0;
    int *l_1376 = &g_761;
    int *l_1377 = &g_145;
    int *l_1378 = (void*)0;
    int *l_1379 = &g_124;
    int *l_1380 = (void*)0;
    int *l_1381 = &g_76;
    int *l_1382 = &g_761;
    int *l_1383 = &g_76;
    int *l_1384 = &g_957;
    int l_1385 = 0xABC7C4A2L;
    int *l_1386 = &l_1385;
    int *l_1387 = &g_957;
    int *l_1388 = &g_957;
    int *l_1389 = &g_957;
    int *l_1390 = &g_145;
    int *l_1391 = &g_76;
    int *l_1392 = &g_957;
    int *l_1393 = (void*)0;
    int l_1394 = 0xF1C1CA10L;
    int *l_1395 = (void*)0;
    int *l_1396 = (void*)0;
    int *l_1397 = (void*)0;
    int *l_1398 = &l_1394;
    int *l_1399 = &l_1385;
    int *l_1400 = &g_389;
    int *l_1401 = (void*)0;
    int l_1402 = (-1L);
    int *l_1403 = &l_1394;
    int *l_1404 = &g_76;
    int *l_1405 = &l_1385;
    int *l_1406 = (void*)0;
    int *l_1407 = &l_1385;
    int *l_1408 = &g_761;
    int *l_1409 = &l_1402;
    int *l_1410 = &l_1394;
    int *l_1411 = &g_957;
    int *l_1412 = &g_145;
    int *l_1413 = &l_1385;
    int *l_1414 = &l_1402;
    int *l_1415 = &g_761;
    int *l_1416 = &g_25;
    int *l_1417 = &g_761;
    int *l_1418 = &l_1402;
    int *l_1419 = &l_1385;
    int *l_1420 = (void*)0;
    int *l_1421 = (void*)0;
    int *l_1422 = &g_145;
    int *l_1423 = &g_145;
    int *l_1424 = &g_25;
    int *l_1425 = &l_1394;
    int *l_1426 = &g_761;
    int *l_1427 = &g_76;
    int *l_1428 = &l_1402;
    int *l_1429 = &l_1385;
    int *l_1430 = &g_76;
    int *l_1431 = &l_1385;
    int *l_1432 = &g_124;
    int *l_1433 = &g_389;
    int *l_1434 = &l_1402;
    int *l_1435 = &g_761;
    int *l_1436 = (void*)0;
    int *l_1437 = &g_25;
    int *l_1438 = &g_145;
    int *l_1439 = &g_957;
    int l_1440 = (-1L);
    int *l_1441 = &l_1385;
    int *l_1442 = &l_1385;
    int *l_1443 = &l_1385;
    int *l_1444 = &g_145;
    int *l_1445 = &g_124;
    int *l_1446 = (void*)0;
    int l_1447 = 0x2BF3EFBDL;
    int l_1448 = (-3L);
    int *l_1449 = (void*)0;
    int *l_1450 = &g_957;
    int l_1451 = (-4L);
    int *l_1452 = &g_25;
    int *l_1453 = &g_957;
    int *l_1454 = &g_76;
    int *l_1455 = &g_124;
    int *l_1456 = (void*)0;
    int *l_1457 = &g_145;
    int *l_1458 = (void*)0;
    int *l_1459 = (void*)0;
    int *l_1460 = &g_957;
    int *l_1461 = &g_389;
    int l_1462 = 0xE89F6383L;
    int *l_1463 = &l_1402;
    int *l_1464 = &l_1462;
    int *l_1465 = &l_1402;
    int *l_1466 = &l_1402;
    int *l_1467 = &l_1462;
    int *l_1468 = &l_1385;
    int *l_1469 = &g_389;
    int *l_1470 = &l_1462;
    int *l_1471 = &l_1462;
    int *l_1472 = &l_1385;
    int *l_1473 = &l_1462;
    int *l_1474 = &g_761;
    int *l_1475 = &l_1462;
    int *l_1476 = &g_957;
    int l_1477 = 0x8399C1A5L;
    int *l_1478 = (void*)0;
    int *l_1479 = &l_1440;
    int *l_1480 = &l_1477;
    int *l_1481 = &l_1402;
    int *l_1482 = &g_957;
    int *l_1483 = &g_76;
    int l_1484 = 1L;
    int *l_1485 = &g_124;
    int *l_1486 = &l_1394;
    int *l_1487 = &l_1477;
    int *l_1488 = &l_1484;
    int *l_1489 = &g_124;
    int *l_1490 = &l_1477;
    int *l_1491 = &l_1402;
    int *l_1492 = &g_25;
    int *l_1493 = &l_1440;
    int *l_1494 = &l_1447;
    int *l_1495 = &g_25;
    int *l_1496 = &g_145;
    int *l_1497 = &g_761;
    int *l_1498 = &g_957;
    int *l_1499 = &g_76;
    int *l_1500 = (void*)0;
    int *l_1501 = &l_1440;
    int l_1502 = 0xE7754432L;
    int l_1503 = 0xB536EC91L;
    int *l_1504 = (void*)0;
    int *l_1505 = &l_1385;
    int *l_1506 = &g_145;
    int *l_1507 = &l_1402;
    int *l_1508 = &g_957;
    int l_1509 = 0xAE4790B4L;
    int *l_1510 = &g_145;
    int *l_1511 = (void*)0;
    int *l_1512 = &g_761;
    int *l_1513 = (void*)0;
    int *l_1514 = (void*)0;
    int *l_1515 = (void*)0;
    int *l_1516 = &g_76;
    int l_1517 = 0x24AAFF96L;
    int *l_1518 = &l_1517;
    int *l_1519 = &l_1451;
    int *l_1520 = &l_1440;
    int *l_1521 = &g_25;
    int *l_1522 = &l_1402;
    int l_1523 = (-4L);
    int *l_1524 = &g_124;
    int l_1525 = 0x47190815L;
    int *l_1526 = &l_1447;
    int *l_1527 = &l_1447;
    int *l_1528 = (void*)0;
    int l_1529 = 0xD2835690L;
    int *l_1530 = &l_1477;
    int l_1531 = (-7L);
    int *l_1532 = &l_1451;
    int *l_1533 = &l_1477;
    int *l_1534 = &l_1531;
    int *l_1535 = &l_1451;
    int *l_1536 = &l_1448;
    int l_1537 = 0x14D2385EL;
    int l_1538 = 0xE024DF54L;
    int *l_1539 = &l_1523;
    int *l_1540 = &l_1525;
    int *l_1541 = &l_1523;
    int *l_1542 = &g_389;
    int *l_1543 = &g_145;
    int *l_1544 = &l_1462;
    int *l_1545 = &l_1402;
    int *l_1546 = &g_957;
    int *l_1547 = &l_1509;
    int l_1548 = 0x4312B3E6L;
    int *l_1549 = &g_145;
    int *l_1550 = &l_1447;
    int l_1552 = 8L;
    int l_1560 = (-1L);
    unsigned short *l_1562 = &g_395;
    unsigned short **l_1561 = &l_1562;
    unsigned short **l_1563 = (void*)0;
    --g_1553;
    if ((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((g_499 & l_1560), p_51)), (l_1561 == l_1563))))
    {
        unsigned l_1566 = 5UL;
        (*l_1469) = ((*g_378) ^ (safe_add_func_uint8_t_u_u(g_145, (l_1566 <= p_51))));
        (*l_1463) = l_1566;
    }
    else
    {
        char l_1567 = 0x28L;
        int l_1568 = 0xD27AD5ECL;
        l_1568 ^= l_1567;
        (**g_86) = &g_124;

        ;
        (*l_1533) = ((*l_1404) ^= ((~(safe_mod_func_uint32_t_u_u(p_51, p_51))) ^ ((**g_87) >= ((void*)0 != &l_1568))));
    }
    (*g_87) = (*p_49);

    ;
    return p_51;
}







static char func_53(char p_54, unsigned p_55, int * p_56, int p_57)
{
    short l_58 = 0x5BC9L;
    int l_81 = 0x632E6BA9L;
    int l_178 = 0x0126CEC4L;
    int l_201 = 0x8226CAE3L;
    int l_220 = 0x68AEAC46L;
    int l_225 = 0xC140705BL;
    int ***l_242 = &g_87;
    unsigned char *l_533 = &g_119;
    int l_592 = 0x9175AB73L;
    short l_808 = 0x8D52L;
    unsigned short l_809 = 0x041EL;
    int l_1141 = 0xD8F2AD45L;
    unsigned short l_1305 = 0x673DL;
    if ((0x4698L <= (l_58 & (safe_lshift_func_uint16_t_u_s(g_25, 14)))))
    {
        int **l_102 = (void*)0;
        unsigned short *l_107 = (void*)0;
        int l_146 = 1L;
        int l_171 = 0x98011622L;
        int l_182 = 1L;
        int l_227 = 0xF8D5673CL;
        unsigned l_432 = 0x281E6200L;
        short l_464 = 1L;
        int l_714 = 0L;
        int l_724 = (-8L);
        int l_729 = 0x34766876L;
        int l_790 = 1L;
        short l_929 = 4L;
        unsigned l_940 = 0x5D184F5AL;
        unsigned char *l_949 = &g_119;
    }
    else
    {
        int *l_968 = &g_76;
        int *l_969 = &g_389;
        int *l_970 = &l_178;
        int *l_971 = &g_76;
        int *l_972 = &l_81;
        int *l_973 = (void*)0;
        int l_974 = 0xE0619FA6L;
        int *l_975 = &g_25;
        int *l_976 = &l_220;
        int l_977 = 0xCEE9AA3EL;
        int *l_978 = &g_76;
        int *l_979 = (void*)0;
        int *l_980 = &g_389;
        int *l_981 = &g_25;
        int *l_982 = &g_957;
        int *l_983 = &g_761;
        int *l_984 = &g_145;
        int *l_985 = &l_974;
        int *l_986 = &l_81;
        int *l_987 = &l_201;
        int *l_988 = &l_977;
        int *l_989 = &g_124;
        int l_990 = 0x457ED6A1L;
        int *l_991 = &l_201;
        int *l_992 = &l_220;
        int *l_993 = &l_178;
        int *l_994 = &g_124;
        int *l_995 = &g_124;
        int *l_996 = &l_592;
        int *l_997 = &l_220;
        int *l_998 = &l_81;
        int *l_999 = &l_990;
        int *l_1000 = &g_957;
        int *l_1001 = &l_220;
        int *l_1002 = (void*)0;
        int *l_1003 = &l_81;
        int *l_1004 = &l_974;
        int *l_1005 = &l_178;
        int *l_1006 = &l_974;
        int *l_1007 = (void*)0;
        int *l_1008 = &l_178;
        int *l_1009 = &l_990;
        int *l_1010 = &g_145;
        int *l_1011 = &g_25;
        int *l_1012 = &l_592;
        int *l_1013 = &l_81;
        int *l_1014 = &l_220;
        int *l_1015 = &g_25;
        int *l_1016 = &g_389;
        int l_1017 = 0x5D882E17L;
        int *l_1018 = &g_124;
        int *l_1019 = &g_76;
        int *l_1020 = &l_592;
        int *l_1021 = &l_974;
        int *l_1022 = &g_25;
        int *l_1023 = &g_145;
        int *l_1024 = &l_225;
        int *l_1025 = &g_76;
        int *l_1026 = &g_957;
        int *l_1027 = &l_977;
        int *l_1028 = (void*)0;
        int *l_1029 = &l_974;
        int *l_1030 = &g_25;
        int *l_1031 = &g_124;
        int *l_1032 = &g_76;
        int *l_1033 = (void*)0;
        int *l_1034 = (void*)0;
        int *l_1035 = &l_990;
        int *l_1036 = &l_178;
        int *l_1037 = &g_145;
        int *l_1038 = &l_977;
        int *l_1039 = &l_592;
        int *l_1040 = &l_592;
        int *l_1041 = &g_145;
        int *l_1042 = &g_145;
        int l_1043 = 0L;
        int *l_1044 = &l_220;
        int *l_1045 = &l_220;
        int *l_1046 = &l_81;
        int *l_1047 = &l_592;
        int *l_1048 = &l_990;
        int *l_1049 = (void*)0;
        int *l_1050 = &l_178;
        int *l_1051 = (void*)0;
        int *l_1052 = &l_974;
        int *l_1053 = &l_974;
        int *l_1054 = &l_178;
        int *l_1055 = &l_220;
        int *l_1056 = &g_145;
        int *l_1057 = &l_1043;
        int *l_1058 = (void*)0;
        int *l_1059 = &g_25;
        int *l_1060 = &g_145;
        int *l_1061 = &g_761;
        int l_1062 = 0xC576CB14L;
        int *l_1063 = &l_1017;
        int *l_1064 = (void*)0;
        int *l_1065 = &l_974;
        int *l_1066 = &g_957;
        int *l_1067 = &l_977;
        int *l_1068 = &l_1017;
        int *l_1069 = &l_201;
        int *l_1070 = &l_1017;
        int *l_1071 = (void*)0;
        int *l_1072 = (void*)0;
        int *l_1073 = (void*)0;
        int *l_1074 = &l_201;
        int l_1075 = 0x9310C64BL;
        int *l_1076 = &g_761;
        int *l_1077 = &l_592;
        int l_1078 = 1L;
        int *l_1079 = &g_145;
        int *l_1080 = (void*)0;
        int *l_1081 = &l_201;
        int *l_1082 = &g_124;
        int *l_1083 = &g_124;
        int *l_1084 = &l_81;
        int *l_1085 = &g_761;
        int *l_1086 = (void*)0;
        int *l_1087 = &l_201;
        int *l_1088 = &l_977;
        int *l_1089 = &l_81;
        int *l_1090 = &l_977;
        int *l_1091 = &l_990;
        int l_1092 = (-5L);
        int *l_1093 = (void*)0;
        int *l_1094 = &l_977;
        int *l_1095 = (void*)0;
        int *l_1096 = &l_81;
        int *l_1097 = (void*)0;
        int *l_1098 = &l_1092;
        int *l_1099 = (void*)0;
        int *l_1100 = &g_76;
        int *l_1101 = &g_124;
        int *l_1102 = &l_1078;
        int *l_1103 = &l_1092;
        int l_1104 = (-9L);
        int *l_1105 = (void*)0;
        int *l_1106 = &l_1078;
        int l_1107 = 0x0B815D67L;
        int *l_1108 = &g_761;
        int *l_1109 = &l_178;
        int *l_1110 = &l_1043;
        int *l_1111 = (void*)0;
        int *l_1112 = &g_957;
        int *l_1113 = (void*)0;
        int *l_1114 = &g_761;
        int *l_1115 = &l_974;
        int *l_1116 = &l_1062;
        int *l_1117 = &g_124;
        int *l_1118 = &l_1043;
        int *l_1119 = &l_1092;
        int *l_1120 = &l_1043;
        int *l_1121 = &l_1104;
        int *l_1122 = (void*)0;
        int l_1123 = 0x711A9525L;
        int *l_1124 = (void*)0;
        unsigned short l_1125 = 2UL;
        int l_1238 = 2L;
        int *l_1332 = &l_990;
        (*p_56) = (*p_56);
        (*g_35) ^= (p_57 && 0x8A23L);
        ++l_1125;
        if ((***l_242))
        {
            (*l_1098) = 0xBB7E0F2CL;
        }
        else
        {
            unsigned char **l_1128 = (void*)0;
            unsigned char **l_1129 = &l_533;
            int *l_1130 = &g_25;
            int l_1138 = (-4L);
            int l_1139 = 9L;
            unsigned short l_1143 = 0xA12BL;
            int l_1232 = 0x85538C8DL;
            int l_1235 = 0xE3364D15L;
            int l_1239 = (-1L);
            int l_1240 = 0x71490678L;
            int l_1266 = 0xECAFF5EAL;
            int l_1280 = (-1L);
            char l_1360 = (-7L);
            unsigned short *l_1361 = &l_1143;
            if ((&g_119 == ((*l_1129) = (void*)0)))
            {
                (*g_87) = (**g_86);
                (*l_1001) = (*p_56);
                (*g_87) = l_1130;

                ;
            }
            else
            {
                unsigned l_1133 = 1UL;
                int l_1134 = 0x2273D30EL;
                int l_1136 = 0L;
                int l_1142 = 0xA31A2C8EL;
                unsigned short *l_1159 = &g_391;
                (*l_1035) = 1L;
                if ((safe_rshift_func_uint8_t_u_u(l_1133, 7)))
                {
                    int l_1135 = 0L;
                    int l_1137 = (-1L);
                    int l_1140 = (-3L);
                    short *l_1148 = &l_58;
                    l_1143--;
                    (*l_1088) = ((p_57 < (safe_sub_func_uint32_t_u_u((&g_331 != l_1148), ((safe_div_func_int8_t_s_s((0x64AE2819L || (**g_87)), g_119)) || 0L)))) ^ 5L);
                    (*p_56) = ((*l_969) &= (*p_56));
                }
                else
                {
                    unsigned char l_1160 = 0xD7L;
                    if ((*p_56))
                    {
                        char *l_1154 = (void*)0;
                        char **l_1153 = &l_1154;
                        unsigned *l_1155 = &g_67;
                        unsigned *l_1156 = &g_85;
                        unsigned short *l_1158 = &g_609;
                        unsigned short **l_1157 = &l_1158;
                        (*l_978) = (safe_sub_func_uint32_t_u_u(((*l_1156) = ((*l_1155) |= (((*l_1153) = (void*)0) == &g_936))), ((p_55 && p_54) != (((*l_1157) = (void*)0) != l_1159))));

                        ;
                    }
                    else
                    {
                        return g_85;
                    }
                    l_1160++;
                }
            }

            ;
            (*l_987) |= ((*l_1115) |= (safe_lshift_func_uint16_t_u_s(0x756BL, (0L == (safe_lshift_func_uint8_t_u_s((65535UL > (-1L)), ((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(0x6BDEB9DEL, 0x76D7BFD9L)), 14)) != (***l_242))))))));
            if (((safe_rshift_func_uint8_t_u_u(p_57, 3)) == (safe_lshift_func_int16_t_s_u((*l_970), 4))))
            {
                p_56 = &p_57;

                ;
            }
            else
            {
                unsigned l_1179 = 2UL;
                for (l_1075 = 23; (l_1075 < 0); l_1075--)
                {
                    (*g_123) ^= (***g_86);
                    if (((safe_sub_func_int32_t_s_s((*p_56), (g_85 |= (***l_242)))) >= ((&g_86 != &g_86) <= (*p_56))))
                    {
                        (**l_242) = &p_57;

                        ;
                        if ((*p_56))
                            continue;
                        (*l_1056) = (*p_56);
                    }
                    else
                    {
                        l_1179++;
                    }
                }

                ;
            }

            ;
            ;
            if ((g_730 & (*l_1130)))
            {
                (*l_1010) = (*p_56);
            }
            else
            {
                char l_1231 = (-1L);
                int l_1233 = (-1L);
                int l_1234 = 0x4AADB915L;
                int l_1241 = 0x9BC41C26L;
                unsigned *l_1324 = &g_67;
                unsigned **l_1323 = &l_1324;
                for (l_808 = 0; (l_808 > 4); l_808 = safe_add_func_int8_t_s_s(l_808, 5))
                {
                    unsigned l_1190 = 4294967295UL;
                    unsigned char *l_1199 = (void*)0;
                    unsigned char *l_1200 = &g_119;
                    unsigned *l_1201 = (void*)0;
                    unsigned *l_1202 = &g_499;
                    (*l_1079) ^= (safe_sub_func_uint32_t_u_u(((*l_1202) = (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_57 > (l_1190 | ((safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_57, p_57)), (*l_1130))) > 0xC8L), 8UL)) <= (***l_242)))), ((*l_1200) = (safe_div_func_uint32_t_u_u((g_395 | (*p_56)), 0xD3AB9065L))))), g_335))), (*p_56)));
                }
                for (l_1017 = (-1); (l_1017 == (-4)); l_1017 = safe_sub_func_uint8_t_u_u(l_1017, 4))
                {
                    unsigned l_1226 = 0UL;
                    int l_1227 = 0x0BA164ECL;
                    int l_1236 = 1L;
                    int l_1242 = 1L;
                    int l_1243 = (-1L);
                    int l_1259 = 0xCD64F70AL;
                    int l_1275 = 0L;
                    int l_1291 = 0xB7CF0EF5L;
                    unsigned short *l_1313 = (void*)0;
                    unsigned short *l_1314 = &l_1125;
                    unsigned **l_1327 = &g_1326;
                    unsigned **l_1329 = &g_1326;
                    unsigned ***l_1328 = &l_1329;
                    unsigned char *l_1330 = &g_1331;
                    for (l_178 = 26; (l_178 >= (-12)); l_178 = safe_sub_func_uint16_t_u_u(l_178, 4))
                    {
                        unsigned char *l_1228 = &g_119;
                        char *l_1229 = &g_33;
                        int l_1230 = (-1L);
                        int l_1237 = 0x0C7DBB01L;
                        int *l_1244 = &l_81;
                        int *l_1245 = &l_1123;
                        int *l_1246 = (void*)0;
                        int *l_1247 = &l_1043;
                        int *l_1248 = &l_1043;
                        int *l_1249 = (void*)0;
                        int *l_1250 = &g_25;
                        int *l_1251 = &l_977;
                        int *l_1252 = (void*)0;
                        int *l_1253 = &l_220;
                        int *l_1254 = &l_225;
                        int *l_1255 = &g_761;
                        int *l_1256 = &l_1104;
                        int *l_1257 = &l_1227;
                        int *l_1258 = (void*)0;
                        int *l_1260 = (void*)0;
                        int *l_1261 = &l_1139;
                        int *l_1262 = &l_1240;
                        int l_1263 = 0xA88EB3A8L;
                        int *l_1264 = (void*)0;
                        int *l_1265 = (void*)0;
                        int *l_1267 = &l_1243;
                        int *l_1268 = &g_389;
                        int *l_1269 = &l_1062;
                        int *l_1270 = &l_1242;
                        int *l_1271 = &l_220;
                        int *l_1272 = &g_389;
                        int *l_1273 = &l_1259;
                        int *l_1274 = &l_1227;
                        int l_1276 = 1L;
                        int *l_1277 = &l_1266;
                        int *l_1278 = &l_1230;
                        int *l_1279 = &l_1243;
                        int *l_1281 = &g_145;
                        int *l_1282 = &g_124;
                        int *l_1283 = &l_1123;
                        int *l_1284 = &l_1104;
                        int *l_1285 = &l_1075;
                        int *l_1286 = &l_201;
                        int *l_1287 = (void*)0;
                        int *l_1288 = &l_81;
                        int *l_1289 = &l_1236;
                        int *l_1290 = &l_974;
                        int *l_1292 = &l_1141;
                        int *l_1293 = &l_1242;
                        int *l_1294 = &l_1078;
                        int *l_1295 = &g_957;
                        int *l_1296 = (void*)0;
                        int *l_1297 = (void*)0;
                        int *l_1298 = &l_1138;
                        int *l_1299 = &l_1242;
                        int *l_1300 = &l_1263;
                        int *l_1301 = &g_957;
                        int *l_1302 = (void*)0;
                        int *l_1303 = &l_1240;
                        int *l_1304 = &l_1078;
                        (*l_1018) = (*l_1130);
                        (*g_34) = (**g_86);
                        (*l_989) |= ((safe_rshift_func_int16_t_s_s((*g_378), 1)) | (p_57 ^ ((((*l_1229) &= ((*l_1130) ^ (safe_sub_func_uint16_t_u_u((((*l_1228) = (safe_unary_minus_func_uint8_t_u((l_1227 = (safe_mod_func_int8_t_s_s(0x9FL, ((safe_lshift_func_int8_t_s_s(g_25, 4)) | (safe_sub_func_uint32_t_u_u((p_55 | (((*g_35) ^ (safe_mod_func_uint32_t_u_u(p_54, (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(l_1226, 0x7E0C540FL)), g_331))))) != p_55)), g_83))))))))) > 0x29L), 0x0BFBL)))) != g_389) | 0L)));
                        ++l_1305;
                    }
                    if ((((*l_1330) ^= ((safe_rshift_func_uint16_t_u_s(((*l_1314) |= ((void*)0 == g_1312)), ((safe_add_func_uint8_t_u_u(p_55, (safe_lshift_func_uint8_t_u_u(g_732, 0)))) ^ (safe_mod_func_uint8_t_u_u(g_33, (g_119 = (safe_rshift_func_int8_t_s_s((-7L), 0)))))))) && ((*l_1324) = ((g_1325 = l_1323) == ((*l_1328) = (l_1327 = &g_1326)))))) != ((*g_378) == p_57)))
                    {
                        (*l_1000) &= (-10L);
                        if ((***l_242))
                            break;
                        (*l_1035) = (*p_56);
                        (*g_87) = l_1332;

                        ;
                    }
                    else
                    {
                        unsigned char l_1333 = 0x34L;
                        short l_1336 = 0x1D83L;
                        --l_1333;
                        if ((*p_56))
                            continue;
                        return l_1336;



                    }

                    ;
                }

                ;

                if ((safe_mod_func_uint32_t_u_u(0x3EF62B4AL, (safe_lshift_func_int16_t_s_u((*g_378), 15)))))
                {
                    int *l_1341 = &g_145;
                    (**g_86) = l_1341;

                    ;
                    if (((--(**l_1323)) && ((((*g_378) = (+(safe_sub_func_int32_t_s_s((*p_56), (!l_1233))))) ^ ((***l_242) > ((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(p_57, 11)), 0x67F4E362L)) < 0xD574L))) || (safe_sub_func_uint16_t_u_u(g_391, p_55)))))
                    {
                        int *l_1355 = &l_1078;
                        ++g_1352;
                        (**l_242) = l_1355;

                        ;
                    }
                    else
                    {
                        (**g_86) = (*g_34);
                        (*l_978) = ((*l_1061) = ((safe_sub_func_uint16_t_u_u((((*g_378) = (0UL || (***g_86))) > (safe_lshift_func_int16_t_s_u((((l_1360 &= g_732) != (***l_242)) < p_57), g_1331))), ((l_1361 = &l_1143) != (void*)0))) || ((*l_1026) = (*g_123))));
                    }

                    ;
                    for (l_1305 = (-22); (l_1305 <= 36); l_1305 = safe_add_func_uint16_t_u_u(l_1305, 5))
                    {
                        return p_55;



                    }
                }
                else
                {
                    return (*l_1130);



                }

                ;
            }

            ;
        }

        ;
        ;
        ;
    }


    ;
    ;
    l_225 |= (*p_56);
    return p_55;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_957, "g_957", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1551, "g_1551", print_hash_value);
    transparent_crc(g_1553, "g_1553", print_hash_value);
    transparent_crc(g_1600, "g_1600", print_hash_value);
    transparent_crc(g_1748, "g_1748", print_hash_value);
    transparent_crc(g_1750, "g_1750", print_hash_value);
    transparent_crc(g_1776, "g_1776", print_hash_value);
    transparent_crc(g_1780, "g_1780", print_hash_value);
    transparent_crc(g_1954, "g_1954", print_hash_value);
    transparent_crc(g_1985, "g_1985", print_hash_value);
    transparent_crc(g_1988, "g_1988", print_hash_value);
    transparent_crc(g_2025, "g_2025", print_hash_value);
    transparent_crc(g_2103, "g_2103", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
