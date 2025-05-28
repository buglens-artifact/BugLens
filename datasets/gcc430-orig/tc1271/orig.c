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
   unsigned short f0;
   const int f1;
   int f2;
   const short f3;
   short f4;
   short f5;
   const char f6;
   unsigned f7;
};


static char g_11[9] = {(-1L), 0x72L, (-1L), 0x72L, (-1L), 0x72L, (-1L), 0x72L, (-1L)};
static int g_13 = 0xEC3D4E70L;
static struct S0 g_24 = {0x3F6AL,-1L,0x6FBFCC01L,0xCEF3L,0x9200L,0L,0x56L,8UL};
static unsigned short g_47 = 0UL;
static unsigned g_186 = 4294967289UL;
static char g_187 = (-1L);
static int g_189[9] = {(-1L), 0xE63E790FL, (-1L), 0xE63E790FL, (-1L), 0xE63E790FL, (-1L), 0xE63E790FL, (-1L)};
static short g_215 = (-10L);
static unsigned short g_236 = 0x5535L;
static char g_256 = 4L;
static char g_338 = (-7L);
static unsigned char g_353 = 2UL;
static char g_363[1][2][9] = {{{0xC1L, (-1L), 0xC1L, (-1L), 0xC1L, (-1L), 0xC1L, (-1L), 0xC1L}, {0xC1L, (-1L), 0xC1L, (-1L), 0xC1L, (-1L), 0xC1L, (-1L), 0xC1L}}};
static unsigned g_414 = 0xA9481514L;
static unsigned g_449 = 0x47FC99E6L;
static unsigned char g_470[10][5] = {{5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL}};
static short g_487[3][7][7] = {{{0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}}, {{0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}}, {{0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}, {0xFBF6L, 0xA0A5L, 0xC210L, 0x8FBAL, (-1L), 0xCE3EL, 2L}}};
static char g_602 = (-6L);
static unsigned char g_620 = 0xB1L;
static unsigned g_644 = 0x64B8E87CL;
static unsigned char g_661 = 0x39L;
static int g_670 = 0L;
static int g_802 = 0x1189AF48L;
static char g_865[4][1] = {{0x99L}, {0x99L}, {0x99L}, {0x99L}};
static unsigned g_952 = 0x24DF0E64L;
static unsigned g_1285 = 1UL;
static unsigned short g_1304 = 0x9DBBL;
static char g_1361 = 0x05L;
static unsigned char g_1430 = 0UL;
static unsigned g_1460 = 1UL;
static int g_1662 = 0x7021E9BCL;
static const unsigned short g_1734 = 8UL;
static const unsigned g_2058 = 5UL;



static int func_1(void);
static const char func_4(int p_5, const unsigned short p_6);
static int func_7(int p_8, unsigned short p_9, char p_10);
static const unsigned short func_16(int p_17, char p_18);
static char func_73(int p_74, unsigned p_75);
static int func_79(short p_80, unsigned p_81, unsigned p_82, unsigned char p_83, struct S0 p_84);
static char func_92(unsigned p_93, unsigned short p_94);
static int func_108(unsigned p_109, int p_110, unsigned char p_111, short p_112, short p_113);
static unsigned char func_117(struct S0 p_118);
static struct S0 func_119(const unsigned p_120);
static int func_1(void)
{
    unsigned short l_12[8] = {6UL, 0xDFE0L, 6UL, 0xDFE0L, 6UL, 0xDFE0L, 6UL, 0xDFE0L};
    const unsigned short l_2064 = 0xEEADL;
    int l_2105 = 0xAAFBDD5BL;
    struct S0 l_2170 = {1UL,0xDCA91D4EL,3L,-1L,0x37B0L,-2L,0x5AL,0xAE487AFBL};
    int i;
    if (((safe_div_func_int16_t_s_s((func_4(func_7(g_11[6], l_12[2], l_12[2]), l_2064) >= (safe_rshift_func_uint8_t_u_u(l_12[2], 6))), (safe_unary_minus_func_uint8_t_u(g_11[1])))) >= l_2064))
    {
        unsigned char l_2084[10] = {254UL, 2UL, 6UL, 6UL, 2UL, 254UL, 2UL, 6UL, 6UL, 2UL};
        short l_2103 = (-1L);
        int i;
        g_13 = ((g_24 , 0x81FFL) >= l_2084[5]);
        g_13 = (1L < (safe_lshift_func_int8_t_s_u(func_108(g_13, ((0x64467CA9L && (((g_24.f7 , 0L) , 0L) != (safe_div_func_int8_t_s_s(0xB5L, g_1361)))) && ((safe_rshift_func_uint16_t_u_s((l_2064 < 0x8B58L), g_47)) == g_414)), l_2084[5], g_187, l_2084[6]), 5)));
        for (g_256 = 0; (g_256 <= 19); g_256 = safe_add_func_uint8_t_u_u(g_256, 2))
        {
            int l_2104 = (-1L);
            g_13 = (safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int16_t_s_s(((l_2103 ^ (func_117(func_119((g_215 , g_1285))) < l_2104)) , (l_2104 , (g_363[0][0][0] > (0x36E0L == g_215)))), 9L)) < 0x20L), g_24.f0)) == g_11[6]) >= g_24.f1), 0x26L));
            for (g_187 = 0; g_187 < 3; g_187 += 1)
            {
                for (g_644 = 0; g_644 < 7; g_644 += 1)
                {
                    for (g_1285 = 0; g_1285 < 7; g_1285 += 1)
                    {
                        g_487[g_187][g_644][g_1285] = 1L;
                    }
                }
            }
        }
        l_2105 = func_79(func_16(l_2064, g_487[0][1][0]), l_2084[1], g_24.f1, l_12[7], func_119(g_1734));
    }
    else
    {
        short l_2110 = 0xE9B5L;
        l_2105 = (((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s((!(-8L)), (4294967295UL | (func_7(l_2064, l_12[2], l_2110) && (-4L))))) , l_2110) > (l_2110 >= 0x6AL)), l_12[0])) && g_24.f1) ^ 0UL);
    }
    l_2105 = 0x2FBB468CL;
    if (l_2064)
    {
        int l_2121 = 0x756992A7L;
        unsigned l_2132 = 8UL;
        l_2105 = ((((safe_mod_func_uint8_t_u_u((func_4((safe_div_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(((g_487[1][1][2] , (safe_unary_minus_func_int32_t_s(l_2121))) >= 0x6AL), (g_602 == l_12[2]))) & l_12[5]), 15)))), (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((g_1734 != (((!(l_2105 & (!(safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(9L, l_2132)), g_470[7][4]))))) , l_2132) && g_414)), g_338)), l_2132)))), l_2132) >= l_2132), (-1L))) < g_1662) || g_952) && l_12[2]);
    }
    else
    {
        const int l_2147 = 0x40F95F83L;
        struct S0 l_2185 = {2UL,1L,4L,0L,0x30BBL,0x07F1L,-3L,6UL};
        int l_2238 = 0xCFCC488BL;
        g_670 = ((((safe_sub_func_uint8_t_u_u((g_13 , 0x6CL), (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((g_1430 >= (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((l_2147 , 0xBDL), (safe_mul_func_int8_t_s_s(l_2147, (safe_mul_func_int16_t_s_s(((-1L) == ((safe_lshift_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_s(l_2147, 4)) , 0xA6L) && 0UL) , l_2147) ^ 0UL), l_2064)) >= l_12[3])), 0x0900L)))))), 3UL)), 2))), 0x21840FB4L)) <= g_1430), l_12[1])), l_2147)))) == 255UL) , g_2058) , g_353);
        g_13 = ((safe_div_func_int16_t_s_s((g_2058 != (safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_2147 , (safe_add_func_uint8_t_u_u(l_2147, l_2147))), 0x5DL)), (l_2147 <= (+0xB022L)))) , (safe_div_func_uint16_t_u_u(func_117(l_2170), 0xD18DL))), g_24.f6))), g_470[5][4])) == 0L);
        for (g_1460 = 0; (g_1460 == 27); g_1460 = safe_add_func_uint8_t_u_u(g_1460, 5))
        {
            unsigned l_2181 = 0x322C7650L;
            int l_2182 = 1L;
            l_2182 = (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((-4L), 7)), 4)) & g_487[0][1][1]) != g_256), (safe_sub_func_int32_t_s_s(6L, (0x110BL > (g_338 , l_2181))))));
            for (l_2170.f5 = 0; (l_2170.f5 != (-30)); l_2170.f5 = safe_sub_func_int16_t_s_s(l_2170.f5, 1))
            {
                int l_2186 = 0xDA0ED86CL;
                g_13 = l_2181;
                l_2186 = func_117(l_2185);
                for (g_186 = 0; (g_186 == 25); ++g_186)
                {
                    unsigned l_2200 = 4294967295UL;
                    for (g_602 = 0; (g_602 != (-18)); g_602 = safe_sub_func_uint32_t_u_u(g_602, 8))
                    {
                        unsigned l_2199 = 0x1EBD92B4L;
                        g_670 = (safe_sub_func_int32_t_s_s((((0UL < (func_108(g_1460, l_2185.f0, l_2186, (g_952 ^ g_215), ((((safe_div_func_int32_t_s_s((!g_186), ((safe_mul_func_uint16_t_u_u(l_2199, (((l_2186 | 0xD6573217L) > 0xDF8DL) >= g_189[3]))) | l_2186))) > g_487[0][4][3]) || g_2058) > 0UL)) , 0x182BEFDEL)) > l_2200) != 0xF3EE7971L), l_2199));
                    }
                    for (g_215 = (-2); (g_215 >= (-13)); --g_215)
                    {
                        g_670 = (safe_sub_func_int8_t_s_s(g_24.f3, 0x53L));
                        return l_2200;
                    }
                }
                for (l_2170.f7 = 13; (l_2170.f7 > 26); l_2170.f7 = safe_add_func_int16_t_s_s(l_2170.f7, 1))
                {
                    const int l_2215 = 0x5B67F0B3L;
                    for (g_1285 = 3; (g_1285 < 57); ++g_1285)
                    {
                        const unsigned l_2211 = 1UL;
                        int l_2212 = 0xF5ED2C2FL;
                        l_2212 = (safe_lshift_func_int16_t_s_u(l_2211, 7));
                        g_13 = (safe_mod_func_int32_t_s_s(func_117(func_119(g_187)), 0xA50418F3L));
                        return l_2212;
                    }
                    l_2105 = (l_2215 , (((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0xDEL, (safe_mul_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((func_16(l_2185.f0, (safe_mul_func_uint16_t_u_u(0x8F79L, ((safe_rshift_func_uint16_t_u_u((((l_2185.f4 < (~func_79((safe_rshift_func_int8_t_s_s(g_24.f1, (0xF6L <= ((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s(g_802, 0L)) & g_449), 0xAFL)) > g_363[0][0][7])))), l_2181, l_2215, g_1430, g_24))) == 0L) > (-1L)), g_1460)) , l_2215)))) , g_470[3][3]) , 3L), l_2182)) <= 255UL) ^ 0xECL), g_1430)) & 0xB7BF4889L) >= g_1304) ^ l_2238), 3L)))), l_2181)), g_470[7][4])) != 0xFA2DB850L) | g_1430));
                }
            }
        }
    }
    l_2105 = l_2170.f3;
    return g_1361;
}







static const char func_4(int p_5, const unsigned short p_6)
{
    short l_2067 = 0xE941L;
    int l_2068 = (-1L);
    l_2067 = (safe_mul_func_int8_t_s_s(p_6, g_865[0][0]));
    l_2068 = ((!6L) & p_6);
    l_2068 = (p_5 != (safe_div_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_6, ((-4L) | ((((g_236 && (((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((func_7((g_1734 != (l_2068 || (safe_lshift_func_int16_t_s_s((((g_363[0][0][2] , g_865[2][0]) , 0xB0EBC26EL) ^ l_2068), 13)))), p_6, l_2068) , l_2067), 6L)) <= l_2067), 255UL)) >= p_6) == p_6)) ^ g_24.f1) <= g_24.f6) == p_6)))), p_5)) < l_2068), g_24.f6)));
    return l_2067;
}







static int func_7(int p_8, unsigned short p_9, char p_10)
{
    int l_19 = 0x69A22DB7L;
    int l_21 = 0x07D19FA5L;
    int l_64 = 0xF52837B7L;
    g_13 = 0x9226C312L;
    l_21 = (safe_lshift_func_uint8_t_u_s((func_16(g_13, l_19) <= 0xD3ECL), ((0xCDL >= g_13) | (func_16(l_19, (p_10 > p_10)) , g_11[1]))));
    l_21 = func_16((safe_mod_func_int32_t_s_s((g_24 , (g_24.f3 == (safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(func_16(p_9, (func_16(((safe_add_func_int32_t_s_s((p_9 & (((safe_mod_func_uint16_t_u_u(func_16((safe_mul_func_int16_t_s_s(p_9, (l_19 > l_19))), ((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((func_16((func_16(g_13, (safe_add_func_int16_t_s_s(((func_16((safe_sub_func_uint8_t_u_u(((p_8 || 65534UL) < (-1L)), g_24.f5)), l_19) || p_8) | p_10), 0x75ABL))) , (-1L)), g_13) >= g_11[4]) , l_21), l_19)) && p_9), 0x7CAFDF11L)) , p_8)), 0xAE5BL)) , p_10) < p_10)), l_21)) == p_9), p_9) & l_19)), g_24.f5)), 0UL)) ^ p_9), g_24.f3)) >= 0x1C74L), g_47)))), g_47)), p_8);
    if (((p_10 || (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((func_16(func_16(((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(l_19, func_16(g_24.f4, l_21))) || g_11[6]), 0xE40D8EB8L)) || ((safe_add_func_uint16_t_u_u(((l_21 | (safe_rshift_func_uint8_t_u_u(((l_21 , l_64) && g_24.f6), 3))) && 0UL), 0UL)) < p_10)), g_13), l_21) ^ 65532UL), g_13)), p_9)), l_64))) == 1L))
    {
        int l_69 = 0xEAB19957L;
        char l_70 = 0x38L;
        short l_2050 = 0L;
        char l_2053[6][7][6] = {{{(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}}, {{(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}}, {{(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}}, {{(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}}, {{(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}}, {{(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}, {(-10L), (-6L), (-1L), 0xB0L, 0xFDL, 0x49L}}};
        int i, j, k;
        g_13 = ((((p_10 == (0xF67A21E2L >= (((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_69, (func_16(p_9, l_21) , func_16((g_24.f3 || g_11[6]), (p_10 , l_69))))), l_64)) == p_10) & g_24.f3))) || l_69) < g_47) , 0x7C7E6801L);
        l_69 = ((((func_16(g_11[6], l_70) | ((safe_sub_func_int16_t_s_s((((func_16(p_10, func_73(l_19, p_8)) ^ (safe_rshift_func_uint16_t_u_u(g_13, 0))) ^ l_64) > l_64), p_9)) , p_10)) <= (-1L)) != l_64) ^ l_69);
        p_8 = func_108(p_8, l_70, ((0xCCL > l_2050) , (((safe_rshift_func_uint8_t_u_u(((func_117(func_119(l_64)) & 0L) , func_92(l_70, l_2053[3][5][1])), 5)) , l_64) || g_24.f1)), g_11[0], g_470[7][4]);
    }
    else
    {
        int l_2063[3];
        int i;
        for (i = 0; i < 3; i++)
            l_2063[i] = (-8L);
        g_13 = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((p_9 | ((func_117(func_119(g_2058)) & (g_1285 == 0x045AL)) , ((safe_rshift_func_int16_t_s_s(func_73((((g_24 , (safe_sub_func_int8_t_s_s(func_73((l_2063[1] > (((g_1430 >= g_620) == p_8) < l_2063[1])), l_2063[1]), 0UL))) | g_24.f7) <= 0x16L), p_8), 12)) >= p_9))), g_24.f1)), g_11[6])) == p_8);
    }
    return g_670;
}







static const unsigned short func_16(int p_17, char p_18)
{
    unsigned l_20[5] = {1UL, 0x6874BE76L, 1UL, 0x6874BE76L, 1UL};
    int i;
    l_20[2] = g_13;
    return l_20[4];
}







static char func_73(int p_74, unsigned p_75)
{
    int l_78 = (-2L);
    char l_99 = 6L;
    struct S0 l_942 = {0x5D7EL,0x54D1C3E4L,-1L,0x3CECL,0xDB8EL,1L,0x44L,0x9385F7B3L};
    unsigned l_1241 = 1UL;
    char l_1272 = 0x6AL;
    int l_1281 = (-6L);
    unsigned char l_1284 = 1UL;
    unsigned l_1328 = 0x4B3B66A5L;
    short l_1410 = 0x6B81L;
    short l_1582 = 0xA244L;
    int l_1679 = (-1L);
    unsigned l_1816 = 0xB998474BL;
    unsigned l_1926 = 7UL;
    for (g_24.f5 = 0; (g_24.f5 >= (-22)); g_24.f5 = safe_sub_func_int32_t_s_s(g_24.f5, 5))
    {
        char l_91 = 0x82L;
        int l_1238 = (-7L);
        l_78 = func_16(g_24.f2, g_24.f1);
        if (func_79(func_16((((safe_mod_func_int8_t_s_s(g_24.f5, (safe_mul_func_int16_t_s_s(g_24.f0, (safe_mul_func_uint8_t_u_u(0x1EL, (1L & (func_16(l_91, func_92(((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(l_78, 6)), 0x124FAE1BL)) > 1UL), ((l_99 || l_78) || g_24.f2))) >= l_78)))))))) && p_75) > g_11[1]), p_74), l_91, l_78, g_13, l_942))
        {
            char l_1228 = 1L;
            l_78 = (4294967295UL ^ (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_75, p_75)), ((safe_mod_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((p_74 & (safe_div_func_uint8_t_u_u((~(safe_rshift_func_uint8_t_u_s(g_353, 5))), g_24.f2))) , (((g_338 , (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((l_1228 && (l_91 && p_74)) <= 6UL), 0x0B76FAF5L)), 0x5523F6CEL))) != 0x25BF792DL) > p_74)), 0xC6L)), 0xBCL)) , p_75))), l_942.f2)));
        }
        else
        {
            unsigned l_1233 = 0UL;
            int l_1257 = (-1L);
            int l_1258 = (-2L);
            unsigned l_1259 = 3UL;
            for (g_187 = 0; (g_187 <= 2); g_187 += 1)
            {
                int l_1242 = 0L;
                g_802 = p_74;
                l_1238 = (((safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((l_1233 ^ 0xA8ECDC6BL), l_91)) , (0UL < p_75)), (safe_add_func_int8_t_s_s(1L, 8UL)))) || ((safe_mul_func_uint16_t_u_u(0x24C0L, 1L)) & p_75)) | p_74);
                for (g_24.f0 = 0; (g_24.f0 <= 2); g_24.f0 += 1)
                {
                    int i, j, k;
                    g_802 = (safe_rshift_func_uint8_t_u_u(((((!(0x4C9FD1AEL ^ ((g_487[g_24.f0][(g_187 + 2)][(g_24.f0 + 1)] > l_1241) >= ((l_1242 | ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(l_91, g_670)), 1)) || (((l_99 && (safe_sub_func_uint32_t_u_u((g_353 || 65535UL), 0x405338FBL))) > p_74) , p_74))) <= p_75)))) != p_75) , p_75) | 0x7FL), 5));
                    for (g_256 = 0; (g_256 >= 21); g_256 = safe_add_func_int16_t_s_s(g_256, 3))
                    {
                        g_802 = ((((0x7EL <= g_24.f7) , 0L) || l_1242) | (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((p_75 >= (safe_add_func_int8_t_s_s((-10L), func_16(g_670, g_236)))), g_644)), p_74)));
                        l_1257 = p_74;
                    }
                }
            }
            l_1238 = ((g_865[2][0] , (0xFD743F1CL || (~((l_1258 == (func_108(g_602, p_74, l_1258, (l_1259 , func_16(l_1258, g_661)), l_942.f2) < g_47)) != p_74)))) , g_186);
            l_78 = (safe_unary_minus_func_int8_t_s(p_75));
        }
    }
    l_78 = (safe_mod_func_uint32_t_u_u((g_47 == (safe_rshift_func_uint8_t_u_u((g_24 , 0x0CL), g_449))), func_16((~(func_16((g_644 && (safe_unary_minus_func_int8_t_s(p_75))), (((((g_865[1][0] < (safe_lshift_func_uint16_t_u_s(((func_108(((safe_add_func_uint32_t_u_u(0x5BCC09CDL, (safe_div_func_int8_t_s_s(4L, l_942.f7)))) >= 0xD5D3L), g_24.f2, p_74, p_75, g_470[9][2]) || l_942.f6) > 0x6CL), l_1272))) , g_189[3]) && l_1272) == p_74) , p_74)) || 0UL)), g_24.f4)));
    l_78 = l_99;
    if ((((safe_rshift_func_uint16_t_u_u((l_942.f5 >= l_1272), 14)) , (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(g_602, func_108(func_108(((-1L) != l_1281), g_338, ((safe_div_func_uint16_t_u_u((((((l_942.f3 , (~l_942.f0)) <= p_75) <= p_75) , 0x6C52L) != l_942.f2), l_942.f6)) , g_363[0][0][2]), p_75, p_74), g_215, p_74, g_865[2][0], p_74))), 11)), p_75))) > l_942.f1))
    {
        unsigned short l_1290 = 1UL;
        int l_1301 = 0xFA129F85L;
        l_1284 = p_75;
        g_1285 = (255UL || (g_24 , func_117(g_24)));
        l_1301 = (g_644 < (safe_mul_func_uint8_t_u_u(p_75, (safe_rshift_func_int16_t_s_s(l_1290, ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(p_75, 9)) , ((0x19L > (safe_mod_func_int32_t_s_s(l_1290, ((safe_mul_func_int8_t_s_s(func_108((safe_mul_func_uint16_t_u_u(l_1290, func_16(g_353, p_74))), g_487[0][2][2], g_363[0][1][0], p_74, p_74), p_74)) || 0x142300B7L)))) | l_1272)), l_1290)) , g_338))))));
    }
    else
    {
        unsigned short l_1308 = 0x227FL;
        char l_1360 = 0xBBL;
        struct S0 l_1378 = {0x6B8CL,4L,2L,-7L,-1L,-1L,3L,6UL};
        int l_1441 = 0xDFD3F55DL;
        unsigned short l_1490 = 0xBBAEL;
        const unsigned l_1529 = 0x57B848A9L;
        unsigned l_1537 = 0x4D2EF2DFL;
        unsigned char l_1577[1][9] = {{0xE2L, 251UL, 0xE2L, 251UL, 0xE2L, 251UL, 0xE2L, 251UL, 0xE2L}};
        unsigned l_1614 = 0xF7E79334L;
        int l_1615 = 0xD53A1399L;
        const short l_1663 = (-1L);
        unsigned char l_1696 = 249UL;
        char l_1721[4] = {0xEEL, 0x8DL, 0xEEL, 0x8DL};
        unsigned l_1817 = 3UL;
        unsigned l_1987 = 0xB9A217EEL;
        unsigned short l_2024 = 4UL;
        int i, j;
        l_78 = (safe_lshift_func_uint16_t_u_u((l_942.f2 , g_1304), g_24.f0));
        g_802 = (-1L);
        for (g_187 = (-9); (g_187 >= 13); g_187 = safe_add_func_int8_t_s_s(g_187, 6))
        {
            unsigned char l_1329 = 0x4BL;
            unsigned l_1403 = 0xAA10FED2L;
            int l_1411 = 0x22352662L;
            unsigned char l_1481[6][1][3];
            struct S0 l_1499 = {65528UL,1L,1L,0x0C73L,0xB346L,0xFEA2L,1L,1UL};
            unsigned short l_1538[3][2];
            unsigned l_1567[9][10] = {{0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}, {0x5BA3974AL, 4294967295UL, 0xFA90A65BL, 0x2AB5DC07L, 0x7A2EABEBL, 4294967295UL, 0UL, 0UL, 0xFA90A65BL, 0UL}};
            int l_1594 = 1L;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_1481[i][j][k] = 253UL;
                }
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1538[i][j] = 65533UL;
            }
            if (l_942.f7)
            {
                unsigned short l_1309 = 0xC9D1L;
                int l_1310 = 0x25975EFDL;
                const int l_1352 = 0xE349254EL;
                for (g_1304 = 0; (g_1304 <= 0); g_1304 += 1)
                {
                    unsigned l_1313 = 0x7F2FB339L;
                    for (g_802 = 0; (g_802 <= 0); g_802 += 1)
                    {
                        int i, j;
                        if (g_865[g_1304][g_1304])
                            break;
                        l_1308 = (!((safe_unary_minus_func_int16_t_s(g_865[(g_1304 + 2)][g_1304])) & 0xCBL));
                    }
                    if (g_11[3])
                        break;
                    l_1310 = l_1309;
                    l_1313 = (p_75 != 0UL);
                }
                g_670 = (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(p_75, ((func_16(((safe_mod_func_uint32_t_u_u(p_75, p_74)) & (~l_1308)), g_338) <= (safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s(((p_75 , func_108(p_75, (safe_mul_func_int16_t_s_s(func_16(((p_75 || g_449) , (-8L)), p_74), g_865[2][0])), l_1308, l_1328, l_1309)) ^ l_942.f5), (-5L))), 1UL)), p_74))) , 0x5ED6D8FEL))) >= l_1310) ^ l_1329), l_1308));
                for (l_1284 = 0; (l_1284 <= 0); l_1284 += 1)
                {
                    int l_1359 = 5L;
                    char l_1383 = 0L;
                    const int l_1395[2][4] = {{0xD256CC89L, 0xD256CC89L, 0xD256CC89L, 0xD256CC89L}, {0xD256CC89L, 0xD256CC89L, 0xD256CC89L, 0xD256CC89L}};
                    int l_1396 = 0x16A52DB4L;
                    int i, j;
                    g_802 = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(p_74, 6)), g_256));
                    l_1310 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((func_16((((+(g_236 || (g_24.f1 , (func_16(p_75, p_74) > l_1329)))) ^ p_75) != (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(255UL, (+(((-9L) && 0x2EL) | p_75)))), 0xB0B7L)), (-7L)))), p_74) || p_74), p_74)), p_75));
                    g_1361 = ((safe_sub_func_int16_t_s_s(func_16((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_1352, 2)) || (p_74 & ((((((((safe_add_func_uint16_t_u_u(p_75, l_1329)) ^ p_75) & l_1329) <= ((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x1636L, (0UL > (((p_74 && l_1241) , l_1352) | 0xBDFEL)))), l_1359)) ^ l_1359)) ^ l_1309) >= 0UL) > l_1360) == 0UL))), g_487[0][1][0])) >= l_1329), g_602)), l_1329), g_487[0][4][3])) == p_74);
                    l_1310 = ((safe_rshift_func_uint16_t_u_u((0xE2A4BAA6L ^ (((!l_942.f7) , ((0x0A631076L <= (((safe_div_func_uint16_t_u_u((p_74 , 0xB620L), (safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_189[3] <= (l_99 , (safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((~(g_602 != ((0UL ^ l_1352) , 0x0883L))), 1L)) , g_24.f6), 2)))), g_802)), g_670)), p_75)))) <= 0x9447L) <= 0L)) > 0x32L)) || p_75)), 11)) , l_1308);
                    for (g_602 = 0; (g_602 >= 0); g_602 -= 1)
                    {
                        unsigned l_1394[8] = {0x8D6A4A1BL, 0xD09AF785L, 0x8D6A4A1BL, 0xD09AF785L, 0x8D6A4A1BL, 0xD09AF785L, 0x8D6A4A1BL, 0xD09AF785L};
                        int i;
                        g_670 = func_108(func_16((safe_rshift_func_int8_t_s_u((p_75 ^ g_802), 2)), p_74), (l_1378 , (g_802 >= func_16(l_1359, (p_75 > (safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(func_16(g_11[4], g_449), g_353)) , 9UL) <= p_74), 1L)))))), p_75, p_75, l_1383);
                        l_1396 = (g_24.f1 , (func_108((g_353 <= (safe_add_func_uint32_t_u_u(func_16(g_670, p_74), (p_75 , (((((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_24.f7, 4)), (((safe_add_func_uint8_t_u_u((g_11[1] , (safe_div_func_uint16_t_u_u(((l_1394[1] < (-3L)) ^ p_75), p_74))), l_1395[1][0])) , g_802) | 6UL))) || 0x01L) < 0xA9L) <= (-1L)) || 0x19DEL))))), g_186, p_75, p_75, l_942.f1) , l_1383));
                        l_1411 = func_16(l_1394[1], (safe_sub_func_int32_t_s_s(func_108(p_74, g_24.f4, (safe_mod_func_uint16_t_u_u(0x1C2EL, (safe_div_func_int8_t_s_s(l_1395[1][0], l_1403)))), p_75, (((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_75, 3)), ((safe_lshift_func_uint8_t_u_s((p_75 && g_1304), 4)) && g_186))) && g_802) >= l_1410)), 0xF0097F15L)));
                        g_670 = ((l_1394[0] | (g_24 , (safe_lshift_func_uint16_t_u_u(8UL, (safe_sub_func_int32_t_s_s((p_74 & func_16(p_74, g_414)), ((safe_sub_func_uint8_t_u_u(((func_16(((safe_mod_func_uint8_t_u_u(func_108(((p_75 > (+((((((l_1394[7] ^ g_186) , g_487[1][1][6]) ^ g_353) && g_186) || g_24.f4) == p_75))) , p_74), l_1378.f6, p_74, p_74, l_1395[1][2]), l_1378.f0)) , g_236), p_74) , (-1L)) > 0xF1L), 0xB5L)) > 0L))))))) , 0x4DBE2E9EL);
                    }
                }
                if (g_353)
                    continue;
            }
            else
            {
                int l_1432 = 0x6EB1DDEEL;
                char l_1461 = (-1L);
                const short l_1480 = 1L;
                for (g_24.f5 = 1; (g_24.f5 <= 8); g_24.f5 += 1)
                {
                    unsigned l_1433 = 0xF1E44DF3L;
                    int l_1434 = 8L;
                    for (g_353 = 0; (g_353 <= 8); g_353 += 1)
                    {
                        struct S0 l_1431 = {0xE54FL,-1L,0L,-7L,1L,0x35A3L,0xFFL,0x999B45C5L};
                        l_1434 = (safe_sub_func_int16_t_s_s((safe_div_func_uint16_t_u_u(0xF47BL, (safe_sub_func_int16_t_s_s(g_470[4][0], 0x4060L)))), func_108((((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_74, ((g_1430 ^ (func_16(((l_1431 , 0x474EL) | (g_11[6] , (p_75 <= g_952))), g_487[0][4][3]) , l_1403)) == p_74))) , 0xA8BCL), g_644)) && l_1432) , 0xEC823A56L), l_1378.f6, g_470[7][4], g_802, l_1433)));
                        g_802 = p_75;
                        if (l_1431.f7)
                            break;
                    }
                    for (l_1378.f0 = 1; (l_1378.f0 <= 4); l_1378.f0 += 1)
                    {
                        int i, j;
                        g_670 = 0xF94B0248L;
                        l_1411 = (+func_16((g_470[(g_24.f5 + 1)][l_1378.f0] , g_189[g_24.f5]), (((safe_unary_minus_func_uint32_t_u(((((safe_mul_func_uint16_t_u_u((((4UL && g_189[g_24.f5]) || g_189[g_24.f5]) > (safe_div_func_int16_t_s_s((l_78 & p_75), l_1378.f3))), ((g_256 | l_1308) , 0xB6BFL))) < p_75) & p_74) != g_24.f5))) && g_24.f5) <= l_1432)));
                        g_670 = p_74;
                    }
                    for (g_602 = 8; (g_602 >= 0); g_602 -= 1)
                    {
                        char l_1440[10] = {0x57L, 0x69L, 0L, 0L, 0x69L, 0x57L, 0x69L, 0L, 0L, 0x69L};
                        int i;
                        l_1441 = l_1440[7];
                        if (l_1411)
                            continue;
                        l_1411 = g_952;
                    }
                    l_78 = g_1304;
                }
                for (g_215 = 19; (g_215 < (-4)); --g_215)
                {
                    const unsigned short l_1453 = 0x718CL;
                    if ((g_1304 && (safe_rshift_func_uint8_t_u_s(g_363[0][1][1], 3))))
                    {
                        unsigned l_1452 = 0x2DA8C934L;
                        l_78 = l_1378.f7;
                        g_802 = p_75;
                        l_1411 = (((safe_mod_func_uint8_t_u_u(l_1241, (g_24 , ((l_1403 | 0x8A9FL) || ((func_108(((l_78 , (l_1378.f3 || func_16(g_24.f2, ((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_108(l_1452, p_74, g_24.f5, l_1452, l_1432), l_1453)), g_24.f2)) && p_74)))) && g_1430), l_1452, g_338, p_74, l_942.f2) < 65535UL) > p_75))))) , g_24.f4) | l_1452);
                        if (g_865[0][0])
                            continue;
                    }
                    else
                    {
                        l_1441 = (safe_mul_func_int16_t_s_s(p_75, (safe_mul_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u(g_187, 6)) | func_108((l_1453 == p_74), (8UL >= 0UL), (0xC7L >= ((func_16(l_942.f1, func_108((func_108(g_187, l_1453, l_99, p_74, g_1460) < 1L), l_1378.f0, p_75, l_1453, g_24.f5)) ^ l_1328) != p_75)), p_75, l_1461)) < g_187), 0x0BL))));
                        g_670 = (p_74 != ((((l_1378 , p_75) , (func_108(g_865[1][0], p_75, p_75, g_414, l_1461) < g_1430)) | l_1284) > 0x2F1EF875L));
                    }
                    g_670 = (((g_1361 >= (safe_div_func_uint8_t_u_u(func_16(((safe_mod_func_uint8_t_u_u(((g_256 == (safe_mod_func_uint8_t_u_u((((((g_470[9][0] > (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0xACC6L, 12)), ((safe_sub_func_int32_t_s_s((l_1411 || p_74), l_1329)) < (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((l_1461 | (safe_lshift_func_int8_t_s_s(((~g_602) < l_1480), p_75))) , l_1481[0][0][2]), 5)) < p_75), p_75)))))) ^ p_74) & p_75) >= p_75) , p_74), 1UL))) ^ l_1453), l_1453)) ^ l_1453), p_74), 8UL))) , p_74) > 0UL);
                }
            }
            if (((p_74 && ((g_189[3] , (g_353 == l_942.f6)) < (g_1460 && (((((p_75 , ((g_24 , ((g_24 , (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((((safe_sub_func_uint32_t_u_u(p_74, 0x8F257007L)) || 0x43L) , 65535UL) < l_1481[0][0][2]) <= g_802), 0xD209L)), g_189[3])), l_1490))) , 0L)) <= p_75)) ^ (-2L)) >= 0x2000L) && l_1378.f3) & l_1272)))) , l_1403))
            {
                int l_1516 = 0x59771DEAL;
                int l_1517[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1517[i] = 0xC5DC8FF5L;
                l_1517[0] = (((safe_sub_func_int32_t_s_s((((safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((1UL & (((safe_rshift_func_uint8_t_u_s((p_74 == ((l_1499 , ((((g_215 > 0x0FD16DAAL) <= p_74) && (safe_mod_func_uint16_t_u_u((l_1499.f7 , (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(p_75, (safe_rshift_func_int16_t_s_s((((l_1403 , p_75) > g_670) , l_1378.f0), l_1281)))) < l_1516), 3)), 0x5DF6L)), 0x0FL)) , g_11[5]), p_75)) >= l_942.f5), 6))), l_1378.f0))) && p_75)) >= l_1378.f6)), 2)) , 2UL) >= g_24.f7)), p_75)) > p_75), l_1490)) <= l_1360) && 0x86L), 4294967294UL)) , 0x9BFE02D4L) , l_1481[4][0][0]);
                if (l_1329)
                    continue;
                if (l_942.f6)
                    continue;
            }
            else
            {
                const unsigned l_1528 = 0xFA22AB6DL;
                struct S0 l_1583 = {65528UL,4L,0xBB031BA4L,-1L,-1L,6L,0x63L,0xCB7D0BD3L};
                for (g_644 = 0; (g_644 > 59); g_644++)
                {
                    unsigned char l_1539 = 0x0EL;
                    int l_1560 = 4L;
                    int l_1568[4] = {6L, (-1L), 6L, (-1L)};
                    int i;
                    if ((safe_sub_func_int8_t_s_s((+g_661), (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_1308, ((safe_lshift_func_uint16_t_u_s(g_620, func_108(g_1285, ((p_74 , g_449) , (l_1528 , 0x02857A65L)), ((g_24 , 0xF34DF940L) , 0x4BL), g_661, p_74))) , l_1529))), 4)))))
                    {
                        unsigned short l_1534[6];
                        int l_1554 = 0xC9E9A9ACL;
                        unsigned short l_1555 = 0x7E6DL;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1534[i] = 9UL;
                        l_1539 = (safe_mul_func_int16_t_s_s(g_236, (((~(func_108((g_363[0][0][2] <= (l_1499.f7 || (func_108(l_1499.f0, ((func_108((((p_75 > (safe_lshift_func_uint8_t_u_s(l_1534[2], 1))) | 0xDB86CD6FL) , ((((safe_add_func_int16_t_s_s((p_74 , g_189[3]), g_470[7][4])) <= g_24.f5) >= 0L) > g_487[0][4][3])), l_1537, l_1538[2][1], g_13, g_670) == l_1241) && p_74), p_74, g_487[1][1][1], p_74) & 0UL))), p_74, g_644, g_602, p_74) || 0x36L)) || l_1537) , p_74)));
                        l_1441 = ((safe_rshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_24.f4 > ((l_1528 && (safe_mul_func_uint8_t_u_u(((~0x818D19CFL) & (((((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((((((safe_mod_func_int16_t_s_s(((+((p_74 ^ 0x93L) | l_1534[2])) , 0x4D60L), p_74)) >= g_414) <= g_487[0][4][3]) && 0xF20DFC07L) , g_24.f6) , l_942.f5), l_1554)) != l_1554), 6)) , 0x96L) , l_1360) || p_75) < p_75)), 255UL))) | p_75)), l_1555)), g_1460)) <= 4L), 4)) || l_1555);
                    }
                    else
                    {
                        return g_363[0][1][8];
                    }
                    l_1568[3] = (p_74 >= ((safe_rshift_func_uint16_t_u_s(0UL, (safe_sub_func_uint16_t_u_u(l_1560, ((safe_add_func_uint32_t_u_u(func_16((l_1560 | ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(func_16((func_108(l_1499.f5, p_75, p_74, l_1567[7][1], (g_47 || 0x3F1CL)) , g_363[0][0][6]), p_75), 2)), l_942.f3)) <= g_24.f7)), g_24.f5), g_256)) ^ g_487[0][4][6]))))) <= l_1499.f7));
                    l_1411 = (p_75 <= (((g_24.f2 < ((safe_lshift_func_int16_t_s_u(((0x93L >= (0UL | ((g_256 <= g_865[0][0]) <= l_1411))) == (((((safe_sub_func_int32_t_s_s(p_74, ((safe_lshift_func_int16_t_s_s((l_1528 == l_1499.f2), p_75)) && 1UL))) < 65535UL) && g_13) > (-2L)) != p_74)), 12)) && l_1577[0][3])) | g_24.f4) > l_1481[0][0][2]));
                }
                if (p_75)
                {
                    g_802 = (safe_lshift_func_int8_t_s_s(func_16(p_75, g_11[6]), func_16(g_24.f1, p_74)));
                }
                else
                {
                    int l_1595 = (-1L);
                    l_78 = (((safe_mul_func_uint8_t_u_u(l_1582, func_108((((l_1583 , (safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((l_1499.f6 > ((((g_952 != p_74) < g_24.f1) , (safe_mod_func_uint16_t_u_u(p_75, 4UL))) != (safe_mod_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((((1L == g_487[2][3][5]) ^ g_620) , 0xF8BBL), p_74)) <= g_187) | g_186) == l_1594), 0x8DB63FF4L)))), 1)) != 0x453C4F51L) & 0xEBL), 4))) , l_1499) , l_1595), g_644, l_1595, p_74, g_11[4]))) >= l_1284) != l_1595);
                    return p_75;
                }
                l_1615 = (func_108(((safe_div_func_uint32_t_u_u(g_1361, (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_1378.f0, (safe_sub_func_uint8_t_u_u((~(safe_rshift_func_uint16_t_u_u(65526UL, 12))), (((safe_mod_func_uint8_t_u_u(g_449, (g_24.f0 && (l_942 , ((func_108(((((g_620 | l_1577[0][5]) | (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(0xF0L, g_256)) >= p_74), 1UL))) != 1L) & 0xC0L), p_74, p_75, l_1241, l_1567[6][9]) < g_414) , l_1614))))) || p_75) == 3UL))))), l_1378.f4)) > 7L) | 1UL), 0x9AL)))) | p_75), g_47, p_74, l_1615, g_24.f0) || p_74);
                g_670 = (func_16(l_1328, g_802) | (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_74, (p_74 != (~(safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_75, (func_16(g_449, l_1378.f7) == g_24.f3))), p_75)))))), 1)));
            }
        }
        if ((((safe_div_func_uint32_t_u_u((0UL <= l_942.f0), ((safe_div_func_uint8_t_u_u(g_363[0][0][4], func_16(p_74, (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(l_99, (g_644 && g_189[3]))) != (g_1304 && g_661)), p_75)), 6))))) , g_24.f3))) ^ l_942.f6) == 0x65B2L))
        {
            char l_1640 = 0L;
            l_1441 = (safe_div_func_uint8_t_u_u(((p_74 & (safe_lshift_func_uint8_t_u_u(g_24.f4, 3))) ^ (((l_942.f5 <= (((safe_lshift_func_uint16_t_u_s(l_1640, 15)) , (l_1378.f7 && l_1640)) | (safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(0xC8FF1096L, p_75)), ((func_108(g_1285, p_75, l_1490, g_189[3], p_74) || 1L) > p_74))), 0xB4L)))) != g_24.f5) >= l_942.f4)), g_470[1][0]));
        }
        else
        {
            short l_1653 = 0x950DL;
            struct S0 l_1680 = {0xAD5DL,-1L,-9L,6L,0xBA6EL,0L,0x35L,0xCA820FEDL};
            int l_1801 = 0x9D90A079L;
            unsigned l_1976 = 4294967294UL;
            int l_1988 = 0x5C38E230L;
            unsigned char l_2007 = 1UL;
            for (p_75 = 0; (p_75 == 28); p_75++)
            {
                g_670 = 0xF5D821F9L;
            }
            for (g_24.f2 = 0; (g_24.f2 == (-22)); g_24.f2 = safe_sub_func_int32_t_s_s(g_24.f2, 2))
            {
                g_670 = (safe_lshift_func_uint16_t_u_u(g_187, func_16(l_1378.f5, l_1653)));
            }
            if (((-4L) ^ (l_1378.f6 != func_108((safe_mul_func_int8_t_s_s(g_620, ((0x67L ^ (((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(4294967288UL)), 0xD9L)) | (func_108(p_74, ((~(((safe_add_func_int32_t_s_s(l_1378.f2, (safe_unary_minus_func_uint16_t_u(p_75)))) && g_1361) > 65535UL)) ^ 0UL), g_24.f0, g_363[0][1][1], g_24.f5) != g_1662)) > g_11[6])) < 8UL))), g_414, g_24.f6, g_1460, g_602))))
            {
                const unsigned short l_1678 = 0x69CBL;
                int l_1697 = 0x821BB0ADL;
                char l_1720 = 0xE5L;
                int l_1729 = 0xDBC6E04BL;
                int l_1778 = 0x82FACC85L;
                int l_1800 = 0x8158D4F2L;
                if (func_79((~l_1663), (safe_div_func_uint8_t_u_u(func_117(g_24), (safe_mul_func_uint8_t_u_u(1UL, (1L || (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((g_470[5][2] >= g_952), (safe_rshift_func_uint8_t_u_s(((l_942 , (safe_mod_func_uint32_t_u_u(0UL, l_1678))) == 0xE2L), l_1679)))) <= g_1430), 0x9470FD31L)), (-1L)))))))), p_74, g_952, l_1680))
                {
                    return p_74;
                }
                else
                {
                    unsigned char l_1722[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1722[i] = 247UL;
                    for (g_24.f2 = 0; (g_24.f2 > (-18)); g_24.f2--)
                    {
                        g_802 = (safe_sub_func_int8_t_s_s((!(safe_rshift_func_int16_t_s_u(func_16(p_75, (g_353 , (p_74 || l_1577[0][8]))), ((safe_unary_minus_func_uint8_t_u((g_338 , (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(p_74, ((g_470[2][3] != ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_75, g_487[1][4][3])) , g_338), p_75)) > p_75)) , p_75))), l_1696))))) < 0x72E52FE8L)))), 0x12L));
                    }
                    l_1697 = p_75;
                    l_1722[5] = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_75, 7)), ((((p_75 < (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_470[7][4], (safe_mod_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(l_1490, (~l_78))) , g_13), (l_1720 , (((g_952 , 0xC6L) , p_74) , p_74)))), 65533UL)), 1)) > l_1720) ^ (-1L)) , g_865[1][0]) || l_1721[3]), 7)), g_1460)) != 246UL) & p_75), 0x06L)))), 1UL))) > g_24.f1) != g_670) ^ g_865[3][0]))) || 0x761E85A7L);
                }
                l_1615 = 0L;
                if (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((func_79(p_75, (safe_lshift_func_uint8_t_u_s(((~(g_24 , p_75)) != l_1680.f4), (func_119((l_1729 | g_620)) , (((safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(g_24.f7, 9L)) >= g_1285), g_661)) == 0xA3L) , l_1697)))), p_74, p_74, l_1680) && 0x8F24L), 3)), g_24.f7)) && g_1734))
                {
                    char l_1737 = (-1L);
                    int l_1764 = 0x7BF5E4BCL;
                    int l_1779 = 0xC4D08CD0L;
                    for (g_670 = 0; (g_670 > (-26)); --g_670)
                    {
                        g_802 = g_24.f0;
                        l_1441 = l_1737;
                        return p_74;
                    }
                    for (l_1615 = 0; (l_1615 >= (-8)); l_1615 = safe_sub_func_int32_t_s_s(l_1615, 8))
                    {
                        unsigned l_1755[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1755[i] = 0x706DE536L;
                        l_1441 = ((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((0x3EL < (safe_div_func_int32_t_s_s(((((l_1697 == (safe_mul_func_int8_t_s_s(func_117(l_1680), ((!p_74) || (func_16((safe_mod_func_int32_t_s_s((l_942.f6 | ((safe_unary_minus_func_int8_t_s(p_74)) < l_1755[0])), g_24.f7)), p_75) > g_24.f1))))) == g_1430) , 0x52L) > l_1729), g_470[8][4]))) || 0xADL), p_75)) , 0xC57883CCL), p_74)) > 0L), l_1663)) < 0x2C28464BL);
                        l_1697 = (g_1734 ^ ((func_92(p_75, l_1737) | l_1755[0]) , (safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_189[4], func_16(g_802, func_16(l_1378.f4, (safe_mul_func_int8_t_s_s(((l_1737 , g_1460) , 6L), (-1L))))))), l_1755[0]))));
                        g_670 = g_1430;
                        l_1764 = (safe_sub_func_uint8_t_u_u(l_1755[0], (p_75 == g_487[0][4][3])));
                    }
                    for (p_74 = 0; (p_74 == 24); p_74 = safe_add_func_uint32_t_u_u(p_74, 1))
                    {
                        struct S0 l_1769[7] = {{0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}, {0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}, {0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}, {0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}, {0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}, {0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}, {0xABBEL,0x6EA559EAL,0L,0L,-1L,4L,0L,6UL}};
                        int i;
                        l_78 = (g_187 , (safe_add_func_int8_t_s_s((1L && (0xB3L || p_75)), func_117(l_1769[2]))));
                        if (g_24.f5)
                            break;
                        if (l_1764)
                            continue;
                        l_1779 = (0UL && (((((g_215 == g_256) > l_1680.f5) , (safe_rshift_func_int16_t_s_s((((l_1769[2].f2 == (((l_1696 == ((func_117(g_24) && ((func_108((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_1778 == g_24.f2), p_75)), p_75)), g_865[2][0], p_75, g_24.f1, p_75) < l_1729) > 0L)) || l_1529)) & p_75) , 9L)) , g_236) ^ (-1L)), l_1697))) >= 0x0FL) != g_13));
                    }
                    l_1801 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_1779, p_74)), (l_942 , (1UL < ((safe_lshift_func_uint8_t_u_s(((l_1737 > func_79((safe_div_func_uint32_t_u_u(g_1734, ((safe_mod_func_int32_t_s_s((l_942.f7 >= (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(0xDFL, ((g_487[2][1][1] == l_1328) ^ 0xE1EE9AAEL))), g_865[1][0]))), l_1378.f4)) , l_1490))), l_1680.f2, g_189[3], p_75, l_1680)) , 0x7AL), l_1281)) | l_1378.f3))))), g_24.f1)) | l_1778) & p_75) < l_1679), g_24.f7)) & l_1800), 4294967295UL));
                }
                else
                {
                    short l_1818[8][6] = {{0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}, {0xE1FCL, 0xE1FCL, 0xF4C2L, 0xE1FCL, 0xE1FCL, 0xF4C2L}};
                    int i, j;
                    g_802 = g_865[2][0];
                    g_670 = (-5L);
                    for (g_353 = 0; (g_353 <= 3); g_353 += 1)
                    {
                        int i;
                        l_1697 = (func_16(l_1721[g_353], ((4294967295UL || 0x3D9C0323L) , ((-1L) < (l_1680.f5 | (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((~0x0E45F6ECL) < ((safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0L, ((((safe_mod_func_uint8_t_u_u(l_1678, p_75)) != p_75) > p_75) | p_75))), g_24.f6)), 255UL)), l_1816)) < l_1817)), 1UL)), p_75)))))) , l_1697);
                        l_1818[5][3] = l_942.f4;
                        g_802 = l_1678;
                        l_1801 = 0x8892B98CL;
                    }
                }
            }
            else
            {
                short l_1832 = 0xD693L;
                unsigned char l_1871 = 0x32L;
                int l_1894[3][6][3] = {{{0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}}, {{0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}}, {{0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}, {0xD6461B7CL, 0xE674C7C9L, 0x29146A13L}}};
                int l_1923 = (-1L);
                struct S0 l_1927 = {0xC7BDL,5L,0x3F9055B0L,0x48E1L,0L,2L,0x5BL,0xCF7D6F23L};
                int i, j, k;
                l_78 = g_865[0][0];
                for (g_1460 = 0; (g_1460 <= 0); g_1460 += 1)
                {
                    int l_1825 = (-1L);
                    unsigned short l_1876 = 0UL;
                    struct S0 l_1908 = {0xE46BL,0x3D99B012L,0x5C8784F8L,1L,0xD8FBL,0x88AAL,0x56L,4294967294UL};
                    if ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(func_79((safe_add_func_uint16_t_u_u(l_1825, (safe_lshift_func_uint8_t_u_u(p_74, 7)))), p_75, p_74, p_75, g_24), (safe_unary_minus_func_uint32_t_u(g_13)))), 0x40D80648L)))
                    {
                        struct S0 l_1829 = {0x6C69L,0xD06BA058L,-8L,0L,-1L,3L,0L,4294967295UL};
                        short l_1853[3][9][9] = {{{0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}}, {{0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}}, {{0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}, {0x0443L, 0L, 1L, 0x52E7L, (-1L), 0x487CL, (-8L), 0x9764L, (-10L)}}};
                        int i, j, k;
                        l_1801 = ((~g_414) , (l_1829 , (safe_add_func_uint16_t_u_u(l_1832, (safe_add_func_uint32_t_u_u((g_670 >= g_363[0][1][0]), 1UL))))));
                        l_78 = func_108(((safe_rshift_func_int16_t_s_s(((((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((p_75 ^ (l_1825 && l_1537)) | func_16(((safe_div_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((g_620 < (l_1680.f3 < (p_74 , (g_865[1][0] < ((p_74 && (safe_lshift_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((65528UL <= p_75), l_1853[2][8][2])) != g_186) < p_75), 10))) < p_75))))) , p_74), g_470[6][0])), p_74)) <= 0x229CL), p_74)) > g_187), p_74)), g_11[8])), l_1832)) != p_74), 0x55L)) ^ p_75) , g_865[2][0]) != l_1378.f6), l_1410)) <= g_24.f2), p_74, l_1832, p_74, p_75);
                        g_802 = (255UL > (((g_189[3] , (safe_add_func_uint16_t_u_u(0x72A3L, (((p_74 , 0L) && (g_470[7][4] & ((p_74 & p_74) && (safe_lshift_func_int16_t_s_s((g_186 != 0x9BL), 8))))) > l_1378.f0)))) & g_187) != l_1825));
                    }
                    else
                    {
                        int l_1862[10][7][3] = {{{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}, {{1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}, {1L, 0L, 1L}}};
                        int i, j, k;
                        g_802 = (((p_74 , (safe_mod_func_uint8_t_u_u(((l_1862[0][1][0] , ((safe_div_func_uint16_t_u_u((g_187 ^ (g_24.f6 <= ((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((func_16(p_75, ((l_1680.f7 == ((l_1825 && p_75) & ((!l_1871) , g_256))) , g_1734)) , l_1378.f0), 7)) < 1UL), g_24.f2)) || p_75), 0xBDL)) & l_1284))), 65531UL)) < p_75)) < l_1832), l_1272))) , g_487[0][4][3]) >= g_1285);
                        l_1801 = ((func_92(p_74, g_24.f4) > (safe_mul_func_int16_t_s_s(0L, func_16((safe_mul_func_uint16_t_u_u(l_1680.f4, 0xAD45L)), l_1871)))) != (l_1825 & p_75));
                    }
                    if (l_1825)
                    {
                        char l_1893 = 0L;
                        l_1876 = 0x09356585L;
                        l_1894[2][1][0] = (safe_lshift_func_uint8_t_u_s(0x10L, (0x6B28L <= ((!p_74) , (safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((func_16(((l_942.f0 || g_187) >= (safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((0xB6A9L == func_16(l_1876, p_74)) >= g_187), 0x58EAL)), 0xB8L))), p_74) == l_1876), (-1L))) == 4L), 0xE0L)), p_75)) > g_189[6]), l_1893)) , l_1653), g_952))))));
                    }
                    else
                    {
                        unsigned l_1907 = 8UL;
                        l_78 = (p_74 > (safe_mul_func_int8_t_s_s((func_79(((g_24.f2 >= func_108((((((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(5L, (g_24 , (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((((p_75 != (~((func_16(g_187, (p_74 ^ (((-1L) == (safe_mul_func_int8_t_s_s((+((0x527737D2L != (-1L)) & 0xB48AFED8L)), g_865[1][0]))) >= l_1907))) , (-1L)) == 0x62L))) <= g_470[7][4]) ^ g_47), 2)), 0))))), l_1679)) && g_661) ^ 0x9BBB3CE1L) | 0L) & l_1680.f7), p_74, l_942.f5, l_1871, g_1304)) & p_75), l_1907, g_865[2][0], g_470[7][4], l_1908) , (-10L)), p_75)));
                    }
                    for (g_952 = 0; (g_952 <= 0); g_952 += 1)
                    {
                        l_78 = (-6L);
                    }
                    for (l_1378.f2 = 0; (l_1378.f2 >= 0); l_1378.f2 -= 1)
                    {
                        int l_1930[1][10][3] = {{{0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}, {0x9BEB8472L, 0x10DA3370L, (-9L)}}};
                        int i, j, k;
                        l_1441 = (safe_div_func_uint8_t_u_u(func_117((g_865[(l_1378.f2 + 3)][l_1378.f2] , g_24)), (g_24.f4 | (l_1871 , (safe_add_func_int32_t_s_s((func_16(((((safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s(((g_24.f1 > (safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((-9L) ^ (safe_lshift_func_int8_t_s_u((p_75 >= 0xA459L), 6))), p_74)) && p_74), g_24.f7))) | p_74), l_1923)) != g_24.f7), p_75)) <= 0xBB2DL) > l_1894[0][1][1]) , 1L), l_99) , l_1577[0][3]), g_24.f6))))));
                        l_1825 = (((((g_24.f4 , (safe_mod_func_int32_t_s_s(((l_1832 || l_1871) && (p_74 >= l_1926)), ((func_117(l_1927) >= ((safe_mul_func_int16_t_s_s((p_74 | p_75), l_1930[0][5][2])) & 1UL)) , l_1923)))) < (-5L)) >= g_24.f0) , g_470[7][4]) , l_1680.f0);
                        g_670 = (func_119(p_74) , 0L);
                    }
                }
                for (l_1378.f4 = (-30); (l_1378.f4 >= (-27)); ++l_1378.f4)
                {
                    l_78 = (safe_mod_func_uint32_t_u_u((g_24.f5 || p_75), (safe_add_func_int32_t_s_s((0xDF873F70L >= ((safe_rshift_func_int8_t_s_s(g_644, 4)) ^ ((safe_add_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(g_952, l_1680.f0)) | (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_24.f4, ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((0xC681995FL || (p_74 & 0x1E0BL)), 0x1B9DL)), l_1926)) ^ 65532UL), g_602)) ^ 2UL))), l_1927.f1))), p_74)) , 249UL) >= g_487[0][4][3]), g_1304)) & p_75))), l_1927.f0))));
                }
                for (l_1378.f7 = 0; (l_1378.f7 <= 60); l_1378.f7++)
                {
                    short l_1973 = 1L;
                    const unsigned char l_1977 = 0x58L;
                    unsigned short l_2047 = 0xA352L;
                    if (((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_1721[3] , (safe_add_func_uint16_t_u_u(((g_24 , l_1378.f7) == ((((~g_952) == l_1680.f0) ^ p_75) != 0UL)), (safe_add_func_uint16_t_u_u((l_1973 , (((safe_div_func_uint8_t_u_u(func_16((l_1680.f5 , l_1927.f7), g_256), g_952)) != g_13) && 0x2DE1L)), l_1927.f4))))) && g_24.f5), p_75)), g_865[1][0])), l_1680.f7)), l_1976)) , 0x17L), l_1721[3])) > l_1977))
                    {
                        int l_1984 = 0xC852A92CL;
                        g_670 = (safe_lshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((!g_449), l_1984)), (safe_lshift_func_int8_t_s_s((0UL > (func_108(func_16(l_1987, l_1988), (safe_mod_func_uint16_t_u_u(((((0x05L != (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u((func_16(g_1460, (func_108((safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(0L, l_1973)), g_414)), p_75)), 65531UL)) , p_74) , p_75), g_24.f2)), l_1927.f4, p_75, g_189[3], g_449) , l_1927.f3)) , l_1894[1][5][2]), g_186)), 0)), p_75))) == l_1973) <= (-1L)) >= p_75), p_75)), l_1927.f5, g_189[3], l_2007) ^ g_661)), 0)))) != g_487[0][4][3]) , l_1973), g_24.f4));
                        g_670 = (safe_add_func_int8_t_s_s((-6L), (l_1923 , g_24.f6)));
                    }
                    else
                    {
                        return p_74;
                    }
                    l_1615 = func_92((func_79(((((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(4294967287UL, l_1927.f7)) >= (((safe_sub_func_uint8_t_u_u(p_74, (p_74 | p_75))) , (l_1871 , (safe_rshift_func_uint8_t_u_s(l_1977, 0)))) > ((((safe_add_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(func_79(l_1680.f3, (((((((!0xCDL) >= 0xDEL) , l_1801) , p_75) < l_1378.f5) <= l_1923) , g_802), g_11[6], p_75, l_942), p_75)) || l_1832), 4294967286UL)) , 0xADL) & g_24.f3) , p_74))), 3)) == 0x7DL) , 0UL) != p_75), l_2024, p_74, l_1927.f1, l_1680) & 0x41BF5628L), l_1801);
                    l_78 = 0xD59F39DDL;
                    for (l_1378.f0 = 0; (l_1378.f0 == 10); l_1378.f0 = safe_add_func_uint16_t_u_u(l_1378.f0, 3))
                    {
                        int l_2033[5][10] = {{0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L}, {0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L}, {0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L}, {0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L}, {0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L, 0x40688F0DL, 0x07C38A38L}};
                        int i, j;
                        l_1894[2][1][0] = ((safe_sub_func_uint32_t_u_u(g_1361, (safe_rshift_func_uint8_t_u_s(0x17L, g_24.f3)))) | (safe_mod_func_int16_t_s_s((g_215 && 0x3C92L), l_2033[1][5])));
                        l_1801 = (safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(func_92(g_470[1][0], (func_119((~func_79((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s(p_74, (safe_mod_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((l_1680.f3 || g_470[7][4]) > ((((g_215 || (((safe_rshift_func_uint16_t_u_s((l_1680.f2 >= (0x0573E17BL < p_75)), 8)) != 255UL) , l_2033[2][2])) , 1L) > p_75) || l_1894[2][1][0])), g_189[0])) & p_75) < l_1378.f6), (-10L))))))), g_236, l_1721[0], l_2047, g_24))) , p_75)), 3)) >= 0x05BEL), 0UL));
                        g_670 = g_189[5];
                    }
                }
            }
        }
    }
    return l_1272;
}







static int func_79(short p_80, unsigned p_81, unsigned p_82, unsigned char p_83, struct S0 p_84)
{
    unsigned l_947 = 0UL;
    short l_1086 = (-1L);
    int l_1157 = 0x6A22B8BDL;
    g_952 = (7L & (p_84.f2 , ((safe_mul_func_int16_t_s_s((((((((p_84.f6 >= (safe_sub_func_uint32_t_u_u(((p_84.f1 < (0xA216L && (func_92(l_947, (safe_add_func_int32_t_s_s(func_16((((p_84.f7 < (safe_div_func_int16_t_s_s(0x186AL, g_24.f6))) < 0x63ABL) , (-2L)), g_187), p_84.f5))) <= 0xF0L))) > l_947), l_947))) > l_947) <= p_83) || g_186) <= l_947) && l_947) != l_947), p_84.f5)) ^ l_947)));
    if (g_487[1][0][6])
    {
        int l_967[7][2];
        unsigned l_982 = 4294967291UL;
        const unsigned short l_1087[3][6] = {{1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL}, {1UL, 1UL, 1UL, 1UL, 1UL, 1UL}};
        unsigned short l_1107 = 0xAB97L;
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_967[i][j] = 0x17FB4E14L;
        }
        l_967[5][0] = (g_24.f5 , (!(+func_16((safe_lshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(p_84.f5, (l_947 < (g_236 >= (safe_div_func_uint8_t_u_u(l_947, (safe_lshift_func_uint16_t_u_u(l_947, 2)))))))) <= (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_661, 3)), ((((253UL && ((safe_sub_func_int32_t_s_s(g_189[7], 1L)) , 6UL)) >= 0x5C21F903L) >= (-1L)) <= g_487[0][5][0])))) , 0L), 7)), l_967[3][1]))));
        for (g_47 = 0; (g_47 > 6); g_47 = safe_add_func_int16_t_s_s(g_47, 2))
        {
            unsigned l_971[3][8][3] = {{{0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}}, {{0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}}, {{0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}, {0x6C4EA51EL, 0x11966971L, 0x275E06DAL}}};
            int i, j, k;
            for (g_802 = 8; (g_802 >= 2); g_802 -= 1)
            {
                int l_970[1][6][8] = {{{4L, 0L, (-7L), 0L, 4L, 0xA49B938FL, (-7L), 0xA49B938FL}, {4L, 0L, (-7L), 0L, 4L, 0xA49B938FL, (-7L), 0xA49B938FL}, {4L, 0L, (-7L), 0L, 4L, 0xA49B938FL, (-7L), 0xA49B938FL}, {4L, 0L, (-7L), 0L, 4L, 0xA49B938FL, (-7L), 0xA49B938FL}, {4L, 0L, (-7L), 0L, 4L, 0xA49B938FL, (-7L), 0xA49B938FL}, {4L, 0L, (-7L), 0L, 4L, 0xA49B938FL, (-7L), 0xA49B938FL}}};
                int i, j, k;
                l_970[0][4][0] = g_189[g_802];
                l_971[0][3][1] = 0x9BF32B6DL;
                for (p_81 = 0; (p_81 <= 1); p_81 += 1)
                {
                    int i, j;
                    for (p_84.f2 = 0; (p_84.f2 <= 1); p_84.f2 += 1)
                    {
                        int i, j, k;
                        l_967[p_84.f2][p_81] = (safe_rshift_func_uint8_t_u_u(l_967[(p_84.f2 + 1)][p_81], 0));
                        if (l_971[p_84.f2][p_84.f2][p_84.f2])
                            continue;
                        if (g_236)
                            continue;
                        if (l_967[4][1])
                            break;
                    }
                    for (g_620 = 0; (g_620 <= 8); g_620 += 1)
                    {
                        int i, j;
                        return l_967[(p_81 + 1)][p_81];
                    }
                    l_967[4][0] = ((((~(-1L)) > (safe_sub_func_int8_t_s_s((l_967[p_81][p_81] & (l_967[(p_81 + 3)][p_81] && (!(func_16(l_947, g_24.f7) > p_84.f3)))), (((safe_sub_func_uint8_t_u_u(p_84.f1, (!(safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(l_971[0][3][1], l_971[1][4][0])) , p_83), p_84.f2))))) & 6UL) >= l_982)))) > p_84.f2) && 0UL);
                }
                if (l_967[0][0])
                    break;
            }
            l_967[3][1] = l_971[1][1][0];
            g_802 = (l_947 ^ p_84.f5);
        }
        if (((func_16((safe_mod_func_uint16_t_u_u((((func_92(func_117(p_84), g_24.f3) , (safe_lshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((g_620 || (safe_sub_func_int16_t_s_s(0x5599L, (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_947, (0x3DL != (safe_lshift_func_uint16_t_u_s(l_947, p_83))))), p_81)) != 9UL) || p_82), 1))))) && 0xB783L), g_661)) == p_84.f0) | p_82), 6))) != g_470[7][4]) & l_982), g_470[2][1])), g_24.f0) , 0xD795A376L) , 0x17DBEBB8L))
        {
            int l_1003 = (-3L);
            int l_1026 = 9L;
            unsigned short l_1062 = 1UL;
            unsigned short l_1085 = 0x28AAL;
            g_670 = (((safe_add_func_int32_t_s_s(9L, 0xE80DA4FBL)) <= (g_24.f1 , (safe_mod_func_uint32_t_u_u(((g_24 , ((0x8FL > l_1003) ^ 0xB515B7ADL)) & g_24.f2), 1L)))) & g_11[5]);
            if (((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_80, func_16(p_84.f6, g_661))), (p_84.f2 ^ (safe_lshift_func_uint16_t_u_s(func_16(((p_82 > (0UL >= (((p_84.f0 && (safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(0xDAL, 0x58L)) >= g_186), (-10L)))) <= g_186) > l_947))) | p_84.f4), g_470[7][4]), g_602))))) >= l_947))
            {
                for (p_84.f7 = 0; (p_84.f7 >= 49); p_84.f7 = safe_add_func_int16_t_s_s(p_84.f7, 3))
                {
                    int l_1020 = 0xB2634635L;
                    for (p_84.f4 = (-23); (p_84.f4 == (-16)); p_84.f4++)
                    {
                        l_967[3][1] = p_83;
                        return p_84.f6;
                    }
                    g_802 = l_982;
                    g_670 = 5L;
                    l_1026 = (safe_add_func_uint8_t_u_u((l_1020 != (((safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((g_13 > (0xD0L ^ p_84.f1)) & (p_84.f5 , func_117(g_24))), g_256)), l_1003)))) , 0xE9E4CFECL) , p_81)), 0xF4L));
                }
                for (p_83 = 0; (p_83 == 2); ++p_83)
                {
                    l_967[3][1] = g_24.f3;
                }
                g_670 = g_13;
            }
            else
            {
                short l_1045 = 0x7434L;
                int l_1088 = (-1L);
                for (g_186 = 0; (g_186 <= 4); g_186 += 1)
                {
                    short l_1029 = 0x4662L;
                    g_670 = func_16(g_236, p_84.f6);
                    for (g_644 = 0; (g_644 <= 4); g_644 += 1)
                    {
                        l_1029 = 0x17D37C1BL;
                        g_802 = 5L;
                    }
                }
                if (g_602)
                {
                    g_802 = (g_363[0][0][2] != ((safe_div_func_uint16_t_u_u((+(safe_rshift_func_uint16_t_u_s(0xAD3EL, ((safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u(func_16(g_470[7][4], g_186), (g_11[6] && 0L))), 0)))), (((safe_mod_func_uint16_t_u_u(0x3AB1L, func_16(l_1045, g_189[6]))) , p_83) | 4294967295UL))), p_84.f3)) | l_982)))), 0x0466L)) || g_187));
                }
                else
                {
                    short l_1059 = 9L;
                    l_967[3][1] = 1L;
                    for (g_802 = 0; (g_802 == (-6)); g_802 = safe_sub_func_uint16_t_u_u(g_802, 8))
                    {
                        int l_1052 = 4L;
                        l_1052 = (((((+p_81) < ((safe_add_func_uint16_t_u_u(g_11[6], func_16((((safe_mul_func_uint16_t_u_u(l_1052, (-1L))) != (((safe_sub_func_uint8_t_u_u(((g_470[7][4] | func_16((safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((-6L), (g_47 < p_82))), 1)), (l_1003 <= l_1059))) != g_11[6]), 0xB3L)) > p_84.f0) == g_11[6])) | p_84.f2), p_84.f1))) <= p_84.f1)) & 1L) | g_802) ^ 0x1BL);
                        l_1052 = (safe_add_func_int32_t_s_s(l_1062, (((p_82 ^ (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(func_16((((safe_mod_func_uint32_t_u_u(((p_84.f0 >= (func_16(p_84.f5, ((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_24.f1, func_16(l_1059, (g_189[7] >= g_449)))), g_47)), p_84.f2)), l_1062)) | 0x56L)) != l_1003)) ^ g_338), l_1085)) >= l_1052) & p_84.f0), g_24.f3), l_1086)) & p_81), g_353)) || l_967[4][1]) || 0x2E1451E6L) , l_1087[1][4]), 251UL)), p_83)) > l_982), l_1003))) || l_1052) || (-9L))));
                    }
                    g_802 = l_1045;
                    l_1088 = g_24.f2;
                }
                for (p_82 = 0; (p_82 < 57); ++p_82)
                {
                    unsigned l_1108 = 0x8A1B79D4L;
                    l_967[3][1] = ((safe_add_func_uint8_t_u_u(p_84.f5, ((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0UL, g_487[0][4][1])), ((safe_add_func_int16_t_s_s(func_108(l_1085, (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_84.f0, (((safe_mul_func_uint8_t_u_u(func_16((1L || (safe_div_func_uint16_t_u_u(l_1087[1][4], func_108(((((func_108((l_982 <= (((l_1107 > 1UL) >= l_1062) | g_187)), l_947, l_1003, g_602, p_84.f7) || l_967[1][1]) ^ g_24.f7) & l_1085) , g_661), l_1108, g_952, p_83, g_47)))), p_84.f5), g_24.f1)) | g_449) , l_947))), 5)), g_24.f6, l_1108, p_82), g_187)) , 0x1F817CE9L))) < l_1087[1][4]))) && (-1L));
                    for (l_1003 = (-12); (l_1003 == (-11)); l_1003 = safe_add_func_uint8_t_u_u(l_1003, 9))
                    {
                        int l_1125 = 0xE51A7CC5L;
                        int l_1126[2][5][3] = {{{(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}}, {{(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}, {(-6L), 7L, (-5L)}}};
                        int i, j, k;
                        l_1026 = (((p_81 | (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((g_24.f7 && g_338) ^ (safe_lshift_func_uint16_t_u_s(p_84.f1, g_802))), g_187)), (4294967290UL ^ ((safe_add_func_uint32_t_u_u(p_82, (safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s((func_16(g_47, g_470[7][4]) <= l_1087[1][2]), 0x73L)), l_1125)))) , g_47)))) && l_1045) > g_24.f0)) && 65527UL) > l_1026);
                        l_1026 = func_16(l_1108, g_353);
                        l_1126[0][1][0] = p_84.f5;
                        l_967[3][1] = ((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_84.f1, 13)) < g_363[0][0][2]), 6)) | func_108((((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(7L, (safe_rshift_func_int16_t_s_u(p_84.f2, 3)))), p_84.f3)) != (((0x4BL > ((g_644 , (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(2UL, 5)), ((safe_mod_func_uint32_t_u_u(func_108((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((~p_81), g_236)), g_644)), g_11[3], p_82, g_24.f4, g_215), p_84.f1)) & g_24.f3)))) || 6L)) > p_81) | l_1045)) , p_80), g_24.f6, g_24.f2, p_83, l_947));
                    }
                    for (l_1107 = (-27); (l_1107 >= 7); l_1107 = safe_add_func_uint16_t_u_u(l_1107, 1))
                    {
                        g_802 = (safe_div_func_int8_t_s_s((p_84.f2 , ((func_16(p_84.f4, l_1086) , (safe_add_func_uint32_t_u_u((g_470[7][4] < g_47), p_84.f1))) != (p_82 >= (l_1086 < 0x0EC2AE6CL)))), p_84.f1));
                        l_967[3][1] = (-8L);
                        g_670 = (safe_lshift_func_uint16_t_u_s(p_84.f3, p_84.f2));
                        l_1026 = (((g_24.f7 , g_24) , p_84.f2) ^ ((safe_mul_func_uint8_t_u_u(((l_1108 > (g_487[0][5][5] , (l_1108 && l_1085))) != ((g_189[3] || (((g_11[3] , g_338) , g_189[8]) , l_1087[1][4])) > 1UL)), 0UL)) > l_1026));
                    }
                }
                return g_236;
            }
        }
        else
        {
            unsigned short l_1160 = 1UL;
            l_1157 = l_1086;
            g_670 = (((~p_83) && (((1L || (((safe_lshift_func_int8_t_s_u((65534UL && (p_80 > g_236)), 0)) && l_1160) < (g_449 < (safe_div_func_int8_t_s_s((+(g_470[0][2] && p_84.f2)), (-1L)))))) | p_84.f1) == p_84.f1)) , 0L);
        }
    }
    else
    {
        unsigned char l_1163 = 0xA4L;
        int l_1172 = 1L;
        for (g_24.f2 = 8; (g_24.f2 >= 0); g_24.f2 -= 1)
        {
            unsigned l_1184[9];
            char l_1185 = 0L;
            int l_1188[10] = {0x9AF1B2C9L, (-1L), 0x9AF1B2C9L, (-1L), 0x9AF1B2C9L, (-1L), 0x9AF1B2C9L, (-1L), 0x9AF1B2C9L, (-1L)};
            int i;
            for (i = 0; i < 9; i++)
                l_1184[i] = 0x3E5DE8A9L;
            l_1172 = (!func_16(((g_189[g_24.f2] <= (((6L && l_1163) , (safe_rshift_func_uint8_t_u_u(g_24.f7, ((~(((((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((func_108(g_189[g_24.f2], (((safe_sub_func_int8_t_s_s(func_16(p_81, p_84.f6), p_84.f5)) , g_236) > 1L), p_84.f7, g_189[g_24.f2], g_670) , g_47), g_24.f1)) , g_189[3]), 0x745AL)) >= g_952) , 2UL) <= p_83) > p_84.f4)) ^ p_84.f7)))) != g_24.f4)) , p_82), p_83));
            g_670 = (func_108(l_1086, ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((g_865[3][0] ^ p_80) && ((safe_rshift_func_int8_t_s_s((g_189[g_24.f2] >= p_84.f3), 5)) >= (((safe_mod_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_1184[0])), g_11[6])) & p_84.f0) | ((((!l_947) >= p_80) , 0xAEC10AEBL) >= g_802)) , (-1L)), p_84.f1)) >= l_1185) >= g_865[1][0]))), l_1172)), 5UL)) >= 0x2FL), g_24.f3, g_215, l_1163) , 0xA059ED9CL);
            l_1157 = func_108(l_1184[6], p_82, func_108((p_81 > (-1L)), (safe_rshift_func_int16_t_s_u((g_256 > l_1157), 3)), (p_84.f2 >= ((g_24 , g_24.f1) <= l_1184[0])), p_81, p_84.f3), g_24.f2, p_84.f1);
            for (g_661 = 0; (g_661 <= 0); g_661 += 1)
            {
                int l_1197 = 0x9C0E3651L;
                l_1188[3] = p_80;
                l_1197 = (g_256 | ((g_189[3] >= l_1157) ^ (((safe_sub_func_int32_t_s_s(0x59A02D08L, (p_83 && (safe_lshift_func_uint16_t_u_u(1UL, 6))))) > (p_84.f1 , (!(safe_div_func_uint8_t_u_u((((safe_div_func_int32_t_s_s(((p_83 || p_84.f4) > p_81), p_84.f4)) == (-1L)) ^ l_1184[0]), 255UL))))) , 246UL)));
                l_1157 = (safe_mod_func_uint16_t_u_u(l_1172, (safe_mod_func_uint32_t_u_u(l_1163, g_215))));
                return g_256;
            }
            for (l_1086 = 0; (l_1086 <= 0); l_1086 += 1)
            {
                g_802 = (((safe_lshift_func_int16_t_s_u(g_13, 11)) , p_84.f4) != (+g_11[6]));
                l_1188[3] = (safe_add_func_uint8_t_u_u(p_84.f1, ((safe_div_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_u(g_189[g_24.f2], 7)) < 1UL) , g_24) , 249UL), 0x0BL)) ^ (g_256 <= l_1157))));
            }
        }
    }
    return p_84.f4;
}







static char func_92(unsigned p_93, unsigned short p_94)
{
    unsigned l_102 = 4294967295UL;
    int l_105 = 0x9B4FE2E8L;
    unsigned l_902 = 0UL;
    char l_930 = 1L;
    unsigned l_939 = 4294967295UL;
    unsigned l_940 = 5UL;
    if (((safe_lshift_func_int8_t_s_u(0xDDL, 0)) && l_102))
    {
        unsigned l_903[10][8] = {{4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}, {4294967291UL, 0x3CB8B792L, 0xF3C51426L, 0x3CB8B792L, 4294967291UL, 0xA6E4B497L, 4294967291UL, 0x3CB8B792L}};
        int i, j;
        l_105 = (safe_mod_func_uint32_t_u_u(g_11[2], p_94));
        for (g_24.f4 = 0; (g_24.f4 > 4); ++g_24.f4)
        {
            unsigned l_116 = 0xB7399A04L;
            int l_924 = 1L;
            l_105 = func_108((((safe_mul_func_int16_t_s_s((g_24.f7 >= (0xA96CD894L && (-10L))), (0x1ECAL <= (g_24.f0 | (func_16(l_116, ((((func_117(((func_119((safe_mod_func_int8_t_s_s(g_24.f2, (l_105 | (((0xC3L && p_94) != g_24.f7) == 4UL))))) , p_93) , g_24)) <= l_105) , 1L) & 65535UL) >= l_902)) , l_902))))) || l_116) , g_449), g_24.f7, l_903[6][6], p_93, g_24.f7);
            l_924 = p_94;
            l_924 = (-4L);
            g_670 = p_94;
        }
    }
    else
    {
        struct S0 l_929 = {0xD14BL,0x59D00E7FL,-1L,0x7209L,-1L,-7L,-3L,4UL};
        int l_941 = (-1L);
        l_105 = func_117(func_119((g_24.f3 , ((g_11[3] ^ ((((l_105 > (+((p_93 ^ 65535UL) < (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_802, 0xC4EDC94FL)), (l_929 , l_929.f6)))))) < p_93) & p_94) < l_930)) && g_449))));
        g_670 = (-1L);
        l_941 = ((((safe_sub_func_int8_t_s_s((p_94 >= (safe_mod_func_int16_t_s_s((l_929.f0 < (((safe_mul_func_uint8_t_u_u((func_117(((l_939 < (p_94 , ((-1L) < l_929.f6))) , l_929)) , p_94), p_93)) && 0L) != l_939)), l_929.f6))), 9UL)) , l_940) <= p_94) ^ g_470[7][4]);
        g_670 = l_929.f2;
    }
    return l_105;
}







static int func_108(unsigned p_109, int p_110, unsigned char p_111, short p_112, short p_113)
{
    unsigned l_906 = 0xE4945BBEL;
    int l_913 = 0x01F5B619L;
    l_913 = (safe_rshift_func_uint16_t_u_u(g_487[2][4][4], ((p_110 , (((g_661 == l_906) >= (safe_lshift_func_int8_t_s_u((func_16(g_256, p_110) , 2L), (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((+func_16(p_109, g_602)), l_906)) & p_110), 6))))) < g_470[4][2])) || 0x17L)));
    l_913 = (((p_113 , ((safe_rshift_func_int16_t_s_u(p_109, (func_16(g_363[0][0][2], g_661) | (((p_111 == g_865[2][0]) <= (p_112 == (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((((p_109 > l_913) ^ 6L) , g_24.f4) , p_110), p_113)) < 0x3AEEL), p_112)), g_338)))) , g_602)))) || l_913)) > 0xD615L) < g_487[2][6][1]);
    g_802 = ((safe_mul_func_uint8_t_u_u(l_906, p_111)) >= g_470[7][4]);
    return g_189[8];
}







static unsigned char func_117(struct S0 p_118)
{
    short l_350[1][4][1];
    char l_351 = (-10L);
    unsigned l_354 = 0xC4E18AC2L;
    int l_357 = 5L;
    char l_360 = (-3L);
    int l_415 = 0x9D939C06L;
    unsigned char l_431 = 1UL;
    struct S0 l_448 = {0x14B8L,0x21330A68L,1L,9L,0xB92BL,0L,0L,0x89DAB85BL};
    const int l_580 = 0x89E09741L;
    const struct S0 l_653 = {65535UL,0x9474CA92L,-9L,-9L,0xF779L,0L,1L,0xC3D04E26L};
    unsigned l_728 = 4294967295UL;
    short l_774 = 1L;
    int l_781 = 0L;
    unsigned l_866 = 4294967295UL;
    unsigned char l_887 = 255UL;
    unsigned l_888 = 4294967286UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_350[i][j][k] = 0x79F2L;
        }
    }
    for (p_118.f7 = 16; (p_118.f7 != 38); p_118.f7 = safe_add_func_uint8_t_u_u(p_118.f7, 9))
    {
        short l_349 = 0x3AF3L;
        int l_352 = 1L;
        if (((((0x09AC6F9DL == (safe_mod_func_uint8_t_u_u((0x904EE0D9L ^ 1L), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((g_24.f6 < ((safe_sub_func_int16_t_s_s((l_349 | (g_338 | 255UL)), (0xB5L && ((l_350[0][3][0] | l_351) && g_189[7])))) , p_118.f3)) <= p_118.f6) > 0x27838CB5L), l_349)), g_13))))) & 0UL) & 0xF1E6L) , 0L))
        {
            l_352 = g_24.f4;
            return p_118.f5;
        }
        else
        {
            g_353 = 0x1F2AC803L;
        }
        return g_215;
    }
    if (((p_118.f0 & (l_354 > g_47)) <= func_16((+(g_24 , ((safe_mod_func_uint32_t_u_u(l_351, func_16((((func_16(((g_24.f6 , p_118.f6) > (((((l_357 <= (safe_sub_func_int32_t_s_s(((p_118.f5 > l_357) > g_215), g_24.f4))) > l_360) | 0x5C60L) == l_350[0][3][0]) , (-1L))), p_118.f2) | 0x8EL) , p_118.f5) && 0xCFL), p_118.f5))) , 0x9B49774DL))), g_24.f4)))
    {
        unsigned short l_374 = 0xB6C7L;
        int l_406 = 0L;
        short l_432 = 0xC333L;
        int l_445 = 7L;
        unsigned short l_455 = 0xCA9EL;
        unsigned short l_505 = 65535UL;
        unsigned l_513 = 4294967295UL;
        char l_551 = 2L;
        unsigned short l_719 = 65531UL;
        unsigned char l_836 = 0xEDL;
        for (g_186 = 0; (g_186 == 14); g_186++)
        {
            unsigned l_367[10] = {1UL, 0xABC1FAA2L, 1UL, 0xABC1FAA2L, 1UL, 0xABC1FAA2L, 1UL, 0xABC1FAA2L, 1UL, 0xABC1FAA2L};
            unsigned char l_394 = 0x5DL;
            int l_407 = 0x8B79AD7BL;
            unsigned short l_493 = 0x8860L;
            int l_641 = 0xDADE59E5L;
            const short l_729[3] = {8L, 8L, 8L};
            short l_848 = (-1L);
            struct S0 l_879 = {0UL,0x2C175959L,0x4B99D89BL,0xB753L,0x370DL,0xEDA3L,0L,0xF7746837L};
            int i;
            for (g_24.f2 = 0; (g_24.f2 <= 0); g_24.f2 += 1)
            {
                unsigned short l_366[4][7] = {{0xB96DL, 0x1C1BL, 1UL, 0xAFBEL, 0x205DL, 0xFC62L, 0x205DL}, {0xB96DL, 0x1C1BL, 1UL, 0xAFBEL, 0x205DL, 0xFC62L, 0x205DL}, {0xB96DL, 0x1C1BL, 1UL, 0xAFBEL, 0x205DL, 0xFC62L, 0x205DL}, {0xB96DL, 0x1C1BL, 1UL, 0xAFBEL, 0x205DL, 0xFC62L, 0x205DL}};
                unsigned short l_396 = 65535UL;
                int i, j;
                g_363[0][0][2] = g_24.f3;
                if ((((p_118.f2 , (((safe_add_func_uint8_t_u_u(g_189[5], (~((func_16(p_118.f7, l_366[2][6]) | ((l_367[4] < 4294967295UL) < (safe_add_func_int32_t_s_s((((safe_div_func_uint32_t_u_u(g_24.f3, (safe_add_func_uint8_t_u_u((l_367[1] <= (-8L)), 0x81L)))) | p_118.f6) > g_24.f3), p_118.f3)))) && p_118.f4)))) , p_118) , p_118.f2)) <= p_118.f0) ^ p_118.f3))
                {
                    char l_403[8] = {(-1L), 0xEAL, (-1L), 0xEAL, (-1L), 0xEAL, (-1L), 0xEAL};
                    int i;
                    if (l_351)
                    {
                        return g_353;
                    }
                    else
                    {
                        int l_375[4] = {(-1L), (-7L), (-1L), (-7L)};
                        int l_395[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_395[i] = 0x647F9239L;
                        if (l_374)
                            break;
                        l_375[2] = l_374;
                        l_395[0] = (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(func_16((safe_mul_func_uint8_t_u_u(l_374, (p_118.f1 > (l_375[2] != (g_24.f7 ^ (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_24.f5, 3)), g_24.f3))))))), (p_118.f0 | ((safe_div_func_int32_t_s_s(g_353, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_394 ^ 0x87L) == 0x72L), g_24.f0)), g_11[6])), g_215)))) | g_189[1]))), g_186)), 0x2C61L));
                        l_396 = l_366[2][6];
                    }
                    l_406 = ((p_118.f2 | ((safe_mul_func_int8_t_s_s(p_118.f6, (safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((l_403[5] != 1L), g_24.f3)) || func_16(g_189[0], l_396)), (safe_sub_func_uint16_t_u_u(((0x9BL | g_24.f4) | 0x80D3L), l_374)))))) != 4L)) == 0x623FL);
                }
                else
                {
                    for (p_118.f4 = 0; (p_118.f4 <= 0); p_118.f4 += 1)
                    {
                        int i, j, k;
                        l_407 = l_350[p_118.f4][(g_24.f2 + 2)][p_118.f4];
                        g_414 = func_16((g_24.f6 , 7L), (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(l_374, ((func_16(p_118.f6, ((safe_mul_func_int16_t_s_s(0x2A16L, g_338)) , p_118.f5)) > g_215) > l_350[p_118.f4][(g_24.f2 + 2)][p_118.f4]))), 1)));
                    }
                    l_415 = p_118.f7;
                }
            }
            l_406 = (g_24.f4 , (safe_rshift_func_int16_t_s_s((((l_415 >= func_16((func_119(g_47) , (safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(g_187)), (((func_16((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_118.f4, 12)), func_16(l_415, (safe_mod_func_int16_t_s_s((func_16((l_351 & (p_118.f3 < l_431)), g_11[6]) , l_406), 3L))))), p_118.f4) && l_432) <= (-3L)) || 0xF648EDCDL))), 6L)) <= 65533UL), g_24.f1))), p_118.f2)) , 0x9EC811DEL) <= g_363[0][0][2]), 10)));
            if ((safe_mul_func_uint8_t_u_u((7UL <= (safe_mod_func_int16_t_s_s(g_189[3], (0xF10CFA0EL | (p_118 , g_256))))), (((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((((safe_mul_func_uint16_t_u_u(p_118.f5, func_16(func_16((safe_lshift_func_uint8_t_u_s((func_16(p_118.f4, p_118.f5) , 0xA2L), l_445)), l_367[2]), g_414))) < p_118.f1) <= p_118.f6) != g_215) | 4294967289UL), 0x8E46L)) <= l_374), 7)) ^ p_118.f3) && p_118.f3))))
            {
                const unsigned short l_450 = 0UL;
                unsigned char l_456 = 253UL;
                int l_478 = 1L;
                l_406 = (-2L);
                for (l_415 = (-28); (l_415 >= 0); ++l_415)
                {
                    g_449 = (l_448 , p_118.f3);
                }
                if (((l_432 ^ (((func_16(((l_450 , ((l_394 >= ((-1L) & (((0xE3928269L == g_13) < ((safe_lshift_func_uint8_t_u_u(p_118.f7, 1)) > ((((safe_add_func_uint16_t_u_u(l_450, ((p_118.f1 != l_450) & p_118.f3))) | l_406) || p_118.f4) , p_118.f7))) != g_24.f6))) >= p_118.f3)) ^ g_47), p_118.f3) && l_455) || 0xBEL) || g_24.f2)) && l_445))
                {
                    unsigned l_469 = 9UL;
                    l_415 = (l_456 || (safe_add_func_int32_t_s_s(((((safe_mul_func_int8_t_s_s((l_367[4] < ((((l_448.f4 , (safe_mul_func_int8_t_s_s(l_450, 7L))) | 0xD01036D3L) > g_24.f0) > 255UL)), p_118.f2)) >= l_456) || g_236) || l_456), 1UL)));
                    for (l_445 = 21; (l_445 >= 29); l_445 = safe_add_func_uint32_t_u_u(l_445, 3))
                    {
                        const unsigned l_477 = 0xEABDCE52L;
                        l_478 = (((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(func_16(l_469, g_470[7][4]), 8)), ((p_118.f7 ^ ((safe_mod_func_uint32_t_u_u(((((0x12C4L > ((safe_rshift_func_uint16_t_u_s(g_189[5], ((g_24.f2 | (safe_rshift_func_int16_t_s_u(0xA3CEL, func_16(p_118.f6, g_11[6])))) == p_118.f7))) , g_215)) < 0x37L) <= l_477) >= g_11[6]), 1UL)) >= l_406)) || g_215))) <= p_118.f6) , l_357);
                        l_478 = (safe_lshift_func_uint8_t_u_u((((p_118.f4 == g_338) , (safe_add_func_int16_t_s_s(func_16(g_256, g_189[7]), (safe_lshift_func_int16_t_s_s(func_16(g_363[0][1][4], g_470[7][4]), 2))))) != (l_367[4] , (-1L))), 3));
                    }
                }
                else
                {
                    for (l_456 = 0; (l_456 > 34); l_456++)
                    {
                        g_487[0][4][3] = 2L;
                        return p_118.f3;
                    }
                }
            }
            else
            {
                short l_490 = 0xD7E5L;
                int l_494 = 7L;
                unsigned char l_506 = 0x7DL;
                l_494 = ((safe_mul_func_int8_t_s_s((func_119(l_455) , (~0x67L)), (((((l_490 , (p_118.f7 , (-3L))) > (safe_rshift_func_int16_t_s_u((g_13 , l_493), 13))) < l_448.f2) <= g_186) <= p_118.f0))) && 0xD649L);
                if ((((((safe_sub_func_uint32_t_u_u(0UL, 0x610DE107L)) & (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_11[1] , func_16(p_118.f6, ((safe_sub_func_int16_t_s_s(l_394, 1L)) , (((func_16((func_16(l_505, l_407) < 3UL), p_118.f7) >= g_189[3]) , 0x41L) < g_187)))), g_24.f0)), 0x92L)), g_11[6]))) ^ l_506) <= p_118.f1) | l_432))
                {
                    unsigned l_510 = 5UL;
                    for (g_414 = 14; (g_414 != 56); g_414++)
                    {
                        unsigned l_509[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_509[i] = 0x12200324L;
                        if (l_374)
                            break;
                        l_510 = (l_509[1] & g_11[7]);
                    }
                    l_406 = func_16(g_414, (safe_mul_func_int8_t_s_s(((l_513 == (l_445 && ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(0x3145L, (safe_sub_func_int8_t_s_s(1L, ((safe_sub_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_s((func_119(g_24.f7) , p_118.f2), func_16(g_13, g_256))) || l_350[0][0][0]) && l_494) || 0x5EL), 1UL)) , l_445))))), l_431)), p_118.f7)) == l_407))) == 0xF4C14B40L), p_118.f3)));
                    for (l_351 = 0; (l_351 <= 0); l_351 += 1)
                    {
                        int l_530 = 0x31285F1CL;
                        l_406 = func_16((l_505 == (func_16((p_118.f2 > p_118.f7), (safe_mul_func_uint16_t_u_u(((0x194C9D04L < (((safe_rshift_func_int16_t_s_s(func_16(g_24.f4, p_118.f7), 11)) & func_16(p_118.f0, (l_510 , 0xC9L))) < l_494)) != l_510), 0x7655L))) ^ 250UL)), g_24.f4);
                        if (l_530)
                            continue;
                    }
                }
                else
                {
                    struct S0 l_543 = {0x1ED3L,7L,3L,0xBB84L,0xBA05L,0xEA06L,-1L,9UL};
                    int l_548 = (-4L);
                    l_415 = ((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(func_16(p_118.f3, (l_432 , (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((0x9F8AEFEFL && (0UL && (safe_rshift_func_int16_t_s_s(((+(safe_lshift_func_int8_t_s_u((l_543 , func_16((((((func_16(p_118.f6, p_118.f2) && (((safe_div_func_int32_t_s_s(func_16((safe_sub_func_int32_t_s_s((-3L), g_353)), g_470[7][4]), l_494)) <= l_367[2]) > g_186)) <= p_118.f7) <= p_118.f1) > p_118.f6) == g_186), p_118.f3)), p_118.f2))) < (-2L)), l_543.f4)))) < g_189[3]), l_367[7])), l_445)))), l_548)), 5UL)) >= p_118.f6);
                    l_548 = 8L;
                }
                l_407 = (g_414 | 0xDEL);
                if ((safe_add_func_uint16_t_u_u(l_490, (l_551 == (safe_rshift_func_uint16_t_u_u((0x6299L && func_16(l_448.f7, (!(g_353 && (~((p_118.f4 >= (func_16(l_506, ((p_118.f7 >= (safe_lshift_func_int16_t_s_s((g_487[0][3][4] , p_118.f2), 7))) ^ l_407)) , 0xF6L)) ^ p_118.f2)))))), l_506))))))
                {
                    struct S0 l_560 = {0xB2FDL,0L,8L,-1L,-5L,0x9F0AL,0xFEL,0x0B213DE7L};
                    int l_581[4][5][6] = {{{(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}}, {{(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}}, {{(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}}, {{(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}, {(-3L), 0L, (-1L), 0xCA207B63L, 0xF37A099BL, 0xCA207B63L}}};
                    int i, j, k;
                    if (g_24.f4)
                    {
                        l_581[2][0][1] = (safe_lshift_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s((~(l_560 , (((+(safe_add_func_uint32_t_u_u(p_118.f5, (((safe_unary_minus_func_int16_t_s(0x0887L)) , g_24.f4) && p_118.f6)))) >= (safe_sub_func_int8_t_s_s(g_189[5], ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_118.f5, (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(g_11[6], func_16(l_490, p_118.f4))) , l_580) <= p_118.f7), g_363[0][0][2])) , p_118.f2), g_11[6])), l_513)))), g_353)), l_560.f2)) == p_118.f5)))) > 0x8EL))), g_24.f7)) < 0UL) == 0x10L) <= l_494) > p_118.f1), g_189[6]));
                    }
                    else
                    {
                        unsigned l_607[5] = {0x4832B7E7L, 0UL, 0x4832B7E7L, 0UL, 0x4832B7E7L};
                        int i;
                        l_406 = (safe_mul_func_uint8_t_u_u(((-10L) | (((!g_11[6]) < (p_118.f7 , ((safe_lshift_func_uint16_t_u_s(0UL, l_560.f7)) & (g_470[7][4] | (((((safe_add_func_uint32_t_u_u((func_119((safe_rshift_func_int8_t_s_s(func_16((safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((func_16((safe_add_func_uint8_t_u_u((p_118.f1 , (safe_rshift_func_uint16_t_u_s(l_455, (func_16(g_470[7][4], p_118.f6) < 0x42L)))), g_189[3])), g_487[0][0][6]) < 0UL), l_560.f7)), 3)), g_487[2][5][5]), p_118.f1))) , 4294967295UL), g_11[6])) > (-7L)) < g_24.f1) & 0xE4F518D2L) && p_118.f7))))) != g_470[7][4])), l_560.f4));
                        g_602 = ((safe_sub_func_uint16_t_u_u(1UL, 0L)) > g_11[1]);
                        l_407 = func_16(p_118.f5, ((safe_div_func_int8_t_s_s(1L, l_448.f0)) != (g_24 , (l_448.f2 == ((l_551 , ((~(+((safe_mod_func_int16_t_s_s(func_16((func_16(l_607[1], l_490) | l_351), l_581[2][0][1]), p_118.f4)) != g_487[0][4][3]))) <= l_493)) | p_118.f2)))));
                    }
                    g_620 = (safe_add_func_int8_t_s_s(p_118.f1, ((-1L) == func_16((g_363[0][0][2] == ((safe_sub_func_int8_t_s_s(p_118.f0, func_16(((safe_rshift_func_uint8_t_u_s((g_470[1][4] != g_414), (safe_sub_func_uint32_t_u_u((((((safe_rshift_func_uint16_t_u_s(g_363[0][0][2], 4)) >= (safe_lshift_func_uint8_t_u_u((((((func_16(p_118.f7, p_118.f2) && g_487[0][4][3]) <= l_513) , 0xE66AL) , l_374) <= l_506), l_394))) <= 0x6E0BCD76L) < 1L) , l_560.f7), p_118.f3)))) <= p_118.f0), l_406))) >= p_118.f3)), g_189[3]))));
                    if ((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_338, (safe_mul_func_int16_t_s_s(0x7805L, (func_16((safe_lshift_func_int16_t_s_u(g_24.f3, 15)), ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_487[1][0][2], g_602)), (safe_lshift_func_int16_t_s_s(((func_16(((safe_add_func_int32_t_s_s((-7L), func_16(g_187, (p_118.f3 | (0L < 5UL))))) , l_641), l_448.f2) , p_118.f0) | g_487[0][4][3]), 3)))) && g_487[2][3][6])) || g_24.f6))))), p_118.f7)) , p_118.f6) ^ p_118.f2), l_490)) ^ 254UL), 251UL)))
                    {
                        return p_118.f5;
                    }
                    else
                    {
                        g_644 = (g_338 == (safe_mul_func_uint8_t_u_u(l_560.f0, 0L)));
                    }
                }
                else
                {
                    l_494 = (l_505 , (safe_lshift_func_int8_t_s_u(((g_414 < 1L) || g_338), 1)));
                }
            }
            if ((~(safe_rshift_func_int8_t_s_s(((func_16((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((l_653 , (safe_lshift_func_int8_t_s_s(p_118.f0, (p_118.f7 || (l_448.f7 | l_448.f4))))), p_118.f0)) || (-1L)), (65531UL <= (((safe_unary_minus_func_uint8_t_u(func_16((safe_add_func_uint32_t_u_u(0x0A16BF02L, l_493)), p_118.f7))) || 0x3C60L) , 0x3096L)))), p_118.f4) >= g_24.f7) <= l_367[4]), l_551))))
            {
                unsigned short l_689 = 0x0950L;
                int l_690 = 0x7707E050L;
                g_661 = (safe_lshift_func_uint16_t_u_s((p_118.f2 || p_118.f5), 6));
                for (g_414 = (-10); (g_414 > 25); g_414 = safe_add_func_int32_t_s_s(g_414, 7))
                {
                    unsigned char l_680 = 4UL;
                    l_406 = l_505;
                    g_670 = (safe_div_func_int8_t_s_s((p_118.f4 , (g_24.f5 < ((safe_mod_func_uint16_t_u_u(g_487[1][3][6], ((1UL == ((~4294967290UL) <= func_16(((safe_mul_func_uint8_t_u_u(g_186, g_470[7][4])) == g_414), g_24.f1))) || l_350[0][3][0]))) && l_406))), 3L));
                    l_690 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_487[0][4][3], 4)), (func_16((((safe_add_func_uint8_t_u_u((g_487[2][4][2] | func_16(((safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint8_t_u_s(p_118.f6, l_680)) , (safe_sub_func_uint32_t_u_u(((func_16(((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0xDC65L, 0)), l_513)) , g_602) & (65535UL ^ (safe_add_func_uint16_t_u_u((l_689 >= l_653.f2), g_24.f7)))) | g_189[3]), g_363[0][1][7]) < g_620) ^ p_118.f4), l_394))) , l_689))) , g_187), g_24.f2)), 0UL)) , p_118.f6) >= 0x5F85L), l_680) , 1L)));
                    g_670 = ((g_24 , (safe_div_func_int32_t_s_s((-9L), g_449))) ^ (func_16(((g_47 || (safe_div_func_int8_t_s_s(l_351, (safe_lshift_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(g_47, 3)) == (safe_div_func_int16_t_s_s(((0x9BF6L > (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((+(safe_rshift_func_int16_t_s_s((p_118.f2 | (safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(0xB3L, 7)), l_690)), p_118.f4)) , l_719), l_680))), g_24.f4))), g_47)), g_24.f6)), g_13))) != g_236), 0xD3F3L))), g_24.f7)) , l_513) ^ g_24.f5) || g_449), 6))))) != p_118.f7), g_24.f0) | p_118.f6));
                }
                if ((((safe_mul_func_int8_t_s_s(9L, (((safe_lshift_func_uint8_t_u_u(l_367[4], 5)) & (safe_mod_func_int16_t_s_s(g_470[6][4], (g_602 ^ g_256)))) == l_445))) , func_16(l_653.f6, p_118.f7)) || g_363[0][1][0]))
                {
                    int l_730 = 0xF6D0957DL;
                    l_690 = func_16(((safe_lshift_func_int8_t_s_s(l_728, (((g_186 , ((p_118.f4 <= l_729[1]) <= (l_730 != (((safe_mul_func_uint8_t_u_u(((p_118.f1 != (safe_lshift_func_int8_t_s_u(g_24.f1, (g_187 < (safe_lshift_func_int8_t_s_u(p_118.f3, p_118.f1)))))) < 0xE16A8DDFL), p_118.f2)) > l_690) , p_118.f2)))) <= 0xF1L) >= p_118.f6))) , p_118.f7), p_118.f1);
                    if ((((safe_rshift_func_uint16_t_u_u(0UL, 5)) ^ ((g_11[3] <= (safe_sub_func_uint32_t_u_u(g_187, (1UL < (((p_118.f0 , g_620) < (((((safe_add_func_int32_t_s_s((0x10L <= (func_16(p_118.f6, (safe_add_func_int8_t_s_s(0xB3L, 0xCFL))) > 0xA6L)), l_689)) || l_730) & p_118.f7) ^ l_432) && l_407)) > g_363[0][0][2]))))) | 0xC191L)) != l_367[5]))
                    {
                        unsigned l_745 = 0xDB278476L;
                        unsigned char l_758 = 0UL;
                        l_745 = ((l_350[0][3][0] == ((g_24.f5 || (func_16(l_690, g_11[6]) , p_118.f1)) , p_118.f1)) > func_16(g_187, (p_118.f4 == 0xB88AL)));
                        l_406 = func_16(p_118.f6, (safe_add_func_int16_t_s_s(l_745, ((+(g_338 == p_118.f3)) == (safe_add_func_uint32_t_u_u(0xAFC579BEL, ((((safe_sub_func_int16_t_s_s(func_16(p_118.f4, ((safe_lshift_func_int16_t_s_u((1UL > (safe_mul_func_int8_t_s_s((((func_16(((safe_sub_func_int16_t_s_s(0x2BA0L, (((func_16(((-1L) || l_407), g_363[0][1][8]) && g_236) , 0x54E0L) ^ l_758))) || l_745), p_118.f6) == g_215) <= p_118.f1) <= l_730), l_653.f0))), g_353)) , (-1L))), 0xBB59L)) | 1L) || 0UL) > l_730)))))));
                    }
                    else
                    {
                        short l_759 = 0L;
                        int l_761 = 1L;
                        l_761 = ((~1UL) , (0UL ^ func_16(l_759, (safe_unary_minus_func_uint32_t_u(0UL)))));
                        g_670 = l_761;
                        return p_118.f6;
                    }
                }
                else
                {
                    unsigned short l_786 = 65535UL;
                    g_670 = ((safe_add_func_int8_t_s_s(p_118.f1, p_118.f7)) , func_16(g_661, (safe_sub_func_int32_t_s_s(0x972BDD62L, (safe_div_func_int32_t_s_s(((-8L) | ((safe_div_func_int8_t_s_s(p_118.f6, func_16(p_118.f0, (((safe_lshift_func_uint16_t_u_s((((func_16((((func_16((4294967295UL == (safe_mul_func_int16_t_s_s(g_24.f6, l_455))), l_774) >= l_690) ^ p_118.f6) || p_118.f0), g_470[6][4]) > 0x7F94F336L) != (-3L)) , 0UL), g_602)) == p_118.f5) , (-1L))))) == g_47)), 0xE54D4107L))))));
                    if (l_719)
                        break;
                    g_670 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((~func_16(((safe_mul_func_uint16_t_u_u(g_487[0][4][3], 0x51DAL)) && 1UL), ((0xD71BF60DL ^ l_781) ^ (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(func_16(p_118.f0, l_448.f4), g_363[0][1][8])), l_786))))), 0x5B1D82C5L)), 5));
                    l_415 = g_449;
                }
                if (l_445)
                    break;
            }
            else
            {
                int l_824 = 0x9EFCD8C7L;
                for (l_354 = 0; (l_354 != 35); l_354++)
                {
                    int l_809 = 0xA7FF3898L;
                    struct S0 l_829 = {0xDB30L,-1L,0x1E081DDCL,0x151BL,0x95AEL,-1L,2L,1UL};
                    for (l_448.f5 = 16; (l_448.f5 > 8); --l_448.f5)
                    {
                        unsigned l_793 = 0xAF7AFD2BL;
                        l_406 = g_11[5];
                        g_802 = (((safe_rshift_func_int16_t_s_s((+p_118.f1), (g_644 == l_793))) , (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((l_394 >= (p_118.f6 >= g_24.f2)) >= l_367[4]), g_802)), ((((+g_13) , 8UL) , g_602) , g_470[7][4]))), l_407)), g_602))) && p_118.f4);
                        g_670 = (p_118.f1 == g_24.f4);
                    }
                    if ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(func_16((((safe_div_func_int16_t_s_s(p_118.f0, l_513)) ^ l_809) < func_16(l_354, ((safe_rshift_func_uint16_t_u_u(func_16((p_118.f3 < g_363[0][0][2]), (func_16(((!(((g_24.f5 | g_189[3]) , func_16((+g_363[0][0][2]), l_394)) ^ 0x5781L)) || g_24.f6), p_118.f2) , l_809)), 5)) < p_118.f4))), g_47), l_513)), 5)))
                    {
                        unsigned char l_839 = 0x1CL;
                        l_406 = ((g_338 && g_470[7][4]) && (((func_16((((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(g_11[6], func_16((safe_mod_func_uint8_t_u_u((~(safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(l_824, 3)) <= (safe_mul_func_int16_t_s_s(func_16((safe_add_func_uint16_t_u_u((l_829 , p_118.f4), (safe_add_func_int32_t_s_s(func_16(func_16(((0x691F7C73L > ((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(l_836, (safe_mul_func_uint16_t_u_u(func_16(((func_16(p_118.f2, p_118.f6) >= 1L) && p_118.f7), g_353), p_118.f7)))) ^ g_644), 1L)) <= g_487[0][3][6])) == 0x66D9L), p_118.f1), g_47), p_118.f7)))), l_653.f3), g_186))), 0x5AD3L))), p_118.f2)), l_839))) | g_363[0][0][3]) , p_118.f1), 0xE1L)), g_670)) || 0xB7L) , g_11[6]), g_24.f5) , g_11[6]) , p_118.f0) , 0L));
                        g_802 = (func_119(((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((func_16((g_47 <= func_16(((l_839 == (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(p_118.f2, 12)) > p_118.f6), g_24.f3))) || (((l_848 >= ((safe_rshift_func_int16_t_s_u((p_118.f7 == (p_118.f3 ^ g_363[0][1][7])), g_24.f3)) > p_118.f6)) > g_24.f2) || p_118.f5)), l_839)), p_118.f7) || l_551), g_487[2][3][4])) , l_839), 0x54BDL)) >= g_449)) , 0x16CC4533L);
                        g_802 = (-8L);
                        g_865[2][0] = (safe_rshift_func_uint8_t_u_s(0xE3L, (safe_div_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_118.f6, g_414)), l_653.f1)) || ((((p_118.f5 > (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(g_670, (l_824 == l_350[0][3][0]))), (safe_rshift_func_int16_t_s_u(1L, 11))))) == 0xE12187E2L) ^ g_24.f1) ^ 0L)), g_644))));
                    }
                    else
                    {
                        l_866 = 0xE52BA5B1L;
                    }
                    l_415 = p_118.f6;
                    return g_256;
                }
                l_415 = 0x85827319L;
                if (((-1L) && p_118.f7))
                {
                    short l_867 = (-1L);
                    int l_880 = 0L;
                    l_824 = l_867;
                    if (g_24.f3)
                        break;
                    for (l_448.f0 = (-2); (l_448.f0 != 59); ++l_448.f0)
                    {
                        g_670 = g_187;
                        g_670 = 0x938FD534L;
                        l_407 = ((((safe_unary_minus_func_uint8_t_u(((0UL != g_24.f2) || (safe_mul_func_uint16_t_u_u((g_802 <= 0UL), l_824))))) <= ((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_118.f1, (p_118.f6 && (-1L)))), ((l_879 , g_11[5]) , g_11[4]))) != 9UL)) , p_118.f3) < 0UL);
                        l_880 = p_118.f4;
                    }
                }
                else
                {
                    if (l_448.f1)
                        break;
                }
                l_824 = g_24.f1;
            }
        }
        l_415 = p_118.f1;
    }
    else
    {
        char l_889[4] = {1L, (-1L), 1L, (-1L)};
        int i;
        l_415 = (-1L);
        g_802 = (((safe_div_func_uint32_t_u_u(g_363[0][0][3], p_118.f5)) == func_16((l_354 , ((safe_lshift_func_int8_t_s_u(l_887, 4)) < (p_118.f2 == (!1L)))), g_865[2][0])) <= (((((p_118.f0 , p_118.f0) , 8L) , l_448.f5) < l_888) == l_889[3]));
        l_415 = (1L && ((safe_add_func_uint8_t_u_u((0xA4C8850EL < g_865[2][0]), l_350[0][3][0])) <= ((!g_189[3]) || (safe_mod_func_uint8_t_u_u((l_781 & func_16((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_118.f4, 0x406D80EBL)), (safe_mod_func_uint32_t_u_u(((~((safe_lshift_func_uint8_t_u_u(func_16(p_118.f5, g_865[2][0]), 5)) < (-4L))) != l_889[3]), l_888)))), p_118.f3)), g_363[0][0][2])))));
    }
    l_415 = l_351;
    return g_470[7][1];
}







static struct S0 func_119(const unsigned p_120)
{
    char l_137 = 0xE5L;
    int l_140 = (-8L);
    unsigned l_141 = 4294967295UL;
    int l_145 = 0x797DE492L;
    unsigned short l_257 = 0x026DL;
    if ((((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((!((safe_lshift_func_uint8_t_u_u(func_16((p_120 , 0x6939548CL), (((((safe_lshift_func_uint8_t_u_s(p_120, 4)) ^ (0x4E121556L || ((g_24.f2 != l_137) , 4294967289UL))) || (safe_div_func_int16_t_s_s((((l_137 , (((func_16(g_24.f1, p_120) || 0L) , p_120) != g_13)) , 0x8C07L) <= p_120), 6L))) & l_137) , l_137)), 6)) || g_24.f6)) != l_137) != p_120) , g_24.f4), g_11[4])), l_137)) | p_120), g_11[6])) && l_140) < 0xFA8D4CD4L), l_137)), l_141)) != l_141) | 0L))
    {
        unsigned short l_144 = 0x16D0L;
        int l_303 = 0x13390D8EL;
        char l_330[2];
        int i;
        for (i = 0; i < 2; i++)
            l_330[i] = 0x53L;
        l_144 = (safe_div_func_uint32_t_u_u(4294967295UL, 0xD2223408L));
        l_145 = ((p_120 | 0x64C2DCCAL) , g_24.f3);
        for (l_137 = (-12); (l_137 == 16); ++l_137)
        {
            unsigned l_158 = 0x4DA6B924L;
            struct S0 l_188 = {1UL,0x805CD855L,1L,0x4827L,5L,0xE877L,0x51L,9UL};
            unsigned short l_194 = 0x7ADDL;
            int l_214 = 7L;
            int l_235 = 0x45770A46L;
            unsigned char l_329 = 250UL;
            for (l_141 = 0; (l_141 >= 34); l_141++)
            {
                unsigned l_161[10][3] = {{1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}, {1UL, 1UL, 2UL}};
                int l_162[8] = {(-1L), 0x0102AA92L, (-1L), 0x0102AA92L, (-1L), 0x0102AA92L, (-1L), 0x0102AA92L};
                int i, j;
                l_162[1] = (g_24.f0 && (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((g_24.f3 , (p_120 != p_120)) && ((((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(p_120, func_16(l_137, l_158))), (safe_mod_func_uint32_t_u_u(((~((g_11[6] < g_24.f3) < 1L)) | p_120), 4294967295UL)))) <= 1L) , p_120) | 0UL)), l_161[7][0])), l_161[7][0])));
            }
            for (l_140 = 0; (l_140 == (-8)); --l_140)
            {
                unsigned l_185 = 0x754CE760L;
                for (g_47 = 0; (g_47 != 37); g_47++)
                {
                    unsigned char l_184 = 248UL;
                    if ((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(0xC5L, p_120)), 7)))
                    {
                        struct S0 l_173 = {65534UL,0xC3254B49L,-1L,0xABA5L,0x8469L,-5L,0x64L,4294967295UL};
                        g_187 = func_16((((safe_mul_func_uint16_t_u_u(p_120, g_24.f0)) >= ((((l_173 , (safe_rshift_func_uint8_t_u_s(l_173.f7, (g_24.f0 ^ (l_140 == (safe_add_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(l_158, ((func_16(l_158, (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(func_16(g_13, g_24.f0), 3)), g_13))) && 0x10F1C41FL) ^ l_158))) < 0x7D6C4115L), l_140))))))) , l_184) >= l_185) , p_120)) || l_173.f0), g_186);
                        if (l_158)
                            continue;
                        return l_188;
                    }
                    else
                    {
                        l_145 = func_16(g_186, p_120);
                        g_189[3] = g_11[4];
                    }
                }
                if ((g_187 || (((safe_sub_func_int32_t_s_s((0xC7L < (safe_mod_func_int32_t_s_s(l_194, 0x72E6D70EL))), (g_24.f0 , (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((0xFDL <= (func_16(((safe_lshift_func_uint8_t_u_u(0xC0L, 0)) , (p_120 , l_185)), l_144) == g_24.f7)), (-9L))) > 0x501070E8L), 3)), 0UL))))) != 0xFB4F793AL) && 0xAC59717FL)))
                {
                    unsigned l_213 = 4294967294UL;
                    l_214 = ((((((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s((l_144 != ((func_16((safe_lshift_func_uint8_t_u_u(((func_16((safe_mod_func_uint32_t_u_u((g_189[3] & p_120), g_47)), g_24.f5) ^ 0xB55CL) < 0xC6AFL), (func_16(p_120, p_120) , 0x65L))), g_13) , g_24.f1) >= 0L)), g_189[1])) > 0x1EL) | p_120), p_120)), p_120)) & g_11[6]) ^ 0x0325L) & g_24.f5) || l_213) | l_185);
                }
                else
                {
                    unsigned char l_228 = 0x0BL;
                    int l_258 = 9L;
                    struct S0 l_299 = {0xB22BL,0xE36AF4DDL,0xB9C65498L,0x03D3L,4L,0x746CL,-1L,1UL};
                    g_215 = l_188.f5;
                    if ((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((g_24 , p_120) , ((((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((((l_145 == (((252UL && ((safe_add_func_uint32_t_u_u((g_11[6] ^ p_120), (((func_16(l_228, l_188.f6) , 0x993C0D73L) , g_13) , 0L))) & 0x862F89DFL)) < 0x0CL) < g_24.f6)) | 1UL) , p_120) <= 4L), l_228)), l_144)), 0x6BL)) != g_24.f4) < 0x81F1L) , g_11[6])), 0L)), g_11[6])))
                    {
                        const char l_237[2][5][4] = {{{8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}}, {{8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}, {8L, 0xA9L, (-9L), 0x90L}}};
                        int i, j, k;
                        g_236 = ((safe_mod_func_uint32_t_u_u((0xE5E5L == p_120), (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(func_16(l_145, p_120), p_120)), 1)))) > (((g_24.f6 > ((l_137 || (((-5L) <= p_120) , g_24.f3)) || l_235)) , (-4L)) != 0x7AF7L));
                        l_258 = (l_144 <= (((l_237[0][3][0] , p_120) | g_11[5]) <= (safe_add_func_uint8_t_u_u(func_16((+((func_16(((safe_lshift_func_uint16_t_u_s(p_120, ((safe_lshift_func_uint8_t_u_u(p_120, (safe_rshift_func_int8_t_s_u((((safe_div_func_uint16_t_u_u(func_16(l_228, (((((safe_rshift_func_uint8_t_u_u(((l_145 && (safe_div_func_int8_t_s_s((!(safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(g_236, l_237[0][3][0])) >= l_141), 0xA48319FEL))), g_11[6]))) ^ p_120), g_256)) && g_11[0]) == p_120) , l_257) , l_137)), l_137)) , l_185) == 4294967295UL), g_256)))) && l_237[0][3][0]))) != l_237[0][3][0]), p_120) < l_145) & 1UL)), l_185), p_120))));
                    }
                    else
                    {
                        int l_302 = (-6L);
                        l_214 = ((func_16(g_47, (safe_rshift_func_uint8_t_u_u((p_120 != (safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((func_16(l_144, p_120) <= 0x1B163B82L) , 250UL), (safe_mod_func_int16_t_s_s(l_144, (safe_lshift_func_uint8_t_u_u((((((safe_div_func_uint16_t_u_u((g_24.f5 <= g_24.f1), g_24.f0)) , p_120) ^ 65535UL) < l_228) && p_120), l_145)))))) ^ p_120), g_256)), 0xC78AL))), g_236))) & g_13) > g_24.f5);
                        l_258 = ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((-2L) && 1L), (safe_mod_func_uint16_t_u_u(((func_16((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((-3L), (safe_sub_func_int16_t_s_s(l_185, (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(l_185, g_24.f6)) , func_16(l_144, p_120)), 7)), 0xA42AL)))))) ^ 0xA9B1L), 0x23L)), g_24.f4) && 0xE6L) , p_120), g_186)))) && (-1L)), l_144)), p_120)), 0xB462L)) < g_189[4]);
                        l_214 = func_16((safe_div_func_int16_t_s_s(func_16((l_258 , (safe_add_func_uint8_t_u_u((0UL != (l_299 , 1L)), (func_16((safe_mul_func_uint16_t_u_u(l_185, 0x3FD8L)), l_302) ^ (func_16(p_120, g_187) == g_24.f0))))), p_120), 7L)), l_144);
                    }
                }
                l_303 = l_144;
                l_303 = (((l_144 & (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(g_189[3], (safe_mod_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(g_13, (func_16(l_144, p_120) >= ((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((func_16((g_189[3] > (safe_div_func_int8_t_s_s((l_329 | (-9L)), g_24.f5))), p_120) , l_330[0]), g_24.f3)), 0UL)))) < 4294967295UL) || l_137), 0x6275L)) < g_24.f5), 0x7AL)) > g_13)))), p_120)), 0x0C9878B3L)) == p_120), l_185)) && p_120) || g_24.f4) == 0x1631DF23L), l_144)))), p_120))) , 0L) < l_188.f6);
            }
            return g_24;
        }
    }
    else
    {
        char l_331 = 8L;
        l_331 = (-1L);
    }
    g_338 = func_16(p_120, (func_16(l_140, (((((g_24.f7 ^ (g_24 , p_120)) >= (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-4L), (g_24.f2 ^ (safe_mul_func_uint16_t_u_u(g_11[6], (func_16(g_236, g_24.f0) >= l_137)))))), g_24.f6))) , l_141) > p_120) | 0xAFL)) , p_120));
    return g_24;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_24.f1, "g_24.f1", print_hash_value);
    transparent_crc(g_24.f2, "g_24.f2", print_hash_value);
    transparent_crc(g_24.f3, "g_24.f3", print_hash_value);
    transparent_crc(g_24.f4, "g_24.f4", print_hash_value);
    transparent_crc(g_24.f5, "g_24.f5", print_hash_value);
    transparent_crc(g_24.f6, "g_24.f6", print_hash_value);
    transparent_crc(g_24.f7, "g_24.f7", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_363[i][j][k], "g_363[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_470[i][j], "g_470[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_487[i][j][k], "g_487[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_865[i][j], "g_865[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_1285, "g_1285", print_hash_value);
    transparent_crc(g_1304, "g_1304", print_hash_value);
    transparent_crc(g_1361, "g_1361", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    transparent_crc(g_1460, "g_1460", print_hash_value);
    transparent_crc(g_1662, "g_1662", print_hash_value);
    transparent_crc(g_1734, "g_1734", print_hash_value);
    transparent_crc(g_2058, "g_2058", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
