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


union U0 {
   const int f0;
   unsigned char f1;
   volatile char * f2;
};

union U1 {
   const volatile char * const f0;
};

union U2 {
   int f0;
   const volatile unsigned char f1;
   unsigned short f2;
   const short f3;
   volatile int f4;
};

union U3 {
   int f0;
   int f1;
   char * f2;
   const int f3;
   int f4;
};

union U4 {
   char f0;
   int f1;
};

union U5 {
   int f0;
   unsigned char f1;
   volatile unsigned char f2;
   const unsigned f3;
   const int f4;
};

union U6 {
   unsigned short f0;
   char * f1;
   const unsigned f2;
   char * f3;
};


static char *g_17 = (void*)0;
static unsigned g_21 = 4294967295UL;
static char g_35 = 0xB3L;
static short g_54 = 0x5876L;
static union U1 g_58 = {0};
static union U1 ** volatile g_59 = (void*)0;
static unsigned short g_68 = 0xB836L;
static unsigned g_70 = 7UL;
static unsigned *g_69[10][10] = {{(void*)0,&g_70,&g_70,(void*)0,(void*)0,&g_70,(void*)0,&g_70,&g_70,&g_70},{(void*)0,&g_70,&g_70,(void*)0,(void*)0,&g_70,&g_70,(void*)0,&g_70,&g_70},{&g_70,(void*)0,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,(void*)0,(void*)0},{(void*)0,(void*)0,&g_70,&g_70,(void*)0,&g_70,&g_70,(void*)0,(void*)0,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,(void*)0,&g_70,&g_70,(void*)0,(void*)0},{&g_70,(void*)0,&g_70,(void*)0,&g_70,&g_70,(void*)0,&g_70,(void*)0,&g_70},{&g_70,&g_70,(void*)0,&g_70,(void*)0,&g_70,&g_70,&g_70,&g_70,(void*)0},{&g_70,&g_70,&g_70,&g_70,(void*)0,(void*)0,(void*)0,&g_70,&g_70,&g_70},{(void*)0,&g_70,(void*)0,&g_70,&g_70,(void*)0,&g_70,(void*)0,&g_70,(void*)0},{&g_70,&g_70,&g_70,&g_70,&g_70,(void*)0,(void*)0,&g_70,&g_70,&g_70}};
static int g_77 = 0x704A96E5L;
static int * volatile g_79 = &g_77;
static union U6 g_83 = {0UL};
static union U6 *g_82[2] = {&g_83,&g_83};
static union U6 ** const volatile g_81 = &g_82[0];
static char g_113 = (-1L);
static union U0 g_127 = {-1L};
static char g_139 = 6L;
static char g_141[7][3] = {{0x91L,0xD5L,(-1L)},{0xD5L,0x91L,0x91L},{(-1L),0x91L,0L},{0x78L,0xD5L,0L},{(-1L),(-1L),0L},{0xD5L,0x78L,0L},{0x91L,(-1L),0x91L}};
static union U0 *g_163[1] = {(void*)0};
static union U6 ** volatile g_168[2][8][7] = {{{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]}},{{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]},{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]}}};
static union U6 ** volatile g_169 = (void*)0;
static union U6 ** volatile g_170 = &g_82[0];
static int * volatile g_185 = (void*)0;
static int g_187[3][5][6] = {{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L}}};
static int * volatile g_186 = &g_187[1][3][2];
static char **g_190 = (void*)0;
static union U0 * const *g_194[6] = {&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0],&g_163[0]};
static union U0 * const ** volatile g_193 = &g_194[3];
static union U6 ** volatile g_198[10][1][7] = {{{&g_82[0],&g_82[0],&g_82[0],(void*)0,&g_82[0],&g_82[0],&g_82[0]}},{{(void*)0,(void*)0,&g_82[0],&g_82[0],&g_82[1],&g_82[0],(void*)0}},{{(void*)0,&g_82[0],&g_82[0],&g_82[1],(void*)0,&g_82[0],&g_82[0]}},{{&g_82[0],&g_82[0],&g_82[0],&g_82[1],&g_82[1],&g_82[0],&g_82[0]}},{{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]}},{{&g_82[0],&g_82[0],&g_82[0],(void*)0,&g_82[0],&g_82[0],&g_82[0]}},{{(void*)0,(void*)0,&g_82[0],&g_82[0],&g_82[1],&g_82[0],(void*)0}},{{(void*)0,&g_82[0],&g_82[0],&g_82[1],(void*)0,&g_82[0],&g_82[0]}},{{&g_82[0],&g_82[0],&g_82[0],&g_82[1],&g_82[1],&g_82[0],&g_82[0]}},{{&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0],&g_82[0]}}};
static union U6 ** volatile g_200 = &g_82[1];
static int *g_202 = &g_77;
static int ** volatile g_201 = &g_202;
static char *g_269 = &g_141[4][0];
static int ** volatile g_277 = &g_202;
static int ** volatile g_278[1][2] = {{&g_202,&g_202}};
static union U2 g_290 = {-4L};
static union U2 * volatile g_289 = &g_290;
static union U2 * volatile * const volatile g_291[4] = {&g_289,&g_289,&g_289,&g_289};
static union U0 g_298 = {0x4880C27DL};
static volatile union U5 g_301 = {-8L};
static volatile union U5 *g_300 = &g_301;
static volatile union U5 ** volatile g_302[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U3 g_306[8] = {{-5L},{0x3C349576L},{0x3C349576L},{-5L},{0x3C349576L},{0x3C349576L},{-5L},{0x3C349576L}};
static union U3 *g_308 = &g_306[6];
static union U3 ** volatile g_307 = &g_308;
static union U5 g_312[4][6][1] = {{{{-7L}},{{0L}},{{-7L}},{{0L}},{{-7L}},{{0L}}},{{{-7L}},{{0L}},{{-7L}},{{0L}},{{-7L}},{{0L}}},{{{-7L}},{{0L}},{{-7L}},{{0L}},{{-7L}},{{0L}}},{{{-7L}},{{0L}},{{-7L}},{{0L}},{{-7L}},{{0L}}}};
static union U5 ** volatile g_313 = (void*)0;
static union U5 *g_316 = &g_312[1][0][0];
static union U5 ** const volatile g_315 = &g_316;
static int * volatile g_318 = (void*)0;
static int * volatile g_319[5] = {&g_187[1][3][2],&g_187[1][3][2],&g_187[1][3][2],&g_187[1][3][2],&g_187[1][3][2]};
static union U3 ** volatile g_323[3] = {&g_308,&g_308,&g_308};
static int ** volatile g_331[8][6] = {{(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0},{&g_202,&g_202,&g_202,&g_202,&g_202,(void*)0},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{&g_202,&g_202,&g_202,&g_202,&g_202,&g_202},{(void*)0,&g_202,&g_202,(void*)0,&g_202,&g_202},{&g_202,&g_202,&g_202,(void*)0,&g_202,&g_202},{(void*)0,&g_202,&g_202,&g_202,&g_202,(void*)0}};
static union U6 ** volatile g_339 = &g_82[0];
static union U3 ** volatile g_356 = &g_308;
static union U6 g_364 = {65535UL};
static volatile unsigned short *g_385 = (void*)0;
static volatile unsigned short ** volatile g_384[6] = {&g_385,&g_385,&g_385,&g_385,&g_385,&g_385};
static short g_401 = 0x6775L;
static union U1 g_413[4] = {{0},{0},{0},{0}};
static union U5 ** volatile g_429 = &g_316;
static union U4 g_476 = {5L};
static int * volatile g_489 = &g_306[6].f4;
static union U2 g_491 = {0x6F7A7FC5L};
static union U0 *g_497[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static union U6 ** volatile g_517 = &g_82[0];
static unsigned g_534 = 0xC92EA1B3L;
static int * volatile g_568 = (void*)0;
static union U5 g_575 = {0x1D86CFFCL};
static union U0 **g_590 = &g_163[0];
static union U0 ***g_589[4] = {&g_590,&g_590,&g_590,&g_590};
static unsigned g_606 = 0xE67BAFAAL;
static volatile unsigned g_620 = 4294967293UL;
static int ** volatile g_666 = &g_202;
static const int *g_690 = (void*)0;
static const int ** volatile g_689 = &g_690;
static int *g_693 = &g_77;
static int ** volatile g_692 = &g_693;
static union U4 ** volatile g_694 = (void*)0;
static short * const g_698 = &g_54;
static short * const volatile *g_697 = &g_698;
static unsigned char *g_708 = &g_298.f1;
static unsigned char **g_707[2] = {&g_708,&g_708};
static union U3 ** volatile g_721 = &g_308;
static const int ** volatile g_749[6] = {&g_690,&g_690,&g_690,&g_690,&g_690,&g_690};
static const int ** volatile g_751 = (void*)0;
static volatile unsigned short **g_785 = &g_385;
static volatile unsigned short *** volatile g_784 = &g_785;
static const int ** volatile g_793 = (void*)0;
static const int ** volatile g_794 = &g_690;
static union U2 ** volatile g_795 = (void*)0;
static union U2 *g_797 = (void*)0;
static union U2 ** volatile g_796 = &g_797;
static union U6 **g_806 = &g_82[0];
static union U6 **g_809 = &g_82[0];
static union U1 *g_822 = &g_58;
static union U1 **g_821 = &g_822;
static int ** volatile g_825 = (void*)0;
static int ** volatile g_826 = &g_202;
static int ** volatile g_832 = &g_202;
static char *g_844 = &g_139;
static unsigned *g_847 = (void*)0;
static char g_849 = (-1L);
static union U1 *g_866 = &g_413[2];
static union U1 ** volatile g_865 = &g_866;
static int ** volatile g_868 = (void*)0;
static unsigned g_876 = 4294967292UL;
static int ** volatile g_894 = &g_202;
static int ** volatile g_898 = &g_693;
static union U3 ** volatile g_928 = &g_308;
static int ** volatile g_936 = (void*)0;
static int ** const volatile g_937[10] = {&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202,&g_202};
static unsigned short ****g_951 = (void*)0;
static int ** volatile g_958 = &g_202;
static union U2 ** volatile g_988 = (void*)0;
static short * const ** volatile g_1005 = (void*)0;
static short * const *g_1007[3] = {&g_698,&g_698,&g_698};
static short * const ** const volatile g_1006 = &g_1007[0];
static const char g_1043 = 0xC1L;
static union U3 ** volatile g_1059 = &g_308;
static volatile unsigned g_1066 = 0xB0FE6E1CL;
static union U4 g_1146 = {0xF0L};
static union U4 g_1147[5] = {{0x90L},{0x90L},{0x90L},{0x90L},{0x90L}};
static int ** volatile g_1160 = (void*)0;
static union U2 ** const volatile g_1169 = (void*)0;
static const union U3 *g_1174 = &g_306[6];
static const union U3 **g_1173 = &g_1174;
static union U3 g_1190 = {0xB7BEB984L};
static const char g_1208 = 0xF0L;
static char *g_1210 = &g_1146.f0;
static const int * volatile g_1241 = &g_1190.f1;
static const int * volatile *g_1240 = &g_1241;
static const int * volatile ** volatile g_1242 = (void*)0;
static unsigned **g_1254 = &g_69[2][2];



static union U3 func_1(void);
static int func_2(const union U1 p_3, union U4 p_4, unsigned short p_5);
static union U1 func_6(char * p_7, unsigned p_8, char * p_9, short p_10);
static char * func_11(char * p_12, short p_13, char * p_14, const union U0 p_15, int p_16);
static char * func_19(unsigned p_20);
static unsigned func_23(int p_24, char * p_25, char * p_26, char * p_27, char * p_28);
static int func_29(char * p_30, char * p_31, int p_32, int p_33);
static char * func_36(const char * p_37, char * p_38);
static const char * func_39(unsigned char p_40, unsigned p_41, char * p_42);
static char * func_43(char p_44, short p_45, union U1 p_46, union U0 p_47);
static union U3 func_1(void)
{
    unsigned char l_18 = 2UL;
    const union U0 l_801 = {0x3F7B9C19L};
    char *l_848[3];
    union U4 l_901 = {0xE7L};
    const union U1 l_909 = {0};
    char l_922 = 2L;
    int l_923 = 0xA4B600DBL;
    union U3 l_925 = {0x26363B00L};
    union U5 **l_926 = &g_316;
    short l_941 = 1L;
    char *l_984 = &g_35;
    union U2 *l_987 = &g_491;
    unsigned char l_1019 = 0x71L;
    unsigned char l_1052 = 0x79L;
    union U6 ** const *l_1075 = &g_806;
    unsigned short l_1081 = 7UL;
    union U1 ***l_1091 = &g_821;
    const union U1 l_1119 = {0};
    const unsigned char l_1167 = 246UL;
    const union U3 **l_1176 = &g_1174;
    const union U1 l_1181 = {0};
    union U3 *l_1189 = &g_1190;
    unsigned l_1245 = 2UL;
    unsigned short l_1264 = 2UL;
    unsigned l_1283[7][7] = {{0x5ACE9362L,0x4CBF408BL,0x5ACE9362L,0x9FDDC148L,0UL,1UL,0UL},{1UL,0xEBEFD44BL,0x4DFDC479L,0xCCAEEE53L,0UL,0x5ACE9362L,4UL},{4294967294UL,0x5ACE9362L,1UL,0xEBEFD44BL,0xEBEFD44BL,1UL,0x5ACE9362L},{4UL,4294967295UL,0UL,4294967294UL,0xEBEFD44BL,0x9FDDC148L,8UL},{0x4CBF408BL,1UL,4294967295UL,0x8348FB5FL,0UL,0x4DFDC479L,0UL},{0xCCAEEE53L,0UL,4294967294UL,4294967294UL,0UL,0xCCAEEE53L,0x4CBF408BL},{4294967295UL,0UL,4294967294UL,0xEBEFD44BL,0x9FDDC148L,8UL,0UL}};
    unsigned char l_1284 = 0x55L;
    unsigned l_1286 = 0xCB87FB0FL;
    unsigned short *l_1294 = &g_83.f0;
    unsigned short **l_1293 = &l_1294;
    int i, j;
    for (i = 0; i < 3; i++)
        l_848[i] = &g_849;
    if (func_2(func_6(func_11((g_17 = g_17), l_18, func_19(g_21), l_801, l_801.f0), l_801.f1, l_848[2], l_801.f0), l_901, l_901.f0))
    {
        union U4 l_910 = {0x3CL};
        union U1 l_924 = {0};
        (*g_693) = (safe_lshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((func_2(l_909, l_910, (((*g_708) = (safe_mul_func_int8_t_s_s(1L, (l_801.f1 > l_910.f0)))) > (safe_mod_func_uint8_t_u_u(func_29(func_43((safe_lshift_func_int16_t_s_u((((void*)0 != &l_910) < (safe_unary_minus_func_int8_t_s((l_923 = (safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((-1L) && l_922), l_801.f1)) != l_801.f0), l_901.f0)))))), 1)), l_910.f0, l_924, l_801), &l_922, l_910.f0, g_290.f2), l_910.f0)))) == 0x7297L) != l_18), 0xA4L)), 7)) ^ l_910.f0) <= l_18), 1));
    }
    else
    {
        return l_925;
    }
    if (((*g_693) = l_925.f0))
    {
        unsigned l_947 = 8UL;
        union U0 * const ***l_962 = (void*)0;
        int l_981[7] = {0x1DBE13E1L,0x1DBE13E1L,0x1DBE13E1L,0x1DBE13E1L,0x1DBE13E1L,0x1DBE13E1L,0x1DBE13E1L};
        union U6 **l_985 = &g_82[0];
        const union U1 l_986 = {0};
        union U2 **l_989[9][7] = {{&g_797,&g_797,&l_987,&g_797,&g_797,&g_797,&g_797},{&l_987,&l_987,&l_987,&g_797,&g_797,&l_987,&l_987},{&g_797,&l_987,&l_987,&l_987,&l_987,&g_797,&l_987},{&g_797,&g_797,&g_797,&g_797,&l_987,&g_797,&g_797},{&l_987,&l_987,&g_797,&l_987,&g_797,&l_987,&l_987},{&l_987,&g_797,&l_987,&g_797,&l_987,&l_987,&g_797},{&g_797,&l_987,&g_797,&g_797,&g_797,&g_797,&l_987},{&g_797,&l_987,&l_987,&l_987,&l_987,&g_797,&l_987},{&g_797,&g_797,&g_797,&g_797,&l_987,&g_797,&g_797}};
        int i, j;
        if (((void*)0 == l_926))
        {
            union U3 *l_927 = &l_925;
            (*g_928) = l_927;
        }
        else
        {
            short l_948 = 1L;
            union U3 l_959[5][4][10] = {{{{-1L},{0x628C9D21L},{0x7A38DBEFL},{0L},{0L},{0x7A38DBEFL},{0x628C9D21L},{-1L},{0xA2E9ACC3L},{0x628C9D21L}},{{-1L},{4L},{0x0CBF9A22L},{0x628C9D21L},{4L},{0x53A2A46BL},{-9L},{0x3416D8CCL},{0x53A2A46BL},{0L}},{{4L},{0x628C9D21L},{0x0CBF9A22L},{4L},{-1L},{0x3416D8CCL},{0x3416D8CCL},{-1L},{4L},{0x0CBF9A22L}},{{0L},{0L},{0x7A38DBEFL},{0x628C9D21L},{-1L},{0xA2E9ACC3L},{0x628C9D21L},{-9L},{3L},{0L}}},{{{-1L},{0x0CBF9A22L},{0x3416D8CCL},{0L},{4L},{0x3416D8CCL},{0x628C9D21L},{0x53A2A46BL},{0x53A2A46BL},{0x628C9D21L}},{{0x53A2A46BL},{0L},{0x0CBF9A22L},{0x0CBF9A22L},{0L},{0x53A2A46BL},{0x3416D8CCL},{-9L},{0x53A2A46BL},{4L}},{{0L},{0x628C9D21L},{0x28318FD0L},{0L},{-1L},{0x7A38DBEFL},{-9L},{-1L},{3L},{0x628C9D21L}},{{0L},{4L},{0x3416D8CCL},{0x628C9D21L},{0x53A2A46BL},{0x53A2A46BL},{0x628C9D21L},{0x3416D8CCL},{4L},{0L}}},{{{0x53A2A46BL},{0x628C9D21L},{0x3416D8CCL},{4L},{0L},{0x3416D8CCL},{0x0CBF9A22L},{-1L},{0x53A2A46BL},{0x0CBF9A22L}},{{-1L},{0L},{0x28318FD0L},{0x628C9D21L},{0L},{0xA2E9ACC3L},{-9L},{-9L},{0xA2E9ACC3L},{0L}},{{0L},{0x0CBF9A22L},{0x0CBF9A22L},{0L},{0x53A2A46BL},{0x3416D8CCL},{-9L},{0x53A2A46BL},{4L},{0x628C9D21L}},{{4L},{0L},{0x3416D8CCL},{0x0CBF9A22L},{-1L},{0x53A2A46BL},{0x0CBF9A22L},{-9L},{4L},{4L}}},{{{-1L},{0x628C9D21L},{0x7A38DBEFL},{0L},{0L},{0x7A38DBEFL},{0x628C9D21L},{-1L},{0xA2E9ACC3L},{0x628C9D21L}},{{-1L},{4L},{0x0CBF9A22L},{0x628C9D21L},{4L},{0x53A2A46BL},{-9L},{0x3416D8CCL},{0x53A2A46BL},{0L}},{{4L},{0x628C9D21L},{0x0CBF9A22L},{4L},{-1L},{0x7A38DBEFL},{0x7A38DBEFL},{0x53A2A46BL},{3L},{0x28318FD0L}},{{4L},{4L},{-9L},{0x0CBF9A22L},{0x53A2A46BL},{-1L},{0x0CBF9A22L},{0x3416D8CCL},{0L},{4L}}},{{{0x53A2A46BL},{0x28318FD0L},{0x7A38DBEFL},{4L},{3L},{0x7A38DBEFL},{0x0CBF9A22L},{0xA2E9ACC3L},{0xA2E9ACC3L},{0x0CBF9A22L}},{{0xA2E9ACC3L},{4L},{0x28318FD0L},{0x28318FD0L},{4L},{0xA2E9ACC3L},{0x7A38DBEFL},{0x3416D8CCL},{0xA2E9ACC3L},{3L}},{{4L},{0x0CBF9A22L},{0x628C9D21L},{4L},{0x53A2A46BL},{-9L},{0x3416D8CCL},{0x53A2A46BL},{0L},{0x0CBF9A22L}},{{4L},{3L},{0x7A38DBEFL},{0x0CBF9A22L},{0xA2E9ACC3L},{0xA2E9ACC3L},{0x0CBF9A22L},{0x7A38DBEFL},{3L},{4L}}}};
            int * const l_963 = &g_77;
            int i, j, k;
            for (g_290.f0 = 0; (g_290.f0 != (-30)); g_290.f0 = safe_sub_func_uint16_t_u_u(g_290.f0, 5))
            {
                char ***l_942 = &g_190;
                int *l_957[2][1][3] = {{{&l_923,&l_923,&l_923}},{{(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (g_534 = 0; (g_534 > 23); g_534 = safe_add_func_uint8_t_u_u(g_534, 1))
                {
                    int *l_935 = (void*)0;
                    int l_954 = 1L;
                    const union U0 l_955 = {0xE48A9DAAL};
                    for (g_70 = 0; (g_70 < 36); g_70 = safe_add_func_uint8_t_u_u(g_70, 6))
                    {
                        int **l_938 = (void*)0;
                        int **l_939[7][5] = {{&g_202,&g_202,(void*)0,(void*)0,&g_202},{&g_202,&g_202,&g_202,&g_202,(void*)0},{(void*)0,&g_202,(void*)0,&g_202,(void*)0},{&g_202,&g_693,&g_202,(void*)0,&g_693},{(void*)0,&g_202,&g_202,(void*)0,(void*)0},{&g_202,(void*)0,(void*)0,&g_693,&g_693},{&g_202,(void*)0,&g_202,(void*)0,&g_693}};
                        int *l_940 = &g_306[6].f4;
                        char ****l_943 = &l_942;
                        unsigned *l_944 = &g_876;
                        char *l_952[8] = {&g_35,&g_35,&g_35,&g_35,&g_35,&g_35,&g_35,&g_35};
                        char **l_953 = &l_848[2];
                        unsigned l_956 = 4294967295UL;
                        int i, j;
                        l_940 = l_935;
                        l_925.f4 = ((l_941 <= ((*l_944) = (((*l_943) = l_942) == (void*)0))) && ((l_947 ^ (l_948 > ((*l_944) = (safe_mod_func_int8_t_s_s(((g_951 = (void*)0) == &g_784), func_29(&g_139, func_11(((*l_953) = l_952[6]), l_954, &g_35, l_955, g_298.f1), g_849, l_956)))))) > g_312[1][0][0].f1));
                    }
                    for (g_113 = 5; (g_113 >= 1); g_113 -= 1)
                    {
                        (*g_958) = l_957[0][0][2];
                    }
                    return l_959[2][3][4];
                }
                return l_959[4][3][4];
            }
            for (l_947 = 0; (l_947 == 50); l_947++)
            {
                char *l_982 = &g_139;
                char **l_983[5] = {&l_848[2],&l_848[2],&l_848[2],&l_848[2],&l_848[2]};
                int i;
                if ((l_947 == ((void*)0 != l_962)))
                {
                    int **l_964[2];
                    int **l_965 = &g_693;
                    unsigned short *l_975 = &g_491.f2;
                    unsigned short **l_974 = &l_975;
                    const union U1 l_980 = {0};
                    int i;
                    for (i = 0; i < 2; i++)
                        l_964[i] = &g_202;
                    (*l_965) = l_963;
                    (*g_693) = l_925.f1;
                    l_923 = (safe_sub_func_int32_t_s_s(((*g_693) = (safe_add_func_uint8_t_u_u(((*g_186) & (0x49DEL >= (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((l_974 != (void*)0), (safe_mod_func_int32_t_s_s(((0UL < 0x886210A3L) == ((safe_lshift_func_int16_t_s_u((*g_698), 15)) > (+(9L > func_2(l_980, g_476, g_306[6].f4))))), l_923)))), 0xEB48L)))), l_18))), l_801.f0));
                }
                else
                {
                    l_981[1] = 0x50D842A2L;
                }
                (*l_963) = (func_29(l_982, (g_269 = (l_984 = (l_848[2] = &g_113))), g_306[6].f3, g_476.f0) & (~(((((void*)0 != l_985) | func_2(l_986, g_476, l_941)) >= 0x4D0E89C1L) || (*l_963))));
            }
        }
        l_987 = l_987;
    }
    else
    {
        const union U1 l_998 = {0};
        union U4 l_999 = {1L};
        unsigned short *l_1024 = &g_364.f0;
        unsigned short **l_1023 = &l_1024;
        unsigned short ***l_1022 = &l_1023;
        char *l_1047 = (void*)0;
        int *l_1060 = (void*)0;
        union U5 *l_1074 = (void*)0;
        union U6 ** const *l_1076[1];
        int l_1078 = 0x9FB857F3L;
        short *l_1084 = &g_54;
        short **l_1083 = &l_1084;
        unsigned short l_1086 = 3UL;
        union U1 ***l_1092 = (void*)0;
        int i;
        for (i = 0; i < 1; i++)
            l_1076[i] = (void*)0;
        if (l_925.f3)
        {
            short l_994[1][2];
            unsigned **l_997[4][7][8] = {{{&g_69[2][3],(void*)0,&g_69[2][3],(void*)0,&g_69[9][8],&g_69[2][3],&g_69[8][0],(void*)0},{&g_69[9][3],(void*)0,(void*)0,(void*)0,(void*)0,&g_69[5][6],&g_847,&g_847},{&g_69[2][3],(void*)0,(void*)0,&g_847,&g_69[3][7],&g_847,(void*)0,(void*)0},{&g_69[2][3],&g_69[2][3],&g_69[2][2],&g_69[2][3],&g_847,&g_69[1][7],&g_69[2][3],&g_69[8][0]},{&g_847,(void*)0,&g_69[1][7],(void*)0,&g_69[2][3],(void*)0,&g_69[2][3],&g_69[2][2]},{&g_69[5][6],(void*)0,&g_69[2][2],&g_69[1][7],(void*)0,&g_69[2][3],(void*)0,&g_69[9][3]},{(void*)0,&g_69[2][3],(void*)0,&g_69[9][3],&g_69[2][3],&g_69[2][9],&g_847,&g_69[2][3]}},{{&g_847,&g_847,(void*)0,(void*)0,(void*)0,&g_69[2][3],&g_69[8][0],(void*)0},{&g_69[2][3],(void*)0,&g_69[2][3],(void*)0,&g_69[8][3],(void*)0,(void*)0,(void*)0},{&g_69[2][3],(void*)0,&g_69[0][3],&g_69[0][3],(void*)0,&g_69[2][3],(void*)0,&g_847},{&g_69[2][3],&g_847,&g_69[2][3],&g_847,&g_69[2][3],&g_847,&g_847,&g_69[3][7]},{&g_847,(void*)0,(void*)0,&g_847,&g_69[2][3],&g_69[2][3],&g_69[2][3],(void*)0},{(void*)0,&g_69[2][3],&g_69[7][3],&g_847,(void*)0,&g_69[2][3],&g_847,&g_69[1][7]},{(void*)0,&g_847,&g_69[2][3],&g_69[9][8],&g_847,(void*)0,&g_69[7][9],&g_847}},{{&g_69[8][0],(void*)0,(void*)0,&g_69[2][2],&g_69[8][3],(void*)0,&g_69[0][3],&g_69[1][7]},{&g_847,&g_69[2][3],&g_69[2][3],(void*)0,&g_69[2][3],&g_847,&g_69[2][3],(void*)0},{(void*)0,&g_69[8][3],(void*)0,&g_847,&g_847,&g_69[2][3],(void*)0,&g_69[2][3]},{&g_69[2][3],&g_69[3][7],(void*)0,&g_847,&g_69[9][3],(void*)0,&g_847,&g_69[5][6]},{&g_69[2][3],&g_69[2][3],&g_847,&g_69[2][9],&g_847,&g_69[1][7],&g_847,&g_69[9][8]},{(void*)0,(void*)0,(void*)0,&g_847,&g_69[2][3],&g_69[9][3],&g_69[2][3],(void*)0},{&g_847,(void*)0,&g_847,&g_69[2][3],&g_69[8][3],(void*)0,&g_69[2][3],&g_847}},{{&g_69[8][0],&g_69[2][3],&g_69[9][3],&g_847,&g_847,(void*)0,(void*)0,&g_69[8][3]},{(void*)0,(void*)0,(void*)0,&g_69[2][3],&g_69[2][3],(void*)0,(void*)0,(void*)0},{&g_69[8][0],&g_69[2][3],&g_847,(void*)0,&g_847,&g_69[7][9],(void*)0,(void*)0},{&g_69[2][3],&g_69[5][2],&g_69[7][3],&g_69[2][3],(void*)0,&g_69[7][9],&g_69[8][3],&g_847},{&g_847,&g_69[2][3],(void*)0,(void*)0,&g_69[2][3],(void*)0,&g_69[1][7],(void*)0},{&g_847,(void*)0,&g_847,&g_69[8][3],&g_69[1][7],&g_69[2][3],(void*)0,&g_847},{(void*)0,(void*)0,&g_69[1][7],&g_847,&g_847,&g_69[2][3],&g_69[0][3],&g_69[9][3]}}};
            int l_1000 = 0L;
            union U3 l_1008 = {0xB42B095CL};
            char l_1015[7] = {1L,6L,6L,1L,6L,6L,1L};
            char *l_1046 = &l_922;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_994[i][j] = 0xAFF4L;
            }
            l_1000 = (l_925.f1 > ((((safe_rshift_func_uint8_t_u_s(((*g_708) = (safe_mod_func_uint32_t_u_u(l_994[0][1], (safe_mod_func_int16_t_s_s((l_997[1][2][1] == &g_69[2][3]), (((**g_697) ^ func_2(l_998, l_999, l_999.f0)) & 0x17F4F3B4L)))))), l_925.f4)) || l_925.f3) == l_999.f0) & 4294967288UL));
lbl_1026:
            for (g_849 = 0; (g_849 >= (-3)); g_849 = safe_sub_func_uint16_t_u_u(g_849, 7))
            {
                if ((**g_898))
                    break;
            }
            for (g_575.f1 = (-24); (g_575.f1 == 37); g_575.f1 = safe_add_func_int16_t_s_s(g_575.f1, 4))
            {
                int *l_1009 = &g_306[6].f4;
                unsigned char *l_1040[9];
                const union U0 l_1044 = {-1L};
                unsigned char *l_1045 = &l_18;
                int l_1048 = 0x7A2B24FBL;
                unsigned short ****l_1056 = &l_1022;
                int i;
                for (i = 0; i < 9; i++)
                    l_1040[i] = &g_298.f1;
                if (l_925.f0)
                {
                    (*g_821) = (*g_865);
                    (*g_1006) = &g_698;
                    return l_1008;
                }
                else
                {
                    int **l_1010 = &g_202;
                    char *l_1016 = &l_999.f0;
                    char **l_1017 = &l_984;
                    char **l_1018 = &l_1016;
                    if (l_925.f4)
                        break;
                    (*l_1010) = l_1009;
                    (*g_693) = (!(safe_rshift_func_uint8_t_u_s((l_999.f0 | ((safe_mod_func_uint16_t_u_u(l_1015[4], ((((*g_708) = 255UL) >= func_29(((*l_1018) = ((*l_1017) = l_1016)), &l_922, l_801.f1, g_491.f2)) & func_2(l_909, g_476, l_1019)))) >= l_1015[4])), l_18)));
                    (*l_1010) = (void*)0;
                }
                if ((*l_1009))
                {
                    for (g_491.f2 = 6; (g_491.f2 <= 22); g_491.f2 = safe_add_func_uint16_t_u_u(g_491.f2, 6))
                    {
                        (*g_693) = (*g_79);
                        if (l_994[0][0])
                            break;
                        (*g_693) = (*l_1009);
                    }
                }
                else
                {
                    unsigned short ***l_1025 = &l_1023;
                    for (g_606 = 0; (g_606 <= 2); g_606 += 1)
                    {
                        (*g_693) = (l_1022 != l_1025);
                    }
                    if (l_901.f0)
                        goto lbl_1026;
                }
                for (g_113 = (-28); (g_113 != (-21)); ++g_113)
                {
                    unsigned char l_1033 = 1UL;
                    const char *l_1042 = &g_1043;
                    const char **l_1041 = &l_1042;
                    if ((safe_lshift_func_uint8_t_u_s(0UL, (l_1008.f4 = ((((safe_mod_func_int8_t_s_s(0xA3L, (0xA0679A84L | (l_1033 == l_925.f0)))) != (l_1033 > l_1048)) & l_1015[4]) ^ 1UL)))))
                    {
                        int l_1051 = 0x473B4933L;
                        int l_1055 = 0x357A978CL;
                        int **l_1057 = &g_693;
                        union U3 l_1058 = {0x3AD3E073L};
                        (*g_693) = ((safe_sub_func_int8_t_s_s((l_1008.f4 = ((*g_844) = (l_1051 = l_1008.f1))), ((*l_1009) || ((*l_1024) = ((l_1052 || (safe_sub_func_uint32_t_u_u(l_1015[4], l_1052))) != l_1055))))) && (l_1056 == (void*)0));
                        (*l_1057) = &l_1055;
                        return l_1058;
                    }
                    else
                    {
                        if (l_1033)
                            break;
                    }
                    l_1008.f4 = l_1015[1];
                }
                (*g_1059) = &l_1008;
            }
        }
        else
        {
            int **l_1061 = &g_202;
            union U2 **l_1065 = &g_797;
            int l_1067 = 0L;
            char l_1077 = 0L;
            (*l_1061) = l_1060;
            for (g_68 = 0; (g_68 != 37); g_68 = safe_add_func_int8_t_s_s(g_68, 9))
            {
                short l_1064 = 5L;
                if (l_1064)
                    break;
                (*g_693) = l_1064;
            }
            (*l_1065) = (*g_796);
            l_1078 = (g_1066 > (l_1067 >= (((*l_984) = ((safe_rshift_func_uint8_t_u_u((l_801.f1 || (safe_lshift_func_int8_t_s_u(((4294967295UL ^ (l_1074 == (void*)0)) <= (((l_1076[0] = l_1075) != (void*)0) ^ (l_925.f4 = (l_1077 > g_290.f2)))), 0))), 1)) && (*g_844))) > (*g_844))));
        }
        for (g_113 = 25; (g_113 < (-13)); g_113--)
        {
            short l_1082 = 1L;
            const char *l_1085 = &g_141[0][2];
            (*g_693) = (((((l_1081 ^ l_1082) || (((void*)0 == l_1083) > func_23(l_801.f0, l_1047, func_36(l_1085, &l_922), &l_922, &g_141[2][1]))) == 0x6A5EL) >= (-1L)) <= l_1086);
            if (l_1082)
                continue;
            if ((**g_898))
                break;
        }
        l_1078 = ((safe_sub_func_int8_t_s_s(((*l_984) = (safe_lshift_func_int16_t_s_u(((*l_1084) = 0xF0EBL), (l_801.f0 != func_29(func_36(&l_922, &g_139), &l_922, g_620, ((&g_821 == (l_1092 = l_1091)) == (*g_708))))))), l_1078)) | l_925.f0);
    }
    if (l_941)
    {
        short l_1099 = 0L;
        int *l_1116 = (void*)0;
        char *l_1124 = &g_35;
        int l_1127[3];
        char l_1130 = 0x9DL;
        union U3 l_1135 = {0x4F9BF288L};
        const union U0 *l_1155[10] = {&g_127,&g_127,&g_298,&l_801,&g_298,&g_127,&g_127,&g_298,&l_801,&g_298};
        const union U1 *l_1171 = &l_909;
        union U2 **l_1201 = &l_987;
        int l_1211 = 0xFA664377L;
        union U6 *l_1215[5][3] = {{&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364},{&g_364,&g_364,&g_364}};
        unsigned *l_1250 = &g_876;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1127[i] = 0x9EDA8DFBL;
lbl_1177:
        for (g_476.f1 = 29; (g_476.f1 < (-19)); g_476.f1 = safe_sub_func_uint8_t_u_u(g_476.f1, 1))
        {
            unsigned l_1106 = 5UL;
            union U2 *l_1110 = &g_491;
            char *l_1123 = &g_476.f0;
            union U4 l_1126 = {7L};
            const union U1 l_1129 = {0};
            int *l_1159 = &l_923;
            for (g_849 = 0; (g_849 > (-11)); g_849 = safe_sub_func_uint8_t_u_u(g_849, 1))
            {
                char *l_1104 = &g_141[4][1];
                const union U2 *l_1109 = (void*)0;
                int l_1128 = 0x9F093C86L;
                int *l_1136 = (void*)0;
                int *l_1137 = &g_306[6].f4;
            }
            if (l_1019)
                break;
            if ((*g_79))
                break;
            for (g_575.f1 = 0; (g_575.f1 <= 0); g_575.f1 += 1)
            {
                const int l_1138 = (-8L);
                unsigned short *l_1139 = (void*)0;
                unsigned short *l_1140[4] = {&g_83.f0,&g_83.f0,&g_83.f0,&g_83.f0};
                int l_1154 = 1L;
                int i;
                if ((0xBFF6L > (l_923 = (l_1138 > 0xEA40L))))
                {
                    const union U1 l_1143 = {0};
                    union U4 l_1144 = {0x59L};
                    union U4 *l_1145[10] = {&l_1126,&l_1126,&l_1126,&l_1126,&l_1126,&l_1126,&l_1126,&l_1126,&l_1126,&l_1126};
                    short *l_1149 = (void*)0;
                    short **l_1148 = &l_1149;
                    int i, j;
                    (*g_693) = (safe_mul_func_int8_t_s_s(0xF5L, func_2(l_1143, (g_1147[4] = (g_1146 = l_1144)), (((*l_1148) = &g_401) == (*g_697)))));
                    if ((l_1106 >= ((safe_mul_func_uint16_t_u_u((l_1154 = ((safe_lshift_func_uint16_t_u_u((l_1126.f0 < l_1106), l_1138)) & (***g_1006))), l_1144.f0)) >= (0xC2D3L >= (((l_1138 < (((*l_1149) = 1L) ^ l_1106)) < l_1106) >= l_1052)))))
                    {
                        const union U0 **l_1156 = &l_1155[1];
                        int l_1157 = 1L;
                        int i;
                        (*g_201) = &l_923;
                        (*g_809) = (*g_170);
                        (*l_1156) = l_1155[1];
                        if (l_1157)
                            continue;
                    }
                    else
                    {
                        int **l_1158[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1158[i] = (void*)0;
                        l_1159 = &l_923;
                        (*l_926) = (*g_429);
                    }
                }
                else
                {
                    int **l_1161 = (void*)0;
                    int **l_1162 = &g_202;
                    (*l_1162) = l_1159;
                }
                if ((l_925.f1 < 0xF58CB7CDL))
                {
                    for (g_849 = 0; (g_849 <= 1); g_849 += 1)
                    {
                        l_1154 = (*l_1159);
                    }
                    if ((**g_898))
                        break;
                }
                else
                {
                    int l_1163 = 0x86E49488L;
                    int *l_1164 = &l_925.f4;
                    (*g_489) = (((**g_697) && (((void*)0 != &l_925) || l_1163)) && (*l_1159));
                    l_1164 = (void*)0;
                    for (g_35 = 0; (g_35 < 24); g_35++)
                    {
                        int **l_1168 = &g_202;
                        if ((**g_898))
                            break;
                        if (l_1167)
                            break;
                        (*l_1168) = l_1159;
                    }
                }
            }
        }
        for (g_849 = 0; (g_849 <= 4); g_849 += 1)
        {
            union U2 **l_1170 = &g_797;
            int l_1179 = (-1L);
            union U3 *l_1191 = (void*)0;
            char *l_1194[4];
            unsigned short l_1195 = 0xCFD8L;
            int *l_1212 = &g_1190.f4;
            int *l_1256 = &l_1179;
            unsigned char l_1282 = 1UL;
            int i;
            for (i = 0; i < 4; i++)
                l_1194[i] = &g_1147[4].f0;
            (*l_1170) = (*g_796);
            for (g_476.f0 = 0; (g_476.f0 <= 4); g_476.f0 += 1)
            {
                const union U1 **l_1172 = &l_1171;
                const union U3 ***l_1175[10][4] = {{&g_1173,(void*)0,&g_1173,&g_1173},{&g_1173,&g_1173,&g_1173,&g_1173},{&g_1173,(void*)0,&g_1173,(void*)0},{&g_1173,&g_1173,&g_1173,&g_1173},{(void*)0,&g_1173,&g_1173,(void*)0},{&g_1173,(void*)0,&g_1173,&g_1173},{&g_1173,&g_1173,&g_1173,&g_1173},{(void*)0,&g_1173,&g_1173,&g_1173},{&g_1173,&g_1173,&g_1173,&g_1173},{&g_1173,(void*)0,&g_1173,(void*)0}};
                int i, j;
                (*l_1172) = l_1171;
                g_1173 = (l_1176 = g_1173);
            }
            for (g_491.f2 = 0; (g_491.f2 <= 4); g_491.f2 += 1)
            {
                short l_1185 = 1L;
                union U3 **l_1186 = (void*)0;
                union U3 **l_1187 = &g_308;
                union U3 **l_1188[4] = {&g_308,&g_308,&g_308,&g_308};
                int l_1198 = 8L;
                const char *l_1207 = &g_1208;
                union U4 l_1227 = {-1L};
                char *l_1237 = &g_849;
                int i;
                if (l_1019)
                    break;
                for (g_575.f1 = 0; (g_575.f1 <= 5); g_575.f1 += 1)
                {
                    union U1 *l_1178 = &g_413[2];
                    unsigned char l_1180 = 255UL;
                    int l_1184 = (-7L);
                    if (l_1081)
                    {
                        if (l_923)
                            goto lbl_1177;
                        (*g_693) = (**g_692);
                    }
                    else
                    {
                        (*g_821) = l_1178;
                    }
                    (*l_1170) = (*l_1170);
                    (*g_693) = l_1179;
                    for (g_606 = 0; (g_606 <= 5); g_606 += 1)
                    {
                        unsigned short *l_1182 = &g_83.f0;
                        unsigned char l_1183 = 6UL;
                        int i, j;
                        (*g_693) = (*g_186);
                        if (l_1180)
                            continue;
                        (**g_692) = (l_1184 = ((!(l_1183 = (l_1180 == ((*l_1182) = (l_1179 || func_2(l_1181, g_1147[g_491.f2], l_1180)))))) | func_29(&g_113, &g_849, g_290.f4, g_491.f3)));
                        (*l_1170) = (*g_796);
                    }
                }
                if (l_1185)
                    continue;
            }
            for (l_901.f1 = 3; (l_901.f1 >= 0); l_901.f1 -= 1)
            {
                const union U1 l_1244 = {0};
                union U4 l_1251[9] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
                unsigned l_1275 = 4294967295UL;
                unsigned l_1285[1];
                union U0 *l_1287 = &g_298;
                union U3 l_1288 = {0x8E818520L};
                int i;
                for (i = 0; i < 1; i++)
                    l_1285[i] = 4294967293UL;
                if (func_2(l_1244, g_1147[4], ((!l_922) != (l_1245 | ((safe_add_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s((l_1250 == &g_1066), 3)) >= ((**g_697) = l_925.f1)) <= func_2(l_1244, l_1251[1], l_1251[1].f0)), l_1251[1].f0)) == (*g_708))))))
                {
                    int **l_1257[2][5][8] = {{{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202}},{{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202},{&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202,&l_1116,&g_202}}};
                    int i, j, k;
                    for (l_923 = 0; (l_923 <= 4); l_923 += 1)
                    {
                        unsigned **l_1253 = &l_1250;
                        unsigned ***l_1252[9] = {&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253,&l_1253};
                        union U3 *l_1255 = &l_1135;
                        int i;
                        g_1254 = &l_1250;
                        if ((*l_1212))
                            break;
                        (*g_1173) = l_1255;
                    }
                    (*g_277) = l_1256;
                }
                else
                {
                    unsigned char l_1260 = 1UL;
                    unsigned *l_1279 = &g_70;
                    unsigned ** const l_1278 = &l_1279;
                    unsigned ** const *l_1277 = &l_1278;
                    unsigned ** const **l_1276 = &l_1277;
                    unsigned ** const *l_1281 = &l_1278;
                    unsigned ** const **l_1280 = &l_1281;
                    (*l_1212) = ((safe_sub_func_int8_t_s_s(l_1260, ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((+l_1264))), (0x0AD1L || ((*g_698) = (-4L))))) >= (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u((l_1260 != l_1251[1].f0), (safe_mod_func_uint8_t_u_u((((*l_1124) = (safe_lshift_func_uint8_t_u_s(l_1275, ((&g_1254 != ((*l_1280) = ((*l_1276) = &g_1254))) <= l_1251[1].f0)))) || l_941), l_1282)))) ^ l_1283[2][4]) < l_1284), l_1285[0])), 5))))) != l_1286);
                    (*g_590) = l_1287;
                    (*l_1256) = ((*l_1212) == 9L);
                    return l_1135;
                }
                return l_1288;
            }
        }
    }
    else
    {
        unsigned short *l_1289 = &g_290.f2;
        int l_1295 = (-1L);
        char **l_1296 = &l_848[0];
        (*g_693) = (((((*l_1289) = 1UL) >= (safe_unary_minus_func_uint32_t_u(((((*g_698) = (safe_rshift_func_uint8_t_u_s(((l_1293 = &l_1289) == (void*)0), 2))) != l_925.f0) <= l_1295)))) == 0x74CCL) ^ (l_1296 != &l_848[2]));
    }
    return (**l_1176);
}







static int func_2(const union U1 p_3, union U4 p_4, unsigned short p_5)
{
    unsigned l_902 = 0UL;
    return l_902;
}







static union U1 func_6(char * p_7, unsigned p_8, char * p_9, short p_10)
{
    short l_852 = 0x2297L;
    union U3 **l_857 = &g_308;
    int *l_867 = &g_77;
    char *l_872 = &g_849;
    char *l_873 = &g_141[1][2];
    int **l_897 = (void*)0;
    union U1 l_900 = {0};
    if ((((safe_lshift_func_int16_t_s_s(((*g_698) = l_852), 12)) > (safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((&g_308 == l_857), ((((safe_mod_func_int8_t_s_s(func_29(p_9, func_36(p_7, p_7), ((safe_lshift_func_int16_t_s_s((l_852 <= (*g_844)), 15)) == l_852), g_575.f2), 5L)) | 0x34L) | 1UL) ^ p_8))) <= 247UL), p_8))) || (-1L)))
    {
        int **l_869 = &g_693;
        for (p_10 = 24; (p_10 > 7); p_10 = safe_sub_func_int32_t_s_s(p_10, 1))
        {
            union U1 *l_864[4][5][4] = {{{&g_58,&g_413[3],&g_413[2],&g_413[3]},{&g_413[3],&g_58,&g_413[1],&g_413[2]},{&g_413[0],&g_413[1],&g_413[3],&g_413[2]},{&g_413[3],&g_58,&g_413[2],&g_413[2]},{&g_413[3],&g_58,&g_413[3],&g_413[3]}},{{&g_413[0],&g_413[2],&g_413[1],&g_413[0]},{&g_413[3],&g_58,&g_413[2],&g_413[3]},{&g_58,&g_413[3],&g_413[3],&g_413[1]},{&g_58,&g_58,&g_58,&g_58},{&g_413[2],&g_58,(void*)0,&g_413[0]}},{{&g_413[2],&g_413[2],&g_58,&g_413[2]},{&g_413[3],&g_413[3],&g_58,&g_413[2]},{&g_58,&g_413[2],&g_413[3],&g_413[3]},{&g_413[3],&g_58,&g_58,(void*)0},{&g_58,&g_58,&g_413[2],&g_58}},{{&g_413[2],&g_413[1],&g_58,&g_413[3]},{&g_413[2],&g_413[3],&g_413[2],&g_413[0]},{&g_413[2],&g_413[2],&g_413[3],&g_58},{&g_413[2],&g_413[2],&g_58,&g_413[2]},{&g_413[1],&g_413[2],&g_58,&g_413[2]}}};
            int i, j, k;
            (*g_865) = ((*g_821) = l_864[2][4][2]);
        }
        (*l_869) = l_867;
    }
    else
    {
        unsigned l_874[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        const union U0 l_875[5] = {{0xE8EA3E0FL},{0xE8EA3E0FL},{0xE8EA3E0FL},{0xE8EA3E0FL},{0xE8EA3E0FL}};
        union U4 **l_877 = (void*)0;
        union U4 *l_879 = &g_476;
        union U4 **l_878 = &l_879;
        char *l_882 = &g_141[5][1];
        int * const l_893 = &g_77;
        int i;
lbl_895:
        (*g_489) = (((safe_sub_func_int8_t_s_s((func_23(p_10, l_872, l_872, func_11(l_873, l_874[3], l_873, l_875[1], (l_875[1].f0 ^ p_8)), l_872) ^ p_8), g_876)) || (*g_698)) | 0xA2L);
        (*l_878) = (void*)0;
        for (g_534 = 18; (g_534 > 51); g_534 = safe_add_func_uint8_t_u_u(g_534, 4))
        {
            short l_890 = (-1L);
            int *l_891 = (void*)0;
            int *l_892 = &g_306[6].f1;
            int **l_896 = &l_867;
            (*g_693) = func_29(l_872, l_882, g_187[1][3][2], ((*l_892) = ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(l_875[1].f0)), l_875[1].f0)) | (((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((l_875[1].f0 | (~(p_8 > ((*g_698) && l_875[1].f1)))), 1)), p_10)) > 0x2565L) != l_890))));
            (*g_894) = l_893;
            if (l_890)
                goto lbl_895;
            (*l_896) = l_893;
        }
        (*g_356) = (*l_857);
    }
    if (g_876)
        goto lbl_899;
lbl_899:
    (*g_898) = l_867;
    return l_900;
}







static char * func_11(char * p_12, short p_13, char * p_14, const union U0 p_15, int p_16)
{
    int * const *l_804 = &g_693;
    union U6 **l_805 = &g_82[0];
    union U6 **l_808 = &g_82[0];
    union U6 ***l_807[4][6][3] = {{{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{(void*)0,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808}},{{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{(void*)0,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808}},{{&l_808,&l_808,&l_808},{(void*)0,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808}},{{(void*)0,&l_808,&l_808},{(void*)0,&l_808,&l_808},{&l_808,&l_808,&l_808},{&l_808,&l_808,&l_808},{(void*)0,&l_808,&l_808},{&l_808,&l_808,&l_808}}};
    union U5 *l_816[1][1][5] = {{{&g_312[3][3][0],&g_312[3][3][0],&g_312[3][3][0],&g_312[3][3][0],&g_312[3][3][0]}}};
    const unsigned short l_823 = 1UL;
    char *l_842 = &g_141[2][1];
    unsigned **l_846 = &g_69[9][2];
    int i, j, k;
lbl_833:
    (**l_804) = ((+(((safe_rshift_func_int16_t_s_u((((l_804 == l_804) <= (!((*p_14) = (((l_805 = (g_806 = l_805)) == (g_809 = &g_82[0])) < (safe_lshift_func_uint8_t_u_u(((*g_708) = ((safe_add_func_int16_t_s_s(((**g_697) = (**l_804)), (((void*)0 != (*g_307)) >= p_16))) <= p_16)), (**l_804))))))) <= 0x14568CFAL), 11)) ^ p_16) || p_13)) && (**l_804));
    if (((~(safe_add_func_int16_t_s_s((l_816[0][0][2] != (*g_315)), (((*g_708) = (p_15.f1 || p_13)) & (((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((void*)0 != g_821), (((**l_804) = ((~(l_823 == ((**l_804) && ((**l_804) == (*g_693))))) > 1UL)) == 0xE7L))) < 0x1915A705L), l_823)) > p_15.f0) != 0x2A344D9AL))))) && (-1L)))
    {
        int *l_824[9][4][4] = {{{(void*)0,(void*)0,(void*)0,&g_187[1][3][2]},{&g_306[6].f4,&g_306[6].f4,&g_77,&g_187[1][3][2]},{&g_187[1][3][2],&g_187[1][0][3],&g_306[6].f4,&g_77},{(void*)0,&g_187[1][3][2],&g_187[0][0][4],&g_77}},{{&g_187[1][3][2],(void*)0,&g_77,(void*)0},{&g_187[1][3][2],&g_187[1][3][2],(void*)0,&g_77},{&g_306[6].f4,&g_187[2][2][4],&g_77,&g_187[1][3][2]},{&g_77,&g_187[1][3][2],&g_187[1][3][2],(void*)0}},{{&g_77,(void*)0,&g_77,&g_306[6].f4},{&g_306[6].f4,(void*)0,(void*)0,(void*)0},{&g_187[1][3][2],&g_187[1][3][2],&g_77,&g_306[6].f4},{&g_187[1][3][2],&g_77,&g_187[0][0][4],&g_187[0][0][4]}},{{(void*)0,(void*)0,&g_306[6].f4,&g_187[2][2][4]},{&g_187[1][3][2],&g_306[6].f4,&g_77,&g_187[1][0][3]},{&g_306[6].f4,&g_187[0][2][3],(void*)0,&g_77},{(void*)0,&g_187[0][2][3],&g_77,&g_187[1][0][3]}},{{&g_187[0][2][3],&g_306[6].f4,&g_306[6].f4,&g_187[2][2][4]},{&g_187[1][3][2],(void*)0,&g_187[1][3][2],&g_187[0][0][4]},{&g_77,&g_77,&g_306[6].f4,(void*)0},{&g_187[1][0][3],&g_187[0][2][3],&g_187[1][0][3],&g_77}},{{(void*)0,&g_77,(void*)0,&g_306[6].f4},{&g_187[1][3][2],&g_187[1][3][0],&g_187[1][3][2],&g_77},{&g_306[6].f4,(void*)0,&g_187[1][3][2],&g_306[6].f4},{&g_187[1][3][2],(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_77,&g_187[1][0][3],&g_187[1][3][2]},{&g_187[1][0][3],&g_187[1][3][2],&g_306[6].f4,&g_77},{&g_187[1][3][2],&g_306[6].f4,&g_306[6].f4,&g_187[1][3][2]},{&g_187[1][3][2],&g_187[1][3][2],(void*)0,&g_187[2][2][4]}},{{&g_77,&g_306[6].f4,&g_187[1][3][2],&g_77},{&g_187[1][3][0],&g_187[1][3][2],&g_187[1][3][2],&g_77},{&g_306[6].f4,&g_306[6].f4,&g_187[0][0][4],&g_187[2][2][4]},{&g_306[6].f4,&g_187[1][3][2],&g_306[6].f4,&g_187[1][3][2]}},{{&g_77,&g_306[6].f4,&g_306[6].f4,&g_77},{(void*)0,&g_187[1][3][2],&g_187[1][3][2],&g_187[1][3][2]},{(void*)0,&g_77,&g_187[1][3][2],(void*)0},{&g_306[6].f4,(void*)0,(void*)0,&g_306[6].f4}}};
        int i, j, k;
        (*g_693) = (0L < (p_15.f1 | p_16));
        (*g_826) = l_824[1][2][0];
        for (g_35 = 0; (g_35 == 10); g_35 = safe_add_func_int32_t_s_s(g_35, 3))
        {
            int *l_831 = &g_187[1][4][0];
            for (g_68 = (-4); (g_68 >= 2); ++g_68)
            {
                return &g_35;
            }
            (*g_832) = l_831;
            return p_14;
        }
    }
    else
    {
        char *l_843 = &g_139;
        if (p_16)
            goto lbl_833;
        (*g_693) = (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((**l_804), (*p_14))) & (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(p_15.f0, func_29(func_36(&g_113, l_842), l_842, func_29(l_843, g_844, p_15.f0, (**l_804)), p_13))), 7))), p_15.f1));
    }
    (**l_804) = ((**l_804) <= (safe_unary_minus_func_uint8_t_u((((*l_846) = &g_606) == (g_847 = &g_606)))));
    return p_14;
}







static char * func_19(unsigned p_20)
{
    char *l_34 = &g_35;
    char *l_49 = &g_35;
    char **l_48 = &l_49;
    char *l_50[5][3][1] = {{{&g_35},{&g_35},{&g_35}},{{&g_35},{&g_35},{&g_35}},{{&g_35},{&g_35},{&g_35}},{{&g_35},{&g_35},{&g_35}},{{&g_35},{&g_35},{&g_35}}};
    char **l_51 = &l_50[2][0][0];
    const int l_52 = (-1L);
    short *l_53 = &g_54;
    union U1 l_55 = {0};
    union U0 l_56[2][5][10] = {{{{-9L},{0L},{0L},{-9L},{0L},{-9L},{0L},{0L},{-9L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}},{{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}}};
    union U1 *l_799 = (void*)0;
    union U1 **l_798 = &l_799;
    char *l_800 = &g_141[2][1];
    int i, j, k;
    (*g_693) = ((safe_unary_minus_func_uint32_t_u(func_23(((*g_693) = func_29(l_34, func_36(func_39(g_35, p_20, func_43((p_20 | (((*l_48) = l_34) != ((*l_51) = l_50[2][0][0]))), ((*l_53) = (l_52 & (p_20 != l_52))), l_55, l_56[1][2][7])), g_269), g_364.f0, p_20)), g_269, l_34, g_269, l_34))) <= p_20);
    (*l_798) = &l_55;
    return l_800;
}







static unsigned func_23(int p_24, char * p_25, char * p_26, char * p_27, char * p_28)
{
    union U2 *l_718 = &g_491;
    union U2 *l_719 = &g_491;
    union U3 *l_720 = &g_306[6];
    int l_727 = 0xAA63BDABL;
    const char *l_730[7][8][2] = {{{&g_139,&g_141[3][0]},{&g_113,&g_476.f0},{&g_141[2][1],&g_139},{(void*)0,(void*)0},{(void*)0,&g_35},{&g_113,&g_476.f0},{&g_141[2][1],&g_476.f0},{(void*)0,&g_141[2][1]}},{{&g_139,&g_141[2][1]},{(void*)0,&g_476.f0},{&g_141[2][1],&g_476.f0},{&g_113,&g_35},{(void*)0,(void*)0},{(void*)0,&g_139},{&g_476.f0,&g_139},{&g_141[4][1],&g_113}},{{&g_139,&g_141[4][1]},{&g_139,(void*)0},{&g_139,&g_141[4][1]},{&g_139,&g_113},{&g_141[4][1],&g_139},{&g_476.f0,&g_139},{(void*)0,(void*)0},{(void*)0,&g_35}},{{&g_113,&g_476.f0},{&g_141[2][1],&g_476.f0},{(void*)0,&g_141[2][1]},{&g_139,&g_141[2][1]},{(void*)0,&g_476.f0},{&g_141[2][1],&g_476.f0},{&g_113,&g_35},{(void*)0,(void*)0}},{{(void*)0,&g_139},{&g_476.f0,&g_139},{&g_141[4][1],&g_113},{&g_139,&g_141[4][1]},{&g_139,(void*)0},{&g_139,&g_141[4][1]},{&g_139,&g_113},{&g_141[4][1],&g_139}},{{&g_476.f0,&g_139},{(void*)0,(void*)0},{(void*)0,&g_35},{&g_113,&g_476.f0},{&g_141[2][1],&g_476.f0},{(void*)0,&g_141[2][1]},{&g_139,&g_141[2][1]},{(void*)0,&g_476.f0}},{{&g_141[2][1],&g_476.f0},{&g_113,&g_35},{(void*)0,&g_35},{&g_141[3][0],&g_113},{&g_141[2][1],(void*)0},{&g_476.f0,(void*)0},{&g_113,&g_476.f0},{&g_141[4][1],(void*)0}}};
    char *l_731[10][1] = {{(void*)0},{&g_141[1][1]},{(void*)0},{&g_139},{&g_139},{(void*)0},{&g_141[1][1]},{(void*)0},{&g_139},{&g_139}};
    unsigned short l_753 = 0x67FFL;
    char *l_772 = &g_35;
    const union U5 *l_779 = &g_575;
    int i, j, k;
    (*g_693) = ((l_718 = l_718) == l_719);
    for (g_68 = 0; (g_68 <= 2); g_68 += 1)
    {
        int l_734 = 1L;
        const int l_743 = (-5L);
        const char *l_771 = &g_141[5][0];
        char *l_787[1][5];
        char l_788[10][3] = {{0xB2L,0x23L,0xB2L},{(-7L),(-7L),0xD8L},{0L,0x23L,0L},{(-7L),0xD8L,0xD8L},{0xB2L,0x23L,0xB2L},{(-7L),(-7L),0xD8L},{0L,0x23L,0L},{(-7L),0xD8L,0xD8L},{0xB2L,0x23L,0xB2L},{(-7L),(-7L),0xD8L}};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_787[i][j] = &g_476.f0;
        }
        for (g_35 = 2; (g_35 >= 0); g_35 -= 1)
        {
            int **l_724 = (void*)0;
            int i;
            (*g_693) = 0x559EA21EL;
            (*g_693) = (-2L);
            (*g_721) = l_720;
            for (g_290.f0 = 0; (g_290.f0 <= 2); g_290.f0 += 1)
            {
                char *l_732 = &g_476.f0;
                int *l_733 = &g_476.f1;
                int i, j, k;
                (*g_79) = ((safe_lshift_func_uint16_t_u_s((l_724 == (void*)0), (safe_add_func_uint16_t_u_u(g_187[g_290.f0][g_290.f0][g_290.f0], l_727)))) | (safe_sub_func_uint8_t_u_u(func_29(func_36(l_730[5][6][0], l_731[7][0]), l_731[7][0], ((*l_733) = func_29(l_732, p_27, g_476.f0, p_24)), l_734), 255UL)));
            }
        }
        for (g_21 = 0; (g_21 <= 2); g_21 += 1)
        {
            char l_735 = 0x3AL;
            short *l_740 = &g_401;
            unsigned short *l_741 = (void*)0;
            unsigned short *l_742[6][4] = {{&g_290.f2,&g_290.f2,(void*)0,&g_290.f2},{&g_290.f2,&g_491.f2,&g_68,&g_290.f2},{&g_68,&g_290.f2,&g_68,&g_491.f2},{&g_290.f2,&g_290.f2,(void*)0,&g_290.f2},{&g_290.f2,&g_491.f2,&g_68,&g_290.f2},{&g_68,&g_290.f2,&g_68,&g_491.f2}};
            int *l_778 = &g_187[2][1][2];
            char **l_786 = &l_731[2][0];
            int i, j;
            if ((l_735 | (safe_add_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((*l_740) = ((**g_697) = (*g_698))), (l_727 > (l_734 = (g_83.f0 = (0xC4L > p_24)))))) & l_743), (safe_mul_func_int16_t_s_s((l_735 <= (safe_lshift_func_uint8_t_u_s(p_24, 5))), l_743))))))
            {
                const unsigned l_748[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                int i;
                (*g_693) = (l_734 > (l_748[5] == l_748[4]));
            }
            else
            {
                const int **l_750 = (void*)0;
                const int **l_752 = &g_690;
                char *l_756 = &g_141[3][0];
                (*l_752) = &l_743;
                for (l_727 = 5; (l_727 >= 1); l_727 -= 1)
                {
                    int *l_757[1];
                    int l_758[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_757[i] = (void*)0;
                    if ((0xC8L != ((l_753 && (safe_rshift_func_int8_t_s_s(((l_743 || func_29(l_756, &l_735, ((void*)0 != &p_24), (l_758[1] = (2UL > l_734)))) || p_24), l_727))) < l_727)))
                    {
                        unsigned l_775[2][5][7] = {{{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL},{0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL},{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL},{0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL},{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL}},{{0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL},{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL},{0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL},{4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL},{0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL,0x0B7D27AAL}}};
                        int l_776 = (-9L);
                        int *l_777 = &g_187[1][3][2];
                        int i, j, k;
                        (*g_693) = (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_758[1], 6)), 7)), func_29(func_36(l_771, l_772), &g_141[2][1], (l_775[0][3][0] = (((**l_752) > (safe_mul_func_uint16_t_u_u((g_83.f0 = p_24), (**g_697)))) != 5L)), p_24))) != l_776) ^ p_24), (**g_697))) == p_24), p_24)), (*g_693))) > l_753) | p_24);
                        (*l_777) = ((*g_693) = (-6L));
                        l_778 = &l_776;
                    }
                    else
                    {
                        const union U5 **l_780 = &l_779;
                        const union U5 **l_781 = (void*)0;
                        const union U5 *l_783 = &g_312[1][0][0];
                        const union U5 **l_782 = &l_783;
                        (*l_782) = ((*l_780) = l_779);
                    }
                    (*g_784) = &g_385;
                }
                (*g_693) = (**l_752);
            }
            (*g_693) = p_24;
            (*g_693) = (0UL > func_29(((*l_786) = l_731[7][0]), func_36(&g_141[4][0], func_36(func_36(l_771, func_36(l_771, func_36(l_730[1][0][0], l_787[0][1]))), l_787[0][4])), l_788[6][2], l_753));
            (*g_693) = func_29(p_25, &g_113, g_575.f1, ((safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_743, (**g_697))), (**g_697))) || (((*p_28) = 0x7AL) <= (func_29(l_731[2][0], l_772, p_24, l_753) || l_727))));
        }
        (*g_794) = &l_743;
    }
    (*g_796) = l_718;
    return l_727;
}







static int func_29(char * p_30, char * p_31, int p_32, int p_33)
{
    union U1 *l_417 = &g_413[2];
    union U1 **l_416 = &l_417;
    union U1 ***l_418 = &l_416;
    int l_419 = 0xF1B40D79L;
    int l_442[1][10] = {{0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L,0x345FE050L}};
    unsigned short l_504 = 0xD11BL;
    short l_515 = 0x4C3BL;
    const union U4 *l_523 = &g_476;
    union U5 *l_574 = &g_575;
    int *l_608 = &g_187[1][3][2];
    short l_640 = 0xB17BL;
    const unsigned char l_648 = 0x3CL;
    union U2 *l_661[6][6][7] = {{{&g_290,(void*)0,&g_491,&g_290,&g_491,&g_491,&g_491},{&g_290,&g_491,&g_290,&g_491,(void*)0,(void*)0,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_290,&g_290,&g_491},{&g_290,&g_290,&g_290,&g_491,&g_290,&g_290,&g_491},{&g_491,&g_491,&g_290,&g_290,&g_491,&g_491,(void*)0},{&g_491,&g_290,&g_290,&g_290,&g_290,&g_491,&g_491}},{{&g_491,&g_491,&g_491,&g_491,&g_290,&g_491,&g_491},{&g_290,&g_290,&g_290,(void*)0,&g_290,&g_290,&g_491},{(void*)0,&g_491,(void*)0,&g_290,&g_491,&g_491,&g_491},{&g_290,&g_290,&g_491,&g_290,&g_290,&g_290,(void*)0},{&g_491,&g_290,&g_491,&g_290,&g_290,&g_290,&g_491},{&g_290,&g_491,(void*)0,&g_290,&g_290,(void*)0,&g_491}},{{&g_491,&g_290,&g_290,(void*)0,&g_491,(void*)0,&g_290},{&g_290,&g_290,&g_491,&g_491,&g_290,&g_290,&g_290},{(void*)0,&g_290,&g_290,(void*)0,&g_491,&g_290,&g_491},{&g_290,&g_290,&g_290,&g_290,&g_491,&g_491,&g_290},{&g_491,&g_290,&g_290,&g_290,&g_290,&g_290,(void*)0},{&g_491,&g_491,&g_290,&g_491,&g_290,&g_290,&g_290}},{{&g_290,&g_290,&g_290,&g_290,&g_491,&g_491,&g_290},{&g_290,&g_491,&g_290,&g_290,&g_491,&g_290,&g_290},{&g_290,&g_491,&g_290,&g_290,&g_290,&g_491,&g_290},{&g_290,&g_491,&g_491,&g_491,&g_491,&g_290,(void*)0},{&g_491,&g_290,&g_290,&g_491,&g_290,&g_491,&g_491},{(void*)0,&g_290,&g_290,&g_290,&g_491,&g_290,&g_290}},{{&g_290,&g_290,&g_491,&g_290,&g_491,&g_290,&g_290},{(void*)0,&g_491,&g_290,&g_290,&g_290,&g_491,&g_491},{&g_491,&g_491,(void*)0,&g_491,&g_491,&g_290,(void*)0},{&g_491,&g_491,(void*)0,&g_491,&g_491,&g_290,&g_290},{&g_491,&g_290,&g_290,&g_290,&g_290,&g_290,&g_290},{&g_491,&g_491,&g_491,(void*)0,&g_491,&g_290,&g_290}},{{&g_491,&g_491,&g_290,&g_290,&g_491,&g_290,&g_491},{&g_491,&g_491,&g_491,&g_491,&g_290,&g_491,&g_290},{&g_491,&g_491,&g_290,&g_290,(void*)0,&g_290,&g_290},{&g_290,&g_491,&g_491,(void*)0,&g_491,&g_491,&g_290},{&g_290,(void*)0,&g_491,&g_290,&g_491,&g_491,&g_491},{&g_290,&g_491,&g_290,&g_491,(void*)0,(void*)0,&g_491}}};
    union U2 **l_660 = &l_661[2][1][4];
    char l_670 = (-5L);
    const int *l_688[6] = {&l_442[0][4],&l_442[0][4],&l_442[0][4],&l_442[0][4],&l_442[0][4],&l_442[0][4]};
    int i, j, k;
    l_419 = (((*l_418) = l_416) == g_59);
    return (*l_608);
}







static char * func_36(const char * p_37, char * p_38)
{
    int *l_414 = &g_306[6].f4;
    char *l_415 = (void*)0;
    (*l_414) = 0x25DA0D2BL;
    return l_415;
}







static const char * func_39(unsigned char p_40, unsigned p_41, char * p_42)
{
    union U5 *l_311 = &g_312[1][0][0];
    union U5 **l_314 = (void*)0;
    int l_317 = 1L;
    unsigned short l_322 = 0UL;
    int l_341 = 0x5879B4C8L;
    union U6 *l_363 = &g_364;
lbl_329:
    (*g_315) = l_311;
    for (g_77 = 5; (g_77 >= 0); g_77 -= 1)
    {
        int *l_320 = &g_187[2][0][0];
        unsigned char l_328 = 4UL;
        (*l_320) = l_317;
        (*l_320) = 0L;
        for (p_41 = 1; (p_41 <= 5); p_41 += 1)
        {
            int **l_321 = &g_202;
            const char *l_327 = &g_139;
            union U1 *l_337 = (void*)0;
            union U1 **l_336 = &l_337;
            unsigned l_338[2];
            int i;
            for (i = 0; i < 2; i++)
                l_338[i] = 4294967295UL;
            (*l_321) = (void*)0;
            for (g_113 = 0; (g_113 >= 0); g_113 -= 1)
            {
                int i, j;
                if (l_322)
                {
                    union U3 **l_324 = &g_308;
                    (*l_324) = (*g_307);
                    for (l_317 = 4; (l_317 >= 0); l_317 -= 1)
                    {
                        int i, j, k;
                        g_187[(g_113 + 2)][l_317][(g_113 + 3)] = ((safe_rshift_func_uint16_t_u_u(0UL, (((*p_42) > (+5L)) & (*p_42)))) ^ 0x158DL);
                        return l_327;
                    }
                    for (g_35 = 0; (g_35 <= 0); g_35 += 1)
                    {
                        int i, j;
                        (*l_320) = 6L;
                    }
                }
                else
                {
                    int * const l_330 = &g_187[1][3][2];
                    union U5 **l_333 = &l_311;
                    int i;
                    if (l_328)
                        break;
                    (*l_320) = (g_301.f4 >= ((void*)0 == &g_54));
                    for (l_322 = 0; (l_322 <= 5); l_322 += 1)
                    {
                        int **l_332 = &l_320;
                        if (l_328)
                            goto lbl_329;
                        (*l_332) = l_330;
                    }
                    (*l_330) = (((*l_333) = (*g_315)) == g_300);
                }
                for (l_317 = 0; (l_317 <= 0); l_317 += 1)
                {
                    if (l_322)
                        break;
                }
            }
            if ((*g_186))
            {
                l_338[1] = (safe_mul_func_uint8_t_u_u((l_336 != g_59), 0x0CL));
                (*g_339) = (*g_200);
            }
            else
            {
                unsigned char l_340[5][8][1] = {{{0x57L},{0x73L},{0UL},{0x73L},{0x57L},{0UL},{0UL},{0x57L}},{{0x73L},{0UL},{0x73L},{0x57L},{0UL},{0UL},{0x57L},{0x73L}},{{0UL},{0x73L},{0x57L},{0UL},{0UL},{0x57L},{0x73L},{0UL}},{{0x73L},{0x57L},{0UL},{0UL},{0x57L},{0x73L},{0UL},{0x73L}},{{0x57L},{0UL},{0UL},{0x57L},{0x73L},{0UL},{0x73L},{0x57L}}};
                int i, j, k;
                for (l_317 = 2; (l_317 >= 0); l_317 -= 1)
                {
                    return p_42;
                }
                l_317 = l_340[1][0][0];
                for (g_70 = 1; (g_70 <= 5); g_70 += 1)
                {
                    return p_42;
                }
                for (l_317 = 2; (l_317 >= 0); l_317 -= 1)
                {
                    for (g_21 = 0; (g_21 <= 0); g_21 += 1)
                    {
                        int i, j;
                        l_341 = (p_41 < ((!((*p_42) < p_41)) <= p_40));
                        (*l_320) = p_40;
                    }
                }
            }
            for (g_35 = 5; (g_35 >= 0); g_35 -= 1)
            {
                unsigned char *l_342 = &l_328;
                unsigned char *l_343 = &g_298.f1;
                (*l_320) = (((*l_343) = ((*l_342) = ((*p_42) >= 0x9DL))) | p_40);
            }
        }
    }
    for (g_54 = 0; (g_54 == (-8)); g_54 = safe_sub_func_uint8_t_u_u(g_54, 3))
    {
        int *l_346 = &g_187[2][1][2];
        (*l_346) = l_322;
    }
    for (g_21 = (-12); (g_21 >= 53); g_21 = safe_add_func_uint8_t_u_u(g_21, 7))
    {
        int l_350 = (-2L);
        for (g_68 = 0; (g_68 <= 0); g_68 += 1)
        {
            int *l_349[9][2][4] = {{{(void*)0,(void*)0,&g_77,(void*)0},{(void*)0,&g_187[2][0][2],&g_187[2][0][2],(void*)0}},{{&g_77,&g_187[2][0][2],&g_77,&g_77},{&g_187[2][0][2],&g_187[2][0][2],(void*)0,&g_187[2][0][2]}},{{&g_187[2][0][2],&g_77,&g_77,&g_187[2][0][2]},{&g_77,&g_187[2][0][2],&g_77,&g_77}},{{&g_187[2][0][2],&g_187[2][0][2],(void*)0,&g_187[2][0][2]},{&g_187[2][0][2],&g_77,&g_77,&g_187[2][0][2]}},{{&g_77,&g_187[2][0][2],&g_77,&g_77},{&g_187[2][0][2],&g_187[2][0][2],(void*)0,&g_187[2][0][2]}},{{&g_187[2][0][2],&g_77,&g_77,&g_187[2][0][2]},{&g_77,&g_187[2][0][2],&g_77,&g_77}},{{&g_187[2][0][2],&g_187[2][0][2],(void*)0,&g_187[2][0][2]},{&g_187[2][0][2],&g_77,&g_77,&g_187[2][0][2]}},{{&g_77,&g_187[2][0][2],&g_77,&g_77},{&g_187[2][0][2],&g_187[2][0][2],(void*)0,&g_187[2][0][2]}},{{&g_187[2][0][2],&g_77,&g_77,&g_187[2][0][2]},{&g_77,&g_187[2][0][2],&g_77,&g_77}}};
            union U3 *l_355 = &g_306[6];
            short l_393 = 0x1344L;
            union U1 *l_412 = &g_413[2];
            int i, j, k;
            l_317 = (l_341 = p_40);
            if ((l_350 = l_350))
            {
                int l_353[3];
                int **l_357 = &l_349[1][1][2];
                union U6 **l_359 = &g_82[0];
                union U6 ***l_358 = &l_359;
                int i;
                for (i = 0; i < 3; i++)
                    l_353[i] = 4L;
                for (g_35 = 0; (g_35 <= 5); g_35 += 1)
                {
                    union U2 *l_351 = &g_290;
                    union U2 **l_352 = &l_351;
                    int i, j;
                    (*l_352) = l_351;
                    if ((*g_186))
                    {
                        l_341 = p_41;
                        l_353[1] = ((l_350 = (p_40 || l_353[1])) && 0x187A2923L);
                    }
                    else
                    {
                        int **l_354 = &l_349[4][0][3];
                        if (p_41)
                            break;
                        (*l_354) = l_349[1][1][2];
                    }
                    (*g_356) = l_355;
                }
                (*l_357) = &l_317;
                if (p_40)
                    continue;
                l_353[1] = (p_40 & (((((((*l_358) = &g_82[0]) == (void*)0) == l_353[2]) ^ ((*g_269) > (*p_42))) < 0L) != 0x3119L));
            }
            else
            {
                for (l_341 = 0; (l_341 >= 0); l_341 -= 1)
                {
                    return p_42;
                }
            }
            for (g_54 = 0; (g_54 >= 0); g_54 -= 1)
            {
                unsigned char *l_361 = &g_127.f1;
                unsigned char **l_360 = &l_361;
                union U6 *l_362[10][6] = {{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,(void*)0},{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,(void*)0,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,&g_83,&g_83,&g_83},{&g_83,&g_83,&g_83,(void*)0,(void*)0,&g_83},{&g_83,&g_83,(void*)0,&g_83,&g_83,&g_83}};
                const int l_371[6][9][3] = {{{0xCABB8035L,0x554B7366L,(-1L)},{(-1L),0L,0x3BEA31BEL},{0x3BEA31BEL,0x6021AA02L,0L},{0xE2AE666AL,1L,0L},{0x70D5558EL,1L,0L},{0L,0x5B141FB6L,0L},{0x188C964FL,1L,0x3BEA31BEL},{4L,8L,(-1L)},{(-5L),(-1L),0x3AA23D61L}},{{6L,0x70D5558EL,3L},{(-5L),0x7271CB94L,(-5L)},{4L,1L,0xE16C76ABL},{0x188C964FL,0xE2AE666AL,1L},{0L,0x3AA23D61L,0x7271CB94L},{0x70D5558EL,0x3AA23D61L,1L},{0xE2AE666AL,0xE2AE666AL,(-5L)},{0x3BEA31BEL,1L,0x70D5558EL},{(-1L),0x7271CB94L,0x6A5FFA81L}},{{0xCABB8035L,0x70D5558EL,0x6021AA02L},{0x554B7366L,(-1L),0x6A5FFA81L},{0x3AA23D61L,8L,0x70D5558EL},{1L,1L,(-5L)},{0L,(-1L),0L},{0x188C964FL,0L,4L},{0x188C964FL,3L,3L},{1L,1L,1L},{3L,1L,0L}},{{0x6021AA02L,6L,0L},{6L,1L,0x6021AA02L},{0x218FCEB1L,6L,0x554B7366L},{0x6A5FFA81L,1L,0xE2AE666AL},{0xE2AE666AL,1L,1L},{0xCABB8035L,3L,(-5L)},{0xE16C76ABL,0L,(-5L)},{1L,(-1L),1L},{0x70D5558EL,0x5B141FB6L,0xE2AE666AL}},{{0x3BEA31BEL,0x3AA23D61L,0x554B7366L},{0x7271CB94L,0x6A5FFA81L,0x6021AA02L},{0L,0xE16C76ABL,0L},{0x7271CB94L,4L,0L},{0x3BEA31BEL,(-5L),1L},{0x70D5558EL,0xCABB8035L,3L},{1L,0x6021AA02L,4L},{0xE16C76ABL,0x6021AA02L,0L},{0xCABB8035L,0xCABB8035L,0x7271CB94L}},{{0xE2AE666AL,(-5L),0xE16C76ABL},{0x6A5FFA81L,4L,0x188C964FL},{0x218FCEB1L,0xE16C76ABL,1L},{6L,0x6A5FFA81L,0x188C964FL},{0x6021AA02L,0x3AA23D61L,0xE16C76ABL},{3L,0x5B141FB6L,0x7271CB94L},{1L,(-1L),0L},{0x188C964FL,0L,4L},{0x188C964FL,3L,3L}}};
                int l_387 = 0x9127CFA7L;
                int l_409 = (-3L);
                int i, j, k;
                l_360 = l_360;
                l_363 = l_362[4][2];
                for (g_290.f0 = 0; (g_290.f0 >= 0); g_290.f0 -= 1)
                {
                    unsigned short *l_374 = (void*)0;
                    unsigned short *l_375[6];
                    char *l_382 = &g_113;
                    int l_408 = (-1L);
                    union U1 *l_411[1][7][4] = {{{(void*)0,(void*)0,&g_58,(void*)0},{(void*)0,&g_58,&g_58,(void*)0},{&g_58,(void*)0,&g_58,&g_58},{(void*)0,(void*)0,&g_58,(void*)0},{(void*)0,&g_58,&g_58,(void*)0},{&g_58,(void*)0,&g_58,&g_58},{(void*)0,(void*)0,&g_58,(void*)0}}};
                    union U1 **l_410[1][4][5] = {{{(void*)0,&l_411[0][6][1],&l_411[0][6][1],(void*)0,(void*)0},{&l_411[0][0][2],&l_411[0][4][2],&l_411[0][0][2],&l_411[0][4][2],&l_411[0][0][2]},{(void*)0,(void*)0,&l_411[0][6][1],&l_411[0][6][1],(void*)0},{&l_411[0][6][1],&l_411[0][4][2],&l_411[0][6][1],&l_411[0][4][2],&l_411[0][6][1]}}};
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_375[i] = &g_83.f0;
                    if (((-5L) > (g_187[g_290.f0][(g_54 + 2)][(g_68 + 3)] & (~(g_187[(g_54 + 2)][g_290.f0][(g_54 + 5)] < (((*p_42) = (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_371[3][1][2], (safe_add_func_uint16_t_u_u((g_83.f0 = 0x09BAL), g_127.f1)))), (l_341 = 0xB56CBC40L))), (safe_lshift_func_uint8_t_u_s(p_40, 3))))) == ((*l_382) = (safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(g_187[0][3][5], (-3L))) && (-4L)), 0xF4L)))))))))
                    {
                        int l_383[9][4] = {{2L,9L,0xD1EF398BL,0xA7030AC7L},{9L,0x2E796462L,1L,2L},{9L,0xB3422183L,0xB3422183L,9L},{9L,0xA7030AC7L,1L,0x53E3091CL},{9L,9L,0xD1EF398BL,0xE016AD1CL},{2L,2L,2L,0xE016AD1CL},{0xD1EF398BL,9L,9L,0x53E3091CL},{1L,0xA7030AC7L,9L,9L},{0xB3422183L,0xB3422183L,9L,2L}};
                        volatile unsigned short ** volatile *l_386 = &g_384[1];
                        int i, j;
                        l_383[5][0] = p_41;
                        (*l_386) = g_384[1];
                    }
                    else
                    {
                        unsigned l_392 = 0x4B69C448L;
                        short *l_400 = &g_401;
                        unsigned char *l_402 = &g_312[1][0][0].f1;
                        int l_403 = 0x58088B17L;
                        l_387 = p_41;
                        l_403 = (l_341 = (safe_sub_func_int8_t_s_s((((*g_269) = (safe_add_func_int32_t_s_s((l_392 = p_41), l_393))) == ((*l_402) = ((p_40 = ((*l_361) = (((*l_400) = (l_350 && (0xA6C35FD7L >= (safe_add_func_uint16_t_u_u(((p_40 > (l_317 = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_187[(g_54 + 1)][(g_290.f0 + 1)][(g_290.f0 + 2)], (p_40 == (p_41 || (p_40 || l_350))))), 65531UL)))) == p_41), p_40))))) ^ p_40))) > l_322))), l_350)));
                        l_350 = p_41;
                        l_409 = ((p_40 || (safe_rshift_func_uint8_t_u_s(g_187[(g_54 + 2)][g_290.f0][(g_54 + 5)], 5))) & (l_408 = (+((l_387 = (safe_sub_func_uint16_t_u_u(0UL, p_41))) < (l_350 = p_40)))));
                    }
                    l_412 = (void*)0;
                    if (p_40)
                        continue;
                }
            }
        }
    }
    return p_42;
}







static char * func_43(char p_44, short p_45, union U1 p_46, union U0 p_47)
{
    union U1 *l_57 = &g_58;
    union U1 **l_60 = &l_57;
    unsigned l_61[7][10] = {{4294967293UL,4294967293UL,1UL,4294967295UL,1UL,4294967295UL,4294967293UL,1UL,4294967294UL,1UL},{4294967293UL,0x94628AEAL,4294967295UL,0xD2AD05B3L,4294967295UL,0x8918CB0BL,0x5CCEB8A0L,4294967295UL,4294967295UL,0x94628AEAL},{0x8918CB0BL,0x5CCEB8A0L,4294967295UL,4294967295UL,0x94628AEAL,0x8918CB0BL,0x8918CB0BL,0x94628AEAL,4294967295UL,4294967295UL},{0x5CCEB8A0L,0x5CCEB8A0L,4294967293UL,0xD2AD05B3L,0x94628AEAL,0xA4198FE8L,0x5CCEB8A0L,0x94628AEAL,0x56A6D983L,0x94628AEAL},{0x5CCEB8A0L,0x8918CB0BL,4294967295UL,0xD2AD05B3L,4294967295UL,0x8918CB0BL,0x5CCEB8A0L,4294967295UL,4294967295UL,0x94628AEAL},{0x8918CB0BL,0x5CCEB8A0L,4294967295UL,4294967295UL,0x94628AEAL,0x8918CB0BL,0x8918CB0BL,0x94628AEAL,4294967295UL,4294967295UL},{0x5CCEB8A0L,0x5CCEB8A0L,4294967293UL,0xD2AD05B3L,0x94628AEAL,0xA4198FE8L,0x5CCEB8A0L,0x94628AEAL,0x56A6D983L,0x94628AEAL}};
    unsigned *l_74 = &g_70;
    int *l_102 = &g_77;
    short l_156 = 6L;
    int l_165 = (-1L);
    union U6 * const l_197 = (void*)0;
    union U6 *l_205 = &g_83;
    char *l_229 = &g_35;
    unsigned l_252[4][10][6] = {{{4294967295UL,4294967293UL,4294967295UL,0UL,0x897EB013L,9UL},{0x29BCD8D3L,0xE7B68137L,0xB6349930L,4294967295UL,8UL,0x83293638L},{0x19DA46A6L,1UL,0x05F164A4L,4294967295UL,0UL,0UL},{0x29BCD8D3L,4294967290UL,4294967288UL,0UL,0x153B5C74L,0x4548396DL},{4294967295UL,0xF24ECAD3L,0x4CF5E685L,0xDA9BA8A5L,0x29BCD8D3L,0UL},{2UL,0xACD65F59L,0UL,0x29BCD8D3L,0x8EACD4FDL,1UL},{0x09064914L,0UL,0x897EB013L,0x29295381L,0xEC26B8BEL,0UL},{0xF54E4A91L,0x8EACD4FDL,1UL,0xCDBD8BA5L,0xB6349930L,0x19DA46A6L},{0x6FBECB08L,0x633E49B1L,0xD48B04B7L,0x4CF5E685L,0x1A6DB7C8L,4294967288UL},{0UL,0xE7B68137L,0x40AD0065L,0UL,9UL,0x29BCD8D3L}},{{4294967295UL,0xCDBD8BA5L,0x4548396DL,7UL,0x9F018CA5L,0xEC26B8BEL},{4294967295UL,4294967295UL,0x81FC20E6L,9UL,7UL,0xCB3B04CBL},{0x153B5C74L,1UL,0x4FF15DA5L,0x897EB013L,0x40AD0065L,0x40AD0065L},{0xEC26B8BEL,0x19DA46A6L,0x19DA46A6L,0xEC26B8BEL,0x01C6AC34L,0xF54E4A91L},{4294967293UL,0x5BEBA510L,0UL,4294967295UL,0UL,4294967291UL},{1UL,0x6429664DL,0x153B5C74L,0xACD65F59L,0UL,0x3EA817EEL},{0xE3BD15F0L,0x5BEBA510L,0UL,0x83293638L,0x01C6AC34L,0xB6349930L},{0xD109870DL,0x19DA46A6L,0x05F164A4L,8UL,0x40AD0065L,0x882143E8L},{0xCDBD8BA5L,1UL,0x4CF5E685L,0xABCB274CL,7UL,0UL},{0x05F164A4L,4294967295UL,0x1A6DB7C8L,0x8EACD4FDL,0x9F018CA5L,0UL}},{{0xCB3B04CBL,0xCDBD8BA5L,0x5BEBA510L,0xD48B04B7L,9UL,0x4FF15DA5L},{0UL,0xE7B68137L,4294967293UL,4294967295UL,0x1A6DB7C8L,0xD48B04B7L},{1UL,0xC46BD838L,0x1B2D74E9L,0xD48B04B7L,0x9B6FBBB4L,0x882143E8L},{0x1B2D74E9L,4294967293UL,0x6FBECB08L,4294967290UL,0x633E49B1L,0x6429664DL},{1UL,4294967291UL,0x9B6FBBB4L,0UL,7UL,4294967293UL},{1UL,9UL,0x897EB013L,0UL,4294967295UL,4294967293UL},{0xABCB274CL,4294967288UL,0xD48B04B7L,4294967288UL,0xABCB274CL,0x40AD0065L},{0x6429664DL,4294967287UL,0x1A6DB7C8L,0xCB3B04CBL,0UL,4294967295UL},{0UL,4294967290UL,1UL,4294967287UL,0x5BEBA510L,4294967295UL},{0xCDBD8BA5L,0x42E51A4AL,0x1A6DB7C8L,0x552900B3L,4294967292UL,0x40AD0065L}},{{0x5BEBA510L,0x81FC20E6L,0xD48B04B7L,0x1A6DB7C8L,4294967295UL,4294967293UL},{0x05F164A4L,0x09064914L,0x897EB013L,0xBED7B09FL,4294967290UL,4294967293UL},{4294967289UL,0x1B2D74E9L,0x9B6FBBB4L,0x01C6AC34L,0UL,0x6429664DL},{0x09064914L,1UL,0x6FBECB08L,0xF24ECAD3L,4294967291UL,0x882143E8L},{0x19DA46A6L,0UL,0x1B2D74E9L,0xCDBD8BA5L,0x552900B3L,9UL},{0UL,9UL,4294967287UL,4294967290UL,0UL,0xE7B68137L},{0x01C6AC34L,0x83293638L,0UL,0x5BEBA510L,0xE3BD15F0L,2UL},{0x83293638L,1UL,0xACD65F59L,4294967293UL,1UL,4294967295UL},{0x552900B3L,0x05F164A4L,0xF24ECAD3L,4294967287UL,0x01C6AC34L,2UL},{0x4FF15DA5L,0x897EB013L,0x40AD0065L,0x40AD0065L,0x897EB013L,0x4FF15DA5L}}};
    union U0 *l_256[9];
    union U3 *l_305[10][4][6] = {{{&g_306[3],(void*)0,&g_306[6],&g_306[6],&g_306[6],&g_306[3]},{&g_306[2],&g_306[6],&g_306[6],&g_306[1],&g_306[6],&g_306[6]},{&g_306[6],&g_306[1],&g_306[6],&g_306[7],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_306[3],&g_306[5]}},{{&g_306[6],&g_306[4],&g_306[6],&g_306[5],&g_306[2],&g_306[3]},{&g_306[2],&g_306[6],&g_306[3],&g_306[3],&g_306[2],&g_306[6]},{&g_306[3],&g_306[4],&g_306[6],&g_306[5],&g_306[3],&g_306[6]},{&g_306[6],(void*)0,&g_306[6],&g_306[4],(void*)0,&g_306[6]}},{{(void*)0,&g_306[1],&g_306[6],&g_306[6],&g_306[6],(void*)0},{(void*)0,&g_306[6],&g_306[3],&g_306[6],&g_306[6],&g_306[6]},{(void*)0,(void*)0,&g_306[6],&g_306[6],&g_306[5],&g_306[1]},{(void*)0,&g_306[6],(void*)0,&g_306[4],&g_306[4],(void*)0}},{{&g_306[6],&g_306[6],&g_306[6],&g_306[5],&g_306[5],&g_306[4]},{&g_306[3],&g_306[6],&g_306[6],&g_306[3],&g_306[6],(void*)0},{(void*)0,&g_306[2],&g_306[5],(void*)0,&g_306[6],&g_306[1]},{&g_306[3],(void*)0,(void*)0,&g_306[5],(void*)0,&g_306[6]}},{{&g_306[5],(void*)0,&g_306[6],&g_306[6],&g_306[6],(void*)0},{&g_306[3],&g_306[5],&g_306[3],(void*)0,(void*)0,&g_306[6]},{(void*)0,&g_306[6],&g_306[6],(void*)0,(void*)0,(void*)0},{&g_306[2],&g_306[5],&g_306[6],&g_306[4],&g_306[6],&g_306[3]}},{{&g_306[6],(void*)0,&g_306[5],&g_306[5],(void*)0,&g_306[6]},{&g_306[4],(void*)0,&g_306[6],(void*)0,&g_306[6],&g_306[7]},{(void*)0,&g_306[2],&g_306[6],&g_306[3],&g_306[3],&g_306[2]},{(void*)0,&g_306[7],&g_306[3],(void*)0,&g_306[6],(void*)0}},{{&g_306[4],&g_306[6],&g_306[6],&g_306[5],&g_306[1],(void*)0},{&g_306[6],&g_306[3],(void*)0,&g_306[4],&g_306[6],&g_306[5]},{&g_306[2],(void*)0,&g_306[5],(void*)0,&g_306[3],&g_306[6]},{(void*)0,&g_306[6],&g_306[5],(void*)0,&g_306[6],&g_306[5]}},{{&g_306[3],(void*)0,(void*)0,&g_306[6],(void*)0,(void*)0},{&g_306[5],&g_306[6],&g_306[6],&g_306[5],&g_306[6],&g_306[6]},{&g_306[2],(void*)0,&g_306[6],&g_306[6],&g_306[4],(void*)0},{&g_306[4],&g_306[6],(void*)0,&g_306[3],&g_306[4],&g_306[6]}},{{(void*)0,(void*)0,&g_306[3],&g_306[5],&g_306[3],&g_306[3]},{&g_306[3],&g_306[7],(void*)0,(void*)0,(void*)0,&g_306[6]},{&g_306[1],(void*)0,&g_306[3],&g_306[6],&g_306[3],&g_306[5]},{(void*)0,&g_306[5],(void*)0,&g_306[3],&g_306[6],&g_306[5]}},{{(void*)0,&g_306[5],&g_306[6],&g_306[6],&g_306[6],(void*)0},{&g_306[1],&g_306[6],&g_306[7],(void*)0,(void*)0,&g_306[7]},{&g_306[3],&g_306[3],&g_306[6],&g_306[5],&g_306[6],(void*)0},{(void*)0,&g_306[6],&g_306[6],&g_306[3],&g_306[6],&g_306[6]}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_256[i] = (void*)0;
lbl_106:
    (*l_60) = l_57;
    for (p_44 = 0; (p_44 <= 6); p_44 += 1)
    {
        unsigned short l_66 = 0x60D9L;
        unsigned *l_73 = &g_70;
        int *l_100 = &g_77;
        unsigned l_107 = 1UL;
        int l_114 = 1L;
        union U0 *l_161 = &g_127;
        union U6 *l_167 = &g_83;
        union U1 *l_196[7][1][1];
        unsigned char l_214 = 0x20L;
        const union U0 *l_246 = &g_127;
        const union U0 * const *l_245 = &l_246;
        const union U0 * const **l_244 = &l_245;
        char l_249 = 0L;
        int *l_253[1][9] = {{&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4],&g_187[2][1][4]}};
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_196[i][j][k] = (void*)0;
            }
        }
        for (p_45 = 4; (p_45 >= 0); p_45 -= 1)
        {
            unsigned *l_67 = (void*)0;
            unsigned **l_71 = &g_69[2][3];
            unsigned **l_72[4][6] = {{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{(void*)0,&l_67,&l_67,(void*)0,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67},{&l_67,&l_67,&l_67,&l_67,&l_67,&l_67}};
            short *l_75 = &g_54;
            int *l_76 = &g_77;
            int i, j;
            (*l_76) = ((safe_lshift_func_uint16_t_u_u(l_61[p_44][(p_44 + 3)], ((safe_rshift_func_uint16_t_u_u(((l_66 = p_45) == ((g_21 ^ ((g_68 = p_45) != (l_61[2][5] > ((*l_75) = ((((*l_71) = g_69[2][3]) != &g_70) > ((p_44 > (((l_73 = (void*)0) != l_74) <= l_61[p_44][(p_44 + 3)])) > 0x7C7BL)))))) || g_68)), 7)) ^ p_47.f0))) <= l_61[p_44][(p_44 + 3)]);
        }
        for (g_68 = 1; (g_68 <= 6); g_68 += 1)
        {
            union U6 * const l_80 = (void*)0;
            unsigned char l_94 = 0x8DL;
            const int l_97 = 0x9F33C750L;
            for (g_21 = 0; (g_21 <= 6); g_21 += 1)
            {
                int *l_78 = (void*)0;
                unsigned char *l_95 = (void*)0;
                unsigned char *l_96 = &l_94;
                short *l_98 = &g_54;
                int *l_99 = &g_77;
                int i, j;
                (*g_79) = l_61[g_21][(g_68 + 3)];
                (*g_81) = l_80;
                (*l_99) = (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u((((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((*l_96) = (l_94 != g_70)), l_97)), (*g_79))) > p_44) <= p_47.f0), 0xC032BE65L)) || ((*l_98) = (p_47.f1 == (-8L)))), p_47.f0)), 4294967288UL));
                for (g_54 = 9; (g_54 >= 2); g_54 -= 1)
                {
                    int i, j;
                    l_100 = g_69[g_54][(g_21 + 2)];
                    if ((*g_79))
                    {
                        int l_101 = 0x11143DC2L;
                        (*l_99) = p_45;
                        if (l_101)
                            continue;
                    }
                    else
                    {
                        return &g_35;
                    }
                }
            }
        }
        l_102 = l_73;
        for (l_66 = 0; (l_66 <= 6); l_66 += 1)
        {
            char *l_103 = &g_35;
            return l_103;
        }
        for (g_68 = 0; (g_68 <= 6); g_68 += 1)
        {
            short l_110 = (-5L);
            int l_122 = 0x4CEA6EDCL;
            union U1 *l_123 = &g_58;
            int l_217 = 0xDCECE18AL;
            union U0 **l_243[6];
            union U0 ***l_242[9][8] = {{&l_243[3],(void*)0,&l_243[3],&l_243[1],&l_243[3],&l_243[3],&l_243[1],&l_243[3]},{&l_243[0],&l_243[0],&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[1]},{&l_243[3],&l_243[1],&l_243[3],&l_243[3],&l_243[1],(void*)0,(void*)0,&l_243[1]},{&l_243[1],(void*)0,(void*)0,&l_243[1],&l_243[3],&l_243[3],&l_243[1],&l_243[3]},{&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[1],&l_243[0],&l_243[0]},{&l_243[3],&l_243[1],&l_243[3],&l_243[3],&l_243[1],&l_243[3],(void*)0,&l_243[1]},{&l_243[0],(void*)0,&l_243[3],&l_243[0],&l_243[3],(void*)0,&l_243[0],&l_243[3]},{&l_243[1],&l_243[1],&l_243[1],&l_243[0],&l_243[0],&l_243[1],&l_243[1],&l_243[1]},{&l_243[3],&l_243[0],(void*)0,&l_243[3],&l_243[0],&l_243[3],(void*)0,&l_243[0]}};
            int **l_264 = (void*)0;
            unsigned l_296 = 0x26A9A255L;
            int i, j;
            for (i = 0; i < 6; i++)
                l_243[i] = (void*)0;
            if ((safe_sub_func_int32_t_s_s(1L, (*g_79))))
            {
                char *l_111 = (void*)0;
                char *l_112 = &g_113;
                int *l_121 = &g_77;
                union U0 **l_162 = &l_161;
                unsigned short *l_164[6][10][4] = {{{&l_66,(void*)0,&g_68,&g_83.f0},{&g_68,&g_83.f0,&l_66,&g_83.f0},{&l_66,&g_68,&g_83.f0,(void*)0},{&l_66,&g_83.f0,&l_66,&g_68},{&l_66,&g_83.f0,&g_68,&g_68},{&g_83.f0,&g_68,&g_68,&l_66},{&l_66,(void*)0,&l_66,&g_68},{&g_68,(void*)0,(void*)0,&g_68},{(void*)0,&l_66,&g_83.f0,&l_66},{(void*)0,&l_66,&l_66,&g_83.f0}},{{&g_83.f0,(void*)0,(void*)0,&g_68},{&g_83.f0,&l_66,&g_68,&l_66},{(void*)0,(void*)0,&g_68,&g_83.f0},{&g_83.f0,&l_66,&g_68,&g_83.f0},{&g_83.f0,&g_83.f0,&g_83.f0,&l_66},{&l_66,&g_68,&g_68,&l_66},{&g_68,&l_66,&g_68,&g_68},{&l_66,(void*)0,&g_83.f0,(void*)0},{&l_66,&l_66,&l_66,(void*)0},{&l_66,(void*)0,&g_83.f0,&g_68}},{{&g_68,&l_66,&g_68,&l_66},{&g_83.f0,&g_68,&g_68,&l_66},{&g_83.f0,&g_83.f0,&l_66,&g_83.f0},{(void*)0,&l_66,&g_68,&g_83.f0},{&g_68,(void*)0,&l_66,&l_66},{&g_68,&l_66,&g_68,&g_68},{&l_66,(void*)0,&g_68,&g_83.f0},{&g_83.f0,&l_66,&g_83.f0,&l_66},{&g_83.f0,&l_66,&g_68,&g_68},{&g_83.f0,(void*)0,&g_68,&g_68}},{{&l_66,&l_66,&g_68,&l_66},{&g_83.f0,&g_83.f0,&g_83.f0,&g_68},{(void*)0,(void*)0,&l_66,&g_68},{(void*)0,&l_66,&g_68,&g_83.f0},{&g_68,(void*)0,&l_66,(void*)0},{&g_68,(void*)0,&l_66,(void*)0},{&g_83.f0,&g_68,(void*)0,&g_68},{&g_68,&l_66,&l_66,&g_68},{(void*)0,&l_66,&l_66,(void*)0},{(void*)0,&g_83.f0,&l_66,(void*)0}},{{&g_68,(void*)0,(void*)0,&g_68},{&g_83.f0,&g_68,&l_66,&g_68},{&g_68,&l_66,&l_66,&g_68},{&g_68,&l_66,&g_68,&g_83.f0},{(void*)0,&g_68,&l_66,&l_66},{(void*)0,&g_68,&g_83.f0,&g_83.f0},{&g_83.f0,&l_66,&g_68,&g_83.f0},{&l_66,&g_68,&l_66,&g_68},{(void*)0,&l_66,&g_83.f0,&g_68},{&g_83.f0,&g_68,&g_68,&g_68}},{{&l_66,&g_68,&g_68,&g_68},{(void*)0,&g_83.f0,(void*)0,&g_68},{&g_68,&g_68,&g_68,&g_68},{&g_68,&g_83.f0,&g_68,&g_83.f0},{&g_83.f0,&g_83.f0,&g_68,(void*)0},{(void*)0,&g_68,&g_68,&g_68},{(void*)0,(void*)0,&l_66,&g_68},{&g_68,&g_68,&l_66,&g_83.f0},{&g_68,(void*)0,(void*)0,&l_66},{(void*)0,(void*)0,&l_66,&g_83.f0}}};
                int i, j, k;
                if (l_66)
                    goto lbl_106;
                if ((l_122 = ((*l_121) = (g_35 ^ (((~l_107) == (safe_add_func_uint16_t_u_u(((l_110 >= (((*l_60) != (*l_60)) > (l_114 = ((*l_112) = (-4L))))) != 0xF7E61D9EL), g_54))) < ((*l_74) = ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(p_47.f1, l_61[2][3])), 1)), 0x21B67715L)) || (-9L))))))))
                {
                    union U0 * const l_124 = (void*)0;
                    const int l_135[4] = {0x59FCE93EL,0x59FCE93EL,0x59FCE93EL,0x59FCE93EL};
                    int l_155[7][1] = {{0x312A2FD1L},{1L},{1L},{0x312A2FD1L},{1L},{1L},{0x312A2FD1L}};
                    int i, j;
                    if ((((*l_60) = &g_58) != l_123))
                    {
                        union U0 *l_126 = &g_127;
                        union U0 **l_125 = &l_126;
                        int l_134 = 0x7AA0E731L;
                        char *l_138 = &g_139;
                        char *l_140 = &g_141[2][1];
                        (*l_125) = l_124;
                        (*l_121) = l_122;
                        (*l_121) = (g_113 ^ ((((((*l_121) ^ (safe_lshift_func_int16_t_s_s(p_44, g_70))) != (safe_mul_func_int16_t_s_s(p_44, (-6L)))) && (safe_mul_func_int8_t_s_s(l_134, l_110))) > p_45) >= l_134));
                        l_134 = ((l_135[3] < ((*l_140) = ((*l_138) = ((*l_112) = ((safe_mul_func_uint8_t_u_u(p_44, (p_44 | g_54))) & 0xC438L))))) > p_47.f0);
                    }
                    else
                    {
                        (*g_79) = (((*l_74) = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(g_141[6][2], (g_113 ^ (safe_rshift_func_int8_t_s_s((((+((safe_sub_func_int16_t_s_s((g_141[2][1] & (safe_sub_func_uint32_t_u_u(4294967295UL, (*g_79)))), (((7UL >= l_135[3]) ^ (l_110 > (l_155[3][0] = (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(((-1L) && (*l_121)))), 8))))) < p_44))) || p_45)) < p_47.f1) ^ p_44), p_47.f0))))), 0x4C1BL))) || p_44);
                        if (p_47.f0)
                            continue;
                    }
                }
                else
                {
                    l_156 = (g_77 && p_47.f1);
                }
                if ((((*g_79) != (safe_rshift_func_int8_t_s_u((p_47.f0 || (p_45 && ((safe_mod_func_int8_t_s_s((((*l_162) = l_161) != (g_163[0] = &p_47)), (+g_139))) && ((l_165 = g_83.f0) > 1UL)))), 0))) < g_77))
                {
                    for (l_156 = 0; (l_156 <= 0); l_156 += 1)
                    {
                        return &g_141[0][1];
                    }
                    if (p_47.f1)
                        break;
                    if ((*g_79))
                    {
                        (*l_121) = 0L;
                        (*l_60) = &p_46;
                    }
                    else
                    {
                        (*l_121) = p_44;
                    }
                    (*l_121) = p_44;
                }
                else
                {
                    int **l_166 = &l_102;
                    (*l_166) = &l_122;
                }
            }
            else
            {
                (*g_170) = l_167;
            }
            for (l_122 = 0; (l_122 <= 6); l_122 += 1)
            {
                union U6 * const *l_182[1];
                char *l_183 = &g_113;
                int i;
                for (i = 0; i < 1; i++)
                    l_182[i] = &g_82[0];
                for (g_54 = 0; (g_54 <= 6); g_54 += 1)
                {
                    return &g_139;
                }
                for (l_66 = 1; (l_66 <= 6); l_66 += 1)
                {
                    int *l_173 = (void*)0;
                    union U0 * const *l_192[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_192[i] = &l_161;
                    (*g_79) = ((safe_add_func_uint8_t_u_u(p_47.f0, l_110)) | (4294967294UL == ((*l_74) = p_47.f1)));
                    for (l_107 = 0; (l_107 <= 2); l_107 += 1)
                    {
                        int *l_184 = &l_114;
                        int i, j;
                        (*g_186) = ((*g_79) = ((*l_184) = ((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((g_141[l_66][l_107] > p_45) | (safe_rshift_func_int8_t_s_u(g_141[l_66][l_107], g_21))) >= g_113), (+(safe_sub_func_uint16_t_u_u((l_182[0] == (void*)0), (&g_113 != l_183)))))) >= 65527UL), g_83.f0)) || (*g_79))));
                    }
                    if ((safe_lshift_func_int8_t_s_u(((*l_183) = 0x5FL), (((void*)0 != g_190) & (0x32A7L >= ((((*l_74) = (&l_110 != &g_54)) >= p_44) <= ((safe_unary_minus_func_uint32_t_u((p_47.f1 && l_110))) > g_127.f1)))))))
                    {
                        union U1 *l_195 = &g_58;
                        (*g_193) = l_192[4];
                        l_196[1][0][0] = l_195;
                    }
                    else
                    {
                        union U6 **l_199[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_199[i] = (void*)0;
                        (*g_200) = l_197;
                        (*g_201) = &l_165;
                    }
                }
                if (p_47.f0)
                    break;
            }
        }
    }
    (*g_307) = (l_305[7][0][2] = l_305[7][0][2]);
    for (g_70 = (-27); (g_70 < 45); g_70++)
    {
        return l_229;
    }
    return l_229;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_141[i][j], "g_141[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_187[i][j][k], "g_187[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_298.f1, "g_298.f1", print_hash_value);
    transparent_crc(g_301.f0, "g_301.f0", print_hash_value);
    transparent_crc(g_301.f1, "g_301.f1", print_hash_value);
    transparent_crc(g_301.f2, "g_301.f2", print_hash_value);
    transparent_crc(g_301.f3, "g_301.f3", print_hash_value);
    transparent_crc(g_301.f4, "g_301.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_306[i].f0, "g_306[i].f0", print_hash_value);
        transparent_crc(g_306[i].f1, "g_306[i].f1", print_hash_value);
        transparent_crc(g_306[i].f3, "g_306[i].f3", print_hash_value);
        transparent_crc(g_306[i].f4, "g_306[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_312[i][j][k].f1, "g_312[i][j][k].f1", print_hash_value);
                transparent_crc(g_312[i][j][k].f2, "g_312[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    transparent_crc(g_491.f1, "g_491.f1", print_hash_value);
    transparent_crc(g_491.f2, "g_491.f2", print_hash_value);
    transparent_crc(g_491.f3, "g_491.f3", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_575.f1, "g_575.f1", print_hash_value);
    transparent_crc(g_575.f2, "g_575.f2", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_849, "g_849", print_hash_value);
    transparent_crc(g_876, "g_876", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1146.f0, "g_1146.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1147[i].f0, "g_1147[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1190.f0, "g_1190.f0", print_hash_value);
    transparent_crc(g_1190.f1, "g_1190.f1", print_hash_value);
    transparent_crc(g_1190.f3, "g_1190.f3", print_hash_value);
    transparent_crc(g_1190.f4, "g_1190.f4", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
