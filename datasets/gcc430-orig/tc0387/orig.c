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
   unsigned short f0;
   unsigned f1 : 8;
   unsigned f2 : 28;
};

union U1 {
   unsigned f0;
   unsigned f1;
};


static int g_7 = 1L;
static int g_9 = 0xF2579253L;
static int g_12 = 0x9B2E4145L;
static char g_13 = 0x89L;
static unsigned char g_27 = 0x1CL;
static union U1 g_73 = {0xC20EB8FCL};
static union U0 g_76 = {0UL};
static short g_85 = 0x00A0L;
static short g_88 = 0x8231L;
static unsigned char g_109 = 0xD8L;
static int * const g_122 = &g_7;
static int * const *g_121 = &g_122;
static char *g_135 = &g_13;
static char **g_134 = &g_135;
static const unsigned *g_168 = (void*)0;
static short *g_188 = (void*)0;
static short **g_187 = &g_188;
static unsigned g_194 = 0UL;
static int *g_233 = &g_9;
static const int *g_281 = &g_9;
static unsigned char g_315 = 255UL;
static char g_330 = 0xA4L;
static char g_360 = 0xF5L;
static int g_362 = 2L;
static union U0 *g_364 = &g_76;
static union U0 ** const g_363 = &g_364;
static short *g_472 = (void*)0;
static int g_516 = 6L;
static const char g_520 = 0x51L;
static union U1 *g_550 = &g_73;
static int ****g_626 = (void*)0;
static unsigned ***g_713 = (void*)0;
static const unsigned g_728 = 0UL;
static const union U1 g_739 = {0x0865CBF7L};
static union U0 ****g_839 = (void*)0;
static union U0 ***** const g_838 = &g_839;
static char g_905 = (-2L);
static unsigned *g_952 = &g_73.f1;
static const unsigned short g_1129 = 0xDCDFL;
static int g_1154 = (-9L);
static union U1 g_1160 = {6UL};
static union U1 *g_1159 = &g_1160;
static char g_1184 = 0xFAL;
static unsigned short g_1233 = 0x3915L;
static int g_1258 = 0x607CB182L;
static int **g_1283 = &g_233;
static int ***g_1282 = &g_1283;
static unsigned char g_1297 = 249UL;
static unsigned ** const **g_1310 = (void*)0;
static unsigned g_1331 = 0x01B1E38FL;
static int g_1342 = 0xFED3C4A0L;



static int func_1(void);
static union U1 * func_16(char p_17);
static union U1 * func_18(char p_19, int * p_20, union U1 * p_21, int p_22, int * p_23);
static int * func_31(unsigned char * p_32);
static unsigned char func_33(char p_34, union U0 p_35, unsigned p_36, const unsigned p_37, union U1 p_38);
static union U0 func_40(short p_41, int * p_42, unsigned char * p_43);
static unsigned char * func_45(int * p_46, int * p_47, int * p_48, const union U1 * p_49, short p_50);
static const union U0 func_51(unsigned char p_52, unsigned char p_53, unsigned p_54, unsigned p_55);
static union U0 * func_62(short p_63, union U1 p_64);
static short func_65(int * p_66, union U1 * const p_67, union U0 * p_68, unsigned short p_69, char p_70);
static int func_1(void)
{
    int l_4 = (-1L);
    int *l_8 = &g_9;
    int *l_11 = &g_12;
    unsigned l_14 = 4294967286UL;
    union U1 *l_1191 = &g_73;
    union U0 l_1192 = {1UL};
    unsigned char l_1194 = 0xACL;
    int *l_1237 = (void*)0;
    int l_1285 = 0xAAEA9DA9L;
    unsigned short l_1304 = 0UL;
    union U1 **l_1317 = &g_1159;
    short ***l_1328 = (void*)0;
    int l_1335 = (-1L);
    int *l_1336 = &l_4;
    union U0 *l_1337 = &g_76;
    unsigned short *l_1338 = (void*)0;
    unsigned short *l_1339 = &g_1233;
    unsigned l_1343 = 0x42357264L;
    if ((safe_mod_func_uint32_t_u_u(l_4, ((((safe_add_func_uint16_t_u_u(l_4, ((((*l_8) |= g_7) ^ (((*l_11) = ((g_7 ^ l_4) >= (g_7 , (safe_unary_minus_func_uint16_t_u(g_7))))) , (g_7 | ((g_13 = (g_12 >= g_7)) , l_14)))) || g_12))) >= g_7) >= 0x2F20920AL) , g_9))))
    {
        unsigned l_15 = 0xE889EC00L;
        int *l_1161 = (void*)0;
        union U1 **l_1203 = &g_1159;
        union U0 *l_1204 = &l_1192;
        unsigned short *l_1209 = &g_76.f0;
        unsigned l_1210 = 1UL;
        unsigned short *l_1211 = (void*)0;
        unsigned short *l_1212 = &l_1192.f0;
        int *l_1220 = &l_4;
        int l_1253 = 0xFDDB41ECL;
        char l_1320 = 0x28L;
        (*l_8) |= 0xD635290CL;
        if (l_15)
        {
            unsigned char *l_26 = &g_27;
            int *l_30 = &g_9;
            int **l_1158 = &l_8;
            char *l_1183 = &g_1184;
            union U0 *l_1193 = (void*)0;
            unsigned char l_1197 = 0x70L;
            l_1191 = func_16(((*l_1183) &= (((void*)0 != &g_12) , ((((*l_8) , func_18((safe_lshift_func_int8_t_s_u((((((*l_26) = 1UL) , (safe_rshift_func_int8_t_s_u(4L, (((l_15 != (l_30 == ((*l_1158) = func_31(&g_27)))) , 6UL) , g_13)))) & g_739.f1) | l_14), 0)), l_11, g_1159, g_728, l_1161)) == (void*)0) ^ l_15))));
            (*l_1158) = (((*g_135) , (g_76 = l_1192)) , (((**g_134) >= 5UL) , &g_9));
            (**l_1158) = ((((*l_8) & (((0x4DL && ((0x5A48L & l_15) == l_1194)) , (safe_add_func_int16_t_s_s((l_15 & l_15), (l_1197 , (safe_sub_func_uint16_t_u_u(g_739.f0, 8UL)))))) >= (*l_8))) & (*l_8)) > 3L);
        }
        else
        {
            int *l_1200 = &l_4;
            (*l_1200) |= (*l_8);
        }
        (*l_1203) = ((&g_1160 != (((safe_mod_func_uint8_t_u_u(255UL, (*l_8))) && g_1184) , &g_739)) , (*l_1203));
        for (l_15 = 4; (l_15 < 53); ++l_15)
        {
            unsigned l_1215 = 7UL;
            union U0 l_1231 = {1UL};
            const int **l_1279 = &g_281;
            const int ***l_1278 = &l_1279;
            const int ****l_1280 = (void*)0;
            const int ****l_1281 = &l_1278;
            short *l_1284 = &g_88;
            int l_1286 = 1L;
            int *l_1287 = &l_4;
            unsigned *l_1290 = &g_73.f0;
            unsigned **l_1289 = &l_1290;
            unsigned ***l_1288 = &l_1289;
            short l_1300 = 1L;
            int l_1303 = 0x92A228AAL;
            unsigned char *l_1319 = &g_1297;
        }
    }
    else
    {
        char l_1326 = 0xF2L;
        unsigned *l_1327 = &g_1160.f0;
        short ****l_1329 = &l_1328;
        unsigned *l_1330 = &g_1331;
        unsigned char *l_1332 = &l_1194;
        union U0 l_1333 = {65527UL};
        int l_1334 = 1L;
        l_1334 ^= ((*l_8) = func_33(((safe_rshift_func_uint8_t_u_s(((*l_1332) = (((*l_1330) ^= (((*l_1327) &= l_1326) < (0x787FL & func_65((*g_1283), &g_73, func_62((((*l_1329) = l_1328) == &g_187), (*g_550)), g_728, l_1326)))) , 1UL)), 4)) & l_1304), l_1333, l_1192.f0, l_1304, (*l_1191)));
        l_1335 = l_1326;
    }
    (*l_1336) ^= (*l_8);
    (*l_1336) = ((((*l_1337) = l_1192) , (((*l_1339) ^= 0x338EL) || (safe_sub_func_int32_t_s_s((((((*l_8) | (-1L)) || (*l_1336)) , g_76.f0) >= 0UL), g_1342)))) == l_1343);
    return (*l_8);
}







static union U1 * func_16(char p_17)
{
    char l_1187 = 0xF3L;
    unsigned char *l_1188 = &g_27;
    int *l_1189 = (void*)0;
    int **l_1190 = &l_1189;
    (*l_1190) = l_1189;
    return &g_1160;
}







static union U1 * func_18(char p_19, int * p_20, union U1 * p_21, int p_22, int * p_23)
{
    unsigned char l_1168 = 0xCFL;
    int l_1169 = (-1L);
    unsigned *l_1172 = (void*)0;
    unsigned **l_1171 = &l_1172;
    unsigned *** const l_1170 = &l_1171;
    unsigned ***l_1173 = &l_1171;
    unsigned ****l_1174 = (void*)0;
    unsigned ****l_1175 = &g_713;
    unsigned ***l_1177 = &l_1171;
    unsigned ****l_1176 = &l_1177;
    unsigned char *l_1178 = &g_109;
    int l_1181 = 0x9A21574EL;
    int *l_1182 = &g_362;
    (*l_1182) |= ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((p_22 | p_19), (safe_add_func_uint8_t_u_u((l_1169 = l_1168), (l_1170 != ((*l_1176) = ((*l_1175) = (l_1173 = l_1173)))))))), ((*l_1178) |= l_1168))) | (l_1181 = (g_194 , (5L > ((safe_add_func_int16_t_s_s(((*g_281) <= p_22), (-1L))) <= (-1L))))));
    return &g_1160;
}







static int * func_31(unsigned char * p_32)
{
    unsigned l_39 = 1UL;
    int *l_44 = &g_7;
    const union U1 *l_738 = &g_739;
    unsigned char *l_783 = &g_27;
    unsigned char **l_782 = &l_783;
    int *l_1155 = &g_516;
    int * const l_1156 = &g_362;
    int **l_1157 = &l_1155;
    (*l_1155) = (((func_33(l_39, func_40(g_7, l_44, ((*l_782) = (g_13 , func_45(((l_39 , func_51((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((((*p_32) ^= g_9) != ((l_39 , (((l_39 && l_39) , 0xD6L) || 0x66L)) != 1UL)), 0x6E99FD40L)), g_13)), g_13, g_9, g_7)) , l_44), &g_7, l_44, l_738, l_39)))), l_39, g_739.f1, (*l_738)) && l_39) != l_39) || 0x7773AEF4L);
    (*l_1157) = l_1156;
    (**l_1157) = (*l_1156);
    return &g_516;
}







static unsigned char func_33(char p_34, union U0 p_35, unsigned p_36, const unsigned p_37, union U1 p_38)
{
    const union U1 *l_794 = &g_739;
    const union U1 **l_793 = &l_794;
    int l_797 = 0x3B1FA37DL;
    int *l_798 = &g_7;
    unsigned *l_799 = &g_73.f0;
    int l_802 = 4L;
    union U0 l_805 = {0xB9C0L};
    int l_824 = 4L;
    int **l_836 = &g_233;
    int ***l_835 = &l_836;
    union U0 *****l_837 = (void*)0;
    char *l_845 = &g_330;
    int *l_849 = (void*)0;
    union U1 * const l_872 = &g_73;
    short * const *l_889 = &g_472;
    short * const **l_888 = &l_889;
    short l_904 = 0xB6BFL;
    int *l_1031 = &g_362;
    unsigned l_1039 = 0x624121A9L;
    union U0 *l_1087 = (void*)0;
    const char l_1113 = 0xD0L;
    short l_1121 = (-10L);
    (*l_793) = &g_739;
    if ((safe_add_func_uint16_t_u_u(l_797, (((*l_799) = ((l_798 = &g_12) == (void*)0)) & ((p_35 , l_797) | (safe_sub_func_uint32_t_u_u((l_802 == 9L), p_34)))))))
    {
        int **l_803 = &g_233;
        union U0 *l_804 = &g_76;
        int l_806 = 5L;
        union U1 *l_807 = (void*)0;
        unsigned short l_808 = 6UL;
        unsigned char *l_813 = (void*)0;
        unsigned char *l_814 = &g_315;
        int *l_823 = (void*)0;
        l_806 = (~((p_37 , (l_805 = p_35)) , l_805.f0));
        l_807 = (void*)0;
        l_808 = l_805.f0;
        l_824 = ((l_808 || ((1UL & ((l_805 , (((((safe_sub_func_uint8_t_u_u((p_35 , ((*l_814) ^= (safe_mod_func_uint8_t_u_u(g_73.f0, 0x63L)))), p_37)) , (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((!(l_797 |= (safe_rshift_func_int16_t_s_s(((p_35 , ((safe_sub_func_uint32_t_u_u(l_802, p_34)) != (**g_134))) && 0x319BC4F5L), p_35.f0)))) != (-3L)) , l_797), (*g_135))), 6))) <= (*g_135)) < g_88) || 0x364DL)) >= l_802)) || l_805.f0)) || (-8L));
    }
    else
    {
        int *l_840 = (void*)0;
        l_824 |= (safe_add_func_int32_t_s_s((g_516 | ((safe_lshift_func_uint8_t_u_u((((~((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((0x43FAABFBL == ((safe_lshift_func_int8_t_s_s(((l_835 = l_835) == (void*)0), 7)) , p_37)) > 0UL), p_35.f0)), ((p_35.f0 , l_837) != g_838))) & (*g_135))) , 0xFED71F2CL) , p_37), 0)) < 0UL)), 0x969DAB26L));
        return p_35.f0;
    }
    if (((safe_add_func_int8_t_s_s(((*l_845) = ((*g_135) = (((p_36 , (p_34 < p_34)) != p_37) > ((safe_sub_func_int32_t_s_s(5L, p_34)) >= (*g_281))))), p_38.f1)) , 0x33E3D56DL))
    {
        short l_846 = 0xFD18L;
        char l_852 = 0xA8L;
        int l_866 = 0L;
        short **l_877 = (void*)0;
        if ((((*l_845) = l_846) , 0x44E3B8ADL))
        {
            int *l_853 = &g_7;
            int l_865 = 0x91736085L;
            for (g_27 = (-8); (g_27 != 37); g_27 = safe_add_func_int32_t_s_s(g_27, 1))
            {
                const unsigned char l_862 = 0x5BL;
                int *l_867 = (void*)0;
                int *l_868 = &l_797;
                if ((*g_281))
                    break;
                (**l_835) = l_849;
                for (p_34 = 0; (p_34 != 1); ++p_34)
                {
                    g_9 = (p_35.f0 >= ((l_852 >= p_38.f0) | (((void*)0 == l_853) != (safe_rshift_func_uint16_t_u_s(g_9, 8)))));
                }
                (*l_868) |= (l_866 = (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(p_38.f1, p_38.f0)), (safe_mod_func_uint8_t_u_u(l_862, (safe_add_func_int32_t_s_s((p_38.f1 | ((*l_799) = l_865)), 1UL)))))));
            }
        }
        else
        {
            int l_869 = 0x972DD783L;
            unsigned char *l_878 = &g_109;
            (**l_835) = &g_9;
            (***l_835) ^= l_869;
            (***l_835) = (safe_add_func_uint16_t_u_u(((p_37 < p_38.f0) == (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((*l_878) = ((void*)0 != l_877)), l_869)), 1)) != p_35.f0) || (***l_835))), 65535UL));
        }
    }
    else
    {
        short l_881 = (-1L);
        union U0 *l_882 = &l_805;
        short ***l_887 = &g_187;
        short ****l_886 = &l_887;
        short * const **l_890 = &l_889;
        union U1 * const l_896 = &g_73;
        int **l_903 = &l_798;
        int ***l_902 = &l_903;
        int ****l_901 = &l_902;
        unsigned l_906 = 0x6A25163AL;
        int *l_910 = (void*)0;
        int l_947 = 0xB7953CE7L;
        int ***l_967 = &l_836;
        union U0 *l_970 = (void*)0;
        int l_971 = 0x8B054D44L;
        unsigned char l_978 = 255UL;
        union U0 *****l_979 = &g_839;
        unsigned char l_1038 = 0xB8L;
        union U0 ** const **l_1062 = (void*)0;
        union U0 **l_1065 = (void*)0;
        union U0 ***l_1064 = &l_1065;
        union U0 ****l_1063 = &l_1064;
        union U0 *****l_1066 = (void*)0;
        union U0 *****l_1067 = &g_839;
        union U0 *****l_1068 = (void*)0;
        union U0 *****l_1069 = (void*)0;
        union U0 *****l_1070 = (void*)0;
        union U0 *****l_1071 = (void*)0;
        union U0 *****l_1072 = (void*)0;
        union U0 *****l_1073 = &l_1063;
        unsigned char *l_1119 = (void*)0;
        unsigned char **l_1118 = &l_1119;
        for (l_802 = 0; (l_802 >= 13); l_802++)
        {
            union U0 *l_883 = &g_76;
            int *l_884 = (void*)0;
            int *l_885 = &g_516;
            (*l_885) = ((((p_38.f1 && ((+g_516) ^ ((l_881 | (&g_315 != (g_739 , (p_37 , l_845)))) && g_520))) , 255UL) >= p_34) <= l_881);
        }
        if ((((*l_886) = &g_187) != (l_890 = l_888)))
        {
            union U1 **l_893 = &g_550;
            int **l_894 = &g_233;
            int **l_895 = &l_849;
            union U1 *l_898 = &g_73;
            union U1 **l_897 = &l_898;
            union U0 *l_899 = &l_805;
            unsigned short *l_900 = &g_76.f0;
            const unsigned short l_919 = 0x1B99L;
            unsigned short l_940 = 0UL;
            union U0 *l_943 = &g_76;
            unsigned *l_953 = &g_73.f1;
            if (((safe_rshift_func_uint8_t_u_s((g_905 = g_9), (**g_134))) || 0L))
            {
                union U1 * const l_907 = (void*)0;
                const union U0 ***l_915 = (void*)0;
                const union U0 ****l_914 = &l_915;
                const union U0 *****l_913 = &l_914;
                unsigned short *l_916 = (void*)0;
                unsigned short *l_917 = &g_76.f0;
                unsigned short *l_918 = &l_805.f0;
                int l_924 = 1L;
                char l_933 = 0L;
                g_233 = &g_516;
                (*g_233) = (*g_233);
                (**l_836) &= (l_906 <= ((*g_281) && p_35.f0));
                if ((((safe_sub_func_int8_t_s_s(p_35.f0, l_919)) , (void*)0) != &g_626))
                {
                    int l_925 = 6L;
                    unsigned char *l_930 = (void*)0;
                    unsigned char *l_931 = &g_315;
                    const int l_932 = (-1L);
                    int l_941 = 0x80F4B95CL;
                    int l_942 = 0x468EDB0AL;
                    (***l_835) = (*g_281);
                    l_942 |= ((l_941 = ((***l_835) = (safe_mod_func_int32_t_s_s(0x2B6C3E2BL, ((safe_rshift_func_int16_t_s_s(((((((*l_918) ^= p_36) >= (((safe_mod_func_int16_t_s_s(3L, l_933)) != (0xCF693798L != (**l_894))) && l_940)) == ((p_37 || g_73.f1) < l_924)) > 0xC0L) <= 0xA311C290L), 10)) , 0x568A0004L))))) | 0x3595B7D2L);
                }
                else
                {
                    (*g_233) = p_36;
                }
            }
            else
            {
                union U1 *l_946 = &g_73;
                int *l_959 = &g_516;
                l_943 = (void*)0;
                for (g_315 = 0; (g_315 != 2); ++g_315)
                {
                    unsigned short l_954 = 65535UL;
                    int l_955 = 0x638A3FF5L;
                    if ((*g_281))
                    {
                        (*l_893) = l_946;
                    }
                    else
                    {
                        if (p_38.f1)
                            break;
                        if (p_36)
                            break;
                    }
                    l_947 = p_35.f0;
                    for (g_7 = 26; (g_7 <= (-20)); --g_7)
                    {
                        int *l_956 = &l_947;
                        (*g_363) = func_62(p_38.f0, g_73);
                        (*l_956) |= (l_955 &= ((*g_364) , ((p_34 || 7L) != g_728)));
                        (*l_897) = ((*l_893) = l_946);
                        if ((*g_281))
                            continue;
                    }
                    return p_38.f1;
                }
                (*l_959) &= (safe_lshift_func_uint16_t_u_u(g_13, 0));
            }
            l_797 = (((void*)0 == (*g_838)) ^ (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((0x01L < 0x14L), 7)), (safe_unary_minus_func_uint32_t_u((safe_mod_func_int8_t_s_s((((((*g_122) = p_35.f0) , g_194) < (**g_134)) > l_971), (*g_135))))))));
            (*l_836) = (void*)0;
        }
        else
        {
            unsigned short l_972 = 65533UL;
            int l_973 = (-3L);
            union U0 ******l_980 = &l_837;
            unsigned short *l_981 = (void*)0;
            unsigned short *l_982 = &l_972;
            unsigned short *l_983 = (void*)0;
            union U1 * const l_990 = (void*)0;
            unsigned **l_996 = &l_799;
            unsigned l_999 = 0x79EE5AFEL;
            union U0 **l_1010 = &g_364;
            union U0 ***l_1009 = &l_1010;
            union U0 ****l_1008 = &l_1009;
            unsigned char *l_1024 = &g_27;
            const unsigned char l_1037 = 254UL;
            unsigned short l_1042 = 0x94CCL;
            int *l_1048 = &g_7;
            if ((l_972 , ((l_973 > ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(g_739.f0, ((!l_978) | p_38.f1))) != (((((l_979 != ((*l_980) = (void*)0)) , p_34) != (g_76.f0 = ((*l_982) = 0xB695L))) > p_38.f1) , (*g_135))), 5)) == (-1L))) , (*g_281))))
            {
                union U0 *l_993 = &g_76;
                const unsigned **l_995 = &g_168;
                int l_1012 = 0xE86A9352L;
                union U1 * const l_1020 = &g_73;
                (*l_836) = &g_362;
                for (l_802 = (-16); (l_802 <= (-13)); ++l_802)
                {
                    union U0 *l_988 = &l_805;
                    int l_989 = 1L;
                    union U0 **l_991 = &l_970;
                    union U1 * const l_992 = &g_73;
                    int l_1013 = 0x240082AEL;
                    union U0 * const ***l_1014 = (void*)0;
                    if ((g_360 | ((*l_982) = (((((safe_mod_func_int32_t_s_s(func_65(&g_516, &g_73, l_988, l_989, (+((**g_134) ^ p_37))), l_989)) && 0xABE4L) , (void*)0) != (*g_838)) ^ 0x36B3L))))
                    {
                        short l_994 = 1L;
                        int *l_997 = &l_797;
                        l_994 = (-1L);
                        (*l_997) = (((*g_281) & (g_330 & (8L != (l_995 == (p_35 , l_996))))) < 0x9965EF15L);
                    }
                    else
                    {
                        int *l_998 = &l_797;
                        (*l_998) &= ((void*)0 != &g_626);
                        l_999 ^= ((((*l_896) = p_38) , l_910) == l_910);
                        (*l_998) &= (1UL == (((safe_sub_func_int16_t_s_s(p_38.f1, p_38.f1)) > (((*l_982) = p_36) > g_73.f1)) && 0x6906L));
                    }
                    if ((safe_sub_func_int8_t_s_s(((*g_281) ^ (safe_add_func_uint16_t_u_u((((*l_979) = l_1008) == (((safe_unary_minus_func_int32_t_s((l_1012 = p_38.f0))) && ((l_989 = p_37) == l_1013)) , l_1014)), p_38.f0))), 255UL)))
                    {
                        union U1 * const l_1015 = &g_73;
                        union U0 *l_1021 = &g_76;
                        int l_1022 = 0x75157D89L;
                        int *l_1023 = (void*)0;
                        int *l_1025 = &l_1012;
                        (*l_1025) |= (p_34 & g_362);
                    }
                    else
                    {
                        int *l_1026 = &l_1013;
                        union U0 *l_1032 = &g_76;
                        l_1026 = &l_1013;
                        l_989 = (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*l_1026) ^= ((l_1037 == g_194) && p_35.f0)), p_38.f1)), 2));
                        l_989 = l_973;
                    }
                    if ((*g_281))
                        break;
                    (*l_836) = &l_973;
                }
            }
            else
            {
                union U0 *l_1046 = &g_76;
                int l_1047 = 0x61C57E80L;
                const char l_1061 = 0x3CL;
                g_516 = ((!(~(l_1038 = p_38.f1))) && l_1039);
                for (l_824 = 0; (l_824 == (-8)); l_824 = safe_sub_func_uint16_t_u_u(l_824, 3))
                {
                    int *l_1045 = &l_971;
                    int l_1049 = 0xAB865A33L;
                    unsigned l_1059 = 0x1BD7AF7CL;
                    char l_1060 = 0x2BL;
                    l_1042 = p_37;
                    if ((safe_mod_func_uint16_t_u_u(g_315, l_1049)))
                    {
                        union U1 * const l_1050 = &g_73;
                        int l_1051 = (-1L);
                        unsigned char *l_1056 = &g_315;
                        (*l_1045) = (func_65(((**l_967) = &l_1049), l_1050, (l_1051 , func_62((((*l_799) = ((safe_add_func_uint8_t_u_u(((*l_1056) ^= (g_27 = (safe_mod_func_uint8_t_u_u(p_38.f1, (**g_134))))), (((safe_lshift_func_int8_t_s_u((**g_134), g_905)) | g_109) | (*g_281)))) > l_1059)) != 0L), p_38)), g_905, l_1060) < l_1061);
                        (*l_1031) ^= (((p_36 | ((0xC0L & p_36) ^ (*l_1045))) <= ((0x17L > (&g_839 == &g_839)) || (p_37 & ((((1L != 4294967295UL) ^ 0x744BL) == 4294967295UL) < p_36)))) , l_1051);
                    }
                    else
                    {
                        return g_330;
                    }
                }
            }
        }
        if ((l_1062 != ((*l_1073) = l_1063)))
        {
            const int l_1078 = (-1L);
            int *l_1079 = &g_362;
            unsigned **l_1085 = &l_799;
            unsigned ***l_1084 = &l_1085;
            short *l_1086 = &g_88;
            int l_1103 = 0xD32887A2L;
            unsigned short *l_1124 = &l_805.f0;
            unsigned short l_1132 = 0xB471L;
            int l_1153 = 4L;
            (*l_1031) |= (p_35.f0 > (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((+(&g_109 != &g_315)), l_1078)) || p_35.f0), 3)));
            for (g_109 = 0; (g_109 == 2); g_109 = safe_add_func_uint32_t_u_u(g_109, 4))
            {
                int *l_1098 = (void*)0;
                int *l_1100 = &g_7;
                int l_1101 = 1L;
                union U0 *l_1105 = &l_805;
                unsigned short l_1108 = 1UL;
                int *l_1123 = &l_1101;
                for (l_824 = 0; (l_824 != (-9)); --l_824)
                {
                    int *l_1092 = &g_12;
                    int l_1097 = 1L;
                    int **l_1106 = &l_849;
                    unsigned char *l_1107 = &g_27;
                    if (((*l_1079) = (l_1092 != ((**l_902) = (void*)0))))
                    {
                        int *l_1099 = &g_7;
                        unsigned short *l_1102 = &g_76.f0;
                        union U0 *l_1104 = &g_76;
                        l_1103 |= ((safe_lshift_func_uint16_t_u_u(((*l_1102) = ((safe_mod_func_uint16_t_u_u(((void*)0 == &l_890), (func_40(l_1097, l_1098, func_45((l_1100 = l_1099), l_1031, l_1031, &g_73, ((*l_1086) = (g_73.f0 != l_1101)))) , 0x4A64L))) >= 0x286BL)), 14)) || (-1L));
                        l_1105 = l_1104;
                        (*l_1079) &= p_36;
                    }
                    else
                    {
                        l_1101 |= l_1097;
                        (*l_1031) = (*l_1079);
                    }
                    (**l_967) = &l_1101;
                    (*l_1106) = ((*l_836) = (void*)0);
                    (*l_1031) |= (((*l_1107) = 0x30L) | p_38.f0);
                }
                if (((p_38.f1 <= (((**l_888) != (*g_187)) , l_1108)) > (safe_add_func_uint16_t_u_u(p_38.f0, (*l_1079)))))
                {
                    int l_1114 = 1L;
                    const unsigned short **l_1125 = (void*)0;
                    const unsigned short **l_1126 = (void*)0;
                    const unsigned short *l_1128 = &g_1129;
                    const unsigned short **l_1127 = &l_1128;
                    for (p_38.f1 = 22; (p_38.f1 != 58); ++p_38.f1)
                    {
                        (*l_793) = &g_73;
                        if ((*g_281))
                            continue;
                    }
                    if ((((((l_1108 > l_1113) > (p_35.f0 ^ l_1114)) >= g_194) || p_37) < p_34))
                    {
                        unsigned short *l_1117 = &l_805.f0;
                        unsigned char ***l_1120 = &l_1118;
                        (*l_1031) = (l_1101 = (safe_mod_func_uint16_t_u_u(((*l_1117) = l_1114), g_905)));
                        (*l_1120) = l_1118;
                        if (l_1121)
                            break;
                    }
                    else
                    {
                        int *l_1122 = &g_516;
                        l_1122 = &l_1114;
                        l_1123 = (g_85 , &g_362);
                        l_1123 = &l_1101;
                    }
                    (*l_1031) &= (((***l_1084) &= (((*l_1123) &= p_37) > g_520)) , (*l_1123));
                    (*l_1123) ^= (((*l_1079) , l_1124) == ((*l_1127) = g_472));
                }
                else
                {
                    unsigned l_1137 = 0UL;
                    (**l_967) = &g_516;
                    (*l_1123) ^= (safe_mod_func_uint32_t_u_u((l_1132 & ((((+g_12) , (g_360 == ((safe_rshift_func_int8_t_s_s((*g_135), p_34)) && (***l_967)))) > ((**g_134) != ((safe_mod_func_int8_t_s_s((*g_135), (g_27 |= g_362))) , (***l_967)))) < (***l_967))), l_1137));
                    (*l_1079) = (safe_add_func_int16_t_s_s((*l_1123), (**l_836)));
                }
                for (l_1103 = (-12); (l_1103 != 4); l_1103 = safe_add_func_uint8_t_u_u(l_1103, 1))
                {
                    short l_1150 = 0x2F2CL;
                    (*l_1123) = (((**g_134) | ((*g_952) , ((+0xD321L) || 1L))) && (((((((*l_1079) = ((((0UL ^ 0x23L) < (p_38.f0 != ((safe_mod_func_int32_t_s_s((*g_281), (*l_1079))) , (-1L)))) & g_88) , (-1L))) , p_37) & g_739.f1) , (*g_135)) & g_73.f1) < p_38.f1));
                    (*l_1079) |= ((safe_sub_func_uint32_t_u_u((((*l_845) = p_38.f0) || p_37), ((safe_sub_func_int8_t_s_s((p_34 <= p_34), (safe_mod_func_int32_t_s_s((*g_281), ((***l_1084) = p_38.f0))))) , (l_1150 != (p_38.f0 == p_35.f0))))) <= (**g_134));
                    if ((*g_281))
                        continue;
                    g_1154 |= (safe_mod_func_int8_t_s_s(0xB3L, l_1153));
                }
                if (p_38.f0)
                    break;
            }
            return (*l_1079);
        }
        else
        {
            (*g_363) = func_62(p_36, p_38);
            (*l_1031) = p_37;
        }
    }
    return p_36;
}







static union U0 func_40(short p_41, int * p_42, unsigned char * p_43)
{
    int *l_784 = (void*)0;
    int l_785 = 9L;
    char *l_788 = &g_360;
    char *l_790 = &g_13;
    char **l_789 = &l_790;
    int *l_791 = &g_362;
    union U0 l_792 = {0x74E0L};
    l_785 = (*g_281);
    (*l_791) ^= (((l_785 > ((safe_mod_func_int8_t_s_s((*g_135), (g_330 &= (*g_135)))) != (((0xB569L > (p_41 == (g_13 , (l_788 == ((*l_789) = (void*)0))))) , l_785) ^ 1L))) != 0xB2D8L) >= 4294967289UL);
    return l_792;
}







static unsigned char * func_45(int * p_46, int * p_47, int * p_48, const union U1 * p_49, short p_50)
{
    short l_742 = 0x6C49L;
    int *l_746 = &g_12;
    int **l_745 = &l_746;
    int ***l_744 = &l_745;
    int *** const *l_743 = &l_744;
    int *** const **l_747 = (void*)0;
    int *** const **l_748 = (void*)0;
    int *** const **l_749 = &l_743;
    int l_750 = 1L;
    union U1 * const l_753 = &g_73;
    union U0 *l_754 = &g_76;
    unsigned char *l_781 = &g_27;
    if (((safe_mod_func_uint16_t_u_u(0x8382L, ((((((l_742 & (l_750 = (p_50 == (((*l_749) = l_743) == (void*)0)))) , (((safe_lshift_func_int16_t_s_s(0L, 6)) && p_50) ^ l_750)) , &g_76) == l_754) || 0UL) | l_742))) | (*g_281)))
    {
        int **l_755 = (void*)0;
        int **l_756 = (void*)0;
        int **l_757 = &g_233;
        (*l_757) = &g_362;
    }
    else
    {
        unsigned char l_768 = 0xB9L;
        unsigned char *l_771 = (void*)0;
        unsigned char *l_772 = &g_315;
        int l_773 = 0xF1D7E0A2L;
        char l_774 = (-4L);
        int l_775 = (-1L);
        int *l_776 = &g_9;
        (*l_776) ^= ((safe_sub_func_uint16_t_u_u(l_750, (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((((((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_768 , (((l_750 < 1L) , (l_775 = (((((safe_sub_func_int32_t_s_s(p_50, l_750)) , (l_773 = (((*l_772) = l_768) , ((*l_772) |= g_330)))) && p_50) & l_774) || 0x5A98L))) < 4294967295UL)), g_360)), p_50)) < p_50) >= g_194) & p_50) == 0x1861D7EAL) <= (-1L)), 4)), g_12)))) == l_768);
        for (g_88 = 0; (g_88 == 2); g_88 = safe_add_func_int8_t_s_s(g_88, 5))
        {
            int **l_779 = (void*)0;
            int **l_780 = &g_233;
            (*l_776) = p_50;
            (*l_780) = &l_775;
        }
    }
    return l_781;
}







static const union U0 func_51(unsigned char p_52, unsigned char p_53, unsigned p_54, unsigned p_55)
{
    union U1 * const l_72 = &g_73;
    int l_74 = (-3L);
    int l_77 = 0x3BC0E3E0L;
    int l_305 = (-1L);
    unsigned char *l_314 = &g_315;
    union U0 *l_316 = (void*)0;
    union U0 l_326 = {65535UL};
    int **l_358 = (void*)0;
    int l_418 = (-5L);
    int *l_428 = &l_418;
    int **l_427 = &l_428;
    const union U1 *l_437 = &g_73;
    const union U1 ** const l_436 = &l_437;
    int * const **l_452 = &g_121;
    short l_462 = 0xC794L;
    short *** const l_465 = &g_187;
    int *l_473 = &g_362;
    int *l_532 = &g_516;
    unsigned l_535 = 1UL;
    short l_540 = 8L;
    int l_552 = 0x851D700FL;
    int *l_559 = &g_362;
    short l_563 = 0xF530L;
    unsigned *l_592 = &g_73.f0;
    unsigned ** const l_591 = &l_592;
    unsigned **l_594 = &l_592;
    unsigned ***l_593 = &l_594;
    short ***l_608 = &g_187;
    union U1 *l_618 = (void*)0;
    int * const *l_639 = &l_532;
    int * const **l_638 = &l_639;
    const union U0 l_669 = {0UL};
    const unsigned *l_727 = &g_728;
    for (p_53 = 0; (p_53 > 18); p_53++)
    {
        int *l_71 = (void*)0;
        union U0 *l_75 = &g_76;
        short *l_84 = &g_85;
        short *l_86 = (void*)0;
        short *l_87 = &g_88;
        union U1 l_301 = {0xE2EDBE4EL};
        union U0 **l_304 = &l_75;
    }
    if ((((p_54 || (l_305 | (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(1UL, p_53)), p_52)))) , l_74) & p_54))
    {
        int **l_317 = &g_233;
        union U0 l_322 = {65535UL};
        unsigned short *l_323 = &g_76.f0;
        char *l_329 = &g_330;
        short l_333 = 0xB1DDL;
        int *l_351 = &g_7;
        int **l_350 = &l_351;
        unsigned short l_367 = 0UL;
        const short *l_373 = (void*)0;
        const short **l_372 = &l_373;
        unsigned l_392 = 3UL;
        unsigned *l_412 = &g_194;
        unsigned **l_411 = &l_412;
        union U1 *l_426 = &g_73;
        union U1 **l_425 = &l_426;
        union U0 *l_429 = (void*)0;
        short *l_471 = (void*)0;
        unsigned short l_495 = 0x5698L;
        int l_514 = (-1L);
        (*l_317) = &g_9;
        for (g_73.f1 = 0; (g_73.f1 <= 8); g_73.f1 = safe_add_func_uint32_t_u_u(g_73.f1, 2))
        {
            for (p_53 = 0; (p_53 > 34); ++p_53)
            {
                if ((*g_281))
                    break;
            }
        }
        if ((((*l_329) = (l_322 , (((*l_323) = p_53) | (safe_rshift_func_int8_t_s_s((l_326 , (((*g_135) = ((**l_317) , (safe_add_func_int32_t_s_s(p_52, (*g_281))))) , 0L)), 0))))) >= 0x3EL))
        {
            unsigned short *l_356 = &l_326.f0;
            unsigned short *l_357 = &l_322.f0;
            int l_359 = 0x85546EA2L;
            int *l_361 = &g_362;
            union U0 **l_365 = &g_364;
            unsigned l_370 = 0x8E6E7CD2L;
            union U0 * const ***l_401 = (void*)0;
            unsigned **l_413 = &l_412;
            union U1 *l_423 = &g_73;
            union U1 **l_422 = &l_423;
            (*l_361) |= (safe_mod_func_int32_t_s_s((l_333 == ((*g_233) = ((safe_lshift_func_int8_t_s_u(0x32L, 4)) <= l_74))), (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((g_85 |= p_54), ((g_360 = (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((&g_121 == (void*)0) , (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((l_350 != ((((*l_323) = g_27) >= ((*l_357) = ((*l_356) = (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(p_54, 8UL)), p_53))))) , l_358)) != p_52) ^ l_359), l_74)), 6))), 14)), p_52)) == 0x55612024L) , 65535UL)) && 7L))) > l_77), p_54)) , g_27), p_52))));
            (*l_317) = (void*)0;
            if (((~l_77) & ((g_363 != (l_305 , l_365)) | p_52)))
            {
                union U1 * const l_366 = &g_73;
                char *l_369 = &g_360;
                union U0 *l_371 = &l_326;
                int l_378 = 5L;
                int *l_379 = &g_12;
                if (l_370)
                {
                    int *l_380 = &l_74;
                    union U1 * const l_391 = (void*)0;
                    unsigned *l_393 = &l_370;
                    int *l_394 = &l_77;
                    (*l_380) |= (((*l_361) &= (l_378 &= g_9)) >= 0x382CL);
                    (*l_394) &= ((safe_mod_func_uint32_t_u_u(4294967291UL, (((safe_mod_func_uint32_t_u_u((*l_380), (safe_sub_func_int32_t_s_s(((((*l_393) = ((safe_mod_func_uint16_t_u_u(0UL, (+(0xE151L > ((0x8F001C75L != ((((safe_lshift_func_uint16_t_u_u(p_55, p_52)) == (*l_361)) , 0UL) , l_378)) , 0L))))) > l_392)) <= p_52) || g_360), 0xA6DF6E22L)))) , 0x6695L) | 1UL))) != l_378);
                }
                else
                {
                    (*l_361) = 2L;
                }
                (*l_361) |= l_378;
                for (l_333 = 0; (l_333 > (-12)); l_333 = safe_sub_func_uint32_t_u_u(l_333, 2))
                {
                    union U0 l_397 = {0x0A4DL};
                    if ((l_397 , l_378))
                    {
                        return l_322;
                    }
                    else
                    {
                        int *l_398 = &l_74;
                        union U1 *l_400 = (void*)0;
                        union U1 **l_399 = &l_400;
                        union U0 * const ****l_402 = &l_401;
                        (*l_361) = p_54;
                        (*l_317) = l_398;
                        (*l_399) = &g_73;
                        (*l_361) ^= (func_65(&g_362, (*l_399), (*l_365), (((*l_402) = ((p_55 >= (**g_134)) , l_401)) == (void*)0), ((*l_398) || (*g_281))) > g_7);
                    }
                    for (l_370 = (-21); (l_370 < 46); ++l_370)
                    {
                        return l_397;
                    }
                    if ((*g_281))
                    {
                        (*l_317) = &l_378;
                    }
                    else
                    {
                        int *l_405 = &l_77;
                        union U0 **l_406 = &l_316;
                        (*l_405) = ((*l_361) = 0x811A6040L);
                        (*l_406) = ((*l_365) = func_62(p_55, (*l_72)));
                    }
                }
            }
            else
            {
                short *l_421 = &l_333;
                union U1 ***l_424 = &l_422;
                int l_430 = 1L;
                union U0 *l_431 = &l_326;
                unsigned char l_447 = 255UL;
                (*l_361) = ((safe_add_func_int16_t_s_s(((((1L && (p_54 >= (safe_lshift_func_int8_t_s_s((*l_361), 3)))) | ((((void*)0 == &p_54) || p_52) , (l_411 == l_413))) == p_53) , 0x6B01L), p_54)) > (*l_361));
                (*l_361) = 0x314F9FACL;
                (*l_361) &= (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((((*g_135) , l_418) , ((p_52 || (4294967290UL != ((**l_411) = p_52))) , ((*l_421) = ((safe_mod_func_uint32_t_u_u(p_55, p_53)) >= p_52)))) ^ p_55), 3)), l_326.f0));
                if ((((*l_424) = l_422) == l_425))
                {
                    int *l_432 = &l_430;
                    l_74 = (((l_358 = l_358) == ((g_73.f0 | p_53) , l_427)) <= (*l_361));
                    (*l_432) = ((*l_361) = (*l_361));
                    (*l_361) |= l_430;
                    for (l_370 = 5; (l_370 <= 50); l_370 = safe_add_func_uint32_t_u_u(l_370, 8))
                    {
                        if (p_53)
                            break;
                        (*l_317) = &g_362;
                        if (p_53)
                            continue;
                    }
                }
                else
                {
                    int *l_435 = (void*)0;
                    const union U1 **l_439 = &l_437;
                    const union U1 ***l_438 = &l_439;
                    unsigned l_446 = 0xBBF8BFF3L;
                    unsigned l_448 = 0x05693F35L;
                    (*l_361) = 5L;
                    (*l_317) = l_435;
                    (*l_438) = l_436;
                    if ((*l_361))
                    {
                        (*l_361) = (0xF9B8L > (l_447 >= ((g_27 > ((*l_329) = 0x42L)) != 4UL)));
                        (*l_317) = &g_362;
                    }
                    else
                    {
                        l_448 |= (l_447 > ((*l_314) = g_330));
                        l_77 = (safe_sub_func_int32_t_s_s((l_74 = p_52), p_54));
                        (*l_317) = &g_362;
                    }
                }
            }
        }
        else
        {
            short *** const l_451 = (void*)0;
            int * const ***l_453 = &l_452;
            int *l_466 = (void*)0;
            const int l_482 = 0x2B7C5AFDL;
            int l_483 = 0xAA4DC28CL;
            union U1 * const l_497 = (void*)0;
            char **l_513 = &g_135;
            union U0 l_521 = {0x1804L};
            if (((l_451 == (((&l_350 == ((*l_453) = l_452)) >= ((safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((!0xC008L), (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((0L ^ p_53), 11)), l_462)))) , p_54), (safe_sub_func_uint16_t_u_u(p_52, p_54)))) && 65535UL)) , l_465)) != l_77))
            {
                (**l_317) = (0L >= 8L);
            }
            else
            {
                union U1 * const l_474 = &g_73;
                int l_475 = 0xE20E82DDL;
                const union U0 l_476 = {2UL};
                short *l_531 = &g_85;
                if ((((l_466 == (((*l_473) = (((safe_lshift_func_int16_t_s_u(((((safe_add_func_uint32_t_u_u(((*g_187) != (g_472 = l_471)), ((*l_412) &= p_52))) , func_65(l_473, l_474, &l_322, (p_54 , (p_52 , p_52)), (*g_135))) | g_7) ^ (*l_473)), 13)) < g_73.f1) , 0xDD35ECE6L)) , (void*)0)) <= g_315) == l_475))
                {
                    return l_476;
                }
                else
                {
                    short l_481 = 0x0A19L;
                    union U1 * const l_486 = &g_73;
                    unsigned short l_494 = 0x4474L;
                    union U0 *l_499 = (void*)0;
                    (*l_317) = (void*)0;
                    l_483 |= ((~(safe_rshift_func_uint8_t_u_s(0x75L, (safe_lshift_func_uint16_t_u_u(l_481, 11))))) == l_482);
                    for (l_392 = 0; (l_392 == 38); l_392++)
                    {
                        union U0 *l_487 = &l_326;
                        (*l_473) ^= p_52;
                    }
                    if ((0UL ^ l_495))
                    {
                        int *l_496 = (void*)0;
                        union U1 *l_498 = &g_73;
                        int *l_510 = &g_9;
                        (*l_510) ^= (((*l_473) , &g_27) == &p_53);
                        (**l_453) = &g_122;
                        l_514 = ((*l_473) = ((safe_add_func_uint16_t_u_u(0x85A1L, p_55)) && (l_513 != (void*)0)));
                    }
                    else
                    {
                        unsigned l_515 = 4294967295UL;
                        int l_517 = (-1L);
                        const char *l_519 = &g_520;
                        const char **l_518 = &l_519;
                        const union U0 l_522 = {6UL};
                        g_9 |= ((!(((((l_515 , (l_517 &= (g_516 <= p_53))) || (((((*l_518) = (*l_513)) == (void*)0) , (l_521 , l_476)) , (*g_135))) ^ (*g_135)) == (*l_473)) , 1UL)) == l_476.f0);
                        return l_522;
                    }
                }
                (*l_473) ^= ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(4294967289UL, (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_475 && (((void*)0 == (*g_121)) , (((*l_474) = g_73) , 0x6184F68CL))), 9)), p_53)))) & ((*l_531) |= l_476.f0)), 3)) , (p_54 , 0xA1BBB74AL));
            }
            (*l_317) = l_532;
            (**l_317) &= p_53;
        }
        (*l_532) |= ((247UL < p_55) | p_52);
    }
    else
    {
        int l_536 = 0x09AE3744L;
        unsigned l_555 = 0x6750C976L;
        const union U0 l_566 = {0UL};
        if (l_536)
        {
            union U1 l_539 = {0x4C190B22L};
            int **l_547 = &g_233;
            union U1 **l_548 = (void*)0;
            union U1 **l_549 = (void*)0;
            union U0 *l_551 = (void*)0;
            unsigned *l_553 = &l_535;
            short l_554 = 0xDFCFL;
            const unsigned short * const l_556 = &l_326.f0;
            (*l_532) = (+(+(((((((*l_553) = (safe_mod_func_uint16_t_u_u((l_539 , 0x2EF0L), (l_540 , ((safe_mod_func_int16_t_s_s(p_55, 0x1F35L)) & ((safe_mod_func_uint16_t_u_u((p_52 , (p_53 && l_552)), 0x5E11L)) >= 0xF34AL)))))) < l_554) <= (*g_135)) || l_555) , l_556) == (void*)0)));
            (*g_233) = (l_555 != l_536);
            (*l_473) ^= ((!((l_553 != (*g_121)) >= p_55)) ^ (safe_sub_func_int32_t_s_s(((*l_532) = p_54), (**l_547))));
            return (**g_363);
        }
        else
        {
            int **l_560 = &l_532;
            (*l_560) = (((*l_532) ^= 0x4E8DL) , l_559);
            (**l_560) |= (*g_281);
            for (g_76.f0 = 0; (g_76.f0 >= 19); g_76.f0 = safe_add_func_int8_t_s_s(g_76.f0, 6))
            {
                (*l_560) = &g_516;
                if (l_563)
                    continue;
                for (g_330 = 0; (g_330 < 4); ++g_330)
                {
                    return l_566;
                }
            }
            l_536 ^= ((*l_532) = (*g_281));
        }
        for (p_54 = 18; (p_54 > 51); p_54 = safe_add_func_int8_t_s_s(p_54, 6))
        {
            unsigned short l_572 = 65535UL;
            char *l_578 = &g_13;
            unsigned char l_590 = 246UL;
            (*g_233) = ((*l_532) = p_52);
            for (l_555 = 0; (l_555 <= 58); l_555 = safe_add_func_uint32_t_u_u(l_555, 5))
            {
                short l_571 = (-1L);
                unsigned short *l_575 = &g_76.f0;
                char *l_579 = &g_360;
                unsigned *l_584 = &g_73.f1;
                int l_587 = 0x813B9A40L;
                unsigned *l_588 = &l_535;
                unsigned short *l_589 = &l_326.f0;
                (*l_436) = ((l_571 , ((l_572 | ((*g_364) , ((safe_lshift_func_uint16_t_u_u(((*l_575) = p_53), (p_54 <= (safe_sub_func_uint16_t_u_u((((*g_134) = l_578) == l_579), l_555))))) > 65530UL))) != 4294967289UL)) , &g_73);
                l_536 = l_571;
                (*g_233) = ((((((safe_add_func_uint32_t_u_u((1L || (((g_88 = l_572) | (safe_add_func_uint32_t_u_u(((((*l_584) = p_53) , (safe_add_func_int8_t_s_s(((l_572 , ((*l_532) & ((((l_587 = ((*l_532) | (*l_473))) <= (1UL || ((*l_589) &= ((g_76.f2 = ((*l_588) ^= ((g_73.f1 && g_7) >= l_571))) <= 4294967294UL)))) >= 7UL) <= 0x98L))) ^ l_590), g_520))) | (*g_135)), 1UL))) & (*l_473))), l_555)) & (*l_473)) <= 1UL) , l_590) ^ (*g_233)) < 0x89L);
                (*g_233) = p_55;
            }
        }
        (*l_473) = (&g_73 == &g_73);
    }
    (*l_593) = l_591;
    for (p_55 = 0; (p_55 == 5); ++p_55)
    {
        int **l_597 = (void*)0;
        int *l_633 = &g_516;
        union U1 * const l_640 = &g_73;
        int ***l_645 = &l_427;
        int ****l_644 = &l_645;
        union U0 *l_666 = &g_76;
        short ** const *l_674 = (void*)0;
        int ** const *l_676 = &l_358;
        int ** const **l_675 = &l_676;
        int l_736 = 0xACA1CE4EL;
        union U0 *l_737 = (void*)0;
        (*g_363) = &l_326;
        (*l_559) = p_54;
        if (((*l_532) = (l_597 == &l_559)))
        {
            short *l_606 = (void*)0;
            int l_607 = (-4L);
            int *l_609 = (void*)0;
            int *l_610 = &l_74;
            int ***l_629 = &l_427;
            int ****l_628 = &l_629;
            short l_642 = 0x78A7L;
            union U1 * const l_646 = &g_73;
            const union U0 l_661 = {7UL};
            union U0 *l_663 = &g_76;
            (*l_610) |= (((*l_559) || ((*l_559) , p_52)) <= ((((*l_72) , (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0xC0F4L, (l_607 = (((*g_281) , (p_54 & (safe_mod_func_int8_t_s_s(((**g_134) = (safe_mod_func_int8_t_s_s((0xD261E464L || (p_54 && 0x4B9FL)), (**g_134)))), (*l_473))))) ^ p_53)))), p_54))) , (void*)0) != l_608));
            for (l_77 = 11; (l_77 >= 20); l_77 = safe_add_func_uint16_t_u_u(l_77, 6))
            {
                int l_621 = (-1L);
                int l_622 = 0L;
                int *****l_627 = (void*)0;
                unsigned short *l_630 = &l_326.f0;
                union U0 *l_641 = (void*)0;
                union U1 l_643 = {4294967287UL};
                (*l_532) = (*g_281);
                for (g_109 = 0; (g_109 != 47); g_109 = safe_add_func_int8_t_s_s(g_109, 3))
                {
                    const unsigned l_615 = 0x5E03390AL;
                    union U1 **l_619 = &g_550;
                    unsigned short *l_620 = (void*)0;
                    const union U0 l_623 = {0UL};
                    (*l_473) = (~(((*l_314) = ((p_55 < ((*l_592) ^= p_55)) || ((p_53 > l_615) && ((((**l_594) &= (((*l_619) = l_618) != (void*)0)) && (((((g_76.f0 = (!l_615)) & p_54) != (-6L)) , 1UL) < l_621)) | p_53)))) != 0x2DL));
                    l_622 |= (*l_610);
                    return l_623;
                }
                if ((safe_add_func_int16_t_s_s(((l_628 = g_626) == ((((*l_630) = 6UL) > ((safe_lshift_func_uint8_t_u_s((((*l_532) = (p_53 || ((*g_550) , p_55))) > l_622), 3)) == p_55)) , l_644)), 0L)))
                {
                    int l_650 = 0x3D320FFDL;
                    union U1 * const l_664 = &l_643;
                    int l_667 = 1L;
                    int **l_668 = &l_473;
                    if (p_52)
                        break;
                    if ((*l_473))
                    {
                        int **l_649 = &l_609;
                        (*l_559) = (safe_sub_func_uint8_t_u_u(p_55, p_53));
                        (*l_559) ^= p_55;
                    }
                    else
                    {
                        const unsigned short l_662 = 65532UL;
                        int *l_665 = &g_362;
                        l_663 = ((*g_363) = func_62(l_650, ((~((g_76.f2 = (((safe_rshift_func_int16_t_s_u((~(+(((**l_639) = (+(safe_sub_func_int16_t_s_s((p_52 >= (safe_mod_func_int16_t_s_s(0x2915L, (0x05F2B56AL ^ (((safe_sub_func_uint8_t_u_u((0x4501L && ((*l_630) |= ((((safe_add_func_int32_t_s_s(p_52, ((((l_661 , (*l_633)) , 0x6FL) == (-1L)) , p_53))) & g_7) , l_643.f1) & l_662))), (*l_633))) , g_330) < 0L))))), g_12)))) || g_12))), p_52)) ^ l_662) , p_53)) > p_55)) , (*l_640))));
                        l_667 &= ((p_53 ^ ((p_52 || (-10L)) != (*g_281))) || 0xB6L);
                    }
                    l_667 = p_52;
                    (*l_668) = &g_362;
                }
                else
                {
                    return l_669;
                }
            }
        }
        else
        {
            union U1 * const l_679 = &g_73;
            int l_682 = 0L;
            const unsigned short *l_701 = &l_326.f0;
            const unsigned *l_726 = &g_194;
            for (l_552 = 0; (l_552 >= 10); l_552++)
            {
                int **l_672 = &l_473;
                unsigned short *l_695 = &g_76.f0;
                union U1 *l_707 = (void*)0;
                const unsigned char l_722 = 2UL;
                int *l_729 = &g_516;
                (*l_672) = &g_9;
                if (((&l_358 == (void*)0) >= (*l_633)))
                {
                    short l_673 = 0x16A3L;
                    int *l_678 = &g_362;
                    union U1 l_685 = {0x0B3B8743L};
                    unsigned l_686 = 0xB2EA80BBL;
                    l_673 = 0x9722FF23L;
                    if (((**l_672) = (l_674 != l_608)))
                    {
                        if ((**l_639))
                            break;
                        (*l_532) |= 0L;
                        (**l_639) = (((**g_363) , &g_168) == &g_168);
                        return (*l_666);
                    }
                    else
                    {
                        int ** const ***l_677 = &l_675;
                        (*l_672) = &g_362;
                        (*l_473) &= (((*l_677) = l_675) != (void*)0);
                        (***l_638) |= ((((p_54 > p_55) || (**g_134)) < g_9) == 0x406DL);
                    }
                }
                else
                {
                    if ((*l_532))
                        break;
                }
                if ((((l_682 == ((**l_594) = ((***l_638) & ((*l_695) = (safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_s(0UL, 15)) > ((safe_add_func_uint8_t_u_u(1UL, g_109)) , (p_53 , (0xF4L <= ((((*g_364) , &g_187) == &g_187) , p_55))))) , 2UL), 0xF0AD12C9L)))))) > (***l_638)) > l_682))
                {
                    char l_705 = 0L;
                    const union U0 l_706 = {0x4402L};
                    if ((**l_672))
                    {
                        int *l_696 = &l_74;
                        unsigned short *l_702 = &l_326.f0;
                        unsigned short **l_703 = &l_695;
                        unsigned short **l_704 = &l_702;
                        (*l_672) = &g_516;
                        (*l_633) = p_54;
                        (*l_559) = (**l_672);
                    }
                    else
                    {
                        return l_706;
                    }
                    l_682 |= ((void*)0 != l_707);
                    g_516 ^= 0xB9F5DFAAL;
                }
                else
                {
                    const union U1 *l_723 = &g_73;
                    if ((safe_rshift_func_uint8_t_u_u(g_76.f0, 0)))
                    {
                        union U1 * const l_710 = &g_73;
                        unsigned ***l_714 = &l_594;
                        (*l_473) = ((&l_326 != &l_326) || ((((p_54 && (p_53 ^ (((func_65((g_233 = &g_362), l_710, (((p_55 != (*g_135)) > (safe_rshift_func_uint16_t_u_u((g_713 == l_714), 11))) , (*g_363)), p_55, (*g_135)) != p_53) && g_520) == l_682))) < g_360) > 0x5E264A91L) || (**l_672)));
                        (*l_559) ^= (0x8FE8BF1EL <= (p_52 == (safe_lshift_func_uint8_t_u_s(0xD3L, 0))));
                        if (p_54)
                            break;
                        g_9 &= (!(g_194 > ((*l_633) > ((*l_559) >= ((***l_593) = 1UL)))));
                    }
                    else
                    {
                        const union U0 l_717 = {0UL};
                        (*l_473) ^= p_52;
                        return l_717;
                    }
                    for (g_516 = 0; (g_516 <= (-26)); --g_516)
                    {
                        (*l_473) = ((safe_add_func_int32_t_s_s((p_55 >= g_85), l_722)) > (*l_559));
                        if (p_55)
                            continue;
                        (*l_436) = l_723;
                        l_74 ^= (((safe_lshift_func_uint8_t_u_s((**l_672), (~p_55))) , p_54) , (l_682 | ((*l_594) == (l_727 = l_726))));
                    }
                }
                if (p_55)
                {
                    (*l_559) &= (((*l_72) = (*l_640)) , (*g_281));
                    (*l_672) = l_729;
                    (*l_729) = p_52;
                }
                else
                {
                    int **l_730 = &g_233;
                    short **l_734 = (void*)0;
                    short **l_735 = &g_472;
                    (*l_730) = (*l_639);
                    for (g_76.f0 = 29; (g_76.f0 < 31); g_76.f0 = safe_add_func_int32_t_s_s(g_76.f0, 1))
                    {
                        unsigned l_733 = 0x7878195AL;
                        l_733 |= (*g_233);
                        (***l_638) = (((*g_364) , (*l_645)) == (void*)0);
                    }
                    l_736 ^= ((((((**l_608) = (**l_608)) != (p_53 , ((*l_735) = l_695))) <= (((**g_134) >= p_55) , (p_52 & (**g_134)))) != (p_55 >= 248UL)) ^ (***l_638));
                }
            }
            (*l_559) &= ((((p_55 , 0xF976L) < (p_52 == (((((!((**l_591) = 4294967295UL)) , (p_52 > (*g_135))) || (*g_135)) , l_737) != l_666))) , (*l_633)) <= l_682);
        }
        if ((*g_281))
            continue;
    }
    return l_326;
}







static union U0 * func_62(short p_63, union U1 p_64)
{
    union U0 *l_302 = &g_76;
    union U0 **l_303 = &l_302;
    (*l_303) = l_302;
    (*l_303) = &g_76;
    return &g_76;
}







static short func_65(int * p_66, union U1 * const p_67, union U0 * p_68, unsigned short p_69, char p_70)
{
    char l_89 = 1L;
    union U0 l_90 = {0x142BL};
    int l_91 = 0x349FEC89L;
    char *l_96 = (void*)0;
    char *l_97 = &g_13;
    char *l_106 = &l_89;
    short *l_107 = &g_85;
    unsigned char *l_108 = &g_27;
    int l_110 = 0x7339E942L;
    int *l_111 = &g_9;
    char **l_112 = &l_97;
    char l_136 = 0x6FL;
    char **l_217 = &l_97;
    union U0 *l_229 = &l_90;
    union U0 **l_228 = &l_229;
    unsigned short *l_269 = &l_90.f0;
    unsigned short *l_270 = &g_76.f0;
    short l_271 = 0x49EFL;
    int l_293 = 0L;
    if (((*l_111) = (l_89 , ((l_90 , g_7) >= ((g_73.f0 || (l_91 != (l_110 = (g_109 = (~((-1L) > (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((((*l_97) = 0xBCL) > g_88), 8)), ((((*l_108) ^= ((safe_lshift_func_uint16_t_u_s((((*l_107) = (safe_lshift_func_int8_t_s_s(((*l_106) |= (safe_lshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((((*p_68) = (*p_68)) , g_12), g_7)) , g_9) , 1L), 5))), g_85))) <= p_70), p_70)) , 0x3DL)) | 0xBFL) , 0xF05EL))))))))) & 4294967295UL)))))
    {
        (*l_111) |= g_12;
        l_112 = &l_97;
    }
    else
    {
        unsigned l_132 = 8UL;
        short *l_175 = (void*)0;
        int l_199 = 0x9D03927BL;
        short l_219 = 0x8A19L;
        union U0 **l_231 = &l_229;
        char **l_235 = &g_135;
        unsigned l_249 = 4294967291UL;
        unsigned **l_250 = (void*)0;
        int **l_253 = (void*)0;
        int **l_254 = &g_233;
        if (p_70)
        {
            int *l_127 = &g_12;
            int **l_126 = &l_127;
            int l_141 = (-10L);
            const unsigned **l_169 = &g_168;
            const int ** const *l_172 = (void*)0;
            int l_191 = 0L;
            unsigned char l_209 = 1UL;
            (*l_111) &= 0x9027EA7EL;
            for (p_70 = 28; (p_70 <= (-30)); p_70 = safe_sub_func_int16_t_s_s(p_70, 6))
            {
                (*l_111) = g_13;
            }
            for (l_91 = 13; (l_91 < 11); l_91--)
            {
                unsigned l_160 = 0xBDA4C5B4L;
                int **l_167 = (void*)0;
            }
            if ((((l_111 == ((*l_169) = g_168)) & 0UL) && ((*l_108) &= (0UL <= (safe_rshift_func_uint8_t_u_s(253UL, 6))))))
            {
                const int ** const **l_173 = (void*)0;
                const int ** const **l_174 = &l_172;
                short *l_176 = &g_88;
                short **l_177 = &l_107;
                (*l_111) = g_7;
                (*l_111) ^= (((*l_174) = l_172) == &g_121);
                g_9 = ((l_132 , l_175) == ((*l_177) = l_176));
            }
            else
            {
                unsigned char l_184 = 0xC6L;
                for (g_12 = 26; (g_12 >= 25); g_12--)
                {
                    short **l_189 = &g_188;
                    int l_198 = 0x6F6DE51AL;
                    (*l_111) = g_27;
                    for (g_76.f0 = 10; (g_76.f0 == 39); ++g_76.f0)
                    {
                        short ***l_190 = &l_189;
                        unsigned short *l_192 = (void*)0;
                        unsigned short *l_193 = &l_90.f0;
                        int *l_195 = (void*)0;
                        int *l_204 = &l_141;
                        g_194 &= ((safe_add_func_int8_t_s_s(((((-2L) <= l_184) , ((*l_193) |= (safe_add_func_uint32_t_u_u((+l_141), (l_191 |= (((g_187 == ((*l_190) = l_189)) , ((*l_111) = g_85)) && (1UL > (g_73.f1 || (1L | p_69))))))))) || p_69), l_184)) , g_27);
                        p_66 = l_195;
                        (*l_204) = ((safe_sub_func_uint16_t_u_u((g_73 , (p_66 != p_66)), (((*l_107) ^= (0x0EF3L != l_198)) || ((l_199 |= p_69) < (g_73 , (safe_sub_func_int32_t_s_s((g_9 = (((safe_sub_func_uint32_t_u_u(((-1L) <= p_69), p_70)) & l_184) || g_194)), l_141))))))) & 0x91L);
                        if (g_12)
                            continue;
                    }
                    (*l_111) ^= l_141;
                    l_91 |= ((*l_111) = ((safe_mod_func_int32_t_s_s(((*g_187) != (*g_187)), (p_70 , g_27))) ^ (safe_sub_func_int16_t_s_s((g_7 <= l_209), 0x384FL))));
                }
            }
        }
        else
        {
            union U1 *l_210 = &g_73;
            union U1 **l_211 = &l_210;
            (*l_211) = l_210;
        }
        if ((safe_sub_func_int32_t_s_s((g_73 , ((**g_134) , ((*l_111) ^ g_7))), g_73.f0)))
        {
            char **l_216 = &g_135;
            char l_218 = 0L;
            int l_232 = (-1L);
            for (l_89 = 0; (l_89 >= 12); l_89++)
            {
                union U1 *l_221 = &g_73;
                union U1 **l_220 = &l_221;
                union U0 ***l_230 = &l_228;
                l_217 = l_216;
                l_219 = l_218;
                (*l_220) = &g_73;
                (*l_111) = ((safe_rshift_func_uint16_t_u_s((l_218 && (**g_134)), ((((safe_rshift_func_uint16_t_u_u((l_218 ^ p_70), 4)) <= ((p_69 , (l_219 == g_88)) | (*g_135))) <= (safe_sub_func_int8_t_s_s((((((*l_230) = l_228) != l_231) <= p_69) || (*l_111)), 1UL))) && 1UL))) , (-1L));
            }
            l_232 = ((*l_111) = g_88);
            (*l_111) &= g_85;
            (*l_111) &= g_7;
        }
        else
        {
            unsigned l_234 = 4294967290UL;
            union U0 l_238 = {0UL};
            int **l_239 = (void*)0;
            g_233 = &g_9;
            (*g_233) |= ((l_234 > ((l_234 < ((l_235 != (void*)0) < ((safe_add_func_int16_t_s_s(l_199, (g_88 = ((l_199 && g_194) && l_219)))) ^ ((l_238 , l_235) == &l_106)))) & g_13)) ^ 3UL);
            if ((*g_233))
            {
                l_239 = &l_111;
            }
            else
            {
                const int *l_241 = &g_9;
                const int **l_240 = &l_241;
                (*l_240) = (void*)0;
                if ((!(*g_233)))
                {
                    int *l_242 = &l_110;
                    unsigned ***l_251 = &l_250;
                    int *l_252 = &l_91;
                    (*l_252) ^= ((((*l_242) |= (*g_233)) ^ g_7) && (safe_add_func_uint16_t_u_u((p_70 ^ ((*g_233) = p_70)), ((((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((g_88 ^ l_249), 2)), ((*l_242) = (((((*l_251) = l_250) == (void*)0) & g_73.f1) == 2L)))) > g_76.f0) < (*g_135)) == p_70))));
                    return g_76.f0;
                }
                else
                {
                    return p_69;
                }
            }
            g_233 = p_66;
        }
        (*l_254) = &g_9;
    }
    (*l_111) = ((*g_135) , 0x0F00DC92L);
    (*l_111) = (safe_add_func_int8_t_s_s(((void*)0 != l_111), ((safe_add_func_uint16_t_u_u(p_69, (*l_111))) >= ((*l_111) && ((*l_270) = (safe_rshift_func_uint16_t_u_u(((*l_269) = (safe_lshift_func_uint16_t_u_u((p_70 | (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((g_85 , &g_9) != &g_9), g_194)), g_85)), p_69))), (*l_111)))), g_7)))))));
    if (((p_70 >= (p_69 = ((l_271 & p_70) & ((*l_111) > ((*l_111) == (g_109 <= p_69)))))) | 6UL))
    {
        int **l_272 = &g_233;
        int *l_273 = &l_110;
        (*l_272) = &l_110;
        (*l_272) = &g_9;
        (*l_273) &= (*l_111);
        (*l_272) = p_66;
    }
    else
    {
        union U1 *l_284 = &g_73;
        union U1 **l_283 = &l_284;
        int **l_290 = &g_233;
        int ***l_289 = &l_290;
        const int **l_292 = (void*)0;
        const int ***l_291 = &l_292;
        union U0 ***l_297 = &l_228;
        union U0 ****l_296 = &l_297;
        union U0 ****l_298 = (void*)0;
        union U0 ***l_300 = (void*)0;
        union U0 ****l_299 = &l_300;
        for (g_12 = 0; (g_12 > 18); g_12 = safe_add_func_int32_t_s_s(g_12, 6))
        {
            const int **l_282 = &g_281;
            for (g_76.f0 = (-10); (g_76.f0 < 4); g_76.f0++)
            {
                int **l_280 = &g_233;
                for (g_88 = (-22); (g_88 <= 4); g_88 = safe_add_func_uint8_t_u_u(g_88, 3))
                {
                    (*l_111) = (*g_233);
                }
                if ((*g_233))
                    continue;
                (*l_280) = &l_110;
            }
            (*l_282) = g_281;
        }
        (*l_283) = ((((*l_228) = (*l_228)) != &g_76) , ((*l_111) , p_67));
        l_293 |= ((((g_9 , p_70) || (&g_27 != &g_27)) | 0xE2L) >= (((*l_289) = &g_233) != ((*l_291) = &g_281)));
        (***l_289) = (safe_rshift_func_int16_t_s_s((((*l_299) = ((*l_296) = &l_228)) == &l_228), 7));
    }
    return (*l_111);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_739.f0, "g_739.f0", print_hash_value);
    transparent_crc(g_739.f1, "g_739.f1", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_1129, "g_1129", print_hash_value);
    transparent_crc(g_1154, "g_1154", print_hash_value);
    transparent_crc(g_1160.f0, "g_1160.f0", print_hash_value);
    transparent_crc(g_1160.f1, "g_1160.f1", print_hash_value);
    transparent_crc(g_1184, "g_1184", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1258, "g_1258", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1331, "g_1331", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
