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
   char f0;
   short f1;
   const unsigned f2;
   const unsigned char f3;
   int f4;
};


static volatile int g_2 = 0xC9F3690FL;
static const unsigned g_3 = 0x2FB5A5EFL;
static unsigned char g_14 = 0x6CL;
static char g_21 = 3L;
static unsigned g_28[4] = {0x636EEBCBL, 0x636EEBCBL, 0x636EEBCBL, 0x636EEBCBL};
static unsigned short g_30 = 65535UL;
static unsigned short g_33 = 0x1521L;
static int g_35 = 0x43FD0416L;
static struct S0 g_37 = {0x8EL,0x5E71L,0xABA13E97L,0UL,0xE8B3EC6BL};
static int g_80 = 0x61DB4512L;
static int *g_79[9][4] = {{&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}, {&g_80, &g_80, &g_80, &g_80}};
static char *g_82 = &g_21;
static unsigned short g_104 = 0x4486L;
static char g_112 = (-1L);
static unsigned g_122 = 0xDBB3B7CCL;
static const short g_127 = 9L;
static const short *g_126[10][8][3] = {{{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}, {{&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}, {&g_127, &g_127, &g_127}}};
static const short g_130 = (-8L);
static struct S0 g_179 = {7L,0x75DFL,4294967295UL,1UL,0xC860907BL};
static volatile int *g_195 = (void*)0;
static volatile int **g_194[10][7][3] = {{{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}, {{&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}, {&g_195, &g_195, &g_195}}};
static volatile int ***g_193 = &g_194[4][0][0];
static int **g_199 = (void*)0;
static int ***g_198 = &g_199;
static int g_215[2] = {(-1L), (-1L)};
static int g_225 = (-1L);
static unsigned g_242 = 0xDAB37F3CL;
static unsigned char g_246 = 254UL;
static unsigned g_247 = 0x7A3F087FL;
static short g_261 = 1L;
static int *g_286 = &g_179.f4;
static int **g_285 = &g_286;
static unsigned char g_302 = 0xC9L;
static int g_319 = 0xD81E4E76L;
static short g_325 = 0x936BL;
static short * const *g_338 = (void*)0;
static struct S0 g_369 = {0x65L,0x2C29L,0UL,0UL,0x9BBAEF04L};
static struct S0 g_391 = {0x46L,0x5C3CL,0UL,255UL,0xC366AFFAL};
static struct S0 *g_390[3] = {&g_391, &g_391, &g_391};
static const unsigned g_448 = 4294967288UL;
static struct S0 g_483 = {9L,0x6AB5L,1UL,4UL,1L};
static short *g_505[10][8][3] = {{{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}, {{&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}, {&g_369.f1, &g_369.f1, &g_261}}};
static short **g_504 = &g_505[8][1][2];
static short ***g_503 = &g_504;
static const int g_538 = (-2L);
static volatile unsigned short **g_561 = (void*)0;
static unsigned g_599 = 0UL;
static unsigned *g_609 = &g_242;
static unsigned **g_608[1][4] = {{&g_609, (void*)0, &g_609, (void*)0}};
static unsigned char g_613 = 0xDBL;
static const int g_622 = 0x8C2F9680L;
static unsigned char *g_752 = (void*)0;
static unsigned char **g_751[7][7][5] = {{{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}, {{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}, {{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}, {{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}, {{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}, {{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}, {{&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}, {&g_752, &g_752, &g_752, &g_752, (void*)0}}};
static unsigned char g_796 = 0x89L;
static const unsigned g_845 = 6UL;
static unsigned short g_869 = 0x3392L;
static unsigned g_877[1] = {0x4915AE50L};
static int g_912 = 0x0AE3A7F1L;
static unsigned *g_997[9] = {(void*)0, &g_877[0], (void*)0, &g_877[0], (void*)0, &g_877[0], (void*)0, &g_877[0], (void*)0};
static unsigned **g_996[10] = {&g_997[4], &g_997[4], &g_997[4], &g_997[4], &g_997[4], &g_997[4], &g_997[4], &g_997[4], &g_997[4], &g_997[4]};
static unsigned ***g_995[2] = {&g_996[0], &g_996[0]};
static int *g_1073 = &g_215[1];
static struct S0 g_1143 = {0xB0L,0L,0xE0601E73L,0x8EL,0L};
static struct S0 *g_1142 = &g_1143;
static unsigned short *g_1172 = &g_104;
static unsigned short **g_1171[1][1] = {{&g_1172}};
static char *g_1214[9] = {&g_1143.f0, &g_112, &g_1143.f0, &g_112, &g_1143.f0, &g_112, &g_1143.f0, &g_112, &g_1143.f0};
static unsigned ** const *g_1230 = &g_996[0];
static unsigned ** const **g_1229 = &g_1230;
static unsigned ** const ***g_1228[10][2] = {{&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}, {&g_1229, &g_1229}};
static struct S0 **g_1334[7] = {&g_390[2], (void*)0, &g_390[2], (void*)0, &g_390[2], (void*)0, &g_390[2]};
static short g_1391 = 0x12ADL;
static int g_1415 = 0L;
static short g_1588[2][10] = {{0x4DCCL, 1L, (-6L), (-6L), 1L, 0x4DCCL, 1L, (-6L), (-6L), 1L}, {0x4DCCL, 1L, (-6L), (-6L), 1L, 0x4DCCL, 1L, (-6L), (-6L), 1L}};
static char g_1604 = 0x93L;
static struct S0 g_1630 = {-3L,0x5D10L,4294967287UL,0UL,0xA918CCDEL};
static struct S0 g_1632[5] = {{0x96L,0L,0x34AE6C19L,0x6EL,1L}, {0xF2L,-4L,0xCBD82AE7L,0x11L,-1L}, {0x96L,0L,0x34AE6C19L,0x6EL,1L}, {0xF2L,-4L,0xCBD82AE7L,0x11L,-1L}, {0x96L,0L,0x34AE6C19L,0x6EL,1L}};
static struct S0 g_1634 = {-8L,0x32ACL,0x48D63332L,255UL,-3L};
static const short g_1638 = 0x2C50L;
static unsigned char g_1642 = 247UL;
static int g_1690 = 1L;
static unsigned char *g_1723[10] = {&g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302, &g_302};
static int *g_1730[5][8] = {{&g_80, &g_912, (void*)0, (void*)0, (void*)0, &g_912, &g_80, (void*)0}, {&g_80, &g_912, (void*)0, (void*)0, (void*)0, &g_912, &g_80, (void*)0}, {&g_80, &g_912, (void*)0, (void*)0, (void*)0, &g_912, &g_80, (void*)0}, {&g_80, &g_912, (void*)0, (void*)0, (void*)0, &g_912, &g_80, (void*)0}, {&g_80, &g_912, (void*)0, (void*)0, (void*)0, &g_912, &g_80, (void*)0}};
static int g_1772 = (-1L);
static int *g_1797 = &g_215[1];



static short func_1(void);
static const short func_4(int p_5, const char p_6, int p_7, short p_8, unsigned char p_9);
static int func_17(unsigned char * const p_18);
static char func_42(char * p_43);
static char * func_44(struct S0 p_45);
static unsigned char * func_54(char * p_55);
static int func_69(char p_70);
static char func_71(const char p_72, int p_73, unsigned short p_74, unsigned char * p_75, int * p_76);
static unsigned short func_89(unsigned p_90, unsigned char * p_91, unsigned short * p_92, char p_93, int * p_94);
static unsigned func_95(short p_96, unsigned p_97, int p_98, unsigned p_99);
static short func_1(void)
{
    int l_10 = 0xACCB24CEL;
    unsigned char *l_13 = &g_14;
    const int l_15 = (-1L);
    int l_1804 = (-1L);
    int l_1811 = 0x5B808A8AL;
    l_1804 ^= ((g_2 == g_3) & (func_4(l_10, l_10, g_3, ((safe_mod_func_int16_t_s_s(g_3, 0xF3F7L)) ^ (((((*l_13) |= l_10) <= l_10) || l_15) ^ g_3)), l_15) >= (*g_1172)));
    for (g_1630.f1 = 0; (g_1630.f1 > (-12)); --g_1630.f1)
    {
        int *l_1807 = &g_35;
        int **l_1808[1];
        short *l_1809 = (void*)0;
        short *l_1810[9];
        unsigned char l_1812 = 0UL;
        int i;
        for (i = 0; i < 1; i++)
            l_1808[i] = (void*)0;
        for (i = 0; i < 9; i++)
            l_1810[i] = (void*)0;
        g_1073 = l_1807;
        (*g_1797) &= (((l_1811 = l_10) ^ l_15) != l_1812);
        return l_15;
    }
    l_1804 = (l_10 &= ((*g_1797) = (!l_1804)));
    return l_1804;
}







static const short func_4(int p_5, const char p_6, int p_7, short p_8, unsigned char p_9)
{
    unsigned l_16[7] = {0xB8C105A8L, 0xA67D9261L, 0xB8C105A8L, 0xA67D9261L, 0xB8C105A8L, 0xA67D9261L, 0xB8C105A8L};
    int l_36 = 1L;
    const int l_1313[6][8][4] = {{{(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}}, {{(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}}, {{(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}}, {{(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}}, {{(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}}, {{(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}, {(-6L), (-8L), (-1L), 0xC177A881L}}};
    unsigned short ***l_1320 = &g_1171[0][0];
    unsigned char *l_1321 = (void*)0;
    int *l_1322 = &g_35;
    struct S0 l_1323 = {0L,-2L,3UL,255UL,0xD424219AL};
    short ****l_1326 = &g_503;
    int l_1373 = 0xBAA1BD63L;
    char l_1388 = 6L;
    struct S0 *l_1426 = (void*)0;
    unsigned l_1467 = 4294967295UL;
    unsigned char *l_1578 = &g_14;
    short l_1607 = 1L;
    unsigned l_1626[3];
    char l_1627 = 0L;
    int l_1628 = (-1L);
    int *l_1697[1][7];
    unsigned l_1785 = 0x71A7DDD1L;
    unsigned char *l_1796 = &g_796;
    int **l_1803 = &g_1073;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1626[i] = 1UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
            l_1697[i][j] = &g_80;
    }
    for (p_7 = 5; (p_7 >= 0); p_7 -= 1)
    {
        for (p_8 = 4; (p_8 >= 0); p_8 -= 1)
        {
            int *l_34 = &g_35;
            int i;
            (*l_34) = func_17(&g_14);
            l_36 = l_16[(p_8 + 2)];
        }
    }
    return (**l_1803);
}







static int func_17(unsigned char * const p_18)
{
    int l_19 = 0xBC4433ACL;
    char *l_20[6][7] = {{&g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, (void*)0}, {&g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, (void*)0}, {&g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, (void*)0}, {&g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, (void*)0}, {&g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, (void*)0}, {&g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, (void*)0}};
    unsigned short *l_29 = &g_30;
    int *l_31 = (void*)0;
    int *l_32[3][10] = {{(void*)0, (void*)0, &l_19, &l_19, &l_19, (void*)0, (void*)0, &l_19, &l_19, (void*)0}, {(void*)0, (void*)0, &l_19, &l_19, &l_19, (void*)0, (void*)0, &l_19, &l_19, (void*)0}, {(void*)0, (void*)0, &l_19, &l_19, &l_19, (void*)0, (void*)0, &l_19, &l_19, (void*)0}};
    int i, j;
    g_33 = ((g_21 |= (0x6B58L || l_19)) | (l_19 != ((*p_18) = (safe_rshift_func_uint16_t_u_s(((g_14 && l_19) > ((*l_29) = ((((g_28[3] |= (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((l_20[0][3] != l_20[1][2]), (-1L))), l_19))) ^ (*p_18)) >= 0UL) != g_3))), l_19)))));
    return g_14;
}







static char func_42(char * p_43)
{
    unsigned l_1249[2][4] = {{0x4FA80E81L, 4294967292UL, 0x4FA80E81L, 4294967292UL}, {0x4FA80E81L, 4294967292UL, 0x4FA80E81L, 4294967292UL}};
    unsigned ****l_1251[7][10];
    unsigned *****l_1250[5][9] = {{&l_1251[0][1], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[0][1], &l_1251[0][3], &l_1251[0][3]}, {&l_1251[0][1], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[0][1], &l_1251[0][3], &l_1251[0][3]}, {&l_1251[0][1], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[0][1], &l_1251[0][3], &l_1251[0][3]}, {&l_1251[0][1], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[0][1], &l_1251[0][3], &l_1251[0][3]}, {&l_1251[0][1], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[3][2], &l_1251[0][3], &l_1251[0][1], &l_1251[0][3], &l_1251[0][3]}};
    unsigned ******l_1252 = &l_1250[0][7];
    unsigned short *l_1257 = (void*)0;
    int *l_1258[3];
    unsigned char l_1280 = 0xA7L;
    char l_1305[9][6] = {{1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}, {1L, 0x1AL, 1L, 9L, 7L, 0xEBL}};
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
            l_1251[i][j] = &g_995[0];
    }
    for (i = 0; i < 3; i++)
        l_1258[i] = &g_215[1];
    (*g_1073) &= ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0L, 3)), 13)), l_1249[0][0])) < 0x0145L);
    return (*p_43);
}







static char * func_44(struct S0 p_45)
{
    int *l_46 = &g_35;
    unsigned l_899 = 4UL;
    const unsigned char l_906 = 0xF2L;
    struct S0 l_930 = {0xE3L,3L,4294967288UL,255UL,1L};
    unsigned **l_967 = (void*)0;
    unsigned char *l_976 = &g_302;
    short * const *l_981[5][2][10] = {{{&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}, {&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}}, {{&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}, {&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}}, {{&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}, {&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}}, {{&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}, {&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}}, {{&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}, {&g_505[8][1][2], (void*)0, &g_505[9][6][2], &g_505[2][4][0], (void*)0, (void*)0, (void*)0, (void*)0, &g_505[2][4][0], &g_505[9][6][2]}}};
    int i, j, k;
    (*l_46) = g_28[2];
    if (((*l_46) = (2UL & ((void*)0 != &g_30))))
    {
        unsigned char l_907[10] = {0x7DL, 0x7DL, 0x03L, 0x7DL, 0x7DL, 0x03L, 0x7DL, 0x7DL, 0x03L, 0x7DL};
        int * const l_911 = &g_912;
        int * const *l_910 = &l_911;
        unsigned * const *l_933 = (void*)0;
        unsigned * const * const * const l_932 = &l_933;
        unsigned * const * const * const *l_931 = &l_932;
        int *l_945 = &g_215[1];
        const unsigned *l_965 = &g_122;
        const unsigned **l_964 = &l_965;
        const unsigned ***l_966 = &l_964;
        int i;
        for (g_37.f0 = (-15); (g_37.f0 < (-3)); g_37.f0 = safe_add_func_int8_t_s_s(g_37.f0, 2))
        {
            unsigned l_905 = 0x454C5BD1L;
            int *l_908 = &g_35;
            struct S0 **l_914 = &g_390[0];
            unsigned * const *l_916 = &g_609;
            unsigned * const ** const l_915 = &l_916;
            unsigned ***l_917[9][6] = {{&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}, {&g_608[0][3], &g_608[0][1], (void*)0, &g_608[0][2], &g_608[0][2], &g_608[0][0]}};
            int *l_922 = &g_225;
            const short *** const l_948 = (void*)0;
            int i, j;
            for (p_45.f1 = 0; (p_45.f1 == 26); ++p_45.f1)
            {
                unsigned short *l_53 = (void*)0;
                unsigned char **l_889[1];
                unsigned char **l_890 = &g_752;
                unsigned short l_891[4] = {0xA9C7L, 65526UL, 0xA9C7L, 65526UL};
                int l_898[6] = {0x0EC0BE09L, 0x0EC0BE09L, 1L, 0x0EC0BE09L, 0x0EC0BE09L, 1L};
                unsigned ****l_918 = (void*)0;
                unsigned ****l_919 = &l_917[5][2];
                short ****l_938 = &g_503;
                unsigned ***l_944 = (void*)0;
                unsigned * const l_962 = &g_877[0];
                int i;
                for (i = 0; i < 1; i++)
                    l_889[i] = &g_752;
                if ((g_37.f3 | (safe_add_func_uint16_t_u_u(((l_53 != (((*g_82) = (p_45.f3 >= (l_891[3] , (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((*g_82), 2)), 6)), ((l_899 &= (l_898[5] = 0xDC78L)) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(l_905)) , (*l_46)), l_906)), 0)))))))) , &g_104)) < l_907[4]), (*l_46)))))
                {
                    int **l_909 = &g_79[5][3];
                    (*l_909) = l_908;
                }
                else
                {
                    short l_913 = (-7L);
                    (*l_46) = (((*g_198) = (void*)0) == (l_910 = (p_45 , &g_79[5][3])));
                    if (l_913)
                        continue;
                }
            }
        }
        (*l_966) = l_964;
        (*l_911) = p_45.f3;
        (*l_46) = ((void*)0 == l_967);
    }
    else
    {
        (*l_46) = p_45.f1;
    }
    return l_976;
}







static unsigned char * func_54(char * p_55)
{
    short l_68[8][5][2] = {{{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}, {{0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}, {0xA0D1L, (-1L)}}};
    int *l_77 = &g_35;
    unsigned char l_78 = 6UL;
    int i, j, k;
    (*l_77) = ((g_37.f4 ^ (safe_sub_func_uint16_t_u_u(g_37.f0, (((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((l_68[7][0][0] & l_68[7][0][0]), ((func_69(func_71(((((l_68[7][0][0] == ((void*)0 == &g_21)) < ((*l_77) = (-3L))) != l_78) == g_37.f3), l_68[6][3][0], g_33, &g_14, g_79[5][3])) , (*l_77)) & (-7L)))), 8L)) >= l_78), 3)), g_369.f0)) | g_130) > 8UL), 0x38L)) & (-1L)) | g_247)))) > l_68[7][0][0]);
    return p_55;
}







static int func_69(char p_70)
{
    const int *l_698[1][2];
    const int **l_699 = &l_698[0][0];
    int l_705[2][3][6] = {{{(-1L), (-1L), 1L, 0xCAFA662EL, (-1L), 0L}, {(-1L), (-1L), 1L, 0xCAFA662EL, (-1L), 0L}, {(-1L), (-1L), 1L, 0xCAFA662EL, (-1L), 0L}}, {{(-1L), (-1L), 1L, 0xCAFA662EL, (-1L), 0L}, {(-1L), (-1L), 1L, 0xCAFA662EL, (-1L), 0L}, {(-1L), (-1L), 1L, 0xCAFA662EL, (-1L), 0L}}};
    unsigned ***l_706 = &g_608[0][0];
    struct S0 l_707 = {0xB8L,-4L,4294967295UL,0xB3L,-1L};
    int l_718[4][5] = {{(-10L), 1L, (-10L), 1L, (-10L)}, {(-10L), 1L, (-10L), 1L, (-10L)}, {(-10L), 1L, (-10L), 1L, (-10L)}, {(-10L), 1L, (-10L), 1L, (-10L)}};
    struct S0 *l_720[5];
    unsigned short l_749 = 0xD95CL;
    int *l_760 = (void*)0;
    unsigned char **l_763 = &g_752;
    unsigned char l_793[10] = {0x43L, 1UL, 0x43L, 1UL, 0x43L, 1UL, 0x43L, 1UL, 0x43L, 1UL};
    short ****l_816 = &g_503;
    int **l_838 = &g_79[1][3];
    int l_844 = (-1L);
    char l_876 = 0x4FL;
    const unsigned *l_880 = &g_391.f2;
    const unsigned **l_879 = &l_880;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_698[i][j] = &g_35;
    }
    for (i = 0; i < 5; i++)
        l_720[i] = (void*)0;
lbl_701:
    (*l_699) = l_698[0][1];
    for (g_369.f1 = 0; (g_369.f1 <= 0); g_369.f1 += 1)
    {
        unsigned short l_700 = 65535UL;
        int *l_702 = (void*)0;
        l_700 = p_70;
        for (g_179.f0 = 0; (g_179.f0 <= 0); g_179.f0 += 1)
        {
            short *l_703 = (void*)0;
            if (g_369.f1)
                goto lbl_701;
            (*l_699) = l_702;
            for (g_30 = 0; (g_30 <= 0); g_30 += 1)
            {
                int *l_704 = &g_80;
                (*l_704) = (((l_703 = l_703) == (void*)0) | (-2L));
            }
        }
    }
    l_705[1][1][5] = p_70;
    if ((l_706 == (l_707 , l_706)))
    {
        int *l_712 = &g_215[1];
        unsigned char * const l_713 = &g_302;
        short l_719 = (-8L);
        int l_724[4];
        const struct S0 l_730 = {0xE7L,0x72D1L,0UL,1UL,0x532AAFC5L};
        int i;
        for (i = 0; i < 4; i++)
            l_724[i] = (-9L);
        l_705[1][2][2] |= (p_70 == ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((*l_712) &= 1L) > func_17(l_713)), 3)), (safe_sub_func_int32_t_s_s(0x0C33908BL, (p_70 != func_95((safe_add_func_int32_t_s_s(((g_599 |= p_70) < func_95(l_718[1][3], g_261, (**g_285), p_70)), p_70)), l_719, p_70, p_70)))))) == p_70));
        (*l_712) = (g_599 && (&l_707 != l_720[0]));
        if (p_70)
        {
            struct S0 l_721 = {0x82L,0L,0UL,0x98L,0x502C3ADEL};
            l_724[1] &= ((l_721 , (*l_712)) < (((safe_rshift_func_uint16_t_u_u((*l_712), 7)) & p_70) || p_70));
        }
        else
        {
            struct S0 l_729 = {0L,-2L,0x7F7A11F7L,255UL,0x762BCF0DL};
            unsigned *l_733 = &g_122;
            (*l_712) = (safe_add_func_uint16_t_u_u(((*l_712) < p_70), p_70));
            (*l_712) |= ((safe_lshift_func_uint8_t_u_u(g_247, 4)) || ((*l_733) |= (((p_70 , l_729) , (l_730 , p_70)) | ((((p_70 , func_17(&g_302)) == ((safe_mod_func_uint32_t_u_u(func_95(l_729.f2, p_70, p_70, p_70), l_729.f0)) & g_613)) , 0xAF67L) <= g_246))));
        }
        (*l_712) ^= p_70;
    }
    else
    {
        unsigned l_738 = 0UL;
        unsigned char **l_753 = &g_752;
        unsigned char *l_754 = &g_246;
        unsigned short *l_756 = &g_104;
        unsigned short **l_755 = &l_756;
        char *l_757 = &g_391.f0;
        int *l_758 = (void*)0;
        int *l_759[8][8][4] = {{{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}, {{(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}, {(void*)0, (void*)0, &g_80, &g_215[1]}}};
        unsigned short l_768 = 0UL;
        unsigned l_780 = 0x013BD200L;
        struct S0 *l_786 = (void*)0;
        struct S0 **l_787 = &g_390[2];
        int i, j, k;
        for (g_369.f1 = 0; (g_369.f1 == (-29)); --g_369.f1)
        {
            struct S0 **l_740 = &l_720[1];
            for (g_225 = 0; (g_225 <= (-10)); --g_225)
            {
                int *l_739 = &l_705[1][1][5];
                for (g_483.f4 = 0; (g_483.f4 <= 4); g_483.f4 += 1)
                {
                    for (g_319 = 3; (g_319 >= 0); g_319 -= 1)
                    {
                        (*l_699) = (void*)0;
                    }
                }
                (*l_739) = (((-2L) ^ p_70) ^ (p_70 ^ l_738));
                (*l_739) = (func_17(&g_14) == 255UL);
            }
            (*l_740) = &l_707;
        }
lbl_766:
        l_705[1][0][3] |= ((p_70 || (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((*l_757) |= (safe_mod_func_int16_t_s_s(p_70, ((**l_755) = ((((l_718[1][3] ^= ((*l_754) = (safe_add_func_int32_t_s_s((0xE470L || l_749), (safe_unary_minus_func_int8_t_s((g_751[0][5][1] != l_753))))))) , g_561) == (p_70 , l_755)) | l_738))))), (-1L))) == l_738), g_247))) != p_70);
        for (g_302 = 0; (g_302 <= 0); g_302 += 1)
        {
            short l_761 = 2L;
            int l_764 = (-1L);
            int l_784 = 0x026AE1E5L;
            (*l_699) = l_760;
            l_761 = 0x057D401DL;
            for (g_369.f1 = 1; (g_369.f1 >= 0); g_369.f1 -= 1)
            {
                struct S0 l_762[10][3] = {{{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}, {{-7L,1L,0UL,0xB7L,1L}, {0x6BL,0x4F18L,0UL,3UL,0x1EB4B6D0L}, {-7L,1L,0UL,0xB7L,1L}}};
                int l_767 = 0x4965F7F0L;
                int i, j;
                if ((l_705[1][2][3] ^= (l_764 = (l_718[1][3] = ((l_762[3][2] , (l_763 != (void*)0)) == p_70)))))
                {
                    return (*g_286);
                }
                else
                {
                    int l_765 = 1L;
                    if (l_765)
                    {
                        l_764 &= p_70;
                        if (g_599)
                            goto lbl_766;
                        l_767 |= l_765;
                    }
                    else
                    {
                        l_768 &= (l_765 , 3L);
                    }
                }
                if (l_764)
                    continue;
                for (g_21 = 0; (g_21 >= 0); g_21 -= 1)
                {
                    for (l_768 = 0; l_768 < 2; l_768 += 1)
                    {
                        for (g_179.f1 = 0; g_179.f1 < 3; g_179.f1 += 1)
                        {
                            for (g_483.f0 = 0; g_483.f0 < 6; g_483.f0 += 1)
                            {
                                l_705[l_768][g_179.f1][g_483.f0] = (-7L);
                            }
                        }
                    }
                }
            }
            for (g_369.f4 = 0; (g_369.f4 <= 0); g_369.f4 += 1)
            {
                int l_779 = 0xF0DA32ADL;
                short *l_781 = (void*)0;
                short *l_782 = (void*)0;
                short *l_783[8][7][4] = {{{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}, {{&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}, {&g_179.f1, &g_37.f1, &g_179.f1, &g_369.f1}}};
                int i, j, k;
                l_718[3][0] = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_u((((*l_754) = ((safe_rshift_func_uint16_t_u_s(0x7B1DL, 10)) | (p_70 == p_70))) > (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((l_784 &= ((p_70 < g_369.f0) | (((**l_755) = (+((p_70 , (l_764 = ((*g_285) != ((*g_286) , (*g_285))))) < l_779))) > l_780))) | 1UL) || (-1L)), p_70)), 0))), l_761)) < p_70) | 255UL), 10));
                for (g_391.f1 = 1; (g_391.f1 >= 0); g_391.f1 -= 1)
                {
                    int i, j, k;
                    l_698[g_369.f4][g_302] = &l_705[g_391.f1][(g_302 + 2)][(g_302 + 1)];
                    l_718[1][3] = p_70;
                    if (l_779)
                        continue;
                    l_718[1][3] |= 0xBFBB16F5L;
                }
            }
        }
        if ((l_718[2][2] = (((safe_unary_minus_func_uint16_t_u(g_325)) , &g_391) == ((*l_787) = l_786))))
        {
            int l_794 = 0xF961330EL;
            short *l_819 = &g_37.f1;
            int l_825 = (-1L);
            unsigned l_847 = 0x1FA359F6L;
            unsigned short l_854 = 0x3393L;
            unsigned **l_870 = &g_609;
            if ((&g_503 != &g_503))
            {
                struct S0 l_792[4][6] = {{{0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}}, {{0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}}, {{0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}}, {{0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}, {0L,0xFFF1L,0x1A8E535FL,0xB1L,-4L}, {0L,0xF72AL,0UL,8UL,-1L}}};
                int l_798 = 2L;
                char *l_803 = &l_707.f0;
                short *l_820 = &g_325;
                int i, j;
                if (g_302)
                    goto lbl_766;
                for (g_225 = 0; (g_225 <= (-5)); g_225 = safe_sub_func_int16_t_s_s(g_225, 3))
                {
                    int l_795 = 0xA2954363L;
                    short *l_797 = &g_325;
                    l_798 = (0xF4CEL >= ((*l_797) |= func_95(p_70, ((p_70 & ((void*)0 != l_759[0][0][3])) || ((func_95(((l_792[0][0] , (p_70 < (((p_70 || g_35) , l_793[2]) < l_794))) , p_70), g_21, l_795, g_130) == 0x1ECEL) & l_795)), (**g_285), g_796)));
                }
                if ((65532UL | func_95(p_70, (0x7C85L <= (safe_rshift_func_int8_t_s_s(((*l_803) = ((l_718[2][3] = (safe_lshift_func_int8_t_s_u(p_70, 0))) | (p_70 , (l_792[0][0].f0 != ((*l_757) = p_70))))), 6))), l_794, (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(l_794, 12)), 2UL)))))
                {
                    (*l_699) = &l_798;
                }
                else
                {
                    unsigned short l_826 = 65526UL;
                    int l_827 = 0xDE91E627L;
                    for (g_483.f4 = (-9); (g_483.f4 < (-6)); g_483.f4 = safe_add_func_int32_t_s_s(g_483.f4, 9))
                    {
                        short **l_821 = &g_505[8][1][2];
                        int l_824 = 0xC2764E06L;
                        l_826 = (((((safe_lshift_func_uint16_t_u_s(l_792[0][0].f2, 10)) ^ (+(safe_add_func_int8_t_s_s(p_70, ((*l_757) &= ((l_825 ^= ((safe_lshift_func_int16_t_s_u((l_816 == (void*)0), (safe_add_func_uint16_t_u_u((l_819 == ((*l_821) = (l_820 = (void*)0))), (((safe_mod_func_int16_t_s_s(p_70, (+l_824))) , (p_70 < 2L)) == g_215[1]))))) && 0L)) <= 0x326AC0A0L)))))) , 1UL) != 0xAEEE86B5L) <= g_112);
                        l_827 = (((*l_756) = (p_70 , ((p_70 , p_70) && p_70))) >= 1UL);
                    }
                    l_798 = l_792[0][0].f3;
                }
            }
            else
            {
                unsigned l_835 = 0x16FA168EL;
                int l_837 = 0xF93B5C9DL;
                unsigned short l_846 = 65534UL;
                char l_850 = 0x37L;
                int l_859 = 0x7DCA11ABL;
                unsigned l_860 = 0x7CF04D4BL;
                unsigned char *l_868 = &l_793[2];
                for (g_325 = 0; (g_325 <= (-13)); g_325 = safe_sub_func_int32_t_s_s(g_325, 7))
                {
                    struct S0 l_832[4][8][2] = {{{{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}}, {{{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}}, {{{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}}, {{{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}, {{9L,-1L,0x5204FFFEL,0x42L,-1L}, {0x8DL,0xE1A7L,0x98296E33L,0xA0L,0xEF9F9AF0L}}}};
                    int l_836[8][6];
                    int ***l_839 = &l_838;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_836[i][j] = (-1L);
                    }
                    for (g_391.f1 = 0; (g_391.f1 <= 0); g_391.f1 += 1)
                    {
                        int i, j;
                        (*l_699) = (void*)0;
                        l_837 = ((((safe_mod_func_int8_t_s_s((l_832[0][6][0] , l_793[(g_391.f1 + 5)]), l_793[(g_391.f1 + 5)])) , (**g_285)) , l_698[g_391.f1][(g_391.f1 + 1)]) == ((((safe_add_func_int8_t_s_s((((((*l_819) ^= 0xD59CL) ^ ((l_836[7][4] = ((+(((((**l_755) &= p_70) , l_835) , (void*)0) == (void*)0)) & p_70)) , 0x7219L)) , p_70) , g_3), p_70)) && l_835) >= g_112) , (*g_285)));
                    }
                    (*l_839) = ((*g_198) = l_838);
                    (*l_699) = &l_837;
                }
                if (((((safe_mod_func_int32_t_s_s(0L, g_845)) , p_70) ^ p_70) || 0UL))
                {
                    int l_851[6][4][6] = {{{(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}}, {{(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}}, {{(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}}, {{(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}}, {{(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}}, {{(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}, {(-5L), 0x9C6DFCB8L, (-1L), 0x22A06CAAL, 0xDF2290FBL, 1L}}};
                    int l_855[10] = {(-2L), 0L, (-1L), (-1L), 0L, (-2L), 0L, (-1L), (-1L), 0L};
                    int i, j, k;
                    l_847 = l_846;
                    l_837 ^= (~((g_369.f1 | p_70) & (((5UL ^ (safe_sub_func_uint16_t_u_u(func_95((l_851[2][2][5] = ((l_850 && (0xFA7FCA37L != g_319)) ^ 0x991CL)), (safe_rshift_func_int8_t_s_u(l_854, l_855[2])), (*g_286), g_28[3]), 1L))) >= p_70) < 0L)));
                }
                else
                {
                    int *l_856 = &l_837;
                    (*l_699) = (l_758 = l_856);
                    if ((((((6UL & (*l_856)) , ((safe_lshift_func_uint8_t_u_s((((((((*l_787) = &g_483) == &g_179) || p_70) != ((&g_609 == ((*l_706) = ((l_718[1][3] = (l_859 = ((*l_856) = (-4L)))) , &g_609))) , g_179.f4)) != 0x10DFFE3BL) & l_850), p_70)) >= l_860)) | p_70) & p_70) , p_70))
                    {
                        return p_70;
                    }
                    else
                    {
                        int l_867 = (-5L);
                        g_869 ^= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((0xE10127F4L | p_70), (-1L))), (p_70 < (l_825 = ((*l_757) = ((((p_70 && (-6L)) == l_867) == p_70) || (-4L)))))));
                        return p_70;
                    }
                }
                l_870 = (*l_706);
                if (p_70)
                {
                    unsigned char l_873[3];
                    int *l_878 = &g_225;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_873[i] = 0xBCL;
                    (*l_838) = &l_859;
                    (*l_878) = (safe_mod_func_uint8_t_u_u(((l_825 > p_70) < g_538), (-8L)));
                }
                else
                {
                    for (g_242 = 0; (g_242 <= 3); g_242 += 1)
                    {
                        const unsigned ***l_881 = &l_879;
                        (*l_838) = (void*)0;
                        (*l_881) = l_879;
                    }
                    (*l_787) = &g_369;
                }
            }
            l_825 &= p_70;
            l_825 ^= (l_854 != ((*l_819) = 0x9EA9L));
        }
        else
        {
            int l_888 = 0xDFAD7442L;
            l_888 = (safe_add_func_uint32_t_u_u(p_70, ((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(p_70, l_888)) == g_215[1]), (~g_483.f0))) && g_845)));
        }
    }
    return (**g_285);
}







static char func_71(const char p_72, int p_73, unsigned short p_74, unsigned char * p_75, int * p_76)
{
    char *l_81[10][2][10] = {{{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}, {{(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}, {(void*)0, &g_21, &g_37.f0, &g_21, &g_21, &g_21, &g_21, (void*)0, &g_21, &g_21}}};
    int l_83 = 0xEB1BE0F6L;
    int l_100 = 0xC217868DL;
    unsigned short *l_103 = &g_33;
    const int *l_621[8];
    short l_654 = (-9L);
    short ** const **l_660 = (void*)0;
    int l_684 = 0x7093809DL;
    int l_692 = (-1L);
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_621[i] = &g_622;
    for (p_73 = 3; (p_73 >= 0); p_73 -= 1)
    {
        short *l_84 = &g_37.f1;
        short l_101 = (-1L);
        int *l_105 = &g_80;
        unsigned **l_615 = (void*)0;
        int *l_685 = (void*)0;
        int i;
        if ((((g_82 = l_81[6][0][0]) == (void*)0) , (g_28[p_73] == (((*l_84) |= (0x83L >= (l_83 &= p_74))) & (safe_add_func_uint16_t_u_u((g_28[p_73] , ((*l_103) = (safe_sub_func_uint16_t_u_u((func_89((func_95(l_100, p_74, g_28[3], l_101) || p_72), l_81[9][0][4], l_103, g_104, l_105) , 0x587CL), 1UL)))), l_100))))))
        {
            unsigned ***l_614 = &g_608[0][0];
            const int l_616 = 0x111EE91FL;
            (*l_105) = ((!((g_613 > 1UL) & (((*l_614) = &g_609) != l_615))) , l_616);
            l_100 ^= (safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(l_616, (&l_616 != (l_621[5] = &l_616)))) , p_72) >= ((+0xBAF4CF65L) | (safe_mod_func_uint8_t_u_u(g_104, g_33)))), 0x67L));
        }
        else
        {
            unsigned ***l_625 = &g_608[0][2];
            int l_626[5][5] = {{0x280BA599L, 0x280BA599L, 0L, 7L, 0x82774B56L}, {0x280BA599L, 0x280BA599L, 0L, 7L, 0x82774B56L}, {0x280BA599L, 0x280BA599L, 0L, 7L, 0x82774B56L}, {0x280BA599L, 0x280BA599L, 0L, 7L, 0x82774B56L}, {0x280BA599L, 0x280BA599L, 0L, 7L, 0x82774B56L}};
            char l_636 = (-1L);
            short ** const *l_659 = &g_504;
            short ** const **l_658 = &l_659;
            int i, j;
            for (g_122 = 0; (g_122 <= 3); g_122 += 1)
            {
                int l_630 = 0x22838BD6L;
                int *l_632 = &g_225;
                struct S0 **l_633 = &g_390[0];
                unsigned char l_680[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_680[i] = 250UL;
                if (((l_625 != ((*l_105) , l_625)) , l_626[4][1]))
                {
                    int *l_627 = &g_225;
                    int **l_628 = &g_79[3][1];
                    (*l_105) = 1L;
                    l_627 = &p_73;
                    (*l_105) ^= p_72;
                    (*l_628) = l_627;
                }
                else
                {
                    int **l_631[2][2] = {{&g_79[5][3], &g_79[4][2]}, {&g_79[5][3], &g_79[4][2]}};
                    int i, j;
                    for (g_613 = 0; (g_613 <= 2); g_613 += 1)
                    {
                        int **l_629 = &g_79[7][2];
                        int i, j, k;
                        (*l_629) = &p_73;
                        l_630 = p_72;
                    }
                    l_632 = &p_73;
                }
                (*l_633) = &g_179;
                if ((((((*l_632) < ((g_28[g_122] ^= g_37.f1) >= (safe_sub_func_uint8_t_u_u(((l_100 = p_73) < ((0xA4L || g_80) ^ func_95(((func_95(l_626[4][1], (l_636 != (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((~((((safe_sub_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((9UL && func_95(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(0x36L, g_37.f1)), 0x0821L)), 14)) , p_73), (*l_632), p_72, p_74)), 0xBC0B1B18L)) , p_73), 0xBF12L)) < (-1L)) > g_122) , 0x88L)), g_613)), 1))), p_72, p_73) | 4294967295UL) <= p_74), p_73, (*g_286), g_391.f1))), 0UL)))) , p_72) , (*l_632)) == (*l_105)))
                {
                    unsigned l_656 = 1UL;
                    short *** const *l_657 = (void*)0;
                    (*l_105) |= func_17(p_75);
                    for (g_80 = 2; (g_80 >= 0); g_80 -= 1)
                    {
                        int *l_651[8][1][4] = {{{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}, {{&g_80, &l_630, &g_215[1], &g_215[1]}}};
                        unsigned *l_655 = &g_599;
                        int i, j, k;
                        g_79[5][3] = &p_73;
                        l_630 = func_17(&g_302);
                        if ((*l_105))
                            continue;
                        l_630 ^= func_95(func_17(&g_613), ((*l_655) = (safe_rshift_func_int16_t_s_u((0x536BL != (l_654 , 65527UL)), 4))), ((func_95(((*l_84) ^= (-1L)), ((l_656 , l_657) == (l_660 = l_658)), (**g_285), g_179.f3) > (-1L)) , l_656), p_72);
                    }
                    if (p_72)
                        continue;
                    (*l_105) = l_656;
                }
                else
                {
                    int **l_681 = &g_79[1][3];
                    unsigned short l_682 = 0x144AL;
                    l_100 = ((((*l_84) = (safe_sub_func_uint32_t_u_u((((**l_633) , p_74) , ((g_369.f3 >= p_74) || (safe_unary_minus_func_int8_t_s(g_369.f2)))), (safe_lshift_func_int8_t_s_s((p_72 != ((*l_103) = (safe_rshift_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(p_74, (safe_rshift_func_int8_t_s_s(p_74, 1)))) < (((**g_285) , l_626[4][1]) && 0x06B5BD5FL)) ^ g_21), 14)))), 5))))) | p_72) && (*l_105));
                    (*l_105) = (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(0x3FL, func_95((safe_sub_func_uint8_t_u_u(g_246, (*l_105))), (g_179.f3 , (((l_680[0] || ((*l_105) < ((((*l_681) = &p_73) == l_105) , (0x33L != l_682)))) || 0xBA5BA886L) , (*l_105))), p_74, g_391.f3))), (*p_75))) , g_179.f4) <= (*l_632)), g_448));
                    if (p_73)
                        break;
                }
                for (g_80 = 3; (g_80 >= 0); g_80 -= 1)
                {
                    int *l_683 = &g_225;
                    (*l_683) = (*l_105);
                    if (l_636)
                        continue;
                    for (g_391.f0 = 3; (g_391.f0 >= 0); g_391.f0 -= 1)
                    {
                        g_79[3][2] = &l_626[1][1];
                        l_100 |= (((*l_683) = (*l_683)) | l_684);
                    }
                }
            }
        }
        for (g_483.f0 = 0; (g_483.f0 <= 3); g_483.f0 += 1)
        {
            unsigned char l_687[1][9] = {{0x31L, 0xEDL, 0x31L, 0xEDL, 0x31L, 0xEDL, 0x31L, 0xEDL, 0x31L}};
            int i, j;
            l_685 = &p_73;
            for (g_33 = 0; (g_33 <= 3); g_33 += 1)
            {
                struct S0 l_688 = {3L,1L,0x562771ACL,1UL,1L};
                int *l_695 = (void*)0;
                for (g_391.f0 = 3; (g_391.f0 >= 0); g_391.f0 -= 1)
                {
                    short l_689[3][5][3] = {{{0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}}, {{0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}}, {{0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}, {0x6E5FL, (-1L), 0x6E5FL}}};
                    int l_697[9];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_697[i] = 0xC1668590L;
                    if ((p_74 == (*l_685)))
                    {
                        int *l_686 = &g_35;
                        (*l_686) |= ((*l_105) |= 0x47F70DAAL);
                        return l_687[0][7];
                    }
                    else
                    {
                        int **l_696 = &g_79[5][3];
                        l_100 = func_95((l_688 , p_74), ((func_95((*l_685), l_689[0][0][1], l_687[0][1], (p_73 || (((safe_mod_func_uint16_t_u_u((+g_37.f2), g_483.f1)) , (((l_688.f1 && p_72) && g_369.f4) > g_37.f0)) ^ p_74))) < 0UL) , (*l_685)), (**g_285), l_692);
                        (*l_105) = (safe_rshift_func_uint8_t_u_s(l_689[0][0][1], 2));
                        (*l_696) = l_695;
                        if (l_697[4])
                            break;
                    }
                }
            }
        }
    }
    return p_72;
}







static unsigned short func_89(unsigned p_90, unsigned char * p_91, unsigned short * p_92, char p_93, int * p_94)
{
    unsigned l_106 = 8UL;
    int l_108 = (-1L);
    char *l_111 = &g_112;
    struct S0 l_125[6][2][9] = {{{{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}, {{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}}, {{{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}, {{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}}, {{{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}, {{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}}, {{{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}, {{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}}, {{{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}, {{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}}, {{{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}, {{1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x04L,0L,0xDE0B6727L,0xF1L,0x9105A86EL}, {0xE0L,0L,0x08598B86L,0UL,1L}, {0x80L,-1L,0x3F64C53BL,7UL,-1L}, {1L,-5L,4UL,0xF0L,0xE3ED941EL}, {0xF7L,-1L,4294967287UL,0UL,0xD494AE63L}, {0x17L,0x68C3L,0UL,1UL,0x502811D3L}}}};
    int *l_184 = &g_179.f4;
    int l_274 = 4L;
    unsigned l_276[4] = {1UL, 0x05D0869CL, 1UL, 0x05D0869CL};
    unsigned short *l_293[10][7][3] = {{{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}, {{(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}, {(void*)0, &g_104, &g_30}}};
    unsigned l_314[6];
    unsigned l_371[4];
    struct S0 l_394[3][7][7] = {{{{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}}, {{{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}}, {{{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}, {{0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0xBEL,-5L,1UL,0UL,0x1D75A18AL}, {0x83L,0xF72CL,0xCC7B7399L,0x17L,0L}, {0L,1L,1UL,0xFDL,0xFD5054C0L}, {-8L,2L,0x61FC107EL,0UL,-1L}, {0xB4L,0x63B9L,1UL,0x62L,0x01839423L}}}};
    const unsigned *l_447 = &g_448;
    const unsigned **l_446 = &l_447;
    short *l_502[7][6] = {{&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}, {&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}, {&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}, {&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}, {&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}, {&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}, {&g_325, &g_391.f1, (void*)0, &g_325, (void*)0, &l_125[2][0][5].f1}};
    short ** const l_501 = &l_502[1][5];
    short ** const *l_500 = &l_501;
    short ****l_506[5][10] = {{&g_503, &g_503, &g_503, &g_503, (void*)0, &g_503, (void*)0, (void*)0, (void*)0, &g_503}, {&g_503, &g_503, &g_503, &g_503, (void*)0, &g_503, (void*)0, (void*)0, (void*)0, &g_503}, {&g_503, &g_503, &g_503, &g_503, (void*)0, &g_503, (void*)0, (void*)0, (void*)0, &g_503}, {&g_503, &g_503, &g_503, &g_503, (void*)0, &g_503, (void*)0, (void*)0, (void*)0, &g_503}, {&g_503, &g_503, &g_503, &g_503, (void*)0, &g_503, (void*)0, (void*)0, (void*)0, &g_503}};
    unsigned l_523 = 4294967295UL;
    int l_549 = 0x4F0E32F7L;
    unsigned char *l_555 = (void*)0;
    unsigned char * const *l_554 = &l_555;
    unsigned l_563 = 0xA69183CDL;
    char l_592 = 0x40L;
    int l_598 = 2L;
    char l_612 = 0xADL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_314[i] = 0x254C7470L;
    for (i = 0; i < 4; i++)
        l_371[i] = 4294967287UL;
lbl_533:
    if ((~((((p_93 = p_90) , ((l_106 = g_28[3]) & (safe_unary_minus_func_int8_t_s(((func_95(p_93, (func_95(l_108, l_108, ((l_108 == (safe_sub_func_uint8_t_u_u(g_14, ((*l_111) ^= (g_21 = g_14))))) > p_90), g_37.f4) , g_37.f0), l_108, p_90) < p_93) > g_37.f0))))) && g_14) & l_108)))
    {
        int **l_113 = &g_79[5][3];
        (*l_113) = &g_35;
    }
    else
    {
        unsigned char l_116 = 0xC7L;
        unsigned *l_121 = &g_122;
        char *l_123 = &g_112;
        const short *l_129 = &g_130;
        char l_145 = (-10L);
        int l_178 = 0x616B117CL;
        struct S0 l_186 = {-3L,0xA017L,0xF0C489A9L,255UL,-1L};
        int **l_197 = &g_79[5][3];
        int ***l_196 = &l_197;
        int **l_222 = (void*)0;
        int **l_223 = &l_184;
        int *l_224 = &l_125[2][0][5].f4;
        short l_228 = 0x7BF6L;
        short l_279[6][1][7] = {{{0x4049L, 1L, 0xAAB5L, 1L, 0x4049L, 0x38C4L, 0x4049L}}, {{0x4049L, 1L, 0xAAB5L, 1L, 0x4049L, 0x38C4L, 0x4049L}}, {{0x4049L, 1L, 0xAAB5L, 1L, 0x4049L, 0x38C4L, 0x4049L}}, {{0x4049L, 1L, 0xAAB5L, 1L, 0x4049L, 0x38C4L, 0x4049L}}, {{0x4049L, 1L, 0xAAB5L, 1L, 0x4049L, 0x38C4L, 0x4049L}}, {{0x4049L, 1L, 0xAAB5L, 1L, 0x4049L, 0x38C4L, 0x4049L}}};
        unsigned short l_345 = 0x43AEL;
        int l_351 = (-2L);
        int l_357 = (-7L);
        unsigned *l_450[9];
        unsigned **l_449 = &l_450[6];
        short l_457 = 0x67C5L;
        unsigned l_489 = 4294967288UL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_450[i] = &l_371[0];
    }
    (*p_94) = (l_500 != (g_503 = g_503));
    for (g_242 = (-12); (g_242 > 9); ++g_242)
    {
        short l_510 = 0xA6EBL;
        int l_524[10][5][5] = {{{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}, {{(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}, {(-1L), 0x1147B721L, 0x2DD4B709L, 0x9D73B669L, 0x0AB06645L}}};
        unsigned char *l_527 = &g_302;
        unsigned *l_528 = &l_523;
        const unsigned short l_529 = 0UL;
        unsigned *l_530 = &g_122;
        short **l_542[2];
        int **l_572[10][8] = {{&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}, {&g_286, &g_286, &l_184, (void*)0, (void*)0, (void*)0, &g_286, (void*)0}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_542[i] = &l_502[4][1];
        if ((safe_unary_minus_func_uint32_t_u(((((l_125[2][0][5] , (p_93 != l_125[2][0][5].f3)) == func_95(l_510, l_125[2][0][5].f4, (g_391.f4 &= func_95((safe_rshift_func_uint8_t_u_s(g_369.f0, g_483.f0)), ((safe_rshift_func_uint8_t_u_u(((((*l_530) = ((((*l_528) = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((l_108 = (safe_add_func_uint32_t_u_u(((((func_95(((l_524[9][0][1] = (l_274 = l_523)) < ((safe_rshift_func_uint8_t_u_u(((*l_527) = g_242), 5)) && p_93)), p_90, (**g_285), g_246) && (*p_92)) < (-10L)) , l_276[2]) >= 0x34L), 0UL))) ^ 0x5FD2L), 5)) && g_33), 0xE5L)), g_179.f1))) >= l_510) | l_529)) && p_93) <= g_37.f4), l_510)) , l_276[2]), p_90, l_510)), l_314[2])) < l_510) , g_391.f2))))
        {
            const int *l_537 = &g_538;
            const int **l_536 = &l_537;
            const int *l_540[1][1];
            const int **l_539 = &l_540[0][0];
            short **l_541[5][1];
            unsigned char **l_546 = &l_527;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_540[i][j] = (void*)0;
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_541[i][j] = &l_502[1][5];
            }
            for (g_21 = (-21); (g_21 <= (-6)); g_21 = safe_add_func_uint32_t_u_u(g_21, 1))
            {
                if (g_112)
                    goto lbl_533;
                l_274 ^= 6L;
                if ((*p_94))
                    continue;
            }
            for (g_369.f1 = 29; (g_369.f1 <= 13); g_369.f1--)
            {
                (*g_503) = (*l_500);
                return l_276[2];
            }
            (*l_539) = ((*l_536) = &l_274);
            if (((-1L) >= (((*g_503) = l_541[3][0]) == l_542[0])))
            {
                int l_545 = 1L;
                unsigned l_556 = 0xACDEC68CL;
                int *l_557 = &g_215[1];
                (*l_557) ^= (((*l_527) ^= ((l_545 <= (l_546 != (func_95(((safe_rshift_func_int16_t_s_u((func_95(((((*l_530) &= l_549) >= ((l_524[9][0][1] = ((((0xF84AL || (safe_lshift_func_uint16_t_u_u((&g_28[3] != &g_28[3]), 4))) == (func_95(p_90, p_90, ((g_179.f0 , (*p_94)) == l_545), (**l_536)) > l_510)) < g_225) > g_37.f2)) && (*p_94))) & 0x390EL), g_369.f4, l_545, l_545) && 0x5FL), 9)) && l_394[2][4][1].f2), p_93, l_545, p_90) , l_554))) || l_556)) , (*p_94));
                for (g_246 = 0; (g_246 <= 0); g_246 += 1)
                {
                    (*p_94) = ((*l_557) = (l_108 = (*p_94)));
                    for (g_369.f1 = 0; (g_369.f1 >= 0); g_369.f1 -= 1)
                    {
                        struct S0 l_558[5][8] = {{{0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}}, {{0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}}, {{0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}}, {{0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}}, {{0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {0xC9L,0xE906L,0x097DC034L,0xF8L,0xC84791F8L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}, {1L,5L,0x527D1B4BL,0x57L,0x2E269A17L}, {0x51L,-1L,0UL,0x85L,0xF825AAB4L}}};
                        int i, j;
                        (*l_536) = (l_558[2][0] , p_94);
                    }
                    if ((*p_94))
                        continue;
                }
                if ((*l_557))
                {
                    (*l_557) = 1L;
                    (*l_557) = l_510;
                    for (g_261 = 0; (g_261 <= 25); g_261 = safe_add_func_uint16_t_u_u(g_261, 3))
                    {
                        return g_14;
                    }
                }
                else
                {
                    (*l_539) = (void*)0;
                    return g_483.f1;
                }
            }
            else
            {
                char l_562[9][6][4] = {{{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}, {{0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}, {0x2CL, 0L, 0xCDL, 0x46L}}};
                int i, j, k;
                if (l_394[2][4][1].f2)
                    break;
                for (p_90 = 0; (p_90 <= 2); p_90 += 1)
                {
                    char l_565 = 0x63L;
                    for (g_14 = 0; (g_14 <= 3); g_14 += 1)
                    {
                        int l_564 = 6L;
                        int i, j;
                        (*p_94) = (l_394[2][4][1].f2 && ((((void*)0 == g_561) == (0x8DDBL <= ((*p_94) < g_122))) , (l_562[1][0][0] , ((!(l_563 , 0xE550L)) > l_564))));
                        l_565 ^= 5L;
                    }
                }
                return (*p_92);
            }
        }
        else
        {
            unsigned l_575 = 6UL;
            for (g_483.f1 = 18; (g_483.f1 == (-12)); g_483.f1--)
            {
                char l_580 = 0xDDL;
                (*p_94) = func_95(p_93, (((l_529 ^ ((((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(1UL, ((g_319 ^= (*g_286)) , l_549))) , (((void*)0 == l_572[1][2]) , (((safe_rshift_func_int8_t_s_s(l_575, 6)) , l_575) , (-10L)))), p_93)) < 0x90CBA067L) >= l_524[0][4][1]) | g_179.f0)) , &g_338) != (void*)0), l_524[9][0][1], g_369.f1);
                if (((safe_sub_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(((((((l_580 , l_580) != (safe_rshift_func_uint8_t_u_u(255UL, l_394[2][4][1].f2))) || l_276[3]) <= (safe_add_func_uint16_t_u_u(((*p_92) | (((p_90 , (void*)0) != &g_483) ^ (*p_94))), l_549))) < l_524[5][2][2]) > (*p_94)), 3L)) >= l_523), p_93)) , l_575))
                {
                    short l_587[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_587[i][j] = 1L;
                    }
                    for (l_575 = 14; (l_575 != 16); ++l_575)
                    {
                        (*p_94) = l_587[0][1];
                        (*g_193) = (*g_193);
                        return (*p_92);
                    }
                    for (l_106 = 15; (l_106 > 23); l_106 = safe_add_func_uint32_t_u_u(l_106, 1))
                    {
                        (*p_94) |= 0L;
                        (*p_94) ^= 0xAE51A9FAL;
                        return (*p_92);
                    }
                    return l_510;
                }
                else
                {
                    return l_524[0][3][0];
                }
            }
        }
        if (l_125[2][0][5].f1)
            break;
    }
    for (g_261 = 0; (g_261 >= (-16)); g_261 = safe_sub_func_int32_t_s_s(g_261, 1))
    {
        char l_597 = (-6L);
        unsigned *l_606 = (void*)0;
        unsigned *l_607 = (void*)0;
        unsigned *l_610 = &g_599;
        int **l_611[8][10][3] = {{{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}, {{&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}, {&g_79[2][0], (void*)0, &g_79[7][1]}}};
        int i, j, k;
        (*p_94) = (func_95(l_592, p_93, p_90, (9L <= (safe_add_func_uint16_t_u_u((g_33 = 5UL), (((l_563 < 0L) | (safe_mod_func_int16_t_s_s((l_597 = (p_93 & (p_93 != 0x4F9E6365L))), l_598))) | g_319))))) <= g_599);
        l_274 |= (((safe_rshift_func_uint8_t_u_u(func_95(l_276[2], (p_93 || (((*p_94) = (*p_94)) >= l_597)), p_93, p_90), 3)) >= (func_95(p_93, g_325, p_90, l_394[2][4][1].f3) >= l_597)) , (-1L));
        (*p_94) = ((+(7UL <= ((*p_94) & ((*l_610) = func_95(l_125[2][0][5].f3, p_90, (g_483.f3 & (safe_add_func_uint32_t_u_u(((*l_610) = (((safe_sub_func_int16_t_s_s(func_95(p_90, g_369.f2, (**g_285), (g_599 ^= (((p_90 | l_597) != l_597) , g_30))), 8L)) , g_608[0][2]) == &l_447)), l_125[2][0][5].f4))), l_597))))) >= g_179.f4);
        g_79[8][0] = p_94;
    }
    return l_612;
}







static unsigned func_95(short p_96, unsigned p_97, int p_98, unsigned p_99)
{
    int l_102[7][2] = {{(-1L), 0x15F1EE03L}, {(-1L), 0x15F1EE03L}, {(-1L), 0x15F1EE03L}, {(-1L), 0x15F1EE03L}, {(-1L), 0x15F1EE03L}, {(-1L), 0x15F1EE03L}, {(-1L), 0x15F1EE03L}};
    int i, j;
    return l_102[6][0];
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
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_28[i], "g_28[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37.f0, "g_37.f0", print_hash_value);
    transparent_crc(g_37.f1, "g_37.f1", print_hash_value);
    transparent_crc(g_37.f2, "g_37.f2", print_hash_value);
    transparent_crc(g_37.f3, "g_37.f3", print_hash_value);
    transparent_crc(g_37.f4, "g_37.f4", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_179.f1, "g_179.f1", print_hash_value);
    transparent_crc(g_179.f2, "g_179.f2", print_hash_value);
    transparent_crc(g_179.f3, "g_179.f3", print_hash_value);
    transparent_crc(g_179.f4, "g_179.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_215[i], "g_215[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_369.f0, "g_369.f0", print_hash_value);
    transparent_crc(g_369.f1, "g_369.f1", print_hash_value);
    transparent_crc(g_369.f2, "g_369.f2", print_hash_value);
    transparent_crc(g_369.f3, "g_369.f3", print_hash_value);
    transparent_crc(g_369.f4, "g_369.f4", print_hash_value);
    transparent_crc(g_391.f0, "g_391.f0", print_hash_value);
    transparent_crc(g_391.f1, "g_391.f1", print_hash_value);
    transparent_crc(g_391.f2, "g_391.f2", print_hash_value);
    transparent_crc(g_391.f3, "g_391.f3", print_hash_value);
    transparent_crc(g_391.f4, "g_391.f4", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_483.f0, "g_483.f0", print_hash_value);
    transparent_crc(g_483.f1, "g_483.f1", print_hash_value);
    transparent_crc(g_483.f2, "g_483.f2", print_hash_value);
    transparent_crc(g_483.f3, "g_483.f3", print_hash_value);
    transparent_crc(g_483.f4, "g_483.f4", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_877[i], "g_877[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_912, "g_912", print_hash_value);
    transparent_crc(g_1143.f0, "g_1143.f0", print_hash_value);
    transparent_crc(g_1143.f1, "g_1143.f1", print_hash_value);
    transparent_crc(g_1143.f2, "g_1143.f2", print_hash_value);
    transparent_crc(g_1143.f3, "g_1143.f3", print_hash_value);
    transparent_crc(g_1143.f4, "g_1143.f4", print_hash_value);
    transparent_crc(g_1391, "g_1391", print_hash_value);
    transparent_crc(g_1415, "g_1415", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1588[i][j], "g_1588[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1604, "g_1604", print_hash_value);
    transparent_crc(g_1630.f0, "g_1630.f0", print_hash_value);
    transparent_crc(g_1630.f1, "g_1630.f1", print_hash_value);
    transparent_crc(g_1630.f2, "g_1630.f2", print_hash_value);
    transparent_crc(g_1630.f3, "g_1630.f3", print_hash_value);
    transparent_crc(g_1630.f4, "g_1630.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1632[i].f0, "g_1632[i].f0", print_hash_value);
        transparent_crc(g_1632[i].f1, "g_1632[i].f1", print_hash_value);
        transparent_crc(g_1632[i].f2, "g_1632[i].f2", print_hash_value);
        transparent_crc(g_1632[i].f3, "g_1632[i].f3", print_hash_value);
        transparent_crc(g_1632[i].f4, "g_1632[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1634.f0, "g_1634.f0", print_hash_value);
    transparent_crc(g_1634.f1, "g_1634.f1", print_hash_value);
    transparent_crc(g_1634.f2, "g_1634.f2", print_hash_value);
    transparent_crc(g_1634.f3, "g_1634.f3", print_hash_value);
    transparent_crc(g_1634.f4, "g_1634.f4", print_hash_value);
    transparent_crc(g_1638, "g_1638", print_hash_value);
    transparent_crc(g_1642, "g_1642", print_hash_value);
    transparent_crc(g_1690, "g_1690", print_hash_value);
    transparent_crc(g_1772, "g_1772", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
