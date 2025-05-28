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



static volatile int g_2 = (-1L);
static volatile int g_3 = 0L;
static int g_4[7] = {0x25D16DF2L, 0x25D16DF2L, (-1L), 0x25D16DF2L, 0x25D16DF2L, (-1L), 0x25D16DF2L};
static int g_11 = (-6L);
static unsigned char g_18[3][6] = {{0xFDL, 0x93L, 0xFDL, 0x93L, 0xFDL, 0x93L}, {0xFDL, 0x93L, 0xFDL, 0x93L, 0xFDL, 0x93L}, {0xFDL, 0x93L, 0xFDL, 0x93L, 0xFDL, 0x93L}};
static unsigned char g_21 = 0xE6L;
static unsigned char g_28[10] = {254UL, 254UL, 0x56L, 254UL, 254UL, 0x56L, 254UL, 254UL, 0x56L, 254UL};
static int *g_30 = &g_11;
static int g_36 = (-1L);
static int g_37 = 1L;
static int g_41 = 0x4191B860L;
static int * volatile g_40 = &g_41;
static volatile int g_60 = 0xF870A655L;
static volatile int g_61 = 0x91552D49L;
static volatile int g_62 = 0x7B27F969L;
static int g_63 = 0x7D1D410AL;
static int **g_115 = &g_30;
static int g_120 = 0xBCECFDE0L;
static int g_126 = 0x26087067L;
static unsigned char g_131[1][4][6] = {{{0x41L, 0x1BL, 0x94L, 0x1BL, 0x41L, 1UL}, {0x41L, 0x1BL, 0x94L, 0x1BL, 0x41L, 1UL}, {0x41L, 0x1BL, 0x94L, 0x1BL, 0x41L, 1UL}, {0x41L, 0x1BL, 0x94L, 0x1BL, 0x41L, 1UL}}};
static int *g_133 = &g_37;
static int ** volatile g_132[10] = {&g_133, &g_133, &g_133, &g_133, &g_133, &g_133, &g_133, &g_133, &g_133, &g_133};
static short g_154 = 0x05D4L;
static int g_165 = 0L;
static char g_180 = (-5L);
static volatile unsigned short g_252 = 65529UL;
static int * volatile g_267[5] = {&g_36, (void*)0, &g_36, (void*)0, &g_36};
static unsigned short g_279 = 0x577AL;
static int ** volatile g_288 = &g_133;
static unsigned char g_324[7][9][4] = {{{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}, {{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}, {{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}, {{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}, {{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}, {{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}, {{255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}, {255UL, 255UL, 0x4AL, 0xE7L}}};
static unsigned char *g_323 = &g_324[2][2][3];
static unsigned char *g_326 = &g_324[2][2][3];
static int g_331 = (-1L);
static int *g_353 = &g_126;
static int **g_352 = &g_353;
static unsigned g_381 = 0xFA5F112DL;
static unsigned short g_390 = 0x2DFAL;
static short *g_438[1][3][9] = {{{&g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154}, {&g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154}, {&g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154, &g_154}}};



static unsigned short func_1(void);
static unsigned char * func_25(unsigned char * p_26);
static unsigned short func_42(int ** p_43);
static short func_49(int ** p_50, int p_51, int * p_52);
static unsigned func_56(unsigned char p_57, unsigned short p_58, int * p_59);
static int * func_64(unsigned p_65, unsigned p_66);
static unsigned func_67(unsigned p_68, int p_69);
static int func_85(char p_86, int p_87, int p_88, int * p_89, unsigned char * p_90);
static int * func_91(int * p_92, int * p_93, int p_94);
static unsigned char * func_108(unsigned char * p_109, unsigned char p_110, int * p_111, int ** p_112);
static unsigned short func_1(void)
{
    unsigned short l_22 = 2UL;
    unsigned char *l_27[7][3] = {{&g_28[2], &g_28[2], &g_28[2]}, {&g_28[2], &g_28[2], &g_28[2]}, {&g_28[2], &g_28[2], &g_28[2]}, {&g_28[2], &g_28[2], &g_28[2]}, {&g_28[2], &g_28[2], &g_28[2]}, {&g_28[2], &g_28[2], &g_28[2]}, {&g_28[2], &g_28[2], &g_28[2]}};
    int l_327[8] = {8L, 0xCAB4327BL, 8L, 0xCAB4327BL, 8L, 0xCAB4327BL, 8L, 0xCAB4327BL};
    char *l_432 = &g_180;
    char **l_433 = (void*)0;
    char **l_434 = &l_432;
    short *l_437 = &g_154;
    int i, j;
    for (g_4[0] = 0; (g_4[0] <= (-21)); --g_4[0])
    {
        int *l_10 = &g_11;
        int l_330 = (-1L);
        int **l_362 = &g_353;
        int l_378 = (-1L);
        int **l_398[5][6] = {{&g_133, &g_30, &l_10, &g_133, &g_30, &g_133}, {&g_133, &g_30, &l_10, &g_133, &g_30, &g_133}, {&g_133, &g_30, &l_10, &g_133, &g_30, &g_133}, {&g_133, &g_30, &l_10, &g_133, &g_30, &g_133}, {&g_133, &g_30, &l_10, &g_133, &g_30, &g_133}};
        int i, j;
        if ((0xAA810D21L | (+g_4[0])))
        {
            int **l_7 = (void*)0;
            int *l_9[2];
            int **l_8[6] = {&l_9[1], &l_9[1], &l_9[1], &l_9[1], &l_9[1], &l_9[1]};
            int i;
            for (i = 0; i < 2; i++)
                l_9[i] = &g_4[5];
            l_10 = (void*)0;

            ;
        }
        else
        {
            char l_16 = 0x99L;
            unsigned char *l_17 = &g_18[2][1];
            unsigned char *l_19 = (void*)0;
            unsigned char *l_20 = &g_21;
            unsigned char **l_325[10][3] = {{&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}, {&g_323, &g_323, &l_20}};
            char *l_332[6][9] = {{&g_180, (void*)0, &l_16, (void*)0, &g_180, &l_16, &g_180, (void*)0, &l_16}, {&g_180, (void*)0, &l_16, (void*)0, &g_180, &l_16, &g_180, (void*)0, &l_16}, {&g_180, (void*)0, &l_16, (void*)0, &g_180, &l_16, &g_180, (void*)0, &l_16}, {&g_180, (void*)0, &l_16, (void*)0, &g_180, &l_16, &g_180, (void*)0, &l_16}, {&g_180, (void*)0, &l_16, (void*)0, &g_180, &l_16, &g_180, (void*)0, &l_16}, {&g_180, (void*)0, &l_16, (void*)0, &g_180, &l_16, &g_180, (void*)0, &l_16}};
            int l_333[9] = {0xD1403AEFL, 0L, 0xD1403AEFL, 0L, 0xD1403AEFL, 0L, 0xD1403AEFL, 0L, 0xD1403AEFL};
            int *l_363 = (void*)0;
            int *l_364[4][5][7] = {{{&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}}, {{&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}}, {{&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}}, {{&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}, {&l_333[7], (void*)0, &l_327[0], &g_11, &g_36, &g_63, &g_63}}};
            int **l_405[6] = {&g_353, &g_353, &g_353, &g_353, &g_353, &g_353};
            int i, j, k;
            if ((safe_rshift_func_uint8_t_u_s((l_22 = ((*l_20) = ((*l_17) = (safe_add_func_uint32_t_u_u(((void*)0 == &g_3), l_16))))), (safe_rshift_func_int8_t_s_s((l_333[7] = (((((((g_3 , func_25((l_27[4][1] = l_27[4][1]))) == (g_326 = (g_323 = g_323))) < (g_331 = (l_327[0] && ((safe_lshift_func_uint16_t_u_u((l_330 != 4294967293UL), 12)) || 0xB161L)))) , g_28[9]) | 0x47L) , 0x05L) >= l_330)), 1)))))
            {
                unsigned l_342 = 0xB87AA993L;
                unsigned short *l_343 = &g_279;
                int *l_354 = &g_165;
                int l_382 = 0L;
                int l_391 = 0x18AC3DCBL;
                unsigned *l_394 = &g_381;
                int ***l_397[3];
                int ***l_406 = &g_352;
                int *l_409 = &g_63;
                int i;
                for (i = 0; i < 3; i++)
                    l_397[i] = &g_115;
                if (((*g_133) = ((*l_10) = ((((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u((*l_10), 0)) > (safe_lshift_func_int8_t_s_u(1L, 2))) && ((*l_343) = (l_342 , (*l_10)))), (7UL != (!(((((((g_324[2][2][3] == 0L) | l_342) | l_333[6]) == 2UL) , 0x436241F5L) == g_21) <= l_22))))) | 0x1FL), (*g_326))) && 0L) < l_327[0]) <= (-1L)))))
                {
                    unsigned char *l_355 = &g_131[0][3][2];
                    short *l_356[3];
                    int l_357[9] = {0x0CF19C23L, 0xDFDEC2FFL, 0x0CF19C23L, 0xDFDEC2FFL, 0x0CF19C23L, 0xDFDEC2FFL, 0x0CF19C23L, 0xDFDEC2FFL, 0x0CF19C23L};
                    int l_358 = 0x4CC578BDL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_356[i] = (void*)0;
                    (*g_133) = ((*l_354) = (((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_327[4] = (((void*)0 == &g_133) == (safe_add_func_uint8_t_u_u(l_342, func_67((((0xAAC75214L && ((-10L) >= (g_352 == ((*g_40) , &g_353)))) ^ (l_333[7] = (((((*g_133) != g_131[0][0][0]) != l_327[0]) , 255UL) ^ l_333[5]))) , g_2), l_357[0]))))), l_22)), g_324[0][3][3])), (*l_10))) , l_357[3]) != l_358));
                    for (g_11 = 3; (g_11 >= 0); g_11 -= 1)
                    {
                        return l_327[0];
                    }
                }
                else
                {
                    int **l_361 = &g_353;
                    int l_384 = 3L;
                    for (g_331 = 29; (g_331 <= 11); g_331 = safe_sub_func_int32_t_s_s(g_331, 7))
                    {
                        int *l_369[5][4];
                        short *l_379 = &g_154;
                        unsigned *l_380 = &g_381;
                        unsigned l_383 = 0x24C86A1AL;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_369[i][j] = (void*)0;
                        }
                        l_362 = l_361;
                        (*g_115) = l_364[2][3][3];

                        ;
                        (*l_10) = (*g_133);
                        (*g_115) = &l_327[0];

                        ;
                    }

                    ;
                    (*g_115) = (*g_288);

                    ;
                    for (l_378 = (-20); (l_378 <= 22); ++l_378)
                    {
                        int *l_387 = (void*)0;
                        (*g_115) = l_387;

                        ;
                        l_384 = (*g_40);
                        (*g_115) = (void*)0;
                        l_364[2][3][3] = &l_333[4];
                    }

                    ;
                }
                if ((*g_40))
                    continue;
                l_363 = (((((*l_354) = (l_327[3] = (g_180 = l_327[0]))) <= (safe_lshift_func_int8_t_s_s((((g_390 = (*l_10)) , l_391) != (safe_mod_func_uint32_t_u_u(((*l_394) = 4UL), 0x2DCF23DBL))), l_22))) <= (*l_10)) , (*g_288));

                ;
                if ((g_381 | ((g_279 , (safe_add_func_uint32_t_u_u((&l_10 != (l_398[2][4] = &g_30)), (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((((*l_363) , 65535UL) , (l_362 == ((*l_406) = l_405[2]))) , (*l_10)), 0x0AL)) <= 2UL), 0x17L)), (*l_10)))))) , 2L)))
                {
                    (*g_115) = &l_333[7];

                    ;
                    for (g_11 = 5; (g_11 >= 1); g_11 -= 1)
                    {
                        (*l_354) = (~0x778EB83AL);
                        return g_120;


                    }
                }
                else
                {
                    int *l_410[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_410[i] = &g_36;
                    if (l_22)
                    {
                        unsigned l_411 = 0xACEA52ADL;
                        (*g_115) = (l_410[0] = ((safe_rshift_func_uint8_t_u_s(l_22, 6)) , l_409));

                        ;

                        if (l_411)
                            break;
                    }
                    else
                    {
                        int l_422 = 0L;
                        (*g_115) = func_64((((safe_lshift_func_uint16_t_u_u(g_390, 2)) == 0L) , (((*l_343) = ((safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((((*g_323) , (void*)0) == (void*)0), (safe_sub_func_uint32_t_u_u((*l_409), (((safe_lshift_func_uint16_t_u_s(0xC73EL, g_180)) ^ ((**g_288) > (*g_133))) ^ (*g_133)))))), 0)) ^ 0x14L)) == l_422)), l_422);
                    }


                    (*g_115) = (*g_288);

                    ;
                }

                ;
            }
            else
            {
                short l_423 = 7L;
                unsigned l_424[4] = {0x0D8B4E5DL, 0x9AE92379L, 0x0D8B4E5DL, 0x9AE92379L};
                int i;
                l_423 = l_327[4];
                for (g_331 = 2; (g_331 >= 0); g_331 -= 1)
                {
                    for (l_330 = 2; (l_330 >= 0); l_330 -= 1)
                    {
                        int *l_425 = &g_41;
                        if (l_327[7])
                            break;
                        l_425 = ((*g_115) = func_64(l_424[3], l_327[5]));

                        ;
                    }
                    for (g_37 = 2; (g_37 <= 8); g_37 += 1)
                    {
                        return g_28[8];
                    }
                }
            }

            ;
            ;
            if ((**g_288))
                break;

            (*g_115) = &l_333[8];

            ;
            if ((**g_115))
                break;

        }

        ;
        if ((*g_40))
            break;
    }


    ;
    l_327[0] = (safe_add_func_int8_t_s_s((g_180 = (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*l_434) = l_432) == &g_180), func_49(&g_30, (((safe_lshift_func_uint16_t_u_u(l_327[0], l_22)) < l_327[2]) == ((*g_323) <= ((((&g_154 != (g_438[0][0][4] = l_437)) , 0x9EB706A2L) ^ g_331) > (*g_40)))), &l_327[0]))), 0xAC53L))), l_327[5]));

    ;
    (*g_115) = &l_327[0];

    ;
    return g_154;


}







static unsigned char * func_25(unsigned char * p_26)
{
    int *l_29 = (void*)0;
    int l_31[6][1][9] = {{{1L, 3L, 0x0B1C5ADFL, 3L, 1L, 0x96F37D43L, (-7L), 3L, 0x661C4438L}}, {{1L, 3L, 0x0B1C5ADFL, 3L, 1L, 0x96F37D43L, (-7L), 3L, 0x661C4438L}}, {{1L, 3L, 0x0B1C5ADFL, 3L, 1L, 0x96F37D43L, (-7L), 3L, 0x661C4438L}}, {{1L, 3L, 0x0B1C5ADFL, 3L, 1L, 0x96F37D43L, (-7L), 3L, 0x661C4438L}}, {{1L, 3L, 0x0B1C5ADFL, 3L, 1L, 0x96F37D43L, (-7L), 3L, 0x661C4438L}}, {{1L, 3L, 0x0B1C5ADFL, 3L, 1L, 0x96F37D43L, (-7L), 3L, 0x661C4438L}}};
    int *l_32 = (void*)0;
    int ***l_321 = (void*)0;
    int i, j, k;
    g_30 = l_29;

    ;
    l_31[2][0][3] = l_31[2][0][3];
    for (g_11 = (-17); (g_11 >= (-24)); --g_11)
    {
        short l_35 = 0L;
        int **l_44 = &l_29;
        int l_302 = (-8L);
        l_35 = (-5L);
        for (l_35 = 7; (l_35 >= 0); l_35 -= 1)
        {
            int l_46 = 0x67AAC3BCL;
            unsigned char *l_307 = (void*)0;
            for (g_36 = 0; (g_36 <= 9); g_36 += 1)
            {
                int l_55 = (-1L);
                int l_294 = (-1L);
                int l_300 = 0xADEEFF87L;
                unsigned short l_301 = 6UL;
                int i;
                for (g_37 = 0; (g_37 <= 0); g_37 += 1)
                {
                    int i, j, k;
                    (*g_40) = (safe_add_func_int32_t_s_s((g_28[(l_35 + 2)] < l_31[(g_37 + 3)][g_37][(g_37 + 5)]), 0x32E525B7L));
                }
                l_302 = ((((-6L) >= (func_42((g_28[l_35] , l_44)) , 0x4CL)) > l_46) , (((safe_mod_func_int16_t_s_s(func_49(&g_30, (l_294 = (safe_add_func_int8_t_s_s((((l_55 = (-1L)) || (func_56((g_28[(l_35 + 2)] = g_36), l_46, &l_31[2][0][3]) ^ l_55)) < 0UL), 0x3BL))), l_29), 65535UL)) | l_300) , l_301));

                ;
                (*g_115) = (*g_288);

                ;
            }
            for (l_302 = 0; (l_302 >= 0); l_302 -= 1)
            {
                char *l_320 = &g_180;
                unsigned l_322 = 4294967288UL;
                int i, j, k;
                l_31[(l_302 + 4)][l_302][(l_302 + 4)] = (l_31[(l_302 + 4)][l_302][(l_302 + 4)] <= (safe_add_func_int16_t_s_s(l_31[(l_302 + 2)][l_302][l_302], func_67((((safe_sub_func_uint32_t_u_u(((~(safe_add_func_int16_t_s_s(l_31[(l_302 + 2)][l_302][l_302], (((**g_288) != (1UL < ((g_279 , (safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((l_46 , ((((((safe_mod_func_int8_t_s_s(g_120, l_31[(l_302 + 2)][l_302][l_302])) <= l_46) == 0x2669L) , &l_44) != l_321) | g_180)), l_31[(l_302 + 2)][l_302][l_302])) & 0x6F43L), 0x5AA8DD26L))) , g_154))) != l_31[(l_302 + 2)][l_302][l_302])))) , l_46), 0L)) & l_322) , l_46), l_46))));
                l_46 = l_46;
            }
        }
    }

    ;
    return &g_28[2];


}







static unsigned short func_42(int ** p_43)
{
    int *l_45 = (void*)0;
    (*p_43) = l_45;


    return g_41;
}







static short func_49(int ** p_50, int p_51, int * p_52)
{
    unsigned char l_299 = 0x38L;
    (*p_50) = ((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_131[0][3][2], ((p_51 , (p_51 > g_2)) , 0x5B66L))), 0x25L)) , (void*)0);

    ;
    return l_299;
}







static unsigned func_56(unsigned char p_57, unsigned short p_58, int * p_59)
{
    unsigned l_273 = 0xC1DF6277L;
    int **l_289 = &g_133;
    unsigned short *l_293 = &g_279;
    for (p_58 = 0; (p_58 <= 9); p_58 += 1)
    {
        int *l_100 = &g_11;
        unsigned char *l_292 = &g_131[0][1][2];
        unsigned char **l_291 = &l_292;
        for (p_57 = 3; (p_57 <= 9); p_57 += 1)
        {
            unsigned char *l_265 = &g_28[3];
            for (g_41 = 9; (g_41 >= 0); g_41 -= 1)
            {
                for (g_37 = 9; (g_37 >= 1); g_37 -= 1)
                {
                    unsigned short l_76 = 9UL;
                    unsigned short l_272 = 0x7A75L;
                    unsigned char **l_290 = &l_265;
                    for (g_63 = 0; (g_63 <= 9); g_63 += 1)
                    {
                        int *l_99 = &g_37;
                        int i;
                        (*g_288) = (g_28[g_63] , (l_99 = func_64(g_28[g_37], func_67(((safe_add_func_int8_t_s_s(0xC0L, (safe_lshift_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s((l_76 >= (((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(func_42((func_85(p_58, p_57, g_4[6], func_91(((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_99 == (((l_100 != p_59) && (*p_59)) , &g_3)), g_2)), p_58)) , &g_11), l_99, (*p_59)), l_265) , &l_100)), 2)), l_272)), p_58)) >= g_11), 0x7864L)) == l_273) ^ l_273)), g_4[3])) , (-4L)) || 0x95BA0DEAL) < 0xFD7BL), 0)))) , p_58), g_36))));

                        ;
                        ;
                        ;
                        ;
                    }
                }
                for (g_126 = 6; (g_126 >= 0); g_126 -= 1)
                {
                    int i;
                    return g_28[g_41];
                }
            }
            (*p_59) = (&g_279 != l_293);
        }

        ;
    }
    return g_4[6];
}







static int * func_64(unsigned p_65, unsigned p_66)
{
    for (g_154 = 4; (g_154 != (-8)); g_154 = safe_sub_func_uint8_t_u_u(g_154, 2))
    {
        int *l_286 = (void*)0;
        int *l_287 = &g_120;
        (*l_287) = (safe_rshift_func_int16_t_s_s(p_66, 8));
    }
    return (*g_115);


}







static unsigned func_67(unsigned p_68, int p_69)
{
    int *l_274 = &g_120;
    unsigned char *l_281 = (void*)0;
    if (((*l_274) = p_68))
    {
        unsigned short l_275 = 0x3E1BL;
        l_275 = 0xD8ED3679L;
    }
    else
    {
        unsigned short *l_278 = &g_279;
        int l_280[2];
        int i;
        for (i = 0; i < 2; i++)
            l_280[i] = (-4L);
        (*l_274) = ((0xE9L != (((p_68 <= p_68) , 0xF2D127F7L) >= p_68)) , (((((safe_lshift_func_uint16_t_u_u(((*l_278) = p_68), p_68)) , ((5UL && (((((g_37 & g_41) , p_69) || g_252) > 0x98L) <= l_280[1])) || g_3)) ^ (*l_274)) , (void*)0) == l_281));
    }
    return (*l_274);
}







static int func_85(char p_86, int p_87, int p_88, int * p_89, unsigned char * p_90)
{
    unsigned short l_266[8][7] = {{0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}, {0x7BD1L, 0xC1AAL, 65535UL, 0xC1AAL, 0x7BD1L, 65535UL, 65535UL}};
    int *l_268 = (void*)0;
    int *l_269 = &g_165;
    int i, j;
    (*l_269) = l_266[6][5];
    for (p_87 = 0; (p_87 == 27); ++p_87)
    {
        if (p_86)
            break;
        return (*g_30);
    }
    return (*l_269);
}







static int * func_91(int * p_92, int * p_93, int p_94)
{
    int **l_105 = (void*)0;
    unsigned char *l_114[4][3][6] = {{{(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}}, {{(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}}, {{(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}}, {{(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}, {(void*)0, &g_28[2], &g_28[5], (void*)0, &g_28[2], &g_28[2]}}};
    unsigned char **l_113 = &l_114[3][2][1];
    unsigned char *l_116 = &g_28[2];
    int *l_117[10][5][5] = {{{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}, {{(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}, {(void*)0, &g_41, &g_4[0], &g_4[0], &g_36}}};
    int *l_264 = (void*)0;
    int **l_263 = &l_264;
    int i, j, k;
    if ((safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((void*)0 != l_105), 7)) | (g_28[6] >= (safe_mul_func_uint16_t_u_u((((((((*l_113) = func_108(((*l_113) = &g_28[2]), (func_42(g_115) , (((void*)0 != l_116) || p_94)), l_117[3][0][4], g_115)) == (void*)0) , g_252) , 0x8B700F52L) , 1L) ^ g_63), g_63)))) , 0xADL), g_4[0])))
    {
        unsigned char l_253 = 253UL;
        int *l_254 = &g_63;
        int **l_255 = &g_133;
        (*l_255) = ((*g_115) = (l_253 , l_254));

        ;
        ;
    }
    else
    {
        int l_260 = 0x96986D46L;
        int *l_262 = &g_36;
        if (((*p_93) , 0xD3434192L))
        {
            (*g_115) = &p_94;

            ;
            (*g_115) = &p_94;
            for (g_120 = 22; (g_120 <= (-24)); g_120 = safe_sub_func_int8_t_s_s(g_120, 4))
            {
                int **l_261 = &l_117[9][0][4];
                if ((*p_92))
                    break;
            }
        }
        else
        {
            (*g_115) = l_262;

            ;
        }

        ;
        (*g_115) = l_262;

        ;
    }

    ;


    p_94 = (-10L);
    p_94 = (g_11 < (p_92 != ((*l_263) = l_117[3][0][4])));

    ;
    return l_117[0][4][4];


}







static unsigned char * func_108(unsigned char * p_109, unsigned char p_110, int * p_111, int ** p_112)
{
    int **l_122 = &g_30;
    unsigned char *l_149[6] = {&g_28[6], &g_28[6], &g_131[0][0][2], &g_28[6], &g_28[6], &g_131[0][0][2]};
    int l_166 = (-1L);
    unsigned l_167[9][2][6] = {{{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}, {{4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}, {4294967288UL, 4294967288UL, 1UL, 0x20DE5E23L, 0xD6A31045L, 0xC9742AFDL}}};
    int **l_170 = &g_133;
    char *l_179 = &g_180;
    int *l_181 = (void*)0;
    int *l_182 = &g_120;
    int **l_190[8];
    int l_199 = 0xA216054AL;
    unsigned char **l_207[4] = {&l_149[3], &l_149[3], &l_149[3], &l_149[3]};
    unsigned l_251 = 1UL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_190[i] = &g_133;
    for (p_110 = 16; (p_110 < 53); p_110++)
    {
        int l_129[4][9] = {{1L, (-7L), 0xBE40C264L, 0L, (-7L), 0x654FA892L, (-7L), 0L, 0xBE40C264L}, {1L, (-7L), 0xBE40C264L, 0L, (-7L), 0x654FA892L, (-7L), 0L, 0xBE40C264L}, {1L, (-7L), 0xBE40C264L, 0L, (-7L), 0x654FA892L, (-7L), 0L, 0xBE40C264L}, {1L, (-7L), 0xBE40C264L, 0L, (-7L), 0x654FA892L, (-7L), 0L, 0xBE40C264L}};
        unsigned short l_137 = 8UL;
        int ***l_163 = &g_115;
        int l_164 = 0x49FC326AL;
        int i, j;
        if ((g_2 > g_120))
        {
            int l_121 = 0x678B10BEL;
            int ***l_123 = (void*)0;
            int ***l_124 = &g_115;
            int *l_125 = &g_126;
            (*p_112) = ((((*l_125) = ((p_110 ^ ((l_121 == (&g_40 != &g_40)) , func_42(((*l_124) = l_122)))) , g_60)) , (((*g_40) >= (safe_mod_func_int16_t_s_s((l_129[2][2] != 255UL), 0x5DADL))) >= g_63)) , (*g_115));

            ;
            if (l_129[0][4])
            {
                unsigned char *l_130[9] = {(void*)0, &g_28[2], (void*)0, &g_28[2], (void*)0, &g_28[2], (void*)0, &g_28[2], (void*)0};
                int i;
                return l_130[6];


            }
            else
            {
                l_129[2][2] = g_131[0][3][2];
            }
        }
        else
        {
            int *l_134 = &l_129[2][2];
            l_134 = ((*p_112) = (void*)0);

            ;
            ;
            l_137 = func_42(((func_42(l_122) , (((safe_rshift_func_uint8_t_u_u((*p_109), 2)) > l_129[0][5]) < g_36)) , &p_111));

            ;
        }

        ;
        for (l_137 = 0; (l_137 > 33); l_137 = safe_add_func_int32_t_s_s(l_137, 7))
        {
            int l_146[1][4][10];
            unsigned char *l_148[1][7][9] = {{{(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}, {(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}, {(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}, {(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}, {(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}, {(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}, {(void*)0, &g_28[2], (void*)0, &g_131[0][3][1], (void*)0, &g_131[0][1][4], &g_131[0][0][4], &g_131[0][0][4], &g_131[0][1][4]}}};
            unsigned char **l_147[1][7] = {{&l_148[0][6][2], &l_148[0][6][2], &l_148[0][6][3], &l_148[0][6][2], &l_148[0][6][2], &l_148[0][6][3], &l_148[0][6][2]}};
            short *l_152 = (void*)0;
            short *l_153 = &g_154;
            int l_155 = (-1L);
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 10; k++)
                        l_146[i][j][k] = 0x449FB5A3L;
                }
            }
            (*l_122) = ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(l_146[0][0][2], (((&p_110 == (l_149[3] = &p_110)) & (l_155 = ((*l_153) = ((safe_rshift_func_uint16_t_u_s((func_42(&g_30) == (((!(g_63 , l_146[0][0][2])) , (*p_109)) == l_129[2][2])), g_3)) ^ 0UL)))) || l_129[2][2]))) || 0x4BL) ^ g_4[0]), p_110)), p_110)) , (void*)0);

            ;
            (*l_122) = &l_129[2][2];

            ;
            for (g_120 = 0; (g_120 <= 25); g_120++)
            {
                int *l_160[6] = {(void*)0, (void*)0, &l_146[0][0][2], (void*)0, (void*)0, &l_146[0][0][2]};
                int i;
            }
        }

        ;
    }



    (*l_182) = ((l_167[1][1][5] == (((((safe_mod_func_int8_t_s_s((g_61 && func_42(l_170)), (((g_28[2] > ((((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(g_28[2], (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(((*l_179) = p_110), g_63)), g_4[0])))), g_36)) & 0x88AFL) >= 0x2AL) < p_110)) , 0xDDED7392L) , g_131[0][3][2]))) , l_167[0][1][3]) , &g_126) == &g_126) <= g_11)) , 6L);
    for (p_110 = 20; (p_110 != 50); ++p_110)
    {
        unsigned l_187 = 1UL;
        int l_193 = 0x9738C801L;
        short *l_198 = &g_154;
        short l_200[5] = {0x1BA3L, 1L, 0x1BA3L, 1L, 0x1BA3L};
        int l_201 = 0x37BD5445L;
        int l_202 = 0L;
        unsigned char **l_206 = (void*)0;
        int **l_244 = &g_30;
        int i;
        l_202 = (l_201 = (safe_add_func_int8_t_s_s(l_187, (safe_rshift_func_uint8_t_u_s((0x3FCFL == (func_42(l_190[2]) >= ((safe_mod_func_int32_t_s_s((g_131[0][3][2] , l_187), (l_193 = l_187))) , ((g_61 & (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((g_131[0][3][3] = (((void*)0 == l_198) & l_187)) ^ 4UL), 10)) | l_199), (*p_109)))) < (*p_109))))), l_200[0])))));

        ;
        for (l_166 = 23; (l_166 >= (-24)); l_166--)
        {
            int **l_205 = (void*)0;
            int l_226 = (-1L);
            (*l_182) = ((p_110 , l_206) == (l_207[0] = &l_149[5]));
            (*l_170) = &l_202;

            ;
            for (g_120 = 0; (g_120 >= (-10)); g_120 = safe_sub_func_int8_t_s_s(g_120, 6))
            {
                int l_212 = 0x5F4DC93DL;
                int l_225 = 0L;
                (*g_115) = p_111;

                ;
            }
        }

        ;
    }



    l_251 = func_42(&l_182);

    ;
    return &g_131[0][3][2];


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_131[i][j][k], "g_131[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_324[i][j][k], "g_324[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
