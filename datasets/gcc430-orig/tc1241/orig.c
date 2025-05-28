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


union U0 {
   char f0;
   unsigned short f1;
};


static unsigned char g_4 = 1UL;
static int g_13 = 1L;
static int g_16 = 2L;
static int g_52 = 0L;
static unsigned short g_82 = 65527UL;
static int g_102 = (-1L);
static unsigned g_103 = 4294967291UL;
static int g_109 = 8L;
static unsigned g_124 = 5UL;
static unsigned g_153 = 0x9B69560CL;
static unsigned g_156 = 1UL;
static int g_212 = 0x93055C05L;
static short g_213 = 0x9B90L;
static char g_235 = 0x36L;
static int g_292 = 0xE7D5FC09L;
static volatile union U0 g_307[7] = {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}};
static union U0 g_498 = {0x1BL};
static int g_520 = 0x112EFD35L;
static unsigned char g_593 = 0x04L;
static unsigned short g_594 = 65527UL;
static unsigned short g_663[9][1][9] = {{{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}, {{0xA8E9L, 65532UL, 65530UL, 0UL, 65526UL, 4UL, 65526UL, 0UL, 65530UL}}};
static volatile char g_774 = (-5L);
static char g_811 = (-9L);
static const unsigned short g_838 = 0xDD44L;
static volatile int g_915 = 0xCAE9A43AL;
static unsigned char g_916 = 1UL;
static volatile char g_939 = 0x77L;
static unsigned g_941 = 4294967295UL;
static int g_949 = 0x379DC27CL;
static unsigned char g_961 = 0x83L;
static unsigned g_962[9] = {0xA8299D64L, 0xA8299D64L, 0xA8299D64L, 0xA8299D64L, 0xA8299D64L, 0xA8299D64L, 0xA8299D64L, 0xA8299D64L, 0xA8299D64L};
static unsigned short g_998 = 3UL;
static unsigned g_1218 = 0xBCB07D0FL;
static int g_1306[6] = {(-10L), (-10L), 3L, (-10L), (-10L), 3L};
static unsigned char g_1418 = 0x3CL;
static unsigned g_1561 = 4294967295UL;
static unsigned g_1678 = 0xD3AF7279L;
static int g_1701 = 0x9532043DL;



static short func_1(void);
static char func_5(unsigned p_6, unsigned char p_7, union U0 p_8);
static int func_17(unsigned p_18);
static char func_22(int p_23, const char p_24, int p_25, short p_26);
static unsigned char func_28(unsigned short p_29, unsigned char p_30, short p_31, unsigned short p_32);
static unsigned func_33(char p_34, union U0 p_35);
static union U0 func_37(unsigned short p_38, union U0 p_39, int p_40, union U0 p_41);
static short func_42(unsigned char p_43, const unsigned p_44);
static unsigned char func_45(unsigned p_46, unsigned p_47);
static unsigned func_48(union U0 p_49);
static short func_1(void)
{
    unsigned short l_19 = 1UL;
    int l_1307 = (-1L);
    int l_1308 = 0x0778A382L;
    int l_1309 = 0xE77488B4L;
    union U0 l_1310 = {0x03L};
    char l_1312 = (-1L);
    unsigned l_1324 = 0UL;
    char l_1325 = 0L;
    unsigned char l_1326 = 248UL;
    int l_1329 = 0xAC473AAAL;
    int l_1403 = 0x80346C69L;
    unsigned l_1436[10][10] = {{0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}, {0x089432A0L, 4294967290UL, 0xF2EC02C6L, 4294967290UL, 0x089432A0L, 0xC6958CF0L, 0xF843261CL, 0x75B78214L, 0x86F5948DL, 4294967290UL}};
    short l_1485 = (-7L);
    unsigned short l_1513 = 0xC74CL;
    unsigned l_1562 = 0x4CFBE206L;
    unsigned l_1702 = 0xE99A3DA6L;
    int i, j;
    l_1312 = (safe_sub_func_int8_t_s_s((g_4 ^ 0x4A2AL), func_5(g_4, (l_1309 = (l_1308 = (l_1307 = (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((g_13 = 1L), (safe_mul_func_uint8_t_u_u(8UL, (g_16 = 0xC6L))))), func_17(((l_19 && l_19) || ((l_19 != l_19) < 0xA8L)))))))), l_1310)));
    for (g_52 = 26; (g_52 <= (-25)); g_52 = safe_sub_func_int8_t_s_s(g_52, 2))
    {
        unsigned char l_1315 = 0x89L;
        if (l_1315)
            break;
        g_16 = (l_1307 == ((((g_520 >= (g_13 = (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(func_42(l_1315, g_109), ((((0x0EL != ((func_42(g_663[4][0][2], ((safe_sub_func_uint32_t_u_u(((((0x50L >= l_1324) == l_1325) ^ g_235) <= 1L), g_498.f0)) <= l_1315)) & 0x03D2B0A9L) && g_235)) > (-1L)) || g_235) != g_663[8][0][4]))), g_915)) > g_594), g_998)))) && l_1326) || g_939) >= l_1315));
    }
    if ((safe_rshift_func_int8_t_s_u(l_1329, (g_915 , (safe_div_func_uint8_t_u_u(((l_1309 = ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_1329, l_1309)), l_1326)) == l_1310.f0)) | (((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((-10L), (safe_mod_func_uint32_t_u_u(g_292, (l_1329 || 0UL))))), 14)) , g_13) != 2L)), g_16))))))
    {
        union U0 l_1372 = {0L};
        for (g_916 = 0; (g_916 <= 8); g_916 += 1)
        {
            int l_1346 = 0xBB9510A7L;
            int i;
            if ((g_962[g_916] != (+(func_28(g_962[g_916], g_962[g_916], (g_213 = (safe_mod_func_int32_t_s_s(0x38FC435CL, (safe_lshift_func_uint16_t_u_u(g_962[g_916], g_962[g_916]))))), (g_998 | g_594)) , l_19))))
            {
                if (l_1346)
                    break;
            }
            else
            {
                unsigned char l_1370 = 0UL;
                union U0 l_1371[3] = {{0xCAL}, {0xCAL}, {0xCAL}};
                int i;
                for (g_4 = 0; (g_4 <= 8); g_4 += 1)
                {
                    if (g_811)
                        break;
                    l_1346 = g_4;
                }
                g_16 = ((((((0x0D749645L != 0x0AF91CE8L) , (l_1307 >= ((l_1346 = (safe_add_func_uint8_t_u_u(l_1329, ((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((func_33(g_962[7], func_37(((((safe_sub_func_uint16_t_u_u((((g_307[4] , (l_1308 = (safe_add_func_int32_t_s_s(func_48(g_498), ((safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_915, 0x7DL)), g_1218)), g_961)) >= 0UL), 0x86L)))), g_962[0])) && l_1370))))) ^ g_961) , l_1309), g_292)) | g_811) , l_1370) ^ 0xDCL), l_1371[1], g_594, l_1372)) , 0xC22EL), g_4)), l_1372.f0)), g_916)) && l_1372.f0)))) , 1UL))) | 0x5EL) , g_16) <= 0x927496B0L) , l_1372.f0);
            }
        }
    }
    else
    {
        unsigned l_1378[1];
        int l_1379 = 1L;
        short l_1452[6][8][5] = {{{0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}}, {{0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}}, {{0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}}, {{0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}}, {{0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}}, {{0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}, {0x3D02L, 1L, 0xDDD1L, 0xF86DL, 0xDE2EL}}};
        union U0 l_1474 = {6L};
        int l_1486 = (-1L);
        union U0 l_1503 = {0x76L};
        short l_1640 = 0x5C0DL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1378[i] = 0UL;
        g_16 = (-6L);
        l_1379 = (((safe_div_func_int8_t_s_s(g_663[6][0][1], (l_1308 = g_103))) ^ g_939) && (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s(0xFFL, l_1378[0])))));
        for (g_213 = 0; (g_213 < 21); g_213 = safe_add_func_int32_t_s_s(g_213, 6))
        {
            char l_1386 = 0x41L;
            unsigned l_1392[6][1][7] = {{{0xAAD480EEL, 0x9CB82018L, 0xE34AD3A9L, 7UL, 0x902ADD82L, 0xAF83468DL, 0x902ADD82L}}, {{0xAAD480EEL, 0x9CB82018L, 0xE34AD3A9L, 7UL, 0x902ADD82L, 0xAF83468DL, 0x902ADD82L}}, {{0xAAD480EEL, 0x9CB82018L, 0xE34AD3A9L, 7UL, 0x902ADD82L, 0xAF83468DL, 0x902ADD82L}}, {{0xAAD480EEL, 0x9CB82018L, 0xE34AD3A9L, 7UL, 0x902ADD82L, 0xAF83468DL, 0x902ADD82L}}, {{0xAAD480EEL, 0x9CB82018L, 0xE34AD3A9L, 7UL, 0x902ADD82L, 0xAF83468DL, 0x902ADD82L}}, {{0xAAD480EEL, 0x9CB82018L, 0xE34AD3A9L, 7UL, 0x902ADD82L, 0xAF83468DL, 0x902ADD82L}}};
            int l_1402 = 6L;
            union U0 l_1416 = {0xC4L};
            int l_1435[3][10][3] = {{{0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}}, {{0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}}, {{0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}, {0x0B8277DAL, 0x3CF7F03FL, 0xA1D289B6L}}};
            char l_1453 = 0L;
            unsigned short l_1460[8] = {0x2E1CL, 0x2E1CL, 65535UL, 0x2E1CL, 0x2E1CL, 65535UL, 0x2E1CL, 0x2E1CL};
            int l_1463 = 0x01F3A26FL;
            unsigned short l_1538 = 0x475DL;
            int l_1554 = 0xDF101A10L;
            int i, j, k;
            if (((g_961 && func_42((((safe_mod_func_int16_t_s_s(((g_663[7][0][1] = g_82) , (safe_div_func_int32_t_s_s((g_962[0] >= func_5(g_1306[5], (g_961 = (l_1386 >= ((safe_unary_minus_func_int8_t_s(g_961)) & 65526UL))), g_307[0])), g_124))), (-1L))) != 0x0960L) > g_1306[0]), l_1307)) & (-3L)))
            {
                short l_1401 = (-10L);
                l_1403 = func_5(l_1307, (safe_div_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(l_1392[2][0][0], (func_5((safe_mul_func_uint16_t_u_u(9UL, l_1307)), g_124, (g_498 = g_498)) ^ (g_235 = ((l_1379 = (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((func_42(g_82, (g_307[0] , 4294967295UL)) >= (-1L)), 1)), 0)) && 252UL), l_1392[0][0][5]))) == 0xA8L))))) || l_1401), l_1402)), l_1310);
            }
            else
            {
                unsigned short l_1417[10] = {65534UL, 1UL, 2UL, 2UL, 1UL, 65534UL, 1UL, 2UL, 2UL, 1UL};
                int l_1419 = 0x5522ECEFL;
                unsigned l_1428 = 0x3B018ABDL;
                union U0 l_1475 = {0xE1L};
                unsigned short l_1488 = 7UL;
                int l_1512[10];
                const unsigned short l_1537[8] = {65531UL, 1UL, 65531UL, 1UL, 65531UL, 1UL, 65531UL, 1UL};
                union U0 l_1547 = {0x2EL};
                unsigned char l_1605 = 0x4CL;
                unsigned l_1677[3];
                int i;
                for (i = 0; i < 10; i++)
                    l_1512[i] = 0x7819C58DL;
                for (i = 0; i < 3; i++)
                    l_1677[i] = 0x7C227E1CL;
                l_1419 = (l_1308 = ((g_1418 = ((safe_div_func_int8_t_s_s((g_594 & (!(safe_lshift_func_uint16_t_u_s(g_962[2], 5)))), g_498.f0)) <= (safe_add_func_uint8_t_u_u(0xCFL, (((((1UL ^ ((0xC000L >= (((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(g_941, (g_962[2] == func_5(g_4, g_962[5], l_1416)))) || g_307[0].f0), l_1378[0])) ^ 5UL) <= l_1417[8]) && l_1326) == g_4)) & g_941)) == (-9L)) , 0x4791L) && l_1417[8]) , g_941))))) >= l_1416.f0));
                for (l_1379 = 0; (l_1379 <= 8); l_1379 += 1)
                {
                    union U0 l_1429 = {4L};
                    int l_1432 = 0x21FA2C72L;
                    int i;
                    g_13 = func_5(g_962[l_1379], (g_4 = g_962[l_1379]), g_307[1]);
                    if ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((l_1432 = (safe_mul_func_uint16_t_u_u(func_42((((+l_1379) == (l_1419 = (l_1402 >= (g_949 > func_5(l_1428, g_593, l_1429))))) || ((safe_div_func_int16_t_s_s(g_498.f0, g_109)) , l_1392[2][0][0])), g_1306[0]), 65534UL))) == 1UL), l_1417[8])), 3)))
                    {
                        g_13 = g_1306[5];
                        if (g_1218)
                            break;
                    }
                    else
                    {
                        char l_1451 = 0xE6L;
                        int i;
                        l_1403 = l_1310.f0;
                        l_1432 = (!(safe_mod_func_uint32_t_u_u((func_5(l_1435[1][5][1], l_1436[4][3], g_307[4]) && (safe_add_func_int32_t_s_s(g_292, (safe_add_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(g_939, (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_1452[4][4][3] = (safe_sub_func_uint16_t_u_u(g_949, ((l_1451 , l_1378[0]) == 0x2A77L)))), g_941)), l_1453)), 5L)))) >= l_1451), l_1307))))), l_1429.f0)));
                        l_1419 = (l_1436[2][8] & (g_962[l_1379] = l_1379));
                        l_1419 = ((safe_div_func_int16_t_s_s(func_42((safe_add_func_int32_t_s_s(g_593, ((safe_rshift_func_int8_t_s_u(l_1460[1], 3)) < (l_1463 = (g_13 == func_45(g_1418, (safe_add_func_int32_t_s_s((g_16 = l_1326), 3UL)))))))), (safe_unary_minus_func_int8_t_s(g_962[8]))), 0x5F3BL)) >= g_962[l_1379]);
                    }
                    if ((255UL || (g_915 | (!g_962[l_1379]))))
                    {
                        unsigned l_1471[9][9] = {{0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}, {0UL, 0x4E2EF0CCL, 8UL, 0xDE503E5BL, 0xA4AC4B5CL, 0xA4AC4B5CL, 0xDE503E5BL, 8UL, 0x4E2EF0CCL}};
                        int i, j;
                        g_16 = ((safe_mul_func_int16_t_s_s(((g_16 != (safe_lshift_func_uint16_t_u_s((g_16 , (safe_mul_func_int16_t_s_s(g_498.f0, l_1471[3][6]))), ((l_1432 = (g_811 = (g_235 = (0x1BEC3E1DL || 0xAA426470L)))) , 1L)))) || (func_42((!(safe_sub_func_int16_t_s_s(func_5((9UL != ((g_498 = l_1474) , g_949)), g_915, l_1475), 65535UL))), l_1429.f0) == g_13)), 0x649BL)) , g_962[1]);
                    }
                    else
                    {
                        int l_1476[2][9] = {{0x897CDB8BL, 0xF3CC5DAAL, 0L, 0xF3CC5DAAL, 0x897CDB8BL, 0xF3CC5DAAL, 0L, 0xF3CC5DAAL, 0x897CDB8BL}, {0x897CDB8BL, 0xF3CC5DAAL, 0L, 0xF3CC5DAAL, 0x897CDB8BL, 0xF3CC5DAAL, 0L, 0xF3CC5DAAL, 0x897CDB8BL}};
                        int l_1487 = 0x7E2F6960L;
                        int i, j;
                        g_13 = func_42(g_13, (l_1476[0][3] == ((~(l_1378[0] | (((0UL || (safe_mul_func_uint16_t_u_u(g_307[0].f0, 0x5E5BL))) , (l_1432 = (safe_rshift_func_uint16_t_u_u(((g_307[0] , (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(l_1485, ((l_1487 = (g_16 = (func_45((l_1486 = l_1419), l_1402) ^ 0x53L))) & 0xF787D7B8L))) == l_1307), l_1488))) < 0x8EDCL), l_1452[0][4][2])))) > g_4))) > l_1379)));
                        g_52 = g_915;
                        if (g_212)
                            break;
                        g_13 = (g_663[7][0][1] > (l_19 , ((0xBBD47D5EL & ((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(4294967295UL, (safe_mul_func_int8_t_s_s(((g_235 = (safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_1379, ((safe_lshift_func_int16_t_s_s(0x4AD5L, 6)) == (l_1503 , l_1312)))), 0x12F9L))) && g_962[2]), g_4)))) , g_916) , 0x31L), l_1452[4][4][3])), l_1488)) ^ l_1428)) != 0x96L)));
                    }
                    l_1432 = (safe_rshift_func_int8_t_s_u(g_13, 5));
                }
                for (l_1486 = 0; (l_1486 <= 0); l_1486 += 1)
                {
                    union U0 l_1546 = {0L};
                    int i;
                    l_1513 = (l_1417[(l_1486 + 5)] , ((safe_lshift_func_uint16_t_u_u((l_1512[0] = ((g_498 , l_1417[(l_1486 + 9)]) <= (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_1417[(l_1486 + 6)] && (l_1419 = l_1417[(l_1486 + 9)])), l_1417[(l_1486 + 9)])), 15)))), 0)) && g_109));
                    for (g_212 = 0; (g_212 <= 0); g_212 += 1)
                    {
                        unsigned char l_1536[8] = {246UL, 8UL, 246UL, 8UL, 246UL, 8UL, 246UL, 8UL};
                        unsigned l_1545 = 0x41FAD9D9L;
                        int i, j, k;
                        l_1403 = (safe_rshift_func_uint8_t_u_u(g_915, ((l_1428 & (safe_mod_func_int8_t_s_s((l_1417[(l_1486 + 9)] != ((safe_sub_func_uint32_t_u_u((g_962[2] > (safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(l_1452[3][1][2], g_949)) && ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_1435[1][5][2], ((~0UL) && (l_1536[4] = (((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(g_663[5][0][4], g_13)), 0xFD63L)), g_52)) > g_124) | l_1428))))), l_1452[1][0][1])), g_663[7][0][1])) != g_916)), l_1537[1]))), 0x39FE4A0FL)) < g_962[3])), l_1378[0]))) , 6UL)));
                        if (l_1536[1])
                            break;
                        g_16 = l_1538;
                        l_1463 = (g_109 = func_5((g_663[1][0][8] && (g_663[(g_212 + 4)][g_212][(l_1486 + 3)] = (l_1485 >= func_5((g_941 = (g_156 & (((g_153 , g_13) < l_1474.f0) < (g_498.f0 & (l_1392[(l_1486 + 5)][g_212][(l_1486 + 1)] = ((safe_div_func_uint8_t_u_u((l_1545 = (safe_add_func_int16_t_s_s((l_1312 | (safe_mul_func_uint8_t_u_u(l_1503.f0, 0xBBL))), 65533UL))), l_1512[0])) & l_1537[1])))))), g_213, l_1546)))), g_4, l_1547));
                    }
                    for (l_1474.f1 = 0; (l_1474.f1 <= 0); l_1474.f1 += 1)
                    {
                        int i, j, k;
                        g_52 = func_42(l_1547.f0, ((g_153 = (g_307[6] , (safe_add_func_uint8_t_u_u(0xECL, l_1378[0])))) , ((g_663[(l_1486 + 1)][l_1474.f1][(l_1474.f1 + 1)] = g_939) , (safe_sub_func_uint16_t_u_u(l_1512[3], (((((l_1562 = (g_1561 = ((g_235 = func_42(g_915, (((safe_mod_func_uint32_t_u_u((l_1554 , (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(g_13, l_1417[0])), 7)) == 0UL), l_1513))), g_4)) , l_1546.f0) , g_1418))) < g_1418))) ^ g_52) >= 0x8E7252ACL) , 65527UL) > g_663[7][0][1]))))));
                    }

                                    }
                for (g_82 = 29; (g_82 >= 11); g_82 = safe_sub_func_int16_t_s_s(g_82, 2))
                {
                    unsigned short l_1575 = 0xE659L;
                    int l_1590 = 7L;
                    union U0 l_1630 = {-10L};
                    unsigned l_1676[8] = {0xE125C8E5L, 8UL, 0xE125C8E5L, 8UL, 0xE125C8E5L, 8UL, 0xE125C8E5L, 8UL};
                    int i;
                    if (g_998)
                        break;
                    if (g_52)
                    {
                        char l_1588 = (-6L);
                        int l_1589[6][2][9] = {{{(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}, {(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}}, {{(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}, {(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}}, {{(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}, {(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}}, {{(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}, {(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}}, {{(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}, {(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}}, {{(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}, {(-1L), (-10L), 0x40716E30L, (-10L), (-1L), (-5L), 0x40716E30L, (-5L), (-1L)}}};
                        int i, j, k;
                        l_1589[3][0][5] = ((safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((l_1588 = (g_594 != (!(safe_rshift_func_uint8_t_u_s(((g_1561 <= (safe_mod_func_uint32_t_u_u(((g_307[0].f0 <= ((safe_sub_func_uint32_t_u_u(l_1575, (safe_sub_func_uint16_t_u_u((0x1273667FL | (safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(func_5((safe_sub_func_uint16_t_u_u((l_1463 = (l_1378[0] , 0xB921L)), (safe_mod_func_int16_t_s_s(func_5(g_1418, (0L ^ l_19), g_498), l_1417[5])))), g_153, g_498), 0x7F03L)), l_1379)) || l_1475.f0), g_153))), 0xEEE8L)))) > 0x3BEFF063L)) | g_212), l_1325))) & g_16), l_1485))))), g_663[7][0][1])) & g_82) <= g_949) , g_156), l_1488)) & 0x673C74AEL);
                    }
                    else
                    {
                        char l_1595 = (-4L);
                        l_1590 = 0x89A3FB9FL;
                        g_109 = (safe_mod_func_int8_t_s_s((func_5(g_939, (safe_div_func_uint16_t_u_u(l_1595, g_594)), (g_498 = g_498)) < ((safe_mul_func_int16_t_s_s(l_1575, ((l_1463 <= (safe_unary_minus_func_uint8_t_u((((safe_add_func_int8_t_s_s((g_811 != (func_42((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_16, g_82)), 9)), g_212) & l_1595)), l_1537[1])) > 0x2E35B493L) , 0xA5L)))) , l_1605))) , g_941)), l_1379));
                        g_109 = ((safe_mod_func_int16_t_s_s(0L, (safe_lshift_func_int8_t_s_s(g_998, 3)))) != (l_1503.f0 > (((safe_mul_func_int16_t_s_s((-6L), (~(l_1324 < g_962[7])))) == (l_1512[0] = (safe_add_func_uint16_t_u_u(func_5(g_941, l_1485, (l_1416 = g_307[6])), 0L)))) || 0x33L)));
                    }
                    l_1554 = ((g_307[5] , 0x9103L) | (0L != (g_124 > g_962[2])));
                    if ((safe_div_func_uint16_t_u_u((g_498 , g_235), func_5((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_153, 1)), (safe_mod_func_uint32_t_u_u(g_292, (safe_mod_func_int8_t_s_s(func_42(l_1324, ((safe_rshift_func_int8_t_s_s((!g_962[2]), 4)) || g_962[8])), (safe_mul_func_uint8_t_u_u(l_1312, 0x60L)))))))), l_1378[0], l_1416))))
                    {
                        unsigned char l_1639 = 0xB6L;
                        g_109 = (func_42((g_916 = (safe_mod_func_uint32_t_u_u(func_42((func_5((g_594 || 0x23L), g_962[7], l_1630) != (((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_153 = 0x145A87D8L), func_42(l_1378[0], (safe_mul_func_uint16_t_u_u(0xD160L, (~(safe_add_func_uint16_t_u_u(((g_998 = 6UL) & l_1639), l_1640)))))))), g_292)) >= g_124) , g_82)), g_124), 0x030692B8L))), g_103) , l_1639);
                        l_1463 = 3L;
                    }
                    else
                    {
                        int l_1645 = 3L;
                        l_1645 = ((g_82 & (((g_213 && ((g_103 >= (safe_rshift_func_uint8_t_u_s(l_1538, 7))) >= 4294967286UL)) | (safe_lshift_func_int16_t_s_u(0x4549L, func_5(g_941, (g_1418 = g_307[0].f0), g_498)))) < (-6L))) , 0x79F87FCDL);
                        l_1645 = (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(g_124, func_42((safe_mod_func_uint16_t_u_u(g_1306[1], g_1418)), func_5((safe_lshift_func_int8_t_s_s(l_1460[1], 4)), (safe_rshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(g_949, 9)) , (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((g_1678 = ((g_16 = ((safe_add_func_int8_t_s_s(l_1435[1][5][1], (safe_add_func_uint8_t_u_u((((g_307[4] , (safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((+(255UL | ((g_663[7][0][1] = (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_941, g_941)), l_1645))) , g_949))) <= l_1486), 65529UL)) <= l_1676[2]), 0x6DL))) < l_1513) , 9UL), l_1677[0])))) & g_1306[5])) ^ 0x4C4511FFL)), l_1453)), 3))), l_1645)) >= g_498.f0) , g_961), g_520)), g_498)))), 1));
                        return l_1436[4][3];
                    }
                }
            }
        }
    }
    g_16 = (safe_add_func_uint8_t_u_u((l_1403 >= (safe_rshift_func_int16_t_s_s(g_1218, (g_307[1] , (safe_add_func_int32_t_s_s(((0x4E8941EEL <= func_33(((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((func_28(((3UL & (l_1309 = 0x9BL)) < (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_1308 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((l_1310.f0 >= (-1L)), 7)), 0xFA10ADC3L))), 12)), l_1329))), g_998, g_1418, l_19) | l_1312), l_1403)) > g_941), g_1701)) <= 4294967293UL), (-1L))) ^ g_1218), g_838)) >= 0x50FBL), l_1310)) , 0x601F476FL), g_998)))))), 0x48L));
    return l_1702;
}







static char func_5(unsigned p_6, unsigned char p_7, union U0 p_8)
{
    int l_1311[5];
    int i;
    for (i = 0; i < 5; i++)
        l_1311[i] = 0x968D2AADL;
    g_52 = (g_156 > 0L);
    l_1311[0] = g_941;
    return p_6;
}







static int func_17(unsigned p_18)
{
    int l_27 = (-5L);
    int l_36 = 0xDC64F6B9L;
    union U0 l_50[2] = {{1L}, {1L}};
    int l_875 = 0L;
    int l_876 = 1L;
    unsigned short l_1304 = 65535UL;
    int l_1305 = 0x2682A9E7L;
    int i;
    g_1306[5] = ((safe_sub_func_int16_t_s_s(((p_18 > (l_1305 = (func_22(l_27, (l_876 = (l_875 = ((func_28((func_33((l_36 = l_27), func_37((func_42(func_45(func_48(l_50[1]), g_4), p_18) || g_235), l_50[1], g_4, l_50[1])) | l_50[1].f0), p_18, l_50[1].f0, l_27) != l_50[1].f0) , 0x68L))), g_4, g_4) != l_1304))) >= g_998), l_27)) <= g_838);
    return l_50[1].f0;
}







static char func_22(int p_23, const char p_24, int p_25, short p_26)
{
    unsigned l_881 = 1UL;
    int l_897 = 0xEB7CD68CL;
    unsigned l_1076 = 0x36DB7287L;
    unsigned l_1078 = 1UL;
    union U0 l_1197 = {0xAFL};
    unsigned short l_1198 = 4UL;
    int l_1232 = 0xF6D32EF9L;
    int l_1249 = 1L;
    const int l_1263 = (-5L);
    unsigned char l_1303 = 255UL;
    for (g_498.f0 = 0; (g_498.f0 <= (-14)); g_498.f0--)
    {
        unsigned short l_896[9] = {65528UL, 0xE738L, 65528UL, 0xE738L, 65528UL, 0xE738L, 65528UL, 0xE738L, 65528UL};
        int l_960 = 0x221AE320L;
        unsigned l_1171 = 1UL;
        const unsigned char l_1229 = 255UL;
        unsigned char l_1264 = 7UL;
        unsigned l_1283 = 4294967294UL;
        int i;
        for (g_52 = 0; (g_52 <= 0); g_52 += 1)
        {
            short l_880 = 9L;
            int l_882 = 0x5B220948L;
            int l_1077 = 8L;
            const char l_1089 = 0xC5L;
            if ((g_213 | 0x46L))
            {
                char l_879[10] = {0x88L, (-10L), 0x88L, (-10L), 0x88L, (-10L), 0x88L, (-10L), 0x88L, (-10L)};
                int i;
                g_109 = l_879[9];
                if (g_212)
                    break;
                l_882 = (((g_109 = g_102) < l_880) | (l_881 = p_23));
            }
            else
            {
                char l_883 = 3L;
                l_897 = ((l_881 , l_883) < (l_896[1] = (~((safe_add_func_int8_t_s_s(((((safe_div_func_int16_t_s_s((g_520 && g_109), (safe_mod_func_int16_t_s_s(l_883, (~(safe_rshift_func_int8_t_s_u((0xC74C5697L == ((safe_sub_func_uint32_t_u_u((l_881 , g_102), (l_880 ^ g_663[3][0][8]))) > 1UL)), p_25))))))) > p_23) > p_23) >= 0UL), 0x81L)) , p_24))));
            }
            for (g_109 = 0; (g_109 >= 0); g_109 -= 1)
            {
                int l_914 = 6L;
                int i, j, k;
                l_882 = g_663[(g_109 + 2)][g_52][(g_109 + 3)];
                for (g_292 = 0; (g_292 >= 0); g_292 -= 1)
                {
                    int l_900 = 0x7A85BC1DL;
                    int l_913 = 0L;
                    int i, j, k;
                    if (g_663[(g_292 + 7)][g_109][(g_109 + 6)])
                        break;
                    if ((l_897 = ((l_914 = ((safe_mod_func_int32_t_s_s(func_42(g_663[(g_292 + 7)][g_52][(g_109 + 2)], (l_900 = g_663[(g_292 + 7)][g_109][(g_109 + 6)])), g_109)) || (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((0x57L != (l_900 = ((safe_mod_func_uint32_t_u_u(((g_663[g_109][g_109][(g_109 + 3)] = (safe_lshift_func_int8_t_s_u(p_25, (((249UL || (safe_lshift_func_uint8_t_u_s(func_42(func_42(p_24, (l_882 = 4294967289UL)), p_23), p_24))) | g_663[(g_109 + 2)][g_52][(g_109 + 3)]) && l_881)))) && p_23), 0x25232E3DL)) & 0L))), l_913)), g_82)), g_4)))) == 4294967295UL)))
                    {
                        int l_940 = 0xDA74F5C2L;
                        int i, j, k;
                        g_915 = 0xD451D254L;
                        g_916 = l_914;
                        g_941 = ((safe_mul_func_int8_t_s_s(l_882, ((safe_add_func_uint8_t_u_u(l_914, (!(safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(func_42((safe_sub_func_uint8_t_u_u((func_42((func_42(g_212, (safe_mod_func_int8_t_s_s((g_235 = ((((p_25 != g_156) > ((safe_mul_func_int16_t_s_s((func_42(p_26, (safe_mod_func_uint16_t_u_u((((l_896[1] == (func_42((((((safe_lshift_func_int8_t_s_u(g_4, 2)) & (func_42(((p_24 == p_23) == (-10L)), p_26) < g_939)) & g_663[(g_109 + 2)][g_52][(g_109 + 3)]) , l_881) , g_811), g_520) , p_25)) != l_896[1]) && 247UL), 0x1B7BL))) & 4294967290UL), l_896[3])) >= p_25)) == (-1L)) > 0L)), g_498.f0))) == l_940), l_940) & p_23), 0xDDL)), l_913), 0)), 0xE065L)), p_26))))) == l_896[1]))) >= p_24);
                        g_949 = func_42(g_109, (safe_rshift_func_int8_t_s_u((0xEFL != (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((g_663[g_52][g_52][(g_292 + 5)] = (p_23 && ((((l_914 , (((func_42(((((l_900 = (l_914 = (safe_unary_minus_func_uint8_t_u(p_24)))) & g_594) & l_897) , (g_916 = (p_23 , func_42((((g_212 | 1UL) == l_940) >= l_940), g_498.f0)))), g_663[(g_109 + 2)][g_52][(g_109 + 3)]) & 7UL) < p_23) != g_109)) , 0x3F02C183L) , (-1L)) && p_23))), g_103)), l_897))), 2)));
                    }
                    else
                    {
                        g_961 = ((safe_div_func_uint32_t_u_u((((0UL ^ 255UL) >= ((safe_mod_func_uint8_t_u_u(func_42(((0xBCL ^ 0x43L) , (l_900 = ((l_882 = (func_42((l_897 = func_42(((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(g_663[g_109][g_109][(g_109 + 3)], (l_960 = func_42((l_914 = (((g_212 <= g_235) && p_26) , (safe_div_func_int32_t_s_s(((l_882 > 0xDFL) , 2L), g_663[(g_292 + 7)][g_109][(g_109 + 6)])))), l_881)))) ^ 0x0EL), g_941)) , 0x2CL), g_4)), g_663[g_109][g_109][(g_109 + 3)]) >= g_103)) , g_156))), l_881), l_913)) >= g_307[0].f0)) || l_914), g_663[(g_109 + 2)][g_52][(g_109 + 3)])) <= p_25);
                        if (l_882)
                            continue;
                        l_914 = 0xC064F217L;
                        if (p_23)
                            continue;
                    }
                }
                for (g_941 = 0; (g_941 <= 0); g_941 += 1)
                {
                    for (l_897 = 0; (l_897 <= 0); l_897 += 1)
                    {
                        int i, j, k;
                        g_962[2] = g_663[(g_52 + 2)][g_941][g_109];
                    }
                }
            }
            if ((safe_unary_minus_func_uint8_t_u(255UL)))
            {
                int l_976 = 1L;
                int l_977 = 1L;
                const int l_995[5][7] = {{0xEC338588L, 0x06FF546EL, 0x89B0CB7FL, 0x06FF546EL, 0xEC338588L, 0x06FF546EL, 0x89B0CB7FL}, {0xEC338588L, 0x06FF546EL, 0x89B0CB7FL, 0x06FF546EL, 0xEC338588L, 0x06FF546EL, 0x89B0CB7FL}, {0xEC338588L, 0x06FF546EL, 0x89B0CB7FL, 0x06FF546EL, 0xEC338588L, 0x06FF546EL, 0x89B0CB7FL}, {0xEC338588L, 0x06FF546EL, 0x89B0CB7FL, 0x06FF546EL, 0xEC338588L, 0x06FF546EL, 0x89B0CB7FL}, {0xEC338588L, 0x06FF546EL, 0x89B0CB7FL, 0x06FF546EL, 0xEC338588L, 0x06FF546EL, 0x89B0CB7FL}};
                int i, j;
                for (g_292 = 0; (g_292 <= 8); g_292 += 1)
                {
                    int l_978 = 2L;
                    int i, j, k;
                    l_978 = (g_663[g_292][g_52][g_292] >= (l_977 = ((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(func_42(((g_663[(g_52 + 7)][g_52][(g_52 + 6)] & (func_42((((l_896[(g_52 + 5)] > p_25) | (safe_lshift_func_uint16_t_u_u(p_23, 12))) != (((l_880 , ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((g_663[7][0][1] & ((((safe_rshift_func_int8_t_s_s(0x8CL, 5)) && ((func_42(p_23, p_26) , g_594) < g_949)) , g_838) , 4294967295UL)) & p_23), 65528UL)), l_896[5])) && (-7L))) , p_26) , l_976)), g_235) < p_24)) , l_880), p_26), g_949)), l_896[3])) <= 0xD55BL)));
                    l_897 = (safe_mul_func_uint8_t_u_u(func_42((safe_mul_func_uint16_t_u_u(func_42(l_880, (l_896[1] == func_42(((l_960 = (safe_rshift_func_int8_t_s_u((l_977 = (safe_add_func_uint8_t_u_u(l_896[1], (((l_882 = g_663[7][0][1]) , (safe_rshift_func_int16_t_s_s((p_24 || func_42((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_292, 0x51A3L)), (0x1758FD29L == ((safe_mul_func_int8_t_s_s((g_520 | l_977), g_213)) | p_23)))), l_896[1])), 13))) != 0UL)))), p_24))) , p_24), l_995[1][5]))), (-1L))), g_109), g_124));
                    for (g_153 = 2; (g_153 <= 6); g_153 += 1)
                    {
                        int i, j, k;
                        g_109 = (safe_lshift_func_uint8_t_u_u(g_998, g_838));
                        l_978 = l_882;
                        l_978 = ((g_663[g_52][g_52][(g_153 + 1)] = l_880) >= (safe_div_func_int16_t_s_s(p_25, g_594)));
                        l_882 = (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((l_880 ^ (safe_mod_func_int32_t_s_s((p_25 != (safe_add_func_uint16_t_u_u(func_42((safe_div_func_uint16_t_u_u(((((p_24 | (safe_add_func_int16_t_s_s(0xD228L, g_961))) , (g_103 | p_25)) , g_292) > (((safe_div_func_int32_t_s_s(p_24, l_995[0][5])) || g_109) <= g_153)), 9UL)), g_941), 3L))), g_52))), g_663[3][0][4])), g_939));
                    }
                }
            }
            else
            {
                unsigned short l_1020 = 6UL;
                int l_1028 = 0x1130FB6DL;
                if (((safe_add_func_int8_t_s_s(0x65L, 0x7FL)) , l_882))
                {
                    unsigned l_1031 = 3UL;
                    int l_1045[4][6][7] = {{{2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}}, {{2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}}, {{2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}}, {{2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}, {2L, 0xA0309CBFL, 0x99596198L, 0L, 0L, 0x99596198L, 0xA0309CBFL}}};
                    int i, j, k;
                    if ((l_897 , g_916))
                    {
                        unsigned l_1017[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1017[i] = 1UL;
                        return l_1017[2];
                    }
                    else
                    {
                        unsigned l_1027 = 0xA64E968AL;
                        int l_1038 = 0x5DF5D338L;
                        g_109 = ((l_1028 = (((((safe_add_func_int16_t_s_s(func_42(l_1020, l_1020), (l_897 > (safe_div_func_int8_t_s_s(p_23, (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_102, p_25)), 5))))))) & ((l_1027 < func_42(((p_25 ^ p_23) , 0xB2L), g_102)) <= l_1020)) > p_24) == 255UL) & g_82)) || p_23);
                        g_109 = ((g_212 , (safe_div_func_uint16_t_u_u(7UL, (l_1031 = g_498.f0)))) , (((p_25 && (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((0x8463L > (safe_mul_func_uint16_t_u_u((l_1038 = 0x03D0L), (safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((l_1027 <= (safe_div_func_int32_t_s_s(g_124, 4294967295UL))) <= l_897), l_1031)) | l_1020), p_25))))), 0xD4A5CF9CL)) != 247UL), g_939))) < g_156) , p_23));
                    }
                    l_1028 = 1L;
                    for (g_941 = 0; (g_941 <= 0); g_941 += 1)
                    {
                        int i, j, k;
                        l_1045[3][0][1] = (func_42((+0x98L), func_42(g_663[(g_941 + 1)][g_941][(g_941 + 1)], p_23)) , (l_897 = p_23));
                        if (p_23)
                            continue;
                        if (p_25)
                            continue;
                        if (p_26)
                            continue;
                    }
                }
                else
                {
                    unsigned l_1046[1];
                    int l_1047[2];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1046[i] = 0x4FB4E3CEL;
                    for (i = 0; i < 2; i++)
                        l_1047[i] = 0xFB58D697L;
                    l_1047[0] = (l_882 = l_1046[0]);
                    if (g_916)
                        continue;
                    g_109 = (safe_rshift_func_int8_t_s_u((((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(2L, 1UL)), 2)) || (safe_mul_func_uint8_t_u_u(func_42((safe_add_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((l_1028 = ((p_26 && (safe_sub_func_int32_t_s_s(p_24, func_42(p_23, (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((((l_1047[0] = ((safe_mod_func_int16_t_s_s((((func_42((~(((safe_sub_func_int16_t_s_s(((l_1077 = (((l_882 = ((l_960 = (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_int8_t_s_s(g_156, 0)) > (g_109 && func_42(g_916, g_663[2][0][5]))) , l_881) >= p_24), 0)), 0)) , l_1046[0]) , g_838)) | 65535UL)) , g_941) , l_1076)) > l_896[1]), 65535UL)) == g_593) >= l_1078)), p_25) , 8L) && l_1020) || l_1028), (-7L))) != g_520)) < l_896[1]) >= g_212) || 0x0DFDL), 7)) >= l_880), 0x77F968A2L)))))) > 0x0168L)), l_881)) , 0L) >= g_663[5][0][6]), l_1020)), l_880), g_212))) >= 0x6AL), 0));
                }
                l_882 = l_880;
            }
            for (g_212 = 0; (g_212 >= 0); g_212 -= 1)
            {
                const unsigned short l_1090 = 65533UL;
                g_109 = (func_42((g_498 , g_103), (l_897 = (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_42((safe_div_func_int16_t_s_s(func_42(p_26, (g_998 ^ (safe_mod_func_uint8_t_u_u((l_882 = ((safe_lshift_func_int16_t_s_u(l_882, (0x0B01L | (((l_960 = g_212) <= (p_25 > g_102)) && l_881)))) < 0x82L)), g_838)))), l_1089)), l_1090), l_897)), p_24)))) == p_24);
                g_109 = (g_235 || (safe_rshift_func_uint8_t_u_s(((0x8647L ^ (safe_lshift_func_int8_t_s_s(g_998, 7))) , 0xB0L), 3)));
                l_1077 = ((g_109 = (g_498 , (p_25 ^ 0xECL))) & 8L);
            }
        }
        for (g_212 = (-16); (g_212 < 15); g_212 = safe_add_func_uint32_t_u_u(g_212, 8))
        {
            unsigned short l_1115 = 5UL;
            int l_1126 = 0x20567B74L;
            int l_1149 = 0xAB38AFF3L;
            const unsigned char l_1187 = 255UL;
            int l_1216 = (-7L);
            unsigned l_1247[4][4][9] = {{{0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}}, {{0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}}, {{0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}}, {{0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}, {0UL, 0UL, 9UL, 0UL, 0UL, 0UL, 9UL, 0UL, 0UL}}};
            int i, j, k;
            for (l_1078 = 0; (l_1078 <= 60); l_1078++)
            {
                unsigned l_1125 = 0UL;
                union U0 l_1147 = {0xBFL};
                int l_1148 = 9L;
                if (p_26)
                {
                    const char l_1124 = (-7L);
                    unsigned short l_1127 = 65535UL;
                    for (g_103 = (-2); (g_103 < 45); g_103++)
                    {
                        char l_1122 = 0xD2L;
                        int l_1123 = 0xE7643916L;
                        unsigned l_1142 = 0x339E603FL;
                        l_1126 = (((((safe_div_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(func_42(p_24, l_881), 2)) > ((((safe_mod_func_uint16_t_u_u(func_42(g_52, (!(g_156 & (0L == ((g_213 = ((safe_lshift_func_int16_t_s_s((l_960 = (safe_add_func_int32_t_s_s(func_42(func_42((l_1115 = p_24), (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((l_1123 = l_1122), 8)) ^ g_594) == (-1L)), 1)) == l_1122), g_4))), l_1124), g_949))), p_26)) && 0L)) <= g_663[8][0][5]))))), p_25)) <= 5L) , 0L) ^ 0x8750L)) < p_24), 0)) ^ p_23) > 0L) < l_1125), g_520)) ^ g_102) | 1L) && 0xEA0C710DL) < l_1124);
                        if (l_1127)
                            break;
                        l_1149 = (safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((l_1126 = (func_42(g_939, (((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(func_42(((((func_42(p_23, (l_896[1] , func_42((+((safe_rshift_func_uint16_t_u_s(((((((l_1148 = (p_25 = func_42(((safe_sub_func_uint32_t_u_u(p_23, ((safe_mod_func_int8_t_s_s(1L, func_42(l_1142, (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(func_42((l_1147 , l_1125), func_42((func_42((!0xCBL), p_25) , p_24), p_25)), 0)), g_235))))) , l_1127))) <= (-2L)), l_897))) , 0xC6L) || p_23) > g_4) ^ p_26) | l_896[1]), 2)) > g_156)), l_1115))) && 0xEEL) != g_593) || g_124) ^ 1UL), l_1076), (-1L))), g_103)) == l_896[6]) , p_25)) | 0x0EFA0F8EL)), 7)) == l_1115) && 0x49BEL), 0xBA2EL));
                        return l_1148;
                    }
                }
                else
                {
                    l_1148 = l_1076;
                }
            }
            for (g_961 = 0; (g_961 <= 8); g_961 += 1)
            {
                int l_1152 = 0x20ED4EF2L;
                char l_1181 = 0L;
                g_52 = g_307[0].f0;
                if ((l_1126 = (l_1152 = (func_42((safe_rshift_func_uint16_t_u_u(l_1152, 1)), l_1115) < p_23))))
                {
                    int l_1159 = 0L;
                    int l_1168 = 0x83E1AB73L;
                    char l_1182 = 0x81L;
                    for (g_153 = 0; (g_153 <= 0); g_153 += 1)
                    {
                        const int l_1172[1] = {0x496D7F17L};
                        int l_1173[4][10][2] = {{{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}, {{0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}, {0L, 0L}}};
                        int i, j, k;
                        if (g_663[g_961][g_153][g_961])
                            break;
                        if (l_1076)
                            break;
                        g_52 = (safe_mod_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((l_1159 = 252UL), 7)) ^ ((p_26 & (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(g_916, ((0xBD02FBB1L || g_153) >= (safe_rshift_func_uint8_t_u_s(p_24, ((g_663[(g_153 + 8)][g_153][g_961] = (safe_rshift_func_uint16_t_u_s(l_1168, ((safe_mod_func_int16_t_s_s((((l_896[(g_153 + 2)] = func_42(l_960, func_42((func_42(l_897, p_26) , 255UL), p_25))) != l_1171) & g_663[g_961][g_153][g_961]), p_26)) == 8UL)))) >= l_1172[0])))))), l_1115))) > l_1173[2][2][1])), g_962[2])), (-10L)));
                    }
                    for (l_1149 = 0; (l_1149 < (-15)); l_1149 = safe_sub_func_uint16_t_u_u(l_1149, 6))
                    {
                        unsigned l_1180 = 0xFB8F8408L;
                        l_1182 = (safe_add_func_uint8_t_u_u((l_1181 = (l_1159 < (l_1180 = (g_103 == 0x0CA4L)))), l_1152));
                    }
                    if (g_949)
                    {
                        char l_1183 = 0xE7L;
                        l_1183 = l_1149;
                        g_52 = l_1115;
                    }
                    else
                    {
                        union U0 l_1196 = {-1L};
                        g_52 = (safe_rshift_func_uint16_t_u_u(func_42(l_1115, (g_941 = (p_24 ^ ((l_1115 & p_26) , (((safe_unary_minus_func_uint32_t_u(l_1187)) && (p_26 , (0x544CE393L < ((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((l_1198 = ((~(func_42(((((safe_lshift_func_uint8_t_u_u(p_25, 6)) < ((l_1197 = l_1196) , g_213)) , 0UL) , l_1196.f0), p_26) <= l_897)) > p_23)), g_103)) == l_1152), g_213)) > 3L)))) , g_124))))), g_156));
                    }
                    for (l_1197.f0 = 0; (l_1197.f0 == 23); l_1197.f0 = safe_add_func_uint16_t_u_u(l_1197.f0, 1))
                    {
                        unsigned l_1213 = 0x1F0755DEL;
                        unsigned l_1214 = 4294967293UL;
                        int l_1215 = 0x9FEBB7EFL;
                        if (l_1168)
                            break;
                        l_1216 = (safe_rshift_func_uint16_t_u_s((l_1152 = (l_1149 = g_949)), func_42(((l_1187 ^ (safe_add_func_int8_t_s_s((func_42((func_42(((g_916 = (g_212 && ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_594, (!(((func_42((l_1168 = func_42(((safe_sub_func_int16_t_s_s(l_1213, (l_1215 = (l_1214 = g_103)))) <= ((0xE6FCCC6FL ^ l_1213) >= g_593)), p_24)), l_1213) > g_663[7][0][1]) > l_1187) >= l_1181)))), 6)), p_26)) <= p_26))) ^ 0L), p_23) & 0x66L), l_1181) | 0xAAL), l_896[0]))) , l_1215), l_1115)));
                    }
                }
                else
                {
                    short l_1217 = 0L;
                    union U0 l_1223 = {-10L};
                    int l_1226 = (-10L);
                    l_960 = p_25;
                    l_1152 = l_1217;
                    l_960 = g_811;
                    l_1226 = (l_1149 ^ ((func_42((0x2AF6BB17L ^ (g_962[2] > ((g_1218 = g_292) < (l_1217 ^ ((safe_rshift_func_int16_t_s_u((g_213 = (((safe_add_func_uint32_t_u_u((l_1223 , ((-4L) == (safe_sub_func_uint32_t_u_u((func_42(l_960, (p_23 & g_520)) == 0x8F8EL), p_24)))), 0L)) > 0xB6L) > l_1223.f0)), 13)) >= g_593))))), l_1187) || p_23) <= g_4));
                }
            }
            l_960 = (l_1149 = 2L);
            if (((g_292 , (+p_26)) && (safe_lshift_func_uint8_t_u_u((g_962[1] , (l_1216 || (((l_960 = 0xB453L) >= func_42(g_52, l_1229)) && (((0L == p_23) , 4294967295UL) <= 0L)))), l_1232))))
            {
                unsigned short l_1284 = 0x6952L;
                for (g_102 = 0; (g_102 > 5); g_102++)
                {
                    int l_1248 = 9L;
                    unsigned char l_1276 = 8UL;
                    if (p_26)
                    {
                        union U0 l_1244[5] = {{1L}, {1L}, {1L}, {1L}, {1L}};
                        int i;
                        g_109 = (safe_mod_func_uint16_t_u_u(func_42((safe_rshift_func_int8_t_s_s(((l_897 = g_212) < p_23), 7)), g_109), (safe_mul_func_int16_t_s_s((l_960 ^ ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u((l_1249 = ((l_1244[0] , p_26) & (safe_div_func_int32_t_s_s((l_1247[0][3][5] = l_1244[0].f0), l_1248)))))) ^ (-5L)), 6)) < 0x69E9L)), p_23))));
                        l_960 = l_1187;
                    }
                    else
                    {
                        short l_1262 = 0xF228L;
                        l_1126 = ((l_1249 = ((func_42(p_23, (g_52 , ((safe_lshift_func_uint16_t_u_s(((+(l_897 = (((safe_sub_func_uint8_t_u_u(0x88L, p_25)) >= (safe_lshift_func_int16_t_s_s(p_25, 9))) || (l_1262 = (l_1248 > ((((safe_sub_func_int8_t_s_s(g_915, (safe_sub_func_int16_t_s_s((-1L), p_26)))) , l_1229) && 6L) >= l_1248)))))) <= l_1263), l_1264)) < g_916))) >= 0xC2L) , g_663[7][0][1])) <= g_593);
                        g_52 = (safe_add_func_uint8_t_u_u((l_1248 = ((((safe_mul_func_uint8_t_u_u((g_593 = 0x8DL), ((l_960 , 0L) != (safe_rshift_func_uint8_t_u_s((func_42(p_26, (!((func_42((g_961 = (safe_add_func_uint32_t_u_u(func_42(p_23, l_1248), (safe_unary_minus_func_uint16_t_u((safe_div_func_uint8_t_u_u(func_42(l_1276, (safe_sub_func_uint32_t_u_u(g_916, l_1076))), g_663[7][0][1]))))))), l_960) == 0x76L) != 0xCFL))) && 0x92EE7C14L), p_25))))) | 0x8E4CL) < p_25) != l_1229)), p_26));
                        g_52 = func_42((g_156 , (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_23, 4)), (p_26 & p_24)))), p_25);
                    }
                    l_1284 = l_1283;
                }
            }
            else
            {
                int l_1285 = (-1L);
                l_1285 = (g_109 = g_961);
            }
        }
        l_960 = (0x47BFA501L <= p_24);
        for (g_52 = 20; (g_52 > 12); g_52 = safe_sub_func_int16_t_s_s(g_52, 2))
        {
            g_109 = ((l_960 = g_109) & (safe_sub_func_uint32_t_u_u(p_25, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((0xAAA9B249L || g_949), p_24)), ((l_897 = g_663[7][0][1]) >= (safe_mul_func_uint16_t_u_u(0x66D0L, p_25))))))));
        }
    }
    l_1249 = func_48(g_307[0]);
    l_897 = (((g_962[2] = ((g_124 & (safe_sub_func_uint32_t_u_u(g_774, ((safe_unary_minus_func_uint32_t_u(p_25)) == ((func_42(l_897, ((safe_rshift_func_uint8_t_u_u(251UL, (func_42(l_1263, (safe_sub_func_int8_t_s_s(p_23, func_42(g_962[4], l_1076)))) || 0L))) || g_156)) | g_593) , 0x2919L))))) , l_1303)) ^ 6UL) , l_881);
    return g_102;
}







static unsigned char func_28(unsigned short p_29, unsigned char p_30, short p_31, unsigned short p_32)
{
    union U0 l_613 = {-4L};
    int l_622 = 0L;
    int l_623 = 7L;
    int l_634 = 1L;
    char l_635 = 0x34L;
    const int l_644 = 1L;
    unsigned char l_655 = 3UL;
    unsigned char l_667 = 0x61L;
    unsigned l_871[8];
    int i;
    for (i = 0; i < 8; i++)
        l_871[i] = 0UL;
    g_109 = ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(g_594, (3UL && p_30))) && p_32), (p_30 && (g_153 = ((g_153 >= ((p_30 < p_32) == (safe_lshift_func_uint16_t_u_u(g_4, 13)))) <= 0UL))))) >= p_30);
    l_623 = func_42(func_33(((p_32 , func_37(p_30, l_613, (safe_lshift_func_int8_t_s_u((g_82 , func_45((safe_div_func_int8_t_s_s((l_622 = (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_29, 0xAFF71031L)), l_613.f0))), p_31)), g_307[0].f0)), l_613.f0)), l_613)) , l_622), l_613), g_4);
    if ((safe_mod_func_uint16_t_u_u((l_613.f0 || g_153), (1L ^ ((((((safe_add_func_uint8_t_u_u(l_622, 0xDEL)) != (l_623 = 0xC1C2BC09L)) >= ((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(((func_42(l_613.f0, (g_103 = ((l_613 , l_622) <= 0x4A0700F0L))) || 0x06L) < g_212), g_52)) , p_32) | p_31), (-3L))), l_634)) <= 0x16L)) > l_622) > g_235) != l_635)))))
    {
        union U0 l_660[6] = {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}};
        int l_661 = 0xC431A0C4L;
        const int l_662 = 0x43EBFB46L;
        int l_666[8][3] = {{0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}, {0x4D6524E6L, 0x6CAB5565L, 0x4D6524E6L}};
        int i, j;
        l_622 = (safe_rshift_func_uint16_t_u_u(((0xDC04L ^ ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_30, 10)), ((safe_mul_func_uint16_t_u_u(((p_30 <= (~(l_644 >= (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((6L == (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_29, l_655)) && (func_48((l_660[4] = func_37((((l_661 = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(func_48(l_660[2]), p_29)), g_4))) , p_30) != p_31), g_307[0], l_655, l_660[3]))) < 0x28L)), 3)), 1))) < 4294967295UL), g_4)), l_662))))) && p_30), g_4)) ^ l_662))) , p_32)) <= 65531UL), 5));
        if (((1L != g_213) , (g_593 > ((func_37(l_660[2].f0, func_37((g_594 = ((g_663[7][0][1] = func_42(l_634, g_109)) & (safe_div_func_uint16_t_u_u(((l_666[5][0] = (l_661 = l_623)) , (l_667 & p_30)), l_613.f0)))), l_660[3], g_593, g_307[0]), p_30, g_498) , 249UL) <= g_593))))
        {
            int l_670[8][5] = {{0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}, {0x78276548L, (-1L), (-1L), (-1L), (-1L)}};
            int l_671 = (-6L);
            int l_747 = 3L;
            short l_765 = 6L;
            int i, j;
            if (p_32)
            {
                g_109 = g_156;
                l_671 = ((safe_rshift_func_uint8_t_u_u((p_32 | l_670[6][2]), p_29)) <= p_32);
            }
            else
            {
                short l_689 = 0x56F8L;
                int l_690 = (-6L);
                int l_731[6][5] = {{0x91D994FCL, 0xFACBE67AL, (-1L), 1L, (-1L)}, {0x91D994FCL, 0xFACBE67AL, (-1L), 1L, (-1L)}, {0x91D994FCL, 0xFACBE67AL, (-1L), 1L, (-1L)}, {0x91D994FCL, 0xFACBE67AL, (-1L), 1L, (-1L)}, {0x91D994FCL, 0xFACBE67AL, (-1L), 1L, (-1L)}, {0x91D994FCL, 0xFACBE67AL, (-1L), 1L, (-1L)}};
                union U0 l_775[8] = {{0L}, {0L}, {0xABL}, {0L}, {0L}, {0xABL}, {0L}, {0L}};
                int i, j;
                l_622 = (safe_div_func_uint8_t_u_u(p_31, 7L));
                for (l_634 = 21; (l_634 != (-26)); --l_634)
                {
                    unsigned char l_709 = 255UL;
                    int l_713 = 1L;
                    union U0 l_718 = {0L};
                    for (g_109 = 25; (g_109 <= 6); g_109 = safe_sub_func_int32_t_s_s(g_109, 9))
                    {
                        const unsigned l_680 = 4294967295UL;
                        int l_704 = 0x9934A11FL;
                        g_52 = (safe_add_func_uint16_t_u_u(((g_213 = l_660[2].f0) , (l_671 || (0UL != (p_31 | (func_42((l_613 , p_30), l_680) && ((g_498.f1 = (safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u(((~(g_153 & p_29)) > 4L), l_623)) || p_30) | l_689), g_102)) , 0UL) >= g_82), 255UL)) , g_102), 0x6139L))) || 65529UL)))))), 65535UL));
                        l_671 = (l_690 = g_156);
                        l_704 = (((safe_mod_func_int8_t_s_s(p_31, (safe_add_func_int16_t_s_s(((func_42(l_613.f0, (0x3731L == (p_29 = (p_30 <= (g_153 = ((l_671 = g_594) <= (((safe_unary_minus_func_int8_t_s((((g_520 = l_670[6][2]) , (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((g_235 = (l_622 = g_212)), 3)), (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_29, g_102)), g_292))))) , g_153))) == g_153) >= 0x1C75F7F9L))))))) >= g_663[8][0][2]) & g_82), 0xBB54L)))) == g_292) <= 0UL);
                    }
                    for (l_623 = 0; (l_623 != (-15)); --l_623)
                    {
                        return p_32;
                    }
                    for (g_212 = 0; (g_212 >= (-11)); g_212 = safe_sub_func_uint32_t_u_u(g_212, 1))
                    {
                        short l_710 = 0L;
                        g_52 = (l_689 && (l_613 , (g_235 = g_213)));
                        l_709 = (g_109 = p_29);
                        l_710 = 0x90AFC5A8L;
                    }
                    for (l_661 = (-10); (l_661 < 7); l_661++)
                    {
                        l_713 = l_671;
                        l_623 = (safe_lshift_func_uint8_t_u_s((g_594 , ((safe_add_func_uint32_t_u_u((4294967295UL != (0x4754L != ((p_30 = (+(func_48(l_718) || (-1L)))) , (safe_mul_func_uint8_t_u_u(g_124, ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(func_33((safe_add_func_uint16_t_u_u((l_634 >= (safe_mod_func_uint8_t_u_u(func_42(((((l_731[3][1] < g_307[0].f0) == 0x47ABL) < 0x9058ED3EL) , 247UL), p_30), 255UL))), g_594)), g_498), 65532UL)), p_29)), 0)) == l_670[6][2])))))), 4294967286UL)) >= p_31)), 7));
                        l_622 = l_655;
                        l_671 = g_82;
                    }
                }
                if ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_671 = (+0x439AL)) <= (((safe_unary_minus_func_int32_t_s((l_747 = (l_622 = (l_661 = (safe_rshift_func_int8_t_s_u((((l_623 = (p_31 = (((p_29 = ((l_666[7][1] = (g_4 , (l_731[3][1] >= (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((-7L) & (l_661 != (g_663[4][0][5] = 0UL))), (func_48(g_498) & 1UL))) ^ l_731[3][1]), g_593))))) != g_292)) ^ p_30) , 0x48B7L))) ^ l_634) & g_594), g_594))))))) , g_4) >= 1UL)), p_32)), 254UL)), l_662)))
                {
                    unsigned l_763 = 0x7AF39EA8L;
                    const int l_764 = 0x3F407B58L;
                    int l_766 = 0x3588A00FL;
                    for (g_212 = 6; (g_212 >= 1); g_212 -= 1)
                    {
                        unsigned char l_756 = 0xDFL;
                        int l_771 = 0xAD7946C2L;
                        l_766 = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((((p_30 = (g_124 | (l_756 , 0xB525L))) | (((l_731[3][1] = 4294967295UL) <= (g_52 = (l_763 = (((safe_sub_func_int8_t_s_s(func_42((p_29 ^ (safe_mod_func_int8_t_s_s((g_235 = ((l_690 = (l_660[2].f0 < g_156)) || (safe_mul_func_int16_t_s_s(g_292, l_662)))), l_661))), p_32), g_212)) || 0xA6L) , p_32)))) || g_103)) ^ g_663[3][0][8]) ^ g_594), l_764)), g_307[0].f0)), l_689)) | l_765), 5));
                        l_771 = ((g_663[7][0][1] == 0xDDCBL) <= (~(safe_sub_func_int8_t_s_s((g_4 > (safe_rshift_func_int16_t_s_s(((0x1C164704L | p_31) > ((g_124 = g_103) | p_31)), p_31))), p_32))));
                        g_52 = (g_109 = (l_747 = ((g_520 >= func_42((safe_add_func_int16_t_s_s(((g_213 = g_594) > ((+(g_774 || p_29)) | (l_775[2] , l_747))), (p_32 , (p_31 != ((((g_663[1][0][3] , p_32) > g_663[7][0][1]) , 0L) , l_756))))), l_689)) ^ 0xB09FL)));
                    }
                    return g_594;
                }
                else
                {
                    unsigned l_780 = 0UL;
                    int l_784 = (-1L);
                    int l_785 = 0xF75B46D8L;
                    l_785 = (l_747 = ((safe_rshift_func_uint8_t_u_u((((p_31 = func_45(g_4, g_153)) >= ((p_32 ^ l_661) , l_689)) != (l_784 = (safe_rshift_func_int16_t_s_s((l_780 & ((p_30 = (((safe_unary_minus_func_uint16_t_u((g_103 > (safe_mul_func_uint16_t_u_u((p_29 = 0x64FCL), p_32))))) , 3UL) , l_731[3][1])) || 7L)), 2)))), p_32)) <= g_124));
                    for (g_235 = 0; (g_235 != 1); g_235++)
                    {
                        unsigned l_788 = 4294967290UL;
                        int l_790[7][3][1] = {{{(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}}};
                        int i, j, k;
                        l_790[3][2][0] = (p_32 , (g_109 = ((p_31 || l_788) ^ (safe_unary_minus_func_uint32_t_u(l_689)))));
                        g_109 = l_670[6][2];
                        l_790[3][2][0] = (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((g_156 ^ (l_690 = (safe_mod_func_int16_t_s_s((l_784 = (safe_mul_func_uint8_t_u_u(p_29, ((((g_307[3] , (safe_lshift_func_uint8_t_u_s(l_790[3][1][0], (func_42(l_775[2].f0, l_788) < p_31)))) > (safe_add_func_uint8_t_u_u((func_42(p_32, p_30) || g_109), 0x5BL))) , 1UL) && p_32)))), l_788)))) > g_102) && 0x94L), l_670[6][2])) ^ g_663[3][0][1]), 5));
                    }
                    if ((safe_div_func_int16_t_s_s((g_213 = (l_671 = g_212)), (p_32 & 0x0EL))))
                    {
                        return p_29;
                    }
                    else
                    {
                        l_623 = (safe_rshift_func_int16_t_s_u(g_156, 13));
                    }
                    g_52 = (l_731[3][1] && l_784);
                }
            }
            l_622 = (-10L);
        }
        else
        {
            unsigned char l_812 = 255UL;
            int l_819 = 0xD0E1D93BL;
            int l_837 = 0x94B29CD1L;
            unsigned l_839 = 4294967295UL;
            union U0 l_850 = {0xD9L};
            g_811 = (g_593 == (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_594, 11)), (func_48(l_660[3]) || l_660[2].f0))));
            l_819 = (l_812 > (l_655 || (safe_lshift_func_uint8_t_u_u((p_30 = (l_812 != (safe_rshift_func_uint8_t_u_s((g_593 = g_307[0].f0), (p_30 , (func_48(l_613) , g_213)))))), (safe_rshift_func_int16_t_s_s(((+(p_29 > l_666[5][0])) == l_667), 7))))));
            for (g_109 = 0; (g_109 == (-8)); g_109--)
            {
                const unsigned l_830 = 0xDA6AB01BL;
                l_839 = (safe_mul_func_int16_t_s_s(func_42(l_666[5][0], (((safe_rshift_func_uint8_t_u_s((l_660[2].f0 != (safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((l_830 && g_4), (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_819 = func_42(l_819, func_42(((((safe_rshift_func_int8_t_s_u((g_235 = 0xE2L), 4)) == p_30) > g_593) & (l_837 = p_30)), l_819))) == (-1L)) && g_838), p_32)), 0L)))), 4294967295UL))), p_32)) | l_634) || (-8L))), 0x0C22L));
            }
            for (g_594 = 0; (g_594 <= 29); g_594++)
            {
                union U0 l_851 = {0L};
                int l_860 = 0x1C911DC6L;
                g_109 = p_31;
                if (l_666[6][2])
                    continue;
                l_622 = (safe_sub_func_uint32_t_u_u((((l_613.f0 ^ ((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((func_48(l_850) != (g_498.f0 > l_666[5][0])), ((l_851 , (((safe_sub_func_int8_t_s_s(g_663[7][0][1], (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_819, (safe_lshift_func_uint16_t_u_s(p_32, p_30)))), 2)))) ^ 0xEADDL) && g_594)) ^ p_32))), 6)) || p_32), l_860)) < p_31)) < g_520) == 65535UL), l_667));
            }
        }
        l_623 = (((l_622 = func_45(p_31, ((((!0xF6F910AFL) , l_666[4][0]) ^ (p_29 , 0x64L)) , (((~1L) , (safe_div_func_uint8_t_u_u(249UL, ((l_666[5][0] = ((((safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s(func_45((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_30 ^ g_594), 10)), p_32)), l_871[0]), g_663[4][0][8])) == g_498.f0), p_32)) | g_4) , 1UL) < 0x996EL)) || g_153)))) , p_29)))) && p_29) & 1UL);
        l_661 = p_32;
    }
    else
    {
        const char l_874 = 0xFCL;
        l_622 = (safe_rshift_func_uint8_t_u_u((p_32 > l_874), 4));
    }
    l_623 = g_663[7][0][6];
    return p_30;
}







static unsigned func_33(char p_34, union U0 p_35)
{
    char l_493 = 0xB2L;
    int l_505 = 0xD1236AFFL;
    int l_507 = 0x9D1DCE01L;
    const unsigned short l_514 = 65534UL;
    for (p_35.f1 = 0; (p_35.f1 <= 6); p_35.f1 += 1)
    {
        unsigned char l_491 = 4UL;
        int l_492[8][7][4] = {{{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}, {{1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}, {1L, 2L, 0x9FB84ACAL, 0x3586C6C8L}}};
        unsigned l_504 = 0UL;
        int i, j, k;
        for (g_213 = 6; (g_213 >= 1); g_213 -= 1)
        {
            short l_479 = 0xF35AL;
            unsigned short l_503 = 0UL;
            int l_506 = 0x573F3375L;
            for (g_103 = 2; (g_103 <= 6); g_103 += 1)
            {
                for (g_292 = 6; (g_292 >= 1); g_292 -= 1)
                {
                    unsigned char l_490[4] = {0xE0L, 8UL, 0xE0L, 8UL};
                    int i;
                    l_493 = (func_42(l_479, ((0xA4L | (0xECL <= p_35.f1)) ^ 0x7BL)) >= func_42((safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_491 = (safe_lshift_func_int8_t_s_s(((-1L) >= l_490[2]), (g_153 < 0x98CA1072L)))), l_479)), 0xB7EAL)), l_492[5][1][0])), 5)), p_34));
                    l_505 = (safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((g_498 = g_307[g_292]) , l_490[2]), (g_235 & (safe_mod_func_uint32_t_u_u((g_213 >= g_103), (((safe_rshift_func_uint8_t_u_u(p_35.f0, 6)) && l_503) , p_35.f0)))))) , (g_498.f0 = (((g_307[g_213] , l_504) && 4294967293UL) , 0xEFL))), g_4));
                }
            }
            l_506 = (-1L);
        }
        for (l_505 = 6; (l_505 >= 0); l_505 -= 1)
        {
            short l_515 = (-1L);
            int l_547 = (-6L);
            int l_576 = 0x09F0D688L;
            int l_579 = 0x19C3AC32L;
            if (((g_52 > func_42((((func_42((l_507 = (l_492[0][2][3] = p_35.f1)), l_504) > (safe_mod_func_uint32_t_u_u(p_35.f1, l_493))) | ((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(g_292, p_35.f0)), (p_35.f1 && l_514))) != g_212)) <= g_52), g_307[0].f0)) , l_515))
            {
                unsigned l_539 = 0xA7488B1EL;
                char l_558 = 5L;
                int l_572 = 1L;
                g_109 = (safe_rshift_func_int16_t_s_u((((p_35.f0 && (((0x9E20510CL >= (safe_mul_func_uint16_t_u_u((g_520 = g_498.f0), ((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(g_213, (((+(safe_div_func_int8_t_s_s((~(safe_div_func_int32_t_s_s((g_52 = (safe_sub_func_uint16_t_u_u((~3UL), (l_492[5][1][0] > (safe_add_func_uint8_t_u_u(l_492[2][6][3], ((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s((((+(safe_mod_func_uint32_t_u_u(((l_539 = (((p_35.f1 >= (p_35.f1 ^ g_109)) & g_102) || 0xEB211662L)) , p_35.f1), 4294967295UL))) | l_515) > 0L), 1UL)), 0x10L)) & (-5L)))))))), g_213))), l_514))) || l_492[3][1][1]) > 0xAB13BD52L))) & g_156), p_35.f0)) , g_156)))) && g_109) == 255UL)) | g_102) == p_35.f0), l_515));
                for (g_109 = 5; (g_109 >= 0); g_109 -= 1)
                {
                    unsigned short l_552[4];
                    int l_553 = 0x570721F1L;
                    int l_563 = 0x70BA9AFFL;
                    int l_597 = 0xC397BCDAL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_552[i] = 0x3494L;
                    if ((safe_unary_minus_func_uint32_t_u(((l_492[7][4][1] = (0x4C60L || (safe_rshift_func_int8_t_s_u((g_292 , (g_109 == (g_235 = (safe_lshift_func_uint16_t_u_u((p_35.f0 , g_292), 15))))), 6)))) & p_35.f0))))
                    {
                        l_547 = (safe_lshift_func_uint8_t_u_u(p_35.f1, 0));
                    }
                    else
                    {
                        unsigned char l_554 = 254UL;
                        int l_555 = (-1L);
                        g_52 = (l_507 = (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_547 = l_552[3]), (l_554 = (l_553 = p_35.f0)))), l_555)));
                        l_555 = (func_42(p_35.f1, (safe_mul_func_int16_t_s_s((l_547 = func_42((l_554 , ((l_558 & ((p_35.f1 > l_558) ^ (l_553 = l_547))) | ((l_492[5][1][0] = ((~0x7A82B4F5L) & l_505)) , ((safe_sub_func_uint32_t_u_u(p_34, p_35.f1)) || p_34)))), p_35.f0)), (-2L)))) > g_307[0].f0);
                        l_547 = ((((safe_mod_func_uint32_t_u_u(l_563, p_34)) ^ (p_35.f0 <= ((0UL || (g_109 != (safe_add_func_int32_t_s_s(l_555, (safe_lshift_func_uint16_t_u_s(((func_42(g_124, g_307[0].f0) >= l_515) & p_34), 14)))))) , p_35.f1))) != p_35.f1) >= l_554);
                        l_507 = (safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s((g_213 = p_35.f0), (l_563 = g_124))) < ((g_520 , (g_103 & 0xA2L)) != (l_492[5][2][0] = (l_572 = p_34)))), 11));
                    }
                    for (l_547 = 6; (l_547 >= 0); l_547 -= 1)
                    {
                        int l_573 = 0x89FDFA62L;
                        g_52 = p_34;
                        l_573 = l_493;
                        l_579 = (((((g_52 = (l_552[0] , (safe_add_func_int8_t_s_s(l_576, (l_573 = g_103))))) < (func_42((safe_mul_func_uint8_t_u_u(func_42(g_292, (p_34 , 0x9E7DBFF4L)), (!g_102))), l_491) && l_507)) <= p_34) >= 0x9EL) && g_103);
                    }
                    if (p_34)
                    {
                        const short l_582 = (-1L);
                        g_594 = ((((g_213 = ((safe_mod_func_int16_t_s_s(((l_582 > l_576) && (l_547 = (l_492[5][1][0] = ((l_507 = (safe_rshift_func_uint16_t_u_u((g_82 = (((safe_lshift_func_int16_t_s_u((g_153 == l_493), 0)) >= l_504) , p_34)), (((safe_add_func_uint32_t_u_u(((func_42((g_593 = (safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(g_213, ((g_52 = p_35.f0) , func_42(l_576, p_34)))) >= g_235) == p_35.f1), 5))), l_492[5][1][0]) & g_292) , l_515), (-5L))) < 0L) | 4294967295UL)))) != l_579)))), l_515)) == g_307[0].f0)) == 0L) < g_153) & p_35.f0);
                        l_597 = (safe_div_func_uint16_t_u_u(l_552[3], (((p_34 & (g_213 = func_42(g_498.f0, ((g_594 < g_498.f0) , func_42(l_515, p_35.f0))))) == 249UL) & g_156)));
                        if (p_35.f0)
                            break;
                    }
                    else
                    {
                        unsigned l_602 = 8UL;
                        int l_603 = (-1L);
                        l_603 = (!((0xE1L ^ (safe_sub_func_int16_t_s_s(g_292, ((safe_lshift_func_uint8_t_u_u((1L < (l_563 = (0L & (g_102 < (p_35.f0 > 0x308BL))))), g_520)) , (((((((l_492[2][6][0] = func_42(p_34, l_491)) | l_547) == l_491) , 0xC7L) > g_307[0].f0) , l_505) & 0xC6L))))) || l_602));
                        return g_82;
                    }
                    g_52 = p_35.f0;
                }
            }
            else
            {
                unsigned short l_604 = 0xBA28L;
                l_604 = func_45(g_153, g_156);
            }
            return g_520;
        }
    }

        return g_124;
}







static union U0 func_37(unsigned short p_38, union U0 p_39, int p_40, union U0 p_41)
{
    union U0 l_469 = {7L};
    int l_478 = 0x97173F23L;
    p_40 = (g_102 , ((safe_mod_func_int16_t_s_s((l_478 = (((safe_sub_func_int32_t_s_s(g_124, g_156)) , func_48(l_469)) < (safe_lshift_func_uint16_t_u_s(0x9A05L, ((l_469.f0 < (safe_mul_func_uint16_t_u_u((~((((safe_rshift_func_int8_t_s_s(((1UL != (safe_div_func_uint16_t_u_u((l_469.f0 && p_38), 9L))) > g_307[0].f0), 1)) >= p_41.f0) <= 0x9F7CL) && 0xB3B7L)), p_41.f0))) , 0x13E8L))))), p_41.f0)) , g_109));
    return g_307[0];

    }







static short func_42(unsigned char p_43, const unsigned p_44)
{
    unsigned l_464 = 0x38A77FD8L;
    l_464 = g_235;
    return l_464;
}







static unsigned char func_45(unsigned p_46, unsigned p_47)
{
    char l_245 = 0x76L;
    int l_250 = (-2L);
    int l_257 = 5L;
    short l_308 = (-1L);
    unsigned l_340 = 0x9FEBA94AL;
    unsigned l_364 = 4294967295UL;
    unsigned short l_440[6][7][6] = {{{0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}}, {{0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}}, {{0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}}, {{0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}}, {{0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}}, {{0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}, {0x8042L, 0x271BL, 65534UL, 65535UL, 0x0E89L, 1UL}}};
    int l_463[10][3] = {{0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}, {0x7026E021L, 6L, 1L}};
    int i, j, k;
    for (g_212 = 13; (g_212 == (-8)); g_212 = safe_sub_func_uint32_t_u_u(g_212, 1))
    {
        unsigned l_256 = 0x1BACBC80L;
        int l_258 = 0x3608916AL;
        int l_268 = 0xE6FE1DB3L;
        int l_269 = 9L;
        int l_270 = 0x23630FB1L;
        unsigned char l_273[1][9][7] = {{{0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}, {0x09L, 0x09L, 0x15L, 0x09L, 0x09L, 0x15L, 0x09L}}};
        unsigned l_355 = 0UL;
        int i, j, k;
        if (((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((0xD9B6L | g_103), 0x5952B64FL)) , p_46), (l_245 = ((g_82 = 0xB31EL) && 1L)))) >= (safe_lshift_func_uint16_t_u_s((((p_46 != (g_212 <= (safe_sub_func_int32_t_s_s((g_109 , l_250), 4L)))) > p_46) | p_46), 11))))
        {
            unsigned l_255 = 4294967295UL;
            int l_259 = 1L;
            l_258 = ((safe_mod_func_uint16_t_u_u((p_47 && ((((g_153 = l_250) == ((l_257 = ((safe_lshift_func_int16_t_s_u(l_255, l_250)) , (((l_256 | (((g_156 , 0L) | 0L) | g_102)) , l_245) <= l_256))) || 1L)) || l_255) ^ 0x7EL)), (-2L))) > p_46);
            l_259 = 0xCAAE7E22L;
        }
        else
        {
            return p_46;
        }
        for (p_46 = 19; (p_46 < 6); p_46 = safe_sub_func_uint8_t_u_u(p_46, 5))
        {
            char l_275 = 0x38L;
            unsigned l_291 = 4294967288UL;
            short l_295 = (-1L);
            const unsigned short l_296 = 0x50D0L;
            int l_306 = 0x275BB164L;
            unsigned short l_353 = 0xBC70L;
            l_270 = ((0xD904D1D3L > (g_52 = 0x5056CAB5L)) ^ (l_258 = (((1L || (l_250 , g_153)) | l_258) < (safe_lshift_func_uint8_t_u_s((l_269 = (((+3L) & (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_47 == (l_268 = (g_103 , l_257))), g_109)), p_46))) , 0x1AL)), 5)))));
            for (g_156 = 0; (g_156 == 10); g_156++)
            {
                unsigned l_274 = 0UL;
                char l_290 = 0L;
                int l_294 = 0x009086BEL;
                for (l_258 = 0; l_258 < 1; l_258 += 1)
                {
                    for (g_235 = 0; g_235 < 9; g_235 += 1)
                    {
                        for (l_250 = 0; l_250 < 7; l_250 += 1)
                        {
                            l_273[l_258][g_235][l_250] = 249UL;
                        }
                    }
                }
                if (l_258)
                    continue;
                if ((((((l_257 , g_235) >= (l_275 = (l_274 == g_52))) >= 65531UL) , (safe_unary_minus_func_int16_t_s(l_268))) != p_46))
                {
                    unsigned l_283 = 0x7559ADEDL;
                    int l_293[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_293[i] = 0x871494E0L;
                    for (l_256 = 0; (l_256 <= 0); l_256 += 1)
                    {
                        int i, j, k;
                        l_293[0] = (safe_mul_func_uint8_t_u_u((l_273[l_256][(l_256 + 7)][(l_256 + 5)] = (safe_add_func_int32_t_s_s(((l_273[l_256][(l_256 + 4)][(l_256 + 4)] == (safe_sub_func_uint32_t_u_u(((g_82 = p_46) > 65526UL), ((l_283 , ((safe_add_func_int16_t_s_s((g_292 = (((l_291 = (g_235 , ((((safe_mod_func_uint8_t_u_u((((l_283 >= ((safe_sub_func_uint16_t_u_u((l_290 = ((l_250 = ((g_213 , l_283) , 9L)) && 1UL)), 0xEB7FL)) & g_212)) && 1L) && 4294967287UL), 0x52L)) | 0x0FL) ^ 0UL) != (-1L)))) && g_109) != p_47)), g_212)) || 0L)) , p_47)))) <= 65533UL), 0x79D42AF5L))), g_4));
                        g_109 = (l_294 = g_292);
                        l_293[0] = 0x2A996439L;
                    }
                    l_295 = 0xBE3B7B51L;
                }
                else
                {
                    unsigned char l_309 = 0xB7L;
                    g_52 = g_235;
                    for (l_290 = 0; (l_290 >= 0); l_290 -= 1)
                    {
                        unsigned char l_299 = 0UL;
                        l_257 = l_296;
                        g_52 = (safe_add_func_int16_t_s_s(p_46, l_299));
                    }
                    g_109 = (g_124 & (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_47 != (g_124 , g_109)), (safe_mod_func_int32_t_s_s((l_306 = (!g_235)), (g_307[0] , l_308))))), p_46)));
                    l_309 = ((l_306 = g_102) > g_103);
                }
            }
            l_257 = (g_52 = l_245);
            for (l_258 = 11; (l_258 != (-14)); --l_258)
            {
                short l_317 = 0x1F37L;
                int l_387 = 0xF47805E8L;
                for (p_47 = 0; (p_47 <= 0); p_47 += 1)
                {
                    const unsigned char l_316 = 1UL;
                    int l_354 = 4L;
                    int i, j, k;
                    for (l_275 = 1; (l_275 <= 6); l_275 += 1)
                    {
                        int i, j, k;
                        l_268 = ((l_273[p_47][(l_275 + 1)][l_275] & g_212) , (((safe_add_func_int8_t_s_s(((((((safe_mul_func_int16_t_s_s(p_46, (((l_273[p_47][(p_47 + 2)][(p_47 + 1)] = l_296) == 0xADL) | l_316))) ^ (((p_46 & ((!0xC9BB3BC9L) ^ l_316)) >= 0x0900L) || (-1L))) != l_317) == g_307[0].f0) & g_52) == l_316), g_103)) , p_46) >= g_124));
                        if (g_213)
                            break;
                        g_109 = (safe_mod_func_int16_t_s_s((1L < (safe_mod_func_uint8_t_u_u((l_245 >= (safe_mod_func_int32_t_s_s((1UL & (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_258 == ((p_47 ^ ((safe_mul_func_uint8_t_u_u(l_273[0][7][6], ((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(((safe_div_func_int32_t_s_s(0xF0F9C6D2L, 1UL)) < (safe_add_func_int16_t_s_s(l_306, 65535UL))), g_156)), 2)), l_340)) && 0xB259L))) | (-10L))) < 0x9723F7F0L)), (-1L))), p_47))), 0xB4CC9C1CL))), 0x11L))), p_46));
                        g_52 = (~(safe_mul_func_int16_t_s_s(((l_306 = (safe_mul_func_int8_t_s_s((l_257 = (l_295 != (4UL | (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_354 = ((((((-1L) == g_109) == (g_82 >= (safe_sub_func_int8_t_s_s((g_235 = (!((l_317 >= (0x8361L > ((safe_mul_func_uint8_t_u_u(p_47, (0x09959134L || (-8L)))) & l_353))) > l_273[p_47][(l_275 + 1)][l_275]))), l_316)))) && 0x3BL) , g_109) | 4294967293UL)), l_340)), g_124))))), l_273[0][1][0]))) || l_316), l_355)));
                    }
                    if (l_273[p_47][(p_47 + 2)][(p_47 + 4)])
                    {
                        l_250 = 3L;
                        l_270 = (safe_mod_func_uint32_t_u_u((l_317 , l_250), g_235));
                        if (g_82)
                            continue;
                    }
                    else
                    {
                        l_306 = ((-2L) > (p_47 < (g_212 ^ (l_364 = ((g_153 | (safe_sub_func_uint16_t_u_u((g_124 , p_46), (safe_mod_func_int8_t_s_s((g_235 , (safe_mul_func_uint8_t_u_u(g_235, p_47))), g_153))))) , l_354)))));
                    }
                }
                l_269 = ((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_52, ((safe_add_func_uint8_t_u_u(l_353, ((g_292 ^ (!((g_109 = ((l_270 <= 0xC297E06DL) && g_103)) , ((((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_270 = (l_268 = (safe_add_func_uint32_t_u_u(l_308, ((g_82 = (safe_mul_func_int16_t_s_s(l_317, l_270))) <= g_109))))), p_47)), 0xFE84L)) >= 0x3BL) == 0x4463L) || 0xC08B5668L)))) & 0x27L))) , g_153))), l_291)), 0xED77L)) , g_102);
                for (g_102 = 22; (g_102 <= 8); g_102 = safe_sub_func_int32_t_s_s(g_102, 9))
                {
                    unsigned l_400 = 4294967295UL;
                    if (p_46)
                    {
                        return g_156;
                    }
                    else
                    {
                        int l_401 = 0xDD943C45L;
                        int l_402 = (-1L);
                        int l_403 = 0x32640380L;
                        l_403 = (safe_mul_func_int8_t_s_s((-1L), (((safe_lshift_func_int8_t_s_u(((l_387 = l_355) || l_317), 7)) != 0x212A0DE9L) & (g_153 | (l_306 = (4294967288UL < (l_402 = ((g_292 , ((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u((p_46 , (safe_div_func_uint8_t_u_u(l_400, g_213))), g_52)), p_47)), 6)), g_109)) >= p_46), l_401)) == p_46)) | g_292))))))));
                        l_403 = p_47;
                    }
                }
                g_52 = (l_387 = (g_235 && g_109));
            }
        }
        l_268 = p_47;
        if (p_47)
        {
            unsigned l_413 = 0xA25A85B8L;
            int l_416 = 0x2A4F7C10L;
            int l_438 = 0x233BBE83L;
            int l_439 = 1L;
            for (g_102 = 6; (g_102 >= 0); g_102 -= 1)
            {
                char l_412 = (-1L);
                int l_415 = 0x700EEB3CL;
                int l_419 = 0L;
                for (l_355 = 0; (l_355 <= 0); l_355 += 1)
                {
                    for (l_268 = 0; (l_268 <= 6); l_268 += 1)
                    {
                        int l_404 = 1L;
                        int i, j, k;
                        l_250 = l_273[l_355][l_355][l_268];
                        l_404 = 0xFBC23559L;
                        g_109 = p_47;
                    }
                }
                for (l_268 = 0; (l_268 >= 0); l_268 -= 1)
                {
                    for (g_235 = 0; (g_235 <= 0); g_235 += 1)
                    {
                        return p_46;
                    }
                    g_52 = p_46;
                    for (l_257 = 0; (l_257 >= 0); l_257 -= 1)
                    {
                        unsigned char l_405 = 1UL;
                        int l_414[7][8] = {{0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}, {0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}, {0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}, {0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}, {0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}, {0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}, {0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L, 0x620E5CB8L, 0xBB97F588L}};
                        int i, j;
                        l_405 = p_46;
                        l_414[4][3] = ((safe_add_func_uint16_t_u_u(g_292, (0L >= (safe_mul_func_int16_t_s_s(l_405, g_212))))) == (safe_add_func_uint8_t_u_u(((l_412 , l_413) , p_46), 0UL)));
                    }
                    l_419 = ((((l_269 = (4294967293UL > (l_416 = (l_415 = l_250)))) , (safe_mod_func_uint32_t_u_u(g_292, l_419))) >= 0x4612L) ^ p_46);
                }
            }
            l_268 = (l_269 = (safe_add_func_uint16_t_u_u(l_269, ((safe_add_func_uint16_t_u_u((l_440[5][6][0] = (((safe_rshift_func_int8_t_s_u((l_258 = (((((((safe_add_func_int8_t_s_s((((g_82 = ((p_47 = (safe_lshift_func_uint8_t_u_u(255UL, 4))) >= ((safe_add_func_int16_t_s_s((l_270 = (safe_rshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(g_124, (safe_lshift_func_uint16_t_u_s(((l_416 != g_4) | g_4), 3)))) == (l_250 = (g_52 < g_124))), 1))), (l_439 = ((l_438 = (g_307[0].f0 >= l_416)) && 0xEB69L)))) | p_46))) != 0x16E1L) , p_46), l_416)) != g_156) > 0x07D9501DL) && 0xB2L) & 0xC4L) , p_46) | p_46)), g_156)) >= 0xED8EL) & 0x097D7708L)), l_308)) >= l_269))));
        }
        else
        {
            unsigned short l_461 = 0x77B7L;
            l_268 = l_269;
            for (g_109 = 0; (g_109 >= 0); g_109 -= 1)
            {
                int l_441 = 0x03400E4BL;
                int l_460 = (-9L);
                g_52 = l_441;
                if (p_46)
                    break;
                l_268 = g_82;
                for (l_245 = 0; (l_245 >= 0); l_245 -= 1)
                {
                    int l_444 = (-4L);
                    int i, j, k;
                    g_52 = 0xC9633A9FL;
                    if (l_440[g_109][(l_245 + 1)][g_109])
                        continue;
                    l_269 = (p_47 , (((p_47 = (safe_add_func_uint32_t_u_u((l_444 = 4294967294UL), p_46))) && (0x07C4BFC5L | g_52)) < p_46));
                    for (l_308 = 0; (l_308 <= 0); l_308 += 1)
                    {
                        unsigned l_449 = 4294967295UL;
                        int l_462 = 0x4AF6C563L;
                        int i, j, k;
                        l_462 = (safe_sub_func_int8_t_s_s(l_245, ((safe_div_func_uint8_t_u_u(p_47, (l_449 , l_441))) == (safe_sub_func_uint8_t_u_u((l_273[g_109][l_245][(l_245 + 3)] = (l_449 == l_440[3][0][5])), (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((+(((p_46 || (((safe_rshift_func_int8_t_s_s(((l_460 = (safe_div_func_uint32_t_u_u((+l_449), p_47))) & 0x4E43L), p_47)) >= g_82) , l_461)) >= 4294967295UL) != p_46)), 10)), 1L)))))));
                    }
                }
            }
        }
    }
    return l_463[5][0];
}







static unsigned func_48(union U0 p_49)
{
    unsigned char l_51[8][7][4] = {{{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}, {{0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}, {0UL, 1UL, 0xB0L, 249UL}}};
    char l_85[6];
    int l_99[4];
    char l_238 = 0x45L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_85[i] = 0xE1L;
    for (i = 0; i < 4; i++)
        l_99[i] = 0x6F3B0A6BL;
    for (p_49.f0 = 3; (p_49.f0 >= 0); p_49.f0 -= 1)
    {
        unsigned l_65 = 0x29A01EEDL;
        int l_108 = 0xCE3E596AL;
        short l_132 = 0L;
        int l_140 = 0xB4C71692L;
        unsigned short l_181 = 0x8B50L;
        for (g_52 = 3; (g_52 >= 0); g_52 -= 1)
        {
            unsigned short l_57[5] = {1UL, 65535UL, 1UL, 65535UL, 1UL};
            int l_66 = (-2L);
            int l_67[1];
            char l_81 = 0xA6L;
            unsigned l_133 = 0x851E2D6AL;
            union U0 l_142 = {0x03L};
            int i;
            for (i = 0; i < 1; i++)
                l_67[i] = 3L;
            l_67[0] = ((((safe_sub_func_int32_t_s_s(g_4, (l_66 = (p_49.f0 , ((safe_sub_func_int32_t_s_s((p_49.f0 <= ((l_57[0] , (~(p_49.f0 < (9L > (g_4 , (p_49 , (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u(l_65, g_4)))) | 0xB13FL), g_52)), 0)))))))) | p_49.f0)), 0x2E30E5DEL)) || 0x66L))))) && g_52) , l_57[0]) <= 1UL);
            for (l_65 = 0; (l_65 <= 3); l_65 += 1)
            {
                unsigned char l_72[7][9] = {{255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}, {255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}, {255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}, {255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}, {255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}, {255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}, {255UL, 255UL, 246UL, 0x41L, 0x4EL, 0x41L, 246UL, 255UL, 255UL}};
                unsigned short l_100 = 65535UL;
                int l_101 = 0xFC26EAA6L;
                int l_115 = 0x20CAD133L;
                int l_120 = 0x646FD811L;
                int i, j;
                for (l_66 = 3; (l_66 >= 0); l_66 -= 1)
                {
                    int l_84 = (-1L);
                    int i, j, k;
                    if ((g_82 = ((l_51[(l_65 + 2)][(g_52 + 2)][l_66] , (((safe_sub_func_uint32_t_u_u(p_49.f0, (((l_57[0] < (safe_lshift_func_int8_t_s_u(((l_72[2][3] & g_52) || (g_4 != (safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((+p_49.f0) >= l_81), 1)), g_4)), p_49.f0)) != l_65), 0xB10B3F49L)))), 6))) ^ g_4) , 4UL))) && 0x84L) <= 0x669DL)) & l_72[2][3])))
                    {
                        unsigned l_83 = 1UL;
                        unsigned short l_98[10][5] = {{1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}, {1UL, 1UL, 0UL, 1UL, 9UL}};
                        int i, j, k;
                        l_84 = l_83;
                        l_84 = (g_102 = (l_101 = (l_85[1] & ((l_99[0] = ((((safe_mod_func_uint16_t_u_u((l_65 < l_65), g_52)) > (l_51[(l_66 + 4)][(l_65 + 2)][p_49.f0] = (safe_lshift_func_uint8_t_u_u(p_49.f0, p_49.f0)))) & (safe_sub_func_uint32_t_u_u((p_49.f0 >= (safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(g_52, 7)) ^ (l_65 == 0xADBF82AFL)) != g_52), p_49.f0)) & g_52), 5))), l_98[1][2]))) , p_49.f0)) || l_100))));
                        l_99[2] = l_84;
                    }
                    else
                    {
                        g_103 = p_49.f0;
                    }
                }
                g_109 = ((p_49.f0 >= (safe_mul_func_uint16_t_u_u((p_49.f0 >= (l_108 = ((safe_mod_func_uint16_t_u_u((l_72[2][3] == p_49.f0), p_49.f0)) < g_102))), 0L))) > ((g_103 , ((0x9AE2BFF8L ^ 4L) , l_67[0])) || 0x7ACBL));
                for (l_101 = 0; (l_101 >= 9); l_101 = safe_add_func_uint16_t_u_u(l_101, 6))
                {
                    short l_121 = 0x2BAFL;
                    int l_127[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_127[i] = 0x1F6C300DL;
                    if (((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s(0x517482C4L)), p_49.f0)) < (l_115 = p_49.f0)))
                    {
                        l_99[0] = (l_108 , (safe_mul_func_int8_t_s_s((9UL & (safe_add_func_int16_t_s_s(l_81, 0x249FL))), l_67[0])));
                        l_66 = ((g_52 , g_82) ^ g_103);
                        l_67[0] = l_120;
                        if (l_66)
                            continue;
                    }
                    else
                    {
                        l_121 = g_4;
                        l_108 = l_108;
                        g_109 = ((safe_add_func_uint8_t_u_u(l_108, (p_49.f0 > (g_124 = p_49.f0)))) , (safe_add_func_uint8_t_u_u(((g_102 <= (l_85[1] | g_109)) && (l_127[0] = 0xF6D77719L)), (p_49.f0 == 0x3D34BCD6L))));
                        l_99[1] = g_124;
                    }
                    g_109 = ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((g_4 >= (l_133 = l_132)), (safe_div_func_uint8_t_u_u(0x76L, (safe_rshift_func_uint8_t_u_s(g_82, (!(9L >= g_124)))))))) ^ (g_124 > (((p_49.f0 >= (p_49.f0 == p_49.f0)) , g_124) <= p_49.f0))), 0xC04BL)) && g_102);
                    l_140 = (safe_sub_func_uint8_t_u_u(g_52, p_49.f0));
                }
                if (p_49.f0)
                    continue;
            }
            if (p_49.f0)
            {
                int l_141 = 1L;
                short l_205 = 2L;
                for (l_140 = 3; (l_140 >= 0); l_140 -= 1)
                {
                    for (g_124 = 0; (g_124 <= 4); g_124 += 1)
                    {
                        int i;
                        return l_57[(g_52 + 1)];
                    }
                }
                if ((((l_67[0] & (4294967287UL != ((g_103 > l_141) >= (l_108 = (l_140 = g_4))))) ^ (((!0x36B57048L) , l_65) == ((p_49.f0 >= 65535UL) < 0xF2L))) , (-1L)))
                {
                    for (l_140 = 0; (l_140 <= 3); l_140 += 1)
                    {
                        int i;
                        l_99[p_49.f0] = (l_142 , (safe_div_func_int16_t_s_s((g_156 = ((~l_99[p_49.f0]) <= (g_82 = ((g_4 ^ ((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_82, ((((safe_mul_func_uint8_t_u_u((255UL & l_141), ((safe_div_func_uint8_t_u_u(((g_153 = l_85[1]) <= (safe_add_func_int16_t_s_s(p_49.f0, ((g_103 & 0x3AL) | g_124)))), l_133)) ^ l_51[7][4][1]))) , 0x75L) != p_49.f0) , p_49.f0))), 7L)) <= l_141)) , g_4)))), 65531UL)));
                        l_67[0] = g_82;
                        g_109 = l_67[0];
                    }
                    for (g_103 = 0; (g_103 <= 0); g_103 += 1)
                    {
                        int i;
                        l_67[g_103] = l_67[g_103];
                    }
                    for (l_108 = (-24); (l_108 == 26); ++l_108)
                    {
                        unsigned l_182 = 1UL;
                        g_109 = (((safe_add_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(0x1794801DL, (safe_rshift_func_uint8_t_u_s(g_52, 1)))), (safe_rshift_func_int16_t_s_s((l_66 = (l_81 < ((safe_div_func_int32_t_s_s(l_99[0], l_57[0])) && ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((1L > (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(1L, 0)), (l_67[0] = (0x69L < (p_49.f0 < g_153)))))), p_49.f0)), g_4)), l_140)) && p_49.f0)))), p_49.f0)))) ^ l_141), l_181)) < p_49.f0) >= l_182);
                        l_67[0] = (safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((l_140 , g_109), ((safe_mul_func_uint16_t_u_u(p_49.f0, (safe_mod_func_int16_t_s_s(g_153, p_49.f0)))) && 0x5779L))) && ((0xBAL <= (safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(1L, g_156)) < l_142.f0), l_108))) ^ g_153)), l_182)), (-10L))), p_49.f0));
                        return g_82;
                    }
                }
                else
                {
                    l_99[0] = g_52;
                    for (l_108 = (-27); (l_108 < 10); l_108 = safe_add_func_int8_t_s_s(l_108, 3))
                    {
                        return g_4;
                    }
                    l_99[0] = 1L;
                    l_108 = (p_49.f0 >= (g_212 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_205, (0xE6L ^ ((p_49.f0 > (p_49.f0 ^ (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(p_49.f0, g_103)), ((safe_rshift_func_uint16_t_u_u(p_49.f0, 14)) & l_51[5][2][3]))))) || l_99[0])))), g_124))));
                }
                g_213 = (0xE8L > p_49.f0);
            }
            else
            {
                unsigned char l_223 = 0xB2L;
                int l_226 = 0xB25BDA81L;
                for (l_181 = 0; (l_181 <= 0); l_181 += 1)
                {
                    int i;
                    l_108 = (safe_lshift_func_int16_t_s_u(l_67[l_181], g_109));
                    for (l_142.f1 = 0; (l_142.f1 <= 3); l_142.f1 += 1)
                    {
                        unsigned short l_220 = 0xDAE2L;
                        g_109 = ((safe_rshift_func_int16_t_s_s((((g_109 < g_52) != (safe_rshift_func_int16_t_s_u((4294967295UL || p_49.f0), (l_220 > (g_213 = ((l_140 = (safe_sub_func_int16_t_s_s(g_153, 65531UL))) == ((g_82 = (((((l_220 , l_81) , 0x9F27456FL) > g_103) && 0x8AL) , 65531UL)) > 0L))))))) & g_103), p_49.f0)) <= p_49.f0);
                        g_109 = p_49.f0;
                        l_67[0] = 0xAE1465BAL;
                    }

                                        l_108 = 9L;
                    for (l_142.f0 = 0; (l_142.f0 <= 3); l_142.f0 += 1)
                    {
                        unsigned char l_229 = 255UL;
                        int l_230[6][2][10] = {{{0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}, {0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}}, {{0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}, {0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}}, {{0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}, {0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}}, {{0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}, {0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}}, {{0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}, {0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}}, {{0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}, {0xF982563BL, 0x00375982L, 0xA6B179F2L, 0L, 0x194C20FCL, 0x53AFABA5L, 0L, (-8L), 0L, 2L}}};
                        int i, j, k;
                        l_67[l_181] = ((l_99[0] = l_223) | l_142.f0);
                        l_99[0] = ((safe_add_func_uint16_t_u_u(1UL, l_142.f0)) , (1UL == p_49.f0));
                        l_226 = (l_67[0] = (g_109 = l_223));
                        l_108 = (l_67[0] > ((l_66 = (safe_div_func_int32_t_s_s((l_132 >= (l_230[3][1][4] = l_229)), l_181))) > l_85[2]));
                    }

                                        for (l_223 = 0; (l_223 <= 3); l_223 += 1)
                    {
                        l_99[0] = g_103;
                    }
                }
            }
            l_140 = ((g_103 , l_142.f0) > (g_4 && l_132));
        }
        g_109 = ((l_85[4] == l_132) > (safe_mul_func_int16_t_s_s(((-9L) < p_49.f0), ((l_99[1] = p_49.f0) | (g_235 = ((safe_div_func_int16_t_s_s(g_4, l_51[1][0][3])) < l_51[5][4][2]))))));
    }
    for (g_103 = 27; (g_103 >= 25); g_103 = safe_sub_func_int32_t_s_s(g_103, 5))
    {
        return l_238;
    }
    return g_103;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_307[i].f0, "g_307[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_498.f0, "g_498.f0", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_663[i][j][k], "g_663[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_941, "g_941", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_962[i], "g_962[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1306[i], "g_1306[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1418, "g_1418", print_hash_value);
    transparent_crc(g_1561, "g_1561", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1701, "g_1701", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
