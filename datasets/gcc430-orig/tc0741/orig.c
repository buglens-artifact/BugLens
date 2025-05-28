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
   const int f0;
   signed f1 : 6;
   const unsigned f2 : 4;
   const signed f3 : 24;
   signed f4 : 31;
   signed f5 : 17;
   unsigned f6 : 16;
   signed f7 : 10;
   short f8;
   signed f9 : 3;
};


static int * const g_5[1] = {(void*)0};
static int g_7 = 0x9E53E58BL;
static char g_41[7][2] = {{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L},{0x44L,0x44L}};
static int *g_77 = &g_7;
static int **g_76 = &g_77;
static struct S0 g_79 = {0x2A3E9F7AL,-6,2,3438,-28878,36,155,23,0xB02DL,1};
static struct S0 *g_78[4][7][5] = {{{&g_79,&g_79,&g_79,(void*)0,&g_79},{(void*)0,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,(void*)0,&g_79},{&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,(void*)0,&g_79,&g_79},{(void*)0,(void*)0,&g_79,&g_79,(void*)0}},{{&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79}},{{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,(void*)0,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79,&g_79,(void*)0},{&g_79,(void*)0,&g_79,&g_79,(void*)0}}};
static struct S0 **g_93[10][6][3] = {{{&g_78[0][2][2],&g_78[2][5][4],&g_78[2][5][4]},{&g_78[2][5][4],&g_78[1][4][2],&g_78[2][1][4]},{&g_78[0][2][2],&g_78[2][5][4],&g_78[1][4][4]},{&g_78[0][5][1],(void*)0,(void*)0},{&g_78[2][5][4],&g_78[2][5][4],(void*)0},{&g_78[2][5][4],&g_78[1][5][3],&g_78[1][4][4]}},{{&g_78[2][5][4],&g_78[2][5][4],&g_78[2][1][4]},{&g_78[2][5][4],&g_78[3][6][1],&g_78[2][5][4]},{&g_78[0][4][0],&g_78[2][5][4],&g_78[1][4][2]},{&g_78[1][1][3],&g_78[1][5][3],(void*)0},{(void*)0,&g_78[2][5][4],&g_78[2][5][4]},{(void*)0,(void*)0,&g_78[3][1][2]}},{{&g_78[1][1][3],&g_78[2][5][4],(void*)0},{&g_78[0][4][0],&g_78[1][4][2],&g_78[2][5][4]},{&g_78[2][5][4],&g_78[2][5][4],(void*)0},{&g_78[2][5][4],&g_78[1][2][4],&g_78[3][1][2]},{&g_78[2][5][4],(void*)0,&g_78[2][5][4]},{&g_78[2][5][4],(void*)0,(void*)0}},{{&g_78[0][5][1],&g_78[1][2][4],&g_78[1][4][2]},{&g_78[0][2][2],&g_78[2][5][4],&g_78[2][5][4]},{&g_78[2][5][4],&g_78[1][4][2],&g_78[2][1][4]},{&g_78[0][2][2],&g_78[2][5][4],&g_78[1][4][4]},{&g_78[0][5][1],(void*)0,(void*)0},{&g_78[2][5][4],&g_78[2][5][4],(void*)0}},{{&g_78[2][5][4],&g_78[1][5][3],&g_78[1][4][4]},{&g_78[2][5][4],&g_78[2][5][4],&g_78[2][1][4]},{&g_78[2][5][4],&g_78[3][6][1],&g_78[2][5][4]},{&g_78[0][4][0],(void*)0,&g_78[2][5][4]},{&g_78[0][3][0],&g_78[1][4][2],&g_78[3][5][0]},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_78[1][4][2],&g_78[2][5][4]},{&g_78[0][3][0],&g_78[3][0][4],&g_78[2][5][4]},{&g_78[1][4][4],&g_78[2][5][4],(void*)0},{(void*)0,(void*)0,&g_78[2][5][4]},{(void*)0,&g_78[2][5][4],&g_78[2][5][4]},{&g_78[1][5][3],(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_78[3][5][0]},{&g_78[2][5][4],&g_78[2][5][4],&g_78[2][5][4]},{(void*)0,(void*)0,(void*)0},{&g_78[1][2][4],&g_78[2][5][4],&g_78[3][4][2]},{(void*)0,&g_78[3][0][4],&g_78[2][5][4]},{&g_78[2][5][4],&g_78[1][4][2],&g_78[1][4][2]}},{{(void*)0,(void*)0,&g_78[1][4][2]},{&g_78[1][5][3],&g_78[1][4][2],&g_78[2][5][4]},{(void*)0,(void*)0,&g_78[3][4][2]},{(void*)0,&g_78[2][5][4],(void*)0},{&g_78[1][4][4],(void*)0,&g_78[2][5][4]},{&g_78[0][3][0],&g_78[1][4][2],&g_78[3][5][0]}},{{(void*)0,(void*)0,(void*)0},{(void*)0,&g_78[1][4][2],&g_78[2][5][4]},{&g_78[0][3][0],&g_78[3][0][4],&g_78[2][5][4]},{&g_78[1][4][4],&g_78[2][5][4],(void*)0},{(void*)0,(void*)0,&g_78[2][5][4]},{(void*)0,&g_78[2][5][4],&g_78[2][5][4]}},{{&g_78[1][5][3],(void*)0,(void*)0},{(void*)0,(void*)0,&g_78[3][5][0]},{&g_78[2][5][4],&g_78[2][5][4],&g_78[2][5][4]},{(void*)0,(void*)0,(void*)0},{&g_78[1][2][4],&g_78[2][5][4],&g_78[3][4][2]},{&g_78[1][4][2],&g_78[2][5][4],&g_78[3][5][0]}}};
static short g_294 = 0x1381L;
static const unsigned g_303 = 0x9481A19CL;
static int g_397 = 1L;
static int *g_430[8][2] = {{&g_7,&g_7},{&g_7,&g_397},{&g_397,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_397,&g_397},{&g_7,&g_7},{&g_7,&g_7}};
static const int g_457[7][9][4] = {{{0xC7D9DB92L,0xCBC052F4L,0xB57FBEECL,0x611F490CL},{0x69E8D7BEL,0x94DA46E2L,0x69E8D7BEL,0L},{(-9L),0xD0FBBC8FL,0x612B5FDAL,1L},{0xCBC052F4L,0L,1L,0xD0FBBC8FL},{1L,2L,1L,0x01918236L},{0xCBC052F4L,1L,0x612B5FDAL,0xC7D9DB92L},{(-9L),0xB57FBEECL,0x69E8D7BEL,0x69E8D7BEL},{0x69E8D7BEL,0x69E8D7BEL,0xB57FBEECL,(-9L)},{0xC7D9DB92L,0x612B5FDAL,1L,0xCBC052F4L}},{{0x01918236L,1L,2L,1L},{0xD0FBBC8FL,1L,0L,0xCBC052F4L},{1L,0x612B5FDAL,0xD0FBBC8FL,(-9L)},{0L,0x69E8D7BEL,0x94DA46E2L,0x69E8D7BEL},{0x611F490CL,0xB57FBEECL,0xCBC052F4L,0xC7D9DB92L},{(-7L),1L,0xAFA0DB85L,0x01918236L},{0x94DA46E2L,2L,1L,0xD0FBBC8FL},{0x94DA46E2L,0L,0xAFA0DB85L,1L},{(-7L),0xD0FBBC8FL,0xCBC052F4L,0L}},{{0x611F490CL,0x94DA46E2L,0x94DA46E2L,0x611F490CL},{3L,0x4533ADC3L,0x94DA46E2L,0xCBC052F4L},{(-6L),3L,0xB57FBEECL,0L},{0x94DA46E2L,0xD0FBBC8FL,1L,0L},{0L,3L,0xC7D9DB92L,0xCBC052F4L},{0x69E8D7BEL,0x4533ADC3L,(-7L),0x612B5FDAL},{0x01918236L,0L,0x01918236L,3L},{1L,0x94DA46E2L,0xAFA0DB85L,(-6L)},{0x4533ADC3L,0xB57FBEECL,(-6L),0x94DA46E2L}},{{0xC7D9DB92L,1L,(-6L),0L},{0x4533ADC3L,0xC7D9DB92L,0xAFA0DB85L,0x69E8D7BEL},{1L,(-7L),0x01918236L,0x01918236L},{0x01918236L,0x01918236L,(-7L),1L},{0x69E8D7BEL,0xAFA0DB85L,0xC7D9DB92L,0x4533ADC3L},{0L,(-6L),1L,0xC7D9DB92L},{0x94DA46E2L,(-6L),0xB57FBEECL,0x4533ADC3L},{(-6L),0xAFA0DB85L,0x94DA46E2L,1L},{3L,0x01918236L,0L,0x01918236L}},{{0x612B5FDAL,(-7L),0x4533ADC3L,0x69E8D7BEL},{0xCBC052F4L,0xC7D9DB92L,3L,0L},{0L,1L,0xD0FBBC8FL,0x94DA46E2L},{0L,0xB57FBEECL,3L,(-6L)},{0xCBC052F4L,0x94DA46E2L,0x4533ADC3L,3L},{0x612B5FDAL,0L,0L,0x612B5FDAL},{3L,0x4533ADC3L,0x94DA46E2L,0xCBC052F4L},{(-7L),1L,(-9L),3L},{0L,0x01918236L,0xB57FBEECL,3L}},{{3L,1L,0x612B5FDAL,0xD0FBBC8FL},{0xAFA0DB85L,0x94DA46E2L,1L,0x4533ADC3L},{3L,3L,3L,1L},{0x69E8D7BEL,0L,2L,(-7L)},{0x94DA46E2L,(-9L),(-7L),0L},{0x612B5FDAL,0xB57FBEECL,(-7L),3L},{0x94DA46E2L,0x612B5FDAL,2L,0xAFA0DB85L},{0x69E8D7BEL,1L,3L,3L},{3L,3L,1L,0x69E8D7BEL}},{{0xAFA0DB85L,2L,0x612B5FDAL,0x94DA46E2L},{3L,(-7L),0xB57FBEECL,0x612B5FDAL},{0L,(-7L),(-9L),0x94DA46E2L},{(-7L),2L,0L,0x69E8D7BEL},{1L,3L,3L,3L},{0x4533ADC3L,1L,0x94DA46E2L,0xAFA0DB85L},{0xD0FBBC8FL,0x612B5FDAL,1L,3L},{3L,0xB57FBEECL,0x01918236L,0L},{3L,(-9L),1L,(-7L)}}};
static int *g_490 = &g_397;
static unsigned short g_491 = 0xC3B2L;



static unsigned func_1(void);
static int * func_2(int * const p_3, int * p_4);
static int * func_8(int * p_9, unsigned char p_10);
static int * func_11(int * p_12, int p_13, int p_14, int * p_15);
static int * func_16(int * p_17, int * p_18, unsigned p_19);
static int * func_20(unsigned short p_21);
static unsigned short func_22(unsigned p_23, const struct S0 p_24, char p_25, unsigned short p_26);
static char func_32(int p_33, int * p_34);
static char func_37(int * p_38, int * p_39);
static int ** func_42(struct S0 p_43, int * const p_44, int * p_45, unsigned p_46);
static unsigned func_1(void)
{
    int *l_6 = &g_7;
    int **l_546[4][2][10] = {{{(void*)0,&g_77,&g_490,(void*)0,(void*)0,(void*)0,&g_490,&g_77,(void*)0,&g_77},{&g_77,&g_490,&g_490,(void*)0,&g_77,&g_430[2][0],&g_490,(void*)0,&g_77,(void*)0}},{{&g_77,(void*)0,&g_77,&g_490,(void*)0,(void*)0,(void*)0,&g_490,&g_77,(void*)0},{&g_77,(void*)0,(void*)0,(void*)0,(void*)0,&g_490,&g_490,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_77,&g_77,&g_430[2][0],&g_490,&g_77,&g_490,&g_430[2][0],&g_77},{&g_77,&g_77,&g_77,&g_490,&g_490,(void*)0,&g_77,&g_77,(void*)0,&g_490}},{{&g_77,(void*)0,(void*)0,&g_77,&g_77,&g_430[2][0],&g_490,&g_77,&g_490,&g_430[2][0]},{(void*)0,(void*)0,&g_77,(void*)0,(void*)0,(void*)0,(void*)0,&g_490,&g_490,(void*)0}}};
    int i, j, k;
    g_490 = func_2(g_5[0], l_6);
    return (*l_6);
}







static int * func_2(int * const p_3, int * p_4)
{
    unsigned short l_31 = 65530UL;
    int *l_40 = &g_7;
    const struct S0 l_159[8] = {{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1},{0xAA6365C1L,-6,1,-1093,-44810,148,144,-12,-4L,-1}};
    int **l_532 = &g_77;
    struct S0 ***l_543[10][6][4] = {{{&g_93[8][0][0],&g_93[8][0][0],(void*)0,&g_93[8][0][0]},{&g_93[8][0][0],&g_93[8][0][0],(void*)0,&g_93[8][3][0]},{(void*)0,&g_93[8][3][0],&g_93[2][0][2],(void*)0},{&g_93[4][5][1],&g_93[6][0][2],(void*)0,&g_93[8][0][0]},{&g_93[8][0][0],&g_93[2][0][2],&g_93[3][2][1],(void*)0},{&g_93[5][1][1],&g_93[8][0][0],&g_93[8][0][0],&g_93[5][3][2]}},{{&g_93[8][0][0],&g_93[2][5][1],&g_93[4][5][1],&g_93[8][0][0]},{&g_93[8][0][0],&g_93[8][0][0],(void*)0,&g_93[6][0][2]},{&g_93[8][0][0],&g_93[5][3][2],&g_93[8][0][0],&g_93[6][0][2]},{&g_93[8][0][0],&g_93[8][0][0],&g_93[3][2][1],&g_93[8][0][0]},{&g_93[8][0][0],&g_93[2][5][1],&g_93[8][5][1],&g_93[5][3][2]},{&g_93[0][2][1],&g_93[8][0][0],(void*)0,&g_93[5][1][1]}},{{&g_93[2][0][2],(void*)0,&g_93[8][0][0],&g_93[8][0][0]},{(void*)0,&g_93[8][5][1],(void*)0,(void*)0},{&g_93[2][5][1],&g_93[8][0][0],&g_93[2][0][2],&g_93[8][0][0]},{&g_93[5][5][0],(void*)0,&g_93[6][4][2],&g_93[8][0][0]},{&g_93[6][0][2],&g_93[8][0][0],&g_93[8][0][0],(void*)0},{(void*)0,&g_93[9][5][1],&g_93[8][0][0],&g_93[2][4][2]}},{{(void*)0,&g_93[1][1][2],&g_93[8][0][0],(void*)0},{&g_93[6][0][2],&g_93[2][4][2],&g_93[6][4][2],&g_93[8][0][0]},{&g_93[5][5][0],&g_93[8][0][0],&g_93[2][0][2],(void*)0},{&g_93[2][5][1],&g_93[7][5][0],(void*)0,&g_93[8][0][0]},{(void*)0,&g_93[8][0][0],&g_93[8][0][0],&g_93[8][0][0]},{&g_93[2][0][2],&g_93[3][2][1],(void*)0,(void*)0}},{{&g_93[0][2][1],&g_93[0][2][1],&g_93[8][5][1],&g_93[9][5][1]},{&g_93[8][0][0],(void*)0,&g_93[3][2][1],&g_93[2][5][1]},{&g_93[8][0][0],&g_93[8][0][0],&g_93[8][0][0],&g_93[3][2][1]},{&g_93[8][0][0],&g_93[8][0][0],(void*)0,&g_93[2][5][1]},{&g_93[8][0][0],(void*)0,&g_93[4][5][1],&g_93[9][5][1]},{&g_93[8][0][0],&g_93[0][2][1],&g_93[3][2][1],&g_93[5][1][1]}},{{&g_93[6][0][2],&g_93[0][2][1],&g_93[8][0][0],&g_93[8][0][0]},{&g_93[8][0][0],&g_93[8][3][0],&g_93[8][0][0],&g_93[2][0][2]},{&g_93[8][0][0],&g_93[8][0][0],&g_93[2][4][2],&g_93[8][0][0]},{&g_93[2][5][1],&g_93[8][0][0],&g_93[2][5][1],&g_93[8][0][0]},{&g_93[8][0][0],&g_93[2][5][1],&g_93[5][3][2],(void*)0},{&g_93[8][0][0],&g_93[8][0][0],&g_93[5][5][0],&g_93[2][5][1]}},{{&g_93[8][0][0],&g_93[8][0][0],&g_93[5][5][0],&g_93[4][5][1]},{&g_93[8][0][0],&g_93[7][5][0],&g_93[5][3][2],&g_93[9][5][1]},{&g_93[8][0][0],&g_93[5][1][1],&g_93[2][5][1],(void*)0},{&g_93[2][5][1],(void*)0,&g_93[2][4][2],&g_93[8][0][0]},{&g_93[8][0][0],&g_93[8][0][0],&g_93[8][0][0],&g_93[8][0][0]},{&g_93[8][0][0],&g_93[2][4][2],&g_93[8][0][0],&g_93[5][3][2]}},{{&g_93[6][0][2],&g_93[3][2][1],&g_93[3][2][1],&g_93[6][0][2]},{&g_93[9][5][1],&g_93[5][5][0],&g_93[6][4][2],&g_93[8][0][0]},{&g_93[2][0][2],&g_93[8][0][0],&g_93[8][0][0],&g_93[8][5][1]},{(void*)0,&g_93[6][0][2],&g_93[8][0][0],&g_93[8][5][1]},{&g_93[7][5][0],&g_93[8][0][0],&g_93[0][2][1],&g_93[8][0][0]},{&g_93[8][3][0],&g_93[5][5][0],&g_93[8][0][0],&g_93[6][0][2]}},{{&g_93[8][0][0],&g_93[3][2][1],&g_93[5][1][1],&g_93[5][3][2]},{(void*)0,&g_93[2][4][2],&g_93[8][0][0],&g_93[8][0][0]},{&g_93[5][1][1],&g_93[8][0][0],&g_93[4][5][1],&g_93[8][0][0]},{&g_93[5][5][0],(void*)0,(void*)0,(void*)0},{(void*)0,&g_93[5][1][1],&g_93[8][0][0],&g_93[9][5][1]},{&g_93[8][5][1],&g_93[8][0][0],(void*)0,&g_93[6][4][2]}},{{&g_93[6][4][2],&g_93[8][0][0],&g_93[8][0][0],&g_93[5][5][0]},{&g_93[6][4][2],&g_93[8][0][0],(void*)0,&g_93[8][0][0]},{&g_93[8][0][0],&g_93[5][5][0],&g_93[8][3][0],&g_93[3][2][1]},{&g_93[4][5][1],&g_93[7][5][0],&g_93[2][4][2],&g_93[8][0][0]},{(void*)0,&g_93[8][0][0],&g_93[6][4][2],(void*)0},{&g_93[5][3][2],&g_93[8][0][0],&g_93[1][1][2],&g_93[9][5][1]}}};
    int i, j, k;
    (*l_532) = func_8(func_11(func_16(func_20(func_22(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(0xBDL, 6)) <= l_31), func_32((safe_add_func_uint16_t_u_u((func_37(l_40, &g_7) ^ (safe_add_func_int16_t_s_s(1L, l_31))), ((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_79.f9, l_31)), 0x466AL)) && (-10L)))), l_40))) <= l_31), l_159[0], l_159[0].f9, g_79.f7)), l_40, l_159[0].f3), g_41[2][1], g_79.f5, l_40), l_159[0].f5);
    (*g_77) = (**l_532);
    for (g_491 = 0; (g_491 <= 1); g_491 += 1)
    {
        int *l_535 = &g_397;
        if ((*p_4))
            break;
        for (g_79.f8 = 1; (g_79.f8 >= 0); g_79.f8 -= 1)
        {
            int *l_533[1];
            int i;
            for (i = 0; i < 1; i++)
                l_533[i] = &g_397;
            for (g_397 = 3; (g_397 >= 0); g_397 -= 1)
            {
                (*l_532) = l_533[0];
            }
            for (g_397 = 0; (g_397 <= 3); g_397 += 1)
            {
                int *l_534 = &g_7;
                return l_534;
            }
            if ((*l_40))
                break;
            for (g_397 = 0; (g_397 <= 1); g_397 += 1)
            {
                int *l_536 = (void*)0;
                l_535 = l_535;
                for (l_31 = 0; (l_31 <= 1); l_31 += 1)
                {
                    return l_536;
                }
                (*p_4) = (safe_rshift_func_int8_t_s_u(1L, 2));
                if ((*l_40))
                    break;
            }
        }
    }
    (*p_4) = ((g_457[0][1][0] >= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((&g_93[8][0][0] != &g_93[8][0][0]), ((l_543[4][1][3] == &g_93[8][0][0]) & (*p_4)))), g_79.f3))) >= ((g_294 < ((safe_lshift_func_int8_t_s_u((&l_532 == &g_76), 5)) || (*l_40))) || 0UL));
    return p_4;
}







static int * func_8(int * p_9, unsigned char p_10)
{
    char l_398 = 0xF6L;
    int *l_399 = &g_397;
    int **l_400 = (void*)0;
    int **l_401[4] = {&g_77,&g_77,&g_77,&g_77};
    unsigned char l_418[4];
    char l_427 = 0xF8L;
    int i;
    for (i = 0; i < 4; i++)
        l_418[i] = 0xCBL;
    (*p_9) = ((p_9 != &g_397) ^ l_398);
    g_77 = l_399;
    for (g_7 = 3; (g_7 >= 0); g_7 -= 1)
    {
        int l_420 = 0x7BA4EDF6L;
        struct S0 *l_471 = &g_79;
        int *l_496 = &l_420;
        if ((*p_9))
            break;
        for (g_397 = 3; (g_397 >= 0); g_397 -= 1)
        {
            int *l_409 = &g_7;
            short l_419 = 0x40B1L;
            struct S0 **l_506[9][3][7] = {{{&l_471,(void*)0,&g_78[2][5][4],&l_471,&l_471,&l_471,&l_471},{&g_78[2][5][4],&g_78[1][2][1],&g_78[2][5][4],&g_78[2][5][4],&l_471,&l_471,&l_471},{(void*)0,&l_471,&l_471,&g_78[1][6][1],&g_78[0][2][3],&l_471,&l_471}},{{&l_471,&g_78[2][5][4],&g_78[2][5][4],&g_78[2][3][1],&g_78[2][5][4],&g_78[2][5][4],&l_471},{&l_471,&g_78[0][2][3],&l_471,&g_78[2][2][3],&l_471,(void*)0,(void*)0},{&g_78[1][6][1],&l_471,&g_78[1][1][2],&l_471,(void*)0,&l_471,&l_471}},{{&g_78[1][2][1],&g_78[0][6][0],&l_471,&l_471,&g_78[2][5][4],(void*)0,(void*)0},{&g_78[2][5][4],&g_78[1][6][1],&g_78[2][5][4],(void*)0,&l_471,&g_78[2][5][4],(void*)0},{&g_78[0][6][2],&l_471,&l_471,&g_78[0][0][2],&l_471,&l_471,&g_78[2][5][4]}},{{&g_78[1][2][1],&l_471,&l_471,&g_78[0][6][2],&l_471,&g_78[2][5][4],&l_471},{&l_471,&g_78[3][4][2],&l_471,&g_78[2][5][4],&g_78[2][5][4],&l_471,&l_471},{&l_471,&g_78[2][5][4],(void*)0,&g_78[2][5][4],(void*)0,&l_471,&g_78[0][6][0]}},{{&g_78[2][5][4],&l_471,&g_78[1][1][2],&g_78[2][5][4],&l_471,&g_78[0][5][0],&l_471},{&l_471,&g_78[2][5][4],(void*)0,&g_78[2][5][4],&l_471,&g_78[0][0][4],(void*)0},{&l_471,&l_471,&g_78[2][5][4],&g_78[0][6][2],&g_78[2][5][4],(void*)0,&g_78[2][2][3]}},{{&g_78[2][5][4],&g_78[0][5][0],&g_78[2][5][4],&g_78[2][2][3],&g_78[0][0][4],&l_471,&l_471},{&g_78[1][0][3],(void*)0,&g_78[2][5][4],&g_78[2][5][4],&g_78[2][5][4],&g_78[2][5][4],&g_78[2][5][4]},{&g_78[2][5][4],&g_78[2][5][4],&l_471,&g_78[0][6][0],&l_471,&g_78[0][2][3],&g_78[2][2][3]}},{{&l_471,(void*)0,&g_78[1][6][1],&g_78[2][5][4],&l_471,&l_471,&g_78[2][5][4]},{&g_78[2][5][4],&g_78[2][5][4],&g_78[2][5][4],&g_78[3][0][4],&l_471,&l_471,&g_78[2][5][3]},{&l_471,(void*)0,(void*)0,&l_471,&g_78[2][5][4],&g_78[0][0][2],&g_78[0][6][0]}},{{(void*)0,&l_471,&l_471,(void*)0,&g_78[0][0][4],&g_78[2][5][3],&g_78[2][5][4]},{(void*)0,&g_78[2][2][3],&g_78[2][5][4],&l_471,&g_78[2][5][4],(void*)0,&g_78[3][0][4]},{(void*)0,&l_471,&g_78[0][5][4],&g_78[2][2][3],(void*)0,&l_471,&l_471}},{{&g_78[2][5][4],&l_471,&l_471,(void*)0,&g_78[0][0][4],&l_471,&g_78[2][5][4]},{&g_78[2][5][3],&g_78[2][5][4],&l_471,&g_78[1][1][2],&g_78[2][5][4],&l_471,&g_78[0][5][0]},{(void*)0,&l_471,&l_471,(void*)0,(void*)0,&l_471,&g_78[2][5][4]}}};
            unsigned l_508 = 0xA09B96BEL;
            char l_519 = 0x8EL;
            int i, j, k;
        }
    }
    p_9 = p_9;
    return p_9;
}







static int * func_11(int * p_12, int p_13, int p_14, int * p_15)
{
    const struct S0 l_393 = {0xEBC41AD2L,7,3,-1745,-40500,126,31,-29,0x33ADL,-1};
    (*p_15) = (safe_unary_minus_func_uint8_t_u(g_79.f1));
    for (g_7 = 27; (g_7 > 11); g_7 = safe_sub_func_uint8_t_u_u(g_7, 1))
    {
        int *l_396 = &g_397;
        (*l_396) = (*p_12);
    }
    return &g_397;
}







static int * func_16(int * p_17, int * p_18, unsigned p_19)
{
    struct S0 * const *l_239 = &g_78[2][0][0];
    int l_240 = 0x1E086E9CL;
    const int l_241[5][7][7] = {{{(-2L),0L,0L,0x38209FDAL,(-5L),0L,0x15C216B3L},{0x3340633EL,0x8C89E3A0L,0L,9L,0L,0x8C89E3A0L,0x3340633EL},{(-2L),0x1E767B25L,0L,0x910EDCCFL,(-5L),0x1E767B25L,0x15C216B3L},{0x374FBD6DL,0x8C89E3A0L,5L,9L,5L,0x8C89E3A0L,0x374FBD6DL},{(-2L),0L,0L,0x38209FDAL,(-5L),0L,0x15C216B3L},{0x3340633EL,0x8C89E3A0L,0L,9L,0L,0x8C89E3A0L,0x3340633EL},{(-2L),0x1E767B25L,0L,0x910EDCCFL,(-5L),0x1E767B25L,0x15C216B3L}},{{0x374FBD6DL,0x8C89E3A0L,5L,9L,5L,0x8C89E3A0L,0x374FBD6DL},{(-2L),0L,0L,0x38209FDAL,(-5L),0L,0x15C216B3L},{0x3340633EL,0x8C89E3A0L,0L,(-6L),0x6F28C041L,9L,(-1L)},{(-4L),0x38209FDAL,0L,(-5L),0x1E767B25L,0x38209FDAL,0x292EE644L},{0xC9E8C7E3L,9L,1L,(-6L),1L,9L,0xC9E8C7E3L},{(-4L),0x910EDCCFL,0L,0x9196BF7DL,0x1E767B25L,0x910EDCCFL,0x292EE644L},{(-1L),9L,0x6F28C041L,(-6L),0x6F28C041L,9L,(-1L)}},{{(-4L),0x38209FDAL,0L,(-5L),0x1E767B25L,0x38209FDAL,0x292EE644L},{0xC9E8C7E3L,9L,1L,(-6L),1L,9L,0xC9E8C7E3L},{(-4L),0x910EDCCFL,0L,0x9196BF7DL,0x1E767B25L,0x910EDCCFL,0x292EE644L},{(-1L),9L,0x6F28C041L,(-6L),0x6F28C041L,9L,(-1L)},{(-4L),0x38209FDAL,0L,(-5L),0x1E767B25L,0x38209FDAL,0x292EE644L},{0xC9E8C7E3L,9L,1L,(-6L),1L,9L,0xC9E8C7E3L},{(-4L),0x910EDCCFL,0L,0x9196BF7DL,0x1E767B25L,0x910EDCCFL,0x292EE644L}},{{(-1L),9L,0x6F28C041L,(-6L),0x6F28C041L,9L,(-1L)},{(-4L),0x38209FDAL,0L,(-5L),0x1E767B25L,0x38209FDAL,0x292EE644L},{0xC9E8C7E3L,0x09306EC7L,5L,0L,5L,0x09306EC7L,9L},{0x38209FDAL,0x15C216B3L,0x3013CD62L,(-4L),(-2L),0x15C216B3L,0x910EDCCFL},{0x4F390B09L,0x09306EC7L,0x65E9E7CAL,0L,0x65E9E7CAL,0x09306EC7L,0x4F390B09L},{0x38209FDAL,(-2L),0x3013CD62L,0x292EE644L,(-2L),(-2L),0x910EDCCFL},{9L,0x09306EC7L,5L,0L,5L,0x09306EC7L,9L}},{{0x38209FDAL,0x15C216B3L,0x3013CD62L,(-4L),(-2L),0x15C216B3L,0x910EDCCFL},{0x4F390B09L,0x09306EC7L,0x65E9E7CAL,0L,0x65E9E7CAL,0x09306EC7L,0x4F390B09L},{0x38209FDAL,(-2L),0x3013CD62L,0x292EE644L,(-2L),(-2L),0x910EDCCFL},{9L,0x09306EC7L,5L,0L,5L,0x09306EC7L,9L},{0x38209FDAL,0x15C216B3L,0x3013CD62L,(-4L),(-2L),0x15C216B3L,0x910EDCCFL},{0x4F390B09L,0x09306EC7L,0x65E9E7CAL,0L,0x65E9E7CAL,0x09306EC7L,0x4F390B09L},{0x38209FDAL,(-2L),0x3013CD62L,0x292EE644L,(-2L),(-2L),0x910EDCCFL}}};
    int *l_249[1][1];
    int l_292 = 8L;
    const struct S0 l_313[7] = {{0x54A81D5CL,-0,3,64,3400,347,222,25,0x99ABL,1},{0x54A81D5CL,-0,3,64,3400,347,222,25,0x99ABL,1},{-4L,-0,0,2080,37418,323,81,10,0x1637L,-1},{0x54A81D5CL,-0,3,64,3400,347,222,25,0x99ABL,1},{0x54A81D5CL,-0,3,64,3400,347,222,25,0x99ABL,1},{-4L,-0,0,2080,37418,323,81,10,0x1637L,-1},{0x54A81D5CL,-0,3,64,3400,347,222,25,0x99ABL,1}};
    unsigned l_381 = 4294967288UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_249[i][j] = &l_240;
    }
    if ((safe_mod_func_int16_t_s_s((+((safe_lshift_func_int8_t_s_u(((((safe_unary_minus_func_int16_t_s((((&g_78[2][5][4] != l_239) | ((~(g_79.f7 || (l_240 < g_79.f6))) | ((p_19 > g_79.f7) && 0L))) != l_240))) != l_240) != g_79.f9) >= l_241[3][4][3]), 3)) == p_19)), l_241[3][4][3])))
    {
        int l_244[7] = {8L,0L,0L,8L,0L,0x047CAE5DL,0L};
        unsigned l_250 = 0UL;
        int * const *l_254 = &l_249[0][0];
        const struct S0 l_295 = {0xEA786AB0L,-7,2,3444,-27784,308,153,1,9L,-1};
        int i;
        if ((safe_rshift_func_int8_t_s_u((g_79.f8 > (l_244[4] > ((!((l_241[4][0][1] ^ (0xFFL >= ((!((safe_sub_func_uint16_t_u_u(l_240, (safe_add_func_int32_t_s_s((*p_17), (l_244[3] & p_19))))) <= l_250)) & p_19))) && p_19)) | p_19))), p_19)))
        {
            int l_251 = 0x56B02EC3L;
            const struct S0 l_304[1][10] = {{{0x644E7E3FL,-0,3,-2530,-40498,146,165,26,0x9C1DL,-1},{-10L,1,3,-1235,-16592,253,63,0,0L,0},{0x644E7E3FL,-0,3,-2530,-40498,146,165,26,0x9C1DL,-1},{0x5DDA3E05L,5,3,-808,-30977,-269,172,-10,0x7456L,0},{0x5DDA3E05L,5,3,-808,-30977,-269,172,-10,0x7456L,0},{0x644E7E3FL,-0,3,-2530,-40498,146,165,26,0x9C1DL,-1},{-10L,1,3,-1235,-16592,253,63,0,0L,0},{0x644E7E3FL,-0,3,-2530,-40498,146,165,26,0x9C1DL,-1},{0x5DDA3E05L,5,3,-808,-30977,-269,172,-10,0x7456L,0},{0x5DDA3E05L,5,3,-808,-30977,-269,172,-10,0x7456L,0}}};
            int *l_305[9][7] = {{(void*)0,&g_7,(void*)0,&g_7,(void*)0,&g_7,(void*)0},{&l_244[4],(void*)0,(void*)0,&l_244[4],(void*)0,(void*)0,&l_244[4]},{&g_7,&g_7,&g_7,&g_7,(void*)0,&g_7,&g_7},{&l_244[4],&l_244[4],&l_240,&l_244[4],&l_244[4],&l_240,&l_244[4]},{(void*)0,&g_7,&g_7,&g_7,&g_7,&g_7,(void*)0},{(void*)0,&l_244[4],(void*)0,(void*)0,&l_244[4],(void*)0,(void*)0},{(void*)0,&g_7,(void*)0,&g_7,(void*)0,&g_7,(void*)0},{&l_244[4],(void*)0,(void*)0,&l_244[4],(void*)0,(void*)0,&l_244[4]},{&g_7,&g_7,&g_7,&g_7,(void*)0,&g_7,&g_7}};
            int **l_310 = &l_305[0][1];
            int i, j;
            (*p_17) = l_251;
            (*p_18) = (safe_lshift_func_uint8_t_u_u(((&l_240 != &l_240) ^ g_79.f1), 6));
            for (g_79.f8 = 4; (g_79.f8 >= 0); g_79.f8 -= 1)
            {
                int *l_267 = &l_240;
                unsigned char l_268[10] = {0xB1L,0xB1L,0x8AL,0xB1L,0xB1L,0x8AL,0xB1L,0xB1L,0x8AL,0xB1L};
                int i;
                for (p_19 = 0; (p_19 <= 2); p_19 += 1)
                {
                    int **l_255 = &l_249[0][0];
                    struct S0 *l_262 = &g_79;
                    l_254 = &g_5[0];
                    for (l_240 = 6; (l_240 >= 0); l_240 -= 1)
                    {
                        int i, j, k;
                        l_244[(g_79.f8 + 2)] = (((&p_18 != l_255) == g_79.f8) ^ l_268[3]);
                        (*p_18) = (safe_lshift_func_int8_t_s_s(p_19, (safe_rshift_func_uint8_t_u_u(p_19, (safe_sub_func_int16_t_s_s(g_79.f4, p_19))))));
                    }
                }
                for (p_19 = 0; (p_19 <= 2); p_19 += 1)
                {
                    int l_279 = (-8L);
                    struct S0 * const *l_282 = &g_78[1][6][4];
                    unsigned l_283 = 0x9807EF00L;
                    unsigned char l_293 = 0x10L;
                    int ***l_296 = &g_76;
                    unsigned l_309 = 0x38C9CE29L;
                    for (l_251 = 6; (l_251 >= 0); l_251 -= 1)
                    {
                        int i, j, k;
                        l_244[l_251] = (l_251 > (p_19 == (((((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_79.f0, l_279)), g_79.f8)) >= (*l_267)) <= ((safe_add_func_uint8_t_u_u((g_93[(p_19 + 1)][p_19][p_19] != l_282), (0x8E972006L == (-2L)))) >= 0xC0FECBABL)) != l_283) ^ p_19)));
                        l_244[(g_79.f8 + 1)] = (0xFA45L || ((((l_283 ^ 0xB5AEA7E3L) || (!((safe_add_func_uint16_t_u_u(l_244[l_251], p_19)) > g_294))) == g_7) != g_79.f8));
                        g_93[(l_251 + 3)][g_79.f8][p_19] = g_93[(p_19 + 1)][p_19][p_19];
                        l_244[g_79.f8] = (*p_17);
                    }
                    if (((g_79.f3 >= p_19) == g_79.f5))
                    {
                        int **l_306 = &l_305[1][2];
                        (*l_306) = func_20(((safe_sub_func_uint16_t_u_u((~(safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((p_19 || (g_303 > p_19)), 2)) > 0x2385L), (*l_267)))), g_303)) | g_7));
                        (*l_306) = (void*)0;
                    }
                    else
                    {
                        unsigned l_307 = 4294967295UL;
                        (*p_17) = (((*p_17) ^ p_19) & l_307);
                    }
                    for (g_294 = 0; (g_294 <= 2); g_294 += 1)
                    {
                        int **l_308 = &l_249[0][0];
                        (*l_308) = &g_7;
                        (*p_17) = (((0xFB7AD427L || ((*l_282) != (void*)0)) == l_309) && ((*l_308) == (void*)0));
                    }
                }
            }
            (*l_310) = func_20(g_7);
        }
        else
        {
            for (g_7 = 0; g_7 < 1; g_7 += 1)
            {
                for (l_240 = 0; l_240 < 1; l_240 += 1)
                {
                    l_249[g_7][l_240] = &g_7;
                }
            }
        }
    }
    else
    {
        int l_311 = 0L;
        for (g_79.f8 = 0; g_79.f8 < 4; g_79.f8 += 1)
        {
            for (l_292 = 0; l_292 < 7; l_292 += 1)
            {
                for (l_240 = 0; l_240 < 5; l_240 += 1)
                {
                    g_78[g_79.f8][l_292][l_240] = &g_79;
                }
            }
        }
        if (((&g_76 != &g_76) && p_19))
        {
            return p_17;
        }
        else
        {
            short l_312 = 4L;
            if (((!(((0xACEA4BFBL != (!(l_312 == p_19))) == (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_79.f2, p_19)), p_19))) & g_79.f0)) == p_19))
            {
                char l_336 = 0L;
                for (l_292 = 14; (l_292 <= 20); ++l_292)
                {
                    int *l_335 = &l_311;
                    int *l_367 = &g_7;
                    for (g_294 = 0; (g_294 <= 3); g_294 += 1)
                    {
                        unsigned l_334[8][4][2] = {{{1UL,0x4D294C3BL},{0x4D294C3BL,0x4D294C3BL},{1UL,0x6A73992DL},{4UL,0UL}},{{0UL,1UL},{0x6A73992DL,0UL},{0x4D294C3BL,0x468DFB35L},{0x4D294C3BL,0UL}},{{0x6A73992DL,0UL},{0UL,0xC7D5ECA1L},{1UL,0x7936F811L},{0UL,0xE3145CBEL}},{{0xE3145CBEL,0xE3145CBEL},{0UL,0x7936F811L},{1UL,0xC7D5ECA1L},{0UL,0UL}},{{0x6A73992DL,0UL},{0x4D294C3BL,0x468DFB35L},{0x4D294C3BL,0UL},{0x6A73992DL,0UL}},{{0UL,0xC7D5ECA1L},{1UL,0x7936F811L},{0UL,0xE3145CBEL},{0xE3145CBEL,0xE3145CBEL}},{{0UL,0x7936F811L},{1UL,0xC7D5ECA1L},{0UL,0UL},{0x6A73992DL,0UL}},{{0x4D294C3BL,0x468DFB35L},{0x4D294C3BL,0UL},{0x6A73992DL,0UL},{0UL,0xC7D5ECA1L}}};
                        int **l_337 = (void*)0;
                        int **l_338 = &l_335;
                        int i, j, k;
                        (*l_338) = func_20((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((g_41[0][1] == (((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(g_41[4][0], ((((safe_mod_func_uint8_t_u_u(g_294, g_79.f3)) || (&l_311 != &l_311)) == g_79.f7) < (g_79.f0 || p_19)))) > l_336) == (*p_17)), p_19)), 0xC7L)) != 0L) || g_41[4][1])), 15)), l_311)), 5)));
                        (**l_338) = (65527UL && ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((~(safe_sub_func_int32_t_s_s((*p_18), (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_41[5][1], 0xDD0B4287L)) <= 0x56A9L), g_79.f0)), p_19)) < 0L), 65528UL)), (*l_335)))))), g_79.f6)), 248UL)) >= p_19));
                    }
                    for (l_336 = (-6); (l_336 > (-4)); l_336 = safe_add_func_int32_t_s_s(l_336, 8))
                    {
                        int **l_363 = (void*)0;
                        int **l_364 = &g_77;
                        (*l_364) = func_20(g_79.f5);
                    }
                    for (p_19 = 0; (p_19 == 14); ++p_19)
                    {
                        int **l_368 = &l_249[0][0];
                        unsigned l_369 = 4294967295UL;
                        (*l_368) = func_20(l_312);
                        if (l_312)
                            break;
                        (**l_368) = (((p_19 & ((*l_335) >= ((l_369 == (*p_18)) <= (safe_mod_func_int32_t_s_s(0x2AAAEA85L, p_19))))) == ((*p_18) & (safe_rshift_func_int8_t_s_s(g_79.f7, 7)))) > (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((g_79.f8 > l_336), 13)))));
                        g_77 = &l_311;
                    }
                    for (g_7 = 0; (g_7 > (-21)); g_7--)
                    {
                        if ((*p_17))
                            break;
                        if (l_336)
                            break;
                    }
                }
                p_17 = p_17;
            }
            else
            {
                struct S0 *l_382[2][10][3] = {{{&g_79,&g_79,&g_79},{(void*)0,&g_79,(void*)0},{&g_79,&g_79,&g_79},{(void*)0,&g_79,&g_79},{&g_79,(void*)0,(void*)0},{&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0},{(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79},{(void*)0,(void*)0,&g_79}},{{&g_79,&g_79,(void*)0},{&g_79,&g_79,&g_79},{(void*)0,&g_79,(void*)0},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,(void*)0},{&g_79,(void*)0,&g_79},{&g_79,(void*)0,&g_79},{(void*)0,&g_79,&g_79}}};
                int l_388 = 0x5479D56BL;
                int i, j, k;
                for (p_19 = 0; (p_19 <= 2); p_19 += 1)
                {
                    int l_390 = 6L;
                    if ((safe_rshift_func_uint8_t_u_u((l_381 || l_311), g_79.f6)))
                    {
                        struct S0 **l_383 = &l_382[1][4][1];
                        (*l_383) = l_382[1][4][1];
                    }
                    else
                    {
                        return &g_7;
                    }
                    g_77 = func_20(g_79.f7);
                    for (l_292 = 0; (l_292 <= 2); l_292 += 1)
                    {
                        return p_18;
                    }
                    for (l_311 = 0; (l_311 <= 2); l_311 += 1)
                    {
                        short l_389 = 0x1F9FL;
                        int **l_391 = &l_249[0][0];
                        (*l_391) = func_20((safe_add_func_uint8_t_u_u((&p_18 != &g_5[0]), ((((((-8L) | 255UL) && p_19) <= p_19) > (safe_sub_func_int8_t_s_s(g_79.f4, (((p_19 >= (l_388 > l_389)) == l_312) <= (-1L))))) | l_390))));
                    }
                }
            }
        }
    }
    return p_17;
}







static int * func_20(unsigned short p_21)
{
    struct S0 *l_209 = &g_79;
    int l_211 = 0xD58A86DAL;
    int **l_218[9];
    unsigned l_221[6][4] = {{0x2692D5F5L,0UL,0x10FC685EL,0x10FC685EL},{0xD00F8FBDL,0xD00F8FBDL,0xB8684484L,4294967286UL},{0xD00F8FBDL,0xAB3622FCL,0x10FC685EL,0xD00F8FBDL},{0x2692D5F5L,4294967286UL,0x2692D5F5L,0x10FC685EL},{0UL,4294967286UL,0xB8684484L,0xD00F8FBDL},{4294967286UL,0xAB3622FCL,0xAB3622FCL,4294967286UL}};
    int *l_232 = &l_211;
    int *l_233 = &l_211;
    int i, j;
    for (i = 0; i < 9; i++)
        l_218[i] = &g_77;
    if (p_21)
    {
        int *l_212[3];
        int l_224 = 4L;
        int i;
        for (i = 0; i < 3; i++)
            l_212[i] = &g_7;
        if ((((l_209 == l_209) <= g_79.f5) && ((safe_unary_minus_func_uint8_t_u(((g_79.f8 < ((g_79.f3 || g_79.f2) < p_21)) >= l_211))) < 9L)))
        {
            int **l_213 = (void*)0;
            int *l_214 = &g_7;
            l_214 = &l_211;
            return l_212[2];
        }
        else
        {
            int l_217 = 0x918CF48FL;
            int ** const l_229 = (void*)0;
            for (l_211 = 29; (l_211 >= 14); l_211 = safe_sub_func_uint8_t_u_u(l_211, 7))
            {
                int **l_230 = &l_212[0];
                l_217 = l_211;
                (**l_230) = (p_21 && (((void*)0 != l_218[8]) & (safe_mod_func_int8_t_s_s((p_21 && l_221[4][1]), (safe_mod_func_int32_t_s_s(l_224, ((safe_mod_func_int16_t_s_s(g_79.f1, (safe_lshift_func_int8_t_s_u(((l_229 != l_230) > g_79.f3), 3)))) ^ 5L)))))));
            }
        }
        l_212[0] = l_212[2];
    }
    else
    {
        char l_231 = 0xF7L;
        l_231 = 0x11986F86L;
    }
    return &g_7;
}







static unsigned short func_22(unsigned p_23, const struct S0 p_24, char p_25, unsigned short p_26)
{
    unsigned char l_160 = 0x48L;
    int *l_167[7];
    unsigned l_168 = 1UL;
    unsigned char l_169[5];
    int *l_171 = &g_7;
    unsigned l_208 = 0UL;
    int i;
    for (i = 0; i < 7; i++)
        l_167[i] = &g_7;
    for (i = 0; i < 5; i++)
        l_169[i] = 0xD2L;
    l_160 = ((g_79.f1 < 0xB0AAL) ^ 0x9385L);
    if (l_160)
    {
        struct S0 *l_165 = &g_79;
        int l_166 = 0x9DBC9DE4L;
        int ***l_170 = &g_76;
        int **l_172 = &g_77;
        l_166 = ((~g_79.f1) < (func_32((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((((void*)0 != l_165) && (!8L)) == 6L), (func_32(l_166, l_167[5]) < p_24.f0))), g_79.f2)) | l_166) || l_168), &g_7) > l_169[2]));
        (*l_170) = (void*)0;
        (*l_172) = l_171;
        for (p_26 = 0; (p_26 <= 2); p_26 += 1)
        {
            unsigned l_173[8] = {0x20666721L,0x20666721L,0x20666721L,0x20666721L,0x20666721L,0x20666721L,0x20666721L,0x20666721L};
            char l_183 = 0xDBL;
            int *l_196 = &g_7;
            int i;
            (*l_172) = l_167[5];
            if ((*l_171))
                continue;
            for (l_166 = 2; (l_166 >= 0); l_166 -= 1)
            {
                int l_174 = (-1L);
                for (p_23 = 0; (p_23 <= 2); p_23 += 1)
                {
                    for (l_160 = 0; (l_160 <= 2); l_160 += 1)
                    {
                        l_174 = l_173[6];
                    }
                }
                for (g_7 = 7; (g_7 >= 0); g_7 -= 1)
                {
                    short l_184 = (-5L);
                    int i;
                    if ((((((l_173[(l_166 + 3)] || ((((safe_rshift_func_int8_t_s_s(p_24.f0, 0)) & ((safe_rshift_func_uint8_t_u_u(g_79.f6, (safe_unary_minus_func_int16_t_s((((!l_174) > (((((void*)0 != &p_24) & (((safe_add_func_uint8_t_u_u(g_79.f6, (safe_unary_minus_func_int8_t_s((((((g_79.f6 && (-6L)) != (**l_172)) != 65535UL) >= 0UL) | 0UL))))) | (-1L)) & l_173[(l_166 + 3)])) && g_79.f3) > 0x6C89L)) != (-5L)))))) <= l_183)) == (-8L)) & 1L)) <= 1UL) > l_173[6]) <= g_79.f1) ^ 1L))
                    {
                        l_184 = 3L;
                    }
                    else
                    {
                        int *l_185 = (void*)0;
                        l_185 = l_185;
                        return p_25;
                    }
                    if ((safe_rshift_func_int8_t_s_u((0UL == ((safe_sub_func_uint32_t_u_u(4294967289UL, l_174)) && (safe_rshift_func_int16_t_s_s(((g_79.f6 && (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(0x7E4DL, p_23)), 0xCEE3CB9EL))) >= p_24.f2), 14)))), 4)))
                    {
                        return (*l_171);
                    }
                    else
                    {
                        unsigned l_197 = 0UL;
                        const struct S0 *l_199 = &g_79;
                        const struct S0 **l_198 = &l_199;
                        (*l_172) = l_196;
                        (*l_172) = l_167[1];
                        l_197 = 0xD53DA7A3L;
                        (*l_198) = &p_24;
                    }
                }
                for (l_168 = 0; (l_168 <= 2); l_168 += 1)
                {
                    (*g_77) = (safe_add_func_uint16_t_u_u(g_79.f9, (((g_79.f4 ^ 255UL) || (((((void*)0 != l_196) > (safe_lshift_func_int16_t_s_s(g_41[2][1], 4))) <= (safe_lshift_func_uint8_t_u_s(g_79.f1, (safe_rshift_func_int16_t_s_s((((&g_77 != &l_196) | l_174) && 0xA9CEL), (*l_171)))))) > g_79.f9)) <= 9UL)));
                    if ((*g_77))
                        break;
                }
            }
        }
    }
    else
    {
        return p_24.f9;
    }
    (*l_171) = l_208;
    return p_24.f3;
}







static char func_32(int p_33, int * p_34)
{
    (*g_76) = &p_33;
    return p_33;
}







static char func_37(int * p_38, int * p_39)
{
    struct S0 l_47 = {0x1C17854CL,3,3,-1486,-32917,-130,25,-28,1L,0};
    int *l_48[9] = {&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7};
    int ***l_149 = &g_76;
    unsigned short l_152 = 0x320BL;
    int i;
    for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
    {
        return g_41[1][0];
    }
    (*l_149) = func_42(l_47, &g_7, l_48[3], g_41[0][0]);
    (*p_39) = 0x3B609C62L;
    for (g_7 = 0; (g_7 < (-5)); g_7 = safe_sub_func_uint16_t_u_u(g_7, 3))
    {
        (*g_76) = p_38;
    }
    return l_152;
}







static int ** func_42(struct S0 p_43, int * const p_44, int * p_45, unsigned p_46)
{
    const unsigned l_55 = 0UL;
    int l_56 = 0L;
    unsigned l_141[4][2][5] = {{{4294967289UL,0xED989C8FL,0xED989C8FL,4294967289UL,0x22307A3CL},{0x6CB3F44DL,4294967289UL,4294967295UL,0xED94F1BEL,0x6B99F0C8L}},{{0x6CB3F44DL,4294967295UL,0x22307A3CL,4294967295UL,0x6CB3F44DL},{4294967289UL,0x2723F935L,0x52920A84L,0xED94F1BEL,0xED989C8FL}},{{0x52920A84L,0x2723F935L,4294967289UL,4294967289UL,0x2723F935L},{0x22307A3CL,4294967295UL,0x6CB3F44DL,0x2723F935L,0xED989C8FL}},{{4294967295UL,4294967289UL,0x6CB3F44DL,4294967288UL,0x6CB3F44DL},{0xED989C8FL,0x55BADF45L,4294967295UL,0xED989C8FL,0x22307A3CL}}};
    int i, j, k;
    if (((((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_7 < ((((safe_add_func_int8_t_s_s(l_55, l_56)) >= (p_46 == (!l_55))) > (*p_44)) == l_56)), g_41[1][0])), (safe_sub_func_uint8_t_u_u(p_43.f1, 0x55L)))) != p_43.f3) > l_56) != g_7))
    {
        unsigned short l_59 = 1UL;
        if (l_59)
        {
            int *l_73 = &g_7;
            if ((p_43.f3 || (0xD3L != (safe_sub_func_int32_t_s_s(0xC9E48991L, p_43.f6)))))
            {
                if ((*p_44))
                {
                    int *l_67 = &l_56;
                    int *l_72 = &g_7;
                    if ((*p_44))
                    {
                        unsigned short l_64 = 0UL;
                        (*p_44) = ((1UL | (safe_sub_func_int16_t_s_s((l_64 || (g_41[2][0] | g_7)), (safe_lshift_func_uint16_t_u_u(p_43.f1, ((p_43.f0 ^ g_41[0][1]) > 0x8AD7L)))))) > (0x7F35L > g_7));
                        l_67 = p_44;
                    }
                    else
                    {
                        int **l_68[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int **l_69[10][9][2] = {{{&l_67,&l_67},{&l_67,&l_67},{&l_67,&l_67},{(void*)0,(void*)0},{(void*)0,&l_67},{(void*)0,(void*)0},{&l_67,(void*)0},{&l_67,&l_67},{&l_67,&l_67}},{{&l_67,&l_67},{&l_67,&l_67},{&l_67,&l_67},{&l_67,&l_67},{&l_67,&l_67},{&l_67,(void*)0},{&l_67,(void*)0},{(void*)0,&l_67},{(void*)0,(void*)0}},{{(void*)0,&l_67},{&l_67,&l_67},{&l_67,&l_67},{&l_67,(void*)0},{&l_67,&l_67},{&l_67,&l_67},{(void*)0,(void*)0},{&l_67,&l_67},{(void*)0,&l_67}},{{&l_67,&l_67},{(void*)0,&l_67},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,(void*)0},{(void*)0,&l_67},{&l_67,&l_67},{&l_67,(void*)0},{&l_67,&l_67}},{{&l_67,&l_67},{&l_67,&l_67},{(void*)0,(void*)0},{(void*)0,&l_67},{(void*)0,(void*)0},{&l_67,&l_67},{&l_67,(void*)0},{&l_67,&l_67},{(void*)0,&l_67}},{{(void*)0,&l_67},{(void*)0,&l_67},{(void*)0,&l_67},{&l_67,(void*)0},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,(void*)0}},{{(void*)0,&l_67},{(void*)0,(void*)0},{&l_67,&l_67},{&l_67,&l_67},{&l_67,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_67,&l_67},{&l_67,(void*)0}},{{(void*)0,(void*)0},{&l_67,&l_67},{&l_67,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_67,&l_67},{&l_67,&l_67},{&l_67,(void*)0},{(void*)0,&l_67}},{{(void*)0,(void*)0},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,(void*)0},{&l_67,&l_67},{(void*)0,&l_67},{(void*)0,&l_67}},{{(void*)0,&l_67},{(void*)0,&l_67},{&l_67,(void*)0},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,&l_67},{(void*)0,&l_67},{&l_67,(void*)0},{(void*)0,&l_67}}};
                        int **l_70 = &l_67;
                        int **l_71 = &l_67;
                        int i, j, k;
                        (*l_70) = p_44;
                        (*p_44) = (*p_44);
                        (*l_71) = p_44;
                        l_73 = l_72;
                    }
                    for (l_56 = (-18); (l_56 != 3); l_56 = safe_add_func_uint8_t_u_u(l_56, 4))
                    {
                        return g_76;
                    }
                    return &g_77;
                }
                else
                {
                    unsigned char l_82 = 251UL;
                    g_78[2][5][4] = (void*)0;
                    (*g_77) = (safe_rshift_func_int16_t_s_s(l_82, 13));
                }
            }
            else
            {
                (*l_73) = (*p_44);
            }
            for (l_59 = 0; (l_59 <= 1); l_59 += 1)
            {
                int *l_86 = &g_7;
                for (l_56 = 0; (l_56 <= 1); l_56 += 1)
                {
                    int i, j;
                    if (g_41[(l_56 + 4)][l_59])
                        break;
                    for (g_79.f8 = 0; (g_79.f8 <= 1); g_79.f8 += 1)
                    {
                        unsigned short l_83[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_83[i] = 0xEA33L;
                        (*p_44) = l_83[2];
                        if ((*l_73))
                            break;
                        if (l_55)
                            goto lbl_105;
                        return &g_77;
                    }
                }
                (*g_76) = l_73;
                (**g_76) = l_59;
                for (p_43.f8 = 0; (p_43.f8 <= 3); p_43.f8 += 1)
                {
                    for (l_56 = 1; (l_56 >= 0); l_56 -= 1)
                    {
                        return &g_77;
                    }
                    for (p_46 = 0; (p_46 <= 1); p_46 += 1)
                    {
                        int l_92 = 1L;
                        if ((*l_73))
                            break;
                        (**g_76) = ((g_79.f2 == ((((void*)0 != l_86) | (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(((p_43.f4 && (*p_44)) > (safe_add_func_int8_t_s_s(0x28L, ((p_43.f1 > ((*p_44) | ((l_56 && 0x5922L) || l_92))) & 0xFDB7L)))))) ^ p_43.f8), 0L))) <= l_55)) || l_55);
                        (*p_44) = l_55;
                        (**g_76) = 0L;
                    }
                    for (g_79.f8 = 0; (g_79.f8 <= 1); g_79.f8 += 1)
                    {
                        int i, j, k;
                        g_93[8][0][0] = &g_78[p_43.f8][(p_43.f8 + 2)][(g_79.f8 + 3)];
                        if (g_79.f2)
                            goto lbl_148;
                    }
                }
            }
            p_45 = &l_56;
        }
        else
        {
lbl_105:
            for (l_59 = 0; (l_59 == 32); l_59++)
            {
                int *l_96 = &g_7;
                for (g_79.f8 = 0; (g_79.f8 <= 1); g_79.f8 += 1)
                {
                    int i, j;
                    (*g_76) = l_96;
                    (*p_44) = (safe_add_func_int16_t_s_s(0L, (g_41[(g_79.f8 + 5)][g_79.f8] & g_41[(g_79.f8 + 4)][g_79.f8])));
                    (*p_44) = ((safe_mod_func_int16_t_s_s((g_79.f6 < (safe_lshift_func_int8_t_s_s((((**g_76) >= (safe_unary_minus_func_int16_t_s(0x81E3L))) | (*l_96)), g_79.f6))), ((**g_76) ^ l_59))) > g_79.f7);
                    for (p_46 = 0; (p_46 <= 2); p_46 += 1)
                    {
                        int **l_104 = &g_77;
                        (*l_104) = p_44;
                        (*l_104) = p_45;
                    }
                }
            }
            (*g_76) = (*g_76);
        }
    }
    else
    {
        short l_123 = 0x6AD0L;
        (**g_76) = (**g_76);
        for (p_43.f8 = 25; (p_43.f8 == (-13)); p_43.f8 = safe_sub_func_int32_t_s_s(p_43.f8, 3))
        {
            int l_129 = 0x4D08404EL;
            struct S0 **l_136[1];
            int i;
            for (i = 0; i < 1; i++)
                l_136[i] = &g_78[2][5][4];
        }
    }
lbl_148:
    for (l_56 = 0; (l_56 < 4); ++l_56)
    {
        int **l_147 = &g_77;
        return l_147;
    }
    (*g_76) = &l_56;
    return &g_77;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_41[i][j], "g_41[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_79.f0, "g_79.f0", print_hash_value);
    transparent_crc(g_79.f1, "g_79.f1", print_hash_value);
    transparent_crc(g_79.f2, "g_79.f2", print_hash_value);
    transparent_crc(g_79.f3, "g_79.f3", print_hash_value);
    transparent_crc(g_79.f4, "g_79.f4", print_hash_value);
    transparent_crc(g_79.f5, "g_79.f5", print_hash_value);
    transparent_crc(g_79.f6, "g_79.f6", print_hash_value);
    transparent_crc(g_79.f7, "g_79.f7", print_hash_value);
    transparent_crc(g_79.f8, "g_79.f8", print_hash_value);
    transparent_crc(g_79.f9, "g_79.f9", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_457[i][j][k], "g_457[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_491, "g_491", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
