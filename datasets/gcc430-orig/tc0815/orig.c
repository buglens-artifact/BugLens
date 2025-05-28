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



static short g_8 = 0xFE04L;
static int g_33 = 0L;
static char g_34 = 0xD5L;
static unsigned g_38[4][9] = {{0UL,0x1230B63EL,0x2CD8491FL,1UL,1UL,0x2CD8491FL,0x1230B63EL,0UL,0UL},{0x531DEFCEL,0x4B693050L,0x531DEFCEL,4294967291UL,0x531DEFCEL,0x4B693050L,0x531DEFCEL,4294967291UL,0x531DEFCEL},{0UL,1UL,0x1230B63EL,0x1230B63EL,1UL,0UL,0x2CD8491FL,0x2CD8491FL,0UL},{0x1CC0C7FDL,4294967291UL,0xDF11CAF1L,4294967291UL,0x1CC0C7FDL,4294967291UL,0xDF11CAF1L,4294967291UL,0x1CC0C7FDL}};
static unsigned char g_53[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
static unsigned g_60 = 0xB8161DBFL;
static char g_64 = 1L;
static int g_65 = (-1L);
static char g_66[6] = {0x85L,0x85L,0x85L,0x85L,0x85L,0x85L};
static int g_68 = 0xDEF57315L;
static unsigned g_69 = 0x1CB45490L;
static char g_141[4][4][7] = {{{(-1L),0L,0x89L,0xFCL,1L,(-2L),(-5L)},{1L,0L,0L,1L,0x4CL,0x9AL,(-5L)},{(-1L),0xFCL,(-5L),0x95L,0x4CL,(-2L),0x9AL},{(-3L),0x3AL,(-5L),1L,1L,0x33L,0x33L}},{{(-3L),0xFCL,0L,0xFCL,(-3L),0x33L,0x9AL},{(-1L),0L,0x89L,0xFCL,1L,(-2L),(-5L)},{1L,0L,0L,1L,0x4CL,0x9AL,(-5L)},{(-1L),0xFCL,(-5L),0x95L,0x4CL,(-2L),0x9AL}},{{(-3L),0x3AL,(-5L),1L,1L,0x33L,0x33L},{(-3L),0xFCL,0L,0xFCL,(-3L),0x33L,0x9AL},{(-1L),0L,0x89L,0xFCL,1L,(-2L),(-5L)},{1L,0L,0L,1L,0x4CL,0x9AL,(-5L)}},{{(-1L),0xFCL,(-5L),0x95L,0x4CL,(-2L),0x9AL},{(-3L),0x3AL,0x29L,0x8DL,7L,(-1L),(-1L)},{0x7EL,(-7L),0x33L,(-7L),0x7EL,(-1L),(-7L)},{0x63L,1L,(-5L),(-7L),7L,0x4CL,1L}}};
static unsigned char g_151 = 0x7AL;
static const short g_175[1] = {0xEAE5L};
static short g_177[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static char g_206 = 0x4EL;
static unsigned char g_274 = 0x49L;
static unsigned g_281 = 0x0BCB55B0L;
static unsigned g_284 = 0xE1823D53L;
static char g_299 = 1L;
static unsigned short g_392 = 0x0054L;
static int g_401 = 0x7DA0E0BFL;
static unsigned char g_402 = 251UL;
static unsigned short g_499 = 7UL;
static short g_505 = 0x9663L;
static unsigned g_506 = 1UL;
static unsigned g_518 = 8UL;
static unsigned g_521 = 4294967288UL;
static int g_527 = (-1L);
static char g_556 = (-6L);
static int g_557 = (-10L);
static short g_558[3] = {0L,0L,0L};
static short g_559 = 0x5550L;
static int g_560 = 0x0028AEE4L;
static unsigned g_561 = 0UL;
static int g_604 = (-1L);
static short g_644[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
static unsigned g_645 = 0x319C0927L;
static unsigned char g_651 = 0xA2L;
static int g_692 = 4L;
static short g_693[1][8][6] = {{{(-7L),(-5L),(-1L),(-5L),(-7L),(-7L)},{0xEC7FL,(-5L),(-5L),0xEC7FL,(-1L),0xEC7FL},{0xEC7FL,(-1L),0xEC7FL,(-5L),(-5L),0xEC7FL},{(-7L),(-7L),(-5L),(-1L),(-5L),(-7L)},{(-5L),(-1L),(-1L),(-1L),(-1L),(-5L)},{(-7L),(-5L),(-1L),(-5L),(-7L),(-7L)},{0xEC7FL,(-5L),(-5L),0xEC7FL,(-1L),0xEC7FL},{0xEC7FL,(-1L),0xEC7FL,(-5L),(-5L),0xEC7FL}}};
static unsigned g_694 = 4294967286UL;
static int g_699 = 1L;
static unsigned char g_700 = 0UL;
static char g_705 = (-6L);
static unsigned g_708 = 0xE89694E8L;
static unsigned char g_724[6][9][2] = {{{0x26L,0xD3L},{0x26L,7UL},{0x88L,0UL},{0x6EL,255UL},{0x32L,0xD3L},{1UL,255UL},{0x26L,1UL},{0UL,255UL},{0UL,1UL}},{{0x26L,255UL},{1UL,0xD3L},{0x32L,0xD3L},{1UL,255UL},{0x26L,1UL},{0UL,255UL},{0UL,1UL},{0x26L,255UL},{1UL,0xD3L}},{{0x32L,0xD3L},{1UL,255UL},{0x26L,1UL},{0UL,255UL},{0UL,1UL},{0x26L,255UL},{1UL,0xD3L},{0x32L,0xD3L},{1UL,255UL}},{{0x26L,1UL},{0UL,255UL},{0UL,1UL},{0x26L,255UL},{1UL,0xD3L},{0x32L,0xD3L},{1UL,255UL},{0x26L,1UL},{0UL,255UL}},{{0UL,1UL},{0x26L,255UL},{1UL,0xD3L},{0x32L,0xD3L},{1UL,255UL},{0x26L,1UL},{0UL,255UL},{0UL,1UL},{0x26L,255UL}},{{1UL,0xD3L},{0x32L,0xD3L},{1UL,255UL},{0x26L,1UL},{0UL,255UL},{0UL,1UL},{0x26L,7UL},{0UL,7UL},{1UL,7UL}}};
static char g_807 = 0x42L;
static char g_808[3][3] = {{0x9EL,0x9EL,0x9EL},{0x9EL,0x9EL,0x9EL},{0x9EL,0x9EL,0x9EL}};
static char g_893[1] = {0xFFL};
static unsigned g_894 = 4UL;
static unsigned short g_906 = 0xA5BDL;
static int g_935 = (-1L);
static unsigned g_936 = 4294967287UL;
static unsigned g_940 = 1UL;
static int g_971[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
static unsigned g_974 = 9UL;
static short g_990[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static const char g_1095 = (-7L);
static unsigned char g_1115[6] = {0x66L,0x66L,0x66L,0x66L,0x66L,0x66L};
static int g_1153 = 0xA7D866C4L;
static int g_1281 = 0xCE357D97L;
static int g_1282[6][2] = {{0x71D8839BL,0x4D575D29L},{0x4D575D29L,0x71D8839BL},{0x4D575D29L,0x4D575D29L},{0x71D8839BL,0x4D575D29L},{0x4D575D29L,0x71D8839BL},{0x4D575D29L,0x4D575D29L}};
static const short g_1310 = 0x1FD3L;
static unsigned g_1504[8][2] = {{0xB9982099L,1UL},{0x0E1F3367L,4294967295UL},{0x0E1F3367L,1UL},{0xB9982099L,0xB9982099L},{1UL,0x0E1F3367L},{4294967295UL,0x0E1F3367L},{1UL,0xB9982099L},{0xB9982099L,1UL}};
static const unsigned char g_1644 = 0xA5L;
static unsigned g_1691[4][5][5] = {{{0xF8DF5455L,0x0A12CC61L,0x7D2DE279L,0x3F2291F6L,0x40F0651BL},{0xF8DF5455L,0x40F0651BL,0UL,4294967295UL,4294967295UL},{0x3F2291F6L,0x676CBBEDL,0x3F2291F6L,0x0A12CC61L,0x40F0651BL},{0xAFA65501L,4294967295UL,0x40F0651BL,0x0A12CC61L,0x3F2291F6L},{0x40F0651BL,0UL,4294967295UL,4294967295UL,0UL}},{{0UL,9UL,0x40F0651BL,0x3F2291F6L,0x7D2DE279L},{0x3F2291F6L,0x05ACFF76L,0xF8DF5455L,0xAFA65501L,0x427F52F8L},{0x7D2DE279L,9UL,9UL,0x7D2DE279L,0xAFA65501L},{0x3F2291F6L,0x0A12CC61L,0x40F0651BL,4294967295UL,0xAFA65501L},{9UL,0x3F2291F6L,0x427F52F8L,0x1102DC74L,0x427F52F8L}},{{0x1102DC74L,0x1102DC74L,0xAFA65501L,4294967295UL,0x40F0651BL},{0x676CBBEDL,0UL,0xAFA65501L,0x7D2DE279L,9UL},{0xF8DF5455L,0xAFA65501L,0x427F52F8L,0xAFA65501L,0xF8DF5455L},{4294967295UL,0UL,0x40F0651BL,0xF8DF5455L,0x1102DC74L},{4294967295UL,0x1102DC74L,9UL,0x0A12CC61L,0x0A12CC61L}},{{0xF8DF5455L,0x3F2291F6L,0xF8DF5455L,0UL,0x1102DC74L},{0x676CBBEDL,0x0A12CC61L,0x1102DC74L,0UL,0xF8DF5455L},{0x1102DC74L,9UL,0x0A12CC61L,0x0A12CC61L,9UL},{9UL,0x05ACFF76L,0x1102DC74L,0xF8DF5455L,0x40F0651BL},{0x3F2291F6L,0x05ACFF76L,0xF8DF5455L,0xAFA65501L,0x427F52F8L}}};
static int g_1828[8] = {0x53CC4C64L,0x53CC4C64L,0x53CC4C64L,0x53CC4C64L,0x53CC4C64L,0x53CC4C64L,0x53CC4C64L,0x53CC4C64L};
static unsigned char g_1829 = 0xDFL;



static unsigned func_1(void);
static unsigned char func_2(unsigned short p_3, int p_4, unsigned p_5, unsigned p_6, short p_7);
static int func_14(int p_15, unsigned short p_16, const int p_17, int p_18, int p_19);
static int func_24(unsigned char p_25, char p_26);
static unsigned short func_43(unsigned short p_44, unsigned char p_45);
static unsigned short func_46(unsigned p_47, unsigned char p_48, int p_49);
static unsigned char func_55(unsigned char p_56);
static unsigned char func_86(const int p_87, int p_88, char p_89, const char p_90, int p_91);
static unsigned short func_113(short p_114, unsigned char p_115, const unsigned char p_116, int p_117);
static int func_118(unsigned p_119);
static unsigned func_1(void)
{
    const int l_11 = 0x7BEDEDB5L;
    int l_1466 = 0x0194C2EEL;
    char l_1685 = 0x81L;
    short l_1713 = 0x70F5L;
    unsigned short l_1745 = 0xA35EL;
    int l_1777 = 0xA42F2024L;
    int l_1778 = 3L;
    int l_1780 = 0x38222043L;
    int l_1784[3][8] = {{(-1L),1L,(-1L),0x6DC38E92L,0x70DB2DCEL,0x70DB2DCEL,0x6DC38E92L,(-1L)},{1L,1L,0x70DB2DCEL,0xA1C21E82L,(-1L),0xA1C21E82L,0x70DB2DCEL,1L},{1L,(-1L),0xA1C21E82L,0x6DC38E92L,0x6DC38E92L,0xA1C21E82L,5L,0x70DB2DCEL}};
    unsigned l_1830 = 0x2CE1090BL;
    int l_1870 = 0x7F0F3CA0L;
    int i, j;
lbl_1697:
    g_1282[4][0] = ((g_1115[5] = func_2(g_8, (l_1466 = (((l_11 >= (safe_add_func_uint8_t_u_u(l_11, (-10L)))) == (func_14((safe_lshift_func_uint8_t_u_s(l_11, 7)), (!(safe_add_func_int32_t_s_s(func_24(g_8, ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(1L, ((250UL | (safe_rshift_func_int8_t_s_s(l_11, g_8))) >= g_8))), 0xA38DL)) | 0x1F7DL)), l_11))), g_644[1], l_11, l_11) > 4294967295UL)) >= g_1310)), l_11, l_11, g_1095)) && g_936);
    for (g_906 = 0; (g_906 > 27); g_906++)
    {
        unsigned l_1668 = 0x1996C16EL;
        unsigned l_1686 = 0xBC32ABB1L;
        unsigned l_1699 = 4294967291UL;
        int l_1738 = 1L;
        int l_1779 = 3L;
        int l_1783 = (-10L);
        int l_1860[7][5] = {{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL},{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL},{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL},{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL},{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL},{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL},{6L,6L,0xF29A006CL,0x7F18192CL,0xF29A006CL}};
        int i, j;
        ++l_1668;
        g_699 = (((g_651 = func_55((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((255UL | (safe_lshift_func_uint16_t_u_s(g_53[2], l_1466))), (safe_sub_func_int16_t_s_s((func_55(l_1668) < (((safe_mod_func_int8_t_s_s(5L, l_1668)) >= (safe_mod_func_uint8_t_u_u((l_1685 = (safe_add_func_uint16_t_u_u(l_1466, g_1115[0]))), g_392))) >= g_518)), l_1668)))), 7)))) >= l_1686) | g_906);
        for (g_68 = 0; (g_68 < (-8)); g_68 = safe_sub_func_uint16_t_u_u(g_68, 5))
        {
            unsigned char l_1696[2];
            int l_1698[2][7][5] = {{{1L,1L,(-1L),(-1L),1L},{1L,1L,1L,1L,(-1L)},{1L,1L,0x3E6E2DCEL,1L,1L},{1L,(-1L),1L,(-1L),(-1L)},{1L,1L,1L,1L,(-1L)},{1L,1L,0x3E6E2DCEL,(-1L),(-1L)},{1L,1L,1L,(-1L),1L}},{{(-1L),1L,(-1L),(-1L),(-1L)},{(-1L),(-1L),0x3E6E2DCEL,1L,1L},{1L,1L,(-1L),(-1L),1L},{1L,1L,1L,1L,0x010E20AFL},{(-1L),1L,1L,1L,(-1L)},{0x3E6E2DCEL,1L,0x406391BFL,0x010E20AFL,1L},{(-1L),0x406391BFL,0x406391BFL,(-1L),0x010E20AFL}}};
            const short l_1716 = 0xA63DL;
            const short l_1799 = 0L;
            char l_1800 = 2L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1696[i] = 5UL;
            for (l_1466 = 0; (l_1466 >= (-10)); --l_1466)
            {
                g_1691[2][1][0] = 0xE99907BFL;
            }
            if ((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(g_700, (g_177[1] = 7L))), (+(func_86(g_644[1], (g_1153 = g_558[0]), l_1686, (g_808[2][1] = g_402), ((-1L) ^ (!(250UL || (l_1696[0] != l_1685))))) > 0xC181L)))))
            {
                if (g_699)
                    goto lbl_1697;
                l_1698[1][0][1] = l_1668;
            }
            else
            {
                unsigned l_1700[2][10] = {{6UL,6UL,1UL,9UL,1UL,6UL,6UL,1UL,9UL,1UL},{6UL,6UL,1UL,9UL,1UL,6UL,6UL,1UL,9UL,1UL}};
                int l_1718 = (-1L);
                int l_1741 = 0x505029DFL;
                int l_1744 = 0xD3FAED55L;
                int i, j;
                l_1466 ^= l_1699;
                if (l_1700[0][3])
                {
                    for (g_557 = (-16); (g_557 != (-22)); g_557--)
                    {
                        int l_1717 = 0xF6153E9AL;
                        l_1717 ^= ((((g_175[0] ^ g_1310) == g_1282[0][1]) & l_1668) & (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_177[7] ^= (0xB468L != (safe_mul_func_uint8_t_u_u(1UL, (safe_lshift_func_int16_t_s_s((+((l_1713 == (1L == (l_1716 != g_936))) > 0xFAL)), l_1698[1][0][1])))))), 10)), 65527UL)));
                        if (g_33)
                            goto lbl_1697;
                    }
                    if (g_66[2])
                        break;
                }
                else
                {
                    const char l_1721 = 0xDEL;
                    g_401 = ((1L ^ g_808[2][0]) > ((l_1718 = l_1713) || g_1691[2][1][0]));
                    for (g_69 = 0; (g_69 > 3); g_69 = safe_add_func_uint16_t_u_u(g_69, 5))
                    {
                        unsigned l_1742 = 0UL;
                        int l_1743[9][9];
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_1743[i][j] = 0xAF216DFBL;
                        }
                        l_1743[7][4] = (l_1718 != func_86(l_1721, (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((func_86((0x6DF9F8EBL < ((+g_560) < ((safe_add_func_uint8_t_u_u((0x1773L > ((safe_sub_func_uint16_t_u_u((g_141[3][3][1] <= (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((g_699 = (l_1700[1][2] >= (l_1738 ^= g_527))) | (safe_add_func_uint32_t_u_u((l_1741 = l_1698[1][0][1]), g_38[3][5]))), g_1504[0][1])), g_935)) && g_401) > l_1742)), 65530UL)) == 0L)), 0x63L)) < l_1700[0][3]))), g_38[2][3], g_1095, g_604, g_38[1][2]) & 0UL), 0x5170L)), g_177[1])), g_1282[3][1], g_906, g_651));
                        if (g_34)
                            continue;
                        l_1745--;
                    }
                }
                g_557 ^= l_1466;
                if (g_1504[4][1])
                    continue;
            }
            for (g_281 = 0; (g_281 <= 5); g_281 += 1)
            {
                int i;
                if (g_66[g_281])
                {
                    for (g_694 = 0; (g_694 <= 5); g_694 += 1)
                    {
                        unsigned char l_1748 = 0x1BL;
                        int i;
                        --l_1748;
                        if (g_66[g_281])
                            break;
                    }
                    return l_1699;
                }
                else
                {
                    char l_1759 = 0x60L;
                    int l_1760 = 8L;
                    l_1760 = ((g_401 = (safe_sub_func_int32_t_s_s(l_1466, ((g_1310 || ((safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((safe_mod_func_int32_t_s_s(l_1698[1][0][1], func_86(g_177[1], g_645, l_1759, g_177[1], g_807))), g_66[1])), g_558[0])) && (-8L))) < 1UL)))) & 0x40186D06L);
                    if (l_1696[0])
                        continue;
                }
                g_699 = 0x86DE9F42L;
                if (g_34)
                    break;
            }
            if ((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(0x39A42A16L, func_118(g_693[0][1][4]))) | (safe_add_func_int8_t_s_s(g_53[0], ((safe_sub_func_uint32_t_u_u(l_1699, ((((l_11 >= (safe_lshift_func_int16_t_s_u((g_936 ^ (safe_mod_func_int16_t_s_s((-1L), ((g_1115[0] & g_708) ^ g_894)))), 13))) < g_175[0]) ^ l_1713) < l_1777))) >= l_1698[1][4][1])))), l_1745)), 246UL)), l_1668)))
            {
                short l_1781 = 1L;
                int l_1782 = 0L;
                int l_1785[3];
                unsigned l_1786 = 0x269B42AFL;
                int i;
                for (i = 0; i < 3; i++)
                    l_1785[i] = 0x6BAF78E9L;
                ++l_1786;
                if (l_1699)
                {
                    if (l_1716)
                        goto lbl_1697;
                }
                else
                {
                    unsigned l_1790[10][5] = {{4294967295UL,4294967295UL,0UL,4294967286UL,0UL},{4294967295UL,4294967295UL,0x24427D40L,0x7EAB8070L,0x24427D40L},{4294967295UL,4294967295UL,0UL,4294967286UL,0UL},{4294967295UL,4294967295UL,0x24427D40L,0x7EAB8070L,0x24427D40L},{4294967295UL,4294967295UL,0UL,4294967286UL,0UL},{4294967295UL,4294967295UL,0x24427D40L,0x7EAB8070L,0x24427D40L},{4294967295UL,4294967295UL,0UL,4294967286UL,0UL},{4294967295UL,4294967295UL,0x24427D40L,0x7EAB8070L,0x24427D40L},{4294967295UL,4294967295UL,0UL,4294967286UL,0UL},{4294967295UL,4294967295UL,0x24427D40L,0x7EAB8070L,0x24427D40L}};
                    unsigned char l_1796 = 0x8EL;
                    int i, j;
                    if ((((g_33 <= 1UL) != l_1668) ^ 0xB4DBC0FCL))
                    {
                        return l_1698[0][5][0];
                    }
                    else
                    {
                        char l_1789 = 0x2CL;
                        g_1282[3][1] = (g_705 != 0x9071L);
                        if (g_990[6])
                            continue;
                        ++l_1790[1][0];
                    }
                    for (l_1782 = 0; (l_1782 <= (-23)); --l_1782)
                    {
                        int l_1795 = 0xED0EEECAL;
                        l_1796--;
                        l_1777 = (((l_1799 == (l_1738 = (~l_1800))) == 0x5FL) & l_1716);
                        if (g_558[0])
                            continue;
                    }
                    if (g_499)
                        continue;
                }
                g_65 = 0x9AE77C2EL;
                g_401 = ((safe_sub_func_uint8_t_u_u((~1UL), g_65)) <= (g_60 = 4294967293UL));
            }
            else
            {
                unsigned l_1803 = 0x4E78743CL;
                int l_1850 = (-1L);
                int l_1852 = 0x1165AFBCL;
                int l_1853[8][10][3] = {{{4L,(-3L),0x5473B86EL},{0xC2235A9AL,0x2CA9BF06L,0xCD4301D0L},{0x1039864DL,1L,6L},{5L,0x2CA9BF06L,1L},{0xC2235A9AL,6L,7L},{0L,2L,6L},{0x68530DC3L,(-1L),6L},{5L,(-2L),0L},{0x68530DC3L,0x5473B86EL,1L},{0L,6L,(-3L)}},{{0xC2235A9AL,2L,(-3L)},{0xEAA0DA1EL,(-3L),(-3L)},{5L,0xAB701EBAL,(-3L)},{0x3FE75952L,0xCD4301D0L,1L},{0xF3A9DBE0L,0xD9F99100L,0L},{5L,2L,6L},{0xBB979187L,0xD9F99100L,6L},{5L,0xCD4301D0L,7L},{0x1FC283BAL,0xAB701EBAL,1L},{0x78F457C4L,(-3L),0x78185459L}},{{0x78F457C4L,2L,(-1L)},{0x1FC283BAL,6L,0xD9F99100L},{5L,0x5473B86EL,(-3L)},{0xBB979187L,(-2L),1L},{5L,(-1L),(-3L)},{0xF3A9DBE0L,2L,0xD9F99100L},{0x3FE75952L,6L,(-1L)},{5L,0x2CA9BF06L,0x78185459L},{0xEAA0DA1EL,0x2CA9BF06L,1L},{0xC2235A9AL,6L,7L}},{{0L,2L,6L},{0x68530DC3L,(-1L),6L},{5L,(-2L),0L},{0x68530DC3L,0x5473B86EL,1L},{0L,6L,(-3L)},{0x2CA9BF06L,0x5D6E4869L,0L},{0xD9F99100L,0L,0L},{6L,(-2L),0xF7ECFB90L},{6L,0xD5BE35B5L,0x085101D6L},{0xAB701EBAL,0x90845B7EL,0L}},{{0x5473B86EL,0x5D6E4869L,(-5L)},{(-3L),0x90845B7EL,0x9C4A5F8DL},{6L,0xD5BE35B5L,0x37A31936L},{(-1L),(-2L),0x085101D6L},{0xCD4301D0L,0L,0xF2445130L},{0xCD4301D0L,0x5D6E4869L,0x116B4827L},{(-1L),(-5L),0x90845B7EL},{6L,0x37AE8773L,(-1L)},{(-3L),0xA9A28BE8L,0x085101D6L},{0x5473B86EL,0x116B4827L,(-1L)}},{{0xAB701EBAL,0x5D6E4869L,0x90845B7EL},{6L,0x9C4A5F8DL,0x116B4827L},{6L,0xB6BAB9F5L,0xF2445130L},{0xD9F99100L,0xB6BAB9F5L,0x085101D6L},{0x2CA9BF06L,0x9C4A5F8DL,0x37A31936L},{(-2L),0x5D6E4869L,0x9C4A5F8DL},{6L,0x116B4827L,(-5L)},{6L,0xA9A28BE8L,0L},{6L,0x37AE8773L,0x085101D6L},{(-2L),(-5L),0xF7ECFB90L}},{{0x2CA9BF06L,0x5D6E4869L,0L},{0xD9F99100L,0L,0L},{6L,(-2L),0xF7ECFB90L},{6L,0xD5BE35B5L,0x085101D6L},{0xAB701EBAL,0x90845B7EL,0L},{0x5473B86EL,0x5D6E4869L,(-5L)},{(-3L),0x90845B7EL,(-1L)},{0x40F3B2A4L,0x116B4827L,0xCD619461L},{7L,(-5L),0x37AE8773L},{(-1L),0xF7ECFB90L,(-6L)}},{{(-1L),(-1L),0x37A31936L},{7L,0xF2445130L,0L},{0x40F3B2A4L,0x90845B7EL,0x5D6E4869L},{(-3L),0L,0x37AE8773L},{0xD9F99100L,0x37A31936L,0x5D6E4869L},{6L,(-1L),0L},{(-3L),(-1L),0x37A31936L},{0x40F3B2A4L,0x9C4A5F8DL,(-6L)},{0L,0x9C4A5F8DL,0x37AE8773L},{6L,(-1L),0xCD619461L}}};
                short l_1867 = 0x33AFL;
                int i, j, k;
                l_1803++;
                l_1698[1][4][4] = (safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((l_1778 = (safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u(func_55((l_1777 <= (safe_add_func_uint8_t_u_u((g_53[2] ^= ((((((g_1691[2][1][0] |= (g_708 && l_11)) >= g_560) | (safe_mul_func_int16_t_s_s((0x531BL | ((safe_sub_func_uint16_t_u_u((g_392 = g_66[1]), 0UL)) >= ((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((g_499 = g_64), (g_1829 &= ((safe_lshift_func_int16_t_s_u((l_1668 == g_299), g_1828[5])) < 0xE965L)))) == l_1830), 0x90L)), g_724[1][6][0])) != l_1803))), g_177[1]))) || l_1784[0][5]) && 4L) | 0xAF37L)), g_645)))), l_1686)), g_505))), l_1800)), l_1803));
                for (g_560 = (-21); (g_560 >= 20); g_560++)
                {
                    short l_1835 = 1L;
                    int l_1851 = 1L;
                    for (l_1778 = 5; (l_1778 >= 0); l_1778 -= 1)
                    {
                        int i;
                        return g_66[l_1778];
                    }
                    if ((safe_div_func_uint32_t_u_u(((g_66[1] & (g_518--)) | (((safe_mul_func_uint8_t_u_u((l_1784[0][5] = (g_53[2] = l_1835)), (((1L >= ((l_1698[1][0][1] |= (~l_1830)) > (safe_lshift_func_uint8_t_u_s(func_55((~(safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_11 >= l_1777), g_66[2])), (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1696[0] >= ((g_894 |= l_1835) | (-3L))), g_65)), g_1644)))))), g_1828[7])))) >= g_693[0][5][0]) || l_1686))) == l_1835) > l_1685)), l_1696[1])))
                    {
                        unsigned l_1854 = 0x03FD2822L;
                        l_1850 = g_521;
                        ++l_1854;
                        if (l_1854)
                            continue;
                        if (g_1644)
                            break;
                    }
                    else
                    {
                        unsigned char l_1857 = 0UL;
                        return l_1857;
                    }
                    l_1777 |= (safe_sub_func_uint16_t_u_u(l_1860[1][1], (l_1850 > (l_1867 = func_86(g_692, (0x3FL == (+l_1686)), g_141[2][1][1], l_1668, (l_1783 = (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((g_808[1][0] = (-1L)), (l_1784[0][0] > 0x93B62061L))), 0)), l_1852))))))));
                }
                if (l_1686)
                    break;
            }
        }
    }
    g_1282[0][0] = (((g_693[0][3][4] <= (l_1713 && ((-7L) < (((g_808[1][1] = ((l_1777 |= (~g_1504[5][1])) | (safe_lshift_func_int8_t_s_s(g_68, func_55(func_118(g_971[2])))))) > ((--g_651) || (safe_rshift_func_int8_t_s_s(g_724[1][1][0], 5)))) ^ 0xC9B3L)))) < g_499) <= 0L);
    return g_1282[3][1];
}







static unsigned char func_2(unsigned short p_3, int p_4, unsigned p_5, unsigned p_6, short p_7)
{
    short l_1469 = 0xFE96L;
    unsigned short l_1470 = 0xF2CFL;
    unsigned l_1475[10][4] = {{0x746ABF88L,7UL,7UL,0x746ABF88L},{7UL,0x746ABF88L,7UL,7UL},{0x746ABF88L,0x746ABF88L,9UL,0x746ABF88L},{0x746ABF88L,7UL,7UL,0x746ABF88L},{7UL,0x746ABF88L,7UL,7UL},{0x746ABF88L,0x746ABF88L,9UL,0x746ABF88L},{0x746ABF88L,7UL,7UL,0x746ABF88L},{7UL,0x746ABF88L,7UL,7UL},{0x746ABF88L,0x746ABF88L,9UL,0x746ABF88L},{0x746ABF88L,7UL,7UL,0x746ABF88L}};
    int l_1478 = 0x80BAE0D2L;
    int l_1523 = 1L;
    int l_1539 = 0xF272E329L;
    int l_1654 = (-4L);
    int l_1656 = (-3L);
    int l_1658 = 0L;
    int l_1659 = 1L;
    int l_1662 = 0xCEBCB9B8L;
    unsigned l_1663 = 0x8BE20611L;
    int i, j;
    l_1475[4][0] = (safe_mod_func_int8_t_s_s((((((g_893[0] = g_971[4]) > func_118((!(l_1470 &= l_1469)))) & ((p_7 <= g_518) ^ l_1469)) | (--g_906)) ^ g_505), (safe_sub_func_uint8_t_u_u(g_808[2][1], (2UL && g_34)))));
    if (p_6)
    {
        char l_1501 = (-5L);
        int l_1505 = (-1L);
lbl_1479:
        for (g_906 = (-24); (g_906 <= 22); ++g_906)
        {
            l_1478 = l_1469;
            if (g_69)
                goto lbl_1479;
        }
        for (g_556 = 0; (g_556 == 17); g_556++)
        {
            int l_1498 = 0x5E607B9CL;
            g_1504[4][1] = (safe_sub_func_uint8_t_u_u(p_4, (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((0xB693L > (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((g_392 && (l_1498 = g_1282[3][1])) | (((safe_sub_func_uint32_t_u_u(l_1501, (l_1469 == ((safe_div_func_int8_t_s_s(func_86(p_3, (255UL | ((0x7AL && p_4) && l_1501)), l_1470, g_990[1], g_604), 1L)) == (-1L))))) >= 0x7AL) & p_5)), (-3L))), p_4)), 0UL)), g_705))), 0x1E4BL)), p_6))));
            for (g_505 = 3; (g_505 >= 0); g_505 -= 1)
            {
                g_557 = l_1501;
                if (g_699)
                    continue;
                g_557 = g_1115[4];
                for (g_604 = 0; (g_604 <= 3); g_604 += 1)
                {
                    int i, j, k;
                    l_1505 = g_141[g_505][g_604][(g_604 + 1)];
                    g_65 = (l_1478 = 0x4F0979E3L);
                }
                for (g_299 = 3; (g_299 >= 0); g_299 -= 1)
                {
                    int i, j, k;
                    return g_141[g_299][g_299][(g_299 + 2)];
                }
            }
            g_1282[4][1] = (0x0B75L <= (p_7 && (+(p_4 != p_5))));
        }
    }
    else
    {
        unsigned char l_1508 = 0UL;
        int l_1509 = 0x242413A4L;
        int l_1611 = 0x0C71C584L;
        int l_1613 = 0x0CDE1AB2L;
        int l_1614 = 0xCA3A4AF4L;
        unsigned short l_1617[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int l_1649 = (-1L);
        int l_1650 = 0x0813E56BL;
        int l_1651 = 0x7E43E6CDL;
        int l_1652 = 0L;
        int l_1653 = 1L;
        int l_1655 = 0L;
        int l_1657 = (-4L);
        int l_1660 = 0x72A113BAL;
        int l_1661[9][3][5] = {{{0L,0x6369E5C1L,0x6369E5C1L,0L,0x6369E5C1L},{0xB8251997L,0xB8251997L,(-1L),1L,1L},{(-1L),0x6369E5C1L,(-1L),(-1L),0x6369E5C1L}},{{1L,(-1L),(-1L),1L,(-1L)},{0x6369E5C1L,0x6369E5C1L,0L,0x6369E5C1L,0x6369E5C1L},{(-1L),1L,(-1L),(-1L),1L}},{{0x6369E5C1L,(-1L),(-1L),0x6369E5C1L,(-1L)},{1L,1L,0xB8251997L,1L,1L},{(-1L),0x6369E5C1L,(-1L),(-1L),0x6369E5C1L}},{{1L,(-1L),(-1L),1L,(-1L)},{0x6369E5C1L,0x6369E5C1L,0L,0x6369E5C1L,0x6369E5C1L},{(-1L),1L,(-1L),(-1L),1L}},{{0x6369E5C1L,(-1L),(-1L),0x6369E5C1L,(-1L)},{1L,1L,0xB8251997L,1L,1L},{(-1L),0x6369E5C1L,(-1L),(-1L),0x6369E5C1L}},{{1L,(-1L),(-1L),1L,(-1L)},{0x6369E5C1L,0x6369E5C1L,0L,0x6369E5C1L,0x6369E5C1L},{(-1L),1L,(-1L),(-1L),1L}},{{0x6369E5C1L,(-1L),(-1L),0x6369E5C1L,(-1L)},{1L,1L,0xB8251997L,1L,1L},{(-1L),0x6369E5C1L,(-1L),(-1L),0x6369E5C1L}},{{1L,(-1L),(-1L),1L,(-1L)},{0x6369E5C1L,0x6369E5C1L,0L,0x6369E5C1L,0x6369E5C1L},{(-1L),1L,(-1L),(-1L),1L}},{{0x6369E5C1L,(-1L),(-1L),0x6369E5C1L,(-1L)},{1L,1L,0xB8251997L,1L,1L},{(-1L),0x6369E5C1L,(-1L),(-1L),0x6369E5C1L}}};
        int i, j, k;
        if ((safe_lshift_func_int16_t_s_s(func_55(p_5), ((l_1509 = l_1508) >= (p_3 ^= ((g_1153 = g_402) == g_392))))))
        {
            unsigned l_1512 = 4UL;
            unsigned l_1517 = 3UL;
            int l_1518 = 0L;
            unsigned char l_1547 = 0x82L;
            l_1518 &= (l_1475[0][0] >= (safe_add_func_int16_t_s_s((func_24(l_1512, g_206) > (safe_mod_func_uint32_t_u_u((l_1509 > g_644[1]), (safe_sub_func_uint32_t_u_u(9UL, (l_1517 || l_1508)))))), l_1512)));
            if ((((((((safe_rshift_func_int8_t_s_u(0xC7L, g_604)) == p_4) && 0xB2DDL) > (safe_div_func_uint16_t_u_u(g_651, 0x4F14L))) != (func_86((l_1523 &= ((l_1478 = p_6) <= (g_693[0][5][4] |= (p_7 = (-4L))))), p_4, p_6, p_3, p_4) != l_1475[5][2])) ^ 0L) == (-1L)))
            {
                unsigned short l_1528 = 0xF1AEL;
                int l_1536[4][9] = {{0L,(-2L),0xDA86E524L,0xA8A2DA90L,0xDA86E524L,(-2L),0L,(-2L),0xDA86E524L},{(-6L),0xE5612FA2L,0xE5612FA2L,(-6L),0xE5612FA2L,0xE5612FA2L,(-6L),0xE5612FA2L,0xE5612FA2L},{0L,(-2L),0xDA86E524L,0xA8A2DA90L,0xDA86E524L,(-2L),0L,(-2L),0xDA86E524L},{(-6L),0xE5612FA2L,0xE5612FA2L,(-6L),0xE5612FA2L,0xE5612FA2L,(-6L),0xE5612FA2L,0xE5612FA2L}};
                int i, j;
                for (g_8 = 3; (g_8 >= 0); g_8 -= 1)
                {
                    unsigned char l_1524 = 0x83L;
                    unsigned l_1535[9] = {0xF6C506E1L,0xF6C506E1L,0xF6C506E1L,0xF6C506E1L,0xF6C506E1L,0xF6C506E1L,0xF6C506E1L,0xF6C506E1L,0xF6C506E1L};
                    int i;
                    for (g_560 = 0; (g_560 <= 0); g_560 += 1)
                    {
                        int i;
                        if (g_893[g_560])
                            break;
                    }
                    for (g_1281 = 2; (g_1281 <= 7); g_1281 += 1)
                    {
                        int l_1525 = 1L;
                        l_1525 = (g_1115[2] | l_1524);
                        g_699 = (l_1528 = (safe_sub_func_int16_t_s_s(1L, 1UL)));
                        if (l_1508)
                            continue;
                        l_1536[3][4] = (l_1518 = ((g_65 = 0x3FA0B717L) < func_86((safe_mod_func_int8_t_s_s((g_64 = 0L), g_506)), l_1528, (0UL ^ (g_1115[2] || (safe_add_func_int32_t_s_s(p_4, ((l_1535[2] = ((l_1524 | ((-1L) > 0x845707EBL)) <= g_1115[5])) > l_1509))))), p_5, p_5)));
                    }
                    for (g_940 = 0; (g_940 <= 3); g_940 += 1)
                    {
                        char l_1544 = 0x21L;
                        g_401 &= (0xEFL ^ (safe_mul_func_uint16_t_u_u((l_1508 >= g_281), (l_1539 = (p_7 |= l_1535[2])))));
                        l_1536[3][4] = (((~func_43(l_1536[0][8], g_693[0][7][3])) > (safe_mod_func_uint16_t_u_u(l_1535[2], (safe_mul_func_uint8_t_u_u((g_151 = p_3), (l_1544 ^= l_1535[2])))))) & p_7);
                    }
                }
            }
            else
            {
                unsigned l_1552 = 0x38E14851L;
                for (g_274 = (-2); (g_274 > 23); g_274 = safe_add_func_int8_t_s_s(g_274, 5))
                {
                    g_401 = (-1L);
                    if (l_1547)
                        break;
                    return p_5;
                }
                for (p_5 = 0; (p_5 <= 30); p_5 = safe_add_func_uint8_t_u_u(p_5, 7))
                {
                    unsigned l_1571 = 4294967295UL;
                    unsigned l_1572 = 4294967286UL;
                    int l_1573 = 0x0979A739L;
                    l_1523 = (safe_add_func_int8_t_s_s(l_1552, func_86((safe_rshift_func_int16_t_s_u((l_1509 = (((l_1518 = (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((p_4 >= (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((p_3 = (g_1115[0] | 65535UL)), ((func_46(l_1552, l_1552, l_1518) == (safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(p_4, g_1504[4][1])) >= 0UL), l_1571)), l_1572))) && p_6))), 1L))) < g_1282[3][1]), 1L)), g_8)), l_1572))) == g_518) | p_5)), 11)), p_4, g_893[0], p_5, l_1552)));
                    l_1573 = (l_1539 &= 1L);
                }
            }
        }
        else
        {
            unsigned short l_1584 = 0x7717L;
            int l_1601 = 1L;
            int l_1612 = (-1L);
            int l_1615[2][9][1] = {{{0xDD260133L},{1L},{9L},{0xCDE48100L},{9L},{1L},{0xDD260133L},{0xDD260133L},{1L}},{{9L},{0xCDE48100L},{9L},{1L},{0xDD260133L},{0xDD260133L},{1L},{9L},{0xCDE48100L}}};
            short l_1624 = 7L;
            int i, j, k;
            if ((g_1153 = ((p_4 == (func_118(g_401) < (safe_mod_func_int8_t_s_s(g_724[1][6][0], p_6)))) <= (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_1509, (l_1539 |= (l_1475[0][0] && ((safe_mul_func_int16_t_s_s(0xB8C2L, g_1095)) > (-10L)))))), 0L)), 6)) | p_5) != p_3))))
            {
                unsigned char l_1606 = 254UL;
                int l_1609[5][9][5] = {{{4L,(-1L),(-1L),0x9D759FB8L,1L},{0x926F6869L,1L,4L,1L,(-3L)},{4L,0x05B26FEBL,9L,(-1L),2L},{0x50323337L,0x9D759FB8L,0x9D759FB8L,0x50323337L,2L},{(-1L),9L,0x05B26FEBL,4L,(-3L)},{1L,4L,1L,0x926F6869L,1L},{0x9D759FB8L,(-1L),(-1L),4L,0L},{0L,2L,0x07AA4BA0L,0x50323337L,0x07AA4BA0L},{7L,7L,0x07AA4BA0L,(-1L),(-1L)}},{{(-5L),0x926F6869L,(-1L),1L,0x50323337L},{9L,0x9AB15511L,1L,0x9D759FB8L,(-5L)},{2L,0x926F6869L,0x05B26FEBL,0L,1L},{0x7C98B5E5L,7L,0x9D759FB8L,7L,0x7C98B5E5L},{0x7C98B5E5L,2L,9L,(-5L),7L},{2L,(-1L),4L,9L,0x9D759FB8L},{9L,4L,(-1L),2L,7L},{(-5L),9L,2L,0x7C98B5E5L,0x7C98B5E5L},{7L,0x9D759FB8L,7L,0x7C98B5E5L,1L}},{{0L,0x05B26FEBL,0x926F6869L,2L,(-5L)},{0x9D759FB8L,(-1L),7L,1L,2L},{0L,1L,0x50323337L,0x9AB15511L,0xD90C95BFL},{0L,(-1L),(-1L),(-1L),(-1L)},{2L,(-1L),9L,0x05B26FEBL,4L},{0x07AA4BA0L,1L,0xD90C95BFL,0x7C98B5E5L,(-5L)},{0x50323337L,(-1L),0x07AA4BA0L,0L,1L},{0x07AA4BA0L,0x1F6D3784L,1L,0L,9L},{2L,0x7C98B5E5L,0x7C98B5E5L,2L,9L}},{{0L,1L,0x1F6D3784L,0x07AA4BA0L,1L},{0L,0x07AA4BA0L,(-1L),0x50323337L,(-5L)},{0x7C98B5E5L,0xD90C95BFL,1L,0x07AA4BA0L,4L},{0x05B26FEBL,9L,(-1L),2L,(-1L)},{(-1L),(-1L),(-1L),0L,0xD90C95BFL},{0x9AB15511L,0x50323337L,1L,0L,2L},{1L,7L,(-1L),0x7C98B5E5L,0x9AB15511L},{9L,0x50323337L,0x1F6D3784L,0x05B26FEBL,(-1L)},{(-3L),(-1L),0x7C98B5E5L,(-1L),(-3L)}},{{(-3L),9L,1L,0x9AB15511L,(-1L)},{9L,0xD90C95BFL,0x07AA4BA0L,1L,0x7C98B5E5L},{1L,(-5L),(-1L),0x9D759FB8L,0L},{9L,0x7C98B5E5L,0x9D759FB8L,0x926F6869L,0x926F6869L},{0L,0xD90C95BFL,0L,0x926F6869L,0x07AA4BA0L},{(-1L),1L,0x05B26FEBL,0x9D759FB8L,9L},{0xD90C95BFL,0x07AA4BA0L,1L,0x7C98B5E5L,0x1F6D3784L},{(-3L),4L,0x05B26FEBL,9L,(-1L)},{7L,0x9AB15511L,0L,0L,0x9AB15511L}}};
                char l_1643 = 0xA0L;
                int i, j, k;
                if (l_1584)
                {
                    l_1509 = (g_65 = p_3);
                }
                else
                {
                    unsigned short l_1599[5][7][7] = {{{0x510CL,0x81F3L,0xDF68L,0UL,0xBA81L,5UL,0xBA81L},{65535UL,65534UL,8UL,0x7984L,65535UL,65535UL,8UL},{65530UL,1UL,0UL,0UL,0UL,1UL,65530UL},{65535UL,8UL,4UL,65534UL,65535UL,65526UL,8UL},{1UL,0x81F3L,1UL,5UL,0x510CL,0xF922L,0xBA81L},{65534UL,65535UL,4UL,4UL,65535UL,65534UL,0x32E6L},{0UL,5UL,0UL,0xF922L,0x8C3BL,0xF922L,0UL}},{{65535UL,65526UL,8UL,65535UL,65534UL,65526UL,65526UL},{8UL,5UL,0xDF68L,5UL,8UL,0xF922L,0xDF68L},{65535UL,65534UL,0x32E6L,4UL,65535UL,65535UL,8UL},{0x240CL,5UL,65530UL,1UL,0UL,0UL,0UL},{65535UL,4UL,4UL,65535UL,65534UL,0x32E6L,4UL},{1UL,0xF922L,0xDF68L,1UL,0xDF68L,0xF922L,1UL},{65535UL,65535UL,65526UL,4UL,65535UL,65535UL,4UL}},{{0x8C3BL,5UL,0x8C3BL,0UL,0x240CL,0x81F3L,0UL},{65535UL,8UL,65526UL,65535UL,65534UL,4UL,8UL},{0xBA81L,0UL,0xDF68L,0x81F3L,0x510CL,0x81F3L,0xDF68L},{65535UL,65535UL,4UL,65526UL,65535UL,65535UL,0x7984L},{0UL,0UL,65530UL,0UL,0UL,0xF922L,0x240CL},{65535UL,8UL,0x32E6L,65535UL,65535UL,0x32E6L,8UL},{0xDF68L,5UL,8UL,1UL,0x510CL,0UL,0x510CL}},{{65535UL,65535UL,4UL,0x32E6L,65534UL,65535UL,4UL},{0UL,0xF922L,0x240CL,0x81F3L,0UL,5UL,0UL},{65534UL,0x7984L,0x32E6L,65535UL,65534UL,8UL,0x7984L},{0xDF68L,1UL,0xDF68L,0xF922L,1UL,0UL,8UL},{65535UL,65535UL,0x32E6L,0x32E6L,65535UL,65535UL,65526UL},{0x240CL,0xF922L,0UL,0UL,65530UL,0UL,0UL},{65534UL,8UL,0x7984L,65535UL,65535UL,8UL,8UL}},{{0x510CL,0xF922L,0xBA81L,0xF922L,0x510CL,5UL,1UL},{65535UL,65535UL,4UL,0x7984L,65535UL,65535UL,65526UL},{0UL,1UL,0x8C3BL,0x81F3L,65530UL,0xF922L,65530UL},{65535UL,0x7984L,0x7984L,65535UL,65535UL,4UL,0x7984L},{0x510CL,5UL,1UL,0x81F3L,1UL,5UL,0x510CL},{65534UL,65535UL,0x32E6L,0x7984L,65534UL,65534UL,0x7984L},{0x240CL,1UL,0x240CL,0xF922L,0UL,0UL,65530UL}}};
                    int l_1600 = (-2L);
                    const char l_1623 = 1L;
                    int i, j, k;
                    l_1601 = ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_1523 |= p_6), 2)), (p_6 || ((safe_mul_func_uint8_t_u_u(((p_5 = (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(l_1509, 1L)) <= (func_118(l_1470) || (((l_1599[2][3][4] = (g_558[2] < (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_3, g_299)), p_4)))) | p_5) && g_177[1]))), l_1600))) > l_1509), l_1600)) < 0L)))) && 0xADDC607AL);
                    for (g_705 = 0; (g_705 <= 1); g_705 += 1)
                    {
                        int l_1610 = 0xEEBAC476L;
                        int l_1616[7] = {0x57021226L,0x57021226L,0xD778F463L,0x57021226L,0x57021226L,0xD778F463L,0x57021226L};
                        int i;
                        g_1282[1][0] |= (g_557 = (safe_add_func_int16_t_s_s(g_505, (p_3 &= func_118(p_6)))));
                        l_1609[2][1][4] = (safe_div_func_uint16_t_u_u((((l_1606 != func_55(g_527)) & p_4) >= (l_1601 == ((safe_mul_func_int8_t_s_s((!(g_402 >= p_4)), 0x05L)) == 0L))), l_1584));
                        ++l_1617[0];
                        l_1609[3][0][2] = ((l_1616[1] = (func_86((g_556 || ((l_1600 && l_1617[3]) | g_141[1][1][3])), (+(l_1624 = (l_1615[0][4][0] = (l_1523 = (safe_add_func_int8_t_s_s(func_86(((safe_unary_minus_func_uint16_t_u(l_1623)) <= (g_644[0] = ((!g_175[0]) <= (l_1614 = (func_55(g_1115[0]) | 0xB208L))))), p_6, g_705, g_974, g_518), l_1616[2])))))), p_6, g_8, l_1611) != p_3)) != g_68);
                    }
                }
                l_1601 = func_86((g_1115[0] & (p_3 < (l_1475[1][3] > ((safe_add_func_int32_t_s_s(((l_1643 = ((safe_mul_func_int16_t_s_s((g_177[1] = (g_644[8] || (safe_lshift_func_uint16_t_u_s(((p_7 > ((((safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((g_936 || (((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_60, (func_86(func_86(p_3, g_284, l_1613, g_8, g_33), p_3, g_644[1], g_65, g_604) | p_3))), l_1601)) <= 0xDCFD3643L) < 0UL)), 4UL)) < p_3), p_6)), g_66[1])) <= 0xDEL) >= l_1539) < p_4)) > g_1282[1][0]), g_724[1][6][0])))), 65527UL)) < p_3)) == 3L), l_1611)) >= l_1614)))), p_5, g_693[0][5][0], g_1644, p_3);
                g_401 = (((safe_add_func_int32_t_s_s(((((g_392 = g_893[0]) >= (func_86(g_692, p_7, (((safe_add_func_uint8_t_u_u(0UL, (g_65 < ((l_1606 | 0xE47C5BE5L) | l_1523)))) && l_1643) | p_7), l_1614, l_1478) & l_1617[5])) != 0L) != p_4), l_1470)) >= g_560) <= p_7);
            }
            else
            {
                return p_3;
            }
            g_1282[3][1] = l_1612;
            --l_1663;
        }
        return l_1652;
    }
    return g_151;
}







static int func_14(int p_15, unsigned short p_16, const int p_17, int p_18, int p_19)
{
    unsigned short l_1185 = 0UL;
    int l_1186 = 1L;
    int l_1187 = 0x9C80FDB6L;
    unsigned short l_1192 = 0x3BB9L;
    int l_1193 = 0xC33A40F1L;
    int l_1228 = 0x0471B04BL;
    unsigned l_1272 = 4294967290UL;
    int l_1284[6];
    int l_1288 = 8L;
    char l_1366 = 0x4DL;
    unsigned l_1379[2];
    int l_1448[2][8] = {{0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL},{0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL,0x33488B1BL}};
    int i, j;
    for (i = 0; i < 6; i++)
        l_1284[i] = 0x965E81CBL;
    for (i = 0; i < 2; i++)
        l_1379[i] = 7UL;
    if ((l_1193 = func_86(p_19, func_24(func_118((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((p_19 & 0x9D6A6AA4L), (+(safe_rshift_func_uint16_t_u_s(p_19, (safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u((((((~l_1185) && (p_16 | (l_1186 = p_19))) > (l_1187 >= (safe_div_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(g_141[2][3][6], (-9L))) == l_1185) < g_893[0]), l_1192)))) ^ l_1192) < p_19), g_644[1])), 1UL))))))), 12))), l_1193), p_19, l_1193, p_18)))
    {
        unsigned char l_1222 = 255UL;
        char l_1233[4][6] = {{0xA8L,(-1L),0xA8L,0xA8L,(-1L),0xA8L},{0xA8L,(-1L),0xA8L,0xA8L,(-1L),0xA8L},{0xA8L,(-1L),0xA8L,0xA8L,(-1L),0xA8L},{0xA8L,(-1L),0xA8L,0xA8L,(-1L),0xA8L}};
        int l_1238 = 0x75D027B8L;
        int l_1244 = 0L;
        int l_1283 = 0xA4581476L;
        int l_1285 = 9L;
        int l_1290 = 0L;
        unsigned short l_1292 = 0x2133L;
        const unsigned short l_1301 = 0x8E7CL;
        const int l_1335 = (-7L);
        int l_1372 = 4L;
        int l_1374 = 1L;
        int l_1375 = 0L;
        int l_1376[5] = {0L,0L,0L,0L,0L};
        char l_1421 = 0x71L;
        unsigned l_1434 = 0xB09C0A6BL;
        int i, j;
        for (p_18 = 0; (p_18 <= 17); p_18++)
        {
            unsigned char l_1196 = 0xF9L;
            int l_1219 = (-2L);
            int l_1286 = 0x0A2E4103L;
            int l_1287 = (-10L);
            int l_1289 = 0xCA16C589L;
            int l_1291[9] = {0xA04024A4L,0xA04024A4L,0xA04024A4L,0xA04024A4L,0xA04024A4L,0xA04024A4L,0xA04024A4L,0xA04024A4L,0xA04024A4L};
            int i;
            if ((g_1095 != (l_1196++)))
            {
                short l_1213 = 5L;
                char l_1216 = (-5L);
                int l_1221 = (-7L);
                unsigned l_1229 = 0x11CFF597L;
                int l_1234 = 0L;
                if ((((safe_lshift_func_int16_t_s_s(3L, (((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_1196, (safe_lshift_func_uint8_t_u_s((g_694 == ((g_274++) > func_86(p_19, l_1213, (l_1213 && l_1196), (g_299 &= 0xAFL), (g_68 &= (!g_33))))), 4)))), l_1216)), 7)) ^ g_284), p_19)), l_1187)) != l_1196) >= l_1185))) >= l_1196) ^ l_1187))
                {
                    int l_1227 = 0x52814274L;
                    for (l_1192 = 5; (l_1192 > 13); l_1192 = safe_add_func_int8_t_s_s(l_1192, 1))
                    {
                        int l_1220[8] = {0L,0x755331D7L,0L,0x755331D7L,0L,0x755331D7L,0L,0x755331D7L};
                        int i;
                        ++l_1222;
                    }
                    p_19 = func_118(func_24((((safe_lshift_func_int8_t_s_u(l_1227, p_17)) & func_113(p_19, (l_1221 |= ((func_118(g_694) < l_1228) != (l_1192 || g_175[0]))), p_19, p_19)) < p_16), l_1229));
                }
                else
                {
                    unsigned l_1235[7] = {9UL,9UL,0x8B48E15BL,9UL,9UL,0x8B48E15BL,9UL};
                    int i;
                    if ((g_699 = (safe_mod_func_uint32_t_u_u(p_16, p_19))))
                    {
                        return l_1196;
                    }
                    else
                    {
                        char l_1232 = 1L;
                        if (l_1221)
                            break;
                        --l_1235[2];
                        return l_1235[2];
                    }
                }
            }
            else
            {
                int l_1245 = 0x7DA1E1B8L;
                l_1238 &= func_118(l_1193);
                if (p_17)
                {
                    unsigned char l_1246 = 0xD5L;
                    for (g_281 = 0; (g_281 == 56); g_281 = safe_add_func_int8_t_s_s(g_281, 1))
                    {
                        short l_1241 = 1L;
                        int l_1242 = 0L;
                        int l_1243[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1243[i] = 0x164896C0L;
                        if (l_1219)
                            break;
                        g_557 = 0xF359A38FL;
                        if (l_1241)
                            continue;
                        l_1246--;
                    }
                    if (l_1246)
                        break;
                }
                else
                {
                    int l_1280[3][10][5] = {{{0x03D50609L,0L,0L,0x03D50609L,0L},{0x6D0B3637L,0L,2L,1L,1L},{(-1L),0x03D50609L,(-1L),0L,0x03D50609L},{1L,3L,(-1L),1L,(-1L)},{5L,5L,6L,0x03D50609L,0x982EDFA9L},{7L,7L,0L,0L,7L},{(-1L),(-2L),6L,(-1L),(-4L)},{(-1L),7L,0L,7L,(-1L)},{6L,0L,(-2L),(-4L),0L},{(-1L),0x51B94A7FL,0x51B94A7FL,(-1L),0L}},{{(-1L),0L,0x03D50609L,0L,0L},{2L,(-1L),2L,0L,(-1L)},{0L,(-2L),(-4L),0L,(-4L)},{3L,3L,0L,(-1L),7L},{6L,(-1L),(-4L),(-4L),(-1L)},{7L,0x51B94A7FL,2L,7L,0L},{0L,(-1L),0x03D50609L,(-1L),0L},{2L,3L,0x51B94A7FL,0L,3L},{0L,(-2L),(-2L),0L,(-4L)},{7L,(-1L),0L,3L,3L}},{{6L,0L,6L,(-4L),0L},{3L,0x51B94A7FL,0L,3L,0L},{0L,0L,0x03D50609L,0L,(-1L)},{2L,7L,0L,0L,7L},{(-1L),(-2L),(-4L),0L,(-2L)},{3L,(-1L),1L,(-1L),3L},{(-4L),(-1L),6L,(-2L),(-1L)},{3L,2L,2L,3L,0x51B94A7FL},{0L,0L,5L,(-1L),(-1L)},{0L,3L,0L,0x51B94A7FL,3L}}};
                    int i, j, k;
                    g_699 ^= 7L;
                    for (g_906 = 0; (g_906 < 10); g_906++)
                    {
                        const unsigned l_1255[9] = {0x7AFD7081L,0x7AFD7081L,0x7AFD7081L,0x7AFD7081L,0x7AFD7081L,0x7AFD7081L,0x7AFD7081L,0x7AFD7081L,0x7AFD7081L};
                        int i;
                        g_699 |= (safe_mod_func_int16_t_s_s(l_1196, l_1185));
                        l_1186 |= ((safe_lshift_func_int16_t_s_s(l_1255[2], func_55(g_700))) < 65530UL);
                    }
                    if ((safe_mod_func_int16_t_s_s(0L, (safe_div_func_int8_t_s_s(g_401, l_1196)))))
                    {
                        unsigned l_1260[9][1][10];
                        unsigned char l_1271 = 0xC9L;
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 10; k++)
                                    l_1260[i][j][k] = 0x3CC335D2L;
                            }
                        }
                        l_1260[5][0][7]++;
                        if (p_15)
                            break;
                        l_1193 = (((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(1L, 0)) ^ g_281), 15)) < ((safe_mul_func_uint16_t_u_u(l_1245, (g_651 != g_1115[4]))) ^ (safe_mod_func_int32_t_s_s(p_18, l_1271)))) & ((l_1193 > (p_18 & g_141[2][0][6])) & p_19));
                        if (p_16)
                            break;
                    }
                    else
                    {
                        unsigned l_1273 = 0x494001D1L;
                        l_1238 = ((p_17 != (l_1192 & (g_651 == (l_1272 != 0xF1L)))) & (0xB37BL | p_15));
                        p_19 = (l_1273 || ((func_46(p_18, ((0x7BB8L & g_206) <= (0L == (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_1193, l_1273)), g_940)))), p_16) || l_1280[0][9][3]) && l_1280[0][9][3]));
                        if (p_19)
                            break;
                    }
                }
            }
            ++l_1292;
        }
        for (g_65 = 0; (g_65 > 4); ++g_65)
        {
            short l_1302 = 0L;
            int l_1309[1][4][5] = {{{(-6L),0x4CE2F4D3L,0x4CE2F4D3L,(-6L),0x4CE2F4D3L},{1L,1L,(-3L),1L,1L},{0x4CE2F4D3L,(-6L),0x4CE2F4D3L,0x4CE2F4D3L,(-6L)},{1L,0xED4D7146L,0xED4D7146L,1L,0xED4D7146L}}};
            int l_1348[3][8][6] = {{{(-10L),0xC88B506CL,0x2396CE87L,0x9EE930A6L,0x0D1358FEL,0x0D1358FEL},{0xCD5650C8L,0x1B2ED3E8L,0x1B2ED3E8L,0xCD5650C8L,0L,1L},{0x1B2ED3E8L,0xC5FF9BC1L,0xA0AFAF58L,0x4C1F36F0L,(-6L),(-10L)},{0xFB321FF0L,1L,(-1L),1L,(-6L),(-7L)},{(-7L),0xC5FF9BC1L,0x9EE930A6L,(-5L),0L,0x1089E477L},{(-5L),0x1B2ED3E8L,0x3EC64D23L,(-1L),0x0D1358FEL,(-1L)},{0xC5FF9BC1L,0xC88B506CL,0x4C1F36F0L,(-1L),0x2396CE87L,0xC5FF9BC1L},{0x9EE930A6L,(-1L),0xFB321FF0L,0x9E5D09E4L,0x53FD3904L,0xD645494CL}},{{0xC5FF9BC1L,1L,(-6L),0x9E5D09E4L,0xCD5650C8L,(-1L)},{0x9EE930A6L,0xA0AFAF58L,0x1B2ED3E8L,(-1L),1L,(-10L)},{0x4C1F36F0L,1L,1L,0L,0L,1L},{(-1L),(-1L),0x3FF722B6L,(-1L),0xC5FF9BC1L,1L},{0xCD5650C8L,1L,0L,0x2396CE87L,0xD645494CL,0x3FF722B6L},{(-1L),0xCD5650C8L,0L,0xC88B506CL,(-1L),1L},{0x9E5D09E4L,0xC88B506CL,0x3FF722B6L,0L,(-10L),1L},{0L,(-10L),1L,(-5L),1L,(-10L)}},{{0x53FD3904L,0x2396CE87L,0x1B2ED3E8L,0xFB321FF0L,1L,(-1L)},{1L,(-1L),(-6L),0xA0AFAF58L,0x3FF722B6L,0xD645494CL},{0L,(-1L),0xFB321FF0L,0x9EE930A6L,1L,0xC5FF9BC1L},{(-5L),0x2396CE87L,0x4C1F36F0L,1L,1L,0L},{1L,(-10L),0xD645494CL,0xD645494CL,(-10L),1L},{0x1089E477L,0xC88B506CL,(-5L),(-5L),(-1L),0xCD5650C8L},{0x3FF722B6L,0xD645494CL,(-1L),0xCD5650C8L,0L,0xC88B506CL},{0x1089E477L,1L,0xCD5650C8L,0x0D1358FEL,(-10L),0xC5FF9BC1L}}};
            const unsigned char l_1354 = 0x83L;
            char l_1370 = 0x48L;
            int i, j, k;
            g_1153 = (-2L);
            p_19 = (safe_mul_func_int16_t_s_s(((p_16 = func_55(((safe_mul_func_uint16_t_u_u((func_86(l_1301, l_1302, ((safe_mul_func_int8_t_s_s((g_53[2] >= ((safe_mul_func_int16_t_s_s(l_1302, (safe_rshift_func_int16_t_s_u((0x68L || 1L), 15)))) != g_1115[1])), (l_1309[0][3][0] = (func_55(l_1193) | g_700)))) | l_1284[5]), p_15, l_1302) >= 1L), g_724[1][6][0])) | g_974))) || p_18), g_1310));
            for (g_505 = 3; (g_505 >= 0); g_505 -= 1)
            {
                unsigned char l_1349 = 0xDFL;
                int l_1351 = 0L;
                int l_1364 = 0x1AD5991BL;
                int l_1365 = 0xA2C4E2CCL;
                int l_1368 = 1L;
                int l_1371 = 1L;
                int l_1373 = 0x6C22EA24L;
                int l_1377[9][7] = {{1L,1L,2L,1L,1L,2L,1L},{1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L},{1L,1L,2L,1L,1L,2L,1L},{1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L},{1L,1L,2L,1L,1L,2L,1L},{1L,0L,0L,1L,0L,0L,1L},{0L,1L,0L,0L,1L,0L,0L}};
                int i, j;
                if ((((safe_add_func_int32_t_s_s(g_38[g_505][(g_505 + 5)], g_38[g_505][(g_505 + 4)])) >= (!(safe_mul_func_uint16_t_u_u((func_55(g_644[(g_505 + 5)]) < l_1186), (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(((255UL || ((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(g_284, 0)) && (safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(1UL, ((~l_1272) > g_724[1][6][0]))), p_17))), l_1309[0][3][0])) ^ g_177[5]), 1)) > 0L)) != 4UL), 2L)), (-1L))))))) | 0UL))
                {
                    unsigned short l_1350[2][3][3] = {{{0UL,65526UL,0UL},{0UL,0xEA59L,65526UL},{0xEA59L,0UL,0UL}},{{65526UL,0UL,0xA051L},{0UL,0xEA59L,0x0ECCL},{65526UL,65526UL,0x0ECCL}}};
                    unsigned char l_1361 = 0x05L;
                    const char l_1362 = (-1L);
                    int l_1363 = 0x914713C6L;
                    int l_1367 = (-3L);
                    int l_1369[10][3][4] = {{{1L,5L,5L,1L},{1L,0x424A72B6L,6L,0x7D6281B1L},{(-1L),(-6L),0xFEE1681CL,0x32128E4EL}},{{0xBD66B37DL,(-1L),5L,0x32128E4EL},{0xF8B82A67L,(-6L),(-6L),0x7D6281B1L},{1L,0x424A72B6L,0x2957B29FL,0xE10D0D87L}},{{2L,0xA05A6A5FL,2L,6L},{0xFEE1681CL,0x7D6281B1L,0xD0914C32L,1L},{0xEF5C57E0L,0x380A4356L,0x64763D57L,(-6L)}},{{0x53EFEA06L,1L,3L,0x552BDFE1L},{2L,0x8E75D207L,(-1L),0L},{9L,0x53EFEA06L,9L,(-1L)}},{{(-1L),8L,(-6L),0x35505966L},{0x2EA9D544L,0x32128E4EL,0L,8L},{0x41C1FAE3L,0x285172A6L,0L,2L}},{{0x2EA9D544L,0xF16DA9F8L,(-6L),0xD0914C32L},{(-1L),0x2EA9D544L,9L,1L},{9L,1L,(-1L),0xA05A6A5FL}},{{2L,0xF8B82A67L,3L,0x41C1FAE3L},{0x53EFEA06L,0xD0914C32L,0x64763D57L,0x2957B29FL},{0xEF5C57E0L,0xBD66B37DL,0xD0914C32L,3L}},{{0xFEE1681CL,5L,2L,2L},{2L,2L,0x2957B29FL,0L},{1L,0x552BDFE1L,(-6L),0x424A72B6L}},{{0xF8B82A67L,(-1L),5L,0x7D6281B1L},{(-6L),1L,0xF16DA9F8L,2L},{1L,6L,0x41C1FAE3L,0xE10D0D87L}},{{0x8E75D207L,2L,0x86C4B411L,0x380A4356L},{(-8L),1L,0L,0xEF5C57E0L},{3L,(-6L),(-2L),0xD0914C32L}}};
                    short l_1378 = 8L;
                    int i, j, k;
                    for (l_1193 = 0; (l_1193 <= 5); l_1193 += 1)
                    {
                        int i;
                        l_1284[l_1193] = l_1284[3];
                        g_699 = ((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(g_8, ((+(+l_1309[0][3][0])) > ((l_1309[0][3][0] ^ ((l_1335 <= (safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((0xE83FL != ((((g_644[4] = (l_1348[0][7][3] ^= l_1290)) && func_55((g_38[1][2] ^ g_940))) & l_1349) || p_19)), l_1284[l_1193])) == 0x9043L) || l_1350[1][1][2]), g_505)), p_18)), 0)) == 6UL) <= l_1351), g_299)) & p_19), g_1282[3][1]))) < l_1302)) < 0x25EDL)))) && l_1349), g_281)) >= 2L);
                    }
                    l_1238 ^= (((safe_div_func_uint16_t_u_u(((g_177[2] == ((func_86(l_1354, p_17, p_16, (safe_add_func_int8_t_s_s(g_64, (!func_86((p_19 = (func_86((safe_div_func_int16_t_s_s(((l_1350[1][1][2] >= func_86((safe_mul_func_uint8_t_u_u(p_16, l_1350[1][1][2])), (((g_53[2] & l_1361) | 8UL) > l_1193), p_15, g_935, p_19)) | 0x98C8E6D9L), 0x60A9L)), p_15, l_1233[2][0], g_38[1][2], l_1233[2][1]) > 0x18E7L)), l_1354, g_53[2], p_18, l_1349)))), g_53[2]) | 65532UL) & l_1185)) < g_807), 0x6FD9L)) ^ l_1362) && 0x04L);
                    --l_1379[1];
                    return g_8;
                }
                else
                {
                    for (l_1222 = 20; (l_1222 == 33); l_1222 = safe_add_func_uint16_t_u_u(l_1222, 6))
                    {
                        g_1282[3][1] = p_19;
                        if (p_19)
                            continue;
                        g_557 = (safe_add_func_uint32_t_u_u(4294967289UL, g_645));
                    }
                }
                if (g_807)
                    continue;
            }
        }
        for (g_651 = 0; (g_651 <= 3); g_651 += 1)
        {
            int l_1402[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1402[i][j] = 0xFA7CB76AL;
            }
            if (l_1284[g_651])
            {
                unsigned short l_1401 = 0x4FA5L;
                int l_1403 = 0L;
                int i;
                if (((((func_86(g_68, (safe_mul_func_int8_t_s_s((5L < p_17), (p_18 | ((safe_mod_func_uint16_t_u_u(func_55((safe_lshift_func_uint8_t_u_u((~l_1284[g_651]), 7))), (safe_rshift_func_int16_t_s_s((p_16 <= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(p_19)), ((((safe_add_func_int32_t_s_s((l_1403 &= (l_1402[0][0] = (safe_lshift_func_int8_t_s_s((l_1401 ^= g_1282[3][1]), l_1284[g_651])))), p_18)) != 0x697ADF97L) || 0xB9B1L) ^ g_974)))), g_141[2][1][0])))) > p_18)))), g_808[0][2], l_1284[(g_651 + 2)], l_1284[g_651]) > p_15) ^ g_700) ^ 0xA2E7L) < l_1288))
                {
                    int l_1414 = 0x63D9D83FL;
                    int l_1417 = 0L;
                    for (g_527 = 0; (g_527 <= 3); g_527 += 1)
                    {
                        return p_15;
                    }
                    p_19 = (safe_mul_func_int16_t_s_s(g_518, (func_43((safe_mul_func_uint8_t_u_u(l_1284[g_651], (g_38[0][8] & p_19))), func_86((0x0A168299L | g_808[2][1]), g_651, g_645, (0x02L <= g_604), g_990[5])) || g_700)));
                    if (((((g_141[3][2][1] = (safe_rshift_func_uint8_t_u_s(func_118((safe_add_func_int8_t_s_s(func_118((safe_lshift_func_int8_t_s_s(((l_1414 = ((l_1284[g_651] = p_15) && l_1284[(g_651 + 2)])) && l_1402[0][0]), 2))), (l_1402[0][0] > (safe_rshift_func_uint16_t_u_u((g_556 && 0L), 9)))))), l_1417))) >= (-1L)) || l_1402[0][0]) && g_177[5]))
                    {
                        p_19 &= p_16;
                    }
                    else
                    {
                        unsigned l_1418 = 0UL;
                        p_19 = p_16;
                        l_1418 &= (+0xCF6BCF73L);
                        if (p_18)
                            continue;
                    }
                    for (g_1153 = 3; (g_1153 >= 0); g_1153 -= 1)
                    {
                        return l_1288;
                    }
                }
                else
                {
                    unsigned l_1424 = 0xA5A57C55L;
                    p_19 = (safe_mod_func_int16_t_s_s(l_1421, l_1284[g_651]));
                    if (l_1284[4])
                        break;
                    g_1282[3][1] &= (((p_19 || l_1193) | (safe_rshift_func_uint16_t_u_u(g_527, 6))) | l_1424);
                }
            }
            else
            {
                unsigned l_1425 = 1UL;
                l_1425--;
                p_19 = (safe_div_func_int32_t_s_s(func_43(p_17, (((g_175[0] >= ((safe_lshift_func_int8_t_s_u(0x06L, 3)) && ((l_1284[3] = (g_893[0] = func_43((g_499 |= l_1284[g_651]), (safe_mul_func_int16_t_s_s(l_1185, (p_18 == (((l_1434 && g_1115[0]) >= (l_1284[g_651] ^ 0UL)) | g_990[4]))))))) >= p_18))) <= p_17) || p_17)), (-1L)));
            }
            return g_284;
        }
        g_1282[4][0] = l_1376[1];
    }
    else
    {
        g_557 = g_34;
        for (g_645 = 0; (g_645 >= 48); g_645 = safe_add_func_uint16_t_u_u(g_645, 5))
        {
            unsigned char l_1437 = 0xC6L;
            p_19 = l_1437;
        }
    }
    for (g_974 = 0; (g_974 >= 57); g_974 = safe_add_func_uint16_t_u_u(g_974, 2))
    {
        unsigned char l_1444 = 0x4CL;
        int l_1453[10][10][2] = {{{0x62B101B7L,0x638B6682L},{0xC9C3A467L,0L},{1L,0x98AF689EL},{0L,0xC5E4B351L},{3L,0x4BF4ABFEL},{1L,1L},{0x96E594E5L,0L},{7L,0x2E4F4A90L},{0x4BF4ABFEL,0xC03EB34BL},{1L,0xCA25BD66L}},{{0x2E4F4A90L,0x62B101B7L},{0x638B6682L,7L},{0xD19D899CL,0L},{0xD6875054L,(-1L)},{0x66EA38CDL,0x2E4F4A90L},{0x645CD363L,0L},{1L,7L},{(-1L),0x66EA38CDL},{3L,0xC9C3A467L},{0L,0xC03EB34BL}},{{0xD6875054L,7L},{0xC5E4B351L,0x638B6682L},{7L,0x11643E7DL},{0xD19D899CL,0xCA25BD66L},{1L,2L},{0L,0xC9C3A467L},{0x306ED6F4L,0L},{0x96E594E5L,(-4L)},{0x4E0F4133L,0L},{0x645CD363L,0xD19D899CL}},{{0L,0x98AF689EL},{1L,1L},{0x2E4F4A90L,7L},{0x11643E7DL,0x11643E7DL},{0xC9C3A467L,7L},{(-1L),(-1L)},{0x4BF4ABFEL,0xD19D899CL},{(-1L),0xFC15FD51L},{7L,0L},{7L,0xFC15FD51L}},{{(-1L),(-1L)},{0xFC15FD51L,1L},{(-2L),(-1L)},{(-1L),7L},{7L,0x0E5B19A7L},{0x4E0F4133L,0xB6DFDCCBL},{2L,(-5L)},{0x638B6682L,(-1L)},{(-6L),0x62B101B7L},{(-7L),0xAA48457BL}},{{7L,0x638B6682L},{(-1L),(-1L)},{0x62B101B7L,7L},{2L,0L},{(-1L),7L},{0x0E5B19A7L,1L},{0xAF5C9865L,(-1L)},{0L,(-4L)},{0x638B6682L,(-1L)},{0x5D41403BL,0L}},{{7L,(-10L)},{3L,0x638B6682L},{(-6L),0x4E0F4133L},{0L,1L},{0L,1L},{(-1L),0x0E5B19A7L},{1L,0xD0647002L},{0x4E0F4133L,0L},{(-1L),(-4L)},{0xFC15FD51L,0x4E0F4133L}},{{6L,0x62B101B7L},{7L,(-1L)},{3L,0xFC15FD51L},{0x5D41403BL,0xAF5C9865L},{0x62B101B7L,(-5L)},{(-1L),1L},{(-1L),1L},{0xD0647002L,1L},{(-1L),1L},{(-1L),(-5L)}},{{0x62B101B7L,0xAF5C9865L},{0x5D41403BL,0xFC15FD51L},{3L,(-1L)},{7L,0x62B101B7L},{6L,0x4E0F4133L},{1L,0L},{0x1BD5D920L,0xC5E4B351L},{7L,(-10L)},{(-2L),0xAA48457BL},{(-1L),0x89374A23L}},{{0x4E0F4133L,0x645CD363L},{(-5L),7L},{(-1L),0x93FE869FL},{0L,0x5D41403BL},{0xCA25BD66L,(-5L)},{0xD6875054L,0x62B101B7L},{0x93FE869FL,0L},{0x4E0F4133L,0xC9C3A467L},{0xFC15FD51L,(-2L)},{0xAA48457BL,0x2B37BCB5L}}};
        int l_1454 = 0L;
        int i, j, k;
        for (g_556 = 0; (g_556 >= (-10)); g_556 = safe_sub_func_int16_t_s_s(g_556, 7))
        {
            unsigned short l_1447[6][9][4] = {{{0x2CA0L,1UL,0UL,0UL},{65529UL,65529UL,0x70A4L,65526UL},{0xC04AL,0x80E4L,0xD1BEL,65533UL},{0xD1BEL,65533UL,0x2CA0L,0xD1BEL},{65529UL,65533UL,0xD763L,65533UL},{65533UL,0x80E4L,0UL,65526UL},{0x5D20L,65529UL,0x2CA0L,0UL},{0xC04AL,1UL,0xFACAL,65533UL},{0xC04AL,0x2CA0L,0x2CA0L,0xC04AL}},{{0x5D20L,65533UL,0UL,0x2CA0L},{65533UL,1UL,0xD763L,65526UL},{65529UL,0x5D20L,0x2CA0L,65526UL},{0xD1BEL,1UL,0xD1BEL,0x2CA0L},{0xC04AL,65533UL,0x70A4L,0xC04AL},{65529UL,0x2CA0L,0UL,65533UL},{0x2CA0L,1UL,0UL,0UL},{65529UL,0x80E4L,65529UL,0xD1BEL},{0x2CA0L,0xD763L,0x70A4L,0x5D20L}},{{0x70A4L,0x5D20L,0UL,0x70A4L},{0x80E4L,0x5D20L,0xC04AL,0x5D20L},{0x5D20L,0xD763L,0xFACAL,0xD1BEL},{0x6C20L,0x80E4L,0UL,0xFACAL},{0x2CA0L,0UL,65533UL,0x5D20L},{0x2CA0L,0UL,0UL,0x2CA0L},{0x6C20L,0x5D20L,0xFACAL,0UL},{0x5D20L,0UL,0xC04AL,0xD1BEL},{0x80E4L,0x6C20L,0UL,0xD1BEL}},{{0x70A4L,0UL,0x70A4L,0UL},{0x2CA0L,0x5D20L,65529UL,0x2CA0L},{0x80E4L,0UL,0xFACAL,0x5D20L},{0UL,0UL,0xFACAL,0xFACAL},{0x80E4L,0x80E4L,65529UL,0xD1BEL},{0x2CA0L,0xD763L,0x70A4L,0x5D20L},{0x70A4L,0x5D20L,0UL,0x70A4L},{0x80E4L,0x5D20L,0xC04AL,0x5D20L},{0x5D20L,0xD763L,0xFACAL,0xD1BEL}},{{0x6C20L,0x80E4L,0UL,0xFACAL},{0x2CA0L,0UL,65533UL,0x5D20L},{0x2CA0L,0UL,0UL,0x2CA0L},{0x6C20L,0x5D20L,0xFACAL,0UL},{0x5D20L,0x5D20L,1UL,0x80E4L},{0x2CA0L,0x70A4L,0xFACAL,0x80E4L},{0xD763L,0x5D20L,0xD763L,0xFACAL},{0UL,0xD1BEL,0xC04AL,0UL},{0x2CA0L,0xFACAL,0x6C20L,0xD1BEL}},{{0xFACAL,0x5D20L,0x6C20L,0x6C20L},{0x2CA0L,0x2CA0L,0xC04AL,0x80E4L},{0UL,0UL,0xD763L,0xD1BEL},{0xD763L,0xD1BEL,0xFACAL,0xD763L},{0x2CA0L,0xD1BEL,1UL,0xD1BEL},{0xD1BEL,0UL,0x6C20L,0x80E4L},{0x70A4L,0x2CA0L,0xFACAL,0x6C20L},{0UL,0x5D20L,65526UL,0xD1BEL},{0UL,0xFACAL,0xFACAL,0UL}}};
            int l_1455 = 0L;
            int i, j, k;
            g_699 = (safe_mul_func_uint16_t_u_u((!l_1193), (l_1444 > func_86(g_281, (l_1447[2][2][1] ^= (safe_rshift_func_int8_t_s_u(g_644[1], 2))), l_1448[1][5], l_1444, p_15))));
            p_19 = ((safe_mul_func_int8_t_s_s((l_1453[9][4][1] = (g_700 != (safe_mod_func_int16_t_s_s(g_38[1][2], (~func_55(g_392)))))), (g_141[3][0][0] = (+((l_1455 = (+l_1454)) || (((g_505 <= (safe_div_func_uint16_t_u_u((p_16 = 0xEAC2L), (safe_lshift_func_int8_t_s_s(((l_1379[1] || p_19) < l_1454), g_560))))) < p_19) ^ 0x09FAL)))))) && p_15);
        }
    }
    p_19 = (safe_mod_func_uint8_t_u_u((safe_div_func_int32_t_s_s(g_558[0], p_19)), (safe_rshift_func_int8_t_s_s(((((g_604 >= (~(g_807 != 65535UL))) >= 0x1E19L) & (l_1193 = p_16)) != (0x27L | g_561)), l_1448[1][5]))));
    l_1193 = (p_19 = (-6L));
    return g_206;
}







static int func_24(unsigned char p_25, char p_26)
{
    int l_57 = 0L;
    char l_1167 = 1L;
    int l_1168 = 0xB6DBA520L;
    unsigned char l_1169[10][2] = {{3UL,0x8EL},{0UL,0x33L},{0x8EL,0x33L},{0UL,0x8EL},{3UL,3UL},{3UL,0x8EL},{0UL,0x33L},{0x8EL,0x33L},{0UL,0x8EL},{3UL,3UL}};
    unsigned char l_1173 = 252UL;
    int l_1174 = 0L;
    int i, j;
    if ((0xDCL | p_25))
    {
        unsigned l_78 = 0x4E4D73BBL;
        int l_1158 = (-6L);
        g_34 = (g_33 = (-8L));
        for (p_26 = 4; (p_26 < (-25)); p_26 = safe_sub_func_int32_t_s_s(p_26, 6))
        {
            int l_37[10] = {0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L,0x9EA5D840L};
            unsigned l_52[3][9][2] = {{{4294967289UL,0x547A0585L},{4294967289UL,0xB3E1984BL},{0x01153AA9L,0x02D1F73EL},{0xB3E1984BL,0x2708CDB5L},{4UL,0xC1846E97L},{0x2708CDB5L,0x02B68169L},{0x02B68169L,0x02D1F73EL},{0xF33BC6C2L,0x02D1F73EL},{0x02B68169L,0x02B68169L}},{{0x2708CDB5L,0x01153AA9L},{0xB3E1984BL,0xC1846E97L},{4294967289UL,1UL},{0x02D1F73EL,4294967289UL},{4294967294UL,4UL},{4294967294UL,4294967289UL},{0x02D1F73EL,1UL},{4294967289UL,0xC1846E97L},{0xB3E1984BL,0x01153AA9L}},{{0x2708CDB5L,0x02B68169L},{0x02B68169L,0x02D1F73EL},{0xF33BC6C2L,0x02D1F73EL},{0x02B68169L,0x02B68169L},{0x2708CDB5L,0x01153AA9L},{0xB3E1984BL,0xC1846E97L},{4294967289UL,1UL},{0x02D1F73EL,4294967289UL},{4294967294UL,4UL}}};
            int l_54[6];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_54[i] = (-9L);
            g_38[1][2] = l_37[1];
            for (g_34 = (-3); (g_34 >= 6); g_34 = safe_add_func_uint16_t_u_u(g_34, 3))
            {
                l_54[2] = (safe_mul_func_uint16_t_u_u(func_43(func_46((safe_lshift_func_int16_t_s_s(((g_38[3][4] < ((l_54[2] = (g_53[2] = l_52[2][8][1])) > (func_55((g_33 != l_57)) == (l_57 != (safe_add_func_uint8_t_u_u(0x7BL, (safe_rshift_func_int16_t_s_s((p_25 > (safe_add_func_int32_t_s_s(l_37[5], p_25))), l_78)))))))) <= l_52[1][2][1]), g_38[1][2])), p_25, p_26), g_935), p_26));
                if (p_26)
                    break;
                for (g_521 = (-11); (g_521 < 57); g_521 = safe_add_func_int8_t_s_s(g_521, 1))
                {
                    return l_1158;
                }
                l_57 = (g_141[2][0][6] & (g_499 = (safe_mul_func_int8_t_s_s(l_57, (((safe_mod_func_int8_t_s_s((l_37[7] && l_57), p_26)) == (((safe_add_func_uint8_t_u_u(0x70L, ((l_1168 = (safe_lshift_func_int16_t_s_s(l_1167, (g_893[0] != (1UL >= 0xCC793B04L))))) == p_26))) < 255UL) >= g_906)) == l_1158)))));
            }
            return l_1158;
        }
        return l_1169[8][0];
    }
    else
    {
        char l_1172 = 0x2AL;
        l_1172 = (l_1169[8][0] >= (safe_mod_func_int32_t_s_s(0x8DC4ACC4L, g_38[0][3])));
    }
    l_57 &= (l_1168 > l_1173);
    return l_1174;
}







static unsigned short func_43(unsigned short p_44, unsigned char p_45)
{
    int l_1032 = 0xA31959F3L;
    int l_1037 = (-1L);
    int l_1054[4][1] = {{(-1L)},{0x7D7DAF9CL},{(-1L)},{0x7D7DAF9CL}};
    short l_1129 = (-2L);
    int l_1154 = 0xF34F0C8FL;
    int l_1155 = 0xD71007EAL;
    int i, j;
    for (g_700 = (-7); (g_700 >= 44); g_700 = safe_add_func_int32_t_s_s(g_700, 1))
    {
        unsigned char l_1033 = 0xE2L;
        short l_1036 = 7L;
        int l_1044 = 0x764C9508L;
        int l_1045 = 0L;
        l_1033 = (l_1032 = p_44);
        if ((safe_lshift_func_int8_t_s_u(l_1036, l_1037)))
        {
            g_699 |= g_708;
        }
        else
        {
            char l_1047 = 0xEDL;
            int l_1048 = 0xAEFDF645L;
            unsigned l_1049 = 0x0B5FCBFBL;
            int l_1071[8] = {6L,6L,6L,6L,6L,6L,6L,6L};
            unsigned short l_1121 = 0xA72DL;
            short l_1128 = 0L;
            char l_1137[7][9] = {{0x86L,0x1DL,0x4AL,0x86L,0x7BL,0x86L,0x4AL,0x1DL,0x86L},{(-1L),0x1DL,(-1L),0x4AL,(-1L),(-1L),0x4AL,0L,0x4AL},{0x4AL,0x7BL,(-1L),(-1L),0x7BL,0x4AL,0xABL,0L,(-1L)},{(-1L),(-1L),0x4AL,(-1L),0x1DL,(-1L),(-1L),0x1DL,(-1L)},{0x86L,0x7BL,0x86L,(-1L),0L,0xABL,0x4AL,0x7BL,(-1L)},{0xABL,0L,(-1L),0xABL,0x1DL,0xABL,(-1L),0L,0xABL},{0x86L,0L,(-1L),(-1L),0xC0L,0x86L,(-1L),(-1L),(-1L)}};
            int i, j;
            for (l_1033 = 0; (l_1033 < 4); l_1033 = safe_add_func_int32_t_s_s(l_1033, 8))
            {
                int l_1042 = 0x6A2B6200L;
                int l_1046 = 0x108698EEL;
                for (g_60 = 0; (g_60 < 30); g_60 = safe_add_func_uint8_t_u_u(g_60, 1))
                {
                    int l_1043 = (-1L);
                    int l_1069 = (-3L);
                    unsigned l_1070 = 0xDA7FA324L;
                    int l_1107 = 0xA1B81F1AL;
                    g_557 ^= (l_1042 = (l_1037 |= ((l_1036 & p_45) == g_560)));
                    --l_1049;
                    g_65 &= (func_86(p_44, p_45, l_1047, ((l_1071[7] &= (safe_mod_func_uint16_t_u_u(g_556, (g_34 ^ (((g_499++) == (l_1070 = (l_1069 = (safe_add_func_uint16_t_u_u(((g_38[3][7] = (((((safe_lshift_func_int8_t_s_u(g_177[1], (((l_1048 = (+(safe_div_func_int32_t_s_s(((-5L) < (safe_add_func_uint16_t_u_u(0x9466L, (g_906 = (!((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_1044, 65534UL)), g_68)) <= 1L)))))), 1L)))) ^ l_1042) < l_1037))) || (-4L)) | 0xA251B305L) >= g_645) >= p_44)) && g_506), 65535UL))))) >= 65535UL))))) < 0x8E19L), g_700) != l_1043);
                    for (g_68 = 0; (g_68 == (-7)); g_68 = safe_sub_func_uint32_t_u_u(g_68, 5))
                    {
                        unsigned char l_1094 = 9UL;
                        int l_1096 = 0xFCB39FD6L;
                        g_699 = (l_1069 = g_392);
                        l_1096 = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((func_86(p_45, (safe_mod_func_int32_t_s_s(g_53[5], (safe_div_func_int8_t_s_s(func_86(func_86((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((++g_392), 8)) || ((g_38[0][8]++) ^ func_86(g_141[2][0][6], (g_699 |= p_45), l_1070, p_44, p_44))), l_1054[1][0])), p_45)), l_1044, g_33, p_45, p_44), l_1094, g_894, l_1046, g_69), (-1L))))), l_1094, g_1095, g_807) == g_971[6]) ^ g_906), 1)), g_556)) <= g_894), 5));
                        l_1045 = ((l_1054[0][0] |= (g_699 = ((safe_add_func_uint8_t_u_u((((l_1107 = (safe_mul_func_uint16_t_u_u((((-1L) >= (safe_rshift_func_uint16_t_u_s(0xC144L, (func_86(g_990[4], p_44, l_1094, (g_141[2][0][6] = g_53[0]), p_44) & (l_1069 |= (safe_sub_func_uint32_t_u_u(((p_44 ^ 0x9FFAL) || 0x6CL), l_1043))))))) <= g_971[7]), g_936))) & l_1048) != g_284), p_44)) & l_1033))) ^ 0L);
                    }
                }
                if (l_1049)
                    continue;
                g_65 ^= (safe_rshift_func_int8_t_s_u(1L, 7));
                for (g_64 = 0; (g_64 <= 2); g_64 += 1)
                {
                    const unsigned l_1118 = 0xEC6D1052L;
                    for (g_505 = 0; (g_505 <= 0); g_505 += 1)
                    {
                        int l_1114 = (-1L);
                        int i;
                        l_1054[2][0] = g_558[g_64];
                        g_401 &= ((safe_div_func_uint16_t_u_u(((((-1L) ^ ((p_44 && g_505) ^ func_86(g_990[1], ((safe_sub_func_uint8_t_u_u(func_86(g_505, g_990[2], (((++g_1115[0]) >= func_86(l_1118, (p_44 >= ((safe_mod_func_int16_t_s_s((0x19F2169DL > 4294967295UL), g_284)) == p_45)), p_45, g_893[0], p_45)) ^ g_60), p_45, l_1036), g_694)) != p_44), g_274, g_66[2], g_906))) < p_44) | l_1121), g_644[1])) < g_558[0]);
                    }
                    return p_44;
                }
            }
            for (g_60 = 25; (g_60 < 1); g_60--)
            {
                int l_1134 = 0L;
                const unsigned short l_1142 = 0UL;
                g_401 = (safe_div_func_int16_t_s_s((9UL ^ (func_86(p_45, l_1128, l_1129, l_1054[0][0], p_44) != ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((p_45 == (0L > p_45)), l_1134)), p_44)) != p_44))), g_34));
                l_1071[5] = (l_1134 > g_527);
                g_65 ^= ((((safe_mod_func_int32_t_s_s((l_1137[0][6] = p_45), (safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_141[0][0][0], func_86(p_44, l_1049, g_402, ((g_521 <= func_86(p_44, g_990[4], g_60, p_45, p_45)) && 0L), l_1129))), g_527)))) || l_1032) | 7UL) || 0xCCB0CA11L);
                g_557 &= func_86(g_527, ((l_1048 ^= func_86(func_86(func_86(l_1142, (l_1044 = func_86(p_45, g_990[1], (safe_rshift_func_int16_t_s_u(l_1137[2][3], 13)), l_1047, ((safe_add_func_uint8_t_u_u(0UL, (g_402++))) > (l_1054[0][0] = ((g_724[2][8][1] >= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_1049 | g_1153), g_724[4][5][1])), (-10L)))) < p_45))))), l_1154, l_1045, g_506), l_1032, g_692, g_699, p_44), p_45, g_808[2][1], g_53[2], l_1071[1])) < 7L), l_1137[0][6], l_1129, g_906);
            }
            if (g_1115[0])
                break;
        }
    }
    g_1153 = (g_557 ^= 0x5EDCF4AAL);
    l_1154 &= (-8L);
    l_1054[0][0] = p_44;
    return l_1155;
}







static unsigned short func_46(unsigned p_47, unsigned char p_48, int p_49)
{
    unsigned short l_102 = 0xF42BL;
    unsigned l_105 = 4294967288UL;
    int l_106[4][9] = {{0x83BD055DL,0x72C13769L,0x83BD055DL,(-8L),1L,(-8L),0x83BD055DL,0x72C13769L,0x83BD055DL},{(-4L),0x87233ED7L,(-4L),(-4L),0x87233ED7L,(-4L),(-4L),0x87233ED7L,(-4L)},{0x83BD055DL,0x72C13769L,0x83BD055DL,(-8L),1L,(-8L),0x83BD055DL,0x72C13769L,0x83BD055DL},{(-4L),0x87233ED7L,(-4L),(-4L),0x87233ED7L,(-4L),(-4L),0x87233ED7L,(-4L)}};
    int i, j;
lbl_978:
    for (p_48 = (-1); (p_48 >= 39); p_48++)
    {
        char l_81[4];
        int l_101 = 0xD5A8D4E4L;
        int l_103 = (-10L);
        unsigned l_104 = 0x33A9B92FL;
        int i;
        for (i = 0; i < 4; i++)
            l_81[i] = 1L;
        if (l_81[1])
            break;
        l_106[1][7] = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(func_86((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(0x5DB5L)), 4)), func_55((safe_add_func_uint8_t_u_u(248UL, g_60))), g_66[1], p_48, ((l_106[1][7] = ((l_105 |= (safe_mod_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(p_48, (g_65 ^= ((l_101 = l_81[1]) & (l_103 |= l_102))))) ^ (-8L)), l_104))) == 1L)) | g_68)), 0x50L)), g_53[4]));
    }
    for (p_47 = 3; (p_47 >= 54); p_47 = safe_add_func_int16_t_s_s(p_47, 6))
    {
        unsigned l_120 = 1UL;
        int l_452 = (-2L);
        int l_994 = 0xB817B640L;
        if ((safe_div_func_uint16_t_u_u((65530UL <= func_113((func_118(l_120) ^ p_49), (++p_48), p_49, (safe_mod_func_int32_t_s_s(l_105, (safe_mul_func_uint8_t_u_u((l_452 = (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_68 & g_33), (safe_div_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_49, l_106[1][7])), 1UL)), g_34)) == l_120), 0x95L)))), 0xA1L))), l_120)))))), 3L)))
        {
            unsigned l_959 = 0xB5B1F210L;
            unsigned short l_972 = 1UL;
            int l_991 = 2L;
            int l_1029 = 0L;
            for (g_68 = 2; (g_68 >= 0); g_68 -= 1)
            {
                int l_970 = (-1L);
                int l_973 = 0x89D411EEL;
                int i;
                ++l_959;
                l_972 = ((((safe_sub_func_int16_t_s_s(g_558[g_68], l_106[1][7])) == func_55(g_693[0][5][0])) | (g_557 & (l_102 == (~(g_971[7] = (l_970 = ((l_102 || (safe_mul_func_uint8_t_u_u(l_959, ((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(p_49, 14)) == l_959) > g_53[2]), p_49)) ^ 0x7167L)))) > g_940))))))) | l_959);
                g_974--;
                for (g_206 = 1; (g_206 >= 0); g_206 -= 1)
                {
                    short l_979[8][9][3] = {{{(-4L),1L,0L},{(-1L),(-1L),(-5L)},{(-4L),(-1L),(-1L)},{1L,0L,0L},{0x1D11L,0x35D1L,0xD876L},{1L,1L,0x7159L},{0x9CA4L,0L,1L},{(-5L),0L,(-1L)},{0xD876L,0L,1L}},{{0L,(-5L),(-1L)},{3L,(-1L),1L},{0x1A58L,0L,0x7159L},{1L,1L,1L},{7L,1L,0xE130L},{0x35D1L,(-1L),0x9F7AL},{0xE130L,0x7159L,0x89DCL},{0xD876L,0L,1L},{(-1L),0x7159L,1L}},{{0x7DCDL,(-1L),0xD876L},{(-4L),1L,0x6FEAL},{(-4L),1L,(-4L)},{1L,0xE130L,0L},{3L,0x9F7AL,0xA809L},{0x2C6BL,0x89DCL,(-5L)},{0x9F7AL,1L,0x7DCDL},{0x2C6BL,1L,0x1A58L},{3L,0xD876L,0x449FL}},{{1L,0x6FEAL,(-1L)},{(-4L),(-4L),0x6F6EL},{(-4L),0L,0L},{0x7DCDL,0xA809L,(-1L)},{(-1L),(-5L),0L},{0xD876L,0x7DCDL,(-1L)},{0xE130L,0x1A58L,0L},{0x35D1L,0x449FL,0x6F6EL},{7L,(-1L),(-1L)}},{{1L,0x6F6EL,0x449FL},{1L,0L,0x1A58L},{0x449FL,(-1L),0x7DCDL},{0L,0L,(-5L)},{1L,(-1L),0xA809L},{0x89DCL,0L,0L},{1L,0x6F6EL,(-4L)},{0x6FEAL,(-1L),1L},{(-1L),0xD876L,0x1D11L}},{{0L,7L,(-5L)},{0xF98AL,0x6F6EL,(-1L)},{7L,0x7159L,1L},{0xF98AL,1L,1L},{0L,0x2C6BL,0L},{(-1L),0xA809L,(-10L)},{1L,1L,(-4L)},{0x35D1L,0x1D11L,0L},{1L,(-5L),4L}},{{(-10L),(-1L),(-4L)},{0x2C6BL,1L,4L},{0xD876L,1L,0L},{0L,0L,(-4L)},{0x449FL,(-10L),(-10L)},{0xE130L,(-4L),0L},{(-1L),0L,1L},{0L,4L,1L},{0x1D11L,(-4L),(-1L)}},{{1L,4L,(-5L)},{0x6F6EL,0L,0x1D11L},{1L,(-4L),1L},{0xA809L,(-10L),0xA809L},{(-1L),0L,0x2C6BL},{0L,1L,1L},{0L,1L,0x7159L},{1L,(-1L),0x6F6EL},{0L,(-5L),7L}}};
                    int l_992 = 0x1EC622FDL;
                    int l_993 = 0L;
                    unsigned l_995 = 4294967295UL;
                    int i, j, k;
                    l_452 = (-6L);
                    if (g_724[(g_68 + 1)][(g_206 + 3)][g_206])
                    {
                        int l_977 = 0x9E5F15BBL;
                        if (l_977)
                            break;
                        if (l_120)
                            goto lbl_978;
                        g_557 = ((g_66[1] & (l_979[1][8][2] < (safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_971[5], l_970)), 1UL)))) != ((safe_lshift_func_uint8_t_u_s(func_86(func_55((safe_mul_func_uint16_t_u_u((g_558[g_68] == (-1L)), p_48))), g_558[g_68], l_979[1][8][2], g_175[0], p_49), p_49)) && 0x32L));
                    }
                    else
                    {
                        int i;
                        l_991 = ((g_990[6] ^= (!(g_558[g_68] = (((g_557 = 0x2217B56CL) ^ g_8) || (safe_lshift_func_uint8_t_u_u(p_48, 0)))))) < p_47);
                        l_106[2][3] = g_558[0];
                    }
                    l_995++;
                }
                for (g_936 = 0; (g_936 <= 2); g_936 += 1)
                {
                    int l_1011[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1011[i] = (-1L);
                    g_65 = g_68;
                    for (l_105 = 0; (l_105 <= 1); l_105 += 1)
                    {
                        int i, j, k;
                        return g_724[(l_105 + 1)][(g_68 + 2)][l_105];
                    }
                    for (g_206 = 2; (g_206 >= 0); g_206 -= 1)
                    {
                        unsigned char l_1006 = 0x53L;
                        int l_1018 = 1L;
                        int i;
                        g_401 = (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((g_274 || (safe_rshift_func_uint16_t_u_s(l_1006, (g_558[g_206] = (safe_mod_func_uint16_t_u_u(g_34, (l_106[1][7] = (+((safe_mul_func_int8_t_s_s(((g_402 ^= p_49) >= func_55(func_55(g_936))), (l_973 |= g_940))) < ((0x3B9FL | l_991) <= 0x2003L)))))))))), l_1011[7])), l_1011[7])), g_561));
                        l_1018 = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(0x62L, l_1011[8])), func_55((safe_lshift_func_int8_t_s_u(p_47, 0)))));
                    }
                    g_65 ^= (((safe_sub_func_int8_t_s_s(l_991, ((safe_sub_func_int16_t_s_s(((g_700 &= g_392) <= 0x33L), (g_906 = func_55((safe_div_func_int16_t_s_s(p_47, 65532UL)))))) <= l_452))) <= (((((l_1029 = ((safe_lshift_func_uint16_t_u_s(0x6A7DL, (safe_div_func_int16_t_s_s(p_48, g_561)))) >= p_47)) != 0xCEFA13AAL) >= 7L) != p_49) || l_120)) | 1L);
                }
            }
        }
        else
        {
            return g_894;
        }
    }
    return p_49;
}







static unsigned char func_55(unsigned char p_56)
{
    const int l_63[9][1][9] = {{{0x0BF28884L,0x76E3B61EL,(-9L),0x76E3B61EL,0x0BF28884L,0x76E3B61EL,(-9L),0x76E3B61EL,0x0BF28884L}},{{0L,0xB1ECBC59L,0L,1L,1L,0L,0xB1ECBC59L,0L,0L}},{{0x96394AE9L,0x76E3B61EL,0x96394AE9L,0x4D09D52FL,0x96394AE9L,0x76E3B61EL,0x96394AE9L,0x4D09D52FL,0x96394AE9L}},{{0L,1L,0xB1ECBC59L,0xB1ECBC59L,1L,0L,0L,0L,0L}},{{0x0BF28884L,0x4D09D52FL,(-9L),0x4D09D52FL,0x0BF28884L,0x4D09D52FL,(-9L),0x4D09D52FL,0x0BF28884L}},{{1L,0xB1ECBC59L,0xB1ECBC59L,1L,0L,0L,0L,0L,1L}},{{0x96394AE9L,0x4D09D52FL,0x96394AE9L,0x76E3B61EL,0x96394AE9L,0x4D09D52FL,0x96394AE9L,0x76E3B61EL,0x96394AE9L}},{{1L,1L,0L,0xB1ECBC59L,0L,0L,0xB1ECBC59L,0L,1L}},{{0x0BF28884L,0x76E3B61EL,(-9L),0x76E3B61EL,0x0BF28884L,0x76E3B61EL,(-9L),0x76E3B61EL,0x0BF28884L}}};
    int l_67 = 0xA6F2DB44L;
    int i, j, k;
    for (p_56 = (-2); (p_56 != 39); ++p_56)
    {
        ++g_60;
    }
    g_64 = l_63[4][0][1];
    g_69--;
    return l_63[5][0][2];
}







static unsigned char func_86(const int p_87, int p_88, char p_89, const char p_90, int p_91)
{
    unsigned l_107 = 5UL;
    int l_108 = 0x9415F902L;
    l_108 = l_107;
    return g_60;
}







static unsigned short func_113(short p_114, unsigned char p_115, const unsigned char p_116, int p_117)
{
    unsigned l_457 = 0UL;
    int l_478 = 0x4C05B71EL;
    int l_500 = 0x25D8C701L;
    int l_503[10][10] = {{0xD99DD450L,(-1L),0x6BA64444L,1L,(-1L),0x6BA64444L,(-7L),0L,0xD99DD450L,(-7L)},{0L,(-1L),0x36421B82L,(-1L),(-1L),1L,0x35B88F1BL,0x35B88F1BL,1L,(-1L)},{(-1L),(-7L),(-7L),(-1L),0xD99DD450L,0x6BA64444L,0x35B88F1BL,0xD99DD450L,1L,(-1L)},{1L,(-1L),0x6BA64444L,(-7L),0L,0xD99DD450L,(-7L),0x35B88F1BL,1L,1L},{0L,(-1L),0x8E61842CL,(-1L),(-1L),0x8E61842CL,(-1L),0L,1L,(-1L)},{0L,1L,(-7L),(-1L),1L,0xD99DD450L,0x35B88F1BL,0x6BA64444L,0xD99DD450L,(-1L)},{1L,(-1L),(-7L),1L,0L,0x6BA64444L,0x6BA64444L,0L,1L,(-7L)},{(-1L),(-1L),0x8E61842CL,(-1L),0L,1L,(-1L),0x35B88F1BL,0x7AF16294L,(-1L)},{0L,(-7L),0x6BA64444L,(-1L),1L,0x6BA64444L,(-1L),0xD99DD450L,0xD99DD450L,(-1L)},{0xD99DD450L,(-1L),(-7L),(-7L),(-1L),0xD99DD450L,0x6BA64444L,0x35B88F1BL,0xD99DD450L,1L}};
    int l_542 = 0xD435CDE2L;
    unsigned short l_584 = 65531UL;
    const int l_617 = 2L;
    unsigned short l_624 = 1UL;
    int l_658 = 1L;
    char l_739 = 0xE9L;
    const unsigned l_776 = 0x4E593CE4L;
    const unsigned l_826 = 1UL;
    int l_913 = 5L;
    int i, j;
lbl_927:
    for (g_65 = 0; (g_65 >= 28); ++g_65)
    {
        int l_455 = 0x630AD938L;
        int l_456 = 0xCCF6A44CL;
        unsigned l_489[1][4];
        int l_543 = 0x58DFC9A0L;
        unsigned char l_618 = 0x06L;
        int l_619 = 0x118D950DL;
        char l_684 = (-1L);
        int l_697 = 0xE7B281FAL;
        char l_771 = 1L;
        unsigned char l_772[2][7] = {{0xB9L,0xB3L,0xB9L,255UL,255UL,0xB9L,0xB3L},{255UL,0xB3L,250UL,250UL,0xB3L,255UL,0xB3L}};
        int l_777 = 0L;
        unsigned l_809 = 0x66B73B2EL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_489[i][j] = 0xB9BC567CL;
        }
        ++l_457;
        if (func_55((0x30A5L != l_456)))
        {
            const short l_464[7] = {0L,0L,0L,0L,0L,0L,0L};
            int l_501 = 0x88EA05A7L;
            int l_502 = 0xCCE8D195L;
            int i;
            g_401 = 0x06F14D4AL;
            for (g_281 = (-8); (g_281 > 53); g_281 = safe_add_func_int16_t_s_s(g_281, 1))
            {
                char l_469 = 1L;
                int l_472 = 1L;
                if (p_114)
                {
                    unsigned short l_470 = 0x7CABL;
                    int l_471 = (-1L);
                    l_472 = ((l_471 |= (g_53[2] != func_86((safe_sub_func_uint16_t_u_u(((l_464[0] <= g_175[0]) ^ (p_116 >= (++g_69))), func_86(((!g_8) > ((3UL < p_116) && (safe_sub_func_int8_t_s_s(func_86((g_53[2] > (((l_469 ^= (-3L)) >= l_457) != 0UL)), l_470, l_470, p_114, l_464[0]), 0xDAL)))), p_115, g_141[3][0][0], p_115, g_281))), g_141[2][0][6], l_455, l_464[2], g_34))) & 1UL);
                    for (g_151 = 0; (g_151 <= 5); g_151 += 1)
                    {
                        int i;
                        return g_53[g_151];
                    }
                    for (g_299 = (-12); (g_299 < 4); g_299 = safe_add_func_uint16_t_u_u(g_299, 8))
                    {
                        unsigned char l_477 = 8UL;
                        l_471 = (safe_sub_func_uint32_t_u_u(g_60, p_115));
                        if (p_117)
                            continue;
                        l_478 |= ((g_206 &= 0x2AL) <= (l_477 = (p_117 & ((g_177[1] = g_68) ^ 8UL))));
                    }
                    g_401 = ((safe_rshift_func_int8_t_s_s((l_456 = ((safe_rshift_func_int16_t_s_u(0L, 8)) | 0x71BD91A2L)), 6)) <= (l_478 |= (safe_sub_func_uint8_t_u_u(l_455, p_115))));
                }
                else
                {
                    unsigned l_490 = 7UL;
                    for (p_117 = 0; (p_117 < (-26)); p_117--)
                    {
                        if (p_114)
                            break;
                        if (g_175[0])
                            break;
                        l_490 ^= (safe_mod_func_int8_t_s_s(0x86L, (~l_489[0][1])));
                        if (p_115)
                            break;
                    }
                    for (g_68 = 0; g_68 < 4; g_68 += 1)
                    {
                        for (g_60 = 0; g_60 < 9; g_60 += 1)
                        {
                            g_38[g_68][g_60] = 0x722531EFL;
                        }
                    }
                    g_401 = (l_500 = (((safe_add_func_int8_t_s_s((l_472 = g_68), (safe_rshift_func_int16_t_s_u(p_116, 13)))) <= (g_392 <= (func_55(l_490) == (l_478 = (safe_div_func_int16_t_s_s(0x1B3EL, (safe_rshift_func_int8_t_s_u(((g_177[1] &= 5L) == (g_499 = (0x0CF3L | l_469))), 3)))))))) < 0x78L));
                }
                g_401 = p_114;
            }
            if (l_500)
                continue;
            l_502 &= ((func_55(p_116) != l_464[0]) | (l_501 ^= g_38[0][0]));
        }
        else
        {
            unsigned short l_511[3];
            int l_554[7];
            unsigned l_585 = 0x6067CA7EL;
            int l_586 = 0x244248F9L;
            int i;
            for (i = 0; i < 3; i++)
                l_511[i] = 1UL;
            for (i = 0; i < 7; i++)
                l_554[i] = 0x9727EE72L;
            if (g_401)
                break;
            if (func_86(g_66[1], g_299, p_117, (g_141[0][3][1] = func_55(l_489[0][1])), p_114))
            {
                char l_504[1][10][5] = {{{1L,(-1L),(-10L),(-1L),1L},{(-1L),0xFCL,(-6L),(-1L),(-6L)},{0x34L,0x34L,(-10L),1L,3L},{0xFCL,(-1L),(-1L),0xFCL,(-6L)},{(-1L),1L,0xADL,0xADL,1L},{(-6L),(-1L),0L,5L,5L},{0L,0x34L,0L,0xADL,(-10L)},{(-1L),0xFCL,5L,0xFCL,(-1L)},{0L,(-1L),0x34L,1L,0x34L},{(-6L),(-6L),5L,(-1L),3L}}};
                int i, j, k;
                ++g_506;
                if (g_402)
                    continue;
                for (g_402 = 0; (g_402 != 40); ++g_402)
                {
                    l_503[2][3] |= l_504[0][0][2];
                }
                l_511[1]++;
            }
            else
            {
                short l_526[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_526[i] = 1L;
                if (p_116)
                    break;
                l_456 &= func_55((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((p_115 >= l_511[1]), p_116)), g_518)));
                for (g_64 = 0; (g_64 <= (-30)); --g_64)
                {
                    --g_521;
                    g_527 = (g_401 = ((g_274 ^ (((safe_add_func_uint32_t_u_u((g_38[3][0] &= g_151), (~l_455))) < p_117) ^ l_526[0])) > 1UL));
                }
                if (g_34)
                    continue;
            }
            if (((safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(4L, (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(p_115, (l_543 |= (safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((l_456 &= (g_34 && (l_478 > (((safe_lshift_func_uint16_t_u_s(((1UL ^ ((l_500 ^= 0xC4L) < p_117)) || ((g_38[0][2] = g_53[2]) >= func_55(g_402))), 4)) != 0x1BL) > 0UL)))), 7)) && l_542), g_392))))), 0xEB19E168L)))) || p_114), g_392)) <= l_489[0][3]))
            {
                for (p_117 = 5; (p_117 >= 1); p_117 -= 1)
                {
                    for (g_402 = 0; (g_402 <= 5); g_402 += 1)
                    {
                        int i;
                        g_401 = (+g_66[g_402]);
                    }
                    g_401 = (safe_lshift_func_int8_t_s_u(g_177[0], g_38[1][4]));
                    l_456 = ((g_392 < l_457) || ((l_511[2] >= 0x3961L) != (p_116 < ((l_503[2][3] ^= (~g_65)) & (p_114 != (safe_lshift_func_uint16_t_u_s((l_543 ^= p_116), ((safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_274, g_69)), g_177[0])) > g_177[1]), l_511[1])) > g_60))))))));
                }
            }
            else
            {
                int l_555[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_555[i] = 0x928E7DD5L;
                --g_561;
                l_500 = p_115;
                l_456 = g_521;
                for (g_499 = 0; (g_499 <= 6); g_499 += 1)
                {
                    int i;
                    l_554[g_499] = (l_554[g_499] <= g_505);
                }
            }
            l_554[1] = (l_586 &= (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(p_116, g_561)), (g_557 = (safe_mul_func_int8_t_s_s(g_299, (!func_55((safe_mul_func_uint8_t_u_u(((((safe_sub_func_int32_t_s_s(((+(++g_38[3][6])) == (safe_lshift_func_uint16_t_u_s((((l_554[3] = (l_543 = (safe_lshift_func_int16_t_s_s(p_114, func_86(g_557, (func_86((!l_489[0][1]), (safe_rshift_func_uint16_t_u_u((func_86(g_177[0], ((safe_mod_func_uint32_t_u_u(0xF5B8F5E7L, func_86(p_116, p_115, p_117, g_68, l_456))) & l_554[1]), g_69, g_560, p_114) != 0xCF3CL), 13)), l_584, g_34, l_585) < g_392), l_478, l_511[1], l_543))))) != 0xC5B8ABC3L) ^ g_499), 9))), g_175[0])) >= g_284) >= 0x14B2L) <= (-7L)), 4L))))))))));
        }
        for (g_560 = (-8); (g_560 != 20); g_560 = safe_add_func_uint16_t_u_u(g_560, 6))
        {
            unsigned l_591[10] = {0x5E154FA8L,2UL,0x5E154FA8L,2UL,0x5E154FA8L,2UL,0x5E154FA8L,2UL,0x5E154FA8L,2UL};
            int l_603 = 0xCC7CE0DFL;
            int l_648 = 0x58E331A5L;
            short l_650[4];
            unsigned char l_689[2];
            int l_707 = 0xC6EDAE68L;
            const unsigned char l_762 = 0xBAL;
            int i;
            for (i = 0; i < 4; i++)
                l_650[i] = 0x482BL;
            for (i = 0; i < 2; i++)
                l_689[i] = 0UL;
            if ((l_456 = 0L))
            {
                for (g_33 = 18; (g_33 >= (-22)); g_33 = safe_sub_func_int16_t_s_s(g_33, 2))
                {
                    l_591[2]--;
                    return l_591[7];
                }
                for (g_557 = 0; (g_557 >= 29); g_557++)
                {
                    unsigned l_631 = 0x2474208FL;
                    int l_642[10][4];
                    int i, j;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_642[i][j] = 1L;
                    }
                    for (l_457 = (-19); (l_457 < 43); l_457++)
                    {
                        int l_602[3][2][4] = {{{0L,0x0F81F5E8L,0L,0x0F81F5E8L},{0L,0x0F81F5E8L,0L,0x0F81F5E8L}},{{0L,0x0F81F5E8L,0L,0x0F81F5E8L},{0L,0x0F81F5E8L,0L,0x0F81F5E8L}},{{0L,0x0F81F5E8L,0L,0x0F81F5E8L},{0L,0x0F81F5E8L,0L,0x0F81F5E8L}}};
                        int i, j, k;
                        g_604 &= (((((g_561 >= (safe_mul_func_int16_t_s_s(0x4A43L, (+0xBED2L)))) <= (safe_add_func_uint8_t_u_u(g_60, g_558[0]))) > func_86(p_117, (p_114 | (g_69 & (l_603 ^= l_602[1][1][2]))), p_115, p_116, g_141[1][3][5])) | g_66[1]) > p_114);
                        if (g_175[0])
                            break;
                        l_619 = (safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0x48B7L, (func_55(g_141[2][0][6]) && ((~(g_560 & (func_55((g_53[4]--)) < 255UL))) == ((0xE883L < (p_117 > l_617)) >= 8L))))), p_115)) == g_175[0]), g_175[0])), p_114)) ^ l_618), 0x073A7401L));
                    }
                    l_619 = func_86((((((p_116 ^ (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_558[0], (((p_114 >= l_624) && p_115) != (safe_add_func_int32_t_s_s((255UL <= (safe_lshift_func_uint16_t_u_s(((p_117 || (func_86(g_151, (safe_sub_func_int8_t_s_s(((+g_284) != 0x42L), 254UL)), l_631, l_631, p_115) || p_114)) ^ g_299), 1))), l_591[2]))))), 0L))) < p_115) != g_284) && l_624) | l_631), p_117, l_543, p_116, p_115);
                    if (g_560)
                        continue;
                    for (g_556 = 0; (g_556 <= 3); g_556 += 1)
                    {
                        int i, j, k;
                        l_456 |= (func_86(((l_591[(g_556 + 5)] = func_55(l_591[(g_556 + 1)])) != g_141[g_556][g_556][(g_556 + 2)]), p_117, g_141[g_556][g_556][(g_556 + 2)], (!p_117), ((l_631 != 0x95L) > (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_642[1][2] = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_618 >= p_115), p_114)), g_558[0]))), 0xFDL)), g_506)), p_115)))) | 0x1540L);
                    }
                }
                if (g_8)
                    continue;
                if (p_117)
                    continue;
            }
            else
            {
                int l_643[3];
                int l_649 = (-7L);
                int i;
                for (i = 0; i < 3; i++)
                    l_643[i] = 1L;
                g_645--;
                --g_651;
                g_557 = (p_117 || ((0xD1L && (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((5UL ^ (g_392--)), l_542)), p_117))) != (p_114 || (safe_mod_func_uint32_t_u_u((l_648 |= g_177[4]), 0x422E0EE3L)))));
                l_649 = ((0xB6122386L & ((safe_sub_func_int32_t_s_s(func_55(((safe_div_func_uint16_t_u_u(func_86((safe_mod_func_int16_t_s_s((-2L), (l_648 = l_603))), g_505, p_116, p_114, p_117), p_114)) & g_556)), p_116)) ^ 0xE2L)) <= p_117);
            }
            if (g_66[1])
                break;
            for (g_499 = 0; (g_499 == 30); g_499 = safe_add_func_uint16_t_u_u(g_499, 7))
            {
                const unsigned short l_683 = 1UL;
                int l_690[8][4][5] = {{{0x067DA672L,0xE673F640L,0L,0L,5L},{0x4683590FL,(-9L),0x667FF0BEL,(-5L),(-1L)},{0x48886D9AL,0x4683590FL,(-1L),0L,0x5726BCB5L},{0xE673F640L,0x4D2F85AEL,7L,(-9L),1L}},{{0L,(-8L),0x667FF0BEL,(-6L),0L},{0xD0A11D10L,0xB1D82DBEL,0L,8L,0x3AFB107DL},{0xD0A11D10L,0x65C12292L,(-4L),0x3601DB38L,2L},{0L,(-9L),0x971CEC49L,0xC08E6EC3L,5L}},{{0xE673F640L,1L,0xEACD9F30L,4L,4L},{0x48886D9AL,0L,0x48886D9AL,0x5E84F475L,(-6L)},{(-9L),0x5726BCB5L,0xB9F2D266L,0x48886D9AL,0xFAB2E2FAL},{(-1L),0xDA0C6AE4L,0x9C7DCCA3L,(-10L),1L}},{{0L,5L,0xB9F2D266L,0xFAB2E2FAL,0x067DA672L},{0L,6L,0x48886D9AL,0x4683590FL,(-1L)},{7L,9L,0xEACD9F30L,0x667FF0BEL,0x971CEC49L},{4L,6L,0x971CEC49L,0xB1D82DBEL,(-9L)}},{{0x5726BCB5L,5L,(-4L),5L,0L},{0xC08E6EC3L,0x356A8688L,0L,0x067DA672L,0L},{0x067DA672L,(-9L),0x667FF0BEL,0L,(-9L)},{6L,0L,7L,(-9L),0x971CEC49L}},{{(-4L),0xB9F2D266L,(-1L),0xAF3ED9D5L,(-1L)},{4L,0xB4F38CB5L,0xB1D82DBEL,0xFAB2E2FAL,0L},{0L,0x8634A8EAL,0x5E84F475L,0x4D2F85AEL,0x4683590FL},{0x5E84F475L,1L,0xC08E6EC3L,(-6L),0x8634A8EAL}},{{0xEF5B6FFDL,0x8634A8EAL,1L,0x971CEC49L,0xFB48E062L},{0xE673F640L,0xB4F38CB5L,(-8L),0L,0xCF76BF01L},{0x4D2F85AEL,1L,0x356A8688L,2L,0xB1D82DBEL},{0xB1D82DBEL,(-9L),0x9C7DCCA3L,0xE673F640L,5L}},{{0xC08E6EC3L,6L,6L,4L,0x48886D9AL},{0xFAB2E2FAL,0L,0xEACD9F30L,4L,0x356A8688L},{5L,0xB1D82DBEL,0xFB48E062L,0xE673F640L,5L},{0x8634A8EAL,0L,(-6L),2L,4L}}};
                char l_721 = 0xF5L;
                int i, j, k;
                for (l_603 = 0; (l_603 <= 3); l_603 += 1)
                {
                    int i, j;
                    g_401 = (l_650[l_603] ^ ((l_543 ^= (safe_lshift_func_int16_t_s_u(((g_38[l_603][l_603] = (l_650[l_603] || (safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((l_650[l_603] == l_650[l_603]), (((1UL ^ (l_650[l_603] == (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x80141AA4L, (g_38[l_603][(l_603 + 2)] <= 0xA39C5BF4L))), p_117)))) == 1UL) || p_114))), l_618)), g_8)))) != 1L), g_556))) | g_604));
                    l_503[2][3] = ((g_53[5] = func_55(g_151)) > 5L);
                }
                l_619 = ((g_206 = ((l_603 = ((-5L) ^ p_114)) > ((0L ^ (+0xBEL)) == (l_648 = func_86(l_683, ((func_86(g_34, g_505, l_684, p_116, g_645) != g_65) > g_141[2][2][4]), g_499, l_457, l_456))))) == g_33);
                if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(l_591[0], l_689[1])), ((func_86((l_543 = (l_690[3][0][1] = l_650[2])), g_560, g_151, func_55(p_115), g_499) <= p_115) ^ p_115))))
                {
                    int l_698 = 1L;
                    int l_703 = (-1L);
                    int l_704 = 5L;
                    int l_706[4] = {0x2A42968DL,0x2A42968DL,0x2A42968DL,0x2A42968DL};
                    int i;
                    for (g_604 = 3; (g_604 >= 0); g_604 -= 1)
                    {
                        int l_691 = 0xF29967EBL;
                        int i, j, k;
                        g_694--;
                        g_700++;
                        ++g_708;
                        l_691 |= (safe_mul_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_690[(g_604 + 4)][g_604][(g_604 + 1)], (safe_div_func_uint16_t_u_u(g_644[(g_604 + 3)], 0xC834L)))), l_455)) ^ func_55(p_115)), l_690[3][0][1]));
                    }
                    if ((safe_sub_func_uint32_t_u_u(l_503[2][8], p_117)))
                    {
                        char l_722 = (-2L);
                        int l_723[6][2] = {{0x6B80F765L,0x281B3465L},{0xD98FA9A8L,0xD98FA9A8L},{0xD98FA9A8L,0x281B3465L},{0x6B80F765L,(-10L)},{0x281B3465L,(-10L)},{0x6B80F765L,0x281B3465L}};
                        int i, j;
                        l_503[2][3] = p_114;
                        if (p_114)
                            continue;
                        --g_724[1][6][0];
                    }
                    else
                    {
                        unsigned l_735 = 0x8DA0FDF9L;
                        int l_738 = 0x536C391EL;
                        g_557 = (safe_add_func_int8_t_s_s((p_117 == ((l_739 = ((safe_sub_func_uint8_t_u_u((func_86((g_401 = g_558[1]), (!func_55(g_69)), g_645, (p_116 && (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((l_735 = 0xF31BL), (p_114 <= ((l_738 &= (safe_add_func_uint8_t_u_u(254UL, 0xB8L))) || 0x982AL)))) > 0xDE20CBC9L), g_692))), p_116) & l_624), p_116)) >= g_175[0])) || 0x7E1AD441L)), 0x18L));
                        l_478 = p_116;
                        g_699 |= g_68;
                    }
                }
                else
                {
                    const short l_761 = (-1L);
                    char l_763[5];
                    int l_775 = 6L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_763[i] = 1L;
                    l_690[4][2][2] = g_392;
                    for (l_456 = 0; (l_456 >= 0); l_456 -= 1)
                    {
                        int l_756[9];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                            l_756[i] = 0xF2E42B0EL;
                        l_619 = ((l_756[2] = (p_114 = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_693[l_456][l_456][(l_456 + 3)], (g_299 = (safe_sub_func_uint16_t_u_u((((func_86((safe_add_func_int32_t_s_s((~func_86((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(l_650[l_456], 0)), (safe_add_func_uint16_t_u_u(((g_401 |= (l_756[6] = g_700)) == 0xB9F3A0E6L), ((safe_rshift_func_uint16_t_u_s((5UL & (-3L)), 4)) < ((((g_151 |= p_116) >= ((l_456 || ((g_66[4] = (0UL > g_60)) < 7L)) < g_505)) >= 1L) ^ 0L)))))), l_761)), g_141[2][0][6], p_116, l_762, l_739)), l_584)), l_690[6][1][3], p_116, g_274, l_763[1]) || 0x89D1L) > g_53[3]) | g_700), 4UL))))), 65535UL)))) == g_557);
                        return l_763[3];
                    }
                    l_503[2][3] = g_724[2][7][1];
                    if ((func_86(p_114, (l_775 = (safe_unary_minus_func_int32_t_s((g_557 ^= ((safe_mul_func_uint16_t_u_u(g_299, ((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((func_55(g_68) ^ (p_115 = 0xA8L)), 1)) | l_739), p_114)) && (g_700 == (l_772[1][1]--))))) || p_117))))), l_763[0], l_776, l_777) < 7UL))
                    {
                        l_707 = g_34;
                        g_401 ^= (0L | p_115);
                        if (g_64)
                            continue;
                        g_557 = (safe_mod_func_uint16_t_u_u((p_114 <= l_775), 65534UL));
                    }
                    else
                    {
                        int l_780 = 0x49153A55L;
                        l_780 = (0x6029L && p_117);
                    }
                }
                if ((safe_mul_func_uint16_t_u_u((3L & ((safe_add_func_int16_t_s_s(l_591[1], (safe_div_func_int32_t_s_s(p_117, g_644[1])))) | (0UL != (p_116 == (safe_mul_func_uint8_t_u_u((l_648 = ((safe_div_func_uint32_t_u_u(l_707, g_66[1])) && g_175[0])), 0xBDL)))))), 9L)))
                {
                    unsigned short l_791 = 0UL;
                    int l_802 = 0xDE4AFCB5L;
                    l_791--;
                    for (g_561 = 0; (g_561 <= 5); g_561 += 1)
                    {
                        if (g_705)
                            break;
                    }
                    l_802 = ((g_177[3] >= ((g_206 = ((func_86(p_116, g_392, p_114, (((safe_rshift_func_int16_t_s_s(g_299, 8)) | ((func_55(g_505) & ((0L <= (safe_lshift_func_uint8_t_u_u(g_38[1][2], 1))) <= g_68)) <= p_117)) & l_689[0]), p_116) <= 1UL) && p_116)) > 0x7BL)) > l_689[1]);
                }
                else
                {
                    unsigned short l_803 = 65535UL;
                    l_648 = l_803;
                    for (l_603 = (-27); (l_603 <= 21); l_603++)
                    {
                        int l_806 = 0xD9470E3CL;
                        l_619 = l_806;
                    }
                    ++l_809;
                }
            }
        }
        g_557 = func_86(func_55((g_724[0][7][1] |= (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_826, (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_624 <= g_53[2]), func_86((safe_mul_func_uint16_t_u_u(p_115, 0xEA32L)), p_117, l_503[1][2], (0x418B9132L ^ (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_456 = (safe_mul_func_uint8_t_u_u(l_489[0][3], g_65))), g_151)), p_114)), 2))), p_117))), g_281)))), 1L)) | p_114), l_777)), 5)) || g_64) && l_542) == p_116) == 0x3482L), g_694)), p_114)), 5)))), p_114, p_116, p_116, g_693[0][5][2]);
    }
    for (g_281 = 0; (g_281 >= 58); g_281 = safe_add_func_int16_t_s_s(g_281, 8))
    {
        unsigned char l_846 = 0xB2L;
        for (g_559 = 0; (g_559 >= (-12)); g_559 = safe_sub_func_uint16_t_u_u(g_559, 1))
        {
            char l_845[10][4][6] = {{{1L,(-8L),1L,0x54L,0x55L,(-1L)},{0xAFL,7L,0xA3L,2L,1L,(-8L)},{5L,0x76L,(-8L),2L,0xE4L,0x54L},{0xAFL,0xD7L,0xF9L,0x54L,0xBEL,0x38L}},{{1L,(-7L),0x35L,0x40L,0x79L,0x54L},{0xA3L,0x2FL,3L,0x38L,1L,1L},{0x11L,1L,2L,0xF5L,1L,0x36L},{0x7AL,(-1L),(-8L),0xAFL,0xB9L,0x60L}},{{0xC6L,0xBFL,0x80L,0xBEL,0xC8L,0x00L},{1L,0x36L,0xDFL,0x76L,1L,0xAFL},{0x61L,(-7L),0x38L,1L,5L,0x7AL},{0x51L,0xD7L,(-1L),0x61L,1L,(-10L)}},{{(-8L),0x79L,0xC4L,0x79L,0x11L,0xB4L},{0x36L,(-10L),0x57L,7L,0x8BL,1L},{(-1L),0x3AL,6L,0x61L,0x7AL,1L},{(-10L),2L,2L,1L,0x01L,0xBEL}},{{(-1L),0x35L,(-10L),(-8L),0x2FL,0x60L},{(-7L),0xC6L,0xF9L,0x5BL,0xD5L,0xEFL},{0x9BL,(-8L),0x2FL,0x3AL,0x3AL,0x2FL},{0xBEL,0xBEL,0x84L,(-2L),0x59L,(-1L)}},{{2L,0xDFL,0x54L,(-10L),0x93L,0xBFL},{0x60L,2L,0x54L,0x60L,0x31L,1L},{1L,0x60L,0xBFL,(-1L),0x79L,1L},{(-1L),0x79L,1L,0xBEL,0x40L,0x80L}},{{0x61L,2L,1L,(-1L),0xC1L,0x68L},{0xC1L,0x61L,0xCFL,7L,1L,0x31L},{0xA3L,(-1L),1L,0xCFL,0x55L,6L},{0x57L,(-5L),0xD5L,0x7AL,2L,(-10L)}},{{0x9BL,0x38L,0x85L,0x76L,(-8L),(-1L)},{(-1L),0x85L,0x40L,0x79L,0xE5L,0x84L},{0x7AL,1L,5L,1L,6L,(-5L)},{0x35L,0x68L,(-1L),0x93L,(-7L),6L}},{{2L,0xBFL,1L,0x80L,0xAFL,(-2L)},{0x01L,(-10L),0x61L,2L,0x38L,(-1L)},{(-1L),0x3CL,(-1L),0x57L,0xC8L,7L},{1L,0x64L,(-1L),5L,(-1L),0x00L}},{{(-1L),0x60L,1L,0x54L,1L,0xDFL},{0x35L,0xCFL,0x00L,0x7AL,0x00L,0xCFL},{7L,(-8L),0L,0xE5L,2L,0x2AL},{5L,0x35L,0x59L,0x23L,(-1L),0xEFL}}};
            int i, j, k;
            l_845[9][0][2] |= g_66[5];
            l_846++;
            for (g_694 = 3; (g_694 == 50); ++g_694)
            {
                return p_116;
            }
        }
    }
    for (l_584 = 0; (l_584 <= 2); l_584 += 1)
    {
        short l_891[5];
        int l_897 = 4L;
        int l_898 = 0x823978B6L;
        int l_899 = 0xF12D11B9L;
        int l_900 = 0xB34F63C6L;
        int l_903[4] = {(-2L),(-2L),(-2L),(-2L)};
        int i;
        for (i = 0; i < 5; i++)
            l_891[i] = 1L;
        for (g_692 = 0; (g_692 <= 2); g_692 += 1)
        {
            int l_887 = 0x78D3A611L;
            int l_901 = 1L;
            int l_902 = 0x11774F6CL;
            int l_905 = 0xA059726CL;
            unsigned l_925 = 0UL;
            unsigned l_943[8][1] = {{2UL},{0xB2FF2419L},{2UL},{0xB2FF2419L},{2UL},{0xB2FF2419L},{2UL},{0xB2FF2419L}};
            char l_953 = 0xEAL;
            int i, j;
            if (g_38[(l_584 + 1)][l_584])
            {
                unsigned l_867 = 0UL;
                int l_868 = 0x7964C4EFL;
                int l_890 = 0x23CA399FL;
                int l_904 = 0x189C563AL;
                unsigned short l_916 = 0xD916L;
                for (p_114 = 0; (p_114 <= 2); p_114 += 1)
                {
                    int i;
                    l_868 = ((((safe_div_func_int32_t_s_s((0x54L > (safe_add_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(func_55((g_724[1][6][0] ^= g_644[1])), (safe_div_func_int16_t_s_s((p_114 > ((g_558[g_692] = ((g_401 &= (safe_rshift_func_uint8_t_u_s(p_116, 6))) > p_117)) & ((safe_sub_func_uint32_t_u_u(p_115, (g_557 = (safe_mul_func_uint16_t_u_u(7UL, (safe_div_func_uint8_t_u_u(p_114, g_692))))))) & l_867))), 0xEF9EL)))) || p_116), (-1L)))), 0x3C12AC9BL)) && l_542) == g_53[2]) | g_38[(l_584 + 1)][l_584]);
                    for (g_506 = 0; (g_506 <= 7); g_506 += 1)
                    {
                        return p_115;
                    }
                }
                if (l_617)
                {
                    char l_882 = 0L;
                    int l_892[4][10][3] = {{{6L,0xC6764FF3L,(-1L)},{6L,6L,0xC6764FF3L},{0xF63FE3BDL,0xC6764FF3L,0xC6764FF3L},{0xC6764FF3L,0x5DEEA34AL,(-1L)},{0xF63FE3BDL,0x5DEEA34AL,0xF63FE3BDL},{6L,0xC6764FF3L,(-1L)},{6L,6L,0xC6764FF3L},{0xF63FE3BDL,0xC6764FF3L,0xC6764FF3L},{0xC6764FF3L,0x5DEEA34AL,(-1L)},{0xF63FE3BDL,0x5DEEA34AL,0xF63FE3BDL}},{{6L,0xC6764FF3L,(-1L)},{6L,6L,0xC6764FF3L},{0xF63FE3BDL,0xC6764FF3L,0xC6764FF3L},{0xC6764FF3L,0x5DEEA34AL,(-1L)},{0xF63FE3BDL,0x5DEEA34AL,0xF63FE3BDL},{6L,0xC6764FF3L,(-1L)},{6L,6L,0xC6764FF3L},{0xF63FE3BDL,0xC6764FF3L,0xC6764FF3L},{0xC6764FF3L,0x5DEEA34AL,(-1L)},{0xF63FE3BDL,0x5DEEA34AL,0xC6764FF3L}},{{0x5DEEA34AL,6L,0xF63FE3BDL},{0x5DEEA34AL,0x5DEEA34AL,6L},{0xC6764FF3L,6L,6L},{6L,(-1L),0xF63FE3BDL},{0xC6764FF3L,(-1L),0xC6764FF3L},{0x5DEEA34AL,6L,0xF63FE3BDL},{0x5DEEA34AL,0x5DEEA34AL,6L},{0xC6764FF3L,6L,6L},{6L,(-1L),0xF63FE3BDL},{0xC6764FF3L,(-1L),0xC6764FF3L}},{{0x5DEEA34AL,6L,0xF63FE3BDL},{0x5DEEA34AL,0x5DEEA34AL,6L},{0xC6764FF3L,6L,6L},{6L,(-1L),0xF63FE3BDL},{0xC6764FF3L,(-1L),0xC6764FF3L},{0x5DEEA34AL,6L,0xF63FE3BDL},{0x5DEEA34AL,0x5DEEA34AL,6L},{0xC6764FF3L,6L,6L},{6L,(-1L),0xF63FE3BDL},{0xC6764FF3L,(-1L),0xC6764FF3L}}};
                    int i, j, k;
                    for (g_33 = 6; (g_33 >= 0); g_33 -= 1)
                    {
                        char l_879 = 0x7DL;
                        l_868 = (safe_rshift_func_int16_t_s_u(p_116, (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_114, g_560)), g_34))));
                        l_891[0] = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(p_114, (l_890 ^= (l_868 = ((l_879 | ((safe_rshift_func_uint16_t_u_s((l_882 != (func_55(p_115) & ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_38[1][2] | (l_887 = g_558[1])), (safe_add_func_int8_t_s_s(0x07L, l_624)))), 0x14L)) ^ 1L))), 7)) <= l_867)) & p_115))))), 14)) && l_879);
                        --g_894;
                    }
                }
                else
                {
                    unsigned char l_909 = 0x3FL;
                    int l_926 = 0x76096BB8L;
                    if (g_68)
                        break;
                    for (g_699 = 2; (g_699 <= 7); g_699 += 1)
                    {
                        unsigned l_912 = 0UL;
                        g_906++;
                        l_909++;
                        l_912 = g_906;
                        if (g_141[2][0][6])
                            break;
                    }
                    g_557 = l_909;
                    l_926 |= (l_913 <= (((safe_div_func_uint8_t_u_u((g_151 = (l_916++)), (l_925 = (safe_add_func_int16_t_s_s(0xD980L, ((safe_rshift_func_int8_t_s_s((+func_86((((l_903[0] != l_658) == l_905) != g_177[1]), ((l_898 ^ (safe_add_func_uint8_t_u_u((g_402 = l_909), func_55(g_499)))) || 0xC1L), l_890, p_115, p_115)), p_115)) != 0x3319L)))))) | g_284) && p_116));
                }
                if (g_33)
                    goto lbl_927;
            }
            else
            {
                unsigned short l_950 = 0x24CEL;
                for (l_901 = 1; (l_901 <= 5); l_901 += 1)
                {
                    int l_932 = 6L;
                    int i;
                    for (g_705 = 0; (g_705 <= 9); g_705 += 1)
                    {
                        int i, j;
                        l_503[g_705][(g_692 + 2)] &= (safe_mul_func_uint16_t_u_u(g_177[l_901], ((g_66[(l_584 + 2)] != (safe_lshift_func_uint8_t_u_u(g_66[l_584], 7))) && 4294967287UL)));
                    }
                    g_699 = func_118(g_177[l_901]);
                    for (g_505 = 7; (g_505 >= 0); g_505 -= 1)
                    {
                        int l_933 = 0x6C4F8377L;
                        int l_934 = 0x5AC8E2D5L;
                        int l_939 = 6L;
                        int i;
                        l_932 = g_66[l_901];
                        g_936--;
                        --g_940;
                        ++l_943[0][0];
                    }
                }
                for (g_906 = 0; (g_906 <= 7); g_906 += 1)
                {
                    l_503[2][3] |= func_55(((safe_div_func_uint16_t_u_u(g_8, p_116)) > (safe_sub_func_uint32_t_u_u(l_950, (l_478 = ((safe_add_func_uint16_t_u_u((0xBECF8D4CL != l_953), ((safe_mod_func_int32_t_s_s(p_115, p_114)) ^ g_60))) >= p_116))))));
                    return p_115;
                }
            }
            return l_943[0][0];
        }
        if (g_206)
            continue;
        for (l_913 = 0; (l_913 <= 7); l_913 += 1)
        {
            for (l_900 = 0; (l_900 <= 7); l_900 += 1)
            {
                int l_956 = (-6L);
                int i;
                if (p_114)
                    break;
                l_956 = ((g_177[l_900] = (g_893[0] != p_115)) | 65535UL);
            }
        }
        g_699 = (safe_mod_func_int32_t_s_s(0x4327EA1FL, g_281));
    }
    return p_114;
}







static int func_118(unsigned p_119)
{
    short l_121[9] = {(-8L),(-3L),(-8L),(-8L),(-3L),(-8L),(-8L),(-3L),(-8L)};
    int l_122 = 0L;
    unsigned short l_159[1];
    unsigned char l_174[2][2];
    int l_176 = 0x93052EA8L;
    int l_321 = 4L;
    unsigned char l_341 = 0xCFL;
    int l_375 = 5L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_159[i] = 1UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_174[i][j] = 0x5EL;
    }
    if ((l_122 = (l_121[2] < p_119)))
    {
        unsigned char l_123 = 250UL;
        int l_132[1][4][7] = {{{7L,1L,7L,7L,1L,7L,7L},{1L,1L,0x91AC48AEL,1L,1L,0x91AC48AEL,1L},{1L,7L,7L,1L,7L,7L,1L},{7L,1L,7L,7L,1L,7L,7L}}};
        int i, j, k;
        l_123--;
        for (g_64 = 0; (g_64 <= 6); g_64++)
        {
            unsigned l_142[10] = {0UL,4294967289UL,0UL,0xAFFB5D17L,0xAFFB5D17L,0UL,4294967289UL,0UL,0xAFFB5D17L,0xAFFB5D17L};
            int i;
            l_122 &= func_86(l_123, (g_65 = ((func_86((safe_sub_func_int16_t_s_s((-3L), (safe_sub_func_int8_t_s_s((l_132[0][2][4] = g_53[5]), func_86(l_123, ((g_69 = g_38[3][6]) >= ((-7L) < (l_142[5] = (g_141[2][0][6] ^= (p_119 < (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(g_65, p_119)) >= 2UL), 0x2763D230L)), p_119)), p_119))))))), g_60, p_119, p_119))))), g_38[1][2], g_68, l_121[2], g_68) != p_119) <= l_123)), g_68, g_66[2], g_53[5]);
            if (p_119)
                break;
            return l_122;
        }
    }
    else
    {
        unsigned char l_152[9] = {0xEBL,0xF1L,0xF1L,0xEBL,0xF1L,0xF1L,0xEBL,0xF1L,0xF1L};
        short l_158 = 0x4787L;
        int i;
        l_159[0] = (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_64 &= ((g_38[1][2] = func_86(g_34, ((safe_div_func_uint16_t_u_u(g_141[2][0][6], g_38[1][2])) >= func_86(((((l_152[7] = (safe_rshift_func_uint8_t_u_u(g_151, 3))) || p_119) == 0xB377L) | ((safe_lshift_func_int8_t_s_u((p_119 <= (~func_86(g_34, (safe_unary_minus_func_int32_t_s((l_122 = ((safe_lshift_func_int8_t_s_u(((p_119 > g_60) <= 0x47L), 5)) <= 0x986BL)))), p_119, l_121[2], p_119))), 6)) > p_119)), g_141[0][0][5], l_121[1], g_38[1][2], g_38[2][8])), l_158, p_119, g_38[1][2])) ^ p_119)), 1)), p_119));
    }
    if (p_119)
    {
        unsigned short l_164 = 1UL;
        unsigned l_169 = 4294967288UL;
        int l_196 = 0x2CAF5ADCL;
        unsigned char l_197 = 0x27L;
        const unsigned l_211 = 0x9A9FA4E0L;
        int l_249 = (-1L);
        unsigned short l_320 = 1UL;
        int l_374[10][8][3] = {{{(-1L),0xBF149F60L,0x6B85FABEL},{(-1L),0x22CEAE8BL,0xBF149F60L},{0L,0x6B85FABEL,0x6B85FABEL},{(-4L),0x6B85FABEL,0xBA7965CAL},{5L,0x22CEAE8BL,0x46B94CA9L},{(-4L),0xBF149F60L,0x46B94CA9L},{0L,0xF19B10A1L,0xBA7965CAL},{(-1L),0xBF149F60L,0x6B85FABEL}},{{(-1L),0x22CEAE8BL,0xBF149F60L},{0L,0x6B85FABEL,0x6B85FABEL},{(-4L),0x6B85FABEL,0xBA7965CAL},{5L,0x22CEAE8BL,0x46B94CA9L},{(-4L),0xBF149F60L,0x46B94CA9L},{0L,0xF19B10A1L,0xBA7965CAL},{(-1L),0xBF149F60L,0x6B85FABEL},{(-1L),0x22CEAE8BL,0xBF149F60L}},{{0L,0x6B85FABEL,0x6B85FABEL},{(-4L),0x6B85FABEL,0xBA7965CAL},{5L,0x22CEAE8BL,0x46B94CA9L},{(-4L),0xBF149F60L,0x46B94CA9L},{0L,0xF19B10A1L,0xBA7965CAL},{(-1L),0xBF149F60L,0x6B85FABEL},{(-1L),0x22CEAE8BL,0xBF149F60L},{0L,0x6B85FABEL,0x6B85FABEL}},{{(-4L),0x6B85FABEL,0xEAAF24BCL},{0x46B94CA9L,7L,(-7L)},{0x22CEAE8BL,0xCE19E99FL,(-7L)},{0xF19B10A1L,8L,0xEAAF24BCL},{0xBA7965CAL,0xCE19E99FL,0xB379CF19L},{0xBA7965CAL,7L,0xCE19E99FL},{0xF19B10A1L,0xB379CF19L,0xB379CF19L},{0x22CEAE8BL,0xB379CF19L,0xEAAF24BCL}},{{0x46B94CA9L,7L,(-7L)},{0x22CEAE8BL,0xCE19E99FL,(-7L)},{0xF19B10A1L,8L,0xEAAF24BCL},{0xBA7965CAL,0xCE19E99FL,0xB379CF19L},{0xBA7965CAL,7L,0xCE19E99FL},{0xF19B10A1L,0xB379CF19L,0xB379CF19L},{0x22CEAE8BL,0xB379CF19L,0xEAAF24BCL},{0x46B94CA9L,7L,(-7L)}},{{0x22CEAE8BL,0xCE19E99FL,(-7L)},{0xF19B10A1L,8L,0xEAAF24BCL},{0xBA7965CAL,0xCE19E99FL,0xB379CF19L},{0xBA7965CAL,7L,0xCE19E99FL},{0xF19B10A1L,0xB379CF19L,0xB379CF19L},{0x22CEAE8BL,0xB379CF19L,0xEAAF24BCL},{0x46B94CA9L,7L,(-7L)},{0x22CEAE8BL,0xCE19E99FL,(-7L)}},{{0xF19B10A1L,8L,0xEAAF24BCL},{0xBA7965CAL,0xCE19E99FL,0xB379CF19L},{0xBA7965CAL,7L,0xCE19E99FL},{0xF19B10A1L,0xB379CF19L,0xB379CF19L},{0x22CEAE8BL,0xB379CF19L,0xEAAF24BCL},{0x46B94CA9L,7L,(-7L)},{0x22CEAE8BL,0xCE19E99FL,(-7L)},{0xF19B10A1L,8L,0xEAAF24BCL}},{{0xBA7965CAL,(-7L),7L},{0xF19B10A1L,0L,(-7L)},{0x6B85FABEL,7L,7L},{0xD93EADBCL,7L,8L},{0xBA7965CAL,0L,0xEAAF24BCL},{0xD93EADBCL,(-7L),0xEAAF24BCL},{0x6B85FABEL,0xB379CF19L,8L},{0xF19B10A1L,(-7L),7L}},{{0xF19B10A1L,0L,(-7L)},{0x6B85FABEL,7L,7L},{0xD93EADBCL,7L,8L},{0xBA7965CAL,0L,0xEAAF24BCL},{0xD93EADBCL,(-7L),0xEAAF24BCL},{0x6B85FABEL,0xB379CF19L,8L},{0xF19B10A1L,(-7L),7L},{0xF19B10A1L,0L,(-7L)}},{{0x6B85FABEL,7L,7L},{0xD93EADBCL,7L,8L},{0xBA7965CAL,0L,0xEAAF24BCL},{0xD93EADBCL,(-7L),0xEAAF24BCL},{0x6B85FABEL,0xB379CF19L,8L},{0xF19B10A1L,(-7L),7L},{0xF19B10A1L,0L,(-7L)},{0x6B85FABEL,7L,7L}}};
        unsigned l_397 = 1UL;
        short l_426 = 5L;
        int i, j, k;
        g_177[1] = (((((l_176 = ((safe_lshift_func_uint8_t_u_s((65529UL != (~p_119)), 0)) != (safe_lshift_func_int8_t_s_u(l_164, ((((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((l_169 ^ (((p_119 == g_141[0][3][2]) == (((l_122 &= ((safe_rshift_func_int16_t_s_u(p_119, (g_141[2][0][6] > ((g_65 = (((p_119 <= p_119) > p_119) > l_159[0])) > 0UL)))) & l_174[1][1])) <= l_164) == g_38[3][8])) == p_119)) == 1L), g_175[0])), p_119)) | l_169) == 3UL) == g_38[1][5]))))) > g_66[1]) <= (-8L)) ^ g_8) > g_68);
        if ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(g_151, ((!p_119) > g_53[2]))), (safe_add_func_uint16_t_u_u(l_159[0], (safe_mul_func_uint8_t_u_u(p_119, ((safe_lshift_func_int8_t_s_s((g_66[1] &= p_119), (((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(p_119, l_196)), 0x7D404005L)), l_121[5])) | g_60) != p_119))) > l_164))))))), l_197)))
        {
            unsigned l_208 = 0x6EBDA915L;
            int l_212 = (-1L);
lbl_203:
            for (g_60 = 0; (g_60 > 19); ++g_60)
            {
                const unsigned l_202[6][7][5] = {{{0x3CFAA447L,0xB54D3951L,0UL,1UL,0xCFB1E1F6L},{0UL,0x1834DD5DL,0xE489F429L,0xDB31ABE6L,1UL},{0x3EEACEA0L,1UL,0UL,1UL,0x3FEDF429L},{2UL,2UL,0UL,1UL,8UL},{1UL,4294967286UL,0xD0D5D712L,4294967286UL,0xCFB1E1F6L},{0xD0D5D712L,0UL,5UL,0x5917A22FL,0xDAE69F5BL},{8UL,0xF1836A76L,0x5E489776L,0UL,0xF624C376L}},{{0xE85FBC08L,0UL,0x1187F988L,0UL,0xDAE69F5BL},{0x121E4F29L,0UL,4294967292UL,0UL,0xCFB1E1F6L},{0xDAE69F5BL,0x6CA5C417L,0x6A10C0C6L,4294967290UL,0xA16A95B5L},{0UL,0xB54D3951L,0xF4FEEF6EL,4294967295UL,0xE85FBC08L},{4294967295UL,0x58421D5CL,0x9044EA99L,0UL,0UL},{0UL,4294967295UL,0x121E4F29L,0x2C6987CFL,0x5917A22FL},{0UL,4294967290UL,0xDB31ABE6L,4294967289UL,4294967295UL}},{{4294967292UL,0xDDE0D53BL,0xE6589940L,0x5917A22FL,0xB54D3951L},{0xCFB1E1F6L,0xE6589940L,0UL,0UL,0xB59A6631L},{4294967289UL,0x62CF2873L,0xF4FEEF6EL,0x4F43482BL,0xDAE69F5BL},{0xDAB54255L,0x62CF2873L,0xD0D5D712L,0x6A10C0C6L,0x62CF2873L},{4294967290UL,0xE6589940L,0xB59A6631L,0UL,4294967290UL},{0UL,0xDDE0D53BL,0x1187F988L,1UL,0UL},{4294967288UL,4294967290UL,0x6A10C0C6L,0x9044EA99L,0x6566E718L}},{{0UL,4294967295UL,0xDAB54255L,0xE85FBC08L,0x9044EA99L},{4294967295UL,0x58421D5CL,1UL,0x3EEACEA0L,4294967294UL},{0xDAB54255L,0xB54D3951L,0xE6589940L,0xF624C376L,0x4F43482BL},{0UL,0x29C145D4L,0x29C145D4L,0UL,0x6CA5C417L},{0x62CF2873L,0UL,0x7979A64FL,0UL,0xE85FBC08L},{0xF624C376L,0xB54D3951L,4294967290UL,4294967295UL,0UL},{0UL,4294967289UL,0x5E489776L,0UL,1UL}},{{4294967289UL,0x3EEACEA0L,4294967295UL,0UL,1UL},{4294967290UL,0x4D3D9F21L,0xF1836A76L,4294967287UL,0xAC008CE3L},{0x4D3D9F21L,0x121E4F29L,0xF624C376L,4294967294UL,0xF1836A76L},{0x593A71EFL,0xAC008CE3L,4294967295UL,0x3F8197DDL,4294967290UL},{0xA16A95B5L,0xE85FBC08L,0xD0D5D712L,0x6CA5C417L,4294967290UL},{0xDAE69F5BL,4294967292UL,4294967288UL,0x4F43482BL,5UL},{0UL,4294967290UL,0x7979A64FL,0x3EEACEA0L,0UL}},{{1UL,0x593A71EFL,0x077A8CD5L,0xE6589940L,0xDAE69F5BL},{0x2C6987CFL,0x121E4F29L,4294967295UL,0UL,0UL},{0x2C6987CFL,0x6566E718L,4294967286UL,0xB54D3951L,0x62CF2873L},{1UL,1UL,0x5E489776L,5UL,0xAC008CE3L},{0UL,4294967289UL,1UL,0UL,4294967287UL},{0xDAE69F5BL,0x4D3D9F21L,0UL,1UL,0x593A71EFL},{0xA16A95B5L,0UL,4294967295UL,0xE5B3C0A7L,0x2C6987CFL}}};
                int i, j, k;
                for (l_122 = 0; (l_122 < (-21)); l_122 = safe_sub_func_uint8_t_u_u(l_122, 7))
                {
                    for (l_196 = 0; (l_196 <= 3); l_196 += 1)
                    {
                        g_65 = l_202[1][4][3];
                    }
                }
                g_65 = p_119;
                if (g_68)
                    goto lbl_203;
            }
            l_212 &= (g_175[0] && func_86((safe_lshift_func_int8_t_s_u(func_86(l_164, (((g_206 = g_177[2]) || (safe_unary_minus_func_int32_t_s((p_119 & ((((l_208 || func_86(g_66[5], p_119, (safe_rshift_func_int16_t_s_u(0xD4E5L, (((p_119 || 0x1DL) & 0x4ACB5969L) <= p_119))), l_211, p_119)) > p_119) == 0xB3F3958AL) && (-7L)))))) & g_33), g_66[1], g_175[0], l_121[2]), p_119)), g_66[2], l_169, p_119, l_121[2]));
            l_122 = (safe_mul_func_uint16_t_u_u((!g_65), p_119));
        }
        else
        {
            int l_227[2];
            int l_289 = 0x09BE1A63L;
            int i;
            for (i = 0; i < 2; i++)
                l_227[i] = (-2L);
            if ((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((l_164 > (safe_mod_func_uint16_t_u_u((g_66[0] < g_141[0][2][0]), (+0x6924L)))) | (!func_86((0xE9L >= (safe_rshift_func_int8_t_s_u(((l_122 < ((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_141[1][2][2], p_119)), l_121[3])) < 0x9BL)) ^ 0x7278L), 4))), l_227[0], g_38[1][2], l_174[0][0], l_227[0]))), l_196)), l_164)) && l_159[0]) ^ l_197))
            {
                const int l_228 = (-1L);
                g_65 = func_86(l_228, (((g_38[1][2] &= l_121[2]) == g_66[4]) > 255UL), g_69, (l_122 |= ((safe_mul_func_uint8_t_u_u(p_119, g_69)) | p_119)), (safe_mul_func_uint16_t_u_u((((5L && 0xE0C3L) | g_175[0]) | 0L), l_227[1])));
                return l_197;
            }
            else
            {
                unsigned l_235 = 0x77E27CC4L;
                int l_267 = 0xB39C2C3BL;
                unsigned l_294 = 0xD741B982L;
                for (g_64 = 0; (g_64 <= 29); ++g_64)
                {
                    l_235--;
                    for (l_164 = 0; (l_164 <= 3); l_164 += 1)
                    {
                        int i, j;
                        g_65 = ((g_38[l_164][(l_164 + 4)] <= ((g_38[l_164][(l_164 + 5)] >= (l_227[1] && (g_141[2][0][6] >= p_119))) != ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((((safe_mod_func_int8_t_s_s((p_119 == (safe_lshift_func_int16_t_s_u(g_65, (+(safe_rshift_func_uint8_t_u_u(255UL, (((safe_lshift_func_uint8_t_u_u((l_249 = 0x62L), 1)) < g_65) >= 0xF8L))))))), g_33)) | g_38[l_164][(l_164 + 5)]) & g_65))), l_227[1])) != g_38[l_164][(l_164 + 4)]))) < g_64);
                    }
                    for (g_206 = (-23); (g_206 < (-21)); ++g_206)
                    {
                        g_65 = (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0x03L, 1L)), (safe_sub_func_uint16_t_u_u(p_119, 0xEC26L))));
                        if (g_38[1][2])
                            continue;
                    }
                    g_65 = 0x47B503CBL;
                }
                if (((p_119 < ((0xE64BL & p_119) > l_249)) == (-1L)))
                {
                    int l_264[8][7][4] = {{{0x26D04433L,3L,0x784529F8L,0x96928D4BL},{3L,0x784529F8L,0xC5EB18E8L,0xC38E0EBDL},{0x784529F8L,8L,(-1L),1L},{0x784529F8L,(-1L),0xC5EB18E8L,0x3580D671L},{0xC38E0EBDL,1L,0xF05AABCAL,0xF05AABCAL},{3L,3L,0x81A8B05DL,1L},{1L,0xC38E0EBDL,0x4075E5BEL,8L}},{{(-1L),0x784529F8L,0xF05AABCAL,0x4075E5BEL},{8L,0x784529F8L,(-1L),8L},{0x784529F8L,0xC38E0EBDL,(-1L),1L},{0xC5EB18E8L,3L,0xC5EB18E8L,0xF05AABCAL},{8L,1L,0x26D04433L,0x3580D671L},{3L,(-1L),0x4075E5BEL,1L},{(-1L),8L,0x4075E5BEL,0xC38E0EBDL}},{{3L,0x784529F8L,0x26D04433L,0xB6AFA11AL},{8L,0xC5EB18E8L,0xC5EB18E8L,8L},{0xC5EB18E8L,8L,(-1L),(-1L)},{0x784529F8L,3L,(-1L),0x3580D671L},{8L,(-1L),0xF05AABCAL,0x3580D671L},{(-1L),3L,0x4075E5BEL,(-1L)},{1L,8L,0x81A8B05DL,8L}},{{3L,0xC5EB18E8L,0xF05AABCAL,0xB6AFA11AL},{0xC38E0EBDL,0x784529F8L,0xC5EB18E8L,0xC38E0EBDL},{0x784529F8L,8L,(-1L),1L},{0x784529F8L,(-1L),0xC5EB18E8L,0x3580D671L},{(-9L),0x784529F8L,(-1L),(-1L)},{0xB6AFA11AL,0xB6AFA11AL,0x26D04433L,0x784529F8L},{0x784529F8L,(-9L),0xF05AABCAL,3L}},{{0x4075E5BEL,8L,(-1L),0xF05AABCAL},{3L,8L,(-1L),3L},{8L,(-9L),0x4075E5BEL,0x784529F8L},{0xC38E0EBDL,0xB6AFA11AL,0xC38E0EBDL,(-1L)},{3L,0x784529F8L,0x96928D4BL,1L},{0xB6AFA11AL,0x4075E5BEL,0xF05AABCAL,0x784529F8L},{0xC5EB18E8L,3L,0xF05AABCAL,(-9L)}},{{0xB6AFA11AL,8L,0x96928D4BL,0x3580D671L},{3L,0xC38E0EBDL,0xC38E0EBDL,3L},{0xC38E0EBDL,3L,0x4075E5BEL,0xC5EB18E8L},{8L,0xB6AFA11AL,(-1L),1L},{3L,0xC5EB18E8L,(-1L),1L},{0x4075E5BEL,0xB6AFA11AL,0xF05AABCAL,0xC5EB18E8L},{0x784529F8L,3L,0x26D04433L,3L}},{{0xB6AFA11AL,0xC38E0EBDL,(-1L),0x3580D671L},{(-9L),8L,0xC38E0EBDL,(-9L)},{8L,3L,0x81A8B05DL,0x784529F8L},{8L,0x4075E5BEL,0xC38E0EBDL,1L},{(-9L),0x784529F8L,(-1L),(-1L)},{0xB6AFA11AL,0xB6AFA11AL,0x26D04433L,0x784529F8L},{0x784529F8L,(-9L),0xF05AABCAL,3L}},{{0L,(-1L),0x81A8B05DL,(-1L)},{0xC5EB18E8L,(-1L),1L,0xC5EB18E8L},{(-1L),(-1L),0L,0xF05AABCAL},{0x96928D4BL,(-9L),0x96928D4BL,0x81A8B05DL},{0xC5EB18E8L,0xF05AABCAL,0xB6AFA11AL,0x4075E5BEL},{(-9L),0L,(-1L),0xF05AABCAL},{0x26D04433L,0xC5EB18E8L,(-1L),(-1L)}}};
                    int i, j, k;
                    g_274 = (safe_div_func_uint16_t_u_u(65533UL, func_86((g_65 |= p_119), (g_64 <= 0xEFL), ((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s(l_264[3][5][1], (safe_sub_func_uint16_t_u_u((0xC4D6L < (((--g_151) || (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((4294967295UL > g_60), 5)), p_119))) != p_119)), p_119)))) != g_69), l_227[1])) == g_175[0]), g_175[0], g_60)));
                    g_65 = (safe_mod_func_int16_t_s_s(l_169, ((((p_119 != func_55(p_119)) && (p_119 || (l_264[4][3][0] = ((l_249 = l_267) ^ 0UL)))) ^ (g_274 || (safe_unary_minus_func_uint16_t_u((p_119 || g_141[2][0][6]))))) || l_264[3][5][1])));
                }
                else
                {
                    unsigned char l_280 = 255UL;
                    int l_282 = 0xF6EF4EA0L;
                    int l_283 = 0x5F38A1A9L;
                    if ((l_227[0] | (safe_mod_func_uint16_t_u_u((g_281 = l_280), p_119))))
                    {
                        g_284++;
                    }
                    else
                    {
                        l_289 = (safe_lshift_func_uint16_t_u_u(func_55(l_164), 10));
                    }
                    g_65 = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((l_294++), (((l_282 = (safe_div_func_int16_t_s_s(g_8, (g_299 &= ((l_176 &= 7L) | g_53[5]))))) && (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(g_299, l_176)), (safe_rshift_func_int16_t_s_u((l_164 || ((func_55(p_119) >= (safe_lshift_func_int8_t_s_u((p_119 >= 0x13D4L), 7))) == g_34)), 12))))) || l_121[2]))), g_66[1])) && g_175[0]);
                }
                l_122 ^= (248UL >= g_175[0]);
            }
            l_289 ^= g_177[1];
        }
        if ((((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((((l_122 ^= p_119) == ((safe_div_func_uint32_t_u_u(l_320, (l_321 = (l_176 = (l_249 = 0xAC234BBAL))))) <= (0UL == 0x7DL))) <= g_177[2]) ^ (safe_lshift_func_uint8_t_u_s(249UL, (safe_lshift_func_uint8_t_u_s(g_141[0][2][3], 5))))), 1UL)) && g_66[1]), (-1L))), g_206)) < p_119) <= 255UL))
        {
            unsigned l_326 = 0x8116017DL;
            int l_333 = (-3L);
            int l_336 = 0x3648218CL;
lbl_363:
            g_65 = (g_141[2][0][6] ^ ((++l_326) == (((safe_lshift_func_uint8_t_u_s((g_177[1] >= g_141[2][2][2]), (g_66[1] = ((func_86(p_119, (((safe_rshift_func_int8_t_s_u((l_333 |= l_321), ((safe_sub_func_int16_t_s_s((g_299 | 6L), (((((l_336 | (((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(func_55(func_55((l_249 |= l_121[2]))), l_121[2])) && g_151), l_341)) && p_119) && 6L)) > g_66[1]) < g_34) <= p_119) < g_177[1]))) != l_336))) | g_66[1]) & g_274), l_211, l_341, l_197) | l_159[0]) >= 1L)))) | g_65) <= 0x44BBL)));
            if ((safe_sub_func_uint8_t_u_u(func_86(p_119, g_69, l_164, (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_175[0], ((g_66[1] & 1UL) < (safe_mod_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(func_86(((safe_rshift_func_uint16_t_u_s((((func_86(p_119, p_119, p_119, p_119, p_119) & p_119) & 0x215AL) < p_119), g_60)) > l_122), g_69, g_65, l_326, p_119), p_119)) & l_176), g_53[2]))))), p_119)), p_119), 0x0BL)))
            {
                for (g_65 = 0; (g_65 < 0); g_65++)
                {
                    return g_206;
                }
            }
            else
            {
                short l_373 = 0L;
                int l_376 = 0L;
                for (l_176 = (-20); (l_176 <= (-12)); l_176 = safe_add_func_int32_t_s_s(l_176, 3))
                {
                    unsigned l_358[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_358[i] = 0xEB46AB84L;
                    --l_358[1];
                }
                for (l_249 = 0; (l_249 < (-24)); l_249 = safe_sub_func_uint32_t_u_u(l_249, 5))
                {
                    if (l_176)
                        goto lbl_363;
                }
                l_376 = (safe_rshift_func_uint8_t_u_u(((l_249 = g_141[2][0][6]) != func_55((((l_326 >= (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(((((+(safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((l_174[0][0] & (l_375 = ((l_373 != 1UL) != ((((l_336 &= p_119) && l_336) && (l_374[3][0][2] = func_55(g_8))) == 0x59288803L)))))) && l_373), (-9L)))) != g_65) >= 0x23E0L) > l_169), 0)) >= 0x1D5A463AL), 0))) < 4294967295UL) & p_119))), 2));
                return l_373;
            }
        }
        else
        {
            int l_379 = (-9L);
            int l_400 = 0xDFC2FBD0L;
            unsigned char l_425 = 0xC6L;
            for (g_281 = 0; (g_281 <= 5); g_281 += 1)
            {
                int l_380 = 0x12CC45B1L;
                int i;
                g_65 ^= func_86(g_66[g_281], g_274, g_206, p_119, (g_33 && ((-1L) <= (g_8 & (safe_mul_func_int16_t_s_s(g_34, ((g_299 && p_119) >= l_379)))))));
                l_380 &= 0x57EA85A4L;
            }
            for (l_320 = 0; (l_320 <= 3); l_320 += 1)
            {
                unsigned l_389[7][3] = {{0xFE0FB782L,4294967295UL,0x5A4A2F87L},{0x11AC0BC2L,0x11AC0BC2L,6UL},{0UL,4294967295UL,4294967295UL},{6UL,4294967295UL,0x26A998CCL},{0UL,0UL,0UL},{0x11AC0BC2L,6UL,0x26A998CCL},{0xFE0FB782L,0xFE0FB782L,4294967295UL}};
                int l_398 = 0x00E8F710L;
                int l_399 = 0x53BF5C43L;
                int i, j;
                l_321 = ((!(safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((8L < (g_141[3][1][1] &= (safe_div_func_uint8_t_u_u(func_55(l_389[5][0]), (safe_div_func_uint32_t_u_u(4294967295UL, (g_38[3][3] &= l_389[5][0]))))))) == g_392), (safe_rshift_func_int8_t_s_u(g_34, 1)))), (l_389[5][0] || ((safe_mul_func_uint16_t_u_u(g_284, p_119)) && l_397)))), g_175[0]))) != 0xB452L);
                if (g_177[1])
                    break;
                l_374[6][5][0] ^= p_119;
                l_399 = (l_398 = ((l_389[5][0] <= p_119) > g_8));
                for (l_249 = 1; (l_249 >= 0); l_249 -= 1)
                {
                    int i, j;
                    --g_402;
                    l_374[6][3][1] = (((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(g_38[(l_249 + 2)][l_249], 1UL)), l_174[l_249][l_249])) > l_389[0][2]) == ((safe_rshift_func_uint16_t_u_u(0xECCBL, 13)) && (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(func_86(g_65, func_86((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((g_392 = 0x2307L), g_206)), ((0x72L <= l_389[5][2]) && p_119))) < p_119), 1UL)) || 65529UL), g_53[2])), p_119, g_66[1], g_177[3], p_119), l_399, g_401, g_69), 5)), l_174[1][0])) < l_121[2]) | p_119)));
                }
            }
            l_426 = func_86((p_119 & g_65), ((safe_div_func_int32_t_s_s(((p_119 || g_53[5]) ^ (((l_379 > func_86((l_321 = g_65), l_400, g_151, g_141[2][0][6], l_174[1][1])) <= g_175[0]) && l_176)), l_425)) <= p_119), p_119, l_425, l_320);
        }
        g_65 = g_141[2][0][6];
    }
    else
    {
        unsigned char l_433 = 0xD9L;
        for (g_281 = 0; (g_281 <= 41); g_281 = safe_add_func_uint32_t_u_u(g_281, 6))
        {
            l_321 = (safe_mul_func_uint8_t_u_u(g_53[3], g_402));
            for (l_321 = 3; (l_321 >= 0); l_321 -= 1)
            {
                l_176 = (g_401 = (l_122 ^= (safe_div_func_int32_t_s_s(0xDD36A248L, (func_55(g_177[3]) ^ ((g_175[0] > g_299) != g_53[2]))))));
                return g_65;
            }
            l_122 = func_55((l_433 |= g_66[1]));
        }
        l_122 ^= (-1L);
        return g_69;
    }
    return g_274;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_38[i][j], "g_38[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_141[i][j][k], "g_141[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_558[i], "g_558[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_644[i], "g_644[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_693[i][j][k], "g_693[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_724[i][j][k], "g_724[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_807, "g_807", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_808[i][j], "g_808[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_893[i], "g_893[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_935, "g_935", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_971[i], "g_971[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_974, "g_974", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_990[i], "g_990[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1095, "g_1095", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1115[i], "g_1115[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1153, "g_1153", print_hash_value);
    transparent_crc(g_1281, "g_1281", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1282[i][j], "g_1282[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1310, "g_1310", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1504[i][j], "g_1504[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1644, "g_1644", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1691[i][j][k], "g_1691[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1828[i], "g_1828[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1829, "g_1829", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
