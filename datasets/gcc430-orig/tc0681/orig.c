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



static volatile unsigned g_4 = 1UL;
static unsigned char g_7 = 247UL;
static char g_23 = (-1L);
static char * const g_24 = (void*)0;
static char g_28 = 0x84L;
static char *g_27[10][7] = {{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{(void*)0,&g_28,(void*)0,&g_28,(void*)0,&g_28,(void*)0},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{(void*)0,&g_28,(void*)0,&g_28,(void*)0,&g_28,(void*)0},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28}};
static unsigned char g_33 = 0x19L;
static int g_56 = 0xF8339546L;
static int *g_82 = (void*)0;
static int g_97 = 0L;
static short g_104 = 0x06DCL;
static unsigned g_122 = 0x147B7162L;
static int g_136 = 0x3690D562L;
static unsigned g_199 = 5UL;
static unsigned char *g_211[5] = {&g_33,&g_33,&g_33,&g_33,&g_33};
static int * const *g_220 = (void*)0;
static unsigned char **g_263[6] = {&g_211[2],&g_211[2],&g_211[2],&g_211[2],&g_211[2],&g_211[2]};
static unsigned char ***g_262 = &g_263[2];
static volatile char g_371 = 1L;
static volatile char g_372 = 0L;
static volatile char g_373 = 0x7DL;
static volatile char g_374 = 0L;
static volatile char g_375[4][3] = {{0x0DL,(-7L),0x0DL},{0x29L,0x29L,0x29L},{0x0DL,(-7L),0x0DL},{0x29L,0x29L,0x29L}};
static volatile char g_376 = (-2L);
static volatile char g_377 = 2L;
static volatile char g_378[5][10][5] = {{{(-7L),(-1L),1L,0x96L,0xE9L},{(-1L),0L,0x2BL,0x27L,0x2BL},{0L,1L,(-10L),0x70L,1L},{8L,0x57L,0xACL,3L,0x27L},{0xDEL,0x6AL,0x89L,1L,7L},{0L,0x57L,(-1L),(-1L),0x23L},{0xA2L,1L,(-7L),1L,0xA2L},{(-1L),0L,0xAFL,8L,0x21L},{0x82L,(-1L),0x2DL,0xBEL,(-7L)},{0xAFL,0xA4L,(-7L),0xAFL,0xACL}},{{0L,8L,0xDEL,(-1L),0x6EL},{0xACL,(-1L),0xACL,(-1L),(-7L)},{0xCFL,0L,1L,0xBEL,0L},{(-1L),(-7L),0x21L,3L,0L},{0xE9L,(-1L),1L,0x6AL,1L},{(-1L),(-9L),0xACL,0xACL,(-9L)},{0x82L,0x70L,0xDEL,(-1L),0x2DL},{0x2BL,0x23L,(-1L),(-1L),8L},{1L,(-1L),(-10L),0xF1L,(-9L)},{0x2BL,0xE6L,3L,(-1L),0xAFL}},{{0x82L,0x04L,0xA2L,0L,0xDEL},{(-1L),3L,0xE6L,0x2BL,0xC7L},{0xE9L,1L,1L,1L,7L},{(-1L),(-1L),0x23L,0x2BL,0xA4L},{0xCFL,0xBEL,0xA5L,0L,0xA5L},{0xACL,0xACL,(-9L),(-1L),(-1L)},{0L,1L,0x89L,0xF1L,0x82L},{3L,0x21L,(-7L),(-1L),(-3L)},{0xDEL,1L,0x09L,(-1L),(-10L)},{0x57L,0x76L,(-1L),0x76L,0x57L}},{{0L,1L,0xA2L,0xBEL,0xE9L},{0xDCL,(-9L),8L,(-1L),(-1L)},{0xA2L,(-3L),0xA5L,1L,0xE9L},{0xAFL,(-1L),0xDCL,0x57L,0x57L},{0xE9L,0L,0xE9L,0L,(-10L)},{0xACL,0x23L,(-1L),0xDCL,0xAFL},{1L,1L,5L,0x04L,0x09L},{(-1L),0xA4L,(-1L),0xAFL,(-9L)},{0L,0x6AL,0xE9L,0xF1L,0L},{0xE6L,(-3L),0xDCL,0xACL,0xC7L}},{{7L,0x96L,0xA5L,0L,0x82L},{(-1L),0x2BL,8L,(-1L),0x27L},{7L,(-1L),0xA2L,1L,(-7L)},{0xE6L,(-1L),(-1L),0xE6L,0xDCL},{0L,0x04L,0x89L,(-3L),1L},{(-1L),8L,0x2BL,(-1L),0L},{1L,0x70L,0x2DL,(-3L),(-9L)},{0xACL,0xDCL,(-3L),0xE6L,0x21L},{0x2DL,0x96L,0L,(-5L),0x06L},{3L,0xE6L,0x2BL,0xC7L,0xDCL}}};
static volatile char g_379 = 0x39L;
static volatile char g_380 = 0x45L;
static volatile char g_381 = 0L;
static volatile char g_382 = 0x24L;
static volatile char g_383 = 1L;
static volatile char *g_370[10][10] = {{&g_380,&g_377,&g_375[2][0],&g_374,&g_374,&g_375[2][0],&g_377,&g_380,&g_383,&g_374},{&g_380,(void*)0,&g_371,&g_374,&g_379,&g_371,&g_377,&g_371,&g_379,&g_374},{&g_371,&g_377,&g_371,&g_379,&g_374,&g_371,(void*)0,&g_380,&g_379,&g_379},{&g_380,&g_377,&g_375[2][0],&g_374,&g_374,&g_375[2][0],&g_377,&g_380,&g_383,&g_374},{&g_380,(void*)0,&g_371,&g_374,&g_379,&g_371,&g_377,&g_371,&g_379,&g_374},{&g_371,&g_377,&g_371,&g_379,&g_374,&g_371,(void*)0,&g_380,&g_379,&g_379},{&g_380,&g_377,&g_375[2][0],&g_374,&g_374,&g_375[2][0],&g_377,&g_380,&g_383,&g_374},{&g_380,(void*)0,&g_371,&g_374,&g_379,&g_371,&g_377,&g_371,&g_379,&g_374},{&g_371,&g_377,&g_371,&g_379,(void*)0,&g_383,&g_381,&g_379,&g_378[3][0][3],&g_378[3][0][3]},{&g_379,&g_376,&g_374,(void*)0,(void*)0,&g_374,&g_376,&g_379,&g_382,(void*)0}};
static volatile char **g_369 = &g_370[3][6];
static volatile char ***g_368 = &g_369;
static volatile unsigned short *g_402 = (void*)0;
static volatile unsigned short **g_401 = &g_402;
static const unsigned short g_413 = 5UL;
static int g_435 = 6L;
static short g_478 = (-3L);
static unsigned short g_497[2][6][1] = {{{65535UL},{0xC8D3L},{65535UL},{0xC8D3L},{65535UL},{0xC8D3L}},{{65535UL},{0xC8D3L},{65535UL},{0xC8D3L},{65535UL},{0xC8D3L}}};
static int *g_502 = &g_97;
static char g_521 = 0xB5L;
static unsigned char g_545 = 0x9BL;
static unsigned g_573 = 2UL;
static unsigned char g_631 = 8UL;
static unsigned char * const g_630 = &g_631;
static unsigned char * const *g_629 = &g_630;
static unsigned char * const **g_628[8] = {&g_629,&g_629,&g_629,&g_629,&g_629,&g_629,&g_629,&g_629};
static unsigned char * const ***g_627 = &g_628[4];
static short * const g_676 = &g_104;
static short * const * const g_675[9] = {(void*)0,(void*)0,&g_676,(void*)0,(void*)0,&g_676,(void*)0,(void*)0,&g_676};
static unsigned short g_729 = 1UL;
static unsigned char ****g_771 = &g_262;
static unsigned char *****g_770[6][9] = {{&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771},{(void*)0,&g_771,&g_771,&g_771,(void*)0,&g_771,(void*)0,&g_771,&g_771},{&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771},{(void*)0,&g_771,&g_771,&g_771,(void*)0,&g_771,(void*)0,&g_771,&g_771},{&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771,&g_771},{(void*)0,&g_771,&g_771,&g_771,(void*)0,&g_771,(void*)0,&g_771,&g_771}};
static char g_790 = (-8L);
static int g_804 = 0xF057AE96L;
static const int *g_813 = &g_56;
static const int **g_812 = &g_813;
static short g_833[9][1] = {{0L},{0x4567L},{0L},{0x4567L},{0L},{0x4567L},{0L},{0x4567L},{0L}};
static unsigned short g_883 = 0xA925L;
static volatile unsigned *g_951[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static volatile unsigned ** const g_950 = &g_951[3];
static volatile unsigned **g_952 = &g_951[3];
static char g_976[10] = {0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L,0xA4L};
static int g_1153 = 0x7A987422L;
static char *g_1172 = &g_790;
static unsigned char g_1175 = 0xE4L;
static int g_1188 = (-1L);
static const char g_1228 = 0xD2L;
static unsigned g_1266 = 4294967294UL;
static char g_1288 = (-8L);
static int g_1297 = 0xB3989E93L;
static unsigned char g_1355[7] = {0x77L,0x15L,0x77L,0x77L,0x15L,0x77L,0x77L};
static unsigned short *g_1362 = &g_497[0][3][0];
static unsigned short **g_1361 = &g_1362;
static unsigned short ** const *g_1360 = &g_1361;
static short g_1374[9][10] = {{0xC717L,0x81C9L,1L,0x81C9L,0xC717L,1L,4L,4L,1L,0xC717L},{0xC717L,0xFD83L,0xFD83L,0xC717L,0x2709L,0x173CL,0xC717L,0x173CL,0x2709L,0xC717L},{0x173CL,0xC717L,0x173CL,0x2709L,0xC717L,0xFD83L,0xFD83L,0xC717L,0x2709L,0x173CL},{4L,4L,1L,0xC717L,0x81C9L,1L,0x81C9L,0xC717L,1L,4L},{0x81C9L,0xFD83L,0x173CL,0x81C9L,0x2709L,0x2709L,0x81C9L,0x173CL,0xFD83L,0x81C9L},{0x173CL,4L,0xFD83L,0x2709L,4L,0x2709L,0xFD83L,4L,0x173CL,0x173CL},{0x81C9L,0xC717L,0xC717L,0xFD83L,0xFD83L,0xC717L,0x2709L,0x173CL,0xC717L,0x173CL},{0xFD83L,1L,(-8L),0xFD83L,(-8L),1L,0xFD83L,1L,1L,0xFD83L},{1L,0x173CL,(-8L),(-8L),0x173CL,1L,1L,0x173CL,1L,1L}};
static unsigned short g_1379[3] = {1UL,1UL,1UL};
static short * const *g_1383 = (void*)0;
static short g_1420[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};



static int func_1(void);
static unsigned char func_10(unsigned p_11, short p_12, unsigned short p_13, unsigned p_14);
static char * func_38(const char * const p_39, unsigned char * p_40);
static char * const func_41(unsigned char p_42);
static int func_43(char p_44, unsigned char * p_45, short p_46, char * p_47, char p_48);
static unsigned char * func_49(char * const p_50);
static char * const func_51(short p_52, unsigned p_53, int p_54);
static short func_57(int * const p_58, char p_59);
static int * const func_60(unsigned char * p_61, unsigned char p_62);
static int * func_63(unsigned short p_64);
static int func_1(void)
{
    char l_17 = 0x77L;
    char *l_22 = &g_23;
    unsigned char *l_31 = (void*)0;
    unsigned char *l_32 = &g_33;
    int l_34 = 0xE2B79DC8L;
    unsigned short l_35[4][6][1] = {{{0x2305L},{65528UL},{65534UL},{65535UL},{65535UL},{65534UL}},{{65528UL},{0x2305L},{65528UL},{65534UL},{65535UL},{65535UL}},{{65534UL},{65528UL},{0x2305L},{65528UL},{65534UL},{65535UL}},{{65535UL},{65534UL},{65528UL},{0x2305L},{65528UL},{65534UL}}};
    unsigned *l_1438[7];
    unsigned * const *l_1437 = &l_1438[3];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1438[i] = &g_199;
    (*g_502) ^= (safe_rshift_func_int8_t_s_s((g_4 <= (safe_lshift_func_int8_t_s_s(g_7, (safe_lshift_func_uint8_t_u_u(func_10(((l_34 = (safe_mul_func_uint8_t_u_u(l_17, ((*l_32) = (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((((*l_22) |= g_7) > (&l_17 != g_24)), (safe_add_func_uint8_t_u_u((&l_17 == (g_27[6][1] = &l_17)), ((((safe_add_func_uint32_t_u_u(l_17, 0x86992F1EL)) ^ l_17) != l_17) || 0x5A8CL))))) <= 0L), g_7)))))) | g_7), l_17, l_17, l_35[2][1][0]), l_17))))), l_35[3][2][0]));


    (*g_502) ^= (l_1437 != (void*)0);
    return g_833[0][0];


}







static unsigned char func_10(unsigned p_11, short p_12, unsigned short p_13, unsigned p_14)
{
    unsigned char *l_990 = &g_7;
    char **l_1171[5][6][4] = {{{(void*)0,&g_27[0][5],&g_27[7][1],&g_27[0][5]},{&g_27[0][0],(void*)0,&g_27[7][1],(void*)0},{(void*)0,&g_27[3][0],&g_27[0][0],(void*)0},{&g_27[2][2],(void*)0,&g_27[2][2],&g_27[0][5]},{&g_27[2][2],&g_27[0][5],&g_27[0][0],(void*)0},{(void*)0,&g_27[0][5],&g_27[7][1],&g_27[0][5]}},{{&g_27[0][0],(void*)0,&g_27[7][1],(void*)0},{(void*)0,&g_27[3][0],&g_27[0][0],(void*)0},{&g_27[2][2],&g_27[0][5],&g_27[6][1],(void*)0},{&g_27[6][1],(void*)0,&g_27[7][1],(void*)0},{&g_27[2][2],(void*)0,(void*)0,(void*)0},{&g_27[7][1],&g_27[0][5],(void*)0,&g_27[3][0]}},{{&g_27[2][2],(void*)0,&g_27[7][1],&g_27[3][0]},{&g_27[6][1],&g_27[0][5],&g_27[6][1],(void*)0},{&g_27[6][1],(void*)0,&g_27[7][1],(void*)0},{&g_27[2][2],(void*)0,(void*)0,(void*)0},{&g_27[7][1],&g_27[0][5],(void*)0,&g_27[3][0]},{&g_27[2][2],(void*)0,&g_27[7][1],&g_27[3][0]}},{{&g_27[6][1],&g_27[0][5],&g_27[6][1],(void*)0},{&g_27[6][1],(void*)0,&g_27[7][1],(void*)0},{&g_27[2][2],(void*)0,(void*)0,(void*)0},{&g_27[7][1],&g_27[0][5],(void*)0,&g_27[3][0]},{&g_27[2][2],(void*)0,&g_27[7][1],&g_27[3][0]},{&g_27[6][1],&g_27[0][5],&g_27[6][1],(void*)0}},{{&g_27[6][1],(void*)0,&g_27[7][1],(void*)0},{&g_27[2][2],(void*)0,(void*)0,(void*)0},{&g_27[7][1],&g_27[0][5],(void*)0,&g_27[3][0]},{&g_27[2][2],(void*)0,&g_27[7][1],&g_27[3][0]},{&g_27[6][1],&g_27[0][5],&g_27[6][1],(void*)0},{&g_27[6][1],(void*)0,&g_27[7][1],(void*)0}}};
    unsigned char *l_1173 = (void*)0;
    unsigned char *l_1174 = &g_1175;
    int l_1178[6] = {0x597F95C4L,0x597F95C4L,0x597F95C4L,0x597F95C4L,0x597F95C4L,0x597F95C4L};
    int l_1184 = 0xEF07BE6BL;
    unsigned short l_1185 = 0UL;
    int *l_1186 = (void*)0;
    int *l_1187[5];
    int l_1193 = (-1L);
    const unsigned *l_1252 = &g_199;
    const unsigned * const *l_1251 = &l_1252;
    volatile unsigned **l_1289[2][10][6] = {{{&g_951[1],&g_951[3],&g_951[3],&g_951[3],&g_951[2],&g_951[3]},{&g_951[3],(void*)0,(void*)0,&g_951[3],&g_951[1],&g_951[3]},{&g_951[3],(void*)0,&g_951[0],(void*)0,(void*)0,&g_951[3]},{&g_951[0],&g_951[2],(void*)0,(void*)0,&g_951[2],&g_951[0]},{&g_951[3],&g_951[1],(void*)0,&g_951[3],&g_951[1],&g_951[3]},{&g_951[3],(void*)0,&g_951[0],&g_951[3],(void*)0,(void*)0},{&g_951[3],&g_951[2],&g_951[3],&g_951[3],&g_951[3],&g_951[3]},{&g_951[3],&g_951[1],(void*)0,(void*)0,&g_951[1],&g_951[3]},{&g_951[0],(void*)0,&g_951[3],(void*)0,(void*)0,(void*)0},{&g_951[3],&g_951[3],(void*)0,&g_951[3],&g_951[3],&g_951[3]}},{{&g_951[3],&g_951[1],(void*)0,&g_951[3],(void*)0,&g_951[3]},{&g_951[3],(void*)0,&g_951[3],&g_951[3],(void*)0,(void*)0},{&g_951[3],&g_951[3],&g_951[3],(void*)0,&g_951[3],&g_951[3]},{&g_951[0],(void*)0,(void*)0,(void*)0,(void*)0,&g_951[3]},{&g_951[3],(void*)0,&g_951[3],&g_951[3],(void*)0,&g_951[3]},{&g_951[3],&g_951[3],&g_951[3],&g_951[3],&g_951[2],&g_951[3]},{&g_951[3],&g_951[3],&g_951[1],(void*)0,&g_951[1],&g_951[2]},{&g_951[3],&g_951[2],(void*)0,&g_951[3],&g_951[3],&g_951[3]},{(void*)0,(void*)0,&g_951[3],&g_951[3],(void*)0,(void*)0},{&g_951[3],&g_951[1],&g_951[3],(void*)0,&g_951[3],(void*)0}}};
    unsigned l_1342 = 4294967286UL;
    unsigned short l_1364[10][3][5] = {{{0x94E5L,0x9EFDL,1UL,0x7E51L,0x94E5L},{0xFED9L,0x3746L,0x3746L,0xFED9L,0x93F8L},{0x331BL,0x7E51L,0UL,0UL,0UL}},{{0xFED9L,0x0835L,65535UL,0x3746L,1UL},{0x94E5L,0UL,0x9E60L,0UL,0x94E5L},{0x93F8L,65527UL,0x0F26L,0xFED9L,0x0835L}},{{0UL,0UL,0UL,0x7E51L,0x331BL},{1UL,0x0835L,65527UL,65527UL,0x0835L},{0x94E5L,0x7E51L,1UL,0x9EFDL,0x94E5L}},{{0x0835L,0x3746L,65527UL,0xFED9L,1UL},{0x331BL,0x9EFDL,0UL,0xB800L,0UL},{0x0835L,0x0835L,0x0F26L,0x3746L,0x93F8L}},{{0x94E5L,0xB800L,0x9E60L,0xB800L,0x94E5L},{1UL,65527UL,65535UL,0xFED9L,0xFED9L},{0UL,0xB800L,0UL,0x9EFDL,0x331BL}},{{0x93F8L,0x0835L,0x3746L,65527UL,0xFED9L},{0x94E5L,0x9EFDL,1UL,0x7E51L,0x94E5L},{0xFED9L,0x3746L,0x3746L,0xFED9L,0x93F8L}},{{0x331BL,0x7E51L,0UL,0UL,0UL},{0xFED9L,0x0835L,65535UL,0x3746L,1UL},{0x94E5L,0UL,0x9E60L,0UL,0x94E5L}},{{0x93F8L,65527UL,0x0F26L,0xFED9L,0x0835L},{0UL,0UL,0UL,0x7E51L,0x331BL},{1UL,0x0835L,65527UL,65527UL,0x0835L}},{{0x94E5L,0x7E51L,1UL,0x9EFDL,0x94E5L},{0x0835L,0x3746L,65527UL,0xFED9L,1UL},{0x331BL,0x9EFDL,0UL,0xB800L,0UL}},{{0x0835L,0x0835L,0x0F26L,0x3746L,0x93F8L},{0x94E5L,0xB800L,0x9E60L,0xB800L,0x94E5L},{1UL,65527UL,65535UL,0xFED9L,0xFED9L}}};
    unsigned l_1386 = 1UL;
    unsigned short l_1433 = 0xDBCDL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1187[i] = &g_1188;
    return (*g_630);
}







static char * func_38(const char * const p_39, unsigned char * p_40)
{
    int l_994[8][8] = {{0L,0x09A0FA2EL,0x0D52E1E0L,(-3L),0x9ACB3CEEL,0xAB06750FL,0x1387C5F8L,1L},{0x09A0FA2EL,0x3E9277F8L,9L,(-7L),(-3L),(-7L),9L,0x3E9277F8L},{(-1L),0x23D0A099L,9L,0x3E9277F8L,0x09A0FA2EL,0xEDE24E04L,1L,0x0D52E1E0L},{0xC882F2BDL,0x91077E5EL,0xD60B50FAL,0L,(-3L),0x1387C5F8L,1L,9L},{1L,0L,9L,0xEDE24E04L,0xEDE24E04L,9L,0L,1L},{0xEDE24E04L,9L,0L,1L,0xAB06750FL,0x3E9277F8L,0xC882F2BDL,0x1B37B892L},{0L,0xD60B50FAL,0x91077E5EL,0xC882F2BDL,1L,0x3E9277F8L,0x9ACB3CEEL,5L},{0x3E9277F8L,9L,(-7L),(-3L),(-7L),9L,0x3E9277F8L,0x09A0FA2EL}};
    unsigned l_997 = 0x8A9B97C2L;
    int * const l_998 = &g_56;
    int * const l_1029 = &g_56;
    char ***l_1047 = (void*)0;
    int * const l_1053[2][10] = {{&g_97,&g_136,(void*)0,&g_136,&g_97,&g_97,&g_136,(void*)0,&g_136,&g_97},{&g_97,&g_136,(void*)0,&g_136,&g_97,&g_97,&g_136,(void*)0,&g_136,&g_97}};
    unsigned char * const l_1054 = &g_545;
    unsigned short l_1063 = 0xD3EBL;
    int **l_1093[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned l_1099[2][3][3];
    int * const l_1129 = &g_97;
    unsigned char ** const *l_1148 = &g_263[3];
    short l_1160[5] = {0L,0L,0L,0L,0L};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_1099[i][j][k] = 0xCA55821FL;
        }
    }
    for (g_199 = 8; (g_199 <= 58); ++g_199)
    {
        unsigned char l_993[5][9][5] = {{{0xC0L,0xB4L,7UL,0xB4L,0xC0L},{3UL,0x1CL,0x67L,0x19L,0UL},{0x32L,254UL,0x48L,0x7DL,0xB5L},{0x19L,0UL,0UL,0x5CL,0x0EL},{0xC0L,0xBCL,2UL,0x60L,0x19L},{0x0EL,5UL,0xEEL,0x97L,0x97L},{0xC1L,0xA9L,0xC1L,254UL,0xB5L},{253UL,0x19L,0x5FL,0x5CL,0xECL},{1UL,1UL,0xDCL,0x1EL,0xA0L}},{{0UL,0x1CL,0x5FL,0xECL,0UL},{0xF7L,0x48L,0xC1L,0x7DL,253UL},{0x19L,0xECL,0xEEL,0x67L,253UL},{0xA0L,8UL,2UL,0x55L,0xDEL},{0UL,0x1CL,0UL,0x32L,0x97L},{0x48L,0x7DL,0xB5L,1UL,0x48L},{0UL,0x19L,0x1CL,0x83L,0UL},{0xA0L,0xB4L,250UL,0x1EL,0x1BL},{0x19L,5UL,5UL,0x19L,0x0EL}},{{0xF7L,0x1EL,0x32L,0x60L,0x48L},{0UL,0UL,0xEEL,0x5FL,0xF4L},{1UL,0xA9L,0xA3L,0x60L,0xDEL},{253UL,0x5CL,0xC2L,0x19L,0xECL},{0xC1L,0x33L,0xB5L,0x48L,0xB5L},{0xF4L,0x97L,0x67L,5UL,0UL},{0x1BL,1UL,0x9CL,0xFEL,0xDEL},{3UL,5UL,0x83L,0xECL,0UL},{0xB5L,1UL,0x48L,0x60L,0x32L}},{{0x19L,0x97L,252UL,0x83L,0UL},{1UL,0x33L,2UL,0x33L,1UL},{0x76L,252UL,0xC2L,0UL,0x97L},{0xB5L,0x55L,0x32L,0x48L,253UL},{0UL,0x19L,0x5CL,252UL,0x97L},{0x1BL,0x48L,7UL,0x1EL,1UL},{0x97L,0x5CL,0x83L,0x32L,0UL},{0xF7L,0xBEL,0xF7L,0xBCL,0x32L},{0UL,3UL,0xEEL,252UL,0UL}},{{0xC0L,0x33L,250UL,8UL,0xDEL},{0xF4L,0x5FL,0xEEL,0UL,0UL},{255UL,0x7DL,0xF7L,0xFEL,0xB5L},{0UL,0UL,0x83L,0x83L,0UL},{0xDEL,1UL,7UL,254UL,1UL},{0x19L,252UL,0x83L,0x97L,0x0EL},{0x32L,0x48L,253UL,8UL,0x32L},{0xECL,0UL,0xA9L,0x67L,0UL},{0x1BL,0x33L,0xDCL,0x60L,0xC0L}}};
        int **l_1018 = (void*)0;
        int ***l_1017 = &l_1018;
        int ****l_1016 = &l_1017;
        unsigned char l_1039 = 2UL;
        int l_1050 = 0xA03114A9L;
        int *l_1073 = (void*)0;
        unsigned l_1117[5][6][7] = {{{1UL,4294967292UL,0x19624A33L,0UL,2UL,4294967293UL,0xADED02D1L},{0xC78BBB5DL,0xD5D08983L,2UL,0UL,3UL,4294967293UL,3UL},{0UL,4294967293UL,4294967293UL,0UL,1UL,1UL,0xF0C68D43L},{0x272816E1L,4294967292UL,4294967295UL,1UL,1UL,4294967293UL,4294967295UL},{1UL,0UL,0UL,0xDF9D08B3L,0xE4B9A0BCL,0x5F1355CCL,0xF0C68D43L},{4UL,4294967286UL,2UL,0xADED02D1L,0UL,2UL,3UL}},{{0x19624A33L,0UL,6UL,4294967295UL,0x5F1355CCL,4294967288UL,0xADED02D1L},{0x19624A33L,0UL,4294967286UL,4294967286UL,0UL,0x19624A33L,4294967293UL},{4UL,2UL,0x07378092L,0xF0C68D43L,1UL,4294967295UL,0xD5D08983L},{1UL,0UL,4294967295UL,0x272816E1L,4294967292UL,0xC78BBB5DL,2UL},{0x272816E1L,2UL,5UL,0UL,0xDF9D08B3L,8UL,3UL},{0x272816E1L,0xE4B9A0BCL,0UL,4294967288UL,0xC78BBB5DL,0xF0C68D43L,0UL}},{{4294967295UL,2UL,0UL,0UL,0UL,0UL,2UL},{1UL,0x07378092L,0xD5D08983L,0x852363DFL,0x272816E1L,4294967293UL,0UL},{8UL,0x19624A33L,4294967295UL,0xE4B9A0BCL,1UL,2UL,0UL},{4294967292UL,8UL,0UL,0x852363DFL,4UL,0x272816E1L,0xD5D08983L},{0UL,0UL,0x07378092L,0UL,0x19624A33L,1UL,0UL},{0x07378092L,4UL,4294967293UL,4294967288UL,0x19624A33L,0x19624A33L,4294967288UL}},{{0xDF9D08B3L,4294967292UL,0xDF9D08B3L,4294967293UL,4UL,1UL,0x852363DFL},{0x19624A33L,4294967293UL,4294967292UL,0UL,1UL,1UL,8UL},{3UL,4294967295UL,1UL,2UL,0x272816E1L,1UL,0x5F1355CCL},{0x852363DFL,0UL,0UL,0x07378092L,0UL,0x19624A33L,1UL},{0xD5D08983L,1UL,0x5F1355CCL,1UL,0xC78BBB5DL,1UL,1UL},{1UL,0xF0C68D43L,0UL,0xF0C68D43L,1UL,0x272816E1L,0x5F1355CCL}},{{4UL,2UL,0xE4B9A0BCL,1UL,8UL,0xDF9D08B3L,0UL},{0xC78BBB5DL,4294967293UL,1UL,5UL,4294967292UL,0UL,6UL},{0xADED02D1L,1UL,4294967288UL,0UL,0UL,0x19624A33L,0x852363DFL},{1UL,4294967293UL,5UL,0UL,0x07378092L,2UL,4294967292UL},{4UL,4294967293UL,0xDF9D08B3L,4294967292UL,0xDF9D08B3L,4294967293UL,4UL},{6UL,1UL,0xD5D08983L,8UL,0x19624A33L,4294967295UL,0xE4B9A0BCL}}};
        char *l_1152 = &g_521;
        unsigned short *l_1169 = &l_1063;
        unsigned short l_1170 = 0UL;
        int i, j, k;
        if ((g_56 &= l_993[4][8][2]))
        {
            int *l_995 = &g_56;
            unsigned char *** const * const l_1032[4] = {&g_262,&g_262,&g_262,&g_262};
            unsigned char *** const * const *l_1031[10] = {&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1],&l_1032[1]};
            int i;
            if (l_994[4][2])
            {
                const int l_996 = 0xDD29E346L;
                char *l_1005 = (void*)0;
                char *l_1006 = &g_521;
                int *l_1007 = (void*)0;
                int *l_1008 = &g_97;
                (*g_812) = l_995;

                ;
                if (l_996)
                    continue;
                if (l_997)
                    continue;
                (*l_1008) |= ((0x99539DC6L >= (0xDAF57B0EL | (*l_995))) > 1L);
            }
            else
            {
                const int l_1013 = 0x36E425BBL;
                int *****l_1019 = &l_1016;
                int **l_1023 = &l_995;
                int *** const l_1022 = &l_1023;
                int *** const *l_1021[7][10] = {{(void*)0,&l_1022,&l_1022,(void*)0,&l_1022,&l_1022,(void*)0,&l_1022,&l_1022,&l_1022},{&l_1022,&l_1022,&l_1022,&l_1022,(void*)0,&l_1022,&l_1022,(void*)0,(void*)0,&l_1022},{&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,(void*)0,&l_1022,(void*)0,&l_1022},{&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,(void*)0,&l_1022,(void*)0,&l_1022},{&l_1022,(void*)0,&l_1022,(void*)0,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022},{&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022},{&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,(void*)0,&l_1022,(void*)0,&l_1022}};
                int *** const **l_1020 = &l_1021[4][0];
                int **l_1026 = (void*)0;
                int **l_1027 = &g_82;
                unsigned *l_1040 = (void*)0;
                unsigned *l_1041 = &l_997;
                int i, j;
                (***l_1022) = ((&g_369 == (void*)0) | ((*l_998) == (safe_mod_func_uint32_t_u_u((((l_1013 != (((safe_rshift_func_int8_t_s_u((*p_39), 0)) == (((*l_1019) = l_1016) == ((*l_1020) = &l_1017))) <= ((*l_995) | ((((*g_676) ^ (*l_998)) && (*l_998)) <= g_545)))) > (*l_998)) > (*l_995)), (*l_998)))));


                if (((*l_998) == (~(*l_998))))
                {
                    int *l_1028 = &g_435;
                    (*g_812) = ((*l_1023) = (g_82 = l_1028));

                    ;
                    ;
                    ;
                }
                else
                {
                    int **l_1030 = &g_82;
                    if ((*l_995))
                        break;
                    (*l_1030) = l_1029;

                    ;
                }

                ;
                ;
                (*l_995) = ((void*)0 != l_1031[7]);
                if ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((-1L), ((((**l_1023) = 1L) != (g_97 = l_993[4][8][2])) > ((*l_1041) = l_1039)))), (*p_40))), (!(*p_40)))))
                {
                    char l_1046 = 0L;
                    char ****l_1048 = &l_1047;
                    for (g_136 = 0; (g_136 != 22); g_136++)
                    {
                        (**l_1023) = (safe_mod_func_uint16_t_u_u(func_57(l_1029, l_1046), g_833[5][0]));
                    }
                    (*l_998) &= (((*l_1048) = l_1047) != (void*)0);
                }
                else
                {
                    char l_1049 = 0xBBL;
                    char *l_1055 = (void*)0;
                    const int *l_1056 = &l_1050;
                    l_1050 = ((*l_1029) = l_1049);
                    (**l_1027) = (g_136 <= (safe_mul_func_uint8_t_u_u(func_57(l_1053[1][7], ((***l_1022) ^= (((g_23 == 0x7165L) & (-9L)) > (((void*)0 == l_1054) & 0x48B835E4L)))), (*p_40))));
                    (*g_812) = l_1056;

                    ;
                }


            }


            ;
        }
        else
        {
            const int l_1064[5] = {0x014AE10BL,0x014AE10BL,0x014AE10BL,0x014AE10BL,0x014AE10BL};
            char *l_1065 = &g_521;
            char *l_1066 = &g_23;
            int l_1090[4][7] = {{0xF066EE01L,0xF066EE01L,0x4D7765FAL,9L,0x4D7765FAL,0xF066EE01L,0xF066EE01L},{0xF066EE01L,0x4D7765FAL,9L,0x4D7765FAL,0xF066EE01L,0xF066EE01L,0x4D7765FAL},{1L,(-3L),1L,0x4D7765FAL,0x4D7765FAL,1L,(-3L)},{0x4D7765FAL,(-3L),9L,9L,(-3L),0x4D7765FAL,(-3L)}};
            int *l_1123[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_1123[i] = &l_1090[1][6];
            g_435 &= ((safe_rshift_func_int8_t_s_s((*p_39), (((safe_rshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((*l_1029), (*l_1029))) ^ (l_1063 < ((*g_676) | l_1064[1]))) & ((*l_1066) = ((*l_1065) = 3L))), 2)) && 0UL) || l_1064[1]))) | (*l_1029));
            (*l_998) = (l_1053[1][7] != &l_1064[1]);
            (*l_1029) |= 0L;
            if ((((*g_676) = (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((&p_40 != ((**g_771) = (**g_771))) >= (*p_40)), (0xEEL <= (*l_1029)))), (l_1064[4] == ((&l_1064[1] != &l_1064[4]) < ((safe_sub_func_int8_t_s_s((*p_39), 0x4AL)) == l_1064[1])))))) <= (*l_1029)))
            {
                unsigned short l_1076 = 0xEC06L;
                unsigned short *l_1081 = &g_497[0][5][0];
                int l_1115 = (-9L);
                (*g_812) = l_1073;

                ;
                l_1090[1][6] = ((safe_lshift_func_int16_t_s_s((*g_676), (((*l_1065) = (*p_39)) ^ l_1076))) || (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-1L), (((((***g_262) ^= ((((*l_1081) = 0x2D75L) ^ l_1076) <= (safe_add_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((-10L), (l_1076 >= l_1064[1]))) >= (**g_629)) > (*g_676)), (*l_1029))))) | l_1076) <= 0x03L) >= l_1076))), g_976[4])));
                for (l_1039 = 0; (l_1039 <= 31); ++l_1039)
                {
                    int ***l_1094 = &l_1093[4];
                    int **l_1096 = &g_502;
                    int ***l_1095 = &l_1096;
                    int **l_1098 = &g_502;
                    int ***l_1097 = &l_1098;
                    const int l_1113 = 0L;
                    unsigned char *** const *l_1114 = &g_262;
                    int l_1116 = 0xE0127A55L;
                    (*l_998) = (((*l_1017) = (void*)0) != ((*l_1097) = ((*l_1095) = ((*l_1094) = l_1093[4]))));

                    ;
                    ;
                    if (l_1076)
                    {
                        int * const l_1100[8] = {&l_1050,&l_1050,&l_1050,&l_1050,&l_1050,&l_1050,&l_1050,&l_1050};
                        int **l_1118[8] = {&g_82,&g_82,&g_502,&g_82,&g_82,&g_502,&g_82,&g_82};
                        int **l_1119 = &g_502;
                        int i;
                        (*g_812) = func_63(l_1090[0][0]);

                        ;
                        (*l_1029) = ((((safe_sub_func_int16_t_s_s(((*g_676) &= l_1117[2][3][1]), g_521)) ^ 4294967295UL) | 0x7584D644L) < 0xEC674DECL);
                        if (l_1115)
                            break;
                        (*l_1119) = l_1100[3];

                        ;
                    }
                    else
                    {
                        (*g_812) = (g_502 = func_63(g_497[0][5][0]));

                        ;
                        ;
                    }

                    ;
                    ;
                    for (g_33 = 0; (g_33 <= 9); g_33 += 1)
                    {
                        int *l_1120 = &l_1115;
                        (*g_812) = (g_82 = l_1120);

                        ;
                        ;
                        (*g_812) = (*g_812);
                    }

                    ;
                }



                ;
                for (g_33 = 0; (g_33 >= 27); g_33++)
                {
                    unsigned l_1124[6][10] = {{0UL,0xC8BF3A10L,0UL,0x33F17121L,0x33F17121L,0UL,0xC8BF3A10L,0UL,0x33F17121L,0x33F17121L},{0UL,0xC8BF3A10L,0UL,0x33F17121L,0x33F17121L,0UL,0xC8BF3A10L,0UL,0x33F17121L,4294967290UL},{0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL,0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL},{0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL,0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL},{0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL,0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL},{0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL,0x33F17121L,4294967295UL,0x33F17121L,4294967290UL,4294967290UL}};
                    int i, j;
                    l_1123[2] = &l_1115;
                    if (l_1124[5][5])
                        continue;
                    if (l_1076)
                    {
                        int l_1125 = 0L;
                        int l_1126 = 0x348AE4D8L;
                        (*l_1029) = (*l_998);
                        l_1126 = ((*l_998) &= l_1125);
                        l_1126 = l_1126;
                        return l_1065;





                    }
                    else
                    {
                        unsigned char l_1138 = 0x76L;
                        (*l_998) &= ((safe_sub_func_int8_t_s_s((+(*p_39)), (safe_mul_func_int16_t_s_s((l_1115 <= (safe_mod_func_uint16_t_u_u((((*p_40) < ((*p_40) != ((*l_1054) = (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_1124[2][3], l_1115)), 0x95B9L)) > 0x6255770DL) > l_1124[0][4])))) | 3L), l_1138))), g_804)))) & (*p_40));
                    }
                }


            }
            else
            {
                short l_1139 = 1L;
                (*l_1129) = 1L;
                (*l_1029) |= l_1139;
                for (g_521 = 19; (g_521 > (-7)); --g_521)
                {
                    unsigned char l_1151 = 0x24L;
                    for (l_1139 = 4; (l_1139 <= 6); l_1139 = safe_add_func_uint32_t_u_u(l_1139, 6))
                    {
                        unsigned l_1147 = 1UL;
                        unsigned char ***l_1149 = (void*)0;
                        unsigned short *l_1150 = &g_497[0][5][0];
                        (*g_812) = func_63((0x64L & (l_1139 != (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u((~(g_976[8] == ((((l_1148 = l_1148) != l_1149) >= (0x1987L | ((*l_1150) = ((void*)0 != &g_675[8])))) == l_1151))), (*g_630))))))));

                        ;
                        (*g_812) = func_63(((*l_1150) = g_478));
                    }
                    return l_1152;


                }
            }



        }



        g_435 &= ((*l_998) = (g_1153 & ((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((*p_40), 3)), (safe_lshift_func_int16_t_s_s(((*g_676) = ((l_1160[3] > (safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((*l_1029), (*g_676))) >= (*g_676)), (*g_676)))) < (*l_1129))), l_1170)))) <= (-1L)) & g_136) > 1L)));
    }




    return &g_976[4];


}







static char * const func_41(unsigned char p_42)
{
    char *l_789 = &g_790;
    int l_793 = (-8L);
    int l_847 = 0xD0A205F3L;
    unsigned short *l_882 = &g_883;
    int l_891 = 0x3A1CCDA3L;
    int l_900[8][3] = {{1L,0x19E7FC7CL,1L},{(-1L),0x6B435F30L,(-5L)},{0xAD1E533FL,0xAD1E533FL,0xCD64B79AL},{(-1L),0x6B435F30L,0x6B435F30L},{0xCD64B79AL,0x19E7FC7CL,0x7EBAF687L},{(-1L),0xE518CEE3L,(-1L)},{0xAD1E533FL,0xCD64B79AL,0x7EBAF687L},{(-1L),(-1L),0x6B435F30L}};
    int **l_933 = &g_502;
    int *** const l_932[10][9] = {{&l_933,(void*)0,(void*)0,(void*)0,(void*)0,&l_933,&l_933,&l_933,&l_933},{(void*)0,&l_933,&l_933,&l_933,&l_933,&l_933,&l_933,&l_933,&l_933},{&l_933,&l_933,(void*)0,&l_933,&l_933,&l_933,&l_933,&l_933,(void*)0},{&l_933,&l_933,&l_933,&l_933,&l_933,&l_933,&l_933,&l_933,(void*)0},{&l_933,(void*)0,&l_933,&l_933,&l_933,&l_933,(void*)0,&l_933,&l_933},{&l_933,&l_933,&l_933,&l_933,(void*)0,(void*)0,&l_933,&l_933,&l_933},{&l_933,&l_933,&l_933,&l_933,(void*)0,(void*)0,&l_933,&l_933,&l_933},{(void*)0,&l_933,&l_933,(void*)0,&l_933,(void*)0,&l_933,&l_933,(void*)0},{(void*)0,&l_933,(void*)0,&l_933,&l_933,&l_933,&l_933,&l_933,(void*)0},{&l_933,&l_933,(void*)0,&l_933,&l_933,&l_933,(void*)0,&l_933,&l_933}};
    unsigned l_953[3][5][10] = {{{0xE21BCA20L,0x3F793F9CL,0x8C0562E3L,0x4B7AB7ACL,1UL,0x4B7AB7ACL,0x8C0562E3L,0x3F793F9CL,0xE21BCA20L,0UL},{0UL,0UL,0x24D72964L,0x7661922BL,0x5A08EC05L,4294967290UL,0xE9A051DDL,1UL,1UL,0xE9A051DDL},{0x3F793F9CL,0UL,0x7661922BL,0x7661922BL,0UL,0x3F793F9CL,0x3DB58836L,4294967290UL,0xE21BCA20L,4294967295UL},{4294967295UL,1UL,0UL,0x4B7AB7ACL,0x24D72964L,0xDC4BABA1L,0UL,0x3F793F9CL,0x5A08EC05L,1UL},{0xDC4BABA1L,0x3F793F9CL,0xDC4BABA1L,0x24D72964L,0x4B7AB7ACL,0UL,1UL,4294967295UL,1UL,0UL}},{{0UL,1UL,4294967295UL,1UL,0UL,0UL,1UL,4294967295UL,1UL,0UL},{0x8C0562E3L,4294967290UL,0xDC4BABA1L,0xE21BCA20L,1UL,1UL,0x5A08EC05L,0x3F793F9CL,0UL,0x3F793F9CL},{0x3DB58836L,0xDC4BABA1L,1UL,4294967290UL,1UL,0xDC4BABA1L,0x3DB58836L,0UL,4294967295UL,0UL},{1UL,0x5A08EC05L,0xE9A051DDL,4294967295UL,0UL,0x4B7AB7ACL,0xE21BCA20L,0xE21BCA20L,0x4B7AB7ACL,0UL},{4294967295UL,0x5A08EC05L,0x5A08EC05L,4294967295UL,0x4B7AB7ACL,1UL,0x3DB58836L,0UL,0x7661922BL,1UL}},{{0xE9A051DDL,0xDC4BABA1L,0x7661922BL,0x3DB58836L,0x5A08EC05L,4294967295UL,0x5A08EC05L,0x3DB58836L,0x7661922BL,0xDC4BABA1L},{0UL,4294967290UL,0x3F793F9CL,4294967295UL,0x8C0562E3L,0x24D72964L,1UL,0x7661922BL,0x4B7AB7ACL,0x4B7AB7ACL},{4294967290UL,1UL,0x24D72964L,4294967295UL,4294967295UL,0x24D72964L,1UL,4294967290UL,4294967295UL,1UL},{0UL,0x4B7AB7ACL,1UL,0x3DB58836L,0UL,0x7661922BL,1UL,0xE21BCA20L,1UL,0x7661922BL},{4294967295UL,0UL,1UL,0UL,4294967295UL,0xE21BCA20L,4294967290UL,0x3DB58836L,0x3F793F9CL,0UL}}};
    int i, j, k;
    if (func_43(p_42, func_49(func_51(g_7, g_33, g_28)), (safe_sub_func_int8_t_s_s(((*l_789) = p_42), (((l_793 > (((p_42 || p_42) != p_42) != g_7)) != l_793) != g_729))), l_789, p_42))
    {
        unsigned char l_881 = 0x26L;
        unsigned short *l_885 = &g_883;
        int l_905 = 0x29C0296EL;
        unsigned char ***l_912 = (void*)0;
        unsigned char l_935 = 251UL;
        if ((safe_add_func_uint16_t_u_u(l_847, l_793)))
        {
            unsigned l_863 = 0x4C7DF0D0L;
            unsigned char *****l_896 = &g_771;
            char * const l_898 = &g_28;
            for (g_97 = 15; (g_97 != 17); g_97 = safe_add_func_int16_t_s_s(g_97, 9))
            {
                int *l_851 = &l_793;
                int l_862 = 0xA0254040L;
                unsigned *l_864 = &g_199;
                unsigned char **l_899 = (void*)0;
                (*l_851) = ((safe_unary_minus_func_uint16_t_u(1UL)) >= p_42);
            }
            l_905 &= (p_42 ^ (l_863 >= (g_199 && (safe_mul_func_int8_t_s_s(l_863, (safe_rshift_func_uint8_t_u_u(((p_42 == ((+((*l_896) != (void*)0)) < p_42)) | l_793), p_42)))))));
        }
        else
        {
            unsigned *l_908 = &g_199;
            int *l_909 = &g_97;
            int l_910 = 0x126EF803L;
            int **l_930 = &g_502;
            int ***l_929 = &l_930;
            int ****l_931 = &l_929;
            char * const l_938 = &g_790;
            char *l_941 = &g_790;
            char *l_942[9] = {&g_28,&g_790,&g_28,&g_790,&g_28,&g_790,&g_28,&g_790,&g_28};
            int l_978 = 9L;
            int i;
            if (((*l_909) = (safe_add_func_uint32_t_u_u(g_23, ((*l_908) ^= 0xDD265188L)))))
            {
                unsigned char ***l_911 = &g_263[1];
                int *l_913 = &l_900[1][2];
                (*g_812) = &l_905;

                ;
                l_909 = func_63(l_910);


                ;
                (*l_913) = (l_911 == l_912);
                for (l_891 = 0; (l_891 >= 0); l_891 -= 1)
                {
                    unsigned char l_922 = 1UL;
                    int * const l_923 = &l_905;
                    l_922 |= ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0xC7L, p_42)), (0L < (safe_sub_func_int32_t_s_s(((*l_913) = (safe_add_func_int8_t_s_s((l_793 = p_42), (0xEAL && 1L)))), p_42))))) <= 1UL);
                    for (p_42 = 0; (p_42 <= 0); p_42 += 1)
                    {
                        int i, j;
                        (*l_923) &= (*l_913);
                        l_913 = l_913;
                    }
                }
            }
            else
            {
                int *l_928 = &l_793;
                (*g_812) = l_928;

                ;
            }


            ;
            ;
            if ((p_42 || (((*l_931) = l_929) == l_932[4][1])))
            {
                const unsigned l_934 = 0xB4D92165L;
                int l_943 = (-6L);
                l_935 = l_934;
                for (l_891 = 15; (l_891 <= 16); l_891++)
                {
                    char **l_939 = &g_27[6][1];
                    char **l_940[5][10] = {{&l_789,(void*)0,(void*)0,&l_789,&l_789,(void*)0,(void*)0,&l_789,&l_789,(void*)0},{&l_789,&l_789,&g_27[2][3],(void*)0,&l_789,&g_27[6][1],(void*)0,(void*)0,&g_27[6][1],&l_789},{&l_789,(void*)0,(void*)0,&l_789,&l_789,(void*)0,(void*)0,&l_789,&l_789,(void*)0},{&l_789,&l_789,(void*)0,(void*)0,&l_789,&l_789,(void*)0,(void*)0,&l_789,&l_789},{&l_789,(void*)0,&g_27[2][3],&l_789,&l_789,&g_27[2][3],(void*)0,&l_789,&g_27[6][1],(void*)0}};
                    int i, j;
                    l_943 |= ((l_942[1] = (l_941 = &g_23)) != (**g_368));

                    ;
                }

                ;

            }
            else
            {
                unsigned short l_956[7][6][5] = {{{0xE2F4L,4UL,0x3E4FL,0xB2BCL,0xB563L},{0xD8C2L,7UL,7UL,4UL,6UL},{0xF00CL,0x5732L,6UL,0xB2BCL,0x1DAAL},{65526UL,65535UL,0xCCD3L,65526UL,0x7C28L},{0x2689L,0xB563L,7UL,0x1DAAL,0xE818L},{65535UL,0xCB82L,0xEA94L,6UL,65535UL}},{{0xB8BAL,0xFE44L,0UL,0xB563L,0xE818L},{65535UL,6UL,0xF83DL,0xD8C2L,0x7C28L},{0xE818L,0xFE44L,5UL,1UL,1UL},{65535UL,0xCB82L,0UL,0xD8C2L,6UL},{1UL,0xB563L,65529UL,0xB563L,1UL},{65535UL,65526UL,0xFCD4L,6UL,65535UL}},{{0xE818L,0xE2F4L,65529UL,0x1DAAL,0xEF1AL},{65535UL,0x977BL,0UL,65526UL,65535UL},{0xB8BAL,0x1DAAL,5UL,65535UL,1UL},{65535UL,0x977BL,0xF83DL,0x5DE0L,6UL},{0x2689L,0xE2F4L,0UL,65535UL,1UL},{0x7C28L,65526UL,0xEA94L,65526UL,0x7C28L}},{{0x2689L,0xB563L,7UL,0x1DAAL,0xE818L},{65535UL,0xCB82L,0xEA94L,6UL,65535UL},{0xB8BAL,0xFE44L,0UL,0xB563L,0xE818L},{65535UL,6UL,0xF83DL,0xD8C2L,0x7C28L},{0xE818L,0xFE44L,5UL,5UL,0x5732L},{65535UL,0xEA94L,65535UL,0xBDC1L,8UL}},{{0xB2BCL,1UL,0x92CBL,1UL,0xB2BCL},{65535UL,65526UL,6UL,0UL,65535UL},{0x1267L,65529UL,0x92CBL,0UL,65534UL},{7UL,65535UL,65535UL,65526UL,65535UL},{1UL,0UL,1UL,0x6FE4L,0xB2BCL},{65535UL,65535UL,0x7C28L,0xF83DL,8UL}},{{4UL,65529UL,0xB8BAL,0x6FE4L,0x5732L},{0xB3B5L,65526UL,0x653EL,65526UL,0xB3B5L},{4UL,1UL,1UL,0UL,0x1267L},{65535UL,0xEA94L,0x653EL,0UL,65535UL},{1UL,8UL,0xB8BAL,1UL,0x1267L},{7UL,0UL,0x7C28L,0xBDC1L,0xB3B5L}},{{0x1267L,8UL,1UL,5UL,0x5732L},{65535UL,0xEA94L,65535UL,0xBDC1L,8UL},{0xB2BCL,1UL,0x92CBL,1UL,0xB2BCL},{65535UL,65526UL,6UL,0UL,65535UL},{0x1267L,65529UL,0x92CBL,0UL,65534UL},{7UL,65535UL,65535UL,0xB3B5L,0x8814L}}};
                int * const l_965 = &g_435;
                int i, j, k;
                for (g_136 = 0; (g_136 == 29); g_136 = safe_add_func_uint8_t_u_u(g_136, 3))
                {
                    int *l_948 = &g_97;
                    int l_962 = (-8L);
                    for (g_521 = (-15); (g_521 < 21); g_521++)
                    {
                        int *l_949 = (void*)0;
                        l_949 = l_948;

                        ;
                        g_952 = g_950;
                    }
                    (*l_948) = l_953[0][3][2];
                    for (g_729 = 0; (g_729 != 23); g_729++)
                    {
                        short l_961 = (-1L);
                        (*l_948) = ((0xD8L & (0L ^ (3L > 0xA3L))) ^ l_905);
                        l_905 &= l_956[4][0][0];
                        l_962 |= (p_42 == ((-3L) < (*l_948)));
                    }
                }
                for (g_521 = 0; (g_521 != (-12)); g_521--)
                {
                    (*l_933) = l_965;

                    ;
                }

                ;
            }

            ;
            ;

            for (l_910 = 0; (l_910 >= 19); l_910 = safe_add_func_int32_t_s_s(l_910, 9))
            {
                unsigned char l_972 = 0xC5L;
                unsigned char **l_973 = &g_211[2];
                char *l_977[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_977[i] = (void*)0;
                if ((g_97 = ((safe_add_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u((((l_972 && ((*l_908) = (((void*)0 != l_973) && l_972))) ^ p_42) && 1L), 0x70L)) > 0x4FL) && p_42), 0xAFE6FEF7L)) == (-2L))))
                {
                    return &g_976[4];



                }
                else
                {
                    for (g_97 = 1; (g_97 <= 4); g_97 += 1)
                    {
                        l_978 = (**g_812);
                    }
                }
                if (p_42)
                    break;
                l_978 = p_42;
            }
            l_905 |= 0xECDB52DEL;
        }


        ;
        ;
    }
    else
    {
        unsigned l_981 = 0x31A8A9FCL;
        int l_987 = (-5L);
        if (((safe_sub_func_uint8_t_u_u(l_981, ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_42, p_42)), p_42)) != (0L < p_42)))) ^ (*g_676)))
        {
            unsigned short l_986[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
            int i;
            g_435 |= l_981;
            l_987 &= l_986[3];
            (*g_812) = ((*l_933) = func_63((safe_mod_func_int32_t_s_s((l_987 = p_42), p_42))));


            ;
        }
        else
        {
            return &g_28;


        }


        ;
    }



    ;


    return l_789;



}







static int func_43(char p_44, unsigned char * p_45, short p_46, char * p_47, char p_48)
{
    int **l_794[3][10] = {{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82,&g_82},{&g_82,&g_82,&g_502,&g_82,&g_82,&g_502,&g_82,&g_82,&g_502,&g_82}};
    int i, j;
lbl_797:
    g_82 = (void*)0;

    ;
    for (g_521 = 0; (g_521 >= (-19)); g_521 = safe_sub_func_uint32_t_u_u(g_521, 6))
    {
        const char l_798[8] = {(-1L),0x3AL,(-1L),0x3AL,(-1L),0x3AL,(-1L),0x3AL};
        const unsigned short l_806 = 0x526CL;
        int l_815 = 0x4EB5024AL;
        unsigned *l_816 = &g_199;
        short l_843 = 0x5E8DL;
        int i;
        for (g_631 = 0; (g_631 <= 0); g_631 += 1)
        {
            int l_805 = (-1L);
            const char l_819 = (-1L);
            if (g_521)
                goto lbl_797;
            if (((l_798[2] == (0xC2L != (-2L))) && 0xBFL))
            {
                unsigned l_801 = 0xCF53FAA3L;
                unsigned *l_802 = &g_199;
                unsigned *l_803 = (void*)0;
                int l_807 = (-9L);
                l_807 &= (((safe_add_func_int16_t_s_s(p_48, ((*g_676) = ((((~p_46) == 1UL) == l_801) || (((-1L) && ((0x8FAE7BC2L > (g_804 &= ((*l_802) |= l_798[2]))) >= (g_23 > 1L))) <= l_805))))) > l_806) > (*p_47));
            }
            else
            {
                int * const l_810 = &g_97;
                int **l_811 = &g_502;
                const int ***l_814 = &g_812;
                int * const l_820 = &l_805;
                unsigned char ***l_832 = &g_263[2];
                (*l_810) = (safe_sub_func_uint32_t_u_u((254UL == p_46), (((*l_814) = g_812) == (void*)0)));
                l_815 = p_44;
                for (g_199 = 0; (g_199 <= 0); g_199 += 1)
                {
                    unsigned l_821 = 0xC582C046L;
                    for (g_104 = 0; (g_104 <= 0); g_104 += 1)
                    {
                        int i, j, k;
                        return g_497[(g_631 + 1)][(g_104 + 2)][g_631];
                    }
                    (**l_814) = (*g_812);
                    (*g_812) = (void*)0;

                    ;
                }
            }
            for (g_729 = 0; (g_729 <= 0); g_729 += 1)
            {
                unsigned l_834 = 4294967295UL;
                unsigned l_844 = 0xC4766444L;
                g_435 |= (((*p_47) = ((l_834 |= (***g_262)) && 0x07L)) ^ (((safe_mod_func_int8_t_s_s(((*g_676) | (safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((&p_46 != &p_46), ((((*l_816) = (safe_add_func_int32_t_s_s(p_48, (l_815 = l_843)))) || (-3L)) <= (l_844 | p_44)))) & p_44), l_819))), p_44)) != 0xDBECL) >= (*g_630)));
            }
            g_56 = p_46;
            for (g_122 = 0; (g_122 <= 0); g_122 += 1)
            {
                return p_46;
            }
        }
    }
    if (g_122)
        goto lbl_797;
    g_56 = p_48;
    return p_44;
}







static unsigned char * func_49(char * const p_50)
{
    int **l_785 = &g_502;
    unsigned char *l_786 = (void*)0;
    (*l_785) = func_63(g_33);

    ;
    return l_786;


}







static char * const func_51(short p_52, unsigned p_53, int p_54)
{
    const int *l_434[10][3][5] = {{{&g_435,&g_435,&g_435,(void*)0,(void*)0},{&g_435,&g_435,(void*)0,&g_435,&g_435},{(void*)0,&g_435,&g_435,(void*)0,&g_435}},{{&g_435,(void*)0,&g_435,&g_435,(void*)0},{(void*)0,(void*)0,&g_435,&g_435,&g_435},{(void*)0,(void*)0,&g_435,&g_435,&g_435}},{{&g_435,&g_435,&g_435,(void*)0,&g_435},{&g_435,&g_435,&g_435,&g_435,&g_435},{&g_435,&g_435,&g_435,(void*)0,&g_435}},{{&g_435,&g_435,&g_435,(void*)0,(void*)0},{&g_435,(void*)0,(void*)0,&g_435,&g_435},{&g_435,&g_435,&g_435,&g_435,(void*)0}},{{(void*)0,&g_435,&g_435,(void*)0,(void*)0},{&g_435,&g_435,&g_435,(void*)0,&g_435},{(void*)0,&g_435,&g_435,&g_435,&g_435}},{{&g_435,&g_435,(void*)0,(void*)0,(void*)0},{&g_435,(void*)0,&g_435,&g_435,(void*)0},{&g_435,&g_435,&g_435,(void*)0,(void*)0}},{{&g_435,&g_435,&g_435,&g_435,&g_435},{&g_435,&g_435,&g_435,(void*)0,&g_435},{&g_435,&g_435,(void*)0,&g_435,&g_435}},{{(void*)0,&g_435,&g_435,&g_435,&g_435},{&g_435,&g_435,&g_435,&g_435,&g_435},{&g_435,&g_435,(void*)0,&g_435,(void*)0}},{{&g_435,&g_435,&g_435,(void*)0,(void*)0},{&g_435,(void*)0,&g_435,(void*)0,(void*)0},{&g_435,(void*)0,&g_435,(void*)0,&g_435}},{{(void*)0,(void*)0,&g_435,&g_435,&g_435},{&g_435,&g_435,(void*)0,&g_435,&g_435},{(void*)0,&g_435,&g_435,(void*)0,&g_435}}};
    char * const l_437 = (void*)0;
    int *l_492 = &g_56;
    const unsigned short l_500 = 65532UL;
    short *l_525 = &g_104;
    int l_549[1][5][1];
    unsigned char ***l_587[4][8][4] = {{{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]}},{{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]}},{{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]}},{{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]},{(void*)0,&g_263[3],(void*)0,&g_263[0]},{(void*)0,&g_263[0],(void*)0,&g_263[3]}}};
    unsigned char * const *l_625 = &g_211[1];
    unsigned char * const **l_624 = &l_625;
    unsigned char * const ***l_623 = &l_624;
    char * const l_661 = &g_23;
    unsigned short l_682 = 65528UL;
    int *l_705 = &g_56;
    unsigned l_761 = 8UL;
    unsigned char *****l_773 = &g_771;
    int l_779 = (-1L);
    unsigned char l_784 = 9UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_549[i][j][k] = 0xA249955BL;
        }
    }
    for (g_28 = 0; (g_28 <= 6); g_28 += 1)
    {
        int *l_55 = &g_56;
        int l_433 = 0x6D3FA546L;
        char * const l_453 = &g_23;
        unsigned short *l_496 = &g_497[0][5][0];
        unsigned *l_519 = &g_199;
        unsigned ** const l_518 = &l_519;
        (*l_55) = (&g_33 != &g_33);
    }
    if ((safe_sub_func_int16_t_s_s(((*l_525) = p_54), (p_53 == 0x8C70L))))
    {
        unsigned l_542 = 4294967290UL;
        int l_547[7][1][4] = {{{0x16F1ECF1L,0x81AFCC6CL,0L,0x59F06D6DL}},{{(-9L),0x0C295B4CL,2L,0L}},{{0xC7669665L,0x0C295B4CL,0xC7669665L,0x59F06D6DL}},{{0x0C295B4CL,0x81AFCC6CL,(-6L),0xA8CCEFCAL}},{{0xA8CCEFCAL,0L,(-9L),0x81AFCC6CL}},{{0xEA56C8BBL,(-9L),(-9L),0xEA56C8BBL}},{{0xA8CCEFCAL,0x59F06D6DL,(-6L),0xC7669665L}}};
        char * const l_550 = &g_23;
        int i, j, k;
        if ((*l_492))
        {
            const int l_526 = 1L;
            (*g_502) = l_526;
        }
        else
        {
            char * const l_548 = &g_28;
            for (g_33 = (-27); (g_33 <= 35); g_33 = safe_add_func_int8_t_s_s(g_33, 9))
            {
                char * const l_530 = &g_23;
                if (((*l_492) &= (-10L)))
                {
                    unsigned short *l_534 = (void*)0;
                    unsigned short **l_533 = &l_534;
                    int l_541[3];
                    unsigned char *l_543 = (void*)0;
                    unsigned char *l_544 = &g_545;
                    int l_546 = 0x46DAE795L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_541[i] = 0L;
                    for (p_52 = 0; (p_52 >= 0); p_52 -= 1)
                    {
                        const int **l_529 = &l_434[8][0][2];
                        (*l_529) = l_434[1][1][2];
                        return l_530;


                    }
                    (*l_492) = (safe_mod_func_int16_t_s_s((((*g_401) != ((*l_533) = l_525)) == (safe_sub_func_int8_t_s_s((l_542 = (safe_mul_func_uint16_t_u_u(((*g_502) | ((+(safe_lshift_func_uint16_t_u_u(l_541[0], 3))) <= 0xF366L)), (2L >= g_413)))), (l_546 = ((*l_544) |= 0xBAL))))), l_547[6][0][1]));

                    ;
                    if ((*g_502))
                        continue;
                }
                else
                {
                    return l_548;


                }
                if (p_52)
                    continue;
            }
            (*g_502) |= (l_549[0][1][0] = (g_104 || ((*l_492) |= 0xAC8451B0L)));
            return &g_28;


        }
        (*l_492) = ((*g_502) ^= 0x85C8AC8BL);
        for (g_478 = 0; (g_478 >= 0); g_478 -= 1)
        {
            return l_550;


        }
    }
    else
    {
        unsigned short l_551[9][6] = {{6UL,6UL,65532UL,6UL,6UL,65532UL},{6UL,6UL,65532UL,6UL,6UL,65532UL},{6UL,6UL,65532UL,6UL,6UL,65532UL},{6UL,6UL,65532UL,6UL,6UL,65532UL},{6UL,6UL,65532UL,0UL,0UL,6UL},{0UL,0UL,6UL,0UL,0UL,6UL},{0UL,0UL,6UL,0UL,0UL,6UL},{0UL,0UL,6UL,0UL,0UL,6UL},{0UL,0UL,6UL,0UL,0UL,6UL}};
        int **l_552 = (void*)0;
        int **l_553 = &g_502;
        int *l_554 = (void*)0;
        short *l_658 = &g_478;
        int *l_674 = &g_97;
        char * const l_686 = (void*)0;
        unsigned short **l_738 = (void*)0;
        unsigned l_750 = 4294967290UL;
        int i, j;
lbl_576:
        l_554 = ((*l_553) = func_63(l_551[7][5]));

        ;
        ;
        if ((g_122 && g_435))
        {
            char * const l_555 = &g_521;
            return l_555;


        }
        else
        {
            unsigned l_562 = 9UL;
            char * const l_575 = (void*)0;
            int l_584 = 4L;
            short *l_603 = &g_478;
            for (g_122 = 0; (g_122 > 15); g_122 = safe_add_func_int8_t_s_s(g_122, 6))
            {
                int *l_558 = &g_435;
                (*l_553) = l_558;

                ;
                for (g_104 = 0; (g_104 == 14); g_104++)
                {
                    int * const l_561[4][5] = {{&g_136,&g_97,&g_56,&g_97,&g_136},{&g_97,&g_435,&g_56,(void*)0,&g_435},{&g_136,&g_56,&g_56,&g_136,(void*)0},{&g_97,&g_136,&g_56,&g_435,&g_435}};
                    int i, j;
                    if ((((**l_553) ^ ((g_497[0][5][0] >= p_53) != 1UL)) & ((*l_558) != ((*l_558) != (safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((g_521 ^ (*l_558)), 0xFBDBL)), l_562))))))
                    {
                        const int l_571 = (-8L);
                        short *l_572 = &g_478;
                        int **l_574 = &l_554;
                        (*l_558) = ((***g_262) <= (((safe_mul_func_int16_t_s_s((g_573 = (safe_lshift_func_int16_t_s_s(0xD5F5L, ((*l_572) = (((1L != g_435) < p_54) >= (l_571 >= g_435)))))), g_521)) <= p_52) | 0x5BF23766L));
                        (*l_574) = l_561[0][4];
                    }
                    else
                    {
                        (*l_492) |= (((g_521 || (*l_558)) ^ (*g_502)) && 1UL);
                        return l_575;


                    }
                }
                if ((*g_502))
                    continue;
                (**l_553) = (*g_502);
            }

            ;
            ;
            if (g_23)
                goto lbl_576;
            for (g_478 = (-22); (g_478 == 11); g_478 = safe_add_func_uint16_t_u_u(g_478, 9))
            {
                char l_604 = 0L;
                char * const l_607 = (void*)0;
                int l_617 = (-1L);
                for (g_199 = (-7); (g_199 <= 58); g_199++)
                {
                    for (g_33 = 0; (g_33 < 9); g_33 = safe_add_func_uint16_t_u_u(g_33, 7))
                    {
                        (*l_492) &= p_54;
                        return l_575;


                    }
                }
                for (p_53 = 0; (p_53 <= 5); p_53 += 1)
                {
                    unsigned char *l_583 = &g_545;
                    unsigned char ****l_588 = &l_587[3][4][3];
                    unsigned short *l_593 = &g_497[0][5][0];
                    unsigned *l_594 = &g_199;
                    int i, j;
                    l_584 ^= ((**g_262) != l_583);
                    (*l_553) = func_63((safe_add_func_int32_t_s_s(((((*l_588) = l_587[3][2][3]) != &g_263[2]) || ((((safe_add_func_int32_t_s_s(((l_551[(p_53 + 1)][p_53] != ((safe_sub_func_uint16_t_u_u(((*l_593) = p_53), p_53)) == ((*l_594) = 1UL))) || ((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_199, g_97)), l_604)) <= (-1L)), p_54)), 0)) != 65535UL)), p_52)) && g_199) ^ 0x93L) == p_54)), p_53)));

                    ;
                    return &g_521;


                }
                for (g_545 = 0; (g_545 < 25); g_545++)
                {
                    int l_610 = 0x92C0CE74L;
                    if (p_52)
                        break;
                    if ((l_604 > g_573))
                    {
                        return l_607;


                    }
                    else
                    {
                        l_610 = (safe_rshift_func_int8_t_s_u(p_54, 3));
                        return l_437;


                    }
                }
                if (l_562)
                {
                    int l_613 = 1L;
                    for (g_136 = 0; (g_136 > (-16)); --g_136)
                    {
                        char l_614 = 0x96L;
                        l_584 = l_613;
                        l_614 = p_53;
                    }
                    (*l_492) = (+p_52);
                    for (l_584 = 0; (l_584 == 0); l_584 = safe_add_func_uint16_t_u_u(l_584, 5))
                    {
                        unsigned short l_618 = 9UL;
                        l_618 &= (l_617 = p_52);
                    }
                    if (p_52)
                        continue;
                }
                else
                {
                    return &g_28;


                }
            }
        }

        ;
        ;
        if (p_54)
        {
            char l_643 = 0xA8L;
            int * const l_648 = &l_549[0][1][0];
            unsigned short *l_671 = (void*)0;
            int *l_688 = &g_56;
            for (g_104 = 0; (g_104 > (-2)); g_104--)
            {
                unsigned char * const ****l_626[7] = {&l_623,&l_623,&l_623,&l_623,&l_623,&l_623,&l_623};
                unsigned *l_635[5][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199,&g_199},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                unsigned **l_634 = &l_635[0][2];
                int l_642 = 0x2CE47DB1L;
                short l_649 = (-7L);
                short * const *l_677 = &l_525;
                int i, j;
                if ((safe_mod_func_int8_t_s_s(0x2BL, (((g_627 = l_623) != &g_628[4]) && ((safe_rshift_func_int8_t_s_u((&g_199 != ((*l_634) = &g_199)), 7)) || (safe_sub_func_uint16_t_u_u(p_53, (safe_rshift_func_int8_t_s_s((!l_643), 2)))))))))
                {
                    int l_647 = (-6L);
                    char * const l_660[3] = {&g_521,&g_521,&g_521};
                    int i;
                    for (l_642 = 16; (l_642 != 24); l_642 = safe_add_func_uint32_t_u_u(l_642, 9))
                    {
                        int * const l_646 = &l_549[0][1][0];
                        (*l_648) = ((((g_199 = l_647) < 1UL) || ((*l_646) > ((p_52 || (+((0xD7L >= 1UL) && p_54))) < (**g_629)))) >= 3L);
                    }
                    g_56 &= (*l_648);
                    for (g_97 = (-12); (g_97 >= (-5)); g_97++)
                    {
                        const short l_659 = 0x985EL;
                        l_642 = (safe_sub_func_int16_t_s_s(1L, (p_52 = (((safe_mul_func_int8_t_s_s(0x2DL, (g_199 & ((*l_648) < (p_53 = (safe_rshift_func_int8_t_s_s((((l_658 = &g_478) != &g_104) <= (g_478 = 0x3517L)), (*l_492)))))))) == (((p_52 && g_104) ^ g_497[0][5][0]) && p_54)) != (-1L)))));
                        if (l_659)
                            continue;
                        return l_660[0];



                    }
                    for (g_521 = 4; (g_521 >= 0); g_521 -= 1)
                    {
                        int i, j;
                        (*l_553) = l_635[g_521][(g_521 + 2)];

                        ;
                        (*l_492) &= (-1L);
                        (*l_648) = 7L;
                        return l_661;



                    }
                }
                else
                {
                    int *l_662 = &g_56;
                    unsigned short *l_670 = &l_551[7][5];
                    unsigned short **l_669 = &l_670;
                    (*l_553) = l_662;

                    ;
                    if ((l_649 || (l_649 & (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((*l_648), ((g_478 = (g_478 >= p_53)) || (safe_mul_func_int16_t_s_s(0x9348L, (((*l_669) = &g_497[1][1][0]) != l_671)))))), ((safe_add_func_uint32_t_u_u(((**l_553) &= (l_649 ^ p_53)), 0UL)) || p_54))))))
                    {
                        (**l_553) = 0x1DA26A96L;
                        (*l_648) = (*l_492);
                        l_662 = l_674;

                        ;
                    }
                    else
                    {
                        (*l_553) = (void*)0;

                        ;
                    }

                    ;
                    ;
                    ;
                    l_677 = g_675[8];

                    ;
                }

                ;
                ;
                for (g_28 = 0; (g_28 == (-14)); --g_28)
                {
                    int *l_685 = &g_56;
                    for (g_435 = 0; (g_435 != (-27)); g_435--)
                    {
                        if (l_682)
                            break;
                    }
                    for (g_478 = 16; (g_478 > 17); g_478 = safe_add_func_int16_t_s_s(g_478, 4))
                    {
                        l_685 = &l_642;

                        ;
                        return l_686;



                    }
                    if (p_53)
                        continue;
                }
                for (p_53 = 4; (p_53 == 7); ++p_53)
                {
                    if (p_52)
                        break;
                }
                l_705 = l_648;

                ;
            }

            ;
            ;
        }
        else
        {
            unsigned l_708 = 0x7764B607L;
            int l_758 = 0xDCBE3DC4L;
            int l_762 = 0xF62BD1EBL;
            (*l_492) |= (safe_lshift_func_uint8_t_u_u(l_708, 6));
            for (g_136 = 0; (g_136 != (-26)); g_136 = safe_sub_func_uint32_t_u_u(g_136, 9))
            {
                int *l_711 = &g_56;
                (*l_674) = (-3L);
                for (g_631 = 0; (g_631 <= 6); g_631 += 1)
                {
                    (*l_553) = l_711;

                    ;
                }
            }
            if (l_708)
            {
                int l_720 = 0L;
                (*l_705) = l_708;
                for (g_97 = 0; (g_97 >= (-15)); g_97--)
                {
                    for (p_52 = 27; (p_52 < 16); --p_52)
                    {
                        (*l_553) = &g_435;

                        ;
                        (*l_553) = &l_549[0][1][0];

                        ;
                        (**l_553) &= ((safe_add_func_uint32_t_u_u(0x90FDB992L, l_708)) != (safe_add_func_int32_t_s_s(p_53, l_708)));
                    }
                    l_720 = g_122;
                    for (g_521 = 2; (g_521 >= 0); g_521 -= 1)
                    {
                        int *l_721[8] = {&g_97,&g_97,&g_136,&g_97,&g_97,&g_136,&g_97,&g_97};
                        int i;
                        (*l_553) = l_721[5];

                        ;
                        if (l_708)
                            break;
                        (*l_705) |= l_708;
                    }
                }

                ;
            }
            else
            {
                unsigned short l_728 = 0x133AL;
                for (g_56 = (-5); (g_56 <= 1); ++g_56)
                {
                    short l_747 = 0x175DL;
                    unsigned short *l_751 = &l_728;
                    for (g_28 = 0; (g_28 <= 27); ++g_28)
                    {
                        l_728 ^= (safe_add_func_int16_t_s_s(p_54, (*g_676)));
                        (*l_674) = (l_708 & (p_53 == 3L));
                        (*l_553) = &l_549[0][1][0];

                        ;
                        if (p_53)
                            break;
                    }
                    if ((g_729 && ((safe_mul_func_uint16_t_u_u(0x5DBAL, (safe_rshift_func_uint8_t_u_s((((p_53 > (p_54 < l_708)) != ((safe_rshift_func_int8_t_s_u(((*l_661) = (safe_sub_func_uint8_t_u_u(p_53, 1UL))), 1)) | 0L)) | ((0x63L & p_54) < p_54)), 1)))) || p_54)))
                    {
                        return l_437;



                    }
                    else
                    {
                        if (p_54)
                            break;
                    }
                    if (p_53)
                    {
                        (*l_553) = (void*)0;

                        ;
                    }
                    else
                    {
                        unsigned short *l_744 = &l_682;
                        unsigned short **l_743 = &l_744;
                        (*l_674) |= (&g_402 == l_738);
                        (*l_674) ^= (((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_743 == (void*)0), (safe_sub_func_int32_t_s_s((&g_627 == &l_623), ((p_52 >= p_53) | (l_747 || (safe_mod_func_uint8_t_u_u(((g_56 == p_52) | 0xC63BL), l_750)))))))) >= p_54), g_23)) > 5UL) < p_53);
                        (*l_674) = p_52;
                    }
                    l_758 = (p_53 < ((0UL || ((((****g_627) = (((*l_751) &= g_97) != (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((void*)0 == &l_686) >= p_52), ((void*)0 != (*g_627)))), 0)), p_53)))) != 0x4DL) >= 0x1316L)) < p_53));
                }

                ;
            }

            ;
            for (g_631 = 0; (g_631 <= 2); g_631 += 1)
            {
                const int *l_760 = &l_549[0][1][0];
                int l_765 = (-3L);
                for (l_758 = 0; (l_758 <= 3); l_758 += 1)
                {
                    unsigned char l_778 = 0x0BL;
                    (*l_674) = g_28;
                    (*l_674) = l_758;
                    for (g_435 = 0; (g_435 <= 9); g_435 += 1)
                    {
                        const int **l_759 = (void*)0;
                        int i, j, k;
                        l_434[(g_631 + 6)][g_631][(g_631 + 2)] = l_434[(l_758 + 1)][g_631][(g_631 + 2)];
                        l_760 = l_434[(l_758 + 1)][g_631][(g_631 + 2)];

                        ;
                    }
                    (*l_492) ^= l_761;
                    for (g_573 = 0; (g_573 <= 4); g_573 += 1)
                    {
                        unsigned char ******l_772 = &g_770[4][6];
                        int i, j, k;
                        l_762 = ((*l_674) |= (g_122 & 4294967295UL));
                        l_434[(l_758 + 5)][g_631][l_758] = (void*)0;
                        (*l_674) ^= (safe_add_func_uint8_t_u_u(l_765, (((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(p_52, (((l_773 = ((*l_772) = g_770[4][6])) == &g_627) != (((((p_54 < (**g_629)) | g_136) & 0L) ^ l_778) || l_778)))) > g_136) >= 0x6BL), g_497[0][5][0])) == p_53) && 0x6C8DL)));
                    }
                }

                ;
            }

            ;
        }

        ;
        ;
        ;
        ;
        (*l_492) = p_53;
    }



    ;
    ;
    ;
    ;
    if (p_53)
    {
        (*l_492) |= 0L;
    }
    else
    {
        unsigned char l_783[9][4] = {{0x43L,1UL,0xA6L,0xC8L},{1UL,0x8CL,0x8CL,1UL},{1UL,0x6CL,0xA6L,0x8DL},{0x43L,1UL,1UL,0xACL},{0xC8L,0xA5L,0xC8L,0xACL},{1UL,1UL,0x43L,0x8DL},{0xA6L,0x6CL,1UL,1UL},{0x8CL,0x8CL,1UL,0xC8L},{0xA6L,1UL,0x43L,0x6CL}};
        int i, j;
        for (g_33 = 0; (g_33 <= 5); g_33 += 1)
        {
            const int * const l_780 = &g_435;
            const int **l_781 = &l_434[8][0][2];
            short ***l_782 = (void*)0;
            (*l_781) = l_780;
            l_783[2][3] &= (l_782 != (void*)0);
        }
        (*l_492) = p_53;
        l_549[0][1][0] |= ((*l_492) = l_784);
    }
    return l_437;




}







static short func_57(int * const p_58, char p_59)
{
    (*g_82) = 0x734453C1L;
    return g_28;
}







static int * const func_60(unsigned char * p_61, unsigned char p_62)
{
    unsigned short l_67[1];
    int *l_68 = &g_56;
    unsigned l_69 = 0x881F6C98L;
    int **l_208 = &g_82;
    unsigned char *l_209 = &g_33;
    unsigned char **l_210[7][3];
    unsigned l_261 = 0x61FF6260L;
    unsigned short l_268[10] = {0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL,0x2C0CL};
    unsigned char l_309 = 0x58L;
    short l_362 = 0x78A4L;
    char **l_394 = &g_27[8][2];
    char ***l_393 = &l_394;
    unsigned short *l_410 = (void*)0;
    int * const l_431[4] = {&g_56,&g_56,&g_56,&g_56};
    int i, j;
    for (i = 0; i < 1; i++)
        l_67[i] = 0x2BC1L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_210[i][j] = &l_209;
    }
    (*l_208) = func_63(((safe_add_func_uint32_t_u_u(g_28, ((*l_68) = l_67[0]))) > l_69));

    ;
    if (((&p_62 != (g_211[2] = l_209)) | (((safe_mod_func_uint32_t_u_u(((*l_68) > (safe_mul_func_int8_t_s_s(p_62, ((((safe_mod_func_int32_t_s_s(0L, (safe_mul_func_uint16_t_u_u(0x7E5CL, p_62)))) > ((*l_68) && g_56)) != p_62) && (*l_68))))), (*l_68))) ^ g_23) <= g_199)))
    {
        unsigned l_229[7][5][7] = {{{0UL,3UL,4294967290UL,0x706EA03DL,4294967295UL,4294967286UL,0UL},{4294967295UL,0xE223B170L,4UL,4294967295UL,4UL,0xE223B170L,4294967295UL},{0x2DC62B39L,4294967291UL,0x5BCD6136L,0x7D40DAFEL,0UL,0x9C1F599AL,4294967295UL},{4UL,0xAC26045AL,1UL,4294967295UL,4294967295UL,4294967295UL,0x8E0E8F7AL},{4294967295UL,0UL,0x5BCD6136L,0x7D40DAFEL,4294967289UL,0x30C64E29L,4294967290UL}},{{4294967286UL,1UL,4294967289UL,0xF84D04E9L,0x88D3ECBDL,6UL,4294967295UL},{0UL,0xE6AA4E5BL,4294967295UL,0xCC421F79L,0x9FAC3A7EL,0UL,0x3F0D202AL},{0x2ACE5422L,0x71F8D7BAL,1UL,0x42342475L,1UL,0xAE7F329CL,0xA6071FA6L},{0x3D356C0FL,0x889AAD8EL,0x7CD82FADL,0xE6AA4E5BL,0x113E7004L,0x9FAC3A7EL,0x706EA03DL},{4294967295UL,0xAC26045AL,0xE223B170L,4294967295UL,4294967286UL,4294967286UL,4294967295UL}},{{0UL,0x77E9CDB6L,0UL,0xA8CC6D7DL,0xD36743CCL,0x889AAD8EL,0x7D40DAFEL},{0x42342475L,4294967289UL,0x41C8523BL,9UL,0xE223B170L,4294967295UL,4294967295UL},{0xF07427AAL,0x7CD82FADL,0UL,0x9FAC3A7EL,0x3F0D202AL,0x889AAD8EL,0xFE5C3BC5L},{6UL,0UL,3UL,0x791ECBDFL,2UL,4294967286UL,0x2ACE5422L},{4294967295UL,0x7D40DAFEL,0x3F0D202AL,0x73A530DFL,0x77E9CDB6L,0x9FAC3A7EL,0x2DC62B39L}},{{0x88D3ECBDL,4294967295UL,4UL,4294967289UL,0xF84D04E9L,0xAE7F329CL,0x41C8523BL},{0x7D40DAFEL,0x54B7A8BAL,0x24748E89L,4294967289UL,4294967295UL,0UL,0x78391831L},{4UL,3UL,0UL,4294967295UL,4294967295UL,6UL,0xF84D04E9L},{0x706EA03DL,0x73A530DFL,4294967295UL,4294967295UL,0x73A530DFL,0x706EA03DL,4294967289UL},{5UL,3UL,0x88D3ECBDL,4UL,4294967295UL,1UL,0UL}},{{4294967289UL,4294967295UL,0xCC421F79L,0x2DC62B39L,4294967289UL,4294967289UL,1UL},{1UL,3UL,4294967286UL,4294967290UL,0UL,0x5EFED8C7L,5UL},{0x989D1740L,0x73A530DFL,0xFE5EA9AEL,0UL,0xE6AA4E5BL,4294967295UL,0xCC421F79L},{0x8E0E8F7AL,4294967286UL,0x88BF6269L,4294967295UL,0xA6071FA6L,0UL,0x71F8D7BAL},{4294967295UL,0x7D40DAFEL,0x78391831L,3UL,0UL,4294967286UL,0xD36743CCL}},{{4UL,0x9AC6BE41L,0UL,0xF84D04E9L,0x71F8D7BAL,4294967295UL,6UL},{0x24748E89L,0x9C1F599AL,4294967290UL,0x9FAC3A7EL,4294967288UL,0x9FAC3A7EL,4294967290UL},{4294967295UL,4294967295UL,0x9AC6BE41L,0x06D4112DL,4294967289UL,4UL,4294967295UL},{0UL,0UL,0x706EA03DL,0xD65041D7L,0x3F0D202AL,4294967295UL,0xA7BBCEECL},{4294967289UL,9UL,0x5EFED8C7L,0x8E0E8F7AL,4294967289UL,4294967295UL,4294967289UL}},{{0x345B2028L,0UL,0xD65041D7L,0x54B7A8BAL,4294967288UL,0xA8CC6D7DL,0x9FAC3A7EL},{4294967295UL,0x2ACE5422L,0xE8E867B3L,0x88BF6269L,9UL,0x2ACE5422L,4294967295UL},{4294967295UL,4294967286UL,4294967295UL,0xF91FE364L,0x5BCD6136L,0x7CD82FADL,3UL},{0x42342475L,0xAC26045AL,4UL,0x41C8523BL,0UL,1UL,0xF84D04E9L},{0x78391831L,4294967295UL,4294967289UL,0xD65041D7L,0xF91FE364L,0x9FAC3A7EL,0x9FAC3A7EL}}};
        int l_230 = 9L;
        unsigned char ***l_235 = &l_210[0][2];
        int l_248 = (-1L);
        char **l_265 = (void*)0;
        int *l_269 = (void*)0;
        char l_271[6];
        short l_285[6] = {0x9CD5L,0x9CD5L,0x9CD5L,0x9CD5L,0x9CD5L,0x9CD5L};
        unsigned char l_342 = 0x5CL;
        unsigned l_367 = 1UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_271[i] = 3L;
        g_56 = p_62;
    }
    else
    {
        const char *l_392[1];
        const char **l_391 = &l_392[0];
        const char ***l_390 = &l_391;
        int l_397 = 0x8DF8503DL;
        int l_400[4];
        short *l_407 = &g_104;
        int i;
        for (i = 0; i < 1; i++)
            l_392[i] = &g_28;
        for (i = 0; i < 4; i++)
            l_400[i] = (-7L);
        (*l_68) |= (l_390 != l_393);
lbl_428:
        (*l_208) = func_63(((safe_mod_func_uint32_t_u_u(((g_56 == (((l_397 != (l_400[2] |= (safe_add_func_uint16_t_u_u(g_33, (g_199 != p_62))))) == ((void*)0 == g_401)) >= ((g_28 >= (safe_rshift_func_uint8_t_u_u((((((*l_407) = (safe_rshift_func_int16_t_s_s(p_62, 7))) <= (*l_68)) & g_199) >= l_397), 7))) < 0xF1L))) | (***g_262)), p_62)) && 0xF8F3L));

        ;
        for (l_362 = 5; (l_362 >= 0); l_362 -= 1)
        {
            (*l_208) = &l_397;

            ;
        }

        ;
        for (g_199 = 0; (g_199 <= 0); g_199 += 1)
        {
            int *l_408 = &g_56;
            unsigned char **l_420 = &g_211[2];
            int l_424 = 0x13AC9E36L;
            if ((((*l_208) = &l_397) != l_408))
            {
                return l_408;



            }
            else
            {
                int l_409 = 0xAF806E90L;
                (*l_408) = l_409;
            }

            ;
            for (p_62 = 0; (p_62 <= 0); p_62 += 1)
            {
                const unsigned short *l_412[4][6][2] = {{{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413}},{{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413}},{{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413}},{{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413},{&g_413,&g_413}}};
                unsigned char **l_421[4] = {&g_211[2],&g_211[2],&g_211[2],&g_211[2]};
                int i, j, k;
                for (l_261 = 0; (l_261 <= 0); l_261 += 1)
                {
                    unsigned short **l_411 = &l_410;
                    (*l_408) = (((*l_411) = l_410) == (l_412[2][5][1] = (void*)0));
                }


                (*l_208) = l_408;

                ;
                (*g_82) = (safe_sub_func_uint16_t_u_u(g_136, (safe_add_func_int16_t_s_s(p_62, (safe_mod_func_uint8_t_u_u(((l_421[2] = l_420) == (void*)0), p_62))))));
                (*l_408) ^= (~(safe_lshift_func_uint8_t_u_s(l_424, 2)));
            }

            ;
            for (g_136 = 6; (g_136 != (-28)); g_136--)
            {
                int l_427[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_427[i] = 0x6E155AFDL;
                (**l_208) ^= l_427[0];
                (*l_408) = (*l_408);
                if (g_104)
                    goto lbl_428;
                for (g_33 = 0; (g_33 != 4); g_33 = safe_add_func_int16_t_s_s(g_33, 8))
                {
                    (*l_208) = &l_427[0];

                    ;
                    return &g_56;



                }
            }
        }
    }


    return l_431[1];


}







static int * func_63(unsigned short p_64)
{
    unsigned char *l_78 = (void*)0;
    int l_79 = (-1L);
    int l_87 = 0x31E92403L;
    int *l_107[2];
    char l_118[4][8] = {{4L,0xFFL,4L,0xFFL,4L,0xFFL,4L,0xFFL},{4L,0xFFL,4L,0xFFL,4L,0xFFL,4L,0xFFL},{4L,0xFFL,4L,0xFFL,4L,0xFFL,4L,0xFFL},{4L,0xFFL,4L,0xFFL,4L,0xFFL,4L,0xFFL}};
    unsigned char *l_121[3][8];
    char **l_123 = &g_27[6][1];
    char *l_125 = &g_23;
    char **l_124 = &l_125;
    unsigned l_168 = 0x49C42DECL;
    int l_203 = 0xCCFE4F01L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_107[i] = &g_97;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
            l_121[i][j] = (void*)0;
    }
    if ((safe_sub_func_uint32_t_u_u(p_64, ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((void*)0 == l_78), (l_79 > l_79))), 3)), 0)) <= ((!g_23) >= 0x9103153DL)))))
    {
        int *l_81 = (void*)0;
        int **l_80[10][6][4] = {{{&l_81,(void*)0,(void*)0,&l_81},{&l_81,&l_81,&l_81,(void*)0},{&l_81,&l_81,&l_81,(void*)0},{(void*)0,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81},{(void*)0,(void*)0,&l_81,&l_81}},{{(void*)0,&l_81,&l_81,(void*)0},{&l_81,&l_81,&l_81,(void*)0},{&l_81,&l_81,&l_81,&l_81},{&l_81,(void*)0,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,(void*)0}},{{&l_81,&l_81,&l_81,(void*)0},{&l_81,&l_81,&l_81,&l_81},{&l_81,(void*)0,&l_81,&l_81},{(void*)0,&l_81,&l_81,(void*)0},{(void*)0,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81}},{{(void*)0,(void*)0,&l_81,&l_81},{(void*)0,(void*)0,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,(void*)0},{&l_81,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,&l_81}},{{&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,(void*)0,&l_81},{&l_81,&l_81,&l_81,(void*)0},{(void*)0,&l_81,(void*)0,&l_81},{&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81}},{{&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,(void*)0},{&l_81,&l_81,&l_81,&l_81},{(void*)0,&l_81,(void*)0,&l_81},{&l_81,(void*)0,(void*)0,(void*)0},{&l_81,&l_81,&l_81,&l_81}},{{&l_81,&l_81,(void*)0,&l_81},{&l_81,(void*)0,&l_81,&l_81},{&l_81,&l_81,(void*)0,&l_81},{&l_81,&l_81,(void*)0,&l_81},{(void*)0,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81}},{{&l_81,&l_81,&l_81,&l_81},{&l_81,(void*)0,(void*)0,&l_81},{&l_81,&l_81,(void*)0,&l_81},{(void*)0,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,&l_81}},{{&l_81,&l_81,(void*)0,&l_81},{&l_81,(void*)0,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81},{&l_81,&l_81,(void*)0,&l_81},{&l_81,&l_81,&l_81,&l_81},{&l_81,(void*)0,&l_81,&l_81}},{{(void*)0,&l_81,&l_81,&l_81},{&l_81,&l_81,(void*)0,&l_81},{&l_81,&l_81,(void*)0,&l_81},{&l_81,&l_81,&l_81,&l_81},{(void*)0,&l_81,&l_81,&l_81},{&l_81,&l_81,&l_81,&l_81}}};
        int i, j, k;
        g_82 = &g_56;

        ;
        for (l_79 = 6; (l_79 >= 0); l_79 -= 1)
        {
            int l_83 = (-8L);
            int l_84 = 1L;
            g_82 = &l_79;

            ;
            for (g_23 = 0; (g_23 <= 3); g_23 += 1)
            {
                for (p_64 = 2; (p_64 <= 6); p_64 += 1)
                {
                    int i, j, k;
                    l_83 &= (*g_82);
                    l_84 = p_64;
                    for (g_33 = 1; (g_33 <= 6); g_33 += 1)
                    {
                        g_56 = (safe_mod_func_int16_t_s_s(g_28, g_56));
                    }
                }
            }
            for (l_83 = 6; (l_83 >= 0); l_83 -= 1)
            {
                unsigned char l_88[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_88[i] = 255UL;
                l_88[0] ^= (l_87 = 0x7B57B06EL);
                return &g_56;



            }
        }

        ;
    }
    else
    {
        int *l_108 = (void*)0;
        char **l_111 = &g_27[6][1];
        char ***l_112 = &l_111;
        int l_113 = (-1L);
        for (p_64 = 0; (p_64 <= 6); p_64 += 1)
        {
            int **l_89 = &g_82;
            unsigned char *l_90[1];
            int *l_93 = &g_56;
            char l_95 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_90[i] = &g_33;
            (*l_89) = &l_79;

            ;
            (*l_93) |= (((**l_89) &= 255UL) || (safe_mod_func_uint8_t_u_u(0xA6L, g_7)));
            for (l_79 = 0; (l_79 <= 6); l_79 += 1)
            {
                unsigned short l_94[4][10];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_94[i][j] = 65535UL;
                }
                for (l_87 = 0; (l_87 <= 6); l_87 += 1)
                {
                    int *l_96 = &g_97;
                    int l_105 = 0L;
                    if (((*l_96) = (l_95 ^= ((*l_93) = l_94[0][2]))))
                    {
                        char l_100 = 1L;
                        short *l_103[9][5] = {{&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,(void*)0,(void*)0,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,(void*)0,(void*)0,&g_104,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104},{&g_104,&g_104,(void*)0,(void*)0,&g_104},{&g_104,&g_104,&g_104,&g_104,&g_104}};
                        int i, j;
                        l_105 = (((((g_104 = (!((((~p_64) | (safe_mod_func_int32_t_s_s(l_100, (safe_add_func_uint16_t_u_u(p_64, l_79))))) == g_56) > 4294967290UL))) == p_64) ^ (((*l_96) = p_64) || g_7)) ^ l_100) != 0x9421085DL);
                        if (p_64)
                            goto lbl_126;
                    }
                    else
                    {
                        int *l_106 = (void*)0;
                        l_107[0] = l_106;
                        if ((*l_96))
                            break;
                        g_97 ^= (g_56 < (((0x5E1209EFL & l_94[3][5]) <= (**l_89)) <= g_104));
                        if ((*l_93))
                            continue;
                    }
                    return l_108;



                }


                return &g_56;



            }
        }


        for (l_79 = (-19); (l_79 <= (-27)); l_79 = safe_sub_func_int32_t_s_s(l_79, 1))
        {
            return &g_56;



        }
        (*l_112) = l_111;
        l_113 = p_64;
    }


lbl_138:
    g_97 |= p_64;
lbl_126:
    g_56 ^= ((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((l_118[0][2] <= ((safe_add_func_int16_t_s_s(0xDFB6L, 1L)) ^ ((g_122 ^= (g_33 = g_23)) != p_64))), (g_23 || (((*l_123) = &l_118[3][0]) != ((*l_124) = &g_23))))) || g_122), 0x62L)) || p_64);
    for (g_97 = 0; (g_97 != 1); g_97 = safe_add_func_int16_t_s_s(g_97, 6))
    {
        short *l_133[6][1] = {{&g_104},{&g_104},{&g_104},{&g_104},{&g_104},{&g_104}};
        const int l_137 = (-1L);
        int *l_152 = &g_136;
        int l_207[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_207[i][j] = 0x7EC68086L;
        }
        for (g_56 = 0; (g_56 != (-28)); g_56 = safe_sub_func_uint8_t_u_u(g_56, 6))
        {
            short l_148[10][8][3] = {{{(-3L),(-5L),0x36F8L},{0x53E7L,0x53E7L,(-3L)},{1L,0x53E7L,4L},{0xCF84L,(-5L),0L},{3L,(-10L),0L},{0xD61EL,0xCF84L,0L},{0x5279L,2L,4L},{0x6AACL,0x652AL,(-3L)}},{{0x6AACL,(-1L),0x36F8L},{0x5279L,1L,1L},{0xD61EL,3L,0x12B2L},{3L,1L,(-1L)},{0xCF84L,(-1L),9L},{1L,0x652AL,9L},{0x53E7L,2L,(-1L)},{(-3L),0xCF84L,0x12B2L}},{{0x652AL,(-10L),1L},{(-3L),(-5L),0x36F8L},{0x53E7L,0x53E7L,(-3L)},{1L,0x53E7L,4L},{0xCF84L,(-5L),0L},{3L,(-10L),0L},{0xD61EL,0xCF84L,0L},{0x5279L,2L,4L}},{{0x5279L,0xD61EL,0x4991L},{0x5279L,0xC6B0L,0L},{0x652AL,0x29DDL,0xB85FL},{0x53E7L,(-10L),4L},{(-10L),0x29DDL,0L},{(-3L),0xC6B0L,(-1L)},{0x29DDL,0xD61EL,(-1L)},{(-5L),1L,0L}},{{0x1F90L,(-3L),4L},{0xD61EL,(-1L),0xB85FL},{0x1F90L,3L,0L},{(-5L),(-5L),0x4991L},{0x29DDL,(-5L),(-4L)},{(-3L),3L,0x83F7L},{(-10L),(-1L),0x12B2L},{0x53E7L,(-3L),0x83F7L}},{{0x652AL,1L,(-4L)},{0x5279L,0xD61EL,0x4991L},{0x5279L,0xC6B0L,0L},{0x652AL,0x29DDL,0xB85FL},{0x53E7L,(-10L),4L},{(-10L),0x29DDL,0L},{(-3L),0xC6B0L,(-1L)},{0x29DDL,0xD61EL,(-1L)}},{{(-5L),1L,0L},{0x1F90L,(-3L),4L},{0xD61EL,(-1L),0xB85FL},{0x1F90L,3L,0L},{(-5L),(-5L),0x4991L},{0x29DDL,(-5L),(-4L)},{(-3L),3L,0x83F7L},{(-10L),(-1L),(-3L)}},{{0x97D6L,(-8L),0xD61EL},{0xBBDAL,(-4L),0x47BAL},{0x2565L,0x0B09L,(-10L)},{0x2565L,(-4L),0x652AL},{0xBBDAL,1L,1L},{0x97D6L,(-6L),0x1F90L},{(-6L),1L,0xCF84L},{(-8L),(-4L),0xC6B0L}},{{1L,0x0B09L,0xC6B0L},{0x98F6L,(-4L),0xCF84L},{0x310AL,(-8L),0x1F90L},{0x0B09L,0L,1L},{0x310AL,0x8C9FL,0x652AL},{0x98F6L,0x98F6L,(-10L)},{1L,0x98F6L,0x47BAL},{(-8L),0x8C9FL,0xD61EL}},{{(-6L),0L,(-3L)},{0x97D6L,(-8L),0xD61EL},{0xBBDAL,(-4L),0x47BAL},{0x2565L,0x0B09L,(-10L)},{0x2565L,(-4L),0x652AL},{0xBBDAL,1L,1L},{0x97D6L,(-6L),0x1F90L},{(-6L),1L,0xCF84L}}};
            int l_160[5];
            int **l_161 = &l_107[0];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_160[i] = 0x258E7943L;
            if (((((safe_sub_func_int32_t_s_s((&g_104 != l_133[3][0]), (g_136 = (safe_mod_func_uint32_t_u_u(g_122, p_64))))) >= (g_23 || ((~4UL) & p_64))) < (((254UL >= 252UL) < l_137) >= p_64)) == 0x06L))
            {
                int *l_142 = &l_87;
                int **l_153[8][7][3] = {{{&l_152,(void*)0,&g_82},{&l_142,&g_82,&l_107[0]},{&g_82,&g_82,&l_152},{&l_107[0],&g_82,&l_142},{&g_82,&l_107[0],&l_152},{&l_107[1],&l_107[1],&l_107[0]},{&l_107[0],&g_82,&l_107[0]}},{{&l_107[0],&l_142,&l_142},{&l_142,(void*)0,&l_107[0]},{(void*)0,&g_82,&l_107[0]},{&l_142,&l_107[1],&l_142},{&l_152,&l_107[0],&g_82},{&l_152,&l_152,&l_152},{&l_152,&l_152,&l_152}},{{(void*)0,&l_152,&l_152},{&l_142,&l_107[1],&g_82},{&l_142,&l_107[0],&l_107[0]},{&l_152,&l_142,&l_152},{&l_107[0],&l_107[0],&l_107[1]},{&l_142,&l_107[1],&l_152},{&g_82,&l_152,&l_107[0]}},{{&l_107[0],&l_152,&g_82},{(void*)0,&l_152,&l_107[0]},{&l_142,&l_107[0],&g_82},{&g_82,&l_107[1],&l_107[0]},{&l_107[1],&g_82,(void*)0},{&l_107[0],(void*)0,&g_82},{&l_107[0],&l_107[0],&g_82}},{{&l_107[0],(void*)0,&g_82},{&l_107[0],&g_82,&l_107[0]},{&l_107[0],&l_152,&l_152},{&l_107[0],&l_107[0],&l_107[0]},{&l_107[1],&l_152,&l_142},{&g_82,&l_142,(void*)0},{&l_142,&l_107[0],&l_152}},{{(void*)0,&l_107[0],&l_107[0]},{&l_107[0],&l_107[0],&l_142},{&g_82,&g_82,(void*)0},{&l_142,&l_107[0],&g_82},{&l_107[0],&l_142,&l_142},{(void*)0,&g_82,(void*)0},{&l_142,&g_82,&g_82}},{{&l_142,&l_142,&l_107[0]},{&l_152,&l_107[0],(void*)0},{(void*)0,&l_142,(void*)0},{&g_82,(void*)0,&l_152},{&g_82,&l_107[0],&l_142},{(void*)0,&g_82,&l_142},{&l_142,&l_142,&l_142}},{{&l_152,&l_107[0],&l_107[0]},{&l_142,(void*)0,&l_107[0]},{&l_142,(void*)0,&g_82},{&l_107[0],&l_107[0],(void*)0},{&l_107[1],&l_142,&g_82},{(void*)0,&g_82,&l_107[1]},{&l_107[0],&l_107[0],&l_152}}};
                int i, j, k;
                if (g_23)
                    goto lbl_138;
                if (p_64)
                    break;
                for (g_33 = 21; (g_33 > 41); g_33++)
                {
                    int **l_141 = &l_107[0];
                    (*l_141) = (void*)0;
                    (*l_141) = l_142;
                    for (g_23 = (-8); (g_23 < (-8)); g_23 = safe_add_func_uint32_t_u_u(g_23, 3))
                    {
                        char l_145[4][6][9] = {{{0xDDL,(-8L),7L,0xDFL,0x96L,7L,0x1FL,(-1L),2L},{(-1L),0x1FL,7L,0x96L,0xDFL,7L,(-8L),0xDDL,2L},{(-1L),0xE3L,7L,1L,1L,7L,0xE3L,(-1L),2L},{0xDDL,(-8L),7L,0xDFL,0x96L,7L,0x1FL,(-1L),2L},{(-1L),0x1FL,7L,0x96L,0xDFL,7L,(-8L),0xDDL,2L},{0xE3L,1L,0x53L,0xDDL,0xDDL,0x53L,1L,0xE3L,3L}},{{0x1FL,0x96L,0x53L,(-1L),(-1L),0x53L,0xDFL,(-8L),3L},{(-8L),0xDFL,0x53L,(-1L),(-1L),0x53L,0x96L,0x1FL,3L},{0xE3L,1L,0x53L,0xDDL,0xDDL,0x53L,1L,0xE3L,3L},{0x1FL,0x96L,0x53L,(-1L),(-1L),0x53L,0xDFL,(-8L),3L},{(-8L),0xDFL,0x53L,(-1L),(-1L),0x53L,0x96L,0x1FL,3L},{0xE3L,1L,0x53L,0xDDL,0xDDL,0x53L,1L,0xE3L,3L}},{{0x1FL,0x96L,0x53L,(-1L),(-1L),0x53L,0xDFL,(-8L),3L},{(-8L),0xDFL,0x53L,(-1L),(-1L),0x53L,0x96L,0x1FL,3L},{0xE3L,1L,0x53L,0xDDL,0xDDL,0x53L,1L,0xE3L,3L},{0x1FL,0x96L,0x53L,(-1L),(-1L),0x53L,0x43L,(-4L),0xDFL},{(-4L),0x43L,0x96L,1L,0L,0x96L,0x4FL,0xD3L,0xDFL},{0x3CL,0xF4L,0x96L,0x2FL,0x2FL,0x96L,0xF4L,0x3CL,0xDFL}},{{0xD3L,0x4FL,0x96L,0L,1L,0x96L,0x43L,(-4L),0xDFL},{(-4L),0x43L,0x96L,1L,0L,0x96L,0x4FL,0xD3L,0xDFL},{0x3CL,0xF4L,0x96L,0x2FL,0x2FL,0x96L,0xF4L,0x3CL,0xDFL},{0xD3L,0x4FL,0x96L,0L,1L,0x96L,0x43L,(-4L),0xDFL},{(-4L),0x43L,0x96L,1L,0L,0x96L,0x4FL,0xD3L,0xDFL},{0x3CL,0xF4L,0x96L,0x2FL,0x2FL,0x96L,0xF4L,0x3CL,0xDFL}}};
                        char *l_149 = (void*)0;
                        char *l_150 = &l_118[0][2];
                        int l_151 = 0xE818B1E2L;
                        int i, j, k;
                        l_151 &= (l_145[2][5][8] == (((safe_lshift_func_int16_t_s_u(g_33, (p_64 ^ ((*l_150) = l_148[2][6][1])))) < (*l_142)) != (g_97 >= p_64)));
                        (*l_142) = p_64;
                        return l_152;




                    }
                }
                g_82 = &l_87;

                ;
            }
            else
            {
                l_160[4] &= ((safe_mul_func_uint8_t_u_u(p_64, (((*l_125) ^= ((safe_rshift_func_uint16_t_u_u(65535UL, 12)) || l_148[2][6][1])) > (safe_mod_func_uint32_t_u_u((p_64 && (*l_152)), p_64))))) >= p_64);
            }
            (*l_161) = (void*)0;
            for (g_33 = 0; (g_33 < 51); g_33 = safe_add_func_uint8_t_u_u(g_33, 1))
            {
                if ((*l_152))
                {
                    (*l_152) = (safe_lshift_func_int8_t_s_s(1L, p_64));
                }
                else
                {
                    (*l_161) = &g_136;
                }
            }
            (*l_152) &= p_64;
        }
        (*l_152) = g_136;
        if ((safe_sub_func_int8_t_s_s(l_168, 4L)))
        {
            int l_175 = 0L;
            int l_182 = 0L;
            int l_197 = 0x5AEE717AL;
            int l_200 = (-1L);
            int **l_201 = &l_152;
            int **l_202 = &g_82;
            for (g_136 = 23; (g_136 >= (-29)); g_136 = safe_sub_func_int16_t_s_s(g_136, 1))
            {
                int l_176 = 0xD691CFF7L;
                int *l_181 = &g_56;
                for (p_64 = 0; (p_64 == 58); p_64 = safe_add_func_uint16_t_u_u(p_64, 2))
                {
                    for (l_168 = 0; (l_168 < 51); l_168 = safe_add_func_uint8_t_u_u(l_168, 5))
                    {
                        l_107[0] = &g_136;
                        l_176 ^= l_175;
                        return l_152;




                    }
                    for (g_122 = (-11); (g_122 < 33); g_122 = safe_add_func_uint8_t_u_u(g_122, 2))
                    {
                        int *l_179 = &l_79;
                        int **l_180[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_180[i] = &l_107[0];
                        l_181 = l_179;

                        ;
                    }
                }

                ;
                for (l_87 = 2; (l_87 >= 0); l_87 -= 1)
                {
                    int **l_193 = (void*)0;
                    int **l_194 = (void*)0;
                    int **l_195 = (void*)0;
                    int **l_196[2][3] = {{&l_107[1],&l_107[1],&l_107[1]},{&l_107[0],&l_107[0],&l_107[0]}};
                    char *l_198 = &l_118[3][7];
                    int i, j;
                    l_182 = (g_28 & (*l_181));
                }
            }
            (*l_202) = ((*l_201) = &g_97);

            ;
            ;
            l_203 &= (*g_82);
            return l_152;



        }
        else
        {
            unsigned l_206 = 8UL;
            g_56 = ((*l_152) = g_122);
            l_207[0][1] ^= (safe_sub_func_uint16_t_u_u((((*l_152) && (p_64 < l_206)) < g_136), g_122));
            (*l_152) = (*l_152);
        }
    }
    return &g_97;




}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_375[i][j], "g_375[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_378[i][j][k], "g_378[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_497[i][j][k], "g_497[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_804, "g_804", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_833[i][j], "g_833[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_883, "g_883", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_976[i], "g_976[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1153, "g_1153", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    transparent_crc(g_1188, "g_1188", print_hash_value);
    transparent_crc(g_1228, "g_1228", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1355[i], "g_1355[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1374[i][j], "g_1374[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1379[i], "g_1379[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1420[i], "g_1420[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
