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
   unsigned f0;
   unsigned f1;
   int f2;
};


static unsigned g_7 = 0UL;
static union U0 g_52 = {0x321EE01EL};
static unsigned short g_53 = 0xFC75L;
static int g_55 = 3L;
static int g_57 = 1L;
static unsigned char g_62 = 0xBAL;
static char g_70 = 0x30L;
static unsigned g_103 = 0x85F6474AL;
static int *g_124 = &g_55;
static int g_168 = 0xBFCC7844L;
static short g_170 = 0xD58DL;
static int ***g_175 = (void*)0;
static unsigned short g_185 = 0x94CAL;
static short g_200 = 0xEECDL;
static int **g_220 = (void*)0;
static int ***g_219 = &g_220;
static unsigned short g_228 = 0xA53DL;
static char g_230 = 0L;
static char **g_233 = (void*)0;
static int g_253 = 0x2BF8D361L;
static int g_352 = 9L;
static unsigned char g_399 = 247UL;
static int g_401 = 0L;
static unsigned g_413 = 1UL;
static unsigned char g_415 = 0x12L;
static union U0 g_467 = {0x3D7E8A1AL};
static unsigned char *g_542 = &g_62;
static unsigned char **g_541 = &g_542;
static char g_566 = 0xEAL;
static short g_588 = 0x711EL;
static unsigned ***g_656 = (void*)0;
static unsigned ****g_655 = &g_656;
static short *g_664 = &g_200;
static short **g_663 = &g_664;
static union U0 *g_675 = &g_467;
static unsigned g_681 = 8UL;
static unsigned g_760 = 1UL;
static unsigned char g_803 = 0xFDL;
static unsigned g_828 = 6UL;
static unsigned g_872 = 0xFB98D85EL;
static unsigned char *g_1181 = &g_415;
static unsigned short g_1183 = 65531UL;
static int g_1185 = (-3L);
static int g_1233 = (-10L);
static unsigned *****g_1263 = (void*)0;
static unsigned ******g_1262 = &g_1263;
static int g_1280 = (-5L);
static unsigned g_1361 = 0x73F638F1L;



static union U0 func_1(void);
static int * func_2(int p_3, unsigned p_4, unsigned p_5, int * p_6);
static unsigned char func_14(short p_15, char p_16, char p_17, int * p_18);
static short func_19(unsigned p_20, char p_21);
static char func_24(unsigned short p_25, unsigned p_26, unsigned p_27);
static int * func_29(unsigned p_30, int p_31, int * p_32, short p_33);
static int func_35(unsigned short p_36);
static unsigned short func_40(int * p_41, unsigned p_42, unsigned p_43, int * p_44);
static int * func_45(int * p_46, int p_47);
static int * func_48(short p_49, union U0 p_50, int p_51);
static union U0 func_1(void)
{
    short l_8 = 0xED1AL;
    int l_11 = (-1L);
    int l_682 = 0L;
    unsigned short l_683 = 65533UL;
    unsigned short *l_1182 = &g_1183;
    int *l_1184 = &g_1185;
    int **l_1367 = &l_1184;
    int *l_1368 = &g_253;
    (*l_1367) = func_2((l_11 = ((l_8 ^= g_7) >= (((safe_mod_func_int32_t_s_s((-8L), g_7)) < l_11) < ((*l_1182) ^= ((safe_sub_func_uint8_t_u_u(func_14(((*g_664) = func_19(g_7, g_7)), (l_682 = (g_681 = (safe_mul_func_uint8_t_u_u(l_11, ((void*)0 == &g_566))))), l_683, &l_11), g_872)) == g_872))))), l_683, l_683, l_1184);



    ;
    ;
    ;
    ;
    ;
    g_401 = (l_11 ^= ((*l_1368) ^= ((*l_1184) = (*l_1184))));
    return g_52;


    }







static int * func_2(int p_3, unsigned p_4, unsigned p_5, int * p_6)
{
    short l_1190 = 0x352AL;
    int l_1202 = 7L;
    unsigned *****l_1209 = (void*)0;
    int *l_1218 = (void*)0;
    int *l_1219 = (void*)0;
    unsigned l_1228 = 0UL;
    unsigned l_1229 = 4294967295UL;
    char *l_1230 = &g_70;
    unsigned *l_1239 = (void*)0;
    unsigned **l_1238 = &l_1239;
    unsigned ***l_1237 = &l_1238;
    unsigned l_1266 = 0xBF5E6EB1L;
    short l_1271 = (-3L);
    short l_1281 = (-3L);
    unsigned short *l_1287 = &g_185;
    unsigned short **l_1286 = &l_1287;
    unsigned short ***l_1285 = &l_1286;
    unsigned short l_1288 = 2UL;
    unsigned short l_1290 = 0x37BAL;
    int *l_1291 = (void*)0;
    unsigned char l_1292 = 5UL;
    int **l_1293 = &g_124;
    int **l_1294 = &l_1219;
    int *l_1366 = &g_1185;
    for (g_467.f0 = 0; (g_467.f0 != 40); ++g_467.f0)
    {
        unsigned char l_1192 = 0UL;
        int *l_1193 = &g_57;
        unsigned short *l_1199 = &g_1183;
        unsigned *****l_1207 = &g_655;
        union U0 *l_1214 = (void*)0;
        for (g_57 = 15; (g_57 > 21); g_57 = safe_add_func_uint32_t_u_u(g_57, 9))
        {
            short l_1191 = 0x72C1L;
            l_1191 = l_1190;
        }
        if (((l_1192 || (*g_664)) && (l_1190 > (l_1202 = (*l_1193)))))
        {
            if ((*p_6))
            {
                for (g_681 = 28; (g_681 > 8); g_681 = safe_sub_func_int8_t_s_s(g_681, 9))
                {
                    if ((*l_1193))
                        break;
                    (*p_6) ^= (safe_rshift_func_int16_t_s_u((p_3 && p_3), 11));
                }
            }
            else
            {
                (*l_1193) ^= ((*p_6) = (*p_6));
                (*p_6) |= (*l_1193);
            }
            (*p_6) = (*p_6);
        }
        else
        {
            unsigned ******l_1208 = &l_1207;
            unsigned ******l_1210 = &l_1209;
            if ((((*l_1208) = l_1207) == ((*l_1210) = l_1209)))
            {
                int *l_1213 = (void*)0;
                (*p_6) = (safe_sub_func_uint16_t_u_u(g_1185, g_1185));
                l_1213 = l_1213;
            }
            else
            {
                union U0 **l_1215 = &l_1214;
                (*p_6) = ((*l_1193) ^ 4294967295UL);
                (*l_1215) = l_1214;
                if ((*p_6))
                    break;
                return l_1193;


            }
        }
    }

    if (((safe_rshift_func_int16_t_s_u(((l_1202 ^= (*p_6)) == (((*g_664) ^ p_3) == (*p_6))), 7)) || (safe_add_func_uint16_t_u_u((((*l_1230) = (safe_lshift_func_uint8_t_u_u((p_3 == (safe_mod_func_int32_t_s_s(l_1228, p_3))), 2))) < g_467.f1), g_760))))
    {
        unsigned char l_1234 = 0x5AL;
        unsigned *l_1244 = &g_52.f0;
        unsigned char ***l_1257 = &g_541;
        int l_1267 = (-1L);
        union U0 l_1268 = {0UL};
        int **l_1269 = &g_124;
        (*p_6) = (safe_lshift_func_uint16_t_u_u(g_1233, ((l_1234 < (*p_6)) || ((safe_add_func_int8_t_s_s((l_1237 != (void*)0), (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(p_5, 1)), p_5)))) & (*p_6)))));
        (*l_1269) = func_48((safe_mul_func_uint16_t_u_u(g_185, (((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((p_5 < ((0x334DF0F3L && (((safe_rshift_func_int16_t_s_s(((p_5 != ((((*l_1257) = &g_542) != (void*)0) <= (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((void*)0 != g_1262), (safe_sub_func_uint32_t_u_u((g_413 || 248UL), l_1266)))), 0UL)))) ^ 0xD912A2BDL), p_4)) && l_1234) && g_103)) & 0x66L)), l_1234)), l_1267)) <= l_1267) < p_4))), l_1268, g_401);

        ;
    }
    else
    {
        int l_1270 = 0x57000142L;
        unsigned short *l_1282 = &g_228;
        (*p_6) ^= ((l_1270 > (p_3 | l_1271)) != 0xD765L);
        (*p_6) |= (g_588 && (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((p_4 & ((safe_add_func_uint32_t_u_u(p_4, p_5)) != (safe_sub_func_int16_t_s_s((*g_664), p_4)))), g_1280)), ((*l_1282) = (p_5 != l_1281)))));
        (*p_6) ^= ((1UL & ((*g_542) = ((-1L) || 0x78L))) > 0x109EA7F3L);
    }
    (*l_1294) = ((*l_1293) = &l_1202);

    ;
    ;
    for (g_681 = 20; (g_681 == 14); g_681 = safe_sub_func_int16_t_s_s(g_681, 2))
    {
        int l_1299 = (-5L);
        unsigned char l_1313 = 0xDCL;
        short **l_1314 = &g_664;
        unsigned l_1316 = 0xEAC4D648L;
        unsigned ***l_1341 = &l_1238;
        int l_1362 = (-1L);
        (*l_1294) = (*l_1293);
        for (g_168 = 6; (g_168 > 10); g_168++)
        {
            unsigned short l_1304 = 5UL;
            short ***l_1315 = &g_663;
            unsigned l_1323 = 0x0CA2DA2CL;
            int l_1334 = 0xFBEFC4C2L;
            unsigned **l_1360 = &l_1239;
            int *l_1365 = &g_55;
            l_1299 = (**l_1293);
            (**l_1294) = (safe_sub_func_int32_t_s_s(0x1AAC01CFL, (((safe_mod_func_uint8_t_u_u(((l_1304 >= ((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((**l_1294), (safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((((*l_1230) = ((~(**l_1293)) || p_5)) == l_1313), (1L < (l_1314 == ((*l_1315) = (void*)0))))) < p_5), p_4)))), l_1313)) | l_1316)) || l_1304), 0xDBL)) & (**g_541)) < 0x6F2E6FCCL)));

            ;
            if ((*p_6))
            {
                unsigned l_1347 = 1UL;
                unsigned char l_1348 = 0x5AL;
                if ((l_1299 | ((*p_6) <= (safe_add_func_uint16_t_u_u((p_4 ^ p_4), 65535UL)))))
                {
                    unsigned ****l_1346 = &l_1341;
                    (*p_6) ^= (&p_3 == (void*)0);
                    l_1323 &= (safe_rshift_func_uint8_t_u_s(1UL, 1));
                    if (l_1323)
                    {
                        char l_1339 = (-8L);
                        unsigned ***l_1340 = &l_1238;
                        unsigned ***l_1342 = &l_1238;
                        (**l_1294) = ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((*g_664), (l_1334 = 0xBCB0L))), 3)) == (safe_mod_func_int8_t_s_s(((p_3 ^ (safe_rshift_func_uint8_t_u_s((g_52.f2 & l_1339), (l_1340 != (l_1342 = l_1341))))) ^ 3UL), p_5))), 0x3F1BL)), p_3)) & l_1339), l_1316)) || l_1299);
                    }
                    else
                    {
                        unsigned *****l_1345 = &g_655;
                        (*l_1219) |= (safe_mul_func_uint8_t_u_u((l_1323 == p_4), (((*l_1345) = &g_656) == l_1346)));

                        ;
                        l_1347 = ((*p_6) = (0xBBL | p_5));
                    }
                }
                else
                {
                    int l_1353 = 0x81029BDEL;
                    if (l_1348)
                        break;
                    l_1362 = (((*p_6) ^= (g_170 == (safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((l_1353 = p_3), (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(((**g_541) &= p_3), 2L)), p_5)), (((*l_1237) = l_1360) == l_1360))))) <= g_1361), 1)))) > p_4);
                }
                (*g_124) |= (*p_6);
                for (g_1280 = 27; (g_1280 <= (-2)); g_1280--)
                {
                    return &g_55;



                }
            }
            else
            {
                return l_1365;



            }
        }
        (*l_1294) = (*l_1293);
    }
    return l_1366;



}







static unsigned char func_14(short p_15, char p_16, char p_17, int * p_18)
{
    unsigned *l_687 = &g_467.f1;
    unsigned **l_686 = &l_687;
    int l_690 = 0x8F5A80E5L;
    unsigned char *l_692 = &g_415;
    unsigned char **l_691 = &l_692;
    int l_699 = 0xFC049C03L;
    unsigned ****l_702 = (void*)0;
    int *l_725 = &g_253;
    int *l_777 = (void*)0;
    short l_801 = 2L;
    char l_845 = 0xFDL;
    unsigned short *l_908 = &g_185;
    unsigned short **l_907 = &l_908;
    unsigned short ***l_906 = &l_907;
    unsigned l_911 = 0xB61D14BBL;
    int l_912 = 0L;
    unsigned char l_921 = 0x26L;
    unsigned short l_928 = 0UL;
    unsigned l_938 = 4294967288UL;
    int *l_982 = (void*)0;
    int *l_988 = &g_253;
    int l_1064 = (-1L);
    short l_1083 = 1L;
    unsigned char l_1138 = 255UL;
    union U0 *l_1144 = &g_467;
    unsigned short l_1173 = 0x79D4L;
    int *l_1178 = &l_699;
    if (((safe_sub_func_uint8_t_u_u((((l_686 == &l_687) == ((safe_lshift_func_int16_t_s_s(((**g_663) = (p_17 && ((l_690 = ((p_17 != l_690) && ((*l_687) = (((*g_541) != ((*l_691) = (*g_541))) || ((safe_add_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(((((*g_542) &= ((safe_add_func_uint32_t_u_u((l_690 > ((0xA2L == 5UL) == l_690)), (*p_18))) > l_690)) || (*g_542)) > l_690), 0xB7A6L)) & l_690) & p_17), (*p_18))) >= p_17))))) && (*g_664)))), 9)) < 0x476D0F32L)) || 0xD3EDL), l_699)) <= p_17))
    {
        int l_726 = (-1L);
        int *l_775 = (void*)0;
        unsigned l_784 = 0UL;
        unsigned char **l_785 = &l_692;
        short *l_800 = &g_170;
        unsigned short *l_802 = &g_53;
        unsigned l_804 = 5UL;
        if ((*p_18))
        {
            unsigned l_714 = 0x0FCE4239L;
            int l_715 = (-6L);
            unsigned char l_730 = 1UL;
            unsigned **l_743 = (void*)0;
            short l_748 = 0x1333L;
            for (g_588 = (-10); (g_588 > (-23)); --g_588)
            {
                unsigned *****l_703 = &g_655;
                unsigned l_727 = 0x7C3AF9F3L;
                int *l_729 = (void*)0;
                int l_742 = 0xD68590BAL;
                if ((((*l_703) = l_702) != &g_656))
                {
                    unsigned short l_706 = 0UL;
                    int *l_711 = &g_401;
                    union U0 l_718 = {0x09786FF1L};
                    int *l_728 = (void*)0;
                    l_715 |= ((safe_mul_func_int16_t_s_s((-1L), l_706)) >= (safe_add_func_uint32_t_u_u(((**l_686) |= ((safe_mod_func_int8_t_s_s(p_17, (**g_541))) ^ p_16)), l_714)));
                    for (g_52.f2 = (-1); (g_52.f2 >= (-24)); g_52.f2 = safe_sub_func_uint8_t_u_u(g_52.f2, 2))
                    {
                        p_18 = func_48(((void*)0 == (*g_663)), l_718, (*l_711));

                        ;
                        (*l_711) |= (*p_18);
                    }

                                        (*l_725) = ((safe_add_func_uint8_t_u_u((l_699 != ((*l_711) != l_730)), 246UL)) < p_15);
                }
                else
                {
                    unsigned char l_744 = 1UL;
                    int **l_745 = &l_729;
                    unsigned ***l_754 = &l_743;
                    (*l_745) = p_18;


                    if ((safe_lshift_func_int8_t_s_u((l_748 >= ((void*)0 == (*g_541))), 3)))
                    {
                        int l_749 = 0L;
                        l_726 = (l_749 ^= ((*l_725) = l_726));
                    }
                    else
                    {
                        (*l_725) |= (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((p_15 == ((*g_664) >= p_16)), (l_754 != g_656))), 7));
                        if ((**l_745))
                            break;
                    }
                    if (((safe_lshift_func_int8_t_s_s(l_730, (*l_729))) == (l_730 != 0xC3FCL)))
                    {
                        (*l_725) &= (-4L);
                        if ((*l_729))
                            break;
                        return (*g_542);
                    }
                    else
                    {
                        int l_759 = 0x819C3E6CL;
                        l_759 = (safe_rshift_func_int8_t_s_s(l_726, 4));
                    }
                    if (g_760)
                        break;
                }

                                ;

            }

            ;

            return l_715;
        }
        else
        {
            short **l_767 = &g_664;
            unsigned l_770 = 0xFFF3328BL;
            char *l_771 = &g_566;
            int *l_772 = &l_690;
            int **l_776 = &l_772;
            (*l_772) |= (safe_rshift_func_int8_t_s_s(((*l_771) = ((safe_sub_func_int8_t_s_s((*l_725), ((safe_rshift_func_uint8_t_u_u((*l_725), (l_726 &= ((*g_542) ^ ((((void*)0 == l_767) == ((*p_18) >= ((**l_686) |= (safe_lshift_func_int16_t_s_s((((void*)0 == (*g_219)) ^ g_70), 5))))) == l_770))))) != (**g_663)))) | p_16)), 6));
            for (g_760 = (-15); (g_760 <= 45); g_760++)
            {
                l_775 = (void*)0;
            }
            (*l_776) = &l_726;

            ;
            l_777 = ((*l_776) = (void*)0);

            ;
        }
        (*l_725) = (l_726 > l_726);
    }
    else
    {
        unsigned l_807 = 0x1727721EL;
        unsigned ****l_808 = &g_656;
        unsigned ****l_809 = &g_656;
        unsigned short *l_812 = &g_185;
        char l_816 = 0xFCL;
        int *l_830 = &g_401;
        union U0 *l_864 = &g_467;
        unsigned char **l_890 = &g_542;
        int *l_899 = &g_401;
        int l_979 = 0x397EA5EFL;
        short l_980 = 0x9D42L;
        unsigned l_997 = 0xD80A2EF0L;
        unsigned l_1006 = 1UL;
        int l_1016 = (-1L);
        if (((safe_rshift_func_int8_t_s_u(((l_807 | (l_808 == l_809)) | p_16), (safe_sub_func_uint16_t_u_u(p_17, ((*l_812) &= g_53))))) == ((p_15 | ((*g_655) != (void*)0)) <= 0x350FL)))
        {
            char *l_815 = (void*)0;
            int l_818 = 7L;
            short *l_839 = (void*)0;
            short *l_841 = (void*)0;
            short **l_840 = &l_841;
            unsigned *l_861 = (void*)0;
            int *l_871 = &g_401;
            if (((safe_mod_func_uint8_t_u_u((*g_542), (l_816 = p_17))) && 1L))
            {
                unsigned short l_817 = 0x981EL;
                int *l_824 = &l_818;
                union U0 l_825 = {3UL};
                int **l_829 = &l_824;
                l_818 = l_817;
                for (p_16 = (-24); (p_16 == (-15)); p_16 = safe_add_func_uint32_t_u_u(p_16, 8))
                {
                    int l_821 = 0xC3FFDEE6L;
                    (*l_725) = (*p_18);
                }
                (*l_829) = func_48((*g_664), l_825, (safe_sub_func_uint8_t_u_u((4L > (((*l_824) && ((65530UL ^ l_818) | 0xFB9BL)) && ((((*l_725) &= ((p_17 && p_17) & (*l_824))) != 2UL) && p_15))), g_828)));

                ;
                (**l_829) = (p_17 > 0x45L);
            }
            else
            {
                l_830 = &l_818;

                ;
                (*l_830) = (*l_830);
            }

            ;
            (*l_830) = 0xFCAB07FDL;
            if ((((*l_830) ^ (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((*g_664), ((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*g_542) = (p_16 & (l_839 == ((*l_840) = (void*)0)))), (((safe_unary_minus_func_uint16_t_u(l_818)) != (safe_add_func_uint32_t_u_u((l_845 && ((*l_812) = ((-5L) == (safe_add_func_uint16_t_u_u((255UL | (*l_725)), 3L))))), p_16))) >= p_17))), (*l_830))) > (-3L)))), 0xB0L))) >= (-1L)))
            {
                int *l_848 = &g_401;
                unsigned l_853 = 0xC5CD81A2L;
                unsigned *l_854 = &g_467.f0;
                union U0 **l_855 = &g_675;
                int l_856 = 0x9C761505L;
                l_818 &= (*p_18);
                if ((*p_18))
                {
                    int *l_862 = &l_699;
                    if ((*l_848))
                    {
                        (*l_725) = (*l_848);
                    }
                    else
                    {
                        l_856 &= ((*l_848) ^= ((*g_219) == (*g_219)));
                        (*l_725) = (-1L);
                    }
                    (*l_848) = (safe_lshift_func_uint8_t_u_s((func_40(func_48(((*g_664) = 0x1E82L), g_467, g_467.f2), (((safe_rshift_func_int8_t_s_u(p_17, 5)) == (p_15 < (l_861 == l_725))) & (*p_18)), (*l_725), l_862) || (-5L)), p_17));
                    (*l_862) ^= 0x2A06753FL;
                    (*l_725) ^= (*l_848);
                }
                else
                {
                    int l_863 = 0x736B420FL;
                    int l_870 = (-1L);
                    l_830 = (p_18 = p_18);


                    for (l_853 = 0; (l_853 < 8); l_853 = safe_add_func_uint8_t_u_u(l_853, 9))
                    {
                        int **l_869 = &l_725;
                    }
                    (*l_848) = func_40(&l_863, ((g_352 && l_870) ^ (-1L)), l_818, l_871);
                }


                return g_872;
            }
            else
            {
                int **l_873 = &g_124;
                (*l_871) = (*p_18);
                p_18 = ((*l_873) = p_18);


                (*l_725) &= ((safe_lshift_func_int16_t_s_u((((*g_664) > p_16) == (g_62 & (safe_add_func_int8_t_s_s((**l_873), (safe_lshift_func_int8_t_s_u((p_17 ^ (p_17 == ((((safe_rshift_func_uint8_t_u_s(((*l_871) & p_17), 4)) >= (*l_871)) > 0x63L) < (**g_541)))), 1)))))), g_413)) == 0x47C2L);
                for (g_228 = (-18); (g_228 != 7); ++g_228)
                {
                    unsigned l_884 = 0x4DCC3712L;
                    (*l_830) = l_884;
                }
            }


        }
        else
        {
            int *l_889 = &l_690;
            (*l_725) = ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((*l_725), g_228)), (**g_541))) & p_16);
        }



        for (g_760 = 0; (g_760 < 11); g_760 = safe_add_func_uint8_t_u_u(g_760, 8))
        {
            int **l_900 = &l_725;
            (*l_900) = p_18;


        }


        for (g_103 = 0; (g_103 == 45); ++g_103)
        {
            int l_903 = 0x574934A4L;
            if ((l_903 || 0x1AE5C2C4L))
            {
                return (**g_541);
            }
            else
            {
                (*l_899) ^= (safe_sub_func_int16_t_s_s(((void*)0 == l_906), (p_17 <= ((&l_864 == (void*)0) <= ((~(p_16 ^ (p_16 ^ (safe_sub_func_int16_t_s_s(((**g_663) > (3UL >= 0x14L)), (-1L)))))) && (*g_664))))));
                if (l_911)
                    continue;
                (*l_899) = (p_16 | p_15);
            }
        }
        if ((l_912 = (*p_18)))
        {
            unsigned short l_913 = 0xB7EAL;
            int *l_914 = &g_253;
            int **l_915 = &l_725;
            union U0 *l_918 = &g_52;
            unsigned l_946 = 0xCDFCAD4FL;
            (*l_915) = &l_699;

            ;
            if ((safe_lshift_func_uint8_t_u_s(p_16, ((l_918 == &g_467) <= (g_52.f0 | p_17)))))
            {
                (*l_899) = 3L;
            }
            else
            {
                char **l_929 = (void*)0;
                int l_941 = 7L;
                int l_947 = 0x05347A4AL;
                (*l_899) &= (safe_rshift_func_uint16_t_u_s((**l_915), 5));
                if (((**l_915) = (**l_915)))
                {
                    int *l_930 = (void*)0;
                    int *l_931 = (void*)0;
                    int *l_932 = (void*)0;
                    int *l_933 = &l_690;
                    int *l_948 = &g_57;
                    char *l_953 = &g_230;
                    char *l_957 = &l_816;
                    union U0 *l_965 = &g_52;
                    (*l_948) &= (l_947 |= ((safe_rshift_func_uint8_t_u_u(1UL, (safe_lshift_func_uint8_t_u_u(0x77L, ((*l_899) = ((**l_691) = l_928)))))) > (((+((*l_933) = ((*l_914) = ((**l_915) |= ((void*)0 == l_929))))) | (0x41F23A4DL | (safe_sub_func_uint32_t_u_u((((p_16 = (safe_mod_func_uint32_t_u_u(l_938, (safe_sub_func_int8_t_s_s(((((l_941 = (*p_18)) || (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((p_18 != l_933) > g_70), p_15)), 6))) ^ l_946) == 0x6764571DL), 7UL))))) != 7L) >= p_15), g_185)))) > (-3L))));
                    for (g_413 = 0; (g_413 == 50); g_413 = safe_add_func_uint16_t_u_u(g_413, 6))
                    {
                        char **l_954 = (void*)0;
                        char *l_956 = &l_845;
                        char **l_955 = &l_956;
                        char **l_958 = &l_957;
                        union U0 **l_966 = &g_675;
                        (*l_899) &= (((*g_664) = (safe_sub_func_uint32_t_u_u((*l_933), (((*l_955) = (l_953 = l_953)) == ((*l_958) = l_957))))) < (safe_sub_func_int16_t_s_s((p_17 && p_15), (0x17526801L ^ (*l_914)))));

                        ;
                        (*l_948) = 1L;
                        (*l_725) = (((void*)0 == p_18) || ((*l_914) > ((safe_sub_func_uint32_t_u_u(l_941, (*p_18))) >= 0UL)));
                        (*l_966) = l_965;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned l_976 = 1UL;
                    union U0 **l_978 = &g_675;
                    union U0 ***l_977 = &l_978;
                    int *l_981 = &l_947;
                    (*l_725) = (-1L);
                    (**l_915) = ((g_253 < (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(g_55)), (*g_542))) || (((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((l_947 ^ ((p_17 ^ (p_16 = (l_976 ^ (*g_664)))) ^ (((*l_977) = &l_864) == &g_675))), l_979)) >= l_947), p_17)) < p_17) >= g_401)), g_352))) < l_980);

                    ;
                    if ((*p_18))
                    {
                        l_982 = l_981;

                        ;
                    }
                    else
                    {
                        return p_17;
                    }

                    ;
                }

                ;
                ;
                return (*g_542);
            }
            for (g_803 = (-2); (g_803 == 18); g_803++)
            {
                int *l_987 = &l_912;
                unsigned l_1000 = 0xDB68E56DL;
                int l_1010 = 0x6809B2C2L;
                for (l_928 = 0; (l_928 >= 56); ++l_928)
                {
                    p_18 = (*l_915);

                    ;
                    if ((*l_725))
                        continue;
                    (*l_915) = l_987;

                    ;
                    (*l_915) = p_18;

                    ;
                }
                l_988 = (void*)0;

                ;
                for (g_352 = (-1); (g_352 >= (-27)); g_352 = safe_sub_func_int8_t_s_s(g_352, 7))
                {
                    unsigned l_1005 = 0x7F528A3DL;
                    int *l_1011 = &l_690;
                    (*l_899) |= (safe_lshift_func_uint8_t_u_s((*g_542), 7));
                    if ((safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((~p_17) == (l_997 = ((*l_687) ^= p_16))), (safe_mod_func_int16_t_s_s(((*l_899) || l_1000), (safe_mul_func_int8_t_s_s(0x11L, (((*l_812) ^= ((p_16 == ((safe_rshift_func_uint16_t_u_u(4UL, ((((*l_914) > (0xA6L | g_170)) ^ 4294967291UL) > (*g_542)))) > 0L)) && l_1005)) || 1L))))))) == l_1006), p_17)))
                    {
                        unsigned char l_1009 = 1UL;
                        (*l_987) |= ((safe_lshift_func_int16_t_s_s(0x8AD1L, 1)) >= ((*l_908) ^= 65527UL));
                        (*l_987) = ((((void*)0 == &p_18) & ((**l_691) = (*g_542))) & l_1009);
                        (*l_914) = l_1010;
                        (*l_915) = l_1011;

                        ;
                    }
                    else
                    {
                        int ***l_1014 = &l_915;
                        int ****l_1015 = &g_175;
                        (*l_899) = ((safe_lshift_func_uint8_t_u_s((((*l_1015) = l_1014) == (void*)0), 7)) > (*l_914));

                        ;
                    }
                    if (l_1016)
                        continue;
                    if ((**l_915))
                        break;
                }
                (*l_915) = &l_690;

                ;
            }

            ;

            ;
            ;
        }
        else
        {
            unsigned short l_1019 = 0x455CL;
            int l_1032 = (-2L);
            int l_1070 = 0x18A89706L;
            char *l_1091 = &g_70;
            char **l_1090 = &l_1091;
            int l_1106 = 0x70650785L;
            unsigned l_1122 = 4294967295UL;
            unsigned l_1137 = 0x51D4A5CFL;
            int l_1139 = 0L;
            unsigned short l_1142 = 3UL;
            union U0 *l_1143 = &g_52;
            union U0 *l_1145 = &g_52;
            short **l_1177 = (void*)0;
            if (((*l_988) = (0xB2L ^ (safe_mul_func_int8_t_s_s((l_1019 != p_17), ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_15, ((l_1019 == ((void*)0 != (*g_655))) & (safe_add_func_uint8_t_u_u((**g_541), (p_16 = l_1019)))))), (*g_542))) || (*p_18)), p_17)), 65532UL)) != l_1032))))))
            {
                (*l_899) = (-1L);
                return p_16;
            }
            else
            {
                int l_1037 = 0x3E45A50AL;
                int l_1045 = 1L;
                int **l_1046 = &l_725;
                l_1037 &= ((3L < 4UL) || (((*l_988) & (((safe_lshift_func_uint8_t_u_s(((void*)0 != &g_52), ((-7L) || p_17))) < (safe_mod_func_uint16_t_u_u((*l_899), ((((-1L) >= 5L) && (*l_899)) || g_230)))) && p_16)) || p_16));
                (*l_899) |= ((l_1019 == (safe_sub_func_uint8_t_u_u(((p_15 && (0UL > p_17)) != p_15), ((((l_1045 = ((~0UL) != (safe_sub_func_uint16_t_u_u(p_17, (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_s(p_17, l_1037)))))))) || 0x3DFF0680L) <= p_17) < 0xF298L)))) || (-4L));
                (*l_1046) = (void*)0;

                ;
            }

            ;
            (*l_899) &= ((safe_sub_func_uint16_t_u_u((p_16 && ((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((!((+0L) >= 0x71L)) ^ (safe_unary_minus_func_uint8_t_u((~((**l_691) = (*l_988)))))), (p_17 | (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_1019, p_15)), (p_16 = 0xFCL))), 2))))) != p_17), p_17)) < p_15)), l_1032)) || (*g_664));
            if ((*p_18))
            {
                int l_1071 = (-1L);
                unsigned *l_1085 = &g_103;
                short l_1111 = 1L;
                int l_1123 = (-3L);
                for (g_828 = 19; (g_828 != 45); ++g_828)
                {
                    int **l_1072 = &l_725;
                    if ((safe_sub_func_uint32_t_u_u((l_1064 == p_17), ((p_16 <= p_16) == 0x10DFL))))
                    {
                        unsigned short l_1067 = 0x84E1L;
                        return l_1067;
                    }
                    else
                    {
                        int **l_1068 = (void*)0;
                        int **l_1069 = &l_982;
                        (*l_1069) = p_18;


                        l_1070 = (*p_18);
                        if ((*p_18))
                            continue;
                        if (l_1071)
                            break;
                    }


                    (*l_1072) = p_18;


                }



                if ((*p_18))
                {
                    int l_1105 = 0xC332FCAAL;
                    int *l_1109 = (void*)0;
                    int **l_1110 = &g_124;
                    unsigned l_1118 = 0xEC17B2E6L;
                    unsigned l_1136 = 6UL;
                    (*l_988) |= ((*l_899) ^= (safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((void*)0 == l_1090), (safe_sub_func_int32_t_s_s((*p_18), l_1019)))), (safe_sub_func_uint16_t_u_u(p_16, (*g_664))))));
                    if (((*l_988) = (*p_18)))
                    {
                        return (*g_542);
                    }
                    else
                    {
                        char l_1119 = (-1L);
                        (*l_1110) = &l_690;

                        ;
                        l_1123 = ((l_1019 && (safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_24((p_16 & p_17), g_415, l_1118), l_1119)), g_467.f2)) && ((safe_mul_func_uint16_t_u_u(65535UL, g_103)) >= p_16)), 0x91DCL))) >= l_1122);


                        (*l_1110) = (l_830 = p_18);



                    }



                    (*l_899) = (safe_rshift_func_int8_t_s_u((0x53L ^ l_1071), l_1139));
                    (*l_899) = (*p_18);
                }
                else
                {
                    (*l_899) = ((l_1106 ^ (safe_add_func_int16_t_s_s(l_1142, ((g_467.f1 ^ (*l_988)) > l_1071)))) <= (**g_663));
                }


                return p_15;
            }
            else
            {
                unsigned *****l_1165 = &l_702;
                int l_1171 = 0L;
                (*l_899) ^= ((l_1143 != (l_1145 = l_1144)) || 0xEDL);

                ;
                (*l_899) = ((-5L) <= (**g_663));
                for (l_1138 = 0; (l_1138 != 4); l_1138 = safe_add_func_uint16_t_u_u(l_1138, 1))
                {
                    short *l_1150 = &l_1083;
                    short *l_1151 = (void*)0;
                    short *l_1152 = &g_588;
                    int l_1172 = 0L;
                    int *l_1174 = &l_699;
                    if ((safe_mul_func_int16_t_s_s(((((*l_1152) = ((*l_1150) = ((**g_663) &= p_15))) & ((*l_812) &= (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((safe_add_func_int32_t_s_s((*p_18), (safe_add_func_uint16_t_u_u((&l_808 == l_1165), (4294967287UL && g_760))))) && (g_872 < p_15)) > (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u((((9UL > (*l_988)) | p_15) <= p_17), 4)))), l_1171))), 0x3B7EL)), 14)), 0x92B7L)) | l_1172), 9)))) == 0x89L), p_17)))
                    {
                        return l_1173;
                    }
                    else
                    {
                        p_18 = &l_699;

                        ;
                        l_1174 = func_48((**g_663), (*l_864), g_52.f1);

                        ;
                        l_899 = (void*)0;

                        ;
                        return (*g_542);
                    }
                }
                for (p_15 = 0; (p_15 <= (-20)); p_15 = safe_sub_func_uint16_t_u_u(p_15, 6))
                {
                    g_663 = l_1177;

                    ;
                }

                ;
            }

            ;
            ;
        }


        ;

        ;
        ;
    }



        ;

    ;
    ;
    ;
    (*l_1178) &= 0x17A40045L;
    (*l_1178) |= (safe_sub_func_int32_t_s_s((((void*)0 == &l_938) != (&l_687 == &l_687)), (((*g_541) == (g_1181 = (void*)0)) && g_57)));

    ;
    p_18 = &l_912;

    ;
    return (*g_542);
}







static short func_19(unsigned p_20, char p_21)
{
    unsigned char l_28 = 9UL;
    int l_538 = (-1L);
    int *l_554 = (void*)0;
    int *l_564 = &g_401;
    unsigned l_565 = 4294967289UL;
    unsigned char l_568 = 0x27L;
    int l_617 = 1L;
    union U0 l_627 = {4294967291UL};
    unsigned char l_638 = 0xC0L;
    short *l_662 = &g_588;
    short **l_661 = &l_662;
    if (((safe_sub_func_int8_t_s_s(func_24(g_7, l_28, l_28), g_467.f1)) <= g_467.f0))
    {
        l_538 &= p_21;
    }
    else
    {
        l_538 = p_20;
    }


    if (((safe_lshift_func_uint8_t_u_s(p_20, 0)) | g_62))
    {
        int *l_553 = (void*)0;
        int *l_559 = &g_57;
        int **l_560 = &l_553;
        if (p_21)
        {
            unsigned char ***l_543 = &g_541;
            int *l_550 = &g_55;
            (*l_543) = g_541;
            (*l_550) = (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(1UL, 15)), 4)), p_20));
        }
        else
        {
            unsigned l_555 = 0x71B3FC1DL;
            int *l_556 = (void*)0;
            unsigned char *l_557 = &l_28;
            int *l_558 = &l_538;
            (*l_558) &= ((safe_add_func_int32_t_s_s(p_20, (l_557 == &l_28))) | g_228);
        }
        g_124 = ((*l_560) = l_559);

        ;
        ;
    }
    else
    {
        int *l_561 = (void*)0;
        unsigned *l_562 = &g_467.f0;
        unsigned *l_563 = &g_103;
        unsigned l_569 = 0xEA4BECD2L;
        int l_594 = 0xD61B08C7L;
        int l_601 = 1L;
        unsigned *l_612 = &g_7;
        unsigned **l_611 = &l_612;
        l_554 = (void*)0;
        (*l_564) = (*l_564);
        if (g_566)
        {
            int l_567 = 0L;
            unsigned short *l_572 = &g_228;
            char l_573 = 0x6FL;
            int *l_574 = &g_55;
            unsigned l_595 = 0x981EE30CL;
            unsigned *l_608 = (void*)0;
            unsigned **l_607 = &l_608;
            int l_659 = (-3L);
            l_567 |= 1L;
            l_568 ^= l_567;
            if ((g_52.f2 ^ 0x45B49817L))
            {
                short l_575 = (-1L);
                int l_576 = 9L;
                int *l_581 = &g_57;
                l_576 = (l_575 = 0xB3B75233L);
                if (((*l_581) = (((safe_rshift_func_uint16_t_u_s((((*l_564) |= ((*l_574) |= ((p_21 || (*g_542)) >= p_21))) < p_21), (safe_mul_func_uint16_t_u_u(g_7, (g_52.f1 ^ (+((**g_541) & p_21))))))) != (l_576 = (**g_541))) | g_352)))
                {
                    char l_598 = 0xB5L;
                    short *l_620 = (void*)0;
                    for (l_568 = 15; (l_568 > 35); l_568 = safe_add_func_uint32_t_u_u(l_568, 3))
                    {
                        int l_591 = 0xBB2D7024L;
                        unsigned char *l_592 = (void*)0;
                        unsigned char *l_593 = &g_399;
                        (*l_574) = (g_228 & (safe_mul_func_int8_t_s_s((*l_564), (p_20 >= (safe_mod_func_int32_t_s_s((((*l_574) || (p_20 & g_588)) > ((p_21 ^ ((**g_541) = (*l_574))) ^ (safe_add_func_uint8_t_u_u(((*l_593) = (l_591 > 0x7B92L)), l_594)))), l_595))))));
                    }
                    l_576 &= (safe_sub_func_uint8_t_u_u((((*l_574) ^= (p_21 > (((void*)0 == &g_541) > (p_20 & p_21)))) && (((~(**g_541)) | (((*l_564) = (7L == ((l_598 > ((*l_581) = (safe_add_func_uint8_t_u_u(p_20, 0x0DL)))) && p_20))) >= l_601)) || p_20)), 0x2CL));
                    if ((1L > (*l_581)))
                    {
                        unsigned char l_604 = 0xECL;
                        unsigned ***l_609 = (void*)0;
                        unsigned ***l_610 = &l_607;
                        (*l_581) &= (((safe_lshift_func_int8_t_s_u((l_604 | l_604), (+l_598))) | p_20) != (g_588 ^= ((safe_add_func_int32_t_s_s(((*l_564) = (&l_554 != (*g_219))), (((*l_610) = l_607) == l_611))) >= p_20)));
                        (*l_564) |= (safe_sub_func_int32_t_s_s((*l_581), (p_21 && (g_413 = (g_52.f1 = ((safe_lshift_func_int16_t_s_u(g_170, 8)) ^ ((void*)0 == &p_21)))))));
                    }
                    else
                    {
                        return g_467.f0;
                    }
                    (*l_574) = (l_617 || (l_569 == ((safe_sub_func_int16_t_s_s((g_588 = p_21), p_21)) == (253UL <= (p_21 <= func_40(func_48((safe_lshift_func_int16_t_s_u(g_52.f2, ((*l_572) = ((safe_mul_func_uint8_t_u_u(((((!p_21) && p_20) | 0L) || 1UL), p_21)) != 0xFAB13BD5L)))), l_627, g_467.f0), g_7, g_467.f1, &l_538))))));
                }
                else
                {
                    short l_628 = 0xF507L;
                    union U0 l_634 = {4294967286UL};
                    (*l_581) |= l_628;
                    (*l_574) = (p_21 < (g_352 && (p_21 != 1UL)));
                    for (g_399 = 0; (g_399 <= 6); g_399 = safe_add_func_uint8_t_u_u(g_399, 5))
                    {
                        int *l_631 = &l_538;
                        (*l_581) = (func_40(l_631, (g_62 ^ (safe_rshift_func_uint16_t_u_s((246UL | l_628), (*l_631)))), g_200, func_48((p_21 ^ (-7L)), l_634, g_7)) > 1L);
                    }
                }
            }
            else
            {
                int l_635 = (-8L);
                unsigned l_639 = 0x5A28A2CFL;
                char *l_640 = &l_573;
                unsigned char l_641 = 0x4FL;
                int **l_660 = &l_574;
                (*l_564) ^= (l_635 == (safe_mul_func_uint16_t_u_u(l_638, p_20)));
                if (((*l_564) = ((l_639 > (l_639 == ((*l_640) &= l_639))) > (**g_541))))
                {
                    unsigned short *l_650 = &g_228;
                    unsigned ****l_657 = &g_656;
                    int l_658 = 0x025A64EAL;
                    (*l_564) = (l_641 &= (*l_564));
                    (*l_574) &= l_635;
                    for (g_588 = 0; (g_588 > (-4)); g_588 = safe_sub_func_uint16_t_u_u(g_588, 1))
                    {
                        l_601 ^= ((*l_574) = ((safe_mod_func_uint8_t_u_u((~(safe_add_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((((void*)0 != l_650) & ((void*)0 != &l_564)), ((p_20 <= g_7) & (((safe_mul_func_uint8_t_u_u(((*g_542) |= (safe_rshift_func_int16_t_s_s((g_655 == l_657), 9))), ((p_20 > l_658) != l_658))) | p_20) == 0x75L)))) == l_659) < l_658), 8UL))), (*l_574))) & p_20));
                    }
                }
                else
                {
                    unsigned *l_671 = &l_569;
                    int l_672 = 9L;
                    int l_673 = 0x94A2CBA6L;
                    int **l_674 = &g_124;
                    l_574 = &l_635;

                    ;
                    (*l_660) = func_29((((l_660 == ((*g_219) = (*g_219))) ^ (l_661 != (g_663 = g_663))) != ((((((safe_rshift_func_int16_t_s_s(((*l_574) < l_601), 4)) || p_21) == 0xE7L) || (((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((l_672 = ((*l_671) = ((*l_564) >= 255UL))), 0xC4667F89L)) <= (**l_660)), (*g_542))) | 0x53L) <= l_673)) >= p_20) & 0x1BL)), p_21, (*l_660), (*g_664));

                    ;
                    (*l_674) = (l_574 = &g_253);

                    ;
                    ;
                }


                ;
                g_675 = (void*)0;

                ;
                (*l_564) |= (**l_660);
            }


            ;
            ;
        }
        else
        {
            int *l_676 = (void*)0;
            unsigned char ***l_677 = &g_541;
            union U0 *l_678 = &g_467;
            l_676 = &l_601;

            ;
            (*l_677) = &g_542;
            l_678 = l_678;
        }


        ;
    }


    ;
    (*l_564) &= p_21;
    return (*l_564);
}







static char func_24(unsigned short p_25, unsigned p_26, unsigned p_27)
{
    unsigned l_34 = 0x773196E8L;
    char l_37 = 0x1AL;
    int *l_400 = &g_401;
    unsigned *l_412 = &g_413;
    unsigned char *l_414 = &g_415;
    l_400 = func_29(l_34, func_35(l_37), l_400, (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_26, g_7)) < (p_25 > (safe_sub_func_uint8_t_u_u(((*l_414) = (safe_mul_func_uint16_t_u_u((*l_400), (((*l_412) = g_401) >= 0x89315371L)))), 0xA1L)))), g_401)), g_401)));


    ;
    return l_34;
}







static int * func_29(unsigned p_30, int p_31, int * p_32, short p_33)
{
    unsigned *l_423 = &g_413;
    unsigned **l_422 = &l_423;
    unsigned ***l_421 = &l_422;
    unsigned ****l_420 = &l_421;
    int l_439 = 0xC0885935L;
    union U0 *l_441 = &g_52;
    short *l_500 = (void*)0;
    int l_507 = 0x6EB257A6L;
    int *l_537 = &g_55;
    for (g_52.f1 = 0; (g_52.f1 <= 37); g_52.f1 = safe_add_func_uint16_t_u_u(g_52.f1, 2))
    {
        unsigned ****l_424 = &l_421;
        char *l_434 = &g_70;
        short l_449 = 0x55AFL;
        int *l_475 = (void*)0;
        char l_487 = 0x44L;
        int l_502 = 4L;
        unsigned char l_533 = 7UL;
        int *l_536 = &g_253;
        if ((safe_rshift_func_int8_t_s_u(0xC6L, 6)))
        {
            char *l_427 = (void*)0;
            unsigned short *l_428 = &g_53;
            int l_440 = 0xD78D56A6L;
            int *l_446 = &g_253;
            int *l_447 = (void*)0;
            int *l_448 = &l_440;
            union U0 *l_466 = &g_467;
            int l_468 = (-7L);
            if (((l_420 == l_424) == ((*l_428) = (safe_mod_func_int8_t_s_s((l_427 != (void*)0), p_33)))))
            {
                unsigned l_429 = 0xD6255A89L;
                union U0 l_430 = {4294967293UL};
                int **l_431 = &g_124;
                (*l_431) = func_48(l_429, l_430, p_33);

                ;
                if ((*p_32))
                    continue;
                l_440 |= ((safe_lshift_func_uint8_t_u_u((l_434 == (void*)0), g_413)) || (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((((((*g_124) = l_439) ^ g_228) ^ 0xE7656C80L) | 0xFDF6L), p_33)), p_33)));
            }
            else
            {
                union U0 **l_442 = (void*)0;
                union U0 **l_443 = &l_441;
                union U0 *l_445 = &g_52;
                union U0 **l_444 = &l_445;
                (*l_444) = ((*l_443) = l_441);
                l_446 = (void*)0;

                ;
            }

            ;
            (*l_448) &= (*p_32);
            p_32 = &p_31;

            ;
            if (l_449)
            {
                unsigned char l_462 = 0x28L;
                union U0 *l_465 = (void*)0;
                int *l_476 = &l_440;
                for (g_352 = (-28); (g_352 >= 13); g_352 = safe_add_func_int16_t_s_s(g_352, 5))
                {
                    if ((safe_rshift_func_int8_t_s_s(l_439, 7)))
                    {
                        if ((*p_32))
                            break;
                        (*p_32) = (*p_32);
                        (*l_448) &= (safe_mul_func_uint16_t_u_u(l_439, ((*p_32) == (safe_add_func_int32_t_s_s((((*l_434) &= p_30) ^ (safe_mod_func_uint16_t_u_u(l_439, g_103))), (safe_mul_func_int8_t_s_s((p_33 == (l_462 == (p_33 <= (safe_mod_func_uint16_t_u_u(g_185, 0x87B1L))))), p_31)))))));
                    }
                    else
                    {
                        l_466 = l_465;

                        ;
                    }
                    l_468 &= (l_449 == g_467.f2);
                }

                ;
                for (l_462 = (-5); (l_462 <= 32); ++l_462)
                {
                    if ((((*l_434) = (&g_228 == &g_228)) < g_401))
                    {
                        unsigned l_473 = 0UL;
                        (*p_32) = (safe_mul_func_int16_t_s_s(l_462, l_473));
                    }
                    else
                    {
                        int *l_474 = &l_439;
                        return l_475;


                    }
                    return &g_55;


                }
                for (l_439 = 3; (l_439 != (-22)); l_439 = safe_sub_func_int16_t_s_s(l_439, 5))
                {
                    (*l_476) = ((p_33 || 0xF619L) == (safe_unary_minus_func_int8_t_s(p_33)));
                    if ((*p_32))
                        break;
                }
            }
            else
            {
                unsigned l_486 = 0x1DD455EDL;
                (*p_32) |= ((safe_add_func_int16_t_s_s((((p_33 && p_30) < (*l_448)) || ((p_33 >= ((*l_428) = l_439)) ^ (safe_add_func_uint16_t_u_u((p_33 ^ (safe_mod_func_uint32_t_u_u((*l_448), l_486))), g_399)))), g_228)) >= 0xDFA8L);
                (*l_448) &= l_487;
            }

            ;
        }
        else
        {
            unsigned l_488 = 0x8F4892E3L;
            unsigned short *l_506 = &g_53;
            unsigned l_512 = 4294967294UL;
            int *l_516 = &g_253;
            unsigned char *l_529 = &g_62;
            unsigned char *l_530 = &g_399;
            unsigned char *l_531 = (void*)0;
            unsigned char *l_532 = &g_415;
            if ((l_488 = (*p_32)))
            {
                short *l_497 = &l_449;
                short **l_498 = (void*)0;
                short **l_499 = (void*)0;
                int l_501 = 5L;
                union U0 l_513 = {0xEAC3A327L};
                int *l_514 = &l_507;
                char **l_515 = &l_434;
                l_502 = (g_53 == ((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_488 & p_33), g_52.f1)), ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(l_439, (&g_200 == (l_500 = l_497)))), g_52.f0)) || l_501))) & 0xF6B9B670L));

                ;
                l_502 ^= (*p_32);
                for (p_33 = 26; (p_33 > (-2)); p_33--)
                {
                    if (((*p_32) = l_501))
                    {
                        unsigned short *l_505 = (void*)0;
                        l_507 ^= (l_505 != l_506);
                    }
                    else
                    {
                        int l_511 = 0xD6E36051L;
                        l_512 ^= (safe_sub_func_uint8_t_u_u(p_30, (safe_unary_minus_func_uint16_t_u((!(((***l_421) = (l_511 < p_31)) <= (-6L)))))));
                        l_514 = func_48(p_30, l_513, p_33);

                        ;
                        (*p_32) |= ((l_515 != g_233) & (g_228 || p_33));
                    }
                }

                ;
            }
            else
            {
                return l_516;


            }

            ;
            l_533 &= (safe_add_func_uint32_t_u_u(((*p_32) & (safe_sub_func_uint8_t_u_u(p_31, (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(l_439, p_30)), 12))))), (safe_add_func_int32_t_s_s(((*l_516) &= (((*l_532) = ((*l_530) = (safe_mul_func_int8_t_s_s((p_30 != ((*l_529) |= 0UL)), 0xA7L)))) ^ l_439)), (*p_32)))));
        }


        ;
        (*p_32) ^= (safe_sub_func_int16_t_s_s(g_230, (p_33 == 0xE1CBF274L)));
        p_32 = &l_507;

        ;
        return l_536;


    }
    return l_537;


}







static int func_35(unsigned short p_36)
{
    int *l_252 = &g_253;
    g_399 ^= ((safe_mul_func_uint16_t_u_u(func_40(func_45(func_48(p_36, g_52, g_7), p_36), g_7, p_36, l_252), p_36)) | p_36);


    return (*l_252);
}







static unsigned short func_40(int * p_41, unsigned p_42, unsigned p_43, int * p_44)
{
    int l_254 = 0xF45CCC3FL;
    unsigned short *l_257 = &g_228;
    unsigned *l_355 = &g_7;
    unsigned **l_354 = &l_355;
    unsigned ***l_353 = &l_354;
    unsigned ***l_357 = &l_354;
    unsigned ****l_356 = &l_357;
    char *l_375 = (void*)0;
    char **l_374 = &l_375;
    int **l_392 = (void*)0;
    int **l_393 = &g_124;
    int **l_394 = &g_124;
    int **l_395 = &g_124;
    int **l_396 = &g_124;
    int **l_397 = &g_124;
    int *l_398 = &g_57;
    if (((l_254 != (((safe_sub_func_uint8_t_u_u(0xDDL, 6UL)) & (*p_41)) > (g_185 | ((*l_257) = l_254)))) != ((safe_sub_func_uint32_t_u_u((l_254 ^ g_55), (*p_41))) || 0xBCL)))
    {
        unsigned short ***l_260 = (void*)0;
        unsigned short **l_262 = (void*)0;
        unsigned short ***l_261 = &l_262;
        (*l_261) = &l_257;

        ;
        for (g_168 = 0; (g_168 < 12); g_168++)
        {
            (*p_41) &= l_254;
        }
        (*p_41) ^= (*p_44);
    }
    else
    {
        short l_329 = (-2L);
        int *l_330 = &g_55;
        int l_340 = 0xA532D318L;
        for (l_254 = (-29); (l_254 < (-20)); l_254++)
        {
            int *l_267 = &g_57;
            short *l_270 = &g_170;
            short *l_277 = &g_200;
            unsigned **l_320 = (void*)0;
            unsigned *l_322 = (void*)0;
            unsigned **l_321 = &l_322;
            l_267 = p_41;


            if ((safe_sub_func_int16_t_s_s((g_52.f2 & (((*l_270) = p_43) || p_43)), ((safe_sub_func_uint8_t_u_u(g_57, ((safe_lshift_func_uint16_t_u_u(((((*l_277) = (safe_add_func_uint8_t_u_u((g_53 | 1L), 0x05L))) ^ (p_42 | p_43)) && g_53), g_230)) >= g_52.f0))) ^ (*p_44)))))
            {
                for (g_185 = 0; (g_185 > 47); g_185++)
                {
                    for (g_62 = 0; (g_62 < 46); g_62 = safe_add_func_uint16_t_u_u(g_62, 1))
                    {
                        unsigned char l_286 = 0x10L;
                        unsigned *l_287 = &g_52.f1;
                        unsigned *l_288 = &g_52.f1;
                        unsigned *l_289 = &g_52.f1;
                        unsigned *l_290 = &g_52.f1;
                        unsigned *l_291 = &g_52.f1;
                        unsigned *l_292 = (void*)0;
                        unsigned *l_293 = &g_52.f1;
                        unsigned *l_294 = &g_52.f1;
                        unsigned *l_295 = &g_52.f1;
                        unsigned *l_296 = &g_52.f1;
                        unsigned *l_297 = &g_52.f1;
                        unsigned *l_298 = &g_52.f1;
                        unsigned *l_299 = &g_52.f1;
                        unsigned *l_300 = (void*)0;
                        unsigned *l_301 = (void*)0;
                        unsigned *l_302 = &g_52.f1;
                        unsigned *l_303 = &g_52.f1;
                        unsigned *l_304 = (void*)0;
                        unsigned *l_305 = &g_52.f1;
                        unsigned *l_306 = (void*)0;
                        unsigned *l_307 = &g_52.f1;
                        unsigned *l_308 = &g_52.f1;
                        unsigned *l_309 = &g_52.f1;
                        unsigned *l_310 = &g_52.f1;
                        unsigned *l_311 = (void*)0;
                        unsigned *l_312 = &g_52.f1;
                        unsigned *l_313 = &g_52.f1;
                        unsigned *l_314 = &g_52.f1;
                        int l_315 = 0xD1D7EA50L;
                        unsigned short *l_319 = &g_53;
                        (*p_44) = (*p_41);
                        (*l_267) = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_286, p_42)), ((p_42 && (((*l_290) = (l_315 = g_52.f0)) | (safe_mod_func_uint16_t_u_u(((*p_41) & p_43), ((*l_319) = (safe_unary_minus_func_uint8_t_u(((g_228 = p_43) || 1L)))))))) == g_55)));

                                                (*l_267) = ((l_315 = ((*p_41) == ((l_320 = (void*)0) != l_321))) & p_42);
                        (*l_267) ^= (safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(1UL, l_254)) <= ((safe_sub_func_int16_t_s_s(l_329, g_62)) && g_185)) || p_42), 4));
                    }
                    if ((*l_267))
                    {
                        return g_170;
                    }
                    else
                    {
                        return g_185;
                    }
                }
            }
            else
            {
                if ((*p_44))
                    break;
            }
            p_41 = l_330;

            ;
            return p_42;
        }
        l_330 = (void*)0;

        ;
        if ((g_57 || (0x22DE0C75L < p_42)))
        {
            char l_345 = 0x6EL;
            int l_346 = 0x24E7D5FCL;
            unsigned short *l_347 = &g_185;
            int *l_348 = (void*)0;
            int *l_349 = (void*)0;
            int *l_350 = &l_254;
            int l_351 = 0xE06A09E4L;
            (*l_350) &= (safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint32_t_u_u(4294967295UL, (*p_44))) < ((*l_347) = (l_346 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(4294967286UL, ((*p_41) = 1L))), ((((*l_257) ^= (0UL | (l_345 |= (safe_mod_func_int8_t_s_s(((l_329 | l_340) < ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(g_62, p_42)) > 0x290BL), 15)) <= 0x11A74DA8L)), (-7L)))))) & 0x9239L) ^ p_42))))))));
            (*p_41) |= (!l_351);
        }
        else
        {
            (*p_41) = l_254;
            g_352 = (*p_41);
            (*p_41) ^= l_254;
        }
    }
    if ((((*p_41) = l_254) || (l_353 == ((*l_356) = &l_354))))
    {
        char l_362 = 1L;
        unsigned char l_363 = 0xFEL;
        int *l_376 = &g_55;
        (*p_44) = ((safe_sub_func_int8_t_s_s(6L, ((((safe_sub_func_uint32_t_u_u(((l_362 <= l_363) >= (*p_41)), (*p_44))) || (safe_mul_func_int8_t_s_s(l_363, (safe_mul_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((g_52.f1 = p_43), p_43)) <= (safe_sub_func_int32_t_s_s(((((void*)0 == (*l_353)) > p_42) == g_7), (*p_44)))), g_55)) < 0L), p_42))))) ^ 0x31L) || l_363))) && g_62);

                l_376 = p_41;


        (*p_44) = (-5L);
    }
    else
    {
        int **l_377 = (void*)0;
        int **l_378 = &g_124;
        (*l_378) = &l_254;

        ;
        (*l_378) = &l_254;
        p_44 = p_44;
        for (g_103 = (-12); (g_103 < 14); g_103 = safe_add_func_uint16_t_u_u(g_103, 6))
        {
            unsigned l_381 = 4294967295UL;
            (*p_41) = l_381;
            if (l_254)
            {
                (*p_44) |= l_381;
                (*g_124) = ((safe_mul_func_int8_t_s_s(p_43, g_53)) != (safe_add_func_int8_t_s_s(p_43, (g_103 > (*p_41)))));
            }
            else
            {
                (*p_41) = (*p_44);
            }
            (*l_378) = func_48((**l_378), g_52, g_52.f2);

            ;
        }

        ;
    }


    (*p_44) = (p_42 >= ((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((~(((*l_356) = (*l_356)) == (void*)0)), 7)), (&l_353 == &l_353))), ((g_7 < 1L) ^ ((l_398 = (void*)0) != p_41)))) ^ p_43));

    ;
    return p_42;


}







static int * func_45(int * p_46, int p_47)
{
    int l_58 = 0x60A87187L;
    unsigned char *l_61 = &g_62;
    char *l_69 = &g_70;
    union U0 l_71 = {0UL};
    int **l_72 = (void*)0;
    int *l_74 = &g_57;
    int **l_73 = &l_74;
    unsigned l_161 = 0x0C5F837DL;
    int l_226 = (-1L);
    int *l_251 = &l_58;
    (*p_46) = (!1L);
    if (((&g_57 != (void*)0) && (((l_58 & ((~0xC1L) || 0x52L)) != (((((*l_73) = func_48((safe_sub_func_uint16_t_u_u((((*l_61) = 0xCEL) <= l_58), (((((*l_69) = (safe_mul_func_uint16_t_u_u(g_52.f2, ((safe_sub_func_int8_t_s_s((((safe_add_func_int8_t_s_s(0L, (-1L))) || 0xA629A01EL) != p_47), 8L)) | 0x16L)))) && p_47) < l_58) == g_7))), l_71, g_57)) == (void*)0) | 0UL) && g_62)) != p_47)))
    {
        unsigned short l_85 = 65526UL;
        int *l_92 = &g_57;
        unsigned char l_100 = 1UL;
        int ***l_198 = (void*)0;
        if ((*p_46))
        {
            int *l_78 = &g_57;
            int l_116 = 0x2CDE8027L;
            short *l_169 = &g_170;
            char ***l_234 = &g_233;
            if ((*p_46))
            {
                int *l_75 = &g_55;
                (*l_75) ^= (*p_46);
            }
            else
            {
                unsigned l_91 = 0UL;
                int l_129 = 7L;
                int l_144 = 4L;
                int l_145 = 0xA52CA836L;
                unsigned char l_146 = 254UL;
                if (g_57)
                {
                    unsigned l_90 = 0UL;
                    for (g_52.f2 = 15; (g_52.f2 >= 6); g_52.f2 = safe_sub_func_int16_t_s_s(g_52.f2, 2))
                    {
                        (*p_46) |= (!(-1L));
                        return l_78;


                    }

                    if ((p_47 = (0xEA34L && ((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(0L, p_47)) & (safe_rshift_func_uint8_t_u_s(0xAAL, 2))), ((l_85 && ((*l_69) |= (g_52.f1 || ((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((((g_55 ^ (g_57 = (*p_46))) < (p_47 || l_90)) == p_47), g_55)) <= l_90), g_52.f0)) & 8L) <= l_91) | l_91)))) < l_85))) <= g_62))))
                    {
                        (**l_73) = 0x453ACC8DL;
                        (*l_74) |= g_52.f0;
                        (*l_73) = &g_55;

                        ;
                        return l_92;


                    }
                    else
                    {
                        g_55 = g_55;
                    }
                }
                else
                {
                    unsigned short l_93 = 8UL;
                    (*l_92) = l_93;
                    (*l_74) |= 1L;
                }

                if ((*l_92))
                {
                    short l_117 = 0L;
                    for (l_91 = (-26); (l_91 < 23); l_91 = safe_add_func_int8_t_s_s(l_91, 4))
                    {
                        unsigned *l_101 = &g_52.f1;
                        unsigned short *l_102 = &g_53;
                        int *l_118 = &l_58;
                        g_103 &= (safe_mul_func_int16_t_s_s(g_70, ((safe_rshift_func_int16_t_s_u((p_47 & (*p_46)), ((*l_102) |= (l_100 >= (p_47 > (g_55 == ((*l_101) ^= p_47))))))) & (*l_92))));

                        if ((*p_46))
                            continue;
                        (*l_118) ^= ((safe_mod_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((~((void*)0 == &l_92)), 4)) & ((safe_lshift_func_int16_t_s_u(p_47, 6)) >= g_103)) && (safe_rshift_func_int16_t_s_s(g_57, p_47))), ((*l_69) ^= (g_52.f2 || (l_116 >= ((*l_101) = (0xAFL > l_117))))))), g_55)) > p_47) | g_55), 1UL)) && (-1L));
                        (*l_92) = 1L;
                    }
                }
                else
                {
                    int *l_119 = &g_55;
                    (*l_119) ^= ((*l_74) = (-1L));
                    if (((((safe_add_func_int16_t_s_s(p_47, (safe_add_func_uint8_t_u_u(p_47, g_70)))) & 0x76L) | 0UL) >= p_47))
                    {
                        g_124 = &l_116;

                        ;
                        (*l_73) = l_119;

                        ;
                    }
                    else
                    {
                        unsigned short *l_126 = &g_53;
                        unsigned short **l_125 = &l_126;
                        unsigned short *l_128 = &l_85;
                        unsigned short **l_127 = &l_128;
                        (*l_78) &= (((*l_125) = &g_53) != ((*l_127) = &g_53));

                        ;
                        (*g_124) = (**l_73);
                        l_129 |= ((*g_124) = (p_47 >= (((g_53 <= ((*l_74) | p_47)) == ((&g_57 == &p_47) < g_52.f0)) && (p_47 && (~g_53)))));
                    }

                    ;

                    if ((*g_124))
                    {
                        unsigned short *l_140 = &g_53;
                        unsigned *l_141 = (void*)0;
                        unsigned *l_142 = &l_91;
                        int l_143 = 0x4E8149F6L;
                        l_145 ^= (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((l_144 = (((*l_119) >= (&g_53 != (void*)0)) & (safe_sub_func_uint8_t_u_u(((((*l_142) = (((**l_73) >= ((6L <= (*l_74)) || (safe_rshift_func_uint8_t_u_s(l_129, 1)))) >= ((*l_140) = 1UL))) ^ p_47) <= (*g_124)), l_143)))), p_47)), 0L)), 1UL));
                    }
                    else
                    {
                        unsigned char l_162 = 0xD8L;
                        int **l_163 = &l_78;
                        int ***l_164 = &l_163;
                        int ***l_165 = &l_72;
                        (*g_124) = ((l_146 |= (*g_124)) != (0xF3L > (*l_119)));
                        (*l_73) = &p_47;

                        ;
                        (*g_124) = (safe_add_func_uint8_t_u_u(((((*l_61) = (((safe_mul_func_int16_t_s_s(1L, p_47)) || (safe_rshift_func_int8_t_s_s((((safe_mod_func_uint16_t_u_u(((l_78 != (void*)0) >= (safe_lshift_func_uint16_t_u_s(6UL, (8UL ^ (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*g_124), (((p_47 | g_52.f0) & l_161) & 3L))), p_47)))))), g_52.f0)) == p_47) != l_162), 6))) != 1UL)) == (*l_119)) != (*l_119)), 0xE3L));
                        (*l_74) ^= (((*l_164) = l_163) == ((*l_165) = &p_46));

                        ;
                    }

                    ;
                    ;
                    g_124 = &p_47;

                    ;
                }

                ;
                ;

                (*l_73) = (void*)0;

                ;
            }

            ;
            ;

            if ((safe_lshift_func_uint16_t_u_s(((g_168 = (*l_78)) == ((*l_169) = g_57)), 0)))
            {
                short l_171 = (-2L);
                if ((*g_124))
                {
                    (*l_78) &= l_171;
                }
                else
                {
                    int *l_172 = &g_55;
                    g_124 = l_92;

                    ;
                    (*l_172) ^= (*p_46);
                    (*g_124) = (*l_172);
                }


                for (l_58 = (-14); (l_58 == 11); ++l_58)
                {
                    if (((void*)0 != g_175))
                    {
                        unsigned short *l_184 = &g_53;
                        p_46 = &p_47;

                        ;
                        g_55 ^= ((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_47 < (safe_lshift_func_uint8_t_u_u((l_78 == &g_7), 5))), g_170)), ((*l_69) = ((safe_mul_func_uint16_t_u_u(((*l_184) &= p_47), p_47)) != (g_185 |= (0xD7L | (*l_78))))))) <= p_47);
                        (*l_92) = 0L;
                    }
                    else
                    {
                        int *l_186 = &l_58;
                        l_78 = l_186;

                        ;
                    }

                    ;
                    ;
                    return &g_57;



                }
            }
            else
            {
                unsigned *l_193 = &g_52.f1;
                unsigned *l_194 = &l_71.f1;
                int l_195 = 0x7E2578D8L;
                int ****l_199 = &g_175;
                if ((p_47 && (((*l_61) ^= (safe_lshift_func_int8_t_s_u((p_46 == &g_7), ((*g_124) < (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_194) = ((*l_193) ^= p_47)), g_57)), l_195)))))) > (safe_sub_func_uint32_t_u_u(((l_198 == ((*l_199) = (void*)0)) == g_55), p_47)))))
                {
                    unsigned short l_201 = 0x98C3L;
                    int **l_202 = (void*)0;
                    (*p_46) &= ((g_52.f0 > (*g_124)) <= (l_201 ^= g_200));
                    p_46 = ((*l_73) = &p_47);

                    ;
                    ;
                }
                else
                {
                    unsigned l_227 = 0x81F8B52BL;
                    for (l_58 = 0; (l_58 > 8); l_58 = safe_add_func_int32_t_s_s(l_58, 7))
                    {
                        (*g_124) = (g_53 <= 1UL);
                    }
                    (*l_73) = &p_47;

                    ;
                    for (l_71.f1 = 0; (l_71.f1 <= 11); l_71.f1 = safe_add_func_int32_t_s_s(l_71.f1, 1))
                    {
                        unsigned l_221 = 0x7B0E0470L;
                        unsigned short *l_222 = &l_85;
                        unsigned short *l_223 = (void*)0;
                        unsigned short *l_224 = (void*)0;
                        unsigned short *l_225 = &g_185;
                        char *l_229 = &g_230;
                        if ((*g_124))
                            break;
                        (*l_78) = (safe_lshift_func_uint16_t_u_u(0x55C0L, (*l_78)));
                        (*l_74) = (safe_mod_func_int32_t_s_s(((*l_78) = (*p_46)), (((*g_124) <= (safe_add_func_int32_t_s_s((!p_47), (((*l_229) = (g_228 = (((*l_169) = ((((safe_unary_minus_func_int16_t_s(((void*)0 == &l_116))) == (safe_lshift_func_int8_t_s_s((p_47 >= g_7), ((safe_unary_minus_func_uint16_t_u(0xB775L)) ^ ((((*l_69) = ((((*l_225) = ((*l_222) = (~(((safe_lshift_func_uint16_t_u_s((((*l_199) = g_175) == g_219), l_221)) & 1L) ^ p_47)))) ^ l_226) ^ l_221)) && g_200) != g_168))))) | l_227) && 0x35L)) || g_170))) > g_55)))) || 0UL)));
                        (*g_124) = (safe_mod_func_int16_t_s_s(9L, l_227));
                    }
                }

                ;
                                ;
            }

            ;
            ;

            (*l_234) = g_233;
            p_47 &= (*l_92);
        }
        else
        {
            char l_244 = 0L;
            unsigned *l_246 = &g_7;
            unsigned **l_245 = &l_246;
            unsigned ***l_247 = &l_245;
            for (g_70 = 22; (g_70 >= (-30)); g_70 = safe_sub_func_int16_t_s_s(g_70, 8))
            {
                unsigned char l_237 = 252UL;
                int l_238 = 0x5A96303EL;
                int *l_239 = &l_58;
                l_238 &= (g_55 && (g_52.f1 ^ (p_47 == ((g_57 || ((((*g_124) = (g_170 > 65530UL)) > (((g_168 | ((**l_73) && p_47)) || g_57) || l_237)) && 0x639DAFC3L)) <= 1UL))));
                l_239 = ((*l_73) = &p_47);

                ;
                ;
            }

            ;
            (*l_92) = ((-5L) ^ (safe_sub_func_int8_t_s_s(p_47, (0x0FL && (safe_mul_func_uint8_t_u_u(p_47, l_244))))));
            (*l_247) = l_245;
            (**l_73) = (safe_sub_func_int16_t_s_s(p_47, (p_47 ^ ((-1L) || p_47))));
        }

        ;
        ;
        ;

        (*l_73) = (*l_73);
        (*l_92) &= (0xD7L | p_47);
    }
    else
    {
        int *l_250 = &g_57;
        return l_250;


    }

    ;
    ;
    ;

    (*l_251) ^= ((*p_46) = (*p_46));
    (*l_73) = (void*)0;

    ;
    return &g_55;



}







static int * func_48(short p_49, union U0 p_50, int p_51)
{
    int *l_54 = &g_55;
    int *l_56 = &g_57;
    g_53 = 0x402095D7L;
    (*l_54) &= (0x704D9FABL > p_51);
    (*l_56) |= ((*l_54) = g_52.f1);
    (*l_54) = (-1L);
    return l_56;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_467.f0, "g_467.f0", print_hash_value);
    transparent_crc(g_467.f1, "g_467.f1", print_hash_value);
    transparent_crc(g_467.f2, "g_467.f2", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_681, "g_681", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
