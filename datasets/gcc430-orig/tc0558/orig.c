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



static unsigned g_34[4][10] = {{0xA2B8EA2CL,0UL,0x0389A9B8L,0x9D5B611FL,0x0389A9B8L,0UL,0xA2B8EA2CL,1UL,8UL,0x7F05F432L},{1UL,0x5EA28C7FL,0UL,0x494ABC24L,0xA2B8EA2CL,0xA2B8EA2CL,0x494ABC24L,0UL,0x5EA28C7FL,1UL},{4294967292UL,0x5EA28C7FL,8UL,6UL,0x9D5B611FL,0x7F05F432L,0xA2B8EA2CL,0x7F05F432L,0x9D5B611FL,6UL},{6UL,0UL,6UL,0x5EA28C7FL,0x9D5B611FL,4294967295UL,1UL,0x0389A9B8L,0x0389A9B8L,1UL}};
static int g_61 = 0xFB861A71L;
static unsigned short g_80 = 0x264AL;
static char g_81 = 0xD7L;
static volatile int g_82 = 0x084F7CB2L;
static int g_83 = 8L;
static int g_99 = 6L;
static volatile char g_183 = 0x18L;
static unsigned g_267 = 0x9FCA5432L;
static short g_331 = 0x5C0AL;
static volatile unsigned short g_518 = 0x411CL;
static short g_598 = (-9L);
static char g_1177 = 0x70L;



static int func_1(void);
static unsigned short func_4(short p_5, int p_6, int p_7, unsigned short p_8, unsigned char p_9);
static unsigned char func_19(unsigned p_20, unsigned char p_21, int p_22, unsigned short p_23, int p_24);
static unsigned short func_25(unsigned short p_26, unsigned char p_27, short p_28, unsigned p_29, char p_30);
static unsigned char func_31(int p_32, int p_33);
static int func_35(unsigned short p_36, unsigned char p_37, int p_38, int p_39);
static unsigned short func_42(unsigned short p_43, unsigned p_44, unsigned p_45);
static unsigned func_52(short p_53, short p_54, unsigned char p_55);
static int func_62(unsigned char p_63, unsigned p_64, unsigned p_65, unsigned char p_66);
static unsigned short func_69(int p_70);
static int func_1(void)
{
    int l_10 = 0x6210B999L;
    char l_1176[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int i;
    l_10 = (safe_add_func_uint16_t_u_u(func_4(l_10, ((((safe_lshift_func_int8_t_s_s((0x1B88146CL && (safe_sub_func_int8_t_s_s((l_10 || (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(func_19((func_25((func_31(g_34[1][5], func_35((safe_mul_func_uint16_t_u_u((g_34[3][0] ^ func_42((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_34[1][5], g_34[2][8])), (safe_mod_func_uint32_t_u_u(func_52(l_10, (((safe_mod_func_int32_t_s_s(0x4DB503B5L, l_10)) || g_34[2][1]) & l_10), l_10), 0xE47FC431L)))), l_10, l_10)), g_331)), g_34[2][7], g_34[1][5], g_331)) >= g_267), g_598, l_10, g_34[2][4], l_10) < 0x3323L), l_10, l_10, g_34[2][9], l_10), l_10)) > l_10) > 0xB4L), l_10))), (-1L)))), l_10)) > g_331) >= g_34[1][5]) > g_331), l_10, g_34[0][4], l_10), g_34[1][5]));
    for (g_331 = 0; (g_331 == 7); g_331 = safe_add_func_int8_t_s_s(g_331, 5))
    {
        unsigned char l_1172 = 0x19L;
        int l_1175 = 0x05DD687AL;
        int l_1178[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1178[i] = 0x7B90A97AL;
        g_1177 = (safe_mul_func_uint8_t_u_u(0xFBL, (func_35((((0xEB04L & func_4(l_1172, l_10, ((safe_mod_func_uint16_t_u_u(0x1E40L, g_183)) != (l_1175 >= l_1175)), l_1175, l_1176[2])) == 0x1DC1L) <= 1L), g_598, g_34[1][5], l_10) | l_10)));
        l_1178[0] = l_1176[0];
        for (g_1177 = 1; (g_1177 >= 0); g_1177 -= 1)
        {
            unsigned char l_1191 = 0x54L;
            int l_1192 = 0x7D155CBEL;
            int i;
            l_1178[g_1177] = l_1178[g_1177];
            l_1178[g_1177] = (safe_sub_func_int32_t_s_s((g_598 && l_1178[g_1177]), ((((func_42(l_1178[g_1177], (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(l_1178[g_1177], (safe_lshift_func_int8_t_s_s(func_35(((safe_lshift_func_int8_t_s_s(g_61, (((func_69(g_61) > ((((safe_sub_func_uint16_t_u_u(((((0x35L | (g_267 <= 0x7669D0BAL)) | g_267) | 0xED56L) > l_1178[g_1177]), 65535UL)) >= l_1178[g_1177]) <= 0xD8D421DDL) | 0UL)) && l_1176[2]) == g_34[1][5]))) | 0x74L), l_1178[1], g_34[1][5], l_1191), g_267)))), g_331)), l_1172) >= g_267) > g_1177) < g_34[1][5]) | l_1192)));
        }
    }
    return g_598;
}







static unsigned short func_4(short p_5, int p_6, int p_7, unsigned short p_8, unsigned char p_9)
{
    short l_1150 = 1L;
    int l_1163 = 0xF63C67B0L;
    p_7 = func_19(g_61, ((-10L) < (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_267, (((l_1150 <= 0x90C2L) == (safe_lshift_func_int8_t_s_s(((65535UL <= (safe_sub_func_uint8_t_u_u((~(func_69(p_7) || g_83)), p_8))) >= l_1150), 4))) ^ p_6))), p_7))), l_1150, l_1150, g_331);
    l_1163 = ((safe_lshift_func_int8_t_s_s(func_52(l_1150, l_1150, p_7), l_1150)) & (((safe_lshift_func_uint8_t_u_u(g_598, (((l_1150 > (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((g_34[0][0] | g_267), g_267)) != 255UL), p_7))) <= l_1150) > (-1L)))) != 1L) < g_267));
    g_61 = (safe_rshift_func_uint16_t_u_s((p_5 > (safe_mul_func_int8_t_s_s(p_9, g_183))), 9));
    return g_61;
}







static unsigned char func_19(unsigned p_20, unsigned char p_21, int p_22, unsigned short p_23, int p_24)
{
    int l_1141 = 7L;
    p_22 = 0x47668602L;
    l_1141 = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_1141, (p_20 < func_31(((l_1141 & l_1141) | ((~func_35(((safe_mul_func_uint32_t_u_u(((g_183 < l_1141) && (safe_mod_func_int32_t_s_s(5L, l_1141))), (((~l_1141) | l_1141) >= g_81))) >= g_81), p_23, l_1141, p_22)) >= g_34[1][5])), p_20)))), 0x7D0CL));
    g_82 = p_22;
    return p_22;
}







static unsigned short func_25(unsigned short p_26, unsigned char p_27, short p_28, unsigned p_29, char p_30)
{
    int l_924 = 0L;
    int l_929 = 0xB123E02EL;
    int l_986 = 0xD52253D6L;
    l_924 = (!(safe_sub_func_uint32_t_u_u(p_28, (-2L))));
    l_924 = (safe_rshift_func_uint16_t_u_u(0x8400L, 9));
    if ((0x07DEL & (((safe_sub_func_int8_t_s_s(g_61, ((0xC7L == (func_62(l_929, p_27, ((+0x73C8CE24L) == (safe_mod_func_int8_t_s_s(((g_34[1][5] <= (safe_unary_minus_func_uint8_t_u(g_34[1][5]))) != g_82), g_331))), g_99) < g_331)) ^ (-1L)))) && l_924) == 0x29E3L)))
    {
        unsigned char l_936 = 0xA1L;
        int l_937 = 0x58193AC1L;
        g_99 = (safe_unary_minus_func_uint32_t_u((g_183 <= (safe_rshift_func_int8_t_s_s(g_331, 7)))));
        l_924 = ((l_936 && g_81) ^ g_82);
        l_937 = (g_82 & g_34[0][7]);
        l_924 = (!(safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(p_28, l_929)) <= (safe_lshift_func_uint16_t_u_u(p_27, ((func_62(g_267, g_518, g_331, ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(0xF020L, (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((0xCD3D947DL || g_81) > g_99), g_267)), g_99)), 6)), g_61)))), g_34[1][5])) & p_30)) < 5L) != (-4L))))), l_924)));
    }
    else
    {
        unsigned char l_968 = 1UL;
        int l_980 = 0L;
        for (p_30 = 0; (p_30 > (-29)); p_30 = safe_sub_func_int32_t_s_s(p_30, 2))
        {
            l_924 = g_80;
        }
        for (l_924 = 0; (l_924 > 15); l_924 = safe_add_func_int32_t_s_s(l_924, 6))
        {
            int l_973 = 7L;
            int l_1009 = 0x96D397A7L;
            unsigned short l_1020 = 65526UL;
            g_83 = ((!0L) & (((0xB3L < (p_30 > (((safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_99, (safe_lshift_func_uint8_t_u_s((l_968 ^ g_80), 4)))), (g_82 || l_924))), 4)) != ((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_30, p_27)), l_968)) & l_973)) >= 0x5837L))) >= p_28) || p_27));
            for (g_61 = (-2); (g_61 >= (-23)); g_61--)
            {
                unsigned char l_976 = 0x16L;
                int l_979 = (-3L);
                l_976 = l_973;
                for (g_267 = 12; (g_267 == 40); g_267 = safe_add_func_uint16_t_u_u(g_267, 3))
                {
                    char l_983 = 0x70L;
                    int l_985 = (-1L);
                    if (l_979)
                    {
                        if (g_183)
                            break;
                        l_980 = (-1L);
                        l_980 = (safe_sub_func_int16_t_s_s(g_267, l_973));
                        if (l_983)
                            continue;
                    }
                    else
                    {
                        char l_984[10][7] = {{0L,8L,0x74L,0L,8L,0L,0x9FL},{0x26L,0x5BL,0xF4L,0x26L,(-1L),0x26L,0xF4L},{(-1L),(-1L),0xAFL,0L,0L,0x64L,(-1L)},{0x53L,0xF4L,0x28L,0x5BL,0L,0L,0x5BL},{(-2L),0x9FL,(-2L),0L,0L,(-2L),8L},{0x5BL,(-1L),7L,0x8BL,(-1L),0xBEL,(-1L)},{0x24L,0L,0L,0x24L,8L,(-2L),0L},{0L,0x53L,0xF4L,0x28L,0x5BL,0L,0L},{(-1L),0L,0x20L,0L,(-1L),0x64L,0L},{0x53L,0x0CL,0x26L,0x5BL,0xF4L,0x26L,(-1L)}};
                        int i, j;
                        l_984[9][6] = g_598;
                        l_985 = ((((g_82 & l_980) | 0x29A0L) < g_34[1][6]) >= 255UL);
                        l_986 = g_81;
                    }
                    l_986 = func_69(((g_83 != (p_28 >= 0xD2E5C363L)) >= ((safe_add_func_uint8_t_u_u((p_27 <= l_983), (((safe_add_func_uint8_t_u_u(p_29, (l_973 | (safe_sub_func_uint16_t_u_u(g_81, g_598))))) && l_976) == l_929))) != p_27)));
                }
                l_973 = (l_980 > func_62(((3L < (0xBC012FB6L ^ ((g_34[1][5] & (0x95L && 255UL)) || g_80))) & (g_82 >= l_980)), l_979, l_980, g_598));
                l_979 = p_28;
            }
            for (p_28 = 3; (p_28 >= 0); p_28 -= 1)
            {
                int l_1046 = 0xD3B84217L;
                int i, j;
                if (((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_31((g_34[p_28][(p_28 + 2)] && (((g_34[p_28][(p_28 + 4)] < ((safe_mul_func_uint8_t_u_u(p_27, p_27)) == (0x99L >= p_28))) != (((((safe_mul_func_int8_t_s_s((p_26 || p_26), g_331)) > p_26) != l_973) < g_331) < g_598)) > 0x09F9D918L)), l_973), 65535UL)), g_34[p_28][(p_28 + 4)])) && 0x4220E3C3L))
                {
                    char l_1005 = 1L;
                    int l_1006 = (-4L);
                    l_1006 = (((((g_80 > g_99) >= p_26) == g_34[1][5]) && (safe_lshift_func_int8_t_s_u(g_82, (g_598 > ((safe_sub_func_uint32_t_u_u(0UL, ((p_27 ^ ((g_34[3][9] && g_331) == l_1005)) & g_34[p_28][(p_28 + 4)]))) && 0x3F97L))))) | 8UL);
                    if (g_82)
                        break;
                }
                else
                {
                    return l_973;
                }
                for (g_598 = 0; (g_598 <= 3); g_598 += 1)
                {
                    unsigned short l_1010 = 1UL;
                    l_973 = ((safe_rshift_func_int8_t_s_s(l_1009, 4)) >= l_1010);
                    l_980 = p_30;
                    if ((safe_mod_func_uint8_t_u_u(((((!(((func_52(g_267, g_80, l_929) || 0x69L) && (0x9F4C0A4AL & p_29)) || p_29)) | l_973) && (-1L)) >= g_34[2][8]), p_27)))
                    {
                        short l_1027 = 1L;
                        int l_1028 = 0xD0B0CDB5L;
                        l_1028 = (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(7UL)) < (safe_sub_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(l_1020, 0x3D433C66L)) || (func_42(g_81, (((safe_sub_func_int32_t_s_s((l_1010 || (safe_rshift_func_uint8_t_u_s((g_331 > (g_34[1][5] == l_980)), (safe_sub_func_uint8_t_u_u(g_34[1][5], l_1027))))), g_267)) < g_267) | 0x2BL), g_81) && g_34[p_28][(p_28 + 4)])) < l_1027), g_34[1][5]))), p_28));
                        g_83 = (g_99 || (safe_unary_minus_func_uint8_t_u(0UL)));
                        if (g_518)
                            continue;
                        if (g_82)
                            continue;
                    }
                    else
                    {
                        return l_973;
                    }
                }
                for (l_968 = 0; (l_968 <= 3); l_968 += 1)
                {
                    if (l_968)
                        break;
                    l_986 = (safe_lshift_func_uint8_t_u_u(g_34[p_28][(p_28 + 4)], (0xD33143F9L <= func_69(g_267))));
                }
                l_1046 = (p_26 <= ((((func_62(func_31(g_598, g_34[p_28][(p_28 + 4)]), (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(p_26, (g_34[1][5] != (l_968 || (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_26, (l_973 | g_34[p_28][(p_28 + 2)]))), 0x04DA4541L)), l_986)), 3)))))) >= 5UL), 7)), g_267)), l_980, p_27) & (-9L)) <= p_27) > g_34[p_28][(p_28 + 2)]) >= l_924));
            }
        }
        for (p_28 = 0; (p_28 < 15); ++p_28)
        {
            char l_1049 = (-3L);
            g_61 = l_1049;
            return g_34[0][7];
        }
    }
    if ((0xE3L | p_29))
    {
        unsigned l_1060 = 0x6095F425L;
        unsigned char l_1085[10][9][2] = {{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL}},{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL}},{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL}},{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL}},{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL}},{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,247UL},{0UL,0UL}},{{247UL,0UL},{0UL,247UL},{0UL,0UL},{247UL,0UL},{0UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL}},{{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL}},{{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL}},{{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL},{0xD4L,247UL},{247UL,0xD4L},{247UL,247UL}}};
        short l_1086 = (-1L);
        int l_1107[3][2] = {{0xE15F4CFDL,0xAD96203BL},{0xAD96203BL,0xE15F4CFDL},{0xAD96203BL,0xAD96203BL}};
        int i, j, k;
        if ((safe_lshift_func_int8_t_s_u(func_35((safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_518, 0xC7L)), (safe_mul_func_int16_t_s_s((+g_81), 0xC5A4L)))) > ((l_1060 & (~(g_81 > (safe_lshift_func_int16_t_s_s(0xA0DDL, 10))))) >= ((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((+g_598), p_30)), g_83)) || g_331))), g_99)), p_27, l_1060, l_1060), g_34[1][5])))
        {
            short l_1071 = 0x6B36L;
            int l_1082[9][5] = {{0x3B2B762EL,(-7L),0xA1CB34FDL,0xA1CB34FDL,(-7L)},{0x1509D82AL,2L,0xA1CB34FDL,(-8L),0L},{0x5DAF70A0L,0x1509D82AL,0x1CCF8637L,1L,(-8L)},{1L,0x4B105389L,0L,0x3B2B762EL,(-7L)},{0x5DAF70A0L,0x3B2B762EL,(-8L),(-7L),(-8L)},{0x1509D82AL,(-8L),0xC2EBA9D1L,0x5DAF70A0L,0x1509D82AL},{0x284C4506L,0x4B105389L,0x3B2B762EL,0x284C4506L,(-8L)},{0x48C95E3BL,2L,1L,(-7L),2L},{(-8L),0x4B105389L,8L,1L,1L}};
            int l_1087 = 0L;
            int i, j;
            l_1082[2][1] = (safe_add_func_int16_t_s_s(g_331, ((((safe_add_func_uint16_t_u_u((((!l_1071) & p_27) && (l_1060 && (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(0xA7L, l_1071)), 2)))), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((l_1060 == (safe_mul_func_int16_t_s_s((func_69(p_27) & 0xAE0FABAAL), l_1071))) < 0x323AA686L) >= g_61), 6L)), 2)))) >= l_1071) & g_267) != l_1060)));
            l_1082[2][1] = (safe_mul_func_int8_t_s_s((((l_1085[0][4][1] <= (-1L)) | func_52((p_27 | g_81), p_26, (p_27 & (0L && 0x77A6BD1FL)))) || l_1086), 2L));
            l_1087 = p_27;
            l_986 = p_26;
        }
        else
        {
            int l_1094 = (-9L);
            int l_1097 = 0x07A18AABL;
            l_924 = ((safe_rshift_func_uint16_t_u_s(1UL, 11)) > 0xA7D5L);
            for (l_1086 = (-6); (l_1086 <= 18); ++l_1086)
            {
                unsigned char l_1102 = 0UL;
                g_82 = (-1L);
                l_1102 = (l_1094 < ((safe_lshift_func_uint16_t_u_s((g_61 >= (func_62(((!l_1097) >= (g_82 > (l_1085[7][4][0] >= (p_26 | 1L)))), p_26, (safe_add_func_int16_t_s_s(l_1097, l_1085[0][4][1])), l_929) && p_26)), 8)) >= g_34[2][6]));
            }
            g_83 = (+(safe_lshift_func_int8_t_s_s(l_1097, 1)));
        }
        for (g_83 = 0; (g_83 > 0); g_83++)
        {
            l_924 = (l_1085[0][4][1] || g_34[1][5]);
        }
        l_1107[0][1] = g_598;
    }
    else
    {
        int l_1108 = 0L;
        g_61 = (p_29 != (l_986 > g_61));
        l_1108 = func_35((((l_986 == (l_1108 || (safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((~(safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_924, ((safe_lshift_func_uint16_t_u_s(p_27, 11)) || ((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(func_31(g_99, l_1108), l_1108)), 9)) ^ (1L > 0xF644A1D6L)) & g_267) ^ g_34[1][3]), p_29)), g_598)) ^ g_34[1][5])))), p_28)) & 0UL), g_34[1][5])) < 251UL), 10))) & p_28), g_34[1][5])), p_30)))) <= g_598) || 0L), p_28, p_26, g_267);
        l_986 = (((+(safe_add_func_int16_t_s_s((func_31(((((((safe_rshift_func_int16_t_s_u(g_183, 2)) != (0x1545L ^ ((-4L) != (g_81 != 1L)))) != (!(safe_lshift_func_uint16_t_u_s(l_924, 5)))) | ((!l_986) <= l_1108)) || g_99) == g_83), g_99) <= (-6L)), 0x123BL))) | g_331) ^ 0x94A2L);
    }
    return g_61;
}







static unsigned char func_31(int p_32, int p_33)
{
    unsigned short l_585 = 0x6E98L;
    short l_676[3][8][5] = {{{5L,1L,0x01F1L,3L,0x01F1L},{(-1L),(-1L),(-2L),(-1L),0x01F1L},{0xB925L,0xC2B0L,0L,0x7A98L,0x65BDL},{(-2L),0x7A98L,(-1L),0xE604L,3L},{0xE604L,0xC2B0L,(-1L),(-1L),0xC2B0L},{0x65BDL,(-1L),9L,(-1L),1L},{0xFDB9L,1L,7L,0xE604L,0x7A98L},{(-1L),0L,3L,0x7A98L,0xB925L}},{{0xFDB9L,(-1L),0xB925L,(-1L),0xFDB9L},{0x65BDL,5L,0xB925L,3L,(-1L)},{0xE604L,(-2L),3L,9L,(-2L)},{(-2L),0xFDB9L,7L,5L,(-1L)},{0xB925L,9L,9L,0xB925L,0xFDB9L},{(-1L),9L,(-1L),1L,0xB925L},{5L,0xFDB9L,(-1L),0x01F1L,0x7A98L},{(-1L),(-1L),(-2L),(-1L),(-1L)}},{{(-1L),0xB925L,(-1L),0xFDB9L,0xE604L},{(-1L),0xC2B0L,(-2L),0xB925L,1L},{0x01F1L,(-2L),6L,0x7A98L,9L},{0xB925L,(-1L),(-2L),1L,(-2L)},{7L,7L,(-1L),0xC2B0L,(-2L)},{0xFDB9L,0xE604L,(-2L),3L,9L},{5L,3L,7L,0x65BDL,1L},{0x65BDL,0xE604L,0x01F1L,0x01F1L,0xE604L}}};
    int l_678 = 0xD0260EBBL;
    short l_822 = (-1L);
    char l_823 = 0xC5L;
    char l_824 = (-6L);
    unsigned short l_840[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_840[i] = 0x58B0L;
    l_585 = p_32;
    p_33 = (safe_rshift_func_int16_t_s_s((((0x57D89F79L | l_585) >= (~((-1L) || (safe_sub_func_int8_t_s_s(3L, 1UL))))) | (g_267 & (safe_mul_func_int8_t_s_s(0L, (l_585 ^ (g_518 < l_585)))))), l_585));
    p_33 = (safe_mul_func_uint8_t_u_u(g_267, (safe_sub_func_int16_t_s_s(func_52(p_32, l_585, g_82), g_331))));
    for (p_32 = 3; (p_32 >= 0); p_32 -= 1)
    {
        unsigned char l_597 = 0x50L;
        int l_599 = 8L;
        int l_641[9] = {0x12C1C057L,(-1L),0x12C1C057L,0x12C1C057L,(-1L),0x12C1C057L,0x12C1C057L,(-1L),0x12C1C057L};
        unsigned char l_688 = 247UL;
        int l_719 = 0x94A2F449L;
        int l_787 = (-7L);
        unsigned l_835 = 0x9D3DC060L;
        char l_841 = 1L;
        int i;
        l_599 = (0x292BCEAAL != func_35((safe_unary_minus_func_int8_t_s(((func_35(p_33, l_585, l_597, g_80) ^ 0UL) & g_267))), l_585, g_331, g_598));
        if (p_32)
            continue;
        p_33 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((func_35(g_34[1][5], g_99, p_32, (((safe_lshift_func_uint8_t_u_s(l_585, (((((safe_rshift_func_int16_t_s_u(((0x9F92L && (((p_32 ^ (safe_lshift_func_uint16_t_u_s(((p_32 ^ l_585) || 0x5037E9DCL), g_331))) <= l_597) < g_61)) ^ 250UL), g_80)) | (-1L)) != 0x23204FE7L) | 255UL) && p_33))) || g_331) || p_32)) ^ g_34[0][4]), 12)), 14)) != 0xA20F8656L);
        for (l_585 = 0; (l_585 <= 3); l_585 += 1)
        {
            int i, j;
            p_33 = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_34[l_585][(p_32 + 3)], (safe_add_func_int16_t_s_s((l_585 >= (safe_lshift_func_uint16_t_u_u(p_32, l_585))), func_35((6UL <= (g_34[l_585][(p_32 + 3)] == l_585)), (g_183 <= (safe_add_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((g_80 & l_599), l_585)) || (-1L)), 1)) == g_61) || 1L) >= 65535UL), 0x4913L))), l_597, g_81))))), (-1L))) ^ 0x0DD9L);
            for (l_597 = 0; (l_597 <= 3); l_597 += 1)
            {
                unsigned short l_626[9][4][3] = {{{1UL,0UL,65535UL},{1UL,0xDE0AL,0x311EL},{1UL,0xC4E6L,1UL},{1UL,0UL,65535UL}},{{1UL,0xDE0AL,0x311EL},{1UL,0xC4E6L,1UL},{1UL,0UL,65535UL},{1UL,0xDE0AL,0x311EL}},{{1UL,0xC4E6L,1UL},{1UL,0UL,65535UL},{1UL,0xDE0AL,0x311EL},{1UL,0xC4E6L,1UL}},{{1UL,0UL,65535UL},{1UL,0xDE0AL,0x311EL},{1UL,0UL,0x311EL},{0x311EL,0xDE0AL,1UL}},{{0x311EL,0xC4E6L,65535UL},{0x311EL,0UL,0x311EL},{0x311EL,0xDE0AL,1UL},{0x311EL,0xC4E6L,65535UL}},{{0x311EL,0UL,0x311EL},{0x311EL,0xDE0AL,1UL},{0x311EL,0xC4E6L,65535UL},{0x311EL,0UL,0x311EL}},{{0x311EL,0xDE0AL,1UL},{0x311EL,0xC4E6L,65535UL},{0x311EL,0UL,0x311EL},{0x311EL,0xDE0AL,1UL}},{{0x311EL,0xC4E6L,65535UL},{0x311EL,0UL,0x311EL},{0x311EL,0xDE0AL,1UL},{0x311EL,0xC4E6L,65535UL}},{{0x311EL,0UL,0x311EL},{0x311EL,0xDE0AL,1UL},{0x311EL,0xC4E6L,65535UL},{0x311EL,0UL,0x311EL}}};
                int i, j, k;
                g_61 = ((g_183 == (g_34[1][5] >= 9UL)) != l_626[1][0][2]);
            }
            p_33 = (p_33 | func_52((p_33 ^ (func_62(g_61, g_183, p_32, p_32) || g_183)), (safe_unary_minus_func_int16_t_s((p_32 == l_585))), p_32));
            p_33 = (safe_add_func_uint8_t_u_u((l_585 >= g_518), g_267));
        }
        for (l_599 = 0; (l_599 <= 3); l_599 += 1)
        {
            int l_681 = (-1L);
            int l_763 = 2L;
            int i, j;
            if (g_34[p_32][(p_32 + 3)])
            {
                short l_640 = 0x4384L;
                if (((l_599 > l_585) == (func_62(((safe_sub_func_uint16_t_u_u(1UL, (((g_99 >= (~(safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(g_267, 6)), (p_32 || l_640))), (((p_33 != g_83) | 1L) == p_32))), g_83)))) < 0xA242E48BL) & l_641[0]))) > 1UL), g_61, g_183, p_32) != g_34[3][8])))
                {
                    return l_640;
                }
                else
                {
                    if ((l_585 ^ p_33))
                    {
                        unsigned short l_644 = 0x5E67L;
                        unsigned l_655 = 1UL;
                        if (g_518)
                            break;
                        p_33 = (safe_sub_func_int8_t_s_s((-8L), p_32));
                        p_33 = (func_62(l_644, p_33, g_61, func_62((l_585 & p_32), g_183, (3UL | ((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_641[3] == ((safe_sub_func_int8_t_s_s(l_655, l_585)) >= 0x9FB5B13FL)) & g_34[p_32][(p_32 + 3)]), 0x51L)), 65530UL)) && p_32), p_32)), p_32)) < 0xC8L)), g_81)) > 255UL);
                        g_99 = g_82;
                    }
                    else
                    {
                        if (p_32)
                            break;
                        g_99 = (safe_rshift_func_int16_t_s_s(l_640, 0));
                    }
                    p_33 = func_42((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_61, l_585)), (p_33 > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((g_99 <= (safe_mul_func_uint16_t_u_u(l_640, (l_585 >= (safe_mod_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(0x5BL, 2)) >= (0x4324L > (safe_sub_func_uint8_t_u_u((l_676[0][4][0] <= 0x34L), l_676[0][4][0])))) >= 0x7CL), p_33)))))) == g_34[1][5]), 255UL)) ^ g_34[3][7]), 1)), g_82))))), p_33, p_33);
                    if (l_640)
                        continue;
                }
            }
            else
            {
                short l_677 = 0x7A22L;
                l_681 = func_35(l_677, g_518, p_33, (l_678 | (safe_mul_func_int8_t_s_s(g_83, (g_331 || (g_81 || l_676[0][4][0]))))));
            }
            g_99 = (((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((-1L) || (safe_mod_func_int8_t_s_s((p_33 < ((0UL ^ l_688) >= g_34[1][5])), p_33))), p_33)) <= l_681), 11)) > (safe_unary_minus_func_uint32_t_u(0x92D6F1E8L))) != p_32);
            if (l_585)
            {
                int l_715 = 0xBD8BC8ADL;
                unsigned l_753 = 4294967295UL;
                unsigned l_762 = 4UL;
                if ((safe_mul_func_int16_t_s_s(g_83, (safe_mod_func_int8_t_s_s(p_33, g_99)))))
                {
                    unsigned l_716 = 1UL;
                    if ((safe_rshift_func_int16_t_s_s(p_33, g_518)))
                    {
                        unsigned l_704[5] = {0xB2B6160EL,0xB2B6160EL,0xB2B6160EL,0xB2B6160EL,0xB2B6160EL};
                        int i;
                        l_681 = ((((g_598 | (((((+(safe_mul_func_int8_t_s_s((~(safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s(l_704[1], (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_33, p_32)), p_32)))) < (safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((((safe_add_func_int32_t_s_s(p_33, ((l_715 != (g_34[1][5] || p_33)) & l_716))) != g_80) ^ g_598), p_32)) ^ l_715), p_33))) > l_716), 6)), l_716))), 0xC0L))) != p_32) && (-4L)) <= 0L) ^ p_33)) > 0x415FL) ^ 8UL) & g_34[1][5]);
                    }
                    else
                    {
                        int l_732 = (-1L);
                        l_719 = (0x4FA3L <= (safe_mul_func_int8_t_s_s(p_33, ((1L > func_52(((l_641[8] ^ (+p_33)) | p_33), g_80, l_716)) > g_598))));
                        g_83 = (((((safe_mul_func_uint16_t_u_u(l_715, p_33)) >= g_83) == l_641[0]) ^ g_99) > 0L);
                        l_732 = (g_331 && (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_676[2][5][1] < (p_32 ^ (((p_33 || func_42(g_82, (safe_lshift_func_uint8_t_u_s((((p_32 && l_676[0][4][0]) | p_33) || ((g_99 && g_34[1][5]) == p_33)), l_716)), l_716)) < l_715) | g_331))), l_641[0])), l_715)) != l_716), 0x12L)), g_598)));
                    }
                }
                else
                {
                    p_33 = ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_99, 9)), (~1UL))) != (((safe_sub_func_uint32_t_u_u(((g_61 == (+p_33)) != ((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_585 & p_33), 2)), ((g_34[1][5] < (-1L)) <= (safe_rshift_func_int8_t_s_u(0L, 6))))) | 0L)), 4294967287UL)) && l_599) | g_34[p_32][(p_32 + 3)]));
                    if (g_34[p_32][(p_32 + 3)])
                        continue;
                }
                l_715 = (safe_mul_func_int16_t_s_s(g_82, ((((((g_99 && g_34[1][7]) > (g_61 < (((safe_lshift_func_int16_t_s_s(p_33, 0)) | g_331) != l_678))) | (g_81 > (safe_sub_func_int32_t_s_s(((g_34[1][5] && 1UL) >= (-1L)), l_676[0][5][1])))) == 0x8BL) && 0x71CA20C2L) >= 65531UL)));
                l_753 = l_715;
                if ((((((safe_add_func_uint32_t_u_u(g_82, (safe_sub_func_uint32_t_u_u(l_585, ((0x61159581L == ((g_99 ^ (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s((65534UL < (0x49L & ((g_331 && (g_81 ^ (l_762 || p_33))) <= p_33))), p_32)) <= l_688), 5))) <= p_32)) & g_34[1][5]))))) != p_32) <= g_267) > l_763) | g_34[1][5]))
                {
                    if (l_763)
                        break;
                }
                else
                {
                    unsigned char l_785[7] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL};
                    unsigned short l_786[3][3][6] = {{{0x3EB1L,0xF5B9L,65527UL,65527UL,0xF5B9L,0x3EB1L},{65530UL,0x3EB1L,0x2915L,0xF5B9L,0x2915L,0x3EB1L},{0x2915L,65530UL,65527UL,0x36FFL,0x36FFL,65527UL}},{{0x3EB1L,0x3EB1L,0xBF45L,0x36FFL,65530UL,0x36FFL},{65527UL,0x3EB1L,65527UL,0x2915L,0xBF45L,0xBF45L},{0xF5B9L,65527UL,65527UL,0xF5B9L,0x3EB1L,0x36FFL}},{{0x36FFL,0xF5B9L,0xBF45L,0xF5B9L,0x36FFL,0x2915L},{0xF5B9L,0x36FFL,0x2915L,0x2915L,0x36FFL,0xF5B9L},{65527UL,0xF5B9L,0x3EB1L,0x36FFL,0x3EB1L,0xF5B9L}}};
                    int l_825 = 0xC75175A2L;
                    int i, j, k;
                    for (l_688 = 0; (l_688 <= 8); l_688 += 1)
                    {
                        int l_784 = 0x5F6D063EL;
                        int i;
                        p_33 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(l_641[(p_32 + 1)], ((safe_mul_func_uint16_t_u_u((((l_681 != ((safe_lshift_func_int8_t_s_s((0x1FL | (p_32 ^ (func_52((safe_rshift_func_uint16_t_u_s(func_52((func_62(((safe_lshift_func_uint8_t_u_s(0xA0L, p_32)) && ((g_34[3][1] > (safe_lshift_func_int8_t_s_u(func_62((safe_mod_func_uint16_t_u_u(func_42(g_80, (safe_add_func_uint32_t_u_u(l_719, 0x65843A4FL)), g_82), g_34[1][5])), l_784, l_688, l_715), p_32))) == 0xEFL)), g_34[3][8], p_32, g_267) ^ 0x57AB740EL), l_785[6], p_33), p_33)), p_33, g_331) <= 0x2DEBL))), 0)) & l_784)) | 0xF81AL) & l_641[0]), 0x2A24L)) >= g_34[1][5]))), 4)), 8));
                    }
                    l_678 = ((l_786[1][2][3] | 1UL) ^ func_52(g_267, l_787, (((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_s(l_597, ((g_81 && ((l_785[0] != (-1L)) != 0x54L)) || g_61))) == 0x02L) | g_80), 6)) || g_83) || p_33)));
                    l_825 = ((+func_42((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u((+((safe_lshift_func_int16_t_s_u(g_598, (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(func_42((((safe_rshift_func_int8_t_s_s(g_598, ((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_62(g_34[1][5], l_676[0][4][0], l_676[0][4][0], ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(func_62(g_83, p_33, (0xD4L >= ((!g_331) || (-1L))), l_785[1]), g_598)), 0)), p_33)) || 1L)), g_598)), 0xF7L)) && l_753) ^ 0xCD4E6855L) < 0xA4L))) >= g_598) & 1UL), g_331, p_33), 5UL)), g_34[0][0])) || p_32), l_822)), 247UL)))) & l_822)), g_331)) & p_33) && g_82), 5)) < l_676[0][4][0]) > 6UL), p_33)) ^ l_823) | l_785[6]), l_824, p_33)) == p_33);
                }
            }
            else
            {
                int l_832 = 0L;
                short l_906 = 0x3613L;
                l_719 = ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(func_52(l_676[0][4][0], ((safe_mod_func_int8_t_s_s(g_34[1][6], 251UL)) < l_832), l_832), (g_34[1][5] > (!(safe_rshift_func_uint16_t_u_u(g_598, p_33)))))), 10)) <= l_681);
                if (l_641[5])
                    continue;
                if ((l_835 ^ (g_81 || ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0xCBCAL, (p_32 <= g_99))) || (((0x5496D31BL < l_840[0]) < p_33) > l_824)), l_719)) || (-2L)))))
                {
                    int l_849[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_849[i] = 0L;
                    for (l_719 = 3; (l_719 >= 0); l_719 -= 1)
                    {
                        l_841 = (0x813E0CE4L && l_824);
                    }
                    for (g_80 = 0; (g_80 <= 3); g_80 += 1)
                    {
                        short l_848 = 0x8592L;
                        p_33 = g_518;
                        l_678 = func_35(p_33, (+func_35(l_688, g_34[2][1], g_598, ((g_598 || l_832) >= ((safe_lshift_func_int16_t_s_s(((1L || (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_848, 2)), l_848))) || l_848), 14)) & p_33)))), l_849[1], l_787);
                        g_82 = ((l_832 < (safe_sub_func_uint8_t_u_u(0UL, (((func_35((safe_lshift_func_int16_t_s_s(((p_33 ^ 0x893FL) > 0x0942B59DL), 0)), g_598, func_35((l_849[1] && func_35((((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u(p_33, p_33)) == 0xF3L), l_681)) | l_822) | p_32), g_331, g_34[2][1], p_32)), p_32, g_80, l_822), p_32) >= p_32) ^ g_34[1][5]) < g_80)))) && g_34[1][5]);
                        l_678 = ((safe_lshift_func_uint16_t_u_u(g_518, g_598)) || func_35((safe_add_func_uint16_t_u_u(65535UL, 5UL)), g_82, g_331, p_33));
                    }
                }
                else
                {
                    if (l_824)
                        break;
                    if (g_267)
                        continue;
                    p_33 = (l_676[0][4][0] != (0xEAL && ((((0xF63EL == func_69(p_32)) <= g_34[1][3]) && g_61) >= (0x62C2L & 0x1C74L))));
                }
                for (l_832 = 0; (l_832 <= 3); l_832 += 1)
                {
                    int l_909 = (-6L);
                    for (l_824 = 0; (l_824 <= 3); l_824 += 1)
                    {
                        return p_32;
                    }
                    if (p_32)
                    {
                        unsigned char l_890 = 0x3FL;
                        l_678 = ((((((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0L, g_61)), p_33)), (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((g_99 <= (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(1L, 4)), (g_183 > (((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((l_763 ^ 0L) != (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((+((l_597 <= g_99) ^ l_832)), g_331)) | p_33), l_676[0][6][4]))), (-6L))), 0xD0E2BF87L)) == 0xB152L) & 0UL))))), g_267)), g_99)), l_824)))), l_763)) | p_32) & l_890) & (-1L)) <= g_267) != p_32);
                    }
                    else
                    {
                        int l_893 = 0x8FB2D226L;
                        p_33 = (p_32 != (safe_lshift_func_uint8_t_u_s((0xA050L || (g_183 <= (l_893 & 0x956A99F2L))), 2)));
                        p_33 = (func_52(g_267, g_99, (!(safe_mod_func_uint8_t_u_u(250UL, ((0xDB172D50L || p_33) & ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_82, ((safe_add_func_uint32_t_u_u(g_598, (safe_sub_func_int8_t_s_s(l_840[0], p_33)))) ^ p_33))), l_824)), l_906)) | 1L)))))) && (-10L));
                        g_61 = ((safe_add_func_uint16_t_u_u(1UL, 0xFD7BL)) != func_69(p_33));
                    }
                    g_82 = l_909;
                }
            }
            l_681 = (safe_unary_minus_func_int8_t_s((safe_mul_func_uint8_t_u_u(func_35(p_32, g_518, ((safe_sub_func_uint16_t_u_u(((((g_99 & ((((l_678 <= g_99) > l_678) >= l_822) != g_34[p_32][(p_32 + 3)])) ^ (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((g_598 <= 0x2E46449CL), g_83)), 1UL)) ^ p_33) <= 0L), p_33))))) || 1L) & g_34[1][5]), l_840[0])) > p_32), p_33), g_598))));
        }
    }
    return g_81;
}







static int func_35(unsigned short p_36, unsigned char p_37, int p_38, int p_39)
{
    int l_540[1];
    int l_553 = 0x83480101L;
    int i;
    for (i = 0; i < 1; i++)
        l_540[i] = 1L;
    for (p_38 = 0; (p_38 <= 0); p_38 += 1)
    {
        int i;
        if (l_540[p_38])
            break;
        p_39 = (safe_lshift_func_int8_t_s_u((l_540[0] > ((l_540[p_38] >= (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_540[0], p_37)), (safe_add_func_uint16_t_u_u((p_39 || l_540[0]), (((safe_add_func_int8_t_s_s(((g_82 ^ (safe_rshift_func_int8_t_s_u(l_540[p_38], 3))) != g_81), l_540[0])) <= 8L) ^ l_540[0])))))) & l_540[0])), 5));
        l_553 = l_540[0];
    }
    for (g_83 = 0; (g_83 >= 0); g_83 -= 1)
    {
        int l_564 = (-2L);
        int i;
        p_38 = ((l_540[g_83] <= 0xC536L) && ((g_99 || (((safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(p_39, (g_81 >= ((safe_rshift_func_uint8_t_u_s(((l_540[g_83] || (+(safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_82, ((-1L) == 0x01L))), 0x7931L)))) != g_80), l_553)) > 0UL)))) > p_36), (-1L))) || 65535UL) != 0x56D7L)) & 9UL));
        for (g_81 = 0; (g_81 >= 0); g_81 -= 1)
        {
            l_564 = p_37;
            l_553 = 0xF45517E1L;
        }
        l_553 = (p_38 <= l_540[0]);
        if (g_331)
        {
            int l_576 = 0x34669E69L;
            if (l_540[0])
            {
                unsigned l_565 = 0x65BAEC7EL;
                return l_565;
            }
            else
            {
                p_38 = p_39;
                g_99 = (g_99 || (safe_lshift_func_uint8_t_u_u((p_39 & ((safe_sub_func_int16_t_s_s(p_38, ((g_34[1][5] ^ (safe_rshift_func_int8_t_s_u(p_36, (safe_mul_func_uint8_t_u_u(251UL, (g_99 > g_34[1][4])))))) & (g_34[2][7] != 0x25L)))) > g_34[0][9])), 6)));
            }
            g_61 = (p_36 < (safe_sub_func_uint16_t_u_u(l_576, 1L)));
            p_39 = (((g_83 <= g_80) || (g_81 == (((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_540[g_83], 7)), p_38)) || (safe_mul_func_int16_t_s_s((-10L), (g_82 > (safe_rshift_func_uint16_t_u_s((l_540[g_83] & (l_540[0] <= g_83)), 0)))))) ^ l_576))) == g_61);
            p_39 = g_331;
        }
        else
        {
            l_564 = l_553;
            p_38 = g_61;
        }
    }
    return g_34[0][9];
}







static unsigned short func_42(unsigned short p_43, unsigned p_44, unsigned p_45)
{
    int l_538 = 0x762A9A81L;
    int l_539 = 0x2C7058CFL;
    l_538 = p_44;
    l_539 = (func_52(l_538, l_538, g_99) >= g_34[1][5]);
    return p_43;
}







static unsigned func_52(short p_53, short p_54, unsigned char p_55)
{
    int l_58[3][9] = {{0x058A13C4L,0x058A13C4L,0xE74BB9CEL,0xE74BB9CEL,0x058A13C4L,0x058A13C4L,0xE74BB9CEL,0xE74BB9CEL,0x058A13C4L},{0x9BB643C8L,0L,0x9BB643C8L,0L,0x9BB643C8L,0L,0x9BB643C8L,0L,0x9BB643C8L},{0x058A13C4L,0xE74BB9CEL,0xE74BB9CEL,0x058A13C4L,0x058A13C4L,0xE74BB9CEL,0xE74BB9CEL,0x058A13C4L,0x058A13C4L}};
    unsigned l_269 = 4294967295UL;
    int l_317[9][4] = {{(-5L),0x8ACB36B8L,(-5L),0x1F28B5C5L},{(-5L),0x1F28B5C5L,(-5L),0x8ACB36B8L},{(-5L),0x8ACB36B8L,(-5L),0x1F28B5C5L},{(-5L),0x1F28B5C5L,(-5L),0x8ACB36B8L},{(-5L),0x8ACB36B8L,(-5L),0x1F28B5C5L},{(-5L),0x1F28B5C5L,(-5L),0x8ACB36B8L},{(-5L),0x8ACB36B8L,(-5L),0x1F28B5C5L},{(-5L),0x1F28B5C5L,(-5L),0x8ACB36B8L},{(-5L),0x8ACB36B8L,(-5L),0x1F28B5C5L}};
    unsigned char l_459[9];
    unsigned short l_491 = 65534UL;
    int l_499 = 3L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_459[i] = 0xAAL;
    for (p_53 = 2; (p_53 >= 0); p_53 -= 1)
    {
        unsigned l_71 = 0x3830386BL;
        unsigned l_223[10][3];
        char l_260 = 0x51L;
        unsigned l_268 = 0xC2B5224EL;
        int l_281 = 0x058346CAL;
        int l_296[2][6][3] = {{{0xC0C74532L,(-1L),(-1L)},{(-1L),0x5F6503A9L,0xB0D4AEB9L},{0xC0C74532L,0x5F6503A9L,0xC0C74532L},{0xEDBF72F5L,(-1L),0xB0D4AEB9L},{0xEDBF72F5L,0xEDBF72F5L,(-1L)},{0xC0C74532L,(-1L),(-1L)}},{{(-1L),0x5F6503A9L,0xB0D4AEB9L},{0xC0C74532L,0x5F6503A9L,0xC0C74532L},{0xEDBF72F5L,(-1L),0xB0D4AEB9L},{0xEDBF72F5L,0xEDBF72F5L,(-1L)},{0xC0C74532L,(-1L),(-1L)},{(-1L),0x5F6503A9L,0xB0D4AEB9L}}};
        unsigned char l_399[4];
        unsigned l_486 = 0xAC9F7779L;
        unsigned short l_494[1];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 3; j++)
                l_223[i][j] = 6UL;
        }
        for (i = 0; i < 4; i++)
            l_399[i] = 0x43L;
        for (i = 0; i < 1; i++)
            l_494[i] = 65526UL;
        if ((safe_mul_func_int8_t_s_s(0x93L, p_53)))
        {
            unsigned short l_222 = 0x2EDFL;
            g_61 = g_34[2][0];
            for (p_55 = 0; (p_55 <= 2); p_55 += 1)
            {
                char l_215[5][8][6] = {{{0xA8L,(-10L),1L,5L,1L,(-10L)},{1L,0xA8L,(-1L),0x0DL,0x0DL,(-1L)},{1L,1L,0x0DL,5L,0x95L,5L},{0xA8L,1L,0xA8L,(-1L),0x0DL,0x0DL},{(-10L),0xA8L,0xA8L,(-10L),1L,5L},{5L,(-10L),0x0DL,(-10L),5L,(-1L)},{(-10L),5L,(-1L),(-1L),5L,(-10L)},{0xA8L,(-10L),1L,5L,1L,(-10L)}},{{1L,0xA8L,(-1L),0x0DL,0x0DL,(-1L)},{1L,1L,0x95L,0x0DL,0xA8L,0x0DL},{(-1L),(-10L),(-1L),1L,0x95L,0x95L},{5L,(-1L),(-1L),5L,(-10L),0x0DL},{0x0DL,5L,0x95L,5L,0x0DL,1L},{5L,0x0DL,1L,1L,0x0DL,5L},{(-1L),5L,(-10L),0x0DL,(-10L),5L},{(-10L),(-1L),1L,0x95L,0x95L,1L}},{{(-10L),(-10L),0x95L,0x0DL,0xA8L,0x0DL},{(-1L),(-10L),(-1L),1L,0x95L,0x95L},{5L,(-1L),(-1L),5L,(-10L),0x0DL},{0x0DL,5L,0x95L,5L,0x0DL,1L},{5L,0x0DL,1L,1L,0x0DL,5L},{(-1L),5L,(-10L),0x0DL,(-10L),5L},{(-10L),(-1L),1L,0x95L,0x95L,1L},{(-10L),(-10L),0x95L,0x0DL,0xA8L,0x0DL}},{{(-1L),(-10L),(-1L),1L,0x95L,0x95L},{5L,5L,5L,0xA8L,0x95L,(-1L)},{(-1L),0xA8L,1L,0xA8L,(-1L),0x0DL},{0xA8L,(-1L),0x0DL,0x0DL,(-1L),0xA8L},{5L,0xA8L,0x95L,(-1L),0x95L,0xA8L},{0x95L,5L,0x0DL,1L,1L,0x0DL},{0x95L,0x95L,1L,(-1L),(-10L),(-1L)},{5L,0x95L,5L,0x0DL,1L,1L}},{{0xA8L,5L,5L,0xA8L,0x95L,(-1L)},{(-1L),0xA8L,1L,0xA8L,(-1L),0x0DL},{0xA8L,(-1L),0x0DL,0x0DL,(-1L),0xA8L},{5L,0xA8L,0x95L,(-1L),0x95L,0xA8L},{0x95L,5L,0x0DL,1L,1L,0x0DL},{0x95L,0x95L,1L,(-1L),(-10L),(-1L)},{5L,0x95L,5L,0x0DL,1L,1L},{0xA8L,5L,5L,0xA8L,0x95L,(-1L)}}};
                int l_280 = 0xE14288EAL;
                int i, j, k;
                for (g_61 = 2; (g_61 >= 0); g_61 -= 1)
                {
                    int l_251 = (-9L);
                    int i, j;
                    l_251 = func_62(((+((~((safe_add_func_uint16_t_u_u(l_58[p_53][(g_61 + 6)], func_69(l_71))) & (safe_mod_func_int32_t_s_s(0L, (safe_add_func_int32_t_s_s(((l_215[0][1][4] & ((safe_mul_func_int16_t_s_s(l_71, ((l_58[2][3] && ((safe_mod_func_int32_t_s_s(p_53, (safe_sub_func_uint32_t_u_u(g_61, g_34[3][8])))) & p_53)) && l_58[0][6]))) & 0x34L)) > l_58[1][5]), p_55)))))) <= g_34[1][5])) ^ l_222), g_34[1][5], g_34[1][5], l_223[8][0]);
                    l_251 = p_55;
                    l_269 = ((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(((((g_34[1][5] != l_222) || (+((safe_mul_func_uint8_t_u_u(1UL, 0x05L)) != (l_260 > p_55)))) >= l_223[5][2]) < (~(safe_sub_func_uint16_t_u_u(p_54, (safe_rshift_func_uint8_t_u_u(func_62((safe_add_func_int16_t_s_s(0x1D68L, l_222)), g_267, l_58[2][8], l_268), 2)))))), g_34[0][8])), 1UL)), g_34[1][5])) != 0x8410L);
                    l_281 = (p_53 < (safe_rshift_func_int16_t_s_u(func_69(((((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(g_267, (safe_mul_func_uint8_t_u_u((0xBC463755L != g_34[1][5]), (1L > 0L))))) & (safe_sub_func_uint8_t_u_u(((g_99 >= (0x8EL < l_280)) && 0xB859E398L), 255UL))), 0x5D546B9CL)) >= 1UL) ^ 9UL) && 1UL)), g_34[1][5])));
                }
            }
            l_281 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((1L | g_61), ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_61, (safe_rshift_func_int8_t_s_s(((+l_269) && (0xA39CL != 65533UL)), 4)))), g_83)) && 6L))), (p_54 == g_183)));
            for (l_281 = 0; (l_281 <= 2); l_281 += 1)
            {
                int l_297 = 0x41CAF956L;
                int i, j;
                for (l_269 = 0; (l_269 <= 2); l_269 += 1)
                {
                    int i, j;
                    g_99 = (l_58[p_53][(p_53 + 4)] | (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_58[l_281][p_53] || (-4L)), l_223[(l_269 + 4)][p_53])), (!p_54))));
                }
                l_296[1][2][2] = l_58[l_281][(p_53 + 4)];
                l_297 = l_58[l_281][(l_281 + 3)];
                if (((!1L) | 65532UL))
                {
                    int l_302 = 0x4E6314A1L;
                    int i, j;
                    l_297 = func_69(l_58[p_53][(p_53 + 5)]);
                    l_302 = (l_58[l_281][(l_281 + 3)] >= (safe_mod_func_int32_t_s_s(0x55FF8D06L, (func_62(func_62(l_58[l_281][(l_281 + 4)], func_62(p_55, l_58[l_281][(l_281 + 4)], g_61, p_54), (safe_add_func_uint16_t_u_u((g_34[2][1] == l_58[l_281][(l_281 + 3)]), g_34[1][5])), p_54), p_53, g_34[1][5], l_223[8][0]) & l_58[l_281][(p_53 + 4)]))));
                    g_82 = (((g_99 | (safe_rshift_func_int8_t_s_u((0x1FFEL && (((0x16L & (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_61, (safe_rshift_func_uint8_t_u_s(p_54, 0)))), (safe_add_func_int8_t_s_s((65528UL != l_297), (((-1L) != ((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(l_281, 0xC3256DE8L)) <= g_34[1][5]), 65535UL)) & g_82)) <= g_34[2][5])))))) ^ 0x82DE7F64L) != g_61)), l_269))) ^ l_269) < 0L);
                    for (g_99 = 2; (g_99 >= 0); g_99 -= 1)
                    {
                        int i, j;
                        l_317[7][0] = l_58[l_281][(g_99 + 5)];
                    }
                }
                else
                {
                    if (l_222)
                        break;
                }
            }
        }
        else
        {
            unsigned l_328 = 0x664D8659L;
            int l_359 = 0L;
            g_82 = (safe_lshift_func_uint8_t_u_u(0UL, 0));
            if (l_223[7][0])
                break;
            if ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(g_267, ((safe_mod_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(p_55, (g_34[1][5] <= l_328))) | (l_317[5][0] <= (((((safe_add_func_int16_t_s_s(func_69(func_69(l_223[8][0])), 0xA6DBL)) == 4294967292UL) != 0xCDE4736BL) && l_317[3][2]) >= l_269))) <= g_61), g_331)) < l_269))) > 0x25D3L), p_55)))
            {
                int l_354[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_354[i] = 0x0D6DFFD7L;
                for (g_61 = 0; (g_61 <= 2); g_61 += 1)
                {
                    unsigned short l_340 = 0x11BFL;
                    int l_345[5];
                    unsigned short l_362 = 65530UL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_345[i] = 0xBF712A38L;
                    l_345[1] = (safe_mul_func_int16_t_s_s(func_62((((0xF306726CL >= p_53) == (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(g_34[1][5], 5)), 2))) > (+0UL)), (safe_mul_func_uint8_t_u_u(g_99, (l_340 <= (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_340, g_61)), l_260))))), p_53, g_80), l_268));
                    for (g_81 = 0; (g_81 <= 2); g_81 += 1)
                    {
                        l_359 = ((safe_rshift_func_int16_t_s_u(g_61, 4)) > (safe_rshift_func_uint8_t_u_u((((0xACL >= p_53) < 0L) && (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_83, l_354[2])), p_53))), ((safe_mod_func_uint16_t_u_u(l_328, (safe_mod_func_uint32_t_u_u(p_54, l_328)))) || p_53))));
                    }
                    for (l_71 = 0; (l_71 <= 2); l_71 += 1)
                    {
                        unsigned char l_363 = 0x54L;
                        l_345[2] = func_62((safe_mul_func_uint8_t_u_u(p_54, func_69(p_53))), l_345[4], (l_362 > (g_61 != (((l_345[2] < l_354[0]) | p_55) > p_55))), l_363);
                        if (l_354[0])
                            break;
                        l_281 = g_267;
                    }
                }
                if (g_34[1][1])
                {
                    char l_370 = 0L;
                    g_61 = ((((safe_lshift_func_int16_t_s_u(g_80, (((((safe_add_func_uint16_t_u_u(g_80, g_183)) && (safe_mul_func_uint16_t_u_u(l_370, (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(0xFF73L, (~(safe_lshift_func_uint16_t_u_u(g_61, g_331))))), 0x3E1314E4L)), ((0x74L && l_370) < p_54)))))) >= 0x752946B7L) && 0x9CL) | 9L))) > p_55) ^ 65535UL) <= 0xA8L);
                    for (l_260 = 0; (l_260 <= 2); l_260 += 1)
                    {
                        int l_391 = (-9L);
                        int i, j;
                        l_391 = (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_223[(l_260 + 1)][l_260] && 0x87585253L), (safe_lshift_func_uint8_t_u_s((0x4D6C30F5L > p_55), 0)))), (((!l_328) & 0x9F242279L) >= ((safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s(g_83, g_81)) > (0x142CL > p_53)), 249UL)) < g_61), 0xDCD9L)) || l_328))));
                        return g_331;
                    }
                    l_281 = (0xD469L > (-1L));
                }
                else
                {
                    unsigned char l_398 = 0x66L;
                    int l_408[2][9][10] = {{{7L,0x5C9BD583L,0x5C9BD583L,7L,1L,0x869F11C1L,0xFC98CE2EL,0x869F11C1L,7L,0x45F9A831L},{(-1L),0x5C9BD583L,(-8L),0x5C9BD583L,(-1L),7L,(-1L),7L,7L,(-1L)},{0x869F11C1L,7L,1L,1L,7L,0x869F11C1L,0xB3B88D47L,(-1L),(-1L),(-1L)},{0x5C9BD583L,1L,(-1L),7L,(-1L),1L,0x5C9BD583L,0xB3B88D47L,0x45F9A831L,0x45F9A831L},{0x5C9BD583L,0x45F9A831L,0x869F11C1L,(-8L),(-8L),0x869F11C1L,0x45F9A831L,0x5C9BD583L,7L,0xB3B88D47L},{0x869F11C1L,0x45F9A831L,0x5C9BD583L,7L,0xB3B88D47L,7L,0x5C9BD583L,0x45F9A831L,0x869F11C1L,(-8L)},{(-1L),1L,0x5C9BD583L,0xB3B88D47L,0x45F9A831L,0x45F9A831L,0xB3B88D47L,0x5C9BD583L,1L,(-1L)},{1L,7L,0x869F11C1L,0xB3B88D47L,(-1L),(-1L),(-1L),0xB3B88D47L,0x869F11C1L,7L},{(-8L),0x5C9BD583L,(-1L),7L,(-1L),7L,7L,(-1L),7L,(-1L)}},{{(-1L),(-1L),1L,(-8L),0x45F9A831L,7L,0x869F11C1L,7L,0x45F9A831L,(-8L)},{(-8L),0xFC98CE2EL,(-1L),0xB3B88D47L,0x869F11C1L,7L,1L,1L,7L,0x869F11C1L},{0x5C9BD583L,0xFC98CE2EL,0xFC98CE2EL,0x5C9BD583L,(-1L),(-8L),0xB3B88D47L,1L,0xB3B88D47L,(-8L)},{7L,0x45F9A831L,(-1L),0x45F9A831L,7L,7L,0xFC98CE2EL,0xB3B88D47L,0xB3B88D47L,0xFC98CE2EL},{1L,7L,0x5C9BD583L,0x5C9BD583L,7L,1L,0x869F11C1L,0xFC98CE2EL,7L,0xFC98CE2EL},{0x45F9A831L,0x5C9BD583L,7L,0xB3B88D47L,7L,0x5C9BD583L,0x45F9A831L,0x869F11C1L,(-8L),(-8L)},{0x45F9A831L,(-8L),1L,(-1L),(-1L),1L,(-8L),0x45F9A831L,7L,0x869F11C1L},{1L,(-8L),0x45F9A831L,7L,0x869F11C1L,7L,0x45F9A831L,(-8L),1L,(-1L)},{7L,0x5C9BD583L,0x45F9A831L,0x869F11C1L,(-8L),(-8L),0x869F11C1L,0x45F9A831L,0x5C9BD583L,7L}}};
                    int i, j, k;
                    for (g_80 = 0; (g_80 <= 2); g_80 += 1)
                    {
                        l_359 = g_183;
                        return l_296[0][3][2];
                    }
                    if ((func_69(l_268) ^ (p_54 | (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((l_398 || 9L) > l_399[2]), ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(p_54, 8)), p_54)) != (safe_sub_func_int16_t_s_s(l_399[2], l_399[2]))))) < 255UL), l_260)), 0)))))
                    {
                        l_317[7][0] = func_69(g_183);
                    }
                    else
                    {
                        l_408[1][2][2] = (safe_lshift_func_uint16_t_u_u(0x1C0DL, 0));
                    }
                    g_82 = ((1L ^ (safe_rshift_func_uint16_t_u_s(l_317[7][0], ((((l_317[3][2] ^ p_55) != (safe_lshift_func_uint16_t_u_s(((65535UL != l_269) & g_80), l_399[2]))) < (l_408[0][2][4] && p_54)) == 0xAED8E474L)))) && g_99);
                    l_317[1][3] = (safe_lshift_func_uint8_t_u_s(l_354[4], l_71));
                }
                l_359 = ((func_69(((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(0UL, ((((0xEBL < ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s((0xABD8A15FL ^ p_54), 5)))) | func_69(l_354[2]))) != 0x55FFD032L) <= l_399[1]) || (safe_add_func_int8_t_s_s(l_354[2], p_55))))), g_34[0][3])), 255UL)), 65535UL)) != g_267) != p_54) >= 0x826CL)) && g_99) >= l_354[2]);
            }
            else
            {
                unsigned short l_440 = 0xEF52L;
                int l_446 = 0x55A24DFEL;
                unsigned short l_460 = 4UL;
                if (g_81)
                {
                    int l_445[6] = {0x4EFD52D6L,0x334F0293L,0x4EFD52D6L,0x4EFD52D6L,0x334F0293L,0x4EFD52D6L};
                    int i;
                    g_61 = ((func_69(p_53) ^ p_55) || func_69(((safe_mod_func_int32_t_s_s(g_83, p_53)) == ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_83, ((safe_add_func_int8_t_s_s(l_399[2], (g_61 != p_55))) != 0L))), 5)), 65534UL)) == g_331))));
                    for (l_268 = 0; (l_268 <= 2); l_268 += 1)
                    {
                        if (g_82)
                            break;
                    }
                    if (g_61)
                    {
                        l_440 = g_99;
                    }
                    else
                    {
                        l_446 = (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((l_445[4] >= 0UL) | p_55) ^ g_81), ((p_54 != ((l_359 ^ (p_53 | g_34[2][9])) <= (g_81 != 0x1DF06D25L))) == 1L))), 3));
                        g_82 = l_446;
                    }
                }
                else
                {
                    unsigned l_478 = 0xC1CC60DBL;
                    if ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((g_331 | (safe_sub_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((((g_61 || (~(g_267 > g_34[2][2]))) & g_267) ^ g_80) == ((((g_83 < g_34[1][5]) | (safe_sub_func_uint16_t_u_u((0x65366F19L & l_268), 0x1E48L))) <= g_34[1][5]) <= l_446)) <= p_54) && g_80), p_54)), p_53)) != g_34[2][5]) >= l_328) != 1L), 0x235E8A83L))) <= p_55), 0x44L)), l_459[4])))
                    {
                        int l_471 = 0x27801B87L;
                        l_460 = p_54;
                        g_83 = (safe_mul_func_uint16_t_u_u(g_80, (safe_rshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_331, 2)), 8)) < 0x58L) && ((((4294967295UL <= (l_471 & (safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(g_183, g_61)), 2)))) ^ g_34[1][5]) > ((safe_sub_func_int16_t_s_s(l_296[1][2][2], 0x8576L)) < 255UL)) & l_471)), g_81)) < p_55) != 0x5181L), p_54))));
                        g_61 = 0x7B26AE71L;
                        l_359 = g_83;
                    }
                    else
                    {
                        unsigned char l_479 = 250UL;
                        l_317[7][0] = g_267;
                        l_478 = 9L;
                        l_479 = ((-7L) != 0x90L);
                        l_491 = ((safe_sub_func_int8_t_s_s(func_62(l_479, (safe_mul_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(l_486, ((safe_add_func_uint32_t_u_u(p_55, (p_53 && l_479))) <= g_34[1][5]))) && (p_55 <= func_69(((safe_mul_func_int16_t_s_s(0x934FL, ((~g_82) | p_53))) && g_34[0][9])))) | g_61), 0L)), g_61, p_55), 4L)) && (-1L));
                    }
                }
            }
            if (func_69(l_486))
            {
                unsigned char l_498 = 0x76L;
                l_494[0] = (safe_sub_func_int8_t_s_s(p_55, 0x38L));
                for (p_54 = 2; (p_54 >= 0); p_54 -= 1)
                {
                    g_82 = 0x15AB4ACBL;
                    for (l_328 = 0; (l_328 <= 8); l_328 += 1)
                    {
                        unsigned char l_495 = 0xEDL;
                        int i;
                        l_495 = 0x74AFCB34L;
                        g_99 = l_459[(p_53 + 6)];
                        l_498 = (safe_mul_func_uint16_t_u_u(l_459[l_328], l_459[(p_53 + 6)]));
                    }
                    return p_53;
                }
                return g_34[1][5];
            }
            else
            {
                for (p_54 = 0; (p_54 <= 3); p_54 += 1)
                {
                    l_359 = p_53;
                }
            }
        }
        l_317[7][0] = (l_58[2][1] | ((l_499 | l_296[1][2][2]) ^ func_69(g_81)));
        for (g_99 = 0; (g_99 <= 2); g_99 += 1)
        {
            short l_509 = 0x7CFCL;
            int l_523 = 0x2F657058L;
            l_317[3][3] = 1L;
            for (l_499 = 2; (l_499 >= 0); l_499 -= 1)
            {
                char l_507 = 0xD8L;
                unsigned short l_512 = 0x7FF9L;
                for (l_491 = 0; (l_491 <= 2); l_491 += 1)
                {
                    if (((g_267 >= (((g_183 ^ p_55) != (safe_mul_func_uint8_t_u_u(((-1L) == 0L), (0x8D73E622L >= (((safe_rshift_func_int16_t_s_u(p_55, (p_53 & (+(safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(p_53)), 0xA2L)))))) && l_317[7][0]) | 65527UL))))) <= 0UL)) ^ l_507))
                    {
                        g_82 = ((safe_unary_minus_func_int16_t_s((p_55 == p_54))) | (l_507 || (-5L)));
                        if (l_509)
                            continue;
                        l_317[0][1] = (safe_mod_func_uint8_t_u_u(p_53, l_512));
                    }
                    else
                    {
                        int l_513 = 0x1574A506L;
                        l_317[3][3] = g_34[1][7];
                        l_296[0][4][0] = l_513;
                    }
                    g_61 = (p_53 | 0xCCFE02F5L);
                }
                if (l_223[8][0])
                    break;
                for (l_71 = 0; (l_71 <= 2); l_71 += 1)
                {
                    unsigned l_521 = 0UL;
                    int l_522 = (-3L);
                    l_522 = (safe_sub_func_int8_t_s_s(g_99, (((((-9L) > l_499) || (safe_lshift_func_int16_t_s_s((g_331 == g_518), 8))) != (safe_lshift_func_uint8_t_u_s(l_521, 3))) != p_54)));
                    for (g_81 = 0; (g_81 <= 2); g_81 += 1)
                    {
                        l_523 = p_55;
                        g_61 = (~(-4L));
                    }
                    if ((safe_lshift_func_uint16_t_u_s(p_54, g_61)))
                    {
                        if (g_34[1][5])
                            break;
                        l_523 = (g_80 || 0xBCCDL);
                        l_523 = ((((0x97D33F3FL >= (safe_rshift_func_int16_t_s_u((~(g_83 > 65535UL)), ((safe_sub_func_int16_t_s_s(g_183, 0xD03AL)) & (g_83 == 9L))))) < (safe_rshift_func_int16_t_s_s(g_34[1][4], 9))) >= 0xE4L) || g_61);
                    }
                    else
                    {
                        l_317[7][0] = (safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_80, (l_509 <= 0x70L))) | ((l_523 & (g_331 != (l_523 || 1UL))) && (safe_lshift_func_int8_t_s_u(p_54, l_507)))), 3));
                    }
                    l_523 = g_99;
                }
            }
        }
    }
    return p_54;
}







static int func_62(unsigned char p_63, unsigned p_64, unsigned p_65, unsigned char p_66)
{
    short l_242[8] = {0x7058L,(-6L),0x7058L,0x7058L,(-6L),0x7058L,0x7058L,(-6L)};
    int l_243 = 0L;
    unsigned char l_250 = 246UL;
    int i;
    l_243 = (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(((((((safe_lshift_func_int16_t_s_s((g_34[3][4] >= (safe_rshift_func_uint16_t_u_s((!(safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((((safe_mod_func_uint8_t_u_u(((g_81 >= (safe_lshift_func_uint8_t_u_u(1UL, 3))) && func_69(p_66)), (g_34[1][5] ^ (safe_lshift_func_int8_t_s_s(g_61, 6))))) > (((65535UL < l_242[0]) == p_66) && 0xBAL)) <= (-7L)) || 250UL) && g_81), g_61)) | 0x7D50DD5DL), 1))), g_61))), 2)) | p_64) > (-5L)) ^ 0xE175L) ^ 6L) < 0x3DL), g_34[1][4])) == 4294967286UL), p_63));
    l_243 = ((func_69((p_66 | ((((g_99 >= p_65) < (p_63 & g_81)) & (safe_sub_func_uint8_t_u_u(g_82, ((safe_mod_func_int32_t_s_s(p_63, (safe_mod_func_uint32_t_u_u((l_250 <= p_66), 0x515C62BBL)))) > 0x0BBDL)))) <= l_243))) & 0x9D55L) | g_34[1][5]);
    return p_65;
}







static unsigned short func_69(int p_70)
{
    unsigned char l_78[3][1][7] = {{{0x58L,0xEEL,0xEEL,0xEEL,1UL,1UL,0xEEL}},{{1UL,0xEEL,1UL,1UL,0xEEL,1UL,1UL}},{{0xEEL,0xEEL,0x58L,0xEEL,0xEEL,0x58L,0xEEL}}};
    char l_79 = 0xA4L;
    int l_100[10][1];
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_100[i][j] = 0x1A67D551L;
    }
    g_80 = (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((g_34[1][5] && (safe_sub_func_int16_t_s_s(((l_78[0][0][3] & 0x30L) && l_78[2][0][0]), l_78[0][0][0]))), 1)), l_79));
    for (l_79 = 0; (l_79 <= 0); l_79 += 1)
    {
        unsigned l_98 = 4294967292UL;
        int l_102 = 0x78261C1CL;
        g_81 = 0xDFF61739L;
        for (p_70 = 0; (p_70 >= 0); p_70 -= 1)
        {
            unsigned short l_101 = 65526UL;
            for (g_80 = 0; (g_80 <= 0); g_80 += 1)
            {
                unsigned l_95 = 0UL;
                for (g_81 = 0; (g_81 >= 0); g_81 -= 1)
                {
                    short l_92 = 0x2B26L;
                    int i, j, k;
                    for (g_83 = 0; (g_83 >= 0); g_83 -= 1)
                    {
                        int i, j, k;
                        g_99 = (0xB66FL != (l_78[(g_81 + 1)][l_79][(g_83 + 5)] < (safe_rshift_func_int8_t_s_u(l_78[(p_70 + 1)][g_80][(p_70 + 2)], ((safe_sub_func_uint8_t_u_u((g_83 & (((safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_78[1][0][3], l_92)) <= (safe_sub_func_uint16_t_u_u(l_95, (safe_mod_func_int32_t_s_s((((0x88L > p_70) > l_92) < 249UL), l_98))))), 65535UL)) < p_70) > g_81)), l_78[(p_70 + 1)][g_80][(p_70 + 2)])) == g_81)))));
                    }
                    l_100[5][0] = l_78[p_70][g_80][(g_80 + 1)];
                    l_101 = l_92;
                }
                g_83 = l_95;
                for (g_99 = 0; (g_99 <= 0); g_99 += 1)
                {
                    int l_125[2][6][8] = {{{0xBAEA4427L,0xE2B08325L,(-8L),7L,(-8L),0xE2B08325L,0xBAEA4427L,0xBAEA4427L},{0xE2B08325L,7L,0L,0L,7L,0xE2B08325L,0x60F7E9ACL,0xE2B08325L},{7L,0xE2B08325L,0x60F7E9ACL,0xE2B08325L,7L,0L,0L,7L},{0xE2B08325L,0xBAEA4427L,0xBAEA4427L,0xE2B08325L,(-8L),7L,(-8L),0xE2B08325L},{0xBAEA4427L,(-8L),0xBAEA4427L,0L,0x60F7E9ACL,0x60F7E9ACL,0L,0xBAEA4427L},{(-8L),(-8L),0x60F7E9ACL,7L,(-1L),7L,0x60F7E9ACL,(-8L)}},{{(-8L),0xBAEA4427L,0L,0x60F7E9ACL,0x60F7E9ACL,0L,0xBAEA4427L,(-8L)},{0xBAEA4427L,0xE2B08325L,(-8L),7L,(-8L),0xE2B08325L,0xBAEA4427L,0xBAEA4427L},{0xE2B08325L,7L,0L,0L,7L,0xE2B08325L,0x60F7E9ACL,0xE2B08325L},{7L,0xE2B08325L,0x60F7E9ACL,0xE2B08325L,7L,0L,7L,0xBAEA4427L},{(-1L),0xE2B08325L,0xE2B08325L,(-1L),0x60F7E9ACL,0xBAEA4427L,0x60F7E9ACL,(-1L)},{0xE2B08325L,0x60F7E9ACL,0xE2B08325L,7L,0L,0L,7L,0xE2B08325L}}};
                    int i, j, k;
                    if ((1L <= 0x9BC9383AL))
                    {
                        l_100[5][0] = p_70;
                        l_102 = p_70;
                        g_83 = (((safe_lshift_func_uint8_t_u_s(g_99, g_34[1][5])) & ((((g_82 < p_70) | (0x20L <= (~g_34[1][5]))) & (p_70 > ((safe_sub_func_int8_t_s_s(g_81, (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((0xB15C07A2L || g_34[1][1]), g_83)), l_101)))) != g_80))) ^ 1UL)) & g_34[1][3]);
                    }
                    else
                    {
                        unsigned short l_126 = 4UL;
                        l_126 = (p_70 && (((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x5FL, (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(g_99, ((p_70 > (p_70 <= (g_81 <= (safe_mul_func_uint16_t_u_u(0xE7DBL, (g_81 <= g_99)))))) ^ g_83))), l_78[0][0][3])), g_80)))), 0x3399L)), l_125[1][1][6])) <= p_70) < g_82));
                        l_100[5][0] = l_125[1][1][6];
                    }
                    l_102 = (safe_add_func_uint16_t_u_u(p_70, (p_70 && ((-1L) <= (safe_rshift_func_int16_t_s_u((((g_83 == (safe_add_func_uint32_t_u_u(((p_70 <= (+((safe_rshift_func_int8_t_s_u((((0x233BL >= (safe_lshift_func_uint16_t_u_u(65535UL, g_83))) != (0xB5L != 0x20L)) < p_70), 1)) || g_81))) <= 6UL), 4294967295UL))) & l_101) & g_82), p_70))))));
                    l_100[5][0] = (safe_lshift_func_int8_t_s_s((-5L), (safe_mul_func_int16_t_s_s(((p_70 || g_83) ^ l_100[8][0]), g_82))));
                    for (g_81 = 0; (g_81 >= 0); g_81 -= 1)
                    {
                        int i, j, k;
                        l_125[g_99][(l_79 + 1)][(l_79 + 7)] = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_78[(g_99 + 1)][l_79][(g_80 + 3)] >= (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(l_78[(l_79 + 2)][g_99][g_99], 0x2F59L)) <= ((safe_mul_func_int16_t_s_s((l_78[(g_80 + 2)][g_80][(l_79 + 2)] || (((l_78[p_70][p_70][p_70] >= p_70) & (safe_mod_func_int8_t_s_s((((((l_98 && (p_70 >= (l_78[p_70][p_70][p_70] != p_70))) != p_70) <= p_70) || l_78[(l_79 + 2)][g_99][g_99]) || 0x54C8FCCFL), p_70))) <= 0xE48FL)), g_81)) | g_61)), g_34[1][5]))) != p_70), l_102)), g_83));
                        l_125[1][3][3] = (0UL || l_95);
                    }
                }
            }
            for (g_83 = 0; (g_83 <= 0); g_83 += 1)
            {
                unsigned short l_157 = 0x3B09L;
                unsigned short l_174 = 65534UL;
                if ((p_70 < p_70))
                {
                    for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
                    {
                        int l_158[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int i, j, k;
                        g_82 = l_78[(g_99 + 1)][p_70][g_83];
                        l_158[8] = (((safe_sub_func_uint32_t_u_u((l_78[(g_99 + 1)][p_70][(p_70 + 5)] & g_81), g_80)) > 250UL) <= (safe_lshift_func_uint8_t_u_s((l_78[(g_99 + 1)][p_70][g_83] < ((g_34[1][5] <= g_83) || g_99)), l_157)));
                        g_82 = (safe_add_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(p_70, l_102)) <= ((0x0E1D116AL <= ((safe_mul_func_int8_t_s_s((l_101 == ((safe_unary_minus_func_int32_t_s((g_81 == ((-9L) != (safe_mod_func_uint16_t_u_u(g_99, (safe_add_func_uint32_t_u_u((l_100[2][0] && ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_83, 1)), 0x4FL)) > p_70)), l_101)))))))) <= p_70)), g_34[1][5])) >= p_70)) >= l_101)), l_158[8]));
                        g_82 = g_81;
                    }
                    if (g_99)
                        break;
                }
                else
                {
                    int l_195 = 1L;
                    l_100[7][0] = ((p_70 & (l_174 | (safe_lshift_func_uint8_t_u_s(255UL, 7)))) >= l_101);
                    for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
                    {
                        l_100[9][0] = (safe_lshift_func_int16_t_s_s(l_174, 0));
                        l_100[5][0] = l_101;
                    }
                    if ((p_70 == (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(p_70, g_183)), (p_70 < (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(l_102)), (safe_rshift_func_uint8_t_u_u(p_70, 4)))), 3)) && ((0x747FL || l_100[5][0]) != l_101)) <= 8UL), l_101)), l_195)))))))
                    {
                        g_99 = p_70;
                        g_82 = ((g_80 || g_99) | g_61);
                        l_102 = ((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x0CL, (0x6AL != (((0xD6L ^ g_82) > (p_70 || ((~g_83) == p_70))) > g_34[1][5])))), (safe_add_func_uint32_t_u_u(0x45A36995L, 4294967288UL)))) | 0x74L);
                    }
                    else
                    {
                        short l_208 = (-10L);
                        l_102 = 9L;
                        g_99 = g_34[3][5];
                        g_82 = (safe_mul_func_int8_t_s_s((1UL == (((!(p_70 != l_195)) ^ g_61) == (p_70 == (((safe_rshift_func_int8_t_s_u(0x3DL, l_208)) >= 0x2EL) != (safe_add_func_int8_t_s_s((~l_101), l_157)))))), l_101));
                    }
                    for (g_99 = 0; (g_99 <= 0); g_99 += 1)
                    {
                        int i, j;
                        return l_100[(g_99 + 4)][p_70];
                    }
                }
            }
        }
    }
    return l_78[0][0][3];
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_34[i][j], "g_34[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
