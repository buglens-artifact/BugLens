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
   unsigned f0 : 13;
   unsigned f1 : 14;
   unsigned f2 : 24;
   unsigned f3 : 4;
   unsigned f4 : 3;
   signed f5 : 14;
   unsigned f6 : 20;
   signed f7 : 25;
   unsigned f8 : 25;
   unsigned f9 : 3;
};

union U1 {
   unsigned char f0;
   unsigned f1;
};


static unsigned g_23 = 3UL;
static unsigned char g_24 = 0xA6L;
static struct S0 g_30 = {11,104,1382,3,0,-67,369,-3012,1572,0};
static union U1 g_47 = {254UL};
static unsigned char g_180 = 0xC4L;
static unsigned char g_211 = 0xFDL;
static short g_229 = 0x199DL;
static unsigned g_231 = 0x6535910CL;
static unsigned char g_234 = 0xFFL;
static unsigned short g_265 = 0xFB75L;
static int g_307 = 0L;
static unsigned g_344 = 4294967295UL;
static union U1 g_372 = {0UL};
static union U1 g_373 = {0x0CL};
static short g_397 = 0xC265L;
static unsigned g_465 = 1UL;
static char g_476 = (-1L);
static int g_493 = (-1L);
static unsigned g_581 = 0xD1445CBCL;
static short g_600 = 0L;
static int g_633 = 3L;
static unsigned g_689 = 0xF27569AEL;
static unsigned g_707 = 0xF6422375L;
static int g_860 = 0L;
static char g_1020 = 3L;
static struct S0 g_1021 = {34,92,1684,1,1,-97,795,4551,5631,0};
static short g_1198 = 2L;
static struct S0 g_1212 = {42,58,3530,2,0,43,188,5227,3844,0};
static unsigned char g_1292 = 250UL;
static int g_1343 = 1L;
static int g_1398 = 8L;



static int func_1(void);
static short func_5(unsigned char p_6, struct S0 p_7, int p_8);
static unsigned func_9(unsigned short p_10, unsigned char p_11, unsigned p_12, struct S0 p_13);
static short func_18(char p_19, unsigned p_20);
static unsigned func_32(unsigned char p_33, unsigned char p_34, short p_35);
static short func_42(union U1 p_43, unsigned p_44, unsigned char p_45, short p_46);
static unsigned short func_48(short p_49, int p_50, short p_51, char p_52, unsigned p_53);
static unsigned func_57(int p_58, union U1 p_59, union U1 p_60, unsigned short p_61, unsigned short p_62);
static union U1 func_67(unsigned p_68, int p_69);
static int func_70(unsigned short p_71);
static int func_1(void)
{
    unsigned l_2 = 0x8C443EB6L;
    struct S0 l_1019 = {82,114,972,1,0,25,532,-1675,714,0};
    int l_1200 = 0xEA4C68ADL;
    int l_1237 = 1L;
    int l_1259 = 1L;
    unsigned char l_1306 = 1UL;
    int l_1308 = (-1L);
    char l_1342 = (-1L);
    union U1 l_1357 = {9UL};
    short l_1375 = 0x97C8L;
    int l_1396 = 0xF9B4740BL;
    unsigned char l_1397 = 0xF3L;
    if ((l_2 != (~(safe_mul_func_int16_t_s_s((g_1198 = (l_2 , (!func_5((0x8BC0L > (func_9(l_2, l_2, (g_689 = ((safe_lshift_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((l_2 < ((((0L == func_18(((-1L) ^ (g_24 = (safe_add_func_int8_t_s_s((l_2 >= 0L), g_23)))), l_2)) ^ l_2) > 0x7BFCC9D3L) > g_860)), g_860)) , l_2) > 4294967290UL), g_689)) | g_689)), l_1019) , l_2)), g_1021, l_1019.f7)))), g_860)))))
    {
        struct S0 l_1199 = {24,91,840,2,0,-111,373,5593,4260,0};
        union U1 l_1213 = {250UL};
        g_1021 = g_30;
        l_1019 = l_1199;
        if (l_1019.f2)
        {
            l_1199 = (g_397 , g_1021);
            g_30.f5 = g_1021.f5;
        }
        else
        {
            int l_1201 = (-3L);
            int l_1214 = 0x1A23E56DL;
            l_1199.f7 = l_1200;
            if (func_32(func_18(l_1201, (l_1214 = (safe_lshift_func_int8_t_s_u((0x09L >= (safe_mul_func_int8_t_s_s((func_9(l_1199.f0, l_1019.f8, ((safe_rshift_func_uint16_t_u_u((g_265 && ((safe_sub_func_int16_t_s_s((l_1201 ^ (func_42((((0x533DL == (safe_sub_func_uint32_t_u_u(l_1201, (g_1212 , 0L)))) > 0x95L) , l_1213), g_30.f2, l_1199.f2, l_1019.f4) >= g_1021.f5)), g_1021.f8)) <= l_1201)), g_860)) < l_1199.f1), l_1199) == g_1212.f0), g_1021.f5))), g_1021.f0)))), l_1199.f4, l_1019.f4))
            {
                g_30.f5 = 7L;
            }
            else
            {
                short l_1223 = 5L;
                int l_1228 = 0x5E326626L;
                l_1199.f7 = l_1214;
                g_30 = g_1021;
                l_1199.f7 = (8L == func_32((safe_lshift_func_int16_t_s_u((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_47.f0, 4)), g_1212.f3)) ^ (4294967295UL ^ g_1212.f8)) , (safe_mul_func_int8_t_s_s((l_1223 = (-2L)), (safe_sub_func_uint16_t_u_u((((g_30.f5 = (safe_sub_func_uint32_t_u_u(l_1199.f7, g_30.f8))) == (g_1212.f7 = g_1021.f8)) <= l_1019.f8), 0x3F77L))))), l_1228)), g_30.f9, l_1228));
            }
        }
    }
    else
    {
        struct S0 l_1229 = {60,35,3097,0,1,94,180,296,3446,0};
        short l_1238 = 0xF8E2L;
        int l_1249 = 0x1F14C7C8L;
        union U1 l_1256 = {0x40L};
        unsigned char l_1344 = 247UL;
        l_1229 = l_1019;
        for (g_860 = (-30); (g_860 < 17); g_860 = safe_add_func_uint32_t_u_u(g_860, 2))
        {
            unsigned l_1232 = 0x0EA9E215L;
            struct S0 l_1260 = {14,28,2760,3,0,-102,295,-5264,3821,1};
            int l_1304 = (-7L);
            unsigned char l_1307 = 1UL;
            int l_1335 = 4L;
            unsigned l_1374 = 0x3714641CL;
            if ((((+((((((l_1232 == ((safe_rshift_func_uint16_t_u_s((g_265 = ((safe_mul_func_int16_t_s_s((l_1238 = (((g_1212.f3 , 0x8F6074F7L) , l_1237) | l_1229.f4)), g_1212.f9)) != g_1212.f1)), 0)) > func_9(((!(safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((func_9((g_30.f8 != ((((safe_add_func_int16_t_s_s((g_1021.f9 || l_1229.f5), 1UL)) > 1UL) ^ g_1212.f4) , g_1021.f9)), l_1019.f0, g_1212.f3, l_1229) <= (-6L)), 11)), g_30.f0)) != g_24) , 0xD6L), l_1232)), 1UL))) != l_1019.f8), l_1229.f2, l_1232, g_1212))) == 4294967295UL) | 4L) <= 4294967290UL) >= g_1212.f6) == 0xD51DL)) && l_1249) | 0xE3L))
            {
                unsigned char l_1254 = 1UL;
                union U1 l_1255 = {2UL};
                int l_1293 = 1L;
                int l_1309 = 0xE1B406A5L;
                if (l_1232)
                {
                    struct S0 l_1250 = {52,34,1684,2,1,4,612,4788,3600,0};
                    g_1021 = l_1250;
                    if (((safe_unary_minus_func_uint16_t_u((((((safe_lshift_func_uint16_t_u_u(l_1250.f3, 3)) < (l_1254 | func_42((l_1256 = l_1255), ((safe_add_func_uint8_t_u_u(((l_1250.f7 = (((g_24 < (l_1019.f5 = (l_1259 > l_1019.f2))) , (l_1250.f5 = (((g_1212.f1 , (func_5(l_1254, l_1019, g_633) > 0x09D0L)) | g_1212.f5) > g_1198))) != 0x20A3L)) > g_1212.f3), 0xA1L)) & g_1212.f7), g_1212.f8, g_1212.f1))) , l_1260) , l_1019.f2) & l_1229.f6))) == g_1212.f1))
                    {
                        int l_1279 = 0x812B4364L;
                        l_1229.f5 = ((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_1212.f6 >= (l_1260.f5 = ((safe_rshift_func_int8_t_s_s((1L != (safe_rshift_func_int8_t_s_u((-4L), g_1021.f1))), (safe_lshift_func_uint16_t_u_u(((6L > g_476) <= (safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_1279, l_1260.f4)), ((safe_lshift_func_int8_t_s_s(l_1254, 1)) , g_1212.f9)))), 3)))) || l_1259))), g_47.f0)) ^ l_1279), l_1255.f0)), g_1021.f9)), 0x0E27L)) && 0L);
                        g_30.f5 = l_1019.f4;
                        if (g_707)
                            break;
                    }
                    else
                    {
                        char l_1291 = (-10L);
                        g_307 = ((g_265 = 0x4796L) , ((0x97L | (g_372.f0 = (safe_mul_func_int8_t_s_s(g_24, (safe_add_func_int16_t_s_s(func_70((l_1259 = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, (+0xA831L))), ((g_1212.f7 = (!l_1232)) < (safe_unary_minus_func_int16_t_s(g_1021.f6))))))), g_30.f3)))))) ^ g_860));
                        l_1293 = func_18(((g_397 ^ (func_57(g_1021.f4, g_47, g_373, l_1291, g_180) & ((g_1292 = ((g_30.f9 || func_70(g_633)) , l_1229.f5)) != 0xE784L))) < g_1021.f9), g_1212.f6);
                    }
                }
                else
                {
                    union U1 l_1305 = {0x30L};
                    g_1212.f5 = ((safe_unary_minus_func_int16_t_s(((((((safe_unary_minus_func_int16_t_s(g_372.f0)) , func_5((l_1237 = ((((l_1309 = (safe_div_func_uint32_t_u_u((((((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u((l_1293 = ((func_9(g_30.f6, (l_1304 >= (g_476 = l_1293)), ((l_1229.f5 = (func_57(l_1019.f7, l_1255, l_1305, (!(l_1260.f5 = g_1021.f0)), func_9(g_372.f0, l_1229.f0, l_1019.f5, l_1019)) & 0xA6L)) && 0xF3L), g_1212) > 0L) & 0x1DDA29BEL)), 248UL)) != l_1306) >= l_2) <= 0x6110L), 0x08791A3DL)), l_1307)) | g_24) , (-1L)) != 1UL) | l_1308), g_581))) && 0xAB9F798BL) , 6L) | g_1212.f4)), g_1021, g_23)) ^ l_1254) , g_1198) ^ g_1212.f2) && l_1019.f4))) == 3UL);
                    l_1260.f5 = l_1229.f3;
                }
                g_1021 = g_1021;
            }
            else
            {
                struct S0 l_1310 = {87,63,1311,3,1,-92,663,1997,4948,1};
                union U1 l_1320 = {255UL};
                unsigned l_1324 = 0x2DDC7BD5L;
                if (g_860)
                {
                    unsigned char l_1315 = 6UL;
                    struct S0 l_1326 = {4,80,419,1,0,49,859,-1209,1569,1};
                    l_1310 = g_30;
                    if (((((safe_div_func_int8_t_s_s((g_1021.f2 ^ (safe_div_func_uint16_t_u_u((+(g_30.f1 <= (l_1310 , l_1229.f5))), (g_307 | g_1212.f5)))), l_1315)) , l_1229.f2) , g_372) , l_1238))
                    {
                        short l_1323 = (-1L);
                        int l_1325 = 1L;
                        g_30.f7 = 0L;
                        l_1324 = (((safe_rshift_func_uint16_t_u_s(l_1310.f6, (func_48(((((((g_1021.f5 , ((((2UL && (l_1320 , (1UL > (l_1019.f5 = (g_180 >= (((((func_70(g_493) , (((safe_sub_func_int8_t_s_s((g_689 , l_1315), 0L)) && 1UL) | l_1323)) >= 0xD8L) <= g_30.f4) <= g_1021.f9) <= g_1212.f9)))))) ^ 2UL) != g_689) , g_231)) < g_465) , l_1323) , l_1019.f5) & l_1019.f4) > g_1212.f3), g_229, g_1212.f0, g_397, l_1019.f1) || l_1019.f3))) , (-4L)) ^ l_1019.f2);
                        return l_1325;
                    }
                    else
                    {
                        g_30 = l_1326;
                    }
                }
                else
                {
                    l_1260.f7 = (g_1212.f7 = ((g_600 = 1L) && g_372.f0));
                }
                l_1229.f7 = (l_1229.f5 = l_1310.f7);
                if (func_48(l_1229.f8, ((safe_rshift_func_uint8_t_u_u(l_1229.f9, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(l_1256.f0, 6)) || ((safe_lshift_func_uint16_t_u_s(l_1335, 1)) || (func_9((l_1310.f5 = (safe_add_func_uint32_t_u_u((l_1310.f6 != func_5((((((safe_add_func_int16_t_s_s((-1L), ((g_397 = ((l_1237 = (safe_mul_func_uint8_t_u_u(func_57(g_30.f8, g_373, (func_9(l_1342, l_1342, g_1343, l_1019) , g_373), g_1212.f6, l_1260.f2), l_1019.f8))) , g_30.f2)) ^ l_2))) | g_344) , g_229) | 0xFEL) & g_1212.f6), g_1021, g_476)), g_1212.f4))), l_1260.f9, g_47.f0, l_1019) != l_1019.f6))), g_1212.f3)))) < l_1344), g_1212.f0, l_1229.f1, l_1232))
                {
                    return g_1021.f4;
                }
                else
                {
                    short l_1349 = (-9L);
                    unsigned char l_1356 = 250UL;
                    int l_1358 = 1L;
                    g_1212.f5 = l_1304;
                    l_1260.f7 = ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(g_30.f5, (+((g_1020 > g_30.f6) | l_1349)))), 3)) > (0UL > ((g_476 = (g_689 > (l_1308 = ((safe_lshift_func_uint16_t_u_u(((l_1358 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((g_1212 , (l_1356 != (func_57((l_1260.f6 & l_1310.f4), g_373, l_1357, l_1357.f0, g_1212.f0) | g_1212.f4))) < 0xF871L), l_1229.f2)), g_229))) <= l_1310.f6), g_1212.f2)) & l_1260.f5)))) != l_1256.f0)));
                    for (l_1307 = 0; (l_1307 != 37); l_1307 = safe_add_func_int32_t_s_s(l_1307, 7))
                    {
                        unsigned short l_1373 = 0xF5E1L;
                        l_1358 = 0x150D4692L;
                        l_1358 = (safe_mul_func_uint8_t_u_u(((l_1375 = (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((g_234 , func_18(l_1307, (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_1019.f4, 6)) | (safe_sub_func_uint8_t_u_u(((g_1212.f5 | ((l_1308 & ((l_1349 , (((g_180 = l_1373) , 0xE0L) != (~(g_465 , 1L)))) < 0xC2L)) ^ l_1019.f0)) <= l_1260.f1), l_1374))), l_1304)))) <= g_1198), l_1019.f4)), l_1356))) >= 0xF1L), 0xBDL));
                        l_1310.f5 = g_689;
                    }
                    if (g_1021.f9)
                        continue;
                }
            }
            for (l_1357.f1 = 2; (l_1357.f1 <= 38); l_1357.f1 = safe_add_func_int32_t_s_s(l_1357.f1, 1))
            {
                unsigned l_1378 = 2UL;
                g_493 = l_1232;
                l_1260.f7 = l_1378;
                for (l_2 = (-2); (l_2 > 57); l_2 = safe_add_func_int32_t_s_s(l_2, 4))
                {
                    struct S0 l_1385 = {63,36,3263,0,1,-31,569,4394,5203,1};
                    l_1019.f7 = (l_1019.f2 , func_42(g_47, (safe_lshift_func_uint8_t_u_u(g_372.f0, 3)), (l_1229.f5 = g_24), l_1019.f8));
                    for (g_231 = 2; (g_231 != 37); g_231++)
                    {
                        l_1385 = g_1212;
                        g_30 = l_1019;
                        g_30.f7 = l_1019.f5;
                    }
                }
                return g_600;
            }

                    }
        g_1021 = g_30;
        return g_180;
    }
    g_1398 = (safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s((((0xE0L || (l_1396 = (safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_231, (func_9(g_30.f9, (((safe_lshift_func_int8_t_s_s((246UL > (-3L)), 4)) ^ (l_1019.f5 = g_30.f4)) && (l_1019.f0 < ((g_581 , (g_180 = (((l_1019.f8 || 0xA344L) , 1L) , l_1019.f1))) || g_1021.f0))), g_373.f0, g_1212) ^ 0x20465FB2L))), l_1396)))) | g_1021.f5) == l_1397), g_476)) == 0x6D2EL) , g_1021.f5), 0));
    return l_1342;
}







static short func_5(unsigned char p_6, struct S0 p_7, int p_8)
{
    union U1 l_1026 = {0x8FL};
    int l_1027 = 0x716B2DB1L;
    struct S0 l_1033 = {61,72,867,0,0,-79,715,5101,2915,0};
    char l_1058 = 0xD1L;
    int l_1129 = (-7L);
    g_30 = g_1021;
    p_7.f7 = (safe_add_func_int32_t_s_s((((g_1021.f9 = 4UL) >= (((safe_div_func_uint16_t_u_u(((l_1026 , func_57((l_1027 = p_7.f4), (l_1026 = func_67(func_32(l_1026.f0, (safe_div_func_int8_t_s_s(0x90L, p_7.f7)), (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u((l_1033 , g_1021.f6), (((p_7 , 0xF71E28E9L) , p_8) && g_30.f9)))))), p_7.f8)), g_47, g_600, g_1021.f5)) == 1L), g_1021.f4)) , g_30.f1) , l_1033.f9)) | 255UL), g_1020));
    if (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(g_211, 6)), func_9(p_7.f5, (g_265 || ((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_1021.f2, 0UL)), (func_57((safe_mod_func_uint8_t_u_u(4UL, (safe_rshift_func_int16_t_s_u(((g_633 , p_6) , (-1L)), 10)))), g_373, l_1026, p_7.f7, p_7.f1) & 246UL))) ^ 0x4B0FL)), g_30.f3, p_7))) , (-6L)))
    {
        g_1021 = (p_7 = p_7);
        p_7.f5 = 0xC8D9DE9BL;
    }
    else
    {
        unsigned short l_1057 = 0x774EL;
        int l_1063 = 0x480A249DL;
        struct S0 l_1078 = {50,78,3141,0,0,73,776,3043,1653,1};
        unsigned l_1123 = 0xEA00C511L;
        p_7.f5 = (((-1L) != (l_1058 = (g_476 = ((l_1057 = (((!(safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(g_707)), p_7.f1))) <= p_8) | ((safe_mod_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(p_6, ((p_7.f0 , (g_180 != (safe_add_func_uint8_t_u_u(g_229, g_689)))) & g_373.f0))) <= 9UL) , 0UL), g_1021.f1)) != p_8) && 0x57L) < l_1033.f9), p_7.f5)) || 2UL))) != 0x66D4L)))) >= g_265);
        if ((func_32(((((l_1033.f7 = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((((l_1063 = 0x6E2A040AL) , (safe_lshift_func_uint16_t_u_s(func_9((((safe_sub_func_int16_t_s_s((((4294967295UL <= g_265) , g_30.f3) | (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_70((!4UL)), 0xD54130E8L)), 0xA9L))), (g_600 = g_465))) , g_47.f0) == p_7.f2), g_1021.f9, g_1021.f6, p_7), 4))) && p_8), 6)), g_1021.f2))) , g_1020) , g_1021.f8) < l_1057), l_1033.f5, g_1021.f4) >= l_1033.f2))
        {
            for (l_1058 = 0; (l_1058 < 15); l_1058 = safe_add_func_int16_t_s_s(l_1058, 8))
            {
                return p_7.f0;
            }
            return p_7.f2;
        }
        else
        {
            char l_1083 = 0xA9L;
            struct S0 l_1094 = {41,105,687,2,0,113,724,-4194,1728,0};
            short l_1095 = 0x7DCDL;
            union U1 l_1163 = {0x73L};
            for (g_707 = 0; (g_707 != 55); ++g_707)
            {
                for (g_465 = 0; (g_465 != 24); g_465++)
                {
                    p_7 = l_1078;
                }
                g_307 = l_1078.f7;
                for (g_493 = 14; (g_493 != 15); g_493++)
                {
                    for (g_633 = (-19); (g_633 > 13); g_633 = safe_add_func_int32_t_s_s(g_633, 4))
                    {
                        if (g_30.f6)
                            break;
                    }
                }
                g_30 = l_1078;
            }
            l_1078.f7 = func_48((g_229 = (p_7.f1 > g_581)), l_1057, g_30.f7, (g_1020 = (g_476 = p_7.f7)), func_70(l_1083));
            p_7.f5 = ((0xE8L || (l_1033.f7 = g_234)) > (safe_div_func_int16_t_s_s((((safe_div_func_uint32_t_u_u((0xC0C0L == (p_7.f8 == (g_372.f0 = (0x66L >= (safe_sub_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_u((func_9((((safe_div_func_uint8_t_u_u((func_70((g_30.f8 || 0x63L)) < (((l_1033.f5 = 0UL) > 1L) > p_7.f4)), 1UL)) != l_1083) , 4UL), g_30.f7, l_1083, l_1094) <= p_7.f9), l_1095)) >= l_1033.f1) >= g_30.f7) != 255UL), p_7.f1)))))), g_229)) , p_7.f3) & g_211), 0xCDC3L)));
            for (g_493 = (-29); (g_493 == 19); ++g_493)
            {
                short l_1098 = 5L;
                int l_1112 = 6L;
                struct S0 l_1114 = {33,22,2504,1,1,-58,464,4052,331,1};
                if ((g_307 = 0x9928A36FL))
                {
                    g_1021.f7 = (-1L);
                }
                else
                {
                    return l_1098;
                }
                for (g_180 = (-3); (g_180 > 50); ++g_180)
                {
                    unsigned l_1101 = 4294967295UL;
                    union U1 l_1102 = {249UL};
                    struct S0 l_1111 = {58,107,2877,1,1,-14,1014,-2727,542,0};
                    if ((l_1101 = p_7.f9))
                    {
                        char l_1113 = 8L;
                        l_1113 = (l_1112 = func_57(l_1098, g_47, (l_1102 = g_372), (0x34E4L > ((func_9(l_1078.f4, g_1021.f1, (safe_div_func_int16_t_s_s(g_1021.f6, (safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((p_8 , g_47.f0) , g_1021.f8), 0x21L)), l_1078.f2)))), l_1111) >= g_180) && 0L)), p_7.f5));
                        p_8 = p_7.f7;
                        return p_7.f3;
                    }
                    else
                    {
                        int l_1128 = 1L;
                        g_307 = g_30.f2;
                        l_1111 = l_1114;
                        g_1021.f5 = ((l_1094.f5 = (safe_div_func_int16_t_s_s(((l_1114.f9 && (((safe_sub_func_int16_t_s_s(0xA904L, (l_1094.f7 = (((g_30.f3 = g_30.f4) < ((((safe_add_func_uint32_t_u_u(1UL, l_1123)) || (((((safe_rshift_func_int8_t_s_u((((safe_div_func_uint16_t_u_u(l_1033.f6, 0x73A4L)) || (g_265 = g_633)) == (g_30.f0 , p_7.f5)), 6)) ^ l_1094.f3) & p_7.f3) == l_1128) <= l_1128)) != l_1111.f6) | 0UL)) != l_1114.f1)))) && l_1129) <= l_1114.f9)) , (-9L)), p_6))) & p_7.f4);
                        if (l_1111.f2)
                            continue;
                    }
                    l_1033 = l_1078;
                    g_1021.f7 = (0xC878L <= (safe_add_func_uint32_t_u_u(p_7.f5, (safe_div_func_int16_t_s_s(0x261BL, l_1027)))));
                }
                if ((g_231 , g_1020))
                {
                    short l_1141 = 0xDD53L;
                    p_7.f7 = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(func_70(l_1078.f2), (safe_sub_func_int32_t_s_s((~(((safe_unary_minus_func_uint16_t_u(l_1141)) >= (safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_1026.f0, 0)), 8UL)), ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(func_70(l_1094.f5), ((safe_mod_func_int32_t_s_s(g_1021.f8, (p_7.f5 = (g_1021.f8 & g_30.f7)))) , (-1L)))), p_6)) || p_7.f4)))) && 0xE8D6L)), p_6)))), p_8)) <= p_7.f8);
                    g_30 = (g_1021 , g_1021);
                    g_1021.f7 = (g_30.f5 = ((safe_sub_func_uint16_t_u_u(p_7.f4, (l_1094.f5 = (g_23 >= (safe_unary_minus_func_uint32_t_u(p_7.f6)))))) & (0UL && func_70(g_30.f5))));
                    if (g_373.f0)
                        break;
                }
                else
                {
                    unsigned char l_1184 = 0xE4L;
                    int l_1185 = 0x5805A698L;
                    l_1094.f5 = ((safe_div_func_uint16_t_u_u(p_7.f4, (safe_div_func_uint32_t_u_u((func_57(p_7.f3, (l_1026 = l_1163), func_67(((+(p_7.f2 = ((safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(((l_1078.f5 = ((g_1021.f0 && (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_7.f5, (safe_lshift_func_uint16_t_u_s(l_1033.f3, 8)))), ((((func_70((safe_mul_func_uint16_t_u_u(((l_1027 = ((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(func_9(p_7.f6, g_1021.f5, (p_7.f0 = (l_1184 = func_9(g_23, g_1021.f2, l_1078.f5, g_1021))), g_1021), p_7.f8)), 0xED56DA5FL)), l_1033.f4)) != l_1094.f2)) & 0x70E8C612L), 0xCD3DL))) , l_1184) ^ 0x10L) > 0xE640L) , g_1021.f1)))) , p_7.f5)) , 0xB582L), 4)) <= g_211), 7)) , g_23), 0x656CL)) < 0xC8L))) & (-1L)), l_1129), p_6, l_1185) , 0x6CC1C21DL), 1L)))) || g_211);
                    if (g_1021.f4)
                        break;
                    if (p_8)
                        continue;
                }
            }
        }
        g_493 = (l_1078 , (((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(65531UL, g_30.f1)), g_689)), (l_1033.f5 = ((safe_sub_func_int8_t_s_s(0xECL, g_372.f0)) , g_30.f0)))) < (l_1033.f7 = (p_7.f5 , (safe_mod_func_uint16_t_u_u(func_9((safe_mod_func_int16_t_s_s(1L, 0xCECAL)), g_30.f9, p_7.f0, g_1021), l_1078.f6))))) | 1UL));
    }
    g_1021.f5 = (p_7.f5 < 0L);
    return l_1033.f3;
}







static unsigned func_9(unsigned short p_10, unsigned char p_11, unsigned p_12, struct S0 p_13)
{
    g_30.f5 = (p_13.f5 = g_1020);
    return g_30.f9;
}







static short func_18(char p_19, unsigned p_20)
{
    unsigned char l_27 = 0xCDL;
    struct S0 l_31 = {38,37,3606,0,1,-67,59,1523,5171,1};
    char l_54 = 5L;
    int l_310 = 6L;
    unsigned l_1018 = 4294967294UL;
    l_27 = (!(safe_sub_func_uint32_t_u_u(p_19, 0xC53D8B3DL)));
    for (g_23 = 11; (g_23 == 24); g_23++)
    {
        l_31 = g_30;
    }
    l_1018 = (g_30.f5 && func_32(((p_19 < (safe_add_func_int8_t_s_s((l_31.f5 = (l_310 = (safe_sub_func_uint16_t_u_u((((-10L) < ((safe_mul_func_int16_t_s_s(func_42(g_47, ((func_48(((l_31.f7 = l_54) <= ((safe_lshift_func_uint8_t_u_s((l_31.f6 , (func_57((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(((((func_67(l_31.f4, g_30.f8) , p_19) || 0x851CDA06L) <= 0x7A62254FL) < l_31.f4), g_30.f3)) , (-8L)), l_31.f1)), g_47, g_47, l_31.f9, l_31.f4) > l_310)), p_20)) >= (-4L))), p_19, g_30.f8, l_31.f8, g_30.f0) == l_31.f0) , l_31.f6), p_20, p_20), l_54)) || 0x09L)) , p_19), (-8L))))), 0x9AL))) , g_30.f4), p_20, g_860));
    return g_30.f8;
}







static unsigned func_32(unsigned char p_33, unsigned char p_34, short p_35)
{
    unsigned l_1010 = 9UL;
    int l_1011 = (-8L);
    union U1 l_1012 = {0UL};
    int l_1017 = 0L;
    g_307 = g_397;
    g_307 = p_33;
    l_1017 = ((safe_div_func_uint32_t_u_u(0x3B70FA5CL, func_48(g_581, l_1010, (p_33 && func_57((l_1011 = l_1010), (g_372.f0 , l_1012), g_373, (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(func_70((g_265 = 0UL)), p_34)), 0xCEF3L)), l_1012.f0)), l_1010, p_35))) ^ p_34);
    return g_23;
}







static short func_42(union U1 p_43, unsigned p_44, unsigned char p_45, short p_46)
{
    unsigned l_589 = 4294967291UL;
    union U1 l_596 = {0UL};
    int l_599 = 0x3B913706L;
    union U1 l_601 = {0xBCL};
    unsigned char l_602 = 0xDDL;
    short l_603 = (-5L);
    unsigned short l_625 = 0xB78BL;
    unsigned char l_634 = 247UL;
    char l_637 = (-5L);
    struct S0 l_653 = {58,125,175,3,0,-104,851,-5733,2158,1};
    unsigned l_723 = 4294967295UL;
    unsigned char l_763 = 0xD4L;
    unsigned char l_829 = 0UL;
    char l_888 = 0L;
    short l_949 = 0xA3EDL;
    struct S0 l_972 = {19,94,1805,2,1,-122,513,5530,5414,1};
    g_493 = (l_602 = (func_70((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_57(((((l_589 = g_30.f2) | (0x4DL > (safe_sub_func_int16_t_s_s(g_24, g_493)))) == ((((safe_div_func_uint16_t_u_u((g_600 = (safe_mod_func_int16_t_s_s(func_57(g_229, g_372, l_596, p_45, (l_599 = (safe_rshift_func_uint16_t_u_u((p_44 || p_46), l_596.f0)))), 7L))), p_43.f0)) , p_43) , g_493) < g_344)) && 0UL), g_47, l_601, p_43.f0, g_30.f8), g_344)), p_43.f0)), l_601.f0))) == 4294967295UL));
    if (func_48((l_599 = ((+(l_603 > ((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((p_43.f0 <= 0xF1L) <= ((l_599 <= (((p_46 >= g_30.f6) , func_70(g_180)) ^ ((safe_mul_func_uint16_t_u_u((0x8EL | p_44), p_44)) , 1L))) ^ 0x51L)) , 0UL), p_46)), g_23)))) <= 0xBDL), 0x30L)) && g_373.f0))) > g_30.f2)), p_44, l_602, l_601.f0, p_45))
    {
        short l_630 = (-7L);
        int l_668 = 0x18EC9D7CL;
        struct S0 l_670 = {53,106,3712,0,1,95,259,-2038,2044,1};
        union U1 l_680 = {255UL};
        unsigned short l_720 = 6UL;
        if (g_465)
        {
            unsigned short l_617 = 0xF5CCL;
            unsigned short l_624 = 65529UL;
            int l_669 = 0x86E576B8L;
            unsigned short l_679 = 65531UL;
            unsigned short l_690 = 0x631EL;
            g_307 = (safe_add_func_uint32_t_u_u((((p_46 < ((safe_add_func_int32_t_s_s((0UL >= 0L), l_617)) , 8UL)) , g_372.f0) > (l_617 >= (4294967292UL <= (safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((l_624 == l_601.f0), l_625)), 0x38A9E001L)), p_46))))), g_30.f0));
            if ((((safe_sub_func_int16_t_s_s(((((l_630 = (safe_sub_func_uint16_t_u_u(g_397, p_44))) & (g_229 = 0x1E7FL)) <= (g_372.f0 = 1UL)) , func_48(((safe_sub_func_int16_t_s_s(((g_229 = g_633) <= ((((l_634 = g_373.f0) >= g_372.f0) != (safe_rshift_func_int16_t_s_s(((l_637 || (safe_lshift_func_int8_t_s_s(p_43.f0, 4))) >= l_625), 11))) == g_265)), g_581)) <= l_624), g_307, g_30.f0, g_307, l_624)), l_596.f0)) != 249UL) < p_43.f0))
            {
                char l_650 = 0x3BL;
                struct S0 l_654 = {6,31,3292,3,0,99,638,-2016,2420,0};
                short l_662 = 0x5A55L;
                if ((((safe_div_func_int32_t_s_s((g_30.f6 && 0x1D81L), ((0x489AL != l_599) ^ 0xDC0BL))) & p_45) > p_46))
                {
                    int l_651 = 1L;
                    struct S0 l_657 = {22,80,2673,1,0,-65,619,-283,5708,1};
                    if (func_70((safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_637, (p_46 >= (0x43FA902DL != func_48(((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((!g_465), (g_265 <= func_70(p_43.f0)))), p_43.f0)) , (((l_650 , 0L) <= p_44) && 0xBB77L)), g_180, p_44, g_344, l_651))))) >= g_633), l_650))))
                    {
                        struct S0 l_652 = {12,63,2954,1,0,43,906,5247,59,1};
                        g_30 = l_652;
                        g_307 = l_630;
                        l_654 = l_653;
                    }
                    else
                    {
                        unsigned short l_667 = 0UL;
                        l_669 = (safe_add_func_uint16_t_u_u((l_668 = (((l_657 , (-1L)) ^ (safe_rshift_func_int8_t_s_u(p_46, (p_44 > (65535UL == (l_653.f7 = (p_46 >= (safe_sub_func_int32_t_s_s((l_662 & 0xC765L), func_48((safe_div_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(p_46, l_667)) >= (-1L)), g_234)), p_46, p_44, l_630, p_45)))))))))) == p_44)), p_46));
                        g_30.f7 = l_657.f1;
                        g_307 = ((65531UL ^ (l_670 , (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_465, (l_667 <= g_30.f5))) && 0UL), ((l_654.f1 < ((safe_lshift_func_int16_t_s_u(((l_654.f8 , p_43) , 5L), l_667)) || l_624)) , 0xACL))), p_44)))) == l_679);
                    }
                    if ((g_30.f6 & (func_57(g_30.f4, l_680, g_373, p_44, (((safe_div_func_uint32_t_u_u(func_70((safe_rshift_func_int16_t_s_s(g_23, (p_46 = (g_397 = (g_600 = func_70((safe_add_func_uint32_t_u_u((l_669 = ((safe_mod_func_uint16_t_u_u(l_657.f6, 65535UL)) == ((g_30.f4 >= p_43.f0) | g_689))), (-1L)))))))))), 1UL)) , g_47.f0) | 255UL)) >= l_670.f5)))
                    {
                        char l_691 = 0x38L;
                        g_30 = l_670;
                        l_690 = (~p_46);
                        g_30.f7 = (l_653.f7 = l_691);
                        g_307 = 0x28B59BEBL;
                    }
                    else
                    {
                        struct S0 l_692 = {8,13,661,3,0,38,85,-2905,561,0};
                        g_30 = (l_692 = (l_657 = g_30));
                        g_493 = ((l_654.f5 = (safe_rshift_func_uint8_t_u_s((0xAFAA8B36L & (g_231 == (9UL == g_47.f0))), func_70((safe_lshift_func_uint16_t_u_s((p_43.f0 | (safe_mul_func_int8_t_s_s((-3L), func_70(g_234)))), 1)))))) , p_44);
                    }
                }
                else
                {
                    return l_654.f6;
                }
            }
            else
            {
                unsigned l_709 = 4294967295UL;
                int l_714 = 0xF8F0F764L;
                unsigned short l_717 = 0x105AL;
                int l_721 = 0xFE144B49L;
                int l_722 = 0x97624342L;
                for (g_47.f0 = 25; (g_47.f0 <= 49); ++g_47.f0)
                {
                    short l_708 = 0x2010L;
                    for (l_625 = 28; (l_625 > 3); l_625 = safe_sub_func_int8_t_s_s(l_625, 3))
                    {
                        g_493 = (safe_div_func_uint32_t_u_u(0x15F2D6F6L, g_707));
                    }
                    l_670.f5 = (l_653.f7 = l_708);
                }
                l_709 = g_30.f0;
                l_722 = (func_57((((0x9D4EL & (safe_add_func_uint32_t_u_u(func_70(g_600), (g_47.f1 = (safe_sub_func_uint16_t_u_u((g_265 = (l_714 , func_70(l_714))), p_45)))))) < (safe_lshift_func_int8_t_s_s(l_717, ((safe_mod_func_uint32_t_u_u((((func_70((l_668 = 1UL)) && l_720) != g_180) == p_43.f0), l_679)) , l_714)))) <= g_30.f3), l_680, g_373, l_721, g_231) ^ 0x88L);

                                return g_30.f5;
            }
            l_669 = p_45;
            l_723 = (l_670.f7 = p_43.f0);
        }
        else
        {
            struct S0 l_724 = {46,56,2636,2,1,113,690,3302,902,1};
            short l_741 = 0xAED0L;
            g_30 = l_724;
            l_724.f7 = func_70((g_265 = (safe_mul_func_int16_t_s_s(p_46, (safe_mul_func_uint8_t_u_u((g_211 > (safe_sub_func_int16_t_s_s((g_600 = (func_70((safe_lshift_func_int8_t_s_u(g_30.f0, 5))) ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((g_30.f1 = (g_30.f3 != g_372.f0)), l_625)) , (l_668 = p_45)), (safe_lshift_func_uint8_t_u_u(0xF5L, g_397)))), l_653.f2)))), l_670.f5))), l_741))))));
        }
        g_493 = g_373.f0;
        for (g_707 = 0; (g_707 != 1); g_707 = safe_add_func_uint32_t_u_u(g_707, 7))
        {
            int l_746 = 0xEEDF23FCL;
            if (p_46)
                break;
            l_653.f7 = (l_746 = (l_637 & (safe_add_func_uint8_t_u_u(l_746, g_47.f0))));
            for (l_634 = 20; (l_634 == 13); l_634--)
            {
                int l_761 = 0x8446740DL;
                if (p_46)
                {
                    unsigned l_760 = 4UL;
                    if ((g_307 = (l_653.f7 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-1L), 7)), p_44)))))
                    {
                        unsigned char l_757 = 0x1CL;
                        g_307 = (safe_rshift_func_uint8_t_u_u(0xD7L, 3));
                        l_761 = ((l_680.f0 > ((safe_mul_func_uint16_t_u_u((((((p_46 | (l_757 , (safe_lshift_func_uint16_t_u_s(l_746, (g_229 = (l_760 = (l_670.f8 && (p_43.f0 ^ l_596.f0)))))))) ^ p_44) < p_43.f0) <= 1UL) , g_633), l_757)) & g_581)) || g_397);
                        if (l_746)
                            continue;
                        g_30.f5 = ((0x9F78FCC1L && p_44) | (l_653.f2 || (l_761 = p_46)));
                    }
                    else
                    {
                        char l_762 = 0x8CL;
                        if (l_760)
                            break;
                        l_653.f7 = (l_762 && l_763);
                        g_30.f5 = (safe_lshift_func_uint16_t_u_u(((0x1C0B3746L | (g_397 <= (g_229 >= (g_307 = l_762)))) , l_762), 4));
                    }
                }
                else
                {
                    g_30.f7 = 0xFED9E245L;
                    for (p_46 = 8; (p_46 < (-8)); --p_46)
                    {
                        unsigned l_770 = 0x86877658L;
                        g_493 = l_589;
                        if (p_45)
                            break;
                        if (l_770)
                            break;
                    }
                }
                l_668 = ((func_67(l_761, l_746) , (p_43.f0 | 65526UL)) | (g_465 == g_581));
                if (l_746)
                    break;
                return g_265;
            }
            if (g_47.f0)
                break;
        }
    }
    else
    {
        int l_779 = 0xB0AA1D68L;
        union U1 l_788 = {0x18L};
        int l_813 = 0x1A7ABF06L;
        int l_814 = 0x1978A7ABL;
        short l_823 = 0x5C88L;
        struct S0 l_849 = {73,86,3255,2,0,37,392,-2756,3218,1};
        struct S0 l_852 = {69,58,24,0,0,-107,252,-3374,669,1};
        for (l_589 = 0; (l_589 == 26); l_589 = safe_add_func_int32_t_s_s(l_589, 1))
        {
            short l_775 = 0x74C9L;
            int l_776 = 9L;
            struct S0 l_822 = {66,108,103,2,1,-38,706,-852,5516,0};
            union U1 l_845 = {0x37L};
            g_493 = (safe_mod_func_uint16_t_u_u((l_776 = l_775), ((safe_mul_func_int16_t_s_s(((65534UL && p_45) <= (l_779 = l_599)), (g_30.f7 ^ (p_43 , (g_47 , ((g_707 <= (safe_add_func_int32_t_s_s((g_30.f5 = (g_397 , g_476)), l_653.f1))) , l_653.f9)))))) ^ g_30.f7)));
            g_493 = (safe_mod_func_uint8_t_u_u((p_45 = (l_776 = (5L == (safe_sub_func_int16_t_s_s((p_46 = p_46), func_57(func_70(p_44), g_47, func_67(p_44, (safe_rshift_func_int8_t_s_s(((p_43.f0 || l_775) >= (((l_788 , p_44) != p_45) == g_234)), 6))), l_779, p_43.f0)))))), l_779));
            if (((g_373.f0 , ((safe_add_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((p_45 || ((l_599 = p_43.f0) && (((!((safe_rshift_func_uint8_t_u_u((((g_373 , (safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(l_779, p_45)) != ((((l_814 = ((l_813 = (((p_46 = ((p_43.f1 = (safe_lshift_func_uint16_t_u_u(g_307, 6))) == (((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(p_44, (l_776 = (l_653.f5 = ((safe_mul_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(g_47.f0, 7)) > g_30.f9) && p_44) , 0xDDL), 255UL)) , 1L))))), 6)) != p_46) >= l_788.f0))) < 0x0425L) && 1L)) > p_44)) , g_231) | l_779) != 247UL)), 0x5DL)) <= 0xF47D10ECL) & l_788.f0), p_44))) & (-10L)) >= l_653.f1), l_653.f8)) && 8UL)) , p_46) , l_775))) , l_775), 0)), 4)) > g_397), l_596.f0)) , 0xA656L)) != g_707))
            {
                unsigned l_817 = 0x1E21E7BBL;
                int l_821 = (-8L);
                l_817 = (safe_lshift_func_uint16_t_u_u(p_44, g_600));
                l_814 = (((safe_unary_minus_func_int16_t_s(g_373.f0)) ^ g_476) <= ((g_180 || g_30.f1) <= ((!(((l_821 = (safe_sub_func_uint32_t_u_u(4294967286UL, 1L))) ^ func_57((p_46 == (g_24 >= ((g_231 > 0x264EL) | 0x9FL))), g_372, g_47, l_601.f0, l_601.f0)) , g_229)) ^ 0x62DD5851L)));
                l_776 = p_45;
            }
            else
            {
                int l_824 = 0xC0EEFACCL;
                l_822 = l_653;
                l_824 = l_823;
                l_653.f7 = ((p_45 = 0xBEL) >= (safe_lshift_func_int16_t_s_s((p_44 > ((safe_add_func_int16_t_s_s(g_397, (func_67((l_829 & 0xE7E8L), (safe_mul_func_int16_t_s_s(g_30.f7, (((0x2EL <= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((g_476 = (((((safe_div_func_int8_t_s_s((l_814 = (((safe_add_func_uint8_t_u_u(func_57((((l_822.f8 | (safe_unary_minus_func_int32_t_s(g_30.f3))) & g_30.f5) != 253UL), p_43, l_845, l_589, p_43.f0), 0xBDL)) , g_397) && g_493)), g_30.f6)) & g_30.f8) & p_44) != l_824) != 0L)), 248UL)), p_43.f0)), 0x51L))) <= 1UL) | 4294967295UL)))) , l_822.f9))) , g_372.f0)), p_44)));
                if (g_30.f6)
                    continue;
            }
            if ((p_45 ^ func_57((safe_sub_func_uint8_t_u_u((g_372.f0 = ((safe_unary_minus_func_uint16_t_u((func_70(l_603) & (l_849 , g_600)))) , (((func_70(g_30.f8) & (!g_493)) , p_44) > g_689))), l_788.f0)), g_373, l_788, g_234, g_30.f2)))
            {
                l_822.f5 = (safe_lshift_func_int16_t_s_s((-1L), g_493));
            }
            else
            {
                l_822.f5 = (g_30.f5 = (l_779 < (l_822.f0 , (p_43.f0 , 0x31D6L))));
                g_307 = p_44;
                g_30 = l_852;
                return g_24;
            }
        }
        for (l_602 = 0; (l_602 >= 29); l_602 = safe_add_func_uint16_t_u_u(l_602, 2))
        {
            unsigned short l_855 = 65528UL;
            struct S0 l_861 = {76,70,1154,0,1,27,664,1826,135,1};
            l_861 = (func_48((g_476 , g_265), ((~l_855) >= func_70(func_70(g_180))), g_231, (safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((p_45 = ((p_43.f0 , g_30.f9) < l_849.f0)), 0x6CL)), g_860)), g_30.f6) , l_653);
            for (g_633 = 0; (g_633 == 23); ++g_633)
            {
                int l_874 = 1L;
                unsigned short l_879 = 2UL;
                if (l_861.f2)
                {
                    return g_307;
                }
                else
                {
                    unsigned short l_866 = 0xB01CL;
                    l_866 = (((safe_div_func_int16_t_s_s(g_231, func_57(p_46, g_372, g_47, g_265, p_46))) , g_373.f0) <= (~(g_344 <= p_44)));
                }
                for (g_47.f0 = 1; (g_47.f0 == 49); ++g_47.f0)
                {
                    unsigned l_873 = 0xB5C2C80BL;
                    l_861.f5 = (safe_lshift_func_int8_t_s_u((func_48(l_763, g_229, (l_874 = ((p_43.f0 | (g_30.f7 <= func_70((safe_rshift_func_uint8_t_u_s(p_44, (p_46 & l_852.f3)))))) <= ((l_873 = p_46) == l_874))), g_229, p_43.f0) != 7L), l_653.f9));
                }
                if ((safe_mod_func_uint32_t_u_u((0x5408L ^ g_30.f2), func_57(l_852.f1, l_601, g_373, g_476, p_46))))
                {
                    return g_860;
                }
                else
                {
                    int l_880 = 0x70E4AD16L;
                    int l_889 = 4L;
                    l_852.f5 = (((l_880 = (safe_sub_func_int32_t_s_s((0UL ^ (l_879 || p_44)), func_70((g_860 < l_637))))) != (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(1L)), ((g_180 = (l_852.f7 = (p_44 != l_888))) <= 0UL))), l_813)), g_30.f3))) & l_889);
                    return g_211;
                }
            }
        }
    }
    if ((safe_sub_func_uint16_t_u_u((p_46 != ((l_653.f6 || func_48(g_707, (l_653 , l_634), l_723, ((g_373.f1 = (safe_mul_func_int16_t_s_s((l_599 = l_603), (g_600 = (p_46 && ((~p_43.f0) | l_888)))))) && 8L), g_24)) ^ g_860)), g_633)))
    {
        char l_918 = 0x76L;
        int l_922 = 0xE3E72195L;
        int l_950 = 0x71F2B6E2L;
        short l_952 = 0xC1CCL;
        l_653 = g_30;
        for (g_307 = 0; (g_307 < 9); ++g_307)
        {
            unsigned l_896 = 4294967290UL;
            int l_951 = 0xC822A203L;
            l_896 = (~((g_397 = 0L) || l_625));
            for (l_723 = 0; (l_723 == 1); l_723 = safe_add_func_uint16_t_u_u(l_723, 4))
            {
                char l_915 = 0L;
                struct S0 l_931 = {0,101,1715,0,0,9,407,1235,2448,1};
                unsigned l_959 = 0xE2A3003AL;
                if (func_70((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_896, (+((safe_sub_func_uint8_t_u_u(g_30.f9, (safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(p_46, (func_70((safe_mod_func_uint8_t_u_u(0x07L, (+0UL)))) & (safe_div_func_int32_t_s_s(func_70((safe_mul_func_int8_t_s_s(0x1FL, p_45))), g_30.f5))))) , 250UL), p_43.f0)))) , (-7L))))), l_915))))
                {
                    struct S0 l_919 = {36,38,589,2,1,115,87,-2089,2458,0};
                    int l_920 = (-1L);
                    l_653 = ((l_918 = (safe_rshift_func_int8_t_s_s(func_70((g_30.f7 <= 1UL)), 5))) , l_919);
                    l_919.f5 = p_45;
                    l_919.f7 = (l_920 == ((safe_unary_minus_func_uint32_t_u(func_70((g_265 = (l_922 = 0x855DL))))) || (safe_div_func_uint32_t_u_u((0xE6L < g_493), 0xCC3F5A6DL))));
                    if ((safe_div_func_int8_t_s_s(((func_70(l_922) < 3L) >= g_397), (+((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_44 , (l_919.f7 , (l_653 , p_43.f0))), (l_915 != p_46))), p_45)) ^ g_30.f1)))))
                    {
                        struct S0 l_932 = {49,7,2199,0,1,-113,787,-1391,2447,0};
                        g_30.f5 = g_265;
                        l_932 = l_931;
                        l_919.f5 = (l_919.f8 > l_919.f7);
                        l_932 = (((((safe_add_func_uint8_t_u_u(p_45, (g_373.f0 = (((!(func_70((l_653.f7 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(func_70((l_951 = (g_265 = (((safe_add_func_int32_t_s_s((l_950 = (p_44 , (l_922 = (safe_sub_func_int32_t_s_s((l_922 || ((((((p_43.f0 || (l_919.f5 = (g_30.f0 > l_932.f1))) > g_30.f2) > (g_493 = p_43.f0)) , (((safe_mod_func_uint16_t_u_u(((l_949 = ((l_919.f7 <= g_47.f0) && g_581)) != l_918), l_932.f1)) , p_43) , g_30)) , g_30.f0) != 4294967286UL)), g_30.f5))))), g_30.f8)) > l_919.f4) || 0x8EEFL)))), g_30.f6)) == g_689), l_919.f1)), 6)), p_46)))) & 0x5B1FL)) < l_915) && g_211)))) == p_45) >= 0UL) & g_465) , l_932);
                    }
                    else
                    {
                        l_951 = 0x4B3A930AL;
                        g_493 = (l_653.f5 = l_952);
                        return l_952;
                    }
                }
                else
                {
                    char l_970 = 0L;
                    int l_971 = 0L;
                    l_931.f5 = ((safe_add_func_uint16_t_u_u((l_931.f7 = (l_896 != (g_372.f0 = g_229))), func_70(g_30.f7))) & ((safe_add_func_uint8_t_u_u((g_373.f0 = (p_43.f0 = l_931.f6)), (safe_sub_func_int8_t_s_s(l_959, g_180)))) < 1UL));
                    l_931.f7 = ((func_70(l_951) && (func_70((safe_rshift_func_int16_t_s_s(func_70(p_45), 15))) > ((p_44 , (safe_lshift_func_int8_t_s_s((p_44 != ((safe_sub_func_int32_t_s_s((((safe_sub_func_uint32_t_u_u((l_970 = ((safe_div_func_int16_t_s_s((g_30.f2 , ((0x3BL & 0L) & g_180)), l_601.f0)) & l_951)), l_971)) && g_465) > l_951), 0x516616F4L)) > l_918)), 3))) , g_600))) , 0xB9CB7144L);
                }
                l_972 = l_653;
            }
        }
        l_653.f5 = 0xF893BA43L;
    }
    else
    {
        struct S0 l_981 = {85,63,884,0,0,61,779,2548,932,0};
        l_981.f5 = (((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_972.f7 = (l_653.f5 = (l_972.f5 = ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_30.f8, 7)), ((g_30.f0 && ((func_67(func_70((l_981 , ((safe_lshift_func_uint16_t_u_s(g_344, p_44)) != ((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((p_43.f1 = ((l_981 , (((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_43.f0, (p_45 & ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(p_45, 13)) ^ 0L), 9)) == p_46)))), g_397)) == g_30.f6) , p_46)) == g_234)), 0x31CA5FBCL)), 11)) | g_30.f9) | (-3L)) < l_972.f2)))), g_30.f3) , l_589) > p_44)) < l_981.f0))) & 5L) & 0x1D0C7A6EL) == l_972.f9)))), g_47.f0)), g_30.f1)) ^ l_653.f0) , g_633);
        l_653.f5 = (~(l_653.f6 , (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((func_67((safe_lshift_func_uint16_t_u_s(p_46, 15)), l_972.f8) , (!(l_981.f7 = (((((l_981.f5 = l_888) ^ g_23) > (g_860 >= (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_234, ((g_47 = g_47) , p_45))), 0UL)))) != g_30.f0) < l_599)))) ^ g_344), g_30.f3)), 4))));
        l_981.f5 = g_600;
    }
    return g_30.f7;
}







static unsigned short func_48(short p_49, int p_50, short p_51, char p_52, unsigned p_53)
{
    char l_319 = 0L;
    int l_320 = 7L;
    struct S0 l_321 = {86,49,634,2,1,78,727,3132,2297,0};
    int l_345 = (-1L);
    unsigned char l_351 = 1UL;
    char l_356 = 0x75L;
    union U1 l_434 = {1UL};
    l_320 = (safe_rshift_func_uint8_t_u_u(p_49, ((safe_div_func_int8_t_s_s(p_52, func_70(((func_70((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(func_70(l_319), func_70((l_319 & p_49)))), (~0x1D48L)))) && g_30.f7) , l_319)))) != g_24)));
    l_320 = (0x3DL & 0x08L);
    l_321 = l_321;
    if (p_50)
    {
        struct S0 l_346 = {62,54,2287,3,1,-51,75,-441,4165,1};
        for (p_50 = 0; (p_50 <= 1); p_50++)
        {
            g_30.f7 = ((safe_sub_func_int32_t_s_s(func_70((safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(l_321.f6, 4)) < ((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_211, l_321.f8)), (l_345 = (safe_rshift_func_uint8_t_u_s(((g_344 = (safe_add_func_int32_t_s_s(func_70(g_307), ((safe_div_func_int8_t_s_s(0x24L, (safe_add_func_int16_t_s_s(l_321.f3, 0xCA08L)))) <= g_30.f3)))) , 0x1DL), 0))))), g_231)) || 1UL)), 0xF33F7037L))), g_180)) < g_30.f9);
            g_30 = l_346;
            g_30 = g_30;
        }
        l_356 = (l_346 , ((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_320 = (func_70(p_50) , ((l_346.f7 & (func_70(l_351) || g_24)) < ((safe_sub_func_uint16_t_u_u(p_53, (safe_div_func_int16_t_s_s((l_346.f6 < 1L), g_23)))) >= 0UL)))), g_231)), 0xFAL)) && l_321.f2) , p_52) && 65527UL));
    }
    else
    {
        union U1 l_369 = {0x3AL};
        int l_378 = 0L;
        struct S0 l_392 = {39,73,2433,1,0,-70,723,-1083,592,0};
        g_30 = l_321;
        for (l_320 = 0; (l_320 > 23); l_320 = safe_add_func_uint8_t_u_u(l_320, 1))
        {
            for (l_345 = 19; (l_345 > 11); l_345 = safe_sub_func_int16_t_s_s(l_345, 6))
            {
                l_321.f5 = g_30.f9;
                if (g_229)
                    continue;
            }
            l_321.f7 = g_47.f0;
            if (g_344)
                continue;
        }
        if (((!((l_321.f5 = 0x506B647CL) && (safe_mul_func_int16_t_s_s((p_53 >= (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((0xC724L & (p_51 = (safe_mod_func_int8_t_s_s((~g_30.f8), ((func_57(((func_57(g_234, l_369, (g_372 = func_67((safe_mod_func_int8_t_s_s(p_51, l_369.f0)), g_30.f6)), g_30.f0, p_49) , g_30.f9) & g_30.f6), g_47, g_373, p_50, g_30.f1) | 1UL) & g_30.f1))))), 0xDDL)), p_50))), p_53)))) && p_52))
        {
            unsigned l_379 = 0x3B6AADC2L;
            int l_438 = 0xBD6020B4L;
            union U1 l_453 = {0x5EL};
            if ((safe_mul_func_uint8_t_u_u((+(g_372.f0 = (safe_div_func_uint8_t_u_u((((l_369.f0 || (l_379 = (g_307 = (l_378 <= (g_229 <= 0x91L))))) || g_30.f2) & (safe_rshift_func_uint8_t_u_s((l_321.f6 && g_30.f5), 5))), (safe_div_func_int16_t_s_s((l_369.f0 ^ (((safe_mul_func_int16_t_s_s(l_321.f5, g_30.f8)) != l_321.f0) , g_23)), 0x80CAL)))))), p_51)))
            {
                struct S0 l_386 = {55,23,828,0,0,118,1005,-717,1913,0};
                l_321 = (l_386 , (g_30 = g_30));
            }
            else
            {
                char l_408 = 0x2AL;
                int l_409 = 0L;
                union U1 l_454 = {0xB0L};
                unsigned short l_456 = 0xBA96L;
                int l_477 = 0xBE9B4C8CL;
                unsigned short l_478 = 65530UL;
                struct S0 l_505 = {48,22,3789,1,1,-59,1012,-992,2645,0};
                if ((l_320 = (safe_mod_func_uint8_t_u_u((p_52 , p_49), (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_uint16_t_u(g_373.f0)) , (l_392 , p_51)), 2))))))
                {
                    struct S0 l_415 = {38,116,3349,1,0,-44,707,-1066,4849,1};
                    union U1 l_435 = {0xABL};
                    unsigned l_459 = 0UL;
                    for (p_53 = (-22); (p_53 >= 6); ++p_53)
                    {
                        g_30.f7 = p_51;
                        return l_392.f6;
                    }
                    for (g_24 = 17; (g_24 != 20); g_24++)
                    {
                        union U1 l_414 = {1UL};
                        l_409 = func_57((g_397 = p_52), g_372, g_372, ((((safe_mul_func_int16_t_s_s((p_51 = (g_211 ^ (~g_211))), (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((((p_49 = (func_70(p_52) && l_408)) & (l_379 , g_231)) ^ p_53) && l_379), g_234)) ^ p_52), l_379)), g_30.f5)), g_307)))) != g_344) >= l_408) >= 0x7758BA14L), g_265);
                        l_409 = (safe_rshift_func_int16_t_s_s((g_229 = ((safe_rshift_func_int16_t_s_s((l_415.f7 = func_57(l_392.f4, (g_373 = l_414), g_372, (func_70(l_321.f2) , ((0x72BEE661L || (((((l_415 , (safe_div_func_uint32_t_u_u(p_52, (+(safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((-1L), l_392.f6)), 250UL)))))) & (-1L)) || 0x5F06L) ^ g_234) != p_52)) , g_24)), g_30.f3)), 4)) <= p_53)), 15));
                        l_321.f7 = func_57(l_408, l_369, l_369, ((l_415.f5 = (((safe_sub_func_int16_t_s_s(0x5E23L, (safe_rshift_func_uint8_t_u_s((l_392.f7 = (((safe_add_func_int8_t_s_s(0xFDL, (g_234 == (((((l_379 == (((func_70(((+65528UL) > func_70(l_409))) > g_30.f5) > 0L) != 0UL)) == l_408) , l_414.f0) , 0xDDDE7397L) , g_372.f0)))) & 0x59L) ^ p_53)), p_49)))) , g_30.f7) , g_180)) , 4UL), l_321.f1);
                    }
                    if (func_57((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(1UL, 7)) < ((l_415.f1 , l_321.f5) >= func_70(p_49))), 5)), l_434, func_67(p_51, (0x1F83A858L < (g_372.f1 = (func_57(g_24, l_435, l_435, p_50, g_30.f1) == l_379)))), l_408, p_52))
                    {
                        char l_455 = 0xA0L;
                        int l_464 = 1L;
                        int l_466 = 0x06F2AADEL;
                        l_456 = (4294967291UL && (((safe_add_func_uint16_t_u_u((l_438 = g_30.f9), g_30.f7)) > 1L) <= (safe_add_func_uint16_t_u_u(func_57(((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((l_415.f2 ^ (safe_add_func_int8_t_s_s((l_392.f7 = (l_392.f2 <= (safe_mod_func_int8_t_s_s((p_51 == g_30.f2), (l_409 = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_321.f9, 5)), p_49))))))), g_30.f9))) == p_53), p_49)), p_52)) >= p_52), l_453, l_454, p_53, l_455), g_180))));
                        g_30.f7 = (g_30.f1 == ((g_30.f9 = l_392.f5) <= (65535UL <= g_47.f0)));
                        l_392.f7 = (l_466 = ((l_459 >= (g_465 = (safe_add_func_uint8_t_u_u((func_67(g_30.f6, p_53) , ((l_454 = l_454) , p_50)), ((l_464 = (p_52 = (safe_add_func_uint8_t_u_u(g_30.f9, (!l_392.f8))))) != 1UL))))) & l_392.f4));
                        l_409 = ((g_30.f7 ^ ((l_321.f9 != (g_265 == ((safe_rshift_func_uint16_t_u_s((l_392.f7 = g_231), (p_53 > ((safe_sub_func_int16_t_s_s(((((0x4F6EL & 0xC73CL) == g_372.f0) && (0x02L || p_51)) != 6UL), 0x5F8CL)) && 0xB0L)))) <= g_30.f1))) > p_49)) && (-1L));
                    }
                    else
                    {
                        struct S0 l_471 = {15,99,847,3,0,-116,882,5034,446,0};
                        l_415.f5 = g_372.f0;
                        g_30.f5 = l_415.f9;
                        l_471 = (l_471 , l_471);
                    }

                                    }
                else
                {
                    unsigned short l_479 = 0UL;
                    g_30 = g_30;
                    l_479 = (l_438 = (((safe_mul_func_uint8_t_u_u((p_51 > p_51), ((p_49 = ((5UL <= l_409) | (safe_mod_func_int8_t_s_s(func_57((g_476 = func_57(g_30.f5, (l_453 = l_453), l_454, (l_351 & p_51), g_373.f0)), g_373, l_434, l_438, g_180), 9L)))) > 1UL))) == l_477) == l_478));
                    l_321.f7 = p_53;
                }
                l_321.f5 = ((safe_unary_minus_func_int16_t_s(((g_372.f0 = ((safe_unary_minus_func_int16_t_s(((((safe_unary_minus_func_int8_t_s((-1L))) >= (!p_53)) , func_70((p_50 != func_70((((l_477 = 1UL) >= (safe_mod_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(func_57(g_229, g_373, g_47, ((0x744EL && (safe_mod_func_int8_t_s_s((-8L), l_321.f3))) == p_51), l_321.f3), 0L)) , p_52) != 0L), p_51))) , l_378))))) >= p_52))) <= g_47.f0)) == p_50))) == g_344);
                for (l_345 = 0; (l_345 >= (-20)); l_345 = safe_sub_func_uint8_t_u_u(l_345, 1))
                {
                    struct S0 l_499 = {48,2,2530,0,0,-89,851,-4359,1398,1};
                    if (g_30.f8)
                    {
                        union U1 l_494 = {0x5AL};
                        int l_500 = 0x7C7D884CL;
                        l_321.f5 = (safe_sub_func_int32_t_s_s(1L, func_70((func_57((g_493 = p_51), l_453, l_494, (l_500 = ((safe_add_func_int16_t_s_s((((func_57(p_49, l_369, g_47, g_231, (safe_add_func_uint8_t_u_u((l_499 , 252UL), p_52))) > g_476) == l_454.f0) , l_351), 0x3767L)) | l_409)), l_478) , p_52))));
                        g_30 = ((safe_rshift_func_int8_t_s_s(0L, (~0x43L))) , (l_392 = g_30));
                        g_30.f7 = (safe_add_func_int16_t_s_s(p_49, g_30.f5));
                        g_30.f7 = (l_477 | (p_52 != (l_392.f5 = 0x3B6EL)));
                    }
                    else
                    {
                        if (p_50)
                            break;
                        g_30 = l_505;
                    }
                    g_307 = (safe_add_func_int16_t_s_s(0L, g_24));
                    l_505 = g_30;
                    l_499.f5 = (l_392.f9 ^ (((func_70(func_57(g_465, g_372, (g_373 = func_67(((l_392.f7 = ((l_499.f3 <= ((safe_div_func_uint32_t_u_u((248UL ^ ((((p_51 == g_229) < (safe_add_func_int32_t_s_s(g_30.f0, (safe_mod_func_uint16_t_u_u(((g_493 = (safe_div_func_int8_t_s_s((g_23 < (-1L)), 251UL))) == g_30.f4), g_265))))) == l_499.f0) , 0x1FL)), 0x44512B4EL)) ^ p_49)) == g_30.f8)) , 0x22529B2FL), l_392.f0)), g_397, l_505.f4)) , g_30) , l_392.f1) & g_30.f0));
                }
                l_320 = ((+(safe_rshift_func_uint16_t_u_s(65534UL, 8))) != 1UL);
            }
            l_320 = ((l_392.f7 ^ (l_392.f7 <= (g_373 , l_321.f5))) & (p_51 = (l_438 = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((l_321.f7 = ((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s(((g_265 ^ (safe_add_func_uint32_t_u_u((p_52 ^ (((l_392.f5 = p_53) ^ l_453.f0) ^ ((safe_sub_func_uint8_t_u_u((((+p_52) > p_50) && l_379), g_30.f1)) & (-9L)))), 0x6185353FL))) , l_392.f5), p_49)), (-9L))) <= l_453.f0)) == g_231), l_453.f0)), 0L)))));
        }
        else
        {
            unsigned l_534 = 1UL;
            struct S0 l_558 = {73,45,2223,1,1,-110,321,3726,1459,0};
            unsigned short l_572 = 65527UL;
            int l_582 = 1L;
            if ((g_30.f5 = p_50))
            {
                struct S0 l_530 = {70,13,2947,2,0,-20,182,-3829,4721,0};
                l_530 = l_392;
                for (p_50 = 0; (p_50 < (-1)); --p_50)
                {
                    unsigned short l_533 = 1UL;
                    g_30.f7 = l_434.f0;
                    if (l_533)
                        break;
                }
                l_534 = l_530.f7;
                l_530.f7 = (safe_lshift_func_int16_t_s_s((((-6L) == l_530.f9) >= 4294967294UL), g_307));
            }
            else
            {
                unsigned short l_545 = 0x7EBFL;
                int l_546 = 1L;
                struct S0 l_557 = {84,36,2839,3,0,1,528,14,3687,0};
                l_546 = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((l_392.f9 , g_397) != (g_476 = p_53)), func_57(p_51, func_67(p_53, (safe_div_func_uint8_t_u_u(g_30.f4, (safe_rshift_func_uint8_t_u_u(g_30.f1, 3))))), l_434, l_351, l_545))), 0UL));
                for (g_229 = 0; (g_229 < 3); g_229 = safe_add_func_int8_t_s_s(g_229, 8))
                {
                    unsigned l_563 = 4294967295UL;
                    struct S0 l_571 = {63,16,2536,3,0,109,386,1777,2353,0};
                    if ((safe_sub_func_uint8_t_u_u(func_70(g_229), (safe_lshift_func_uint16_t_u_u(func_70((safe_mod_func_int8_t_s_s(g_180, ((safe_rshift_func_uint16_t_u_s((l_557.f7 = (((l_392.f1 , (((l_558 = l_557) , ((g_265 = (0xB09EFCC0L != ((g_397 = ((1UL == (g_465 < (l_392.f7 = (safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(p_49, g_30.f2)) <= 0L), 0x54FAL))))) ^ p_53)) < 0x3462L))) == p_52)) ^ g_30.f4)) ^ 3UL) <= g_30.f2)), g_493)) | p_50)))), l_392.f2)))))
                    {
                        l_558 = l_392;
                    }
                    else
                    {
                        unsigned char l_570 = 0xB5L;
                        l_563 = 0x0F6D4913L;
                        l_321.f5 = (!((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_24, 10)), ((g_30.f9 = p_53) != (-4L)))) ^ ((safe_add_func_uint32_t_u_u(l_369.f0, (-1L))) < g_344)));
                        l_570 = (g_397 , p_52);
                        l_571 = (l_571 , g_30);
                    }
                }
            }
            l_321.f7 = (l_558.f0 , ((func_57(l_392.f8, g_372, (g_373 = func_67(l_572, l_392.f4)), (l_582 = (l_558.f7 = (l_558.f5 = ((safe_rshift_func_uint8_t_u_s((g_30.f8 && (((safe_rshift_func_uint8_t_u_u(g_30.f9, (g_581 = (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x7AL, p_52)), g_30.f8))))) > l_558.f4) <= p_53)), 5)) < p_49)))), p_49) < g_476) || g_372.f0));
            l_558.f5 = (0x6058D026L == func_70(p_49));
        }
        l_321.f7 = 0x03FA2C95L;
    }
    return l_319;
}







static unsigned func_57(int p_58, union U1 p_59, union U1 p_60, unsigned short p_61, unsigned short p_62)
{
    int l_294 = 1L;
    int l_308 = 0x3130D0C7L;
    int l_309 = 0x981A81CEL;
    l_294 = (safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((+((g_30.f6 | l_294) | (safe_mod_func_int16_t_s_s(g_30.f3, (safe_sub_func_int32_t_s_s((+(l_294 , (l_308 = (safe_sub_func_uint8_t_u_u((0xDDL & p_61), (~(safe_div_func_uint8_t_u_u((g_234 = l_294), (safe_mod_func_uint8_t_u_u(g_30.f0, (g_307 = ((safe_sub_func_uint16_t_u_u((g_265 = 65534UL), l_294)) ^ p_62)))))))))))), g_30.f6)))))), l_309)) & g_24), g_180));
    return g_30.f0;
}







static union U1 func_67(unsigned p_68, int p_69)
{
    int l_72 = 1L;
    int l_81 = (-2L);
    int l_96 = 0x967D4ADDL;
    union U1 l_103 = {248UL};
    struct S0 l_154 = {41,51,376,1,1,65,388,-565,28,1};
    char l_156 = (-6L);
    int l_205 = 0xCBC8BFC3L;
    unsigned l_230 = 4294967294UL;
    int l_275 = 1L;
    if (func_70(l_72))
    {
        int l_95 = 0xD48F2AECL;
        int l_97 = 0L;
        g_30.f7 = ((+(safe_div_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_81, p_68)), func_70((l_72 = 0x7513L))))) <= ((p_69 >= func_70((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((p_68 == (l_96 = ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((g_30.f5 && ((((((l_95 = (l_81 < ((l_95 ^ g_30.f4) > 0x5AL))) && p_68) != (-4L)) < 0x3FDD5FB3L) | g_47.f0) != p_68)), g_30.f2)) >= 0L) >= 6UL) <= g_30.f3), p_68)), 0)))) || p_68))) & l_97), l_97)), p_68)), 10)))) && l_95));
    }
    else
    {
        unsigned l_100 = 0x3AD1FF0DL;
        int l_122 = 0xE6782A09L;
        union U1 l_130 = {255UL};
        int l_155 = 0x873B4463L;
        struct S0 l_181 = {76,75,2184,3,1,-5,556,-1179,4201,1};
        if (p_69)
        {
            char l_123 = 0xCEL;
            int l_129 = 0xAC0DF8BEL;
            int l_142 = 1L;
            struct S0 l_252 = {48,8,3293,0,1,-92,404,4946,3511,1};
            if (((65535UL | ((safe_add_func_uint8_t_u_u(func_70(l_96), (g_30.f2 , l_100))) || l_100)) , func_70(p_69)))
            {
                for (l_72 = 16; (l_72 == (-8)); --l_72)
                {
                    return l_103;

                                    }
                return g_47;

                            }
            else
            {
                short l_124 = 0x0280L;
                unsigned l_131 = 8UL;
                int l_143 = 1L;
                l_123 = ((+g_30.f3) && (safe_rshift_func_uint16_t_u_u(((g_47.f0 == (safe_mul_func_uint16_t_u_u((g_30.f6 | ((safe_mod_func_int8_t_s_s(func_70(l_100), (safe_lshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(p_69, (safe_mul_func_uint16_t_u_u((((l_122 = ((safe_mod_func_uint8_t_u_u((g_30.f7 || ((safe_mul_func_int16_t_s_s(p_68, (safe_div_func_uint8_t_u_u(248UL, 0xF2L)))) ^ p_69)), l_100)) || 0x8BEEF898L)) || p_68) == g_30.f0), g_23)))), g_30.f9)))) > l_100)), 0x2668L))) != g_30.f3), g_30.f3)));
                l_124 = (0x96L && g_30.f4);
                l_131 = (safe_mul_func_int16_t_s_s(((l_129 = (safe_div_func_int32_t_s_s((func_70(l_122) , func_70(g_23)), p_68))) , (-4L)), ((p_68 , (l_72 = ((l_130 , g_30.f3) , l_124))) == g_30.f8)));
                l_143 = (9L < ((safe_rshift_func_uint8_t_u_u((l_103.f0 , (l_142 = (safe_lshift_func_uint8_t_u_s((g_47.f0 | (l_129 = l_103.f0)), (((g_24 > l_123) < (safe_div_func_int16_t_s_s(0x4092L, func_70((func_70(((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_122 = (func_70(((g_30 , l_130) , g_30.f3)) ^ p_69)), l_123)), g_30.f5)) != p_69)) > 0x04BDE658L))))) <= g_30.f8))))), g_30.f7)) || (-1L)));
            }
            l_122 = g_23;
            for (l_100 = 0; (l_100 <= 19); l_100 = safe_add_func_int16_t_s_s(l_100, 2))
            {
                unsigned short l_148 = 0xBDB1L;
                int l_161 = (-1L);
                int l_202 = 4L;
                if (((l_96 = ((p_68 > (g_30.f5 = (g_30.f7 = ((l_142 , p_69) & (g_24 == ((((l_130.f0 != p_69) | ((p_69 <= l_148) ^ g_30.f2)) == p_69) >= g_47.f0)))))) ^ l_148)) == g_30.f6))
                {
                    if (g_23)
                        break;
                }
                else
                {
                    struct S0 l_149 = {60,24,2099,1,1,-115,275,2186,3881,1};
                    l_149 = g_30;
                }
                g_30.f5 = g_30.f6;
                if ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s((l_142 = (l_154 , (l_122 = p_69))), (l_155 = ((g_30.f1 > 1UL) ^ (!g_30.f5))))) == (l_154.f5 ^ (l_156 = g_30.f0))), (safe_add_func_uint8_t_u_u(func_70(((func_70(((func_70((safe_rshift_func_int8_t_s_s((l_161 = p_69), 7))) & 4294967290UL) , l_148)) > 4294967294UL) <= p_69)), p_69)))))
                {
                    unsigned char l_162 = 255UL;
                    l_161 = (-9L);
                    l_162 = (l_148 | p_69);
                }
                else
                {
                    unsigned l_171 = 4294967295UL;
                    struct S0 l_182 = {81,93,3402,2,0,-38,725,-868,978,0};
                    g_180 = ((safe_lshift_func_uint8_t_u_s((65533UL > g_30.f4), 4)) < ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_161 ^ (safe_rshift_func_uint16_t_u_u((!9UL), 5))) & l_171), l_171)), (safe_sub_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(l_171, (g_24 = g_30.f0))) < ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_30.f6, l_142)), p_69)) != l_161)) ^ p_69), g_30.f8)))) && (-9L)));
                    l_182 = l_181;
                    l_181.f7 = p_68;
                    for (l_130.f1 = 0; (l_130.f1 >= 30); l_130.f1++)
                    {
                        int l_201 = 0L;
                        l_129 = (l_201 = (safe_sub_func_int32_t_s_s(0x6FC2D762L, (l_155 , (safe_add_func_uint16_t_u_u((p_69 , (safe_rshift_func_int8_t_s_s((func_70(func_70(l_181.f7)) | ((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(l_161, (l_155 = (g_24 = (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_30.f7 = 0x6C09E53FL), (safe_sub_func_int16_t_s_s((((g_180 = p_69) == 0x1EL) | 0x764965E8L), g_47.f0)))), l_182.f6)))))) , 0x6BF88CC1L), l_201)) <= p_68)), 6))), 65532UL))))));
                        l_154 = g_30;
                        l_201 = 1L;
                        l_182.f7 = l_202;
                    }

                                    }
                if (func_70(l_181.f2))
                {
                    unsigned l_210 = 4294967295UL;
                    int l_228 = 0x778E50C8L;
                    struct S0 l_251 = {52,96,656,2,0,-21,96,1146,1330,0};
                    g_30.f5 = (p_68 , (0xE8976619L ^ (l_154.f5 = ((~0xDDL) < (l_161 = l_103.f0)))));
                    if ((1UL == (safe_mul_func_int16_t_s_s(l_205, (func_70(l_181.f8) && 0x5750L)))))
                    {
                        short l_214 = 0xBB40L;
                        struct S0 l_215 = {65,119,398,1,0,-106,207,1183,4676,0};
                        g_30.f7 = func_70(((g_23 = l_129) , p_68));
                        g_30.f7 = (safe_mul_func_int8_t_s_s(p_69, func_70((((((g_211 = (safe_sub_func_uint8_t_u_u(p_68, l_210))) || l_181.f1) != ((safe_lshift_func_int16_t_s_u(((((l_122 = l_210) ^ (l_214 == (p_69 < ((-1L) == g_30.f3)))) ^ 0xDC91L) & g_30.f7), g_30.f7)) | g_30.f3)) , l_215) , g_30.f3))));
                        l_155 = (0xB9867C34L && (0x5DL || (safe_sub_func_int32_t_s_s(((l_122 = ((safe_div_func_int32_t_s_s((((func_70(func_70((g_231 = (safe_rshift_func_uint8_t_u_u((((l_215.f5 = (safe_mul_func_int8_t_s_s((func_70((safe_sub_func_uint16_t_u_u((g_229 = (g_23 <= ((safe_sub_func_uint8_t_u_u(g_30.f9, ((g_30.f9 && p_68) & 2L))) <= (((l_205 = 4UL) >= (((g_30.f5 = l_228) <= 0x3CA83351L) , g_30.f5)) && p_69)))), l_230))) , 0x62L), l_181.f8))) <= l_129) | 0x2CDD3E71L), p_68))))) < g_47.f0) , 0x7CL) <= 1UL), p_68)) > l_72)) | l_154.f6), p_68))));
                    }
                    else
                    {
                        l_252 = ((safe_lshift_func_uint8_t_u_s((g_211 = ((((g_234 < l_122) | (safe_add_func_int32_t_s_s(l_210, (safe_rshift_func_int16_t_s_u(p_68, 0))))) ^ (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((g_231 = (safe_sub_func_uint16_t_u_u(((((g_30.f5 = (safe_add_func_uint8_t_u_u((g_24 = (func_70(((safe_add_func_uint32_t_u_u(g_30.f9, ((l_228 = (func_70(g_23) != ((g_30.f3 && (((safe_mod_func_uint16_t_u_u(0xAD9AL, g_231)) , p_68) , 0L)) != l_181.f7))) ^ g_30.f5))) != g_30.f2)) ^ 6L)), (-5L)))) <= (-8L)) , g_23) | p_68), 0x7F17L))) , 0UL), l_161)), l_181.f4))) && 8UL)), 0)) , l_251);
                    }
                }
                else
                {
                    g_30.f5 = (((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_68, func_70((l_123 != g_30.f1)))), 0xF9EBL)), 0x156FL)) ^ func_70(((((l_252.f7 = (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_69, 0)), l_123)) != (g_265 = (safe_lshift_func_uint8_t_u_s(1UL, p_68)))) ^ g_211)) < 0L) <= 0xE3L) < 0xC2L))) , l_154.f1);
                }
            }
            g_30.f5 = p_68;
        }
        else
        {
            unsigned l_272 = 4294967295UL;
            g_30.f7 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((l_154.f7 = (safe_sub_func_uint32_t_u_u(g_231, (-6L)))), p_69)), 6));
            l_154.f7 = ((l_122 = p_68) != (g_24 = 0UL));
            l_96 = ((+p_69) != l_272);
        }
        for (l_230 = (-15); (l_230 < 34); l_230 = safe_add_func_int16_t_s_s(l_230, 7))
        {
            if (l_181.f7)
                break;
            l_275 = l_103.f0;
        }
        for (g_180 = (-14); (g_180 >= 57); ++g_180)
        {
            unsigned short l_284 = 0x8CCEL;
            int l_289 = 0x47C76043L;
            g_30.f7 = 0L;
            if (l_181.f7)
                break;
            l_289 = ((l_181.f1 < ((safe_mod_func_uint16_t_u_u(0x5037L, func_70(p_69))) & (((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((l_284 , (safe_lshift_func_int16_t_s_s(func_70(l_181.f0), 14))), 11)), 15)) & ((l_284 , (safe_mod_func_int16_t_s_s(0x5634L, l_181.f2))) != 0xA992L)) || 0xA5BA7D9BL))) ^ 0x62L);
        }
    }
    return l_103;

    }







static int func_70(unsigned short p_71)
{
    int l_73 = 8L;
    struct S0 l_74 = {71,82,3260,1,1,-69,390,-3388,4858,0};
    struct S0 l_75 = {20,77,1843,1,0,-48,1020,-792,1801,0};
    struct S0 l_76 = {31,93,3181,1,1,-118,197,-3787,448,0};
    l_76 = (l_75 = (l_74 = (l_73 , l_74)));
    return g_30.f0;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_30.f3, "g_30.f3", print_hash_value);
    transparent_crc(g_30.f4, "g_30.f4", print_hash_value);
    transparent_crc(g_30.f5, "g_30.f5", print_hash_value);
    transparent_crc(g_30.f6, "g_30.f6", print_hash_value);
    transparent_crc(g_30.f7, "g_30.f7", print_hash_value);
    transparent_crc(g_30.f8, "g_30.f8", print_hash_value);
    transparent_crc(g_30.f9, "g_30.f9", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_372.f0, "g_372.f0", print_hash_value);
    transparent_crc(g_373.f0, "g_373.f0", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_493, "g_493", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_860, "g_860", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1021.f0, "g_1021.f0", print_hash_value);
    transparent_crc(g_1021.f1, "g_1021.f1", print_hash_value);
    transparent_crc(g_1021.f2, "g_1021.f2", print_hash_value);
    transparent_crc(g_1021.f3, "g_1021.f3", print_hash_value);
    transparent_crc(g_1021.f4, "g_1021.f4", print_hash_value);
    transparent_crc(g_1021.f5, "g_1021.f5", print_hash_value);
    transparent_crc(g_1021.f6, "g_1021.f6", print_hash_value);
    transparent_crc(g_1021.f7, "g_1021.f7", print_hash_value);
    transparent_crc(g_1021.f8, "g_1021.f8", print_hash_value);
    transparent_crc(g_1021.f9, "g_1021.f9", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1212.f0, "g_1212.f0", print_hash_value);
    transparent_crc(g_1212.f1, "g_1212.f1", print_hash_value);
    transparent_crc(g_1212.f2, "g_1212.f2", print_hash_value);
    transparent_crc(g_1212.f3, "g_1212.f3", print_hash_value);
    transparent_crc(g_1212.f4, "g_1212.f4", print_hash_value);
    transparent_crc(g_1212.f5, "g_1212.f5", print_hash_value);
    transparent_crc(g_1212.f6, "g_1212.f6", print_hash_value);
    transparent_crc(g_1212.f7, "g_1212.f7", print_hash_value);
    transparent_crc(g_1212.f8, "g_1212.f8", print_hash_value);
    transparent_crc(g_1212.f9, "g_1212.f9", print_hash_value);
    transparent_crc(g_1292, "g_1292", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    transparent_crc(g_1398, "g_1398", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
