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



static volatile int g_7 = 0x63126FF2L;
static int g_10 = 0L;
static int *g_9 = &g_10;
static int g_75 = (-10L);
static short g_86 = 1L;
static int g_94[2] = {(-5L),(-5L)};
static int *g_93 = &g_94[0];
static int g_161 = 5L;
static int * const *g_206 = &g_93;
static int g_223 = (-3L);
static short g_320 = 0L;
static volatile int g_340 = 0L;
static volatile int *g_339 = &g_340;
static volatile int * volatile *g_338 = &g_339;
static volatile int * volatile * volatile *g_337[7][2] = {{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338},{&g_338,&g_338}};
static const int g_376[9] = {0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL,0x5EF81E7EL};
static const int *g_382[9] = {&g_223,&g_223,&g_223,&g_223,&g_223,&g_223,&g_223,&g_223,&g_223};
static const int *g_439 = &g_10;
static int g_496 = 6L;
static const int **g_599 = &g_439;
static int * const g_658[6] = {&g_10,&g_10,&g_10,&g_10,&g_10,&g_10};
static short g_667 = (-1L);
static int *g_835 = &g_75;
static unsigned g_916 = 0x8604BB49L;
static int g_1006 = (-10L);
static short g_1050 = 0xAFE7L;
static short g_1053 = 0x44BEL;
static unsigned short g_1131 = 6UL;
static short g_1278 = 0L;
static const short g_1305 = 0xB0EFL;
static unsigned g_1353 = 4294967295UL;
static int ** volatile g_1413 = &g_9;
static volatile int * volatile **g_1508 = &g_338;
static volatile int * volatile * volatile * volatile g_1509 = &g_338;
static int ** volatile g_1519 = &g_93;
static unsigned g_1622 = 0x6B929BDFL;
static const volatile int **g_1633 = (void*)0;
static int *g_1644 = &g_223;
static short g_1656[8] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
static int g_1756 = (-1L);
static int ** volatile g_1761[4][5][10] = {{{(void*)0,&g_93,(void*)0,(void*)0,&g_835,&g_1644,&g_9,&g_93,(void*)0,&g_1644},{&g_835,&g_93,&g_9,&g_93,&g_835,&g_9,&g_1644,&g_835,(void*)0,&g_835},{&g_835,&g_9,(void*)0,&g_93,(void*)0,&g_9,&g_835,(void*)0,&g_1644,&g_835},{(void*)0,&g_93,&g_1644,(void*)0,&g_93,&g_1644,&g_9,&g_835,(void*)0,(void*)0},{&g_1644,&g_93,&g_9,&g_835,&g_93,&g_1644,&g_835,&g_835,&g_1644,&g_93}},{{&g_1644,&g_9,&g_9,&g_1644,&g_1644,(void*)0,&g_1644,(void*)0,&g_1644,&g_1644},{(void*)0,&g_93,&g_1644,&g_1644,&g_1644,&g_9,&g_9,&g_1644,&g_1644,(void*)0},{&g_93,&g_93,&g_1644,&g_1644,&g_835,&g_9,&g_835,&g_1644,&g_1644,&g_93},{&g_93,&g_9,(void*)0,&g_835,(void*)0,&g_1644,&g_835,(void*)0,(void*)0,&g_93},{(void*)0,&g_93,&g_9,(void*)0,&g_93,&g_9,&g_1644,&g_835,&g_1644,&g_1644}},{{&g_1644,&g_93,&g_93,&g_835,&g_835,&g_93,&g_93,&g_1644,&g_9,&g_1644},{&g_835,&g_1644,&g_9,&g_93,(void*)0,(void*)0,&g_835,&g_1644,(void*)0,&g_835},{(void*)0,&g_93,&g_9,(void*)0,&g_93,&g_1644,(void*)0,&g_1644,(void*)0,&g_1644},{&g_93,&g_1644,&g_93,&g_1644,&g_93,&g_1644,&g_93,&g_835,&g_1644,&g_93},{&g_93,&g_1644,(void*)0,&g_93,&g_9,&g_1644,&g_835,(void*)0,(void*)0,&g_93}},{{(void*)0,&g_93,&g_1644,&g_9,&g_93,&g_1644,&g_1644,&g_93,&g_9,&g_1644},{&g_835,&g_835,&g_1644,&g_835,&g_93,&g_93,&g_1644,&g_93,&g_1644,&g_835},{&g_1644,(void*)0,&g_1644,&g_1644,(void*)0,&g_9,&g_1644,(void*)0,&g_1644,&g_1644},{&g_1644,&g_835,&g_1644,(void*)0,&g_835,(void*)0,&g_1644,&g_835,&g_1644,&g_9},{&g_1644,&g_9,&g_93,&g_1644,(void*)0,&g_93,&g_9,&g_1644,&g_835,(void*)0}}};
static const int * volatile g_1776 = &g_223;
static const int * volatile * volatile g_1777 = &g_1776;
static int * const ** volatile g_1778 = (void*)0;
static int * const ** volatile g_1779 = (void*)0;



static unsigned func_1(void);
static int * func_2(unsigned char p_3, int * p_4, int * p_5);
static unsigned short func_13(int * p_14, int p_15, unsigned short p_16, const int * p_17, unsigned char p_18);
static unsigned char func_19(unsigned p_20);
static int func_25(int * const p_26, unsigned short p_27, int * p_28, int * p_29, short p_30);
static int * func_31(int * p_32, int * p_33, int * p_34, const int p_35, int * p_36);
static const int * func_38(short p_39, unsigned short p_40, int p_41, unsigned p_42);
static unsigned func_48(int p_49, unsigned short p_50);
static const int * func_51(unsigned short p_52);
static short func_53(int * p_54, int * const p_55, short p_56, const unsigned p_57, short p_58);
static unsigned func_1(void)
{
    int l_6 = 9L;
    int *l_8 = (void*)0;
    int l_24 = (-6L);
    const int *l_1237 = &l_24;
    int **l_1424 = (void*)0;
    int *l_1442 = &g_94[1];
    unsigned l_1469 = 0UL;
    unsigned l_1471 = 0x37DCA2EDL;
    unsigned l_1503 = 0xA602F2FAL;
    const unsigned short l_1511 = 0xDB8AL;
    unsigned l_1606 = 0x53D365A7L;
    int * const *l_1612 = &l_8;
    const int l_1638 = 3L;
    unsigned short l_1660[4][1][7] = {{{0x1A9BL,0UL,0UL,0x1A9BL,0x1A9BL,0UL,0UL}},{{0x3BD8L,65535UL,0x3BD8L,65535UL,0x3BD8L,65535UL,0x3BD8L}},{{0x1A9BL,0x1A9BL,0UL,0UL,0x1A9BL,0x1A9BL,0UL}},{{0xB8BFL,65535UL,0xB8BFL,65535UL,0xB8BFL,65535UL,0xB8BFL}}};
    unsigned char l_1663 = 0xA8L;
    unsigned char l_1687 = 0xF7L;
    int *l_1706 = &g_94[1];
    int *l_1726 = (void*)0;
    unsigned l_1760 = 0xDF4ED9A4L;
    char l_1767 = 1L;
    unsigned l_1774 = 0x2573EDB0L;
    char l_1775 = 0x27L;
    int i, j, k;
    (*g_599) = func_2((l_6 , (g_7 & (l_8 != (void*)0))), g_9, ((safe_mod_func_uint16_t_u_u(func_13(&g_10, (func_19(((((safe_add_func_int8_t_s_s((1L | (*g_9)), (safe_unary_minus_func_uint8_t_u(((((((void*)0 != l_8) || g_10) | 0L) , l_24) , 0x1CL))))) , &g_10) != &g_10) , l_24)) > g_376[3]), g_376[0], l_1237, (*l_1237)), g_1305)) , &l_24));
    for (g_1053 = 0; (g_1053 <= 15); g_1053 = safe_add_func_uint32_t_u_u(g_1053, 5))
    {
        int l_1416 = 0L;
        int *l_1439 = (void*)0;
        short l_1455[8][3][2] = {{{(-4L),0x2E17L},{1L,0L},{0L,0L}},{{1L,0x2E17L},{(-4L),0x8065L},{0L,1L}},{{(-2L),0L},{0x364CL,1L},{0x364CL,0L}},{{(-2L),1L},{0L,0x8065L},{(-4L),0x2E17L}},{{1L,0L},{0L,0L},{1L,0x2E17L}},{{(-4L),0x8065L},{0L,1L},{(-2L),0L}},{{0x364CL,1L},{0x364CL,0L},{(-2L),1L}},{{0L,0x8065L},{(-4L),0x2E17L},{1L,0L}}};
        short l_1456 = (-7L);
        int * const l_1465 = &g_94[1];
        int i, j, k;
        if ((((g_86 & (g_1050 >= l_1416)) == l_1416) != (2UL == g_916)))
        {
            unsigned char l_1421 = 250UL;
            for (g_916 = (-22); (g_916 >= 25); g_916++)
            {
                for (g_667 = 1; (g_667 >= 0); g_667 -= 1)
                {
                    int i;
                    g_94[g_667] = (g_94[g_667] <= (func_53(&l_24, (*g_206), g_86, g_7, ((safe_lshift_func_uint8_t_u_s(l_1421, g_94[g_667])) == g_1305)) <= g_1131));
                    (*g_93) |= (**g_338);
                }
            }
            if ((**g_1413))
                continue;
        }
        else
        {
            int **l_1425[9][1][10] = {{{&l_8,(void*)0,&l_8,&l_8,&g_9,&l_8,&l_8,(void*)0,&l_8,(void*)0}},{{&g_93,&g_835,&g_93,&l_8,&g_93,&g_835,&g_93,(void*)0,&l_8,(void*)0}},{{&g_835,&g_835,(void*)0,(void*)0,(void*)0,&g_835,&g_93,&g_93,(void*)0,(void*)0}},{{&g_93,&g_835,&l_8,&l_8,(void*)0,&g_93,&g_93,(void*)0,&l_8,&l_8}},{{&g_835,&g_835,(void*)0,&l_8,(void*)0,&g_835,&g_93,&l_8,&l_8,&g_93}},{{&g_835,&g_835,(void*)0,&l_8,&l_8,&g_93,&g_93,(void*)0,&l_8,(void*)0}},{{&g_93,&g_835,&g_93,&l_8,&g_93,&g_835,&g_93,(void*)0,&l_8,(void*)0}},{{&g_835,&g_835,(void*)0,(void*)0,(void*)0,&g_835,&g_93,&g_93,(void*)0,(void*)0}},{{&g_93,&g_835,&l_8,&l_8,(void*)0,&g_93,&g_93,(void*)0,&l_8,&l_8}}};
            unsigned char l_1428 = 0x23L;
            int *l_1470 = (void*)0;
            int i, j, k;
            (**g_206) = (*g_835);
            for (g_10 = (-20); (g_10 >= (-23)); g_10 = safe_sub_func_uint32_t_u_u(g_10, 8))
            {
                int * const l_1437 = &g_223;
                int **l_1447 = &l_8;
                if (((((((((l_1424 != l_1425[0][0][3]) , g_1050) ^ ((safe_mod_func_uint16_t_u_u(g_10, g_1053)) ^ ((!l_1428) , (safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(0xA8L, (((6L | (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(func_53((*g_1413), l_1437, (*l_1437), g_94[1], g_1053), 0)), 1))) , g_1305) < 0xAA6CL))) != l_1416), g_1050))))) && g_94[1]) > g_1278) | 0x9020L) || g_667) , (*g_339)))
                {
                    int *l_1438[4][10] = {{(void*)0,(void*)0,&g_10,(void*)0,&g_94[1],&g_94[1],(void*)0,&g_10,(void*)0,(void*)0},{&g_94[1],(void*)0,&g_10,(void*)0,(void*)0,&g_10,(void*)0,&g_94[1],&g_94[1],(void*)0},{&g_94[1],(void*)0,(void*)0,(void*)0,(void*)0,&g_94[1],&g_10,&g_10,&g_94[1],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_94[1],&g_10,&g_10,&g_94[1],(void*)0,(void*)0}};
                    unsigned short l_1440[2][1][10] = {{{0xAAD5L,0x1BC2L,0xB01DL,0UL,0UL,0xB01DL,0x1BC2L,0xAAD5L,0xB01DL,0xAAD5L}},{{0UL,0x4DA2L,0xA01AL,0UL,0xA01AL,0x4DA2L,0UL,0x7380L,0x7380L,0UL}}};
                    int i, j, k;
                    for (l_1428 = 0; (l_1428 <= 1); l_1428 += 1)
                    {
                        int i, j;
                        l_1439 = l_1438[2][1];
                        (**g_338) = (**g_338);
                        (*g_599) = func_38(g_1053, g_376[7], (&g_206 != &g_599), (*l_1237));
                    }
                    if (((*l_1437) , l_1440[0][0][9]))
                    {
                        (*g_599) = (*g_599);
                        if ((*l_1237))
                            continue;
                    }
                    else
                    {
                        int *l_1441 = &g_223;
                        l_1439 = l_1441;
                        return g_94[0];
                    }
                    (*g_599) = l_1442;
                    (*g_599) = func_51(g_1131);
                }
                else
                {
                    int l_1452 = 0x8CF38938L;
                    (*l_1442) = ((((((g_320 | g_376[1]) && (safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((l_1447 == (void*)0), g_75)), (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((l_1452 >= (safe_lshift_func_uint8_t_u_s((*l_1237), 0))), ((((*l_1437) > l_1455[2][0][1]) > (*l_1237)) | 0xD7BE4863L))), 7))))) != l_1456) == g_223) , g_86) | 6UL);
                }
                (*g_339) &= ((-1L) >= 0x54B628E2L);
                for (g_1278 = 19; (g_1278 <= 1); --g_1278)
                {
                    const unsigned short l_1467 = 0xA239L;
                    char l_1468 = 7L;
                    for (g_86 = 0; (g_86 > (-29)); g_86 = safe_sub_func_uint8_t_u_u(g_86, 1))
                    {
                        if ((*g_9))
                            break;
                    }
                    if ((4L < 0x9ACCL))
                    {
                        int *l_1466 = (void*)0;
                        (**g_338) = (func_53(&l_1416, (*g_1413), (safe_sub_func_uint16_t_u_u((((void*)0 == &g_382[1]) >= (((safe_lshift_func_int8_t_s_u(func_53(&l_1416, l_1465, (func_53(l_1466, (*l_1447), (((void*)0 == (*g_599)) , 0xAC9BL), l_1467, l_1468) > g_223), g_1305, g_496), 2)) != g_1050) , g_1353)), (*l_1437))), (*l_1465), g_496) , l_1469);
                    }
                    else
                    {
                        return g_376[0];
                    }
                }
            }
            (*g_599) = l_1470;
        }
        return g_340;
    }
    if (((g_86 <= (&l_1424 != &g_206)) , (g_1353 > (safe_mod_func_uint16_t_u_u((&l_1424 != (void*)0), g_1131)))))
    {
        int **l_1474[3][3];
        int ***l_1475 = (void*)0;
        int ***l_1476 = (void*)0;
        int ***l_1477 = (void*)0;
        int ***l_1478 = &l_1474[2][2];
        const int *l_1502 = &g_10;
        unsigned l_1512 = 5UL;
        short l_1514 = 0L;
        int ***l_1523[1][8] = {{&l_1474[0][2],&l_1424,&l_1474[0][2],&l_1474[0][2],&l_1424,&l_1474[0][2],&l_1474[0][2],&l_1424}};
        unsigned char l_1538 = 0x5DL;
        unsigned l_1552 = 4294967295UL;
        unsigned short l_1569 = 0xDCE9L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1474[i][j] = &g_9;
        }
        (*l_1478) = l_1474[0][2];
        (*g_339) = ((g_1305 , g_1305) || (safe_mod_func_int16_t_s_s((g_94[1] <= g_161), g_86)));
        for (l_1469 = 25; (l_1469 > 20); l_1469--)
        {
            unsigned l_1487 = 0UL;
            int **l_1491 = &l_8;
            int *l_1531 = (void*)0;
            int l_1546 = (-1L);
            (**g_338) &= ((*g_9) , ((safe_lshift_func_int8_t_s_u((&g_338 != &l_1424), 1)) , (safe_add_func_int32_t_s_s(l_1487, l_1487))));
        }
        for (g_1053 = 0; (g_1053 < 14); g_1053 = safe_add_func_uint32_t_u_u(g_1053, 8))
        {
            (***l_1478) = l_1569;
        }
    }
    else
    {
        short l_1586 = 2L;
        int * const l_1592 = &l_24;
        const int ***l_1593[5];
        int *l_1636 = &g_94[0];
        int *l_1708 = &g_10;
        int *l_1709 = &g_223;
        int l_1728 = (-1L);
        int * const l_1748 = &g_94[0];
        int i;
        for (i = 0; i < 5; i++)
            l_1593[i] = &g_599;
        for (g_1353 = 8; (g_1353 <= 29); ++g_1353)
        {
            int * const l_1578[5][5][7] = {{{(void*)0,&g_75,&g_10,&g_94[0],&g_94[0],&g_94[0],&g_10},{&g_1006,&g_1006,(void*)0,&g_10,&g_75,&g_161,&l_24},{&l_24,&l_24,&g_10,(void*)0,(void*)0,&l_24,&g_75},{(void*)0,&g_223,&g_10,&g_75,&g_75,&g_223,&g_94[0]},{&g_10,&g_94[0],&g_10,(void*)0,&g_94[0],&g_161,&g_10}},{{&g_10,(void*)0,&g_161,&g_161,&g_94[1],&g_94[0],&l_24},{&g_10,&g_161,&g_10,&l_24,(void*)0,&g_94[0],&g_10},{&g_10,(void*)0,&g_94[0],&g_94[1],&g_10,&g_75,(void*)0},{&g_1006,&g_10,&g_223,&g_161,&g_161,&g_223,&g_10},{&g_161,&g_75,(void*)0,&g_161,&g_10,(void*)0,&g_75}},{{&g_10,&l_24,&g_161,&g_1006,&l_24,&g_75,(void*)0},{&g_94[0],&g_75,&l_24,&g_161,&g_75,&g_161,&g_223},{&g_10,(void*)0,(void*)0,&g_161,&g_75,&g_161,&g_10},{&g_223,&g_223,&g_10,&g_94[1],(void*)0,&g_223,&g_161},{&g_10,&g_10,&g_75,&l_24,&g_10,&g_10,&g_161}},{{&g_10,(void*)0,&g_161,&g_94[0],&g_161,&g_10,&g_10},{&g_223,&g_10,&g_10,&g_75,&g_10,&g_10,&g_223},{&g_10,(void*)0,&g_75,&g_75,&g_10,&g_94[0],(void*)0},{&g_10,&g_10,&g_94[0],&g_94[1],&g_161,&g_223,&g_75},{&l_24,&g_10,&g_75,&g_10,(void*)0,&g_75,&l_24}},{{&g_10,&g_10,(void*)0,&g_10,&g_161,&g_94[1],&g_10},{&g_161,&g_10,&g_94[0],&g_94[0],(void*)0,(void*)0,&g_223},{&g_10,(void*)0,&g_94[0],&g_94[0],&g_75,(void*)0,&g_10},{(void*)0,&g_161,&g_161,&g_94[0],(void*)0,&g_94[1],(void*)0},{&g_75,&g_75,&g_10,&g_10,&g_75,&g_75,&g_75}}};
            int ***l_1605 = &l_1424;
            int l_1607[10] = {(-1L),8L,(-1L),(-1L),8L,(-1L),(-1L),8L,(-1L),(-1L)};
            unsigned l_1609 = 0xDA79DD9AL;
            volatile int * volatile l_1613 = &g_340;
            unsigned short l_1632 = 0x20C1L;
            int *l_1639 = &g_94[0];
            int i, j, k;
        }
        (*g_599) = func_51((((((g_1656[3] == (g_1006 < (*l_1442))) || 0x958EL) == 0xAFL) != (*l_1636)) , (*l_1237)));
        for (g_1278 = 0; (g_1278 <= 23); ++g_1278)
        {
            const short l_1673 = 1L;
            char l_1694 = 7L;
            const int *l_1695 = &g_10;
            unsigned char l_1696[1][7][8] = {{{0x16L,0x16L,9UL,0xEBL,0x73L,1UL,0x0AL,0x16L},{0x65L,254UL,255UL,0xC6L,0x0AL,255UL,0x5FL,0x16L},{254UL,0UL,0x65L,0xEBL,0x65L,0UL,254UL,0x5FL},{0xB0L,0xEBL,0x19L,0UL,0xEBL,2UL,0x0AL,0xB0L},{251UL,0xB0L,0xC6L,0UL,0xEBL,255UL,255UL,0xEBL},{0xB0L,0x5FL,0x5FL,0xB0L,0x65L,251UL,0x16L,0UL},{0xB0L,0x0AL,2UL,0xEBL,0UL,0x19L,0xEBL,0xB0L}}};
            int l_1699 = 0x8AD114BAL;
            short l_1707 = 0x83EDL;
            int l_1710 = 4L;
            char l_1711 = 0xB1L;
            unsigned char l_1724 = 0x2AL;
            unsigned l_1725 = 4294967289UL;
            int * const l_1740 = &g_1006;
            int * const *l_1745[5][10][2] = {{{&l_1442,&l_1708},{&g_835,&g_93},{(void*)0,&g_9},{&l_1708,&l_1592},{&l_1592,&l_1592},{&l_1708,&g_9},{(void*)0,&g_93},{&g_835,&l_1708},{&l_1442,&g_835},{(void*)0,(void*)0}},{{(void*)0,&g_835},{&l_1442,&l_1708},{&g_835,&g_93},{(void*)0,&g_9},{&l_1708,&l_1592},{&l_1592,&l_1592},{&l_1708,&g_9},{(void*)0,&g_93},{&g_835,&l_1708},{&l_1442,&g_835}},{{(void*)0,(void*)0},{(void*)0,&g_835},{&l_1442,&l_1708},{&g_835,&g_93},{(void*)0,&g_9},{&l_1708,&l_1592},{&l_1592,&l_1592},{&l_1708,&g_9},{(void*)0,&g_93},{&g_835,&l_1708}},{{&l_1442,&g_835},{(void*)0,(void*)0},{(void*)0,&g_835},{&l_1442,&l_1708},{&g_835,&g_93},{(void*)0,&g_9},{&l_1708,&l_1592},{&l_1592,&l_1592},{&l_1708,&g_9},{(void*)0,&g_93}},{{&g_835,&l_1708},{&l_1442,&g_835},{(void*)0,(void*)0},{&l_1442,&l_1592},{(void*)0,(void*)0},{&l_1592,(void*)0},{&g_93,(void*)0},{(void*)0,&g_9},{&g_9,&g_9},{(void*)0,(void*)0}}};
            int i, j, k;
        }
    }
    return (*l_1442);
}







static int * func_2(unsigned char p_3, int * p_4, int * p_5)
{
    char l_1371 = (-1L);
    int l_1372[9][8][1] = {{{(-9L)},{0xCA14B544L},{5L},{(-9L)},{(-1L)},{0x4E6A5BB9L},{(-3L)},{(-3L)}},{{(-3L)},{0x4E6A5BB9L},{(-1L)},{(-9L)},{5L},{0xCA14B544L},{(-9L)},{0xD5F18560L}},{{0x2D512E64L},{0xEBB691C9L},{0xA303B80DL},{0xEBB691C9L},{0x2D512E64L},{0xD5F18560L},{(-9L)},{0xCA14B544L}},{{5L},{(-9L)},{(-1L)},{0x4E6A5BB9L},{(-3L)},{(-3L)},{(-3L)},{0x4E6A5BB9L}},{{(-1L)},{(-9L)},{5L},{0xCA14B544L},{(-9L)},{0xD5F18560L},{0x2D512E64L},{0xEBB691C9L}},{{0xA303B80DL},{0xEBB691C9L},{0x2D512E64L},{0xD5F18560L},{(-9L)},{0xCA14B544L},{5L},{(-9L)}},{{(-1L)},{0x4E6A5BB9L},{(-3L)},{(-3L)},{(-3L)},{0x4E6A5BB9L},{(-1L)},{(-9L)}},{{5L},{0xCA14B544L},{(-9L)},{0xD5F18560L},{0x2D512E64L},{0xEBB691C9L},{0xA303B80DL},{0xEBB691C9L}},{{0x2D512E64L},{0xD5F18560L},{(-9L)},{0xCA14B544L},{5L},{(-9L)},{(-1L)},{0x4E6A5BB9L}}};
    int **l_1373 = &g_9;
    unsigned l_1391 = 0x7BB7B89AL;
    int i, j, k;
    if ((safe_sub_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(248UL, g_667)) != ((l_1371 != (0x45L || p_3)) != l_1372[1][3][0])) != 0x91C16AB0L), ((p_3 != 0x9F4DL) & l_1372[1][3][0]))))
    {
        int ***l_1374 = &l_1373;
        (*l_1374) = l_1373;
    }
    else
    {
        return &g_1006;
    }
    (**l_1373) = (l_1373 != l_1373);
    if (((*p_4) || p_3))
    {
        int * const l_1375 = (void*)0;
        (*g_599) = l_1375;
    }
    else
    {
        int l_1380[4][5] = {{0xAA52693AL,(-1L),0L,0L,(-1L)},{0x7274D0E6L,(-4L),0xC4E71B20L,0xC4E71B20L,0x7274D0E6L},{0L,0xAA52693AL,(-2L),(-2L),0xAA52693AL},{0xC4E71B20L,0x7274D0E6L,0x3C85E9F7L,0x3C85E9F7L,0x7274D0E6L}};
        char l_1382 = (-10L);
        int *l_1395[9] = {&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006};
        const unsigned short l_1396 = 0xCB95L;
        unsigned l_1399 = 0x0BF5CCD1L;
        int **l_1406 = &g_835;
        int i, j;
        for (g_1353 = 0; (g_1353 > 25); g_1353 = safe_add_func_int8_t_s_s(g_1353, 5))
        {
            int *l_1388 = &g_1006;
            for (l_1371 = 0; (l_1371 < (-28)); l_1371 = safe_sub_func_int16_t_s_s(l_1371, 2))
            {
                unsigned char l_1387 = 0xE1L;
                if (((l_1380[3][4] <= g_1053) & l_1380[0][4]))
                {
                    int *l_1381 = &g_1006;
                    return l_1381;
                }
                else
                {
                    (*p_5) |= l_1382;
                }
                (*p_5) ^= (((void*)0 != p_4) >= ((safe_mod_func_uint16_t_u_u((p_3 && 0xD06CL), ((l_1387 != ((p_5 == l_1388) < g_1050)) , 0x301FL))) < 8L));
                (*g_599) = p_4;
            }
            for (g_1053 = (-15); (g_1053 >= (-4)); g_1053 = safe_add_func_int32_t_s_s(g_1053, 5))
            {
                (*l_1373) = p_5;
            }
            for (g_1050 = 0; (g_1050 >= (-14)); --g_1050)
            {
                int *l_1394 = &g_1006;
                (**g_206) = (func_53(&g_75, p_5, g_1006, l_1396, p_3) ^ (*l_1394));
                (*g_9) &= ((((safe_sub_func_int8_t_s_s(p_3, g_496)) , g_94[0]) < g_1006) || 0x5134DD5CL);
            }
            for (g_496 = 0; g_496 < 4; g_496 += 1)
            {
                for (g_161 = 0; g_161 < 5; g_161 += 1)
                {
                    l_1380[g_496][g_161] = 0x441A0F5DL;
                }
            }
        }
        (*l_1406) = (*g_206);
        l_1372[1][3][0] ^= (+(p_3 & ((safe_sub_func_uint32_t_u_u((**l_1373), ((func_53(&g_161, (*l_1406), (249UL < ((!((((((*p_4) , ((g_1006 < (safe_add_func_int16_t_s_s(((*p_4) <= (safe_lshift_func_int16_t_s_u(func_53((*l_1406), (*g_206), p_3, g_1353, (**l_1373)), p_3))), g_223))) , (**g_338))) & (**l_1373)) < g_1353) , g_75) , 0xD8C291CFL)) == (**l_1373))), g_376[0], p_3) , 9UL) & g_161))) & 0x2461BC44L)));
    }
    (*g_1413) = (*g_206);
    return p_4;
}







static unsigned short func_13(int * p_14, int p_15, unsigned short p_16, const int * p_17, unsigned char p_18)
{
    short l_1242 = (-3L);
    int ***l_1247 = (void*)0;
    const int ***l_1248[10][5] = {{&g_599,&g_599,(void*)0,&g_599,(void*)0},{&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,(void*)0,&g_599,(void*)0},{&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,(void*)0,&g_599,(void*)0},{&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,(void*)0,&g_599,(void*)0},{&g_599,&g_599,&g_599,&g_599,&g_599},{&g_599,&g_599,(void*)0,&g_599,(void*)0},{&g_599,&g_599,&g_599,&g_599,&g_599}};
    const unsigned char l_1279 = 0x17L;
    char l_1293 = 0L;
    unsigned short l_1342 = 0x8144L;
    int l_1366 = 0L;
    int i, j;
    (**g_206) = 0x61431C87L;
    for (g_916 = 2; (g_916 >= 42); g_916 = safe_add_func_uint16_t_u_u(g_916, 5))
    {
        int **l_1244[8] = {&g_835,&g_835,&g_835,&g_835,&g_835,&g_835,&g_835,&g_835};
        int ***l_1243 = &l_1244[7];
        int ***l_1246 = &l_1244[5];
        unsigned short l_1251 = 0x4EB2L;
        unsigned l_1334 = 0x5676725DL;
        int i;
        (*g_599) = (void*)0;
        for (p_18 = 4; (p_18 == 18); p_18++)
        {
            return l_1242;
        }
    }
    for (l_1242 = 0; (l_1242 > 1); ++l_1242)
    {
        (*g_9) ^= (safe_lshift_func_int16_t_s_u(l_1342, 11));
        for (g_916 = 0; (g_916 != 29); g_916 = safe_add_func_int32_t_s_s(g_916, 6))
        {
            const unsigned l_1352 = 0UL;
            for (g_1006 = 0; (g_1006 >= 17); g_1006++)
            {
                int **l_1349 = &g_9;
                (*p_14) = (safe_mod_func_int32_t_s_s((l_1349 == ((((((p_15 || ((safe_sub_func_uint8_t_u_u((l_1349 == &g_9), g_1006)) , (((*p_14) >= (-1L)) & ((!p_15) , (*p_17))))) , p_15) <= 7L) , p_16) >= l_1352) , (void*)0)), g_1278));
                (*p_14) ^= (*p_17);
                g_1353 ^= (*g_93);
            }
            if ((*p_17))
                continue;
            return g_10;
        }
        for (p_16 = 0; (p_16 >= 59); ++p_16)
        {
            for (g_1050 = 0; g_1050 < 9; g_1050 += 1)
            {
                g_382[g_1050] = &g_94[0];
            }
        }
    }
    if ((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0x305BL, g_667)) == (safe_rshift_func_int16_t_s_s(p_18, p_15))), 255UL)))))
    {
        char l_1363 = (-2L);
        (*g_93) ^= l_1363;
    }
    else
    {
        for (g_223 = 0; (g_223 >= (-16)); g_223 = safe_sub_func_uint32_t_u_u(g_223, 6))
        {
            return p_18;
        }
        (*g_9) = (*p_17);
    }
    return l_1366;
}







static unsigned char func_19(unsigned p_20)
{
    int *l_37 = &g_10;
    char l_47 = 1L;
    short l_417 = 0x2EB0L;
    int *l_1082 = &g_1006;
    int *l_1235 = (void*)0;
    int l_1236 = 1L;
    l_1236 |= func_25(func_31(l_37, l_37, (((((g_10 , func_38((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((*g_9), ((((l_47 || (func_48((l_37 != l_37), g_10) >= p_20)) == (*l_37)) | p_20) > (*l_37)))), (*l_37))), p_20, (*g_9), l_417)) == (void*)0) , p_20) < g_667) , l_37), (*g_9), l_37), p_20, l_37, l_1082, g_1050);
    return g_916;
}







static int func_25(int * const p_26, unsigned short p_27, int * p_28, int * p_29, short p_30)
{
    short l_1083 = 0x97D2L;
    int * const l_1084[3][10] = {{&g_223,(void*)0,&g_75,&g_94[0],&g_75,&g_223,&g_1006,&g_223,&g_75,&g_94[0]},{&g_94[0],&g_10,&g_94[0],(void*)0,&g_75,&g_10,&g_94[1],&g_94[0],&g_75,&g_10},{&g_94[0],&g_223,(void*)0,(void*)0,&g_223,&g_94[0],&g_10,&g_75,&g_75,&g_223}};
    int *l_1085 = &g_94[0];
    unsigned char l_1147 = 0x41L;
    int **l_1164 = &g_835;
    int ***l_1163 = &l_1164;
    short l_1185 = 0x7C4FL;
    int **l_1193 = &g_9;
    unsigned l_1208 = 0UL;
    int *l_1211 = &g_1006;
    unsigned l_1230 = 3UL;
    char l_1233 = (-6L);
    char l_1234 = 1L;
    int i, j;
    (*p_26) ^= (p_30 , (*p_29));
    if ((func_53(&g_1006, (l_1083 , l_1084[2][3]), (g_1006 || func_53(l_1085, p_28, (*l_1085), ((safe_mod_func_uint8_t_u_u((g_223 > ((((!5UL) == g_75) , (-4L)) ^ (*p_29))), (*l_1085))) && p_30), g_10)), g_376[0], p_27) | g_161))
    {
        int *l_1091 = &g_94[0];
        const int l_1098 = 0L;
        int l_1130[2];
        short l_1148 = 0x03DDL;
        int i;
        for (i = 0; i < 2; i++)
            l_1130[i] = 0x111F1532L;
        for (g_1053 = (-4); (g_1053 < 16); g_1053 = safe_add_func_uint8_t_u_u(g_1053, 5))
        {
            int *l_1090[3][10] = {{&g_94[0],&g_75,&g_223,&g_94[0],&g_161,&g_94[0],&g_75,&g_75,&g_94[0],&g_161},{&g_94[0],(void*)0,(void*)0,&g_94[0],&g_94[0],(void*)0,&g_75,(void*)0,(void*)0,&g_161},{(void*)0,&g_75,(void*)0,(void*)0,&g_161,(void*)0,(void*)0,&g_75,(void*)0,&g_94[0]}};
            char l_1112[6][4] = {{(-8L),(-8L),0x4CL,0x4CL},{(-8L),(-8L),0x4CL,0x4CL},{(-8L),(-8L),0x4CL,0x4CL},{(-8L),(-8L),0x4CL,0x4CL},{(-8L),(-8L),0x4CL,0x4CL},{(-8L),(-8L),0x4CL,0x4CL}};
            short l_1121 = (-2L);
            int i, j;
            (*g_93) &= 7L;
            l_1091 = l_1090[0][5];
            for (p_27 = 0; (p_27 <= 1); p_27 += 1)
            {
                unsigned char l_1092 = 1UL;
                int l_1113 = (-9L);
                int *** const l_1120 = (void*)0;
                if (l_1092)
                    break;
                for (g_1050 = 1; (g_1050 >= 0); g_1050 -= 1)
                {
                    unsigned l_1095 = 0xF9D527CCL;
                    int * const l_1103 = &g_10;
                    int **l_1105 = &g_93;
                    int ***l_1104[10][2] = {{(void*)0,(void*)0},{&l_1105,&l_1105},{(void*)0,&l_1105},{&l_1105,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_1105,&l_1105},{(void*)0,&l_1105},{&l_1105,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    (*g_835) ^= (*g_93);
                    for (g_320 = 1; (g_320 >= 0); g_320 -= 1)
                    {
                        int *l_1096 = &g_223;
                        (*g_599) = ((safe_rshift_func_int8_t_s_s(l_1095, (~5L))) , (((void*)0 != l_1096) , func_51(p_27)));
                        (*l_1096) = (safe_unary_minus_func_int16_t_s((l_1095 , (g_1050 > ((((l_1098 , 0x40BBL) >= (0x079CD84FL & (safe_add_func_uint16_t_u_u(g_376[0], (safe_mod_func_int16_t_s_s((((+g_320) ^ func_53(l_1090[0][5], (*g_206), p_27, p_30, p_30)) , l_1095), l_1095)))))) != 4294967290UL) && l_1095)))));
                        (*g_599) = func_38((g_161 ^ (p_30 , func_53(p_29, l_1103, (g_161 > 0xE4L), ((((&g_338 == l_1104[9][1]) > (p_27 , g_916)) <= 0x52L) && g_667), p_27))), p_30, (**g_599), l_1092);
                        (**l_1105) = (p_30 <= g_94[1]);
                    }
                    if ((*l_1085))
                        continue;
                    l_1113 &= ((g_320 , ((safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(((p_27 , ((safe_add_func_uint32_t_u_u((func_48(((*l_1085) , ((&l_1105 != (void*)0) > (func_48((func_48(((!((((l_1092 & ((+1L) , (func_48(((((p_27 , (*l_1103)) && (*g_9)) , (*l_1085)) , l_1092), g_1050) > 0xF5L))) | 0x8CL) , 0x7B2E8B09L) & (*p_29))) , 0L), l_1112[3][1]) | p_30), g_1053) , (*g_9)))), p_27) < p_30), 4294967287UL)) != l_1092)) > p_27), g_1053)) , p_30) , p_27), g_496)) <= g_376[0])) != 4L);
                }
                (*p_29) &= (safe_lshift_func_uint16_t_u_s((&g_206 != &g_206), ((safe_sub_func_int32_t_s_s(((void*)0 == (*g_206)), (safe_lshift_func_int16_t_s_s(((void*)0 != l_1120), (0x2B4EL ^ func_53((((g_94[0] , 1L) != 0L) , &g_94[0]), (*g_206), p_27, p_27, p_30)))))) , 3L)));
            }
            for (g_161 = 0; (g_161 <= 2); g_161 += 1)
            {
                int **l_1132 = &g_93;
                int **l_1133 = &g_93;
                int **l_1134 = &l_1090[g_161][(g_161 + 4)];
                int i, j;
                (*l_1132) = p_26;
                (*l_1133) = (*g_206);
                (*l_1134) = (*g_206);
            }
        }
        if ((safe_rshift_func_uint8_t_u_s(255UL, ((*p_29) > ((((0xB8L && (safe_add_func_uint16_t_u_u(((0xAEL <= ((*g_93) ^ (safe_sub_func_uint32_t_u_u((g_94[0] >= (~0UL)), ((0x2BL != func_53(((func_53(p_29, l_1091, (*l_1085), p_27, g_916) ^ p_27) , &g_75), l_1085, g_916, g_1050, g_1131)) || p_30))))) <= 1L), p_30))) , p_27) <= p_30) , p_27)))))
        {
            const int *l_1149 = &g_10;
            unsigned l_1152 = 1UL;
            int * const l_1162 = &g_1006;
            (*p_26) = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((~l_1147) && (g_223 >= (l_1148 , (((2L ^ (!((void*)0 == l_1149))) != g_161) && g_667)))), 5)), (safe_sub_func_uint16_t_u_u((g_376[0] <= g_376[0]), (-1L))))) , l_1152), (*l_1149)));
            for (g_320 = (-2); (g_320 == 20); g_320 = safe_add_func_uint8_t_u_u(g_320, 6))
            {
                int *l_1155 = &g_161;
                int l_1181[8];
                int **l_1194[9][3][9] = {{{(void*)0,&g_835,&g_835,&g_835,(void*)0,&g_9,&g_835,(void*)0,(void*)0},{&g_93,(void*)0,&g_93,&l_1091,(void*)0,&l_1091,&g_93,(void*)0,&g_93},{&g_9,&l_1085,&g_835,(void*)0,&l_1091,&g_835,(void*)0,(void*)0,&l_1155}},{{&g_9,(void*)0,&g_9,&g_835,(void*)0,&g_835,&g_9,(void*)0,&g_9},{&g_9,&g_835,(void*)0,(void*)0,&g_835,&g_9,&g_835,(void*)0,&l_1155},{&g_93,&g_93,&g_93,&l_1091,(void*)0,&g_835,&g_93,(void*)0,&g_93}},{{(void*)0,&g_835,&g_835,(void*)0,&l_1091,&g_835,&g_835,(void*)0,(void*)0},{&g_9,(void*)0,&g_9,&g_835,&l_1155,&g_835,&g_9,(void*)0,&g_9},{(void*)0,&g_835,&g_835,&g_835,&l_1091,&g_9,(void*)0,(void*)0,(void*)0}},{{&g_93,&g_93,&g_93,&g_835,(void*)0,&g_835,&g_93,&g_93,&g_93},{&l_1155,&l_1085,&g_835,(void*)0,&g_835,&g_835,&g_835,(void*)0,&g_9},{&g_9,&g_93,&g_9,&l_1091,(void*)0,&g_835,&g_93,&l_1091,&g_93}},{{&g_9,(void*)0,(void*)0,&l_1085,(void*)0,&g_93,&g_835,&g_835,&g_93},{&l_1155,&g_835,(void*)0,(void*)0,&g_93,&g_93,(void*)0,&l_1091,&l_1155},{&g_93,&g_835,&l_1085,&g_93,&g_9,&g_835,&g_835,&g_9,&g_93}},{{&l_1085,&l_1091,&l_1085,&g_835,&g_9,&g_93,&g_93,&l_1091,&l_1085},{&g_93,(void*)0,&l_1091,(void*)0,&g_9,&g_93,(void*)0,&g_835,&g_93},{&l_1155,&g_835,&l_1085,&g_835,&g_93,&g_835,&l_1085,&g_835,&l_1155}},{{&g_93,(void*)0,&l_1091,&g_93,(void*)0,&l_1091,&l_1085,&g_9,&g_9},{&g_93,&g_835,&l_1085,(void*)0,&g_9,(void*)0,&g_93,&g_835,&g_93},{&g_93,(void*)0,&l_1085,&l_1085,(void*)0,&g_93,&l_1091,&g_835,&g_9}},{{&l_1155,&l_1091,(void*)0,&g_93,&g_93,(void*)0,(void*)0,&g_835,&l_1155},{&g_93,&g_835,(void*)0,&g_93,&l_1155,&g_835,&l_1091,&g_9,&g_93},{&l_1085,&g_835,&l_1085,(void*)0,&g_9,(void*)0,&g_93,&g_835,&l_1085}},{{&g_93,(void*)0,&g_835,(void*)0,&l_1155,&g_93,&l_1085,&g_835,&g_93},{&l_1155,&l_1091,&l_1085,(void*)0,&g_93,(void*)0,&l_1085,&l_1091,&l_1155},{&g_9,(void*)0,&g_835,&g_93,(void*)0,&l_1091,(void*)0,&g_9,&g_93}}};
                int **l_1195 = &l_1155;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_1181[i] = 2L;
                if ((g_496 , (((func_53(l_1155, (*g_206), (((safe_add_func_int8_t_s_s((!(safe_rshift_func_int8_t_s_u(0x95L, (((0xEFDF64BFL < (((((((((((g_1050 && (((safe_lshift_func_uint16_t_u_s(((func_53(&g_1006, l_1162, (g_10 < p_30), (*l_1155), p_27) | (**g_206)) >= (*l_1155)), p_27)) , p_30) & 255UL)) != p_30) , (*p_28)) , 1L) == 1L) | (*g_9)) , &g_206) != l_1163) , (*l_1085)) , (*l_1155)) ^ g_667)) <= p_30) >= 0x5D918080L)))), p_30)) & (*g_9)) , (-2L)), p_27, p_30) <= (*p_28)) < 1UL) > p_27)))
                {
                    int *l_1179 = &g_94[1];
                    short l_1188 = 4L;
                    (**l_1164) = (func_53(p_28, p_29, ((safe_rshift_func_int16_t_s_s(((p_30 <= (*l_1155)) < g_1006), 1)) <= (safe_rshift_func_int8_t_s_s(((*l_1155) | (safe_rshift_func_uint16_t_u_u(0xEF32L, ((void*)0 != &g_338)))), 6))), g_376[0], p_27) >= g_1053);
                    for (p_30 = 0; (p_30 < 5); p_30++)
                    {
                        char l_1180 = 0xDAL;
                        int *l_1182 = (void*)0;
                        if ((*l_1155))
                            break;
                        (*l_1179) = ((safe_add_func_uint8_t_u_u((g_320 < (*l_1149)), (safe_mod_func_int8_t_s_s(func_53(((safe_lshift_func_int16_t_s_u(p_30, 6)) , (*l_1164)), l_1155, (((func_53(l_1179, p_29, ((0UL <= (((*l_1155) , 1L) ^ 0UL)) >= l_1180), (*l_1155), p_30) && 1L) > g_223) , l_1181[4]), g_376[2], (*l_1155)), p_27)))) && (*p_28));
                        (*l_1155) &= func_53(l_1182, p_29, func_53(&g_161, (((((((((safe_lshift_func_int8_t_s_s(g_496, 5)) , (l_1185 , ((safe_sub_func_uint32_t_u_u(l_1188, 0x4AAEF75DL)) , ((**l_1164) , (**g_206))))) | 4L) || 0L) < (*g_93)) && 0xA22DL) == p_27) && (*l_1162)) , p_28), g_916, g_376[6], g_667), g_1053, g_916);
                    }
                }
                else
                {
                    (*l_1155) = (*g_835);
                    if ((*l_1155))
                        break;
                    l_1091 = p_29;
                }
                (*l_1195) = p_26;
                (*g_599) = (*l_1193);
            }
        }
        else
        {
            int *l_1202 = &g_10;
            const int l_1206[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
            int i;
            for (l_1083 = 0; (l_1083 != (-5)); l_1083 = safe_sub_func_int16_t_s_s(l_1083, 1))
            {
                char l_1200 = 0x10L;
                int *l_1203 = &g_75;
                int * const l_1205 = &g_10;
                if ((*g_9))
                {
                    int *l_1201 = &g_223;
                    for (g_223 = (-24); (g_223 != 26); g_223 = safe_add_func_int16_t_s_s(g_223, 4))
                    {
                        return l_1200;
                    }
                    if (((&g_382[5] != (func_53(l_1091, (*g_206), (*l_1201), g_1006, (*l_1202)) , (void*)0)) != g_376[0]))
                    {
                        (*l_1201) &= (*p_28);
                    }
                    else
                    {
                        if ((*p_29))
                            break;
                    }
                }
                else
                {
                    int **l_1204 = &g_835;
                    int **l_1207 = &l_1202;
                    (*l_1204) = (*g_206);
                    (*l_1207) = (((func_53(l_1091, l_1205, (**l_1193), l_1206[5], (**l_1204)) & 0x32E0B0D9L) ^ p_30) , (*g_206));
                    if ((*p_29))
                        break;
                }
                (**l_1163) = p_29;
                (*p_26) = (*g_835);
            }
            for (g_1053 = 22; (g_1053 != (-18)); g_1053 = safe_sub_func_int32_t_s_s(g_1053, 7))
            {
                char l_1216[1][5];
                int *l_1218 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1216[i][j] = (-8L);
                }
                l_1211 = p_26;
                (*l_1085) = 0x34C7765AL;
                for (g_320 = 0; (g_320 <= 8); g_320 += 1)
                {
                    int * const l_1214 = &g_94[0];
                    int *l_1215 = &g_75;
                    for (p_30 = 0; (p_30 <= 1); p_30 += 1)
                    {
                        int i;
                        (*l_1202) = (2L <= l_1130[p_30]);
                        return (*g_9);
                    }
                    if (((0xB7L <= ((safe_sub_func_int8_t_s_s((((*g_93) , (void*)0) == (void*)0), ((p_27 == (func_53((p_27 , (void*)0), l_1214, (func_53(l_1215, (*g_206), l_1216[0][1], p_30, p_30) , (*l_1202)), g_94[0], p_27) || (***l_1163))) , p_27))) != 0UL)) == 0x2FL))
                    {
                        (*g_93) ^= l_1216[0][1];
                    }
                    else
                    {
                        int *l_1217 = (void*)0;
                        int l_1219 = 0xB44A1638L;
                        int i;
                        g_382[g_320] = (*l_1164);
                        (*p_29) ^= (g_94[0] , (p_27 , (*p_28)));
                    }
                }
            }
        }
        (*g_9) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((func_53(l_1091, (*l_1164), g_1131, g_86, ((safe_rshift_func_int16_t_s_u((p_30 > g_1050), 6)) , (**l_1164))) >= (((g_376[8] , &p_29) != &g_382[4]) | 0x3515969FL)), 4)), 0x9DEB549DL));
    }
    else
    {
        const char l_1226 = 0L;
        int * const l_1229[7][1][10] = {{{&g_94[0],&g_94[0],&g_223,&g_223,(void*)0,&g_1006,&g_94[0],(void*)0,&g_161,(void*)0}},{{&g_94[0],&g_223,&g_10,&g_223,&g_10,&g_223,&g_94[0],&g_10,&g_94[0],(void*)0}},{{&g_223,&g_94[0],&g_10,&g_94[0],(void*)0,&g_223,&g_223,(void*)0,&g_94[0],&g_10}},{{&g_94[0],&g_94[0],&g_223,&g_223,(void*)0,&g_1006,&g_94[0],(void*)0,&g_161,(void*)0}},{{&g_94[0],&g_223,&g_1006,&g_94[0],&g_1006,&g_75,&g_223,&g_1006,(void*)0,&g_223}},{{&g_75,&g_223,&g_1006,(void*)0,&g_223,&g_75,&g_75,&g_223,(void*)0,&g_1006}},{{&g_223,&g_223,&g_94[0],&g_94[0],&g_223,&g_94[0],&g_223,&g_223,(void*)0,&g_223}}};
        unsigned char l_1231 = 0UL;
        char l_1232 = 0x5BL;
        int i, j, k;
        (**l_1163) = p_29;
    }
    (***l_1163) = l_1233;
    return l_1234;
}







static int * func_31(int * p_32, int * p_33, int * p_34, const int p_35, int * p_36)
{
    const unsigned l_844 = 0x8E100619L;
    int l_847 = 0L;
    int l_887 = 8L;
    int ***l_917 = (void*)0;
    for (g_223 = 0; (g_223 <= 1); g_223 += 1)
    {
        short l_886 = 1L;
        int *l_913[1][8];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
                l_913[i][j] = &g_94[g_223];
        }
        if (((g_94[g_223] >= g_75) , ((safe_lshift_func_int16_t_s_s((-10L), 2)) != ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_844, (safe_mod_func_int16_t_s_s(g_94[0], g_94[g_223])))) , g_94[g_223]), (l_847 , l_847))) , 0xB8F49970L))))
        {
            unsigned short l_854 = 0x6B2AL;
            int *l_885 = &l_847;
            int ** const l_902 = (void*)0;
            for (g_496 = 0; (g_496 <= 8); g_496 += 1)
            {
                short l_851 = 2L;
                unsigned l_874 = 0UL;
                int *l_876 = &g_94[1];
                for (g_161 = 0; (g_161 <= 1); g_161 += 1)
                {
                    const int l_855 = 0xA9C2A700L;
                    int l_860 = (-1L);
                    for (g_667 = 8; (g_667 >= 0); g_667 -= 1)
                    {
                        int i;
                        g_382[(g_161 + 1)] = (*g_599);
                    }
                }
                if (((((g_667 < ((!(safe_lshift_func_int8_t_s_u(p_35, ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(p_35, (*l_876))) & g_161), (p_35 <= (safe_add_func_uint32_t_u_u(((!(safe_sub_func_int8_t_s_s(((*p_32) == 1UL), (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((&g_382[8] != l_902), p_35)) > p_35), g_376[0]))))) , (*l_876)), g_161))))) >= g_86)))) | (*l_885))) > 0x9C70L) == 0UL) && 0x8437L))
                {
                    (*p_36) = 0x3D403135L;
                    (*p_33) &= 0x086CAF56L;
                }
                else
                {
                    for (l_854 = 1; (l_854 <= 8); l_854 += 1)
                    {
                        int i;
                        g_382[g_496] = func_51(g_94[1]);
                        (*g_93) &= (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_161, (func_53(p_36, &g_94[g_223], p_35, p_35, g_496) , 0xEBL))), 15));
                    }
                }
                if ((*p_34))
                    continue;
            }
            for (g_320 = 0; (g_320 <= 8); g_320 += 1)
            {
                return p_34;
            }
            for (g_86 = 8; (g_86 >= 0); g_86 -= 1)
            {
                int i;
                g_382[g_86] = &p_35;
            }
            (*g_599) = (void*)0;
        }
        else
        {
            const short l_914 = 0xCED5L;
            int **l_915 = &g_835;
            g_916 |= ((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_10, (safe_mod_func_uint32_t_u_u(((((((g_94[0] == 0x91L) & (((func_53(l_913[0][5], &l_887, (!g_94[0]), l_914, g_667) , l_915) == (void*)0) == 65530UL)) == p_35) , g_667) | 0x88D8L) > 1L), (*p_34))))), p_35)) , 0L);
        }
        (*g_9) = (((*p_34) , &p_33) == ((((func_53(&g_94[g_223], (((((((void*)0 == l_917) > func_53(&g_94[0], (((((((!(65535UL <= (g_10 <= (safe_sub_func_int16_t_s_s(((func_53(p_32, p_36, p_35, g_223, p_35) , p_35) , g_376[0]), g_94[0]))))) && 0x9659L) & p_35) , &g_658[5]) == &g_339) != p_35) , (*g_206)), p_35, g_376[0], g_376[5])) > g_161) && g_376[0]) && g_161) , p_34), g_94[0], g_916, p_35) && (**g_206)) <= g_667) , 0x8A26AD8DL) , &p_34));
    }
    (*g_9) ^= (safe_sub_func_uint16_t_u_u((&p_35 != (void*)0), (-3L)));
    (*p_33) |= (safe_mod_func_uint32_t_u_u((g_320 > g_223), g_161));
    for (g_161 = 0; (g_161 <= 1); g_161 += 1)
    {
        char l_975 = 0L;
        int l_1007 = 0x572A8E22L;
        int **l_1021 = &g_835;
        int ***l_1020[8] = {&l_1021,&l_1021,&l_1021,&l_1021,&l_1021,&l_1021,&l_1021,&l_1021};
        short l_1042 = (-8L);
        int l_1049 = 1L;
        int * const l_1054 = &g_10;
        int i;
        g_94[g_161] = g_94[g_161];
        if ((**g_206))
            break;
        for (g_496 = 1; (g_496 >= 0); g_496 -= 1)
        {
            const int l_924 = 0xD8466395L;
            unsigned short l_938 = 0UL;
            const char l_1033 = 0xEEL;
            int **l_1064[1];
            const int l_1074[8] = {0x142A08AAL,0x142A08AAL,0x142A08AAL,0x142A08AAL,0x142A08AAL,0x142A08AAL,0x142A08AAL,0x142A08AAL};
            int i;
            for (i = 0; i < 1; i++)
                l_1064[i] = &g_93;
            for (g_75 = 0; (g_75 <= 1); g_75 += 1)
            {
                int l_943[3];
                int *l_970 = &g_10;
                int **l_1003 = &g_93;
                int ***l_1002 = &l_1003;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_943[i] = 4L;
                if (l_924)
                    break;
            }
            for (l_938 = 0; (l_938 <= 1); l_938 += 1)
            {
                int l_1029 = 0L;
                int **l_1063 = &g_9;
                for (g_86 = 0; (g_86 <= 1); g_86 += 1)
                {
                    (*g_93) = (*p_32);
                }
                for (g_223 = 1; (g_223 >= 0); g_223 -= 1)
                {
                    if ((*p_34))
                        break;
                }
                for (l_887 = 0; (l_887 <= 1); l_887 += 1)
                {
                    unsigned l_1028 = 9UL;
                    int l_1046 = 0x449530F0L;
                    int *l_1075[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1075[i] = &g_94[g_161];
                    if ((65528UL > g_223))
                    {
                        return &g_94[0];
                    }
                    else
                    {
                        int l_1030 = 0xFE17C54CL;
                        (*p_36) = (((((l_1020[4] != (void*)0) && (safe_rshift_func_uint16_t_u_u((&g_658[5] != &p_36), 4))) != (**g_206)) ^ (safe_mod_func_int16_t_s_s((((l_938 && (safe_mod_func_int16_t_s_s(((void*)0 == &g_599), g_376[8]))) != p_35) | l_1028), l_1029))) , (*p_36));
                        (*g_599) = &p_35;
                        if (l_1030)
                            continue;
                    }
                    for (g_223 = 0; (g_223 <= 1); g_223 += 1)
                    {
                        int * const l_1035 = (void*)0;
                        unsigned char l_1045[4][10][6] = {{{0xEDL,9UL,9UL,0xEDL,0xCDL,3UL},{249UL,255UL,1UL,0x46L,0x18L,0xD9L},{255UL,0x5BL,8UL,0x3BL,0x18L,0UL},{0UL,255UL,0xE7L,0x1EL,0xCDL,0x65L},{0xF6L,9UL,0x06L,1UL,249UL,0UL},{0xEFL,255UL,0xF6L,0xB2L,255UL,0x73L},{0xE5L,8UL,0x53L,0xCDL,1UL,255UL},{0xB2L,1UL,0x8CL,0x9FL,249UL,0UL},{0UL,0xEAL,0xB3L,1UL,255UL,0xB9L},{255UL,0x28L,8UL,7UL,0xB2L,5UL}},{{255UL,0xDDL,8UL,0x8CL,0x8AL,0xD9L},{5UL,0xDFL,0x46L,0x28L,255UL,0x28L},{0x06L,1UL,0x06L,255UL,5UL,0x53L},{0x18L,1UL,0xD9L,0xEFL,0xEDL,255UL},{1UL,1UL,255UL,0xEFL,0xEAL,255UL},{0x18L,0x8AL,0xCDL,255UL,1UL,0x02L},{0x06L,255UL,0UL,0x28L,255UL,255UL},{5UL,0UL,5UL,0x8CL,0x9FL,0UL},{255UL,0xEFL,0x28L,7UL,0UL,0x73L},{255UL,255UL,255UL,1UL,0xB2L,0UL}},{{5UL,0xEAL,255UL,0UL,255UL,8UL},{0xD9L,0xE7L,255UL,0xB2L,5UL,0xB2L},{0x53L,255UL,255UL,0x73L,8UL,0x5BL},{0UL,0x1EL,255UL,0xF6L,0xF6L,255UL},{0xB3L,0xB3L,1UL,255UL,0xC9L,0x9FL},{5UL,0x9FL,1UL,0xB3L,7UL,8UL},{0xF2L,5UL,1UL,0xEFL,0x73L,0x9FL},{255UL,0xEFL,8UL,0UL,255UL,3UL},{0UL,255UL,3UL,0xE5L,0x5BL,0x46L},{0x8AL,255UL,0xF6L,3UL,0xB3L,255UL}},{{0xB3L,249UL,255UL,0xF2L,0xEFL,0xE7L},{8UL,0x72L,0xD0L,5UL,0x18L,0xF2L},{0x8CL,1UL,0xC9L,0xEDL,0xB3L,0x18L},{0xC9L,0x02L,255UL,255UL,0xDFL,255UL},{249UL,0xEDL,5UL,255UL,0x21L,0xF6L},{0x18L,0xDFL,0UL,5UL,0UL,0xDFL},{1UL,0xE7L,0x9FL,5UL,1UL,0UL},{249UL,0x5BL,0xEAL,255UL,5UL,255UL},{255UL,0x5BL,0xDDL,0x46L,1UL,9UL},{255UL,0xE7L,0xB3L,0xEAL,0UL,255UL}}};
                        int i, j, k;
                        l_1046 |= ((*g_9) > (safe_mod_func_uint16_t_u_u(((0x65DDL != (((l_1033 , (safe_unary_minus_func_uint8_t_u(func_53(p_33, l_1035, (((0x02188218L <= (((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(l_1042, p_35)) ^ ((safe_rshift_func_uint8_t_u_s(l_1029, 7)) ^ l_1029)), p_35)), (*p_36))) > 0x44L) , g_376[2])) ^ l_1045[3][3][0]) & g_94[0]), g_94[0], g_10)))) >= g_10) & g_667)) | p_35), g_376[4])));
                        g_1053 |= ((safe_add_func_int8_t_s_s((l_1049 , func_53(p_34, ((func_53(&g_94[0], p_32, g_1050, p_35, p_35) == (safe_mod_func_int8_t_s_s(g_161, p_35))) , p_34), p_35, g_94[0], g_376[0])), p_35)) < 2L);
                        (*g_599) = (*g_599);
                    }
                    (*p_32) = (**g_599);
                    if ((0UL <= func_53(&l_1029, l_1054, (~(((g_161 > 0x8593AF10L) < p_35) > (safe_add_func_int8_t_s_s(l_1046, ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((0x805DCC15L != (((safe_rshift_func_int16_t_s_u(p_35, 10)) && (-8L)) , (**l_1021))) ^ p_35), g_94[0])), 5)) , 0xF0L))))), l_1028, l_1029)))
                    {
                        char l_1065 = 0xF5L;
                        l_1064[0] = l_1063;
                        (*p_32) &= l_1065;
                        (*g_599) = &p_35;
                    }
                    else
                    {
                        int i, j;
                        l_1075[2] = (((safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s(((*p_34) != ((void*)0 == &p_35)), (safe_rshift_func_uint8_t_u_u((!((&p_33 == l_1064[0]) == ((safe_rshift_func_uint16_t_u_s((((0L || p_35) || g_94[0]) <= ((p_35 <= l_1074[7]) != p_35)), p_35)) > (*g_93)))), p_35)))) > 0x1481L) != (**g_599)), 65526UL)) , 0x9E84D9A2L) , (void*)0);
                        (*p_32) = ((safe_lshift_func_uint8_t_u_s(((*p_32) & (safe_sub_func_int32_t_s_s((-8L), ((safe_add_func_uint16_t_u_u(p_35, func_53(p_32, (*g_206), p_35, ((*g_599) == (*g_206)), g_94[0]))) != 0x83L)))), p_35)) && 0x88L);
                        (*g_599) = &p_35;
                        (*p_33) = 0xBB0D8B5AL;
                    }
                }
            }
        }
        if ((*p_32))
            break;
    }
    return p_32;
}







static const int * func_38(short p_39, unsigned short p_40, int p_41, unsigned p_42)
{
    int **l_418[10][5][5] = {{{(void*)0,&g_93,&g_9,&g_93,(void*)0},{&g_9,&g_93,&g_9,&g_93,(void*)0},{&g_9,(void*)0,&g_9,(void*)0,&g_9},{&g_9,(void*)0,&g_9,(void*)0,&g_93},{&g_93,(void*)0,(void*)0,&g_9,&g_9}},{{(void*)0,&g_93,&g_9,&g_93,&g_9},{&g_93,&g_93,&g_9,&g_9,&g_93},{&g_93,(void*)0,&g_93,&g_9,&g_93},{&g_9,&g_9,&g_9,&g_93,(void*)0},{(void*)0,&g_9,&g_9,(void*)0,&g_9}},{{&g_9,(void*)0,&g_9,(void*)0,&g_93},{&g_93,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_93,(void*)0},{&g_9,(void*)0,&g_93,&g_93,(void*)0},{&g_93,&g_93,&g_9,&g_9,&g_9}},{{&g_93,&g_93,(void*)0,&g_93,&g_9},{&g_93,(void*)0,&g_93,&g_9,&g_9},{&g_93,(void*)0,&g_9,&g_9,&g_93},{(void*)0,(void*)0,(void*)0,(void*)0,&g_9},{&g_93,&g_93,&g_93,&g_93,&g_9}},{{(void*)0,(void*)0,(void*)0,&g_9,&g_9},{(void*)0,(void*)0,&g_93,&g_9,&g_93},{(void*)0,&g_93,&g_9,&g_9,&g_9},{&g_93,(void*)0,&g_93,&g_93,(void*)0},{&g_93,&g_9,(void*)0,(void*)0,&g_93}},{{&g_93,&g_93,&g_9,(void*)0,(void*)0},{&g_93,&g_9,&g_9,&g_93,(void*)0},{&g_93,&g_93,&g_93,(void*)0,&g_9},{&g_9,(void*)0,&g_9,&g_93,&g_9},{&g_9,&g_93,&g_93,&g_9,(void*)0}},{{(void*)0,&g_93,&g_9,&g_9,&g_93},{&g_93,&g_93,&g_93,&g_93,&g_9},{&g_93,&g_9,&g_93,&g_9,&g_93},{(void*)0,(void*)0,&g_9,&g_9,&g_93},{&g_93,&g_93,&g_93,&g_9,&g_9}},{{&g_93,(void*)0,&g_9,(void*)0,&g_93},{(void*)0,(void*)0,&g_93,&g_93,(void*)0},{&g_9,&g_9,&g_9,(void*)0,&g_93},{&g_9,(void*)0,&g_9,(void*)0,(void*)0},{&g_9,&g_9,(void*)0,&g_9,(void*)0}},{{&g_93,&g_93,(void*)0,&g_9,&g_93},{(void*)0,&g_9,&g_93,&g_93,&g_93},{(void*)0,&g_93,(void*)0,&g_9,(void*)0},{&g_9,(void*)0,&g_9,&g_9,&g_9},{&g_93,&g_93,&g_93,&g_9,&g_93}},{{&g_9,&g_93,&g_9,&g_9,&g_93},{(void*)0,(void*)0,(void*)0,&g_9,&g_93},{(void*)0,(void*)0,&g_93,&g_93,(void*)0},{&g_9,(void*)0,(void*)0,&g_9,&g_93},{&g_93,&g_93,(void*)0,(void*)0,&g_93}}};
    int *l_419 = &g_94[0];
    int * const l_429 = &g_223;
    int * const l_448 = &g_94[0];
    const unsigned short l_482 = 65535UL;
    unsigned short l_499 = 0xF501L;
    int *l_657 = &g_94[0];
    unsigned short l_722 = 1UL;
    unsigned l_726 = 0UL;
    int l_727 = 0xCE000540L;
    const int **l_748 = &g_439;
    const int l_777[9][3][5] = {{{(-1L),0xB7C22F67L,0L,0xB7C22F67L,(-1L)},{0xD68F7215L,(-1L),0x9F05858CL,0xEB7AF030L,(-1L)},{(-1L),(-2L),(-2L),(-1L),(-2L)}},{{0L,(-1L),9L,(-1L),(-1L)},{(-1L),(-1L),(-1L),(-2L),(-1L)},{(-1L),0x9F05858CL,0xEB7AF030L,(-1L),0xEB7AF030L}},{{(-10L),(-10L),0L,(-1L),0xB7C22F67L},{0xD68F7215L,0L,0xEB7AF030L,(-2L),0xD68F7215L},{(-1L),0L,0L,(-1L),0L}},{{0xEB7AF030L,0xD68F7215L,(-1L),0xD68F7215L,0xEB7AF030L},{0L,(-2L),0L,0L,(-2L)},{0xEB7AF030L,7L,7L,0xEB7AF030L,(-2L)}},{{(-1L),(-2L),(-1L),(-2L),(-2L)},{9L,0xEB7AF030L,9L,(-2L),0xEB7AF030L},{(-2L),0L,0L,(-2L),0L}},{{0x9F05858CL,0x9F05858CL,(-1L),0xEB7AF030L,0xD68F7215L},{0L,(-1L),0L,0L,(-1L)},{0xD68F7215L,7L,9L,0xD68F7215L,(-2L)}},{{(-2L),(-1L),(-1L),(-1L),(-2L)},{9L,0x9F05858CL,7L,(-2L),0x9F05858CL},{(-2L),0L,0L,(-2L),0L}},{{0xD68F7215L,0xEB7AF030L,(-1L),0x9F05858CL,0x9F05858CL},{0L,(-2L),0L,0L,(-2L)},{0x9F05858CL,7L,(-2L),0x9F05858CL,(-2L)}},{{(-2L),(-2L),(-1L),(-2L),(-1L)},{9L,0xD68F7215L,(-2L),(-2L),0xD68F7215L},{(-1L),0L,0L,(-2L),0L}}};
    char l_801[9][4] = {{(-10L),(-10L),0L,(-10L)},{(-10L),0x97L,0x97L,(-10L)},{0x97L,(-10L),0x97L,0x97L},{(-10L),(-10L),0L,(-10L)},{(-10L),0x97L,0x97L,(-10L)},{0x97L,(-10L),0x97L,0x97L},{(-10L),(-10L),0L,(-10L)},{(-10L),0x97L,0x97L,(-10L)},{0x97L,(-10L),0x97L,0x97L}};
    int *l_830 = &g_75;
    int i, j, k;
    l_419 = &p_41;
    return (*g_599);
}







static unsigned func_48(int p_49, unsigned short p_50)
{
    const int *l_108 = (void*)0;
    const int **l_107 = &l_108;
    int * const l_113 = &g_10;
    int l_125 = 3L;
    unsigned short l_146 = 1UL;
    int l_226 = (-1L);
    unsigned l_416 = 7UL;
lbl_205:
    (*l_107) = func_51((0xF77D900DL == p_49));
    if (((safe_mod_func_int16_t_s_s(func_53(&g_10, &g_94[0], ((safe_sub_func_uint16_t_u_u(g_10, ((*g_9) >= g_94[0]))) && (func_53(&p_49, l_113, (*l_108), ((((&l_113 == &l_108) == g_94[0]) < (*l_108)) , (*l_108)), g_86) , p_50)), g_94[0], g_94[0]), 1L)) != (*g_9)))
    {
        int * const l_124[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int *l_135 = &g_75;
        const int l_250 = 0xFD8CBC5EL;
        int l_267 = 0x44564FD7L;
        unsigned l_293 = 0x963D65F5L;
        int *l_347 = (void*)0;
        int **l_398 = &g_93;
        int ***l_397[1];
        int i;
        for (i = 0; i < 1; i++)
            l_397[i] = &l_398;
lbl_409:
        for (p_49 = 0; (p_49 != (-15)); p_49 = safe_sub_func_int32_t_s_s(p_49, 6))
        {
            unsigned l_116 = 0x10542879L;
            int l_117 = 0x8A2DDD91L;
            int * const l_144 = &g_94[1];
            int l_232 = 0x9D770979L;
            short l_249[8] = {0x9D9BL,1L,0x9D9BL,1L,0x9D9BL,1L,0x9D9BL,1L};
            int i;
            l_117 = l_116;
        }
        if (p_50)
        {
            const int *l_288[8] = {&g_223,&g_10,&g_223,&g_10,&g_223,&g_10,&g_223,&g_10};
            int i;
            for (l_267 = 0; (l_267 == 13); l_267++)
            {
                int **l_285 = &g_93;
                int **l_289 = &l_135;
                for (l_226 = (-11); (l_226 == (-29)); l_226--)
                {
                    return g_86;
                }
                (*l_285) = (*g_206);
                for (g_86 = 0; (g_86 == (-7)); g_86 = safe_sub_func_uint8_t_u_u(g_86, 7))
                {
                    if (p_50)
                        goto lbl_205;
                    l_288[7] = &l_250;
                }
                (*l_289) = ((func_53(&g_10, (*g_206), g_223, g_10, p_49) == 7UL) , (*g_206));
            }
        }
        else
        {
            int *l_290[3];
            int i;
            for (i = 0; i < 3; i++)
                l_290[i] = &l_125;
            l_125 |= ((0x3F35L >= (((((*l_108) == (&l_107 != &g_206)) & func_53(l_290[2], (*g_206), ((g_94[0] , (safe_rshift_func_int8_t_s_u(g_75, g_86))) >= l_293), g_161, g_75)) | (*l_108)) <= (**l_107))) ^ p_49);
        }
        g_223 &= ((((safe_add_func_int8_t_s_s((&g_9 == (void*)0), ((*l_135) == (((safe_lshift_func_int16_t_s_s(((**g_206) , (((*l_113) | ((+p_49) , (*l_108))) == ((safe_lshift_func_int8_t_s_s(0xAFL, (safe_lshift_func_uint8_t_u_s(g_161, 5)))) != p_49))), 7)) , 0UL) , g_94[0])))) , (void*)0) != &l_107) != 0xBB46EE75L);
        for (l_226 = 16; (l_226 != 29); l_226 = safe_add_func_uint16_t_u_u(l_226, 1))
        {
            short l_308 = (-1L);
            const short l_317 = 0x29BDL;
            char l_352 = 0xDBL;
            int *l_374 = (void*)0;
            for (l_267 = (-18); (l_267 != (-10)); l_267 = safe_add_func_int8_t_s_s(l_267, 2))
            {
                unsigned l_325 = 5UL;
                int * const l_332 = (void*)0;
                int *l_375 = &l_125;
                if ((((*l_113) , (safe_mod_func_uint8_t_u_u(((((p_50 != (*l_113)) & ((*g_9) || (0x6A2F6E2AL <= l_308))) , (func_53(&g_75, (((safe_add_func_uint16_t_u_u((((((((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(0x7C0EL, (-1L))), g_75)) & (*l_108)), l_317)) | p_50) , &g_206) != (void*)0) >= g_94[0]) & 0xF4F9L) > g_94[1]), 0x4282L)) >= (*l_108)) , (void*)0), (*l_108), l_308, p_49) > p_50)) , (*l_108)), p_49))) | 0xA8L))
                {
                    unsigned short l_329 = 0UL;
                    for (l_293 = 0; (l_293 >= 54); l_293 = safe_add_func_int16_t_s_s(l_293, 4))
                    {
                        if (p_50)
                            break;
                        if (g_320)
                            break;
                        p_49 = 0xF7D65FC6L;
                        if (p_50)
                            continue;
                    }
                    if (((safe_sub_func_int16_t_s_s((((*g_93) || ((void*)0 == (*g_206))) == (l_325 | (safe_rshift_func_uint16_t_u_s((&g_93 == (void*)0), 7)))), func_53(&g_223, &p_49, ((((safe_unary_minus_func_uint32_t_u(0x8051BDCDL)) > 0xDDL) , 7L) && p_49), g_94[0], l_329))) | g_94[1]))
                    {
                        return g_161;
                    }
                    else
                    {
                        int **l_330[6][5] = {{&g_93,&g_93,&g_93,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9,&l_135},{&g_93,&g_9,&g_9,&g_9,&g_9},{&l_135,&g_9,&l_135,&g_9,&g_9},{&g_9,&g_93,&g_9,&g_9,&g_93},{&l_135,&g_9,&g_9,&g_9,&l_135}};
                        int i, j;
                        g_93 = (*g_206);
                    }
                }
                else
                {
                    int *l_331 = &g_94[0];
                    if (func_53(l_331, l_332, (safe_mod_func_int16_t_s_s(g_94[0], l_308)), (((g_10 , (0xC19D5F81L && (*g_93))) <= (((((safe_mod_func_uint8_t_u_u((((l_325 > (1L || p_50)) && g_161) >= p_49), (*l_108))) , 0UL) & 0x43L) , g_337[6][0]) == &g_338)) | 255UL), g_320))
                    {
                        int l_341 = 1L;
                        int * const l_342[10][5] = {{&g_161,&g_161,(void*)0,&l_125,(void*)0},{&g_94[0],&g_94[0],&l_125,&g_94[1],&l_125},{(void*)0,(void*)0,&g_161,&g_223,&g_161},{&g_94[0],&g_94[0],&l_125,&g_94[1],&l_125},{(void*)0,(void*)0,&g_161,&g_223,&g_161},{&g_94[0],&g_94[0],&l_125,&g_94[1],&l_125},{(void*)0,(void*)0,&g_161,&g_223,&g_161},{&g_94[0],&g_94[0],&l_125,&g_94[1],&l_125},{(void*)0,(void*)0,&g_161,&g_223,&g_161},{&g_94[0],&g_94[0],&l_125,&g_94[1],&l_125}};
                        int i, j;
                        (*l_135) = ((void*)0 != &g_338);
                        (*g_93) ^= (&p_49 != &p_49);
                        (*l_107) = &l_250;
                        (**g_206) = func_53(((0x464219A5L >= (l_341 , func_53(l_135, l_342[6][0], (!(safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((((*l_108) , ((func_53(l_347, l_342[5][0], p_49, ((safe_add_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((l_352 <= (*l_108)), 0xDAL)) <= (**l_107)), p_49)) ^ p_49), l_352) , g_75) && 65535UL)) || g_320), g_223)) & 0UL), 7))), (*l_113), g_94[0]))) , &p_49), l_331, (**l_107), p_49, p_50);
                    }
                    else
                    {
                        unsigned short l_357 = 65535UL;
                        (*l_107) = func_51((((p_49 > (safe_rshift_func_int16_t_s_u(((((*l_113) > (safe_mod_func_uint8_t_u_u((~l_357), (safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(p_49, 0x08L)) , p_50), p_49))))) & (safe_sub_func_int8_t_s_s((g_10 < (safe_add_func_uint16_t_u_u(65535UL, 1L))), g_75))) < 0UL), 2))) != g_75) >= 8L));
                        (**g_206) = (safe_add_func_uint8_t_u_u(((((((void*)0 != &g_93) , (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((func_53(&p_49, (*g_206), (*l_331), p_50, ((func_53(&g_161, l_331, func_53(&p_49, (*g_206), g_94[0], (*l_113), p_50), g_320, l_352) , l_325) < 0x1FDBL)) , l_357), 65535UL)), 4))) , g_94[0]) <= 0x1BL) != (*l_108)), (*l_108)));
                        if (p_50)
                            break;
                    }
                    (*l_375) = (safe_rshift_func_int16_t_s_u((func_53((((void*)0 == &p_49) , l_374), (*g_206), ((g_161 , func_53(l_331, (func_53(l_375, (*g_206), g_86, (*l_135), (*l_331)) , &p_49), (**l_107), p_50, p_49)) , p_50), g_376[0], p_49) | 0x188DL), 12));
                }
                for (g_320 = 0; (g_320 <= 1); g_320 += 1)
                {
                    for (p_50 = 0; (p_50 <= 1); p_50 += 1)
                    {
                        int l_379[10][8][3] = {{{0x4DB26A75L,1L,(-1L)},{1L,0x7F951FFDL,0x6E8A7337L},{0xF6792E31L,0x7F951FFDL,0L},{0L,1L,1L},{(-1L),0x7F951FFDL,(-1L)},{0x90F09F6CL,0x7F951FFDL,0x7F951FFDL},{0xC08CAE39L,1L,3L},{4L,0x7F951FFDL,0L}},{{3L,0x7F951FFDL,1L},{0x4DB26A75L,1L,(-1L)},{1L,0x7F951FFDL,0x6E8A7337L},{0xF6792E31L,0x7F951FFDL,0L},{0L,1L,1L},{(-1L),0x7F951FFDL,(-1L)},{0x90F09F6CL,0x7F951FFDL,0x7F951FFDL},{0xC08CAE39L,1L,3L}},{{4L,0x7F951FFDL,0x7F951FFDL},{1L,(-1L),1L},{3L,1L,0x6E8A7337L},{0xC08CAE39L,(-1L),1L},{(-1L),(-1L),3L},{0xF6792E31L,1L,(-1L)},{0x4DB26A75L,(-1L),0L},{4L,(-1L),(-1L)}},{{0x90F09F6CL,1L,0L},{0L,(-1L),0x7F951FFDL},{1L,(-1L),1L},{3L,1L,0x6E8A7337L},{0xC08CAE39L,(-1L),1L},{(-1L),(-1L),3L},{0xF6792E31L,1L,(-1L)},{0x4DB26A75L,(-1L),0L}},{{4L,(-1L),(-1L)},{0x90F09F6CL,1L,0L},{0L,(-1L),0x7F951FFDL},{1L,(-1L),1L},{3L,1L,0x6E8A7337L},{0xC08CAE39L,(-1L),1L},{(-1L),(-1L),3L},{0xF6792E31L,1L,(-1L)}},{{0x4DB26A75L,(-1L),0L},{4L,(-1L),(-1L)},{0x90F09F6CL,1L,0L},{0L,(-1L),0x7F951FFDL},{1L,(-1L),1L},{3L,1L,0x6E8A7337L},{0xC08CAE39L,(-1L),1L},{(-1L),(-1L),3L}},{{0xF6792E31L,0L,0x1EA5B732L},{(-1L),1L,1L},{0L,1L,1L},{(-1L),0L,(-8L)},{3L,1L,0x6C77A69AL},{1L,1L,0L},{0x6E8A7337L,0L,(-1L)},{1L,1L,(-1L)}},{{0x7F951FFDL,1L,4L},{0L,0L,0x1EA5B732L},{(-1L),1L,1L},{0L,1L,1L},{(-1L),0L,(-8L)},{3L,1L,0x6C77A69AL},{1L,1L,0L},{0x6E8A7337L,0L,(-1L)}},{{1L,1L,(-1L)},{0x7F951FFDL,1L,4L},{0L,0L,0x1EA5B732L},{(-1L),1L,1L},{0L,1L,1L},{(-1L),0L,(-8L)},{3L,1L,0x6C77A69AL},{1L,1L,0L}},{{0x6E8A7337L,0L,(-1L)},{1L,1L,(-1L)},{0x7F951FFDL,1L,4L},{0L,0L,0x1EA5B732L},{(-1L),1L,1L},{0L,1L,1L},{(-1L),0L,(-8L)},{3L,1L,0x6C77A69AL}}};
                        int i, j, k;
                        g_382[1] = func_51((p_49 , func_53(l_374, (*g_206), (safe_sub_func_uint32_t_u_u((((g_376[3] | ((*g_93) , (p_50 , l_379[0][1][2]))) || g_320) >= ((safe_mod_func_int32_t_s_s(p_49, (*g_9))) , 6L)), 4294967295UL)), (*l_135), p_50)));
                        g_94[p_50] = (&g_382[7] == (((safe_mod_func_uint16_t_u_u((((safe_add_func_int8_t_s_s(p_50, ((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(g_376[0], (((((((g_337[(p_50 + 3)][g_320] != &g_206) | (safe_lshift_func_uint16_t_u_s((((0x35L <= func_53(&g_10, (*g_206), func_53(&g_94[0], (*g_206), p_50, g_376[5], p_49), p_50, p_49)) != 65532UL) , 0xA935L), g_94[0]))) ^ 0x04L) , g_161) == 1L) | 0x28L) , 0x20118409L))) & (*l_375)), 0UL)) >= p_50), 0)) , 0xCAL))) , (*l_375)) && g_161), p_49)) , 65528UL) , (void*)0));
                        if ((*l_108))
                            continue;
                        p_49 = (safe_rshift_func_uint8_t_u_s((g_94[1] != (l_397[0] != (void*)0)), (((safe_rshift_func_int8_t_s_u(p_50, (p_50 | (safe_rshift_func_int16_t_s_s(p_49, 5))))) | (&p_49 != (*g_206))) != (((safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_50, 1)) >= 0xC5ABL) && 0x79L) , (*l_108)), g_376[0])) & p_50) <= p_50))));
                    }
                    return g_223;
                }
                if ((*g_9))
                {
                    for (p_49 = 0; (p_49 <= 1); p_49 += 1)
                    {
                        int i;
                        if (p_49)
                            goto lbl_409;
                        (**l_398) = (safe_lshift_func_int16_t_s_s((&g_94[p_49] != &g_94[p_49]), 12));
                    }
                }
                else
                {
                    short l_412 = 0xD783L;
                    (*l_107) = &p_49;
                    p_49 = (!(*g_9));
                    l_412 ^= 0xD1AA99E7L;
                }
            }
        }
    }
    else
    {
lbl_415:
        (*l_107) = func_51(p_49);
        (**g_206) = p_49;
        for (l_226 = 20; (l_226 > (-18)); l_226 = safe_sub_func_int32_t_s_s(l_226, 1))
        {
            (*l_107) = &p_49;
        }
        if (g_75)
            goto lbl_415;
    }
    return l_416;
}







static const int * func_51(unsigned short p_52)
{
    char l_59 = 0x00L;
    char l_64[8][9];
    int l_105 = 0xB4235E97L;
    const int *l_106 = &g_94[1];
    int i, j;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
            l_64[i][j] = (-1L);
    }
    l_105 |= ((func_53(((l_59 < ((!0x8B14L) == (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((l_64[5][4] != ((g_10 ^ ((safe_sub_func_uint32_t_u_u(l_64[5][4], l_59)) || ((safe_unary_minus_func_uint16_t_u(65535UL)) , (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(p_52, 3)) , (p_52 == (*g_9))), p_52))))) >= l_64[6][5])) != g_10), 1L)), p_52)))) , (void*)0), &g_10, l_59, p_52, p_52) <= l_64[5][4]) < g_10);
    return l_106;
}







static short func_53(int * p_54, int * const p_55, short p_56, const unsigned p_57, short p_58)
{
    short l_72[8] = {1L,8L,8L,1L,8L,8L,1L,8L};
    const int *l_74[5];
    int l_76 = (-5L);
    int i;
    for (i = 0; i < 5; i++)
        l_74[i] = &g_75;
    for (p_58 = 6; (p_58 >= 0); p_58 -= 1)
    {
        const int *l_73 = &g_10;
        int i;
        l_74[1] = (l_72[p_58] , l_73);
        l_76 = ((*l_73) <= ((((g_10 ^ p_57) , p_54) != (void*)0) | p_57));
        for (g_75 = 5; (g_75 >= 2); g_75 -= 1)
        {
            int *l_77 = (void*)0;
            int *l_78[3][3][7] = {{{&g_75,&g_10,&l_76,&g_75,&l_76,&l_76,&g_10},{&g_10,&g_75,&l_76,&g_10,&l_76,&g_75,&g_10},{&g_75,&g_10,(void*)0,&l_76,&g_10,&g_75,&l_76}},{{&g_75,&l_76,&l_76,&g_10,&g_10,&l_76,&l_76},{&g_10,&g_10,(void*)0,&g_10,&g_10,&l_76,&l_76},{&g_10,&g_10,&l_76,&g_10,&l_76,&g_10,&l_76}},{{&g_10,&g_10,&l_76,&g_10,&g_10,&g_75,&g_10},{&g_10,&l_76,(void*)0,&g_10,&g_75,&g_75,&g_10},{&g_10,&l_76,&g_10,&l_76,&g_10,&g_10,&g_10}}};
            int i, j, k;
            l_73 = (void*)0;
            l_76 = (p_58 >= p_56);
        }
        for (g_86 = 7; (g_86 >= 2); g_86 -= 1)
        {
            int l_104 = 0xD6DCB749L;
            return l_104;
        }
    }
    return g_86;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_376[i], "g_376[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1053, "g_1053", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1278, "g_1278", print_hash_value);
    transparent_crc(g_1305, "g_1305", print_hash_value);
    transparent_crc(g_1353, "g_1353", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1656[i], "g_1656[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1756, "g_1756", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
