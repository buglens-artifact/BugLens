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



static volatile unsigned char g_7 = 0x69L;
static unsigned short g_17 = 0x8353L;
static unsigned g_36 = 0xC2F1FCC1L;
static short g_38 = (-3L);
static short g_40 = 0L;
static unsigned short g_42 = 8UL;
static unsigned short *g_41 = &g_42;
static unsigned g_55 = 0x92279191L;
static int g_59 = 0x743E62C9L;
static int g_69 = 0L;
static int g_71 = 0xF40B36FEL;
static int *g_70 = &g_71;
static int *g_102 = &g_69;
static int g_104 = (-8L);
static unsigned short g_117 = 2UL;
static const char g_120 = 7L;
static char g_186 = 0x21L;
static unsigned g_208 = 4294967293UL;
static char g_232 = (-10L);
static unsigned g_270 = 4UL;
static short g_354 = (-1L);
static unsigned char g_364 = 0x27L;
static unsigned g_482 = 7UL;
static int ** volatile g_485 = &g_70;
static unsigned g_503 = 1UL;
static int g_547 = 0xB8893ACEL;
static int * volatile g_556 = (void*)0;
static int *g_572 = (void*)0;
static int **g_571 = &g_572;
static short *g_574 = &g_354;
static short ** volatile g_573 = &g_574;
static short ** volatile * volatile g_575 = &g_573;
static int g_610 = 0xE05FD4D0L;
static int ** volatile g_611 = &g_70;
static int g_721 = 0xA6613C4EL;
static int g_732 = (-1L);
static volatile unsigned char g_749 = 1UL;
static volatile char g_948 = 0x85L;
static volatile int g_952 = 6L;
static unsigned short g_959 = 65526UL;
static const int g_965 = 0x997130E1L;
static int ** volatile g_992 = &g_102;
static unsigned short *g_993 = &g_959;
static short *g_1067 = &g_38;
static int * volatile g_1072 = &g_59;
static int ** volatile g_1123 = (void*)0;
static char g_1280 = 0xA5L;
static volatile unsigned short g_1281 = 0x6A3DL;
static int ** volatile g_1290 = (void*)0;
static volatile unsigned short g_1351 = 65530UL;
static char g_1371 = 0x67L;
static int ** volatile g_1481 = (void*)0;
static int ** volatile g_1482 = &g_70;
static int ** volatile g_1487 = &g_102;
static int ** volatile g_1545 = &g_70;
static int ** volatile g_1546 = &g_70;



static unsigned func_1(void);
static int func_2(int p_3, const int p_4);
static unsigned char func_22(int p_23, unsigned p_24);
static int func_25(int p_26, unsigned short * p_27, int p_28, unsigned short * p_29);
static const int func_43(unsigned short p_44, const int p_45, unsigned short * p_46, unsigned p_47);
static const unsigned char func_49(unsigned p_50, int p_51, char p_52);
static char func_60(unsigned short * p_61);
static unsigned short * func_62(int p_63, unsigned p_64, int * p_65);
static int * func_72(unsigned short p_73, unsigned short p_74);
static short func_87(int * const p_88, unsigned short * p_89);
static unsigned func_1(void)
{
    char l_12 = 6L;
    unsigned short *l_15 = (void*)0;
    unsigned short *l_16 = &g_17;
    short *l_37 = &g_38;
    short *l_39 = &g_40;
    unsigned l_1150 = 1UL;
    unsigned *l_1155 = (void*)0;
    int l_1161 = 0x92601542L;
    int l_1217 = 0xF74FDEA3L;
    int l_1324 = 1L;
    int *l_1462 = &l_1161;
    if ((func_2((safe_div_func_uint16_t_u_u((g_7 || ((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_12, l_12)), ((safe_add_func_uint32_t_u_u((((*l_16)--) <= (safe_rshift_func_uint8_t_u_u(func_22(func_25(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_12, ((l_12 == (+((((*l_39) = (0x4D59L > (l_12 || ((*l_37) ^= (g_36 = (l_12 > 1L)))))) || g_7) , l_12))) > l_12))), 1UL)), 0xA9L)) || 254UL), l_39, l_12, g_41), l_12), 0))), 0x6D4D7691L)) ^ 0x7D0D1B18L))) != l_12)), l_12)), g_965) >= l_12))
    {
        unsigned l_1137 = 0x54AE6E84L;
        unsigned short *l_1142 = &g_959;
        unsigned *l_1149 = &g_208;
        l_1137 = (**g_485);
        (*g_70) = ((~(((safe_add_func_uint8_t_u_u((~(g_104 < ((safe_add_func_int16_t_s_s(((l_1137 < func_22(l_12, ((*l_1149) = func_25((*g_102), l_1142, (65532UL ^ (safe_lshift_func_int8_t_s_u(g_354, (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(l_12, (g_364 , (*g_993)))) | (**g_485)), g_186))))), &g_42)))) >= 0UL), 0x4163L)) , l_1137))), l_12)) > 255UL) <= 0x73D2L)) | l_1150);
    }
    else
    {
        int l_1164 = (-1L);
        int l_1252 = 0xA8D0E25FL;
        unsigned l_1284 = 4294967292UL;
        int *l_1298 = &g_547;
        int *l_1391 = &g_59;
        unsigned char l_1532 = 0xE5L;
        for (g_482 = 27; (g_482 < 15); g_482 = safe_sub_func_int8_t_s_s(g_482, 1))
        {
            short l_1159 = (-1L);
            int l_1170 = (-10L);
            int l_1193 = 2L;
            int l_1208 = 1L;
            int l_1256 = (-1L);
            int l_1260 = 1L;
            unsigned l_1272 = 4294967290UL;
            for (g_69 = (-16); (g_69 <= 27); g_69 = safe_add_func_int8_t_s_s(g_69, 7))
            {
                int *l_1156 = &g_104;
                int *l_1160 = &g_721;
                l_1161 = (((*l_1160) = ((-2L) < (((*l_1156) = ((void*)0 == l_1155)) || (func_22(l_12, (safe_lshift_func_int8_t_s_s(0xDAL, g_7))) , (func_22((((void*)0 == &g_55) != (*g_993)), l_1159) , (**g_992)))))) && (**g_992));
                for (g_186 = 0; (g_186 != (-19)); g_186--)
                {
                    if ((*g_1072))
                        break;
                    if (l_1164)
                        break;
                }
            }
            for (g_117 = 0; (g_117 >= 40); ++g_117)
            {
                int *l_1167 = &l_1164;
                int *l_1168 = &g_59;
                int *l_1169 = &g_71;
                int *l_1171 = &g_104;
                int *l_1172 = &g_721;
                int *l_1173 = &g_71;
                int *l_1174 = &l_1161;
                int *l_1175 = &g_69;
                int *l_1176 = &l_1164;
                int *l_1177 = &g_69;
                int *l_1178 = &g_71;
                int *l_1179 = &l_1161;
                int *l_1180 = &g_69;
                int *l_1181 = (void*)0;
                int *l_1182 = &g_610;
                int *l_1183 = &l_1161;
                int *l_1184 = &g_59;
                int *l_1185 = &g_59;
                int *l_1186 = &g_71;
                int *l_1187 = &g_104;
                int *l_1188 = &l_1170;
                int *l_1189 = (void*)0;
                int *l_1190 = &l_1164;
                int *l_1191 = (void*)0;
                int *l_1192 = &g_610;
                int *l_1194 = &l_1164;
                int *l_1195 = &l_1164;
                int *l_1196 = &l_1164;
                int *l_1197 = &l_1161;
                int *l_1198 = &g_104;
                int *l_1199 = &g_71;
                int *l_1200 = &g_104;
                int *l_1201 = &g_104;
                int *l_1202 = &g_104;
                int *l_1203 = &g_721;
                int l_1204 = 0x1AB9C30BL;
                int *l_1205 = &g_71;
                int *l_1206 = &l_1193;
                int *l_1207 = (void*)0;
                int *l_1209 = &l_1193;
                int *l_1210 = &g_71;
                int *l_1211 = &g_104;
                int *l_1212 = &g_610;
                int *l_1213 = (void*)0;
                int *l_1214 = &g_721;
                int *l_1215 = &g_721;
                int *l_1216 = &l_1204;
                int *l_1218 = (void*)0;
                int *l_1219 = &g_610;
                int *l_1220 = &g_69;
                int *l_1221 = &l_1164;
                int *l_1222 = &g_104;
                int *l_1223 = &l_1164;
                int *l_1224 = &g_69;
                int *l_1225 = &g_69;
                int *l_1226 = &g_610;
                int *l_1227 = (void*)0;
                int *l_1228 = &g_721;
                int *l_1229 = &g_610;
                int *l_1230 = &g_71;
                int *l_1231 = &l_1193;
                int *l_1232 = &g_71;
                int *l_1233 = &g_610;
                int *l_1234 = &g_69;
                int *l_1235 = &g_610;
                int *l_1236 = (void*)0;
                int *l_1237 = &g_59;
                int *l_1238 = &l_1170;
                int *l_1239 = &g_610;
                int *l_1240 = &g_610;
                int *l_1241 = &l_1204;
                int *l_1242 = &l_1193;
                int *l_1243 = &g_71;
                int *l_1244 = &l_1217;
                int *l_1245 = (void*)0;
                int *l_1246 = &l_1161;
                int *l_1247 = &g_610;
                int *l_1248 = &g_69;
                int *l_1249 = (void*)0;
                int *l_1250 = &g_71;
                int *l_1251 = (void*)0;
                int *l_1253 = &l_1170;
                int *l_1254 = &l_1161;
                int *l_1255 = &g_610;
                int *l_1257 = (void*)0;
                int *l_1258 = &l_1256;
                int *l_1259 = &g_59;
                int *l_1261 = &l_1256;
                int *l_1262 = &g_69;
                int *l_1263 = &g_104;
                int *l_1264 = &l_1170;
                int *l_1265 = &g_610;
                int *l_1266 = &g_721;
                int *l_1267 = &g_721;
                int *l_1268 = &g_610;
                int *l_1269 = (void*)0;
                int *l_1270 = &l_1161;
                int *l_1271 = &l_1161;
                int **l_1287 = &l_1271;
                ++l_1272;
                for (g_208 = (-1); (g_208 >= 32); g_208 = safe_add_func_int32_t_s_s(g_208, 9))
                {
                    int l_1277 = 1L;
                    char l_1278 = 0L;
                    int l_1279 = 0x4E3FE185L;
                    --g_1281;
                    return l_1193;
                }
                ++l_1284;
                (*l_1287) = (void*)0;

                ;
            }
        }
        for (g_40 = 0; (g_40 >= 29); g_40 = safe_add_func_uint16_t_u_u(g_40, 3))
        {
            int **l_1291 = &g_70;
            (*g_485) = &l_1161;

            ;
            (*l_1291) = &l_1217;

            ;
            (*l_1291) = (*g_611);
        }

        ;
        (*g_102) = (**g_611);
        if (((safe_div_func_uint8_t_u_u(l_1252, g_120)) || (l_1284 < (((void*)0 == &g_948) , ((0x03CFCFABL && (safe_sub_func_int8_t_s_s((g_1280 |= (+l_1161)), l_1217))) , (*g_70))))))
        {
            char l_1306 = 0xADL;
            int l_1409 = 0x12DCE56CL;
            int l_1433 = 0x7B2CFB0BL;
            int l_1437 = 1L;
            if ((safe_mul_func_int32_t_s_s(((void*)0 != l_1298), (l_1150 == g_59))))
            {
                return g_354;


            }
            else
            {
                int l_1370 = 0x9D08C2D2L;
                int l_1395 = (-5L);
                int l_1403 = 0xF08957B4L;
                int l_1404 = 0x59C4D4B1L;
                int l_1432 = 0L;
                short **l_1485 = (void*)0;
                for (g_36 = 16; (g_36 != 60); g_36 = safe_add_func_uint16_t_u_u(g_36, 6))
                {
                    int *l_1301 = &g_59;
                    int *l_1302 = &l_1161;
                    int *l_1303 = &l_1164;
                    int *l_1304 = (void*)0;
                    int *l_1305 = &g_69;
                    int *l_1307 = &g_104;
                    int *l_1308 = &g_59;
                    int *l_1309 = &g_59;
                    int *l_1310 = (void*)0;
                    int *l_1311 = &g_610;
                    int *l_1312 = &g_69;
                    int *l_1313 = &l_1252;
                    int *l_1314 = &g_59;
                    int *l_1315 = &g_104;
                    int l_1316 = 1L;
                    int *l_1317 = &g_610;
                    int *l_1318 = &l_1161;
                    int *l_1319 = &g_59;
                    int *l_1320 = &l_1252;
                    int *l_1321 = &l_1164;
                    int *l_1322 = (void*)0;
                    int *l_1323 = &l_1252;
                    int *l_1325 = &l_1217;
                    int *l_1326 = &g_104;
                    int *l_1327 = (void*)0;
                    int *l_1328 = &g_610;
                    int *l_1329 = &g_71;
                    int *l_1330 = &l_1316;
                    int *l_1331 = &g_104;
                    int *l_1332 = &g_721;
                    int *l_1333 = (void*)0;
                    int *l_1334 = &l_1316;
                    int *l_1335 = &l_1164;
                    int *l_1336 = &g_104;
                    int *l_1337 = &g_69;
                    int *l_1338 = &l_1161;
                    int *l_1339 = &l_1324;
                    int *l_1340 = &l_1252;
                    int *l_1341 = &g_59;
                    int *l_1342 = &g_610;
                    int *l_1343 = &g_721;
                    int *l_1344 = &g_104;
                    int *l_1345 = &g_71;
                    int l_1346 = (-7L);
                    int *l_1347 = &l_1252;
                    int *l_1348 = &g_610;
                    int *l_1349 = &g_721;
                    int *l_1350 = &l_1346;
                    g_1351++;
                    for (g_71 = 0; (g_71 > 21); g_71 = safe_add_func_int8_t_s_s(g_71, 5))
                    {
                        unsigned short **l_1358 = &g_993;
                        unsigned char *l_1367 = &g_364;
                        int **l_1378 = &l_1321;
                        (*l_1378) = ((safe_rshift_func_uint16_t_u_u(func_25((l_1164 & func_25((**g_992), ((*l_1358) = (void*)0), (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(1L, (~(safe_mod_func_uint16_t_u_u((((*l_1347) ^= (safe_add_func_uint8_t_u_u((--(*l_1367)), 251UL))) < (func_22(l_1370, g_1371) , ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(l_1306, (-8L))), l_1217)), (*g_574))) , g_36))), (*g_574)))))), (*g_102))), &g_117)), l_15, l_1306, l_37), 3)) , (void*)0);

                        ;
                        ;
                        (*l_1315) = (((safe_lshift_func_uint16_t_u_u(((*g_41)++), (l_1161 || (safe_sub_func_uint8_t_u_u(l_1324, ((safe_lshift_func_int16_t_s_s((((***g_575) , 0xE8L) , 1L), 15)) & (safe_add_func_uint8_t_u_u((((*l_37) = (safe_div_func_uint16_t_u_u((g_55 | l_1306), (*g_1067)))) <= (l_1324 ^ 0x7524L)), l_1370)))))))) , (void*)0) != &g_41);
                        l_1391 = (void*)0;

                        ;
                    }

                    ;
                }

                ;
                ;
                if (((g_55 <= 0xE2L) < 9L))
                {
                    int *l_1392 = (void*)0;
                    int *l_1393 = &g_610;
                    int *l_1394 = &g_59;
                    int *l_1396 = &g_610;
                    int *l_1397 = &l_1164;
                    int *l_1398 = (void*)0;
                    int *l_1399 = &l_1252;
                    int *l_1400 = &g_69;
                    int *l_1401 = &l_1395;
                    int *l_1402 = (void*)0;
                    int *l_1405 = &l_1217;
                    int *l_1406 = &g_71;
                    int *l_1407 = (void*)0;
                    int *l_1408 = (void*)0;
                    int *l_1410 = &l_1395;
                    int *l_1411 = &g_71;
                    int *l_1412 = &l_1409;
                    int *l_1413 = &l_1161;
                    int *l_1414 = &l_1395;
                    int *l_1415 = &g_71;
                    int *l_1416 = (void*)0;
                    int *l_1417 = &l_1252;
                    int *l_1418 = &l_1409;
                    int *l_1419 = &l_1164;
                    int *l_1420 = &g_721;
                    int *l_1421 = (void*)0;
                    int *l_1422 = &l_1395;
                    int *l_1423 = (void*)0;
                    int *l_1424 = &g_104;
                    int *l_1425 = (void*)0;
                    int *l_1426 = &g_71;
                    int *l_1427 = (void*)0;
                    int l_1428 = 0x25A0D0A1L;
                    int *l_1429 = (void*)0;
                    int *l_1430 = (void*)0;
                    int *l_1431 = &l_1252;
                    int *l_1434 = &g_104;
                    int *l_1435 = &l_1432;
                    int *l_1436 = &g_610;
                    int *l_1438 = &l_1161;
                    int *l_1439 = (void*)0;
                    int *l_1440 = &l_1409;
                    int *l_1441 = (void*)0;
                    int *l_1442 = &l_1403;
                    int *l_1443 = &l_1404;
                    int *l_1444 = &l_1437;
                    int *l_1445 = (void*)0;
                    int *l_1446 = &g_69;
                    int *l_1447 = &l_1437;
                    int *l_1448 = &l_1252;
                    int *l_1449 = &l_1324;
                    int *l_1450 = (void*)0;
                    int *l_1451 = &l_1161;
                    int *l_1452 = &l_1403;
                    int *l_1453 = &l_1432;
                    int *l_1454 = &l_1324;
                    int *l_1455 = (void*)0;
                    int *l_1456 = &l_1217;
                    unsigned l_1457 = 4294967286UL;
                    ++l_1457;
                }
                else
                {
                    int *l_1464 = &l_1432;
                    int *l_1465 = &l_1432;
                    int *l_1466 = &g_104;
                    int *l_1467 = &l_1324;
                    int *l_1468 = (void*)0;
                    int *l_1469 = &l_1433;
                    int *l_1470 = &l_1217;
                    int *l_1471 = (void*)0;
                    int *l_1472 = &l_1324;
                    int *l_1473 = &l_1324;
                    int *l_1474 = &l_1161;
                    int *l_1475 = &g_71;
                    int *l_1476 = &l_1404;
                    int *l_1477 = &g_59;
                    unsigned char l_1478 = 0x59L;
                    for (g_208 = 25; (g_208 > 53); g_208 = safe_add_func_uint32_t_u_u(g_208, 2))
                    {
                        unsigned short l_1463 = 0x065AL;
                        l_1462 = (*g_611);

                        ;
                        l_1463 = (*g_1072);
                        return l_1437;


                    }
                    --l_1478;
                }
                (*g_1482) = &l_1437;

                ;
                for (l_1284 = 9; (l_1284 < 2); --l_1284)
                {
                    int l_1486 = 0xDA7BC83DL;
                    (*g_102) &= ((void*)0 == l_1485);
                    return l_1486;


                }
            }

            ;
            ;
            ;
        }
        else
        {
            int *l_1488 = &l_1217;
            int *l_1489 = &g_104;
            int *l_1490 = &l_1217;
            int *l_1491 = &g_59;
            int *l_1492 = &g_59;
            int *l_1493 = (void*)0;
            int *l_1494 = &g_104;
            int *l_1495 = (void*)0;
            int *l_1496 = &l_1161;
            int *l_1497 = &l_1164;
            int *l_1498 = &g_721;
            int *l_1499 = (void*)0;
            int *l_1500 = &l_1161;
            int *l_1501 = &l_1164;
            int *l_1502 = (void*)0;
            int *l_1503 = (void*)0;
            int *l_1504 = (void*)0;
            int *l_1505 = &l_1252;
            int *l_1506 = &l_1217;
            int *l_1507 = (void*)0;
            int *l_1508 = (void*)0;
            int *l_1509 = &g_69;
            int *l_1510 = &g_59;
            int *l_1511 = &g_721;
            int *l_1512 = (void*)0;
            int *l_1513 = &g_59;
            int *l_1514 = &g_104;
            int *l_1515 = &g_610;
            int *l_1516 = &l_1324;
            int *l_1517 = &g_59;
            int *l_1518 = &g_721;
            int *l_1519 = &g_721;
            int *l_1520 = &g_610;
            int *l_1521 = &g_104;
            int *l_1522 = &g_69;
            int *l_1523 = &g_610;
            int *l_1524 = (void*)0;
            int *l_1525 = (void*)0;
            int *l_1526 = &g_721;
            int *l_1527 = &l_1161;
            int *l_1528 = &l_1252;
            int *l_1529 = &g_59;
            int *l_1530 = &l_1217;
            int *l_1531 = &l_1161;
            unsigned short *l_1543 = (void*)0;
            unsigned short **l_1544 = &l_1543;
            (*g_1487) = &l_1161;

            ;
            ++l_1532;
            (*g_1545) = &l_1161;

            ;
            (*g_1546) = (*g_611);
        }


        ;
        ;
        ;
    }


    ;
    ;
    return g_71;



}







static int func_2(int p_3, const int p_4)
{
    unsigned l_966 = 0xE2573CC8L;
    int l_998 = 0L;
    short ***l_1057 = (void*)0;
    unsigned char l_1059 = 253UL;
    int **l_1110 = &g_572;
    char *l_1131 = &g_186;
    char *l_1133 = &g_232;
    char **l_1132 = &l_1133;
    unsigned l_1134 = 0UL;
    int **l_1135 = (void*)0;
    int **l_1136 = &g_70;
    --l_966;
    for (g_104 = (-3); (g_104 <= 22); g_104 = safe_add_func_int32_t_s_s(g_104, 7))
    {
        short l_977 = (-1L);
        int l_1002 = (-1L);
        int l_1006 = (-1L);
        int l_1009 = 0L;
        short l_1036 = 0xC112L;
        unsigned char *l_1107 = &l_1059;
        int **l_1124 = &g_70;
        for (g_721 = 16; (g_721 >= (-27)); --g_721)
        {
            unsigned l_1033 = 0xBF90B8E5L;
            int l_1060 = 0x1180D5B5L;
            unsigned l_1071 = 0x98ED0FD4L;
            char l_1096 = 0x76L;
        }
        (*g_102) = (g_38 , ((safe_add_func_uint32_t_u_u((((*l_1107)--) >= (-1L)), ((g_571 = l_1110) == l_1110))) == (((*g_70) ^= (safe_rshift_func_int16_t_s_s(l_966, (l_998 = (p_3 ^ 0x7DDCL))))) == (safe_add_func_int32_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u((+(safe_add_func_int16_t_s_s(((*g_1067) = (*g_1067)), (safe_sub_func_uint8_t_u_u(p_3, l_966))))), g_270)) , g_482), p_3)) ^ 0xD6L) > 0x26L), (-1L))))));
        if ((*g_102))
            break;
        (*l_1124) = (*g_485);
    }
    (*l_1136) = func_72((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s((g_482 || g_547), func_22(((-8L) ^ func_22(p_4, func_22(((l_1131 == ((*l_1132) = l_1131)) | g_59), p_3))), g_69))) >= (*g_993)) && l_998), l_1134)), l_966)), (*g_41));

    ;
    ;
    return (**l_1136);
}







static unsigned char func_22(int p_23, unsigned p_24)
{
    unsigned short ***l_962 = (void*)0;
    unsigned short ***l_963 = (void*)0;
    unsigned short **l_964 = &g_41;
    l_964 = &g_41;
    return g_503;
}







static int func_25(int p_26, unsigned short * p_27, int p_28, unsigned short * p_29)
{
    unsigned short l_48 = 65535UL;
    unsigned *l_53 = (void*)0;
    unsigned *l_54 = &g_55;
    int *l_58 = &g_59;
    int *l_68 = &g_69;
    int l_632 = 5L;
    int l_650 = 8L;
    int l_659 = 7L;
    int l_692 = 0xA332FD42L;
    int l_698 = 0x7A676028L;
    int l_713 = 9L;
    int l_714 = 0xB93CB30DL;
    int l_716 = 0xA6770327L;
    int l_719 = 0x19983A2CL;
    short l_723 = (-1L);
    int l_735 = 0x7CE8DBD7L;
    int *l_752 = &g_610;
    int *l_753 = &l_692;
    int *l_754 = &l_735;
    int *l_755 = &l_632;
    int *l_756 = &g_104;
    int *l_757 = (void*)0;
    int *l_758 = &l_698;
    int *l_759 = (void*)0;
    int *l_760 = &g_59;
    int *l_761 = &l_716;
    int *l_762 = &l_650;
    int *l_763 = &l_714;
    int *l_764 = &g_71;
    int *l_765 = (void*)0;
    int *l_766 = &g_721;
    int *l_767 = &l_713;
    int *l_768 = &g_721;
    int *l_769 = &g_69;
    int *l_770 = &l_735;
    int *l_771 = &l_719;
    int *l_772 = (void*)0;
    int *l_773 = &g_721;
    int *l_774 = &l_714;
    int *l_775 = (void*)0;
    int *l_776 = (void*)0;
    int *l_777 = &l_698;
    int *l_778 = (void*)0;
    int *l_779 = &g_610;
    int *l_780 = &l_735;
    int *l_781 = &l_714;
    int *l_782 = &l_716;
    int *l_783 = (void*)0;
    int *l_784 = (void*)0;
    int *l_785 = &l_713;
    int *l_786 = (void*)0;
    int *l_787 = (void*)0;
    int *l_788 = &l_698;
    int *l_789 = &l_632;
    int *l_790 = (void*)0;
    int *l_791 = &l_650;
    int *l_792 = &g_71;
    int *l_793 = &g_610;
    int *l_794 = (void*)0;
    int *l_795 = &g_69;
    int *l_796 = (void*)0;
    int *l_797 = &l_714;
    int *l_798 = &g_59;
    int *l_799 = &g_69;
    int *l_800 = &g_610;
    int *l_801 = &g_71;
    int l_802 = 0xC9EEDA6FL;
    int l_803 = 0xC47DA34EL;
    int l_804 = 0L;
    int *l_805 = &l_804;
    int *l_806 = &g_69;
    int *l_807 = &g_610;
    int l_808 = 0x0EFF1E00L;
    int *l_809 = &l_735;
    int l_810 = 0x4A1A8C06L;
    int *l_811 = &l_632;
    int *l_812 = &l_804;
    int *l_813 = &l_713;
    int *l_814 = &g_610;
    int *l_815 = &g_69;
    int *l_816 = &l_632;
    int *l_817 = &l_714;
    int *l_818 = &l_810;
    int *l_819 = &l_803;
    int l_820 = 0xD415FDBBL;
    int *l_821 = &l_802;
    int l_822 = 0xC499AB77L;
    int *l_823 = &l_810;
    int *l_824 = &l_719;
    int *l_825 = &l_692;
    int *l_826 = &l_735;
    int *l_827 = &l_650;
    int *l_828 = &l_698;
    int *l_829 = (void*)0;
    int *l_830 = (void*)0;
    int *l_831 = &g_610;
    int *l_832 = &l_803;
    int *l_833 = &l_716;
    int *l_834 = (void*)0;
    int *l_835 = &g_610;
    int *l_836 = &l_804;
    int *l_837 = &l_803;
    int *l_838 = &g_69;
    int *l_839 = (void*)0;
    int *l_840 = &l_716;
    int *l_841 = &l_820;
    int l_842 = 0xF439084DL;
    int *l_843 = &g_104;
    int *l_844 = &g_59;
    int *l_845 = &l_698;
    int *l_846 = &l_810;
    int *l_847 = &l_692;
    int *l_848 = &l_820;
    int *l_849 = &l_808;
    int *l_850 = &l_716;
    int *l_851 = &l_810;
    int *l_852 = &l_692;
    int l_853 = 0xFC46F5DCL;
    int *l_854 = (void*)0;
    int *l_855 = &l_822;
    int *l_856 = &l_810;
    int *l_857 = &l_632;
    int *l_858 = &l_735;
    int *l_859 = &l_650;
    int *l_860 = (void*)0;
    int *l_861 = &l_716;
    int *l_862 = &l_692;
    int *l_863 = &g_71;
    int *l_864 = &l_713;
    int *l_865 = &g_59;
    int *l_866 = &l_820;
    int *l_867 = &l_810;
    int *l_868 = &g_59;
    int *l_869 = &l_719;
    int *l_870 = &l_632;
    int *l_871 = &g_69;
    int *l_872 = (void*)0;
    int l_873 = 1L;
    int *l_874 = &g_71;
    int *l_875 = (void*)0;
    int *l_876 = &g_104;
    int *l_877 = (void*)0;
    int *l_878 = &l_820;
    int *l_879 = &l_802;
    int l_880 = 0x22180E40L;
    int *l_881 = &l_873;
    int *l_882 = &l_716;
    int *l_883 = &g_610;
    int l_884 = 0xBD566041L;
    int *l_885 = &l_884;
    int *l_886 = &l_873;
    int l_887 = (-1L);
    int *l_888 = (void*)0;
    int *l_889 = &l_808;
    int *l_890 = &g_610;
    int *l_891 = &l_716;
    int *l_892 = &l_808;
    int *l_893 = &g_69;
    int *l_894 = &g_69;
    int *l_895 = &l_650;
    int l_896 = 0x4CDDC7E7L;
    int *l_897 = (void*)0;
    int *l_898 = &l_713;
    int *l_899 = &l_822;
    int *l_900 = &l_808;
    int l_901 = 0L;
    int *l_902 = &l_716;
    int *l_903 = (void*)0;
    int *l_904 = &l_803;
    int *l_905 = &g_104;
    int *l_906 = &l_896;
    int *l_907 = (void*)0;
    int l_908 = 0L;
    int *l_909 = (void*)0;
    int *l_910 = (void*)0;
    int *l_911 = &l_808;
    int *l_912 = (void*)0;
    int *l_913 = (void*)0;
    int *l_914 = (void*)0;
    int *l_915 = (void*)0;
    int *l_916 = &l_887;
    int *l_917 = &g_71;
    int l_918 = 0x98FD9AC0L;
    int *l_919 = &g_71;
    int *l_920 = &l_873;
    int l_921 = 0x203C8DB4L;
    int l_922 = 0x00B28FCAL;
    int *l_923 = &l_713;
    int *l_924 = &g_721;
    int *l_925 = (void*)0;
    int l_926 = 0xAA95AB50L;
    int *l_927 = (void*)0;
    int *l_928 = &l_692;
    int *l_929 = &l_803;
    int l_930 = (-1L);
    int *l_931 = &g_104;
    int *l_932 = &l_873;
    int *l_933 = &l_922;
    int *l_934 = &l_632;
    int *l_935 = &l_842;
    int *l_936 = (void*)0;
    int *l_937 = &g_104;
    int *l_938 = &l_735;
    int *l_939 = (void*)0;
    int *l_940 = &l_735;
    int *l_941 = &g_71;
    int *l_942 = &l_842;
    int l_943 = (-1L);
    int l_944 = 1L;
    int *l_945 = &l_650;
    int *l_946 = &l_887;
    int *l_947 = &l_930;
    int *l_949 = &l_880;
    int *l_950 = (void*)0;
    int *l_951 = &l_802;
    int *l_953 = (void*)0;
    int *l_954 = &l_901;
    int *l_955 = &g_69;
    int *l_956 = (void*)0;
    int *l_957 = &l_713;
    int *l_958 = &l_650;
    return g_610;
}







static const int func_43(unsigned short p_44, const int p_45, unsigned short * p_46, unsigned p_47)
{
    unsigned short *l_493 = (void*)0;
    unsigned short *l_499 = &g_42;
    int l_500 = 0x3A70F743L;
    int l_535 = 0xC0CF1EBDL;
    for (g_42 = 28; (g_42 > 48); g_42 = safe_add_func_int32_t_s_s(g_42, 9))
    {
        unsigned char l_490 = 5UL;
        int l_532 = 0x41575F16L;
        unsigned *l_555 = &g_36;
        int *l_557 = &l_535;
        int **l_558 = &l_557;
        unsigned short *l_602 = &g_42;
        for (p_47 = 0; (p_47 > 32); ++p_47)
        {
            unsigned short **l_494 = &l_493;
            int l_508 = (-1L);
            int l_522 = 0x90052BFAL;
            int *l_550 = &g_104;
            l_490 ^= 3L;
            if ((((safe_div_func_uint16_t_u_u((1L ^ (((*l_494) = l_493) == (void*)0)), (safe_sub_func_uint16_t_u_u((g_117 = (safe_lshift_func_uint16_t_u_s(func_60(l_499), (l_500 | ((g_71 && (((((~0x4EC9L) < (safe_sub_func_int8_t_s_s((g_232 != l_500), g_36))) == l_500) || g_186) , g_117)) || p_45))))), (*g_41))))) <= l_500) == 4UL))
            {
                int **l_504 = (void*)0;
                int **l_505 = &g_70;
                int *l_506 = &g_59;
                int *l_507 = &l_500;
                int *l_509 = (void*)0;
                int *l_510 = &g_104;
                int *l_511 = (void*)0;
                int *l_512 = &g_59;
                int *l_513 = &g_69;
                int *l_514 = &g_104;
                int *l_515 = &g_104;
                int *l_516 = &g_71;
                int *l_517 = &g_104;
                int *l_518 = (void*)0;
                int *l_519 = &g_71;
                int *l_520 = &g_104;
                int *l_521 = &l_508;
                int *l_523 = &g_71;
                int *l_524 = &l_522;
                int *l_525 = &l_522;
                int *l_526 = &g_69;
                int *l_527 = &g_104;
                int *l_528 = &g_71;
                int *l_529 = &g_104;
                int *l_530 = (void*)0;
                int *l_531 = &g_71;
                int *l_533 = &g_69;
                int *l_534 = &g_59;
                int *l_536 = &l_500;
                unsigned l_537 = 0UL;
                (*l_505) = &g_59;

                ;
                --l_537;
            }
            else
            {
                unsigned *l_542 = &g_482;
                int l_545 = 0x33C98966L;
                int *l_546 = &g_547;
                int *l_548 = (void*)0;
                int *l_549 = &l_508;
                (*l_549) &= ((l_535 > (((*l_546) = (safe_add_func_uint16_t_u_u(((!((*g_41) != l_500)) > l_545), 0xE5B7L))) , g_42)) , 7L);
            }
            (*l_550) = p_47;
            (*l_550) ^= l_490;
        }


        (*l_557) = (safe_add_func_uint8_t_u_u(1UL, (safe_mod_func_uint32_t_u_u(p_45, ((*l_555) = 0x7AE80A53L)))));
        (*g_485) = ((*l_558) = &l_532);

        ;
        ;
        for (g_69 = (-19); (g_69 <= (-4)); g_69++)
        {
            int *l_563 = (void*)0;
            int *l_564 = &g_71;
            int **l_569 = (void*)0;
            unsigned l_586 = 4294967288UL;
            unsigned short *l_599 = (void*)0;
        }
    }
    return l_535;
}







static const unsigned char func_49(unsigned p_50, int p_51, char p_52)
{
    int *l_368 = &g_59;
    int *l_369 = &g_59;
    int *l_370 = &g_104;
    int *l_371 = (void*)0;
    int *l_372 = (void*)0;
    int *l_373 = (void*)0;
    int *l_374 = &g_69;
    int l_375 = 0xB36039B1L;
    int *l_376 = &g_71;
    int *l_377 = &l_375;
    int *l_378 = &g_59;
    int *l_379 = &g_71;
    int *l_380 = &g_71;
    int *l_381 = &g_59;
    int *l_382 = (void*)0;
    int *l_383 = &g_71;
    int *l_384 = &l_375;
    int *l_385 = &l_375;
    int *l_386 = &g_59;
    int *l_387 = &l_375;
    int *l_388 = &g_104;
    int *l_389 = &l_375;
    int *l_390 = &g_69;
    int *l_391 = &g_69;
    int *l_392 = &l_375;
    int *l_393 = &l_375;
    int *l_394 = &g_104;
    int *l_395 = &g_104;
    int *l_396 = (void*)0;
    int *l_397 = &g_59;
    int *l_398 = &g_104;
    int l_399 = 0x01EED81CL;
    int *l_400 = (void*)0;
    int *l_401 = &g_69;
    int l_402 = 0x1C270E04L;
    int *l_403 = &g_71;
    int *l_404 = &g_59;
    int *l_405 = &l_402;
    int *l_406 = (void*)0;
    int *l_407 = &l_402;
    int *l_408 = (void*)0;
    int l_409 = 0x463E9B3EL;
    int *l_410 = (void*)0;
    int l_411 = 0x1617112BL;
    int *l_412 = &l_399;
    int *l_413 = &l_411;
    int l_414 = 0x211A307CL;
    int l_415 = 0x0E61FE24L;
    int *l_416 = &l_409;
    int *l_417 = &l_375;
    int *l_418 = &l_409;
    int l_419 = 1L;
    int l_420 = 1L;
    int l_421 = 0x499DA406L;
    int *l_422 = &l_414;
    int *l_423 = &l_375;
    int *l_424 = &l_409;
    int *l_425 = (void*)0;
    int *l_426 = &l_409;
    int *l_427 = (void*)0;
    int *l_428 = &l_402;
    int *l_429 = (void*)0;
    int *l_430 = &l_402;
    int *l_431 = &l_375;
    int *l_432 = (void*)0;
    int *l_433 = &g_59;
    int *l_434 = &g_59;
    int *l_435 = &l_402;
    int *l_436 = &l_414;
    int l_437 = 0x1E3A59E2L;
    int *l_438 = &g_69;
    int *l_439 = &g_104;
    int *l_440 = &l_415;
    int *l_441 = &l_414;
    int *l_442 = &l_415;
    int *l_443 = &l_414;
    int l_444 = 0xC7492526L;
    int *l_445 = &g_59;
    int *l_446 = &l_419;
    int *l_447 = &l_444;
    int *l_448 = &l_419;
    int *l_449 = &g_69;
    int l_450 = 0xB461A26FL;
    int *l_451 = (void*)0;
    int *l_452 = &l_399;
    int *l_453 = (void*)0;
    int *l_454 = &g_71;
    int *l_455 = (void*)0;
    int *l_456 = &l_411;
    int *l_457 = &l_444;
    int l_458 = 6L;
    int *l_459 = (void*)0;
    int *l_460 = &l_375;
    int *l_461 = &l_437;
    int *l_462 = &l_421;
    int *l_463 = &l_421;
    int *l_464 = &l_458;
    int *l_465 = &g_69;
    int *l_466 = &l_450;
    int *l_467 = &l_450;
    int *l_468 = (void*)0;
    int *l_469 = &l_414;
    int l_470 = 0xBE923F38L;
    int *l_471 = &l_409;
    int *l_472 = &l_415;
    int *l_473 = &l_415;
    int l_474 = 0x8AC21EE2L;
    int *l_475 = &l_409;
    int *l_476 = (void*)0;
    int *l_477 = &l_470;
    int *l_478 = &l_414;
    int *l_479 = &l_415;
    int *l_480 = &l_415;
    int *l_481 = (void*)0;
    l_368 = func_72((*g_41), p_52);

    ;
    ++g_482;
    (*g_485) = &l_411;

    ;
    return g_120;


}







static char func_60(unsigned short * p_61)
{
    int *l_275 = &g_69;
    int *l_276 = &g_69;
    int *l_277 = &g_104;
    int *l_278 = &g_104;
    int *l_279 = &g_71;
    int *l_280 = &g_69;
    int *l_281 = &g_71;
    int l_282 = 6L;
    int l_283 = (-6L);
    int *l_284 = &g_69;
    int *l_285 = &l_283;
    int *l_286 = &g_71;
    int *l_287 = &g_69;
    int l_288 = 0x48A301CDL;
    int l_289 = 0xDEC70849L;
    int l_290 = 0xDBDBAA6CL;
    int *l_291 = &l_282;
    int *l_292 = &g_69;
    int *l_293 = &l_290;
    int l_294 = 0L;
    int *l_295 = &g_69;
    int *l_296 = &g_71;
    int *l_297 = &l_289;
    int *l_298 = &l_294;
    int *l_299 = &g_69;
    int *l_300 = &g_71;
    int *l_301 = &l_282;
    int *l_302 = (void*)0;
    int *l_303 = &l_289;
    int *l_304 = &l_283;
    int *l_305 = &g_104;
    int *l_306 = &g_71;
    int *l_307 = &l_289;
    int *l_308 = &g_104;
    int *l_309 = &l_294;
    int *l_310 = &l_283;
    int *l_311 = (void*)0;
    int *l_312 = &g_71;
    int *l_313 = &g_104;
    int *l_314 = &l_288;
    int *l_315 = &g_69;
    int l_316 = 0x95517ECDL;
    int *l_317 = &g_104;
    int *l_318 = &g_71;
    int *l_319 = &l_282;
    int *l_320 = &l_289;
    int *l_321 = &l_316;
    int l_322 = 0x1D46D758L;
    int *l_323 = &l_316;
    int *l_324 = &g_104;
    int *l_325 = &g_69;
    int *l_326 = &l_289;
    int l_327 = 0x28011D83L;
    int *l_328 = (void*)0;
    int l_329 = 0xB4C23890L;
    int *l_330 = &l_282;
    int *l_331 = (void*)0;
    short l_332 = (-1L);
    int *l_333 = &l_322;
    int *l_334 = &l_329;
    int *l_335 = &l_327;
    int l_336 = 0x89118085L;
    int *l_337 = (void*)0;
    int *l_338 = &l_327;
    int *l_339 = &l_316;
    int *l_340 = &l_322;
    int *l_341 = &g_71;
    int *l_342 = &l_327;
    int *l_343 = &l_329;
    int l_344 = 0L;
    int *l_345 = &l_288;
    int *l_346 = &l_282;
    int l_347 = 0xEC45A456L;
    int *l_348 = &l_282;
    int *l_349 = &l_327;
    int *l_350 = &l_336;
    int l_351 = 6L;
    int l_352 = 0xCDD5964DL;
    int *l_353 = &l_316;
    int *l_355 = &l_288;
    int *l_356 = (void*)0;
    int *l_357 = &l_282;
    int *l_358 = &g_104;
    int *l_359 = &l_329;
    int *l_360 = &l_344;
    int *l_361 = (void*)0;
    int *l_362 = &l_316;
    int *l_363 = &l_329;
    unsigned l_367 = 0UL;
    --g_364;
    return l_367;
}







static unsigned short * func_62(int p_63, unsigned p_64, int * p_65)
{
    unsigned l_83 = 4294967295UL;
    int l_86 = 6L;
    int *l_274 = &g_104;
    l_274 = func_72((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_63, (l_83++))), (65535UL == (l_86 & (((func_87(&g_71, &g_42) != ((safe_mod_func_int32_t_s_s(g_36, (g_36 , g_36))) ^ g_38)) , p_64) > p_64))))), l_86)), l_86)), (*g_41));


    ;
    return &g_42;


}







static int * func_72(unsigned short p_73, unsigned short p_74)
{
    int l_152 = (-6L);
    int l_153 = (-1L);
    int l_164 = (-6L);
    unsigned l_174 = 0x21A34F7BL;
    int *l_182 = &l_164;
    int l_211 = 0x13DEA642L;
    int l_234 = 0x90BE2757L;
    int l_250 = 0xC1AE132CL;
    int l_256 = 1L;
    int l_257 = (-7L);
    int **l_273 = &l_182;
    for (g_69 = 1; (g_69 < 28); g_69 = safe_add_func_uint8_t_u_u(g_69, 2))
    {
        int *l_141 = &g_104;
        int *l_142 = &g_104;
        int *l_143 = (void*)0;
        int *l_144 = &g_71;
        int *l_145 = &g_71;
        int *l_146 = &g_104;
        int l_147 = 0x40E2D3E4L;
        int *l_148 = &g_104;
        int *l_149 = (void*)0;
        int *l_150 = &g_104;
        int *l_151 = (void*)0;
        int *l_154 = &g_71;
        int *l_155 = &l_153;
        int *l_156 = (void*)0;
        int *l_157 = (void*)0;
        int *l_158 = (void*)0;
        int *l_159 = &l_153;
        int *l_160 = &g_71;
        int *l_161 = &l_153;
        int l_162 = 0L;
        int l_163 = 0x6D709BDCL;
        int *l_165 = (void*)0;
        int *l_166 = &g_104;
        int *l_167 = &g_104;
        int *l_168 = &l_162;
        int *l_169 = &l_147;
        int *l_170 = &l_162;
        int *l_171 = &l_153;
        int *l_172 = &l_164;
        int *l_173 = (void*)0;
        int l_223 = 0x217CE365L;
        ++l_174;
        for (l_152 = 0; (l_152 >= 2); ++l_152)
        {
            int l_194 = 0xA7544DDCL;
            int *l_235 = &g_71;
            int *l_236 = &l_234;
            int *l_237 = &l_162;
            int *l_238 = &l_163;
            int *l_239 = (void*)0;
            int *l_240 = &l_162;
            int *l_241 = &l_163;
            int *l_242 = &l_164;
            int *l_243 = &l_147;
            int *l_244 = &l_194;
            int *l_245 = &g_71;
            int *l_246 = &g_71;
            int *l_247 = &l_163;
            int *l_248 = &g_71;
            int l_249 = 7L;
            int *l_251 = (void*)0;
            int *l_252 = &l_162;
            int *l_253 = &l_163;
            int *l_254 = &l_163;
            int *l_255 = &l_194;
            int *l_258 = &l_153;
            int *l_259 = &l_249;
            int *l_260 = &l_249;
            int *l_261 = &l_162;
            int *l_262 = &l_250;
            int *l_263 = &l_249;
            int *l_264 = &l_162;
            int *l_265 = &l_147;
            int *l_266 = &l_164;
            int *l_267 = &l_163;
            int *l_268 = &l_147;
            int *l_269 = &l_256;
            for (l_164 = 24; (l_164 < (-5)); l_164 = safe_sub_func_int16_t_s_s(l_164, 7))
            {
                int *l_181 = &l_153;
                if (p_74)
                    break;
                l_181 = &l_163;

                ;
                (*l_169) &= (&l_147 != l_182);
            }
            for (p_74 = 0; (p_74 != 1); p_74 = safe_add_func_int32_t_s_s(p_74, 1))
            {
                short l_185 = (-1L);
                int *l_187 = &l_162;
                int *l_188 = (void*)0;
                int *l_189 = &g_104;
                int *l_190 = &l_147;
                int *l_191 = &l_163;
                int *l_192 = (void*)0;
                int *l_193 = (void*)0;
                int *l_195 = &l_162;
                int *l_196 = (void*)0;
                int l_197 = 0x324CD905L;
                int *l_198 = &l_147;
                int *l_199 = &l_163;
                int *l_200 = &l_153;
                int *l_201 = &l_194;
                int *l_202 = &l_162;
                int *l_203 = &l_147;
                int *l_204 = &l_147;
                int *l_205 = &l_197;
                int *l_206 = &l_147;
                int *l_207 = &l_197;
                unsigned short l_216 = 0x2D76L;
                unsigned *l_226 = &l_174;
                char *l_229 = (void*)0;
                char *l_230 = &g_186;
                char *l_231 = &g_232;
                short *l_233 = &g_40;
                ++g_208;
                l_194 = (l_211 , ((((*l_233) = (((safe_sub_func_int8_t_s_s(((*l_231) = (safe_lshift_func_uint8_t_u_u(l_216, (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((!l_223), ((safe_add_func_int32_t_s_s((((((((*l_226) = g_40) >= (((*l_207) & (((~(safe_rshift_func_int8_t_s_s(((((*l_230) = (g_69 , (*l_155))) , g_36) != (+((p_73 && 255UL) , g_120))), 0))) < 4294967289UL) >= p_74)) || 0x7F53L)) , (*l_205)) > 0x88E39991L) < p_74) == (*l_160)), 0UL)) >= 0x161DL))) & (*l_141)), 2)), (*g_41)))))), 1L)) , (-7L)) , 0x6748L)) > 0xEB4EL) || (*g_70)));
            }
            (*l_182) = (*g_70);
            ++g_270;
        }
    }
    (*l_273) = &g_71;

    ;
    return &g_69;


}







static short func_87(int * const p_88, unsigned short * p_89)
{
    short l_92 = (-3L);
    int l_98 = 0x46227A4CL;
    unsigned l_101 = 7UL;
    int l_107 = 0x05ADB561L;
    unsigned l_121 = 0x50A3B4BAL;
    int **l_136 = &g_102;
    (*g_70) = (safe_mod_func_int8_t_s_s(1L, l_92));
    if ((((safe_add_func_int8_t_s_s(0x51L, g_42)) , g_70) == g_70))
    {
        unsigned short l_95 = 65531UL;
        int *l_103 = &g_104;
        (*p_88) = (*g_70);
        (*l_103) ^= ((l_92 < (((l_95 & (safe_rshift_func_int8_t_s_s(((l_98 || 0L) != l_92), (safe_mod_func_int16_t_s_s((l_95 || (g_42 < ((l_101 , ((*g_70) = ((((void*)0 == g_102) , 0UL) , (*g_102)))) >= g_36))), (-10L)))))) != g_40) | (-9L))) != (*p_89));
    }
    else
    {
        char l_112 = 0xEBL;
        unsigned short *l_115 = &g_42;
        unsigned short *l_116 = &g_117;
        if (((*p_88) || ((((l_107 = (l_98 = (safe_lshift_func_uint16_t_u_u((*g_41), 12)))) || ((*l_116) = ((((8L <= l_98) >= (safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(0x11L, (-9L))), g_104))) | (l_112 , (safe_add_func_uint8_t_u_u(((void*)0 == l_115), 0x9EL)))) , l_112))) , 65535UL) ^ 0x4B7FL)))
        {
            (*g_70) = ((safe_div_func_int16_t_s_s(g_117, g_120)) & (g_40 = (l_121 , (l_98 <= l_92))));
            (*g_102) = (safe_sub_func_int16_t_s_s((l_92 == (*p_89)), (safe_sub_func_int32_t_s_s(l_112, ((((~((*p_89) | ((safe_mod_func_int32_t_s_s(0xE56F4200L, ((*p_88) = (*g_70)))) == (*g_41)))) >= 1UL) || (l_112 < 0xC37093F0L)) != l_92)))));
        }
        else
        {
            int *l_133 = &g_69;
            for (l_107 = 0; (l_107 <= 16); ++l_107)
            {
                g_102 = p_88;

                ;
            }

            ;
            for (l_101 = 0; (l_101 >= 40); l_101 = safe_add_func_int16_t_s_s(l_101, 3))
            {
                unsigned l_132 = 0x182C9CB7L;
                return l_132;
            }
            (*l_133) = ((*g_70) |= (0xF5L ^ l_98));
            (*p_88) &= ((safe_lshift_func_uint16_t_u_s((*p_89), 0)) , l_121);
        }

        ;
    }

    ;
    (*l_136) = &l_107;

    ;
    return g_120;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_749, "g_749", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1371, "g_1371", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
