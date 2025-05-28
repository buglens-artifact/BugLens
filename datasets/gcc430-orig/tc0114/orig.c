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



static int g_12 = 0x263126FFL;
static int g_35 = 0x02268F62L;
static unsigned short g_68[2] = {0UL,0UL};
static int g_81 = 0x5F0A8622L;
static int g_87 = 0xF4914D86L;
static unsigned g_88 = 0x0536403AL;
static const unsigned g_103 = 4294967295UL;
static int g_120[2] = {0xA3E211E8L,0xA3E211E8L};
static int g_196 = 0x64E550A7L;
static unsigned char g_202 = 0UL;
static short g_221 = 1L;
static unsigned char g_249 = 0xFFL;
static char g_269 = 0x4CL;
static int g_280 = 0x6B154AB4L;
static unsigned g_282 = 0x5F1AE000L;
static unsigned g_346 = 0x2D07DAD9L;
static char g_368[3][9] = {{0xA1L,0xA1L,0x65L,6L,0x65L,0xA1L,0xA1L,0x65L,6L},{(-2L),0x44L,(-2L),(-4L),(-4L),(-2L),0x44L,(-2L),(-4L)},{0x18L,0x65L,0x65L,0x18L,0x1BL,0x18L,0x65L,0x65L,0x18L}};
static unsigned short g_441 = 0xC160L;
static short g_456 = 0L;
static unsigned g_487[4][5] = {{4294967290UL,4294967290UL,9UL,4294967290UL,4294967290UL},{0x7A89DF4BL,4294967290UL,0x7A89DF4BL,0x7A89DF4BL,4294967290UL},{4294967290UL,0x7A89DF4BL,0x7A89DF4BL,4294967290UL,0x7A89DF4BL},{0x7A89DF4BL,0x7A89DF4BL,4294967290UL,0x7A89DF4BL,0x7A89DF4BL}};
static unsigned g_530[5][1][7] = {{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{0x4D06275DL,4294967291UL,0x4D06275DL,0x48A9DC16L,0x48A9DC16L,0x4D06275DL,4294967291UL}},{{4294967295UL,2UL,4294967295UL,4294967295UL,2UL,4294967295UL,2UL}},{{0x4D06275DL,0x48A9DC16L,0x48A9DC16L,0x4D06275DL,4294967291UL,0x4D06275DL,0x48A9DC16L}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}}};
static unsigned char g_556 = 0x46L;
static const int g_634[4][1][10] = {{{0x45BC19C8L,(-1L),0x34DFA2A9L,0x34DFA2A9L,(-1L),0x45BC19C8L,(-1L),0x12ECB547L,(-6L),0xB85AA118L}},{{0x12ECB547L,0L,0xCD6DF990L,0x45BC19C8L,0xE16BC767L,0x6ECE13D6L,4L,1L,4L,0x6ECE13D6L}},{{0x12ECB547L,0x8D1F937AL,0x2355E8F4L,0x8D1F937AL,0x12ECB547L,0x45BC19C8L,0x6ECE13D6L,0xE608005DL,(-1L),0xCFE6182EL}},{{0x45BC19C8L,0x6ECE13D6L,0xE608005DL,(-1L),0xCFE6182EL,0xB85AA118L,(-1L),(-1L),0xB85AA118L,0xCFE6182EL}}};
static int g_708[7][3][9] = {{{0xCFF8ACF6L,0L,(-1L),0L,1L,0L,0x94B0C7F0L,0xEA0FAFC1L,(-1L)},{0L,0L,0xF4843A8AL,1L,0L,(-10L),0xF4843A8AL,(-10L),4L},{0x1587E9DAL,0xEBCCC982L,0xFE57B54BL,(-1L),0x189A8A8CL,0xE2368F93L,(-10L),(-1L),0xC98240AAL}},{{0L,1L,0xF560C3E7L,0xC98240AAL,0xF90A24EFL,0x189A8A8CL,0L,0xFBCC38D8L,0xDCC7B1D3L},{0L,5L,(-9L),0x189A8A8CL,(-1L),0x061139F7L,0x324FDEA8L,1L,0xE2368F93L},{0x1587E9DAL,(-1L),0xD0ABAC4FL,0L,0L,0xD0ABAC4FL,(-1L),0x1587E9DAL,5L}},{{0x82DF9F4EL,(-1L),0xA5465486L,(-1L),0L,0x082EF529L,0xDCC7B1D3L,0x324FDEA8L,0x5CC7119BL},{1L,0xD0ABAC4FL,4L,0x8BFE1573L,0xE2368F93L,0xFE57B54BL,1L,(-1L),5L},{0xFE57B54BL,0xF90A24EFL,0L,0x173825C0L,(-10L),0x1587E9DAL,0L,0L,0xE2368F93L}},{{0xC98240AAL,0x173825C0L,0xFBCC38D8L,0xD3B1C16DL,0x8C442D0EL,0xA7BFF927L,0x189A8A8CL,1L,0xDCC7B1D3L},{0L,1L,1L,(-1L),1L,0x173825C0L,(-1L),1L,0xC98240AAL},{0x969F31A6L,1L,0xEBCCC982L,1L,1L,0x39EB3045L,4L,0L,4L}},{{(-1L),(-1L),0xA7BFF927L,0x39EB3045L,(-1L),(-9L),1L,0xDCC7B1D3L,0xFBCC38D8L},{0xD3B1C16DL,(-10L),0L,0L,0x324FDEA8L,(-1L),(-1L),5L,(-1L)},{0xDCC7B1D3L,0L,0L,0x082EF529L,0L,0xF560C3E7L,1L,(-1L),1L}},{{0L,5L,0xD0ABAC4FL,1L,0x8C442D0EL,8L,0L,0xA7BFF927L,0x5087ADECL},{0x5087ADECL,0L,4L,0x82DF9F4EL,1L,0L,0xE2368F93L,0xCFF8ACF6L,(-6L)},{(-10L),0xF560C3E7L,0xE2368F93L,0L,5L,0L,0x061139F7L,1L,0x025EE345L}},{{0xD0ABAC4FL,0x82DF9F4EL,0L,1L,1L,8L,(-10L),8L,1L},{0x8C442D0EL,1L,1L,0x8C442D0EL,0x94B0C7F0L,0xF560C3E7L,0L,(-9L),(-1L)},{0x1587E9DAL,0x39EB3045L,8L,0xDCC7B1D3L,0x82DF9F4EL,(-1L),0xEA0FAFC1L,0L,0xD0ABAC4FL}}};
static int g_709 = 0L;
static unsigned short g_715[3] = {1UL,1UL,1UL};
static char g_721 = 0x8AL;
static unsigned short g_793[1] = {3UL};
static unsigned short g_811 = 0UL;
static unsigned char g_830 = 1UL;
static int g_849 = (-1L);
static int g_851 = 0x8E87C377L;
static unsigned char g_853 = 0x73L;
static unsigned char g_884 = 252UL;
static unsigned g_972 = 4294967295UL;
static char g_1007 = 1L;
static char g_1008 = 0xE5L;
static unsigned char g_1050 = 1UL;
static unsigned g_1091 = 0UL;
static int g_1098 = 2L;
static unsigned g_1099 = 4294967292UL;
static unsigned g_1139 = 0xE7119E84L;
static char g_1146 = 0x1DL;
static unsigned char g_1147 = 246UL;
static unsigned g_1161 = 0x2950C50FL;
static short g_1189 = 0xA23CL;
static int g_1229 = 5L;
static int g_1231 = 0xE3E2DD03L;
static unsigned short g_1233[4][5] = {{0x40D0L,9UL,0xA304L,65535UL,0xA304L},{0xA304L,0xA304L,0x89BDL,65535UL,3UL},{9UL,0x40D0L,0x40D0L,3UL,0x89BDL},{3UL,0x40D0L,65535UL,65535UL,0x40D0L}};
static unsigned short g_1266[5][1][3] = {{{0xDBCDL,7UL,0x84D9L}},{{0x2009L,0x98FAL,0x705BL}},{{0xDBCDL,0xDBCDL,0x705BL}},{{0x98FAL,0x2009L,0x84D9L}},{{7UL,0xDBCDL,7UL}}};
static unsigned char g_1271[8][7][4] = {{{246UL,0x05L,255UL,0xD1L},{254UL,250UL,1UL,0x26L},{0x05L,0xD1L,1UL,0x26L},{255UL,250UL,0UL,0xD1L},{246UL,0x05L,0x62L,0x05L},{250UL,246UL,1UL,0x2CL},{255UL,254UL,246UL,255UL}},{{254UL,0x05L,0UL,246UL},{254UL,255UL,246UL,0x26L},{255UL,246UL,1UL,1UL},{250UL,250UL,0x62L,246UL},{246UL,255UL,0UL,0x05L},{255UL,254UL,1UL,0UL},{0x05L,254UL,1UL,0x05L}},{{254UL,255UL,255UL,246UL},{246UL,250UL,246UL,1UL},{0x05L,246UL,0xBFL,0x26L},{250UL,255UL,0UL,246UL},{0xD1L,0xD1L,0xB4L,0x1AL},{255UL,1UL,250UL,249UL},{0xD1L,0xBFL,0xBFL,0xD1L}},{{0xBFL,0xD1L,254UL,0x62L},{1UL,255UL,0x26L,255UL},{0xD1L,0x62L,0UL,255UL},{254UL,255UL,0xB4L,0x62L},{0UL,0xD1L,0x8AL,0xD1L},{255UL,0xBFL,0UL,249UL},{0x1AL,1UL,0xBFL,0x1AL}},{{1UL,0xD1L,0x05L,0UL},{1UL,254UL,0xBFL,255UL},{0x1AL,0UL,0UL,0UL},{255UL,255UL,0x8AL,0UL},{0UL,0x1AL,0xB4L,0xD1L},{254UL,1UL,0UL,0xB4L},{0xD1L,1UL,0x26L,0xD1L}},{{1UL,0x1AL,254UL,0UL},{0xBFL,255UL,0xBFL,0UL},{0xD1L,0UL,250UL,255UL},{255UL,254UL,0xB4L,0UL},{0x62L,0xD1L,0xB4L,0x1AL},{255UL,1UL,250UL,249UL},{0xD1L,0xBFL,0xBFL,0xD1L}},{{0xBFL,246UL,0xB4L,0xBFL},{0xD1L,249UL,246UL,0UL},{246UL,0xBFL,0x62L,0UL},{0xB4L,249UL,0UL,0xBFL},{1UL,246UL,250UL,246UL},{249UL,0x1AL,0x62L,255UL},{1UL,0xD1L,0x1AL,1UL}},{{0xD1L,246UL,0x8AL,1UL},{0xD1L,0xB4L,0x1AL,0UL},{1UL,1UL,0x62L,0x62L},{249UL,249UL,250UL,1UL},{1UL,1UL,0UL,246UL},{0xB4L,0xD1L,0x62L,0UL},{246UL,0xD1L,246UL,246UL}}};
static unsigned g_1274 = 4294967286UL;
static char g_1278 = 0x66L;
static unsigned g_1279 = 0xA45DDB0EL;
static char g_1478 = (-5L);
static unsigned g_1527 = 8UL;
static unsigned short g_1630[6] = {8UL,8UL,8UL,8UL,8UL,8UL};
static unsigned g_1675 = 4294967290UL;
static unsigned g_1727 = 0UL;
static char g_1763[2] = {0x7EL,0x7EL};
static short g_1764 = 2L;
static int g_1765 = 1L;
static unsigned char g_1766 = 0xD3L;
static unsigned g_1795 = 0UL;
static short g_1801[8] = {0x12E5L,0x12E5L,0x12E5L,0x12E5L,0x12E5L,0x12E5L,0x12E5L,0x12E5L};
static char g_1802 = 1L;
static unsigned g_1803[10] = {4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL,4UL};
static int g_1855 = (-8L);
static short g_1856 = (-7L);
static int g_1857 = 0x11245BA7L;
static short g_1858[3] = {0xEBC4L,0xEBC4L,0xEBC4L};
static int g_1859 = 9L;
static unsigned g_1861 = 1UL;
static int g_1921 = 0L;
static int g_1923 = 1L;
static unsigned g_1970 = 4294967286UL;
static int g_2004 = 0x56EF191FL;
static unsigned g_2005 = 0xADA27915L;
static unsigned g_2141 = 4294967295UL;
static unsigned short g_2148 = 1UL;
static int g_2221 = 6L;
static unsigned short g_2230 = 65535UL;
static unsigned g_2244 = 1UL;
static int g_2302 = 1L;
static short g_2389 = 5L;
static int g_2390 = 1L;
static int g_2393[5] = {0x86891E73L,0x86891E73L,0x86891E73L,0x86891E73L,0x86891E73L};
static unsigned g_2395 = 0xE4E74A51L;
static unsigned char g_2434 = 255UL;
static int g_2526 = (-6L);
static short g_2531 = 0x8D4BL;
static char g_2533 = 0L;
static unsigned g_2534 = 1UL;



static unsigned func_1(void);
static int func_2(const unsigned p_3, unsigned char p_4);
static const unsigned func_5(char p_6, short p_7, unsigned p_8);
static const int func_14(unsigned char p_15, unsigned p_16);
static unsigned func_17(unsigned p_18, unsigned char p_19, unsigned p_20, unsigned p_21, unsigned p_22);
static unsigned short func_31(char p_32);
static char func_46(unsigned p_47, int p_48, int p_49, unsigned p_50, int p_51);
static unsigned short func_57(unsigned char p_58, unsigned p_59, const char p_60);
static unsigned short func_66(int p_67);
static short func_71(unsigned p_72, unsigned p_73, short p_74, char p_75, const short p_76);
static unsigned func_1(void)
{
    short l_9 = 0xED23L;
    const short l_1407[3][1][9] = {{{1L,1L,1L,1L,1L,1L,1L,1L,1L}},{{(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)}},{{1L,1L,1L,1L,1L,1L,1L,1L,1L}}};
    char l_1408 = 0xD1L;
    int l_2566 = 1L;
    int l_2567 = 9L;
    int l_2570 = 2L;
    int l_2572 = 0L;
    int l_2573 = 6L;
    unsigned l_2608[10] = {0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L,0x5E3AA9C1L};
    unsigned l_2625 = 0x83D34546L;
    int i, j, k;
    if (func_2(func_5(l_9, (safe_add_func_uint8_t_u_u(g_12, (safe_unary_minus_func_uint16_t_u((!((l_9 > func_14((func_17(((((g_12 == (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(0UL, 1)), 4294967286UL))) <= (safe_lshift_func_uint8_t_u_s(g_12, (safe_sub_func_int8_t_s_s((l_9 > (((func_31(g_12) && 0xB4BEL) , g_1091) <= l_9)), l_1407[2][0][7]))))) , g_120[0]) >= g_708[3][2][3]), l_9, l_1408, g_103, l_9) , 0UL), g_634[0][0][9])) ^ g_634[0][0][9])))))), g_368[0][6]), l_1408))
    {
        return g_2434;
    }
    else
    {
        unsigned char l_2544 = 0x61L;
        int l_2564 = 0x6F794A49L;
        int l_2623 = 0L;
        for (g_884 = 0; (g_884 >= 7); ++g_884)
        {
            for (g_1857 = 25; (g_1857 <= (-27)); --g_1857)
            {
                return g_1527;
            }
        }
        for (g_830 = 0; (g_830 <= 0); g_830 += 1)
        {
            char l_2545 = 0xC5L;
            unsigned short l_2559[6] = {65526UL,65526UL,65528UL,65526UL,65526UL,65528UL};
            unsigned short l_2561 = 65530UL;
            int l_2569 = 7L;
            int l_2571 = 0x9C9B44A8L;
            int l_2575 = (-1L);
            unsigned char l_2624 = 0xDFL;
            int i;
            for (g_2221 = 0; (g_2221 >= 0); g_2221 -= 1)
            {
                int l_2548 = 7L;
                int l_2574 = 0x21B2497BL;
                int i;
                if (g_793[g_2221])
                    break;
                for (g_1795 = 0; (g_1795 <= 7); g_1795++)
                {
                    const short l_2543 = 0x6792L;
                    unsigned l_2560 = 8UL;
                    int l_2565 = 1L;
                    int l_2568 = 0x89970183L;
                    unsigned l_2576[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2576[i] = 4294967293UL;
                    l_2548 &= (g_1233[3][2] != (l_2543 || (((((g_709 != l_2544) != (g_793[0] >= g_793[g_2221])) >= l_2545) ^ ((safe_add_func_int8_t_s_s(g_441, g_1279)) >= g_1233[3][2])) > 0L)));
                    g_849 = ((g_1858[0] || (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(1L, g_530[1][0][3])), ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((l_2559[4] ^ (l_1408 <= func_46(g_1271[5][5][2], g_2389, (g_1802 , (l_2560 < 0x3B925D46L)), l_1407[2][0][7], g_1233[3][2]))), l_2559[4])), 6)) <= l_2561))), 3)) ^ 0x630696D9L) < l_2544)) == g_1858[0]);
                    if (l_2543)
                        break;
                    for (g_1098 = 0; (g_1098 != 12); g_1098 = safe_add_func_uint8_t_u_u(g_1098, 2))
                    {
                        l_2576[0]++;
                    }
                }
                if (g_556)
                {
                    char l_2585 = (-9L);
                    for (g_1923 = 4; (g_1923 >= 0); g_1923 -= 1)
                    {
                        unsigned l_2579 = 4294967289UL;
                        int l_2582 = 0x288A137BL;
                        g_1859 &= (func_66(g_849) || l_2559[1]);
                        g_1857 |= g_1139;
                        g_1859 |= func_46(func_71((func_46(g_1763[1], l_2574, l_2579, l_2559[4], g_2148) == (9L ^ ((g_849 & (l_9 <= g_1801[6])) >= l_2548))), l_2582, g_851, l_2566, g_269), g_709, g_2393[0], g_972, l_2579);
                    }
                    l_2564 = (safe_lshift_func_int8_t_s_u(l_2585, (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(g_1233[3][2], l_2570)), 4L))));
                }
                else
                {
                    g_35 = (-1L);
                    for (g_196 = 0; g_196 < 3; g_196 += 1)
                    {
                        for (g_1278 = 0; g_1278 < 9; g_1278 += 1)
                        {
                            g_368[g_196][g_1278] = 0xAAL;
                        }
                    }
                    if (l_2544)
                        continue;
                }
            }
            g_849 &= ((safe_rshift_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(g_346, g_715[2])), (safe_mod_func_uint8_t_u_u(l_2571, (safe_add_func_uint16_t_u_u(2UL, (g_2393[4] , ((-1L) ^ ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_1921, 0)) >= (((func_46((3L >= (safe_lshift_func_uint8_t_u_s((l_2544 || 0x1BL), 3))), g_2004, g_68[1], l_2564, l_1408) != g_2141) == g_634[0][0][9]) || l_2544)), l_9)) , l_2559[4]), 0L)) | l_1407[2][0][7]))))))))) , 0x23L), l_2559[2])) == l_2608[2]);
            g_2004 = (((l_9 , (safe_lshift_func_int16_t_s_s(((!l_2572) || (safe_add_func_int16_t_s_s((0xF0B9L != ((0xB964L || (((-10L) <= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_972, g_1802)), 2)), (safe_rshift_func_uint16_t_u_s(l_2564, (g_68[1] , 6L))))), 4)) >= l_2623)) && g_441)) > l_2624)), l_2566))), 7))) == 255UL) && g_884);
        }
        l_2564 = func_66(l_2625);
    }
    return l_2570;
}







static int func_2(const unsigned p_3, unsigned char p_4)
{
    unsigned short l_2300 = 0x8D5DL;
    int l_2303[1][6][4] = {{{(-3L),0x20CD3F6AL,(-3L),0x20CD3F6AL},{(-3L),0x20CD3F6AL,(-3L),0x20CD3F6AL},{(-3L),0x20CD3F6AL,(-3L),0x20CD3F6AL},{(-3L),0x20CD3F6AL,(-3L),0x20CD3F6AL},{(-3L),0x20CD3F6AL,(-3L),0x20CD3F6AL},{(-3L),0x20CD3F6AL,(-3L),0x20CD3F6AL}}};
    int l_2404 = 0L;
    unsigned l_2410 = 4294967295UL;
    int l_2506 = 0x1848C7DCL;
    int i, j, k;
    for (g_1765 = 10; (g_1765 < (-6)); --g_1765)
    {
        int l_2301 = 0x91EBAD64L;
        unsigned short l_2311 = 0xF295L;
        unsigned char l_2338 = 0x9AL;
        int l_2357[4];
        unsigned short l_2409 = 0x2E9BL;
        const int l_2419 = (-5L);
        int l_2425 = 0x7DAD2B09L;
        const int l_2467[6][2][7] = {{{1L,1L,(-3L),8L,0x36846216L,1L,(-1L)},{0L,(-3L),(-1L),0L,0xFAF6CC2CL,0x36846216L,0L}},{{1L,(-1L),0x36846216L,(-1L),0x36846216L,(-1L),1L},{7L,1L,4L,(-1L),1L,0L,0L}},{{0xCCF2806DL,0x20350280L,0x54F13E6DL,0L,7L,0xFAF6CC2CL,0xFAF6CC2CL},{(-3L),7L,0x20350280L,7L,(-3L),0xD45B6C7CL,0L}},{{0L,7L,4L,1L,0xDAF49B39L,0xFAF6CC2CL,(-1L)},{7L,0L,0xDAF49B39L,1L,0x20350280L,0x20350280L,1L}},{{0L,1L,0L,0x20350280L,0L,0L,1L},{(-3L),0xCCF2806DL,0xFAF6CC2CL,0xD45B6C7CL,1L,0L,(-1L)}},{{1L,0L,0L,0xCCF2806DL,0xCCF2806DL,0L,0L},{(-1L),0x36846216L,(-1L),1L,0xCCF2806DL,0x20350280L,0x54F13E6DL}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_2357[i] = 0L;
        for (g_556 = 0; (g_556 <= 1); g_556 += 1)
        {
            int l_2297 = 0L;
            short l_2325 = 0x769AL;
            int l_2328 = 0x121D29E9L;
            int l_2329[8] = {0x41D5FBD8L,0xF05C579AL,0x41D5FBD8L,0xF05C579AL,0x41D5FBD8L,0xF05C579AL,0x41D5FBD8L,0xF05C579AL};
            int i;
            if ((safe_mod_func_int32_t_s_s((g_68[g_556] , ((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_715[2], 0xB986ADB5L)), 1)) != (func_66(g_35) == (((((safe_unary_minus_func_int32_t_s(l_2297)) >= ((safe_mod_func_int8_t_s_s((func_46(((~p_3) ^ (((l_2300 ^ func_71(((l_2297 ^ g_1675) ^ (-1L)), p_3, g_1764, l_2301, p_3)) < p_4) != l_2300)), g_282, g_793[0], g_2302, p_3) ^ p_4), g_851)) != (-9L))) <= l_2301) != 0x3B26L) < p_4))) & g_1803[4]) != 0x7139L)), g_1189)))
            {
                int l_2304 = 1L;
                int l_2330 = 0x802A5D94L;
                int l_2332 = 9L;
                int l_2333 = (-1L);
                char l_2375 = 9L;
                l_2303[0][2][0] |= (l_2301 >= (4294967295UL > (0x503A42F7L != 0xA6137624L)));
                for (g_346 = 0; (g_346 <= 1); g_346 += 1)
                {
                    if (l_2303[0][2][1])
                        break;
                    if (l_2301)
                        break;
                    if (l_2303[0][1][1])
                        continue;
                }
                if (g_1765)
                {
                    int l_2307 = 0x0C91C677L;
                    int l_2310 = 0x5D4E07F5L;
                    if (l_2297)
                    {
                        l_2307 = ((((0L ^ g_221) , (0xB440401DL <= ((l_2304 && ((65535UL == (((safe_lshift_func_uint8_t_u_u(p_3, func_66(g_282))) > g_1630[3]) ^ p_4)) && 255UL)) <= g_221))) , p_4) == g_1675);
                        if (l_2303[0][4][2])
                            break;
                    }
                    else
                    {
                        int l_2308 = (-9L);
                        int l_2309 = 0xC4D9DD56L;
                        unsigned char l_2314 = 255UL;
                        l_2311++;
                        g_1231 = ((l_2307 || l_2301) && (l_2307 , p_3));
                        l_2314 ^= l_2308;
                        l_2303[0][3][3] = (safe_mod_func_int32_t_s_s((((l_2304 && 0UL) < ((safe_mod_func_int8_t_s_s(((p_4 , (0xCFF46EA3L == ((p_4 == (safe_rshift_func_uint16_t_u_u(((((g_1233[2][0] != (safe_lshift_func_int16_t_s_u((1L | func_46(g_282, ((func_46(((safe_add_func_int32_t_s_s((((g_87 , g_68[1]) | 0xCEL) >= g_721), 0xC9ED68C4L)) || p_3), l_2297, g_2230, l_2304, l_2311) | 7L) , 0L), g_1271[5][3][1], p_4, l_2297)), l_2325))) > p_4) , 0x3CDCL) > p_3), g_456))) && l_2300))) | p_4), g_68[g_556])) & l_2304)) , l_2304), g_68[g_556]));
                    }
                }
                else
                {
                    unsigned l_2327 = 4294967295UL;
                    int l_2331 = (-1L);
                    int l_2334 = 0x97DDEEAEL;
                    int l_2335 = 0xC4EA0E33L;
                    int l_2384 = 0xF9DCD2CEL;
                    int l_2385 = (-5L);
                    for (g_1921 = 0; (g_1921 <= 1); g_1921 += 1)
                    {
                        unsigned l_2326 = 0x373C3615L;
                        l_2301 = 0xEB2CC6DAL;
                        return l_2326;
                    }
                    for (g_1923 = 0; (g_1923 <= 1); g_1923 += 1)
                    {
                        int l_2336 = 0x458631ECL;
                        int l_2337 = 0L;
                        unsigned l_2343 = 9UL;
                        l_2327 = 0x33DF6D78L;
                        l_2338--;
                        g_1857 = ((4294967295UL < ((((safe_add_func_int8_t_s_s(g_972, l_2343)) < l_2336) != (safe_lshift_func_int8_t_s_u(g_1630[5], 1))) , ((4294967292UL >= ((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_s((-1L), ((safe_mod_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(0x6F4FL, 12)), g_1233[3][2])) , p_4) != g_1008) < g_1527), l_2333)) , p_3))) , l_2333))), (-3L))) <= g_1271[5][3][1])) , 0x8671C2B7L))) , p_3);
                    }
                    for (l_2334 = 1; (l_2334 >= 0); l_2334 -= 1)
                    {
                        short l_2358[8][6][3] = {{{8L,(-1L),0xF406L},{6L,0xEB4BL,0xF6EBL},{0L,(-1L),6L},{0xD71DL,(-1L),(-1L)},{0x4E1FL,(-6L),1L},{0x1D77L,0x3BEEL,(-10L)}},{{0x8915L,0L,0x4E1FL},{0L,0xE3CDL,(-10L)},{1L,(-1L),0x5DB5L},{(-1L),0xC12AL,0xF7FAL},{0x8ECAL,0xCDD9L,0x3939L},{(-5L),(-10L),0x3939L}},{{0xEB4BL,0xF406L,(-10L)},{0x79B6L,0xE3CDL,0L},{0x4F39L,2L,0L},{6L,1L,(-10L)},{0xF7FAL,8L,0x08F2L},{(-1L),0x43D3L,(-1L)}},{{0L,(-1L),1L},{0x08F2L,1L,0xA95EL},{0x481FL,0x5DB5L,0x79B6L},{0x4B3CL,0L,0xF7FAL},{0x481FL,(-9L),0x5478L},{0x08F2L,0xCDD9L,0xEB4BL}},{{0L,(-1L),0x8915L},{(-1L),0x725DL,(-6L)},{0xF7FAL,0L,0L},{6L,0x4F39L,0x1D77L},{0x4F39L,0x4E1FL,0x53A5L},{0x79B6L,0L,(-6L)}},{{0xF879L,0L,0x4B3CL},{1L,0L,(-1L)},{0x4722L,0L,0x3939L},{0xDFD6L,0x4E1FL,0x725DL},{1L,0x4F39L,0xF6EBL},{0xD71DL,0L,0x4E1FL}},{{0xE3CDL,0x725DL,0xCDD9L},{(-1L),(-1L),(-1L)},{(-10L),0xCDD9L,0xF879L},{0x5DB5L,(-9L),0xD71DL},{(-6L),0L,8L},{0xA95EL,0x5DB5L,0xD71DL}},{{0x3BEEL,1L,0xF879L},{0xEB4BL,(-1L),(-1L)},{0L,0xA95EL,0x8915L},{0x4F39L,0xF406L,0x5478L},{0L,0L,0L},{(-5L),8L,0xEB4BL}}};
                        int l_2359[6];
                        unsigned short l_2360[2];
                        unsigned char l_2386 = 250UL;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_2359[i] = 1L;
                        for (i = 0; i < 2; i++)
                            l_2360[i] = 0xBC7AL;
                        ++l_2360[1];
                        g_12 = (l_2334 >= ((l_2329[3] , (safe_mod_func_int8_t_s_s(g_68[g_556], func_46(func_71(((safe_add_func_int32_t_s_s(func_46(g_2302, ((((safe_rshift_func_uint16_t_u_s((p_3 > ((~(l_2332 & (safe_rshift_func_int16_t_s_u((func_71(((safe_add_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_2375, l_2303[0][2][0])) || (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(func_46((l_2325 >= 0L), p_3, p_4, g_1147, l_2297), 3)), l_2303[0][2][0])) && 0xCFL), g_556)) || 0L), 0x9AEB76DDL)) == p_4) , 0UL)) < l_2331), p_3)) ^ l_2331), p_4, g_1630[0], g_530[0][0][6], l_2327) && 0x65BEL), g_793[0])))) , l_2311)), l_2359[2])) & g_1233[1][0]) || l_2333) & 0L), p_3, l_2304, g_849), l_2301)) & g_1278), g_2244, p_3, g_830, g_1923), g_196, l_2358[5][5][0], p_4, p_3)))) | l_2329[4]));
                        ++l_2386;
                    }
                }
            }
            else
            {
                int l_2391[2][1][6] = {{{0x44126C1CL,0x44126C1CL,0x44126C1CL,0x44126C1CL,0x44126C1CL,0x44126C1CL}},{{0x44126C1CL,0x44126C1CL,0x44126C1CL,0x44126C1CL,0x44126C1CL,0x44126C1CL}}};
                int l_2392 = 0x91E2216EL;
                int l_2394 = 0x46E56F05L;
                int i, j, k;
                for (g_1675 = 0; (g_1675 <= 1); g_1675 += 1)
                {
                    int i, j;
                    return g_368[g_1675][(g_1675 + 2)];
                }
                g_2395--;
                for (g_280 = 0; (g_280 >= 0); g_280 -= 1)
                {
                    g_2390 &= (-1L);
                }
                g_280 = (((((safe_lshift_func_uint8_t_u_u(((!l_2394) >= (safe_lshift_func_uint8_t_u_s(((l_2404 == (((func_71((g_1763[1] , (g_1802 || g_849)), g_487[3][2], ((safe_lshift_func_int8_t_s_s(p_3, 2)) , (safe_mod_func_int8_t_s_s(p_3, g_196))), l_2394, l_2301) | g_972) , 0L) < g_1803[5])) | p_3), g_811))), l_2391[1][0][4])) <= l_2409) || (-1L)) <= p_3) , 0xD754C7B9L);
            }
        }
        if (((l_2338 == func_31(l_2410)) && (safe_mod_func_int32_t_s_s(((g_1229 != ((((p_3 , (((safe_rshift_func_uint8_t_u_s(func_66(func_71((l_2409 ^ (safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint16_t_u_u(l_2300, 0x885FL)) == func_71(p_4, g_1857, l_2404, l_2404, l_2419)) > 0UL) > g_811), 12))), p_3, l_2300, g_634[0][0][9], p_3)), 0)) | 1UL) & l_2404)) != 65532UL) < g_1801[1]) <= l_2357[0])) < g_884), g_346))))
        {
            unsigned l_2420 = 1UL;
            int l_2426 = 0xE4883F23L;
            unsigned l_2445 = 0x61551307L;
            l_2426 = ((p_4 , ((p_4 | (g_1099 != l_2420)) , (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(g_1139, (g_103 , ((p_4 != func_66((((p_3 && ((g_1231 == l_2357[3]) < l_2425)) < 0x0C31684EL) , 0L))) && p_4)))), p_3)))) && p_3);
            if (g_793[0])
                break;
            for (g_282 = (-18); (g_282 == 40); g_282 = safe_add_func_int8_t_s_s(g_282, 2))
            {
                char l_2431 = 0x5FL;
                int l_2457 = 0x96748E96L;
                unsigned l_2458 = 4UL;
                int l_2469[10] = {0xC1FB9FAEL,(-1L),0xC1FB9FAEL,0xC1FB9FAEL,(-1L),0xC1FB9FAEL,0xC1FB9FAEL,(-1L),0xC1FB9FAEL,0xC1FB9FAEL};
                int i;
                l_2357[2] = (func_17(((safe_add_func_uint16_t_u_u(l_2410, (l_2431 >= (p_3 & l_2431)))) , (func_17(p_3, g_2005, p_4, (g_793[0] || (safe_sub_func_int16_t_s_s(p_4, 0xA506L))), p_4) > l_2404)), g_793[0], g_1859, l_2301, g_2434) ^ 3UL);
                if (((((safe_lshift_func_uint16_t_u_s((g_1802 , (p_3 | ((safe_add_func_int16_t_s_s(func_46((((safe_rshift_func_int8_t_s_u(g_2393[0], (0x5BL > ((l_2420 , ((safe_sub_func_int16_t_s_s(((p_3 , ((safe_mod_func_int32_t_s_s(((g_120[1] && (l_2431 && p_4)) <= p_3), l_2431)) & l_2420)) & 0xA3A4B5FCL), p_3)) ^ 2UL)) || 0x91EBC51FL)))) || l_2303[0][2][0]) , g_2148), g_1161, l_2431, g_103, g_1091), l_2426)) & l_2445))), 10)) ^ g_715[1]) >= l_2431) , (-1L)))
                {
                    short l_2452 = 1L;
                    l_2457 = (((safe_sub_func_uint16_t_u_u((l_2409 > (safe_mod_func_int8_t_s_s((((((safe_sub_func_int16_t_s_s((func_66(l_2452) ^ (-2L)), l_2431)) , (safe_lshift_func_int8_t_s_u((l_2301 & l_2303[0][4][0]), 2))) < ((safe_rshift_func_int8_t_s_u((func_71(l_2452, p_4, p_3, p_3, p_3) > 0x75L), 3)) || g_708[6][0][4])) & p_3) , l_2420), p_3))), 65529UL)) >= g_120[1]) <= g_1266[0][0][1]);
                    --l_2458;
                }
                else
                {
                    unsigned l_2468 = 0x8A652F7CL;
                    l_2469[1] |= (g_68[1] , ((func_46((0xB9B0L <= (0x8078F488L || func_46(p_4, (((func_71(l_2457, (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((g_12 , (0L > (((safe_rshift_func_int16_t_s_s(p_4, 0)) || (-1L)) != 0x34B6L))) != l_2467[2][0][4]) <= p_4), p_4)), 1)), p_4, g_1803[5], l_2420) || g_884) > l_2357[1]) != 1UL), g_2390, p_3, p_4))), l_2311, p_3, l_2303[0][0][3], l_2468) , 0xBAF7L) , p_3));
                }
                if (p_4)
                {
                    int l_2472 = (-4L);
                    l_2426 = (p_3 || func_17((safe_lshift_func_uint8_t_u_s(func_46(l_2472, (((safe_rshift_func_int16_t_s_u((((((((safe_lshift_func_uint16_t_u_s((p_3 == 0x21EBL), ((((((safe_rshift_func_int16_t_s_s((p_4 ^ 0x9A1AL), 11)) , ((safe_lshift_func_uint16_t_u_u(g_530[4][0][6], ((safe_add_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(1L, (safe_sub_func_uint8_t_u_u(247UL, g_2141)))), l_2300)), l_2445)) && 4294967295UL), 0xD81C7AE1L)) ^ l_2425), 65535UL)) <= l_2472))) <= 0x0DL)) != 0x22034CB3L) == l_2420) | 2L) >= p_3))) | p_3) >= g_884) && 0x2547L) , g_120[0]) > 6L) , g_715[0]), 2)) < p_3) ^ p_3), p_4, p_4, g_1803[6]), p_3)), g_12, p_4, p_3, l_2469[1]));
                    g_280 &= func_71((((-1L) | ((((((0x3A73L || ((!(!((safe_rshift_func_int16_t_s_s((g_1855 < (l_2472 , g_1764)), ((((((safe_lshift_func_uint8_t_u_u(func_71((safe_unary_minus_func_uint32_t_u((0xD421172DL | (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((p_3 , g_2244) | ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((!0x68L), l_2467[2][0][4])), l_2472)) & g_1007)), 7UL)), g_68[0]))))), g_35, g_1766, l_2472, p_4), 6)) <= 4294967295UL) == p_3) , 65535UL) , 1UL) == l_2506))) != g_1766))) , l_2426)) > l_2469[8]) & 0L) & 0x2BL) ^ g_441) || g_202)) & 0xD22502C4L), l_2457, g_249, p_4, l_2420);
                }
                else
                {
                    unsigned l_2509[2][10][9] = {{{0x0AEE7227L,4294967295UL,0xF923EF8EL,0xF7E45C10L,9UL,0x028693C8L,0xF923EF8EL,0UL,0x0AEE7227L},{4294967288UL,1UL,0x9AC5D4F3L,1UL,0x4B69EBFAL,4294967288UL,0x7FCE91B1L,4294967295UL,4294967295UL},{4294967289UL,0x52A79408L,4294967294UL,0x3AF14530L,4294967295UL,0UL,4294967286UL,0x3AF14530L,0xF9F3E865L},{0x4B69EBFAL,4294967293UL,1UL,0x250098B9L,4294967295UL,0UL,0UL,4294967295UL,0x250098B9L},{0x0AEE7227L,0x52A79408L,0x0AEE7227L,4294967295UL,0xF923EF8EL,0xF7E45C10L,9UL,0x028693C8L,0xF923EF8EL},{0x35A9C65FL,1UL,0x7FCE91B1L,0xE5D4A84DL,0x486E1BAAL,4294967295UL,1UL,0x7FCE91B1L,0x35A9C65FL},{0UL,4294967295UL,4294967294UL,4294967295UL,0UL,1UL,4UL,0xEA186B18L,4294967289UL},{4294967288UL,0x9AC5D4F3L,4294967295UL,0x35A9C65FL,0x250098B9L,0UL,0x9AC5D4F3L,4294967295UL,4294967295UL},{9UL,7UL,0x7AF87D48L,0xF7E45C10L,0x7AF87D48L,7UL,9UL,0x83855635L,0x0AEE7227L},{4294967295UL,0x250098B9L,1UL,4294967293UL,0x4B69EBFAL,4294967295UL,4294967295UL,0x7FCE91B1L,4294967288UL}},{{4294967289UL,0x83855635L,1UL,0UL,0xF9F3E865L,0UL,1UL,0x83855635L,4294967289UL},{0UL,4294967293UL,0xE5D4A84DL,0x4B69EBFAL,0x486E1BAAL,0x348FEB95L,0UL,4294967295UL,0x4B69EBFAL},{0x7AF87D48L,0x3AF14530L,0x0AEE7227L,0x028693C8L,0x00E0EED8L,0x83855635L,0x00E0EED8L,0x028693C8L,0x0AEE7227L},{0UL,0UL,0UL,0xE5D4A84DL,4294967288UL,0x486E1BAAL,0UL,0UL,0x35A9C65FL},{4294967289UL,0xEA186B18L,4UL,1UL,0UL,4294967295UL,4294967294UL,4294967295UL,0UL},{4294967295UL,4294967293UL,0UL,1UL,0x250098B9L,0x7FCE91B1L,4294967293UL,4294967288UL,4294967295UL},{9UL,1UL,0x0AEE7227L,0x83855635L,9UL,7UL,0x7AF87D48L,0xF7E45C10L,0x7AF87D48L},{4294967288UL,0x250098B9L,0xE5D4A84DL,0xE5D4A84DL,0x250098B9L,4294967295UL,0UL,0x348FEB95L,0x486E1BAAL},{4294967289UL,0UL,4294967295UL,0x52A79408L,0xF4FC7768L,0UL,4UL,0xF7E45C10L,4294967295UL},{0x250098B9L,4294967293UL,0x9AC5D4F3L,0x35A9C65FL,4294967295UL,4294967295UL,0UL,0x68942CF9L,0x35A9C65FL}}};
                    int i, j, k;
                    l_2357[0] = ((safe_sub_func_uint16_t_u_u(65529UL, (((l_2509[1][2][5] || (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_3, p_4)), (((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(((g_2244 , 0x2A5DF0C3L) >= (safe_lshift_func_int16_t_s_s(g_2221, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((2L >= (l_2426 || g_708[6][0][4])), g_2526)), 65531UL)) | 0x0267B966L)))), g_972)) || g_1229), l_2469[1])) <= p_4) && 0x82BAL))), p_3))) & 0x6CC6L) || 0x0B46L))) > 0xD5L);
                }
            }
            l_2303[0][2][0] |= p_4;
        }
        else
        {
            char l_2527 = 0xE3L;
            int l_2528 = 0xBAE90678L;
            int l_2529[4];
            int l_2530[4] = {(-1L),(-1L),(-1L),(-1L)};
            short l_2532[5][3][2] = {{{(-1L),0x2BE9L},{0L,0L},{0x2BE9L,0L}},{{0L,0x2BE9L},{(-1L),(-1L)},{(-1L),0x2BE9L}},{{0L,0L},{0x2BE9L,0L},{0L,0x2BE9L}},{{(-1L),(-1L)},{(-1L),0x2BE9L},{0L,0L}},{{0x2BE9L,0L},{0L,0x2BE9L},{(-1L),(-1L)}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2529[i] = (-3L);
            ++g_2534;
        }
    }
    return l_2303[0][2][3];
}







static const unsigned func_5(char p_6, short p_7, unsigned p_8)
{
    unsigned l_1769 = 0UL;
    char l_1772 = (-4L);
    int l_1775[9];
    int l_1776 = (-6L);
    int l_1794 = 0x414921BDL;
    int l_1813 = (-7L);
    int l_1827 = 0xE55E53A3L;
    unsigned char l_1901 = 0x64L;
    unsigned l_1902[9][3][4] = {{{4294967295UL,0xE044998BL,4294967295UL,0xBA7AD765L},{0xF40DFEA5L,0xDD672FF1L,0xA14DADA8L,4294967295UL},{0UL,0xDD672FF1L,4294967295UL,0xBA7AD765L}},{{0xDD672FF1L,0xE044998BL,0x3E11C344L,0xF40DFEA5L},{0x48EAB61BL,0UL,0x88EFA3DDL,4294967295UL},{0xA14DADA8L,0x3E11C344L,7UL,4UL}},{{0x88EFA3DDL,0UL,0xDF027D5CL,0UL},{4294967295UL,0xF40DFEA5L,4UL,0xDD672FF1L},{0xD0A54B62L,4UL,0x4BD18912L,4UL}},{{0UL,4294967295UL,0x51FD54ECL,0xDD672FF1L},{7UL,4UL,4UL,4294967295UL},{4294967295UL,0xDD672FF1L,0UL,0xA924E60EL}},{{4294967295UL,0UL,0x48EAB61BL,4294967295UL},{4294967295UL,4UL,4294967295UL,1UL},{0x3E11C344L,4294967295UL,4294967295UL,0x3E11C344L}},{{0xD0A54B62L,0xF40DFEA5L,0x0F18738DL,0x4BD18912L},{1UL,0xBA7AD765L,4294967295UL,0UL},{4294967295UL,4294967295UL,0x3E11C344L,0UL}},{{0xE044998BL,0xBA7AD765L,4294967295UL,0x4BD18912L},{0UL,0xF40DFEA5L,4294967295UL,0x3E11C344L},{0xA14DADA8L,4294967295UL,0x51FD54ECL,1UL}},{{0xDD672FF1L,4UL,0xF40DFEA5L,4294967295UL},{1UL,0UL,1UL,0xA924E60EL},{0x48EAB61BL,0xDD672FF1L,0UL,4294967295UL}},{{0xDF027D5CL,4UL,1UL,0xDD672FF1L},{0x0F18738DL,4294967295UL,1UL,0xDF027D5CL},{0xDF027D5CL,0UL,0UL,1UL}}};
    int l_1916[6][2] = {{0x9F676D66L,1L},{0x9F676D66L,0x9F676D66L},{1L,0x9F676D66L},{0x9F676D66L,1L},{0x9F676D66L,0x9F676D66L},{1L,0x9F676D66L}};
    char l_1973 = 0x28L;
    short l_2011 = 0x0FFCL;
    int l_2062 = 0x206962FAL;
    int l_2174 = 0x57C55BB5L;
    unsigned l_2192 = 0x02CE2154L;
    unsigned l_2205 = 4294967287UL;
    unsigned short l_2260 = 0xD67FL;
    int l_2270 = 1L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1775[i] = 0L;
    l_1776 |= func_66(((func_71(l_1769, ((((8L == l_1769) , (func_57((l_1769 | (l_1772 < (func_17((func_71((p_8 | (safe_lshift_func_uint8_t_u_u((0x5048L < (p_6 < (g_88 , g_849))), 7))), l_1775[5], g_1764, g_972, g_1763[1]) , p_8), l_1769, p_8, l_1775[2], p_7) | l_1772))), g_346, l_1775[5]) <= 0x89F8L)) | 255UL) && g_221), p_8, p_8, p_6) , l_1769) , 1L));
    if ((safe_add_func_int16_t_s_s((p_6 < (func_14((safe_mod_func_int8_t_s_s(1L, (255UL ^ (safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u(((l_1775[4] >= (p_7 , (0UL <= (+(safe_lshift_func_int8_t_s_u(0xB0L, 0)))))) ^ l_1772), p_7))))))), p_7) != p_6)), l_1775[5])))
    {
        const int l_1790 = (-1L);
        int l_1793 = 0x78364773L;
        int l_1800[7] = {0xA62D7EDBL,(-1L),(-1L),0xA62D7EDBL,(-1L),(-1L),0xA62D7EDBL};
        unsigned short l_1807 = 0UL;
        unsigned char l_1834 = 0xFDL;
        int i;
        g_35 |= l_1776;
        l_1793 = (func_66((0x89L == ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_7 > l_1790), p_6)), ((safe_rshift_func_uint8_t_u_u(((p_8 ^ (p_8 == g_441)) , (g_280 > (0x9D61D7BEL <= 0xDB74B5AFL))), 5)) > g_1630[5]))) < p_6))) >= 65531UL);
        if ((l_1794 & g_1795))
        {
            int l_1796 = 0x45C40121L;
            int l_1797 = 0L;
            int l_1798 = 0x5E934E17L;
            int l_1799[9][8] = {{(-2L),0xC6D7977AL,(-2L),0xE121931BL,(-7L),(-2L),(-1L),0x199BBDF5L},{0x199BBDF5L,(-1L),0xDEB282BFL,3L,(-2L),(-2L),3L,0xDEB282BFL},{0x199BBDF5L,0x199BBDF5L,(-3L),0xD71EB525L,3L,0xF61AC9B9L,0x199BBDF5L,3L},{(-1L),3L,(-1L),(-1L),(-7L),(-1L),(-1L),3L},{3L,0xE121931BL,0xDEB282BFL,0xD71EB525L,0xE121931BL,(-1L),(-7L),0xDEB282BFL},{0xC6D7977AL,(-7L),0x93C14566L,3L,3L,0x93C14566L,(-7L),0xC6D7977AL},{(-2L),3L,0xDEB282BFL,(-1L),0x199BBDF5L,(-2L),(-1L),0xD71EB525L},{0x199BBDF5L,(-2L),(-1L),0xD71EB525L,(-1L),(-2L),0x199BBDF5L,(-1L)},{0xC6D7977AL,3L,(-3L),0xC6D7977AL,(-7L),0x93C14566L,3L,3L}};
            short l_1806 = 0x4009L;
            int i, j;
            ++g_1803[5];
            for (g_1766 = 0; (g_1766 <= 7); g_1766 += 1)
            {
                int i;
                l_1776 = (g_1801[g_1766] & g_1007);
                for (g_35 = 0; g_35 < 3; g_35 += 1)
                {
                    for (g_1091 = 0; g_1091 < 9; g_1091 += 1)
                    {
                        g_368[g_35][g_1091] = 0xDDL;
                    }
                }
                l_1798 = ((g_1099 , 4L) | g_1801[7]);
                for (p_7 = 7; (p_7 >= 0); p_7 -= 1)
                {
                    if (g_634[1][0][1])
                        break;
                    return l_1775[7];
                }
            }
            --l_1807;
            return l_1807;
        }
        else
        {
            unsigned l_1810 = 0x1674B449L;
            int l_1815 = 0xCCE09A88L;
            int l_1816 = 9L;
            int l_1817 = (-8L);
            int l_1818 = (-1L);
            unsigned l_1849 = 0UL;
            unsigned short l_1877 = 0x4D18L;
            l_1810 &= (-1L);
            for (g_196 = 8; (g_196 != 9); ++g_196)
            {
                int l_1814 = 0x46AB30C6L;
                int l_1824 = 1L;
                int l_1826[2][3] = {{7L,0L,7L},{7L,0L,7L}};
                int i, j;
                if (l_1813)
                {
                    unsigned l_1819 = 3UL;
                    int l_1825[9] = {0x1DBC3733L,0x1DBC3733L,0x1DBC3733L,0x1DBC3733L,0x1DBC3733L,0x1DBC3733L,0x1DBC3733L,0x1DBC3733L,0x1DBC3733L};
                    int i;
                    l_1819--;
                    for (g_1764 = (-20); (g_1764 == (-4)); g_1764++)
                    {
                        unsigned l_1828[10] = {0UL,9UL,0UL,0UL,9UL,0UL,0UL,9UL,0UL,0UL};
                        int l_1831 = (-6L);
                        int i;
                        ++l_1828[5];
                        l_1831 ^= l_1810;
                        g_81 = g_884;
                    }
                    for (l_1814 = (-14); (l_1814 >= (-29)); l_1814 = safe_sub_func_uint32_t_u_u(l_1814, 9))
                    {
                        int l_1839 = (-4L);
                        const unsigned l_1848 = 0x65F4795DL;
                        l_1834--;
                        if (g_1795)
                            break;
                        l_1825[7] = (safe_rshift_func_uint16_t_u_s(l_1825[3], (l_1839 == (((safe_unary_minus_func_uint32_t_u((p_6 && (safe_mod_func_int16_t_s_s(((+(~l_1790)) || ((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(p_8, func_46(g_1527, g_1801[6], g_81, (safe_unary_minus_func_uint16_t_u((p_7 & p_7))), g_1766))), l_1848)) == p_7)), g_1675))))) != l_1849) != 1L))));
                    }
                }
                else
                {
                    for (g_249 = 0; (g_249 >= 51); ++g_249)
                    {
                        l_1826[0][0] = 0x7AD48FB3L;
                    }
                }
            }
            for (g_282 = 0; (g_282 < 14); g_282 = safe_add_func_uint16_t_u_u(g_282, 7))
            {
                int l_1854 = 0x6138D0C0L;
                int l_1860[6][10][1] = {{{0x7DDA31EBL},{0x7DDA31EBL},{8L},{0x7DDA31EBL},{0x7DDA31EBL},{8L},{8L},{8L},{(-1L)},{8L}},{{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L}},{{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)}},{{8L},{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)},{8L}},{{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L}},{{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)},{8L},{8L},{(-1L)}}};
                int i, j, k;
                ++g_1861;
                for (g_456 = 0; (g_456 != (-28)); g_456--)
                {
                    const int l_1876 = (-5L);
                    if ((g_530[2][0][1] < (g_1527 , ((safe_mod_func_int32_t_s_s(func_71((func_17((((-1L) || g_1803[1]) || ((!l_1775[5]) | ((func_71(p_7, p_8, ((p_7 == (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((g_81 > 65535UL), g_1527)) , g_1233[3][3]), 0x04C0501EL)) & g_1765), g_1795)), l_1769))) | 7L), p_7, l_1876) , l_1793) , g_721))), p_8, l_1793, l_1807, p_7) , 0x3A8EABFFL), l_1877, p_8, l_1860[4][8][0], g_530[4][0][6]), g_715[0])) && l_1827))))
                    {
                        l_1818 = ((safe_lshift_func_uint16_t_u_u(l_1817, (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((0UL >= 0x5B02L), ((g_715[0] != ((+(p_8 > 1L)) || g_715[1])) <= g_1099))), (((0x682FEAF3L & 0xFFBC7823L) | g_441) != g_487[0][0]))))) != 1L);
                    }
                    else
                    {
                        l_1793 = ((0x2970L >= l_1860[1][2][0]) == (l_1817 | l_1860[0][7][0]));
                        l_1775[4] = (safe_mod_func_uint32_t_u_u((p_8 < func_17(g_1231, g_1861, ((func_66(l_1876) <= ((((func_46(l_1815, g_1857, g_35, p_8, l_1876) <= g_103) > g_368[0][6]) < p_6) <= 0x4832762AL)) >= 0x3FL), l_1860[3][3][0], g_708[6][0][4])), p_8));
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_1900 = 4294967295UL;
        short l_1903[6];
        int l_1915 = 0x1B916225L;
        int l_1919[9][8][2] = {{{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L}},{{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L}},{{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L}},{{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L}},{{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L}},{{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L}},{{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L}},{{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L}},{{0L,0x2C1231B9L},{0x2C1231B9L,0L},{0x2C1231B9L,0x2C1231B9L},{0L,0x2C1231B9L},{0x2C1231B9L,0xF7C7E9BFL},{0L,0L},{0xF7C7E9BFL,0L},{0L,0xF7C7E9BFL}}};
        unsigned l_2000[8];
        int l_2047 = 1L;
        unsigned char l_2060[3];
        int l_2061 = 4L;
        unsigned short l_2101[1][6];
        int l_2105 = (-1L);
        char l_2123 = (-5L);
        short l_2147 = (-1L);
        const unsigned char l_2195 = 0xB0L;
        unsigned char l_2219 = 0UL;
        unsigned l_2237[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_1903[i] = 1L;
        for (i = 0; i < 8; i++)
            l_2000[i] = 0x0B2E0146L;
        for (i = 0; i < 3; i++)
            l_2060[i] = 0x93L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_2101[i][j] = 0x1708L;
        }
        if (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u((func_66((func_66(p_8) , func_17((safe_rshift_func_int16_t_s_s((+(safe_sub_func_int16_t_s_s(p_7, (func_31((safe_lshift_func_int8_t_s_u((func_14(g_1271[5][3][1], (p_7 <= (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((0xFAL && (p_8 == ((func_66(g_1098) >= p_8) , p_8))), 9)), g_1147)))) || p_8), 7))) >= g_1630[1])))), l_1900)), p_8, l_1900, l_1900, l_1901))) , l_1902[5][1][3]), 10)), p_7)) , l_1903[2]))
        {
            unsigned char l_1908 = 0x69L;
            int l_1917[2];
            short l_1918 = 0xE28AL;
            char l_1980[8][5][6] = {{{0x12L,(-1L),0xD7L,0xBCL,(-10L),0xFDL},{(-1L),(-1L),3L,0L,0xA5L,0xFBL},{0x65L,9L,0xA9L,0xFDL,4L,0xC8L},{(-4L),0x10L,0x95L,0L,0x0AL,0x0AL},{9L,3L,3L,9L,(-4L),0x9EL}},{{0x3EL,(-10L),5L,0x12L,(-1L),0x81L},{(-10L),1L,(-1L),0xB6L,(-1L),(-10L)},{0xC6L,(-10L),0x1DL,(-1L),(-4L),0xE6L},{(-1L),3L,0x61L,0x07L,0x0AL,0xACL},{0x15L,0x10L,0x5EL,0x0FL,4L,(-1L)}},{{0x57L,9L,(-1L),2L,0xA5L,0xC8L},{0xD7L,(-1L),0xCCL,9L,(-10L),0L},{0xBCL,(-1L),0x81L,0x15L,0x95L,7L},{0x3EL,0x55L,0x8FL,0xFBL,0xD9L,(-1L)},{0xCCL,0x07L,0xCCL,0x19L,0L,0x3FL}},{{0x0AL,1L,0x55L,0x15L,(-10L),0xA9L},{1L,0xD8L,0L,(-10L),0xFDL,1L},{0xC6L,(-4L),0x95L,(-1L),0x15L,0xA5L},{0xD7L,0xCCL,2L,0xD9L,9L,0L},{(-6L),1L,0xFBL,0x81L,2L,0x19L}},{{(-1L),0x00L,0xB6L,0x61L,0x0FL,(-2L)},{0xB3L,5L,1L,0xC8L,0x07L,0xC8L},{0x4DL,(-10L),0x4DL,5L,(-1L),(-4L)},{0x74L,0x1FL,(-1L),0x07L,0xB6L,0L},{0x93L,0L,1L,0x07L,0x12L,5L}},{{0x74L,1L,0x19L,5L,9L,0x2EL},{0x4DL,(-3L),0x61L,0xC8L,0L,0L},{0xB3L,(-10L),0L,0x61L,0xFDL,0xD7L},{(-1L),0x5EL,0x07L,0x81L,0L,0x19L},{0x15L,0xC8L,0xA5L,1L,0x55L,0x5CL}},{{0x65L,0x27L,0xDFL,0xD8L,9L,(-1L)},{9L,0x81L,0xC6L,8L,1L,3L},{4L,0x5AL,(-1L),0xB6L,0L,5L},{(-1L),1L,0xBCL,0xFDL,0x8EL,0x55L},{(-4L),0x15L,0x8EL,(-10L),0xC8L,0x0FL}},{{0x8FL,0L,0xA9L,0x1DL,(-1L),(-10L)},{0x1FL,(-1L),(-10L),0x57L,(-1L),(-1L)},{0xD8L,(-1L),0L,(-1L),(-10L),1L},{0x93L,0xBCL,4L,0x95L,0x0AL,0L},{0x55L,(-10L),(-1L),0x81L,0x81L,(-1L)}}};
            unsigned char l_2008 = 0UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1917[i] = 0x72A82C65L;
            if (l_1903[1])
            {
                unsigned l_1904 = 0UL;
                int l_1907 = 0x0DF06584L;
                int l_1920 = (-1L);
                unsigned short l_1924 = 65535UL;
                unsigned short l_1940[5];
                int l_1967 = (-10L);
                int l_1968[5] = {1L,1L,1L,1L,1L};
                int i;
                for (i = 0; i < 5; i++)
                    l_1940[i] = 65531UL;
                if (l_1904)
                {
                    char l_1914[7][2];
                    int l_1922 = 0xEAFA80B6L;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1914[i][j] = 0xC4L;
                    }
                    for (p_7 = (-8); (p_7 >= (-18)); p_7 = safe_sub_func_int16_t_s_s(p_7, 2))
                    {
                        unsigned short l_1913 = 0x53A5L;
                        l_1907 = 0x14571F71L;
                        l_1908 = p_7;
                        l_1914[0][1] = (safe_rshift_func_int8_t_s_u(func_57(g_556, p_6, g_556), (g_368[1][7] | ((g_1630[3] && (g_1271[3][4][3] >= (((+g_1858[2]) , ((g_103 < g_634[0][0][9]) > l_1913)) || 1L))) , 0x12L))));
                    }
                    --l_1924;
                    for (g_35 = 0; (g_35 != (-7)); g_35--)
                    {
                        l_1920 ^= 0x8AD3874EL;
                        if (l_1917[1])
                            break;
                        l_1917[0] |= p_8;
                    }
                }
                else
                {
                    unsigned char l_1937[9][5] = {{0UL,0UL,0x92L,0UL,0UL},{0x4FL,2UL,0x4FL,0x4FL,2UL},{0UL,253UL,253UL,0UL,253UL},{2UL,2UL,0UL,2UL,2UL},{253UL,0UL,253UL,253UL,0UL},{2UL,0x4FL,0x4FL,2UL,0x4FL},{0UL,0UL,0x92L,0UL,0UL},{0x4FL,2UL,0x4FL,0x4FL,2UL},{0UL,253UL,253UL,0UL,253UL}};
                    int l_1964 = 0x8A0E980FL;
                    int l_1965 = 0xC64EABA0L;
                    int l_1966[6][5] = {{0L,0x1B4DE9F2L,0L,0x1B4DE9F2L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0L,0x1B4DE9F2L,0L,0x1B4DE9F2L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L)},{0L,0x1B4DE9F2L,0L,0x1B4DE9F2L,0L},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int i, j;
                    g_849 = (safe_add_func_int8_t_s_s(l_1904, (safe_add_func_int8_t_s_s((-1L), ((safe_mod_func_uint8_t_u_u(((p_7 >= (((l_1937[7][1] || (((safe_sub_func_int32_t_s_s((func_46(((l_1918 < (p_8 != (255UL <= l_1940[2]))) & 1L), p_7, g_1271[5][3][1], p_8, p_8) != p_7), l_1917[0])) , l_1903[2]) != (-8L))) < 0x4088L) <= g_849)) < g_1161), 1L)) != g_1801[5])))));
                    g_1857 = (safe_mod_func_uint16_t_u_u((((((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((func_57(((safe_mod_func_int16_t_s_s(((l_1772 && (p_6 && 0x5AL)) ^ g_1271[4][3][2]), g_1527)) , l_1900), func_71(l_1937[7][1], l_1937[7][1], g_456, p_8, g_1231), l_1772) == 0L), g_1803[5])), p_7)) , 0L) || g_487[1][4]) , p_6) <= 0xF604038CL), l_1940[2]));
                    l_1915 = (g_1478 , (safe_sub_func_int32_t_s_s((p_8 , l_1775[5]), 5L)));
                    for (g_1921 = 21; (g_1921 > 20); --g_1921)
                    {
                        short l_1963[9][10] = {{0x926DL,0x568CL,0x2D91L,0x568CL,0x926DL,1L,0x926DL,0x568CL,0x2D91L,0x568CL},{0x926DL,7L,8L,0x568CL,8L,7L,0x926DL,7L,8L,0x568CL},{8L,0x568CL,8L,7L,0x926DL,7L,8L,0x568CL,8L,7L},{0x926DL,0x568CL,0x2D91L,0x568CL,0x926DL,1L,0x926DL,0x568CL,0x2D91L,0x568CL},{0x926DL,7L,8L,0x568CL,0x2D91L,1L,8L,1L,0x2D91L,7L},{0x2D91L,7L,0x2D91L,1L,8L,1L,0x2D91L,7L,0x2D91L,1L},{8L,7L,0x926DL,7L,8L,0x568CL,8L,7L,0x926DL,7L},{8L,1L,0x2D91L,7L,0x2D91L,1L,8L,1L,0x2D91L,7L},{0x2D91L,7L,0x2D91L,1L,8L,1L,0x2D91L,7L,0x2D91L,1L}};
                        int l_1969 = 0xA86A6D38L;
                        int i, j;
                        l_1907 = (((g_1857 > 65527UL) , (func_57(p_7, l_1940[3], (~(func_17((safe_rshift_func_uint16_t_u_u(0UL, 10)), p_7, p_7, (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(func_57(g_1630[5], (((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((1L <= p_7) , 65535UL), p_7)) ^ 0xA6L), g_1795)) , l_1924) , 0xA2634EA0L), g_849), 11)), 4)), l_1920) <= p_8))) && l_1920)) && 1UL);
                        ++g_1970;
                        l_1917[0] = l_1969;
                    }
                }
            }
            else
            {
                l_1919[6][7][1] = (l_1813 > (p_6 , g_35));
            }
            l_1973 = g_1923;
            for (g_1857 = 0; (g_1857 == (-18)); g_1857 = safe_sub_func_int32_t_s_s(g_1857, 1))
            {
                int l_1991 = 1L;
                int l_2003 = (-9L);
                if (((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((func_46((!p_8), func_46(p_8, l_1980[1][3][4], g_1231, (safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(l_1903[5], (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_249, 0x34L)), func_71((((((!p_7) ^ (safe_sub_func_int8_t_s_s(g_556, g_282))) | g_1271[5][3][1]) ^ 0x1119F30FL) | 2L), l_1915, p_7, g_1923, p_7))))) , g_1161) == g_556), 0x0B8E94C6L)), p_7), p_6, l_1991, l_1900) <= l_1903[2]), 5UL)), (-1L))) , g_35))
                {
                    int l_1996 = 5L;
                    int l_1997 = 0x781ACC04L;
                    int l_1998 = 0x2F6A7146L;
                    int l_1999 = 0xDA488782L;
                    for (g_1727 = 0; (g_1727 <= 8); g_1727 += 1)
                    {
                        int i;
                        if (l_1775[g_1727])
                            break;
                        l_1775[g_1727] = ((p_7 == (((((safe_sub_func_int8_t_s_s(g_1861, (func_71(p_7, func_46(g_1861, l_1973, l_1980[1][3][4], (g_1801[1] != g_81), ((((safe_sub_func_uint16_t_u_u((0UL | 0UL), 0x801FL)) && l_1902[5][1][3]) & p_6) >= l_1919[6][7][1])), l_1991, p_7, g_1161) , p_6))) < 2L) && 0xD3L) , l_1991) , g_1766)) ^ p_6);
                    }
                    --l_2000[7];
                    g_2005++;
                    ++l_2008;
                }
                else
                {
                    return l_1991;
                }
                l_2011 |= l_1775[5];
                l_1915 = g_1803[5];
            }
            g_1859 &= (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(func_17(p_8, (l_1903[3] <= ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(p_8, func_66(p_7))), (safe_mod_func_uint32_t_u_u(((p_8 >= (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((p_7 , (0x48L <= ((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(l_1813, 1L)), l_1901)), 0xD46FL)) <= g_1795))), g_368[0][6])) , 0x39L) && 0x56L), 255UL)), g_1139))) <= l_1916[0][1]), 0xCA900BCCL)))) , g_1855)), l_1902[5][1][3], g_88, l_1902[7][1][1]), 2)) | 0x688DEE76L), (-5L))), 0x5559L));
        }
        else
        {
            unsigned short l_2041 = 65526UL;
            int l_2045 = 2L;
            unsigned l_2063 = 0x65EC3453L;
            unsigned l_2146[4][8] = {{0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L},{0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L},{0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L},{0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L,0UL,0x375C8822L}};
            int i, j;
            for (g_1098 = 0; (g_1098 <= 7); g_1098 += 1)
            {
                int l_2046[3][10] = {{0x69A818E2L,0x5EEE4DEBL,0x85B7E643L,0x85B7E643L,0x5EEE4DEBL,0x69A818E2L,0x8A205CFCL,0x5EEE4DEBL,0x8A205CFCL,0x69A818E2L},{0x1A6EFF0FL,0x5EEE4DEBL,0x60D24DC2L,0x5EEE4DEBL,0x1A6EFF0FL,0x60D24DC2L,1L,0x5EEE4DEBL,0x57AA65C2L,1L},{1L,0x69A818E2L,0x69A818E2L,1L,0x8A205CFCL,0x85B7E643L,1L,0x85B7E643L,0x8A205CFCL,1L}};
                unsigned l_2089[5] = {0x97B26944L,0x97B26944L,0x97B26944L,0x97B26944L,0x97B26944L};
                int i, j;
                g_280 = (0x745A1595L || g_1801[g_1098]);
                if (p_8)
                {
                    unsigned l_2036 = 6UL;
                    for (g_280 = 1; (g_280 >= 0); g_280 -= 1)
                    {
                        int i;
                        l_2036--;
                        l_2041 &= (safe_rshift_func_uint8_t_u_u(0xB5L, g_120[g_280]));
                        return g_120[g_280];
                    }
                    return p_6;
                }
                else
                {
                    unsigned l_2044 = 0x7603D2E0L;
                    if (func_57((safe_add_func_int32_t_s_s((((+((p_6 > ((l_2044 == p_6) , 1L)) , ((func_66((l_1916[0][1] , p_8)) , g_1278) | ((g_853 < 0x8810L) != g_12)))) , 0xD7391297L) >= 0xFAEDB3EFL), 5L)), g_1801[g_1098], p_7))
                    {
                        l_2045 |= ((0x33FD2FB8L ^ (0xF100L ^ 1UL)) >= g_1801[g_1098]);
                    }
                    else
                    {
                        l_2046[1][1] = 4L;
                        return p_8;
                    }
                }
                if (g_1233[0][2])
                {
                    unsigned short l_2080 = 1UL;
                    int l_2090 = 5L;
                    l_2047 &= g_1921;
                    if ((safe_mod_func_int16_t_s_s(l_2046[1][5], (((safe_sub_func_uint8_t_u_u(g_1795, g_1271[5][3][1])) ^ ((safe_sub_func_uint8_t_u_u(g_221, (((safe_mod_func_int32_t_s_s((g_715[0] != ((safe_mod_func_int16_t_s_s(g_1859, (p_8 ^ ((safe_lshift_func_uint8_t_u_s(p_8, (l_2060[0] == 0UL))) , p_7)))) == l_2046[0][7])), l_2061)) , p_6) != 0UL))) != g_456)) && g_1147))))
                    {
                        l_2063--;
                        l_2045 = func_46(l_1794, (((((safe_sub_func_uint32_t_u_u((p_7 | p_6), (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(g_1766, 2)) , ((-1L) <= (((safe_add_func_uint32_t_u_u(l_1827, p_6)) > 0UL) , ((safe_add_func_int8_t_s_s(p_8, p_7)) != p_6)))), p_8)), g_68[1])), p_7)))) | 0xCFL) , g_1763[1]) ^ 0x49F1L) == (-6L)), l_2062, p_8, g_1279);
                    }
                    else
                    {
                        if (g_1763[0])
                            break;
                    }
                    --l_2080;
                    l_2090 = (safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u(((g_1795 == (safe_rshift_func_uint16_t_u_s((p_7 , (l_2080 & g_487[1][2])), 0))) , l_1775[5]), 2)) == (p_8 , g_1765)) < l_2080) != l_2089[3]), p_7));
                }
                else
                {
                    if (p_8)
                        break;
                }
            }
            if ((safe_rshift_func_uint16_t_u_s((((safe_mod_func_uint16_t_u_u(g_793[0], 1UL)) == 0xCA2D2FDAL) ^ (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(p_8, (l_2045 == g_811))) & (p_7 && (l_2060[0] >= (safe_rshift_func_int16_t_s_s((p_7 | l_2101[0][2]), 9))))) < 4294967292UL), 3L))), l_1916[0][1])))
            {
                short l_2110[4];
                int l_2115 = 0x3168DE34L;
                int i;
                for (i = 0; i < 4; i++)
                    l_2110[i] = 0L;
                l_2061 = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int8_t_s_s(g_1527, (((((0x4F3DDBD8L && l_2105) != p_8) || ((+((safe_add_func_int32_t_s_s(((((safe_mod_func_uint32_t_u_u(0xCBCDE74EL, l_2110[1])) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(l_2110[0], 6)), (0x598C3E08L >= p_8)))) && 255UL) > 0x94L), p_8)) , g_269)) || l_2045)) ^ 0x42B2F8D6L) == 0L)))));
                for (g_280 = 2; (g_280 >= 0); g_280 -= 1)
                {
                    int i;
                    l_2115 |= g_1801[(g_280 + 4)];
                    for (g_1923 = 0; (g_1923 <= 2); g_1923 += 1)
                    {
                        unsigned short l_2118 = 0xC8AAL;
                        l_2045 = (((func_46((((safe_add_func_int16_t_s_s(l_2118, ((safe_rshift_func_int16_t_s_s(func_71(p_8, g_1801[(g_280 + 4)], p_7, ((safe_add_func_int16_t_s_s(g_1098, ((((g_708[6][0][4] , func_46(func_46((p_8 , (l_2123 , p_6)), l_1903[5], l_2118, g_120[1], g_87), p_8, l_1903[4], p_6, g_2005)) ^ g_1161) > g_1801[(g_280 + 4)]) > g_1801[(g_280 + 4)]))) | g_368[0][6]), g_487[3][2]), 5)) || l_2110[1]))) & p_8) > 0xFF17AE3AL), p_7, g_12, g_884, g_35) != p_8) >= p_7) || 1UL);
                    }
                }
            }
            else
            {
                unsigned short l_2132 = 0xB2E2L;
                l_1794 = (g_1970 , ((1L | ((safe_add_func_int32_t_s_s(0xC93AE978L, p_7)) == (safe_sub_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(func_31((((((((safe_rshift_func_uint16_t_u_s(l_2132, 12)) & p_7) ^ g_103) != (((((l_1775[2] <= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((l_1775[5] > 0xE46E28FFL), g_1008)) ^ 255UL), p_6)), p_8)), 12))) | l_2041) || l_2132) , l_2132) && 0xF4L)) ^ g_2141) > p_7) , 1L)), p_7)) , g_1801[5]) != 0L), 0xB9L)))) ^ g_1478));
            }
            g_12 = (safe_lshift_func_uint8_t_u_s(((((0L || (((func_71(p_7, func_31((func_31((l_1769 & (l_1919[8][1][0] ^ (p_7 <= (safe_mod_func_int32_t_s_s(l_2146[3][2], ((g_811 & (((l_2063 , l_2147) || l_2146[3][2]) || l_2101[0][4])) ^ 0UL))))))) || (-1L))), g_2148, l_2063, g_1803[4]) >= l_2146[0][6]) == l_2146[1][1]) , g_1727)) != 1UL) | g_1766) != p_7), 0));
        }
        for (g_1970 = 0; (g_1970 != 6); g_1970++)
        {
            int l_2161 = 0x1CA6EA10L;
            unsigned short l_2193 = 0UL;
            int l_2226 = 1L;
            int l_2240 = 0x85B2A540L;
            int l_2241 = 0x0848809DL;
            int l_2242 = 0x1592B604L;
            int l_2243[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            if (func_66(p_6))
            {
                short l_2160[10][4][4] = {{{2L,0x1842L,0x48DBL,0xD14EL},{(-1L),(-7L),0L,0xC511L},{0xBA8CL,(-1L),0x750FL,1L},{0xFD56L,(-1L),0xA419L,4L}},{{0x750FL,(-1L),0x8FC4L,0xC2BBL},{0xAD00L,1L,1L,1L},{0L,0L,0xED11L,(-1L)},{0xB33BL,0xB0F3L,0xD2CDL,0x8E52L}},{{(-2L),0x8FC4L,0xDC4BL,0xD2CDL},{(-6L),0x8FC4L,0x750FL,0x8E52L},{0x8FC4L,0xB0F3L,4L,(-1L)},{(-1L),0L,(-3L),1L}},{{0xD14EL,1L,0L,0xC2BBL},{(-1L),(-1L),0xA5A6L,4L},{(-1L),(-1L),1L,1L},{(-2L),(-1L),(-3L),0xC511L}},{{0xAD00L,(-7L),(-1L),0xD14EL},{(-3L),0x1842L,(-1L),(-1L)},{0x60D8L,(-1L),1L,4L},{0x4BFFL,0x48DBL,(-2L),0L}},{{0x1EC8L,0x1842L,3L,0L},{0x48DBL,0L,0x83F0L,0xF34AL},{(-6L),0x084DL,0x257DL,0xD476L},{(-1L),0L,0x40D8L,(-1L)}},{{1L,(-1L),0xF1D2L,0xED11L},{0x6036L,1L,0x6036L,(-1L)},{0x4BFFL,1L,0L,(-1L)},{0xB0F3L,0xAD00L,0xD476L,1L}},{{0L,1L,0xD476L,0xF34AL},{0xB0F3L,0L,0L,6L},{0x4BFFL,1L,0x6036L,0x823AL},{0x6036L,0x823AL,0xF1D2L,0L}},{{1L,(-1L),0x40D8L,(-2L)},{(-1L),0L,0x257DL,0xA419L},{(-6L),0xAD00L,0x83F0L,0xD2CDL},{0x48DBL,(-1L),3L,2L}},{{0x1EC8L,0x2F97L,(-2L),(-1L)},{0x4BFFL,0xDC4BL,1L,(-1L)},{0x40D8L,0xB33BL,(-6L),1L},{0x084DL,0x8E52L,0xDC4BL,(-2L)}}};
                int l_2194 = (-1L);
                int l_2222 = 7L;
                int l_2224[10][2][7] = {{{(-10L),0x925105B9L,0L,(-8L),0x2957DCF2L,(-3L),0x35F300BAL},{(-4L),(-4L),(-1L),0xEFB8481DL,1L,6L,1L}},{{0x925105B9L,0x2957DCF2L,0x2957DCF2L,0x925105B9L,0xFDF18553L,1L,0x35F300BAL},{(-1L),1L,(-1L),6L,(-2L),(-1L),0xCBE9BF51L}},{{0x35F300BAL,0L,1L,1L,1L,0L,0x35F300BAL},{0x824BDCC5L,0xF8FD09C5L,(-4L),0xCBE9BF51L,(-1L),0xFFDB1F69L,1L}},{{0x343B0FF5L,0L,0x1175CEFCL,1L,(-8L),(-8L),1L},{(-4L),0xEC657534L,(-4L),0L,(-1L),(-2L),0xFFDB1F69L}},{{0L,0L,1L,0L,0x2957DCF2L,0xFCD7F5C2L,0x343B0FF5L},{(-2L),0x824BDCC5L,(-1L),(-1L),0x824BDCC5L,(-2L),0L}},{{(-3L),1L,0x2957DCF2L,7L,0x1175CEFCL,(-8L),0xFDF18553L},{0xEFB8481DL,(-2L),(-1L),0xFFDB1F69L,0xCBE9BF51L,0xFFDB1F69L,(-1L)}},{{1L,1L,0xFCD7F5C2L,(-10L),7L,0L,0x69BEFCF4L},{0L,0x824BDCC5L,0L,(-1L),(-1L),(-1L),(-1L)}},{{7L,0L,0x35F300BAL,0L,7L,1L,(-10L)},{0x824BDCC5L,(-2L),0L,(-2L),0xEFB8481DL,(-4L),(-1L)}},{{(-8L),0L,0x2957DCF2L,0L,0L,0x2957DCF2L,0L},{0x824BDCC5L,(-2L),(-2L),0L,(-1L),1L,0xF8FD09C5L}},{{0xFDF18553L,0xFCD7F5C2L,7L,0x925105B9L,0x1175CEFCL,0L,0x1175CEFCL},{0L,6L,6L,0L,0xFFDB1F69L,0xF8FD09C5L,0L}}};
                int i, j, k;
                if ((safe_add_func_uint32_t_u_u(l_1919[3][6][1], ((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(p_6, (safe_unary_minus_func_int16_t_s((g_1856 >= (!(((~func_17(g_1007, (l_2160[7][0][1] ^ func_17(l_2161, (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_71(p_8, (safe_mod_func_int32_t_s_s((l_2101[0][2] | (safe_rshift_func_int16_t_s_s(l_2160[7][1][2], 8))), 1L)), g_249, p_6, g_634[0][0][7]), g_853)), g_1271[3][5][0])), l_2061)), l_1973)), g_1161, g_1855, l_2160[2][3][0])), p_8, l_2174, l_2060[0])) >= g_830) >= l_2161))))))) == g_120[1]) != g_1795), l_2161)), l_2123)) ^ (-10L)))))
                {
                    int l_2189 = 0x5E6EE3FAL;
                    int l_2223 = (-1L);
                    int l_2225 = (-1L);
                    int l_2227 = 0xAD3B1AA0L;
                    int l_2229 = 0x4BFF9E8EL;
                    if ((((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_221 >= (safe_add_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((1L >= g_793[0]), (p_6 ^ ((0UL != (((((!(p_7 <= 0xB245478CL)) && l_2189) && ((safe_sub_func_uint32_t_u_u(func_46(((l_2160[7][0][0] > p_8) <= p_8), g_1858[0], l_2192, g_1766, g_456), l_2193)) == g_1630[1])) , 0xD200762BL) || l_1916[0][1])) < l_2174)))) > p_6), g_2148))), l_2194)), l_2160[7][0][1])) == g_487[1][2]) , g_1229), g_884)) > g_1146), 0x30L)) , g_368[2][5]) < l_2195))
                    {
                        unsigned char l_2202 = 0xFBL;
                        unsigned char l_2203 = 2UL;
                        const int l_2204 = (-7L);
                        g_1857 = ((g_634[2][0][2] , ((((g_269 == (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(((~l_1903[2]) < (((safe_lshift_func_uint16_t_u_s((((-1L) != (l_2202 ^ func_71(l_2203, g_12, l_2189, (g_849 >= g_884), l_2204))) , 0x77FCL), g_708[6][0][4])) , g_853) ^ g_1161)), p_8)) && l_2205), p_6))) , l_1903[2]) < p_7) != p_7)) >= 249UL);
                        return p_8;
                    }
                    else
                    {
                        unsigned char l_2218 = 250UL;
                        int l_2220 = (-1L);
                        int l_2228[9][8] = {{0x14B0ECBEL,3L,4L,4L,3L,0x14B0ECBEL,0x32FFA760L,0x14B0ECBEL},{3L,0x14B0ECBEL,0x32FFA760L,0x14B0ECBEL,3L,4L,4L,3L},{0x14B0ECBEL,(-7L),(-7L),0x14B0ECBEL,(-1L),3L,(-1L),0x14B0ECBEL},{(-7L),(-1L),(-7L),4L,0x32FFA760L,0x32FFA760L,4L,(-7L)},{(-1L),(-1L),0x32FFA760L,3L,8L,3L,0x32FFA760L,(-1L)},{(-1L),(-7L),4L,0x32FFA760L,0x32FFA760L,4L,(-7L),(-1L)},{(-7L),0x14B0ECBEL,(-1L),3L,(-1L),0x14B0ECBEL,(-7L),(-7L)},{0x14B0ECBEL,3L,4L,3L,(-7L),8L,4L,8L},{(-7L),8L,4L,8L,(-7L),3L,3L,(-7L)}};
                        int i, j;
                        g_35 = (safe_mod_func_uint32_t_u_u(((g_103 >= g_1859) , l_2061), p_6));
                        g_1857 ^= ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(func_71(((func_57(((65528UL & (safe_mod_func_int8_t_s_s(((g_1764 > l_2161) != 0UL), ((func_46(p_6, ((((((((((safe_rshift_func_int8_t_s_s((func_31(p_6) || g_884), (l_2194 & 0UL))) <= 8L) != g_1855) | p_7) | g_1856) ^ 0x03F50FE9L) , 0xF1L) && p_8) , p_8) , 0x483538ADL), p_8, g_1189, l_2218) ^ 255UL) | p_7)))) < 1UL), g_1858[0], l_2194) < p_7) <= 8L), p_8, p_8, g_368[0][6], p_7), 9)), p_8)) & g_1855), l_2219)) < g_1858[0]);
                        --g_2230;
                    }
                    for (g_830 = (-21); (g_830 >= 5); ++g_830)
                    {
                        return p_6;
                    }
                    l_2224[6][0][5] ^= func_71(((~((l_1794 < (0L || (func_17(g_1801[1], (safe_sub_func_int32_t_s_s(l_2222, g_830)), g_88, (func_66(g_2148) == g_1856), p_8) ^ 0x5248L))) == 0x38L)) >= l_2161), g_709, l_2237[8], l_2101[0][2], p_6);
                    for (l_1901 = (-29); (l_1901 <= 55); ++l_1901)
                    {
                        l_1775[5] = 8L;
                    }
                }
                else
                {
                    l_2222 &= 0x2B849B83L;
                }
                ++g_2244;
                return p_6;
            }
            else
            {
                unsigned char l_2251 = 0x1BL;
                int l_2259 = (-1L);
                for (g_1099 = 22; (g_1099 < 40); g_1099 = safe_add_func_int8_t_s_s(g_1099, 1))
                {
                    unsigned l_2252 = 7UL;
                    l_2252 &= (safe_mod_func_int32_t_s_s(7L, (g_2221 , (l_2251 , g_1803[5]))));
                }
                g_12 = (func_17(((safe_rshift_func_uint8_t_u_u((0x059DL & g_1478), 6)) & (((g_530[1][0][3] < ((((0xD2C3L > (safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(func_46(g_721, g_2244, (p_6 || (+func_71(func_66(g_1803[8]), g_1147, l_2259, g_1855, l_2243[2]))), l_2251, l_2000[1]), 0x35L)) & l_2260), g_851))) == p_8) & p_8) , 0xA2EFL)) ^ 1UL) && l_1775[1])), g_1856, p_8, g_1803[9], p_6) != 0x4EFC637CL);
                for (l_2219 = 0; (l_2219 != 36); ++l_2219)
                {
                    if (l_2251)
                    {
                        g_1231 ^= (safe_add_func_uint32_t_u_u((g_1478 , ((p_8 <= (safe_sub_func_int8_t_s_s(p_7, g_1970))) >= 9L)), g_1801[0]));
                    }
                    else
                    {
                        short l_2267 = 0x2892L;
                        l_1775[7] ^= l_2267;
                        g_849 = l_2000[2];
                        return l_2237[8];
                    }
                    g_1231 = p_8;
                }
            }
            if (p_7)
                continue;
            l_1915 = 0x07F84A0DL;
            l_2243[3] &= ((((l_1903[2] | (((8UL | (safe_add_func_uint16_t_u_u((func_14(l_1919[6][7][1], ((g_1858[1] ^ l_1827) ^ l_2270)) <= ((safe_sub_func_uint16_t_u_u((!g_368[0][6]), g_2230)) ^ l_2260)), l_2241))) ^ 1UL) == g_1478)) >= 65535UL) != g_1857) >= p_8);
        }
    }
    l_1794 &= ((l_1775[5] || l_1916[4][0]) , ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((((g_35 >= (((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_s(2UL, 10)) < p_8) , 0x51L) >= 0xF7L), (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((g_1233[0][0] && p_6))), g_280)), 0xD43FL)))) < g_1858[0]), p_6)) | 0x2CL) ^ p_6)) & g_1921) & l_2011), 0xC421L)), l_2174)) != l_2062));
    return l_1827;
}







static const int func_14(unsigned char p_15, unsigned p_16)
{
    char l_1728 = 0xD5L;
    int l_1729 = 0L;
    unsigned char l_1730 = 0x1AL;
    char l_1752[3][6] = {{0x10L,0x3FL,0L,0x53L,0x53L,0L},{0x53L,0x53L,0L,0x3FL,0x10L,0L},{0x3FL,0x10L,0L,0x10L,0x3FL,0L}};
    int l_1761 = 0L;
    int l_1762[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int i, j;
    l_1729 = (l_1728 || (0xC27CL && ((l_1728 < 1L) & g_368[1][0])));
    if (func_46(l_1730, l_1730, (8UL < (((((g_1527 <= (safe_rshift_func_uint16_t_u_u(((((l_1730 && g_282) <= (safe_lshift_func_int8_t_s_s((p_15 , (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int32_t_s_s(1L, (0x419FA31EL >= g_368[0][6]))) || 0UL) < (-1L)), 5))), g_441))) >= l_1729) <= g_721), 5))) != l_1730) != l_1730) , g_1630[3]) == p_16)), l_1729, g_68[1]))
    {
        unsigned l_1739 = 5UL;
        l_1739 |= 0x483582F3L;
        for (p_15 = (-6); (p_15 <= 26); p_15 = safe_add_func_int32_t_s_s(p_15, 1))
        {
            unsigned char l_1751 = 0xFFL;
            int l_1753 = 1L;
            l_1753 = (((g_1478 , 1UL) ^ (0xDED3L ^ ((l_1739 | (((((p_16 & (safe_mod_func_int32_t_s_s((0x6EL | (safe_unary_minus_func_int8_t_s((safe_lshift_func_int16_t_s_s(func_46(((((safe_lshift_func_int8_t_s_u(((g_12 | 1L) , (safe_add_func_int8_t_s_s((((func_31((p_16 >= p_15)) , p_15) && p_15) < 0L), 0xC2L))), g_1675)) | l_1751) && p_16) | p_16), p_16, l_1752[0][2], g_368[0][6], l_1729), 11))))), 0x6E79C4FFL))) , 0x085DL) > p_15) < 0xA454L) && g_1099)) == g_1727))) & 0xE446L);
        }
    }
    else
    {
        unsigned short l_1760[3];
        int i;
        for (i = 0; i < 3; i++)
            l_1760[i] = 0x503DL;
        for (l_1729 = (-18); (l_1729 < 17); l_1729 = safe_add_func_int8_t_s_s(l_1729, 9))
        {
            unsigned char l_1756 = 2UL;
            int l_1757 = 0xDE8C5A8EL;
            l_1757 = l_1756;
        }
        l_1760[1] |= (1L >= (safe_lshift_func_int8_t_s_u((-9L), 1)));
    }
    g_1766++;
    l_1729 = (4L > 1UL);
    return g_487[1][2];
}







static unsigned func_17(unsigned p_18, unsigned char p_19, unsigned p_20, unsigned p_21, unsigned p_22)
{
    unsigned l_1411 = 0x026F7614L;
    const unsigned l_1444 = 0UL;
    short l_1555 = 0x2034L;
    int l_1622 = 0x9B87E78BL;
    short l_1623[9] = {0x84A1L,0x84A1L,0x84A1L,0x84A1L,0x84A1L,0x84A1L,0x84A1L,0x84A1L,0x84A1L};
    int l_1624 = 0xE739E3CEL;
    int l_1625 = (-1L);
    int l_1626 = (-7L);
    int l_1627 = 1L;
    int l_1628 = (-1L);
    int l_1629 = 2L;
    int l_1685[5] = {0xB13591C1L,0xB13591C1L,0xB13591C1L,0xB13591C1L,0xB13591C1L};
    unsigned char l_1699 = 7UL;
    int i;
    if (((((safe_sub_func_int32_t_s_s(l_1411, (safe_add_func_int32_t_s_s(((((safe_unary_minus_func_uint32_t_u(g_1189)) , (65528UL < ((((safe_add_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(0x7B99L, g_853)) > l_1411) , (safe_rshift_func_int16_t_s_s((g_456 ^ l_1411), 3))) <= ((g_1008 < l_1411) , p_21)), 65526UL)) && p_18) || p_19) ^ p_21), p_22)) & p_18) != p_22) & 0x61L))) && p_20) != 0UL), g_1271[0][0][1])))) < g_368[0][0]) ^ p_20) > p_18))
    {
        int l_1445[2][1][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1445[i][j][k] = 0x4A08E8E2L;
            }
        }
        for (l_1411 = 0; (l_1411 > 43); l_1411 = safe_add_func_int16_t_s_s(l_1411, 1))
        {
            int l_1435 = 0x86B73278L;
            g_81 = l_1411;
            g_849 = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((0UL >= (safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(l_1435, 3)) , l_1411) < (func_66(((0x183352F9L < (((safe_mod_func_int32_t_s_s((((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(l_1435, (p_18 , ((+l_1411) < (((g_196 & ((((p_19 || l_1411) >= l_1411) & l_1411) && p_20)) > l_1444) , l_1445[0][0][0]))))), g_81)), 15)) >= p_18) > p_22) == p_22) && g_1147), 0x4A647F91L)) <= g_269) > p_20)) <= 3UL)) ^ g_368[1][1])), g_793[0]))), 0x8ADCL)), 4)), 65531UL));
        }
        for (g_1274 = (-27); (g_1274 <= 34); g_1274 = safe_add_func_uint32_t_u_u(g_1274, 7))
        {
            unsigned l_1467 = 1UL;
            unsigned l_1524 = 0xDD0B1AD8L;
            l_1445[0][0][0] = p_22;
            for (g_249 = 0; (g_249 <= 20); ++g_249)
            {
                const unsigned short l_1452 = 9UL;
                int l_1506[6][6] = {{0x508387A8L,0x63D89E8CL,0x508387A8L,0x8B7D03C5L,9L,0x8B7D03C5L},{0x508387A8L,0x63D89E8CL,0x508387A8L,0x8B7D03C5L,9L,0x8B7D03C5L},{0x508387A8L,0x63D89E8CL,0x508387A8L,0x8B7D03C5L,9L,0x8B7D03C5L},{0x508387A8L,0x63D89E8CL,0x508387A8L,0x8B7D03C5L,9L,0x8B7D03C5L},{0x508387A8L,0x63D89E8CL,0x508387A8L,0x8B7D03C5L,9L,0x8B7D03C5L},{0x508387A8L,0x63D89E8CL,0x508387A8L,0x8B7D03C5L,9L,0x8B7D03C5L}};
                int i, j;
                if ((((g_87 <= (safe_sub_func_uint32_t_u_u(4294967289UL, (l_1452 < ((g_715[0] ^ ((g_708[4][2][3] && (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(g_1007)), l_1452)), (-1L))), 0xFEE1L))) >= g_793[0])) , 0x19A605E5L))))) <= 0xA7L) & 0x4CL))
                {
                    unsigned short l_1466 = 1UL;
                    unsigned char l_1487 = 0x72L;
                    g_849 = g_1278;
                    l_1445[0][0][0] |= p_22;
                    for (g_1189 = 0; (g_1189 <= 0); g_1189 += 1)
                    {
                        int i, j, k;
                        return g_530[g_1189][g_1189][(g_1189 + 6)];
                    }
                    if ((safe_mod_func_int16_t_s_s(1L, func_46(g_1231, g_269, g_830, l_1452, (((l_1445[0][0][0] & 255UL) > func_46(p_21, (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(func_46((g_1271[5][3][1] >= 0x77EE3132L), g_1278, p_20, p_20, l_1445[0][0][0]), g_530[0][0][6])) || l_1466), 5)), l_1444, l_1411, g_196)) != 0xF9L)))))
                    {
                        l_1467++;
                        g_1231 = ((safe_mod_func_uint32_t_u_u(3UL, (~(safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((l_1445[0][0][0] >= (((safe_lshift_func_uint16_t_u_s(g_1478, ((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((0xA594CBB1L <= l_1445[0][0][0]), 15)), g_530[0][0][5])) == (safe_mod_func_int8_t_s_s((((func_66(l_1467) || ((safe_rshift_func_int16_t_s_s((-1L), g_715[0])) | 0xB6D6L)) || g_1279) > p_21), p_21))) != 0UL) && g_1233[3][2]))) >= p_22) >= 65535UL)), g_1274)), p_22))))) | 0x611AL);
                        g_81 |= func_66(p_20);
                    }
                    else
                    {
                        l_1487--;
                        return l_1487;
                    }
                }
                else
                {
                    unsigned short l_1492[5][3] = {{65535UL,0UL,65535UL},{9UL,7UL,9UL},{65535UL,0UL,0x9D00L},{1UL,9UL,1UL},{0x9D00L,65535UL,0x9D00L}};
                    int i, j;
                    for (g_811 = 0; (g_811 <= 2); g_811 += 1)
                    {
                        unsigned l_1495 = 0x9929FF4BL;
                        l_1495 |= func_66((safe_add_func_uint16_t_u_u(l_1492[3][1], (l_1411 || ((p_20 && ((func_71(l_1467, g_441, (g_811 < 0xD6L), (safe_add_func_uint16_t_u_u(g_1050, g_634[0][0][9])), l_1492[3][1]) != l_1452) == p_21)) , 0x9429L)))));
                        l_1506[5][3] = (safe_add_func_int8_t_s_s(((~g_1050) > (g_1008 != (l_1495 & (safe_lshift_func_int16_t_s_u(l_1445[1][0][0], ((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(2L, 4294967295UL)), 1)), 3)) <= 0x6EL) < 1UL) >= l_1495)))))), l_1467));
                        return g_1099;
                    }
                    if (l_1506[2][4])
                        break;
                    l_1445[0][0][0] = (g_202 != (safe_sub_func_int32_t_s_s((-1L), l_1506[5][3])));
                    g_849 &= g_441;
                }
                g_35 = g_487[1][2];
                g_849 &= ((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u(255UL)), ((safe_sub_func_int8_t_s_s(((g_280 == func_71(((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((((p_18 < func_46(p_21, (((((!((((safe_mod_func_int16_t_s_s(((((((g_1233[3][0] , (0xD1L || (l_1467 > (((safe_add_func_int32_t_s_s((l_1444 > (safe_add_func_int32_t_s_s((((func_66(((0x2B7AL != 1UL) | 0xB805L)) && 0xD30DE114L) == p_18) ^ p_21), l_1467))), l_1452)) , l_1444) <= g_368[0][2])))) != l_1452) , l_1445[0][0][0]) , p_19) , p_18) || l_1445[0][0][0]), p_18)) , p_22) != 0x3A75BD80L) && p_18)) ^ 1L) < l_1506[3][2]) , 0x89L) ^ l_1444), g_1271[5][3][1], l_1506[3][2], g_1007)) < l_1445[0][0][0]) > 0xFCL), l_1445[0][0][0])), 0x7B3A667FL)) | l_1444), g_708[1][1][6], p_19, l_1506[5][3], l_1445[1][0][0])) | g_1266[3][0][2]), p_18)) , g_1229))) > l_1467) ^ l_1467) <= p_18);
                l_1524 ^= p_18;
            }
            l_1445[0][0][0] = (safe_sub_func_uint32_t_u_u(g_1229, 0x95722664L));
        }
        g_1527--;
    }
    else
    {
        unsigned l_1538 = 1UL;
        int l_1550 = 0xAF416351L;
        unsigned short l_1578 = 0xD430L;
        int l_1621 = 4L;
        int l_1637[7][6][6] = {{{0x42D1A30DL,0L,(-1L),0x7D3A81D9L,0xEA670144L,0x3AD2BCE7L},{9L,0xE7598FBEL,0x3C6D1000L,0x3C6D1000L,0xE7598FBEL,9L},{0x4DB2B669L,0xF0618439L,0xD196EA1CL,0xA5D5D820L,1L,0x20DABDD0L},{0x3AD2BCE7L,0L,1L,0x42D1A30DL,(-1L),7L},{0x3AD2BCE7L,0x951A9940L,0x42D1A30DL,0xA5D5D820L,0x0611AFFEL,0L},{0x4DB2B669L,1L,0xC9DB4A52L,0x3C6D1000L,0x2AF0AF5AL,0xEA0CE4B5L}},{{9L,0x0420151FL,0x0E140739L,0x7D3A81D9L,0xF0618439L,(-9L)},{0x42D1A30DL,0x252D945BL,(-1L),0x585C5B97L,0xA8F921E7L,0x2C217FC9L},{0L,0L,0x20DABDD0L,9L,0xB2DB28EFL,(-1L)},{1L,0L,(-9L),(-9L),0xA8F921E7L,0x4DB2B669L},{(-1L),0x252D945BL,0x8BFF313BL,1L,0xF0618439L,(-1L)},{0xC9DB4A52L,0x0420151FL,0x7D3A81D9L,0x20DABDD0L,0x2AF0AF5AL,0x7D3A81D9L}},{{0x70F9DBB6L,1L,(-9L),0x3AD2BCE7L,0x0611AFFEL,0x6F3D2F61L},{0x585C5B97L,0x951A9940L,(-1L),0xEA0CE4B5L,(-1L),(-9L)},{(-9L),0L,(-1L),0x0E140739L,1L,0L},{0x70F9DBB6L,1L,0xEA0CE4B5L,6L,(-9L),0xD196EA1CL},{6L,(-9L),0xD196EA1CL,0x585C5B97L,0xF0618439L,0x585C5B97L},{0x1BAF7F7FL,1L,0x1BAF7F7FL,7L,0x902A7685L,(-9L)}},{{(-1L),0L,9L,0x2C217FC9L,0x2AF0AF5AL,0xA5D5D820L},{0xC9DB4A52L,(-2L),0x3C6D1000L,0x2C217FC9L,0x0420151FL,7L},{(-1L),0L,0x585C5B97L,7L,0L,9L},{0x1BAF7F7FL,0xA8B221B6L,(-1L),0x585C5B97L,0x0611AFFEL,0x7D3A81D9L},{6L,0L,0x8BFF313BL,6L,(-2L),0L},{0x70F9DBB6L,0L,0x20DABDD0L,(-1L),0xE76D2BFAL,(-1L)}},{{0xEA0CE4B5L,0xE7598FBEL,6L,0x7D3A81D9L,0xE76D2BFAL,0x3C6D1000L},{1L,0L,0xC9DB4A52L,0x4DB2B669L,(-2L),(-1L)},{0x42D1A30DL,0L,0x6F3D2F61L,0x3C6D1000L,0x0611AFFEL,0x4DB2B669L},{0x8BFF313BL,0xA8B221B6L,0xA5D5D820L,1L,0L,0x1BAF7F7FL},{0xA5D5D820L,0L,0x70F9DBB6L,0xEA0CE4B5L,0x0420151FL,0x8BFF313BL},{1L,(-2L),0x0E140739L,(-1L),0x2AF0AF5AL,0x8BFF313BL}},{{0x2C217FC9L,0L,0x70F9DBB6L,1L,(-9L),0x394C3EF9L},{(-1L),1L,0L,(-1L),0x3AD2BCE7L,0xEEE46B6AL},{2L,0x3C6D1000L,5L,5L,0x3C6D1000L,2L},{6L,0x4DB2B669L,8L,8L,6L,0x17424C4FL},{0xEEE46B6AL,0x7D3A81D9L,0L,(-1L),0xD196EA1CL,1L},{0xEEE46B6AL,(-1L),(-1L),8L,0x20DABDD0L,(-1L)}},{{6L,6L,0xD8A99E46L,5L,0L,0xDAE29EA3L},{2L,0x585C5B97L,2L,(-1L),0x4DB2B669L,0xBC07484FL},{(-1L),7L,0x5AAB5F49L,(-1L),1L,0x465E76F6L},{1L,0x2C217FC9L,0x17424C4FL,2L,0x1BAF7F7FL,0L},{1L,0x2C217FC9L,0xBC07484FL,0x5901737CL,1L,6L},{0L,7L,0x394C3EF9L,1L,0x4DB2B669L,0x5AAB5F49L}}};
        short l_1708 = 0xA777L;
        short l_1722 = 0xCAEBL;
        int i, j, k;
        for (g_1050 = 22; (g_1050 == 42); ++g_1050)
        {
            char l_1532 = (-1L);
            int l_1533 = 0x46CCB8CAL;
            int l_1534 = 0xB44E4B63L;
            int l_1535 = 6L;
            int l_1536 = 7L;
            int l_1537 = 0L;
            int l_1564[1][8][6] = {{{(-1L),0xA013BEE4L,6L,4L,0L,0x245D8787L},{(-1L),0xCF08D443L,0L,0L,0xCF08D443L,(-1L)},{(-5L),(-6L),2L,0x245D8787L,0L,(-2L)},{1L,4L,0xEA1663F0L,0x771F72FEL,(-7L),6L},{1L,6L,0x771F72FEL,6L,4L,0x245D8787L},{0xE5FF4369L,6L,(-5L),6L,0xE5FF4369L,0xA013BEE4L},{(-2L),1L,0xCC189D27L,0xCF08D443L,(-7L),(-1L)},{(-5L),0xA013BEE4L,0L,1L,(-6L),(-1L)}}};
            unsigned l_1577[10];
            unsigned l_1604 = 0xD1284583L;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1577[i] = 4294967295UL;
            l_1538--;
            for (g_441 = 14; (g_441 <= 6); --g_441)
            {
                short l_1549 = 0xB50CL;
                l_1550 = (0xACL ^ (safe_sub_func_uint16_t_u_u(((g_1098 != (((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(l_1549, p_19)), p_19)) | l_1533) || 0L)) ^ (func_46(g_530[4][0][4], l_1538, g_972, p_21, p_20) , (-4L))), 9L)));
                if ((safe_lshift_func_int16_t_s_u(g_368[0][1], ((((safe_rshift_func_uint8_t_u_u(func_66((((((((l_1555 ^ ((safe_sub_func_int8_t_s_s((((l_1555 || (safe_rshift_func_uint16_t_u_u(65535UL, 4))) , ((safe_rshift_func_int16_t_s_u(g_1098, (safe_mod_func_uint32_t_u_u((+l_1564[0][5][2]), (safe_rshift_func_uint16_t_u_u(func_66(((safe_lshift_func_int16_t_s_u((func_46(func_46(p_22, ((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((p_21 & g_269) , g_456), 4)), l_1550)) != 0xD4D0AB5FL), l_1549)), l_1549)) & l_1577[6]) > g_12) && p_20), p_19, l_1555, l_1535), p_18, l_1578, l_1577[6], g_715[0]) != l_1533), 14)) >= p_21)), p_18)))))) <= g_715[0])) | 0x85L), g_87)) && 0x6AL)) > p_22) <= 0x13L) , 0x669C7049L) | 5L) && p_21) ^ 0x55L)), p_19)) & p_21) || g_1139) | 0x99122357L))))
                {
                    unsigned char l_1585 = 0xD3L;
                    g_35 = ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_20, ((safe_lshift_func_int16_t_s_u(g_346, 6)) | (l_1585 , g_884)))), ((p_18 | (p_20 | g_811)) < (safe_add_func_int8_t_s_s(0xBAL, 1UL))))) == 0x56543739L);
                }
                else
                {
                    g_81 = p_19;
                    return l_1538;
                }
                g_849 ^= p_20;
                l_1550 = l_1550;
            }
            if (g_1478)
                break;
            if ((((l_1578 ^ p_21) <= (g_35 != (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((65534UL && l_1444) != g_1274), ((safe_lshift_func_uint8_t_u_u(g_853, (((safe_add_func_uint16_t_u_u((g_1098 != (safe_lshift_func_uint16_t_u_s(l_1535, g_1266[1][0][2]))), p_22)) <= 0x19573EE3L) , 8UL))) , p_21))), g_368[0][6])) == 0UL) | l_1604), g_120[0])), 3)) , 0xAD6DC163L), g_715[0])))) >= l_1538))
            {
                for (g_1189 = (-3); (g_1189 <= 28); g_1189++)
                {
                    int l_1607 = 0x29A784C9L;
                    if (l_1607)
                    {
                        g_35 = g_1266[1][0][2];
                    }
                    else
                    {
                        int l_1613 = 0L;
                        l_1535 &= (safe_add_func_int8_t_s_s(0xA5L, g_849));
                        if (g_487[2][2])
                            break;
                        l_1550 = p_22;
                        l_1550 |= (func_66((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s((func_46(g_221, g_1007, l_1538, p_20, (l_1613 , p_19)) < ((((func_66(g_1161) > 255UL) == 65535UL) , g_1147) | l_1613)))), 2))) , l_1538);
                    }
                    for (l_1578 = 0; (l_1578 <= 2); l_1578 += 1)
                    {
                        return p_21;
                    }
                }
            }
            else
            {
                for (l_1537 = 0; (l_1537 < 10); l_1537 = safe_add_func_int32_t_s_s(l_1537, 2))
                {
                    unsigned char l_1618 = 246UL;
                    for (g_35 = 0; (g_35 != 5); ++g_35)
                    {
                        l_1564[0][4][3] |= g_456;
                        l_1618--;
                    }
                    if (l_1411)
                        continue;
                    l_1536 |= p_19;
                }
            }
        }
        --g_1630[1];
        for (l_1629 = 0; (l_1629 < 17); ++l_1629)
        {
            int l_1638 = 0xEC72DB6CL;
            int l_1643 = 0x9811A1DEL;
            unsigned char l_1656 = 0xD3L;
            int l_1667 = 1L;
            int l_1668 = 0x859EB640L;
            l_1550 &= ((g_1099 , (((safe_rshift_func_int8_t_s_u((func_66(func_66((l_1637[5][5][2] & l_1538))) <= (((l_1638 < l_1638) < (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((((p_20 < (func_46(p_22, g_1478, g_634[0][0][9], p_18, l_1643) ^ (-9L))) || p_21) >= l_1638), 5)), 9))) != 0xD4E3L)), 5)) > 0xA11DDBD6L) , (-2L))) & 0x8F8AL);
            if (p_19)
                continue;
            for (g_556 = (-26); (g_556 != 43); g_556 = safe_add_func_int8_t_s_s(g_556, 3))
            {
                unsigned l_1650 = 7UL;
                int l_1669 = 5L;
                int l_1670 = 5L;
                unsigned l_1688 = 1UL;
                if (l_1550)
                {
                    unsigned char l_1655 = 0x98L;
                    int l_1665 = 0xDEF60489L;
                    int l_1673 = (-1L);
                    int l_1674 = 0x1B2BC800L;
                    if ((safe_sub_func_int8_t_s_s(l_1550, (0x61C74C47L != (safe_add_func_uint8_t_u_u(func_46(p_18, ((l_1650 < g_530[3][0][6]) , ((p_22 ^ (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0x19L, 1)), func_46((l_1655 || g_1271[5][3][1]), l_1656, g_849, g_634[1][0][8], p_19)))) <= g_709)), g_1527, l_1643, p_18), 0x83L))))))
                    {
                        l_1665 = (safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(1UL, 6)) ^ (safe_lshift_func_int16_t_s_u((g_103 != ((p_20 ^ (((l_1643 <= (safe_mod_func_int16_t_s_s((+((func_46(g_346, l_1638, p_20, (255UL || 0xB2L), l_1538) | 4L) >= l_1650)), g_708[3][1][6]))) ^ 1L) <= l_1578)) && 0x1432FD07L)), 1))) , l_1629), p_18));
                        g_280 = (1UL ^ g_368[0][6]);
                    }
                    else
                    {
                        int l_1666 = 0xBDE625F9L;
                        int l_1671 = 0x18D407A1L;
                        int l_1672 = 8L;
                        --g_1675;
                    }
                    g_81 |= p_21;
                }
                else
                {
                    short l_1678 = 1L;
                    int l_1687 = 0xDE0845ACL;
                    if (l_1667)
                        break;
                    l_1678 = g_1098;
                    for (g_269 = 0; (g_269 < 28); g_269++)
                    {
                        unsigned l_1686 = 0x26A95A7AL;
                        g_1231 = ((safe_mod_func_uint8_t_u_u((func_46((((safe_mod_func_int16_t_s_s((func_46((p_22 <= g_35), p_19, g_441, (((p_18 == l_1669) , ((func_71((func_71(g_1278, l_1678, l_1685[2], p_19, g_849) , g_35), l_1686, g_1139, g_709, l_1686) ^ 0x42L) | g_68[1])) > g_1099), p_20) > (-1L)), l_1678)) , p_18) | l_1686), l_1643, g_202, p_21, g_851) && 0x15L), (-6L))) > p_21);
                        return p_20;
                    }
                    l_1687 = g_1091;
                }
                if (l_1670)
                    continue;
                l_1688++;
                if (((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(p_21, (safe_lshift_func_int16_t_s_s((g_282 , ((func_66(g_81) , (p_22 && ((func_66(g_1099) < 4294967295UL) < ((safe_add_func_uint16_t_u_u(((func_71((((((l_1699 | 1L) < 65527UL) & l_1668) | g_1478) == g_103), l_1623[5], p_20, l_1637[0][3][1], p_20) , l_1538) || p_21), l_1656)) > p_20)))) & g_811)), 0)))) , 1UL), l_1650)) < (-2L)))
                {
                    return l_1621;
                }
                else
                {
                    int l_1709 = 4L;
                    l_1668 = ((g_1527 == func_46(g_1233[1][3], p_19, g_1630[0], (((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint16_t_u_u((func_46((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(g_709, l_1623[8])), g_221)), l_1650, p_22, g_851, l_1708) & l_1550), g_1147)) || 0x1AE6E153L), g_88)) , 0x3CL) , 0UL), g_830)) == l_1709);
                }
            }
        }
        g_1727 = (safe_lshift_func_uint16_t_u_s(((p_20 && (safe_add_func_int32_t_s_s((l_1628 != ((safe_add_func_uint8_t_u_u((((((safe_add_func_uint32_t_u_u(p_21, (((0xB8L == ((safe_mod_func_int8_t_s_s(((l_1411 , g_249) && (safe_mod_func_int8_t_s_s((((l_1722 >= (((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_830, (func_71(l_1637[5][3][4], p_18, p_20, g_1189, p_21) , 0x0CL))), g_280)) || 0x41L) < g_1091)) || g_530[3][0][4]) , p_21), 0x03L))), p_21)) | g_368[1][1])) , 4294967295UL) <= 0x255EC5CFL))) || g_715[0]) && g_35) <= l_1555) <= (-1L)), 0x89L)) != 65535UL)), 4294967295UL))) >= p_20), 7));
    }
    return p_21;
}







static unsigned short func_31(char p_32)
{
    unsigned char l_61 = 0x17L;
    int l_1143 = 5L;
    int l_1162[3];
    unsigned char l_1170 = 0x75L;
    unsigned l_1240 = 4294967293UL;
    const int l_1244 = 0x86C1099DL;
    unsigned l_1257 = 0x05A281D3L;
    const unsigned l_1302 = 0x4040E89BL;
    int i;
    for (i = 0; i < 3; i++)
        l_1162[i] = 0x41C6C83EL;
    for (p_32 = (-5); (p_32 != 24); ++p_32)
    {
        short l_1142 = (-1L);
        int l_1145 = 0x15ED81ECL;
        for (g_35 = 0; (g_35 >= 18); ++g_35)
        {
            unsigned l_52 = 0x3EA3A722L;
            int l_1144[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            l_1142 |= ((safe_add_func_int8_t_s_s(((((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_32 & ((func_46(p_32, l_52, p_32, (safe_sub_func_uint8_t_u_u(l_52, ((safe_lshift_func_uint16_t_u_s(func_57((l_61 != (safe_add_func_int16_t_s_s(g_35, p_32))), g_12, g_35), 4)) || l_61))), p_32) , 0x13324A53L) > 0x422BEC6FL)), g_709)), 0xC5C4L)) & g_103) & p_32) >= g_634[1][0][1]), p_32)) <= 0L);
            l_1143 = g_634[2][0][9];
            ++g_1147;
            l_1145 = 0x93C3A24CL;
        }
        return l_61;
    }
    l_1162[0] |= (func_46(l_1143, (safe_rshift_func_int16_t_s_u(func_66(p_32), 10)), ((((((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(((((safe_sub_func_int8_t_s_s(g_120[1], func_46(p_32, (safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(func_71(l_1143, (g_282 ^ l_61), (((g_487[1][2] != g_715[0]) ^ l_61) , g_368[0][6]), p_32, l_1143), p_32)), g_282)), g_1007, g_1098, g_269))) , l_61) && 0x64L) & g_884))) <= g_1161), p_32)) <= l_61) >= p_32) <= g_202) , p_32) , 0x510425ECL), p_32, p_32) != 0xCFL);
    for (g_282 = 0; (g_282 > 33); g_282 = safe_add_func_int32_t_s_s(g_282, 1))
    {
        int l_1165 = 0x11E356D4L;
        unsigned l_1171 = 1UL;
        int l_1228 = 0L;
        int l_1232 = 0xD18A0B9CL;
        char l_1243 = (-7L);
        unsigned short l_1258 = 0x5932L;
        int l_1264 = 0x0E9295FDL;
        int l_1269 = 0L;
        unsigned l_1285 = 4294967287UL;
        unsigned l_1295 = 2UL;
        if (((((l_1165 & ((func_46((g_721 , ((g_972 , 4294967294UL) > (safe_mul_func_int32_t_s_s(p_32, 0UL)))), func_71(g_456, func_71((l_1162[0] , func_71(p_32, l_1165, l_1170, g_1146, l_61)), g_487[1][2], p_32, g_972, g_830), l_1171, l_1162[1], l_1165), g_530[0][0][4], l_1165, p_32) && l_1171) , p_32)) == 1L) || 5L) | p_32))
        {
            unsigned char l_1182[3][6][7] = {{{0UL,0xC4L,0x63L,0x4DL,0x63L,0xC4L,0UL},{0x72L,0UL,7UL,0x4DL,1UL,1UL,0x10L},{0x90L,0xA1L,0xDFL,0x10L,0x72L,1UL,1UL},{0xDFL,246UL,7UL,246UL,0xDFL,1UL,4UL},{4UL,246UL,0x63L,0UL,0x4DL,247UL,0x72L},{246UL,0xA1L,0x4DL,0x57L,7UL,7UL,0x57L}},{{4UL,0UL,4UL,7UL,1UL,0xA1L,0x57L},{0xDFL,0xC4L,247UL,1UL,0x57L,4UL,0x72L},{0x90L,4UL,0xA1L,0xC4L,0xC4L,0xA1L,4UL},{0x72L,1UL,0x10L,0x90L,1UL,0xDFL,0UL},{7UL,3UL,247UL,1UL,0x4DL,0x90L,0x57L},{0x72L,1UL,0x63L,0x63L,1UL,0x72L,7UL}},{{247UL,0x57L,0x63L,1UL,0xDFL,0UL,1UL},{0UL,0x4DL,247UL,0x72L,0xC4L,1UL,0xC4L},{0xDFL,0x57L,0x57L,0xDFL,3UL,1UL,0x90L},{0xDFL,1UL,4UL,0x4DL,0x10L,1UL,0x63L},{0UL,3UL,0x90L,7UL,247UL,7UL,0x90L},{247UL,247UL,246UL,1UL,1UL,7UL,0xC4L}}};
            int l_1192 = 0xC0EEFC37L;
            int l_1260[7] = {(-1L),0L,0L,(-1L),0L,0L,(-1L)};
            char l_1277 = 0L;
            int i, j, k;
            if (func_46(p_32, (safe_rshift_func_uint16_t_u_s((func_46(((((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((p_32 && (func_71((func_71((safe_mod_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s(func_66(l_1182[0][5][5]), l_1162[2])) || (p_32 <= (p_32 != (safe_lshift_func_int16_t_s_s((-7L), 5))))) != (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_46(g_1189, g_715[1], p_32, g_708[6][0][4], p_32), 0x3AL)), 10))) > g_851), p_32)), g_1161, p_32, l_1162[0], l_1182[0][5][5]) || l_1165), g_530[2][0][3], g_715[0], p_32, g_196) , 0x6101L)), 1L)), 4)) || p_32) , g_1091) > (-10L)), p_32, l_1165, p_32, g_202) || g_1147), 10)), p_32, p_32, p_32))
            {
                for (g_972 = 0; (g_972 <= 0); g_972 += 1)
                {
                    int i;
                    return g_793[g_972];
                }
            }
            else
            {
                unsigned l_1205 = 0x92D2CBB3L;
                int l_1230 = 0xEA58DD65L;
                int l_1262 = 0xA33259D1L;
                int l_1263 = 1L;
                int l_1270 = 1L;
                g_35 = 0xF5226CC6L;
                for (g_35 = (-9); (g_35 == 16); g_35 = safe_add_func_uint16_t_u_u(g_35, 2))
                {
                    unsigned l_1193 = 4294967289UL;
                    ++l_1193;
                }
                g_35 = 0L;
                if ((((g_530[4][0][6] > (safe_unary_minus_func_uint16_t_u(2UL))) & func_66(g_1099)) && ((safe_lshift_func_uint16_t_u_s((g_88 == ((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(g_12, p_32)) <= ((p_32 , (((((l_1143 <= p_32) >= l_1165) > l_1171) < l_1171) && p_32)) <= 0x38L)), p_32)), l_1182[2][2][4])) >= l_1205) ^ 253UL) , 252UL)), 7)) >= l_1205)))
                {
                    int l_1224 = 0x42880015L;
                    char l_1227 = 9L;
                    for (g_721 = 12; (g_721 < 6); g_721--)
                    {
                        unsigned char l_1209 = 0UL;
                        l_1228 = ((safe_unary_minus_func_uint16_t_u(func_46((func_46(l_1209, (safe_rshift_func_uint16_t_u_s((!((l_1209 , (safe_rshift_func_uint16_t_u_u(p_32, 12))) || (safe_sub_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(func_66(((func_71((safe_sub_func_uint32_t_u_u((g_1007 <= g_282), g_282)), ((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_1224, ((safe_lshift_func_int16_t_s_s((((!l_1162[2]) ^ (p_32 >= l_1162[0])) > 1UL), 3)) | g_851))), 10)) || l_1162[0]), p_32, g_221, g_634[0][0][9]) , 9UL) , g_530[0][0][5])), p_32)) && l_1143) == 0x28L), p_32)))), 12)), g_830, l_1227, l_1182[0][5][5]) , 0xC5A88F01L), l_1171, l_1209, p_32, l_1224))) || p_32);
                        l_1224 |= 0xD01FDD0FL;
                        ++g_1233[3][2];
                        return l_1182[1][5][3];
                    }
                    if (l_1192)
                        continue;
                    l_1230 = (g_269 <= ((func_46(func_66(l_1205), ((g_793[0] | l_1227) & (safe_rshift_func_uint16_t_u_u((p_32 < (((~(safe_lshift_func_uint8_t_u_u(((((l_1240 & (((+l_1232) > ((!((safe_add_func_int32_t_s_s((((g_708[6][0][4] | l_1243) <= 246UL) , g_120[1]), g_851)) | 65535UL)) || p_32)) > p_32)) < p_32) >= 1L) || l_1182[0][5][5]), 5))) , p_32) || (-3L))), p_32))), l_1230, g_280, l_1182[0][5][5]) < l_1182[2][0][6]) < l_1244));
                    if (func_46(l_1192, l_1205, (0xAB758D26L ^ p_32), g_12, ((func_66(l_1232) && p_32) == (~(safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_1257, 0x55L)), p_32)), p_32)), p_32)), 14)), l_1258))))))
                    {
                        int l_1259[5][1][6] = {{{(-1L),0x32B8E18CL,(-1L),0x3E7EB1AAL,0x3E7EB1AAL,(-1L)}},{{1L,1L,0x3E7EB1AAL,0xE97AF1A5L,0x3E7EB1AAL,1L}},{{0x3E7EB1AAL,0x32B8E18CL,0xE97AF1A5L,0xE97AF1A5L,0x32B8E18CL,0x3E7EB1AAL}},{{1L,0x3E7EB1AAL,0xE97AF1A5L,0x3E7EB1AAL,1L,1L}},{{(-1L),0x3E7EB1AAL,0x3E7EB1AAL,(-1L),0x32B8E18CL,0x32B8E18CL}}};
                        int l_1261 = 2L;
                        int l_1265 = (-1L);
                        int i, j, k;
                        g_1266[1][0][2]--;
                        ++g_1271[5][3][1];
                    }
                    else
                    {
                        return l_1227;
                    }
                }
                else
                {
                    ++g_1274;
                }
            }
            l_1260[0] = p_32;
            ++g_1279;
        }
        else
        {
            short l_1290 = (-10L);
            for (g_81 = 0; (g_81 < (-3)); g_81 = safe_sub_func_int32_t_s_s(g_81, 8))
            {
                unsigned char l_1284[8][3] = {{0x05L,0UL,0x05L},{0x05L,0UL,0x05L},{0x05L,0UL,0x05L},{0x05L,0UL,0x05L},{0x05L,0UL,0x05L},{0x05L,0UL,0x05L},{0x05L,0UL,0x05L},{0x05L,0UL,0x05L}};
                int i, j;
                l_1228 = g_68[0];
                l_1285 = l_1284[4][0];
                l_1269 = (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(func_66((((l_1240 > func_66(l_1285)) < l_1171) != ((g_1266[1][0][2] , (p_32 && l_1290)) , (g_441 >= 1UL)))), (-1L))), g_35)) > 0xCFF6L) , l_1162[2]);
                if (g_634[0][0][9])
                    continue;
            }
            if (l_1290)
                break;
            for (g_1278 = 0; (g_1278 < (-16)); g_1278--)
            {
                int l_1293 = 7L;
                int l_1294 = 0x029E07D8L;
                l_1295++;
            }
        }
        if ((safe_lshift_func_int8_t_s_s(g_487[3][2], (!((safe_mod_func_uint32_t_u_u(0xA55B21EDL, ((((l_1302 ^ l_1258) && (p_32 < g_202)) > (g_487[1][2] , (safe_add_func_int32_t_s_s((g_1099 > (l_1232 , g_884)), g_68[1])))) ^ 0x400CL))) ^ g_81)))))
        {
            short l_1311[5][10];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1311[i][j] = 0xBF20L;
            }
            l_1264 = (((((g_715[1] != (~((safe_rshift_func_int16_t_s_u((l_1257 || g_487[1][2]), (func_71(l_1162[1], g_1279, (!p_32), (safe_add_func_uint32_t_u_u(7UL, (((safe_lshift_func_int8_t_s_u(l_1258, 5)) , ((p_32 || g_68[1]) , l_1264)) && l_1311[2][3]))), p_32) , g_1266[4][0][0]))) | 1L))) <= l_1302) <= p_32) , p_32) | 0L);
        }
        else
        {
            unsigned char l_1316 = 1UL;
            short l_1354[5][9][3] = {{{0xED39L,0L,1L},{1L,(-1L),4L},{0xED39L,5L,4L},{0x3D3CL,0x9DB8L,1L},{5L,5L,5L},{5L,(-1L),0xED39L},{0x3D3CL,0L,5L},{0xED39L,0L,1L},{1L,(-1L),4L}},{{0xED39L,5L,4L},{0x3D3CL,0x9DB8L,1L},{5L,5L,5L},{5L,(-1L),0xED39L},{0x3D3CL,0L,5L},{0xED39L,0L,1L},{1L,(-1L),4L},{0xED39L,5L,4L},{0x3D3CL,0x9DB8L,1L}},{{5L,5L,5L},{5L,(-1L),0xED39L},{0x3D3CL,0L,5L},{0xED39L,0L,1L},{1L,(-1L),4L},{0xED39L,0x3D3CL,0x69F1L},{0x2AE0L,4L,0x4A6BL},{(-8L),0x3D3CL,(-8L)},{(-8L),1L,(-1L)}},{{0x2AE0L,1L,(-8L)},{(-1L),1L,0x4A6BL},{0xE385L,1L,0x69F1L},{(-1L),0x3D3CL,0x69F1L},{0x2AE0L,4L,0x4A6BL},{(-8L),0x3D3CL,(-8L)},{(-8L),1L,(-1L)},{0x2AE0L,1L,(-8L)},{(-1L),1L,0x4A6BL}},{{0xE385L,1L,0x69F1L},{(-1L),0x3D3CL,0x69F1L},{0x2AE0L,4L,0x4A6BL},{(-8L),0x3D3CL,(-8L)},{(-8L),1L,(-1L)},{0x2AE0L,1L,(-8L)},{(-1L),1L,0x4A6BL},{0xE385L,1L,0x69F1L},{(-1L),0x3D3CL,0x69F1L}}};
            int l_1355 = 0x7B9FA626L;
            int i, j, k;
            for (g_811 = 0; (g_811 <= 0); g_811 += 1)
            {
                unsigned l_1344 = 1UL;
                for (g_280 = 0; (g_280 <= 0); g_280 += 1)
                {
                    int l_1321[1];
                    int l_1337 = 0x9EF743A8L;
                    int l_1353 = 0x478B4F00L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1321[i] = 0xDE89D3AEL;
                    if (((func_46(p_32, (l_1165 , ((safe_add_func_int16_t_s_s(p_32, ((safe_rshift_func_int8_t_s_u((-7L), 2)) > ((l_1316 , (safe_rshift_func_uint8_t_u_s(g_851, 4))) || (safe_rshift_func_int8_t_s_u(l_1321[0], (safe_add_func_int8_t_s_s(((p_32 , 0x4841L) == l_1316), 0x7EL)))))))) != (-9L))), l_1321[0], g_456, g_368[0][1]) < l_1240) != p_32))
                    {
                        unsigned char l_1328 = 0x2DL;
                        g_849 = (p_32 != func_71(((safe_sub_func_int16_t_s_s(p_32, (safe_add_func_int8_t_s_s(((((l_1328 , ((safe_mod_func_int8_t_s_s((-1L), (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(g_830, (((((l_1264 & ((g_853 >= (((((safe_mod_func_uint16_t_u_u(((p_32 , g_368[0][6]) || 9UL), p_32)) , g_346) && 0x26F89C44L) != g_346) , g_120[0])) > g_269)) ^ g_721) ^ 0xD8E8A4B6L) ^ l_61) | g_441))) ^ (-1L)), 1)))) && 0xB6L)) , p_32) && 0xAFL) || 0xE5E8L), 0UL)))) || g_196), g_282, p_32, l_1165, g_1161));
                    }
                    else
                    {
                        g_81 = 1L;
                        l_1337 = (0xCC4BL || l_1244);
                    }
                    l_1355 = (((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((g_68[1] || (((safe_sub_func_int8_t_s_s((-1L), (l_1244 >= g_793[0]))) , l_1344) | (g_368[2][6] <= func_71(p_32, (((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(func_66((g_1231 , (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_1233[0][3], l_1353)), p_32)))), p_32)) , p_32), l_1354[1][1][2])) >= 0xE2L) > 7UL), g_1279, l_1344, g_1231)))) < g_830), 1)) != 4L), l_1337)) & g_1233[3][2]) < g_487[2][3]);
                }
                l_1228 = (safe_mod_func_int32_t_s_s((p_32 , 0x625B6C6FL), p_32));
                g_849 ^= (safe_add_func_int16_t_s_s(g_441, (-6L)));
            }
        }
        for (g_830 = 28; (g_830 == 17); g_830 = safe_sub_func_uint16_t_u_u(g_830, 6))
        {
            short l_1366 = 3L;
            int l_1382 = 0L;
            if (l_1257)
                break;
            if (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((p_32 || (0xAE47B76FL == l_1366)), g_196)), 1)) , g_708[6][0][4]))
            {
                char l_1367 = 0x94L;
                l_1367 |= (g_811 , g_1271[5][3][1]);
            }
            else
            {
                unsigned char l_1372[10] = {255UL,0xA4L,255UL,255UL,0xA4L,255UL,255UL,0xA4L,255UL,255UL};
                int i;
                for (l_1228 = 0; (l_1228 >= 0); l_1228 -= 1)
                {
                    unsigned short l_1381[5] = {0x61B9L,0x61B9L,0x61B9L,0x61B9L,0x61B9L};
                    int i;
                    if (g_120[(l_1228 + 1)])
                        break;
                    for (g_1231 = 0; (g_1231 <= 0); g_1231 += 1)
                    {
                        int i, j, k;
                        g_849 |= 1L;
                        if (g_530[(g_1231 + 1)][g_1231][(l_1228 + 6)])
                            continue;
                    }
                    l_1382 = ((((g_120[(l_1228 + 1)] <= (func_66(func_66(p_32)) >= (((func_46(((p_32 | (safe_sub_func_int8_t_s_s((l_1372[2] , 0xD8L), l_1366))) , (~((((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(l_1162[0], 0xF21FF78EL)) , p_32), p_32)) , p_32) && 0x52341E1FL) == p_32), g_280)), l_1171)) , p_32) , l_1366) > 0x4D94L))), g_1274, g_1091, l_1381[1], p_32) > (-1L)) , g_830) != g_120[(l_1228 + 1)]))) , 0xA037L) <= l_1295) <= g_487[1][2]);
                }
                l_1382 = (((safe_rshift_func_int16_t_s_u(g_441, 5)) <= (((0L ^ (func_66(l_1382) > p_32)) ^ (safe_rshift_func_uint16_t_u_s((func_46(p_32, p_32, ((safe_mod_func_uint16_t_u_u((((!((p_32 & ((+((l_1162[0] > 0x01L) == p_32)) < g_249)) && 0x3B0DL)) , g_368[0][6]) , 0xFE66L), 0x9C37L)) , g_1266[1][0][2]), g_456, g_280) & g_202), p_32))) && p_32)) && p_32);
            }
            for (g_81 = (-25); (g_81 > 27); g_81++)
            {
                unsigned l_1391 = 0xD6B14F19L;
                l_1391 = g_1229;
                for (l_1170 = 0; (l_1170 <= 2); l_1170 += 1)
                {
                    int i;
                    l_1162[l_1170] = ((safe_add_func_uint8_t_u_u(p_32, 0x6CL)) , (safe_sub_func_uint32_t_u_u(g_441, func_66(p_32))));
                }
                if (p_32)
                    break;
            }
        }
    }
    for (g_830 = 0; (g_830 != 42); g_830 = safe_add_func_int8_t_s_s(g_830, 3))
    {
        unsigned l_1401 = 4294967295UL;
        const int l_1402 = 0x766DC881L;
        int l_1406 = 0x54AAEF75L;
        for (g_709 = (-27); (g_709 > (-6)); g_709 = safe_add_func_uint16_t_u_u(g_709, 3))
        {
            unsigned short l_1405 = 1UL;
            for (g_202 = 0; (g_202 <= 2); g_202 += 1)
            {
                for (g_282 = 0; (g_282 <= 3); g_282 += 1)
                {
                    unsigned short l_1400 = 65535UL;
                    l_1400 = (0x40L && 0x67L);
                }
            }
            if (l_1401)
                continue;
            l_1406 = (l_1402 | (safe_rshift_func_int16_t_s_s(p_32, (((l_1401 & func_71((((g_68[1] , func_46(l_1401, p_32, p_32, func_46((l_1402 <= (-1L)), p_32, p_32, g_1091, g_1146), l_61)) , 0x0AL) , p_32), l_1405, p_32, l_1244, l_1402)) <= g_35) & 4UL))));
        }
        l_1162[0] &= l_1402;
        if (g_715[0])
            continue;
    }
    return p_32;
}







static char func_46(unsigned p_47, int p_48, int p_49, unsigned p_50, int p_51)
{
    unsigned char l_1129 = 255UL;
    int l_1136 = 1L;
    int l_1137 = (-1L);
    int l_1138[10][4] = {{0L,0L,1L,0xBA334AC3L},{0x19904AEBL,0x9FEDFD19L,0L,0x864C044EL},{0xE2BDA257L,0xB5750347L,0x89104BC6L,0L},{(-9L),0xB5750347L,(-9L),0x864C044EL},{(-9L),0x864C044EL,0L,0x9FEDFD19L},{0x9FEDFD19L,0x89104BC6L,0x84EA60EDL,0x864C044EL},{0x88F08C73L,0x84EA60EDL,0x84EA60EDL,0x88F08C73L},{0x9FEDFD19L,0xE2BDA257L,0L,0xBA334AC3L},{(-9L),(-1L),0xBA334AC3L,0x19904AEBL},{0xBA334AC3L,0x19904AEBL,1L,0x19904AEBL}};
    int i, j;
    g_81 = (p_51 | (l_1129 <= ((l_1129 <= (p_47 & (((safe_lshift_func_int16_t_s_u(p_51, p_48)) != 0x6AL) && ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((((+l_1129) <= ((l_1129 , p_50) < l_1129)) & (-1L)), l_1129)) > 6L), p_50)) , p_48)))) & 0xA3BFFD90L)));
    ++g_1139;
    p_48 ^= l_1138[6][3];
    return l_1138[8][0];
}







static unsigned short func_57(unsigned char p_58, unsigned p_59, const char p_60)
{
    unsigned char l_113 = 255UL;
    char l_123 = (-3L);
    int l_140 = 0x5975D7C0L;
    unsigned l_153 = 4294967295UL;
    unsigned short l_194 = 0xC9FFL;
    short l_219 = 0xB8BAL;
    int l_279 = (-1L);
    unsigned char l_443 = 255UL;
    unsigned short l_475 = 65535UL;
    unsigned l_504 = 5UL;
    int l_515 = 9L;
    int l_555 = 0x436BAE00L;
    int l_713 = 0x0D5EBDCEL;
    int l_714 = 5L;
    const unsigned l_745 = 0x637EEF85L;
    unsigned short l_917 = 0x317FL;
    unsigned l_1009[7][8][3] = {{{4294967294UL,4294967295UL,0x6B83DFAAL},{4294967295UL,4294967294UL,5UL},{0x3078A125L,1UL,0UL},{0x946F2846L,4294967295UL,0xA2E6F769L},{0x43C3D621L,0x755B955EL,0xA2E6F769L},{0UL,4294967292UL,0UL},{4294967294UL,0x43C3D621L,5UL},{0xBE2A373DL,0x348683AAL,0x6B83DFAAL}},{{0UL,1UL,5UL},{0x755B955EL,0xBE2A373DL,0UL},{4294967295UL,0x348683AAL,0xA2E6F769L},{0x3078A125L,0x3078A125L,0xA2E6F769L},{0x348683AAL,4294967295UL,0UL},{0xBE2A373DL,0x755B955EL,5UL},{1UL,0UL,0x6B83DFAAL},{0x348683AAL,0xBE2A373DL,5UL}},{{0x43C3D621L,4294967294UL,0UL},{4294967292UL,0UL,0xA2E6F769L},{0x755B955EL,0x43C3D621L,0xA2E6F769L},{4294967295UL,0x946F2846L,0UL},{1UL,0x3078A125L,5UL},{4294967294UL,4294967295UL,0x6B83DFAAL},{4294967295UL,4294967294UL,5UL},{0x3078A125L,1UL,0x43C3D621L}},{{0x65918CC2L,0xB6A786CFL,0x32378097L},{4294967295UL,0x97F1403DL,0x32378097L},{0xB8D261DBL,4294967286UL,0x43C3D621L},{0xCC814816L,4294967295UL,0x7180DBA9L},{0xDC19A22DL,1UL,4294967295UL},{0xB8D261DBL,4294967295UL,0x7180DBA9L},{0x97F1403DL,0xDC19A22DL,0x43C3D621L},{0xE65D7742L,1UL,0x32378097L}},{{0x54DFF0CBL,0x54DFF0CBL,0x32378097L},{1UL,0xE65D7742L,0x43C3D621L},{0xDC19A22DL,0x97F1403DL,0x7180DBA9L},{4294967295UL,0xB8D261DBL,4294967295UL},{1UL,0xDC19A22DL,0x7180DBA9L},{4294967295UL,0xCC814816L,0x43C3D621L},{4294967286UL,0xB8D261DBL,0x32378097L},{0x97F1403DL,4294967295UL,0x32378097L}},{{0xB6A786CFL,0x65918CC2L,0x43C3D621L},{4294967295UL,0x54DFF0CBL,0x7180DBA9L},{0xCC814816L,0xB6A786CFL,4294967295UL},{0xB6A786CFL,0xCC814816L,0x7180DBA9L},{0x54DFF0CBL,4294967295UL,0x43C3D621L},{0x65918CC2L,0xB6A786CFL,0x32378097L},{4294967295UL,0x97F1403DL,0x32378097L},{0xB8D261DBL,4294967286UL,0x43C3D621L}},{{0xCC814816L,4294967295UL,0x7180DBA9L},{0xDC19A22DL,1UL,4294967295UL},{0xB8D261DBL,4294967295UL,0x7180DBA9L},{0x97F1403DL,0xDC19A22DL,0x43C3D621L},{0xE65D7742L,1UL,0x32378097L},{0x54DFF0CBL,0x54DFF0CBL,0x32378097L},{1UL,0xE65D7742L,0x43C3D621L},{0xDC19A22DL,0xEEFEF176L,4294967292UL}}};
    unsigned l_1060[7] = {0x0524AF49L,0x0524AF49L,0x0524AF49L,0x0524AF49L,0x0524AF49L,0x0524AF49L,0x0524AF49L};
    int i, j, k;
    for (p_58 = 5; (p_58 < 56); p_58 = safe_add_func_int16_t_s_s(p_58, 5))
    {
        unsigned l_77 = 0xD68647D0L;
        const unsigned l_130 = 1UL;
        const char l_131 = 0xADL;
        int l_198[3];
        const unsigned l_220 = 0xD7D1BF06L;
        short l_247[4] = {1L,1L,1L,1L};
        short l_262 = (-1L);
        unsigned short l_407[1];
        const char l_486 = (-6L);
        int i;
        for (i = 0; i < 3; i++)
            l_198[i] = 0L;
        for (i = 0; i < 1; i++)
            l_407[i] = 0x3EE0L;
        if (((g_12 ^ func_66(p_59)) >= func_71(p_59, ((+(g_12 == l_77)) != 0UL), (g_35 , (g_12 >= g_35)), l_77, g_12)))
        {
            unsigned l_93[10][10][2] = {{{4294967295UL,0x6CDD171CL},{0x4DCBD99AL,0x1B453F47L},{4294967292UL,4294967295UL},{0x4B5BC177L,0xEBAC3F40L},{0x5D48947DL,0x60796867L},{0xD39FA4EEL,1UL},{1UL,4294967295UL},{0x357DCCC7L,0x5D48947DL},{0x6CDD171CL,0UL},{1UL,0x44C677CCL}},{{0x4B5BC177L,3UL},{4UL,0x4DCBD99AL},{0x1B453F47L,0xBF08EAF5L},{4294967295UL,0xBF08EAF5L},{0x1B453F47L,0x4DCBD99AL},{4UL,3UL},{0x4B5BC177L,0x44C677CCL},{1UL,0UL},{0x6CDD171CL,0x5D48947DL},{0x357DCCC7L,4294967295UL}},{{1UL,1UL},{0xD39FA4EEL,0x60796867L},{0x5D48947DL,0xEBAC3F40L},{0x4B5BC177L,4294967295UL},{4294967292UL,0x1B453F47L},{0x4DCBD99AL,0x6CDD171CL},{4294967295UL,0xBF08EAF5L},{0UL,4294967286UL},{4294967295UL,4294967295UL},{4294967295UL,0xEBAC3F40L}},{{1UL,2UL},{0xBF08EAF5L,0xA93538B8L},{0xA889E4E2L,4294967293UL},{0x357DCCC7L,1UL},{0x79E2962DL,0xC2D96A12L},{0xA93538B8L,0UL},{4294967295UL,3UL},{4294967292UL,0UL},{4294967286UL,0xD39FA4EEL},{4294967295UL,0x6CDD171CL}},{{0x1B453F47L,4294967286UL},{8UL,0x79E2962DL},{0x85BB29A1L,4UL},{4294967295UL,5UL},{2UL,0xD26016E5L},{8UL,1UL},{4294967292UL,4294967295UL},{0xEA94120BL,4294967295UL},{0xD26016E5L,4294967295UL},{0x85BB29A1L,0xBF08EAF5L}},{{0x255FA7FFL,1UL},{0UL,4294967295UL},{4294967295UL,0xEA94120BL},{4294967294UL,4294967294UL},{4294967289UL,0x79E2962DL},{4294967290UL,4294967295UL},{0x01C16B31L,0x375F08A7L},{0xC2D96A12L,0x01C16B31L},{8UL,0xCEA4F543L},{8UL,0x01C16B31L}},{{0xC2D96A12L,0x375F08A7L},{0x01C16B31L,4294967295UL},{4294967290UL,0x79E2962DL},{4294967289UL,4294967294UL},{4294967294UL,0xEA94120BL},{4294967295UL,4294967295UL},{0UL,1UL},{0x255FA7FFL,0xBF08EAF5L},{0x85BB29A1L,4294967295UL},{0xD26016E5L,4294967295UL}},{{0xEA94120BL,4294967295UL},{4294967292UL,1UL},{8UL,0xD26016E5L},{2UL,5UL},{4294967295UL,4UL},{0x85BB29A1L,0x79E2962DL},{0x46BA864CL,0UL},{1UL,0xC2D96A12L},{0x482A8E6FL,0xEA94120BL},{0UL,0xDD5AE909L}},{{0x44C677CCL,0xCA5B7F44L},{1UL,4UL},{0x01C16B31L,4294967295UL},{4294967295UL,1UL},{0x68EB2A14L,0x4B5BC177L},{4294967292UL,0x01C16B31L},{2UL,1UL},{1UL,0x09803114L},{1UL,0xBF08EAF5L},{4294967295UL,0xD1C1BBB8L}},{{0x978FFC2FL,4294967295UL},{0UL,0x357798EDL},{4294967291UL,0x0AC9F79EL},{3UL,0xEA94120BL},{0x357DCCC7L,0x79E2962DL},{0x54B492BBL,0xF578636BL},{4294967295UL,4294967295UL},{4294967289UL,0xA93538B8L},{0x44C677CCL,0x54B492BBL},{0x357798EDL,4294967295UL}}};
            int l_104 = 1L;
            int i, j, k;
            l_104 = (safe_sub_func_uint32_t_u_u(l_93[7][2][1], ((((safe_unary_minus_func_int32_t_s(g_35)) == p_58) , ((g_68[1] , g_12) > ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((g_12 & func_71((safe_add_func_uint32_t_u_u(g_87, (g_12 ^ (p_59 , 0xCE13L)))), p_59, p_59, p_59, g_103)) ^ g_68[0]), g_12)), (-1L))), p_58)) , l_77))) , p_59)));
        }
        else
        {
            int l_116 = 0L;
            int l_170[5] = {2L,2L,2L,2L,2L};
            unsigned l_180 = 0x6CBFF400L;
            short l_320 = 0x5299L;
            int i;
            if (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_68[1], l_77)), (g_12 , (safe_lshift_func_int16_t_s_u((p_59 , ((func_71(l_113, g_12, p_58, (((safe_lshift_func_uint16_t_u_u((func_71((7UL >= g_35), l_77, p_59, l_116, p_60) <= p_59), p_59)) | 0L) , (-1L)), p_58) , l_113) & 0xAEL)), 14))))), 255UL)) , g_88))
            {
                unsigned l_117[10][2] = {{0x3B4235E9L,4294967292UL},{7UL,4294967293UL},{7UL,4294967292UL},{0x3B4235E9L,0x3B4235E9L},{4294967292UL,7UL},{4294967293UL,7UL},{4294967292UL,0x3B4235E9L},{0x3B4235E9L,4294967292UL},{7UL,4294967293UL},{7UL,4294967292UL}};
                int i, j;
                g_81 |= p_60;
                g_81 = ((p_59 , (g_81 | 0xEE533B9EL)) ^ (((func_66(g_88) & g_88) && p_59) && p_60));
                if (p_60)
                    continue;
                if (l_117[5][0])
                    break;
            }
            else
            {
                int l_129 = 0x83405558L;
                short l_168 = (-1L);
                short l_193 = 0L;
                unsigned short l_195 = 5UL;
                int l_197 = 0xD84F3E29L;
                if (p_58)
                {
                    unsigned l_124 = 0x99205434L;
                    int l_128 = 0x40C6877BL;
                    if (func_71(l_113, l_77, (safe_add_func_int16_t_s_s(g_120[1], (g_81 , (safe_sub_func_uint16_t_u_u(((l_123 >= p_58) <= l_124), func_71(l_116, (g_12 <= p_58), g_120[1], l_123, p_60)))))), p_58, g_35))
                    {
                        char l_125 = 0x32L;
                        l_125 = p_60;
                        return l_77;
                    }
                    else
                    {
                        unsigned short l_132 = 65535UL;
                        l_132 = ((safe_add_func_uint8_t_u_u((l_116 && (g_103 < func_71(((~(-1L)) && p_60), ((((func_66(g_120[1]) || (((0x48CD50E3L <= (l_124 > ((p_59 ^ g_35) == g_68[1]))) , p_59) == l_128)) != l_129) == l_130) , p_59), g_87, g_88, l_131))), g_103)) , g_68[0]);
                        g_81 = (((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_88, p_58)), g_87)) > 0xB175L) != ((((p_58 <= (safe_mod_func_int8_t_s_s(p_58, l_132))) > l_116) , g_87) < 6UL)) >= p_60) <= p_59);
                    }
                    if (g_88)
                        break;
                    for (g_88 = 0; (g_88 <= 1); g_88 += 1)
                    {
                        int l_139[4][4] = {{0x041155C2L,0x041155C2L,9L,0x4636B982L},{0x4636B982L,3L,9L,3L},{0x041155C2L,0x2DC6FEDBL,0L,9L},{3L,0x2DC6FEDBL,0x2DC6FEDBL,3L}};
                        int i, j;
                        l_139[1][0] = g_120[g_88];
                        if (g_120[g_88])
                            break;
                        l_140 = g_120[g_88];
                    }
                    for (g_87 = 0; (g_87 < (-18)); g_87 = safe_sub_func_uint8_t_u_u(g_87, 1))
                    {
                        unsigned l_160 = 1UL;
                        g_81 &= ((safe_lshift_func_uint8_t_u_s(l_131, (safe_mod_func_uint16_t_u_u(g_120[1], g_35)))) <= (((safe_lshift_func_uint8_t_u_s(p_59, 1)) ^ 4L) , 3UL));
                        l_160 = ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(func_71(l_153, ((func_66((0x5331A3B0L && (((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u(p_58, (safe_mod_func_int16_t_s_s((func_66(g_12) , (3UL >= func_71(((l_116 , p_58) | func_66(p_58)), l_116, l_124, g_120[0], l_153))), 8L)))) && 0UL) , g_87), 1)) || p_58) , p_58))) & 0x76A6A2F9L) ^ l_116), g_120[1], l_140, g_35), g_12)), g_12)) , p_59);
                    }
                }
                else
                {
                    unsigned l_169 = 0x98E1D098L;
                    unsigned l_175 = 0x779B4FEFL;
                    for (l_77 = 0; (l_77 == 45); ++l_77)
                    {
                        unsigned char l_163 = 0x34L;
                        if (p_60)
                            break;
                        l_170[2] = (l_163 < (l_163 && ((g_68[1] == func_71((((1UL & (~((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((g_88 ^ l_168) , 0x62L), l_169)), l_123)) || p_60))) != l_77) == l_116), p_60, g_68[1], p_60, l_163)) || 0xAA60L)));
                        l_170[0] |= func_71(g_68[1], (((~(g_120[1] ^ (l_123 > (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_175, 8)), (func_71(g_68[1], p_58, ((l_116 && (safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((-2L), p_58)) ^ p_58) <= g_12), p_58))) && g_81), g_68[0], g_68[1]) != l_180)))))) | g_103) && g_35), l_130, l_169, g_87);
                    }
                    l_195 = (((safe_rshift_func_uint8_t_u_s(0x47L, 6)) <= ((~g_68[0]) != (((safe_sub_func_uint16_t_u_u((g_12 , ((safe_lshift_func_int16_t_s_s((func_71((!((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((l_193 & 65535UL), (p_60 , 0xAEL))) == l_130), (((l_194 < l_130) | 0x57L) > 0UL))) != 6UL)), l_175, p_59, g_68[0], l_140) < 1L), l_77)) > g_120[1])), 1UL)) , l_169) || l_180))) , g_120[1]);
                    if ((((((g_81 >= ((func_66(g_120[1]) , 0xB9L) ^ g_103)) > 0x372CDDA9L) && l_77) , (p_59 > (-4L))) > g_35))
                    {
                        unsigned l_199 = 0xB384F36AL;
                        l_199--;
                        g_202++;
                        return p_58;
                    }
                    else
                    {
                        if (g_35)
                            break;
                        return g_88;
                    }
                }
                return g_35;
            }
            for (l_153 = 0; (l_153 <= 17); l_153++)
            {
                char l_209 = 2L;
                int l_369 = 0x35162C1FL;
                g_221 ^= (((safe_add_func_uint8_t_u_u((p_59 & l_209), func_71(((safe_lshift_func_int8_t_s_u(g_88, l_131)) , ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(g_35, 0xEDL)), (p_59 ^ ((safe_lshift_func_int16_t_s_s(func_66(l_209), g_88)) ^ p_58)))))) > l_153)), g_120[1], l_209, l_219, l_220))) , l_130) != 0x8BEAL);
                if (((g_68[1] , (safe_rshift_func_int8_t_s_u(g_87, 5))) , ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_209, 5)), (safe_sub_func_int8_t_s_s(p_60, (p_60 > ((((safe_rshift_func_uint8_t_u_u(l_198[2], 4)) == (func_71(l_209, p_59, p_60, l_170[4], g_68[1]) >= 9L)) , (-5L)) <= g_87)))))) != g_202)))
                {
                    int l_263 = 2L;
                    int l_281[8] = {(-1L),(-3L),(-1L),(-3L),(-1L),(-3L),(-1L),(-3L)};
                    int i;
                    for (l_123 = 0; l_123 < 2; l_123 += 1)
                    {
                        g_120[l_123] = (-8L);
                    }
                    if (p_60)
                    {
                        return g_68[1];
                    }
                    else
                    {
                        char l_244[7][2][10] = {{{0xA1L,1L,0x30L,1L,0L,(-1L),0x5BL,1L,(-1L),1L},{0x10L,0x5BL,0xC5L,1L,0x7CL,0x7CL,1L,0xC5L,0x5BL,0x10L}},{{1L,(-1L),1L,0x5BL,(-8L),0x2BL,0x30L,0x5BL,0L,1L},{0xA1L,0x2BL,1L,0x5BL,(-8L),0xB1L,1L,1L,0xC5L,6L}},{{(-8L),0x30L,3L,0x9EL,1L,0x9EL,3L,0x30L,(-8L),1L},{(-1L),1L,0L,1L,0x2BL,(-1L),0xC5L,0xB1L,1L,0xA1L}},{{0x9EL,0xA1L,1L,1L,0xB1L,1L,0L,0x61L,(-8L),(-8L)},{(-1L),0xB1L,0xE8L,0x9EL,0x9EL,0xE8L,0xB1L,(-1L),0xC5L,(-1L)}},{{0x30L,(-1L),4L,0x5BL,(-1L),6L,1L,0xC5L,0L,0x9EL},{0x61L,0xE8L,4L,(-1L),1L,0xC5L,(-8L),(-1L),0L,(-1L)}},{{1L,0x10L,0xE8L,(-1L),0xE8L,0x10L,1L,0x61L,0x5BL,0x30L},{1L,0L,1L,0x30L,6L,3L,4L,0xB1L,0x2BL,0x61L}},{{0xA1L,1L,1L,0xB1L,1L,0L,0x61L,(-8L),(-8L),0x61L},{1L,(-1L),1L,1L,(-1L),1L,0x5BL,(-1L),0L,1L}}};
                        const short l_248 = 5L;
                        int i, j, k;
                        g_81 = (l_198[2] , ((safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_60, 0x87DAL)), ((safe_add_func_uint32_t_u_u(((p_59 != (safe_mod_func_uint8_t_u_u(g_81, (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((p_60 , ((~(l_219 >= 0xD6F2L)) | func_66((func_66((g_68[1] , 8L)) , l_180)))), p_60)), 0))))) , l_244[6][1][9]), g_103)) && g_68[1]))) , g_35));
                        l_170[2] = ((g_81 == ((safe_lshift_func_int16_t_s_u((l_247[2] == func_66(l_244[6][1][9])), 14)) & (l_248 < 0xD474L))) | g_196);
                        --g_249;
                        l_140 |= (safe_rshift_func_uint8_t_u_s((func_71(l_244[5][0][3], ((p_58 , ((((l_170[2] < ((((safe_mod_func_uint8_t_u_u(p_59, ((safe_add_func_uint16_t_u_u((func_71((safe_lshift_func_int16_t_s_u((0x8ABC2DA7L > (p_58 | ((func_66(p_59) != (((safe_mod_func_uint16_t_u_u(((p_60 != p_58) < l_209), p_58)) ^ g_88) , p_59)) , (-10L)))), l_153)), g_202, l_77, l_262, g_221) , l_263), p_59)) && l_263))) || p_58) , l_209) || p_59)) > 8UL) | p_58) != p_60)) <= 0xEA13L), p_60, p_59, p_58) , l_194), g_196));
                    }
                    for (l_180 = 0; (l_180 >= 29); l_180++)
                    {
                        short l_268 = 0xDB38L;
                        l_198[2] = (func_66(p_58) && ((((l_263 & g_221) | (l_219 >= ((safe_mod_func_uint32_t_u_u(0x9098E09DL, func_71(l_263, g_35, l_209, g_88, p_59))) || p_59))) , l_209) | l_268));
                        g_81 = (g_120[1] < (g_269 ^ (((l_153 != ((((((safe_add_func_uint8_t_u_u(p_60, l_209)) >= g_81) > func_66(l_219)) < 0L) , l_263) >= 4294967293UL)) , g_88) , p_60)));
                    }
                    if (l_113)
                    {
                        unsigned short l_278 = 1UL;
                        char l_296 = (-1L);
                        unsigned char l_297[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_297[i] = 255UL;
                        g_81 = ((safe_add_func_uint16_t_u_u(g_88, ((+((((((((p_60 >= ((safe_sub_func_uint16_t_u_u(((+g_68[1]) | 0x18F1FB9CL), (((safe_sub_func_uint16_t_u_u(l_278, l_180)) > g_120[1]) >= ((p_60 , g_120[0]) <= l_263)))) == p_59)) <= l_279) , p_59) <= l_209) | p_58) & g_120[1]) == 0xD8CBL) | p_60)) , g_120[1]))) && 0xFF19L);
                        --g_282;
                        l_297[0] = (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((((safe_lshift_func_int16_t_s_s((g_282 && ((p_59 >= 1UL) , p_60)), 11)) , ((safe_sub_func_int8_t_s_s(((func_71((((-3L) == (p_60 == ((l_130 == (0L || p_60)) >= 1UL))) & 3L), p_60, p_59, g_221, p_58) | l_281[0]) , l_170[2]), p_60)) <= g_202)) > l_123))), l_296)) || 1UL), l_180)) , g_68[1]), 6));
                    }
                    else
                    {
                        l_281[6] = (-1L);
                        g_280 ^= ((((p_58 || (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((246UL == (g_103 >= 0x2434L)), func_71((safe_add_func_uint32_t_u_u(l_170[2], p_59)), p_60, ((-10L) < ((((65528UL < 1UL) < g_269) <= p_58) , p_58)), l_281[0], l_263))), l_281[0])) , (-1L)), g_103)), g_35))) != g_87) && g_221) , p_58);
                    }
                }
                else
                {
                    unsigned l_327 = 0UL;
                    g_280 |= (65535UL | p_59);
                    l_320 ^= (safe_mod_func_int16_t_s_s(((g_68[1] , p_59) || ((safe_sub_func_uint32_t_u_u(4294967294UL, ((safe_rshift_func_uint8_t_u_u(func_66((((p_60 && 0xF5L) && p_59) != ((safe_rshift_func_uint8_t_u_s(((p_58 >= ((safe_add_func_int8_t_s_s(g_249, (safe_lshift_func_uint8_t_u_s(l_116, l_170[0])))) && p_60)) , p_58), g_87)) >= g_120[1]))), 1)) == 4294967295UL))) <= 0xD69F502DL)), p_59));
                    g_280 = (safe_sub_func_int32_t_s_s(p_59, ((((g_280 || (safe_sub_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(l_327, g_12)), (-1L)))) > (((safe_mod_func_int16_t_s_s(g_81, g_103)) && (safe_rshift_func_uint8_t_u_u(p_60, 0))) & (safe_sub_func_int16_t_s_s(((+(safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_196 ^ l_219), p_59)), l_247[2])) , g_196), 2))) >= l_140), g_81)))) ^ l_247[2]) | l_116)));
                    if (((func_71((((((safe_sub_func_uint16_t_u_u(((p_60 | (0x1475L || ((l_209 , (safe_mod_func_uint8_t_u_u(p_60, (l_209 || ((0UL <= ((safe_sub_func_uint16_t_u_u(p_60, l_180)) , ((l_247[2] != g_196) || g_346))) ^ 65535UL))))) ^ 0L))) >= g_346), p_60)) != g_35) > g_12) & 0UL) < g_120[1]), g_88, g_81, g_282, l_170[4]) && g_282) != p_60))
                    {
                        l_170[2] ^= p_59;
                    }
                    else
                    {
                        unsigned short l_347 = 65535UL;
                        ++l_347;
                        l_369 = func_71(((g_88 == (safe_rshift_func_uint16_t_u_s((((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((l_347 ^ p_58) <= 1L) && (safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((g_269 <= g_68[0]) & (safe_add_func_uint16_t_u_u((p_58 , (safe_sub_func_uint8_t_u_u((((p_58 == l_209) != 0xFAL) , l_209), g_88))), l_113))), 4)), g_368[0][6])), 3))) , g_280), 9L)), g_12)), 4294967295UL)) | 255UL) && 0xDB8AA756L) >= 0xA2L) , p_60), p_60))) , p_60), p_60, p_59, l_327, g_81);
                        return g_68[1];
                    }
                }
            }
        }
        if (l_123)
            continue;
        for (g_269 = 3; (g_269 == (-14)); --g_269)
        {
            short l_389 = 0xEDAFL;
            short l_406 = 0x4139L;
            int l_442 = 0xB90DDF73L;
            for (g_81 = 0; (g_81 >= 23); g_81 = safe_add_func_int8_t_s_s(g_81, 6))
            {
                unsigned l_388 = 4294967293UL;
                if ((safe_sub_func_uint32_t_u_u((p_60 & (0x335B6DD2L | g_87)), p_60)))
                {
                    if (l_130)
                        break;
                }
                else
                {
                    int l_390 = 0x13E96B69L;
                    if (l_131)
                    {
                        short l_403[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_403[i] = (-2L);
                        l_390 = ((((safe_lshift_func_int16_t_s_u(p_58, 4)) , (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(func_66(p_59), 15)), 3))) < ((g_87 & (((0xD9L && (-10L)) , ((safe_add_func_int8_t_s_s(g_81, (((((safe_mod_func_int8_t_s_s((-2L), (safe_rshift_func_uint16_t_u_s(g_35, l_388)))) , g_120[1]) != p_59) == 0x65B3739AL) <= l_388))) , g_368[0][6])) > l_389)) < p_60)) & p_59);
                        g_280 = (safe_unary_minus_func_uint8_t_u(func_66(((((safe_rshift_func_uint8_t_u_s((255UL == (1UL | func_66((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(l_388, ((safe_mod_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(func_66(func_66(((safe_unary_minus_func_uint32_t_u(g_368[0][6])) , l_403[2]))), ((safe_add_func_uint32_t_u_u((p_59 > (p_60 , p_58)), p_60)) || p_59))) <= g_249), l_403[1])) , (-1L)))) < p_58), p_58))))), 1)) , 65530UL) ^ g_368[2][7]) >= l_406))));
                        return l_407[0];
                    }
                    else
                    {
                        l_390 = g_346;
                    }
                    for (l_153 = 0; (l_153 != 53); l_153 = safe_add_func_uint8_t_u_u(l_153, 5))
                    {
                        l_140 = l_406;
                    }
                }
                return l_388;
            }
            for (g_87 = 0; (g_87 == 9); ++g_87)
            {
                unsigned l_418 = 0x63802CE8L;
                int l_440[7][9][4] = {{{0x1843362BL,1L,3L,2L},{(-1L),0x814CA008L,0xEF81E7EBL,0L},{0xC8C8CCAEL,0x4478303DL,0xC8C8CCAEL,6L},{(-9L),0xEF81E7EBL,0xBA14C7D3L,0xC8E805FFL},{(-5L),0xA92FD68CL,0xA36D6CFDL,0xEF81E7EBL},{(-1L),0x00E6010BL,0xA36D6CFDL,0x502A305BL},{(-5L),0xFEEB1536L,0xBA14C7D3L,0L},{(-9L),0x4E08D824L,0xC8C8CCAEL,0x82B0EBEEL},{0xC8C8CCAEL,0x82B0EBEEL,0xEF81E7EBL,0x759B0F3FL}},{{(-1L),0L,3L,0x66269D93L},{0x1843362BL,1L,2L,0xD2A60849L},{(-3L),0x903CBE5BL,0x5F3344D8L,0L},{0xB192F129L,8L,0xC8E805FFL,0x1B90CF8EL},{5L,0x66269D93L,0x1B90CF8EL,0xB192F129L},{(-1L),0xA92FD68CL,1L,0x1843362BL},{0xEF81E7EBL,0L,0L,0xA36D6CFDL},{(-3L),0xE6D024CCL,0x3CF38F01L,0L},{0xC8E805FFL,1L,0L,0x3CF38F01L}},{{1L,(-1L),0xEF81E7EBL,1L},{0x4478303DL,(-1L),0xF138F6F1L,0xFEEB1536L},{0x56996B4EL,0L,0xFEBDD09BL,4L},{0x19C6E569L,(-1L),0xFEEB1536L,0x22305750L},{1L,0xD2A60849L,0xBA14C7D3L,0x814CA008L},{6L,0x7B47D4C1L,0x7B47D4C1L,6L},{(-1L),(-3L),0xF138F6F1L,(-1L)},{0xE6D024CCL,2L,0x22305750L,0xC9FEDD75L},{0L,0L,0x9A225837L,0xC9FEDD75L}},{{0x43D29F54L,2L,3L,(-1L)},{0xA92FD68CL,(-3L),(-1L),6L},{0x4E08D824L,0x7B47D4C1L,4L,0x814CA008L},{(-5L),0xD2A60849L,0xC8C8CCAEL,0x22305750L},{0L,(-1L),0xA5B328EEL,4L},{(-1L),0L,0L,0xFEEB1536L},{0xA92FD68CL,(-1L),(-5L),1L},{0xD342261DL,0xE6D024CCL,0xC8E805FFL,(-5L)},{(-5L),0L,0x22305750L,0x42EB54D7L}},{{0x4478303DL,0xAC047BC4L,0xE6D024CCL,0xB4FB30E9L},{0x951FFD2FL,0L,0x1B90CF8EL,0xA5B328EEL},{6L,0x56996B4EL,0xFEEB1536L,(-1L)},{0L,0xDDE3FCD2L,0xB4FB30E9L,0x814CA008L},{1L,0x502A305BL,0xFEBDD09BL,0x188DBC37L},{(-1L),0L,0xE6D024CCL,1L},{0x5F3344D8L,2L,2L,5L},{0L,0xC9FEDD75L,0xFEBDD09BL,(-1L)},{(-1L),0xB192F129L,0x4E08D824L,0xB192F129L}},{{0x188DBC37L,(-5L),0x00E6010BL,0L},{0x3CF38F01L,0x951FFD2FL,0xC8C8CCAEL,0L},{0xD2A60849L,(-1L),1L,1L},{0xD2A60849L,0xB4FB30E9L,0xC8C8CCAEL,0xFDA17503L},{0x3CF38F01L,1L,0x00E6010BL,(-9L)},{0x188DBC37L,0x7777C2D3L,0x4E08D824L,0L},{(-1L),0x43D29F54L,0xFEBDD09BL,0x4E08D824L},{0L,0xA5B328EEL,2L,0L},{0xBD9CC5EBL,0x759B0F3FL,4L,7L}},{{0xBA14C7D3L,1L,(-1L),0xC8C8CCAEL},{0x42EB54D7L,0xFEEB1536L,7L,0x6AAB5052L},{3L,0L,(-9L),0L},{(-3L),0x56996B4EL,3L,0x42EB54D7L},{(-1L),0L,4L,8L},{0x43D29F54L,0xB192F129L,0x6AAB5052L,5L},{0x22305750L,0xDDE3FCD2L,1L,0xAC047BC4L},{(-1L),0xEF81E7EBL,0x22305750L,0L},{0xA36D6CFDL,(-5L),0L,0x42EB54D7L}}};
                int l_459 = 6L;
                int i, j, k;
                if (p_59)
                {
                    int l_419 = 0xCA718A48L;
                    if ((~(p_60 || (safe_sub_func_int8_t_s_s((p_59 , (g_280 <= ((!(safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((p_60 || (((p_59 & func_66(g_120[1])) > ((((func_71(p_58, l_418, g_346, l_419, g_202) != (-8L)) , p_60) && 0x9ABFL) , g_120[1])) && p_58)) >= g_221), l_389)), p_60))) == p_60))), 0x9CL)))))
                    {
                        g_441 |= ((safe_mod_func_uint8_t_u_u(((((((((safe_sub_func_int32_t_s_s(p_59, ((safe_rshift_func_int8_t_s_s(p_60, 2)) != ((-1L) <= (~p_58))))) != g_68[1]) >= (((p_58 || (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0xA12AL, 9)), ((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(func_71(((safe_rshift_func_int8_t_s_s(((1L > (((((safe_lshift_func_uint16_t_u_s(65526UL, g_280)) >= (-1L)) | p_59) < 8L) , 7UL)) & 65535UL), 0)) , 0UL), g_368[0][6], p_59, l_123, l_194), l_440[0][4][2])) && 255UL), g_282)) & p_60), 3)) & p_58) && g_368[2][3]) , p_60)))) != g_68[1]) && p_59)) || 0xCAE3L) , 0x5B73L) & p_59) , 5UL) == g_68[0]), g_368[0][6])) > l_389);
                        g_280 = (g_120[1] , (65532UL != 8L));
                        --l_443;
                    }
                    else
                    {
                        short l_446 = 0x9D9AL;
                        l_446 = g_68[0];
                        l_140 = l_442;
                    }
                    if (g_81)
                        continue;
                    for (l_406 = 0; (l_406 == 24); l_406 = safe_add_func_uint16_t_u_u(l_406, 2))
                    {
                        if (g_12)
                            break;
                        g_280 = ((safe_sub_func_int8_t_s_s(g_120[1], ((func_66(((0xFD43L | (func_71(((!(safe_unary_minus_func_uint16_t_u((((!((4294967295UL & p_60) && p_59)) >= g_87) & (!(safe_add_func_uint32_t_u_u((((((g_35 == ((!((safe_rshift_func_int16_t_s_s((-1L), g_68[1])) , g_35)) , (-1L))) & 0UL) && l_140) <= g_202) | g_456), g_249))))))) && l_442), g_87, p_58, g_221, p_58) ^ g_68[0])) && 0x46L)) , 0xF0F9DEFFL) >= p_60))) && g_269);
                    }
                }
                else
                {
                    for (g_88 = (-16); (g_88 >= 7); ++g_88)
                    {
                        unsigned l_466[8][9][3] = {{{0xFD9E3406L,9UL,4294967295UL},{0x0AD403DDL,0xA0385E88L,4294967287UL},{4294967295UL,0x8F3110DDL,0x823FD580L},{1UL,4294967295UL,7UL},{0x217C7FCCL,0x8F3110DDL,0xCA4684CCL},{0x5CE519DEL,0x400F266BL,0x52EECA2CL},{0x60CBB4FAL,6UL,0xDED783F5L},{0x6D76F845L,7UL,0x6D76F845L},{0x9A02F5DBL,4294967288UL,0x217C7FCCL}},{{1UL,0x0AD403DDL,0x92EC177AL},{0x227B02F8L,4294967290UL,0x823FD580L},{0x0AD403DDL,0x294EEDCFL,0x5CE519DEL},{0x227B02F8L,0xCA4684CCL,0x2B7B50C5L},{1UL,0x52EECA2CL,0UL},{0x9A02F5DBL,0xDED783F5L,0x8F3110DDL},{0x6D76F845L,0x6D76F845L,1UL},{0x60CBB4FAL,0x217C7FCCL,0xD29C47D6L},{0x5CE519DEL,0x92EC177AL,0xB0F104D1L}},{{0x8F3110DDL,0x823FD580L,4294967295UL},{0x52EECA2CL,0x5CE519DEL,0xB0F104D1L},{4294967288UL,0x2B7B50C5L,0xD29C47D6L},{0x500B8E47L,0UL,1UL},{0x733126D1L,0x8F3110DDL,0x8F3110DDL},{0xA0385E88L,1UL,0UL},{9UL,0xD29C47D6L,0x2B7B50C5L},{0UL,0xB0F104D1L,0x5CE519DEL},{0x217C7FCCL,4294967295UL,0x823FD580L}},{{7UL,0xB0F104D1L,0x92EC177AL},{4294967290UL,0xD29C47D6L,0x217C7FCCL},{4294967295UL,1UL,0x6D76F845L},{0xDED783F5L,0x8F3110DDL,0xDED783F5L},{0UL,0UL,0x52EECA2CL},{4294967295UL,0x2B7B50C5L,0xCA4684CCL},{4294967295UL,0x5CE519DEL,0x294EEDCFL},{0x2B7B50C5L,0x823FD580L,4294967290UL},{4294967295UL,0x92EC177AL,0x0AD403DDL}},{{4294967295UL,0x227B02F8L,0x217C7FCCL},{4294967287UL,0x92EC177AL,0UL},{0xCA4684CCL,0xCA4684CCL,0x60CBB4FAL},{0x500B8E47L,4294967295UL,7UL},{6UL,0x823FD580L,4294967294UL},{0UL,0xB0F104D1L,0x6D76F845L},{0x227B02F8L,6UL,4294967294UL},{0x52EECA2CL,0xA0385E88L,7UL},{0xD29C47D6L,0x217C7FCCL,0x60CBB4FAL}},{{0UL,0UL,0UL},{4294967288UL,0x60CBB4FAL,0x217C7FCCL},{0x400F266BL,7UL,0xA0385E88L},{0x217C7FCCL,4294967294UL,6UL},{4294967295UL,0x6D76F845L,0xB0F104D1L},{0x9A02F5DBL,4294967294UL,0x823FD580L},{1UL,7UL,4294967295UL},{9UL,0x60CBB4FAL,0xCA4684CCL},{0x92EC177AL,0UL,0x92EC177AL}},{{0x56A92316L,0x217C7FCCL,0x227B02F8L},{1UL,0xA0385E88L,0x294EEDCFL},{0xFBE83BFAL,6UL,9UL},{0xA0385E88L,0xB0F104D1L,1UL},{0xFBE83BFAL,0x823FD580L,0x733126D1L},{1UL,4294967295UL,0x52EECA2CL},{0x56A92316L,0xCA4684CCL,0x9A02F5DBL},{0x92EC177AL,0x92EC177AL,4294967295UL},{9UL,0x227B02F8L,0x1CBDA052L}},{{1UL,0x294EEDCFL,0x8ACB0BAAL},{0x9A02F5DBL,9UL,0xDED783F5L},{4294967295UL,1UL,0x8ACB0BAAL},{0x217C7FCCL,0x733126D1L,0x1CBDA052L},{0x400F266BL,0x52EECA2CL,4294967295UL},{0x1CBDA052L,4294967294UL,4294967294UL},{7UL,1UL,7UL},{0xCA4684CCL,0x823FD580L,0xD29C47D6L},{7UL,4294967295UL,1UL}}};
                        int i, j, k;
                        l_459 = g_368[0][6];
                        g_81 &= ((g_35 == (!(safe_rshift_func_int16_t_s_u((g_87 & ((((safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(0xFAL, ((((-4L) ^ p_58) < (+(l_466[0][7][1] >= ((g_68[1] > 0UL) <= ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(g_269, l_440[0][4][2])), 0xF12A3BDFL)) > 0UL))))) ^ p_60))) , p_59), g_280)) < g_346) && (-1L)) <= (-1L))), l_131)))) <= l_406);
                    }
                }
                l_459 = (g_346 , p_60);
                l_459 = g_35;
            }
            g_487[1][2] ^= ((safe_add_func_int8_t_s_s((func_71(g_269, ((func_66(((!func_71(p_58, (safe_lshift_func_int16_t_s_s(l_442, func_66(l_475))), ((safe_sub_func_int16_t_s_s(((p_60 <= ((((safe_add_func_int8_t_s_s((g_103 >= (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s(0xEE49L, ((l_123 > l_486) , l_486))) != g_280) <= 0x5AC11CBEL), g_120[1])), 2))), l_389)) , l_442) | l_407[0]) | 0x0C30L)) > g_269), 0L)) , 0x86C6L), l_247[0], p_59)) <= g_282)) , 0xC948B8E6L) < g_120[0]), p_58, l_123, g_103) >= (-1L)), l_198[2])) || p_58);
        }
        l_198[2] = p_58;
    }
    for (g_196 = 0; (g_196 <= (-28)); --g_196)
    {
        int l_490 = 0L;
        int l_495 = 0x5530713DL;
        for (l_475 = 0; (l_475 <= 1); l_475 += 1)
        {
            for (p_59 = 0; (p_59 <= 1); p_59 += 1)
            {
                for (g_456 = 0; (g_456 <= 2); g_456 += 1)
                {
                    for (g_346 = 0; (g_346 <= 1); g_346 += 1)
                    {
                        int i;
                        if (g_120[l_475])
                            break;
                    }
                }
            }
        }
        l_490 = p_60;
        for (l_123 = 0; (l_123 >= (-22)); l_123 = safe_sub_func_int16_t_s_s(l_123, 1))
        {
            l_495 = (safe_lshift_func_uint8_t_u_s(g_202, 5));
        }
        l_495 = ((l_495 < (safe_rshift_func_uint16_t_u_s(g_88, 15))) >= p_59);
    }
    l_140 &= 0x86491656L;
    if ((safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((g_441 >= (((g_120[1] , l_504) , (((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_59, (safe_sub_func_int16_t_s_s(p_58, ((p_60 || ((safe_lshift_func_uint8_t_u_s(l_475, 5)) != (g_87 > ((g_368[2][1] >= p_59) != 0L)))) ^ g_221))))), l_219)), g_282)) || p_59) || l_475)) > 249UL)), l_475)), p_59)) , l_194) > l_515), 5)))
    {
        unsigned char l_524 = 0xD0L;
        int l_554[7] = {0x3F55F13AL,0x3F55F13AL,0x3F55F13AL,0x3F55F13AL,0x3F55F13AL,0x3F55F13AL,0x3F55F13AL};
        unsigned char l_570 = 1UL;
        short l_689 = 1L;
        const unsigned char l_707[10][5][5] = {{{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L}},{{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL}},{{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL}},{{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L}},{{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL}},{{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL}},{{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,0x82L,0x6BL,0x82L},{0x6BL,0x6BL,255UL,0x6BL,0x6BL},{0x82L,0x6BL,0x82L,0x82L,0x6BL},{0x6BL,0x82L,255UL,0x82L,255UL}},{{0x82L,0x82L,0x6BL,0x82L,0x82L},{255UL,0x82L,255UL,255UL,0x82L},{0x82L,255UL,255UL,0x82L,255UL},{0x82L,0x82L,0x6BL,0x82L,0x82L},{255UL,0x82L,255UL,255UL,0x82L}},{{0x82L,255UL,255UL,0x82L,255UL},{0x82L,0x82L,0x6BL,0x82L,0x82L},{255UL,0x82L,255UL,255UL,0x82L},{0x82L,255UL,255UL,0x82L,255UL},{0x82L,0x82L,0x6BL,0x82L,0x82L}},{{255UL,0x82L,255UL,255UL,0x82L},{0x82L,255UL,255UL,0x82L,255UL},{0x82L,0x82L,0x6BL,0x82L,0x82L},{255UL,0x82L,255UL,255UL,0x82L},{0x82L,255UL,255UL,0x82L,255UL}}};
        char l_783 = (-1L);
        unsigned char l_809 = 0x12L;
        unsigned char l_824 = 0xD6L;
        int i, j, k;
        for (g_456 = 11; (g_456 == (-25)); --g_456)
        {
            short l_520 = 4L;
            int l_529[9] = {0x8153B8FEL,0x8153B8FEL,0x8153B8FEL,0x8153B8FEL,0x8153B8FEL,0x8153B8FEL,0x8153B8FEL,0x8153B8FEL,0x8153B8FEL};
            unsigned char l_605 = 0x5EL;
            int i;
            for (g_81 = 2; (g_81 >= 0); g_81 -= 1)
            {
                char l_518 = 1L;
                int l_521 = (-7L);
                int l_523 = 0x1CA113D6L;
                int l_569 = 0x2A152F62L;
                int i, j;
                for (p_59 = 0; (p_59 <= 3); p_59 += 1)
                {
                    char l_519 = 0xAAL;
                    int l_522 = (-4L);
                    for (l_140 = 0; (l_140 <= 2); l_140 += 1)
                    {
                        int i, j;
                        if (g_368[l_140][(l_140 + 2)])
                            break;
                        g_280 |= g_487[g_81][l_140];
                        if (g_87)
                            continue;
                    }
                    l_524--;
                    for (l_123 = 0; (l_123 <= 1); l_123 += 1)
                    {
                        int i, j;
                        g_280 = (((safe_rshift_func_int16_t_s_u(((g_368[(l_123 + 1)][(g_81 + 1)] , g_368[g_81][(p_59 + 4)]) , (func_66(g_487[p_59][(g_81 + 2)]) , ((g_487[p_59][(l_123 + 3)] & g_487[g_81][p_59]) > func_66((func_66(g_68[l_123]) , p_59))))), 0)) >= 1L) , p_58);
                    }
                    g_530[1][0][3]++;
                }
                if (((0x77C0FCA1L == (safe_add_func_uint8_t_u_u(g_368[g_81][(g_81 + 1)], (p_60 && func_66((safe_rshift_func_int8_t_s_s((l_524 >= g_269), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(p_58, 0x35FFL)) || p_60), g_87)), p_60)) , g_120[1]), p_58))))))))) | g_280))
                {
                    const unsigned l_551 = 0x37D6EB45L;
                    g_280 |= p_59;
                    l_529[2] &= (((safe_rshift_func_int8_t_s_u(((l_521 , (func_66((g_202 >= (safe_mod_func_int8_t_s_s((((g_368[g_81][(g_81 + 1)] == ((((safe_mod_func_int16_t_s_s(l_551, 0xCDF4L)) == (safe_sub_func_uint16_t_u_u((func_66(l_518) , ((1L && (l_504 < p_58)) <= p_60)), g_530[3][0][6]))) && l_551) >= p_58)) , 0x6F4DE2BBL) , 0xD2L), 250UL)))) == 0x46E0L)) || 1L), g_12)) , (-10L)) < p_60);
                    if (p_59)
                        continue;
                }
                else
                {
                    int l_571 = 0x0A0851C7L;
                    int l_594 = 0x825A00A4L;
                    if (g_81)
                    {
                        l_529[4] = l_524;
                        ++g_556;
                        l_571 = (func_66(g_35) ^ ((g_103 >= (p_59 < 4294967288UL)) , ((p_58 <= (safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(g_120[0], ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((((((((safe_lshift_func_uint8_t_u_s(l_153, l_569)) || 0UL) | g_530[1][0][3]) || p_59) || p_58) , 65529UL) <= p_60), l_570)), 2)) ^ 0UL))) & g_196), p_58))) != g_346)));
                        if (l_554[3])
                            continue;
                    }
                    else
                    {
                        short l_588[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_588[i] = 0xB8F4L;
                        l_521 = ((g_221 , g_368[g_81][(g_81 + 1)]) || (0xBFL != (l_571 >= (((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(p_59, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967288UL, (l_504 & func_66(((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((((g_368[1][5] >= p_58) & p_58) , g_249), g_196)) && l_524), 14)), g_368[0][6])) ^ g_346))))), p_60)), 0)))) != 0x6954A7FEL), 6L)) , l_571) , p_58))));
                        l_588[0] &= g_196;
                        return g_556;
                    }
                    if (func_66(l_571))
                    {
                        char l_593 = 0x3AL;
                        l_594 &= (((((g_530[1][0][3] , l_571) | ((((p_59 , g_202) , ((p_59 , (safe_add_func_uint16_t_u_u(((((((func_66(g_87) , (safe_rshift_func_uint16_t_u_u(g_487[1][0], func_66((((p_58 >= 0x7087L) != l_571) , l_593))))) > 0xC21575A9L) || g_202) <= g_487[1][2]) | 3UL) , g_81), p_60))) & 1UL)) <= g_530[1][0][3]) & 5UL)) && l_569) ^ l_554[6]) , 0x2ED855E3L);
                        if (g_530[0][0][5])
                            continue;
                        l_555 = (safe_sub_func_uint32_t_u_u((p_60 < (1L | 4294967291UL)), g_202));
                    }
                    else
                    {
                        l_554[6] = ((func_66(g_88) >= (((p_60 < p_59) != g_35) && (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(l_569, ((0x6BE9C097L == ((safe_rshift_func_uint16_t_u_s(g_81, ((((((safe_add_func_int8_t_s_s((p_60 || p_58), g_269)) , p_60) == l_605) == p_60) == 0x056A97ADL) | g_35))) && 0x9CL)) | p_60))) , 0UL), l_113)))) < p_60);
                        g_280 = l_594;
                        if (p_58)
                            break;
                    }
                    if ((0x3FFEL && (g_368[g_81][(g_81 + 1)] >= ((0x59L == func_66(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_59 , 0xE3L), func_66(p_58))), 2)) != 249UL))) < p_58))))
                    {
                        g_280 = (l_153 ^ (safe_mod_func_int16_t_s_s((p_58 > l_521), l_569)));
                    }
                    else
                    {
                        return p_59;
                    }
                    g_280 = ((g_441 >= l_520) >= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(func_66(l_475), 4294967288UL)) | g_103), (p_58 , p_60))));
                }
            }
            if (g_12)
                continue;
            return l_153;
        }
        if (l_515)
        {
            int l_631[1][6][1] = {{{0x6B72FC76L},{0x2F155644L},{0x6B72FC76L},{0x2F155644L},{0x6B72FC76L},{0x2F155644L}}};
            unsigned l_710 = 4294967295UL;
            const unsigned l_723 = 0xF5174546L;
            int l_747[10][10][2] = {{{0xCFB35BA3L,(-10L)},{0x37F155E1L,1L},{(-1L),0x319E10E3L},{0x8E85B039L,0xD6049ECEL},{0x0FE0A138L,1L},{6L,1L},{0x0FE0A138L,0xD6049ECEL},{0x8E85B039L,0x319E10E3L},{(-1L),1L},{0x37F155E1L,0x97A3F542L}},{{(-1L),0x717B7D16L},{1L,8L},{0xCFB35BA3L,0x4DB1A58EL},{0xF4C694FFL,(-6L)},{0x97A3F542L,0xD32B6705L},{0xD6049ECEL,1L},{7L,1L},{(-7L),0x91B8304EL},{0x1224CC23L,0x1224CC23L},{(-4L),0xCFB35BA3L}},{{0xD32B6705L,8L},{(-1L),6L},{0x319E10E3L,(-1L)},{0L,(-7L)},{0L,(-1L)},{0x319E10E3L,6L},{(-1L),8L},{0xD32B6705L,0xCFB35BA3L},{(-4L),0x1224CC23L},{0x1224CC23L,0x91B8304EL}},{{(-7L),1L},{7L,1L},{0xD6049ECEL,0xD32B6705L},{0x97A3F542L,(-6L)},{0xF4C694FFL,0x4DB1A58EL},{0xCFB35BA3L,8L},{1L,0x717B7D16L},{(-1L),0x97A3F542L},{0x37F155E1L,1L},{(-1L),0x319E10E3L}},{{0x8E85B039L,0xD6049ECEL},{0x0FE0A138L,1L},{6L,1L},{0x0FE0A138L,0xD6049ECEL},{0x8E85B039L,0x319E10E3L},{(-1L),1L},{0x37F155E1L,0x97A3F542L},{(-1L),0x717B7D16L},{1L,8L},{(-1L),3L}},{{0xD32B6705L,0x9B188931L},{9L,0x37F155E1L},{0xDD96C110L,1L},{1L,0x1224CC23L},{(-1L),1L},{(-1L),(-1L)},{1L,(-1L)},{0x37F155E1L,(-1L)},{7L,0xBBACD754L},{0x4DB1A58EL,7L}},{{0x8E85B039L,(-1L)},{0x8E85B039L,7L},{0x4DB1A58EL,0xBBACD754L},{7L,(-1L)},{0x37F155E1L,(-1L)},{1L,(-1L)},{(-1L),1L},{(-1L),0x1224CC23L},{1L,1L},{0xDD96C110L,0x37F155E1L}},{{9L,0x9B188931L},{0xD32B6705L,3L},{(-1L),8L},{0xCFB35BA3L,0x319E10E3L},{0x0FE0A138L,9L},{8L,0xCFB35BA3L},{(-6L),0x4DB1A58EL},{0x717B7D16L,0xDD96C110L},{1L,6L},{0xBBACD754L,6L}},{{1L,0xDD96C110L},{0x717B7D16L,0x4DB1A58EL},{(-6L),0xCFB35BA3L},{8L,9L},{0x0FE0A138L,0x319E10E3L},{0xCFB35BA3L,8L},{(-1L),3L},{0xD32B6705L,0x9B188931L},{9L,0x37F155E1L},{0xDD96C110L,1L}},{{1L,0x1224CC23L},{(-1L),1L},{(-1L),(-1L)},{1L,(-1L)},{0x37F155E1L,(-1L)},{7L,0xBBACD754L},{0x4DB1A58EL,1L},{0x717B7D16L,(-6L)},{0x717B7D16L,1L},{3L,0xD6049ECEL}}};
            int i, j, k;
            for (l_515 = 0; (l_515 <= 17); l_515 = safe_add_func_int8_t_s_s(l_515, 7))
            {
                unsigned short l_628 = 0x5A62L;
                int l_635[10] = {0x9BF8956BL,(-6L),0x9BF8956BL,0x9BF8956BL,(-6L),0x9BF8956BL,0x9BF8956BL,(-6L),0x9BF8956BL,0x9BF8956BL};
                int i;
                l_635[2] |= func_71(l_524, (safe_add_func_int8_t_s_s(l_140, ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_66(l_628), p_60)), 6)), (func_71((safe_mod_func_int8_t_s_s(1L, ((l_554[6] ^ ((l_631[0][2][0] > (safe_lshift_func_int8_t_s_u(func_71((0xD0E54197L & g_120[1]), g_88, g_456, l_570, l_631[0][2][0]), 6))) , l_628)) , l_628))), g_35, p_58, p_59, p_59) | p_59))) < 255UL))), g_487[1][2], g_87, g_634[0][0][9]);
                if (g_249)
                {
                    int l_661 = 0L;
                    unsigned short l_697 = 7UL;
                    const char l_698 = (-10L);
                    for (l_475 = (-24); (l_475 <= 16); ++l_475)
                    {
                        char l_644 = 0xF9L;
                        l_555 = func_71((safe_rshift_func_uint16_t_u_u(((func_71(func_71(((((((safe_lshift_func_int16_t_s_s(g_368[0][6], 5)) , func_66(p_60)) > l_123) || (((func_71(p_59, (func_71(l_631[0][1][0], p_59, ((((safe_mod_func_int16_t_s_s(((func_71(l_644, p_59, p_58, p_58, g_530[1][0][1]) , g_87) , p_60), l_140)) != l_644) > 0xA6L) && p_58), g_68[1], g_103) ^ l_140), g_35, p_58, g_280) || p_58) <= p_58) & l_570)) ^ l_631[0][2][0]) , p_60), g_556, p_59, p_60, p_60), g_249, g_556, l_628, g_368[0][3]) & 0x30285C02L) != g_634[0][0][9]), p_60)), p_58, p_60, p_58, p_58);
                        g_81 ^= (((g_68[1] ^ (g_202 > ((g_634[0][0][9] | (g_88 == (safe_mod_func_int16_t_s_s(g_120[0], g_103)))) | p_58))) < ((~g_12) | (safe_sub_func_int8_t_s_s(p_60, p_59)))) == 0xBC614807L);
                        l_555 &= (safe_add_func_uint32_t_u_u((((((p_60 <= ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((p_60 , (g_103 <= (+(((((l_644 , (p_59 ^ 0xD95AL)) , g_196) ^ l_153) <= ((safe_add_func_int8_t_s_s((0x73L > g_346), 9UL)) , g_634[0][0][9])) >= 1UL)))), 0xD143L)), 10)) & 2UL)) <= 0xDC29L) , p_58) && p_59) ^ l_524), l_644));
                        g_280 &= ((safe_mod_func_uint8_t_u_u(p_59, g_556)) <= (safe_sub_func_uint8_t_u_u((l_661 , g_368[0][6]), (safe_sub_func_int8_t_s_s((g_456 , func_71(p_60, func_66(l_515), p_60, l_644, g_12)), 1L)))));
                    }
                    l_635[2] = (l_631[0][2][0] , (safe_rshift_func_uint16_t_u_u(func_71(func_71((0UL && (g_81 || 0x39L)), l_635[6], p_58, (safe_rshift_func_uint16_t_u_s((g_634[3][0][6] | (func_66((safe_mod_func_int8_t_s_s(p_58, func_66((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_530[1][0][3], p_58)), 6)))))) && g_120[1])), g_487[1][2])), l_628), p_59, g_282, p_60, l_631[0][2][0]), 12)));
                    if (l_661)
                    {
                        unsigned l_682[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_682[i] = 1UL;
                        l_635[0] = (((((l_635[2] ^ l_628) & g_634[2][0][8]) && g_556) | (func_66(((safe_lshift_func_int16_t_s_u((((!((((g_103 , (((p_59 != (safe_mod_func_uint16_t_u_u(((((safe_add_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(l_682[1], 0)) <= (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((((safe_mod_func_uint32_t_u_u((func_71(l_661, (0x73L > 0UL), g_530[4][0][3], l_631[0][2][0], p_59) != p_58), g_456)) , l_682[1]) ^ 255UL) ^ g_368[0][6]) , l_631[0][2][0]), g_282)), g_221))) != p_59), g_530[1][0][3])) , 0xFDL) | g_68[1]) != p_60), p_58))) , l_682[1]) ^ 0x72L)) & l_682[1]) & g_346) , 65526UL)) != l_682[0]) || l_554[6]), l_554[4])) && 1L)) || 0xB0L)) >= g_280);
                        return l_475;
                    }
                    else
                    {
                        unsigned l_699 = 0xBFB45780L;
                        l_555 = (((func_66((+(-1L))) || l_635[2]) , (p_59 && ((((l_443 >= 0x65L) , (-1L)) | p_60) , (((p_58 & 0xEBBCL) ^ l_689) == 9UL)))) , g_280);
                        g_81 = ((safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint16_t_u_u(p_59, (((0UL >= 0xDCL) <= ((safe_mod_func_int16_t_s_s(0x3665L, (-1L))) , (safe_rshift_func_uint8_t_u_s(func_66((1L || l_570)), 0)))) ^ (((((p_59 , l_697) || l_698) || l_699) || p_58) ^ p_60)))) > g_530[1][0][3]))) < p_58);
                    }
                }
                else
                {
                    unsigned l_704 = 0xA5BB5CF5L;
                    l_554[2] = (safe_rshift_func_uint16_t_u_u(p_60, 9));
                    g_280 = ((((safe_rshift_func_int8_t_s_s((l_704 , l_631[0][2][0]), 3)) || ((func_66(g_202) >= (0x81L || l_153)) , 0xF3CEL)) >= 1L) , (safe_rshift_func_uint8_t_u_u(l_123, l_707[3][1][0])));
                    --l_710;
                }
                ++g_715[0];
            }
            if ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_u(p_59, func_66(g_721))))))
            {
                int l_722 = 0xCC99A47AL;
                g_280 = (((func_71(p_59, p_60, (((((p_59 || l_722) , ((((p_59 | ((p_59 != (~l_722)) & (~p_60))) <= g_487[1][2]) ^ l_153) && p_59)) ^ g_368[0][6]) , l_631[0][2][0]) , 0x81E6L), p_60, l_689) >= l_710) <= p_58) == l_723);
                if (func_66(g_530[4][0][2]))
                {
                    for (p_59 = 0; (p_59 >= 50); p_59 = safe_add_func_uint32_t_u_u(p_59, 8))
                    {
                        return p_60;
                    }
                }
                else
                {
                    short l_734 = (-10L);
                    unsigned char l_735 = 1UL;
                    l_722 ^= (safe_lshift_func_int16_t_s_s((g_120[1] , (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(func_66(p_60), 4)), (g_12 ^ (safe_add_func_uint8_t_u_u(l_710, func_71(l_734, (l_734 && (((func_71(p_59, l_735, g_708[0][2][0], p_59, p_59) != 0x58CB2A15L) ^ p_59) , g_721)), l_554[5], p_60, l_524))))))), 1));
                    return l_555;
                }
                return p_60;
            }
            else
            {
                unsigned l_736[9] = {0x7FC866D2L,0x7FC866D2L,4294967289UL,0x7FC866D2L,0x7FC866D2L,4294967289UL,0x7FC866D2L,0x7FC866D2L,4294967289UL};
                int l_769 = 0xBBB32DF4L;
                unsigned l_792 = 0xD48B6396L;
                int i;
                l_736[0] = func_66(p_60);
                if ((((((safe_lshift_func_uint16_t_u_s(p_60, 11)) , (safe_sub_func_int16_t_s_s(p_60, ((((safe_rshift_func_uint16_t_u_u(func_66((g_346 , g_556)), 2)) & ((p_58 , ((safe_rshift_func_uint16_t_u_u(((g_81 ^ l_736[0]) >= p_60), g_12)) >= l_736[0])) == 0x45EC8790L)) == 0x229E0906L) , p_59)))) != p_59) ^ g_282) < 0L))
                {
                    short l_746 = (-3L);
                    if (l_745)
                    {
                        l_747[1][6][1] = l_746;
                    }
                    else
                    {
                        unsigned short l_754 = 65535UL;
                        unsigned char l_759 = 0x12L;
                        l_747[1][6][1] = 7L;
                        l_554[6] |= (safe_sub_func_int8_t_s_s((-1L), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((p_60 | ((l_754 | 0x4AL) & (safe_lshift_func_uint16_t_u_s(((((safe_add_func_uint16_t_u_u(((p_59 , (((l_713 > func_71(l_746, l_736[0], (l_759 == 1UL), l_736[0], g_88)) , 0x06L) && l_524)) | g_715[0]), g_487[1][2])) != g_120[0]) && l_736[6]) & g_441), l_746)))) != 1L), g_530[1][0][3])), p_60))));
                        l_747[8][2][0] = (!l_747[7][9][1]);
                    }
                }
                else
                {
                    short l_768 = 0L;
                    int l_785 = 0L;
                    if ((safe_rshift_func_uint16_t_u_s((((p_60 >= (p_59 >= (0L && (safe_rshift_func_int16_t_s_u(((safe_mod_func_int32_t_s_s(0L, p_58)) != g_634[0][0][9]), l_219))))) | ((!g_282) != ((func_71((safe_rshift_func_uint8_t_u_u(g_280, 2)), p_58, g_556, l_219, g_81) ^ 0x89L) & l_768))) == 1L), l_524)))
                    {
                        l_769 = 0xF8FAD69CL;
                        return p_58;
                    }
                    else
                    {
                        g_280 &= (l_768 == 0xB5A567FFL);
                    }
                    for (g_202 = 1; (g_202 == 22); g_202 = safe_add_func_uint16_t_u_u(g_202, 7))
                    {
                        unsigned short l_782[4][8][5] = {{{65535UL,1UL,1UL,65535UL,65527UL},{0x8EA3L,65535UL,65526UL,65535UL,0xA86BL},{4UL,65526UL,0x438EL,1UL,0x8EA3L},{65535UL,3UL,0x303EL,1UL,1UL},{0xFC31L,3UL,1UL,1UL,3UL},{65527UL,65526UL,0x8EA3L,3UL,0UL},{1UL,65535UL,1UL,3UL,4UL},{0UL,1UL,1UL,0x438EL,0xA86BL}},{{1UL,0x05DDL,0xFC31L,65527UL,0x438EL},{65527UL,65529UL,0x94E1L,3UL,1UL},{0xFC31L,0xA86BL,65526UL,1UL,1UL},{65535UL,0UL,0UL,65535UL,0x438EL},{4UL,65535UL,0xD1E0L,1UL,0xA86BL},{0x8EA3L,1UL,0x438EL,65526UL,65535UL},{0x438EL,0x303EL,9UL,65526UL,0UL},{0x05DDL,0xFC31L,65527UL,0x438EL,0xFC31L}},{{1UL,0UL,1UL,0x303EL,1UL},{0UL,0x94E1L,1UL,1UL,1UL},{1UL,1UL,65527UL,0x8EA3L,0xFDB1L},{1UL,0xFDB1L,9UL,1UL,0x8EA3L},{0x8EA3L,0xF04FL,1UL,1UL,0xD1E0L},{0x05DDL,0xFDB1L,1UL,0xFC31L,65526UL},{0x94E1L,1UL,0UL,0x94E1L,0x8EA3L},{65535UL,0x94E1L,1UL,65526UL,65528UL}},{{65535UL,0UL,4UL,0UL,65535UL},{0x94E1L,0xFC31L,9UL,0xD1E0L,1UL},{0x05DDL,0x303EL,0x94E1L,0x438EL,0x303EL},{0x8EA3L,0UL,1UL,0xFC31L,1UL},{1UL,0x438EL,1UL,0x5F65L,65535UL},{1UL,0UL,0x94E1L,0x8EA3L,65528UL},{0UL,0xFDB1L,0xA86BL,0x8EA3L,0x8EA3L},{1UL,0xBB49L,1UL,0x5F65L,65526UL}}};
                        int l_784 = 0L;
                        int i, j, k;
                        l_784 |= ((safe_sub_func_int8_t_s_s(((l_524 & ((((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(0x48C9L, 6)), (((g_487[0][2] , ((((g_346 , p_59) >= g_196) == l_768) >= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((func_66((((0xCF1BFCEEL <= 0x18BFE896L) || g_202) || l_782[1][5][4])) != 0x4AL), 1)), 12)))) , g_530[1][0][3]) , 0x80DA412BL))) && l_768) >= 0xCC72L) == l_783)) , 0xE6L), p_58)) & l_782[1][1][1]);
                        l_785 |= (~g_280);
                        g_280 = (g_715[1] ^ (safe_sub_func_int16_t_s_s(((p_60 & (g_103 > 1UL)) < g_530[1][0][3]), (~((safe_rshift_func_int8_t_s_u(((func_71(((g_269 , (safe_rshift_func_int8_t_s_u(l_782[1][5][4], 2))) && p_58), l_747[1][6][1], g_249, g_280, p_59) <= l_792) == g_456), g_530[2][0][2])) == g_202)))));
                        if (p_60)
                            continue;
                    }
                    --g_793[0];
                }
            }
        }
        else
        {
            short l_800 = 0x3FBCL;
            int l_810 = 1L;
            g_280 ^= 0x313742EDL;
            for (l_194 = 0; (l_194 != 20); l_194 = safe_add_func_int32_t_s_s(l_194, 8))
            {
                return p_59;
            }
            l_554[6] ^= (((safe_add_func_uint16_t_u_u((!(p_59 != func_66(l_800))), (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_456, ((((((p_59 ^ p_60) , (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_783 && (l_800 , (((-1L) == g_368[0][6]) || p_60))), l_113)), g_81))) ^ l_809) & g_708[5][0][4]) , l_800) != g_202))), l_515)))) & p_59) && g_196);
            --g_811;
        }
        for (l_689 = 29; (l_689 < 14); l_689 = safe_sub_func_int16_t_s_s(l_689, 1))
        {
            unsigned l_816 = 1UL;
            const int l_817 = 1L;
            short l_823 = 0L;
            int l_846 = 6L;
            int l_848 = 0x14B800EBL;
            int l_850 = (-2L);
            for (g_282 = 0; (g_282 <= 0); g_282 += 1)
            {
                short l_822 = 0x1A1AL;
                int l_842 = 5L;
                int i;
                if (g_715[g_282])
                {
                    g_81 = (((+g_530[1][0][3]) , 1L) || 0xE0L);
                }
                else
                {
                    l_816 = l_713;
                }
                if (l_817)
                {
                    int l_825 = 1L;
                    int l_829 = 1L;
                    if (g_12)
                    {
                        g_81 |= 0x77DD5079L;
                    }
                    else
                    {
                        l_554[6] = func_66(((l_817 && g_202) | ((((safe_add_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((p_59 > 0x0998L), l_822)) > l_822) && (p_60 || (((l_823 == p_60) | l_824) | p_59))) || g_368[0][6]), l_825)) && 0x4A2DL) > p_58) ^ 1L)));
                        g_280 = func_66(p_58);
                        g_280 = (((+(4294967288UL < l_817)) > ((255UL != (0x552FL < 65527UL)) && (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((l_825 ^ (l_707[2][1][4] | func_66(func_66(g_12)))))) >= 0xD56E7B42L), p_58)))) || 0x8AL);
                        g_830++;
                    }
                }
                else
                {
                    unsigned short l_841 = 65535UL;
                    int l_844[10] = {0x2ABC0D5DL,0x2ABC0D5DL,0L,0x6A30A662L,0x6A30A662L,0L,0L,0x6A30A662L,0x2ABC0D5DL,0x6A30A662L};
                    int i;
                    for (l_822 = 1; (l_822 >= 0); l_822 -= 1)
                    {
                        int l_843 = 1L;
                        int l_845 = 0x4B254AE4L;
                        int l_847 = 0x938FA67BL;
                        int l_852 = 1L;
                        int i;
                        g_81 = g_793[g_282];
                        l_842 = (safe_add_func_int32_t_s_s((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((+g_793[g_282]) && g_793[g_282]), l_824)), (p_59 | ((safe_sub_func_int32_t_s_s(p_59, (4294967295UL & (l_219 & ((((0x4AA2L < (g_456 >= p_58)) , l_817) != p_58) == 1UL))))) & l_841)))) < l_443) != 0L), p_60));
                        --g_853;
                        g_280 ^= 0x3AD5B7BFL;
                    }
                }
                g_81 ^= (0xFB43L != (((g_12 & (safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_556, 8L)), (safe_lshift_func_int16_t_s_u(g_793[0], 12))))) , (safe_rshift_func_uint16_t_u_u(((g_709 < ((safe_add_func_int32_t_s_s(((65535UL || (l_817 == 0xFF13BA3EL)) , 0x55B13C9DL), 7L)) | 0L)) , l_848), 7))) != p_59));
            }
            l_554[6] = g_708[3][0][3];
        }
    }
    else
    {
        int l_913[4][3][1] = {{{0x32931323L},{(-1L)},{0x32931323L}},{{(-1L)},{0x32931323L},{(-1L)}},{{0x32931323L},{(-1L)},{0x32931323L}},{{(-1L)},{0x32931323L},{(-1L)}}};
        int l_928 = 0x02B196E5L;
        int l_942[2];
        unsigned short l_1043 = 0xF13AL;
        unsigned char l_1059 = 0x49L;
        short l_1121[10];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_942[i] = 0x8A2EEC2FL;
        for (i = 0; i < 10; i++)
            l_1121[i] = 0L;
        for (l_123 = 0; (l_123 > 2); l_123 = safe_add_func_uint8_t_u_u(l_123, 7))
        {
            return g_103;
        }
        if ((((safe_rshift_func_uint16_t_u_u(g_793[0], 13)) | func_71((0x5B7FL && (safe_lshift_func_int8_t_s_u(((p_58 | (((0x7905D9EBL != 0xF499CD4EL) > ((0L <= ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(p_59)), (((((safe_rshift_func_uint16_t_u_s(l_745, func_66(g_196))) , p_59) >= 0x76L) == 0x88BBL) || p_58))) | (-1L))) > g_87)) & p_58)) || p_58), g_88))), p_59, g_346, p_58, g_530[4][0][0])) || (-2L)))
        {
            int l_894 = 1L;
            int l_1006[10][5][3] = {{{0xFA439CBEL,0x433DE9FFL,0x83CB817FL},{0xE65EB850L,(-1L),2L},{(-10L),(-3L),(-10L)},{(-1L),(-1L),5L},{0x91C9F122L,(-1L),7L}},{{2L,5L,0x84E35B55L},{0x2797CB0BL,(-9L),0xA700AD3EL},{2L,0L,7L},{0x91C9F122L,0x91C9F122L,(-3L)},{(-1L),(-1L),6L}},{{(-10L),0x2C5A81F7L,0x91C9F122L},{0xE65EB850L,0L,0x2346FA4AL},{0xFA439CBEL,(-10L),0x91C9F122L},{0x71E07AEBL,6L,6L},{0x1E09BD8BL,0x2797CB0BL,(-3L)}},{{8L,6L,7L},{1L,(-2L),0xA700AD3EL},{7L,0xE65EB850L,0x84E35B55L},{0x433DE9FFL,(-2L),7L},{5L,6L,5L}},{{(-2L),0x2797CB0BL,(-10L)},{(-1L),6L,2L},{7L,(-10L),0x83CB817FL},{(-1L),0L,0x4CD53E19L},{7L,0x2C5A81F7L,0xFA439CBEL}},{{(-1L),(-1L),6L},{0x83CB817FL,0x2797CB0BL,0L},{6L,7L,(-1L)},{0x91C9F122L,0x2C5A81F7L,(-10L)},{0x71E07AEBL,6L,(-1L)}},{{0xA700AD3EL,0L,0L},{(-1L),8L,0xE65EB850L},{(-2L),0x433DE9FFL,1L},{0x4CD53E19L,0x84E35B55L,6L},{1L,0x91C9F122L,7L}},{{(-1L),0x84E35B55L,0x14B8EA38L},{(-3L),0x433DE9FFL,(-3L)},{0x84E35B55L,8L,6L},{0x2797CB0BL,0L,0x2672EAB4L},{0x14B8EA38L,6L,2L}},{{0x1E09BD8BL,0x2C5A81F7L,(-1L)},{0x14B8EA38L,7L,0x71E07AEBL},{0x2797CB0BL,0x2797CB0BL,0x433DE9FFL},{0x84E35B55L,(-1L),0x2346FA4AL},{(-3L),0xFA439CBEL,0x2797CB0BL}},{{(-1L),0L,5L},{1L,(-3L),0x2797CB0BL},{0x4CD53E19L,0x2346FA4AL,0x2346FA4AL},{(-2L),0x1E09BD8BL,0x433DE9FFL},{(-1L),0xE65EB850L,0x71E07AEBL}}};
            unsigned l_1016 = 6UL;
            int i, j, k;
            for (l_713 = 12; (l_713 == 18); l_713 = safe_add_func_uint8_t_u_u(l_713, 6))
            {
                char l_885 = (-8L);
                int l_893 = (-2L);
                if (p_59)
                {
                    if ((((((safe_unary_minus_func_int8_t_s(((g_634[0][0][7] && func_66(((safe_lshift_func_int16_t_s_s(l_714, (p_58 ^ (safe_sub_func_int32_t_s_s(g_884, ((g_202 || (0xA6L >= g_88)) , 0xB246889AL)))))) , l_885))) , l_885))) >= 1UL) , l_885) , 0L) >= l_714))
                    {
                        l_140 ^= g_120[0];
                    }
                    else
                    {
                        return g_88;
                    }
                    for (l_475 = 0; (l_475 != 59); l_475 = safe_add_func_uint8_t_u_u(l_475, 8))
                    {
                        int l_890 = 0x2FCC9C58L;
                        l_894 = (safe_add_func_uint32_t_u_u(((!((g_487[0][0] == (((p_59 , 0x381FBCB6L) ^ l_890) || (+((l_885 | g_12) & p_58)))) & ((~(((safe_mod_func_int32_t_s_s(l_893, g_346)) || p_58) <= 0L)) == g_120[0]))) != 0xD2FA6E86L), l_153));
                        return p_60;
                    }
                    l_714 |= (p_59 && (safe_add_func_uint32_t_u_u(p_59, ((0x6B21L != (g_249 == (safe_rshift_func_int8_t_s_u((g_202 != ((p_58 , (g_851 > (1UL <= func_66(l_893)))) , l_894)), g_793[0])))) == 0xB25E65D4L))));
                }
                else
                {
                    unsigned l_899[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_899[i] = 0x963487B6L;
                    l_899[0]++;
                    for (g_851 = (-9); (g_851 >= 20); ++g_851)
                    {
                        char l_910 = 0x6CL;
                        int l_914 = 0L;
                        l_914 = ((((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_60, (safe_add_func_int8_t_s_s(((g_830 , 0x5F5CE873L) & l_910), (safe_lshift_func_uint8_t_u_u((func_71((p_59 < p_59), g_456, p_58, (l_913[3][2][0] & l_885), l_913[1][1][0]) ^ p_59), 0)))))), g_708[1][0][6])) , g_556) < g_851) && 0L);
                    }
                }
                return p_59;
            }
            if ((func_66(l_504) | g_249))
            {
                unsigned l_926 = 0UL;
                unsigned l_927 = 4294967293UL;
                l_928 |= (p_59 , ((func_71(((((((safe_lshift_func_int8_t_s_u((func_66((func_71(((func_66((func_71(func_66(p_58), (l_917 || (safe_lshift_func_int8_t_s_u(p_60, 4))), (safe_add_func_int8_t_s_s(g_249, ((safe_sub_func_int32_t_s_s((g_368[0][3] >= 0xD3E0L), (safe_rshift_func_uint8_t_u_s(l_913[3][2][0], 2)))) ^ 0x27BBL))), l_926, g_715[0]) , l_515)) & 0x8B556436L) || 65535UL), l_913[2][1][0], l_926, p_58, p_58) && p_59)) | g_530[1][0][3]), g_221)) > 1L) > p_60) == (-7L)) , p_58) , p_58), l_913[1][1][0], l_913[3][2][0], g_715[0], p_60) >= l_927) ^ p_60));
                for (g_269 = 0; (g_269 >= 1); g_269 = safe_add_func_uint32_t_u_u(g_269, 8))
                {
                    unsigned l_943 = 4294967287UL;
                    int l_944 = 4L;
                    g_280 = g_556;
                    for (g_884 = 0; (g_884 > 42); g_884 = safe_add_func_uint8_t_u_u(g_884, 1))
                    {
                        unsigned short l_933 = 0x499DL;
                        l_943 = (+func_66((l_933 , ((g_35 , (func_71(g_249, (4294967289UL <= p_59), g_884, func_71((func_66((0xDBL > ((safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((g_87 != (((g_368[2][4] , p_59) || 0xB2F6B3E2L) ^ 65535UL)) & l_933), 8UL)) == 0xA4D41CBEL), g_456)), g_87)) != 0x2FL) , l_942[0]), 15)) ^ 0x48E779B2L))) ^ g_87), g_88, g_884, p_58, p_59), l_515) ^ g_487[1][2])) , 0x2E2303E0L))));
                        l_944 &= (g_88 ^ g_81);
                    }
                }
            }
            else
            {
                unsigned l_977 = 4294967293UL;
                int l_978 = (-1L);
                int l_979 = 0xDE539E43L;
                char l_1017 = 0x86L;
                l_928 = 0L;
                for (l_443 = (-12); (l_443 <= 35); l_443 = safe_add_func_int32_t_s_s(l_443, 6))
                {
                    int l_949 = 0x6872B861L;
                    l_942[0] = ((safe_rshift_func_uint8_t_u_u(p_60, (l_949 , ((l_894 | (p_58 > ((safe_lshift_func_int8_t_s_s(0x99L, (func_66((safe_mod_func_int32_t_s_s(p_58, func_66((((p_60 <= p_60) || (+(safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_634[3][0][0], 3)), p_60)))) & p_60))))) <= g_196))) , p_60))) <= l_894)))) , g_708[6][0][4]);
                    g_849 = ((p_59 ^ (safe_sub_func_int8_t_s_s(((0xD2B58402L <= func_66(g_35)) || ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((((0x643EL && (safe_mod_func_int8_t_s_s(p_58, 0x83L))) && (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_103, 14)), l_949)), 0xFC2EDC84L))) != 0UL), l_949)), p_60)) == 248UL)), p_58))) != p_60);
                    g_849 = p_59;
                    if (func_66(g_793[0]))
                    {
                        l_978 = (0xFD87F193L & (((g_972 > ((0L <= ((func_66(func_71(g_87, (func_66(g_530[4][0][4]) <= (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((l_977 , ((l_978 | ((0xABL == g_368[1][3]) == g_708[0][1][5])) > l_913[3][2][0])) , l_979), g_530[4][0][5])) ^ p_58), 11))), p_59, g_884, l_949)) ^ l_894) == l_978)) > p_60)) == g_709) >= l_949));
                        g_81 = (((((safe_lshift_func_int16_t_s_s(((g_634[0][0][9] & (func_66(l_949) , 1UL)) > 1L), l_123)) && ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u((p_58 ^ (0xD05DL < (((safe_add_func_uint32_t_u_u((0x8C50L <= g_269), p_58)) != 0xA3D27B17L) | 65531UL))), 0)) >= l_979) || g_249), 0xE8L)) || 0UL) >= (-1L)), l_279)), g_715[0])) , p_58)) < g_368[0][6]) & 65529UL) ^ p_58);
                        g_280 = (g_634[0][0][8] > (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_487[2][3], (safe_mod_func_uint32_t_u_u(((!(safe_add_func_uint32_t_u_u(l_949, ((p_58 || (safe_unary_minus_func_uint16_t_u(g_634[3][0][9]))) <= p_58)))) == 0x0064L), ((safe_sub_func_int8_t_s_s(p_58, (((+5L) , l_949) || g_793[0]))) , 0x56A6B943L))))), g_120[1])));
                        if (g_884)
                            break;
                    }
                    else
                    {
                        char l_1003 = (-3L);
                        int l_1004 = 0xD935C6A2L;
                        int l_1005 = 0x97833F8DL;
                        l_555 |= l_949;
                        --l_1009[1][2][0];
                    }
                }
                g_849 &= (l_977 | l_928);
                if (((func_71((((l_555 <= ((!((safe_rshift_func_uint8_t_u_u((((-9L) >= func_71((0x7A8AB17BL & ((0UL != l_1006[0][0][0]) == ((safe_lshift_func_uint16_t_u_s((g_88 ^ 0xD6L), func_66((+l_942[0])))) , 9L))), g_811, g_35, l_894, g_221)) , p_59), l_979)) == g_280)) > 0xCFE89BF2L)) >= g_1008) , l_1016), l_1017, l_979, p_59, p_59) < 255UL) == l_219))
                {
                    return p_58;
                }
                else
                {
                    char l_1024 = 0xADL;
                    l_1006[7][4][2] |= (((safe_mod_func_int8_t_s_s(0x2DL, g_709)) >= ((g_249 ^ (+((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(g_120[0], 2)) != l_1024), g_1007)) , g_715[2]))) || 7UL)) || ((safe_sub_func_int16_t_s_s(((((-10L) >= 1UL) < (-1L)) , p_59), l_1024)) || g_634[3][0][2]));
                    l_714 = ((((0xBE58L > p_60) , (safe_sub_func_int32_t_s_s((l_515 || (-1L)), (safe_lshift_func_int16_t_s_u((p_59 | (safe_rshift_func_int8_t_s_s(l_928, func_66((safe_rshift_func_uint8_t_u_u(g_715[1], 1)))))), 12))))) && (safe_lshift_func_uint16_t_u_u(p_60, 14))) | (-6L));
                }
            }
            l_894 = (safe_sub_func_int8_t_s_s(((+(safe_unary_minus_func_uint8_t_u(l_928))) || l_1006[9][1][2]), (-9L)));
        }
        else
        {
            int l_1042 = 1L;
            for (g_87 = 0; (g_87 != 13); g_87 = safe_add_func_uint8_t_u_u(g_87, 5))
            {
                l_1043++;
                l_928 = g_811;
                for (l_443 = 23; (l_443 >= 58); ++l_443)
                {
                    for (l_123 = (-22); (l_123 != 14); l_123 = safe_add_func_uint8_t_u_u(l_123, 5))
                    {
                        return g_1050;
                    }
                }
                if (g_196)
                    break;
            }
            l_942[0] = (!(((0L > (1L > l_1042)) , ((func_66(l_1043) >= ((((safe_rshift_func_int8_t_s_u(0x9BL, l_928)) >= (safe_rshift_func_int16_t_s_s(g_441, 1))) & (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_1042, 0xA7L)), p_59))) & l_1059)) >= 0x6DCAL)) | l_1060[3]));
        }
        l_555 = 0L;
        for (g_1008 = 0; (g_1008 != (-27)); g_1008--)
        {
            int l_1077 = (-5L);
            int l_1094[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1094[i] = (-7L);
            l_555 ^= (l_714 <= p_59);
            for (l_1043 = 0; (l_1043 <= 16); l_1043++)
            {
                char l_1086 = (-1L);
                int l_1095 = 0xCDCA015AL;
                int l_1096 = 0x8A2E8445L;
                for (g_249 = 27; (g_249 < 2); g_249 = safe_sub_func_uint16_t_u_u(g_249, 1))
                {
                    unsigned l_1087 = 1UL;
                    int l_1097[4][10][4] = {{{(-1L),(-2L),(-1L),0x78FBDF5DL},{2L,0x60C41D9DL,4L,4L},{(-2L),1L,0xCAD269A5L,0x60C41D9DL},{0xC093D723L,(-6L),0xCAD269A5L,0x401171E2L},{(-2L),0x8F2F2492L,4L,0xCF22F0D9L},{2L,0xAC28E684L,(-1L),0x4F16AB84L},{0x401171E2L,0x4F16AB84L,0xCAD269A5L,0xAC28E684L},{2L,0xCF22F0D9L,1L,0L},{0xD9BA6D63L,(-1L),0x476E3317L,1L},{(-8L),0xD6DC0909L,0x78FBDF5DL,0xAC28E684L}},{{(-4L),(-8L),0xADCE9C2BL,0xD9BA6D63L},{0xD6DC0909L,0x0A196ADEL,0xC093D723L,4L},{0x72D345A1L,2L,0x0A196ADEL,0x671E270FL},{(-6L),0x4F16AB84L,0xBAF6AEC8L,(-4L)},{1L,0x9FEBF8ACL,0x401171E2L,0x60C41D9DL},{0x72D345A1L,(-4L),0x476E3317L,0x476E3317L},{0xCF22F0D9L,0xCF22F0D9L,0xADCE9C2BL,0xAD94A0B6L},{0x8F2F2492L,0L,1L,0xD9BA6D63L},{(-8L),(-6L),0xD7249327L,1L},{0x4F16AB84L,(-6L),1L,0xD9BA6D63L}},{{(-6L),0L,0x9FEBF8ACL,0xAD94A0B6L},{0x401171E2L,0xCF22F0D9L,0x0A196ADEL,0x476E3317L},{(-8L),(-4L),(-3L),0x60C41D9DL},{(-1L),0x9FEBF8ACL,0x78FBDF5DL,(-4L)},{0xB31680C9L,0x4F16AB84L,1L,0x671E270FL},{0xCF22F0D9L,2L,(-3L),4L},{0xD9BA6D63L,0x0A196ADEL,(-1L),0xD9BA6D63L},{0x401171E2L,(-8L),(-8L),0xAC28E684L},{1L,0xD6DC0909L,1L,1L},{(-8L),(-1L),0xF3CC11A7L,0xCAD269A5L}},{{0L,0L,0L,1L},{1L,0xB31680C9L,0xC4F0E4A0L,0xB31680C9L},{0x72D345A1L,0x8CFB1B39L,0xBAF6AEC8L,0xBBF1F13DL},{(-1L),0xD7249327L,0x286FFCBFL,1L},{0xC093D723L,(-1L),(-8L),1L},{0xC093D723L,0x5C42147EL,0x286FFCBFL,0x9FEBF8ACL},{(-1L),1L,0xBAF6AEC8L,(-7L)},{0x72D345A1L,0x671E270FL,0xC4F0E4A0L,0L},{1L,8L,0L,0xAC28E684L},{0L,0xC093D723L,0xF3CC11A7L,1L}}};
                    int i, j, k;
                    l_1087 = (safe_sub_func_int32_t_s_s((g_1008 , (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(l_942[0], (((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_1077, ((func_66((safe_mod_func_uint16_t_u_u(p_59, l_1077))) <= func_71((p_60 ^ (g_721 <= (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_60, 0)), 2)) < l_1059), 0xFD24L)))), g_811, l_1077, p_59, p_58)) <= 1L))) == 1L), 8UL)) ^ p_59) > 0x74D7D846L))) ^ p_59), l_1086))), g_721));
                    if (l_1009[1][2][0])
                        break;
                    for (l_1077 = 0; (l_1077 >= 22); l_1077 = safe_add_func_int16_t_s_s(l_1077, 2))
                    {
                        int l_1090[8] = {0xB86B2A6EL,0xB86B2A6EL,0xB86B2A6EL,0xB86B2A6EL,0xB86B2A6EL,0xB86B2A6EL,0xB86B2A6EL,0xB86B2A6EL};
                        int i;
                        g_1091--;
                        ++g_1099;
                    }
                    if (g_793[0])
                        break;
                }
                if (l_1096)
                    break;
                if (g_103)
                    break;
                l_942[0] = g_530[3][0][6];
            }
            for (g_1007 = 0; (g_1007 == (-23)); g_1007 = safe_sub_func_int16_t_s_s(g_1007, 5))
            {
                short l_1110 = 0x22C6L;
                int l_1128 = 0x5D90B272L;
                g_849 ^= ((safe_sub_func_uint8_t_u_u(p_58, (safe_mod_func_int8_t_s_s(l_1077, (safe_rshift_func_uint16_t_u_u(((p_59 != l_1110) || 65532UL), (safe_add_func_int8_t_s_s(0x2CL, (((g_280 >= ((safe_mod_func_int8_t_s_s((!l_1094[5]), (safe_mod_func_uint8_t_u_u(l_1110, l_1043)))) & g_853)) < (-8L)) > p_58))))))))) && 0x55324AD9L);
                g_849 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1121[9], (l_1094[7] >= (safe_rshift_func_uint8_t_u_u(func_66(p_59), 3))))), ((safe_lshift_func_uint16_t_u_s((g_556 < func_71(p_59, p_60, g_81, (safe_mod_func_uint16_t_u_u(p_59, g_1098)), g_81)), 4)) , l_913[1][0][0])));
                l_1128 ^= g_709;
            }
        }
    }
    return p_60;
}







static unsigned short func_66(int p_67)
{
    ++g_68[1];
    return p_67;
}







static short func_71(unsigned p_72, unsigned p_73, short p_74, char p_75, const short p_76)
{
    short l_78 = 0x44E0L;
    int l_82 = 0xE0BBE0E2L;
    int l_83 = (-3L);
    int l_84 = 0xC2878486L;
    int l_85 = 5L;
    int l_86[3][9] = {{0x3C042909L,0x3C042909L,5L,1L,5L,0x3C042909L,0x3C042909L,5L,1L},{4L,0xF1DB06D6L,4L,7L,7L,4L,0xF1DB06D6L,4L,7L},{9L,5L,5L,9L,4L,9L,5L,5L,9L}};
    int i, j;
    l_78 = 0xDCBD5F5AL;
    g_81 = (safe_rshift_func_uint8_t_u_u(p_74, 5));
    --g_88;
    return g_35;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_282, "g_282", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_368[i][j], "g_368[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_487[i][j], "g_487[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_530[i][j][k], "g_530[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_556, "g_556", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_634[i][j][k], "g_634[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_708[i][j][k], "g_708[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_709, "g_709", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_715[i], "g_715[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_721, "g_721", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_793[i], "g_793[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_851, "g_851", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_1007, "g_1007", print_hash_value);
    transparent_crc(g_1008, "g_1008", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1091, "g_1091", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1146, "g_1146", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    transparent_crc(g_1161, "g_1161", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1229, "g_1229", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1233[i][j], "g_1233[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1266[i][j][k], "g_1266[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1271[i][j][k], "g_1271[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1274, "g_1274", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    transparent_crc(g_1279, "g_1279", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    transparent_crc(g_1527, "g_1527", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1630[i], "g_1630[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1675, "g_1675", print_hash_value);
    transparent_crc(g_1727, "g_1727", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1763[i], "g_1763[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1764, "g_1764", print_hash_value);
    transparent_crc(g_1765, "g_1765", print_hash_value);
    transparent_crc(g_1766, "g_1766", print_hash_value);
    transparent_crc(g_1795, "g_1795", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1801[i], "g_1801[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1802, "g_1802", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1803[i], "g_1803[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1855, "g_1855", print_hash_value);
    transparent_crc(g_1856, "g_1856", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1858[i], "g_1858[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1859, "g_1859", print_hash_value);
    transparent_crc(g_1861, "g_1861", print_hash_value);
    transparent_crc(g_1921, "g_1921", print_hash_value);
    transparent_crc(g_1923, "g_1923", print_hash_value);
    transparent_crc(g_1970, "g_1970", print_hash_value);
    transparent_crc(g_2004, "g_2004", print_hash_value);
    transparent_crc(g_2005, "g_2005", print_hash_value);
    transparent_crc(g_2141, "g_2141", print_hash_value);
    transparent_crc(g_2148, "g_2148", print_hash_value);
    transparent_crc(g_2221, "g_2221", print_hash_value);
    transparent_crc(g_2230, "g_2230", print_hash_value);
    transparent_crc(g_2244, "g_2244", print_hash_value);
    transparent_crc(g_2302, "g_2302", print_hash_value);
    transparent_crc(g_2389, "g_2389", print_hash_value);
    transparent_crc(g_2390, "g_2390", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_2393[i], "g_2393[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2395, "g_2395", print_hash_value);
    transparent_crc(g_2434, "g_2434", print_hash_value);
    transparent_crc(g_2526, "g_2526", print_hash_value);
    transparent_crc(g_2531, "g_2531", print_hash_value);
    transparent_crc(g_2533, "g_2533", print_hash_value);
    transparent_crc(g_2534, "g_2534", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
