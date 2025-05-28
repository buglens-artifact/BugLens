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
   short f0;
   short f1;
   char f2;
   int f3;
   unsigned f4;
};


static struct S0 g_2 = {0x9807L,0L,3L,-1L,4294967286UL};
static int g_7 = 0xFC3A065CL;
static unsigned char g_8 = 2UL;
static short g_105 = 0L;
static int g_116 = 0xAE825D0DL;
static unsigned g_127 = 0UL;
static unsigned g_175 = 4294967286UL;
static unsigned short g_195 = 0xB4CFL;
static int g_228 = 0x54B7D523L;
static short g_280 = 0x7231L;
static int g_282 = 0x9CDFA422L;
static unsigned g_289 = 4294967295UL;
static unsigned g_329 = 1UL;
static struct S0 g_333 = {-10L,0x116EL,-1L,-1L,0x2E57F3D4L};
static unsigned g_366 = 4294967293UL;
static unsigned g_373 = 4294967286UL;
static unsigned g_398 = 0xFD3B0A5FL;
static int g_403 = (-1L);
static short g_426 = (-2L);
static unsigned char g_428 = 1UL;
static int g_442 = 0x1E1CBA1BL;
static int g_447 = 0xE59A3CBAL;
static unsigned short g_455 = 0x5649L;
static unsigned g_494 = 0x74DAA309L;
static struct S0 g_554 = {4L,0x6B15L,0xD8L,0x2875343DL,4294967295UL};
static unsigned short g_641 = 65531UL;
static unsigned short g_671 = 2UL;
static unsigned char g_672 = 1UL;
static char g_756 = 0x3CL;
static unsigned g_806 = 4294967286UL;
static unsigned g_951 = 4294967295UL;
static int g_998 = (-1L);
static int g_999 = 0L;
static int g_1000 = 0L;
static int g_1006 = 0x31F507E5L;
static short g_1007 = 0xBD7DL;
static char g_1008 = (-2L);
static short g_1010 = 0x9BADL;
static int g_1012 = (-1L);
static unsigned char g_1015 = 0xC4L;
static char g_1155 = 0L;
static char g_1177 = (-1L);
static unsigned short g_1178 = 4UL;
static int g_1202 = 1L;
static unsigned g_1204 = 4294967295UL;
static char g_1221 = 0x24L;
static unsigned g_1228 = 1UL;
static char g_1239 = 0x38L;
static unsigned g_1245 = 0x08F276E0L;
static unsigned g_1254 = 9UL;



static unsigned char func_1(void);
static unsigned short func_11(short p_12, int p_13, unsigned p_14);
static unsigned char func_24(unsigned p_25, unsigned char p_26);
static unsigned func_27(unsigned p_28, unsigned p_29);
static struct S0 func_30(short p_31, unsigned short p_32, unsigned short p_33);
static unsigned char func_38(unsigned p_39, unsigned p_40);
static unsigned char func_45(unsigned char p_46, int p_47, unsigned short p_48, unsigned p_49);
static unsigned char func_50(char p_51, short p_52, unsigned short p_53, unsigned p_54, unsigned short p_55);
static char func_56(unsigned p_57, char p_58);
static int func_61(unsigned p_62, char p_63, char p_64, char p_65, unsigned char p_66);
static unsigned char func_1(void)
{
    struct S0 l_3 = {0x24C0L,0L,0x15L,0xC3C39BA0L,0UL};
    int l_1222 = 1L;
    char l_1226 = 0x76L;
    int l_1227 = 0x30518DF9L;
    unsigned l_1251 = 0xD28761F7L;
    unsigned short l_1298 = 65535UL;
    unsigned l_1305 = 0x353A9D5CL;
    unsigned l_1308 = 0x7E4E7DC2L;
    unsigned char l_1321 = 5UL;
    l_3 = g_2;
    for (g_2.f3 = 0; (g_2.f3 >= (-7)); g_2.f3--)
    {
        int l_6 = 0x336DE018L;
        int l_21 = 1L;
        int l_1225 = 0x9A1716F9L;
        struct S0 l_1309 = {-2L,1L,0x6AL,0L,4UL};
        unsigned short l_1316 = 0xDE26L;
        --g_8;
        if ((8UL > (g_2.f3 | (l_1222 = ((l_6 >= (!(g_1221 |= func_11(g_7, (safe_sub_func_int8_t_s_s(g_2.f3, ((l_21 = (safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s(g_2.f1, g_7)) ^ g_8), 0x0C8FL))) < 0x3800L))), l_3.f2)))) > l_6)))))
        {
            char l_1223 = 9L;
            int l_1224 = 0x8D0711D6L;
            g_1228--;
        }
        else
        {
            unsigned char l_1231 = 0xFFL;
            int l_1232 = 0x872E46BEL;
            l_1222 ^= g_1006;
            l_1232 |= l_1231;
        }
        if ((g_116 = (safe_mod_func_int8_t_s_s((((g_366 = g_2.f3) , (l_3.f3 , (g_127 == (((g_1178++) > (g_333.f1 = (func_24((l_1222 = (l_1226 & g_8)), g_1239) != g_366))) , (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((((((safe_unary_minus_func_uint16_t_u(65531UL)) || (-5L)) ^ g_1202) ^ g_447) | 1UL), 11)), g_554.f0)))))) < g_1245), g_554.f1))))
        {
            int l_1246 = 1L;
            unsigned l_1247 = 0x3604484AL;
            unsigned l_1250 = 0xD156B162L;
            int l_1270 = 0L;
            int l_1290 = 8L;
            l_1225 = (g_998 = func_56(func_45((g_428 |= ((l_1227 = l_1246) <= func_61(l_3.f0, l_1247, l_3.f3, (safe_div_func_int16_t_s_s(l_1222, g_175)), l_1225))), l_1250, l_1251, l_1247), g_1015));
            if ((safe_add_func_uint32_t_u_u(func_56((g_1254 & (((~(l_21 = ((0xE42D6241L ^ ((g_289 ^ (safe_add_func_int8_t_s_s(l_6, (safe_div_func_uint16_t_u_u((((g_8 &= g_1239) != (safe_mod_func_uint8_t_u_u(l_1225, g_554.f4))) | (g_366 , ((0xDAABL != 0L) == g_373))), 0x3434L))))) , g_1008)) > g_806))) , g_806) || l_21)), g_999), (-1L))))
            {
                if (l_1246)
                    break;
                return g_333.f2;
            }
            else
            {
                unsigned short l_1265 = 0x92C2L;
                l_1225 = func_45(((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_1250, (l_1227 = ((func_11(((g_641 = (l_1265 & (safe_lshift_func_int8_t_s_u(g_1254, (g_105 != g_333.f2))))) & (safe_rshift_func_uint16_t_u_u(func_24(l_1222, g_333.f0), l_1247))), l_1270, g_366) , 0L) , 0x13L)))) , l_1226), 11)) <= l_1265), l_1251, g_1245, g_2.f3);
                for (g_554.f1 = 0; (g_554.f1 < 20); g_554.f1 = safe_add_func_uint32_t_u_u(g_554.f1, 1))
                {
                    g_1000 &= g_1012;
                }
                for (l_1265 = 0; (l_1265 < 5); ++l_1265)
                {
                    unsigned short l_1285 = 0x6EB4L;
                    for (g_428 = 26; (g_428 != 57); g_428++)
                    {
                        if (g_1000)
                            break;
                        if (g_554.f1)
                            continue;
                    }
                    l_1227 = (g_1202 = (safe_mod_func_int16_t_s_s((g_554.f1 = g_1012), (safe_add_func_uint8_t_u_u(func_38(g_442, l_1265), ((0xC731L < (safe_sub_func_uint32_t_u_u(0xFA5A1D79L, l_3.f0))) <= (((func_24((((safe_add_func_uint8_t_u_u(g_366, 1L)) , l_1285) ^ 0x52L), g_329) , g_1228) , l_1265) | g_1239)))))));
                    for (g_1007 = 0; (g_1007 >= (-27)); --g_1007)
                    {
                        return g_1177;
                    }
                    for (g_426 = 27; (g_426 >= 4); g_426 = safe_sub_func_int8_t_s_s(g_426, 2))
                    {
                        return l_1226;
                    }
                }
                if (g_1000)
                    break;
            }
            l_1290 |= l_1222;
            l_1222 = (safe_rshift_func_int8_t_s_s(l_1247, 2));
        }
        else
        {
            unsigned short l_1293 = 65529UL;
            l_1309 = func_30(l_1293, ((safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(((((g_999 , func_61((l_1298 > 0xA9L), (g_1177 = (l_6 |= ((g_455 = ((g_1178 & (l_1293 <= ((((g_2.f1 = ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(l_1305, (safe_sub_func_uint16_t_u_u(l_21, (g_998 , 1UL))))) & 0UL), 4294967286UL)) || g_671)) | 0xFE88L) && l_3.f4) > 0xD8L))) & l_1225)) ^ g_554.f0))), l_1225, l_21, l_1222)) <= g_554.f2) | g_554.f2) || 9L), l_1293)) & g_366) & 0L) , l_1227), 8)) ^ 8UL), l_1308);
        }
        l_1227 = (safe_lshift_func_uint16_t_u_u(g_1015, (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(l_1316, 15)) , (g_1245 != g_1221)), (((safe_rshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(g_671, l_3.f0)), ((0x2963L && (g_554.f1 = (-2L))) == ((l_1225 = 4294967295UL) , l_1226)))) && 0xBE17L) < g_7)))));
    }
    l_1227 &= (((g_998 & (g_228 = l_3.f4)) , g_289) , ((l_1321 , g_2.f0) < 0x33ABB5BBL));
    return g_442;
}







static unsigned short func_11(short p_12, int p_13, unsigned p_14)
{
    unsigned short l_60 = 0x1939L;
    unsigned l_809 = 4294967295UL;
    int l_832 = 0x56BFFCF7L;
    int l_833 = 0xD1587DE0L;
    struct S0 l_838 = {0xDE60L,0x225BL,0x7DL,-6L,0xF5FBDE30L};
    short l_878 = 5L;
    char l_881 = 0x3EL;
    int l_950 = 3L;
    unsigned l_970 = 0x2F81534AL;
    int l_1066 = (-10L);
    char l_1137 = 1L;
    unsigned l_1138 = 7UL;
    int l_1166 = (-9L);
    int l_1174 = 0x31B8FC18L;
    unsigned l_1186 = 1UL;
    unsigned l_1195 = 4294967295UL;
    int l_1199 = (-1L);
    for (p_14 = (-28); (p_14 <= 44); p_14 = safe_add_func_int32_t_s_s(p_14, 3))
    {
        short l_59 = 0x4EFCL;
        unsigned short l_670 = 65535UL;
        l_809 = (1UL & (p_14 , (func_24((func_27((func_30(p_13, (p_14 != ((safe_lshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s(g_2.f3, func_38(((g_672 &= (g_671 &= (safe_sub_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s(p_13, func_45(func_50(func_56((l_60 ^= (0x0DEEL || ((p_14 & 0L) & l_59))), p_12), p_14, p_12, p_14, p_13), p_14, p_12, p_14))) && 1UL) & l_670) ^ g_366), 0UL)))) > l_59), p_12))) && l_60), g_2.f3)) || 0xE91EL)), g_2.f3) , l_60), p_14) , 4294967293UL), p_12) == p_13)));
        for (g_7 = 0; (g_7 == 6); g_7 = safe_add_func_uint8_t_u_u(g_7, 3))
        {
            for (g_373 = (-27); (g_373 != 1); g_373 = safe_add_func_uint8_t_u_u(g_373, 1))
            {
                for (g_2.f0 = 0; (g_2.f0 > 7); g_2.f0 = safe_add_func_uint8_t_u_u(g_2.f0, 3))
                {
                    g_282 = p_13;
                }
            }
        }
        g_442 = (0x8A176A09L >= p_12);
    }
    if ((safe_add_func_uint8_t_u_u((((-1L) && ((safe_add_func_int8_t_s_s(l_60, (p_14 <= (safe_lshift_func_int8_t_s_s(p_14, p_14))))) | (l_809 < ((l_60 <= l_809) != p_13)))) == g_8), g_116)))
    {
        int l_824 = 0x2C40D9A2L;
        unsigned char l_855 = 8UL;
        int l_862 = 0x38078AB5L;
        int l_882 = 0x95653DDBL;
        int l_888 = (-1L);
        struct S0 l_916 = {0xD92AL,0x6831L,0xECL,0L,0xD452C2C0L};
        int l_945 = 1L;
        int l_947 = 0xDC15C993L;
        int l_948 = (-1L);
        char l_967 = 0x1BL;
        unsigned l_992 = 3UL;
        char l_1041 = (-8L);
        for (g_554.f0 = 0; (g_554.f0 > 11); g_554.f0 = safe_add_func_int32_t_s_s(g_554.f0, 4))
        {
            unsigned l_825 = 5UL;
            l_825 ^= l_824;
            l_833 |= (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_832 = (g_333.f0 & (safe_lshift_func_uint16_t_u_u(((-6L) < (0xB27CF0D0L >= (l_825 ^ (++g_455)))), (((safe_rshift_func_uint16_t_u_s(l_60, g_671)) == (p_14 = (l_838 , (((safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((g_428 = (safe_rshift_func_int16_t_s_u(1L, (safe_add_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(g_756, l_855)), l_855)), 0x48E5CC87L)) , 255UL), 0x3CL))))), l_838.f0)), l_838.f3)), l_855)) | p_12) ^ g_2.f0)))) ^ p_12))))), 6)), 0xA58A38B8L));
        }
        if ((p_13 = ((safe_rshift_func_uint8_t_u_u((l_855 && (p_14 = ((g_671 &= func_61(func_56(func_56(p_13, (0x876CL & g_280)), (g_641 , (safe_add_func_uint32_t_u_u((p_12 || (safe_mod_func_uint16_t_u_u((2L < (-1L)), g_494))), 1UL)))), l_824, l_60, l_855, p_13)) & g_366))), l_862)) && g_756)))
        {
            int l_869 = 0xAD455667L;
            int l_870 = 0L;
            struct S0 l_877 = {1L,0L,0xBEL,-8L,0x14A7F8C8L};
            unsigned l_879 = 0xFC240C98L;
            char l_880 = (-10L);
            int l_891 = 0xC590282BL;
            int l_943 = 8L;
            int l_944 = 9L;
            int l_946 = (-2L);
            int l_949 = (-1L);
            if ((l_882 |= (safe_lshift_func_int16_t_s_s((g_554.f1 &= ((safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(l_838.f2, ((l_833 = (((l_869 = 0xF64FL) != (l_870 , (+((func_61(((((g_105 && (safe_rshift_func_uint16_t_u_u(l_870, (~l_833)))) && (g_554.f4 | (safe_rshift_func_int16_t_s_s((-1L), (l_879 = func_61((p_14 ^= (safe_sub_func_int8_t_s_s((l_877 , 0x95L), p_13))), l_878, g_428, g_398, p_12)))))) , p_12) != l_880), g_403, l_877.f3, p_13, g_426) & l_880) && l_881)))) ^ g_554.f2)) , 0x32FF020BL))) | p_13) != g_2.f3), 0x7AL)) < p_12)), 8))))
            {
                unsigned l_885 = 7UL;
                struct S0 l_913 = {-1L,0x3A10L,0xBFL,-3L,1UL};
                for (g_329 = (-19); (g_329 < 49); g_329++)
                {
                    if (g_447)
                        break;
                }
                l_885++;
                l_870 = p_13;
                if (l_888)
                {
                    int l_900 = (-1L);
                    int l_905 = 1L;
                    struct S0 l_912 = {0xBAEEL,0L,0xD4L,-10L,0x37CBDCF3L};
                    g_403 ^= (((func_27((safe_lshift_func_uint8_t_u_s(p_13, 5)), l_891) < (func_24(p_12, (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_900 |= (((-8L) ^ (safe_sub_func_int32_t_s_s((l_832 = p_14), (--g_806)))) ^ g_447)), (safe_mod_func_int32_t_s_s(0x18016193L, g_8)))), p_14))) < l_881)) == (-7L)) & 0UL);
                    if ((p_13 = func_45(g_398, func_24(l_877.f2, l_832), (l_877.f0 < (l_905 = ((((4294967292UL != p_13) <= (safe_div_func_uint8_t_u_u(l_885, p_12))) , 0x65EC8D8FL) > 4294967292UL))), p_12)))
                    {
                        p_13 &= ((((safe_rshift_func_int16_t_s_u(0x98FBL, (l_838.f2 ^ 6L))) <= g_329) , 7UL) != g_2.f4);
                    }
                    else
                    {
                        l_912 = func_30(g_806, (--g_455), ((g_116 || (safe_lshift_func_int16_t_s_s(g_2.f2, p_14))) != (g_442 < 65535UL)));
                    }
                    l_877 = l_913;
                }
                else
                {
                    p_13 = (safe_div_func_int8_t_s_s(g_672, (g_333 , (g_2.f1 , g_333.f3))));
                    l_916 = g_333;
                }
            }
            else
            {
                unsigned short l_925 = 0xE00DL;
                int l_926 = 0L;
                p_13 = ((func_50((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((func_24((safe_div_func_int32_t_s_s(((0x36828241L | (((l_833 |= p_14) , ((!(l_916.f2 >= (l_877.f3 && p_13))) , ((p_12 , (func_38(((l_926 = (((safe_div_func_uint16_t_u_u(func_38(g_2.f4, p_14), l_60)) >= l_925) ^ 4294967292UL)) ^ g_329), g_671) , 0x13ABL)) == 0x3055L))) <= g_756)) > l_877.f0), 0x01F6A1F2L)), g_329) && l_877.f2), 0x8992L)), l_888)), g_175, p_14, l_838.f0, g_329) ^ g_2.f3) < l_891);
                p_13 ^= (g_282 ^= (safe_sub_func_int16_t_s_s(p_14, 0xA6A8L)));
                g_442 |= (g_403 = ((p_13 ^ func_24((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(p_12, (((((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_554.f4, func_56(p_13, p_12))), p_13)) , l_838) , func_61(l_878, p_12, p_14, l_838.f1, p_13)) <= g_428) ^ 0x567CC2EEL))) , l_925), l_838.f0)), p_13)) && l_925));
            }
            p_13 = (((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((l_870 = 0xFAL), (0xB0B3L == g_554.f1))), (l_943 |= p_12))), 5)) >= (l_944 &= ((!(l_877.f1 & ((func_24(g_333.f4, func_24(p_12, g_2.f4)) , p_13) & g_105))) , p_12))) || l_838.f4);
            --g_951;
        }
        else
        {
            unsigned char l_962 = 255UL;
            unsigned char l_972 = 0x10L;
            int l_987 = 0xB79777D5L;
            int l_988 = 0x9093C3E1L;
            int l_1001 = 1L;
            int l_1003 = 0x93A93C2EL;
            int l_1004 = 0L;
            int l_1033 = 1L;
            struct S0 l_1034 = {0x3450L,-1L,-1L,0x47C99C57L,1UL};
            g_554 = func_30((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(p_13, (l_838.f2 | p_13))), (safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((l_945 = func_61((l_962 >= 0xBB1AL), g_329, (l_950 &= (!l_916.f0)), (safe_div_func_int8_t_s_s(((func_38(p_14, p_14) , g_228) && 0x7398L), l_916.f1)), p_12)), l_962)) >= 0xB15A5DDBL), p_12)))), g_554.f4, l_888);
            g_442 = func_56(func_24((l_962 < ((safe_div_func_uint8_t_u_u((func_27(g_127, l_962) < 0x60L), (g_428 = (g_672--)))) > (((p_13 ^ ((0xB7L != func_24(l_970, p_14)) , p_13)) <= 8L) | l_838.f0))), l_916.f3), p_14);
            g_282 = (safe_unary_minus_func_int8_t_s(l_962));
            if ((g_554.f1 > ((((g_333.f2 = (p_14 == g_105)) <= (g_672 &= l_838.f4)) , (func_30(p_14, g_554.f2, l_972) , (safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(g_442, g_8)) || l_972), p_12)))) & l_950)))
            {
                char l_993 = 0x1CL;
                struct S0 l_994 = {-10L,-4L,0x93L,0xC0D3A071L,0x0A642C3DL};
                int l_995 = 0x1A682D99L;
                int l_1002 = 0xCF9A4630L;
                int l_1005 = 0x258E12C4L;
                int l_1011 = 9L;
                int l_1013 = 1L;
                if (func_24(g_671, l_882))
                {
                    unsigned short l_977 = 65529UL;
                    int l_986 = (-1L);
                    unsigned short l_991 = 0x11D1L;
                    int l_996 = 5L;
                    int l_997 = 0L;
                    int l_1009 = (-1L);
                    int l_1014 = (-8L);
                    l_832 = p_14;
                    l_994 = func_30(((((p_12 & ((p_14 ^ l_977) != (l_972 < (safe_sub_func_uint32_t_u_u((!p_14), ((func_27(p_13, ((l_986 = (safe_div_func_int8_t_s_s((l_992 = (safe_add_func_uint32_t_u_u(0x1DC4876DL, ((safe_add_func_int16_t_s_s(((--g_428) | func_27(l_832, (l_987 < g_554.f1))), 5UL)) != l_991)))), p_13))) >= 0xFACC7E7EL)) | p_13) >= p_12)))))) , (-10L)) | 0x97F6L) || p_12), l_838.f2, l_993);
                    ++g_1015;
                }
                else
                {
                    l_945 = l_995;
                }
            }
            else
            {
                struct S0 l_1030 = {7L,0xF585L,0xD3L,-1L,0xCDFEE21EL};
                g_1000 = (func_61(((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(((g_442 = l_988) | func_50(((0x9EL >= (~(safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((p_12 < (l_1004 > ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_950 ^= g_228), p_12)), (l_1030 , func_24(((safe_add_func_uint32_t_u_u((l_948 || ((-2L) > g_333.f3)), l_916.f2)) <= p_13), p_13)))) , p_13))), l_838.f1)), l_967)))) , g_366), l_967, l_1033, l_888, p_12)), p_13)) || g_333.f0), g_366)) , l_1034) , (-7L)) | 0x2151L), l_1004, p_12, g_426, p_13) <= l_1030.f3);
            }
        }
        if ((safe_sub_func_int8_t_s_s((!(0x9A1BL != l_916.f4)), (safe_sub_func_int32_t_s_s(p_13, (safe_sub_func_int8_t_s_s((((func_24(l_838.f4, ((g_282 , (g_105 , l_855)) , g_554.f3)) | 0x9CL) != 1UL) || l_970), l_1041)))))))
        {
            for (g_1015 = 0; (g_1015 <= 25); g_1015 = safe_add_func_uint32_t_u_u(g_1015, 1))
            {
                unsigned short l_1044 = 1UL;
                p_13 = p_13;
                if (p_12)
                    continue;
                if (g_494)
                    continue;
                l_1044--;
            }
        }
        else
        {
            int l_1063 = 0L;
            int l_1064 = (-1L);
            int l_1065 = (-3L);
            short l_1121 = (-1L);
            p_13 = (p_12 || (func_38(g_641, (g_127--)) ^ (((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((l_1065 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(g_1007, (g_1000 = ((l_1064 = func_24((p_14 ^= g_366), (l_833 = ((safe_lshift_func_uint8_t_u_u(((((l_881 >= p_12) | (l_950 = (65528UL < l_838.f1))) == g_756) && 0xB5E5EAE7L), l_1063)) , g_116)))) & 0x8BL)))) || p_14), 0)) , l_992), 3)), l_809))), l_1066)), g_554.f3)) != g_1010) ^ g_554.f4)));
            if ((safe_add_func_int16_t_s_s(0x8987L, ((((safe_sub_func_int8_t_s_s((((+g_2.f3) > func_50(l_838.f3, ((safe_sub_func_int8_t_s_s(p_12, func_50(p_12, func_27(g_554.f0, func_38(p_13, g_426)), g_447, g_999, l_992))) , g_999), g_447, g_554.f4, l_1064)) , p_12), g_756)) & l_1041) || p_14) > g_426))))
            {
                int l_1087 = 0x06304CF8L;
                g_116 = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((g_672 = (l_916 , ((safe_add_func_int8_t_s_s(p_12, 0x1CL)) != ((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s((!((l_888 |= (((((safe_div_func_uint32_t_u_u(g_998, (p_13 | ((p_13 > (((((((g_998 > (g_282 > l_916.f0)) >= g_7) || 1UL) > l_916.f1) && p_12) == l_1087) & l_948)) , g_554.f1)))) == g_398) <= p_13) != l_832) ^ 0xF37EL)) != g_554.f1)), p_13)), p_12)) & 0UL)))), 0x5CL)), p_13)), 2UL));
                if ((safe_rshift_func_uint8_t_u_s((p_14 , g_554.f1), 7)))
                {
                    g_116 &= p_14;
                }
                else
                {
                    int l_1096 = 0xDC22AB80L;
                    int l_1101 = (-7L);
                    l_1101 |= ((safe_sub_func_uint8_t_u_u((0xA1D1L | (((p_14 |= (g_806 = ((safe_mod_func_int8_t_s_s((l_1096 == (g_398 = (l_838.f0 , p_12))), ((+(g_442 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0xF9L, g_672)), p_13)))) , l_1096))) <= 0UL))) & g_329) , p_13)), g_280)) , l_945);
                }
                for (g_1000 = 0; (g_1000 != (-8)); g_1000--)
                {
                    unsigned short l_1112 = 65533UL;
                    int l_1122 = 0xF1807A13L;
                    g_403 = g_289;
                    p_13 &= p_14;
                    g_1006 &= func_50((l_1066 = g_127), p_12, (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((l_1065 = p_13) >= p_13) == (g_403 = ((0x2B646BBBL < ((l_1122 = (g_554 , ((safe_lshift_func_uint8_t_u_u(((p_13 && (l_862 >= func_24((safe_rshift_func_uint8_t_u_s((--l_1112), 7)), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(((((l_1064 = ((g_756 = ((g_280 = p_14) == 0xF248L)) >= p_12)) > l_1121) , l_1087) < g_494), 5)) < p_13), 5)), 1))))) , l_1112), 6)) , 2L))) < g_398)) >= p_13))), p_12)), 0)), l_838.f1, g_333.f4);
                }
            }
            else
            {
                return g_494;
            }
            l_833 &= (((safe_mod_func_int16_t_s_s((g_554.f0 = (g_999 , (safe_rshift_func_int8_t_s_u(0xF6L, ((g_554.f2 || g_8) != p_14))))), func_56((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u((g_1000 & (((safe_sub_func_uint16_t_u_u((p_14 < ((l_888 = func_24((((l_882 ^= (((g_756 |= ((((0xE4L != (safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((0UL > 0x091BL), l_1065)), 0x77C53F0FL))) | g_105) || 0x8A86300DL) <= l_838.f0)) & g_333.f0) || p_13)) , g_428) , 0xCA6B3B13L), p_14)) <= l_1137)), p_14)) | g_554.f1) || p_13)), 2)) , g_1006), 5)), l_1138))) < g_1008) ^ g_398);
        }
    }
    else
    {
        short l_1143 = 0xB48BL;
        int l_1151 = 0xD7F3CC38L;
        int l_1167 = 0xB919CE9AL;
        int l_1169 = (-7L);
        int l_1173 = 0x37B1553AL;
        int l_1175 = 0L;
        int l_1176 = (-2L);
        p_13 = g_280;
        if ((safe_sub_func_int16_t_s_s((p_12 = func_50(l_1138, p_12, (safe_sub_func_int32_t_s_s((0xF65F3671L == l_1143), (safe_sub_func_uint32_t_u_u((l_838 , ((safe_sub_func_uint8_t_u_u((p_12 ^ 0UL), ((safe_unary_minus_func_int8_t_s((func_24(p_14, g_2.f0) | p_12))) , l_1143))) || p_13)), p_13)))), g_2.f2, g_1007)), 0xA58EL)))
        {
            int l_1159 = 0x473B9316L;
            int l_1163 = (-1L);
            int l_1168 = 0xAD2507D5L;
            int l_1170 = (-2L);
            int l_1171 = 0x17919CAFL;
            struct S0 l_1185 = {-10L,-7L,-5L,4L,0x6483DDC4L};
            p_13 |= (-7L);
            l_1151 = func_38((l_832 |= p_14), g_7);
            for (l_838.f0 = 0; (l_838.f0 != (-27)); l_838.f0 = safe_sub_func_int8_t_s_s(l_838.f0, 6))
            {
                int l_1154 = 0x240BA4ACL;
                int l_1156 = 1L;
                int l_1157 = 0x307CEF77L;
                int l_1158 = 1L;
                int l_1160 = (-1L);
                int l_1161 = 4L;
                int l_1162 = 0x5767A1C0L;
                int l_1164 = 1L;
                int l_1165 = (-1L);
                int l_1172 = 0x19D1E57FL;
                g_1178--;
                if ((0x2DA8L >= 65535UL))
                {
                    unsigned l_1181 = 8UL;
                    p_13 = l_1181;
                    g_116 &= 1L;
                }
                else
                {
                    unsigned short l_1182 = 1UL;
                    l_1182--;
                    l_1185 = g_554;
                }
                if (g_1015)
                    break;
            }
        }
        else
        {
            unsigned short l_1196 = 0UL;
            int l_1197 = 0xF34DB92BL;
            int l_1198 = 0x5C09E623L;
            int l_1200 = 0xBD265DA2L;
            int l_1201 = 0x29332289L;
            int l_1203 = 0xA7CB9CF4L;
            p_13 = (l_1186 || (g_7 , (safe_rshift_func_int16_t_s_u((0x1DL <= func_45(p_14, ((safe_add_func_uint16_t_u_u(1UL, ((4UL >= (p_12 != (safe_sub_func_uint8_t_u_u(func_45(((l_1196 |= ((7L | l_1138) & l_1195)) , g_228), l_838.f4, g_333.f2, g_442), g_756)))) >= p_13))) != (-6L)), g_1012, g_999)), 0))));
            --g_1204;
            l_1197 &= l_1203;
            l_1200 ^= ((((((safe_sub_func_int16_t_s_s((l_1176 = (safe_add_func_uint32_t_u_u((g_398 = ((safe_rshift_func_uint8_t_u_u(l_1173, (g_672 |= (p_12 , (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u((!p_14), (((g_447 = (p_14 && (func_38((func_27(p_13, (((func_24(g_1202, p_13) , (safe_lshift_func_uint16_t_u_u((g_1178--), g_333.f0))) == 0xA356L) , 7UL)) || p_14), g_1000) , p_13))) , l_1201) && 0xB6L))) , 0xA5L), 1)))))) , p_14)), l_1173))), g_1006)) >= l_1169) || 0x41DD8FEBL) >= l_1151) > p_14) | (-4L));
        }
        g_403 = p_12;
    }
    g_228 = (p_14 > 255UL);
    l_838 = g_333;
    return p_14;
}







static unsigned char func_24(unsigned p_25, unsigned char p_26)
{
    int l_779 = 0x84824198L;
    int l_780 = (-1L);
    int l_781 = 0xB70B809DL;
    int l_782 = 8L;
    int l_783 = 0xB82F9F63L;
    int l_784 = 1L;
    int l_785 = 0x952B61F2L;
    int l_786 = (-1L);
    int l_787 = (-5L);
    int l_788 = 0xB36DFB0DL;
    int l_789 = (-1L);
    int l_790 = 0xCD51794DL;
    int l_791 = 2L;
    int l_792 = 5L;
    int l_793 = 7L;
    int l_794 = 1L;
    int l_795 = 0x25424842L;
    int l_796 = 0x09EA1D85L;
    int l_797 = (-1L);
    int l_798 = 0x0A6B406AL;
    int l_799 = (-3L);
    int l_800 = 0L;
    int l_801 = 0x7BA8782FL;
    int l_802 = 0xDDD8ED80L;
    int l_803 = (-1L);
    int l_804 = 1L;
    int l_805 = 0xA8769C75L;
    --g_806;
    return l_781;
}







static unsigned func_27(unsigned p_28, unsigned p_29)
{
    int l_778 = 0x38FFA182L;
    l_778 = func_56(g_333.f3, g_373);
    return p_29;
}







static struct S0 func_30(short p_31, unsigned short p_32, unsigned short p_33)
{
    unsigned short l_759 = 0x1DF6L;
    int l_776 = 0xF98BB2A4L;
    int l_777 = 1L;
    l_777 |= ((g_494 , (safe_div_func_int32_t_s_s((((g_2.f0 , l_759) == (l_776 = func_38((~((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(0xEBL, (((((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((++g_175) >= p_33), (p_32 = func_38(p_32, ((p_31 , (safe_sub_func_int8_t_s_s((g_2.f2 = l_759), ((((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_333.f4, l_759)), l_759)) >= g_7) , p_33) == g_127)))) | l_759))))), g_373)) & l_759) & p_33) & l_759) <= g_116))), p_31)) > (-4L))), p_33))) , 0x44F4356CL), p_31))) || l_776);
    return g_554;
}







static unsigned char func_38(unsigned p_39, unsigned p_40)
{
    int l_673 = 0L;
    int l_674 = (-3L);
    int l_675 = 1L;
    unsigned l_676 = 4294967295UL;
    struct S0 l_724 = {0x4EBFL,0xDD16L,-5L,1L,4294967295UL};
    l_676--;
    for (g_282 = 11; (g_282 != (-26)); --g_282)
    {
        int l_683 = 0x74DEC47AL;
        struct S0 l_684 = {0xA0F1L,0x8DFBL,-2L,-4L,4294967292UL};
        int l_688 = 1L;
        int l_690 = (-2L);
        int l_692 = (-8L);
        unsigned char l_723 = 0UL;
        for (g_442 = 8; (g_442 >= (-12)); g_442--)
        {
            unsigned l_696 = 0x4C950BEEL;
            int l_743 = 1L;
            unsigned l_755 = 0x540DF4E5L;
            l_683 ^= p_39;
            if (p_39)
            {
                struct S0 l_685 = {1L,0x452EL,0x1FL,8L,0x3E8A688AL};
                l_685 = (g_333 = l_684);
            }
            else
            {
                if (p_40)
                    break;
            }
            if (g_442)
            {
                unsigned short l_693 = 0xDDDFL;
                unsigned l_722 = 5UL;
                struct S0 l_727 = {0x5693L,0x9766L,8L,0x36C1B114L,0UL};
                if ((safe_lshift_func_uint8_t_u_s(0UL, 6)))
                {
                    char l_689 = 1L;
                    int l_691 = 0xFD9D4AC8L;
                    l_693--;
                }
                else
                {
                    unsigned char l_717 = 255UL;
                    g_403 ^= (~(((l_696 , ((p_39 < (p_39 <= (0x5549L == p_39))) > (g_333.f4 = ((((safe_rshift_func_uint16_t_u_u((l_693 & p_39), 0)) < 0xC593E337L) == (((p_40 ^ 1UL) >= 1L) <= l_696)) > p_40)))) , 4294967289UL) , g_228));
                    l_690 &= ((safe_lshift_func_int8_t_s_s(l_675, 3)) <= (!(l_692 | (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_195, 11)), (safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(((!(l_717 , p_40)) == ((safe_sub_func_int8_t_s_s(0x49L, g_329)) ^ l_676)), 10)), (safe_sub_func_int8_t_s_s(l_683, l_717)))) != l_722), p_40)), g_333.f2)) != l_696), (-4L))))), 13)))));
                    return l_723;
                }
                l_684 = l_724;
                for (g_333.f2 = 0; (g_333.f2 <= 0); ++g_333.f2)
                {
                    struct S0 l_728 = {1L,0L,-1L,-4L,1UL};
                    if (l_692)
                        break;
                    l_728 = l_727;
                }
            }
            else
            {
                unsigned short l_739 = 0x3F57L;
                short l_740 = (-1L);
                l_690 = (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_39 <= ((safe_div_func_int8_t_s_s(0x99L, ((l_675 = (0xB4E32ECBL == p_39)) ^ (g_2.f1 = g_195)))) ^ (g_428 = l_683))), (g_2.f3 & g_426))), l_696));
                if (l_696)
                    break;
                l_690 = (safe_sub_func_uint8_t_u_u(0x6EL, (l_684 , g_333.f3)));
                l_743 = (g_403 = (p_40 > (((safe_mod_func_int32_t_s_s(l_739, l_739)) , l_740) < (l_724.f0 == (safe_div_func_int32_t_s_s(l_696, p_39))))));
            }
            for (g_127 = 0; (g_127 < 38); g_127++)
            {
                unsigned char l_746 = 0x0DL;
                if (p_39)
                {
                    if (l_676)
                        break;
                }
                else
                {
                    unsigned char l_749 = 0x9BL;
                    if (p_40)
                    {
                        --l_746;
                    }
                    else
                    {
                        unsigned l_754 = 0xA54655FDL;
                        l_674 ^= l_749;
                        if (g_554.f4)
                            break;
                        g_228 = (((((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0xB5D27EC5L, ((g_333.f2 = (((0xA392003DL >= g_641) , (-1L)) & l_754)) & (g_333.f0 != (l_754 , p_39))))), ((+p_39) > l_755))) & 1UL) < g_756) && 0xC72CL) , (-6L));
                        l_688 ^= 0x8644AD5CL;
                    }
                    return g_289;
                }
            }
        }
    }
    l_674 = g_455;
    g_442 = g_228;
    return l_673;
}







static unsigned char func_45(unsigned char p_46, int p_47, unsigned short p_48, unsigned p_49)
{
    char l_424 = (-1L);
    int l_425 = 0x1E1DA71AL;
    int l_427 = 0x09C6021FL;
    unsigned l_431 = 1UL;
    int l_443 = (-6L);
    int l_451 = (-7L);
    struct S0 l_526 = {0x49ADL,-3L,0L,0xD631AC0CL,8UL};
    struct S0 l_645 = {0x8CEDL,0x05AEL,0x24L,-1L,0xA7FEBF36L};
    unsigned short l_646 = 0x7C23L;
    g_428--;
    if (l_427)
    {
        int l_434 = 0L;
        int l_446 = (-6L);
        int l_448 = 0xCEC7D193L;
        struct S0 l_469 = {0x80D5L,-1L,6L,1L,0x74C58383L};
        unsigned l_478 = 0xC495F101L;
        char l_485 = (-1L);
        unsigned l_553 = 4294967295UL;
        unsigned l_589 = 0x874411FAL;
        if (l_431)
        {
            unsigned l_435 = 0xF4EC64ADL;
            int l_450 = 0x5717E347L;
            int l_452 = 0L;
            int l_454 = 0L;
            unsigned l_520 = 0xC9025258L;
            unsigned char l_562 = 255UL;
            struct S0 l_576 = {1L,3L,0L,1L,3UL};
            if ((((--g_2.f4) , l_434) == (p_47 , l_435)))
            {
                int l_441 = 0xBA570378L;
                int l_449 = (-8L);
                short l_466 = 0x64ABL;
                struct S0 l_468 = {-8L,1L,2L,0x23C1866EL,0x6557EAD5L};
                unsigned char l_470 = 0x07L;
                int l_477 = (-10L);
                if (p_46)
                {
                    int l_444 = (-1L);
                    int l_445 = 0xB970DB5EL;
                    int l_453 = 1L;
                    for (g_2.f2 = 0; (g_2.f2 > 0); ++g_2.f2)
                    {
                        int l_440 = 0L;
                        l_440 ^= (safe_lshift_func_uint8_t_u_u(l_434, 1));
                        g_455--;
                    }
                    l_450 |= (g_280 > func_61(p_48, ((((++g_428) , g_116) != ((safe_sub_func_uint8_t_u_u(g_455, (safe_lshift_func_uint16_t_u_u(g_442, (l_466 = (g_195 = ((safe_mod_func_int8_t_s_s((p_48 <= p_49), g_127)) , p_47))))))) , 0x6179L)) , p_46), g_228, l_444, p_46));
                }
                else
                {
                    unsigned l_467 = 0x8A4656B0L;
                    if (((p_46 ^= l_467) == l_446))
                    {
                        l_450 ^= func_50(g_2.f4, g_333.f4, (l_468 , (l_469 , l_470)), p_47, g_2.f1);
                    }
                    else
                    {
                        p_47 = (safe_mod_func_int16_t_s_s(p_48, ((g_447 >= ((!((safe_sub_func_int8_t_s_s(0xDCL, (+p_47))) , p_49)) , (safe_mul_func_int8_t_s_s((g_366 && (l_427 = g_2.f2)), (p_48 >= (0xAFCA1F22L >= l_451)))))) && 0x58404EA0L)));
                        return p_48;
                    }
                }
                g_116 |= 9L;
                l_478++;
                if ((safe_lshift_func_uint16_t_u_u(l_441, ((g_426 || 0xA590L) >= (g_333.f3 < ((((safe_lshift_func_uint16_t_u_s(((p_47 <= (+(l_468.f3 > (l_485 && 1UL)))) < (safe_sub_func_int8_t_s_s(((g_289 = ((((safe_add_func_int8_t_s_s(g_2.f0, (-7L))) & l_443) && p_47) == 0xFC84L)) , 0L), 3UL))), g_333.f3)) != l_431) < l_431) | p_47))))))
                {
                    int l_498 = (-1L);
                    int l_505 = 7L;
                    for (g_442 = 0; (g_442 > 17); ++g_442)
                    {
                        unsigned l_497 = 0x62375A83L;
                        l_498 |= func_61((g_2 , (l_497 &= ((safe_mod_func_int32_t_s_s((g_494 , (p_49 <= 0x5303D7F3L)), (safe_add_func_uint32_t_u_u(g_8, 0x76E28B10L)))) <= g_333.f4))), l_451, l_425, p_46, p_49);
                        g_282 = (g_403 = l_469.f4);
                        l_505 &= func_50(g_195, (safe_lshift_func_uint8_t_u_s((((0UL & p_47) < (g_403 , (safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(l_424, 4)) != g_2.f3) == l_449), l_448)))) <= ((l_497 & p_48) , p_47)), 3)), g_403, l_443, l_498);
                    }
                    p_47 = (g_105 , ((g_333.f3 >= l_435) < (l_469 , l_468.f2)));
                    if (((safe_add_func_int8_t_s_s((-3L), (safe_div_func_int32_t_s_s(p_49, g_8)))) || (safe_add_func_int8_t_s_s(1L, ((safe_rshift_func_int16_t_s_u(((l_468 , ((((func_50(g_428, (p_46 >= (func_61((!func_50(p_49, (((g_426 = ((~(~(safe_mod_func_uint16_t_u_u((p_48 &= (safe_add_func_uint32_t_u_u((g_2.f4 = ((safe_div_func_uint32_t_u_u(((l_477 = 0xAF88L) ^ p_46), p_46)) || 0x45BCL)), l_450))), g_366)))) , l_446)) , l_520) & 252UL), l_449, l_431, g_116)), g_2.f3, g_366, g_447, g_366) < g_442)), g_366, g_2.f3, p_49) & p_46) , g_2.f0) & 0x9890C2C4L) | 254UL)) != 0x31F4L), 5)) <= 0x56D9L)))))
                    {
                        int l_523 = 5L;
                        int l_532 = 0L;
                        p_47 = (+(p_47 > (safe_sub_func_int16_t_s_s((func_50(l_523, (+l_469.f2), (safe_add_func_int32_t_s_s(((l_526 , (p_47 < (65535UL >= (g_333.f0 = ((p_47 > ((((safe_lshift_func_uint8_t_u_u(((l_523 | (l_532 = ((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((~(g_282 || p_48)))), g_2.f3)) , 1UL))) < p_49), g_373)) == 1UL) , g_195) ^ g_428)) | 4294967295UL))))) && 6L), g_494)), g_428, g_228) , p_47), p_48))));
                        l_434 = (safe_lshift_func_uint16_t_u_s(0x9BFEL, ((safe_add_func_uint16_t_u_u((func_61(p_48, l_532, p_47, g_2.f2, p_47) > 1UL), l_498)) != g_398)));
                        return p_49;
                    }
                    else
                    {
                        int l_539 = 1L;
                        int l_544 = 0x85FC0F28L;
                        l_544 = (((((safe_mod_func_int32_t_s_s((((g_289 && 1L) , (l_539 = l_452)) <= (g_333.f4 < (l_450 &= g_127))), (safe_div_func_uint8_t_u_u(p_48, ((safe_mod_func_int16_t_s_s(p_48, ((((((((p_48 > 2UL) == 246UL) ^ 4294967287UL) < p_46) , p_47) ^ p_47) >= l_544) || l_520))) , p_49))))) == (-1L)) && g_333.f4) <= p_46) <= 8UL);
                    }
                    for (l_449 = (-18); (l_449 > (-28)); --l_449)
                    {
                        if (p_49)
                            break;
                    }
                }
                else
                {
                    int l_549 = 0L;
                    short l_552 = 0L;
                    for (p_46 = 0; (p_46 == 48); p_46 = safe_add_func_uint32_t_u_u(p_46, 2))
                    {
                        if (l_549)
                            break;
                        if (l_469.f0)
                            continue;
                        l_448 = ((safe_mod_func_int32_t_s_s((p_47 &= p_48), l_526.f2)) , func_56(g_127, l_552));
                        l_450 = ((0x3FL & l_549) | l_469.f2);
                    }
                    l_553 |= (p_47 &= (0x9EL || ((g_333.f2 = 0xA1L) , g_116)));
                    return p_48;
                }
            }
            else
            {
                unsigned short l_559 = 0x3F15L;
                int l_565 = (-3L);
                unsigned l_575 = 0xF7C67319L;
                unsigned l_588 = 0xB76F203CL;
                l_452 = g_2.f4;
                g_333 = g_2;
                g_554 = (g_333 = g_333);
                if ((l_451 ^= func_56(((safe_mod_func_int8_t_s_s(p_47, (g_428 = (safe_add_func_uint16_t_u_u((g_195 = (g_127 || (l_559 = 2L))), (p_47 , (1UL > p_47))))))) || (safe_div_func_uint16_t_u_u((l_562--), p_47))), l_565)))
                {
                    unsigned l_568 = 1UL;
                    struct S0 l_570 = {0xB775L,0xA15EL,0xDDL,0xB8BD8121L,0xC739653BL};
                    int l_590 = 0x294B5793L;
                    g_282 ^= (safe_add_func_int16_t_s_s(1L, (p_48 &= l_526.f3)));
                    if (((g_373 < l_568) != p_46))
                    {
                        struct S0 l_569 = {0xE602L,0xE463L,0x1FL,0x4E184711L,0x16D08B1AL};
                        l_570 = l_569;
                        p_47 = (safe_sub_func_uint32_t_u_u(p_46, ((safe_div_func_uint32_t_u_u(l_469.f2, (g_366 , (-7L)))) == (g_175 , (l_565 = (p_48 |= l_575))))));
                    }
                    else
                    {
                        p_47 ^= l_526.f1;
                        l_576 = l_576;
                        l_454 = ((safe_unary_minus_func_uint8_t_u((g_333.f4 || l_576.f2))) , (safe_div_func_int32_t_s_s(((((l_448 = (g_289 , ((safe_sub_func_uint16_t_u_u(((((p_46 , g_2) , (l_427 = (safe_mod_func_uint16_t_u_u(((g_494 = (1L < (~((((((p_48 < (l_559 > ((safe_mod_func_int16_t_s_s((l_590 = (func_50(l_588, g_442, l_589, l_576.f0, p_47) , g_403)), 7L)) , l_448))) < g_554.f1) || g_428) && p_46) > l_576.f3) || p_46)))) ^ 4294967286UL), g_426)))) , p_49) <= l_589), 0x8416L)) || 0x228D9206L))) <= (-1L)) , g_398) | 252UL), p_49)));
                    }
                }
                else
                {
                    int l_596 = 0xD2CCA0AAL;
                    p_47 &= l_553;
                    if ((g_116 ^= l_565))
                    {
                        return g_228;
                    }
                    else
                    {
                        unsigned char l_591 = 0x98L;
                        ++l_591;
                    }
                    for (l_469.f2 = 0; (l_469.f2 > 2); l_469.f2 = safe_add_func_int8_t_s_s(l_469.f2, 5))
                    {
                        unsigned l_597 = 0x26FB0D8CL;
                        l_597++;
                        p_47 = l_596;
                    }
                }
            }
            return p_48;
        }
        else
        {
            l_526 = l_469;
        }
    }
    else
    {
        unsigned l_610 = 0xAF4251CAL;
        unsigned char l_614 = 255UL;
        short l_647 = 0L;
        int l_652 = 0x59D79331L;
        int l_655 = 0xCD9AAD0AL;
        int l_656 = 8L;
        int l_657 = 0x8F72BD28L;
        int l_658 = 0L;
        unsigned l_659 = 7UL;
        unsigned short l_668 = 0x072CL;
        char l_669 = 1L;
        for (g_442 = (-23); (g_442 == 11); ++g_442)
        {
            unsigned short l_642 = 0xC743L;
            g_333 = l_526;
            for (g_2.f2 = 29; (g_2.f2 == (-8)); --g_2.f2)
            {
                short l_613 = 0xCF6CL;
                struct S0 l_617 = {1L,0xA512L,0x3DL,0L,0x9B8FBCA8L};
                int l_618 = 0x400376F3L;
                short l_640 = 7L;
                p_47 |= (safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((((l_610 >= (safe_mul_func_int8_t_s_s(l_427, (l_425 = 0UL)))) && l_613) > g_333.f3), l_610)), (l_614 == (g_2.f2 != (safe_sub_func_int8_t_s_s((((l_443 ^= ((l_617 , p_48) < 251UL)) , 65535UL) , p_46), l_617.f0)))))), p_46));
                if (p_49)
                {
                    l_618 = p_46;
                }
                else
                {
                    unsigned short l_639 = 0x1CBBL;
                    l_618 &= ((0L > ((safe_rshift_func_uint16_t_u_u((((((((p_47 = 0L) > (((g_554 , (p_46 ^ (safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s((0UL >= ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_280, (safe_add_func_int32_t_s_s(g_554.f4, ((+(safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((p_49 && (safe_div_func_uint8_t_u_u(l_639, l_610))), p_48)) & l_640) | g_641), 9L)) | (-1L)) && p_46) , p_48), 8))) , l_443))))), 0)) < l_617.f4)), 4294967287UL)), l_427)))) ^ g_442) ^ g_127)) && p_49) ^ 1UL) != p_48) > g_333.f0) & g_403), 8)) != p_49)) , (-6L));
                    g_116 = (g_2.f1 >= (g_333.f0 = ((p_46 , l_642) && l_526.f2)));
                }
                if (g_280)
                    continue;
                g_333 = l_526;
            }
            if (l_610)
                continue;
        }
        l_451 |= (g_116 & (l_526.f3 < ((((safe_div_func_uint8_t_u_u(g_282, (l_646 = ((l_645 = (g_333 = l_526)) , 0xA1L)))) | 0x1BL) & l_647) >= (p_47 = (safe_rshift_func_uint16_t_u_s((l_526.f2 == (g_428 < 0xD869L)), p_46))))));
        for (l_647 = (-7); (l_647 > (-26)); l_647 = safe_sub_func_int32_t_s_s(l_647, 4))
        {
            char l_653 = 0xCBL;
            int l_654 = 8L;
            l_659++;
        }
        l_655 |= ((1L | ((0x479337BCL != (safe_div_func_uint32_t_u_u(((-1L) >= 65531UL), p_47))) ^ 0x0EL)) <= func_61((safe_add_func_int16_t_s_s(0xF894L, ((func_50((safe_sub_func_uint32_t_u_u((l_646 | p_47), l_668)), g_8, l_443, p_49, l_669) , l_526.f3) & 0UL))), l_652, l_526.f1, l_425, l_645.f1));
    }
    return l_427;
}







static unsigned char func_50(char p_51, short p_52, unsigned short p_53, unsigned p_54, unsigned short p_55)
{
    char l_376 = (-1L);
    int l_412 = 0L;
    int l_423 = 0x1A54CAF0L;
    for (g_8 = 0; (g_8 <= 2); ++g_8)
    {
        int l_371 = 2L;
        int l_379 = (-3L);
        int l_400 = 0L;
        if (g_333.f4)
        {
            struct S0 l_369 = {-1L,-1L,0xEEL,4L,0x343D952BL};
            struct S0 l_370 = {0xEC26L,0x0E6AL,0x70L,0x19608C04L,1UL};
            int l_372 = 0x051A5AF9L;
            l_370 = l_369;
            if (l_370.f0)
                continue;
            ++g_373;
            return l_376;
        }
        else
        {
            if (g_289)
                break;
            g_228 = (-1L);
        }
        l_379 &= (safe_lshift_func_uint16_t_u_s(((p_51 ^ g_333.f3) , l_371), p_53));
        for (g_2.f0 = 0; (g_2.f0 < (-17)); g_2.f0--)
        {
            unsigned short l_384 = 2UL;
            int l_397 = 0x4384E507L;
            int l_399 = 0x31FCB920L;
            int l_413 = (-4L);
            unsigned l_422 = 0x1D72D77EL;
            l_400 = (l_379 = (l_399 = (safe_div_func_int8_t_s_s(0x59L, (((l_376 ^ p_54) == (l_384--)) & (((((l_371 & (safe_mod_func_int8_t_s_s(func_61(g_366, (g_398 = (safe_rshift_func_int16_t_s_u(func_61(p_53, ((safe_sub_func_uint8_t_u_u(g_373, ((g_2 , (safe_sub_func_int32_t_s_s((((((safe_mod_func_uint32_t_u_u(((p_53 , 0UL) >= p_53), g_7)) == p_55) , g_333.f1) > l_397) >= p_52), l_379))) ^ g_175))) >= l_397), p_53, g_280, g_333.f2), g_373))), l_376, g_2.f0, l_397), l_397))) <= g_2.f4) <= 0x72A9L) < l_376) >= 65535UL))))));
            l_412 = (((0x84E41F5CL ^ (((safe_rshift_func_int8_t_s_s(0x8CL, 7)) <= func_56(func_56((p_53 >= (g_403 ^= 0x92L)), (safe_div_func_int8_t_s_s(func_56(func_56(((p_52 |= (safe_lshift_func_uint8_t_u_s(func_56(l_384, ((safe_sub_func_int8_t_s_s(func_56((((l_376 , ((l_376 < ((safe_div_func_int16_t_s_s((((l_397 |= ((p_51 , (0x1815FD38L | 0L)) && p_53)) , 0x59CDL) == l_376), g_2.f0)) ^ 1UL)) >= l_399)) , l_376) & p_51), l_376), l_376)) >= 255UL)), l_379))) && 0L), p_55), l_399), (-2L)))), g_373)) , g_7)) | p_55) , l_399);
            g_403 = (((0xBEA1L || (l_413 , (p_55 = (l_413 && (-5L))))) & (safe_mod_func_uint8_t_u_u((l_412 && func_61((l_397 == (-7L)), (+(safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(g_175, g_228)), p_52)), 1))), g_403, l_376, l_422)), g_373))) , l_376);
        }
    }
    l_423 &= l_412;
    return g_2.f3;
}







static char func_56(unsigned p_57, char p_58)
{
    unsigned l_67 = 4294967295UL;
    short l_70 = 8L;
    int l_71 = (-8L);
    int l_72 = (-1L);
    unsigned char l_73 = 0xEFL;
    unsigned l_78 = 3UL;
    int l_334 = 1L;
    unsigned short l_335 = 0x7298L;
    char l_346 = 0xD8L;
    short l_347 = 0x6F82L;
    int l_352 = 1L;
    int l_353 = 0xC9B7E9D3L;
    int l_354 = (-4L);
    int l_355 = 1L;
    int l_357 = 1L;
    int l_359 = 0L;
    int l_361 = 0x659D1DFFL;
    unsigned l_363 = 5UL;
    l_335 = (l_334 = func_61(l_67, p_57, ((((safe_rshift_func_uint8_t_u_u((l_70 ^ l_70), (+(0L | (l_72 ^= (l_71 |= 0x38L)))))) != l_73) <= 4294967287UL) < (((safe_sub_func_int8_t_s_s((l_78 = (safe_add_func_int8_t_s_s((g_2.f2 = ((g_2.f1 >= p_57) , l_70)), 0x0BL))), g_2.f1)) != 7UL) >= g_7)), p_58, g_2.f1));
    if ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0L, 10)), (g_333.f1 = (((((((((safe_lshift_func_uint8_t_u_u((p_58 , g_333.f4), 4)) > (g_329 > ((safe_mod_func_int8_t_s_s(g_195, ((safe_add_func_int32_t_s_s(((g_280 = (l_346 & (l_71 = (p_57 >= (g_2.f4 = (((l_347 && p_58) > l_71) < 0xECL)))))) , l_334), 4294967295UL)) , 0x1AL))) == p_58))) && 1UL) || p_57) , p_57) , p_57) < g_7) && l_335) == p_57)))))
    {
        g_282 = (-9L);
    }
    else
    {
        short l_348 = 0x83CEL;
        int l_349 = 0x92A1E79BL;
        int l_350 = (-5L);
        int l_351 = 4L;
        int l_356 = (-4L);
        int l_358 = (-1L);
        int l_360 = 1L;
        int l_362 = 1L;
        l_71 &= l_348;
        g_333 = g_2;
        --l_363;
    }
    return g_366;
}







static int func_61(unsigned p_62, char p_63, char p_64, char p_65, unsigned char p_66)
{
    int l_81 = 1L;
    int l_93 = 0xBD24A170L;
    struct S0 l_94 = {5L,2L,0x3EL,1L,4294967286UL};
    struct S0 l_95 = {0L,0x746AL,0xECL,8L,0x26019FDEL};
    short l_145 = 0x6792L;
    int l_231 = 7L;
    int l_232 = 0L;
    unsigned char l_252 = 1UL;
    unsigned char l_325 = 1UL;
    for (p_65 = 0; (p_65 <= 23); ++p_65)
    {
        unsigned char l_86 = 250UL;
        int l_87 = (-7L);
        l_81 |= g_2.f0;
        l_93 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((g_2.f4 && (l_87 = (l_86 | p_63))), (l_86 , g_8))) <= (safe_unary_minus_func_uint16_t_u((safe_div_func_uint16_t_u_u(0xD26DL, g_2.f4))))), ((safe_rshift_func_uint8_t_u_s(((+g_2.f2) != p_62), 5)) ^ l_81)));
    }
    l_93 |= (l_94 , 6L);
    if (g_2.f3)
    {
        l_95 = (l_94 = g_2);
    }
    else
    {
        int l_98 = 0x5BB7EAB3L;
        int l_106 = (-6L);
        int l_107 = 0x64F5E99AL;
        unsigned short l_184 = 0xC14CL;
        unsigned l_218 = 0xA3940A6EL;
        struct S0 l_230 = {0x27B0L,0L,0L,0x0F33844FL,0xB9DDAD4CL};
        char l_261 = 0x29L;
        short l_275 = 0x1B5CL;
        int l_283 = 3L;
        short l_284 = 0x3894L;
        int l_286 = 0xCD69E2DAL;
        int l_287 = (-2L);
        int l_288 = 0L;
        l_107 = ((l_94.f4 & (0UL == (l_106 = ((safe_sub_func_uint16_t_u_u(p_62, ((l_98 = 4294967287UL) == ((g_2.f1 && (safe_div_func_int16_t_s_s((l_93 = p_63), (safe_add_func_int16_t_s_s(p_63, (g_105 = ((safe_mod_func_int8_t_s_s(7L, 0x58L)) , g_2.f4))))))) , 1L)))) , g_8)))) , p_66);
        if (l_95.f4)
        {
            unsigned l_120 = 0x68E4F1A1L;
            int l_174 = (-6L);
            int l_229 = (-1L);
            unsigned l_233 = 0xA3BB3813L;
            char l_270 = 0x4AL;
            if ((safe_rshift_func_int16_t_s_s((g_2.f3 != (~0x17L)), 4)))
            {
                return g_7;
            }
            else
            {
                unsigned l_115 = 0xA7FFA302L;
                int l_124 = 1L;
                int l_126 = 0L;
                struct S0 l_171 = {0x1E86L,0L,1L,0xE1307C17L,0UL};
                int l_176 = 0L;
                char l_223 = 0xEDL;
                if (g_2.f2)
                {
                    for (p_66 = 11; (p_66 >= 26); ++p_66)
                    {
                        unsigned char l_112 = 7UL;
                        l_98 &= g_2.f3;
                        l_112++;
                        g_116 = (p_63 , l_115);
                    }
                }
                else
                {
                    int l_123 = 0x8BAA40D6L;
                    unsigned l_146 = 4294967295UL;
                    int l_166 = 9L;
                    if ((safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u(l_120, (l_93 &= ((safe_lshift_func_int16_t_s_u(g_2.f0, 1)) | p_63)))))))
                    {
                        int l_125 = 0x642B86B6L;
                        --g_127;
                    }
                    else
                    {
                        unsigned short l_134 = 1UL;
                        l_123 = (safe_add_func_uint16_t_u_u(((-10L) & g_2.f4), (safe_add_func_uint8_t_u_u((l_134 &= 0x70L), (l_146 = (((((safe_rshift_func_uint8_t_u_s(l_126, 6)) , ((g_2.f2 = (g_2.f3 & p_62)) < (safe_mod_func_uint32_t_u_u((g_116 ^ (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((((+(!((l_107 = ((safe_add_func_int16_t_s_s(((g_2.f3 != (p_66 ^ g_116)) > g_127), l_145)) || 0xD924L)) > p_63))) , 5L) < g_2.f1) , g_8), 7)), 9))), 0x6DB6A2D9L)))) >= 5L) != g_2.f4) && l_107))))));
                        g_116 ^= p_62;
                        l_107 &= 1L;
                    }
                    g_116 = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0UL, 6)), g_127)) == (safe_sub_func_int32_t_s_s(p_63, (safe_div_func_uint32_t_u_u(((l_106 != g_8) <= (!l_123)), 4294967290UL)))));
                    if ((safe_div_func_int32_t_s_s(g_2.f3, (safe_lshift_func_int16_t_s_s(l_124, 1)))))
                    {
                        unsigned short l_159 = 0UL;
                        l_93 |= p_65;
                        return l_159;
                    }
                    else
                    {
                        int l_179 = 7L;
                        g_116 = ((safe_div_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(l_146, (safe_rshift_func_int8_t_s_s((((~l_166) <= (g_175 &= (safe_div_func_uint8_t_u_u(((l_120 || (((0x8499L < ((safe_lshift_func_uint16_t_u_s((l_174 = ((l_171 = g_2) , (safe_mod_func_uint32_t_u_u((g_116 < ((g_7 |= g_8) , 65532UL)), ((l_98 = p_63) , (-1L)))))), 8)) , p_64)) >= g_2.f1) != p_64)) <= p_66), p_62)))) == p_63), p_64)))) && l_176) > 4294967295UL), (-8L))) , 0L);
                        l_184 = (p_66 < (p_62 = (p_63 && (((-2L) != g_2.f4) | ((l_123 = l_179) != (safe_add_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((9L < 0x89590F8BL), g_116)) <= l_171.f2), l_93)))))));
                        g_116 = (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((+(g_2.f1 = (safe_lshift_func_int16_t_s_s(l_174, (safe_rshift_func_uint8_t_u_u(g_2.f1, (g_8 < g_116))))))) & l_179), (safe_mod_func_uint8_t_u_u(0x1EL, p_64)))), p_66));
                        g_195 = (g_116 = g_2.f1);
                    }
                    l_123 = (l_93 ^ (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_120 && (safe_rshift_func_int8_t_s_u(l_171.f1, (l_123 >= ((((l_107 ^= (l_174 = ((((safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((0x8B5B8669L || l_106) | 4294967293UL), 1L)) , l_98), 8)) == p_64) , g_2.f1) | p_64))) <= g_7) <= p_64) && l_98))))), (-10L))), 1UL)));
                }
                l_126 ^= (g_228 = (((safe_sub_func_int8_t_s_s((l_229 ^= (((safe_mod_func_int32_t_s_s(((l_106 = ((((safe_sub_func_int8_t_s_s(((safe_div_func_int32_t_s_s(l_115, (safe_div_func_int16_t_s_s((l_174 = ((-1L) < p_65)), (safe_div_func_int16_t_s_s(0x292EL, l_218)))))) > (safe_div_func_int8_t_s_s(l_120, (safe_sub_func_int8_t_s_s((((((g_175 > l_223) , (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_2.f3 , 0xA7L), l_120)), g_195))) != p_65) , (-3L)) , 5L), p_63))))), 1L)) ^ p_64) <= g_228) , 0L)) ^ g_105), (-2L))) != l_95.f1) | g_228)), 2L)) , p_66) ^ l_171.f3));
                l_230 = l_94;
                ++l_233;
            }
            l_229 = ((safe_sub_func_uint16_t_u_u(l_93, p_65)) == (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(1UL, ((g_7 = (l_229 , 1L)) , (((((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u(((l_107 = (((safe_mod_func_int16_t_s_s(0x36D3L, p_64)) ^ (l_94.f3 <= (p_62 = (!((safe_div_func_uint32_t_u_u((0x85L >= g_2.f2), 1UL)) , l_252))))) , g_105)) || g_105), l_231)) , 0L) & g_228) < g_116), p_65)), g_7)) | g_116) && l_120) ^ 0xE9L) & g_175)))), 0xD721E8A3L)));
            for (g_195 = (-22); (g_195 >= 23); g_195++)
            {
                char l_257 = 0x6CL;
                struct S0 l_269 = {0x02FAL,5L,0x98L,0xCDCF2E06L,9UL};
                if (((safe_sub_func_int32_t_s_s(g_2.f1, (g_228 < (~l_257)))) <= (l_229 , (g_116 = (l_231 = p_65)))))
                {
                    unsigned char l_258 = 255UL;
                    int l_262 = 0xBB484F15L;
                    l_258 = g_195;
                    l_262 = (safe_add_func_int8_t_s_s((0x1E08L | l_229), l_261));
                    l_229 &= (((safe_rshift_func_uint16_t_u_u(p_62, (g_116 == l_94.f2))) , (((1UL <= g_228) >= ((l_95 = g_2) , (((safe_add_func_int32_t_s_s(((0xC59D0019L == (safe_rshift_func_uint16_t_u_u(0x5131L, 1))) > (l_269 , l_258)), p_64)) <= l_270) >= g_105))) & g_175)) , 1L);
                }
                else
                {
                    l_93 = (p_64 | p_65);
                }
            }
        }
        else
        {
            unsigned char l_276 = 0UL;
            int l_279 = 0xEAABA645L;
            int l_328 = (-8L);
            for (g_127 = 0; (g_127 == 43); ++g_127)
            {
                int l_281 = 0xD3BCB1EAL;
                int l_285 = 0x2736123BL;
                for (l_94.f1 = 4; (l_94.f1 <= (-28)); l_94.f1 = safe_sub_func_int16_t_s_s(l_94.f1, 5))
                {
                    g_228 = g_195;
                    if (g_175)
                        break;
                    return p_64;
                }
                --l_276;
                g_289--;
                if ((((l_279 = 0xB1182683L) , (safe_div_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(g_2.f2, (g_105 = l_287))) && ((safe_sub_func_uint16_t_u_u((l_281 ^ l_285), (g_7 , (safe_sub_func_uint16_t_u_u(((l_288 = (g_228 = l_279)) >= (safe_sub_func_int16_t_s_s(l_94.f4, ((p_65 ^= g_2.f3) && 0xD0L)))), l_230.f1))))) > l_94.f1)), g_8)) , g_282) & l_285), g_2.f1))) != 0x3EBFL))
                {
                    unsigned short l_308 = 65531UL;
                    for (p_63 = 0; (p_63 > (-27)); --p_63)
                    {
                        g_282 ^= (safe_sub_func_uint8_t_u_u(g_2.f1, g_8));
                        ++l_308;
                        l_281 |= (g_2 , (-1L));
                    }
                    g_116 &= (safe_div_func_int32_t_s_s(g_195, ((safe_div_func_int32_t_s_s(((g_2.f4 <= g_282) > (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((~(safe_lshift_func_int16_t_s_u((4294967295UL <= (0xD9L > 0x2DL)), (l_281 == (safe_sub_func_int32_t_s_s((g_289 , (safe_mod_func_uint32_t_u_u(l_308, l_308))), 0xEE34DF51L)))))), p_63)), p_62))), g_2.f1)) && 0x98F465C1L)));
                    l_325++;
                }
                else
                {
                    unsigned l_332 = 0xBC08B88EL;
                    g_329++;
                    if (l_95.f0)
                        break;
                    l_332 |= l_285;
                    if (p_66)
                        break;
                }
            }
            g_228 |= 5L;
        }
    }
    g_333 = l_95;
    return g_333.f1;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    transparent_crc(g_333.f1, "g_333.f1", print_hash_value);
    transparent_crc(g_333.f2, "g_333.f2", print_hash_value);
    transparent_crc(g_333.f3, "g_333.f3", print_hash_value);
    transparent_crc(g_333.f4, "g_333.f4", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_554.f0, "g_554.f0", print_hash_value);
    transparent_crc(g_554.f1, "g_554.f1", print_hash_value);
    transparent_crc(g_554.f2, "g_554.f2", print_hash_value);
    transparent_crc(g_554.f3, "g_554.f3", print_hash_value);
    transparent_crc(g_554.f4, "g_554.f4", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_671, "g_671", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_756, "g_756", print_hash_value);
    transparent_crc(g_806, "g_806", print_hash_value);
    transparent_crc(g_951, "g_951", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_999, "g_999", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1221, "g_1221", print_hash_value);
    transparent_crc(g_1228, "g_1228", print_hash_value);
    transparent_crc(g_1239, "g_1239", print_hash_value);
    transparent_crc(g_1245, "g_1245", print_hash_value);
    transparent_crc(g_1254, "g_1254", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
