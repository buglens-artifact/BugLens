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



static const unsigned g_20 = 0x79C63C40L;
static int g_22 = 1L;
static unsigned g_33 = 0x74579933L;
static char g_56 = 2L;
static char g_79 = 0x08L;
static unsigned g_89 = 0x1B2D863EL;
static int *g_110 = &g_22;
static unsigned short g_133 = 0xA862L;
static unsigned *g_146 = (void*)0;
static unsigned **g_145 = &g_146;
static short g_149 = (-3L);
static unsigned char g_171 = 0x6AL;
static unsigned g_172 = 4294967293UL;
static char g_176 = 0L;
static unsigned short g_200 = 0xCB15L;
static unsigned g_203 = 0x9999ABEDL;
static int **g_219 = &g_110;
static int g_223 = 6L;
static int g_243 = 5L;
static int g_265 = 0x5DE65A91L;
static int g_294 = 0x87EE9551L;
static char g_298 = 0L;
static int g_318 = 0L;
static short g_329 = 0L;
static unsigned short g_330 = 0x56E3L;
static int g_439 = 0x66DA58FEL;
static int g_472 = 0xF453BB76L;
static short g_477 = 0xA55DL;
static int g_500 = 0L;
static unsigned g_506 = 0x1A857485L;
static unsigned short g_616 = 0x7521L;
static unsigned short g_631 = 0x4819L;
static unsigned char g_648 = 0UL;
static unsigned char g_650 = 0x8BL;
static unsigned short g_652 = 0x789EL;
static char g_719 = 1L;
static int g_727 = 0x99313768L;
static unsigned char g_728 = 0xD9L;
static int g_775 = (-9L);
static short g_789 = (-6L);
static unsigned short g_797 = 1UL;
static const unsigned short g_803 = 0x5455L;
static int g_933 = 9L;
static unsigned short g_934 = 0x1F3FL;
static int g_955 = 8L;
static unsigned char g_982 = 251UL;
static const int g_995 = 0xF1D85A6FL;
static const int **g_1072 = (void*)0;
static const int *** const g_1071 = &g_1072;
static int g_1352 = 4L;
static int g_1361 = 0x4C0FE559L;
static unsigned char g_1415 = 1UL;
static unsigned char ** const g_1426 = (void*)0;
static unsigned g_1438 = 4294967295UL;



static short func_1(void);
static unsigned char func_7(short p_8, unsigned short p_9, unsigned short p_10);
static short func_11(int p_12, char p_13, const unsigned char p_14, unsigned char p_15, unsigned p_16);
static int func_17(const unsigned char p_18, short p_19);
static int func_38(unsigned p_39, int p_40, const int * p_41);
static unsigned func_44(unsigned char p_45);
static unsigned short func_50(int p_51, unsigned p_52, const int * p_53, int * p_54, int * p_55);
static unsigned char func_57(int * p_58, int * p_59, int * p_60);
static unsigned func_65(short p_66, const unsigned p_67);
static short func_68(short p_69, int p_70, int p_71, int * p_72, const unsigned p_73);
static short func_1(void)
{
    unsigned short l_2 = 65535UL;
    unsigned short *l_651 = &g_652;
    int l_655 = (-9L);
    const int l_656 = (-5L);
    int *l_1439 = &g_933;
    unsigned l_1440 = 0xB5D53A3CL;
    int *l_1441 = &g_955;
    unsigned *l_1442 = &g_172;
    (*l_1441) &= (l_2 , (l_1440 &= ((*l_1439) ^= ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((func_7((func_11(func_17(g_20, l_2), ((g_265 | g_477) >= ((*l_651) = g_477)), ((((func_68((safe_lshift_func_int16_t_s_u((0x9D1EB9EBL > l_2), g_318)), l_2, l_655, &g_294, l_2) || g_294) ^ 9UL) , 0xEEDF3F25L) , l_656), g_477, l_2) < g_477), l_655, g_719) & g_472), l_2)) , g_506), g_1438)) == 0xD844F9E4L))));
    (*l_1439) = (((func_68(((void*)0 != l_651), (*l_1439), (*l_1441), ((func_65((*l_1439), ((*l_1442) |= g_631)) <= (0UL & g_33)) , (void*)0), (*l_1441)) >= g_727) , 0x2931CD8AL) >= g_652);
    return g_934;
}







static unsigned char func_7(short p_8, unsigned short p_9, unsigned short p_10)
{
    int *l_733 = &g_439;
    int l_735 = 1L;
    int l_739 = 1L;
    int l_742 = 3L;
    int l_752 = (-2L);
    int l_754 = 3L;
    int l_768 = (-1L);
    unsigned short *l_800 = &g_652;
    int *** const l_942 = &g_219;
    const char l_949 = 1L;
    int *l_1053 = &l_742;
    int l_1114 = (-10L);
    char l_1117 = 0x58L;
    int *l_1178 = &g_933;
    int *l_1179 = &g_775;
    int *l_1180 = (void*)0;
    int *l_1181 = &l_768;
    int *l_1182 = (void*)0;
    int *l_1183 = &l_754;
    int *l_1184 = &g_775;
    int *l_1185 = &g_955;
    char l_1186 = 0x1BL;
    int *l_1187 = &g_22;
    int *l_1188 = &g_955;
    int *l_1189 = &g_775;
    int *l_1190 = &g_265;
    int *l_1191 = &g_439;
    int *l_1192 = &g_223;
    int *l_1193 = &g_472;
    int *l_1194 = &l_754;
    int *l_1195 = (void*)0;
    int *l_1196 = &g_775;
    int *l_1197 = &g_22;
    int *l_1198 = (void*)0;
    int *l_1199 = &l_739;
    int *l_1200 = (void*)0;
    int *l_1201 = (void*)0;
    int *l_1202 = (void*)0;
    int *l_1203 = &g_22;
    int *l_1204 = &g_265;
    int *l_1205 = &g_775;
    int *l_1206 = &l_768;
    int *l_1207 = &g_265;
    int *l_1208 = &g_955;
    int *l_1209 = (void*)0;
    int *l_1210 = &g_265;
    int *l_1211 = &l_735;
    int *l_1212 = &g_439;
    int *l_1213 = &g_22;
    int *l_1214 = &l_742;
    int *l_1215 = &l_752;
    int *l_1216 = (void*)0;
    int *l_1217 = &g_472;
    int *l_1218 = &g_439;
    int *l_1219 = &l_752;
    int *l_1220 = &l_1114;
    int *l_1221 = (void*)0;
    int *l_1222 = (void*)0;
    int *l_1223 = (void*)0;
    int *l_1224 = &l_742;
    int *l_1225 = &g_22;
    int *l_1226 = (void*)0;
    int *l_1227 = &l_735;
    int *l_1228 = (void*)0;
    int *l_1229 = (void*)0;
    int *l_1230 = &g_472;
    int *l_1231 = &g_294;
    int l_1232 = 8L;
    int *l_1233 = (void*)0;
    int *l_1234 = &g_265;
    int *l_1235 = &l_739;
    int *l_1236 = &l_1114;
    int *l_1237 = &g_955;
    int *l_1238 = (void*)0;
    int l_1239 = 1L;
    int *l_1240 = (void*)0;
    int *l_1241 = &g_472;
    int *l_1242 = &l_742;
    int l_1243 = 0L;
    int *l_1244 = &l_752;
    int *l_1245 = &l_735;
    int *l_1246 = &l_742;
    int *l_1247 = (void*)0;
    int *l_1248 = &g_22;
    int *l_1249 = &l_768;
    int *l_1250 = &l_1114;
    int *l_1251 = (void*)0;
    int l_1252 = 1L;
    int *l_1253 = &l_742;
    int *l_1254 = (void*)0;
    int l_1255 = 0x01A8435CL;
    int *l_1256 = &g_22;
    int *l_1257 = &l_739;
    int *l_1258 = &l_742;
    int *l_1259 = &l_1252;
    int l_1260 = 0x9793A439L;
    int l_1261 = 0xC92F3AABL;
    int *l_1262 = &l_1239;
    int *l_1263 = &g_775;
    int l_1264 = 3L;
    int *l_1265 = &l_1260;
    int *l_1266 = (void*)0;
    int *l_1267 = &g_22;
    int *l_1268 = &l_1255;
    int *l_1269 = &g_22;
    int l_1270 = 3L;
    int *l_1271 = (void*)0;
    int *l_1272 = &l_1239;
    int *l_1273 = &l_1260;
    int *l_1274 = (void*)0;
    int l_1275 = 0x8263392CL;
    int *l_1276 = &l_768;
    int *l_1277 = &g_223;
    int *l_1278 = &l_1114;
    int *l_1279 = (void*)0;
    int *l_1280 = (void*)0;
    int *l_1281 = &l_754;
    int *l_1282 = &l_1270;
    int *l_1283 = &l_754;
    int *l_1284 = &l_1252;
    int *l_1285 = &g_294;
    int *l_1286 = (void*)0;
    int *l_1287 = &l_1114;
    int *l_1288 = &g_223;
    int *l_1289 = &l_1260;
    int *l_1290 = &l_739;
    int *l_1291 = (void*)0;
    int *l_1292 = &g_933;
    int *l_1293 = (void*)0;
    int l_1294 = (-5L);
    int l_1295 = (-8L);
    int l_1296 = 0x988D2A93L;
    int *l_1297 = &l_1261;
    int *l_1298 = &l_735;
    int *l_1299 = &l_1252;
    int *l_1300 = (void*)0;
    int *l_1301 = &l_754;
    int *l_1302 = &l_1270;
    int *l_1303 = (void*)0;
    int *l_1304 = &g_294;
    int l_1305 = 0x393702B4L;
    int *l_1306 = &g_439;
    int *l_1307 = (void*)0;
    int *l_1308 = &g_955;
    int *l_1309 = &l_752;
    int *l_1310 = (void*)0;
    int *l_1311 = (void*)0;
    int *l_1312 = &l_735;
    int *l_1313 = &l_1296;
    int *l_1314 = &l_1232;
    int *l_1315 = (void*)0;
    int *l_1316 = &g_933;
    int *l_1317 = (void*)0;
    int *l_1318 = &l_1255;
    int *l_1319 = &l_768;
    int *l_1320 = (void*)0;
    int *l_1321 = &g_955;
    int l_1322 = 1L;
    int *l_1323 = &g_955;
    int *l_1324 = &l_768;
    int *l_1325 = &g_294;
    int *l_1326 = &l_1232;
    int *l_1327 = &l_754;
    int *l_1328 = &l_1270;
    int *l_1329 = &l_1239;
    int *l_1330 = &g_775;
    int l_1331 = (-1L);
    int *l_1332 = &l_1275;
    int *l_1333 = &l_1322;
    int *l_1334 = &l_739;
    int *l_1335 = (void*)0;
    int *l_1336 = (void*)0;
    int *l_1337 = (void*)0;
    int *l_1338 = &g_22;
    int *l_1339 = &g_265;
    int *l_1340 = (void*)0;
    int *l_1341 = &l_1295;
    int *l_1342 = (void*)0;
    int *l_1343 = &l_739;
    int *l_1344 = &l_1322;
    int *l_1345 = &l_742;
    int *l_1346 = (void*)0;
    int *l_1347 = &l_1261;
    int *l_1348 = (void*)0;
    int l_1349 = (-2L);
    int *l_1350 = &l_1232;
    int *l_1351 = &l_1243;
    int *l_1353 = &l_1239;
    int *l_1354 = &l_768;
    int *l_1355 = (void*)0;
    int l_1356 = 0xC8BB798DL;
    int *l_1357 = (void*)0;
    int l_1358 = 0xA24427EEL;
    int *l_1359 = &l_1270;
    int *l_1360 = &g_22;
    int *l_1362 = &l_1331;
    int *l_1363 = &l_1252;
    int *l_1364 = (void*)0;
    int *l_1365 = (void*)0;
    int *l_1366 = &l_1305;
    int *l_1367 = &g_22;
    int *l_1368 = &l_1358;
    int *l_1369 = &g_439;
    int *l_1370 = &l_1261;
    int l_1371 = 3L;
    int *l_1372 = &l_739;
    int *l_1373 = &l_1349;
    int *l_1374 = &l_1358;
    int *l_1375 = &l_739;
    int *l_1376 = (void*)0;
    int *l_1377 = &g_265;
    int l_1378 = 0L;
    int *l_1379 = &g_933;
    int l_1380 = 0x12186F89L;
    int *l_1381 = &l_1349;
    int *l_1382 = &l_1378;
    int *l_1383 = (void*)0;
    int *l_1384 = &l_1252;
    int *l_1385 = &l_754;
    int l_1386 = 0x1A18E345L;
    int *l_1387 = &l_1270;
    int *l_1388 = &l_1260;
    int *l_1389 = &l_1239;
    int *l_1390 = &l_1349;
    int l_1391 = 1L;
    int *l_1392 = &l_1255;
    int l_1393 = 0x12C020A7L;
    int *l_1394 = &l_1391;
    int *l_1395 = (void*)0;
    int *l_1396 = &l_1294;
    int *l_1397 = &l_1264;
    int *l_1398 = (void*)0;
    int *l_1399 = &l_1252;
    int *l_1400 = (void*)0;
    int l_1401 = 0x123336A3L;
    int *l_1402 = (void*)0;
    int *l_1403 = &l_1371;
    int *l_1404 = &l_1270;
    int l_1405 = 0x529255CDL;
    int *l_1406 = &l_1114;
    int *l_1407 = &l_752;
    int *l_1408 = &l_1358;
    int *l_1409 = &l_1371;
    int *l_1410 = (void*)0;
    int *l_1411 = &l_1349;
    int *l_1412 = &l_1405;
    int l_1413 = 1L;
    int *l_1414 = &l_1378;
    unsigned **l_1418 = &g_146;
    unsigned ***l_1419 = (void*)0;
    unsigned ***l_1420 = &l_1418;
    unsigned ***l_1421 = &g_145;
    unsigned char *l_1428 = (void*)0;
    unsigned char **l_1427 = &l_1428;
    unsigned char *l_1433 = (void*)0;
    unsigned char *l_1434 = &g_982;
    unsigned char *l_1435 = &g_650;
    unsigned l_1436 = 0UL;
    char *l_1437 = &g_176;
    for (g_200 = 0; (g_200 <= 46); g_200 = safe_add_func_int8_t_s_s(g_200, 1))
    {
        int *l_734 = &g_294;
        int *l_736 = &g_22;
        int *l_737 = &g_294;
        int *l_738 = &l_735;
        int *l_740 = &g_265;
        int *l_741 = &g_294;
        int *l_743 = &g_439;
        int l_744 = 0L;
        int *l_745 = &g_294;
        int *l_746 = &l_742;
        int *l_747 = &g_265;
        int *l_748 = &g_265;
        int *l_749 = &g_22;
        int *l_750 = &g_223;
        int *l_751 = (void*)0;
        int *l_753 = &g_294;
        int *l_755 = &l_752;
        int *l_756 = &l_735;
        int *l_757 = &g_472;
        int *l_758 = &g_472;
        int *l_759 = &l_752;
        int *l_760 = &l_739;
        int *l_761 = &l_744;
        int *l_762 = &g_223;
        int *l_763 = &g_294;
        int *l_764 = &l_739;
        int *l_765 = &g_472;
        int *l_766 = &g_223;
        int *l_767 = &g_22;
        int *l_769 = (void*)0;
        int *l_770 = &l_742;
        int *l_771 = &l_744;
        int *l_772 = &l_735;
        int *l_773 = (void*)0;
        int *l_774 = &l_768;
        int *l_776 = &g_775;
        int *l_777 = &l_744;
        int *l_778 = &l_752;
        int *l_779 = &l_754;
        int *l_780 = &g_265;
        int *l_781 = &l_752;
        int *l_782 = &g_294;
        int l_783 = 7L;
        int *l_784 = &l_744;
        int *l_785 = &l_752;
        int *l_786 = (void*)0;
        int *l_787 = (void*)0;
        int *l_788 = &g_775;
        int *l_790 = &l_735;
        int *l_791 = &l_768;
        int *l_792 = &l_783;
        int *l_793 = &g_439;
        int *l_794 = &l_783;
        int l_795 = 0xBF9C2A4EL;
        int *l_796 = (void*)0;
        const unsigned short *l_802 = &g_803;
        const unsigned short **l_801 = &l_802;
        int l_983 = 0xF22E3A02L;
        unsigned char *l_1036 = &g_171;
        int *l_1038 = &l_742;
        const unsigned ***l_1049 = (void*)0;
        const int *l_1130 = &g_995;
        unsigned short l_1156 = 65528UL;
        int l_1170 = (-1L);
        unsigned char **l_1173 = &l_1036;
        l_734 = l_733;

        ;
        if ((*l_733))
        {
            (*g_219) = (*g_219);
            if (p_9)
                continue;
            if ((*l_733))
                continue;
        }
        else
        {
            return p_9;
        }
        g_797++;
    }
    g_1415--;
    (**g_219) = (*l_1244);
    g_22 = ((*l_1187) <= ((&g_146 != ((*l_1421) = ((*l_1420) = l_1418))) ^ (~((((!(safe_rshift_func_int8_t_s_s(((*l_1437) = func_68((safe_lshift_func_uint8_t_u_u(((*l_1435) ^= ((g_1426 != (p_8 , l_1427)) > func_65(p_9, (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*l_1434) = g_329), ((p_10 & (**g_219)) ^ 4UL))), (-9L)))))), 7)), l_1436, (*l_1285), &l_1401, p_9)), 7))) < (*l_1259)) >= p_9) , (*l_1246)))));
    return p_8;
}







static short func_11(int p_12, char p_13, const unsigned char p_14, unsigned char p_15, unsigned p_16)
{
    int *l_659 = (void*)0;
    int *l_660 = (void*)0;
    int *l_661 = &g_22;
    int *l_662 = &g_439;
    int *l_663 = &g_22;
    int *l_664 = &g_22;
    int *l_665 = &g_294;
    int *l_666 = &g_294;
    int *l_667 = &g_223;
    int *l_668 = &g_22;
    int *l_669 = &g_294;
    int l_670 = 1L;
    int *l_671 = &l_670;
    int *l_672 = &g_294;
    int *l_673 = &g_294;
    int *l_674 = &g_265;
    int *l_675 = &g_22;
    int *l_676 = (void*)0;
    int *l_677 = (void*)0;
    int *l_678 = &g_223;
    int *l_679 = (void*)0;
    int *l_680 = &g_223;
    int *l_681 = &g_265;
    int *l_682 = (void*)0;
    int *l_683 = &g_472;
    int *l_684 = (void*)0;
    int *l_685 = &g_439;
    int *l_686 = &g_223;
    int *l_687 = &g_439;
    int *l_688 = &g_294;
    int *l_689 = &g_294;
    int *l_690 = (void*)0;
    int *l_691 = &l_670;
    int *l_692 = (void*)0;
    int *l_693 = &g_22;
    int *l_694 = &g_223;
    int *l_695 = (void*)0;
    int *l_696 = (void*)0;
    int l_697 = 0xEB0F8DDCL;
    int *l_698 = &g_265;
    int *l_699 = &g_439;
    int *l_700 = &l_697;
    int *l_701 = &g_472;
    int *l_702 = &l_697;
    int *l_703 = &g_439;
    int *l_704 = &g_22;
    int *l_705 = &g_294;
    int *l_706 = &g_439;
    int *l_707 = &g_472;
    int *l_708 = &g_223;
    int *l_709 = (void*)0;
    int *l_710 = &g_472;
    int *l_711 = (void*)0;
    int *l_712 = &g_223;
    int *l_713 = &g_265;
    int *l_714 = (void*)0;
    int *l_715 = &l_697;
    int l_716 = (-1L);
    int l_717 = 0x48239F17L;
    int *l_718 = &l_717;
    int *l_720 = (void*)0;
    int *l_721 = &g_439;
    int *l_722 = (void*)0;
    int *l_723 = &l_717;
    int *l_724 = &g_22;
    int *l_725 = &g_472;
    int *l_726 = &l_670;
    for (g_265 = 0; (g_265 <= 15); ++g_265)
    {
        (*g_110) ^= (~((&g_172 != &g_20) , p_16));
    }
    g_728--;
    (*l_680) = (g_616 | p_14);
    return g_298;
}







static int func_17(const unsigned char p_18, short p_19)
{
    int *l_21 = &g_22;
    int *l_23 = &g_22;
    int *l_24 = &g_22;
    int *l_25 = &g_22;
    int *l_26 = (void*)0;
    int *l_27 = &g_22;
    int *l_28 = &g_22;
    int *l_29 = &g_22;
    int *l_30 = &g_22;
    int *l_31 = &g_22;
    int *l_32 = &g_22;
    char *l_78 = &g_79;
    unsigned *l_88 = &g_89;
    unsigned short l_92 = 65526UL;
    short l_93 = 0L;
    unsigned short *l_111 = &l_92;
    int l_112 = 9L;
    char *l_175 = &g_176;
    unsigned *l_201 = &g_172;
    unsigned *l_202 = &g_203;
    unsigned short *l_646 = &g_200;
    unsigned char *l_647 = &g_648;
    unsigned char *l_649 = &g_650;
    g_33--;
    g_631 ^= (safe_add_func_int32_t_s_s(func_38(((*l_202) = ((*l_201) = ((safe_lshift_func_uint8_t_u_s((func_44((((((*l_175) &= (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_50(g_56, (p_18 , (func_57((((((((safe_rshift_func_int8_t_s_s((((*l_111) = (safe_sub_func_int8_t_s_s((func_65(func_68(((&g_22 == ((safe_sub_func_uint16_t_u_u((((g_33 && (p_19 > g_56)) >= (((*l_78) = g_20) < (safe_sub_func_uint8_t_u_u((1UL > ((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((*l_88)--), ((((*l_28) = (*l_21)) <= p_19) <= 6UL))), p_18)), p_19)) , p_18)), g_20)))) || l_92), p_18)) , l_28)) >= g_33), l_93, p_19, l_32, g_33), g_33) && (*g_110)), 0xE7L))) != 65533UL), g_20)) <= 0x19D8L) > p_18) ^ p_18) != g_56) , l_112) , l_24), l_30, l_24) || p_19)), l_23, l_88, l_26), p_18)), g_33))) , (void*)0) != (void*)0) , 0x10L)) , 3UL), 0)) <= p_19))), p_18, g_146), (-1L)));
    (*g_219) = l_24;
    (*l_32) = (safe_rshift_func_uint8_t_u_s(((((safe_mod_func_int32_t_s_s((~(((*l_649) ^= (safe_sub_func_int8_t_s_s(func_44(((*l_647) ^= ((((g_149 != g_472) == ((((*l_646) = (((safe_sub_func_uint32_t_u_u((*l_23), (p_18 ^ ((safe_rshift_func_int8_t_s_s((g_171 != (((g_223 &= (safe_lshift_func_uint16_t_u_u(((*l_111) = (safe_rshift_func_uint16_t_u_s(0UL, 11))), p_18))) || ((*l_27) < (*l_30))) <= (*g_110))), 5)) == p_18)))) < p_18) , p_18)) || 65535UL) < (-1L))) & 4L) & p_19))), g_506))) || p_19)), g_330)) < p_19) != p_19) ^ p_18), g_176));
    return p_19;
}







static int func_38(unsigned p_39, int p_40, const int * p_41)
{
    unsigned l_208 = 0UL;
    unsigned *l_209 = &g_203;
    int **l_217 = &g_110;
    int ***l_216 = &l_217;
    unsigned short *l_218 = &g_133;
    char l_221 = 8L;
    int l_244 = 0x287BB0CCL;
    const unsigned char l_268 = 3UL;
    int l_284 = 0x56A24BECL;
    int l_309 = 0xD7BDA131L;
    int l_316 = 0L;
    int l_488 = 0x7D4F73E1L;
    int l_492 = 1L;
    int l_499 = 0xDD7C6B35L;
    int l_501 = 1L;
    unsigned **l_513 = &g_146;
    short *l_623 = &g_149;
    unsigned char *l_626 = &g_171;
    unsigned l_629 = 0x3CB65DE4L;
    int *l_630 = &g_439;
    if ((safe_rshift_func_uint16_t_u_s(((*l_218) = (((safe_mod_func_int32_t_s_s(0x6A3B5EBDL, ((func_50(l_208, (++(*l_209)), &g_22, &g_22, ((((0x1938L != p_39) ^ func_68(p_40, ((safe_lshift_func_int16_t_s_u((-10L), ((safe_rshift_func_int16_t_s_u((l_208 || l_208), 1)) ^ p_40))) , 0L), l_208, &g_22, l_208)) <= 0x1FL) , &g_22)) & 0x8E68L) & 0xACL))) , (void*)0) == l_216)), 14)))
    {
        unsigned char l_220 = 251UL;
        int *l_222 = &g_223;
        int l_225 = (-1L);
        unsigned l_264 = 9UL;
        unsigned l_266 = 0x90952E1AL;
        int l_340 = 0L;
        unsigned char l_342 = 0xF0L;
        unsigned l_355 = 4294967289UL;
        const short l_369 = (-9L);
        char l_371 = 1L;
        const int *l_373 = &l_316;
        const int **l_372 = &l_373;
        g_219 = (*l_216);
        (**g_219) = (l_220 != (((p_39 , (**g_219)) <= ((***l_216) <= ((l_221 >= (((*l_222) = (p_40 | (***l_216))) >= (-4L))) , (**l_217)))) & p_39));
        if ((**l_217))
        {
            const int l_224 = (-1L);
            int *l_267 = (void*)0;
            int l_270 = 0xC7AF2764L;
            char *l_337 = (void*)0;
            const int l_341 = 0xC7863212L;
            short *l_343 = &g_149;
            unsigned short l_344 = 0UL;
            l_225 &= ((*l_222) = func_65(((**l_217) , g_200), l_224));
            for (g_22 = 0; (g_22 <= (-27)); g_22 = safe_sub_func_int32_t_s_s(g_22, 9))
            {
                short *l_230 = &g_149;
                int *l_237 = (void*)0;
                int *l_273 = (void*)0;
                int *l_274 = &l_244;
                int *l_275 = &g_265;
                int *l_276 = &l_244;
                int *l_277 = &l_225;
                int l_278 = 0L;
                int *l_279 = &l_225;
                int *l_280 = &g_265;
                int *l_281 = &g_223;
                int *l_282 = &l_225;
                int *l_283 = &l_278;
                int *l_285 = (void*)0;
                int *l_286 = &l_278;
                int *l_287 = &g_265;
                int *l_288 = &l_270;
                int *l_289 = &l_244;
                int *l_290 = (void*)0;
                int *l_291 = &l_244;
                int *l_292 = &l_284;
                int *l_293 = (void*)0;
                int *l_295 = &g_265;
                int l_296 = 0x8198E80CL;
                int *l_297 = &g_294;
                int *l_299 = &l_270;
                int *l_300 = &l_278;
                int *l_301 = &g_223;
                int *l_302 = &g_294;
                int *l_303 = (void*)0;
                int *l_304 = &l_225;
                int *l_305 = &g_294;
                int *l_306 = &l_284;
                int *l_307 = &g_223;
                int *l_308 = &l_225;
                int *l_310 = &l_225;
                int *l_311 = &g_223;
                int *l_312 = &l_284;
                int *l_313 = (void*)0;
                int *l_314 = (void*)0;
                int *l_315 = &l_244;
                int *l_317 = &l_225;
                int *l_319 = &g_294;
                int *l_320 = (void*)0;
                int *l_321 = &g_265;
                int *l_322 = (void*)0;
                int *l_323 = &g_223;
                int *l_324 = &g_265;
                int *l_325 = (void*)0;
                int *l_326 = &l_244;
                int *l_327 = &l_309;
                int *l_328 = &l_244;
                if (((*l_222) = (safe_lshift_func_uint16_t_u_s(func_65(((*l_230) &= (((3L != p_40) , g_171) , g_171)), l_224), p_40))))
                {
                    unsigned l_231 = 0x342E7D5CL;
                    (*l_222) = l_231;
                }
                else
                {
                    const short l_236 = (-1L);
                    int *l_253 = &l_225;
                    const unsigned short l_269 = 1UL;
                    if ((*g_110))
                    {
                        short l_240 = 0xC7D0L;
                        int l_241 = 0x4936EB09L;
                        l_240 = (((*l_222) = (safe_lshift_func_uint16_t_u_s(((func_68(((*l_230) ^= func_65(((p_39 , (**g_219)) , (safe_lshift_func_int16_t_s_u((***l_216), 5))), l_236)), g_133, (*l_222), l_237, (((safe_lshift_func_uint16_t_u_u(65526UL, p_40)) | l_224) == 255UL)) ^ 0UL) <= 2L), 0))) , (**g_219));
                        l_241 &= ((*l_222) = (**l_217));
                    }
                    else
                    {
                        int *l_242 = &g_243;
                        int l_258 = 0xC5A253C7L;
                        int *l_259 = &l_244;
                        (*l_217) = (*g_219);
                        l_244 = func_68(((*l_230) = 1L), ((*l_242) = p_39), (*l_222), (*g_219), g_203);
                        (*l_259) ^= func_68(((safe_add_func_uint16_t_u_u(p_39, ((p_40 != (safe_sub_func_int32_t_s_s(((*l_253) = (((((((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(func_68(p_39, g_176, (**g_219), l_253, (((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_40, p_40)), func_68(((*l_253) = (3L && p_39)), p_40, (**g_219), (*g_219), l_224))) | p_39) == p_39)), p_40)), g_223)) >= 0x0FL) , &l_217) == &g_219) > (**g_219)) < p_39) || l_224)), p_40))) >= (**g_219)))) , 0x9F8BL), (*l_222), l_258, (*g_219), l_258);
                        (*l_259) = ((*l_253) = func_68((*l_222), ((***l_216) & 0x1151F3E8L), (*g_110), (*l_217), (safe_sub_func_int32_t_s_s((func_68(((*l_230) ^= (((safe_rshift_func_uint16_t_u_s((((*l_259) = l_264) & ((*g_110) <= func_68(p_40, ((*l_242) = func_68(g_20, g_265, l_266, l_267, l_268)), (*g_110), (*g_219), l_269))), 0)) , 0UL) , 0x33C0L)), p_40, (**g_219), l_267, p_39) > p_39), (*l_222)))));
                    }
                    if ((***l_216))
                        continue;
                    if (l_270)
                        continue;
                    for (g_176 = 0; (g_176 > (-1)); --g_176)
                    {
                        (*l_253) |= (**l_217);
                    }
                }
                g_330--;
            }
            (***l_216) = ((((*l_343) = ((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((func_68(((((*l_222) = g_56) != ((safe_add_func_int16_t_s_s(func_44(l_225), ((g_176 > (func_68(l_266, g_330, (((0x5E15L != g_318) ^ ((((((func_68(p_39, p_39, l_340, (*l_217), p_40) <= l_341) & l_270) & g_298) | p_39) || p_40) != p_40)) | g_171), &l_270, p_40) == p_39)) >= 1L))) > 0x902AL)) , p_39), g_329, p_39, &l_225, p_40) >= g_20), 0xABL)) ^ 0x42ADA261L), l_342)) || g_298)) == g_329) , l_344);
            for (l_316 = 25; (l_316 != (-15)); --l_316)
            {
                for (p_40 = 0; (p_40 != (-7)); --p_40)
                {
                    unsigned *l_353 = (void*)0;
                    unsigned *l_354 = &l_266;
                    int l_356 = (-4L);
                    unsigned short l_359 = 65531UL;
                    (**g_219) |= (safe_lshift_func_uint8_t_u_s(0x6BL, 2));
                    (**g_219) = ((*l_222) &= (func_68(g_79, g_20, (*g_110), (*g_219), ((((safe_sub_func_uint8_t_u_u((((*l_354) = 4UL) ^ (l_355 , l_356)), g_20)) <= ((safe_sub_func_uint8_t_u_u((0L <= 1UL), l_359)) && g_294)) && 0L) > 1L)) > p_39));
                }
                (*l_222) = (1L && (&g_133 == &g_200));
            }
        }
        else
        {
            char *l_368 = &g_298;
            int **l_370 = &l_222;
            (*l_217) = (*g_219);
            l_371 = func_65((((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((**l_217), (**l_217))), 10)) != (func_68(g_172, g_203, (((***l_216) & (**g_219)) == (((*l_368) = (safe_lshift_func_uint8_t_u_s(0xF0L, 7))) != l_369)), ((*l_370) = &l_225), (***l_216)) || (***l_216))) != (-10L)), p_40);

            ;
        }

        ;
        (*l_372) = p_41;

        ;
    }
    else
    {
        short l_374 = 1L;
        int *l_375 = (void*)0;
        int *l_376 = &g_265;
        int *l_377 = &l_284;
        int *l_378 = &g_22;
        int *l_379 = &g_22;
        int *l_380 = &g_294;
        int *l_381 = &l_244;
        int l_382 = (-3L);
        int *l_383 = (void*)0;
        int l_384 = 0x8B5C4B60L;
        int *l_385 = (void*)0;
        int *l_386 = &l_384;
        int *l_387 = &l_284;
        int *l_388 = &l_382;
        int *l_389 = &l_316;
        int *l_390 = &g_22;
        int *l_391 = &l_316;
        int l_392 = 0xBA95C358L;
        int *l_393 = (void*)0;
        int *l_394 = &l_309;
        int *l_395 = (void*)0;
        int *l_396 = (void*)0;
        int *l_397 = &l_316;
        int *l_398 = &l_384;
        int *l_399 = &l_382;
        int *l_400 = &l_244;
        int *l_401 = &g_265;
        int *l_402 = &g_294;
        int *l_403 = &l_392;
        int *l_404 = (void*)0;
        int l_405 = 0x1DA38108L;
        int *l_406 = &l_244;
        int *l_407 = &l_309;
        int *l_408 = &l_405;
        int *l_409 = &l_244;
        int *l_410 = &l_382;
        int *l_411 = &l_244;
        int *l_412 = &l_284;
        int *l_413 = &l_309;
        int *l_414 = &l_284;
        int *l_415 = &l_244;
        int *l_416 = &g_294;
        int *l_417 = (void*)0;
        int *l_418 = &l_284;
        int l_419 = 1L;
        int *l_420 = &l_316;
        int *l_421 = (void*)0;
        int *l_422 = (void*)0;
        int *l_423 = (void*)0;
        int *l_424 = &l_405;
        int *l_425 = &g_22;
        int *l_426 = &l_419;
        int l_427 = 0xBF3F1525L;
        int *l_428 = &g_294;
        int *l_429 = &l_316;
        int *l_430 = &l_382;
        int *l_431 = &l_309;
        int l_432 = (-1L);
        int *l_433 = &l_316;
        int *l_434 = &g_223;
        int *l_435 = &l_244;
        int *l_436 = &g_22;
        int *l_437 = &l_316;
        int *l_438 = &l_309;
        int *l_440 = &l_384;
        int *l_441 = (void*)0;
        int *l_442 = (void*)0;
        int *l_443 = &g_294;
        int *l_444 = (void*)0;
        int *l_445 = &l_405;
        int *l_446 = &g_223;
        int *l_447 = &g_22;
        int *l_448 = &l_392;
        int *l_449 = &l_384;
        int *l_450 = &l_382;
        int *l_451 = &g_439;
        int *l_452 = &l_309;
        int *l_453 = (void*)0;
        int *l_454 = &l_392;
        int *l_455 = &g_265;
        int l_456 = 0L;
        int *l_457 = &l_309;
        int *l_458 = &l_456;
        int *l_459 = &l_316;
        int *l_460 = (void*)0;
        int *l_461 = &g_223;
        int *l_462 = &l_316;
        int *l_463 = (void*)0;
        int *l_464 = &l_456;
        int *l_465 = (void*)0;
        int *l_466 = &l_309;
        int *l_467 = &l_392;
        int *l_468 = &g_22;
        int *l_469 = &l_427;
        int *l_470 = &l_405;
        int *l_471 = (void*)0;
        int *l_473 = &l_456;
        int *l_474 = &l_384;
        int l_475 = 0x82D7FBB2L;
        int *l_476 = (void*)0;
        int *l_478 = &l_244;
        int *l_479 = &l_316;
        int *l_480 = (void*)0;
        int *l_481 = &l_316;
        int *l_482 = (void*)0;
        int *l_483 = &g_265;
        int *l_484 = &l_419;
        int *l_485 = &g_294;
        int *l_486 = &l_284;
        int *l_487 = &g_472;
        int *l_489 = &g_22;
        int *l_490 = &g_223;
        int *l_491 = &l_392;
        int *l_493 = &g_22;
        int *l_494 = &g_223;
        int *l_495 = &l_392;
        int *l_496 = &l_427;
        int *l_497 = &l_405;
        int *l_498 = &l_309;
        int *l_502 = &l_392;
        int l_503 = 0x2FEC2D7AL;
        int *l_504 = &g_22;
        int *l_505 = &l_244;
        const int *l_516 = &l_419;
        const int **l_515 = &l_516;
        const int ***l_514 = &l_515;
        g_506--;
        (*l_445) &= (((**l_217) && (p_40 > (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((((&g_146 != l_513) != (*g_110)) | (p_41 != (void*)0)), 2)) || (func_65(((0x89L <= ((void*)0 != l_514)) & (**l_217)), (*l_498)) > (*l_406))), p_39)))) & g_33);
    }
    for (l_244 = 0; (l_244 >= 25); ++l_244)
    {
        unsigned l_519 = 1UL;
        int *l_576 = &l_501;
        short *l_577 = &g_477;
        if (func_65(p_39, g_133))
        {
            return l_519;
        }
        else
        {
            unsigned l_563 = 0xB280B6D5L;
            for (l_208 = 0; (l_208 == 36); l_208 = safe_add_func_uint8_t_u_u(l_208, 3))
            {
                int l_540 = 0xF18D7C32L;
                for (l_501 = (-6); (l_501 == (-11)); l_501 = safe_sub_func_uint32_t_u_u(l_501, 7))
                {
                    unsigned **l_524 = &g_146;
                    unsigned ***l_525 = &l_513;
                    (*l_525) = l_524;
                }
                for (g_500 = 0; (g_500 >= 2); ++g_500)
                {
                    int *l_528 = &g_472;
                    int l_529 = 0x2C9F228FL;
                    int *l_530 = &l_492;
                    int *l_531 = &l_501;
                    int *l_532 = &l_492;
                    int *l_533 = &g_472;
                    int *l_534 = (void*)0;
                    int *l_535 = (void*)0;
                    int *l_536 = &g_472;
                    int *l_537 = &g_439;
                    int *l_538 = &l_501;
                    int *l_539 = &g_472;
                    int *l_541 = (void*)0;
                    int *l_542 = &l_499;
                    int *l_543 = &l_501;
                    int *l_544 = &l_309;
                    int *l_545 = &l_492;
                    int *l_546 = &g_294;
                    int *l_547 = &g_439;
                    int *l_548 = &l_309;
                    int *l_549 = &g_223;
                    int *l_550 = (void*)0;
                    int *l_551 = &g_472;
                    int *l_552 = &l_529;
                    int *l_553 = (void*)0;
                    int *l_554 = &l_284;
                    int *l_555 = &l_501;
                    int *l_556 = &l_499;
                    int *l_557 = &l_309;
                    int *l_558 = &g_223;
                    int *l_559 = &g_472;
                    int *l_560 = (void*)0;
                    int *l_561 = &l_499;
                    int *l_562 = &l_488;
                    l_563++;
                }
            }
        }
        if ((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_40, (!((g_171 = (l_519 , (p_40 != (p_39 < ((safe_mod_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(1L, (((l_576 == ((g_200 || ((3L & (((void*)0 == l_577) , (*l_576))) || 0x7F0AL)) , (*l_217))) == 0UL) & p_39))) && (**g_219)) < p_40), p_40)) ^ g_149))))) < 0x08L)))), p_40)), 0x97466312L)))
        {
            (*l_576) ^= ((***l_216) &= 0xE677EC04L);
            (***l_216) &= 0x42EC23F5L;
        }
        else
        {
            int *l_578 = &l_501;
            int *l_579 = &l_284;
            int *l_580 = &l_284;
            int *l_581 = &g_22;
            int *l_582 = &l_488;
            int *l_583 = &g_439;
            int *l_584 = &l_492;
            int *l_585 = &g_22;
            int *l_586 = (void*)0;
            int *l_587 = &g_294;
            int *l_588 = &g_294;
            int *l_589 = &g_22;
            int *l_590 = (void*)0;
            int *l_591 = &g_294;
            int *l_592 = &l_488;
            int *l_593 = &l_309;
            int *l_594 = &l_501;
            int *l_595 = &g_294;
            int *l_596 = &g_294;
            int *l_597 = &l_501;
            int *l_598 = &g_22;
            int *l_599 = &l_499;
            int *l_600 = &g_265;
            int *l_601 = &g_22;
            int *l_602 = &g_472;
            int *l_603 = &l_284;
            int *l_604 = &l_488;
            int *l_605 = &l_309;
            int *l_606 = &l_501;
            int *l_607 = (void*)0;
            int *l_608 = &g_439;
            int *l_609 = &l_316;
            int *l_610 = &g_22;
            int *l_611 = (void*)0;
            int *l_612 = &g_472;
            int *l_613 = &l_316;
            int *l_614 = &g_265;
            int *l_615 = &g_22;
            if (p_39)
                break;
            (**g_219) = (*l_576);
            --g_616;
        }
        (**g_219) = (*g_110);
    }
    (*l_630) &= ((safe_rshift_func_int8_t_s_u(((((func_68((((safe_add_func_int16_t_s_s(((void*)0 != &p_41), ((&g_110 != ((*l_216) = &g_110)) , ((*l_623) = p_40)))) , 0x4CL) , (safe_mod_func_uint8_t_u_u((--(*l_626)), (g_472 ^ 255UL)))), (((func_68(((func_65(g_172, p_40) == 250UL) , 0xB774L), g_133, p_39, &g_22, g_500) ^ l_629) >= p_39) , g_294), l_208, &l_316, p_39) >= p_39) < l_221) & 1L) , p_40), p_40)) , 0xACC0A0DFL);
    return (*g_110);
}







static unsigned func_44(unsigned char p_45)
{
    int l_199 = 0x581DC2E7L;
    for (g_22 = (-4); (g_22 > 28); g_22 = safe_add_func_uint32_t_u_u(g_22, 6))
    {
        unsigned short *l_181 = (void*)0;
        unsigned short *l_182 = &g_133;
        int **l_190 = (void*)0;
        int ***l_189 = &l_190;
        int *l_191 = &g_22;
        int l_192 = 9L;
        unsigned l_197 = 0xE6C26E64L;
        short *l_198 = &g_149;
        g_200 &= (safe_mod_func_uint16_t_u_u(((*l_182)++), (0x172F119EL ^ ((safe_add_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((*l_198) = func_68(p_45, p_45, (((*l_189) = &g_110) == &g_110), l_191, (l_192 > (((!g_171) && (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_171, 2)), g_33))) , l_197)))), g_171)) && (-10L)) != l_199), l_199)) || l_199))));

        ;
        return (*l_191);
    }
    return l_199;
}







static unsigned short func_50(int p_51, unsigned p_52, const int * p_53, int * p_54, int * p_55)
{
    unsigned char l_152 = 0x43L;
    char *l_159 = &g_56;
    short l_167 = 2L;
    int *l_168 = &g_22;
    int **l_174 = &l_168;
    for (g_89 = 4; (g_89 < 35); g_89 = safe_add_func_uint32_t_u_u(g_89, 3))
    {
        char *l_160 = &g_56;
        unsigned short *l_165 = (void*)0;
        int l_166 = 0x1A53783AL;
        unsigned char *l_169 = (void*)0;
        unsigned char *l_170 = &g_171;
        int **l_173 = &l_168;
        (*l_168) = (((((l_152 &= g_149) >= ((safe_sub_func_uint8_t_u_u(((((((*l_159) = (safe_add_func_int32_t_s_s(((g_172 &= (((*l_170) = (safe_mod_func_uint8_t_u_u(func_68((((l_159 != (l_160 = l_159)) & p_52) | ((safe_sub_func_uint8_t_u_u(((void*)0 != l_159), ((safe_rshift_func_uint16_t_u_u(65527UL, p_52)) | (((l_165 == &g_133) & l_166) , p_52)))) != l_167)), p_52, l_166, l_168, g_33), g_79))) >= g_22)) == l_166), (*p_54)))) > 1L) == 3UL) , g_172) , g_22), l_166)) >= l_166)) <= l_166) > 4294967288UL) , (*g_110));
        (*l_173) = &p_51;

        ;
    }

    ;
    (*l_174) = l_168;
    return g_22;
}







static unsigned char func_57(int * p_58, int * p_59, int * p_60)
{
    int **l_113 = &g_110;
    int *l_114 = &g_22;
    int l_115 = 1L;
    int *l_116 = &g_22;
    int *l_117 = &g_22;
    int *l_118 = (void*)0;
    int *l_119 = &g_22;
    int *l_120 = &l_115;
    int *l_121 = &g_22;
    int *l_122 = (void*)0;
    int *l_123 = &l_115;
    int *l_124 = &l_115;
    int *l_125 = (void*)0;
    int l_126 = 0x5E45CF31L;
    int *l_127 = &l_126;
    int *l_128 = &l_126;
    int *l_129 = &g_22;
    int l_130 = 0x7CB4F910L;
    int *l_131 = (void*)0;
    int *l_132 = (void*)0;
    (*l_113) = p_58;
    g_133--;
    (*l_119) ^= 0L;
    for (l_115 = 25; (l_115 >= (-10)); --l_115)
    {
        int l_142 = 0xD3FBECF3L;
        short *l_147 = (void*)0;
        short *l_148 = &g_149;
        (*l_127) |= (safe_mod_func_uint16_t_u_u((0xCFL & (((*l_148) = (((safe_mod_func_uint16_t_u_u((((l_142 , &p_58) == (void*)0) || (safe_lshift_func_uint8_t_u_u(func_65((((void*)0 != g_145) <= l_142), ((((*l_148) = func_65(l_142, g_89)) == g_56) , g_149)), l_142))), g_33)) >= g_22) , l_142)) | g_33)), (-1L)));
    }
    return (*l_114);
}







static unsigned func_65(short p_66, const unsigned p_67)
{
    unsigned char l_108 = 2UL;
    int *l_109 = &g_22;
    for (g_79 = 0; (g_79 <= (-14)); g_79 = safe_sub_func_int8_t_s_s(g_79, 6))
    {
        int *l_98 = &g_22;
        int **l_97 = &l_98;
        unsigned **l_103 = (void*)0;
        unsigned *l_105 = (void*)0;
        unsigned **l_104 = &l_105;
        (*l_97) = &g_22;
        g_110 = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((g_22 != (((*l_104) = l_98) == l_98)) < ((**l_97) && (((safe_mod_func_int32_t_s_s(p_67, func_68(((*l_98) >= 255UL), g_89, (p_67 || 0xA070L), &g_22, p_66))) >= 0xCE79L) && l_108))) || 0x05L), 7)), g_20)) , l_109);

        ;
        ;
        (*l_97) = &g_22;
        (*l_97) = &g_22;
    }
    return p_67;
}







static short func_68(short p_69, int p_70, int p_71, int * p_72, const unsigned p_73)
{
    char l_94 = 0xF8L;
    return l_94;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_955, "g_955", print_hash_value);
    transparent_crc(g_982, "g_982", print_hash_value);
    transparent_crc(g_995, "g_995", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
