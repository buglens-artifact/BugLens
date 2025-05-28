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
   const unsigned f0;
   unsigned f1;
   char f2;
   char * f3;
   int f4;
};


static int g_4[7][5][6] = {{{1L,5L,9L,0L,0xD3B0CF5AL,0L},{1L,0xC422D5FBL,0L,2L,0xC422D5FBL,0x2ABF7C2FL},{0x2ABF7C2FL,6L,(-10L),2L,0x124DC41FL,2L},{1L,0L,1L,0L,5L,0L},{1L,0xD816F93BL,0x76270E7AL,2L,0xD816F93BL,9L}},{{0x2ABF7C2FL,0x124DC41FL,0L,2L,0x16580849L,0L},{1L,0xD3B0CF5AL,0x2ABF7C2FL,0L,0L,(-10L)},{1L,(-1L),2L,2L,9L,0xBD850270L},{0x81C1D99EL,0L,0x57E3B6F9L,0x54668DACL,(-10L),0x38D06721L},{0xBD850270L,0L,0L,0xE229EDCAL,0x76270E7AL,(-1L)}},{{0xBD850270L,0x2ABF7C2FL,0xE229EDCAL,0x54668DACL,0x2ABF7C2FL,0x81C1D99EL},{0x81C1D99EL,(-10L),0x7626A9D9L,0x54668DACL,0L,0x54668DACL},{0xBD850270L,2L,0xBD850270L,0xE229EDCAL,0L,0x57E3B6F9L},{0xBD850270L,1L,0x38D06721L,0x54668DACL,1L,0L},{0x81C1D99EL,0L,(-1L),0x54668DACL,0L,0xE229EDCAL}},{{0xBD850270L,0x76270E7AL,0x81C1D99EL,0xE229EDCAL,2L,0x7626A9D9L},{0xBD850270L,9L,0x54668DACL,0x54668DACL,9L,0xBD850270L},{0x81C1D99EL,0L,0x57E3B6F9L,0x54668DACL,(-10L),0x38D06721L},{0xBD850270L,0L,0L,0xE229EDCAL,0x76270E7AL,(-1L)},{0xBD850270L,0x2ABF7C2FL,0xE229EDCAL,0x54668DACL,0x2ABF7C2FL,0x81C1D99EL}},{{0x81C1D99EL,(-10L),0x7626A9D9L,0x54668DACL,0L,0x54668DACL},{0xBD850270L,2L,0xBD850270L,0xE229EDCAL,0L,0x57E3B6F9L},{0xBD850270L,1L,0x38D06721L,0x54668DACL,1L,0L},{0x81C1D99EL,0L,(-1L),0x57E3B6F9L,1L,0x7626A9D9L},{0x54668DACL,0L,0xE229EDCAL,0x7626A9D9L,0L,0L}},{{0x54668DACL,0x76270E7AL,0x57E3B6F9L,0x57E3B6F9L,0x76270E7AL,0x54668DACL},{0xE229EDCAL,1L,0x81C1D99EL,0x57E3B6F9L,9L,(-1L)},{0x54668DACL,(-10L),0x38D06721L,0x7626A9D9L,0L,0xBD850270L},{0x54668DACL,0L,0x7626A9D9L,0x57E3B6F9L,0L,0xE229EDCAL},{0xE229EDCAL,9L,0L,0x57E3B6F9L,0x2ABF7C2FL,0x57E3B6F9L}},{{0x54668DACL,0L,0x54668DACL,0x7626A9D9L,(-10L),0x81C1D99EL},{0x54668DACL,2L,(-1L),0x57E3B6F9L,2L,0x38D06721L},{0xE229EDCAL,0x2ABF7C2FL,0xBD850270L,0x57E3B6F9L,1L,0x7626A9D9L},{0x54668DACL,0L,0xE229EDCAL,0x7626A9D9L,0L,0L},{0x54668DACL,0x76270E7AL,0x57E3B6F9L,0x57E3B6F9L,0x76270E7AL,0x54668DACL}}};
static unsigned char g_16 = 0UL;
static const char g_34 = 0x3AL;
static const char *g_33 = &g_34;
static unsigned short g_55 = 0x0456L;
static char g_58[7] = {0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL,0x2BL};
static int g_60 = 1L;
static short g_91[1][3][3] = {{{0x7233L,0x7233L,(-1L)},{0x7233L,0x7233L,(-1L)},{0x7233L,0x7233L,(-1L)}}};
static unsigned g_94 = 1UL;
static unsigned char g_126 = 0x58L;
static unsigned short g_129[6][10] = {{65532UL,5UL,0x1CFDL,65534UL,0xC446L,65533UL,65533UL,0xC446L,65534UL,0x1CFDL},{0xC446L,65534UL,65532UL,0x1CFDL,0x9104L,6UL,1UL,6UL,0x9104L,0x1CFDL},{0x1CFDL,65533UL,0x1CFDL,6UL,5UL,0x48DCL,1UL,1UL,0x48DCL,5UL},{65532UL,65534UL,65534UL,65532UL,0x1CFDL,0x9104L,6UL,1UL,6UL,0x9104L},{0x48DCL,0xC446L,0x1CFDL,0xC446L,0x48DCL,0UL,65534UL,6UL,6UL,65534UL},{1UL,0UL,65532UL,65532UL,0UL,1UL,5UL,65534UL,0x48DCL,65534UL}};
static int *g_182 = &g_4[5][4][4];
static int * const *g_181 = &g_182;
static short g_188 = 0xF819L;
static unsigned g_190 = 4294967295UL;
static unsigned short g_234 = 65532UL;
static char g_254 = 0xFAL;
static unsigned short *g_274 = &g_55;
static unsigned short ** const g_273[5][5] = {{(void*)0,(void*)0,&g_274,(void*)0,(void*)0},{&g_274,&g_274,&g_274,&g_274,&g_274},{(void*)0,(void*)0,&g_274,(void*)0,(void*)0},{&g_274,&g_274,&g_274,&g_274,&g_274},{(void*)0,(void*)0,&g_274,(void*)0,(void*)0}};
static unsigned g_289 = 0UL;
static short *g_309 = &g_188;
static short **g_308 = &g_309;
static char *g_324[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static char **g_323 = &g_324[2];
static union U0 g_328 = {4UL};
static int g_333 = (-10L);
static short g_336 = 0xFBC9L;
static unsigned short g_337 = 65531UL;
static unsigned short g_366 = 65534UL;
static unsigned g_386 = 0xAE2E0426L;
static int *g_402 = &g_4[3][4][0];
static union U0 *g_431[7][7][1] = {{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}},{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}},{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}},{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}},{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}},{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}},{{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328},{&g_328}}};
static union U0 **g_430 = &g_431[1][6][0];
static union U0 g_435 = {4294967295UL};
static unsigned char *g_455 = (void*)0;
static unsigned char **g_454 = &g_455;
static const char *g_486 = &g_435.f2;
static const char **g_485 = &g_486;
static int g_489[8][4] = {{0x5F0E4343L,0x411E09D3L,(-10L),(-10L)},{(-2L),(-2L),(-1L),0x411E09D3L},{0x411E09D3L,0x5F0E4343L,(-1L),0x5F0E4343L},{(-2L),0x5084A3BBL,(-10L),(-1L)},{0x5F0E4343L,0x5084A3BBL,0x5084A3BBL,0x5F0E4343L},{0x5084A3BBL,0x5F0E4343L,(-2L),0x411E09D3L},{0x5084A3BBL,(-2L),0x5084A3BBL,(-10L)},{0x5F0E4343L,0x411E09D3L,(-10L),(-10L)}};
static int g_491 = 0xCDE2B959L;
static unsigned char g_492 = 1UL;
static char g_501[9] = {1L,0L,1L,0L,1L,0L,1L,0L,1L};
static unsigned char g_511[8][1][3] = {{{0xC9L,254UL,254UL}},{{0x90L,0UL,249UL}},{{246UL,0x47L,0UL}},{{246UL,1UL,0xC9L}},{{0x90L,0UL,0x90L}},{{0xC9L,1UL,0x47L}},{{254UL,0UL,0x47L}},{{1UL,254UL,249UL}}};
static int **g_524 = (void*)0;
static int ***g_523 = &g_524;
static unsigned g_548 = 0x6EB5C0F2L;
static unsigned char g_552 = 0xF8L;
static unsigned *g_592 = &g_289;
static unsigned **g_591 = &g_592;
static unsigned ***g_590 = &g_591;
static const int g_600 = 3L;
static unsigned short g_658 = 0UL;
static unsigned g_673 = 4294967295UL;
static const unsigned char *g_677[7] = {&g_16,&g_16,&g_16,&g_16,&g_16,&g_16,&g_16};
static const unsigned char **g_676[2][1] = {{&g_677[5]},{&g_677[5]}};
static const unsigned char ***g_675 = &g_676[0][0];
static unsigned g_747[3] = {1UL,1UL,1UL};
static unsigned char g_790 = 0x35L;
static char g_824 = 0xDBL;
static unsigned g_825 = 0x9FDA726FL;
static int g_860[6] = {0xE27D63F6L,1L,1L,0xE27D63F6L,1L,1L};
static unsigned g_861 = 0x76982C6EL;
static int g_922[5] = {7L,7L,7L,7L,7L};
static unsigned g_924 = 4294967290UL;
static int g_931 = 0L;
static union U0 g_981 = {0x2FF8803EL};
static char g_988 = (-5L);
static char **g_992 = (void*)0;
static int g_1028 = 0x9EF3228FL;
static const int g_1034 = 1L;
static int ** const ***g_1057 = (void*)0;
static int **g_1097 = &g_182;
static int g_1101 = 0x33488B1BL;
static const unsigned short *g_1187 = &g_337;
static const unsigned short **g_1186 = &g_1187;
static unsigned char g_1191 = 251UL;
static unsigned g_1233[6][4][1] = {{{0x48983E79L},{0x48983E79L},{0x48983E79L},{0x48983E79L}},{{0x48983E79L},{0x48983E79L},{0x48983E79L},{0x48983E79L}},{{0x48983E79L},{0x48983E79L},{0x48983E79L},{0x48983E79L}},{{0x48983E79L},{0x48983E79L},{0x48983E79L},{0x48983E79L}},{{0x48983E79L},{0x48983E79L},{0x48983E79L},{0x48983E79L}},{{0x48983E79L},{0x48983E79L},{0x48983E79L},{0x48983E79L}}};
static short g_1242 = 1L;
static short g_1243 = 0xE531L;
static short g_1244[5] = {0xF4E8L,0xF4E8L,0xF4E8L,0xF4E8L,0xF4E8L};
static const union U0 g_1294[5] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
static unsigned short g_1303 = 65528UL;
static unsigned g_1320[1] = {0x1200D45CL};
static char g_1325 = 0L;
static int g_1326 = 1L;
static short g_1327 = (-6L);
static short g_1328[1] = {0xDF06L};
static unsigned g_1330[8][8] = {{0UL,0x3BA27B73L,4294967295UL,0x3BA27B73L,0UL,0x65420258L,0UL,0x3BA27B73L},{4UL,0x3BA27B73L,4UL,4UL,0UL,4UL,4UL,0x3BA27B73L},{0UL,4UL,4UL,0x3BA27B73L,4UL,4UL,0UL,4UL},{0UL,0x3BA27B73L,4294967295UL,0x3BA27B73L,0UL,0x65420258L,0UL,0x3BA27B73L},{4UL,0x3BA27B73L,4UL,4UL,0UL,4UL,4UL,0x3BA27B73L},{0UL,4UL,4UL,0x3BA27B73L,4UL,4UL,0UL,4UL},{0UL,0x3BA27B73L,4294967295UL,0x3BA27B73L,0UL,0x65420258L,0UL,0x3BA27B73L},{4UL,0x3BA27B73L,4UL,4UL,0UL,4UL,4UL,0x3BA27B73L}};
static short g_1380 = (-4L);
static unsigned char g_1381 = 0UL;
static unsigned g_1389[2] = {4294967290UL,4294967290UL};
static unsigned g_1394 = 0xBB68D750L;
static int g_1405 = 0x8DB89EE3L;
static unsigned g_1406 = 0x48A3A137L;
static int *g_1414 = &g_1028;
static unsigned g_1420 = 0xCF69D5A7L;
static unsigned g_1455 = 0UL;
static short g_1562 = 0x2F9CL;
static int g_1563 = 0L;
static unsigned char g_1565 = 1UL;
static int *g_1568 = (void*)0;
static const unsigned g_1600[6][5] = {{4294967289UL,4294967289UL,0xFE050306L,0UL,0xFE050306L},{4294967294UL,4294967294UL,0xD9F428A0L,0x70D40A95L,0xD9F428A0L},{4294967289UL,4294967289UL,0xFE050306L,0UL,0xFE050306L},{4294967294UL,4294967294UL,0xD9F428A0L,0x70D40A95L,0xD9F428A0L},{4294967289UL,4294967289UL,0xFE050306L,0UL,0xFE050306L},{4294967294UL,4294967294UL,0xD9F428A0L,0x70D40A95L,0xD9F428A0L}};
static unsigned g_1609 = 0x04EC08E2L;
static unsigned *g_1682[6][10] = {{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548},{&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548,&g_548}};
static unsigned **g_1681 = &g_1682[2][4];
static const union U0 **g_1766 = (void*)0;
static const union U0 ** const *g_1765[2][4] = {{&g_1766,&g_1766,&g_1766,&g_1766},{&g_1766,&g_1766,&g_1766,&g_1766}};
static const union U0 ** const **g_1764 = &g_1765[0][1];
static char g_1778 = (-5L);
static unsigned g_1780 = 4294967295UL;
static int ****g_1851 = (void*)0;
static int *****g_1850 = &g_1851;
static int *g_1890 = &g_333;
static char g_1927 = 0x3FL;
static unsigned short g_1930 = 0xF628L;
static unsigned short g_1968 = 0xA341L;



static int func_1(void);
static int * func_7(int p_8, const short p_9);
static unsigned char func_17(unsigned p_18, unsigned char p_19, unsigned short p_20, unsigned char p_21);
static short func_24(unsigned char * p_25);
static int func_26(int p_27, char p_28, const char * p_29);
static int func_30(const char * p_31, union U0 p_32);
static union U0 func_35(unsigned p_36, short p_37, int p_38, const unsigned char * p_39);
static const unsigned char func_43(unsigned p_44, char * p_45, int * p_46);
static char * func_47(int * const p_48);
static int * func_49(unsigned short p_50, char ** p_51, char ** p_52, char * p_53);
static int func_1(void)
{
    char * const l_3 = (void*)0;
    char * const *l_2 = &l_3;
    int l_1108 = 0xEAAE71BDL;
    unsigned char l_1794 = 255UL;
    int *l_1798 = &g_491;
    int *l_1799 = (void*)0;
    int *l_1800[4] = {&g_931,&g_931,&g_931,&g_931};
    unsigned l_1801[10][8][3] = {{{0x4A05A883L,4294967295UL,0x9581AF89L},{0x2C2F79B4L,0x2C2F79B4L,4294967293UL},{0xF227ABB3L,0UL,0xF3BFCE86L},{4294967293UL,0x08C89E2FL,1UL},{9UL,0x41F0280FL,4294967295UL},{4294967291UL,4294967293UL,1UL},{0x7CFF04A8L,4294967293UL,0xF3BFCE86L},{7UL,0x330EA55EL,4294967293UL}},{{0x484958D2L,4294967292UL,0x9581AF89L},{0xCE65A3E1L,0UL,0xCE65A3E1L},{0x6FADCF71L,1UL,0UL},{0UL,0x2C2F79B4L,0x330EA55EL},{4294967290UL,4294967292UL,1UL},{4294967293UL,2UL,0x126B0A64L},{4294967290UL,6UL,4294967295UL},{0UL,0x01BB0905L,0xDBD273D7L}},{{0x6FADCF71L,4294967293UL,4294967287UL},{0xCE65A3E1L,0UL,0xDBD273D7L},{0UL,0UL,0x2C9DAFBBL},{0UL,4294967293UL,0x08C89E2FL},{4294967290UL,4294967295UL,0x7CFF04A8L},{0xCE65A3E1L,4294967287UL,0x0B59C396L},{0xE667364AL,4294967295UL,4294967295UL},{0x1417C0D0L,4294967293UL,0UL}},{{0UL,0UL,0UL},{4294967287UL,0xDBD273D7L,0x7171D5C5L},{0xF227ABB3L,0x7DC60322L,0UL},{1UL,0x0B59C396L,0x126B0A64L},{0UL,4294967295UL,0x4A05A883L},{2UL,0UL,0x08C89E2FL},{4294967295UL,0xA20618ADL,0x4A05A883L},{0xEF86B3DAL,4294967287UL,0x126B0A64L}},{{4294967295UL,4294967292UL,0UL},{0x1417C0D0L,0x330EA55EL,0x7171D5C5L},{0UL,1UL,0UL},{7UL,1UL,0UL},{9UL,0x7DC60322L,4294967295UL},{0x949A95DFL,0x1417C0D0L,0x0B59C396L},{0UL,4294967295UL,0x7CFF04A8L},{0x949A95DFL,1UL,0x08C89E2FL}},{{9UL,4294967295UL,0x2C9DAFBBL},{7UL,4294967287UL,0xDBD273D7L},{0UL,0x95B1B59CL,0x7947820EL},{0x1417C0D0L,0x01BB0905L,4294967291UL},{4294967295UL,4294967292UL,0UL},{0xEF86B3DAL,0x126B0A64L,0x43A0AD92L},{4294967295UL,0x7DC60322L,0x9581AF89L},{2UL,0x126B0A64L,1UL}},{{0UL,4294967292UL,4294967295UL},{1UL,0x7171D5C5L,0x126B0A64L},{0x484958D2L,4UL,4294967295UL},{4294967293UL,4294967293UL,0UL},{0UL,0UL,4294967290UL},{0UL,0x43A0AD92L,1UL},{0x7947820EL,0UL,5UL},{1UL,0UL,1UL}},{{1UL,4294967292UL,4294967290UL},{1UL,4294967287UL,0UL},{9UL,4294967293UL,4294967295UL},{0x126B0A64L,0x2C2F79B4L,0x126B0A64L},{0UL,0x7DC60322L,0xE667364AL},{0UL,4294967293UL,4294967287UL},{0x9581AF89L,4294967291UL,4294967286UL},{0UL,4294967291UL,0x949A95DFL}},{{0x9581AF89L,0xE185C17CL,5UL},{0UL,7UL,0x08C89E2FL},{0UL,4294967292UL,4294967295UL},{0x126B0A64L,0xCE65A3E1L,0xCE65A3E1L},{9UL,4294967295UL,0UL},{1UL,0UL,0x126B0A64L},{1UL,0UL,0x7A276B5AL},{1UL,4294967293UL,7UL}},{{0x7947820EL,0UL,0xF227ABB3L},{0UL,0UL,2UL},{0UL,4294967295UL,5UL},{4294967293UL,0xCE65A3E1L,0UL},{0x484958D2L,4294967292UL,9UL},{0x1417C0D0L,7UL,0xEF86B3DAL},{9UL,0xE185C17CL,0UL},{0xDBD273D7L,4294967291UL,0x126B0A64L}}};
    union U0 **l_1804 = (void*)0;
    union U0 *l_1806 = &g_435;
    union U0 **l_1805 = &l_1806;
    union U0 *l_1807 = &g_328;
    const char *l_1817 = (void*)0;
    unsigned l_1948 = 9UL;
    int l_1965 = 0L;
    unsigned *** const l_1998 = &g_1681;
    int i, j, k;
    l_2 = l_2;
    for (g_4[3][4][0] = 0; (g_4[3][4][0] <= 12); g_4[3][4][0] = safe_add_func_uint8_t_u_u(g_4[3][4][0], 8))
    {
        int l_14 = 0xB4763523L;
        unsigned char *l_15 = &g_16;
        unsigned short *l_1792 = (void*)0;
        unsigned short *l_1793 = &g_658;
    }
    l_1801[9][1][2]++;
    if ((((*l_1805) = ((*g_430) = (*g_430))) == l_1807))
    {
        unsigned short l_1810 = 1UL;
        int l_1835 = 0xBE616573L;
        unsigned l_1844 = 0xC839B170L;
        short *l_1847 = &g_1562;
        int l_1865 = 0xCE277AC5L;
        for (g_289 = 28; (g_289 >= 43); g_289 = safe_add_func_int32_t_s_s(g_289, 9))
        {
            int l_1816 = 8L;
            int l_1838[8][8] = {{0x4387277CL,0xDAB487D7L,1L,0xC2F2F6F8L,1L,0xDAB487D7L,0L,1L},{0xDAB487D7L,(-2L),1L,0x9EBC157DL,0xE3E9F94DL,1L,0xC2F2F6F8L,0xC2F2F6F8L},{0L,1L,1L,1L,1L,0L,0L,0xE3E9F94DL},{0xE3E9F94DL,0x66895643L,0x45F1831BL,1L,0xC2F2F6F8L,0x9EBC157DL,0L,0xDAB487D7L},{0x45F1831BL,0x4387277CL,0xDAB487D7L,1L,0xDAB487D7L,0x4387277CL,0x45F1831BL,0xE3E9F94DL},{1L,0xDAB487D7L,(-2L),1L,0x9EBC157DL,0xE3E9F94DL,1L,0xC2F2F6F8L},{1L,(-2L),2L,0x9EBC157DL,0x9EBC157DL,2L,(-2L),1L},{1L,1L,0x4387277CL,0xC2F2F6F8L,0xDAB487D7L,(-2L),(-2L),0x66895643L}};
            int l_1863 = 0xFCD630CCL;
            int *l_1864[1][10][10] = {{{&g_333,(void*)0,(void*)0,&g_333,(void*)0,&l_1835,&l_1816,(void*)0,(void*)0,&l_1816},{&l_1835,&l_1816,(void*)0,(void*)0,&l_1816,&l_1835,(void*)0,&g_333,(void*)0,(void*)0},{&g_333,&l_1816,(void*)0,&g_333,&l_1816,&g_491,&l_1816,&g_333,(void*)0,&l_1816},{&g_333,(void*)0,(void*)0,&g_333,(void*)0,&g_4[6][2][1],(void*)0,&g_491,&g_491,(void*)0},{&g_4[6][2][1],(void*)0,&g_491,&g_491,(void*)0,&g_4[6][2][1],(void*)0,&l_1838[2][6],&g_491,(void*)0},{&g_1028,(void*)0,&l_1108,&l_1838[2][6],(void*)0,&g_1101,(void*)0,&l_1838[2][6],&l_1108,(void*)0},{&g_1028,(void*)0,&g_491,&l_1838[2][6],(void*)0,&g_4[6][2][1],(void*)0,&g_491,&g_491,(void*)0},{&g_4[6][2][1],(void*)0,&g_491,&g_491,(void*)0,&g_4[6][2][1],(void*)0,&l_1838[2][6],&g_491,(void*)0},{&g_1028,(void*)0,&l_1108,&l_1838[2][6],(void*)0,&g_1101,(void*)0,&l_1838[2][6],&l_1108,(void*)0},{&g_1028,(void*)0,&g_491,&l_1838[2][6],(void*)0,&g_4[6][2][1],(void*)0,&g_491,&g_491,(void*)0}}};
            int *** const *l_1869 = &g_523;
            int *** const **l_1870 = (void*)0;
            int *** const **l_1871 = &l_1869;
            int i, j, k;
            (*g_1414) &= l_1810;
        }
        (**g_1097) ^= (0x4BL >= (l_1835 == 0x25L));
        if (l_1835)
        {
            unsigned l_1874 = 0x3DC90C54L;
            (*g_1097) = &l_1108;
            ++l_1874;
            (**g_181) &= 0x4B51B017L;
            (*l_1798) = 0L;
        }
        else
        {
            unsigned short l_1877 = 65527UL;
            int l_1879 = 6L;
            int l_1881 = 0xBEE009F1L;
            (*g_1097) = (void*)0;
            for (g_190 = 0; g_190 < 6; g_190 += 1)
            {
                g_860[g_190] = (-10L);
            }
            for (g_1406 = 0; (g_1406 <= 3); g_1406 += 1)
            {
                char l_1878 = 0x1DL;
                int l_1880 = 0xFCE8F5C7L;
                int l_1882[5][5][5] = {{{(-2L),0L,(-2L),0x48CE6138L,6L},{0x51684F9DL,(-1L),(-1L),0x51684F9DL,(-1L)},{6L,0L,(-5L),0L,6L},{(-1L),0x51684F9DL,(-1L),(-1L),0x51684F9DL},{6L,0x48CE6138L,(-2L),0L,(-2L)}},{{0x51684F9DL,0x51684F9DL,(-5L),0x51684F9DL,0x51684F9DL},{(-2L),0L,(-2L),0x48CE6138L,6L},{0x51684F9DL,(-1L),(-1L),0x51684F9DL,(-1L)},{6L,0L,(-5L),0L,6L},{(-1L),0x51684F9DL,(-1L),(-1L),0x51684F9DL}},{{6L,0x48CE6138L,(-2L),0L,(-2L)},{0x51684F9DL,0x51684F9DL,(-5L),0x51684F9DL,0x51684F9DL},{(-2L),0L,(-2L),0x48CE6138L,6L},{0x51684F9DL,(-1L),(-1L),0x51684F9DL,(-1L)},{6L,0L,(-5L),0L,6L}},{{(-1L),0x51684F9DL,(-1L),(-1L),0x51684F9DL},{6L,0x48CE6138L,(-2L),0L,(-2L)},{0x51684F9DL,0x51684F9DL,(-5L),0x51684F9DL,0x51684F9DL},{(-2L),0L,(-2L),0x48CE6138L,6L},{0x51684F9DL,(-1L),(-1L),0x51684F9DL,(-1L)}},{{6L,0L,(-5L),0L,6L},{(-1L),0x51684F9DL,(-1L),(-1L),0x51684F9DL},{6L,0x48CE6138L,(-2L),0L,(-2L)},{0x51684F9DL,0x51684F9DL,(-5L),0x51684F9DL,0x51684F9DL},{(-2L),0L,(-2L),0x48CE6138L,6L}}};
                unsigned char l_1883 = 0UL;
                int i, j, k;
                for (g_333 = 0; (g_333 <= 3); g_333 += 1)
                {
                    (*g_402) = l_1877;
                    l_1879 = l_1878;
                    if (l_1878)
                        break;
                    for (g_16 = 0; (g_16 <= 0); g_16 += 1)
                    {
                        int i, j, k;
                        (*g_1414) = l_1801[(g_333 + 3)][(g_16 + 7)][(g_16 + 1)];
                    }
                }
                l_1883--;
                for (g_924 = 0; (g_924 <= 2); g_924 += 1)
                {
                    int l_1886 = 0x6B37DB3CL;
                    (*l_1798) |= 0L;
                    (*l_1798) &= l_1886;
                    for (g_552 = 0; (g_552 <= 3); g_552 += 1)
                    {
                        (*l_1798) = l_1886;
                        (*g_1097) = &l_1108;
                        g_1186 = (void*)0;
                    }
                }
            }
            for (g_1405 = 12; (g_1405 >= (-9)); g_1405--)
            {
                return g_435.f4;
            }
        }
        (*g_1097) = &l_1108;
    }
    else
    {
        unsigned short l_1889 = 0x884CL;
        int *l_1891 = &g_4[4][2][0];
        int * const l_1899 = &g_1101;
        int l_1929 = 0x7429FA82L;
        int l_1942[8] = {1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-1L)};
        char *l_1953 = &g_981.f2;
        const int *** const ***l_1960 = (void*)0;
        int i;
        if (l_1889)
        {
            (*g_1097) = (*g_1097);
            l_1891 = ((*g_1097) = g_1890);
            (**g_1097) = (*g_402);
        }
        else
        {
            int l_1892 = 0xC855B399L;
            int l_1941 = 2L;
            unsigned short l_1943 = 0xD901L;
            int l_1946 = (-1L);
            unsigned short l_1975 = 0x08BEL;
            int l_1988 = 9L;
            int l_1989 = 0x72A4A7D4L;
            int l_1991 = 0xA4248101L;
            int l_1993 = 0xB0909803L;
            unsigned l_1995 = 0x51205CEEL;
            const unsigned l_2002 = 0xF2BFD79DL;
            unsigned char l_2003 = 0x58L;
            int **l_2004 = &l_1799;
            if (((**g_485) > ((*l_1891) = l_1892)))
            {
                int **l_1900 = &l_1800[2];
                short *l_1905 = &g_1328[0];
                char l_1928 = (-1L);
                for (g_825 = 21; (g_825 != 45); g_825++)
                {
                    (*l_1891) ^= l_1892;
                }
                (*l_1798) = (safe_div_func_int32_t_s_s((*l_1891), ((*g_1414) = (*l_1891))));
                for (g_988 = 16; (g_988 > (-18)); g_988--)
                {
                    int l_1910 = 1L;
                    for (g_658 = 0; (g_658 != 11); ++g_658)
                    {
                        unsigned char *l_1925 = &l_1794;
                        const int l_1926 = 0xDB47A44FL;
                        (**g_1097) = l_1910;
                        (*g_1890) &= ((void*)0 == &g_1851);
                        (*g_1890) = (((*g_1414) != 1UL) && (safe_mod_func_int16_t_s_s(0x1AD8L, (safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((((((((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((*g_592) && (***g_590)), l_1892)), 12)) && ((*l_1925) = l_1910)) & (l_1892 >= l_1926)) <= g_1927) <= (*l_1899)) || 255UL) | (**g_308)) < (*l_1891)) != (**g_1186)), (**l_1900))), 0L)) <= (*l_1891)), (*l_1899))))));
                    }
                    if (l_1928)
                    {
                        g_1930--;
                    }
                    else
                    {
                        (*l_1900) = &l_1929;
                    }
                    (*g_1890) = (safe_lshift_func_uint16_t_u_s((**l_1900), (safe_add_func_uint8_t_u_u(0x5BL, 0x5DL))));
                    for (l_1794 = 0; (l_1794 < 59); l_1794 = safe_add_func_int8_t_s_s(l_1794, 1))
                    {
                        int **l_1939 = (void*)0;
                        int **l_1940 = &l_1798;
                        short l_1947[6][2][4] = {{{0x16E4L,0xA287L,9L,0x3981L},{1L,(-9L),1L,0x3981L}},{{0xECCFL,0xA287L,0x1296L,(-9L)},{0xECDBL,1L,7L,1L}},{{0xA287L,0xBDC8L,1L,(-1L)},{0xCC4FL,0x16E4L,0xBDC8L,0xCC4FL}},{{0x16E4L,1L,0L,0xECDBL},{0x16E4L,0xECCFL,0xBDC8L,0x3981L}},{{0xCC4FL,0xECDBL,1L,1L},{0xA287L,0xA287L,7L,0xECDBL}},{{0xECDBL,0xCC4FL,0x1296L,1L},{0xECCFL,0x16E4L,1L,0x1296L}}};
                        int **l_1954 = &g_182;
                        int i, j, k;
                        (*l_1940) = (*g_181);
                        l_1943--;
                        ++l_1948;
                        (**l_1940) = ((safe_rshift_func_int16_t_s_s((*g_309), 1)) < (0x87L > (l_1953 != ((*g_323) = func_47(((*l_1954) = func_7((*g_1414), (**g_308))))))));
                    }
                }
            }
            else
            {
                int ******l_1959 = &g_1850;
                const int *** const *l_1964 = (void*)0;
                const int *** const **l_1963 = &l_1964;
                const int *** const ***l_1962 = &l_1963;
                int l_1967 = (-1L);
                for (g_1609 = 18; (g_1609 >= 51); ++g_1609)
                {
                    (*g_1890) = (*l_1899);
                    return g_1927;
                }
                for (g_861 = 0; (g_861 <= 8); g_861 += 1)
                {
                    const int *** const ****l_1961[8][7] = {{&l_1960,&l_1960,(void*)0,&l_1960,&l_1960,&l_1960,&l_1960},{(void*)0,&l_1960,(void*)0,&l_1960,&l_1960,(void*)0,&l_1960},{&l_1960,&l_1960,(void*)0,(void*)0,&l_1960,&l_1960,&l_1960},{(void*)0,&l_1960,&l_1960,(void*)0,&l_1960,(void*)0,&l_1960},{&l_1960,&l_1960,&l_1960,(void*)0,&l_1960,&l_1960,&l_1960},{&l_1960,&l_1960,&l_1960,&l_1960,&l_1960,(void*)0,&l_1960},{&l_1960,&l_1960,&l_1960,(void*)0,(void*)0,&l_1960,&l_1960},{&l_1960,&l_1960,&l_1960,&l_1960,&l_1960,&l_1960,&l_1960}};
                    int l_1966 = 0x803CA56AL;
                    int i, j;
                    (*g_1890) = (!(*l_1891));
                }
            }
            if ((safe_mod_func_int16_t_s_s((l_1941 & (g_1565--)), ((*g_274) = l_1975))))
            {
                unsigned char l_1976 = 0x21L;
                --l_1976;
                return g_94;
            }
            else
            {
                union U0 *l_1981 = (void*)0;
                int l_1987 = 0x3E2E1FEEL;
                int l_1990 = (-2L);
                int l_1994 = 0x267418C1L;
                for (g_1563 = 0; (g_1563 <= 13); g_1563++)
                {
                    unsigned l_1982 = 0xAA734297L;
                    int l_1986[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1986[i] = 0L;
                    l_1981 = ((*g_430) = (*g_430));
                    for (g_988 = 3; (g_988 <= 8); g_988 += 1)
                    {
                        int *l_1985 = &g_491;
                        int l_1992 = 0xF0EE20A9L;
                        int l_1999 = (-10L);
                        int i;
                        ++l_1982;
                        l_1985 = func_7(g_501[g_988], l_1941);
                        l_1995--;
                        (*l_1899) = ((l_1998 != (void*)0) < l_1999);
                    }
                    for (l_1990 = 0; (l_1990 != (-11)); --l_1990)
                    {
                        (**g_1097) = 0xC08F6845L;
                        (*g_1097) = func_7((*g_1414), l_2002);
                    }
                }
                (*l_1891) = l_2003;
            }
            (*l_2004) = (*g_181);
        }
        (*g_1097) = &l_1929;
    }
    return g_600;
}







static int * func_7(int p_8, const short p_9)
{
    int *l_1795 = &g_333;
    int **l_1796 = (void*)0;
    int **l_1797 = &g_182;
    (*l_1795) = (-2L);
    (*l_1797) = l_1795;
    return &g_4[3][4][0];
}







static unsigned char func_17(unsigned p_18, unsigned char p_19, unsigned short p_20, unsigned char p_21)
{
    char l_1111[7];
    short *l_1112 = (void*)0;
    short *l_1113[8][5] = {{&g_336,&g_91[0][1][1],&g_336,&g_188,&g_91[0][1][1]},{&g_336,&g_91[0][2][0],&g_188,&g_91[0][1][1],&g_188},{&g_188,&g_188,&g_91[0][0][2],&g_336,&g_336},{&g_188,&g_188,&g_336,&g_336,&g_336},{&g_336,&g_188,&g_91[0][1][1],&g_188,&g_188},{&g_336,&g_188,&g_188,&g_336,&g_188},{&g_91[0][1][1],&g_188,&g_188,&g_336,&g_336},{&g_336,&g_91[0][2][0],&g_91[0][1][1],&g_336,&g_188}};
    int l_1114 = 0xDCA25BD6L;
    unsigned short l_1137 = 4UL;
    union U0 l_1155 = {0UL};
    unsigned char l_1157 = 6UL;
    unsigned char l_1171 = 1UL;
    const unsigned short **l_1185 = (void*)0;
    int l_1232[9][3][4] = {{{9L,9L,(-5L),9L},{9L,0xDE481003L,0xDE481003L,9L},{0xDE481003L,9L,0xDE481003L,0xDE481003L}},{{9L,9L,(-5L),9L},{9L,0xDE481003L,0xDE481003L,9L},{0xDE481003L,9L,0xDE481003L,0xDE481003L}},{{9L,9L,(-5L),9L},{9L,0xDE481003L,0xDE481003L,9L},{0xDE481003L,9L,0xDE481003L,0xDE481003L}},{{9L,9L,(-5L),0xDE481003L},{0xDE481003L,(-5L),(-5L),0xDE481003L},{(-5L),0xDE481003L,(-5L),(-5L)}},{{0xDE481003L,0xDE481003L,9L,0xDE481003L},{0xDE481003L,(-5L),(-5L),0xDE481003L},{(-5L),0xDE481003L,(-5L),(-5L)}},{{0xDE481003L,0xDE481003L,9L,0xDE481003L},{0xDE481003L,(-5L),(-5L),0xDE481003L},{(-5L),0xDE481003L,(-5L),(-5L)}},{{0xDE481003L,0xDE481003L,9L,0xDE481003L},{0xDE481003L,(-5L),(-5L),0xDE481003L},{(-5L),0xDE481003L,(-5L),(-5L)}},{{0xDE481003L,0xDE481003L,9L,0xDE481003L},{0xDE481003L,(-5L),(-5L),0xDE481003L},{(-5L),0xDE481003L,(-5L),(-5L)}},{{0xDE481003L,0xDE481003L,9L,0xDE481003L},{0xDE481003L,(-5L),(-5L),0xDE481003L},{(-5L),0xDE481003L,(-5L),(-5L)}}};
    short * const l_1241[1][8] = {{&g_1242,&g_1242,&g_1242,&g_1242,&g_1242,&g_1242,&g_1242,&g_1242}};
    short * const *l_1240[7][5][5] = {{{&l_1241[0][7],(void*)0,&l_1241[0][0],&l_1241[0][7],&l_1241[0][2]},{(void*)0,&l_1241[0][3],&l_1241[0][3],&l_1241[0][0],&l_1241[0][3]},{&l_1241[0][4],&l_1241[0][0],(void*)0,&l_1241[0][3],(void*)0},{&l_1241[0][0],&l_1241[0][3],&l_1241[0][3],&l_1241[0][6],&l_1241[0][0]},{&l_1241[0][0],&l_1241[0][3],&l_1241[0][7],&l_1241[0][2],&l_1241[0][7]}},{{&l_1241[0][3],&l_1241[0][3],&l_1241[0][4],(void*)0,&l_1241[0][3]},{(void*)0,&l_1241[0][3],&l_1241[0][5],&l_1241[0][7],&l_1241[0][2]},{&l_1241[0][4],&l_1241[0][7],(void*)0,&l_1241[0][7],(void*)0},{&l_1241[0][6],&l_1241[0][3],&l_1241[0][3],&l_1241[0][0],&l_1241[0][3]},{&l_1241[0][3],&l_1241[0][3],&l_1241[0][6],&l_1241[0][3],&l_1241[0][1]}},{{&l_1241[0][1],&l_1241[0][3],&l_1241[0][3],(void*)0,&l_1241[0][3]},{&l_1241[0][6],&l_1241[0][3],&l_1241[0][3],&l_1241[0][4],&l_1241[0][7]},{&l_1241[0][3],&l_1241[0][3],(void*)0,&l_1241[0][3],&l_1241[0][3]},{(void*)0,&l_1241[0][3],&l_1241[0][3],&l_1241[0][1],&l_1241[0][3]},{&l_1241[0][3],&l_1241[0][7],&l_1241[0][3],&l_1241[0][1],&l_1241[0][3]}},{{&l_1241[0][3],(void*)0,&l_1241[0][7],&l_1241[0][3],(void*)0},{&l_1241[0][7],(void*)0,&l_1241[0][7],&l_1241[0][4],(void*)0},{&l_1241[0][3],(void*)0,&l_1241[0][3],(void*)0,&l_1241[0][3]},{&l_1241[0][3],(void*)0,&l_1241[0][3],&l_1241[0][3],(void*)0},{&l_1241[0][2],&l_1241[0][7],&l_1241[0][3],&l_1241[0][0],&l_1241[0][3]}},{{&l_1241[0][3],(void*)0,&l_1241[0][3],&l_1241[0][7],&l_1241[0][2]},{&l_1241[0][7],&l_1241[0][3],&l_1241[0][6],&l_1241[0][7],(void*)0},{&l_1241[0][3],&l_1241[0][1],&l_1241[0][3],(void*)0,&l_1241[0][3]},{&l_1241[0][1],(void*)0,&l_1241[0][3],&l_1241[0][1],&l_1241[0][0]},{&l_1241[0][1],&l_1241[0][6],(void*)0,&l_1241[0][7],&l_1241[0][7]}},{{&l_1241[0][3],&l_1241[0][7],&l_1241[0][3],&l_1241[0][3],(void*)0},{(void*)0,&l_1241[0][7],&l_1241[0][0],&l_1241[0][3],&l_1241[0][7]},{&l_1241[0][3],&l_1241[0][0],(void*)0,&l_1241[0][3],(void*)0},{&l_1241[0][7],&l_1241[0][6],(void*)0,&l_1241[0][7],&l_1241[0][4]},{&l_1241[0][3],&l_1241[0][3],&l_1241[0][0],&l_1241[0][3],&l_1241[0][1]}},{{&l_1241[0][5],&l_1241[0][3],&l_1241[0][3],&l_1241[0][3],&l_1241[0][3]},{&l_1241[0][0],&l_1241[0][3],(void*)0,&l_1241[0][3],&l_1241[0][3]},{(void*)0,&l_1241[0][7],&l_1241[0][3],&l_1241[0][7],(void*)0},{&l_1241[0][6],&l_1241[0][0],&l_1241[0][5],&l_1241[0][3],&l_1241[0][7]},{&l_1241[0][0],&l_1241[0][4],&l_1241[0][7],&l_1241[0][6],&l_1241[0][3]}}};
    unsigned l_1277[7] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL};
    int l_1286 = 0L;
    const union U0 *l_1293 = &g_1294[0];
    unsigned l_1333 = 0x3056AB11L;
    unsigned l_1353 = 0xF7A59F8AL;
    int l_1402 = 0x1C6AC5BBL;
    unsigned char **l_1416 = &g_455;
    int *l_1425[6] = {&g_4[3][4][0],&l_1114,&l_1114,&g_4[3][4][0],&l_1114,&l_1114};
    char l_1426 = 0x2DL;
    unsigned l_1482 = 0x8AEDFA1DL;
    unsigned short l_1510 = 0xF23BL;
    unsigned char l_1515[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    short l_1577 = 0x4533L;
    const unsigned l_1584 = 2UL;
    unsigned char l_1585 = 3UL;
    unsigned l_1588 = 4294967295UL;
    union U0 ***l_1628 = &g_430;
    int *l_1657 = &g_931;
    int *** const l_1673 = (void*)0;
    char **l_1707[7] = {&g_324[6],&g_324[6],&g_324[6],&g_324[6],&g_324[6],&g_324[6],&g_324[6]};
    unsigned l_1769 = 0x85738EECL;
    unsigned char l_1791[4] = {0xE7L,0xE7L,0xE7L,0xE7L};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_1111[i] = 0x3AL;
    if ((safe_mod_func_int16_t_s_s((l_1114 = l_1111[0]), 0xE7B2L)))
    {
        union U0 l_1126[9][8] = {{{0xFC7F6633L},{0x9550F2F2L},{0x9550F2F2L},{0x6835815BL},{0x9550F2F2L},{4294967293UL},{0xAF11F06CL},{0xFC7F6633L}},{{0x7C3989B3L},{0x6835815BL},{0UL},{0xAF11F06CL},{0UL},{0x6835815BL},{0x7C3989B3L},{0x73399B4BL}},{{0UL},{0x6835815BL},{0x7C3989B3L},{0x73399B4BL},{4294967293UL},{4294967293UL},{0x73399B4BL},{0x7C3989B3L}},{{4294967293UL},{4294967293UL},{0x6835815BL},{0x9550F2F2L},{4294967293UL},{0xAF11F06CL},{0xFC7F6633L},{0xAF11F06CL}},{{0UL},{0x7C3989B3L},{0x9550F2F2L},{0x7C3989B3L},{0UL},{1UL},{4294967293UL},{0xAF11F06CL}},{{0x7C3989B3L},{4294967293UL},{0xFC7F6633L},{0x9550F2F2L},{0x9550F2F2L},{0xFC7F6633L},{4294967293UL},{0x7C3989B3L}},{{0x6835815BL},{1UL},{0xFC7F6633L},{0x73399B4BL},{4294967293UL},{0UL},{4294967293UL},{0x73399B4BL}},{{0x9550F2F2L},{4294967295UL},{0x9550F2F2L},{0xAF11F06CL},{0x73399B4BL},{0UL},{0xFC7F6633L},{0xFC7F6633L}},{{0xFC7F6633L},{1UL},{0x6835815BL},{0x6835815BL},{1UL},{0xFC7F6633L},{0x73399B4BL},{4294967293UL}}};
        int l_1146 = 0x12F0AFD5L;
        unsigned l_1166 = 4294967294UL;
        int l_1189 = 6L;
        unsigned * const *l_1210 = &g_592;
        unsigned char l_1211 = 0UL;
        const char *l_1216 = &g_824;
        short ** const *l_1224[5];
        int l_1230[1][1][4];
        short **l_1238 = &l_1113[6][2];
        short * const *l_1239 = &l_1113[6][2];
        char ***l_1261 = (void*)0;
        int ****l_1274 = &g_523;
        int *****l_1273 = &l_1274;
        unsigned char l_1288[9] = {0xF8L,0xFEL,0xFEL,0xF8L,0xFEL,0xFEL,0xF8L,0xFEL,0xFEL};
        int *l_1305 = &g_1028;
        const char *l_1357 = (void*)0;
        char **l_1363[8][1];
        int *l_1365 = &g_931;
        unsigned short ** const l_1368 = &g_274;
        short l_1385 = (-3L);
        short l_1403[5][6] = {{0x9F46L,0x2775L,0x2775L,0x9F46L,0x18BBL,0xA877L},{(-1L),0x2775L,0x18BBL,(-1L),0x18BBL,0x2775L},{0xF1B6L,0x2775L,0xA877L,0xF1B6L,0x18BBL,1L},{0x18BBL,0x85EBL,0x85EBL,0x18BBL,1L,1L},{0x2775L,0x85EBL,1L,0x2775L,1L,0x85EBL}};
        char l_1451[8][10][3] = {{{0x3BL,0xC8L,4L},{(-2L),5L,(-8L)},{0x39L,0xC9L,0xC8L},{0xF3L,(-4L),(-6L)},{0x9CL,0xABL,0xD9L},{3L,(-1L),(-1L)},{0x6EL,9L,0xD9L},{0x5FL,0x8DL,(-6L)},{0x01L,9L,0xC8L},{1L,1L,(-8L)}},{{1L,0x1DL,4L},{0xFFL,(-1L),(-8L)},{(-1L),4L,9L},{0xFFL,0x3DL,0xD1L},{1L,0x03L,0x03L},{1L,(-8L),(-4L)},{0x01L,0L,0xB0L},{0x5FL,0xB0L,0x50L},{0x6EL,(-2L),0xC9L},{3L,0xB0L,(-1L)}},{{0x9CL,0L,9L},{0xF3L,(-8L),0xB0L},{0x39L,0x03L,0x7AL},{(-2L),0x3DL,(-1L)},{0x3BL,4L,9L},{0x48L,(-1L),(-1L)},{0xECL,0x1DL,0x7AL},{0x54L,1L,0x99L},{0x41L,0xB2L,4L},{(-2L),(-4L),0x8DL}},{{0xD4L,0xC8L,0xB0L},{1L,0x8DL,(-1L)},{0xD4L,0x7AL,9L},{(-2L),0x3DL,0x3DL},{0x41L,0xB0L,0xABL},{0x5FL,0x7EL,(-8L)},{1L,7L,0xD9L},{(-2L),(-8L),0xD1L},{0xE4L,7L,0x1DL},{0x54L,0x7EL,(-1L)}},{{0xB7L,0xB0L,7L},{0x97L,0x3DL,1L},{0x01L,0x7AL,(-1L)},{0xFFL,0x8DL,0xB0L},{0x9CL,0xC8L,(-1L)},{0x94L,(-4L),1L},{0xECL,0xB2L,7L},{0x03L,4L,(-1L)},{6L,0x03L,0x1DL},{0x23L,0xB0L,0xD1L}},{{0xBFL,0x1DL,0xD9L},{0x23L,(-6L),(-8L)},{6L,0xABL,0xABL},{0x03L,0xD1L,0x3DL},{0xECL,(-1L),9L},{0x94L,0x99L,(-1L)},{0x9CL,0xC9L,0xB0L},{0xFFL,0x99L,0x8DL},{0x01L,(-1L),4L},{0x97L,1L,(-2L)}},{{(-1L),1L,(-10L)},{5L,0x3FL,0x15L},{9L,0xBFL,1L},{4L,1L,0x15L},{9L,0x98L,(-10L)},{0x7EL,0x50L,(-2L)},{0xABL,0xD6L,1L},{0xB0L,0xD3L,(-1L)},{4L,1L,0x0EL},{(-4L),(-1L),0xA8L}},{{4L,0x89L,6L},{0xB0L,3L,3L},{0xABL,0x0EL,1L},{0x7EL,0L,0xFAL},{9L,0x74L,0x7BL},{4L,1L,1L},{9L,0x74L,0xBFL},{5L,0L,(-6L)},{(-1L),0x0EL,0x74L},{0x7CL,3L,(-2L)}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1224[i] = &g_308;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_1230[i][j][k] = 0xC34AB608L;
            }
        }
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 1; j++)
                l_1363[i][j] = (void*)0;
        }
        if (l_1111[1])
        {
            char l_1129 = 0x6BL;
            int l_1130 = 0L;
            int l_1136[3];
            unsigned l_1148 = 1UL;
            int *l_1165 = &g_1028;
            char *l_1228 = &l_1111[6];
            const unsigned char l_1254 = 0xB0L;
            int i;
            for (i = 0; i < 3; i++)
                l_1136[i] = 0L;
            for (g_861 = 0; (g_861 <= 42); g_861++)
            {
                unsigned l_1123 = 0x4D22DF30L;
                int * const l_1152 = &g_931;
                int *l_1154[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                char * const *l_1196 = (void*)0;
                char *l_1246 = &l_1111[0];
                int i;
                for (g_289 = (-24); (g_289 > 50); g_289 = safe_add_func_int8_t_s_s(g_289, 1))
                {
                    int *l_1121 = &g_1101;
                    int **l_1122 = &g_182;
                    for (g_55 = 0; (g_55 == 4); g_55 = safe_add_func_int16_t_s_s(g_55, 4))
                    {
                        l_1114 |= 0x4E5F3449L;
                        return p_19;
                    }
                    (*l_1122) = l_1121;
                    return l_1123;
                }
                if ((safe_mod_func_int32_t_s_s(0xC2541A84L, func_30((*g_485), l_1126[7][4]))))
                {
                    int *l_1131 = &l_1130;
                    int *l_1132 = &l_1130;
                    int *l_1133 = &l_1114;
                    int *l_1134 = (void*)0;
                    int *l_1135[4][1][9] = {{{&g_333,&g_333,&g_4[3][4][0],&g_60,&g_333,&g_60,&g_4[3][4][0],&g_333,&g_333}},{{&g_333,&l_1114,&g_333,&g_60,&g_333,&l_1114,&g_333,&g_333,&l_1114}},{{&g_60,&l_1114,&g_4[3][4][0],&l_1114,&g_60,&g_60,&g_60,&g_333,&g_333}},{{&l_1114,&g_4[3][4][0],&l_1114,&g_60,&g_1028,&g_1028,&g_60,&l_1114,&g_4[3][4][0]}}};
                    int i, j, k;
                    for (g_386 = 0; (g_386 == 56); g_386 = safe_add_func_uint32_t_u_u(g_386, 3))
                    {
                        return l_1126[7][4].f0;
                    }
                    ++l_1137;
                    for (g_366 = 14; (g_366 < 38); g_366 = safe_add_func_int16_t_s_s(g_366, 2))
                    {
                        int **l_1142 = &l_1135[3][0][7];
                        (*l_1142) = &l_1114;
                    }
                    for (g_337 = 0; (g_337 < 10); g_337 = safe_add_func_int8_t_s_s(g_337, 6))
                    {
                        char l_1145[8][10] = {{(-1L),0x74L,0x60L,0x37L,(-1L),0x83L,0x83L,(-1L),0x37L,0x60L},{(-1L),(-1L),0x2EL,1L,0x73L,0x31L,9L,0x74L,0x2EL,(-9L)},{0x67L,(-8L),0L,9L,0x5DL,0x88L,9L,(-1L),0x83L,0x67L},{0x60L,(-1L),0x83L,0x5DL,(-9L),0x5DL,0x83L,(-1L),0x60L,0L},{0x73L,0x74L,0x31L,(-1L),0L,0x31L,1L,0x67L,2L,9L},{0L,0x83L,0x88L,(-1L),0x5DL,0L,0L,0x60L,0x60L,0L},{(-1L),0x67L,0x5DL,0x5DL,0x67L,(-1L),(-8L),0x73L,0x83L,0x60L},{1L,0x73L,0x31L,9L,0x74L,0x2EL,(-9L),0L,0x2EL,(-1L)}};
                        int l_1147 = 0xBCEC9838L;
                        int **l_1151[6][5] = {{&l_1132,&l_1135[0][0][7],&l_1131,&l_1135[0][0][7],&g_402},{&l_1134,&l_1135[0][0][7],&l_1132,&l_1135[0][0][7],&l_1134},{&g_402,&l_1135[0][0][7],(void*)0,&g_182,&l_1134},{&l_1134,&g_182,(void*)0,&l_1135[0][0][7],&g_402},{&l_1134,&l_1135[0][0][7],&l_1132,&l_1135[0][0][7],&l_1134},{&g_402,&l_1135[0][0][7],(void*)0,&g_182,&l_1134}};
                        int i, j;
                        --l_1148;
                        g_402 = &l_1147;
                        if (l_1123)
                            continue;
                        return p_20;
                    }
                }
                else
                {
                    char *l_1153 = &g_58[6];
                    unsigned char *l_1156 = &g_126;
                    l_1146 |= ((*l_1152) = ((p_18 > ((!((*l_1156) = (p_19 = (4294967289UL <= func_30((*g_485), l_1155))))) && p_20)) <= l_1157));
                    for (g_234 = 0; (g_234 <= 4); g_234++)
                    {
                        int *l_1160 = &l_1136[1];
                        int **l_1161 = (void*)0;
                        int **l_1162 = (void*)0;
                        int **l_1163 = &l_1154[2];
                        char **l_1164[2][10][5] = {{{&g_324[6],&g_324[5],&g_324[6],&g_324[2],&l_1153},{&l_1153,&l_1153,&g_324[2],&l_1153,&l_1153},{&g_324[6],&g_324[2],&g_324[3],(void*)0,&g_324[3]},{(void*)0,(void*)0,&g_324[2],&l_1153,(void*)0},{(void*)0,&g_324[2],&g_324[6],&g_324[2],&g_324[3]},{&l_1153,&l_1153,&l_1153,&l_1153,&l_1153},{&g_324[3],&g_324[2],&l_1153,&g_324[7],&l_1153},{&l_1153,(void*)0,&l_1153,&l_1153,&g_324[2]},{&l_1153,&g_324[2],&l_1153,&g_324[2],&l_1153},{&l_1153,&l_1153,(void*)0,&l_1153,(void*)0}},{{&g_324[3],&g_324[5],&l_1153,(void*)0,&l_1153},{&l_1153,&l_1153,&l_1153,&l_1153,(void*)0},{(void*)0,(void*)0,&l_1153,&g_324[2],&l_1153},{(void*)0,&l_1153,&l_1153,&l_1153,&l_1153},{(void*)0,&g_324[7],(void*)0,(void*)0,&l_1153},{&l_1153,(void*)0,&l_1153,(void*)0,&l_1153},{(void*)0,&l_1153,&l_1153,&g_324[2],&l_1153},{&g_324[2],&g_324[2],&l_1153,&l_1153,(void*)0},{&l_1153,&g_324[2],(void*)0,&l_1153,&l_1153},{(void*)0,&l_1153,&l_1153,&l_1153,&l_1153}}};
                        int i, j, k;
                        (*l_1163) = l_1160;
                        (*l_1160) = (l_1111[0] >= (&g_324[2] == l_1164[0][4][3]));
                        (*l_1163) = l_1165;
                        return (*l_1152);
                    }
                    l_1166++;
                }
                if ((*l_1165))
                {
                    const char *l_1178 = &l_1111[0];
                    int l_1179 = (-6L);
                    int l_1184 = 0x0E06FC4AL;
                    int l_1190 = 3L;
                    unsigned char *l_1208[4][6] = {{(void*)0,&g_552,(void*)0,&g_552,(void*)0,&g_552},{&g_552,&g_552,&g_552,&g_552,&g_552,&g_552},{(void*)0,&g_552,(void*)0,&g_552,(void*)0,&g_552},{&g_552,&g_552,&g_552,&g_552,&g_552,&g_552}};
                    unsigned **l_1209 = &g_592;
                    char *l_1215[1][10];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_1215[i][j] = &g_501[7];
                    }
                    for (p_18 = 0; (p_18 >= 39); p_18 = safe_add_func_int32_t_s_s(p_18, 3))
                    {
                        unsigned l_1172 = 4294967295UL;
                        (*l_1152) = (l_1172 = l_1171);
                    }
                    if ((*l_1165))
                    {
                        int **l_1173 = &g_402;
                        (*l_1173) = (void*)0;
                        l_1184 |= (safe_add_func_int8_t_s_s(p_18, (p_19 < (safe_mod_func_uint16_t_u_u((p_20 & func_30(((*g_485) = l_1178), l_1126[5][0])), (l_1179 & ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(0x7F273900L, p_21)), 14)) != p_19)))))));
                        g_1186 = l_1185;
                        (*l_1173) = &l_1114;
                    }
                    else
                    {
                        int l_1188 = 0L;
                        unsigned l_1197 = 0xA38C933CL;
                        unsigned char *l_1198 = &g_16;
                        unsigned *l_1207 = &g_94;
                        ++g_1191;
                        (*l_1165) = (l_1114 &= (safe_mod_func_uint8_t_u_u((*l_1165), ((&g_486 != l_1196) && (l_1111[0] > p_19)))));
                        (*l_1165) &= ((*l_1152) &= l_1171);
                        (*l_1152) = ((l_1166 ^ ((*l_1198) = l_1188)) != ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((l_1179 = ((*g_592) <= ((*l_1207) ^= (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s(p_21, (l_1197 || ((*l_1165) |= p_20)))), l_1126[7][4].f1))))), 2)), 5)) & p_21));
                    }
                    if ((((g_1191 = l_1126[7][4].f2) != (~(((((&g_308 != (void*)0) & p_19) | ((l_1209 != l_1210) <= (l_1211 = l_1155.f1))) <= ((*l_1165) = ((safe_mod_func_uint32_t_u_u((g_94 &= func_26(((*l_1152) ^= (safe_unary_minus_func_int8_t_s(((func_26((0x03L || (l_1189 = 0x88L)), l_1114, l_1216) > p_21) | 0L)))), (*g_33), l_1216)), 0xE54AB8C2L)) != 1UL))) < l_1146))) | p_18))
                    {
                        unsigned char l_1217 = 0x42L;
                        l_1217--;
                        if (p_20)
                            break;
                        if (l_1217)
                            break;
                    }
                    else
                    {
                        short ***l_1226 = &g_308;
                        short ****l_1225 = &l_1226;
                        const char * const *l_1227 = &g_33;
                        (*l_1152) = (((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_1224[2] == ((*l_1225) = (void*)0)), (l_1227 != &g_324[2]))), 4)) || func_26(((void*)0 == l_1228), (l_1114 &= (func_30((*g_485), func_35((**g_591), (*l_1165), g_190, (*g_454))) <= p_20)), &l_1111[0])) ^ p_19);
                        if (l_1126[7][4].f0)
                            continue;
                    }
                }
                else
                {
                    int l_1229 = 0x80424D3DL;
                    int l_1231[10][2][7] = {{{0L,0x476D4D90L,0x9926F686L,0xFB83D90CL,0x92E4BC09L,0xFB83D90CL,0x9926F686L},{0x4916F0C7L,0x4916F0C7L,1L,(-1L),1L,(-3L),(-1L)}},{{0xA9AB1551L,0xC337F41FL,0x33377666L,0x476D4D90L,0x33377666L,0xC337F41FL,0xA9AB1551L},{(-6L),(-1L),0x1432EEBAL,(-6L),1L,0x8B348690L,0x8B348690L}},{{0x92E4BC09L,9L,0x77EC205FL,9L,0x92E4BC09L,(-9L),(-1L)},{1L,(-6L),0x1432EEBAL,(-1L),(-6L),(-3L),0x8B348690L}},{{0x5FF60CDEL,0xFB83D90CL,0x5FF60CDEL,(-9L),0x33377666L,0x46CA2FCDL,0x5FF60CDEL},{0xAB2607D8L,0x1432EEBAL,0x705B26FEL,(-6L),(-6L),0x705B26FEL,0x1432EEBAL}},{{0L,0x46CA2FCDL,0x77EC205FL,0xFB83D90CL,0xFA95D701L,0x46CA2FCDL,0x9926F686L},{(-6L),(-6L),1L,0L,0xAB2607D8L,(-3L),0L}},{{0x33377666L,0xC337F41FL,0xA9AB1551L,0xFB83D90CL,0x33377666L,9L,0x33377666L},{(-6L),0L,0L,(-6L),(-3L),1L,0x8B348690L}},{{0xFA95D701L,0xC337F41FL,0x77EC205FL,(-9L),0L,(-9L),0x77EC205FL},{0xAB2607D8L,(-6L),(-1L),0x1432EEBAL,(-6L),1L,0x8B348690L}},{{0x33377666L,0x46CA2FCDL,0x5FF60CDEL,0xC337F41FL,0x5FF60CDEL,0x46CA2FCDL,0x33377666L},{(-3L),0x1432EEBAL,1L,(-6L),(-6L),1L,0L}},{{0L,0xFB83D90CL,(-1L),0xFB83D90CL,0L,0x476D4D90L,0x9926F686L},{(-6L),(-6L),1L,0x1432EEBAL,(-3L),(-3L),0x1432EEBAL}},{{0x5FF60CDEL,0xC337F41FL,0x5FF60CDEL,0x46CA2FCDL,0x33377666L,(-9L),0x5FF60CDEL},{(-6L),0x1432EEBAL,(-1L),(-6L),0xAB2607D8L,0x705B26FEL,0x8B348690L}}};
                    short ***l_1236 = (void*)0;
                    short ***l_1237 = &g_308;
                    int i, j, k;
                    ++g_1233[1][1][0];
                    if (((l_1238 = ((*l_1237) = &l_1113[6][2])) == (l_1240[4][1][1] = l_1239)))
                    {
                        unsigned short l_1245 = 0xCCD0L;
                        int *l_1247 = &g_1028;
                        int **l_1248 = &l_1154[2];
                        int **l_1249 = &l_1247;
                        (*l_1249) = ((*l_1248) = l_1247);
                        (*l_1165) = (safe_rshift_func_int8_t_s_u((**g_485), (p_18 == (*g_486))));
                        if (p_19)
                            continue;
                    }
                    else
                    {
                        l_1231[6][1][5] = ((((**g_308) != l_1126[7][4].f0) == 0x1AL) & ((*l_1165) = ((void*)0 != &l_1228)));
                        (*l_1152) ^= (safe_lshift_func_uint8_t_u_u((~l_1254), ((safe_sub_func_uint16_t_u_u(p_21, ((((safe_add_func_uint16_t_u_u((*l_1165), (safe_lshift_func_uint8_t_u_u(p_19, 4)))) <= 0xC1AFB1C9L) != (p_18 && p_20)) >= 0x2F12BF24L))) != (0x8FL < 0xD5L))));
                        return p_19;
                    }
                }
                (*l_1165) ^= (((0xDEL && (((**l_1210) = ((void*)0 != l_1261)) & p_18)) || (p_20 || (p_20 > 0xC99BL))) ^ ((p_19 >= (p_21 = ((**g_485) | 0x5CL))) <= p_18));
            }
        }
        else
        {
            int *l_1264 = (void*)0;
            int *l_1265 = &l_1114;
            int l_1276 = 1L;
            unsigned char *l_1282 = &l_1211;
            int **l_1304[9][5][2] = {{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}},{{(void*)0,&g_402},{&l_1265,(void*)0},{&g_182,&g_182},{&g_182,(void*)0},{&l_1265,&g_402}}};
            union U0 ** const *l_1312[9][4][7] = {{{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,(void*)0,&g_430,&g_430},{&g_430,&g_430,&g_430,(void*)0,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430,(void*)0,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,(void*)0,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}},{{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{&g_430,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430},{(void*)0,&g_430,&g_430,&g_430,&g_430,&g_430,&g_430}}};
            char l_1393 = 0L;
            char **l_1410 = &g_324[2];
            unsigned char **l_1418 = &l_1282;
            char l_1449 = 1L;
            int i, j, k;
            if ((safe_mod_func_int8_t_s_s((p_18 ^ (((*l_1265) &= 0L) || (p_20 > (p_18 ^ (*g_592))))), 0x56L)))
            {
                for (g_861 = 0; (g_861 == 4); g_861 = safe_add_func_uint8_t_u_u(g_861, 6))
                {
                    int l_1268 = 0x4DC43AA8L;
                    return l_1268;
                }
            }
            else
            {
                unsigned char l_1269 = 0xDFL;
                char *l_1270 = (void*)0;
                char *l_1271 = &g_58[3];
                int *l_1275[5][5] = {{&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0],&g_4[3][4][0]}};
                unsigned short **l_1301 = &g_274;
                unsigned l_1302[10][10][2] = {{{1UL,0x978128C0L},{0UL,0UL},{1UL,0xFBA51C8FL},{0x6F62B477L,0x7E834EE7L},{0x7E834EE7L,0UL},{4294967291UL,0x9CFAACCDL},{0xEBAE4F85L,0x80428EF9L},{4294967295UL,0x89AA79FAL},{0xFBA51C8FL,0x5DFF1D0BL},{4294967295UL,4294967295UL}},{{9UL,4294967295UL},{0x8ECB02CDL,0x3D29F7A0L},{0x5DFF1D0BL,0xD839E826L},{0xEBAE4F85L,7UL},{0x89AA79FAL,0x463AE1D4L},{0UL,4294967295UL},{0UL,0xDC16DBE8L},{0x3DF3C182L,2UL},{4294967295UL,0x3D29F7A0L},{0x1F99CC7FL,0x6402DB16L}},{{0xF0DA1D56L,0xB6FBBCA6L},{0x4ACE6432L,4294967295UL},{0xFBA51C8FL,4294967291UL},{0x6402DB16L,0x3DBF44DEL},{0x3DF3C182L,4294967287UL},{0x89AA79FAL,0UL},{4294967295UL,8UL},{4294967291UL,7UL},{7UL,2UL},{0UL,4294967291UL}},{{4294967295UL,0x5DFF1D0BL},{9UL,0UL},{0x4ACE6432L,0UL},{0x1F99CC7FL,0UL},{0x5DFF1D0BL,0x80428EF9L},{7UL,4294967287UL},{0x3D29F7A0L,4294967295UL},{8UL,4294967295UL},{0x3D29F7A0L,4294967287UL},{7UL,0x80428EF9L}},{{0x5DFF1D0BL,0UL},{0x1F99CC7FL,0UL},{0x4ACE6432L,0UL},{9UL,0x5DFF1D0BL},{4294967295UL,4294967291UL},{0UL,2UL},{7UL,7UL},{4294967291UL,8UL},{4294967295UL,0UL},{0x89AA79FAL,4294967287UL}},{{0x3DF3C182L,0x3DBF44DEL},{0x6402DB16L,4294967291UL},{0xFBA51C8FL,4294967295UL},{0x1F99CC7FL,4294967295UL},{4294967295UL,0xB4D6269DL},{1UL,4294967288UL},{4294967295UL,4294967295UL},{0UL,0x6F62B477L},{4294967295UL,0x9CFAACCDL},{0x374729F2L,0xDC16DBE8L}},{{0xF0DA1D56L,4294967292UL},{0xD839E826L,0x7FAD6C25L},{8UL,4294967288UL},{0xCFAA3172L,4294967295UL},{0x6896C320L,4294967292UL},{1UL,8UL},{1UL,0xF0DA1D56L},{4294967295UL,0x0047FDE7L},{0xD839E826L,4294967295UL},{4294967295UL,0x374729F2L}},{{0xDC16DBE8L,0xDC16DBE8L},{4294967288UL,0x6F62B477L},{0xE34C2282L,0xFC11A3D6L},{0UL,0xF0DA1D56L},{0xCFAA3172L,0UL},{4294967295UL,4294967295UL},{4294967295UL,0UL},{0xCFAA3172L,0xF0DA1D56L},{0UL,0xFC11A3D6L},{0xE34C2282L,0x6F62B477L}},{{4294967288UL,0xDC16DBE8L},{0xDC16DBE8L,0x374729F2L},{4294967295UL,4294967295UL},{0xD839E826L,0x0047FDE7L},{4294967295UL,0xF0DA1D56L},{1UL,8UL},{1UL,4294967292UL},{0x6896C320L,4294967295UL},{0xCFAA3172L,4294967288UL},{8UL,0x7FAD6C25L}},{{0xD839E826L,4294967292UL},{0xF0DA1D56L,0xDC16DBE8L},{0x374729F2L,0x9CFAACCDL},{4294967295UL,0x6F62B477L},{0UL,4294967295UL},{4294967295UL,4294967288UL},{1UL,0xB4D6269DL},{4294967295UL,4294967295UL},{0x1F99CC7FL,4294967295UL},{1UL,4294967295UL}}};
                int i, j, k;
                l_1276 = (((*l_1271) = (func_26(l_1269, l_1126[7][4].f2, (*g_485)) || (*g_33))) || ((safe_unary_minus_func_uint8_t_u((p_20 != ((void*)0 != l_1273)))) && ((*l_1265) ^= 0x6DE319F5L)));
                for (g_333 = 0; (g_333 <= 0); g_333 += 1)
                {
                    unsigned l_1283 = 0x207BB8BCL;
                    ++l_1277[4];
                    if ((safe_lshift_func_int8_t_s_u(p_19, 1)))
                    {
                        unsigned l_1284 = 4294967287UL;
                        const char *l_1285[8][3] = {{&g_58[4],&g_254,&g_254},{&g_981.f2,&l_1155.f2,&l_1155.f2},{&g_58[4],&g_254,&g_254},{&g_981.f2,&l_1155.f2,&l_1155.f2},{&g_58[4],&g_254,&g_254},{&g_981.f2,&l_1155.f2,&l_1155.f2},{&g_58[4],&g_254,&g_254},{&g_981.f2,&l_1155.f2,&l_1155.f2}};
                        int l_1287 = 0x57A8724CL;
                        int i, j;
                        l_1287 ^= (((p_19 <= ((l_1282 = &p_19) == ((**g_675) = &p_21))) && p_21) || l_1286);
                    }
                    else
                    {
                        char l_1289[1][3];
                        const union U0 *l_1290 = &l_1126[0][3];
                        const union U0 **l_1291 = (void*)0;
                        const union U0 **l_1292[6][8][5] = {{{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{&l_1290,(void*)0,&l_1290,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{&l_1290,(void*)0,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,(void*)0,&l_1290,(void*)0}},{{&l_1290,&l_1290,(void*)0,&l_1290,&l_1290},{&l_1290,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{&l_1290,(void*)0,&l_1290,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,(void*)0},{(void*)0,&l_1290,(void*)0,(void*)0,&l_1290}},{{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,(void*)0,&l_1290},{&l_1290,&l_1290,&l_1290,&l_1290,(void*)0},{&l_1290,(void*)0,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0},{(void*)0,(void*)0,&l_1290,&l_1290,&l_1290}},{{&l_1290,&l_1290,&l_1290,&l_1290,(void*)0},{(void*)0,&l_1290,(void*)0,(void*)0,&l_1290},{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,(void*)0,&l_1290},{&l_1290,&l_1290,&l_1290,&l_1290,(void*)0},{&l_1290,(void*)0,&l_1290,&l_1290,&l_1290}},{{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0},{(void*)0,(void*)0,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,(void*)0,&l_1290,(void*)0},{&l_1290,&l_1290,(void*)0,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,&l_1290,(void*)0}},{{&l_1290,&l_1290,(void*)0,&l_1290,&l_1290},{&l_1290,&l_1290,(void*)0,&l_1290,(void*)0},{&l_1290,&l_1290,(void*)0,&l_1290,&l_1290},{&l_1290,(void*)0,&l_1290,&l_1290,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,&l_1290,(void*)0,(void*)0},{&l_1290,&l_1290,&l_1290,&l_1290,&l_1290},{(void*)0,&l_1290,(void*)0,&l_1290,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_1289[i][j] = 0x12L;
                        }
                        l_1289[0][2] = l_1288[2];
                        l_1293 = l_1290;
                    }
                    l_1264 = (void*)0;
                    for (g_790 = 0; (g_790 <= 0); g_790 += 1)
                    {
                        (*l_1265) |= (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((*g_1187), ((safe_add_func_uint8_t_u_u(p_21, l_1155.f0)) ^ 0x75A1D910L))), (l_1283 & (((p_20 & (((*l_1271) = 1L) < ((void*)0 != l_1301))) ^ p_18) | 0xB6L))));
                        if (l_1302[6][3][0])
                            continue;
                        (*l_1265) &= l_1232[0][0][0];
                    }
                }
                (*l_1265) = g_1303;
            }
            if ((p_18 | (p_19 & (safe_rshift_func_int8_t_s_u((l_1232[6][1][2] = (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_21 | (&g_430 == l_1312[3][2][5])), ((((p_19 > 65527UL) != 0x362C1BBFL) && 0xEAA35D9CL) & l_1111[3]))), 2))), 5)))))
            {
                unsigned short l_1313 = 0xFAA4L;
                int l_1315 = 1L;
                int l_1317 = 0x886316B9L;
                int l_1318 = 0x2F202488L;
                int l_1319 = 0xAD24DC2DL;
                int *l_1336 = &g_333;
                short ***l_1366 = (void*)0;
                unsigned short l_1367[10][8] = {{0xC4CAL,0x77A4L,65535UL,0xC4CAL,0xDEF2L,65535UL,4UL,0xCA9BL},{0xC4CAL,65526UL,1UL,65531UL,4UL,0UL,65527UL,65527UL},{0xCA9BL,0x04F5L,65535UL,65535UL,0x04F5L,0xCA9BL,0x140FL,0x8501L},{1UL,65528UL,0x3054L,65535UL,0x0C0EL,0x140FL,1UL,0UL},{65535UL,0xDEF2L,0xC4CAL,65535UL,0x77A4L,0xC4CAL,0xB2A4L,0x8501L},{0UL,0x77A4L,65528UL,0x0C0EL,1UL,0x0C0EL,65528UL,0x77A4L},{0xCA9BL,0x140FL,0UL,0x8501L,0x0C0EL,0x3054L,0x8501L,1UL},{65535UL,1UL,0x9910L,0xB2A4L,0xCA9BL,0xC4CAL,0x8501L,0xDEF2L},{1UL,0xB2A4L,0UL,0x3054L,65535UL,65528UL,65528UL,65535UL},{65535UL,65528UL,65528UL,65535UL,0x3054L,0UL,0xB2A4L,1UL}};
                int i, j;
                if (p_19)
                {
                    int l_1314 = 0x86142D2EL;
                    int l_1316[6] = {0x995D4F85L,0x995D4F85L,0x995D4F85L,0x995D4F85L,0x995D4F85L,0x995D4F85L};
                    int i;
                    l_1313 |= 0L;
                    --g_1320[0];
                    g_182 = &l_1230[0][0][2];
                }
                else
                {
                    int l_1323 = 0x2EB22EA6L;
                    int l_1324 = (-1L);
                    int l_1329 = 0x90E64B11L;
                    union U0 *l_1339 = &l_1155;
                    g_1330[1][7]++;
                    for (l_1157 = 0; (l_1157 <= 0); l_1157 += 1)
                    {
                        l_1333--;
                        l_1336 = &l_1324;
                    }
                    for (l_1189 = 5; (l_1189 > (-28)); l_1189 = safe_sub_func_int16_t_s_s(l_1189, 7))
                    {
                        int l_1346 = 0L;
                        int l_1356 = 0x5A881971L;
                        int l_1358 = 0x4597412CL;
                        (*g_430) = l_1339;
                        (*l_1336) = (l_1358 &= (safe_mod_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_1323 < (!(1L <= (safe_div_func_int8_t_s_s(p_18, (l_1346 || ((p_20 == (safe_rshift_func_int8_t_s_u(0L, 2))) & (safe_mod_func_int32_t_s_s((l_1353 != (l_1346 = p_20)), p_18))))))))), p_19)), l_1324)));
                    }
                    for (g_931 = (-19); (g_931 <= 6); g_931 = safe_add_func_uint16_t_u_u(g_931, 3))
                    {
                        unsigned short l_1361 = 65535UL;
                        char **l_1362 = (void*)0;
                        int * const l_1364 = &l_1319;
                        (*g_430) = (*g_430);
                        g_402 = l_1365;
                        if (p_18)
                            break;
                    }
                }
                (*l_1265) &= ((((void*)0 == l_1366) >= 1L) >= ((*l_1282) |= (g_552 |= (l_1367[1][2] & ((void*)0 == l_1368)))));
            }
            else
            {
                union U0 l_1371[1][5] = {{{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL},{4294967286UL}}};
                int l_1378[10] = {0x3EAC2C77L,9L,0x3EAC2C77L,0x3EAC2C77L,9L,0x3EAC2C77L,0x3EAC2C77L,9L,0x3EAC2C77L,0x3EAC2C77L};
                unsigned *l_1384[10][10] = {{&g_1320[0],&l_1126[7][4].f1,&l_1126[7][4].f1,&g_1320[0],&g_1320[0],&l_1353,&g_1320[0],&g_1320[0],&l_1126[7][4].f1,&l_1126[7][4].f1},{&g_1320[0],&l_1126[7][4].f1,&l_1353,&l_1166,&l_1166,&l_1353,&g_1320[0],&l_1166,&g_1320[0],&l_1353},{&l_1126[7][4].f1,&g_386,&l_1353,&g_386,&l_1126[7][4].f1,&l_1353,&l_1353,&l_1126[7][4].f1,&g_386,&l_1353},{&l_1166,&l_1166,&l_1353,&l_1126[7][4].f1,&g_1320[0],&l_1126[7][4].f1,&l_1353,&l_1166,&l_1166,&l_1353},{&g_386,&l_1126[7][4].f1,&l_1353,&l_1353,&l_1126[7][4].f1,&g_386,&l_1353,&g_386,&l_1126[7][4].f1,&l_1353},{&g_1320[0],&l_1166,&g_1320[0],&l_1353,&l_1353,&l_1353,&l_1353,&g_1320[0],&l_1166,&g_1320[0]},{&g_1320[0],&g_386,&l_1166,&l_1126[7][4].f1,&l_1166,&g_386,&g_1320[0],&g_1320[0],&g_386,&l_1166},{&g_386,&g_1320[0],&g_1320[0],&g_386,&l_1166,&l_1126[7][4].f1,&l_1166,&g_386,&g_1320[0],&g_1320[0]},{&l_1166,&g_1320[0],&l_1353,&l_1353,&l_1353,&l_1353,&g_1320[0],&l_1166,&g_1320[0],&l_1353},{&l_1126[7][4].f1,&g_386,&l_1353,&g_386,&l_1126[7][4].f1,&l_1353,&l_1353,&l_1126[7][4].f1,&g_386,&l_1353}};
                int l_1392 = 6L;
                unsigned char l_1399 = 0x44L;
                char *l_1412 = &l_1111[0];
                int *l_1419 = &g_491;
                int i, j;
                if (((*l_1305) &= (safe_div_func_int16_t_s_s((p_21 < 7UL), 1UL))))
                {
                    int *l_1372 = &g_491;
                    int l_1374 = (-6L);
                    int l_1377[7];
                    char l_1379 = 0x3BL;
                    char **l_1387 = &g_324[4];
                    short l_1404 = 7L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1377[i] = 0x6886289CL;
                    if (p_21)
                    {
                        l_1305 = l_1372;
                    }
                    else
                    {
                        short l_1373 = 0L;
                        int l_1375 = 0x4EE8FB87L;
                        int l_1376[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1376[i] = 0x5D85328BL;
                        g_1381--;
                    }
                    if ((((*g_591) = &p_18) == (l_1384[4][8] = &p_18)))
                    {
                        char **l_1386[2][9] = {{&g_324[2],(void*)0,&g_324[2],(void*)0,&g_324[2],(void*)0,&g_324[2],(void*)0,&g_324[2]},{&g_324[2],&g_324[3],&g_324[3],&g_324[2],&g_324[2],&g_324[3],&g_324[3],&g_324[2],&g_324[2]}};
                        int *l_1388 = (void*)0;
                        int i, j;
                        l_1388 = &l_1114;
                        (*l_1372) &= p_21;
                        ++g_1389[0];
                    }
                    else
                    {
                        char l_1397 = 6L;
                        int l_1398[10][2][6] = {{{1L,(-1L),0xC19D805DL,(-8L),0xEFACC519L,0x942700B2L},{0xAE76CDDFL,0xCB99CD3FL,0xB5661957L,0xEFACC519L,0x028BCDAEL,0xC09E94B5L}},{{0L,0x9F573300L,1L,0L,(-3L),0L},{0x942700B2L,0xC09E94B5L,(-1L),0xC09E94B5L,0x942700B2L,0xAE76CDDFL}},{{(-8L),(-3L),0xFEDB4FD9L,(-1L),0xAE76CDDFL,0xDB7ADFA4L},{0xC19D805DL,0xBBD50EB2L,4L,(-3L),0x9F573300L,0xDB7ADFA4L}},{{0x028BCDAEL,(-3L),0xFEDB4FD9L,0L,0L,0xAE76CDDFL},{0x9F573300L,0xD2485FA9L,(-1L),0xEF3C1155L,2L,0L}},{{0L,2L,1L,0L,(-1L),0xC09E94B5L},{0L,0xFEDB4FD9L,0xB5661957L,0L,0x576C9A90L,0x942700B2L}},{{0x84717D09L,0x028BCDAEL,0xC19D805DL,0xF6EFE212L,1L,1L},{2L,0L,0L,2L,0L,0xD2485FA9L}},{{0xC09E94B5L,2L,0xBBD50EB2L,0x20BE7792L,(-1L),0xCB99CD3FL},{0xD2485FA9L,0L,0x66370AB0L,(-1L),(-1L),(-1L)}},{{0x764A1233L,2L,(-3L),1L,0L,0xDB7ADFA4L},{0x478444FBL,0x2FD9CC8EL,2L,0xFEDB4FD9L,(-1L),0x942700B2L}},{{2L,0L,0x84717D09L,0xC09E94B5L,(-3L),0xD2485FA9L},{(-1L),0L,0L,0xF6EFE212L,0L,0L}},{{0x66370AB0L,0x6A2C1DD7L,0L,(-1L),1L,(-1L)},{0x9F573300L,0xC19D805DL,0x9F573300L,(-3L),0xBBD50EB2L,0L}}};
                        int i, j, k;
                        g_1394++;
                        ++l_1399;
                        return p_18;
                    }
                    ++g_1406;
                }
                else
                {
                    const char *l_1409 = &g_501[6];
                    char **l_1411 = (void*)0;
                    int *l_1413 = &l_1230[0][0][0];
                    unsigned char ***l_1417 = &g_454;
                    g_182 = &l_1378[3];
                    if (((*l_1365) = l_1286))
                    {
                        g_182 = (l_1413 = l_1413);
                        g_1414 = l_1413;
                    }
                    else
                    {
                        l_1378[8] &= (safe_unary_minus_func_int32_t_s(p_19));
                        return (*l_1305);
                    }
                    l_1378[8] ^= (((*l_1417) = l_1416) == l_1418);
                }
                l_1419 = &l_1378[8];
                --g_1420;
            }
            if (((safe_mod_func_int8_t_s_s((p_19 || p_20), l_1426)) <= 0x98C75566L))
            {
                unsigned char *l_1433 = (void*)0;
                int l_1441 = 0x51D12EDEL;
                int *l_1448 = &l_1276;
                int l_1453 = 3L;
                for (l_1393 = (-17); (l_1393 > 2); l_1393 = safe_add_func_uint16_t_u_u(l_1393, 8))
                {
                    unsigned l_1440[2][4] = {{0x78CF11F8L,0x78CF11F8L,0x78CF11F8L,0x78CF11F8L},{0x78CF11F8L,0x78CF11F8L,0x78CF11F8L,0x78CF11F8L}};
                    int *l_1447 = &l_1441;
                    int l_1454 = 0x099442E3L;
                    char **l_1459 = &g_324[2];
                    int i, j;
                    if (((safe_mul_func_uint8_t_u_u(((l_1425[2] = (void*)0) != (void*)0), ((safe_mod_func_uint32_t_u_u((*l_1305), (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(p_20, p_19)), (safe_sub_func_uint8_t_u_u((p_21 > (l_1440[1][3] | l_1441)), 0xECL)))))) > p_19))) > p_18))
                    {
                        unsigned short *l_1444 = &g_129[4][9];
                        unsigned short l_1445 = 0x111FL;
                        char *l_1446 = &g_501[8];
                        int l_1450 = (-1L);
                        int l_1452 = 0L;
                        (*l_1447) = (p_20 ^ (*l_1447));
                        if (p_20)
                            continue;
                        l_1448 = &l_1232[0][0][0];
                        ++g_1455;
                    }
                    else
                    {
                        unsigned short l_1458 = 1UL;
                        int *l_1460 = &l_1454;
                        (*l_1365) = l_1458;
                        l_1425[2] = l_1460;
                    }
                }
            }
            else
            {
                const int l_1461 = 0xEAA636F4L;
                (*l_1365) = ((+(***g_675)) >= l_1461);
            }
        }
        l_1425[4] = (void*)0;
        (*g_1414) = (((*g_592) = p_20) && (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((**l_1368) |= p_19), (p_18 <= (p_21 > (p_18 < p_20))))), ((*l_1305) ^ 1UL))));
        if (((0UL | (*l_1365)) < (1L <= l_1482)))
        {
            for (g_1420 = 0; (g_1420 < 53); ++g_1420)
            {
                unsigned l_1485 = 0x7DF0E26AL;
                --l_1485;
            }
        }
        else
        {
            union U0 l_1491 = {4294967295UL};
            int *l_1492 = &g_1101;
            if ((((**l_1239) = 0x1789L) > (*g_274)))
            {
                char *l_1490 = (void*)0;
                int *l_1493 = &g_931;
                l_1493 = l_1492;
            }
            else
            {
                char **l_1494 = &g_324[2];
                for (g_289 = 0; g_289 < 6; g_289 += 1)
                {
                    l_1425[g_289] = &g_60;
                }
                l_1425[3] = l_1492;
            }
        }
    }
    else
    {
        int l_1495 = 1L;
        int *l_1498 = (void*)0;
        int l_1554 = 1L;
        int l_1555 = 1L;
        int l_1556 = 0x1892290CL;
        int l_1558 = (-5L);
        int l_1564 = (-8L);
        if (((g_1243 | (p_20 < l_1495)) || (l_1495 <= (safe_sub_func_uint32_t_u_u(0xF61518D8L, p_21)))))
        {
            int l_1508 = (-4L);
            int l_1513 = 0x0B96D249L;
            int l_1514 = 0x407D9073L;
            int *l_1519 = &l_1232[2][0][0];
            short *l_1525 = &g_1242;
            int ***l_1532[2][6][10] = {{{&g_524,&g_524,&g_1097,&g_1097,&g_524,(void*)0,&g_524,(void*)0,&g_524,&g_1097},{&g_524,(void*)0,&g_524,&g_1097,&g_1097,&g_524,&g_1097,&g_1097,&g_1097,&g_524},{&g_524,&g_1097,&g_1097,&g_1097,&g_524,&g_524,&g_1097,&g_1097,&g_1097,&g_524},{&g_1097,&g_1097,&g_524,&g_524,&g_1097,&g_1097,&g_524,(void*)0,&g_524,(void*)0},{(void*)0,&g_524,&g_1097,&g_1097,&g_1097,&g_524,(void*)0,&g_524,&g_524,&g_524},{&g_1097,&g_524,&g_1097,&g_1097,&g_524,&g_1097,(void*)0,(void*)0,&g_1097,&g_1097}},{{&g_1097,&g_1097,&g_1097,&g_1097,&g_1097,&g_1097,&g_524,&g_1097,&g_1097,&g_524},{&g_1097,(void*)0,&g_1097,&g_524,&g_1097,&g_524,&g_1097,&g_524,&g_1097,(void*)0},{&g_1097,&g_524,&g_524,&g_1097,&g_524,&g_524,&g_1097,&g_1097,&g_1097,&g_1097},{&g_524,&g_524,&g_524,&g_524,&g_524,&g_524,&g_524,&g_524,&g_1097,&g_1097},{&g_1097,&g_524,&g_524,&g_524,(void*)0,&g_524,&g_1097,&g_1097,&g_1097,&g_524},{&g_1097,(void*)0,&g_524,(void*)0,&g_1097,&g_1097,&g_1097,&g_524,&g_524,&g_524}}};
            int i, j, k;
            for (l_1171 = (-9); (l_1171 >= 8); l_1171 = safe_add_func_uint32_t_u_u(l_1171, 9))
            {
                short l_1506 = (-1L);
                int l_1509 = 0L;
                int ***l_1534 = &g_1097;
                int ***l_1536 = &g_1097;
                if (p_18)
                {
                    unsigned short l_1501 = 0x6078L;
                    char l_1511 = 0x2BL;
                    char **l_1512 = &g_324[5];
                    (*g_1414) &= l_1509;
                    l_1509 ^= (*g_1414);
                    l_1509 = ((***g_590) < ((*g_1414) = p_18));
                    --l_1515[0];
                }
                else
                {
                    int *l_1518 = (void*)0;
                    l_1519 = l_1518;
                    l_1513 = (((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_unary_minus_func_int8_t_s(func_26((l_1525 == &l_1506), (((**g_591) & (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(p_19, (*g_1187))), p_21))) < (p_19 < (*g_592))), &l_1111[0]))) != p_19), 13)) ^ p_21), p_20)) <= g_1455) & 0x577FL);
                    (*g_1414) ^= p_18;
                }
                for (g_1405 = 2; (g_1405 <= 6); g_1405 += 1)
                {
                    int ****l_1533 = &g_523;
                    int ****l_1535[7] = {&l_1532[0][3][9],&l_1532[0][3][9],&l_1532[0][3][9],&l_1532[0][3][9],&l_1532[0][3][9],&l_1532[0][3][9],&l_1532[0][3][9]};
                    unsigned *l_1545[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1545[i] = &l_1333;
                    if (p_20)
                        break;
                    (*g_1414) = ((!(safe_mod_func_int32_t_s_s(((((l_1536 = (l_1534 = ((*l_1533) = l_1532[0][3][9]))) != (void*)0) >= p_18) > l_1509), (**g_591)))) >= (l_1509 & (safe_rshift_func_uint16_t_u_u(l_1509, p_19))));
                    if (((safe_rshift_func_uint8_t_u_u((p_18 || (**g_591)), (safe_sub_func_int32_t_s_s((-10L), (safe_add_func_uint32_t_u_u((g_289 = (g_1320[0] = 0x18A936BCL)), (safe_div_func_uint8_t_u_u(p_18, 255UL)))))))) & p_21))
                    {
                        short *** const l_1553 = (void*)0;
                        short *** const *l_1552 = &l_1553;
                        (*g_1414) = ((safe_rshift_func_int8_t_s_u(p_18, 3)) && (0x4881L & (safe_rshift_func_int8_t_s_u(p_20, (65535UL ^ ((void*)0 != l_1552))))));
                    }
                    else
                    {
                        return (***g_675);
                    }
                }
            }
        }
        else
        {
            int l_1557 = 0x1B1DF0B4L;
            int l_1559 = (-1L);
            int l_1560 = 0xBDCDB803L;
            int l_1561 = 0xB6CE0BECL;
            g_1565++;
            l_1425[1] = g_1568;
            l_1554 = ((*g_1414) = ((((l_1557 <= (safe_sub_func_int16_t_s_s((l_1561 == p_19), (safe_add_func_uint8_t_u_u((!(p_19 >= (4UL != (**g_591)))), (-1L)))))) < (*g_486)) != 4294967286UL) && 2UL));
        }
        return p_18;
    }
    if ((p_21 < ((g_91[0][1][2] |= (safe_lshift_func_uint16_t_u_s((p_19 != (*g_274)), 1))) == ((l_1577 |= p_20) > (p_19 != ((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s(l_1584, (l_1585 > (*g_33)))) != p_21) < 0x8CL) != 1UL), p_21)), 4294967289UL)) & 0xE7A9L))))))
    {
        char l_1586[3];
        int l_1587 = 2L;
        unsigned short l_1591 = 0x44D7L;
        unsigned char *l_1594 = &g_126;
        short l_1595 = 8L;
        int l_1596 = 0x84E3F75FL;
        int i;
        for (i = 0; i < 3; i++)
            l_1586[i] = 0x30L;
        l_1586[0] = p_20;
        ++l_1588;
        l_1587 = (l_1591 | (p_21 >= (safe_sub_func_int32_t_s_s((-3L), (**g_591)))));
        l_1596 |= (l_1595 ^ p_19);
    }
    else
    {
        char **l_1613 = &g_324[7];
        int l_1615 = 0x0C399C55L;
        int l_1664[3][3];
        union U0 ****l_1729[9] = {&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628};
        unsigned short l_1731 = 0xE943L;
        const unsigned char ***l_1770 = &g_676[1][0];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1664[i][j] = (-1L);
        }
        l_1425[3] = &l_1114;
        for (g_548 = 0; (g_548 <= 1); g_548 += 1)
        {
            int *l_1597 = &g_60;
            const unsigned *l_1599 = &g_1600[5][2];
            const unsigned **l_1598 = &l_1599;
            unsigned *l_1601 = &g_861;
            int l_1603 = 9L;
            int l_1605 = 0x3B7FAC04L;
            int l_1607 = (-8L);
            char **l_1612 = &g_324[8];
            union U0 ***l_1626 = &g_430;
            union U0 ***l_1629 = &g_430;
            l_1597 = &l_1232[0][0][0];
            if ((((*l_1598) = l_1597) == (l_1601 = &g_924)))
            {
                (*l_1597) = (*l_1597);
            }
            else
            {
                short l_1602 = 0x05C4L;
                int l_1604 = 0xD1D4BAA3L;
                int l_1606 = 1L;
                int l_1608 = 5L;
                int **l_1614 = &g_182;
                g_1609--;
                (*l_1614) = &l_1608;
            }
            (*l_1597) |= l_1615;
            for (g_1406 = 0; (g_1406 <= 1); g_1406 += 1)
            {
                int i;
                if (((*l_1597) = g_501[(g_1406 + 3)]))
                {
                    return l_1615;
                }
                else
                {
                    for (g_126 = 0; (g_126 <= 1); g_126 += 1)
                    {
                        l_1615 = 0x0AB20E60L;
                        return p_20;
                    }
                }
                return p_18;
            }
            for (g_336 = 0; (g_336 <= 1); g_336 += 1)
            {
                int l_1616 = 0x9FEDCA2EL;
                int l_1624[4];
                const int *****l_1633 = (void*)0;
                char **l_1680 = &g_324[5];
                unsigned ***l_1683 = &g_1681;
                int i;
                for (i = 0; i < 4; i++)
                    l_1624[i] = (-9L);
                for (g_254 = 1; (g_254 >= 0); g_254 -= 1)
                {
                    int l_1619 = 8L;
                    int *l_1625[6] = {&l_1232[7][1][1],&l_1232[7][1][1],&l_1232[7][1][1],&l_1232[7][1][1],&l_1232[7][1][1],&l_1232[7][1][1]};
                    int i;
                    for (g_60 = 0; (g_60 <= 1); g_60 += 1)
                    {
                        l_1624[1] = ((*l_1597) = (l_1616 > (safe_mod_func_uint32_t_u_u((((*g_274) &= (*g_1187)) >= l_1619), (safe_rshift_func_uint8_t_u_u((p_19 & (safe_mod_func_int16_t_s_s(p_18, p_18))), l_1619))))));
                        l_1425[3] = &l_1624[1];
                        l_1625[1] = &l_1603;
                    }
                    l_1624[1] &= p_21;
                }
                if (p_21)
                    continue;
                for (g_1381 = 0; (g_1381 <= 1); g_1381 += 1)
                {
                    char l_1632 = 0L;
                    char ***l_1654 = &g_323;
                    char ***l_1655 = &g_992;
                    int **l_1656 = &l_1425[3];
                    unsigned char *l_1669 = &g_492;
                    int l_1670 = 0L;
                    if (((*l_1597) = p_19))
                    {
                        union U0 ****l_1627 = &l_1626;
                        l_1632 = ((((*l_1627) = l_1626) == (l_1629 = l_1628)) | (65534UL > (safe_div_func_int32_t_s_s(p_21, l_1615))));
                        (*l_1597) = (l_1633 == g_1057);
                    }
                    else
                    {
                        const short l_1634 = 0x69CAL;
                        unsigned *l_1650 = (void*)0;
                        unsigned *l_1651 = &l_1155.f1;
                        char *l_1652 = &g_328.f2;
                        int l_1653 = 0xAE5CF956L;
                        l_1653 = (g_60 = ((p_19 ^ l_1634) | ((*l_1652) ^= (safe_sub_func_uint32_t_u_u(((*l_1651) ^= (((*l_1597) = ((safe_div_func_int16_t_s_s(p_20, ((safe_lshift_func_uint8_t_u_s(l_1632, (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint32_t_u_u(1UL, 1UL)))))) & (!(safe_rshift_func_uint8_t_u_s((((((safe_sub_func_int16_t_s_s(p_21, 65533UL)) || (*g_33)) != 0x0293D037L) | 0x2DL) || p_18), 1)))))) != 65535UL)) <= 0xF510C7A2L)), l_1632)))));
                    }
                    l_1657 = ((*l_1656) = &l_1114);
                    l_1670 = (p_18 <= (safe_lshift_func_uint8_t_u_s(((1L | ((*l_1669) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_1664[0][0], (safe_div_func_int32_t_s_s(0L, (0x0E06C5AEL ^ (safe_lshift_func_int8_t_s_s((l_1628 != &g_430), l_1664[0][0]))))))), p_20)))) <= 0x1DL), p_19)));
                    (*l_1656) = &l_1664[0][0];
                }
                if ((0xB866AAB8L & (((*l_1683) = g_1681) != &g_1682[0][7])))
                {
                    return p_18;
                }
                else
                {
                    int l_1706[6] = {0x14E6DCA8L,0L,0L,0x14E6DCA8L,0L,0L};
                    int *l_1708 = &l_1664[0][0];
                    int i;
                    for (g_931 = 0; (g_931 <= 1); g_931 += 1)
                    {
                        unsigned short *l_1705 = &g_337;
                        l_1708 = &l_1664[2][1];
                    }
                    if (p_19)
                        continue;
                }
            }
        }
        for (l_1615 = 14; (l_1615 == 2); --l_1615)
        {
            unsigned l_1718 = 1UL;
            union U0 *l_1726 = &l_1155;
            int l_1732 = 5L;
            int l_1733 = (-1L);
            unsigned l_1734 = 4294967287UL;
            l_1664[1][1] ^= p_21;
            (*l_1657) &= (safe_div_func_uint8_t_u_u(p_19, l_1664[0][0]));
            l_1425[3] = &l_1664[0][0];
            if (l_1664[2][2])
            {
                char ***l_1713[4];
                int l_1725[10][7][1] = {{{0x9E2D6EF8L},{0xF7013DE4L},{1L},{0xD4EC3F05L},{0xF7013DE4L},{(-1L)},{1L}},{{0x3E22D90BL},{0x9E2D6EF8L},{0xF96C4E4AL},{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{0xF96C4E4AL},{0x9E2D6EF8L},{0x3E22D90BL},{1L},{(-1L)},{0xF7013DE4L},{0xF96C4E4AL}},{{0x26121924L},{3L},{(-1L)},{0x26121924L},{1L},{0x9E2D6EF8L},{(-1L)}},{{2L},{(-1L)},{0x9E2D6EF8L},{1L},{0x26121924L},{(-1L)},{3L}},{{0x26121924L},{0xF96C4E4AL},{0xF7013DE4L},{(-1L)},{1L},{0x3E22D90BL},{0x9E2D6EF8L}},{{0xF96C4E4AL},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{0xF96C4E4AL},{0x9E2D6EF8L}},{{0x3E22D90BL},{1L},{(-1L)},{0xF7013DE4L},{0xF96C4E4AL},{0x26121924L},{3L}},{{(-1L)},{0x26121924L},{1L},{0x9E2D6EF8L},{(-1L)},{2L},{(-1L)}},{{0x9E2D6EF8L},{1L},{0x26121924L},{(-1L)},{3L},{0x26121924L},{0xF96C4E4AL}}};
                int l_1756 = 0x9B440A88L;
                int **l_1788 = &g_1568;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1713[i] = (void*)0;
                if ((&g_485 == l_1713[3]))
                {
                    int l_1717[1];
                    int l_1721 = (-1L);
                    int l_1722 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1717[i] = (-1L);
                    for (g_1562 = 0; (g_1562 < (-7)); g_1562 = safe_sub_func_int8_t_s_s(g_1562, 7))
                    {
                        int l_1716 = 1L;
                        union U0 ****l_1730[7][10] = {{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628},{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628},{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628},{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628},{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628},{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628},{&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628,&l_1628}};
                        int i, j;
                        l_1718--;
                        l_1722 &= (l_1721 = p_20);
                        l_1732 = ((*l_1657) = ((safe_mod_func_uint16_t_u_u((*g_1187), l_1725[8][5][0])) > (l_1664[0][0] = (l_1615 || ((((*g_430) = l_1726) != &g_1294[2]) | ((safe_rshift_func_int8_t_s_u(p_21, 7)) & (l_1731 = ((l_1730[3][9] = l_1729[2]) != &l_1628))))))));
                        l_1657 = &l_1232[0][0][0];
                    }
                    --l_1734;
                }
                else
                {
                    char l_1737 = 1L;
                    int l_1752 = 0x9E0ED557L;
                    short ***l_1753 = &g_308;
                    short **l_1755 = &l_1113[1][2];
                    short ***l_1754 = &l_1755;
                    int *l_1771 = &g_4[3][4][0];
                    int l_1775 = 1L;
                    int l_1776 = 0x02372D0FL;
                    if (l_1737)
                        break;
                    if (((*l_1657) |= ((safe_sub_func_uint8_t_u_u(((0UL <= ((safe_rshift_func_uint8_t_u_s(p_21, 1)) > (safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((l_1725[0][0][0] = (~(safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((*g_274) = (safe_lshift_func_int8_t_s_u(0L, l_1752))), 65533UL)) != 0xCAL), (((((*l_1753) = &l_1112) == ((*l_1754) = (void*)0)) ^ (*g_1187)) >= 0x45F0CE14L))))), (***g_675))), (*g_1187))))) != 0x2709L), 5L)) == l_1756)))
                    {
                        unsigned l_1757 = 0x5A011010L;
                        int *l_1772 = &l_1732;
                        int *l_1773 = (void*)0;
                        int l_1774 = 0x5D59C497L;
                        int l_1777 = 0xB352CCE1L;
                        int l_1779 = 0x0465AE84L;
                        ++l_1757;
                        (*l_1657) = (safe_rshift_func_uint16_t_u_s(((l_1733 & (safe_lshift_func_uint16_t_u_u(((+(((void*)0 == g_1764) < (safe_add_func_int16_t_s_s(l_1769, (p_18 > l_1725[8][5][0]))))) || (l_1628 != (void*)0)), p_19))) > 1L), 5));
                        l_1773 = (l_1772 = l_1771);
                        g_1780--;
                    }
                    else
                    {
                        unsigned l_1783 = 0xBE995F9DL;
                        --l_1783;
                    }
                    if (p_19)
                        break;
                }
                for (l_1734 = 23; (l_1734 <= 32); ++l_1734)
                {
                    (*l_1657) |= (0x6DC3L && p_18);
                }
                (*l_1657) = (p_19 ^ p_21);
                (*l_1788) = (void*)0;
            }
            else
            {
                int *l_1789 = &g_4[5][1][4];
                int **l_1790 = &l_1425[3];
                (*l_1790) = l_1789;
            }
        }
    }
    return l_1791[2];
}







static short func_24(unsigned char * p_25)
{
    short l_40 = (-4L);
    unsigned short *l_54 = &g_55;
    char *l_57 = &g_58[6];
    char **l_56 = &l_57;
    const unsigned char *l_551 = &g_552;
    int *l_930[4][2] = {{&g_931,&g_931},{&g_931,&g_931},{&g_931,&g_931},{&g_931,&g_931}};
    int *l_997 = (void*)0;
    char l_1017 = 0x67L;
    int *l_1049 = &g_491;
    int *l_1053 = (void*)0;
    int i, j;
    g_931 |= func_26(func_30(g_33, func_35(l_40, (safe_sub_func_uint8_t_u_u(func_43(l_40, ((*g_323) = ((*l_56) = func_47(func_49(((*l_54) = 1UL), l_56, &l_57, &g_58[6])))), &g_4[6][4][4]), 0x5DL)), l_40, l_551)), l_40, p_25);
    for (g_924 = 0; (g_924 < 44); g_924 = safe_add_func_int16_t_s_s(g_924, 5))
    {
        short l_936 = 0x9F80L;
        union U0 l_940[5][10][1] = {{{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}},{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}}},{{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}},{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}}},{{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}},{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}}},{{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}},{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}}},{{{0UL}},{{0xA3BA319BL}},{{0UL}},{{0xED35A66BL}},{{0xED35A66BL}},{{0UL}},{{0x139EB633L}},{{0xED35A66BL}},{{0UL}},{{0UL}}}};
        char *l_941 = &g_58[6];
        int *l_946 = &g_931;
        unsigned l_952 = 4294967288UL;
        unsigned short *l_983[7][5][1] = {{{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]}},{{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]}},{{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]}},{{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]}},{{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]}},{{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]}},{{&g_129[3][3]},{&g_129[3][8]},{&g_129[3][3]},{&g_129[3][3]},{&g_129[3][8]}}};
        int l_989 = 0L;
        int l_990 = 0x82EDFA92L;
        union U0 ***l_1023 = (void*)0;
        int i, j, k;
        for (g_861 = 19; (g_861 <= 56); g_861 = safe_add_func_uint16_t_u_u(g_861, 7))
        {
            return l_936;
        }
    }
    (*g_430) = (*g_430);
    for (g_60 = 0; (g_60 <= 2); g_60 += 1)
    {
        int l_1040 = 0xEA9D5444L;
        char *l_1060 = &g_501[7];
        for (g_673 = 0; (g_673 <= 2); g_673 += 1)
        {
            unsigned short l_1051 = 65535UL;
            int l_1052 = (-8L);
            char *l_1059 = &g_501[7];
            short *** const l_1067 = &g_308;
            int * const l_1100 = &g_1101;
            int * const *l_1099 = &l_1100;
            int *l_1105 = &l_1040;
            for (g_491 = 0; (g_491 <= 2); g_491 += 1)
            {
                int l_1041 = 3L;
                int l_1077 = 0xB588EC80L;
                int l_1089 = 0x9D5D204EL;
                int i;
                if ((safe_rshift_func_uint16_t_u_u(g_860[g_491], 8)))
                {
                    int i;
                    l_1041 = (l_1040 = g_860[g_60]);
                }
                else
                {
                    int i;
                    if (g_747[g_60])
                    {
                        int l_1048 = 0xE652459DL;
                        unsigned l_1050 = 0x95D37680L;
                        int **l_1054 = &g_402;
                        int i, j;
                        l_1052 = (l_1051 &= ((g_489[(g_491 + 2)][g_60] < ((g_489[(g_673 + 2)][g_491] <= (((253UL <= g_489[(g_673 + 4)][(g_491 + 1)]) < l_1040) & (safe_add_func_uint32_t_u_u((g_489[(g_673 + 2)][g_491] >= (safe_div_func_uint16_t_u_u(((l_1048 = g_747[g_60]) == ((((((l_930[2][0] != l_1049) <= l_1040) || l_1050) & 0x347CBA72L) <= 0L) <= l_1040)), g_55))), (*g_592))))) & l_1041)) && g_489[(g_673 + 2)][g_491]));
                        (*l_1054) = l_1053;
                    }
                    else
                    {
                        l_1052 = (safe_sub_func_uint16_t_u_u(l_1052, (g_1057 != (void*)0)));
                    }
                }
                (*g_590) = (*g_590);
            }
            for (g_16 = 0; (g_16 <= 5); g_16 += 1)
            {
                int **l_1094[10] = {&l_997,&l_997,&l_997,&l_997,&l_997,&l_997,&l_997,&l_997,&l_997,&l_997};
                int ***l_1095 = &g_524;
                int ***l_1096[3][9] = {{&l_1094[3],&l_1094[6],&l_1094[6],&l_1094[3],&l_1094[6],&l_1094[6],&l_1094[3],&l_1094[6],&l_1094[6]},{&l_1094[3],&l_1094[6],&l_1094[6],&l_1094[3],&l_1094[6],&l_1094[6],&l_1094[3],&l_1094[6],&l_1094[6]},{&l_1094[3],&l_1094[6],&l_1094[6],&l_1094[3],&l_1094[6],&l_1094[6],&l_1094[3],&l_1094[6],&l_1094[6]}};
                int * const **l_1098[3];
                short *l_1102 = &g_336;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1098[i] = &g_181;
                (*l_1049) = g_860[g_16];
                (*l_1049) ^= (g_747[g_673] != (safe_add_func_uint16_t_u_u(0x32C3L, ((*l_1102) &= ((g_1097 = l_1094[6]) == (l_1099 = &g_182))))));
                for (g_790 = 0; (g_790 <= 0); g_790 += 1)
                {
                    int i, j, k;
                    for (g_924 = 0; (g_924 <= 5); g_924 += 1)
                    {
                        unsigned l_1103 = 2UL;
                        l_1103 |= 1L;
                    }
                    if (g_511[(g_790 + 7)][g_790][(g_790 + 2)])
                        continue;
                }
                (*l_1049) |= 0xC158E5D5L;
                for (g_861 = 0; (g_861 <= 3); g_861 += 1)
                {
                    int *l_1104 = &g_4[3][4][0];
                    int i, j;
                    (*l_1100) |= g_489[(g_60 + 3)][g_60];
                    (*l_1100) = (*l_1100);
                    for (g_1101 = 8; (g_1101 >= 0); g_1101 -= 1)
                    {
                        int i, j;
                        l_1105 = l_1104;
                    }
                    if ((*l_1105))
                        break;
                }
            }
        }
    }
    return (*l_1049);
}







static int func_26(int p_27, char p_28, const char * p_29)
{
    unsigned l_812 = 0x294ED086L;
    int l_817 = 0xFD4BD1CBL;
    unsigned char *l_820 = &g_790;
    char l_821 = (-1L);
    int *l_822 = &g_491;
    int *l_823[6][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_333,&g_333,&g_333,&g_333},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_4[3][4][0],&g_4[3][4][0],&g_333,&g_4[3][4][0]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_333,&g_4[3][4][0],&g_333,&g_333,&g_4[3][4][0]}};
    union U0 l_830 = {0xFF451492L};
    union U0 **l_835[10] = {&g_431[1][6][0],&g_431[1][1][0],&g_431[1][1][0],&g_431[1][6][0],&g_431[1][1][0],&g_431[1][1][0],&g_431[1][6][0],&g_431[1][1][0],&g_431[1][1][0],&g_431[1][6][0]};
    unsigned short l_851 = 5UL;
    const short *l_874 = &g_91[0][0][1];
    const short **l_873 = &l_874;
    short l_929 = (-2L);
    int i, j;
    (*l_822) = (((p_27 > (l_812 ^ 0x6EDDL)) >= ((*l_820) &= (safe_sub_func_int16_t_s_s(((((***g_590) < l_812) == ((safe_add_func_int16_t_s_s(p_27, ((l_817 = ((*p_29) < (*p_29))) != ((safe_rshift_func_int16_t_s_u(0x6400L, l_812)) < l_812)))) < 0xC7D2L)) == p_27), 0x1EBEL)))) ^ l_821);
    g_825--;
    for (g_55 = 0; (g_55 <= 0); g_55 += 1)
    {
        int l_831 = 0x24608B36L;
        const unsigned l_832 = 0x636576FEL;
        short *l_836 = &g_91[0][1][1];
        short *l_837 = (void*)0;
        short *l_838 = &g_188;
        union U0 *l_844 = (void*)0;
        int *l_846 = &g_333;
        unsigned l_856[1];
        char l_867 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_856[i] = 4UL;
        (*l_822) = (safe_lshift_func_int16_t_s_s(((***g_590) ^ (p_27 <= l_831)), ((*l_838) |= (((**g_485) != (l_832 >= (safe_add_func_int16_t_s_s(((*l_836) ^= (p_28 > ((void*)0 == l_835[5]))), l_832)))) >= l_831))));
        for (p_27 = 0; (p_27 >= 0); p_27 -= 1)
        {
            int l_857 = 0x0626F09AL;
            int l_859 = 6L;
            union U0 * const *l_885 = (void*)0;
            unsigned short l_886 = 0x0650L;
            int i, j;
        }
    }
    for (g_548 = 0; (g_548 <= 6); g_548 += 1)
    {
        int l_918[8] = {0x6CFA17B5L,0x2327A1CEL,0x6CFA17B5L,0x6CFA17B5L,0x2327A1CEL,0x6CFA17B5L,0x6CFA17B5L,0x2327A1CEL};
        int i;
        (*l_822) ^= (g_58[g_548] <= g_58[g_548]);
        for (g_55 = 0; (g_55 <= 0); g_55 += 1)
        {
            int *l_889 = &g_60;
            int l_919 = 0x98EB45C1L;
            int ***l_927 = (void*)0;
            int ***l_928 = &g_524;
            for (g_16 = 0; (g_16 <= 0); g_16 += 1)
            {
                int **l_888[5][2];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_888[i][j] = &g_182;
                }
                l_889 = (l_823[0][3] = &p_27);
                for (g_552 = 2; (g_552 <= 6); g_552 += 1)
                {
                    int *l_903 = (void*)0;
                    l_889 = l_889;
                    for (g_336 = 0; (g_336 <= 0); g_336 += 1)
                    {
                        const short ***l_902 = &l_873;
                        int i;
                        (*l_889) = ((g_58[g_552] <= (safe_lshift_func_uint16_t_u_u(p_27, 7))) || (safe_mod_func_uint16_t_u_u((p_27 & (g_58[g_548] >= ((***g_590) = (safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(p_28, (((*g_33) | (safe_lshift_func_uint8_t_u_u(((&g_431[2][3][0] == (void*)0) >= (4294967291UL == g_58[g_552])), 7))) & p_27))), (-3L)))))), g_58[g_552])));
                        (*l_902) = &l_874;
                    }
                    for (g_254 = 2; (g_254 <= 6); g_254 += 1)
                    {
                        l_903 = &l_817;
                    }
                    if (((l_918[1] = ((safe_sub_func_int32_t_s_s(((~(*l_889)) > (0x352AL & (p_28 > (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_28, p_27)), (safe_rshift_func_int16_t_s_s(p_27, (safe_rshift_func_int16_t_s_u(p_28, g_58[g_548])))))), (p_27 || 0xF34F0C8FL))), p_28))))), p_27)) != 0x98DC99C8L)) | 0x65A80ACCL))
                    {
                        (*l_889) = ((*l_822) = p_28);
                    }
                    else
                    {
                        int l_920 = (-1L);
                        int l_921 = 0x3252D26DL;
                        int l_923 = 1L;
                        ++g_924;
                    }
                }
            }
            (*l_928) = &l_823[4][0];
            for (g_336 = 6; (g_336 >= 0); g_336 -= 1)
            {
                p_27 = 0xF8B19D83L;
            }
        }
    }
    return l_929;
}







static int func_30(const char * p_31, union U0 p_32)
{
    int *l_605 = &g_491;
    int **l_606 = (void*)0;
    int **l_607 = &g_402;
    unsigned ***l_616 = &g_591;
    short *l_619 = &g_91[0][1][1];
    char *l_620 = &g_58[6];
    short l_629 = 0x834FL;
    unsigned * const *l_674 = (void*)0;
    char * const *l_681 = &l_620;
    int l_733 = 0xF4085D11L;
    int l_736 = (-1L);
    unsigned l_737 = 0xC0A0023DL;
    const int l_757 = 0xFF169EACL;
    unsigned char l_800 = 255UL;
    l_605 = ((*l_607) = l_605);
    if (((safe_rshift_func_int8_t_s_s((((**g_590) = l_605) == l_605), (safe_mod_func_int16_t_s_s((((+(safe_rshift_func_int8_t_s_s(0x63L, 0))) == p_32.f0) == p_32.f2), (((((*l_605) = (p_32.f0 & (safe_rshift_func_uint8_t_u_u((**l_607), 1)))) < 0x0666B44EL) && 0xEB06L) & p_32.f4))))) ^ (**g_485)))
    {
        const unsigned l_649[1][1][2] = {{{6UL,6UL}}};
        const unsigned char ***l_678 = &g_676[0][0];
        int *l_694 = (void*)0;
        int l_725 = 0L;
        unsigned *l_750[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int i, j, k;
        for (g_190 = 0; (g_190 <= 0); g_190 += 1)
        {
            short l_625[8][10] = {{0x0304L,0x7416L,9L,0xF149L,0xF149L,9L,0x7416L,0x0304L,0xD9FCL,0x4A26L},{9L,0x7416L,0x0304L,0xD9FCL,0x4A26L,0xD9FCL,0x0304L,0x7416L,9L,0xF149L},{(-5L),(-1L),0x0304L,0x4A26L,0x7416L,0x7416L,0x4A26L,0x0304L,(-1L),(-5L)},{(-1L),0xD9FCL,9L,0x4A26L,4L,(-5L),4L,0x4A26L,9L,0xD9FCL},{0xF149L,0x0304L,(-5L),0xD9FCL,4L,7L,7L,4L,0xD9FCL,(-5L)},{4L,4L,(-1L),0xF149L,0x7416L,0x4A26L,(-1L),0x4A26L,0xF149L,4L},{4L,(-5L),4L,0x4A26L,9L,0xD9FCL,(-1L),(-1L),0xD9FCL,9L},{0x0304L,(-8L),(-8L),0x0304L,4L,0xF149L,0x4A26L,(-1L),0x4A26L,0xF149L}};
            unsigned char *l_626 = &g_511[4][0][0];
            unsigned char *l_630 = &g_552;
            int l_635[3];
            unsigned char l_693 = 0x9AL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_635[i] = 0x07790016L;
            (*l_607) = &l_635[2];
            for (g_366 = 0; (g_366 <= 0); g_366 += 1)
            {
                unsigned l_650 = 0x01502C2AL;
                int *l_654 = &g_60;
                int *l_655 = (void*)0;
                int *l_656 = &l_635[1];
                int *l_657[10][8][3] = {{{(void*)0,&g_333,&g_333},{&l_635[0],&l_635[0],&g_333},{(void*)0,&g_333,&g_491},{&l_635[0],&g_4[3][4][0],&g_333},{(void*)0,&g_333,&g_333},{&l_635[0],&l_635[0],&g_333},{(void*)0,&g_333,&g_491},{&l_635[0],&g_4[3][4][0],&g_333}},{{(void*)0,&g_333,&g_333},{&l_635[0],&l_635[0],&g_333},{(void*)0,&g_333,&g_491},{&l_635[0],&g_4[3][4][0],&g_333},{(void*)0,&g_333,&g_333},{&l_635[0],&l_635[0],&g_333},{(void*)0,&g_333,&g_491},{&l_635[0],&g_4[3][4][0],&g_333}},{{(void*)0,&g_333,&g_333},{&l_635[0],&l_635[0],&g_333},{(void*)0,&g_333,&g_491},{&l_635[0],&g_4[3][4][0],&g_333},{(void*)0,&g_333,&g_333},{&l_635[0],&l_635[0],&g_333},{(void*)0,&g_333,&g_491},{&l_635[0],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}},{{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&l_635[1],&g_4[3][4][0]},{(void*)0,&l_635[1],(void*)0},{&l_635[1],&g_4[5][2][2],&g_4[3][4][0]}}};
                int ****l_662 = (void*)0;
                int i, j, k;
            }
        }
        (*l_607) = l_694;
        for (g_552 = 0; (g_552 == 35); ++g_552)
        {
            int *l_702 = &g_333;
            int l_704 = (-1L);
            unsigned short **l_723 = &g_274;
            int l_735[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            int i;
        }
    }
    else
    {
        int * const l_756 = (void*)0;
        short *l_760 = &g_336;
        unsigned *l_761 = (void*)0;
        unsigned char l_766[8][9] = {{0xE4L,255UL,0x12L,251UL,0UL,0xE4L,3UL,0xAAL,1UL},{0UL,1UL,0xEFL,0x41L,1UL,0x05L,0x05L,1UL,0x41L},{0xEFL,0x12L,0xEFL,1UL,1UL,253UL,0x12L,0xE4L,0UL},{0x95L,1UL,0x2EL,0xEFL,1UL,0xCDL,0UL,0UL,253UL},{0UL,0x2EL,1UL,1UL,3UL,3UL,1UL,1UL,0x2EL},{1UL,250UL,1UL,0x41L,0xAAL,1UL,1UL,0xAAL,0x93L},{255UL,3UL,0x2EL,0xAAL,0UL,1UL,0x05L,1UL,0xAAL},{0xE4L,250UL,0xEFL,0UL,0UL,0xEFL,250UL,0xE4L,0UL}};
        char *l_767 = &g_58[6];
        int l_789 = 0x2D7D8E77L;
        int i, j;
        (*l_605) ^= 0L;
        l_736 |= (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((p_32.f1 || (safe_unary_minus_func_uint16_t_u(l_757))) < ((((**l_607) & (safe_rshift_func_uint16_t_u_s((*g_274), 10))) > ((*g_308) == l_760)) | 7L)) >= 0x99D5L), (**l_607))), p_32.f0));
        (*l_607) = l_761;
        if ((l_760 != l_619))
        {
            int *l_777 = (void*)0;
            for (g_337 = 0; (g_337 != 22); ++g_337)
            {
                int *l_775 = &g_491;
                for (g_289 = 0; (g_289 <= 1); g_289 = safe_add_func_uint8_t_u_u(g_289, 8))
                {
                    const int l_772 = (-1L);
                    short ***l_776 = &g_308;
                    if ((l_772 ^ (safe_mod_func_uint32_t_u_u((***g_590), 5UL))))
                    {
                        (*l_607) = l_775;
                    }
                    else
                    {
                        (*l_605) = (l_776 != (void*)0);
                        l_775 = l_777;
                        if (p_32.f2)
                            continue;
                    }
                }
            }
        }
        else
        {
            int l_802[4];
            int i;
            for (i = 0; i < 4; i++)
                l_802[i] = (-1L);
            for (l_736 = 0; (l_736 <= (-27)); l_736 = safe_sub_func_uint8_t_u_u(l_736, 1))
            {
                unsigned l_803 = 1UL;
                int l_805[6][8][5] = {{{0L,9L,1L,0x56489179L,0x8A789D91L},{(-1L),0L,(-1L),0x14B5B1F2L,0x9DD06C94L},{0xA4C266FEL,(-10L),(-10L),0xA4C266FEL,0xB9E5CD0FL},{0xB5AA43EEL,9L,0xF8B7CE9BL,0L,(-6L)},{0xF91639B8L,(-6L),(-1L),0xF5553BDCL,0xC051B8FDL},{0x15BB36C4L,(-7L),(-1L),0L,(-1L)},{0L,1L,0x4ECCB2CEL,0xA4C266FEL,1L},{0L,0xB0D2835DL,(-1L),0x9E1D8767L,(-5L)}},{{0xEC71FFBAL,0xF5553BDCL,0L,0x28C363BEL,6L},{0x56489179L,0xEC71FFBAL,0L,9L,0x671674DBL},{0x9E1D8767L,0L,6L,1L,1L},{(-3L),(-1L),0x5040F171L,0x671674DBL,0x24F1A58FL},{0L,0x221BCD7EL,0x1D1F26E1L,0xB0D2835DL,0x8A789D91L},{0xF91639B8L,0xC3A0E803L,(-1L),(-10L),0x8A789D91L},{0x28C363BEL,4L,0x274A258EL,0x9DD06C94L,0x24F1A58FL},{0L,0x9DD06C94L,(-1L),0x56489179L,1L}},{{0xA4D7971CL,0xB5AA43EEL,(-7L),6L,0x671674DBL},{0xB0D2835DL,(-1L),(-4L),0xB19F4F24L,6L},{0x4CC146F6L,0x28C363BEL,0xF9084B03L,0xA4C266FEL,(-5L)},{(-4L),0xC3A0E803L,4L,4L,0xC3A0E803L},{1L,6L,0L,0xB19F4F24L,(-7L)},{0xC051B8FDL,0x8A789D91L,0x4ECCB2CEL,0x221BCD7EL,0xA4C266FEL},{0x24F1A58FL,0L,0x14B5B1F2L,(-1L),0xC051B8FDL},{0xC051B8FDL,0L,(-10L),0x9DD06C94L,0xD4C53C1FL}},{{1L,0xF5755075L,(-6L),0L,0xB19F4F24L},{(-4L),0xB0D2835DL,0x1A15A91EL,(-7L),0L},{0x4CC146F6L,0xF616F391L,0L,(-1L),7L},{6L,0x24F1A58FL,0x671674DBL,0x5040F171L,(-1L)},{0xB1CB5C73L,0xF91639B8L,0x9EFC14C9L,0xF616F391L,0x9E1D8767L},{(-10L),0L,0xF9084B03L,0x9E1D8767L,0xF7A78D72L},{0x9E1D8767L,0x14B5B1F2L,(-3L),0xD4C53C1FL,0xA4D7971CL},{0x9EFC14C9L,0x14B5B1F2L,0xB50740E9L,0x9EFC14C9L,(-1L)}},{{4L,0L,0xF7A78D72L,(-10L),0x4ECCB2CEL},{(-1L),0xF91639B8L,0x221BCD7EL,4L,0x274A258EL},{1L,0x24F1A58FL,0L,0x9581D275L,6L},{0x14B5B1F2L,0xF616F391L,0xF8B7CE9BL,0L,0L},{(-9L),6L,0L,0xD4C53C1FL,0xD4C53C1FL},{0xBB0589D4L,(-1L),0xBB0589D4L,7L,0x1A15A91EL},{0x14B5B1F2L,0xBB0589D4L,0x85777DCDL,0xF5553BDCL,0xAB7C1D11L},{0xD4C53C1FL,0L,0xC3A0E803L,0x5040F171L,1L}},{{0xF8B7CE9BL,(-8L),0x85777DCDL,0xAB7C1D11L,0L},{4L,(-6L),0xBB0589D4L,6L,1L},{0L,1L,0L,4L,(-8L)},{7L,0x9E1D8767L,0xF8B7CE9BL,0xA68460C1L,0L},{(-10L),0xA68460C1L,0L,0x14B5B1F2L,0L},{0x24F1A58FL,4L,1L,0L,(-1L)},{0xB1CB5C73L,0xA4D7971CL,0x9581D275L,0x8AF897C4L,0L},{(-8L),(-6L),7L,0L,0xAB7C1D11L}}};
                int i, j, k;
                for (g_491 = 0; (g_491 >= 9); ++g_491)
                {
                    short l_782[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_782[i] = 0L;
                    return l_782[0];
                }
                for (g_336 = 0; (g_336 > 25); g_336 = safe_add_func_int8_t_s_s(g_336, 6))
                {
                    short l_799[9] = {0xFDD3L,0xFDD3L,(-9L),0xFDD3L,0xFDD3L,(-9L),0xFDD3L,0xFDD3L,(-9L)};
                    int l_804 = 0L;
                    int i;
                    for (g_548 = 0; (g_548 == 24); g_548 = safe_add_func_uint16_t_u_u(g_548, 5))
                    {
                        int *l_787 = &g_333;
                        int *l_788[1][6] = {{&g_333,&g_333,&l_733,&g_333,&g_333,&l_733}};
                        char *l_801[9];
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_801[i] = &g_254;
                        g_790--;
                        l_805[4][5][3] = (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*g_486) < (0UL <= ((*l_619) = (((safe_div_func_int8_t_s_s((l_799[5] = (*g_33)), (p_32.f2 &= ((*l_767) &= l_800)))) && (*g_274)) != 0x1761EE13L)))), (((l_802[1] < (*l_787)) == 0xEDL) < l_803))), l_804));
                    }
                }
            }
        }
    }
    for (g_16 = 1; (g_16 <= 8); g_16 += 1)
    {
        char * const **l_809 = &l_681;
        int *l_810 = (void*)0;
        int *l_811 = &g_60;
        int i;
        (*l_811) &= (safe_add_func_int16_t_s_s(((*l_619) = ((*l_605) = (g_501[g_16] | 0xA4B7L))), (g_501[g_16] == (safe_unary_minus_func_uint16_t_u(((void*)0 != l_809))))));
        (*l_605) = ((*p_31) | 0xB5L);
    }
    return p_32.f2;
}







static union U0 func_35(unsigned p_36, short p_37, int p_38, const unsigned char * p_39)
{
    unsigned short l_557[3];
    int l_558 = (-1L);
    union U0 l_563 = {3UL};
    unsigned char * const *l_575 = &g_455;
    const int *l_599 = &g_600;
    const int **l_598 = &l_599;
    char *l_601 = &g_58[6];
    unsigned char l_604 = 0UL;
    int i;
    for (i = 0; i < 3; i++)
        l_557[i] = 0x0AD0L;
    l_558 = (safe_add_func_uint32_t_u_u(0x19C0927DL, (1UL | ((*g_274) > (p_38 >= (safe_mod_func_int32_t_s_s(l_557[2], 4294967286UL)))))));
    for (g_386 = 25; (g_386 <= 54); ++g_386)
    {
        unsigned l_571 = 1UL;
        int l_572 = (-1L);
        for (g_16 = 0; (g_16 == 53); g_16 = safe_add_func_int32_t_s_s(g_16, 1))
        {
            return l_563;
        }
        for (g_55 = 0; (g_55 >= 30); g_55 = safe_add_func_uint8_t_u_u(g_55, 1))
        {
            unsigned l_570 = 0x22E0EE37L;
            int l_593[8][10] = {{0L,(-6L),1L,(-2L),6L,(-6L),(-3L),0x717D9985L,(-3L),0x52BD86AFL},{3L,0x7325AF52L,0L,(-6L),6L,(-6L),0L,0x7325AF52L,3L,0L},{6L,(-3L),0xA70FC6FDL,0x23F84AE3L,1L,3L,(-6L),0L,0L,0L},{0xA70FC6FDL,0x605787FAL,0x717D9985L,0x23F84AE3L,0x23F84AE3L,0x717D9985L,0x605787FAL,0xA70FC6FDL,3L,1L},{0x605787FAL,0L,0xA6079B65L,(-6L),(-2L),0L,0L,0x23F84AE3L,(-3L),0x23F84AE3L},{(-6L),0x23F84AE3L,0xA6079B65L,(-2L),0xA6079B65L,0x23F84AE3L,(-6L),0xA70FC6FDL,0x717D9985L,0x7325AF52L},{1L,(-6L),0x717D9985L,1L,0L,0xA6079B65L,0xA6079B65L,(-6L),(-6L),0xA6079B65L},{0L,(-3L),0xA6079B65L,0xA6079B65L,(-3L),0L,1L,0x52BD86AFL,0L,3L}};
            int i, j;
            if (p_36)
                break;
            for (g_94 = 0; (g_94 >= 50); g_94 = safe_add_func_uint16_t_u_u(g_94, 1))
            {
                short l_585 = 0L;
                unsigned short **l_586 = &g_274;
                int l_588 = 0xAE86BC28L;
                l_572 ^= ((safe_sub_func_int16_t_s_s(((g_34 != l_570) > l_571), (+p_36))) ^ l_570);
                for (g_548 = (-21); (g_548 >= 28); ++g_548)
                {
                    unsigned char * const **l_576 = &l_575;
                    unsigned l_581 = 1UL;
                    unsigned *l_582 = &g_328.f1;
                    unsigned l_587 = 0xA8DD4B3FL;
                    int l_589[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_589[i] = 0x01245671L;
                    (*l_576) = l_575;
                    l_589[1] = ((l_588 ^= ((-2L) | (safe_sub_func_int8_t_s_s((l_572 = (safe_mod_func_int32_t_s_s(l_581, (((*l_582) = l_581) & ((l_585 |= (&g_485 != (void*)0)) >= (l_586 == (void*)0)))))), l_587)))) > ((0x2D2BE89EL < (-4L)) == 0x53CDL));
                    for (l_587 = 0; l_587 < 9; l_587 += 1)
                    {
                        g_324[l_587] = &g_501[7];
                    }
                }
                l_593[0][5] ^= ((void*)0 == g_590);
            }
        }
    }
    l_558 = (safe_lshift_func_int8_t_s_s(((p_38 != (*l_599)) && (-1L)), (*l_599)));
    return l_563;
}







static const unsigned char func_43(unsigned p_44, char * p_45, int * p_46)
{
    int l_334 = (-1L);
    int l_335[4][7][8] = {{{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL}},{{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL}},{{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL}},{{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL},{0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL,0x4BB95E3BL}}};
    short *l_341 = (void*)0;
    unsigned l_376 = 4294967289UL;
    unsigned *l_378 = &g_94;
    unsigned **l_377[10] = {&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378,&l_378};
    unsigned short ** const l_449 = &g_274;
    unsigned char **l_456 = &g_455;
    char *l_471 = &g_328.f2;
    int i, j, k;
    for (g_234 = 0; (g_234 <= 5); g_234 += 1)
    {
        short *l_340 = (void*)0;
        int l_345 = 0xE0CF0976L;
        int l_355 = 0xBDC9EAAFL;
        int l_490 = 0x7ACE2912L;
        const unsigned short l_497 = 0x623EL;
        int l_502[1][7] = {{1L,8L,1L,1L,8L,1L,1L}};
        char l_529 = 0x87L;
        int i, j;
        for (g_60 = 3; (g_60 <= 8); g_60 += 1)
        {
            union U0 * const l_327 = &g_328;
            union U0 *l_330[8];
            union U0 **l_329[8][4] = {{&l_330[6],&l_330[6],(void*)0,&l_330[6]},{&l_330[6],(void*)0,(void*)0,&l_330[6]},{&l_330[6],&l_330[6],&l_330[6],(void*)0},{&l_330[6],&l_330[6],(void*)0,&l_330[3]},{&l_330[6],&l_330[6],(void*)0,&l_330[3]},{(void*)0,&l_330[6],(void*)0,(void*)0},{&l_330[6],&l_330[6],(void*)0,&l_330[6]},{&l_330[6],(void*)0,&l_330[6],&l_330[3]}};
            union U0 **l_331 = &l_330[4];
            int *l_332[5] = {&g_333,&g_333,&g_333,&g_333,&g_333};
            int i, j;
            for (i = 0; i < 8; i++)
                l_330[i] = &g_328;
            (*l_331) = l_327;
            g_337++;
            if (g_129[g_234][(g_234 + 3)])
                continue;
        }
        for (g_16 = 0; (g_16 <= 8); g_16 += 1)
        {
            return p_44;
        }
        if ((l_340 != ((*g_308) = l_341)))
        {
            int l_344 = 0x12FE5A6FL;
            unsigned *l_348 = &g_289;
            int l_353 = 7L;
            short *l_354[5][9][5] = {{{&g_336,&g_336,&g_91[0][0][1],&g_188,&g_91[0][1][1]},{&g_188,&g_336,(void*)0,&g_91[0][1][1],&g_336},{&g_91[0][1][1],&g_188,&g_91[0][0][1],&g_91[0][1][1],(void*)0},{&g_91[0][1][1],&g_336,&g_188,&g_336,(void*)0},{&g_336,&g_91[0][1][2],&g_188,&g_336,&g_336},{(void*)0,&g_91[0][1][1],(void*)0,&g_91[0][1][1],&g_336},{&g_91[0][1][2],&g_91[0][1][1],&g_336,&g_91[0][2][2],&g_336},{&g_188,&g_188,&g_91[0][0][1],&g_91[0][1][1],&g_91[0][1][1]},{&g_336,&g_188,&g_91[0][1][1],&g_336,&g_91[0][1][2]}},{{&g_91[0][2][0],&g_188,(void*)0,&g_336,&g_188},{&g_91[0][1][1],&g_188,&g_188,(void*)0,&g_91[0][2][2]},{&g_91[0][1][1],&g_188,(void*)0,&g_336,&g_91[0][1][1]},{(void*)0,&g_91[0][1][1],&g_91[0][1][1],&g_188,&g_91[0][0][1]},{&g_188,&g_91[0][1][1],&g_91[0][1][2],&g_91[0][1][0],&g_91[0][2][0]},{&g_91[0][0][1],&g_91[0][1][2],&g_336,&g_336,&g_91[0][1][2]},{&g_336,&g_336,&g_188,&g_91[0][2][0],(void*)0},{(void*)0,&g_188,&g_91[0][1][1],&g_336,&g_188},{&g_188,&g_336,(void*)0,&g_188,&g_91[0][1][1]}},{{&g_91[0][1][1],&g_188,(void*)0,&g_336,&g_188},{&g_336,&g_188,&g_336,(void*)0,&g_188},{&g_91[0][1][1],&g_336,&g_188,&g_336,&g_91[0][0][1]},{(void*)0,&g_188,&g_91[0][1][1],(void*)0,&g_188},{(void*)0,&g_336,&g_336,&g_336,(void*)0},{(void*)0,(void*)0,&g_91[0][1][2],(void*)0,(void*)0},{&g_336,&g_91[0][1][1],&g_336,(void*)0,&g_188},{&g_91[0][1][1],&g_188,&g_91[0][1][1],(void*)0,(void*)0},{&g_91[0][0][2],(void*)0,&g_91[0][1][1],&g_188,(void*)0}},{{(void*)0,&g_188,&g_91[0][1][1],&g_336,&g_188},{&g_91[0][1][1],&g_336,&g_188,(void*)0,&g_91[0][0][1]},{&g_91[0][1][1],&g_188,(void*)0,&g_91[0][1][1],&g_188},{&g_91[0][1][1],&g_336,&g_336,&g_91[0][1][1],&g_188},{&g_188,&g_336,&g_188,&g_336,&g_91[0][1][1]},{&g_336,&g_91[0][1][1],&g_336,&g_91[0][1][1],&g_91[0][1][1]},{(void*)0,&g_188,&g_91[0][1][1],&g_336,&g_91[0][1][2]},{&g_91[0][1][1],&g_91[0][1][1],&g_336,&g_91[0][1][1],&g_91[0][1][1]},{(void*)0,&g_91[0][1][1],&g_91[0][0][1],&g_91[0][1][1],&g_91[0][1][1]}},{{&g_336,&g_188,(void*)0,(void*)0,&g_91[0][1][1]},{&g_336,&g_188,(void*)0,(void*)0,(void*)0},{&g_336,(void*)0,&g_336,&g_336,&g_91[0][1][1]},{&g_188,&g_188,&g_91[0][0][1],&g_336,(void*)0},{&g_91[0][1][1],&g_336,&g_91[0][1][2],&g_91[0][1][1],&g_336},{&g_188,(void*)0,&g_91[0][0][1],(void*)0,(void*)0},{(void*)0,&g_188,&g_336,&g_91[0][1][1],&g_188},{&g_188,&g_188,(void*)0,&g_188,(void*)0},{&g_91[0][1][1],&g_91[0][1][1],&g_91[0][1][1],&g_188,&g_91[0][1][1]}}};
            int *l_380 = (void*)0;
            int *l_381 = &l_344;
            int *l_382 = &g_333;
            int *l_383 = &l_335[2][6][5];
            int *l_384 = (void*)0;
            int *l_385[10][7][3] = {{{(void*)0,&g_4[6][3][4],&l_335[0][0][5]},{&l_335[1][0][2],&l_345,&l_345},{(void*)0,&g_60,&l_335[2][3][2]},{&l_355,&l_344,&l_334},{&g_333,&l_353,&l_344},{(void*)0,&g_333,&g_60},{&l_355,&l_355,&l_355}},{{&l_335[0][0][5],&l_335[0][0][5],&g_4[3][4][0]},{&l_344,&l_345,&l_335[1][0][2]},{&l_344,&l_335[0][0][5],&l_335[0][0][5]},{&l_353,&l_335[1][4][4],(void*)0},{&l_345,&g_4[5][4][1],(void*)0},{&l_345,(void*)0,&l_344},{&l_353,(void*)0,&l_345}},{{&l_344,&l_353,&l_335[0][0][5]},{&l_344,&g_333,&g_333},{&l_335[0][0][5],&l_334,&l_344},{&l_355,&l_355,&g_4[5][4][1]},{(void*)0,&l_334,&g_4[5][4][1]},{&g_4[5][4][1],(void*)0,&l_345},{&l_344,&l_344,&l_335[0][1][2]}},{{&l_355,&g_4[4][4][2],(void*)0},{&g_4[3][4][0],&l_353,&g_4[4][0][5]},{&g_4[6][3][4],&l_355,(void*)0},{&l_353,&g_4[3][4][0],&g_4[4][0][5]},{&l_345,&l_334,(void*)0},{&l_353,&l_344,&l_335[0][1][2]},{&g_333,(void*)0,&l_345}},{{&l_345,&l_355,&g_4[5][4][1]},{&l_353,&l_345,&g_60},{(void*)0,(void*)0,(void*)0},{&l_334,&l_345,&g_333},{&l_334,&l_344,&l_344},{&l_335[2][1][6],&g_4[3][4][0],(void*)0},{&l_344,&l_345,(void*)0}},{{&g_60,&l_335[3][0][0],(void*)0},{&l_344,&l_335[3][0][0],&l_335[0][0][5]},{&l_345,&l_345,(void*)0},{&g_333,&g_4[3][4][0],&g_4[3][4][0]},{&l_335[1][0][2],&l_344,&l_344},{&l_335[0][0][5],&l_345,&l_335[0][0][5]},{&g_60,(void*)0,&l_344}},{{&l_335[0][0][5],&l_345,&l_353},{(void*)0,&l_355,&l_345},{&l_355,(void*)0,&l_355},{&l_353,&l_344,&l_335[3][5][5]},{&g_333,&l_334,&l_335[0][0][5]},{&l_355,&g_4[3][4][0],&l_335[2][3][2]},{(void*)0,&l_355,&l_344}},{{&l_355,&l_353,(void*)0},{(void*)0,&l_344,&g_4[5][4][1]},{&l_345,(void*)0,&l_335[0][0][5]},{&l_344,&g_4[3][4][0],&g_333},{&l_344,(void*)0,(void*)0},{(void*)0,&l_335[0][0][5],&l_344},{&l_345,&l_355,&g_4[6][3][4]}},{{(void*)0,&g_4[6][3][4],&l_335[3][0][0]},{&g_60,&l_335[0][0][5],&g_333},{&l_345,&l_344,&g_60},{&l_355,&g_333,&l_344},{&g_4[4][4][2],&l_345,&l_344},{&g_60,&l_335[0][0][5],&g_60},{&g_333,&l_335[0][0][5],&g_333}},{{(void*)0,&g_60,&l_335[3][0][0]},{(void*)0,&l_353,&g_4[6][3][4]},{&g_60,&l_345,&l_344},{&l_334,(void*)0,(void*)0},{&l_335[0][1][2],&l_345,&g_333},{(void*)0,&l_335[0][0][5],&l_335[0][0][5]},{&l_345,(void*)0,&g_4[5][4][1]}}};
            int **l_389 = &l_381;
            int **l_390 = &l_385[8][6][1];
            int i, j, k;
            if (((safe_div_func_int8_t_s_s(l_344, (l_344 ^ p_44))) && (l_345 > (safe_sub_func_uint32_t_u_u((++(*l_348)), (safe_sub_func_uint32_t_u_u(((l_355 = ((p_44 != l_353) & ((l_335[0][0][5] &= (p_44 != (0x4DL >= (-6L)))) <= l_345))) && l_345), 4L)))))))
            {
                for (g_60 = 8; (g_60 >= 3); g_60 -= 1)
                {
                    int *l_356 = (void*)0;
                    int *l_357 = &l_335[0][0][5];
                    if ((*p_46))
                        break;
                    (*l_357) &= l_345;
                    (*l_357) |= (*p_46);
                    l_355 &= (l_353 = 0x9FDD93EAL);
                }
                return g_58[2];
            }
            else
            {
                int *l_358 = (void*)0;
                int *l_359 = &g_333;
                int *l_360 = (void*)0;
                int *l_361 = &g_333;
                int *l_362 = &g_60;
                int *l_363 = (void*)0;
                int *l_364 = &l_335[0][0][5];
                int *l_365[9] = {&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345,&l_345};
                unsigned char *l_375[3][9] = {{(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16},{(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16},{(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16,(void*)0,&g_16,&g_16}};
                int i, j;
                g_366--;
                for (g_289 = 0; (g_289 <= 8); g_289 += 1)
                {
                    unsigned char l_370 = 248UL;
                    for (g_188 = 5; (g_188 >= 0); g_188 -= 1)
                    {
                        short l_369[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_369[i] = 5L;
                        ++l_370;
                        return p_44;
                    }
                    (*l_359) |= (*p_46);
                }
                if ((safe_rshift_func_uint8_t_u_u((g_16 = l_355), l_376)))
                {
                    return p_44;
                }
                else
                {
                    unsigned ***l_379 = &l_377[3];
                    (*l_379) = l_377[4];
                }
                l_345 |= (l_344 != ((p_44 == (((*g_33) > g_333) ^ p_44)) | 2UL));
            }
            if (l_355)
                break;
            g_386++;
            (*l_390) = ((*l_389) = (void*)0);
        }
        else
        {
            unsigned l_398 = 0x77E93D4BL;
            int l_427 = 0L;
            char **l_457 = &g_324[7];
            int l_467[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int *l_488[7] = {&g_60,&g_333,&g_333,&g_60,&g_333,&g_333,&g_60};
            int l_507 = 0x3EB93BDEL;
            const unsigned short **l_536 = (void*)0;
            const unsigned short ***l_535 = &l_536;
            unsigned short l_540[9] = {0xF283L,0xB07BL,0xF283L,0xB07BL,0xF283L,0xB07BL,0xF283L,0xB07BL,0xF283L};
            int i;
            for (p_44 = 0; p_44 < 9; p_44 += 1)
            {
                g_324[p_44] = &g_58[1];
            }
            for (l_355 = 3; (l_355 <= 8); l_355 += 1)
            {
                unsigned short l_393[7] = {0xBB21L,1UL,0xBB21L,0xBB21L,1UL,0xBB21L,0xBB21L};
                unsigned ** const l_406[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                const unsigned short *l_418 = &g_129[3][0];
                int l_426 = 1L;
                unsigned char *l_473 = &g_16;
                unsigned char **l_472 = &l_473;
                int l_475 = 1L;
                int *l_495 = (void*)0;
                int i;
                if ((p_44 > (safe_mod_func_int8_t_s_s(((p_44 < l_345) || ((l_393[1] ^ ((!(safe_mod_func_int16_t_s_s((+0x75B8L), (g_58[1] && (safe_rshift_func_int8_t_s_s((p_44 ^ p_44), l_393[1])))))) ^ l_376)) == 0UL)), l_398))))
                {
                    int *l_401 = &l_345;
                    int **l_403 = &g_182;
                    unsigned short *l_410 = (void*)0;
                    unsigned short *l_411 = &l_393[1];
                    unsigned short *l_417[10][7] = {{&g_337,&g_129[5][1],&g_366,(void*)0,(void*)0,&g_366,&g_129[5][1]},{(void*)0,&g_234,&g_337,&g_337,(void*)0,&g_55,(void*)0},{&g_129[5][1],&g_129[0][5],&g_234,(void*)0,&g_337,&g_337,&g_337},{(void*)0,(void*)0,&g_337,&g_337,(void*)0,(void*)0,&g_129[5][1]},{&g_234,&g_337,&g_337,(void*)0,&g_55,(void*)0,(void*)0},{(void*)0,&g_337,&g_234,(void*)0,&g_129[5][1],(void*)0,&g_129[5][1]},{&g_55,&g_337,&g_337,&g_55,&g_129[0][5],(void*)0,&g_337},{&g_55,(void*)0,&g_366,&g_337,(void*)0,(void*)0,&g_337},{(void*)0,&g_129[0][5],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_55,(void*)0,&g_337}};
                    unsigned char *l_421 = (void*)0;
                    unsigned char *l_422 = (void*)0;
                    unsigned char *l_423 = &g_126;
                    int i, j;
                    (*l_401) = (safe_rshift_func_uint16_t_u_s(l_393[6], p_44));
                    (*l_403) = g_402;
                    if ((((p_44 & g_289) != p_44) < p_44))
                    {
                        g_402 = &l_335[0][0][5];
                        if ((**g_181))
                            break;
                    }
                    else
                    {
                        unsigned char l_407 = 255UL;
                        l_407 &= (((safe_lshift_func_int16_t_s_u((p_44 < ((*l_378) = 0x51A9EF4CL)), p_44)) == (p_44 > l_398)) > (0xB2L ^ (l_406[3] != (void*)0)));
                        return l_393[2];
                    }
                    l_427 &= ((*g_274) > ((++(*l_411)) != ((((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((((*l_401) = 0UL) > ((void*)0 == l_418)) ^ (g_386 = (((*l_378) = (l_335[0][0][0] <= (((*l_423) = g_333) == ((safe_lshift_func_int8_t_s_s((l_334 &= ((*g_274) != (9UL && (g_60 && l_355)))), l_355)) == l_426)))) != g_4[1][0][5]))))), 5)) < (*g_33)) != l_376) && 4294967295UL)));
                }
                else
                {
                    union U0 * const l_434 = &g_435;
                    union U0 * const *l_433 = &l_434;
                    union U0 * const **l_432 = &l_433;
                    int *l_436 = &g_333;
                    l_426 |= ((safe_sub_func_int8_t_s_s((p_44 | l_345), 255UL)) == (g_94 = (g_430 == ((*l_432) = &g_431[1][6][0]))));
                    (*l_436) = (*g_402);
                    (*l_436) = (safe_add_func_uint32_t_u_u(l_345, ((safe_mul_func_uint16_t_u_u(l_426, ((safe_add_func_uint32_t_u_u((((*l_436) ^ l_355) <= (g_4[4][3][3] < ((safe_add_func_uint8_t_u_u((l_393[1] < (safe_add_func_uint32_t_u_u(p_44, ((p_44 ^ 0L) >= l_398)))), (*g_33))) && (-4L)))), 0xE446F691L)) <= l_427))) && l_355)));
                    (*l_436) |= l_345;
                }
                if ((*p_46))
                    continue;
                if ((*g_402))
                {
                    int l_447 = 0x18722531L;
                    unsigned char l_448 = 247UL;
                    int *l_453 = &g_333;
                    for (g_60 = 8; (g_60 >= 0); g_60 -= 1)
                    {
                        unsigned short ***l_450 = (void*)0;
                        unsigned short **l_452 = &g_274;
                        unsigned short ***l_451 = &l_452;
                        l_448 = l_447;
                        (*l_451) = l_449;
                        l_335[0][0][5] |= (g_333 = (p_44 && (*g_274)));
                    }
                    (*l_453) = (*g_402);
                    for (l_345 = 0; (l_345 <= 8); l_345 += 1)
                    {
                        const char **l_459[1];
                        const char ***l_458 = &l_459[0];
                        short *l_466 = &g_91[0][1][1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_459[i] = &g_33;
                        g_454 = (l_456 = g_454);
                        l_467[2] &= (l_426 = ((((((l_457 = &p_45) == ((*l_458) = &g_33)) || l_398) ^ (((l_427 & ((*l_466) = ((safe_div_func_int32_t_s_s((*g_402), (*p_46))) && ((safe_div_func_uint32_t_u_u(0x469FE3B5L, (safe_lshift_func_uint16_t_u_u((*g_274), l_376)))) & 8L)))) > p_44) || l_427)) || p_44) ^ p_44));
                        if ((*p_46))
                            break;
                    }
                }
                else
                {
                    for (l_376 = 0; (l_376 <= 8); l_376 += 1)
                    {
                        int **l_468[5];
                        int **l_469[9][8] = {{&g_402,&g_402,&g_402,&g_182,&g_402,&g_182,&g_182,&g_182},{&g_402,&g_182,&g_182,&g_182,&g_182,&g_402,&g_182,&g_402},{&g_402,&g_402,&g_182,&g_182,&g_402,(void*)0,(void*)0,&g_182},{&g_402,&g_402,(void*)0,&g_182,(void*)0,&g_182,(void*)0,&g_402},{(void*)0,(void*)0,&g_182,&g_182,&g_182,&g_182,&g_402,&g_182},{&g_182,&g_182,&g_402,&g_182,(void*)0,&g_402,&g_402,(void*)0},{&g_182,&g_182,&g_182,&g_182,&g_402,&g_182,(void*)0,&g_402},{&g_402,&g_182,(void*)0,&g_402,(void*)0,&g_402,(void*)0,&g_182},{&g_182,&g_182,&g_182,&g_402,&g_182,&g_182,&g_182,&g_182}};
                        int **l_470 = &g_182;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_468[i] = (void*)0;
                        (*l_470) = (*g_181);
                        p_46 = p_46;
                    }
                }
                if ((((*g_454) = func_47(p_46)) != ((*l_472) = (void*)0)))
                {
                    int *l_474 = &l_426;
                    l_345 = ((*l_474) = l_398);
                    if (l_475)
                        break;
                }
                else
                {
                    unsigned l_476 = 0UL;
                    int l_480 = (-1L);
                    for (g_188 = 0; (g_188 <= 8); g_188 += 1)
                    {
                        int **l_477 = &g_402;
                        int *l_478 = &g_333;
                    }
                    for (g_337 = 0; (g_337 <= 0); g_337 += 1)
                    {
                        int *l_479[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_479[i] = &g_60;
                        l_480 ^= 0x628FBCA9L;
                    }
                    if ((safe_lshift_func_uint16_t_u_s(((**l_449) = (p_44 | l_334)), (safe_lshift_func_int16_t_s_s(l_393[6], l_393[1])))))
                    {
                        int **l_487[7][2] = {{&g_182,&g_182},{&g_402,&g_182},{&g_182,&g_182},{&g_182,&g_182},{&g_402,&g_182},{&g_182,&g_182},{&g_182,&g_182}};
                        int i, j;
                        g_485 = &g_33;
                        l_488[5] = p_46;
                        ++g_492;
                        if (l_334)
                            break;
                    }
                    else
                    {
                        int *l_496 = &l_490;
                        g_333 = (*g_402);
                        l_496 = l_495;
                        return l_497;
                    }
                }
                for (l_426 = 0; (l_426 >= 0); l_426 -= 1)
                {
                    int i, j, k;
                    if (g_91[l_426][l_426][(l_426 + 1)])
                        break;
                }
            }
            if (((*g_402) | ((*l_378) &= p_44)))
            {
                unsigned l_500 = 0UL;
                if ((*p_46))
                    break;
                if ((l_335[2][5][5] ^= 0L))
                {
                    short l_498[6][5] = {{(-1L),(-1L),5L,(-1L),5L},{(-1L),(-1L),5L,(-1L),5L},{(-1L),(-1L),5L,(-1L),5L},{(-1L),(-1L),5L,(-1L),5L},{(-1L),(-1L),5L,(-1L),5L},{(-1L),(-1L),5L,(-1L),5L}};
                    int i, j;
                    if (l_498[5][4])
                        break;
                }
                else
                {
                    const unsigned l_499 = 0x556741FCL;
                    for (l_334 = 0; (l_334 <= 8); l_334 += 1)
                    {
                        return l_499;
                    }
                    if (l_500)
                    {
                        if (g_501[7])
                            break;
                        g_60 = ((!p_44) != l_502[0][3]);
                    }
                    else
                    {
                        if ((*p_46))
                            break;
                    }
                    for (l_490 = 0; (l_490 <= 8); l_490 += 1)
                    {
                        int **l_503[6][9][4] = {{{&g_182,&l_488[4],(void*)0,&l_488[2]},{&g_402,&l_488[4],&g_182,&g_182},{(void*)0,&g_182,(void*)0,&l_488[5]},{(void*)0,&l_488[2],(void*)0,&l_488[5]},{&g_182,&g_402,&g_402,&l_488[1]},{&l_488[1],&g_182,&l_488[5],&l_488[4]},{&l_488[4],&l_488[3],(void*)0,&g_182},{(void*)0,&g_402,&g_182,&g_402},{&g_182,&l_488[0],&g_402,&g_182}},{{&g_402,&l_488[5],&g_182,&g_402},{&g_182,&g_182,(void*)0,&g_182},{&l_488[5],&g_402,&l_488[4],(void*)0},{(void*)0,&g_182,&g_182,&g_182},{&g_182,(void*)0,&l_488[6],&g_182},{&l_488[5],&g_182,&l_488[5],&l_488[5]},{&g_182,(void*)0,&g_182,(void*)0},{(void*)0,&l_488[5],&g_402,&g_182},{&l_488[5],&g_402,&g_402,&l_488[5]}},{{(void*)0,&g_182,&g_182,&g_182},{&g_182,&g_402,&l_488[6],(void*)0},{&l_488[6],(void*)0,&g_182,(void*)0},{&g_182,&g_182,(void*)0,&l_488[2]},{&g_182,&g_402,&g_182,&l_488[2]},{&g_402,&l_488[4],&g_182,&g_182},{&g_182,&l_488[5],(void*)0,&g_182},{&l_488[4],&g_402,(void*)0,&l_488[5]},{(void*)0,&l_488[4],&g_182,&l_488[6]}},{{&l_488[1],(void*)0,&g_182,&g_402},{&g_182,&g_182,(void*)0,&g_182},{(void*)0,(void*)0,(void*)0,&l_488[6]},{(void*)0,&l_488[6],(void*)0,(void*)0},{&g_182,(void*)0,&l_488[5],&g_402},{&l_488[2],(void*)0,&g_402,&g_182},{&g_402,&g_182,&g_182,&g_182},{&g_182,&g_182,&g_182,&g_182},{&g_182,(void*)0,&g_182,&g_182}},{{&g_182,&g_182,&l_488[2],&g_182},{&g_182,&g_182,&l_488[5],&g_182},{&g_182,(void*)0,&l_488[4],&g_182},{&g_402,&g_182,(void*)0,(void*)0},{&l_488[4],(void*)0,&l_488[0],&l_488[2]},{&g_182,&l_488[6],&g_182,(void*)0},{&g_182,&g_402,&l_488[5],&g_182},{(void*)0,&g_402,&g_182,&l_488[1]},{&g_182,&g_182,&l_488[4],&g_402}},{{&g_182,&l_488[1],&l_488[5],(void*)0},{(void*)0,&l_488[5],&l_488[5],&g_182},{(void*)0,&g_402,&g_182,&g_182},{&l_488[5],&g_182,(void*)0,&g_182},{&g_402,(void*)0,&g_402,(void*)0},{&g_182,&g_182,&g_182,&g_402},{&g_182,&g_182,&g_182,&g_182},{(void*)0,&l_488[5],&l_488[1],&l_488[4]},{&g_402,&l_488[0],&g_182,&l_488[0]}}};
                        int i, j, k;
                        g_182 = p_46;
                        return l_499;
                    }
                }
                for (g_386 = 0; (g_386 <= 8); g_386 += 1)
                {
                    return l_335[0][0][5];
                }
            }
            else
            {
                unsigned l_504 = 4294967295UL;
                int l_508 = (-1L);
                int l_509 = 7L;
                int l_510 = 2L;
                char **l_516 = &g_324[2];
                int **l_520 = &l_488[6];
                int *** const l_519 = &l_520;
                short * const *l_534[6][4][10] = {{{(void*)0,&l_340,&l_341,(void*)0,(void*)0,&l_341,(void*)0,(void*)0,&l_341,&l_340},{(void*)0,&l_340,&l_341,(void*)0,(void*)0,&l_341,(void*)0,(void*)0,&l_341,&l_340},{(void*)0,&l_340,&l_341,(void*)0,(void*)0,&l_341,(void*)0,(void*)0,&l_341,&l_340},{(void*)0,&l_340,&l_341,(void*)0,(void*)0,&l_341,(void*)0,&g_309,&l_340,&l_341}},{{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341}},{{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341}},{{&l_341,&l_341,&l_340,&g_309,(void*)0,(void*)0,(void*)0,&g_309,&l_340,&l_341},{&l_341,&l_341,&l_340,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309}},{{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309}},{{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&g_309},{&g_309,&g_309,(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_341,&g_309,&l_340,&g_309,&l_341,(void*)0,(void*)0}}};
                unsigned char l_543[7][6] = {{0x24L,0x38L,5UL,5UL,0x38L,0x24L},{0x38L,0x38L,3UL,0x0CL,255UL,0xD1L},{5UL,3UL,0xD9L,0x61L,247UL,0x2BL},{5UL,0x0CL,0x61L,0x0CL,5UL,255UL},{0x38L,255UL,247UL,5UL,0x2BL,0xA1L},{0x24L,0xD1L,0x2BL,255UL,0xA1L,0xA1L},{255UL,247UL,247UL,255UL,1UL,255UL}};
                int i, j, k;
                l_355 ^= (*g_402);
                l_504++;
                g_511[0][0][0]--;
                for (g_386 = 0; (g_386 <= 8); g_386 += 1)
                {
                    char **l_525 = &g_324[2];
                    int l_537[5];
                    short l_539 = 0L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_537[i] = 1L;
                    for (g_491 = 8; (g_491 >= 0); g_491 -= 1)
                    {
                        int ***l_522[5][9] = {{&l_520,&l_520,(void*)0,&l_520,&l_520,(void*)0,&l_520,(void*)0,&l_520},{&l_520,&l_520,&l_520,&l_520,&l_520,(void*)0,&l_520,&l_520,&l_520},{&l_520,&l_520,(void*)0,(void*)0,&l_520,&l_520,&l_520,&l_520,&l_520},{&l_520,(void*)0,&l_520,&l_520,&l_520,&l_520,(void*)0,&l_520,&l_520},{&l_520,(void*)0,(void*)0,&l_520,&l_520,&l_520,(void*)0,&l_520,&l_520}};
                        int ****l_521[4] = {&l_522[0][4],&l_522[0][4],&l_522[0][4],&l_522[0][4]};
                        int i, j;
                        l_490 &= (((safe_sub_func_int16_t_s_s(((&g_324[3] != l_516) > (*g_274)), (!(safe_sub_func_uint8_t_u_u(g_58[2], (l_519 == (g_523 = (void*)0))))))) == (***l_519)) >= (*p_46));
                        if ((*p_46))
                            break;
                        p_46 = ((*l_520) = p_46);
                    }
                    for (g_126 = 1; (g_126 <= 8); g_126 += 1)
                    {
                        int **l_526 = &g_182;
                        int l_538 = (-10L);
                        (*l_526) = (*g_181);
                        l_355 |= (safe_sub_func_uint8_t_u_u((l_529 && (safe_mod_func_uint8_t_u_u((((*l_378) &= ((***l_519) & (safe_mod_func_uint16_t_u_u((((void*)0 != l_534[2][1][3]) == p_44), l_335[2][0][7])))) != (&g_273[3][3] == l_535)), ((p_44 <= l_537[2]) | 4294967292UL)))), (**l_520)));
                        l_538 |= l_537[2];
                        if (l_539)
                            continue;
                    }
                    l_540[5] ^= (*g_402);
                    if ((*p_46))
                    {
                        l_537[2] |= (*p_46);
                        l_490 = (~(*p_46));
                        if ((**l_520))
                            continue;
                        (*l_520) = p_46;
                    }
                    else
                    {
                        char l_546 = (-4L);
                        int l_547 = 1L;
                        l_490 = (safe_rshift_func_uint8_t_u_u(((*p_46) | ((*l_378) = (l_543[0][4] != (safe_sub_func_int8_t_s_s(0x2AL, l_335[3][6][7]))))), ((*p_46) && (&l_335[0][0][5] == p_46))));
                        p_46 = p_46;
                        --g_548;
                    }
                }
            }
        }
    }
    return p_44;
}







static char * func_47(int * const p_48)
{
    short l_321 = 0xFBAAL;
    char **l_322 = (void*)0;
    char *l_325[1];
    int *l_326 = &g_4[3][4][0];
    int i;
    for (i = 0; i < 1; i++)
        l_325[i] = &g_254;
    for (g_190 = 0; (g_190 > 60); g_190 = safe_add_func_int8_t_s_s(g_190, 6))
    {
        int *l_320[7];
        int i;
        for (i = 0; i < 7; i++)
            l_320[i] = &g_60;
        l_320[3] = (*g_181);
    }
    l_326 = l_326;
    return (*g_323);
}







static int * func_49(unsigned short p_50, char ** p_51, char ** p_52, char * p_53)
{
    int *l_59[6];
    const int *l_61 = &g_60;
    unsigned l_147[2];
    int *l_161 = &g_4[1][2][3];
    unsigned short l_201 = 0xBCD3L;
    unsigned char *l_205 = &g_126;
    unsigned char **l_204 = &l_205;
    int l_230 = (-2L);
    unsigned l_287 = 7UL;
    int **l_317[8] = {&l_59[1],&l_59[1],&l_59[1],&l_59[1],&l_59[1],&l_59[1],&l_59[1],&l_59[1]};
    int i;
    for (i = 0; i < 6; i++)
        l_59[i] = &g_60;
    for (i = 0; i < 2; i++)
        l_147[i] = 4294967295UL;
    g_60 = g_4[6][0][4];
    if (p_50)
    {
        const int **l_62 = (void*)0;
        const int **l_63 = &l_61;
        char *l_81 = &g_58[6];
        int l_90 = 0xFD598C55L;
        int l_92 = 0L;
        (*l_63) = l_61;
        if (((void*)0 == l_61))
        {
            int l_75 = 1L;
            int l_99 = 0x706978B3L;
            int l_114[3];
            const unsigned short *l_121 = &g_55;
            int l_124[7] = {0x9E31D749L,0x50B438E4L,0x9E31D749L,0x9E31D749L,0x50B438E4L,0x9E31D749L,0x9E31D749L};
            int i;
            for (i = 0; i < 3; i++)
                l_114[i] = 0xCED91AC4L;
            if (p_50)
            {
                short l_66 = (-1L);
                int l_93[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_93[i] = (-2L);
                g_60 = g_60;
                for (g_16 = 0; (g_16 == 38); g_16++)
                {
                    unsigned l_88 = 0xCAC8A331L;
                    if ((g_60 = (5L && l_66)))
                    {
                        unsigned short l_74[1];
                        unsigned short *l_76 = &g_55;
                        int **l_77 = &l_59[4];
                        int *l_78 = &g_60;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_74[i] = 65535UL;
                        g_60 |= ((-2L) <= (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(0xD664L, ((*l_76) = (p_50 >= (safe_sub_func_uint8_t_u_u((((safe_unary_minus_func_int16_t_s(l_74[0])) & g_16) ^ l_75), ((*g_33) >= 252UL))))))) < ((&g_33 != &p_53) > p_50)), 3)));
                        (*l_78) ^= (((*l_77) = l_59[4]) == l_61);
                        (*l_78) = ((safe_mod_func_uint16_t_u_u(((**l_63) < (((void*)0 == l_81) >= p_50)), (safe_mod_func_int32_t_s_s((g_4[0][0][5] | (safe_mod_func_uint8_t_u_u((0xE2L || ((p_50 && (safe_div_func_uint8_t_u_u((l_88 ^ p_50), 0xAFL))) < (-8L))), 0xDFL))), p_50)))) < p_50);
                    }
                    else
                    {
                        int l_89 = 0x5A8D4E4AL;
                        l_89 = p_50;
                        if (l_75)
                            continue;
                    }
                    ++g_94;
                }
                for (l_92 = 4; (l_92 <= 18); l_92++)
                {
                    unsigned l_104 = 0UL;
                    short *l_105 = &l_66;
                    unsigned char *l_110 = &g_16;
                    short **l_111 = (void*)0;
                    short *l_113[10];
                    short **l_112 = &l_113[3];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_113[i] = (void*)0;
                    l_99 = p_50;
                    if ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s((p_50 ^ (((*l_105) = l_104) | (0xDAL | (safe_add_func_uint32_t_u_u((((**p_51) = ((((g_4[2][1][5] == l_93[0]) == ((*l_110) |= g_4[3][4][0])) ^ (g_55 < (l_99 = (p_50 <= (((*l_112) = &g_91[0][1][1]) == &g_91[0][1][1]))))) && 1UL)) >= l_93[0]), p_50))))), 3)), p_50)))
                    {
                        unsigned short *l_120 = (void*)0;
                        unsigned short **l_119 = &l_120;
                        l_114[1] = (l_99 = p_50);
                        if (p_50)
                            continue;
                        g_60 ^= ((&g_33 == (void*)0) != ((safe_add_func_int32_t_s_s((!g_16), 0L)) <= (((*l_119) = &p_50) == l_121)));
                    }
                    else
                    {
                        short l_122 = 0xA0F8L;
                        int l_123 = 0L;
                        int l_125[7][9] = {{(-5L),0xEF146544L,0xEF146544L,(-5L),(-1L),0xEB292015L,(-1L),0x8202A807L,(-1L)},{0x23B8D9BCL,0x1196D9F7L,(-1L),(-1L),0x1196D9F7L,0x23B8D9BCL,0L,1L,8L},{0x94CD19B6L,0xEB292015L,0x8202A807L,(-1L),(-1L),0x8202A807L,0xEB292015L,0x94CD19B6L,0L},{8L,(-1L),0x904A8A8FL,0L,0x47B4B067L,0x47B4B067L,0L,0x904A8A8FL,(-1L)},{(-1L),0x94CD19B6L,1L,0L,0xEF146544L,(-1L),(-1L),0xEF146544L,0L},{0x7CEBB1B1L,0x06916A65L,0x7CEBB1B1L,0xDF585002L,0L,8L,0x23B8D9BCL,0x23B8D9BCL,8L},{1L,0x94CD19B6L,(-1L),0x94CD19B6L,1L,0L,0xEF146544L,(-1L),(-1L)}};
                        int i, j;
                        ++g_126;
                        g_129[5][1] |= g_60;
                        (*l_63) = (l_59[4] = &l_114[0]);
                        if (g_129[5][1])
                            break;
                    }
                }
            }
            else
            {
                for (g_55 = 0; (g_55 != 7); g_55 = safe_add_func_int32_t_s_s(g_55, 3))
                {
                    unsigned l_137 = 0x5DE8CEC1L;
                    int l_142 = 0L;
                    for (l_90 = 13; (l_90 != 20); l_90 = safe_add_func_int32_t_s_s(l_90, 9))
                    {
                        short *l_134[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        g_60 = (g_4[4][4][3] <= (g_91[0][1][1] &= 0x6926L));
                    }
                    for (g_94 = (-22); (g_94 < 27); g_94 = safe_add_func_uint16_t_u_u(g_94, 9))
                    {
                        --l_137;
                        return &g_4[6][2][1];
                    }
                    l_142 = (safe_div_func_uint8_t_u_u(l_137, 0x77L));
                }
                l_92 ^= 0x7C227328L;
            }
            l_114[1] = (safe_add_func_int32_t_s_s((**l_63), ((safe_div_func_int8_t_s_s(((p_50 & g_16) <= l_147[0]), (safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(g_34, (*g_33))), 1)))) & (safe_div_func_uint32_t_u_u((**l_63), p_50)))));
            (*l_63) = &l_99;
        }
        else
        {
            l_92 = 8L;
        }
        for (g_126 = 0; (g_126 > 52); g_126 = safe_add_func_uint16_t_u_u(g_126, 1))
        {
            unsigned short l_163[6][1][4] = {{{6UL,0x044FL,6UL,6UL}},{{0x044FL,0x044FL,1UL,0x044FL}},{{0x044FL,6UL,6UL,0x044FL}},{{6UL,0x044FL,6UL,6UL}},{{0x044FL,0x044FL,1UL,0x044FL}},{{0x044FL,6UL,6UL,0x044FL}}};
            unsigned char l_164[10] = {255UL,0xEDL,255UL,0UL,0UL,255UL,0xEDL,255UL,0UL,0UL};
            int i, j, k;
            for (g_16 = (-5); (g_16 != 40); g_16 = safe_add_func_int32_t_s_s(g_16, 4))
            {
                char l_158 = 0xE4L;
                int *l_162 = &l_90;
                l_158 = (&l_81 != &g_33);
                for (g_55 = 29; (g_55 == 24); g_55 = safe_sub_func_uint8_t_u_u(g_55, 3))
                {
                    (*l_63) = (l_162 = l_161);
                }
                l_163[4][0][2] &= p_50;
                l_164[2] |= p_50;
            }
        }
    }
    else
    {
        int l_167 = 0x77D40400L;
        int l_186[5] = {0xDB31ABE6L,0xDB31ABE6L,0xDB31ABE6L,0xDB31ABE6L,0xDB31ABE6L};
        short l_214 = 0L;
        unsigned l_217 = 2UL;
        unsigned *l_246 = &g_94;
        short **l_250 = (void*)0;
        char *l_253[4][9][6] = {{{&g_254,&g_58[6],(void*)0,&g_254,&g_58[6],&g_58[6]},{&g_58[2],&g_254,&g_58[6],&g_58[6],&g_58[2],&g_58[6]},{(void*)0,&g_58[5],&g_254,&g_58[2],&g_254,(void*)0},{(void*)0,(void*)0,&g_58[2],&g_58[6],&g_58[6],&g_254},{&g_58[6],&g_58[2],&g_254,&g_254,(void*)0,&g_58[0]},{&g_58[6],&g_254,&g_58[6],&g_254,&g_58[6],(void*)0},{&g_58[6],&g_254,(void*)0,&g_58[6],(void*)0,(void*)0},{&g_58[4],&g_58[6],&g_58[6],&g_254,&g_58[0],(void*)0},{&g_58[6],&g_58[6],(void*)0,&g_254,&g_254,(void*)0}},{{&g_58[0],(void*)0,&g_58[6],&g_58[5],&g_58[4],&g_58[0]},{&g_58[4],&g_58[6],(void*)0,&g_254,&g_254,(void*)0},{&g_58[1],&g_58[5],&g_58[6],&g_254,&g_58[4],&g_254},{&g_58[6],&g_58[6],&g_58[6],&g_254,&g_254,&g_58[5]},{&g_254,&g_58[5],&g_58[6],&g_58[6],&g_58[6],&g_254},{&g_58[6],(void*)0,(void*)0,&g_58[6],&g_254,&g_58[6]},{&g_58[5],&g_58[6],&g_58[6],&g_254,&g_58[6],&g_254},{&g_58[6],&g_254,&g_58[2],&g_254,(void*)0,&g_58[0]},{&g_254,&g_58[6],(void*)0,&g_254,&g_58[6],&g_58[5]}},{{&g_58[6],(void*)0,&g_58[1],&g_58[6],&g_58[2],&g_58[0]},{&g_58[6],&g_254,(void*)0,(void*)0,&g_58[6],&g_58[6]},{&g_58[0],&g_254,&g_254,&g_58[0],&g_254,(void*)0},{&g_58[6],&g_58[5],&g_58[5],&g_254,&g_58[5],(void*)0},{&g_58[4],&g_254,&g_58[6],&g_58[2],&g_58[5],&g_254},{(void*)0,&g_58[5],&g_254,&g_254,&g_254,&g_58[0]},{(void*)0,&g_254,(void*)0,&g_58[6],&g_58[6],(void*)0},{&g_58[4],&g_254,&g_58[6],&g_58[6],&g_58[2],&g_58[4]},{&g_254,&g_58[6],&g_58[6],&g_254,&g_58[1],&g_58[4]}},{{&g_58[0],&g_58[6],&g_254,(void*)0,&g_58[5],&g_254},{(void*)0,&g_58[2],&g_58[1],&g_58[6],&g_254,&g_58[4]},{&g_58[6],&g_58[6],&g_58[1],&g_254,&g_254,&g_58[5]},{(void*)0,&g_254,&g_58[2],&g_254,&g_254,&g_58[4]},{&g_58[6],&g_58[6],(void*)0,(void*)0,&g_254,(void*)0},{&g_254,&g_58[6],&g_254,&g_254,(void*)0,&g_58[0]},{&g_58[2],&g_58[5],(void*)0,&g_58[2],&g_58[2],(void*)0},{&g_254,(void*)0,&g_254,&g_254,(void*)0,&g_254},{&g_58[6],&g_58[6],&g_58[6],&g_58[6],&g_58[2],&g_58[6]}}};
        int l_255 = (-9L);
        unsigned char ***l_275[3][7][1] = {{{&l_204},{(void*)0},{&l_204},{&l_204},{&l_204},{&l_204},{(void*)0}},{{&l_204},{&l_204},{&l_204},{&l_204},{(void*)0},{&l_204},{&l_204}},{{&l_204},{&l_204},{(void*)0},{&l_204},{&l_204},{&l_204},{&l_204}}};
        const unsigned char l_277 = 0x47L;
        char l_291[3];
        unsigned l_316[4][8] = {{0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L},{0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L},{0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L},{0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L,0x0A51D1B7L,0x5139A763L}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_291[i] = 0x1DL;
        for (g_16 = (-14); (g_16 <= 30); g_16 = safe_add_func_int8_t_s_s(g_16, 3))
        {
            char l_174 = 0xC3L;
            int **l_175 = (void*)0;
            int l_187 = 0xC171E5B3L;
            int l_231 = 1L;
            l_167 ^= (p_50 || 0x3F7E2340L);
        }
        if (((l_186[1] | p_50) | ((~(safe_add_func_uint16_t_u_u(((void*)0 != l_250), ((safe_lshift_func_int8_t_s_u((*p_53), 3)) > (p_50 == (l_255 = (*l_161))))))) | p_50)))
        {
            unsigned l_258 = 4294967295UL;
            for (l_214 = 14; (l_214 > (-7)); --l_214)
            {
                --l_258;
            }
        }
        else
        {
            int *l_268 = &g_4[0][1][3];
            int l_294 = 0xB9568F94L;
            for (g_188 = 14; (g_188 != (-17)); g_188--)
            {
                int *l_270 = &g_4[3][4][0];
                for (l_255 = 0; (l_255 != (-22)); l_255 = safe_sub_func_int16_t_s_s(l_255, 9))
                {
                    int *l_269 = &g_60;
                    for (g_254 = 0; (g_254 <= (-30)); --g_254)
                    {
                        int **l_267 = &l_59[4];
                        (*l_267) = (void*)0;
                        l_186[2] &= p_50;
                        l_269 = l_268;
                    }
                    for (l_167 = 0; (l_167 <= 3); l_167 += 1)
                    {
                        return l_270;
                    }
                    l_186[3] |= (*g_182);
                    for (l_217 = (-20); (l_217 > 35); l_217 = safe_add_func_uint8_t_u_u(l_217, 3))
                    {
                        return l_270;
                    }
                }
            }
            if (((void*)0 != g_273[4][4]))
            {
                g_60 ^= ((l_275[2][2][0] != (void*)0) & 0x7E9AL);
                return l_268;
            }
            else
            {
                unsigned *l_288[7][6] = {{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94},{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94},{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94},{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94},{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94},{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94},{&g_289,&g_94,&g_94,&g_289,&g_94,&g_94}};
                int l_290 = 0L;
                int l_301 = 0xFAD49497L;
                short **l_310 = &g_309;
                int i, j;
                g_60 |= (((*l_161) != (safe_unary_minus_func_int16_t_s((l_277 >= ((~(*l_268)) >= 0L))))) > (((safe_lshift_func_int16_t_s_u(((+g_4[1][2][1]) | (l_290 |= (safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int8_t_s(((p_50 & (safe_add_func_int8_t_s_s(((0xA75BCBD6L && g_91[0][1][1]) & ((**l_204) &= l_287)), p_50))) | (*g_33)))), 5)) <= g_94), p_50)))), l_291[2])) <= 252UL) != 0x0FEFL));
                for (g_289 = 0; (g_289 == 34); g_289 = safe_add_func_uint8_t_u_u(g_289, 9))
                {
                    short *l_299 = &l_214;
                    int l_300 = 1L;
                    unsigned **l_303 = (void*)0;
                    unsigned ***l_302 = &l_303;
                    short ***l_311 = &l_250;
                    l_294 = l_186[1];
                    l_301 ^= ((l_300 = ((*l_61) != ((*p_53) = (0xF38AL > ((1L < ((0x481CL == l_167) < p_50)) < (g_4[5][1][3] & ((*l_61) != ((*l_299) &= (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((*g_33), p_50)), p_50)))))))))) && l_290);
                    (*l_302) = &l_246;
                    l_186[4] ^= (((-4L) != (-8L)) == (((safe_mod_func_int8_t_s_s(l_300, ((~(safe_sub_func_uint16_t_u_u(((g_308 == ((*l_311) = l_310)) || (g_58[5] && (safe_sub_func_uint8_t_u_u(((((*l_205) = (p_50 >= (safe_rshift_func_uint8_t_u_s((8L != g_254), l_290)))) <= p_50) | (*g_33)), 1L)))), (**g_308)))) && p_50))) ^ (*g_33)) <= (**p_51)));
                }
            }
        }
        g_60 |= (l_316[0][7] = (**g_181));
    }
    g_182 = l_161;
    g_182 = (void*)0;
    return &g_4[5][3][5];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_91[i][j][k], "g_91[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_129[i][j], "g_129[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_328.f0, "g_328.f0", print_hash_value);
    transparent_crc(g_328.f1, "g_328.f1", print_hash_value);
    transparent_crc(g_328.f2, "g_328.f2", print_hash_value);
    transparent_crc(g_328.f4, "g_328.f4", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_435.f1, "g_435.f1", print_hash_value);
    transparent_crc(g_435.f2, "g_435.f2", print_hash_value);
    transparent_crc(g_435.f4, "g_435.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_489[i][j], "g_489[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_501[i], "g_501[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_511[i][j][k], "g_511[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_747[i], "g_747[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_860[i], "g_860[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_861, "g_861", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_922[i], "g_922[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_981.f0, "g_981.f0", print_hash_value);
    transparent_crc(g_981.f1, "g_981.f1", print_hash_value);
    transparent_crc(g_981.f2, "g_981.f2", print_hash_value);
    transparent_crc(g_981.f4, "g_981.f4", print_hash_value);
    transparent_crc(g_988, "g_988", print_hash_value);
    transparent_crc(g_1028, "g_1028", print_hash_value);
    transparent_crc(g_1034, "g_1034", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1233[i][j][k], "g_1233[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1243, "g_1243", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1244[i], "g_1244[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1294[i].f0, "g_1294[i].f0", print_hash_value);
        transparent_crc(g_1294[i].f1, "g_1294[i].f1", print_hash_value);
        transparent_crc(g_1294[i].f2, "g_1294[i].f2", print_hash_value);
        transparent_crc(g_1294[i].f4, "g_1294[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1303, "g_1303", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1320[i], "g_1320[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1325, "g_1325", print_hash_value);
    transparent_crc(g_1326, "g_1326", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1328[i], "g_1328[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1330[i][j], "g_1330[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1380, "g_1380", print_hash_value);
    transparent_crc(g_1381, "g_1381", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1389[i], "g_1389[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1420, "g_1420", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    transparent_crc(g_1562, "g_1562", print_hash_value);
    transparent_crc(g_1563, "g_1563", print_hash_value);
    transparent_crc(g_1565, "g_1565", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1600[i][j], "g_1600[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1609, "g_1609", print_hash_value);
    transparent_crc(g_1778, "g_1778", print_hash_value);
    transparent_crc(g_1780, "g_1780", print_hash_value);
    transparent_crc(g_1927, "g_1927", print_hash_value);
    transparent_crc(g_1930, "g_1930", print_hash_value);
    transparent_crc(g_1968, "g_1968", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
