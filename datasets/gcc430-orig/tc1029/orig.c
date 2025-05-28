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



static int g_20 = 0xD6B65720L;
static int *g_19 = &g_20;
static int g_37 = 0xA6AED1D2L;
static int g_61 = 0x7EEDF667L;
static int *g_60 = &g_61;
static char g_67 = 0x68L;
static short g_76 = 0x6A86L;
static unsigned short g_106 = 1UL;
static unsigned short ***g_118 = (void*)0;
static unsigned char g_135 = 254UL;
static unsigned short *g_147 = &g_106;
static unsigned short **g_146 = &g_147;
static unsigned g_163 = 0xC7C06617L;
static unsigned char g_186 = 250UL;
static char **g_220 = (void*)0;
static int *g_224 = &g_61;
static unsigned char g_260 = 0x7DL;
static short *g_297 = &g_76;
static short **g_296 = &g_297;
static short g_339 = 1L;
static unsigned g_343 = 4294967295UL;
static int g_363 = (-10L);
static unsigned short g_432 = 0x22F3L;
static unsigned short *****g_592 = (void*)0;
static unsigned g_612 = 0x791EA16CL;
static short **g_780 = (void*)0;
static unsigned char *g_808 = &g_260;
static unsigned char **g_807 = &g_808;
static int g_818 = (-5L);
static char g_864 = 0x36L;
static unsigned g_907 = 4294967295UL;
static char ****g_1026 = (void*)0;
static int g_1036 = 0L;
static int g_1200 = (-7L);
static unsigned short g_1211 = 1UL;



static unsigned func_1(void);
static int * func_2(int p_3, int * p_4);
static unsigned func_5(unsigned p_6, short p_7, char p_8);
static char func_12(int * p_13, char p_14);
static int * func_15(unsigned p_16, int * p_17, int * p_18);
static int * func_25(int p_26, int * p_27, char p_28, unsigned p_29, int * p_30);
static unsigned func_34(int p_35);
static int func_38(int ** p_39, unsigned short p_40, char p_41, unsigned p_42, int p_43);
static int ** func_44(int p_45, int ** p_46, int p_47);
static int ** func_48(short p_49, int ** p_50, int ** p_51);
static unsigned func_1(void)
{
    unsigned short l_11 = 0xFBF2L;
    unsigned l_835 = 0x981D2018L;
    int l_836 = 0L;
    unsigned short l_837 = 0xF94CL;
    int *l_1155 = &g_363;
    int **l_1251 = &g_19;
    (*l_1251) = func_2((((func_5((safe_rshift_func_uint8_t_u_u(l_11, 2)), l_11, func_12(func_15(l_11, g_19, &g_20), (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_11, (l_836 = ((l_835 = l_11) , ((l_835 & 0x0FL) , l_835))))), l_837)))) >= l_11) >= l_837) | g_907), l_1155);

    ;
    ;
    ;

    return g_363;
}







static int * func_2(int p_3, int * p_4)
{
    unsigned char l_1161 = 0UL;
    int l_1162 = (-1L);
    int **l_1165 = &g_224;
    unsigned short l_1166 = 0x1A1EL;
    unsigned short ****l_1188 = &g_118;
    if ((*g_60))
    {
        int *l_1156 = &g_1036;
        int **l_1157 = &g_60;
        int *l_1158 = (void*)0;
        unsigned char *l_1159 = &g_260;
        unsigned char *l_1160 = &g_135;
        int l_1179 = 0x85DCCB08L;
        unsigned *l_1187 = &g_163;
        unsigned **l_1186 = &l_1187;
        (*l_1157) = l_1156;

        ;
        g_19 = (*l_1157);

        ;
        (*l_1165) = func_25(((p_3 <= ((void*)0 != &g_907)) && (p_3 <= 0UL)), &g_20, p_3, g_106, p_4);

        ;
        ;
        (**l_1157) = (safe_lshift_func_uint8_t_u_u((((((((*g_808) | (p_3 ^ (safe_mod_func_int32_t_s_s((*p_4), (g_818 , (-1L)))))) || (safe_sub_func_uint8_t_u_u((~p_3), (**l_1157)))) >= p_3) < (-5L)) > 0L) == 0xBEF2L), 0));
    }
    else
    {
        unsigned short *l_1195 = &l_1166;
        char *l_1196 = (void*)0;
        int l_1197 = (-4L);
        int *l_1198 = (void*)0;
        int *l_1199 = &g_1200;
        unsigned l_1208 = 7UL;
        char *l_1236 = &g_864;
        int *l_1243 = &g_818;
        unsigned short l_1250 = 0x599CL;
        if ((l_1188 != ((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0L, ((*g_146) != ((safe_lshift_func_uint16_t_u_u(p_3, 7)) , l_1195)))) | (g_67 = p_3)), ((*p_4) ^ ((((((*l_1199) = l_1197) , l_1197) && 65534UL) >= p_3) , g_163)))) , (void*)0)))
        {
lbl_1239:
            (*l_1165) = p_4;

            ;
        }
        else
        {
            int *l_1203 = &l_1162;
            for (g_37 = 0; (g_37 < (-7)); g_37--)
            {
                unsigned char l_1209 = 0UL;
                unsigned *l_1210 = &g_343;
                int l_1212 = 0x8D39C889L;
                int **l_1213 = &l_1203;
                (*l_1213) = ((*l_1165) = func_15(((void*)0 != (*g_807)), l_1203, func_15((safe_lshift_func_int8_t_s_s((((l_1212 = (((safe_div_func_uint16_t_u_u((*g_147), ((*g_297) = (-5L)))) <= ((g_612 = l_1197) > ((*l_1210) = (l_1208 , (p_3 || (func_12(((*l_1165) = &g_20), l_1209) , 0x9F8DL)))))) != g_1211)) , l_1208) ^ p_3), p_3)), p_4, l_1203)));

                ;
            }


        }


        (*l_1165) = (p_3 , func_15(((safe_lshift_func_int16_t_s_u(((*g_297) = (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((((*l_1236) = (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(func_12((l_1208 , p_4), ((safe_add_func_int16_t_s_s((l_1197 == ((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_1236) = ((((*g_808) = (((safe_lshift_func_uint16_t_u_s(p_3, ((safe_lshift_func_uint8_t_u_s((*g_808), 2)) != g_186))) && 0x5E710CF0L) == (((*g_19) != 0x33B6F59EL) | 0x0CL))) & p_3) , p_3)), l_1208)), g_907)), (*p_4))) && p_3)), p_3)) == 0xA499L)), l_1197)), (*p_4)))) , (*p_4)), 1L)), l_1197))), 2)) == p_3), &g_61, &g_363));

        ;
        for (p_3 = 19; (p_3 == (-11)); --p_3)
        {
            unsigned l_1242 = 4294967295UL;
            int l_1244 = 0L;
            unsigned *l_1245 = &g_163;
            if (g_363)
                goto lbl_1239;
            if ((*p_4))
                break;
            (*g_60) = ((safe_add_func_int8_t_s_s(func_12(((*l_1165) = p_4), l_1208), (((**g_146) = l_1242) | ((g_186 , (((func_12(func_15(l_1242, l_1243, &g_61), (*l_1243)) , (**g_807)) , 2L) >= 1UL)) > 0x03L)))) || (**l_1165));

            ;
            (*l_1165) = func_15(((*l_1245) = (l_1244 , 4294967290UL)), &g_1036, p_4);

            ;
        }

        ;
        (*g_19) = (((*l_1243) = (safe_add_func_uint8_t_u_u((*l_1243), (safe_mod_func_int32_t_s_s(func_12(&g_61, (*l_1243)), (((*g_808) = (p_3 <= l_1250)) && ((((*l_1243) == (*l_1243)) >= 0UL) ^ p_3))))))) & (**l_1165));
    }

    ;
    ;
    ;
    return p_4;


}







static unsigned func_5(unsigned p_6, short p_7, char p_8)
{
    int **l_839 = &g_224;
    unsigned short ****l_840 = &g_118;
    unsigned short ****l_842 = &g_118;
    unsigned short *****l_841 = &l_842;
    unsigned char *l_843 = &g_186;
    unsigned char *l_844 = (void*)0;
    unsigned char *l_845 = (void*)0;
    unsigned char *l_846 = (void*)0;
    unsigned char *l_847 = &g_135;
    char *l_854 = &g_67;
    unsigned char ***l_866 = &g_807;
    int l_872 = (-1L);
    char l_880 = (-1L);
    unsigned short l_921 = 0x0CA4L;
    unsigned l_945 = 0UL;
    int l_949 = 1L;
    unsigned *l_954 = &g_907;
    unsigned l_993 = 1UL;
    int *l_996 = &l_872;
    unsigned char l_1134 = 1UL;
    unsigned l_1150 = 4294967287UL;
    if (func_38(l_839, (((*l_847) = ((*l_843) = ((**g_807) = ((**l_839) > (l_840 == ((*l_841) = l_840)))))) ^ (+(safe_sub_func_int32_t_s_s(((func_12((*l_839), ((*l_854) = (safe_lshift_func_int8_t_s_u(g_37, (safe_rshift_func_int8_t_s_s((func_12(&g_37, (**l_839)) ^ (**l_839)), 6)))))) && p_8) < (**l_839)), (*g_60))))), p_8, (**l_839), (*g_224)))
    {
        int l_859 = 0x6809BC4AL;
        unsigned l_862 = 0x4BC17EA5L;
        char *l_863 = &g_864;
        int l_865 = (-5L);
        int *l_867 = &l_859;
        int l_874 = 0x0FD871C6L;
        unsigned short ****l_910 = (void*)0;
        unsigned l_937 = 9UL;
        if (((safe_sub_func_uint8_t_u_u(((((((*g_19) , (safe_sub_func_int8_t_s_s(((*l_854) = l_859), (safe_lshift_func_uint16_t_u_u(((((*l_863) = (l_862 > (l_859 | ((*g_60) = (((*g_19) ^ g_339) != p_7))))) , 0xF50CL) <= ((**g_146) = ((l_865 , l_866) == (void*)0))), 1))))) , l_862) | (*g_19)) ^ p_7) | (**g_807)), l_865)) & p_6))
        {
            unsigned *l_873 = &g_343;
            int l_879 = 0xB079C1DDL;
            l_867 = ((*l_839) = &g_818);

            ;
            ;
            (*l_839) = &g_37;

            ;
            if ((((safe_add_func_uint8_t_u_u((p_8 | ((**g_146) == (**g_146))), (safe_mod_func_uint16_t_u_u((func_12(&l_859, l_872) < (((*l_867) , (((g_163 & ((*l_873) = func_12(&g_20, p_7))) || 1L) <= 8UL)) >= (*l_867))), (*g_147))))) < l_874) | p_7))
            {
                unsigned char l_904 = 0xCBL;
                if ((p_7 , (p_8 , p_7)))
                {
                    int *l_881 = (void*)0;
                    (*l_839) = l_881;

                    ;
                }
                else
                {
                    int l_893 = 6L;
                    for (l_859 = (-23); (l_859 < (-24)); l_859--)
                    {
                        unsigned short l_884 = 65533UL;
                        return l_884;
                    }
                    (*g_60) = ((safe_lshift_func_uint16_t_u_u(((((**g_807) , l_879) | (safe_add_func_uint8_t_u_u(248UL, (((*g_147) = (0xC9B8033FL <= (*g_19))) != (safe_div_func_int8_t_s_s(l_879, (safe_rshift_func_int16_t_s_u(l_879, 2)))))))) >= (l_893 > (p_7 = (((*l_867) = ((**l_839) = ((safe_rshift_func_uint8_t_u_s((((((((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s((func_12(func_15((**l_839), (*l_839), &g_20), p_8) && (*g_297)), 2UL)) , p_7) | p_6), 0x685D55CFL)), 6)) >= l_904) & (*g_224)), l_904)) , p_8) < l_904) == p_8) , p_8) && 0x59L) || 0x01L), 5)) != (*g_808)))) && 0x808FL)))), 4)) != 0x79L);
                }

                ;
            }
            else
            {
                int l_911 = 1L;
                int *l_914 = &g_363;
                (*g_60) = (safe_add_func_uint32_t_u_u(0xD1AD343AL, ((*l_873) = ((*l_867) , (g_907 || (safe_lshift_func_uint8_t_u_u((**l_839), (0xFAL >= ((((*l_841) = (*l_841)) != l_910) , 0xF0L)))))))));
                (*g_19) = (((*g_224) = l_911) <= (((safe_div_func_uint8_t_u_u(0x77L, (func_12(&g_363, ((((*l_867) = (l_914 == (void*)0)) <= p_8) , ((*l_854) = func_12(l_914, p_7)))) , g_76))) | (**g_146)) , p_7));
            }

            ;
        }
        else
        {
            int *l_915 = &l_872;
            short ***l_918 = &g_780;
            (*l_915) = (((p_6 || (p_8 ^ (((func_12(l_915, p_6) && 9UL) && ((((*l_867) || 1L) >= (safe_mod_func_int16_t_s_s((((*l_918) = ((&g_61 != l_915) , (void*)0)) == (void*)0), p_8))) | (*l_867))) >= (*l_867)))) || p_8) >= (**g_807));
            (*l_839) = &l_859;

            ;
        }

        ;
        ;
        if (((safe_rshift_func_int8_t_s_u((*l_867), (**g_807))) && 4294967289UL))
        {
            unsigned char l_926 = 0x0AL;
            unsigned char l_938 = 0xAFL;
            int l_943 = 0x575A2302L;
            (*l_839) = &g_37;

            ;
            for (g_186 = 27; (g_186 <= 12); g_186 = safe_sub_func_int16_t_s_s(g_186, 8))
            {
                unsigned short l_948 = 0UL;
            }
            return p_8;
        }
        else
        {
            if (((*g_19) = ((void*)0 == (**l_866))))
            {
                return l_949;


            }
            else
            {
                unsigned l_950 = 0x12338958L;
                (*l_839) = &l_859;

                ;
                (**l_839) = l_950;
                (*l_839) = &g_363;

                ;
            }

            ;
            (*l_839) = (*l_839);
        }

        ;
    }
    else
    {
        char l_951 = (-4L);
        unsigned *l_953 = &g_907;
        unsigned **l_952 = &l_953;
        int l_969 = 0xFC269218L;
        short ***l_970 = &g_780;
        (*g_60) = ((l_951 & l_951) , l_951);
        (*g_60) = (((((*l_952) = &g_907) != l_954) != (~1L)) >= p_7);
        (*l_839) = l_953;

        ;
        for (g_260 = 15; (g_260 > 18); ++g_260)
        {
            short l_965 = 0L;
            unsigned short **l_968 = &g_147;
            int *l_972 = &g_20;
        }
    }

    ;

    (*l_839) = func_15(p_6, (*l_839), (*l_839));
    (*l_839) = ((((**g_146) & (g_432 = (((*l_854) = (safe_mod_func_int32_t_s_s((((0x390AB1D9L == (safe_lshift_func_int8_t_s_s((-1L), 7))) , (safe_div_func_int8_t_s_s((9L != ((**l_839) | (**l_839))), p_6))) | (((**l_839) == (((safe_rshift_func_uint16_t_u_s((((*l_839) != (void*)0) & p_8), (**l_839))) & p_6) , g_106)) > p_6)), p_6))) , (**l_839)))) & l_993) , (*l_839));
    for (l_921 = 0; (l_921 >= 37); l_921 = safe_add_func_uint16_t_u_u(l_921, 3))
    {
        short l_1004 = 0x32A5L;
        int *l_1013 = &g_20;
        unsigned short ****l_1054 = (void*)0;
        unsigned char **l_1119 = (void*)0;
        int *l_1136 = &l_949;
        (*l_839) = l_996;

        ;
        for (g_186 = 9; (g_186 != 53); ++g_186)
        {
            char l_1009 = 0x2EL;
            int l_1010 = 1L;
            char ***l_1028 = &g_220;
            char ****l_1027 = &l_1028;
            unsigned short *l_1066 = &g_432;
            short **l_1073 = &g_297;
            unsigned short ***l_1087 = (void*)0;
            int l_1088 = 0x45A03EF3L;
            unsigned l_1114 = 0UL;
            for (g_20 = 0; (g_20 != 27); ++g_20)
            {
                unsigned char l_1003 = 255UL;
                int l_1011 = 0L;
                char l_1043 = 0x80L;
                unsigned short ****l_1053 = &g_118;
                short l_1058 = 9L;
            }
            (*l_839) = (void*)0;

            ;
        }

        ;
    }

    ;
    return g_20;


}







static char func_12(int * p_13, char p_14)
{
    unsigned l_838 = 1UL;
    return l_838;
}







static int * func_15(unsigned p_16, int * p_17, int * p_18)
{
    unsigned l_31 = 0x1C946B43L;
    int *l_33 = &g_20;
    int **l_32 = &l_33;
    int *l_36 = &g_37;
    int l_647 = (-6L);
    unsigned short l_790 = 0xDD4FL;
    int l_802 = 0L;
    unsigned short **l_817 = &g_147;
    unsigned short ******l_822 = &g_592;
    return p_17;


}







static int * func_25(int p_26, int * p_27, char p_28, unsigned p_29, int * p_30)
{
    unsigned l_652 = 0xC8EAE452L;
    char *l_656 = &g_67;
    char **l_655 = &l_656;
    int l_686 = 1L;
    int **l_693 = &g_19;
    char l_741 = 0L;
    int l_748 = 0xB446180BL;
    int *l_757 = (void*)0;
    short **l_771 = &g_297;
    short **l_774 = (void*)0;
    for (g_135 = 0; (g_135 > 18); g_135 = safe_add_func_uint32_t_u_u(g_135, 6))
    {
        unsigned l_659 = 0x245689ABL;
        unsigned *l_692 = &g_343;
    }
    (*p_27) = 0x1F06E9BBL;
    (*l_693) = (void*)0;

    ;
    for (p_28 = 0; (p_28 >= 1); p_28 = safe_add_func_uint8_t_u_u(p_28, 7))
    {
        char l_701 = (-1L);
        int l_720 = 1L;
        int l_721 = (-10L);
        int l_722 = (-5L);
        unsigned short **l_760 = (void*)0;
        int l_766 = 6L;
    }
    return &g_20;


}







static unsigned func_34(int p_35)
{
    unsigned short ***l_619 = &g_146;
    int l_626 = 0x0056F20EL;
    int **l_629 = &g_19;
    short *l_632 = &g_339;
    unsigned *l_633 = &g_163;
    unsigned short ******l_634 = &g_592;
    int *l_635 = &g_37;
    unsigned short l_640 = 0UL;
    int l_645 = 0x04595F1DL;
    int l_646 = 4L;
    (*l_635) = ((((void*)0 == l_619) < ((p_35 , (((safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((&g_76 == ((safe_rshift_func_uint8_t_u_s(l_626, ((safe_sub_func_int16_t_s_s(((void*)0 != &g_220), (((**g_146) = (**l_629)) > 65533UL))) <= 65535UL))) , l_632)) >= p_35) , l_633) != l_633), (**l_629))), g_343)) , l_634) == &g_592)) < p_35)) || p_35);
    p_35 = 0xF793DC91L;
    (*l_635) = ((((safe_lshift_func_uint16_t_u_s(((***l_619) = (safe_mod_func_uint8_t_u_u(((+(((**l_629) < (*l_635)) || g_163)) || 0x5A18C094L), 0x3AL))), (*l_635))) , (**l_629)) > l_646) != p_35);
    return g_135;
}







static int func_38(int ** p_39, unsigned short p_40, char p_41, unsigned p_42, int p_43)
{
    int l_281 = 6L;
    int l_286 = 0xF19AB1BEL;
    unsigned l_289 = 0x17A02868L;
    unsigned short ***l_324 = &g_146;
    unsigned short ***l_326 = (void*)0;
    int *l_368 = &l_286;
    char *l_467 = &g_67;
    char l_474 = (-3L);
    unsigned char *l_475 = &g_135;
    int l_478 = 3L;
    int l_486 = (-1L);
    unsigned short l_505 = 0xEA88L;
    char l_552 = 0x15L;
    unsigned l_569 = 8UL;
    short **l_579 = &g_297;
    unsigned char **l_615 = &l_475;
    int l_616 = 0x9C11E298L;
    if (((((-3L) > ((l_281 != (g_186 == 0xF1A8L)) > ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((p_43 , l_286) > (safe_sub_func_int8_t_s_s((0xB97AL < 65533UL), g_67))) , l_289), 2)), g_163)) , p_43))) < p_43) , 7L))
    {
        short l_298 = (-1L);
        unsigned short *l_299 = &g_106;
        int l_313 = 0xAD03F487L;
        if ((*g_19))
        {
            int **l_290 = (void*)0;
            int **l_291 = (void*)0;
            int **l_292 = &g_224;
            g_60 = ((*l_292) = (*p_39));

            ;
        }
        else
        {
            short *l_294 = &g_76;
            short **l_293 = &l_294;
            short ***l_295 = &l_293;
            g_296 = ((*l_295) = l_293);

            ;
        }

        ;

        if (p_43)
        {
            unsigned short *l_300 = (void*)0;
            unsigned short *l_302 = (void*)0;
            unsigned short **l_301 = &l_302;
            int **l_307 = (void*)0;
            int **l_308 = (void*)0;
            int **l_309 = &g_224;
            p_43 = (((~(p_42 = (l_298 ^ (*g_147)))) == (l_298 >= ((l_299 != ((*l_301) = (l_300 = (void*)0))) , (p_40 , l_286)))) || (!(safe_rshift_func_uint16_t_u_s(p_41, p_42))));
            for (l_281 = 0; (l_281 < 14); ++l_281)
            {
                if (p_43)
                    break;
            }
            (*l_309) = (*p_39);
        }
        else
        {
            int *l_310 = &l_286;
            int **l_311 = (void*)0;
            int **l_312 = &l_310;
            (*l_312) = l_310;
            l_313 = (-2L);
            (*l_312) = (*p_39);

            ;
        }
        if ((safe_div_func_int32_t_s_s(p_40, 0x3F3D5685L)))
        {
            int **l_316 = &g_60;
            short **l_317 = &g_297;
            int l_318 = (-1L);
            (*l_316) = (*p_39);
            l_317 = (void*)0;

            ;
            l_318 = l_286;
        }
        else
        {
            return p_40;
        }
    }
    else
    {
        int **l_319 = &g_60;
        unsigned short ***l_325 = &g_146;
        char *l_327 = &g_67;
        unsigned short ****l_353 = &g_118;
        unsigned short *****l_352 = &l_353;
        unsigned l_382 = 0x5BD1A025L;
        short l_400 = (-1L);
        int l_458 = (-5L);
        char l_470 = 0x38L;
        (*l_319) = &g_61;

        ;
        if (g_163)
            goto lbl_332;
lbl_332:
        if ((safe_add_func_int8_t_s_s(((*l_327) = (((p_42 | (((safe_sub_func_int8_t_s_s(l_281, 0UL)) <= (-4L)) , l_286)) , l_324) == (l_326 = ((!p_43) , l_325)))), (((***l_325) = p_43) || p_41))))
        {
            unsigned l_328 = 0x29E0859BL;
            return l_328;
        }
        else
        {
            int l_329 = 0x4E9515FBL;
            unsigned short ****l_331 = &l_324;
            unsigned short *****l_330 = &l_331;
            (*g_224) = (((**g_146) && l_329) <= ((((*l_330) = &l_325) != (void*)0) , l_329));

            ;
        }

        ;
        if (((safe_rshift_func_uint8_t_u_u(p_42, 6)) >= ((*g_60) = (*g_19))))
        {
            unsigned short l_335 = 0x642CL;
            unsigned char *l_337 = &g_135;
            unsigned char **l_336 = &l_337;
            short *l_338 = &g_339;
            unsigned l_342 = 0x60AA1E24L;
            g_343 = ((((((*l_338) = ((**l_319) || ((l_286 = l_335) || ((((*g_297) = (((*l_336) = &g_135) != &g_135)) >= 0xAB5AL) , ((l_286 = ((**g_146) >= p_42)) || p_41))))) <= (l_342 = ((safe_add_func_uint8_t_u_u(l_335, g_260)) | 247UL))) < 0xD23FAFD4L) , g_106) == l_335);
        }
        else
        {
            char l_364 = (-1L);
            unsigned *l_390 = &l_382;
            int l_441 = 0x9C308707L;
            unsigned *l_465 = (void*)0;
            unsigned *l_466 = &l_289;
            short *l_468 = &g_339;
            unsigned char *l_469 = &g_260;
            int *l_471 = &l_458;
            for (p_43 = 27; (p_43 < 21); p_43 = safe_sub_func_uint16_t_u_u(p_43, 3))
            {
                short l_362 = 0L;
                for (g_67 = 0; (g_67 >= 9); ++g_67)
                {
                    int l_369 = 0x87F49181L;
                }
                if (g_163)
                    goto lbl_332;
            }
            for (g_67 = (-10); (g_67 != 16); g_67++)
            {
                char *l_380 = &l_364;
                unsigned char *l_381 = &g_135;
                unsigned short ****l_383 = &g_118;
                unsigned *l_384 = (void*)0;
                unsigned *l_385 = &g_163;
                int l_403 = 0xADB77967L;
            }
            (*l_471) = ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((*g_297) , (((**l_319) = ((*l_368) = ((safe_add_func_int8_t_s_s((+(**l_319)), ((*l_469) = (safe_lshift_func_int16_t_s_u(((*l_468) = ((safe_add_func_uint32_t_u_u(0x4E1D7CEBL, (g_135 >= (safe_mod_func_uint8_t_u_u((((((((*g_297) = ((((safe_unary_minus_func_uint16_t_u(l_458)) , p_43) != 255UL) , (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((**g_146) = (safe_lshift_func_uint16_t_u_s(((((((*l_466) = ((p_43 | (p_40 && p_43)) == g_343)) , &l_289) == (void*)0) || 0xE0L) && g_363), 1))) >= (**l_319)), g_432)) , (**l_319)), 10)))) >= (**l_319)) , 0x90L) , l_467) != (void*)0) > (*g_224)), g_186))))) , (**g_296))), 4))))) , (*g_19)))) <= p_42)), l_470)), 14)) == 0x59L);
        }
    }

    ;

    ;
    if (((safe_rshift_func_int8_t_s_u((*l_368), (l_478 = (((((*l_475) = (l_474 , 0x1BL)) > p_41) , (safe_add_func_uint32_t_u_u((1UL <= ((&l_467 != (void*)0) == ((*l_467) = 0x24L))), ((*l_368) , g_260)))) > p_43)))) <= p_40))
    {
        int l_479 = 0L;
        int *l_483 = (void*)0;
        int *l_512 = &l_286;
        (*l_368) = (*g_19);
        (*l_368) = (*l_368);
        if (l_479)
        {
            unsigned char l_482 = 0UL;
            for (g_186 = (-27); (g_186 != 13); g_186++)
            {
                if (l_482)
                    break;
            }
            l_483 = (*p_39);

            ;
            if ((safe_div_func_uint16_t_u_u(((((*g_297) | (*l_368)) , (~1UL)) >= (*g_147)), l_486)))
            {
                (*l_368) = (safe_rshift_func_int8_t_s_s((0x5215L >= ((g_61 = (1L >= p_42)) > (((+(((((*g_19) > 9L) <= (safe_rshift_func_uint16_t_u_s(((&l_324 != ((((safe_rshift_func_int16_t_s_u((4294967295UL | p_40), 13)) || (*g_19)) || g_339) , &g_118)) ^ p_42), 1))) , 0x7DC8L) >= p_40)) <= p_40) ^ 1L))), 6));
            }
            else
            {
                return (*g_19);
            }
            for (g_260 = 0; (g_260 == 38); ++g_260)
            {
                int l_495 = 0x99DE25CFL;
                return l_495;
            }
        }
        else
        {
            int *l_496 = &l_486;
            int **l_497 = (void*)0;
            int **l_498 = &l_368;
            l_483 = (*p_39);

            ;
            (*l_498) = l_496;

            ;
            for (l_281 = 0; (l_281 > (-30)); l_281 = safe_sub_func_uint16_t_u_u(l_281, 6))
            {
                int *l_506 = &l_286;
                unsigned *l_511 = &g_343;
                (**l_498) = ((safe_add_func_uint32_t_u_u(((*l_511) = (safe_div_func_uint32_t_u_u(((*l_368) == ((((*g_19) && (p_43 = ((*l_506) = (l_505 >= p_41)))) < (safe_rshift_func_uint8_t_u_u(1UL, 1))) , (*l_368))), (0xCCL & ((safe_sub_func_uint16_t_u_u(0xB237L, ((void*)0 != l_506))) , p_41))))), p_41)) || (**g_146));
            }
            (*l_498) = (void*)0;

            ;
        }

        ;
        ;
        (*l_512) = l_479;
    }
    else
    {
        unsigned short l_525 = 1UL;
        short ***l_538 = &g_296;
        int *l_561 = &l_486;
        unsigned short ****l_594 = (void*)0;
        unsigned short *****l_593 = &l_594;
        int **l_607 = &g_224;
        for (g_76 = 6; (g_76 > (-21)); g_76--)
        {
            int *l_526 = &l_486;
        }
        if ((l_561 == (g_224 = &g_61)))
        {
            short l_587 = 0x611CL;
            for (g_432 = 0; (g_432 < 54); ++g_432)
            {
                short l_588 = 0x26E6L;
                for (l_525 = 0; (l_525 >= 34); ++l_525)
                {
                    if (l_587)
                        break;
                }
                if (l_588)
                {
                    int **l_589 = &l_561;
                    (*l_589) = &l_478;

                    ;
                    (*l_589) = &g_363;

                    ;
                }
                else
                {
                    unsigned short ******l_595 = (void*)0;
                    unsigned short *****l_596 = &l_594;
                    int l_603 = 0x6044DC67L;
                    int **l_604 = (void*)0;
                    int **l_605 = (void*)0;
                    g_60 = ((safe_sub_func_int16_t_s_s((((((**g_146) = 0xBBE6L) && (*g_147)) | (*g_19)) , (*l_561)), (0L | ((g_592 == (l_596 = l_593)) > ((**l_579) = (((((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_42, l_603)), 65535UL)), p_42)) , &g_296) == (void*)0) , (-4L)) , l_603)))))) , (*p_39));
                }
            }

            ;
        }
        else
        {
            int **l_606 = &g_224;
            (*l_606) = (*p_39);

            ;
        }

        ;
        (*l_607) = &l_478;

        ;
        return p_43;


    }

    ;
    l_486 = (((((l_281 , (safe_lshift_func_int8_t_s_u((l_474 ^ (((((**g_146) = (safe_mod_func_uint8_t_u_u(l_486, g_76))) && (g_612 , (((*l_579) == (*l_579)) <= (((*l_615) = &g_186) != (void*)0)))) | 0xFEF050C6L) && g_339)), 6))) | p_40) == 0x23L) && l_616) , p_40);

    ;
    return p_42;
}







static int ** func_44(int p_45, int ** p_46, int p_47)
{
    unsigned l_112 = 8UL;
    unsigned short ***l_117 = (void*)0;
    unsigned short ****l_119 = &g_118;
    int *l_151 = (void*)0;
    int **l_166 = &l_151;
    short *l_174 = &g_76;
    short l_227 = (-7L);
    p_45 = l_112;
    if ((safe_lshift_func_int16_t_s_u(0x479DL, (l_112 >= (safe_lshift_func_uint8_t_u_u((l_117 != ((*l_119) = g_118)), g_106))))))
    {
        short *l_120 = &g_76;
        int l_121 = 0L;
        int **l_242 = &g_224;
        unsigned short **l_264 = &g_147;
        int *l_275 = &l_121;
        if (((l_120 != &g_76) > l_121))
        {
            unsigned l_128 = 0xC7CD66DAL;
            unsigned short *l_129 = &g_106;
            int l_132 = 0x87C28FDDL;
            unsigned short ****l_133 = &l_117;
            unsigned char *l_134 = &g_135;
            int **l_188 = &g_60;
            unsigned short l_204 = 0x5404L;
            int l_206 = 0x03DF3290L;
            unsigned *l_239 = &l_112;
            int *l_267 = &g_61;
        }
        else
        {
            unsigned char l_268 = 0xC1L;
            int l_276 = (-1L);
            if (l_268)
            {
                int *l_269 = &g_61;
                (*l_242) = l_269;
            }
            else
            {
                unsigned l_274 = 4294967295UL;
                (*l_166) = (*p_46);

                ;
                for (g_163 = 0; (g_163 <= 45); g_163 = safe_add_func_uint8_t_u_u(g_163, 3))
                {
                    (*g_224) = (safe_mod_func_uint8_t_u_u(g_61, l_274));
                    (*g_224) = 0x538581BCL;
                    l_275 = ((*l_166) = &g_20);

                    ;
                    ;
                    g_60 = (void*)0;

                    ;
                }

                ;
            }

            ;
            ;
            l_276 = (**l_242);
            (*g_224) = (*g_224);
            (*l_166) = ((*l_242) = (*l_242));

            ;
        }

        ;
        ;
        g_60 = ((*l_242) = (*l_242));

        ;
    }
    else
    {
        for (l_112 = 0; (l_112 != 47); l_112 = safe_add_func_uint16_t_u_u(l_112, 3))
        {
            return p_46;


        }
        for (g_260 = 0; (g_260 != 4); g_260++)
        {
            return &g_19;


        }
        g_60 = (void*)0;

        ;
    }

    ;
    ;
    (*l_166) = (*p_46);

    ;
    return &g_60;


}







static int ** func_48(short p_49, int ** p_50, int ** p_51)
{
    unsigned l_62 = 0x2DB6377FL;
    int l_63 = 0xFAC5ADF6L;
    char *l_66 = &g_67;
    int **l_70 = (void*)0;
    short *l_75 = &g_76;
    int *l_77 = &g_61;
    int **l_78 = &g_60;
    unsigned char l_83 = 1UL;
    for (p_49 = 13; (p_49 < 25); ++p_49)
    {
        g_60 = &g_20;

        ;
        return p_51;


    }
    (*l_78) = ((l_62 || (!((((*l_75) = ((l_63 || 1UL) == ((safe_add_func_int8_t_s_s(((g_20 > (((*l_66) = 1L) | (safe_add_func_int32_t_s_s(((65535UL <= ((void*)0 == l_70)) , ((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0x27FA52E9L, (*g_60))), g_61)) != g_61)), 0x4D19633EL)))) ^ g_20), g_20)) ^ p_49))) || g_20) , 0x36L))) , l_77);

    ;
    (*l_78) = (*p_51);

    ;
    if ((**p_50))
    {
        unsigned short l_91 = 1UL;
        int *l_103 = &g_61;
        unsigned char l_107 = 0x37L;
        for (g_61 = 9; (g_61 != 4); --g_61)
        {
            int *l_84 = &l_63;
            (*l_84) = (p_49 , (safe_sub_func_int16_t_s_s(l_83, p_49)));
            g_60 = l_84;

            ;
            l_84 = ((*l_78) = &g_61);

            ;
            ;
        }
        if ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((0x2BEB855BL > (*g_19)), 0)), ((safe_lshift_func_int8_t_s_u((g_67 <= 0L), 0)) >= g_76))))
        {
            char l_96 = 0x4EL;
            unsigned short *l_99 = &l_91;
            int **l_100 = &g_19;
            (*l_77) = l_91;
            (*l_77) = (safe_lshift_func_int8_t_s_u(((!((((*l_99) = ((!(safe_add_func_int32_t_s_s(l_96, 0x1B86553EL))) ^ ((safe_div_func_uint8_t_u_u(0UL, g_20)) <= 0x75B4L))) | (l_96 == p_49)) , l_91)) || p_49), 3));
            if ((((l_91 >= ((*l_66) = l_91)) || g_67) == p_49))
            {
                return l_100;


            }
            else
            {
                for (l_91 = 0; (l_91 == 38); l_91 = safe_add_func_uint32_t_u_u(l_91, 7))
                {
                    unsigned short **l_105 = (void*)0;
                    unsigned short ***l_104 = &l_105;
                    l_103 = (*p_50);

                    ;
                    if ((*l_103))
                        break;
                    (*l_77) = 0xC62902D2L;
                    (*l_104) = (void*)0;
                }

                ;
                (*l_78) = ((*l_103) , (*p_51));
                (*l_78) = &g_20;

                ;
            }

            ;
            ;
            g_106 = ((*l_77) = (**p_50));
        }
        else
        {
            (*l_77) = (l_107 , (*g_19));
            (*l_78) = ((*l_103) , (void*)0);

            ;
        }

        ;
        ;
        l_103 = &g_61;

        ;
        (*l_103) = (safe_sub_func_int16_t_s_s(g_76, p_49));
    }
    else
    {
        (*l_77) = (0xD276L && 0UL);
    }

    ;
    return p_51;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    transparent_crc(g_907, "g_907", print_hash_value);
    transparent_crc(g_1036, "g_1036", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
