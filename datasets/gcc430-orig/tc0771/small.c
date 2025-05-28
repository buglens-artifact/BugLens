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


struct S0 {
   int f0;
   int f1;
   unsigned f2;
   char f3;
   unsigned f4;
   int f5;
   char f6;
   unsigned f7;
};


static int g_3 = 0xFF55E00FL;
static int *g_2 = &g_3;
static struct S0 g_13 = {8L,0L,0x3B8A277EL,2L,0x4DDE9AB5L,0x29478C9DL,0xFBL,0x5849968CL};
static unsigned g_45 = 7UL;
static short g_59 = 0x74D2L;
static short g_71 = 0x5BD6L;
static char *g_82 = &g_13.f3;
static int g_85 = 7L;
static int *g_84 = &g_85;
static unsigned short g_104 = 0x7C38L;
static int g_125 = (-6L);
static int g_138 = 8L;
static short g_139 = 0x921BL;
static unsigned char g_141 = 0x42L;
static unsigned g_174 = 0xBEB14036L;
static char g_209 = 0L;
static unsigned g_279 = 4294967288UL;
static char g_328 = 0L;
static unsigned short g_396 = 0x3674L;
static unsigned short g_450 = 0x701CL;
static short g_498 = 0x8EABL;
static unsigned g_499 = 0x296E4B58L;
static struct S0 g_504 = {0L,0L,4294967295UL,-8L,0xAF3ED05CL,0x7DCBB15BL,0xCFL,2UL};
static struct S0 *g_503 = &g_504;
static int g_600 = 5L;
static unsigned char g_639 = 0x88L;
static int *g_645 = (void*)0;
static int **g_644 = &g_645;
static struct S0 **g_666 = &g_503;
static struct S0 ***g_665 = &g_666;
static unsigned char g_837 = 1UL;
static char g_865 = 9L;
static unsigned char g_913 = 1UL;
static unsigned g_927 = 0x6361E857L;
static unsigned short *g_935 = &g_396;
static unsigned short **g_934 = &g_935;
static char **g_955 = &g_82;
static char ***g_954 = &g_955;
static int g_1013 = (-10L);
static unsigned g_1014 = 4294967287UL;
static unsigned g_1115 = 0xE51AC7A9L;
static int g_1119 = 0x4D28A302L;
static unsigned g_1143 = 4294967293UL;
static unsigned g_1215 = 0UL;



static unsigned char func_1(void);
static unsigned func_14(char p_15);
static char func_16(int * p_17, int ** p_18, int ** p_19, int ** p_20, int p_21);
static int ** func_22(int * p_23, struct S0 * p_24, unsigned short p_25);
static int * func_26(char p_27);
static char func_36(unsigned short p_37, int p_38);
static short func_41(short p_42, struct S0 * p_43, struct S0 * p_44);
static struct S0 * func_47(unsigned p_48, int ** p_49, int * p_50);
static int ** func_51(char * p_52, unsigned char p_53, short p_54, char p_55);
static int * func_74(char * p_75);
static unsigned char func_1(void)
{
    int **l_4 = &g_2;
    struct S0 l_9 = {0xD1F2E966L,0x3E7ED6F1L,0x60EC01E6L,9L,0xBD3AEB59L,2L,0xF5L,0x8B060D2FL};
    struct S0 *l_10 = &l_9;
    int ***l_30 = &l_4;
    char *l_31 = &g_13.f3;
    int *l_643 = (void*)0;
    int **l_642 = &l_643;
    char l_1054 = 2L;
    int *l_1118 = &g_1119;
    unsigned *l_1128 = &g_504.f4;
    char l_1133 = (-1L);
    unsigned short ***l_1140 = &g_934;
    unsigned *l_1141 = &l_9.f4;
    unsigned *l_1142 = &g_1143;
    unsigned short *l_1146 = &g_104;
    char *l_1149 = &g_865;
    unsigned *l_1150 = &g_45;
    unsigned l_1169 = 4294967292UL;
    (*l_4) = g_2;
    (*l_1118) &= (&g_2 != ((safe_mod_func_uint32_t_u_u(((g_3 , (safe_div_func_int8_t_s_s(3L, (((*l_10) = l_9) , (safe_lshift_func_int16_t_s_s((g_13 , (0L ^ func_14(((func_16(&g_3, ((*l_30) = func_22(func_26(((*l_31) = (safe_sub_func_uint32_t_u_u((((*l_30) = &g_2) == &g_2), 0xE1C2A911L)))), g_503, g_138)), l_642, g_644, l_9.f0) | l_1054) ^ 0xC9L)))), g_865)))))) ^ g_45), g_138)) , (*l_30)));
    (*l_1118) = (*l_1118);
    if (((~(((safe_lshift_func_int16_t_s_s((((***g_665) , g_174) ^ (l_1133 >= (*l_1118))), (g_328 < ((*g_935)++)))) < func_14(((safe_add_func_uint16_t_u_u((!(safe_add_func_int16_t_s_s((((*l_1150) = func_14(((*l_1149) |= (((*l_1142) = ((*l_1141) = ((void*)0 != l_1140))) <= (safe_add_func_int16_t_s_s(0L, ((*l_1146)--))))))) , g_13.f0), (-1L)))), g_139)) || (*l_1118)))) < g_279)) & (*l_1118)))
    {
        unsigned l_1151 = 0x11061AC6L;
        int *l_1156 = &g_3;
        unsigned short *l_1165 = &g_104;
        short *l_1166 = &g_498;
        short *l_1167 = &g_139;
        unsigned char l_1168 = 255UL;
        struct S0 l_1184 = {-1L,0x2430E7B1L,1UL,0xCCL,4294967288UL,1L,0xE3L,4294967292UL};
        int ***l_1228 = (void*)0;
        int l_1232 = 8L;
        unsigned char l_1237 = 0xA7L;
        if ((((l_1169 , 0xF8L) & 1L) & (*l_1156)))
        {
            short l_1170 = 0xD358L;
            int l_1171 = 0x1FDF4661L;
            int **l_1181 = (void*)0;
            l_1171 = l_1170;
            (*l_1156) = (*l_1118);
            for (g_138 = 0; (g_138 > (-22)); --g_138)
            {
                unsigned char l_1178 = 0x31L;
                (*l_1156) |= (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_1178, 0x1C92L)) ^ (safe_div_func_int16_t_s_s((l_1178 , g_927), 0x4399L))), (**g_934)));
                (**g_666) = l_1184;
            }
        }
        else
        {
            int l_1189 = 0x0638939EL;
            unsigned short l_1190 = 0x926DL;
            for (l_1184.f4 = 25; (l_1184.f4 < 10); --l_1184.f4)
            {
                int *l_1191 = &g_1119;
                int *l_1192 = (void*)0;
                int *l_1193 = &g_85;
                int *l_1194 = &l_1189;
                int *l_1195 = &g_600;
                int *l_1196 = &g_3;
                int *l_1197 = &g_1119;
                int *l_1198 = &l_1189;
                int *l_1199 = &g_1119;
                int *l_1200 = &g_600;
                int *l_1201 = (void*)0;
                int *l_1202 = (void*)0;
                int *l_1203 = &g_85;
                int *l_1204 = &g_1119;
                int *l_1205 = (void*)0;
                int *l_1206 = &g_3;
                int *l_1207 = &g_3;
                int *l_1208 = &g_85;
                int *l_1209 = &g_85;
                int *l_1210 = &g_85;
                int *l_1211 = &g_1119;
                int *l_1212 = (void*)0;
                int *l_1213 = &g_600;
                int *l_1214 = (void*)0;
                int ****l_1229 = (void*)0;
                int ****l_1230 = &l_1228;
                char l_1231 = 0xA0L;
                (*g_644) = ((safe_div_func_int32_t_s_s(l_1189, l_1190)) , &g_1119);
                g_1215++;
                l_1232 &= (((safe_div_func_uint32_t_u_u((&g_644 != ((*l_1230) = ((safe_div_func_int8_t_s_s(((-2L) || 0UL), (((*l_1209) | ((*l_1166) = ((*l_1156) < func_14((*l_1193))))) , ((*l_1195) && (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s((**g_644), g_85)) <= g_913), (*g_82))))))) , l_1228))), 4294967289UL)) < 0x800FB706L) == l_1231);
                if ((*l_1156))
                    break;
            }
            for (g_85 = 2; (g_85 == 2); g_85 = safe_add_func_uint8_t_u_u(g_85, 5))
            {
                int l_1235 = 7L;
                l_1235 |= (((**g_955) = (**g_955)) <= 248UL);
                (*l_1156) &= (((**g_666) , (g_13.f1 >= ((*l_1118) |= 1L))) , (safe_unary_minus_func_uint16_t_u(0UL)));
                return g_13.f7;
            }
        }
        (*l_4) = ((((l_1237 , (!0x02C254C2L)) & ((*l_1141) = (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((**g_955) ^= (((safe_add_func_int16_t_s_s(((**g_934) || (((*l_1156) && (7L >= (((*l_1118) , (safe_lshift_func_uint16_t_u_u(((*l_1156) || (g_504.f4 | (g_3 <= (*l_1156)))), (**g_934)))) > g_504.f5))) , (*l_1156))), 0x257CL)) , (void*)0) == (void*)0)), 255UL)), (*l_1156))))) | 0L) , &g_600);
    }
    else
    {
        short l_1246 = (-1L);
        unsigned short l_1259 = 1UL;
        int l_1260 = 1L;
        l_1260 |= func_14((l_1246 ^ (((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((9UL & (safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u(g_13.f6, (-6L))), (**g_955)))) ^ 1UL) | (**g_955)), (**g_934))), l_1246)), 0xEAL)) != 0xB91F65AAL) != 0xFCL)));
    }
    return g_279;
}







static unsigned func_14(char p_15)
{
    struct S0 ***l_1057 = &g_666;
    int l_1058 = (-1L);
    unsigned char *l_1061 = &g_141;
    int l_1062 = 2L;
    int *l_1063 = &g_600;
    int *l_1064 = &g_85;
    int *l_1065 = &g_85;
    int *l_1066 = &g_3;
    int *l_1067 = &g_3;
    int *l_1068 = &g_3;
    int *l_1069 = &g_3;
    int *l_1070 = &g_85;
    int *l_1071 = &g_85;
    int *l_1072 = &g_3;
    int l_1073 = 0x5BE516D5L;
    int l_1074 = (-10L);
    int *l_1075 = &g_3;
    int *l_1076 = &l_1074;
    int *l_1077 = &l_1073;
    int *l_1078 = &g_3;
    int *l_1079 = &l_1073;
    int l_1080 = 0x4B582139L;
    int *l_1081 = (void*)0;
    int *l_1082 = (void*)0;
    int *l_1083 = &g_600;
    int *l_1084 = &l_1080;
    int *l_1085 = &l_1073;
    int l_1086 = 0x3C3B335FL;
    int *l_1087 = &l_1080;
    int *l_1088 = &l_1080;
    int *l_1089 = &l_1073;
    int *l_1090 = &l_1086;
    int l_1091 = 0x07314D96L;
    int *l_1092 = &l_1073;
    int *l_1093 = &g_600;
    int *l_1094 = &l_1080;
    int *l_1095 = &l_1080;
    int l_1096 = 8L;
    int *l_1097 = &l_1074;
    int *l_1098 = &g_600;
    int *l_1099 = (void*)0;
    int *l_1100 = &l_1080;
    int *l_1101 = &l_1058;
    int l_1102 = 0xF72B3073L;
    int *l_1103 = &l_1080;
    int *l_1104 = &l_1058;
    int *l_1105 = (void*)0;
    int *l_1106 = &l_1096;
    int *l_1107 = &l_1096;
    int *l_1108 = &l_1073;
    int *l_1109 = &l_1058;
    int *l_1110 = &l_1091;
    int l_1111 = 0x43E0619FL;
    int *l_1112 = &l_1111;
    int *l_1113 = (void*)0;
    int *l_1114 = &l_1073;
    (*l_1063) = (((safe_rshift_func_uint8_t_u_s(((l_1057 != (l_1058 , &g_666)) != (safe_add_func_uint32_t_u_u(((((&g_837 != l_1061) ^ l_1058) & p_15) & g_600), g_639))), l_1062)) <= l_1058) && p_15);
    (*l_1063) = p_15;
    g_1115--;
    return g_139;
}







static char func_16(int * p_17, int ** p_18, int ** p_19, int ** p_20, int p_21)
{
    char l_652 = 8L;
    int l_653 = 0x9A2554C3L;
    char *l_658 = &g_209;
    short l_659 = 0x4DB6L;
    struct S0 l_684 = {-1L,0L,4294967290UL,2L,0UL,0x81AD9B4CL,0x71L,0xD7219D6AL};
    struct S0 **l_698 = (void*)0;
    unsigned short l_717 = 0xE297L;
    int l_721 = 0x539F2297L;
    struct S0 ***l_742 = (void*)0;
    char l_795 = 1L;
    unsigned short l_921 = 0x0FEEL;
    struct S0 ****l_923 = &l_742;
    struct S0 *****l_922 = &l_923;
    int **l_924 = (void*)0;
    unsigned short *l_943 = &g_104;
    int *l_967 = (void*)0;
    unsigned short l_1046 = 0xB22EL;
    l_653 = (safe_sub_func_int16_t_s_s(((*g_84) != (safe_rshift_func_int8_t_s_u(0xD8L, p_21))), (safe_rshift_func_int8_t_s_s(l_652, 7))));
    l_659 &= ((*p_17) ^= (0xA20A6329L != ((safe_rshift_func_int16_t_s_u(((l_653 = ((safe_sub_func_int16_t_s_s((p_21 ^ (p_21 || l_652)), 0x5A77L)) || ((&l_652 == (l_658 = &l_652)) == (7L != l_653)))) | 0x92L), g_504.f7)) >= 0xDC39L)));
    (*g_84) = (*p_17);
    if (l_653)
    {
        int l_673 = 0xA0305431L;
        short *l_694 = &g_71;
        int l_697 = (-7L);
        char *l_700 = (void*)0;
        unsigned char *l_729 = &g_141;
        struct S0 ***l_739 = &g_666;
        struct S0 ****l_740 = &l_739;
        struct S0 ***l_741 = &l_698;
        unsigned char l_747 = 0x3FL;
        int **l_853 = &g_84;
        char **l_919 = &g_82;
        char ***l_918 = &l_919;
        unsigned short *l_933 = &g_450;
        unsigned short **l_932 = &l_933;
        for (g_450 = 0; (g_450 < 45); g_450++)
        {
            unsigned l_679 = 1UL;
            int l_687 = 0x133A3F08L;
            if ((*p_17))
            {
                int l_662 = 0x7B9C45E8L;
                struct S0 *l_667 = &g_504;
                if (((l_662 || g_138) , (((void*)0 != g_665) || (l_667 != l_667))))
                {
                    return p_21;
                }
                else
                {
                    unsigned l_672 = 4294967295UL;
                    int l_674 = 0L;
                    if (((g_279 | (~g_504.f6)) , (((*g_84) = (*p_17)) ^ g_600)))
                    {
                        if ((*g_84))
                            break;
                        l_674 &= (l_662 , ((*p_17) &= ((*g_82) , ((((l_653 |= ((safe_mod_func_uint16_t_u_u(p_21, g_396)) <= 0xAEB0L)) , (p_21 | (((*g_82) , (((g_174 && (((safe_div_func_int16_t_s_s((-10L), g_13.f0)) && g_71) & l_672)) , l_652) , l_662)) & 0xE5L))) || l_672) , l_673))));
                    }
                    else
                    {
                        (*g_666) = l_667;
                        (*p_17) = l_673;
                        if (l_672)
                            continue;
                        if (l_652)
                            continue;
                    }
                    return (*g_82);
                }
            }
            else
            {
                unsigned short *l_677 = &g_396;
                unsigned *l_678 = &g_504.f4;
                unsigned char *l_685 = &g_141;
                unsigned l_686 = 0xEF419F01L;
                struct S0 l_695 = {-9L,0xF71C15AAL,9UL,0L,5UL,0xFACCE92AL,-1L,0x0CDF3E97L};
                unsigned short **l_696 = &l_677;
                struct S0 **l_699 = &g_503;
                l_687 ^= (((safe_rshift_func_int8_t_s_u(l_652, 7)) & ((*l_677) &= 0x9301L)) , (((*l_678) |= 4294967286UL) , ((l_679 && ((*l_658) |= l_673)) >= ((p_21 && ((safe_mod_func_uint8_t_u_u((l_653 != (safe_mod_func_int8_t_s_s((~l_653), ((*l_685) = (l_684 , p_21))))), l_686)) | l_686)) , p_21))));
                (*p_20) = (*p_19);
                (*g_84) ^= (((safe_div_func_uint8_t_u_u((l_673 <= (g_13.f2 , 0UL)), (((void*)0 != (*g_644)) & (safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((((l_697 &= ((((*l_694) = ((void*)0 == l_694)) , (void*)0) == (((((*l_696) = (l_695 , &g_104)) != &g_396) == 253UL) , (void*)0))) , l_698) != l_699), 0x8367L)), g_85))))) , &g_328) == l_700);
                if ((*g_84))
                {
                    (***g_665) = (*g_503);
                    l_653 = (safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s(l_684.f7, g_504.f7)), 6));
                }
                else
                {
                    (*g_84) = (*p_17);
                    if ((((*l_677) |= 0x6F84L) | p_21))
                    {
                        (*p_19) = (*p_19);
                        return l_673;
                    }
                    else
                    {
                        if ((*p_17))
                            break;
                    }
                }
            }
            (*p_19) = ((*p_20) = (*p_20));
        }
        for (g_13.f5 = 0; (g_13.f5 != (-2)); g_13.f5 = safe_sub_func_uint16_t_u_u(g_13.f5, 1))
        {
            unsigned short l_710 = 0xAA44L;
            int l_715 = 1L;
            unsigned short *l_718 = &g_450;
            int *l_722 = (void*)0;
            int *l_723 = &g_85;
            (*p_17) = (l_697 == ((0x91L <= (((l_653 = ((safe_unary_minus_func_uint16_t_u(((((safe_sub_func_int8_t_s_s(l_710, ((*g_82) & ((((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((l_715 | g_141) , (1L > ((safe_unary_minus_func_int8_t_s((!(((*l_718) ^= l_717) >= ((safe_sub_func_uint8_t_u_u(((*g_644) != (*g_644)), l_684.f4)) , 6UL))))) || l_721))), l_697)), 0x69DFL)) && l_684.f7) | (*g_84)) == g_71)))) & 0L) , 3L) ^ l_710))) > 0x81L)) , p_17) == (void*)0)) , p_21));
            (*l_723) ^= (*p_17);
        }
        (*p_20) = (*g_644);
        if ((safe_unary_minus_func_uint16_t_u((safe_div_func_uint32_t_u_u((l_653 = (((+(((l_684.f0 | (safe_rshift_func_uint8_t_u_s((--(*l_729)), 5))) && (((*l_694) = (safe_lshift_func_int16_t_s_s(p_21, ((safe_lshift_func_int16_t_s_s(g_504.f5, 8)) ^ g_504.f5)))) > (safe_unary_minus_func_int8_t_s(((~(safe_rshift_func_uint16_t_u_u((((*l_740) = l_739) != (l_742 = l_741)), p_21))) != (p_21 , 0UL)))))) > (*g_84))) & p_21) != (*g_82))), g_498)))))
        {
            int *l_748 = &g_600;
            char *l_756 = &g_13.f3;
            unsigned short *l_760 = &l_717;
            struct S0 *l_762 = &g_504;
            struct S0 ***l_787 = &g_666;
            int l_813 = 0xAD7B503AL;
            int l_816 = (-1L);
            (*l_748) ^= ((*p_17) = l_747);
            if ((((**g_666) , (~((&p_17 != (void*)0) , (l_697 || (*l_748))))) | (l_748 == (l_717 , ((*g_644) = &l_653)))))
            {
                short l_753 = 0xB141L;
                char **l_757 = &g_82;
                unsigned short **l_761 = &l_760;
                int l_771 = (-1L);
                struct S0 ****l_791 = &l_741;
                int l_799 = 0L;
                int l_811 = 0L;
                struct S0 *l_844 = &g_504;
                if ((safe_lshift_func_int8_t_s_u((p_21 , l_673), 2)))
                {
                    int l_772 = 0x5AB6E7A9L;
                    int l_773 = 0xD8DF74B6L;
                    int *l_797 = &l_772;
                    int *l_798 = &l_773;
                    int *l_800 = (void*)0;
                    int *l_801 = (void*)0;
                    int *l_802 = &g_85;
                    int *l_803 = &g_3;
                    int *l_804 = &l_773;
                    int *l_805 = &l_773;
                    int *l_806 = &g_85;
                    int *l_807 = &l_773;
                    int *l_808 = &l_773;
                    int *l_809 = (void*)0;
                    int *l_810 = (void*)0;
                    int *l_812 = &g_600;
                    int *l_814 = &l_813;
                    int *l_815 = &g_85;
                    int *l_817 = &l_653;
                    int *l_818 = (void*)0;
                    int *l_819 = &l_772;
                    int *l_820 = &l_697;
                    int *l_821 = &l_811;
                    int *l_822 = (void*)0;
                    int *l_823 = &l_813;
                    int *l_824 = &l_772;
                    int *l_825 = &g_600;
                    int *l_826 = &l_813;
                    int *l_827 = &l_653;
                    int *l_828 = &g_3;
                    int *l_829 = (void*)0;
                    int *l_830 = &l_799;
                    int *l_831 = &l_773;
                    int *l_832 = &l_697;
                    int *l_833 = &g_600;
                    int *l_834 = &l_653;
                    int *l_835 = &l_799;
                    int *l_836 = &l_816;
                    (*g_644) = &l_653;
                    (*l_748) ^= 0L;
                    if (((p_21 , (p_21 <= ((l_772 = ((((*l_760) = ((***g_665) , g_504.f3)) > ((safe_rshift_func_uint16_t_u_u((&g_139 != &l_753), 13)) & (p_21 != (((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((*l_748) = (&p_17 != (void*)0)) , 255UL), 1L)) | l_771), 0xD8L)) , 0x12A7L), 0)) | 7UL) & 0xAFF69778L)))) == 4294967292UL)) == l_773))) && l_773))
                    {
                        unsigned *l_774 = (void*)0;
                        int l_775 = 0xAA5597FEL;
                        unsigned *l_776 = &l_684.f4;
                        struct S0 ****l_788 = &l_742;
                        (*p_20) = (*g_644);
                        (*g_84) ^= (g_450 < (((*l_788) = ((*l_740) = (l_787 = (void*)0))) == (void*)0));
                    }
                    else
                    {
                        unsigned l_789 = 7UL;
                        struct S0 ****l_790 = (void*)0;
                        struct S0 *****l_792 = &l_791;
                        unsigned short l_796 = 0x6414L;
                        l_796 = ((((((*l_694) = l_789) & (((l_790 != ((*l_792) = l_791)) , 0x0DL) , (l_684.f2 >= g_504.f1))) >= l_795) && g_504.f4) ^ p_21);
                    }
                    g_837++;
                }
                else
                {
                    for (l_684.f5 = (-29); (l_684.f5 <= (-24)); l_684.f5 = safe_add_func_uint32_t_u_u(l_684.f5, 8))
                    {
                        if ((**g_644))
                            break;
                        (**g_644) |= (*p_17);
                        return l_653;
                    }
                }
                l_653 &= l_771;
                (*g_645) = ((safe_add_func_int8_t_s_s(((((*g_82) || p_21) == (*l_748)) , ((+((p_21 ^ (p_21 || p_21)) | (*p_17))) | 0x4D55F47BL)), l_684.f2)) , 1L);
            }
            else
            {
                struct S0 l_849 = {0x79F11552L,0xF030ED60L,1UL,0xA1L,9UL,-1L,0x6DL,4294967295UL};
                unsigned l_873 = 4294967295UL;
                if (l_684.f6)
                {
                    unsigned short l_851 = 65530UL;
                    struct S0 *l_854 = &g_504;
                    char ***l_866 = (void*)0;
                    char **l_868 = &g_82;
                    char ***l_867 = &l_868;
                    struct S0 l_876 = {2L,1L,4294967295UL,0x98L,1UL,0x130AB181L,0x31L,0x63BD9299L};
                    (**g_644) = l_697;
                    for (g_279 = 0; (g_279 > 17); ++g_279)
                    {
                        char l_850 = 0xFCL;
                        int *l_852 = &l_684.f0;
                        (**l_853) ^= (safe_lshift_func_uint8_t_u_u(l_850, (*l_748)));
                        (**g_644) = ((safe_add_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((p_21 , ((*l_760) = (safe_mod_func_uint32_t_u_u((g_499 , g_125), (safe_rshift_func_uint16_t_u_u(((((((**p_20) & (l_849.f4 < ((*l_748) , p_21))) >= l_850) != (*g_645)) , (**l_853)) >= l_851), 13)))))), g_504.f7)), p_21)) , 0x032D59FEL), l_849.f1)) < (**g_644));
                        (*g_84) = (l_849 , g_865);
                    }
                    (*l_867) = &l_700;
                    (*p_17) ^= ((p_21 >= ((((*l_756) |= (*l_748)) ^ p_21) , 0xEF2374E3L)) , (**p_20));
                }
                else
                {
                    unsigned l_877 = 0x5CF99839L;
                    char *l_878 = &g_328;
                    struct S0 *l_882 = &l_684;
                    if ((((void*)0 != &g_59) != ((func_36(l_877, g_328) ^ p_21) & p_21)))
                    {
                        (**l_853) = ((&g_328 != l_878) ^ ((*l_729) = ((!(*g_84)) >= (g_13.f2 >= ((*l_760) = 0xA577L)))));
                    }
                    else
                    {
                        struct S0 *l_881 = &g_13;
                        int *l_883 = (void*)0;
                        l_882 = ((**l_787) = l_881);
                        (*l_853) = l_883;
                        return (*l_748);
                    }
                    (*l_853) = (*g_644);
                }
            }
            (*p_19) = (*l_853);
            return p_21;
        }
        else
        {
            char l_892 = 6L;
            int l_905 = (-4L);
            int l_920 = 3L;
            unsigned short ***l_936 = &g_934;
            struct S0 ****l_937 = &g_665;
            unsigned *l_940 = &g_504.f4;
            int *l_941 = (void*)0;
            int *l_942 = &g_85;
            for (l_747 = 0; (l_747 < 59); l_747 = safe_add_func_int16_t_s_s(l_747, 1))
            {
                (*g_644) = ((****l_740) , (*p_19));
                (*p_20) = (*g_644);
                return p_21;
            }
            for (g_59 = 9; (g_59 < (-19)); g_59--)
            {
                int l_925 = 0x4A55CB25L;
                (***g_665) = (*g_503);
                for (l_684.f6 = 24; (l_684.f6 > 5); l_684.f6 = safe_sub_func_uint16_t_u_u(l_684.f6, 5))
                {
                    int l_912 = 0x32E372CEL;
                    int *l_926 = &l_697;
                    (*p_20) = (*g_644);
                    for (g_504.f5 = 0; (g_504.f5 != 22); g_504.f5++)
                    {
                        int *l_893 = &g_600;
                        int *l_894 = &g_85;
                        int *l_895 = (void*)0;
                        int *l_896 = (void*)0;
                        int *l_897 = &l_697;
                        int *l_898 = (void*)0;
                        int *l_899 = &g_600;
                        int *l_900 = &g_85;
                        int *l_901 = &g_85;
                        int *l_902 = (void*)0;
                        int *l_903 = &g_3;
                        int *l_904 = (void*)0;
                        int *l_906 = &l_905;
                        int *l_907 = &l_697;
                        int *l_908 = &l_697;
                        int l_909 = 0L;
                        int *l_910 = &l_653;
                        int *l_911 = (void*)0;
                        --g_913;
                        l_653 = (**l_853);
                        l_921 = (((((func_36((safe_lshift_func_uint8_t_u_u((*l_897), ((*l_729) |= ((***g_665) , (l_918 != (void*)0))))), ((~(func_36(func_36(g_498, p_21), p_21) >= g_498)) , g_13.f6)) , 0UL) != l_920) <= g_138) == 8L) || p_21);
                    }
                    l_905 = (l_912 <= (((&l_740 == l_922) && (*g_84)) != (p_21 || (l_924 != (void*)0))));
                    g_927--;
                }
            }
            (*l_942) ^= ((*g_84) = (((*l_694) = (((safe_sub_func_uint32_t_u_u(func_36(g_504.f3, ((l_932 != ((*l_936) = g_934)) , ((void*)0 == l_937))), (safe_div_func_uint8_t_u_u(g_865, ((!p_21) | ((*l_940) &= p_21)))))) && p_21) < 255UL)) , (*p_17)));
            (*p_20) = (*g_644);
        }
    }
    else
    {
        unsigned short ***l_948 = &g_934;
        int l_960 = 0xA0F81DC8L;
        struct S0 *l_962 = &g_13;
        struct S0 *l_1020 = &g_504;
        char ***l_1021 = (void*)0;
        unsigned l_1051 = 0x6217F93BL;
        for (g_139 = 0; (g_139 >= 27); g_139++)
        {
            short l_963 = 0x6A04L;
            char l_964 = 0x7EL;
            struct S0 *l_1019 = &g_504;
            char ****l_1034 = (void*)0;
            int l_1047 = 0L;
            (*p_17) = 1L;
            for (g_125 = 0; (g_125 < 28); g_125++)
            {
                char **l_952 = &g_82;
                char ***l_951 = &l_952;
                char ****l_953 = &l_951;
                int l_956 = 0xBCB8E8BFL;
                unsigned *l_957 = &g_504.f4;
                short *l_961 = &g_498;
                l_964 |= (((**g_934) , ((l_948 == (void*)0) | func_36((((~p_21) ^ (l_963 && 0x10L)) | p_21), l_963))) , (*p_17));
                return (***g_954);
            }
            for (g_125 = (-5); (g_125 != (-26)); --g_125)
            {
                int *l_968 = &l_960;
                int *l_969 = &g_3;
                int *l_970 = &g_85;
                int *l_971 = &l_653;
                int *l_972 = &g_3;
                int *l_973 = &g_85;
                int *l_974 = &g_600;
                int *l_975 = &g_600;
                int *l_976 = &l_653;
                int *l_977 = &g_600;
                int *l_978 = &l_960;
                int *l_979 = &l_960;
                int *l_980 = &l_653;
                int *l_981 = &g_85;
                int *l_982 = &l_960;
                int *l_983 = &l_653;
                int *l_984 = &l_653;
                int *l_985 = &g_85;
                int *l_986 = &g_3;
                int *l_987 = &l_960;
                int *l_988 = (void*)0;
                int *l_989 = (void*)0;
                int *l_990 = &g_600;
                int *l_991 = &l_653;
                int *l_992 = &g_85;
                int *l_993 = &l_960;
                int *l_994 = &g_85;
                int *l_995 = (void*)0;
                int *l_996 = &g_600;
                int *l_997 = &l_653;
                int *l_998 = &l_653;
                int *l_999 = (void*)0;
                int *l_1000 = (void*)0;
                int *l_1001 = &g_3;
                int *l_1002 = &g_3;
                int *l_1003 = (void*)0;
                int *l_1004 = &l_653;
                int *l_1005 = &l_960;
                int *l_1006 = &g_3;
                int *l_1007 = &g_600;
                int *l_1008 = &g_3;
                int *l_1009 = &l_653;
                int *l_1010 = &l_653;
                int *l_1011 = &g_3;
                int *l_1012 = &g_3;
                unsigned short l_1048 = 65535UL;
                (*p_19) = l_967;
                g_1014++;
                if ((((safe_lshift_func_int16_t_s_u(p_21, (((g_504.f6 || (p_21 , ((0x61A30D01L ^ ((l_963 , (*g_666)) != (*g_666))) , 0UL))) || l_960) < (*l_976)))) , (void*)0) != l_1021))
                {
                    int l_1033 = 0x3195B48AL;
                    unsigned l_1037 = 4294967289UL;
                    for (l_684.f4 = 0; (l_684.f4 >= 54); l_684.f4 = safe_add_func_uint16_t_u_u(l_684.f4, 3))
                    {
                        unsigned short l_1024 = 0xA324L;
                        unsigned *l_1035 = (void*)0;
                        unsigned *l_1036 = &g_504.f4;
                        if (l_1024)
                            break;
                        (*l_980) ^= (((g_279 , (((*l_1036) = ((safe_add_func_uint8_t_u_u((g_639 = (safe_rshift_func_uint8_t_u_s(((+0x61L) , 0x73L), (((safe_mod_func_int8_t_s_s((((((0x74L != (safe_div_func_int32_t_s_s(((*l_977) &= (p_21 , l_1033)), l_1033))) | 4294967295UL) ^ (~(*p_17))) , l_1034) == &l_1021), g_13.f1)) , (*p_17)) >= 0xFFCD64DFL)))), (**g_955))) == 0x38L)) , (-7L))) != 0x36L) | l_1037);
                        (*g_644) = ((p_21 & p_21) , (*g_644));
                        (*g_644) = ((*p_18) = (void*)0);
                    }
                    (*l_997) |= ((*l_970) >= (func_36(((safe_mod_func_int8_t_s_s(func_36(((l_1037 || ((safe_add_func_uint32_t_u_u(((-1L) <= (((+(~(((safe_add_func_uint16_t_u_u((*g_935), func_36((p_21 , (((safe_rshift_func_int8_t_s_s((g_639 , (l_1037 , (**g_955))), 2)) & l_1033) | (***g_954))), l_1037))) || (**g_934)) , p_21))) && g_1014) <= g_504.f3)), 0x134C94AEL)) ^ g_139)) , p_21), g_865), l_1046)) | g_141), l_960) || g_13.f6));
                    l_1048--;
                    if (l_963)
                        break;
                }
                else
                {
                    (*g_644) = ((*p_18) = (*g_644));
                    l_1051--;
                }
            }
        }
        (*g_503) = (*g_503);
        (*g_84) = l_1051;
    }
    return p_21;
}







static int ** func_22(int * p_23, struct S0 * p_24, unsigned short p_25)
{
    struct S0 l_505 = {0x2E813BFAL,0x5B2BAB85L,0x483AFEF4L,7L,0UL,0xCAB300E6L,0L,4294967295UL};
    int *l_506 = &g_85;
    int *l_507 = &g_85;
    int *l_508 = &g_85;
    int *l_509 = &g_85;
    int *l_510 = (void*)0;
    int l_511 = 1L;
    int *l_512 = &g_85;
    int *l_513 = &g_85;
    int *l_514 = &g_85;
    int *l_515 = &g_85;
    int *l_516 = &g_85;
    int *l_517 = &g_3;
    int *l_518 = &g_85;
    int l_519 = 4L;
    int *l_520 = &g_3;
    int *l_521 = &g_3;
    int *l_522 = &g_3;
    int l_523 = (-2L);
    int *l_524 = &l_519;
    int l_525 = 0x45AF6CC3L;
    int *l_526 = &g_85;
    int *l_527 = &l_519;
    int *l_528 = &l_519;
    int *l_529 = &g_3;
    int *l_530 = &g_3;
    int *l_531 = &g_3;
    int *l_532 = &l_511;
    int *l_533 = (void*)0;
    int *l_534 = &l_525;
    int *l_535 = &l_519;
    int *l_536 = &l_519;
    int *l_537 = &l_525;
    int *l_538 = &g_85;
    int *l_539 = &l_511;
    int *l_540 = &g_3;
    int *l_541 = (void*)0;
    int *l_542 = &l_523;
    int *l_543 = (void*)0;
    int *l_544 = &l_523;
    int *l_545 = &g_3;
    int *l_546 = &g_3;
    int *l_547 = &g_85;
    int *l_548 = &l_511;
    int *l_549 = &g_3;
    int *l_550 = &l_519;
    int *l_551 = (void*)0;
    int l_552 = 0xD5A1B0B8L;
    int *l_553 = &l_519;
    int *l_554 = &l_519;
    int *l_555 = (void*)0;
    int *l_556 = (void*)0;
    int *l_557 = &g_3;
    int *l_558 = &g_3;
    int *l_559 = &g_85;
    int *l_560 = &l_552;
    int *l_561 = &l_511;
    int l_562 = 0xAF7F2659L;
    int *l_563 = &l_552;
    int *l_564 = &l_511;
    int *l_565 = &l_523;
    int *l_566 = &g_3;
    int *l_567 = (void*)0;
    int *l_568 = &l_511;
    int *l_569 = &l_511;
    int *l_570 = (void*)0;
    int *l_571 = &l_562;
    int *l_572 = (void*)0;
    int *l_573 = &l_519;
    int *l_574 = &l_552;
    int *l_575 = &g_85;
    int *l_576 = &g_3;
    int *l_577 = &l_562;
    int *l_578 = &l_519;
    int *l_579 = &l_562;
    int *l_580 = (void*)0;
    int *l_581 = (void*)0;
    int *l_582 = &l_523;
    int *l_583 = &l_519;
    int *l_584 = &g_3;
    int *l_585 = &l_562;
    int *l_586 = &l_525;
    int *l_587 = &g_3;
    int *l_588 = &g_3;
    int *l_589 = &l_511;
    int *l_590 = &l_562;
    int l_591 = 0xEF9147D9L;
    int *l_592 = &l_523;
    int *l_593 = &g_3;
    int l_594 = (-8L);
    int *l_595 = (void*)0;
    int *l_596 = &g_85;
    int *l_597 = &g_85;
    int *l_598 = &l_562;
    int *l_599 = &l_525;
    int *l_601 = &l_562;
    int *l_602 = &l_552;
    int l_603 = (-5L);
    int *l_604 = &l_523;
    int *l_605 = &l_603;
    int *l_606 = &l_552;
    int l_607 = 0xAD93C50DL;
    int *l_608 = &l_519;
    int *l_609 = (void*)0;
    int *l_610 = &l_523;
    int *l_611 = &l_519;
    int *l_612 = &l_523;
    int *l_613 = &l_562;
    int l_614 = 0xC00561ADL;
    int *l_615 = &l_607;
    int *l_616 = &g_3;
    int *l_617 = (void*)0;
    int *l_618 = &l_552;
    int *l_619 = &l_511;
    int *l_620 = &l_552;
    int *l_621 = &l_552;
    int *l_622 = (void*)0;
    int *l_623 = &l_523;
    int *l_624 = &l_519;
    int *l_625 = &l_525;
    int l_626 = 0x67B34B95L;
    int l_627 = 3L;
    int *l_628 = (void*)0;
    int *l_629 = (void*)0;
    int *l_630 = &g_85;
    int *l_631 = &l_523;
    int *l_632 = &l_627;
    int *l_633 = &g_85;
    int l_634 = 0x5CBEB7BCL;
    int *l_635 = &l_591;
    int *l_636 = &l_511;
    int *l_637 = &l_634;
    int l_638 = 0xA4176070L;
    l_505 = ((*g_503) = l_505);
    g_639--;
    return &g_2;
}







static int * func_26(char p_27)
{
    unsigned l_32 = 1UL;
    char *l_35 = &g_13.f6;
    struct S0 *l_46 = &g_13;
    short *l_58 = &g_59;
    short *l_70 = &g_71;
    int *l_294 = &g_85;
    int l_345 = 0xA487DCECL;
    int l_365 = 0xE4AA4CFAL;
    unsigned *l_405 = &g_13.f4;
    int l_422 = 0xDB9B6FBBL;
    int l_427 = 0x7329BCD8L;
    int l_430 = 0xA5D3EA81L;
    int l_444 = 0xC6FCBD07L;
    ++l_32;
    (*l_294) = (((*l_35) &= 1L) , (func_36(((safe_mod_func_int8_t_s_s((func_41(g_45, (l_46 = l_46), func_47(l_32, func_51(l_35, (safe_lshift_func_int16_t_s_s((((*l_58) = 2L) == (safe_sub_func_int32_t_s_s(((((*l_35) = 0xA3L) < (safe_lshift_func_int16_t_s_u(((*l_70) = ((g_13.f4 || (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(0xC1B0L, 5L)) , 1L) > l_32), 1UL)), 9))) ^ 0x60L)), l_32))) && 0xCBL), l_32))), g_13.f5)), l_32, p_27), g_84)) & 0x480AL), p_27)) <= g_139), g_125) <= g_139));
    for (g_209 = (-29); (g_209 > 4); g_209++)
    {
        unsigned l_300 = 0x908B59E8L;
        int l_316 = (-6L);
        int l_318 = 0x2FE4D6D4L;
        int l_326 = 0x360A1AB0L;
        int l_357 = 0xA7749F34L;
        int l_382 = 0xA4CD6723L;
    }
    if ((((((safe_sub_func_uint32_t_u_u(p_27, ((*l_405) = (((((*l_70) |= 0xF70EL) , 2L) == p_27) , (safe_rshift_func_uint16_t_u_u(((*g_82) == ((g_13 , (+(p_27 | (g_59 , g_209)))) && p_27)), 1)))))) > 3L) | p_27) , (*g_84)) , p_27))
    {
        int *l_406 = &g_85;
        int *l_407 = &g_3;
        int *l_408 = &g_85;
        int *l_409 = &g_85;
        int *l_410 = &l_365;
        int *l_411 = &l_345;
        int *l_412 = &g_3;
        int *l_413 = (void*)0;
        int *l_414 = (void*)0;
        int *l_415 = &l_365;
        int *l_416 = &l_365;
        int *l_417 = &l_345;
        int *l_418 = &g_3;
        int *l_419 = &g_3;
        int l_420 = 0xDA9BA8A5L;
        int *l_421 = &l_420;
        int *l_423 = &g_3;
        int *l_424 = &g_3;
        int *l_425 = &l_345;
        int *l_426 = &l_420;
        int l_428 = 0xD74E9707L;
        int *l_429 = &l_422;
        int *l_431 = &l_420;
        int *l_432 = &l_427;
        int *l_433 = &l_345;
        int *l_434 = &l_345;
        int *l_435 = (void*)0;
        int *l_436 = (void*)0;
        int *l_437 = &g_3;
        int *l_438 = &l_428;
        int *l_439 = &l_345;
        int *l_440 = &l_428;
        int *l_441 = &g_3;
        int *l_442 = &l_365;
        int *l_443 = &g_3;
        int *l_445 = &l_420;
        int *l_446 = &l_365;
        int l_447 = 0xE664CF5EL;
        int l_448 = 0x27AC2C4EL;
        int *l_449 = &l_422;
        struct S0 *l_456 = &g_13;
        g_450--;
        (*l_438) ^= p_27;
    }
    else
    {
        int l_485 = 0xCABB0AE2L;
        struct S0 l_502 = {0x49FFE04CL,0x8D013F6FL,4294967295UL,0L,0UL,-6L,0L,4294967295UL};
        for (l_32 = (-24); (l_32 >= 6); l_32 = safe_add_func_uint16_t_u_u(l_32, 4))
        {
            l_46 = l_46;
            if (p_27)
                break;
        }
        for (g_328 = 0; (g_328 >= (-2)); g_328--)
        {
            char *l_465 = &g_209;
            int l_468 = 0x68094330L;
            unsigned short *l_469 = (void*)0;
            unsigned short *l_470 = &g_104;
            (*g_84) = (((p_27 | ((*l_465) |= ((((safe_lshift_func_uint8_t_u_u(func_36(g_13.f1, p_27), 4)) ^ ((g_141 = ((p_27 | p_27) , 0x24L)) < (safe_lshift_func_uint8_t_u_s(0x4FL, p_27)))) & g_138) , 0xDCL))) >= g_396) || p_27);
            if ((safe_sub_func_uint8_t_u_u(func_36(((*l_470)++), g_141), (*l_294))))
            {
                int *l_473 = &g_85;
                int *l_474 = &l_345;
                int *l_475 = &l_345;
                int *l_476 = &l_422;
                int *l_477 = &l_468;
                int *l_478 = &l_427;
                int *l_479 = (void*)0;
                int *l_480 = &l_422;
                int *l_481 = &l_345;
                int *l_482 = &l_365;
                int *l_483 = (void*)0;
                int *l_484 = &g_85;
                int *l_486 = (void*)0;
                int *l_487 = &l_427;
                int *l_488 = &g_3;
                int *l_489 = (void*)0;
                int *l_490 = (void*)0;
                int *l_491 = &l_430;
                int l_492 = 0x18FD8965L;
                int *l_493 = (void*)0;
                int *l_494 = &l_492;
                int *l_495 = (void*)0;
                int *l_496 = &g_3;
                int *l_497 = &l_492;
                ++g_499;
                (*l_46) = l_502;
            }
            else
            {
                (*l_294) ^= 0x8059803EL;
            }
            return &g_85;
        }
    }
    return &g_3;
}







static char func_36(unsigned short p_37, int p_38)
{
    int l_242 = 0x75635FBBL;
    int l_255 = 2L;
    int l_270 = 0L;
    char *l_282 = &g_13.f3;
    struct S0 *l_288 = &g_13;
    if ((*g_84))
    {
        unsigned l_227 = 4294967295UL;
        int l_229 = 0xEEFC36F8L;
        int l_230 = 0x950BD7AEL;
        int *l_231 = &g_3;
        int *l_232 = &g_3;
        int *l_233 = &g_3;
        int l_234 = 9L;
        int *l_235 = &l_234;
        int *l_236 = &l_234;
        int *l_237 = &g_85;
        int *l_238 = &g_85;
        int *l_239 = (void*)0;
        int *l_240 = (void*)0;
        int *l_241 = &l_234;
        int *l_243 = &g_3;
        int *l_244 = &g_85;
        int *l_245 = (void*)0;
        int *l_246 = &g_3;
        int *l_247 = (void*)0;
        int *l_248 = (void*)0;
        int *l_249 = &l_242;
        int *l_250 = &l_242;
        int *l_251 = &g_85;
        int *l_252 = &g_3;
        int *l_253 = (void*)0;
        int *l_254 = (void*)0;
        int *l_256 = (void*)0;
        int *l_257 = &l_255;
        int *l_258 = &g_85;
        int l_259 = 1L;
        int *l_260 = &l_229;
        int *l_261 = &l_255;
        int *l_262 = &l_242;
        int *l_263 = &g_85;
        int l_264 = (-10L);
        int *l_265 = &l_229;
        int *l_266 = &l_259;
        int *l_267 = (void*)0;
        int *l_268 = &l_264;
        int *l_269 = &l_234;
        int *l_271 = (void*)0;
        int *l_272 = &g_85;
        int l_273 = 0x0454707DL;
        int *l_274 = &l_259;
        int l_275 = 0x9734017EL;
        int *l_276 = &l_255;
        int *l_277 = &l_234;
        int *l_278 = &l_234;
        struct S0 *l_287 = &g_13;
        unsigned l_289 = 0x32A555F8L;
        int l_290 = 8L;
        unsigned *l_291 = &l_227;
        short l_292 = 0x84C0L;
        if (((*g_84) |= p_37))
        {
            struct S0 *l_225 = &g_13;
            struct S0 **l_226 = &l_225;
            (*l_226) = l_225;
            if (p_37)
                goto lbl_228;
            return l_227;
        }
        else
        {
lbl_228:
            (*g_84) &= 1L;
            --g_279;
            (*l_235) &= (g_71 || (((*l_268) = p_38) >= ((*l_291) = l_290)));
            return l_292;
        }
    }
    else
    {
        struct S0 **l_293 = &l_288;
        (*l_288) = (*l_288);
        (*l_293) = l_288;
    }
    return l_270;
}







static short func_41(short p_42, struct S0 * p_43, struct S0 * p_44)
{
    unsigned l_90 = 4294967289UL;
    unsigned l_93 = 0x7E9BB10DL;
    short l_94 = (-3L);
    int **l_95 = &g_2;
    int **l_96 = &g_84;
    unsigned l_101 = 4294967295UL;
    unsigned short *l_102 = (void*)0;
    unsigned short *l_103 = &g_104;
    int l_105 = 1L;
    short *l_110 = &l_94;
    unsigned short *l_117 = &g_104;
    (*g_2) = ((0xCFL <= (l_90 , ((safe_rshift_func_int8_t_s_u(l_93, 1)) && (*g_82)))) , l_94);
    (*l_96) = ((*l_95) = &g_3);
    (**l_95) |= ((g_13.f7 <= (safe_sub_func_int16_t_s_s((0x32C2F6A7L | g_13.f1), ((*l_103) = (safe_sub_func_int16_t_s_s(l_101, (-1L))))))) & p_42);
    if ((((l_105 |= (**l_96)) || ((**l_95) && (((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_42, ((*l_110) = 0x14B9L))) ^ (safe_rshift_func_int16_t_s_u((0xA2L >= ((**l_95) |= p_42)), ((((safe_div_func_int16_t_s_s(p_42, (safe_mul_func_int16_t_s_s(g_13.f5, ((void*)0 != l_117))))) & p_42) , l_103) == (void*)0)))), p_42)) | p_42) ^ 65535UL))) || 0xC9606EF8L))
    {
        int l_118 = 0xEF93BB08L;
        int l_128 = 0xED801979L;
        if ((l_118 && l_118))
        {
            return g_13.f6;
        }
        else
        {
            int *l_119 = &g_3;
            int *l_120 = (void*)0;
            int *l_121 = (void*)0;
            int *l_122 = &g_3;
            int *l_123 = &g_3;
            int *l_124 = (void*)0;
            int *l_126 = &g_85;
            int *l_127 = (void*)0;
            int *l_129 = (void*)0;
            int *l_130 = &l_128;
            int *l_131 = &l_105;
            int *l_132 = &g_85;
            int *l_133 = &l_128;
            int *l_134 = (void*)0;
            int *l_135 = &g_85;
            int *l_136 = &l_128;
            int *l_137 = &g_85;
            int *l_140 = &l_128;
            (*p_43) = g_13;
            g_141--;
        }
    }
    else
    {
        unsigned l_144 = 0UL;
        int *l_177 = &l_105;
        int l_184 = 0xF2CD8C26L;
        if ((l_144 , (((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((1UL <= ((void*)0 != &g_84)), 6)), ((**l_96) = (**l_96)))), p_42)) || ((((((*l_103) = (safe_sub_func_uint16_t_u_u(l_144, 0xC571L))) , 1UL) < g_125) , (**l_96)) , (*g_2))) != p_42)))
        {
            int *l_153 = (void*)0;
            int *l_154 = &g_3;
            int *l_155 = &g_85;
            int *l_156 = (void*)0;
            int *l_157 = &g_3;
            int *l_158 = &g_3;
            int *l_159 = &l_105;
            int *l_160 = (void*)0;
            int *l_161 = &l_105;
            int *l_162 = &l_105;
            int *l_163 = &g_85;
            int *l_164 = &l_105;
            int *l_165 = &l_105;
            int *l_166 = &l_105;
            int *l_167 = &l_105;
            int l_168 = 3L;
            int *l_169 = &l_168;
            int l_170 = 0L;
            int *l_171 = &l_168;
            int *l_172 = (void*)0;
            int *l_173 = (void*)0;
            --g_174;
            (*l_95) = l_177;
            (*l_96) = func_74(g_82);
            for (l_170 = 0; (l_170 < 22); l_170++)
            {
                int l_183 = 0x07B948F0L;
                unsigned l_188 = 4294967295UL;
                int l_199 = 0x610EE195L;
                if (p_42)
                {
                    int l_182 = 1L;
                    if (((safe_add_func_int8_t_s_s((+(l_183 = ((*g_82) &= l_182))), 0x08L)) , (*g_84)))
                    {
                        unsigned l_185 = 0UL;
                        --l_185;
                        (*l_163) = ((0xA7L <= 0x09L) <= l_183);
                        if (l_188)
                            continue;
                        (*l_167) = (safe_div_func_int16_t_s_s(g_45, (safe_lshift_func_uint16_t_u_s(((((((((*g_82) = ((1UL && l_182) ^ (p_42 , 0x010899EAL))) , p_42) | (p_42 , p_42)) == ((*g_84) & g_13.f2)) < (*l_177)) || l_185) & 2L), p_42))));
                    }
                    else
                    {
                        return g_139;
                    }
                }
                else
                {
                    struct S0 *l_194 = &g_13;
                    struct S0 **l_193 = &l_194;
                    struct S0 ***l_195 = (void*)0;
                    struct S0 ***l_196 = &l_193;
                    int l_219 = 0x1A5778D3L;
                    (*l_196) = l_193;
                    for (g_174 = 0; (g_174 >= 48); g_174 = safe_add_func_uint16_t_u_u(g_174, 4))
                    {
                        int *l_200 = &g_3;
                        int *l_201 = (void*)0;
                        int *l_202 = (void*)0;
                        int *l_203 = &l_184;
                        int *l_204 = &l_168;
                        int *l_205 = &g_3;
                        int *l_206 = (void*)0;
                        int *l_207 = &g_3;
                        int *l_208 = (void*)0;
                        int *l_210 = &g_85;
                        int *l_211 = &l_199;
                        int *l_212 = &g_85;
                        int *l_213 = &l_199;
                        int *l_214 = &g_85;
                        int *l_215 = (void*)0;
                        int *l_216 = &l_199;
                        int *l_217 = &g_3;
                        int *l_218 = &g_85;
                        int *l_220 = &g_3;
                        int *l_221 = &l_105;
                        unsigned l_222 = 0x4C82FA94L;
                        --l_222;
                        return g_45;
                    }
                    return p_42;
                }
                return g_141;
            }
        }
        else
        {
            return p_42;
        }
    }
    return g_13.f0;
}







static struct S0 * func_47(unsigned p_48, int ** p_49, int * p_50)
{
    unsigned char l_88 = 0x56L;
    short l_89 = 0xD985L;
    (*g_2) &= (safe_sub_func_int8_t_s_s(((*g_82) = l_88), l_88));
    (*p_50) |= l_89;
    return &g_13;
}







static int ** func_51(char * p_52, unsigned char p_53, short p_54, char p_55)
{
    int **l_83 = &g_2;
    for (g_13.f5 = 11; (g_13.f5 >= (-2)); g_13.f5 = safe_sub_func_uint32_t_u_u(g_13.f5, 8))
    {
        char *l_76 = &g_13.f6;
        int **l_81 = &g_2;
        (*l_81) = func_74(l_76);
        (*l_81) = func_74(g_82);
    }
    return l_83;
}







static int * func_74(char * p_75)
{
    int *l_79 = &g_3;
    for (g_13.f2 = 1; (g_13.f2 == 29); g_13.f2 = safe_add_func_uint16_t_u_u(g_13.f2, 9))
    {
        int **l_80 = &l_79;
        (*l_80) = l_79;
        (*g_2) ^= 0xD5AEC2C0L;
    }
    return l_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_13.f1, "g_13.f1", print_hash_value);
    transparent_crc(g_13.f2, "g_13.f2", print_hash_value);
    transparent_crc(g_13.f3, "g_13.f3", print_hash_value);
    transparent_crc(g_13.f4, "g_13.f4", print_hash_value);
    transparent_crc(g_13.f5, "g_13.f5", print_hash_value);
    transparent_crc(g_13.f6, "g_13.f6", print_hash_value);
    transparent_crc(g_13.f7, "g_13.f7", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_504.f0, "g_504.f0", print_hash_value);
    transparent_crc(g_504.f1, "g_504.f1", print_hash_value);
    transparent_crc(g_504.f2, "g_504.f2", print_hash_value);
    transparent_crc(g_504.f3, "g_504.f3", print_hash_value);
    transparent_crc(g_504.f4, "g_504.f4", print_hash_value);
    transparent_crc(g_504.f5, "g_504.f5", print_hash_value);
    transparent_crc(g_504.f6, "g_504.f6", print_hash_value);
    transparent_crc(g_504.f7, "g_504.f7", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_865, "g_865", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1115, "g_1115", print_hash_value);
    transparent_crc(g_1119, "g_1119", print_hash_value);
    transparent_crc(g_1143, "g_1143", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
