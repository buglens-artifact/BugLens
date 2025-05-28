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
   signed f1 : 16;
};


static int g_2[10][4] = {{0x067E307BL,0x869EC427L,0x55E00FE1L,0L},{0xA2961C0FL,0x869EC427L,0xA2961C0FL,0xC4185A1FL},{0x869EC427L,0xBE39E3CFL,(-2L),0x86E871D9L},{0x86E871D9L,0L,0x067E307BL,0xBE39E3CFL},{(-1L),0x067E307BL,0x067E307BL,(-1L)},{0x86E871D9L,0xC4185A1FL,(-2L),0xA2961C0FL},{0x869EC427L,(-7L),0xA2961C0FL,0xD837BC75L},{0xA2961C0FL,0xD837BC75L,0x55E00FE1L,0xD837BC75L},{0x067E307BL,(-7L),0L,0xA2961C0FL},{(-1L),0xC4185A1FL,0xD837BC75L,(-1L)}};
static unsigned short g_42 = 0xD341L;
static int g_43 = (-1L);
static unsigned g_75 = 4294967291UL;
static char g_77 = (-1L);
static int g_81 = (-1L);
static struct S0 g_104 = {35,64};
static int g_132 = 1L;
static short g_196 = 0xEC22L;
static unsigned char g_198[4] = {251UL,251UL,251UL,251UL};
static int g_327[3] = {0x7E9080B2L,0x7E9080B2L,0x7E9080B2L};
static unsigned g_345 = 1UL;
static short g_393[3] = {(-1L),(-1L),(-1L)};
static unsigned short g_464 = 1UL;
static char g_530 = (-3L);
static unsigned g_712[4][5] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
static short g_785 = 0x8062L;
static unsigned g_794 = 4294967295UL;
static int g_951[3][7][6] = {{{0xABEED837L,0xF9A70A80L,6L,0x4C267708L,7L,0xBC67385EL},{1L,(-9L),0xF48621FBL,2L,0x3929AD80L,0x3929AD80L},{(-1L),1L,1L,(-1L),2L,0x743CD3CBL},{(-9L),(-10L),0xB177E483L,0xBA3C4165L,0xC3341D8EL,6L},{0x5843053EL,(-1L),0xF41423C5L,1L,0xC3341D8EL,6L},{0x3929AD80L,(-10L),7L,0x82A55128L,2L,0xE45038DFL},{0x6F05C924L,1L,1L,0xB09D6078L,0x3929AD80L,0xBA3C4165L}},{{6L,(-9L),0x4C267708L,0x3929AD80L,7L,1L},{0xBA3C4165L,0xF9A70A80L,0xE45038DFL,0xF9A70A80L,0xBA3C4165L,(-1L)},{1L,0xABEED837L,0xB09D6078L,(-10L),0x5843053EL,0xF6541795L},{0x743CD3CBL,0x82A55128L,0xBC67385EL,0xABEED837L,0x2735CDCAL,0xF6541795L},{0x9E207EEDL,(-1L),0xB09D6078L,0xBC67385EL,(-9L),1L},{0x743CD3CBL,(-1L),6L,0xC3341D8EL,0xBA3C4165L,0xB177E483L},{(-9L),2L,1L,0x5843053EL,6L,0x2735CDCAL}},{{6L,0x6F05C924L,0xB09D6078L,0xB09D6078L,0x6F05C924L,6L},{0x82A55128L,0x2735CDCAL,(-3L),(-1L),0x3929AD80L,0xF41423C5L},{7L,0xE45038DFL,0xF6541795L,0x6F05C924L,0x5843053EL,0xABEED837L},{7L,0x93CE4EB9L,0x6F05C924L,(-1L),(-9L),7L},{0x82A55128L,0x3929AD80L,0xB177E483L,0xB09D6078L,(-1L),0xE45038DFL},{6L,0xABEED837L,0x93CE4EB9L,0x5843053EL,1L,0x82A55128L},{(-9L),4L,0xABEED837L,0xC3341D8EL,0xABEED837L,4L}}};
static int g_960 = 0L;
static unsigned short g_1000 = 65535UL;
static unsigned char g_1005 = 0x67L;
static short g_1052[1] = {0xC1AEL};
static char g_1053 = 0x08L;
static unsigned g_1199 = 0xC79605B8L;
static struct S0 g_1359 = {46,-66};
static unsigned char g_1405 = 0x36L;
static short g_1573 = 0xDE09L;



static char func_1(void);
static unsigned func_8(unsigned short p_9, char p_10);
static unsigned short func_11(char p_12);
static unsigned short func_23(int p_24, unsigned short p_25, unsigned short p_26);
static int func_27(unsigned short p_28, char p_29, unsigned short p_30);
static unsigned short func_35(int p_36, unsigned p_37, int p_38, unsigned char p_39, short p_40);
static short func_46(unsigned p_47, unsigned p_48);
static int func_51(unsigned p_52, int p_53);
static unsigned func_58(short p_59);
static char func_67(int p_68);
static char func_1(void)
{
    short l_41 = 0x1181L;
    int l_1587 = 1L;
    for (g_2[5][1] = 23; (g_2[5][1] > (-21)); g_2[5][1] = safe_sub_func_int32_t_s_s(g_2[5][1], 7))
    {
        int l_7[8];
        int l_920[8][3] = {{1L,0L,1L},{3L,(-6L),(-6L)},{0x08DC75F2L,0L,0x08DC75F2L},{3L,3L,(-6L)},{1L,0L,1L},{3L,(-6L),(-6L)},{0x08DC75F2L,0L,0x08DC75F2L},{3L,3L,(-6L)}};
        unsigned l_1586 = 1UL;
        struct S0 l_1588 = {48,-98};
        int i, j;
        for (i = 0; i < 8; i++)
            l_7[i] = 0L;
        l_1587 = (!(safe_sub_func_uint32_t_u_u((l_7[6] >= (l_1586 = func_8(g_2[5][1], (func_11((safe_sub_func_uint16_t_u_u(g_2[7][1], (safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(1L, (l_920[4][2] = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(func_23((((func_27((((((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((0x955FL < func_35(g_2[5][3], g_2[9][2], l_41, (g_43 = (g_42 = (0x49F2L != 0x8262L))), l_7[6])), l_7[0])) == 0x3DL), l_41)) <= l_7[6]) >= g_2[7][0]) >= 0x58F3L) < (-4L)), l_7[6], l_7[5]) ^ 0x9629A362L) >= (-1L)) <= g_2[0][3]), g_393[0], l_7[6]), 5)), 15))))) != 0x8BL), l_7[6]))))) <= 0x9A06L)))), g_1199)));
        g_104 = l_1588;
        g_104 = g_1359;
        g_104 = g_104;
    }
    return l_1587;
}







static unsigned func_8(unsigned short p_9, char p_10)
{
    int l_1069 = 0xB3FE60B0L;
    int l_1070 = (-1L);
    unsigned char l_1075 = 255UL;
    char l_1086 = 0x18L;
    unsigned short l_1091 = 65535UL;
    unsigned l_1092 = 4294967295UL;
    unsigned short l_1093[4][1] = {{0xB6A7L},{0xD90AL},{0xB6A7L},{0xD90AL}};
    unsigned short l_1094 = 0xBEF4L;
    int l_1095 = 1L;
    struct S0 l_1234 = {19,81};
    short l_1245 = (-8L);
    struct S0 l_1299 = {70,-151};
    unsigned short l_1304 = 65529UL;
    int i, j;
    if ((l_1095 = (safe_add_func_uint16_t_u_u(((l_1070 = l_1069) == ((safe_add_func_int16_t_s_s(((g_712[3][4] = (func_27(((g_42 == (((func_35((safe_mod_func_int8_t_s_s((-1L), l_1075)), (((+0x12D6L) <= (((g_327[2] = (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(p_10, 5)) > ((func_58((g_196 = func_51(((safe_mod_func_int32_t_s_s((-7L), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_1086, (safe_mod_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(((p_10 != (-1L)) == g_464), l_1091)) || 0L) <= 0xD1CC327DL), l_1075)))), 0x9B39L)))) & g_712[1][3]), l_1091))) && 0x13L) || 0L)), p_10))) ^ l_1092) < g_530)) == 1L), l_1093[0][0], l_1075, p_9) & 0x4CL) && g_951[2][2][4]) < 9L)) > p_10), g_951[2][1][2], p_10) < 0xAE37L)) >= l_1092), l_1094)) & g_951[2][5][1])), p_10))))
    {
        unsigned l_1096 = 0xAB8F966CL;
        int l_1166[5][4] = {{0x9EF90F26L,1L,0x9EF90F26L,1L},{0x9EF90F26L,1L,0x9EF90F26L,1L},{0x9EF90F26L,1L,0x9EF90F26L,1L},{0x9EF90F26L,1L,0x9EF90F26L,1L},{0x9EF90F26L,1L,0x9EF90F26L,1L}};
        struct S0 l_1173 = {69,158};
        short l_1204 = 1L;
        unsigned l_1243[6];
        char l_1297[6][1] = {{1L},{(-1L)},{1L},{1L},{(-1L)},{1L}};
        short l_1332 = 0L;
        unsigned char l_1375 = 1UL;
        int i, j;
        for (i = 0; i < 6; i++)
            l_1243[i] = 1UL;
lbl_1342:
        if (l_1096)
        {
            struct S0 l_1097[7] = {{39,-142},{39,-142},{39,-142},{39,-142},{39,-142},{39,-142},{39,-142}};
            unsigned l_1106 = 4294967295UL;
            int l_1137[6][2][7] = {{{0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L},{1L,0xB32C2B38L,1L,0xB32C2B38L,1L,0xB32C2B38L,1L}},{{0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L},{1L,0xB32C2B38L,1L,0xB32C2B38L,1L,0xB32C2B38L,1L}},{{0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L},{1L,0xB32C2B38L,1L,0xB32C2B38L,1L,0xB32C2B38L,1L}},{{0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L},{1L,0xB32C2B38L,1L,0xB32C2B38L,1L,0xB32C2B38L,1L}},{{0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L},{1L,0xB32C2B38L,1L,0xB32C2B38L,1L,0xB32C2B38L,1L}},{{0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L,0x26DDDBE8L},{1L,0xB32C2B38L,1L,0xB32C2B38L,1L,0xB32C2B38L,1L}}};
            int l_1138 = 0x0BC1A0EEL;
            int i, j, k;
lbl_1128:
            g_104 = l_1097[0];
lbl_1142:
            for (l_1070 = 0; (l_1070 == (-10)); l_1070 = safe_sub_func_uint16_t_u_u(l_1070, 1))
            {
                int l_1109 = 0x623205D0L;
                l_1097[0].f1 = (safe_mod_func_uint32_t_u_u(p_9, 0x1B0BF934L));
                for (g_345 = 1; (g_345 > 26); g_345 = safe_add_func_int8_t_s_s(g_345, 2))
                {
                    for (g_132 = 0; (g_132 >= 4); ++g_132)
                    {
                        l_1106 = p_10;
                    }
                }
                if (g_1005)
                    continue;
                l_1109 = (safe_mod_func_int32_t_s_s((p_9 > p_9), l_1096));
            }
            for (g_196 = 25; (g_196 <= 6); --g_196)
            {
                short l_1135 = 0xE69BL;
                struct S0 l_1139 = {70,-231};
                int l_1148 = (-4L);
                int l_1153 = (-9L);
                for (g_960 = 0; (g_960 <= 2); g_960 += 1)
                {
                    struct S0 l_1129 = {45,35};
                    int i;
                    if ((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_393[g_960], (0x8C93L | (safe_lshift_func_int16_t_s_s(((func_67(g_327[g_960]) | (safe_add_func_uint8_t_u_u((p_10 == (-1L)), ((safe_lshift_func_int8_t_s_s(g_104.f1, 2)) >= (safe_rshift_func_int16_t_s_u((g_1052[0] = ((1L && (safe_mod_func_int16_t_s_s((g_393[g_960] == p_10), 0x2ECFL))) ^ 0x19L)), p_10)))))) > p_10), g_75))))), 4)), g_327[g_960])) > 0x6AE1L) < g_327[g_960]))
                    {
                        struct S0 l_1130 = {62,252};
                        if (g_42)
                            goto lbl_1128;
                        l_1130 = l_1129;
                    }
                    else
                    {
                        unsigned l_1136 = 0x7D8E4994L;
                        int i;
                        l_1138 = (((p_10 & ((l_1137[1][0][4] = (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_9, (l_1136 = ((l_1097[0].f1 = (5L || (g_327[g_960] = (g_1053 = g_393[g_960])))) == (((((l_1135 = (g_393[0] != 0x5361L)) > (p_9 && p_9)) >= (-6L)) > l_1106) != l_1097[0].f0))))), p_10))) <= 1UL)) != 0UL) & g_198[0]);
                        g_104 = g_104;
                        if (g_198[1])
                            continue;
                    }
                    l_1139 = g_104;
                    if ((safe_add_func_int8_t_s_s(func_67(l_1139.f1), (g_2[5][1] ^ g_104.f0))))
                    {
                        g_327[2] = 9L;
                        if (g_43)
                            goto lbl_1142;
                    }
                    else
                    {
                        int l_1145 = 0L;
                        g_951[2][1][2] = (safe_rshift_func_int8_t_s_u((-6L), 1));
                        l_1145 = 0xD03B0C92L;
                    }
                }
                if (((safe_add_func_uint8_t_u_u((g_393[1] ^ ((p_9 == l_1097[0].f0) <= (func_67((l_1148 = (l_1139.f1 = (l_1138 < (g_1005 = func_67((g_43 = g_198[1]))))))) && ((safe_rshift_func_uint16_t_u_u(((p_10 != (safe_rshift_func_int8_t_s_u(l_1135, 1))) ^ g_42), p_10)) > l_1137[0][1][3])))), l_1086)) & l_1135))
                {
                    int l_1156 = 4L;
                    int l_1165 = (-1L);
                    l_1156 = ((func_51((l_1153 != ((safe_rshift_func_uint8_t_u_s(0xDCL, 7)) | l_1096)), (+(p_9 ^ p_10))) >= 0x0D42L) ^ ((((g_1052[0] || (0x20D9L == (-1L))) > l_1075) < l_1137[1][0][4]) & g_951[2][1][2]));
                    l_1148 = func_67(l_1095);
                    l_1166[4][0] = (safe_mod_func_uint16_t_u_u(l_1096, (l_1165 = func_51(((safe_lshift_func_int8_t_s_u(func_51(l_1070, func_67((g_198[2] != (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(0L, (g_1000 | ((l_1095 = p_10) | p_10)))), (3L < (1L & g_1052[0]))))))), p_10)) && 0xA3L), p_9))));
                    if ((g_393[0] != (safe_add_func_int8_t_s_s(((func_67((safe_lshift_func_int16_t_s_s((-3L), (l_1139.f0 | g_530)))) <= (65532UL == (g_196 && (l_1139.f0 > ((safe_add_func_uint8_t_u_u(g_327[2], p_9)) >= 1L))))) ^ p_10), l_1139.f0))))
                    {
                        l_1095 = 6L;
                        if (l_1139.f1)
                            goto lbl_1128;
                        l_1173 = g_104;
                    }
                    else
                    {
                        int l_1174 = 4L;
                        l_1174 = p_10;
                    }
                }
                else
                {
                    for (p_9 = 0; (p_9 <= 3); p_9 += 1)
                    {
                        int i, j;
                        return g_712[p_9][(p_9 + 1)];
                    }
                }
                for (l_1148 = 0; (l_1148 != 6); l_1148 = safe_add_func_uint16_t_u_u(l_1148, 2))
                {
                    struct S0 l_1180 = {85,218};
                    int l_1189 = (-1L);
                    int l_1202 = 0L;
                    for (l_1153 = 0; (l_1153 > 2); ++l_1153)
                    {
                        int l_1179[6] = {0L,0L,0L,0L,0L,0L};
                        int l_1190 = 0xB559BCBDL;
                        int i;
                        l_1179[1] = (p_9 < g_1005);
                        l_1180 = g_104;
                        l_1097[0].f1 = 1L;
                        l_1139.f1 = ((safe_rshift_func_uint16_t_u_s(p_10, 4)) | ((+(((((((((safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_1000 = (l_1179[1] = l_1139.f0)), l_1093[0][0])) < (safe_mod_func_uint16_t_u_u(((9UL >= g_345) && (p_10 >= ((l_1180.f1 = l_1166[4][2]) > (l_1137[2][0][2] = (p_9 != (l_1190 = ((l_1189 = l_1180.f0) | l_1166[4][0]))))))), g_43))), p_10)) && p_9) > g_77) | p_10) > 0xC0EF62DDL) == l_1173.f0) > 0x8FA9DCD5L) <= 65534UL) >= 0x3D52DA54L)) < (-5L)));
                    }
                    for (g_1005 = 19; (g_1005 != 53); g_1005 = safe_add_func_uint32_t_u_u(g_1005, 3))
                    {
                        unsigned short l_1203 = 0xA69BL;
                        l_1203 = (safe_lshift_func_int8_t_s_s((p_10 = ((0x1505L >= ((safe_lshift_func_uint8_t_u_s(0UL, ((g_198[2] = (l_1153 = ((l_1070 != 0UL) <= (-1L)))) || ((g_327[1] = (safe_rshift_func_int8_t_s_u(((g_1199 || (((((l_1139.f1 = ((safe_add_func_uint8_t_u_u(l_1202, g_960)) != p_9)) > g_132) | l_1180.f0) | p_9) == 0x41L)) | p_10), l_1173.f1))) < p_9)))) > p_9)) < p_10)), g_464));
                        l_1173 = g_104;
                    }
                    if (l_1204)
                        continue;
                }
                if (g_1199)
                {
                    unsigned char l_1225[10];
                    int l_1230 = 0x290DA13CL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1225[i] = 0x2AL;
                    l_1097[0].f1 = (l_1139.f0 != (p_10 == ((g_42 || (~(g_464 = (safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((l_1070 = (((((safe_add_func_int32_t_s_s((g_132 == (safe_sub_func_int32_t_s_s((p_10 <= l_1173.f0), g_81))), (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((-2L), l_1093[3][0])), g_42)))) && l_1093[0][0]) | g_198[1]) || 4L) >= g_196)), 6)) >= g_196) > 2UL), 1UL))))) >= 0L)));
                    l_1166[4][0] = (l_1137[1][0][4] = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_1138, (l_1097[0].f1 & (l_1230 = (9L == (l_1225[9] >= func_51(g_2[5][1], (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(func_67((l_1139.f1 >= p_9)), g_1052[0])) && 0x57B7AF28L) || l_1075), p_9))))))))), 7)) <= 0x3E6EL), p_9)));
                    for (g_464 = (-6); (g_464 >= 15); ++g_464)
                    {
                        int l_1233 = (-3L);
                        l_1230 = (g_951[2][1][2] = l_1233);
                        l_1139 = l_1234;
                    }
                    for (g_530 = 14; (g_530 <= (-20)); g_530--)
                    {
                        l_1139 = (g_104 = l_1097[0]);
                    }
                }
                else
                {
                    unsigned char l_1246[4][7][6] = {{{248UL,6UL,0x75L,0xACL,0x23L,0x06L},{0xDFL,3UL,0x89L,0xACL,0x9DL,0x6FL},{248UL,0x6CL,0x4FL,0x6FL,0x89L,0UL},{0x6CL,9UL,247UL,247UL,0UL,0UL},{0UL,0UL,0xDFL,252UL,246UL,246UL},{255UL,0x62L,0x62L,255UL,252UL,0xACL},{0UL,1UL,253UL,0x89L,0xF4L,247UL}},{{0x9DL,255UL,255UL,248UL,0xF4L,0xE5L},{246UL,1UL,0UL,3UL,252UL,0x71L},{0x54L,0x62L,0UL,0x35L,246UL,0x89L},{0xE5L,0UL,247UL,246UL,0UL,0x62L},{0x89L,9UL,0x71L,9UL,0x89L,255UL},{1UL,0x6CL,0x35L,1UL,0x9DL,0x75L},{0xACL,0xDFL,3UL,0x89L,0xACL,0x9DL}},{{0xF4L,0UL,255UL,3UL,1UL,248UL},{0xACL,6UL,247UL,0xF4L,0x89L,253UL},{0UL,252UL,249UL,0x9DL,0xE5L,0x23L},{247UL,0x54L,0x35L,0x35L,0x54L,247UL},{3UL,0x23L,0x4FL,6UL,246UL,255UL},{0UL,0x71L,0x75L,0x54L,0x9DL,0x6CL},{0UL,0x06L,0x54L,6UL,0UL,0UL}},{{3UL,246UL,253UL,0x35L,255UL,0x71L},{247UL,0x6CL,0x06L,0x9DL,0UL,3UL},{0UL,0x6FL,0x6CL,0xF4L,0x6CL,0x6FL},{0xACL,0x35L,0UL,3UL,248UL,0x62L},{0xF4L,255UL,0x23L,0x89L,0xDFL,0xE5L},{0UL,255UL,0x9DL,247UL,248UL,0xACL},{9UL,0x35L,0x89L,1UL,0x6CL,249UL}}};
                    int i, j, k;
                    for (l_1086 = 0; (l_1086 != 3); ++l_1086)
                    {
                        unsigned l_1244 = 0x3828B813L;
                        g_951[2][1][2] = (safe_rshift_func_uint8_t_u_u(((p_10 | g_951[1][5][2]) || ((safe_mod_func_int32_t_s_s(((l_1244 = l_1243[1]) == l_1234.f0), func_67(p_10))) >= l_1166[4][0])), (p_10 & 0xBFL)));
                        l_1153 = g_530;
                        if (l_1135)
                            continue;
                    }
                    l_1246[1][0][0] = (l_1245 < p_10);
                    for (g_81 = 9; (g_81 >= 18); g_81++)
                    {
                        g_951[2][1][2] = p_10;
                        g_104 = l_1139;
                        l_1153 = (!p_10);
                    }
                }
            }
        }
        else
        {
            int l_1249 = 0x68B9F6A2L;
            struct S0 l_1264 = {15,-146};
            char l_1290 = 3L;
lbl_1259:
            l_1166[0][3] = p_9;
            l_1070 = l_1249;
            for (g_785 = 0; (g_785 <= 0); g_785 += 1)
            {
                l_1249 = (g_327[2] = (!(-1L)));
            }
            if ((0x644EL == (safe_sub_func_int32_t_s_s(l_1249, (safe_add_func_uint8_t_u_u(func_58((~(l_1095 || 0x772ECEA3L))), (l_1166[4][2] && ((((1UL & ((g_712[3][3] = g_530) < p_10)) != g_393[0]) ^ l_1093[0][0]) != 0xC1L))))))))
            {
                struct S0 l_1256 = {33,204};
                l_1166[4][0] = l_1249;
                l_1256 = l_1173;
            }
            else
            {
                unsigned l_1263 = 4294967290UL;
                int l_1278 = 0xD98BA858L;
                int l_1279[7][3][5] = {{{1L,0x7549F9C1L,0xE9CE7AE9L,0xE9CE7AE9L,0x7549F9C1L},{0x2C3CA372L,0x5B83A9F2L,(-1L),7L,7L},{1L,9L,1L,0x7549F9C1L,0xE9CE7AE9L}},{{0x5B83A9F2L,0x2FD2A498L,7L,0x2FD2A498L,0x5B83A9F2L},{1L,1L,9L,0x2F1A6F4FL,9L},{0x5774867FL,0x5774867FL,7L,0x5B83A9F2L,0x2C3CA372L}},{{1L,1L,1L,1L,9L},{0x2FD2A498L,0x5B83A9F2L,(-1L),(-1L),0x5B83A9F2L},{9L,1L,0x7549F9C1L,0xE9CE7AE9L,0xE9CE7AE9L}},{{(-1L),0x5774867FL,(-1L),(-1L),7L},{0x2F1A6F4FL,1L,0xE9CE7AE9L,1L,0x2F1A6F4FL},{(-1L),0x2FD2A498L,0x5774867FL,0x5B83A9F2L,0x5774867FL}},{{9L,9L,0xE9CE7AE9L,0x2F1A6F4FL,0xE10DE9A2L},{0x2FD2A498L,(-1L),(-1L),0x2FD2A498L,0x5774867FL},{1L,0x2F1A6F4FL,0x7549F9C1L,0x7549F9C1L,0x2F1A6F4FL}},{{0x5774867FL,(-1L),(-1L),7L,7L},{1L,9L,1L,0x7549F9C1L,0xE9CE7AE9L},{0x5B83A9F2L,0x2FD2A498L,7L,0x2FD2A498L,0x5B83A9F2L}},{{1L,1L,9L,0x2F1A6F4FL,9L},{0x5774867FL,0x5774867FL,7L,0x5B83A9F2L,0x2C3CA372L},{1L,1L,0x7549F9C1L,0x2F1A6F4FL,1L}}};
                struct S0 l_1298 = {12,-255};
                int i, j, k;
                for (g_81 = 8; (g_81 <= 9); g_81 = safe_add_func_uint16_t_u_u(g_81, 1))
                {
                    int l_1270 = 0x895EB004L;
                    struct S0 l_1280 = {64,-138};
                    struct S0 l_1294 = {78,-89};
                    if (g_1199)
                        goto lbl_1259;
                    for (l_1245 = 0; (l_1245 <= 2); l_1245 += 1)
                    {
                        int l_1260 = 0xFAAE8F42L;
                        struct S0 l_1265 = {6,110};
                        int i;
                        l_1173.f1 = (l_1263 = (((l_1260 = (-1L)) || (g_393[l_1245] | (g_327[l_1245] = (safe_add_func_int8_t_s_s((0x3F577A38L || g_327[l_1245]), g_327[l_1245]))))) | g_77));
                        g_104 = (l_1265 = l_1264);
                    }
                    if (g_198[1])
                    {
                        char l_1277 = 9L;
                        l_1279[3][0][3] = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((p_10 = g_196), (l_1270 = 255UL))) || p_10), (l_1069 && ((l_1278 = (l_1095 = (safe_mod_func_int32_t_s_s((g_327[2] = (safe_rshift_func_uint8_t_u_s(0xC1L, (g_530 = (((+((safe_mod_func_uint8_t_u_u(p_9, 0xE3L)) | g_951[2][6][2])) > l_1173.f0) && l_1277))))), l_1093[0][0])))) == p_9))));
                        l_1280 = l_1234;
                        g_104.f1 = 0xFB6166D0L;
                        g_951[2][1][2] = (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(g_345)) == (l_1264.f1 = ((l_1070 = g_785) ^ ((p_9 = p_9) > (l_1204 >= ((safe_lshift_func_uint16_t_u_s((l_1290 ^ (l_1290 & (p_10 >= (safe_unary_minus_func_int8_t_s(l_1264.f0))))), (safe_lshift_func_uint16_t_u_s(l_1264.f0, l_1234.f0)))) < l_1264.f1)))))), l_1277));
                    }
                    else
                    {
                        l_1173 = l_1264;
                        g_104 = l_1294;
                        l_1278 = (l_1264.f1 = p_9);
                    }
                    if ((safe_sub_func_int16_t_s_s(l_1093[0][0], l_1297[0][0])))
                    {
                        l_1278 = l_1279[4][0][4];
                    }
                    else
                    {
                        l_1294 = (g_104 = l_1298);
                    }
                }
                return p_10;
            }
        }
lbl_1324:
        l_1299 = l_1299;
        if ((safe_sub_func_int8_t_s_s(func_23(p_10, g_132, p_10), ((safe_sub_func_uint8_t_u_u(l_1245, 253UL)) && l_1304))))
        {
            int l_1306 = 0xED5856ACL;
            struct S0 l_1337 = {75,157};
            int l_1360 = 0xB96BFAFDL;
            for (l_1095 = 0; (l_1095 <= 2); l_1095 += 1)
            {
                struct S0 l_1305 = {41,-147};
                int l_1354 = 0x8AA19B04L;
                for (l_1245 = 5; (l_1245 >= 0); l_1245 -= 1)
                {
                    unsigned l_1307 = 0x531AAC66L;
                    int i;
                    l_1305 = l_1173;
                    if (l_1243[l_1245])
                    {
                        l_1306 = l_1305.f1;
                    }
                    else
                    {
                        if (g_327[2])
                            break;
                        g_81 = l_1307;
                    }
                    for (g_794 = 0; (g_794 <= 2); g_794 += 1)
                    {
                        int i, j, k;
                        g_951[g_794][g_794][l_1245] = (safe_mod_func_uint16_t_u_u(0x723CL, (g_951[g_794][g_794][l_1245] || (l_1234.f1 = (safe_sub_func_uint16_t_u_u(g_712[1][3], (safe_rshift_func_uint16_t_u_u((((((safe_add_func_int32_t_s_s((p_10 > func_35((safe_sub_func_uint32_t_u_u(0UL, (~((p_9 != p_9) == ((safe_sub_func_int16_t_s_s(p_9, (g_712[0][4] != p_10))) >= g_712[3][1]))))), g_198[2], g_2[5][1], g_1052[0], p_9)), (-9L))) < g_794) ^ l_1307) != g_951[g_794][g_794][l_1245]) >= p_9), 2))))))));
                    }
                    if (g_198[3])
                        continue;
                    for (g_960 = 2; (g_960 >= 0); g_960 -= 1)
                    {
                        int i, j, k;
                        return g_951[g_960][(l_1245 + 1)][(g_960 + 3)];
                    }
                }
                for (g_42 = 0; (g_42 == 26); ++g_42)
                {
                    int l_1331 = 0x47A383FEL;
                    int l_1355 = 3L;
                    for (g_530 = 0; (g_530 < 4); ++g_530)
                    {
                        if (g_43)
                            goto lbl_1324;
                    }
                    l_1234.f1 = (safe_lshift_func_uint16_t_u_s(l_1095, (0x64L >= (safe_mod_func_uint8_t_u_u((((((p_10 = ((g_104.f1 = g_951[0][3][5]) < (((g_198[1] = (l_1299.f1 = p_10)) | (+(safe_rshift_func_uint16_t_u_s(l_1331, g_393[1])))) != l_1305.f0))) < ((((((l_1332 = 6L) & ((safe_sub_func_int16_t_s_s(0x2094L, g_1199)) | (-6L))) || 8L) < g_196) <= 3UL) <= 0x93B7BA43L)) | l_1306) & l_1306) && g_712[0][4]), (-9L))))));
                    for (g_1000 = (-3); (g_1000 != 7); g_1000 = safe_add_func_int8_t_s_s(g_1000, 9))
                    {
                        l_1234 = l_1337;
                        if (l_1173.f1)
                            continue;
                    }
                    if (((safe_add_func_uint32_t_u_u(func_35(g_785, l_1297[0][0], l_1305.f1, g_75, g_327[1]), 0L)) <= (g_1000 = p_10)))
                    {
                        l_1331 = ((safe_sub_func_uint8_t_u_u(l_1096, func_58(p_9))) > p_9);
                        if (l_1331)
                            goto lbl_1342;
                        if (g_327[0])
                            continue;
                        g_81 = (g_327[0] = 0x06B3DF67L);
                    }
                    else
                    {
                        int l_1353 = (-1L);
                        l_1331 = l_1331;
                        l_1337 = g_104;
                        g_951[1][5][1] = ((l_1337.f1 = ((p_9 ^ (0x8BL & (safe_sub_func_uint16_t_u_u((l_1173.f1 = (safe_rshift_func_uint16_t_u_u((g_77 & ((func_51((l_1331 >= ((safe_add_func_int8_t_s_s(func_51((func_51((safe_sub_func_int32_t_s_s(0x0770D740L, ((safe_sub_func_uint16_t_u_u((g_464 = func_51(p_10, g_1005)), (((l_1354 = (((l_1305.f1 = g_104.f0) > l_1353) & p_10)) < l_1353) <= l_1299.f0))) || l_1353))), g_785) >= 0xFDL), l_1305.f0), l_1299.f0)) == l_1337.f1)), p_9) ^ l_1355) | 0x760DL)), p_9))), p_9)))) <= l_1353)) & g_530);
                    }
                }
                if (g_196)
                    break;
                for (l_1306 = 0; (l_1306 == (-24)); l_1306 = safe_sub_func_int32_t_s_s(l_1306, 1))
                {
                    struct S0 l_1358 = {58,176};
                    l_1337 = l_1358;
                    l_1299.f1 = 0x65E6EA3EL;
                    g_104.f1 = p_9;
                    l_1234 = (g_1359 = g_104);
                }
            }
            return l_1360;
        }
        else
        {
            char l_1366 = 0xB2L;
            struct S0 l_1400 = {46,-245};
            if ((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u((g_1005 = (l_1366 | func_11((safe_mod_func_uint8_t_u_u(func_23((l_1375 = (safe_mod_func_int16_t_s_s((+(safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(g_1359.f1, 3)), g_2[5][1]))), g_198[1]))), (+((safe_lshift_func_int16_t_s_s(l_1234.f0, 13)) > (func_51(p_9, p_9) && ((l_1095 = p_9) >= g_198[2])))), p_9), l_1366))))))) >= 0xB3EDL), l_1366)), g_2[5][1])))
            {
                unsigned char l_1378 = 1UL;
                int l_1393[9];
                int l_1454[5][10] = {{6L,0L,6L,0x0CFA6B26L,0L,0x57874441L,0x57874441L,0L,0x0CFA6B26L,6L},{0x28D153CEL,0x28D153CEL,1L,0L,0x7AD3316BL,1L,0x7AD3316BL,0L,1L,0x28D153CEL},{0x7AD3316BL,0x57874441L,6L,0x7AD3316BL,0x0CFA6B26L,0x0CFA6B26L,0x7AD3316BL,6L,0x57874441L,0x7AD3316BL},{6L,0x28D153CEL,0x57874441L,0x0CFA6B26L,0x28D153CEL,0x0CFA6B26L,0x57874441L,0x28D153CEL,6L,6L},{0x7AD3316BL,0L,1L,0x28D153CEL,0x28D153CEL,1L,0L,0x7AD3316BL,1L,0x7AD3316BL}};
                char l_1455[8];
                int i, j;
                for (i = 0; i < 9; i++)
                    l_1393[i] = 0L;
                for (i = 0; i < 8; i++)
                    l_1455[i] = 0x5CL;
                if ((l_1378 = func_23(p_9, g_198[1], g_530)))
                {
                    int l_1399[2][4] = {{(-1L),0x92F3D634L,0x92F3D634L,(-1L)},{0x92F3D634L,(-1L),0x92F3D634L,0x92F3D634L}};
                    int i, j;
                    l_1393[6] = (safe_rshift_func_uint16_t_u_s((g_464 = (safe_sub_func_uint8_t_u_u(((p_10 = (!func_58(p_10))) | ((p_9 || (+(l_1070 = l_1092))) > ((safe_sub_func_uint32_t_u_u((+((g_712[3][1] != 0x5352FE0FL) ^ (safe_mod_func_int32_t_s_s(((+g_785) <= (safe_rshift_func_uint16_t_u_s(p_9, (safe_rshift_func_int8_t_s_s(g_960, 1))))), 0xB8A18AEDL)))), 0x1A882FF8L)) & l_1096))), 0xBBL))), p_9));
                    for (l_1091 = (-8); (l_1091 >= 9); l_1091 = safe_add_func_int16_t_s_s(l_1091, 1))
                    {
                        g_104 = g_104;
                    }
                    if ((safe_mod_func_int16_t_s_s(g_951[2][1][2], (g_1052[0] || p_10))))
                    {
                        int l_1398 = 0xB2374516L;
                        l_1399[0][2] = l_1398;
                        return l_1398;
                    }
                    else
                    {
                        g_104 = l_1400;
                        l_1173.f1 = (safe_lshift_func_int8_t_s_u((-1L), ((g_393[0] = l_1094) > ((p_10 || g_345) && (l_1166[4][0] <= g_794)))));
                        l_1070 = (g_1405 = l_1399[0][2]);
                        l_1173 = (l_1400 = g_1359);
                    }
                }
                else
                {
                    unsigned char l_1412[9][3] = {{0UL,0x08L,0x92L},{0x92L,0x08L,0UL},{0x08L,0x0BL,0x0BL},{253UL,0x92L,0UL},{0xCEL,0UL,0x92L},{0xCEL,255UL,0x08L},{253UL,0x9CL,253UL},{0x08L,255UL,0xCEL},{0x92L,0UL,0xCEL}};
                    int l_1415 = 0xEB6A9CE0L;
                    int l_1416 = (-6L);
                    struct S0 l_1419 = {77,-18};
                    int i, j;
                    g_104.f1 = (safe_mod_func_int32_t_s_s(((l_1415 = (safe_add_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(func_67(l_1166[2][1]), (+(g_951[2][5][1] = (l_1412[8][0] = l_1400.f1))))) != 65535UL) < (safe_mod_func_uint32_t_u_u(g_1052[0], p_10))), l_1400.f0))) == (0xB3L > g_198[1])), l_1416));
                    l_1166[4][3] = (safe_sub_func_uint32_t_u_u(l_1378, l_1299.f0));
                    for (g_132 = 2; (g_132 >= 0); g_132 -= 1)
                    {
                        struct S0 l_1420[4] = {{86,-128},{86,-128},{86,-128},{86,-128}};
                        int i;
                        l_1420[1] = l_1419;
                    }
                    if (g_785)
                    {
                        unsigned short l_1421 = 1UL;
                        l_1234 = g_104;
                        l_1421 = g_785;
                        l_1400.f1 = (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_327[0], ((g_464 | (func_51((+l_1297[4][0]), p_9) & ((g_198[1] <= l_1415) && l_1378))) && (safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_58(l_1173.f0), p_9)), g_393[1])), p_10))))), (-9L)));
                    }
                    else
                    {
                        unsigned l_1436 = 0x3BE09795L;
                        l_1095 = (-3L);
                        if (l_1204)
                            goto lbl_1441;
lbl_1441:
                        l_1166[4][0] = (l_1299.f1 || (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(func_58(func_58(p_9)), (((l_1378 != ((l_1436 | (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(p_10, 2)), 8))) | (p_10 && (1UL & p_10)))) ^ 0xB8FFL) && 0xE027L))), 0)) && l_1400.f0) < g_1000));
                        l_1166[3][1] = (l_1415 = (!(g_81 != 0xF5F155B3L)));
                        l_1415 = p_10;
                    }
                }
                for (p_10 = 0; (p_10 > 1); p_10 = safe_add_func_int8_t_s_s(p_10, 3))
                {
                    unsigned l_1456 = 0x5FB82BFAL;
                    if ((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((0x88L & (safe_lshift_func_uint16_t_u_u((func_11(l_1393[5]) || 4294967288UL), ((l_1234.f1 = (((safe_rshift_func_int16_t_s_s((l_1455[0] = (safe_add_func_int32_t_s_s((l_1454[3][3] = ((g_42 > g_1359.f1) < 0x42A6663DL)), (g_1053 && g_1053)))), l_1456)) == l_1166[4][0]) ^ p_10)) ^ g_1053)))), l_1393[6])), (-9L))))
                    {
                        int l_1460 = (-1L);
                        g_327[0] = ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s((-1L))), (p_10 ^ l_1460))) || 65531UL);
                    }
                    else
                    {
                        g_327[2] = (safe_mod_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s(0L)) || 0x98L) >= (p_9 = 0xC1EEL)), (safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_393[0], ((g_104.f0 < g_198[1]) | (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s((-2L))) != (g_1199 ^ (g_1052[0] ^ l_1455[3]))), p_10))))), p_10))));
                        l_1400 = g_104;
                    }
                    l_1393[6] = (safe_rshift_func_int16_t_s_u((g_393[2] = (safe_lshift_func_int8_t_s_u((g_393[0] ^ p_9), 4))), 8));
                }
            }
            else
            {
                unsigned char l_1479 = 249UL;
                g_327[2] = (l_1092 || (safe_rshift_func_uint8_t_u_u((((g_1359.f0 = (safe_rshift_func_int16_t_s_s(((l_1479 = g_1052[0]) != (g_327[2] ^ (g_77 == (safe_sub_func_uint32_t_u_u((0x90CAL | ((g_712[1][3] <= ((safe_lshift_func_int16_t_s_s((l_1299.f1 = 0x905BL), ((l_1400.f0 & (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((func_51(g_1052[0], l_1366) != g_1359.f1) & g_75), 4)) != g_104.f1), p_9))) == g_198[3]))) <= 65534UL)) ^ p_10)), (-5L)))))), p_9))) != g_1052[0]) | p_9), p_9)));
                for (l_1069 = 0; (l_1069 <= 3); l_1069 += 1)
                {
                    return p_10;
                }
            }
        }
    }
    else
    {
        char l_1490 = 0xACL;
        int l_1495 = 0L;
        int l_1507 = 0xCD37F6E6L;
        int l_1554 = 0x815A2969L;
        for (g_42 = 0; (g_42 <= 2); g_42 += 1)
        {
            int l_1506[3][4] = {{0x488EBCC0L,0x488EBCC0L,0x488EBCC0L,0x488EBCC0L},{0x488EBCC0L,0x488EBCC0L,0x488EBCC0L,0x488EBCC0L},{0x488EBCC0L,0x488EBCC0L,0x488EBCC0L,0x488EBCC0L}};
            int i, j;
            for (g_1000 = 0; (g_1000 <= 3); g_1000 += 1)
            {
                struct S0 l_1515[2] = {{10,-190},{10,-190}};
                unsigned char l_1535 = 255UL;
                int i;
                if (((safe_lshift_func_uint8_t_u_u(g_327[g_42], (g_198[g_1000] ^ (l_1490 || (safe_add_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(p_9, func_67((g_327[g_42] != g_104.f1)))) && (l_1495 || ((((l_1490 <= l_1490) & p_10) || (-2L)) < p_10))) == 0x78L) && 5UL), l_1495)))))) != g_1000))
                {
                    if (g_712[1][3])
                        break;
                }
                else
                {
                    char l_1503 = 0xCAL;
                    struct S0 l_1508 = {76,-233};
                    int i;
                    if ((g_327[g_42] = g_198[g_1000]))
                    {
                        l_1299 = g_104;
                        if (g_785)
                            continue;
                        g_327[g_42] = func_46((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_9, 255UL)), l_1495)), (safe_sub_func_uint8_t_u_u(5UL, p_9)));
                        return g_327[2];
                    }
                    else
                    {
                        struct S0 l_1502 = {77,-5};
                        l_1495 = g_1199;
                        g_1359 = l_1502;
                        l_1503 = g_2[5][0];
                        g_327[g_42] = (safe_add_func_int32_t_s_s(l_1502.f1, (g_327[g_42] && l_1506[2][2])));
                    }
                    for (p_9 = 0; (p_9 <= 3); p_9 += 1)
                    {
                        l_1506[1][1] = (7L > l_1507);
                    }
                    l_1508 = l_1508;
                }
                for (l_1091 = 0; (l_1091 <= 3); l_1091 += 1)
                {
                    unsigned char l_1509 = 0UL;
                    struct S0 l_1514[6][6][5] = {{{{30,154},{26,210},{40,-204},{8,-220},{70,32}},{{71,19},{40,-14},{74,73},{19,116},{26,210}},{{74,12},{0,52},{35,-16},{34,-216},{15,-174}},{{15,-40},{74,12},{11,-68},{74,-13},{63,221}},{{17,-237},{89,-63},{15,-174},{15,-174},{89,-63}},{{80,19},{73,192},{3,-211},{76,20},{15,-174}}},{{{33,229},{76,20},{69,-217},{86,226},{3,169}},{{17,-8},{32,-219},{43,-102},{12,-197},{20,-160}},{{33,229},{59,83},{70,-21},{40,-14},{85,-215}},{{80,19},{36,-255},{20,-229},{15,-40},{60,-237}},{{17,-237},{74,-13},{71,19},{19,116},{40,-14}},{{15,-40},{59,83},{61,35},{20,-160},{48,-236}}},{{{74,12},{60,-237},{11,-68},{26,210},{28,-134}},{{71,19},{30,154},{85,-215},{48,-236},{76,20}},{{30,154},{73,192},{46,-75},{89,-63},{12,-197}},{{36,-255},{80,193},{20,-229},{89,-63},{37,-142}},{{17,-8},{20,-160},{67,-160},{48,-236},{34,-216}},{{88,-49},{2,116},{14,205},{35,-16},{58,-53}}},{{{48,-77},{61,35},{3,169},{45,-205},{59,83}},{{40,-204},{32,96},{11,-68},{23,-251},{48,-236}},{{59,83},{86,-137},{26,-70},{12,195},{26,-70}},{{62,50},{62,50},{37,-142},{85,-215},{3,-211}},{{40,-204},{71,19},{13,-141},{26,-70},{17,-237}},{{26,-190},{61,-197},{7,-86},{46,-75},{2,-27}}},{{{32,96},{71,19},{26,210},{17,-8},{61,35}},{{11,-68},{62,50},{86,-137},{78,-255},{67,-160}},{{12,-197},{86,-137},{18,182},{12,-197},{58,-53}},{{17,-8},{32,96},{26,210},{0,52},{73,192}},{{69,-217},{61,35},{38,150},{23,-251},{88,-49}},{{45,-205},{2,116},{43,2},{62,50},{78,-255}}},{{{67,-160},{45,-205},{37,-142},{48,-236},{26,-190}},{{20,-229},{26,-190},{2,-27},{78,-255},{26,-190}},{{46,-75},{61,-197},{10,-240},{69,85},{78,-255}},{{85,-215},{69,85},{3,169},{17,-237},{88,-49}},{{11,-68},{70,-21},{61,-197},{26,-70},{73,192}},{{61,35},{18,182},{78,-60},{19,116},{58,-53}}}};
                    int i, j, k;
                    if ((+(l_1509 = (g_951[2][1][2] ^ g_464))))
                    {
                        l_1070 = ((safe_add_func_int8_t_s_s((l_1234.f1 = 0x04L), p_10)) ^ (safe_mod_func_int16_t_s_s(l_1509, g_198[0])));
                        l_1514[1][1][0] = g_104;
                    }
                    else
                    {
                        struct S0 l_1516 = {16,-108};
                        if (g_327[2])
                            break;
                        l_1507 = func_67(g_198[g_1000]);
                        g_104 = l_1515[0];
                        l_1516 = l_1514[3][1][1];
                    }
                    if (((((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u((g_464 = func_58(g_75)))) > (((p_9 == (+((0UL | g_1052[0]) < p_9))) <= l_1514[1][1][0].f1) <= (safe_unary_minus_func_uint8_t_u(253UL)))), 5)) | (safe_rshift_func_int16_t_s_u((!((l_1069 >= p_10) == p_10)), l_1506[2][2]))) >= p_9) == 3L))
                    {
                        unsigned l_1523 = 0UL;
                        return l_1523;
                    }
                    else
                    {
                        int l_1526 = (-3L);
                        int l_1534 = 0xA66C191BL;
                        struct S0 l_1536 = {86,174};
                        l_1070 = ((safe_rshift_func_int8_t_s_s((g_77 = (l_1526 = l_1506[2][2])), p_9)) != ((((l_1234.f1 = (g_464 && (!func_51(g_393[1], (g_960 = (p_10 > (safe_sub_func_int16_t_s_s(g_2[5][1], (l_1515[0].f1 = (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((0xC774942AL <= (l_1535 = (((l_1534 = (-3L)) ^ (-5L)) || p_10))))), l_1506[2][2]))))))))))) != g_393[2]) & 4294967295UL) | 0xD8L));
                        g_104 = (l_1536 = l_1299);
                        g_104 = l_1536;
                        if (l_1536.f0)
                            continue;
                    }
                }
            }
        }
        if ((~(safe_rshift_func_int8_t_s_s((~g_393[2]), (p_10 & (g_1005 <= (p_9 ^ ((l_1490 > 0UL) && (safe_lshift_func_int16_t_s_s((l_1495 = (((safe_rshift_func_uint8_t_u_s((g_1405 = g_196), 1)) ^ g_712[0][3]) > func_51(l_1507, l_1234.f1))), 6))))))))))
        {
            unsigned short l_1549 = 8UL;
            g_327[2] = (g_951[2][1][2] = (func_35((l_1507 = l_1299.f0), g_1000, (g_951[2][1][2] = (safe_mod_func_int8_t_s_s(((func_51((l_1234.f1 = g_393[0]), p_9) ^ (safe_lshift_func_int16_t_s_u((g_1052[0] = (safe_mod_func_int8_t_s_s(((p_9 | ((-7L) & l_1549)) <= g_1052[0]), g_345))), 9))) != l_1299.f0), p_9))), g_104.f1, l_1495) ^ 0xCEC5F0C5L));
            l_1095 = (!((safe_lshift_func_int8_t_s_s(g_42, 1)) > 0x46L));
        }
        else
        {
            return g_2[5][1];
        }
        for (l_1092 = 0; (l_1092 > 59); l_1092 = safe_add_func_uint8_t_u_u(l_1092, 6))
        {
            l_1554 = g_1053;
        }
    }
lbl_1585:
    for (g_960 = 0; (g_960 <= 3); g_960 += 1)
    {
        struct S0 l_1555 = {23,36};
        int l_1567 = (-1L);
        for (l_1095 = 3; (l_1095 >= 0); l_1095 -= 1)
        {
            struct S0 l_1556 = {85,165};
            int i, j;
            if (g_712[l_1095][(l_1095 + 1)])
            {
                int l_1568 = 0L;
                int i, j;
                if (g_712[l_1095][l_1095])
                {
                    if (g_712[l_1095][l_1095])
                        break;
                }
                else
                {
                    if (g_1005)
                        break;
                    l_1556 = l_1555;
                    for (l_1086 = 2; (l_1086 >= 0); l_1086 -= 1)
                    {
                        int i, j, k;
                        if (g_951[l_1086][(l_1086 + 3)][l_1086])
                            break;
                        if (g_393[l_1086])
                            break;
                    }
                    if (g_104.f1)
                        break;
                }
                l_1567 = ((((g_712[l_1095][(l_1095 + 1)] = ((safe_lshift_func_int16_t_s_s(l_1555.f1, (safe_lshift_func_int8_t_s_s(((g_712[1][3] == 0x37064F0DL) >= (g_1053 = func_11(((safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((l_1234.f1 != ((p_10 ^ 0xA1EAL) & (safe_rshift_func_int8_t_s_u((l_1567 | (g_1053 <= g_712[l_1095][l_1095])), 3)))), p_9)) ^ g_1052[0]) > g_951[0][4][0]) <= l_1555.f0), g_1052[0])) != 0UL)))), 7)))) >= 1L)) ^ 0x1F3479DEL) && 0xC358L) > l_1568);
                l_1556.f1 = l_1555.f0;
            }
            else
            {
                unsigned char l_1578 = 0x17L;
                int i, j;
                for (g_345 = 0; (g_345 <= 0); g_345 += 1)
                {
                    int i;
                    return g_327[(g_345 + 2)];
                }
                for (p_10 = 2; (p_10 >= 0); p_10 -= 1)
                {
                    struct S0 l_1569 = {87,181};
                    struct S0 l_1570 = {45,-121};
                    int i;
                    l_1570 = l_1569;
                    l_1570.f1 = (g_327[p_10] = g_327[p_10]);
                    for (g_81 = 2; (g_81 >= 0); g_81 -= 1)
                    {
                        int i;
                        return g_327[g_81];
                    }
                }
                l_1567 = ((((l_1234.f1 = (safe_sub_func_int8_t_s_s(((func_11(((g_1573 = p_10) && g_712[l_1095][(l_1095 + 1)])) & (safe_lshift_func_uint16_t_u_s((((0xA4A6D362L <= (g_1359.f1 = l_1556.f1)) || (((((safe_mod_func_uint32_t_u_u((g_2[6][3] & l_1578), (safe_sub_func_uint32_t_u_u((g_1359.f0 = (((safe_rshift_func_uint8_t_u_s((p_10 == (safe_lshift_func_uint16_t_u_u(g_1052[0], p_9))), 0)) | 1L) & 0xD28D695CL)), p_9)))) != 0x01164677L) ^ l_1556.f0) <= p_10) ^ p_10)) < 255UL), g_1052[0]))) != g_1052[0]), 1L))) & 0xB76D5368L) || 1L) || p_9);
                g_104.f1 = (g_1052[0] < (-1L));
            }
        }
        return l_1555.f1;
    }
    g_1359 = l_1299;
    if (g_104.f1)
        goto lbl_1585;
    return l_1245;
}







static unsigned short func_11(char p_12)
{
    int l_925 = 0L;
    int l_933 = (-1L);
    int l_934 = 0x91E8F742L;
    unsigned char l_966 = 7UL;
    unsigned l_967 = 0x0A30A1E6L;
    unsigned char l_989 = 246UL;
    struct S0 l_1057 = {41,-27};
    for (g_785 = 0; (g_785 >= 13); g_785++)
    {
        unsigned l_932 = 8UL;
        int l_953 = 0x4D8D7A8CL;
        struct S0 l_971 = {62,38};
        unsigned short l_1018 = 0x5621L;
        g_81 = (safe_sub_func_int16_t_s_s(g_785, l_925));
        for (g_81 = 0; (g_81 > (-23)); g_81 = safe_sub_func_int32_t_s_s(g_81, 7))
        {
            g_327[1] = (safe_rshift_func_uint16_t_u_s(p_12, 11));
        }
        if (g_393[0])
            break;
        if (p_12)
        {
            unsigned char l_935[5][2][7] = {{{255UL,5UL,0xC2L,0x59L,0x20L,0x64L,5UL},{1UL,0x44L,1UL,0UL,1UL,0UL,1UL}},{{0x20L,0x20L,0xC2L,5UL,255UL,0x5CL,5UL},{251UL,250UL,251UL,0UL,0x01L,250UL,0x01L}},{{0x59L,5UL,5UL,0x59L,255UL,0xC2L,0x64L},{1UL,7UL,255UL,7UL,1UL,250UL,255UL}},{{0x5CL,0x20L,5UL,5UL,0x20L,0x5CL,0x64L},{0x01L,0UL,251UL,250UL,251UL,0UL,0x01L}},{{0x5CL,5UL,0x64L,0x59L,0x59L,0x64L,5UL},{1UL,0UL,1UL,0x44L,1UL,0x44L,1UL}}};
            int l_969 = (-10L);
            int l_975 = 0x0EC09602L;
            struct S0 l_976[8] = {{61,32},{61,32},{61,32},{61,32},{61,32},{61,32},{61,32},{61,32}};
            unsigned short l_984 = 65527UL;
            int i, j, k;
            l_934 = (l_933 = (safe_lshift_func_uint8_t_u_u((l_932 = (l_925 = 0UL)), 7)));
            if (p_12)
            {
                unsigned char l_936 = 0xEAL;
                l_934 = (l_935[0][0][1] = (func_67(p_12) && 1L));
                if (l_936)
                {
                    char l_952[9][8][3] = {{{0L,(-1L),(-4L)},{(-4L),0x84L,(-1L)},{0x8AL,0x69L,0x3AL},{2L,(-1L),0x3AL},{(-1L),0x1CL,(-1L)},{(-4L),0xA2L,(-4L)},{(-4L),0x5BL,0x97L},{0x44L,0xF4L,0x84L}},{{(-1L),0xC8L,(-8L)},{0x44L,0L,0x3AL},{(-4L),0xB1L,0x69L},{2L,1L,0xDDL},{0xA2L,0x84L,0L},{0xC8L,0x84L,2L},{1L,1L,0x44L},{0x8AL,0xB1L,0xC8L}},{{0xF4L,0L,(-4L)},{0L,0xC8L,(-1L)},{0L,0xF4L,(-4L)},{0x84L,0x5BL,0xC8L},{0xDDL,0x1CL,0x44L},{0L,0L,2L},{(-4L),2L,0L},{(-4L),0xDDL,0xDDL}},{{0L,(-1L),0x69L},{0xDDL,0xA2L,0x3AL},{0x84L,0L,(-8L)},{0L,0x69L,0x84L},{0L,0L,0x97L},{0xF4L,0xA2L,0x8AL},{0x8AL,(-1L),0xA2L},{1L,0xDDL,(-1L)}},{{0xC8L,2L,(-1L)},{0xA2L,0L,0xA2L},{2L,0x1CL,0x8AL},{(-4L),0x5BL,0x97L},{0x44L,0xF4L,0x84L},{(-1L),0xC8L,0L},{2L,0xC8L,0xF4L},{0x69L,0L,0x8AL}},{{0L,(-8L),1L},{0L,0L,0xC8L},{(-4L),0L,0xA2L},{(-8L),(-8L),2L},{0xDDL,0L,(-4L)},{(-1L),0xC8L,0x44L},{1L,(-4L),(-1L)},{(-1L),(-1L),0x44L}},{{0L,0x97L,(-4L)},{1L,0xB1L,2L},{0x1CL,0x3AL,0xA2L},{0x44L,0xA2L,0xC8L},{0x44L,1L,1L},{0x1CL,(-1L),0x8AL},{1L,0L,0xF4L},{0L,(-1L),0L}},{{(-1L),0x8AL,0L},{1L,(-1L),0x84L},{(-1L),0L,0xDDL},{0xDDL,(-1L),0L},{(-8L),1L,(-4L)},{(-4L),0xA2L,(-4L)},{0L,0x3AL,0L},{0L,0xB1L,0xDDL}},{{0x69L,0x97L,0x84L},{2L,(-1L),0L},{2L,(-4L),0L},{2L,0xC8L,0xF4L},{0x69L,0L,0x8AL},{0L,1L,0L},{0xB1L,(-1L),0x69L},{0x8AL,(-1L),0x1CL}}};
                    unsigned char l_970 = 1UL;
                    int i, j, k;
                    l_925 = ((safe_rshift_func_int8_t_s_u((g_393[2] >= (g_81 | (((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_936 >= p_12), (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((!l_936), 3)), g_77)) || p_12), 0x75022C8BL)))), (safe_lshift_func_int16_t_s_u(((((((((0xEFBFEE1FL || g_951[2][1][2]) >= p_12) == l_934) | p_12) < l_952[1][2][0]) || 1UL) && p_12) == g_712[1][3]), l_932)))) > g_104.f1) < g_75))), l_932)) <= 6UL);
                    if (((((g_75 < (l_953 = l_925)) & (-7L)) ^ 0x13L) > g_345))
                    {
                        return g_785;
                    }
                    else
                    {
                        int l_968 = 0x75E6A0A7L;
                        l_968 = (l_925 = ((9L ^ (~(func_67((l_969 = (l_953 = ((g_327[2] && ((safe_sub_func_int8_t_s_s(p_12, func_35((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s((g_104.f1 = g_960), func_51(p_12, l_953))) && (g_951[2][1][2] | (l_934 = ((safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(g_345, p_12)), l_966)))) > l_936)))), 4294967288UL)), p_12, l_967, g_196, g_2[5][1]))) & l_968)) >= 0xC816C9AFL)))) > 0L))) >= 0x0B15F69DL));
                        return l_970;
                    }
                }
                else
                {
                    struct S0 l_972 = {63,-107};
                    l_972 = l_971;
                    for (g_794 = (-12); (g_794 < 49); g_794 = safe_add_func_uint32_t_u_u(g_794, 9))
                    {
                        l_971 = g_104;
                        if (p_12)
                            break;
                        return p_12;
                    }
                }
                l_975 = func_58((p_12 || g_104.f0));
            }
            else
            {
                if (p_12)
                {
                    if (p_12)
                        break;
                }
                else
                {
                    struct S0 l_977 = {5,206};
                    l_977 = l_976[0];
                    return p_12;
                }
                l_975 = 0xA8E1BC7CL;
                g_327[2] = g_196;
                l_976[0].f1 = ((((g_198[1] = ((g_393[0] = ((+p_12) & g_327[2])) != (safe_rshift_func_uint16_t_u_s((l_971.f1 = (safe_mod_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((g_104.f0 <= ((l_967 || (+(((p_12 > l_984) <= ((-4L) || l_967)) != (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_327[2], 4294967293UL)), 8UL))))) & 0xC4L)), g_81)) > 0x8CL) < g_712[2][0]) | 0x43L), p_12))), 7)))) || 8L) & 0x91D8L) | l_989);
            }
            l_925 = g_81;
            for (g_345 = 0; (g_345 == 54); g_345 = safe_add_func_int16_t_s_s(g_345, 2))
            {
                unsigned l_1019 = 0x7A1E6560L;
                unsigned short l_1020 = 65526UL;
                int l_1029[1];
                int l_1030 = 1L;
                struct S0 l_1056 = {33,-196};
                int i;
                for (i = 0; i < 1; i++)
                    l_1029[i] = 0xF77C321EL;
                if (((l_971.f1 = (0L >= g_104.f0)) != ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_953, (safe_lshift_func_uint16_t_u_u(0x2B17L, (((g_712[3][3] ^ (safe_mod_func_int8_t_s_s((func_67((g_1000 != ((0xB135F2B2L & (safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(((!(p_12 || ((l_976[0].f1 = (~g_1005)) ^ 5L))) | 0x83L), g_345)) < p_12), l_932))) & p_12))) <= g_712[2][2]), 4UL))) & g_2[5][1]) == (-1L)))))), g_951[2][1][2])) | l_934)))
                {
                    unsigned l_1021 = 0xB42AAB6DL;
                    int l_1031[10] = {(-5L),(-5L),0x5C546DAFL,(-5L),(-5L),0x5C546DAFL,(-5L),(-5L),0x5C546DAFL,(-5L)};
                    int l_1054[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int i;
                    if ((safe_lshift_func_int16_t_s_u(((g_75 = 0UL) || g_327[0]), (func_51((l_933 = g_196), (~(0x1DC0L <= ((((safe_mod_func_int16_t_s_s((l_934 = (1UL != (safe_mod_func_uint32_t_u_u(p_12, ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(l_1018, func_51(l_967, (g_132 = (0L | l_1019))))), 5)), l_935[0][0][1])) && l_1020))))), l_1021)) & g_951[1][4][2]) || 0x32L) && 3L)))) | g_327[2]))))
                    {
                        int l_1024 = 0xAC41A07FL;
                        g_327[1] = ((l_1031[8] = (g_77 | (safe_add_func_int8_t_s_s((l_976[0].f1 = (((l_1024 | g_104.f1) ^ (safe_rshift_func_int16_t_s_u((g_951[2][1][2] == (l_1018 | ((safe_lshift_func_int8_t_s_u(0x0CL, (l_1029[0] = (l_971.f1 = g_196)))) <= l_1030))), 4))) <= func_51((p_12 >= g_785), p_12))), g_794)))) || l_1024);
                        l_1031[8] = (safe_sub_func_uint8_t_u_u(2UL, g_104.f0));
                        l_976[0].f1 = func_51((g_198[0] >= l_1024), p_12);
                    }
                    else
                    {
                        char l_1038[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1038[i] = (-5L);
                        if (g_1005)
                            break;
                        l_1038[1] = (safe_rshift_func_int16_t_s_s(func_58((safe_mod_func_uint32_t_u_u((l_933 = p_12), g_132))), g_393[0]));
                        g_951[2][3][5] = (g_327[1] = func_67(g_960));
                        l_1031[6] = p_12;
                    }
                    g_104.f1 = (safe_unary_minus_func_int32_t_s((+(safe_add_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_971.f1, ((((0xAA16L < (safe_sub_func_int16_t_s_s(l_1019, (l_925 & (safe_add_func_uint16_t_u_u((l_934 = (((l_1031[8] > (safe_mod_func_uint8_t_u_u((0x2775L || (l_1054[1] = (g_393[1] = (((-1L) < (safe_add_func_int16_t_s_s(((-1L) > ((l_971.f1 > 0x2BD5L) >= g_1052[0])), p_12))) || g_1053)))), l_1021))) >= l_935[0][0][1]) ^ g_81)), p_12)))))) | 4294967288UL) > 0x104DL) >= g_104.f1))) & g_81) > g_81), p_12)))));
                }
                else
                {
                    unsigned short l_1055 = 0UL;
                    if (p_12)
                    {
                        l_1055 = 4L;
                    }
                    else
                    {
                        l_1056 = g_104;
                        l_1057 = l_1057;
                    }
                    if (g_530)
                        continue;
                }
                for (l_1018 = 0; (l_1018 <= 3); l_1018 += 1)
                {
                    unsigned l_1058 = 0x2C6DFDA1L;
                    if (p_12)
                    {
                        l_1058 = l_976[0].f1;
                        if (p_12)
                            break;
                    }
                    else
                    {
                        g_951[1][3][4] = (-5L);
                    }
                }
                l_971.f1 = (p_12 <= (safe_lshift_func_uint16_t_u_s((g_1000 = g_712[1][3]), ((0x3E1EL <= (l_971.f0 | (p_12 == (((safe_unary_minus_func_uint32_t_u(g_2[5][1])) || ((0x81L & (g_530 = 0x7AL)) & (safe_add_func_int8_t_s_s(func_58(p_12), 3L)))) ^ p_12)))) < 1UL))));
                for (g_81 = 14; (g_81 > 18); ++g_81)
                {
                    unsigned l_1066 = 0xBC160BFBL;
                    g_327[2] = l_953;
                    l_1066 = l_966;
                }
            }
        }
        else
        {
            l_1057 = g_104;
        }
    }
    return p_12;
}







static unsigned short func_23(int p_24, unsigned short p_25, unsigned short p_26)
{
    int l_772 = 0x9EA21E34L;
    int l_779 = 0xFE6C0732L;
    struct S0 l_796 = {30,247};
    int l_817 = 0x5807032CL;
    int l_909 = 0x78C0C14CL;
    if (((+(1UL < (l_772 = (safe_lshift_func_uint16_t_u_s(g_393[1], 5))))) ^ (((-1L) >= (65527UL < (0x408D8C20L < (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_132 != (g_77 <= (g_464 || (g_327[2] = p_26)))), g_198[1])), l_779)) >= l_779), 5))))) >= l_779)))
    {
        int l_786[1];
        struct S0 l_797 = {0,-137};
        struct S0 l_821 = {3,-209};
        char l_861 = 4L;
        char l_887[2];
        int i;
        for (i = 0; i < 1; i++)
            l_786[i] = 0xE38871A0L;
        for (i = 0; i < 2; i++)
            l_887[i] = 1L;
        g_81 = l_779;
        if (p_25)
        {
            unsigned short l_784 = 0x21BFL;
            g_785 = (safe_rshift_func_int16_t_s_u(p_26, (safe_add_func_int32_t_s_s((+p_26), l_784))));
            l_786[0] = 0x3C905A4AL;
            if (l_784)
            {
                return g_785;
            }
            else
            {
                unsigned short l_789 = 1UL;
                struct S0 l_795 = {34,-213};
                g_327[1] = (p_25 > (func_27((safe_lshift_func_int16_t_s_s(func_27(p_24, l_789, (func_51(g_104.f1, (safe_rshift_func_int8_t_s_u((l_789 || (p_26 && 0L)), (safe_rshift_func_int8_t_s_u(((p_24 != g_327[0]) != g_77), l_789))))) >= g_2[5][1])), g_2[5][0])), p_25, g_794) != p_25));
                l_795 = g_104;
            }
            l_797 = l_796;
        }
        else
        {
            l_786[0] = (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(func_67(l_797.f1), l_796.f1)), 13));
            g_327[2] = (l_786[0] & func_35(g_393[0], p_25, g_785, g_132, g_81));
        }
        if (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_25, p_25)), (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_unary_minus_func_int32_t_s(0xB1A84925L)) <= (l_796.f1 = l_779)) > (safe_sub_func_int32_t_s_s(((!(l_817 = ((safe_mod_func_int16_t_s_s(((2UL != (l_797.f1 = ((((g_75 = 0x4EA966F9L) <= (safe_add_func_int32_t_s_s(func_51(l_797.f1, g_464), l_797.f0))) || (-1L)) ^ g_327[2]))) | g_104.f1), p_25)) != g_198[3]))) >= g_132), p_24))), 0)), 10)))) | 4294967294UL))
        {
            unsigned char l_818 = 253UL;
            return l_818;
        }
        else
        {
            unsigned short l_838 = 0UL;
            int l_848 = 0x61F92DC3L;
            int l_862 = 0L;
            for (g_785 = 0; (g_785 > (-2)); --g_785)
            {
                int l_832 = 0x3E160447L;
                char l_859 = 0x08L;
                l_821 = g_104;
                if (g_464)
                    break;
                for (p_25 = (-29); (p_25 <= 26); p_25 = safe_add_func_uint32_t_u_u(p_25, 8))
                {
                    short l_833 = 0x20F8L;
                    int l_847 = 0L;
                    unsigned l_874[7] = {4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL,4294967295UL};
                    int i;
                    g_327[0] = ((safe_rshift_func_uint16_t_u_s((0xC5B0B7D2L < ((0x9A20D562L || (-9L)) > (func_58(g_2[5][1]) > (g_2[3][0] > (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(l_832, 7)) <= l_833), g_393[1])))))), 3)) || p_24);
                    l_832 = (func_67((1UL >= g_132)) == (0xFD23L != (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_327[2], (g_464 = (l_838 <= (l_848 = ((l_847 = ((safe_add_func_uint8_t_u_u((0x20B3L >= g_198[1]), (((safe_mod_func_int16_t_s_s(((((!(!(safe_rshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(0x0497179EL, 2L)) >= g_393[2]), 1)))) == p_26) != p_24) <= p_25), l_838)) & p_25) ^ g_198[0]))) >= 0x81L)) <= 0xF8FCB406L)))))), g_198[1]))));
                    if (g_43)
                    {
                        return l_838;
                    }
                    else
                    {
                        int l_860 = 4L;
                        p_24 = (safe_add_func_uint8_t_u_u(func_35(p_26, (l_779 < (l_821.f1 = ((0x46L >= l_838) >= (l_786[0] = 0x8AL)))), func_46((safe_mod_func_int8_t_s_s((0xAC46B0E2L | (safe_rshift_func_int16_t_s_u((((func_51((((safe_lshift_func_int16_t_s_s(p_26, 7)) & (safe_rshift_func_int16_t_s_u(0x3B72L, (p_25 > p_25)))) <= l_859), p_24) < 0x57L) ^ g_327[2]) <= g_794), g_77))), g_327[1])), l_860), l_847, l_817), 0xE8L));
                        g_81 = (l_862 = l_861);
                        l_832 = func_35((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((p_24 < g_2[5][1]) != g_712[0][3]), (((safe_unary_minus_func_uint16_t_u((g_104.f0 && (l_779 = func_67((safe_add_func_uint8_t_u_u(((!0UL) | p_25), (safe_add_func_uint16_t_u_u(l_861, (((l_796.f1 = func_51((safe_lshift_func_int8_t_s_s((g_104.f1 <= (g_464 = l_796.f1)), l_860)), l_860)) || l_772) >= l_821.f1)))))))))) & 1UL) & l_859))), l_874[3])), g_345, g_712[1][3], p_25, g_104.f1);
                    }
                }
            }
            g_327[0] = (p_24 = func_46((l_796.f1 = 0xF859B36DL), (safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(g_327[2], (g_393[0] <= (l_862 = ((l_786[0] = (g_198[1] = (((0x3F9F30DBL != func_51(g_81, ((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((((safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((p_25 <= g_464), g_43)) | g_530) || 6UL), g_43)) & l_887[0]) | g_393[1]) < 0xCB3DL) == p_25), g_81)), 0x5F264B3FL)) < p_24))) & 6L) || g_327[2]))) && p_24))))) || g_393[1]), l_838))));
            p_24 = g_712[3][1];
        }
    }
    else
    {
        unsigned char l_890 = 0xE6L;
        int l_903 = (-8L);
        g_327[2] = ((l_817 = ((safe_mod_func_int16_t_s_s((l_890 <= (safe_mod_func_int8_t_s_s(g_794, (safe_lshift_func_uint8_t_u_u(g_712[3][0], l_817))))), 0x4FD5L)) || (g_785 = (l_903 = ((safe_add_func_uint32_t_u_u(0x99172184L, (safe_lshift_func_uint16_t_u_s(g_712[1][3], (l_796.f1 = l_796.f1))))) && ((!(safe_sub_func_int8_t_s_s(l_772, l_890))) <= l_779)))))) == p_24);
        for (g_794 = 0; (g_794 >= 26); g_794++)
        {
            if (l_796.f0)
                break;
        }
    }
    for (g_464 = 0; (g_464 <= 1); g_464 = safe_add_func_uint32_t_u_u(g_464, 4))
    {
        short l_908 = 0L;
        unsigned l_916 = 1UL;
        unsigned short l_919 = 0x38F1L;
        p_24 = (g_81 = ((g_132 && (l_909 = l_908)) < (l_772 >= (((g_530 = (g_77 = (-1L))) >= (l_908 > l_908)) < g_712[1][3]))));
        l_919 = ((safe_rshift_func_uint8_t_u_s(func_51((safe_lshift_func_uint16_t_u_s(p_26, 8)), (safe_rshift_func_int8_t_s_u(func_46(p_26, (p_25 == l_916)), p_24))), 1)) && (safe_lshift_func_int8_t_s_u(func_46(l_779, l_779), 5)));
    }
    return l_796.f1;
}







static int func_27(unsigned short p_28, char p_29, unsigned short p_30)
{
    unsigned l_454 = 2UL;
    unsigned char l_461 = 251UL;
    int l_462 = 0x4D901041L;
    int l_463 = 8L;
    int l_512 = 0x1A26F7BCL;
    int l_513[8];
    struct S0 l_543 = {72,-17};
    unsigned l_599 = 0x72CF7F69L;
    unsigned short l_601 = 0x442FL;
    int l_714 = 0x4287D715L;
    char l_724[3][5] = {{0x8FL,(-8L),0x53L,(-1L),0x53L},{0x53L,0x53L,(-1L),(-1L),0xEAL},{(-8L),0x8FL,0x8FL,(-8L),0x53L}};
    int i, j;
    for (i = 0; i < 8; i++)
        l_513[i] = 0x38AFC32FL;
    if ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_393[0], l_454)), (safe_rshift_func_int16_t_s_u(((g_464 = (func_51(((l_463 = (g_393[0] >= (l_462 = (safe_lshift_func_int8_t_s_s((((l_454 < (safe_rshift_func_int8_t_s_s(g_393[0], l_454))) == func_58(l_461)) < (g_42 <= p_28)), g_2[2][1]))))) | g_393[2]), g_2[5][1]) > 1UL)) | p_30), p_28)))) < p_29), p_30)))
    {
        int l_466[6];
        short l_473 = 0L;
        struct S0 l_501 = {86,190};
        unsigned l_520 = 4294967288UL;
        int l_536 = 1L;
        unsigned short l_562 = 1UL;
        unsigned l_565 = 0UL;
        int i;
        for (i = 0; i < 6; i++)
            l_466[i] = 0xD4A56B30L;
lbl_479:
        g_104.f1 = (l_463 = (p_29 < ((safe_unary_minus_func_uint16_t_u(65535UL)) || (p_28 ^ l_466[2]))));
lbl_593:
        if ((p_28 >= (p_30 ^ (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((-1L) <= l_466[2]), (safe_lshift_func_uint16_t_u_s((l_473 || l_461), 8)))), 6)))))
        {
            short l_498 = 0xA898L;
            unsigned char l_499 = 6UL;
            unsigned char l_500 = 0xE4L;
            for (g_75 = (-14); (g_75 != 36); g_75 = safe_add_func_uint16_t_u_u(g_75, 5))
            {
                unsigned l_478[8][5] = {{0UL,0xB8D68B32L,4294967291UL,8UL,4294967295UL},{0x921C5DF8L,1UL,1UL,0x921C5DF8L,0x58CAE9F6L},{0UL,0xB8D68B32L,4294967291UL,8UL,4294967295UL},{0x921C5DF8L,1UL,1UL,0x921C5DF8L,0x58CAE9F6L},{0UL,0xB8D68B32L,4294967291UL,8UL,4294967295UL},{0x921C5DF8L,1UL,1UL,0x921C5DF8L,0x58CAE9F6L},{0UL,0xB8D68B32L,4294967291UL,8UL,4294967295UL},{0x921C5DF8L,1UL,1UL,0x921C5DF8L,0x58CAE9F6L}};
                struct S0 l_481 = {87,250};
                int i, j;
                if (p_28)
                {
                    struct S0 l_477[9][1] = {{{84,204}},{{60,-96}},{{84,204}},{{60,-96}},{{84,204}},{{60,-96}},{{84,204}},{{60,-96}},{{84,204}}};
                    int i, j;
                    if ((g_198[3] && g_132))
                    {
                        struct S0 l_476 = {84,-253};
                        l_477[7][0] = l_476;
                        g_327[2] = (-5L);
                    }
                    else
                    {
                        l_478[0][3] = (0x7BL < g_2[0][1]);
                        if (p_29)
                            break;
                    }
                }
                else
                {
                    if (g_75)
                        goto lbl_479;
                }
                for (g_77 = 0; (g_77 <= 5); g_77 += 1)
                {
                    int i;
                    g_327[2] = func_51((g_104.f0 = func_51(l_466[g_77], l_466[g_77])), g_42);
                    for (g_132 = 0; (g_132 <= 2); g_132 += 1)
                    {
                        unsigned l_480[7][4] = {{0x3372EADCL,0xC2610588L,0xFD7F4A68L,1UL},{4294967289UL,0xFD7F4A68L,0xFD7F4A68L,4294967289UL},{0x3372EADCL,0x5C438910L,4294967295UL,4294967294UL},{4294967286UL,5UL,4294967294UL,0UL},{4294967294UL,0UL,0xAE1CFE88L,0UL},{0xFD7F4A68L,5UL,0xC2610588L,4294967294UL},{0xB4F1B40DL,0x5C438910L,0UL,4294967289UL}};
                        int i, j;
                        l_480[0][2] = (-8L);
                        return g_393[g_132];
                    }
                    g_104 = l_481;
                }
                return p_30;
            }
            l_500 = ((((safe_lshift_func_uint8_t_u_s(((g_464 = 0xA5ACL) | (~(safe_rshift_func_int16_t_s_s(func_35(g_196, g_2[8][2], (g_81 = (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u(((-1L) == p_28), 0x0A1DL)) >= g_81) >= (safe_sub_func_uint32_t_u_u(g_75, (((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((0xABL <= p_30) && 0x9CDFL), p_30)), 2)) || l_498) == l_462)))) <= l_499), l_473)) && 4L), l_463))), g_77, g_132), 14)))), 2)) == p_28) && g_198[1]) < 0x44L);
            g_104 = l_501;
        }
        else
        {
            unsigned l_502 = 4294967293UL;
            int l_539 = (-9L);
lbl_564:
            l_501 = g_104;
            if (func_46((g_104.f1 != 1L), p_29))
            {
                unsigned l_542 = 0x8C6A4C2EL;
                unsigned char l_563 = 0xB4L;
                if ((((l_502 = (p_30 >= ((l_463 = g_75) >= 0UL))) != (((safe_unary_minus_func_uint32_t_u(0x29B9632CL)) | (safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(l_466[3], (safe_lshift_func_int16_t_s_u((l_513[1] = ((l_512 = (l_462 = l_461)) && p_29)), 6)))), (func_67(p_28) || g_77))) != l_461) & g_327[1]) & g_393[0]), g_2[0][1]))) | 0L)) ^ p_30))
                {
                    unsigned l_519 = 4294967291UL;
                    for (g_77 = (-18); (g_77 != (-16)); g_77 = safe_add_func_int32_t_s_s(g_77, 1))
                    {
                        unsigned l_535 = 4UL;
                        l_501.f1 = (g_81 ^ (safe_unary_minus_func_int16_t_s(((safe_sub_func_int32_t_s_s(l_519, (p_29 | l_520))) && p_29))));
                        l_463 = (l_536 = ((safe_rshift_func_uint16_t_u_u((p_29 >= ((safe_lshift_func_int8_t_s_s((p_28 & (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(((l_501.f1 = g_2[0][1]) && ((g_530 = (safe_unary_minus_func_int32_t_s(l_502))) > ((safe_rshift_func_int16_t_s_s(g_132, (safe_lshift_func_uint8_t_u_s(l_519, (func_51(l_454, g_198[2]) || 0x85182808L))))) > l_535))), (-1L))), g_104.f1))), 1)) | (-2L))), g_77)) ^ 0x9839L));
                    }
                    for (g_132 = 0; (g_132 != (-23)); --g_132)
                    {
                        short l_540 = 0xBA6EL;
                        int l_541 = 0x75A4EE61L;
                        l_539 = l_519;
                        g_327[2] = l_540;
                        l_541 = l_454;
                        return l_542;
                    }
                    for (g_43 = 0; (g_43 <= 2); g_43 += 1)
                    {
                        int i;
                        g_327[g_43] = 0L;
                        l_543 = l_543;
                        g_104.f1 = g_327[g_43];
                    }
                }
                else
                {
                    for (p_28 = 28; (p_28 < 5); --p_28)
                    {
                        g_104.f1 = p_29;
                        return g_104.f1;
                    }
                    g_104 = l_543;
                    g_104 = g_104;
                    for (l_462 = (-2); (l_462 != 25); ++l_462)
                    {
                        l_539 = 1L;
                        g_104 = l_501;
                        l_563 = ((safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((g_530 != (safe_add_func_uint32_t_u_u(func_51(p_28, p_30), (g_75 = g_327[2])))) & ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((((p_28 < (safe_sub_func_int32_t_s_s(((l_539 > (0UL ^ (safe_sub_func_int32_t_s_s((l_543.f1 | g_530), g_104.f0)))) | p_28), 4294967295UL))) > g_2[4][2]) <= 0L) ^ 0x687A4CCDL), l_562)), 6)) ^ p_29)) <= p_28), p_28)), 6)) && 1L);
                        if (g_42)
                            goto lbl_564;
                    }
                }
            }
            else
            {
                int l_575 = 1L;
                g_327[2] = (l_565 = (~(+l_461)));
                l_539 = (p_29 && p_30);
                if (g_327[0])
                {
                    g_327[2] = l_539;
                }
                else
                {
                    for (g_464 = 0; (g_464 <= 44); g_464 = safe_add_func_int32_t_s_s(g_464, 3))
                    {
                        char l_570 = (-3L);
                        l_501.f1 = (safe_add_func_uint16_t_u_u((+g_132), l_570));
                        g_104 = g_104;
                        return l_570;
                    }
                    for (g_75 = 0; (g_75 <= 7); g_75 += 1)
                    {
                        int i;
                        l_513[g_75] = (((+(4UL > (safe_sub_func_uint32_t_u_u(0x2251BB5AL, p_28)))) ^ (safe_rshift_func_int16_t_s_s(g_104.f0, (l_575 & (0x6DDBEAADL < (p_28 & l_513[4])))))) | g_393[0]);
                    }
                }
            }
        }
        for (g_81 = 0; (g_81 <= 18); g_81 = safe_add_func_uint16_t_u_u(g_81, 8))
        {
            int l_583 = 1L;
            int l_590 = 0x6871F871L;
            for (l_536 = 0; (l_536 <= 5); l_536 += 1)
            {
                char l_586 = 0xDDL;
                int l_587 = 0x0109A71CL;
                struct S0 l_595 = {69,-75};
                int i;
                for (g_464 = 0; (g_464 <= 2); g_464 += 1)
                {
                    int l_582 = 3L;
                    int l_598[6] = {(-1L),0x66BFE5F3L,(-1L),(-1L),0x66BFE5F3L,(-1L)};
                    int i;
                    for (l_565 = 0; (l_565 <= 2); l_565 += 1)
                    {
                        int i;
                        g_104.f1 = (l_501.f1 = l_466[(g_464 + 2)]);
                        if (g_393[g_464])
                            break;
                        l_501.f1 = ((g_2[2][1] == (safe_rshift_func_int8_t_s_s(((l_583 = (safe_lshift_func_uint16_t_u_u((l_582 != (p_30 != l_583)), 7))) >= (safe_lshift_func_int8_t_s_u((g_327[0] && ((l_587 = l_586) < ((safe_sub_func_int32_t_s_s(p_29, ((0xA9BE3D45L && g_198[0]) && 0L))) > l_501.f0))), 5))), 0))) < l_590);
                        if (p_30)
                            break;
                    }
                    for (g_345 = (-18); (g_345 >= 39); g_345++)
                    {
                        unsigned char l_594 = 0xF2L;
                        if (g_75)
                            goto lbl_593;
                        l_590 = g_393[0];
                        l_594 = (((-6L) > g_2[5][1]) && (g_42 > g_132));
                        l_501 = l_595;
                    }
                    if (g_43)
                        continue;
                    l_598[1] = (safe_rshift_func_int16_t_s_s(p_28, 6));
                }
                g_104.f1 = l_466[l_536];
                l_590 = g_81;
            }
        }
        l_543.f1 = g_132;
    }
    else
    {
        short l_600[2][9] = {{(-6L),1L,(-1L),(-1L),1L,(-6L),1L,(-1L),(-1L)},{(-1L),(-1L),(-6L),(-1L),(-6L),(-1L),(-1L),(-6L),(-1L)}};
        int i, j;
        if ((func_46(l_599, (g_345 <= (l_463 = ((0xA2L || p_30) >= (g_2[5][1] & ((l_600[0][8] = (l_462 > (1UL > p_30))) & func_58(l_601))))))) < l_512))
        {
            g_327[1] = ((g_198[2] <= 0x5A78D0DEL) & g_43);
            return p_28;
        }
        else
        {
            return g_327[2];
        }
    }
lbl_686:
    l_543 = g_104;
    for (l_463 = 7; (l_463 != 21); l_463 = safe_add_func_uint8_t_u_u(l_463, 1))
    {
        int l_607 = 0xF652A7A9L;
        struct S0 l_617[8][7] = {{{73,-69},{51,-86},{73,-69},{73,-69},{51,-86},{73,-69},{73,-69}},{{58,-145},{14,32},{35,230},{14,32},{58,-145},{10,42},{58,-145}},{{51,-86},{73,-69},{73,-69},{51,-86},{73,-69},{73,-69},{51,-86}},{{41,-162},{14,32},{41,-162},{39,-136},{58,-145},{39,-136},{41,-162}},{{51,-86},{51,-86},{78,204},{51,-86},{51,-86},{78,204},{51,-86}},{{58,-145},{39,-136},{41,-162},{14,32},{41,-162},{39,-136},{58,-145}},{{73,-69},{73,-69},{78,204},{78,204},{73,-69},{78,204},{78,204}},{{41,-162},{39,-136},{58,-145},{39,-136},{41,-162},{14,32},{41,-162}}};
        int l_627 = 0x1EB24045L;
        struct S0 l_640[4][4][6] = {{{{68,-91},{11,-253},{68,-91},{4,-102},{59,240},{59,240}},{{44,-125},{68,-91},{68,-91},{44,-125},{11,-253},{48,226}},{{48,226},{44,-125},{59,240},{44,-125},{48,226},{4,-102}},{{44,-125},{48,226},{4,-102},{4,-102},{48,226},{44,-125}}},{{{68,-91},{44,-125},{11,-253},{48,226},{11,-253},{44,-125}},{{11,-253},{68,-91},{4,-102},{59,240},{59,240},{4,-102}},{{11,-253},{11,-253},{59,240},{48,226},{13,-138},{48,226}},{{68,-91},{11,-253},{68,-91},{4,-102},{59,240},{59,240}}},{{{44,-125},{68,-91},{68,-91},{44,-125},{11,-253},{48,226}},{{48,226},{44,-125},{59,240},{44,-125},{48,226},{4,-102}},{{44,-125},{48,226},{4,-102},{4,-102},{48,226},{44,-125}},{{68,-91},{44,-125},{11,-253},{48,226},{11,-253},{44,-125}}},{{{11,-253},{68,-91},{4,-102},{59,240},{59,240},{4,-102}},{{11,-253},{11,-253},{59,240},{48,226},{11,-253},{68,-91}},{{44,-125},{59,240},{44,-125},{48,226},{4,-102},{4,-102}},{{13,-138},{44,-125},{44,-125},{13,-138},{59,240},{68,-91}}}};
        unsigned short l_688 = 0x3CC9L;
        int i, j, k;
        for (g_81 = 15; (g_81 > 21); g_81 = safe_add_func_int16_t_s_s(g_81, 3))
        {
            int l_606 = 7L;
            int l_608 = 0L;
            struct S0 l_618 = {45,-57};
            if (l_606)
                break;
            l_608 = l_607;
            for (p_29 = 0; (p_29 <= (-25)); --p_29)
            {
                short l_620 = 0x799FL;
                int l_624 = 0xCF7336B5L;
                struct S0 l_636 = {43,-46};
                g_327[2] = (safe_rshift_func_uint8_t_u_u((p_29 | g_393[0]), (l_606 && (p_30 == 4294967287UL))));
                if ((!(safe_rshift_func_uint8_t_u_s(0x42L, 3))))
                {
                    char l_622 = 0x22L;
                    for (l_601 = 0; (l_601 != 29); l_601++)
                    {
                        l_543 = g_104;
                        return p_28;
                    }
                    if (l_463)
                    {
                        char l_619 = (-9L);
                        g_327[2] = p_29;
                        l_617[5][2] = g_104;
                        g_104 = l_618;
                        l_620 = l_619;
                    }
                    else
                    {
                        unsigned l_621 = 0x5827DF98L;
                        int l_623 = 0x59510E72L;
                        l_622 = l_621;
                        l_623 = g_132;
                        l_624 = g_2[5][1];
                    }
                    for (l_461 = 0; (l_461 == 52); ++l_461)
                    {
                        struct S0 l_628 = {74,-162};
                        l_608 = l_617[5][2].f0;
                        l_624 = l_622;
                        g_104.f1 = l_627;
                        g_104 = l_628;
                    }
                    if (g_530)
                        break;
                }
                else
                {
                    short l_631 = 0xEC64L;
                    unsigned l_632 = 0x2618373BL;
                    struct S0 l_635 = {42,-253};
                    l_462 = (safe_sub_func_uint16_t_u_u(l_627, (g_2[5][1] > (0x87L ^ 0xACL))));
                    l_631 = g_2[3][3];
                    l_632 = l_620;
                    for (g_43 = 0; (g_43 <= 7); g_43 += 1)
                    {
                        int i;
                        l_513[g_43] = (l_513[g_43] < (safe_rshift_func_int16_t_s_u((-1L), 15)));
                        l_513[g_43] = p_30;
                        l_636 = (g_104 = l_635);
                    }
                }
            }
            if (p_30)
                break;
        }
        g_327[2] = g_464;
        if (p_28)
        {
            int l_637 = 0x0B805C7EL;
            l_637 = l_462;
            return p_28;
        }
        else
        {
            short l_666 = 0x0E84L;
            struct S0 l_668 = {73,11};
            int l_680 = 1L;
            unsigned l_685 = 6UL;
            struct S0 l_687 = {52,-129};
            for (l_454 = (-5); (l_454 == 22); l_454 = safe_add_func_int8_t_s_s(l_454, 6))
            {
                unsigned char l_641 = 0xAAL;
                struct S0 l_642[8][9][3] = {{{{37,7},{84,124},{27,53}},{{24,89},{33,-95},{77,1}},{{69,32},{84,124},{36,24}},{{27,53},{66,117},{24,89}},{{26,111},{40,112},{56,182}},{{56,182},{69,32},{56,182}},{{7,-227},{37,7},{24,89}},{{39,184},{87,-107},{36,24}},{{44,110},{27,53},{77,1}}},{{{87,-107},{77,1},{27,53}},{{44,110},{36,24},{87,-107}},{{39,184},{24,89},{37,7}},{{7,-227},{56,182},{69,32}},{{56,182},{56,182},{40,112}},{{26,111},{24,89},{66,117}},{{27,53},{36,24},{84,124}},{{69,32},{77,1},{33,-95}},{{24,89},{27,53},{84,124}}},{{{37,7},{87,-107},{66,117}},{{77,-71},{37,7},{40,112}},{{81,-35},{69,32},{69,32}},{{81,-35},{40,112},{37,7}},{{77,-71},{66,117},{87,-107}},{{37,7},{84,124},{27,53}},{{24,89},{33,-95},{77,1}},{{69,32},{84,124},{36,24}},{{27,53},{66,117},{24,89}}},{{{26,111},{39,184},{44,110}},{{44,110},{84,124},{44,110}},{{74,-250},{14,-150},{69,32}},{{37,7},{77,-71},{59,-5}},{{7,-227},{46,49},{27,53}},{{77,-71},{27,53},{46,49}},{{7,-227},{59,-5},{77,-71}},{{37,7},{69,32},{14,-150}},{{74,-250},{44,110},{84,124}}},{{{44,110},{44,110},{39,184}},{{33,-95},{69,32},{36,24}},{{46,49},{59,-5},{40,112}},{{84,124},{27,53},{24,89}},{{69,32},{46,49},{40,112}},{{14,-150},{77,-71},{36,24}},{{56,182},{14,-150},{39,184}},{{66,117},{84,124},{84,124}},{{66,117},{39,184},{14,-150}}},{{{56,182},{36,24},{77,-71}},{{14,-150},{40,112},{46,49}},{{69,32},{24,89},{27,53}},{{84,124},{40,112},{59,-5}},{{46,49},{36,24},{69,32}},{{33,-95},{39,184},{44,110}},{{44,110},{84,124},{44,110}},{{74,-250},{14,-150},{69,32}},{{37,7},{77,-71},{59,-5}}},{{{7,-227},{46,49},{27,53}},{{77,-71},{27,53},{46,49}},{{7,-227},{59,-5},{77,-71}},{{37,7},{69,32},{14,-150}},{{74,-250},{44,110},{84,124}},{{59,-5},{59,-5},{33,-95}},{{56,182},{7,-227},{77,1}},{{39,184},{27,53},{26,111}},{{74,-250},{40,112},{44,110}}},{{{7,-227},{39,184},{26,111}},{{69,32},{66,117},{77,1}},{{36,24},{69,32},{33,-95}},{{14,-150},{74,-250},{74,-250}},{{14,-150},{33,-95},{69,32}},{{36,24},{77,1},{66,117}},{{69,32},{26,111},{39,184}},{{7,-227},{44,110},{40,112}},{{74,-250},{26,111},{27,53}}}};
                int i, j, k;
                for (l_601 = 0; (l_601 <= 2); l_601 += 1)
                {
                    l_640[2][2][4] = l_543;
                    if (l_641)
                    {
                        if (g_196)
                            break;
                    }
                    else
                    {
                        int i;
                        l_543 = l_642[7][5][1];
                        l_642[7][5][1].f1 = ((safe_mod_func_int32_t_s_s(p_30, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((func_35(func_58((p_30 == 0x94AEL)), p_30, (g_327[l_601] = (255UL && (~(g_393[1] & l_627)))), l_513[2], p_29) > 0x7E60L), 1L)), 1)))) < l_463);
                    }
                }
                l_607 = (g_81 != g_104.f1);
            }
            for (l_512 = 0; (l_512 >= (-1)); l_512 = safe_sub_func_uint8_t_u_u(l_512, 7))
            {
                int l_663[1][10] = {{1L,(-7L),(-7L),1L,(-7L),(-7L),1L,(-7L),(-7L),1L}};
                int l_667 = 0x8D8E7C28L;
                int i, j;
                for (l_462 = 6; (l_462 >= 0); l_462 -= 1)
                {
                    int i;
                    if ((safe_mod_func_uint32_t_u_u(0UL, (safe_sub_func_int32_t_s_s(func_67((g_132 = (((0xF3L | g_104.f1) >= (safe_lshift_func_int16_t_s_u((l_667 = (((safe_mod_func_int32_t_s_s(p_28, (safe_mod_func_int16_t_s_s(((!((safe_mod_func_uint16_t_u_u((g_104.f0 != (g_43 >= (l_663[0][0] || (l_543.f1 = ((safe_mod_func_int32_t_s_s((!((g_77 = p_30) ^ (l_513[5] = p_29))), 1L)) | l_543.f1))))), g_81)) | l_666)) && l_513[l_462]), p_30)))) > 0UL) <= p_30)), 11))) >= g_393[1]))), l_663[0][0])))))
                    {
                        int i, j;
                        l_617[(l_462 + 1)][l_462] = l_617[l_462][l_462];
                        l_617[(l_462 + 1)][l_462] = l_668;
                    }
                    else
                    {
                        int l_675 = 0xA4B09743L;
                        l_513[(l_462 + 1)] = (safe_mod_func_uint8_t_u_u((3L > ((safe_add_func_uint32_t_u_u((!((0xE5A0L == (p_30 = (g_42 = ((safe_mod_func_uint32_t_u_u((((l_675 = g_77) <= g_132) == (l_680 = (((safe_mod_func_uint16_t_u_u(func_51(p_28, (safe_lshift_func_uint8_t_u_u((g_198[1] = l_666), 3))), g_530)) ^ ((l_668.f1 = g_2[5][1]) >= (-1L))) < 0x20L))), 0xD280B54DL)) >= (-1L))))) && g_42)), 0xBC24D66FL)) < 0x40L)), p_28));
                    }
                }
                for (g_42 = 0; (g_42 > 8); g_42++)
                {
                    g_104 = g_104;
                    for (p_29 = 4; (p_29 < (-14)); p_29--)
                    {
                        l_513[1] = l_685;
                        if (l_461)
                            goto lbl_686;
                        l_687 = (l_668 = l_668);
                        g_327[2] = (((p_28 == (l_680 > 1L)) != g_345) != l_688);
                    }
                }
            }
            if (l_462)
                continue;
        }
        for (g_345 = 0; (g_345 <= 3); g_345 += 1)
        {
            short l_710 = (-9L);
            int l_711 = 0x8EE5EBDFL;
            for (l_599 = 0; (l_599 <= 3); l_599 += 1)
            {
                int l_713 = (-2L);
                l_617[5][2].f1 = ((!(((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((l_640[2][2][4].f1 = func_67(g_75)), p_28)) && (safe_lshift_func_int8_t_s_s((p_30 || (0x94D5L <= (safe_sub_func_uint8_t_u_u(g_2[4][0], (safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s(((l_711 = (safe_rshift_func_int16_t_s_u((l_543.f1 = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_607 > (safe_lshift_func_uint8_t_u_u((((g_393[0] & (((safe_sub_func_int32_t_s_s(0x00577038L, g_104.f1)) != l_710) | 1UL)) >= g_345) == g_104.f1), l_710))), g_198[1])), p_29))), g_393[0]))) & 0x84DE065CL), 4294967294UL)))))))), g_75))), g_712[1][3])) != p_28) | l_601)) && l_713);
                for (g_75 = 0; (g_75 <= 3); g_75 += 1)
                {
                    l_711 = 0L;
                    return l_714;
                }
            }
            for (l_714 = 0; (l_714 <= 3); l_714 += 1)
            {
                struct S0 l_718 = {14,-89};
                for (g_81 = 0; (g_81 <= 3); g_81 += 1)
                {
                    for (l_512 = 3; (l_512 >= 0); l_512 -= 1)
                    {
                        struct S0 l_715 = {55,229};
                        int i, j;
                        g_104 = l_715;
                        g_104 = g_104;
                        l_513[(l_512 + 4)] = (safe_add_func_int32_t_s_s(g_712[g_345][(l_512 + 1)], (p_30 != 1L)));
                    }
                    l_718 = l_543;
                }
            }
            for (p_30 = 0; (p_30 <= 3); p_30 += 1)
            {
                struct S0 l_719[9] = {{40,70},{40,70},{40,70},{40,70},{40,70},{40,70},{40,70},{40,70},{40,70}};
                int i;
                if (l_599)
                    break;
                l_543 = l_719[1];
                return l_719[1].f1;
            }
        }
    }
    for (g_43 = 14; (g_43 < (-4)); g_43--)
    {
        struct S0 l_725 = {9,-11};
        struct S0 l_733 = {24,-243};
        unsigned char l_738 = 0xBCL;
        for (g_132 = (-26); (g_132 != (-3)); g_132++)
        {
            struct S0 l_728 = {33,-87};
            l_724[1][0] = g_530;
            l_725 = l_725;
            for (l_601 = 0; (l_601 >= 37); l_601++)
            {
                int l_732 = 0x6EC193A3L;
                char l_743[6][8][5] = {{{0x33L,8L,(-1L),0x23L,8L},{(-9L),(-1L),(-1L),0xEDL,(-1L)},{0x1FL,4L,1L,0x56L,0x23L},{0x93L,1L,4L,(-1L),0x30L},{0xDBL,0x00L,4L,(-9L),0xA5L},{0xA5L,0x93L,1L,2L,1L},{(-1L),(-1L),(-1L),0x33L,(-1L)},{0x56L,8L,0x23L,0L,0xE0L}},{{(-1L),(-1L),0x56L,0x30L,0L},{(-2L),0x0EL,0x64L,2L,0L},{1L,0L,1L,0x49L,0xA5L},{0x1FL,0L,0L,0xE0L,0x15L},{0x23L,1L,8L,0x64L,5L},{0x23L,(-1L),2L,0x1FL,0xDBL},{0x1FL,0xA4L,(-2L),0xA4L,0x1FL},{1L,0L,0xA5L,0L,0L}},{{(-2L),0x30L,(-1L),4L,1L},{(-1L),(-1L),1L,0L,0L},{1L,4L,0x86L,(-1L),0x1FL},{0L,1L,0x49L,0xA5L,0xDBL},{0x49L,0xFAL,0x1FL,0x00L,5L},{(-1L),2L,0xE0L,0x00L,0x15L},{0L,0L,(-1L),0xA5L,0xA5L},{(-9L),0x33L,(-9L),(-1L),0L}},{{0xEDL,0xE0L,(-1L),0L,0L},{0L,0x86L,(-1L),4L,0xE0L},{0xFAL,0x64L,(-1L),8L,0xFAL},{0xE0L,0xFAL,(-1L),(-1L),0xA4L},{0x15L,1L,0L,0x23L,1L},{(-2L),0L,0xA5L,0x30L,0xE0L},{0xEDL,0L,0x23L,0xA5L,(-1L)},{0x0EL,1L,1L,1L,1L}},{{0xA5L,0xFAL,(-9L),(-1L),8L},{0xA4L,0x30L,0x0EL,5L,0L},{1L,(-9L),0x49L,0L,0L},{0xA4L,0xA5L,0x00L,0x93L,0x49L},{0xA5L,0xEDL,0xFAL,(-2L),4L},{0x0EL,8L,(-1L),0L,0xDBL},{0xEDL,(-1L),(-1L),2L,0xDBL},{(-2L),0x56L,0L,(-1L),4L}},{{0x15L,(-1L),(-1L),0x15L,0x49L},{0xE0L,0xDBL,0x30L,(-1L),0L},{0x56L,0xA4L,1L,0L,0L},{0x93L,5L,1L,(-1L),8L},{0L,0L,2L,0x15L,1L},{(-1L),(-1L),0xA4L,0xDBL,0L},{(-9L),0L,0x56L,5L,(-1L)},{1L,0xA4L,0x56L,0x15L,(-1L)}}};
                short l_763[4][10][6] = {{{0x862CL,1L,0x1D61L,0xF7CCL,0x859BL,0x862CL},{(-1L),0x3D95L,0x9ED9L,(-2L),(-6L),0x7B25L},{0xC760L,0x3D95L,0xA800L,0x9FFFL,0x859BL,(-1L)},{0xB706L,1L,0x9FFFL,6L,6L,0x9FFFL},{(-6L),(-6L),0x862CL,0x1D61L,(-2L),0xCD2BL},{0x862CL,0L,0x56C9L,0x9ED9L,(-1L),0x862CL},{0x7B25L,0x862CL,0x56C9L,0xA800L,(-6L),0xCD2BL},{(-1L),0xA800L,0x862CL,0x9FFFL,0x67D3L,0x9FFFL},{0x9FFFL,0x67D3L,0x9FFFL,0x862CL,0xA800L,(-1L)},{0xCD2BL,(-6L),0xA800L,0x56C9L,0x862CL,0x7B25L}},{{0x862CL,(-1L),0x9ED9L,0x56C9L,0L,0x862CL},{0xCD2BL,(-2L),0x1D61L,0x862CL,(-6L),(-6L)},{0x9FFFL,6L,6L,0x9FFFL,1L,0xB706L},{(-1L),0x859BL,0x9FFFL,0xA800L,0x3D95L,(-1L)},{0x9FFFL,0xB706L,(-1L),(-1L),0x9ED9L,(-6L)},{0xF7CCL,0x862CL,0xCD2BL,0x7B25L,(-2L),0xF7CCL},{0xB706L,0x1D61L,(-7L),0x1D61L,0xB706L,(-1L)},{0x859BL,(-1L),0x9ED9L,0L,0x3D95L,1L},{(-1L),6L,0L,(-1L),0xF7CCL,1L},{(-6L),0xB706L,0x9ED9L,0xCD2BL,0x56C9L,(-1L)}},{{0xF7CCL,0xA800L,(-7L),(-7L),0xA800L,0xF7CCL},{(-1L),0x56C9L,0xCD2BL,0x9ED9L,0xB706L,(-6L)},{1L,0xF7CCL,(-1L),0L,6L,(-1L)},{1L,0x3D95L,0L,0x9ED9L,(-1L),0x859BL},{(-1L),0xB706L,0x1D61L,(-7L),0x1D61L,0xB706L},{0xF7CCL,(-2L),0x7B25L,0xCD2BL,0x862CL,0xF7CCL},{(-6L),0x9ED9L,(-1L),(-1L),0xB706L,0x9FFFL},{(-1L),0x9ED9L,0x56C9L,0L,0x862CL,0x67D3L},{0x859BL,(-2L),0L,0x1D61L,0x1D61L,0L},{0xB706L,0xB706L,0xF7CCL,0x7B25L,(-1L),6L}},{{0xC760L,(-1L),0x859BL,1L,0x7B25L,0xC760L},{0x3D95L,0xC760L,0x859BL,0xB706L,0x862CL,6L},{0x56C9L,0xB706L,0xC760L,0x9ED9L,(-6L),0x9ED9L},{0x9ED9L,(-6L),0x9ED9L,0xC760L,0xB706L,0x56C9L},{6L,0x862CL,0xB706L,0x859BL,0xC760L,0x3D95L},{0xC760L,0x7B25L,1L,0x859BL,(-1L),0xC760L},{6L,(-1L),0L,0xC760L,0x862CL,0x862CL},{0x9ED9L,0x9FFFL,0x9FFFL,0x9ED9L,(-7L),0xF7CCL},{0x56C9L,0xCD2BL,0x9ED9L,0xB706L,(-6L),0x1D61L},{0x3D95L,0x862CL,(-1L),1L,(-6L),(-2L)}}};
                int i, j, k;
                for (g_81 = 3; (g_81 >= 0); g_81 -= 1)
                {
                    for (p_28 = 0; (p_28 <= 2); p_28 += 1)
                    {
                        int l_729 = 5L;
                        int i;
                        l_728 = g_104;
                        if (g_393[p_28])
                            continue;
                        l_543 = l_543;
                        l_729 = g_393[p_28];
                    }
                }
                for (g_77 = 18; (g_77 < (-8)); --g_77)
                {
                    int l_737 = 0xAA2EA0D6L;
                    int l_744[1][10] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}};
                    int i, j;
                    l_732 = p_28;
                    if (g_198[0])
                        break;
                    for (l_512 = 0; (l_512 <= 2); l_512 += 1)
                    {
                        struct S0 l_734 = {19,-70};
                        unsigned l_742 = 3UL;
                        int i;
                        l_734 = l_733;
                        l_734 = l_543;
                        l_744[0][4] = (safe_sub_func_uint8_t_u_u((l_738 = ((g_327[l_512] == g_327[2]) || l_737)), func_51((l_728.f1 = ((safe_unary_minus_func_uint16_t_u((l_743[3][2][0] = (((safe_sub_func_uint16_t_u_u((((251UL != ((g_464 = 1UL) > 1L)) > (g_198[1] = 0x7EL)) < (l_732 | (func_51(l_724[1][1], g_42) <= (-1L)))), l_742)) || 1UL) ^ 1L)))) > 0x0FAC2277L)), g_75)));
                        l_732 = l_601;
                    }
                }
                g_104.f1 = (func_67(p_30) >= g_104.f1);
                if (((g_530 = (func_51((l_732 = (safe_lshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_512 & p_30), (g_104.f1 && (l_763[0][8][2] = (l_728.f1 = ((l_725.f1 & (safe_mod_func_uint16_t_u_u((g_104.f0 <= (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(p_29, 1L)) && 0xA0FBL), 3))), ((safe_sub_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(l_728.f1, 0x40L)) <= p_28), p_29)) || 0xF6L)))) || (-1L))))))), l_732)), g_104.f1)) > p_29) == g_530), 5))), l_462) == p_28)) & p_30))
                {
                    struct S0 l_764 = {55,210};
                    if (p_29)
                        break;
                    l_728 = l_764;
                }
                else
                {
                    for (p_29 = 5; (p_29 == 5); p_29++)
                    {
                        l_543 = g_104;
                        if (p_29)
                            break;
                    }
                    g_104.f1 = ((l_728.f1 | l_743[3][2][0]) >= p_29);
                }
            }
            g_327[0] = (safe_sub_func_int32_t_s_s(p_29, func_51(g_81, l_725.f1)));
        }
        g_104.f1 = p_29;
        for (g_75 = 0; (g_75 <= 3); g_75 += 1)
        {
            struct S0 l_769 = {15,-251};
            int i;
            l_512 = g_198[g_75];
            if (p_30)
                break;
            l_769 = g_104;
            if (g_77)
                continue;
        }
        g_327[2] = (l_461 <= p_29);
    }
    return g_712[1][3];
}







static unsigned short func_35(int p_36, unsigned p_37, int p_38, unsigned char p_39, short p_40)
{
    int l_64 = (-8L);
    int l_69 = 0xF9D99D06L;
    int l_82 = 0x10DA9BE8L;
    unsigned short l_266 = 0x7274L;
    int l_267 = 0x7EB3BFC8L;
    p_38 = ((((safe_rshift_func_uint16_t_u_s((((((~g_42) | func_46((l_267 = (safe_add_func_uint32_t_u_u((((((func_51((safe_sub_func_uint16_t_u_u(((g_42 >= (safe_sub_func_uint32_t_u_u(func_58(((g_43 || (((-6L) >= p_36) ^ (((safe_mod_func_int8_t_s_s((((g_42 == ((safe_rshift_func_uint16_t_u_u((l_64 > (safe_add_func_int8_t_s_s(func_67((0L || (l_69 = (g_43 & 0x5ED53545L)))), 0L))), g_75)) && 4294967295UL)) != l_82) <= 0xA5L), 1L)) ^ 0x4C0FL) || 0x069ABC45L))) ^ l_82)), g_42))) & g_2[5][1]), 65527UL)), g_42) > l_266) <= p_40) <= p_37) & g_2[2][3]) | p_38), g_42))), g_42)) || g_196) && 65526UL) | l_82), 2)) >= g_2[5][1]) > l_64) ^ p_39);
    return g_327[2];
}







static short func_46(unsigned p_47, unsigned p_48)
{
    unsigned l_268 = 0x05DC7098L;
    int l_279 = 0xAA7E5032L;
    unsigned char l_352 = 1UL;
    int l_366[5][4][1] = {{{0x69133A3FL},{(-1L)},{0x69133A3FL},{(-1L)}},{{0x69133A3FL},{(-1L)},{0x69133A3FL},{(-1L)}},{{0x69133A3FL},{(-1L)},{0x69133A3FL},{(-1L)}},{{0x69133A3FL},{(-1L)},{0x69133A3FL},{(-1L)}},{{0x69133A3FL},{(-1L)},{0x69133A3FL},{(-1L)}}};
    struct S0 l_415 = {24,-138};
    int i, j, k;
    g_104.f1 = (((p_48 && func_51(g_42, l_268)) <= (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_s((l_268 ^ (((l_268 && l_268) != (safe_rshift_func_int16_t_s_s(g_2[5][1], 6))) <= (l_279 = ((safe_add_func_uint16_t_u_u(0x5F89L, l_268)) ^ g_75)))), 2))), p_47)), g_196))) <= p_48);
    if (((+p_48) == (g_104.f1 = (func_67(g_2[7][1]) & (g_104.f0 && g_43)))))
    {
        unsigned short l_282 = 8UL;
        int l_293 = 0L;
        int l_328 = 0x1760703FL;
        unsigned short l_344 = 0xA66EL;
        struct S0 l_399 = {47,-193};
        struct S0 l_414 = {49,237};
        l_279 = (func_58(func_58(g_2[5][1])) != 0x5AL);
        if (g_42)
        {
            unsigned char l_292[5][8] = {{0x68L,0x50L,0UL,0x50L,0x68L,0x50L,0UL,0x50L},{0x68L,0x50L,0UL,0x50L,0x68L,0x50L,0UL,0x50L},{0x68L,0x50L,0UL,0x50L,0x68L,0x50L,0UL,0x50L},{0x68L,0x50L,0UL,0x50L,0x68L,0x50L,0UL,0x50L},{0x68L,0x50L,0UL,0x50L,0x68L,0x50L,0UL,0x50L}};
            int l_297 = 0x56F0ABEDL;
            int l_367[4] = {(-1L),(-1L),(-1L),(-1L)};
            int l_392 = 5L;
            struct S0 l_398[4] = {{76,153},{76,153},{76,153},{76,153}};
            int l_411 = 0xFA3FA230L;
            int i, j;
            if ((safe_rshift_func_int8_t_s_u((func_58(((~p_47) | 65535UL)) < 1L), (l_282 = l_268))))
            {
                int l_305 = 0L;
                int l_355[2][8][6] = {{{1L,0xBB8262D4L,0x43B7EC15L,(-1L),3L,(-1L)},{0xFD661C10L,0x43B7EC15L,0x10BCB708L,0L,0x315FED4AL,0xCD1A0305L},{0xFD661C10L,(-1L),0L,(-1L),0xFD661C10L,3L},{1L,3L,0x315FED4AL,0xFD661C10L,0xCD1A0305L,0xE1E20A6AL},{0xD53330EEL,(-1L),0xCD1A0305L,3L,0xE1E20A6AL,0xE1E20A6AL},{0L,0x315FED4AL,0x315FED4AL,0L,0L,3L},{0xE1E20A6AL,3L,0L,0xBB8262D4L,(-1L),0xCD1A0305L},{0L,0xD53330EEL,0x10BCB708L,(-1L),(-1L),(-1L)}},{{0x43B7EC15L,3L,0x43B7EC15L,0x315FED4AL,(-1L),3L},{0xBB8262D4L,0xCD1A0305L,0L,0x43B7EC15L,1L,(-1L)},{0xE1E20A6AL,(-1L),0x315FED4AL,0x43B7EC15L,0x43B7EC15L,0x315FED4AL},{0xBB8262D4L,0xBB8262D4L,0xD53330EEL,0x315FED4AL,0L,3L},{3L,0L,0xBB8262D4L,(-1L),0xCD1A0305L,0xD53330EEL},{0L,3L,0xBB8262D4L,0xE1E20A6AL,0xBB8262D4L,3L},{1L,0xE1E20A6AL,0xD53330EEL,(-1L),0x10BCB708L,0x315FED4AL},{(-1L),0x10BCB708L,0x315FED4AL,0xBB8262D4L,0xFD661C10L,(-1L)}}};
                int i, j, k;
                g_81 = 0x4B7221A5L;
                g_104.f1 = (p_48 ^ g_42);
                for (g_43 = 0; (g_43 < (-17)); g_43 = safe_sub_func_int8_t_s_s(g_43, 5))
                {
                    unsigned l_296 = 0x7C7E432CL;
                    int l_314 = 0L;
                    struct S0 l_368[3][4][5] = {{{{89,90},{65,-243},{89,90},{65,-243},{89,90}},{{8,159},{8,159},{8,159},{8,159},{8,159}},{{89,90},{65,-243},{89,90},{65,-243},{89,90}},{{8,159},{8,159},{8,159},{8,159},{8,159}}},{{{89,90},{65,-243},{89,90},{65,-243},{89,90}},{{8,159},{8,159},{8,159},{8,159},{8,159}},{{89,90},{65,-243},{89,90},{65,-243},{89,90}},{{8,159},{8,159},{8,159},{8,159},{8,159}}},{{{89,90},{65,-243},{89,90},{65,-243},{89,90}},{{8,159},{8,159},{8,159},{8,159},{8,159}},{{89,90},{65,-243},{89,90},{65,-243},{89,90}},{{8,159},{8,159},{8,159},{8,159},{8,159}}}};
                    int i, j, k;
                    for (g_132 = 0; (g_132 <= 3); g_132 += 1)
                    {
                        short l_285 = 0x3237L;
                        int l_298 = (-5L);
                        g_104.f1 = l_285;
                        l_297 = (((safe_mod_func_uint16_t_u_u((func_51(g_104.f0, g_132) < (((safe_rshift_func_uint8_t_u_s(0x83L, 3)) && (g_196 = (((safe_lshift_func_uint8_t_u_s((((-10L) & g_196) || ((l_293 = l_292[1][6]) && ((safe_add_func_uint8_t_u_u(l_296, p_48)) != 0xBDL))), g_196)) < g_42) >= p_47))) && 65528UL)), g_2[5][1])) == 4294967295UL) >= g_75);
                        l_298 = p_47;
                    }
                    if (func_51(g_2[3][2], ((g_104.f1 = (65535UL != (((((safe_rshift_func_uint8_t_u_s(l_296, (g_198[3] || (safe_mod_func_int16_t_s_s(g_42, (safe_sub_func_int8_t_s_s(l_305, ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_282 && g_104.f0), (func_51(((~(safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(((0x20E37520L > 0xAA7FC385L) | l_293), (-7L))), p_48))) < 1L), p_47) == (-6L)))), (-2L))) && 65527UL)))))))) & p_48) > g_42) | p_47) || g_77))) <= l_292[2][6])))
                    {
                        l_314 = (g_104.f1 | p_48);
                    }
                    else
                    {
                        int l_329 = 0x8338062DL;
                        l_328 = ((((l_293 = (l_268 > 0x7BCCL)) ^ ((safe_mod_func_int8_t_s_s(((l_282 == (safe_mod_func_uint32_t_u_u((func_51(p_47, g_2[7][3]) || (safe_sub_func_uint32_t_u_u((func_67((safe_lshift_func_int8_t_s_s(p_47, 1))) && (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(g_2[5][1], g_327[2])), g_2[5][1]))), 0x5AA627CFL))), 0x6DC5CBEBL))) & (-7L)), l_268)) & 0x5CL)) ^ p_47) <= l_279);
                        l_329 = ((l_329 != l_305) | func_67((((safe_add_func_int16_t_s_s(p_47, (g_345 = ((safe_add_func_uint32_t_u_u((+(p_48 = ((safe_rshift_func_uint16_t_u_s((((l_305 ^ (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((l_293 = (p_47 | (l_329 | (((p_47 ^ (((p_47 < ((safe_sub_func_uint32_t_u_u(((((func_51(l_293, p_48) == (-1L)) != p_48) & l_268) >= l_314), p_47)) && 0x0A03L)) ^ p_48) && p_47)) && 0xB396L) < l_344)))), 0L)), 0x5ABE0D1BL)), g_198[1]))) || 1UL) || g_327[0]), l_268)) >= 0L))), l_305)) || p_48)))) <= g_198[1]) && 4294967295UL)));
                        l_355[1][2][0] = (l_292[1][6] <= ((g_196 > (g_198[1] = (safe_sub_func_int8_t_s_s((func_51((safe_mod_func_int16_t_s_s((((p_48 = p_48) ^ 0xB10E3C8DL) & ((((((func_67((p_47 ^ (l_352 > (((l_279 = g_132) > (safe_sub_func_int8_t_s_s((l_355[1][2][0] = (-10L)), (safe_add_func_int16_t_s_s(l_314, 0x5CA1L))))) != l_314)))) ^ p_47) && 0xC8L) != g_132) < p_47) > 0xFAC195F4L) > 65530UL)), p_47)), l_268) && g_198[1]), 0x7AL)))) > 0x15L));
                        if (g_196)
                            break;
                    }
                    if (g_198[1])
                        continue;
                    for (g_345 = (-8); (g_345 > 39); g_345 = safe_add_func_int16_t_s_s(g_345, 5))
                    {
                        l_367[2] = (l_297 = ((+(l_328 > (safe_sub_func_uint16_t_u_u(((((g_198[0] == l_352) ^ g_42) || ((l_279 = func_67(p_48)) | (l_366[1][0][0] = ((safe_add_func_int32_t_s_s(g_43, 0x0F550712L)) >= (safe_mod_func_uint32_t_u_u(g_327[1], 0x7B06B84CL)))))) < 0x52L), 0x0CEBL)))) <= p_48));
                        g_104 = g_104;
                        g_104 = l_368[2][3][3];
                    }
                }
            }
            else
            {
                unsigned short l_391 = 0UL;
                struct S0 l_395 = {74,-76};
                for (p_48 = 0; (p_48 <= 2); p_48 += 1)
                {
                    int l_373 = 0x0C7E5D2DL;
                    int l_374 = 0L;
                    int i;
                    g_327[p_48] = (-1L);
                    g_104.f1 = g_327[p_48];
                    if ((0x57AEL == (((((!((g_196 = func_51(((l_373 = (safe_mod_func_uint8_t_u_u((g_327[p_48] = (0xE0L && ((g_327[p_48] ^ ((p_47 & ((g_104.f1 < (func_67(g_132) > ((1UL <= (safe_rshift_func_int8_t_s_u(g_104.f1, p_47))) && 8L))) && g_327[p_48])) & 0xA5L)) > 0xFBL))), l_367[2]))) != 5L), l_292[1][6])) >= p_47)) <= 5L) && g_196) <= l_374) | l_297)))
                    {
                        unsigned char l_394 = 0UL;
                        if (l_366[1][3][0])
                            break;
                        l_373 = (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((g_42 && (((safe_add_func_int32_t_s_s(p_48, (((+g_345) >= (l_394 = ((g_327[p_48] = 1L) >= ((safe_mod_func_uint8_t_u_u(((-1L) | (safe_mod_func_int8_t_s_s(0L, (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_77, func_51((((safe_lshift_func_uint8_t_u_u((l_391 & (l_391 ^ p_48)), 6)) < g_43) ^ 0x8FL), g_104.f1))), l_392))))), 0x1FL)) | g_393[0])))) <= p_47))) | g_198[1]) <= g_345)), 0x65C005C1L)), p_48));
                        return p_47;
                    }
                    else
                    {
                        g_104 = l_395;
                        l_328 = 0L;
                    }
                }
            }
            for (l_392 = 0; (l_392 < (-15)); l_392 = safe_sub_func_int16_t_s_s(l_392, 5))
            {
                struct S0 l_400 = {38,-190};
                g_104 = l_398[1];
                l_400 = l_399;
                for (l_328 = 0; (l_328 <= 3); l_328 += 1)
                {
                    unsigned char l_403 = 0xCBL;
                    for (g_81 = 0; (g_81 <= 3); g_81 += 1)
                    {
                        g_327[2] = (-1L);
                        l_400.f1 = (safe_add_func_int32_t_s_s(0x8A1C0AF5L, (l_403 = (g_43 >= p_47))));
                    }
                    g_327[2] = (+((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((+(((g_104.f0 = g_42) >= (safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(((g_43 != l_268) || 0x093DL), (p_48 != l_411)))))) | l_398[1].f1)), (safe_add_func_uint32_t_u_u((g_327[2] <= (0x6AL <= g_198[1])), p_47)))), g_43)) && (-1L)) | 0x052DF016L) || l_366[4][3][0]));
                }
            }
        }
        else
        {
            int l_422[6];
            int i;
            for (i = 0; i < 6; i++)
                l_422[i] = 0x3BEA31BEL;
            l_415 = l_414;
            l_422[0] = func_67((safe_sub_func_uint16_t_u_u((func_58(p_47) != (safe_mod_func_uint32_t_u_u(g_327[0], (safe_lshift_func_int8_t_s_u((-1L), 5))))), (g_345 == 0xA81BL))));
            return l_422[3];
        }
    }
    else
    {
        int l_431 = 1L;
        unsigned char l_447 = 0UL;
        l_415 = g_104;
        for (g_345 = 0; (g_345 == 39); g_345++)
        {
            short l_438 = 0L;
            int l_439 = 1L;
            int l_440 = 0x16AD1CE2L;
            for (l_268 = (-12); (l_268 <= 7); l_268 = safe_add_func_int8_t_s_s(l_268, 4))
            {
                l_440 = ((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((((l_439 = (((p_47 = (l_431 = (0x09BAB7CAL || l_366[1][0][0]))) && (safe_sub_func_uint16_t_u_u(g_327[2], ((1L <= 4294967286UL) <= (g_104.f0 = p_47))))) && (safe_mod_func_uint32_t_u_u(((l_366[2][3][0] = func_58(p_48)) >= (((((safe_sub_func_uint8_t_u_u(g_42, 1L)) && 0x18E4L) ^ g_393[0]) < l_438) >= 0x59L)), 0x210B337BL)))) ^ p_48) ^ g_2[5][1]) ^ 2L), 13)), g_327[0])) ^ 0x782E7964L);
            }
            l_279 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(l_431, (safe_sub_func_uint16_t_u_u(l_447, (0L >= (l_366[4][0][0] = 0xCFL)))))), 3));
        }
        g_327[2] = ((l_279 = 6UL) != l_268);
    }
    return g_132;
}







static int func_51(unsigned p_52, int p_53)
{
    unsigned char l_264[5][7][4] = {{{0x33L,1UL,0xFAL,4UL},{0xE7L,0xA4L,0xD8L,0xDDL},{0x9AL,0x0CL,0x37L,0xBAL},{1UL,255UL,0UL,0UL},{1UL,0x41L,0UL,0x4EL},{0xA8L,255UL,4UL,0x15L},{0x0CL,0x31L,0x5EL,255UL}},{{0xDEL,4UL,251UL,0x5CL},{0x5CL,0x94L,0x5CL,0x33L},{0UL,253UL,255UL,0xA6L},{1UL,0xBAL,0x94L,253UL},{0xA6L,0xFAL,0x94L,0xD8L},{1UL,1UL,255UL,0x0CL},{0UL,0x90L,0x5CL,0xE7L}},{{0x5CL,0xE7L,251UL,0xA8L},{0xDEL,0xDDL,0x5EL,253UL},{0x0CL,0x5EL,4UL,251UL},{0xA8L,0UL,0UL,1UL},{1UL,1UL,0UL,0UL},{1UL,255UL,0x37L,0x37L},{0x9AL,0x9AL,0xD8L,0x5EL}},{{0xE7L,252UL,0x0CL,0x15L},{4UL,0x9AL,0xA6L,0x0CL},{0x5CL,0x9AL,0x90L,0x15L},{0x9AL,0xA8L,0x94L,0x44L},{0x4EL,255UL,0x09L,0x9AL},{0xBAL,0xD8L,0x4EL,0x41L},{0x33L,0x4BL,0xD8L,0x94L}},{{0x08L,1UL,4UL,0x4EL},{1UL,0x44L,253UL,0x33L},{0xFDL,0xBAL,0x08L,255UL},{252UL,0UL,0xE7L,0UL},{0x90L,252UL,1UL,0x09L},{0xA4L,0x94L,0UL,255UL},{0x31L,0x0CL,1UL,0x37L}}};
    short l_265 = 0xAE0BL;
    int i, j, k;
    g_81 = (((-1L) || (safe_sub_func_uint8_t_u_u((l_264[2][1][3] = 0x44L), 1UL))) && (l_265 = p_52));
    return l_265;
}







static unsigned func_58(short p_59)
{
    struct S0 l_83[7] = {{5,70},{85,-223},{85,-223},{5,70},{85,-223},{85,-223},{5,70}};
    char l_97 = 0x8DL;
    int l_99 = 0xD316F545L;
    char l_109 = 0L;
    int l_151 = 7L;
    char l_152 = 0xD0L;
    unsigned short l_159 = 1UL;
    int i;
lbl_249:
    for (g_75 = 1; (g_75 <= 6); g_75 += 1)
    {
        unsigned short l_92 = 0x7548L;
        int l_98 = 0x2FD92DD8L;
        struct S0 l_103 = {82,62};
        int l_129 = (-8L);
        if ((safe_sub_func_uint32_t_u_u(9UL, (l_99 = (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_67((l_92 = g_43)), (0UL || ((((g_42 & p_59) < g_2[8][1]) & (safe_sub_func_int16_t_s_s(l_97, l_98))) < p_59)))), g_75)), p_59))))))
        {
            struct S0 l_100 = {25,-172};
            int i;
            l_83[g_75] = l_83[g_75];
            if (g_2[5][1])
            {
                l_100 = (l_83[0] = l_83[3]);
                return p_59;
            }
            else
            {
                struct S0 l_101 = {19,154};
                for (l_98 = 5; (l_98 >= 0); l_98 -= 1)
                {
                    struct S0 l_102 = {65,101};
                    if ((!g_77))
                    {
                        int i;
                        l_101 = (l_83[l_98] = l_83[l_98]);
                    }
                    else
                    {
                        l_102 = l_101;
                        g_104 = (l_103 = l_83[3]);
                    }
                    if (g_43)
                    {
                        short l_105[1][5];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_105[i][j] = 0xE414L;
                        }
                        l_102 = g_104;
                        l_99 = ((l_105[0][4] = p_59) && ((0xA0AA596AL != (safe_add_func_uint8_t_u_u(p_59, l_103.f0))) >= func_67(g_104.f1)));
                        if (l_105[0][1])
                            continue;
                    }
                    else
                    {
                        unsigned char l_108 = 0xC5L;
                        l_109 = (((func_67((g_43 = (g_75 ^ l_108))) == g_75) < (p_59 == (g_104.f1 ^ 0xB525L))) < p_59);
                    }
                    l_101.f1 = ((func_67(p_59) <= (safe_sub_func_uint8_t_u_u(0xAAL, (l_101.f1 > p_59)))) & (safe_unary_minus_func_uint8_t_u((l_101.f1 ^ l_101.f1))));
                }
            }
        }
        else
        {
            unsigned short l_115 = 65528UL;
            int l_136[2];
            int i;
            for (i = 0; i < 2; i++)
                l_136[i] = 0x57B996F1L;
            l_103 = g_104;
            for (g_43 = 0; (g_43 >= 7); g_43 = safe_add_func_uint16_t_u_u(g_43, 4))
            {
                short l_116[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_116[i] = 0L;
                for (g_77 = 6; (g_77 >= 0); g_77 -= 1)
                {
                    l_116[0] = l_115;
                }
            }
            if ((safe_sub_func_uint16_t_u_u(func_67((p_59 & ((safe_mod_func_int8_t_s_s((p_59 & (func_67(p_59) <= 4294967293UL)), g_42)) & (l_97 > ((safe_mod_func_int8_t_s_s(g_42, l_98)) & p_59))))), 0xA0C2L)))
            {
                unsigned char l_127 = 1UL;
                int l_128 = 0x99312A2FL;
                struct S0 l_130 = {38,-28};
                if (((safe_rshift_func_int8_t_s_s((l_128 = (0UL != ((l_99 = ((l_115 && g_2[5][1]) >= ((l_127 = ((g_104.f1 = (p_59 | ((g_42 > p_59) == (func_67((g_43 = g_42)) < l_92)))) > p_59)) & 0x8B9EL))) && p_59))), l_97)) && g_104.f0))
                {
                    if (g_43)
                        break;
                    if (p_59)
                        goto lbl_153;
                    return l_129;
                }
                else
                {
                    if (g_81)
                        break;
                    g_104 = l_130;
                    g_81 = g_81;
                    g_81 = l_97;
                }
            }
            else
            {
                unsigned short l_135 = 65528UL;
                for (g_77 = 0; (g_77 <= 6); g_77 += 1)
                {
                    int i;
                    l_83[g_75] = l_83[g_77];
                    if (g_104.f1)
                        continue;
                    for (l_92 = 2; (l_92 <= 6); l_92 += 1)
                    {
                        unsigned short l_131 = 65535UL;
                        l_99 = l_103.f1;
                        l_136[1] = (((g_132 = l_131) > ((safe_rshift_func_uint8_t_u_s(g_81, ((p_59 == l_103.f1) ^ g_2[7][3]))) > (1UL <= p_59))) > (l_135 = g_2[5][1]));
                        l_83[g_75].f1 = 0x56CCD2ECL;
                    }
                }
            }
        }
    }
lbl_153:
    l_99 = (func_67(l_99) ^ ((((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(p_59, ((l_99 > ((((safe_add_func_uint16_t_u_u(l_97, (safe_sub_func_uint8_t_u_u((l_151 = (safe_add_func_int8_t_s_s(p_59, (safe_add_func_uint8_t_u_u(l_97, (safe_mod_func_uint16_t_u_u((0x8287L >= g_2[5][1]), 0x3EFBL))))))), p_59)))) <= l_99) || p_59) & g_104.f1)) != l_152))), p_59)) ^ g_43) >= g_2[4][2]) != l_152));
    for (p_59 = (-17); (p_59 < (-5)); p_59++)
    {
        char l_156 = 0x4CL;
        int l_176 = 0L;
        unsigned short l_244 = 0xACD6L;
        if (l_156)
            break;
        for (l_152 = 20; (l_152 <= (-19)); l_152 = safe_sub_func_int32_t_s_s(l_152, 8))
        {
            unsigned short l_165 = 2UL;
            int l_175 = 1L;
            l_159 = p_59;
            if ((func_67(g_42) >= 1L))
            {
                unsigned l_160[10] = {0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL,0xA8B7766AL};
                int l_174 = 0xC06DED90L;
                int i;
                l_160[7] = (~func_67(l_156));
                for (l_151 = 0; (l_151 == (-24)); --l_151)
                {
                    l_176 = ((safe_sub_func_int16_t_s_s((l_165 = l_160[7]), (safe_mod_func_uint32_t_u_u((p_59 != (l_174 = func_67((((((safe_sub_func_int8_t_s_s((func_67((safe_mod_func_int32_t_s_s((p_59 | (safe_rshift_func_int16_t_s_u(p_59, 4))), p_59))) == (4294967291UL ^ p_59)), ((1UL < l_99) > g_75))) >= p_59) <= l_151) & g_2[4][2]) < 0xFB35L)))), l_175)))) < 0x5FL);
                }
                if (g_43)
                    break;
            }
            else
            {
                l_99 = p_59;
            }
        }
        for (g_132 = (-21); (g_132 >= (-8)); g_132++)
        {
            unsigned short l_181[9] = {0x4C01L,0x4C01L,0x4C01L,0x4C01L,0x4C01L,0x4C01L,0x4C01L,0x4C01L,0x4C01L};
            int l_195[1];
            int l_197 = (-7L);
            int i;
            for (i = 0; i < 1; i++)
                l_195[i] = 0xC49320D1L;
            if (((0xE322D520L == g_132) ^ ((+p_59) >= func_67(func_67((safe_rshift_func_int8_t_s_u((p_59 & (l_151 = l_181[4])), (safe_mod_func_uint32_t_u_u((0x97L != ((safe_lshift_func_int8_t_s_s(l_159, 2)) <= (safe_sub_func_int32_t_s_s((g_2[3][2] <= g_2[5][1]), g_104.f0)))), g_104.f1)))))))))
            {
                unsigned l_192[3][10][8] = {{{0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L},{0x73D5C985L,4294967292UL,0x73D5C985L,0x188B84FAL,0x188B84FAL,0x73D5C985L,4294967292UL,0x73D5C985L},{0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L},{0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L},{4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L},{0x4EFA1E05L,0x188B84FAL,0x66AC9901L,0x66AC9901L,0x188B84FAL,0x4EFA1E05L,0x188B84FAL,0x66AC9901L},{4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL},{0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L},{0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L},{4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L}},{{0x4EFA1E05L,0x188B84FAL,0x66AC9901L,0x66AC9901L,0x188B84FAL,0x4EFA1E05L,0x188B84FAL,0x66AC9901L},{4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL},{0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L},{0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x73D5C985L},{0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L},{0x73D5C985L,0x66AC9901L,4294967292UL,4294967292UL,0x66AC9901L,0x73D5C985L,0x66AC9901L,4294967292UL},{0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L},{0x188B84FAL,0x73D5C985L,4294967292UL,0x73D5C985L,0x188B84FAL,0x188B84FAL,0x73D5C985L,4294967292UL},{0x188B84FAL,0x188B84FAL,0x73D5C985L,4294967292UL,0x73D5C985L,0x188B84FAL,0x188B84FAL,0x73D5C985L},{0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L}},{{0x73D5C985L,0x66AC9901L,4294967292UL,4294967292UL,0x66AC9901L,0x73D5C985L,0x66AC9901L,4294967292UL},{0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L},{0x188B84FAL,0x73D5C985L,4294967292UL,0x73D5C985L,0x188B84FAL,0x188B84FAL,0x73D5C985L,4294967292UL},{0x188B84FAL,0x188B84FAL,0x73D5C985L,4294967292UL,0x73D5C985L,0x188B84FAL,0x188B84FAL,0x73D5C985L},{0x4EFA1E05L,0x73D5C985L,0x73D5C985L,0x4EFA1E05L,0x66AC9901L,0x4EFA1E05L,0x73D5C985L,0x73D5C985L},{0x73D5C985L,0x66AC9901L,4294967292UL,4294967292UL,0x66AC9901L,0x73D5C985L,0x73D5C985L,0x188B84FAL},{0x66AC9901L,0x73D5C985L,0x66AC9901L,4294967292UL,4294967292UL,0x66AC9901L,0x73D5C985L,0x66AC9901L},{0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL},{0x4EFA1E05L,0x4EFA1E05L,4294967292UL,0x188B84FAL,4294967292UL,0x4EFA1E05L,0x4EFA1E05L,4294967292UL},{0x66AC9901L,4294967292UL,4294967292UL,0x66AC9901L,0x73D5C985L,0x66AC9901L,4294967292UL,4294967292UL}}};
                int i, j, k;
                for (l_152 = 6; (l_152 == (-12)); l_152--)
                {
                    unsigned l_208 = 0x60699C98L;
                    for (l_151 = 4; (l_151 >= 0); l_151 -= 1)
                    {
                        if (p_59)
                            break;
                        g_104.f1 = (l_197 = ((g_196 = (safe_sub_func_int8_t_s_s((l_192[1][4][1] | (l_195[0] = (l_99 = (safe_mod_func_uint32_t_u_u(g_43, g_75))))), g_42))) & func_67(l_176)));
                        return g_198[1];
                    }
                    for (l_97 = 0; (l_97 >= (-14)); --l_97)
                    {
                        int l_207 = 0xFCEFCC5AL;
                        l_208 = (safe_mod_func_int16_t_s_s(0L, (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((l_207 = func_67(p_59)), 0x8961L)), g_2[6][2]))));
                        if (l_156)
                            continue;
                        if (p_59)
                            break;
                        l_197 = func_67(((safe_add_func_uint32_t_u_u((l_195[0] ^ p_59), (l_207 < (g_77 >= (safe_mod_func_int16_t_s_s(g_104.f0, 0x2A34L)))))) != ((l_208 < ((safe_mod_func_int32_t_s_s((((l_176 = l_192[1][4][1]) && l_192[1][4][1]) <= p_59), l_181[4])) > g_42)) > 0x29E1L)));
                    }
                }
                return g_198[3];
            }
            else
            {
                struct S0 l_217 = {19,97};
                for (l_97 = 6; (l_97 >= 0); l_97 -= 1)
                {
                    g_104 = l_217;
                }
                g_104.f1 = (g_196 ^ (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(func_67(func_67(g_132)), p_59)), 2)) | (g_198[1] >= ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((((l_181[4] || p_59) >= g_75) < 0x31BD6A1DL), g_104.f0)), g_42)) < l_195[0]))), g_42)));
                return g_42;
            }
        }
        for (g_132 = 3; (g_132 >= 2); g_132 = safe_sub_func_int8_t_s_s(g_132, 8))
        {
            char l_247 = 6L;
            unsigned short l_255 = 0xB292L;
            if (p_59)
            {
                char l_230 = 0x45L;
                if (l_230)
                    break;
            }
            else
            {
                char l_235 = 0xE7L;
                int l_241 = 0x549275E4L;
                for (l_159 = 0; (l_159 <= 28); l_159++)
                {
                    l_99 = (safe_sub_func_int16_t_s_s(g_132, p_59));
                    l_235 = l_151;
                }
                if ((g_81 < p_59))
                {
                    unsigned l_236[2][10];
                    struct S0 l_239 = {79,-84};
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_236[i][j] = 0xA4A270C9L;
                    }
                    l_236[1][0] = (l_156 && g_196);
                    g_81 = l_235;
                    g_81 = (0UL >= g_75);
                    for (g_43 = 10; (g_43 > (-29)); g_43--)
                    {
                        struct S0 l_240[2] = {{4,-161},{4,-161}};
                        int i;
                        g_104 = (l_240[1] = l_239);
                        l_241 = l_159;
                    }
                }
                else
                {
                    char l_248 = 0x4AL;
                    g_104.f1 = ((g_2[3][3] & func_67(l_156)) == p_59);
                    l_247 = ((g_43 < (((func_67(p_59) <= (p_59 ^ (g_104.f1 = (1UL >= ((safe_lshift_func_int8_t_s_u(l_244, ((((l_156 > (1UL & (safe_sub_func_int16_t_s_s(0L, 0xA51DL)))) == g_196) | p_59) >= 0xBECB08BCL))) == g_2[5][1]))))) >= 0x7BL) <= 65526UL)) <= g_42);
                    return l_248;
                }
                if (l_152)
                    goto lbl_249;
            }
            l_151 = l_247;
            l_151 = (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(l_244)), ((safe_mod_func_uint8_t_u_u((g_198[1] = (((g_196 || (g_104.f0 = l_152)) < (g_42 > (l_255 = (0x45L < p_59)))) == ((safe_rshift_func_uint8_t_u_s(252UL, (safe_rshift_func_uint8_t_u_s(l_151, (l_99 = (safe_lshift_func_int8_t_s_u((0xDA46L ^ l_156), p_59))))))) && l_152))), g_2[7][2])) | 0L)));
            l_83[3] = g_104;
        }
    }
    return l_99;
}







static char func_67(int p_68)
{
    unsigned char l_76 = 255UL;
    int l_80 = (-6L);
    for (p_68 = (-11); (p_68 < 26); p_68 = safe_add_func_uint16_t_u_u(p_68, 5))
    {
        unsigned l_72 = 4UL;
        l_72 = 0x14A8A5A2L;
        g_77 = (safe_add_func_int32_t_s_s((g_42 && (g_75 & (l_72 >= (0xDE04L == g_42)))), l_76));
    }
    g_81 = (l_80 = (safe_rshift_func_int8_t_s_u(p_68, 6)));
    return p_68;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_198[i], "g_198[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_327[i], "g_327[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_345, "g_345", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_393[i], "g_393[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_712[i][j], "g_712[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_951[i][j][k], "g_951[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1052[i], "g_1052[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1053, "g_1053", print_hash_value);
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1359.f0, "g_1359.f0", print_hash_value);
    transparent_crc(g_1359.f1, "g_1359.f1", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1573, "g_1573", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
