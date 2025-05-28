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



static int g_4[9][1] = {{1L},{(-6L)},{1L},{(-6L)},{1L},{(-6L)},{1L},{(-6L)},{1L}};
static unsigned char g_53 = 0xBFL;
static int g_66 = 0xB039B7C3L;
static int *g_65 = &g_66;
static char g_86 = 0x2FL;
static char g_88 = (-1L);
static unsigned g_101 = 0xA3554F43L;
static const int *g_104[5][2] = {{&g_4[3][0],&g_4[2][0]},{&g_4[3][0],&g_4[2][0]},{&g_4[3][0],&g_4[2][0]},{&g_4[3][0],&g_4[2][0]},{&g_4[3][0],&g_4[2][0]}};
static const int **g_103 = &g_104[0][0];
static unsigned char g_106[9] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL,255UL};
static short g_108 = 1L;
static int g_111 = 9L;
static unsigned short g_117 = 5UL;
static short g_133 = 0x4C35L;
static short g_135[2][9] = {{0L,(-8L),0L,0xBBF2L,0xBBF2L,0L,(-8L),0L,0xBBF2L},{0L,0xBBF2L,0xBBF2L,0L,(-8L),0L,0xBBF2L,0xBBF2L,0L}};
static unsigned g_147 = 4294967294UL;
static volatile unsigned short g_174 = 0x4BE3L;
static const unsigned char *g_230 = &g_106[7];
static const unsigned char **g_229 = &g_230;
static volatile char g_264 = 0x17L;
static volatile char *g_263 = &g_264;
static volatile char **g_262 = &g_263;
static volatile char *** const g_261 = &g_262;
static unsigned g_271 = 0x2699899CL;
static int g_279 = 0xBBC34D34L;
static char *g_302 = &g_86;
static char **g_301 = &g_302;
static char ***g_300 = &g_301;
static unsigned g_437 = 0UL;
static int g_439[6] = {5L,5L,0L,5L,5L,0L};
static int *g_438 = &g_439[3];
static int **g_514 = &g_65;
static int ***g_518 = (void*)0;
static volatile unsigned g_547 = 1UL;
static volatile unsigned *g_546[1] = {&g_547};
static volatile unsigned **g_545 = &g_546[0];
static volatile unsigned short *g_567 = &g_174;
static volatile unsigned short **g_566 = &g_567;
static unsigned short g_573[10][9][2] = {{{0xCC14L,65530UL},{0xA7EEL,0x2AF7L},{1UL,0x78F8L},{0UL,65535UL},{65535UL,0x3D34L},{8UL,0UL},{0xA7EEL,0x76ECL},{3UL,0x6B88L},{0x8750L,65535UL}},{{0x4E24L,0x6769L},{6UL,65535UL},{0xA7EEL,65535UL},{6UL,0x6769L},{0x4E24L,65535UL},{0x8750L,0x6B88L},{3UL,0x76ECL},{0xA7EEL,0UL},{8UL,0x3D34L}},{{65535UL,65535UL},{0UL,0x78F8L},{1UL,0x2AF7L},{0xA7EEL,65530UL},{0xCC14L,0xA7EEL},{0xE605L,65535UL},{0xE605L,0xA7EEL},{0xCC14L,65530UL},{0xA7EEL,0x2AF7L}},{{1UL,0x78F8L},{0UL,65535UL},{65535UL,0x3D34L},{8UL,0UL},{0xA7EEL,0x76ECL},{3UL,0x6B88L},{0x8750L,65535UL},{0x4E24L,0x6769L},{6UL,65535UL}},{{0xA7EEL,65535UL},{6UL,0x6769L},{0x4E24L,65535UL},{0x8750L,0x6B88L},{3UL,0x76ECL},{0xA7EEL,0UL},{8UL,0x3D34L},{65535UL,65535UL},{1UL,0UL}},{{0UL,0xA7EEL},{65527UL,0x6769L},{0x76ECL,65527UL},{8UL,3UL},{8UL,65527UL},{0x76ECL,0x6769L},{65527UL,0xA7EEL},{0UL,0UL},{1UL,3UL}},{{3UL,65528UL},{65530UL,0x78F8L},{65527UL,0x6B88L},{0x2AF7L,0xA7C5L},{6UL,3UL},{0xCC14L,7UL},{65535UL,0x3D34L},{65527UL,0x3D34L},{65535UL,7UL}},{{0xCC14L,3UL},{6UL,0xA7C5L},{0x2AF7L,0x6B88L},{65527UL,0x78F8L},{65530UL,65528UL},{3UL,3UL},{1UL,0UL},{0UL,0xA7EEL},{65527UL,0x6769L}},{{0x76ECL,65527UL},{8UL,3UL},{8UL,65527UL},{0x76ECL,0x6769L},{65527UL,0xA7EEL},{0UL,0UL},{1UL,3UL},{3UL,65528UL},{65530UL,0x78F8L}},{{65527UL,0x6B88L},{0x2AF7L,0xA7C5L},{6UL,3UL},{0xCC14L,7UL},{65535UL,0x3D34L},{65527UL,0x3D34L},{65535UL,7UL},{0xCC14L,3UL},{6UL,0xA7C5L}}};
static unsigned char g_574[5][5] = {{6UL,0x77L,6UL,0x77L,6UL},{0UL,0UL,0UL,0UL,0UL},{6UL,0x77L,6UL,0x77L,6UL},{0UL,0UL,0UL,0UL,0UL},{6UL,0x77L,6UL,0x77L,6UL}};
static char *g_593 = (void*)0;
static char **g_592 = &g_593;
static int *g_610 = &g_439[2];
static unsigned g_664 = 0UL;
static unsigned short g_680 = 0xD22BL;
static unsigned short g_682[10][8] = {{1UL,0x1DB1L,65531UL,65531UL,0x1DB1L,1UL,0xBCFBL,0x260AL},{0UL,0x1DB1L,0xEC9DL,65531UL,0xE88BL,1UL,0x260AL,0x260AL},{1UL,0x1DB1L,65531UL,65531UL,0x1DB1L,1UL,0xBCFBL,0x260AL},{0UL,0x1DB1L,0xEC9DL,65531UL,0xE88BL,1UL,0x260AL,0x260AL},{1UL,0x1DB1L,65531UL,65531UL,0x1DB1L,1UL,0xBCFBL,0x260AL},{0UL,0x1DB1L,0xEC9DL,65531UL,0xE88BL,1UL,0x260AL,0x260AL},{1UL,0x1DB1L,65531UL,65531UL,0x1DB1L,1UL,0xBCFBL,0x260AL},{0UL,0x1DB1L,0xEC9DL,65531UL,0xE88BL,1UL,0x260AL,0x260AL},{1UL,0x1DB1L,65531UL,65531UL,0x1DB1L,1UL,0xBCFBL,0x260AL},{0UL,0x1DB1L,0xEC9DL,65531UL,0xE88BL,1UL,0x260AL,0x260AL}};
static unsigned short g_701 = 65535UL;
static short *g_710 = &g_135[0][3];
static short * const *g_709 = &g_710;
static short * const **g_708 = &g_709;
static int ****g_767 = &g_518;



static const short func_1(void);
static int func_5(int * p_6, unsigned p_7, unsigned p_8);
static int * func_9(int * p_10, unsigned p_11, unsigned p_12, int p_13);
static int * func_14(unsigned p_15, unsigned p_16, int * p_17, const int * p_18, unsigned p_19);
static unsigned char func_20(unsigned char p_21);
static int * func_25(char p_26, unsigned short p_27);
static int * func_32(int * p_33);
static int func_38(unsigned short p_39, int *** p_40, int ** p_41);
static unsigned short func_44(unsigned p_45, int p_46, int ** p_47, const unsigned p_48, unsigned p_49);
static int ** func_61(unsigned p_62);
static const short func_1(void)
{
    unsigned short l_2 = 0x464BL;
    int *l_3 = &g_4[7][0];
    unsigned short l_22 = 7UL;
    int **l_37 = &l_3;
    int l_353 = 0x2C6B14C6L;
    int l_431 = 1L;
    unsigned char l_435 = 0x9AL;
    unsigned *l_436 = &g_101;
    char l_732[4][2] = {{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)},{(-5L),(-5L)}};
    char l_768 = (-1L);
    int i, j;
    (*l_3) |= l_2;
    if (((*g_438) = func_5(((*g_514) = func_9(func_14(((*l_436) = (func_20(((l_22 >= (safe_lshift_func_int16_t_s_u(0x0012L, (&g_4[7][0] != ((*l_37) = func_25(((***g_300) = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((&g_4[1][0] == ((*l_37) = func_32(&g_4[3][0]))), 4)), ((g_4[6][0] >= (0x4801465EL ^ func_38((((safe_unary_minus_func_int32_t_s(l_2)) ^ 1L) | g_4[7][0]), &l_37, l_37))) ^ l_353)))), g_4[7][0])))))) | l_431)) < l_435)), g_437, g_438, &g_439[3], g_439[3]), g_664, l_435, g_664)), g_682[4][3], l_353)))
    {
        int *l_733 = &g_439[5];
        char ***l_745 = &g_592;
        int ****l_766 = &g_518;
        (*g_103) = (*g_514);
        for (g_86 = 0; (g_86 <= 5); g_86 += 1)
        {
            unsigned short *l_731 = &g_682[6][3];
            int l_756 = (-1L);
            int i;
            g_439[g_86] |= 0xD49DC639L;
            (*g_438) |= ((*l_3) > ((*l_731) = (g_701 = (*g_567))));
        }
        (*g_514) = ((*l_37) = func_32((*l_37)));

        ;
        ;
    }
    else
    {
        return (*g_710);
    }

    ;

    ;
    ;
    (*g_610) = (*l_3);
    return (***g_708);
}







static int func_5(int * p_6, unsigned p_7, unsigned p_8)
{
    int *l_730[2][9][8] = {{{&g_279,&g_111,&g_4[7][0],&g_279,&g_439[3],&g_4[6][0],&g_66,&g_439[3]},{&g_279,&g_439[3],&g_4[4][0],&g_4[6][0],(void*)0,(void*)0,&g_4[6][0],&g_4[4][0]},{&g_4[6][0],&g_4[6][0],&g_4[8][0],(void*)0,&g_279,&g_279,&g_111,(void*)0},{(void*)0,&g_111,&g_66,&g_4[7][0],&g_439[3],&g_111,&g_4[8][0],(void*)0},{&g_111,&g_439[3],&g_439[3],(void*)0,&g_111,&g_279,&g_4[7][0],&g_4[4][0]},{(void*)0,&g_4[7][0],&g_439[4],&g_4[6][0],&g_4[7][0],&g_4[8][0],&g_111,&g_439[3]},{&g_279,(void*)0,&g_66,&g_279,&g_4[7][0],&g_111,&g_279,&g_4[6][0]},{&g_4[8][0],&g_4[7][0],&g_4[7][0],&g_439[3],&g_4[4][0],&g_279,&g_66,&g_66},{&g_111,&g_66,&g_279,&g_4[1][0],&g_4[5][0],&g_439[3],&g_111,&g_439[3]}},{{(void*)0,&g_439[3],&g_66,&g_4[7][0],&g_279,&g_4[7][0],&g_439[3],(void*)0},{&g_111,&g_279,(void*)0,&g_279,&g_279,&g_279,(void*)0,&g_279},{&g_439[3],&g_111,&g_4[7][0],&g_111,&g_4[8][0],&g_279,&g_4[8][0],&g_4[4][0]},{&g_439[3],&g_279,(void*)0,(void*)0,&g_439[3],&g_439[4],&g_4[8][0],&g_66},{&g_66,(void*)0,&g_4[7][0],&g_279,&g_279,&g_439[3],(void*)0,(void*)0},{&g_279,&g_439[3],(void*)0,(void*)0,&g_111,(void*)0,&g_66,&g_279},{&g_4[4][0],&g_4[7][0],&g_66,&g_4[5][0],&g_279,&g_439[3],(void*)0,&g_66},{&g_4[6][0],&g_66,(void*)0,&g_279,(void*)0,&g_66,&g_111,&g_4[8][0]},{&g_111,&g_4[7][0],&g_4[7][0],&g_111,&g_439[3],&g_4[6][0],&g_439[3],&g_279}}};
    int i, j, k;
    (*g_438) = (*p_6);
    g_279 &= (*p_6);
    return (*g_610);
}







static int * func_9(int * p_10, unsigned p_11, unsigned p_12, int p_13)
{
    char ****l_673[10][1][6] = {{{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300}},{{(void*)0,&g_300,&g_300,&g_300,(void*)0,&g_300}},{{(void*)0,&g_300,&g_300,(void*)0,&g_300,&g_300}},{{(void*)0,&g_300,&g_300,&g_300,&g_300,&g_300}},{{(void*)0,(void*)0,&g_300,&g_300,&g_300,&g_300}},{{&g_300,&g_300,&g_300,(void*)0,&g_300,&g_300}},{{(void*)0,&g_300,&g_300,&g_300,(void*)0,&g_300}},{{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300}},{{&g_300,&g_300,&g_300,&g_300,&g_300,&g_300}},{{(void*)0,(void*)0,&g_300,(void*)0,&g_300,&g_300}}};
    int l_699 = 0x40BC58EDL;
    int *l_729 = &l_699;
    int i, j, k;
    for (g_88 = 0; (g_88 < 9); g_88 = safe_add_func_int32_t_s_s(g_88, 6))
    {
        char ****l_675 = &g_300;
        char *****l_674 = &l_675;
        unsigned short *l_678 = &g_117;
        unsigned short *l_679 = &g_680;
        unsigned short *l_681 = &g_682[7][2];
        int l_694 = 0xE38F64A9L;
        unsigned l_697 = 0x07813160L;
        short **l_713 = &g_710;
        short ***l_712 = &l_713;
        int **l_728[3];
        int i;
        for (i = 0; i < 3; i++)
            l_728[i] = (void*)0;
    }
    (*g_514) = p_10;
    (*g_103) = p_10;
    return (*g_514);


}







static int * func_14(unsigned p_15, unsigned p_16, int * p_17, const int * p_18, unsigned p_19)
{
    int *l_440[5];
    int l_475 = 1L;
    char l_500 = 0x05L;
    unsigned char *l_535 = &g_106[8];
    int l_565 = 0x0DFF940CL;
    unsigned short * const l_569 = &g_117;
    unsigned short * const *l_568 = &l_569;
    int ****l_571[7][5][4] = {{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}},{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}},{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}},{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}},{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}},{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}},{{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518},{&g_518,&g_518,&g_518,&g_518}}};
    char **l_589 = &g_302;
    int l_646 = (-1L);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_440[i] = &g_439[3];
    (*g_103) = (void*)0;
    if ((l_440[4] != l_440[4]))
    {
        unsigned l_443 = 8UL;
        int ** const l_445 = &l_440[4];
        int ** const *l_444 = &l_445;
        short l_501[8][5][1] = {{{0xEFEDL},{(-8L)},{(-5L)},{(-5L)},{(-8L)}},{{0xEFEDL},{(-8L)},{(-5L)},{(-5L)},{(-8L)}},{{0xEFEDL},{(-8L)},{(-5L)},{(-5L)},{(-8L)}},{{0xEFEDL},{(-8L)},{(-5L)},{(-5L)},{(-8L)}},{{0xEFEDL},{(-8L)},{(-5L)},{(-5L)},{(-5L)}},{{0xB1E5L},{(-5L)},{0L},{0L},{(-5L)}},{{0xB1E5L},{(-5L)},{0L},{0L},{(-5L)}},{{0xB1E5L},{(-5L)},{0L},{0L},{(-5L)}}};
        int i, j, k;
        (*p_17) ^= ((safe_mod_func_int16_t_s_s(l_443, (g_437 & g_117))) < 8UL);
        if (((***l_444) ^= (l_444 == &l_445)))
        {
            short l_455 = 0xCDA7L;
            int *l_478 = &g_111;
            (*g_103) = p_17;


            for (g_88 = (-3); (g_88 <= 11); g_88 = safe_add_func_uint8_t_u_u(g_88, 2))
            {
                char l_473[2][9][9] = {{{2L,1L,0x6BL,0x6BL,1L,2L,0x29L,0x93L,0x20L},{0x42L,0xD6L,(-10L),(-1L),0x32L,(-6L),0x10L,0xAEL,0xDEL},{0x14L,(-5L),0xABL,0x84L,0x45L,(-2L),0x29L,(-5L),(-1L)},{(-1L),0xAEL,0x90L,0x9CL,0x9CL,0x90L,0xAEL,(-1L),2L},{7L,0x20L,2L,0L,(-1L),0x84L,(-2L),0L,0x93L},{(-6L),0xDEL,0x9CL,0x55L,0x24L,0xAEL,(-10L),0xF6L,2L},{(-1L),(-1L),1L,7L,0x91L,0x91L,7L,1L,(-1L)},{0x32L,2L,0xF6L,(-10L),0xAEL,0x24L,0x55L,0x9CL,0xDEL},{0x56L,0x93L,0L,(-2L),0x84L,(-1L),0L,0x93L,0xABL}},{{0x24L,0x00L,0x55L,2L,0x42L,0x23L,0x23L,0x42L,2L},{0xAAL,(-1L),0xAAL,(-1L),1L,(-5L),(-1L),0x6BL,0L},{0x90L,0x9CL,2L,(-6L),(-2L),0xD6L,0x71L,(-6L),0xAEL},{7L,0xABL,0xF6L,(-1L),0x93L,(-1L),0x14L,0x14L,(-1L)},{0xF6L,2L,0x32L,2L,0xF6L,(-10L),0xAEL,0x24L,0x55L},{0x31L,0L,(-1L),1L,0x14L,(-5L),0xABL,0x84L,0x45L},{2L,0xAEL,0xF6L,(-6L),0x00L,(-10L),0xA4L,0x71L,0x71L},{(-1L),(-1L),0L,0x29L,0L,(-1L),(-1L),(-5L),(-1L)},{0x71L,0x55L,(-6L),1L,0xD6L,0xD6L,0x10L,0x00L,0xF6L}}};
                int l_477 = 0L;
                int i, j, k;
            }
            (*g_438) = 0x56584C18L;
        }
        else
        {
            unsigned short *l_506 = &g_117;
            unsigned short **l_505[1];
            unsigned short ***l_507 = &l_505[0];
            unsigned *l_508 = &g_437;
            int i;
            for (i = 0; i < 1; i++)
                l_505[i] = &l_506;
            (*l_507) = l_505[0];
            (*g_65) = (((*g_230) > p_19) >= (((*l_508) = g_53) && (*p_18)));
        }


    }
    else
    {
        const unsigned l_515 = 4UL;
        int l_551 = 1L;
        (*g_103) = (void*)0;
        for (p_16 = 1; (p_16 <= 4); p_16 += 1)
        {
            int **l_519 = (void*)0;
            const int l_527 = 0x130D7887L;
            unsigned short l_531 = 0UL;
            char **l_533 = &g_302;
            unsigned char *l_539 = &g_53;
            for (l_500 = 1; (l_500 <= 8); l_500 += 1)
            {
                unsigned *l_510 = &g_101;
                unsigned l_511 = 0x0E98E413L;
                int **l_513 = &g_65;
                int ***l_512[5][3] = {{&l_513,&l_513,&l_513},{&l_513,(void*)0,&l_513},{&l_513,(void*)0,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513}};
                short l_522 = 0x309CL;
                unsigned char *l_542 = &g_106[1];
                int i, j;
                if (((*p_17) = (*p_17)))
                {
                    short l_525 = 1L;
                    unsigned short *l_526 = &g_117;
                    short *l_528 = (void*)0;
                    unsigned l_532 = 0x867C85D7L;
                    unsigned char * const l_536 = (void*)0;
                    unsigned char **l_540 = (void*)0;
                    unsigned char **l_541[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_541[i] = &l_539;
                    (*p_17) = ((*g_302) ^ func_20((safe_sub_func_int32_t_s_s(l_522, (safe_mul_func_uint16_t_u_u((p_15 > ((p_19 & (g_135[1][6] = (((*l_526) = l_525) != l_527))) | (safe_sub_func_int32_t_s_s((*g_438), l_531)))), l_532))))));
                    if (((*p_17) = (*p_18)))
                    {
                        (*g_65) = (*p_18);
                    }
                    else
                    {
                        unsigned l_534 = 0xDE377876L;
                        (*g_300) = l_533;
                        l_534 &= (*p_18);
                    }
                    (**g_514) = (((((l_535 != l_536) || (safe_lshift_func_int8_t_s_s(((*g_229) == (l_542 = l_539)), (l_515 | ((safe_lshift_func_int16_t_s_u(g_108, ((*l_526) = ((void*)0 != g_545)))) >= ((safe_rshift_func_uint16_t_u_u(g_271, 14)) ^ l_532)))))) != g_108) & l_532) && (**g_514));

                    ;
                    (**g_514) = (*p_18);
                }
                else
                {
                    int *l_550[7] = {&g_111,&g_111,(void*)0,&g_111,&g_111,(void*)0,&g_111};
                    char *l_561 = &g_88;
                    int i;
                    for (g_437 = 0; (g_437 <= 4); g_437 += 1)
                    {
                        int i;
                        l_440[p_16] = l_550[1];
                        (*g_514) = (*g_514);
                        (*p_17) = ((**l_513) = g_106[(p_16 + 2)]);
                    }


                    (*g_65) &= ((l_551 = 0UL) || (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((g_86 > (safe_mul_func_uint8_t_u_u((g_106[(p_16 + 3)] = 255UL), ((safe_add_func_uint32_t_u_u(0xDE192AD3L, (*p_18))) ^ p_15)))))), 3)), ((*l_561) = l_551))));
                }


                ;
                return p_17;


            }
        }
        (*p_17) ^= ((0x95L || (**g_229)) >= func_20((**g_229)));
    }


    if ((*p_18))
    {
        short l_564[2];
        int l_577 = 0x031CB151L;
        int i;
        for (i = 0; i < 2; i++)
            l_564[i] = 1L;
        if ((l_565 &= (g_279 ^= ((*g_65) = ((*g_438) ^= (safe_mul_func_int8_t_s_s(1L, l_564[0])))))))
        {
            (*p_17) ^= (g_566 == l_568);
        }
        else
        {
            unsigned short *l_572 = &g_573[0][0][0];
            short *l_575 = &g_135[1][6];
            int l_576 = 0x344B1F34L;
            (*p_17) ^= ((g_574[4][2] &= ((*l_572) = ((**l_568) = (safe_unary_minus_func_int16_t_s(((void*)0 != l_571[5][4][1])))))) & ((*l_575) = 0x7431L));
            l_577 ^= l_576;
            for (g_271 = 0; (g_271 <= 5); g_271 += 1)
            {
                return p_17;


            }
        }
        for (l_565 = 9; (l_565 >= (-7)); l_565--)
        {
            int l_582[4][10] = {{0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L},{0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L},{0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L},{0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L,0x99CE6E69L}};
            int l_583 = 0L;
            unsigned *l_588 = (void*)0;
            char ***l_590 = (void*)0;
            char ***l_591 = (void*)0;
            int i, j;
            for (g_108 = (-6); (g_108 >= (-29)); g_108 = safe_sub_func_uint8_t_u_u(g_108, 5))
            {
                (*g_65) |= l_582[3][8];
            }
            (*g_65) = 0x086DE3C4L;
            (*p_17) ^= l_583;
            (**g_514) &= (safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s((((***g_300) | func_20((**g_229))) & (+(l_440[1] == l_588))), l_582[0][1])) <= (*g_567)) & ((**g_301) && ((g_592 = l_589) == (*g_261)))), g_279));
        }

        ;
        for (l_565 = 0; (l_565 >= 21); l_565 = safe_add_func_uint16_t_u_u(l_565, 2))
        {
            int ***l_596 = &g_514;
            int ***l_597 = &g_514;
            (*g_65) &= ((l_596 = &g_514) == l_597);
        }
    }
    else
    {
        unsigned char l_598[7] = {0xECL,0xECL,0xECL,0xECL,0xECL,0xECL,0xECL};
        const char ***l_637 = (void*)0;
        unsigned short l_647[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        int l_663 = 2L;
        int i;
        if (l_598[0])
        {
            (*g_103) = p_17;
        }
        else
        {
            int *l_607 = &g_111;
            short *l_631[5][1][9] = {{{&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0}},{{&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0}},{{&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0}},{{&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],(void*)0,&g_135[1][6],&g_135[1][6],&g_135[1][6]}},{{&g_135[1][6],&g_135[1][6],&g_135[1][6],&g_135[1][6],&g_135[1][6],&g_135[1][6],&g_135[1][6],&g_135[1][6],&g_135[1][6]}}};
            int l_661 = 7L;
            int i, j, k;
            if (((*g_438) = (0x63L < ((**l_589) = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*l_569) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_16, 6)), 0xD127L))), func_20((&g_518 == (void*)0)))), 0UL)) == ((**g_514) = 0L))))))
            {
                return l_607;


            }
            else
            {
                int *l_611[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (p_19 = (-16); (p_19 < 59); p_19 = safe_add_func_uint32_t_u_u(p_19, 4))
                {
                    (*g_65) = (-7L);
                    for (g_111 = 6; (g_111 >= 1); g_111 -= 1)
                    {
                        int i;
                        g_610 = (*g_514);

                        ;
                        (*g_103) = l_611[5];
                        (**g_514) = l_598[g_111];
                    }
                }

                ;
            }

            ;
            if (((*g_65) = ((*p_17) = (safe_rshift_func_uint8_t_u_u(0xA8L, 3)))))
            {
                (*l_607) = (*p_17);
            }
            else
            {
                int *l_616 = &g_439[1];
                char ***l_638[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_638[i] = (void*)0;
                for (g_437 = 0; (g_437 > 29); g_437 = safe_add_func_int16_t_s_s(g_437, 1))
                {
                    return (*g_514);


                }
                if (((**g_514) ^= (*l_607)))
                {
                    int *l_617 = &g_4[7][0];
                    l_617 = l_616;

                    ;
                }
                else
                {
                    unsigned l_622 = 1UL;
                    int *l_641 = &l_565;
                    (*g_438) = (0xAA7344F2L || (safe_rshift_func_int8_t_s_u((*g_302), (~((safe_add_func_uint8_t_u_u(((0x8F548CFEL ^ (l_622 > ((**g_514) = (((255UL >= ((p_19 <= ((safe_lshift_func_uint16_t_u_u(func_20(p_19), 9)) >= (safe_add_func_uint32_t_u_u((*l_616), g_547)))) == p_16)) != (*l_616)) <= p_19)))) ^ (*p_17)), 1L)) == p_16)))));
                    (*p_17) = ((((-2L) >= l_622) != p_16) == ((*l_535) = (l_622 >= ((void*)0 == l_631[2][0][8]))));
                    (*g_103) = p_17;
                    for (l_500 = 5; (l_500 > 29); l_500 = safe_add_func_uint16_t_u_u(l_500, 7))
                    {
                        int **l_634 = &l_440[4];
                        p_18 = func_25((*l_616), ((func_44(l_598[0], (**g_514), l_634, (safe_mul_func_uint8_t_u_u(((l_637 != l_638[5]) > (*l_616)), (*g_302))), (g_437 = (safe_mod_func_int8_t_s_s((*l_616), (**l_634))))) && 0x7A2851D2L) < 1UL));

                        ;
                        ;
                        return (*g_514);


                    }
                }
                (*l_607) |= (*p_17);
            }
            for (l_500 = 0; (l_500 >= (-13)); l_500 = safe_sub_func_uint16_t_u_u(l_500, 5))
            {
                int l_656 = 1L;
                if ((*l_607))
                    break;
                (*g_65) = (safe_lshift_func_uint8_t_u_s((*l_607), l_646));
                if (((*p_17) = (l_647[2] || (((*l_607) && ((((*l_569) = (safe_mul_func_int16_t_s_s((p_19 & ((safe_sub_func_uint8_t_u_u(((**g_229) != (safe_mul_func_uint16_t_u_u(((*g_65) & func_20((safe_mod_func_uint32_t_u_u((((*l_569) ^= p_19) | (l_656 & (((void*)0 == &g_230) <= 0x9612L))), g_111)))), (*g_567)))), 0x0BL)) || 9UL)), l_656))) < 0x92E9L) || l_656)) <= l_656))))
                {
                    for (g_66 = (-1); (g_66 >= 17); g_66++)
                    {
                        (*l_607) = ((safe_lshift_func_int16_t_s_u(0x64DDL, 12)) >= 0x1AL);
                    }
                    (*g_65) = (*p_17);
                    (*p_17) = (*p_17);
                }
                else
                {
                    unsigned char l_662 = 0UL;
                    (*l_607) = (*p_18);
                    l_662 ^= (l_661 |= ((*g_610) = (*l_607)));
                }
                l_663 = (+(*p_18));
            }
        }

        ;
    }

    ;
    ;
    return (*g_514);


}







static unsigned char func_20(unsigned char p_21)
{
    int *l_434 = &g_279;
    if (p_21)
    {
        return (*g_230);
    }
    else
    {
        for (g_53 = 0; (g_53 <= 2); ++g_53)
        {
            (*g_103) = l_434;
        }
    }
    return (*l_434);
}







static int * func_25(char p_26, unsigned short p_27)
{
    char l_354 = 8L;
    int *l_379 = &g_4[2][0];
    unsigned short *l_405 = &g_117;
    int *l_423 = &g_66;
    unsigned char l_430 = 0x9DL;
    if ((l_354 < l_354))
    {
        int ***l_361 = (void*)0;
        int **l_364 = &g_65;
        int ***l_363[2][1][9] = {{{&l_364,&l_364,(void*)0,&l_364,&l_364,(void*)0,&l_364,&l_364,(void*)0}},{{&l_364,&l_364,(void*)0,&l_364,&l_364,(void*)0,&l_364,&l_364,(void*)0}}};
        unsigned char *l_375 = (void*)0;
        unsigned char l_378 = 0x6CL;
        const int *l_385 = &g_111;
        int l_388 = 0xC0CF2C42L;
        int i, j, k;
        (*g_103) = &g_66;
        for (g_279 = 17; (g_279 >= (-3)); g_279--)
        {
            int ****l_362 = &l_361;
            unsigned *l_365 = (void*)0;
            unsigned *l_366 = &g_147;
            int l_383 = 0L;
            for (g_101 = 0; (g_101 < 6); g_101++)
            {
                return &g_4[6][0];


            }
            (*g_65) = p_26;
            if ((safe_add_func_uint32_t_u_u(((*l_366) = (((*l_362) = l_361) != l_363[0][0][6])), ((*g_65) = l_354))))
            {
                unsigned short *l_369[8][10][3] = {{{&g_117,&g_117,&g_117},{&g_117,(void*)0,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,(void*)0},{&g_117,(void*)0,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117}},{{&g_117,(void*)0,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{(void*)0,(void*)0,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117}},{{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,(void*)0,&g_117},{(void*)0,(void*)0,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,(void*)0,&g_117},{&g_117,(void*)0,&g_117}},{{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,(void*)0},{&g_117,&g_117,&g_117},{&g_117,&g_117,(void*)0},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117}},{{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,(void*)0,&g_117},{&g_117,&g_117,&g_117},{(void*)0,(void*)0,&g_117},{&g_117,&g_117,&g_117}},{{&g_117,&g_117,&g_117},{&g_117,(void*)0,&g_117},{&g_117,&g_117,(void*)0},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117}},{{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,(void*)0,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,(void*)0},{&g_117,&g_117,(void*)0},{&g_117,&g_117,&g_117},{&g_117,(void*)0,(void*)0},{&g_117,&g_117,&g_117}},{{&g_117,&g_117,(void*)0},{&g_117,&g_117,&g_117},{&g_117,&g_117,(void*)0},{&g_117,(void*)0,&g_117},{&g_117,&g_117,&g_117},{(void*)0,&g_117,&g_117},{&g_117,&g_117,(void*)0},{&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117},{&g_117,&g_117,(void*)0}}};
                int l_370 = 2L;
                int l_371[1][5];
                unsigned char *l_374 = &g_106[1];
                short l_376 = 0x78A5L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_371[i][j] = 0xC5D794C9L;
                }
                if (((l_370 = (safe_lshift_func_int16_t_s_s(l_354, 15))) & (~l_371[0][0])))
                {
                    if ((safe_mod_func_uint8_t_u_u(((*l_374) &= ((l_374 == l_375) >= (***g_261))), ((*g_65) | l_370))))
                    {
                        int *l_377 = &g_4[7][0];
                        (**l_364) |= (l_376 >= 0x4EF68A5EL);
                        if (l_371[0][0])
                            break;
                        (*g_103) = l_377;
                        (*g_65) |= (p_27 && l_378);
                    }
                    else
                    {
                        const unsigned char **l_380 = &g_230;
                        (*l_364) = func_32(&l_371[0][2]);

                        ;
                        l_379 = &l_371[0][0];

                        ;
                        l_380 = &g_230;
                    }


                    for (g_66 = 0; (g_66 >= (-2)); g_66 = safe_sub_func_int32_t_s_s(g_66, 7))
                    {
                        const int *l_384 = &g_4[7][0];
                        if (l_383)
                            break;
                        l_385 = l_384;

                        ;
                    }
                    (*g_65) = (safe_lshift_func_uint16_t_u_s(g_53, 7));
                }
                else
                {
                    (*g_103) = func_32(&l_383);
                    if (l_388)
                        break;
                    if (p_26)
                        continue;
                }


            }
            else
            {
                (*g_103) = func_32(&g_4[2][0]);
            }
        }


        ;
    }
    else
    {
        int *l_392[5][7][7] = {{{&g_66,(void*)0,&g_66,&g_4[5][0],&g_279,&g_279,&g_279},{&g_279,(void*)0,(void*)0,&g_66,&g_111,&g_4[7][0],(void*)0},{&g_4[7][0],&g_279,&g_4[1][0],(void*)0,&g_4[0][0],&g_4[8][0],&g_4[7][0]},{&g_111,&g_4[2][0],&g_66,&g_111,&g_279,&g_66,(void*)0},{&g_66,(void*)0,(void*)0,&g_111,(void*)0,&g_111,&g_111},{&g_4[7][0],&g_66,&g_111,&g_66,&g_4[7][0],&g_111,&g_279},{(void*)0,(void*)0,&g_4[7][0],&g_279,&g_111,&g_4[0][0],&g_279}},{{(void*)0,&g_4[7][0],(void*)0,(void*)0,&g_4[2][0],&g_279,&g_111},{(void*)0,&g_279,&g_66,(void*)0,&g_4[8][0],(void*)0,&g_66},{&g_4[7][0],&g_111,&g_279,&g_279,&g_111,&g_4[7][0],&g_279},{&g_66,&g_279,&g_66,&g_4[7][0],&g_4[5][0],&g_111,(void*)0},{&g_111,&g_66,&g_66,&g_4[7][0],&g_111,&g_4[2][0],(void*)0},{&g_4[7][0],&g_279,(void*)0,(void*)0,&g_66,&g_4[8][0],&g_4[8][0]},{&g_66,&g_111,&g_4[3][0],(void*)0,&g_4[3][0],&g_111,&g_66}},{{&g_4[2][0],&g_279,&g_66,&g_111,(void*)0,&g_4[5][0],(void*)0},{&g_111,&g_66,&g_111,&g_66,&g_111,&g_279,&g_4[7][0]},{(void*)0,&g_279,(void*)0,&g_111,&g_4[1][0],(void*)0,(void*)0},{&g_111,&g_4[7][0],(void*)0,&g_111,&g_111,(void*)0,&g_4[7][0]},{&g_279,&g_4[8][0],(void*)0,(void*)0,(void*)0,&g_111,&g_279},{&g_4[3][0],&g_66,&g_4[7][0],&g_279,&g_4[6][0],&g_111,(void*)0},{(void*)0,&g_111,(void*)0,(void*)0,&g_4[8][0],&g_4[1][0],&g_4[2][0]}},{{&g_4[7][0],(void*)0,&g_4[6][0],&g_111,&g_111,&g_111,&g_4[6][0]},{&g_111,&g_111,(void*)0,&g_111,(void*)0,(void*)0,&g_66},{&g_4[7][0],(void*)0,&g_111,&g_66,&g_4[3][0],&g_4[6][0],&g_111},{(void*)0,&g_4[7][0],&g_4[8][0],&g_279,(void*)0,&g_4[8][0],&g_111},{&g_111,&g_4[2][0],&g_111,&g_279,&g_111,&g_111,&g_279},{&g_279,&g_4[5][0],&g_279,&g_111,&g_4[8][0],(void*)0,&g_279},{&g_66,(void*)0,&g_4[7][0],&g_111,&g_4[6][0],&g_4[3][0],&g_66}},{{&g_66,&g_4[7][0],(void*)0,&g_66,&g_4[7][0],&g_4[0][0],(void*)0},{(void*)0,&g_111,&g_4[7][0],&g_4[7][0],&g_279,&g_4[7][0],&g_279},{(void*)0,&g_111,&g_111,(void*)0,&g_111,(void*)0,(void*)0},{(void*)0,&g_111,&g_4[7][0],&g_4[7][0],&g_4[7][0],&g_4[7][0],&g_66},{&g_4[8][0],&g_66,(void*)0,&g_4[7][0],&g_111,&g_4[7][0],(void*)0},{(void*)0,(void*)0,&g_111,(void*)0,&g_66,&g_279,&g_279},{&g_66,&g_4[7][0],&g_279,&g_4[7][0],&g_66,&g_111,(void*)0}}};
        int i, j, k;
        (*l_379) ^= p_26;
        for (g_117 = (-5); (g_117 != 24); g_117 = safe_add_func_int16_t_s_s(g_117, 1))
        {
            int * const l_391 = (void*)0;
            int l_403 = 0xC9A38D53L;
            unsigned short * const l_407 = (void*)0;
            if ((*g_65))
                break;
            l_392[3][5][0] = l_391;
            for (g_108 = 0; (g_108 > 29); g_108 = safe_add_func_int32_t_s_s(g_108, 2))
            {
                l_403 &= (safe_lshift_func_uint16_t_u_s((g_271 <= (*l_379)), ((p_26 >= (!(safe_add_func_uint16_t_u_u(p_27, (0xE6F6L == (safe_mul_func_uint16_t_u_u(p_27, (~((safe_sub_func_uint8_t_u_u((*g_230), (**g_262))) == p_26))))))))) > 0xF4L)));
            }
            for (g_271 = 0; (g_271 <= 1); g_271 += 1)
            {
                int l_404 = 0xEE78612BL;
                (*g_103) = l_392[4][6][4];
                (*g_261) = (*g_261);
                for (g_279 = 1; (g_279 >= 0); g_279 -= 1)
                {
                    int i, j;
                    l_404 ^= g_135[g_271][(g_279 + 3)];
                    for (g_88 = 0; (g_88 >= 0); g_88 -= 1)
                    {
                        unsigned short **l_406 = &l_405;
                        int l_408 = 0x64089EE8L;
                        int l_413 = 0L;
                        int l_414[4][3] = {{(-1L),(-1L),(-1L)},{(-9L),(-9L),(-9L)},{(-1L),(-1L),(-1L)},{(-9L),(-9L),(-9L)}};
                        int i, j;
                        g_4[g_271][g_88] &= ((((((*l_406) = l_405) == l_407) > l_408) & (safe_mul_func_int8_t_s_s(((*g_302) = (~((safe_mul_func_uint8_t_u_u((l_413 = ((p_26 != ((**g_262) & (p_26 < p_26))) != 4294967295UL)), (*g_230))) < 9L))), l_408))) <= l_414[2][2]);
                        g_111 = ((*l_379) ^= g_135[g_271][(g_279 + 3)]);
                    }
                }
            }
        }
        for (g_101 = (-20); (g_101 == 55); ++g_101)
        {
            const int *l_429 = &g_4[7][0];
            for (g_86 = 0; (g_86 < (-7)); g_86--)
            {
                int *l_420 = &g_4[7][0];
                if (((*g_65) ^= 2L))
                {
                    int *l_419 = &g_66;
                    (*g_103) = func_32(func_32(&g_4[7][0]));
                    (*g_103) = l_419;
                    return l_420;


                }
                else
                {
                    int *l_424 = &g_4[7][0];
                    for (g_53 = 0; (g_53 < 53); g_53 = safe_add_func_int16_t_s_s(g_53, 8))
                    {
                        unsigned short **l_425 = &l_405;
                        unsigned char *l_426 = &g_106[1];
                        (*g_103) = func_32(l_379);
                        l_424 = l_423;

                        ;
                        (*l_420) |= (((*l_426) = ((void*)0 == l_425)) != ((void*)0 != &g_108));
                        (*l_420) |= (p_27 > (**g_301));
                    }

                    ;
                }
                if (p_27)
                {
                    (*g_103) = l_379;
                    (*l_379) = (safe_mul_func_uint16_t_u_u(p_27, g_147));
                }
                else
                {
                    (*g_103) = l_429;
                }
                l_429 = l_420;
                if ((*l_379))
                    break;
            }
        }
        (*g_65) &= (((-1L) >= 0xAFAA862AL) != g_271);
    }


    (*g_65) = (l_430 >= 0x458F4C37L);
    return l_423;


}







static int * func_32(int * p_33)
{
    int *l_35 = &g_4[7][0];
    int **l_34 = &l_35;
    int ***l_36 = &l_34;
    (*l_36) = l_34;
    return &g_4[7][0];


}







static int func_38(unsigned short p_39, int *** p_40, int ** p_41)
{
    unsigned l_43[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
    char l_54 = 1L;
    int l_59[9] = {0x7E13251FL,0x7E13251FL,0x7E13251FL,0x7E13251FL,0x7E13251FL,0x7E13251FL,0x7E13251FL,0x7E13251FL,0x7E13251FL};
    unsigned char *l_136 = &g_53;
    unsigned char * const l_153[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned char *l_185 = &g_53;
    int *l_208 = &l_59[8];
    unsigned l_267 = 0xDAAEF32BL;
    char l_280 = 8L;
    char **l_345 = &g_302;
    char ***l_346 = &l_345;
    short *l_347 = (void*)0;
    short *l_348 = &g_135[1][6];
    int i;
    if (l_43[5])
    {
        unsigned char *l_52[8][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_53,&g_53,&g_53,&g_53,&g_53}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_53,&g_53,&g_53,&g_53,&g_53}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_53,&g_53,&g_53,&g_53,&g_53}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_53,&g_53,&g_53,&g_53,&g_53}}};
        unsigned *l_55 = (void*)0;
        unsigned *l_56 = (void*)0;
        unsigned *l_57 = (void*)0;
        unsigned *l_58[4][5];
        int l_60 = 0x46409EF3L;
        unsigned short *l_116 = &g_117;
        int *l_118 = &l_59[6];
        char l_157[5];
        char *l_177 = &g_86;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_58[i][j] = &l_43[5];
        }
        for (i = 0; i < 5; i++)
            l_157[i] = 1L;
        (*l_118) = (g_4[7][0] < ((*l_116) = (~func_44((l_59[6] = (safe_rshift_func_int8_t_s_u(1L, (l_54 = 252UL)))), l_60, func_61(g_53), p_39, p_39))));

        ;
        for (g_66 = 0; (g_66 >= 8); g_66 = safe_add_func_int32_t_s_s(g_66, 1))
        {
            unsigned short l_129[9][10] = {{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL},{0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL,0x608AL}};
            int *l_141 = (void*)0;
            const unsigned char l_164 = 0xBBL;
            int i, j;
            for (g_108 = 14; (g_108 < (-30)); g_108 = safe_sub_func_uint32_t_u_u(g_108, 7))
            {
                int l_137 = 0x0ABC3D1AL;
                if ((*l_118))
                {
                    for (g_111 = 0; (g_111 <= 0); g_111 += 1)
                    {
                        short *l_132 = &g_133;
                        short *l_134[7];
                        int **l_140 = &l_118;
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_134[i] = &g_135[1][6];
                    }
                    for (g_86 = 9; (g_86 == (-4)); g_86 = safe_sub_func_uint16_t_u_u(g_86, 6))
                    {
                        (*g_103) = &l_59[6];


                        return l_43[5];


                    }
                }
                else
                {
                    const short l_149 = 0x0321L;
                    unsigned char **l_152 = &l_136;
                    char *l_154 = &g_88;
                    int l_165 = 0x1A6A6FFDL;
                    int l_167 = 1L;
                    unsigned short l_170 = 0x5596L;
                    for (l_60 = 0; (l_60 == 1); l_60 = safe_add_func_uint32_t_u_u(l_60, 5))
                    {
                        unsigned *l_146 = &g_147;
                        unsigned char *l_148 = (void*)0;
                        (*g_103) = (*g_103);
                        (*l_118) = (((*l_146) &= 0x132EE097L) > (((void*)0 == l_148) > l_149));
                    }
                    if ((safe_mul_func_uint8_t_u_u((((*l_154) = (7L < (l_149 > (((*l_152) = &g_106[7]) == l_153[8])))) >= (safe_add_func_uint16_t_u_u(l_157[4], p_39))), (safe_sub_func_uint8_t_u_u((((*l_118) && g_135[1][6]) || ((~(safe_add_func_uint16_t_u_u((safe_mul_func_uint32_t_u_u(p_39, 0L)), 0xB7C9L))) | g_4[7][0])), 3UL)))))
                    {
                        unsigned *l_166[8];
                        short *l_171 = &g_133;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_166[i] = (void*)0;
                        (*l_118) ^= ((l_164 & p_39) > (l_167 ^= l_165));
                        (*l_118) = (safe_add_func_int16_t_s_s((l_170 > ((void*)0 != l_171)), (g_88 < (safe_mul_func_uint16_t_u_u(g_174, g_4[8][0])))));
                    }
                    else
                    {
                        l_167 |= ((g_106[8] && p_39) | 0x7A57FB1EL);
                    }

                    ;
                }
                for (g_53 = 0; (g_53 <= 3); g_53 += 1)
                {
                    if ((*l_118))
                        break;
                    return (*g_65);
                }
                if (l_59[8])
                    break;
                l_59[6] &= (l_137 |= (0xE3BFD9FCL || (safe_lshift_func_uint8_t_u_s(g_101, 2))));
            }
        }

        ;
        (*l_118) = (255UL | ((*l_177) &= 0x96L));
        for (g_108 = 9; (g_108 >= 3); g_108 -= 1)
        {
            unsigned char *l_184 = &g_53;
            int i;
            (*l_118) &= l_43[g_108];
            (*l_118) = 0L;
            for (g_66 = 8; (g_66 >= 3); g_66 -= 1)
            {
                char *l_180 = &g_88;
                unsigned **l_181 = &l_57;
                unsigned **l_182 = &l_56;
                int l_183 = 0xFD8A59CAL;
            }
        }
    }
    else
    {
        unsigned *l_196 = &l_43[2];
        unsigned short *l_197[6][2][7] = {{{&g_117,&g_117,&g_117,&g_117,(void*)0,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117}},{{&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,(void*)0},{(void*)0,&g_117,&g_117,(void*)0,&g_117,&g_117,(void*)0}},{{&g_117,&g_117,&g_117,&g_117,(void*)0,&g_117,&g_117},{&g_117,&g_117,(void*)0,&g_117,(void*)0,&g_117,&g_117}},{{&g_117,(void*)0,&g_117,(void*)0,&g_117,(void*)0,&g_117},{&g_117,&g_117,(void*)0,&g_117,&g_117,(void*)0,&g_117}},{{&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,(void*)0,&g_117,&g_117,&g_117,&g_117}},{{(void*)0,&g_117,&g_117,&g_117,(void*)0,&g_117,&g_117},{&g_117,&g_117,(void*)0,&g_117,&g_117,&g_117,&g_117}}};
        int l_198 = 0x524414FCL;
        int l_199[1];
        unsigned char l_203 = 0xF6L;
        short l_224 = 0L;
        unsigned short l_245 = 0x1EE1L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_199[i] = 0x6FF6ADF0L;
        (*g_65) ^= 0x6039F823L;
        for (g_53 = 0; (g_53 <= 8); g_53 += 1)
        {
            int i;
            return g_106[g_53];
        }
        (*g_65) &= ((safe_lshift_func_uint8_t_u_u(g_53, 5)) || ((~(0UL < (((l_198 = (p_39 ^= (l_196 == &l_43[5]))) > g_86) > l_199[0]))) >= (l_59[6] && l_54)));
        for (g_86 = 8; (g_86 >= 0); g_86 -= 1)
        {
            int **l_200 = &g_65;
            int *l_201 = (void*)0;
            int *l_202[2];
            unsigned char l_207 = 0x25L;
            int i;
            for (i = 0; i < 2; i++)
                l_202[i] = &l_199[0];
            l_203 |= ((0xAAL < (l_43[g_86] != (l_43[g_86] <= (&g_104[2][1] != (l_200 = &g_65))))) >= ((*g_65) |= l_43[5]));
            l_59[3] = l_43[5];
            if (l_43[5])
            {
                unsigned l_204 = 0UL;
                unsigned char **l_228[10] = {&l_185,&l_185,(void*)0,&l_185,&l_185,&l_185,&l_185,(void*)0,&l_185,&l_185};
                int i;
                (**l_200) |= (g_4[5][0] | g_135[0][3]);
                if (l_204)
                {
                    unsigned l_222 = 1UL;
                    (*g_103) = (*g_103);
                    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
                    {
                        int i, j;
                        l_207 ^= ((p_39 && (safe_sub_func_uint8_t_u_u(l_198, p_39))) | 5L);
                        g_104[(g_147 + 2)][g_147] = func_32(func_32(l_208));
                        return (*g_65);
                    }
                    for (g_133 = 0; (g_133 <= 1); g_133 += 1)
                    {
                        short l_221 = 0x7AFCL;
                        short *l_223 = &g_135[0][7];
                        int i, j;
                        (*l_208) ^= (safe_lshift_func_uint8_t_u_u(g_4[7][0], (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((g_4[7][0] < ((*l_223) &= ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((p_39 ^ g_133), p_39)), p_39)), ((l_221 == l_204) | (((l_222 || l_222) < p_39) ^ l_198)))) || (-5L)))) >= l_199[0]), g_53)), g_86))));
                        (*l_208) &= (*g_65);
                        (*l_208) |= (g_117 != g_88);
                    }
                }
                else
                {
                    if (p_39)
                    {
                        (*g_65) = l_224;
                    }
                    else
                    {
                        return (*g_65);
                    }
                    for (l_198 = 0; (l_198 <= 1); l_198 += 1)
                    {
                        short l_227 = 0x4682L;
                        (*g_65) &= ((safe_rshift_func_int16_t_s_u(((l_227 <= g_117) | 0x979B7D10L), (p_39 ^= ((*l_208) = (l_228[6] != g_229))))) <= g_147);
                        (*l_208) = 0x06CC6058L;
                    }
                }
                for (l_203 = 0; (l_203 <= 1); l_203 += 1)
                {
                    int i, j;
                    for (l_204 = 0; (l_204 <= 1); l_204 += 1)
                    {
                        int l_237 = 0L;
                        (*l_208) = (*g_65);
                        (*g_65) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_199[0], (safe_sub_func_int16_t_s_s((p_39 & g_135[1][0]), p_39)))), ((*g_230) <= p_39)));
                        (*l_208) = (l_237 != (safe_lshift_func_uint16_t_u_u(l_199[0], 10)));
                        (*l_208) |= (-1L);
                    }
                    g_104[(l_203 + 3)][l_203] = (*g_103);
                    for (p_39 = 0; (p_39 >= 58); p_39++)
                    {
                        if (l_204)
                            break;
                    }
                    for (g_53 = 0; (g_53 <= 9); g_53 += 1)
                    {
                        int l_242 = 0xE8E70F4BL;
                        int i;
                        l_242 &= g_106[(l_203 + 5)];
                        l_245 &= ((l_242 |= (p_39 = (safe_sub_func_int32_t_s_s(l_204, (g_106[2] < (*g_65)))))) || l_204);
                    }
                }
                for (g_53 = 0; (g_53 != 19); ++g_53)
                {
                    unsigned short l_268 = 0x1A4BL;
                    for (l_224 = (-22); (l_224 != 18); ++l_224)
                    {
                        unsigned char l_255 = 255UL;
                        (*g_103) = func_32(&g_4[6][0]);
                        (*l_208) = (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((void*)0 != &l_207))), p_39)), 0x1836CB45L));
                        g_111 = ((**l_200) &= (p_39 <= (3L ^ (0xEBF44B9EL < (g_106[1] < (l_255 != (p_39 & (safe_mul_func_uint16_t_u_u(0x2A22L, (6L ^ (safe_unary_minus_func_uint16_t_u(l_255))))))))))));
                    }
                    for (l_198 = 9; (l_198 >= 1); l_198 -= 1)
                    {
                        l_267 ^= (!((*g_65) = (0x4DCBL > (l_245 ^ (safe_sub_func_uint32_t_u_u((g_261 != (void*)0), (safe_lshift_func_uint8_t_u_s(0x08L, p_39))))))));
                    }
                    if (l_199[0])
                        continue;
                    if (l_268)
                        break;
                }
            }
            else
            {
                unsigned *l_269 = &g_147;
                unsigned *l_270 = &g_271;
                (*g_65) = (((*l_270) |= ((*l_269) = (((void*)0 != (*g_229)) & 0x226F6AAEL))) & 1UL);
            }
            (*g_103) = func_32(&l_198);
        }
    }

    ;
    ;
    l_208 = func_32(func_32(&g_4[2][0]));

    ;
    for (l_54 = 1; (l_54 >= 0); l_54 -= 1)
    {
        const int **l_308 = (void*)0;
        int i;
        l_59[(l_54 + 7)] |= 0xC8251331L;
        for (g_53 = 0; (g_53 <= 1); g_53 += 1)
        {
            int i, j;
            if (l_59[(l_54 + 5)])
                break;
            l_59[(l_54 + 4)] ^= 0x84D75D99L;
            if ((safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_135[l_54][(l_54 + 2)], g_135[l_54][(l_54 + 5)])) & g_135[l_54][g_53]), g_108)))
            {
                for (p_39 = 0; (p_39 <= 1); p_39 += 1)
                {
                    int *l_278 = &l_59[6];
                    int i, j;
                    if ((*g_65))
                    {
                        if ((*g_65))
                            break;
                        g_111 |= (*g_65);
                    }
                    else
                    {
                        int *l_276 = &l_59[8];
                        int **l_277 = &g_65;
                        int i, j;
                        (*l_276) &= g_135[l_54][(l_54 + 2)];
                        g_104[(l_54 + 1)][p_39] = ((*l_277) = &g_4[7][0]);

                        ;
                        g_104[g_53][p_39] = func_32(l_278);
                    }
                    g_279 |= (p_39 != (*l_208));
                    if (l_280)
                        break;
                    if (p_39)
                        break;
                }
            }
            else
            {
                int *l_281 = &l_59[(l_54 + 4)];
                int l_292 = 0xCB1D280DL;
                const int **l_310 = (void*)0;
                (*l_281) = (*g_65);
                for (g_111 = 1; (g_111 >= 0); g_111 -= 1)
                {
                    short *l_282[2][10][6] = {{{&g_133,&g_133,&g_133,&g_133,(void*)0,(void*)0},{&g_108,&g_108,&g_133,&g_133,&g_133,&g_133},{&g_108,&g_108,&g_133,&g_108,&g_133,(void*)0},{&g_133,&g_108,&g_133,(void*)0,&g_108,&g_133},{(void*)0,&g_108,&g_133,&g_108,(void*)0,&g_133},{&g_108,&g_133,&g_108,&g_108,(void*)0,&g_108},{(void*)0,&g_108,(void*)0,&g_108,&g_133,(void*)0},{&g_133,&g_108,&g_133,&g_108,(void*)0,(void*)0},{&g_108,&g_133,&g_108,&g_108,&g_108,&g_108},{&g_133,(void*)0,(void*)0,&g_108,&g_108,&g_133}},{{(void*)0,&g_133,&g_133,&g_108,&g_133,&g_133},{&g_108,&g_133,&g_108,&g_108,&g_108,&g_108},{&g_133,&g_108,&g_108,&g_133,&g_133,&g_133},{&g_108,&g_108,&g_133,(void*)0,&g_108,(void*)0},{&g_133,&g_133,&g_133,&g_133,&g_108,&g_133},{&g_108,&g_108,(void*)0,&g_108,&g_133,&g_133},{&g_108,&g_108,(void*)0,(void*)0,&g_108,(void*)0},{&g_133,&g_108,(void*)0,&g_108,(void*)0,&g_108},{(void*)0,&g_108,&g_133,&g_108,(void*)0,&g_133},{&g_133,&g_108,(void*)0,&g_108,&g_133,&g_108}}};
                    int l_283[8][2][2] = {{{0L,0L},{(-1L),6L}},{{0x4D56DC5EL,6L},{(-1L),0L}},{{0L,(-1L)},{6L,0x4D56DC5EL}},{{6L,(-1L)},{0L,0L}},{{(-1L),6L},{0x4D56DC5EL,6L}},{{(-1L),0L},{0L,(-1L)}},{{6L,0x4D56DC5EL},{6L,(-1L)}},{{0L,0L},{(-1L),6L}}};
                    int l_288[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
                    unsigned char *l_291[5] = {&g_106[1],&g_106[1],&g_106[1],&g_106[1],&g_106[1]};
                    char *l_299 = &g_86;
                    char **l_298 = &l_299;
                    char ***l_297 = &l_298;
                    int i, j, k;
                    (*g_103) = (*g_103);
                }
            }
            for (g_101 = 0; (g_101 >= 35); ++g_101)
            {
                int *l_324 = (void*)0;
                l_59[1] = (*g_65);
                l_59[(l_54 + 7)] = (safe_rshift_func_uint8_t_u_u(0x57L, 6));
                for (l_267 = 1; (l_267 > 17); l_267 = safe_add_func_uint8_t_u_u(l_267, 7))
                {
                    short *l_340 = &g_135[1][1];
                    for (g_271 = 4; (g_271 > 60); ++g_271)
                    {
                        int *l_329 = &g_279;
                        (*l_329) = (g_117 && g_133);
                        (*l_329) ^= (-10L);
                    }
                    if ((((*l_340) = ((g_133 ^ (-1L)) ^ (safe_add_func_uint32_t_u_u((((0xFAB7L != (safe_add_func_int8_t_s_s((g_135[l_54][(l_54 + 2)] & 0x9CC26D3AL), ((g_4[4][0] > ((safe_mul_func_int16_t_s_s((((+(*g_65)) == (*l_208)) < (safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(0x96F3L, p_39)) && 0x225BA550L) >= p_39), (***g_300)))), p_39)) > 0L)) >= g_101)))) < 0L) & p_39), g_106[1])))) & (*l_208)))
                    {
                        int *l_343 = &g_279;
                        (*l_343) |= (safe_mul_func_uint8_t_u_u((p_39 != 0xC1L), (**g_229)));
                        return g_135[l_54][(l_54 + 5)];


                    }
                    else
                    {
                        int *l_344 = &l_59[(l_54 + 7)];
                        (*g_103) = l_344;
                    }
                }
            }
        }
    }


    if ((g_111 & ((*l_348) ^= (((((*g_300) == ((*l_346) = l_345)) < 8UL) >= p_39) != (*l_208)))))
    {
        const unsigned l_351 = 4294967295UL;
        int *l_352 = &g_279;
        (*l_352) |= (safe_mod_func_int16_t_s_s(g_88, l_351));
        (*l_352) = p_39;
    }
    else
    {
        return (*l_208);


    }
    return (*l_208);


}







static unsigned short func_44(unsigned p_45, int p_46, int ** p_47, const unsigned p_48, unsigned p_49)
{
    unsigned l_95 = 0UL;
    unsigned *l_100 = &g_101;
    int ***l_102 = (void*)0;
    unsigned char *l_105 = &g_106[1];
    short *l_107 = &g_108;
    int *l_109 = &g_66;
    int *l_110 = &g_111;
    (*l_110) &= ((*l_109) = (p_45 == ((*l_107) = (((safe_mul_func_int16_t_s_s(l_95, (safe_rshift_func_int8_t_s_u(0x04L, (safe_lshift_func_uint8_t_u_u(((l_100 == &p_48) == ((p_47 = func_61(((*l_100) = g_86))) != (g_103 = g_103))), (((*l_105) = g_4[0][0]) > g_4[7][0]))))))) != 0x2EA94A57L) ^ p_46))));

    ;
    ;
    for (g_111 = 0; (g_111 <= (-3)); g_111 = safe_sub_func_int8_t_s_s(g_111, 6))
    {
        (*l_109) = (-1L);
        for (p_49 = 0; (p_49 <= 8); p_49 += 1)
        {
            return p_49;
        }
        for (p_45 = 0; (p_45 < 32); p_45++)
        {
            (*p_47) = (*p_47);
        }
    }
    (*l_109) ^= (**p_47);
    return (*l_110);
}







static int ** func_61(unsigned p_62)
{
    int *l_63 = (void*)0;
    int **l_64[6];
    char *l_85 = &g_86;
    char *l_87 = &g_88;
    int i;
    for (i = 0; i < 6; i++)
        l_64[i] = (void*)0;
    g_65 = func_32(l_63);

    ;
    for (g_53 = 23; (g_53 > 10); g_53 = safe_sub_func_int8_t_s_s(g_53, 1))
    {
        int **l_71 = &g_65;
        int l_74 = (-8L);
        for (p_62 = 0; (p_62 > 48); ++p_62)
        {
            return l_71;


        }
        for (g_66 = 0; (g_66 != 14); g_66 = safe_add_func_uint16_t_u_u(g_66, 1))
        {
            g_65 = func_32(&g_66);
        }
        l_74 = p_62;
    }
    g_66 = ((&g_4[7][0] != (void*)0) | (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_62 || ((((*l_85) |= p_62) ^ ((*l_87) |= (p_62 <= g_4[7][0]))) > ((safe_mul_func_uint16_t_u_u(g_53, p_62)) ^ (safe_mod_func_int32_t_s_s(p_62, p_62))))), p_62)), p_62)), g_66)), p_62)), 0)));
    return &g_65;


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
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_106[i], "g_106[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_135[i][j], "g_135[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_439[i], "g_439[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_547, "g_547", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_573[i][j][k], "g_573[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_574[i][j], "g_574[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_682[i][j], "g_682[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_701, "g_701", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
