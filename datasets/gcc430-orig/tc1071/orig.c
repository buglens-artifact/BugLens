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



static unsigned char g_3 = 0x33L;
static short g_12 = 0x39ECL;
static short g_23 = 0xC8DDL;
static short *g_22 = &g_23;
static unsigned short g_31 = 0x5604L;
static int g_39 = 0x5C59C3F9L;
static unsigned short g_42 = 0UL;
static int g_81 = 0x6EDB5B29L;
static unsigned g_91 = 0xD1A38AD7L;
static char g_95 = 8L;
static unsigned g_97 = 0UL;
static unsigned char g_107 = 0x77L;
static int g_124 = (-6L);
static unsigned g_156 = 0x7A0C98A9L;
static char g_161 = 0xB6L;
static unsigned g_162 = 0UL;
static short *g_182 = &g_23;
static short g_253 = 0xB719L;
static unsigned g_316 = 4294967295UL;
static int g_349 = 1L;
static int *g_348 = &g_349;
static unsigned g_425 = 0xAF8C3CEAL;
static unsigned char *g_433 = &g_107;
static unsigned char **g_432 = &g_433;
static unsigned g_534 = 0UL;
static unsigned g_567 = 0UL;
static unsigned char g_617 = 0x2DL;
static unsigned char g_649 = 0UL;
static int g_694 = 0L;
static int *g_693 = &g_694;
static unsigned char g_707 = 0x4BL;
static int g_740 = 0L;
static char g_741 = 6L;
static unsigned g_764 = 0x0AD92E2EL;
static int g_806 = 0L;
static char g_811 = 0x9DL;
static int g_812 = (-1L);
static unsigned char g_831 = 0xCEL;
static unsigned g_908 = 0xCE30A9C5L;
static unsigned char ***g_976 = &g_432;
static unsigned char ****g_975 = &g_976;
static unsigned g_1119 = 4294967292UL;
static unsigned char g_1186 = 9UL;
static unsigned short g_1317 = 6UL;
static char g_1405 = 0L;
static int *g_1427 = &g_39;
static int g_1430 = 8L;
static unsigned g_1431 = 4294967295UL;
static short *g_1458 = &g_23;



static unsigned func_1(void);
static short func_4(short p_5, int p_6, short p_7, unsigned short p_8);
static short func_13(unsigned short p_14, int p_15, short * p_16);
static unsigned func_25(unsigned short p_26, unsigned short p_27, unsigned p_28, unsigned p_29);
static short func_48(unsigned short * p_49, short * p_50);
static short * func_51(int * p_52, unsigned char p_53);
static int * func_56(int p_57, unsigned p_58, int * p_59, unsigned short * p_60, short p_61);
static char func_64(int * p_65, char p_66);
static unsigned short func_73(int * p_74, int * p_75, int p_76);
static int * func_77(int * p_78, unsigned p_79);
static unsigned func_1(void)
{
    unsigned short l_2 = 0UL;
    short *l_11 = &g_12;
    char l_17 = 0x45L;
    int *l_1438 = &g_806;
    short **l_1440 = &g_22;
    short ***l_1439 = &l_1440;
    unsigned short *l_1441 = &g_31;
    int *l_1442 = &g_812;
    unsigned l_1461 = 5UL;
    (*l_1438) = ((l_2 && ((g_3 < (((((+0x2086L) ^ func_4((((safe_rshift_func_uint16_t_u_u(((((*l_11) = g_3) < func_13(g_3, l_17, ((!(safe_rshift_func_uint16_t_u_s(65527UL, ((safe_rshift_func_int8_t_s_s(g_3, 6)) <= l_17)))) , g_22))) <= l_17), g_3)) > (*g_22)) && g_12), l_2, l_17, g_3)) || 0UL) , g_534) != l_2)) , 1UL)) || 0L);
    if (g_707)
        goto lbl_1443;
lbl_1443:
    (*l_1442) |= ((((*l_1441) = (((*l_1439) = &g_182) != &g_182)) , (*l_1438)) && (*l_1438));
    (*l_1442) = ((safe_sub_func_uint32_t_u_u(((((*l_1442) >= ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_1441) |= g_156) && (l_1442 == (void*)0)), 4)), (safe_sub_func_uint8_t_u_u((*l_1442), func_48(&g_1317, g_1458))))) < (safe_rshift_func_uint16_t_u_u((g_567 && (*l_1442)), g_95))) <= g_3) <= (*l_1438)), (*g_1458))), 0x45L)) || (*l_1438)), 4)) , g_162)) || (*l_1442)) && 0xCDL), l_1461)) ^ 1L);
    (*l_1442) &= (-1L);
    return g_740;
}







static short func_4(short p_5, int p_6, short p_7, unsigned short p_8)
{
    unsigned l_24 = 0x34A938F7L;
    unsigned short *l_30 = &g_31;
    int *l_38 = &g_39;
    int l_40 = 0xFBC6A687L;
    int *l_41 = &l_40;
    int l_1432 = 0x3741F08FL;
    unsigned l_1435 = 0xB2D66EC2L;
    if ((l_24 && func_25((--(*l_30)), ((safe_sub_func_uint8_t_u_u((p_6 > ((safe_lshift_func_int8_t_s_u(((((4294967294UL && (((*l_38) ^= l_24) , (l_40 &= l_24))) , (((g_42 &= ((*l_41) = 1L)) && ((safe_unary_minus_func_int16_t_s(((*g_22) = (g_12 && ((void*)0 == &g_42))))) <= p_5)) , &p_8)) == l_30) <= p_8), 4)) , (-9L))), 0UL)) , 0xCE2EL), g_3, g_12)))
    {
        return (*g_182);
    }
    else
    {
        int *l_1433 = &g_812;
        int *l_1434 = (void*)0;
        --l_1435;
    }
    return (*g_182);
}







static short func_13(unsigned short p_14, int p_15, short * p_16)
{
    return (*g_22);
}







static unsigned func_25(unsigned short p_26, unsigned short p_27, unsigned p_28, unsigned p_29)
{
    int *l_80 = &g_81;
    int *l_347 = &g_39;
    int **l_346 = &l_347;
    short *l_351 = &g_253;
    g_1430 &= (safe_add_func_int16_t_s_s((*g_22), func_48(&g_31, func_51(((safe_sub_func_int8_t_s_s(0x1AL, ((&g_39 == ((*l_346) = func_56((safe_sub_func_int8_t_s_s(func_64(&g_39, func_13(func_13((p_28 && ((((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s(func_13(func_73(((*l_346) = func_77(l_80, g_31)), g_348, p_26), g_161, l_351), g_161)) & g_161), p_27)) < p_28) & p_29) != 0xC4L)), g_161, l_351), g_3, l_351)), 0UL)), p_27, &g_349, g_22, p_27))) ^ g_3))) , (void*)0), p_26))));
    return g_1431;
}







static short func_48(unsigned short * p_49, short * p_50)
{
    return (*g_182);
}







static short * func_51(int * p_52, unsigned char p_53)
{
    int l_1062 = 0x3977CD6DL;
    short l_1065 = (-5L);
    unsigned *l_1070 = &g_91;
    int l_1071 = 0x1DEB6DD3L;
    int l_1072 = 0L;
    short l_1073 = 0x69DDL;
    unsigned char *l_1078 = &g_617;
    int l_1113 = (-6L);
    unsigned l_1189 = 0x5C32B37EL;
    unsigned l_1228 = 1UL;
    short **l_1416 = &g_182;
    unsigned short *l_1419 = &g_1317;
    if ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((p_53 ^ 1UL), (l_1062 , (safe_rshift_func_uint8_t_u_u((*g_433), 7))))) >= (((l_1071 = ((((*l_1070) = ((((*g_22) >= l_1065) , func_13((safe_mod_func_int8_t_s_s(((void*)0 != &g_348), (safe_lshift_func_uint8_t_u_s(p_53, l_1062)))), l_1065, &g_253)) <= 0xB6L)) != 0x3D631A7EL) , p_53)) | g_3) <= p_53)), l_1072)), l_1073)))
    {
        int l_1077 = 0xBDEFC645L;
        int l_1079 = 0x1C9E42BAL;
        short *l_1080 = &l_1065;
        unsigned l_1090 = 4294967286UL;
        int l_1116 = 0x79923B0AL;
        int l_1229 = 0L;
        int l_1296 = (-1L);
        unsigned char l_1402 = 0x73L;
        for (g_831 = 8; (g_831 != 59); ++g_831)
        {
            short *l_1076 = &g_253;
            return l_1076;
        }
        if (l_1077)
        {
            unsigned l_1086 = 4294967291UL;
            int *l_1087 = &g_81;
            int l_1107 = 1L;
            int l_1117 = 0x130B0FC9L;
            l_1079 = (((*g_22) >= (((**g_976) = &p_53) != (l_1078 = &p_53))) , 1L);
        }
        else
        {
            int *l_1191 = &g_806;
            short *l_1195 = &l_1073;
            int l_1273 = 0x074A92E5L;
            int l_1279 = 0L;
            int l_1332 = 0xB9664ED7L;
            int *l_1350 = &l_1072;
            char *l_1353 = &g_95;
            int **l_1422 = &g_348;
            int **l_1423 = (void*)0;
            int **l_1424 = &l_1191;
            if (((*l_1191) = l_1079))
            {
                int **l_1192 = &g_348;
                unsigned short *l_1193 = &g_42;
                int *l_1194 = &l_1113;
                (*l_1192) = &l_1116;
                (*l_1192) = p_52;
                (*l_1194) |= (*l_1191);
                if ((*l_1194))
                {
                    (*l_1191) = g_31;
                    return &g_12;
                }
                else
                {
                    unsigned l_1196 = 0xA72C5CEEL;
                    unsigned **l_1200 = &l_1070;
                    unsigned ***l_1199 = &l_1200;
                    if ((l_1090 & l_1196))
                    {
                        int **l_1203 = (void*)0;
                        int **l_1204 = (void*)0;
                        int **l_1205 = &g_693;
                        int l_1210 = 0xDDA4E156L;
                        (*l_1194) = (((safe_sub_func_uint32_t_u_u(((*g_22) >= ((((void*)0 == l_1199) & (+(((1L & ((safe_rshift_func_int8_t_s_u((p_53 && (func_73(((*l_1205) = (void*)0), ((safe_mod_func_uint16_t_u_u(func_64(&g_740, (0x1A96C368L || (((safe_lshift_func_uint8_t_u_u((((*l_1191) |= ((!(p_53 != p_53)) ^ (*l_1194))) >= g_162), p_53)) <= p_53) >= 0UL))), (*g_182))) , p_52), g_81) , 252UL)), l_1065)) == l_1062)) <= p_53) || l_1210))) < 0x7F00L)), l_1210)) != l_1079) != l_1210);
                        return &g_12;
                    }
                    else
                    {
                        int **l_1211 = &g_693;
                        (*l_1194) = func_64(((*l_1211) = &g_694), g_81);
                        (*l_1191) = func_73(p_52, p_52, (p_53 & ((*l_1080) = (*g_182))));
                    }
                }
            }
            else
            {
                int **l_1212 = (void*)0;
                int l_1247 = 0xF780DDFEL;
                int l_1287 = 0x2825BAC3L;
                int l_1306 = 0L;
                unsigned short l_1415 = 5UL;
                short *l_1421 = &g_253;
                (*l_1191) |= g_31;
                if ((func_64((g_693 = &g_740), ((func_73(&g_124, func_77(func_77((((!(((****g_975) ^ (0x75L < 255UL)) , l_1090)) & p_53) , func_77(&g_812, (((*g_22) != p_53) == l_1077))), (*l_1191)), g_23), g_1186) > 0x6FL) && 0x4C57L)) , 0x77C7FFA9L))
                {
                    unsigned l_1218 = 4294967295UL;
                    unsigned short *l_1227 = &g_42;
                    int l_1311 = 0L;
                    for (p_53 = 0; (p_53 == 53); p_53 = safe_add_func_int8_t_s_s(p_53, 1))
                    {
                        int **l_1215 = &g_348;
                        (*l_1215) = &g_812;
                        if (l_1090)
                            continue;
                        (*g_348) = (safe_sub_func_uint32_t_u_u(((l_1218 != g_107) , func_13((((*g_348) = l_1065) , (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((l_1116 , ((((void*)0 == &g_39) & (safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int8_t_s_u((**l_1215), 6)) && g_42) < (l_1227 != (void*)0)) == l_1228), 2))) >= (*g_348))), (*g_433))) > p_53), (**l_1215)))), (*g_693), &l_1065)), l_1090));
                        if (l_1229)
                            break;
                    }
                    if (l_1228)
                        goto lbl_1320;
lbl_1320:
                    for (g_741 = 0; (g_741 <= 19); ++g_741)
                    {
                        int *l_1232 = &l_1071;
                        int *l_1233 = (void*)0;
                        int *l_1234 = &l_1113;
                        int *l_1235 = &g_812;
                        int *l_1236 = &l_1113;
                        int *l_1237 = &l_1116;
                        int *l_1238 = &l_1062;
                        int *l_1239 = (void*)0;
                        int *l_1240 = &l_1113;
                        int *l_1241 = &l_1116;
                        int *l_1242 = &g_349;
                        int *l_1243 = (void*)0;
                        int *l_1244 = &l_1062;
                        int *l_1245 = &l_1113;
                        int *l_1246 = &g_812;
                        int *l_1248 = &g_81;
                        int *l_1249 = &l_1079;
                        int *l_1250 = &g_812;
                        int *l_1251 = &l_1062;
                        int *l_1252 = &g_812;
                        int *l_1253 = &l_1116;
                        int *l_1254 = &g_349;
                        int *l_1255 = &g_81;
                        int *l_1256 = &l_1071;
                        int *l_1257 = (void*)0;
                        int *l_1258 = &l_1079;
                        int *l_1259 = &l_1079;
                        int *l_1260 = &l_1113;
                        int *l_1261 = &g_806;
                        int *l_1262 = &g_81;
                        int *l_1263 = &g_812;
                        int *l_1264 = &l_1113;
                        int *l_1265 = &g_806;
                        int *l_1266 = &l_1116;
                        int *l_1267 = &l_1079;
                        int *l_1268 = &l_1071;
                        int *l_1269 = (void*)0;
                        int *l_1270 = &g_806;
                        int *l_1271 = &l_1116;
                        int *l_1272 = &l_1116;
                        int *l_1274 = &g_812;
                        int l_1275 = 0x8CAA6939L;
                        int *l_1276 = &l_1062;
                        int *l_1277 = &l_1071;
                        int *l_1278 = &l_1079;
                        int *l_1280 = &l_1273;
                        int *l_1281 = &g_81;
                        int *l_1282 = &l_1062;
                        int *l_1283 = &g_349;
                        int *l_1284 = &l_1116;
                        int *l_1285 = &l_1275;
                        int *l_1286 = (void*)0;
                        int *l_1288 = &l_1071;
                        int *l_1289 = &l_1116;
                        int *l_1290 = &l_1247;
                        int *l_1291 = &l_1247;
                        int *l_1292 = &l_1071;
                        int *l_1293 = &l_1079;
                        int *l_1294 = &l_1275;
                        int *l_1295 = &l_1113;
                        int *l_1297 = &l_1079;
                        int *l_1298 = &g_349;
                        int *l_1299 = &l_1287;
                        int *l_1300 = &l_1079;
                        int *l_1301 = &l_1279;
                        int *l_1302 = &g_806;
                        int *l_1303 = &l_1273;
                        int *l_1304 = &l_1113;
                        int *l_1305 = (void*)0;
                        int *l_1307 = &l_1287;
                        int *l_1308 = &l_1113;
                        int *l_1309 = &g_81;
                        int *l_1310 = &l_1062;
                        int *l_1312 = &l_1279;
                        int *l_1313 = &l_1279;
                        int *l_1314 = &g_81;
                        int *l_1315 = &l_1279;
                        int *l_1316 = &l_1062;
                        ++g_1317;
                    }
                    for (l_1228 = 22; (l_1228 <= 26); ++l_1228)
                    {
                        short **l_1329 = (void*)0;
                        short **l_1330 = &l_1195;
                        int l_1331 = 0x89AA39D5L;
                        unsigned short *l_1333 = &g_1317;
                        int **l_1334 = (void*)0;
                        int **l_1335 = &l_1191;
                        char *l_1336 = &g_811;
                        (*l_1335) = &l_1331;
                        if (l_1229)
                            continue;
                        (**l_1335) ^= (l_1287 < ((*l_1336) = p_53));
                    }
                }
                else
                {
                    unsigned *l_1337 = (void*)0;
                    unsigned *l_1338 = &g_162;
                    int l_1349 = (-1L);
                    int l_1388 = 0xF6CC1F9BL;
                    if (((func_13((l_1306 <= (((!(((--(*l_1338)) , (*g_348)) || ((((***g_976) | ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((0x10L > (p_53 , l_1306)) , (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(2L, (((*g_348) = (*g_348)) > l_1062))), 4L))) < 0x114CL), p_53)), 14)) <= (-1L))) , (-5L)) ^ 0x8374L))) != l_1349) & p_53)), (*l_1191), l_1080) , (void*)0) != l_1195))
                    {
                        char **l_1354 = &l_1353;
                        int *l_1355 = (void*)0;
                        int *l_1356 = &g_694;
                        int *l_1357 = &l_1079;
                        int *l_1358 = &l_1113;
                        int *l_1359 = (void*)0;
                        int *l_1360 = &l_1287;
                        int *l_1361 = &l_1279;
                        int *l_1362 = (void*)0;
                        int *l_1363 = &l_1113;
                        int *l_1364 = &l_1332;
                        int *l_1365 = (void*)0;
                        int *l_1366 = &l_1071;
                        int *l_1367 = &l_1332;
                        int *l_1368 = &l_1062;
                        int *l_1369 = &l_1079;
                        int *l_1370 = (void*)0;
                        int *l_1371 = (void*)0;
                        int *l_1372 = (void*)0;
                        int *l_1373 = &l_1332;
                        int *l_1374 = &g_812;
                        int *l_1375 = &l_1247;
                        int *l_1376 = &l_1273;
                        int *l_1377 = &l_1279;
                        int *l_1378 = (void*)0;
                        int *l_1379 = (void*)0;
                        int *l_1380 = &l_1071;
                        int *l_1381 = &g_806;
                        int *l_1382 = &g_812;
                        int *l_1383 = (void*)0;
                        int *l_1384 = &l_1113;
                        int l_1385 = 0x0571C9F6L;
                        int *l_1386 = &l_1273;
                        int *l_1387 = &l_1279;
                        int *l_1389 = &l_1079;
                        int *l_1390 = &l_1079;
                        int *l_1391 = &l_1332;
                        int *l_1392 = &l_1279;
                        int *l_1393 = &g_806;
                        int *l_1394 = &l_1071;
                        int *l_1395 = &l_1279;
                        int *l_1396 = &l_1071;
                        int *l_1397 = &l_1332;
                        int *l_1398 = &l_1247;
                        int *l_1399 = (void*)0;
                        int *l_1400 = &l_1273;
                        int *l_1401 = &l_1279;
                        short *l_1414 = &g_253;
                        l_1247 = (((((*l_1356) &= ((func_64(l_1350, l_1349) <= ((((safe_sub_func_uint32_t_u_u(g_740, l_1071)) , 0xA1B9L) && (*l_1191)) < (*g_22))) , (((*l_1354) = l_1353) == (void*)0))) , (*g_348)) >= l_1349) != (***g_976));
                        ++l_1402;
                        (*l_1367) = (g_1405 , (*g_348));
                        (*l_1377) = ((((safe_rshift_func_uint8_t_u_u(p_53, (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((~((safe_mod_func_int32_t_s_s(((*l_1389) = (*g_348)), (*l_1191))) & 1UL)), ((func_13((((*l_1195) = 0x1971L) , g_23), (l_1062 |= (*g_693)), l_1414) , (-5L)) , 0x1DBE59CDL))), p_53)))) | p_53) != (*l_1373)) < 0x2BA4BB1FL);
                    }
                    else
                    {
                        short ***l_1417 = (void*)0;
                        short **l_1418 = &l_1080;
                        int **l_1420 = &l_1191;
                        (*l_1191) &= ((l_1415 == 250UL) | 0x1B4CC1E6L);
                        (*l_1420) = &g_81;
                        return l_1421;
                    }
                }
            }
            (*l_1422) = &g_81;
            (*l_1424) = ((*l_1422) = &g_349);
            for (g_97 = (-4); (g_97 == 11); g_97 = safe_add_func_uint32_t_u_u(g_97, 1))
            {
                l_1296 ^= func_64(&g_124, ((func_64(g_1427, ((safe_lshift_func_uint8_t_u_u((*g_433), (p_53 != (((*l_1419) &= ((*g_1427) , func_64(l_1350, (g_831 , (func_73(p_52, (*l_1424), (*g_348)) >= l_1229))))) == 0x777AL)))) & (*g_433))) != 0xC8DAL) , (-9L)));
            }
        }
    }
    else
    {
        return &g_253;
    }
    return (*l_1416);
}







static int * func_56(int p_57, unsigned p_58, int * p_59, unsigned short * p_60, short p_61)
{
    int *l_368 = &g_349;
    unsigned short l_375 = 0UL;
    int **l_376 = &l_368;
    int *l_377 = &g_349;
    char *l_380 = (void*)0;
    short *l_381 = &g_12;
    int *l_385 = &g_39;
    int **l_384 = &l_385;
    short *l_386 = &g_12;
    unsigned char ***l_446 = &g_432;
    int l_477 = 0xFC6AC2D5L;
    int l_486 = 0L;
    int l_533 = 0x21B9E9F5L;
    unsigned *l_970 = &g_91;
    unsigned **l_969 = &l_970;
    int l_1033 = 0x03B4629FL;
    (*l_376) = func_77(l_368, (((*l_368) & ((safe_rshift_func_uint16_t_u_u((((((*l_368) == (((*l_368) | ((*l_368) & (safe_mod_func_uint32_t_u_u(g_91, (safe_add_func_uint32_t_u_u((p_58 = (&p_57 == (void*)0)), func_13((*l_368), (*l_368), &g_23))))))) ^ (*g_348))) && 3L) && (*l_368)) , l_375), g_95)) , (*l_368))) ^ 0x6F28L));
lbl_1055:
    (*l_376) = l_377;
    if ((safe_lshift_func_uint8_t_u_u(0x9FL, (0x28L >= (((((*l_381) = (g_349 | (l_380 == &g_161))) , (((**l_376) && (safe_lshift_func_uint8_t_u_u((l_384 == &l_385), 1))) , (void*)0)) == p_59) & (*g_348))))))
    {
        unsigned l_387 = 3UL;
        unsigned char *l_388 = &g_107;
        unsigned short *l_391 = (void*)0;
        unsigned short *l_392 = &l_375;
        short *l_399 = &g_253;
        unsigned char l_402 = 1UL;
        char l_419 = 0x80L;
        unsigned l_421 = 0x636BFD2BL;
        int l_422 = 0x0B34B949L;
        int l_548 = 0x83E08D40L;
        int l_689 = 1L;
        int l_946 = 0xDC32D48CL;
        unsigned l_966 = 4294967295UL;
        (*g_348) |= (248UL && (func_13((*l_377), g_91, l_386) , l_387));
lbl_430:
        (*l_377) = (g_156 >= ((*l_388)--));
        if (((((*l_392) = g_156) == 0xCB86L) & (1L != func_13(((((*l_377) <= (safe_mod_func_uint16_t_u_u((((*p_59) == (*l_368)) && (safe_lshift_func_uint8_t_u_s(((*l_388) = ((safe_sub_func_uint8_t_u_u((((*l_399) = ((*l_386) = p_58)) > (safe_rshift_func_int16_t_s_s(0x4966L, 13))), l_402)) , 253UL)), 4))), (*g_22)))) , (-1L)) >= p_58), p_57, &g_23))))
        {
            unsigned char l_420 = 0xA9L;
            int l_453 = 0x7078D9BAL;
            int l_507 = 0xF015E474L;
            int *l_690 = &g_39;
            int l_758 = 0xAC47CD2BL;
            char *l_775 = &g_95;
            unsigned ***l_971 = &l_969;
            if ((safe_mod_func_int32_t_s_s(func_13(((p_58 ^ (safe_sub_func_uint32_t_u_u(g_42, (*p_59)))) , (((func_73((*l_384), func_77(&g_81, (p_61 > (safe_lshift_func_int8_t_s_s(func_64(p_59, (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(0x7D234CDEL, ((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((((safe_lshift_func_int16_t_s_s((l_387 ^ g_95), 4)) > l_387) < g_12) && g_31), 0x58L)) <= g_97), l_419)) , (*p_59)))), 0xB069L))), l_420)))), l_421) == g_161) < (*p_60)) && l_402)), p_58, l_381), l_422)))
            {
                int *l_431 = &g_124;
                unsigned char ***l_434 = (void*)0;
                unsigned char ***l_435 = &g_432;
                int l_449 = 0xB3147C1FL;
                (**l_376) ^= 0xA674EA79L;
                for (g_95 = 0; (g_95 != 16); g_95++)
                {
                    (*l_377) = 2L;
                    g_425++;
                    for (p_61 = 26; (p_61 < (-21)); --p_61)
                    {
                        if (g_23)
                            goto lbl_430;
                        (*g_348) &= (l_431 == p_59);
                    }
                    if ((*g_348))
                        continue;
                }
                (*l_435) = g_432;
                for (p_58 = 14; (p_58 > 31); ++p_58)
                {
                    int *l_438 = &g_39;
                    int l_439 = 0x090F2FBFL;
                    if (((*g_433) <= 0xC4L))
                    {
                        unsigned l_440 = 0x7194E90CL;
                        l_439 = (func_73(l_438, &g_349, (*p_59)) != (*g_182));
                        if (l_440)
                            continue;
                        return &g_39;
                    }
                    else
                    {
                        unsigned *l_443 = &g_316;
                        char *l_450 = &g_95;
                        char *l_451 = (void*)0;
                        char *l_452 = &l_419;
                        l_453 &= ((&g_39 != &g_124) , (safe_sub_func_int32_t_s_s((((*l_443)--) , ((&g_432 != l_446) != ((l_420 , (((*p_59) | (((p_61 || (safe_mod_func_int8_t_s_s(((*l_452) = ((*l_450) |= (+(((l_449 >= ((l_422 |= l_420) , p_61)) == (*p_59)) != (*g_433))))), (**g_432)))) <= l_439) || g_156)) | 1UL)) >= g_23))), (*p_59))));
                        (**l_376) ^= (safe_add_func_int16_t_s_s((*g_182), ((-1L) >= 1L)));
                    }
                    if ((*g_348))
                        continue;
                }
            }
            else
            {
                int l_458 = 0xDD481381L;
                int *l_549 = &g_39;
                unsigned char l_573 = 0xACL;
                int l_659 = (-3L);
                int l_718 = 0L;
                char *l_776 = &g_95;
                int *l_929 = &l_533;
                int *l_930 = &l_533;
                int *l_931 = &g_349;
                int *l_932 = &l_507;
                int *l_933 = &l_533;
                int *l_934 = &l_486;
                int *l_935 = &l_453;
                int *l_936 = &l_486;
                int *l_937 = &l_453;
                int *l_938 = &l_718;
                int *l_939 = &l_486;
                int *l_940 = &g_806;
                int *l_941 = &l_422;
                int *l_942 = &l_422;
                int *l_943 = &l_486;
                int *l_944 = &l_718;
                int *l_945 = &l_453;
                int *l_947 = &l_507;
                int *l_948 = &l_718;
                int *l_949 = &l_507;
                int *l_950 = (void*)0;
                int *l_951 = &l_718;
                int *l_952 = &g_81;
                int *l_953 = (void*)0;
                int *l_954 = (void*)0;
                int *l_955 = &l_946;
                int *l_956 = (void*)0;
                int *l_957 = &l_718;
                int *l_958 = &l_507;
                int *l_959 = (void*)0;
                int *l_960 = &l_458;
                int *l_961 = (void*)0;
                int l_962 = (-7L);
                int *l_963 = &g_81;
                int *l_964 = &l_533;
                int *l_965 = (void*)0;
                if (l_422)
                {
                    int l_467 = 0xEFDA621DL;
                    int l_512 = 0x96015333L;
                    unsigned short *l_547 = (void*)0;
                    int *l_570 = &g_39;
                    int l_656 = (-1L);
                    unsigned *l_666 = (void*)0;
                    unsigned *l_667 = &g_91;
                    unsigned short *l_676 = &g_31;
                    short l_702 = 3L;
                    if ((safe_mod_func_int32_t_s_s(l_458, p_61)))
                    {
                        int *l_459 = &g_349;
                        int *l_460 = &l_422;
                        int *l_461 = &g_81;
                        int *l_462 = (void*)0;
                        int *l_463 = &g_81;
                        int *l_464 = (void*)0;
                        int *l_465 = &g_81;
                        int *l_466 = &g_81;
                        int *l_468 = (void*)0;
                        int *l_469 = &g_349;
                        int *l_470 = &g_81;
                        int *l_471 = &g_81;
                        int *l_472 = &l_458;
                        int *l_473 = (void*)0;
                        int *l_474 = (void*)0;
                        int *l_475 = &g_349;
                        int *l_476 = &g_349;
                        int *l_478 = &g_81;
                        int *l_479 = &l_477;
                        int *l_480 = &g_349;
                        int *l_481 = (void*)0;
                        int *l_482 = &l_453;
                        int *l_483 = (void*)0;
                        int *l_484 = &l_422;
                        int *l_485 = (void*)0;
                        int *l_487 = &l_422;
                        int *l_488 = &g_349;
                        int *l_489 = &l_477;
                        int *l_490 = &l_467;
                        int *l_491 = (void*)0;
                        int *l_492 = &l_477;
                        int *l_493 = &l_453;
                        int *l_494 = (void*)0;
                        int *l_495 = &l_453;
                        int *l_496 = &l_486;
                        int *l_497 = &g_349;
                        int *l_498 = &l_453;
                        int *l_499 = &l_422;
                        int *l_500 = (void*)0;
                        int *l_501 = &l_453;
                        int *l_502 = &l_453;
                        int *l_503 = (void*)0;
                        int *l_504 = &l_486;
                        int *l_505 = &l_486;
                        int *l_506 = &l_486;
                        int *l_508 = (void*)0;
                        int *l_509 = &l_477;
                        int *l_510 = &g_81;
                        int *l_511 = &l_422;
                        int *l_513 = &l_512;
                        int *l_514 = &l_458;
                        int *l_515 = &l_486;
                        int *l_516 = &l_467;
                        int *l_517 = &l_453;
                        int *l_518 = &l_422;
                        int *l_519 = &l_512;
                        int *l_520 = &l_422;
                        int *l_521 = &g_349;
                        int *l_522 = &l_458;
                        int *l_523 = &l_422;
                        int *l_524 = &l_467;
                        int *l_525 = &l_453;
                        int *l_526 = &l_458;
                        int *l_527 = &g_81;
                        int *l_528 = &l_458;
                        int *l_529 = (void*)0;
                        int *l_530 = &l_477;
                        int *l_531 = &g_349;
                        int *l_532 = &g_81;
                        g_534++;
                        p_59 = func_77(&p_57, ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((func_64((((func_64(&g_39, ((0L != (safe_mod_func_uint16_t_u_u(1UL, (+0xC00FL)))) >= 0xB072L)) , (((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_58, (l_547 != &g_42))), l_467)) ^ p_61) < (*g_433))) > l_548) , &g_39), l_467) != g_534), 1L)) <= (*p_59)), 6)) && g_534));
                        return l_549;
                    }
                    else
                    {
                        int *l_550 = (void*)0;
                        int *l_551 = &l_533;
                        int *l_552 = &l_453;
                        int *l_553 = &l_533;
                        int *l_554 = &l_486;
                        int *l_555 = &g_81;
                        int *l_556 = &l_512;
                        int *l_557 = &l_458;
                        int *l_558 = &l_477;
                        int *l_559 = &l_512;
                        int *l_560 = &g_81;
                        int *l_561 = &g_349;
                        int *l_562 = &l_486;
                        int *l_563 = &l_512;
                        int *l_564 = &g_81;
                        int *l_565 = &l_422;
                        int *l_566 = &l_533;
                        int *l_574 = (void*)0;
                        int *l_575 = &l_507;
                        int *l_576 = &l_512;
                        int *l_577 = &l_458;
                        int *l_578 = &l_458;
                        int *l_579 = &g_81;
                        int *l_580 = &l_486;
                        int *l_581 = (void*)0;
                        int *l_582 = (void*)0;
                        int *l_583 = &l_486;
                        int *l_584 = &l_422;
                        int *l_585 = &l_467;
                        int *l_586 = &l_512;
                        int *l_587 = &l_477;
                        int *l_588 = &l_486;
                        int *l_589 = &l_477;
                        int *l_590 = &l_458;
                        int *l_591 = &l_486;
                        int *l_592 = &l_458;
                        int *l_593 = &g_349;
                        int *l_594 = (void*)0;
                        int *l_595 = &g_81;
                        int *l_596 = &l_467;
                        int *l_597 = &l_512;
                        int *l_598 = &l_533;
                        int *l_599 = (void*)0;
                        int *l_600 = &l_458;
                        int *l_601 = &l_422;
                        int *l_602 = &l_507;
                        int *l_603 = &g_81;
                        int *l_604 = &l_458;
                        int *l_605 = (void*)0;
                        int *l_606 = &l_422;
                        int *l_607 = &l_453;
                        int l_608 = 0xF5332A93L;
                        int l_609 = 5L;
                        int *l_610 = &g_81;
                        int *l_611 = &l_458;
                        int *l_612 = &l_608;
                        int *l_613 = &l_477;
                        int *l_614 = &l_453;
                        int *l_615 = (void*)0;
                        int *l_616 = &l_512;
                        --g_567;
                        (*l_553) &= (((0L != ((p_58 = (g_567 = func_64(((*l_384) = l_570), func_13(g_425, (safe_lshift_func_uint8_t_u_s(0x4BL, 3)), (l_399 = &g_23))))) , (*g_433))) , (l_467 < (*l_368))) >= p_61);
                        (*g_348) = ((**l_376) = (l_573 , 9L));
                        g_617--;
                    }
                    if ((l_419 > l_458))
                    {
                        int *l_620 = &l_512;
                        int *l_621 = (void*)0;
                        int *l_622 = &l_453;
                        int *l_623 = &g_349;
                        int *l_624 = &l_507;
                        int *l_625 = &l_458;
                        int *l_626 = (void*)0;
                        int *l_627 = &l_453;
                        int *l_628 = (void*)0;
                        int *l_629 = &l_458;
                        int *l_630 = (void*)0;
                        int *l_631 = &l_453;
                        int *l_632 = &g_349;
                        int *l_633 = &g_81;
                        int *l_634 = &l_533;
                        int *l_635 = &l_486;
                        int *l_636 = &l_512;
                        int *l_637 = &g_349;
                        int *l_638 = &l_507;
                        int *l_639 = &l_467;
                        int *l_640 = &l_477;
                        int *l_641 = (void*)0;
                        int *l_642 = &l_453;
                        int *l_643 = (void*)0;
                        int *l_644 = &l_486;
                        int *l_645 = &l_512;
                        int *l_646 = &l_422;
                        int *l_647 = &l_477;
                        int *l_648 = &l_422;
                        g_649++;
                    }
                    else
                    {
                        unsigned char l_652 = 249UL;
                        int *l_655 = &l_486;
                        (*l_655) |= (func_64(((func_73(p_59, &g_349, l_652) && (((*g_348) ^ (((***l_446) = ((((l_512 & ((safe_mod_func_uint32_t_u_u((p_61 , ((void*)0 == &g_432)), (*g_348))) , g_567)) ^ 249UL) < p_58) >= l_512)) & p_58)) ^ 65533UL)) , l_549), p_61) , 0xD07A03BFL);
                        (**l_376) = (l_656 <= (*l_655));
                    }
                    (*g_348) = (safe_add_func_int32_t_s_s(((0xAAL != (+p_58)) ^ l_659), l_573));
                    if ((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_58, 6)), (safe_rshift_func_int8_t_s_u((&g_23 != (void*)0), (((*l_667) ^= 0UL) ^ ((&p_57 != &l_453) || ((safe_add_func_uint16_t_u_u((--(*l_392)), l_507)) <= (safe_sub_func_int32_t_s_s((((*l_676)++) != ((safe_unary_minus_func_int32_t_s((l_458 || ((*l_386) = (safe_rshift_func_uint16_t_u_s((*p_60), 8)))))) , (**l_376))), (*p_59)))))))))))
                    {
                        unsigned char *l_688 = &l_420;
                        (**l_376) &= 0xDDB6DF4DL;
                        (**l_376) = (((l_458 >= (((+p_58) , g_107) < (safe_mod_func_uint16_t_u_u(((*p_59) ^ ((~((safe_sub_func_int8_t_s_s(g_42, (((safe_sub_func_int16_t_s_s((((**g_432) && (~((func_13(((g_97 > ((6UL <= ((*l_688) = l_548)) ^ l_467)) || 6UL), p_58, l_381) >= 1L) != l_659))) || (*g_348)), 65535UL)) , (*p_59)) , g_39))) | 1UL)) & p_61)), 0xFB39L)))) && (*p_59)) > l_689);
                    }
                    else
                    {
                        short *l_695 = &g_253;
                        (*p_59) = (g_3 > ((func_73(l_690, ((*l_376) = func_77(&g_81, (p_61 && p_58))), ((*l_377) = (safe_sub_func_uint32_t_u_u((((*l_695) = ((g_693 = p_59) == (p_57 , &g_694))) & p_61), 1UL)))) <= 0x0CL) || g_253));
                        g_348 = func_77(((g_707 &= (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((-1L), (safe_add_func_int8_t_s_s((((((l_402 && ((**l_376) , (((*l_676) = func_13(l_702, (*g_693), &g_23)) < (safe_mod_func_int8_t_s_s(((l_512 != ((safe_mod_func_int16_t_s_s((((*p_60) , &l_570) == &g_693), g_694)) >= (*p_60))) || (*p_60)), p_61))))) != g_156) >= (*l_368)) , p_60) == (void*)0), l_467)))), p_57))) , &p_57), (*l_377));
                        (*p_59) = (p_57 , (*g_348));
                    }
                }
                else
                {
                    int *l_708 = &l_458;
                    int *l_709 = (void*)0;
                    int *l_710 = &g_349;
                    int *l_711 = &l_533;
                    int *l_712 = &l_477;
                    int *l_713 = &l_689;
                    int *l_714 = (void*)0;
                    int *l_715 = &l_458;
                    int *l_716 = &l_507;
                    int *l_717 = (void*)0;
                    int *l_719 = &g_349;
                    int *l_720 = (void*)0;
                    int *l_721 = &l_689;
                    int *l_722 = &l_533;
                    int *l_723 = &l_422;
                    int *l_724 = &l_507;
                    int *l_725 = (void*)0;
                    int *l_726 = (void*)0;
                    int *l_727 = &l_507;
                    int *l_728 = &g_349;
                    unsigned l_729 = 7UL;
                    (*l_368) &= func_64(((*l_384) = &l_548), (9UL >= func_64(func_77(&g_81, (&l_386 != (g_107 , &g_22))), p_58)));
                    l_729--;
                }
                l_507 = 0x23A73B1FL;
                for (l_402 = (-17); (l_402 <= 28); l_402++)
                {
                    unsigned l_771 = 0x5538B94EL;
                    int l_808 = 0x0C199E58L;
                    int *l_921 = &g_694;
                }
                l_966++;
            }
            (*l_971) = l_969;
        }
        else
        {
            (*p_59) = (*l_377);
            (*g_348) = ((void*)0 == &l_385);
            for (g_831 = 17; (g_831 != 42); g_831++)
            {
                return p_59;
            }
        }
    }
    else
    {
        unsigned char ****l_974 = &l_446;
        int l_988 = 4L;
        int l_994 = 0xC0E9B76EL;
        int l_996 = 0xF198DC54L;
        int l_1008 = (-1L);
        int l_1010 = 0xB956C92BL;
        int l_1016 = 0x6FDB0506L;
        int l_1031 = 0x6A5C7B7FL;
        unsigned short l_1034 = 0xE1B2L;
        short **l_1037 = (void*)0;
        if ((l_974 == g_975))
        {
            char l_977 = 0xBAL;
            int *l_978 = &l_477;
            int *l_979 = (void*)0;
            int *l_980 = &l_486;
            int *l_981 = &g_806;
            int *l_982 = &l_486;
            int *l_983 = (void*)0;
            int *l_984 = &l_477;
            int *l_985 = &g_349;
            int *l_986 = &g_812;
            int *l_987 = &l_477;
            int *l_989 = &l_477;
            int *l_990 = (void*)0;
            int *l_991 = &l_477;
            int *l_992 = (void*)0;
            int *l_993 = &g_806;
            int l_995 = 0xF0EE69D5L;
            int *l_997 = (void*)0;
            int *l_998 = &g_812;
            int *l_999 = (void*)0;
            int *l_1000 = &g_812;
            int *l_1001 = &l_486;
            int *l_1002 = &g_806;
            int *l_1003 = &g_81;
            int *l_1004 = &l_995;
            int *l_1005 = &l_486;
            int *l_1006 = &l_477;
            int *l_1007 = &g_81;
            int *l_1009 = &g_349;
            int *l_1011 = (void*)0;
            int l_1012 = 0x7158AE56L;
            int *l_1013 = &l_1008;
            int l_1014 = 6L;
            int *l_1015 = &l_477;
            int *l_1017 = &l_996;
            int l_1018 = 1L;
            int *l_1019 = &l_988;
            int *l_1020 = (void*)0;
            int *l_1021 = &g_349;
            int *l_1022 = &l_1014;
            int *l_1023 = &l_988;
            int *l_1024 = (void*)0;
            int *l_1025 = (void*)0;
            int *l_1026 = (void*)0;
            int *l_1027 = (void*)0;
            int *l_1028 = (void*)0;
            int *l_1029 = &l_533;
            int *l_1030 = (void*)0;
            int *l_1032 = &l_1014;
            --l_1034;
            (*l_376) = &p_57;
        }
        else
        {
            short ***l_1038 = &l_1037;
            int *l_1039 = &g_39;
            (*l_377) = func_64(((((*l_1038) = l_1037) == &l_381) , l_1039), p_61);
        }
        for (l_477 = (-11); (l_477 != 4); l_477 = safe_add_func_int16_t_s_s(l_477, 4))
        {
            unsigned l_1052 = 4294967289UL;
            g_81 &= (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((p_61 || (safe_sub_func_int16_t_s_s((*g_182), ((safe_rshift_func_uint8_t_u_u(((****g_975) = ((l_1052 > (*g_348)) > (*l_377))), (*l_377))) | (((*p_59) >= (safe_rshift_func_uint16_t_u_s(func_13(l_996, (p_61 , p_57), l_386), 5))) < (*l_377)))))), 0UL)), g_567));
        }
        if (g_23)
            goto lbl_1055;
    }
    return p_59;
}







static char func_64(int * p_65, char p_66)
{
    int **l_352 = (void*)0;
    int **l_353 = &g_348;
    (*l_353) = p_65;
    (**l_353) = (**l_353);
    for (g_95 = 0; (g_95 > 22); g_95 = safe_add_func_int16_t_s_s(g_95, 3))
    {
        unsigned *l_357 = (void*)0;
        unsigned *l_358 = &g_91;
        int l_363 = 0xCDC31119L;
        unsigned short *l_364 = (void*)0;
        unsigned short *l_365 = &g_31;
        int l_366 = 0x8B2F7F30L;
        int l_367 = (-7L);
        l_367 ^= (p_66 , (safe_unary_minus_func_uint32_t_u((((--(*l_358)) , (func_13((l_366 = (l_363 = ((*l_365) = ((safe_sub_func_int8_t_s_s(((**l_353) && l_363), p_66)) & 0x6244L)))), g_161, l_364) && (l_352 != &g_348))) , g_107))));
        if (p_66)
            continue;
    }
    return g_39;
}







static unsigned short func_73(int * p_74, int * p_75, int p_76)
{
    int *l_350 = &g_349;
    g_348 = l_350;
    return g_156;
}







static int * func_77(int * p_78, unsigned p_79)
{
    short *l_96 = &g_12;
    int l_103 = 0x676063AEL;
    char l_181 = 0x6EL;
    char l_193 = (-1L);
    int *l_201 = &g_124;
    unsigned l_329 = 1UL;
    unsigned l_344 = 0UL;
    unsigned char *l_345 = &g_3;
    (*p_78) ^= (-1L);
    if ((*p_78))
    {
        unsigned short *l_84 = &g_42;
        int l_89 = (-1L);
        unsigned *l_90 = (void*)0;
        char *l_94 = &g_95;
        g_81 = (safe_add_func_int8_t_s_s(((*l_94) &= (((*l_84) = 0x9D08L) , (p_79 & (safe_sub_func_int32_t_s_s((!(p_79 & (safe_sub_func_int32_t_s_s(l_89, (g_91--))))), g_3))))), ((g_97 &= ((func_13(g_31, l_89, l_96) == p_79) && g_23)) || g_12)));
        if (g_3)
        {
            int *l_99 = &l_89;
            int **l_98 = &l_99;
            int *l_100 = &l_89;
            int l_105 = 0xF7A6BAE6L;
            (*l_98) = &g_81;
            (*l_100) ^= ((*p_78) = (-1L));
            if ((*p_78))
            {
                int *l_106 = &l_89;
                unsigned *l_121 = (void*)0;
                unsigned *l_122 = (void*)0;
                unsigned *l_123 = &g_91;
                for (g_12 = 0; (g_12 >= 28); g_12++)
                {
                    int *l_104 = &l_103;
                    (*l_99) &= ((((void*)0 == &g_81) <= 1L) != func_13(((*l_84) = g_97), l_103, &g_12));
                    (*l_104) |= ((*l_99) = (l_89 ^= (*p_78)));
                }
                g_107++;
                g_124 ^= (((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((+(safe_sub_func_int32_t_s_s((((**l_98) = 0xAEL) , func_13(p_79, l_103, l_84)), (safe_rshift_func_int16_t_s_s((func_13((safe_mod_func_uint32_t_u_u(g_95, (safe_unary_minus_func_uint16_t_u(((g_107 && ((*l_123) = ((((*l_106) ^ (((p_79 > p_79) != l_89) , 8L)) <= 4L) | 0x0E9BL))) != g_31))))), p_79, l_96) >= l_103), l_103))))), 14)), g_39)) & l_103) <= 251UL);
                p_78 = l_106;
            }
            else
            {
                int *l_125 = (void*)0;
                int *l_126 = &g_81;
                int *l_127 = &l_103;
                int *l_128 = &l_105;
                int *l_129 = (void*)0;
                int *l_130 = (void*)0;
                int *l_131 = &l_89;
                int *l_132 = &l_89;
                int *l_133 = &l_103;
                int *l_134 = &l_105;
                int *l_135 = (void*)0;
                int *l_136 = &g_81;
                int *l_137 = (void*)0;
                int *l_138 = &l_89;
                int *l_139 = &l_105;
                int *l_140 = &l_103;
                int *l_141 = &g_81;
                int *l_142 = &l_103;
                int *l_143 = &l_89;
                int *l_144 = &l_103;
                int *l_145 = &l_105;
                int *l_146 = &l_105;
                int *l_147 = &g_81;
                int *l_148 = &g_81;
                int *l_149 = &l_89;
                int *l_150 = &l_89;
                int *l_151 = (void*)0;
                int *l_152 = (void*)0;
                int *l_153 = &l_103;
                int *l_154 = &l_89;
                int *l_155 = &l_103;
                ++g_156;
                (*l_98) = &g_81;
                for (g_156 = 19; (g_156 != 39); g_156++)
                {
                    if (g_3)
                        break;
                }
                if ((*p_78))
                {
                    unsigned char *l_183 = &g_107;
                    int *l_184 = &g_124;
                    g_162--;
                    (*l_131) |= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((void*)0 == p_78), 3)), (((*l_155) = func_13(g_91, ((*l_184) &= (((*l_96) = ((++(*l_84)) >= ((safe_lshift_func_int8_t_s_s((p_79 ^ 0xDAC4L), 1)) ^ 0xB320AFAFL))) , ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((**l_98), (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(((*l_183) = (((*l_94) ^= func_13(g_39, l_181, g_182)) , g_12)), (*l_139))) <= 1L), p_79)))), g_12)) , p_79))), &g_23)) | 6UL)));
                }
                else
                {
                    unsigned short l_185 = 65528UL;
                    int l_191 = 0x00BF5F1DL;
                    (*l_98) = &g_81;
                    l_185--;
                    l_191 |= (((safe_unary_minus_func_uint8_t_u(g_161)) >= ((l_103 ^= ((*g_182) || l_181)) ^ (safe_rshift_func_int16_t_s_s((*l_147), 6)))) || ((**l_98) >= ((*l_94) = (((g_91 = (3UL < (p_79 > (((*l_131) = ((((((+(((((((g_124 , l_89) & 0xA266L) , l_103) , g_31) , 0xCC58L) , 0L) < (*l_142))) >= g_162) > 0UL) > 0xD037L) > g_161) >= 248UL)) & 0x5343E278L)))) || g_156) ^ 0x3BL))));
                    (*l_98) = p_78;
                }
            }
        }
        else
        {
            return p_78;
        }
    }
    else
    {
        unsigned l_192 = 0xFFCA76E8L;
        l_193 &= l_192;
    }
    for (l_193 = (-7); (l_193 >= 24); l_193 = safe_add_func_uint32_t_u_u(l_193, 8))
    {
        int *l_197 = &l_103;
        int **l_196 = &l_197;
        unsigned l_198 = 0xBFC5922DL;
        short *l_250 = &g_12;
        (*l_196) = &l_103;
        if ((7UL < 1UL))
        {
            if (l_198)
                break;
            for (g_91 = 0; (g_91 <= 14); g_91 = safe_add_func_uint32_t_u_u(g_91, 9))
            {
                return l_201;
            }
        }
        else
        {
            unsigned l_206 = 0UL;
            short *l_212 = (void*)0;
            int l_221 = 0x698A8858L;
            unsigned char *l_342 = &g_3;
            unsigned *l_343 = (void*)0;
            for (g_12 = (-4); (g_12 < 16); g_12++)
            {
                short *l_211 = &g_23;
                int l_220 = 0x75A53A4EL;
                unsigned short l_251 = 0UL;
            }
            (*l_197) |= ((g_31 , (9UL >= g_39)) && (l_344 = (safe_sub_func_uint16_t_u_u(func_13(l_206, p_79, &g_12), (&g_107 == l_342)))));
            l_221 &= (*l_197);
        }
    }
    l_103 |= (l_345 != l_345);
    return l_201;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    transparent_crc(g_1431, "g_1431", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
