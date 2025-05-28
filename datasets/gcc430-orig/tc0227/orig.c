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



static volatile int g_5 = (-2L);
static unsigned short g_16 = 0x1C97L;
static char g_42[1][5] = {{(-10L), 0xD6L, (-10L), 0xD6L, (-10L)}};
static unsigned char g_78[4] = {0x9CL, 0xAFL, 0x9CL, 0xAFL};
static unsigned g_103 = 0x9D53C4A2L;
static char g_120 = (-4L);
static short g_199[6] = {0xFDFCL, 0xFDFCL, 0xFDFCL, 0xFDFCL, 0xFDFCL, 0xFDFCL};
static unsigned g_207 = 0x26F8D6E2L;
static char g_211 = 0xF8L;
static unsigned char g_234[2][10] = {{5UL, 0xE2L, 5UL, 0xE2L, 5UL, 0xE2L, 5UL, 0xE2L, 5UL, 0xE2L}, {5UL, 0xE2L, 5UL, 0xE2L, 5UL, 0xE2L, 5UL, 0xE2L, 5UL, 0xE2L}};
static int g_252 = 0L;
static unsigned g_275 = 0UL;
static short g_286 = 0x03C6L;
static int g_287 = 0x120BC222L;
static unsigned g_316 = 0x6D39F524L;
static int g_339 = 5L;
static int g_384 = 9L;
static short g_547 = 0xD45DL;
static unsigned short g_550[10][1] = {{0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}, {0x7DF9L}};
static unsigned short g_874 = 4UL;
static volatile int g_1204 = 1L;
static int g_1249 = 0x759E3DD9L;



static int func_1(void);
static unsigned func_8(unsigned p_9, unsigned char p_10, unsigned char p_11, unsigned p_12, unsigned short p_13);
static unsigned char func_17(int p_18, int p_19);
static unsigned char func_20(short p_21);
static short func_22(short p_23, int p_24, const int p_25, char p_26, unsigned short p_27);
static int func_28(unsigned p_29);
static unsigned func_34(unsigned char p_35);
static unsigned char func_55(const unsigned char p_56, short p_57);
static short func_63(unsigned p_64, char p_65, char p_66, unsigned p_67, unsigned char p_68);
static unsigned func_72(const unsigned char p_73, short p_74, unsigned p_75, unsigned p_76);
static int func_1(void)
{
    unsigned short l_4[4];
    int l_914[7][3] = {{0xDE360430L, 0xDE360430L, 0L}, {0xDE360430L, 0xDE360430L, 0L}, {0xDE360430L, 0xDE360430L, 0L}, {0xDE360430L, 0xDE360430L, 0L}, {0xDE360430L, 0xDE360430L, 0L}, {0xDE360430L, 0xDE360430L, 0L}, {0xDE360430L, 0xDE360430L, 0L}};
    char l_930 = 0L;
    unsigned l_931[10] = {0x515D100FL, 0x515D100FL, 0x5B69C86BL, 0x515D100FL, 0x515D100FL, 0x5B69C86BL, 0x515D100FL, 0x515D100FL, 0x5B69C86BL, 0x515D100FL};
    unsigned char l_932[4][9][6] = {{{1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}}, {{1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}}, {{1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}}, {{1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}, {1UL, 250UL, 253UL, 250UL, 1UL, 0xFFL}}};
    unsigned l_974 = 1UL;
    const int l_999 = 0x3AA9133FL;
    unsigned l_1118 = 0x565FC9BCL;
    const int l_1162 = 7L;
    int l_1219 = (-9L);
    int l_1271 = 3L;
    char l_1319 = 0x94L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_4[i] = 0x1D92L;
    l_914[5][0] = ((safe_add_func_uint32_t_u_u(l_4[2], g_5)) != ((safe_mod_func_uint32_t_u_u(func_8((safe_mul_func_uint8_t_u_u(g_16, g_16)), func_17((func_20(func_22(l_4[2], l_4[3], func_28(l_4[2]), g_16, l_4[2])) || 0x17L), l_4[2]), g_16, l_4[2], g_16), 0x12D1B32EL)) != l_4[1]));
    for (g_316 = 0; (g_316 == 3); g_316 = safe_add_func_uint8_t_u_u(g_316, 1))
    {
        short l_929 = 0x786FL;
        int l_933 = 0x1E191ADEL;
        const unsigned l_941 = 0x3EE1B4F8L;
        g_384 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u(func_55(func_22((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((((safe_lshift_func_int8_t_s_u(((func_34((g_78[1] || (g_16 & (g_547 != (safe_add_func_int16_t_s_s(g_874, (~((g_199[1] || g_874) < l_929)))))))) != (g_275 ^ l_930)) != l_931[0]), l_932[0][4][1])) ^ g_384) >= l_929) & 0x2AE4L), 3)) ^ g_234[0][0]), 0xD380L)), g_120, l_929, l_933, l_929), l_931[9]), g_211)), 9));
        if ((safe_mod_func_int16_t_s_s(g_199[1], l_933)))
        {
            unsigned l_940 = 0xE8B3AFC2L;
            g_5 = (((g_384 || 1UL) ^ 65535UL) ^ (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_78[1], l_932[0][4][1])), 249UL)));
            if (func_22((func_22(((!(0x78L > g_16)) != (l_932[0][4][1] & l_933)), l_933, l_929, (func_22(g_78[1], l_940, l_940, l_4[2], l_940) ^ g_120), l_929) <= 0L), g_199[1], l_941, l_931[9], g_234[0][2]))
            {
                unsigned l_956[9][9] = {{0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}, {0xDF2F2D12L, 4294967286UL, 6UL, 0xD4B78185L, 0UL, 0x129B91AFL, 0UL, 0xD4B78185L, 6UL}};
                int i, j;
                g_384 = l_941;
                l_914[5][0] = (safe_mul_func_uint8_t_u_u(((((-1L) < (((g_234[0][0] != ((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int32_t_s_s(g_5, (0x40540818L != g_207))) != (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(func_72(g_287, func_28((2UL < func_55(g_234[1][4], ((safe_mul_func_int8_t_s_s((-1L), 255UL)) ^ l_940)))), g_286, l_956[4][4]), l_940)), l_933)), l_940))) > 0L), g_384)) & g_286)) | 0UL) >= g_286)) == l_956[4][4]) <= 0x96BC7287L), 0x82L));
                l_914[5][0] = l_933;
                l_914[6][0] = ((((((safe_sub_func_uint8_t_u_u((((!(safe_lshift_func_uint8_t_u_u(l_933, (4UL != (func_55((safe_mod_func_uint16_t_u_u(0UL, l_931[0])), l_940) < (safe_mod_func_uint16_t_u_u(0x0C76L, (((((g_42[0][0] | ((!g_550[5][0]) <= g_316)) >= 0x15AEL) == l_932[0][1][5]) || g_286) && 0xDA63L)))))))) | 4294967289UL) | g_42[0][1]), 0x4DL)) ^ 0x27295088L) || 4294967295UL) && g_287) & g_5) || l_940);
            }
            else
            {
                l_914[5][0] = ((l_940 >= g_286) >= 0x8BC8L);
            }
        }
        else
        {
            unsigned l_973 = 0x94A93DCCL;
            unsigned l_993 = 4294967293UL;
            int l_1006 = 0x8D6F4D54L;
            short l_1011 = 7L;
            unsigned l_1030 = 0UL;
            unsigned char l_1034 = 0xD1L;
            if ((g_874 > (func_63((safe_lshift_func_uint8_t_u_s(((g_275 && (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_42[0][0] < l_941), 11)), (safe_lshift_func_uint16_t_u_s((l_930 && (g_234[0][0] || 0xE3C95C43L)), 7))))) >= func_63(g_103, l_973, l_929, l_931[0], g_211)), l_974)), g_5, g_547, l_973, g_550[5][0]) & 0x71CFL)))
            {
                unsigned l_983 = 0xD66D3353L;
                char l_990 = 0xF2L;
                if (l_929)
                    break;
                for (g_339 = 1; (g_339 >= 0); g_339 -= 1)
                {
                    int l_994 = 0x1001A237L;
                    int i;
                    g_384 = func_72((safe_add_func_uint8_t_u_u(g_199[g_339], l_929)), (safe_lshift_func_int8_t_s_s((0x2F6AL & (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((l_983 || g_547), g_252)) > (g_103 < g_120)) != (g_5 > g_120)), 0x3DL))), 1)), g_874, g_199[1]);
                    l_994 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_932[0][4][1], (l_990 >= (g_199[g_339] || ((safe_sub_func_int16_t_s_s(g_78[1], (g_234[0][0] > g_78[1]))) < ((g_199[g_339] == g_550[1][0]) != (l_993 > 0UL))))))), (-4L))), 1));
                }
                l_914[5][0] = (l_914[2][0] | g_287);
                for (g_16 = 0; (g_16 < 56); g_16++)
                {
                    unsigned l_1002 = 4294967287UL;
                    g_384 = l_990;
                    if (l_930)
                    {
                        g_384 = l_932[0][4][1];
                        if (l_974)
                            break;
                    }
                    else
                    {
                        l_933 = g_199[1];
                        g_384 = (safe_rshift_func_int8_t_s_u(l_999, (safe_sub_func_int16_t_s_s(g_874, l_941))));
                    }
                    for (g_207 = 0; (g_207 <= 0); g_207 += 1)
                    {
                        l_1002 = g_550[5][0];
                    }
                }
            }
            else
            {
                unsigned short l_1003 = 65535UL;
                int l_1066 = 8L;
                l_1003 = 0x4A99DAADL;
                for (g_120 = (-11); (g_120 != (-6)); g_120 = safe_add_func_int16_t_s_s(g_120, 3))
                {
                    l_1006 = 0xF2EE3DC9L;
                    g_384 = ((l_973 || g_16) || 65535UL);
                }
                for (l_1003 = 28; (l_1003 <= 16); --l_1003)
                {
                    int l_1020 = 0x590F602EL;
                    int l_1033 = 7L;
                    int l_1039[9] = {0x23695E5EL, 0L, 0x23695E5EL, 0L, 0x23695E5EL, 0L, 0x23695E5EL, 0L, 0x23695E5EL};
                    int i;
                    if ((safe_lshift_func_uint16_t_u_u(func_72(l_974, l_1011, l_933, l_932[0][2][2]), (safe_sub_func_int32_t_s_s(g_550[6][0], ((safe_rshift_func_uint16_t_u_u(g_234[0][2], 2)) < 0x7ECBD49FL))))))
                    {
                        unsigned l_1021 = 0xCB609DF3L;
                        l_914[5][0] = ((safe_rshift_func_int16_t_s_u((0x60L && 0xEFL), func_63(l_933, l_1003, ((((safe_lshift_func_uint16_t_u_u(l_941, l_1020)) != g_199[1]) != g_874) > g_316), l_1021, g_339))) > l_973);
                    }
                    else
                    {
                        l_1039[7] = ((l_1020 && 0x8B7DB73AL) <= (safe_div_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_207, g_286)), (safe_mul_func_uint8_t_u_u((l_1030 == g_120), (safe_lshift_func_int8_t_s_s(l_1033, 3)))))) == l_1034) == (safe_div_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(g_207, 0xC3L)) < g_199[4]) | l_1020), g_234[0][0]))), g_874)));
                    }
                    if (g_120)
                    {
                        g_5 = (0x6FBAL < 0UL);
                        g_384 = (0x0316L < (safe_unary_minus_func_uint8_t_u(g_547)));
                    }
                    else
                    {
                        l_1006 = g_339;
                        g_384 = l_932[0][4][1];
                        l_933 = g_199[3];
                        if (g_286)
                            break;
                    }
                    g_5 = (safe_sub_func_int8_t_s_s(0L, (safe_div_func_int16_t_s_s((((l_1034 >= (((safe_add_func_uint32_t_u_u(((+(!l_933)) && (g_550[9][0] && (((g_252 != ((g_550[5][0] != (l_941 < (((g_5 | l_914[3][2]) != 0xCBABA526L) > 0x8B6E692BL))) & g_78[3])) && 0xB267L) < g_207))), l_1003)) == 0xB464L) ^ l_993)) & g_42[0][3]) >= 0x44CDL), g_234[0][1]))));
                    g_5 = (-8L);
                }
                for (l_930 = 0; (l_930 <= 0); l_930 += 1)
                {
                    int i, j;
                    g_384 = (safe_lshift_func_uint8_t_u_u(0xE9L, (g_42[l_930][(l_930 + 1)] > g_234[0][0])));
                    for (l_1030 = (-27); (l_1030 >= 53); l_1030 = safe_add_func_int8_t_s_s(l_1030, 8))
                    {
                        unsigned l_1065 = 4294967287UL;
                        if (g_287)
                            break;
                        l_933 = func_17(func_28((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((249UL == (safe_mod_func_uint16_t_u_u(l_1011, l_1003))) | g_286), (1L | ((safe_rshift_func_uint16_t_u_u(0xAF0AL, (g_339 >= (0x666EL && ((safe_add_func_int16_t_s_s((~(l_1065 == 0xDCL)), 0x1227L)) > 0UL))))) & l_1065)))) == g_874) & l_999), l_933)), 7)) <= l_1066), l_914[5][0]))), g_199[1]);
                    }
                }
            }
            g_5 = (safe_rshift_func_int8_t_s_s(((+((safe_sub_func_uint16_t_u_u(l_930, l_1030)) < l_932[2][6][0])) && (4294967295UL && (((safe_add_func_uint16_t_u_u(l_4[2], (safe_lshift_func_uint8_t_u_u(func_22((func_17((((safe_mul_func_uint16_t_u_u(l_932[3][4][5], 1UL)) <= g_207) < 0L), g_42[0][2]) > l_929), g_199[1], g_287, g_339, l_1006), l_1006)))) != g_199[0]) && 0L))), 3));
            l_933 = (safe_div_func_int32_t_s_s(((safe_add_func_int8_t_s_s(2L, func_63(g_16, func_63((l_932[0][2][4] <= (l_933 != (safe_lshift_func_int16_t_s_u((5UL || (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((((g_547 && l_999) >= (g_207 > l_914[3][2])) & 0UL) & g_207), 65531UL)), g_207))), l_930)))), g_287, l_929, l_932[2][4][3], l_4[3]), g_78[3], l_933, g_339))) & g_874), 6L));
        }
        g_5 = (func_63((safe_div_func_int16_t_s_s(l_941, g_207)), l_941, g_550[6][0], l_931[0], ((((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(g_78[1], 7)), l_914[5][0])) | ((l_941 || (((g_199[1] < g_384) || l_930) && g_42[0][0])) > l_929)) ^ 0xEE3FL) != 0x8549L)) == 4294967295UL);
    }
    if ((!((safe_lshift_func_uint8_t_u_s(l_931[0], ((l_4[2] == ((l_974 > func_28((safe_rshift_func_uint8_t_u_u(g_78[3], 2)))) > func_63(l_932[2][0][4], (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_287, (l_932[0][4][1] ^ (safe_div_func_uint16_t_u_u(((+(l_932[0][4][1] < g_16)) || l_931[2]), g_316))))), 65530UL)), g_211, g_339, g_16))) || l_932[0][4][1]))) || l_999)))
    {
        unsigned char l_1109 = 0x02L;
        int l_1110 = 0xDE29DB71L;
        int l_1119[5] = {0x4A90E9BEL, 0xB698257BL, 0x4A90E9BEL, 0xB698257BL, 0x4A90E9BEL};
        short l_1122 = 0L;
        int l_1149 = 0x6E68E123L;
        int i;
        if (l_932[1][8][5])
        {
            int l_1115 = (-1L);
            l_914[5][0] = (0x380CL && (0x9DL < (~((safe_div_func_int8_t_s_s((!0L), (safe_sub_func_int8_t_s_s((l_1109 | (l_930 | (((+l_1110) != (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((0x4CL || l_1115), func_72((safe_sub_func_int8_t_s_s((l_1118 || 4294967294UL), l_1110)), g_42[0][0], g_211, g_103))), 1UL))) != (-8L)))), l_1115)))) ^ 0x5675A6A4L))));
        }
        else
        {
            int l_1135[7][1][8] = {{{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}, {{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}, {{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}, {{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}, {{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}, {{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}, {{0xB2E23F6BL, 0x3044D10AL, 0x9A65C916L, (-1L), 6L, (-2L), 6L, (-1L)}}};
            int i, j, k;
            l_1119[0] = g_234[0][0];
            g_384 = (g_120 > (safe_mul_func_int8_t_s_s(g_874, ((l_1119[0] >= (l_4[2] == (l_1122 < (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_78[0] <= (safe_add_func_int32_t_s_s(l_1109, ((safe_sub_func_int32_t_s_s((func_63(g_550[6][0], (0x91ECL != (-1L)), l_1119[3], l_1135[1][0][5], g_103) > 3L), g_275)) <= g_316)))), 6L)), g_550[5][0])), 6)), l_1109))))) || g_120))));
            for (g_287 = 27; (g_287 < 25); g_287 = safe_sub_func_int16_t_s_s(g_287, 3))
            {
                char l_1144 = (-1L);
                l_1135[5][0][1] = (l_1119[3] || ((l_1109 != (safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((l_1144 & ((0x6D83CCE0L ^ (safe_sub_func_uint32_t_u_u(l_932[0][4][1], g_16))) ^ 9UL)), g_78[1])) == (safe_sub_func_uint8_t_u_u(0x26L, 0x54L))), 4294967294UL)) >= 4294967295UL), g_199[5]))) & l_1119[4]));
                return l_931[0];
            }
        }
        l_1149 = (-10L);
    }
    else
    {
        unsigned short l_1152 = 0xC2D3L;
        int l_1159 = (-4L);
        int l_1165 = 0x8753FAF7L;
        int l_1299 = 3L;
        l_1159 = ((safe_add_func_uint32_t_u_u((!l_1152), (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_914[5][0], 1UL)), (func_8(func_34(func_17((l_4[0] >= (g_78[1] | g_252)), l_1152)), g_234[0][0], g_16, g_316, g_199[2]) > l_4[2]))) > g_874), g_5)))) >= l_1152);
        g_384 = (!(safe_div_func_int16_t_s_s(func_22(l_1152, (0x61A4L < func_34(g_874)), l_1162, g_316, (((safe_sub_func_uint32_t_u_u(((253UL && (func_63(l_1152, (g_316 < 0xCEL), l_974, g_199[0], l_914[5][0]) <= g_874)) || 1L), g_384)) ^ l_1165) != g_316)), g_275)));
        for (g_120 = 0; (g_120 != 18); ++g_120)
        {
            unsigned l_1174 = 0x56AD109BL;
            unsigned l_1207[1][1][1];
            unsigned l_1248 = 0x77AE64C2L;
            unsigned char l_1322 = 0x2AL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1207[i][j][k] = 0UL;
                }
            }
            if ((safe_sub_func_uint8_t_u_u(l_1162, ((safe_div_func_uint32_t_u_u(func_63(((safe_add_func_uint16_t_u_u(g_199[4], g_103)) <= func_72(l_974, func_63(l_1174, l_1152, (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(65535UL, (((safe_add_func_int8_t_s_s((l_974 >= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u(((func_72(l_1174, l_1159, g_275, l_1174) && g_874) == g_42[0][0]), 2)) == 0UL) > g_103), 1)), l_1159))), l_930)) > g_287) ^ (-1L)))), g_275)), g_275)), g_234[1][2], l_1174), g_874, g_42[0][0])), g_207, g_42[0][0], g_120, l_1152), 0xC067EAB9L)) == l_1174))))
            {
                for (g_316 = 0; (g_316 <= 32); g_316++)
                {
                    g_384 = (((safe_rshift_func_int16_t_s_u(0L, 14)) == (safe_lshift_func_int8_t_s_u(l_1162, g_874))) <= 0x31C3L);
                    return g_199[1];
                }
            }
            else
            {
                unsigned l_1201 = 1UL;
                unsigned l_1206 = 4294967291UL;
                unsigned short l_1250[1][9][10] = {{{1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}, {1UL, 65532UL, 1UL, 0x387FL, 1UL, 0x168CL, 65533UL, 65533UL, 0x168CL, 1UL}}};
                int i, j, k;
                if (g_5)
                {
                    unsigned l_1200 = 4294967291UL;
                    char l_1205 = 6L;
                    int l_1208 = 0x1E74BCA0L;
                    for (l_1165 = 0; (l_1165 != 8); l_1165 = safe_add_func_uint16_t_u_u(l_1165, 3))
                    {
                        l_1207[0][0][0] = func_72((1L == (safe_unary_minus_func_uint8_t_u(g_78[1]))), (safe_sub_func_int32_t_s_s(func_63(func_63(g_42[0][0], (~l_1200), l_1201, g_339, (((((safe_mul_func_int16_t_s_s(g_103, (-7L))) & g_1204) != g_384) & 0x1FC5D7BEL) == l_1152)), g_234[0][0], g_120, l_1205, l_1206), (-1L))), g_550[5][0], g_339);
                        g_384 = l_4[1];
                    }
                    l_1208 = l_914[0][1];
                    g_384 = l_1201;
                }
                else
                {
                    g_384 = (((l_1201 <= l_1201) != (safe_mul_func_int16_t_s_s(0x097FL, (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((1L ^ (0x10ADL || (0L || (((safe_mul_func_int8_t_s_s((l_4[2] >= l_914[3][2]), g_78[2])) && 0x1B1DFC36L) >= 0xD597791DL)))) <= g_339), 3)), g_78[0]))))) & 0xA254L);
                }
                g_1204 = (safe_rshift_func_uint16_t_u_s(1UL, ((func_72(g_287, l_1219, (safe_mod_func_uint32_t_u_u((((g_42[0][0] != (safe_lshift_func_uint16_t_u_u(g_5, (0x59A4L == g_874)))) ^ l_1152) < (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s(1L, 12)) <= g_211) <= g_550[8][0]), 3))), g_120)), l_1201) && l_1159) < 0x02657E79L)));
                for (l_1118 = (-15); (l_1118 >= 11); l_1118 = safe_add_func_uint32_t_u_u(l_1118, 6))
                {
                    unsigned l_1239 = 0UL;
                    int l_1278 = 0x843B3946L;
                    if ((safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(l_1165)), (l_1239 >= l_1201))), (+((-1L) <= l_1239)))), l_1206)), (safe_mod_func_int32_t_s_s((~g_42[0][4]), g_275)))))
                    {
                        l_1159 = ((safe_mod_func_uint8_t_u_u(g_5, (((((safe_div_func_uint16_t_u_u(g_199[1], l_1152)) ^ (((!g_234[1][5]) <= g_550[0][0]) != (l_1239 == g_547))) | l_1165) < ((func_55((safe_rshift_func_uint8_t_u_u(g_42[0][2], 4)), l_1248) && g_1249) < l_1250[0][1][9])) ^ (-7L)))) != g_207);
                    }
                    else
                    {
                        unsigned l_1251 = 0xB804B755L;
                        int l_1252 = 0xBF6F39C8L;
                        g_5 = ((g_339 > g_234[0][0]) != 0x4CL);
                        l_914[5][0] = l_1251;
                        g_384 = g_287;
                        l_1252 = g_120;
                    }
                    if (l_4[2])
                    {
                        return l_1201;
                    }
                    else
                    {
                        g_384 = 0L;
                    }
                    l_914[5][1] = (g_874 == (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((0x83L > (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_1248 < (-2L)) | 5L), 8)), ((safe_lshift_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s(((((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x57E0L, (g_234[0][0] | ((0x2922DD74L < l_1271) < g_550[8][0])))), g_42[0][0])), g_103)) != 0x328377DBL) <= 0xCDEB6507L) && g_16), l_1239)) > g_1249) > g_547) <= l_1165), g_103)) < g_874)))), g_874)) | l_1159), (-3L))));
                    for (g_384 = (-7); (g_384 < (-13)); --g_384)
                    {
                        unsigned l_1277 = 0xF7ADC1D9L;
                        int l_1279 = 9L;
                        l_1278 = (safe_unary_minus_func_int32_t_s((0x5198L && ((safe_lshift_func_uint8_t_u_u(g_287, 7)) || l_1277))));
                        l_1279 = 0xF7118A89L;
                        l_1159 = l_1207[0][0][0];
                        if (g_252)
                            continue;
                    }
                }
            }
            for (g_287 = 0; (g_287 <= (-2)); g_287 = safe_sub_func_int8_t_s_s(g_287, 2))
            {
                short l_1297[2][6][7] = {{{0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}}, {{0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}, {0L, 0x2B45L, 0x03B4L, 0x2B45L, 0L, 0x2B45L, 0x03B4L}}};
                int l_1298 = 0x0B8BBEECL;
                int i, j, k;
                for (l_1159 = 25; (l_1159 >= 2); l_1159 = safe_sub_func_uint16_t_u_u(l_1159, 3))
                {
                    char l_1284 = 1L;
                    int l_1302 = 0x4BD9BF3BL;
                    l_1298 = (l_1284 <= (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((l_1284 || ((safe_rshift_func_int16_t_s_u(((g_199[2] > 255UL) < 0x9021L), 0)) == (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((g_316 < 0L), l_1297[1][3][1])), 0x51L)))), g_78[1])), g_287)));
                    l_1299 = g_384;
                    for (l_1271 = 12; (l_1271 != 9); l_1271 = safe_sub_func_int8_t_s_s(l_1271, 8))
                    {
                        l_1302 = 3L;
                        if (g_384)
                            break;
                        l_914[5][0] = l_1248;
                        return g_547;
                    }
                    for (l_1298 = 0; (l_1298 >= 0); l_1298 -= 1)
                    {
                        int i, j;
                        l_914[(l_1298 + 6)][(l_1298 + 1)] = (0xAEL >= g_120);
                        l_914[(l_1298 + 4)][(l_1298 + 1)] = (safe_mod_func_uint8_t_u_u(250UL, func_22(l_1284, (safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((0x1DL && (safe_lshift_func_int16_t_s_u(((-5L) == 0xF4L), (safe_div_func_uint32_t_u_u(4294967295UL, g_120))))), ((((safe_mul_func_uint8_t_u_u((+g_78[1]), (func_63((safe_sub_func_int32_t_s_s(g_199[1], l_1297[1][3][1])), g_103, g_199[1], l_914[(l_1298 + 6)][(l_1298 + 1)], l_1297[1][1][4]) != (-1L)))) && 3L) != g_384) < g_874))) || l_1297[1][3][1]), g_286)), g_550[5][0], l_1165, l_1174)));
                    }
                }
            }
            g_384 = (safe_add_func_uint8_t_u_u(func_63(l_1319, (l_4[3] > (safe_lshift_func_int16_t_s_u(g_42[0][2], 10))), l_1207[0][0][0], (((g_286 | (0L ^ g_5)) != func_63(l_974, g_1249, g_234[1][8], g_316, l_1299)) | g_211), l_1322), g_199[1]));
            l_1271 = g_42[0][0];
        }
    }
    if (l_1219)
    {
        g_1204 = (((safe_lshift_func_uint16_t_u_s(0UL, 9)) > (4294967295UL > (safe_div_func_int32_t_s_s(l_930, g_316)))) | g_384);
    }
    else
    {
        int l_1327 = 0x6DAB4628L;
        g_384 = l_1327;
        return l_1327;
    }
    return l_974;
}







static unsigned func_8(unsigned p_9, unsigned char p_10, unsigned char p_11, unsigned p_12, unsigned short p_13)
{
    const int l_529 = 0x2152C673L;
    int l_549 = (-1L);
    unsigned short l_563[10][1][1] = {{{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}, {{0xC87CL}}};
    int l_591 = (-8L);
    unsigned l_898 = 0UL;
    char l_913[10] = {0x92L, (-1L), 0x92L, (-1L), 0x92L, (-1L), 0x92L, (-1L), 0x92L, (-1L)};
    int i, j, k;
    if ((((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0xF15DL, 8)), (p_13 ^ l_529))), (safe_add_func_uint16_t_u_u((p_9 < (safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(g_384, 0xB7C5L)) != 0x61B6968DL) < func_63((safe_add_func_int8_t_s_s(0x04L, p_9)), g_384, p_13, g_42[0][0], g_211)), 0x36F794D4L))), 9UL)))), g_234[0][0])), g_316)) & 1L) <= g_316))
    {
        unsigned l_548 = 0x678CA935L;
        char l_619 = (-4L);
        unsigned l_639 = 4294967293UL;
        int l_640[1][10][9] = {{{(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}, {(-1L), 0x084CC868L, (-9L), 0x7FF39455L, 0x084CC868L, 0x2BEF5318L, 0x084CC868L, 0x7FF39455L, (-9L)}}};
        int i, j, k;
        l_549 = (safe_mul_func_uint16_t_u_u(g_316, (safe_mod_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint8_t_u(((g_103 >= g_199[2]) != p_13))) <= g_42[0][4]), (((func_63(p_11, ((~(safe_lshift_func_uint16_t_u_u((9UL == ((p_12 | g_42[0][1]) && 0x8F7BL)), g_547))) <= l_548), g_16, p_10, l_549) && 4294967295UL) | 8UL) | p_13))) != l_548) | g_550[5][0]), g_207))));
        if (((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((((255UL == ((safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(func_17(p_11, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(func_72(l_548, (0x4BL ^ 0xD9L), g_384, l_549), l_548)) != g_234[0][9]), l_548))), g_234[0][0])), 0x01CAL)) < l_548)) | l_563[6][0][0]) && l_529), l_549)) && g_384), 2)) | p_13))
        {
            return g_316;
        }
        else
        {
            unsigned char l_578 = 0UL;
            int l_612 = 8L;
            for (g_120 = 0; (g_120 <= 1); g_120 += 1)
            {
                const short l_576 = 0x9DDBL;
                l_549 = (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u(0x22EFL, ((((g_78[1] && p_12) & (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u(g_275, (safe_div_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(1L, l_576)) != (((safe_unary_minus_func_uint32_t_u(0UL)) != l_563[6][0][0]) >= l_578)) >= p_10), p_11)))))), g_211)) & p_9) >= 0x82L)) != l_548) && l_548))))) && l_548) | 0x83L);
                g_384 = (safe_sub_func_uint8_t_u_u(l_578, p_12));
                for (l_549 = 0; (l_549 <= 0); l_549 += 1)
                {
                    int i, j;
                    g_384 = g_234[(l_549 + 1)][(l_549 + 6)];
                    for (p_13 = 0; (p_13 <= 0); p_13 += 1)
                    {
                        int i, j, k;
                        l_591 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_563[(g_120 + 8)][l_549][p_13], ((safe_rshift_func_uint16_t_u_u(65530UL, 12)) != (func_72(g_42[l_549][(p_13 + 2)], l_563[6][0][0], ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_547, g_42[0][0])), ((func_22(l_548, g_550[9][0], (255UL & p_10), g_42[0][0], l_548) == g_199[1]) & g_42[0][0]))) || 9UL), l_576) <= p_10)))), 0x4F34L));
                        if (l_548)
                            break;
                    }
                    for (g_384 = 0; (g_384 >= 0); g_384 -= 1)
                    {
                        return p_13;
                    }
                }
                if (l_548)
                {
                    return p_10;
                }
                else
                {
                    int l_598 = (-1L);
                    for (l_548 = 0; (l_548 <= 1); l_548 += 1)
                    {
                        int i, j;
                        l_591 = (0UL <= ((safe_add_func_int16_t_s_s(((0xC346D086L < g_234[l_548][(l_548 + 7)]) < (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((g_199[(l_548 + 3)] & (g_199[(l_548 + 1)] == p_9)), l_548)), 4294967295UL))), (0x83FAL ^ 65527UL))) >= g_103));
                        if (l_598)
                            break;
                        g_384 = g_547;
                    }
                }
                for (g_339 = 0; (g_339 <= 1); g_339 += 1)
                {
                    int i, j;
                    return g_234[g_339][(g_120 + 4)];
                }
            }
            if (func_17(g_384, l_548))
            {
                int l_610[3][3][7] = {{{(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}, {(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}, {(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}}, {{(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}, {(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}, {(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}}, {{(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}, {(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}, {(-2L), (-2L), 0L, 0x4551AED7L, 9L, 0x4551AED7L, 0L}}};
                int i, j, k;
                for (p_11 = 0; (p_11 <= 0); p_11 += 1)
                {
                    short l_599 = 0x4A20L;
                    g_384 = p_9;
                    l_599 = func_20(p_13);
                    for (l_578 = 0; (l_578 <= 0); l_578 += 1)
                    {
                        char l_611[1][1][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_611[i][j][k] = 0x01L;
                            }
                        }
                        l_612 = (safe_mul_func_uint16_t_u_u((((p_12 | (safe_rshift_func_int16_t_s_s(func_17(func_22((safe_mul_func_int16_t_s_s((p_10 >= ((l_563[0][0][0] || (0xD4L & p_10)) && (p_12 | ((safe_mod_func_int8_t_s_s((g_252 > (safe_mul_func_uint8_t_u_u((l_563[9][0][0] >= p_12), g_275))), p_11)) != l_599)))), l_599)), l_578, g_42[0][0], p_9, g_199[2]), l_610[0][0][5]), 5))) >= l_611[0][0][0]) >= 0x755DEFEBL), l_548));
                        g_384 = (l_611[0][0][0] >= g_211);
                        g_384 = (safe_mod_func_int16_t_s_s((1UL >= (l_591 || func_72(p_11, l_529, g_199[2], l_548))), (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(3UL, func_63(g_275, g_234[1][4], l_619, g_207, g_550[5][0]))), l_619))));
                    }
                    for (p_9 = 0; (p_9 <= 0); p_9 += 1)
                    {
                        return l_612;
                    }
                    for (p_9 = 0; (p_9 <= 0); p_9 += 1)
                    {
                        l_591 = (func_34(g_42[0][0]) > (safe_sub_func_uint8_t_u_u(p_12, g_207)));
                        return l_610[0][0][5];
                    }
                }
                l_610[0][0][5] = func_20((safe_lshift_func_int8_t_s_s(((func_28((l_548 == g_42[0][0])) | ((0x1DL || func_63((((func_63((safe_sub_func_uint16_t_u_u(func_63(l_610[0][0][6], p_12, p_13, p_12, p_11), p_9)), p_10, g_16, p_13, g_199[0]) == 2UL) | 0x46L) < p_13), p_11, l_610[0][0][5], p_12, p_10)) >= 1UL)) | p_11), 2)));
            }
            else
            {
                unsigned l_628[6] = {1UL, 4294967294UL, 1UL, 4294967294UL, 1UL, 4294967294UL};
                int l_641 = 0x8909DC50L;
                unsigned short l_716 = 65535UL;
                int i;
                if ((p_10 ^ 0x4FL))
                {
                    unsigned char l_637 = 0x9CL;
                    int l_660 = 0x950B9992L;
                    char l_665 = 0x7DL;
                    int l_666 = 1L;
                    for (g_103 = 0; (g_103 <= 3); g_103 += 1)
                    {
                        int l_638 = 0xD2EE05ACL;
                        int i;
                        l_641 = func_72((((safe_rshift_func_int16_t_s_s(func_63(g_78[g_103], func_63(p_11, l_628[2], ((((-3L) >= ((-1L) >= ((safe_lshift_func_uint8_t_u_s(func_63(g_120, (safe_mul_func_int8_t_s_s(p_11, func_63(((safe_sub_func_int32_t_s_s(func_63(func_63(((safe_mod_func_uint8_t_u_u(p_10, g_234[1][8])) != 0x1D82251CL), p_13, l_612, l_628[2], p_12), p_12, g_550[5][0], g_550[5][0], g_78[0]), 0x4F3D3550L)) || p_13), g_316, l_637, g_252, p_13))), g_550[5][0], l_638, g_103), 7)) || p_10))) <= 0x49D69E25L) | l_639), g_384, g_547), g_339, g_550[5][0], p_11), 5)) ^ l_640[0][8][8]) < g_207), l_637, g_287, l_549);
                    }
                    for (g_547 = 0; (g_547 != (-28)); g_547 = safe_sub_func_uint32_t_u_u(g_547, 9))
                    {
                        l_641 = func_63(p_11, ((func_63(p_11, (p_10 || (safe_div_func_int32_t_s_s(l_619, (safe_mul_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((func_28(p_13) == (safe_div_func_int32_t_s_s(0xFCA4021DL, g_234[0][0]))), 2)), p_12)) || g_252), g_207)), 0x4BC43B1CL)) && 8L) <= g_286) >= p_11), g_234[0][0]))))), p_10, p_10, l_637) < 0x8BL) < g_234[1][0]), p_13, l_591, l_628[2]);
                        l_660 = (safe_lshift_func_uint16_t_u_s(l_563[2][0][0], 10));
                    }
                    g_384 = (safe_add_func_uint16_t_u_u((g_211 > (safe_div_func_uint16_t_u_u(p_13, (0x5FD63D6AL || l_665)))), 1L));
                    l_666 = p_11;
                }
                else
                {
                    char l_692[3][4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_692[i][j] = 5L;
                    }
                    if ((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((!(safe_lshift_func_int8_t_s_u(g_550[5][0], 7))), (safe_rshift_func_uint8_t_u_s(p_13, 2)))), (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_234[0][3], p_13)), 5)))))
                    {
                        unsigned l_683 = 7UL;
                        unsigned l_697 = 4294967295UL;
                        g_384 = func_72((0x2AC313E8L | (safe_add_func_uint16_t_u_u(3UL, 0xAAB5L))), func_34(func_72((safe_mod_func_int32_t_s_s(p_13, g_42[0][0])), l_683, ((safe_mod_func_int16_t_s_s((0xC8L > ((l_612 | ((safe_div_func_uint16_t_u_u((((((safe_div_func_uint16_t_u_u((+((+(safe_mul_func_int16_t_s_s(((p_9 ^ p_9) < g_42[0][0]), l_683))) || 0xBC40L)), 0xF039L)) && p_9) && 0x95CBL) & g_78[1]) >= g_42[0][2]), g_275)) || g_199[1])) && l_692[2][2])), g_316)) | 0x72B04E83L), p_11)), g_16, l_640[0][8][8]);
                        g_384 = ((safe_mul_func_uint8_t_u_u(((+(safe_add_func_uint32_t_u_u((p_11 > (255UL != ((+p_13) && ((l_697 || (safe_mod_func_uint32_t_u_u((l_640[0][7][2] & (safe_lshift_func_int8_t_s_s(p_11, (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(247UL, p_11)), g_199[1]))))), 1UL))) ^ g_547)))), 0UL))) && g_211), g_234[0][4])) ^ g_384);
                        return g_199[1];
                    }
                    else
                    {
                        return p_12;
                    }
                }
                if ((((((safe_div_func_uint16_t_u_u(p_9, func_17((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(func_72(p_10, l_563[6][0][0], (+p_13), (g_234[1][7] & g_339)), (safe_lshift_func_int8_t_s_s(1L, ((1L <= 0xB9B92814L) < g_275))))), 0xA3BFB981L)), g_234[0][1])), p_12))) != 0x5CD58287L) >= g_234[0][0]) != g_234[0][0]) && l_591))
                {
                    l_612 = p_10;
                    l_549 = p_11;
                }
                else
                {
                    char l_717[7][7][5] = {{{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}, {{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}, {{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}, {{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}, {{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}, {{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}, {{0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}, {0x82L, 0x13L, 0xDAL, 0x8BL, 0xEDL}}};
                    int l_720 = 0x55604310L;
                    int i, j, k;
                    g_384 = ((((g_103 && (p_11 >= (-5L))) > func_63(l_716, l_717[4][1][2], p_13, (p_9 == (l_716 < l_717[4][1][2])), l_640[0][6][2])) || 1L) > p_11);
                    l_720 = g_316;
                    g_384 = ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(p_13, (0L & (l_529 && (safe_rshift_func_int16_t_s_u(l_717[5][3][4], ((p_9 ^ (p_11 || (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_9, func_72((safe_sub_func_int16_t_s_s(0L, ((safe_sub_func_int8_t_s_s(p_11, g_16)) >= 0xD10BDABCL))), l_720, p_12, p_11))), l_717[4][1][2])))) <= l_628[2]))))))) || 0L), 65533UL)), 2L)) || g_16);
                    if ((g_16 < g_339))
                    {
                        int l_741 = (-5L);
                        g_384 = g_275;
                        l_641 = (g_211 & l_578);
                        l_549 = ((p_13 | func_17(((-1L) || ((((0xB3L >= g_316) <= (safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(func_55(l_529, l_717[3][5][2]), l_563[9][0][0])) | g_286) && g_550[6][0]), l_741))) & p_12) != 0x4D67L)), g_207)) == p_13);
                    }
                    else
                    {
                        return l_628[3];
                    }
                }
            }
            l_612 = (l_619 == 0xC8L);
        }
        for (p_11 = 14; (p_11 > 22); p_11 = safe_add_func_int32_t_s_s(p_11, 1))
        {
            for (p_9 = (-30); (p_9 >= 60); p_9 = safe_add_func_int8_t_s_s(p_9, 8))
            {
                if (g_286)
                    break;
                l_640[0][3][6] = 0L;
            }
        }
        g_384 = g_16;
    }
    else
    {
        short l_751 = 2L;
        int l_831[5];
        char l_870 = 4L;
        int l_888[2];
        int i;
        for (i = 0; i < 5; i++)
            l_831[i] = 0xDBD7A7A0L;
        for (i = 0; i < 2; i++)
            l_888[i] = (-10L);
        for (p_13 = 0; (p_13 <= 35); ++p_13)
        {
            int l_748 = 0x2BC2F0A1L;
            int l_792 = 0x7BA0DD01L;
            unsigned l_875 = 1UL;
            for (g_211 = 0; (g_211 <= 5); g_211 += 1)
            {
                int l_756 = 1L;
                unsigned l_779 = 0x71F0A754L;
                l_549 = l_748;
                l_549 = (-1L);
                if (func_22((safe_mod_func_uint8_t_u_u(0x09L, l_751)), func_22((+(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(l_756, (0x5CL == (g_547 > func_63((safe_sub_func_int8_t_s_s(l_748, g_287)), (safe_unary_minus_func_uint32_t_u((~(l_591 >= ((func_17(l_756, l_748) <= l_756) < p_12))))), g_252, p_9, p_12))))), 4)) != 0x9068L) || 0x51L)), p_13, p_11, l_751, l_756), l_748, p_11, p_9))
                {
                    short l_778 = (-4L);
                    for (l_591 = 1; (l_591 <= 5); l_591 += 1)
                    {
                        int i;
                        g_384 = 1L;
                        l_748 = (safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_199[g_211], (g_199[3] | (safe_sub_func_uint32_t_u_u(p_11, (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(func_22(func_17(p_11, g_211), ((safe_mul_func_uint8_t_u_u(l_591, l_529)) ^ (safe_div_func_uint16_t_u_u(0xD49CL, l_756))), l_756, g_199[g_211], g_234[1][5]), 0xCE767E4EL)), l_756)), g_211)), 0x65L))))))), l_778));
                        if (g_252)
                            break;
                    }
                    for (g_16 = 0; (g_16 <= 3); g_16 += 1)
                    {
                        int i;
                        g_384 = g_78[g_16];
                        g_384 = l_748;
                        return l_779;
                    }
                }
                else
                {
                    unsigned char l_793 = 0x34L;
                    int l_794 = 0L;
                    if (g_42[0][4])
                        break;
                    l_794 = ((g_234[0][7] & func_55(p_9, (safe_lshift_func_int8_t_s_u(g_287, ((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_9, (0x9FL | ((l_751 ^ (safe_mod_func_int16_t_s_s(func_28(func_22((safe_lshift_func_int8_t_s_s(0x9BL, l_792)), l_793, l_751, g_103, g_42[0][3])), p_10))) < l_793)))), l_751)), g_211)) <= g_199[1]))))) < l_751);
                    for (l_794 = 0; l_794 < 4; l_794 += 1)
                    {
                        g_78[l_794] = 0x49L;
                    }
                    return l_756;
                }
            }
            for (g_339 = 0; (g_339 != 28); g_339++)
            {
                int l_801 = 0xAB860160L;
                int l_897[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_897[i] = 0x8A692C4DL;
                if ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_287, (l_801 ^ g_78[1]))) | 0x5FC669C4L), ((0x481B34DDL ^ (safe_mul_func_int16_t_s_s(g_211, (safe_mul_func_int16_t_s_s(0x1B57L, 0x1FC3L))))) < (((safe_add_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_207, l_563[4][0][0])) == l_563[7][0][0]), p_10)) > 4294967293UL) > p_10)))))
                {
                    short l_810 = (-6L);
                    if ((0x72E08502L >= l_563[2][0][0]))
                    {
                        l_810 = 1L;
                        if (g_286)
                            continue;
                        return l_801;
                    }
                    else
                    {
                        int l_828 = 0x307F58C3L;
                        l_748 = func_17((4294967294UL && (safe_add_func_uint32_t_u_u(4294967295UL, (safe_mul_func_int16_t_s_s(func_55(g_42[0][0], l_810), ((safe_add_func_int16_t_s_s(((g_287 >= (safe_lshift_func_int16_t_s_s((((safe_unary_minus_func_uint16_t_u(1UL)) <= p_9) < ((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(1UL, 10)) >= l_801), 4294967290UL)) ^ g_287)), g_234[0][0]))) < p_12), g_234[1][1])) > 0xB82CL)))))), p_11);
                        g_384 = (0L && l_549);
                        l_591 = (p_12 > (safe_rshift_func_int16_t_s_s(((p_12 > l_751) & (safe_mul_func_uint8_t_u_u((+l_810), (l_828 == g_199[2])))), 10)));
                    }
                }
                else
                {
                    short l_868 = 0x21D7L;
                    l_831[2] = (((safe_sub_func_uint8_t_u_u(0x34L, (l_792 | p_13))) >= g_16) | p_10);
                    for (g_120 = (-20); (g_120 <= (-11)); g_120 = safe_add_func_int8_t_s_s(g_120, 7))
                    {
                        unsigned short l_869 = 0x3C53L;
                        unsigned short l_871[3][6][7] = {{{0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}}, {{0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}}, {{0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}, {0x19F5L, 0UL, 0x279FL, 65530UL, 0xE922L, 0x124FL, 0x19F5L}}};
                        int i, j, k;
                        l_831[2] = ((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(g_234[0][3])) & p_13), (((((((safe_mul_func_uint16_t_u_u(p_11, 0x9A1AL)) < (safe_div_func_int8_t_s_s(1L, 0x1CL))) && 0x93L) | (g_199[0] <= ((safe_mul_func_int8_t_s_s(g_211, l_801)) > l_792))) | 4L) != l_831[2]) || 0L))) | l_831[2]);
                        g_384 = ((safe_add_func_uint16_t_u_u((p_9 <= func_63(g_207, (g_120 <= (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(p_12)), (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(((5UL ^ ((p_13 > (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((func_63(g_211, (safe_rshift_func_uint8_t_u_s((l_751 || ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(func_34(p_11), l_868)), g_275)) < g_252)), p_12)), g_339, l_868, g_275) < l_869), g_252)), 12))) != g_550[8][0])) & 65535UL), g_234[0][0])) | (-2L)) < l_870), 0xB697FA78L)), (-3L))))), g_234[0][0]))), l_869, g_211, l_871[0][3][4])), p_9)) <= l_748);
                        g_384 = (safe_sub_func_uint8_t_u_u((g_874 <= p_11), ((l_875 > p_10) && (g_384 == (((p_9 && (safe_add_func_uint8_t_u_u(p_12, (0xDFL && (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_286, p_11)), 8UL)), g_42[0][0])))))) < p_10) >= g_316)))));
                    }
                    l_748 = (func_72((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((g_287 & g_103), 14)), g_316)), l_888[0], ((0x89DBL != g_874) != g_42[0][0]), l_831[2]) > 0UL);
                }
                l_897[1] = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_55(g_207, g_252), 12)), 0xA97FL)) & func_63(g_316, func_63((safe_mul_func_uint16_t_u_u(((g_199[1] && (safe_div_func_uint8_t_u_u(p_9, p_11))) < g_252), 0x71AEL)), p_9, l_792, g_211, g_339), p_10, g_874, g_199[1])) || 0x90E1L);
                return l_792;
            }
            if (g_339)
                continue;
            g_384 = (func_28(p_13) | (!(func_63(l_888[0], l_898, l_591, (g_16 & l_748), p_11) == p_12)));
        }
        for (l_591 = 0; (l_591 == 4); ++l_591)
        {
            l_888[0] = func_20(func_17((p_11 ^ (-1L)), g_78[1]));
        }
        l_591 = (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((0xCCE94647L ^ func_28(((safe_add_func_int16_t_s_s(func_72((safe_mul_func_uint16_t_u_u((g_199[1] == l_591), p_9)), ((((safe_sub_func_uint32_t_u_u((g_384 | (l_888[0] >= g_199[5])), 0x88424DB8L)) | (safe_mod_func_int8_t_s_s((((6L > p_10) & 1L) ^ 0x7EL), 0x61L))) | g_103) | 255UL), p_12, l_870), l_913[3])) < g_42[0][0]))), p_10)), p_9));
    }
    return g_547;
}







static unsigned char func_17(int p_18, int p_19)
{
    unsigned l_507 = 2UL;
    int l_508[2];
    int l_513 = 0x0206790DL;
    unsigned l_518[5];
    int i;
    for (i = 0; i < 2; i++)
        l_508[i] = 0x8C272DE3L;
    for (i = 0; i < 5; i++)
        l_518[i] = 0x1AAE140DL;
    l_508[0] = l_507;
    g_384 = (safe_lshift_func_int16_t_s_u((l_508[0] || (safe_div_func_uint16_t_u_u(g_78[1], 6L))), (p_18 | l_513)));
    g_384 = ((p_18 | (g_207 != (safe_div_func_uint8_t_u_u(func_28(g_384), g_16)))) < (safe_rshift_func_int8_t_s_s(l_518[1], 6)));
    return g_199[1];
}







static unsigned char func_20(short p_21)
{
    unsigned short l_169 = 65532UL;
    unsigned l_170 = 3UL;
    short l_251 = 0x889DL;
    int l_351 = (-10L);
    unsigned l_387 = 0xF2DD593AL;
    int l_399 = (-1L);
    int l_400[7] = {0x7A651336L, 0L, 0x7A651336L, 0L, 0x7A651336L, 0L, 0x7A651336L};
    unsigned l_455[9][10] = {{4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}, {4294967292UL, 3UL, 1UL, 3UL, 4294967292UL, 1UL, 4294967292UL, 3UL, 1UL, 3UL}};
    unsigned char l_489[3];
    unsigned short l_496 = 65535UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_489[i] = 0x6BL;
    for (g_120 = 0; (g_120 <= 3); g_120 += 1)
    {
        unsigned short l_171 = 0x6F66L;
        unsigned short l_198 = 65535UL;
        int l_233 = 0xC587C630L;
        unsigned char l_235[2];
        unsigned l_265 = 0x72CF074FL;
        unsigned l_283 = 1UL;
        int l_411 = 0x00B3AA98L;
        char l_464 = 0x02L;
        char l_471[4][1] = {{0xA3L}, {0xA3L}, {0xA3L}, {0xA3L}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_235[i] = 0x4CL;
        for (g_103 = 0; (g_103 <= 0); g_103 += 1)
        {
            int l_212 = (-4L);
            char l_284 = 2L;
            unsigned short l_285[8];
            int i, j;
            for (i = 0; i < 8; i++)
                l_285[i] = 65535UL;
            if (g_42[g_103][(g_103 + 2)])
            {
                int l_184 = 0xAE2E0842L;
                int i;
                if ((safe_rshift_func_int8_t_s_s((((g_78[(g_103 + 2)] > ((safe_mul_func_uint8_t_u_u(g_42[0][0], ((g_16 != (p_21 <= 0x84CD6134L)) || func_63(p_21, (safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(p_21, (func_63(l_169, g_42[0][0], g_16, g_78[1], g_78[(g_103 + 2)]) & l_170))) == g_16), 0x766CL)) >= 0UL), g_103)), g_78[(g_103 + 2)], l_171, l_169)))) && p_21)) != p_21) != l_171), p_21)))
                {
                    int l_185 = 0xA1B7E207L;
                    int l_231[10][6][2] = {{{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}, {{1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}, {1L, 8L}}};
                    int i, j, k;
                    if ((safe_mul_func_uint16_t_u_u(func_72(g_78[0], (l_169 || (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((0x69L && (p_21 <= g_78[1])), p_21)), func_63(((g_78[1] < (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(func_63(g_78[(g_103 + 2)], g_78[1], g_120, g_78[(g_103 + 2)], g_42[0][0]), p_21)), 0UL))) > p_21), g_120, l_171, g_78[1], g_42[g_103][(g_103 + 2)]))) == 0xE57973F9L), 0x19L))), p_21, p_21), l_184)))
                    {
                        l_185 = 0x90B43D51L;
                    }
                    else
                    {
                        int l_206 = 0xCC65BC01L;
                        g_199[1] = (((safe_rshift_func_int8_t_s_u(g_42[0][1], (safe_lshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((+((p_21 < l_185) <= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_21, p_21)), (safe_mul_func_int8_t_s_s(func_63(l_171, p_21, g_42[0][0], g_42[g_103][(g_103 + 2)], l_198), p_21)))))), l_185)) >= 247UL), 13)))) != g_78[(g_103 + 2)]) > p_21);
                        l_206 = ((p_21 != 4294967295UL) < func_63(g_78[0], g_78[(g_103 + 2)], p_21, func_63(p_21, g_42[0][0], ((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_63(((p_21 != (p_21 <= p_21)) <= 0xD19BEEC0L), g_199[0], l_184, p_21, p_21), 7UL)), p_21)) & 4L), g_16, g_42[0][4]), l_171));
                        g_207 = g_199[2];
                    }
                    if (p_21)
                    {
                        unsigned l_208 = 0x8E9D5C40L;
                        g_211 = func_63(p_21, l_198, l_208, ((g_207 <= p_21) && l_208), ((safe_rshift_func_int8_t_s_u((8UL & (func_72(g_207, l_169, g_42[g_103][(g_103 + 2)], p_21) > 0x90L)), g_207)) == 0xFA8EA3A5L));
                    }
                    else
                    {
                        int l_232 = 0x967B358CL;
                        l_212 = g_103;
                        l_232 = (safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(func_63(g_211, l_185, p_21, (((safe_div_func_uint32_t_u_u(g_120, l_184)) & (g_16 < (safe_add_func_uint16_t_u_u((~(((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(g_42[0][4], 3)) != (safe_rshift_func_uint8_t_u_u((((0x1FL > ((safe_div_func_int32_t_s_s((0UL < g_42[0][2]), 0xBAC1B64AL)) < 0x15L)) != p_21) != 9UL), 2))) ^ 1L), g_42[0][0])) ^ g_42[g_103][(g_103 + 2)]), p_21)) ^ g_211) ^ p_21)), p_21)))) == l_231[2][0][0]), g_199[0]), l_185)) == g_120) >= l_185), 7));
                        if (l_170)
                            continue;
                        l_184 = g_120;
                    }
                    l_233 = g_199[2];
                    if (p_21)
                        break;
                }
                else
                {
                    char l_250 = (-6L);
                    for (g_207 = 0; (g_207 <= 0); g_207 += 1)
                    {
                        if (p_21)
                            break;
                        g_234[0][0] = g_78[1];
                        l_235[0] = 1L;
                    }
                    for (l_171 = 0; l_171 < 2; l_171 += 1)
                    {
                        l_235[l_171] = 255UL;
                    }
                    g_252 = (p_21 >= ((((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_21, (safe_add_func_int16_t_s_s(0L, l_212)))), 9UL)) > g_16) && (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(g_78[1], (safe_mod_func_uint32_t_u_u((0x98L == (l_250 || l_251)), 0x03C422D2L)))), 10)) >= l_250) <= p_21), 1))) <= g_42[g_103][(g_103 + 2)]));
                }
                l_184 = func_63(g_199[1], (safe_mod_func_uint16_t_u_u(0x4C31L, func_72(((safe_lshift_func_int8_t_s_u((((l_235[0] >= (safe_lshift_func_uint8_t_u_s(((!func_63(p_21, g_234[0][0], g_78[(g_103 + 2)], l_171, g_199[1])) && 0UL), 3))) && l_235[0]) | l_169), 4)) && g_78[1]), g_42[0][0], p_21, l_212))), l_212, p_21, g_42[0][0]);
            }
            else
            {
                char l_274 = 0x21L;
                int l_276 = (-1L);
                l_233 = p_21;
                l_212 = (safe_mod_func_uint8_t_u_u(g_42[g_103][(g_103 + 2)], g_234[0][8]));
                g_275 = ((l_170 && g_103) & (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_265, (safe_add_func_int8_t_s_s((1L >= l_169), func_72(g_78[1], (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((g_199[3] | ((safe_lshift_func_uint16_t_u_s(p_21, (l_212 <= 0xC788L))) == 8UL)) != p_21), g_42[0][0])), g_42[g_103][(g_103 + 2)])), l_274, g_252))))), l_274)));
                l_276 = l_265;
            }
            l_284 = func_63((g_120 > l_198), ((((safe_sub_func_int16_t_s_s((((g_78[1] <= func_63(l_235[0], g_234[0][0], ((safe_rshift_func_uint8_t_u_s(g_252, p_21)) && (safe_mod_func_int32_t_s_s(func_63(((-1L) & 0xA5780539L), g_42[g_103][(g_103 + 2)], l_170, p_21, p_21), l_283))), l_171, l_212)) > g_234[1][8]) && p_21), g_78[1])) != p_21) > l_170) != 1L), p_21, l_170, p_21);
            for (g_207 = 0; (g_207 <= 3); g_207 += 1)
            {
                l_285[5] = l_284;
                g_286 = p_21;
                l_212 = l_169;
            }
        }
        g_287 = 0x82BAD39FL;
        if ((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((0x1035L <= 65535UL) || p_21), g_207)), ((safe_sub_func_uint8_t_u_u(g_16, (safe_sub_func_uint32_t_u_u((0xBB4594A1L >= p_21), (p_21 >= (func_72(p_21, p_21, l_235[0], p_21) == 6UL)))))) >= g_16))))
        {
            int l_302 = (-1L);
            for (p_21 = 0; (p_21 >= 0); p_21 -= 1)
            {
                unsigned short l_305 = 0x9C1AL;
                for (g_275 = 0; (g_275 <= 0); g_275 += 1)
                {
                    int l_314 = 0x337C76E8L;
                    unsigned l_315[2][4][1] = {{{0x2583E332L}, {0x2583E332L}, {0x2583E332L}, {0x2583E332L}}, {{0x2583E332L}, {0x2583E332L}, {0x2583E332L}, {0x2583E332L}}};
                    int i, j, k;
                    if (((((safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(0x28L, (((safe_lshift_func_uint8_t_u_s(p_21, l_302)) <= (safe_add_func_uint8_t_u_u(251UL, func_22(l_305, (g_120 >= func_55(p_21, (safe_lshift_func_int8_t_s_s(g_234[1][8], p_21)))), l_170, l_302, p_21)))) | p_21))), p_21)) == l_305) <= l_302) && p_21))
                    {
                        l_314 = (!(g_286 && (g_199[4] >= ((p_21 <= p_21) == (p_21 && (((safe_mod_func_uint8_t_u_u(l_305, 0x40L)) | (~(safe_mod_func_int32_t_s_s((g_211 == ((safe_mod_func_int32_t_s_s(0xAA28B3A1L, p_21)) | g_234[0][4])), l_169)))) > p_21))))));
                        g_316 = l_315[0][1][0];
                    }
                    else
                    {
                        char l_331 = 0x65L;
                        int l_340[3][2] = {{0L, 1L}, {0L, 1L}, {0L, 1L}};
                        int i, j;
                        l_233 = ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x1AEEL, (safe_rshift_func_int8_t_s_u(1L, 2)))), func_34(l_302))) != ((safe_mod_func_int16_t_s_s(2L, (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_21, l_305)), (p_21 == ((safe_rshift_func_uint16_t_u_s((p_21 > l_331), 14)) < p_21)))))) || 0xB138L));
                        l_340[0][1] = ((safe_div_func_int8_t_s_s(p_21, 255UL)) > ((-10L) < (l_302 & (safe_mul_func_uint16_t_u_u((g_42[0][2] ^ ((safe_unary_minus_func_uint32_t_u(g_286)) == (safe_add_func_uint16_t_u_u(p_21, func_22(g_339, g_78[1], p_21, l_305, g_234[0][0]))))), 0UL)))));
                        return p_21;
                    }
                    return p_21;
                }
            }
            l_351 = (safe_mod_func_int32_t_s_s(((0L > l_169) & (g_199[1] >= ((((~(((safe_mod_func_uint16_t_u_u(func_55((+(g_316 <= (safe_div_func_int32_t_s_s(p_21, (((((safe_add_func_uint8_t_u_u(0x9FL, p_21)) || (safe_rshift_func_int8_t_s_s((+(-1L)), l_302))) && l_302) ^ 1UL) & 8L))))), l_302), p_21)) > l_171) < 1UL)) | p_21) & l_302) > g_234[0][0]))), g_286));
            if (p_21)
            {
                for (l_198 = 0; (l_198 <= 3); l_198 += 1)
                {
                    for (l_265 = 0; (l_265 <= 0); l_265 += 1)
                    {
                        int i, j;
                        if (g_234[(l_265 + 1)][(g_120 + 2)])
                            break;
                        l_233 = (safe_mul_func_int8_t_s_s(g_287, l_302));
                    }
                }
            }
            else
            {
                return g_234[1][4];
            }
        }
        else
        {
            unsigned l_356[3][5][4] = {{{0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}}, {{0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}}, {{0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}, {0xADABB3FEL, 0x30DD82E2L, 0xADABB3FEL, 0x30DD82E2L}}};
            int i, j, k;
            l_356[1][0][2] = (safe_mod_func_uint16_t_u_u(p_21, 3L));
            if (l_283)
                continue;
            l_351 = func_55((safe_lshift_func_int8_t_s_s(l_356[1][0][2], p_21)), l_235[0]);
        }
        l_233 = (!(safe_lshift_func_uint16_t_u_s(g_78[1], (((p_21 ^ (g_207 <= (0x43L > (func_63((safe_sub_func_uint16_t_u_u(g_275, (g_275 & (((safe_sub_func_uint16_t_u_u(65534UL, g_207)) <= p_21) && 4294967295UL)))), l_198, g_42[0][0], g_286, g_234[0][0]) == g_275)))) ^ (-6L)) || p_21))));
        for (l_351 = 0; (l_351 <= 3); l_351 += 1)
        {
            short l_390 = (-10L);
            int l_465 = (-1L);
            for (g_339 = 0; (g_339 >= 0); g_339 -= 1)
            {
                short l_371[5] = {0x044FL, 0L, 0x044FL, 0L, 0x044FL};
                int i;
                for (g_275 = 0; (g_275 <= 3); g_275 += 1)
                {
                    return l_371[4];
                }
                g_384 = ((safe_sub_func_int32_t_s_s(func_55(l_283, p_21), (safe_mul_func_int8_t_s_s(3L, (safe_add_func_uint32_t_u_u(((p_21 | (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s((g_384 & g_287), (safe_mul_func_int16_t_s_s(g_207, g_42[0][3])))), l_371[4])), l_387))) ^ (-4L)), 2UL)))))) <= l_351);
                if (l_283)
                    break;
                if (func_34((safe_lshift_func_int16_t_s_s(0L, 13))))
                {
                    unsigned char l_397 = 5UL;
                    int l_398 = (-7L);
                    for (l_283 = 0; (l_283 <= 0); l_283 += 1)
                    {
                        return g_207;
                    }
                    l_233 = (((l_390 > (safe_add_func_int8_t_s_s(((l_390 || func_34((((g_384 >= (safe_mod_func_uint32_t_u_u((((~(p_21 || 0x9EA2E63CL)) != (safe_div_func_int8_t_s_s(9L, g_234[0][0]))) && (4L || (func_72(g_286, g_199[1], l_397, p_21) >= g_234[0][0]))), g_42[0][0]))) == 65535UL) < g_207))) < l_235[1]), l_371[3]))) >= g_207) || p_21);
                    l_398 = p_21;
                    l_399 = (0UL & p_21);
                }
                else
                {
                    unsigned l_401[6] = {0x9C18BA1AL, 0x9C18BA1AL, 0xE08E61A9L, 0x9C18BA1AL, 0x9C18BA1AL, 0xE08E61A9L};
                    int i;
                    g_384 = l_400[2];
                    g_384 = (func_34(l_401[3]) >= (safe_unary_minus_func_uint16_t_u(p_21)));
                }
            }
            l_399 = l_399;
            if (((safe_sub_func_uint32_t_u_u(p_21, ((safe_sub_func_uint16_t_u_u((+(func_72((safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((l_411 | func_72(((safe_rshift_func_uint8_t_u_s(l_400[2], 3)) > g_384), l_390, p_21, (g_42[0][0] & 7UL))), p_21)), 5)), p_21, l_251, p_21) > g_384)), p_21)) ^ g_286))) ^ 2UL))
            {
                char l_439[7][4][2] = {{{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}, {{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}, {{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}, {{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}, {{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}, {{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}, {{0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}, {0xA3L, 7L}}};
                int i, j, k;
                for (g_252 = 0; (g_252 >= 0); g_252 -= 1)
                {
                    unsigned l_438 = 0x0B635D16L;
                    if (((safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(func_63(p_21, (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((1UL > (l_171 < ((safe_lshift_func_uint16_t_u_u(((((p_21 & func_22(func_34(((safe_add_func_uint16_t_u_u(l_171, ((safe_add_func_uint8_t_u_u(1UL, (safe_lshift_func_int16_t_s_s(func_34((func_22(func_72((safe_lshift_func_int8_t_s_u(l_399, ((safe_add_func_uint32_t_u_u(l_438, l_439[4][0][0])) > g_199[1]))), p_21, g_199[0], p_21), p_21, l_390, g_103, g_42[0][0]) & 8UL)), 2)))) >= 5UL))) ^ 0x907A0B91L)), l_390, p_21, l_387, g_339)) < g_275) ^ (-1L)) || p_21), 13)) && l_439[2][2][0]))) || 0xE0L), 0)), l_400[2])), g_234[1][9])), p_21, p_21, l_390), 1L)), 5L)) ^ 8L), g_234[0][0])) == p_21))
                    {
                        g_384 = ((!(g_316 >= (safe_div_func_int16_t_s_s(((func_55(g_234[0][0], ((g_384 && ((255UL == (safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(0x45002374L, (g_287 && 4L)))))) ^ l_400[5])) <= 4UL)) | l_438) == g_275), 0x0E36L)))) != 0xC5L);
                    }
                    else
                    {
                        unsigned l_456[4][3][3] = {{{1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}}, {{1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}}, {{1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}}, {{1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}, {1UL, 0x0AE29910L, 0x6A31EEF8L}}};
                        int i, j, k;
                        l_411 = (safe_div_func_int16_t_s_s((p_21 || 0x26L), (safe_mul_func_int8_t_s_s(func_55(p_21, g_42[0][2]), ((g_207 != (9UL > (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((g_252 || func_63(l_387, l_455[6][4], p_21, l_456[2][0][0], g_287)), g_199[1])) < l_390) ^ p_21), 9)), 5)))) | p_21)))));
                        g_384 = l_456[2][1][1];
                    }
                    if ((g_384 != 7L))
                    {
                        if (p_21)
                            break;
                    }
                    else
                    {
                        short l_463 = 0L;
                        l_465 = func_22(p_21, (p_21 >= ((0x80EB15BBL ^ func_63(l_390, (safe_rshift_func_int8_t_s_s(l_390, 5)), (safe_lshift_func_int16_t_s_u(((((~func_55(func_72((l_400[6] <= g_103), (safe_add_func_uint32_t_u_u(((-1L) | ((g_286 < g_384) && 0x4564L)), l_438)), l_463, g_286), g_103)) ^ l_390) && 0xFAL) && (-10L)), 4)), p_21, l_464)) | 1UL)), l_390, p_21, g_275);
                    }
                }
                l_465 = (safe_rshift_func_uint8_t_u_s(p_21, l_390));
            }
            else
            {
                int l_470 = (-1L);
                int l_474 = 1L;
                int l_497 = 0x583F67FEL;
                l_465 = (safe_div_func_int32_t_s_s(((0L == func_22(l_470, p_21, l_251, l_471[0][0], l_390)) && (safe_add_func_uint16_t_u_u(p_21, (p_21 != g_211)))), p_21));
                l_465 = g_16;
                if (p_21)
                {
                    short l_476 = 4L;
                    g_384 = l_474;
                    for (l_390 = 3; (l_390 >= 0); l_390 -= 1)
                    {
                        short l_475 = (-5L);
                        if (l_470)
                            break;
                        if (l_475)
                            continue;
                    }
                    l_233 = l_476;
                    g_384 = ((safe_add_func_int16_t_s_s(p_21, l_351)) && ((p_21 > (safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((g_211 ^ (func_34(p_21) ^ func_63((safe_lshift_func_uint8_t_u_s((p_21 != ((safe_sub_func_uint16_t_u_u((((((+((5L < func_63(g_339, g_234[1][8], l_489[0], p_21, l_470)) && 0x75087D1CL)) == l_465) & g_199[4]) <= g_234[0][0]) && l_465), l_235[0])) < p_21)), 5)), p_21, g_207, l_476, g_287))), 0x3CL)), 0xBDL)), p_21))) <= l_465));
                }
                else
                {
                    int l_495 = (-8L);
                    int l_506 = (-7L);
                    g_384 = (safe_mod_func_int32_t_s_s(g_207, ((l_465 < (0x42L == ((!(~func_22(((safe_div_func_int8_t_s_s((-1L), ((safe_unary_minus_func_uint32_t_u(l_495)) ^ (func_22((65534UL & (p_21 != p_21)), (((g_384 | 6L) > 0x5A81L) ^ 0UL), l_171, p_21, l_390) & p_21)))) ^ 8L), l_496, l_474, l_455[6][4], p_21))) >= 0x57EBB463L))) & 1UL)));
                    l_497 = p_21;
                    l_506 = (func_22(p_21, (safe_rshift_func_uint8_t_u_u((3UL | (safe_sub_func_uint16_t_u_u((func_22(l_265, g_234[0][0], (l_465 != ((-1L) <= p_21)), (~(l_169 <= (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((-1L) | g_207), 14)) ^ g_384), 0xB525L)))), g_234[0][6]) > g_42[0][0]), p_21))), 0)), l_387, p_21, l_474) < g_211);
                }
                l_233 = g_78[1];
            }
        }
    }
    return l_169;
}







static short func_22(short p_23, int p_24, const int p_25, char p_26, unsigned short p_27)
{
    int l_145 = 8L;
    for (p_24 = 5; (p_24 < 27); ++p_24)
    {
        int l_143 = 0xD5734C63L;
        const int l_144 = (-1L);
        unsigned l_158 = 0x9D30BDFCL;
        l_143 = p_26;
        l_143 = func_63(l_143, (~g_42[0][4]), (func_63(func_72(l_144, l_145, (safe_rshift_func_uint16_t_u_s(((((func_55((g_120 & (safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0xABBD54EDL, func_55((~((((-10L) && ((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_145 | ((((safe_add_func_int8_t_s_s(l_144, 0x6FL)) >= g_42[0][0]) >= 0x13L) != g_42[0][4])), l_145)), p_24)) && g_78[1])) <= 0x1CL) ^ g_16)), g_42[0][1]))), g_42[0][4]))), p_27) < 0x9721L) < 0x64L) && g_42[0][4]) && 0L), 12)), g_42[0][0]), l_158, g_42[0][0], l_145, p_24) < p_27), l_143, p_24);
    }
    return p_27;
}







static int func_28(unsigned p_29)
{
    short l_108 = 0x7EBEL;
    int l_111 = 1L;
    int l_112 = 1L;
    short l_132 = 0xF464L;
    unsigned l_135[3];
    int i;
    for (i = 0; i < 3; i++)
        l_135[i] = 4294967295UL;
    l_112 = (g_16 | ((safe_div_func_int8_t_s_s((8UL & g_16), ((safe_mul_func_int8_t_s_s((func_34((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((1L > g_16), 5)), 10))) || g_42[0][0]), (safe_div_func_int8_t_s_s(l_108, (safe_mul_func_int16_t_s_s((((3UL <= p_29) && l_108) == p_29), l_111)))))) & g_16))) < 1UL));
    for (l_111 = (-17); (l_111 < 9); ++l_111)
    {
        char l_115 = 3L;
        int l_121 = (-1L);
        if (l_115)
            break;
        g_120 = (safe_mod_func_uint32_t_u_u(0xFA9F1E56L, (safe_mod_func_uint16_t_u_u((l_108 && l_115), 9L))));
        l_121 = l_111;
    }
    if ((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0xBCL, (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(func_34(g_78[1]), p_29)), ((safe_add_func_int8_t_s_s(g_120, l_132)) & 0xEAL))))), (1UL | func_63((safe_sub_func_uint16_t_u_u(func_63(func_63(l_108, l_111, g_16, g_16, p_29), l_112, l_112, p_29, g_120), l_135[2])), p_29, g_16, l_108, g_120)))))
    {
        unsigned l_136 = 4294967290UL;
        int l_137 = 0x455447BFL;
        l_136 = (func_34(p_29) != g_16);
        l_137 = l_136;
    }
    else
    {
        for (l_132 = 23; (l_132 <= 28); l_132 = safe_add_func_int16_t_s_s(l_132, 4))
        {
            const unsigned short l_140 = 0x64ACL;
            if (l_140)
                break;
        }
    }
    return g_16;
}







static unsigned func_34(unsigned char p_35)
{
    short l_105 = 0x8D62L;
    for (p_35 = 20; (p_35 != 44); p_35++)
    {
        const unsigned short l_58 = 0xE5C7L;
        int l_104 = 0xF7F7A374L;
        g_42[0][0] = g_16;
        l_104 = ((safe_add_func_int32_t_s_s(p_35, (((0xCC72B752L > g_42[0][0]) || (safe_div_func_uint16_t_u_u(0xA012L, 0x800FL))) ^ ((g_42[0][0] || (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_42[0][0], (safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s(g_42[0][2], func_55(l_58, l_58))), 13)))), 0xF81AA30DL))) < g_16)))) >= 0L);
        l_105 = p_35;
    }
    return p_35;
}







static unsigned char func_55(const unsigned char p_56, short p_57)
{
    unsigned l_69 = 0x7D757520L;
    int l_101 = (-1L);
    for (p_57 = 0; (p_57 >= 6); p_57++)
    {
        unsigned l_77 = 0x83EB999CL;
        unsigned l_100 = 0x251BB39DL;
        l_101 = (safe_sub_func_int8_t_s_s(((func_63(l_69, ((safe_mod_func_int32_t_s_s((((func_72(p_57, l_77, l_69, p_56) && l_77) <= g_16) & ((safe_mul_func_int16_t_s_s(l_100, l_77)) == 0x1E41L)), l_101)) > p_57), g_16, l_101, p_57) | 65531UL) | p_57), g_42[0][0]));
    }
    g_103 = g_78[0];
    return l_69;
}







static short func_63(unsigned p_64, char p_65, char p_66, unsigned p_67, unsigned char p_68)
{
    unsigned l_102 = 0x6DD75471L;
    return l_102;
}







static unsigned func_72(const unsigned char p_73, short p_74, unsigned p_75, unsigned p_76)
{
    unsigned char l_93 = 1UL;
    int l_94 = 0xCBC3393AL;
    unsigned l_97 = 4294967292UL;
    g_78[1] = p_76;
    l_94 = (g_16 && (safe_div_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((0x642DL ^ (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(g_78[2], (safe_div_func_uint16_t_u_u(g_16, l_93)))) < 0x21L) && 0x9358DB2EL), p_75)) >= p_73), l_93))), 1L)), 1L)) & l_93), p_73)));
    l_94 = ((safe_mod_func_int16_t_s_s(((l_94 ^ (+0x0339L)) | l_97), l_93)) >= ((0x59L ^ l_94) && (p_74 >= p_73)));
    return p_74;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_42[i][j], "g_42[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_199[i], "g_199[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_234[i][j], "g_234[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_550[i][j], "g_550[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
