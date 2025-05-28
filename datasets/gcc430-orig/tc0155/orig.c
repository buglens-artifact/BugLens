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



static int g_2[4] = {1L,1L,1L,1L};
static unsigned short g_41 = 0xC0B8L;
static short g_69 = 1L;
static int g_70 = 1L;
static unsigned g_103 = 1UL;
static unsigned g_111 = 0xF77F61DBL;
static int g_120 = 0x686DF840L;
static unsigned char g_122 = 0xD3L;
static char g_125[4][9] = {{4L,4L,4L,4L,4L,4L,4L,4L,4L},{4L,4L,4L,4L,4L,4L,4L,4L,4L},{4L,4L,4L,4L,4L,4L,4L,4L,4L},{4L,4L,4L,4L,4L,4L,4L,4L,4L}};
static short *g_137 = &g_69;
static short **g_136 = &g_137;
static int *g_148 = &g_120;
static int **g_147 = &g_148;
static const unsigned g_156 = 1UL;
static short g_165 = 1L;
static unsigned char g_170 = 255UL;
static const unsigned g_209 = 0UL;
static unsigned g_239 = 0xE9A38E78L;
static char g_240[4] = {(-4L),(-4L),(-4L),(-4L)};
static unsigned short g_307 = 65535UL;
static char *g_348[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static char **g_347 = &g_348[0][3];
static unsigned short g_471 = 65533UL;
static const int g_567 = 4L;
static const int *g_566 = &g_567;
static unsigned *g_587 = &g_239;
static unsigned **g_586[2][8][10] = {{{(void*)0,&g_587,&g_587,(void*)0,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{(void*)0,&g_587,(void*)0,(void*)0,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{(void*)0,&g_587,&g_587,(void*)0,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{(void*)0,&g_587,(void*)0,(void*)0,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{(void*)0,&g_587,&g_587,(void*)0,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587}},{{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587},{&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587,&g_587}}};
static unsigned short *g_590[9] = {&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41};
static unsigned short * const *g_589 = &g_590[8];
static const char g_705 = (-1L);
static const int **g_717 = &g_566;
static const int ***g_716[10] = {&g_717,&g_717,&g_717,&g_717,&g_717,&g_717,&g_717,&g_717,&g_717,&g_717};
static unsigned short g_761 = 0xF979L;
static int g_801 = 0x83311748L;
static int g_812 = 0L;
static unsigned short *g_885 = &g_307;
static int g_930 = 0xF1205468L;
static int g_932 = 0x7ACF8484L;
static int g_970[1][8] = {{1L,1L,1L,1L,1L,1L,1L,1L}};
static const int g_1076 = 0xB96D1EE4L;
static int *g_1118 = (void*)0;
static int **g_1117 = &g_1118;
static char g_1253[9][10][2] = {{{0xACL,(-1L)},{0xACL,0L},{0L,(-1L)},{0L,(-1L)},{0xE4L,(-7L)},{(-10L),0x32L},{0x32L,0xACL},{0x33L,(-9L)},{0L,0xF2L},{(-6L),1L}},{{0L,0x82L},{0xF2L,0L},{(-1L),6L},{0xC7L,4L},{1L,1L},{(-1L),0x30L},{(-1L),0L},{6L,0x0EL},{(-5L),0x33L},{(-1L),0xE8L}},{{0L,1L},{4L,1L},{0L,0xE8L},{(-1L),0x33L},{(-5L),0x0EL},{6L,0L},{(-1L),0x30L},{(-1L),1L},{1L,4L},{0xC7L,6L}},{{(-1L),0L},{0xF2L,0x82L},{0L,1L},{(-6L),0xF2L},{0L,(-9L)},{0x33L,0xACL},{0x32L,0x32L},{(-10L),(-7L)},{0xE4L,(-1L)},{0L,(-1L)}},{{0L,0L},{0xACL,(-10L)},{0L,(-7L)},{(-1L),4L},{(-7L),0xBAL},{9L,1L},{(-1L),1L},{1L,0L},{0x09L,0xF2L},{0x32L,0L}},{{(-1L),(-5L)},{0x82L,0xE8L},{0L,1L},{4L,0xACL},{0x0EL,0x30L},{0xC7L,0L},{(-10L),1L},{(-1L),0x32L},{0xACL,(-9L)},{(-6L),0x09L}},{{0xBAL,0xE4L},{6L,4L},{0x30L,4L},{6L,0xE4L},{0xBAL,0x09L},{(-6L),(-9L)},{0xACL,0x32L},{(-1L),1L},{(-10L),0L},{0xC7L,0x30L}},{{0x0EL,0xACL},{4L,1L},{0L,0xE8L},{0x82L,(-5L)},{(-1L),0L},{0x32L,0xF2L},{0x09L,0L},{1L,1L},{(-1L),1L},{9L,0xBAL}},{{(-7L),4L},{(-1L),(-7L)},{0L,(-10L)},{0L,(-7L)},{(-1L),4L},{(-7L),0xBAL},{9L,1L},{(-1L),1L},{1L,0L},{0L,(-1L)}}};
static short g_1489[2] = {0xBE24L,0xBE24L};
static int *g_1503 = &g_120;
static unsigned short **g_1550 = (void*)0;
static unsigned short ***g_1549 = &g_1550;
static unsigned char *g_1607[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned char **g_1606 = &g_1607[0];



static unsigned char func_1(void);
static int func_5(unsigned p_6, const short p_7, unsigned char p_8);
static unsigned func_9(unsigned char p_10, int p_11, int p_12);
static unsigned char func_28(unsigned p_29, unsigned char p_30);
static short func_37(unsigned char p_38);
static unsigned char func_59(unsigned char p_60, const unsigned short * p_61, unsigned char p_62, unsigned short * const p_63);
static int func_71(unsigned short * p_72, unsigned p_73);
static unsigned short * func_74(int p_75, unsigned short * p_76);
static int func_77(char p_78, unsigned short * p_79, int p_80);
static const char func_84(unsigned short * p_85, unsigned char p_86, unsigned short * const p_87);
static unsigned char func_1(void)
{
    unsigned char l_1296 = 255UL;
    int l_1621 = (-7L);
    const int *l_1623 = (void*)0;
    short **l_1627[3][8];
    short ***l_1628[3];
    unsigned short l_1629[9][10][2] = {{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}},{{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL},{65529UL,0x405DL},{65529UL,65529UL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
            l_1627[i][j] = &g_137;
    }
    for (i = 0; i < 3; i++)
        l_1628[i] = &g_136;
    for (g_2[1] = 0; (g_2[1] <= 4); g_2[1] = safe_add_func_uint32_t_u_u(g_2[1], 6))
    {
        const int *l_1622[9][6][4] = {{{&g_120,&g_2[1],&g_1076,&g_120},{(void*)0,(void*)0,&g_970[0][5],(void*)0},{&g_567,&g_2[1],&g_970[0][1],&l_1621},{&g_1076,&g_2[0],&g_2[1],&g_1076},{&g_970[0][1],&g_970[0][5],&g_2[1],&g_120},{(void*)0,&g_70,&g_1076,&g_70}},{{(void*)0,&g_970[0][1],&g_567,&g_567},{&g_1076,(void*)0,&g_1076,&g_2[1]},{&g_2[1],&g_2[1],&g_567,(void*)0},{&g_2[1],(void*)0,&g_1076,&g_2[1]},{&g_1076,(void*)0,&g_567,&g_2[1]},{(void*)0,&g_120,&g_1076,&g_1076}},{{(void*)0,&g_970[0][5],&g_2[1],&g_2[2]},{&g_970[0][1],(void*)0,&g_2[1],&g_2[0]},{&g_1076,&g_1076,&g_970[0][1],&g_970[0][1]},{&g_567,&g_567,&g_970[0][5],&g_2[1]},{(void*)0,&g_2[1],&g_1076,(void*)0},{(void*)0,&g_2[2],&g_932,&g_1076}},{{&g_2[1],&g_2[2],&g_1076,(void*)0},{&g_2[2],&g_2[1],&g_2[1],&g_2[1]},{&g_567,&g_567,&g_2[1],&g_970[0][1]},{(void*)0,&g_1076,&g_567,&g_2[0]},{(void*)0,(void*)0,&g_120,&g_2[2]},{&g_567,&g_970[0][5],&g_2[0],&g_1076}},{{(void*)0,&g_120,(void*)0,&g_2[1]},{&g_70,(void*)0,(void*)0,&g_120},{&g_120,&g_932,(void*)0,(void*)0},{&g_2[2],&g_2[1],(void*)0,&g_2[1]},{&g_120,&g_970[0][5],(void*)0,&g_2[1]},{&g_70,&l_1621,(void*)0,&g_2[1]}},{{(void*)0,&g_2[1],(void*)0,&g_2[1]},{(void*)0,&g_2[0],&g_2[1],&g_2[1]},{&g_932,(void*)0,&g_2[2],(void*)0},{&g_1076,&g_1076,&g_1076,&g_1076},{&g_2[1],(void*)0,&g_567,(void*)0},{&g_1076,&g_2[2],&g_120,&g_970[0][5]}},{{&g_1076,&g_1076,&g_1076,&g_970[0][5]},{&g_970[0][5],&g_2[2],&g_567,(void*)0},{&l_1621,(void*)0,&g_2[0],&g_1076},{&g_2[2],&g_1076,&l_1621,(void*)0},{&g_2[0],(void*)0,&g_2[2],&g_2[1]},{&l_1621,&g_2[0],&g_2[1],&g_2[1]}},{{(void*)0,&g_2[1],&g_2[0],&g_2[1]},{&g_2[1],&l_1621,(void*)0,&g_2[1]},{&g_970[0][5],&g_970[0][5],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],(void*)0},{&g_2[1],&g_932,&g_2[1],&g_120},{&g_970[0][5],(void*)0,(void*)0,&g_2[1]}},{{&g_2[1],&g_970[0][5],(void*)0,(void*)0},{&g_2[1],&g_2[1],&g_567,&g_2[0]},{(void*)0,&g_70,(void*)0,&g_2[1]},{(void*)0,&g_2[2],(void*)0,(void*)0},{&g_1076,&g_1076,&g_567,&g_2[2]},{&g_70,&g_2[1],&g_2[2],&g_2[1]}}};
        unsigned char l_1624 = 0x88L;
        int i, j, k;
        l_1621 = func_5(func_9(g_2[1], g_2[1], g_2[1]), (*g_137), l_1296);


        if (l_1296)
            break;
        l_1623 = l_1622[3][5][3];
        if (l_1624)
            break;
    }


    ;
    l_1621 = (safe_mod_func_uint32_t_u_u((*g_587), ((*g_1503) ^= 0L)));
    g_136 = l_1627[0][5];
    return l_1629[7][3][0];
}







static int func_5(unsigned p_6, const short p_7, unsigned char p_8)
{
    unsigned l_1299 = 4UL;
    const short *l_1302[1];
    const short **l_1301 = &l_1302[0];
    const short ***l_1300 = &l_1301;
    char *l_1303[5];
    int l_1304 = (-10L);
    int l_1305 = 4L;
    unsigned short * const l_1318 = &g_761;
    unsigned ** const l_1357 = &g_587;
    unsigned l_1425 = 4294967287UL;
    unsigned short *l_1437[8] = {&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761};
    int l_1471[1];
    unsigned char l_1530 = 255UL;
    unsigned short ***l_1551[3][10] = {{&g_1550,(void*)0,&g_1550,&g_1550,(void*)0,&g_1550,(void*)0,&g_1550,&g_1550,(void*)0},{&g_1550,(void*)0,&g_1550,&g_1550,(void*)0,&g_1550,(void*)0,&g_1550,&g_1550,(void*)0},{&g_1550,(void*)0,&g_1550,&g_1550,(void*)0,&g_1550,(void*)0,&g_1550,&g_1550,(void*)0}};
    unsigned l_1572 = 0UL;
    unsigned char l_1573 = 0xF5L;
    unsigned char l_1581 = 1UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1302[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_1303[i] = &g_125[1][1];
    for (i = 0; i < 1; i++)
        l_1471[i] = 0L;
    if ((p_8 & (l_1305 = (l_1304 = (safe_mul_func_int32_t_s_s(l_1299, (l_1300 == &l_1301)))))))
    {
        unsigned char l_1320 = 0xE6L;
        (*g_147) = &l_1304;

        ;
        for (g_307 = 0; (g_307 != 49); ++g_307)
        {
            int * const l_1310 = &g_70;
            int *l_1311 = &g_970[0][5];
            int **l_1312 = &l_1311;
            unsigned short *l_1317 = (void*)0;
            for (p_8 = 0; (p_8 < 30); p_8 = safe_add_func_int32_t_s_s(p_8, 7))
            {
                l_1311 = l_1310;

                ;
                if ((*g_566))
                    continue;
                (*g_148) = ((l_1312 = &g_148) == (void*)0);

                ;
                if ((*g_148))
                    continue;
            }

            ;
            ;
            for (g_103 = 20; (g_103 >= 4); g_103 = safe_sub_func_uint8_t_u_u(g_103, 7))
            {
                unsigned char *l_1319 = &g_122;
                int l_1321[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1321[i] = 0L;
                (*l_1310) = (l_1304 | ((*g_137) ^ (safe_add_func_int32_t_s_s((func_84(l_1317, p_7, l_1318) ^ func_9(g_120, p_6, func_9(((*l_1319) &= 6UL), p_6, l_1320))), (*g_148)))));
                (*l_1310) = (**g_717);
                if (l_1321[0])
                    continue;
            }
        }
    }
    else
    {
        int *l_1322 = &g_970[0][5];
        l_1322 = l_1322;
    }


    for (g_932 = 4; (g_932 == 14); g_932 = safe_add_func_int16_t_s_s(g_932, 4))
    {
        short *l_1329 = &g_165;
        int l_1330 = (-9L);
        int ** const l_1350 = (void*)0;
        char **l_1364 = &g_348[1][1];
        short l_1383 = 0L;
        const short l_1415 = 9L;
        const unsigned short *l_1430 = &g_761;
        const unsigned short **l_1429 = &l_1430;
        int l_1479 = 0x19F146C8L;
        char **l_1512[3][1][8] = {{{&g_348[0][3],&l_1303[0],&l_1303[2],&l_1303[2],&l_1303[0],&g_348[0][3],&l_1303[0],&l_1303[2]}},{{(void*)0,&l_1303[0],(void*)0,&g_348[0][3],&g_348[0][3],(void*)0,&l_1303[0],(void*)0}},{{(void*)0,&g_348[0][3],&l_1303[2],&g_348[0][3],(void*)0,(void*)0,&g_348[0][3],&l_1303[2]}}};
        int *l_1514 = (void*)0;
        const unsigned l_1535 = 0xE16D5164L;
        int i, j, k;
    }
    for (g_307 = 0; (g_307 <= 1); g_307 += 1)
    {
        int ***l_1589 = &g_1117;
        int l_1600[9][3] = {{0L,7L,(-4L)},{0L,(-2L),0x4E67F002L},{0L,0x2B34E1A9L,0L},{0L,(-2L),0L},{0x4E67F002L,0x2B34E1A9L,(-4L)},{0x4E67F002L,7L,0x4E67F002L},{0x4E67F002L,(-2L),0L},{0x4E67F002L,0x2B34E1A9L,(-4L)},{0x4E67F002L,7L,0x4E67F002L}};
        unsigned char **l_1619 = &g_1607[0];
        int i, j;
        for (g_120 = 0; (g_120 <= 2); g_120 += 1)
        {
            unsigned short l_1584 = 0xFB38L;
            int *l_1601 = &l_1305;
            (*l_1601) = (safe_div_func_uint32_t_u_u((l_1584 <= (p_7 > func_37((safe_mod_func_int16_t_s_s((((~((((void*)0 != l_1589) > (safe_rshift_func_uint16_t_u_s(4UL, 8))) >= (((p_7 == (safe_lshift_func_int16_t_s_u((*g_137), ((g_122 <= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0UL, (*g_566))), (**g_136)))) & l_1584)))) < p_8) & 0L))) && 0xED41L) < l_1600[0][1]), 0x44F4L))))), 0xABB50D47L));
            for (l_1572 = 0; (l_1572 <= 1); l_1572 += 1)
            {
                int l_1616 = 0L;
                int i, j, k;
                (*l_1601) ^= (safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(g_1253[(g_307 + 2)][(g_120 + 7)][l_1572], (*g_566))), 6));
                for (l_1530 = 0; (l_1530 <= 2); l_1530 += 1)
                {
                    for (l_1305 = 2; (l_1305 >= 0); l_1305 -= 1)
                    {
                        unsigned char **l_1608 = &g_1607[0];
                        unsigned char ***l_1609 = (void*)0;
                        unsigned char ***l_1610 = &l_1608;
                        int l_1615[9][5][5] = {{{0L,0xABDC7328L,6L,0xD6310AF6L,0x6404B55DL},{0x2EC93708L,(-3L),0x1F236429L,(-1L),0x2EC93708L},{(-7L),0xE0F7AABDL,0x87844638L,0xD6310AF6L,2L},{0x42660026L,1L,0xB150FDC1L,0x5A7913FFL,0xFD6E1428L},{(-9L),1L,0L,0xE0F7AABDL,0xBF6236FCL}},{{(-3L),0x5A7913FFL,0x2619E314L,5L,0x2EC93708L},{2L,0x52B71AA8L,(-7L),0x04FA80E8L,0x3DB3DD14L},{(-3L),0x81A16C1CL,0xA006E413L,0L,0L},{(-9L),8L,(-9L),0xC9A43BF0L,(-2L)},{0x42660026L,0xAA5B78F9L,(-1L),1L,0x4EBCBCF1L}},{{(-7L),0x52B71AA8L,2L,0xABDC7328L,0xD4BE8AE3L},{0x2EC93708L,0xB150FDC1L,(-1L),0x4EBCBCF1L,0xAA5B78F9L},{0L,1L,(-9L),1L,0L},{0x5A7913FFL,0xFD6E1428L,0xA006E413L,0x0DF1B0C3L,(-5L)},{0x87844638L,0xE0F7AABDL,(-7L),0xABDC7328L,1L}},{{0L,(-1L),0x2619E314L,0xFD6E1428L,0xFD6E1428L},{0xBF6236FCL,0x04FA80E8L,(-2L),0xABDC7328L,(-2L)},{0xFD6E1428L,0xFD6E1428L,0x1F236429L,0x2619E314L,0x49AB3BA3L},{2L,8L,0x3DB3DD14L,0x25FBAF3AL,(-1L)},{0x2EC93708L,5L,0x2619E314L,0x5A7913FFL,(-3L)}},{{0x6404B55DL,8L,0xBF6236FCL,0x7279E4DDL,6L},{0L,0xFD6E1428L,1L,0x1F236429L,0x2EC93708L},{0xAB0C79E6L,0x04FA80E8L,2L,1L,0x22186E95L},{0x4EBCBCF1L,0x93D09414L,0x2619E314L,(-5L),0x4EBCBCF1L},{(-9L),0x7279E4DDL,0x6404B55DL,1L,0xE6970987L}},{{0xAA5B78F9L,0x42660026L,0x1F236429L,0x1F236429L,0x42660026L},{(-1L),0x52B71AA8L,0xAB0C79E6L,0x7279E4DDL,1L},{(-5L),0x1F236429L,0x0DF1B0C3L,0x5A7913FFL,0x4EBCBCF1L},{0xE6970987L,0xE0F7AABDL,(-9L),0x25FBAF3AL,(-3L)},{(-5L),0x49AB3BA3L,0x81A16C1CL,0x2619E314L,0x2EC93708L}},{{(-1L),0xC9A43BF0L,(-1L),0xABDC7328L,0L},{0xAA5B78F9L,0xCF2AE275L,0x93D09414L,0x42660026L,(-3L)},{(-9L),0xE0F7AABDL,0xE6970987L,0x04FA80E8L,0L},{0x4EBCBCF1L,0L,0x93D09414L,(-1L),0x49AB3BA3L},{0xAB0C79E6L,0x52B71AA8L,(-1L),0x52B71AA8L,0x87844638L}},{{(-5L),0xB150FDC1L,0x1F236429L,0xAA5B78F9L,5L},{(-9L),0xABDC7328L,0xBF6236FCL,0x52B71AA8L,0x5245D7D0L},{0xFD6E1428L,0x49AB3BA3L,0xA006E413L,0xB150FDC1L,5L},{0x22186E95L,0x52B71AA8L,0x87844638L,1L,0x87844638L},{5L,5L,0x93D09414L,0xFD6E1428L,0x2EC93708L}},{{(-3L),0x25FBAF3AL,(-9L),0xE0F7AABDL,0xE6970987L},{0xFD6E1428L,0x4EBCBCF1L,1L,(-1L),0xAA5B78F9L},{0xD4BE8AE3L,0x25FBAF3AL,0x22186E95L,0xABDC7328L,0x3DB3DD14L},{(-5L),5L,5L,(-5L),0xFD6E1428L},{0x4A5BB6A9L,0x52B71AA8L,(-3L),2L,0L}}};
                        int l_1617[6] = {0L,0x1685665EL,0L,0L,0x1685665EL,0L};
                        unsigned char ***l_1618[9][7] = {{(void*)0,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606},{&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606},{(void*)0,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606},{&g_1606,&g_1606,(void*)0,&g_1606,&g_1606,&g_1606,(void*)0},{&g_1606,&g_1606,(void*)0,&g_1606,&g_1606,&g_1606,&g_1606},{&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,(void*)0,&g_1606},{&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,(void*)0,&g_1606},{&g_1606,&g_1606,&g_1606,(void*)0,&g_1606,&g_1606,&g_1606},{&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,&g_1606,(void*)0}};
                        int i, j, k;
                        l_1617[5] |= (l_1616 |= ((g_1606 != ((*l_1610) = l_1608)) < (l_1615[1][4][1] = (safe_lshift_func_int16_t_s_s((l_1600[(l_1572 + 4)][(l_1572 + 1)] = (safe_add_func_int8_t_s_s(l_1600[(l_1572 + 4)][(l_1572 + 1)], l_1600[l_1530][g_120]))), 5)))));
                        l_1619 = ((*l_1610) = (void*)0);

                        ;
                        ;
                    }
                }
            }
        }

        ;
        for (l_1573 = 0; (l_1573 <= 2); l_1573 += 1)
        {
            int *l_1620 = &g_2[3];
            (*l_1589) = &g_1118;
            (*g_1503) = (**g_717);
            l_1620 = l_1620;
        }
    }
    (*g_147) = &l_1471[0];

    ;
    return l_1572;


}







static unsigned func_9(unsigned char p_10, int p_11, int p_12)
{
    int l_31[9][4] = {{1L,(-6L),0xBC4433ACL,0xBC4433ACL},{0x37828451L,0x37828451L,1L,0xBC4433ACL},{(-7L),(-6L),(-7L),1L},{(-7L),1L,1L,(-7L)},{0x37828451L,1L,0xBC4433ACL,1L},{1L,(-6L),0xBC4433ACL,0xBC4433ACL},{0x37828451L,0x37828451L,1L,0xBC4433ACL},{(-7L),(-6L),(-7L),1L},{(-7L),1L,1L,(-7L)}};
    char l_1127 = 0x20L;
    unsigned short *l_1152 = &g_761;
    unsigned short *l_1153[9];
    short l_1155 = 0x6D3BL;
    int l_1169[2];
    int l_1172 = 0L;
    int i, j;
    for (i = 0; i < 9; i++)
        l_1153[i] = &g_41;
    for (i = 0; i < 2; i++)
        l_1169[i] = 0xBD59D8A8L;
    return l_1155;
}







static unsigned char func_28(unsigned p_29, unsigned char p_30)
{
    unsigned short l_34 = 65534UL;
    unsigned short *l_40 = &g_41;
    int l_44 = 9L;
    const unsigned short * const l_52 = &l_34;
    int *l_937 = (void*)0;
    unsigned short *l_955 = &g_471;
    unsigned short **l_996 = &g_885;
    int l_999 = 0L;
    int l_1089 = (-4L);
    if (((safe_rshift_func_uint16_t_u_s(l_34, (safe_rshift_func_uint8_t_u_u((func_37(l_34) & ((*l_40) = p_30)), ((safe_rshift_func_uint16_t_u_s(l_44, (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((func_37((safe_unary_minus_func_int16_t_s(((l_44 ^ (0xCEFCL <= (((void*)0 != l_52) ^ 0x3018L))) && p_30)))) & l_34), g_2[1])), 4)) | p_29), g_2[1])))) >= 0xF90BL))))) && g_2[1]))
    {
        short l_67 = (-9L);
        int l_936 = 1L;
        unsigned short * const l_973 = &g_41;
        unsigned short *l_979[2];
        unsigned short **l_980 = &l_40;
        unsigned char *l_983 = &g_122;
        unsigned char l_997 = 0x17L;
        int *l_1004 = &g_120;
        int i;
        for (i = 0; i < 2; i++)
            l_979[i] = &l_34;
        for (l_34 = 0; (l_34 < 32); l_34 = safe_add_func_int8_t_s_s(l_34, 6))
        {
            unsigned short *l_66[7][5][1] = {{{&l_34},{&g_41},{&l_34},{&g_41},{&g_41}},{{&g_41},{&g_41},{&l_34},{&g_41},{&l_34}},{{&g_41},{&g_41},{&g_41},{&g_41},{&l_34}},{{&g_41},{&l_34},{&g_41},{&g_41},{&g_41}},{{&g_41},{&l_34},{&g_41},{&l_34},{&g_41}},{{&g_41},{&g_41},{&g_41},{&l_34},{&g_41}},{{&l_34},{&g_41},{&g_41},{&g_41},{&g_41}}};
            short *l_68 = &g_69;
            unsigned char *l_933 = (void*)0;
            unsigned char *l_934 = &g_122;
            int *l_935[6] = {&g_2[1],&g_70,&g_70,&g_2[1],&g_70,&g_70};
            int i, j, k;
        }
        for (p_30 = 0; (p_30 <= 24); p_30 = safe_add_func_int32_t_s_s(p_30, 6))
        {
            int *l_954[2];
            unsigned short *l_956 = &g_307;
            const int l_963 = (-3L);
            unsigned char *l_971[1];
            int l_972[2][5][7] = {{{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L}},{{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L},{0L,1L,0x6CCB69C7L,0xBCB9A512L,0x6CCB69C7L,1L,0L}}};
            short *l_974 = &l_67;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_954[i] = &g_812;
            for (i = 0; i < 1; i++)
                l_971[i] = &g_122;
        }
    }
    else
    {
        unsigned short *l_1056 = &g_307;
        l_937 = ((*g_147) = &l_999);

        ;
        ;
        if ((safe_mod_func_uint16_t_u_u(func_71(func_74(p_30, l_1056), p_30), (safe_mod_func_int16_t_s_s(func_84(((*l_996) = &g_307), (safe_sub_func_int32_t_s_s((*l_937), (*g_587))), (*g_589)), g_122)))))
        {
            for (l_44 = 9; (l_44 >= 25); l_44++)
            {
                (*l_937) = (*g_148);
                if ((*l_937))
                    continue;
                (*g_148) ^= p_29;
            }
            return g_2[1];


        }
        else
        {
            (*g_148) |= p_30;
        }

        ;
    }


    ;
    for (g_307 = 0; (g_307 <= 3); g_307 += 1)
    {
        const int *l_1063[3];
        int l_1072 = 8L;
        int l_1074 = 0xB588FA15L;
        unsigned short *l_1077[9] = {&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41,&g_41};
        unsigned l_1082 = 0xE3773B20L;
        char l_1097 = 0x9CL;
        const unsigned l_1102 = 0xEB8CF1E3L;
        const unsigned *l_1121 = &g_156;
        const unsigned **l_1120 = &l_1121;
        const unsigned ***l_1119 = &l_1120;
        int *l_1122 = &l_1074;
        int i;
        for (i = 0; i < 3; i++)
            l_1063[i] = &g_801;
        l_999 &= (l_1063[1] != l_1063[1]);
        for (g_801 = 3; (g_801 >= 0); g_801 -= 1)
        {
            short l_1070 = 0xCCF1L;
            unsigned short *l_1071 = &l_34;
            int *l_1073[8][10][3] = {{{&g_970[0][1],(void*)0,&g_2[3]},{(void*)0,&g_970[0][2],&g_930},{&g_2[1],&g_930,&g_930},{&g_2[3],&g_930,&g_970[0][5]},{&g_2[1],&g_930,&g_970[0][5]},{&g_930,&g_2[1],&g_2[1]},{(void*)0,&g_930,(void*)0},{&g_930,&g_2[3],&g_970[0][6]},{&g_970[0][5],&g_970[0][6],&g_930},{&g_970[0][5],&g_2[3],&g_970[0][5]}},{{&g_930,&g_2[1],&g_2[1]},{(void*)0,&g_930,&g_970[0][5]},{&g_930,&g_2[3],&g_930},{&g_2[1],&g_2[3],&g_2[1]},{(void*)0,&g_970[0][3],(void*)0},{&g_2[1],(void*)0,&g_2[1]},{&g_930,&g_930,&g_970[0][6]},{(void*)0,&g_970[0][3],(void*)0},{&g_930,&g_930,&g_970[0][1]},{&g_970[0][5],&g_970[0][5],&g_970[0][5]}},{{&g_970[0][5],&g_930,(void*)0},{&g_930,&g_2[3],&g_2[3]},{(void*)0,(void*)0,&g_2[1]},{&g_930,&g_970[0][6],&g_970[0][5]},{&g_2[1],&g_930,&g_2[3]},{(void*)0,&g_2[1],&g_930},{&g_2[1],&g_2[1],&g_930},{&g_930,(void*)0,&g_970[0][1]},{(void*)0,&g_2[1],(void*)0},{&g_930,&g_2[1],&g_2[1]}},{{&g_970[0][5],&g_2[3],&g_2[1]},{&g_970[0][5],(void*)0,&g_930},{&g_930,&g_930,&g_930},{(void*)0,&g_2[3],&g_930},{&g_930,&g_970[0][5],&g_2[1]},{&g_970[0][5],&g_2[3],(void*)0},{&g_970[0][5],&g_2[1],&g_930},{&g_970[0][5],&g_2[1],&g_2[1]},{&g_2[1],&g_930,&g_970[0][5]},{&g_970[0][5],&g_2[1],&g_970[0][5]}},{{(void*)0,&g_970[0][6],&g_970[0][5]},{&g_930,&g_2[1],&g_2[1]},{&g_930,&g_970[0][1],&g_930},{(void*)0,(void*)0,(void*)0},{&g_970[0][5],(void*)0,&g_930},{&g_2[1],&g_2[1],(void*)0},{&g_970[0][5],&g_970[0][6],(void*)0},{&g_970[0][5],&g_2[3],&g_970[0][5]},{&g_970[0][5],&g_2[3],&g_2[1]},{&g_2[1],&g_2[1],&g_970[0][5]}},{{&g_970[0][5],&g_2[3],&g_970[0][5]},{(void*)0,&g_970[0][5],&g_970[0][5]},{&g_930,(void*)0,&g_2[1]},{&g_930,(void*)0,&g_970[0][5]},{(void*)0,(void*)0,(void*)0},{&g_970[0][5],(void*)0,&g_970[0][5]},{&g_2[1],&g_2[1],&g_930},{&g_970[0][5],&g_970[0][5],(void*)0},{&g_970[0][5],&g_930,&g_2[1]},{&g_970[0][5],&g_930,&g_2[1]}},{{&g_2[1],&g_2[3],&g_970[0][5]},{&g_970[0][5],&g_930,&g_2[0]},{(void*)0,&g_2[3],&g_970[0][5]},{&g_930,&g_2[1],&g_2[1]},{&g_930,(void*)0,&g_2[1]},{(void*)0,&g_2[3],(void*)0},{&g_970[0][5],&g_970[0][1],(void*)0},{&g_2[3],&g_970[0][6],&g_2[1]},{&g_970[0][7],&g_2[0],&g_930},{(void*)0,&g_930,&g_930}},{{&g_970[0][7],(void*)0,&g_970[0][5]},{&g_2[3],(void*)0,&g_970[0][7]},{(void*)0,&g_930,(void*)0},{&g_930,&g_970[0][5],&g_970[0][2]},{&g_2[1],&g_970[0][1],&g_2[3]},{&g_2[1],(void*)0,&g_930},{&g_930,&g_2[1],&g_2[1]},{(void*)0,&g_970[0][5],&g_2[1]},{&g_2[3],&g_2[1],(void*)0},{&g_970[0][7],&g_970[0][5],&g_2[1]}}};
            unsigned l_1103 = 1UL;
            int i, j, k;
            (*g_717) = l_1063[2];

            ;
            (*g_717) = l_1063[0];
            l_1074 |= (g_932 = (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_29, (func_84(&g_307, l_1070, func_74(p_30, l_1071)) >= ((*g_148) &= l_1072)))), ((**g_589) <= l_1072))), l_1072)));
            for (p_29 = 0; (p_29 <= 1); p_29 += 1)
            {
                const short l_1081 = 0x0F72L;
                if (((*g_148) | l_1072))
                {
                    unsigned short *l_1078[4][9] = {{&l_34,&l_34,(void*)0,&l_34,&l_34,&l_34,(void*)0,&l_34,&l_34},{&l_34,&l_34,&l_34,&l_34,(void*)0,&g_471,&g_471,(void*)0,&l_34},{&l_34,&l_34,&l_34,&g_761,&l_34,&l_34,&l_34,&g_761,&l_34},{&l_34,&l_34,&g_471,&l_34,(void*)0,(void*)0,&l_34,&g_471,&l_34}};
                    int i, j;
                    (**g_147) ^= func_37(g_240[3]);
                    for (g_471 = 0; (g_471 <= 1); g_471 += 1)
                    {
                        const int *l_1075 = &g_1076;
                        (*g_147) = (*g_147);
                        (*g_717) = (l_1075 = (*g_147));



                        if ((*l_1075))
                            break;
                        if ((**g_147))
                            break;
                    }


                    (**g_147) = (**g_147);
                    if ((*g_148))
                    {
                        (*g_147) = &l_999;

                        ;
                        return l_1074;




                    }
                    else
                    {
                        (*g_717) = l_1073[0][9][0];

                        ;
                        (**g_147) &= (((*l_996) = func_74(g_240[0], l_1077[2])) != l_1078[1][8]);

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    if ((safe_rshift_func_uint8_t_u_s(0xF1L, l_1081)))
                    {
                        return g_240[3];



                    }
                    else
                    {
                        return g_111;



                    }
                }

                ;
                ;
                l_1082 |= p_30;
            }

            ;
            for (l_34 = 0; (l_34 <= 1); l_34 += 1)
            {
                int l_1092 = (-2L);
                int **l_1098 = (void*)0;
            }
        }
        (*l_1119) = (void*)0;

        ;
        (*l_1122) |= (**g_147);
        for (g_122 = 0; (g_122 <= 1); g_122 += 1)
        {
            return g_932;



        }
    }


    return g_812;



}







static short func_37(unsigned char p_38)
{
    unsigned l_39 = 0x77562375L;
    return l_39;
}







static unsigned char func_59(unsigned char p_60, const unsigned short * p_61, unsigned char p_62, unsigned short * const p_63)
{
    unsigned short *l_81 = &g_41;
    unsigned short **l_771[8];
    int l_772 = 0x2AFC7044L;
    int *l_928 = (void*)0;
    int *l_929 = &g_930;
    int *l_931[4][10][6] = {{{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]}},{{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]}},{{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]}},{{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]},{&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1],&g_2[1]}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_771[i] = &g_590[4];
    g_932 &= ((*l_929) ^= func_71((g_590[7] = func_74(func_77(g_70, l_81, p_62), l_81)), l_772));


    ;
    return p_60;
}







static int func_71(unsigned short * p_72, unsigned p_73)
{
    int l_773[3][2][1] = {{{0x9D5207C8L},{0L}},{{0x9D5207C8L},{0L}},{{0x9D5207C8L},{0L}}};
    char **l_779[3];
    unsigned l_780 = 4294967287UL;
    unsigned short *l_802[1];
    int l_804[4] = {8L,8L,8L,8L};
    int **l_807 = &g_148;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_779[i] = &g_348[2][1];
    for (i = 0; i < 1; i++)
        l_802[i] = (void*)0;
    l_773[0][0][0] = 0xC9CA3036L;
    for (g_69 = (-14); (g_69 <= 4); g_69++)
    {
        char ** const l_778 = &g_348[0][3];
        int *l_781[5] = {&l_773[1][1][0],&l_773[1][1][0],&l_773[1][1][0],&l_773[1][1][0],&l_773[1][1][0]};
        unsigned short *l_782 = &g_307;
        int *l_876 = (void*)0;
        char **l_887 = &g_348[0][3];
        short **l_925 = &g_137;
        int i;
    }
    return p_73;
}







static unsigned short * func_74(int p_75, unsigned short * p_76)
{
    return p_76;


}







static int func_77(char p_78, unsigned short * p_79, int p_80)
{
    unsigned short *l_88 = &g_41;
    int l_241[6][1][9] = {{{0x8A64FEF6L,0x314BEDBEL,0xB730C7F6L,0xB730C7F6L,0x314BEDBEL,0x8A64FEF6L,0L,0x8A64FEF6L,0x314BEDBEL}},{{1L,0x42813DB6L,0x42813DB6L,1L,0xCF7601C1L,1L,0xCF7601C1L,1L,0x42813DB6L}},{{0x2EB942D2L,0x2EB942D2L,0L,0x314BEDBEL,(-1L),0x314BEDBEL,0L,0x2EB942D2L,0x2EB942D2L}},{{0x42813DB6L,1L,0xCF7601C1L,1L,0xCF7601C1L,1L,0x42813DB6L,0x42813DB6L,1L}},{{0x314BEDBEL,0x8A64FEF6L,0L,0x8A64FEF6L,0x314BEDBEL,0xB730C7F6L,0xB730C7F6L,0x314BEDBEL,0x8A64FEF6L}},{{0x42813DB6L,0xCF7601C1L,0x42813DB6L,0xCD837623L,0x8AE0BF91L,0x8AE0BF91L,0xCF7601C1L,0xCD837623L,1L}}};
    unsigned char *l_308 = &g_170;
    unsigned char *l_309 = &g_122;
    char l_333 = 0xD4L;
    unsigned short *l_336 = &g_41;
    const char *l_341 = &g_125[2][6];
    const char ** const l_340[1] = {&l_341};
    const unsigned **l_439 = (void*)0;
    int *l_491 = (void*)0;
    short l_704 = 8L;
    unsigned short **l_765[9] = {&l_88,&l_336,&l_88,&l_336,&l_88,&l_336,&l_88,&l_336,&l_88};
    unsigned short **l_768 = &l_336;
    int *l_769 = &l_241[5][0][2];
    int *l_770 = &g_120;
    int i, j, k;
    if (((**g_147) = ((safe_lshift_func_uint8_t_u_s(g_69, func_84(l_88, g_2[1], p_79))) & ((g_240[0] | (func_37(func_37(l_241[5][0][2])) || p_78)) & 0L))))
    {
        unsigned char l_250 = 0x6AL;
        char *l_255 = &g_125[2][2];
        int l_256 = 0x79F2B396L;
        unsigned l_276 = 4294967295UL;
        const int *l_292 = &l_256;
        const int * const * const l_291[4] = {&l_292,&l_292,&l_292,&l_292};
        int l_328 = 5L;
        short **l_385 = &g_137;
        unsigned l_430 = 4294967288UL;
        const unsigned *l_438 = &g_103;
        const unsigned **l_437 = &l_438;
        int **l_484 = &g_148;
        int i;
        l_256 |= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(l_250, 11)) != (&p_78 != &g_125[0][4])), ((0xF0C7B7B6L != 0xB5CBD8C3L) || ((*l_255) = (safe_lshift_func_int8_t_s_u((65535UL & p_78), (p_80 <= (safe_sub_func_uint8_t_u_u(g_156, l_250))))))))), g_41));
        for (g_120 = 0; (g_120 <= 3); g_120 += 1)
        {
            int l_293 = 0xA5C83B2BL;
        }
        for (g_120 = 0; (g_120 != (-7)); --g_120)
        {
            unsigned short l_393 = 65535UL;
            int l_423 = 0L;
            int l_440 = 0xFB94BD43L;
        }
        for (g_307 = (-5); (g_307 == 9); g_307++)
        {
            short **l_461 = &g_137;
            const int *l_464 = (void*)0;
            int l_473 = 0xC9B4D471L;
            unsigned char *l_541 = (void*)0;
            int l_584[10][9] = {{0x162FA012L,0xC842F622L,0x091AB4C0L,0x2813B4BEL,0x0116A102L,0x091AB4C0L,(-1L),0xC9677214L,0xC842F622L},{0x85234B0AL,2L,0x091AB4C0L,0L,2L,0x6A79062EL,0x2813B4BEL,0x6A79062EL,2L},{0x85234B0AL,0xC842F622L,0xC842F622L,0x85234B0AL,0xC9677214L,2L,0x162FA012L,0x6A79062EL,0xC842F622L},{0x162FA012L,0xC9677214L,0x0116A102L,0x2A968A3CL,8L,2L,0x2813B4BEL,0xC9677214L,0xC9677214L},{(-1L),0x6A79062EL,0xC9677214L,0x2A968A3CL,0xC9677214L,0x6A79062EL,(-1L),0xC842F622L,0x6A79062EL},{0x2A968A3CL,0x6A79062EL,0x0116A102L,0x85234B0AL,2L,0x091AB4C0L,0L,2L,0x6A79062EL},{(-1L),0xC9677214L,0xC842F622L,0L,0x0116A102L,0x0116A102L,0L,0xC842F622L,0xC9677214L},{0x162FA012L,0xC842F622L,0x091AB4C0L,0x2813B4BEL,0x0116A102L,0x091AB4C0L,(-1L),0xC9677214L,0xC842F622L},{0x85234B0AL,2L,0x091AB4C0L,0L,2L,0x6A79062EL,0L,8L,0xC842F622L},{(-1L),0x6A79062EL,0x6A79062EL,(-1L),0x0116A102L,0xC842F622L,0x2813B4BEL,8L,0x6A79062EL}};
            unsigned l_622 = 4294967295UL;
            int i, j;
        }
    }
    else
    {
        unsigned l_641 = 0x90AE7DD2L;
        int l_643 = 7L;
        short *l_651 = &g_69;
        int l_654 = 0x94A2D674L;
        int *l_764 = &g_120;
        for (g_165 = 1; (g_165 >= 0); g_165 -= 1)
        {
            const char l_648[7][6][1] = {{{0x28L},{(-7L)},{(-1L)},{0xF2L},{(-1L)},{1L}},{{0x6BL},{(-4L)},{(-4L)},{0x6BL},{1L},{(-1L)}},{{0xF2L},{(-1L)},{(-7L)},{0x28L},{1L},{1L}},{{1L},{0x28L},{(-7L)},{(-1L)},{0xF2L},{(-1L)}},{{1L},{0x6BL},{(-4L)},{(-4L)},{0x6BL},{1L}},{{(-1L)},{0xF2L},{(-1L)},{(-7L)},{0x28L},{1L}},{{1L},{1L},{0x28L},{(-7L)},{(-1L)},{0xF2L}}};
            unsigned short * const l_663 = (void*)0;
            int l_679 = 0x01A1F931L;
            int ***l_714 = &g_147;
            char **l_741 = &g_348[2][3];
            int l_742[5][10] = {{0xB87A533DL,9L,9L,0xB87A533DL,0x30B6527DL,0x00D2F831L,0xFF85CF82L,0xBC9AE906L,0x2B3FB92FL,(-10L)},{0x9965CACEL,0x30B6527DL,0L,0x41D0EBFDL,0x2B3FB92FL,0xFF85CF82L,9L,0xFF85CF82L,0x2B3FB92FL,0x41D0EBFDL},{(-10L),0x9965CACEL,(-10L),0xB87A533DL,0x5E54B47DL,0x9E1D85FCL,0x2B3FB92FL,0x0E80B222L,0x41D0EBFDL,0x0DF700F9L},{0x0DF700F9L,0x9E1D85FCL,0x30B6527DL,9L,0x0E80B222L,0x097DC034L,0x097DC034L,0x0E80B222L,9L,0x30B6527DL},{0L,0L,0xAAB4F5F2L,0x5E54B47DL,0x097DC034L,0xB87A533DL,0x00D2F831L,0x0DF700F9L,9L,0L}};
            unsigned l_752 = 0x0E004DCFL;
            int i, j, k;
            for (g_239 = 0; (g_239 <= 2); g_239 += 1)
            {
                const char l_640 = (-1L);
                int l_644 = (-1L);
                int i;
                for (p_78 = 2; (p_78 >= 0); p_78 -= 1)
                {
                    int *l_626 = &g_2[3];
                    char *l_642 = &l_333;
                    int i;
                    l_491 = l_626;

                    ;
                    if (((l_241[5][0][2] = (safe_unary_minus_func_int16_t_s((safe_div_func_int32_t_s_s(g_240[(p_78 + 1)], p_80))))) <= (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_644 = (l_643 &= ((((safe_mod_func_uint8_t_u_u(0x80L, 0x72L)) | (((*l_642) = (safe_div_func_uint32_t_u_u(l_640, l_641))) == ((*l_491) < 0x8EL))) < ((((((*l_308) = g_120) & g_307) >= (*p_79)) & 251UL) && l_641)) || (*l_626)))), 3)), p_80)), (*g_587)))))
                    {
                        const unsigned char l_645 = 1UL;
                        l_644 = l_645;
                    }
                    else
                    {
                        (*g_147) = &l_644;

                        ;
                        l_654 &= ((safe_rshift_func_uint16_t_u_u(((*l_626) & ((0x299480C2L < ((*g_148) = l_640)) < p_78)), ((0xD3L != l_648[2][2][0]) >= (safe_div_func_int32_t_s_s((((((*g_136) = (*g_136)) == l_651) <= func_37((safe_mod_func_int8_t_s_s(p_80, (*l_626))))) & l_643), (-9L)))))) & (*g_587));
                    }
                }


                if (g_240[(g_165 + 1)])
                    continue;

            }
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            {
                int *l_678[7][6] = {{&g_70,&g_70,(void*)0,(void*)0,&g_120,(void*)0},{(void*)0,&g_120,(void*)0,&g_120,(void*)0,(void*)0},{&g_120,(void*)0,(void*)0,&g_70,&g_70,(void*)0},{&g_70,&g_70,(void*)0,(void*)0,&g_120,(void*)0},{(void*)0,&g_120,(void*)0,&g_120,(void*)0,(void*)0},{&g_120,(void*)0,(void*)0,&g_70,&g_70,(void*)0},{&g_70,&g_70,(void*)0,(void*)0,&g_120,(void*)0}};
                unsigned short * const l_759 = &g_307;
                int i, j;
                g_120 = (l_679 = l_648[4][2][0]);
                for (g_122 = 0; (g_122 <= 1); g_122 += 1)
                {
                    char l_691 = 0x90L;
                    if (p_80)
                        break;
                    l_241[1][0][7] = (*g_566);
                    for (l_333 = 1; (l_333 >= 0); l_333 -= 1)
                    {
                        if (p_78)
                            break;
                        return g_471;


                    }
                    if ((l_654 = (*g_566)))
                    {
                        int l_680 = 0x7627B9C3L;
                        int *l_681 = &l_654;
                        l_680 = (*g_566);
                        if ((*g_566))
                            break;
                        l_678[5][4] = l_681;
                    }
                    else
                    {
                        unsigned l_686[1];
                        int **l_692 = &l_678[4][3];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_686[i] = 4294967295UL;
                        g_120 ^= ((safe_div_func_int16_t_s_s(0x5A79L, (safe_sub_func_int8_t_s_s((-1L), l_686[0])))) && (p_78 >= (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((*g_137) ^= p_80), 10)), (l_679 = ((l_691 | func_84(p_79, l_691, p_79)) & l_643))))));
                        (*l_692) = ((*g_147) = (void*)0);

                        ;
                    }
                }
                for (g_170 = 0; (g_170 <= 3); g_170 += 1)
                {
                    int **l_693[9][3][4] = {{{&l_678[0][0],&l_678[0][0],&l_678[1][3],&l_491},{&l_678[1][3],&l_678[1][3],&l_491,&l_678[0][1]},{&l_678[1][3],&l_491,&l_491,&l_491}},{{&l_491,&l_491,&l_678[1][3],&l_678[0][1]},{&l_491,&l_678[1][3],&l_678[1][3],&l_491},{&l_678[1][3],&l_678[0][0],&l_678[0][0],&l_678[1][3]}},{{&l_678[1][3],&l_678[0][1],&l_678[1][3],&l_678[1][1]},{&l_491,&l_678[1][3],&l_678[1][3],&l_491},{&l_491,&l_678[5][1],&l_491,&l_491}},{{&l_678[1][3],&l_678[1][3],&l_491,&l_678[1][1]},{&l_678[1][3],&l_678[0][1],&l_678[1][3],&l_678[1][3]},{&l_678[0][0],&l_678[5][1],&l_491,&l_678[0][0]}},{{&l_678[1][3],&l_491,&l_678[1][3],&l_491},{&l_678[0][1],&l_678[1][3],&l_678[0][0],&l_678[1][3]},{&l_678[0][0],&l_678[1][3],&l_678[0][1],&l_491}},{{&l_678[1][3],&l_491,&l_678[1][3],&l_678[0][0]},{&l_491,&l_678[5][1],&l_678[5][1],&l_491},{&l_491,&l_491,&l_678[1][3],&l_678[1][3]}},{{&l_678[1][3],&l_491,&l_678[0][1],&l_678[1][1]},{&l_678[0][0],&l_678[1][3],&l_678[0][0],&l_678[1][1]},{&l_678[0][1],&l_491,&l_678[1][3],&l_678[1][3]}},{{&l_678[1][3],&l_491,&l_491,&l_491},{&l_678[5][1],&l_678[5][1],&l_491,&l_678[0][0]},{&l_678[1][3],&l_491,&l_678[1][3],&l_491}},{{&l_678[0][1],&l_678[1][3],&l_678[0][0],&l_678[1][3]},{&l_678[0][0],&l_678[1][3],&l_678[0][1],&l_491},{&l_678[1][3],&l_491,&l_678[1][3],&l_678[0][0]}}};
                    int i, j, k;
                    g_566 = ((*g_147) = &g_2[1]);

                    ;
                    ;
                    (*g_147) = (*g_147);
                    if (g_240[g_165])
                        continue;
                    for (g_103 = 0; (g_103 <= 1); g_103 += 1)
                    {
                        int ***l_694 = (void*)0;
                        int ***l_695 = &l_693[8][0][3];
                        int i;
                        l_679 &= (((*l_695) = &l_678[1][3]) != (void*)0);
                        (*g_147) = l_678[1][3];
                        l_643 = func_37((p_80 == (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((((void*)0 == &g_590[g_103]) < (0xA1F9L ^ (l_654 & ((1L < ((safe_add_func_int16_t_s_s(func_37(func_37(((*l_309) = (p_78 != ((*g_587) &= p_78))))), l_704)) < g_705)) || 3L)))) ^ p_78), 0x1DL)), p_78)), l_704))));
                    }

                    ;
                }
                for (l_643 = 0; (l_643 <= 1); l_643 += 1)
                {
                    unsigned short l_721 = 0xFED6L;
                    const char **l_737 = &l_341;
                    char **l_740 = &g_348[2][3];
                    int l_760[6][10] = {{0x762D21BDL,0x762D21BDL,0x9E5D4600L,0xA45F6A13L,0x762D21BDL,0x30CA36F0L,0xA45F6A13L,0xA45F6A13L,0x30CA36F0L,0x762D21BDL},{0x762D21BDL,0xD38C003CL,0xD38C003CL,0x762D21BDL,0L,0xD38C003CL,0xA45F6A13L,0L,0L,0xA45F6A13L},{0L,0x762D21BDL,0xD38C003CL,0xD38C003CL,0x762D21BDL,0L,0xD38C003CL,0xA45F6A13L,0L,0L},{0x762D21BDL,0xA45F6A13L,0xA45F6A13L,0L,0L,0xA45F6A13L,0xD38C003CL,0L,0x762D21BDL,0xD38C003CL},{0L,0x30CA36F0L,0x9E5D4600L,0xD38C003CL,0x30CA36F0L,0x30CA36F0L,0xD38C003CL,0x9E5D4600L,0x30CA36F0L,0L},{0x30CA36F0L,0xD38C003CL,0x9E5D4600L,0x30CA36F0L,0L,0x9E5D4600L,0x9E5D4600L,0L,0x30CA36F0L,0x9E5D4600L}};
                    int i, j;
                    (*g_147) = &l_643;

                    ;
                    for (g_111 = 0; (g_111 <= 1); g_111 += 1)
                    {
                        int **l_706 = &l_491;
                        int **l_707 = &l_678[3][0];
                        int ****l_715 = &l_714;
                        const int ****l_718[10][6] = {{&g_716[9],&g_716[1],&g_716[1],&g_716[9],(void*)0,&g_716[0]},{&g_716[9],&g_716[9],&g_716[9],&g_716[9],&g_716[2],&g_716[9]},{&g_716[9],&g_716[7],(void*)0,&g_716[1],&g_716[2],(void*)0},{&g_716[9],&g_716[9],&g_716[9],(void*)0,(void*)0,&g_716[9]},{&g_716[7],&g_716[1],&g_716[9],&g_716[1],&g_716[7],&g_716[9]},{&g_716[0],(void*)0,&g_716[2],&g_716[9],(void*)0,&g_716[9]},{&g_716[9],&g_716[9],&g_716[9],(void*)0,&g_716[9],&g_716[9]},{(void*)0,&g_716[7],&g_716[2],&g_716[9],&g_716[9],&g_716[9]},{&g_716[9],&g_716[0],&g_716[9],&g_716[9],&g_716[0],&g_716[9]},{&g_716[9],&g_716[9],&g_716[9],&g_716[2],&g_716[7],(void*)0}};
                        int i, j;
                        l_241[5][0][2] = p_78;
                        if (p_78)
                            break;
                        (*l_707) = ((*l_706) = ((*g_147) = &l_241[5][0][2]));

                        ;
                        ;
                        (*l_491) ^= (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(0x77E0L, ((*g_137) == ((((*l_715) = l_714) != (g_716[9] = g_716[9])) == (safe_mod_func_int8_t_s_s(l_721, p_80)))))), (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(g_239, p_78)) ^ (l_721 ^ l_679)), 4))));
                    }

                    ;
                    if ((**g_717))
                    {
                        int l_734 = (-1L);
                        const char ***l_738 = &l_737;
                        char ***l_739 = &g_347;
                        int l_743 = 9L;
                        l_743 = ((((void*)0 == &g_136) >= ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_70, (l_721 == (safe_lshift_func_uint16_t_u_s((func_37((l_654 = g_122)) && (l_734 > (safe_add_func_int32_t_s_s((((*l_738) = l_737) != (l_741 = (l_740 = ((*l_739) = &g_348[1][4])))), 9L)))), (*g_137)))))) ^ 0x20C86B98L), l_742[2][5])) <= 0UL)) == (*g_566));
                        if (p_78)
                            break;
                        g_120 = (+(safe_rshift_func_int16_t_s_u(0x34EAL, 2)));
                        l_679 &= func_84(&g_307, (((safe_rshift_func_int16_t_s_s(l_641, 15)) <= p_80) < (safe_mod_func_int8_t_s_s((func_37(l_721) || (safe_sub_func_uint32_t_u_u(l_752, (**g_147)))), (safe_mod_func_uint32_t_u_u(((*g_587) = p_80), (safe_lshift_func_uint16_t_u_u(((!(safe_sub_func_uint8_t_u_u(((-8L) >= p_80), g_567))) ^ 1UL), 8))))))), l_759);
                    }
                    else
                    {
                        l_760[5][1] |= p_80;
                    }
                    l_760[5][1] ^= ((((*l_759) &= 0x3CECL) | (*p_79)) > ((*l_309) ^= p_80));
                    for (g_120 = 0; (g_120 <= 1); g_120 += 1)
                    {
                        l_241[5][0][2] = p_80;
                        if (p_80)
                            continue;
                        g_761 = (g_70 = (**g_147));
                    }
                }
            }
        }


        ;
        ;
        l_654 = p_80;
        (*l_764) &= ((safe_sub_func_int16_t_s_s(((func_84(&g_307, p_80, (*g_589)) && ((g_307 <= p_78) ^ (255UL <= p_78))) & 0xA721863FL), (*p_79))) > l_643);
    }


    ;
    ;
    (*l_769) ^= (p_78 ^ ((*l_309) |= func_37(func_84((g_590[2] = p_79), func_37(((*l_308) = (safe_rshift_func_uint8_t_u_u(0x3EL, 1)))), ((*l_768) = p_79)))));

    ;

    (*l_769) = func_37(g_122);
    (*l_770) |= (0xF9DDL != ((**g_136) && (*l_769)));
    return g_240[0];


}







static const char func_84(unsigned short * p_85, unsigned char p_86, unsigned short * const p_87)
{
    int *l_92[3][5] = {{&g_70,&g_2[2],&g_2[2],&g_70,&g_70},{&g_70,&g_2[2],&g_70,&g_2[2],&g_2[2]},{&g_70,&g_70,&g_2[2],&g_70,&g_70}};
    int * const l_106[4] = {&g_2[0],&g_2[0],&g_2[0],&g_2[0]};
    unsigned short l_109 = 0x0996L;
    unsigned short l_153 = 0x91BDL;
    char *l_202 = &g_125[3][7];
    char **l_201 = &l_202;
    int i, j;
    for (g_70 = (-6); (g_70 <= 22); g_70 = safe_add_func_int32_t_s_s(g_70, 5))
    {
        unsigned l_91[5];
        int l_110 = 0L;
        char *l_132 = &g_125[0][4];
        int *l_182 = &g_70;
        short ***l_234 = &g_136;
        int i;
        for (i = 0; i < 5; i++)
            l_91[i] = 4294967292UL;
    }
    return g_125[0][4];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_125[i][j], "g_125[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_240[i], "g_240[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_567, "g_567", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_970[i][j], "g_970[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1076, "g_1076", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1253[i][j][k], "g_1253[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1489[i], "g_1489[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
