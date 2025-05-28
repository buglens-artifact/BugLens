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
   const volatile unsigned f0 : 25;
   const unsigned f1 : 10;
   const unsigned short f2;
   volatile unsigned char f3;
};


static unsigned short g_9 = 0x0FA7L;
static int g_66 = (-6L);
static struct S0 g_79 = {446,6,0UL,252UL};
static int g_88[1] = {(-9L)};
static int *g_87 = &g_88[0];
static volatile struct S0 g_91 = {2616,17,65526UL,0x3CL};
static volatile int ***g_92 = (void*)0;
static int g_97 = 1L;
static int g_156 = 1L;
static char g_157[4][4] = {{(-6L), 0x32L, (-6L), 0x32L}, {(-6L), 0x32L, (-6L), 0x32L}, {(-6L), 0x32L, (-6L), 0x32L}, {(-6L), 0x32L, (-6L), 0x32L}};
static struct S0 *g_176 = (void*)0;
static unsigned g_214 = 0x22BA50A0L;
static struct S0 g_215 = {5076,2,65535UL,255UL};
static struct S0 g_230[2] = {{2299,17,0x4119L,251UL}, {2299,17,0x4119L,251UL}};
static volatile struct S0 g_241 = {3869,17,0x914BL,0x55L};
static struct S0 g_263 = {3397,19,0x27A1L,9UL};
static const volatile struct S0 g_265 = {523,31,8UL,0UL};
static struct S0 g_283 = {4894,14,0x0B6CL,0xE0L};
static int g_334[9] = {0xDFC62B8DL, 8L, 0xDFC62B8DL, 8L, 0xDFC62B8DL, 8L, 0xDFC62B8DL, 8L, 0xDFC62B8DL};
static volatile struct S0 g_371 = {3492,20,0x69DDL,0UL};
static volatile struct S0 g_411 = {2030,12,65532UL,0x4DL};
static int g_449 = 1L;
static struct S0 * const **g_471 = (void*)0;
static unsigned char g_623 = 0x12L;
static struct S0 g_663[9] = {{3064,13,3UL,0x32L}, {3039,5,65527UL,0x40L}, {3064,13,3UL,0x32L}, {3039,5,65527UL,0x40L}, {3064,13,3UL,0x32L}, {3039,5,65527UL,0x40L}, {3064,13,3UL,0x32L}, {3039,5,65527UL,0x40L}, {3064,13,3UL,0x32L}};
static int g_664 = 1L;
static int g_714 = 0L;
static const int g_828 = 0L;
static struct S0 g_873 = {2952,23,1UL,0x32L};
static volatile struct S0 g_912 = {271,2,0x4A1FL,0x78L};
static const int g_961 = 0xD842F3DFL;
static struct S0 g_962 = {1012,2,0x177FL,0x36L};
static struct S0 g_1019 = {2809,16,1UL,255UL};
static volatile struct S0 g_1112 = {4889,22,8UL,251UL};
static volatile struct S0 g_1119 = {5233,30,65528UL,255UL};
static volatile struct S0 g_1134 = {1179,9,1UL,0UL};
static volatile struct S0 g_1229 = {502,1,0x602AL,0x39L};
static int g_1240 = (-3L);
static struct S0 g_1250 = {2255,23,0x02C4L,255UL};
static struct S0 g_1251 = {2091,0,0x3254L,0xEFL};
static volatile struct S0 g_1255 = {4308,14,0x2853L,0x65L};
static struct S0 g_1271 = {2812,5,0x552AL,1UL};
static struct S0 g_1327 = {3439,27,65535UL,0xB4L};
static volatile struct S0 g_1345 = {7,23,65530UL,249UL};
static struct S0 g_1385 = {985,28,1UL,9UL};
static volatile struct S0 g_1476 = {2190,26,0x8848L,0xACL};
static unsigned g_1514 = 1UL;
static int g_1535[8][8][3] = {{{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}, {{(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}, {(-9L), 0xEC32311AL, (-6L)}}};
static struct S0 g_1541 = {2040,3,0x18C9L,0x83L};
static struct S0 g_1594 = {3667,27,0xE429L,255UL};
static volatile struct S0 g_1596 = {3490,4,0x211BL,0xD3L};
static volatile struct S0 g_1597 = {2827,27,0x4538L,246UL};
static volatile struct S0 *g_1595[6][4][4] = {{{&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}}, {{&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}}, {{&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}}, {{&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}}, {{&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}}, {{&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}, {&g_1597, &g_1596, &g_1597, &g_1596}}};
static struct S0 g_1599[3][7] = {{{3373,23,0x49A5L,255UL}, {3523,1,0x161DL,9UL}, {1854,14,0x85BCL,252UL}, {4611,14,0xFA6CL,0x6AL}, {4611,14,0xFA6CL,0x6AL}, {1854,14,0x85BCL,252UL}, {3523,1,0x161DL,9UL}}, {{3373,23,0x49A5L,255UL}, {3523,1,0x161DL,9UL}, {1854,14,0x85BCL,252UL}, {4611,14,0xFA6CL,0x6AL}, {4611,14,0xFA6CL,0x6AL}, {1854,14,0x85BCL,252UL}, {3523,1,0x161DL,9UL}}, {{3373,23,0x49A5L,255UL}, {3523,1,0x161DL,9UL}, {1854,14,0x85BCL,252UL}, {4611,14,0xFA6CL,0x6AL}, {4611,14,0xFA6CL,0x6AL}, {1854,14,0x85BCL,252UL}, {3523,1,0x161DL,9UL}}};
static volatile struct S0 g_1624 = {3611,6,1UL,0x75L};
static struct S0 g_1630 = {4923,29,0x896EL,247UL};
static unsigned g_1635 = 0x04709AFBL;
static int g_1672 = (-1L);
static struct S0 g_1723 = {840,3,0x59ECL,0x91L};
static struct S0 g_1763 = {2686,21,0x86E9L,1UL};
static int g_1811 = 0L;
static struct S0 g_1859 = {2397,13,0xFC65L,0x27L};
static const int g_1947 = (-10L);



static const int func_1(void);
static const int func_4(char p_5);
static const int func_7(int p_8);
static int func_10(char p_11, unsigned p_12);
static char func_18(unsigned p_19, int p_20);
static unsigned func_21(char p_22, int p_23);
static int func_24(char p_25, const unsigned p_26, unsigned char p_27, unsigned short p_28);
static const unsigned func_29(unsigned p_30, unsigned char p_31, const unsigned p_32, const char p_33);
static unsigned char func_34(int p_35, int p_36, const unsigned p_37, char p_38, char p_39);
static int * const func_42(int p_43, int p_44);
static const int func_1(void)
{
    int l_6 = 0x12491E29L;
    struct S0 * const *l_1660 = &g_176;
    struct S0 * const **l_1659[6][8][4] = {{{&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}}, {{&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}}, {{&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}}, {{&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}}, {{&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}}, {{&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}, {&l_1660, (void*)0, &l_1660, &l_1660}}};
    int **l_1662 = (void*)0;
    int *** const l_1661 = &l_1662;
    unsigned short l_1694 = 0UL;
    unsigned short l_1713 = 65535UL;
    unsigned char l_1736 = 0x5BL;
    int *l_1751 = &g_88[0];
    int **l_1806[5];
    unsigned char l_1808 = 0x0BL;
    int l_1865[8] = {(-8L), (-8L), (-8L), (-8L), (-8L), (-8L), (-8L), (-8L)};
    int l_1913 = 1L;
    unsigned l_1944 = 4294967286UL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1806[i] = &l_1751;
    if ((safe_sub_func_int16_t_s_s(0x03FAL, (func_4(l_6) > (safe_add_func_uint32_t_u_u(l_6, (0x029EB69EL >= (g_873.f2 ^ l_6))))))))
    {
        unsigned short l_1656 = 65535UL;
        int *l_1673 = &g_88[0];
        struct S0 **l_1705 = &g_176;
        struct S0 ***l_1704 = &l_1705;
        short l_1716 = 0x2ABCL;
        unsigned l_1741 = 4294967286UL;
        char l_1743[10][3][2];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_1743[i][j][k] = (-5L);
            }
        }
        if ((safe_add_func_int32_t_s_s((!((safe_add_func_uint32_t_u_u((0x98L ^ ((0UL <= ((void*)0 == &g_1630)) == l_1656)), (g_79.f0 < (((l_6 >= (0x1E647510L == l_1656)) > g_1630.f1) <= l_1656)))) >= l_6)), g_1630.f1)))
        {
            g_87 = &g_88[0];
        }
        else
        {
            const int ***l_1663 = (void*)0;
            int l_1676 = 8L;
            unsigned char l_1682[5][10][5] = {{{8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}}, {{8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}}, {{8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}}, {{8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}}, {{8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}, {8UL, 0x3EL, 0xEEL, 0x17L, 0x3BL}}};
            unsigned char l_1742[10];
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_1742[i] = 0UL;
            if (g_1672)
            {
                int l_1681 = 0x05FB6C4FL;
                int *l_1683[10] = {&g_88[0], &g_88[0], (void*)0, &g_88[0], &g_88[0], (void*)0, &g_88[0], &g_88[0], (void*)0, &g_88[0]};
                int i;
                g_87 = l_1673;
                for (g_1635 = 0; (g_1635 <= 0); g_1635 += 1)
                {
                    for (l_1656 = 0; (l_1656 <= 8); l_1656 += 1)
                    {
                        int i;
                        if (g_334[(g_1635 + 1)])
                            break;
                    }
                    for (g_623 = 1; (g_623 <= 8); g_623 += 1)
                    {
                        int **l_1684[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1684[i] = (void*)0;
                        g_88[g_1635] = (*l_1673);
                        g_87 = l_1683[9];
                    }
                }
                for (g_9 = 0; (g_9 > 27); ++g_9)
                {
                    return (*l_1673);
                }
            }
            else
            {
                unsigned short l_1693 = 0UL;
                unsigned char l_1695 = 1UL;
                int *l_1719 = &g_1535[5][2][2];
                (*l_1673) = func_34((g_79.f0 , ((safe_add_func_int32_t_s_s(l_1694, g_962.f1)) ^ g_1271.f0)), l_1695, g_873.f2, l_1676, l_1695);
                for (g_97 = 6; (g_97 < 12); g_97 = safe_add_func_int8_t_s_s(g_97, 6))
                {
                    int l_1698 = 0xA871BB6AL;
                    struct S0 *** const l_1706 = (void*)0;
                    if ((0x0A87CDE6L ^ l_1698))
                    {
                        char l_1703 = 0xEFL;
                        l_1673 = &g_66;
                        (*l_1673) = (g_1112.f3 < (((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_1703, (((g_873.f1 < (l_1704 != ((func_21(g_1251.f2, (*l_1673)) , l_1693) , l_1706))) , l_1695) && 8L))), g_1635)) == l_1693) == l_1703));
                    }
                    else
                    {
                        int l_1707 = 0x0B3B51A7L;
                        int l_1710 = 0x136764AFL;
                        int **l_1714 = (void*)0;
                        int **l_1715 = &g_87;
                        (*l_1715) = func_42((g_91.f2 | (((func_21(((func_21(l_1707, g_88[0]) >= ((safe_add_func_uint8_t_u_u(l_1710, g_1240)) & 0x5AL)) <= (safe_lshift_func_int16_t_s_s(func_21(l_1713, (g_1595[5][1][3] == g_1595[0][2][1])), (*l_1673)))), (*l_1673)) , 0x0EL) >= l_1698) || l_1698)), l_1710);
                    }
                    l_1716 = (l_1706 != (void*)0);
                    for (l_1713 = 0; (l_1713 < 22); l_1713 = safe_add_func_uint32_t_u_u(l_1713, 9))
                    {
                        int **l_1720 = &g_87;
                        (*l_1720) = l_1719;
                    }
                }
                (*l_1719) = (safe_lshift_func_int16_t_s_u(((((g_1251.f0 , (g_1723 , (safe_lshift_func_uint16_t_u_u((g_241.f2 || ((((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((g_230[1].f1 < (((((safe_lshift_func_uint16_t_u_u(65535UL, ((safe_lshift_func_int16_t_s_s((((l_1736 & ((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((g_230[1].f2 != (g_9 >= l_1743[0][0][0])), 0x8EL)), g_1624.f0)) || 1UL)) != g_1240) && 6UL), 13)) > (*l_1673)))) >= g_215.f2) && 0xFB1BL) , 0UL) | g_1599[0][1].f1)), 1UL)), (*l_1673))) & g_1251.f2), (*l_1719))) || g_1624.f3) < g_1240) > 255UL)), 8)))) < (*l_1673)) > 0x33L) > 0x66A6L), g_1599[0][1].f1));
            }
            (*l_1673) = ((((*l_1673) >= 3L) , &l_1673) == (g_1251.f1 , &g_87));
        }
    }
    else
    {
        const unsigned l_1744[3][3] = {{0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}, {0UL, 0UL, 0UL}};
        unsigned short l_1805 = 65530UL;
        int ** const l_1807 = &l_1751;
        int l_1858 = 0xC9B6B023L;
        struct S0 *l_1874 = &g_1250;
        int i, j;
        if (l_1744[0][2])
        {
            char l_1752 = (-1L);
            char l_1766 = 0L;
            int **l_1838 = &l_1751;
            unsigned l_1839 = 4294967291UL;
            struct S0 ***l_1864 = (void*)0;
            int *l_1894[6] = {&g_1240, &g_1240, &g_88[0], &g_1240, &g_1240, &g_88[0]};
            int **l_1895[5][6] = {{&g_87, (void*)0, &g_87, &g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87, &g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87, &g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87, &g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87, &g_87, (void*)0, &g_87}};
            int **l_1896[9] = {&l_1751, (void*)0, &l_1751, (void*)0, &l_1751, (void*)0, &l_1751, (void*)0, &l_1751};
            int **l_1897 = &l_1894[5];
            int i, j;
            for (g_1635 = 0; (g_1635 == 6); g_1635 = safe_add_func_uint8_t_u_u(g_1635, 8))
            {
                unsigned l_1762[2][4] = {{4294967295UL, 4294967287UL, 4294967295UL, 4294967287UL}, {4294967295UL, 4294967287UL, 4294967295UL, 4294967287UL}};
                int **l_1771[3][3] = {{&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}, {&g_87, (void*)0, &g_87}};
                int **l_1772 = &g_87;
                unsigned char l_1821 = 0x80L;
                unsigned l_1822 = 4294967295UL;
                int i, j;
                for (l_1694 = 0; (l_1694 == 49); l_1694 = safe_add_func_uint8_t_u_u(l_1694, 5))
                {
                    int *l_1749 = &g_1535[5][3][0];
                    int **l_1750[6][10][4] = {{{&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}}, {{&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}}, {{&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}}, {{&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}}, {{&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}}, {{&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}, {&l_1749, &l_1749, &l_1749, (void*)0}}};
                    int *l_1753 = &g_1535[4][2][0];
                    int i, j, k;
                    l_1751 = l_1749;
                    if (l_1752)
                        continue;
                    if (l_1744[2][0])
                        break;
                    l_1751 = l_1753;
                }
                (*l_1772) = func_42(((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((*l_1751), (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_1762[1][3], (l_1744[2][1] , 0x403A2BE3L))), 11)))) ^ 4UL) < ((g_1763 , func_34((safe_rshift_func_uint8_t_u_u((g_1541.f2 > l_1766), 1)), (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((1UL > g_334[2]), l_1744[2][0])), g_1763.f0)), g_1672, (*l_1751), g_1535[3][4][0])) & l_1752)), g_157[0][2])) , 0x139AA64EL), g_157[3][2]);
                for (g_664 = 0; (g_664 < 12); g_664 = safe_add_func_uint8_t_u_u(g_664, 1))
                {
                    const unsigned short l_1775 = 65535UL;
                    int *l_1785 = &g_88[0];
                    for (g_214 = 0; (g_214 <= 1); g_214 += 1)
                    {
                        int i, j;
                        (*l_1772) = &g_88[0];
                        if (l_1762[g_214][g_214])
                            continue;
                        return l_1775;
                    }
                    (*g_87) = (safe_add_func_uint32_t_u_u(g_1019.f0, (g_214 , (*g_87))));
                    if ((safe_add_func_uint16_t_u_u((+(safe_mod_func_int8_t_s_s(g_1635, l_1775))), (g_215.f2 , g_1255.f0))))
                    {
                        int l_1782 = 0x43782256L;
                        (*l_1751) = (((-5L) > ((g_1385.f0 <= l_1782) <= g_88[0])) | ((safe_rshift_func_int8_t_s_s((l_1785 != (void*)0), 4)) || (safe_sub_func_int8_t_s_s(func_21(g_1240, (safe_lshift_func_int16_t_s_s((65535UL <= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_1744[2][1], g_1763.f2)), 7))), (**l_1772)))), g_1019.f2))));
                        if ((*l_1785))
                            break;
                    }
                    else
                    {
                        l_1785 = &g_88[0];
                    }
                }
                if ((*g_87))
                {
                    int l_1796 = (-1L);
                    int **l_1820 = &l_1751;
                    for (g_449 = 0; (g_449 > 5); g_449++)
                    {
                        (*l_1751) = l_1796;
                    }
                    (*g_87) = (safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_s((((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_1766, 5)), (g_92 == (void*)0))) != (func_34(((*g_87) , (func_34(g_1251.f0, l_1805, g_215.f2, g_1594.f1, l_1766) & 0x97ABL)), g_1672, (**l_1772), l_1752, g_263.f2) , g_1327.f2)) & 65528UL) || l_1752) <= (*g_87)), 6)) , l_1806[4]) != l_1807), 15));
                    (*l_1820) = func_42(l_1752, func_34(l_1808, g_1514, g_263.f2, (safe_add_func_uint32_t_u_u(g_1811, g_962.f3)), ((g_962.f2 == 0x8F0EL) , ((safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((!((safe_rshift_func_uint8_t_u_u(func_21(((func_21((l_1796 > g_962.f1), g_215.f1) && l_1796) | 65535UL), l_1766), g_1541.f1)) , g_1385.f1)) ^ g_97), g_97)), l_1796)), g_334[5])) > g_1271.f2))));
                }
                else
                {
                    short l_1833 = 0xEA9EL;
                    (**l_1807) = l_1821;
                    g_87 = &g_88[0];
                    (*l_1751) = func_24(l_1822, (safe_sub_func_uint8_t_u_u((((g_1594.f3 == ((safe_mod_func_int8_t_s_s(g_88[0], (safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u(l_1766, 4)) != g_1535[0][5][2]) && 0UL) , (1L != (safe_rshift_func_uint16_t_u_u(((**l_1807) >= (*g_87)), g_962.f1)))), 5)))) , (-1L))) & (**l_1807)) && g_1134.f2), l_1833)), (**l_1772), g_88[0]);
                }
            }
            if ((safe_rshift_func_int16_t_s_u(g_1594.f1, ((g_283.f0 & (safe_lshift_func_uint8_t_u_s(g_1251.f1, ((void*)0 == l_1838)))) && (-3L)))))
            {
                g_87 = &g_1535[7][0][1];
            }
            else
            {
                int l_1844 = 0xFC500AF6L;
                unsigned char l_1873 = 0x83L;
                for (g_1240 = 0; (g_1240 <= 2); g_1240 += 1)
                {
                    short l_1847 = 0x23D7L;
                    int * const *l_1854 = &g_87;
                    int **l_1855 = &g_87;
                    int **l_1866 = (void*)0;
                    int **l_1867 = &g_87;
                    if (l_1839)
                        break;
                    l_1847 = (safe_lshift_func_int8_t_s_u(((g_1229.f3 < (+(safe_lshift_func_uint8_t_u_s(l_1844, 4)))) || (safe_lshift_func_int8_t_s_u(g_241.f3, 5))), l_1844));
                    (*l_1855) = func_42(g_1672, (safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((((&g_1535[0][0][0] == ((safe_rshift_func_int8_t_s_s(0x89L, 5)) , (*l_1807))) , 0UL) ^ (l_1854 != l_1838)), func_18(g_241.f3, g_1763.f1))) , 0x864FL), 5UL)));
                    (*l_1867) = func_42((safe_add_func_int8_t_s_s((l_1858 > (**l_1854)), ((((((((+(1L || (g_1859 , 0xC9L))) < ((**l_1807) == ((func_21(((safe_add_func_uint16_t_u_u(0x4BA9L, (safe_rshift_func_int8_t_s_u(g_1240, 2)))) != (l_1864 == g_471)), l_1844) | (**l_1855)) && 0L))) , (**l_1855)) | l_1865[3]) < 0x38L) <= 0xB2B3C8B1L) < 247UL) || g_1599[0][1].f3))), (**l_1807));
                    for (g_664 = 0; (g_664 <= 2); g_664 += 1)
                    {
                        int *l_1870 = (void*)0;
                        const unsigned l_1893 = 4UL;
                        (*l_1751) = func_34(((((((safe_rshift_func_int8_t_s_u(9L, 2)) & (l_1870 != &g_156)) && (((-1L) < g_1134.f1) , ((safe_sub_func_uint8_t_u_u(1UL, ((g_1594.f2 | 0UL) == (func_21(l_1873, (**l_1838)) , 0UL)))) , 0x0BL))) || (**l_1854)) ^ (*g_87)) & (**l_1807)), (*l_1751), g_88[0], g_1271.f2, g_1859.f1);
                        (*l_1751) = (**l_1838);
                        (**l_1854) = ((l_1844 <= (g_1763.f3 > (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((0x4BADL == (safe_mod_func_uint32_t_u_u((g_79.f1 >= (**l_1854)), (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((func_21((safe_add_func_int16_t_s_s(func_21(g_157[1][3], (1L != l_1844)), (**l_1867))), g_215.f2) , l_1893), 0xBEABL)), (**l_1838)))))) , l_1844), (*g_87))), (*g_87))), 0xD6FD9DDCL)))) != g_1271.f2);
                        return (**l_1855);
                    }
                }
                (*l_1807) = l_1894[5];
                (*l_1807) = (*l_1838);
            }
            (**l_1838) = (**l_1807);
            (*l_1897) = func_42(g_1594.f2, g_283.f3);
        }
        else
        {
            char l_1901 = 8L;
            const int **l_1907 = (void*)0;
            const int ***l_1906 = &l_1907;
            char l_1916[7];
            int l_1946 = (-1L);
            int i;
            for (i = 0; i < 7; i++)
                l_1916[i] = 0x1BL;
            (*l_1751) = ((safe_unary_minus_func_int8_t_s(0x82L)) == func_21((safe_add_func_int32_t_s_s(l_1901, 4294967288UL)), (((void*)0 != g_92) >= ((safe_lshift_func_int8_t_s_u(((void*)0 == l_1906), 4)) | (!(g_92 != (void*)0))))));
            for (l_1901 = 3; (l_1901 > 7); l_1901++)
            {
                unsigned l_1910 = 0UL;
                int **l_1931 = &l_1751;
                const short l_1936 = 0L;
                struct S0 * const *l_1943 = &g_176;
                (*l_1751) = (((l_1910 , g_215.f1) ^ (**l_1807)) || (func_21((l_1910 || (((l_1901 & (g_334[5] , (**l_1807))) >= (safe_mul_func_uint8_t_u_u(255UL, (l_1910 != l_1913)))) , g_1672)), l_1910) && 0UL));
                for (l_1913 = 0; (l_1913 <= (-15)); l_1913--)
                {
                    int *l_1917 = &g_1535[3][4][0];
                    for (g_1811 = 0; (g_1811 <= 3); g_1811 += 1)
                    {
                        int **l_1918 = (void*)0;
                        int **l_1919 = (void*)0;
                        int **l_1920 = &g_87;
                        (*l_1920) = func_42(((g_1255.f0 & (!(g_1594.f2 > ((l_1916[6] , &g_88[0]) != l_1917)))) , g_1630.f0), func_21(g_157[2][1], g_88[0]));
                        (*l_1920) = &g_1811;
                        (*l_1920) = (void*)0;
                        (*l_1807) = &g_1811;
                    }
                }
                if ((l_1910 & func_18(l_1910, (safe_sub_func_int8_t_s_s((g_1240 <= g_411.f3), (l_1874 == ((**l_1807) , l_1874)))))))
                {
                    int l_1937 = 0x9290C33FL;
                    (*l_1661) = &g_87;
                    (**l_1807) = ((g_1345.f2 && (safe_lshift_func_uint8_t_u_s((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_1596.f0, 0xD5L)), g_1541.f2)) | g_962.f1) , g_215.f3), 7))) != 0x3AL);
                }
                else
                {
                    unsigned short l_1942 = 0UL;
                    for (l_6 = 0; (l_6 < (-19)); l_6 = safe_sub_func_int16_t_s_s(l_6, 1))
                    {
                        (**l_1807) = 0x0C47958CL;
                    }
                    if ((safe_lshift_func_uint16_t_u_u(g_241.f1, 9)))
                    {
                        struct S0 **l_1945 = &l_1874;
                        (*l_1751) = l_1942;
                        if ((*l_1751))
                            break;
                        (*l_1945) = ((((**l_1931) , func_21((**l_1931), (g_371.f1 , ((l_1943 == (l_1944 , &g_1595[0][2][1])) > 0x3A179528L)))) >= g_66) , l_1874);
                    }
                    else
                    {
                        (**l_1807) = l_1942;
                        if (l_1942)
                            continue;
                    }
                }
                l_1946 = ((&g_1595[3][3][0] == (void*)0) != ((((2UL && g_1624.f2) > (func_21((((void*)0 == (*l_1931)) , g_663[2].f2), (!g_283.f2)) , 247UL)) && 0x8B3CEC72L) , g_1255.f3));
            }
        }
        (*l_1807) = (*l_1807);
    }
    return g_1947;
}







static const int func_4(char p_5)
{
    unsigned char l_1646 = 0x91L;
    int * const l_1647 = (void*)0;
    int **l_1648 = &g_87;
    int *l_1649 = &g_1240;
    l_1646 = func_7(g_9);
    (*l_1648) = l_1647;
    (*l_1649) = 5L;
    return p_5;
}







static const int func_7(int p_8)
{
    unsigned short l_13[10];
    int *l_1360[6][8][4] = {{{&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}}, {{&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}}, {{&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}}, {{&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}}, {{&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}}, {{&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}, {&g_1240, &g_88[0], &g_88[0], &g_1240}}};
    unsigned char l_1363 = 0x5AL;
    const struct S0 *l_1384[3];
    const struct S0 ** const l_1383[8][10][3] = {{{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}, {{(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}, {(void*)0, &l_1384[0], &l_1384[0]}}};
    const struct S0 ** const *l_1382 = &l_1383[7][2][1];
    unsigned short l_1404 = 0UL;
    int **l_1414 = &g_87;
    short l_1515 = (-1L);
    unsigned l_1570 = 0UL;
    int *l_1642 = &g_1535[3][4][0];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_13[i] = 0xF82DL;
    for (i = 0; i < 3; i++)
        l_1384[i] = &g_1385;
    g_88[0] = func_10(l_13[1], (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_8, func_18(func_21((func_24(p_8, func_29(p_8, func_34(p_8, p_8, p_8, p_8, l_13[1]), p_8, p_8), p_8, p_8) & p_8), g_283.f2), g_714))), g_663[2].f2)));
    if ((((safe_lshift_func_int8_t_s_u(l_1363, (!0xC3L))) , func_34(p_8, g_371.f0, (safe_add_func_int32_t_s_s((g_283.f2 | (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(2L, (p_8 ^ 2L))), 0x00L))), 0x46A057BFL)), p_8, g_66)) < g_88[0]))
    {
        int l_1372 = 0xF986A1B7L;
        const struct S0 **l_1381 = (void*)0;
        const struct S0 *** const l_1380[9][6][3] = {{{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}, {{&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}, {&l_1381, &l_1381, &l_1381}}};
        int ** const l_1395 = &l_1360[1][5][3];
        unsigned l_1430 = 1UL;
        short l_1470 = 7L;
        int l_1471 = 0L;
        int l_1523 = 0x44ADBB75L;
        unsigned short l_1551 = 0x852AL;
        int i, j, k;
        for (g_449 = 0; (g_449 <= 3); g_449 += 1)
        {
            unsigned char l_1373 = 255UL;
            l_1372 = (safe_lshift_func_int16_t_s_u((-1L), 1));
            l_1373 = (-1L);
            if (p_8)
                break;
            for (g_664 = 0; (g_664 <= 3); g_664 += 1)
            {
                unsigned short l_1394 = 0x46CDL;
                int **l_1396 = &l_1360[2][2][2];
                for (g_97 = 0; (g_97 <= 3); g_97 += 1)
                {
                    const unsigned short l_1379 = 0xC857L;
                    int l_1386 = 1L;
                    for (g_156 = 3; (g_156 >= 0); g_156 -= 1)
                    {
                        int **l_1374 = &l_1360[1][5][3];
                        int i, j, k;
                        (*l_1374) = (void*)0;
                        if (p_8)
                            break;
                    }
                    l_1386 = (((safe_mod_func_int8_t_s_s(func_34(g_265.f3, g_1250.f1, l_1379, l_1373, g_263.f1), p_8)) == (l_1380[2][0][1] == l_1382)) | p_8);
                    g_1240 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_1250.f3, g_1250.f2)), (((safe_unary_minus_func_int8_t_s(l_1394)) , g_471) == g_471))) && (!((l_1395 != l_1396) ^ ((0x93AFB4F3L != (safe_sub_func_uint32_t_u_u(g_215.f1, l_1386))) <= p_8))));
                    (*l_1395) = (*l_1396);
                }
            }
        }
        if ((safe_sub_func_uint8_t_u_u(0x93L, ((safe_unary_minus_func_uint16_t_u((l_1360[1][5][3] == &g_88[0]))) , (((safe_add_func_int16_t_s_s(g_97, (func_34(g_1019.f0, p_8, g_664, g_449, p_8) == p_8))) == p_8) || p_8)))))
        {
            for (g_9 = 6; (g_9 == 14); g_9 = safe_add_func_uint32_t_u_u(g_9, 9))
            {
                (*l_1395) = &g_66;
            }
            return p_8;
        }
        else
        {
            int l_1417 = (-1L);
            int **l_1422 = &g_87;
            struct S0 *l_1505 = (void*)0;
            const unsigned l_1557 = 0x00C67959L;
            int **l_1558 = &l_1360[0][0][1];
            unsigned short l_1565 = 0x23F0L;
            for (g_9 = (-29); (g_9 < 2); g_9 = safe_add_func_int16_t_s_s(g_9, 9))
            {
                int l_1411 = 0xB8C7DB8DL;
                int *l_1439[1][3][5] = {{{(void*)0, (void*)0, &g_1240, &g_156, &g_88[0]}, {(void*)0, (void*)0, &g_1240, &g_156, &g_88[0]}, {(void*)0, (void*)0, &g_1240, &g_156, &g_88[0]}}};
                const int * const l_1444[7] = {&l_1417, &l_1417, (void*)0, &l_1417, &l_1417, (void*)0, &l_1417};
                const int * const *l_1443 = &l_1444[2];
                const int * const ** const l_1442[6] = {&l_1443, &l_1443, &l_1443, &l_1443, &l_1443, &l_1443};
                struct S0 **l_1445 = &g_176;
                unsigned char l_1460 = 255UL;
                unsigned l_1466[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1466[i] = 0xF9833600L;
                if (g_1250.f1)
                {
                    unsigned short l_1423 = 0xFE41L;
                    const int * const * const *l_1431 = (void*)0;
                    int l_1432 = (-1L);
                    struct S0 ***l_1453 = &l_1445;
                    g_87 = l_1360[1][5][3];
                    if (((safe_rshift_func_uint8_t_u_s(p_8, 6)) > l_1411))
                    {
                        (*l_1395) = &g_156;
                    }
                    else
                    {
                        unsigned short l_1415 = 0x3769L;
                        l_1423 = (safe_add_func_uint8_t_u_u((&g_87 == l_1414), (l_1415 , (func_21(((safe_unary_minus_func_int32_t_s(((-2L) && l_1417))) , ((l_1417 != 248UL) , (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((l_1417 || ((&l_1360[1][5][3] == l_1422) < p_8)) , 0x92L), p_8)), g_91.f0)))), g_663[2].f1) ^ 0x4EA4L))));
                    }
                    if ((safe_sub_func_int16_t_s_s(0xB6C6L, (((safe_add_func_uint32_t_u_u(func_21(l_1411, (g_1271.f2 , (g_92 != (((safe_sub_func_int32_t_s_s(l_1430, l_1417)) , func_21(g_97, (((l_1411 >= g_912.f1) & g_1385.f2) ^ 0xFA5FL))) , g_92)))), p_8)) <= p_8) , (-1L)))))
                    {
                        l_1432 = ((l_1423 || ((p_8 | (g_663[2].f0 > 0x17L)) == g_1250.f2)) , (l_1431 != (void*)0));
                        (*l_1395) = (*l_1395);
                        (*l_1414) = (*l_1422);
                    }
                    else
                    {
                        short l_1433[2];
                        int l_1434 = 0x4F9B3345L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1433[i] = 0xD4C1L;
                        l_1434 = l_1433[1];
                    }
                    if ((safe_add_func_uint8_t_u_u((p_8 | (g_1327.f1 , (safe_unary_minus_func_uint16_t_u(0x268DL)))), (g_263.f1 && g_283.f2))))
                    {
                        int *l_1438 = &l_1417;
                        l_1439[0][0][2] = l_1438;
                        g_1240 = (p_8 == ((p_8 , ((*l_1438) | (&g_87 != (g_230[1] , &l_1438)))) | ((g_873.f1 | (safe_mod_func_int8_t_s_s((func_21((&l_1395 == l_1442[2]), g_157[0][2]) < 0x4EEABC11L), p_8))) ^ g_157[3][2])));
                        (*l_1438) = (+(p_8 , (+((l_1445 != (*l_1382)) , ((func_21(g_663[2].f0, g_9) >= (safe_lshift_func_uint16_t_u_s(((((void*)0 == &l_1414) < g_9) | p_8), g_1327.f2))) || p_8)))));
                    }
                    else
                    {
                        int l_1448 = 0xEF2948B5L;
                        int l_1461[8] = {0L, 0L, 0x5C36181EL, 0L, 0L, 0x5C36181EL, 0L, 0L};
                        int i;
                        l_1417 = (!l_1448);
                        g_88[0] = (((safe_add_func_int32_t_s_s(((((safe_sub_func_uint32_t_u_u(p_8, p_8)) & (~(g_66 | ((g_263.f2 , l_1453) == g_471)))) , ((*l_1382) != (((l_1431 == (void*)0) == 0xF69F6E2AL) , (*l_1453)))) , p_8), 0UL)) || p_8) , 0xC9B64145L);
                        l_1461[4] = (0x0FL == (safe_rshift_func_uint16_t_u_s((p_8 < (safe_sub_func_uint8_t_u_u(0x97L, (safe_lshift_func_int16_t_s_s((((g_1119.f2 || p_8) <= (0xBF554BF7L || g_283.f1)) <= g_1385.f1), ((func_21((p_8 , p_8), p_8) | l_1460) != p_8)))))), g_157[0][2])));
                    }
                }
                else
                {
                    unsigned char l_1467 = 1UL;
                    (*l_1395) = (((((safe_add_func_uint8_t_u_u(p_8, (&l_1414 != (void*)0))) && (safe_add_func_int32_t_s_s(func_21(g_1119.f3, l_1466[1]), p_8))) , g_1345.f3) , l_1467) , (*l_1395));
                }
                l_1471 = (g_230[1].f0 , (((((3L ^ g_157[0][2]) , g_92) != g_92) , (safe_rshift_func_uint16_t_u_s(l_1470, g_1250.f2))) , func_21(p_8, g_1119.f2)));
                if (((8L & l_1430) < (p_8 , func_21(p_8, p_8))))
                {
                    short l_1487 = 0x8602L;
                    for (g_214 = 0; (g_214 < 14); g_214 = safe_add_func_uint8_t_u_u(g_214, 1))
                    {
                        (*l_1422) = &l_1417;
                    }
                    for (g_449 = 0; (g_449 > (-6)); g_449 = safe_sub_func_uint16_t_u_u(g_449, 8))
                    {
                        (*l_1395) = &g_88[0];
                        g_66 = (g_1476 , func_21(((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((0x19L >= (func_21(g_1112.f1, p_8) != (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((!(1L >= p_8)), (~g_79.f1))), (p_8 < p_8))))), g_873.f1)), p_8)) && g_1119.f2), g_230[1].f2)) >= (-5L)), l_1487));
                        g_87 = &g_156;
                        (*l_1414) = &g_156;
                    }
                }
                else
                {
                    struct S0 *l_1498 = (void*)0;
                    int l_1499 = 0L;
                    for (g_714 = 0; (g_714 <= (-24)); g_714 = safe_sub_func_uint8_t_u_u(g_714, 4))
                    {
                        unsigned char l_1504 = 0UL;
                        (*l_1422) = ((p_8 >= (((safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u((((g_411.f3 && (&l_1395 != g_92)) & (l_1498 != (l_1499 , ((safe_sub_func_uint16_t_u_u((2UL <= (safe_sub_func_int8_t_s_s(g_962.f2, (!4UL)))), l_1504)) , l_1505)))) | p_8), 11)))), p_8)))) >= p_8) > p_8)) , (*l_1395));
                        (*l_1414) = &l_1499;
                    }
                }
            }
            for (g_664 = 0; (g_664 <= 9); g_664 += 1)
            {
                struct S0 **l_1510 = &g_176;
                struct S0 ***l_1509[6][10][3] = {{{&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}}, {{&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}}, {{&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}}, {{&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}}, {{&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}}, {{&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}, {&l_1510, &l_1510, &l_1510}}};
                int l_1520[4] = {(-6L), 1L, (-6L), 1L};
                unsigned l_1522 = 4UL;
                int i, j, k;
                if (l_13[g_664])
                    break;
                if (p_8)
                    break;
                for (l_1471 = 0; (l_1471 <= 3); l_1471 += 1)
                {
                    int *l_1506 = &l_1471;
                    unsigned char l_1513 = 1UL;
                    for (g_97 = 3; (g_97 >= 0); g_97 -= 1)
                    {
                        struct S0 **l_1508 = &l_1505;
                        struct S0 ***l_1507 = &l_1508;
                        int l_1516 = 0xC0D19F9DL;
                        int i, j;
                        (*l_1422) = l_1506;
                        if (g_157[l_1471][l_1471])
                            break;
                        l_1516 = (func_34(g_157[l_1471][l_1471], p_8, g_156, (g_157[l_1471][l_1471] && ((((((p_8 , (l_1507 != l_1509[3][2][2])) <= p_8) | (((safe_sub_func_uint16_t_u_u(((((4UL & (**l_1422)) > g_371.f3) , 0xEB71B787L) , g_97), 0x4741L)) > (-10L)) > l_1513)) , (void*)0) != &l_1360[2][7][1]) < g_1514)), l_13[g_664]) | l_1515);
                    }
                    for (g_91.f3 = 0; g_91.f3 < 6; g_91.f3 += 1)
                    {
                        for (g_962.f3 = 0; g_962.f3 < 8; g_962.f3 += 1)
                        {
                            for (g_79.f3 = 0; g_79.f3 < 4; g_79.f3 += 1)
                            {
                                l_1360[g_91.f3][g_962.f3][g_79.f3] = &g_88[0];
                            }
                        }
                    }
                    if (p_8)
                    {
                        int **l_1519 = &l_1360[1][2][2];
                        (*l_1519) = func_42((safe_lshift_func_uint8_t_u_u(l_13[g_664], g_265.f0)), g_156);
                    }
                    else
                    {
                        char l_1521 = 0x37L;
                        struct S0 ** const l_1540 = &g_176;
                        int l_1542[5][5][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}}};
                        int i, j, k;
                        l_1520[1] = func_18((p_8 , g_91.f2), p_8);
                        l_1523 = l_1522;
                        l_1520[0] = (safe_lshift_func_int16_t_s_s(g_411.f2, ((safe_unary_minus_func_int16_t_s((safe_sub_func_int8_t_s_s(l_1520[1], (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s(0x2E55L, 2)), 11)) != (p_8 <= func_21(g_1251.f2, ((g_1535[3][4][0] , ((safe_lshift_func_int16_t_s_s(p_8, (((((safe_add_func_uint8_t_u_u(p_8, p_8)) , (void*)0) == l_1540) == g_1019.f2) && (*l_1506)))) ^ g_215.f1)) , g_1535[3][4][0])))), 5)))))) , g_623)));
                        l_1542[2][0][0] = (g_1541 , 0xE68321B0L);
                    }
                    l_1551 = (func_18((*l_1506), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((*l_1506), ((&g_411 == (void*)0) < (p_8 || p_8)))), ((((255UL >= p_8) , (0xD511564FL >= g_1119.f0)) && p_8) == p_8))) != (*l_1506)) == (*l_1506)), p_8)), g_9))) >= p_8);
                    for (l_1363 = 0; (l_1363 <= 9); l_1363 += 1)
                    {
                        l_1520[1] = ((p_8 >= p_8) < l_1520[1]);
                    }
                }
            }
            (*l_1558) = func_42(((p_8 , func_42(((((p_8 >= (safe_sub_func_uint8_t_u_u(g_714, g_962.f2))) != (g_1271.f1 <= p_8)) ^ (safe_add_func_int32_t_s_s(p_8, (safe_unary_minus_func_int16_t_s(g_156))))) , p_8), g_912.f1)) != (void*)0), g_1271.f1);
            l_1523 = (((safe_add_func_uint16_t_u_u(g_91.f2, (((4L == ((g_334[4] < g_263.f1) | g_1271.f2)) <= (safe_sub_func_uint8_t_u_u(func_21((((g_88[0] || ((g_88[0] & (safe_add_func_int8_t_s_s(p_8, 0x67L))) <= 0xF6L)) || 0xE0L) != g_334[0]), p_8), l_1565))) == g_1271.f1))) , p_8) , p_8);
        }
        g_1535[5][4][1] = (safe_sub_func_uint16_t_u_u(g_1112.f2, l_1471));
        if ((255UL >= func_18((((func_21(p_8, p_8) != ((p_8 , g_873.f2) , 0x4100F46CL)) && (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_8, ((((p_8 , 1UL) || 0L) >= p_8) == p_8))), p_8))) ^ g_962.f1), p_8)))
        {
            int ***l_1578 = &l_1414;
            unsigned char l_1583 = 7UL;
            unsigned l_1584 = 4294967295UL;
            g_88[0] = (safe_sub_func_uint32_t_u_u((((safe_unary_minus_func_uint16_t_u((0xF1L != p_8))) , l_1578) == (void*)0), ((safe_rshift_func_uint8_t_u_u(g_1019.f0, ((safe_mod_func_uint16_t_u_u((7UL > ((l_1583 < (p_8 || p_8)) ^ p_8)), p_8)) || 0xBDL))) , p_8)));
            for (l_1470 = 0; (l_1470 <= 2); l_1470 += 1)
            {
                l_1584 = p_8;
                return p_8;
            }
        }
        else
        {
            char l_1585 = 0x64L;
            const int *l_1611[2][2][2] = {{{(void*)0, &g_1240}, {(void*)0, &g_1240}}, {{(void*)0, &g_1240}, {(void*)0, &g_1240}}};
            const int ** const l_1610 = &l_1611[0][1][1];
            struct S0 *l_1629 = &g_1630;
            unsigned short l_1638[2][10];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1638[i][j] = 0xFD2DL;
            }
            if (l_1585)
            {
                struct S0 *l_1593[8];
                int l_1600[6];
                int ***l_1616 = &l_1414;
                int i;
                for (i = 0; i < 8; i++)
                    l_1593[i] = &g_1594;
                for (i = 0; i < 6; i++)
                    l_1600[i] = 0x62C5EF1CL;
                for (g_214 = 12; (g_214 < 20); g_214 = safe_add_func_uint8_t_u_u(g_214, 1))
                {
                    struct S0 * const l_1598[1] = {&g_1599[0][1]};
                    int l_1601 = 0x98F8BF4DL;
                    int i;
                    if (func_21(((func_34((safe_mod_func_int8_t_s_s(0x1BL, (safe_unary_minus_func_int8_t_s(g_1229.f1)))), (safe_rshift_func_int16_t_s_u(p_8, (((l_1593[0] == g_1595[0][2][1]) == func_21(((((void*)0 != g_471) , g_176) == l_1598[0]), g_664)) & p_8))), g_1385.f2, l_1600[1], l_1601) & l_1585) , p_8), l_1601))
                    {
                        const unsigned char l_1609 = 0UL;
                        int l_1619 = 1L;
                        l_1619 = (safe_mod_func_int8_t_s_s((!(((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((l_1609 && ((l_1610 == (p_8 , &l_1360[1][5][3])) , (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((l_1616 == (void*)0), p_8)), p_8)))))) , g_1134.f2), 1UL)) | l_1609), 1)) || 0xF1C9E2FDL) != l_1609)), (-1L)));
                    }
                    else
                    {
                        (**l_1616) = (void*)0;
                        (**l_1616) = (g_241.f1 , &l_1601);
                        (**l_1616) = (*l_1414);
                    }
                    for (l_1551 = 0; (l_1551 < 17); l_1551 = safe_add_func_uint32_t_u_u(l_1551, 1))
                    {
                        l_1600[4] = (0x84CDL <= (((void*)0 == &l_1395) || (safe_add_func_int8_t_s_s(((g_1624 , l_1598[0]) != l_1598[0]), ((g_1599[0][1].f1 < (g_962.f2 | g_663[2].f1)) <= g_263.f2)))));
                        if (p_8)
                            continue;
                    }
                }
                g_1635 = (func_34(g_1327.f1, (g_1112.f1 > g_157[0][2]), (safe_lshift_func_uint8_t_u_s((g_88[0] > ((*l_1616) == &l_1611[0][1][1])), ((((((safe_sub_func_int8_t_s_s((l_1629 == (((safe_mod_func_int8_t_s_s(1L, ((safe_add_func_uint16_t_u_u((g_828 == 0x36A1L), p_8)) | 0x98BDL))) >= g_66) , l_1593[1])), g_334[2])) , &l_1610) != l_1616) >= g_157[0][2]) , l_1593[3]) == (void*)0))), g_1271.f1, g_663[2].f1) , p_8);
                for (g_623 = 0; (g_623 <= 3); g_623 += 1)
                {
                    int * const l_1636 = &g_1535[3][4][0];
                    int **l_1637 = &l_1360[1][5][3];
                    (*l_1637) = l_1636;
                    (*l_1636) = l_1638[1][0];
                    l_1600[2] = 2L;
                    for (g_66 = 3; (g_66 >= 0); g_66 -= 1)
                    {
                        (*l_1636) = 0x1B5D1FE5L;
                    }
                }
            }
            else
            {
                (*l_1414) = (void*)0;
            }
        }
    }
    else
    {
        struct S0 *l_1639 = &g_263;
        (*l_1642) = ((l_1639 == &g_263) >= (safe_lshift_func_int16_t_s_s((&g_156 != l_1642), 9)));
    }
    for (l_1570 = 0; (l_1570 > 23); l_1570 = safe_add_func_int16_t_s_s(l_1570, 7))
    {
        int *l_1645[7] = {&g_88[0], &g_88[0], (void*)0, &g_88[0], &g_88[0], (void*)0, &g_88[0]};
        int i;
        (*l_1414) = l_1645[0];
    }
    return (*l_1642);
}







static int func_10(char p_11, unsigned p_12)
{
    char l_1046 = 0L;
    struct S0 ***l_1072 = (void*)0;
    int l_1075 = 0xD6DDE62DL;
    short l_1080[8][9] = {{0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}, {0x7B6BL, 0L, (-2L), (-2L), 0L, 0x7B6BL, 4L, 0L, 1L}};
    int **l_1082[9][8] = {{&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}, {&g_87, &g_87, &g_87, &g_87, (void*)0, &g_87, &g_87, &g_87}};
    int ***l_1081 = &l_1082[0][7];
    unsigned l_1109 = 0x158D6470L;
    unsigned l_1176 = 4UL;
    struct S0 **l_1313[7][9] = {{(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}, {(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}, {(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}, {(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}, {(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}, {(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}, {(void*)0, &g_176, &g_176, &g_176, (void*)0, &g_176, &g_176, &g_176, (void*)0}};
    int i, j;
    for (g_664 = 0; (g_664 <= 21); ++g_664)
    {
        struct S0 **l_1050[1][1][1];
        struct S0 ***l_1049 = &l_1050[0][0][0];
        int **l_1051[5];
        int **l_1052[9] = {&g_87, &g_87, &g_87, &g_87, &g_87, &g_87, &g_87, &g_87, &g_87};
        int **l_1053[6] = {&g_87, &g_87, &g_87, &g_87, &g_87, &g_87};
        int **l_1054 = &g_87;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1050[i][j][k] = &g_176;
            }
        }
        for (i = 0; i < 5; i++)
            l_1051[i] = &g_87;
        (*l_1054) = func_42(p_12, (((safe_rshift_func_int8_t_s_s(1L, ((~l_1046) >= (safe_add_func_int32_t_s_s((g_215.f0 , 0xE7CF39D3L), 1L))))) ^ (l_1049 == (void*)0)) , l_1046));
        for (g_449 = 0; (g_449 != 11); g_449 = safe_add_func_int8_t_s_s(g_449, 3))
        {
            short l_1057 = 2L;
            l_1057 = p_12;
            return p_12;
        }
    }
    l_1075 = ((safe_mod_func_uint8_t_u_u(l_1046, (safe_rshift_func_int16_t_s_s((l_1046 != p_11), g_79.f1)))) ^ g_623);
    if ((safe_rshift_func_uint16_t_u_u((p_12 & 3UL), 5)))
    {
        int l_1085 = (-3L);
        struct S0 **l_1090[6][4][2] = {{{&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}}, {{&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}}, {{&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}}, {{&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}}, {{&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}}, {{&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}, {&g_176, &g_176}}};
        int i, j, k;
        if (((safe_lshift_func_uint8_t_u_s(((((l_1085 & (l_1085 , ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((g_961 <= g_215.f3), l_1085)), (((func_21(l_1085, p_12) > (l_1090[2][1][0] == l_1090[5][1][0])) & g_230[1].f2) | l_1085))) && p_12))) >= 65535UL) , 0xE2F4L) , p_11), p_11)) | 0x90E3L))
        {
            int **l_1091 = &g_87;
            (*l_1091) = func_42(g_241.f0, p_12);
        }
        else
        {
            return p_11;
        }
    }
    else
    {
        unsigned l_1102 = 0xD7C55059L;
        int *l_1113 = &g_88[0];
        const short l_1123 = 5L;
        struct S0 **l_1180 = &g_176;
        int l_1193 = 0xEAF102DDL;
        unsigned char l_1209 = 0xF7L;
        int l_1210 = (-1L);
        for (g_664 = 0; (g_664 <= (-11)); --g_664)
        {
            struct S0 * const *l_1094 = &g_176;
            int ** const l_1095[6][6][5] = {{{&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}}, {{&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}}, {{&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}}, {{&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}}, {{&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}}, {{&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}, {&g_87, &g_87, &g_87, &g_87, (void*)0}}};
            char l_1103 = 2L;
            struct S0 **l_1104 = &g_176;
            int i, j, k;
            g_88[0] = (((l_1094 == l_1094) != (&g_87 == l_1095[0][3][1])) ^ (((l_1102 > p_12) , p_12) ^ p_11));
            if (l_1102)
                continue;
            (*l_1104) = (*l_1094);
        }
        for (g_97 = 5; (g_97 == 11); g_97 = safe_add_func_uint16_t_u_u(g_97, 4))
        {
            int **l_1114 = &l_1113;
            struct S0 ***l_1141 = (void*)0;
            int l_1181 = 0x0F54D1F8L;
            unsigned l_1195 = 4294967286UL;
            (*l_1081) = &g_87;
            l_1113 = ((p_12 ^ ((func_21(g_961, (safe_lshift_func_int16_t_s_u(0xEA5EL, ((l_1109 & g_215.f0) , (((void*)0 == &g_87) == (safe_lshift_func_uint8_t_u_u((g_1112 , g_663[2].f2), p_11))))))) || g_157[3][0]) , p_12)) , (void*)0);
            (*l_1081) = l_1114;
            for (g_623 = 0; (g_623 <= 3); g_623 += 1)
            {
                int l_1142 = (-3L);
                int *l_1145 = &g_88[0];
                const short l_1196 = 0L;
                for (g_714 = 3; (g_714 >= 0); g_714 -= 1)
                {
                    int *l_1144 = (void*)0;
                    struct S0 *l_1194 = &g_663[2];
                    int i, j;
                    l_1113 = &g_156;
                    if (g_157[g_714][g_714])
                        break;
                    for (g_214 = 0; (g_214 <= 0); g_214 += 1)
                    {
                        int **l_1122 = &l_1113;
                        struct S0 **l_1136[5];
                        struct S0 ** const *l_1135 = &l_1136[2];
                        char l_1143 = 0xC6L;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_1136[i] = (void*)0;
                        (*l_1114) = &g_88[g_214];
                        (*l_1113) = (((((((((g_88[g_214] ^ l_1080[(g_623 + 3)][(g_214 + 5)]) , (safe_lshift_func_uint8_t_u_u((l_1114 == ((safe_lshift_func_int16_t_s_u((((g_1119 , (((*l_1113) ^ (0x6B81CAF0L & (((*l_1113) , (safe_rshift_func_uint8_t_u_s(g_157[g_714][g_714], ((p_12 >= p_12) , p_11)))) && p_11))) , p_11)) && g_91.f0) != (**l_1114)), 14)) , l_1122)), g_157[g_714][g_714]))) , (**l_1122)) <= g_283.f1) > 0x8F99L) & p_11) != (*l_1113)) ^ (*l_1113)) > p_11);
                        (**l_1122) = ((l_1123 | ((0x595DDD69L || p_11) , (((((((safe_sub_func_int32_t_s_s(((+((g_873.f1 < ((safe_rshift_func_int8_t_s_u((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((((((((safe_add_func_int16_t_s_s(((((((g_1112.f1 && p_11) , g_1134) , l_1135) == (((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((**l_1114) || p_12) & g_214), g_9)), g_97)) ^ p_12) , l_1141)) | p_12) , g_1119.f1), g_88[0])) == g_714) || 0xCA1DL) & g_334[2]) & 0UL) , l_1142) >= l_1143), p_11)), 0x3A5678ADL)) , l_1144) == &g_88[0]), g_334[1])) >= l_1142)) , (**l_1122))) ^ g_156), p_11)) || p_11) ^ p_11) | (*l_1113)) , (-2L)) | g_263.f2) >= (-5L)))) | p_11);
                    }
                    if ((*l_1113))
                    {
                        int ***l_1179 = (void*)0;
                        (*l_1114) = l_1145;
                        l_1176 = ((**l_1114) || (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(func_34((l_1141 != g_471), (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(func_34(p_12, p_12, ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(65535UL, (((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u(p_11, ((safe_sub_func_uint32_t_u_u(((*l_1113) < ((safe_sub_func_int32_t_s_s(p_11, (**l_1114))) & p_11)), p_11)) | 65535UL))) || (*l_1145)) , p_11) >= p_11) & (*l_1113)), 0xB0L)), 11)) | p_11) ^ g_1112.f1))) >= p_12), 0x49CADB0CL)) , 0x03F847B4L), p_12, (*l_1145)), p_11)), 1)) == g_663[2].f1) != 0x93L) ^ (*l_1113)), (*l_1113))) > 0L), 1UL)), p_12, g_873.f2, p_12), p_11)) < 1L), 10)) , g_79.f3), 1)) != g_873.f1), 6)));
                        (*l_1113) = (((safe_mod_func_uint8_t_u_u(func_34((*l_1145), g_215.f3, g_663[2].f2, (p_12 ^ (((g_961 < func_21(g_334[2], ((p_11 , l_1179) != (void*)0))) , (void*)0) == l_1180)), g_449), 255UL)) , g_873.f0) , l_1181);
                    }
                    else
                    {
                        unsigned l_1182 = 0x986407DAL;
                        (*l_1113) = (l_1182 == ((((**l_1114) & (((safe_add_func_uint8_t_u_u(p_12, ((((safe_sub_func_uint32_t_u_u(3UL, (p_11 , ((safe_mod_func_uint8_t_u_u(func_34((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((g_79.f2 , (0x4EEDL > 0x331AL)), (p_12 | p_11))), l_1193)), l_1182, p_12, p_12, g_873.f2), 5UL)) | (-1L))))) , (**l_1114)) || g_66) < p_12))) || p_11) , 3L)) > p_11) & 0x6337L));
                        if ((*l_1113))
                            break;
                        (*l_1180) = l_1194;
                        return p_11;
                    }
                }
                if (l_1195)
                {
                    const unsigned l_1205 = 0xA640C79DL;
                    int l_1208 = 0x4721A4AEL;
                    (*l_1145) = (-10L);
                    if (l_1196)
                        continue;
                    if ((safe_add_func_uint8_t_u_u((func_34(p_12, g_241.f1, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(func_21((*l_1145), (~(safe_sub_func_int8_t_s_s((p_11 & ((void*)0 == l_1180)), l_1205)))), ((!l_1205) > l_1205))), p_11)), p_11, p_12) && g_230[1].f3), p_11)))
                    {
                        l_1208 = (safe_rshift_func_uint16_t_u_u(g_1119.f3, 11));
                        return p_11;
                    }
                    else
                    {
                        l_1210 = l_1209;
                    }
                }
                else
                {
                    int l_1215[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1215[i] = 0x4C892BFAL;
                    for (l_1195 = 0; (l_1195 <= 3); l_1195 += 1)
                    {
                        int l_1218 = (-4L);
                        unsigned l_1223 = 0xE8D15DBAL;
                        if (p_12)
                            break;
                        l_1223 = (func_21(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(func_21(g_663[2].f0, (p_11 >= ((l_1215[2] >= (0xCAL < ((g_283.f2 == (safe_rshift_func_uint8_t_u_s((l_1218 != (safe_sub_func_uint8_t_u_u(((((void*)0 == &l_1114) <= (p_11 >= (*l_1145))) , 1UL), (-7L)))), 5))) == g_873.f2))) <= p_12))), p_11)), p_12)) || g_263.f2), g_156) >= p_12);
                        (*l_1114) = (*l_1114);
                    }
                }
                (*l_1114) = l_1145;
            }
        }
        l_1210 = 0x0A294D1CL;
        for (g_156 = 13; (g_156 == (-2)); g_156 = safe_sub_func_int32_t_s_s(g_156, 7))
        {
            int *l_1226 = (void*)0;
            l_1226 = &g_156;
        }
    }
    if (p_11)
    {
        char l_1239 = (-1L);
        int **l_1254 = &g_87;
        unsigned l_1256[2][10][1] = {{{0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}}, {{0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}, {0x6650A732L}}};
        unsigned l_1274 = 4294967286UL;
        short l_1291 = (-1L);
        struct S0 * const *l_1312 = &g_176;
        char l_1337[3][4] = {{(-9L), 0x1EL, 0L, 0L}, {(-9L), 0x1EL, 0L, 0L}, {(-9L), 0x1EL, 0L, 0L}};
        int l_1342[3];
        int **l_1357[9][3][3] = {{{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}, {{(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}, {(void*)0, (void*)0, &g_87}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1342[i] = 8L;
        for (g_664 = 0; (g_664 > 12); g_664 = safe_add_func_uint8_t_u_u(g_664, 5))
        {
            char l_1238 = (-4L);
            int l_1241 = 0xF5DA270EL;
            int l_1257 = 0x998F65EAL;
            struct S0 *l_1295 = &g_873;
            l_1241 = (((1L ^ (g_1229 , ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((p_12 , (p_11 , (p_12 < ((safe_add_func_int16_t_s_s(l_1238, ((((p_11 , l_1238) ^ ((0xF3AAA7EAL || p_12) , l_1238)) , (void*)0) == &g_176))) >= l_1239)))), l_1239)), g_1240)), l_1238)) | 0xBDL))) > p_11) && p_12);
            for (p_11 = 0; (p_11 <= 0); p_11 += 1)
            {
                int i;
                g_87 = &g_88[p_11];
            }
            for (g_1240 = 12; (g_1240 > (-19)); --g_1240)
            {
                return p_12;
            }
            if ((safe_lshift_func_int16_t_s_s((((((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_1250 , func_18(p_11, (((g_1251 , func_21((safe_lshift_func_uint8_t_u_s((l_1254 == &g_87), (g_1255 , ((((func_21(g_214, p_11) <= g_263.f0) || (-1L)) , p_12) & 0L)))), l_1256[0][5][0])) <= 0x0620L) || 2UL))), l_1241)), (-1L))) < g_664) || l_1257) && g_157[3][0]) == g_283.f1), g_230[1].f2)))
            {
                int *l_1266 = &g_66;
                const int l_1309 = 7L;
                for (l_1075 = 22; (l_1075 >= 9); l_1075--)
                {
                    int l_1264[8] = {0x9123B8BEL, 0x9123B8BEL, 0x939515D0L, 0x9123B8BEL, 0x9123B8BEL, 0x939515D0L, 0x9123B8BEL, 0x9123B8BEL};
                    int l_1265 = 0L;
                    int i;
                    l_1265 = func_18(((safe_mod_func_int8_t_s_s((((p_12 , p_11) , ((g_1134.f0 >= (((g_663[2].f2 && ((safe_add_func_int32_t_s_s((g_1240 , 0L), g_1251.f2)) | (g_663[2].f2 != (l_1257 , p_12)))) >= l_1264[7]) >= g_215.f1)) , g_1019.f3)) , 0x92L), p_11)) > g_97), g_1251.f2);
                    if (p_12)
                        break;
                }
                g_87 = l_1266;
                for (l_1238 = (-6); (l_1238 == 7); l_1238++)
                {
                    return (**l_1254);
                }
                if ((safe_mod_func_uint32_t_u_u(((~(func_21(p_11, (p_11 || (0x2CA918E0L <= (g_1271 , func_34(p_11, g_1271.f3, g_97, (((safe_rshift_func_uint8_t_u_u((func_21(g_283.f1, (**l_1254)) , p_12), g_1251.f2)) | (**l_1254)) == g_1250.f1), l_1241))))) && g_265.f3)) <= l_1274), (-4L))))
                {
                    struct S0 **l_1281 = &g_176;
                    struct S0 *** const l_1280 = &l_1281;
                    for (p_11 = 0; (p_11 >= (-11)); p_11 = safe_sub_func_int16_t_s_s(p_11, 8))
                    {
                        int **l_1279 = &l_1266;
                        (*l_1279) = func_42((safe_rshift_func_uint16_t_u_u(p_11, g_1134.f1)), g_334[2]);
                        (*g_87) = (*g_87);
                        (*g_87) = (g_471 != l_1280);
                        return (**l_1279);
                    }
                    (*l_1254) = ((*l_1266) , (void*)0);
                }
                else
                {
                    int l_1286[10][5][5] = {{{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}, {{(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}, {(-1L), 0x3C2D2ADBL, (-4L), (-10L), (-1L)}}};
                    struct S0 *l_1294[5][10] = {{&g_230[1], &g_1250, (void*)0, &g_873, &g_1250, &g_230[1], &g_1250, &g_873, (void*)0, &g_1250}, {&g_230[1], &g_1250, (void*)0, &g_873, &g_1250, &g_230[1], &g_1250, &g_873, (void*)0, &g_1250}, {&g_230[1], &g_1250, (void*)0, &g_873, &g_1250, &g_230[1], &g_1250, &g_873, (void*)0, &g_1250}, {&g_230[1], &g_1250, (void*)0, &g_873, &g_1250, &g_230[1], &g_1250, &g_873, (void*)0, &g_1250}, {&g_230[1], &g_1250, (void*)0, &g_873, &g_1250, &g_230[1], &g_1250, &g_873, (void*)0, &g_1250}};
                    int i, j, k;
                    (**l_1254) = p_12;
                    if ((*g_87))
                    {
                        unsigned char l_1282 = 0x45L;
                        int **l_1292 = (void*)0;
                        int **l_1293 = &l_1266;
                        (*l_1293) = func_42(l_1282, (l_1238 >= ((func_18((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_int16_t_s(l_1286[2][3][0])) != g_714), (g_1019.f2 & p_12))), (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(func_24(p_12, p_12, g_411.f2, l_1286[2][3][0]), 0)) && 0xDFL), g_215.f1))) && l_1291) , p_11)));
                        (*l_1266) = l_1286[2][3][0];
                        if (p_12)
                            break;
                        (*l_1254) = &g_88[0];
                    }
                    else
                    {
                        unsigned short l_1308 = 65529UL;
                        const unsigned short l_1310 = 0x84D8L;
                        short l_1311 = 1L;
                        (*l_1254) = &g_88[0];
                        (*g_87) = ((l_1294[1][7] == l_1295) < p_12);
                        (*g_87) = l_1311;
                        (*l_1266) = (((((((void*)0 == l_1312) < (l_1313[6][6] != &l_1294[1][7])) , func_24(l_1310, l_1311, (**l_1254), ((((0x21L != (((((p_11 >= (-1L)) | l_1286[2][3][0]) == 0L) ^ 0UL) || (-1L))) | p_12) , l_1286[8][0][0]) , p_12))) < l_1310) & p_12) || g_1112.f2);
                    }
                    (*l_1266) = (func_34(p_12, g_1229.f3, l_1257, (((*l_1254) != &l_1309) < (((-9L) != l_1286[2][3][0]) ^ ((p_12 > (+(safe_lshift_func_uint8_t_u_s(((void*)0 == &l_1295), l_1286[2][3][0])))) > 6L))), g_263.f1) && g_91.f1);
                    (*l_1266) = p_11;
                }
            }
            else
            {
                char l_1318 = 0xC8L;
                for (l_1241 = 0; l_1241 < 4; l_1241 += 1)
                {
                    for (l_1239 = 0; l_1239 < 4; l_1239 += 1)
                    {
                        g_157[l_1241][l_1239] = 0x62L;
                    }
                }
                l_1318 = 1L;
            }
        }
        for (g_714 = 6; (g_714 >= 0); g_714 -= 1)
        {
            int l_1322 = 3L;
            struct S0 **l_1348 = &g_176;
            const unsigned l_1351 = 0x538B10AFL;
            int *l_1356 = &l_1342[0];
            for (p_11 = 5; (p_11 >= 2); p_11 -= 1)
            {
                struct S0 ***l_1319 = &l_1313[5][5];
                int i;
                if ((g_334[(p_11 + 2)] | p_12))
                {
                    unsigned short l_1336 = 0UL;
                    if (((l_1319 != (void*)0) < g_334[(p_11 + 2)]))
                    {
                        g_1240 = (safe_rshift_func_int16_t_s_u((~p_12), 8));
                    }
                    else
                    {
                        struct S0 ** const l_1335 = (void*)0;
                        int **l_1338 = &g_87;
                        (*l_1338) = func_42(l_1322, (g_664 > ((safe_rshift_func_int16_t_s_u((~g_1271.f2), 9)) & (safe_rshift_func_uint16_t_u_s((g_1327 , (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_int32_t_s((l_1336 && l_1256[1][0][0]))) , (void*)0) == (void*)0) , l_1322), g_97)), l_1337[0][1]))), p_12)))));
                        if (p_12)
                            break;
                    }
                }
                else
                {
                    unsigned char l_1352 = 8UL;
                    int l_1355 = 0xC1CEB23FL;
                    for (l_1046 = 0; (l_1046 != 22); l_1046++)
                    {
                        const short l_1353 = 0L;
                        unsigned short l_1354[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1354[i] = 65535UL;
                        l_1342[0] = ((0x54L ^ (~(safe_unary_minus_func_uint8_t_u(g_241.f1)))) >= (((~func_21(l_1322, g_215.f1)) ^ 0xEA50L) >= (g_961 && 1UL)));
                        g_1240 = ((((0xB0AD96B3L && p_11) >= (safe_rshift_func_uint16_t_u_s(((g_1345 , func_34(l_1337[0][1], (p_11 | ((safe_mod_func_uint8_t_u_u((l_1348 == (void*)0), g_241.f2)) != l_1353)), g_334[(p_11 + 2)], l_1354[0], g_334[(p_11 + 2)])) , 1UL), 8))) <= g_334[(p_11 + 2)]) == p_12);
                        l_1355 = l_1353;
                    }
                }
                l_1356 = &g_1240;
                if ((*l_1356))
                    continue;
                for (g_623 = 0; (g_623 <= 8); g_623 += 1)
                {
                    (*l_1356) = (0UL && 0x132B70CAL);
                }
            }
            (*l_1254) = ((((l_1357[3][1][2] == &l_1356) | 1UL) <= (safe_sub_func_int32_t_s_s((p_12 >= g_215.f1), 7L))) , l_1356);
            (*l_1254) = (*l_1254);
        }
    }
    else
    {
        return p_11;
    }
    return p_12;
}







static char func_18(unsigned p_19, int p_20)
{
    int **l_715 = &g_87;
    unsigned short l_722 = 65532UL;
    const char l_781 = 0x84L;
    struct S0 *l_923 = &g_263;
    unsigned short l_926 = 0x7E07L;
    char l_945 = 0x02L;
    unsigned l_991 = 0xEEC77E06L;
    int l_1031 = (-1L);
    struct S0 **l_1041 = &l_923;
    (*l_715) = func_42(p_19, p_19);
    if ((g_91.f0 , ((**l_715) , ((safe_add_func_uint8_t_u_u(func_21((((safe_rshift_func_int16_t_s_u((**l_715), 6)) < (((safe_lshift_func_int8_t_s_s((**l_715), l_722)) & (safe_sub_func_int32_t_s_s(p_19, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s(g_334[2], p_20)), 1)) <= (((p_19 & p_20) ^ 0x601FL) & p_19))))) | g_215.f0)) , p_19), g_663[2].f1), p_19)) <= g_157[0][2]))))
    {
        struct S0 * const *l_741 = (void*)0;
        int l_746 = 0xF3CB8B79L;
        int **l_751 = &g_87;
        unsigned l_816 = 0UL;
        (*g_87) = ((safe_lshift_func_uint16_t_u_u((+0x4C78L), 10)) | 6UL);
        for (g_214 = 0; (g_214 <= 0); g_214 += 1)
        {
            struct S0 **l_740 = (void*)0;
            int **l_778 = &g_87;
            int i;
            if (g_88[g_214])
            {
                short l_739 = 1L;
                (*g_87) = (*g_87);
                (*g_87) = ((((safe_add_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_s(0xB2L, ((safe_rshift_func_uint16_t_u_u(((((g_91.f2 | (~l_739)) , g_371.f0) , l_740) != l_741), 11)) >= ((((*g_87) < (safe_mod_func_int32_t_s_s((g_263.f1 & ((safe_mod_func_uint8_t_u_u((((*g_87) < 0xB7A6E4B4L) , 0xB0L), p_19)) , 8L)), l_739))) == l_746) <= g_664)))) >= g_88[g_214]) > 0xDDD47DBDL) <= 0UL) || (**l_715)), (-5L))) , g_623) != g_230[1].f2) , 0x73D1D156L);
            }
            else
            {
                struct S0 *l_747 = &g_230[1];
                struct S0 **l_748 = &l_747;
                (*l_748) = l_747;
            }
            for (p_20 = 0; (p_20 <= 3); p_20 += 1)
            {
                const unsigned l_752 = 2UL;
                int *l_757 = &g_88[0];
                int ***l_775 = &l_751;
                unsigned char l_789 = 0UL;
                int l_807 = 0L;
                int i, j;
            }
        }
        for (l_816 = 0; (l_816 <= 30); l_816 = safe_add_func_uint8_t_u_u(l_816, 8))
        {
            (**l_715) = p_19;
        }
    }
    else
    {
        int l_825 = 0L;
        int **l_902 = &g_87;
        char l_903 = 0xDBL;
        struct S0 *l_915 = (void*)0;
        const struct S0 *l_922 = &g_215;
        short l_931[2];
        const struct S0 **l_984[5];
        const struct S0 ***l_983 = &l_984[4];
        int *l_1032 = &g_156;
        int i;
        for (i = 0; i < 2; i++)
            l_931[i] = 0x8C89L;
        for (i = 0; i < 5; i++)
            l_984[i] = &l_922;
        for (p_19 = 20; (p_19 < 44); p_19 = safe_add_func_int16_t_s_s(p_19, 7))
        {
            unsigned l_824 = 4294967290UL;
            int l_829 = 0x1043B3C8L;
            l_829 = func_29((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s(l_824)) < ((0xEC941196L & (func_34(g_263.f0, l_825, (func_21((((safe_sub_func_uint8_t_u_u(0UL, 1UL)) > (!(func_21(p_20, (**l_715)) <= p_20))) <= g_623), (**l_715)) < p_20), p_19, g_88[0]) < (-7L))) & 0x2FL)), g_88[0])), p_19, g_828, p_20);
            if (l_824)
            {
                for (l_824 = 0; (l_824 <= 23); l_824 = safe_add_func_uint16_t_u_u(l_824, 1))
                {
                    for (g_714 = 0; (g_714 <= 0); g_714 += 1)
                    {
                        int i;
                        return g_88[g_714];
                    }
                    return l_825;
                }
                (*g_87) = 0L;
            }
            else
            {
                (*l_715) = &p_20;
                return p_20;
            }
            (**l_715) = (safe_rshift_func_uint8_t_u_u(((p_20 != (func_34(g_663[2].f2, g_241.f0, (((safe_lshift_func_int8_t_s_u(p_19, 3)) == (((((&p_20 != ((l_829 , ((*g_87) ^ l_825)) , (void*)0)) >= 2UL) ^ g_97) , (**l_715)) > p_20)) < 0x7938L), (**l_715), l_825) && l_825)) , 0x6BL), 6));
            return p_19;
        }
        p_20 = (*g_87);
        if (((safe_mod_func_uint8_t_u_u(0xBFL, l_825)) >= ((safe_sub_func_int32_t_s_s(1L, func_29((safe_unary_minus_func_uint16_t_u(1UL)), ((**l_715) , l_825), p_20, (safe_sub_func_uint8_t_u_u((((((((p_19 ^ (l_825 , 1L)) < g_449) == l_825) ^ (**l_715)) >= g_79.f2) , (**l_715)) | (**l_715)), p_19))))) || g_79.f3)))
        {
            unsigned l_854 = 0x8F7EFC95L;
            int *l_855 = (void*)0;
            for (g_156 = 0; (g_156 <= 0); g_156 += 1)
            {
                int i;
                (*l_715) = &g_88[g_156];
                if ((((p_19 , (((safe_add_func_uint32_t_u_u(l_825, (safe_sub_func_uint32_t_u_u((p_19 < g_283.f3), ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(func_21((((0xC2ECL | (safe_lshift_func_uint16_t_u_s(((g_215.f2 ^ (g_215.f1 || 0xC6L)) < ((safe_lshift_func_int8_t_s_u(g_79.f1, 0)) <= (-5L))), 4))) > l_825) == 0x8FC26C2EL), l_854))), g_88[g_156])) >= 0x3BFE4083L))))) > 0x278EL) && g_88[g_156])) <= g_79.f1) > p_20))
                {
                    int **l_856 = &g_87;
                    (*l_715) = l_855;
                    (*l_856) = func_42(p_20, p_20);
                    p_20 = (p_19 && 0xF7407BA2L);
                }
                else
                {
                    l_855 = &g_156;
                }
            }
            for (g_9 = 0; (g_9 <= 20); g_9 = safe_add_func_int8_t_s_s(g_9, 1))
            {
                unsigned char l_869 = 0xDDL;
                (*l_715) = &g_66;
                (**l_715) = ((((safe_lshift_func_int8_t_s_s(((*g_87) <= ((safe_rshift_func_uint16_t_u_s(p_19, (g_449 , ((p_19 && (((safe_lshift_func_int16_t_s_s(1L, (0x0F10L >= (safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(func_21(l_825, p_20), g_371.f0)) | 2L) > 4UL), g_334[2]))))) > (*g_87)) < p_19)) != g_263.f2)))) ^ l_869)), 4)) || l_869) | 0UL) , (-10L));
                if ((*g_87))
                    break;
                return p_19;
            }
            (*l_715) = l_855;
        }
        else
        {
            short l_874[2][10][5] = {{{0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}}, {{0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}, {0xF4F6L, 0x6FA3L, 9L, 0x0514L, 0x6310L}}};
            int *l_887 = &g_88[0];
            int ***l_925 = &l_902;
            int *l_967 = &g_66;
            struct S0 *l_978 = &g_663[6];
            struct S0 * const *l_982 = &l_978;
            struct S0 * const **l_981[5][10] = {{&l_982, &l_982, &l_982, &l_982, &l_982, &l_982, &l_982, (void*)0, &l_982, (void*)0}, {&l_982, &l_982, &l_982, &l_982, &l_982, &l_982, &l_982, (void*)0, &l_982, (void*)0}, {&l_982, &l_982, &l_982, &l_982, &l_982, &l_982, &l_982, (void*)0, &l_982, (void*)0}, {&l_982, &l_982, &l_982, &l_982, &l_982, &l_982, &l_982, (void*)0, &l_982, (void*)0}, {&l_982, &l_982, &l_982, &l_982, &l_982, &l_982, &l_982, (void*)0, &l_982, (void*)0}};
            int l_985[9] = {0xD7864AE9L, (-4L), 0xD7864AE9L, (-4L), 0xD7864AE9L, (-4L), 0xD7864AE9L, (-4L), 0xD7864AE9L};
            unsigned l_1016 = 0xCAA63EF2L;
            int i, j, k;
            for (g_714 = 0; (g_714 > 4); g_714 = safe_add_func_int32_t_s_s(g_714, 9))
            {
                int l_878 = 1L;
                for (g_97 = 0; (g_97 >= 0); g_97 -= 1)
                {
                    int *l_872[6] = {&g_88[0], &l_825, &g_88[0], &l_825, &g_88[0], &l_825};
                    int i;
                    g_88[g_97] = (0x7C47L && g_334[(g_97 + 5)]);
                    for (g_156 = 0; (g_156 <= 0); g_156 += 1)
                    {
                        int **l_875 = &l_872[0];
                        int i;
                        (*l_875) = func_42(g_88[g_156], (((void*)0 == l_872[0]) | ((g_873 , 1UL) == ((func_21(l_874[1][9][3], g_88[0]) , (((((((*g_87) , l_825) > p_20) == 0L) , g_663[2].f1) , (void*)0) != g_92)) || 0xDFD861B7L))));
                        g_88[g_97] = (safe_rshift_func_int16_t_s_u((func_34((((+4294967295UL) != l_878) && p_20), (safe_sub_func_uint8_t_u_u(9UL, (((void*)0 != &g_87) < ((0L >= l_878) & 0L)))), p_20, g_411.f1, p_19) || 0x3F6CF1BBL), 11));
                        p_20 = (*g_87);
                        (*l_875) = &p_20;
                    }
                }
            }
            (*l_887) = ((((1L <= ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(p_19, func_29(g_230[1].f1, ((void*)0 == g_471), g_66, ((safe_add_func_uint8_t_u_u(1UL, p_20)) , g_334[2])))), 2)) | p_19)) >= 0xBFF058AFL) > g_873.f1) , l_825);
            if ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((l_825 < ((safe_mod_func_uint32_t_u_u((&p_20 == (g_241.f2 , (void*)0)), (safe_lshift_func_int16_t_s_s(l_825, 10)))) , func_34(l_825, (((safe_mod_func_uint8_t_u_u((+g_411.f1), ((((p_20 , (((void*)0 != l_902) | (**l_715))) < g_334[7]) < 1UL) , 1UL))) < 0x9F9D44D7L) && 0L), g_663[2].f2, g_88[0], l_903))) & 8UL), g_230[1].f2)), 0x937BL)) != g_283.f1), (**l_715))), 1)))
            {
                int * const **l_924 = (void*)0;
                struct S0 * const *l_948 = &l_923;
                struct S0 **l_979[8] = {&l_978, &g_176, &l_978, &g_176, &l_978, &g_176, &l_978, &g_176};
                int l_980[8][2][10] = {{{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}, {{0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}, {0x04EDE23FL, 0L, 0x0FB15990L, 1L, 6L, 1L, 0x32D1A65CL, 0xD25A0ADBL, (-1L), (-8L)}}};
                int i, j, k;
                if ((**l_902))
                {
                    unsigned char l_904 = 2UL;
                    unsigned l_909[7][8][4] = {{{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}, {{4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}, {4294967295UL, 4294967291UL, 4294967291UL, 4294967295UL}}};
                    int * const l_927 = &g_88[0];
                    struct S0 **l_941 = &l_915;
                    int i, j, k;
                    (*l_887) = ((func_24(((l_904 != (**l_715)) , ((safe_mod_func_int8_t_s_s(((!(((g_88[0] ^ (8L <= (func_21(g_230[1].f2, ((void*)0 != l_902)) && (safe_sub_func_int8_t_s_s(g_283.f1, (*l_887)))))) < l_909[5][1][1]) != 5UL)) >= (**l_902)), (**l_902))) || l_909[5][1][1])), g_91.f3, p_20, p_20) & 0x19C2BDC9L) , l_909[0][6][0]);
                    if ((p_19 && (safe_rshift_func_int8_t_s_s((g_912 , (func_21(p_20, (0x093EL | (safe_lshift_func_uint16_t_u_u(g_263.f1, 1)))) ^ l_926)), 0))))
                    {
                        int l_932 = 0x30A8DCE2L;
                        (*l_927) = p_20;
                        p_20 = ((0xB2L && ((0xEA25L || (-1L)) , (g_66 | g_664))) <= (*l_887));
                        return l_932;
                    }
                    else
                    {
                        char l_935 = 0L;
                        int ***l_940[1];
                        int **l_942 = &l_887;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_940[i] = (void*)0;
                        (*l_942) = func_42(((((void*)0 != &g_88[0]) > p_20) == g_66), (*l_927));
                        p_20 = (safe_rshift_func_uint16_t_u_s(p_20, 10));
                        (**l_942) = p_19;
                    }
                    if (func_34((g_962 , (g_230[1].f0 > (p_19 > ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((p_20 != 1L), (p_20 , g_230[1].f2))) , 0xCE32663CL), 0xA523AF39L)) == 65535UL)))), p_20, g_873.f2, g_79.f2, p_20))
                    {
                        g_88[0] = g_79.f3;
                        (*l_902) = (*l_902);
                    }
                    else
                    {
                        l_967 = &g_66;
                        g_176 = (void*)0;
                    }
                }
                else
                {
                    unsigned char l_974 = 1UL;
                    if ((*g_87))
                    {
                        (*l_887) = (**l_902);
                    }
                    else
                    {
                        struct S0 * const l_968 = &g_230[1];
                        struct S0 **l_969 = &l_923;
                        int l_977 = 0x0995C519L;
                        (*l_969) = l_968;
                        (*l_887) = func_34((4294967295UL >= (*g_87)), (!0L), (p_20 < (safe_sub_func_uint8_t_u_u(p_20, (safe_rshift_func_int16_t_s_s((l_974 , ((g_962.f3 < (safe_add_func_int16_t_s_s(func_21((l_977 != (p_19 , p_20)), g_962.f1), 0xE01BL))) < 0UL)), p_19))))), p_20, (***l_925));
                        (*l_967) = p_19;
                    }
                }
                g_176 = l_978;
                (*l_967) = (1L <= (g_962.f0 <= (((((~1L) >= g_88[0]) >= p_19) , (-2L)) > l_985[2])));
                return g_263.f2;
            }
            else
            {
                int l_988[7] = {1L, 1L, 0x6BCB73F8L, 1L, 1L, 0x6BCB73F8L, 1L};
                unsigned char l_1011 = 1UL;
                int i;
                for (g_623 = 2; (g_623 <= 8); g_623 += 1)
                {
                    int i;
                    l_985[g_623] = l_985[g_623];
                    if (p_20)
                    {
                        (***l_925) = (safe_lshift_func_int16_t_s_s((func_34((**l_715), p_19, (**l_902), (g_157[2][2] > ((*l_922) , l_985[g_623])), l_988[4]) || p_19), g_214));
                    }
                    else
                    {
                        unsigned short l_996 = 7UL;
                        unsigned l_1003 = 2UL;
                        (**l_902) = (((safe_rshift_func_uint8_t_u_s(l_985[g_623], l_991)) != ((((safe_mod_func_uint32_t_u_u((g_241.f2 < l_988[4]), (func_21(l_988[3], ((safe_rshift_func_int16_t_s_u((((l_996 > (safe_add_func_uint16_t_u_u(func_21(l_996, ((*l_887) ^ ((**l_902) || g_215.f2))), p_19))) < p_20) == (*g_87)), (***l_925))) , p_20)) && 4UL))) <= (**l_902)) == g_873.f1) == 2L)) == 1UL);
                        (*l_887) = ((g_92 == &l_715) | ((-1L) <= (((p_20 ^ ((**l_902) != func_21((*l_967), ((p_20 > 1L) || (safe_sub_func_int8_t_s_s((1L < l_1003), p_20)))))) <= g_664) <= l_988[4])));
                    }
                    for (l_926 = 0; (l_926 <= 4); l_926 += 1)
                    {
                        unsigned short l_1024 = 1UL;
                        (**l_902) = p_19;
                        (*g_87) = (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(g_962.f1)), func_34(l_1011, (l_985[g_623] , g_91.f0), p_20, ((0xE3AAL > ((p_19 != (g_230[1].f1 & ((safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s(((((void*)0 != g_92) | g_157[0][2]) < p_19), (**l_715))) >= (*g_87)), 4)) != 0UL))) || l_1016)) != 0xE6L), p_19))) & 1UL), g_79.f1)) , p_19), g_714));
                        (***l_925) = ((safe_mod_func_uint32_t_u_u(g_215.f1, (*g_87))) || 0xFAC39AB8L);
                        (*l_715) = &p_20;
                    }
                }
            }
        }
        (*l_1032) = ((((((0xD739A608L < p_19) || func_34(((safe_lshift_func_uint8_t_u_u(g_449, p_20)) || p_20), l_1031, g_1019.f1, p_20, g_334[1])) , p_20) == 0UL) <= g_97) <= p_19);
    }
    g_88[0] = ((((safe_rshift_func_uint8_t_u_s(248UL, (safe_mod_func_uint16_t_u_u(((((!(safe_add_func_uint16_t_u_u((g_411.f2 , (safe_mod_func_int8_t_s_s((((p_19 >= ((void*)0 == l_923)) ^ g_156) , p_20), g_411.f1))), g_97))) < p_19) ^ 0x4ECD55F9L) == p_20), 0x569BL)))) && p_19) != 0xE226L) > g_215.f2);
    (*l_1041) = &g_230[0];
    return p_19;
}







static unsigned func_21(char p_22, int p_23)
{
    unsigned char l_711 = 0x37L;
    int l_712 = 0x74683736L;
    int *l_713 = &g_88[0];
    l_712 = l_711;
    l_713 = &l_712;
    return g_66;
}







static int func_24(char p_25, const unsigned p_26, unsigned char p_27, unsigned short p_28)
{
    unsigned char l_204 = 255UL;
    unsigned l_210 = 3UL;
    struct S0 ** const l_213 = (void*)0;
    int *l_255[6] = {&g_88[0], &g_66, &g_88[0], &g_66, &g_88[0], &g_66};
    unsigned l_308 = 0xD38D5E84L;
    const short l_332 = (-3L);
    const int ***l_353 = (void*)0;
    short l_474 = 0x7B63L;
    struct S0 *l_622 = &g_215;
    const unsigned short l_640 = 1UL;
    unsigned char l_641 = 0UL;
    const int l_660[3] = {0x7C6B65CEL, 0x7C6B65CEL, 0x7C6B65CEL};
    const short l_688 = 1L;
    int i;
    if ((~(safe_mod_func_uint16_t_u_u(l_204, g_157[0][2]))))
    {
        int *l_205 = &g_66;
        short l_262 = (-1L);
        char l_264[3];
        struct S0 *l_279 = &g_215;
        unsigned short l_331 = 65527UL;
        unsigned l_349 = 0UL;
        unsigned l_395 = 0xAE2B54E8L;
        char l_440 = 0xFCL;
        int **l_462 = &l_205;
        int ***l_461 = &l_462;
        int **l_491 = &l_255[0];
        struct S0 **l_534 = &l_279;
        struct S0 ***l_533 = &l_534;
        unsigned char l_625 = 255UL;
        short l_659 = (-5L);
        const unsigned char l_705 = 255UL;
        int i;
        for (i = 0; i < 3; i++)
            l_264[i] = 0x11L;
        l_205 = (g_157[3][3] , &g_66);
        if ((safe_sub_func_int8_t_s_s(g_88[0], (((safe_add_func_uint16_t_u_u((func_34((*l_205), l_210, g_157[1][3], p_27, (safe_rshift_func_uint8_t_u_u(func_34((+((((*l_205) >= (l_213 == &g_176)) , (~(g_79.f3 , g_214))) , (-6L))), g_97, g_156, g_9, l_204), 3))) == 0x07L), g_88[0])) <= 0xA97C014DL) , 0x19L))))
        {
            const char l_222 = (-1L);
            int *l_223 = (void*)0;
            l_223 = (g_215 , func_42(l_204, (l_204 <= ((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(func_34(g_79.f1, (*l_205), l_222, p_26, g_215.f0), g_97)), 0L)), g_157[0][2])) & g_215.f2))));
        }
        else
        {
            const unsigned short l_243 = 0xDD8CL;
            int l_292[5] = {0x78B3AE40L, 0x9A664986L, 0x78B3AE40L, 0x9A664986L, 0x78B3AE40L};
            unsigned l_301 = 0xC044EE1DL;
            struct S0 * const *l_329[4][6] = {{&l_279, &l_279, &g_176, &l_279, &l_279, &g_176}, {&l_279, &l_279, &g_176, &l_279, &l_279, &g_176}, {&l_279, &l_279, &g_176, &l_279, &l_279, &g_176}, {&l_279, &l_279, &g_176, &l_279, &l_279, &g_176}};
            unsigned l_345 = 4294967292UL;
            int **l_348 = &l_255[4];
            int *l_381 = &g_88[0];
            int i, j;
            for (l_210 = 0; (l_210 <= 3); l_210 += 1)
            {
                int l_242 = 0L;
                int l_269[7] = {(-4L), (-9L), (-4L), (-9L), (-4L), (-9L), (-4L)};
                int **l_333 = &l_205;
                char l_343 = 1L;
                char l_344 = (-1L);
                struct S0 *l_370 = (void*)0;
                int i;
            }
            (*l_348) = l_381;
            g_87 = l_205;
            (*l_205) = ((g_88[0] | g_371.f0) , (safe_mod_func_int8_t_s_s(g_66, g_215.f3)));
        }
        (*g_87) = (func_34(g_265.f3, ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((((safe_unary_minus_func_uint16_t_u(g_230[1].f2)) , 0L) & (p_27 < (((((p_25 > p_26) == (((((safe_lshift_func_uint16_t_u_u(g_263.f2, 1)) && (g_79.f1 , ((void*)0 == &g_88[0]))) | p_26) != (*g_87)) || p_25)) & 6UL) == g_79.f2) || g_156))), 0xD3L)), g_263.f2)) <= g_97), p_26, g_215.f1, g_263.f1) , 0x0A3B9386L);
        if ((func_34((0x29F1L ^ g_215.f1), p_26, ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((((func_34((l_279 != (p_28 , l_279)), g_157[1][3], g_265.f2, g_157[2][1], g_263.f2) & g_230[1].f1) ^ g_215.f2) && g_156), 3)) | l_395), p_27)) < 0L), (*l_205), g_334[2]) , p_27))
        {
            const unsigned l_401 = 0xBBBDDECFL;
            int l_426 = (-9L);
            int l_439 = 0xEE4C59F3L;
            struct S0 *l_456 = &g_230[0];
            int **l_492 = &g_87;
            int l_516 = 0x20D5BA97L;
            for (l_395 = 0; (l_395 <= 0); l_395 += 1)
            {
                short l_398 = 0L;
                int *l_406 = &g_66;
                struct S0 **l_451 = (void*)0;
                struct S0 ***l_450 = &l_451;
                unsigned l_463[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_463[i] = 0x7FB5B372L;
                if ((safe_rshift_func_uint16_t_u_u(func_29((((func_29(l_398, g_79.f2, (safe_lshift_func_uint8_t_u_s(p_26, 5)), l_401) <= (safe_sub_func_uint16_t_u_u(((0xCB1DL | ((safe_add_func_int8_t_s_s(g_263.f1, g_283.f1)) == ((void*)0 == &l_205))) <= g_214), p_27))) || 0xC6L) , 0x42769300L), p_27, g_263.f2, g_230[1].f2), 15)))
                {
                    return (*g_87);
                }
                else
                {
                    char l_417 = 0xFDL;
                    int *l_444 = &g_88[0];
                    for (p_25 = 0; (p_25 >= 0); p_25 -= 1)
                    {
                        short l_409 = 1L;
                        int **l_410 = &l_255[5];
                        l_406 = l_205;
                        (*l_410) = func_42((p_27 , (safe_sub_func_uint8_t_u_u(g_241.f2, p_25))), (((l_409 , g_92) == (void*)0) , p_28));
                    }
                    for (l_349 = 0; (l_349 <= 8); l_349 += 1)
                    {
                        int **l_412 = &l_255[5];
                        int i;
                        (*l_412) = func_42(((g_411 , 0xDB04L) >= p_27), ((p_28 != (1UL >= g_9)) , p_26));
                    }
                    for (l_204 = 0; (l_204 <= 8); l_204 += 1)
                    {
                        int **l_441[2];
                        int **l_442[4] = {&l_255[2], (void*)0, &l_255[2], (void*)0};
                        int **l_443 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_441[i] = &l_255[1];
                        g_88[l_395] = (g_156 && l_440);
                        l_444 = (p_26 , func_42((*g_87), p_28));
                    }
                    (*g_87) = ((!(*l_205)) & (((((func_34(((&l_426 == (void*)0) , (g_411.f1 > ((void*)0 != l_406))), (0x72L > (safe_add_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_s(p_28, (g_156 >= l_401))) , (void*)0) != (void*)0) ^ p_25) >= (*g_87)), g_449))), g_215.f1, p_25, l_439) < 0xA7656942L) && p_27) > l_401) | p_27) , g_334[2]));
                }
                (*l_450) = (void*)0;
            }
            if ((((((g_265.f3 > (g_471 == &l_213)) != (safe_mod_func_uint32_t_u_u(((l_439 & (g_97 > ((((((((*g_87) != l_474) , (p_26 , g_88[0])) , g_263.f1) , 0x7302AAAFL) , 0xD4E4L) , 0x3734L) != p_26))) < g_157[3][1]), p_28))) > 0xE6L) , p_26) | 0UL))
            {
                short l_488 = 0xB39CL;
                unsigned short l_493 = 4UL;
                struct S0 **l_520 = &l_279;
                struct S0 ***l_519 = &l_520;
                unsigned short l_521 = 6UL;
                unsigned l_535 = 4294967288UL;
                int *l_541[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_541[i] = (void*)0;
                for (l_440 = (-23); (l_440 != (-25)); l_440--)
                {
                    unsigned l_486[4];
                    int l_487 = 1L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_486[i] = 0xEDCEAF69L;
                    if ((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_91.f0, p_25)), (-1L))))
                    {
                        l_426 = (g_471 != g_471);
                    }
                    else
                    {
                        char l_481 = 0xC9L;
                        l_487 = (((((((p_25 , func_29(((p_28 && (l_481 | 0xEFL)) >= (((safe_sub_func_uint16_t_u_u(p_25, ((((safe_sub_func_uint8_t_u_u(((l_481 ^ ((1L == (0UL >= ((0xE0L == g_411.f2) , l_481))) ^ l_486[2])) , g_449), (*l_205))) > (***l_461)) != g_214) || (**l_462)))) | p_28) , 0xF2L)), l_486[2], l_486[2], p_27)) == g_449) && 4294967295UL) | g_215.f1) && g_230[1].f1) , 3L) , p_25);
                        l_488 = ((***l_461) == 255UL);
                    }
                }
                (***l_461) = (*l_205);
                (*l_462) = (*l_462);
                if ((((((safe_mod_func_uint32_t_u_u(((p_27 || ((l_491 == l_492) & g_157[0][2])) | (l_493 | ((*l_456) , ((func_29(((safe_add_func_uint8_t_u_u(((func_34(func_34(g_91.f1, (0xD7CBL ^ ((**l_491) == (-1L))), g_263.f2, l_488, p_27), g_230[1].f2, p_28, (**l_492), (**l_492)) , g_411.f0) , 3UL), g_283.f1)) > (**l_492)), p_28, g_157[0][2], g_334[2]) == 0L) != l_493)))), 4294967286UL)) , 0xCFB6L) , g_230[1].f3) > 0xE9C6L) ^ l_488))
                {
                    char l_501 = 0xCAL;
                    int **l_508 = (void*)0;
                    int **l_509 = &l_205;
                    int **l_522[4][4] = {{&l_255[4], &l_255[4], &g_87, &l_255[0]}, {&l_255[4], &l_255[4], &g_87, &l_255[0]}, {&l_255[4], &l_255[4], &g_87, &l_255[0]}, {&l_255[4], &l_255[4], &g_87, &l_255[0]}};
                    int **l_523 = (void*)0;
                    int **l_524 = &l_255[4];
                    int i, j;
                    (*l_509) = func_42((func_34((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((**l_492))) ^ l_501), g_215.f1)), g_156)), g_91.f2, (g_230[1].f1 != g_157[0][2]), (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_215.f1 || (safe_sub_func_uint16_t_u_u(((!(9UL | (**l_491))) > 0x124EE915L), (-1L)))), g_88[0])), (*l_205))), l_488) <= 0xD5L), p_26);
                    (*l_205) = (*g_87);
                    (*l_524) = func_42(func_34((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u(p_26, ((**l_492) != ((((func_34(g_411.f0, (safe_sub_func_uint8_t_u_u(4UL, l_516)), p_28, g_157[1][2], ((safe_sub_func_uint32_t_u_u(g_334[6], ((*l_461) == (void*)0))) <= 1UL)) , g_79.f0) <= g_79.f1) , (void*)0) != l_519)))) , p_28), g_215.f2)), p_28, p_27, p_27, g_157[0][2]), l_521);
                }
                else
                {
                    int l_537 = 2L;
                    (*l_205) = ((safe_lshift_func_int8_t_s_u(g_215.f3, 3)) || (*l_205));
                    if (p_27)
                    {
                        (**l_491) = (g_215.f1 < g_97);
                        (*l_205) = ((&l_213 != ((((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((g_334[2] , l_279) != (void*)0) , (safe_mod_func_int8_t_s_s(g_263.f0, (~g_88[0])))) & p_27), 6UL)), p_25)) & 1L) != 7L) >= g_88[0]) >= p_28) , l_533)) && l_535);
                        (***l_461) = p_25;
                    }
                    else
                    {
                        unsigned l_536[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_536[i] = 0xD30963ACL;
                        (**l_492) = (*g_87);
                        return l_536[1];
                    }
                    if (l_537)
                    {
                        char l_540[7][2] = {{0xE0L, (-1L)}, {0xE0L, (-1L)}, {0xE0L, (-1L)}, {0xE0L, (-1L)}, {0xE0L, (-1L)}, {0xE0L, (-1L)}, {0xE0L, (-1L)}};
                        int i, j;
                        (**l_492) = (func_34((safe_sub_func_uint8_t_u_u((&g_88[0] == &g_88[0]), 0x95L)), (func_34(g_214, ((0x80L & ((0xB120L | ((void*)0 != g_92)) || p_26)) != 1L), g_230[1].f3, (**l_492), g_79.f1) <= p_27), l_537, g_215.f2, l_537) == l_540[4][1]);
                        g_87 = l_541[5];
                        (**l_462) = (safe_rshift_func_int16_t_s_u(l_537, g_241.f1));
                    }
                    else
                    {
                        (**l_491) = (*g_87);
                    }
                }
            }
            else
            {
                unsigned char l_556[5];
                int l_557[3][9][3] = {{{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}, {{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}, {{(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}, {(-1L), 1L, 1L}}};
                struct S0 *l_573 = &g_79;
                const unsigned short l_574 = 65535UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_556[i] = 2UL;
                for (l_204 = 25; (l_204 == 28); l_204 = safe_add_func_int8_t_s_s(l_204, 7))
                {
                    struct S0 ***l_558 = &l_534;
                    l_557[1][8][2] = ((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(func_34(p_26, p_28, (((safe_rshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((*g_87), p_28)), ((~g_9) == 0x1FD9L))) < (safe_add_func_int16_t_s_s(((-1L) & g_334[0]), (**l_492)))) , g_215.f0), l_556[4], g_263.f2), g_66)) , g_265.f0), 5)) ^ 0L);
                    (*l_558) = l_213;
                }
                (*l_205) = (((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(0x92F9L, 0)) >= (p_28 != (safe_sub_func_int8_t_s_s(p_27, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((**l_492), ((safe_sub_func_int8_t_s_s((((**l_492) , g_411.f0) , (p_28 && (safe_sub_func_int16_t_s_s(((void*)0 == l_573), 0x65AEL)))), (*l_205))) || g_241.f0))), 10)))))) ^ g_334[3]), p_27)) != p_28) || g_371.f1);
                for (l_516 = 0; (l_516 >= 0); l_516 -= 1)
                {
                    struct S0 **l_575 = &l_279;
                    int i;
                    g_88[l_516] = ((g_88[l_516] == ((void*)0 == &g_88[l_516])) , l_556[(l_516 + 2)]);
                    g_88[l_516] = (**l_491);
                    (**l_492) = (((void*)0 != &l_462) < (l_574 | (0x362D9E8DL && p_25)));
                    for (l_426 = 0; (l_426 <= 2); l_426 += 1)
                    {
                        const int l_576 = 0x46529DDFL;
                        int **l_577 = &l_255[3];
                        (*l_461) = (void*)0;
                        if (p_25)
                            continue;
                        (*l_577) = func_42(func_29(p_25, (**l_491), func_34(g_215.f3, ((void*)0 != l_575), l_576, ((**l_492) , 9L), g_230[1].f2), g_88[0]), g_230[1].f2);
                    }
                }
                for (l_204 = 0; (l_204 < 25); l_204 = safe_add_func_int16_t_s_s(l_204, 5))
                {
                    const unsigned l_584 = 4294967293UL;
                    for (l_426 = 0; (l_426 == 19); ++l_426)
                    {
                        (*l_492) = func_42((*g_87), g_449);
                        return p_26;
                    }
                    (*l_491) = &g_88[0];
                    if ((safe_add_func_uint16_t_u_u(p_25, func_29((*l_205), func_34((*l_205), g_157[0][2], (((&l_456 != (void*)0) || g_215.f1) , (~func_34(p_26, (**l_492), g_265.f0, l_556[0], (**l_492)))), g_157[0][2], p_26), l_584, p_25))))
                    {
                        (*l_491) = (*l_491);
                    }
                    else
                    {
                        (**l_491) = l_574;
                    }
                }
            }
            if ((p_27 || ((safe_lshift_func_uint8_t_u_s(0xA5L, (p_28 && (**l_491)))) > l_401)))
            {
                unsigned char l_587 = 6UL;
                l_587 = (-7L);
                (**l_491) = l_587;
            }
            else
            {
                int ***l_600 = &l_492;
                g_88[0] = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(0x7372L, 11)), ((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(p_25, (g_91.f2 < g_215.f2))) , g_371.f3), ((((((((g_263.f1 , l_600) != (void*)0) <= g_79.f1) , 0x20C1L) , 0L) < g_449) & p_28) & 4294967294UL))), 0x88L)), g_283.f1)) >= g_283.f1))) , (-9L));
                for (l_262 = 0; (l_262 != (-5)); l_262--)
                {
                    (**l_491) = (p_26 & g_215.f3);
                    for (l_395 = (-7); (l_395 <= 19); l_395++)
                    {
                        (*l_492) = (**l_600);
                        (*l_492) = (*l_491);
                    }
                    (*l_492) = (*l_492);
                }
                g_87 = (*l_492);
                (**l_491) = p_25;
            }
            (*l_533) = &l_456;
        }
        else
        {
            unsigned l_619 = 0x0E0B081CL;
            int * const l_642[8] = {(void*)0, (void*)0, &g_66, (void*)0, (void*)0, &g_66, (void*)0, (void*)0};
            int *l_693 = &g_156;
            char l_697[7] = {0x94L, 0xF0L, 0x94L, 0xF0L, 0x94L, 0xF0L, 0x94L};
            struct S0 *l_702[3][3] = {{(void*)0, &g_215, (void*)0}, {(void*)0, &g_215, (void*)0}, {(void*)0, &g_215, (void*)0}};
            int i, j;
            if (p_28)
            {
                const unsigned char l_624 = 0xE7L;
                unsigned l_626 = 4294967289UL;
                for (g_214 = 0; (g_214 <= 3); g_214 += 1)
                {
                    int **l_627 = (void*)0;
                    int **l_628 = &l_255[4];
                    unsigned l_639 = 0xBF60D155L;
                    (*l_628) = func_42((((((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_157[3][2], (safe_add_func_int32_t_s_s((func_29(((safe_sub_func_int16_t_s_s(func_34((((safe_sub_func_int8_t_s_s(((l_619 <= ((&l_462 != (void*)0) | (func_34(g_66, (g_230[1].f1 <= (((((0x78FF3806L > ((*l_534) == l_622)) <= 4294967293UL) & 1L) , g_411.f3) <= p_25)), l_619, p_28, p_28) == p_28))) , p_27), g_623)) == p_26) && 0x4BEEL), g_230[1].f1, l_624, g_334[5], l_625), 1UL)) & 4UL), p_28, g_66, p_26) == 0x56E21AB7L), 9UL)))), p_26)), 1)), 4)) < p_28) ^ 1L) >= p_26) , 0xA30CEF78L), l_626);
                }
                (***l_461) = (func_34((g_371.f3 & (safe_sub_func_uint8_t_u_u((((g_334[2] ^ (p_26 || (safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(g_283.f2, 6)) || (safe_rshift_func_int8_t_s_u(0xA3L, 6))) <= ((l_624 , (((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((g_215.f1 > (safe_mod_func_int16_t_s_s(l_624, g_157[2][0]))) <= 5UL), 0L)), 10)) && g_283.f1) || 0xF39FDFCCL)) != 255UL)), g_263.f1)))) && p_25) & (*g_87)), 249UL))), l_659, l_660[2], p_27, g_263.f1) ^ 3L);
            }
            else
            {
                int l_665 = 0xB3981442L;
                int *l_694 = &g_88[0];
                for (l_308 = (-27); (l_308 >= 18); l_308 = safe_add_func_int32_t_s_s(l_308, 1))
                {
                    unsigned l_710 = 0x00AB039DL;
                    if (func_34(((g_663[2] , (func_29(g_230[1].f3, g_664, g_334[0], g_157[0][2]) <= l_665)) & (-10L)), ((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((p_26 && p_27), 7UL)), 5)) >= 0xA4E0L), p_25, l_665, g_157[0][2]))
                    {
                        struct S0 *l_670[6][2][6] = {{{&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}, {&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}}, {{&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}, {&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}}, {{&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}, {&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}}, {{&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}, {&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}}, {{&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}, {&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}}, {{&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}, {&g_215, &g_230[1], &g_283, &g_79, &g_663[2], (void*)0}}};
                        int i, j, k;
                        (**l_533) = l_670[0][1][3];
                    }
                    else
                    {
                        char l_687 = 9L;
                        (**l_491) = (func_29((**l_491), g_263.f3, ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((((((safe_lshift_func_uint8_t_u_s(0x64L, (+(safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((4294967286UL | ((g_214 | 0x82L) ^ ((g_88[0] , (safe_lshift_func_int8_t_s_u((((g_263.f1 , ((safe_lshift_func_int8_t_s_s(0xEBL, p_27)) ^ p_26)) , (void*)0) == g_471), (*l_205)))) ^ 0x8DB2L))) == p_28), 4)), p_27)), g_263.f2))))) ^ g_449) ^ (-1L)) , l_687) == g_663[2].f2), 6)) ^ g_214), l_687)) || 0x4EL), l_688) ^ l_665);
                    }
                    (*g_87) = (((p_27 | p_26) > (safe_sub_func_int8_t_s_s(0x80L, 0x11L))) >= (p_25 , ((&l_213 != (void*)0) == ((g_88[0] >= (((p_28 ^ 0xCF42L) || 0xAAL) , 5UL)) > 0x70L))));
                    l_694 = l_693;
                    (***l_461) = ((~(4294967295UL == ((safe_add_func_int16_t_s_s(l_697[0], ((safe_add_func_int8_t_s_s(func_29(func_34((safe_rshift_func_int16_t_s_u(((void*)0 != l_702[2][0]), (safe_rshift_func_int8_t_s_u(p_26, g_241.f0)))), ((l_705 & (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((0x208AL ^ g_230[1].f1), 9)) , 0x4162L) >= l_710), (*l_694)))) <= l_710), g_215.f1, p_25, g_263.f1), g_449, g_88[0], g_88[0]), l_710)) , p_27))) , 4L))) <= g_157[0][2]);
                }
                (*l_462) = l_693;
            }
        }
    }
    else
    {
        return p_27;
    }
    return p_26;
}







static const unsigned func_29(unsigned p_30, unsigned char p_31, const unsigned p_32, const char p_33)
{
    short l_101[3][1];
    int *l_102 = &g_88[0];
    struct S0 *l_132[10][4] = {{&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}, {&g_79, &g_79, &g_79, &g_79}};
    int ** const l_148[4] = {&g_87, &g_87, &g_87, &g_87};
    unsigned short l_158 = 0x048CL;
    int *l_162 = &g_88[0];
    int *l_180 = &g_66;
    int l_187 = (-5L);
    unsigned l_199 = 0x5BA50107L;
    int **l_200 = &l_162;
    unsigned char l_201 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_101[i][j] = 6L;
    }
    for (g_9 = 0; (g_9 > 8); g_9 = safe_add_func_int8_t_s_s(g_9, 7))
    {
        const char l_82 = (-1L);
        int *l_140[1];
        int l_155 = 1L;
        struct S0 *l_174 = &g_79;
        unsigned char l_194 = 0x33L;
        int i;
        for (i = 0; i < 1; i++)
            l_140[i] = &g_88[0];
        if (l_82)
        {
            unsigned char l_98[8][4] = {{255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}, {255UL, 8UL, 0UL, 8UL}};
            int i, j;
            for (g_66 = 0; (g_66 > (-15)); g_66 = safe_sub_func_int32_t_s_s(g_66, 2))
            {
                int *l_86 = &g_66;
                int **l_85[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_85[i] = &l_86;
                g_87 = &g_66;
            }
            l_98[6][0] = ((safe_mod_func_int32_t_s_s(0x75C26FF5L, (((g_91 , (void*)0) != (l_82 , g_92)) && (safe_add_func_uint32_t_u_u((l_82 == p_32), (safe_mod_func_int16_t_s_s(1L, p_33))))))) & g_97);
        }
        else
        {
            int **l_103 = (void*)0;
            int **l_104 = &l_102;
            int **l_125 = &l_102;
            for (g_97 = 0; (g_97 < 22); g_97 = safe_add_func_int16_t_s_s(g_97, 2))
            {
                l_101[2][0] = (-1L);
            }
            (*l_104) = l_102;
            (*l_104) = &g_66;
            if ((**l_104))
            {
                const unsigned char l_117[9] = {0x39L, 0x39L, 0x39L, 0x39L, 0x39L, 0x39L, 0x39L, 0x39L, 0x39L};
                const int *l_119 = &g_88[0];
                const int **l_118[7][7] = {{&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}, {&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}, {&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}, {&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}, {&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}, {&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}, {&l_119, &l_119, (void*)0, &l_119, &l_119, &l_119, (void*)0}};
                int i, j;
                for (p_30 = 22; (p_30 <= 49); p_30++)
                {
                    int **l_113[1][4][8] = {{{&g_87, &l_102, &g_87, &l_102, &g_87, &l_102, &g_87, &l_102}, {&g_87, &l_102, &g_87, &l_102, &g_87, &l_102, &g_87, &l_102}, {&g_87, &l_102, &g_87, &l_102, &g_87, &l_102, &g_87, &l_102}, {&g_87, &l_102, &g_87, &l_102, &g_87, &l_102, &g_87, &l_102}}};
                    unsigned char l_114[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_114[i] = 0xCEL;
                    (*l_102) = (0x9042L != (safe_mod_func_int32_t_s_s((&g_88[0] == (void*)0), (safe_mod_func_uint32_t_u_u((4UL != ((safe_mod_func_uint8_t_u_u(((void*)0 == l_113[0][3][3]), l_114[2])) < ((safe_add_func_uint8_t_u_u(g_79.f1, ((**l_104) & l_117[2]))) <= (*g_87)))), l_117[2])))));
                    if ((*g_87))
                        continue;
                    (*l_102) = (&l_102 != l_118[3][4]);
                    (**l_104) = (p_30 >= (g_91.f1 == (*l_102)));
                }
            }
            else
            {
                unsigned short l_128 = 5UL;
                for (p_31 = 0; (p_31 != 29); ++p_31)
                {
                    unsigned l_122 = 0xD253E6AFL;
                    l_122 = (*g_87);
                    (*g_87) = ((*g_87) || l_122);
                    if (((&g_91 == &g_91) >= p_30))
                    {
                        char l_126 = (-6L);
                        (**l_104) = (p_30 && (-1L));
                        (**l_104) = ((65535UL && (safe_lshift_func_int16_t_s_s(((p_30 , &g_87) == l_125), (g_92 != (void*)0)))) < (1L == l_126));
                    }
                    else
                    {
                        int *l_129 = &g_88[0];
                        (*l_104) = (((safe_unary_minus_func_int8_t_s(g_88[0])) && l_128) , l_129);
                    }
                }
            }
        }
        if ((safe_rshift_func_int8_t_s_s((((*l_102) , g_91.f2) && (l_82 && (&g_91 == l_132[6][0]))), 4)))
        {
            int **l_133 = &g_87;
            (*l_133) = l_102;
            (**l_133) = (safe_sub_func_uint8_t_u_u(g_79.f3, 7L));
        }
        else
        {
            const int *l_143[7];
            const int **l_142 = &l_143[0];
            const int ***l_141[5];
            int i;
            for (i = 0; i < 7; i++)
                l_143[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_141[i] = &l_142;
            if ((((safe_rshift_func_int8_t_s_s(g_91.f0, 7)) >= (safe_sub_func_int16_t_s_s(((void*)0 == l_140[0]), ((void*)0 == l_141[2])))) & (safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(g_97, p_30)) , l_148[2]) != (void*)0), 1L))))
            {
                unsigned l_161[6] = {0x04F9BF6FL, 0x04F9BF6FL, 0x103C77F6L, 0x04F9BF6FL, 0x04F9BF6FL, 0x103C77F6L};
                int *l_163 = &g_88[0];
                int i;
                (*l_102) = p_30;
                if (p_31)
                    break;
                if ((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((p_31 & ((p_32 || (g_91.f2 ^ (p_32 && ((((p_31 , (g_66 | g_88[0])) <= ((safe_sub_func_uint32_t_u_u(((l_155 && p_32) , 4294967295UL), 0xD4CD4557L)) >= p_33)) < g_156) <= p_33)))) < 1L)), g_157[0][2])) , l_158), 65535UL)))
                {
                    for (g_156 = 0; (g_156 >= 9); g_156 = safe_add_func_int16_t_s_s(g_156, 9))
                    {
                        if (p_31)
                            break;
                    }
                }
                else
                {
                    int *l_164[6] = {&g_156, &g_156, &g_66, &g_156, &g_156, &g_66};
                    int i;
                    for (l_158 = 0; (l_158 <= 0); l_158 += 1)
                    {
                        (*l_142) = l_140[0];
                    }
                    if (l_161[5])
                    {
                        if ((*l_102))
                            break;
                        l_163 = l_162;
                    }
                    else
                    {
                        (*l_163) = 1L;
                        if ((*l_102))
                            continue;
                        if (p_32)
                            break;
                    }
                    g_87 = l_164[4];
                    if (p_30)
                        continue;
                }
            }
            else
            {
                int *l_168 = &g_88[0];
                for (g_66 = (-11); (g_66 != (-19)); g_66 = safe_sub_func_uint8_t_u_u(g_66, 3))
                {
                    int *l_167 = &g_88[0];
                    l_168 = l_167;
                    (*l_168) = (safe_mod_func_uint32_t_u_u(((g_91.f1 , g_66) > (p_31 < g_9)), g_9));
                    for (l_155 = 0; (l_155 != 8); l_155++)
                    {
                        int *l_173 = &g_66;
                        struct S0 **l_175[1][10][10] = {{{&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}, {&l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174, &l_174, &l_132[9][3], &l_174}}};
                        int i, j, k;
                        (*l_142) = l_173;
                        l_132[8][0] = l_174;
                        g_176 = l_174;
                        l_167 = (void*)0;
                    }
                    (*l_162) = ((*g_87) > g_156);
                }
                for (p_30 = 0; (p_30 <= 3); p_30 += 1)
                {
                    int i, j;
                    for (g_66 = 0; (g_66 >= 0); g_66 -= 1)
                    {
                        int i, j;
                        g_88[g_66] = (g_157[p_30][(g_66 + 1)] > g_88[g_66]);
                    }
                    return g_157[p_30][p_30];
                }
                (*l_162) = p_32;
            }
            for (g_156 = 0; (g_156 != 14); g_156 = safe_add_func_int32_t_s_s(g_156, 3))
            {
                const int *l_179 = &g_88[0];
                (*l_162) = p_30;
                l_179 = (void*)0;
            }
        }
        l_180 = l_140[0];
        (*l_162) = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(p_33, ((((l_187 & (*l_162)) != 0x03D4L) , g_79.f0) & (safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u((g_9 && (((safe_lshift_func_int16_t_s_u((&l_102 != (void*)0), ((((((void*)0 != l_132[2][2]) != 0x90F2ED5BL) , 0L) && g_157[0][2]) == p_30))) ^ l_194) < 0xDD24L)), 2)) , 4294967295UL) , p_32) & g_157[2][1]), g_79.f1))))), g_156)), 0xBFL));
    }
    (*l_200) = func_42((((((safe_sub_func_int32_t_s_s((*g_87), 4294967286UL)) | (safe_lshift_func_uint8_t_u_u(l_199, (p_31 && (g_156 , 0x17F0BBE9L))))) > p_33) | ((void*)0 != &g_91)) , 0xAE85CDDAL), g_157[3][2]);
    (*l_162) = l_201;
    return g_156;
}







static unsigned char func_34(int p_35, int p_36, const unsigned p_37, char p_38, char p_39)
{
    int l_45 = (-1L);
    int *l_76 = (void*)0;
    int ** const l_75[9][6] = {{&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}, {&l_76, &l_76, &l_76, &l_76, &l_76, &l_76}};
    int i, j;
    for (p_39 = 0; (p_39 > (-1)); p_39 = safe_sub_func_uint32_t_u_u(p_39, 6))
    {
        short l_48[7][8] = {{1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}, {1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}, {1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}, {1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}, {1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}, {1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}, {1L, 1L, 0x3D88L, (-1L), (-1L), 0x3D88L, 1L, 1L}};
        int *l_73 = &l_45;
        int **l_72[8][5] = {{&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}, {&l_73, (void*)0, &l_73, &l_73, &l_73}};
        int **l_74 = &l_73;
        int ***l_77 = &l_72[5][2];
        struct S0 *l_78 = &g_79;
        int i, j;
        (*l_74) = func_42(p_39, (l_45 > (l_45 <= (((safe_lshift_func_uint16_t_u_s(g_9, 11)) <= (p_37 | l_48[2][6])) && ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_45 == (((!65535UL) >= (safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(0x6A86L, 0x10B4L))))) & 4UL)), g_9)), l_45)) && g_9)))));
        (*l_77) = l_75[7][2];
        l_78 = (void*)0;
    }
    return g_79.f0;
}







static int * const func_42(int p_43, int p_44)
{
    unsigned char l_58[1][4] = {{0xAEL, 246UL, 0xAEL, 246UL}};
    int i, j;
    for (p_43 = 0; (p_43 == (-24)); p_43 = safe_sub_func_uint8_t_u_u(p_43, 8))
    {
        unsigned char l_67 = 0xF7L;
        int l_69 = 0x06F8A133L;
        for (p_44 = 0; (p_44 >= 0); p_44 -= 1)
        {
            const int l_68 = 0x21D2A6A8L;
            for (g_9 = 0; (g_9 <= 0); g_9 += 1)
            {
                int * const l_65[1][10] = {{&g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66, &g_66}};
                int *l_71 = (void*)0;
                int **l_70 = &l_71;
                int i, j;
                l_69 = (l_58[p_44][(p_44 + 3)] <= (!((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((p_43 < (((g_9 <= p_44) , (g_9 >= ((safe_lshift_func_uint16_t_u_u(((l_65[0][5] == (void*)0) == ((void*)0 != l_65[0][5])), l_67)) & g_66))) , p_44)) > 4UL) <= 0x22F7L), 0x34L)), 15)) & 0x07ECB515L) | l_68) ^ 4UL)));
                (*l_70) = &p_43;
            }
        }
    }
    return &g_66;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_157[i][j], "g_157[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_215.f3, "g_215.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_230[i].f0, "g_230[i].f0", print_hash_value);
        transparent_crc(g_230[i].f1, "g_230[i].f1", print_hash_value);
        transparent_crc(g_230[i].f2, "g_230[i].f2", print_hash_value);
        transparent_crc(g_230[i].f3, "g_230[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_241.f0, "g_241.f0", print_hash_value);
    transparent_crc(g_241.f1, "g_241.f1", print_hash_value);
    transparent_crc(g_241.f2, "g_241.f2", print_hash_value);
    transparent_crc(g_241.f3, "g_241.f3", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    transparent_crc(g_263.f1, "g_263.f1", print_hash_value);
    transparent_crc(g_263.f2, "g_263.f2", print_hash_value);
    transparent_crc(g_263.f3, "g_263.f3", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f1, "g_265.f1", print_hash_value);
    transparent_crc(g_265.f2, "g_265.f2", print_hash_value);
    transparent_crc(g_265.f3, "g_265.f3", print_hash_value);
    transparent_crc(g_283.f0, "g_283.f0", print_hash_value);
    transparent_crc(g_283.f1, "g_283.f1", print_hash_value);
    transparent_crc(g_283.f2, "g_283.f2", print_hash_value);
    transparent_crc(g_283.f3, "g_283.f3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_334[i], "g_334[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_371.f0, "g_371.f0", print_hash_value);
    transparent_crc(g_371.f1, "g_371.f1", print_hash_value);
    transparent_crc(g_371.f2, "g_371.f2", print_hash_value);
    transparent_crc(g_371.f3, "g_371.f3", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_411.f2, "g_411.f2", print_hash_value);
    transparent_crc(g_411.f3, "g_411.f3", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_663[i].f0, "g_663[i].f0", print_hash_value);
        transparent_crc(g_663[i].f1, "g_663[i].f1", print_hash_value);
        transparent_crc(g_663[i].f2, "g_663[i].f2", print_hash_value);
        transparent_crc(g_663[i].f3, "g_663[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_873.f0, "g_873.f0", print_hash_value);
    transparent_crc(g_873.f1, "g_873.f1", print_hash_value);
    transparent_crc(g_873.f2, "g_873.f2", print_hash_value);
    transparent_crc(g_873.f3, "g_873.f3", print_hash_value);
    transparent_crc(g_912.f0, "g_912.f0", print_hash_value);
    transparent_crc(g_912.f1, "g_912.f1", print_hash_value);
    transparent_crc(g_912.f2, "g_912.f2", print_hash_value);
    transparent_crc(g_912.f3, "g_912.f3", print_hash_value);
    transparent_crc(g_961, "g_961", print_hash_value);
    transparent_crc(g_962.f0, "g_962.f0", print_hash_value);
    transparent_crc(g_962.f1, "g_962.f1", print_hash_value);
    transparent_crc(g_962.f2, "g_962.f2", print_hash_value);
    transparent_crc(g_962.f3, "g_962.f3", print_hash_value);
    transparent_crc(g_1019.f0, "g_1019.f0", print_hash_value);
    transparent_crc(g_1019.f1, "g_1019.f1", print_hash_value);
    transparent_crc(g_1019.f2, "g_1019.f2", print_hash_value);
    transparent_crc(g_1019.f3, "g_1019.f3", print_hash_value);
    transparent_crc(g_1112.f0, "g_1112.f0", print_hash_value);
    transparent_crc(g_1112.f1, "g_1112.f1", print_hash_value);
    transparent_crc(g_1112.f2, "g_1112.f2", print_hash_value);
    transparent_crc(g_1112.f3, "g_1112.f3", print_hash_value);
    transparent_crc(g_1119.f0, "g_1119.f0", print_hash_value);
    transparent_crc(g_1119.f1, "g_1119.f1", print_hash_value);
    transparent_crc(g_1119.f2, "g_1119.f2", print_hash_value);
    transparent_crc(g_1119.f3, "g_1119.f3", print_hash_value);
    transparent_crc(g_1134.f0, "g_1134.f0", print_hash_value);
    transparent_crc(g_1134.f1, "g_1134.f1", print_hash_value);
    transparent_crc(g_1134.f2, "g_1134.f2", print_hash_value);
    transparent_crc(g_1134.f3, "g_1134.f3", print_hash_value);
    transparent_crc(g_1229.f0, "g_1229.f0", print_hash_value);
    transparent_crc(g_1229.f1, "g_1229.f1", print_hash_value);
    transparent_crc(g_1229.f2, "g_1229.f2", print_hash_value);
    transparent_crc(g_1229.f3, "g_1229.f3", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    transparent_crc(g_1250.f0, "g_1250.f0", print_hash_value);
    transparent_crc(g_1250.f1, "g_1250.f1", print_hash_value);
    transparent_crc(g_1250.f2, "g_1250.f2", print_hash_value);
    transparent_crc(g_1250.f3, "g_1250.f3", print_hash_value);
    transparent_crc(g_1251.f0, "g_1251.f0", print_hash_value);
    transparent_crc(g_1251.f1, "g_1251.f1", print_hash_value);
    transparent_crc(g_1251.f2, "g_1251.f2", print_hash_value);
    transparent_crc(g_1251.f3, "g_1251.f3", print_hash_value);
    transparent_crc(g_1255.f0, "g_1255.f0", print_hash_value);
    transparent_crc(g_1255.f1, "g_1255.f1", print_hash_value);
    transparent_crc(g_1255.f2, "g_1255.f2", print_hash_value);
    transparent_crc(g_1255.f3, "g_1255.f3", print_hash_value);
    transparent_crc(g_1271.f0, "g_1271.f0", print_hash_value);
    transparent_crc(g_1271.f1, "g_1271.f1", print_hash_value);
    transparent_crc(g_1271.f2, "g_1271.f2", print_hash_value);
    transparent_crc(g_1271.f3, "g_1271.f3", print_hash_value);
    transparent_crc(g_1327.f0, "g_1327.f0", print_hash_value);
    transparent_crc(g_1327.f1, "g_1327.f1", print_hash_value);
    transparent_crc(g_1327.f2, "g_1327.f2", print_hash_value);
    transparent_crc(g_1327.f3, "g_1327.f3", print_hash_value);
    transparent_crc(g_1345.f0, "g_1345.f0", print_hash_value);
    transparent_crc(g_1345.f1, "g_1345.f1", print_hash_value);
    transparent_crc(g_1345.f2, "g_1345.f2", print_hash_value);
    transparent_crc(g_1345.f3, "g_1345.f3", print_hash_value);
    transparent_crc(g_1385.f0, "g_1385.f0", print_hash_value);
    transparent_crc(g_1385.f1, "g_1385.f1", print_hash_value);
    transparent_crc(g_1385.f2, "g_1385.f2", print_hash_value);
    transparent_crc(g_1385.f3, "g_1385.f3", print_hash_value);
    transparent_crc(g_1476.f0, "g_1476.f0", print_hash_value);
    transparent_crc(g_1476.f1, "g_1476.f1", print_hash_value);
    transparent_crc(g_1476.f2, "g_1476.f2", print_hash_value);
    transparent_crc(g_1476.f3, "g_1476.f3", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1535[i][j][k], "g_1535[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1541.f0, "g_1541.f0", print_hash_value);
    transparent_crc(g_1541.f1, "g_1541.f1", print_hash_value);
    transparent_crc(g_1541.f2, "g_1541.f2", print_hash_value);
    transparent_crc(g_1541.f3, "g_1541.f3", print_hash_value);
    transparent_crc(g_1594.f0, "g_1594.f0", print_hash_value);
    transparent_crc(g_1594.f1, "g_1594.f1", print_hash_value);
    transparent_crc(g_1594.f2, "g_1594.f2", print_hash_value);
    transparent_crc(g_1594.f3, "g_1594.f3", print_hash_value);
    transparent_crc(g_1596.f0, "g_1596.f0", print_hash_value);
    transparent_crc(g_1596.f1, "g_1596.f1", print_hash_value);
    transparent_crc(g_1596.f2, "g_1596.f2", print_hash_value);
    transparent_crc(g_1596.f3, "g_1596.f3", print_hash_value);
    transparent_crc(g_1597.f0, "g_1597.f0", print_hash_value);
    transparent_crc(g_1597.f1, "g_1597.f1", print_hash_value);
    transparent_crc(g_1597.f2, "g_1597.f2", print_hash_value);
    transparent_crc(g_1597.f3, "g_1597.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1599[i][j].f0, "g_1599[i][j].f0", print_hash_value);
            transparent_crc(g_1599[i][j].f1, "g_1599[i][j].f1", print_hash_value);
            transparent_crc(g_1599[i][j].f2, "g_1599[i][j].f2", print_hash_value);
            transparent_crc(g_1599[i][j].f3, "g_1599[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1624.f0, "g_1624.f0", print_hash_value);
    transparent_crc(g_1624.f1, "g_1624.f1", print_hash_value);
    transparent_crc(g_1624.f2, "g_1624.f2", print_hash_value);
    transparent_crc(g_1624.f3, "g_1624.f3", print_hash_value);
    transparent_crc(g_1630.f0, "g_1630.f0", print_hash_value);
    transparent_crc(g_1630.f1, "g_1630.f1", print_hash_value);
    transparent_crc(g_1630.f2, "g_1630.f2", print_hash_value);
    transparent_crc(g_1630.f3, "g_1630.f3", print_hash_value);
    transparent_crc(g_1635, "g_1635", print_hash_value);
    transparent_crc(g_1672, "g_1672", print_hash_value);
    transparent_crc(g_1723.f0, "g_1723.f0", print_hash_value);
    transparent_crc(g_1723.f1, "g_1723.f1", print_hash_value);
    transparent_crc(g_1723.f2, "g_1723.f2", print_hash_value);
    transparent_crc(g_1723.f3, "g_1723.f3", print_hash_value);
    transparent_crc(g_1763.f0, "g_1763.f0", print_hash_value);
    transparent_crc(g_1763.f1, "g_1763.f1", print_hash_value);
    transparent_crc(g_1763.f2, "g_1763.f2", print_hash_value);
    transparent_crc(g_1763.f3, "g_1763.f3", print_hash_value);
    transparent_crc(g_1811, "g_1811", print_hash_value);
    transparent_crc(g_1859.f0, "g_1859.f0", print_hash_value);
    transparent_crc(g_1859.f1, "g_1859.f1", print_hash_value);
    transparent_crc(g_1859.f2, "g_1859.f2", print_hash_value);
    transparent_crc(g_1859.f3, "g_1859.f3", print_hash_value);
    transparent_crc(g_1947, "g_1947", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
