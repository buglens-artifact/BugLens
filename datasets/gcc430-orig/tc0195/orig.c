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



static unsigned short g_2 = 65534UL;
static short g_73[8][4] = {{0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}, {0xA8B7L, 0x7777L, 0x9A45L, 0x7777L}};
static unsigned g_75 = 4294967294UL;
static unsigned short g_91 = 65530UL;
static int g_152[8][1][10] = {{{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}, {{(-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L), (-5L), (-10L)}}};
static unsigned short g_175[4] = {0xD07FL, 0xD07FL, 0xD07FL, 0xD07FL};
static char g_256 = 0x0CL;
static int g_488 = (-8L);
static short g_675 = 0x0F18L;
static char g_948[7] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
static unsigned g_1023[6][5] = {{4294967286UL, 0x6E8F1BB9L, 4294967286UL, 0x6E8F1BB9L, 4294967286UL}, {4294967286UL, 0x6E8F1BB9L, 4294967286UL, 0x6E8F1BB9L, 4294967286UL}, {4294967286UL, 0x6E8F1BB9L, 4294967286UL, 0x6E8F1BB9L, 4294967286UL}, {4294967286UL, 0x6E8F1BB9L, 4294967286UL, 0x6E8F1BB9L, 4294967286UL}, {4294967286UL, 0x6E8F1BB9L, 4294967286UL, 0x6E8F1BB9L, 4294967286UL}, {4294967286UL, 0x6E8F1BB9L, 4294967286UL, 0x6E8F1BB9L, 4294967286UL}};
static unsigned short g_1079 = 0x34D7L;
static unsigned g_1138 = 1UL;
static short g_1151 = 1L;
static unsigned g_1408 = 1UL;
static char g_1506 = 6L;



static int func_1(void);
static const int func_5(unsigned p_6);
static char func_10(char p_11, char p_12);
static char func_15(const int p_16, unsigned short p_17, unsigned short p_18, int p_19);
static int func_20(unsigned char p_21, const unsigned short p_22, unsigned p_23, unsigned p_24, char p_25);
static int func_31(char p_32, int p_33);
static char func_34(unsigned p_35, unsigned p_36, unsigned short p_37, const unsigned p_38, short p_39);
static short func_48(short p_49, char p_50, int p_51, const unsigned p_52, unsigned p_53);
static int func_58(unsigned short p_59, char p_60, unsigned char p_61, int p_62, short p_63);
static unsigned char func_67(char p_68, short p_69, char p_70, unsigned char p_71, unsigned p_72);
static int func_1(void)
{
    char l_7 = 4L;
    unsigned l_1630 = 5UL;
    g_2 = 1L;
    g_152[7][0][5] = (safe_div_func_int8_t_s_s(g_2, (func_5(l_7) & l_7)));
    return l_1630;
}







static const int func_5(unsigned p_6)
{
    unsigned char l_9 = 9UL;
    int l_1626[8][3][10] = {{{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}, {{0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}, {0x1A93C42BL, 0L, (-2L), 1L, 0x053243B4L, (-7L), (-1L), 0x0FBDA6A1L, 0xCFE4074AL, 0xF1EC7DE7L}}};
    unsigned l_1629 = 4294967286UL;
    int i, j, k;
    l_1626[5][2][3] = (safe_unary_minus_func_uint32_t_u((((0xD744D028L | (l_9 && g_2)) | g_2) != func_10((safe_mod_func_int8_t_s_s((func_15(l_9, p_6, g_2, func_20(l_9, p_6, l_9, g_2, l_9)) == 0x02L), p_6)), p_6))));
    g_488 = (safe_add_func_uint8_t_u_u(0UL, (l_1629 || g_1408)));
    return p_6;
}







static char func_10(char p_11, char p_12)
{
    int l_1592 = 0L;
    int l_1597 = 0xEEC29C99L;
    short l_1616 = (-2L);
    g_152[7][0][5] = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(func_20(p_12, g_1506, ((255UL && ((((!g_1408) | l_1592) || l_1592) | (g_948[4] == g_175[0]))) >= (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_12 | 0x7057L), p_12)), l_1597))), g_256, p_11), l_1597)), g_1408));
    for (g_75 = 0; (g_75 <= 37); g_75 = safe_add_func_uint16_t_u_u(g_75, 1))
    {
        return g_256;
    }
    l_1592 = (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(l_1597, 1)), (safe_div_func_uint16_t_u_u(p_12, ((safe_mod_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((+(safe_sub_func_uint16_t_u_u(func_15(((safe_add_func_int16_t_s_s((-6L), (safe_rshift_func_int16_t_s_s(func_34(p_12, (l_1597 | p_12), ((l_1592 < l_1592) ^ (l_1597 | 0x0AF6L)), g_256, l_1592), 14)))) ^ l_1597), g_948[4], p_11, p_11), l_1616))), 65535UL)) >= g_1023[0][2]), 0xD37FL)) && g_488)))));
    for (g_1138 = (-8); (g_1138 >= 60); ++g_1138)
    {
        short l_1623 = 2L;
        for (g_1506 = 0; (g_1506 == 3); g_1506 = safe_add_func_int32_t_s_s(g_1506, 4))
        {
            return p_11;
        }
        g_152[7][0][5] = (safe_mul_func_int16_t_s_s((-6L), 0x9371L));
        g_152[4][0][3] = (func_15(p_11, ((+func_31(((l_1623 < (safe_mod_func_uint32_t_u_u(0xC2AC03F6L, 0xDB6745BDL))) >= (g_1079 & (p_11 && p_11))), p_12)) && g_1079), g_73[7][3], p_12) | g_73[1][2]);
    }
    return l_1597;
}







static char func_15(const int p_16, unsigned short p_17, unsigned short p_18, int p_19)
{
    int l_1447 = 0xDD37BE00L;
    char l_1478 = 0x48L;
    unsigned l_1518 = 4294967295UL;
    if ((safe_div_func_int16_t_s_s(func_31(l_1447, l_1447), p_17)))
    {
        int l_1448[10];
        int l_1451 = 0x33080AF9L;
        int l_1458[3][7][8] = {{{0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}}, {{0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}}, {{0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}, {0x51FD9C24L, 0x1DBB6602L, 0x51FD9C24L, 1L, 0L, 0xEF8064A5L, 0L, 0x6A737DA7L}}};
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1448[i] = 0xC560E135L;
        p_19 = l_1448[9];
        if ((safe_rshift_func_int8_t_s_s(l_1451, 7)))
        {
            unsigned l_1463[3][3][6] = {{{4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}, {4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}, {4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}}, {{4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}, {4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}, {4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}}, {{4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}, {4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}, {4294967295UL, 0UL, 4294967292UL, 1UL, 4294967295UL, 1UL}}};
            int l_1475 = 0x38EAFC86L;
            unsigned l_1517 = 0xBB560FC5L;
            int i, j, k;
            for (p_19 = 0; (p_19 >= (-3)); p_19--)
            {
                unsigned l_1459 = 0UL;
                int l_1462 = 8L;
                int l_1484 = 0x0D7FE92EL;
                if (g_1023[3][4])
                {
                    for (p_17 = (-12); (p_17 == 38); p_17++)
                    {
                        g_488 = (0UL & (!p_18));
                        l_1458[1][2][7] = p_17;
                        if (g_1408)
                            continue;
                        l_1459 = 0x2128932CL;
                    }
                    l_1462 = (safe_add_func_int8_t_s_s((-10L), (g_175[0] & p_19)));
                }
                else
                {
                    unsigned short l_1470 = 0x0BA8L;
                    int l_1483 = 7L;
                    if (l_1463[2][1][5])
                    {
                        g_152[0][0][8] = ((safe_lshift_func_uint16_t_u_s(func_31((p_16 && (((safe_mul_func_int8_t_s_s(g_2, ((safe_mod_func_uint8_t_u_u(g_675, l_1470)) == (!((5UL <= 248UL) >= ((func_58(((4294967294UL > (safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(p_18, (l_1451 != l_1470))) <= g_2), 4))) < l_1475), l_1447, l_1462, l_1447, p_16) > 0xD532L) != p_16)))))) < l_1470) < 0x08C2L)), g_1023[0][2]), 4)) < 0xF335L);
                        g_152[0][0][2] = g_1408;
                        l_1483 = func_34(p_17, p_16, p_18, ((safe_rshift_func_int8_t_s_u(l_1478, l_1478)) & ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((g_91 | 0x16L), p_18)) <= ((-7L) != (-3L))), p_18)) & p_17)), l_1458[1][2][4]);
                    }
                    else
                    {
                        short l_1497[4] = {0L, 3L, 0L, 3L};
                        int i;
                        l_1484 = (p_17 | 0UL);
                        l_1483 = (g_152[7][0][5] >= 0x7C20L);
                        g_152[7][0][5] = ((safe_sub_func_int8_t_s_s(p_16, (g_1138 && g_2))) >= (safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(p_18, ((safe_lshift_func_int8_t_s_s(g_1079, (p_17 || (l_1478 ^ (p_19 != (p_17 || p_17)))))) ^ (-1L)))) >= 0L), l_1497[0])) || g_2), l_1484)));
                    }
                    g_152[7][0][5] = (safe_div_func_int8_t_s_s((((!func_58((!(((safe_mul_func_uint8_t_u_u(p_17, p_19)) & (safe_mod_func_uint32_t_u_u(func_34(l_1447, ((func_31(func_20((g_175[0] != (-5L)), l_1463[0][2][5], g_1138, ((((safe_rshift_func_int8_t_s_s(l_1470, p_18)) | l_1458[0][0][3]) ^ l_1462) & p_18), g_1506), p_19) ^ 65527UL) > p_16), l_1483, g_1506, l_1458[1][2][7]), p_16))) >= p_18)), l_1463[2][2][5], g_1023[2][3], l_1484, p_19)) <= l_1448[2]) > p_16), g_2));
                    if (g_256)
                        continue;
                }
                g_152[2][0][6] = (safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_1408, p_16)), g_1079)) > (p_16 <= func_48(g_256, ((((-7L) < func_67((safe_mul_func_uint16_t_u_u((((func_67(l_1448[9], (safe_mod_func_uint16_t_u_u((func_67(l_1458[1][5][0], g_1151, g_488, l_1475, g_2) & l_1517), g_73[4][3])), l_1484, p_18, g_1138) > g_675) && 0xE3L) >= 0xB0L), l_1518)), l_1447, l_1463[2][1][5], g_1023[0][2], l_1458[1][2][7])) ^ p_18) < g_675), g_948[4], g_1138, g_1151))), l_1463[2][2][4]));
                l_1484 = l_1463[1][0][5];
            }
        }
        else
        {
            int l_1523 = 1L;
            p_19 = (p_18 < p_19);
            l_1523 = (safe_add_func_uint32_t_u_u((0xE2332881L > (safe_sub_func_uint32_t_u_u(l_1523, l_1448[1]))), 0x423DA26FL));
            p_19 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((~(safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(func_31(p_16, ((func_20(p_17, (func_20(((0UL | ((safe_add_func_uint16_t_u_u(p_18, g_488)) != g_152[7][0][5])) >= l_1448[4]), l_1478, p_17, p_16, p_19) != 0xBDB1ED4FL), p_18, g_73[1][1], l_1523) >= g_1151) == 0UL)), 0x586DD4EDL)), 5)), 15))) < g_948[4]), g_1023[0][2])), 0x5E28L)), g_1151)), g_2));
            g_152[1][0][6] = (safe_lshift_func_uint16_t_u_s(g_1138, 8));
        }
    }
    else
    {
        unsigned l_1561[6] = {4294967295UL, 4294967295UL, 0xC2ED6CBEL, 4294967295UL, 4294967295UL, 0xC2ED6CBEL};
        int i;
        if (g_175[2])
        {
            unsigned char l_1550 = 0xC1L;
            int l_1574 = (-6L);
            p_19 = ((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(l_1550, (func_34((safe_mod_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(p_16, (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((p_19 & ((g_73[3][0] & ((!(safe_rshift_func_uint16_t_u_u(((!(~g_256)) >= l_1550), p_16))) < 0xD399L)) <= 0x3E85L)) ^ 9UL), g_152[6][0][7])), p_19)))) < g_1079) >= 0xB8L), l_1561[4])), p_16, g_1023[0][2], l_1518, l_1447) ^ g_948[4]))) < p_17) <= p_17) <= p_18), p_19)), 10)) > g_175[3]);
            p_19 = ((((safe_lshift_func_int8_t_s_s(p_17, (safe_mul_func_int8_t_s_s((-7L), ((safe_add_func_int16_t_s_s((~l_1550), p_16)) | (((safe_mod_func_int16_t_s_s(0xD23CL, p_16)) == 4UL) <= (safe_mod_func_int32_t_s_s((l_1550 == (l_1518 != p_17)), p_16)))))))) >= p_18) < p_19) > p_18);
            l_1574 = func_34(func_20(g_75, (1L >= (safe_mul_func_int8_t_s_s(g_152[4][0][3], (0xFEL & g_675)))), ((p_17 ^ g_152[6][0][1]) & ((+0x66C66809L) ^ g_1151)), l_1561[4], p_17), p_19, l_1518, l_1561[4], l_1518);
            l_1574 = ((safe_div_func_int8_t_s_s(1L, l_1518)) | (func_67((safe_lshift_func_uint8_t_u_u(8UL, (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((safe_div_func_int8_t_s_s(p_18, (0x6BF75844L && g_75))))) < 2L), l_1561[4])), p_19)))), g_152[3][0][1], p_16, g_73[0][2], g_175[2]) || l_1550));
        }
        else
        {
            g_152[7][0][5] = l_1561[2];
            g_152[6][0][7] = g_152[7][0][9];
        }
        p_19 = (safe_mul_func_uint16_t_u_u(p_19, l_1447));
    }
    return g_175[0];
}







static int func_20(unsigned char p_21, const unsigned short p_22, unsigned p_23, unsigned p_24, char p_25)
{
    unsigned short l_64 = 0x9B8AL;
    int l_1111[9][7][4] = {{{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}, {{0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}, {0x5B71A3EDL, 1L, 0x7FE0C423L, 1L}}};
    char l_1241 = 1L;
    char l_1270 = 0x55L;
    char l_1381[7][6][6] = {{{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}, {{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}, {{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}, {{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}, {{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}, {{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}, {{0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}, {0x77L, 0x94L, 0xEEL, 0x94L, 0x77L, 0x89L}}};
    const char l_1394 = 0x16L;
    short l_1431[8][5][2] = {{{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}, {{0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}, {0x0EA4L, 0x0021L}}};
    const short l_1443 = 0xA083L;
    unsigned short l_1444 = 0x6590L;
    int i, j, k;
    for (p_24 = 19; (p_24 > 36); p_24 = safe_add_func_uint8_t_u_u(p_24, 8))
    {
        int l_30 = 0xCF456574L;
        short l_105[8] = {9L, 0x7EF0L, 9L, 0x7EF0L, 9L, 0x7EF0L, 9L, 0x7EF0L};
        int i;
        l_30 = (safe_mul_func_int8_t_s_s(0xBDL, 0x83L));
        g_152[7][0][5] = func_31(func_34(g_2, (safe_rshift_func_uint8_t_u_u(((p_21 | ((!65535UL) != (safe_lshift_func_int16_t_s_s(g_2, 1)))) <= (g_2 & (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s((func_48((safe_sub_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((func_58(l_64, (safe_mul_func_uint8_t_u_u(func_67(l_30, (g_2 == l_30), p_22, g_2, g_2), l_30)), l_105[2], p_25, g_73[3][3]) <= l_30) == p_21), g_175[0])) <= 0x116E09BAL), l_105[2])), g_73[7][1], p_22, g_175[1], g_2) <= l_30), l_105[2])), 0x5957CC49L)))), 7)), l_105[2], g_73[0][2], g_2), l_105[0]);
    }
    if ((p_23 ^ g_948[4]))
    {
        unsigned short l_1113 = 65527UL;
        int l_1122 = 0x9B2006D9L;
        unsigned l_1150 = 0x8C4E68D1L;
        short l_1152[8][7][4] = {{{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}, {{0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}, {0x0805L, 0xA198L, 1L, 0L}}};
        int l_1166 = 1L;
        unsigned char l_1297 = 0xE9L;
        char l_1409 = (-8L);
        int i, j, k;
        for (g_75 = 0; (g_75 <= 3); g_75 += 1)
        {
            int i;
            return g_948[(g_75 + 2)];
        }
        if (((65535UL || ((((safe_sub_func_int16_t_s_s(g_675, p_25)) != p_25) & p_23) && (safe_lshift_func_uint8_t_u_s(p_22, 2)))) ^ l_64))
        {
            short l_1112 = 1L;
            int l_1195 = 4L;
            unsigned short l_1226 = 0xD929L;
            short l_1355[4][5][8] = {{{0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}}, {{0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}}, {{0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}}, {{0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}, {0L, 1L, 1L, 0xB779L, 0x2B4FL, (-8L), 5L, 0L}}};
            unsigned l_1356 = 1UL;
            int i, j, k;
            if (p_24)
            {
                unsigned char l_1136 = 0x8DL;
                char l_1139 = (-1L);
                if ((safe_sub_func_uint8_t_u_u(g_1023[4][1], (safe_mod_func_int8_t_s_s((((p_21 && func_48(l_64, p_22, p_25, ((safe_mul_func_int8_t_s_s((l_1111[7][6][1] == g_73[1][0]), l_1112)) & func_67(p_24, p_25, p_23, p_22, g_948[4])), g_152[7][0][5])) <= l_1113) != g_175[1]), l_1113)))))
                {
                    unsigned short l_1137 = 0x9FBAL;
                    for (g_1079 = 0; (g_1079 == 7); g_1079 = safe_add_func_uint32_t_u_u(g_1079, 6))
                    {
                        unsigned short l_1123 = 0xDABDL;
                        l_1122 = ((safe_div_func_int32_t_s_s(g_675, (safe_mod_func_uint8_t_u_u(func_58((g_2 < (safe_div_func_uint16_t_u_u(p_25, func_67(g_675, l_1122, func_34(l_1123, (safe_mod_func_uint8_t_u_u((0x8AL < ((safe_div_func_uint8_t_u_u((func_34((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((p_23 > (l_1136 >= l_1137)), 8)) >= 65535UL), l_1112)), l_1111[7][6][1])), 2UL)), p_21, l_1123, p_23, p_23) > l_1137), g_1023[3][1])) <= p_24)), g_1023[0][2])), g_175[3], g_2, l_1112), g_1138, p_21)))), p_25, l_1123, p_25, p_24), l_1112)))) < 0xD176L);
                        g_152[6][0][9] = l_1139;
                    }
                    l_1111[7][6][1] = (l_1122 == (safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s((p_24 || 4294967295UL), ((l_1139 > ((l_1113 <= l_1113) != 0L)) | (-5L)))), p_22)));
                }
                else
                {
                    l_1152[5][5][1] = (g_1023[4][3] <= (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(func_48(p_22, g_152[1][0][1], l_64, g_175[0], ((0x863363B9L || (g_152[7][0][5] >= (safe_sub_func_int8_t_s_s(((func_67(l_1150, l_1111[7][6][1], g_75, p_25, l_1111[7][6][1]) & 4294967295UL) | g_1151), l_1113)))) == g_152[7][0][5])), 0x56CFL)), 1UL)));
                }
            }
            else
            {
                unsigned l_1155 = 4294967295UL;
                int l_1160 = (-1L);
                short l_1193 = 0x2305L;
                unsigned short l_1216 = 0x5D82L;
                if (((safe_div_func_uint16_t_u_u(p_24, (g_1079 || l_1155))) < ((safe_sub_func_uint32_t_u_u((!g_1023[0][2]), p_24)) || p_22)))
                {
                    unsigned char l_1163 = 0xCFL;
                    l_1160 = (safe_add_func_int16_t_s_s(g_1151, g_948[4]));
                    l_1160 = (safe_mul_func_uint16_t_u_u(g_1079, (l_1163 != 9L)));
                }
                else
                {
                    int l_1188 = (-6L);
                    unsigned char l_1194 = 253UL;
                    short l_1214[6][9][4] = {{{(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}}, {{(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}}, {{(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}}, {{(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}}, {{(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}}, {{(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}, {(-3L), 0x5BA4L, 0x5B76L, 0x7D29L}}};
                    short l_1215 = (-1L);
                    int i, j, k;
                    l_1111[7][6][1] = ((((1L == 2L) >= g_91) || l_64) | ((!((safe_mod_func_uint32_t_u_u(((l_1166 != g_73[5][0]) == (safe_lshift_func_uint16_t_u_u((g_675 != ((safe_div_func_uint16_t_u_u((safe_div_func_int32_t_s_s(p_22, (safe_mul_func_uint16_t_u_u(p_22, g_675)))), p_21)) != 0xDAB27B10L)), l_1155))), g_1023[1][4])) | p_25)) > p_23));
                    for (g_675 = (-25); (g_675 > 5); g_675 = safe_add_func_int32_t_s_s(g_675, 3))
                    {
                        short l_1177 = (-1L);
                        int l_1185 = 0xD01DA56AL;
                        if (g_2)
                            break;
                        l_1185 = ((func_67(p_25, p_23, l_1177, p_21, g_1023[0][2]) | (((safe_unary_minus_func_uint16_t_u(p_25)) == (safe_div_func_int32_t_s_s(p_21, (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((4294967294UL > l_1112), p_23)) < l_1177), l_1112))))) && g_73[4][1])) || 0x4363L);
                    }
                    g_152[5][0][2] = (safe_sub_func_int16_t_s_s(p_25, 0x5738L));
                    if (((g_948[4] | (p_23 && 65526UL)) | (g_73[1][1] || ((4294967295UL > (l_1188 != (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((g_1151 & (l_1193 < func_31(l_1111[7][6][1], l_1188))) < l_1160), l_1122)), g_2)))) != p_22))))
                    {
                        unsigned l_1204 = 4294967292UL;
                        int l_1217 = 1L;
                        l_1195 = l_1194;
                        l_1166 = (safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(func_31(g_256, p_25), (p_23 > (safe_add_func_int16_t_s_s(1L, (l_1204 & (p_25 < g_2))))))), g_1079));
                        l_1111[3][0][2] = (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(l_1204)) > l_1195), (((safe_add_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(func_67(g_91, g_91, l_1214[2][6][0], l_1215, ((p_22 < (((p_23 || g_175[1]) ^ p_21) <= 1UL)) == p_22)), l_1152[5][5][1])) | g_175[1]), g_488)) & p_23) || l_1216))), 9));
                        l_1217 = l_1112;
                    }
                    else
                    {
                        unsigned short l_1218 = 65532UL;
                        l_1218 = l_1111[7][6][1];
                        return l_1112;
                    }
                }
                return l_1193;
            }
            for (p_23 = 0; (p_23 <= 51); p_23 = safe_add_func_uint16_t_u_u(p_23, 6))
            {
                unsigned l_1221[8][8] = {{4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 0x725A0653L, 0UL, 1UL, 4294967295UL, 4294967295UL}};
                unsigned short l_1234[6][2] = {{65535UL, 0x593FL}, {65535UL, 0x593FL}, {65535UL, 0x593FL}, {65535UL, 0x593FL}, {65535UL, 0x593FL}, {65535UL, 0x593FL}};
                unsigned l_1276 = 0x1BA9771AL;
                int l_1339[9] = {0x1ED00ED5L, 0L, 0x1ED00ED5L, 0L, 0x1ED00ED5L, 0L, 0x1ED00ED5L, 0L, 0x1ED00ED5L};
                int i, j;
                l_1221[0][6] = 0x84D8C757L;
                if (p_23)
                {
                    const unsigned short l_1227 = 0x9784L;
                    int l_1242[10] = {0x4A767918L, 0x02920880L, 0x4A767918L, 0x02920880L, 0x4A767918L, 0x02920880L, 0x4A767918L, 0x02920880L, 0x4A767918L, 0x02920880L};
                    unsigned short l_1253 = 0xD3E2L;
                    unsigned l_1261 = 4294967295UL;
                    int i;
                    if (((((p_22 < (((0L || (func_67(g_91, p_23, (safe_mod_func_uint8_t_u_u((p_24 ^ ((safe_div_func_int8_t_s_s(l_1195, 0xDBL)) != (l_1195 > ((l_1122 <= 4UL) ^ p_25)))), p_25)), l_1195, l_1226) <= g_675)) | g_2) != l_1227)) && 1L) > g_2) > l_1221[0][6]))
                    {
                        l_1111[7][6][1] = (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(g_1151, (func_67((1L | 1L), g_175[1], ((~(func_31(l_1112, g_1151) | g_948[4])) & (safe_mul_func_int16_t_s_s(l_64, l_1234[0][1]))), g_1079, g_2) <= 0UL))), 14));
                        l_1241 = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((p_24 == (-2L)), 1)), (l_1150 <= p_25))), 6));
                    }
                    else
                    {
                        if (l_1227)
                            break;
                        return g_1023[4][3];
                    }
                    if ((p_25 && g_488))
                    {
                        char l_1256 = 0x45L;
                        l_1242[9] = p_24;
                        l_1111[7][6][1] = (safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(func_31((safe_mul_func_int16_t_s_s(p_25, ((g_948[3] > ((safe_mod_func_uint32_t_u_u((((7L || func_58(l_1253, func_31((safe_mul_func_int16_t_s_s(l_1256, 0L)), l_1226), (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((~g_948[0]) < l_1256), l_1261)), 2)), p_22, g_1138)) == g_1023[0][2]) >= g_1138), 4294967290UL)) == p_21)) > g_73[3][1]))), g_1138), p_21)), 11));
                    }
                    else
                    {
                        return g_1023[0][2];
                    }
                }
                else
                {
                    unsigned l_1275 = 0x98F965F7L;
                    int l_1277 = 1L;
                    if ((safe_div_func_uint16_t_u_u((((0x5FB12E80L != ((safe_sub_func_int32_t_s_s(g_1023[0][2], (safe_sub_func_uint16_t_u_u(g_2, g_948[4])))) | g_152[3][0][7])) != (l_1221[0][6] || (safe_add_func_uint16_t_u_u(((((l_1270 <= (safe_mul_func_int8_t_s_s(3L, (((safe_div_func_uint16_t_u_u(func_67(l_1275, g_948[4], l_1276, l_1270, l_1226), p_21)) != g_1023[0][2]) == l_1277)))) || (-5L)) ^ 0x5DL) < p_22), 9L)))) == 65527UL), p_25)))
                    {
                        const unsigned char l_1294[1][1][7] = {{{0x3FL, 0x3FL, 6UL, 0x3FL, 0x3FL, 6UL, 0x3FL}}};
                        int i, j, k;
                        l_1277 = 1L;
                        l_1111[7][6][1] = ((safe_mod_func_int8_t_s_s((func_58(p_24, (safe_sub_func_uint32_t_u_u(8UL, p_21)), (safe_add_func_int8_t_s_s(0xDFL, (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_175[0], (0xFFFAL >= (safe_mod_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(1L, (safe_add_func_uint16_t_u_u(l_1270, (((~g_948[5]) & 0x70L) >= l_1294[0][0][3]))))) <= g_91) && 0xA55DF36EL), l_1221[1][3]))))), g_91)))), g_2, g_175[2]) <= 0x4DB0L), l_1275)) && g_256);
                        g_152[7][0][5] = ((func_58(l_1234[0][0], (safe_add_func_uint8_t_u_u(func_48((l_1234[0][1] == (l_1152[5][5][1] != l_1297)), g_1151, l_1221[0][6], g_2, g_1023[0][3]), l_1221[2][7])), g_1151, p_21, g_175[0]) > p_23) <= g_175[0]);
                    }
                    else
                    {
                        int l_1298 = 0L;
                        l_1298 = g_73[5][1];
                        if (g_152[7][0][4])
                            break;
                    }
                    l_1111[7][6][1] = (safe_mul_func_uint16_t_u_u(g_152[1][0][8], (safe_sub_func_uint8_t_u_u(g_152[6][0][7], 0xDCL))));
                    for (p_25 = (-1); (p_25 <= 5); p_25 = safe_add_func_uint32_t_u_u(p_25, 5))
                    {
                        short l_1307 = 3L;
                        int l_1320 = 0xDD273FF1L;
                        l_1195 = g_175[3];
                        l_1307 = (safe_lshift_func_uint16_t_u_u(2UL, 4));
                        l_1320 = (l_1112 | (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_1297 == ((((((safe_rshift_func_uint16_t_u_u(func_48(((safe_mul_func_int16_t_s_s(((p_23 >= (g_1079 <= (l_1307 == g_2))) ^ (((safe_add_func_uint32_t_u_u(8UL, ((~0xFFL) & g_2))) >= l_1241) >= l_1307)), p_23)) < l_1270), p_22, p_21, p_25, l_1226), 0)) != g_948[4]) != p_21) & 1UL) >= 0x597AC0D8L) < p_24)), p_23)), 0UL)));
                        g_488 = (safe_rshift_func_int8_t_s_s((g_948[4] | (safe_add_func_uint16_t_u_u(p_24, g_675))), 2));
                    }
                    l_1339[8] = (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_23, 0x7DA6L)), (safe_mul_func_int8_t_s_s(func_48(p_22, (safe_lshift_func_uint16_t_u_s(p_25, (safe_add_func_int16_t_s_s(((p_25 <= 0xAF9FL) <= ((safe_add_func_int32_t_s_s(func_48(p_24, p_22, g_1023[0][2], g_175[0], g_1023[0][2]), g_1023[0][2])) == 0x9648L)), 0L)))), g_1023[0][2], p_21, p_24), 1UL)))), p_22));
                }
                return l_1226;
            }
            for (g_256 = 3; (g_256 >= 0); g_256 -= 1)
            {
                short l_1354 = 0x7028L;
                const unsigned l_1357 = 4294967294UL;
                int i;
                l_1111[7][6][1] = (((((((g_175[g_256] != l_1112) && (+0xF992L)) <= p_22) | ((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(((((g_488 | p_23) >= (safe_add_func_uint32_t_u_u(func_67((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((safe_add_func_int32_t_s_s(p_25, (func_67(p_21, ((safe_lshift_func_int16_t_s_u((func_67(func_67(func_67(l_1354, l_1355[1][1][6], l_1195, l_1122, g_1151), l_1297, g_73[0][3], g_175[0], g_1023[0][2]), g_73[6][0], g_175[g_256], l_1356, g_152[7][0][5]) | l_1226), 10)) & p_21), l_1112, p_21, p_21) | l_1357))) >= g_675), g_1151)), 3)), l_1113, g_73[5][0], l_1226, g_1023[4][4]), p_23))) > g_948[1]) < 0xACE95B7EL), 1UL)), g_675)) == p_21)) | 0x75L) & p_21) < 3L);
                for (g_488 = 0; (g_488 >= 0); g_488 -= 1)
                {
                    int l_1360 = 0x10740581L;
                    l_1360 = (safe_mul_func_uint16_t_u_u(l_1270, (((0x437EL == (g_73[5][0] ^ (p_21 != 0xBF94L))) | func_67(g_73[6][1], l_1357, g_1151, func_67(((g_1151 || 1L) | g_152[7][0][5]), g_175[0], g_488, g_948[5], g_488), p_21)) == 0x8993BD8FL)));
                    for (l_1150 = 0; (l_1150 <= 0); l_1150 += 1)
                    {
                        int i, j, k;
                        g_152[(l_1150 + 6)][g_488][(g_488 + 9)] = func_67((((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((((((safe_add_func_int8_t_s_s(((safe_div_func_int16_t_s_s(0x5163L, 0xCBCDL)) | (safe_div_func_int16_t_s_s(0x6AD9L, 0xDA53L))), func_67(g_152[(g_488 + 1)][g_488][(g_488 + 5)], g_152[(g_488 + 1)][g_488][(g_488 + 9)], (safe_add_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((~g_152[(l_1150 + 3)][g_488][(g_488 + 7)]), (safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0xDB09L, g_152[(g_256 + 2)][g_488][(l_1150 + 6)])), g_1023[0][2])))), l_1355[1][1][6])) < g_175[0]), l_1111[7][1][3])), l_1195, l_1357))) && p_22) == l_1150) > g_152[3][0][7]) | g_488), 3)) < l_1381[1][4][0]) != p_25), l_1111[5][4][0])) <= p_25) >= 0xEEL), l_1112, g_948[3], l_1356, g_256);
                        g_152[(g_488 + 1)][g_488][(g_488 + 5)] = (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((p_25 >= (p_22 != (0x54L >= ((safe_mul_func_int8_t_s_s(p_25, (g_152[7][0][5] != p_24))) & func_67(((safe_add_func_uint16_t_u_u(0x5E12L, (((p_22 != (l_1111[7][5][0] && l_1112)) >= l_1195) || 0x8479CBC8L))) >= g_256), g_73[7][1], g_152[5][0][1], g_2, p_25))))) != p_23), 7UL)), 6));
                        g_152[6][0][7] = g_675;
                    }
                }
            }
            l_1122 = (5UL != func_31((0x42287313L >= p_23), (l_1152[5][6][1] && g_75)));
        }
        else
        {
            short l_1407 = 0xC6DEL;
            g_488 = ((((safe_mod_func_int8_t_s_s(((p_23 < (safe_lshift_func_int16_t_s_u(((l_1394 > l_1297) < (((safe_mul_func_int16_t_s_s(l_1122, ((g_256 ^ (g_175[0] > ((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u(0UL, (safe_add_func_int32_t_s_s(((((func_67(g_175[0], p_22, l_1407, g_1408, g_2) < 0x45BF487CL) == 0x5F246A70L) < g_175[0]) >= l_1111[3][1][2]), p_24)))) <= l_1407) && g_152[7][0][5]), l_1409)) == l_1407) >= l_1113), p_22)) | 250UL))) & 0L))) || l_1152[6][6][0]) == l_1166)), p_21))) < 4L), p_22)) > p_25) == l_1166) ^ l_1407);
            l_1111[5][3][2] = l_1381[5][1][3];
        }
    }
    else
    {
        unsigned short l_1412 = 0x9517L;
        l_1111[7][6][1] = (((safe_sub_func_int32_t_s_s((l_1412 < 4294967295UL), (l_1412 && l_1412))) && (4294967295UL != (safe_sub_func_uint16_t_u_u(65529UL, ((safe_add_func_uint8_t_u_u((1UL == (safe_rshift_func_int8_t_s_u(func_58((safe_rshift_func_int8_t_s_u((((safe_div_func_uint8_t_u_u(253UL, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(p_25, g_1151)), g_175[1])) != p_25) == p_25), l_1394)) | (-8L)), 0x343BL)))) || l_1431[4][3][0]) >= 0L), l_1412)), p_22, l_1412, p_25, p_21), 0))), 255UL)) > p_21))))) > l_1394);
        l_1111[7][6][1] = p_23;
        g_152[7][0][5] = (0xD6L & (safe_mul_func_int8_t_s_s(func_34(p_22, l_1431[7][1][1], (+(((safe_lshift_func_uint8_t_u_u(func_48((p_22 ^ func_67(((safe_add_func_int8_t_s_s((((((g_91 && ((safe_mod_func_uint32_t_u_u(g_488, ((p_22 ^ ((safe_unary_minus_func_uint16_t_u((((~(g_488 >= (safe_mul_func_uint8_t_u_u(((func_58(p_25, g_152[7][0][1], g_256, l_64, g_1079) != 0x36A2L) | l_1412), 0x44L)))) <= 0xF46A6A8FL) || g_175[0]))) & 0xF82EL)) ^ g_675))) && 4294967295UL)) || 0xCB28L) | p_22) || p_25) || g_948[3]), l_1241)) > l_1443), g_1138, g_488, l_64, p_22)), p_22, g_488, p_25, l_1444), l_1412)) >= (-1L)) && g_91)), g_73[7][3], g_1023[0][2]), g_1023[0][2])));
    }
    return g_1023[1][2];
}







static int func_31(char p_32, int p_33)
{
    const char l_765 = 9L;
    int l_848[4][7][9] = {{{(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}}, {{(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}}, {{(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}}, {{(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}, {(-1L), 0x0955439DL, (-1L), 0x2532375EL, 0xF1674504L, 0xD229D081L, (-1L), 0x7B8A3C27L, 0x321D2689L}}};
    char l_914 = 0L;
    int l_1006 = 0xE56C6E81L;
    unsigned l_1015 = 0x3A637DC8L;
    char l_1021[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1021[i] = (-4L);
    for (g_91 = 0; (g_91 > 35); g_91 = safe_add_func_int16_t_s_s(g_91, 5))
    {
        g_488 = g_152[7][0][5];
    }
    g_152[7][0][4] = (safe_mul_func_int16_t_s_s(p_33, (l_765 < (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_765, func_48(((safe_mod_func_int16_t_s_s(((~(safe_lshift_func_int16_t_s_u(func_34(g_75, g_73[5][0], p_33, l_765, l_765), 8))) > 0xF7L), l_765)) & 0xB6L), p_33, p_33, g_675, p_33))), g_175[0])))));
    if (g_675)
    {
        unsigned short l_835 = 0x35EFL;
        unsigned l_841[3][6][9] = {{{0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}}, {{0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}}, {{0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}, {0x2532A272L, 0x2532A272L, 0UL, 0x36D15089L, 0x4F19FA7DL, 0x36D15089L, 0UL, 0x2532A272L, 0x2532A272L}}};
        int l_907[1];
        unsigned char l_969 = 0xB8L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_907[i] = 0L;
        if ((~g_152[7][0][5]))
        {
            unsigned l_788 = 0UL;
            unsigned l_832 = 0xA933919DL;
            unsigned l_833 = 0xC0B7E748L;
            int l_853 = 0x2432A7D4L;
            if ((((+(safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_675 > (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_765, ((safe_sub_func_uint16_t_u_u(p_32, p_32)) | (l_788 || ((safe_lshift_func_int16_t_s_u(func_34((safe_div_func_uint16_t_u_u(func_58(g_75, p_32, ((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(g_91, (safe_mod_func_int16_t_s_s((0x8D0EL <= g_91), 0x021CL)))) && g_675), g_75)) && (-9L)), g_675, g_175[0]), p_32)), l_765, g_73[7][0], l_788, g_175[1]), 10)) || (-1L)))))), l_788)), l_765))), p_33)), p_32)), g_175[0]))) && l_765) | 0xBEF4L))
            {
                return p_32;
            }
            else
            {
                int l_834 = 0x548EEA04L;
                p_33 = 0x355EA49AL;
                for (l_788 = 0; (l_788 <= 0); l_788 += 1)
                {
                    p_33 = 0L;
                    for (g_675 = 0; (g_675 >= 0); g_675 -= 1)
                    {
                        return g_256;
                    }
                }
                if (g_152[3][0][7])
                {
                    unsigned l_840 = 0x3B26D125L;
                    for (g_488 = 3; (g_488 >= 0); g_488 -= 1)
                    {
                        int i;
                        p_33 = (func_67((safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((((g_175[g_488] > func_58((+((safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((g_175[g_488] | (safe_rshift_func_int8_t_s_s((-6L), (safe_div_func_uint8_t_u_u(func_67((safe_mod_func_int32_t_s_s(func_58((safe_div_func_int8_t_s_s(l_765, (safe_lshift_func_uint16_t_u_s(65532UL, (safe_mul_func_uint16_t_u_u(g_175[0], (~(((safe_div_func_int32_t_s_s(0L, (safe_unary_minus_func_uint16_t_u((((safe_lshift_func_uint16_t_u_u((!(p_33 == (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0x9EL, l_832)), p_32)))), l_833)) || l_834) > g_488))))) | g_73[2][2]) & 0L)))))))), g_175[g_488], g_675, g_152[7][0][5], l_834), l_835)), g_675, l_835, g_175[3], l_765), g_175[3]))))) > p_33), 3)), 65528UL)), g_488)) & g_175[g_488]), 0x91L)) > 0xC853L)), g_675, p_32, l_835, g_675)) <= p_33) & g_488), 0xD4F4L)) ^ l_832), 4294967295UL)), p_33, p_32, g_175[0], p_32) >= 4294967295UL);
                        g_152[4][0][9] = 0xC77E0D4BL;
                        p_33 = (safe_sub_func_uint8_t_u_u(0xCDL, 255UL));
                    }
                    if ((1UL ^ (!func_58((g_152[7][0][5] <= (7UL < (g_175[1] | g_256))), l_840, ((func_67(l_841[0][3][3], g_75, (safe_lshift_func_uint8_t_u_u((l_765 || (-9L)), 5)), g_152[7][0][5], p_33) & p_32) || p_32), p_33, l_832))))
                    {
                        unsigned l_846 = 0UL;
                        int l_847 = 0x2F542A8CL;
                        l_846 = (((safe_rshift_func_int8_t_s_u(p_32, 2)) & l_840) || (l_835 | p_32));
                        l_847 = g_256;
                        return l_765;
                    }
                    else
                    {
                        int l_860 = (-1L);
                        l_848[2][5][4] = p_32;
                        l_853 = ((safe_mod_func_int16_t_s_s(g_75, g_256)) < (((((((safe_add_func_uint8_t_u_u(l_832, p_32)) > g_175[1]) >= (g_152[7][0][5] < 0x6E3C0EE9L)) | l_840) >= 1UL) > p_33) & p_33));
                        l_860 = ((((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(0x14133CB6L, (2UL && (l_833 ^ ((g_152[1][0][1] | func_67(g_73[0][3], (~g_175[0]), (safe_div_func_int16_t_s_s(((g_675 <= (((g_175[0] >= (~250UL)) | 0x0F81C155L) && l_848[0][3][4])) || g_256), l_834)), g_256, g_175[0])) & 0x831DL))))) > p_32) == 0x5CL), g_152[7][0][5])) > g_73[6][3]) > g_152[4][0][4]) < l_848[0][1][7]);
                    }
                    p_33 = (safe_mul_func_int16_t_s_s(0x378BL, ((safe_sub_func_uint16_t_u_u(((g_675 ^ (l_848[2][5][4] == 0xB6L)) == (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_33 && g_91), (safe_lshift_func_int16_t_s_u(g_488, 11)))), 0xF5L)), p_32))), 0xE44CL)) > p_32)));
                    p_33 = ((safe_add_func_uint32_t_u_u(g_175[0], g_256)) <= p_33);
                }
                else
                {
                    int l_890 = (-2L);
                    for (l_834 = 0; (l_834 <= 3); l_834 += 1)
                    {
                        int i;
                        p_33 = (!(safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_175[l_834], 5)), (safe_mul_func_int16_t_s_s(0xAF43L, p_33)))));
                    }
                    p_33 = g_175[0];
                    g_152[7][0][5] = 4L;
                    for (l_853 = 0; (l_853 == (-28)); l_853--)
                    {
                        l_848[3][1][1] = ((0xA90F6A65L >= 0UL) & func_48(p_33, p_33, ((safe_lshift_func_int16_t_s_u(0x46DAL, (((safe_sub_func_uint16_t_u_u(0xE8A0L, ((p_32 || func_67((l_833 && l_765), g_175[0], p_33, g_2, g_256)) ^ p_33))) ^ 1UL) && 0xA1L))) != l_834), p_32, g_73[7][1]));
                        g_152[7][0][5] = (~(+func_34(g_256, (p_33 ^ (((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(p_32)), 0)) || func_67(p_32, g_175[0], l_890, p_33, (l_890 <= (safe_add_func_int8_t_s_s((((g_175[1] != p_33) < (-5L)) <= g_175[0]), 253UL))))) | 0L)), p_33, l_834, g_73[7][3])));
                    }
                }
            }
            g_488 = l_853;
            if ((((safe_mod_func_uint32_t_u_u(func_34((p_33 ^ g_175[2]), (~func_34((~((safe_mul_func_int8_t_s_s((-6L), (((g_152[6][0][8] != func_67(p_32, (safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((g_488 | (safe_mul_func_int16_t_s_s(g_675, 1UL))), func_67((~g_175[0]), g_175[1], l_841[0][3][3], p_32, g_256))) | l_835), 0x32L)), g_152[5][0][6], l_848[3][4][0], l_848[2][4][4])) <= p_32) > g_175[2]))) & l_765)), l_848[2][3][7], l_841[0][3][3], l_848[2][5][4], p_32)), p_33, g_175[2], g_73[7][3]), p_33)) >= l_853) > p_32))
            {
                l_907[0] = (safe_mul_func_uint8_t_u_u(((g_91 <= (safe_mod_func_uint32_t_u_u(0x00D86BC9L, p_33))) != 1L), g_152[7][0][5]));
                for (l_835 = 13; (l_835 == 45); ++l_835)
                {
                    if (p_33)
                        break;
                    l_907[0] = (l_848[2][5][1] || p_33);
                    return g_488;
                }
            }
            else
            {
                l_853 = ((safe_mul_func_int8_t_s_s(l_835, (func_58(l_841[1][0][5], p_33, ((l_833 <= ((safe_mul_func_int16_t_s_s(0x039DL, (-1L))) <= (~(1L > l_788)))) ^ func_48(l_853, l_765, g_175[0], p_33, g_675)), l_914, p_33) <= p_32))) && g_256);
            }
            g_152[2][0][7] = (safe_mod_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(g_175[0], (safe_mul_func_uint16_t_u_u(l_832, (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((!g_152[7][0][5]), ((l_848[1][6][2] == ((~g_152[2][0][4]) <= ((safe_add_func_uint16_t_u_u(0xD0EDL, l_841[0][3][3])) < (safe_mul_func_uint16_t_u_u(g_152[7][0][5], (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((-1L), g_175[0])), l_907[0])), 1)) & 8L) >= g_91)))))) || l_848[0][3][7]))), 0x6F0C5091L)), p_33)))))) > l_841[0][3][3]) > l_788), 0x4ACD14E7L));
        }
        else
        {
            int l_937 = 2L;
            int l_961 = 0x942C99FDL;
            unsigned l_1007 = 7UL;
            p_33 = (l_937 <= (safe_rshift_func_int16_t_s_s((!l_841[2][0][5]), 8)));
            if ((safe_sub_func_uint8_t_u_u((g_256 ^ p_33), (((safe_rshift_func_int8_t_s_u((-5L), 5)) ^ (func_67(((safe_div_func_uint16_t_u_u(p_33, (g_488 || func_67(l_848[0][4][6], g_91, (l_841[0][2][3] < (((safe_mod_func_int32_t_s_s((255UL <= l_937), l_765)) & p_32) | 0x7C86L)), g_675, g_91)))) | g_2), p_32, g_175[1], p_32, g_948[4]) <= 0x0EB6L)) >= 0x470CB926L))))
            {
                for (g_75 = 0; (g_75 < 36); g_75 = safe_add_func_int16_t_s_s(g_75, 5))
                {
                    p_33 = (safe_unary_minus_func_uint8_t_u(g_75));
                }
                return g_175[0];
            }
            else
            {
                char l_960 = 0x5FL;
                l_961 = (safe_mod_func_uint8_t_u_u(func_58(p_32, g_675, (safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_841[0][3][3], ((g_152[6][0][6] == g_152[7][0][5]) && ((safe_mul_func_int8_t_s_s(0x15L, func_67(l_907[0], l_960, p_33, l_907[0], p_32))) != p_33)))), g_73[3][2])), p_33, l_937), l_937));
            }
            for (g_256 = 11; (g_256 != (-20)); --g_256)
            {
                int l_964 = 0L;
                int l_970 = 0L;
                l_848[2][5][4] = g_91;
                if (l_964)
                    break;
                l_970 = ((func_67(p_32, g_175[0], p_32, ((l_914 < ((safe_rshift_func_uint8_t_u_s(p_32, (safe_rshift_func_uint16_t_u_u(((((l_841[0][4][4] <= l_907[0]) && l_969) < 0x94D2L) & p_33), 10)))) & 0x25C4CD36L)) && g_152[7][0][5]), l_961) > (-1L)) || l_964);
                if ((func_67(g_152[7][0][5], (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((func_67(l_907[0], g_75, p_33, (+2UL), ((((((((0x59L > (g_175[0] != (((g_488 <= p_32) || g_675) > l_848[2][5][4]))) < p_33) || l_907[0]) != 0xCEC629C6L) > 4294967287UL) <= 0x10F6BEEFL) || g_948[3]) != 0x0DAAL)) & 0x28668487L), 0x0D1E5700L)), p_33)), g_152[6][0][8], g_2, g_256) || 3UL))
                {
                    p_33 = (safe_add_func_uint16_t_u_u((l_970 && (safe_sub_func_uint16_t_u_u(p_32, 0xE55DL))), ((((safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((+(!((safe_rshift_func_int16_t_s_u((l_907[0] > (p_32 == (safe_add_func_int16_t_s_s(8L, ((g_175[0] | (safe_mod_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(255UL, l_964)), p_33)) <= p_33) || 0UL) <= p_33), g_152[7][0][5]))) < g_152[7][0][5]))))), 13)) == g_91))) & 4294967293UL), p_33)), g_152[6][0][9])) | g_175[0]) && p_32) != l_765)));
                    p_33 = (safe_unary_minus_func_uint8_t_u(g_91));
                    for (l_964 = 0; (l_964 <= 3); l_964 += 1)
                    {
                        int i, j;
                        g_488 = 0x43294D2AL;
                        p_33 = (((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((g_73[(l_964 + 4)][l_964] != g_73[(l_964 + 2)][l_964]), ((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(func_67(p_33, ((safe_div_func_int8_t_s_s((func_67(func_67(g_256, (func_67((0xA1L | p_33), p_33, l_964, (p_32 & l_970), p_32) >= g_73[(l_964 + 4)][l_964]), g_948[5], l_914, l_848[3][3][3]), p_32, g_2, g_488, g_175[1]) & g_488), l_1006)) != p_33), l_914, g_675, l_1007), 1)), g_948[1])), 0x5DL)) ^ g_488))), p_32)) == (-1L)) & p_32);
                        g_152[0][0][7] = p_32;
                        l_907[0] = g_73[(l_964 + 4)][l_964];
                    }
                }
                else
                {
                    for (g_675 = 3; (g_675 >= 0); g_675 -= 1)
                    {
                        l_848[3][4][1] = 0x77C2036DL;
                    }
                }
            }
        }
    }
    else
    {
        short l_1010 = 1L;
        g_488 = (g_152[7][0][5] != (((l_765 | p_33) || g_75) >= (((safe_mul_func_uint16_t_u_u(g_91, l_1010)) > p_33) || (safe_mod_func_int16_t_s_s(g_175[0], g_675)))));
    }
    if (((((p_33 & (safe_sub_func_int16_t_s_s(g_152[5][0][8], p_33))) != l_1015) < (-4L)) | l_848[2][5][4]))
    {
        char l_1020 = 1L;
        short l_1042[3][2][8] = {{{0xB8F7L, 0x52C7L, 0x3224L, 0x52C7L, 0xB8F7L, 0xCAA8L, 0xB8F7L, 0x52C7L}, {0xB8F7L, 0x52C7L, 0x3224L, 0x52C7L, 0xB8F7L, 0xCAA8L, 0xB8F7L, 0x52C7L}}, {{0xB8F7L, 0x52C7L, 0x3224L, 0x52C7L, 0xB8F7L, 0xCAA8L, 0xB8F7L, 0x52C7L}, {0xB8F7L, 0x52C7L, 0x3224L, 0x52C7L, 0xB8F7L, 0xCAA8L, 0xB8F7L, 0x52C7L}}, {{0xB8F7L, 0x52C7L, 0x3224L, 0x52C7L, 0xB8F7L, 0xCAA8L, 0xB8F7L, 0x52C7L}, {0xB8F7L, 0x52C7L, 0x3224L, 0x52C7L, 0xB8F7L, 0xCAA8L, 0xB8F7L, 0x52C7L}}};
        int i, j, k;
        for (g_75 = 0; (g_75 == 32); g_75++)
        {
            g_488 = (((safe_sub_func_int32_t_s_s(l_1020, (l_1021[0] != (safe_unary_minus_func_int16_t_s(p_32))))) == l_1020) && 0UL);
            g_152[7][0][4] = g_73[7][0];
        }
        if (func_34(g_175[0], g_1023[0][2], l_1020, l_1021[2], ((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((l_1015 & 0xE3E1L), p_33)), 4)) || ((((safe_add_func_int32_t_s_s((p_33 >= 0x0EECAF8FL), 4294967289UL)) == 255UL) && 0x13L) != g_2))))
        {
            char l_1030[8] = {1L, (-6L), 1L, (-6L), 1L, (-6L), 1L, (-6L)};
            short l_1041 = 0x3633L;
            int i;
            p_33 = (func_58(g_91, ((g_175[3] ^ l_1030[5]) && g_1023[1][0]), (p_32 > (g_175[0] && g_1023[0][2])), g_948[2], l_1021[0]) < l_1020);
            g_152[7][0][5] = func_58(p_33, (safe_sub_func_int16_t_s_s((l_914 & p_32), (safe_div_func_uint16_t_u_u(g_175[2], func_58(p_33, (~((safe_div_func_int32_t_s_s(g_152[7][0][5], (safe_lshift_func_int8_t_s_u(g_675, 2)))) & func_67((l_1041 >= (func_67(l_1015, l_1041, l_848[0][6][3], l_1042[2][1][7], g_1023[0][2]) > g_675)), g_1023[0][2], l_1015, g_175[0], g_256))), g_948[4], g_1023[4][4], l_848[2][5][4]))))), p_32, l_1006, l_1020);
        }
        else
        {
            unsigned l_1064 = 4294967295UL;
            int l_1100[9] = {0x253D3661L, 0x5753D939L, 0x253D3661L, 0x5753D939L, 0x253D3661L, 0x5753D939L, 0x253D3661L, 0x5753D939L, 0x253D3661L};
            int i;
            p_33 = (safe_unary_minus_func_uint32_t_u((func_48(g_73[7][2], ((g_75 || g_75) != g_2), l_1021[0], ((((safe_rshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(0UL, (safe_lshift_func_int8_t_s_s(((0x07D9L < (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_1042[1][0][0] | ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_175[2] & g_75), 2)), p_33)) != l_1021[0]), 4)), 0xCBB2L)) > l_1042[0][1][5])), g_948[4])), g_2)) || p_33), g_152[7][0][5]))) != (-7L)), g_1023[0][4])))) && l_1042[2][1][7]), 15)) >= 0x0FB5885DL) || 1L) > l_1064), p_33) ^ 0x1EE71561L)));
            p_33 = (safe_mul_func_int8_t_s_s((((~(safe_rshift_func_int16_t_s_s(g_75, g_948[4]))) && (!(safe_add_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(0xC6E0L, (((((safe_rshift_func_int16_t_s_u((g_488 <= (safe_add_func_int16_t_s_s((g_175[0] <= ((0x8C096010L != g_256) ^ (((g_948[3] > (1UL >= l_765)) >= 1L) ^ l_1064))), 0x3121L))), g_73[7][0])) <= 0x658AL) < g_1079) || (-6L)) & g_1079))) & 0xB2B239BDL), p_32)))) >= p_32), g_73[4][3]));
            g_488 = ((l_1021[0] <= func_67(g_2, p_32, l_1064, p_32, l_1042[0][1][1])) | ((safe_sub_func_int16_t_s_s(((0x10L != (safe_add_func_uint8_t_u_u(l_1006, g_175[0]))) ^ p_33), 0x2052L)) ^ g_948[4]));
            l_1100[2] = ((safe_mul_func_uint8_t_u_u((!((safe_mod_func_int16_t_s_s(p_33, (safe_div_func_uint32_t_u_u(0x9E6F7500L, p_32)))) || p_32)), ((safe_rshift_func_uint16_t_u_u(0x25CCL, 14)) || (safe_add_func_int16_t_s_s(l_848[2][5][4], (safe_lshift_func_uint8_t_u_u((l_1042[2][1][5] & (-1L)), 2))))))) <= (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((-7L), l_1021[1])), 0xBCE6L)));
        }
    }
    else
    {
        return l_914;
    }
    return g_948[1];
}







static char func_34(unsigned p_35, unsigned p_36, unsigned short p_37, const unsigned p_38, short p_39)
{
    short l_497 = 0x0949L;
    unsigned l_507[9][2] = {{0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}, {0x9A4CE5BEL, 0x0F2094E8L}};
    unsigned l_652[7][4] = {{1UL, 1UL, 0UL, 0UL}, {1UL, 1UL, 0UL, 0UL}, {1UL, 1UL, 0UL, 0UL}, {1UL, 1UL, 0UL, 0UL}, {1UL, 1UL, 0UL, 0UL}, {1UL, 1UL, 0UL, 0UL}, {1UL, 1UL, 0UL, 0UL}};
    int l_662 = (-1L);
    unsigned short l_701 = 6UL;
    int l_725 = 1L;
    char l_753 = (-1L);
    int i, j;
    for (p_36 = 0; (p_36 <= 0); p_36 += 1)
    {
        int l_494 = 0x1EBC49D1L;
        unsigned char l_506[10] = {0xCFL, 1UL, 0xCFL, 1UL, 0xCFL, 1UL, 0xCFL, 1UL, 0xCFL, 1UL};
        short l_508 = (-1L);
        unsigned short l_654[8] = {0UL, 0UL, 0x7722L, 0UL, 0UL, 0x7722L, 0UL, 0UL};
        const short l_699[8] = {1L, 1L, 1L, 1L, 1L, 1L, 1L, 1L};
        unsigned l_700 = 0x13BDC996L;
        int l_711 = 5L;
        int i;
        for (g_256 = 0; (g_256 <= 0); g_256 += 1)
        {
            int l_546 = 4L;
            int l_551[10];
            int i;
            for (i = 0; i < 10; i++)
                l_551[i] = 0xBCD14D87L;
            l_494 = (g_175[(g_256 + 1)] == (func_67((safe_div_func_int8_t_s_s(((p_36 == (safe_sub_func_int8_t_s_s(l_494, g_256))) < (g_256 || (safe_mul_func_int8_t_s_s((0x5898L > l_497), (!((safe_div_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(func_67(((safe_mod_func_uint8_t_u_u(0UL, (p_36 && l_497))) < g_2), l_494, p_37, p_35, l_506[6]), g_2)), 7)) || g_75), l_507[6][0])) <= (-7L))))))), g_256)), g_175[2], g_256, p_37, g_175[0]) != 0UL));
            if (l_508)
                continue;
            for (g_91 = 0; (g_91 <= 3); g_91 += 1)
            {
                unsigned l_536 = 2UL;
                int i, j, k;
                if (g_152[(g_256 + 5)][g_256][(g_256 + 9)])
                {
                    int i, j, k;
                    g_152[7][0][5] = (safe_add_func_uint16_t_u_u(g_152[(g_256 + 4)][g_256][(p_36 + 7)], 0x2752L));
                    for (g_488 = 3; (g_488 >= 0); g_488 -= 1)
                    {
                        short l_511 = 0L;
                        g_152[7][0][5] = l_511;
                        g_152[1][0][5] = (safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(p_35, ((0xC9L & g_175[0]) || ((safe_rshift_func_int8_t_s_s(g_91, g_488)) < (safe_sub_func_uint16_t_u_u(l_511, ((safe_unary_minus_func_uint8_t_u(p_37)) & p_35))))))), (safe_add_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u((l_494 > g_175[0]), g_91)) > p_39) | g_91), l_497)))) & l_506[6]), 4294967294UL));
                    }
                    g_152[7][0][0] = 0xAFB7D94BL;
                }
                else
                {
                    short l_531 = 0xDCCEL;
                    for (p_39 = 3; (p_39 >= 0); p_39 -= 1)
                    {
                        int i, j;
                        l_531 = (safe_mod_func_int32_t_s_s(0x7C3F0AD0L, g_73[(p_36 + 4)][(p_36 + 2)]));
                    }
                    if (p_35)
                        break;
                    for (l_497 = 3; (l_497 >= 0); l_497 -= 1)
                    {
                        unsigned char l_541 = 254UL;
                        int l_547 = 0x0521CBCAL;
                        if (p_36)
                            break;
                        l_546 = (0xC982L && ((safe_div_func_uint8_t_u_u(l_507[3][0], (safe_mod_func_int16_t_s_s(l_536, (safe_mul_func_uint16_t_u_u(g_73[6][3], ((safe_mod_func_uint16_t_u_u(g_256, 0x6191L)) && l_541))))))) > ((((safe_rshift_func_int16_t_s_u((((((safe_sub_func_int8_t_s_s(g_175[0], g_488)) | g_152[(g_256 + 5)][g_256][(g_256 + 9)]) || 0x57L) >= l_541) >= g_152[5][0][1]), p_38)) != g_175[2]) ^ g_175[0]) && 0xCFF3L)));
                        l_547 = l_531;
                    }
                }
                if ((((p_35 == p_36) != (safe_div_func_int32_t_s_s((0x6EL || g_175[0]), 0x5B5A58DAL))) & 1UL))
                {
                    unsigned char l_550 = 0x5CL;
                    l_551[1] = l_550;
                }
                else
                {
                    char l_558 = 0L;
                    g_152[5][0][7] = p_37;
                    for (p_39 = 0; (p_39 <= 0); p_39 += 1)
                    {
                        int i, j, k;
                        g_152[g_256][p_39][(g_91 + 5)] = g_152[(p_39 + 3)][p_36][(g_91 + 2)];
                    }
                    for (l_546 = 0; (l_546 <= 3); l_546 += 1)
                    {
                        g_152[(g_256 + 5)][g_256][(g_256 + 9)] = (safe_mul_func_uint8_t_u_u(5UL, (0x21B4L || (safe_lshift_func_int8_t_s_s((g_91 & g_175[0]), (safe_mul_func_uint8_t_u_u((l_558 | 0xC5L), l_558)))))));
                    }
                }
                if ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(g_91, p_39)), (safe_lshift_func_int8_t_s_s((l_494 && g_488), 0)))))
                {
                    unsigned char l_567 = 255UL;
                    for (l_494 = 3; (l_494 >= 0); l_494 -= 1)
                    {
                        g_488 = g_175[0];
                        g_152[3][0][0] = p_38;
                    }
                    if (((safe_sub_func_int32_t_s_s(0xA182F894L, l_567)) <= ((((safe_mul_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s((g_91 || (((safe_rshift_func_int16_t_s_s((g_256 == (g_175[0] < (((p_39 == p_38) && g_73[5][2]) >= 0L))), l_506[6])) & g_152[(g_256 + 5)][g_256][(g_256 + 9)]) || 249UL)), 1)) == p_36) && g_152[3][0][4]), l_494)) && g_256) < p_35) ^ 5L)))
                    {
                        g_152[5][0][9] = (1UL < 0x3CL);
                    }
                    else
                    {
                        unsigned l_588 = 1UL;
                        l_588 = ((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_2, (safe_lshift_func_uint16_t_u_u(g_91, 15)))), g_175[0])) ^ 1UL) <= ((g_75 | g_91) || (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(l_567, p_37)) < (safe_div_func_uint32_t_u_u(0x56345E83L, 4294967295UL))), p_37)))) < 0xCE709775L);
                    }
                }
                else
                {
                    return g_75;
                }
                l_546 = 0x30CD328DL;
            }
        }
        g_488 = 0L;
        g_488 = p_37;
        if (((((safe_div_func_uint8_t_u_u((p_38 != ((safe_lshift_func_int16_t_s_u((0x946DCAC9L || p_35), (safe_add_func_uint8_t_u_u(func_67(g_2, p_39, g_75, (safe_add_func_int32_t_s_s((g_2 || p_36), g_175[1])), g_91), g_488)))) != l_507[2][0])), p_38)) >= l_497) && g_75) & 0xD8B3L))
        {
            unsigned l_599 = 0x77342F73L;
            unsigned l_602 = 0x9B97A563L;
            l_494 = (safe_mod_func_int8_t_s_s(func_67(p_37, (l_599 < (g_488 < (!((safe_mod_func_int32_t_s_s((l_602 || g_488), (safe_div_func_uint16_t_u_u(0x0DF9L, p_35)))) && (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((0UL >= ((g_152[7][0][5] < l_494) != p_37)), 0x6D28L)), l_497)))))), g_152[7][0][5], l_507[6][0], p_38), l_599));
            if (g_73[7][3])
                break;
        }
        else
        {
            const unsigned l_615 = 4UL;
            const unsigned short l_626 = 0UL;
            short l_698 = 0x2393L;
            l_494 = ((safe_div_func_int8_t_s_s((1L ^ l_497), ((safe_div_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((l_615 | (safe_lshift_func_uint16_t_u_s((+p_39), p_39))), g_73[3][2])), g_73[3][0])) & ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(func_48((safe_div_func_uint32_t_u_u((0x6FADL != (safe_mul_func_int16_t_s_s(((65529UL > (-1L)) <= l_507[0][1]), 65534UL))), g_2)), l_507[6][1], g_152[7][0][5], l_626, g_256), g_2)), l_615)) != l_615)))) >= g_175[0]);
            if ((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(g_175[0], (g_488 != (0x98F5L >= (safe_mod_func_int32_t_s_s(g_175[0], l_497)))))) | (safe_add_func_int8_t_s_s(func_67(((safe_mod_func_uint32_t_u_u(p_36, (4294967295UL & ((safe_mul_func_uint16_t_u_u(l_497, 0xC462L)) <= 0x2ADAL)))) && g_75), p_38, l_494, p_35, p_36), l_626))), l_626)))
            {
                unsigned char l_653[10] = {255UL, 0x2DL, 255UL, 0x2DL, 255UL, 0x2DL, 255UL, 0x2DL, 255UL, 0x2DL};
                int i;
                l_653[4] = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((((0x8A2227ABL > g_152[7][0][5]) || p_35) == func_67((safe_sub_func_uint32_t_u_u(((g_75 | 0x547C6219L) && (g_75 && (safe_add_func_uint8_t_u_u(248UL, (safe_lshift_func_int16_t_s_u(p_38, (safe_unary_minus_func_int8_t_s(((safe_mul_func_int8_t_s_s((-6L), g_152[7][0][5])) != l_626))))))))), p_35)), p_37, l_652[1][0], g_73[5][2], p_38)) & g_152[0][0][3]) == l_497) < g_488), g_175[1])), p_35)) | 0xE6L);
            }
            else
            {
                unsigned short l_661 = 0x10BEL;
                unsigned l_663 = 0xC03963A3L;
                if (p_38)
                    break;
                if (l_654[6])
                {
                    return g_73[0][0];
                }
                else
                {
                    l_662 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_615 | (func_58(p_35, g_175[0], g_152[5][0][0], p_36, (safe_sub_func_int32_t_s_s((p_35 == func_67(p_35, (!g_152[1][0][7]), l_654[6], l_654[6], l_626)), l_661))) == p_37)), p_36)), p_37));
                    for (g_91 = 0; (g_91 <= 3); g_91 += 1)
                    {
                        unsigned short l_666 = 0UL;
                        l_663 = 7L;
                        l_494 = ((safe_mul_func_uint16_t_u_u((l_666 && p_38), (p_38 <= (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((~(safe_rshift_func_int16_t_s_s(g_73[2][2], 2))), (p_39 ^ 0xF3A59868L))), (safe_mod_func_int16_t_s_s(g_675, 0x68BCL))))))) && (((p_36 > g_152[6][0][4]) && p_38) != l_666));
                        g_488 = (safe_mod_func_uint8_t_u_u(((-1L) || 0L), (p_37 | (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((0x754DL ^ ((g_73[7][1] < g_488) <= g_675)), 3)), 10)))));
                        if (p_36)
                            break;
                    }
                    for (l_661 = 0; (l_661 <= 3); l_661 += 1)
                    {
                        int i;
                        g_488 = l_654[(p_36 + 4)];
                        return g_152[3][0][0];
                    }
                }
            }
            g_152[0][0][7] = (((safe_div_func_int32_t_s_s(func_48((safe_sub_func_uint32_t_u_u((p_39 > func_67(((((safe_add_func_int8_t_s_s(g_175[2], 0UL)) ^ (safe_div_func_int8_t_s_s(((l_626 <= ((safe_sub_func_uint16_t_u_u(8UL, ((safe_rshift_func_uint16_t_u_s((p_39 && func_58((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((g_175[0] ^ (((p_38 || func_48((g_73[5][0] && l_698), g_256, p_38, l_699[0], g_73[6][0])) || 4UL) ^ l_615)) && l_700) | 0x1AE2L) || g_91), 7)), 0xA8L)), l_615, p_35, p_38, p_35)), 13)) || p_35))) >= 0UL)) ^ l_506[8]), (-1L)))) && l_615) > g_675), p_35, l_497, l_615, g_73[0][0])), 4294967291UL)), g_175[2], l_626, g_73[0][0], l_701), 0xCC4F9FF4L)) <= p_35) != l_654[2]);
            if (func_58(func_58((safe_sub_func_uint16_t_u_u(l_507[4][0], l_615)), ((func_58(l_494, p_35, l_507[1][1], p_38, (g_256 >= g_75)) >= 252UL) != g_488), p_37, p_35, g_73[1][3]), p_38, p_35, l_654[5], l_506[4]))
            {
                short l_704 = 0xCF97L;
                l_494 = (func_58(g_2, g_152[7][0][5], ((l_704 <= (+((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_39, 0x7FD4L)), g_175[2])) == (((0xE0B7027EL || ((l_506[6] | 0x18L) ^ p_39)) < p_35) == p_35)))) | 0xFFL), p_39, l_506[7]) & g_2);
            }
            else
            {
                return l_497;
            }
        }
        for (l_662 = 0; (l_662 <= 3); l_662 += 1)
        {
            short l_750 = 1L;
            unsigned char l_751 = 0UL;
            unsigned short l_754 = 0x7B58L;
            for (g_488 = 0; (g_488 <= 3); g_488 += 1)
            {
                unsigned short l_722 = 65530UL;
                for (l_497 = 0; (l_497 <= 3); l_497 += 1)
                {
                    l_494 = 0L;
                }
                l_494 = (safe_add_func_int16_t_s_s(l_711, (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0xAEB1DF84L, (safe_rshift_func_uint16_t_u_u(func_58((safe_add_func_int8_t_s_s(func_67(g_73[7][3], p_36, (l_497 ^ g_152[7][0][5]), (p_36 && ((safe_add_func_int8_t_s_s(l_722, (safe_mul_func_uint8_t_u_u(l_699[0], 6L)))) || p_37)), g_175[1]), l_507[6][0])), p_39, p_39, l_507[5][0], l_654[6]), 4)))), 6UL))));
                l_725 = 0xDAE10B3CL;
            }
            for (p_35 = 0; (p_35 <= 3); p_35 += 1)
            {
                unsigned l_752[6][5][8] = {{{0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}}, {{0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}}, {{0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}}, {{0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}}, {{0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}}, {{0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}, {0x6EED263FL, 4294967287UL, 1UL, 4294967295UL, 0x08E9E75BL, 0x78181AB6L, 0x4C370EE3L, 0xBA640A0FL}}};
                int i, j, k;
                l_725 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(0xF31FL, func_58((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((func_67(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_add_func_uint16_t_u_u(p_39, ((safe_mod_func_int16_t_s_s(g_2, l_662)) ^ (func_48((safe_add_func_uint32_t_u_u(g_152[0][0][8], ((safe_mul_func_uint8_t_u_u((func_67(((safe_add_func_uint8_t_u_u(((0xE95873EDL > 0x1D7C6551L) == (0x6EL >= ((g_256 & 0xCE2CL) ^ p_39))), p_37)) | g_675), l_750, g_175[0], p_38, p_39) != 0xBB726F75L), l_751)) ^ g_152[5][0][5]))), g_256, l_750, p_35, l_752[0][3][6]) == l_753)))) && l_752[0][0][7]) <= 1UL), 1)), p_35)) != 0xB135L), l_711, g_2, p_35, l_754) > 0L) && p_36), l_508)), 1L)), l_750, p_39, l_752[4][2][7], l_750))) || p_35), g_175[0])), p_35));
            }
            g_152[7][0][5] = g_675;
            l_725 = p_35;
        }
    }
    l_662 = (!(safe_sub_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((p_37 | p_36) >= g_175[0]), p_36)) != (g_152[4][0][6] | p_37)), g_175[0])) ^ g_152[7][0][5]), g_675)));
    return g_75;
}







static short func_48(short p_49, char p_50, int p_51, const unsigned p_52, unsigned p_53)
{
    char l_485 = (-8L);
    char l_489 = (-1L);
    g_488 = (((safe_sub_func_uint16_t_u_u(func_58(g_75, ((((-4L) ^ ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_485, g_152[3][0][8])), l_485)) != (0xF02CL >= g_2))) && 5UL) > (safe_mul_func_uint16_t_u_u(g_73[1][2], g_488))), l_485, l_489, p_53), p_49)) || l_489) > g_488);
    return l_489;
}







static int func_58(unsigned short p_59, char p_60, unsigned char p_61, int p_62, short p_63)
{
    const unsigned l_108 = 0xC76A8768L;
    int l_111 = (-1L);
    const char l_167 = 1L;
    int l_239 = 6L;
    const short l_276[4] = {0x6DC1L, 0x6DC1L, 0x6DC1L, 0x6DC1L};
    unsigned l_436 = 8UL;
    int i;
    l_111 = (0xC76BL == (safe_mul_func_uint16_t_u_u(l_108, (g_73[4][0] < (((p_63 && ((-8L) == (g_73[1][2] | l_108))) != l_108) != (safe_div_func_uint16_t_u_u((l_108 || 65535UL), g_75)))))));
    if ((safe_rshift_func_int16_t_s_s(p_60, ((safe_lshift_func_uint16_t_u_u(65531UL, l_111)) || ((p_60 & (safe_unary_minus_func_int32_t_s(((0x8EL && (safe_mul_func_uint8_t_u_u((((g_73[5][3] == g_73[4][0]) >= (p_63 > (((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(l_111, 3)) & g_91), l_111)) >= l_108) > p_60))) <= 0xF4L), 255UL))) || l_111)))) && 0L)))))
    {
        unsigned short l_137 = 0UL;
        int l_144[4] = {0x6D1EE207L, 8L, 0x6D1EE207L, 8L};
        unsigned short l_174 = 0x8C71L;
        int i;
        l_144[0] = (+(safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x4FE17DD5L, (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(0xF0D6L, (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_137, (((safe_mul_func_uint16_t_u_u(((g_73[5][1] | (g_73[4][0] & func_67(g_75, (0xDF947B41L >= ((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_62, ((p_59 > l_108) >= p_59))), g_73[1][3])) >= l_108)), p_59, l_111, l_137))) > l_108), g_73[1][0])) != p_59) && g_73[6][0]))), 0x5B53L)))), 1)))), 252UL)));
        g_152[7][0][5] = ((((p_62 < ((safe_unary_minus_func_uint8_t_u(p_62)) >= ((((safe_rshift_func_int8_t_s_u(((p_62 || (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0x4595L, 0x6471L)), func_67(func_67(p_59, p_61, p_61, g_73[4][1], l_144[0]), l_111, g_73[6][1], g_73[6][0], l_144[0])))) ^ l_144[0]), 5)) < p_60) & 0xB38435EBL) & g_2))) > 0x78L) < 0x7CAC61BAL) < p_59);
        g_152[4][0][9] = p_60;
        if (g_73[2][3])
        {
            const int l_160 = 0x91D9B9EAL;
            char l_176 = 1L;
            int l_188 = 0x1A71D37EL;
            for (p_59 = 0; (p_59 > 47); p_59++)
            {
                char l_159 = 0x11L;
                int l_187 = 0x59954026L;
                short l_224 = (-1L);
                l_144[0] = func_67(g_75, p_62, (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_75, l_159)), l_160)), ((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(g_75, g_73[2][2])), (safe_div_func_uint16_t_u_u(g_73[7][0], g_75)))) > l_108), p_63);
                if (((+l_160) && l_167))
                {
                    const unsigned short l_218 = 65527UL;
                    if (func_67(((safe_sub_func_int32_t_s_s(func_67(((-6L) < 7L), g_75, (safe_rshift_func_int16_t_s_s(l_160, (safe_lshift_func_uint8_t_u_s(0UL, 6)))), l_160, p_63), l_174)) & g_152[7][0][5]), g_152[7][0][5], g_175[0], l_159, g_73[6][2]))
                    {
                        return l_176;
                    }
                    else
                    {
                        char l_201 = 0x4EL;
                        l_188 = (safe_add_func_int8_t_s_s(p_61, (safe_lshift_func_uint8_t_u_u((func_67(func_67(g_91, g_175[0], l_144[0], ((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(0x7CL, ((safe_add_func_uint32_t_u_u((g_91 && g_175[0]), (~0xE436C4CAL))) <= g_75))), 6)) || g_175[0]), p_61), l_187, p_59, g_175[0], g_152[7][0][5]) >= g_152[3][0][3]), p_62))));
                        g_152[7][0][5] = (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_152[7][0][5], g_152[5][0][2])), p_63));
                        g_152[6][0][4] = g_175[0];
                        l_188 = func_67(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((p_61 >= 0xB0L), g_2)), 11)), (+p_62))) > func_67(l_176, (((safe_lshift_func_int8_t_s_s(l_201, 1)) < ((func_67((safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(p_62, (safe_unary_minus_func_uint16_t_u(p_61)))))), p_63, l_176, g_175[0], g_75) ^ g_175[0]) ^ p_59)) == p_59), p_63, p_63, g_152[7][0][5])), p_63, l_187, p_61, g_152[1][0][6]);
                    }
                    if (g_73[2][1])
                        break;
                    g_152[2][0][9] = (safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(func_67(p_62, (safe_mul_func_int16_t_s_s(p_62, (((safe_div_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((g_75 > l_187) == p_62), (p_59 == 4294967289UL))) >= (l_159 | ((0xA347C53AL ^ p_60) | g_75))), g_73[1][3])) & l_218) != p_60))), p_59, g_175[3], g_2), 0x65L)), p_63)) && g_75), 5));
                    l_188 = (5L <= p_63);
                }
                else
                {
                    int l_221 = 0xF753BD1BL;
                    for (g_75 = 13; (g_75 <= 3); g_75 = safe_sub_func_uint16_t_u_u(g_75, 1))
                    {
                        l_188 = 1L;
                        l_188 = (((((((l_221 >= l_160) | 1UL) == p_63) & ((safe_lshift_func_int8_t_s_s((p_62 != ((g_152[2][0][6] ^ p_61) >= 0xC7F1B259L)), 4)) >= p_60)) | l_224) || p_61) < l_108);
                    }
                    g_152[4][0][8] = ((g_175[3] | ((l_174 || (l_176 ^ l_144[3])) ^ ((((safe_rshift_func_uint8_t_u_u((0UL & g_2), 4)) | (g_152[1][0][8] ^ l_174)) == l_176) != l_224))) != (-1L));
                    if (l_167)
                        break;
                }
                l_144[0] = (((p_63 && ((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(p_63, (g_175[1] && func_67((((((p_62 || g_75) >= (((((safe_lshift_func_int16_t_s_u(g_175[1], 15)) ^ 0x0131L) && g_175[0]) > ((p_59 >= p_59) && p_59)) <= l_224)) == p_62) ^ g_75) & p_59), g_91, g_152[1][0][6], p_63, p_61)))) != 0x01185A11L) >= p_60), 15)), p_63)), p_60)) != l_239)) > g_73[7][3]) & p_61);
            }
            l_239 = g_152[7][0][5];
            g_152[0][0][0] = g_91;
            g_152[7][0][5] = (safe_rshift_func_int16_t_s_s(func_67(g_73[7][1], (safe_unary_minus_func_uint32_t_u(g_175[2])), g_2, (l_144[0] || l_176), l_111), 12));
        }
        else
        {
            unsigned l_255 = 0x232B6548L;
            l_144[0] = ((p_63 == (1UL || (safe_div_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(l_239, func_67(l_108, (safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((254UL > (0x02ABL ^ g_175[0])) > (safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((+func_67(g_75, l_144[0], g_91, l_255, p_61)), p_61)), 1L))), 2)), 0xFCL)), g_73[1][0], g_256, l_255))) > (-1L)), l_144[3])))) && 0xCC8E27A5L);
            l_239 = (p_62 != 0x1FBBC294L);
            l_239 = (p_63 <= (g_91 & g_152[1][0][9]));
            l_111 = 1L;
        }
    }
    else
    {
        int l_265 = 1L;
        int l_328 = 0x64AD00B6L;
        l_111 = (l_167 ^ func_67((~((safe_lshift_func_int16_t_s_s(p_60, 14)) || l_167)), ((0x1CL ^ (safe_mod_func_uint16_t_u_u(0x31C9L, g_175[0]))) && func_67(((((safe_mul_func_uint8_t_u_u(p_60, ((safe_rshift_func_uint16_t_u_u(p_59, (g_73[7][2] != 0L))) == g_175[0]))) != 0xDDD3L) || p_63) || l_111), l_265, p_62, l_108, g_2)), g_152[7][0][5], p_62, p_61));
        l_239 = 0x610FE71CL;
        for (g_75 = 0; (g_75 != 17); ++g_75)
        {
            unsigned l_293[4][9][3] = {{{0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}}, {{0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}}, {{0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}}, {{0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}, {0x583C0778L, 0xB469B12FL, 0x3A3FB9E2L}}};
            const unsigned char l_299 = 1UL;
            int l_302[10] = {0x8495D608L, 0x04A6E0F1L, 0x8495D608L, 0x04A6E0F1L, 0x8495D608L, 0x04A6E0F1L, 0x8495D608L, 0x04A6E0F1L, 0x8495D608L, 0x04A6E0F1L};
            char l_463 = 0x2AL;
            int i, j, k;
            for (p_59 = 25; (p_59 == 19); p_59 = safe_sub_func_int32_t_s_s(p_59, 7))
            {
                short l_283 = 0x1F4CL;
                unsigned char l_341 = 5UL;
                if (g_175[1])
                {
                    unsigned l_323 = 1UL;
                    if ((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((!l_276[1]), (safe_unary_minus_func_uint16_t_u((p_63 && 0xC8L))))), (0x1DE6E2E7L > p_59))), (!(g_152[2][0][8] < (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_256, g_152[7][0][5])), (safe_unary_minus_func_uint8_t_u(1UL)))))))))
                    {
                        return l_283;
                    }
                    else
                    {
                        unsigned char l_284 = 246UL;
                        l_284 = p_62;
                        l_293[1][3][1] = ((((p_59 & (safe_add_func_int8_t_s_s(g_91, p_62))) | (((safe_mul_func_int16_t_s_s(p_63, l_276[1])) > g_175[0]) & (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((p_62 != p_61), l_283)), 0x99L)))) == g_175[0]) > 0x7D9CDFD7L);
                        if (g_175[0])
                            break;
                        l_302[0] = (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(g_152[7][0][8])), l_299)), (p_59 | ((0x2FL != (l_283 != p_63)) >= (safe_add_func_int32_t_s_s(l_167, g_73[6][0]))))));
                    }
                    g_152[7][0][5] = (safe_mul_func_uint16_t_u_u(g_73[4][0], (safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(l_283, g_256)) < (safe_div_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_239, (p_63 ^ ((g_2 != (safe_div_func_int16_t_s_s((!(l_323 < g_73[3][1])), l_283))) && l_323)))), g_256))), (-9L))), l_302[0])), p_59)) && p_60), g_75)), 0xEDL))));
                    return l_323;
                }
                else
                {
                    int l_332 = (-1L);
                    if (l_265)
                        break;
                    if ((((l_265 || (g_152[7][0][5] || p_63)) != (safe_add_func_uint32_t_u_u(l_293[0][2][1], 8UL))) ^ ((safe_div_func_uint32_t_u_u(l_167, (g_256 && 0x45E2L))) && 65534UL)))
                    {
                        l_328 = p_60;
                    }
                    else
                    {
                        unsigned char l_329 = 0x6CL;
                        l_332 = ((l_329 || (p_59 >= (p_63 > l_111))) < ((safe_mul_func_int8_t_s_s(l_329, p_62)) && 0x3644L));
                    }
                    if (((safe_div_func_uint16_t_u_u(p_60, 65534UL)) && (safe_rshift_func_uint16_t_u_u((l_302[0] > p_59), 9))))
                    {
                        if (p_59)
                            break;
                        l_111 = (safe_mod_func_int8_t_s_s(p_60, ((p_61 || g_75) & p_63)));
                        l_328 = (p_61 && 4294967295UL);
                    }
                    else
                    {
                        unsigned l_346 = 4294967289UL;
                        g_152[0][0][3] = ((safe_add_func_uint32_t_u_u(0x702A619FL, ((g_152[7][0][5] & l_332) < ((g_152[2][0][6] < l_302[7]) <= g_75)))) <= ((l_341 <= (safe_mod_func_uint8_t_u_u(g_256, ((!g_256) | 0xF3L)))) & l_283));
                        l_346 = (safe_mul_func_int8_t_s_s(p_62, g_73[1][1]));
                    }
                }
            }
            if ((safe_sub_func_int16_t_s_s((l_167 < ((safe_mul_func_uint16_t_u_u(0x371AL, g_175[0])) || 1L)), p_62)))
            {
                const char l_362 = 0x4DL;
                int l_387 = (-1L);
                int l_423 = 1L;
                l_328 = (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(l_167, ((safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_59, g_175[1])), p_60)) > ((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((!(l_362 == ((safe_add_func_uint8_t_u_u(p_59, ((safe_rshift_func_uint16_t_u_u(0xB363L, 14)) && ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((!(safe_sub_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(((((safe_div_func_int16_t_s_s(g_175[1], l_265)) < g_256) >= l_276[1]) == 0x65L), l_362)), p_60)), g_175[2]))) == g_2), g_175[0])), 3)) != 1UL)))) != g_152[7][0][5]))))), l_302[0])) && p_60)))), 65529UL));
                if (p_61)
                    continue;
                for (g_91 = 26; (g_91 < 25); g_91 = safe_sub_func_uint16_t_u_u(g_91, 4))
                {
                    int l_381 = 9L;
                    l_302[0] = (-1L);
                    l_381 = p_60;
                    if (p_63)
                    {
                        return g_152[7][0][5];
                    }
                    else
                    {
                        g_152[7][0][5] = (safe_rshift_func_int8_t_s_s(l_293[1][3][1], (safe_lshift_func_uint8_t_u_u(l_381, 2))));
                        if (p_59)
                            continue;
                        l_111 = g_152[7][0][5];
                        g_152[7][0][5] = g_2;
                    }
                }
                if (g_2)
                {
                    for (g_256 = 0; (g_256 <= 3); g_256 += 1)
                    {
                        short l_386 = 0x908FL;
                        g_152[7][0][5] = l_328;
                        l_387 = (l_293[1][1][0] > l_386);
                    }
                    g_152[1][0][3] = (safe_div_func_uint8_t_u_u(g_2, l_239));
                    l_302[1] = 0L;
                    l_239 = l_111;
                }
                else
                {
                    int l_402 = 0xB508CCA9L;
                    short l_422 = (-4L);
                    int l_431 = 0x3D6CBAA1L;
                    if (((l_328 ^ (safe_mul_func_uint8_t_u_u(((-1L) <= (5L && (g_75 > (safe_add_func_uint16_t_u_u((g_256 > ((((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((!g_75), l_362)), 14)), ((safe_div_func_int32_t_s_s(4L, (0xFF6255CBL & 0xAE45B15AL))) ^ (-1L)))) < g_91) || p_60) < 4UL)), 0x68C9L))))), 0xA0L))) && p_60))
                    {
                        unsigned l_419 = 0x30DE378CL;
                        l_402 = l_108;
                        l_423 = ((safe_div_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((g_91 ^ (0x6BL || (safe_rshift_func_int8_t_s_u((l_328 < (g_152[6][0][1] >= (1L && ((((safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((p_62 || p_63), (l_419 < (((((safe_rshift_func_int8_t_s_s(0L, 3)) < g_152[7][0][7]) == l_402) | g_91) < 0xECF71AB1L)))) <= l_402) < g_73[1][1]), l_419)) > 0UL) == 0x55L) | p_63)))), l_422)))), p_59)), g_175[2])) <= l_276[1]) == l_302[0]), 1UL)), l_108)), l_422)) != g_91);
                    }
                    else
                    {
                        const char l_428 = 5L;
                        l_431 = ((safe_div_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_402, (g_152[7][0][7] >= ((g_91 & 1L) ^ ((!l_428) != ((p_62 != (safe_div_func_int8_t_s_s((g_256 > p_59), p_63))) >= 0xDC10L)))))), g_175[2])) == g_256);
                        l_111 = (safe_mul_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(p_61, l_436)) || ((0x4F15L || (safe_add_func_uint16_t_u_u(g_75, (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_239, g_73[3][2])), ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_2, g_152[7][0][5])), 7)) > p_59)))))) < g_73[3][1])) && l_422), p_61));
                        l_328 = (+(safe_lshift_func_uint16_t_u_s(g_2, ((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(l_299, g_91)) >= (((safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((g_73[6][2] && (l_302[6] <= l_111)), (safe_lshift_func_int16_t_s_u((p_61 | (((g_175[0] | l_402) > l_402) >= 4UL)), 0)))), g_175[0])), 0xA60BL)) ^ l_422) < l_423)), 4)) ^ 0x56FB4428L))));
                        l_463 = 0xC0A7E644L;
                    }
                    if (g_175[0])
                        break;
                }
            }
            else
            {
                unsigned char l_478[8][10][3] = {{{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}, {{9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}, {9UL, 0xE6L, 0xA3L}}};
                int i, j, k;
                l_328 = (((safe_lshift_func_uint16_t_u_s(p_60, ((l_276[1] < (safe_mul_func_int16_t_s_s((l_302[2] <= (safe_sub_func_int16_t_s_s(l_302[0], (4294967295UL > p_60)))), ((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((~(safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_91, 7)), (((!((p_62 & l_293[1][3][1]) <= l_302[0])) == 0x84L) > l_478[1][6][0])))), 4)) == p_60), l_478[1][6][0])) != g_73[6][3])))) | 0x3015230DL))) && (-9L)) & g_256);
                g_152[2][0][4] = p_61;
            }
            if (l_239)
                continue;
        }
    }
    return g_152[7][0][5];
}







static unsigned char func_67(char p_68, short p_69, char p_70, unsigned char p_71, unsigned p_72)
{
    const char l_74[5][5] = {{(-5L), 0x7DL, (-5L), (-3L), 0x53L}, {(-5L), 0x7DL, (-5L), (-3L), 0x53L}, {(-5L), 0x7DL, (-5L), (-3L), 0x53L}, {(-5L), 0x7DL, (-5L), (-3L), 0x53L}, {(-5L), 0x7DL, (-5L), (-3L), 0x53L}};
    int l_92 = 1L;
    int i, j;
    for (p_70 = 0; (p_70 <= 3); p_70 += 1)
    {
        unsigned l_89 = 0x1A6C9C6CL;
        unsigned char l_90 = 0x8AL;
        int l_104[9][8] = {{0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}, {0x049BDD3DL, 1L, (-1L), (-1L), 1L, 0x049BDD3DL, 1L, (-1L)}};
        int i, j;
        if (g_2)
        {
            g_75 = l_74[2][3];
        }
        else
        {
            unsigned char l_88 = 6UL;
            if (((safe_sub_func_uint16_t_u_u((g_75 & ((g_2 || (safe_sub_func_int32_t_s_s((0xFA23986BL | (~(~1L))), (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, ((((safe_sub_func_int16_t_s_s(0xAB60L, p_71)) || (p_71 & g_73[7][1])) >= g_73[3][3]) && l_88))), l_89)), l_90))))) > p_71)), g_73[3][3])) & g_73[5][1]))
            {
                g_91 = p_71;
                if (g_73[0][1])
                    continue;
                return p_72;
            }
            else
            {
                l_92 = (p_71 <= 0L);
            }
        }
        for (p_72 = 0; (p_72 <= 3); p_72 += 1)
        {
            int i, j;
            l_104[0][7] = ((safe_unary_minus_func_uint8_t_u((g_73[(p_72 + 2)][p_72] & ((0x9EL >= 0x0CL) <= ((safe_mul_func_uint8_t_u_u((0L > (g_73[(p_72 + 3)][p_72] || (safe_mod_func_int16_t_s_s(0xA47AL, (safe_div_func_uint8_t_u_u((((g_73[0][0] ^ ((((((safe_add_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(l_90, g_91)) != g_73[3][1]), g_75)) ^ 0x473B9571L) < l_92) < g_75) & 4294967291UL) <= p_71)) | g_2) != g_2), 0xDEL)))))), g_73[(p_72 + 2)][p_72])) != p_70))))) != l_89);
        }
    }
    return g_2;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_152[i][j][k], "g_152[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_948[i], "g_948[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1023[i][j], "g_1023[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1138, "g_1138", print_hash_value);
    transparent_crc(g_1151, "g_1151", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1506, "g_1506", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
