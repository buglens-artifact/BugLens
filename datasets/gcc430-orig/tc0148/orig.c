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



static int g_18 = (-1L);
static int *g_17 = &g_18;
static short g_52 = 0x1B0CL;
static unsigned g_60 = 4294967290UL;
static int g_62 = 3L;
static int g_65 = 1L;
static unsigned char g_67 = 4UL;
static short *g_70 = (void*)0;
static short g_78 = (-8L);
static char g_80 = 4L;
static char *g_104 = &g_80;
static char **g_103 = &g_104;
static int *g_108 = &g_62;
static unsigned g_139 = 0x330C07BBL;
static unsigned short g_148 = 0xAB54L;
static unsigned char g_222 = 0x1AL;
static unsigned char * const g_258 = &g_67;
static unsigned char g_284 = 0x9FL;
static unsigned short *g_410 = (void*)0;
static unsigned short **g_409 = &g_410;
static unsigned g_430 = 0xE587C2F7L;
static unsigned g_443 = 0x19D5F814L;
static char g_455 = 8L;
static short g_539 = (-3L);
static int *g_601 = &g_62;
static unsigned g_626 = 0xBB9EBD29L;
static const unsigned g_679 = 0UL;
static unsigned short g_734 = 0x5C02L;
static char g_735 = 0L;
static int **g_738 = &g_17;
static int *** const g_737 = &g_738;
static const char * const **g_758 = (void*)0;
static const char * const ***g_757 = &g_758;
static unsigned *g_763 = (void*)0;
static unsigned * const *g_762 = &g_763;
static unsigned * const **g_761 = &g_762;
static unsigned short ***g_783 = (void*)0;
static const char g_804 = (-1L);
static int *g_830 = (void*)0;
static int **g_829 = &g_830;
static unsigned char *g_876 = &g_222;
static char g_880 = 0x42L;
static char g_1073 = (-1L);
static unsigned g_1108 = 1UL;
static unsigned *g_1111 = &g_1108;
static unsigned **g_1110 = &g_1111;
static unsigned ***g_1109 = &g_1110;
static const char *g_1127 = &g_804;
static const char **g_1126 = &g_1127;
static int *g_1187 = &g_62;
static char g_1194 = 0xB8L;
static int g_1237 = 4L;



static unsigned short func_1(void);
static int * func_2(unsigned short p_3, const unsigned char p_4);
static short func_7(int * p_8);
static int * func_9(int * p_10, unsigned short p_11);
static int * func_12(char p_13, int * p_14, int * p_15, int * p_16);
static char func_20(int * p_21, int * p_22, const char p_23, short p_24);
static int func_29(int * p_30, int * p_31);
static int * func_32(unsigned p_33);
static const unsigned short func_36(int p_37, unsigned p_38, const char p_39, const int * p_40, const char p_41);
static unsigned char func_44(unsigned p_45, unsigned char p_46, unsigned short p_47, short p_48, short p_49);
static unsigned short func_1(void)
{
    int *l_19 = (void*)0;
    int l_822 = 0L;
    int l_823 = 0L;
    unsigned l_1241 = 0x3C78FBDFL;
    char l_1246 = 0x94L;
    unsigned char l_1247 = 1UL;
    unsigned *l_1248 = (void*)0;
    unsigned *l_1249 = &g_60;
    unsigned *l_1250 = &g_626;
    const unsigned char l_1251 = 255UL;
    l_19 = func_2((((safe_sub_func_int16_t_s_s(func_7(func_9(func_12(((g_17 != (((((((void*)0 != l_19) <= func_20(&g_18, l_19, g_18, g_18)) <= (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((((l_822 > g_679) > 0x139F7CA5L) , l_822), l_822)) != g_679), 0x79L))) && 0x891AL) , l_823) , (**g_737))) <= g_804), &l_822, (*g_738), (*g_738)), g_880)), g_1073)) > g_1194) | g_1237), g_1108);

    ;
    ;
    ;

    ;

    ;
    ;
    ;
    (*l_19) = (*l_19);
    return (*l_19);


}







static int * func_2(unsigned short p_3, const unsigned char p_4)
{
    int l_1238 = 0xF3B8AABBL;
    l_1238 &= (-1L);
    return &g_62;


}







static short func_7(int * p_8)
{
    unsigned short l_1219 = 0xCA9BL;
    unsigned l_1222 = 9UL;
    int l_1228 = (-1L);
    int l_1232 = (-4L);
    int *l_1233 = &g_62;
    const unsigned short *l_1236 = &g_734;
    const unsigned short **l_1235 = &l_1236;
    const unsigned short ***l_1234 = &l_1235;
    for (g_284 = 16; (g_284 == 21); g_284++)
    {
        int l_1225 = 0L;
        short *l_1231 = &g_52;
        (*g_601) = (safe_lshift_func_int16_t_s_u((l_1219 && (((safe_lshift_func_int16_t_s_s(l_1222, ((*l_1231) = (safe_sub_func_int32_t_s_s((*p_8), ((((*p_8) , (l_1225 , (*g_258))) && (safe_mul_func_int8_t_s_s(l_1225, (l_1228 = l_1222)))) != ((safe_mul_func_int8_t_s_s((((*g_1187) || 0x3AA30E91L) < l_1219), (*g_876))) == 0x84663950L))))))) <= l_1225) , l_1232)), l_1219));
        (*g_601) |= (l_1233 == ((*l_1233) , l_1233));
        (*p_8) &= (-10L);
    }
    p_8 = l_1233;

    ;
    l_1233 = (void*)0;

    ;
    (*g_601) &= (((void*)0 != l_1234) != (-1L));
    return g_222;
}







static int * func_9(int * p_10, unsigned short p_11)
{
    int *l_1114 = &g_18;
    short *l_1121 = &g_52;
    unsigned short l_1122 = 1UL;
    unsigned l_1140 = 0x81D73CDAL;
    unsigned l_1141 = 0x35B9614BL;
    int l_1155 = (-1L);
    unsigned l_1209 = 0UL;
    (*g_738) = (void*)0;

    ;
    (**g_737) = (**g_737);
    if ((p_11 | l_1122))
    {
        short l_1132 = 0L;
        int l_1133 = 0L;
        short l_1154 = 0x20F6L;
        unsigned **l_1180 = &g_763;
        unsigned char l_1185 = 0UL;
        int *l_1197 = (void*)0;
        for (g_62 = 0; (g_62 == (-21)); g_62--)
        {
            char * const *l_1125 = (void*)0;
            const char ***l_1128 = &g_1126;
            char *l_1129 = &g_735;
            int *l_1134 = (void*)0;
            int l_1137 = 1L;
            if (((((((((*l_1129) |= ((**g_103) = (l_1125 == ((*l_1128) = g_1126)))) >= (*g_876)) < ((((safe_sub_func_uint32_t_u_u(p_11, (p_11 ^ 253UL))) ^ (p_11 >= 4L)) != (p_11 < l_1132)) < 0UL)) > l_1132) >= 0x8F3C3436L) && (*g_876)) > p_11))
            {
                l_1133 |= (*g_601);
                (*g_738) = (*g_738);
                (*g_738) = l_1134;
                for (g_284 = 0; (g_284 < 25); g_284 = safe_add_func_int32_t_s_s(g_284, 5))
                {
                    l_1137 = l_1137;
                    if (l_1133)
                        break;
                }
            }
            else
            {
                unsigned l_1142 = 5UL;
                for (g_148 = 0; (g_148 == 37); g_148++)
                {
                    unsigned char *l_1147 = (void*)0;
                    int *l_1148 = (void*)0;
                    int *l_1151 = &l_1133;
                    if (l_1140)
                        break;
                    (*l_1114) = (l_1141 || (-3L));
                    (*l_1151) ^= ((l_1142 >= (safe_lshift_func_int8_t_s_u(((((*g_876) < ((g_65 &= (safe_mul_func_int8_t_s_s(l_1132, ((*l_1114) &= ((*g_258) = (g_284 |= (*g_258))))))) , (safe_mod_func_int8_t_s_s((0x55664CD0L || p_11), (*g_258))))) , 7L) <= p_11), 2))) > 0xE36CL);
                }
                (*g_738) = p_10;


                l_1155 ^= (safe_rshift_func_int8_t_s_s((l_1154 = l_1142), 0));
                return l_1114;


            }
            (*g_601) |= l_1133;
        }
        for (g_222 = 0; (g_222 == 28); g_222++)
        {
            int *l_1162 = &g_62;
            (*g_737) = &p_10;

            ;
            for (g_62 = (-17); (g_62 < 0); g_62++)
            {
                unsigned l_1172 = 4294967294UL;
                unsigned ***l_1173 = &g_1110;
                int l_1196 = 0x33C39FD2L;
                if ((*l_1114))
                {
                    for (g_148 = 0; (g_148 <= 46); g_148++)
                    {
                        (**g_737) = (((l_1154 ^ (p_11 , 0xA4L)) | ((*g_104) ^= p_11)) , p_10);
                    }
                }
                else
                {
                    return l_1162;




                }
                for (g_65 = 18; (g_65 == (-5)); g_65 = safe_sub_func_uint8_t_u_u(g_65, 5))
                {
                    const int l_1195 = (-9L);
                    for (g_455 = 0; (g_455 < 26); g_455 = safe_add_func_int8_t_s_s(g_455, 4))
                    {
                        int **l_1167 = &g_108;
                        unsigned ****l_1170 = &g_1109;
                        unsigned *l_1171 = (void*)0;
                        (*l_1167) = ((**g_737) = p_10);


                        (**g_737) = &l_1133;

                        ;
                        (*l_1167) = (((((((*l_1121) &= (((*l_1170) = ((safe_lshift_func_uint8_t_u_s(0UL, 2)) , (void*)0)) == (((p_11 | (((p_11 , (p_11 , (((g_763 = &g_626) != l_1171) == 0x3982F4DDL))) && l_1172) & p_11)) == (*l_1162)) , l_1173))) != p_11) && p_11) , (*g_876)) == 0x50L) , (*g_738));

                        ;
                        ;
                        ;
                    }
                    if (((l_1133 = (((**g_103) = (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x0D71F396L, ((p_11 & ((void*)0 != l_1180)) ^ ((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(1L, (p_10 == p_10))), l_1172)) ^ ((l_1154 >= l_1154) == p_11))))), l_1185)) , (*l_1114)) <= p_11), 13))) >= 248UL)) | 0xE4FEL))
                    {
                        (*l_1114) = p_11;
                    }
                    else
                    {
                        int *l_1186 = &l_1133;
                        return g_1187;




                    }
                    l_1196 &= (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((1UL >= (((safe_lshift_func_uint16_t_u_u((*l_1114), ((((((*l_1121) = ((l_1172 | 0x20247F0AL) == (((((void*)0 == &g_409) , (l_1154 ^ ((-1L) >= ((~g_1194) != 0xEB3AF76BL)))) >= 0x60C1EFD8L) & 2UL))) && l_1172) , 0x45L) & 0xEDL) && l_1195))) && p_11) , 0xC08582FFL)) >= p_11), 4294967287UL)), (*l_1114)));
                }
                l_1197 = ((*g_738) = (**g_737));
                if ((*l_1162))
                    break;
            }
        }

        ;
        ;
        ;
        ;


    }
    else
    {
        short l_1198 = 0L;
        unsigned short *l_1201 = &g_148;
        int *l_1206 = (void*)0;
        short *l_1210 = (void*)0;
        short *l_1211 = &l_1198;
        int l_1212 = 0x87C9F1F3L;
        (*g_1187) = (l_1198 != ((*l_1201) ^= (safe_mod_func_uint32_t_u_u(((*l_1114) & (*l_1114)), (*g_601)))));
        (*g_738) = (void*)0;
        (*g_601) = ((safe_mod_func_uint32_t_u_u(p_11, (safe_mod_func_uint32_t_u_u(((p_11 >= ((!((**g_103) = (p_11 == 0x8AL))) || (p_11 , p_11))) | l_1212), (*l_1114))))) <= (*l_1114));
        (*g_601) = (safe_rshift_func_uint8_t_u_u((*g_876), 7));
    }


    ;
    ;
    ;

    return l_1114;



}







static int * func_12(char p_13, int * p_14, int * p_15, int * p_16)
{
    int l_841 = 7L;
    int l_842 = 0x64A70445L;
    int **l_913 = &g_17;
    int l_914 = (-9L);
    unsigned ***l_919 = (void*)0;
    unsigned short **l_961 = (void*)0;
    char ***l_977 = (void*)0;
    int l_994 = 0L;
    unsigned l_1046 = 6UL;
    unsigned short l_1057 = 1UL;
    unsigned short l_1074 = 0x0A4AL;
    short **l_1077 = &g_70;
    unsigned *l_1107 = &g_1108;
    unsigned **l_1106 = &l_1107;
    unsigned ***l_1105 = &l_1106;
    unsigned ***l_1112 = &g_1110;
    short **l_1113 = &g_70;
    for (g_139 = 0; (g_139 >= 3); ++g_139)
    {
        int *l_828 = (void*)0;
        int ***l_831 = &g_829;
        unsigned short *l_839 = &g_148;
        int l_874 = 0xEC9B1889L;
        unsigned l_916 = 1UL;
        unsigned **l_921 = (void*)0;
        unsigned *** const l_920 = &l_921;
        unsigned short l_922 = 65527UL;
        int * const *l_924 = &l_828;
        int * const **l_923 = &l_924;
        unsigned char l_954 = 0xB9L;
        int l_962 = 0x87FF6B5CL;
        unsigned l_1031 = 1UL;
        short l_1032 = 0x6F47L;
        int l_1059 = 0xF28303F7L;
        char ***l_1061 = &g_103;
        for (g_539 = 18; (g_539 == (-1)); g_539 = safe_sub_func_int8_t_s_s(g_539, 8))
        {
            return l_828;


        }
        (*g_601) ^= (*p_14);
        (*l_831) = g_829;
    }
    (*p_14) |= (**g_738);
    (*p_16) = ((**l_913) , (func_44((**l_913), (**l_913), (**l_913), (**l_913), p_13) , 0x6D42CFB7L));

    ;
    if (((*p_16) = (0xE10C1616L <= (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((p_13 >= ((((func_29((*l_913), p_15) != 0x256AL) | ((l_1105 == (l_1112 = g_1109)) , ((*p_14) = (p_13 , 1L)))) , &g_70) != l_1113)) ^ (-10L)), p_13)), p_13)))))
    {
        return (*l_913);


    }
    else
    {
        (*p_14) = 0xA9A333A6L;
    }
    return p_14;


}







static char func_20(int * p_21, int * p_22, const char p_23, short p_24)
{
    unsigned *l_728 = &g_626;
    char **l_731 = &g_104;
    int l_732 = 0x419834FEL;
    unsigned short *l_733 = &g_734;
    int l_739 = 0xEEB0BD36L;
    int *l_749 = &g_62;
    unsigned char l_798 = 0x30L;
    const int l_812 = 0x2EF5298EL;
    if ((safe_add_func_int16_t_s_s((g_735 &= (safe_mul_func_int16_t_s_s((func_29(func_32(g_18), p_21) ^ (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(8UL, ((*l_728) = 4294967295UL))), ((*l_733) = ((safe_sub_func_int32_t_s_s((l_732 &= ((l_731 == (void*)0) , (!(p_23 , 0xC51FBAE2L)))), 0UL)) , 0UL))))), g_679))), g_679)))
    {
        int **l_736 = &g_108;
        short *l_740 = &g_78;
        int *l_741 = &g_65;
        int **l_748 = &l_741;
        unsigned short *l_750 = &g_148;
        unsigned ***l_764 = (void*)0;
        unsigned short ***l_782 = &g_409;
        short l_805 = 0xFE62L;
        (*l_736) = &g_18;

        ;
        (*l_741) = ((+((*g_258) > (((**l_736) = (*p_21)) ^ (((g_737 != (void*)0) > ((void*)0 == &p_22)) && ((l_739 >= (((*l_740) = 0x26FDL) > (!p_24))) <= l_732))))) , 0xA5B95428L);
        if ((((safe_add_func_uint16_t_u_u(((-1L) ^ ((*l_750) &= ((*l_733) = (safe_mul_func_uint16_t_u_u(p_23, (safe_sub_func_uint16_t_u_u(l_732, ((func_44(p_24, p_23, func_29((*l_748), (l_749 = (p_21 = ((*l_736) = (*g_738))))), p_24, g_78) > 4UL) <= p_23)))))))), 0x97CEL)) > 0x97L) , (*l_741)))
        {
            char ***l_768 = &g_103;
            char ****l_767 = &l_768;
            int l_769 = 0x2EB77B86L;
            char l_770 = 0x71L;
            unsigned short ***l_781 = &g_409;
            unsigned short ****l_780 = &l_781;
            char *l_786 = &g_735;
            int *l_787 = &l_732;
            (*g_108) = (safe_add_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(((((safe_add_func_int32_t_s_s(func_44(g_52, (((*p_21) = (*g_601)) || (~(0x49L || (g_757 == (((safe_mul_func_int8_t_s_s((p_23 , ((*g_104) = (g_761 != l_764))), ((*g_258) = ((safe_sub_func_uint8_t_u_u((+(p_23 != ((*g_258) >= (*l_749)))), 0x33L)) > (***g_737))))) >= (**l_736)) , l_767))))), p_23, p_23, (*g_70)), l_769)) || p_24) && (*l_741)) && 0x1AL), 4294967292UL)) , (**l_736)) || l_770) ^ p_23), p_23));
            (***g_737) = 0xDFB355A3L;
            p_21 = p_22;

            ;
            (*l_787) &= ((**l_736) = ((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((+(*g_70)) >= (*l_749)) <= ((safe_sub_func_uint32_t_u_u((((*l_780) = &g_409) != (g_783 = l_782)), (((p_23 , (p_23 >= p_24)) != (~((**l_748) = (**l_748)))) < (((*l_786) = ((safe_lshift_func_int8_t_s_u(((**g_103) ^= (((*g_258) = p_24) <= 0x2BL)), 2)) < p_24)) >= p_24)))) <= (-1L))) , (*l_741)), g_679)), g_539)))) ^ 1UL), p_23)) | (*g_108)));

            ;
        }
        else
        {
            unsigned ***l_802 = (void*)0;
            unsigned short l_803 = 1UL;
            for (g_539 = 16; (g_539 >= 12); --g_539)
            {
                const unsigned *l_801 = &g_60;
                const unsigned **l_800 = &l_801;
                const unsigned ***l_799 = &l_800;
                (*p_21) = func_44((safe_mod_func_int32_t_s_s(((((g_52 , p_22) != g_601) ^ (((+((+(*g_70)) < (safe_sub_func_int16_t_s_s(((*l_741) && (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((**l_748) , (((((l_798 , l_799) != (l_802 = l_802)) || l_803) == l_803) , 0x95D9L)), 6)), p_24))), 65535UL)))) || 0x750C721CL) & 1UL)) , (*p_21)), g_804)), (*g_258), l_805, p_23, (*g_70));
                for (l_805 = (-27); (l_805 <= (-24)); l_805 = safe_add_func_uint8_t_u_u(l_805, 3))
                {
                    unsigned short l_811 = 0xDAFFL;
                    l_811 ^= (func_44((*l_749), ((*g_104) & ((*g_108) , (((0xC01DC69EL <= (safe_unary_minus_func_int8_t_s(p_23))) >= 0x48912786L) == ((*l_733) = ((*l_750) = (safe_add_func_uint32_t_u_u((((*g_258) = ((*p_21) , l_803)) != (~0x69L)), l_803))))))), p_23, l_803, p_23) <= p_23);
                }
                (*p_21) = (*l_749);
            }
            return (*g_104);
        }

        ;
        ;
        ;
        ;
        l_732 |= (p_23 < ((p_24 | (*g_108)) && (l_812 < (safe_add_func_uint16_t_u_u(func_44(p_23, p_23, (*l_749), (*g_70), (p_24 && p_24)), g_80)))));
    }
    else
    {
        for (g_65 = 0; (g_65 == 5); g_65 = safe_add_func_uint8_t_u_u(g_65, 2))
        {
            int **l_817 = &g_108;
            p_21 = ((*l_817) = (void*)0);

            ;
            ;
        }

        ;
        (***g_737) = (***g_737);
    }

    ;
    ;
    ;
    ;
    ;
    ;
    return (*g_104);
}







static int func_29(int * p_30, int * p_31)
{
    unsigned char l_602 = 0x52L;
    int **l_603 = &g_601;
    unsigned *l_607 = &g_60;
    unsigned **l_606 = &l_607;
    unsigned ***l_608 = &l_606;
    unsigned char *l_609 = &g_222;
    const short l_647 = (-10L);
    char l_651 = 0xECL;
    const unsigned short *l_654 = &g_148;
    const unsigned short **l_653 = &l_654;
    int *l_655 = (void*)0;
    const char l_685 = (-1L);
    int l_697 = 1L;
    const unsigned char l_702 = 4UL;
    char ***l_712 = &g_103;
    char ***l_713 = &g_103;
    short l_723 = 0L;
    (*l_603) = &g_18;

    ;
    if ((safe_mul_func_uint8_t_u_u((*g_258), ((*l_609) ^= (((*l_608) = l_606) == &l_607)))))
    {
        char l_612 = (-1L);
        int *l_613 = &g_62;
        for (g_139 = 0; (g_139 <= 24); g_139 = safe_add_func_int8_t_s_s(g_139, 4))
        {
            (*l_603) = (*l_603);
        }
        (*l_613) |= (((**l_603) != ((*l_609) |= l_612)) <= l_612);
    }
    else
    {
        short l_618 = 1L;
        const short l_625 = 0x4972L;
        int l_627 = 0xA9DE29E1L;
        const unsigned short l_645 = 0xADD0L;
        unsigned short **l_661 = &g_410;
        unsigned l_688 = 4294967295UL;
        unsigned char l_709 = 0x43L;
        for (g_443 = 28; (g_443 < 54); ++g_443)
        {
            char l_628 = (-2L);
            short *l_629 = (void*)0;
            short *l_630 = &g_52;
            int l_643 = (-7L);
            unsigned l_672 = 0xE77618C1L;
            short l_686 = 0xF85DL;
            const short l_687 = 0L;
        }
        if ((((*l_608) == (*l_608)) , ((safe_mul_func_int8_t_s_s((((*g_258) = (l_627 = (**l_603))) && ((g_52 |= (safe_mod_func_uint8_t_u_u(((*l_609) |= (((l_625 != (g_65 && ((*g_601) = (*g_601)))) , l_625) & 248UL)), l_685))) && (**l_603))), 0xE5L)) & l_645)))
        {
            const unsigned short l_705 = 5UL;
            int *l_708 = &g_65;
            int *l_720 = &g_62;
            (*l_708) |= ((**l_603) = ((g_60 , (((safe_mul_func_uint16_t_u_u(9UL, l_705)) && ((safe_sub_func_uint8_t_u_u((*g_258), ((**g_103) = (*g_104)))) && ((void*)0 == &g_103))) == l_627)) != (*g_17)));
            (*l_720) |= (l_627 = (((l_709 > ((safe_lshift_func_uint8_t_u_u((1L >= (((l_712 = &g_103) == (g_18 , l_713)) , (safe_sub_func_uint16_t_u_u(0x0006L, (((**l_606) = ((safe_lshift_func_int8_t_s_s(((**g_103) = 0xBCL), 7)) , (1UL & ((*g_258) = ((safe_mod_func_int32_t_s_s((*p_30), (*p_31))) && (*l_708)))))) ^ g_222))))), 3)) != (**l_603))) , (*g_258)) || (**g_103)));
            (*p_31) ^= ((*l_708) = (safe_lshift_func_uint8_t_u_s((*l_720), (**g_103))));
        }
        else
        {
            return (*g_601);
        }
        (*p_30) = (*g_601);
    }
    return l_723;
}







static int * func_32(unsigned p_33)
{
    int l_50 = 2L;
    for (p_33 = 0; (p_33 <= 33); p_33++)
    {
        short *l_51 = &g_52;
        const int *l_72 = &g_18;
        int **l_595 = (void*)0;
        int **l_596 = (void*)0;
        int **l_597 = &g_108;
        int **l_598 = (void*)0;
        int *l_600 = &g_65;
        int **l_599 = &l_600;
        g_601 = ((*l_599) = ((*l_597) = ((65526UL < func_36((((safe_mul_func_int16_t_s_s((func_44(l_50, g_18, (g_18 >= (l_50 & p_33)), ((*l_51) ^= 0xBC5FL), (p_33 >= (p_33 < l_50))) , (*g_70)), 0x406CL)) > g_18) >= p_33), p_33, g_18, l_72, g_18)) , (void*)0)));

        ;
        ;
        ;
        ;
        return &g_65;


    }
    return &g_18;


}







static const unsigned short func_36(int p_37, unsigned p_38, const char p_39, const int * p_40, const char p_41)
{
    short *l_77 = &g_78;
    char *l_79 = &g_80;
    int l_85 = (-1L);
    int **l_86 = &g_17;
    char *l_96 = &g_80;
    unsigned l_137 = 1UL;
    int l_138 = 0x58AC2CC2L;
    short l_167 = 0x6A1EL;
    unsigned short * const l_271 = &g_148;
    unsigned short * const *l_270 = &l_271;
    int l_386 = 0x7E6AA0FAL;
    int l_391 = (-9L);
    unsigned l_450 = 1UL;
    const unsigned short *l_465 = (void*)0;
    const unsigned short **l_464 = &l_465;
    int *l_522 = &g_65;
    int l_540 = 0xDDB63E37L;
    short l_588 = 0x1F36L;
    if ((safe_rshift_func_uint8_t_u_u((p_38 == func_44((((safe_sub_func_int8_t_s_s(p_38, func_44(g_52, ((*p_40) >= (((((*l_77) |= 1L) || ((-6L) || ((*l_79) = g_52))) < (p_41 , (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((func_44(l_85, g_65, p_37, p_37, (*g_70)) | 0x69BB0CEAL), g_18)) , l_86) != l_86), (**l_86))))) && 0x53L)), p_41, g_52, g_18))) || (**l_86)) , (**l_86)), (**l_86), g_18, g_18, (**l_86))), p_41)))
    {
        int l_90 = 0x07BCD5AEL;
        const short *l_197 = &g_52;
        int l_204 = 0xC6042281L;
        short l_238 = 0L;
        int * const l_250 = &l_85;
        unsigned short * const *l_347 = &l_271;
        int l_363 = 0x8609CC27L;
        for (g_65 = (-5); (g_65 < (-1)); g_65++)
        {
            const int l_89 = 0xD5B9AADFL;
            return l_89;
        }
        (*g_17) = 0x4ABDC482L;
        if (l_90)
        {
            int l_105 = 0x173F2037L;
            unsigned *l_140 = &g_60;
            int *l_141 = &l_85;
            unsigned short *l_147 = &g_148;
            unsigned short l_202 = 0x28D7L;
            for (p_38 = 0; (p_38 <= 37); p_38 = safe_add_func_uint32_t_u_u(p_38, 6))
            {
                char **l_95 = (void*)0;
                char **l_97 = (void*)0;
                char **l_98 = &l_96;
                short l_106 = 0L;
                int l_107 = 0x3F56D1B7L;
                if ((l_107 = ((*g_17) = (0x3DL > (safe_rshift_func_int16_t_s_s(((void*)0 != &g_80), (((l_79 = (void*)0) != ((*l_98) = l_96)) , ((safe_lshift_func_int16_t_s_u((func_44(func_44(p_37, ((safe_mod_func_int16_t_s_s((**l_86), p_38)) , (&l_79 != g_103)), g_80, l_105, l_106), p_39, g_18, l_90, g_80) , p_39), (**l_86))) || p_39))))))))
                {
                    if (l_90)
                        break;
                    p_40 = &p_37;

                    ;
                    g_108 = &p_37;

                    ;
                }
                else
                {
                    int l_113 = (-9L);
                    for (g_67 = 0; (g_67 >= 43); g_67++)
                    {
                        unsigned char l_126 = 0x52L;
                        (**l_86) = (safe_rshift_func_int16_t_s_u(((*l_77) ^= (*g_70)), 6));
                        if (l_113)
                            break;
                        l_107 = (((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_78 , g_62), (safe_lshift_func_int8_t_s_u((255UL && (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((*g_17) = (l_113 & ((safe_sub_func_int8_t_s_s(0xBBL, g_18)) | (p_37 && l_90)))) | (g_78 ^ 0x97L)), g_80)), g_67))), g_65)))), (*g_108))) >= 0L) , l_126);
                    }
                }

                ;
            }

            ;
            ;
            ;
            (*l_141) ^= (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((((((!(safe_mod_func_uint16_t_u_u(l_90, l_105))) < p_37) , &g_67) == ((((((((*l_140) = (safe_mul_func_int16_t_s_s(l_90, func_44((**l_86), (g_139 |= ((**g_103) && ((g_78 ^ (func_44(g_62, l_90, l_137, l_105, (*g_70)) >= l_105)) <= l_138))), p_37, l_90, p_37)))) >= (*g_17)) | g_18) && g_80) , (**l_86)) >= l_105) , (void*)0)) , l_105) != p_41), 0xC631L)), p_37));
            (*g_108) |= (safe_sub_func_int32_t_s_s((**l_86), ((p_39 , (((*l_96) = (*l_141)) , (safe_unary_minus_func_uint32_t_u(((*l_140) |= (((9UL & ((*l_141) < ((*l_77) ^= 0x8BA3L))) & (*l_141)) > (**l_86))))))) , ((safe_sub_func_uint16_t_u_u(((*l_147) = g_65), 1L)) , 0xCEE9F7D8L))));
            for (l_85 = 0; (l_85 <= 3); l_85 = safe_add_func_uint8_t_u_u(l_85, 1))
            {
                unsigned l_159 = 3UL;
                unsigned l_160 = 4294967286UL;
                char l_161 = (-1L);
                short **l_185 = &l_77;
                unsigned short * const l_200 = &g_148;
                short l_220 = (-1L);
                int **l_251 = &g_108;
            }
        }
        else
        {
            unsigned l_252 = 0xA6AEE27AL;
            unsigned *l_253 = &g_60;
            unsigned l_277 = 0x1B903DA8L;
            (*l_250) = (((void*)0 == &l_77) > (func_44(((*l_253) |= l_252), (((((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((&g_222 == g_258), ((((**g_103) = ((+0x1BE9AE68L) == (&g_78 == &g_52))) && (*g_258)) || (*l_250)))), (*g_70))) , l_252) < 255UL) ^ l_252) != g_78), g_52, p_37, (*g_70)) != g_52));
            if ((*g_108))
            {
                int **l_259 = &g_108;
                unsigned **l_278 = &l_253;
                char ***l_279 = &g_103;
                (*l_259) = &p_37;

                ;
                (**l_259) &= ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(0x626586A6L, l_252)), 0)) & func_44(((*l_253) = func_44(((((*g_70) , (safe_lshift_func_int8_t_s_u(((**g_103) ^= (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((void*)0 != l_270) || g_62), 7)), g_65))), l_252))) | ((l_252 | p_38) && l_252)) < (*l_250)), p_41, g_139, p_38, (*g_70))), l_252, l_252, p_38, g_139));
                (**l_259) &= 0L;
                if ((((**l_86) , ((((((safe_rshift_func_uint8_t_u_u((*g_258), ((((safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(p_37, 4)))) <= (((l_277 , &p_38) != ((*l_278) = &l_252)) ^ p_39)) , &g_104) != ((*l_279) = &g_104)))) > (*p_40)) && (*g_70)) || p_38) , g_80) != (*l_250))) == 0xD2A0L))
                {
                    return l_277;


                }
                else
                {
                    unsigned l_302 = 1UL;
                    int **l_304 = (void*)0;
                    (*g_108) = (0x00L > (**g_103));
                    if ((*g_17))
                    {
                        char ** const *l_285 = &g_103;
                        char ** const **l_286 = &l_285;
                        int l_293 = 0x8C1A74C5L;
                        unsigned char *l_303 = &g_284;
                        int *l_305 = (void*)0;
                        int *l_306 = &l_204;
                        (**l_259) ^= (safe_mul_func_int8_t_s_s((*g_104), (safe_lshift_func_uint16_t_u_s(((**l_270) = (g_284 == ((((*l_286) = l_285) != (void*)0) && (safe_mod_func_uint16_t_u_u(0xAB09L, (*g_70)))))), 1))));
                        (*l_306) ^= ((((*g_104) ^ ((safe_add_func_int8_t_s_s(((**l_259) &= ((((~(safe_lshift_func_int8_t_s_u(((((&p_40 != (((0x42EEB042L <= l_293) , (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(((*l_303) = (safe_mod_func_int32_t_s_s(((*g_17) = 0x553ECEDDL), (((250UL == ((*g_258) = (*g_258))) > l_302) ^ (((*l_250) && (*g_104)) , 0x547229B2L))))), p_38)) < g_52) | (*g_70)), (-6L))), 0x3131L))) , l_304)) , p_39) < 6UL) , 1L), 4))) < p_38) != (*g_70)) | p_38)), p_39)) || 0xB38199B3L)) | (-1L)) > g_148);
                    }
                    else
                    {
                        int *l_308 = &g_62;
                        int **l_307 = &l_308;
                        (*g_17) = (*g_17);
                        (*l_307) = (g_108 = &g_65);

                        ;
                        ;
                        return g_80;
                    }
                    (*g_17) |= (safe_add_func_int16_t_s_s((*g_70), p_39));
                    return p_37;


                }
            }
            else
            {
                unsigned l_323 = 1UL;
                int l_324 = (-1L);
                l_138 &= (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((**g_103), 249UL)), func_44(l_277, (*g_258), ((**l_270) |= (safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((*p_40) , (*g_104)), (&p_40 != &p_40))) | l_277), (*g_258)))), (**l_86), (*g_70)))) != 4294967295UL), l_323)), l_324));
            }
        }

        ;
        ;
        ;
        for (g_67 = 0; (g_67 >= 43); g_67++)
        {
            char ***l_330 = &g_103;
            char ****l_329 = &l_330;
            int l_337 = (-5L);
            unsigned l_352 = 0UL;
            int l_379 = 1L;
            (*g_108) = (safe_sub_func_int8_t_s_s(((p_39 | (*l_250)) ^ (~(((*l_329) = &g_103) == (void*)0))), (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*l_250), (safe_rshift_func_uint8_t_u_s(((p_41 , p_38) == ((*l_250) == l_337)), l_337)))), l_337))));
            (**l_86) |= (0UL == (+(-8L)));
            for (g_78 = 1; (g_78 <= (-13)); g_78 = safe_sub_func_uint8_t_u_u(g_78, 8))
            {
                if ((*g_108))
                    break;
                if ((*p_40))
                {
                    int **l_340 = &g_108;
                    (*g_17) = (*l_250);
                    (*l_340) = &l_204;

                    ;
                }
                else
                {
                    if ((*g_17))
                        break;
                }
                (*l_250) = (*g_108);
                for (g_222 = (-22); (g_222 < 1); g_222++)
                {
                    (*g_108) = (*p_40);
                }
            }
            for (g_222 = 0; (g_222 != 16); g_222 = safe_add_func_uint8_t_u_u(g_222, 8))
            {
                unsigned char l_349 = 250UL;
                int *l_365 = &g_65;
                int l_375 = 0L;
                for (g_284 = 2; (g_284 != 5); g_284++)
                {
                    unsigned short * const **l_348 = &l_270;
                    char ** const *l_362 = (void*)0;
                    char ** const ** const l_361 = &l_362;
                    int l_364 = (-10L);
                    unsigned char *l_376 = &l_349;
                    unsigned short l_377 = 0UL;
                    int *l_378 = &l_364;
                    (*l_348) = l_347;
                    if ((((*g_104) = (((!(*g_70)) & ((l_349 ^ ((*l_77) ^= (*l_250))) != (safe_sub_func_uint32_t_u_u(l_352, (0x1FL <= ((*g_104) , ((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((+((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((((*g_108) |= 0x7AB7C326L) , 0UL) >= (l_361 == (void*)0)), p_41)), 8UL)) >= l_363)), p_38)), (*g_70))) | 65535UL) , (*p_40)) && l_364))))))) , 5L)) | 0x5EL))
                    {
                        l_365 = (*l_86);

                        ;
                        if (l_364)
                            continue;
                    }
                    else
                    {
                        int **l_366 = &l_365;
                        (*g_17) = (g_80 , (*p_40));
                        (*l_366) = l_365;
                    }
                    (*l_378) |= (safe_sub_func_uint16_t_u_u((*l_250), (p_38 == ((((((*l_376) = (p_41 , ((((((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((&l_364 != (p_41 , &g_62)), ((*p_40) <= (l_375 = (p_39 < ((p_41 || (*g_104)) || (*g_104))))))), (*g_70))) ^ (**l_86)) ^ g_62) , (*g_103)) != (void*)0) || (*l_365)))) > p_37) || l_377) > p_41) != g_65))));
                    p_37 = (**l_86);
                }

                ;
                l_379 = (*g_17);
            }
        }

        ;
    }
    else
    {
        int *l_384 = &g_18;
        (*g_108) = (*g_17);
        for (l_85 = (-12); (l_85 != 15); l_85++)
        {
            int **l_385 = &l_384;
            for (g_78 = 15; (g_78 == (-26)); g_78--)
            {
                p_37 ^= (*p_40);
            }
            (*l_385) = l_384;
            (*l_385) = (*l_385);
        }
    }

    ;
    ;

    (**l_86) |= l_386;
    if ((**l_86))
    {
        int *l_389 = &l_386;
        int l_390 = (-1L);
        unsigned *l_393 = (void*)0;
        unsigned **l_392 = &l_393;
        unsigned l_436 = 2UL;
        unsigned short l_456 = 0x1135L;
        const int *l_469 = &l_138;
        const int **l_468 = &l_469;
        char * const *l_505 = &l_96;
        int **l_528 = &g_108;
        short *l_555 = &g_78;
        unsigned short l_587 = 0x2683L;
        (*g_17) = (((((p_41 < p_37) > ((l_392 = ((((l_390 |= ((*l_389) = (safe_mul_func_uint8_t_u_u((*g_258), (g_284 == 0xA33DL))))) , (((**l_86) != (((((void*)0 != &l_77) || func_44((0x01L <= 251UL), (*g_258), (**l_86), l_391, p_39)) , (**l_86)) | g_222)) | 0L)) & (-2L)) , l_392)) == &l_393)) ^ p_38) , 0xC29DL) & (**l_86));
        if (l_390)
        {
            int l_398 = 0x15A37453L;
            unsigned char *l_399 = &g_222;
            unsigned short * const *l_421 = &l_271;
            const char *l_454 = &g_455;
            const char **l_453 = &l_454;
            const int **l_470 = (void*)0;
            int *l_471 = &l_85;
            unsigned char l_494 = 0x79L;
            int l_536 = (-4L);
            if (func_44(p_37, l_390, g_67, (&p_37 != (void*)0), ((*g_70) = ((((safe_lshift_func_uint16_t_u_u(p_38, ((**l_270) ^= ((l_390 != g_284) == (((safe_mod_func_uint32_t_u_u((l_398 = ((((**g_103) ^ 0xAEL) || g_139) , 0xC9355559L)), 1L)) | g_62) , p_39))))) , l_398) && l_398) || (**l_86)))))
            {
                unsigned l_406 = 0UL;
                unsigned short ***l_411 = &g_409;
                unsigned char *l_414 = &g_222;
                int *l_415 = (void*)0;
                int *l_416 = (void*)0;
                int l_417 = 0x0C5E9977L;
                int *l_418 = &l_138;
                unsigned *l_480 = &g_60;
                unsigned *l_481 = &g_430;
                unsigned *l_482 = (void*)0;
                unsigned *l_483 = &l_406;
                short l_492 = (-9L);
                if ((((void*)0 == l_399) != ((*g_258) < ((safe_lshift_func_uint16_t_u_s(g_62, 8)) | ((((*l_418) &= (l_417 &= (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(l_406, (safe_add_func_int32_t_s_s((*p_40), (((*l_411) = g_409) == ((safe_rshift_func_int16_t_s_s(((l_414 = &g_284) != (l_406 , l_96)), (*g_70))) , &g_410)))))) != (*p_40)), 10)))) & l_398) || p_41)))))
                {
                    const unsigned l_422 = 0xFB03A89FL;
                    unsigned l_431 = 0x0A6C8210L;
                    if ((safe_rshift_func_int8_t_s_s(((-1L) != p_38), (((((l_421 != (void*)0) < (*l_418)) , l_422) == l_398) & (&l_167 == (void*)0)))))
                    {
                        unsigned l_423 = 0xA02113A6L;
                        int **l_432 = (void*)0;
                        int **l_433 = &l_416;
                        l_431 = (func_44(l_423, func_44(((0xDC5D14B4L && (safe_add_func_uint8_t_u_u(((l_398 == ((**l_86) , (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(p_41, 6)), 2)))) > l_423), func_44((func_44(func_44(g_139, p_37, func_44(g_139, p_39, (**l_86), p_39, p_39), g_52, (*l_418)), p_38, (**l_86), p_38, g_430) , g_65), p_37, l_422, l_423, p_37)))) == 1L), g_78, p_41, (*l_418), p_38), p_39, g_148, g_80) != 4294967287UL);
                        (*l_433) = &p_37;

                        ;
                        (*l_418) = l_398;
                        (*l_418) = ((!((l_398 ^ (safe_mod_func_int8_t_s_s((**g_103), (l_436 = (*g_104))))) | (((safe_mod_func_int16_t_s_s((*g_70), p_37)) != g_222) | ((((8UL == (((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(7L, ((((*l_418) , g_443) , p_41) ^ 0xAE95L))), (**l_86))) , 0x3E1E3CCBL) | p_41)) != 65532UL) > (*g_258)) && g_62)))) > l_390);
                    }
                    else
                    {
                        int **l_444 = (void*)0;
                        int **l_445 = &g_108;
                        (*l_445) = &p_37;

                        ;
                        return p_38;


                    }

                    ;
                    (*g_17) &= ((*l_418) &= 0x3284EC7DL);
                    (*l_416) &= (((**g_103) = (**g_103)) > (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_398, ((**l_86) , (l_422 || l_450)))), func_44((safe_sub_func_int8_t_s_s((((void*)0 != l_453) || g_222), (l_456 > 0x14816318L))), p_41, l_422, (*g_70), (*g_70)))));
                }
                else
                {
                    const int l_463 = 0x8CFEE645L;
                    for (l_391 = 5; (l_391 < 7); ++l_391)
                    {
                        short l_461 = 0L;
                        unsigned *l_462 = &g_60;
                        (**l_86) = 0x9539541AL;
                        (*l_418) = ((**l_86) = (safe_lshift_func_uint16_t_u_u(((((*l_462) = (l_461 || p_39)) | l_390) || g_62), (~(254UL >= ((l_463 & 0x674DFA43L) && (((l_398 ^ (0x2746AA76L > l_463)) < g_62) , 0x1DL)))))));
                        (*l_418) ^= ((*g_70) > ((((((((p_37 | (*g_70)) , p_38) ^ (l_398 , ((l_464 == (((*l_389) = ((*g_70) > 0x893DL)) , &l_465)) >= 65534UL))) < 0L) || g_18) >= (*g_70)) , (void*)0) != &l_461));
                    }
                    for (g_52 = 22; (g_52 < 8); g_52--)
                    {
                        l_470 = l_468;

                        ;
                    }

                    ;
                    l_471 = &g_18;

                    ;
                }

                ;
                ;
                ;
                ;
                if ((safe_rshift_func_int8_t_s_s((**l_86), (safe_mod_func_int16_t_s_s((((func_44(func_44(((*l_483) = ((*l_481) ^= (safe_rshift_func_uint8_t_u_u((((*l_411) == (*l_411)) <= ((*l_480) = (((**l_86) != (+(((((void*)0 == g_17) == (safe_lshift_func_uint8_t_u_s(p_38, (((*g_258) <= (0xFD68C842L != (*l_469))) ^ p_41)))) && (*g_258)) >= 0xCAE6502AL))) | 0x5BE1L))), 1)))), (*g_258), p_39, p_41, p_39), (**l_86), (*l_471), p_39, p_38) & p_38) != (**l_86)) ^ 0xA14CL), p_37)))))
                {
                    unsigned l_490 = 4294967295UL;
                    int l_491 = 4L;
                    l_492 = (safe_lshift_func_uint16_t_u_s(((((**g_103) & ((safe_lshift_func_uint8_t_u_s(((*g_258) |= ((&g_60 != ((((*l_389) &= (p_37 || (!(((safe_rshift_func_int16_t_s_s(((((g_62 | ((*p_40) != g_222)) >= (((*l_480) = (*l_471)) && (l_490 = (*g_17)))) <= (**g_103)) , l_490), l_491)) == l_491) , (*l_469))))) , p_41) , &l_450)) ^ p_39)), 5)) >= p_37)) || (*l_471)) > (*g_104)), 6));
                    return l_491;


                }
                else
                {
                    int *l_493 = &l_417;
                    l_493 = &g_62;

                    ;
                    if (((*l_493) = (func_44(func_44(((p_39 == (l_418 == (void*)0)) , 4294967294UL), (((**g_103) = l_494) , (*g_258)), ((*p_40) ^ (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_41, (safe_lshift_func_int8_t_s_u(p_39, 7)))), 3)), p_37)), 0xE4DAL))), (*g_70), (*g_70)), p_37, p_39, g_455, p_38) , (*p_40))))
                    {
                        (*l_418) |= (*p_40);
                        (*l_468) = (*l_86);

                        ;
                        (*g_17) = 0xB625FD2AL;
                    }
                    else
                    {
                        unsigned char l_506 = 0x80L;
                        int *l_510 = &l_417;
                        (*l_468) = &p_37;

                        ;
                        (*l_418) |= (func_44(p_39, (*l_471), p_37, (((*l_77) &= ((func_44((((p_38 , (((l_505 != &l_454) , (&p_41 == &p_39)) && (((*g_70) = ((**g_103) <= 255UL)) || 65527UL))) >= l_506) & g_80), (*g_258), p_37, p_38, p_38) && (*g_17)) < g_430)) , (**l_468)), p_41) , (*p_40));
                        (*l_493) = (*g_17);
                        (*l_510) |= func_44(p_39, (*g_258), (p_41 ^ ((safe_unary_minus_func_int32_t_s((*p_40))) & ((**l_468) >= ((*l_414) &= (*l_493))))), ((*g_258) && (*l_493)), (((safe_lshift_func_int8_t_s_u((!(*l_418)), 3)) == (**l_86)) != l_506));
                    }

                    ;
                    p_37 ^= (*g_17);
                }

                ;
            }
            else
            {
                short l_523 = 0xBFA7L;
                for (l_450 = (-25); (l_450 < 43); ++l_450)
                {
                    (*l_471) ^= (*p_40);
                    for (l_391 = 0; (l_391 == 26); l_391 = safe_add_func_uint8_t_u_u(l_391, 1))
                    {
                        (**l_86) = (p_37 == (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((*g_70), 15)) >= p_39), p_41)));
                    }
                }
                for (l_138 = 0; (l_138 == 16); l_138 = safe_add_func_int16_t_s_s(l_138, 8))
                {
                    int **l_521 = &l_471;
                    l_522 = ((*l_521) = &p_37);

                    ;
                    ;
                    l_523 = ((*g_17) = (p_37 = (**l_521)));
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            if ((safe_add_func_uint32_t_u_u(g_148, (~(safe_rshift_func_int8_t_s_u(((*g_104) = 1L), (*g_258)))))))
            {
                int ***l_529 = &l_528;
                unsigned *l_530 = &g_430;
                short l_533 = 0L;
                (*l_522) = func_44(g_78, ((*g_258) = (((&g_17 == ((*l_529) = l_528)) ^ ((*l_530) = p_37)) , (safe_sub_func_uint32_t_u_u(l_533, ((safe_lshift_func_uint16_t_u_u(g_65, 14)) || (0UL != (l_536 ^= g_52))))))), (g_539 &= ((**l_270) ^= (safe_lshift_func_int8_t_s_u((g_455 &= ((**g_103) ^= (g_139 , 0x58L))), 3)))), p_41, l_540);
            }
            else
            {
                (*l_522) &= (safe_unary_minus_func_uint32_t_u(g_18));
                p_40 = &g_18;

                ;
            }
        }
        else
        {
            unsigned l_544 = 4294967292UL;
            unsigned short *l_546 = &g_148;
            unsigned short **l_545 = &l_546;
            int l_550 = 0L;
            unsigned short ***l_580 = &g_409;
            (*g_17) = (safe_add_func_int8_t_s_s((((*p_40) >= ((*g_70) & (**l_86))) >= l_544), (*g_104)));
            (**l_86) = (((*l_545) = ((*g_409) = (void*)0)) != (void*)0);

            ;
            if ((safe_mod_func_uint32_t_u_u(g_430, ((*p_40) , l_544))))
            {
                unsigned *l_549 = &g_60;
                int l_564 = (-1L);
                if ((((l_550 &= ((*l_549) = 4294967295UL)) < (0x4D54L && (safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((((((p_37 , &g_539) != l_555) || ((safe_mul_func_uint8_t_u_u(p_37, ((safe_add_func_int8_t_s_s((*g_104), ((safe_mod_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((-5L), p_37)) , p_37) & (**g_103)), 8UL)) < 0x83L))) > 0UL))) , p_39)) , l_564) | 255UL), (*g_258))) || 4294967287UL) , p_37), 2)))) , l_564))
                {
                    return p_39;


                }
                else
                {
                    unsigned l_567 = 0x8C08D05BL;
                    int *l_572 = &l_390;
                    (*l_572) |= ((*g_17) = (safe_rshift_func_int16_t_s_s(((&g_70 != (l_564 , &g_70)) && (((*g_258) = (+func_44(l_567, p_41, (safe_mul_func_uint16_t_u_u((p_37 && l_550), (safe_sub_func_uint8_t_u_u(func_44(l_544, (*g_258), p_39, (*g_70), p_37), p_39)))), l_544, p_41))) | l_544)), p_38)));
                }
            }
            else
            {
                const int l_577 = 0x61017FAEL;
                int l_581 = (-1L);
                int *l_582 = &l_550;
                l_550 = (*g_17);
                (*l_582) |= ((func_44((safe_rshift_func_int8_t_s_s(((((!(((((*l_96) |= (l_544 == p_37)) & (*l_522)) ^ (safe_add_func_int8_t_s_s((((((*g_258) = (((!l_577) & (**l_86)) , (safe_mod_func_int32_t_s_s(0x03639E58L, (*g_17))))) && (&l_464 != (l_580 = &g_409))) , (void*)0) == &p_41), l_581))) == p_41)) , 1UL) <= (**l_468)) <= p_38), 1)), p_38, g_455, p_37, (*g_70)) > p_38) != p_41);
            }
        }

        ;
        ;
        (*g_17) = ((1UL != func_44((*l_522), ((*p_40) & g_455), ((*g_104) | p_37), p_39, ((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_37, (p_38 & p_39))) , 65535UL), l_587)) >= 1L))) >= l_588);
    }
    else
    {
        int *l_591 = &l_138;
        for (g_539 = (-15); (g_539 > (-14)); g_539 = safe_add_func_uint8_t_u_u(g_539, 3))
        {
            int **l_592 = &l_522;
            (*l_592) = l_591;

            ;
            for (g_139 = (-14); (g_139 < 27); g_139++)
            {
                (*l_592) = &p_37;

                ;
            }

            ;
            (**l_592) = (p_37 , (*g_17));
            (**l_592) = 0x8D548A9DL;
        }

        ;
        g_108 = (*l_86);

        ;
    }


    ;
    return p_39;


}







static unsigned char func_44(unsigned p_45, unsigned char p_46, unsigned short p_47, short p_48, short p_49)
{
    short *l_53 = &g_52;
    int l_56 = 0x5C4B79A9L;
    int *l_58 = &l_56;
    int **l_57 = &l_58;
    unsigned *l_59 = &g_60;
    int *l_61 = &g_62;
    int l_63 = 0L;
    int *l_64 = &g_65;
    unsigned char *l_66 = &g_67;
    short *l_69 = &g_52;
    short **l_71 = &l_69;
    (*l_64) &= (l_63 &= ((*l_61) |= (((void*)0 == l_53) ^ (p_45 = ((*l_59) = (safe_add_func_int32_t_s_s(l_56, (((*l_57) = (((((((((l_56 || p_49) ^ p_48) & ((void*)0 == &g_52)) && (0x5EBAE88BL >= p_49)) <= g_18) , l_56) , l_56) , l_56) , &l_56)) == &l_56))))))));
    (*l_57) = ((((((((g_52 != p_46) != ((*l_66) &= g_62)) || g_65) < p_49) < ((safe_unary_minus_func_uint8_t_u(p_49)) , 1L)) , l_53) == ((*l_71) = (g_70 = l_69))) , (*l_57));

    ;
    return g_60;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_1073, "g_1073", print_hash_value);
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1237, "g_1237", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
