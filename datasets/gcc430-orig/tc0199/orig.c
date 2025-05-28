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
   unsigned f0;
   char f1;
   unsigned f2;
   int f3;
   unsigned char f4;
};


static unsigned char g_8 = 255UL;
static int g_62 = 4L;
static struct S0 g_63 = {4294967295UL,0xA0L,4294967290UL,0x36182647L,0xB2L};
static struct S0 g_64 = {5UL,1L,0xE433C58DL,0L,1UL};
static unsigned g_261 = 2UL;
static int g_282 = (-2L);
static int g_427 = 0x1CBF5D3BL;
static struct S0 g_737 = {0x6ADFDD05L,0x6EL,0UL,5L,0xCCL};
static unsigned g_954 = 0xFC7FE3F2L;
static unsigned short g_1112 = 0UL;
static unsigned char g_1118 = 0x7CL;



static struct S0 func_1(void);
static int func_2(int p_3, short p_4, short p_5, struct S0 p_6, int p_7);
static int func_9(unsigned short p_10, struct S0 p_11, int p_12, unsigned p_13, unsigned p_14);
static unsigned short func_21(int p_22, struct S0 p_23, unsigned short p_24);
static struct S0 func_25(short p_26, short p_27, char p_28, unsigned char p_29);
static unsigned func_34(unsigned p_35, struct S0 p_36);
static struct S0 func_38(unsigned p_39, unsigned p_40, int p_41, unsigned p_42, unsigned short p_43);
static unsigned short func_44(int p_45, unsigned p_46);
static int func_47(short p_48, unsigned p_49, struct S0 p_50);
static unsigned func_52(int p_53);
static struct S0 func_1(void)
{
    short l_37 = (-1L);
    char l_51 = (-7L);
    int l_60 = (-1L);
    unsigned l_717 = 4294967295UL;
    struct S0 l_1045 = {0x8A25E886L,0x48L,0x9390DD56L,4L,255UL};
    int l_1123 = 1L;
    g_1118 = (func_2(g_8, ((func_9(((safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_8 >= (safe_mul_func_int16_t_s_s((~(func_21((func_25((safe_mod_func_int8_t_s_s(5L, ((safe_sub_func_int32_t_s_s((func_34(l_37, func_38(((func_44(((g_8 ^ (func_47(l_51, func_52((((((safe_rshift_func_uint16_t_u_s(0UL, ((g_8 ^ (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(g_8, (-5L))) != l_51), g_8))) , g_8))) ^ l_37) < l_51) , l_60) | g_8)), g_64) >= g_8)) >= 65535UL), l_60) ^ 0x48ACL) , 0x24E852BBL), g_8, l_37, g_261, l_51)) || 0UL), l_37)) ^ 0x9DD2D64BL))), l_717, g_8, g_8) , 0x071E8C18L), g_737, l_51) >= l_37)), l_717))), 0xD463L)), 0)) == l_717), g_737, l_60, g_737.f2, g_261) || l_51) | 0L), l_60, l_1045, g_954) || l_1045.f2);
    g_62 = (~g_954);
    l_1123 = (((((0x785FL >= (~0x553FL)) & (l_1045.f0 || (safe_rshift_func_uint8_t_u_s(g_64.f0, 1)))) != (safe_mul_func_int8_t_s_s(0x83L, (0xB337L | ((((((0xFC27L ^ g_62) > (-1L)) , l_1045.f4) , g_737.f4) < (-1L)) >= g_63.f3))))) | g_1112) , 1L);
    return g_737;
}







static int func_2(int p_3, short p_4, short p_5, struct S0 p_6, int p_7)
{
    struct S0 l_1046 = {0UL,-4L,9UL,0x3CA13B03L,0UL};
    if (g_63.f3)
    {
        return p_5;
    }
    else
    {
        unsigned l_1050 = 0x6F443858L;
        int l_1075 = 0L;
        struct S0 l_1082 = {0x621C8CEEL,0xBEL,6UL,-7L,3UL};
        unsigned short l_1114 = 0xE2EDL;
lbl_1116:
        l_1046 = g_63;
        if (((((((safe_div_func_int32_t_s_s(0x97179238L, p_4)) && (safe_unary_minus_func_int32_t_s(l_1046.f2))) , g_261) != (func_21(l_1050, p_6, p_3) > (safe_unary_minus_func_uint32_t_u(0x12412CD4L)))) != g_737.f0) , l_1046.f4))
        {
            int l_1054 = 0xBC585D9AL;
            struct S0 l_1079 = {0x8B1EDE34L,0xB5L,1UL,0xD2292336L,0xC1L};
            int l_1088 = 1L;
lbl_1077:
            if (g_64.f2)
            {
                int l_1055 = 0xE0F820A4L;
                g_62 = l_1046.f4;
                for (p_6.f2 = 22; (p_6.f2 < 17); p_6.f2--)
                {
                    return l_1054;
                }
                return l_1055;
            }
            else
            {
                p_3 = g_63.f0;
            }
            for (g_63.f4 = 0; (g_63.f4 != 18); ++g_63.f4)
            {
                short l_1074 = 1L;
                short l_1095 = 0L;
                for (g_737.f1 = 26; (g_737.f1 >= (-13)); g_737.f1 = safe_sub_func_int32_t_s_s(g_737.f1, 8))
                {
                    char l_1076 = 0x86L;
                    short l_1097 = (-6L);
                    if (((safe_add_func_uint8_t_u_u(p_6.f1, (0UL & l_1046.f1))) , (safe_rshift_func_uint16_t_u_u(((g_63.f3 & ((p_6.f1 || (safe_div_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_7, (l_1046.f2 , g_64.f1))), (safe_lshift_func_uint16_t_u_u(((1UL || l_1054) <= 0xBDL), p_6.f3)))), l_1074)) || 4294967295UL), 0x3BB878E8L))) , 0x412CL)) > l_1074), l_1074))))
                    {
                        l_1075 = 0xE13D4276L;
                        l_1076 = (-2L);
                        if (p_6.f2)
                            continue;
                        if (l_1046.f2)
                            goto lbl_1077;
                    }
                    else
                    {
                        struct S0 l_1078 = {1UL,-7L,4294967295UL,0x368385F1L,1UL};
                        l_1079 = l_1078;
                        if (g_737.f1)
                            goto lbl_1117;
                        g_282 = 0x4DB532BBL;
                    }
                    if ((((safe_div_func_uint32_t_u_u(p_6.f2, g_63.f0)) || l_1075) | g_62))
                    {
                        int l_1087 = 0xB59F380AL;
                        l_1087 = (((p_6.f2 & p_6.f4) , l_1082) , (safe_sub_func_int16_t_s_s(l_1079.f1, ((safe_mod_func_int8_t_s_s(l_1082.f1, l_1074)) < l_1046.f2))));
                    }
                    else
                    {
                        p_6 = g_737;
                        l_1088 = (p_6.f2 , p_4);
                        if (l_1076)
                            continue;
                        g_62 = ((6UL >= (safe_mul_func_uint16_t_u_u(0x5725L, (g_64.f4 || (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_64.f4, p_3)), g_63.f2)))))) & l_1095);
                    }
                    g_282 = ((safe_unary_minus_func_uint8_t_u(l_1097)) & l_1088);
                }
                for (g_737.f0 = 3; (g_737.f0 <= 41); g_737.f0++)
                {
                    g_64 = p_6;
                    if (g_427)
                        continue;
                    for (g_282 = (-5); (g_282 >= 5); g_282++)
                    {
                        int l_1113 = 0L;
                        struct S0 l_1115 = {0xD8958DBAL,6L,0xD49A40B4L,0x6D73BBFCL,250UL};
                        g_62 = (safe_mul_func_int16_t_s_s((1UL != ((((+(safe_mul_func_int16_t_s_s(0x9D47L, (((((((safe_mul_func_uint8_t_u_u((((255UL >= (safe_mod_func_int32_t_s_s((g_261 & (((g_63.f0 ^ (g_282 , l_1082.f4)) | (((l_1082.f0 ^ p_6.f1) , g_64.f1) , g_63.f3)) , 4294967295UL)), g_261))) , 0x351DL) | 0L), g_737.f1)) == g_1112) == l_1113) , g_1112) != 0x65904991L) , p_4) > l_1082.f0)))) , 0xC6L) , 0x6ECFL) || l_1114)), 0xDBE5L));
                        l_1115 = p_6;
                    }
                }
            }
            return p_5;
        }
        else
        {
lbl_1117:
            if (g_737.f1)
                goto lbl_1116;
            return p_6.f0;
        }
    }
}







static int func_9(unsigned short p_10, struct S0 p_11, int p_12, unsigned p_13, unsigned p_14)
{
    int l_770 = 0xFB89FAD4L;
    int l_771 = (-1L);
    struct S0 l_784 = {0UL,-5L,0x400EC5B1L,1L,0x13L};
    char l_790 = 0xA4L;
    unsigned l_879 = 0x3B4F9D7CL;
    for (p_10 = 0; (p_10 == 4); ++p_10)
    {
        int l_748 = 0xD5752BCCL;
        int l_785 = 0x48A99CF1L;
        int l_839 = 0xC04EB85BL;
        int l_875 = (-1L);
        unsigned char l_949 = 0xB3L;
        struct S0 l_966 = {0x522DC9D9L,3L,1UL,-1L,0x1EL};
        struct S0 l_969 = {0x9034977EL,0xB9L,0UL,-2L,0xFAL};
        if ((safe_add_func_int32_t_s_s(func_44(g_63.f1, p_11.f4), (g_737.f3 | ((!(l_748 > (safe_mul_func_uint8_t_u_u(l_748, (l_748 <= (safe_rshift_func_int16_t_s_u((l_748 > p_11.f2), 0))))))) || g_8)))))
        {
            char l_755 = 9L;
            l_771 = (safe_add_func_uint8_t_u_u(g_737.f3, func_44(l_755, (safe_mod_func_int8_t_s_s((l_755 ^ (safe_mul_func_int16_t_s_s(((((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_14, g_427)), g_427)) , (safe_lshift_func_int16_t_s_u((p_12 >= 1UL), ((((((safe_mod_func_uint32_t_u_u(((func_21(((safe_mod_func_int16_t_s_s(l_755, 0xF08BL)) , l_755), g_63, g_737.f2) ^ p_11.f3) , 0x197AAE58L), 0x544E36F7L)) < l_755) ^ 65535UL) | p_11.f0) || l_748) ^ p_14)))) != 0x94L) & l_770) != l_770) ^ g_427), 0x41B5L))), 5L)))));
            if (l_755)
                continue;
            p_12 = (6UL < p_12);
            l_785 = (safe_mod_func_uint8_t_u_u(func_52((func_44(func_47((safe_add_func_uint32_t_u_u((p_11.f1 , (safe_rshift_func_int8_t_s_u(0xC3L, p_11.f1))), g_427)), (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_11.f3 , ((safe_mod_func_int32_t_s_s((func_34((g_427 && func_34(l_748, p_11)), l_784) , l_748), 0xE6D1893DL)) < l_748)) || l_771), p_14)), g_737.f0)), p_11), l_755) <= 0L)), 0x88L));
        }
        else
        {
            int l_791 = 1L;
            struct S0 l_899 = {0x09E80A9FL,0x81L,4294967294UL,0x2AEC6217L,254UL};
            unsigned l_965 = 4294967295UL;
            unsigned short l_1003 = 65529UL;
            short l_1004 = 0x0FC9L;
            if (((safe_mod_func_int32_t_s_s(l_748, (safe_rshift_func_uint16_t_u_u(func_34(l_785, ((!255UL) , func_38((l_790 && (((p_11.f1 , (0x8FL ^ (((((l_748 | l_784.f2) != (l_791 < 0xD836L)) > g_737.f1) , l_771) ^ p_11.f0))) & l_748) >= p_11.f2)), p_11.f1, g_64.f4, g_62, p_11.f1))), g_261)))) ^ (-5L)))
            {
                unsigned l_798 = 4294967294UL;
                struct S0 l_816 = {0UL,0x6DL,0xB85893E5L,0x59ACA9D9L,0x93L};
                int l_840 = 0xF915E234L;
                char l_857 = 0xAAL;
                unsigned char l_869 = 0xF6L;
                unsigned char l_874 = 1UL;
                if ((g_64.f0 , ((l_785 , p_10) <= (safe_sub_func_int8_t_s_s(0x12L, (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((~0xC34CL), l_798)), ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_261 >= (l_791 , l_785)), g_64.f0)), p_11.f4)) | g_737.f4))))))))
                {
                    int l_815 = 0x41DDB16BL;
                    for (l_784.f4 = 0; (l_784.f4 >= 51); ++l_784.f4)
                    {
                        g_62 = l_748;
                    }
                    p_12 = ((0xC8L <= l_770) < (g_64.f3 == (safe_add_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((g_737.f4 , g_62) > ((safe_mod_func_int32_t_s_s(l_784.f4, g_62)) | ((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((1UL < (l_784.f2 && l_798)), 0x17B9A9A1L)), g_62)) == 250UL))), l_815)) == 65527UL), p_11.f0))));
                    p_12 = p_11.f2;
                }
                else
                {
                    int l_835 = 0L;
                    g_64 = l_816;
                    g_62 = (safe_rshift_func_uint8_t_u_s(g_737.f1, 7));
                    g_64 = l_816;
                    if ((safe_add_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((l_816.f1 || (safe_lshift_func_uint16_t_u_u((8L >= (((safe_mod_func_uint16_t_u_u(g_282, 0xB036L)) > p_14) < (g_64.f1 && ((safe_add_func_uint32_t_u_u(((func_47(((((((((g_62 == (safe_mul_func_uint16_t_u_u((g_64 , (safe_mul_func_int8_t_s_s((l_785 , g_737.f4), l_816.f2))), l_835))) != l_770) || 0x696AL) > p_11.f2) < g_63.f4) ^ 1UL) , l_798) | p_11.f1), g_737.f4, p_11) == g_737.f3) < p_12), 0L)) || (-7L))))), p_11.f4))), p_11.f3)) , 1L) >= g_737.f3), 0xA6AEL)))
                    {
                        struct S0 l_838 = {1UL,0x4FL,8UL,0x4B816F0DL,0xDEL};
                        if (g_64.f0)
                            break;
                        if (l_835)
                            break;
                        l_840 = (safe_mul_func_uint16_t_u_u(func_44((l_838 , func_47(l_791, l_839, g_63)), g_427), (l_770 <= (l_816.f1 == g_737.f2))));
                    }
                    else
                    {
                        p_12 = ((~(+p_13)) && 1L);
                        p_12 = p_11.f1;
                    }
                }
                if (((l_791 > (safe_mul_func_int16_t_s_s((p_13 || (((safe_mul_func_uint16_t_u_u(l_816.f0, ((g_427 ^ 0xC6AEL) > (safe_rshift_func_uint8_t_u_u(p_11.f1, (p_12 >= (p_10 | g_427))))))) == p_13) & 1UL)), g_63.f2))) == 0L))
                {
                    unsigned l_876 = 4294967295UL;
                    p_11 = ((((safe_sub_func_int8_t_s_s(p_11.f4, (func_25(func_52((safe_sub_func_int16_t_s_s(((((((safe_rshift_func_int8_t_s_s((l_748 > (func_52(((safe_mul_func_int8_t_s_s(l_816.f1, (safe_div_func_uint8_t_u_u(((((((g_64.f0 == (g_63.f2 & p_11.f0)) && l_857) <= (safe_unary_minus_func_uint32_t_u(1UL))) || (((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_771, 0x4CAF824CL)), p_11.f3)) , p_11.f0) ^ 0UL)) == 0L) >= 4294967291UL), 0x93L)))) , p_11.f4)) < 65535UL)), g_737.f2)) <= 0x77F3L) , l_791) == l_790) != 0x0747L) , l_791), g_427))), l_770, p_11.f3, g_737.f2) , 0x3DL))) <= 0x4C00L) || 0xC6L) , g_64);
                    for (l_784.f0 = 2; (l_784.f0 <= 49); l_784.f0 = safe_add_func_uint8_t_u_u(l_784.f0, 4))
                    {
                        l_791 = ((safe_mod_func_int16_t_s_s((-1L), (func_47(g_64.f4, g_737.f3, p_11) | g_737.f0))) , (safe_add_func_int8_t_s_s((l_869 != g_737.f3), ((p_11.f2 || g_737.f2) && g_8))));
                        if (g_63.f3)
                            continue;
                        l_840 = l_785;
                    }
                    if ((((safe_lshift_func_int8_t_s_u((l_785 != ((l_874 != g_63.f3) & (l_816.f2 <= (~4L)))), 1)) , (l_875 | (g_64.f0 ^ ((((p_11.f1 , l_840) & l_839) && p_11.f2) >= p_14)))) ^ l_876))
                    {
                        l_840 = (safe_add_func_uint8_t_u_u(252UL, l_816.f4));
                        g_737 = g_63;
                        if (l_879)
                            break;
                    }
                    else
                    {
                        unsigned char l_886 = 0xB5L;
                        g_282 = (safe_mod_func_uint32_t_u_u(6UL, g_64.f3));
                        p_12 = ((g_737.f0 || p_11.f4) < ((safe_div_func_int8_t_s_s(g_64.f1, p_11.f1)) <= (safe_rshift_func_uint8_t_u_u(((0x48E1L & p_11.f4) <= l_816.f3), g_282))));
                        p_11 = func_38((l_886 || ((safe_sub_func_int32_t_s_s((((((-1L) & ((8L && 0x23C7L) || 3UL)) | (((safe_mul_func_uint16_t_u_u((p_13 ^ (p_14 , p_12)), ((l_876 != g_63.f0) , p_11.f3))) , g_63) , 4294967291UL)) && p_11.f3) , g_282), 0x1EC6F334L)) && p_11.f4)), p_10, g_8, g_737.f1, g_63.f3);
                    }
                }
                else
                {
                    int l_928 = 0L;
                    for (l_784.f2 = (-29); (l_784.f2 > 52); l_784.f2++)
                    {
                        unsigned char l_900 = 0UL;
                        unsigned short l_907 = 1UL;
                        l_899 = func_25(((safe_div_func_uint8_t_u_u((g_63.f0 && func_34((safe_add_func_int32_t_s_s((255UL || p_11.f1), (((-1L) == (((((safe_mul_func_uint16_t_u_u(p_11.f4, (func_34(func_52(p_11.f4), p_11) > g_427))) != 0xD3L) > p_11.f0) , p_11.f2) | g_261)) , p_13))), p_11)), 0x93L)) , p_12), p_11.f0, g_8, p_14);
                        l_900 = g_63.f1;
                        if (g_64.f2)
                            continue;
                        p_12 = (safe_mod_func_int8_t_s_s(p_12, ((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_907, p_11.f1)), (safe_sub_func_uint16_t_u_u(p_11.f0, (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((g_64.f2 != (((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((-1L), p_12)), 3L)) & (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_10, 0UL)), g_64.f1))) >= g_63.f2)), p_11.f3)) == p_13) & g_64.f1), l_899.f3)), g_63.f3)), 0x7EL)) < p_13), l_899.f3)))))) , l_928)));
                    }
                    return p_10;
                }
                for (g_63.f0 = 9; (g_63.f0 >= 6); g_63.f0--)
                {
                    struct S0 l_943 = {0x37E42B32L,1L,0x972602C9L,0xFB6B05ADL,0xA8L};
                    struct S0 l_944 = {1UL,-1L,0xB2FA90EBL,6L,0x18L};
                    g_282 = (~(safe_rshift_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((-8L) >= (safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s(p_11.f4, l_899.f4)) , g_62), 5))), 0xD3533A79L)) , ((p_12 <= ((safe_add_func_uint16_t_u_u(p_13, 0xF995L)) >= ((l_771 || 249UL) == g_64.f0))) < l_899.f4)) , g_261), g_64.f4)));
                    for (g_64.f3 = (-30); (g_64.f3 == (-8)); g_64.f3 = safe_add_func_uint8_t_u_u(g_64.f3, 6))
                    {
                        l_944 = l_943;
                        p_12 = ((l_748 & (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_11.f1, g_737.f1)), 7))) || (l_949 , p_11.f2));
                        p_12 = (p_11.f4 == (((((safe_lshift_func_int8_t_s_u(l_899.f0, 7)) , (g_63 , g_8)) != (((p_11.f0 && (safe_div_func_int32_t_s_s(g_737.f0, g_954))) > p_12) < ((safe_add_func_int16_t_s_s(l_791, g_737.f4)) ^ 0xED2EL))) , l_949) && 0x7A2AL));
                    }
                    p_12 = l_839;
                    for (l_816.f3 = (-17); (l_816.f3 < (-17)); l_816.f3 = safe_add_func_int8_t_s_s(l_816.f3, 4))
                    {
                        p_12 = ((p_12 ^ (safe_lshift_func_uint8_t_u_s((l_784.f2 , (l_816.f0 , 255UL)), p_11.f1))) > ((safe_rshift_func_uint16_t_u_u((l_874 > ((safe_add_func_int32_t_s_s(p_14, l_965)) , (((0L < 7L) != g_64.f4) , 0x73L))), 10)) > l_875));
                        l_966 = l_816;
                        g_62 = (safe_div_func_uint32_t_u_u(l_879, p_10));
                        g_62 = l_943.f1;
                    }
                }
            }
            else
            {
                char l_978 = (-7L);
                struct S0 l_981 = {0x08B50E12L,0x53L,0x33B53C8BL,0x45BC175CL,0UL};
                p_11 = l_969;
                p_11 = (((safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((g_64.f1 , ((safe_add_func_uint16_t_u_u(((l_978 > 65535UL) & p_14), (l_784.f4 && (((safe_sub_func_uint16_t_u_u((p_13 , g_737.f0), p_13)) > (p_10 & 0x6706E670L)) <= p_13)))) && g_737.f4)) | 0xEA545069L), 65532UL)), g_64.f2)) , (-8L)), l_790)) >= p_14) , l_981);
                if (((safe_mod_func_uint16_t_u_u(func_34(((safe_sub_func_uint16_t_u_u(func_34((l_899 , 1UL), l_981), (((((((safe_mod_func_uint8_t_u_u(p_11.f3, ((((l_969.f0 && (1L != p_11.f3)) , l_899.f4) , g_737.f3) , g_737.f3))) < p_11.f1) || l_969.f4) < 0x2CL) ^ 0x20L) ^ l_899.f4) | g_737.f4))) , p_11.f0), g_737), 0x5F79L)) , 0x98070873L))
                {
                    if (p_11.f1)
                        break;
                }
                else
                {
                    short l_992 = 1L;
                    struct S0 l_1013 = {0xC5F61750L,-3L,4294967295UL,0x21CA3BAFL,0xDFL};
                    int l_1014 = 0xF4670951L;
                    l_1004 = ((safe_mul_func_int16_t_s_s((func_47((safe_add_func_uint8_t_u_u(p_10, (l_992 && (l_784.f2 && g_63.f4)))), (safe_mod_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s(l_770, ((safe_mod_func_uint16_t_u_u(0xCBB0L, p_12)) == (safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((1UL >= ((l_784.f2 , g_737.f4) & l_978)), g_63.f0)) >= l_1003), g_282))))) != p_14) & l_966.f2) || l_1003), g_63.f3)), p_11) , p_14), p_10)) ^ g_737.f2);
                    l_1014 = ((((safe_rshift_func_int16_t_s_s((func_47(l_784.f2, func_44(g_63.f3, (safe_mul_func_uint16_t_u_u(l_879, (safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((g_427 , 0x21L), 3)), p_12))))), l_1013) | (-10L)), p_11.f4)) , g_737.f1) > l_1013.f1) == l_969.f0);
                    return l_1013.f0;
                }
                for (l_966.f2 = 0; (l_966.f2 != 14); l_966.f2 = safe_add_func_uint8_t_u_u(l_966.f2, 6))
                {
                    int l_1017 = 0x1EA53CDEL;
                    l_1017 = (0x96L >= p_14);
                    if (g_64.f2)
                        break;
                    return l_784.f4;
                }
            }
            g_282 = (safe_mul_func_uint16_t_u_u((func_52(g_737.f0) , 0UL), (safe_div_func_int16_t_s_s(l_899.f1, g_64.f1))));
            for (p_12 = 0; (p_12 != (-28)); p_12 = safe_sub_func_int16_t_s_s(p_12, 6))
            {
                unsigned l_1038 = 0UL;
                p_11 = func_38((((g_8 , (safe_rshift_func_int16_t_s_u(0x0B55L, (safe_rshift_func_int16_t_s_u(g_737.f1, 13))))) & (g_64.f4 != p_14)) & (safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(p_11.f0, (~((safe_sub_func_int8_t_s_s(((p_13 | func_52(g_63.f0)) > p_11.f3), l_966.f3)) & g_64.f0)))), g_737.f4)) , 2L), l_899.f3)), 1L))), g_261, l_1038, l_899.f3, p_11.f1);
            }
        }
        l_839 = g_64.f4;
    }
    l_784 = func_38(l_770, (((l_784.f3 , (safe_mul_func_uint16_t_u_u(l_879, (((func_52((!(((safe_mul_func_uint16_t_u_u((g_737.f2 , (safe_add_func_int32_t_s_s(((-1L) | p_12), func_44(g_64.f3, p_11.f0)))), 0x2972L)) | l_784.f1) || g_63.f1))) && (-4L)) | g_261) <= l_784.f1)))) && 0xB5L) != 0L), g_427, l_784.f4, l_879);
    return l_784.f2;
}







static unsigned short func_21(int p_22, struct S0 p_23, unsigned short p_24)
{
    unsigned char l_738 = 0xFCL;
    char l_739 = 0xDFL;
    struct S0 l_742 = {9UL,0L,4294967286UL,0x82944D84L,255UL};
    int l_743 = 0x3832D81BL;
    l_738 = g_64.f0;
    l_743 = func_47((p_23.f2 & p_23.f4), ((l_739 , 1L) < (g_62 == ((g_62 < (safe_sub_func_uint16_t_u_u(p_22, ((p_23.f4 <= (((p_23.f2 <= 0x565CL) <= g_64.f4) ^ 1L)) , l_739)))) , g_737.f4))), l_742);
    l_742 = g_64;
    l_743 = g_261;
    return g_63.f4;
}







static struct S0 func_25(short p_26, short p_27, char p_28, unsigned char p_29)
{
    unsigned char l_718 = 255UL;
    int l_727 = 0xB4623908L;
    struct S0 l_728 = {0UL,0x9FL,0x5BDDDFB8L,0x0F4132EBL,0xA5L};
    l_727 = (l_718 >= (safe_lshift_func_uint16_t_u_u((0x9B6EDBEFL ^ ((2UL != (safe_lshift_func_int8_t_s_s((249UL != 0L), (safe_mod_func_uint16_t_u_u(func_34((safe_rshift_func_int16_t_s_s(l_727, l_718)), l_728), l_728.f4))))) , g_63.f3)), 6)));
    for (l_728.f1 = (-8); (l_728.f1 <= 10); l_728.f1 = safe_add_func_uint16_t_u_u(l_728.f1, 7))
    {
        l_727 = (0x582ECA61L | (safe_mod_func_uint8_t_u_u(((func_47(p_28, p_26, l_728) == (g_282 | (safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x30L, g_261)), p_28)))) == 1UL), g_282)));
        if (l_727)
            continue;
        return l_728;
    }
    return g_64;
}







static unsigned func_34(unsigned p_35, struct S0 p_36)
{
    unsigned short l_682 = 6UL;
lbl_693:
    g_62 = 0L;
    if ((safe_mod_func_uint16_t_u_u(0x3E18L, (0xC41EL || ((l_682 >= (safe_add_func_int16_t_s_s((+p_36.f1), (((((p_36.f3 , ((g_63.f3 <= ((safe_sub_func_uint8_t_u_u(l_682, (safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(g_261, (p_36.f1 ^ 0x8D1942E9L))) && 0x5BL), l_682)))) >= 4294967295UL)) && 0x35L)) & 0x2F18EA6DL) == p_36.f0) , l_682) , p_36.f4)))) | l_682)))))
    {
        int l_698 = 0x5E0D4B2EL;
        for (p_36.f0 = 0; (p_36.f0 < 43); ++p_36.f0)
        {
            unsigned short l_705 = 65535UL;
            int l_706 = 5L;
            if (p_36.f3)
                goto lbl_693;
            if (g_64.f3)
                continue;
            l_706 = (p_35 , (safe_div_func_uint8_t_u_u(p_36.f2, func_44(((safe_add_func_int8_t_s_s((l_698 <= g_64.f4), (func_52((((func_52((safe_mod_func_int16_t_s_s((l_682 , (!0L)), l_698))) || ((safe_rshift_func_uint16_t_u_s(((~(safe_add_func_int32_t_s_s(l_705, p_36.f2))) , 0x9103L), g_64.f1)) || 0x38574A42L)) > l_705) & l_682)) & g_282))) >= 0x34L), p_36.f2))));
            for (g_282 = 0; (g_282 < (-28)); g_282 = safe_sub_func_uint8_t_u_u(g_282, 1))
            {
                l_698 = l_698;
                return g_63.f2;
            }
        }
    }
    else
    {
        g_63 = g_63;
    }
    g_282 = ((safe_mod_func_int32_t_s_s((l_682 != (p_36.f2 < (l_682 >= (l_682 && (p_35 , (((safe_sub_func_int16_t_s_s((g_282 , ((((safe_mod_func_uint32_t_u_u(((p_36.f1 , (safe_div_func_int8_t_s_s(l_682, p_36.f1))) , 4294967295UL), l_682)) , 1L) == 0xBBL) & (-9L))), 1L)) && l_682) ^ g_63.f2)))))), g_64.f1)) > 1UL);
    return g_63.f1;
}







static struct S0 func_38(unsigned p_39, unsigned p_40, int p_41, unsigned p_42, unsigned short p_43)
{
    int l_389 = 1L;
    int l_404 = 0L;
    struct S0 l_428 = {4294967287UL,0xCAL,8UL,0xEE240759L,255UL};
    char l_429 = (-1L);
    char l_471 = 0x93L;
    char l_476 = (-5L);
    short l_480 = 1L;
    short l_483 = 0L;
    int l_538 = 0x9427F389L;
    struct S0 l_605 = {0xD4B4474AL,-4L,4294967295UL,0x277210A9L,0xC2L};
    struct S0 l_630 = {0UL,-6L,4294967293UL,0L,0UL};
    if ((l_389 || ((safe_mul_func_uint16_t_u_u(g_64.f4, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(0xA164C548L, (-8L))), 3)))) & (0xB6L != (+(p_39 == (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((p_42 < ((~1UL) | (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((p_40 <= l_389), l_389)) <= l_404), 1)))), g_282)) & g_8), g_63.f4)) >= 0xF994BD5DL) == l_389)))))))
    {
        unsigned l_407 = 3UL;
        struct S0 l_430 = {4294967295UL,0x87L,0x815F8AACL,-2L,0x06L};
        int l_431 = 0x69416652L;
        unsigned char l_441 = 0UL;
        l_431 = (func_47(func_47(func_44(p_40, (0x35L < (l_407 != (((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u(func_47((((safe_unary_minus_func_uint16_t_u(((l_407 , (((safe_sub_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0x94BBL, (safe_div_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((((4L >= (func_44((0x3F2CL == (+(safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(0x7A122B65L, g_64.f3)) | 1L), 0x4AL)))), p_41) , p_43)) || 0UL) <= 0x4389L), g_261)) , p_40) & p_41) < g_8), 0x0DBBL)))), g_427)) , 0UL) >= 0UL), 5L)) || g_63.f3) && l_404)) , 65535UL))) > g_8) > l_407), p_39, l_428), l_428.f2)) & g_427) || l_429), 2)) , 0xB1L) != p_42)))), p_39, l_430), g_8, l_428) , p_43);
        l_430 = l_428;
        for (l_430.f3 = (-24); (l_430.f3 == (-3)); ++l_430.f3)
        {
            struct S0 l_434 = {0xBE4A733FL,1L,0x9688306BL,0L,0xADL};
            l_428 = l_434;
        }
        g_62 = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((g_64.f4 , l_430) , p_42), (g_261 | ((((safe_sub_func_int16_t_s_s(l_429, 1L)) == l_441) , p_39) != 246UL)))), 2));
    }
    else
    {
        unsigned char l_444 = 0x57L;
        short l_455 = 8L;
        char l_456 = 0x34L;
        int l_457 = (-8L);
        l_457 = (safe_lshift_func_int8_t_s_s(5L, ((l_444 , (safe_div_func_int32_t_s_s(g_63.f1, (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((p_39 <= (safe_rshift_func_uint8_t_u_u(((((((g_63.f4 > l_428.f0) && (0x263EL == (safe_mod_func_uint32_t_u_u(4294967295UL, l_455)))) > g_64.f2) , p_39) | l_389) != p_43), 1))) == p_41), l_444)), l_456))))) != l_429)));
        l_457 = 1L;
        l_428 = l_428;
        l_476 = (((g_282 != (safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((l_389 & (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(p_42, 12)), (safe_div_func_uint32_t_u_u(func_47(g_427, l_444, (l_471 , l_428)), ((safe_mul_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u(p_41, 0xCB72L)) , g_261) , g_282) >= 0x7E9E9159L), p_39)) | 1L)))))))), 9L)) , l_457) ^ p_39), l_444)) , g_63.f2), g_282))) , p_41) <= l_457);
    }
    l_428 = l_428;
    g_282 = (0UL && func_52((((p_42 || (g_63.f2 , ((safe_unary_minus_func_int16_t_s(func_47(p_41, (((safe_mod_func_uint8_t_u_u(l_428.f1, l_480)) | g_64.f1) <= (p_39 & (safe_rshift_func_int8_t_s_u((l_471 && l_428.f0), g_64.f3)))), l_428))) , l_483))) > p_40) , (-4L))));
    if (g_64.f4)
    {
        short l_496 = 1L;
        int l_497 = 1L;
        unsigned char l_512 = 1UL;
        struct S0 l_519 = {0x34181A82L,0xE3L,0UL,0x8F1AE902L,0xB3L};
        char l_578 = (-1L);
        short l_589 = 0x5690L;
        unsigned char l_596 = 0x22L;
        unsigned l_603 = 0xC778831BL;
        if (((((safe_mul_func_int16_t_s_s(g_63.f3, (safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(p_39, p_40)), l_429)))) != (safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(0x07855D22L, g_63.f2)) , 0x72L), (safe_div_func_uint16_t_u_u(((((g_64.f3 ^ (p_40 > 65535UL)) <= 0x22L) , p_41) || 2L), l_496))))) < p_43) != p_42))
        {
            l_497 = l_496;
        }
        else
        {
            unsigned short l_508 = 0x9442L;
            struct S0 l_509 = {0x9DF86A6FL,0xEFL,0x070EBD95L,-4L,0x20L};
            if (((func_52((((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_43 == g_62), l_404)), (l_404 ^ p_39))) && (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((g_64.f3 && (l_496 , (p_40 < ((g_64.f4 < (-7L)) < (-7L))))), g_63.f3)) , g_63.f0), l_480)), g_64.f4))) > g_282)) != 1L) > l_508))
            {
                int l_515 = (-1L);
                l_509 = g_63;
                p_41 = (((g_64 , p_39) != (((safe_mod_func_int32_t_s_s(p_42, (l_512 ^ (1L != g_282)))) , ((func_52(g_62) , (func_52((safe_div_func_int32_t_s_s(g_427, p_41))) >= l_515)) , p_40)) , g_8)) & 0x4C73L);
                for (l_476 = 20; (l_476 <= 3); --l_476)
                {
                    struct S0 l_518 = {0UL,-10L,0xB551B8BCL,0xB3AAE569L,0xF7L};
                    l_519 = l_518;
                    for (g_427 = (-28); (g_427 >= (-20)); g_427 = safe_add_func_uint32_t_u_u(g_427, 1))
                    {
                        g_62 = 0x332B7022L;
                    }
                    g_62 = (safe_add_func_int32_t_s_s(((p_39 != g_64.f2) , g_64.f2), g_64.f1));
                    l_519 = l_519;
                }
            }
            else
            {
                struct S0 l_528 = {4294967287UL,0x63L,0x7591BBE3L,0L,0xB2L};
                g_282 = (safe_add_func_int8_t_s_s((func_52((safe_add_func_uint16_t_u_u(((1L <= 0xF1E1L) ^ g_261), (l_528 , (safe_sub_func_uint16_t_u_u(((((l_519.f1 ^ ((safe_unary_minus_func_int32_t_s(((0L ^ (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(func_47(p_40, (safe_rshift_func_int16_t_s_s((!0x52AAL), 2)), g_63), p_39)) & p_42), l_428.f0))) <= 1L))) == l_538)) == 1UL) && g_63.f1) <= p_42), l_519.f1)))))) , 1L), g_427));
                return l_428;
            }
            for (g_63.f4 = 0; (g_63.f4 != 57); g_63.f4 = safe_add_func_int16_t_s_s(g_63.f4, 8))
            {
                if (l_509.f3)
                    break;
                p_41 = ((safe_mod_func_int8_t_s_s(((p_42 < (g_64.f1 ^ (safe_mod_func_int32_t_s_s(((~p_40) , (safe_lshift_func_uint16_t_u_s(p_41, g_63.f3))), ((l_509.f0 <= (((((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((((0xE7F07BE5L || ((p_41 | (p_41 && 2L)) || g_64.f4)) >= 0xA4L) > p_43) != 0x99E49EBDL), p_41)), p_42)), 7)), p_43)) & 4294967286UL) > 1UL) , p_39) & p_42) | 4294967295UL) && p_42)) , 0xA6F99F1BL))))) , p_41), 254UL)) != (-3L));
                for (p_40 = 0; (p_40 < 9); ++p_40)
                {
                    struct S0 l_557 = {0x413C5CF9L,-6L,0x74C066D7L,0L,0xA6L};
                    l_428 = g_64;
                    p_41 = (((l_557 , (!l_496)) | 0xD138L) == p_42);
                }
                l_509 = l_519;
            }
            l_509 = ((((~(safe_mul_func_uint16_t_u_u((g_63.f1 || l_496), ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((p_40 == ((safe_rshift_func_uint8_t_u_s(g_63.f2, 5)) <= ((safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_509.f2, ((safe_mod_func_uint32_t_u_u((0x3657L < (((safe_add_func_uint16_t_u_u(g_8, (((safe_sub_func_uint8_t_u_u(g_63.f2, (safe_sub_func_int8_t_s_s((g_63.f3 && l_519.f1), l_509.f2)))) == p_42) ^ l_508))) ^ l_496) < l_519.f2)), l_578)) ^ 8UL))) >= 4294967295UL), 0x88A5L)) & 0x05BEL))), 12)), (-10L))) , l_429)))) <= p_41) == 0x8559L) , g_63);
        }
        for (l_428.f1 = 0; (l_428.f1 == 15); l_428.f1 = safe_add_func_int8_t_s_s(l_428.f1, 4))
        {
            char l_597 = 0x8DL;
            struct S0 l_599 = {0UL,-4L,4294967289UL,3L,0x1BL};
            int l_600 = 0xDE822062L;
            if ((((safe_mod_func_int8_t_s_s(((0xD8L >= func_47(l_538, func_44((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(0xA8L, (6UL || 0UL))), func_52((((l_589 ^ (0UL != (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_596, func_52(((-1L) | g_62)))), 0x55C66E6FL)), l_428.f3)))) , p_39) && 250UL)))), p_39), l_519)) >= p_42), l_428.f1)) , l_597) < p_39))
            {
                struct S0 l_598 = {4294967295UL,0xABL,2UL,2L,250UL};
                l_598 = l_428;
                l_599 = l_598;
                g_64 = l_428;
            }
            else
            {
                l_519 = g_63;
                l_600 = (~(p_43 || l_428.f1));
            }
            for (g_64.f1 = 0; (g_64.f1 == 13); g_64.f1 = safe_add_func_int16_t_s_s(g_64.f1, 1))
            {
                struct S0 l_604 = {0UL,1L,4294967295UL,0x818CA980L,0xCDL};
                l_603 = g_64.f0;
                l_605 = l_604;
                l_497 = ((((p_40 || (safe_add_func_int8_t_s_s(p_39, (p_40 > l_604.f3)))) > ((-2L) > l_600)) , (safe_sub_func_int16_t_s_s(((func_52((safe_div_func_uint16_t_u_u(l_389, p_39))) != g_64.f1) , p_41), p_40))) , g_282);
            }
            l_599 = g_64;
        }
        for (g_427 = 0; (g_427 <= (-22)); g_427--)
        {
            unsigned l_616 = 8UL;
            struct S0 l_629 = {5UL,0xBBL,4294967294UL,0x3004C585L,0x84L};
            g_62 = p_40;
            l_389 = ((safe_div_func_uint32_t_u_u(l_616, (l_428.f1 || (l_496 , ((safe_sub_func_int8_t_s_s((l_616 , (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_616, (safe_lshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s(func_47(g_64.f3, (+0x546D3699L), l_519), l_519.f1)) > l_519.f3), g_261)))), 250UL)), g_282))), g_8)) || l_616))))) , l_428.f2);
            l_630 = l_629;
        }
    }
    else
    {
        char l_648 = (-9L);
        struct S0 l_671 = {0xC6B7690DL,0x92L,4294967295UL,0xAA1786AAL,0xD0L};
        for (l_404 = (-6); (l_404 != (-12)); l_404 = safe_sub_func_int32_t_s_s(l_404, 1))
        {
            unsigned short l_635 = 0xA927L;
            int l_636 = 0x0B07FA44L;
            struct S0 l_639 = {0xD89EDB8EL,0x43L,0x9AAF240EL,0x4B6D1AA8L,0x35L};
            struct S0 l_651 = {0xDADB4494L,1L,0UL,1L,0xB6L};
            for (l_605.f0 = 0; (l_605.f0 <= 4); l_605.f0 = safe_add_func_uint16_t_u_u(l_605.f0, 7))
            {
                g_63 = g_63;
            }
            l_636 = l_635;
            for (g_427 = 29; (g_427 != 29); g_427++)
            {
                int l_645 = 0xD3280E93L;
                struct S0 l_670 = {0xC146AE00L,0x9BL,0xDE971120L,0x02F65D3BL,0x0EL};
                l_639 = g_63;
                for (l_630.f4 = 0; (l_630.f4 <= 26); l_630.f4 = safe_add_func_int32_t_s_s(l_630.f4, 4))
                {
                    struct S0 l_642 = {0xED64D7A9L,0x53L,0UL,-4L,1UL};
                    short l_664 = 0x5902L;
                    int l_668 = 0L;
                    g_63 = l_642;
                    g_62 = (safe_add_func_uint16_t_u_u((l_645 && ((+(safe_lshift_func_uint8_t_u_u((!(l_648 <= (((safe_sub_func_uint16_t_u_u(((l_651 , (((safe_rshift_func_int8_t_s_u((((((0L == g_62) == (-5L)) ^ (((p_39 | ((((+(g_63 , (safe_div_func_int32_t_s_s((((0xDCCDBCE9L <= 0x57191B84L) > g_282) , l_642.f2), 9UL)))) > 0x83L) <= l_648) , p_41)) , p_43) & 1L)) | (-1L)) , (-1L)), 1)) || 3UL) && p_41)) , 1UL), 65534UL)) , l_642.f3) , g_64.f1))), 1))) | l_642.f4)), g_427));
                    if (((0UL & ((safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((l_648 , ((0L == (~g_427)) >= g_427)), ((l_642.f3 ^ 1L) && p_43))) && (safe_add_func_int32_t_s_s((g_64.f4 || l_664), 1UL))), g_63.f3)) && l_651.f1), 1UL)) || 0x1DL)) > g_8))
                    {
                        return l_639;
                    }
                    else
                    {
                        unsigned l_667 = 0x99C5FB5DL;
                        struct S0 l_669 = {0xC34096A8L,0xFFL,9UL,0x2E9836B3L,0x0BL};
                        l_668 = (g_8 , (0x78E7L & (g_8 <= ((safe_lshift_func_int16_t_s_s(l_664, 3)) ^ (p_43 || func_44(g_63.f1, l_667))))));
                        l_669 = l_669;
                        l_642 = l_669;
                        l_671 = l_670;
                    }
                }
                p_41 = g_8;
                p_41 = ((safe_lshift_func_int16_t_s_s(l_635, 10)) == ((func_47(g_62, (p_42 , l_670.f1), l_605) > (safe_lshift_func_uint16_t_u_s(g_427, (safe_rshift_func_int16_t_s_s(((0xF488L ^ ((safe_sub_func_int16_t_s_s(g_8, 8UL)) < l_671.f4)) != 0x87D2L), 7))))) , 0L));
            }
        }
    }
    return g_63;
}







static unsigned short func_44(int p_45, unsigned p_46)
{
    int l_137 = 0x15C821C9L;
    struct S0 l_164 = {1UL,0x63L,4294967295UL,0x9B144328L,0xD5L};
    unsigned l_262 = 4294967295UL;
    g_62 = (safe_sub_func_uint32_t_u_u(l_137, (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(g_64.f2, 7)) || p_45), (p_45 , g_62))), g_62)), (0xDFL && (g_64.f2 ^ (safe_sub_func_uint8_t_u_u((l_137 , p_46), 0x6BL))))))));
    if (((g_64.f0 & func_52(p_46)) <= (safe_mul_func_uint8_t_u_u(g_64.f0, (safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(p_45, (p_46 < (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((g_64.f4 != (3L >= (p_45 == l_137))) > g_8), p_46)) & g_64.f2), l_137)), p_45))))), p_46)), l_137))))))
    {
        short l_162 = 0x5430L;
        struct S0 l_163 = {0xFB15E954L,1L,0x9E95A25EL,0xA794E2E8L,0xBEL};
        unsigned l_218 = 4294967286UL;
        int l_254 = 3L;
        short l_270 = 1L;
        unsigned char l_314 = 0x2AL;
        int l_315 = 0x25D3297FL;
        g_62 = (9L ^ l_162);
        if (g_62)
        {
            unsigned char l_177 = 0x52L;
            g_63 = l_163;
            l_164 = l_163;
            if (((safe_lshift_func_int16_t_s_s(g_64.f1, 0)) != (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(1L, 4294967286UL)), (((safe_rshift_func_int8_t_s_u(func_52((((func_52((func_52((l_177 , func_52(g_64.f4))) || (((g_64.f2 , 9UL) == p_46) <= g_63.f4))) ^ g_64.f4) , p_45) >= l_163.f1)), 0)) & l_162) ^ l_162))), 6)), g_64.f1))))
            {
                g_64 = g_63;
                l_163 = g_64;
            }
            else
            {
                p_45 = p_45;
            }
        }
        else
        {
            short l_180 = 0L;
            unsigned char l_209 = 246UL;
            struct S0 l_232 = {4294967290UL,0x2EL,4294967288UL,0x868C450EL,0xBAL};
            short l_233 = 0x0161L;
            l_137 = (((safe_rshift_func_int16_t_s_u(0L, 11)) | l_180) && ((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(g_62, g_63.f0)) & ((safe_mod_func_uint16_t_u_u((g_63 , ((safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((0x945F2B69L >= (((safe_mul_func_int8_t_s_s(l_163.f4, ((!(safe_lshift_func_uint8_t_u_u((((((((safe_div_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(65529UL, ((~g_64.f3) | 2UL))), 6)) , l_163.f0) == l_164.f1) < p_45), p_46)) < 0L) | 0xB6L) >= g_8), p_45)) >= g_62) , g_64.f0), g_8)) <= l_209) < l_162) & 4294967291UL) , g_64.f0) && g_63.f4) != 0x4DL), 1))) != g_63.f3))) >= l_162) <= p_46)) && 1L), p_46)), g_64.f1)) <= g_64.f0), g_63.f3)) , l_163.f2)), l_137)) , l_163.f0)) , g_64.f4) , 65535UL), p_46)), l_163.f2)) , p_46) , g_64.f0) , 0x573CL));
            if ((((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_52(g_63.f0), p_46)), (+((l_164.f2 | p_46) > 0x62L)))) > (0xC7CC7870L < g_64.f1)) & (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(l_218, 0)) <= l_164.f4), 0xB9L))))
            {
                char l_229 = 4L;
                p_45 = (p_46 > (((safe_rshift_func_uint8_t_u_u(p_45, ((!0x4DL) < func_52(((l_209 & l_137) | (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_45, 7)), (safe_lshift_func_int8_t_s_u(((p_46 || (g_64.f0 , g_63.f2)) == g_64.f2), l_229)))), 4))))))) , p_46) | 0xEDL));
            }
            else
            {
                l_164 = l_163;
            }
            p_45 = (safe_add_func_uint16_t_u_u(l_163.f4, (l_232 , l_233)));
            g_63 = l_232;
        }
        if (g_64.f1)
        {
            struct S0 l_234 = {4294967295UL,0xA3L,4294967288UL,0x9874B10DL,0x90L};
            int l_241 = 0x0565C952L;
            l_163 = l_234;
lbl_263:
            for (g_63.f3 = (-23); (g_63.f3 <= 10); ++g_63.f3)
            {
                g_62 = (safe_div_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(l_241, (((safe_sub_func_uint8_t_u_u(((((p_45 && g_64.f4) >= (safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(((l_234.f4 || (safe_sub_func_uint16_t_u_u(l_254, (g_63.f0 < 0x00L)))) && 7UL), (safe_add_func_uint32_t_u_u((((((safe_rshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(l_234.f4, g_63.f2)), g_261)) >= p_46) ^ g_64.f1) , g_64.f2) , g_64.f0), g_62)))) ^ p_46), l_234.f0)), g_64.f4)), 5))) , p_46) | p_45), 0x58L)) | p_46) <= p_45))) != p_46) ^ l_262), 1UL));
                l_241 = g_63.f0;
                if (l_163.f3)
                    goto lbl_263;
            }
            p_45 = ((((safe_mod_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(p_45, p_45)) >= (func_52(p_45) , (!func_47(g_63.f3, l_234.f3, (((safe_unary_minus_func_int16_t_s(p_45)) >= (safe_unary_minus_func_uint8_t_u((l_162 ^ g_64.f2)))) , g_64))))), g_261)) != g_261) && l_270) ^ p_45);
        }
        else
        {
            char l_275 = 0x36L;
            unsigned short l_285 = 0xA084L;
            g_282 = (safe_mul_func_int16_t_s_s(0x8B93L, ((safe_lshift_func_uint16_t_u_u(l_275, ((((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(func_52(((safe_div_func_int32_t_s_s((-5L), p_45)) <= p_45)), 0UL)), (p_45 > g_64.f2))) != 0xD9L) > p_46) , 0x41CCL))) >= p_45)));
            if ((safe_div_func_uint8_t_u_u(((l_285 | (g_63.f0 , g_64.f4)) & (((((((safe_mod_func_uint16_t_u_u((+(safe_sub_func_int8_t_s_s(l_275, ((safe_sub_func_uint8_t_u_u(0x83L, (0x918540E8L >= (safe_mul_func_uint8_t_u_u(0UL, (p_46 , g_62)))))) > g_64.f1)))), 0xF354L)) == p_46) , 0L) > p_45) ^ g_64.f1) > l_137) && p_46)), l_270)))
            {
                g_282 = p_45;
            }
            else
            {
                unsigned char l_298 = 0x24L;
                int l_299 = 0L;
                for (p_46 = (-19); (p_46 < 4); p_46 = safe_add_func_int8_t_s_s(p_46, 4))
                {
                    if (l_164.f4)
                        break;
                    g_62 = (-1L);
                    l_299 = func_52((l_163 , (func_52((((((g_64.f0 || (func_52(((g_63.f1 | g_64.f0) > 1L)) > 0L)) >= (safe_mul_func_int8_t_s_s((l_298 > p_46), l_218))) | g_64.f0) , 0x4FL) && l_137)) > g_8)));
                    return p_46;
                }
            }
            l_315 = ((g_64.f4 ^ g_282) && ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((-8L) | (safe_add_func_uint8_t_u_u(8UL, g_261))), (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((g_63.f1 , l_285) , func_47(((safe_add_func_uint8_t_u_u(p_46, (((l_314 ^ 4294967295UL) >= g_282) || l_275))) <= l_275), l_163.f3, l_163)), 3)), p_45)))), g_261)) <= l_275), p_45)) >= l_285));
            l_315 = func_52(l_163.f2);
        }
    }
    else
    {
        unsigned char l_318 = 0xC9L;
        struct S0 l_327 = {0x9B7089B1L,4L,0xBA30C083L,0L,0xE5L};
        int l_358 = (-1L);
        unsigned short l_373 = 65535UL;
        p_45 = func_52(g_64.f4);
        if (func_47(((((l_318 && (func_52(p_46) >= l_318)) && l_164.f3) , (p_46 <= g_63.f1)) == 8L), (!(safe_mod_func_int32_t_s_s((((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_318, 0x26C4L)) & 0x4397L), l_318)), g_64.f2)) | l_318) , l_318), g_261))), l_164))
        {
            unsigned short l_340 = 1UL;
            int l_341 = 0x572109CDL;
            unsigned short l_342 = 0UL;
            struct S0 l_345 = {0UL,-8L,0x7B079A7CL,-9L,247UL};
            g_63 = l_327;
            g_282 = ((((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(g_282, ((safe_lshift_func_uint16_t_u_u(((p_45 < ((safe_lshift_func_uint8_t_u_u(g_63.f2, 1)) >= 1UL)) , ((l_340 && (0L ^ l_341)) | func_52((!l_164.f4)))), l_318)) || 0xD6401BE5L))) && g_64.f0) || 0UL), l_342)), l_164.f3)), 0UL)) , l_327.f2) && l_340) ^ g_8);
            l_341 = ((safe_mul_func_uint16_t_u_u((l_345 , g_282), func_47(((safe_mod_func_int16_t_s_s(((g_64.f4 != l_342) == (g_64.f2 > (safe_mod_func_int8_t_s_s((l_262 < p_45), (l_341 , (-7L)))))), g_63.f2)) , 0x34E4L), l_345.f4, l_327))) | g_261);
            p_45 = p_45;
        }
        else
        {
            g_282 = func_52(((g_64.f2 != func_52((((p_45 > g_64.f3) , (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_45 & 0xABL), g_64.f1)), 10))) , (g_62 | (safe_mod_func_int8_t_s_s((-1L), p_45)))))) && 0x2AL));
            return g_62;
        }
        l_358 = (g_62 && (+(safe_mod_func_int32_t_s_s((g_282 != g_64.f1), g_63.f3))));
        l_358 = ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(l_137, 11)) >= ((0xE7L < g_63.f3) , ((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((p_46 && g_63.f2), (safe_mul_func_uint16_t_u_u(l_327.f0, (l_373 | (safe_mul_func_uint16_t_u_u(((p_46 == 0x1F614FD7L) != p_45), 0x3E85L))))))) || 0x6AL) & p_45), 0xCD9FL)) > l_137))) | 1L), l_327.f1)) == g_64.f2), g_63.f3)) == 0x128878A9L);
    }
    g_62 = l_164.f2;
    p_45 = ((safe_mul_func_uint8_t_u_u(func_52(func_47((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_45, func_52(g_63.f4))), ((safe_unary_minus_func_int8_t_s(0x5BL)) , (safe_mod_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u(0x08L, (g_8 | p_45))) == (((((safe_div_func_int8_t_s_s((l_164.f2 == p_46), p_46)) || g_64.f2) ^ l_262) >= g_8) <= p_46)) & g_64.f3) < 0xE6L) > p_46), 8UL))))), p_45, l_164)), 2L)) >= g_282);
    return p_46;
}







static int func_47(short p_48, unsigned p_49, struct S0 p_50)
{
    char l_67 = 6L;
    unsigned l_89 = 0UL;
    int l_90 = (-4L);
    struct S0 l_130 = {0x74F060B1L,0xE6L,0x750ADD41L,0x25E917A8L,4UL};
    for (g_64.f2 = (-4); (g_64.f2 <= 49); g_64.f2++)
    {
        if (l_67)
            break;
    }
    l_90 = (((func_52((((safe_unary_minus_func_int8_t_s(l_67)) || 0x48EC3DF5L) && 0x98L)) & (((((safe_add_func_uint32_t_u_u(0x859E2267L, (safe_add_func_uint32_t_u_u(g_64.f0, ((safe_mod_func_uint32_t_u_u(0x08D8D3B6L, (safe_add_func_uint32_t_u_u((((p_50.f0 || (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((((((((g_64.f0 , l_89) || p_50.f2) <= g_64.f4) , l_67) <= l_67) && p_48) , p_50.f2), l_89)) , l_89), g_64.f2)), 4)), 0x0B4C8B43L)), 6)) , p_50.f4), 1))) || p_48) | 1L), l_67)))) != l_89))))) > p_48) > p_50.f3) , p_50.f1) & l_89)) == g_64.f1) ^ 0x2529581CL);
    if (((g_62 > g_63.f4) & p_50.f1))
    {
        int l_91 = 0x42BEB928L;
        g_62 = l_91;
    }
    else
    {
        unsigned char l_95 = 0x8CL;
        int l_100 = 0xF7E953CDL;
        struct S0 l_101 = {1UL,-10L,0xA3753CE4L,0x9C6BC522L,247UL};
        l_100 = ((((((((safe_mod_func_int8_t_s_s(0xF2L, (g_64.f0 , ((g_62 && g_63.f2) ^ (safe_unary_minus_func_int8_t_s(l_90)))))) , func_52(l_95)) < (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_67, g_64.f3)), l_89))) , g_63.f0) != p_50.f1) < l_89) > l_89) >= 0x42L);
        l_101 = g_64;
        g_62 = (l_67 >= (7UL < (((safe_add_func_uint8_t_u_u(g_63.f3, p_50.f1)) <= p_50.f3) >= ((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((g_64.f2 & (l_90 == l_101.f4)) || g_64.f2) & p_50.f4), l_101.f1)), p_50.f4)), p_50.f2)) < p_48))));
        if ((!(!(((safe_sub_func_int16_t_s_s((l_89 , p_50.f1), (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((g_64.f3 , (((safe_lshift_func_uint16_t_u_u(p_50.f1, (safe_mul_func_uint16_t_u_u((l_101.f3 <= (safe_div_func_uint16_t_u_u(g_64.f2, g_64.f2))), (l_95 & (safe_div_func_int8_t_s_s(((func_52((((((l_101.f3 | 0xEF54L) || 0x3A47L) | l_101.f3) || g_63.f2) > p_50.f0)) || p_50.f1) != g_8), g_64.f2))))))) != p_50.f4) || l_101.f3)), l_101.f4)), l_101.f0)))) || 0UL) || l_101.f0))))
        {
            struct S0 l_126 = {0xB5E4FDE8L,8L,0xAE47ACEDL,3L,0x1AL};
            p_50 = g_64;
            if (g_64.f1)
                goto lbl_127;
lbl_127:
            g_64 = (func_52(g_64.f0) , l_126);
            l_101 = l_126;
        }
        else
        {
            p_50 = g_64;
            if (l_67)
            {
                l_100 = g_62;
                for (g_63.f2 = (-15); (g_63.f2 < 49); ++g_63.f2)
                {
                    g_64 = l_130;
                    l_100 = p_50.f2;
                    for (g_63.f3 = (-10); (g_63.f3 != 27); g_63.f3 = safe_add_func_uint8_t_u_u(g_63.f3, 7))
                    {
                        return p_49;
                    }
                }
            }
            else
            {
                l_100 = (safe_rshift_func_int16_t_s_s((-1L), 6));
                p_50 = p_50;
            }
        }
    }
    return l_67;
}







static unsigned func_52(int p_53)
{
    char l_61 = 0xAFL;
    g_62 = l_61;
    g_63 = g_63;
    return l_61;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_63.f2, "g_63.f2", print_hash_value);
    transparent_crc(g_63.f3, "g_63.f3", print_hash_value);
    transparent_crc(g_63.f4, "g_63.f4", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_737.f0, "g_737.f0", print_hash_value);
    transparent_crc(g_737.f1, "g_737.f1", print_hash_value);
    transparent_crc(g_737.f2, "g_737.f2", print_hash_value);
    transparent_crc(g_737.f3, "g_737.f3", print_hash_value);
    transparent_crc(g_737.f4, "g_737.f4", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    transparent_crc(g_1112, "g_1112", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
