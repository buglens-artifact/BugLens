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



static int g_4 = 0x905C8094L;
static short g_19 = 0x4456L;
static char g_93 = 6L;
static unsigned g_101 = 1UL;
static int g_102 = 0x9D621DD8L;
static unsigned short g_122 = 65528UL;
static unsigned short g_132 = 0UL;
static short g_140 = (-6L);
static int *g_169 = (void*)0;
static const int g_171 = (-7L);
static const int *g_170 = &g_171;
static short *g_183 = &g_19;
static short * volatile * volatile g_182 = &g_183;
static unsigned short **g_209 = (void*)0;
static int g_211 = 0x80C733F4L;
static int * volatile g_210 = &g_211;
static unsigned g_215 = 0x1FBBDD62L;
static unsigned char g_227 = 0x68L;
static int g_304 = 1L;
static int g_336 = (-7L);
static int *g_335 = &g_336;
static unsigned g_359 = 0x096496B3L;
static int g_399 = 0x40861643L;
static const volatile int * volatile g_403 = (void*)0;
static const volatile int * const volatile *g_402 = &g_403;
static const volatile int * const volatile **g_401 = &g_402;
static const volatile int * volatile * volatile g_421 = &g_403;
static const volatile int g_432 = 0xB9FAF5DFL;
static int ** volatile g_434 = (void*)0;
static int ** volatile g_435 = &g_335;
static volatile short g_460 = 1L;
static volatile unsigned char g_484 = 0x4DL;
static volatile unsigned char *g_483 = &g_484;
static volatile unsigned char **g_482 = &g_483;
static volatile unsigned char ** volatile * const g_481 = &g_482;
static int ** volatile g_494 = &g_169;
static int g_501 = 0xEAFA43AAL;
static const volatile int * volatile * volatile g_611 = &g_403;
static int ** volatile g_617 = &g_169;
static const short *g_652 = &g_19;
static const short **g_651 = &g_652;
static int g_675 = 0xCEDC222EL;
static char g_691 = 0L;
static int ** volatile g_698 = &g_169;
static unsigned g_713 = 0x6794133DL;
static unsigned char g_716 = 0UL;
static int g_721 = 1L;
static int *g_720 = &g_721;
static int ** volatile g_806 = &g_720;
static int ** const volatile g_821 = &g_169;
static unsigned char *** volatile g_836 = (void*)0;
static unsigned *g_945 = (void*)0;
static unsigned **g_944 = &g_945;
static int ** const volatile g_954 = &g_169;
static unsigned * volatile g_966 = (void*)0;
static unsigned * volatile *g_965 = &g_966;
static int g_992 = 6L;
static int ** volatile g_1018 = &g_720;
static int ** volatile g_1037 = (void*)0;
static int ** const volatile g_1038 = &g_720;
static unsigned g_1041 = 8UL;
static short **g_1051 = &g_183;
static short ***g_1050 = &g_1051;
static unsigned char **g_1063 = (void*)0;
static unsigned char ***g_1062 = &g_1063;
static unsigned g_1082 = 1UL;
static int ** volatile g_1086 = &g_720;
static int ** volatile g_1087 = &g_169;
static int g_1110 = 0x81E59D80L;
static int ** volatile g_1121 = &g_335;
static int * volatile g_1123 = &g_675;
static int *g_1202 = &g_304;
static int * volatile g_1227 = (void*)0;
static int * volatile g_1228 = &g_501;
static char g_1252 = 0xC8L;
static volatile int * const g_1260 = (void*)0;
static volatile int g_1262 = (-1L);
static unsigned short g_1352 = 0x59F2L;
static unsigned ****g_1359 = (void*)0;
static int g_1381 = 0x2A23CACBL;
static const volatile int * volatile * volatile g_1421 = &g_403;
static volatile int g_1495 = 0x3877E622L;
static volatile short g_1504 = 1L;
static int ** volatile g_1506 = (void*)0;



static unsigned func_1(void);
static int func_10(char p_11, char p_12, short p_13, unsigned short p_14, int * p_15);
static short * func_28(short * const p_29, unsigned p_30, short * p_31, int p_32, int * p_33);
static int func_36(unsigned char p_37, short ** p_38, const unsigned short p_39, short ** p_40, short p_41);
static short ** func_46(unsigned short p_47, int * p_48);
static unsigned short func_49(short ** p_50, int * p_51);
static short ** func_52(int p_53, int * p_54);
static int * func_55(unsigned p_56, int p_57, unsigned short p_58, char p_59);
static int func_62(unsigned p_63);
static const short * func_64(unsigned p_65, short p_66, const int p_67);
static unsigned func_1(void)
{
    unsigned short l_2 = 65535UL;
    int *l_3 = &g_4;
    short *l_27 = &g_19;
    const short l_1007 = (-5L);
    unsigned char *l_1013 = (void*)0;
    unsigned char **l_1012 = &l_1013;
    unsigned l_1024 = 0UL;
    char l_1111 = 3L;
    short * const *l_1114 = (void*)0;
    short * const **l_1113 = &l_1114;
    unsigned l_1115 = 0xF66566D1L;
    unsigned * const l_1116 = (void*)0;
    short l_1137 = 0xFE4EL;
    short **l_1185 = &l_27;
    int *l_1193 = (void*)0;
    unsigned l_1244 = 0x0751D3D4L;
    int l_1257 = 9L;
    volatile int *l_1261 = &g_1262;
    unsigned * const *l_1388 = &g_945;
    unsigned l_1391 = 0xB3812B7DL;
    int l_1413 = (-1L);
    int l_1446 = 0xE4985780L;
    int l_1447 = 0x27C538EAL;
    unsigned char l_1480 = 4UL;
    unsigned char l_1485 = 0UL;
    int l_1494 = 0xB5ED63B5L;
    unsigned char l_1501 = 0x73L;
    int l_1503 = 1L;
    char *l_1510 = (void*)0;
    char *l_1511 = &g_1252;
    unsigned char l_1512 = 6UL;
    int *l_1513 = &g_1381;
    if (((*l_3) = l_2))
    {
        char l_7 = 0xD0L;
        short *l_18 = &g_19;
        short *l_26 = &g_19;
        short **l_34 = &l_18;
        int *l_35 = &g_4;
        unsigned l_719 = 1UL;
        unsigned l_990 = 4294967287UL;
        int *l_991 = &g_992;
        char l_1070 = 0x43L;
        unsigned char *l_1108 = &g_716;
        (*l_991) |= ((((safe_sub_func_int32_t_s_s(l_7, (safe_add_func_int32_t_s_s(func_10((((*l_3) , (!((*l_18) &= ((safe_sub_func_uint8_t_u_u((*l_3), g_4)) || 0xAAD9DDCEL)))) , ((safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((void*)0 != l_26), 1)) | (l_27 != ((*l_34) = func_28(((*l_34) = (void*)0), (*l_3), &g_19, l_7, l_35)))), g_399)) , g_713), l_2)) & (-2L))), l_719, g_399, g_171, g_720), g_399)))) || l_990) , l_3) == &g_171);
        if ((**g_806))
        {
            int *l_1017 = &g_501;
            for (l_7 = (-29); (l_7 <= (-13)); l_7++)
            {
                unsigned char l_997 = 0UL;
                short l_1004 = 0xE663L;
                char *l_1005 = &g_691;
                int l_1006 = 5L;
                unsigned char **l_1015 = &l_1013;
                short **l_1031 = &l_27;
                unsigned l_1036 = 0x0BCB212DL;
                int **l_1042 = &g_720;
                short l_1049 = 1L;
                if (((*l_35) == (safe_lshift_func_uint8_t_u_s(((*l_991) != (((l_997 || (**g_651)) , ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((*l_3), ((+(l_1006 = (((*l_1005) |= (((safe_add_func_int32_t_s_s(((g_484 & (((((g_716 , (*l_3)) == 4UL) && 65535UL) && (*l_35)) , 0xB19DL)) ^ g_215), l_1004)) & 1UL) < 0x9B86L)) || 0L))) , 0x70L))), g_215)) , l_1007)) ^ (-6L))), 6))))
                {
                    int l_1008 = 0x6316BA7EL;
                    unsigned short *l_1009 = &g_132;
                    unsigned char ***l_1014 = &l_1012;
                    short **l_1016 = &g_183;
                    int l_1034 = 0x5FC7BE35L;
                    unsigned char *l_1035 = &g_227;
                    (*l_991) &= (l_1008 || ((*l_1009) = 0x33DCL));
                    (*l_1017) &= ((((func_36((((*l_3) != (*l_3)) | (*l_3)), &g_183, g_716, &g_183, l_997) , (*l_35)) , (*g_483)) ^ 1L) || g_93);
                    (*g_1018) = &l_1008;
                    (*g_1038) = func_55(l_1008, (*g_720), ((((*l_1035) = (l_1034 |= (safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint8_t_u_s(func_36((safe_lshift_func_int16_t_s_u((l_1024 , (safe_add_func_uint8_t_u_u(0xEEL, (safe_rshift_func_uint16_t_u_s(0xEC74L, 2))))), (safe_sub_func_uint32_t_u_u((*l_3), 4294967294UL)))), l_1031, (safe_mod_func_uint16_t_u_u(((*l_1009) = (l_997 | (*l_1017))), l_997)), &g_183, (*l_3)), 0)))))) && 0x68L) < (*l_1017)), l_1036);
                }
                else
                {
                    (*l_1017) ^= l_1006;
                    return l_1036;
                }
                if (((*l_3) &= 0x8791CD35L))
                {
                    for (l_990 = (-22); (l_990 <= 29); l_990 = safe_add_func_int16_t_s_s(l_990, 6))
                    {
                        g_1041 = (*l_991);
                    }
                    (*l_35) |= (-2L);
                }
                else
                {
                    int *l_1043 = &g_4;
                    short ***l_1044 = &l_1031;
                    unsigned *l_1045 = &g_1041;
                    unsigned char *l_1046 = &l_997;
                    (*l_3) &= (l_1042 != ((*l_991) , (*g_401)));
                    (*l_1043) = (((*l_1045) = (**l_1042)) != ((*l_1017) = (*l_35)));
                    if ((((*l_1046) = (*l_1043)) == (((*l_3) , ((*l_1005) = (safe_add_func_uint16_t_u_u(((*l_35) != l_1049), 0xE674L)))) & (**g_482))))
                    {
                        short ****l_1052 = &l_1044;
                        (*l_1043) &= 0x2C00C248L;
                        g_617 = &l_991;
                        (*l_991) &= ((((*l_1052) = g_1050) == &g_1051) && (**g_182));
                        (*l_991) = ((**l_1042) = (**l_1042));
                    }
                    else
                    {
                        const int l_1053 = 0L;
                        (*l_1043) = (**g_806);
                        (*l_991) |= ((*l_1043) , ((((255UL && (((***g_481) , 0x617C57FCL) < (-1L))) == (*l_1017)) , 4294967295UL) && 1UL));
                    }
                }
            }
        }
        else
        {
            char l_1056 = 0xCBL;
            int *l_1057 = &g_501;
            unsigned char ****l_1064 = &g_1062;
            unsigned char ***l_1066 = &g_1063;
            unsigned char ****l_1065 = &l_1066;
            unsigned *l_1069 = &g_359;
            (*l_3) = ((*l_3) , func_36((safe_mod_func_int32_t_s_s(func_36((((func_36((safe_div_func_uint8_t_u_u((!((((*l_1069) &= ((((((*l_1064) = g_1062) != ((*l_1065) = &g_1063)) | (safe_sub_func_uint16_t_u_u(((*l_35) & (***g_481)), 4UL))) == (*l_1057)) ^ (*l_991))) , (void*)0) == (void*)0)), (*l_3))), (*g_1050), (*l_991), &l_26, (***g_1050)) , 0x9C9630B1L) , 0xC08FL) , 255UL), (*g_1050), (*l_1057), &l_27, (*l_1057)), 0x76A1864DL)), (*g_1050), (*l_991), (*g_1050), (*l_991)));
            (*l_1057) = (((*l_1057) < 0xCD014919L) , (**g_1018));
            if ((((l_1070 , (((*l_3) > 0xDAD4D27EL) | (*l_1057))) ^ ((*l_991) = (1UL <= ((*l_3) , (safe_rshift_func_uint16_t_u_s(((*l_991) == (safe_add_func_uint8_t_u_u((**g_482), g_211))), (***g_1050))))))) & 0x7FB924A0L))
            {
                unsigned * const l_1081 = &g_1082;
                unsigned * const *l_1080 = &l_1081;
                unsigned * const **l_1079 = &l_1080;
                (*g_720) = (safe_mod_func_uint8_t_u_u((***g_481), (safe_add_func_int16_t_s_s(0x864DL, ((*l_1057) < ((*l_26) = (((*l_1079) = &g_945) == &g_945)))))));
            }
            else
            {
                int l_1098 = 0x64BA7E0BL;
                int l_1102 = 0xFB5FEC2FL;
                unsigned char *l_1107 = (void*)0;
                for (l_1024 = (-26); (l_1024 < 56); ++l_1024)
                {
                    unsigned char l_1085 = 0x37L;
                    if ((*g_720))
                    {
                        if ((*l_1057))
                            break;
                        return l_1085;
                    }
                    else
                    {
                        (*g_1086) = (*g_1038);
                    }
                    return (*l_991);
                }
                (*g_1087) = l_1069;
                for (l_7 = (-18); (l_7 == 14); ++l_7)
                {
                    (*g_1018) = (*g_1087);
                }
                for (g_227 = (-14); (g_227 > 21); ++g_227)
                {
                    int l_1101 = (-3L);
                    l_1102 &= ((safe_lshift_func_int8_t_s_s(g_227, (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((**g_1051) = ((*l_3) = (**g_1051))), ((((**g_954) = ((*l_991) = (-7L))) ^ (((*l_1057) |= (l_1098 ^ 0xCF1EL)) , ((*l_1057) = (safe_mod_func_int16_t_s_s((l_1101 == l_1098), l_1101))))) == (((l_1098 == l_1098) <= g_399) ^ 1UL)))), 0xDAL)))) > l_1024);
                    (*g_720) |= (~(safe_mod_func_uint8_t_u_u(0xDEL, (safe_rshift_func_uint8_t_u_u((*g_483), (l_1107 == l_1108))))));
                    (*l_1057) = ((*g_720) = (&l_1108 != (*l_1066)));
                    if ((*g_210))
                        continue;
                }
            }
        }
        (*g_720) = ((*l_991) | ((void*)0 != &l_34));
    }
    else
    {
        int l_1109 = 0x3B708F29L;
        return l_1109;
    }
    if ((((*l_3) , l_1116) == (void*)0))
    {
        short l_1119 = 0x995EL;
        int *l_1120 = &g_721;
        for (l_2 = 0; (l_2 >= 9); l_2 = safe_add_func_uint8_t_u_u(l_2, 9))
        {
            (*g_720) |= ((l_1119 ^ ((void*)0 != (**g_401))) > g_171);
        }
        (*g_1121) = l_1120;
    }
    else
    {
        char l_1122 = 1L;
        unsigned short *l_1136 = &g_132;
        int *l_1138 = (void*)0;
        short l_1154 = 0x0F2FL;
        short **l_1239 = &l_27;
        unsigned char *** const l_1266 = &l_1012;
        unsigned l_1288 = 0x5550F7DDL;
        char l_1315 = 1L;
        unsigned l_1317 = 1UL;
        unsigned l_1333 = 4294967292UL;
        const char l_1335 = 0L;
        unsigned * const *l_1342 = &g_945;
        unsigned * const **l_1341 = &l_1342;
        int *l_1380 = (void*)0;
        const unsigned l_1392 = 0UL;
        unsigned char l_1393 = 0xC8L;
        short l_1445 = 0xC97DL;
        const unsigned char l_1448 = 0x1EL;
        unsigned l_1498 = 0xE4403FF8L;
        unsigned char *l_1502 = &l_1393;
        char *l_1505 = &l_1111;
        int **l_1507 = &l_1193;
        if ((**g_1038))
        {
            char *l_1124 = &g_691;
            char *l_1125 = &g_93;
            char *l_1126 = (void*)0;
            char *l_1127 = &l_1111;
            unsigned *l_1128 = &g_101;
            unsigned *l_1129 = &g_1082;
            int l_1145 = 0xC341E6F3L;
            unsigned short *l_1199 = &l_2;
            (*g_1123) &= ((*g_720) = l_1122);
            if ((((*l_1127) = ((*l_1125) = ((*l_1124) = (-6L)))) == (((&g_1051 != &g_651) , (***g_481)) && (!func_62(((*l_1129) = ((*l_1128) = 4294967290UL)))))))
            {
                const int *l_1130 = &g_102;
                int l_1131 = 7L;
                unsigned short *l_1134 = (void*)0;
                int *l_1135 = &g_304;
                int **l_1139 = &l_3;
                int **l_1140 = &g_335;
                unsigned ***l_1158 = &g_944;
                l_1138 = func_55((l_1130 == &g_399), (l_1131 <= ((l_1131 | (safe_lshift_func_uint8_t_u_s((((void*)0 != l_1134) >= (((((*l_1135) = (l_1122 && l_1122)) , l_1136) == &l_2) ^ 0x3A95L)), g_4))) & 0x01E91643L)), l_1137, l_1131);
                (*l_1140) = ((l_1131 <= g_460) , ((*l_1139) = l_1128));
                for (g_399 = 16; (g_399 < (-15)); --g_399)
                {
                    short l_1155 = (-1L);
                    (**l_1140) = (((safe_mod_func_int32_t_s_s((l_1145 , (safe_add_func_int32_t_s_s(((*l_1138) = ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((l_1154 >= ((void*)0 != &g_1051)) & l_1155) , (((safe_sub_func_int16_t_s_s((((0x80E1L == ((((*l_3) >= (l_1158 != (void*)0)) , (*g_483)) == g_691)) & g_1110) <= (*l_1138)), l_1155)) >= (**l_1139)) , 0xB8L)), g_102)), (*g_335))) , (*l_3)), (***g_1050))) , (*g_1123))), 0x19213A91L))), (*l_3))) && (**g_182)) && (-1L));
                }
                (*l_3) &= 0x6E2BD593L;
            }
            else
            {
                unsigned char l_1163 = 255UL;
                short **l_1212 = (void*)0;
                for (g_691 = 0; (g_691 > (-19)); --g_691)
                {
                    int *l_1164 = &g_675;
                    int **l_1165 = &l_3;
                    unsigned char *l_1175 = &g_227;
                    unsigned char ****l_1176 = &g_1062;
                    int *l_1177 = &g_336;
                    unsigned l_1189 = 4294967295UL;
                    unsigned *l_1190 = &g_713;
                    (*l_1177) &= ((g_721 , (((*l_1136) = (safe_mod_func_int16_t_s_s(((*l_3) , (((*l_1176) = (func_62((l_1145 , (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((***g_481), ((*l_1175) = (safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((*l_1164) | 1L))), g_992))))) <= (**g_1051)), 4)), g_101)))) , &g_1063)) == &g_1063)), (*g_183)))) > (*g_183))) >= l_1163);
                    for (g_399 = 14; (g_399 <= (-24)); g_399 = safe_sub_func_uint8_t_u_u(g_399, 7))
                    {
                        const unsigned char l_1184 = 0x73L;
                        int *l_1186 = &g_992;
                        if ((**g_1018))
                            break;
                        (*l_1177) &= (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1184, (***g_481))), ((((*g_720) && 0UL) , (~(*l_3))) , (*l_1164)))) <= ((*g_720) > (*g_720))) , (*l_3));
                    }
                    if ((*l_3))
                        break;
                    (*l_3) = (l_1163 , (**g_1038));
                }
                if (((**g_1051) ^ (safe_mod_func_uint32_t_u_u(l_1122, 0xF4A4111BL))))
                {
                    int l_1200 = 0x27A085E7L;
                    short l_1213 = 7L;
                    const short ***l_1214 = &g_651;
                    int l_1223 = (-8L);
                    (*g_720) = (l_1163 , func_62(l_1163));
                    for (l_1163 = (-24); (l_1163 != 24); ++l_1163)
                    {
                        unsigned l_1196 = 0xCAC10CD4L;
                        int *l_1201 = &g_501;
                        int **l_1203 = &g_335;
                        (**g_806) = l_1196;
                        (*l_1203) = func_55((safe_rshift_func_uint8_t_u_s((((*g_720) = l_1163) > ((*l_1201) = (l_1200 = (l_1199 != ((*g_483) , &l_2))))), 1)), (&g_1110 == (g_1202 = (((*l_1127) ^= l_1163) , &g_304))), (g_1041 , l_1163), g_132);
                    }
                    if ((((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((g_501 <= (safe_sub_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u(0xA1C1L, func_36(l_1122, (*g_1050), l_1145, l_1212, (~(((*l_3) < l_1200) >= l_1200))))) < l_1163) , l_1163), 0xE0L))), 1)), l_1213)) >= 1UL) , 0x6E4F6BB5L))
                    {
                        const short ****l_1215 = &l_1214;
                        const char l_1224 = 1L;
                        (*g_720) = ((((*l_3) , &g_651) != ((*l_1215) = l_1214)) , (safe_sub_func_int32_t_s_s(((((safe_unary_minus_func_int16_t_s(((*g_1202) , ((**l_1185) = ((safe_div_func_uint8_t_u_u((~l_1200), (*l_3))) > g_359))))) ^ (safe_add_func_int16_t_s_s(((((void*)0 == &g_691) , (*g_1202)) , l_1223), (*l_3)))) >= l_1163) | l_1224), 1L)));
                    }
                    else
                    {
                        int *l_1225 = &l_1223;
                        int **l_1226 = &g_720;
                        (*l_1226) = l_1225;
                    }
                    (*l_3) ^= (252UL || 0UL);
                }
                else
                {
                    (*g_1228) &= (*l_3);
                }
            }
        }
        else
        {
            short l_1236 = 0x5246L;
            int l_1245 = 9L;
            char *l_1255 = &g_93;
            char *l_1276 = &g_691;
            unsigned *l_1279 = &l_1115;
            short **l_1282 = &g_183;
            int l_1287 = 0x673F1241L;
            char l_1302 = 1L;
            char l_1331 = (-1L);
            unsigned ***l_1362 = (void*)0;
            unsigned ****l_1361 = &l_1362;
            unsigned char *** const *l_1369 = (void*)0;
            unsigned l_1375 = 4294967295UL;
            unsigned char ****l_1389 = &g_1062;
            const int *l_1402 = &l_1245;
            short ***l_1411 = &l_1185;
            unsigned l_1414 = 0UL;
            unsigned l_1422 = 3UL;
            short l_1452 = 1L;
            unsigned l_1453 = 0x99B2D46AL;
            const unsigned char l_1465 = 0x06L;
            int **l_1481 = &g_720;
            unsigned *l_1486 = &l_1333;
            int **l_1493 = &l_1193;
            if ((*l_3))
            {
                unsigned char l_1233 = 1UL;
                int *l_1251 = (void*)0;
                short **l_1265 = &g_183;
                for (g_675 = (-7); (g_675 > 8); g_675 = safe_add_func_uint16_t_u_u(g_675, 3))
                {
                    int l_1256 = (-9L);
                    if (((*l_3) ^= (safe_mod_func_uint32_t_u_u(l_1233, ((safe_mod_func_int32_t_s_s(l_1236, (safe_rshift_func_uint16_t_u_u(g_460, ((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((((!((void*)0 == &g_402)) == l_1236) , l_1236) > l_1233), l_1244)), l_1236)) && 0UL))))) && (-7L))))))
                    {
                        const unsigned l_1246 = 0x5E358C15L;
                        l_1245 ^= ((*g_720) = l_1233);
                        if (l_1246)
                            continue;
                    }
                    else
                    {
                        const volatile int * volatile *l_1247 = &g_403;
                        int **l_1248 = &l_3;
                        (*l_1247) = (*g_421);
                        (*l_1248) = &l_1245;
                        l_1257 |= (safe_sub_func_int16_t_s_s(g_1252, ((g_460 | ((safe_add_func_uint32_t_u_u((&g_1252 == l_1255), (*g_720))) <= 0x6C2FCABCL)) >= ((7UL || (**l_1248)) , l_1256))));
                        if ((**g_1038))
                            break;
                    }
                    return g_1082;
                }
                l_1245 = (safe_add_func_uint32_t_u_u((l_1233 , (((**g_482) >= l_1236) && 0xAC0188C1L)), g_716));
                l_1261 = g_1260;
                (*g_720) |= (!(((safe_lshift_func_uint16_t_u_s((((l_1245 , l_1266) == ((safe_lshift_func_int8_t_s_u((0xD6A714F9L ^ (9L != 0L)), (safe_add_func_uint32_t_u_u(g_122, l_1245)))) , (void*)0)) > g_460), l_1236)) , g_93) != 0x2EL));
            }
            else
            {
                unsigned char l_1273 = 0x61L;
                for (g_336 = 0; (g_336 == 11); g_336 = safe_add_func_int8_t_s_s(g_336, 6))
                {
                    return l_1273;
                }
            }
            if (func_36(((*g_483) != ((g_716 &= (((((*l_1255) = g_4) | (safe_sub_func_uint32_t_u_u((((*l_1276) |= g_336) >= g_304), (g_1041 |= (safe_add_func_int32_t_s_s((((l_1279 == ((*g_944) = (*g_944))) >= (!(safe_mod_func_uint16_t_u_u(g_140, 0x289DL)))) | l_1245), (*g_720))))))) < 0x00L) , g_1110)) , g_93)), l_1282, l_1236, (*g_1050), (**g_651)))
            {
                unsigned short l_1286 = 1UL;
                int l_1336 = 2L;
                for (g_4 = 20; (g_4 == (-13)); g_4--)
                {
                    char l_1285 = 0L;
                    l_1285 = (*g_210);
                    if (l_1286)
                        break;
                    l_1287 |= ((*l_3) , (*g_210));
                }
                if ((func_62(l_1245) >= l_1288))
                {
                    return g_304;
                }
                else
                {
                    short l_1297 = (-6L);
                    unsigned char *l_1303 = &g_227;
                    int l_1328 = (-1L);
                    unsigned *l_1334 = &g_1041;
                    for (g_1110 = (-9); (g_1110 == 21); g_1110 = safe_add_func_int32_t_s_s(g_1110, 1))
                    {
                        unsigned l_1291 = 0xCB1CDAB6L;
                        return l_1291;
                    }
                    if ((safe_sub_func_int32_t_s_s((l_1287 = (*g_1123)), ((safe_rshift_func_uint16_t_u_s((l_1154 >= (g_501 < (safe_unary_minus_func_uint8_t_u(l_1297)))), 4)) , ((((*l_1303) = (l_1297 , ((((*l_1255) = (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(g_227, (g_691 , (l_1302 = 0x44L)))), 4)) < (l_1286 & g_691)) , 0L)) , l_1302) & l_1286))) , l_1297) == (-1L))))))
                    {
                        short l_1310 = 0x1008L;
                        int *l_1316 = &g_675;
                        int **l_1318 = &l_1316;
                        (*l_1318) = ((((safe_lshift_func_uint16_t_u_u(1UL, (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u((l_1286 || (**g_1051)), ((*l_1303) = func_62(l_1310)))) < 0xA25EL), ((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((l_1317 = ((*l_1316) = (((*g_1202) = (l_1287 = ((-1L) < 1UL))) , l_1315))) , 2UL), 4)), g_713)) , l_1286) , g_1082) , 0xD8BC1ECAL))))) & 0L) >= g_992) , (*g_1086));
                    }
                    else
                    {
                        int l_1327 = 0x6828BE02L;
                        (*g_720) = ((safe_mod_func_uint16_t_u_u(l_1286, ((safe_sub_func_uint8_t_u_u(((*g_1202) , func_62((safe_rshift_func_int8_t_s_u(((((((*l_1303) |= (***g_481)) | ((*l_1276) |= (safe_rshift_func_int16_t_s_u((l_1327 <= (l_1297 && ((*l_1136) = 0xD1ECL))), 4)))) & ((*l_3) < (l_1327 , l_1297))) , l_1327) >= g_4), 1)))), g_713)) , (*g_652)))) >= l_1302);
                    }
                    (*l_3) = l_1297;
                    l_1336 = func_36((l_1328 = l_1297), (*g_1050), l_1335, (*g_1050), (**g_182));
                }
                return g_713;
            }
            else
            {
                short l_1337 = 0x6A6FL;
                unsigned ***l_1339 = &g_944;
                char l_1376 = (-5L);
                short **l_1379 = &g_183;
                int *l_1429 = &l_1257;
                unsigned char *l_1430 = (void*)0;
                unsigned char *l_1431 = &g_227;
                int **l_1449 = &l_3;
                unsigned short *l_1462 = &g_1352;
                if (((l_1337 , &g_945) == (void*)0))
                {
                    short **l_1338 = &l_27;
                    unsigned ****l_1340 = &l_1339;
                    unsigned * const ***l_1343 = &l_1341;
                    char *l_1350 = &l_1122;
                    int l_1351 = (-1L);
                    unsigned char *****l_1390 = &l_1389;
                    if (((l_1337 && func_36((*g_483), (((*l_1255) = (((((((void*)0 == l_1338) , ((*l_1340) = l_1339)) != ((*l_1343) = l_1341)) , (((4L != (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_227, 2)), (((((((safe_rshift_func_int16_t_s_s((((((void*)0 == l_1350) ^ l_1287) | g_171) & 1UL), 15)) , g_359) & l_1337) , l_1351) | g_721) <= g_691) & l_1337)))) > (*g_720)) | (*l_3))) , l_1337) > 249UL)) , l_1282), l_1351, l_1338, g_1352)) <= l_1351))
                    {
                        unsigned *****l_1360 = (void*)0;
                        unsigned l_1363 = 0x5EBD66FDL;
                        int *l_1364 = &g_501;
                        int **l_1365 = &g_169;
                        (*g_720) = (safe_lshift_func_int8_t_s_u(g_1252, ((*g_183) == (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_1245, (((((**g_182) , (((void*)0 == g_209) > (0UL <= l_1302))) & ((l_1361 = g_1359) == &l_1362)) || l_1363) >= l_1351))), l_1337)))));
                        (*l_1365) = l_1364;
                    }
                    else
                    {
                        int l_1366 = 0xB8E63925L;
                        unsigned *l_1370 = &l_1288;
                        unsigned char *l_1377 = &g_716;
                        short l_1378 = 0x860AL;
                        short **l_1382 = &l_27;
                        (*l_3) &= ((+l_1366) != ((*l_1370) = ((~((*l_1377) = (**g_482))) & l_1236)));
                        (*l_3) = (((l_1378 || (0x1AL <= g_304)) == (func_62(func_36(g_1381, ((*g_1050) = l_1379), l_1331, l_1382, (*g_652))) , (*l_3))) > l_1287);
                        (*l_3) = (*l_3);
                    }
                    l_1393 ^= ((**g_806) = (safe_mod_func_uint32_t_u_u((((***g_481) ^ 0xF4L) > l_1392), 4UL)));
                    for (l_1376 = 0; (l_1376 <= 13); l_1376 = safe_add_func_int8_t_s_s(l_1376, 9))
                    {
                        unsigned l_1400 = 1UL;
                        const int **l_1401 = &g_170;
                        unsigned *l_1412 = &g_713;
                        int **l_1415 = (void*)0;
                        int **l_1416 = &g_169;
                        l_1402 = ((*l_1401) = func_55(l_1287, ((((*l_1350) = (safe_div_func_int32_t_s_s((l_1376 != l_1376), (safe_rshift_func_int16_t_s_s((*g_183), (0L <= func_62(l_1337))))))) < g_304) < g_227), l_1400, l_1337));
                        (*g_720) = ((void*)0 == (*g_944));
                        (*l_1401) = ((*l_1416) = func_55(l_1351, (safe_mod_func_int8_t_s_s(g_675, (safe_sub_func_int32_t_s_s((((*l_1276) = (((**l_1401) <= (((safe_rshift_func_uint8_t_u_u((*g_483), 2)) , ((l_1351 > ((*l_1412) |= (!((((0x37A2L > ((**l_1401) , (!(safe_div_func_uint32_t_u_u((l_1376 > (&l_1185 == l_1411)), g_304))))) , 0x9AF7L) && (*l_3)) || (**g_806))))) >= l_1413)) == l_1414)) <= 0x16L)) < g_211), g_4)))), (*l_1402), g_721));
                    }
                    for (l_1024 = 0; (l_1024 != 24); l_1024++)
                    {
                        char l_1419 = (-2L);
                        return l_1419;
                    }
                }
                else
                {
                    unsigned l_1420 = 0x90C82E0EL;
                    (*g_1421) = (l_1420 , (*g_402));
                    (*l_3) = ((l_1422 = (*g_483)) == (((void*)0 != &g_1050) == l_1337));
                    for (l_1420 = 2; (l_1420 != 25); l_1420 = safe_add_func_uint16_t_u_u(l_1420, 6))
                    {
                        (*g_720) = (-10L);
                    }
                    (*l_3) = func_62(l_1420);
                }
                (*l_1449) = ((((safe_mod_func_int8_t_s_s(((*l_1255) = (safe_rshift_func_int16_t_s_u(((**l_1185) = (g_4 , l_1337)), (((void*)0 == l_1429) == ((*l_1431) = (*l_1429)))))), (safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((((*l_3) != ((((((((*l_1276) = (0x08787922L && (((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((*l_1429))), (safe_div_func_uint8_t_u_u(((l_1445 <= (*l_1429)) > l_1446), 0x31L)))) > (*l_3)), (*l_1429))), 0)) != 0UL) >= (*l_1429)))) == (*l_1402)) <= (*g_210)) , (*l_1429)) , 0x87L) , l_1447) , 4294967286UL)) && g_691), l_1448)), g_675)))) > (-1L)) < (*l_1402)) , (void*)0);
                l_1287 |= ((safe_lshift_func_uint8_t_u_u((((*l_1136) &= (l_1453 |= (!l_1452))) , func_36((((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_1462) = ((*l_1136) |= (safe_sub_func_uint8_t_u_u(((void*)0 != &g_481), (safe_rshift_func_uint16_t_u_u(g_1041, 8)))))) , (*l_1339)) != (*l_1341)), (*l_1429))), (*l_1402))) >= ((*l_1431) = (safe_rshift_func_int8_t_s_s(l_1465, 3)))) , (*l_1402)), (*g_1050), g_101, (*g_1050), (*g_183))), g_501)) && (*l_1429));
            }
            (*l_1481) = func_55(((*l_1279) = (func_62(((**g_1018) <= ((*l_1402) && (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_93 , (((safe_rshift_func_uint16_t_u_s(g_992, 1)) > ((*g_652) && ((*l_1136) = (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(g_227, 1)) <= ((safe_mod_func_int8_t_s_s(g_359, (*l_1402))) ^ (l_1480 < (*l_1402)))), 6)), (*l_1402)))))) & (*l_1402))), (*l_1402))), (*l_1402)))))) && 1UL)), g_713, g_140, g_19);
            (*l_1493) = ((*l_1481) = func_55(((*l_1486) = ((safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((~(l_1485 , (**l_1481))), 0x372CC59CL)))) , ((*l_1279) = (*l_1402)))), ((g_101 || (***g_1050)) == ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((-1L) != (safe_lshift_func_uint16_t_u_s(((0xC3BFL <= 0x5401L) || g_721), (**l_1481)))) & (*g_183)), (*l_1402))), g_227)) && 4L)), (**l_1481), g_716));
        }
        (*l_1507) = func_55(l_1494, ((((*l_1505) = (((*g_652) && (**g_1051)) , ((g_1495 >= ((((-6L) && (9L == (safe_div_func_uint16_t_u_u((((0L && l_1498) , (safe_lshift_func_int8_t_s_s(((((*l_1502) &= l_1501) < g_399) , g_359), g_992))) , l_1503), g_1082)))) , (*g_944)) == (*l_1388))) && g_1504))) <= g_721) , 4L), l_1445, g_102);
    }
    (*l_1513) = ((safe_div_func_int16_t_s_s(((((*l_1511) = g_102) > 1L) != (((**l_1185) = (*g_652)) == (+(0UL && (0xE2L < g_4))))), l_1512)) > (l_1024 == 0x928CE8F3L));
    return (*l_1513);
}







static int func_10(char p_11, char p_12, short p_13, unsigned short p_14, int * p_15)
{
    unsigned l_722 = 0xC0A4B4C9L;
    unsigned short **l_742 = (void*)0;
    char l_765 = (-9L);
    int l_766 = 0L;
    short **l_817 = &g_183;
    short ***l_816 = &l_817;
    unsigned char *l_835 = &g_716;
    unsigned char **l_834 = &l_835;
    const int l_859 = 0L;
    unsigned char l_862 = 0x81L;
    int l_947 = 0L;
    unsigned char l_973 = 7UL;
    short **l_989 = &g_183;
    l_722 = (*p_15);
    if ((+l_722))
    {
        unsigned char l_725 = 255UL;
        char *l_731 = &g_691;
        short **l_756 = &g_183;
        unsigned short *l_790 = (void*)0;
        unsigned short **l_789 = &l_790;
        unsigned *l_799 = &g_215;
        unsigned char ***l_837 = &l_834;
        if ((((((**g_182) |= p_14) && 0x3628L) < (safe_mod_func_int8_t_s_s(((g_713 = g_713) && l_725), g_140))) ^ (*p_15)))
        {
            short **l_727 = &g_183;
            short ***l_726 = &l_727;
            (*g_720) = ((void*)0 == l_726);
        }
        else
        {
            int *l_755 = &g_675;
            short **l_805 = (void*)0;
            if ((*p_15))
            {
                for (g_122 = (-13); (g_122 != 27); g_122 = safe_add_func_int16_t_s_s(g_122, 9))
                {
                    const unsigned char l_730 = 0xC4L;
                    (*p_15) = (*p_15);
                    (*g_720) = l_730;
                }
                (*p_15) |= ((void*)0 != l_731);
            }
            else
            {
                short **l_734 = &g_183;
                int l_735 = 0x0E835C0AL;
                for (g_721 = 23; (g_721 != 1); --g_721)
                {
                    unsigned short l_752 = 0xC0D6L;
                    int *l_753 = &g_102;
                    int l_760 = (-1L);
                    if (l_735)
                    {
                        int *l_744 = &g_304;
                        int **l_743 = &l_744;
                        const unsigned short *l_751 = &g_122;
                        unsigned *l_754 = &g_101;
                        const int l_757 = 0xB489AFE9L;
                        (*l_755) = func_36(p_11, l_756, l_757, &g_183, p_14);
                        l_766 = (l_765 = (((l_760 = (safe_div_func_uint16_t_u_u(0x4B96L, (**g_182)))) && (((safe_mod_func_uint16_t_u_u(p_12, l_735)) , &p_13) != &p_13)) | p_14));
                        if ((*p_15))
                            continue;
                    }
                    else
                    {
                        short **l_769 = (void*)0;
                        short ***l_778 = &l_734;
                        int **l_779 = &l_755;
                        p_15 = &l_760;
                        (*l_755) |= ((((safe_mod_func_int16_t_s_s((*g_183), 0x07F1L)) , 0x65L) & 0xFEL) && g_460);
                    }
                    (*l_755) = (*p_15);
                    return l_735;
                }
                for (g_359 = 0; (g_359 != 39); g_359 = safe_add_func_int16_t_s_s(g_359, 2))
                {
                    unsigned l_804 = 0x6761F67DL;
                    for (p_11 = 0; (p_11 < (-30)); p_11 = safe_sub_func_int8_t_s_s(p_11, 9))
                    {
                        unsigned l_786 = 0x50D47651L;
                        (*l_755) |= (0L && (((safe_rshift_func_uint8_t_u_u(p_11, (g_209 != (((func_62(l_786) || (((*p_15) &= (safe_mod_func_uint16_t_u_u((p_11 ^ p_14), func_62(p_11)))) >= g_304)) , (-1L)) , l_789)))) , 0xC3L) , l_786));
                        (*l_755) = ((*p_15) = l_786);
                    }
                    if ((*p_15))
                    {
                        (*g_720) = (**g_806);
                    }
                    else
                    {
                        unsigned l_807 = 4294967295UL;
                        unsigned char l_818 = 0xBCL;
                        unsigned short *l_819 = (void*)0;
                        unsigned short *l_820 = &g_132;
                        (*g_720) = l_804;
                        (*g_821) = func_55(l_807, ((safe_add_func_int8_t_s_s(p_12, 0xA2L)) , l_722), ((*l_820) = ((safe_sub_func_int8_t_s_s((g_432 ^ ((safe_lshift_func_uint16_t_u_u(0x7C60L, (0xD405L || (safe_mod_func_uint8_t_u_u((l_735 || ((!(((p_12 , (void*)0) != l_816) == p_12)) , p_12)), l_818))))) || l_725)), 0x2DL)) || p_12)), l_765);
                    }
                    (*l_755) &= (*p_15);
                    if ((*p_15))
                        break;
                }
                for (g_132 = 0; (g_132 >= 60); ++g_132)
                {
                    unsigned l_826 = 4294967286UL;
                    unsigned short *l_829 = &g_122;
                    for (l_765 = 7; (l_765 < (-30)); l_765--)
                    {
                        return l_725;
                    }
                    (*l_755) = (p_11 & ((*l_829) = ((!(l_826 , (***g_481))) > (safe_sub_func_int16_t_s_s(p_12, (g_399 , l_826))))));
                }
                for (g_691 = 6; (g_691 <= (-2)); g_691 = safe_sub_func_int16_t_s_s(g_691, 9))
                {
                    (*g_720) = (*p_15);
                    for (p_14 = 14; (p_14 != 42); p_14 = safe_add_func_int16_t_s_s(p_14, 5))
                    {
                        l_766 ^= (*p_15);
                        if ((**g_806))
                            continue;
                    }
                }
            }
        }
        (*l_837) = l_834;
        (*g_720) ^= (~(l_725 < p_13));
    }
    else
    {
        unsigned short *l_838 = &g_132;
        int **l_844 = (void*)0;
        int l_850 = (-7L);
        short **l_903 = &g_183;
        unsigned short l_930 = 0xEB30L;
        int *l_972 = &g_304;
        if ((p_12 && ((*l_838) |= p_14)))
        {
            char *l_843 = &g_691;
            int ***l_845 = (void*)0;
            int **l_847 = &g_335;
            int ***l_846 = &l_847;
            unsigned short **l_848 = (void*)0;
            unsigned short **l_849 = &l_838;
            unsigned char **l_875 = &l_835;
            int *l_890 = &g_4;
            if ((((l_765 | (((((((safe_lshift_func_uint8_t_u_u(((((l_766 == (safe_lshift_func_int8_t_s_u(((*l_843) = g_713), (***g_481)))) > (((&p_15 == ((*l_846) = (l_844 = &g_720))) >= (((*l_849) = (void*)0) != (l_850 , (void*)0))) ^ l_766)) > g_101) > (*g_720)), g_19)) && (***l_846)) , (*g_210)) > p_14) < l_722) && 0x5EL) > 0x09A9L)) == l_722) && 0xEAEDL))
            {
                short *l_860 = (void*)0;
                short *l_861 = &g_140;
                int l_863 = 0xEDF462FEL;
                int *l_864 = &g_4;
                int l_871 = (-1L);
                (*l_864) &= (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(p_11, ((g_171 , p_14) && (safe_lshift_func_int16_t_s_u(((+2L) <= ((((safe_div_func_int16_t_s_s((l_859 , ((*l_861) = ((*g_183) &= 0x87BAL))), (g_122 , (l_862 , (p_14 | p_12))))) || 9L) != g_359) > (**g_806))), 10))))) && l_863), 0x840BL));
                (**l_844) = 1L;
                (*l_844) = func_55(g_93, (*p_15), (((0x691EL != ((safe_mod_func_int8_t_s_s((g_691 = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(0x9B01L, (**l_847))), l_871))), (((((p_13 & (((***l_816) = (*g_183)) | p_11)) , 0x51L) <= (*l_864)) & (***l_846)) , p_12))) >= l_722)) && 0x14391649L) , p_12), p_11);
                l_864 = &l_766;
            }
            else
            {
                unsigned *l_876 = &g_215;
                int l_884 = 1L;
                short *l_887 = &g_19;
                (*g_720) = ((l_859 != (-2L)) <= (safe_sub_func_uint32_t_u_u(((*l_876) = (safe_unary_minus_func_int16_t_s(((**l_817) ^= ((void*)0 != l_875))))), (safe_div_func_uint16_t_u_u(((**l_844) , (safe_add_func_int8_t_s_s(g_691, ((***g_481) == p_11)))), p_13)))));
                for (l_862 = 0; (l_862 == 19); l_862 = safe_add_func_int16_t_s_s(l_862, 2))
                {
                    char l_883 = 5L;
                    if (((l_883 <= ((p_12 <= l_862) , ((l_884 || (((((*g_182) == (l_887 = (g_501 , (**l_816)))) > (((**l_847) = (p_13 , 0xBEF599FDL)) >= 0xB310BAE5L)) < p_14) <= p_13)) ^ l_884))) & p_14))
                    {
                        return (*p_15);
                    }
                    else
                    {
                        if ((*p_15))
                            break;
                    }
                    for (g_675 = 4; (g_675 >= (-18)); g_675--)
                    {
                        (**l_846) = l_890;
                        return (*p_15);
                    }
                    return (*p_15);
                }
            }
        }
        else
        {
            unsigned l_895 = 1UL;
            const unsigned char l_896 = 0x57L;
            int l_946 = 0x4ECDB7EAL;
            short *l_948 = &g_140;
            char *l_953 = &g_93;
            (*g_720) = (safe_mod_func_int32_t_s_s((((((l_895 = p_11) <= (l_896 < p_13)) && g_101) ^ (((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_add_func_int32_t_s_s((-1L), (*p_15))) | (*p_15)), ((((*l_838) = func_36(p_11, l_903, l_722, &g_183, l_896)) > 0x73F0L) ^ p_12))), 14)) || 5UL) == g_211)) > (*g_183)), l_896));
            for (g_211 = 0; (g_211 >= (-7)); g_211 = safe_sub_func_uint32_t_u_u(g_211, 6))
            {
                unsigned short l_911 = 0xCC2AL;
                int l_918 = (-4L);
                unsigned l_927 = 0xC830973FL;
                for (g_122 = 0; (g_122 < 53); g_122 = safe_add_func_int32_t_s_s(g_122, 8))
                {
                    unsigned char l_928 = 7UL;
                    if (func_62(p_12))
                    {
                        short l_908 = 1L;
                        (*g_720) ^= l_908;
                    }
                    else
                    {
                        (*g_720) = (*p_15);
                    }
                    for (g_140 = 0; (g_140 >= (-5)); --g_140)
                    {
                        (*g_720) ^= l_911;
                    }
                    for (g_304 = 0; (g_304 == 20); ++g_304)
                    {
                        unsigned *l_929 = &l_722;
                        int l_942 = 0x8E434E30L;
                        short **l_943 = &g_183;
                        (*g_720) = (safe_div_func_uint8_t_u_u((**g_482), (l_766 & (safe_div_func_uint32_t_u_u(l_918, (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((((g_359 , p_13) <= g_19) ^ ((((*l_929) = (l_928 &= (((safe_add_func_int32_t_s_s((*p_15), (+0x8D10A7D2L))) , func_55((l_927 &= ((safe_lshift_func_uint16_t_u_s(p_14, 8)) ^ g_122)), (*p_15), l_895, p_12)) != (void*)0))) | 0UL) > l_896)) < l_766), 0x8DL)), 0xCCAD854DL)))))));
                        (*p_15) |= ((l_930 & 0x56L) || g_691);
                        if ((*p_15))
                            continue;
                        (*p_15) = (safe_lshift_func_uint16_t_u_u((func_62(func_36((func_62(((*p_15) || (safe_mod_func_uint32_t_u_u((g_215 = (safe_mul_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(p_12, p_11)) < func_62(l_896)) & (safe_unary_minus_func_int16_t_s((((**l_834) = ((safe_rshift_func_uint8_t_u_s(g_171, ((0xE087L ^ l_911) , l_896))) == 0x13L)) && p_12)))), 0L))), l_896)))) , l_942), l_943, g_227, &g_183, l_911)) , 0x7029L), p_11));
                    }
                    (*g_720) |= ((void*)0 == g_944);
                }
            }
            (*g_720) = (((l_766 != ((**g_651) != ((*l_948) = func_62((l_947 = l_946))))) == (-1L)) > (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_14, 7)), (*g_652))) != (((*l_953) = (l_859 > (p_12 & l_895))) != g_211)) & g_359));
            (*g_954) = &l_766;
        }
        if ((((p_14 , &l_817) == ((l_766 , 0L) , &g_182)) || p_12))
        {
            unsigned l_959 = 0x83F1305FL;
            short **l_960 = &g_183;
            int l_961 = 0L;
            int *l_962 = &l_850;
            unsigned *l_968 = &l_722;
            unsigned **l_967 = &l_968;
            (*g_720) = (safe_sub_func_uint32_t_u_u(p_11, (safe_lshift_func_int8_t_s_s((l_961 = ((*p_15) <= (p_13 || p_14))), 4))));
            (*l_962) = ((*p_15) &= l_850);
            (*g_720) = (*p_15);
            (*g_720) = ((*l_962) |= (((((safe_lshift_func_int8_t_s_s((((+l_766) , g_965) != l_967), ((((safe_lshift_func_int8_t_s_u(g_359, ((((*l_835) = (*g_483)) == g_140) < (safe_unary_minus_func_uint8_t_u(0x47L))))) , (void*)0) == l_972) & l_973))) == 7UL) == l_947) && (*g_652)) , 0x346D02EAL));
        }
        else
        {
            unsigned l_976 = 4294967289UL;
            char *l_987 = &g_93;
            (*g_720) = ((safe_rshift_func_int8_t_s_s(l_976, ((*l_987) &= (((safe_rshift_func_uint16_t_u_s(6UL, ((**l_817) &= (safe_rshift_func_uint8_t_u_s(((&l_903 != &l_817) <= ((((0UL >= l_976) , (void*)0) != &p_14) , (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((p_11 > l_859), l_859)), l_766)), 0xBBL)))), 6))))) & l_976) == p_12)))) == p_12);
        }
    }
    (*p_15) = (p_14 >= (safe_unary_minus_func_uint16_t_u((((*l_816) = (*l_816)) == l_989))));
    return (*p_15);
}







static short * func_28(short * const p_29, unsigned p_30, short * p_31, int p_32, int * p_33)
{
    short *l_43 = &g_19;
    short **l_42 = &l_43;
    const unsigned short l_44 = 0x65E1L;
    int *l_674 = &g_675;
    char l_694 = 0x17L;
    (*p_33) = func_36(p_32, l_42, l_44, (((safe_unary_minus_func_uint32_t_u(l_44)) , (3UL & (*p_33))) , func_46(((((((func_49(func_52(l_44, func_55(p_30, (((1L == g_4) && l_44) , 0xE0A4D2C6L), p_32, p_30)), g_335) , l_44) , 0x3EL) != p_30) >= 4294967291UL) | p_32) > l_44), l_674)), l_694);
    (*l_674) = (*l_674);
    (*l_674) = (((***g_481) | (&l_43 == (void*)0)) | (*l_674));
    return &g_19;
}







static int func_36(unsigned char p_37, short ** p_38, const unsigned short p_39, short ** p_40, short p_41)
{
    int *l_697 = &g_675;
    char *l_701 = &g_691;
    unsigned short *l_707 = &g_122;
    unsigned short **l_706 = &l_707;
    for (g_93 = 9; (g_93 > 16); g_93 = safe_add_func_uint32_t_u_u(g_93, 2))
    {
        (*g_698) = l_697;
        (*l_697) &= p_39;
        if (p_39)
            continue;
    }
    if ((((((safe_add_func_uint8_t_u_u((**g_482), (*l_697))) != ((*l_701) = (*l_697))) , l_697) != l_697) & (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((void*)0 == l_706), 0xA4E3212AL)) > (g_93 = (safe_add_func_int8_t_s_s(g_140, (*l_697))))), 0))))
    {
        return p_39;
    }
    else
    {
        unsigned *l_712 = &g_713;
        unsigned char *l_714 = &g_227;
        unsigned char *l_715 = &g_716;
        int l_717 = 0x06E87625L;
        int **l_718 = &g_335;
        (*l_697) = (((g_140 != (((((((-1L) > func_62((((*l_715) |= (safe_mod_func_uint8_t_u_u((((*l_712) |= ((g_215 = g_336) && g_93)) , (func_62((*l_697)) >= (*g_183))), (g_102 & ((*l_714) = p_39))))) && 0UL))) != p_41) | l_717) <= l_717) == g_132) , 0x00494A7CL)) , g_336) , 0x2C736E72L);
        (*l_718) = &l_717;
    }
    return (*l_697);
}







static short ** func_46(unsigned short p_47, int * p_48)
{
    unsigned char l_693 = 0UL;
    for (g_122 = (-26); (g_122 > 52); ++g_122)
    {
        return &g_183;
    }
    for (g_304 = 0; (g_304 >= 12); ++g_304)
    {
        short l_682 = 0xBC58L;
        short **l_686 = &g_183;
        short ***l_685 = &l_686;
        int l_690 = (-4L);
        for (g_19 = 0; (g_19 != (-9)); g_19 = safe_sub_func_uint8_t_u_u(g_19, 8))
        {
            int l_689 = (-3L);
            char *l_692 = &g_93;
            (*p_48) ^= l_682;
            p_48 = func_55((safe_div_func_int32_t_s_s((((void*)0 == l_685) >= ((*l_692) = (1L > ((((safe_rshift_func_uint16_t_u_u(((l_689 , ((!l_682) <= l_689)) , l_682), l_682)) != (l_690 <= 1UL)) < g_691) & (**g_182))))), l_682)), (*p_48), p_47, l_693);
        }
    }
    return &g_183;
}







static unsigned short func_49(short ** p_50, int * p_51)
{
    unsigned l_339 = 0x69343E88L;
    int l_357 = (-1L);
    char *l_358 = (void*)0;
    int *l_420 = &g_4;
    unsigned short l_464 = 65526UL;
    unsigned char l_554 = 0x9FL;
    unsigned *l_566 = &g_215;
    unsigned **l_565 = &l_566;
    unsigned *l_587 = (void*)0;
    unsigned **l_586 = &l_587;
    const short **l_654 = &g_652;
    int l_668 = 1L;
    unsigned *l_670 = &g_359;
    int *l_671 = (void*)0;
    int *l_672 = (void*)0;
    int *l_673 = &g_501;
    if ((safe_rshift_func_int8_t_s_u(l_339, 0)))
    {
        short l_342 = 9L;
        int l_347 = 5L;
        unsigned char l_373 = 255UL;
        if (((safe_lshift_func_uint16_t_u_s(l_342, 3)) , (((0x4EA6L | (safe_lshift_func_int16_t_s_s(((**p_50) = l_339), 5))) | (l_342 < (&g_210 != &p_51))) >= (l_347 = l_339))))
        {
            int **l_348 = &g_335;
            int l_371 = 0x7371D450L;
            unsigned short l_394 = 0xD6D5L;
            short **l_407 = &g_183;
            (*l_348) = p_51;
            g_359 &= ((l_339 | (0x6B6FL >= (func_62((safe_add_func_uint8_t_u_u(0UL, ((0x7E7CL || (safe_lshift_func_int8_t_s_s((l_357 ^= ((safe_mod_func_uint32_t_u_u((**l_348), l_339)) , l_339)), ((((**l_348) != (!(((((+func_62(((void*)0 == &g_227))) == 0UL) , (**l_348)) < 0L) == g_132))) , (void*)0) != l_358)))) <= (**l_348))))) < 9UL))) && l_342);
            for (g_132 = (-6); (g_132 != 21); g_132 = safe_add_func_uint16_t_u_u(g_132, 1))
            {
                int l_368 = 0x7A46F4FCL;
                int l_372 = 0xBA297D26L;
                int *l_374 = &l_347;
                short l_385 = 0xCD47L;
                (*l_374) &= ((l_357 = ((func_62(((safe_div_func_uint16_t_u_u(l_342, (**l_348))) <= g_211)) , (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((l_368 & (l_372 = (safe_add_func_uint16_t_u_u(l_371, (**p_50))))) , l_368), ((func_62((l_357 ^ (-3L))) == l_368) && l_373))), (**l_348)))) > l_368)) > l_339);
                if ((*p_51))
                {
                    int ***l_387 = &l_348;
                    for (l_339 = 13; (l_339 != 50); ++l_339)
                    {
                        int *** const l_386 = &l_348;
                        unsigned short *l_390 = &g_122;
                        short *l_391 = (void*)0;
                        short *l_392 = &l_342;
                        int *l_393 = &l_371;
                        const unsigned char *l_400 = &g_227;
                    }
                    g_170 = &g_171;
                }
                else
                {
                    unsigned l_404 = 4UL;
                    unsigned short *l_408 = &l_394;
                    (*g_335) = (g_401 != (void*)0);
                    if ((*p_51))
                        break;
                    (*l_374) ^= (g_171 , ((*p_51) = ((g_215 <= ((((void*)0 != &p_51) , l_404) , l_357)) | (safe_add_func_uint16_t_u_u(((*l_408) = ((**l_348) , (p_50 == l_407))), g_19)))));
                }
            }
        }
        else
        {
            short l_411 = 0xBCB5L;
            unsigned l_418 = 4294967294UL;
            int l_419 = 0xF8E5B781L;
            (*g_210) = func_62((safe_rshift_func_uint8_t_u_u((l_373 == ((*g_335) = l_411)), (7UL > (l_357 < func_62(l_342))))));
            l_420 = func_55((func_62(l_339) , (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_339, l_347)), (safe_sub_func_uint16_t_u_u((((l_419 ^= ((func_62(((((g_227 = l_373) , &g_359) != (l_411 , func_55((l_347 && (l_418 & l_357)), (*p_51), l_347, g_215))) == 0x3731L)) , g_209) != (void*)0)) & 0xB513L) > 0L), (*g_183)))))), l_357, l_339, l_347);
            (*g_421) = (**g_401);
        }
    }
    else
    {
        const volatile int * volatile l_431 = &g_432;
        unsigned l_461 = 0x32405917L;
        const char l_487 = 0x08L;
        int * const *l_498 = &g_169;
        const unsigned char *l_551 = &g_227;
        unsigned **l_567 = &l_566;
        short l_581 = (-2L);
        unsigned **l_588 = &l_587;
        const short ***l_653 = (void*)0;
        unsigned char *l_656 = (void*)0;
        unsigned char **l_655 = &l_656;
        unsigned char *l_657 = &g_227;
        if ((*l_420))
        {
            unsigned l_424 = 0x2E6F0454L;
            unsigned char * const l_490 = (void*)0;
            unsigned char * const *l_489 = &l_490;
            unsigned char * const **l_488 = &l_489;
            const unsigned char l_557 = 255UL;
            short *l_558 = &g_140;
            int l_559 = 0xABD4FFCCL;
            int *l_564 = &g_501;
            if ((*l_420))
            {
                short l_438 = 1L;
                unsigned char l_447 = 0x16L;
                int * const l_500 = &g_501;
                int * const *l_499 = &l_500;
                short l_528 = 0x61FEL;
                unsigned char l_529 = 0UL;
                unsigned l_545 = 0x9CBDC005L;
                for (g_102 = 0; (g_102 == (-15)); g_102 = safe_sub_func_uint8_t_u_u(g_102, 6))
                {
                    int *l_433 = &g_336;
                    (*g_335) = ((*l_420) &= l_424);
                    for (l_357 = 22; (l_357 == 5); l_357 = safe_sub_func_int32_t_s_s(l_357, 7))
                    {
                        unsigned char * const l_429 = &g_227;
                        unsigned char * const *l_428 = &l_429;
                        unsigned char * const **l_427 = &l_428;
                        unsigned *l_430 = &g_215;
                        (*l_427) = (void*)0;
                        l_431 = (((*l_430) = 8UL) , (**g_401));
                        (*g_335) ^= (!func_62((*l_420)));
                        (*g_435) = l_433;
                    }
                    for (g_211 = 0; (g_211 < (-13)); --g_211)
                    {
                        return l_438;
                    }
                    if ((*p_51))
                        continue;
                }
                if ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((func_62((((safe_sub_func_int8_t_s_s(((((safe_mod_func_int8_t_s_s((l_447 , (safe_mod_func_uint16_t_u_u((l_424 < ((*l_420) < (g_171 , (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((**p_50) = (*g_183)), (safe_add_func_uint8_t_u_u(((((*l_420) || ((g_4 >= (((*g_335) = (safe_div_func_uint16_t_u_u(g_460, 0xEA14L))) <= 1UL)) == l_461)) ^ 0x16L) & 0x4EL), 7UL)))), 1)), g_399))))), g_93))), 3UL)) > (*l_420)) , (*g_335)) == l_438), 0x23L)) == 1UL) & 0xEE354DE9L)) , l_424), 0xDF7A9333L)), 7)))
                {
                    unsigned *l_465 = &l_461;
                    int **l_466 = &g_169;
                    int *l_467 = &g_4;
                    (*l_466) = (((*l_465) |= (safe_add_func_uint32_t_u_u(func_62(l_424), l_464))) , p_51);
                    l_420 = (*l_466);
                    (*l_420) = (((l_447 | g_399) , l_424) , ((*l_467) ^= (*g_169)));
                    (**l_466) = (*p_51);
                }
                else
                {
                    short l_468 = 0L;
                    int **l_469 = (void*)0;
                    int **l_470 = &g_335;
                    (*l_470) = (p_51 = func_55(g_101, (**g_435), l_438, l_468));
                }
                if (((safe_lshift_func_uint16_t_u_u((*l_420), 13)) ^ (((safe_lshift_func_int8_t_s_u(g_399, ((((safe_rshift_func_uint16_t_u_s(((*l_420) | l_424), (safe_rshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((-2L), (g_481 != (((safe_sub_func_int32_t_s_s((0x8195L > 0x1EAAL), l_487)) >= (*g_183)) , l_488)))), (*l_420))))) && 0x08L) != (**p_50)) , 0UL))) | (*g_183)) < g_460)))
                {
                    unsigned short l_493 = 0x49B6L;
                    (*g_335) ^= l_424;
                    (*g_335) = func_62(l_447);
                    (*g_494) = func_55((*l_420), l_424, (safe_add_func_int16_t_s_s(1L, l_447)), l_493);
                }
                else
                {
                    int ***l_495 = (void*)0;
                    int **l_497 = &g_335;
                    int ***l_496 = &l_497;
                    unsigned *l_523 = &g_215;
                    int l_530 = 0x564C0EFDL;
                    unsigned char *l_533 = (void*)0;
                    unsigned char *l_534 = &l_447;
                    unsigned *l_543 = &l_339;
                    unsigned short *l_544 = &g_132;
                    unsigned char l_546 = 1UL;
                    (*g_335) |= (((*l_496) = &g_335) != (l_499 = l_498));
                    for (g_211 = 0; (g_211 != (-1)); --g_211)
                    {
                        int ***l_508 = &l_497;
                        unsigned short *l_509 = &g_122;
                        unsigned char *l_510 = (void*)0;
                        unsigned char *l_511 = &g_227;
                        int **l_512 = &g_169;
                        unsigned *l_522 = &g_215;
                        unsigned **l_521 = &l_522;
                        l_357 ^= (safe_sub_func_int8_t_s_s(g_4, (*l_500)));
                        (***l_508) = (safe_sub_func_int8_t_s_s(1L, func_62((((*l_511) = ((func_62(((l_508 != &g_421) ^ (((l_424 ^ (g_227 > ((*l_509) &= func_62(g_4)))) != l_424) && ((void*)0 != &g_122)))) == 65527UL) < (*g_183))) > (*l_500)))));
                        (*l_512) = (*l_498);
                        l_530 |= ((l_424 , (safe_add_func_int16_t_s_s(((*g_183) = (((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(func_62((safe_add_func_uint32_t_u_u(((((***l_508) , ((*l_521) = p_51)) == l_523) ^ ((safe_lshift_func_uint8_t_u_s((+(((*p_51) , &p_51) != ((((*g_183) = (-7L)) ^ (safe_lshift_func_uint8_t_u_u((**g_482), (g_227 = (((*l_500) = l_528) , g_102))))) , (void*)0))), (**l_497))) < (**l_497))), (*l_420)))), g_211)), 4)) || 1L) >= 0xACA7L)), g_336))) <= l_529);
                    }
                    l_546 = (((*l_500) = ((g_171 , (safe_mul_func_uint32_t_u_u(g_211, (((*l_534) = l_424) == 4L)))) , (safe_div_func_uint8_t_u_u((((((((*l_420) &= (*g_210)) <= l_424) , ((*l_544) = (((safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((0x2795L <= (((safe_rshift_func_int16_t_s_u(func_62(((*l_543) &= (**l_497))), l_464)) && 0xD2L) , (*l_420))), 0x89C3807BL)) ^ g_359), 0x8D9610C3L)) <= 0x42L) & l_424))) | (**p_50)) , l_545) && 1UL), (-9L))))) , 0x73803E2EL);
                }
                (*l_420) = (*p_51);
            }
            else
            {
                (*l_420) &= (*l_431);
            }
            l_559 = func_62((safe_lshift_func_int16_t_s_s(((*l_558) ^= (safe_add_func_uint32_t_u_u(((g_399 , (**g_481)) != l_551), ((*l_420) & ((0xF9E45D07L != (safe_sub_func_int32_t_s_s((*p_51), (l_554 , (safe_sub_func_int16_t_s_s((**p_50), l_424)))))) != l_557))))), (*g_183))));
            if ((func_62(g_211) , ((+(g_4 | ((safe_rshift_func_int16_t_s_u(((**g_435) == (safe_lshift_func_uint16_t_u_s(((*g_183) & (((*l_564) = (*p_51)) , ((((l_567 = l_565) == (void*)0) >= ((*l_420) && 0x6CL)) | (*l_564)))), (**p_50)))), 10)) && (*l_420)))) & g_102)))
            {
                unsigned short *l_573 = &l_464;
                unsigned short **l_572 = &l_573;
                for (g_19 = (-15); (g_19 == (-8)); g_19 = safe_add_func_int32_t_s_s(g_19, 1))
                {
                    char l_576 = (-1L);
                    (**g_435) = (func_62(g_93) & (safe_sub_func_int16_t_s_s((*g_183), ((((void*)0 != l_572) > (~((**l_572) = ((safe_sub_func_uint8_t_u_u(l_576, (safe_div_func_int8_t_s_s(g_19, 1UL)))) != (safe_mod_func_int32_t_s_s(l_576, (*l_564))))))) != 2UL))));
                    (*g_335) = ((7L | func_62(l_581)) < (**p_50));
                }
                (*l_420) = ((*l_564) &= (*p_51));
                for (l_357 = 7; (l_357 == 23); l_357 = safe_add_func_uint16_t_u_u(l_357, 4))
                {
                    (*p_51) = (-6L);
                    return (*l_564);
                }
                for (g_304 = 0; (g_304 >= 13); g_304 = safe_add_func_int8_t_s_s(g_304, 6))
                {
                    unsigned l_589 = 0xE25AF0D0L;
                    g_434 = &p_51;
                    l_588 = l_586;
                    (**g_435) ^= 0x9DE80916L;
                    if (l_589)
                        break;
                }
            }
            else
            {
                short l_594 = 0xA693L;
                int *l_609 = &g_211;
                const volatile int * volatile *l_610 = (void*)0;
                (*l_609) |= ((safe_rshift_func_uint8_t_u_s((((*l_420) & (**g_182)) >= (safe_rshift_func_uint8_t_u_s(l_594, 3))), (safe_add_func_uint16_t_u_u(0x4F5FL, (+(l_487 , ((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((0UL && 0x73E4L), (safe_div_func_uint32_t_u_u((((((*g_183) != (safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((((safe_sub_func_uint16_t_u_u(l_487, l_461)) | (-8L)) , (*l_420)) && (*l_420)), 0x0D54C26DL)) ^ g_215), (*l_420)))) , (*l_564)) | 65535UL) | l_594), g_102)))), 15)) != l_594))))))) <= (*l_564));
                (*g_611) = (*g_421);
                p_51 = (l_420 = &l_357);
            }
        }
        else
        {
            unsigned l_637 = 0xE3313FFEL;
            for (g_215 = 7; (g_215 == 31); g_215++)
            {
                unsigned char l_618 = 0xBDL;
                for (g_101 = (-19); (g_101 < 35); g_101++)
                {
                    int *l_616 = &g_336;
                    unsigned short *l_621 = &g_122;
                    int *l_634 = (void*)0;
                    int *l_635 = (void*)0;
                    int *l_636 = &g_501;
                    unsigned short *l_638 = &l_464;
                    unsigned short *l_639 = &g_132;
                    short *l_640 = (void*)0;
                    short *l_641 = &l_581;
                    (*g_617) = l_616;
                    (*p_51) = (func_62((*l_420)) >= (l_618 , ((safe_rshift_func_int16_t_s_s((((*l_621) &= (**l_498)) > ((*l_641) = ((**p_50) = (safe_lshift_func_int8_t_s_u((**l_498), (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*l_639) = ((safe_sub_func_int8_t_s_s(((((*l_616) , ((*l_638) = (safe_mod_func_int32_t_s_s((+((*l_636) = (safe_lshift_func_uint16_t_u_s((*l_616), (*g_183))))), l_637)))) == l_637) < 0xC7FCL), 7UL)) | 0x0FL)) ^ 1L), 0x6A35EF47L)), l_637))))))), 3)) == 0x651FL)));
                }
            }
            for (g_140 = 3; (g_140 != (-2)); --g_140)
            {
                (*g_335) |= l_637;
            }
            return (*l_420);
        }
        (*g_335) = ((func_62(g_460) , (safe_rshift_func_int16_t_s_s((g_93 | (safe_unary_minus_func_uint32_t_u(((**l_567) = (safe_rshift_func_uint8_t_u_u(((*l_657) = (safe_mod_func_uint16_t_u_u((g_132 = ((((l_654 = g_651) == &g_652) | (((**g_481) != ((*l_655) = &g_227)) && (g_484 & ((*l_420) , g_215)))) <= 4294967289UL)), 0xE4D6L))), 5)))))), 8))) & g_101);
        for (g_102 = 0; (g_102 <= 0); g_102 = safe_add_func_uint8_t_u_u(g_102, 1))
        {
            int l_660 = 0xB7190C5EL;
            int **l_669 = &l_420;
            if ((*p_51))
                break;
            if (l_660)
                continue;
            (*p_51) = (*p_51);
            (*l_669) = func_55((safe_rshift_func_int8_t_s_s(g_19, 5)), (func_62(((***g_481) <= 1UL)) > g_102), g_140, (g_102 | (safe_unary_minus_func_int16_t_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(l_660, 14)), l_660)) != l_668)))));
        }
    }
    (*l_420) = func_62(((*l_670) ^= func_62((*l_420))));
    (*l_673) = (((*p_51) |= ((void*)0 == l_358)) , (*l_420));
    return (*l_673);
}







static short ** func_52(int p_53, int * p_54)
{
    short **l_61 = (void*)0;
    int l_70 = 5L;
    int l_75 = 5L;
    (*p_54) &= ((void*)0 != l_61);
    (*g_210) = func_62((((*p_54) , func_64(g_19, (safe_add_func_uint8_t_u_u(((l_70 , l_61) == l_61), (g_4 , (safe_sub_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_s(((&g_19 != &g_19) && 0x29D3EAFCL), l_75)) && 0xBCDFA818L) & (*p_54)) && g_4), g_19))))), (*p_54))) != g_183));
    return &g_183;
}







static int * func_55(unsigned p_56, int p_57, unsigned short p_58, char p_59)
{
    int *l_60 = &g_4;
    g_4 ^= (-1L);
    return l_60;
}







static int func_62(unsigned p_63)
{
    int *l_334 = &g_4;
    (*l_334) &= (*g_210);
    return (*l_334);
}







static const short * func_64(unsigned p_65, short p_66, const int p_67)
{
    int l_82 = 1L;
    int l_103 = 0x402D6FA8L;
    short *l_130 = &g_19;
    short **l_129 = &l_130;
    unsigned short *l_131 = &g_132;
    short *l_139 = &g_140;
    int *l_141 = &l_103;
    unsigned char l_266 = 255UL;
    for (p_65 = 0; (p_65 == 59); p_65 = safe_add_func_uint32_t_u_u(p_65, 9))
    {
        unsigned short l_87 = 7UL;
        char *l_92 = &g_93;
        unsigned *l_98 = (void*)0;
        unsigned *l_99 = (void*)0;
        unsigned *l_100 = &g_101;
        int *l_124 = (void*)0;
        if (((safe_mod_func_uint32_t_u_u(g_19, l_82)) >= ((safe_add_func_uint16_t_u_u((g_4 && p_66), (safe_div_func_uint32_t_u_u((l_87 == (g_4 || (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(((*l_92) = 0L), 0)) , (~(safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((((l_103 &= (g_102 ^= ((*l_100) = g_4))) , p_66) , p_67), g_93)) || 0x7CL), g_19)))) & p_65), g_19)))), p_66)))) == l_87)))
        {
            int *l_104 = &g_4;
            unsigned short *l_121 = &g_122;
            short *l_123 = &g_19;
            (*l_104) &= l_103;
            (*l_104) = (((safe_div_func_int8_t_s_s(p_67, (safe_lshift_func_uint16_t_u_s((g_4 <= ((*l_123) = (((+((((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(l_87, p_66)) , g_93), 6)) < p_65) | ((safe_div_func_uint32_t_u_u((0x9876L & (*l_104)), (safe_sub_func_uint16_t_u_u(((~((*l_121) ^= (safe_add_func_int32_t_s_s(l_87, p_65)))) <= (*l_104)), p_67)))) >= 0xD8E9L)) >= g_102)) || p_65) || 0x0783L))), 4)))) == g_102) == p_65);
            return &g_19;
        }
        else
        {
            l_124 = func_55(l_87, ((void*)0 == &g_93), g_19, l_103);
        }
    }
    if ((safe_add_func_uint32_t_u_u((g_122 == (((((*l_131) = ((l_103 || l_103) , (safe_rshift_func_int16_t_s_s((((g_19 || 1L) , l_129) != &l_130), 5)))) | (safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(p_66, ((safe_rshift_func_int16_t_s_u(((*l_139) &= ((g_101 < 0x7EL) < 0xCE3AL)), p_67)) && p_67))), g_93))) < 252UL) && p_66)), l_82)))
    {
        int *l_142 = &l_103;
        int l_151 = 7L;
        unsigned short **l_156 = &l_131;
        unsigned *l_157 = (void*)0;
        const short * const l_158 = &g_140;
        int *l_159 = (void*)0;
        int *l_160 = &l_82;
        short l_161 = 0L;
        char l_194 = 8L;
        unsigned char l_296 = 0x35L;
        l_142 = l_141;
        if ((((((*l_160) = (+((*l_142) != (((g_101 ^= (safe_lshift_func_int16_t_s_s(p_65, ((safe_div_func_uint32_t_u_u((&g_101 == (((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_151 || (g_122 ^ (safe_div_func_int16_t_s_s(g_19, (((((*l_156) = l_131) == l_139) <= ((4294967295UL | g_93) != (*l_141))) & p_65))))) >= 0xECB2B9DCL), p_67)), 5)) , 0x4D3EBC02L) , (void*)0)), g_132)) > (*l_142))))) , l_158) == &g_140)))) , l_161) , (*l_142)) && p_65))
        {
            int l_162 = 0L;
            int l_165 = 0x187DA113L;
            int **l_166 = (void*)0;
            int **l_167 = (void*)0;
            int **l_168 = &l_142;
            const int *l_172 = &g_4;
            g_169 = ((*l_168) = func_55(l_162, g_122, (safe_add_func_int8_t_s_s(g_93, ((*l_142) <= l_165))), g_19));
            l_172 = (g_170 = &g_4);
        }
        else
        {
            unsigned char l_173 = 0UL;
            int **l_179 = &g_169;
            l_173 = ((*l_142) = (!0x0CC2D368L));
            for (g_101 = 0; (g_101 < 16); g_101 = safe_add_func_uint32_t_u_u(g_101, 5))
            {
                int **l_176 = &l_142;
                int ***l_180 = (void*)0;
                int ***l_181 = &l_176;
                (*l_176) = &l_151;
                (**l_176) &= 8L;
                (*l_141) = (safe_sub_func_uint8_t_u_u((((**l_176) || (((*l_181) = l_179) != &g_169)) , 0x73L), p_66));
            }
            (*l_142) = ((g_182 != &g_183) < ((*g_183) | (p_67 && g_140)));
        }
        if ((g_132 != (*l_141)))
        {
            int l_190 = 0x7793343CL;
            unsigned *l_214 = &g_215;
            unsigned char *l_226 = &g_227;
            int l_249 = 0xB51E4AA3L;
            if ((*g_170))
            {
                int *l_192 = &l_151;
                short ***l_193 = &l_129;
                for (g_132 = (-19); (g_132 != 42); g_132 = safe_add_func_uint32_t_u_u(g_132, 6))
                {
                    int l_191 = 4L;
                    if (p_66)
                        break;
                    l_192 = func_55(g_4, (*g_170), (safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(248UL, 0)) && p_66), ((-1L) ^ ((((-1L) != (*l_141)) <= l_190) < l_191)))), (*l_142));
                    if ((*l_192))
                    {
                        if ((*g_170))
                            break;
                    }
                    else
                    {
                        (*l_141) ^= (*l_192);
                        (*l_142) = (0xC200A6F4L != p_66);
                        (*l_142) = p_67;
                    }
                }
                (*l_193) = (void*)0;
            }
            else
            {
                int l_200 = 1L;
                (*l_142) = p_67;
                if (l_194)
                {
                    unsigned l_195 = 4294967293UL;
                    (*l_141) |= ((l_195 ^ ((safe_rshift_func_uint8_t_u_u(255UL, (l_200 = (((void*)0 != &p_66) <= p_65)))) < 0UL)) , (g_101 != g_102));
                }
                else
                {
                    return &g_140;
                }
            }
            (*g_210) = (safe_div_func_int16_t_s_s(((*l_130) |= ((p_65 , ((*l_142) = (safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_int32_t_s_s(((-10L) && l_190), ((void*)0 == l_139))), (((g_101 , ((g_209 = (void*)0) != (((*l_142) ^ 1L) , (void*)0))) , p_67) & (*l_141)))), 0x6725L)))) | p_66)), 65535UL));
            if ((safe_add_func_uint32_t_u_u((((*l_141) , p_65) & ((*l_214) = g_19)), ((safe_add_func_int32_t_s_s(5L, (((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((*l_226) = ((safe_lshift_func_int8_t_s_s(p_67, 0)) , (safe_sub_func_uint16_t_u_u(p_66, (*l_141))))), 5)), (*g_170))) < p_65) , (-1L)) , (*l_142)) >= 0xF38FL))) > l_190))))
            {
                short **l_244 = &g_183;
                short **l_245 = &l_130;
                if (((((safe_div_func_int16_t_s_s((0x2F40L && (*l_142)), (**g_182))) <= p_67) , l_190) >= (0xC0D0L >= (l_190 == ((((*l_214) = (4294967295UL <= ((void*)0 != l_141))) , (*g_183)) && 0x8A77L)))))
                {
                    char *l_232 = &l_194;
                    int l_233 = 0xDC2BF5E7L;
                    (*l_141) ^= (*g_210);
                    (*l_141) ^= (((void*)0 == &g_183) , (0L != ((*l_232) = (safe_sub_func_uint8_t_u_u(g_215, g_215)))));
                    (*l_141) &= l_233;
                }
                else
                {
                    const short *l_236 = (void*)0;
                    int l_243 = 0xD814C8B0L;
                    short ***l_246 = &l_129;
                    int **l_247 = &l_141;
                    unsigned *l_248 = &g_101;
                    unsigned short *l_252 = &g_122;
                    for (l_103 = (-1); (l_103 != 3); l_103 = safe_add_func_uint8_t_u_u(l_103, 5))
                    {
                        return l_236;
                    }
                    (*l_247) = func_55((safe_mod_func_int16_t_s_s(0xC4E6L, (safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((*l_141) = ((g_211 && 0L) ^ l_243)), (*g_170))), ((l_244 = l_244) == ((*l_246) = l_245)))))), p_65, p_66, g_102);
                    (*l_247) = func_55((l_249 = ((*l_248) = g_132)), ((((*l_252) = p_67) == (0xB3L <= (*l_141))) , p_65), p_66, p_67);
                    g_170 = &p_67;
                }
            }
            else
            {
                int **l_253 = &g_169;
                (*l_253) = &g_4;
            }
            for (g_211 = 0; (g_211 < 5); ++g_211)
            {
                unsigned **l_256 = (void*)0;
                unsigned **l_257 = &l_214;
                int l_295 = 0x4E4B54E1L;
                const short *l_324 = &g_140;
                if (((p_65 & p_67) > (((*l_257) = (void*)0) == &p_65)))
                {
                    char l_264 = (-1L);
                    if (p_66)
                        break;
                    for (p_66 = 13; (p_66 != (-21)); --p_66)
                    {
                        char l_265 = 0L;
                        char *l_269 = &l_194;
                        char *l_270 = &l_265;
                        int l_271 = 8L;
                        int l_278 = 0L;
                        g_170 = func_55((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((l_264 , ((g_102 , l_265) != (g_122 = p_66))), (g_4 , ((l_265 & g_19) < ((*l_141) , 1L))))), 6)), (*l_141), p_65, l_266);
                        (*l_141) = (safe_add_func_uint16_t_u_u((((((((((l_271 = ((*l_270) |= ((*l_269) &= g_215))) | (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(l_278, p_67)) ^ (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s((l_295 = ((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0x7610C2F0L, l_249)) , (safe_mod_func_int32_t_s_s(0x7D40A0E3L, g_93))), (**g_182))) , (l_278 != 0L))), p_66)), p_66)), g_211)), l_278)), 1))), 3)), (*l_142)))) , p_66) < l_296) | l_264) , (-8L)) ^ l_264) | 0x49L) , 0xF6DCL), (*l_141)));
                    }
                }
                else
                {
                    unsigned short l_299 = 0UL;
                    int l_307 = 7L;
                    unsigned char l_320 = 6UL;
                    int l_321 = 0x161C1AEBL;
                    const int **l_323 = &g_170;
                    for (l_151 = (-30); (l_151 != (-24)); l_151++)
                    {
                        char l_318 = (-7L);
                        char *l_319 = &l_194;
                        unsigned short *l_322 = &g_122;
                        l_299 = l_295;
                        (*l_141) = (p_65 != (((safe_div_func_uint8_t_u_u(((*l_226) = ((l_299 || g_19) > (~((safe_rshift_func_int8_t_s_u((g_304 <= (l_299 > (safe_sub_func_int16_t_s_s(((l_307 = 0x4E35L) ^ (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((*l_322) = (safe_sub_func_uint8_t_u_u(p_67, (((safe_lshift_func_uint16_t_u_s(((l_321 = (safe_div_func_uint16_t_u_u(((((*l_319) = l_318) , (((((**l_156) = g_122) >= (*g_183)) <= l_320) || 0L)) != 6L), 0x4732L))) , p_67), (*l_142))) <= l_320) || l_320)))), 1UL)), p_67)) <= p_65) > p_65)), l_295)))), p_67)) > p_66)))), g_215)) & 0x29L) | (**g_182)));
                    }
                    (*l_323) = &p_67;
                }
                return l_324;
            }
        }
        else
        {
            (*g_210) ^= (p_66 && (*l_141));
        }
    }
    else
    {
        int l_327 = 0xD1D02CFCL;
        int l_330 = 0x690D1609L;
        for (g_19 = 0; (g_19 <= 2); g_19 = safe_add_func_uint8_t_u_u(g_19, 5))
        {
            unsigned l_328 = 4294967295UL;
            char *l_329 = (void*)0;
            l_327 = (((*g_170) ^ g_211) ^ ((((((*l_141) = ((&g_227 != ((*l_141) , (p_67 , &g_227))) != (l_327 ^ l_328))) < 0xC0L) , 0xFA94B1C1L) & (*g_170)) , 0x0108L));
            (*l_141) |= (l_327 , ((*g_210) = p_65));
        }
        if ((l_330 = (l_327 >= (*g_210))))
        {
            short * const *l_331 = &l_130;
            short * const **l_332 = &l_331;
            (*l_332) = l_331;
            (*l_141) ^= (*g_210);
        }
        else
        {
            int **l_333 = &g_169;
            (*g_210) ^= ((*l_141) = (253UL <= (((*l_333) = (void*)0) == &g_171)));
        }
    }
    (*l_141) = (*l_141);
    return &g_19;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    transparent_crc(g_1110, "g_1110", print_hash_value);
    transparent_crc(g_1252, "g_1252", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1381, "g_1381", print_hash_value);
    transparent_crc(g_1495, "g_1495", print_hash_value);
    transparent_crc(g_1504, "g_1504", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
