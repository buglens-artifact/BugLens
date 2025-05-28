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



static unsigned g_15 = 1UL;
static unsigned g_19 = 0x9C9214A9L;
static unsigned short g_23 = 65532UL;
static unsigned char g_34 = 1UL;
static unsigned short g_46 = 0xCC09L;
static unsigned short *g_45 = &g_46;
static unsigned g_78 = 4294967291UL;
static unsigned char g_106 = 0x67L;
static unsigned char g_109 = 0x0CL;
static int g_110 = (-4L);
static unsigned *g_116 = &g_78;
static unsigned short g_149 = 65535UL;
static char g_165 = 0x17L;
static int **g_170 = (void*)0;
static short g_171 = 0x6E31L;
static unsigned g_179 = 4294967286UL;
static unsigned short **g_194 = &g_45;
static unsigned short ***g_193 = &g_194;
static unsigned char g_200 = 0xEDL;
static int *g_221 = &g_110;
static const unsigned g_224 = 6UL;
static unsigned g_226 = 0UL;
static unsigned *g_225 = &g_226;
static int g_241 = (-9L);
static int g_290 = 1L;
static short *g_326 = &g_171;
static short **g_325 = &g_326;
static unsigned g_347 = 0UL;
static int g_403 = 0L;
static unsigned g_468 = 0x85898F27L;
static char g_480 = (-6L);
static char *g_512 = &g_480;
static char **g_511 = &g_512;
static const int g_587 = 9L;
static unsigned g_624 = 0x23FFF13AL;
static unsigned **g_642 = &g_225;
static const int *g_651 = &g_241;
static unsigned char g_684 = 253UL;
static unsigned ***g_740 = &g_642;
static unsigned ****g_739 = &g_740;
static int **g_750 = (void*)0;
static unsigned short * const **g_798 = (void*)0;
static short g_822 = 0xA134L;
static int g_876 = 0xBDCA1655L;
static unsigned short g_891 = 7UL;
static const int ****g_953 = (void*)0;
static unsigned g_1157 = 0xEFCA9E77L;
static unsigned char **g_1218 = (void*)0;
static unsigned char ***g_1217 = &g_1218;
static int *g_1283 = (void*)0;
static int * const *g_1282 = &g_1283;
static int * const **g_1281 = &g_1282;
static int * const *** const g_1280 = &g_1281;
static int g_1340 = 0x284B4E8FL;
static short g_1369 = (-4L);
static short ***g_1382 = &g_325;
static short g_1423 = 0L;
static int g_1429 = (-1L);



static unsigned short func_1(void);
static short func_24(unsigned p_25, unsigned char p_26, const short p_27);
static unsigned func_28(unsigned char p_29, unsigned p_30, int p_31, unsigned short * p_32, unsigned char p_33);
static short func_35(int p_36, short p_37, unsigned short * p_38, const unsigned short p_39, unsigned short * p_40);
static int func_47(unsigned char p_48, int p_49);
static unsigned char func_50(unsigned short * const p_51, char p_52);
static unsigned short * func_53(int p_54, char p_55, int p_56);
static unsigned func_59(unsigned p_60, unsigned short * p_61, unsigned * p_62, int p_63);
static char func_68(const unsigned * p_69, char p_70, unsigned * p_71);
static char func_81(unsigned char p_82, char p_83);
static unsigned short func_1(void)
{
    unsigned short l_13 = 0x8A83L;
    unsigned *l_14 = &g_15;
    unsigned *l_18 = &g_19;
    unsigned short *l_22 = &g_23;
    int *l_1428 = &g_1429;
    int **l_1430 = (void*)0;
    int **l_1431 = (void*)0;
    int **l_1432 = &l_1428;
    (*l_1428) |= ((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*l_14) = (safe_unary_minus_func_int16_t_s(l_13))) , g_15), ((safe_div_func_uint32_t_u_u(((*l_18) = 0UL), (safe_add_func_int8_t_s_s((((*l_22) = 0xC58BL) ^ func_24(func_28(g_34, (func_35((safe_rshift_func_uint8_t_u_u(l_13, g_34)), (0xFD03L != ((safe_lshift_func_uint16_t_u_s((0x0EE1L != 0xA2E7L), 2)) & l_13)), g_45, (*g_45), &g_46) && l_13), g_876, &l_13, g_891), l_13, g_587)), l_13)))) < l_13))), (-1L))) <= l_13) , l_13), l_13)), l_13)), l_13)) & 0x0DL);

    ;


    ;
    ;
    ;


    (*l_1432) = l_1428;
    return (**g_194);
}







static short func_24(unsigned p_25, unsigned char p_26, const short p_27)
{
    unsigned l_1123 = 0UL;
    int l_1163 = 0x9EEBFA17L;
    int l_1167 = 0xF96BFFA7L;
    short **l_1174 = (void*)0;
    unsigned short * const l_1210 = &g_46;
    int ***l_1228 = &g_170;
    int l_1253 = (-1L);
    int l_1330 = (-8L);
    int ***l_1348 = &g_750;
    int ****l_1347 = &l_1348;
    unsigned char *l_1358 = &g_200;
    unsigned char **l_1357 = &l_1358;
    int l_1364 = (-9L);
    for (g_891 = (-18); (g_891 > 33); g_891++)
    {
        const int * const l_1126 = &g_110;
        unsigned short *l_1162 = &g_149;
        short **l_1175 = (void*)0;
        char l_1206 = 0L;
        char l_1231 = 0xC8L;
        int l_1243 = 0xBD98703FL;
        short l_1268 = (-1L);
        const unsigned short l_1270 = 1UL;
        int *l_1278 = (void*)0;
        int ****l_1279 = (void*)0;
        unsigned char l_1295 = 0xAFL;
        unsigned *l_1306 = &l_1123;
        unsigned *** const *l_1308 = &g_740;
        unsigned *** const **l_1307 = &l_1308;
        unsigned l_1322 = 1UL;
        const char l_1363 = (-1L);
        char l_1417 = 0L;
        short l_1426 = 0xC026L;
        int *l_1427 = &l_1167;
        if ((g_241 ^= (p_25 , l_1123)))
        {
            char l_1141 = 0xF6L;
            for (g_106 = 0; (g_106 >= 18); g_106 = safe_add_func_uint8_t_u_u(g_106, 2))
            {
                const int **l_1127 = &g_651;
                (*l_1127) = l_1126;

                ;
                if (l_1123)
                    break;
                for (g_109 = 0; (g_109 > 46); g_109 = safe_add_func_int32_t_s_s(g_109, 2))
                {
                    int *l_1130 = (void*)0;
                    int *l_1134 = &g_241;
                    (*l_1127) = l_1130;

                    ;
                    for (p_26 = (-19); (p_26 >= 60); p_26++)
                    {
                        int *l_1133 = &g_110;
                        (*l_1133) |= l_1123;
                        if (p_26)
                            continue;
                    }
                    (*l_1134) &= (*l_1126);
                }

                ;
                for (g_468 = 25; (g_468 >= 54); g_468 = safe_add_func_uint32_t_u_u(g_468, 2))
                {
                    int l_1151 = 0x2D587401L;
                    int *l_1164 = (void*)0;
                    int *l_1165 = &l_1163;
                    int *l_1166 = (void*)0;
                    char *l_1168 = (void*)0;
                    char *l_1169 = &g_165;
                    l_1151 = (safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_1141, (l_1141 , 1UL))), ((p_25 = l_1141) || (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((((p_26 && l_1123) || (safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((((g_226 && l_1151) , (((safe_add_func_int8_t_s_s((**g_511), l_1151)) && g_46) , l_1141)) & l_1141), g_224)), p_26))) == p_26) ^ l_1151) <= (*g_326)))), 1L)), l_1123)))));
                    l_1151 = l_1141;
                }
            }
        }
        else
        {
            int *l_1170 = &l_1167;
            char l_1203 = 0x3BL;
            short ***l_1239 = &g_325;
            unsigned char *l_1273 = &g_684;
            unsigned char **l_1272 = &l_1273;
            unsigned *****l_1302 = &g_739;
            int ** const **l_1329 = (void*)0;
            int *l_1365 = &l_1253;
            short l_1368 = 0L;
            int *l_1370 = &l_1330;
            int ****l_1383 = &l_1348;
            unsigned l_1419 = 4294967295UL;
            if (((*l_1170) = (*l_1126)))
            {
                unsigned l_1173 = 4294967295UL;
                char l_1200 = (-1L);
                const short l_1201 = 0xB6E9L;
                unsigned short *l_1202 = &g_149;
                int l_1207 = (-1L);
                int l_1225 = 0x33E2BF1DL;
                char **l_1230 = &g_512;
                int * const *l_1241 = &l_1170;
                (*l_1170) &= p_27;
                if (((*l_1170) = (safe_mod_func_uint16_t_u_u(((*g_45) , ((6L ^ (*l_1126)) || ((*l_1126) || (l_1173 < (&g_325 != ((l_1174 != (g_1157 , l_1175)) , &l_1175)))))), 0xBA02L))))
                {
                    short ** const l_1180 = (void*)0;
                    int ***l_1185 = &g_750;
                    int ****l_1186 = (void*)0;
                    int ****l_1187 = &l_1185;
                    int l_1196 = 0x7A8C3F23L;
                    unsigned char *l_1197 = (void*)0;
                    unsigned char *l_1198 = (void*)0;
                    unsigned char *l_1199 = &g_684;
                    char ***l_1229 = &g_511;
                    const unsigned *l_1234 = &g_468;
                    int ** const l_1242 = &g_221;
                    int l_1252 = 0x67EFC963L;
                    if (p_27)
                    {
                        (*l_1170) = ((l_1206 != (p_25 > (((0xFE70L <= (**g_194)) , &p_25) == &p_25))) , l_1207);
                        if (p_26)
                            continue;
                    }
                    else
                    {
                        return p_25;



                    }
                    if (((*l_1170) = ((safe_rshift_func_uint8_t_u_u(l_1231, p_25)) , 0x0CA8BFA5L)))
                    {
                        short l_1240 = 0x2862L;
                        int *l_1244 = &l_1196;
                        int *l_1251 = &g_241;
                        (*l_1170) &= (safe_lshift_func_uint8_t_u_s(((***g_193) == (l_1234 == l_1234)), 0));
                        (*l_1170) &= p_25;
                        (*l_1244) &= (l_1243 , (*l_1170));
                        l_1252 |= ((*l_1251) |= (safe_mul_func_int8_t_s_s((((p_25 >= 1L) > (*l_1244)) , (((safe_sub_func_int8_t_s_s((*g_512), (+((&g_750 == (void*)0) != (((*l_1126) >= (((safe_rshift_func_int16_t_s_s(3L, ((p_27 >= p_27) || p_27))) | (**l_1241)) & (**g_194))) , p_26))))) || (**l_1241)) , 4L)), (*l_1170))));
                    }
                    else
                    {
                        (*l_1242) = &l_1167;

                        ;
                        if ((*g_221))
                            continue;
                        if (p_27)
                            continue;
                        return (*g_326);



                    }
                }
                else
                {
                    unsigned short *l_1266 = &g_149;
                    unsigned *l_1267 = &g_624;
                    int l_1269 = (-6L);
                    short l_1294 = 8L;
                    int *l_1301 = &g_403;
                    unsigned **l_1303 = &l_1267;
                    unsigned *l_1305 = &g_226;
                    unsigned **l_1304 = &l_1305;
                    if ((((p_27 == l_1253) >= (p_26 == (safe_rshift_func_uint8_t_u_s(0xACL, ((*l_1170) || ((safe_div_func_int32_t_s_s(((-5L) <= (safe_sub_func_uint8_t_u_u(0xC6L, (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(1UL, (l_1269 = (l_1268 ^= ((*g_326) = (func_59((((**g_511) = ((safe_add_func_uint8_t_u_u(((*l_1126) != 0xA2L), (*g_512))) > 65535UL)) <= p_27), l_1266, l_1267, (*l_1170)) , (*l_1170))))))) != (*l_1170)) < 1L), p_25))))), l_1270)) || l_1269)))))) , 0x7A354E31L))
                    {
                        int *l_1271 = &l_1253;
                        int **l_1276 = &l_1271;
                        l_1271 = l_1271;
                        if (p_25)
                            break;
                        (*l_1271) = (((((l_1269 == (((l_1272 = (void*)0) == (*g_1217)) != 0x154EF69DL)) && (safe_mod_func_uint32_t_u_u(p_25, p_27))) < (**l_1241)) > (**l_1241)) <= p_27);

                        ;
                        (*l_1276) = &g_110;

                        ;
                    }
                    else
                    {
                        int **l_1277 = &g_221;
                        (*l_1277) = (*l_1241);

                        ;
                        l_1278 = (*l_1277);

                        ;
                        l_1170 = ((*l_1277) = ((l_1279 != g_1280) , l_1170));
                        (**l_1277) = 7L;
                    }

                    ;
                    ;
                    l_1295 = (((((*g_512) = (-1L)) == ((1UL ^ (~p_25)) < (safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(p_27, (((safe_add_func_int32_t_s_s(p_26, (l_1269 = ((*l_1267) &= (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_1170) = p_27), (4294967288UL || p_25))) || g_241), p_25)))))) > p_26) ^ (**g_194)))) & p_26) < l_1294), 0x62B9L)))) | 0xA106L) && 0UL);
                    l_1269 ^= (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint8_t_u_u((((*g_512) = (safe_mod_func_int16_t_s_s(p_27, (((*l_1170) > (g_110 = (((*l_1301) &= p_27) , (-9L)))) & ((*l_1202) &= (p_25 <= (l_1302 != (p_25 , l_1307)))))))) > p_26), l_1253))));
                }

                ;
                ;
            }
            else
            {
                short l_1319 = (-1L);
                unsigned l_1323 = 1UL;
                int *l_1326 = &l_1167;
                unsigned char l_1339 = 252UL;
                const int l_1341 = 0x26163D03L;
                int *l_1346 = &g_241;
                l_1278 = l_1170;

                ;
                (*l_1170) ^= (-5L);
                g_241 ^= ((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((((p_26 = (*l_1170)) > ((safe_div_func_uint8_t_u_u(((**l_1272) = (safe_rshift_func_uint8_t_u_s(l_1167, p_25))), (*l_1278))) <= p_27)) >= (**g_194)) , 0x615C18ABL) <= p_27), l_1322)) <= l_1323), (*l_1170))) || (-4L));
                if (((safe_mul_func_uint8_t_u_u((l_1326 != (void*)0), (((*l_1170) >= (*l_1326)) | (l_1330 = ((void*)0 == l_1329))))) && ((safe_sub_func_uint16_t_u_u(65527UL, (*g_326))) , ((((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((+((*l_1306) &= (*l_1326))), p_27)), l_1339)), l_1330)) || p_26) >= (**g_511)) , p_25))))
                {
                    int *l_1342 = &g_241;
                    g_110 = (((*l_1306) = (p_25 < ((*l_1342) = (p_25 , ((*l_1278) |= (g_1340 , p_26)))))) , p_26);
                }
                else
                {
                    int *l_1343 = &g_241;
                    l_1343 = l_1343;
                    for (g_822 = 0; (g_822 > 25); g_822++)
                    {
                        l_1170 = l_1346;

                        ;
                        (*l_1346) = g_200;
                        (*l_1326) &= p_27;
                    }

                    ;
                }

                ;
            }

            ;
            ;
            ;
            if (p_27)
                continue;
            (*l_1365) &= ((((~(l_1347 == (((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u(4294967293UL, (safe_div_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_1357 == (p_26 , (*g_1217))), (safe_mul_func_uint16_t_u_u((~(!(safe_add_func_uint16_t_u_u(((**g_511) , l_1363), (*l_1170))))), p_27)))) < p_27), 1L)))) , 4294967295UL), p_25)) && 0x7578L) , (void*)0))) , l_1364) != p_27) , 0xB99F6A77L);
            if ((safe_mul_func_uint8_t_u_u(((*g_326) != (p_27 & ((*l_1365) = (*l_1126)))), (((*g_45) = ((((p_27 ^ p_26) >= 1UL) , p_25) == p_25)) & 1L))))
            {
                int *l_1373 = &l_1364;
                for (g_165 = (-18); (g_165 < (-11)); g_165 = safe_add_func_int8_t_s_s(g_165, 2))
                {
                    l_1278 = l_1373;

                    ;
                    (*l_1278) = p_25;
                }

                ;
            }
            else
            {
                unsigned char l_1390 = 250UL;
                int l_1391 = 0xDD28E4B8L;
                int l_1418 = 1L;
                unsigned char l_1420 = 255UL;
                l_1391 = ((safe_sub_func_int8_t_s_s((~(safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((&g_325 != (g_1382 = &l_1174)), ((p_25 >= p_26) || p_26))), ((((p_27 , l_1383) != &g_1281) , (((*l_1162) = (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((*l_1170), l_1390)), 0x5B3554CEL)), p_26))) ^ l_1390)) >= (*g_326))))), 0x3FL)) ^ 0UL);

                ;
                if (p_25)
                {
                    int **l_1392 = &g_221;
                    char l_1402 = 0xDAL;
                    unsigned char ***l_1410 = &l_1357;
                    (*l_1392) = &g_241;

                    ;
                    for (g_34 = 0; (g_34 > 43); g_34 = safe_add_func_int32_t_s_s(g_34, 9))
                    {
                        unsigned char l_1399 = 255UL;
                        unsigned short * const l_1400 = &g_891;
                        unsigned short **l_1401 = &l_1162;
                        unsigned short l_1405 = 65535UL;
                        (**l_1392) = (*l_1126);
                        (*l_1365) ^= (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_1399, 10)), ((*g_326) < p_27)));
                        (*l_1365) ^= ((((safe_mul_func_uint8_t_u_u(((void*)0 != (*l_1239)), (((l_1405 ^= ((***g_193) |= l_1399)) > 1L) < ((safe_sub_func_int16_t_s_s(p_27, (7L | ((**l_1401) &= ((((*l_1370) = l_1399) , 0UL) != (p_25 , (**l_1392))))))) , 0xECC0L)))) > 255UL) , p_25) ^ p_25);
                        (*l_1170) = ((safe_sub_func_int16_t_s_s((-3L), ((void*)0 != l_1410))) , ((l_1391 = p_25) <= p_27));
                    }
                }
                else
                {
                    (*l_1365) |= ((*l_1170) = 0x4AD483DAL);
                }
                for (l_1123 = 0; (l_1123 == 21); l_1123 = safe_add_func_int32_t_s_s(l_1123, 3))
                {
                    return g_1423;



                }
            }

            ;
        }

        ;
        (*l_1427) = (safe_div_func_int16_t_s_s((l_1426 = p_25), ((*l_1162) = (***g_193))));
        l_1278 = &l_1243;

        ;
    }



    ;
    return p_26;



}







static unsigned func_28(unsigned char p_29, unsigned p_30, int p_31, unsigned short * p_32, unsigned char p_33)
{
    int l_928 = 0x3254D9EEL;
    int *l_929 = &g_110;
    unsigned *l_934 = (void*)0;
    unsigned l_956 = 4294967293UL;
    unsigned char *l_962 = &g_109;
    unsigned char **l_961 = &l_962;
    unsigned char ***l_960 = &l_961;
    char l_973 = 2L;
    unsigned *l_1001 = &g_226;
    int *l_1012 = &g_241;
    const unsigned short l_1042 = 0x03E4L;
    unsigned * const *l_1078 = (void*)0;
    unsigned * const * const *l_1077 = &l_1078;
    unsigned * const * const **l_1076 = &l_1077;
    short **l_1084 = &g_326;
    char l_1093 = 0x71L;
    unsigned short *l_1094 = (void*)0;
    short l_1106 = 1L;
    int l_1109 = 2L;
    unsigned short * const l_1116 = &g_149;
    int l_1120 = 6L;
    (*l_929) = (safe_rshift_func_int16_t_s_u((p_33 , l_928), 15));
    (*l_929) = p_29;
    if (((*l_929) ^ (safe_mod_func_uint32_t_u_u(((((!(*l_929)) && (safe_lshift_func_int8_t_s_s((**g_511), (p_29 <= p_30)))) , g_891) > (*l_929)), (*g_116)))))
    {
        unsigned short * const l_947 = &g_891;
        int l_954 = (-1L);
        for (g_290 = 0; (g_290 != (-28)); g_290--)
        {
            short l_955 = 0xE32EL;
            for (g_684 = (-7); (g_684 < 18); ++g_684)
            {
                unsigned short l_948 = 65534UL;
                for (g_179 = (-17); (g_179 < 39); ++g_179)
                {
                    (*l_929) = (safe_mod_func_int8_t_s_s((((((p_33 , (safe_lshift_func_int8_t_s_s(((*g_45) , 0xE1L), 3))) && 0xCCD86100L) > ((safe_add_func_uint32_t_u_u((((p_33 <= ((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((*g_225), (!((void*)0 == g_953)))) | 4294967290UL), g_480)) , p_31)) > 0xB1151B21L) <= p_29), p_30)) || g_200)) , (***g_740)) <= 0x22B19E3FL), 0x11L));
                }
            }
            (*l_929) ^= l_955;
        }
        return l_956;
    }
    else
    {
        int *l_957 = (void*)0;
        int *l_963 = &g_110;
        int *l_964 = &g_241;
        int l_1028 = 0xDB722B07L;
        int **l_1069 = &l_964;
        unsigned short *l_1070 = &g_149;
        unsigned *l_1071 = &g_624;
        l_929 = l_957;

        ;
        (*l_964) = ((*l_963) = ((*g_512) < (safe_lshift_func_int16_t_s_s(((l_960 == &l_961) | (*p_32)), (*g_326)))));
        for (g_226 = 0; (g_226 < 19); g_226 = safe_add_func_uint16_t_u_u(g_226, 9))
        {
            char l_976 = 2L;
            int *l_978 = (void*)0;
            unsigned short *l_996 = &g_149;
            unsigned char l_1030 = 253UL;
            int l_1039 = 0x40AE2A13L;
            if ((safe_mod_func_uint16_t_u_u(l_976, (*p_32))))
            {
                char l_977 = 1L;
                int *l_981 = &g_876;
                int l_1029 = 8L;
                p_31 = l_977;
                if ((l_978 == (((safe_sub_func_uint16_t_u_u(((g_290 , 1L) | ((void*)0 != &g_241)), (p_33 && (*g_512)))) >= ((l_977 , l_928) , p_30)) , l_981)))
                {
                    unsigned *l_992 = &g_468;
                    int l_993 = 0xFAF23E3CL;
                    int *l_1017 = &l_993;
                    p_31 = (((((***g_740) , (l_976 >= (safe_div_func_uint16_t_u_u(1UL, (safe_div_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(((*g_116) | (((safe_div_func_uint32_t_u_u(0x4ABFCD48L, p_31)) , (safe_mod_func_int16_t_s_s(((p_31 , ((((*l_992) = p_29) , 0xCAB9L) || (*p_32))) , 0L), l_993))) , (-1L))), l_977)) , (*g_326)) , 0x58341893L), 0xC97EDBC7L)))))) , p_29) , l_977) & (***g_193));
                    if (p_29)
                    {
                        int **l_994 = &l_929;
                        (*l_964) = p_30;
                        (*l_994) = l_981;

                        ;
                        if ((**l_994))
                            break;
                        (*l_994) = &p_31;

                        ;
                    }
                    else
                    {
                        g_241 = (safe_unary_minus_func_int32_t_s((func_59(p_31, l_996, (*g_642), p_30) , ((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((l_1001 != ((***g_739) = (void*)0)) || (((**g_511) | (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(func_47((safe_mod_func_uint16_t_u_u((*p_32), 0x738CL)), g_34), 8)), p_33))) , (*g_45))), p_33)), (**g_194))) == p_33))));

                        ;
                        ;
                        ;
                        if (p_31)
                            break;
                        (*l_964) = (safe_div_func_uint32_t_u_u(l_993, p_30));
                    }

                    ;

                    ;
                    ;
                    if (func_59(l_977, ((*g_194) = (*g_194)), l_981, l_976))
                    {
                        (*l_964) = func_47((p_31 & p_31), ((*l_981) = ((*g_221) == p_30)));
                    }
                    else
                    {
                        return l_976;
                    }

                    ;
                    (*l_1017) |= ((*l_964) = ((p_30 , (*g_221)) > func_47(g_480, ((((*l_962) &= (safe_lshift_func_uint16_t_u_s((l_1012 != (void*)0), 14))) && (*g_512)) | (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((*p_32), l_976)), p_31))))));
                }
                else
                {
                    int **l_1018 = &l_1012;
                    (*l_1018) = &p_31;

                    ;
                }

                ;

                ;
                ;
                ;
                if (((((*l_964) |= (safe_sub_func_int32_t_s_s(l_977, ((~((safe_sub_func_int8_t_s_s((-1L), (safe_unary_minus_func_uint8_t_u(g_876)))) , 0x7546L)) < ((((**g_194) = (l_1029 = (safe_mul_func_int8_t_s_s(0x48L, (p_31 | (p_33 >= (((safe_div_func_int8_t_s_s(((l_1028 , p_31) || p_33), (-1L))) , p_33) <= l_976))))))) != l_1030) <= p_29))))) || l_1029) & 249UL))
                {
                    int **l_1031 = &l_963;
                    if (p_30)
                        break;
                    (*l_1031) = l_929;

                    ;
                }
                else
                {
                    char l_1037 = 0L;
                    if (p_29)
                    {
                        int ** const *l_1036 = &g_750;
                        int l_1038 = 0xADCD18E1L;
                        l_1039 = ((*l_1012) = l_1038);
                        (*l_964) = (((0xBBL <= (safe_lshift_func_uint16_t_u_s(l_977, p_30))) && (9UL & (l_1038 , ((l_1042 <= 0x384E42EFL) <= ((((((safe_mul_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((*g_512) && p_29), p_33)) , l_1029) == g_46), (*g_512))) >= p_30) | p_31) || p_30) <= 0x3F214206L) || l_976))))) & g_480);
                    }
                    else
                    {
                        int *l_1049 = (void*)0;
                        int **l_1050 = &g_221;
                        (*l_1050) = l_1049;

                        ;
                        (*l_963) = 0xDD339770L;
                    }


                    p_31 ^= ((p_29 | g_200) || (+(1L || (l_1037 , g_587))));
                    (*l_964) &= (safe_lshift_func_uint8_t_u_s(((l_1039 == (*g_512)) , p_29), (((p_30 > ((safe_sub_func_uint16_t_u_u((*p_32), l_977)) , ((void*)0 != (**g_739)))) >= l_1037) ^ 0xE9L)));
                    g_221 = &l_1039;

                    ;
                }


                ;
                return p_30;


            }
            else
            {
                unsigned char l_1055 = 0xCCL;
                int ***l_1062 = &g_170;
                int ***l_1063 = (void*)0;
                int ***l_1064 = (void*)0;
                int ***l_1065 = &g_170;
                int ***l_1066 = &g_170;
                int ***l_1067 = &g_170;
                int ***l_1068 = &g_170;
                (*l_1012) &= (0x4083L < (*g_326));
                (*l_1012) = (((((*g_116) = ((****g_739) >= (safe_add_func_int16_t_s_s(((*g_326) = (safe_mod_func_uint32_t_u_u(((((l_1069 = &l_963) != (p_31 , &l_964)) , p_30) == l_976), (*l_1012)))), (**g_194))))) | l_1030) , 0xD8L) == 0x1AL);

                ;
            }

            ;
        }

        ;

        ;
        ;
        ;
        ;
        for (p_31 = 0; (p_31 > (-9)); p_31--)
        {
            int *l_1085 = &g_290;
            int *l_1086 = &l_1028;
        }
    }

    ;

    ;
    ;
    ;
    if (((*p_32) == ((***g_193) , p_33)))
    {
        int l_1095 = 0x96844C6EL;
        unsigned l_1107 = 0xF731C69BL;
        int *l_1108 = &g_403;
        int l_1117 = (-1L);
        l_1109 |= (((l_1095 = g_179) , (((*l_1108) |= ((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(p_31, (*g_45))) == l_1107), (*p_32))) >= p_33)) , (*g_512))) != 246UL);
        l_1117 ^= (safe_sub_func_int16_t_s_s(func_47((((*g_326) >= func_59(g_290, p_32, (p_29 , &l_1107), (((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(0x3F12L, 4)), g_587)) && 0UL) <= g_171) < p_30) >= p_31))) , 247UL), p_31), 0x897AL));

        ;
    }
    else
    {
        int *l_1118 = &g_241;
        int *l_1119 = (void*)0;
        l_1119 = l_1118;

        ;
    }
    return l_1120;
}







static short func_35(int p_36, short p_37, unsigned short * p_38, const unsigned short p_39, unsigned short * p_40)
{
    int l_72 = (-7L);
    unsigned *l_77 = &g_78;
    char l_222 = (-1L);
    const unsigned *l_223 = &g_224;
    unsigned l_627 = 3UL;
    int *l_628 = &l_72;
    unsigned char *l_683 = &g_684;
    int l_759 = 0x8866C029L;
    int l_763 = (-3L);
    unsigned ** const *l_789 = &g_642;
    unsigned ** const **l_788 = &l_789;
    unsigned ** const ***l_787 = &l_788;
    unsigned short l_835 = 65529UL;
    short l_888 = 0L;
    unsigned l_915 = 1UL;
    int ** const *l_917 = (void*)0;
    int ** const **l_916 = &l_917;
    if (func_47(((*l_683) &= func_50(func_53(((*l_628) = (((**g_194) = (safe_sub_func_int32_t_s_s(((((g_34 || func_59(((g_34 , ((safe_add_func_uint32_t_u_u(((*g_225) = (safe_mod_func_uint16_t_u_u((func_68((l_223 = ((0x6DE2L | (l_72 && ((safe_lshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s(((l_77 != (void*)0) | (safe_mod_func_int16_t_s_s(0xCEDBL, (func_81(l_72, ((l_72 , (-1L)) >= 0xD319L)) | l_72)))), (*p_40))) , (-4L)), l_222)) <= p_36))) , l_77)), g_224, g_225) , (*p_38)), l_72))), 0x77241C6DL)) && 0xDB23L)) > l_222), p_40, l_77, g_347)) && 0x8EL) , 0x79L) & g_468), l_627))) == p_36)), (**g_511), l_627), (**g_511))), g_587))
    {
        unsigned char **l_692 = &l_683;
        unsigned *l_695 = &g_468;
        int l_696 = (-3L);
        unsigned char **l_697 = (void*)0;
        unsigned char *l_699 = &g_684;
        unsigned char **l_698 = &l_699;
        unsigned char *l_700 = &g_106;
        unsigned char **l_701 = (void*)0;
        unsigned char *l_703 = (void*)0;
        unsigned char **l_702 = &l_703;
        unsigned l_728 = 1UL;
        int l_732 = 6L;
        int *l_734 = &g_110;
        unsigned ***l_737 = (void*)0;
        unsigned ****l_736 = &l_737;
        int *l_752 = (void*)0;
        int **l_751 = &l_752;
        unsigned l_772 = 0xFCBE3A7BL;
        unsigned short *l_775 = &g_149;
        (*l_628) = ((*g_221) &= p_39);
        if ((safe_lshift_func_int16_t_s_u((*l_628), (((((*l_692) = &g_200) != (void*)0) > (+((*l_699) = ((*l_700) = p_39)))) && l_696))))
        {
            unsigned l_706 = 0x606FC67DL;
            unsigned char *l_711 = &g_684;
            unsigned **l_714 = (void*)0;
            unsigned **l_715 = &g_225;
            char *l_729 = (void*)0;
            char *l_730 = (void*)0;
            char *l_731 = &l_222;
            int **l_733 = &g_221;
            (*g_221) &= ((safe_rshift_func_int8_t_s_s((*g_512), (l_706 ^ 1UL))) & ((*g_45) = (0x167DL | (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((p_36 , (l_711 = (*l_692))) == ((*l_698) = ((*g_512) , (*l_702)))), l_696)), (*l_628))))));

            ;
            ;
            l_732 = (l_696 = (((*l_731) ^= (safe_mod_func_int32_t_s_s(p_37, (p_36 &= ((*l_628) = ((((*g_221) = (0x3242L < ((*g_512) , (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_706, ((l_696 || 0x47BAL) <= p_37))), 0xBDDFL))))) || l_706) , 0x9303C9F1L)))))) & 0x98L));
            (*l_733) = &l_732;

            ;
        }
        else
        {
            int **l_735 = &l_734;
            unsigned *****l_738 = &l_736;
            unsigned *****l_741 = &g_739;
            int **l_745 = &g_221;
            int *l_747 = &g_403;
            int **l_746 = &l_747;
            int ***l_748 = (void*)0;
            int ***l_749 = &l_746;
            char *l_762 = &l_222;
            int l_764 = 0x7640751AL;
            int l_765 = 0xCF1F55FEL;
            p_36 = 0L;
            (*l_735) = l_734;
            g_110 &= (((((((*l_738) = l_736) != ((*l_741) = g_739)) & (((*g_326) = (((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((((*l_735) = (void*)0) != ((*l_745) = &l_72)))), (*p_38))) >= ((**g_194) == l_696)) || ((((*l_749) = l_746) == (l_751 = g_750)) >= 7L))) && (*l_628))) == p_37) >= (**g_194)) && (*g_512));

            ;
            ;
            ;
            l_765 = (l_696 = ((*l_628) = (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((*g_512), ((((safe_mod_func_uint32_t_u_u(((+(((((g_179 &= ((*g_225) = ((*g_116) = l_759))) != ((**l_745) >= p_36)) > (l_764 = (((+(l_763 &= (p_37 ^ ((*p_40) > ((safe_add_func_int8_t_s_s(0x50L, ((*l_762) = (g_403 | (0UL ^ 0x8DDDL))))) <= 0xFE31F7ECL))))) < p_37) , (-1L)))) && 1UL) | 0xB9E8L)) , p_37), (**l_745))) , (*g_326)) && (*p_40)) , (**g_511)))), g_165))));
        }

        ;
        ;
        ;
        ;
        ;
        p_36 = (((safe_div_func_uint16_t_u_u((((*g_326) = (!(safe_lshift_func_uint8_t_u_s(246UL, 5)))) && (l_772 == p_36)), (p_37 = g_624))) < (safe_add_func_uint16_t_u_u((***g_193), (*l_628)))) & ((*l_628) , ((*l_775) = (*l_628))));
    }
    else
    {
        unsigned **l_778 = &g_225;
        int l_790 = 1L;
        unsigned l_825 = 1UL;
        int l_831 = 0x1C016125L;
        unsigned l_832 = 0x62D8920AL;
        int *l_893 = &g_241;
        unsigned short *l_904 = &g_46;
        unsigned *l_905 = &l_832;
        int **l_924 = (void*)0;
        int **l_925 = &l_628;
        for (g_347 = 0; (g_347 >= 22); g_347 = safe_add_func_int16_t_s_s(g_347, 1))
        {
            unsigned l_808 = 0UL;
            int l_821 = 0xD3DDB24BL;
            int l_837 = (-10L);
            unsigned short *l_890 = &g_891;
            (*g_740) = l_778;

            ;
            for (g_684 = 0; (g_684 >= 43); g_684++)
            {
                int **l_781 = &l_628;
                int l_805 = 0x1FA06588L;
                int *l_823 = (void*)0;
                int *l_824 = (void*)0;
                char *l_826 = &g_165;
                char l_836 = 0L;
            }
        }

        ;
        for (l_72 = 0; (l_72 != 12); l_72 = safe_add_func_int8_t_s_s(l_72, 7))
        {
            int **l_922 = (void*)0;
            int **l_923 = &l_893;
            (*l_923) = &p_36;

            ;
            (*g_221) = p_39;
        }

        ;
        (*l_925) = (void*)0;

        ;
        return p_37;
    }



    ;
    ;
    ;

    ;
    return p_39;


}







static int func_47(unsigned char p_48, int p_49)
{
    const int **l_687 = &g_651;
    const int *l_689 = &g_241;
    const int **l_688 = &l_689;
    for (g_179 = (-3); (g_179 >= 26); g_179 = safe_add_func_uint16_t_u_u(g_179, 6))
    {
        return (*g_221);
    }
    (*l_688) = ((*l_687) = &g_110);

    ;
    ;
    return (*l_689);
}







static unsigned char func_50(unsigned short * const p_51, char p_52)
{
    unsigned l_674 = 5UL;
    (*g_221) = 0x61030825L;
    (*g_221) ^= (((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((***g_193) < (*g_326)), l_674)), (((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((((**g_511) == (safe_mod_func_uint32_t_u_u(((*g_225) &= l_674), (safe_rshift_func_uint16_t_u_s(((((((((+((**g_194) >= (*p_51))) < l_674) > (p_52 & l_674)) && g_480) ^ p_52) || p_52) , (***g_193)) > l_674), 4))))) , l_674) || 0x67562943L), 0xFAL)), 0xA528A8F9L)) & l_674) && 0xFFDDL))), l_674)), 0)) ^ (*g_326)) != l_674);
    return l_674;
}







static unsigned short * func_53(int p_54, char p_55, int p_56)
{
    const int l_636 = 1L;
    unsigned short l_637 = 65535UL;
    short l_638 = 1L;
    unsigned **l_641 = &g_116;
    int l_648 = 0x0D57D695L;
    g_642 = (p_56 , (((*g_326) = (((*g_225) = (safe_div_func_uint32_t_u_u((0xEC5A5EC4L <= (((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(0x69FD0670L)), (safe_sub_func_uint8_t_u_u(l_636, (g_290 | l_637))))) <= (~(0x2755L || l_638))) | (safe_mul_func_int16_t_s_s((p_55 | p_56), l_637)))), l_636))) != 0x7EBDB46AL)) , l_641));

    ;
    for (g_403 = 0; (g_403 > (-25)); g_403--)
    {
        char l_647 = 0xA0L;
        (*g_221) &= (safe_add_func_uint8_t_u_u((l_637 , 0xEAL), l_647));
    }
    l_648 &= l_637;
    for (g_179 = 0; (g_179 < 47); ++g_179)
    {
        int *l_652 = &g_403;
        int l_665 = 0x37A51F4BL;
        g_651 = &l_636;

        ;
        (*g_221) ^= ((((*l_652) |= l_636) , 0xD5L) <= (**g_511));
        (*g_221) = 0x82659F86L;
        (*g_221) = (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(p_56, ((safe_add_func_int16_t_s_s((l_648 , (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((**g_511) ^ l_636), 253UL)), 1UL))), ((safe_sub_func_int32_t_s_s((0x4161717AL & (l_665 && (*g_326))), 0x19E2B90EL)) , 65535UL))) , p_56))) ^ 0xEEDC3504L), p_56));
    }


    return (*g_194);



}







static unsigned func_59(unsigned p_60, unsigned short * p_61, unsigned * p_62, int p_63)
{
    int l_350 = 0x16E7FB2DL;
    unsigned char l_376 = 0xCFL;
    int l_379 = 0L;
    unsigned char l_397 = 251UL;
    int ** const *l_417 = &g_170;
    int *l_463 = &g_110;
    short *l_473 = &g_171;
    int l_593 = 0xAC2749E7L;
    char l_607 = 0xC4L;
    unsigned char * const **l_617 = (void*)0;
    int l_620 = (-3L);
    unsigned short **l_625 = &g_45;
    int **l_626 = &g_221;
    for (g_179 = 27; (g_179 <= 2); g_179 = safe_sub_func_uint32_t_u_u(g_179, 1))
    {
        unsigned l_367 = 0x6F5C8527L;
        short **l_371 = (void*)0;
        unsigned l_386 = 0x76D62126L;
        int l_398 = 0xFC17B509L;
        short l_416 = 0L;
        int *l_494 = &l_379;
        char *l_510 = &g_165;
        char **l_509 = &l_510;
        unsigned l_559 = 0x30DB22ADL;
        short l_571 = 0x15A3L;
        unsigned short l_576 = 0x0AD5L;
        int l_623 = 0x6CAF0863L;
    }
    (*l_626) = p_62;


    return (*p_62);
}







static char func_68(const unsigned * p_69, char p_70, unsigned * p_71)
{
    unsigned short l_229 = 1UL;
    const int *l_230 = (void*)0;
    int **l_251 = (void*)0;
    short l_266 = 0x8200L;
    short l_288 = 0x8C7FL;
    int l_291 = (-7L);
    unsigned char *l_308 = &g_106;
    char l_311 = 0xCAL;
    int *l_346 = &g_241;
    if ((safe_mul_func_uint8_t_u_u(l_229, (-1L))))
    {
        const int **l_231 = &l_230;
        (*l_231) = l_230;
    }
    else
    {
        const unsigned char l_232 = 0x97L;
        int *l_240 = &g_241;
        const int *l_272 = &g_110;
        char l_273 = 5L;
        int *l_289 = &g_290;
        short *l_309 = &g_171;
        short *l_310 = &l_266;
        if (l_232)
        {
            short l_233 = 1L;
            l_233 = p_70;
            return g_149;
        }
        else
        {
            const int **l_234 = &l_230;
            (*l_234) = l_230;
        }
        if ((((((safe_unary_minus_func_uint16_t_u((*g_45))) ^ (((*l_240) &= (p_70 != ((((((safe_mul_func_uint16_t_u_u((***g_193), (func_81(l_232, g_106) < (0x6AL != g_46)))) != (safe_div_func_uint8_t_u_u(p_70, g_226))) >= (-1L)) < p_70) && l_232) && g_78))) || 0x822E916BL)) , g_179) <= p_70) ^ (*g_225)))
        {
            int l_242 = 0xA3B70C50L;
            short l_255 = 0xE9BAL;
            unsigned **l_265 = &g_225;
            unsigned ***l_264 = &l_265;
            short *l_267 = &g_171;
            char *l_268 = &g_165;
            int *l_269 = &l_242;
            const int **l_270 = (void*)0;
            const int **l_271 = &l_230;
            l_242 ^= 0xDBD60903L;
            if ((p_70 | (g_171 >= (*l_240))))
            {
                char *l_249 = (void*)0;
                char *l_250 = &g_165;
                unsigned char *l_252 = &g_200;
                const int *l_253 = &g_241;
                short l_254 = 0xBC6EL;
                int *l_256 = (void*)0;
                int *l_257 = &l_242;
                l_253 = ((((*l_252) &= (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_s(g_226, (safe_mod_func_int8_t_s_s(((*l_250) = ((void*)0 == (**g_193))), g_109)))) <= p_70) , ((&g_221 != l_251) || (**g_194))), 12))) ^ p_70) , p_69);

                ;
                (*l_240) = l_254;
                (*l_257) |= (g_46 == func_81(((*l_252) ^= l_255), (*l_240)));
            }
            else
            {
                unsigned **l_259 = &g_225;
                unsigned ***l_258 = &l_259;
                (*l_258) = &g_116;

                ;
            }
            (*l_269) |= ((((*l_268) = (((*l_267) = (0x11568278L ^ (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((((*l_240) = p_70) <= (*p_71)) == (((*l_264) = &g_225) != (((func_81(p_70, p_70) , l_266) , (-1L)) , &g_116))), p_70)), p_70)))) ^ p_70)) , l_255) , 0x645AB6F4L);
            l_272 = ((*l_271) = &g_241);

            ;
            ;
        }
        else
        {
            (*l_240) = p_70;
            l_272 = p_71;

            ;
            (*l_240) ^= l_273;
        }

        ;
        ;
        l_291 |= (((*l_289) &= (((*l_240) , p_70) > (safe_sub_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((l_288 &= func_81((g_78 >= (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(0x876EL, ((((void*)0 == (*g_194)) || ((*l_240) != (-1L))) & (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_70, g_200)), g_224)), 0))))) , p_70), 0xF242L))), p_70)) & p_70), g_46)) != (*l_240)) ^ g_241), g_226)))) , g_179);
        if (((func_81((g_224 != ((safe_mul_func_int8_t_s_s((((((*l_310) |= ((+((safe_sub_func_int16_t_s_s(g_224, (((*l_309) = (((*l_240) >= (*l_240)) || (safe_sub_func_int8_t_s_s(((((((g_46 , (safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((g_34 , g_165) , (((safe_lshift_func_int16_t_s_u((*l_272), 0)) , (safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(func_81(g_171, p_70), (**g_194))) != 0UL), (*g_45)))) >= (*g_225))), p_70)) < (-9L)), 0x28DCL))) < (*l_272)) , 0xF96D8EFDL) , p_70) , l_308) != (void*)0), (*l_272))))) <= 0x1BBCL))) <= 1L)) ^ (-1L))) < g_224) >= l_311) , (*l_240)), p_70)) < g_241)), g_46) , 0L) == g_290))
        {
            int *l_312 = &g_241;
            int **l_313 = (void*)0;
            int **l_314 = &l_312;
            int l_315 = 0x4E080E16L;
            (*l_240) = p_70;
            (*l_314) = l_312;
            l_315 |= (((*l_312) == (p_70 , p_70)) , (*l_272));
        }
        else
        {
            int ***l_318 = (void*)0;
            int ***l_319 = &l_251;
            int ***l_320 = &g_170;
            int *l_345 = &g_110;
            if ((p_70 , (safe_rshift_func_uint8_t_u_s(((((*l_319) = &g_221) != ((*l_320) = &l_240)) , 255UL), 6))))
            {
                (**l_320) = (*g_170);
                for (g_241 = 0; (g_241 <= (-2)); --g_241)
                {
                    l_291 = 0xD733AEA3L;
                }
                (**l_319) = ((*g_170) = (*g_170));

                ;
                l_291 ^= (**g_170);
            }
            else
            {
                (**g_170) &= (-2L);
                (*l_251) = p_71;

                ;
                for (g_109 = 0; (g_109 != 47); ++g_109)
                {
                    short **l_328 = (void*)0;
                    short ***l_327 = &l_328;
                    char l_332 = (-2L);
                    (**l_320) = (void*)0;

                    ;
                    (*l_327) = (g_325 = (void*)0);

                    ;
                    for (l_288 = 0; (l_288 != 26); l_288 = safe_add_func_uint8_t_u_u(l_288, 4))
                    {
                        char l_331 = 0x6DL;
                    }
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            (*l_345) |= (safe_sub_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((*l_272), ((safe_sub_func_uint8_t_u_u(p_70, g_290)) ^ g_34))), g_106)), 0xF3CCC8CDL)) || (g_149 <= p_70)) > (safe_sub_func_uint32_t_u_u(1UL, p_70))), 0x4D660517L));
            (**l_251) = p_70;
        }

        ;

        ;
        ;
        ;
    }



    ;
    ;
    ;
    (*l_346) &= 0x24D29C7EL;
    return g_106;
}







static char func_81(unsigned char p_82, char p_83)
{
    unsigned short l_99 = 65530UL;
    unsigned l_102 = 1UL;
    const unsigned short *l_146 = &l_99;
    const unsigned short **l_145 = &l_146;
    const unsigned short ***l_144 = &l_145;
    int l_147 = 0xF81C7DC7L;
    unsigned short l_150 = 0xB06FL;
    for (p_83 = 0; (p_83 == (-14)); p_83--)
    {
        unsigned short l_90 = 0x5FAFL;
        int l_91 = 0L;
        unsigned *l_117 = &g_78;
        const unsigned short *l_143 = (void*)0;
        const unsigned short **l_142 = &l_143;
        const unsigned short ***l_141 = &l_142;
        const int *l_218 = &l_91;
        int *l_220 = &l_147;
        int **l_219 = &l_220;
        if (g_46)
        {
            unsigned char *l_103 = (void*)0;
            unsigned char *l_104 = (void*)0;
            unsigned char *l_105 = &g_106;
            unsigned char *l_107 = (void*)0;
            unsigned char *l_108 = &g_109;
            int l_113 = 0xF6804519L;
            unsigned *l_114 = &g_78;
            unsigned **l_115 = (void*)0;
            g_110 ^= ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((p_82 == (+(l_91 |= l_90))), 1)), p_82)) , (p_83 > ((*l_108) ^= (safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(((*l_105) = (((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_34, p_83)), l_99)) & (((((((safe_div_func_uint8_t_u_u((g_78 > (((((g_46 , g_34) , 0xB03C7580L) , (void*)0) == &g_46) || g_34)), g_78)) != 0x6E024B17L) , l_102) && 0xB0L) , 0x0CL) > 8UL) > p_83)) || 0xFD74L)), l_99)))))));
            if ((safe_mul_func_int16_t_s_s(((l_102 | l_113) | (((*l_105) = ((*l_108) ^= l_90)) & ((g_116 = l_114) != l_117))), ((g_110 = (l_91 >= (safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_82, p_82)), (safe_lshift_func_uint16_t_u_u(65535UL, p_82)))))) & p_83))))
            {
                int *l_148 = &g_110;
                for (l_113 = (-6); (l_113 <= (-18)); --l_113)
                {
                    unsigned short **l_127 = &g_45;
                    unsigned short ***l_126 = &l_127;
                    int *l_129 = &g_110;
                    (*l_126) = &g_45;
                    if (((*l_129) = (safe_unary_minus_func_int16_t_s(g_106))))
                    {
                        (*l_129) = l_113;
                        return g_34;
                    }
                    else
                    {
                        int **l_130 = &l_129;
                        int *l_132 = &l_91;
                        int **l_131 = &l_132;
                        int *l_133 = (void*)0;
                        int *l_134 = &g_110;
                        (*l_131) = ((*l_130) = &l_91);

                        ;
                        (*l_132) = p_83;
                        (*l_134) |= (*l_129);
                        (**l_131) = (l_147 |= (safe_mod_func_int32_t_s_s(p_82, (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((void*)0 != &l_114), (+(-5L)))), (g_109 && ((l_141 == l_144) ^ ((((*l_105) = (p_83 & 4294967295UL)) != p_82) , 8UL))))))));
                    }

                    ;
                    (*l_129) &= l_99;
                }
                g_149 = ((*l_148) = ((*l_142) == (**l_144)));
            }
            else
            {
                return p_83;
            }
        }
        else
        {
            int *l_151 = &g_110;
            unsigned char *l_162 = &g_106;
            char *l_163 = (void*)0;
            char *l_164 = &g_165;
            unsigned short l_172 = 0x86BCL;
            (*l_151) |= l_150;
            (*l_151) = (safe_rshift_func_int8_t_s_u(((*l_164) = (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((-1L), (+(-9L)))), (safe_rshift_func_int8_t_s_u((1L & p_82), ((*l_162) = g_78))))), g_34))), (((g_171 = (p_83 , (((safe_mod_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((((((g_149 != p_83) , (void*)0) != g_170) >= p_83) == p_82), 0xFC009244L)) ^ l_90) || 1L) & p_83), p_82)) <= 0x86L) > p_82))) == l_172) < l_91)));
        }
        for (g_110 = (-2); (g_110 < 0); g_110 = safe_add_func_int32_t_s_s(g_110, 2))
        {
            const char l_202 = 0L;
            int * const l_215 = &g_110;
            int *l_217 = &l_91;
            int **l_216 = &l_217;
            for (l_99 = (-21); (l_99 < 55); l_99++)
            {
                short *l_177 = &g_171;
                int *l_178 = (void*)0;
                unsigned char *l_184 = &g_106;
                unsigned char l_201 = 0x53L;
                int **l_205 = &l_178;
                g_179 &= (((*l_177) |= g_106) , 0x65313957L);
                if (l_99)
                {
                    return l_90;
                }
                else
                {
                    int l_204 = (-7L);
                    for (g_109 = 0; (g_109 == 13); ++g_109)
                    {
                        unsigned char *l_186 = &g_106;
                        unsigned char **l_185 = &l_186;
                        int *l_195 = (void*)0;
                        int *l_196 = &l_147;
                        unsigned *l_197 = (void*)0;
                        unsigned *l_198 = &g_179;
                        unsigned char *l_199 = &g_200;
                        int *l_203 = (void*)0;
                        l_204 &= (safe_lshift_func_uint16_t_u_u((((l_184 == ((*l_185) = (void*)0)) > ((((safe_mul_func_uint8_t_u_u(p_82, (safe_add_func_int32_t_s_s(((*l_196) |= (0L || (safe_lshift_func_int8_t_s_s((-1L), (g_193 == &l_142))))), (((*l_199) = ((*l_184) = (p_83 || ((*l_198) &= ((*g_116) &= p_83))))) >= g_109))))) , g_109) , l_201) <= p_83)) != 0x40L), l_202));

                        ;
                    }
                }
                (*l_205) = &l_91;

                ;
            }
            for (l_99 = 0; (l_99 == 19); l_99 = safe_add_func_uint16_t_u_u(l_99, 4))
            {
                int *l_208 = (void*)0;
                int *l_209 = &l_91;
                (*l_209) = 1L;
                if ((*l_209))
                    continue;
                for (g_109 = 24; (g_109 > 60); g_109++)
                {
                    int l_212 = 1L;
                    if (l_90)
                        break;
                    l_212 = ((*l_209) ^= p_83);
                    for (l_102 = 0; (l_102 <= 51); l_102 = safe_add_func_uint16_t_u_u(l_102, 3))
                    {
                        (*l_209) |= g_46;
                        if (p_82)
                            break;
                    }
                    if (l_212)
                        continue;
                }
                if (g_46)
                    continue;
            }
            (*l_216) = l_215;

            ;
        }
        l_218 = (void*)0;

        ;
        (*l_219) = &l_91;

        ;
    }
    g_221 = &l_147;

    ;
    return g_46;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_468, "g_468", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_684, "g_684", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1340, "g_1340", print_hash_value);
    transparent_crc(g_1369, "g_1369", print_hash_value);
    transparent_crc(g_1423, "g_1423", print_hash_value);
    transparent_crc(g_1429, "g_1429", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
