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



static const unsigned char g_6 = 250UL;
static char g_71[1] = {0L};
static unsigned g_75[1][1][9] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}}};
static short g_77 = 0x81FBL;
static unsigned g_92[9][10] = {{0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL,0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL},{0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL,0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL},{0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL,0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL},{0x03C2894BL,1UL,0xDAEFF8EEL,0xDAEFF8EEL,1UL,0x03C2894BL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL},{4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL,4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL},{4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL,4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL},{4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL,4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL},{4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL,4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL},{4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL,4294967291UL,0xDAEFF8EEL,4294967288UL,4294967288UL,0xDAEFF8EEL}};
static int g_114 = 0x6F24FD69L;
static unsigned g_119 = 4294967290UL;
static short g_122 = 0xC673L;
static int g_130[7] = {0x077B2A72L,0x077B2A72L,0L,0x077B2A72L,0x077B2A72L,0L,0x077B2A72L};
static int g_145 = 0xCF185629L;
static const short g_179 = (-6L);
static unsigned short g_205 = 0x69D2L;
static int g_209 = (-1L);
static unsigned char g_228[3] = {251UL,251UL,251UL};
static unsigned short g_261 = 9UL;
static char g_292 = 0x00L;
static int g_333 = 1L;
static unsigned char g_334 = 0x83L;
static int g_348 = 0x6F577913L;
static unsigned g_359 = 0x02CAED80L;
static int g_387 = 8L;
static int g_428 = 0x01155FF0L;
static unsigned g_448 = 0x2CCC6C4DL;
static unsigned short g_484 = 0xC20EL;
static unsigned g_516 = 4294967293UL;
static unsigned g_586 = 1UL;
static char g_813[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};



static int func_1(void);
static unsigned short func_4(unsigned char p_5);
static unsigned func_7(int p_8, unsigned char p_9, const unsigned short p_10);
static int func_11(int p_12, const short p_13, int p_14, int p_15);
static unsigned short func_18(const int p_19, unsigned p_20, unsigned char p_21, short p_22, unsigned char p_23);
static int func_27(short p_28, int p_29, unsigned p_30);
static const unsigned short func_35(unsigned p_36, int p_37, unsigned p_38, char p_39, unsigned p_40);
static int func_43(char p_44, short p_45, int p_46);
static unsigned char func_47(char p_48, short p_49, char p_50, unsigned p_51);
static short func_57(unsigned short p_58);
static int func_1(void)
{
    const unsigned l_2 = 0x0AD6F2EEL;
    int l_3 = 2L;
    l_3 = l_2;
    l_3 = (func_4((g_6 ^ ((g_6 , (func_7((g_813[1] |= func_11((safe_lshift_func_uint16_t_u_u((g_6 , l_3), func_18(g_6, l_2, l_3, g_6, ((+((l_3 != l_3) | g_6)) < g_6)))), l_2, l_2, g_448)), g_6, l_2) & g_6)) || g_77))) == g_6);
    return l_2;
}







static unsigned short func_4(unsigned char p_5)
{
    char l_991 = 0L;
    unsigned l_992 = 0x823153E2L;
    int l_993[9][9] = {{0xD10770F4L,0x6A694FC1L,0xD10770F4L,5L,0xD29D7A5FL,0L,0x1DE75789L,0x5BAA6037L,0x9AFF5129L},{0x78241080L,0xC83C1310L,0xB114056AL,0xBF0F2462L,0xCCAB5A3AL,0x9AFF5129L,0L,7L,0xD77D6A4BL},{0xB9A02E03L,0xD10770F4L,0xEB3197EBL,0L,0L,5L,0L,1L,1L},{0x9AFF5129L,0xD10770F4L,0x940FA148L,(-5L),1L,0x032ED96EL,7L,0x032ED96EL,1L},{0xB9A02E03L,0xBF0F2462L,0xBF0F2462L,0xB9A02E03L,0x1DE75789L,0L,(-5L),0x9AFF5129L,0xFDD311F8L},{0x6A694FC1L,0xB114056AL,0L,1L,8L,4L,0xD77D6A4BL,1L,0xD10770F4L},{1L,(-5L),0xEB3197EBL,8L,0x1DE75789L,0x9AFF5129L,0xD10770F4L,0x940FA148L,(-5L)},{0L,5L,0L,1L,1L,7L,0x52C4DC5BL,0x52C4DC5BL,7L},{0L,7L,0x9AFF5129L,7L,0L,0xB9A02E03L,0x2033AF75L,0x6A694FC1L,0x52C4DC5BL}};
    unsigned l_994 = 0x3A9DDF40L;
    int l_1040 = 0xD34D3B99L;
    int i, j;
    l_993[0][1] = ((g_813[1] = (((g_71[0] > l_991) | (g_122 = (func_35(g_334, l_992, g_209, p_5, (l_993[2][5] = 0UL)) , g_179))) <= 0x7DL)) != l_994);
    g_145 = g_119;
    if (p_5)
    {
        short l_1003 = 8L;
        int l_1006 = 0x606C074EL;
        int l_1009 = 0L;
        unsigned short l_1010 = 0x73CEL;
        char l_1011[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1011[i] = 0x3DL;
        l_993[7][4] ^= (safe_rshift_func_uint16_t_u_s(func_11(g_334, g_77, ((((+(safe_lshift_func_int8_t_s_u(((((((~((((((safe_rshift_func_int8_t_s_s(g_92[4][2], (l_1003 &= g_813[1]))) , l_1003) > ((l_1009 &= (safe_div_func_uint32_t_u_u(g_448, (l_1006 , (g_428 = ((safe_mul_func_int32_t_s_s(g_813[1], (1L <= p_5))) | 2L)))))) , 9UL)) | l_991) ^ p_5) != l_1006)) > l_1006) <= l_991) & l_1010) , 0xE1L) && 0UL), 3))) > l_1011[0]) <= p_5) && g_145), l_992), p_5));
        g_145 |= g_348;
        g_130[4] |= l_993[2][5];
        l_993[4][4] ^= (p_5 , g_71[0]);
    }
    else
    {
        int l_1014 = 1L;
        int l_1024 = 0x5A75FF10L;
        int l_1039 = 0L;
        for (g_516 = 2; (g_516 <= 6); g_516 += 1)
        {
            const int l_1023 = (-1L);
            int i;
            g_130[g_516] = 0xF3C59867L;
            g_130[g_516] = (safe_rshift_func_int16_t_s_u(g_77, 10));
            g_145 ^= (((p_5 <= (l_1014 = (l_993[7][6] , p_5))) | (0x6683CC1FL != ((((g_292 = (g_348 != (g_130[g_516] = p_5))) >= ((g_75[0][0][6] , (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((g_334 ^ (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_71[0], g_119)), p_5))), p_5)), 5))) , g_428)) != 0xBD7CL) >= l_1023))) != p_5);
        }
        l_1024 = p_5;
        g_130[6] = (safe_div_func_uint8_t_u_u(0xCEL, (safe_rshift_func_uint8_t_u_s(p_5, (safe_add_func_int16_t_s_s(func_43(g_114, p_5, (l_1040 |= ((+((safe_lshift_func_int8_t_s_u((l_1024 = g_114), func_47((l_1039 = (safe_div_func_uint32_t_u_u((g_75[0][0][1] ^= (((func_35(((safe_sub_func_uint32_t_u_u(func_47((g_292 |= ((safe_rshift_func_int16_t_s_s(0L, 3)) & p_5)), g_130[6], p_5, l_1014), g_516)) | 255UL), l_1014, l_993[2][5], p_5, p_5) && g_130[6]) < p_5) , g_71[0])), g_130[4]))), l_1014, l_1014, g_228[1]))) <= l_993[5][1])) < 1L))), l_1014))))));
    }
    return l_1040;
}







static unsigned func_7(int p_8, unsigned char p_9, const unsigned short p_10)
{
    unsigned l_814 = 0xA6824565L;
    int l_817 = 0x50C9DEBEL;
    unsigned l_856 = 0x5AED900EL;
    int l_916 = 0xC255ABF7L;
    int l_924[1];
    unsigned l_948 = 3UL;
    unsigned short l_975 = 0x4501L;
    unsigned l_977 = 1UL;
    unsigned l_990 = 1UL;
    int i;
    for (i = 0; i < 1; i++)
        l_924[i] = 1L;
    if (l_814)
    {
        unsigned char l_820 = 0UL;
        int l_855[8] = {(-1L),6L,(-1L),6L,(-1L),6L,(-1L),6L};
        int l_857 = 7L;
        int i;
        if (((((safe_lshift_func_int8_t_s_u(0L, 1)) >= func_43(g_122, p_10, g_114)) , (l_817 = (l_814 , 0x417E938DL))) ^ (0xF5L ^ ((safe_mod_func_int8_t_s_s((+l_814), l_820)) | g_179))))
        {
            l_817 = (safe_sub_func_int16_t_s_s(0xFD33L, ((safe_sub_func_uint32_t_u_u(l_820, (safe_mod_func_int16_t_s_s(1L, p_10)))) ^ g_71[0])));
            return p_10;
        }
        else
        {
            char l_840 = (-3L);
            int l_841 = 0xFE9BBDC4L;
            int l_842[9][3] = {{0x542CDB76L,0x542CDB76L,3L},{0x93CCCFECL,1L,1L},{3L,2L,4L},{0x93CCCFECL,0L,0x93CCCFECL},{0x542CDB76L,3L,4L},{4L,4L,1L},{(-1L),3L,3L},{1L,0L,0x07FCC619L},{(-1L),2L,(-1L)}};
            int i, j;
            for (g_114 = 0; (g_114 <= 2); g_114 += 1)
            {
                unsigned char l_839[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_839[i] = 249UL;
                g_145 ^= (l_842[0][0] &= ((g_92[4][2] , ((l_841 = ((g_228[g_114] = ((~g_130[5]) >= ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_817, 5)), p_9)) , (safe_mod_func_int32_t_s_s(func_35((((((l_840 = ((safe_mod_func_int8_t_s_s((+func_47(g_261, (safe_mod_func_uint32_t_u_u(p_9, (safe_lshift_func_int16_t_s_u(((g_130[4] != l_820) , (255UL != 0xC4L)), p_9)))), g_6, l_839[0])), 0xF9L)) > p_8)) == (-1L)) | l_820) , l_820) ^ 8L), p_10, g_205, g_119, l_839[0]), (-7L)))))) | l_814)) != l_820)) == l_814));
            }
        }
        p_8 = (safe_sub_func_int16_t_s_s(func_11(p_9, (((l_817 = g_205) & (l_814 | (safe_lshift_func_int16_t_s_u((((safe_div_func_int16_t_s_s((-1L), p_9)) >= (((func_47(func_47((((((l_857 = (((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint32_t_u_u(((l_856 = (g_484 , ((safe_add_func_int16_t_s_s(((l_814 , (p_10 | (g_261 = (l_855[4] = l_820)))) != g_813[1]), 0x576DL)) != l_814))) == (-1L)), 0x1F991E30L)) <= 0x02CD3816L) ^ p_10), 10)) , g_813[1]) && 0UL)) , g_179) != l_820) < 0x7DL) , p_10), p_9, p_8, l_814), g_92[4][2], g_145, g_586) , g_348) & l_820) > 65535UL)) , p_9), 2)))) != g_334), g_209, g_448), p_10));
    }
    else
    {
        unsigned char l_858 = 0x4FL;
        int l_859 = 0x2862D90FL;
        l_859 = ((l_858 && l_856) <= (g_359 = l_817));
        g_130[4] = p_8;
        for (g_359 = 15; (g_359 > 6); --g_359)
        {
            g_130[6] = g_209;
        }
    }
    if ((p_9 < g_333))
    {
        return p_10;
    }
    else
    {
        int l_884 = 0x728874ADL;
        int l_944[7][7] = {{0xF8255FC0L,0x6180A02CL,0x6180A02CL,0xF8255FC0L,0xF8255FC0L,0x6180A02CL,0x6180A02CL},{1L,0x293A09B3L,1L,0x293A09B3L,1L,0x293A09B3L,1L},{0xF8255FC0L,0xF8255FC0L,0x6180A02CL,0x6180A02CL,0xF8255FC0L,0xF8255FC0L,0x6180A02CL},{0L,0x293A09B3L,0L,0x293A09B3L,0L,0x293A09B3L,0L},{0xF8255FC0L,0x6180A02CL,0x6180A02CL,0xF8255FC0L,0xF8255FC0L,0x6180A02CL,0x6180A02CL},{1L,0x293A09B3L,1L,0x293A09B3L,1L,0x293A09B3L,1L},{0xF8255FC0L,0xF8255FC0L,0x6180A02CL,0x6180A02CL,0xF8255FC0L,0xF8255FC0L,0x6180A02CL}};
        int i, j;
        for (l_856 = 5; (l_856 > 49); l_856 = safe_add_func_int16_t_s_s(l_856, 2))
        {
            int l_866 = 0L;
            int l_896[10] = {0L,0x3F244466L,0L,0L,0x3F244466L,0L,0L,0x3F244466L,0L,0L};
            unsigned short l_987 = 2UL;
            int i;
            for (g_122 = (-2); (g_122 > 12); g_122 = safe_add_func_uint16_t_u_u(g_122, 1))
            {
                unsigned l_883[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
                int i;
                if (l_866)
                    break;
                p_8 = (253UL & g_387);
                for (g_292 = 0; (g_292 <= 2); g_292 = safe_add_func_int8_t_s_s(g_292, 8))
                {
                    short l_871 = 9L;
                    const int l_876 = 1L;
                    int l_885 = 5L;
                    l_885 = func_35((func_35((safe_add_func_uint8_t_u_u(g_6, p_8)), (l_871 = 0x4AD5917FL), g_114, ((((((safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((l_876 & ((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u((0x45A4C94BL == (l_876 , func_47((((g_77 = (0x9898L || ((safe_mod_func_int8_t_s_s(p_9, g_209)) , p_10))) && p_9) == p_8), g_179, g_334, g_484))), 6)) , p_8) , p_9) != l_883[5]), g_130[6])) > g_292)) & l_814), 1L)) > g_348), 0x96L)) == 0L) , 0x7DL) || 0x06L) & g_428) < l_884), l_856) <= 4294967295UL), p_8, p_10, l_884, g_92[6][6]);
                }
            }
            for (g_77 = (-9); (g_77 > (-3)); ++g_77)
            {
                l_817 = 0x9800E81DL;
            }
            if (l_817)
                break;
            if ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((((func_47(p_8, g_145, ((g_205 = (l_866 <= (l_896[0] = ((func_47((safe_lshift_func_int16_t_s_u((250UL | (p_8 , ((((safe_rshift_func_int16_t_s_u((-1L), 1)) , (l_866 == (l_817 = func_35((((func_35(l_866, (g_333 = l_866), g_114, g_145, l_814) >= p_8) && l_884) > l_866), l_884, p_9, g_71[0], g_179)))) >= p_8) || g_130[6]))), p_9)), g_130[2], p_10, l_884) >= g_71[0]) ^ p_10)))) | g_228[2]), l_814) < 0xCA576585L) <= p_9) < p_9) && p_10), 5)), g_92[6][5])))
            {
                char l_919 = 1L;
                for (g_261 = 0; (g_261 > 40); g_261++)
                {
                    unsigned l_905 = 4294967290UL;
                    char l_914 = 0x61L;
                    int l_915 = 0L;
                    g_130[6] = ((func_47((l_896[4] = g_130[5]), g_130[6], (g_484 , (((((safe_div_func_uint8_t_u_u(func_35((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_905, ((l_915 = (safe_div_func_int16_t_s_s(func_35((l_817 &= ((safe_mod_func_int32_t_s_s((g_516 || 0x9E6BL), (safe_lshift_func_int16_t_s_u((l_884 = g_228[0]), (safe_sub_func_int8_t_s_s((func_35(p_10, g_75[0][0][3], l_905, p_10, p_9) && g_813[8]), 0x76L)))))) | p_9)), l_814, l_905, l_914, l_914), g_586))) <= g_292))), 0x4F14L)), g_359, p_10, l_905, g_205), 0xABL)) , 0x344DL) , (-4L)) && g_130[3]) < p_9)), l_916) != p_9) | p_9);
                    l_896[0] = ((((g_75[0][0][2] ^ 8L) != (safe_sub_func_uint8_t_u_u(l_919, ((g_813[0] = (0x45L ^ (0xDB10L > (g_122 &= (((((((l_924[0] = (safe_mod_func_uint8_t_u_u(func_47((safe_add_func_uint16_t_u_u(((func_47(l_916, (func_35(l_856, g_813[6], l_919, l_919, l_919) <= p_8), p_8, l_916) , g_516) && 65528UL), 1UL)), g_75[0][0][3], g_114, l_884), g_92[1][3]))) ^ g_292) , p_10) == l_896[6]) >= g_75[0][0][4]) >= p_10) ^ g_179))))) & 1UL)))) ^ 255UL) && g_92[4][2]);
                    for (g_333 = 0; (g_333 <= 2); g_333 += 1)
                    {
                        return g_130[6];
                    }
                }
            }
            else
            {
                const unsigned short l_938 = 0UL;
                int l_947[9] = {0x486A0773L,0x486A0773L,1L,0x486A0773L,0x486A0773L,1L,0x486A0773L,0x486A0773L,1L};
                int l_949 = (-2L);
                int l_976 = 0x539EF9E8L;
                int i;
                for (g_145 = 0; (g_145 < (-16)); g_145 = safe_sub_func_uint16_t_u_u(g_145, 5))
                {
                    return g_813[6];
                }
                if ((!(safe_rshift_func_uint8_t_u_s(((0xC4L | (p_8 | (safe_mul_func_uint32_t_u_u(p_10, (0x7DL < g_333))))) <= (safe_lshift_func_int8_t_s_u(g_6, (g_228[2] &= (safe_lshift_func_uint8_t_u_s((l_884 |= ((l_896[5] = func_47((safe_div_func_int8_t_s_s(0L, g_145)), p_9, p_8, l_866)) , 255UL)), p_9)))))), 1))))
                {
                    int l_937 = (-4L);
                    int l_964 = 0xCCE0B7B2L;
                    int l_965 = (-1L);
                    if (((l_937 < ((l_896[0] = func_18(l_938, (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((((l_949 = ((!(-5L)) , (l_937 | (safe_add_func_int32_t_s_s(func_43(g_292, (l_896[7] = (l_884 = l_896[9])), l_944[5][6]), ((safe_sub_func_uint32_t_u_u(l_938, l_947[2])) , l_948)))))) < l_924[0]) , g_813[1]))), l_937)), l_866, g_428, l_944[3][6])) && l_896[0])) , p_9))
                    {
                        if (p_8)
                            break;
                    }
                    else
                    {
                        l_896[0] = g_586;
                    }
                    p_8 = (safe_div_func_int16_t_s_s(0x28D9L, (0x53L | ((g_6 , (g_586 != (safe_rshift_func_int8_t_s_u(func_47(((safe_lshift_func_int16_t_s_u(((g_448 |= (safe_mod_func_uint8_t_u_u((func_57(p_8) , ((((safe_div_func_uint32_t_u_u((g_75[0][0][7] = g_75[0][0][7]), func_35(l_896[2], (g_348 = p_9), p_10, g_6, p_8))) , 0xBAL) || l_938) == g_6)), (-3L)))) , p_9), l_916)) ^ p_8), l_947[1], p_8, l_896[0]), 6)))) , g_75[0][0][7]))));
                    if ((p_9 < ((g_130[6] >= ((((~((g_75[0][0][8] ^ ((g_428 >= (l_884 &= ((safe_sub_func_uint8_t_u_u(((l_938 <= (((safe_lshift_func_uint8_t_u_u((g_92[6][4] , (l_949 &= l_866)), 1)) > (l_965 = ((l_896[7] ^ (l_924[0] = ((l_964 &= l_938) != p_10))) , 0UL))) || g_228[2])) , g_209), p_8)) > g_6))) >= 2L)) && l_924[0])) && 0x8235L) && 2L) , l_944[1][1])) < g_359)))
                    {
                        l_924[0] = ((0x32D99D14L != (l_964 = 0xB59F516DL)) == 0x608AL);
                    }
                    else
                    {
                        p_8 &= 0x6F94052EL;
                    }
                    for (g_261 = 0; (g_261 != 45); g_261++)
                    {
                        int l_978[7][8][4] = {{{1L,1L,(-1L),0L},{0x13B9028BL,3L,1L,(-6L)},{1L,1L,9L,1L},{0L,1L,(-7L),(-6L)},{1L,3L,(-4L),0L},{(-1L),1L,(-6L),0L},{1L,1L,0x7BABFF0FL,0L},{0x4EAC6EAFL,0x3159E907L,3L,(-7L)}},{{1L,1L,9L,0xFB70E8B6L},{0x4EAC6EAFL,3L,0L,3L},{1L,3L,0x18BDE281L,0xFB70E8B6L},{0L,1L,1L,(-7L)},{3L,0x3159E907L,0x18BDE281L,0L},{1L,1L,0L,0L},{0x3159E907L,0x3159E907L,9L,(-7L)},{(-1L),1L,3L,0xFB70E8B6L}},{{0x3159E907L,3L,0x7BABFF0FL,3L},{1L,3L,(-6L),0xFB70E8B6L},{3L,1L,(-1L),(-7L)},{0L,0x3159E907L,(-6L),0L},{1L,1L,0x7BABFF0FL,0L},{0x4EAC6EAFL,0x3159E907L,3L,(-7L)},{1L,1L,9L,0xFB70E8B6L},{0x4EAC6EAFL,3L,0L,3L}},{{1L,3L,0x18BDE281L,0xFB70E8B6L},{0L,1L,1L,(-7L)},{3L,0x3159E907L,0x18BDE281L,0L},{1L,1L,0L,0L},{0x3159E907L,0x3159E907L,9L,(-7L)},{(-1L),1L,0x74688687L,(-7L)},{1L,0x4BB31F39L,(-1L),0x74688687L},{(-1L),0x4BB31F39L,0L,(-7L)}},{{0x4BB31F39L,1L,0x9F8CE4F4L,3L},{0x13B9028BL,1L,0L,1L},{1L,1L,(-1L),1L},{1L,1L,0x74688687L,3L},{1L,1L,(-4L),(-7L)},{1L,0x4BB31F39L,1L,0x74688687L},{1L,0x4BB31F39L,0x7BABFF0FL,(-7L)},{0x13B9028BL,1L,0xFB70E8B6L,3L}},{{0x4BB31F39L,1L,0x7BABFF0FL,1L},{(-1L),1L,1L,1L},{1L,1L,(-4L),3L},{(-5L),1L,0x74688687L,(-7L)},{1L,0x4BB31F39L,(-1L),0x74688687L},{(-1L),0x4BB31F39L,0L,(-7L)},{0x4BB31F39L,1L,0x9F8CE4F4L,3L},{0x13B9028BL,1L,0L,1L}},{{1L,1L,(-1L),1L},{1L,1L,0x74688687L,3L},{1L,1L,(-4L),(-7L)},{1L,0x4BB31F39L,1L,0x74688687L},{1L,0x4BB31F39L,0x7BABFF0FL,(-7L)},{0x13B9028BL,3L,0x74688687L,0L},{1L,1L,0x2CB4337CL,3L},{0L,0x4BB31F39L,3L,3L}}};
                        int i, j, k;
                        p_8 = ((((((l_944[5][4] < l_947[4]) , ((l_944[3][1] >= (0xE883L >= g_334)) <= (((safe_mod_func_uint32_t_u_u((g_75[0][0][7] = func_47((safe_unary_minus_func_uint16_t_u(g_71[0])), (l_884 = func_47(((l_896[0] = (((l_938 ^ (0xF65813B0L | (safe_mod_func_uint8_t_u_u(0x2EL, l_975)))) < g_428) == g_6)) || (-4L)), g_813[5], p_10, g_261)), g_348, l_976)), p_10)) && p_10) || l_964))) ^ p_9) > l_977) , l_978[1][2][0]) <= l_965);
                        if (p_9)
                            break;
                    }
                }
                else
                {
                    char l_983 = (-1L);
                    g_130[6] = ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((l_983 | (((g_448 == (((l_896[9] = (0x55L ^ (func_11((safe_lshift_func_uint8_t_u_s((g_228[2] |= ((g_205 &= 0x94D7L) & 0UL)), (0x3970L >= 65534UL))), g_348, p_10, g_813[1]) <= g_387))) , p_10) > p_10)) != l_983) <= g_6)), g_813[7])), 0x56AB67D5L)) , l_896[9]);
                }
                for (g_387 = 0; (g_387 <= 6); g_387 += 1)
                {
                    int i, j;
                    l_944[g_387][g_387] = (func_43(l_944[g_387][g_387], (l_884 = ((((((safe_unary_minus_func_uint8_t_u((0x1FDCL & l_944[g_387][g_387]))) & func_43(l_987, (l_990 ^= (safe_add_func_uint32_t_u_u(p_8, 0L))), ((!l_896[3]) >= 0x52L))) != l_987) > (-1L)) | l_944[g_387][g_387]) , g_813[1])), g_387) < 1UL);
                }
            }
        }
        return l_856;
    }
}







static int func_11(int p_12, const short p_13, int p_14, int p_15)
{
    int l_573[9][3][2] = {{{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L}},{{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L}},{{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L}},{{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L}},{{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L}},{{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L}},{{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L}},{{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L}},{{0x2CFA4028L,0x2CFA4028L},{0x2CFA4028L,0x37BD88D8L},{0x2CFA4028L,0x2CFA4028L}}};
    int l_574 = 0x14F8D1C9L;
    int l_590 = 1L;
    int l_591 = 0x870B0502L;
    int l_632[1][3];
    unsigned char l_703[9];
    unsigned short l_759 = 0UL;
    unsigned l_790 = 0xBA011286L;
    short l_809 = (-8L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_632[i][j] = 0x7A9E7B15L;
    }
    for (i = 0; i < 9; i++)
        l_703[i] = 0x0BL;
    l_573[4][2][0] = g_484;
    if (p_13)
    {
        unsigned l_583 = 4294967295UL;
        int l_587 = 0x6D7113D1L;
        int l_588 = 0x030284E7L;
        unsigned l_589 = 4294967294UL;
        short l_680 = 0L;
        l_574 &= ((((~255UL) | 0xBEL) != (1UL <= l_573[0][1][1])) > 1L);
        if ((l_591 = ((l_590 ^= (safe_div_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(g_348, (l_574 = func_35(g_448, (l_587 = (func_47((!((g_71[0] > (safe_mod_func_int8_t_s_s(((l_583 |= p_14) | (g_114 >= (safe_div_func_uint8_t_u_u(g_586, ((l_587 >= (~g_348)) , (((g_77 = 0L) | p_14) , p_12)))))), 0xCEL))) <= l_587)), p_12, g_586, g_130[6]) ^ p_13)), l_588, l_589, p_15)))) , p_14), 14)) | g_586), 3UL))) > 0xAA2BL)))
        {
            unsigned char l_600 = 0x6DL;
            g_428 = ((safe_lshift_func_int16_t_s_u(g_71[0], ((safe_lshift_func_int8_t_s_u(1L, ((g_334 = (g_228[0] = (safe_lshift_func_uint8_t_u_u((l_587 = (safe_lshift_func_uint16_t_u_u(((g_145 = (l_573[4][2][0] ^ (l_574 = l_600))) && (((l_573[4][0][1] <= (((safe_lshift_func_uint8_t_u_s(p_15, 6)) && func_35(g_119, l_600, (g_586 = (g_292 != p_13)), p_13, p_14)) , l_574)) & g_145) ^ g_387)), 9))), l_591)))) && g_387))) <= 0x0CF3L))) | (-1L));
        }
        else
        {
            return g_516;
        }
        for (g_292 = 13; (g_292 <= (-6)); g_292--)
        {
            short l_621[4][2] = {{1L,0L},{0L,1L},{0L,0L},{1L,0L}};
            int l_630 = (-1L);
            char l_681 = 1L;
            short l_682 = 0x8F30L;
            unsigned char l_690 = 0x06L;
            unsigned l_704 = 0xA08C305EL;
            int i, j;
            for (g_261 = 0; (g_261 <= 2); g_261 += 1)
            {
                char l_620 = 0xD2L;
                int l_642[5] = {0L,0L,0L,0L,0L};
                int i;
                for (g_209 = 2; (g_209 >= 0); g_209 -= 1)
                {
                    int l_619[1];
                    short l_634[3];
                    int l_639 = 0L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_619[i] = (-5L);
                    for (i = 0; i < 3; i++)
                        l_634[i] = 1L;
                    if ((p_14 = (safe_sub_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((((g_228[g_261] , (safe_add_func_uint16_t_u_u((func_35(g_348, (g_228[g_261] != ((((((g_6 , (safe_rshift_func_int8_t_s_s(func_35(l_583, (safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_35(g_75[0][0][7], g_228[g_261], (safe_lshift_func_int8_t_s_s(l_574, (l_619[0] = ((g_77 = (-1L)) & l_590)))), g_228[g_261], l_620), p_14)), 10)), p_12, p_12, p_15), 4))) == l_590) <= g_122) >= 1L) == g_516) | 1UL)), p_15, p_14, g_428) | l_583), 3L))) ^ p_13) <= g_92[4][2]), p_15)) <= l_621[1][1]), l_587))))
                    {
                        unsigned l_631 = 1UL;
                        int l_633[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_633[i] = 0L;
                        p_14 = func_47((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_633[4] = (((l_587 , ((g_334 < (safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(g_179, (0xD2C1L | func_35((((func_35((((0x73L > l_589) || ((g_228[g_261] > (l_630 &= l_573[3][1][0])) , l_620)) , l_631), p_12, g_179, p_12, l_621[1][1]) & l_632[0][1]) && g_119) && p_13), p_12, g_348, g_130[6], l_632[0][1])))) < g_448), g_292))) , 0xB53DL)) <= 0x1CF0L) == p_13)), g_428)), p_14)), l_634[2], p_12, g_92[4][2]);
                        p_14 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((l_619[0] = p_13), p_12)), (l_639 &= g_228[0])));
                    }
                    else
                    {
                        p_14 = (l_642[4] &= ((p_13 < (-2L)) , (0x4C098166L | func_47(l_583, (((g_261 == (p_13 && 0UL)) >= (((+((((g_75[0][0][7] | p_14) == 0L) & g_130[2]) ^ 0x2416L)) , g_71[0]) || 0UL)) , g_145), p_12, g_586))));
                    }
                }
                if (l_642[4])
                    break;
                l_630 ^= (safe_div_func_uint16_t_u_u(p_14, l_587));
            }
            if (func_35((((p_13 | l_588) || l_621[1][1]) & ((((p_14 != ((((safe_rshift_func_int16_t_s_u(p_13, 6)) || func_47((g_484 <= l_632[0][1]), l_630, (p_12 & 0xFCL), p_14)) < p_13) , p_15)) | 1L) >= l_621[2][1]) >= l_632[0][0])), p_13, g_75[0][0][0], l_630, l_591))
            {
                for (g_209 = 0; (g_209 <= 0); g_209 += 1)
                {
                    unsigned l_655 = 7UL;
                    int i;
                    if (g_292)
                        break;
                    l_587 &= (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u((((l_583 ^ g_6) >= ((g_77 = g_428) >= ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_261 = ((g_122 || l_655) | (g_205 |= (safe_rshift_func_int8_t_s_s(p_14, 6))))), ((g_71[g_209] = (p_14 != p_12)) , (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_6 || 4294967295UL), 0xE5L)), 0x2A795DC3L))))), p_13)) , 0xBB05L))) & l_588), p_12)) && p_12), p_13));
                }
            }
            else
            {
                char l_671 = 8L;
                int l_683 = 0x77DDAD1EL;
                int l_738 = 3L;
                g_428 = ((safe_sub_func_uint16_t_u_u(0x5FFDL, ((l_683 = ((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((((safe_mod_func_int16_t_s_s(l_671, (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((func_35((((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_588 = (l_632[0][0] = (!(l_680 = l_589)))), (((func_47(l_630, func_35(l_630, g_75[0][0][2], p_15, p_15, g_209), p_12, l_671) >= l_681) | g_448) & p_13))), g_145)) & g_292) , l_632[0][1]), l_682, g_6, p_13, l_621[3][1]) == l_591) != 1UL), l_671)), l_682)))) & g_348) && p_12))), 1UL)), l_587)) > 0L)) < p_14))) == g_516);
                g_145 = ((safe_add_func_uint16_t_u_u(l_621[1][1], (g_122 = (-7L)))) ^ (((safe_mod_func_uint16_t_u_u(l_671, (((safe_div_func_int16_t_s_s((l_690 | (+((l_583 , ((p_15 | (((l_683 = (g_261 = (((safe_add_func_int8_t_s_s((l_591 &= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_588 = ((safe_div_func_int16_t_s_s((func_35((safe_mod_func_uint32_t_u_u((p_14 || ((func_35((p_14 & (g_228[2] = p_15)), l_583, g_586, l_703[7], g_77) ^ g_333) , l_621[1][1])), g_209)), l_671, l_583, l_583, p_15) && g_92[6][4]), p_14)) != 1UL)) , g_228[2]), l_683)), l_632[0][1]))), l_621[1][1])) ^ 0x4EL) , 0xF29CL))) != 0x1B21L) == l_587)) && g_334)) < 0x19E3FEE7L))), l_704)) | 0x1E54L) | l_574))) && l_680) <= (-9L)));
                for (l_680 = 0; (l_680 > 20); l_680 = safe_add_func_int8_t_s_s(l_680, 3))
                {
                    int l_709 = 0x10965E4AL;
                    p_14 = 0xD35B926BL;
                    l_709 = (safe_rshift_func_int8_t_s_u((p_14 , 1L), 3));
                    if ((((g_484 ^= (func_47(p_15, g_92[4][2], l_709, p_14) , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((0xAB2EC52DL & (l_690 <= g_261)), 15)), (l_709 ^ l_709))), 1UL)))) > l_683) , l_709))
                    {
                        g_145 |= p_13;
                        l_709 = ((g_145 = (p_14 = (((l_590 ^ g_334) <= 0UL) ^ p_14))) < l_671);
                    }
                    else
                    {
                        unsigned l_718 = 0UL;
                        int l_739 = 1L;
                        if (p_14)
                            break;
                        if (l_683)
                            break;
                        g_145 |= ((l_718 = g_92[4][1]) & ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(p_15, 2)), func_35(l_671, ((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((g_387 | p_12) <= 0xD2C6L), (((p_12 | (func_35((+(safe_lshift_func_uint16_t_u_s((l_630 = (((((func_35(p_12, (func_47((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_u((((l_683 = g_359) | 1UL) , p_13), 4)) > 0x83F4L))), l_703[7], g_428, g_205) , g_261), l_587, l_671, l_671) && p_15) < l_738) <= p_15) && g_484) , 65534UL)), 14))), l_739, g_448, g_130[0], g_586) || 0x33L)) <= g_484) < l_680))), 4294967292UL)), g_261)) > p_13), g_228[2], l_690, p_14))), g_359)) != l_574), 0x07E8L)) || g_228[0]));
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_757 = 0x1F8D22C9L;
        int l_772[6][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
        int l_800 = (-6L);
        short l_801 = 1L;
        short l_808[10];
        int i, j;
        for (i = 0; i < 10; i++)
            l_808[i] = (-1L);
        for (p_14 = 29; (p_14 > 21); p_14 = safe_sub_func_int16_t_s_s(p_14, 4))
        {
            int l_760 = 1L;
            int l_773 = 0L;
            unsigned char l_789 = 0xF0L;
            unsigned l_791 = 4294967292UL;
            if ((l_703[7] , (-1L)))
            {
                unsigned char l_758 = 0x44L;
                int l_761[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_761[i] = 0L;
                g_130[6] = (safe_mod_func_uint32_t_u_u((!(((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(func_18((((((p_14 & 0xFDL) | 0x4522L) && func_43(g_145, ((l_759 = (((g_228[2] ^ l_574) & (l_758 |= ((l_590 ^= (safe_add_func_uint8_t_u_u((l_757 &= (+(safe_sub_func_int8_t_s_s((l_591 = (safe_rshift_func_uint8_t_u_s(func_47((func_47(((g_71[0] & (l_573[4][2][0] == 1UL)) == g_130[6]), g_348, p_14, l_573[4][2][0]) ^ g_428), g_228[2], g_145, p_15), p_15))), 255UL)))), p_15))) >= l_573[4][2][0]))) && 0x53L)) <= 247UL), p_12)) == 0x84B31CF4L) | g_586), g_387, p_14, l_760, l_760))), g_586)), l_703[0])), p_14)) <= l_761[0]) != l_760)), l_761[0]));
                g_428 = (((g_75[0][0][2] = ((safe_unary_minus_func_int16_t_s(((((4294967294UL | (safe_lshift_func_uint16_t_u_u(0x447DL, 7))) | (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((l_757 && ((((((l_632[0][1] = ((l_773 = ((safe_lshift_func_int8_t_s_s(((l_761[0] > (l_760 ^ (l_772[1][0] = (safe_rshift_func_int16_t_s_s(((p_14 <= (func_27(((((l_772[1][0] |= (((((g_387 | (g_228[2] | (g_205 < g_6))) , 0x9AL) , 0x48606EB6L) && 4294967295UL) & g_292)) , l_760) || l_772[1][1]) ^ 0xCDDDL), p_12, g_75[0][0][4]) & g_333)) & p_12), g_179))))) , (-1L)), g_359)) | g_516)) , l_758)) , (-10L)) , (-1L)) , p_14) >= (-1L)) >= 0x544F52BEL)))), p_13))) == 0xF25EL) , 0x7C25L))) == g_359)) & 0xA03E49B3L) && p_15);
                if (g_119)
                    break;
            }
            else
            {
                int l_792[4];
                int l_799[3][7] = {{(-1L),0x794CD81DL,(-1L),(-1L),(-1L),(-1L),(-4L)},{9L,(-4L),(-1L),(-1L),(-4L),9L,(-4L)},{(-1L),9L,9L,(-1L),(-4L),(-1L),9L}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_792[i] = (-1L);
                for (l_757 = 23; (l_757 > 8); --l_757)
                {
                    unsigned l_793[4][8] = {{0x57BE97DEL,0x57BE97DEL,0x4D838F2AL,0xDE63ADDCL,0x4D838F2AL,0x57BE97DEL,0x57BE97DEL,0x4D838F2AL},{0x4C6A6D73L,0x4D838F2AL,0x4D838F2AL,0x4C6A6D73L,4294967295UL,0x4C6A6D73L,0x4D838F2AL,0x4D838F2AL},{0x4D838F2AL,4294967295UL,0xDE63ADDCL,0xDE63ADDCL,4294967295UL,0x4D838F2AL,4294967295UL,0xDE63ADDCL},{0x4C6A6D73L,4294967295UL,0x4C6A6D73L,0x4D838F2AL,0x4D838F2AL,0x4C6A6D73L,4294967295UL,0x4C6A6D73L}};
                    unsigned short l_794[1];
                    int l_795 = 0xD32BC5FEL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_794[i] = 0xAA3CL;
                    if (((g_130[0] = (safe_mod_func_uint8_t_u_u(2UL, p_15))) ^ 0xCA360F20L))
                    {
                        int l_788 = 1L;
                        l_794[0] = ((safe_sub_func_uint16_t_u_u(l_760, func_35((safe_mod_func_int16_t_s_s((func_47(func_43(p_13, (l_773 |= (safe_mod_func_uint16_t_u_u((((l_788 = (((l_590 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_15, 8L)), 2))) | l_759) , (g_130[2] ^= 0x4ABB164DL))) && g_119) <= (p_14 , (0x986A1DD3L && l_789))), g_292))), l_790), l_791, p_14, l_792[0]) == p_13), 0x884BL)), l_793[3][3], g_484, g_359, l_791))) || g_130[4]);
                        return l_792[0];
                    }
                    else
                    {
                        g_130[6] = g_77;
                        l_795 ^= l_773;
                        l_632[0][2] = func_27(((safe_unary_minus_func_uint8_t_u(l_772[1][0])) < func_18(p_12, (l_800 = ((safe_rshift_func_int8_t_s_s(l_772[1][0], 6)) < ((1L && (p_12 > g_333)) != (l_799[1][2] = l_760)))), (!(p_14 && (((l_757 , p_13) > 4UL) < (-1L)))), p_13, l_793[3][3])), l_573[4][2][0], l_801);
                    }
                }
                return p_15;
            }
            l_809 = func_47((g_71[0] = ((l_808[5] = ((l_800 | (1UL <= (l_772[1][0] = (l_772[1][0] >= ((!(((safe_rshift_func_int16_t_s_u((g_228[2] == ((-1L) == g_428)), (safe_div_func_uint32_t_u_u((l_790 , (func_47(g_130[6], ((g_228[2] ^ 0L) , 1L), g_130[4], g_119) > p_12)), g_130[5])))) < l_760) , p_14)) && g_516))))) <= 0xC563L)) , g_348)), g_114, l_789, p_12);
            l_772[1][0] = l_772[1][0];
        }
        p_14 = l_703[7];
        return l_703[4];
    }
    for (g_484 = 25; (g_484 >= 10); g_484 = safe_sub_func_int32_t_s_s(g_484, 5))
    {
        unsigned char l_812[1];
        int i;
        for (i = 0; i < 1; i++)
            l_812[i] = 0xCFL;
        g_130[0] = l_812[0];
    }
    return l_632[0][1];
}







static unsigned short func_18(const int p_19, unsigned p_20, unsigned char p_21, short p_22, unsigned char p_23)
{
    char l_26 = 1L;
    int l_52 = (-7L);
    int l_420 = (-4L);
    unsigned char l_449 = 255UL;
    int l_456 = 1L;
    short l_466[9];
    short l_515 = 0x98CDL;
    int i;
    for (i = 0; i < 9; i++)
        l_466[i] = (-7L);
    l_26 = (safe_lshift_func_uint16_t_u_u(g_6, 10));
    l_420 = func_27((safe_rshift_func_uint16_t_u_s(0xFD03L, (((((safe_rshift_func_uint16_t_u_s(func_35(g_6, g_6, p_22, (safe_sub_func_uint32_t_u_u(((func_43((g_71[0] = ((p_20 && func_47((0x167DF2DDL < ((l_52 = g_6) <= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0xD5L, (((func_57((safe_lshift_func_int8_t_s_u(((((((p_20 >= 65527UL) ^ g_6) == p_23) < l_26) , 0x12ED4033L) == p_22), l_26))) | 1L) , p_19) > p_23))), g_6)))), p_19, p_22, l_26)) && 0L)), l_26, g_6) ^ 0x461E19B1L) >= p_23), 0xC6015A3CL)), g_387), 5)) & p_22) & g_359) && p_23) > 3UL))), g_387, l_26);
    for (g_348 = 3; (g_348 <= 8); g_348 += 1)
    {
        char l_423 = 0xECL;
        int l_426[9] = {0xD6A9F363L,0xD6A9F363L,0xD6A9F363L,0xD6A9F363L,0xD6A9F363L,0xD6A9F363L,0xD6A9F363L,0xD6A9F363L,0xD6A9F363L};
        int l_427 = 0x28FB1EA3L;
        unsigned l_517 = 1UL;
        int i;
        if (((((((l_427 |= ((g_333 != ((g_71[0] = ((g_75[0][0][7] > (0xE5L < p_23)) >= ((safe_add_func_uint8_t_u_u(func_47((1L || func_35(l_26, p_22, (l_423 |= g_114), (l_420 = (safe_lshift_func_uint16_t_u_u((g_205 == 0L), 15))), l_426[8])), l_52, p_22, p_23), g_71[0])) , 0x88C2L))) & g_228[1])) , 0x1843BA7CL)) , p_23) | g_428) > 0x2B3AC4C7L) , 1L) < p_22))
        {
            unsigned l_450[7] = {4294967288UL,0xF6C079ABL,4294967288UL,4294967288UL,0xF6C079ABL,4294967288UL,4294967288UL};
            int l_476 = 0x566D86F1L;
            unsigned l_487 = 0UL;
            short l_488 = 0L;
            int i;
            l_426[8] = (((safe_lshift_func_uint8_t_u_u(((((65531UL > g_75[0][0][7]) || (l_449 = (0x64805D4FL > (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(l_426[0], (safe_sub_func_uint16_t_u_u((~(safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(func_47((safe_unary_minus_func_int32_t_s(((safe_mod_func_int8_t_s_s(func_57(((safe_sub_func_int16_t_s_s((-1L), 2UL)) ^ func_35(p_20, l_423, l_426[7], p_22, p_23))), p_22)) != g_448))), l_52, l_426[4], l_426[8]), p_21)), 0x7236L))), g_6)))) < 0x85561B8BL), l_427)), l_423))))) >= 1L) | 0UL), 6)) != g_428) | l_450[2]);
            if ((((p_20 |= p_19) , (func_47(g_77, p_22, g_92[4][2], ((safe_lshift_func_uint16_t_u_s((l_52 = 0xE537L), g_209)) > (safe_unary_minus_func_uint16_t_u(func_35(p_23, g_261, (l_456 &= (((((safe_sub_func_int8_t_s_s((((g_359 |= (l_420 = ((~((p_19 == p_19) == l_423)) != 1UL))) <= l_450[2]) == g_75[0][0][7]), p_23)) > 0L) == p_23) && 0x914FL) >= l_449)), l_450[5], l_449))))) ^ p_21)) , (-5L)))
            {
                unsigned short l_461 = 1UL;
                int l_473 = 0xD3082659L;
                unsigned l_477[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_477[i] = 0xCE12FA61L;
                g_428 = ((safe_div_func_int16_t_s_s((((p_20 >= ((((safe_add_func_uint8_t_u_u((l_461 = l_450[5]), (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((0L & ((l_466[0] ^= g_71[0]) & 1L)), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((l_476 = (safe_add_func_uint16_t_u_u(l_473, (safe_lshift_func_int8_t_s_s(g_209, 5))))), 3)), (g_77 = ((g_292 , l_473) < 3UL)))))) && 1L), 12)))) ^ g_334) <= 4294967286UL) , (-4L))) >= l_477[1]) , (-8L)), g_145)) | 0xF5D37A51L);
                l_420 = ((safe_lshift_func_int16_t_s_u(((p_19 && ((g_261 | 0xB7054F3DL) | g_334)) || g_387), g_130[6])) , (func_35(g_114, (((safe_rshift_func_int8_t_s_s(func_35((safe_div_func_int16_t_s_s(l_461, ((g_119 < l_476) ^ g_261))), l_427, l_466[0], g_145, l_426[2]), 0)) | l_449) | 0xA8L), p_19, g_484, l_476) || 0xF75FL));
                for (l_456 = 4; (l_456 >= 0); l_456 -= 1)
                {
                    int l_503 = 0x0698F9B4L;
                    int l_508 = 0x4A8E7D91L;
                    int i, j;
                    g_130[3] &= ((((safe_mod_func_int16_t_s_s(g_92[g_348][(l_456 + 2)], (l_477[(l_456 + 1)] ^ (0x56E3L || 0L)))) || ((l_488 = (l_487 , p_20)) & g_6)) | (safe_rshift_func_int16_t_s_u((p_22 = (l_503 = (~(safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(l_450[2], ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(func_47((((g_77 >= p_20) ^ p_23) != g_228[0]), p_19, p_20, p_21), g_75[0][0][3])), 14)), l_476)) , l_426[4]))) > p_19), l_473)) != 0xECB0L), p_20))))), g_71[0]))) < l_420);
                    for (l_26 = 5; (l_26 >= 0); l_26 -= 1)
                    {
                        int i;
                        l_508 &= ((l_466[g_348] && (g_77 , (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_23, 14)), (l_503 = g_71[0]))))) , (p_21 >= p_21));
                        if (p_19)
                            continue;
                        l_476 = ((!(func_57(func_47(g_205, g_71[0], g_71[0], ((l_473 = ((g_292 = ((((func_47((g_516 |= func_35((((p_23 = (p_21 = ((l_420 = (((-5L) <= (safe_lshift_func_int16_t_s_s((0x83671564L >= (((func_47((1L >= (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_333 , (l_426[8] = ((g_75[0][0][1] = (l_450[(l_456 + 2)] = l_508)) , ((((l_426[4] == g_130[6]) , l_515) || 0x4EL) ^ 0xB2DAL)))) , p_20), g_77)), g_292))), l_461, g_292, l_476) && 0x67F97A31L) , g_228[2]) , l_450[(l_456 + 2)])), 12))) > 0xA1746ABDL)) > l_466[g_348]))) && g_71[0]) || g_428), p_19, p_20, l_503, p_19)), g_71[0], l_515, g_292) , 0x7D102940L) | l_517) & (-9L)) | p_22)) , p_19)) > p_22))) , 1UL)) >= g_334);
                    }
                    l_508 = (func_57((l_476 &= (safe_rshift_func_int8_t_s_u((l_420 = func_47(p_23, g_92[g_348][(l_456 + 2)], l_477[0], l_427)), 4)))) & p_19);
                    for (g_428 = 2; (g_428 <= 8); g_428 += 1)
                    {
                        int i;
                        g_130[6] &= (safe_div_func_uint16_t_u_u(((1UL != (+0UL)) || l_450[(l_456 + 1)]), l_426[8]));
                    }
                }
                g_428 ^= func_57(((l_473 = (l_476 &= (l_423 == g_448))) , ((((g_130[6] = (((p_20 ^ g_205) & (g_130[0] != ((+(safe_mod_func_int32_t_s_s(((((g_334 && 3UL) == p_19) <= (l_473 = func_47(l_426[8], p_23, g_122, p_20))) == 5UL), l_427))) && g_130[5]))) | l_476)) && p_20) || l_456) < 1UL)));
            }
            else
            {
                char l_526 = (-1L);
                int l_529 = (-2L);
                int l_563 = 0L;
                if (((safe_add_func_uint32_t_u_u(((g_71[0] = l_526) ^ 0xFEL), (((l_26 ^ p_23) , p_20) == 9UL))) , (g_228[1] | ((-1L) != (safe_lshift_func_uint16_t_u_s((l_476 = p_20), 4))))))
                {
                    l_529 = g_261;
                }
                else
                {
                    int l_542[6][5] = {{0L,0L,6L,0L,0L},{(-5L),0L,(-5L),(-5L),0L},{0L,(-10L),(-10L),0L,(-10L)},{0L,0L,(-1L),0L,0L},{(-10L),0L,(-10L),(-10L),0L},{0L,(-5L),(-5L),0L,(-5L)}};
                    int i, j;
                    g_428 = (func_57((((safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((g_209 > (func_47(((g_228[1] , (l_476 = (p_22 = 0xD413L))) || (0L != (safe_add_func_uint16_t_u_u(l_529, (g_205 = g_205))))), (0xDD51L != g_348), p_20, l_488) ^ p_23)), 0xFDL)) | 254UL), 0x44380F61L)), 0x885BL)) | 9UL), 0x4F824CFFL)), p_20)) ^ l_427) ^ 1UL)) || l_52);
                    l_542[1][4] = func_57(l_450[5]);
                    g_145 = (g_428 = (g_130[5] = l_542[2][3]));
                    return p_20;
                }
                for (p_23 = 0; (p_23 <= 8); p_23 += 1)
                {
                    int i, j;
                    l_52 |= ((g_292 &= ((safe_mod_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(g_92[g_348][p_23], (safe_unary_minus_func_int32_t_s(((safe_unary_minus_func_int8_t_s((0x6D67L == (-2L)))) > ((l_426[p_23] , g_205) <= (safe_div_func_uint32_t_u_u(((p_19 , g_428) , (safe_sub_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u((l_427 < l_476), 65535UL)) , 7L) != p_21) ^ p_20), g_119))), l_450[6])))))))) , l_426[5]) , 0x2DE4L), 0x0A20L)) | p_21)) != 5UL);
                    l_476 = (-1L);
                    for (l_529 = 5; (l_529 >= 0); l_529 -= 1)
                    {
                        int i;
                        l_563 = (l_426[p_23] &= ((safe_add_func_int32_t_s_s((l_450[(l_529 + 1)] == ((safe_mod_func_uint32_t_u_u(g_448, (((safe_sub_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(l_515, (+l_529))) <= g_119), (p_19 < func_47((((((g_71[0] , g_333) ^ p_22) >= p_19) , p_23) || p_23), p_22, g_71[0], l_487)))) != p_20) || p_23))) && g_261)), 4294967287UL)) > 1L));
                    }
                }
                l_476 ^= (-7L);
            }
            return g_71[0];
        }
        else
        {
            return l_466[0];
        }
    }
    for (p_20 = 0; (p_20 <= 0); p_20 += 1)
    {
        unsigned l_572 = 1UL;
        l_456 = ((g_428 , (func_43(l_52, ((2L == ((p_23 < func_27((p_22 = p_22), (((safe_mod_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((((+((safe_div_func_int32_t_s_s(func_43(func_35(g_261, (((g_484 = l_449) <= p_21) >= (safe_div_func_int32_t_s_s((l_572 <= g_92[4][2]), 0x90B9309AL))), g_6, l_572, l_572), p_19, p_20), 0x62B1B688L)) >= 0x6075L)) , 5UL) & g_516), 0x1C3AL)) > 0xD3L) > l_572), g_516)) || 0xDDB2L) | 0x9E65L), p_21)) | p_23)) , g_145), g_6) > 0xEF9EL)) >= p_21);
    }
    return l_466[3];
}







static int func_27(short p_28, int p_29, unsigned p_30)
{
    int l_414 = (-7L);
    l_414 = (p_29 & l_414);
    for (g_348 = 15; (g_348 > 5); g_348 = safe_sub_func_int8_t_s_s(g_348, 5))
    {
        int l_417 = 0xA5A0E836L;
        char l_418 = 0x41L;
        int l_419[2];
        int i;
        for (i = 0; i < 2; i++)
            l_419[i] = 7L;
        l_419[1] = (func_57((0x49F03E3CL == l_417)) , l_418);
    }
    return g_119;
}







static const unsigned short func_35(unsigned p_36, int p_37, unsigned p_38, char p_39, unsigned p_40)
{
    return g_130[6];
}







static int func_43(char p_44, short p_45, int p_46)
{
    int l_313 = 0x7D05AA68L;
    int l_322 = 0x3B077A04L;
    int l_331 = 0xD5AB3512L;
    int l_332 = 0x5C5AA924L;
    int l_373 = (-1L);
    unsigned short l_398 = 0xBD60L;
    unsigned char l_413 = 0x47L;
    if ((g_130[4] = (safe_sub_func_uint32_t_u_u(((g_228[2] = (l_313 | ((g_334 = (g_333 = ((func_57(((((safe_div_func_uint32_t_u_u(func_47(((safe_lshift_func_int16_t_s_u(g_292, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_45, (l_322 = (7L != p_45)))), ((safe_add_func_uint8_t_u_u(g_77, ((safe_rshift_func_uint16_t_u_s(func_47(p_46, ((l_332 = (safe_mod_func_int8_t_s_s(0x3AL, (((safe_div_func_uint16_t_u_u((g_205 = (l_331 = p_46)), p_44)) == g_71[0]) || l_331)))) == 0x1EA1L), p_45, p_44), 11)) || l_331))) < 0L))))) , p_46), l_313, p_46, l_313), p_46)) & p_44) , l_331) , l_332)) , g_292) < g_6))) != 0xB37FL))) , 7UL), p_45))))
    {
        char l_345 = 0L;
        int l_349[4];
        unsigned char l_352 = 255UL;
        int i;
        for (i = 0; i < 4; i++)
            l_349[i] = 0x94BE247AL;
        l_349[0] |= (safe_lshift_func_int16_t_s_u(func_57((g_348 |= (l_332 , (255UL ^ ((~(safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((-1L) && (p_45 = (safe_lshift_func_int8_t_s_s((((0x4849L & func_57(l_345)) >= (p_46 & (safe_rshift_func_uint8_t_u_u(0x96L, ((253UL ^ l_322) , 0x0AL))))) || l_345), 3)))), 3)), g_333)), 5))) | 0x50F3DB07L))))), 0));
        l_322 = (safe_div_func_int8_t_s_s(((l_352 >= func_47(l_322, p_45, l_331, (l_332 = (l_349[0] , (g_92[1][0] = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((g_77 = g_145), (g_122 = (l_332 == (((safe_div_func_uint8_t_u_u(((g_71[0] |= (!l_349[0])) | (g_119 <= g_359)), (-4L))) != l_345) , p_45))))) != (-1L)), p_46))))))) > g_334), l_349[0]));
    }
    else
    {
        int l_372 = 0L;
        int l_388[10][9][2] = {{{0L,0xF7B459A2L},{6L,0L},{0L,0xF8597AB3L},{0xC7228BB2L,0x457048CEL},{0L,0x9E95D230L},{0x222C2ECCL,1L},{0x4D7A43F1L,1L},{(-1L),1L},{0xF8597AB3L,1L}},{{(-1L),1L},{0x4D7A43F1L,1L},{0x222C2ECCL,0x9E95D230L},{0L,0x457048CEL},{0xC7228BB2L,0xF8597AB3L},{0L,0L},{6L,5L},{0x44CEBC7EL,0L},{0L,0xA2F4FB3AL}},{{0L,0x222C2ECCL},{0xB6E9C6C1L,0xE4D31844L},{0x68DCC2A2L,0xD9AD2610L},{(-3L),0L},{0x008BCAF0L,(-1L)},{0L,(-2L)},{1L,0L},{0x235F6A58L,0xF1878CFAL},{0x8F2240E8L,0x1B536B5AL}},{{5L,(-10L)},{0xF39F61A1L,(-5L)},{1L,5L},{0L,0xB6E9C6C1L},{0x61E11DEAL,0xC7228BB2L},{0x5FE0AB0DL,0x68DCC2A2L},{0x1850DD78L,0x6D6A43C1L},{0x09EFA91FL,0x56C3AD2EL},{5L,0L}},{{(-8L),(-1L)},{0xA2F4FB3AL,(-2L)},{1L,1L},{(-1L),9L},{2L,0x61E11DEAL},{0x113AED41L,(-3L)},{0L,0x113AED41L},{(-1L),1L},{(-1L),0x113AED41L}},{{0L,(-3L)},{0x113AED41L,0x61E11DEAL},{2L,9L},{(-1L),0x44CEBC7EL},{0x44CEBC7EL,0x4D7A43F1L},{0x235F6A58L,0xA7365990L},{5L,0x61E11DEAL},{(-5L),6L},{0x9E95D230L,(-2L)}},{{0x68DCC2A2L,(-1L)},{0x113AED41L,1L},{1L,(-10L)},{(-8L),(-1L)},{0xE4D31844L,0x15E90E75L},{0x457048CEL,(-1L)},{(-1L),0xE7BD56AAL},{0x117F19FAL,0x5FE0AB0DL},{0L,0xF39F61A1L}},{{(-2L),(-9L)},{0x1B536B5AL,0x008BCAF0L},{0x667AEED0L,5L},{1L,0xF8597AB3L},{(-1L),1L},{(-10L),0xC7228BB2L},{0xF39F61A1L,0x235F6A58L},{5L,0L},{0x222C2ECCL,0L}},{{1L,0x1B536B5AL},{0x6D6A43C1L,0L},{1L,5L},{0x61E11DEAL,0x01A00784L},{0xC7228BB2L,0xF1878CFAL},{0L,(-2L)},{0xA7365990L,0x1850DD78L},{0L,0x1850DD78L},{0xA7365990L,(-2L)}},{{0L,0xF1878CFAL},{0xC7228BB2L,0x01A00784L},{0x61E11DEAL,5L},{1L,0L},{0x6D6A43C1L,0x1B536B5AL},{1L,0L},{0x222C2ECCL,0L},{5L,0x235F6A58L},{0xF39F61A1L,0xC7228BB2L}}};
        int i, j, k;
        g_145 ^= (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(0x9CADL, (l_322 | g_333))) < (((l_331 = (safe_sub_func_int32_t_s_s(g_228[2], func_47(l_331, (l_373 = (g_122 = (safe_mod_func_int32_t_s_s((l_332 = func_47(p_45, g_205, ((p_44 = (((0L >= l_332) > g_77) > 1UL)) , g_75[0][0][7]), l_372)), l_372)))), g_114, g_6)))) , l_372) <= g_75[0][0][7])), 4)) != g_130[0]) == g_71[0]), 0UL)), g_71[0]));
        l_373 = ((l_331 ^= ((g_348 , l_322) & (g_77 |= g_71[0]))) <= (safe_rshift_func_uint16_t_u_u((((4294967287UL | ((((((1L <= ((+(l_372 && 0xB5L)) , l_372)) , (p_46 != g_71[0])) , l_372) | g_130[1]) != l_322) || p_45)) && p_44) < 0UL), g_261)));
        for (g_145 = 2; (g_145 <= 8); g_145 += 1)
        {
            char l_376 = 0xDDL;
            int l_389 = (-1L);
            unsigned l_399 = 4294967290UL;
            int l_400[2][7];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_400[i][j] = 0x2AA74D20L;
            }
            l_376 ^= l_372;
            l_389 = ((safe_rshift_func_uint16_t_u_s(0xA7E0L, 6)) <= (safe_add_func_int8_t_s_s((((((safe_div_func_int16_t_s_s(func_47((((l_332 |= ((safe_rshift_func_int8_t_s_s(g_71[0], 7)) || (l_372 = l_376))) , ((p_45 || p_45) | (safe_rshift_func_int8_t_s_u(p_46, (p_46 , l_376))))) <= (func_47((func_47((g_387 < 255UL), l_388[4][8][0], g_92[7][9], l_376) , g_228[0]), p_46, g_75[0][0][4], g_387) && p_45)), l_388[7][2][1], g_71[0], l_388[4][8][0]), 7L)) , g_122) || l_372) < 0xF0L) == 0x4B67363EL), g_6)));
            l_400[1][5] = ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((((p_44 <= func_47((g_387 , (safe_sub_func_int16_t_s_s(func_47(((l_389 = (0x7263L >= ((func_47(p_44, g_179, p_46, l_376) , ((safe_lshift_func_int16_t_s_u(((~g_130[6]) & g_145), p_44)) | p_46)) != g_333))) > p_44), p_45, l_372, p_45), 6UL))), l_331, l_373, l_398)) != l_399) , 0x3690L) != g_71[0]) >= g_77), 13)), 0x2FBFL)) , p_44);
            for (l_389 = 0; (l_389 <= 8); l_389 += 1)
            {
                short l_401 = 1L;
                int i, j;
                if (l_401)
                    break;
                l_331 ^= 0x4F09773CL;
                l_400[1][5] = (((((p_44 != (safe_mod_func_uint32_t_u_u((p_44 >= (5L || (func_47(g_71[0], (g_77 = (p_45 = (-4L))), (l_373 |= 0x70L), (l_400[0][6] &= (+(safe_div_func_uint32_t_u_u(((0xE011796CL > (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s((((p_46 ^ (4294967295UL > 1L)) <= 0x4218L) && g_92[4][2]))) <= (-1L)), p_44))) <= g_387), l_413))))) < 5L))), l_322))) < g_205) || l_372) >= 1L) && p_44);
            }
        }
    }
    return g_71[0];
}







static unsigned char func_47(char p_48, short p_49, char p_50, unsigned p_51)
{
    int l_310[4][10] = {{1L,1L,0xB825B64AL,0xCA91A60AL,1L,0xB825B64AL,1L,0xCA91A60AL,0xB825B64AL,1L},{1L,1L,(-3L),0xCA91A60AL,1L,1L,0xCA91A60AL,(-3L),(-1L),0xCA91A60AL},{(-3L),1L,(-1L),1L,1L,1L,(-1L),1L,(-3L),(-3L)},{0xCA91A60AL,1L,(-1L),1L,1L,(-1L),1L,0xCA91A60AL,(-1L),0xCA91A60AL}};
    int i, j;
    l_310[2][0] = g_77;
    return p_50;
}







static short func_57(unsigned short p_58)
{
    const char l_67 = 0xA0L;
    int l_68 = 0x318431BBL;
    int l_76 = 0x153CDCE3L;
    int l_83 = (-8L);
    short l_309[6][6] = {{(-1L),1L,4L,1L,1L,4L},{0xB82CL,0xB82CL,1L,4L,(-2L),0L},{0L,0x3E63L,0xB82CL,1L,0x6110L,1L},{(-1L),0L,0xB82CL,(-1L),0xB82CL,0L},{3L,(-1L),1L,0x3776L,(-1L),4L},{0x3776L,(-1L),4L,0xB82CL,(-1L),0xA576L}};
    int i, j;
    for (p_58 = 15; (p_58 == 9); p_58 = safe_sub_func_int8_t_s_s(p_58, 1))
    {
        int l_74 = 0x4EB7F042L;
        int l_78 = (-10L);
        int l_90 = 0L;
        int l_102 = 0x1C7DC757L;
        unsigned char l_107 = 255UL;
        unsigned l_112 = 4294967295UL;
        int l_165 = 8L;
        g_77 ^= (((((l_76 &= (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u((((l_67 != (l_68 = (!g_6))) < (l_67 ^ (safe_lshift_func_int16_t_s_s((-1L), (g_75[0][0][7] = (((((g_71[0] = l_67) == g_6) , (((-10L) | (l_74 = (l_67 , (((safe_div_func_uint16_t_u_u(p_58, 65535UL)) || 0x8BL) ^ 7UL)))) != 1UL)) && l_74) >= p_58)))))) >= g_6), 0x143632CBL)) <= p_58), 0))) , 1UL) , g_75[0][0][8]) , 0x73L) | g_6);
        if (p_58)
            continue;
        l_78 = g_71[0];
        for (l_78 = 0; (l_78 <= 0); l_78 += 1)
        {
            short l_101[6];
            int l_116 = 0x46079F8DL;
            short l_164 = 0x5541L;
            const unsigned l_167 = 0xE84E38CDL;
            int i;
            for (i = 0; i < 6; i++)
                l_101[i] = (-4L);
            for (l_76 = 0; (l_76 <= 0); l_76 += 1)
            {
                unsigned short l_91 = 0UL;
                for (l_68 = 0; (l_68 <= 0); l_68 += 1)
                {
                    for (g_77 = 0; (g_77 <= 0); g_77 += 1)
                    {
                        int i;
                        l_91 = (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((((l_83 = 0x09D7FF73L) >= 1L) <= g_71[l_78]), (safe_add_func_int32_t_s_s(g_75[0][0][7], l_78)))), (safe_rshift_func_uint8_t_u_s((g_71[0] || (safe_lshift_func_uint8_t_u_u((g_77 ^ (l_90 |= g_71[0])), 2))), 0))));
                        return l_91;
                    }
                }
                if (l_91)
                    break;
                if (g_77)
                    break;
            }
            g_92[4][2] = (~g_71[l_78]);
            l_102 = (((p_58 != (p_58 && (((((l_90 = (((safe_rshift_func_int16_t_s_s(p_58, 6)) == (g_92[8][9] , (-1L))) >= ((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u(p_58, p_58)), (safe_add_func_uint16_t_u_u(((g_75[0][0][7] ^ 0x7CF170C4L) , g_77), 0xEE4CL)))) >= l_101[5]))) , g_71[0]) ^ p_58) <= 1L) | l_78))) == 0xD681L) , 0x5A641CECL);
            for (g_77 = 0; (g_77 < 29); g_77 = safe_add_func_uint8_t_u_u(g_77, 7))
            {
                int l_111 = (-1L);
                int l_113[9] = {0L,0xDB33FCDFL,0xDB33FCDFL,0L,0xDB33FCDFL,0xDB33FCDFL,0L,0xDB33FCDFL,0xDB33FCDFL};
                int l_115 = (-1L);
                int i;
                l_90 &= p_58;
                if (g_71[l_78])
                {
                    l_116 ^= (safe_div_func_uint32_t_u_u(l_107, (g_71[0] ^ ((safe_unary_minus_func_uint16_t_u(((l_115 = ((((l_111 == (0x8B49L < l_112)) == (l_113[8] = (p_58 < (!p_58)))) >= (g_114 ^= g_75[0][0][2])) > g_92[4][2])) > p_58))) && l_101[5]))));
                    g_122 |= (safe_sub_func_int8_t_s_s((g_119 , l_102), (safe_lshift_func_uint16_t_u_u(0UL, 0))));
                }
                else
                {
                    unsigned char l_123 = 0xA3L;
                    l_123 = p_58;
                    for (l_123 = 0; (l_123 <= 0); l_123 += 1)
                    {
                        int i;
                        return l_101[(l_78 + 1)];
                    }
                }
                if ((safe_add_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((g_130[6] &= p_58) < (safe_sub_func_int32_t_s_s((l_68 < (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((g_119 & (safe_rshift_func_int16_t_s_u(0x4E4AL, l_115))), ((0x3F9EL && (l_113[8] |= (0x2608L || (g_122 ^ g_77)))) , 0x29L))) , 0xEFL), l_107)), g_71[0])), l_115))), 0x2622DB6EL))), 3)), 0x57D0CF73L)), p_58)))
                {
                    for (l_74 = 0; (l_74 == (-28)); l_74 = safe_sub_func_int16_t_s_s(l_74, 5))
                    {
                        g_130[6] ^= p_58;
                    }
                }
                else
                {
                    g_130[6] = (l_116 = (l_113[1] = ((g_145 = (g_122 > 0x48A18BD6L)) ^ (l_78 , (!((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((!(p_58 < (0x218FE463L & (1L >= g_114)))), l_76)), 3)) == 0x09CDL))))));
                }
                for (l_102 = (-17); (l_102 == (-23)); l_102--)
                {
                    int l_166[6][4] = {{0L,(-1L),(-1L),0L},{0L,(-1L),0L,(-4L)},{(-1L),0L,(-4L),(-4L)},{(-1L),(-1L),0xDAB04178L,0L},{0L,(-1L),0xDAB04178L,(-1L)},{(-1L),0L,(-4L),0L}};
                    int i, j;
                    g_130[6] = ((p_58 < (safe_mod_func_int32_t_s_s(((l_113[4] || (254UL ^ l_107)) < g_75[0][0][8]), ((safe_lshift_func_int8_t_s_s((l_165 ^= (safe_rshift_func_uint8_t_u_s(251UL, ((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(((g_122 = p_58) , (safe_add_func_int32_t_s_s(0xB45B50DBL, ((l_90 |= (l_164 ^ l_68)) , 4294967295UL)))), p_58)) , 1UL), g_92[4][2])) > 0xE1DDL)))), g_77)) , 8UL)))) != 255UL);
                    l_166[1][1] |= (g_114 , p_58);
                    for (l_68 = 8; (l_68 >= 2); l_68 -= 1)
                    {
                        int i;
                        g_130[(l_78 + 5)] = l_113[l_68];
                        l_76 = l_113[l_68];
                        g_145 = (g_130[1] = g_130[(l_78 + 1)]);
                        g_145 |= g_130[(l_78 + 5)];
                    }
                    if (((l_167 ^ ((safe_lshift_func_uint16_t_u_s(g_71[0], p_58)) ^ ((g_122 = ((l_116 |= l_90) || l_113[7])) && ((g_71[0] >= 65535UL) || ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_166[1][1], 2UL)), p_58)) > p_58))))) <= p_58))
                    {
                        return p_58;
                    }
                    else
                    {
                        int l_176 = 0L;
                        int l_180 = 0xC82959A0L;
                        l_113[8] = (safe_rshift_func_int16_t_s_s(g_130[3], 9));
                        l_165 = (l_113[8] = (((l_176 = 0x9AL) , g_130[4]) , g_92[7][0]));
                        l_180 = (safe_mod_func_uint16_t_u_u((((p_58 | g_92[4][2]) >= g_179) , (l_101[5] == 0x5AL)), g_6));
                    }
                }
            }
        }
    }
    for (g_114 = 0; (g_114 >= (-8)); --g_114)
    {
        int l_191 = 1L;
        unsigned l_198 = 0UL;
        int l_208 = 0xBA3B03B6L;
        int l_230 = 0xDC01900FL;
        unsigned l_239 = 4294967295UL;
        unsigned l_291 = 0x2126B8E5L;
        l_76 = (safe_lshift_func_uint8_t_u_s(((g_122 >= ((l_67 != g_119) >= g_6)) , (safe_div_func_uint16_t_u_u((g_6 < (safe_add_func_int32_t_s_s(0L, ((g_71[0] & ((safe_mod_func_uint32_t_u_u(l_191, (safe_rshift_func_int16_t_s_u((((g_179 , g_114) != 0xABL) ^ g_145), 10)))) & g_71[0])) & 1L)))), l_67))), l_67));
        for (l_83 = 0; (l_83 <= 2); l_83++)
        {
            int l_220 = 0x394B1C0CL;
            int l_262 = 0x7AB014F3L;
            l_76 |= (l_191 , g_92[4][2]);
            if (((l_68 = ((safe_rshift_func_uint8_t_u_u((~l_198), 2)) < (g_209 = ((safe_lshift_func_int8_t_s_u(0x89L, ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(0UL, p_58)), (g_179 , (((((g_205 ^= p_58) , g_75[0][0][7]) | (l_208 &= (g_114 | ((safe_add_func_uint32_t_u_u(((g_71[0] > l_76) <= g_130[5]), g_71[0])) , l_68)))) || 0x46L) == 0L)))) == g_114))) >= (-7L))))) , g_179))
            {
                int l_227 = 1L;
                int l_229 = 0xF911611CL;
                unsigned l_238 = 0x1D43434FL;
                int l_240[7][6] = {{0x09E43A77L,(-7L),(-1L),(-7L),0x09E43A77L,0L},{0x87681F8FL,(-7L),0x3D568A41L,0x8189C3A6L,0x7684A985L,0x8189C3A6L},{0x87681F8FL,0xA5D1E987L,0x87681F8FL,(-7L),0x3D568A41L,0x8189C3A6L},{0x09E43A77L,0L,0x3D568A41L,1L,0x3D568A41L,0L},{0x3D568A41L,0xA5D1E987L,(-1L),1L,0x7684A985L,(-7L)},{0x09E43A77L,(-7L),(-1L),(-7L),0x09E43A77L,0L},{0x87681F8FL,(-7L),0x3D568A41L,0x8189C3A6L,0x7684A985L,0x8189C3A6L}};
                int i, j;
                l_230 |= ((safe_div_func_uint16_t_u_u((p_58 <= (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(g_130[6], (l_229 = (g_228[2] ^= (safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((l_220 | (g_71[0] &= g_92[6][9])), (((safe_mod_func_int32_t_s_s((((l_208 ^= g_75[0][0][0]) || p_58) > (safe_rshift_func_uint8_t_u_u(((((~l_68) , (0x26E7149CL > (g_119 >= g_75[0][0][7]))) , l_76) , 249UL), p_58))), g_179)) || l_220) , l_227))) >= l_220), 0x4FL)))))) && p_58), g_145))), l_220)) ^ l_227);
                for (p_58 = 0; (p_58 <= 2); p_58 += 1)
                {
                    int l_237 = 1L;
                    int l_241[5] = {3L,3L,3L,3L,3L};
                    char l_242 = 0x14L;
                    int i;
                    l_241[0] |= ((g_228[p_58] ^ ((g_228[p_58] < (0xE48DE73DL & (l_240[5][5] &= ((((-9L) > 0x0D10L) , (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_237 = p_58), 0)), (((g_71[0] , l_220) > l_238) , l_239))) || l_229), 0x73343C1BL))) == p_58)))) >= (-1L))) , (-4L));
                    for (l_191 = 0; (l_191 <= 0); l_191 += 1)
                    {
                        int i;
                        g_130[0] = ((g_71[l_191] , (l_76 = (0x1920L | p_58))) != p_58);
                    }
                    if (l_238)
                    {
                        l_230 |= (((g_122 != g_209) , ((g_205 = l_242) <= (-1L))) ^ ((safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u(((p_58 , 0x28F2B3A5L) < (g_75[0][0][0] = (p_58 , (g_179 , 0UL)))), p_58)))) , p_58));
                        g_130[2] = ((l_239 , (safe_div_func_uint32_t_u_u(1UL, (g_205 ^ p_58)))) <= g_179);
                    }
                    else
                    {
                        unsigned l_250[6][1];
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_250[i][j] = 0x4ED5134EL;
                        }
                        l_241[0] &= (safe_mod_func_int32_t_s_s((p_58 == (l_220 = l_250[4][0])), (((p_58 , g_71[0]) >= ((safe_lshift_func_int8_t_s_s(l_83, 4)) , (g_228[2] || (p_58 >= (0x726BL ^ (safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_261, l_250[4][0])), l_262)), g_75[0][0][7])) || l_250[4][0]) , g_228[2]), p_58))))))) , p_58)));
                        l_208 = p_58;
                        if (l_227)
                            continue;
                        return g_205;
                    }
                    for (l_208 = 0; (l_208 <= 0); l_208 += 1)
                    {
                        int i, j, k;
                        return g_75[l_208][l_208][(p_58 + 5)];
                    }
                }
            }
            else
            {
                char l_263[6][3][3] = {{{(-1L),(-1L),0x7AL},{(-8L),(-1L),(-3L)},{(-1L),(-1L),0x7AL}},{{(-8L),(-1L),(-3L)},{(-1L),(-1L),0x7AL},{(-8L),(-1L),(-3L)}},{{(-1L),(-1L),0x7AL},{(-8L),(-1L),(-3L)},{(-1L),(-1L),0x7AL}},{{(-8L),(-1L),(-3L)},{(-1L),(-1L),0x7AL},{(-8L),(-1L),(-3L)}},{{(-1L),(-1L),0x7AL},{(-8L),(-1L),(-3L)},{(-1L),(-1L),0x7AL}},{{(-8L),(-1L),(-3L)},{(-1L),(-1L),0x7AL},{(-8L),(-1L),(-3L)}}};
                int i, j, k;
                if (g_228[2])
                    break;
                l_263[2][2][2] = p_58;
                for (l_262 = 0; (l_262 >= 0); l_262 -= 1)
                {
                    for (g_145 = 0; (g_145 <= 2); g_145 += 1)
                    {
                        int i, j, k;
                        l_76 |= l_263[(g_145 + 3)][l_262][g_145];
                    }
                    for (l_76 = 0; (l_76 <= 2); l_76 += 1)
                    {
                        int i, j, k;
                        g_145 = ((l_263[(l_76 + 3)][l_262][(l_262 + 1)] = ((((g_75[0][0][6] = (l_263[(l_76 + 2)][l_262][(l_262 + 1)] && (l_263[(l_76 + 3)][(l_262 + 2)][(l_262 + 2)] ^ (safe_lshift_func_uint8_t_u_u(((~((l_230 ^= ((safe_rshift_func_int16_t_s_s(((l_263[(l_262 + 1)][l_76][(l_262 + 2)] & g_75[l_262][l_262][(l_76 + 2)]) && g_75[l_262][l_262][(l_262 + 6)]), 8)) | (((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((l_208 = g_92[4][2]), 10)) == 0x2E8FL), g_71[0])) != 0x30L) , p_58))) == p_58)) != p_58), p_58))))) < g_261) | 4294967295UL) , p_58)) > g_71[0]);
                        g_145 |= (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_130[6], 2)), g_205));
                    }
                }
            }
            for (l_220 = 0; (l_220 == (-6)); l_220--)
            {
                for (l_230 = 20; (l_230 != (-17)); l_230 = safe_sub_func_int8_t_s_s(l_230, 5))
                {
                    l_68 = ((safe_lshift_func_uint8_t_u_u(((((p_58 != (g_71[0] = (safe_add_func_int32_t_s_s(((g_228[2] = (g_114 >= (-1L))) <= g_6), l_191)))) , l_220) > (safe_lshift_func_int16_t_s_s(l_239, 12))) & (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u((~(g_209 | (g_75[0][0][6] < l_208))), l_239))))), 1)) != 9L);
                }
            }
            return l_67;
        }
        g_292 &= (g_145 = (g_130[4] = (g_77 != ((safe_lshift_func_uint16_t_u_u((l_68 &= l_76), 0)) , l_291))));
        if (l_68)
            continue;
    }
    for (l_83 = 4; (l_83 >= (-27)); l_83 = safe_sub_func_int16_t_s_s(l_83, 1))
    {
        g_145 = g_77;
    }
    for (g_119 = 0; (g_119 < 21); ++g_119)
    {
        unsigned char l_297 = 0x3EL;
        int l_304 = 0x9D07DB5BL;
        if (l_68)
            break;
        if (g_205)
            break;
        l_83 = ((l_297 || (safe_rshift_func_uint16_t_u_u((+(g_261 = (((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_304 |= 0x47L), p_58)), 0)) != ((safe_add_func_uint32_t_u_u((g_71[0] > (g_228[0] = (p_58 != (safe_sub_func_uint16_t_u_u(l_309[5][0], (0xF73A63B4L || l_76)))))), ((g_209 |= p_58) , p_58))) , 1UL)) != 0L))), g_71[0]))) || g_77);
    }
    return l_68;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_71[i], "g_71[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_75[i][j][k], "g_75[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_130[i], "g_130[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_228[i], "g_228[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_813[i], "g_813[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
