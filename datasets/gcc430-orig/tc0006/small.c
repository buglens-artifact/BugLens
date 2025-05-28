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



static short g_2 = 0x1B3CL;
static int g_36 = 7L;
static int *g_43 = &g_36;
static int **g_42 = &g_43;
static int g_81 = 0L;
static short g_134 = 0x892FL;
static short g_136 = 0L;
static short g_138 = 0xC02AL;
static unsigned char g_168 = 0x30L;
static unsigned g_184 = 0xB2D383E8L;
static short g_198 = (-10L);
static unsigned short g_210 = 0UL;
static unsigned short *g_209 = &g_210;
static unsigned short **g_208 = &g_209;
static int g_212 = 1L;
static int *g_222 = &g_36;
static int **g_221 = &g_222;
static unsigned g_245 = 0x755174FDL;
static char g_254 = 0x67L;
static int g_269 = 0xA2573A22L;
static int g_330 = 0x857B4A2EL;
static unsigned g_347 = 0x51D64CF6L;
static unsigned g_370 = 0x1B165134L;
static unsigned *g_398 = &g_370;
static char *g_412 = &g_254;
static char **g_411 = &g_412;
static char ***g_410 = &g_411;
static unsigned char *g_466 = &g_168;
static unsigned *g_605 = &g_245;
static unsigned **g_604 = &g_605;
static int g_667 = 0x7C894555L;
static int **g_757 = (void*)0;
static int g_866 = 3L;
static unsigned short g_894 = 0x8904L;
static unsigned short g_896 = 7UL;
static short g_915 = 0xB8E0L;
static unsigned char g_925 = 0x98L;
static unsigned short ***g_953 = &g_208;
static unsigned short ****g_952 = &g_953;
static char g_1006 = (-3L);
static short g_1017 = 0L;
static unsigned short g_1034 = 0x2B30L;
static unsigned short g_1094 = 0xE4F7L;
static unsigned g_1230 = 9UL;
static unsigned **g_1263 = &g_398;
static unsigned ***g_1262 = &g_1263;



static unsigned char func_1(void);
static int * func_3(unsigned p_4, int * p_5, int p_6, int * p_7);
static int func_24(short p_25, short p_26, short p_27, unsigned p_28);
static int func_29(int * p_30, short p_31, int * p_32, int * p_33, int * p_34);
static int * func_37(int * p_38, int * p_39, int * p_40, int * p_41);
static int * func_46(int ** p_47, int ** p_48);
static int ** func_49(int ** p_50, unsigned p_51);
static int ** func_52(int * p_53, int * p_54, short p_55, char p_56, unsigned char p_57);
static int * func_58(int ** p_59, char p_60);
static int ** func_61(int * p_62, int ** p_63, int * p_64, int * p_65, char p_66);
static unsigned char func_1(void)
{
    int *l_35 = &g_36;
    unsigned short ****l_956 = &g_953;
    char l_1068 = (-4L);
    int **l_1073 = &g_222;
    int *l_1102 = &g_667;
    short l_1133 = (-1L);
    short l_1135 = 1L;
    unsigned char *l_1144 = &g_168;
    unsigned **l_1187 = &g_605;
    int l_1231 = (-1L);
    int l_1259 = 1L;
    if (g_2)
    {
        unsigned char l_23 = 255UL;
        int *l_621 = &g_212;
        unsigned l_984 = 0UL;
        int l_1035 = 0L;
        char l_1057 = 0xDCL;
        short l_1105 = 0x9D65L;
        unsigned char l_1132 = 0xC5L;
        unsigned short l_1160 = 9UL;
        unsigned **l_1170 = &g_605;
        unsigned **l_1172 = &g_605;
        char **l_1181 = &g_412;
        int *l_1197 = &g_212;
        int **l_1215 = &l_1197;
        int **l_1216 = &g_43;
        int ***l_1217 = &g_42;
        if (g_2)
        {
            unsigned l_12 = 0xEFA42B48L;
            unsigned short *l_893 = &g_894;
            int *l_895 = (void*)0;
            unsigned l_997 = 0x87C45106L;
            int l_1065 = 0x366882D5L;
            int l_1134 = 0xD201F961L;
            short *l_1136 = &g_198;
            (*g_221) = func_3((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((((l_12 < (0xF257L != (safe_mul_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((*l_893) &= (safe_add_func_uint8_t_u_u(l_23, (func_24(l_23, g_2, g_2, ((*g_605) = (func_29(l_35, l_23, func_37(&g_36, &g_36, l_35, &g_36), l_621, l_621) , (*l_621)))) , l_12)))), 0xBEFFL)) != g_269), g_330)), (-1L))) < l_12) < l_12), 255UL)))) , (**g_208)) ^ 5UL), 7)), l_12)), l_895, g_896, l_621);
            if ((safe_mul_func_uint16_t_u_u((&g_410 != (void*)0), ((safe_sub_func_int16_t_s_s((((*l_35) , l_12) ^ (*l_621)), g_184)) <= (*l_35)))))
            {
                unsigned char l_960 = 0xEFL;
                int l_986 = 0x83E4CBEBL;
                int **l_1000 = &g_222;
                if ((*l_35))
                {
                    unsigned short l_957 = 1UL;
                    int *l_985 = &g_212;
                    unsigned **l_996 = &g_398;
                    unsigned ***l_995 = &l_996;
                    short *l_998 = &g_2;
                    if ((*l_35))
                    {
                        unsigned short *****l_954 = (void*)0;
                        unsigned short *****l_955 = &g_952;
                        (*g_221) = ((0x9C0BL ^ ((*g_221) != ((safe_mod_func_uint32_t_u_u(((*g_466) | (((*l_955) = g_952) != l_956)), (*g_605))) , func_58(&g_222, l_957)))) , (void*)0);
                        (*g_221) = l_35;
                    }
                    else
                    {
                        int l_961 = 0L;
                        int l_966 = 0xDA83FFA3L;
                        short *l_967 = &g_915;
                        int *l_968 = &g_36;
                        unsigned l_983 = 0UL;
                        (*l_621) &= (65531UL >= (safe_mul_func_uint16_t_u_u(((*l_35) || l_960), (*l_968))));
                        (*l_35) ^= l_12;
                        (*l_968) = ((safe_mul_func_int16_t_s_s((*l_35), (safe_div_func_int32_t_s_s((*l_35), (safe_rshift_func_int8_t_s_s((((g_168 && l_960) < (safe_add_func_int32_t_s_s((*l_968), ((((*l_967) = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((((*g_221) = &l_966) == (l_960 , l_895)), (*g_412))), 0))) >= g_896) && (*g_605))))) != 1UL), 7)))))) >= g_212);
                        (*l_968) = ((*g_222) | (safe_add_func_uint8_t_u_u(l_983, l_984)));
                    }
                    (*l_35) &= 0xCC60D012L;
                    (*l_985) = (l_986 = (*l_621));
                    (*l_621) ^= ((safe_add_func_int16_t_s_s(g_330, g_896)) , 0x903CF0C4L);
                }
                else
                {
                    int **l_999 = &l_621;
                    (*l_999) = ((*g_221) = l_35);
                    (**l_999) ^= 0x059C6B9AL;
                    (*g_221) = func_58(l_1000, (*g_412));
                    if ((l_35 == l_621))
                    {
                        char *l_1005 = &g_1006;
                        (*l_621) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((*l_621), ((*l_1005) |= (*g_412)))), 6));
                        (*l_999) = (*g_221);
                    }
                    else
                    {
                        unsigned char *l_1007 = &l_23;
                        unsigned char l_1016 = 0UL;
                        short *l_1022 = &g_134;
                        int *l_1023 = &l_986;
                        (*l_1023) &= ((&g_925 == l_1007) , (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_1016, g_1017)), 15)), (((safe_rshift_func_uint8_t_u_s((*g_466), (((*l_1022) = (*l_621)) != g_210))) & ((+(+((0x956AL <= (((**g_604) = (**g_604)) < (*l_621))) , (-4L)))) <= (****g_952))) , l_1016))), l_1016)));
                        l_1035 |= (safe_div_func_uint8_t_u_u((*l_621), g_1034));
                        (*l_1023) ^= (*l_621);
                        (*l_1000) = (*g_221);
                    }
                }
                (*l_35) = (*l_35);
                (*l_35) = l_986;
            }
            else
            {
                unsigned *l_1051 = &l_984;
                int *l_1055 = &l_1035;
                short *l_1087 = &g_2;
                char ****l_1088 = &g_410;
                int l_1111 = 0xDC52AFE3L;
                for (g_330 = 26; (g_330 <= (-19)); g_330 = safe_sub_func_int32_t_s_s(g_330, 8))
                {
                    int l_1046 = 9L;
                    unsigned *l_1052 = &g_370;
                    int *l_1054 = &g_866;
                    for (l_12 = 11; (l_12 >= 7); --l_12)
                    {
                        return (*g_466);
                    }
                    if ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_1046 == ((*g_221) == (void*)0)), (*g_466))), (safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(0x31L, ((*g_398) , (((*l_621) , l_1051) != l_1052)))) >= 0x4256L), (*l_621))))), g_1017)))
                    {
                        unsigned short l_1053 = 65533UL;
                        int l_1064 = 1L;
                        int ***l_1071 = (void*)0;
                        int ***l_1072 = &g_42;
                        if (l_1053)
                            break;
                        l_1055 = l_1054;
                        l_1065 |= (safe_unary_minus_func_int32_t_s((((l_1057 && ((safe_mul_func_uint16_t_u_u(((***g_953) &= (*l_1055)), ((*l_893) = (safe_rshift_func_int8_t_s_s((((*g_466) = (*g_466)) || (safe_sub_func_int32_t_s_s((&g_952 == &g_952), (0x79B8BD1BL | (*l_1054))))), 4))))) == (((0x18L | ((*l_621) , (*l_35))) , 0x998AL) & l_1064))) , (void*)0) != (void*)0)));
                        l_895 = &l_1046;
                    }
                    else
                    {
                        (*g_221) = (*l_1073);
                    }
                    if (((void*)0 != (*l_1073)))
                    {
                        (*l_35) ^= (*l_1054);
                        g_212 = 0L;
                        (*l_1073) = (void*)0;
                        (*l_621) ^= 0xC2F4B561L;
                    }
                    else
                    {
                        (*l_621) |= ((*l_1055) ^= (*l_35));
                    }
                }
                if ((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((+((*g_412) = (safe_add_func_uint32_t_u_u((((void*)0 == &g_42) ^ (safe_unary_minus_func_uint32_t_u((&g_410 == ((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((*l_1087) = (((((*g_466) = ((safe_lshift_func_int16_t_s_u(g_245, ((**g_208) = (&g_953 == &g_953)))) && (*l_1055))) && 0x73L) <= (*g_412)) | (*l_35))), g_894)), (*l_1055))) , l_1088))))), l_12)))), 0x49L)) , (*l_621)), (*l_621))))
                {
                    unsigned char l_1089 = 2UL;
                    int l_1095 = 0x7318F779L;
                    l_1095 = (((((((-5L) >= ((*l_35) = (*l_621))) & ((*l_621) & l_1089)) , (*g_412)) , 0x124B9B76L) ^ g_866) <= (*l_621));
                }
                else
                {
                    char *****l_1098 = &l_1088;
                    unsigned char *l_1099 = &l_23;
                    int **l_1103 = (void*)0;
                    int *l_1104 = &g_330;
                    int *l_1107 = &g_667;
                    int **l_1106 = &l_1107;
                    int l_1108 = 7L;
                    (*l_1055) = ((*g_605) , (*l_35));
                    (*l_621) = (l_1108 > 4294967295UL);
                    for (g_138 = 19; (g_138 != 4); --g_138)
                    {
                        l_1111 ^= ((*l_621) | (*l_1055));
                    }
                }
                (*l_1055) = (*l_1055);
            }
            (*g_221) = ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((*g_466), (safe_mod_func_uint32_t_u_u((((*l_35) , ((*g_466) || ((~0x2565L) , (((*l_1136) = (((*l_35) , ((((*g_466) , (l_1134 = (safe_mul_func_int8_t_s_s(((((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((*l_35) & (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((-1L), (safe_sub_func_int32_t_s_s(l_1132, l_12)))), 4)), 6))) > l_1133), l_12)), l_1035)) , 5UL) , (void*)0) != (void*)0), 0xEDL)))) , l_1135) | 4294967289UL)) , 0x4241L)) && 0L)))) > (**g_208)), (*l_35))))), l_1057)) , (void*)0);
        }
        else
        {
            int l_1141 = 1L;
            int *l_1142 = &g_269;
            unsigned char **l_1143 = &g_466;
            int *l_1145 = (void*)0;
            int *l_1146 = (void*)0;
            int *l_1147 = &g_330;
            if (((*g_222) >= (((*l_1147) = (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(((((*l_1142) = ((*l_1102) &= (((0x407AL ^ g_1034) , ((*g_605) != l_1141)) != (-8L)))) , ((*l_1143) = &g_168)) != ((****g_952) , (((***g_953) , 4294967288UL) , l_1144))), g_36)) , (**g_411)), 3))) , (**l_1073))))
            {
                int l_1156 = 0x4F31C453L;
                unsigned **l_1157 = &g_398;
                unsigned *l_1158 = &g_347;
                int *l_1159 = &g_81;
                (*l_1159) |= ((safe_add_func_int32_t_s_s(((*l_621) <= ((*g_43) = 0x33F24658L)), (safe_div_func_int32_t_s_s(0x10806CA4L, (((*l_1158) ^= (safe_mul_func_int16_t_s_s((l_1135 && (safe_sub_func_int16_t_s_s(l_1156, (l_1146 == ((*l_1157) = &g_347))))), (**g_208)))) , l_1141))))) != (*g_466));
                (**l_1073) &= l_1160;
            }
            else
            {
                unsigned l_1163 = 4294967290UL;
                int *l_1168 = &g_81;
                if (func_24(g_1017, (((*l_35) = l_1141) < 0L), ((*l_621) & (l_1163 == (*g_466))), l_1141))
                {
                    (*l_621) = l_1163;
                }
                else
                {
                    int *l_1169 = &g_36;
                    unsigned ***l_1171 = &l_1170;
                    (*l_621) = (l_1141 > ((*g_466) , ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((((*l_1168) | (*l_621)) ^ l_1141), 5)), (*l_35))) < (*l_621))));
                    l_1172 = ((*l_1171) = l_1170);
                }
            }
            return l_1141;
        }
        for (l_1035 = 0; (l_1035 == (-20)); --l_1035)
        {
            char **l_1189 = &g_412;
            int l_1195 = 0x75A86DC2L;
            short *l_1202 = &g_134;
            short **l_1208 = &l_1202;
            int l_1211 = 1L;
            unsigned char l_1214 = 0xFFL;
            for (l_23 = 0; (l_23 == 37); l_23 = safe_add_func_int8_t_s_s(l_23, 3))
            {
                int *l_1177 = (void*)0;
                int *l_1178 = &g_212;
                int **l_1196 = &l_1178;
                (*l_1178) = ((*l_35) = 0x664FE955L);
                (*g_221) = &l_1035;
                if ((**g_221))
                {
                    if ((*l_1178))
                        break;
                }
                else
                {
                    short l_1186 = (-1L);
                    int *l_1188 = (void*)0;
                    (*l_1178) &= (safe_rshift_func_uint16_t_u_u(((**g_604) , (*g_209)), (***g_953)));
                }
                l_1195 = (safe_unary_minus_func_uint8_t_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(0UL, ((**g_604) , ((*l_1178) , (***g_953))))), (**l_1196)))));
            }
            g_81 &= (l_1195 , ((*l_35) & ((*l_1202) |= ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((&g_925 == (g_2 , &g_168)), 5)), l_1195)) , (((*l_1197) = (-8L)) && (((*l_35) != ((*g_605) == (**g_604))) , 0UL))))));
            for (g_370 = 0; (g_370 != 26); g_370 = safe_add_func_int16_t_s_s(g_370, 6))
            {
                unsigned short l_1205 = 0xA1C1L;
                (*l_1073) = (*l_1073);
                (*l_1197) = (l_1205 = l_1195);
            }
            l_1214 &= ((*l_1197) &= (l_1195 , ((((**l_1172) = (safe_add_func_uint32_t_u_u((l_1195 = (&g_221 != (void*)0)), (((*l_1208) = &g_198) == ((safe_mul_func_int8_t_s_s(l_1211, (safe_div_func_int8_t_s_s((0xFFL && (*g_412)), l_1211)))) , &g_2))))) , l_1195) ^ (*l_35))));
        }
        (*l_1215) = (*l_1215);
    }
    else
    {
        unsigned char l_1220 = 4UL;
        int *l_1225 = (void*)0;
        unsigned short ***l_1226 = &g_208;
        unsigned *l_1229 = (void*)0;
        int l_1241 = (-2L);
        unsigned short *l_1249 = &g_1094;
        unsigned char l_1256 = 0x4FL;
        unsigned ***l_1264 = &g_1263;
        short *l_1265 = &l_1133;
        int *l_1266 = (void*)0;
        char *l_1267 = &l_1068;
        l_1231 ^= (safe_mod_func_int32_t_s_s(0xE7048E38L, (g_1230 |= func_24((((**g_604) = l_1220) & ((l_1220 <= (safe_rshift_func_uint8_t_u_u((*g_466), ((safe_lshift_func_int8_t_s_u(((((*g_398) = (func_29((*g_42), g_210, l_1225, l_1225, (*g_221)) , 4294967295UL)) , 0x00EFL) || (*g_209)), 1)) , 0x65L)))) | (*g_466))), g_667, g_134, g_894))));
        for (g_36 = 0; (g_36 < (-6)); g_36 = safe_sub_func_uint32_t_u_u(g_36, 3))
        {
            int l_1240 = 0xE14E2D2FL;
            int *l_1248 = &g_212;
            if ((safe_mod_func_int32_t_s_s(0xDF0DB82FL, (*g_605))))
            {
                unsigned l_1242 = 0xFD409F8DL;
                l_1241 = (safe_mul_func_int8_t_s_s((*g_412), (safe_mul_func_uint8_t_u_u(l_1240, 254UL))));
                if (l_1242)
                    break;
            }
            else
            {
                unsigned char **l_1246 = &l_1144;
                unsigned char ***l_1245 = &l_1246;
                int *l_1247 = &g_866;
                (*l_1247) = (((*l_35) || (safe_sub_func_int16_t_s_s(g_370, ((((*l_1245) = (void*)0) != (void*)0) , (1UL != g_667))))) | (-1L));
                l_1248 = ((*g_221) = (g_81 , (*g_221)));
                l_1225 = ((*g_221) = l_1247);
            }
        }
        (*l_35) = (((*l_35) == ((*l_1249) = ((****g_952) = 0x7DD0L))) & (safe_lshift_func_uint8_t_u_s((*g_466), (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((!((((*g_466) <= (((*g_466) , (*l_35)) & 1L)) > l_1256) , (safe_sub_func_int32_t_s_s(l_1259, (*l_35))))), 0x04L)), (*l_35))))));
        (*g_221) = func_58(&g_222, ((*l_1267) = ((*g_412) = (safe_add_func_uint32_t_u_u(((**g_604) = (0xC1L >= (*l_35))), l_1256)))));
    }
    return (*g_466);
}







static int * func_3(unsigned p_4, int * p_5, int p_6, int * p_7)
{
    unsigned l_897 = 0UL;
    int *l_910 = &g_81;
    unsigned short *l_936 = (void*)0;
    unsigned short *l_937 = &g_894;
    l_897 |= (*p_7);
    for (g_184 = 0; (g_184 < 54); g_184 = safe_add_func_uint32_t_u_u(g_184, 1))
    {
        int *l_900 = &g_866;
        int *l_903 = &g_81;
        int *l_904 = &g_36;
        unsigned l_907 = 4294967295UL;
        int **l_908 = &l_904;
        int **l_909 = &g_43;
        short *l_911 = (void*)0;
        short *l_912 = (void*)0;
        short *l_913 = (void*)0;
        short *l_914 = &g_2;
        unsigned char *l_924 = &g_925;
        (*l_910) &= (((*l_914) = (p_6 , 0xDA43L)) <= g_915);
        (*l_904) = ((**l_908) , 1L);
    }
    (*l_910) = ((*p_7) = (((*l_910) ^ (safe_lshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((*l_910), (**g_208))), (p_6 , (*l_910)))) < ((*l_937) = (((((((*g_466) = 1UL) , (*l_910)) != ((((*l_910) , ((safe_rshift_func_int16_t_s_u(p_4, (*g_209))) , &g_667)) != l_910) || 0L)) <= 8L) && p_4) >= 0x6F7525A0L))), (*l_910))), (*l_910)))) == (*l_910)));
    return (*g_221);
}







static int func_24(short p_25, short p_26, short p_27, unsigned p_28)
{
    unsigned short l_698 = 1UL;
    int *l_703 = &g_667;
    unsigned char *l_704 = (void*)0;
    unsigned char **l_705 = &g_466;
    char l_706 = 0xE5L;
    char ***l_721 = &g_411;
    int *l_742 = &g_81;
    int **l_754 = &g_222;
    unsigned short l_756 = 0xD2CDL;
    unsigned **l_759 = &g_605;
    int *l_766 = &g_212;
    unsigned short l_853 = 0xBD14L;
    int *l_858 = &g_36;
    int *l_868 = &g_36;
    unsigned short l_887 = 0xD4D9L;
    if ((((((l_698 , (p_27 , (l_706 = ((!((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((p_28 && func_29((((void*)0 != l_703) , (((l_704 == ((*l_705) = &g_168)) ^ p_25) , l_703)), l_698, l_703, (*g_221), l_703)), l_698)) > l_698), p_28)) == l_698)) , (*g_466))))) && l_706) == p_26) <= 4294967291UL) , p_26))
    {
        int l_714 = 0x5AF391F1L;
        char ***l_719 = (void*)0;
        char ****l_720 = &g_410;
        char ***l_722 = (void*)0;
        int *l_723 = &l_714;
        int **l_726 = &g_43;
        if ((safe_rshift_func_uint8_t_u_u(p_25, 0)))
        {
            int *l_709 = &g_212;
            unsigned short *l_717 = &l_698;
            unsigned l_718 = 0xA34A7A84L;
            (*g_43) = func_29(l_709, (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_714, (safe_rshift_func_uint16_t_u_s(((*l_717) |= (**g_208)), (p_27 && l_718))))) <= 0x15L), p_28)), (*g_221), (*g_221), l_709);
            return l_714;
        }
        else
        {
            (*g_221) = (*g_221);
        }
        (*l_726) = func_58(&g_222, (*g_412));
        for (g_370 = 7; (g_370 != 34); ++g_370)
        {
            char l_733 = 0xDDL;
            unsigned **l_740 = &g_605;
            unsigned ***l_741 = &g_604;
            int *l_755 = &g_81;
        }
    }
    else
    {
        int *l_758 = &g_36;
        char ****l_778 = &g_410;
        int *l_787 = &g_212;
        int *l_822 = &g_81;
        if (func_29(l_758, (g_138 &= (0xA404466AL == ((**g_221) |= (&g_330 == l_758)))), l_758, (*l_754), l_758))
        {
            unsigned ***l_760 = &g_604;
            int *l_765 = &g_81;
            int *l_805 = &g_212;
            unsigned char l_809 = 248UL;
            int l_813 = 0xDA97D482L;
            int *l_862 = &g_36;
            if (((((((*l_760) = l_759) == &g_605) ^ (safe_sub_func_int16_t_s_s(((*l_758) = p_26), g_2))) && (**g_208)) | 0x79DB0187L))
            {
                int *l_785 = (void*)0;
                if ((**g_221))
                {
                    int *l_775 = &g_81;
                    int ***l_794 = &l_754;
                    unsigned l_798 = 0x582244F2L;
                    for (g_134 = 0; (g_134 != (-26)); --g_134)
                    {
                        char ****l_780 = &g_410;
                        char *****l_779 = &l_780;
                        int *l_786 = &g_212;
                        g_42 = ((safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(((**g_208) = p_26), p_28)) | (*g_412)), 0xADA6C490L)) == (*g_222)) != p_25), p_25)) , &l_765);
                    }
                    (*l_766) = ((*g_466) ^ 0x6EL);
                    if ((safe_add_func_int8_t_s_s(((p_27 & 3L) != (((-1L) < g_198) , 0x8BL)), (((+(((*g_605) && (safe_mul_func_uint16_t_u_u(((**g_208) = ((*l_775) = 65527UL)), (safe_mul_func_uint16_t_u_u((&l_785 != ((*l_794) = (void*)0)), 0L))))) >= (*l_787))) , (**g_221)) != (**g_221)))))
                    {
                        int **l_797 = &l_787;
                        (*l_758) = (((*l_787) = ((safe_rshift_func_int8_t_s_s(p_28, (*g_412))) || (*g_466))) & l_798);
                    }
                    else
                    {
                        return p_28;
                    }
                }
                else
                {
                    int **l_799 = &g_43;
                    (**l_754) &= 0xB79F0B87L;
                    (*l_754) = func_58(l_799, (safe_sub_func_uint16_t_u_u(0x19A8L, (safe_rshift_func_int16_t_s_u(p_27, 15)))));
                    if (p_28)
                    {
                        return g_134;
                    }
                    else
                    {
                        int l_804 = 0xE793531BL;
                        (**l_799) = (*g_43);
                        (*l_754) = (l_804 , l_787);
                    }
                    return p_28;
                }
                (*l_766) &= (*l_765);
            }
            else
            {
                unsigned l_806 = 0UL;
                int **l_807 = (void*)0;
                unsigned short ***l_854 = &g_208;
                unsigned char l_863 = 0x03L;
                short *l_867 = (void*)0;
                if ((l_806 = p_27))
                {
                    unsigned short l_808 = 65527UL;
                    unsigned l_810 = 0xB869D975L;
                    int **l_814 = (void*)0;
                    if ((p_25 < ((**g_604) | p_28)))
                    {
                        unsigned l_815 = 0UL;
                        short *l_818 = &g_134;
                        int **l_819 = &g_222;
                        (*g_221) = func_58(((((*l_818) &= (safe_sub_func_uint16_t_u_u(p_25, (((g_198 == 0xBB3CL) & p_26) & 0x43C4L)))) <= 0x8DD2L) , l_819), (*g_412));
                    }
                    else
                    {
                        (*l_787) &= (*g_43);
                        (*l_787) &= ((+(((((*g_209) = ((*g_466) != p_28)) | (**l_754)) , (safe_mul_func_int16_t_s_s(((*g_466) , (-10L)), p_26))) == (-9L))) , 0xBFD8D1D5L);
                        (*l_742) = (((g_198 , (p_26 ^ 3UL)) , ((((((safe_rshift_func_uint16_t_u_s((p_26 && (safe_mod_func_int8_t_s_s(p_25, 0x14L))), 14)) , p_26) && (g_184 ^= (*g_605))) , &l_822) != (void*)0) & (-1L))) && (*l_765));
                    }
                }
                else
                {
                    unsigned l_836 = 4294967288UL;
                    int *l_839 = &g_36;
                    unsigned short ****l_855 = &l_854;
                    for (g_347 = 0; (g_347 < 59); g_347++)
                    {
                        char *l_844 = &l_706;
                        (*g_43) = ((!((safe_rshift_func_uint8_t_u_u((*l_805), 0)) | (safe_div_func_uint32_t_u_u((2L & ((*g_209) = (&g_411 != (void*)0))), 0x3350FB7AL)))) | (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((~p_26))), (l_836 | ((p_26 ^ ((p_27 = ((*g_43) ^ l_836)) >= p_28)) ^ 0x6AL)))));
                        (*l_765) = ((p_25 < p_27) , ((*l_787) ^= ((l_765 != (void*)0) , (safe_mul_func_uint16_t_u_u(func_29(l_839, (safe_mul_func_uint8_t_u_u(p_25, (safe_sub_func_int8_t_s_s(((*g_412) = (*g_412)), ((*l_844) = p_27))))), func_58(&l_758, p_28), l_765, l_839), l_836)))));
                    }
                    if (((safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((~p_28), 13)), 1)) & (l_853 = ((*l_839) = ((*g_466) = (*g_466))))) || (&g_208 != ((*l_855) = l_854))) , (*g_209)), ((p_27 || ((safe_rshift_func_uint8_t_u_u(p_25, 0)) , (**g_604))) | (*g_209)))) , &g_330) != (void*)0), 0x9B2FL)) ^ (**g_208)))
                    {
                        int *l_859 = &g_212;
                        l_859 = l_858;
                        (*g_221) = l_839;
                    }
                    else
                    {
                        int *l_864 = &g_212;
                        int *l_865 = &g_866;
                        (*g_221) = (*g_221);
                        (*l_865) &= ((!((p_27 , (*l_805)) , (safe_add_func_uint16_t_u_u((*g_209), 0xABEBL)))) , (((**g_208) = (p_28 & (func_29((((*g_398) &= p_28) , (l_862 = l_805)), l_863, l_839, l_864, l_758) | p_28))) , 0x5B917360L));
                        return (*l_865);
                    }
                }
                (*l_754) = l_765;
            }
        }
        else
        {
            int l_871 = (-2L);
            int *l_882 = &g_866;
            l_871 = (-1L);
            (*l_882) &= ((safe_mul_func_uint16_t_u_u(65535UL, ((safe_rshift_func_uint16_t_u_s(4UL, (p_28 && 0xEA81E905L))) ^ ((*l_787) , (p_27 ^ (safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(p_28, (safe_add_func_int8_t_s_s((*l_868), ((*g_466) = (l_871 != p_27)))))) && (*l_822)), (*l_822)))))))) != (*g_43));
        }
        for (l_698 = (-14); (l_698 > 55); l_698 = safe_add_func_int32_t_s_s(l_698, 6))
        {
            (*l_822) ^= p_28;
        }
    }
    (*g_221) = (l_742 = (((*g_398) = (safe_add_func_uint16_t_u_u(((((*l_766) >= ((void*)0 == &l_706)) || 4294967295UL) & (p_26 = (((*g_209) , (p_27 , ((p_26 == (*l_742)) != l_887))) , 0L))), 0x0119L))) , l_742));
    for (p_25 = (-17); (p_25 != 4); p_25++)
    {
        unsigned short l_892 = 0x094BL;
        for (g_36 = 0; (g_36 < (-8)); g_36--)
        {
            (*g_221) = (*g_221);
            if (l_892)
                break;
            (*l_742) |= p_27;
        }
    }
    (*l_858) ^= (**g_221);
    return (*l_868);
}







static int func_29(int * p_30, short p_31, int * p_32, int * p_33, int * p_34)
{
    int l_636 = 0x0DC1FB2AL;
    unsigned short l_645 = 0x0267L;
    int *l_668 = &g_330;
    int **l_672 = &g_222;
    if ((**g_221))
    {
        int l_622 = (-4L);
        (**g_221) &= 0xAC72EE65L;
        (*p_34) = (l_622 | (safe_mod_func_uint16_t_u_u(0UL, (safe_lshift_func_uint16_t_u_u(((0xE1L <= (*g_412)) <= g_198), 3)))));
    }
    else
    {
        unsigned l_629 = 0xFDC1D239L;
        int *l_660 = &g_36;
        unsigned **l_671 = &g_605;
        unsigned short **l_694 = &g_209;
        for (g_198 = (-28); (g_198 < 18); g_198 = safe_add_func_uint8_t_u_u(g_198, 8))
        {
            return l_629;
        }
        for (g_81 = (-5); (g_81 <= 14); g_81++)
        {
            unsigned *l_639 = &g_347;
            int l_659 = (-3L);
            for (g_210 = 2; (g_210 >= 1); g_210 = safe_sub_func_uint32_t_u_u(g_210, 1))
            {
                unsigned char l_654 = 0x32L;
                unsigned short **l_693 = &g_209;
            }
        }
        (*l_672) = (*g_221);
    }
    return (*p_30);
}







static int * func_37(int * p_38, int * p_39, int * p_40, int * p_41)
{
    int *l_67 = (void*)0;
    int l_75 = (-4L);
    unsigned l_320 = 4294967290UL;
    unsigned char l_329 = 0x2DL;
    short *l_331 = (void*)0;
    short *l_332 = &g_136;
    int ***l_335 = &g_42;
    unsigned short l_340 = 65528UL;
    int l_343 = 0x73D8C083L;
    char *l_402 = &g_254;
    char **l_401 = &l_402;
    unsigned short **l_423 = (void*)0;
    int **l_473 = &g_43;
    int **l_474 = (void*)0;
    unsigned l_475 = 2UL;
    unsigned l_482 = 4294967295UL;
    char l_493 = (-7L);
    char l_494 = 0L;
    unsigned char *l_499 = &l_329;
    g_42 = (void*)0;
    for (g_36 = (-21); (g_36 >= 19); ++g_36)
    {
        int ***l_68 = &g_42;
        int ***l_69 = (void*)0;
        int ***l_70 = (void*)0;
        int **l_72 = &l_67;
        int ***l_71 = &l_72;
        char l_216 = 0x66L;
    }
    if ((((safe_rshift_func_int16_t_s_s(((*l_332) = (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(l_320, ((!0xE8L) == ((8L || (safe_add_func_uint16_t_u_u(((g_2 <= 9UL) != (((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_136, l_75)), ((**g_208) , (l_329 > g_330)))) <= l_75) != 0xD1EDC45BL)), g_138))) != g_210)))), (*g_222)))), 0)) ^ l_329) == (**g_221)))
    {
        int ***l_336 = &g_221;
        char l_357 = 0x52L;
        int *l_358 = (void*)0;
        int *l_359 = &g_81;
        for (l_329 = 16; (l_329 == 39); l_329++)
        {
            int *l_337 = &l_75;
            unsigned *l_341 = &g_245;
            unsigned *l_342 = &l_320;
            unsigned *l_344 = (void*)0;
            unsigned *l_345 = (void*)0;
            unsigned *l_346 = &g_347;
            unsigned char *l_350 = &g_168;
            char *l_353 = &g_254;
            int *l_354 = (void*)0;
        }
        (*g_222) ^= ((safe_rshift_func_int16_t_s_s(g_136, 6)) && l_357);
        (*l_359) ^= ((***l_336) = (*g_222));
    }
    else
    {
        int ***l_362 = &g_221;
        int l_395 = 0x4177E302L;
        char **l_403 = &l_402;
        unsigned short **l_421 = &g_209;
        int *l_430 = &l_343;
        for (g_138 = 13; (g_138 > 13); g_138 = safe_add_func_int8_t_s_s(g_138, 6))
        {
            unsigned l_367 = 4294967295UL;
            unsigned *l_368 = &g_347;
            unsigned *l_369 = &g_370;
            unsigned *l_371 = &g_184;
            int l_372 = (-1L);
            unsigned char l_373 = 0UL;
            int l_416 = 6L;
            int *l_417 = &g_81;
            if ((((((l_362 == &g_221) & ((***l_362) , (g_168 || ((*l_332) = g_136)))) , ((*l_371) = (((*l_369) &= ((*l_368) |= (0x9990L > ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((***l_362), l_367)), (((l_367 , (-1L)) == g_134) , g_2))) || (-6L))))) , g_212))) < 6L) , l_372))
            {
                unsigned char l_374 = 2UL;
                int l_399 = (-1L);
                char ****l_413 = &g_410;
                l_373 |= ((*g_222) &= ((**g_208) >= g_134));
                (*p_41) |= 0L;
                if (((*p_41) = (l_374 <= 0UL)))
                {
                    int *l_375 = &l_343;
                    (*l_375) &= (*p_40);
                }
                else
                {
                    int l_388 = 0xC08FE410L;
                    unsigned char *l_389 = &l_329;
                    if (((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_367 <= (l_367 & 4294967289UL)), (*g_209))), (l_373 > 0x90A0EE0BL))), (safe_div_func_int32_t_s_s((**g_221), l_388)))), ((*l_389) = g_81))), l_367)) < l_373))
                    {
                        char l_392 = 0xDBL;
                        l_395 ^= (safe_mul_func_int8_t_s_s((g_184 , 0x4CL), ((***l_362) , (((g_370 , (&g_330 == &l_372)) >= l_374) > (l_392 > (((safe_sub_func_uint8_t_u_u(((***l_362) == 65527UL), 0xA6L)) && l_392) , 1UL))))));
                        if ((*g_222))
                            break;
                    }
                    else
                    {
                        int l_400 = 0x773507AEL;
                        (*p_39) = (*p_38);
                        l_399 = (safe_add_func_uint32_t_u_u(((l_374 , (*p_40)) , g_269), ((g_398 = &g_370) == &g_370)));
                        (***l_362) &= l_400;
                        l_403 = l_401;
                    }
                }
                l_416 = (safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((***l_362) & (g_269 && 5UL)), 5)) , (safe_lshift_func_int16_t_s_u((((*l_413) = g_410) != &g_411), 3))) != ((*l_371) = (((g_168 , ((safe_sub_func_uint32_t_u_u(g_138, (*p_41))) < g_269)) , g_2) ^ 0x2CCE86A9L))), l_372));
            }
            else
            {
                if ((*p_39))
                    break;
            }
            (*l_417) &= (*p_38);
            (*p_40) = (*p_40);
        }
        if ((*p_40))
        {
            int l_418 = 3L;
            unsigned short ***l_422 = &g_208;
            int l_426 = (-8L);
            (*g_222) = (*p_38);
            (**l_362) = p_38;
            if (((l_418 = 0x68CCL) <= (((*p_40) = (g_36 < (((*l_422) = ((4294967295UL && (*p_40)) , l_421)) != l_423))) < 0L)))
            {
                l_426 &= ((g_184 |= (safe_rshift_func_int16_t_s_u(g_136, 5))) && (g_184 &= l_418));
            }
            else
            {
                unsigned char l_427 = 0x86L;
                (*g_410) = (l_427 , &l_402);
                for (l_427 = (-11); (l_427 < 31); l_427++)
                {
                    return p_40;
                }
                l_395 ^= (g_81 & ((l_427 < l_426) , (*p_38)));
            }
        }
        else
        {
            return (**l_362);
        }
        (*l_430) &= (*p_40);
    }
    for (l_320 = 0; (l_320 < 43); ++l_320)
    {
        unsigned short l_454 = 5UL;
        unsigned char *l_465 = &l_329;
        int l_468 = 0L;
        char l_532 = 0x51L;
        int *l_534 = &l_75;
        unsigned l_610 = 0xFC8E2312L;
        int l_619 = 0x9B84B678L;
        for (g_138 = (-14); (g_138 != 17); g_138 = safe_add_func_uint32_t_u_u(g_138, 1))
        {
            unsigned l_446 = 0xB70A726BL;
            unsigned char l_457 = 255UL;
            int l_462 = 0x5B2D6D7EL;
            int l_467 = 0L;
        }
        (*g_43) = ((***g_410) || 0xD7L);
    }
    return p_40;
}







static int * func_46(int ** p_47, int ** p_48)
{
    int **l_227 = (void*)0;
    int *l_239 = &g_81;
    int l_240 = 0x7A5F8AFCL;
    char *l_281 = (void*)0;
    char **l_280 = &l_281;
    for (g_210 = 0; (g_210 > 5); ++g_210)
    {
        unsigned short l_233 = 0xBD88L;
        int **l_279 = &g_43;
        for (g_184 = 12; (g_184 == 54); g_184 = safe_add_func_uint8_t_u_u(g_184, 8))
        {
            short l_230 = 0L;
            int l_246 = 0x0C9667DFL;
            int *l_268 = &g_269;
            (*p_48) = ((*p_47) = func_58(l_227, g_134));
            if ((safe_add_func_int8_t_s_s((l_230 , (g_2 >= g_212)), (((safe_mul_func_int8_t_s_s(l_233, g_212)) | 65535UL) > (l_233 ^ 0xBBA2L)))))
            {
                int *l_234 = &g_212;
                (*g_42) = (void*)0;
                (*l_234) = l_233;
            }
            else
            {
                short l_243 = 0xBC24L;
                unsigned *l_244 = &g_245;
                char *l_253 = &g_254;
                int l_259 = 0x0F3B2C59L;
                for (g_136 = (-1); (g_136 != 0); g_136 = safe_add_func_int8_t_s_s(g_136, 8))
                {
                    for (g_198 = 28; (g_198 != 26); g_198 = safe_sub_func_int8_t_s_s(g_198, 1))
                    {
                        l_239 = (*g_42);
                    }
                }
                l_240 = 0x00C7963AL;
                (*p_47) = func_58(((safe_lshift_func_uint8_t_u_u(((l_246 = (l_243 & ((*l_244) = g_81))) < (safe_mul_func_uint8_t_u_u(l_243, g_168))), 2)) , (void*)0), ((*l_253) = (!(((l_243 && ((l_230 <= (safe_sub_func_uint8_t_u_u((g_210 || (g_43 != (void*)0)), 0x4CL))) != 7L)) & (-4L)) && 0xCCL))));
                l_259 &= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(0xC3E7L, l_233)), ((*l_253) = (l_233 <= 3UL))));
            }
            for (l_233 = 0; (l_233 >= 37); l_233 = safe_add_func_int8_t_s_s(l_233, 5))
            {
                unsigned l_262 = 0xAF15A9D2L;
                short *l_265 = (void*)0;
                short *l_266 = &g_134;
                int *l_267 = (void*)0;
                int *l_270 = (void*)0;
                int *l_271 = (void*)0;
                int *l_272 = &g_212;
                (*l_272) ^= (((((l_262 && (safe_rshift_func_uint8_t_u_u(l_246, (((*l_266) = l_246) , ((((l_267 == l_268) > g_210) <= ((*l_266) ^= ((l_230 <= (**g_208)) | (((*g_209) <= l_262) > 0L)))) > g_168))))) && 0x3283L) >= 1L) , l_233) , l_233);
                return (*p_48);
            }
        }
        l_240 = l_233;
        for (g_254 = 17; (g_254 >= 1); g_254 = safe_sub_func_uint8_t_u_u(g_254, 6))
        {
            short l_277 = 1L;
            int *l_278 = &g_36;
            for (g_81 = 18; (g_81 == 17); --g_81)
            {
                l_277 = l_233;
                return l_278;
            }
        }
        (*p_47) = func_58(l_279, g_2);
    }
    if (l_240)
    {
        char ***l_282 = (void*)0;
        char ***l_283 = &l_280;
        char ***l_284 = (void*)0;
        char **l_286 = &l_281;
        char ***l_285 = &l_286;
        int l_293 = 0x527677E7L;
        (*p_48) = (*g_42);
        (*l_285) = ((*l_283) = l_280);
        for (g_254 = (-15); (g_254 > 15); g_254++)
        {
            int **l_289 = &g_43;
            int l_290 = 0L;
            int *l_300 = (void*)0;
            int *l_301 = (void*)0;
            int *l_302 = &l_240;
            int *l_303 = &g_81;
            (*l_289) = func_58(l_289, l_290);
            for (g_269 = 0; (g_269 > 20); ++g_269)
            {
                char l_298 = 0x92L;
                int l_299 = 0L;
                (*p_48) = (*p_48);
                (*p_47) = func_58(l_289, l_293);
                (*p_47) = (*p_47);
                l_299 &= (((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_2, l_298)), (-3L))) == l_293) , l_293);
            }
            (*l_303) = ((*l_302) = (0x0FL >= g_138));
        }
    }
    else
    {
        unsigned l_304 = 0x87EBE363L;
        if ((+l_304))
        {
            return (*g_42);
        }
        else
        {
            unsigned l_305 = 1UL;
            char ***l_306 = &l_280;
            short *l_307 = &g_134;
            unsigned *l_308 = &g_184;
            int *l_312 = (void*)0;
            int *l_313 = &g_81;
            l_305 ^= l_304;
            (*l_313) |= (g_245 == (l_305 > (((*l_308) = (l_304 == (l_304 | (((*l_307) = (l_306 != &l_280)) && (+(l_304 != l_304)))))) != (safe_unary_minus_func_int32_t_s(((safe_mod_func_int32_t_s_s(0x3C94311DL, l_305)) && l_304))))));
            (*g_42) = ((*g_221) = (*p_47));
            (*g_221) = (*p_47);
        }
        g_212 ^= l_304;
    }
    return (*g_221);
}







static int ** func_49(int ** p_50, unsigned p_51)
{
    int *l_218 = &g_36;
    int **l_219 = (void*)0;
    int **l_220 = &l_218;
    (*g_42) = func_58(p_50, p_51);
    (*g_42) = (void*)0;
    (*l_220) = ((*p_50) = l_218);
    return p_50;
}







static int ** func_52(int * p_53, int * p_54, short p_55, char p_56, unsigned char p_57)
{
    int **l_217 = &g_43;
    (*p_54) = (-1L);
    return l_217;
}







static int * func_58(int ** p_59, char p_60)
{
    unsigned l_213 = 4294967287UL;
    int l_214 = 0xBAA7D4B2L;
    int *l_215 = (void*)0;
    l_214 = l_213;
    return l_215;
}







static int ** func_61(int * p_62, int ** p_63, int * p_64, int * p_65, char p_66)
{
    unsigned short l_76 = 0x6275L;
    int l_107 = 0xCC96ABB4L;
    int *l_108 = &g_81;
    unsigned char *l_183 = &g_168;
    unsigned short *l_203 = &l_76;
    unsigned short **l_202 = &l_203;
    unsigned short ***l_201 = &l_202;
    unsigned l_205 = 8UL;
    l_76 &= 0xA90CFFAEL;
    if ((*g_43))
    {
        unsigned l_79 = 4294967295UL;
        int *l_82 = &g_36;
        for (l_76 = 0; (l_76 != 56); l_76++)
        {
            int *l_80 = &g_81;
            (*l_80) &= (+l_79);
            if ((*g_43))
                break;
            return &g_43;
        }
        (*p_63) = l_82;
    }
    else
    {
        char l_85 = 1L;
        int l_86 = 0xCC53A0DCL;
        int **l_109 = &l_108;
        int **l_143 = &l_108;
        unsigned short **l_211 = &l_203;
        l_86 |= (safe_mul_func_uint16_t_u_u(0x76F0L, l_85));
        if ((**g_42))
        {
            unsigned char l_87 = 0x5EL;
            (*p_63) = (*g_42);
            l_87 = ((+1UL) < g_2);
        }
        else
        {
            int *l_92 = &l_86;
            if ((g_81 > (safe_rshift_func_int8_t_s_u(p_66, p_66))))
            {
                unsigned l_97 = 0xA97CAD95L;
                int *l_99 = (void*)0;
                for (l_85 = 10; (l_85 == (-14)); --l_85)
                {
                    int *l_95 = &g_81;
                    l_92 = ((*p_63) = (*p_63));
                }
            }
            else
            {
                return &g_43;
            }
            for (l_85 = 20; (l_85 < (-13)); l_85 = safe_sub_func_uint16_t_u_u(l_85, 9))
            {
                int l_124 = (-9L);
                short *l_133 = &g_134;
                short *l_135 = &g_136;
                short *l_137 = &g_138;
                unsigned l_162 = 1UL;
                (*p_63) = (*g_42);
                if ((safe_add_func_uint32_t_u_u((*l_108), ((**l_109) , (((safe_lshift_func_uint8_t_u_u(((247UL | (p_66 & ((((&g_43 != ((safe_mod_func_int16_t_s_s(((*l_137) = ((*l_135) = ((g_2 , (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((safe_div_func_int32_t_s_s((**p_63), l_124)) , (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((*l_133) = ((((safe_sub_func_int16_t_s_s(p_66, p_66)) > g_81) >= p_66) , 0xC97CL)), 3)), l_124)), (**l_109)))), g_2)), p_66))) != (**p_63)))), 0x654CL)) , (void*)0)) | (*l_108)) && 0L) >= p_66))) < 65528UL), g_81)) | l_124) & 0xCD927889L)))))
                {
                    (*p_63) = (*g_42);
                }
                else
                {
                    (*g_42) = l_92;
                    for (l_107 = 0; (l_107 != (-23)); l_107--)
                    {
                        int ***l_141 = (void*)0;
                        int ***l_142 = &l_109;
                        g_81 = (((((void*)0 == (*g_42)) , &l_109) == ((**p_63) , &p_63)) > (((*l_142) = &l_108) != (l_143 = &l_108)));
                        (**l_142) = (*g_42);
                        return &g_43;
                    }
                }
                for (g_136 = 0; (g_136 >= (-2)); --g_136)
                {
                    short *l_157 = &g_138;
                    int l_179 = 0x532EA630L;
                    int *l_185 = &l_107;
                    int *l_186 = &l_124;
                    for (g_81 = 0; (g_81 == (-4)); g_81 = safe_sub_func_int32_t_s_s(g_81, 1))
                    {
                        char l_148 = (-8L);
                        unsigned short *l_151 = &l_76;
                        int *l_152 = &l_86;
                        unsigned char *l_165 = (void*)0;
                        unsigned char *l_166 = (void*)0;
                        unsigned char *l_167 = &g_168;
                        (*l_152) = ((l_148 <= (((*l_108) & ((safe_mul_func_int8_t_s_s(g_81, 0xE9L)) < 0x38L)) | (((p_66 <= g_2) < ((*l_151) = (p_66 != ((**l_143) , p_66)))) <= g_81))) == g_136);
                        l_86 = (safe_div_func_uint8_t_u_u(((*l_167) = (p_66 , ((~g_2) & ((safe_mod_func_uint8_t_u_u((l_157 == l_137), 0x46L)) == (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_124, ((*l_157) = (((*l_151) |= l_162) > (safe_lshift_func_uint16_t_u_s((&g_138 != l_157), 9)))))), 0x642EL)))))), g_2));
                        (*p_63) = (*p_63);
                    }
                    for (l_86 = (-3); (l_86 >= (-3)); l_86 = safe_add_func_uint8_t_u_u(l_86, 4))
                    {
                        unsigned short *l_180 = &l_76;
                        (*g_42) = (*g_42);
                        g_184 ^= (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((!(**l_143)) , ((*l_180) ^= l_179)), ((*l_157) = p_66))), (safe_add_func_uint8_t_u_u(((void*)0 != l_183), g_2)))), 3)) != 0L), p_66));
                        if ((*g_43))
                            continue;
                    }
                    (**l_143) = (((*l_186) = ((*l_185) &= ((*l_108) , p_66))) , (**g_42));
                }
                if ((*l_92))
                    break;
            }
            return &g_43;
        }
        for (l_86 = 0; (l_86 >= 11); ++l_86)
        {
            unsigned char l_189 = 1UL;
            int l_190 = 0x53D49EA8L;
            unsigned short *l_193 = &l_76;
            unsigned short **l_192 = &l_193;
            unsigned short ***l_191 = &l_192;
            int *l_204 = &l_190;
            l_190 = (l_189 &= ((**l_109) = (**g_42)));
            (*l_191) = (void*)0;
            (*l_204) ^= ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((g_198 ^= (~(g_136 < (*l_108)))), ((safe_mul_func_uint16_t_u_u(g_81, g_136)) , (+((g_134 , p_66) , (0xA49DL >= (g_184 | (((***l_201) &= (l_201 != &l_202)) >= g_136)))))))), 0x5FFEL)) && (-1L));
            (*p_63) = ((l_205 , ((*l_108) ^ ((((((g_208 != l_211) < ((*l_204) <= (g_212 ^= ((**l_143) & ((0x434CL != (g_184 < p_66)) , (*g_43)))))) , &p_63) == &g_42) <= (*l_108)) > p_66))) , (*p_63));
        }
    }
    (*l_108) = ((*l_108) & g_198);
    return &g_43;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
