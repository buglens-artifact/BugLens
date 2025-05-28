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



static int g_8[6] = {0xCCE1E2C0L,0xCCE1E2C0L,0xCCE1E2C0L,0xCCE1E2C0L,0xCCE1E2C0L,0xCCE1E2C0L};
static unsigned g_100 = 0x0BD880D9L;
static unsigned char g_101 = 8UL;
static int g_105[8][4][2] = {{{(-8L),1L},{0xD8942C1FL,0xE239CA81L},{1L,1L},{(-8L),1L}},{{1L,0xE239CA81L},{0xD8942C1FL,1L},{(-8L),0xD8942C1FL},{1L,0xE239CA81L}},{{1L,0xD8942C1FL},{(-8L),1L},{0xD8942C1FL,0xE239CA81L},{1L,1L}},{{(-8L),1L},{1L,0xE239CA81L},{0xD8942C1FL,1L},{(-8L),0xD8942C1FL}},{{1L,0xE239CA81L},{1L,0xD8942C1FL},{(-8L),1L},{0xD8942C1FL,0xE239CA81L}},{{0xE239CA81L,0xE239CA81L},{0x02582781L,0xE239CA81L},{0xE239CA81L,(-2L)},{0xFB14099FL,(-8L)}},{{0x02582781L,0xFB14099FL},{(-8L),(-2L)},{(-8L),0xFB14099FL},{0x02582781L,(-8L)}},{{0xFB14099FL,(-2L)},{0xE239CA81L,0xE239CA81L},{0x02582781L,0xE239CA81L},{0xE239CA81L,(-2L)}}};
static unsigned g_159 = 0xCE30238DL;
static unsigned char g_191[2][10] = {{0UL,1UL,1UL,1UL,0UL,1UL,0x5CL,0x5CL,1UL,0UL},{0UL,0x6CL,0x6CL,0UL,0x2EL,0x7DL,0UL,0x7DL,0x2EL,0UL}};
static int g_198 = (-1L);
static unsigned short g_215 = 0xA8BCL;
static int g_238 = 7L;
static unsigned short g_239 = 0xE586L;
static short g_241 = 0xAFEBL;
static short g_274[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
static short g_290[10][10] = {{0xAB58L,0xA917L,0x8BF6L,0xB513L,0x2B8AL,(-1L),0x2B8AL,0xB513L,0x8BF6L,0xA917L},{0xF403L,0L,0x8BF6L,0x2B8AL,0x427AL,0xB513L,0xA2C7L,0xA2C7L,0xB513L,0x427AL},{0x73C4L,0xF403L,0xF403L,0x73C4L,3L,0xB513L,0xAB58L,0x8BF6L,0x427AL,0x8BF6L},{0xF403L,(-1L),(-5L),0x8BF6L,(-5L),(-1L),0xF403L,0xAB58L,0x427AL,0L},{0xAB58L,0xF403L,0xAB58L,0x427AL,0L,0L,0x427AL,0xAB58L,0xF403L,(-1L)},{0xA917L,0xF403L,0x8BF6L,0xA2C7L,(-5L),0x73C4L,0L,0x73C4L,(-5L),0xA2C7L},{0xA2C7L,0x2B8AL,0xA2C7L,0xF403L,(-5L),0xB513L,(-1L),3L,3L,(-1L)},{(-5L),0L,0xB513L,0xB513L,0L,(-5L),0xA917L,3L,0x427AL,0x73C4L},{0x2B8AL,0x73C4L,0xA2C7L,0xAB58L,3L,0xAB58L,0xA2C7L,0x73C4L,0x2B8AL,(-5L)},{0x2B8AL,0xB513L,0x8BF6L,0xA917L,0xAB58L,(-5L),(-5L),0xAB58L,0xA917L,0x8BF6L}};
static unsigned char g_340 = 0xE1L;
static unsigned g_381 = 8UL;
static short g_403 = 0xDC31L;
static unsigned short g_480 = 1UL;
static short g_513 = 0xDD01L;
static unsigned short g_547 = 0x8DECL;
static char g_554 = (-1L);
static unsigned g_565 = 1UL;
static unsigned char g_590 = 252UL;
static unsigned g_935[1][3][7] = {{{4294967290UL,0x0ACE951FL,3UL,3UL,0x0ACE951FL,4294967290UL,0x0ACE951FL},{1UL,0xF193FE52L,0xF193FE52L,1UL,0xB0971FE7L,1UL,0xF193FE52L},{0x35DB54AFL,0x35DB54AFL,4294967290UL,3UL,4294967290UL,0x35DB54AFL,0x35DB54AFL}}};
static int g_1093 = 0xD8F62BBCL;
static unsigned short g_1232[1] = {0xC288L};
static unsigned g_1258 = 0UL;
static char g_1406 = (-1L);
static char g_1424 = 0xC3L;
static char g_1520 = 1L;
static unsigned g_1527 = 4294967295UL;
static short g_1634 = 0xEBDDL;
static short g_1766 = (-3L);
static int g_1848 = 1L;
static int g_1919 = 0xC3DAB80FL;
static short g_1937[6] = {0x5B46L,0xE61DL,0x5B46L,0x5B46L,0xE61DL,0x5B46L};
static int g_1950 = 0L;
static unsigned short g_2058 = 0x6E6CL;
static unsigned g_2101 = 0x6A3E59DEL;
static int g_2177[9] = {0x324A015DL,8L,0x324A015DL,0x324A015DL,8L,0x324A015DL,0x324A015DL,8L,0x324A015DL};
static int g_2276 = 7L;
static unsigned g_2303[5] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL};
static unsigned g_2328 = 0xDB0DB019L;
static char g_2402 = 0xE1L;
static short g_2610 = 0xA088L;
static char g_2742 = (-1L);
static char g_2751[3] = {0x7EL,0x7EL,0x7EL};
static short g_2818 = (-1L);
static unsigned g_2827 = 4294967286UL;
static char g_2856 = (-9L);
static char g_2986[7][8] = {{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL},{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL},{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL},{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL},{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL},{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL},{0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL,0x5EL}};



static int func_1(void);
static int func_3(int p_4, unsigned p_5, unsigned p_6, unsigned p_7);
static unsigned func_12(char p_13);
static int func_15(short p_16, unsigned p_17, unsigned char p_18, unsigned short p_19);
static int func_24(int p_25);
static char func_28(unsigned p_29, int p_30, unsigned short p_31);
static unsigned char func_39(int p_40, short p_41, int p_42, unsigned p_43, unsigned short p_44);
static short func_45(unsigned char p_46, unsigned short p_47, char p_48, unsigned short p_49, unsigned short p_50);
static unsigned short func_63(int p_64, short p_65, char p_66, int p_67, unsigned p_68);
static unsigned short func_71(unsigned p_72, int p_73);
static int func_1(void)
{
    unsigned l_2 = 4294967291UL;
    int l_2782 = 0L;
    char l_2800[10] = {(-6L),(-6L),0x66L,(-6L),(-6L),0x66L,(-6L),(-6L),0x66L,(-6L)};
    unsigned l_2812 = 4294967295UL;
    int l_2876 = 1L;
    unsigned l_2905 = 0UL;
    int l_2987 = 0x4CB03ED4L;
    unsigned char l_3037[6] = {0x17L,0x17L,0x17L,0x17L,0x17L,0x17L};
    unsigned l_3070[4][6][9] = {{{0x6B9E0CDCL,1UL,1UL,1UL,1UL,0x6B9E0CDCL,0xBABB2D71L,0x117AE68CL,4294967295UL},{0xFDF325F3L,0xF6B19C9DL,1UL,0xE0697DE5L,0x2D02CCC2L,4UL,0x8FB16135L,0UL,0x17CCAEBBL},{4294967295UL,0xBC095B8EL,4294967292UL,4294967295UL,0x02072335L,0xF103191EL,0x6C9B00F3L,6UL,0x3B5FB93EL},{0xF6FEA2F7L,0UL,0xF0D16203L,0xD1E2D050L,4294967295UL,0x7D3A6776L,4294967286UL,0xFDF325F3L,8UL},{4294967295UL,0xBABB2D71L,4294967290UL,1UL,1UL,0x02072335L,1UL,1UL,4294967290UL},{3UL,3UL,4294967295UL,0x6010A2E0L,0x9D5A18F3L,0UL,0xFDF325F3L,1UL,8UL}},{{1UL,0x02072335L,4294967293UL,0x117AE68CL,0xE1AD203FL,0x21E59598L,4294967295UL,4294967295UL,0xAA6BB1ACL},{3UL,0x6DA102EDL,4294967295UL,0UL,0UL,0x17CCAEBBL,0UL,9UL,3UL},{2UL,4294967295UL,4294967290UL,0x261D0B0DL,1UL,4294967286UL,0xF103191EL,4294967295UL,4294967295UL},{0x6010A2E0L,1UL,0xF0D16203L,0x8FB16135L,0xF0D16203L,1UL,0x6010A2E0L,4294967295UL,0x1B86CFF6L},{4294967295UL,4294967288UL,4294967292UL,4294967293UL,4294967295UL,4294967291UL,1UL,0xF103191EL,0x261D0B0DL},{0x7D3A6776L,4UL,0x38016782L,0UL,8UL,0x6010A2E0L,1UL,4294967295UL,0xFBDC8BF4L}},{{0xCA0B9FCDL,0x6B9E0CDCL,1UL,1UL,1UL,0x23730888L,0x261D0B0DL,4294967291UL,0xBC095B8EL},{9UL,0xFBDC8BF4L,0xF6FEA2F7L,8UL,0x1B86CFF6L,0UL,0UL,0x1B86CFF6L,8UL},{4294967291UL,1UL,4294967291UL,0x660FC034L,0x02072335L,0x964795EDL,0xBABB2D71L,2UL,0x261D0B0DL},{0xF0D16203L,0x6010A2E0L,4UL,0x6D0D217EL,1UL,0x30870752L,0xF6B19C9DL,0UL,4294967286UL},{4294967295UL,0xAA6BB1ACL,0x21E59598L,0x660FC034L,0x3B5FB93EL,0x3CAD8554L,0xCA0B9FCDL,0UL,0x964795EDL},{0UL,9UL,1UL,8UL,0x30870752L,0xE0697DE5L,3UL,4294967295UL,1UL}},{{4294967292UL,4294967288UL,4294967295UL,1UL,1UL,4294967295UL,4294967288UL,4294967292UL,4294967293UL},{3UL,0xA4602179L,4294967295UL,0UL,1UL,0xFBDC8BF4L,0x9D5A18F3L,6UL,0x7D3A6776L},{4294967295UL,2UL,0x23730888L,0x117AE68CL,1UL,4294967295UL,0x3CAD8554L,4294967286UL,4294967293UL},{0x6DA102EDL,0x7D3A6776L,8UL,0xE0697DE5L,1UL,0xD1E2D050L,8UL,0UL,1UL},{0xE1AD203FL,0xBC095B8EL,1UL,0x0180479AL,0x964795EDL,1UL,4294967292UL,1UL,0xAA6BB1ACL},{8UL,0UL,0UL,8UL,0xFDF325F3L,4294967286UL,0x7D3A6776L,4294967295UL,0xD1E2D050L}}};
    short l_3073[2];
    int l_3080[9] = {0x935083D1L,1L,0x935083D1L,1L,0x935083D1L,1L,0x935083D1L,1L,0x935083D1L};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_3073[i] = 0L;
    if (l_2)
    {
        char l_9 = 0x64L;
        int l_2842 = 0xDE95A862L;
        char l_2857 = 0L;
        unsigned l_2870[2][7][4] = {{{6UL,1UL,0xEBA48171L,0UL},{0xDBDEA83DL,1UL,1UL,0xDBDEA83DL},{1UL,0xDBDEA83DL,6UL,0x4EA2A629L},{1UL,6UL,1UL,0xEBA48171L},{0xDBDEA83DL,0x4EA2A629L,0xEBA48171L,0xEBA48171L},{6UL,6UL,0UL,0x4EA2A629L},{0x4EA2A629L,0xDBDEA83DL,0UL,0xDBDEA83DL}},{{6UL,1UL,0xEBA48171L,0UL},{0xDBDEA83DL,1UL,1UL,0xDBDEA83DL},{1UL,0xDBDEA83DL,6UL,0x4EA2A629L},{1UL,6UL,1UL,0xEBA48171L},{0xDBDEA83DL,0x4EA2A629L,0xEBA48171L,0xEBA48171L},{6UL,6UL,0UL,0x4EA2A629L},{0x4EA2A629L,0xDBDEA83DL,0UL,0xDBDEA83DL}}};
        unsigned short l_2898 = 0x9116L;
        char l_2998 = 0x1EL;
        char l_3016 = 0xCBL;
        char l_3039[2];
        unsigned char l_3047[5][3] = {{0x5BL,0x5BL,0xB3L},{0x66L,0x66L,1UL},{0x5BL,0x5BL,0xB3L},{0x66L,0x66L,1UL},{0x5BL,0x5BL,0xB3L}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3039[i] = 0x72L;
        g_2177[1] = func_3(g_8[3], g_8[3], l_9, l_9);
        for (g_2402 = 0; (g_2402 > (-15)); g_2402 = safe_sub_func_int8_t_s_s(g_2402, 9))
        {
            short l_2789 = 0xFCCFL;
            int l_2819 = 0x997ADCAFL;
            unsigned l_2828[2];
            int l_2869 = 0xD0C68C70L;
            int i;
            for (i = 0; i < 2; i++)
                l_2828[i] = 4294967295UL;
            l_2782 = (safe_lshift_func_uint8_t_u_s((g_1258 || 0x7295L), 7));
            if ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((l_2782 = l_9), (l_9 & (safe_sub_func_uint16_t_u_u(l_2789, func_28(g_8[3], g_105[4][0][1], l_2789)))))), g_1520)))
            {
                if (l_2789)
                    break;
                g_1848 = (g_238 = g_1424);
                if (g_1093)
                    continue;
            }
            else
            {
                unsigned l_2792 = 0xB549FED5L;
                int l_2793[8][1][7] = {{{1L,1L,3L,0xD5E08CE2L,0x16C9CC5FL,0xD5E08CE2L,1L}},{{1L,0L,(-1L),0x379293E9L,(-1L),0L,1L}},{{(-1L),0x7CF1A457L,(-1L),0xE8CD77E0L,0xE1657FB8L,0L,(-1L)}},{{1L,0x7CF1A457L,1L,0x379293E9L,0xE1657FB8L,0xD5E08CE2L,1L}},{{1L,0L,(-1L),0x379293E9L,(-1L),0L,1L}},{{(-1L),0x7CF1A457L,(-1L),0xE8CD77E0L,0xE1657FB8L,0L,(-1L)}},{{1L,0x7CF1A457L,1L,0x379293E9L,0xE1657FB8L,0xD5E08CE2L,1L}},{{1L,0L,(-1L),0x379293E9L,(-1L),0L,1L}}};
                int i, j, k;
                if ((l_2789 || (safe_rshift_func_uint8_t_u_s((l_2793[5][0][1] = l_2792), 6))))
                {
                    for (g_1258 = 0; (g_1258 <= 9); g_1258 += 1)
                    {
                        int i;
                        g_238 = g_274[g_1258];
                        g_1093 = (1L > g_381);
                    }
                    l_2800[3] = (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_2782, 0xF4L)), (((safe_lshift_func_uint8_t_u_u(l_9, l_2782)) & 6UL) <= g_290[2][0])));
                }
                else
                {
                    unsigned l_2815 = 4294967291UL;
                    int l_2820 = 0xB98692F7L;
                    for (g_1406 = 0; (g_1406 >= (-13)); g_1406 = safe_sub_func_int16_t_s_s(g_1406, 1))
                    {
                        short l_2805 = 0x1D27L;
                        l_2805 = ((safe_mod_func_int8_t_s_s(l_9, l_2800[4])) || (~l_2800[3]));
                        g_1848 = l_9;
                        l_2815 = func_28((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_935[0][2][6], (g_2058 = l_2800[3]))) < l_2812), (g_1232[0] = (((g_215 > 3UL) || (0xFAB5L == (safe_sub_func_int32_t_s_s((((g_2101 = (l_2789 > (l_2793[5][0][1] && (((-1L) == 0x8101EF9CL) != l_2)))) < 0L) & g_2751[1]), 0x7F7BB3F6L)))) < 0x05L)))) >= g_8[3]), 0)), l_2805, l_2789);
                    }
                    if (g_513)
                        break;
                    for (g_513 = 14; (g_513 <= 5); g_513 = safe_sub_func_int32_t_s_s(g_513, 1))
                    {
                        l_2820 = (l_2819 = g_2818);
                    }
                }
                for (g_2101 = 0; (g_2101 != 53); g_2101 = safe_add_func_int16_t_s_s(g_2101, 8))
                {
                    l_2782 = (((safe_add_func_uint8_t_u_u(g_480, 1L)) <= (l_2792 > g_1950)) & ((safe_mul_func_int16_t_s_s(l_2, (((l_2789 <= g_290[8][1]) ^ g_2827) & l_2828[0]))) | 0x7CL));
                }
                return g_1093;
            }
            if (g_2303[4])
                continue;
            if ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(((((g_274[6] = (safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((0x36L | (l_2782 = g_191[0][8])), l_2800[1])) <= (g_100 ^ 0L)), g_2328))) <= (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint8_t_u_u((g_340 = (safe_sub_func_int32_t_s_s((g_105[7][1][0] = (0xABBEL > l_9)), (((l_2842 = l_2789) & 1UL) > g_2402)))), 0xC2L)) || g_1919) ^ g_2303[1]), l_2789))) > g_1424) && 8UL))), g_1258)))
            {
                unsigned char l_2853 = 0xB6L;
                g_8[1] = ((((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(func_71(g_1634, (l_2842 = (+0x2E8F47D9L))), (l_9 || ((((l_2828[0] != ((safe_lshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_2812, (g_547 <= (l_2853 < (safe_lshift_func_int8_t_s_s((65530UL ^ 65534UL), 4)))))), l_2853)) <= 0x483A88FDL), 0)) > g_8[5])) <= 1L) & l_9) != g_2177[6])))) > l_2789), 1L)) != g_2856) && l_2857) & (-1L));
                for (g_2827 = 0; (g_2827 <= 2); g_2827 += 1)
                {
                    int i;
                    return g_274[(g_2827 + 5)];
                }
                return g_1406;
            }
            else
            {
                int l_2873 = 0x1CA70F6CL;
                for (g_2856 = 0; (g_2856 <= 0); g_2856 += 1)
                {
                    unsigned char l_2868 = 0UL;
                    int l_2891 = 3L;
                    int l_2922 = 0L;
                    for (g_2101 = 0; (g_2101 <= 0); g_2101 += 1)
                    {
                        int i;
                        g_2177[5] = ((g_1848 = (g_8[(g_2856 + 4)] = ((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((~func_71((g_8[(g_2101 + 4)] & func_63(g_2751[(g_2101 + 1)], ((((safe_mul_func_int16_t_s_s(func_39(g_1232[g_2101], l_2828[0], (safe_mul_func_int16_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_u((g_2856 < l_2868), g_2610)) <= (l_9 != l_2842)))), l_2869, g_381), g_2177[5])) > g_1919) && g_340) && 0x191B5690L), g_1937[0], l_2870[1][0][0], g_2303[4])), g_8[(g_2101 + 4)])), l_9)), g_2751[(g_2101 + 1)])) > l_2857))) && l_2868);
                        l_2873 = func_71(((l_2873 >= (g_1232[0] != l_2842)) == (((l_2869 = ((safe_mul_func_uint8_t_u_u((l_2876 = ((-1L) | 0x361682E6L)), (g_2742 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(7UL, 14)), ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_2891 = (safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((0x9C31L | g_513), (safe_rshift_func_uint16_t_u_u(0xB883L, 10)))), g_2751[1]))), g_2101)), g_159)) != g_238)))))) > l_2812)) >= 0x3BF7L) ^ 0xD9CE7F4BL)), g_2827);
                        if (g_1232[g_2101])
                            continue;
                        l_2819 = func_39(g_2058, g_2751[(g_2101 + 1)], (!(!(safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(8L, l_2898)), g_547)) ^ (g_2276 <= (5UL & ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s(g_513, (func_63(func_63(g_215, l_2870[1][0][0], g_1232[g_2101], l_2905, g_1919), g_101, g_8[(g_2856 + 4)], g_1258, g_274[7]) & 0xBB8DE72FL))) & g_8[(g_2856 + 4)]), l_2800[3])) && l_2870[1][0][0]), 7L)) || g_1634)))) & l_9), 6)))), g_565, g_1406);
                    }
                    for (l_2876 = 0; (l_2876 <= 5); l_2876 += 1)
                    {
                        int i;
                        g_8[l_2876] = (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0xD8L == (l_2869 = (g_8[(g_2856 + 2)] >= (0x8CB0L < (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(func_24(((g_2751[2] = 0xCBL) == ((g_105[7][1][0] & (0xB8L > ((safe_add_func_int16_t_s_s(0x3947L, (g_1937[5] > (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_2868, l_2828[0])), g_105[0][1][0]))))) == l_2873))) >= 0L))), l_2922)) && g_2177[5]), 255UL)) ^ 0L), g_8[3])))))), 11)), l_9));
                        if (g_2177[5])
                            break;
                    }
                }
                for (g_2856 = 17; (g_2856 != 25); g_2856++)
                {
                    l_2842 = 0L;
                    g_238 = 0xF811F13EL;
                }
            }
        }
        for (g_1848 = (-30); (g_1848 <= 22); g_1848 = safe_add_func_uint16_t_u_u(g_1848, 2))
        {
            unsigned l_2950 = 4294967295UL;
            int l_2965 = 0xC24BC64DL;
            short l_2974 = (-3L);
            int l_2997 = 3L;
            for (g_2058 = (-3); (g_2058 != 3); g_2058 = safe_add_func_int8_t_s_s(g_2058, 1))
            {
                char l_2958 = 1L;
                for (g_238 = 9; (g_238 >= 0); g_238 -= 1)
                {
                    short l_2951 = 0L;
                    int i;
                    for (l_2876 = 0; (l_2876 >= 0); l_2876 -= 1)
                    {
                        int i, j, k;
                        l_2782 = (safe_mul_func_uint8_t_u_u((+(0xB8AFD391L && (safe_mul_func_uint16_t_u_u((g_105[(l_2876 + 2)][(l_2876 + 3)][l_2876] & (safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(0xB0E2667CL, (7UL || ((((safe_add_func_int32_t_s_s((l_2800[(l_2876 + 7)] || (safe_rshift_func_uint8_t_u_u(g_290[g_238][(l_2876 + 4)], 0))), (g_8[(l_2876 + 2)] = (((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((((safe_lshift_func_uint8_t_u_u(g_935[0][0][1], 2)) & g_105[(l_2876 + 2)][(l_2876 + 3)][l_2876]) > (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((0x4871L & g_2101), g_2818)), g_2818))) < g_105[5][2][0]))), g_1919)) | g_381) != 0x468DL)))) >= 0x6A14L) >= g_2058) ^ g_274[5])))) >= g_215), 8))), (-10L))))), 0L));
                        if (l_2950)
                            continue;
                        return l_2951;
                    }
                    return l_2800[g_238];
                }
                g_2177[5] = (((safe_sub_func_uint32_t_u_u(0x809F092FL, l_2950)) < g_2402) != (+(0xAE3E55E6L & (g_1527 != (safe_mul_func_int16_t_s_s((~((l_2782 = (safe_mul_func_int16_t_s_s(l_2958, (g_1766 >= g_1950)))) & (safe_rshift_func_uint8_t_u_s((0L ^ l_2898), l_2870[1][4][3])))), (-2L)))))));
            }
            if (((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(func_71((l_2950 > g_1520), ((l_2965 = l_2870[0][4][0]) | (safe_sub_func_int32_t_s_s((0x040AL && (-2L)), ((safe_rshift_func_int16_t_s_s((((4294967289UL && ((safe_add_func_uint32_t_u_u(2UL, g_2058)) | ((g_274[9] = (g_2751[1] & g_241)) != l_9))) == l_2950) <= 0x240D87D5L), l_2842)) > g_8[5]))))), 1UL)), 0x2E4A64B0L)) > l_2870[1][5][2]))
            {
                short l_2984 = 0x6006L;
                int l_2985 = 1L;
                for (g_2276 = 14; (g_2276 <= (-18)); g_2276--)
                {
                    char l_2975[10][4][6] = {{{0x4DL,0x9AL,0x38L,(-10L),(-1L),(-10L)},{(-1L),0x17L,(-1L),0x8DL,(-6L),(-2L)},{0x79L,0x61L,1L,0x38L,(-2L),0x0DL},{0x32L,9L,0xF0L,0x38L,0xC7L,0x8DL}},{{0x79L,(-1L),0L,0x8DL,0xF0L,0xE5L},{(-1L),7L,0x45L,(-10L),4L,0xD2L},{0x4DL,(-6L),0x32L,0L,0x46L,0x46L},{0x25L,0x07L,0x07L,0x79L,0xD2L,4L}},{{0x47L,(-10L),0x19L,(-2L),0x61L,(-1L)},{0x99L,0x79L,1L,0x9AL,0x61L,0L},{(-9L),(-10L),0L,0x32L,0xD2L,0x45L},{0x46L,(-7L),0xBEL,0x25L,(-9L),(-2L)}},{{0L,0x47L,0xDDL,(-9L),0L,(-7L)},{(-2L),0xD0L,0x45L,0xD0L,(-2L),0x79L},{7L,0xF0L,0x25L,(-10L),0x99L,0xC7L},{4L,0x32L,9L,0xF0L,0x38L,0xC7L}},{{0x17L,0xE5L,0x25L,9L,0x47L,0x79L},{0x38L,0x61L,0x45L,0x17L,0xF0L,(-7L)},{(-6L),0L,0xDDL,0xC7L,0x0BL,(-2L)},{0x45L,0x19L,0xBEL,0xBEL,0x19L,0x45L}},{{9L,(-2L),0L,0x61L,0x46L,0L},{0xE5L,(-9L),1L,0x19L,0xC7L,(-1L)},{0xE5L,0x0DL,0x19L,0x61L,(-6L),4L},{9L,0x46L,0x19L,0x25L,0x79L,0x45L}},{{(-1L),0xF0L,0x0BL,0x99L,0xBEL,0x32L},{0x47L,0x07L,0xF0L,0x61L,0xF0L,0x07L},{4L,0x25L,0x47L,0x32L,0x9AL,(-7L)},{0x61L,1L,0x38L,(-2L),0x0DL,0L}},{{0L,1L,0x99L,0xDDL,0x9AL,4L},{0xD0L,0x25L,(-2L),(-10L),0xF0L,0x4DL},{0x38L,0x07L,0L,0x45L,0xBEL,(-10L)},{1L,0xF0L,(-9L),0x79L,0x79L,(-9L)}},{{(-9L),(-9L),0xD2L,0x0DL,0x47L,0xBEL},{0x45L,0x0BL,0x61L,0L,0x99L,0xD2L},{0x17L,0x45L,0x61L,0x38L,(-9L),0xBEL},{7L,0x38L,0xD2L,0x9AL,0x46L,(-9L)}},{{0x9AL,0x46L,(-9L),9L,0L,(-10L)},{0x25L,0xD2L,0L,0x4DL,(-2L),0x4DL},{(-2L),0xE5L,(-2L),(-7L),7L,4L},{0L,0x07L,0x17L,(-6L),0L,1L}}};
                    int i, j, k;
                    l_2987 = ((((l_2782 = ((((g_2818 <= (!(-2L))) && func_39(l_2974, g_2818, l_2975[6][2][3], l_2898, (~(func_45(g_2177[5], (safe_rshift_func_int16_t_s_u(0L, (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(func_39((safe_add_func_uint32_t_u_u(((l_2984 = (func_71(((l_2975[6][2][3] > l_2905) || g_1093), g_340) >= l_2950)) | g_8[2]), l_2985)), l_2985, l_2985, l_2782, g_1634), g_1634)), g_8[3])))), g_2986[1][1], g_2177[4], g_2303[2]) || g_1937[0])))) | 0x52003131L) >= l_2950)) || g_2303[2]) < 0xA6L) || 65535UL);
                }
                return g_381;
            }
            else
            {
                int l_2992 = 4L;
                int l_3009 = 3L;
                g_2177[4] = (((safe_lshift_func_int8_t_s_s(l_2987, g_2402)) >= ((((safe_lshift_func_int16_t_s_s(l_2992, 8)) <= l_2974) >= l_2974) <= l_2870[1][0][0])) >= func_71(l_2842, g_2827));
                l_2987 = func_45(l_2857, l_2992, (l_2842 = 0x65L), l_2987, func_45(g_191[0][6], ((l_2950 & (l_2997 = (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(0L, (g_2101 < l_2992))), l_2992)))) | g_2402), l_2998, l_2870[1][0][0], g_159));
                if (g_554)
                    break;
                g_1093 = (g_2856 != ((-1L) && ((l_2965 = (safe_mod_func_int8_t_s_s(l_2974, (safe_lshift_func_int16_t_s_u(((l_2992 = (safe_sub_func_uint8_t_u_u(g_403, l_2992))) | (252UL | (safe_mul_func_int8_t_s_s((safe_add_func_int32_t_s_s(func_63((l_2987 = l_2876), func_63((g_8[4] = l_2870[1][6][2]), g_2101, l_9, l_3009, g_2303[2]), g_191[1][9], g_1232[0], g_554), g_274[1])), l_2898)))), l_3009))))) <= 0x7607L)));
            }
        }
        if (((safe_rshift_func_uint16_t_u_u(4UL, 4)) == ((g_1232[0] = 65527UL) == (safe_sub_func_uint32_t_u_u((g_1919 ^ l_2998), l_2)))))
        {
            unsigned short l_3044[8][5][6] = {{{65527UL,7UL,3UL,1UL,0xAD59L,0x6143L},{0x72D5L,1UL,0x0743L,1UL,0x4243L,0x6C08L},{65527UL,0x3C63L,0xFCD9L,0x6C08L,65526UL,0UL},{0UL,6UL,0x3C63L,0x556CL,65535UL,0x89F5L},{0xDC7DL,0x7DDAL,65535UL,0x72D5L,0x3C63L,0UL}},{{65535UL,1UL,8UL,0x10EEL,0x4A76L,0xF104L},{0x48C4L,1UL,0x0743L,65535UL,0xA27FL,65532UL},{65535UL,0x4A76L,2UL,3UL,0x796FL,65535UL},{3UL,0x72D5L,0x18B5L,65533UL,65535UL,0x556CL},{0x396AL,0x7DDAL,1UL,0x06D6L,0x1C9EL,65535UL}},{{65526UL,0x7131L,0x06D6L,0x696BL,3UL,65527UL},{0x4A76L,65535UL,0UL,2UL,0x4243L,0xAD59L},{65535UL,0x39DEL,1UL,0x3C63L,65535UL,65535UL},{4UL,0x1C9EL,0x1C9EL,4UL,0x0F11L,65535UL},{0x666AL,0xFDC9L,0xDC7DL,0x72D5L,6UL,65535UL}},{{65526UL,65535UL,65526UL,65533UL,65526UL,65526UL},{1UL,0x2523L,0x89F5L,0xF9DEL,8UL,65527UL},{65535UL,0x24A8L,0xAD8BL,0UL,1UL,1UL},{0xAD59L,0x7131L,7UL,0x18B5L,65535UL,0x1C9EL},{0x72D5L,0xDDC0L,0xD560L,7UL,0x6143L,8UL}},{{0xFDC9L,65533UL,1UL,65533UL,0x24A8L,0x57A3L},{0x516FL,0xFCD9L,0x9401L,0x666AL,0xDDC0L,1UL},{1UL,65535UL,5UL,0xF104L,0xA27FL,65535UL},{0x6C08L,0x828CL,7UL,0x72D5L,2UL,0x39DEL},{0x3C63L,3UL,65532UL,0x6143L,0x828CL,0x3C63L}},{{0xA27FL,65535UL,1UL,0xDC7DL,1UL,65526UL},{0x6143L,0xFCD9L,0x396AL,4UL,1UL,0UL},{0x0F11L,65526UL,4UL,65526UL,0x0F11L,65535UL},{8UL,1UL,0x24A8L,65532UL,65535UL,0x4A76L},{0x3C63L,0x696BL,0x18B5L,1UL,0x796FL,0x4A76L}},{{65535UL,0x4243L,0x24A8L,0xFE33L,7UL,65535UL},{0xFE33L,7UL,65535UL,0xC176L,65527UL,0x396AL},{0x72D5L,65533UL,0x4243L,5UL,0x3C63L,0xD560L},{0UL,0x556CL,0xAD8BL,0x2D96L,1UL,0x696BL},{0UL,0x828CL,65535UL,0x396AL,0xFE33L,0xFCD9L}},{{0x48C4L,0xD560L,3UL,0xC8DFL,0x396AL,0x4A76L},{0xDC7DL,65526UL,1UL,1UL,0UL,0xAD8BL},{65532UL,65535UL,65533UL,5UL,8UL,0x39DEL},{0xDDC0L,0xAD8BL,0xDC7DL,0x10EEL,65526UL,0UL},{0x0743L,0x516FL,8UL,0x666AL,0xF9DEL,0x2D96L}}};
            int i, j, k;
            for (l_2857 = 0; (l_2857 <= 2); l_2857 += 1)
            {
                unsigned short l_3036 = 4UL;
                int l_3038 = (-2L);
                for (g_590 = 0; (g_590 <= 2); g_590 += 1)
                {
                    unsigned l_3034[9] = {4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL};
                    int i;
                    if ((0x80L != 0xABL))
                    {
                        int i;
                        return g_2751[g_590];
                    }
                    else
                    {
                        char l_3033 = 0x07L;
                        int l_3035 = 0x1BB6D1EDL;
                        if (l_3016)
                            break;
                        if (g_2058)
                            goto lbl_3048;
                        g_8[3] = ((g_403 ^ (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_2782 = (safe_add_func_uint8_t_u_u(((l_3036 = (safe_lshift_func_int8_t_s_u(func_71((l_9 != (safe_add_func_uint32_t_u_u(g_1937[0], g_239))), l_3033), (l_3034[1] ^ (l_3035 = l_3033))))) | l_2998), g_2856))), 7UL)), l_2998)) & l_3037[1]) > g_381), l_2998)) == g_1424), 0UL))) == l_3038);
                        l_3038 = 0x5DC35DF5L;
                    }
                    l_3039[0] = 0L;
                    return l_3036;
                }
            }
lbl_3048:
            l_2842 = (l_3037[0] && func_3(g_2742, (safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(func_71((l_3039[0] <= l_2800[3]), l_3044[0][1][3]), g_8[3])), (safe_rshift_func_int8_t_s_s(((l_3044[3][1][5] && l_3047[1][0]) > l_2842), 0)))), g_2058, g_1937[0]));
            g_8[3] = (g_1093 = g_1232[0]);
            g_105[2][2][1] = (safe_rshift_func_int8_t_s_u(((l_3044[0][1][3] ^ l_2870[1][0][0]) & (-1L)), (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((g_215 = l_2842), l_3044[1][2][4])), ((g_1406 != ((g_191[0][3] = (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((l_2782 = (l_2870[0][0][0] | 0xE4F54D22L)))), 3))) | 0xD6L)) <= g_340)))));
        }
        else
        {
            g_8[3] = (((g_2751[1] = ((safe_mul_func_int8_t_s_s(func_28((65535UL <= (safe_sub_func_uint16_t_u_u(g_198, (~g_1634)))), g_340, (safe_lshift_func_uint16_t_u_u((((((l_2842 = (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(g_105[6][2][0], l_2870[0][4][0])) != l_2870[1][0][0]), (g_1232[0] = g_1520)))) | (safe_sub_func_uint16_t_u_u(((~(~g_1950)) & l_2800[3]), 1L))) && l_3070[2][0][5]) | 4294967292UL) == g_1766), 5))), g_1848)) ^ l_2857)) ^ 0UL) >= 0L);
        }
    }
    else
    {
        unsigned l_3071 = 0UL;
lbl_3072:
        g_2177[2] = 0x92492C93L;
        l_3071 = l_2800[2];
        if (g_340)
            goto lbl_3072;
    }
    l_2987 = g_1424;
    g_2177[5] = func_45(l_3037[1], g_480, (g_1424 = l_3037[1]), l_2812, ((l_3073[0] <= (((l_3070[3][1][2] >= (l_2987 = (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_2782 = l_3080[0]), (func_71(g_241, (g_1950 = (((g_290[8][1] | 1UL) & 4294967291UL) != 0UL))) || g_105[7][1][0]))), g_2818)) == (-1L)), l_3037[1])))) == g_935[0][0][1]) < l_2905)) || l_2800[3]));
    return l_2876;
}







static int func_3(int p_4, unsigned p_5, unsigned p_6, unsigned p_7)
{
    char l_2737 = (-1L);
    char l_2739 = 4L;
    unsigned l_2754 = 1UL;
    p_4 = (safe_mul_func_int8_t_s_s(0x1CL, 1L));
    for (p_4 = 5; (p_4 >= 0); p_4 -= 1)
    {
        int l_2753 = 1L;
        short l_2774 = 0x43CBL;
        int l_2777 = 0xF1499195L;
        int i;
        l_2739 = ((g_8[p_4] > ((func_12((g_8[p_4] == 4294967294UL)) == (g_8[p_4] | (((g_8[p_4] | (l_2737 < ((safe_unary_minus_func_int16_t_s(l_2737)) != ((g_2303[0] ^ g_8[p_4]) ^ g_8[3])))) ^ p_4) ^ 246UL))) != p_6)) == 1L);
        for (l_2739 = 9; (l_2739 >= 1); l_2739 -= 1)
        {
            int l_2752 = 0L;
            int l_2773[2][1][1];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_2773[i][j][k] = (-1L);
                }
            }
            g_2177[5] = (l_2753 = (safe_sub_func_int32_t_s_s((253UL | (((g_8[p_4] = func_12((g_290[(p_4 + 3)][l_2739] <= g_215))) < 8UL) >= ((l_2752 = (((g_2742 = g_2402) >= (0L > (l_2754 = (p_7 >= (safe_lshift_func_uint8_t_u_s((((safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((p_5 = (g_2751[1] = (safe_mod_func_uint32_t_u_u(0xC853D3C4L, p_5)))), l_2752)) & p_4), g_2303[1])) >= l_2739) && l_2753), g_2402)))))) == p_6)) || 0x8656L))), l_2753)));
            l_2774 = ((safe_mul_func_uint8_t_u_u((l_2753 || (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(l_2737, 1)), (g_290[(p_4 + 4)][(p_4 + 4)] != ((g_590 = ((l_2773[1][0][0] = (safe_sub_func_int32_t_s_s((l_2752 = g_8[4]), (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_2753, 2)), (g_1634 || (l_2739 < ((safe_mod_func_uint16_t_u_u((g_480 = ((g_8[p_4] >= (g_191[1][9] = g_547)) < g_8[p_4])), g_290[3][1])) == p_7))))), 7))))) | g_290[(p_4 + 4)][(p_4 + 4)])) < g_2177[3])))), l_2753))), g_290[(p_4 + 3)][l_2739])) | g_8[p_4]);
            g_8[3] = (g_290[l_2739][(p_4 + 1)] ^ (((l_2753 = func_71(g_565, l_2739)) == g_8[3]) == ((safe_mod_func_uint32_t_u_u(g_935[0][0][1], 0x242223AAL)) > (l_2777 = (g_274[2] = g_2177[5])))));
        }
    }
    return l_2737;
}







static unsigned func_12(char p_13)
{
    unsigned short l_14 = 0x7C69L;
    int l_2658 = 1L;
    l_14 = g_8[3];
    l_2658 = func_15(g_8[3], g_8[3], g_8[3], l_14);
    for (g_159 = 0; (g_159 > 42); g_159++)
    {
        char l_2663 = (-2L);
        int l_2715 = 1L;
        for (g_2058 = 0; (g_2058 <= 1); g_2058 += 1)
        {
            unsigned l_2670 = 0xBD6F8217L;
            int l_2681 = (-1L);
            int i, j;
            if (((safe_add_func_int32_t_s_s((l_2663 = g_191[g_2058][(g_2058 + 3)]), (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(g_1937[(g_2058 + 3)], (func_63(l_2670, (l_2658 != ((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(func_63((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_13 != g_1937[(g_2058 + 3)]), g_1937[(g_2058 + 3)])), 8)), g_238, l_2658, p_13, l_14), (-10L))) | 1UL), l_2658)) != p_13)), p_13, g_1634, g_590) ^ g_191[g_2058][(g_2058 + 3)]))) == p_13), 5)) || (-1L)), p_13)))) || p_13))
            {
                int l_2682 = 0L;
                short l_2685[5][9];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_2685[i][j] = 0L;
                }
                l_2682 = (safe_lshift_func_uint16_t_u_u((l_2681 = g_1937[(g_2058 + 3)]), 4));
                if (p_13)
                    continue;
                if (((safe_add_func_int32_t_s_s((l_2685[4][4] >= func_63((safe_mod_func_uint8_t_u_u(((g_513 = g_1634) || g_191[g_2058][(g_2058 + 3)]), g_1766)), p_13, ((func_63(g_403, p_13, (((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_1937[(g_2058 + 3)] & ((safe_lshift_func_int8_t_s_u(((6L ^ l_2682) & 0x320CL), g_241)) < p_13)), 1L)), p_13)) && p_13) != g_1634), g_1527, g_590) >= g_2328) | 4294967294UL), l_2663, g_935[0][0][1])), l_2663)) > g_1937[(g_2058 + 3)]))
                {
                    short l_2702 = 0x7D2BL;
                    g_1848 = (((safe_lshift_func_uint8_t_u_u(0xBAL, 1)) < (safe_mul_func_int16_t_s_s((-1L), ((safe_add_func_uint32_t_u_u(p_13, ((func_63((safe_sub_func_int32_t_s_s((-10L), g_2177[4])), func_63((p_13 == p_13), ((g_2328 != (l_2681 > g_403)) <= p_13), l_2702, p_13, g_1232[0]), p_13, g_935[0][0][2], p_13) & 0L) || g_381))) == p_13)))) >= p_13);
                    g_2177[5] = p_13;
                    for (g_340 = 0; (g_340 <= 1); g_340 += 1)
                    {
                        int i, j, k;
                        g_105[(g_2058 + 1)][g_2058][g_2058] = l_2685[g_2058][g_2058];
                        return g_105[g_340][(g_2058 + 2)][g_340];
                    }
                }
                else
                {
                    short l_2703 = 0x0D69L;
                    l_2703 = p_13;
                }
                for (g_2276 = 1; (g_2276 >= 0); g_2276 -= 1)
                {
                    int l_2712 = (-4L);
                    int l_2713 = 1L;
                    int l_2729[2][8][7] = {{{(-1L),1L,0x5674FA72L,1L,(-1L),1L,(-1L)},{(-1L),(-5L),0xD04549C4L,0L,(-1L),9L,1L},{0xD04549C4L,1L,(-1L),(-1L),0xA4137D6CL,(-1L),0x051DD2E9L},{(-1L),0L,(-1L),0x051DD2E9L,(-1L),0L,(-1L)},{(-1L),0L,0x47C914A3L,(-1L),(-1L),1L,0x132D38CAL},{0x132D38CAL,(-1L),0x47C914A3L,0x5674FA72L,(-5L),1L,9L},{(-7L),9L,0x5674FA72L,0L,1L,0L,0x5674FA72L},{(-1L),(-1L),(-1L),0L,(-1L),(-1L),0xD04549C4L}},{{1L,(-1L),(-7L),0x5674FA72L,0x132D38CAL,9L,(-1L)},{(-1L),1L,(-1L),0L,(-1L),0x051DD2E9L,(-1L)},{(-5L),0x132D38CAL,0x132D38CAL,(-5L),1L,0x051DD2E9L,0x47C914A3L},{0L,(-1L),1L,(-1L),(-5L),9L,0L},{0x5674FA72L,(-7L),(-1L),1L,(-1L),(-1L),0x47C914A3L},{0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)},{0L,0x5674FA72L,9L,(-7L),0xD04549C4L,1L,(-1L)},{0x5674FA72L,0x47C914A3L,(-1L),0x132D38CAL,0L,1L,0xD04549C4L}}};
                    int i, j, k;
                    if ((!((p_13 >= (func_63(p_13, p_13, (((p_13 & (safe_add_func_int16_t_s_s((((g_191[g_2058][(g_2058 + 8)] = (((safe_sub_func_uint16_t_u_u(p_13, 65531UL)) <= ((g_2303[4] ^ (((l_2681 || (safe_sub_func_int32_t_s_s((l_2658 = (4294967293UL & g_101)), l_14))) < g_513) != (-1L))) && l_2682)) < p_13)) == l_2712) | p_13), 0x8A09L))) > l_2681) >= l_2713), p_13, l_2681) <= p_13)) >= 0UL)))
                    {
                        int l_2714 = 0x62769FBCL;
                        int l_2716 = 0x818A8F24L;
                        l_2715 = l_2714;
                        if (p_13)
                            continue;
                        g_2177[8] = (1UL <= ((l_2716 = 65535UL) >= ((g_274[7] <= (safe_mul_func_int8_t_s_s((func_63((p_13 && (l_2658 = (g_105[2][2][1] = ((func_63(((g_191[g_2058][(g_2058 + 8)] > l_2663) | (g_935[0][1][1] != (safe_mod_func_uint32_t_u_u((g_381 = 0xF7FBF212L), 0xF307D7C1L)))), g_1520, p_13, p_13, g_2328) > 0x2CF4L) > p_13)))), p_13, p_13, l_14, g_159) & l_14), g_2402))) > g_159)));
                        l_2716 = func_63(p_13, p_13, l_2714, g_1950, (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(g_290[8][1], 1)) && (l_2729[1][0][1] = (safe_lshift_func_uint16_t_u_s(func_63(g_2177[5], l_2663, p_13, ((safe_rshift_func_int8_t_s_s((l_2681 = ((p_13 >= l_2682) != 0x8210L)), 1)) > g_191[1][9]), g_191[g_2058][(g_2058 + 8)]), l_2712)))), p_13)));
                    }
                    else
                    {
                        char l_2730 = 0L;
                        if (g_1766)
                            break;
                        return l_2730;
                    }
                    l_2715 = (l_2729[1][0][1] < p_13);
                }
            }
            else
            {
                return p_13;
            }
            for (g_1634 = 25; (g_1634 <= 1); g_1634 = safe_sub_func_int16_t_s_s(g_1634, 7))
            {
                g_238 = (safe_lshift_func_int8_t_s_u(p_13, 7));
                for (l_2663 = 0; (l_2663 <= (-1)); l_2663 = safe_sub_func_uint8_t_u_u(l_2663, 2))
                {
                    return g_1424;
                }
            }
            g_105[7][1][0] = (l_2658 = l_2658);
        }
    }
    return g_1232[0];
}







static int func_15(short p_16, unsigned p_17, unsigned char p_18, unsigned short p_19)
{
    char l_20 = 1L;
    int l_21[4] = {0L,0L,0L,0L};
    short l_32 = (-1L);
    unsigned l_1460 = 0UL;
    short l_2543[5][9][5] = {{{1L,0x267BL,0L,0xFCD6L,0xA24CL},{(-1L),0x4075L,0x5775L,0L,0x16A2L},{(-1L),(-1L),1L,0xDFF1L,(-1L)},{2L,7L,1L,0x23E3L,(-3L)},{0L,0xFCD6L,(-10L),0x726FL,1L},{(-1L),(-1L),0L,7L,0xFAF3L},{0x4075L,0x267BL,0x267BL,0x4075L,0x8ABAL},{0xFAF3L,0x726FL,1L,1L,0x4075L},{7L,(-1L),(-3L),0x52F7L,1L}},{{9L,0xED33L,0L,1L,(-1L)},{0xFCD6L,(-1L),0xFB50L,0x4075L,0x47AAL},{0xED33L,0x8270L,0x52F7L,7L,0x23E3L},{9L,0L,0x8ABAL,0x726FL,(-6L)},{(-1L),1L,0L,0x23E3L,0x16A2L},{(-3L),0xFAF3L,0xED33L,0xDFF1L,0x16A2L},{0x4075L,(-1L),0L,1L,(-6L)},{1L,1L,0xF91CL,0L,0x23E3L},{0xA24CL,0x47AAL,0xE752L,0xE752L,0x47AAL}},{{2L,(-3L),0x267BL,9L,(-1L)},{(-1L),1L,9L,0L,1L},{0xDFF1L,0x542DL,0L,4L,0x4075L},{(-1L),0xDFF1L,(-4L),(-1L),0xC61FL},{0x267BL,1L,(-1L),(-1L),0L},{0x5775L,0xDFF1L,0x8C0CL,0x4755L,7L},{7L,0xC61FL,1L,1L,9L},{0x8ABAL,4L,1L,0x8ABAL,0x3655L},{9L,4L,0L,0xF91CL,0x8ABAL}},{{1L,0xC61FL,9L,(-1L),(-10L)},{0x52F7L,0xDFF1L,0xFCD6L,(-3L),(-3L)},{1L,1L,1L,(-4L),0xA24CL},{0xDFF1L,(-1L),0xC40CL,1L,0x8C0CL},{0x52F7L,0xED33L,(-1L),4L,0x267BL},{1L,(-3L),0xC40CL,0x8C0CL,(-1L)},{0L,9L,1L,(-1L),0xC40CL},{0x8ABAL,0xA24CL,0xFCD6L,0L,0x267BL},{0x54F1L,0L,9L,0x5775L,(-1L)}},{{(-6L),0x708BL,0L,0x52F7L,0x708BL},{0x267BL,0L,1L,0x52F7L,(-3L)},{0xC61FL,(-3L),1L,0x5775L,0L},{(-1L),0xFB50L,0x8C0CL,0L,(-4L)},{0x3655L,(-1L),0xFCD6L,0x267BL,0xDFF1L},{0x8C0CL,0L,0xFB50L,1L,(-1L)},{0L,0x5775L,1L,(-3L),0xC61FL},{0x3655L,0xDFF1L,(-1L),0L,(-1L)},{0xFB50L,(-3L),0xF91CL,0xFB50L,0xDFF1L}}};
    int l_2549[10] = {(-10L),0xD7A7BD2FL,(-10L),0xD7A7BD2FL,(-10L),0xD7A7BD2FL,(-10L),0xD7A7BD2FL,(-10L),0xD7A7BD2FL};
    unsigned l_2550 = 0x62986C22L;
    char l_2582 = 0x71L;
    unsigned l_2583 = 4294967295UL;
    unsigned l_2595 = 4294967289UL;
    int l_2654 = (-5L);
    short l_2656 = (-10L);
    int i, j, k;
lbl_2584:
    l_21[1] = (l_20 < p_18);
    if ((p_16 == (safe_add_func_uint8_t_u_u((p_16 || (g_8[4] == func_24((safe_mul_func_int8_t_s_s(func_28(p_19, (~(((l_32 = p_16) || 0xA4ABL) ^ (p_18 = ((l_21[1] = (safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((func_39(g_8[3], p_16, ((((-1L) != 4UL) > 0xB872L) & p_16), g_8[3], p_16) | 0xA2L), 14)) || 0x5AB4L), p_18)) < l_1460) == (-7L)), g_8[3]))) || g_403)))), p_17), l_20))))), l_2543[0][5][1]))))
    {
        unsigned char l_2548[1][7] = {{4UL,4UL,4UL,4UL,4UL,4UL,4UL}};
        int l_2557 = 7L;
        int i, j;
        g_2276 = ((0x29L && (((safe_mul_func_int16_t_s_s(p_18, ((((l_2549[3] = (safe_mod_func_uint8_t_u_u((p_19 ^ (l_21[3] = g_8[3])), l_2548[0][5]))) <= l_2548[0][5]) || (g_191[1][9] = l_2550)) ^ p_19))) >= l_2543[1][3][4]) && 1L)) & g_1937[0]);
        l_2549[6] = ((l_21[1] = ((g_1093 < p_16) && (safe_sub_func_uint8_t_u_u(((p_19 | (func_45(l_2548[0][5], (g_547 ^ p_18), ((safe_add_func_uint8_t_u_u((~p_16), 1L)) & (l_2557 = ((safe_mul_func_uint8_t_u_u(l_2548[0][5], 0xBCL)) | 5UL))), g_191[0][3], p_19) & g_1937[0])) == g_1937[2]), p_18)))) || l_2557);
        l_2549[3] = (safe_mod_func_uint8_t_u_u(g_274[2], 0x4FL));
    }
    else
    {
        unsigned l_2577 = 1UL;
        int l_2587 = 0xE8713C2BL;
        g_1848 = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((g_2276 = p_16) != ((l_20 >= (0xF94AB459L | (safe_unary_minus_func_int8_t_s(p_19)))) > (l_2549[3] = ((~(safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_198, ((0x1DCE0D33L || (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_63((l_2577 == g_105[7][1][0]), (l_2549[3] = (safe_lshift_func_int16_t_s_u(((g_480 = (safe_lshift_func_uint8_t_u_s(0x6FL, 6))) & (-6L)), 10))), p_18, l_2582, p_17), g_191[0][9])), 0xD3L)), l_21[1])) < 4294967295UL) || (-4L))) >= l_2583))), p_16))) > l_2577)))), 0x3A44L)), p_16));
        for (g_565 = 3; (g_565 <= 8); g_565 += 1)
        {
            int l_2586 = 9L;
            unsigned l_2597 = 0x24701361L;
            unsigned short l_2605 = 4UL;
            for (g_1406 = 3; (g_1406 <= 8); g_1406 += 1)
            {
                int i;
                for (g_547 = 0; (g_547 <= 0); g_547 += 1)
                {
                    int i;
                    g_2177[g_1406] = g_2177[g_1406];
                    if (g_2177[(g_547 + 8)])
                        break;
                    if (g_2276)
                        goto lbl_2584;
                    for (g_1950 = 0; (g_1950 <= 4); g_1950 += 1)
                    {
                        int i;
                        g_1848 = g_1232[g_547];
                    }
                }
                if (g_2177[g_565])
                    continue;
            }
            for (g_1424 = 0; (g_1424 <= 0); g_1424 += 1)
            {
                int i;
                g_2177[g_565] = g_2177[g_565];
                g_1848 = (safe_unary_minus_func_uint32_t_u((l_2586 = g_1232[g_1424])));
                return l_2586;
            }
            for (g_1406 = 8; (g_1406 >= 3); g_1406 -= 1)
            {
                char l_2590 = 0x5BL;
                unsigned char l_2603 = 0x74L;
                int l_2604 = 0x5A4A7497L;
                for (g_480 = 3; (g_480 <= 8); g_480 += 1)
                {
                    int i;
                    l_2587 = (g_105[7][1][0] = (g_2177[g_480] = g_2177[g_480]));
                }
                if (((((safe_sub_func_uint8_t_u_u(((l_21[1] = l_2590) != (((g_1520 = (1L != (((safe_mod_func_int8_t_s_s(func_71(p_17, l_2586), (l_2549[2] = (0xA1L ^ l_32)))) ^ (p_16 = 0xF12FL)) ^ (0L < g_2177[3])))) ^ 0xAAL) == p_18)), g_1232[0])) <= g_290[8][1]) > 0UL) != g_290[8][1]))
                {
                    int l_2596 = 0xC52B28D6L;
                    l_21[2] = (safe_sub_func_uint8_t_u_u(l_2595, func_63(l_2587, l_2590, l_2596, l_2587, (func_71(g_100, l_2590) <= l_2597))));
                    for (l_1460 = 0; (l_1460 <= 1); l_1460 += 1)
                    {
                        int i, j;
                        return g_191[l_1460][g_565];
                    }
                }
                else
                {
                    unsigned l_2600[9][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
                    int i, j;
                    if (p_18)
                    {
                        g_105[5][1][1] = (4294967294UL < (~(p_17 = (((0x0FB7L != p_17) & l_32) != func_71((((safe_sub_func_uint8_t_u_u(func_71(l_2600[0][0], ((p_17 || (g_590 > ((0x6019BC11L == (l_2604 = (l_2586 = (((safe_rshift_func_int16_t_s_s((g_513 = l_2603), 1)) & p_18) <= 0xCE67D966L)))) == 0x8B2AL))) || g_1232[0])), l_2590)) < p_17) == g_1093), p_18)))));
                        g_2177[5] = (l_2586 = (((!0x6181L) ^ p_16) >= (p_17 ^ func_71(l_2605, (l_2587 = g_2303[4])))));
                    }
                    else
                    {
                        unsigned l_2606 = 0xF532BD87L;
                        return l_2606;
                    }
                }
            }
        }
        for (g_1093 = 9; (g_1093 >= 0); g_1093 -= 1)
        {
            int i;
            l_2549[g_1093] = 0x6459FC2DL;
            for (g_565 = 0; (g_565 <= 9); g_565 += 1)
            {
                unsigned l_2633[4] = {0x350BC491L,0x350BC491L,0x350BC491L,0x350BC491L};
                int i;
                for (p_18 = 3; (p_18 <= 9); p_18 += 1)
                {
                    int i, j;
                    g_2177[6] = g_290[p_18][g_565];
                    g_1848 = (g_2177[7] = (safe_mod_func_int8_t_s_s(g_290[g_1093][g_1093], (safe_unary_minus_func_int16_t_s(g_290[g_565][g_565])))));
                }
                for (l_2583 = 0; (l_2583 <= 9); l_2583 += 1)
                {
                    int l_2613 = 6L;
                    short l_2614[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2614[i] = 0x78AEL;
                    l_2549[g_1093] = g_2610;
                    for (l_2582 = 1; (l_2582 <= 9); l_2582 += 1)
                    {
                        g_105[7][2][0] = (safe_add_func_int8_t_s_s(((l_21[2] = l_2613) != (0x8B4DCD4BL == l_2587)), l_2614[0]));
                        return p_17;
                    }
                    for (g_590 = 0; (g_590 <= 9); g_590 += 1)
                    {
                        l_2613 = func_71(p_17, g_381);
                    }
                }
                l_2549[0] = (l_21[3] = (safe_rshift_func_int16_t_s_s(((p_17 != (((safe_add_func_int8_t_s_s(p_19, (g_2303[2] & p_16))) < (l_2583 < g_1232[0])) < (safe_unary_minus_func_uint16_t_u((+0x9493L))))) < (safe_rshift_func_int8_t_s_s(0x81L, 2))), (safe_rshift_func_int8_t_s_u(func_71((l_2633[1] = (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(func_71((safe_mul_func_uint8_t_u_u((p_18 = ((+(safe_mul_func_int8_t_s_s(0xBEL, 248UL))) > 0x26L)), p_19)), p_19))) >= l_2587), 12))), g_2303[3]), 6)))));
            }
        }
        g_2177[5] = ((g_2303[4] == (g_274[7] = (g_381 ^ (safe_mul_func_int16_t_s_s((p_16 <= ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((l_1460 && g_2328), 2)), l_2587)) ^ p_19)), (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(func_63(p_19, l_2577, p_18, g_1937[0], l_20), 0xC84B2E34L)), l_2577))))))) < l_2577);
    }
    for (g_198 = 0; (g_198 <= 20); g_198 = safe_add_func_uint8_t_u_u(g_198, 9))
    {
        unsigned l_2646 = 0xC028B36BL;
        unsigned char l_2649[2][8] = {{0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL},{0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL,0x8DL}};
        int l_2655[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_2655[i] = 0x7C7F03A5L;
        l_21[1] = (!func_63(l_2646, l_2646, (g_101 && (g_290[6][3] | ((func_63(((safe_lshift_func_uint8_t_u_u((l_2649[1][7] >= func_63(((l_21[2] <= ((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_17 ^ l_2654), 8)), (l_2655[1] = 0L))) < g_2402)) ^ l_20), p_18, p_18, l_2656, g_290[8][1])), p_16)) != g_290[8][1]), p_18, l_2649[1][7], g_935[0][0][1], g_2303[4]) && 0UL) && g_547))), p_18, g_290[2][9]));
        if (p_16)
            break;
        g_105[2][0][0] = ((+(safe_unary_minus_func_uint16_t_u(0x4A2DL))) | 4L);
        g_105[7][1][0] = 6L;
    }
    return g_340;
}







static int func_24(int p_25)
{
    short l_1653 = 0L;
    int l_1701 = 0x65EB496EL;
    unsigned short l_1753 = 0x27C1L;
    char l_1765[7][1][1] = {{{(-10L)}},{{0L}},{{(-10L)}},{{0L}},{{(-10L)}},{{0L}},{{(-10L)}}};
    unsigned char l_1811 = 255UL;
    short l_1814 = (-1L);
    unsigned short l_1817 = 0x6CC3L;
    int l_1847 = 0x5604DC06L;
    unsigned l_1876 = 4294967293UL;
    unsigned l_1886 = 0x18CDBC93L;
    unsigned short l_2025 = 0xDECAL;
    unsigned short l_2044 = 0x4D21L;
    short l_2085 = 3L;
    unsigned l_2266[4][10] = {{5UL,4294967292UL,4294967292UL,5UL,1UL,0x8592A8E1L,1UL,5UL,4294967292UL,4294967292UL},{1UL,0xCD06B572L,1UL,0x06BDE223L,0x06BDE223L,1UL,0xCD06B572L,5UL,0xCD06B572L,1UL},{7UL,0x8592A8E1L,0x06BDE223L,0x8592A8E1L,7UL,1UL,1UL,7UL,0x8592A8E1L,0x06BDE223L},{5UL,5UL,0x06BDE223L,7UL,4294967292UL,7UL,0x06BDE223L,5UL,5UL,0x06BDE223L}};
    int l_2425 = 6L;
    int l_2428 = (-1L);
    short l_2435 = 0xFBACL;
    int i, j, k;
lbl_2533:
    if (l_1653)
    {
        unsigned l_1656 = 4294967287UL;
        int l_1669 = 1L;
        int l_1691 = 0x30BB61FFL;
        unsigned l_1698 = 0x37E5C864L;
        short l_1724 = (-6L);
lbl_1783:
        l_1656 = (safe_add_func_int16_t_s_s(0x0599L, l_1653));
        for (g_1093 = 0; (g_1093 <= 8); g_1093++)
        {
            g_105[7][1][0] = p_25;
        }
        for (g_590 = (-1); (g_590 <= 6); g_590 = safe_add_func_uint16_t_u_u(g_590, 7))
        {
            unsigned char l_1684 = 255UL;
            int l_1685 = (-10L);
            int l_1686[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
            char l_1702[4];
            unsigned char l_1782[1][9] = {{250UL,250UL,0x0CL,250UL,250UL,0x0CL,250UL,250UL,0x0CL}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1702[i] = (-2L);
            for (g_238 = (-12); (g_238 != 11); g_238++)
            {
                unsigned char l_1672[3][1];
                int l_1673 = (-10L);
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1672[i][j] = 0x2FL;
                }
                g_105[7][1][0] = p_25;
                l_1673 = (g_105[5][0][0] = (((l_1669 = (safe_sub_func_uint16_t_u_u((l_1653 | ((p_25 <= g_590) == (safe_lshift_func_int8_t_s_s(p_25, 2)))), (safe_sub_func_int8_t_s_s((-1L), p_25))))) == (g_274[5] ^ ((((safe_mod_func_int16_t_s_s((l_1672[1][0] = ((g_513 = (-2L)) == g_105[0][3][0])), l_1656)) != 1UL) == p_25) < g_274[7]))) != 4294967295UL));
                g_1093 = ((l_1686[1] = (l_1672[1][0] ^ (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_25, g_403)), (g_513 = ((((safe_rshift_func_int8_t_s_u((1UL & l_1672[1][0]), ((l_1685 = (l_1684 = (safe_lshift_func_uint16_t_u_s(p_25, 2)))) || l_1656))) | ((l_1672[1][0] >= g_565) >= l_1672[1][0])) <= p_25) & 5L)))) & p_25), (-3L))))) != g_101);
                p_25 = (((1L ^ g_290[8][1]) < ((safe_mul_func_uint16_t_u_u(((4294967295UL > ((safe_sub_func_uint32_t_u_u((l_1691 < 4294967295UL), 0UL)) < (((safe_mod_func_uint8_t_u_u((l_1669 = 1UL), l_1672[1][0])) || ((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(1UL, 6L)), g_1232[0])) > p_25)) <= p_25))) ^ l_1698), 0x62ADL)) || g_274[7])) & p_25);
            }
            g_105[7][1][0] = ((p_25 = ((((g_340 = ((safe_add_func_uint16_t_u_u(8UL, (l_1701 = 0x7B4CL))) < p_25)) && l_1702[0]) == (p_25 || (safe_add_func_int16_t_s_s((0xA4589135L || func_63((p_25 != ((l_1669 = (-7L)) > ((((g_1093 = (safe_mul_func_int16_t_s_s((-1L), g_290[8][1]))) || p_25) & 0x0297L) < 0xE2764135L))), g_274[7], l_1653, p_25, g_565)), l_1653)))) < p_25)) >= g_101);
            if (((+((g_100 || ((safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(1L, 4294967295UL)), g_239)) || l_1653)) != p_25)) <= (p_25 || 0x62L)))
            {
                int l_1723[3];
                int l_1764 = (-9L);
                int i;
                for (i = 0; i < 3; i++)
                    l_1723[i] = (-1L);
                g_105[7][1][0] = func_63(((p_25 && ((safe_sub_func_int8_t_s_s(((((g_1232[0] = ((safe_mul_func_int8_t_s_s((((func_71((safe_add_func_int32_t_s_s((g_238 = l_1686[1]), (safe_mul_func_int8_t_s_s(0L, (safe_add_func_uint32_t_u_u(g_1232[0], l_1723[0])))))), l_1724) | 0x7AA4E981L) || (g_274[7] = (l_1669 = ((~(l_1701 = (func_63(g_480, p_25, g_590, g_381, g_513) == 0x25L))) | g_935[0][2][2])))) > 2L), g_1424)) == g_1093)) && 0x17D6L) >= (-1L)) | p_25), p_25)) <= 0xD2L)) || g_1258), g_513, p_25, l_1686[1], p_25);
                if ((0x06CFL < ((func_71((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(1UL, ((safe_mod_func_uint16_t_u_u(func_71((func_63(l_1723[2], (l_1691 = func_63(((((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((((p_25 >= (l_1669 = (safe_mul_func_int16_t_s_s(g_1527, (safe_sub_func_int32_t_s_s(((l_1701 = ((safe_rshift_func_uint8_t_u_u((p_25 ^ ((-1L) == (safe_lshift_func_int8_t_s_s(((p_25 > l_1686[1]) < p_25), g_290[8][1])))), l_1724)) >= 7L)) == l_1723[0]), l_1653)))))) <= p_25) > 0xFC68L) <= g_198), p_25)), p_25)) == l_1723[0]) < 0x107B3060L) & g_1424), g_1232[0], p_25, l_1723[0], g_1520)), l_1723[0], p_25, p_25) > l_1698), l_1702[0]), l_1702[2])) <= 9L))) || l_1686[1]), l_1698)), l_1724) & 0x60DFEB22L) && 0x47L)))
                {
                    short l_1771[10][9] = {{0xC020L,0L,0xE0D4L,0xE0D4L,0L,0xC020L,0L,0xE0D4L,0xE0D4L},{(-1L),(-1L),(-1L),0xEF76L,(-1L),(-1L),(-1L),(-1L),0xEF76L},{0xA01EL,0L,0xA01EL,0xC020L,0xC020L,0xA01EL,0L,0xA01EL,0xC020L},{2L,(-1L),(-1L),2L,0L,2L,(-1L),(-1L),2L},{0xB9CDL,0xC020L,0xE0D4L,0xC020L,0xB9CDL,0xB9CDL,0xC020L,0xE0D4L,0xC020L},{(-1L),0L,0xEF76L,0xEF76L,0L,(-1L),0L,(-1L),(-1L)},{0xA01EL,0xA01EL,0xE0D4L,0xB9CDL,0xE0D4L,0xA01EL,0xA01EL,0xE0D4L,0xB9CDL},{0L,(-1L),0L,0xEF76L,0xEF76L,0L,(-1L),0L,0xEF76L},{0L,0xE0D4L,0xE0D4L,0L,0xC020L,0L,0xE0D4L,0xE0D4L,0L},{2L,0xEF76L,(-1L),0xEF76L,2L,2L,0xEF76L,(-1L),0xEF76L}};
                    int i, j;
                    l_1691 = ((p_25 ^ ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_239 = (4294967287UL <= (7L && (-3L)))), ((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_1685, ((p_25 >= (g_100 & (g_105[7][1][0] ^ (safe_lshift_func_int8_t_s_s(((((l_1701 = (g_290[6][9] || 255UL)) & 0xEF96C4DEL) == l_1723[0]) ^ g_547), 5))))) >= p_25))), 2L)) || 1L))), l_1753)) >= 0x1152B94AL)) == 4294967286UL);
                    if ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_71(g_290[8][1], g_1232[0]), g_340)), g_8[2])))
                    {
                        if (l_1698)
                            break;
                        g_1766 = (func_71(p_25, (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(0x112CL, (safe_mul_func_uint16_t_u_u((!(func_63(p_25, l_1686[4], l_1724, (l_1764 = (g_198 = l_1653)), l_1701) && (l_1723[0] ^ p_25))), 4UL)))) > g_1424) != l_1765[5][0][0]), l_1702[2]))) | (-1L));
                    }
                    else
                    {
                        p_25 = ((((0xD530L >= 1UL) < (0UL < ((func_71(p_25, (safe_mul_func_uint8_t_u_u(0x74L, (l_1723[0] < (safe_mod_func_uint16_t_u_u(g_554, ((l_1771[5][8] = g_101) | p_25))))))) != 0xEFD95F11L) ^ p_25))) >= p_25) < l_1723[0]);
                        p_25 = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((g_198 == (g_1258 >= (func_63(p_25, (safe_sub_func_uint16_t_u_u((p_25 | (safe_sub_func_int8_t_s_s(0x93L, func_63(l_1686[3], g_290[2][7], p_25, p_25, p_25)))), p_25)), p_25, p_25, p_25) > 0x5027L))), g_101)), 2));
                        g_1093 = (l_1764 = g_274[6]);
                    }
                }
                else
                {
                    for (g_238 = (-14); (g_238 < 11); g_238 = safe_add_func_uint32_t_u_u(g_238, 1))
                    {
                        l_1764 = (p_25 = (l_1782[0][3] ^ p_25));
                        if (g_238)
                            goto lbl_1783;
                    }
                    return g_1232[0];
                }
                l_1701 = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(l_1686[1], 0)), (1L & l_1702[0])));
            }
            else
            {
                l_1701 = 7L;
                p_25 = func_63(p_25, (l_1669 = (l_1701 = 0x8261L)), ((safe_mod_func_int16_t_s_s(g_238, p_25)) && g_1258), g_239, g_1232[0]);
                if (g_191[1][9])
                    break;
            }
            for (g_1520 = (-1); (g_1520 >= 19); g_1520++)
            {
                for (l_1753 = 0; (l_1753 < 57); ++l_1753)
                {
                    unsigned short l_1804 = 0x3579L;
                    int l_1805 = 0x7CB8ED1DL;
                    l_1691 = (-3L);
                    if (((safe_lshift_func_uint16_t_u_s((((g_1634 = (safe_mod_func_int8_t_s_s(g_101, (l_1701 = p_25)))) || (g_1093 | ((safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((l_1669 = ((g_1527 = (safe_rshift_func_int8_t_s_s((l_1805 = func_63(((g_274[7] = l_1804) && g_159), (0xBDA8L || ((l_1701 = g_238) && 0x24008409L)), p_25, p_25, g_101)), p_25))) == g_547)), p_25)) < 9UL), g_1766)) || p_25))) != l_1653), p_25)) <= p_25))
                    {
                        unsigned short l_1808[6][2] = {{0x2334L,0x2334L},{0x2334L,0x2334L},{0x2334L,0x2334L},{0x2334L,0x2334L},{0x2334L,0x2334L},{0x2334L,0x2334L}};
                        int i, j;
                        g_1093 = ((g_274[0] = g_1520) & (safe_rshift_func_uint16_t_u_s(p_25, l_1808[3][0])));
                        g_105[2][3][0] = l_1808[3][0];
                        if (g_935[0][0][1])
                            continue;
                    }
                    else
                    {
                        unsigned short l_1809 = 0xFAE0L;
                        return l_1809;
                    }
                    l_1686[1] = func_71(g_565, p_25);
                }
                g_238 = (safe_unary_minus_func_int32_t_s(g_403));
            }
        }
    }
    else
    {
        unsigned char l_1820 = 0xC9L;
        int l_1833 = 1L;
        int l_1887 = (-3L);
lbl_1907:
        g_238 = (((p_25 < l_1811) >= ((((0xDAA0L | 5UL) <= (safe_mul_func_uint16_t_u_u((g_215 = l_1814), (((((safe_lshift_func_int16_t_s_u(l_1817, (l_1817 && l_1817))) == (safe_lshift_func_int16_t_s_u(0x557CL, l_1820))) ^ 0x9BL) <= p_25) <= l_1820)))) < 0xDBL) < 4294967287UL)) && 0x6DL);
        for (p_25 = 0; (p_25 > (-1)); p_25--)
        {
            unsigned short l_1829 = 0x4326L;
            int l_1830[8][7][4] = {{{(-1L),0x35CE5DDCL,(-9L),0xE8A53FCFL},{0xE8A53FCFL,0x8373225BL,0xA72932E8L,0x5CF0F440L},{0xE8A53FCFL,0xE18A30DDL,(-9L),0x16A5108BL},{(-1L),0x5CF0F440L,0xFB4E24C9L,0L},{8L,0xACF4E399L,0x88BF4BB7L,0x20FCF475L},{(-1L),0x3DED490FL,0xE8A53FCFL,6L},{0xA91D73E8L,0xBF22D9C6L,1L,0x109A5C77L}},{{0x88BF4BB7L,0x7652BE4AL,0xA91D73E8L,0xA91D73E8L},{0x5D88561FL,0x5D88561FL,(-1L),0x8373225BL},{0xBF22D9C6L,0x16A5108BL,0x7652BE4AL,(-1L)},{0x35CE5DDCL,6L,0x2234985EL,0x7652BE4AL},{0x36256D9AL,0x88BF4BB7L,0xACF4E399L,8L},{0x88BF4BB7L,4L,0xFB4E24C9L,1L},{0x8373225BL,6L,0x7652BE4AL,0xE7420428L}},{{(-1L),0x5D88561FL,6L,0xA72932E8L},{0x2234985EL,(-1L),0x415B10A9L,0x88BF4BB7L},{0xBF22D9C6L,0L,0x5CF0F440L,0xACF4E399L},{(-1L),0x35CE5DDCL,(-1L),0x88650A3EL},{0x3118C159L,(-1L),0xBAD4B748L,4L},{0xACF4E399L,0x2234985EL,8L,(-1L)},{(-6L),1L,8L,0x2420EEEBL}},{{0xACF4E399L,0x3DED490FL,0xBAD4B748L,0x8373225BL},{0x3118C159L,0xE7420428L,(-1L),0x16A5108BL},{(-1L),0x16A5108BL,0x5CF0F440L,0x415B10A9L},{0xBF22D9C6L,0x109A5C77L,0x415B10A9L,0x36256D9AL},{0x2234985EL,0x5CF0F440L,6L,0xBAD4B748L},{(-1L),0x7652BE4AL,0x7652BE4AL,(-1L)},{0x8373225BL,8L,0xFB4E24C9L,0x35CE5DDCL}},{{0x88BF4BB7L,(-6L),0xACF4E399L,(-1L)},{0x20FCF475L,(-1L),(-9L),(-1L)},{0x3DED490FL,(-6L),0x5D88561FL,0x35CE5DDCL},{(-1L),8L,0x109A5C77L,(-1L)},{6L,0x7652BE4AL,0xE7420428L,0xBAD4B748L},{0x30824F91L,0x5CF0F440L,(-6L),0x36256D9AL},{0xE7420428L,0x109A5C77L,0x2420EEEBL,0x415B10A9L}},{{8L,4L,0x5CF0F440L,4L},{0x2420EEEBL,0xBAD4B748L,(-1L),1L},{0x109A5C77L,0L,0x20FCF475L,0xFB4E24C9L},{0xFB4E24C9L,(-6L),1L,8L},{0xFB4E24C9L,(-9L),0x20FCF475L,0x415B10A9L},{0x109A5C77L,8L,(-1L),0x7652BE4AL},{0x2420EEEBL,0x3DED490FL,0x5CF0F440L,0x35CE5DDCL}},{{0xE8A53FCFL,0x88650A3EL,0xFB4E24C9L,0x30824F91L},{0xBAD4B748L,0x3118C159L,0xE18A30DDL,0x8373225BL},{0x5CF0F440L,6L,0xBAD4B748L,0xBAD4B748L},{0x88BF4BB7L,0x88BF4BB7L,0xA72932E8L,(-6L)},{0x3118C159L,0x415B10A9L,6L,0xE8A53FCFL},{0L,0x30824F91L,0x36256D9AL,6L},{0xACF4E399L,0x30824F91L,0x35CE5DDCL,0xE8A53FCFL}},{{0x30824F91L,0x415B10A9L,0xBF22D9C6L,(-6L)},{1L,0x88BF4BB7L,0x5D88561FL,0xBAD4B748L},{(-1L),6L,0x88BF4BB7L,0x8373225BL},{(-9L),0x3118C159L,0xA91D73E8L,0x30824F91L},{(-1L),0x88650A3EL,(-1L),0x35CE5DDCL},{8L,0x3DED490FL,8L,0x7652BE4AL},{0x16A5108BL,8L,(-1L),0x415B10A9L}}};
            int i, j, k;
            for (g_215 = 0; (g_215 == 57); g_215 = safe_add_func_int8_t_s_s(g_215, 9))
            {
                l_1830[3][1][1] = ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x1F3FL, g_1766)), g_290[9][0])) & l_1829);
                if (g_191[0][0])
                    continue;
                l_1830[5][0][0] = (safe_rshift_func_int8_t_s_u(((g_935[0][0][0] <= 0xD6L) > (g_290[7][6] != 0L)), 1));
            }
        }
        if ((p_25 & (((l_1833 = l_1820) > 0x02512F33L) != (safe_sub_func_int32_t_s_s(func_39(((safe_unary_minus_func_uint8_t_u((func_71((safe_sub_func_uint16_t_u_u(((g_101 = func_63(g_935[0][0][1], l_1653, ((safe_rshift_func_int16_t_s_u((2L | (g_340 = (safe_mul_func_uint16_t_u_u((g_105[7][2][0] && (p_25 && ((safe_lshift_func_int8_t_s_u(g_1258, 3)) | 0x2FL))), 0x365EL)))), p_25)) | 0x62EAL), l_1817, g_1634)) != l_1820), g_1766)), p_25) < p_25))) <= l_1820), p_25, p_25, l_1820, p_25), p_25)))))
        {
            char l_1849 = 0x6AL;
            l_1833 = (safe_add_func_int16_t_s_s((g_1634 = l_1847), (g_1848 != l_1849)));
        }
        else
        {
            unsigned short l_1875 = 0x0647L;
            int l_1903 = 0x2B651958L;
            if (((safe_mul_func_uint32_t_u_u((0x9629CACBL & g_1766), (l_1820 < (safe_mul_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(p_25, (((1UL & (l_1701 = g_238)) < (g_239 >= g_239)) || (p_25 == 0x37L)))) >= p_25) != g_403), 0xF7DFL))))) < p_25))
            {
                int l_1860 = 0x085DEDB4L;
                int l_1885 = (-3L);
                l_1833 = (safe_rshift_func_uint8_t_u_s(func_45((0x5C59L < (func_39(g_8[5], g_1634, g_198, l_1833, p_25) < (safe_add_func_uint16_t_u_u(g_1406, 0L)))), p_25, l_1860, p_25, l_1833), p_25));
                for (g_1258 = 1; (g_1258 <= 9); g_1258 += 1)
                {
                    unsigned l_1877 = 0xA777BD41L;
                    int l_1878 = (-6L);
                    for (l_1701 = 0; (l_1701 >= 0); l_1701 -= 1)
                    {
                        int i, j;
                        g_105[7][1][0] = (g_191[l_1701][(l_1701 + 5)] == ((safe_add_func_uint8_t_u_u(((p_25 = (g_1848 = (g_238 = (safe_mod_func_uint16_t_u_u(0xA794L, (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((l_1877 = (g_191[l_1701][g_1258] != (((0xA4L ^ (safe_rshift_func_int16_t_s_s((l_1833 = (g_274[l_1701] | p_25)), p_25))) && (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_1232[0] & ((~(l_1875 || 8UL)) ^ l_1876)), 2)), 0L))) | g_554))) & l_1765[6][0][0]), 9L)), 0xDB0F32EDL))))))) ^ g_1766), l_1875)) < g_274[7]));
                        l_1833 = (g_1527 ^ ((l_1878 = ((255UL != 0UL) & (g_191[l_1701][(l_1701 + 2)] = p_25))) || ((l_1886 = func_63(p_25, p_25, func_63((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_274[7], (l_1820 & ((0x35E532E7L || p_25) && 0x39789108L)))), 0xB2L)), 1L)), l_1860, g_1424, p_25, l_1885), g_8[2], p_25)) <= 0xC73A9DD1L)));
                        p_25 = 0xF672BAB0L;
                    }
                    for (l_1753 = 0; (l_1753 <= 0); l_1753 += 1)
                    {
                        return l_1860;
                    }
                }
                if ((0x52FEAB56L != (l_1887 = (l_1833 = p_25))))
                {
                    char l_1895 = 1L;
                    if (l_1875)
                    {
                        g_1093 = (safe_mod_func_uint32_t_u_u(p_25, (safe_rshift_func_uint16_t_u_s(g_1258, (safe_mul_func_uint16_t_u_u(l_1814, (safe_unary_minus_func_int16_t_s(l_1895))))))));
                        p_25 = (0x49BDF297L && l_1895);
                        g_1848 = ((((((+0x716807C2L) < 4294967295UL) || (safe_sub_func_uint8_t_u_u(l_1860, 0xBEL))) >= (+(0x34057044L | (g_101 != p_25)))) <= (safe_sub_func_uint16_t_u_u(p_25, func_63((g_238 = l_1875), p_25, g_105[7][1][0], g_8[3], p_25)))) || 0UL);
                    }
                    else
                    {
                        p_25 = (g_1848 <= ((safe_mul_func_int8_t_s_s(l_1833, g_480)) ^ g_1093));
                        p_25 = 0xA9D68555L;
                    }
                }
                else
                {
                    unsigned char l_1902 = 1UL;
                    l_1701 = g_403;
                    l_1903 = ((l_1902 && g_554) ^ g_8[3]);
                }
                for (l_1860 = 22; (l_1860 <= (-20)); l_1860 = safe_sub_func_int16_t_s_s(l_1860, 7))
                {
                    return l_1887;
                }
            }
            else
            {
                unsigned short l_1906[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1906[i] = 65528UL;
                l_1906[0] = 0x162FC8CEL;
                p_25 = g_1093;
            }
            if (g_1093)
                goto lbl_1907;
        }
    }
    if ((g_1093 = (l_1811 && 0x27BD835AL)))
    {
lbl_2225:
        for (g_554 = 0; g_554 < 10; g_554 += 1)
        {
            g_274[g_554] = 0x21F3L;
        }
    }
    else
    {
        int l_1908 = (-7L);
        int l_1939 = 0L;
        int l_2062 = 8L;
        unsigned l_2075 = 0x312BE543L;
        int l_2108 = 1L;
        unsigned char l_2156[3][7][8] = {{{1UL,1UL,248UL,0UL,1UL,0x04L,255UL,0x00L},{0xFFL,0UL,0UL,246UL,1UL,0x78L,7UL,255UL},{1UL,0xA3L,1UL,0x47L,1UL,0UL,0xA3L,1UL},{0x3EL,0x9AL,0UL,0xA6L,255UL,1UL,255UL,0xA6L},{0x47L,0x00L,0x47L,255UL,0UL,252UL,0x90L,0UL},{0x5BL,0x0EL,255UL,0x3EL,0x78L,0x5BL,0UL,0xD8L},{0x5BL,255UL,1UL,8UL,0UL,0x78L,0x12L,0xA3L}},{{0x47L,1UL,1UL,255UL,255UL,246UL,255UL,0xFAL},{0x3EL,255UL,0xD8L,255UL,1UL,0xA3L,248UL,0UL},{1UL,1UL,252UL,255UL,1UL,0UL,6UL,0UL},{0UL,0x3EL,1UL,0UL,255UL,255UL,0UL,1UL},{7UL,7UL,0x3EL,255UL,0xA3L,0xCFL,0x5BL,255UL},{252UL,1UL,0xFFL,1UL,0x74L,255UL,0xFAL,255UL},{1UL,0x77L,0UL,7UL,0xFAL,255UL,0xFFL,255UL}},{{6UL,255UL,1UL,0UL,0xF1L,0x9AL,0x04L,0x90L},{0xDAL,0xA4L,7UL,0xA6L,0UL,255UL,255UL,0x27L},{0UL,246UL,1UL,0x12L,0x10L,0UL,0UL,0xF1L},{1UL,255UL,255UL,248UL,1UL,248UL,255UL,255UL},{0xD8L,0xA3L,0x78L,0xCFL,0x04L,0xA6L,0UL,0x99L},{6UL,0x04L,0x00L,1UL,0xD8L,1UL,0UL,1UL},{0x79L,1UL,0x78L,0xA6L,255UL,1UL,255UL,0x5BL}}};
        unsigned short l_2195 = 0x676DL;
        short l_2245 = 0xE8F9L;
        unsigned l_2281[4][6] = {{0x75D4A826L,0x75D4A826L,4294967287UL,0xDA2B3E93L,0xF82FF971L,0xDA2B3E93L},{6UL,0x75D4A826L,6UL,0UL,4294967287UL,4294967287UL},{0xC8030977L,6UL,6UL,0xC8030977L,0x75D4A826L,0xDA2B3E93L},{0xDA2B3E93L,0xC8030977L,4294967287UL,0xC8030977L,0xDA2B3E93L,0UL}};
        int l_2305 = 0x5DEECCBDL;
        short l_2317 = 0x806EL;
        unsigned l_2321[4];
        int l_2344 = 0xEBF6164CL;
        int l_2354 = 0L;
        unsigned short l_2385 = 65531UL;
        unsigned l_2413 = 0xAA40232CL;
        unsigned l_2471 = 9UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2321[i] = 4294967295UL;
        if (l_1908)
        {
            int l_1917 = (-1L);
            int l_1918 = 0L;
            int l_1936 = (-10L);
            int l_2136 = 0xDC45BFD8L;
lbl_2137:
            if ((safe_add_func_uint16_t_u_u(65531UL, ((+(g_1424 = (safe_rshift_func_int16_t_s_s((-8L), (l_1918 = (safe_sub_func_int16_t_s_s(p_25, func_71((l_1908 = ((0UL & ((safe_rshift_func_int16_t_s_s(l_1917, 15)) && func_28(l_1917, (l_1917 <= (((g_480 == p_25) && p_25) > g_1232[0])), p_25))) != (-9L))), l_1876)))))))) >= g_1520))))
            {
                unsigned short l_1922 = 0x6B39L;
                unsigned l_1960 = 1UL;
                l_1908 = 0L;
                g_105[1][0][0] = g_1919;
                if (l_1917)
                {
                    unsigned l_1933[7] = {4294967295UL,0x64713599L,4294967295UL,4294967295UL,0x64713599L,4294967295UL,4294967295UL};
                    int l_1938 = (-9L);
                    int l_1954 = 0xFC4703A6L;
                    int i;
                    p_25 = p_25;
                    l_1939 = (g_565 == ((l_1922 > ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(g_554, ((safe_lshift_func_int16_t_s_u((l_1933[3] = 1L), (((((p_25 && ((p_25 >= (safe_mul_func_uint8_t_u_u(0xA3L, p_25))) & (l_1908 = (((((l_1936 = p_25) || g_100) && 0x895CL) || l_1817) != g_1937[0])))) < g_1406) | 0x5C9CL) != g_290[3][9]) != l_1938))) && g_241))), g_381)), 6)), l_1918)) > 0xB0F83FBFL)) & g_8[3]));
                    if (((safe_mul_func_uint16_t_u_u(g_8[4], func_28((g_159 = p_25), g_1766, (l_1939 = 0xB05FL)))) > (l_1847 != ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((l_1938 = (p_25 != g_547)), (safe_rshift_func_int8_t_s_u((+((((safe_lshift_func_int8_t_s_u(p_25, p_25)) | p_25) < 1UL) && l_1933[3])), g_1950)))) > g_1520), l_1933[3])) && g_8[3]))))
                    {
                        p_25 = l_1939;
                    }
                    else
                    {
                        int l_1951 = 6L;
                        l_1951 = 0xEFFFD444L;
                    }
                    l_1954 = (safe_mod_func_int8_t_s_s(0xE9L, (l_1938 = p_25)));
                }
                else
                {
                    int l_1959 = 0x8D89E502L;
lbl_1973:
                    if ((((safe_sub_func_uint32_t_u_u((6UL <= (0L ^ 0UL)), (0x1E6DL > func_63((safe_rshift_func_int16_t_s_u(l_1908, 12)), (l_1959 >= l_1917), (!(-8L)), ((l_1701 = g_241) & 3L), p_25)))) != p_25) > l_1765[1][0][0]))
                    {
                        short l_1965 = (-1L);
                        short l_1970 = 0x3ED5L;
                        l_1960 = g_198;
                        g_1093 = (safe_rshift_func_int8_t_s_s(((((4294967295UL || ((p_25 = ((l_1959 <= (func_63((safe_sub_func_int8_t_s_s((0xFC0EL && (l_1959 & l_1965)), ((g_100 && (safe_sub_func_int16_t_s_s(g_239, (safe_mul_func_int16_t_s_s(p_25, (+((((l_1701 = g_8[3]) && 1L) | l_1817) < 0L))))))) > l_1936))), p_25, p_25, g_191[1][9], p_25) != g_241)) > l_1970)) & (-1L))) < 0UL) && 0x6A09L) ^ g_1406), 3));
                        if (l_1876)
                            goto lbl_1973;
                    }
                    else
                    {
                        g_105[3][1][0] = (safe_rshift_func_int16_t_s_s(((l_1939 = g_1424) > l_1959), g_1232[0]));
                    }
                    p_25 = l_1939;
                    g_105[6][0][0] = (p_25 = ((safe_rshift_func_uint8_t_u_u((((l_1886 ^ (safe_add_func_uint8_t_u_u(p_25, l_1959))) || func_63(p_25, g_215, func_63((safe_rshift_func_uint16_t_u_s(l_1765[3][0][0], 2)), (safe_sub_func_uint16_t_u_u(p_25, (safe_lshift_func_uint16_t_u_u(func_63(p_25, g_290[8][2], p_25, g_513, p_25), l_1936)))), l_1936, l_1959, l_1939), g_8[3], l_1959)) > p_25), l_1908)) > l_1959));
                }
                if (((safe_add_func_uint32_t_u_u((g_290[2][2] != (safe_add_func_uint32_t_u_u(g_1634, (~p_25)))), l_1936)) | func_71(l_1939, g_241)))
                {
                    int l_1996 = 0x71B079E8L;
                    for (l_1918 = (-6); (l_1918 >= 3); ++l_1918)
                    {
                        unsigned short l_2003 = 0x4A71L;
                        int l_2004 = 0xDD7C9841L;
                        g_105[2][0][1] = ((l_1701 = ((p_25 < (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((0L > (((l_1996 == 0xFDL) < ((((safe_mod_func_uint16_t_u_u(0xE763L, (l_2004 = (func_45((g_340 = (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_2003 >= func_71(l_1918, g_159)), (-10L))), g_381))), p_25, l_1908, l_1917, p_25) && l_1996)))) > 0x247EL) == g_1520) < (-1L))) < (-9L))), p_25)) != g_1937[0]), l_1908)), g_8[5]))) <= 0L)) != 251UL);
                        return g_100;
                    }
                    g_238 = (safe_rshift_func_int16_t_s_s(g_1093, 4));
                    p_25 = (safe_sub_func_uint16_t_u_u((l_1908 = (l_1996 = (l_1960 & (l_2025 = (p_25 >= (safe_mod_func_int16_t_s_s((g_290[8][1] = ((!p_25) && (safe_mul_func_int16_t_s_s((func_45(func_63(((p_25 != (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((g_239 = 0UL), (safe_rshift_func_int8_t_s_s((-1L), g_191[1][8])))), ((g_1258 >= p_25) <= g_565))), p_25)), p_25)), 9L))) >= l_1918), l_1939, l_1765[1][0][0], p_25, l_1653), g_403, p_25, p_25, l_1811) <= p_25), p_25)))), g_1848))))))), g_1527));
                    g_1093 = (g_340 & (l_1701 = (safe_sub_func_int8_t_s_s((g_274[7] < (safe_rshift_func_int16_t_s_s((65528UL == 3UL), ((safe_mul_func_uint16_t_u_u((l_1908 = ((((safe_lshift_func_uint8_t_u_s(func_71(func_71(((safe_mod_func_int16_t_s_s((l_1918 = (safe_rshift_func_int8_t_s_u((l_1996 = ((safe_mod_func_int16_t_s_s((-3L), (safe_mul_func_int16_t_s_s(p_25, (func_63(p_25, (safe_mul_func_int8_t_s_s((l_1922 >= l_1917), g_191[1][9])), p_25, l_1960, l_1917) & l_2044))))) | 0x22L)), p_25))), p_25)) ^ 0xDDL), p_25), p_25), p_25)) <= p_25) != 0xC1L) >= g_480)), 0x1208L)) | g_1232[0])))), p_25))));
                }
                else
                {
                    for (g_1520 = 0; g_1520 < 1; g_1520 += 1)
                    {
                        g_1232[g_1520] = 0x60C0L;
                    }
                }
            }
            else
            {
                g_1093 = 0xB51C2818L;
            }
lbl_2093:
            if ((safe_mul_func_uint16_t_u_u(func_63((safe_sub_func_uint16_t_u_u(g_1766, (func_63(g_1232[0], l_1753, ((safe_lshift_func_int8_t_s_u(p_25, 3)) >= l_1939), p_25, p_25) & (0x485BF3B7L == 1UL)))), g_935[0][0][1], g_935[0][0][1], l_1917, l_1886), g_381)))
            {
                unsigned short l_2063 = 4UL;
                int l_2064[9] = {0xFDD445DDL,0xFDD445DDL,0xFDD445DDL,0xFDD445DDL,0xFDD445DDL,0xFDD445DDL,0xFDD445DDL,0xFDD445DDL,0xFDD445DDL};
                int i;
                for (g_1258 = (-28); (g_1258 <= 50); g_1258 = safe_add_func_int8_t_s_s(g_1258, 7))
                {
                    unsigned l_2053 = 0xA64B2C7BL;
                    unsigned char l_2080 = 0x80L;
                    for (l_1701 = 9; (l_1701 >= 1); l_1701 -= 1)
                    {
                        int i;
                        l_2053 = (g_274[l_1701] <= l_1908);
                        p_25 = (safe_rshift_func_uint8_t_u_s((5L == (((g_513 = (-1L)) != ((g_1520 = ((safe_mul_func_uint8_t_u_u(g_2058, (safe_sub_func_uint16_t_u_u(l_1918, ((safe_unary_minus_func_uint32_t_u(((func_71(l_1917, (g_1919 = p_25)) < 0L) ^ ((l_2063 = ((g_340 = (~((l_2062 & p_25) && 0x6470B52AL))) == l_1918)) == 0x7824BA7CL)))) ^ l_2053))))) || g_381)) | l_2064[4])) >= p_25)), 3));
                    }
                    p_25 = 0L;
                    for (l_1701 = 11; (l_1701 > (-11)); l_1701--)
                    {
                        g_238 = g_565;
                    }
                    for (g_1406 = 5; (g_1406 > (-8)); g_1406 = safe_sub_func_uint8_t_u_u(g_1406, 1))
                    {
                        g_1093 = ((p_25 | g_547) < g_1406);
                        l_2080 = (p_25 <= ((((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((p_25 ^ (safe_mul_func_int8_t_s_s(func_71(((l_2075 = p_25) & (p_25 >= (g_1950 ^ ((l_1918 = p_25) == ((l_1908 != (safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(0UL, (g_565 || 8UL))) & 5UL), p_25))) == 0xCDF8594AL))))), l_1917), 0xE0L))), p_25)) >= 65535UL), 0L)) && g_381) > g_8[3]) >= g_547));
                        l_1918 = (p_25 = g_1232[0]);
                        if (p_25)
                            break;
                    }
                }
            }
            else
            {
                int l_2090 = (-1L);
                g_238 = ((p_25 ^ (safe_mul_func_uint16_t_u_u(g_403, p_25))) ^ g_100);
                p_25 = (((safe_mod_func_uint32_t_u_u((l_2085 >= 0L), g_513)) == (safe_lshift_func_int16_t_s_u((-1L), 6))) | ((safe_sub_func_uint32_t_u_u(func_63((((((l_1918 = l_2090) || l_1936) || ((l_1936 = (l_1939 = (+p_25))) || (g_274[7] = l_2044))) ^ 0L) || l_1908), l_2090, p_25, l_2090, l_2062), 0x42CCF906L)) || 1UL));
            }
            for (g_215 = 12; (g_215 > 47); g_215 = safe_add_func_uint8_t_u_u(g_215, 5))
            {
                unsigned short l_2102 = 65535UL;
                if (l_2062)
                    goto lbl_2093;
                if ((safe_lshift_func_int16_t_s_u(1L, 14)))
                {
                    short l_2098 = 0x22B0L;
                    int l_2103[4][3] = {{(-1L),0x660FE6E6L,(-1L)},{0xD6FF4EC1L,0xD6FF4EC1L,0xD6FF4EC1L},{(-1L),0x660FE6E6L,(-1L)},{0xD6FF4EC1L,0xD6FF4EC1L,0xD6FF4EC1L}};
                    int l_2123 = 2L;
                    int i, j;
                    l_2103[3][1] = (safe_rshift_func_uint8_t_u_s(func_63((l_2102 = ((l_1936 = func_63(g_1634, (!(l_2098 < (safe_mod_func_uint32_t_u_u(((g_2101 == func_63(l_1918, g_1950, p_25, l_1939, l_2098)) == l_1917), l_2098)))), g_403, g_547, p_25)) <= 0x3DL)), p_25, g_215, l_1917, g_381), 6));
                    for (g_1258 = 0; (g_1258 <= 0); g_1258 += 1)
                    {
                        int l_2124 = 0xAA8FA09DL;
                        unsigned short l_2125 = 0UL;
                        g_105[1][3][1] = (safe_mod_func_int16_t_s_s(g_935[0][1][5], func_63(p_25, l_2102, func_63(g_480, (((0x0153L || func_63((p_25 ^ 0x6083F373L), ((((((l_1701 = ((safe_mod_func_uint32_t_u_u(((((l_1701 & (l_1939 = l_2103[3][1])) & p_25) && g_1258) == p_25), l_1908)) | l_2108)) < g_1919) != 0xA5L) >= 2UL) >= 0xA1L) && g_2058), l_2108, p_25, p_25)) >= p_25) <= l_2075), g_290[8][1], g_1406, l_2098), l_2103[0][0], g_191[1][4])));
                        g_105[7][1][0] = ((((g_1093 = (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_63((safe_mul_func_int8_t_s_s((func_63(l_2098, (l_1936 = g_1258), g_105[2][1][1], (l_1817 != (safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(l_2103[3][1], (safe_mod_func_int32_t_s_s((p_25 = g_1527), g_215)))) >= l_2123), g_513))), l_2124) <= l_1917), g_480)), l_2044, l_2062, l_1817, g_1848), l_1908)), 4UL)), l_2075))) == l_1847) != 1UL) && l_2125);
                        g_105[5][2][1] = ((0x1E52CF51L < (((l_2044 >= g_480) && (g_1634 || 0xDA5EL)) || (p_25 < (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(func_63((p_25 & ((((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((l_1917 | (g_1406 || g_274[7])), p_25)), p_25)) < (-1L)) ^ 1L) && l_2102)), p_25, p_25, g_935[0][1][1], g_565), l_2102)), l_2136)), 0x2C53L))))) ^ 0x5C98L);
                        if (g_1406)
                            goto lbl_2137;
                    }
                }
                else
                {
                    unsigned char l_2157 = 0x3FL;
                    for (g_340 = (-6); (g_340 >= 43); g_340 = safe_add_func_uint32_t_u_u(g_340, 6))
                    {
                        unsigned char l_2158 = 0x17L;
                        int l_2159 = 0L;
                        char l_2168 = 0x80L;
                        l_2159 = (safe_rshift_func_uint8_t_u_u(0UL, ((l_2157 = func_63(p_25, (((g_1093 = (safe_sub_func_int8_t_s_s((l_1908 = l_1908), g_8[3]))) && (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((l_1918 = p_25), (safe_sub_func_uint32_t_u_u(g_1919, (safe_lshift_func_int8_t_s_u(p_25, 0)))))) ^ (safe_add_func_uint8_t_u_u((!l_2102), p_25))) < l_1917), 0L)), g_547))) <= p_25), l_2156[0][1][1], g_480, l_2156[0][1][1])) >= l_2158)));
                        p_25 = (((4294967295UL | l_2159) >= ((func_63((0xF5F6L | ((((safe_mul_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(l_2156[0][1][1], (l_2044 < l_2156[0][1][1]))) || (~(safe_lshift_func_uint16_t_u_u(g_105[7][1][0], (0xC3L > (safe_lshift_func_uint16_t_u_s(g_1232[0], 5))))))) && l_2157), l_2025)) && 0x851DFFEBL) <= p_25) || (-10L))), g_215, l_2168, g_1527, p_25) | 0x06L) && 0x128BL)) >= 4L);
                        if (l_2157)
                            break;
                    }
                }
                for (g_403 = 0; (g_403 < (-11)); g_403 = safe_sub_func_uint32_t_u_u(g_403, 1))
                {
                    unsigned char l_2188 = 1UL;
                    int l_2196 = 0xFD8AB13DL;
                    p_25 = (6UL != func_63((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint32_t_u_u((func_63(g_274[7], (l_1918 = (l_2156[0][1][1] > (safe_rshift_func_int16_t_s_s(((g_1937[0] & ((g_2177[5] ^ (0x21L != (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(func_63((safe_add_func_uint8_t_u_u(g_565, (safe_rshift_func_uint16_t_u_u((l_1701 = (((((l_1936 = l_1918) || 0xE699L) || g_1937[0]) ^ 0x4916L) >= 6UL)), 2)))), g_198, l_2188, g_513, g_565), 1)), g_1919)), 10)))) > l_1939)) | (-1L)), l_1939)))), l_2075, p_25, g_513) != 0xD1L), p_25)) <= p_25), 2)), p_25, g_274[7], l_1876, l_1917));
                    l_1939 = func_63(g_1766, (safe_rshift_func_int16_t_s_s((func_63(((l_1701 = (g_1634 = (g_1937[0] = ((!(safe_rshift_func_int8_t_s_u(g_565, g_2177[5]))) & (l_2196 = (safe_add_func_int16_t_s_s(l_2195, p_25))))))) > ((((safe_add_func_uint32_t_u_u((7L <= ((safe_lshift_func_int8_t_s_s(g_554, 4)) < 0UL)), func_63(((((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(p_25, l_1817)) <= l_1876), 5)) >= g_1919), g_1232[0])) && 0xCAL) > p_25) >= g_241), g_241, g_215, g_2177[4], p_25))) || g_191[1][9]) ^ p_25) ^ g_935[0][1][5])), l_2102, l_2188, p_25, p_25) | g_1520), g_8[3])), g_1232[0], g_215, p_25);
                    p_25 = g_239;
                    p_25 = g_1848;
                }
            }
        }
        else
        {
            int l_2219[5];
            unsigned short l_2267[6] = {0x1D84L,0x1D84L,0x1D84L,0x1D84L,0x1D84L,0x1D84L};
            int l_2304 = 1L;
            unsigned char l_2318 = 1UL;
            short l_2355 = 0x0870L;
            int i;
            for (i = 0; i < 5; i++)
                l_2219[i] = 0L;
            if (func_45(g_290[8][1], (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_1908 = (((g_191[1][9] = 0x59L) | (safe_sub_func_uint8_t_u_u((g_340 = (((safe_rshift_func_int16_t_s_u(((((safe_mod_func_int16_t_s_s((g_1919 > g_935[0][1][6]), 0x6E6FL)) < (safe_rshift_func_uint16_t_u_s(l_2219[2], 8))) >= (l_2219[2] && g_215)) > p_25), l_1847)) ^ g_381) | g_105[7][1][0])), g_935[0][0][1]))) >= p_25)), p_25)), l_1814)), g_565, p_25, p_25))
            {
                int l_2226 = (-4L);
                for (l_2044 = 0; (l_2044 <= 8); l_2044 += 1)
                {
                    short l_2220 = 0xD3C6L;
                    int l_2223 = 0xD70512FBL;
                    int l_2224 = 1L;
                    int i;
                    g_2177[l_2044] = func_39(l_2220, p_25, p_25, ((safe_rshift_func_uint16_t_u_u((((l_1939 = l_1814) == g_403) == g_1424), (g_547 = (l_2223 ^ ((+(g_1766 = g_403)) | (l_2224 = (((0x02L < l_2156[0][1][1]) <= l_2220) ^ p_25))))))) != 0L), p_25);
                    g_105[6][0][1] = (p_25 != 1L);
                    if (l_2219[2])
                        break;
                    if (l_1653)
                        goto lbl_2225;
                }
                g_238 = l_2226;
                for (l_1817 = 0; (l_1817 != 55); l_1817 = safe_add_func_uint16_t_u_u(l_1817, 1))
                {
                    int l_2231 = 0x1CD4A6ADL;
                    int l_2236 = 7L;
                    if (((safe_sub_func_int16_t_s_s((l_2231 >= l_1701), g_513)) >= func_63((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(func_71(((8UL >= l_2231) != (l_2236 = g_1093)), g_191[1][2]), (safe_sub_func_uint16_t_u_u(((g_1848 = (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(l_2219[3], 0x819EL)), 4)), l_2085))) == p_25), l_2245)))), g_1937[0])), l_2219[4], p_25, l_2226, l_2156[0][1][1])))
                    {
                        if (p_25)
                            break;
                    }
                    else
                    {
                        short l_2268 = 0xB697L;
                        p_25 = (g_1424 ^ 8L);
                        p_25 = (g_105[4][1][0] = func_28((((((p_25 >= ((safe_mul_func_uint8_t_u_u(1UL, (((~l_2236) | (safe_add_func_uint32_t_u_u(p_25, 0x6A188920L))) & (safe_rshift_func_uint8_t_u_s(g_191[1][5], ((((safe_mod_func_uint16_t_u_u((func_63((safe_rshift_func_uint8_t_u_s(p_25, 2)), (safe_add_func_uint32_t_u_u(((((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_1232[0], func_63((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0xD02D6E26L, (-1L))), g_290[4][8])), l_2245, g_1093, g_274[7], g_1424))), l_2236)) && l_2219[1]) >= g_480) | 0xE8L), l_2219[1])), p_25, p_25, p_25) && g_290[8][1]), (-7L))) && g_590) <= g_480) < 0xE6L)))))) && g_554)) & g_1766) | g_274[5]) <= g_2177[3]) <= 0x27L), l_2236, l_2266[1][1]));
                        l_2267[1] = (l_2236 = g_1424);
                        l_2268 = 0x8E3112E0L;
                    }
                }
            }
            else
            {
                int l_2275 = 0x0A74FD1CL;
                g_105[7][1][0] = (g_403 ^ ((g_1766 < 6UL) < func_71((g_935[0][0][4] = (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((((g_1848 = (p_25 = func_63(l_1908, ((l_1939 = (safe_sub_func_uint32_t_u_u((l_1701 = 0UL), p_25))) || 0x6C04L), g_101, (g_1527 >= 0x24L), l_2219[2]))) <= l_2219[2]) > g_1527) != l_1814), 0)) || 1L), l_2275))), g_2276)));
                if ((l_1701 = (0xD1AF92B7L <= ((p_25 == (g_403 ^ (((safe_rshift_func_int8_t_s_s(p_25, (safe_mul_func_uint16_t_u_u((p_25 || (p_25 < 0x1259L)), l_2281[0][0])))) >= (g_2101 = (safe_sub_func_uint16_t_u_u(func_71(func_63(g_8[3], g_2276, l_2156[0][1][1], g_381, g_191[1][0]), p_25), l_2156[2][5][5])))) | 0xBBC91E30L))) < p_25))))
                {
                    short l_2292 = 0x84CEL;
                    int l_2316 = 0x29DF50C3L;
                    g_105[7][1][0] = (safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_1527, (g_1424 = (0x5428EA73L != ((safe_sub_func_uint16_t_u_u(func_39(func_39(l_2292, l_2292, (safe_mul_func_int16_t_s_s((l_2304 = (safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(l_2281[0][0], g_1848)) ^ ((p_25 != p_25) > (safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(func_39(g_340, p_25, l_2044, p_25, p_25), 10)) == 1UL), g_2303[4])))), l_2275))), g_1424)), l_2305, l_2156[0][1][1]), p_25, g_2303[0], l_2075, l_2292), g_1937[0])) && p_25))))), 1UL)), g_1527));
                    l_1939 = (p_25 > (((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0xDA16L, (safe_mul_func_int8_t_s_s(((l_2275 == p_25) <= l_2275), func_63(l_2085, p_25, (+(safe_mod_func_uint16_t_u_u(0xC8ECL, (l_1701 = func_63((l_2316 = (safe_add_func_uint32_t_u_u(4294967295UL, 0xB5D5B4F5L))), p_25, p_25, l_2317, l_2275))))), l_2318, l_2304))))), p_25)) != l_2275) || g_935[0][2][0]));
                }
                else
                {
                    for (g_547 = 0; (g_547 >= 41); g_547 = safe_add_func_uint16_t_u_u(g_547, 4))
                    {
                        p_25 = (0x1188L & (((l_2321[0] != (func_28(p_25, ((g_238 > 3UL) | (safe_add_func_int32_t_s_s(p_25, 0UL))), (safe_lshift_func_int8_t_s_u(((l_2267[1] == (g_1527 <= 0x3DL)) < p_25), 7))) < p_25)) | l_2275) || l_2275));
                        return p_25;
                    }
                    for (g_100 = (-15); (g_100 == 17); g_100 = safe_add_func_uint32_t_u_u(g_100, 5))
                    {
                        if (g_2328)
                            break;
                        g_105[1][1][1] = (safe_lshift_func_int16_t_s_u(p_25, 1));
                    }
                }
                p_25 = g_241;
            }
            if ((safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_2281[2][3], (safe_mod_func_int8_t_s_s((((l_2344 = (safe_unary_minus_func_uint32_t_u(func_39(l_1653, ((safe_sub_func_uint16_t_u_u((l_2075 <= (func_71(((safe_mul_func_uint16_t_u_u((func_63(g_1950, (0x5B95L >= (-1L)), (l_1939 = func_71(((g_1937[1] = ((l_2304 = (l_1701 = 0xCB01A71CL)) && g_1093)) == (safe_mul_func_uint8_t_u_u(0x4FL, l_1876))), g_565)), p_25, l_1847) > 0xD91FL), p_25)) < p_25), p_25) == g_290[8][1])), l_2062)) >= 0UL), g_274[1], p_25, g_1919)))) ^ p_25) > g_1527), g_1766)))), p_25)))
            {
                int l_2353 = 0x913CB054L;
                int l_2398[3][5];
                char l_2399 = (-9L);
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_2398[i][j] = 0xFFBDDD88L;
                }
                l_1908 = ((((((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((p_25 != (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((g_274[2] >= g_1527), func_63(p_25, func_63((l_2267[2] || g_565), (l_2353 = (g_935[0][0][1] && g_2303[4])), g_274[1], l_1765[5][0][0], l_2075), g_274[7], g_1258, l_2354))), p_25))) < 255UL), 0x37099880L)), 0xC4L)) | (-6L)) || (-6L)) < l_2355) & l_2354) && 9L);
                for (l_1908 = (-18); (l_1908 == 24); ++l_1908)
                {
                    unsigned l_2371 = 0UL;
                    if (p_25)
                        break;
                    if ((1UL >= func_63((safe_add_func_uint16_t_u_u((g_239 < (l_1753 & ((((safe_mul_func_int8_t_s_s((l_2353 || ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(1UL)), (safe_rshift_func_int8_t_s_u(l_2371, g_101)))), (safe_mul_func_int16_t_s_s((255UL & (3L < p_25)), 0x23E0L)))), (-1L))) || 1UL)), p_25)) >= l_2267[3]) > 0x3FA1AFFAL) && 0xD2D701A1L))), l_2267[4])), g_403, l_2266[1][1], p_25, g_1937[0])))
                    {
                        g_105[2][2][1] = p_25;
                    }
                    else
                    {
                        unsigned short l_2376 = 0x52B0L;
                        if (g_2177[5])
                            break;
                        if (g_290[8][1])
                            continue;
                        l_1939 = ((1UL | 0xFBL) & (safe_lshift_func_int8_t_s_u(((g_191[1][6] = p_25) || g_2101), l_2376)));
                    }
                    l_1701 = (safe_add_func_int16_t_s_s(func_45((safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s(((l_2219[1] <= g_1634) <= func_63(p_25, func_71(l_2371, ((l_1939 = (safe_rshift_func_uint16_t_u_s((((l_2385 | g_290[8][1]) <= (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((0x79F02399L != (safe_rshift_func_int16_t_s_s((0x6CEBL & g_191[1][9]), 15))) ^ g_1919), l_1908)), p_25))) & p_25), 3))) <= l_1653)), p_25, p_25, p_25)), p_25)) > g_1520), g_2276)), g_1848, g_1937[3], g_274[7], p_25), g_2177[5]));
                }
                if (((safe_rshift_func_int8_t_s_u(0xE1L, 5)) != ((l_1939 & l_2085) | func_28(l_1886, l_1701, g_554))))
                {
                    unsigned l_2400 = 0x9FEBCE91L;
                    int l_2401 = 0xB4EF500EL;
                    for (g_2328 = 0; (g_2328 <= 0); g_2328 += 1)
                    {
                        int i;
                        l_1701 = ((safe_sub_func_int32_t_s_s((l_2401 = (g_1232[g_2328] | (l_2400 = func_63((g_1232[g_2328] > l_2044), ((safe_add_func_uint8_t_u_u(l_2353, l_2266[1][1])) | (l_2398[2][4] = (((l_2305 = g_191[1][3]) && p_25) < 1L))), (p_25 || 0L), p_25, l_2399)))), 0xBE2E758FL)) && g_2402);
                    }
                    for (g_403 = 28; (g_403 > 25); g_403--)
                    {
                        unsigned l_2424 = 0xB0300011L;
                        g_2177[5] = (p_25 = (safe_lshift_func_int8_t_s_s((l_2398[2][4] = ((safe_rshift_func_uint16_t_u_s((func_71((l_2401 = p_25), (((safe_mul_func_uint8_t_u_u((g_191[1][9] = func_71(((safe_mul_func_int8_t_s_s(func_63(l_2400, l_2413, p_25, p_25, (safe_mul_func_uint16_t_u_u((p_25 != (g_215 = (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((p_25 < 0xD57DL), ((g_2276 = g_935[0][2][6]) & 0x41C692A1L))), 249UL)) >= 1L), g_1766)), l_2195)))), g_198))), 0UL)) | g_381), l_2424)), 0UL)) <= p_25) > 1L)) ^ (-1L)), 3)) && 0UL)), 5)));
                        if (g_2177[1])
                            break;
                        p_25 = ((l_2425 = (l_2318 <= (l_1701 = g_8[3]))) == (safe_rshift_func_uint16_t_u_u(((l_2304 = ((l_2428 = (!(~g_290[8][1]))) & ((safe_add_func_int16_t_s_s(((g_935[0][0][1] = 0x18AF4B9DL) | (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_2435 = (-1L)), ((0xA2L == (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(p_25, g_198)), (safe_add_func_int16_t_s_s((l_1939 < l_2398[0][4]), p_25))))) & 0x7D5B2ECBL))), g_8[2]))), g_191[0][2])) == 0xE950L))) >= 0x1BL), l_2321[0])));
                    }
                    p_25 = func_63(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(l_2245, ((safe_mul_func_uint16_t_u_u((((((l_2305 = (safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((l_2401 ^ (g_1258 = (safe_rshift_func_int16_t_s_u(((g_1232[0] & func_71((((((safe_mul_func_uint16_t_u_u((l_2425 <= (safe_lshift_func_uint16_t_u_u((p_25 < ((safe_add_func_uint32_t_u_u(l_2219[4], (!(safe_mul_func_int8_t_s_s(func_71(g_105[7][1][0], ((l_2353 = 0xA78D0B82L) == (+((safe_mul_func_uint16_t_u_u((0x0D1DL == 0xE602L), 0xFD6FL)) ^ l_2413)))), 0x81L))))) && 0L)), 10))), g_1634)) || p_25) == (-6L)) == p_25) < p_25), g_935[0][2][3])) && g_935[0][0][1]), 7)))), 0L)) && g_290[8][1]), 254UL))) & (-7L)) | l_2428) & g_1950) != 253UL), g_403)) & 0xB907L))), 1)) > 0x59BEL), g_2276, p_25, l_2401, g_2303[4]);
                }
                else
                {
                    unsigned short l_2472 = 0x0E5EL;
                    int l_2480 = 0xA696AA6DL;
                    if ((g_1093 | ((safe_lshift_func_int16_t_s_u(g_241, 0)) && l_2304)))
                    {
                        return g_290[8][1];
                    }
                    else
                    {
                        g_2177[0] = (safe_lshift_func_int16_t_s_u((l_2399 > ((safe_unary_minus_func_uint8_t_u(((safe_add_func_int16_t_s_s(((1UL && (g_1520 = (l_2471 = p_25))) < p_25), 0xB1F4L)) || l_2344))) > 0UL)), 13));
                        p_25 = (~l_2472);
                        g_2276 = (g_2177[7] = (p_25 & 0xBFL));
                    }
                    p_25 = (safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((~(l_2428 = p_25)), (p_25 == p_25))) > p_25), (((l_2398[2][4] = g_241) != 0xE87B0F7FL) != (func_63(p_25, ((safe_rshift_func_int16_t_s_u(l_2472, ((safe_unary_minus_func_uint32_t_u(((l_2267[1] | 2UL) < 1UL))) & l_2219[2]))) & g_2402), l_1847, p_25, g_1919) != g_1937[4]))));
                    l_2480 = l_2044;
                    for (g_403 = 3; (g_403 >= 0); g_403 -= 1)
                    {
                        int i;
                        l_2304 = (g_2177[(g_403 + 2)] = g_2177[(g_403 + 4)]);
                        return g_2177[(g_403 + 1)];
                    }
                }
            }
            else
            {
                unsigned char l_2497 = 0xE5L;
                int l_2513 = 1L;
                for (g_1919 = (-24); (g_1919 >= (-21)); g_1919++)
                {
                    g_2177[8] = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(func_63((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((l_2304 = 0L) & (0x834BL || g_239)), (safe_sub_func_uint8_t_u_u((((l_2219[2] & l_2317) | p_25) | ((g_1406 = p_25) == ((p_25 >= p_25) <= l_2497))), 0xB0L)))), g_590)), 0UL)), p_25, g_1634, g_381, p_25), 0xDC23L)) && 0x2666CE28L), 7)), g_1520));
                    for (l_2025 = 12; (l_2025 <= 56); l_2025 = safe_add_func_uint32_t_u_u(l_2025, 7))
                    {
                        unsigned l_2504 = 0xECF999CAL;
                        int l_2505[10] = {0x0F19D99AL,0x652749DFL,0x0F19D99AL,0x652749DFL,0x0F19D99AL,0x652749DFL,0x0F19D99AL,0x652749DFL,0x0F19D99AL,0x652749DFL};
                        int i;
                        g_105[7][1][0] = (p_25 || (((safe_mul_func_uint16_t_u_u((p_25 & 0x2C715B24L), (l_2504 = (0L & g_241)))) < ((((p_25 != 0x3DL) != (func_63(g_340, p_25, l_2497, l_2505[1], p_25) < g_935[0][1][6])) <= 0x5BA3L) > 0x1CL)) < 1UL));
                        p_25 = g_191[1][9];
                    }
                }
                g_1093 = (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_25, (safe_lshift_func_uint8_t_u_s((g_191[0][9] = g_290[3][7]), 2)))), (safe_unary_minus_func_uint16_t_u(0x143AL))));
                l_2304 = ((+(l_2513 = l_1765[4][0][0])) ^ (safe_rshift_func_uint16_t_u_u((g_1232[0] = (safe_rshift_func_int16_t_s_u(g_480, 3))), 6)));
            }
            for (g_101 = 0; (g_101 != 29); g_101 = safe_add_func_uint8_t_u_u(g_101, 9))
            {
                unsigned l_2528[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                int l_2538[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_2538[i] = 0xDF1DD64CL;
                g_2177[5] = func_63((p_25 = (l_2528[5] = ((!(safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x4D7BD361L, (g_2101 = (l_2219[1] == 0xE5L)))), (~(safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_105[4][3][1], 6)) || (-1L)), 0)))))) || g_8[3]))), g_1093, (l_2304 = (-2L)), (safe_lshift_func_uint16_t_u_s(l_2305, g_1937[2])), l_2318);
                for (g_2058 = 0; (g_2058 <= 24); g_2058 = safe_add_func_int8_t_s_s(g_2058, 7))
                {
                    g_2177[0] = p_25;
                    if (p_25)
                        goto lbl_2533;
                }
                if (l_2156[2][4][4])
                    continue;
                l_2428 = ((l_2538[0] = ((safe_add_func_int8_t_s_s((g_381 <= g_513), l_2025)) >= (g_1424 == (safe_add_func_int16_t_s_s(p_25, l_2304))))) | ((((((safe_mul_func_int8_t_s_s((-1L), (!g_554))) > ((((g_290[5][5] = ((safe_add_func_int32_t_s_s(p_25, g_1258)) || l_2355)) <= 0xF3BEL) & (-1L)) == 1UL)) || p_25) && (-5L)) < 0xD29E8CA5L) ^ g_191[1][9]));
            }
        }
        return g_2328;
    }
    return l_1876;
}







static char func_28(unsigned p_29, int p_30, unsigned short p_31)
{
    int l_1463[1];
    int l_1472 = 2L;
    unsigned l_1475 = 1UL;
    short l_1547[5];
    int l_1591[3][1][8] = {{{0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L}},{{0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L}},{{0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L,0x1A98E03FL,0x681C1565L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1463[i] = 0xF64C4780L;
    for (i = 0; i < 5; i++)
        l_1547[i] = 0xED1AL;
    for (g_381 = 0; (g_381 == 14); g_381++)
    {
        unsigned l_1476 = 0x89C7B231L;
        int l_1496 = 0x4065F1F4L;
        int l_1511[3][10][8] = {{{(-3L),0x2803C85AL,1L,0x27334BF5L,0xDF203B45L,0L,0xD511C162L,9L},{1L,0x27334BF5L,(-7L),0x01E9FA1AL,0xDF203B45L,0x01E9FA1AL,(-7L),0x27334BF5L},{(-3L),9L,1L,9L,1L,0x01E9FA1AL,(-3L),0xDE0B5F09L},{0xDF203B45L,0x27334BF5L,1L,0x2803C85AL,(-3L),0L,0xD511C162L,0x27334BF5L},{1L,0x27334BF5L,1L,9L,0xDF203B45L,0xDE0B5F09L,1L,0x27334BF5L},{0xDF203B45L,0xDE0B5F09L,1L,0x27334BF5L,(-7L),0x01E9FA1AL,0xDF203B45L,0x01E9FA1AL},{0xDF203B45L,0x2803C85AL,0x2100034AL,0x2803C85AL,0xDF203B45L,(-2L),(-3L),9L},{1L,0x2803C85AL,(-7L),9L,0xD511C162L,0x01E9FA1AL,1L,0x2803C85AL},{(-3L),0xDE0B5F09L,(-7L),9L,(-7L),0xDE0B5F09L,(-3L),0x01E9FA1AL},{0xD511C162L,0x27334BF5L,0x2100034AL,9L,(-3L),(-2L),0xDF203B45L,0x2803C85AL}},{{1L,9L,1L,9L,(-3L),9L,1L,9L},{0xD511C162L,0xDE0B5F09L,1L,0x2803C85AL,(-7L),9L,0xD511C162L,0x01E9FA1AL},{(-3L),9L,0x2100034AL,0x27334BF5L,0xD511C162L,(-2L),0xD511C162L,0x27334BF5L},{1L,0x27334BF5L,1L,9L,0xDF203B45L,0xDE0B5F09L,1L,0x27334BF5L},{0xDF203B45L,0xDE0B5F09L,1L,0x27334BF5L,(-7L),0x01E9FA1AL,0xDF203B45L,0x01E9FA1AL},{0xDF203B45L,0x2803C85AL,0x2100034AL,0x2803C85AL,0xDF203B45L,0x27334BF5L,1L,0xDE0B5F09L},{0x2100034AL,0x01E9FA1AL,1L,(-9L),1L,(-2L),1L,0x01E9FA1AL},{1L,0L,1L,0xDE0B5F09L,1L,0L,1L,(-2L)},{1L,9L,0xDF203B45L,0xDE0B5F09L,1L,0x27334BF5L,(-7L),0x01E9FA1AL},{0x2100034AL,0xDE0B5F09L,1L,(-9L),1L,(-9L),1L,0xDE0B5F09L}},{{1L,0L,0x2100034AL,0x01E9FA1AL,1L,(-9L),1L,(-2L)},{1L,0xDE0B5F09L,0xDF203B45L,9L,1L,0x27334BF5L,1L,9L},{0x2100034AL,9L,0x2100034AL,(-9L),(-7L),0L,1L,9L},{(-7L),0L,1L,9L,1L,(-2L),(-7L),(-2L)},{(-7L),0x01E9FA1AL,0xDF203B45L,0x01E9FA1AL,(-7L),0x27334BF5L,1L,0xDE0B5F09L},{0x2100034AL,0x01E9FA1AL,1L,(-9L),1L,(-2L),1L,0x01E9FA1AL},{1L,0L,1L,0xDE0B5F09L,1L,0L,1L,(-2L)},{1L,9L,0xDF203B45L,0xDE0B5F09L,1L,9L,1L,9L},{1L,0x01E9FA1AL,0x2100034AL,0L,1L,0L,0x2100034AL,0x01E9FA1AL},{(-7L),(-2L),1L,9L,1L,0L,(-7L),(-9L)}}};
        int l_1546 = 2L;
        int i, j, k;
        g_105[5][0][0] = (p_30 = (l_1463[0] = g_513));
        if ((func_63(((p_31 = 0xECC5L) > ((safe_lshift_func_int16_t_s_u(((g_935[0][0][1] < (safe_mod_func_int32_t_s_s((-8L), (p_29 = g_198)))) || (safe_rshift_func_int16_t_s_u(func_63((safe_rshift_func_int8_t_s_s((l_1463[0] = (((g_191[1][9] > func_63(l_1472, g_590, l_1463[0], (safe_add_func_int8_t_s_s(p_30, p_30)), l_1475)) & l_1476) & p_30)), 0)), g_290[5][5], g_480, g_274[7], l_1476), l_1475))), g_8[3])) && g_1406)), g_274[4], g_215, l_1475, g_935[0][1][1]) == p_30))
        {
            return p_30;
        }
        else
        {
            char l_1483 = 7L;
            int l_1495 = 0x1F6F3D99L;
            if ((safe_mul_func_int8_t_s_s((p_30 & (safe_rshift_func_int8_t_s_u(l_1463[0], 7))), p_29)))
            {
                short l_1494 = 0x2B3EL;
                g_105[7][0][1] = ((func_71(p_30, (g_198 = ((safe_mul_func_uint8_t_u_u(l_1463[0], (((g_403 = func_63(g_935[0][0][6], g_480, l_1483, g_1232[0], (g_100 = (safe_rshift_func_uint8_t_u_u(((l_1496 = (safe_sub_func_int16_t_s_s((l_1495 = (l_1494 = (((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u(0x8725L, g_159)) ^ ((safe_mul_func_uint8_t_u_u(g_1406, p_30)) != 4UL)) | g_547), g_274[4])) >= g_340) | l_1483))), 0x67F2L))) || 0x11F9C337L), 7))))) < p_29) & 0x89CCC2B4L))) >= g_241))) & 0xB7L) != l_1475);
                for (g_403 = 23; (g_403 < 19); g_403--)
                {
                    for (p_30 = 0; (p_30 <= 0); p_30 += 1)
                    {
                        int i, j, k;
                        return g_935[p_30][p_30][(p_30 + 5)];
                    }
                    if (l_1496)
                        break;
                    return g_340;
                }
            }
            else
            {
                int l_1504 = 0xE00D3E69L;
                short l_1523 = 1L;
                unsigned short l_1524 = 0UL;
                int l_1525 = 0xC947247CL;
                for (g_238 = 1; (g_238 >= 0); g_238 -= 1)
                {
                    unsigned char l_1501 = 0x78L;
                    for (l_1483 = 0; (l_1483 <= 1); l_1483 += 1)
                    {
                        int i, j, k;
                        g_105[(l_1483 + 6)][(g_238 + 2)][l_1483] = (~(safe_lshift_func_int8_t_s_s(1L, 4)));
                        g_1093 = g_105[(l_1483 + 4)][(g_238 + 2)][l_1483];
                        p_30 = g_105[(g_238 + 3)][l_1483][g_238];
                        if (l_1501)
                            continue;
                    }
                }
                p_30 = 0xBD06FBFEL;
                g_105[7][0][0] = (g_340 >= (((safe_mod_func_uint8_t_u_u(p_31, (+((l_1496 = (l_1463[0] = l_1504)) == ((safe_rshift_func_uint8_t_u_s((g_590 = ((g_238 = p_30) <= l_1495)), (g_554 = (safe_lshift_func_uint8_t_u_s((g_403 >= (l_1511[0][4][6] = ((g_159 = l_1495) < g_565))), 7))))) != (-2L)))))) ^ p_31) <= g_1424));
                for (g_565 = 0; (g_565 <= 9); g_565 += 1)
                {
                    short l_1514 = 0x6439L;
                    int l_1532 = 0x5CBFC5EFL;
                    for (l_1476 = 1; (l_1476 <= 9); l_1476 += 1)
                    {
                        short l_1515 = (-1L);
                        int l_1526 = 0L;
                        if (p_29)
                            break;
                        p_30 = ((~((((((safe_lshift_func_int16_t_s_s(p_30, p_30)) >= func_63((l_1514 = p_30), p_31, g_8[3], (func_71((l_1515 == (g_239 && ((p_30 ^ (safe_sub_func_int8_t_s_s((((g_290[7][2] == 1UL) && 0x7948A2E8L) != 0x8279L), 0xC3L))) | l_1504))), l_1472) || p_29), l_1483)) <= p_30) > 0xDE706917L) < l_1476) ^ p_31)) | 0x95L);
                        l_1523 = (((l_1511[0][4][6] > (safe_mul_func_int8_t_s_s(((p_30 || (g_1520 <= (safe_rshift_func_uint8_t_u_u(func_63(g_105[7][1][0], l_1504, ((g_290[2][5] && p_29) < 4294967295UL), l_1511[0][3][1], l_1463[0]), l_1463[0])))) || (-5L)), 255UL))) ^ p_30) <= (-1L));
                        p_30 = (+(((g_1527 = (g_1093 = (g_105[7][1][0] = (((l_1526 = (func_71((!(p_29 = (p_31 & (((l_1524 = 0x84D24E27L) <= func_63(func_71(l_1514, g_1232[0]), g_1093, (l_1463[0] = 0x02L), g_274[7], (l_1525 = l_1475))) || p_31)))), g_935[0][0][3]) == 0x6D80L)) && g_935[0][0][1]) & l_1511[0][4][6])))) >= g_274[8]) < 0UL));
                    }
                    for (g_159 = 0; (g_159 <= 9); g_159 += 1)
                    {
                        short l_1535[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1535[i] = 0L;
                        p_30 = (safe_mul_func_uint8_t_u_u(g_381, 0UL));
                        g_105[7][1][0] = (g_547 ^ ((l_1532 = l_1483) <= (safe_lshift_func_uint16_t_u_u(p_31, l_1535[1]))));
                        if (l_1514)
                            continue;
                    }
                    g_1093 = 1L;
                    for (g_159 = 0; (g_159 <= 0); g_159 += 1)
                    {
                        int i, j, k;
                        g_105[(g_159 + 7)][g_159][(g_159 + 1)] = g_935[g_159][(g_159 + 1)][(g_159 + 3)];
                        return g_935[0][0][1];
                    }
                    for (g_101 = 0; (g_101 <= 1); g_101 += 1)
                    {
                        if (g_935[0][1][4])
                            break;
                        return p_31;
                    }
                }
            }
            g_238 = (l_1511[0][4][6] == p_30);
        }
        l_1463[0] = (func_71(p_31, (p_29 || ((4294967286UL != func_63(p_30, g_100, (safe_rshift_func_uint8_t_u_u(g_100, (l_1463[0] & g_1093))), (l_1496 = (l_1511[0][9][7] = (65529UL != p_31))), g_1520)) >= (-1L)))) | l_1463[0]);
        if ((g_1093 = (g_105[7][1][0] = 3L)))
        {
            char l_1554[3][10][8] = {{{0x3CL,(-4L),0xAAL,0xC0L,0xB0L,0xA3L,0x56L,(-1L)},{0x3AL,(-1L),(-1L),0x4FL,0L,0x4FL,(-1L),(-1L)},{(-1L),1L,0xBAL,0L,0x25L,(-1L),0x66L,0xC0L},{0x8BL,0x66L,0x4FL,0xAAL,(-1L),(-7L),0x66L,0x19L},{0x54L,0xAAL,0xBAL,(-1L),(-4L),(-4L),(-1L),0xBAL},{(-4L),(-4L),(-1L),0xBAL,0xAAL,0x54L,0x56L,0xB0L},{(-7L),(-1L),0xAAL,0x4FL,0x66L,0x8BL,0x0DL,0xB0L},{(-1L),0x25L,0L,0xBAL,1L,(-1L),1L,0xBAL},{0x4FL,0L,0x4FL,(-1L),(-1L),0x3AL,0L,0x19L},{0xA3L,0xB0L,0xC0L,0xAAL,0x25L,0xF7L,(-4L),(-7L)}},{{1L,0x25L,0xA3L,0x8BL,(-4L),0L,0L,(-4L)},{0xB0L,0x3CL,0x3CL,0xB0L,(-8L),(-1L),0xA3L,0x54L},{0x54L,0xC0L,0x19L,(-7L),0xBAL,0x54L,0L,0x8BL},{0xAAL,0xC0L,0xB0L,0xA3L,0x56L,(-1L),0xC0L,(-1L)},{0x25L,0x3CL,0x3AL,0x3CL,0x25L,0L,0x56L,0x3AL},{0x66L,0x25L,(-4L),0x19L,0x54L,0xF7L,0L,0x3CL},{0x0DL,0xA3L,(-4L),0xB0L,0L,(-1L),0x56L,0x56L},{0x54L,(-6L),0x3AL,0x3AL,(-6L),0x54L,0xC0L,0x19L},{(-1L),0L,0xB0L,(-4L),0xA3L,0x0DL,0L,(-1L)},{0xF7L,0x54L,0x19L,(-4L),0x25L,0x66L,0xA3L,0x19L}},{{0L,0x25L,0x3CL,0x3AL,0x3CL,0x25L,0L,0x56L},{(-1L),0x56L,0xA3L,0xB0L,0xA3L,(-8L),0x19L,0x4FL},{0x8BL,0x3CL,1L,0x25L,0xA3L,0x8BL,(-4L),0L},{0L,0x56L,0xC0L,0x4FL,0x4FL,0xC0L,0x56L,0L},{(-1L),0x19L,0x66L,(-7L),(-1L),0xAAL,0x4FL,0x66L},{0xB0L,(-1L),0x3AL,1L,(-7L),0xAAL,(-1L),0x8BL},{(-6L),0x19L,0x8BL,0xC0L,(-4L),0xC0L,0x8BL,0x19L},{0x8BL,0x56L,0xF7L,0x66L,0x54L,0x8BL,0x3CL,1L},{0xBAL,0x3CL,0xC0L,0x3AL,0x8BL,(-8L),0x3CL,0L},{0x0DL,0x3AL,0xF7L,0x8BL,(-1L),(-1L),0x8BL,0xF7L}}};
            int l_1555 = (-1L);
            int i, j, k;
            p_30 = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((g_1232[0] = (p_31 >= (func_71(func_63(p_30, g_241, p_30, p_29, (((l_1511[0][7][7] = 254UL) && ((safe_sub_func_uint8_t_u_u((func_63((((safe_rshift_func_uint8_t_u_u(func_63(l_1546, g_159, g_191[0][5], l_1463[0], l_1476), 1)) == p_29) < g_1406), g_403, g_1424, p_31, p_31) == 0x937B9592L), l_1546)) ^ p_29)) || l_1463[0])), p_29) != g_547))), p_29)) == g_935[0][0][2]), p_30));
            p_30 = (func_71(g_403, ((l_1547[3] && ((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((func_63(l_1546, g_215, (l_1554[1][1][7] = (safe_sub_func_int32_t_s_s(p_30, ((l_1511[0][4][6] = (g_215 ^ ((p_31 | func_63((l_1463[0] = l_1463[0]), p_31, g_191[1][7], g_1406, g_935[0][2][0])) & 7UL))) >= g_340)))), p_31, g_480) > g_1093), 0)), g_274[7])) & l_1546)) <= g_274[7])) | l_1555);
        }
        else
        {
            int l_1562[2][8][3] = {{{1L,0x32039196L,0x1DCA5F5BL},{1L,0x2A2931B5L,0xC4064D42L},{0x2A2931B5L,1L,0x1DCA5F5BL},{0x32039196L,1L,0x7752CACCL},{(-2L),0x2A2931B5L,0xF9BD50DFL},{0x32039196L,0x32039196L,0xF9BD50DFL},{0x2A2931B5L,(-2L),0x7752CACCL},{1L,0x32039196L,0x1DCA5F5BL}},{{1L,0x2A2931B5L,0xC4064D42L},{1L,(-1L),0x4A151818L},{(-1L),(-1L),0x32039196L},{0xB761899DL,1L,0x424F4BE5L},{(-1L),(-1L),0x424F4BE5L},{1L,0xB761899DL,0x32039196L},{(-1L),(-1L),0x4A151818L},{(-1L),1L,0x2A2931B5L}}};
            int i, j, k;
            for (g_238 = 0; (g_238 == (-3)); g_238--)
            {
                unsigned char l_1577 = 0x08L;
                unsigned short l_1579 = 1UL;
                unsigned l_1647 = 0xB6ED9B05L;
                for (p_31 = 28; (p_31 <= 4); --p_31)
                {
                    return p_29;
                }
                if (g_105[1][0][0])
                {
                    for (g_1258 = 0; (g_1258 <= 0); g_1258 += 1)
                    {
                        int i, j, k;
                        g_1093 = g_935[g_1258][g_1258][(g_1258 + 4)];
                        g_1093 = g_935[g_1258][g_1258][(g_1258 + 4)];
                        g_105[7][1][0] = (-3L);
                    }
                    g_105[5][0][0] = l_1547[3];
                    if ((safe_sub_func_int8_t_s_s(0x37L, (l_1562[0][7][2] <= 6L))))
                    {
                        unsigned l_1578[9] = {0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L,0x4DDC7CA9L};
                        int i;
                        p_30 = p_31;
                        g_105[5][2][0] = (((((g_1232[0] = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((g_935[0][2][5] & (((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((p_29 || g_238), (l_1577 = ((safe_sub_func_int16_t_s_s(p_30, 0xFC02L)) <= 65527UL)))), ((-1L) | p_31))) > p_31), l_1463[0])), l_1547[4])) < 0x75F5C0E1L) == 1L) < (-7L)) != l_1546)) <= g_274[7]) ^ g_1093), 7)), g_215))) >= g_935[0][0][1]) != l_1472) ^ l_1578[1]) & g_100);
                    }
                    else
                    {
                        p_30 = l_1579;
                    }
                    for (l_1475 = 21; (l_1475 == 21); ++l_1475)
                    {
                        p_30 = l_1577;
                        p_30 = p_31;
                        if (p_30)
                            continue;
                        if (p_29)
                            continue;
                    }
                }
                else
                {
                    short l_1608 = 0x271DL;
                    int l_1619 = 0xFE586296L;
                    if ((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(p_30, 3)) != g_101), (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(g_403)), l_1591[1][0][6])), (safe_lshift_func_int16_t_s_u(l_1476, (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(g_215, 2)), (safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((0L <= (safe_mod_func_int32_t_s_s((p_29 <= ((safe_sub_func_int32_t_s_s(l_1562[0][7][2], l_1546)) == l_1496)), p_31))), l_1476)), 11)))))))))))
                    {
                        p_30 = ((l_1608 = (safe_lshift_func_uint8_t_u_s(l_1562[1][0][0], l_1496))) == 1L);
                        return p_29;
                    }
                    else
                    {
                        short l_1609 = (-1L);
                        int l_1618 = (-8L);
                        p_30 = p_30;
                        l_1609 = 0x7FD8438FL;
                        l_1511[0][4][6] = (p_31 >= (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_30, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(6UL, (((l_1618 = p_29) & ((l_1619 = (g_1527 = g_547)) <= (safe_rshift_func_uint16_t_u_s((0xD442A281L == (l_1472 >= g_403)), 4)))) != ((safe_mul_func_uint16_t_u_u(((l_1608 & l_1562[0][0][2]) < 0xE10DL), g_1232[0])) != l_1608)))), p_29)))), l_1609)));
                    }
                    return g_480;
                }
                for (l_1476 = 0; (l_1476 <= 0); l_1476 += 1)
                {
                    int i;
                    p_30 = (((8UL < (safe_mod_func_int16_t_s_s((g_1232[l_1476] != ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((!((safe_sub_func_int8_t_s_s(((g_101 = g_1232[l_1476]) != 0x86L), ((p_31 = ((safe_lshift_func_uint16_t_u_u(0xA190L, 5)) >= p_30)) & ((g_290[6][4] && (~(((((((g_1527 = (g_340 >= (4294967295UL != 0L))) < 0UL) == l_1562[0][7][2]) | g_1634) || 0x949621F0L) <= l_1577) ^ l_1577))) >= g_381)))) >= 0x83L)), g_1232[0])), 10)) == g_274[0])), l_1511[1][7][3]))) < l_1476) | l_1562[0][1][2]);
                    if (((p_30 && (+g_1634)) == g_159))
                    {
                        p_30 = 0xBBD228E8L;
                    }
                    else
                    {
                        p_30 = (p_31 != g_1424);
                    }
                    l_1647 = (safe_mod_func_int8_t_s_s(l_1562[0][7][0], (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(0xC1L, (safe_mul_func_uint8_t_u_u(l_1579, 1UL)))) | (0L | (safe_add_func_int32_t_s_s((l_1511[2][4][4] != (l_1577 > ((safe_rshift_func_int8_t_s_s(l_1562[0][7][2], 7)) || (-1L)))), g_554)))), 0))));
                    p_30 = g_215;
                }
            }
        }
    }
    p_30 = (p_29 && (safe_rshift_func_int16_t_s_s(l_1472, 0)));
    for (g_1634 = 0; (g_1634 > 5); ++g_1634)
    {
        unsigned char l_1652 = 0xC6L;
        p_30 = g_100;
        g_238 = l_1652;
    }
    return l_1591[2][0][6];
}







static unsigned char func_39(int p_40, short p_41, int p_42, unsigned p_43, unsigned short p_44)
{
    int l_53 = 0x4911CCFEL;
    int l_84 = 0x12CF720AL;
    unsigned l_1410 = 0xE2C5D6C3L;
    unsigned l_1415 = 0UL;
    short l_1434 = (-1L);
    int l_1441 = (-1L);
    if (g_8[3])
    {
        unsigned short l_54[6];
        int l_278 = 0L;
        short l_1363 = 0x9D63L;
        int l_1366 = 0x62D0F952L;
        int i;
        for (i = 0; i < 6; i++)
            l_54[i] = 0x6AB8L;
        if ((func_45((safe_mul_func_uint16_t_u_u(l_53, (l_54[1] <= (l_54[3] ^ (safe_sub_func_int8_t_s_s((g_8[2] <= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_278 = (safe_sub_func_uint16_t_u_u(func_63((safe_mod_func_uint16_t_u_u(func_71((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_54[1] <= (l_84 = p_40)), (safe_add_func_int16_t_s_s(((l_54[0] || (safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(g_8[3], 0xB277L)) != g_8[3]), p_40))) && 0x04L), g_8[3])))), p_40)), 0x28L)), p_44)), 12)), p_43), g_8[3])), p_43, l_54[1], p_42, g_274[7]), p_40))), g_274[3])), p_43))), 1UL)))))), g_8[3], g_8[3], p_44, g_274[3]) <= l_53))
        {
            char l_1349 = (-3L);
            int l_1350 = 0x1925851DL;
            p_42 = (safe_sub_func_int32_t_s_s(0L, ((p_41 = ((safe_mul_func_uint8_t_u_u(g_935[0][2][5], (l_54[1] | ((l_54[1] >= l_278) & 0xD13DL)))) || (func_71(l_54[1], g_105[3][1][1]) > g_1093))) | p_40)));
            p_42 = ((!(safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((0xBCL >= (((p_43 & (l_84 = p_42)) && (p_42 < g_340)) != (-10L))) | p_41) <= l_1349), 6)), p_40))) < 0xE322L);
            l_1350 = p_43;
        }
        else
        {
            int l_1351 = (-5L);
            int l_1354 = 9L;
            if ((g_8[3] > p_44))
            {
                unsigned short l_1360 = 0x9BD8L;
                p_40 = l_1351;
                for (g_100 = 0; (g_100 <= 1); g_100 += 1)
                {
                    short l_1352 = (-1L);
                    int l_1353 = 0xB28DE141L;
                    l_1352 = (-1L);
                    for (p_41 = 5; (p_41 >= 0); p_41 -= 1)
                    {
                        int i, j;
                        if (g_274[p_41])
                            break;
                        if (l_54[(g_100 + 1)])
                            continue;
                        l_1353 = g_191[g_100][(g_100 + 2)];
                    }
                    if ((l_1354 = p_44))
                    {
                        return g_238;
                    }
                    else
                    {
                        unsigned char l_1359 = 0xCFL;
                        l_1353 = (((0xB4A3DC53L == 1L) != ((((l_1360 = ((safe_rshift_func_int8_t_s_u(g_8[3], (safe_add_func_uint8_t_u_u((p_41 & (((l_84 ^ 0xA0C6L) > ((p_44 ^ p_44) != 0x35E60AE7L)) >= l_84)), (-1L))))) >= l_1359)) > 0x4DL) >= 3L) != p_41)) && l_53);
                        p_40 = l_278;
                        if (l_1359)
                            break;
                        g_1093 = ((g_1232[0] != (((l_1363 = l_1360) > ((safe_mul_func_int16_t_s_s(g_159, l_1353)) <= p_42)) == (g_101 = (!l_1366)))) >= g_290[5][5]);
                    }
                }
            }
            else
            {
                unsigned char l_1382 = 0xF6L;
                int l_1404 = (-10L);
                if ((p_42 = p_42))
                {
                    unsigned l_1373 = 1UL;
                    unsigned short l_1378 = 7UL;
                    for (g_198 = (-7); (g_198 > (-26)); g_198--)
                    {
                        int l_1381[10][7][3] = {{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)}},{{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,(-2L)},{0xB53FCEECL,0xB53FCEECL,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL}},{{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL}},{{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL},{0L,0L,0xB53FCEECL}}};
                        int i, j, k;
                        g_1093 = (safe_mod_func_int8_t_s_s(p_42, (safe_mod_func_uint8_t_u_u((l_1373 = p_43), ((safe_mul_func_int8_t_s_s(l_84, (4294967293UL <= (g_1232[0] <= (l_1354 = (safe_add_func_uint32_t_u_u(9UL, l_1378))))))) && p_42)))));
                        g_238 = (g_1093 = g_381);
                        if (l_1378)
                            break;
                        p_40 = (g_238 ^ (safe_sub_func_int32_t_s_s(l_84, l_1381[8][3][0])));
                    }
                    l_1382 = p_41;
                }
                else
                {
                    int l_1387[7] = {0xA59F056BL,0xA59F056BL,(-9L),0xA59F056BL,0xA59F056BL,(-9L),0xA59F056BL};
                    int l_1405[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1405[i] = 1L;
                    g_105[7][1][0] = func_71((func_45(p_41, g_381, (safe_mod_func_uint32_t_u_u(func_71(g_1232[0], p_43), 0x62A86444L)), g_565, (0xEEL || (safe_lshift_func_int16_t_s_s((p_43 > l_1351), g_590)))) ^ l_1387[1]), l_1382);
                    for (p_42 = 0; (p_42 <= 9); p_42 += 1)
                    {
                        int l_1407 = 0xBE171D37L;
                        int i;
                        l_1405[6] = (p_40 = ((g_274[p_42] > (l_1404 = func_71(g_101, (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(1L, g_513)), (safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((func_63(((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_63(l_53, p_43, l_1387[1], (safe_add_func_uint16_t_u_u((1L < ((-1L) != g_101)), 0x58C1L)), g_935[0][2][1]), 6L)), p_44)) >= 65535UL), 3L)) ^ (-6L)), p_41, l_1351, l_1354, g_274[p_42]) & g_274[7]), p_40)), 3))))))) > 0xD59B8F57L));
                        if (p_42)
                            continue;
                        g_1093 = (l_1405[0] = ((g_274[p_42] = func_63(g_105[5][0][1], g_274[7], p_42, l_53, g_1406)) | p_42));
                        l_1415 = func_45((g_191[1][9] = (((0xB2L || (func_63(g_239, g_1232[0], (p_43 && (l_1407 = g_274[p_42])), p_44, (g_381 = (safe_mul_func_uint16_t_u_u((!(l_1410 = 5UL)), (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_1404, (g_935[0][2][2] = g_105[7][1][0]))), 0x3AA2L)))))) || l_54[4])) == p_41) == g_340)), g_547, p_44, p_40, g_159);
                    }
                }
                p_42 = 0xED21C08CL;
                p_40 = (func_63((safe_lshift_func_uint16_t_u_u((p_44 = ((safe_mul_func_uint8_t_u_u(func_63((g_238 = ((0x2BL == ((((1UL <= p_43) <= 0x07B56897L) <= (-5L)) <= p_41)) >= 6UL)), p_41, ((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((p_40 == p_41), l_1404)), 5)) && 0x1B22CA08L), g_403, p_43), 0xCBL)) < l_1404)), 11)), p_42, p_41, p_42, l_1382) && 0xFFE5L);
                g_1093 = p_42;
            }
            g_105[5][3][0] = g_1424;
        }
    }
    else
    {
        unsigned l_1427 = 0UL;
        for (g_340 = (-23); (g_340 >= 5); g_340 = safe_add_func_int8_t_s_s(g_340, 8))
        {
            return l_1427;
        }
        g_238 = ((p_43 = (g_935[0][0][1] = 0xCBCD4887L)) >= (((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_1410, (g_191[0][3] = p_41))), (g_8[0] >= g_274[7]))) >= (g_513 = (!((-1L) ^ (((l_53 || ((p_40 == l_84) != l_53)) != l_1427) >= l_1427))))) < p_40));
    }
    l_1441 = (g_159 == (func_63(((0x1D20L <= (((l_84 = func_63(g_198, l_1434, l_1434, g_1424, (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((((((g_198 | (p_41 ^ ((safe_lshift_func_int8_t_s_u((l_53 = (-4L)), 7)) >= 0x65F9L))) | l_1434) ^ 0xC010L) & 0x712CE7DFL) != 0x88EA7CBFL), 0x69L)), 0L)))) != l_1410) < l_1415)) != g_1424), g_513, g_191[1][9], p_40, l_1415) & l_1434));
    for (l_1441 = 26; (l_1441 < 19); --l_1441)
    {
        int l_1458 = 1L;
        g_105[7][1][0] = g_290[2][7];
        for (g_480 = 9; (g_480 <= 34); g_480++)
        {
            short l_1459 = 0xAE53L;
            l_53 = func_71(g_8[3], (safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u((g_1232[0] = (g_191[1][9] & ((safe_sub_func_int32_t_s_s((-1L), (0UL || l_53))) == (safe_add_func_uint8_t_u_u((p_42 >= ((safe_add_func_int8_t_s_s((~0xD0L), (func_63((safe_unary_minus_func_uint32_t_u((g_935[0][1][1] = (g_274[7] ^ (safe_mod_func_uint32_t_u_u(((((l_1458 != 0x521AL) == l_53) || p_44) & l_1459), p_43)))))), l_1459, p_43, g_403, g_1406) && 0xD55FL))) & p_43)), p_40))))), g_1093)))));
        }
    }
    return g_590;
}







static short func_45(unsigned char p_46, unsigned short p_47, char p_48, unsigned short p_49, unsigned short p_50)
{
    unsigned l_279 = 4294967291UL;
    int l_280 = 1L;
    int l_305[4];
    int l_317 = 0x88A1ECCEL;
    unsigned l_335 = 0x78BD2505L;
    short l_382 = 3L;
    int l_437 = 1L;
    unsigned short l_452 = 0x6D13L;
    unsigned l_471[7][5] = {{0xC162A538L,1UL,1UL,0xC162A538L,1UL},{0xC162A538L,0xC162A538L,4294967290UL,0xC162A538L,0xC162A538L},{1UL,0xC162A538L,1UL,1UL,0xC162A538L},{0xC162A538L,1UL,1UL,0xC162A538L,1UL},{0xC162A538L,0xC162A538L,4294967290UL,0xC162A538L,0xC162A538L},{1UL,0xC162A538L,1UL,1UL,0xC162A538L},{0xC162A538L,1UL,1UL,0xC162A538L,1UL}};
    int l_598 = 0x288793AEL;
    char l_662 = 0x45L;
    int l_691 = 0L;
    unsigned l_711 = 0UL;
    short l_932 = 0L;
    int l_1074[5][2][10];
    unsigned l_1123[4] = {0x5EC29793L,0x5EC29793L,0x5EC29793L,0x5EC29793L};
    char l_1181 = 0x8BL;
    unsigned l_1230 = 3UL;
    unsigned l_1235 = 0x1CBC3BB1L;
    int l_1264 = 1L;
    short l_1340 = 0x7659L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_305[i] = 7L;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
                l_1074[i][j][k] = (-1L);
        }
    }
lbl_386:
    l_280 = l_279;
lbl_336:
    for (g_100 = 0; (g_100 == 30); g_100++)
    {
        unsigned char l_289 = 0xBEL;
        for (p_49 = (-12); (p_49 > 28); p_49 = safe_add_func_uint16_t_u_u(p_49, 8))
        {
            unsigned l_297 = 6UL;
            int l_298 = 0x88E90C7FL;
            l_298 = (safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s((-8L), (((l_289 = 0L) || p_50) <= (g_290[8][1] = g_198)))) != (((safe_rshift_func_int16_t_s_u((safe_mul_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(g_274[7], 255UL)), (l_297 >= p_50))), 0)) && p_49) && g_105[0][1][0])), 0xC9FD5306L));
            for (g_101 = 0; (g_101 <= 1); g_101 += 1)
            {
                int i, j;
                l_298 = g_191[g_101][(g_101 + 8)];
            }
            return l_289;
        }
        for (g_159 = (-8); (g_159 == 51); ++g_159)
        {
            if (g_8[3])
                break;
            return p_47;
        }
    }
    if ((!(func_63(p_46, (l_280 = ((safe_add_func_uint16_t_u_u((l_305[3] = (safe_rshift_func_uint8_t_u_u(g_191[1][9], 7))), (safe_unary_minus_func_uint16_t_u(((0x231CL < (safe_mul_func_int16_t_s_s(func_63((g_105[7][1][0] = (safe_rshift_func_int8_t_s_u(func_63(l_279, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(p_50, (p_47 = (((p_50 | p_46) | ((3UL || ((0UL <= (-9L)) || 0x9E3A8099L)) != 0x13L)) | p_48)))), g_105[7][1][0])), 7)), g_8[4], g_191[1][9], l_280), 3))), l_280, p_49, l_280, g_101), l_280))) >= l_279))))) >= g_8[3])), l_279, l_317, p_46) <= 8L)))
    {
        int l_328 = (-3L);
        int l_339 = 0xB23F12BDL;
        int l_350 = 0x046853EEL;
lbl_383:
        for (l_279 = 3; (l_279 <= 9); l_279 += 1)
        {
            unsigned char l_329 = 0xC8L;
            int l_332 = 0xBA54FB76L;
            unsigned short l_374[3];
            int i;
            for (i = 0; i < 3; i++)
                l_374[i] = 65529UL;
            if (p_49)
            {
                short l_333 = 1L;
                int l_334[6] = {0xE566E3EBL,2L,2L,0xE566E3EBL,2L,2L};
                int i;
                for (g_101 = 0; (g_101 <= 3); g_101 += 1)
                {
                    int i, j;
                    return g_290[(g_101 + 5)][(g_101 + 5)];
                }
                l_334[2] = ((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((p_48 = (safe_rshift_func_int16_t_s_u(((l_280 = (((safe_mul_func_uint16_t_u_u(0xCC1EL, (safe_rshift_func_uint8_t_u_s(p_46, l_279)))) > 0x49L) > (g_241 = l_328))) | (l_305[3] = l_329)), (p_49 = (safe_mul_func_int8_t_s_s(1L, 0UL)))))), (l_332 = l_328))) || l_333), 65535UL)) >= 65534UL);
            }
            else
            {
                l_335 = g_105[7][1][0];
                return g_101;
            }
            for (g_198 = 3; (g_198 >= 0); g_198 -= 1)
            {
                short l_337 = 1L;
                unsigned char l_338 = 5UL;
                int l_345 = 0L;
                for (p_47 = 0; (p_47 <= 3); p_47 += 1)
                {
                    int i;
                    if (l_305[g_198])
                    {
                        int i;
                        if (l_332)
                            break;
                        l_305[p_47] = ((p_48 = 0L) != (l_335 > g_290[8][1]));
                    }
                    else
                    {
                        if (g_101)
                            goto lbl_336;
                        l_337 = 0x3895B77DL;
                        g_105[7][2][1] = l_332;
                        return g_290[9][9];
                    }
                    l_339 = l_338;
                    return l_305[g_198];
                }
                if ((0UL ^ p_48))
                {
                    for (g_159 = 0; (g_159 <= 9); g_159 += 1)
                    {
                        unsigned l_353[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_353[i] = 0x48F689BCL;
                        l_345 = (func_63((g_191[1][3] <= ((~((g_340 >= ((((safe_lshift_func_uint16_t_u_u((g_239 == (p_48 || 1UL)), (l_337 != p_50))) > g_198) & (safe_sub_func_uint8_t_u_u(255UL, p_48))) < g_105[7][1][0])) || p_50)) < 0x7C3FL)), p_46, g_191[1][2], l_339, g_198) || p_50);
                        l_345 = g_239;
                        l_339 = func_63(g_100, (safe_add_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((l_305[2] = l_350), p_50)) > (safe_add_func_int32_t_s_s(((0x01L <= (!l_328)) && ((g_290[8][1] || l_353[0]) & ((g_8[3] >= (safe_sub_func_uint16_t_u_u(g_100, g_290[8][1]))) != 0x99ECC58AL))), 0x5DE7C9B5L))) || (-5L)), l_345)), p_46, p_47, g_191[0][2]);
                        l_345 = (g_105[7][1][0] = l_338);
                    }
                }
                else
                {
                    unsigned l_358 = 0x75DDC7E6L;
                    int l_359 = 0xAA570827L;
                    g_105[0][3][0] = l_332;
                    g_238 = (safe_lshift_func_int8_t_s_u(p_50, 6));
                    l_358 = l_332;
                    l_359 = (g_105[7][1][0] = (-3L));
                }
                for (p_49 = 0; (p_49 <= 9); p_49 += 1)
                {
                    unsigned short l_362 = 0x98A4L;
                    int l_365[9][5][5] = {{{0x3A752138L,0xA3D67732L,0x00D3A472L,1L,1L},{1L,1L,1L,0L,0x783CF02EL},{3L,0x50483217L,0x00D3A472L,0x6F0C6B03L,(-1L)},{0x937C08C9L,1L,1L,(-2L),0L},{(-9L),0xAB85CC2FL,0x00D3A472L,(-1L),0x41935C84L}},{{0x3EE06602L,(-4L),1L,(-4L),(-4L)},{0x00D3A472L,1L,0x00D3A472L,9L,0x6F0C6B03L},{0x4EE25936L,(-1L),1L,0x783CF02EL,2L},{0xD2A75425L,0x315EC5F7L,0x00D3A472L,0x41935C84L,9L},{(-1L),0x9D87B19FL,1L,2L,(-2L)}},{{0x3A752138L,0xA3D67732L,0x00D3A472L,1L,1L},{1L,1L,1L,0L,0x783CF02EL},{3L,0x50483217L,0x00D3A472L,0x6F0C6B03L,(-1L)},{0x937C08C9L,1L,1L,(-2L),0L},{(-9L),0xAB85CC2FL,0x00D3A472L,(-1L),0x41935C84L}},{{0x3EE06602L,(-4L),1L,(-4L),(-4L)},{0x00D3A472L,1L,0x00D3A472L,9L,0x6F0C6B03L},{0x4EE25936L,(-1L),1L,0x783CF02EL,0x1ECF0ED0L},{1L,0x77D0D0EEL,(-1L),0x45C02AA0L,0xE8CB6491L},{(-2L),(-10L),2L,0x1ECF0ED0L,0xF36DEE72L}},{{9L,1L,(-1L),0xA5227337L,0xA5227337L},{2L,5L,2L,0xC77C6FB8L,(-1L)},{0x6F0C6B03L,(-1L),(-1L),0L,(-10L)},{(-4L),0x473E17FFL,2L,0xF36DEE72L,0xC77C6FB8L},{0x41935C84L,(-1L),(-1L),(-10L),0x45C02AA0L}},{{0L,9L,2L,7L,7L},{(-1L),0xBBA175D5L,(-1L),0xE8CB6491L,0L},{0x783CF02EL,0x306CAAE0L,2L,(-1L),0x1ECF0ED0L},{1L,0x77D0D0EEL,(-1L),0x45C02AA0L,0xE8CB6491L},{(-2L),(-10L),2L,0x1ECF0ED0L,0xF36DEE72L}},{{9L,1L,(-1L),0xA5227337L,0xA5227337L},{2L,5L,2L,0xC77C6FB8L,(-1L)},{0x6F0C6B03L,(-1L),(-1L),0L,(-10L)},{(-4L),0x473E17FFL,2L,0xF36DEE72L,0xC77C6FB8L},{0x41935C84L,(-1L),(-1L),(-10L),0x45C02AA0L}},{{0L,9L,2L,7L,7L},{(-1L),0xBBA175D5L,(-1L),0xE8CB6491L,0L},{5L,0xC77C6FB8L,(-10L),0x3EE06602L,(-1L)},{0x77D0D0EEL,0xA5227337L,(-1L),3L,0xD2A75425L},{9L,0x1ECF0ED0L,(-10L),(-1L),0x4EE25936L}},{{(-1L),0x45C02AA0L,(-1L),0x00D3A472L,0x00D3A472L},{(-10L),(-1L),(-10L),0x937C08C9L,0x3EE06602L},{0xBBA175D5L,0xE8CB6491L,(-1L),0x3A752138L,(-9L)},{0x473E17FFL,7L,(-10L),0x4EE25936L,0x937C08C9L},{1L,(-10L),(-1L),(-9L),3L}}};
                    int i, j, k;
                    for (l_332 = 2; (l_332 <= 9); l_332 += 1)
                    {
                        int i, j;
                        l_365[4][2][3] = (((((!(func_63(g_290[l_332][(g_198 + 3)], (l_337 && 0xC1L), g_105[7][1][0], ((safe_sub_func_int8_t_s_s((g_215 && ((l_362 = 0x0D97L) != (l_328 == 0xFFL))), (safe_lshift_func_uint8_t_u_u((+g_274[7]), l_365[5][2][3])))) ^ 0xE970L), l_280) >= l_329)) | g_159) ^ 6L) && (-6L)) == p_50);
                    }
                }
                l_305[2] = func_63(l_305[0], (((safe_mul_func_uint8_t_u_u(l_337, ((((l_280 = g_238) != (p_49 ^ (3L < ((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((safe_add_func_int16_t_s_s(l_374[1], l_345)) > g_239) & ((+l_279) > l_374[0])), l_350)), l_328)) < g_8[3])))) >= l_305[3]) > l_305[1]))) && l_345) && g_8[3]), p_47, g_100, g_8[3]);
            }
            g_105[7][1][0] = p_49;
            for (l_280 = 6; (l_280 >= 3); l_280 -= 1)
            {
                unsigned short l_375 = 0x2FF5L;
                return l_375;
            }
        }
        for (g_238 = 0; (g_238 <= 9); g_238 += 1)
        {
            int l_400 = (-5L);
            int l_404 = 0x07635F20L;
            int i;
            g_105[7][1][0] = g_274[g_238];
            for (g_215 = 0; (g_215 <= 1); g_215 += 1)
            {
                int i, j;
                if ((g_191[g_215][(g_215 + 8)] > (p_50 = ((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s((g_290[(g_215 + 2)][(g_215 + 3)] & (!(g_290[g_238][(g_215 + 4)] == (0x02L <= ((((0x106AA308L >= g_274[g_238]) & (0x96L != (safe_unary_minus_func_int8_t_s(g_290[0][7])))) && (g_381 = g_159)) <= g_274[g_238]))))), 4L)), p_50)) | 1UL))))
                {
                    short l_384 = 0L;
                    int l_385 = (-1L);
                    for (g_340 = 0; (g_340 <= 1); g_340 += 1)
                    {
                        int i, j, k;
                        g_105[(g_340 + 3)][(g_215 + 2)][g_340] = g_105[(g_215 + 2)][(g_340 + 2)][g_215];
                    }
                    if (l_382)
                    {
                        if (g_340)
                            goto lbl_383;
                    }
                    else
                    {
                        l_350 = (-1L);
                        return l_384;
                    }
                    if ((l_385 = p_47))
                    {
                        if (l_279)
                            break;
                        return p_47;
                    }
                    else
                    {
                        char l_397[10][5] = {{(-1L),0x7FL,(-1L),(-6L),0x35L},{9L,0xA2L,9L,(-3L),(-3L)},{(-1L),0x7FL,(-1L),(-6L),0x35L},{9L,0xA2L,9L,(-3L),(-3L)},{(-1L),0x7FL,(-1L),(-6L),0x35L},{9L,0xA2L,9L,(-3L),(-3L)},{(-1L),0x7FL,(-1L),(-6L),0x35L},{9L,0xA2L,9L,(-3L),(-3L)},{(-1L),0x7FL,(-1L),(-6L),0x35L},{9L,0xA2L,9L,(-3L),(-3L)}};
                        int i, j;
                        if (l_280)
                            goto lbl_386;
                        g_105[7][1][0] = (safe_unary_minus_func_int32_t_s(((safe_unary_minus_func_int8_t_s((2L | g_241))) != ((0xC3L == (g_340 = (((safe_add_func_int32_t_s_s(p_49, (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_403 = (safe_mul_func_int16_t_s_s(l_397[8][1], ((((safe_sub_func_int16_t_s_s(g_105[2][1][0], (l_400 = (g_274[(g_215 + 1)] = (l_382 || l_339))))) > (safe_mod_func_uint16_t_u_u(0xD2D6L, 0xB8B4L))) || 6UL) >= g_290[g_238][(g_215 + 4)])))), l_404)), 65527UL)))) >= l_339) || 0x9C4A044FL))) ^ p_46))));
                        l_385 = (~l_404);
                    }
                }
                else
                {
                    for (g_198 = 1; (g_198 >= 0); g_198 -= 1)
                    {
                        int i, j, k;
                        g_105[(g_215 + 1)][g_215][g_198] = (safe_lshift_func_int8_t_s_s(g_105[(g_215 + 1)][(g_198 + 2)][g_198], 4));
                        if (g_191[g_215][g_238])
                            break;
                        if (p_49)
                            break;
                    }
                    g_105[6][2][1] = (g_215 | 0xDC27C539L);
                    for (g_101 = 0; (g_101 <= 1); g_101 += 1)
                    {
                        int i, j, k;
                        g_105[(g_215 + 4)][(g_101 + 1)][g_101] = g_105[(g_215 + 6)][(g_215 + 2)][g_215];
                        return g_105[7][1][0];
                    }
                }
            }
            l_350 = (l_339 = l_305[3]);
            return p_49;
        }
    }
    else
    {
        short l_409 = 0xAA15L;
        unsigned l_449[6][7][5] = {{{0x0C919450L,4294967290UL,0x8CF2076DL,1UL,1UL},{8UL,0x55FFDFC6L,1UL,4294967291UL,0UL},{0x4B737E82L,4294967287UL,0x07027B51L,0UL,4294967289UL},{0xA75DFBF6L,0x867E601EL,0x7BC36D1EL,0UL,0xB82F5DE2L},{4294967295UL,4294967295UL,0x8D379353L,1UL,0x750D6847L},{0x55FFDFC6L,0x8804C869L,0x4473B238L,0x5492EFACL,4294967287UL},{0x55FFDFC6L,4294967286UL,1UL,1UL,1UL}},{{4294967295UL,1UL,4294967287UL,4294967293UL,0x5492EFACL},{0xA75DFBF6L,0x4473B238L,0x332C5152L,0x4473B238L,0xA75DFBF6L},{0x4B737E82L,4294967287UL,0UL,0x7DE6980EL,4294967287UL},{8UL,0xE89176C1L,0x8CF2076DL,0x98828342L,4294967295UL},{0UL,4294967294UL,4294967289UL,4294967287UL,4294967287UL},{0x3BF4510FL,0x98828342L,1UL,4UL,0xA75DFBF6L},{4294967287UL,0x07027B51L,0UL,4294967289UL,0x5492EFACL}},{{4UL,0x33AA8436L,4294967295UL,0x07027B51L,1UL},{0x98828342L,0x4B737E82L,4294967295UL,4294967293UL,4294967287UL},{0UL,0x8D379353L,1UL,4294967293UL,0x750D6847L},{4294967293UL,0xAAB17E02L,4294967286UL,0x07027B51L,0xB82F5DE2L},{4294967290UL,4294967291UL,0x0C919450L,4294967289UL,4294967289UL},{0xAAB17E02L,0x3BF4510FL,0xAAB17E02L,4UL,0UL},{0x8804C869L,0xEE46ED0BL,0xE89176C1L,0x55FFDFC6L,0UL}},{{0xEE46ED0BL,0x3BF4510FL,0UL,0x4473B238L,0x8D379353L},{1UL,1UL,0xE89176C1L,0UL,4294967289UL},{4294967294UL,0x8804C869L,0x7DE6980EL,0x33AA8436L,0x750D6847L},{4294967290UL,1UL,0xEE46ED0BL,1UL,0x4B737E82L},{4294967286UL,4294967294UL,0x867E601EL,0x517274A1L,0UL},{0UL,0x4B737E82L,0x517274A1L,0x98828342L,4UL},{0x5492EFACL,0x4B737E82L,0x0C919450L,0xA75DFBF6L,1UL}},{{4294967295UL,4294967294UL,0UL,0UL,0x8CF2076DL},{1UL,1UL,4294967287UL,4294967287UL,1UL},{0x8D379353L,0x8804C869L,8UL,0xF9480F9DL,0UL},{0x5A436E0FL,1UL,0xF3D40963L,0x867E601EL,0UL},{0xF3D40963L,0x3BF4510FL,4294967293UL,0x5A436E0FL,4294967286UL},{0x5A436E0FL,0xEE46ED0BL,0UL,0x93A8FCBEL,4294967287UL},{0x8D379353L,4294967295UL,4294967295UL,0UL,0x93A8FCBEL}},{{1UL,0xF9480F9DL,0x332C5152L,0x3BF4510FL,0x517274A1L},{4294967295UL,0x7DE6980EL,4294967291UL,0x332C5152L,4294967295UL},{0x5492EFACL,0xC9078721L,0x33AA8436L,1UL,4294967295UL},{0UL,0x750D6847L,0xC9078721L,0x07027B51L,0x517274A1L},{4294967286UL,0x5492EFACL,0x55FFDFC6L,0UL,0xAAB17E02L},{1UL,0x98828342L,0x98828342L,1UL,0x332C5152L},{0xC9078721L,0x4B737E82L,0xAAB17E02L,0x7DE6980EL,0x98828342L}}};
        int l_453 = (-5L);
        int l_515 = 1L;
        int l_516 = 0xCEA65AFAL;
        char l_595[3];
        int l_644 = 0xE42CC349L;
        unsigned char l_685 = 0x96L;
        unsigned l_797[3];
        int l_878 = 0L;
        unsigned short l_931 = 9UL;
        unsigned l_976[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_595[i] = 0x0EL;
        for (i = 0; i < 3; i++)
            l_797[i] = 0x66BD1D94L;
lbl_801:
        if (p_49)
        {
            unsigned char l_414[9][8][2] = {{{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L}},{{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L}},{{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL}},{{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L}},{{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L}},{{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL}},{{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L}},{{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L}},{{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL},{0xA2L,0x16L},{0x45L,0x16L},{0xA2L,7UL}}};
            unsigned l_422 = 0x6F5B800BL;
            int l_450 = (-1L);
            unsigned short l_451 = 0UL;
            int i, j, k;
            if (g_381)
            {
                unsigned l_419 = 9UL;
                int l_421 = 1L;
                g_238 = g_8[3];
                for (g_159 = (-16); (g_159 == 25); g_159 = safe_add_func_int16_t_s_s(g_159, 8))
                {
                    unsigned l_420 = 0x2A8EBCE3L;
                    l_409 = (0x82F9B401L >= g_274[3]);
                    g_105[7][1][0] = ((g_8[3] <= (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_63((l_414[6][3][1] ^ (l_409 && g_198)), l_409, g_215, ((((p_46 || (g_159 && (safe_rshift_func_int16_t_s_s((l_419 = (g_290[3][3] = ((g_381 = (safe_mul_func_int16_t_s_s(g_101, l_280))) >= g_403))), 15)))) && p_49) < g_191[0][9]) | l_420), l_421), p_48)), p_49))) | l_409);
                    g_238 = l_420;
                }
                l_421 = ((l_422 && g_191[1][7]) > (((g_105[7][1][0] > ((safe_add_func_int8_t_s_s((0x60L != 0x07L), (((((g_198 ^ ((+p_47) != (l_422 <= g_105[1][3][0]))) > g_340) ^ p_49) > g_105[7][1][0]) > 0x64E2L))) | 0x9AE4B778L)) > 65527UL) || (-3L)));
            }
            else
            {
                int l_438[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int i;
                l_437 = ((l_280 = (safe_rshift_func_uint16_t_u_u((1L > p_49), p_49))) != ((l_305[3] = func_71((safe_rshift_func_uint16_t_u_u((g_101 ^ 9UL), 9)), (((safe_sub_func_int8_t_s_s(g_105[2][3][0], (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_46, p_49)), l_422)))) >= 0x3A6CL) & p_47))) <= p_46));
                l_438[3] = l_414[6][3][1];
            }
            l_453 = (((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_451 = (g_340 != func_63((g_105[7][1][0] = (l_450 = (~((l_317 == (func_71(p_49, g_191[1][9]) <= (((l_449[0][1][1] == (0x8C0FL | 0x779FL)) & l_409) > 0L))) ^ g_403)))), p_46, g_274[7], g_274[7], p_50))), 12)), 249UL)), 0x4143L)), 0xF3AEL)) && 1UL) ^ l_452);
        }
        else
        {
            unsigned short l_454 = 65527UL;
            int l_495 = 0x1A024BE7L;
            unsigned short l_496 = 0x04A0L;
            int l_514[5][5] = {{3L,3L,3L,3L,3L},{0x054B2352L,0x054B2352L,0x054B2352L,0x054B2352L,0x054B2352L},{3L,3L,3L,3L,3L},{0x054B2352L,0x054B2352L,0x054B2352L,0x054B2352L,0x054B2352L},{3L,3L,3L,3L,3L}};
            int i, j;
            g_238 = (~(p_48 & (g_105[4][1][1] = l_454)));
            for (p_49 = 0; (p_49 >= 28); ++p_49)
            {
                int l_477[9] = {(-6L),0L,(-6L),0L,(-6L),0L,(-6L),0L,(-6L)};
                unsigned short l_479 = 0x71C2L;
                char l_494 = 0x0FL;
                int l_497 = 0xCAB1AF46L;
                int i;
                for (p_47 = (-15); (p_47 > 14); p_47++)
                {
                    unsigned short l_478 = 65532UL;
                    int l_481 = 0x214B1B1BL;
                    for (p_48 = 28; (p_48 != (-9)); p_48--)
                    {
                        short l_476[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_476[i] = 0x668AL;
                        l_481 = (safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s(0L, (((((safe_rshift_func_uint8_t_u_u(p_49, 2)) ^ (safe_add_func_int8_t_s_s(((l_437 = func_71((safe_unary_minus_func_int8_t_s((g_480 = (((l_471[6][2] = l_279) != g_105[7][1][0]) == ((((safe_mul_func_uint8_t_u_u(g_274[7], 0x99L)) || 0x9E1A0F77L) && (((safe_rshift_func_int16_t_s_u(0x1E71L, 0)) == (p_46 = (((l_478 = (((((l_476[6] | p_46) & g_403) >= l_454) <= g_8[3]) <= l_477[8])) & l_479) & p_47))) > 0xE65CL)) || 0x39L))))), g_274[7])) ^ 0L), l_481))) ^ p_49) | 0x434BL) ^ 0x29EAL))))) & 1UL), 12));
                        l_497 = ((safe_sub_func_uint16_t_u_u(func_63(((safe_sub_func_int8_t_s_s(((p_50 = ((func_71((l_495 = ((safe_rshift_func_uint8_t_u_u((p_46 = ((safe_lshift_func_uint8_t_u_u((g_105[7][1][0] == (safe_sub_func_uint8_t_u_u(p_47, 0L))), (((((p_49 & g_198) > ((safe_lshift_func_int8_t_s_s(((0x26D7L == p_48) && (p_50 == g_105[7][1][0])), 3)) & 0xA0D4L)) >= 0xE2L) & p_50) < 3UL))) == l_494)), 0)) < 1UL)), p_50) > l_494) == 0L)) & p_48), g_290[0][5])) ^ g_8[4]), l_454, p_48, l_496, g_8[3]), p_47)) <= p_47);
                    }
                    for (g_238 = 0; (g_238 > 17); g_238 = safe_add_func_int16_t_s_s(g_238, 9))
                    {
                        unsigned l_508 = 7UL;
                        l_516 = ((p_49 && (l_515 = ((l_514[1][2] = (l_495 || ((l_305[3] = (safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((g_513 = (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((l_497 == g_215), (g_105[3][1][0] > ((l_453 = l_508) & ((0x0030L != (l_481 = p_49)) >= (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((g_340 > l_305[3]), l_317)), 0x3868L))))))), g_290[8][0]))) ^ g_239), l_449[2][1][4])), 5))) & l_497))) || p_46))) < 0x95L);
                    }
                }
                for (l_479 = 7; (l_479 >= 21); ++l_479)
                {
                    int l_532 = 4L;
                    int l_533[6][8][2] = {{{0xDA62F983L,0L},{0x68829679L,0xCC561CFEL},{0xCC561CFEL,0x579FE4CAL},{0x55AE0107L,0x9365E1F1L},{7L,(-1L)},{1L,(-4L)},{0L,(-1L)},{0x579FE4CAL,1L}},{{(-4L),1L},{0x579FE4CAL,(-1L)},{0L,(-4L)},{1L,(-1L)},{7L,0x9365E1F1L},{0x55AE0107L,0x579FE4CAL},{0xCC561CFEL,0xCC561CFEL},{0x68829679L,0L}},{{0xDA62F983L,2L},{2L,9L},{0x87AD1A9DL,2L},{(-1L),0xE3F82A7CL},{(-1L),2L},{0x87AD1A9DL,9L},{2L,2L},{0xDA62F983L,0L}},{{0x68829679L,0xCC561CFEL},{0xCC561CFEL,0x579FE4CAL},{0x55AE0107L,0x9365E1F1L},{7L,(-1L)},{1L,(-4L)},{0L,(-1L)},{0x579FE4CAL,1L},{(-4L),1L}},{{0x579FE4CAL,(-1L)},{0L,(-4L)},{1L,(-1L)},{7L,0x9365E1F1L},{0x55AE0107L,0x579FE4CAL},{0xCC561CFEL,0xCC561CFEL},{0x68829679L,0L},{0xDA62F983L,0xF8349A52L}},{{0x9365E1F1L,1L},{0xBE0CA507L,0x9365E1F1L},{0x87AD1A9DL,0xCC561CFEL},{0x87AD1A9DL,0x9365E1F1L},{0xBE0CA507L,1L},{0x9365E1F1L,0xF8349A52L},{2L,(-1L)},{0xFB7DD05BL,9L}}};
                    int l_534[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_534[i] = (-2L);
                    for (l_335 = 0; (l_335 == 31); l_335 = safe_add_func_uint16_t_u_u(l_335, 7))
                    {
                        unsigned l_523[9][10] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
                        int i, j;
                        if (l_471[6][2])
                            break;
                        g_238 = (safe_lshift_func_uint16_t_u_u(l_495, 6));
                        l_523[5][0] = (0x5623L > 0x8AD1L);
                    }
                    if (l_516)
                    {
                        l_534[0] = (((l_533[0][4][1] = (safe_sub_func_int16_t_s_s((p_46 >= ((+(safe_add_func_int16_t_s_s(p_46, g_290[8][1]))) < ((safe_mod_func_int16_t_s_s((l_452 >= (safe_lshift_func_int16_t_s_u((l_305[0] = (l_514[1][2] = (g_403 = l_514[3][1]))), ((l_382 >= (g_241 <= (((9UL && p_48) <= p_48) | 3UL))) == g_381)))), l_515)) != 0x5BL))), l_532))) == g_290[4][7]) == 0x72D18507L);
                    }
                    else
                    {
                        l_514[1][2] = l_514[1][4];
                        g_105[7][1][0] = (1UL || (g_105[1][2][1] | g_340));
                    }
                }
                l_437 = l_279;
            }
            for (l_335 = 0; (l_335 <= 4); l_335 += 1)
            {
                g_105[0][0][0] = ((0x1298L && ((p_48 >= (l_449[5][6][3] & ((safe_add_func_int32_t_s_s(g_159, ((((g_105[7][1][0] >= (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_514[0][0], 7)), (safe_rshift_func_uint8_t_u_u(p_46, 2))))) > (safe_sub_func_int16_t_s_s(4L, (safe_mod_func_uint8_t_u_u((((g_547 = p_47) & p_48) || 0x93758207L), 255UL))))) < p_49) ^ l_514[1][2]))) & 0x0FE1FD14L))) == l_317)) <= l_449[1][2][2]);
                for (g_100 = 0; (g_100 <= 4); g_100 += 1)
                {
                    int i, j;
                    g_105[7][1][0] = (l_514[l_335][l_335] = l_471[(l_335 + 1)][g_100]);
                    if ((l_495 = (safe_rshift_func_int8_t_s_s(g_547, 1))))
                    {
                        return p_50;
                    }
                    else
                    {
                        int l_563[6][1][6] = {{{0x6CBC3899L,(-8L),(-8L),0x6CBC3899L,(-8L),(-8L)}},{{0x6CBC3899L,(-8L),(-8L),0x6CBC3899L,(-8L),(-8L)}},{{0x6CBC3899L,(-8L),(-8L),0x6CBC3899L,(-8L),(-8L)}},{{0x6CBC3899L,(-8L),(-8L),0x6CBC3899L,(-8L),(-8L)}},{{0x6CBC3899L,(-8L),(-8L),0x6CBC3899L,(-8L),(-8L)}},{{0x6CBC3899L,(-8L),(-8L),0x6CBC3899L,(-8L),(-8L)}}};
                        short l_564[9][6][4] = {{{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L},{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L}},{{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L},{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L}},{{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L},{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L}},{{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L},{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L}},{{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L},{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L}},{{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0xEA54L},{0xEA54L,0L,0L,0xEA54L},{0L,0xEA54L,0L,0L},{0xEA54L,0xEA54L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0xEA54L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0xEA54L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0xEA54L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0xEA54L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0xEA54L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0xEA54L,0L}}};
                        int i, j, k;
                        l_564[2][3][1] = (safe_lshift_func_uint8_t_u_s(((((l_305[3] = l_495) <= p_48) && ((safe_add_func_int8_t_s_s((g_554 = (p_48 = g_274[7])), l_471[1][4])) != p_49)) != (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_514[l_335][l_335] = (((safe_sub_func_int32_t_s_s(g_8[3], (p_46 && (l_563[4][0][4] && g_238)))) || 0x81L) || 0L)), l_496)), g_8[4])), 2))), 4));
                    }
                    for (l_453 = 0; (l_453 <= 4); l_453 += 1)
                    {
                        int i, j, k;
                        l_514[l_335][l_335] = l_449[(g_100 + 1)][l_335][l_335];
                        return g_105[7][1][0];
                    }
                }
                if (p_46)
                {
                    unsigned l_566 = 3UL;
                    g_105[5][3][1] = g_105[7][1][0];
                    if (g_565)
                    {
                        int l_567 = (-1L);
                        l_567 = (0x9CD9A14BL == l_566);
                    }
                    else
                    {
                        l_453 = 0x7164215AL;
                    }
                }
                else
                {
                    return l_449[0][0][2];
                }
                return g_290[8][6];
            }
            for (g_241 = 14; (g_241 == 24); g_241++)
            {
                int l_577 = (-3L);
                unsigned l_591 = 1UL;
                l_280 = (p_49 && ((safe_lshift_func_int16_t_s_s(l_514[1][2], 15)) && (((safe_sub_func_uint16_t_u_u(g_274[7], (p_49 <= ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((l_577 = g_159))), (safe_add_func_int8_t_s_s(((9L < p_50) ^ (safe_sub_func_int32_t_s_s(l_382, 0xAF15180CL))), p_50)))) > g_215)))) || 0x7030L) || 1UL)));
                if (((p_50 > p_47) & ((safe_lshift_func_int16_t_s_u(p_47, (safe_sub_func_uint32_t_u_u(p_48, (+((func_63((safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((g_100 ^ p_49), 0x50L)) < l_514[1][3]), 6)), (g_513 = ((!l_454) && p_50)), g_340, l_437, g_274[9]) != 0L) >= 4294967295UL)))))) || 0x5AE54645L)))
                {
                    unsigned short l_592 = 0xA512L;
                    int l_632 = 0xEFC2515AL;
                    l_495 = func_63(g_590, g_290[3][9], ((g_547 == g_8[3]) ^ (!(p_47 != (p_50 = (g_554 | (l_591 < p_47)))))), p_46, p_47);
                    if (func_63(p_49, g_274[7], (((p_47 & (l_305[2] = l_592)) != l_592) > (safe_mod_func_int32_t_s_s(l_595[2], l_592))), (l_453 = (safe_sub_func_int8_t_s_s(((3L || p_47) && l_598), 250UL))), l_514[0][1]))
                    {
                        unsigned l_609 = 0x15DEC2AFL;
                        int l_610 = 0xB63C599EL;
                        l_610 = (l_514[3][4] = ((g_403 = (l_515 = func_63((l_516 = (!0xF96DE882L)), (l_592 <= func_63(((safe_lshift_func_int8_t_s_s((g_241 == (safe_sub_func_int8_t_s_s(0x5CL, ((p_50 == l_595[2]) & (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(p_47, 15)), g_8[3])))))), 5)) >= ((((safe_add_func_uint8_t_u_u((p_46 = (p_50 || p_50)), p_50)) > g_513) < p_50) <= p_47)), p_49, g_198, p_49, p_49)), g_8[5], g_241, l_609))) > 0UL));
                    }
                    else
                    {
                        if (l_592)
                            break;
                        l_514[4][2] = g_274[3];
                    }
                    if ((safe_rshift_func_uint16_t_u_s(p_50, func_63((safe_lshift_func_uint16_t_u_u((p_49 > (safe_mul_func_uint16_t_u_u((g_239 = g_513), (p_50 | (((g_191[1][9] & l_591) & 0UL) > p_49))))), (g_480 = (p_50 && g_198)))), l_514[3][3], p_47, g_101, g_340))))
                    {
                        g_238 = g_105[7][1][0];
                    }
                    else
                    {
                        return g_513;
                    }
                    if ((safe_sub_func_uint16_t_u_u(l_382, g_480)))
                    {
                        l_598 = (safe_lshift_func_int16_t_s_s((((p_50 = 0xD6A4L) != (g_215 != (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int16_t_s_u(0x9466L, 13)))))) | (((safe_mod_func_uint8_t_u_u((l_632 = 0x46L), (p_46 | 0x452D3279L))) & (safe_rshift_func_int8_t_s_u((l_335 < func_63(l_454, ((g_100 = ((l_516 = l_598) ^ g_403)) <= g_274[7]), p_49, p_48, p_48)), p_46))) > l_335)), l_515));
                    }
                    else
                    {
                        int l_643 = 0x2F74404EL;
                        int l_645 = 0x2D4E2B11L;
                        l_645 = (p_47 != (((g_8[1] && (g_8[3] ^ 4294967295UL)) > ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((((g_590 <= l_453) >= func_63(((safe_mul_func_int8_t_s_s(((((p_46 = (g_215 >= (safe_lshift_func_uint16_t_u_u(func_63(p_47, p_47, g_198, g_480, g_100), 14)))) && l_643) | l_644) ^ p_49), g_590)) == l_515), g_590, l_305[1], p_47, l_496)) <= g_381) != 0xC4DA79ADL) <= g_215), 6)), l_495)) == (-6L))) ^ p_50));
                        l_437 = g_480;
                        g_105[7][1][0] = (!5L);
                        if (g_191[1][9])
                            continue;
                    }
                }
                else
                {
                    unsigned char l_648[9] = {0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L,0x71L};
                    int i;
                    l_453 = (l_495 | p_48);
                    if ((safe_rshift_func_int8_t_s_s(g_101, 3)))
                    {
                        return l_598;
                    }
                    else
                    {
                        l_648[2] = 0xA9E9963DL;
                        if (g_159)
                            break;
                        g_105[7][1][0] = l_382;
                        l_514[1][2] = g_340;
                    }
                    if (l_496)
                        goto lbl_336;
                }
            }
        }
        if (((((((l_305[3] = (safe_sub_func_int8_t_s_s((g_554 = l_471[3][0]), (g_191[0][5] = (l_471[0][1] | l_449[0][1][1]))))) >= (safe_add_func_int32_t_s_s(p_48, g_215))) >= 0UL) != (safe_mod_func_int8_t_s_s(l_437, 0x44L))) >= (safe_rshift_func_int8_t_s_s(g_8[3], g_241))) != p_49))
        {
            unsigned short l_661 = 9UL;
            int l_664[7][8][4] = {{{(-4L),1L,0L,9L},{0L,9L,0x5EED4764L,(-3L)},{0x0BF7F7E5L,(-5L),(-1L),(-6L)},{0x0BF7F7E5L,1L,4L,9L},{0x5EED4764L,(-5L),0x5EED4764L,1L},{0x420F348BL,(-5L),4L,9L},{0x0BF7F7E5L,1L,0L,(-5L)},{0x5EED4764L,9L,0L,1L}},{{0x0BF7F7E5L,(-6L),4L,(-6L)},{0x420F348BL,1L,0x5EED4764L,(-6L)},{0x5EED4764L,(-6L),4L,1L},{(-4L),9L,4L,(-5L)},{(-4L),1L,4L,9L},{0x5EED4764L,(-5L),0x5EED4764L,1L},{0x420F348BL,(-5L),4L,9L},{0x0BF7F7E5L,1L,0L,(-5L)}},{{0x5EED4764L,9L,0L,1L},{0x0BF7F7E5L,(-6L),4L,(-6L)},{0x420F348BL,1L,0x5EED4764L,(-6L)},{0x5EED4764L,(-6L),4L,1L},{(-4L),9L,4L,(-5L)},{(-4L),1L,4L,9L},{0x5EED4764L,(-5L),0x5EED4764L,1L},{0x420F348BL,(-5L),4L,9L}},{{0x0BF7F7E5L,1L,0L,(-5L)},{0x5EED4764L,9L,0L,1L},{0x0BF7F7E5L,(-6L),4L,(-6L)},{0x5EED4764L,(-1L),4L,(-3L)},{4L,(-3L),0x38AB6708L,(-1L)},{0L,1L,0x0BF7F7E5L,1L},{0L,(-1L),0x38AB6708L,1L},{4L,1L,4L,(-1L)}},{{0x5EED4764L,1L,0x0BF7F7E5L,1L},{4L,(-1L),(-1L),1L},{4L,1L,(-1L),(-1L)},{4L,(-3L),0x0BF7F7E5L,(-3L)},{0x5EED4764L,(-1L),4L,(-3L)},{4L,(-3L),0x38AB6708L,(-1L)},{0L,1L,0x0BF7F7E5L,1L},{0L,(-1L),0x38AB6708L,1L}},{{4L,1L,4L,(-1L)},{0x5EED4764L,1L,0x0BF7F7E5L,1L},{4L,(-1L),(-1L),1L},{4L,1L,(-1L),(-1L)},{4L,(-3L),0x0BF7F7E5L,(-3L)},{0x5EED4764L,(-1L),4L,(-3L)},{4L,(-3L),0x38AB6708L,(-1L)},{0L,1L,0x0BF7F7E5L,1L}},{{0L,(-1L),0x38AB6708L,1L},{4L,1L,4L,(-1L)},{0x5EED4764L,1L,0x0BF7F7E5L,1L},{0L,0x5F9D856CL,4L,1L},{0x38AB6708L,(-3L),4L,(-1L)},{0L,1L,(-4L),1L},{4L,0x5F9D856CL,0x38AB6708L,1L},{0x38AB6708L,1L,(-1L),(-1L)}}};
            int l_688[4][9][7] = {{{0x6C123407L,2L,0xC16ACE80L,0xCA00D178L,0xF32CCDE0L,0xCA00D178L,0xC16ACE80L},{0xE676AEBCL,0xE676AEBCL,(-9L),0x8DAC1B87L,0xD9BC8764L,(-8L),1L},{0x5F9EBD64L,(-1L),(-3L),0x62CA3F5BL,0L,1L,2L},{1L,(-4L),0L,0x3979BA6BL,0xD9BC8764L,0xA5616BC6L,(-4L)},{0xC16ACE80L,0xF32CCDE0L,(-2L),(-2L),0xF32CCDE0L,0xC16ACE80L,0L},{0xA5616BC6L,0xD9BC8764L,0x3979BA6BL,0L,(-4L),1L,0x2DBF884CL},{1L,0L,0x62CA3F5BL,(-3L),(-1L),0x5F9EBD64L,0x32F21633L},{(-8L),0xD9BC8764L,0x8DAC1B87L,(-9L),0xE676AEBCL,0xE676AEBCL,(-9L)},{0xCA00D178L,0xF32CCDE0L,0xCA00D178L,0xC16ACE80L,2L,0x6C123407L,0xF32CCDE0L}},{{(-9L),(-4L),0L,0x100512A1L,0xDDCF5EA2L,(-9L),1L},{0xFE404648L,(-1L),2L,0xCA00D178L,1L,2L,0x32F21633L},{(-2L),1L,0xF0D8FE8CL,0x2EDDF720L,0xF0D8FE8CL,1L,(-2L)},{0xF32CCDE0L,0L,0xFE404648L,0x5F9EBD64L,1L,(-8L),1L},{0L,0x8DAC1B87L,0x3979BA6BL,1L,(-8L),0xD9BC8764L,0x8DAC1B87L},{(-7L),8L,0xFE404648L,0xCA00D178L,(-2L),(-7L),(-2L)},{0x3979BA6BL,0xF0D8FE8CL,0xF0D8FE8CL,0x3979BA6BL,0xFD4C106EL,(-9L),0x8E2F843EL},{0x56865955L,1L,0L,0xE332F299L,(-7L),0L,0xF32CCDE0L},{(-4L),(-8L),0xA5616BC6L,0xE676AEBCL,1L,0xDDCF5EA2L,0x8E2F843EL}},{{0xC16ACE80L,(-2L),(-1L),1L,1L,(-1L),(-2L)},{(-8L),0xFD4C106EL,0L,0x36796E81L,0x4145FA17L,(-8L),0x8DAC1B87L},{0x62CA3F5BL,(-7L),0x32F21633L,(-1L),0L,0x997E2886L,1L},{0x8D2291B2L,1L,0x8E2F843EL,0x36796E81L,0xE676AEBCL,(-2L),(-2L)},{1L,1L,0x6C123407L,1L,1L,0xF32CCDE0L,0x32F21633L},{0x2DBF884CL,0x4145FA17L,0x3979BA6BL,0xE676AEBCL,0x8E2F843EL,0L,0x4145FA17L},{(-7L),0L,(-8L),1L,0x5F9EBD64L,0xFE404648L,0L},{0L,0xA5616BC6L,0x36796E81L,0x100512A1L,0xE676AEBCL,0x100512A1L,0x36796E81L},{0xC16ACE80L,0xC16ACE80L,0xFE404648L,0L,0x6C123407L,0x997E2886L,2L}},{{0xD9BC8764L,1L,0x8D2291B2L,0x2EDDF720L,(-9L),0x3979BA6BL,0xA5616BC6L},{(-2L),0x5F9EBD64L,(-3L),0xD07CF2C0L,0x6C123407L,8L,0x5F9EBD64L},{0x36796E81L,0xE676AEBCL,(-2L),(-2L),0xE676AEBCL,0x36796E81L,0x8E2F843EL},{8L,0x6C123407L,0xD07CF2C0L,(-3L),0x5F9EBD64L,(-2L),0xE332F299L},{0x3979BA6BL,(-9L),0x2EDDF720L,0x8D2291B2L,1L,0xD9BC8764L,0x2DBF884CL},{0x997E2886L,0x6C123407L,0L,0xFE404648L,0xC16ACE80L,0xC16ACE80L,0xFE404648L},{0x100512A1L,0xE676AEBCL,0x100512A1L,0x36796E81L,0xA5616BC6L,0L,0xE676AEBCL},{0xFE404648L,0x5F9EBD64L,1L,(-8L),1L,0xFE404648L,(-7L)},{0x8DAC1B87L,1L,0xA5616BC6L,0x100512A1L,(-8L),0L,0x2EDDF720L}}};
            unsigned l_779[4] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL};
            int i, j, k;
lbl_778:
            for (g_590 = 0; (g_590 != 57); g_590 = safe_add_func_uint32_t_u_u(g_590, 8))
            {
                unsigned l_663 = 1UL;
                unsigned l_665 = 4294967295UL;
                int l_666 = 1L;
                if (p_50)
                    break;
                if (l_453)
                    continue;
                l_666 = (func_63((l_665 = (l_516 = (safe_add_func_uint16_t_u_u(l_661, (((l_449[0][1][1] <= 1L) & func_71(p_47, l_662)) & (l_664[6][5][1] = (~((p_48 | (((l_663 < (-7L)) == p_49) || p_50)) >= p_46)))))))), g_381, p_48, p_46, p_48) <= l_595[0]);
            }
            l_515 = ((safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((l_664[6][5][1] = (l_685 = (((0xBDL | ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(0x8C43L, g_239)) < (g_590 ^ (g_547 = g_290[2][0]))), (p_47 < p_46))), 5)) == (((255UL && ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_8[0], 0x4840L)), p_47)) || 0x74L)) & l_661) >= 65535UL))) | 4UL) & g_554))) & l_279), 0x54D9L)), 255UL)) <= p_49);
            if (((safe_lshift_func_int8_t_s_u(p_47, p_48)) <= (((l_664[6][2][2] = l_279) <= l_661) <= ((l_515 = p_48) | (func_63(g_215, (((l_688[3][3][1] = p_49) ^ 0x980CL) == ((l_661 >= l_595[2]) < 0xAECDB1CBL)), g_191[1][9], l_280, g_239) <= l_661)))))
            {
                char l_700 = 6L;
                int l_712 = 0L;
                unsigned short l_730 = 65529UL;
                int l_755 = 0xCBE97719L;
lbl_714:
                l_664[4][0][0] = (safe_lshift_func_uint8_t_u_s(l_691, ((l_437 = g_274[7]) < (1L >= (func_63(p_47, ((((~(func_63((safe_sub_func_uint32_t_u_u((l_712 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((func_63(((g_8[3] == ((safe_sub_func_uint8_t_u_u((func_63(l_700, (g_290[9][5] = (g_403 = ((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0xAEF0L, 8L)), 7)) | (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((((safe_lshift_func_uint16_t_u_s(l_688[3][3][1], 8)) == 0x25FEL) >= 1L) < p_50), g_215)), l_664[6][5][1]))))), l_449[5][0][1], g_191[0][0], g_513) == g_274[7]), l_700)) >= 0x34L)) ^ 0x5B0969CFL), g_554, p_46, p_50, l_711) || 0xEEB5L), 6)), p_46))), l_335)), g_215, g_513, p_46, g_480) != g_191[1][1])) <= l_644) == (-1L)) > p_49), p_46, p_46, p_49) == p_49)))));
lbl_735:
                for (g_198 = 1; (g_198 >= 0); g_198 -= 1)
                {
                    unsigned l_713 = 4294967295UL;
                    for (g_241 = 1; (g_241 <= 9); g_241 += 1)
                    {
                        int i;
                        l_664[6][1][2] = (0x24L && g_274[g_198]);
                        if (g_274[(g_198 + 1)])
                            break;
                        l_664[3][5][2] = g_274[g_241];
                    }
                    for (g_239 = 0; (g_239 <= 1); g_239 += 1)
                    {
                        int i;
                        l_713 = g_274[(g_239 + 1)];
                    }
                    for (p_50 = 0; (p_50 <= 9); p_50 += 1)
                    {
                        int l_715[5][6] = {{0x4D02DB66L,(-1L),0x4D02DB66L,0L,0L,0x4D02DB66L},{1L,1L,0L,(-1L),1L,(-1L)},{1L,(-1L),0x4D02DB66L,0x4D02DB66L,(-1L),1L},{(-1L),1L,0x4D02DB66L,1L,(-1L),(-1L)},{0L,1L,1L,0L,(-1L),0L}};
                        int i, j;
                        g_238 = (l_712 = 0L);
                        if (l_691)
                            goto lbl_714;
                        g_105[2][3][1] = (g_274[(g_198 + 4)] < ((l_715[2][4] = (g_274[p_50] && p_49)) <= l_305[3]));
                    }
                }
                for (g_565 = 0; (g_565 <= 1); g_565 += 1)
                {
                    int l_734 = 0xAAEE9508L;
                    int l_754 = 0xFB1B904AL;
                    int l_776 = 0xC7D61F1BL;
                    int i;
                    if (g_274[(g_565 + 7)])
                    {
                        g_105[7][1][0] = (safe_lshift_func_int16_t_s_u((((l_453 = (safe_lshift_func_int8_t_s_s(p_47, 1))) > ((safe_lshift_func_int16_t_s_s(g_340, (0xCF9DC08CL || (0xF9E4L && (((-1L) != p_47) <= (safe_mod_func_int16_t_s_s(g_381, (safe_lshift_func_int8_t_s_s(func_63((g_191[0][1] >= (safe_mod_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u(l_712, 0x2CL)) > 0xFAL) && 0xB499L), g_513))), g_159, g_105[3][0][1], l_712, p_46), 3))))))))) > l_730)) == 0x9EL), 10));
                        l_664[6][5][1] = (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((g_105[7][1][0] >= g_513))), 3));
                    }
                    else
                    {
                        l_734 = 0x124BA91BL;
                        if (g_381)
                            goto lbl_735;
                    }
                    g_105[1][3][0] = (safe_lshift_func_int8_t_s_u((0x83BCL & (g_547 && p_50)), (safe_sub_func_uint16_t_u_u(p_50, p_48))));
                    for (l_598 = 0; (l_598 <= 1); l_598 += 1)
                    {
                        int l_777 = 1L;
                        int i;
                        l_755 = (safe_mod_func_int8_t_s_s(0xB4L, (safe_mul_func_uint8_t_u_u((g_590 = 0x2AL), ((g_290[8][1] == p_46) <= (g_554 = ((-9L) || (l_664[6][5][1] = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((-1L), (safe_rshift_func_uint8_t_u_u(func_71(g_480, (safe_rshift_func_int8_t_s_u((((safe_sub_func_int16_t_s_s((g_274[l_598] = (g_290[6][8] == l_754)), g_215)) == p_49) <= p_48), p_46))), 1)))), 14))))))))));
                        l_777 = (safe_add_func_int8_t_s_s(0x96L, (safe_rshift_func_int16_t_s_u(((g_274[(g_565 + 7)] > (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((4L == (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0UL, func_63((((safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((func_71(p_46, ((l_280 & func_63((l_515 = (func_63(((g_381 = ((l_305[1] = func_71(g_274[l_598], l_644)) | 9L)) > 0x92594432L), l_516, p_46, g_290[8][1], g_274[6]) && 0x849F931CL)), l_754, l_471[6][2], p_46, p_49)) ^ p_50)) | g_8[1]), g_274[l_598])) || l_776) ^ 0xD8E1L), p_46)) <= l_685) ^ p_49), p_46, p_46, g_290[8][1], p_50))), 1UL))) | p_46), g_554)), 1)), 2))) ^ 0L), 1))));
                        if (l_644)
                            goto lbl_386;
                    }
                    for (g_238 = 0; (g_238 <= 1); g_238 += 1)
                    {
                        if (p_46)
                            goto lbl_778;
                        l_688[3][3][1] = (l_779[2] || (safe_sub_func_int8_t_s_s(g_274[7], p_47)));
                        l_516 = g_565;
                        if (g_590)
                            continue;
                    }
                }
            }
            else
            {
                for (p_50 = 0; p_50 < 6; p_50 += 1)
                {
                    for (g_238 = 0; g_238 < 7; g_238 += 1)
                    {
                        for (l_661 = 0; l_661 < 5; l_661 += 1)
                        {
                            l_449[p_50][g_238][l_661] = 4294967295UL;
                        }
                    }
                }
            }
            for (g_215 = 4; (g_215 < 32); g_215 = safe_add_func_uint32_t_u_u(g_215, 2))
            {
                l_688[3][1][5] = (!(safe_rshift_func_int8_t_s_s(7L, l_279)));
                l_516 = (l_688[3][2][3] = g_590);
            }
        }
        else
        {
            unsigned l_808 = 0xE125820CL;
            int l_811 = 0xE36E30B4L;
            char l_875 = 0xD4L;
            int l_879[9][8] = {{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L},{0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L,0x077AB465L,0L}};
            int i, j;
            g_238 = (-5L);
            for (p_48 = 25; (p_48 < 2); p_48 = safe_sub_func_int32_t_s_s(p_48, 3))
            {
                unsigned char l_794 = 252UL;
                for (l_280 = (-2); (l_280 <= 22); l_280 = safe_add_func_uint32_t_u_u(l_280, 8))
                {
                    if (((func_71(((~(((l_598 = ((safe_mul_func_uint8_t_u_u(((l_516 > g_191[1][9]) >= l_794), p_50)) < (g_101 = l_794))) != (~p_49)) && (p_49 < (g_340 != ((-1L) >= (-1L)))))) >= l_711), l_595[2]) | (-8L)) || g_241))
                    {
                        g_105[1][2][0] = (safe_add_func_uint32_t_u_u(p_49, (((g_340 & func_71((5UL & (l_797[2] >= p_46)), g_340)) || p_47) >= g_274[7])));
                    }
                    else
                    {
                        int l_798 = 0L;
                        l_437 = l_798;
                        if (g_105[3][3][0])
                            continue;
                    }
                    for (l_515 = 0; (l_515 != 16); l_515++)
                    {
                        short l_802 = 0xD6E1L;
                        if (g_590)
                            goto lbl_801;
                        l_802 = (g_238 = 1L);
                    }
                }
                for (l_280 = (-2); (l_280 > (-29)); l_280 = safe_sub_func_int8_t_s_s(l_280, 3))
                {
                    int l_805 = (-1L);
                    for (g_239 = 0; (g_239 <= 2); g_239 += 1)
                    {
                        int i;
                        g_238 = (0xFD746B85L > (l_797[g_239] != l_797[g_239]));
                        g_105[7][1][0] = 0x97FBFFACL;
                        l_805 = l_595[g_239];
                        g_105[7][1][0] = g_480;
                    }
                }
            }
            if (((p_48 <= p_47) | (g_159 > ((p_48 && (safe_mod_func_int32_t_s_s((l_808 ^ (!(((safe_lshift_func_uint8_t_u_u(l_808, 0)) & g_191[1][9]) ^ ((p_48 ^ (g_159 < 0x236EL)) & l_808)))), g_513))) >= g_547))))
            {
                short l_831[2][10][7] = {{{0x2A92L,1L,1L,(-10L),0x2A92L,1L,0x2A92L},{0L,0x23C2L,0x23C2L,0L,4L,0L,0x23C2L},{0L,0L,1L,(-10L),1L,0L,0L},{0x9230L,0x23C2L,(-1L),0x23C2L,0x9230L,0x9230L,0x23C2L},{1L,0x2A92L,1L,1L,1L,1L,0x2A92L},{0x23C2L,4L,(-1L),(-1L),4L,0x23C2L,4L},{1L,1L,1L,1L,0x2A92L,1L,1L},{0x9230L,0x9230L,0x23C2L,(-1L),0x23C2L,0x9230L,0x9230L},{0L,1L,(-10L),1L,0L,0L,1L},{0L,4L,0L,0x23C2L,0x23C2L,0L,4L}},{{1L,0x2A92L,(-10L),(-10L),0x2A92L,1L,0x2A92L},{0L,0x23C2L,0x23C2L,0L,4L,0L,0x23C2L},{0L,0L,1L,(-10L),1L,0L,0L},{0x9230L,0x23C2L,(-1L),0x23C2L,0x9230L,0x9230L,0x23C2L},{1L,(-10L),1L,0L,0L,1L,(-10L)},{0x9230L,(-1L),0L,0L,(-1L),0x9230L,(-1L)},{1L,0L,0L,1L,(-10L),1L,0L},{4L,4L,0x9230L,0L,0x9230L,4L,4L},{0x2A92L,0L,1L,0L,0x2A92L,0x2A92L,0L},{0x23C2L,(-1L),0x23C2L,0x9230L,0x9230L,0x23C2L,(-1L)}}};
                int l_860[10] = {(-5L),(-5L),0xE1CB85F5L,(-5L),(-5L),0xE1CB85F5L,(-5L),(-5L),0xE1CB85F5L,(-5L)};
                int i, j, k;
                if ((g_105[1][2][1] = l_811))
                {
                    unsigned short l_814 = 7UL;
                    int l_826 = (-8L);
                    unsigned char l_828[4] = {0xE3L,0xE3L,0xE3L,0xE3L};
                    int i;
                    if (g_547)
                        goto lbl_801;
                    for (p_50 = (-28); (p_50 > 38); p_50 = safe_add_func_uint8_t_u_u(p_50, 7))
                    {
                        l_814 = g_513;
                    }
                    if ((l_437 = (+1L)))
                    {
                        char l_825 = (-6L);
                        int l_827[5][4] = {{3L,0x2CFB6A84L,0x9C2D7C96L,0xC725B967L},{3L,0x9C2D7C96L,3L,0xE97300F2L},{0x2CFB6A84L,0xC725B967L,0xE97300F2L,0xE97300F2L},{0x9C2D7C96L,0x9C2D7C96L,(-1L),0xC725B967L},{0xC725B967L,0x2CFB6A84L,(-1L),0x2CFB6A84L}};
                        int i, j;
                        g_105[7][1][0] = ((safe_rshift_func_int16_t_s_u(l_811, 7)) || (safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((g_513 = p_46) >= ((l_828[2] = (l_827[0][1] = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(l_811, p_47)) || 4294967295UL), func_63(func_71((l_826 = ((l_825 != (p_48 > (p_46 | g_590))) > l_814)), l_814), g_403, g_8[3], l_305[3], g_274[7]))))) || 255UL)) | g_590), g_381)), l_335)));
                    }
                    else
                    {
                        int l_836 = 0x6947DB3AL;
                        l_836 = ((((p_50 < (safe_sub_func_int8_t_s_s(0x60L, func_63((g_238 = g_480), p_50, (g_554 = g_105[0][3][0]), l_831[1][2][6], (l_437 = (safe_lshift_func_uint16_t_u_s((((p_46 < (safe_mul_func_int8_t_s_s(((((+((l_808 && (1UL < g_403)) > p_49)) || p_49) == 65528UL) && 0x48L), l_836))) || p_46) && 0UL), p_46))))))) <= p_50) && 7L) <= 9L);
                    }
                }
                else
                {
                    int l_858 = 0xD1E44E8BL;
                    int l_859[2][3][2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_859[i][j][k] = 0xD954E113L;
                        }
                    }
                    for (g_513 = 17; (g_513 <= 1); g_513--)
                    {
                        g_238 = (p_47 <= 0x0BB9L);
                    }
                    for (l_437 = 0; (l_437 > (-13)); l_437 = safe_sub_func_int32_t_s_s(l_437, 3))
                    {
                        unsigned char l_857 = 253UL;
                        l_860[9] = (8UL >= (p_50 <= (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((p_46 ^ (safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((255UL == g_403), p_46)) == func_63((l_858 = ((safe_add_func_uint32_t_u_u(((l_811 = func_63(g_274[7], ((~((safe_rshift_func_uint16_t_u_u(g_239, 7)) > g_290[8][1])) & g_403), l_831[1][2][6], l_857, g_340)) < p_48), (-1L))) >= 0x96D9L)), l_859[1][0][0], p_47, p_47, l_857)), 0xF1L)), p_48))), 0x81L)), 3))));
                    }
                }
                if (p_49)
                {
                    unsigned short l_865 = 0xE7CFL;
                    l_860[9] = (safe_sub_func_uint8_t_u_u(((g_513 < (p_46 != (p_47 = (safe_rshift_func_int16_t_s_s(func_63(func_71((~(l_471[2][2] || (l_305[3] > ((0xFED86F76L | (l_515 = func_63(g_238, (l_860[7] = g_241), g_191[1][9], l_808, p_47))) < 4294967295UL)))), g_241), l_865, p_46, l_808, p_47), l_865))))) >= l_797[2]), (-5L)));
                    l_860[6] = g_100;
                    g_238 = l_860[9];
                }
                else
                {
                    unsigned char l_866[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_866[i] = 0x42L;
                    l_866[3] = (-1L);
                    g_105[7][1][0] = g_198;
                }
                l_879[6][0] = (p_49 != ((l_811 = (!((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(func_63(g_191[1][9], (((safe_lshift_func_uint8_t_u_s(p_50, (((safe_sub_func_uint8_t_u_u(p_50, (g_340 = p_46))) < l_875) <= (g_101 == (safe_lshift_func_uint16_t_u_s(l_449[4][3][2], 14)))))) == func_63((0xC7CFL && p_50), l_878, l_409, l_860[9], g_547)) < g_191[1][9]), g_101, p_46, l_797[0]), g_101)), 0)) < p_48))) > 0xAAL));
                g_105[7][1][0] = g_274[0];
            }
            else
            {
                unsigned char l_894 = 1UL;
                int l_898 = (-1L);
                l_878 = (safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((p_48 == ((p_50 ^ ((safe_mod_func_int16_t_s_s(p_48, (safe_mul_func_int8_t_s_s(((func_71((3UL || ((safe_add_func_uint16_t_u_u(l_894, ((safe_add_func_uint8_t_u_u(l_305[3], (g_105[2][2][1] & (((safe_unary_minus_func_int16_t_s(1L)) < g_191[0][1]) || 0xF2315C81L)))) == g_198))) >= l_898)), p_50) && l_808) != g_8[3]), l_898)))) && g_480)) & g_480)), 0UL)) == l_898), g_554)), l_811));
            }
        }
lbl_968:
        for (p_49 = 0; (p_49 == 27); p_49 = safe_add_func_int32_t_s_s(p_49, 7))
        {
            unsigned l_905 = 0xD23E519DL;
            l_516 = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_241 & g_238), l_905)), 3));
        }
        if ((((func_63((!((l_409 | (safe_mul_func_int8_t_s_s((l_471[6][2] && (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((g_239 | (((safe_sub_func_int8_t_s_s(l_317, (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((((p_50 != (safe_add_func_uint8_t_u_u(p_48, (((safe_lshift_func_uint8_t_u_u((g_340 = (l_280 = (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_305[3] = (!g_340)), ((l_595[0] == (safe_mod_func_int16_t_s_s((g_403 = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(l_595[2], l_452)), g_554))), 0x9B30L))) > 1L))), l_797[0])))), 3)) | l_471[6][2]) < g_105[7][1][0])))) ^ 0xC1L) <= (-1L)) || 0x41L), 11)), 0x909FL)))) != l_931) != l_932)))), p_50))), 0x96L))) >= 0xFDL)), l_449[0][1][1], p_48, g_554, g_290[9][0]) || g_274[7]) != g_8[5]) != g_381))
        {
            g_105[7][1][0] = (safe_lshift_func_uint16_t_u_s(((l_515 = g_554) >= g_547), 5));
            g_935[0][0][1] = 0x866BCD19L;
        }
        else
        {
            unsigned l_943 = 0xB08700A7L;
            short l_1035[4] = {1L,1L,1L,1L};
            unsigned char l_1042 = 255UL;
            int l_1043 = 1L;
            int i;
            for (l_515 = 0; (l_515 != 7); ++l_515)
            {
                int l_940 = 0x3BFC5385L;
                int l_954 = 0xA88D69C4L;
                int l_955 = (-1L);
                if (((l_878 = (l_453 = func_71((safe_mul_func_int8_t_s_s((l_940 && (l_598 == (g_105[7][1][0] = ((l_437 <= (safe_mod_func_uint16_t_u_u((p_49 = 1UL), 0x8715L))) | (5UL != (l_943 <= (safe_sub_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0xA5L, (p_46 = func_71((g_935[0][0][1] = ((l_955 = (l_954 = g_554)) <= g_105[7][1][0])), g_241)))), 0xB466L)), p_47)) > p_48), 65533UL)) <= 0x2961A99FL), l_516)))))))), g_381)), l_595[0]))) <= p_47))
                {
                    short l_958 = 4L;
                    int l_967 = (-4L);
                    char l_992 = 0L;
                    for (l_691 = 10; (l_691 == 29); l_691++)
                    {
                        g_238 = g_403;
                        l_958 = g_198;
                        g_105[1][1][1] = (g_105[7][1][0] & (safe_mod_func_uint16_t_u_u((l_943 != l_691), (g_547 || (l_453 = (p_48 = ((safe_mod_func_int16_t_s_s((g_290[5][3] = p_49), l_305[2])) >= p_50)))))));
                    }
                    for (g_590 = 0; (g_590 <= 0); g_590 += 1)
                    {
                        unsigned l_975[10][7] = {{0xD53F61C6L,0x40834F0EL,0x408826D1L,0xF4FBE2D2L,0x76A17A7FL,0xF4FBE2D2L,0x408826D1L},{8UL,8UL,4294967292UL,4294967295UL,0x40834F0EL,1UL,0xD53F61C6L},{0xD53F61C6L,1UL,0x408826D1L,0x408826D1L,1UL,4294967292UL,0xD53F61C6L},{0xF4FBE2D2L,0x408826D1L,0x40834F0EL,0xD53F61C6L,4294967295UL,4294967295UL,0xD53F61C6L},{8UL,4294967289UL,8UL,0x76A17A7FL,0xD53F61C6L,0xF4FBE2D2L,4294967292UL},{0x40834F0EL,0x408826D1L,0xF4FBE2D2L,0x76A17A7FL,0xF4FBE2D2L,0x408826D1L,0x40834F0EL},{0x408826D1L,1UL,4294967292UL,0xD53F61C6L,4294967295UL,0xF4FBE2D2L,4294967295UL},{0x408826D1L,4294967295UL,4294967295UL,0x408826D1L,8UL,4294967295UL,0x76A17A7FL},{0x40834F0EL,4294967295UL,4294967292UL,8UL,8UL,4294967292UL,4294967295UL},{8UL,0x40834F0EL,0xF4FBE2D2L,1UL,4294967295UL,0x76A17A7FL,0x76A17A7FL}};
                        int l_979 = 0x92C2F81DL;
                        int i, j;
                        l_955 = (g_105[7][1][0] = func_63(p_48, p_50, p_49, (((safe_rshift_func_int16_t_s_s(0xE5C2L, (((g_565 != func_71(l_279, (0xA8B7F9ABL != (p_46 > (l_280 = ((safe_add_func_uint16_t_u_u(p_49, 0x762FL)) == p_47)))))) & p_48) && g_935[0][0][4]))) >= 1L) && 0x90L), l_967));
                        if (l_409)
                            goto lbl_968;
                        g_105[2][0][1] = (func_71((g_274[7] ^ 4294967293UL), (!1L)) != (safe_mul_func_uint8_t_u_u((g_340 = (~255UL)), (g_547 & (safe_mul_func_int16_t_s_s(g_8[3], (safe_sub_func_int16_t_s_s(l_975[6][2], l_976[5]))))))));
                        l_453 = ((safe_sub_func_uint16_t_u_u(g_554, (l_979 = (0xCAE1L || 0xF584L)))) >= ((safe_rshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(func_63((safe_mod_func_uint16_t_u_u(l_279, 0x8C89L)), p_46, (safe_add_func_int16_t_s_s(func_63(l_992, (!(g_340 != (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x32L, l_967)), l_335)))), g_513, l_685, p_49), 0xB345L)), g_554, l_943), l_279)), 3L)) ^ g_198) >= 0xAAL), g_935[0][0][0])) && p_49), g_191[1][2])) < p_48));
                    }
                }
                else
                {
                    unsigned short l_1019 = 0xE9C2L;
                    int l_1021[3][1];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1021[i][j] = 0x8B3BE553L;
                    }
                    g_105[7][1][0] = ((p_46 != (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((g_935[0][1][6] == l_955), p_48)), g_565))) && (safe_add_func_int8_t_s_s(func_63((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_976[5], (l_598 = (((g_101 = (g_590 <= p_47)) > (safe_add_func_uint16_t_u_u(65527UL, g_935[0][0][1]))) & 7UL)))), (-1L))), p_47, g_198, p_47, g_239), g_8[3])));
                    if (g_101)
                    {
                        int l_1020 = 0xBC5F9A2AL;
                        g_105[7][1][0] = (safe_rshift_func_int16_t_s_u((g_547 < p_50), ((g_480 = (((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(l_305[1], 0)), func_63(g_935[0][2][4], g_101, g_340, (l_1021[2][0] = (((((safe_rshift_func_uint8_t_u_u((g_191[1][9] = ((((safe_mod_func_int16_t_s_s(g_100, 0xA65EL)) || (g_554 = ((((((g_480 == g_547) <= l_1019) >= l_317) >= g_100) && 255UL) < 5L))) && p_48) >= 1L)), 6)) <= p_46) != l_931) && p_48) <= l_1020)), g_101))) < l_1019) & g_290[8][1])) < p_48)));
                    }
                    else
                    {
                        unsigned short l_1022 = 0x1BD7L;
                        l_1022 = g_191[1][9];
                        g_238 = p_47;
                        return g_935[0][0][1];
                    }
                    for (g_513 = 26; (g_513 <= (-17)); --g_513)
                    {
                        l_598 = g_241;
                    }
                }
                return p_46;
            }
            for (l_644 = 1; (l_644 <= 5); l_644 += 1)
            {
                int l_1049[10] = {8L,0L,8L,0L,8L,0L,8L,0L,8L,0L};
                int i;
                l_1043 = (safe_add_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((1L < (safe_sub_func_int16_t_s_s(((l_976[l_644] < l_976[l_644]) >= l_1035[3]), (g_105[7][1][0] < (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((p_49 & (p_50 | (((safe_mod_func_uint8_t_u_u((5L == (l_976[l_644] == l_644)), l_976[l_644])) & 0xB0L) >= g_239))) | l_976[l_644]) <= l_1042), 9)), g_191[1][9])) ^ p_48) <= 0x34F6D651L))))), 0x96055593L)), g_340)), l_976[l_644])) > 0xFAD6L), (-2L)));
                l_515 = (-1L);
                for (l_932 = 1; (l_932 >= 0); l_932 -= 1)
                {
                    l_516 = (((p_48 = p_49) && (((safe_mod_func_uint16_t_u_u((p_50 = (safe_unary_minus_func_int32_t_s(l_409))), g_935[0][0][1])) ^ (l_1049[7] = (safe_mod_func_uint32_t_u_u(0xB419BB00L, p_48)))) || 6L)) && (1L & 0x29CBE1E4L));
                    for (g_554 = 1; (g_554 >= 0); g_554 -= 1)
                    {
                        int i, j, k;
                        return g_105[(l_644 + 2)][(l_932 + 2)][l_932];
                    }
                }
            }
        }
    }
    if ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((((l_280 = p_46) & (p_48 = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0x851CL, 5)), (g_100 || func_71((safe_mul_func_uint8_t_u_u(0x4AL, ((l_305[3] = 252UL) ^ (l_452 || l_279)))), (l_598 = l_691))))))) < 0x678EL), p_49)), p_50)), g_935[0][1][3])))
    {
        unsigned l_1072 = 0x2C83749BL;
        int l_1073 = 0xB188C7A7L;
        char l_1086 = (-5L);
        int l_1175 = 0xF4BC1EA1L;
        if (p_46)
            goto lbl_336;
        if ((((l_305[1] = (safe_lshift_func_uint8_t_u_u((p_47 < ((((g_340 & (l_1073 = (safe_add_func_int8_t_s_s(((255UL | (!0x6DL)) < (safe_mul_func_uint16_t_u_u(func_63((safe_lshift_func_int16_t_s_s(p_46, 1)), (g_274[7] = l_335), ((safe_rshift_func_int8_t_s_u(l_1072, (l_598 = l_711))) < l_1072), p_47, l_305[1]), g_340))), g_935[0][2][2])))) >= p_47) <= g_381) == l_1072)), l_471[2][4]))) < l_1074[2][1][9]) > l_280))
        {
            unsigned short l_1077 = 1UL;
            int l_1114[8][9][3] = {{{1L,0x673880FAL,(-1L)},{(-6L),1L,6L},{0x5B7726A5L,0L,0xC3E5974CL},{0x64263789L,1L,0xC34EF80BL},{3L,0x673880FAL,0x673880FAL},{0x88627609L,0xCC4C3DC6L,0L},{(-5L),0x673880FAL,(-2L)},{9L,1L,0xCC4C3DC6L},{0L,0L,0xE46850BFL}},{{0L,1L,(-2L)},{8L,1L,7L},{0L,0L,(-1L)},{0x673880FAL,1L,0x53157380L},{0xC34EF80BL,9L,9L},{0xC3E5974CL,0x7B78FA04L,0xFC1997C7L},{6L,9L,0xA8A13A97L},{(-1L),1L,0x7B78FA04L},{9L,0L,(-10L)}},{{0L,1L,0x019F1614L},{(-6L),9L,0x993DF4FAL},{0x34FDA152L,0x7B78FA04L,0xBE3D8E90L},{1L,9L,0x49E0E2F9L},{(-6L),1L,1L},{0x3FB63A2CL,0L,0xAA0009A0L},{0x1F263A5CL,1L,0x61D9CF2BL},{(-2L),9L,0L},{0xE46850BFL,0x7B78FA04L,0xF4E7EF95L}},{{0xCC4C3DC6L,9L,0xCEFDE166L},{(-2L),1L,7L},{0L,0L,(-1L)},{0x673880FAL,1L,0x53157380L},{0xC34EF80BL,9L,9L},{0xC3E5974CL,0x7B78FA04L,0xFC1997C7L},{6L,9L,0xA8A13A97L},{(-1L),1L,0x7B78FA04L},{9L,0L,(-10L)}},{{0L,1L,0x019F1614L},{(-6L),9L,0x993DF4FAL},{0x34FDA152L,0x7B78FA04L,0xBE3D8E90L},{1L,9L,0x49E0E2F9L},{(-6L),1L,1L},{0x3FB63A2CL,0L,0xAA0009A0L},{0x34FDA152L,0xF4E7EF95L,1L},{0xCC4C3DC6L,(-10L),(-1L)},{(-1L),0xBE3D8E90L,0x019F1614L}},{{0x3FB63A2CL,(-10L),0L},{0x673880FAL,0xF4E7EF95L,0xFC1997C7L},{(-6L),(-1L),0x49E0E2F9L},{0xE46850BFL,0xF4E7EF95L,7L},{6L,(-10L),(-10L)},{(-6L),0xBE3D8E90L,0x61D9CF2BL},{0L,(-10L),9L},{0L,0xF4E7EF95L,0xBE3D8E90L},{(-2L),(-1L),0xCEFDE166L}},{{0xC3E5974CL,0xF4E7EF95L,0x7B78FA04L},{1L,(-10L),0xAA0009A0L},{(-2L),0xBE3D8E90L,0x53157380L},{9L,(-10L),0x993DF4FAL},{0x1F263A5CL,0xF4E7EF95L,0xF4E7EF95L},{0xC34EF80BL,(-1L),0xA8A13A97L},{0x34FDA152L,0xF4E7EF95L,1L},{0xCC4C3DC6L,(-10L),(-1L)},{(-1L),0xBE3D8E90L,0x019F1614L}},{{0x3FB63A2CL,(-10L),0L},{0x673880FAL,0xF4E7EF95L,0xFC1997C7L},{(-6L),(-1L),0x49E0E2F9L},{0xE46850BFL,0xF4E7EF95L,7L},{6L,(-10L),(-10L)},{(-6L),0xBE3D8E90L,0x61D9CF2BL},{0L,(-10L),9L},{0L,0xF4E7EF95L,0xBE3D8E90L},{(-2L),(-1L),0xCEFDE166L}}};
            int l_1143 = (-1L);
            int i, j, k;
            for (l_335 = 0; (l_335 != 48); l_335++)
            {
                l_1077 = g_290[2][4];
                for (l_1073 = 0; (l_1073 <= 1); l_1073 += 1)
                {
                    int i, j;
                    g_105[5][3][1] = ((safe_mul_func_int16_t_s_s(((g_191[l_1073][l_1073] && p_50) < func_63(p_49, ((((safe_lshift_func_uint16_t_u_u((g_105[7][0][1] <= (l_1073 == g_8[5])), 13)) > p_50) <= g_159) | (((((safe_rshift_func_uint16_t_u_s(p_50, p_50)) != 0xF8CBA56EL) == g_590) && g_8[3]) || g_198)), l_1086, g_590, p_48)), 0xCDEBL)) | g_554);
                    g_105[2][2][1] = ((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((1UL >= (((g_547 ^ ((safe_sub_func_uint8_t_u_u(func_63(((p_48 = ((g_935[0][0][1] != ((g_1093 > (g_274[7] != ((safe_lshift_func_uint8_t_u_u(func_63((255UL >= g_1093), ((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((((func_63((g_101 ^ 6L), l_1073, g_340, g_403, g_191[l_1073][l_1073]) > g_547) & l_1072) < 0UL), 1)), 0xB4C5624EL)) < 0xE9L) > 0x91A33268L) != 1UL), g_191[l_1073][l_1073], l_662, g_290[6][9]), 4)) | l_1077))) > g_191[l_1073][l_1073])) > p_49)) <= l_1077), p_46, p_46, l_1077, g_191[0][4]), 0x1EL)) || 0x3DC8L)) < g_191[l_1073][l_1073]) ^ p_47)), 0x45L)), (-1L))) && 1UL);
                    return g_191[l_1073][l_1073];
                }
            }
            for (g_215 = 0; (g_215 != 16); g_215++)
            {
                int l_1106 = (-1L);
                g_1093 = (safe_lshift_func_uint8_t_u_u((l_1077 >= ((safe_add_func_uint16_t_u_u((g_547 = (l_1077 > l_1106)), (func_63((l_437 = (((-1L) == ((g_100 = 0xAC15F111L) ^ (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_1106 >= p_47), g_513)), p_48)))) || p_48), l_1073)))) ^ g_8[0])), l_1077, p_49, p_48, p_50) | 0xE0L))) >= 65529UL)), l_1106));
                l_1114[2][6][0] = p_47;
                g_105[7][1][0] = func_63(l_1072, p_47, ((p_50 = l_1106) || ((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(0xA5L, (~(safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_1123[1], (p_50 <= func_63((g_105[4][3][0] = ((l_1077 <= (-1L)) && (l_1106 ^ p_46))), p_49, g_554, p_47, g_101)))), g_381))))) == p_46), 12)) | g_101)), g_8[3], l_932);
                for (g_590 = 0; (g_590 == 18); ++g_590)
                {
                    unsigned short l_1142 = 0x74CBL;
                    int l_1144 = 1L;
                    if (g_513)
                    {
                        unsigned short l_1126 = 65526UL;
                        if (p_48)
                            break;
                        l_1126 = g_215;
                    }
                    else
                    {
                        unsigned short l_1141 = 65530UL;
                        l_1144 = (((~(safe_sub_func_uint8_t_u_u((g_340 = l_1114[2][0][1]), func_63((safe_mod_func_uint16_t_u_u(func_63((l_1143 = (safe_rshift_func_uint8_t_u_s(p_47, func_63((safe_sub_func_uint32_t_u_u((!(safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((1UL < (l_598 = (2UL <= (l_1073 = 0x63CBL)))), p_47)), l_1141)), l_711))), (l_382 ^ l_1106))), l_1123[0], l_1142, g_547, p_48)))), p_48, p_50, l_1114[2][6][0], p_50), l_1141)), g_8[3], g_480, g_215, l_1074[3][1][4])))) != p_47) == 0x98B6L);
                        return l_1141;
                    }
                    return g_935[0][0][6];
                }
            }
        }
        else
        {
            unsigned l_1145 = 1UL;
            unsigned char l_1146 = 0xDFL;
            int l_1147 = 5L;
            unsigned char l_1259 = 0x41L;
            unsigned short l_1268 = 8UL;
            if (l_1086)
            {
                unsigned short l_1149 = 0UL;
                int l_1174 = 0xDEBE8800L;
                for (g_480 = 0; (g_480 <= 9); g_480 += 1)
                {
                    unsigned short l_1148 = 0x3E2CL;
                    int l_1165 = 0L;
                    l_1145 = (l_1073 = p_50);
                    l_1149 = (func_71((l_1147 = l_1146), l_1148) ^ p_48);
                    if (((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(l_1148, (((safe_mul_func_int8_t_s_s((g_554 = (safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((p_50 & ((!g_215) <= (safe_unary_minus_func_int8_t_s(g_274[8])))), (safe_lshift_func_uint16_t_u_u((g_239 = g_340), (l_1073 | g_274[2]))))), (0x6638L && (g_547 = l_1086))))), l_1148)) | p_47) != p_47))), g_101)) && g_105[0][2][1]))
                    {
                        l_305[3] = (g_191[1][9] < l_437);
                    }
                    else
                    {
                        l_1073 = (l_1165 = (safe_lshift_func_int16_t_s_u((-1L), 7)));
                    }
                    for (g_554 = 1; (g_554 >= 0); g_554 -= 1)
                    {
                        int i, j;
                        l_1175 = (safe_sub_func_uint8_t_u_u(g_290[(g_554 + 2)][(g_554 + 2)], func_71((func_71((p_47 && ((!(safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_1073 = (p_48 == ((+(func_71(g_290[(g_554 + 2)][(g_554 + 2)], p_50) > ((p_48 && (safe_mod_func_uint32_t_u_u(l_1146, l_382))) >= g_274[5]))) > l_1073))), g_480)), 0x7DDAL))) <= (-2L))), l_1174) & 0xBDEDL), l_1072)));
                        if (p_47)
                            continue;
                        g_105[2][2][0] = g_480;
                    }
                }
                if ((g_105[4][3][1] = g_159))
                {
                    unsigned short l_1176 = 65535UL;
                    int l_1204 = 7L;
                    l_598 = ((l_1176 || l_1174) != ((safe_add_func_int8_t_s_s(0x7EL, p_48)) & (l_691 >= ((~(safe_mul_func_int16_t_s_s((l_1147 = l_1181), ((safe_mul_func_uint16_t_u_u(l_1072, (~g_191[1][9]))) >= g_159)))) <= 0x1CD63024L))));
                    for (l_335 = 16; (l_335 <= 31); l_335 = safe_add_func_int32_t_s_s(l_335, 2))
                    {
                        int l_1196[3];
                        int l_1201 = 0xA62ADC11L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1196[i] = 6L;
                        g_105[7][1][0] = ((safe_mul_func_int16_t_s_s(l_305[2], p_48)) == (0x23L | (l_1147 = (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(p_48, p_46)) < ((safe_add_func_uint8_t_u_u(p_49, l_1149)) && g_241)), (safe_mul_func_int16_t_s_s(l_1196[1], l_1147)))))));
                        l_1204 = ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((func_71(l_1176, (l_1201 = g_290[8][1])) ^ l_1175) | g_480), l_471[6][2])), ((safe_sub_func_int16_t_s_s((65534UL >= ((+(l_1145 ^ 0L)) & g_590)), 0x75D2L)) > l_1146))) == g_590);
                    }
                    for (l_335 = 0; (l_335 <= 3); l_335 += 1)
                    {
                        int i;
                        l_305[l_335] = l_305[l_335];
                    }
                    for (l_335 = 0; (l_335 <= 48); l_335 = safe_add_func_int32_t_s_s(l_335, 6))
                    {
                        char l_1207 = 0x4EL;
                        l_1174 = p_50;
                        l_1174 = ((~l_1207) || (safe_rshift_func_int16_t_s_u(l_1145, 9)));
                    }
                }
                else
                {
                    unsigned l_1214 = 4294967295UL;
                    if (p_49)
                    {
                        l_305[0] = (safe_add_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(((g_191[1][9] = l_1214) | (safe_lshift_func_uint8_t_u_s(g_547, 5))), (l_1147 = l_279))) != p_48) != 0xDAL), g_565));
                    }
                    else
                    {
                        return p_50;
                    }
                }
            }
            else
            {
                unsigned short l_1231[1];
                short l_1247 = 9L;
                int l_1265 = 0xF944E087L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1231[i] = 0x66C5L;
                if (func_71(g_554, (safe_rshift_func_int16_t_s_s(func_63((g_105[7][1][0] = (safe_sub_func_uint32_t_u_u((((((safe_unary_minus_func_uint8_t_u(func_71(g_381, ((+(g_1232[0] = (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(65529UL, ((l_1231[0] = (((g_191[1][0] >= ((-1L) && func_63(l_1175, l_1146, g_1093, (((safe_add_func_int16_t_s_s(l_1175, g_935[0][0][1])) == p_46) && g_239), p_49))) ^ 0x9EAA7CF7L) >= l_1230)) == l_1146))), p_47)), p_47)))) || p_50)))) != p_46) < 1UL) <= g_340) > g_1093), p_48))), p_50, l_1086, g_590, l_1073), 14))))
                {
                    return g_101;
                }
                else
                {
                    unsigned l_1248 = 4UL;
                    int l_1255 = 0xFD39C221L;
                    int l_1256[8][2] = {{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L},{0x012CDA23L,0x012CDA23L}};
                    int i, j;
                    if (l_1123[1])
                    {
                        unsigned l_1236 = 4294967292UL;
                        g_105[7][1][0] = p_49;
                        g_238 = (l_1147 = (g_105[7][1][0] = (safe_add_func_int8_t_s_s((0UL ^ (l_1235 && l_1236)), g_547))));
                    }
                    else
                    {
                        return g_935[0][0][5];
                    }
                    l_1248 = (safe_add_func_int16_t_s_s(p_47, func_63(p_48, ((p_46 | ((safe_mul_func_uint8_t_u_u((0x02L | (((safe_add_func_uint8_t_u_u((l_280 = (safe_mod_func_int8_t_s_s((-7L), g_105[4][0][0]))), g_935[0][1][2])) & (g_290[8][1] || (g_274[7] = (safe_mod_func_int8_t_s_s(p_49, g_105[2][2][0]))))) <= l_1247)), p_49)) != g_565)) ^ l_1230), g_1232[0], g_191[0][3], g_105[7][1][0])));
                    for (l_1181 = 0; (l_1181 < (-13)); l_1181 = safe_sub_func_uint32_t_u_u(l_1181, 5))
                    {
                        int l_1257 = (-5L);
                        l_1259 = (g_105[7][1][0] = (safe_mod_func_uint32_t_u_u((((g_381 = (((l_1248 > 0x65346654L) != p_48) || ((p_48 == func_63((l_1256[6][0] = (l_1255 = (safe_add_func_uint32_t_u_u(p_46, (0x259A336CL != g_290[8][4]))))), l_1247, ((((g_1093 = p_49) | 0x58584C0EL) != l_1257) || p_46), g_1258, l_662)) <= 0x28F2EC54L))) && g_198) > 246UL), p_47)));
                        g_105[7][1][0] = func_63((g_105[7][1][0] | 0x1109A3AAL), (safe_add_func_uint8_t_u_u((g_290[3][0] >= ((safe_lshift_func_uint16_t_u_u(0x8E0BL, l_437)) & (((l_1265 = l_1264) || (safe_rshift_func_int8_t_s_u((1UL | g_198), g_381))) || l_1268))), g_101)), g_198, l_1231[0], p_50);
                        g_238 = l_452;
                        return l_1257;
                    }
                }
            }
        }
    }
    else
    {
        short l_1271 = 1L;
        unsigned short l_1282 = 0UL;
        unsigned char l_1289 = 0x9CL;
        char l_1302 = 1L;
        int l_1327 = (-5L);
        int l_1328 = 0xD2ED7F1DL;
        for (l_382 = 11; (l_382 >= 1); l_382--)
        {
            short l_1329 = (-1L);
            g_238 = ((((l_1271 = g_105[7][1][0]) >= (4294967295UL > (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(g_1093, g_191[0][7])), (safe_mul_func_int8_t_s_s(0x75L, 0x4BL)))), 0xB6L)))) >= (safe_mul_func_int8_t_s_s(g_935[0][0][1], 4UL))) != l_1282);
            for (l_317 = 0; (l_317 >= 17); l_317++)
            {
                short l_1300 = 7L;
                int l_1301 = 0L;
                l_1301 = (safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_1289 = g_590), (g_480 = func_63(((l_711 == (safe_rshift_func_int8_t_s_u(0x03L, 2))) <= (l_711 != (safe_mul_func_uint16_t_u_u(p_48, (safe_sub_func_uint8_t_u_u((p_46 = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_305[3] = g_403), 65535UL)), func_71(p_49, (g_381 & g_565))))), l_932)))))), p_49, l_1282, l_1300, l_1282)))), p_47));
            }
            g_238 = ((l_1302 != ((~p_48) <= l_471[6][4])) && p_50);
            if (p_46)
            {
                unsigned l_1305 = 0UL;
                unsigned l_1320 = 4294967295UL;
                g_105[4][3][1] = ((l_1074[2][1][9] && (safe_mul_func_int8_t_s_s((func_71((g_1258 = 0xD70C033CL), l_1264) && ((g_513 & func_71(p_48, g_191[1][9])) ^ g_290[8][1])), 0xC7L))) == l_1305);
                if ((func_63((l_1282 > (p_47 >= (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(4294967291UL, (safe_mul_func_uint16_t_u_u((l_437 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((p_50 = ((-1L) ^ (p_48 = (0xDF06L ^ (1UL && (safe_mul_func_int8_t_s_s(g_935[0][0][1], 253UL))))))), (safe_mod_func_int32_t_s_s(2L, g_1232[0])))), (-1L)))), g_1232[0])))), l_1320)))), g_8[3], g_100, l_452, p_49) == p_47))
                {
                    for (p_48 = 9; (p_48 >= 2); p_48 -= 1)
                    {
                        int i, j;
                        l_1328 = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(65534UL, (safe_sub_func_int8_t_s_s(g_290[p_48][p_48], 0xA2L)))), ((l_1327 = g_403) ^ p_47)));
                    }
                }
                else
                {
                    g_105[7][0][1] = p_48;
                    if (l_1305)
                        continue;
                    l_1264 = 4L;
                }
                for (g_239 = 0; (g_239 <= 0); g_239 += 1)
                {
                    return l_1329;
                }
            }
            else
            {
                return p_50;
            }
        }
        l_437 = (p_47 | (p_50 > ((safe_add_func_int8_t_s_s(0xE7L, func_63(l_1181, (func_63((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(l_1289, (func_71(g_935[0][0][1], (l_280 = (l_305[3] = (safe_mul_func_int8_t_s_s(l_1327, (p_48 = (1L && l_1289))))))) && p_50))), 4294967295UL)), g_590, l_1123[1], l_1327, l_382) <= p_47), p_50, p_50, g_547))) == p_50)));
        g_238 = l_305[3];
    }
    return l_1340;
}







static unsigned short func_63(int p_64, short p_65, char p_66, int p_67, unsigned p_68)
{
    int l_275 = 2L;
    for (p_66 = 0; (p_66 <= 9); p_66 += 1)
    {
        short l_277 = 1L;
        int i;
        l_275 = ((0L | (p_64 = g_274[p_66])) < (~l_275));
        for (g_100 = 0; (g_100 <= 1); g_100 += 1)
        {
            int l_276 = 0xBE017351L;
            int i, j;
            l_276 = g_191[g_100][p_66];
            for (g_239 = 0; (g_239 <= 1); g_239 += 1)
            {
                int i, j, k;
                g_105[(g_100 + 5)][(g_100 + 1)][g_100] = 0xD431B59EL;
                for (g_238 = 1; (g_238 >= 0); g_238 -= 1)
                {
                    int i, j;
                    if (g_191[g_238][p_66])
                    {
                        int i, j;
                        p_64 = g_191[g_239][(g_238 + 3)];
                    }
                    else
                    {
                        p_64 = g_191[g_238][p_66];
                    }
                    g_105[7][1][0] = (p_64 = g_274[p_66]);
                    l_277 = (g_105[(g_100 + 5)][(g_100 + 1)][g_100] = g_274[7]);
                }
            }
        }
    }
    return g_215;
}







static unsigned short func_71(unsigned p_72, int p_73)
{
    int l_95 = 0xF72E7322L;
    char l_102 = 0xE4L;
    int l_224 = (-5L);
    for (p_73 = 0; (p_73 < 4); p_73 = safe_add_func_uint8_t_u_u(p_73, 9))
    {
        unsigned char l_98 = 0xDDL;
        int l_99[7][10] = {{0x6E2FE0F9L,9L,0x381ABBC9L,1L,3L,(-1L),0xC708470FL,0xA88E9DE5L,0x48C0F44DL,3L},{(-1L),0xC708470FL,0xA88E9DE5L,0x48C0F44DL,3L,0L,3L,0x48C0F44DL,0xA88E9DE5L,0xC708470FL},{0xE648FB31L,0xC708470FL,0L,0x82E55E19L,(-1L),0x61344E0DL,0xC708470FL,0x381ABBC9L,0xA88E9DE5L,1L},{0L,9L,0x82E55E19L,0x48C0F44DL,0x415B52D1L,0x61344E0DL,1L,1L,0x48C0F44DL,(-1L)},{0xE648FB31L,3L,0x82E55E19L,1L,(-4L),0L,(-1L),0x381ABBC9L,0x381ABBC9L,(-1L)},{(-1L),0x415B52D1L,0L,0L,0x415B52D1L,(-1L),(-1L),0x48C0F44DL,1L,1L},{0x6E2FE0F9L,3L,0xA88E9DE5L,0L,(-1L),0xE3B0BAB1L,1L,0xA88E9DE5L,0x381ABBC9L,0xC708470FL}};
        unsigned l_175 = 4294967294UL;
        int l_190 = 0xBEBFAB12L;
        int i, j;
        l_102 = (g_8[0] || (g_101 = ((safe_rshift_func_uint8_t_u_s(l_95, p_73)) && (g_8[4] != (((g_8[3] ^ (g_100 = ((safe_lshift_func_uint16_t_u_s(((l_95 < l_98) >= (l_99[1][6] = ((g_8[3] ^ l_98) & 65535UL))), l_95)) <= g_8[2]))) ^ g_8[1]) != 0x8F2C1609L)))));
        if ((0UL < g_101))
        {
            int l_106[7][2] = {{0L,0L},{1L,0L},{0L,1L},{0L,0L},{1L,0L},{0L,1L},{0L,0L}};
            unsigned short l_146 = 0xDC73L;
            int l_160 = 1L;
            int l_171[8][2][3] = {{{0xE333C019L,0x643F99B1L,1L},{8L,1L,1L}},{{0xB1ED4B6EL,0x4E18E7CCL,(-10L)},{(-10L),1L,0L}},{{1L,(-10L),1L},{(-10L),1L,0xBAD65AA8L}},{{0xB1ED4B6EL,0xB1ED4B6EL,0x643F99B1L},{8L,0xB1ED4B6EL,0x4E18E7CCL}},{{1L,1L,0xB1ED4B6EL},{0x7A68DE42L,(-10L),0xD8575771L}},{{0xBAD65AA8L,1L,0xB1ED4B6EL},{0xBEAA374FL,0x4E18E7CCL,0x4E18E7CCL}},{{(-7L),1L,0x643F99B1L},{(-7L),0x643F99B1L,0xBAD65AA8L}},{{0xBEAA374FL,8L,1L},{0xBAD65AA8L,0x7A68DE42L,0L}}};
            int i, j, k;
            for (g_100 = 0; (g_100 != 30); g_100++)
            {
                unsigned l_111 = 0xEF126ED3L;
                int l_123 = 0x1A6072D4L;
                unsigned l_174[5][2][3] = {{{0x57EE2591L,4294967295UL,0x57EE2591L},{4294967289UL,0UL,0UL}},{{0x8B1378FCL,4294967295UL,0x8B1378FCL},{4294967289UL,4294967289UL,0UL}},{{0x57EE2591L,4294967295UL,0x57EE2591L},{4294967289UL,0UL,0UL}},{{0x8B1378FCL,4294967295UL,0x8B1378FCL},{4294967289UL,4294967289UL,0UL}},{{0x57EE2591L,4294967295UL,0x57EE2591L},{4294967289UL,0UL,0UL}}};
                int i, j, k;
                for (l_98 = 1; (l_98 <= 6); l_98 += 1)
                {
                    int l_116 = 0x187A30E5L;
                    int i, j;
                    if (l_99[l_98][(l_98 + 2)])
                    {
                        int i, j;
                        l_99[l_98][(l_98 + 1)] = l_99[l_98][l_98];
                        l_99[l_98][(l_98 + 1)] = l_102;
                        g_105[7][1][0] = ((-1L) != l_102);
                        l_106[6][1] = p_73;
                    }
                    else
                    {
                        g_105[7][1][0] = (((safe_sub_func_int16_t_s_s((!g_8[4]), l_95)) || 0xE702L) && (p_72 = (safe_lshift_func_int8_t_s_s((~(l_111 > (g_101 = (l_102 > l_98)))), 7))));
                        l_95 = (((p_72 > p_72) <= (l_106[6][1] ^ ((g_105[2][2][1] == (g_101 = g_105[2][0][1])) >= g_100))) | g_8[4]);
                    }
                    l_99[l_98][(l_98 + 2)] = 0x30DCE90FL;
                    g_105[7][1][0] = ((g_101 & ((safe_sub_func_int16_t_s_s(9L, (safe_lshift_func_uint16_t_u_u(g_8[3], l_116)))) <= (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(g_105[7][1][0], l_102)), p_72)))) >= (safe_mul_func_uint8_t_u_u(0UL, l_111)));
                }
                l_123 = (g_105[7][1][0] = (((-8L) > g_105[7][1][0]) > g_8[1]));
                if ((safe_sub_func_int32_t_s_s(((-1L) ^ (l_98 || g_105[7][1][0])), g_8[3])))
                {
                    unsigned char l_128 = 1UL;
                    for (l_123 = 0; (l_123 < 21); ++l_123)
                    {
                        l_99[6][5] = g_105[7][1][0];
                        g_105[4][1][0] = g_8[3];
                        return g_105[0][3][1];
                    }
                    g_105[7][1][0] = (l_128 < (safe_rshift_func_uint8_t_u_s(g_8[4], (g_101 | (safe_mul_func_uint16_t_u_u(p_73, (safe_add_func_uint16_t_u_u(g_101, ((p_73 || (safe_mod_func_uint8_t_u_u((g_8[3] > (safe_sub_func_int16_t_s_s(l_128, ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((((safe_mod_func_uint8_t_u_u((l_123 = (!(safe_sub_func_uint8_t_u_u(g_101, l_128)))), l_95)) > l_102) >= l_146))), g_100)) & p_73)))), 0x86L))) >= g_8[3])))))))));
                }
                else
                {
                    l_160 = (l_99[2][8] = (safe_lshift_func_uint8_t_u_s((l_123 = (safe_mod_func_int32_t_s_s(0x84ED8571L, g_105[0][2][0]))), (g_101 > ((safe_lshift_func_int8_t_s_s((((~l_111) || l_146) >= (0x5EL | (l_106[6][0] = p_73))), (g_159 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_111, p_72)), 2)), p_72))))) && 4294967295UL)))));
                }
                for (l_160 = 1; (l_160 >= 0); l_160 -= 1)
                {
                    short l_161 = 0x4C9DL;
                    int i, j, k;
                    for (l_111 = 0; (l_111 <= 1); l_111 += 1)
                    {
                        int i, j, k;
                        g_105[(l_160 + 4)][l_111][l_111] = g_105[(l_160 + 6)][(l_111 + 2)][l_111];
                        if (g_105[(l_160 + 6)][(l_160 + 1)][l_111])
                            continue;
                        l_161 = (l_106[(l_111 + 1)][l_111] = (g_105[(l_111 + 3)][(l_160 + 1)][l_160] = (-1L)));
                    }
                    if (g_105[(l_160 + 2)][l_160][l_160])
                    {
                        int i, j, k;
                        if (g_105[(l_160 + 6)][(l_160 + 1)][l_160])
                            break;
                    }
                    else
                    {
                        int i, j;
                        return l_106[(l_160 + 2)][l_160];
                    }
                    g_105[(l_160 + 2)][l_160][l_160] = g_105[7][1][0];
                    for (l_146 = 0; (l_146 <= 1); l_146 += 1)
                    {
                        unsigned short l_162 = 0x70F1L;
                        int i, j, k;
                        if (l_162)
                            break;
                        l_106[(l_160 + 1)][l_146] = (l_162 ^ (((l_123 = l_161) && ((safe_mul_func_int8_t_s_s((g_105[(l_160 + 2)][l_160][l_160] = ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((l_171[1][1][2] & g_101), (safe_rshift_func_uint8_t_u_u((((!l_98) && (l_175 = (((l_174[4][0][1] = (1L & g_105[7][1][0])) >= (-4L)) | (0x9F92D8F5L == 0x92124FABL)))) && l_99[1][6]), 5)))), p_72)) & g_159), g_105[7][1][0])) > p_73)), p_72)) & g_101)) ^ 0x8F91L));
                        l_171[5][0][2] = (!((p_72 <= g_8[3]) == p_73));
                        l_95 = g_159;
                    }
                }
            }
        }
        else
        {
            unsigned l_181 = 0UL;
            int l_187 = 1L;
            unsigned short l_207 = 0x8A46L;
            short l_240[9];
            int i;
            for (i = 0; i < 9; i++)
                l_240[i] = 0xD9DFL;
            if (g_8[3])
            {
                unsigned char l_176 = 0x91L;
                int l_186 = (-9L);
                l_176 = p_73;
                for (g_159 = 0; (g_159 >= 42); g_159 = safe_add_func_int8_t_s_s(g_159, 3))
                {
                    int l_179[10][10][2] = {{{0x128F9B6AL,4L},{0x05E8D5C6L,0L},{0x6C0FFB38L,(-1L)},{0x02FCD55CL,1L},{(-1L),(-7L)},{9L,1L},{(-7L),1L},{(-1L),(-7L)},{1L,0x6C0FFB38L},{0x02FCD55CL,0L}},{{0x18A1B9CCL,0L},{(-7L),(-1L)},{9L,0xA15D0CA2L},{0x128F9B6AL,0L},{1L,(-10L)},{0x935A7FEAL,(-7L)},{0L,(-1L)},{0L,0x86F313ADL},{1L,1L},{0x6C0FFB38L,1L}},{{0x86F313ADL,0x935A7FEAL},{0x05E8D5C6L,(-7L)},{0L,0x05E8D5C6L},{0L,4L},{0L,0x05E8D5C6L},{0L,(-7L)},{0x05E8D5C6L,0x935A7FEAL},{0x86F313ADL,1L},{0x6C0FFB38L,1L},{1L,0x86F313ADL}},{{0L,(-1L)},{0L,(-7L)},{0x935A7FEAL,(-10L)},{1L,0L},{0x128F9B6AL,0xA15D0CA2L},{9L,(-1L)},{(-7L),0L},{0x18A1B9CCL,0L},{0x02FCD55CL,0L},{0x18A1B9CCL,0L}},{{(-7L),(-1L)},{9L,0xA15D0CA2L},{0x128F9B6AL,0L},{1L,(-10L)},{0x935A7FEAL,(-7L)},{0L,(-1L)},{0L,0x86F313ADL},{1L,1L},{0x6C0FFB38L,1L},{0x86F313ADL,0x935A7FEAL}},{{0x05E8D5C6L,(-7L)},{0L,0x05E8D5C6L},{0L,4L},{0L,0x05E8D5C6L},{0L,(-7L)},{0x05E8D5C6L,0x935A7FEAL},{0x86F313ADL,0xA15D0CA2L},{(-7L),0x24C02BEFL},{0x24C02BEFL,1L},{0L,0x935A7FEAL}},{{9L,0L},{1L,0x201DBCDBL},{1L,0x02FCD55CL},{0x86F313ADL,(-10L)},{4L,(-7L)},{0L,0L},{1L,9L},{(-1L),9L},{1L,0L},{0L,(-7L)}},{{4L,(-10L)},{0x86F313ADL,0x02FCD55CL},{1L,0x201DBCDBL},{1L,0L},{9L,0x935A7FEAL},{0L,1L},{0x24C02BEFL,0x24C02BEFL},{(-7L),0xA15D0CA2L},{1L,1L},{0x4FEC2E3EL,0L}},{{0x6C0FFB38L,0x4FEC2E3EL},{0L,0x128F9B6AL},{0L,0x4FEC2E3EL},{0x6C0FFB38L,0L},{0x4FEC2E3EL,1L},{1L,0xA15D0CA2L},{(-7L),0x24C02BEFL},{0x24C02BEFL,1L},{0L,0x935A7FEAL},{9L,0L}},{{1L,0x201DBCDBL},{1L,0x02FCD55CL},{0x86F313ADL,(-10L)},{4L,(-7L)},{0L,0L},{1L,9L},{(-1L),9L},{1L,0L},{0L,(-7L)},{4L,(-10L)}}};
                    int l_189 = 0x63CFF375L;
                    int i, j, k;
                    if (g_159)
                        break;
                    for (l_176 = 0; (l_176 <= 1); l_176 += 1)
                    {
                        int l_185 = 5L;
                        int l_188 = 2L;
                        int i, j, k;
                        if (l_179[4][6][0])
                            break;
                        g_191[1][9] = ((l_179[4][6][0] = (l_95 = (safe_unary_minus_func_uint16_t_u((l_190 = ((((g_105[(l_176 + 1)][(l_176 + 1)][l_176] = g_100) != (p_73 > (l_99[1][6] = l_181))) ^ (safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s((l_185 = l_176), ((l_186 = p_73) ^ (l_179[4][3][1] == (p_72 > (l_188 = (l_187 = g_101)))))))))) != (l_189 = ((+(g_8[4] <= l_176)) & 1L)))))))) || l_176);
                        g_105[3][1][1] = (~(safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(0x02L, (((l_185 || l_102) == ((g_198 = (safe_add_func_int8_t_s_s((-1L), 7UL))) <= g_191[0][9])) < p_73))), (p_72 = l_181))));
                        g_105[2][2][0] = p_73;
                    }
                }
                if (l_181)
                {
                    unsigned l_212 = 0UL;
                    int l_213 = (-10L);
                    int l_216 = 5L;
                    for (l_181 = 0; (l_181 < 49); l_181++)
                    {
                        int l_214 = (-7L);
                        char l_223[1][10][4] = {{{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)},{0L,(-3L),0L,(-3L)}}};
                        int l_237 = (-6L);
                        int i, j, k;
                        l_216 = ((safe_mul_func_int16_t_s_s((((safe_add_func_uint8_t_u_u((252UL | (safe_rshift_func_uint16_t_u_s((l_207 <= (safe_lshift_func_int16_t_s_s(((l_207 && (safe_add_func_int16_t_s_s(g_198, l_212))) == (((g_105[7][1][0] = p_72) == (((p_72 < ((~(l_214 = (l_213 = l_102))) >= (g_215 = g_101))) & p_73) == l_99[1][6])) != l_181)), 13))), 10))), p_73)) >= 0x743FL) < l_102), p_72)) < g_198);
                        g_105[7][1][0] = g_215;
                        l_186 = 0xD6334020L;
                        g_241 = (((l_240[3] = (safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_223[0][9][0], l_224)), ((safe_mod_func_int8_t_s_s((l_186 = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((g_239 = ((safe_mul_func_uint16_t_u_u((g_8[3] == (p_73 && (safe_rshift_func_int16_t_s_s(p_72, 0)))), (((((g_191[1][4] && (((g_238 = l_237) == (g_215 = (p_72 & (p_73 < p_73)))) != g_101)) >= (-1L)) > g_8[0]) < 0x130A590FL) > 1UL))) ^ p_73)) != (-1L)), l_212)) != 0x9C8FL), p_73))), p_72)) | 0xEF28FA6DL))) || g_198), l_207))) | 0x29F9L) != g_159);
                    }
                    l_224 = (safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0UL, ((safe_rshift_func_uint8_t_u_s(l_98, 0)) >= ((safe_sub_func_uint32_t_u_u(0x30C0D326L, p_72)) <= l_102)))), (0x3AL == (l_99[0][2] = l_181)))) || (l_187 = (l_95 = (g_191[0][5] = 0x3BL)))), (safe_sub_func_int16_t_s_s(l_98, l_186))));
                }
                else
                {
                    return g_101;
                }
                g_105[4][2][0] = ((g_191[1][3] == p_72) || l_99[1][6]);
            }
            else
            {
                int l_254 = 0L;
                int l_265 = 0xF90F1C07L;
                l_99[0][7] = (l_254 = (+0L));
                g_105[7][3][0] = (safe_add_func_uint16_t_u_u(p_73, (safe_rshift_func_uint8_t_u_s(((0xBDL >= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_265 = l_102), (safe_sub_func_uint16_t_u_u(p_72, ((l_187 = 4L) <= (safe_lshift_func_uint8_t_u_s((0xD9L || ((0x3767BD36L < (p_73 != (g_191[0][9] = (safe_mul_func_uint16_t_u_u(0xAE75L, p_72))))) || g_241)), 1))))))), 11)), l_99[1][6]))) && l_99[2][4]), g_239))));
            }
        }
        l_99[1][6] = (g_239 && (safe_sub_func_uint16_t_u_u(65532UL, 0xDA6EL)));
        l_224 = p_73;
    }
    return p_72;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_105[i][j][k], "g_105[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_191[i][j], "g_191[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_274[i], "g_274[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_290[i][j], "g_290[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_565, "g_565", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_935[i][j][k], "g_935[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1093, "g_1093", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1232[i], "g_1232[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1258, "g_1258", print_hash_value);
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1520, "g_1520", print_hash_value);
    transparent_crc(g_1527, "g_1527", print_hash_value);
    transparent_crc(g_1634, "g_1634", print_hash_value);
    transparent_crc(g_1766, "g_1766", print_hash_value);
    transparent_crc(g_1848, "g_1848", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1937[i], "g_1937[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1950, "g_1950", print_hash_value);
    transparent_crc(g_2058, "g_2058", print_hash_value);
    transparent_crc(g_2101, "g_2101", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2177[i], "g_2177[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2276, "g_2276", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2303[i], "g_2303[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2328, "g_2328", print_hash_value);
    transparent_crc(g_2402, "g_2402", print_hash_value);
    transparent_crc(g_2610, "g_2610", print_hash_value);
    transparent_crc(g_2742, "g_2742", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2751[i], "g_2751[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2818, "g_2818", print_hash_value);
    transparent_crc(g_2827, "g_2827", print_hash_value);
    transparent_crc(g_2856, "g_2856", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_2986[i][j], "g_2986[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
