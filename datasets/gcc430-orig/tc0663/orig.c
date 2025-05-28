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



static char g_22 = 0xB6L;
static int g_75[4][9] = {{0L,0L,0L,0x6D7BFF02L,0L,0x719BD953L,0x719BD953L,0L,0x6D7BFF02L},{0L,0L,0L,0x6D7BFF02L,0L,0x719BD953L,0x719BD953L,0L,0x6D7BFF02L},{0L,0L,0L,0x6D7BFF02L,0L,0x719BD953L,0x719BD953L,0L,0x6D7BFF02L},{0L,0L,0L,0x6D7BFF02L,0L,0x719BD953L,0x719BD953L,0L,0x6D7BFF02L}};
static int * const g_74 = &g_75[1][4];
static int * const *g_73 = &g_74;
static unsigned short g_95 = 0UL;
static int g_140 = 0x526C73BFL;
static unsigned short g_144 = 9UL;
static char g_177 = 0L;
static int g_178 = (-5L);
static unsigned g_199 = 0xE97413A3L;
static int *g_232 = &g_75[1][4];
static volatile unsigned char g_274 = 255UL;
static volatile int g_563[3] = {(-1L),(-1L),(-1L)};
static int g_580 = 0x4A608506L;
static unsigned short g_694 = 0UL;
static int g_767 = 0L;
static int *g_766 = &g_767;
static int **g_765 = &g_766;
static int ***g_764 = &g_765;
static int g_802 = 0x915D3B6BL;
static const int *g_814 = (void*)0;
static volatile unsigned char g_851 = 0x88L;
static short g_884 = 0L;
static unsigned g_948 = 0UL;
static volatile char g_1010 = 0x60L;
static int **g_1146 = &g_232;
static char g_1269[10][10][2] = {{{0x4DL,0xC9L},{0x95L,(-1L)},{0x6BL,3L},{1L,0x6FL},{0x76L,0x44L},{0x76L,0x6FL},{0x6EL,(-1L)},{0x6FL,(-1L)},{1L,0x76L},{5L,(-1L)}},{{(-1L),5L},{0x76L,1L},{(-1L),0x6FL},{(-1L),0x6EL},{0x6FL,0x76L},{0x44L,0x76L},{0x6FL,0x6EL},{(-1L),0x6FL},{(-1L),1L},{0x76L,5L}},{{(-1L),(-1L)},{5L,0x76L},{1L,(-1L)},{0x6FL,(-1L)},{0x6EL,0x6FL},{0x76L,0x44L},{0x76L,0x6FL},{0x6EL,(-1L)},{0x6FL,(-1L)},{1L,0x76L}},{{5L,(-1L)},{(-1L),5L},{0x76L,1L},{(-1L),0x6FL},{(-1L),0x6EL},{0x6FL,0x76L},{0x44L,0x76L},{0x6FL,0x6EL},{(-1L),0x6FL},{(-1L),1L}},{{0x76L,5L},{(-1L),(-1L)},{5L,0x76L},{1L,(-1L)},{0x6FL,(-1L)},{0x6EL,0x6FL},{0x76L,0x44L},{0x76L,0x6FL},{0x6EL,(-1L)},{0x6FL,(-1L)}},{{1L,0x76L},{(-1L),0x36L},{0x36L,(-1L)},{0x4DL,0x6FL},{(-10L),0x76L},{0x36L,1L},{0x76L,0x4DL},{5L,0x4DL},{0x76L,1L},{0x36L,0x76L}},{{(-10L),0x6FL},{0x4DL,(-1L)},{0x36L,0x36L},{(-1L),0x4DL},{0x6FL,(-10L)},{0x76L,0x36L},{1L,0x76L},{0x4DL,5L},{0x4DL,0x76L},{1L,0x36L}},{{0x76L,(-10L)},{0x6FL,0x4DL},{(-1L),0x36L},{0x36L,(-1L)},{0x4DL,0x6FL},{(-10L),0x76L},{0x36L,1L},{0x76L,0x4DL},{5L,0x4DL},{0x76L,1L}},{{0x36L,0x76L},{(-10L),0x6FL},{0x4DL,(-1L)},{0x36L,0x36L},{(-1L),0x4DL},{0x6FL,(-10L)},{0x76L,0x36L},{1L,0x76L},{0x4DL,5L},{0x4DL,0x76L}},{{1L,0x36L},{0x76L,(-10L)},{0x6FL,0x4DL},{(-1L),0x36L},{0x36L,(-1L)},{0x4DL,0x6FL},{(-10L),0x76L},{0x36L,1L},{0x76L,0x4DL},{3L,5L}}};
static unsigned short g_1275 = 0xBD52L;
static volatile unsigned g_1352 = 0x575A697DL;
static int g_1421 = 0L;
static int g_1438 = 0xB53ABD0FL;



static int func_1(void);
static char func_16(unsigned p_17, int p_18, int p_19, short p_20, const int p_21);
static int func_23(const unsigned short p_24, unsigned char p_25, unsigned short p_26);
static unsigned short func_27(int p_28, unsigned char p_29, int p_30);
static short func_33(unsigned short p_34);
static char func_41(unsigned short p_42);
static int func_43(char p_44, int p_45);
static short func_48(unsigned p_49);
static const unsigned char func_53(unsigned p_54, short p_55, char p_56);
static short func_60(unsigned short p_61, const char p_62, char p_63, unsigned p_64);
static int func_1(void)
{
    unsigned l_10 = 0xB9DD952EL;
    unsigned char l_15 = 255UL;
    unsigned char l_1185 = 0x08L;
    int *l_1437 = &g_1438;
    unsigned l_1440 = 4294967294UL;
    (*l_1437) ^= (safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((l_10 ^ (safe_mod_func_uint32_t_u_u(0x16EFA42BL, (safe_lshift_func_uint16_t_u_s(l_15, 8))))) == (func_16(g_22, func_23(((((((func_27(l_10, ((safe_mul_func_int32_t_s_s(0L, ((((func_33(((safe_mod_func_uint16_t_u_u((((((safe_add_func_uint8_t_u_u(l_15, (9UL | (safe_mod_func_int16_t_s_s(0xD362L, 65535UL))))) & 0xA9B6L) && g_22) & g_22) ^ g_22), g_22)) , g_22)) <= l_10) != l_10) < g_22) == 0x0611L))) < l_15), g_22) < l_15) , l_1185) , 6L) <= l_15) > l_1185) >= g_884), l_10, l_1185), g_948, g_1269[9][2][1], l_1185) >= 0x26L)), 6)), g_1269[5][5][1])), 0x4204L)) <= l_10), 3));


    ;

    (*g_74) = (safe_unary_minus_func_uint16_t_u((l_1440 == (*l_1437))));
    return (*l_1437);
}







static char func_16(unsigned p_17, int p_18, int p_19, short p_20, const int p_21)
{
    return p_18;
}







static int func_23(const unsigned short p_24, unsigned char p_25, unsigned short p_26)
{
    unsigned short l_1188[3][6][5] = {{{0x2EF0L,0x37B7L,0x33C5L,8UL,0xA062L},{0x2EF0L,0x33C5L,0x5594L,0x33C5L,0x2EF0L},{0x37B7L,0xA508L,1UL,8UL,0x3242L},{1UL,0xA508L,0x37B7L,0x37B7L,0xA508L},{0x5594L,0x33C5L,0x2EF0L,0xA508L,0x3242L},{0x33C5L,0x37B7L,0x2EF0L,0UL,0x2EF0L}},{{0x3242L,0x3242L,0x37B7L,0x5594L,0xA062L},{0x33C5L,0xA062L,1UL,0x5594L,0x5594L},{0x5594L,65533UL,0x5594L,0UL,8UL},{1UL,0xA062L,0x33C5L,0xA508L,8UL},{0x37B7L,0x3242L,0x3242L,0x37B7L,0x5594L},{0x2EF0L,0x37B7L,0x33C5L,8UL,0xA062L}},{{0x2EF0L,0x33C5L,0x5594L,0x33C5L,0x2EF0L},{0x37B7L,0xA508L,1UL,8UL,0x3242L},{1UL,0xA508L,0x37B7L,0x37B7L,0xA508L},{0x5594L,0x33C5L,0x2EF0L,0xA508L,0x3242L},{0x33C5L,0x37B7L,0x2EF0L,0UL,0x2EF0L},{0x3242L,0x3242L,0x37B7L,0x5594L,0xA062L}}};
    unsigned short l_1193 = 0x1D30L;
    int ***l_1194 = &g_1146;
    unsigned l_1205 = 4294967289UL;
    int *l_1207 = &g_75[1][4];
    short l_1280 = 0x9131L;
    int *l_1281 = (void*)0;
    int *l_1282 = &g_802;
    short l_1305 = 0x66C4L;
    unsigned short l_1372 = 0UL;
    int i, j, k;
    if (((((safe_rshift_func_uint8_t_u_u(l_1188[0][3][1], 2)) != (func_41((((&g_73 != &g_765) & (safe_add_func_int16_t_s_s(0L, (((((*g_766) | (p_24 || (safe_lshift_func_int8_t_s_u(0L, (func_53((((p_25 != l_1188[2][2][2]) , 0xFCE15AECL) , 4294967288UL), p_24, g_767) <= l_1193))))) < 4294967291UL) < (-3L)) < 4294967288UL)))) | p_26)) & p_24)) , &g_73) != l_1194))
    {
        const int *l_1195 = &g_802;
        const int **l_1196 = &l_1195;
        int l_1222 = (-1L);
        int l_1266 = 0xBD435475L;
        (*l_1196) = l_1195;
        for (g_177 = 0; (g_177 <= 3); g_177 += 1)
        {
            short l_1203 = 5L;
            const int **l_1204 = (void*)0;
            int l_1261 = 0L;
            unsigned short l_1274 = 0x3CD1L;
        }
        (**g_73) = (***g_764);
    }
    else
    {
        (**l_1194) = (void*)0;

        ;
    }
    (*l_1282) ^= ((((~p_24) , (((safe_mod_func_int32_t_s_s((*g_766), ((*l_1207) || (safe_rshift_func_uint16_t_u_u(g_178, 7))))) , (((*l_1207) & (((void*)0 == (*g_764)) , g_75[1][4])) , 0xD771L)) & p_25)) , l_1280) != p_25);
    for (g_144 = 14; (g_144 <= 8); g_144 = safe_sub_func_int16_t_s_s(g_144, 4))
    {
        unsigned char l_1291 = 255UL;
        int **l_1316 = &l_1207;
        unsigned l_1322[3][2];
        const unsigned l_1436 = 0x00421F9DL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_1322[i][j] = 0xB36071F8L;
        }
        for (g_884 = 0; (g_884 == (-25)); g_884 = safe_sub_func_uint32_t_u_u(g_884, 8))
        {
            const char l_1290 = 0x21L;
            int l_1307 = 0x335887F8L;
            int ***l_1367[10];
            unsigned l_1434 = 0x8C4158DBL;
            int i;
            for (i = 0; i < 10; i++)
                l_1367[i] = &l_1316;
            for (l_1280 = 0; (l_1280 <= 2); l_1280 += 1)
            {
                int *l_1317 = &g_75[1][4];
                unsigned l_1341 = 0x2043F135L;
                int i, j, k;
                if ((safe_unary_minus_func_uint32_t_u(func_60(g_563[l_1280], (((void*)0 == (*g_764)) <= func_53(l_1188[l_1280][(l_1280 + 2)][(l_1280 + 2)], ((safe_rshift_func_uint16_t_u_s(((g_75[3][6] == g_580) , func_60((p_26 <= ((p_25 == (func_60(g_95, p_26, g_1269[1][0][1], p_26) != l_1290)) , l_1291)), g_1269[4][2][0], g_177, p_24)), p_26)) != p_24), g_177)), g_694, l_1290))))
                {
                    int * const l_1301 = &g_75[3][5];
                    int *** const l_1306 = &g_1146;
                    if ((safe_rshift_func_int16_t_s_u(l_1290, 11)))
                    {
                        short l_1294 = 0xBE7DL;
                        (*g_74) &= l_1294;
                    }
                    else
                    {
                        (***g_764) |= 8L;
                    }
                    if ((***g_764))
                    {
                        int *l_1302 = &g_802;
                        l_1307 |= (safe_sub_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((g_1269[1][0][1] <= func_27((l_1301 != l_1302), (((*l_1301) ^ ((((safe_mod_func_uint8_t_u_u(l_1305, g_694)) ^ ((void*)0 == l_1306)) && ((0x90E0C3E4L == (-6L)) || g_1275)) | g_144)) , 0x51L), g_1269[1][0][1])), 5)) & p_24) , g_144), g_144)) >= p_25) , 0xCBB1D3CFL), 0x069B1B4FL));
                    }
                    else
                    {
                        int l_1315[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1315[i] = 1L;
                        (*g_765) = (**g_764);
                        (*l_1282) &= (func_60(((((*l_1301) & (l_1291 || (*l_1301))) != g_95) && ((safe_unary_minus_func_uint32_t_u(func_53(((((safe_rshift_func_int8_t_s_s(((0x0DD1E400L < ((~0UL) , ((safe_sub_func_int16_t_s_s((p_26 , (safe_add_func_uint16_t_u_u((g_563[1] || g_1010), g_767))), g_1269[1][0][1])) >= 0x842FL))) <= 1L), 0)) && p_26) ^ l_1307) > g_75[1][4]), g_177, p_26))) || p_26)), p_24, l_1315[1], g_140) <= 4294967287UL);
                        (***g_764) &= ((0x9027L == (((void*)0 != (*g_764)) != (((((*l_1194) != (void*)0) , (*l_1306)) == l_1316) , (p_25 > p_25)))) , (-1L));
                        return (**g_765);
                    }
                }
                else
                {
                    (**l_1316) |= (l_1317 != l_1317);
                    if (p_26)
                        continue;
                }
                (**l_1316) = (((-3L) != (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((g_802 < l_1322[0][1]) & (*g_74)), (0UL != (safe_add_func_int32_t_s_s(1L, p_24))))), (p_26 | (p_25 ^ 0L))))) > 0x0588L);
                for (g_802 = 0; (g_802 <= 1); g_802 += 1)
                {
                    unsigned short l_1342[5][7] = {{6UL,65529UL,0x1CBFL,0xB72FL,0xBD37L,0x52B7L,0xCA55L},{65529UL,1UL,0x1CBFL,1UL,0xFDAEL,1UL,0x1CBFL},{1UL,1UL,1UL,65535UL,0xB72FL,0xE50FL,0x1CBFL},{0UL,0xFCAEL,65535UL,1UL,0x1CBFL,0xCA55L,0xCA55L},{0xB72FL,0xFDAEL,65529UL,0xFDAEL,0xB72FL,1UL,0UL}};
                    int i, j, k;
                    if ((safe_mod_func_uint8_t_u_u((g_1269[l_1280][(l_1280 + 3)][g_802] & (-1L)), (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((!func_60((g_1269[(l_1280 + 7)][(l_1280 + 1)][g_802] , (((p_24 != (safe_mod_func_int16_t_s_s((g_767 ^ (0x9801F759L > g_1269[(l_1280 + 7)][(l_1280 + 1)][g_802])), 65535UL))) && func_60(((safe_lshift_func_uint8_t_u_s(((((safe_lshift_func_uint16_t_u_u(((((g_948 <= g_1275) ^ 65535UL) , (*g_764)) != (void*)0), p_26)) ^ p_24) , p_26) , (*l_1317)), p_25)) <= (*l_1207)), g_851, l_1341, p_26)) <= p_25)), (*l_1282), l_1342[0][1], g_694)), g_1269[l_1280][(l_1280 + 3)][g_802])), 0L)), 5UL)))))
                    {
                        const int **l_1349 = &g_814;
                        if (p_24)
                            break;
                        (**g_764) = l_1317;

                        ;
                        (**l_1316) = ((safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((*g_764) == l_1349), 5)), func_53(g_75[2][2], p_25, (((g_1269[(l_1280 + 7)][(l_1280 + 1)][g_802] | p_25) , (safe_sub_func_uint16_t_u_u((g_1352 , (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((*l_1207) == 1UL), 14)), 0x7EC7605BL))), p_25))) == p_24)))) , (*l_1282)) , p_26) && p_25) & 0x03EC7877L), 0UL)) == 0UL);
                        (*l_1317) = ((!(*l_1207)) >= g_75[1][4]);
                    }
                    else
                    {
                        if ((*l_1282))
                            break;
                        if (p_25)
                            break;
                    }
                    if ((**g_765))
                        continue;
                    for (g_178 = 0; (g_178 <= 1); g_178 += 1)
                    {
                        int l_1368 = (-1L);
                        unsigned l_1371 = 0x2C82EC97L;
                        int i, j;
                        l_1368 |= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_563[g_802] , (&g_73 != &g_1146)), ((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_75[(g_178 + 2)][(g_178 + 1)], (((((-1L) != (*g_74)) , (void*)0) != ((safe_rshift_func_uint8_t_u_s(g_1275, ((**l_1316) <= p_24))) , l_1367[8])) <= g_767))), g_75[(g_178 + 2)][(g_178 + 1)])) , p_24))), g_144));
                        (*g_765) = l_1317;

                        ;
                        (*g_74) = (g_95 | ((func_60(p_24, g_563[g_802], (func_60(g_177, ((safe_add_func_int16_t_s_s((((l_1371 ^ l_1372) <= (g_22 ^ g_1269[1][0][1])) | (g_694 , 6UL)), 0x43CBL)) || g_95), g_884, (**l_1316)) , (-8L)), g_95) , l_1342[0][1]) || g_274));
                    }
                    for (l_1291 = 0; (l_1291 <= 1); l_1291 += 1)
                    {
                        int **l_1383 = &l_1207;
                        (*l_1383) = ((safe_lshift_func_int16_t_s_u((((safe_lshift_func_uint8_t_u_s(p_24, g_177)) , 4294967295UL) || (safe_sub_func_int8_t_s_s(p_26, g_75[1][4]))), (p_24 | (safe_rshift_func_uint16_t_u_s(((+(safe_sub_func_uint32_t_u_u(p_24, (p_25 <= 0xA702023DL)))) && 0xDFBD9A9DL), 14))))) , (*g_73));
                    }
                }
            }
            for (l_1291 = 0; (l_1291 < 46); l_1291 = safe_add_func_int8_t_s_s(l_1291, 1))
            {
                int l_1386 = 1L;
                int **l_1406 = (void*)0;
                char l_1422 = 0xC5L;
                short l_1423 = (-7L);
            }
            for (p_25 = 1; (p_25 == 35); p_25 = safe_add_func_int8_t_s_s(p_25, 5))
            {
                int * const *l_1435 = &g_766;
                for (g_694 = 28; (g_694 <= 9); g_694 = safe_sub_func_uint16_t_u_u(g_694, 5))
                {
                    if (p_25)
                        break;
                }
                if ((*g_766))
                    continue;
                (**l_1435) = (g_1010 > (safe_rshift_func_uint8_t_u_s(4UL, ((safe_sub_func_uint8_t_u_u(func_60((safe_rshift_func_uint16_t_u_s((((void*)0 != l_1367[8]) < (((l_1434 , p_24) , (l_1435 == l_1316)) != (g_75[2][6] , 0xE6C7C76FL))), g_580)), l_1436, g_580, (**l_1316)), 0xEEL)) | 0x35F8FAFCL))));
            }
        }
    }

    ;
    (*l_1207) = 0x50586075L;
    return (*g_766);
}







static unsigned short func_27(int p_28, unsigned char p_29, int p_30)
{
    int l_853 = 0L;
    unsigned short l_856 = 65535UL;
    int *l_885 = &g_178;
    unsigned l_971 = 0x2413E6ADL;
    const unsigned l_998 = 1UL;
    int ***l_1109 = &g_765;
    const int *l_1173[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1173[i] = &g_178;
    (*g_766) = ((((l_853 | (0x30BEL >= (p_30 | (((safe_sub_func_uint32_t_u_u(p_28, g_802)) | g_75[2][1]) <= ((((g_802 | (p_30 < (+((l_853 >= 0L) , l_853)))) == l_856) <= 0x44EEL) || l_856))))) , 0x09L) > p_29) , l_853);
    if ((*g_74))
    {
        short l_863 = (-1L);
        int ***l_916 = &g_765;
        unsigned l_1000[3][5] = {{0x5E121461L,4UL,4UL,0x5E121461L,1UL},{0x5E121461L,4294967290UL,0UL,0UL,4294967290UL},{1UL,4UL,0UL,0xA85EC28FL,0xA85EC28FL}};
        short l_1042 = 0xA2E6L;
        int *l_1044 = &g_178;
        unsigned char l_1077 = 0x59L;
        int i, j;
        if (((p_30 | ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_863, (((0x9268A132L > (p_28 <= l_863)) < ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((l_856 == (**g_73)) | (((*g_764) != (void*)0) | 0x612AL)), p_29)), 0x0FL)) < 1UL)) & l_856))), l_863)), p_30)) <= (-1L))) | g_563[2]))
        {
            int l_874 = (-1L);
            unsigned char l_888 = 0x51L;
            int *l_896 = &l_874;
            short l_898 = 0xC1EAL;
            int l_910 = (-1L);
            for (p_29 = 0; (p_29 != 45); ++p_29)
            {
                unsigned l_897[4][3][4] = {{{0UL,0UL,4294967291UL,4294967290UL},{0UL,1UL,0xCF893079L,0UL},{0x149683DAL,4294967290UL,0x149683DAL,0xCF893079L}},{{4294967293UL,4294967290UL,4294967291UL,0UL},{4294967290UL,1UL,1UL,4294967290UL},{0x149683DAL,0UL,1UL,0xCF893079L}},{{4294967290UL,4294967293UL,4294967291UL,4294967293UL},{4294967293UL,1UL,0x149683DAL,4294967293UL},{0x149683DAL,4294967293UL,0xCF893079L,0xCF893079L}},{{0UL,0UL,4294967291UL,4294967290UL},{0UL,1UL,0xCF893079L,0UL},{0x149683DAL,4294967290UL,0x149683DAL,0xCF893079L}}};
                int i, j, k;
            }
        }
        else
        {
            char l_911 = (-1L);
            const int *l_921 = &g_75[0][4];
            int l_945 = 0x8602CE4BL;
            int l_956 = 2L;
            (**g_73) |= (255UL ^ (l_911 , l_911));
            for (g_140 = 0; (g_140 != 6); ++g_140)
            {
                int l_932 = 0x0762A247L;
            }
            (**g_765) ^= (-8L);
        }
        for (l_863 = 0; (l_863 >= 13); l_863++)
        {
            unsigned l_1009 = 0x235482E8L;
            short l_1025[8] = {0x86B8L,0x86B8L,0x86B8L,0x86B8L,0x86B8L,0x86B8L,0x86B8L,0x86B8L};
            int **l_1043 = &g_232;
            unsigned short l_1127[5];
            unsigned l_1157 = 0UL;
            int l_1160 = (-1L);
            int i;
            for (i = 0; i < 5; i++)
                l_1127[i] = 1UL;
        }
        (*g_765) = (**l_916);
    }
    else
    {
        char l_1179 = 7L;
        int l_1180 = 0xBA004FFBL;
        int ***l_1181 = &g_765;
        for (g_140 = (-22); (g_140 < (-27)); g_140 = safe_sub_func_uint16_t_u_u(g_140, 1))
        {
            int l_1182[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1182[i] = 8L;
            for (g_580 = (-16); (g_580 == 28); g_580 = safe_add_func_uint16_t_u_u(g_580, 9))
            {
                l_1179 = 0x7481CF91L;
                (*g_766) = p_28;
            }
            (*g_765) = ((func_53(((l_1180 , l_1181) == (void*)0), l_1182[0], (***l_1181)) > (((p_29 , &g_1146) != (p_28 , l_1109)) <= 0x325D4FAAL)) , (*g_765));
            return g_563[0];
        }
        for (g_802 = 0; (g_802 > (-23)); --g_802)
        {
            return p_29;
        }
    }
    return g_177;
}







static short func_33(unsigned short p_34)
{
    unsigned l_52 = 0xA2D3C5EBL;
    int *l_749 = (void*)0;
    int ** const *l_809 = (void*)0;
    if (((((func_41((0UL > ((4UL ^ func_43(p_34, ((safe_add_func_int16_t_s_s(g_22, ((func_48(((safe_mod_func_int32_t_s_s(l_52, (p_34 || 3UL))) < l_52)) , g_144) ^ 1UL))) >= g_144))) || 0xB2E5556AL))) , g_580) > l_52) , g_22) < 0x80L))
    {
        int *l_747 = &g_75[0][5];
        int **l_748[3][2] = {{&g_232,&g_232},{&g_232,&g_232},{&g_232,&g_232}};
        int i, j;
        l_749 = l_747;

        ;
    }
    else
    {
        int *l_750 = &g_178;
        int **l_751 = (void*)0;
        unsigned char l_785[9][1] = {{5UL},{255UL},{255UL},{5UL},{255UL},{255UL},{5UL},{255UL},{255UL}};
        unsigned l_825 = 0x6594D01FL;
        unsigned short l_841 = 5UL;
        int l_845[8];
        int i, j;
        for (i = 0; i < 8; i++)
            l_845[i] = 5L;
        g_232 = l_750;

        ;
        if ((safe_add_func_uint16_t_u_u((0UL == (safe_mod_func_uint32_t_u_u(p_34, (safe_rshift_func_int16_t_s_s((func_43((*l_750), p_34) < (((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((0x73L > (~((void*)0 == g_764))), 0)), (p_34 < g_140))) , (-1L)) <= g_140), 7)) <= 0xDB10L) || g_177)), p_34))))), p_34)))
        {
            int *l_768 = &g_767;
            (*g_765) = l_768;
            for (p_34 = (-19); (p_34 != 16); p_34 = safe_add_func_int32_t_s_s(p_34, 9))
            {
                (**g_764) = (*g_765);
            }
            if ((**g_73))
            {
                short l_771 = 0xC06AL;
                (**g_764) = l_768;
                return l_771;
            }
            else
            {
                const unsigned l_784 = 0x8DBC9EC8L;
                unsigned char l_786[10][7][3] = {{{0xD0L,0x73L,0xD0L},{0x93L,0x8AL,3UL},{0xD0L,0x69L,252UL},{0x93L,0x06L,0x93L},{0xD0L,255UL,255UL},{0x93L,0x4CL,7UL},{0xD0L,0x73L,0xD0L}},{{0x93L,0x8AL,3UL},{0xD0L,0x69L,252UL},{0x93L,0x06L,0x93L},{0xD0L,255UL,255UL},{0x93L,0x4CL,7UL},{0xD0L,0x73L,0xD0L},{0x93L,0x8AL,3UL}},{{0xD0L,0x69L,252UL},{0x93L,0x06L,0x93L},{0xD0L,255UL,255UL},{0x93L,0x4CL,7UL},{0xD0L,0x73L,0xD0L},{0x93L,0x8AL,3UL},{0xD0L,0x69L,252UL}},{{0x93L,0x06L,0x93L},{0xD0L,255UL,255UL},{0x93L,0x4CL,7UL},{0xD0L,255UL,252UL},{7UL,0x4CL,0x93L},{252UL,0x73L,255UL},{7UL,0x8AL,7UL}},{{252UL,0x69L,0xD0L},{7UL,0x06L,3UL},{252UL,255UL,252UL},{7UL,0x4CL,0x93L},{252UL,0x73L,255UL},{7UL,0x8AL,7UL},{252UL,0x69L,0xD0L}},{{7UL,0x06L,3UL},{252UL,255UL,252UL},{7UL,0x4CL,0x93L},{252UL,0x73L,255UL},{7UL,0x8AL,7UL},{252UL,0x69L,0xD0L},{7UL,0x06L,3UL}},{{252UL,255UL,252UL},{7UL,0x4CL,0x93L},{252UL,0x73L,255UL},{7UL,0x8AL,7UL},{252UL,0x69L,0xD0L},{7UL,0x06L,3UL},{252UL,255UL,252UL}},{{7UL,0x4CL,0x93L},{252UL,0x73L,255UL},{7UL,0x8AL,7UL},{252UL,0x69L,0xD0L},{7UL,0x06L,3UL},{252UL,255UL,252UL},{7UL,0x4CL,0x93L}},{{1UL,252UL,255UL},{7UL,0xA1L,7UL},{1UL,0xD0L,7UL},{7UL,1UL,0xCBL},{1UL,255UL,1UL},{7UL,255UL,1UL},{1UL,252UL,255UL}},{{7UL,0xA1L,7UL},{1UL,0xD0L,7UL},{7UL,1UL,0xCBL},{1UL,255UL,1UL},{7UL,255UL,1UL},{1UL,252UL,255UL},{7UL,0xA1L,7UL}}};
                int i, j, k;
                (**g_765) = ((((safe_lshift_func_int8_t_s_u(((*l_768) < (safe_add_func_uint16_t_u_u(((-4L) > (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(0x9816BFF5L, (0x8CB1L & g_22))) || (g_22 , func_41((safe_add_func_uint16_t_u_u(l_784, (((((0x29124C06L ^ g_177) > 4294967287UL) >= p_34) , l_786[8][1][0]) != 0x93L)))))) && g_178), 4)), p_34))), g_22))), p_34)) , 9UL) && g_177) & p_34);
                for (g_140 = 0; (g_140 == 16); g_140 = safe_add_func_int32_t_s_s(g_140, 3))
                {
                    short l_793 = 0x0DC5L;
                    int *l_800 = (void*)0;
                    int *l_801 = &g_802;
                    (*l_801) ^= (safe_mod_func_int8_t_s_s(((safe_add_func_int16_t_s_s(func_43(g_563[2], p_34), p_34)) > l_793), ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_793, (0xC072225DL != p_34))) , (safe_mod_func_int8_t_s_s(g_767, g_694))), l_784)) ^ 1L)));
                }
                (*g_766) &= (**g_73);
                l_749 = l_749;
            }
            (**g_765) = 9L;
        }
        else
        {
            unsigned short l_803 = 0x9C62L;
            int **l_806[9] = {&g_766,&g_766,&g_766,&g_766,&g_766,&g_766,&g_766,&g_766,&g_766};
            int i;
            if ((*l_750))
            {
                int ***l_810 = &l_751;
                const int l_811 = 0x1BD7AF7CL;
                const int *l_813 = &g_178;
                const int **l_812[8] = {&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813,&l_813};
                int i;
                (*g_765) = (l_803 , (**g_764));
                (**g_765) &= ((safe_rshift_func_int16_t_s_u(func_60((((((void*)0 == l_806[2]) , (0xFDDB5F81L || (func_60((((safe_lshift_func_int8_t_s_s((-7L), 0)) | ((l_809 == l_810) >= (**g_73))) | p_34), g_694, g_140, g_22) , p_34))) , &l_806[2]) != &g_765), l_811, g_144, g_177), 4)) ^ g_563[2]);
                (*l_750) = (**g_73);
                g_814 = &l_811;

                ;
            }
            else
            {
                int l_815[5] = {0x82A8FE07L,0x82A8FE07L,0x82A8FE07L,0x82A8FE07L,0x82A8FE07L};
                unsigned short l_818 = 0x42B6L;
                int i;
                (**g_765) = (*g_74);
                l_825 = ((p_34 ^ func_53(l_815[3], (safe_rshift_func_int8_t_s_u(((p_34 && (p_34 && p_34)) != g_144), 5)), g_144)) <= p_34);
                for (l_818 = 11; (l_818 != 1); --l_818)
                {
                    unsigned short l_828 = 1UL;
                    unsigned l_837 = 0UL;
                    int ***l_838 = (void*)0;
                    int l_852 = 0x5C3E30FAL;
                    if (((l_828 , g_178) >= (p_34 != (((((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(0x7EB1E710L, (safe_add_func_uint32_t_u_u(func_60(l_837, ((((l_838 == (func_60(p_34, p_34, (safe_mod_func_uint16_t_u_u(p_34, g_563[2])), g_144) , &g_73)) | p_34) , 0x73L) | 0x99L), p_34, g_767), g_199)))), g_178)), p_34)) || l_841) > 0x3824L) != g_144) ^ 5UL))))
                    {
                        unsigned l_844 = 0x597283BBL;
                        (***g_764) = p_34;
                        (*l_750) &= ((((safe_sub_func_int16_t_s_s(p_34, ((g_75[2][7] != l_844) , g_95))) , g_22) && (l_815[1] == l_815[2])) , (func_60(((***g_764) , p_34), p_34, l_828, p_34) <= g_580));
                    }
                    else
                    {
                        unsigned char l_850 = 0x9CL;
                        (**g_764) = (**g_764);
                        l_815[0] ^= (*l_750);
                        (**g_765) ^= (l_838 != (func_60(p_34, ((safe_add_func_uint16_t_u_u(g_274, p_34)) , (safe_mod_func_int32_t_s_s(l_850, g_851))), (func_53(g_140, p_34, g_802) && (-4L)), l_852) , &g_765));
                    }
                }
            }


            return p_34;
        }


        return g_177;
    }


    ;
    return p_34;
}







static char func_41(unsigned short p_42)
{
    int *l_735 = &g_75[3][5];
    unsigned l_742 = 4294967287UL;
    (*l_735) = ((safe_rshift_func_uint16_t_u_s(((((**g_73) != (*g_74)) , l_735) != (*g_73)), (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((&l_735 != (void*)0), g_563[2])), (p_42 , ((l_742 != p_42) || p_42)))) <= (-10L)), (*l_735))))) & (*l_735));
    for (l_742 = 0; (l_742 <= 45); ++l_742)
    {
        unsigned char l_745 = 0x39L;
        int *l_746 = &g_178;
        l_745 ^= 0xE9520C9AL;
        (*l_746) &= (*g_74);
    }
    return g_144;
}







static int func_43(char p_44, int p_45)
{
    unsigned l_542 = 0xAA0F46BCL;
    int **l_559 = &g_232;
    int ***l_558[8] = {&l_559,&l_559,&l_559,&l_559,&l_559,&l_559,&l_559,&l_559};
    unsigned l_567 = 0x43C44C2DL;
    int l_677 = 1L;
    int l_723 = 0xE47DA4B9L;
    short l_724 = 0xCB39L;
    int i;
    for (g_199 = 12; (g_199 == 30); ++g_199)
    {
        short l_531[10][6] = {{0xA71DL,0x89CFL,0xF43FL,0xF43FL,0x89CFL,0xA71DL},{0xA8B2L,(-2L),5L,0xF43FL,0L,(-6L)},{0xA71DL,0x8F8EL,0xA3ABL,0L,(-10L),0L},{0xA71DL,0xD576L,0L,0xF43FL,0xD576L,0xA8B2L},{0L,0x89CFL,0xA3ABL,5L,0xD576L,5L},{0xF43FL,1L,0xF43FL,0x8759L,0L,0xA8B2L},{0xF43FL,(-1L),0L,5L,(-1L),(-6L)},{0L,0xD576L,0xA71DL,5L,0L,0x8759L},{0xF43FL,(-2L),0L,0x8759L,1L,0xA3ABL},{0xF43FL,(-10L),5L,5L,(-10L),0xF43FL}};
        short l_543[10] = {0x4199L,0x4199L,0x4199L,0x4199L,0x4199L,0x4199L,0x4199L,0x4199L,0x4199L,0x4199L};
        int **l_546 = (void*)0;
        int l_560 = 0xE47EB869L;
        unsigned l_594 = 0xEFD9FED7L;
        unsigned l_701 = 0x677D209EL;
        int i, j;
        for (g_95 = 22; (g_95 >= 18); g_95--)
        {
            unsigned short l_523 = 0xD213L;
            int *l_532 = &g_178;
            int l_569 = 0L;
            unsigned l_575 = 4294967292UL;
            if ((0xCDF2L & ((g_75[3][4] == l_523) > (*g_74))))
            {
                const short l_533 = 0x00CBL;
                if (p_44)
                {
                    if (p_44)
                        break;
                    (*g_74) &= p_45;
                }
                else
                {
                    int l_524 = 0L;
                    int **l_554[10][6][4] = {{{&g_232,&l_532,&l_532,&g_232},{&l_532,&l_532,(void*)0,&l_532},{(void*)0,&l_532,&l_532,(void*)0},{&l_532,&l_532,&l_532,(void*)0},{(void*)0,&l_532,&g_232,&l_532},{&l_532,&l_532,(void*)0,&g_232}},{{&g_232,&l_532,&l_532,(void*)0},{&l_532,&l_532,(void*)0,&g_232},{&l_532,&l_532,&g_232,&l_532},{&g_232,&l_532,(void*)0,&l_532},{&l_532,&l_532,&l_532,&g_232},{&g_232,&g_232,&l_532,&l_532}},{{&l_532,&g_232,(void*)0,&g_232},{&l_532,&g_232,&l_532,(void*)0},{&l_532,&l_532,&g_232,&l_532},{&g_232,&l_532,&g_232,&l_532},{(void*)0,&l_532,&g_232,&g_232},{&l_532,&l_532,(void*)0,&l_532}},{{&l_532,&g_232,(void*)0,(void*)0},{&g_232,&g_232,&l_532,&g_232},{&g_232,&l_532,&l_532,&g_232},{&l_532,&g_232,&l_532,&g_232},{&l_532,(void*)0,&g_232,&g_232},{(void*)0,&g_232,&l_532,(void*)0}},{{(void*)0,(void*)0,&l_532,(void*)0},{(void*)0,&l_532,&l_532,&l_532},{&l_532,(void*)0,&g_232,&g_232},{(void*)0,&g_232,&l_532,&g_232},{(void*)0,&g_232,&g_232,&l_532},{&l_532,&g_232,&l_532,&l_532}},{{(void*)0,&g_232,&l_532,&l_532},{(void*)0,&l_532,&l_532,&l_532},{(void*)0,&l_532,&g_232,&g_232},{&l_532,&g_232,&l_532,&g_232},{&l_532,(void*)0,&l_532,&g_232},{&g_232,&g_232,&l_532,&l_532}},{{&g_232,&g_232,&g_232,&l_532},{&g_232,&g_232,&g_232,&l_532},{&l_532,&g_232,&g_232,(void*)0},{&g_232,&l_532,&l_532,&g_232},{&g_232,(void*)0,&g_232,&l_532},{&l_532,&g_232,&l_532,&l_532}},{{&l_532,&g_232,&g_232,&g_232},{&l_532,&g_232,&l_532,&g_232},{&l_532,&g_232,&g_232,(void*)0},{&l_532,&l_532,&g_232,(void*)0},{(void*)0,&l_532,&g_232,&g_232},{(void*)0,&l_532,&g_232,&g_232}},{{(void*)0,&l_532,&l_532,&l_532},{&l_532,&l_532,&g_232,&l_532},{(void*)0,(void*)0,(void*)0,&l_532},{(void*)0,(void*)0,&g_232,(void*)0},{&g_232,(void*)0,&g_232,&l_532},{(void*)0,(void*)0,&l_532,&l_532}},{{&g_232,&l_532,&l_532,&l_532},{&l_532,&l_532,&g_232,&g_232},{&g_232,&l_532,&l_532,&g_232},{&g_232,&l_532,&l_532,(void*)0},{&l_532,&l_532,&g_232,(void*)0},{&l_532,&g_232,&g_232,&g_232}}};
                    int i, j, k;
                    if ((((((*g_74) ^ l_524) , (g_22 ^ (func_60((safe_lshift_func_uint16_t_u_s(((((g_22 ^ ((func_60((safe_mod_func_int8_t_s_s(((((*g_73) == &l_524) || ((l_531[5][5] > (((void*)0 == l_532) >= p_45)) >= 1UL)) == 5UL), p_44)), l_533, (*l_532), g_75[0][2]) == g_140) || g_75[1][4])) && l_533) , (-1L)) >= 255UL), p_44)), l_531[4][0], p_45, g_95) , p_45))) || p_44) != 0xBFL))
                    {
                        unsigned short l_538 = 0xB388L;
                        int **l_539 = (void*)0;
                        (*l_532) = (safe_rshift_func_int8_t_s_u((((func_60(l_533, g_95, g_144, (safe_lshift_func_uint16_t_u_s(l_538, 6))) && (func_60((((((void*)0 == l_539) & ((l_531[5][5] , func_60((safe_rshift_func_uint8_t_u_u(p_45, g_178)), p_45, g_274, l_542)) , p_45)) <= p_45) , g_177), p_45, g_140, l_542) <= g_177)) , l_531[5][5]) == l_543[7]), g_177));
                        if ((**g_73))
                            continue;
                    }
                    else
                    {
                        int l_553[8][9][1] = {{{8L},{0x0B50D3C7L},{6L},{0x0B50D3C7L},{8L},{3L},{1L},{0x0B8752B9L},{6L}},{{0x8DC1BDE3L},{0x1DD1409BL},{3L},{0x1DD1409BL},{0x8DC1BDE3L},{6L},{0x0B8752B9L},{1L},{3L}},{{8L},{0x0B50D3C7L},{6L},{0x0B50D3C7L},{8L},{3L},{1L},{0x0B8752B9L},{6L}},{{0x8DC1BDE3L},{0x1DD1409BL},{3L},{0x1DD1409BL},{0x8DC1BDE3L},{6L},{0x0B8752B9L},{1L},{3L}},{{8L},{0x0B50D3C7L},{6L},{0x0B50D3C7L},{8L},{3L},{1L},{0x0B8752B9L},{6L}},{{0x8DC1BDE3L},{0x1DD1409BL},{3L},{0x1DD1409BL},{0x8DC1BDE3L},{6L},{0x0B8752B9L},{1L},{3L}},{{8L},{0x0B50D3C7L},{6L},{0x0B50D3C7L},{8L},{3L},{1L},{0x0B8752B9L},{6L}},{{0x8DC1BDE3L},{0x1DD1409BL},{3L},{0x1DD1409BL},{0x8DC1BDE3L},{6L},{0x0B8752B9L},{1L},{3L}}};
                        int i, j, k;
                        if (l_542)
                            break;
                        p_45 = ((p_45 > (safe_add_func_int8_t_s_s((0x7522L | (l_546 != &g_74)), ((((safe_mod_func_int16_t_s_s(func_60(p_44, (0xE720C263L <= p_44), g_178, (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(0x246D72C8L, g_144)), l_553[4][0][0]))), l_553[4][0][0])) != p_45) < 0x8E99L) , p_45)))) & p_45);
                    }
                    l_532 = &l_524;

                    ;
                    for (g_144 = 0; (g_144 >= 43); g_144 = safe_add_func_uint16_t_u_u(g_144, 1))
                    {
                        unsigned char l_557 = 0xCDL;
                        (*l_532) = l_557;
                        (*l_532) ^= ((**g_73) && (*g_74));
                        if (p_45)
                            break;
                    }
                }


                if (p_44)
                    break;
                l_560 = (l_558[6] == &g_73);
                if (l_533)
                    continue;
            }
            else
            {
                unsigned l_562 = 0xEFE3A97CL;
                int **l_564 = &g_232;
                g_232 = &p_45;

                ;
                (*l_559) = ((&g_74 != (func_60(((*g_232) & (*g_232)), (((p_45 , &l_559) == &g_73) > ((((safe_unary_minus_func_uint32_t_u(p_44)) , (*l_532)) | ((p_44 > l_562) || (*l_532))) ^ g_563[2])), g_144, g_178) , l_564)) , (*l_564));
            }


            for (p_45 = 0; (p_45 >= (-15)); p_45 = safe_sub_func_uint16_t_u_u(p_45, 9))
            {
                unsigned l_568[4][3][8] = {{{0xCD141FC2L,0xCB408A54L,4294967293UL,4UL,0x2467DF77L,0xBB70AFDBL,0xF6208CA6L,0xF6208CA6L},{4294967293UL,0xCD141FC2L,0x3015EAD1L,0x3015EAD1L,0xCD141FC2L,4294967293UL,0xF6208CA6L,5UL},{0x32806FD9L,0x3015EAD1L,4294967293UL,0xBB70AFDBL,4UL,7UL,4UL,0xCD141FC2L}},{{0xF6208CA6L,4UL,0xF6208CA6L,0xCD141FC2L,5UL,0xBB70AFDBL,7UL,1UL},{0x3015EAD1L,5UL,0xCB408A54L,0xBB70AFDBL,0xBB70AFDBL,0xCB408A54L,5UL,0x3015EAD1L},{0x3015EAD1L,0xCD141FC2L,4294967293UL,0xF6208CA6L,5UL,0x1628B1DBL,0xCB408A54L,0x1628B1DBL}},{{0xF6208CA6L,0x32806FD9L,1UL,0x32806FD9L,0xF6208CA6L,0x1628B1DBL,4UL,5UL},{7UL,0xCD141FC2L,0x32806FD9L,0x2467DF77L,0xCB408A54L,0xCB408A54L,0x2467DF77L,0x32806FD9L},{5UL,5UL,0x32806FD9L,0x3015EAD1L,4294967293UL,0xBB70AFDBL,4UL,7UL}},{{0xCB408A54L,4UL,1UL,5UL,1UL,4UL,0xCB408A54L,7UL},{4UL,0xBB70AFDBL,4294967293UL,0x3015EAD1L,0x32806FD9L,5UL,5UL,0x32806FD9L},{0x2467DF77L,0xCB408A54L,0xCB408A54L,0x2467DF77L,0x32806FD9L,0xCD141FC2L,7UL,5UL}}};
                int **l_583 = &l_532;
                int i, j, k;
                (**g_73) &= l_543[7];
                l_569 = (((l_567 , (l_568[1][2][5] , 0x1F987E37L)) , ((func_60(g_274, func_60(p_44, (((0xD6B9L >= (((func_60(p_45, g_144, p_44, p_45) && g_95) , l_568[1][2][5]) & 0xD6L)) , (*g_74)) , 0x94L), g_22, g_178), g_22, l_568[0][0][7]) < 0x1982L) , l_523)) , p_44);
                g_580 |= (safe_add_func_int8_t_s_s(g_140, (g_563[2] , (safe_unary_minus_func_int32_t_s((((safe_add_func_uint16_t_u_u(l_575, (safe_add_func_int8_t_s_s((func_60(g_563[1], (((safe_lshift_func_uint8_t_u_s(p_45, 0)) ^ 0x7AA3L) & (p_45 <= ((((p_44 > ((0xF9L & p_44) ^ 5UL)) , (void*)0) == (void*)0) == p_44))), g_178, g_199) == 0UL), g_95)))) | g_199) || 0xF9L))))));
                (*l_583) = ((safe_rshift_func_uint16_t_u_u(p_44, 2)) , (*g_73));

                ;
            }


        }
    }


    (**g_73) = (g_580 | (g_22 , (l_724 & ((**g_73) <= 0xF0E6A655L))));
    for (g_144 = (-21); (g_144 <= 13); g_144++)
    {
        if (p_45)
            break;
    }
    g_178 ^= (safe_add_func_int8_t_s_s(((((p_44 , ((*g_73) == (*g_73))) , (+g_75[0][7])) & ((p_45 , (g_75[1][4] >= (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(g_563[1], ((g_199 < (!p_45)) & 0x13L))), g_144)))) , p_45)) && p_44), 4L));
    return (**g_73);


}







static short func_48(unsigned p_49)
{
    short l_57 = 1L;
    unsigned l_93 = 1UL;
    int *l_283[9] = {&g_75[2][6],&g_75[2][6],&g_75[2][6],&g_75[2][6],&g_75[2][6],&g_75[2][6],&g_75[2][6],&g_75[2][6],&g_75[2][6]};
    int **l_380 = &g_232;
    int ***l_379 = &l_380;
    unsigned short l_381 = 65535UL;
    const unsigned short l_422[10] = {3UL,0UL,3UL,0UL,3UL,0UL,3UL,0UL,3UL,0UL};
    unsigned l_423 = 0UL;
    unsigned l_444 = 0x67D6D302L;
    unsigned l_486 = 6UL;
    int i;
    if (((func_53(g_22, l_57, ((~((safe_mod_func_uint16_t_u_u((p_49 , 1UL), func_60(g_22, g_22, p_49, g_22))) != l_93)) & p_49)) || g_199) || l_93))
    {
        unsigned short l_256 = 0x2031L;
        (*g_232) = func_53((!(func_53(g_75[0][6], l_93, g_95) && (safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((p_49 > (p_49 != (p_49 , 9UL))), func_60(g_140, g_22, p_49, p_49))) , l_256), g_177)))), g_199, l_93);
    }
    else
    {
        const unsigned l_297 = 0UL;
        int **l_336 = &g_232;
        int ** const *l_335 = &l_336;
        unsigned short l_366 = 65533UL;
        if ((l_57 && ((((void*)0 == &g_73) ^ (safe_sub_func_int32_t_s_s((l_57 < g_140), ((1UL <= 0xDE612A07L) , (((**g_73) > (~l_93)) , l_57))))) < p_49)))
        {
            unsigned l_267 = 4294967295UL;
            int *l_275 = &g_75[1][4];
            unsigned l_311[1][10][3] = {{{4294967295UL,1UL,1UL},{4294967291UL,0UL,0UL},{1UL,0UL,0UL},{4294967291UL,0UL,0UL},{1UL,0UL,0UL},{4294967291UL,0UL,0UL},{1UL,0UL,0UL},{4294967291UL,0UL,0UL},{1UL,0UL,0UL},{4294967291UL,0UL,0UL}}};
            int **l_318 = &l_275;
            int ***l_317 = &l_318;
            int i, j, k;
            for (g_177 = 3; (g_177 >= 0); g_177 -= 1)
            {
                unsigned l_284 = 1UL;
                unsigned l_314 = 1UL;
                int **l_330 = (void*)0;
                if (func_53((safe_lshift_func_uint8_t_u_s((g_144 < (safe_rshift_func_int8_t_s_u(0xA0L, 4))), 1)), p_49, ((safe_lshift_func_uint16_t_u_s(g_199, 8)) , p_49)))
                {
                    unsigned l_270 = 0x132434D8L;
                    int **l_277 = &g_232;
                    unsigned l_329 = 0UL;
                    int l_341 = 0x051B36B2L;
                    if (func_53((((safe_add_func_int16_t_s_s(g_177, l_267)) , ((((safe_rshift_func_uint8_t_u_s(l_270, func_53((g_95 & ((0xE2E4L < (p_49 & (((-10L) || g_144) >= (safe_rshift_func_int16_t_s_u(((g_199 >= g_140) != (-6L)), 8))))) < l_93)), g_75[1][4], g_144))) , (void*)0) != g_232) & p_49)) && g_199), p_49, l_93))
                    {
                        int **l_273 = &g_232;
                        (*l_273) = (*g_73);

                        ;
                        if (g_274)
                            break;
                    }
                    else
                    {
                        int **l_276 = &g_232;
                        (*l_276) = l_275;

                        ;
                    }

                    ;
                    (*l_277) = (void*)0;

                    ;
                    for (l_57 = 3; (l_57 >= 0); l_57 -= 1)
                    {
                        int *l_278 = &g_178;
                        int i, j;
                        (*l_278) &= (g_75[g_177][(g_177 + 3)] <= g_75[l_57][(l_57 + 1)]);
                        if (g_75[g_177][g_177])
                            break;
                    }
                    if ((func_53((safe_add_func_int16_t_s_s(p_49, ((safe_mod_func_int32_t_s_s((p_49 <= ((l_283[7] == (*g_73)) & g_75[3][6])), g_22)) ^ g_199))), l_284, (safe_mod_func_int16_t_s_s(1L, g_75[0][8]))) | l_284))
                    {
                        unsigned char l_289 = 255UL;
                        int l_294 = 0x16BCD6CCL;
                        int **l_300 = (void*)0;
                        (**g_73) = p_49;
                        l_294 ^= (safe_sub_func_int32_t_s_s(l_289, ((safe_mod_func_uint32_t_u_u(((func_53(g_140, (l_284 == (p_49 & g_199)), p_49) == (safe_rshift_func_int8_t_s_u(((void*)0 == &l_283[3]), p_49))) <= p_49), l_289)) , 0L)));
                        (*g_74) = (g_140 , (safe_rshift_func_uint16_t_u_s(func_60(p_49, l_297, ((safe_add_func_int32_t_s_s(l_270, (l_300 != (p_49 , l_277)))) , g_75[2][8]), (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_49, g_274)), p_49)) | g_177), g_177)), l_297)), 6))), 11)));
                        (*g_74) = (l_311[0][3][2] & ((((func_53(p_49, func_53(((&l_275 != (((((safe_add_func_int32_t_s_s((*l_275), (((*g_73) == ((((g_178 <= ((g_140 != ((0x0D42L || ((g_22 , (void*)0) != &l_300)) , p_49)) | g_95)) , (void*)0) != l_283[7]) , l_275)) == (*l_275)))) || 0xBAL) , 1L) == 0x5D00FB13L) , &g_74)) == p_49), p_49, p_49), p_49) | l_314) | l_297) <= g_22) <= p_49));
                    }
                    else
                    {
                        unsigned short l_321 = 0x3424L;
                        int *l_342 = (void*)0;
                        if (p_49)
                            break;
                        (*l_275) = (((((p_49 < (safe_sub_func_int8_t_s_s(((((l_297 , l_317) == ((safe_add_func_uint32_t_u_u(((&g_73 == (p_49 , &l_277)) , l_321), (safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((**g_73) , 0xDCEFEB4FL), p_49)), p_49)), g_144)))))) , &g_73)) , (*g_73)) == (*g_73)), l_297))) && l_314) >= l_321) || l_329) & l_297);
                        (**l_318) = ((((p_49 , &g_232) != l_330) || ((+((safe_rshift_func_uint8_t_u_u(g_75[1][4], (safe_rshift_func_int16_t_s_s((1UL | (l_335 != &l_336)), 10)))) & (safe_add_func_uint32_t_u_u(((((~(safe_rshift_func_int8_t_s_s((*l_275), (((&l_283[6] == (void*)0) , g_140) , 0xB9L)))) >= 251UL) , g_75[0][5]) , l_341), (-7L))))) ^ g_274)) >= p_49);
                        g_232 = l_342;
                    }
                }
                else
                {
                    for (g_140 = 0; (g_140 <= 3); g_140 += 1)
                    {
                        int i, j;
                        g_75[g_177][(g_140 + 3)] = g_75[g_140][(g_177 + 5)];
                        if (g_75[g_140][(g_177 + 1)])
                            break;
                    }
                }
                (*l_275) &= (p_49 & ((safe_sub_func_uint8_t_u_u((g_274 , (p_49 , g_95)), (g_22 , g_199))) && ((safe_lshift_func_uint8_t_u_u(((p_49 , g_199) != ((safe_unary_minus_func_uint16_t_u(p_49)) == g_178)), 6)) & p_49)));
            }

            ;
            (***l_317) = (-9L);
        }
        else
        {
            const unsigned short l_350 = 65535UL;
            int ***l_353 = &l_336;
            int l_360[9][6] = {{0L,0xC77971B1L,0x262022A7L,0x936390ADL,0L,0L},{0L,(-1L),0xC77971B1L,0xC77971B1L,(-1L),0L},{0x936390ADL,(-1L),0x262022A7L,(-1L),0L,0L},{(-1L),0L,0xC190B22AL,0L,0xC190B22AL,0L},{(-1L),0L,0L,(-1L),0x262022A7L,(-1L)},{0x936390ADL,0L,(-1L),0xC77971B1L,0xC77971B1L,(-1L)},{0L,0L,0L,0x936390ADL,0x262022A7L,0xC77971B1L},{0L,0L,(-1L),0L,0xC190B22AL,0L},{(-1L),0L,(-1L),(-1L),0L,0xC77971B1L}};
            unsigned char l_365 = 252UL;
            int i, j;
            for (l_57 = 0; (l_57 <= 8); l_57 += 1)
            {
                unsigned l_354[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_354[i] = 5UL;
                for (g_199 = 0; (g_199 <= 8); g_199 += 1)
                {
                    int l_355[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_355[i] = 0x793F7766L;
                    l_355[1] &= (safe_rshift_func_uint16_t_u_u(func_53(g_22, ((void*)0 != &l_283[g_199]), (&g_73 != (func_60((g_199 ^ 0x50L), (l_350 != (safe_add_func_int16_t_s_s((!(l_353 == &l_336)), 65535UL))), l_354[4], (***l_353)) , &g_73))), p_49));
                    (*g_232) = (func_60(g_95, p_49, g_140, func_60(g_178, (g_274 , p_49), p_49, p_49)) && 0x0BL);
                    return g_177;
                }
                return g_178;
            }
            l_360[1][5] &= func_53((**l_336), ((((***l_335) && (*g_232)) != (((safe_rshift_func_int8_t_s_s(p_49, (((safe_rshift_func_uint16_t_u_u(g_274, 10)) > (g_95 > 0xE7F6L)) , ((0x3744L >= (p_49 , g_178)) | g_274)))) <= p_49) < 0xF52C4EAFL)) != (*g_232)), (***l_353));
            (**g_73) = ((((safe_lshift_func_uint16_t_u_u((**l_336), (safe_rshift_func_uint8_t_u_s(l_365, ((g_177 , (p_49 | ((l_366 , g_177) == (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_75[3][1], (((void*)0 != l_283[3]) && p_49))), g_75[1][4]))))) , g_199))))) <= g_95) && (**g_73)) , (*g_74));
        }

        ;
    }

    ;
    if ((0x4B32L == (safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((0x97L ^ p_49), ((((**g_73) != ((((safe_lshift_func_uint8_t_u_s((+(((((((safe_add_func_uint8_t_u_u((g_274 != (((((l_379 != &l_380) , (((p_49 ^ (g_144 || g_75[1][4])) ^ (**g_73)) | p_49)) | p_49) != g_144) < 0x23C86C2DL)), 0x07L)) == 0L) | p_49) , 0x6742B50EL) , (**g_73)) && 0xB5D0BEA2L) , p_49)), 1)) , p_49) , p_49) , l_381)) || p_49) & p_49))), (-1L)))))
    {
        int l_385 = (-9L);
        int *l_415 = (void*)0;
        int ***l_454 = &l_380;
        unsigned char l_507[10][4] = {{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL},{0x9DL,0x9DL,0x9DL,0x9DL}};
        int l_517 = 0L;
        int i, j;
        if (((g_75[1][4] || 0x32L) >= p_49))
        {
            unsigned l_384[5][7];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 7; j++)
                    l_384[i][j] = 4294967288UL;
            }
            l_384[0][3] = ((p_49 & g_75[1][4]) , func_53(((safe_lshift_func_int16_t_s_s((4294967295UL != (((+p_49) , p_49) & func_53(g_274, g_199, p_49))), g_144)) , g_144), g_199, p_49));
            l_385 = 0x4B088E5DL;
            return p_49;
        }
        else
        {
            int ***l_401[7];
            int l_452 = 0x74E8C5AAL;
            int i;
            for (i = 0; i < 7; i++)
                l_401[i] = (void*)0;
            if (p_49)
            {
                int l_400[5] = {9L,9L,9L,9L,9L};
                int l_403 = 6L;
                int l_408 = 3L;
                int i;
                for (p_49 = 0; (p_49 < 16); p_49 = safe_add_func_int16_t_s_s(p_49, 3))
                {
                    const unsigned char l_402 = 0UL;
                    for (g_95 = 0; (g_95 <= 8); g_95 += 1)
                    {
                        int i;
                        l_403 |= (safe_rshift_func_uint8_t_u_s(((**g_73) || ((((0x70L | ((((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((&g_232 != (p_49 , &g_74)) > (safe_lshift_func_uint8_t_u_s(func_60(g_95, g_144, g_199, g_75[0][0]), g_144))), 0xB1L)), p_49)) >= 0x5936L), g_177)), g_274)) >= l_400[4]) , l_401[4]) == l_401[4])) , g_75[2][0]) < l_402) | g_177)), 3));
                        l_403 = ((func_60(p_49, (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint32_t_u_u(p_49, ((g_95 & l_408) <= (l_408 >= (safe_lshift_func_uint8_t_u_s((g_199 , ((safe_lshift_func_int16_t_s_s((0x1FL ^ 0xBAL), 8)) >= (((safe_add_func_uint16_t_u_u(g_177, p_49)) && p_49) , g_140))), 3)))))) || g_177) , g_199), p_49)), g_22, l_403) > p_49) < p_49);
                    }
                }
                (**l_379) = l_415;

                ;
                (*g_74) = (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(0xA9L, 6)) , (func_60(g_178, (safe_add_func_int8_t_s_s((func_60((p_49 , (p_49 , (&l_415 == (void*)0))), l_422[3], p_49, (g_274 , 0x32A1B8BCL)) >= l_423), p_49)), p_49, g_177) | (-1L))), p_49));
                if ((1UL || 0L))
                {
                    return p_49;
                }
                else
                {
                    short l_429[8];
                    unsigned char l_451 = 3UL;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_429[i] = (-2L);
                    for (l_423 = 0; (l_423 != 55); l_423 = safe_add_func_int32_t_s_s(l_423, 7))
                    {
                        unsigned l_426 = 0x5DB0BE6FL;
                        l_403 ^= ((l_426 , p_49) , ((safe_lshift_func_uint16_t_u_u(0xE79AL, 0)) == ((((void*)0 != (*l_379)) != func_60(g_140, func_53(l_429[0], l_408, p_49), p_49, g_199)) , 246UL)));
                        l_415 = &l_403;

                        ;
                        (*g_74) = (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_429[0] && (safe_add_func_uint32_t_u_u((0xB2L >= (((((*l_379) == (void*)0) < (1UL ^ (safe_mod_func_uint16_t_u_u(func_53(((safe_lshift_func_int16_t_s_s(func_53(g_95, p_49, (func_60((p_49 , func_60((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((g_75[0][3] < g_75[1][7]), p_49)), 1)), p_49, l_444, l_426)), g_178, p_49, g_95) != 1L)), g_22)) , 0x504E1EFCL), (*l_415), g_140), l_429[0])))) != g_177) , l_408)), 0L))), g_177)), 65535UL));
                    }

                    ;
                    l_415 = (*g_73);

                    ;
                    (*l_415) = ((safe_lshift_func_uint16_t_u_s((l_400[2] && g_274), (safe_sub_func_int32_t_s_s(((g_75[0][2] & (1UL | p_49)) <= (((p_49 , ((safe_rshift_func_int16_t_s_u(p_49, 12)) , &g_232)) != ((l_408 , l_451) , (void*)0)) ^ 4294967290UL)), g_22)))) > p_49);
                }

                ;
            }
            else
            {
                return l_452;
            }

            ;
            ;
        }

        ;
        ;
        if ((**g_73))
        {
            int * const **l_453[7];
            int i;
            for (i = 0; i < 7; i++)
                l_453[i] = &g_73;
            if ((((((0L & ((l_453[6] != (((((-1L) || (+g_144)) , (((0x473A0A9FL <= (!p_49)) , (((void*)0 == l_454) , (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_178, 1)), g_140)))) == (*l_415))) != g_178) , &g_73)) , 1UL)) < g_140) | 0xFDA2FBA9L) >= (-9L)) ^ p_49))
            {
                unsigned char l_469 = 0UL;
                int * const l_481 = &g_178;
                if ((safe_lshift_func_int16_t_s_s(0x8C38L, 7)))
                {
                    (*l_380) = (void*)0;
                    (*g_74) |= 0x5B1017EFL;
                }
                else
                {
                    int **l_461 = &g_232;
                    int **l_472 = (void*)0;
                    (*l_380) = (**l_454);
                    (*l_461) = (*g_73);

                    ;
                    if ((*g_232))
                    {
                        unsigned char l_464[10][6] = {{0x64L,0x5CL,8UL,0x45L,0UL,0UL},{8UL,0x72L,255UL,1UL,0UL,1UL},{0xB6L,0x5CL,0xB6L,0x5EL,246UL,0x72L},{252UL,4UL,0xAFL,0UL,0x64L,246UL},{0x45L,1UL,0x5EL,0UL,0UL,0x5EL},{252UL,252UL,0x5CL,0x5EL,0xAFL,0xB6L},{0xB6L,0UL,252UL,1UL,4UL,0x5CL},{8UL,0xB6L,252UL,0x45L,252UL,0xB6L},{0x64L,0x45L,0x5CL,0xC1L,0x57L,0x5EL},{0xC1L,0x57L,0x5EL,252UL,255UL,246UL}};
                        int **l_465[6];
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_465[i] = &l_415;
                        (***l_454) = (safe_add_func_int16_t_s_s(g_140, l_464[4][3]));
                        (***l_454) = (p_49 <= g_75[0][4]);
                        (*g_74) = (**g_73);
                        g_232 = (*g_73);
                    }
                    else
                    {
                        int l_468 = (-7L);
                        int l_489 = 0xDD3592A1L;
                        int **l_490 = &g_232;
                        (**g_73) = ((((safe_mod_func_uint32_t_u_u(p_49, l_468)) == (**g_73)) || l_469) & (safe_sub_func_uint16_t_u_u(((*l_454) != l_472), ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_s(g_274, (l_481 == ((*g_232) , (void*)0)))) != p_49) , p_49) == g_178), g_95)), 6)), g_177)) , p_49))));
                        (**l_379) = (**l_454);
                        l_489 ^= ((safe_mod_func_int8_t_s_s((func_53(p_49, p_49, (**l_461)) && (p_49 , 0x08L)), (safe_sub_func_int16_t_s_s((l_486 & 0UL), (safe_rshift_func_uint16_t_u_u((1L & 0x7AEC50B3L), 8)))))) | p_49);
                        (*l_490) = (*g_73);
                    }
                }

                ;
                for (l_385 = 0; (l_385 > (-3)); l_385--)
                {
                    char l_499 = 2L;
                    int l_500 = 1L;
                }
            }
            else
            {
                for (p_49 = 0; p_49 < 4; p_49 += 1)
                {
                    for (g_95 = 0; g_95 < 9; g_95 += 1)
                    {
                        g_75[p_49][g_95] = 0x7126A893L;
                    }
                }
            }

            ;
            (**g_73) = ((safe_lshift_func_uint16_t_u_s(p_49, 0)) , 0x28791A95L);
            (**g_73) &= p_49;
            (**g_73) = (safe_add_func_int32_t_s_s((*g_74), (**g_73)));
        }
        else
        {
            short l_510 = 0x9FEFL;
            int l_518 = (-1L);
            (*l_415) = ((l_507[4][2] ^ 0L) <= 3UL);
            l_518 &= func_60(g_144, g_140, (p_49 & ((*l_415) != (safe_sub_func_int8_t_s_s((p_49 != (((l_510 < (l_510 | (g_144 & (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((safe_add_func_int16_t_s_s(((*g_73) == (void*)0), 65526UL)) == p_49) , p_49), l_517)), 0xD8F6BD39L))))) ^ g_178) != p_49)), g_178)))), (*l_415));
            return (*l_415);
        }

        ;
        (*l_380) = (*l_380);
        g_178 ^= (((**l_454) == (g_199 , (**l_454))) <= (*l_415));
    }
    else
    {
        (**l_379) = (void*)0;

        ;
    }
    return p_49;
}







static const unsigned char func_53(unsigned p_54, short p_55, char p_56)
{
    int *l_94[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned char l_132 = 1UL;
    char l_184 = 0x8CL;
    int l_229 = 0L;
    unsigned l_246 = 6UL;
    int i;
    g_95 |= (*g_74);
    (**g_73) = (!(*g_74));
    for (p_54 = 0; (p_54 <= 7); p_54 += 1)
    {
        int *l_96 = &g_75[1][4];
        int **l_166[6][10][4] = {{{&l_94[1],&l_94[p_54],(void*)0,&l_94[p_54]},{&l_94[p_54],&l_96,&l_94[5],&l_94[1]},{(void*)0,(void*)0,&l_94[1],(void*)0},{&l_94[0],&l_94[p_54],&l_94[1],&l_94[p_54]},{&l_94[1],&l_94[1],&l_94[1],&l_96},{(void*)0,&l_94[1],&l_94[1],&l_94[1]},{(void*)0,&l_96,&l_94[1],&l_94[p_54]},{&l_94[1],&l_94[1],&l_94[1],(void*)0},{&l_94[0],(void*)0,&l_94[1],&l_94[5]},{(void*)0,&l_94[1],&l_94[5],&l_94[1]}},{{&l_94[p_54],(void*)0,(void*)0,&l_94[p_54]},{&l_94[1],&l_96,&l_96,&l_96},{&l_94[p_54],&l_94[2],&l_94[1],&l_94[6]},{&l_94[p_54],&l_94[5],&l_94[p_54],&l_94[6]},{&l_94[p_54],&l_94[2],&l_94[0],&l_96},{(void*)0,&l_96,&l_94[p_54],&l_94[p_54]},{&l_94[p_54],(void*)0,&l_94[p_54],&l_94[1]},{&l_94[1],&l_94[1],&l_96,&l_94[5]},{(void*)0,(void*)0,(void*)0,(void*)0},{&l_94[1],&l_94[1],(void*)0,&l_94[p_54]}},{{&l_96,&l_96,&l_94[1],&l_94[1]},{&l_96,&l_94[1],&l_94[1],&l_96},{&l_96,&l_94[1],(void*)0,&l_94[p_54]},{&l_96,&l_94[1],&l_96,&l_94[p_54]},{&l_96,&l_94[p_54],&l_94[1],&l_94[p_54]},{(void*)0,(void*)0,&l_94[2],&l_94[2]},{&l_94[0],&l_94[0],&l_94[6],&l_94[1]},{&l_94[p_54],&l_94[1],&l_94[1],&l_94[1]},{&l_94[1],(void*)0,&l_94[1],&l_94[1]},{&l_94[6],(void*)0,&l_94[p_54],&l_94[1]}},{{(void*)0,&l_94[1],(void*)0,&l_94[1]},{&l_94[1],&l_94[0],(void*)0,&l_94[2]},{&l_94[1],(void*)0,&l_96,&l_94[p_54]},{(void*)0,&l_94[p_54],&l_96,&l_94[p_54]},{&l_94[1],&l_94[1],&l_94[p_54],(void*)0},{&l_94[1],&l_94[p_54],&l_94[1],(void*)0},{&l_94[p_54],&l_94[p_54],&l_96,(void*)0},{&l_94[p_54],&l_94[p_54],&l_94[1],&l_94[6]},{&l_94[1],(void*)0,&l_94[p_54],&l_94[1]},{&l_94[1],&l_94[p_54],&l_96,&l_96}},{{(void*)0,&l_94[1],&l_96,&l_94[p_54]},{&l_94[1],(void*)0,(void*)0,&l_94[1]},{&l_94[1],&l_94[1],(void*)0,&l_94[1]},{(void*)0,&l_96,&l_94[p_54],&l_94[5]},{&l_94[6],&l_96,&l_94[1],&l_94[5]},{&l_94[1],&l_96,&l_94[1],&l_94[1]},{&l_94[p_54],&l_94[1],&l_94[6],&l_94[1]},{&l_94[1],&l_94[2],&l_96,&l_94[1]},{(void*)0,&l_94[p_54],&l_94[1],&l_94[1]},{&l_96,&l_94[p_54],&l_96,&l_94[1]}},{{&l_94[1],(void*)0,&l_94[p_54],&l_94[p_54]},{&l_96,(void*)0,&l_94[1],(void*)0},{&l_94[p_54],(void*)0,&l_94[1],&l_96},{&l_96,&l_94[6],&l_94[p_54],&l_94[5]},{&l_94[1],&l_94[1],&l_96,&l_96},{&l_96,&l_96,&l_94[1],&l_94[6]},{(void*)0,&l_94[p_54],&l_96,&l_96},{&l_94[1],&l_94[1],&l_94[p_54],&l_94[1]},{&l_94[p_54],&l_94[1],&l_96,&l_94[1]},{&l_94[1],&l_94[5],(void*)0,&l_96}}};
        int ** const *l_165[3][6] = {{&l_166[2][3][1],&l_166[0][5][3],&l_166[0][5][3],&l_166[2][3][1],&l_166[2][3][1],&l_166[0][5][3]},{&l_166[2][3][1],&l_166[2][3][1],&l_166[0][5][3],&l_166[0][5][3],&l_166[2][3][1],&l_166[2][3][1]},{&l_166[2][3][1],&l_166[0][5][3],&l_166[0][5][3],&l_166[2][3][1],&l_166[2][3][1],&l_166[0][5][3]}};
        int i, j, k;
        l_94[p_54] = l_96;
        for (p_56 = 3; (p_56 >= 0); p_56 -= 1)
        {
            short l_101 = 0x5884L;
            int **l_131 = &l_94[p_54];
            unsigned char l_133 = 1UL;
            short l_147 = 0x6C43L;
            char l_187[6][2][9] = {{{5L,3L,0xACL,0L,0x33L,0xE7L,3L,1L,0xE7L},{0xC3L,3L,0x9AL,0xE4L,0xBFL,(-1L),3L,1L,0xACL}},{{1L,0xDAL,0x9AL,0L,0x33L,0xACL,0xDAL,6L,0L},{0x3BL,0L,0xE2L,0xC3L,1L,7L,0L,0L,0L}},{{0xDAL,0xE4L,0xA6L,1L,1L,0xA6L,0xE4L,0xDAL,0xE2L},{0xDAL,0L,0xE2L,0xC0L,1L,0xA6L,0L,0L,0xA6L}},{{0x3BL,0L,0L,1L,5L,7L,0L,6L,0xE2L},{0L,0xE4L,0L,0xC3L,1L,0xE2L,0xE4L,6L,0L}},{{0x3BL,0L,0xE2L,0xC3L,1L,7L,0L,0L,0L},{0xDAL,0xE4L,0xA6L,1L,1L,0xA6L,0xE4L,0xDAL,0xE2L}},{{0xDAL,0L,0xE2L,0xC0L,1L,0xA6L,0L,0L,0xA6L},{0x3BL,0L,0L,1L,5L,7L,0L,6L,0xE2L}}};
            int i, j, k;
        }
    }
    for (p_55 = 0; (p_55 == (-15)); p_55 = safe_sub_func_int16_t_s_s(p_55, 4))
    {
        unsigned l_249 = 0x0297E417L;
        g_178 ^= (((l_249 || (safe_rshift_func_int8_t_s_s(func_60(l_249, p_56, ((p_55 != p_55) == 255UL), g_75[1][4]), 1))) < g_177) > p_56);
        return g_75[3][5];
    }
    return p_54;
}







static short func_60(unsigned short p_61, const char p_62, char p_63, unsigned p_64)
{
    int * const l_65 = (void*)0;
    int *l_67 = (void*)0;
    int **l_66[1][4][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_67,(void*)0,&l_67,(void*)0,&l_67,(void*)0,&l_67},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_67,(void*)0,&l_67,(void*)0,&l_67,(void*)0,&l_67}}};
    int **l_68 = (void*)0;
    int **l_69 = &l_67;
    unsigned char l_70 = 0xA9L;
    const unsigned char l_85 = 0xD4L;
    int i, j, k;
    (*l_69) = l_65;
    l_70 |= 0xBF9CC53AL;
    for (l_70 = (-11); (l_70 == 10); ++l_70)
    {
        int * const **l_76[9] = {&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73,&g_73};
        int *l_82 = &g_75[1][1];
        short l_86 = 0x9BF4L;
        int i;
        g_73 = g_73;
        if (p_64)
            break;
        l_86 &= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_75[1][4] , ((((safe_unary_minus_func_int32_t_s(((*g_73) != l_82))) || p_61) | (g_75[0][6] >= (p_64 , ((safe_rshift_func_uint8_t_u_u(((g_75[3][4] , ((l_85 >= (((*l_82) , (void*)0) == (void*)0)) <= g_75[1][4])) , 3UL), p_62)) != (*g_74))))) , 247UL)), g_75[1][4])), g_75[1][6]));
    }
    if ((g_75[1][4] < (safe_unary_minus_func_int8_t_s(p_64))))
    {
        unsigned l_88 = 0x42A635BDL;
        (*g_74) = 0L;
        l_88 ^= (g_75[1][3] != g_75[1][4]);
    }
    else
    {
        int *l_91 = (void*)0;
        int **l_92 = &l_67;
        for (p_64 = 0; (p_64 == 10); p_64 = safe_add_func_int32_t_s_s(p_64, 8))
        {
            if (p_64)
                break;
            (*l_69) = l_91;
        }
        (*l_92) = (*g_73);

        ;
    }

    ;
    return p_61;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_75[i][j], "g_75[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_563[i], "g_563[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1269[i][j][k], "g_1269[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1275, "g_1275", print_hash_value);
    transparent_crc(g_1352, "g_1352", print_hash_value);
    transparent_crc(g_1421, "g_1421", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
