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
   unsigned f0;
   unsigned f1;
};


static int g_6[10] = {0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L,0xA5C62E08L};
static unsigned g_13[7] = {0x86335C0DL,0x86335C0DL,0x86335C0DL,0x86335C0DL,0x86335C0DL,0x86335C0DL,0x86335C0DL};
static unsigned char g_30 = 0x7FL;
static int g_50 = 1L;
static char g_74 = 0x4EL;
static int g_78 = 6L;
static int g_85 = 3L;
static volatile unsigned g_86 = 0x47E08A84L;
static int * volatile g_93 = &g_50;
static unsigned g_108[2] = {0xE9FB3884L,0xE9FB3884L};
static char g_111 = 0x8FL;
static int *g_117[3] = {&g_78,&g_78,&g_78};
static int ** volatile g_116 = &g_117[1];
static unsigned char g_143 = 2UL;
static unsigned g_151 = 4294967289UL;
static unsigned short g_163 = 65530UL;
static union U0 g_214 = {0x7CD8EF88L};
static union U0 *g_213 = &g_214;
static union U0 ** volatile g_215 = &g_213;
static short g_232 = 0x2F73L;
static short g_236 = 0L;
static int ** volatile g_261 = &g_117[2];
static unsigned g_264 = 0x60F319DCL;
static int g_298[7] = {0x6A349A6FL,0x6A349A6FL,0x6A349A6FL,0x6A349A6FL,0x6A349A6FL,0x6A349A6FL,0x6A349A6FL};
static int * volatile g_299 = (void*)0;
static int *g_302 = &g_50;
static unsigned short *g_304 = &g_163;
static int ** volatile g_315 = &g_117[2];
static volatile short g_352[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static volatile short *g_351 = &g_352[1];
static volatile short **g_350 = &g_351;
static char g_430 = 0x92L;
static unsigned char g_442 = 0UL;
static volatile unsigned g_459 = 0x764E136AL;
static char *g_471 = &g_74;
static char **g_470 = &g_471;
static char *** volatile g_469 = &g_470;
static volatile unsigned char g_492 = 0x3AL;
static int ** volatile g_496 = &g_302;
static int *g_517 = &g_298[4];
static unsigned *g_521 = (void*)0;
static unsigned g_525[6][3] = {{0x952A29BBL,0x0EFBBA0CL,0x24C2464CL},{0xAD44C66FL,0xAD44C66FL,0x24C2464CL},{0x0EFBBA0CL,0x952A29BBL,0x24C2464CL},{0x952A29BBL,0x0EFBBA0CL,0x24C2464CL},{0x888401FAL,0x888401FAL,0x952A29BBL},{0UL,4294967287UL,0x952A29BBL}};
static int **g_530 = &g_117[1];
static int ***g_529 = &g_530;
static int ****g_528 = &g_529;
static volatile int ** volatile *g_648 = (void*)0;
static volatile int ** volatile * volatile *g_647 = &g_648;
static volatile int ** volatile * volatile ** volatile g_646[4][5][4] = {{{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647}},{{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,&g_647,&g_647,&g_647},{&g_647,(void*)0,&g_647,&g_647}}};
static volatile int ** volatile * volatile ** volatile *g_645 = &g_646[1][1][0];
static int g_686 = 0L;
static unsigned short g_720[9][6][4] = {{{0x3EDAL,0x49ABL,65535UL,65535UL},{0x5113L,0x5113L,0UL,65529UL},{0x5113L,0x3EDAL,65530UL,0x49ABL},{65535UL,0x5113L,65535UL,65530UL},{65529UL,0x5113L,1UL,0x49ABL},{0x5113L,0x3EDAL,0x3EDAL,0x5113L}},{{65535UL,0x49ABL,0x3EDAL,65530UL},{0x5113L,65529UL,1UL,65529UL},{65529UL,0x3EDAL,65535UL,65529UL},{65535UL,65529UL,65530UL,65530UL},{0x49ABL,0x49ABL,1UL,0x5113L},{0x49ABL,0x3EDAL,65530UL,0x49ABL}},{{65535UL,0x5113L,65535UL,65530UL},{65529UL,0x5113L,1UL,0x49ABL},{0x5113L,0x3EDAL,0x3EDAL,0x5113L},{65535UL,0x49ABL,0x3EDAL,65530UL},{0x5113L,65529UL,1UL,65529UL},{65529UL,0x3EDAL,65535UL,65529UL}},{{65535UL,65529UL,65530UL,65530UL},{0x49ABL,0x49ABL,1UL,0x5113L},{0x49ABL,0x3EDAL,65530UL,0x49ABL},{65535UL,0x5113L,65535UL,65530UL},{65529UL,0x5113L,1UL,0x49ABL},{0x5113L,0x3EDAL,0x3EDAL,0x5113L}},{{65535UL,0x49ABL,0x3EDAL,65530UL},{0x5113L,65529UL,1UL,65529UL},{65529UL,0UL,1UL,65535UL},{1UL,65535UL,0x78C9L,0x78C9L},{0x3EDAL,0x3EDAL,0x5113L,65530UL},{0x3EDAL,0UL,0x78C9L,0x3EDAL}},{{1UL,65530UL,1UL,0x78C9L},{65535UL,65530UL,0x5113L,0x3EDAL},{65530UL,0UL,0UL,65530UL},{1UL,0x3EDAL,0UL,0x78C9L},{65530UL,65535UL,0x5113L,65535UL},{65535UL,0UL,1UL,65535UL}},{{1UL,65535UL,0x78C9L,0x78C9L},{0x3EDAL,0x3EDAL,0x5113L,65530UL},{0x3EDAL,0UL,0x78C9L,0x3EDAL},{1UL,65530UL,1UL,0x78C9L},{65535UL,65530UL,0x5113L,0x3EDAL},{65530UL,0UL,0UL,65530UL}},{{1UL,0x3EDAL,0UL,0x78C9L},{65530UL,65535UL,0x5113L,65535UL},{65535UL,0UL,1UL,65535UL},{1UL,65535UL,0x78C9L,0x78C9L},{0x3EDAL,0x3EDAL,0x5113L,65530UL},{0x3EDAL,0UL,0x78C9L,0x3EDAL}},{{1UL,65530UL,1UL,0x78C9L},{65535UL,65530UL,0x5113L,0x3EDAL},{0x3EDAL,1UL,1UL,0x3EDAL},{0x78C9L,65535UL,1UL,0UL},{0x3EDAL,65530UL,0x49ABL,65530UL},{65530UL,1UL,0x78C9L,65530UL}}};
static int g_762 = 0x370B7532L;
static volatile unsigned g_846 = 5UL;
static int *****g_880 = &g_528;
static int ******g_879[10][10][2] = {{{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880}},{{&g_880,(void*)0},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,(void*)0}},{{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880},{(void*)0,(void*)0},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880}},{{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,(void*)0},{(void*)0,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{&g_880,&g_880}},{{(void*)0,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,(void*)0}},{{&g_880,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,(void*)0},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,(void*)0},{(void*)0,&g_880}},{{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880}},{{&g_880,(void*)0},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880},{(void*)0,&g_880}},{{&g_880,&g_880},{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880},{&g_880,&g_880},{(void*)0,(void*)0}},{{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{&g_880,(void*)0},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,(void*)0},{&g_880,&g_880},{&g_880,&g_880},{(void*)0,&g_880}}};
static int *******g_878 = &g_879[9][2][1];
static int g_899[1] = {(-8L)};
static union U0 g_921 = {0xE3F93ED4L};
static unsigned ** volatile g_1001 = &g_521;
static int g_1125 = 0x2F98D144L;
static int g_1127[2] = {0L,0L};
static unsigned g_1157 = 0x256B9303L;
static char g_1194 = 1L;
static unsigned short g_1229[2] = {2UL,2UL};
static union U0 ** volatile g_1268 = (void*)0;
static volatile unsigned char g_1321 = 0UL;
static union U0 ** volatile g_1509 = &g_213;
static volatile unsigned g_1576 = 0x4739432DL;
static int ** volatile g_1665[8][9] = {{(void*)0,&g_517,&g_517,&g_517,&g_517,(void*)0,&g_517,(void*)0,&g_517},{&g_117[1],&g_517,&g_517,&g_117[1],&g_517,&g_517,&g_117[2],&g_517,&g_117[1]},{&g_117[1],&g_517,(void*)0,&g_517,&g_117[1],&g_517,&g_517,&g_117[1],&g_517},{(void*)0,(void*)0,(void*)0,(void*)0,&g_517,&g_517,&g_517,&g_117[1],&g_517},{&g_117[1],(void*)0,&g_117[1],&g_117[2],&g_517,&g_117[1],&g_517,&g_117[2],&g_117[1]},{&g_517,&g_517,(void*)0,(void*)0,&g_117[1],(void*)0,&g_117[1],&g_117[2],&g_517},{&g_517,&g_517,&g_117[1],&g_517,(void*)0,(void*)0,&g_517,&g_117[1],&g_517},{(void*)0,&g_117[1],&g_517,(void*)0,&g_117[1],&g_517,&g_117[1],&g_117[1],&g_517}};
static int ** volatile g_1666[6] = {&g_117[1],&g_117[1],&g_302,&g_117[1],&g_117[1],&g_302};
static char *g_1716 = (void*)0;
static int g_1794 = (-1L);
static volatile unsigned short * volatile ** volatile g_1806 = (void*)0;
static volatile unsigned char g_1814 = 0x69L;



static int func_1(void);
static int func_2(char p_3);
static char * func_23(char * p_24, union U0 p_25, int * p_26, char p_27);
static char * func_28(unsigned p_29);
static unsigned short func_35(char p_36, char * p_37, int * p_38);
static int * func_41(int p_42, char * p_43, int * p_44, char * p_45, char * p_46);
static char * func_51(int * p_52, int * p_53, int * p_54);
static unsigned short func_57(int * p_58, char p_59, int p_60, unsigned short p_61);
static int * func_62(int * p_63, union U0 p_64, unsigned short p_65, char p_66, union U0 p_67);
static int * func_68(union U0 p_69, char * p_70, int * p_71);
static int func_1(void)
{
    char l_4 = 0L;
    short l_14 = 0x7F35L;
    unsigned short l_19 = 65535UL;
    int *l_1124 = &g_1125;
    unsigned char l_1529 = 0x8BL;
    int l_1575 = 0x06C2873FL;
    short *l_1582 = &g_236;
    short **l_1581 = &l_1582;
    short l_1587 = 0x14D0L;
    int l_1588 = (-1L);
    int l_1590 = 0x8123B12DL;
    int l_1591 = 0x029AF2F8L;
    int l_1624[9] = {(-4L),(-4L),0x9E17BE7AL,(-4L),(-4L),0x9E17BE7AL,(-4L),(-4L),0x9E17BE7AL};
    char *l_1627[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    short *l_1653[8][3][7] = {{{&g_232,&g_232,&l_1587,(void*)0,&l_1587,&l_1587,&l_14},{&l_1587,(void*)0,&l_1587,&g_236,&g_236,&l_14,&g_232},{&l_1587,&l_14,&g_232,(void*)0,&l_1587,&l_1587,(void*)0}},{{(void*)0,(void*)0,&l_14,&l_1587,(void*)0,&g_232,&l_14},{(void*)0,&g_232,&g_232,&l_14,&l_14,&l_14,&g_232},{&l_1587,&l_1587,&g_236,&l_14,&l_1587,&g_236,&g_232}},{{&l_1587,&l_1587,&g_232,&l_1587,&l_1587,&l_14,&g_236},{&g_232,&l_1587,(void*)0,&g_232,&l_1587,&g_236,&g_232},{&l_14,&g_232,&l_1587,(void*)0,&l_14,(void*)0,&g_232}},{{&g_236,&l_14,&g_232,&g_236,(void*)0,(void*)0,&l_1587},{&l_1587,&l_1587,&g_232,&g_236,&g_232,&g_232,&g_236},{&g_236,(void*)0,&g_236,&l_14,&g_236,(void*)0,&g_232}},{{&g_232,&l_1587,(void*)0,(void*)0,&l_14,&g_236,(void*)0},{&l_14,(void*)0,&l_1587,&l_14,&g_236,(void*)0,&g_232},{&g_236,(void*)0,&g_232,&l_14,&l_1587,&g_232,&l_1587}},{{&l_14,&l_1587,&g_236,&l_14,&l_1587,&l_1587,&g_236},{(void*)0,&g_236,&g_236,(void*)0,&l_14,&g_232,&l_14},{&l_1587,&g_232,&g_232,&l_1587,&g_232,&l_1587,(void*)0}},{{&g_232,&g_236,&l_1587,(void*)0,(void*)0,&l_1587,&l_1587},{&l_1587,&g_232,(void*)0,&l_1587,(void*)0,&g_232,(void*)0},{&l_14,&g_232,&g_236,&l_1587,&g_232,&g_232,&l_14}},{{(void*)0,&l_14,&g_232,&g_232,&l_1587,&l_1587,&g_236},{&l_14,&l_1587,&l_1587,&g_232,&l_14,&l_1587,&l_1587},{&g_236,&l_1587,&g_232,&l_1587,&g_236,&g_232,&g_236}}};
    int *l_1664 = &g_6[8];
    int **l_1667[5] = {&g_117[1],&g_117[1],&g_117[1],&g_117[1],&g_117[1]};
    int *l_1707 = &g_6[8];
    union U0 l_1711 = {0x15A4F20CL};
    unsigned short l_1757[9][1] = {{9UL},{0xD1DCL},{9UL},{9UL},{0xD1DCL},{9UL},{9UL},{0xD1DCL},{9UL}};
    unsigned char l_1772 = 0x5BL;
    unsigned *l_1778 = &l_1711.f1;
    unsigned short l_1817 = 0x7A80L;
    int i, j, k;
    if (func_2(l_4))
    {
        char *l_12 = (void*)0;
        int *l_20[3];
        union U0 l_1123 = {0x59DAD390L};
        unsigned short l_1126[10] = {0xCD69L,0xCFB1L,0xCFB1L,0xCD69L,0x7AC6L,0xCD69L,0xCFB1L,0xCFB1L,0xCD69L,0x7AC6L};
        char **l_1502 = &g_471;
        unsigned *l_1503 = &g_108[1];
        unsigned char l_1504 = 0x8EL;
        int i;
        for (i = 0; i < 3; i++)
            l_20[i] = &g_6[8];
        (*l_1124) = ((8L > (~(g_13[6] = (-6L)))) >= (((l_14 == ((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((g_6[8] = l_19) > ((*l_1503) = (safe_mul_func_int16_t_s_s((((*l_1502) = func_23(func_28(g_30), l_1123, l_1124, (g_1127[0] &= l_1126[1]))) != (void*)0), g_899[0])))) > g_1229[1]), g_1229[0])), l_1504)) & 0x39L)) | g_899[0]) == g_899[0]));



        ;

        ;

        ;
    }
    else
    {
        int l_1534 = 0x52F2E9A9L;
        union U0 *l_1568 = &g_214;
        int l_1571[4] = {0xEA178F6FL,0xEA178F6FL,0xEA178F6FL,0xEA178F6FL};
        unsigned short **l_1642[10] = {&g_304,&g_304,&g_304,&g_304,&g_304,&g_304,&g_304,&g_304,&g_304,&g_304};
        int i;
        if (((*l_1124) > (*l_1124)))
        {
            unsigned char l_1530 = 0x21L;
            unsigned char *l_1542[9] = {&g_442,&g_30,&g_442,&g_30,&g_442,&g_30,&g_442,&g_30,&g_442};
            unsigned l_1561[2][2][6] = {{{0x06FF3C67L,0x968C734BL,0x968C734BL,0x06FF3C67L,0x968C734BL,0x968C734BL},{0x06FF3C67L,0x968C734BL,0x968C734BL,0x06FF3C67L,0x968C734BL,0x968C734BL}},{{0x06FF3C67L,0x968C734BL,0x968C734BL,0x06FF3C67L,0x968C734BL,0x968C734BL},{0x06FF3C67L,0x968C734BL,0x968C734BL,0x06FF3C67L,0x968C734BL,0x968C734BL}}};
            int l_1569 = 1L;
            int l_1572 = 1L;
            int l_1573 = 0x68ADFEF2L;
            int l_1574[5][7][7] = {{{0x7FC824AAL,0x2EBF48DCL,(-7L),0x536C9B0FL,(-9L),0x92AB204BL,(-10L)},{1L,(-4L),1L,0x7510ABA0L,0xCBACB4B4L,(-1L),0xE099AC60L},{(-1L),0L,0xA0F001B9L,0xA0F001B9L,0L,(-1L),0xEF757121L},{0x6A4DE3D1L,0x56D60649L,1L,1L,(-1L),(-1L),(-10L)},{0xC73179B6L,(-1L),0xF6D2B7F8L,0x3067F2EDL,9L,0x956D7FDCL,1L},{4L,0x56D60649L,(-1L),0x536C9B0FL,0x019A6075L,0x7FC824AAL,0xE821BD5FL},{0x923F8E69L,0x19CF1192L,0xE5864F28L,0xA0F001B9L,(-2L),0xF6D2B7F8L,(-6L)}},{{0xDEB88A14L,0x846AD69CL,(-1L),(-2L),0xEA605E19L,0L,0x11B02A4FL},{0xA0F001B9L,0xE821BD5FL,(-7L),2L,0xA2BCEB7BL,0x55EAE3A7L,(-1L)},{0xF6D2B7F8L,(-1L),0xCBACB4B4L,0x11B02A4FL,(-9L),7L,(-1L)},{0x59440A5AL,0x923F8E69L,0xD043E714L,(-3L),0x32CB12A0L,0xE099AC60L,0xB7EDCF9EL},{(-2L),1L,0xE099AC60L,0x7FC824AAL,0x3067F2EDL,0x92AB204BL,0xB7EDCF9EL},{0L,0L,(-2L),(-4L),0xB7EDCF9EL,7L,(-1L)},{0L,1L,(-4L),0x33F8F5D3L,0x2EBF48DCL,(-4L),(-1L)}},{{(-7L),0x3067F2EDL,0xEF757121L,0xC73179B6L,(-1L),0xBA4BCC77L,0x11B02A4FL},{0xE099AC60L,0xD0747474L,0x923F8E69L,0x0E38DA67L,0x14C8B801L,(-1L),(-6L)},{(-1L),(-1L),0xE821BD5FL,0xD0747474L,(-1L),0xEF757121L,7L},{0x6A4DE3D1L,0x6A4DE3D1L,0x923F8E69L,0L,(-1L),1L,(-1L)},{2L,1L,0xD0747474L,(-1L),(-1L),(-4L),4L},{0xCE2333FAL,1L,(-6L),0x0E38DA67L,(-1L),(-6L),0xC4CAB5F8L},{0L,0x0CF18F43L,7L,1L,(-1L),1L,0x33F8F5D3L}},{{7L,(-3L),0xF6D2B7F8L,0x2EBF48DCL,0L,0xA2BCEB7BL,0xA0F001B9L},{(-7L),0xD10EE0ABL,0xB47EC3F0L,(-1L),0x19CF1192L,0x32CB12A0L,(-10L)},{0L,0xC4CAB5F8L,0xEA605E19L,0xB47EC3F0L,0x33F8F5D3L,1L,(-7L)},{1L,0x29FF7F9BL,(-1L),(-7L),(-3L),1L,0x19CF1192L},{0x536C9B0FL,2L,0xD043E714L,1L,(-1L),0L,1L},{(-1L),0xBA4BCC77L,0xD043E714L,(-1L),0x7FC824AAL,0x0CF18F43L,0x8B0269C5L},{1L,0x8B0269C5L,(-1L),0L,(-4L),(-1L),(-2L)}},{{0xB47EC3F0L,1L,0xEA605E19L,0L,1L,(-10L),(-6L)},{(-1L),3L,0xB47EC3F0L,(-6L),1L,0xD0747474L,0xCAAB68D8L},{1L,0xA1C962D4L,(-1L),0xA0F001B9L,(-7L),0x0958B6D8L,0x0958B6D8L},{0xCBACB4B4L,(-1L),0xE099AC60L,(-1L),0xCBACB4B4L,0x7510ABA0L,1L},{(-2L),(-10L),0xC73179B6L,6L,0x7510ABA0L,(-2L),7L},{(-1L),(-9L),1L,0x0958B6D8L,0x7FC824AAL,(-2L),(-1L)},{(-2L),6L,0xB47EC3F0L,0x32CB12A0L,0x0E38DA67L,(-4L),(-9L)}}};
            unsigned l_1592 = 4294967291UL;
            int *l_1609 = &g_298[5];
            unsigned char l_1610 = 0x20L;
            int i, j, k;
            (*****g_880) &= func_2((!(safe_mul_func_int8_t_s_s((***g_469), func_2((safe_rshift_func_int16_t_s_s((*l_1124), 0)))))));
            for (l_19 = 0; (l_19 <= 9); l_19 += 1)
            {
                unsigned char *l_1543 = &g_30;
                int l_1546 = 3L;
                int **l_1562 = &g_302;
                int *l_1570[8];
                union U0 **l_1584 = &l_1568;
                int i;
                for (i = 0; i < 8; i++)
                    l_1570[i] = &g_1125;
                for (g_1194 = 3; (g_1194 >= 0); g_1194 -= 1)
                {
                    unsigned short l_1533 = 65529UL;
                    (*g_1509) = (*g_215);
                    for (g_50 = 8; (g_50 >= 0); g_50 -= 1)
                    {
                        union U0 **l_1516 = &g_213;
                        short *l_1517[10] = {&l_14,&l_14,&l_14,&l_14,&l_14,&l_14,&l_14,&l_14,&l_14,&l_14};
                        int l_1518 = 0xDD607244L;
                        char *l_1531 = &g_111;
                        unsigned l_1532 = 0UL;
                        int i, j, k;
                        l_1533 |= (safe_rshift_func_uint16_t_u_u((l_1532 |= func_2(((*l_1124) = (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((l_1518 ^= (((*l_1516) = (*g_215)) != (void*)0)) <= (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((65535UL >= (g_6[g_50] || func_2((**g_470)))), ((*l_1531) = (func_2(((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u(g_6[g_50], 6)) >= g_1125), (safe_lshift_func_uint16_t_u_u(l_1529, (*g_304))))) || l_1530)) || (**g_470))))) < 247UL), (*l_1124)))), (**g_470))), 1UL))))), 9));
                        (*l_1124) ^= l_1533;
                        l_1534 &= ((*l_1124) &= (*g_517));
                    }
                }
                for (g_111 = 3; (g_111 <= 9); g_111 += 1)
                {
                    unsigned char l_1539 = 6UL;
                    short *l_1544 = (void*)0;
                    short *l_1545 = &g_236;
                    int **l_1564 = &g_302;
                    union U0 *l_1567 = &g_214;
                    int i;
                    for (g_264 = 0; (g_264 <= 1); g_264 += 1)
                    {
                        int i;
                        g_6[g_111] = (g_6[(g_264 + 3)] != g_6[(g_264 + 8)]);
                        return l_1530;
                    }
                    g_6[l_19] &= (safe_mod_func_uint16_t_u_u((((*g_351) && ((*l_1545) = (((safe_add_func_uint32_t_u_u(l_1539, l_1534)) < ((l_1539 >= 0xB36CC883L) >= (+((safe_mul_func_uint8_t_u_u(0x0AL, (l_1542[0] != l_1543))) && (!g_1125))))) == (**g_350)))) | l_1534), l_1546));
                    for (g_686 = 0; (g_686 <= 3); g_686 += 1)
                    {
                        int i, j, k;
                        l_1546 = (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_6[l_19] <= ((*g_304) ^ (l_1561[0][1][4] = (((*l_1124) < ((((*l_1543) &= (safe_rshift_func_int16_t_s_s((*l_1124), 2))) || (safe_sub_func_uint32_t_u_u(l_1534, (safe_sub_func_int32_t_s_s(l_1534, (0x37A5L || (safe_mul_func_uint16_t_u_u((((*g_471) = (*l_1124)) && ((safe_lshift_func_int8_t_s_s(((*g_471) = l_1546), 3)) > l_1530)), (*g_304))))))))) && 1UL)) > 0UL)))), g_459)), (*g_304)));
                        return l_1534;
                    }
                    (*g_116) = (***g_528);
                    for (l_4 = 1; (l_4 >= 0); l_4 -= 1)
                    {
                        int ***l_1563 = (void*)0;
                        (*l_1124) = (l_1534 & ((0xA1CB226EL && (g_6[l_19] = (l_1562 != (l_1564 = ((***g_880) = (***g_880)))))) == (safe_sub_func_uint16_t_u_u((**l_1562), (*g_304)))));
                        l_1568 = l_1567;
                    }

                    ;
                }
                g_1576++;
                for (g_151 = 0; (g_151 <= 3); g_151 += 1)
                {
                    short **l_1583 = &l_1582;
                    union U0 **l_1586 = &g_213;
                    int i;
                    (**g_530) |= g_6[(g_151 + 3)];
                    if ((*l_1124))
                    {
                        if (l_1574[3][1][4])
                            break;
                        l_1571[1] = ((*l_1124) = (**g_261));
                    }
                    else
                    {
                        union U0 ***l_1585[8][6] = {{(void*)0,(void*)0,&l_1584,&l_1584,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1584,(void*)0,&l_1584,(void*)0},{&l_1584,(void*)0,&l_1584,&l_1584,&l_1584,&l_1584},{&l_1584,&l_1584,&l_1584,(void*)0,&l_1584,(void*)0},{(void*)0,&l_1584,(void*)0,&l_1584,&l_1584,&l_1584},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1584,(void*)0},{(void*)0,(void*)0,&l_1584,(void*)0,(void*)0,&l_1584},{(void*)0,(void*)0,&l_1584,&l_1584,(void*)0,(void*)0}};
                        int l_1589 = 0xC8C51E21L;
                        int i, j;
                        (*****g_880) ^= (safe_add_func_int8_t_s_s((-7L), (~(l_1581 == l_1583))));
                        (*****g_880) |= ((l_1586 = l_1584) == &g_213);

                        ;
                        --l_1592;
                        return (*l_1124);
                    }
                    for (g_430 = 3; (g_430 >= 0); g_430 -= 1)
                    {
                        return l_1571[0];
                    }
                }
            }
            for (l_1591 = 0; (l_1591 != 29); l_1591 = safe_add_func_uint32_t_u_u(l_1591, 9))
            {
                int l_1606 = 3L;
                for (g_442 = (-26); (g_442 == 20); g_442 = safe_add_func_uint32_t_u_u(g_442, 2))
                {
                    (*g_530) = &l_1572;
                    for (g_50 = 0; (g_50 <= 3); g_50 += 1)
                    {
                        int l_1601 = 0x738591CCL;
                        (**g_529) = func_41((safe_mul_func_uint8_t_u_u((l_1601 | func_57(&l_1534, (+((func_2((safe_add_func_uint8_t_u_u(l_1601, (safe_mod_func_uint32_t_u_u(g_50, (*l_1124)))))) | 0UL) > 1UL)), (**g_496), (*g_304))), l_1606)), (*g_470), &l_1590, &l_4, (*g_470));
                        (*l_1124) = (*g_517);
                    }
                }
                for (g_143 = 0; (g_143 <= 29); g_143++)
                {
                    (**g_529) = &l_1606;
                    if ((*l_1124))
                        continue;
                    (*l_1124) = (g_1576 <= g_762);
                    (****g_880) = l_1609;
                }


            }


            --l_1610;
        }
        else
        {
            int l_1621[7] = {0L,0xE6FB864AL,0xE6FB864AL,0xE6FB864AL,0x75E9FC88L,0x75E9FC88L,0xE6FB864AL};
            unsigned short l_1634 = 5UL;
            int l_1643 = 0xBCCB546AL;
            int *l_1644 = &g_762;
            char *l_1645[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            short *l_1652 = &l_14;
            int i, j;
            (***g_529) = 5L;
            for (l_1591 = 0; (l_1591 < 6); ++l_1591)
            {
                char l_1647 = 7L;
            }
        }


    }



    ;

    ;

    ;
    l_1124 = &l_1590;

    ;
    (*g_116) = l_1664;


    for (g_442 = 0; (g_442 < 17); g_442 = safe_add_func_uint16_t_u_u(g_442, 9))
    {
        unsigned char l_1679 = 7UL;
        int *l_1682 = (void*)0;
        unsigned short l_1687 = 65531UL;
        unsigned l_1689[7][2][1] = {{{0x5B6185B0L},{0x85D4BAEEL}},{{0x85D4BAEEL},{0x5B6185B0L}},{{0xE83691D2L},{0x5B6185B0L}},{{0x85D4BAEEL},{0x85D4BAEEL}},{{0x5B6185B0L},{0xE83691D2L}},{{0x5B6185B0L},{0x85D4BAEEL}},{{0x85D4BAEEL},{0x5B6185B0L}}};
        unsigned l_1696[2];
        unsigned **l_1705 = &g_521;
        char *l_1710[7] = {&g_74,&g_74,&g_74,&g_74,&g_74,&g_74,&g_74};
        int l_1743 = 0xA62DF413L;
        int l_1751 = 0xF4A8F59BL;
        int l_1754[7] = {0x8D536B66L,0x8D536B66L,0x8D536B66L,0x8D536B66L,0x8D536B66L,0x8D536B66L,0x8D536B66L};
        int *l_1785 = &l_1754[5];
        int **l_1786[3];
        int l_1793 = 0xB1B3C5B8L;
        unsigned char l_1796 = 0x84L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1696[i] = 1UL;
        for (i = 0; i < 3; i++)
            l_1786[i] = (void*)0;
        if ((*l_1124))
        {
            unsigned char l_1670 = 0xE6L;
            int *******l_1677 = &g_879[9][2][1];
            char **l_1680 = &g_471;
            char **l_1681 = &l_1627[2];
            if (l_1670)
            {
                int l_1671 = 0xDEFDF624L;
                int l_1676 = 0xB4B2BADEL;
                if (l_1671)
                    break;
                for (l_1671 = (-4); (l_1671 > (-20)); l_1671 = safe_sub_func_int16_t_s_s(l_1671, 7))
                {
                    int l_1678 = 0x5E490D83L;
                    l_1678 &= ((safe_mul_func_int8_t_s_s(l_1676, l_1671)) >= func_2((&g_879[1][6][1] != l_1677)));
                    (*l_1124) ^= (4294967287UL != (-1L));
                }
            }
            else
            {
                unsigned l_1688 = 5UL;
                (*l_1124) &= ((func_2(l_1679) && 0xBFL) | ((l_1680 != (l_1681 = &g_471)) || func_57(l_1682, ((0x9EE8L < (safe_mul_func_uint16_t_u_u(65527UL, ((safe_lshift_func_uint8_t_u_u((((((*g_351) | 0xEBB8L) < g_1157) & 3UL) <= l_1687), g_899[0])) ^ l_1688)))) & l_1689[6][1][0]), (*g_517), (*g_304))));

                ;
                (*l_1124) = (safe_lshift_func_uint16_t_u_s((((*g_471) = (((*g_304) || (g_264 && (1L < (**g_350)))) != (g_143 = (safe_rshift_func_uint16_t_u_u((1L != func_2((*g_471))), (((safe_lshift_func_uint8_t_u_s(((g_30 = (&g_878 != (void*)0)) && 0x47L), (*l_1124))) == 0xFE0D0E21L) <= 0UL)))))) && g_525[0][2]), l_1696[0]));
            }

            ;
        }
        else
        {
            unsigned l_1708[6] = {4294967295UL,0x8642A69FL,4294967295UL,4294967295UL,0x8642A69FL,4294967295UL};
            int *l_1717 = (void*)0;
            char *l_1718[5][4] = {{(void*)0,&g_1194,(void*)0,(void*)0},{&g_1194,&g_1194,&g_1194,&g_1194},{&g_1194,(void*)0,(void*)0,&g_1194},{(void*)0,&g_1194,(void*)0,(void*)0},{&g_1194,&g_1194,&g_1194,&g_1194}};
            char *l_1719 = &g_1194;
            union U0 *l_1728 = &l_1711;
            unsigned char *l_1739 = &g_143;
            int i, j;
            for (g_1194 = 0; (g_1194 != 23); g_1194 = safe_add_func_int8_t_s_s(g_1194, 4))
            {
                unsigned char l_1702 = 0xBDL;
                union U0 l_1709[10][1] = {{{0xC30E6AA0L}},{{4294967295UL}},{{0xC30E6AA0L}},{{4294967295UL}},{{0xC30E6AA0L}},{{4294967295UL}},{{0xC30E6AA0L}},{{4294967295UL}},{{0xC30E6AA0L}},{{4294967295UL}}};
                int *l_1727[6];
                unsigned l_1734[1];
                int i, j;
                for (i = 0; i < 6; i++)
                    l_1727[i] = &l_1575;
                for (i = 0; i < 1; i++)
                    l_1734[i] = 0x47C733E5L;
                if (l_1696[0])
                {
                    int *l_1701 = &g_50;
                    unsigned **l_1706 = &g_521;
                    char *l_1720[3][3] = {{(void*)0,(void*)0,(void*)0},{&g_74,&g_74,&g_74},{(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    (*l_1664) = (safe_mul_func_uint16_t_u_u((*l_1664), 0xD2DEL));
                    if (func_57(l_1701, (l_1702 | (safe_sub_func_int8_t_s_s((*g_471), 0x93L))), ((*g_517) = (l_1705 == l_1706)), (!func_57(l_1707, l_1708[2], ((*l_1664) = ((*l_1701) > l_1702)), l_1708[3]))))
                    {
                        int *l_1712 = &g_298[4];
                        l_1712 = l_1682;

                        ;
                    }
                    else
                    {
                        unsigned char l_1713[4][7][3] = {{{0UL,7UL,0UL},{7UL,0UL,0UL},{0UL,0UL,0UL},{3UL,7UL,255UL},{0UL,0UL,255UL},{7UL,3UL,0UL},{0UL,0UL,0UL}},{{0UL,7UL,0UL},{7UL,0UL,0UL},{0UL,0UL,0UL},{3UL,7UL,255UL},{0UL,0UL,255UL},{7UL,3UL,0UL},{0UL,0UL,0UL}},{{0UL,7UL,0UL},{7UL,0UL,0UL},{0UL,0UL,0UL},{3UL,7UL,255UL},{0UL,0UL,255UL},{7UL,3UL,0UL},{0UL,0UL,0UL}},{{0UL,7UL,0UL},{7UL,0UL,0UL},{0UL,0UL,0UL},{3UL,7UL,255UL},{0UL,0UL,255UL},{7UL,3UL,0UL},{0UL,7UL,0UL}}};
                        char *l_1714 = &g_430;
                        char **l_1715 = &l_1627[1];
                        int *l_1721 = (void*)0;
                        int i, j, k;
                        (*g_496) = l_1717;

                        ;
                    }
                    for (l_1587 = 10; (l_1587 > 18); l_1587++)
                    {
                        int *l_1724[9][9][3] = {{{&g_762,&g_686,&g_78},{&g_50,&l_1588,&g_78},{&g_6[2],&g_298[4],&g_686},{&g_78,&l_1575,&g_78},{&l_1591,&g_1125,&g_78},{&g_762,&g_6[3],&g_6[8]},{&l_1591,&g_6[7],&l_1591},{&l_1588,&l_1575,&g_762},{&g_78,&g_1125,&l_1591}},{{(void*)0,&g_50,&l_1575},{&g_686,&g_298[4],&g_6[2]},{(void*)0,&g_6[8],&l_1575},{&g_78,&g_686,&g_762},{&l_1588,&g_686,&l_1575},{&l_1591,(void*)0,(void*)0},{&g_762,&g_298[6],&l_1575},{&l_1591,(void*)0,(void*)0},{&g_78,&g_6[8],&l_1575}},{{&g_6[2],(void*)0,&g_50},{&g_50,&g_298[6],&g_762},{&g_762,(void*)0,&g_50},{&g_686,&g_686,&g_6[8]},{(void*)0,&g_686,&l_1588},{&g_50,&g_6[8],&g_78},{(void*)0,&g_298[4],&g_50},{&g_78,&g_50,&g_78},{&g_50,&g_1125,&l_1588}},{{&g_762,&l_1575,&g_6[8]},{&g_50,&g_6[7],&g_50},{&l_1588,&g_6[3],&g_762},{&l_1588,&g_1125,&g_50},{&g_6[3],&g_298[6],&l_1575},{&l_1591,&g_6[7],&g_78},{&g_6[3],&g_50,&g_298[6]},{&l_1575,(void*)0,&g_298[6]},{&g_50,&l_1575,&l_1575}},{{&g_50,&g_1125,&g_50},{&l_1588,&g_78,&g_298[6]},{&g_6[2],(void*)0,&l_1588},{&g_686,&g_78,&l_1575},{&g_78,(void*)0,(void*)0},{&l_1575,&g_78,&g_6[8]},{&g_298[6],&g_1125,&g_686},{&g_6[8],&l_1575,&l_1575},{&g_50,(void*)0,&l_1590}},{{&l_1575,&g_50,&l_1575},{&l_1588,&g_6[7],&g_6[8]},{&g_686,&g_298[6],&l_1575},{(void*)0,&l_1590,&l_1590},{&l_1588,&g_298[6],&l_1575},{&g_686,&g_686,&g_686},{&g_50,&l_1590,&g_6[8]},{&l_1590,&l_1590,(void*)0},{&g_6[3],&l_1575,&l_1575}},{{&g_6[8],&g_6[7],&l_1588},{&g_6[3],&l_1575,&g_298[6]},{&l_1590,(void*)0,&g_50},{&g_50,&g_6[8],&l_1575},{&g_686,&g_1125,&g_298[6]},{&l_1588,&l_1575,&g_298[6]},{(void*)0,(void*)0,&g_78},{&g_686,(void*)0,&l_1575},{&l_1588,(void*)0,&g_6[2]}},{{&g_6[8],&g_78,&l_1575},{&l_1591,&g_6[7],&g_50},{&g_298[6],&g_298[6],&l_1575},{&g_50,&g_298[4],&g_6[8]},{&g_6[8],&l_1575,&g_762},{&g_50,(void*)0,&l_1575},{&g_6[3],&g_6[8],&g_762},{&l_1591,&g_686,&g_6[8]},{&g_78,&g_6[8],&l_1575}},{{&g_50,&g_6[8],&g_50},{&g_686,&l_1588,&l_1575},{&g_6[8],&g_686,&l_1591},{&g_762,&l_1575,&l_1575},{&l_1575,(void*)0,&g_50},{&g_762,&g_686,&l_1575},{&g_6[8],&g_298[4],&g_50},{&g_686,&l_1590,&l_1590},{&g_50,&g_6[7],&l_1591}}};
                        int i, j, k;
                        l_1724[8][8][0] = l_1682;
                        (*l_1701) = (*l_1664);
                        (*l_1707) &= (0xB4L > (safe_sub_func_uint16_t_u_u(((*g_304) = (*l_1701)), (*l_1701))));
                        (*g_315) = l_1727[2];
                    }


                }
                else
                {
                    short l_1731[4][9][5] = {{{0xA94BL,(-1L),0x3A9FL,0xC199L,(-7L)},{0L,0x19DCL,0L,0x9C5EL,0x2EB0L},{0L,(-7L),0x4103L,1L,0L},{1L,0xA94BL,0xEB85L,1L,0xC031L},{5L,0x054AL,1L,0x9C5EL,0x8037L},{0xE2FBL,4L,0L,0xC199L,0x8F5CL},{(-1L),0x0E7DL,0x0551L,0x1FBDL,1L},{0xD338L,0x9254L,0xC7A3L,(-1L),(-1L)},{1L,0x6569L,0xF3F0L,0L,0L}},{{(-7L),0xE2FBL,0x6569L,1L,0x2EB0L},{0L,0x76E0L,0x11F0L,0L,0x8FFCL},{0x0E7DL,0xDF0FL,0x6569L,0x2EB0L,0x0F1AL},{0x0551L,0x615BL,0xF3F0L,0x11F0L,0x39C5L},{0x4103L,0xF3F0L,0x1FBDL,1L,8L},{0x2EB0L,0x18C7L,1L,0x0F1AL,0x6569L},{0x054AL,0xEB85L,1L,(-1L),0x76E0L},{0x6301L,0L,0x8631L,(-7L),4L},{0L,0x0E7DL,0xFD06L,0x0ED7L,0x19DCL}},{{0xE2FBL,0x0E7DL,(-2L),0xF3F0L,0xC7A3L},{0x9EDAL,0L,4L,0x8631L,1L},{0x765AL,0xEB85L,0x8037L,1L,0x8F5CL},{0xC7A3L,0x18C7L,0x8033L,(-1L),5L},{1L,0xF3F0L,0L,0L,0xF3F0L},{0x8FFCL,0x615BL,0xC7A3L,0L,0L},{4L,0xDF0FL,1L,0x0282L,0x9EDAL},{0x0282L,0x76E0L,(-1L),0x19DCL,(-7L)},{4L,0xE2FBL,8L,5L,(-1L)}},{{0x8FFCL,0x76E0L,0x8631L,0L,0x8F5CL},{0x2EB0L,0xF31DL,0L,0x6301L,0L},{0xA94BL,0x1FBDL,0x9254L,1L,0x765AL},{0L,(-1L),0x6569L,0x8033L,0L},{0x1FBDL,0L,0x0F1AL,1L,0xDF0FL},{0L,0x615BL,(-1L),1L,0xDF0FL},{8L,(-7L),0x0E7DL,0xC199L,0L},{6L,0xC199L,1L,0L,0x765AL},{0x11F0L,8L,0x0282L,0xE2FBL,0L}}};
                    int i, j, k;
                    (*g_517) = ((*l_1707) = (*g_93));
                    if ((*l_1664))
                        continue;
                    l_1728 = (*g_1509);

                    ;
                    (*g_517) = ((safe_sub_func_uint16_t_u_u(l_1731[0][6][1], ((+(-1L)) == (func_2((((*g_471) >= ((safe_mul_func_int16_t_s_s(((func_57(l_1682, l_1731[0][6][1], (*l_1124), (*g_304)) || 0xB312L) & g_442), 0xC76EL)) || 0x73C33D7EL)) >= g_143)) || (*g_304))))) != g_74);
                }


                ;
                return l_1734[0];


            }
            (*l_1707) ^= ((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((l_1710[1] != (void*)0), 0)) == g_151) >= (**g_350)), ((*l_1739) |= g_921.f0))) >= g_13[6]);
        }
        if (l_1696[0])
        {
            int l_1742 = (-8L);
            int l_1747 = 0L;
            int l_1748 = 0x3B0EB11CL;
            int l_1750 = (-1L);
            int l_1753[9][5][5] = {{{1L,0xF84E19BCL,0L,0x3893D7B8L,0L},{0x71DBA40CL,5L,0xE1B32A81L,0x468E2EBEL,0xF84E19BCL},{0x468E2EBEL,0xD49A5DEEL,7L,0L,0xB5AD5EB7L},{0x3052F7B7L,1L,0x468E2EBEL,8L,(-7L)},{5L,1L,0xF52066B1L,0L,0x3B05CD1BL}},{{5L,0x468E2EBEL,1L,0x16A93618L,0x3052F7B7L},{0x3052F7B7L,0x3834B9D9L,0x3834B9D9L,0x3052F7B7L,1L},{0x468E2EBEL,0x3893D7B8L,0x3BB86D19L,1L,0L},{0x71DBA40CL,1L,1L,0xE1B32A81L,0x80A79704L},{1L,0L,2L,1L,0x71DBA40CL}},{{0L,0L,7L,0x1FA8B1ABL,0L},{(-1L),1L,1L,0L,0L},{7L,(-4L),0xF8FFD83EL,5L,0x468E2EBEL},{0xAE7A9921L,(-4L),0x1FA8B1ABL,(-7L),1L},{(-1L),1L,0L,1L,(-1L)}},{{0L,0xF84E19BCL,0L,0x3834B9D9L,(-1L)},{0xB5AD5EB7L,0L,0L,0x16A93618L,(-8L)},{0xD49A5DEEL,0L,0L,0xF84E19BCL,(-1L)},{0xF8FFD83EL,0x16A93618L,1L,0x3052F7B7L,(-1L)},{(-1L),0xD49A5DEEL,0x0E1F9558L,8L,1L}},{{0x3893D7B8L,0x3834B9D9L,0L,0x3BB86D19L,0x468E2EBEL},{0x71DBA40CL,0x5699B687L,0L,0L,0L},{0x3BB86D19L,0L,0x0E1F9558L,0x0E1F9558L,0L},{5L,0x3BB86D19L,1L,0xF8FFD83EL,0xE1B32A81L},{0L,0x80A79704L,0L,(-1L),0xF52066B1L}},{{2L,0x7F924CDEL,0L,0x80A79704L,0L},{0L,0xB5AD5EB7L,0L,0x3893D7B8L,0x5699B687L},{5L,8L,0L,0xAE7A9921L,0x1FA8B1ABL},{0x3BB86D19L,0x71DBA40CL,0x1FA8B1ABL,0L,1L},{0x71DBA40CL,0L,(-1L),0xE1B32A81L,0xD49A5DEEL}},{{0xF8FFD83EL,1L,0x3BB86D19L,5L,0x3BB86D19L},{0L,0L,0x3B05CD1BL,0xF8FFD83EL,0L},{(-1L),0x71DBA40CL,0x468E2EBEL,0x7F924CDEL,0xF84E19BCL},{0x3052F7B7L,1L,0L,(-4L),0x0E1F9558L},{0xD49A5DEEL,0x71DBA40CL,0L,(-1L),0x7F924CDEL}},{{0L,0L,0x3052F7B7L,1L,0x468E2EBEL},{(-4L),1L,(-1L),0xF52066B1L,0xF8FFD83EL},{5L,0x80A79704L,8L,0x1FA8B1ABL,0xF8FFD83EL},{0x3B05CD1BL,0xB5AD5EB7L,0x0E1F9558L,0x468E2EBEL,0x468E2EBEL},{1L,0x468E2EBEL,1L,0L,0x7F924CDEL}},{{1L,0xD49A5DEEL,0x5699B687L,0x16A93618L,0x0E1F9558L},{0L,0L,0x16A93618L,(-8L),0xF84E19BCL},{1L,0x7F924CDEL,0x5699B687L,0x0E1F9558L,0L},{0x0E1F9558L,0x1FA8B1ABL,1L,0L,0x3BB86D19L},{0x71DBA40CL,(-7L),0x0E1F9558L,0x3834B9D9L,0xD49A5DEEL}}};
            unsigned char l_1764[3];
            unsigned short l_1765 = 1UL;
            unsigned char *l_1767[9] = {&l_1764[2],&l_1679,&l_1764[2],&l_1679,&l_1764[2],&l_1679,&l_1764[2],&l_1679,&l_1764[2]};
            unsigned char **l_1766 = &l_1767[8];
            unsigned *l_1774 = &g_1157;
            int *l_1779 = &l_1750;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1764[i] = 0xA2L;
            for (l_14 = (-13); (l_14 == 16); l_14 = safe_add_func_int8_t_s_s(l_14, 1))
            {
                int l_1745 = 7L;
                int l_1746[8][3][3] = {{{(-3L),0xD1178024L,0xDB378A86L},{(-3L),0xD78B4BC7L,(-3L)},{0L,0x3DE71847L,0L}},{{0xDB378A86L,0xD78B4BC7L,0x581AC5A3L},{0xDB378A86L,1L,(-8L)},{8L,0xA7ACD022L,(-3L)}},{{0xDB378A86L,0x0A9D7C61L,(-7L)},{0xDB378A86L,0x3DE71847L,8L},{8L,0xD1178024L,0x9DCF1AD4L}},{{0xDB378A86L,3L,0xD2C4B9E2L},{0xDB378A86L,7L,0xDB378A86L},{8L,0x7D1D1FE3L,0L}},{{0xDB378A86L,0xD78B4BC7L,0x581AC5A3L},{0xDB378A86L,1L,(-8L)},{8L,0xA7ACD022L,(-3L)}},{{0xDB378A86L,0x0A9D7C61L,(-7L)},{0xDB378A86L,0x3DE71847L,8L},{8L,0xD1178024L,0x9DCF1AD4L}},{{0xDB378A86L,3L,0xD2C4B9E2L},{0xDB378A86L,7L,0xDB378A86L},{8L,0x7D1D1FE3L,0L}},{{0xDB378A86L,0xD78B4BC7L,0x581AC5A3L},{0xDB378A86L,1L,(-8L)},{8L,0xA7ACD022L,(-3L)}}};
                int l_1760 = 0x970E4EEDL;
                int i, j, k;
                for (l_1711.f0 = 0; (l_1711.f0 <= 4); l_1711.f0 += 1)
                {
                    int l_1744 = 0x901B980BL;
                    int l_1749 = 0xDD35C79FL;
                    int l_1752 = 0x315CE694L;
                    int l_1755 = 0x55E1FD4BL;
                    int l_1756[6][3][4] = {{{0xED1CC1B1L,0x09871309L,8L,(-9L)},{0x9574B9EAL,0xEE1D2910L,0x1E3952B4L,0xED1CC1B1L},{0x1E3952B4L,0xED1CC1B1L,0xF50CC3F3L,(-1L)}},{{0xB290776EL,0L,0L,0xB290776EL},{0x07D20FE4L,0xBB31404FL,0x9574B9EAL,0x27CE658EL},{(-7L),0xF50CC3F3L,0xB290776EL,0xEE1D2910L}},{{0x5862FA6BL,0xC4397B52L,0xED1CC1B1L,0xEE1D2910L},{0x7E8F9306L,0xF50CC3F3L,0xCF52D040L,0x27CE658EL},{(-1L),0L,0xF50CC3F3L,0x07D20FE4L}},{{(-1L),(-1L),0x7E8F9306L,(-1L)},{0xC4397B52L,0xEE1D2910L,0L,0xEE1D2910L},{0L,(-8L),0L,0x5862FA6BL}},{{0x9574B9EAL,0xED1CC1B1L,0x5862FA6BL,(-1L)},{(-1L),0xC4397B52L,(-8L),0xCF52D040L},{(-1L),8L,0x5862FA6BL,0x9574B9EAL}},{{0x9574B9EAL,0xCF52D040L,0L,(-1L)},{0L,(-7L),0L,0x38F04226L},{0xC4397B52L,0L,0x7E8F9306L,0x7E8F9306L}}};
                    int *l_1761 = &g_1125;
                    int i, j, k;
                    l_1757[0][0]++;
                    for (g_214.f0 = 0; (g_214.f0 <= 1); g_214.f0 += 1)
                    {
                        int i, j, k;
                        (*l_1707) &= 0xDCF47F7EL;
                        (*g_517) = l_1760;
                        (*l_1707) |= (*g_517);
                        l_1761 = &l_1754[6];

                        ;
                    }

                    ;
                }
            }
            if (func_57(&l_1743, ((*l_1707) ^ (safe_lshift_func_int8_t_s_s((+(((*l_1766) = &g_30) != &g_30)), (*g_471)))), l_1679, (*g_304)))
            {
                if (l_1696[1])
                    break;
            }
            else
            {
                int *l_1773 = &g_50;
                unsigned **l_1775 = &g_521;
                unsigned **l_1776 = &l_1774;
                unsigned **l_1777[8] = {&g_521,&g_521,&g_521,&g_521,&g_521,&g_521,&g_521,&g_521};
                char *l_1780 = &g_111;
                int i;
                (*g_517) ^= (safe_mul_func_uint16_t_u_u((*g_304), (safe_mul_func_uint16_t_u_u(l_1772, 0x67A2L))));
                l_1773 = &l_1754[6];

                ;
                l_1779 = l_1773;

                ;
                (*l_1773) = (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(func_57(l_1785, ((l_1786[0] = (***g_880)) == (void*)0), ((*g_304) | (((safe_sub_func_uint32_t_u_u(0xEF014061L, (func_2((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((*l_1779), ((((((*g_351) ^ func_2(((*g_471) = (*l_1664)))) < 65535UL) != l_1793) <= g_686) > (*g_304)))), g_50))) >= (*l_1773)))) <= 0x0126L) == 0x29L)), (*l_1773)), 2)), (*l_1773))) | (*l_1707)) == (*l_1773));


            }


            ;

            return g_1794;
        }
        else
        {
            short l_1795 = 5L;
            int l_1813[9] = {5L,5L,5L,5L,5L,5L,5L,5L,5L};
            int i;
            l_1796 = l_1795;
            for (l_4 = 0; (l_4 <= 6); l_4 += 1)
            {
                int *l_1797[10] = {&l_1591,&l_1575,&g_1125,&l_1575,&l_1591,&l_1591,&l_1575,&g_1125,&l_1575,&l_1591};
                int i;
                l_1797[6] = (void*)0;


                for (l_1590 = 4; (l_1590 >= 1); l_1590 -= 1)
                {
                    unsigned l_1811 = 0x4F8A9B2FL;
                    for (l_1711.f1 = 0; (l_1711.f1 <= 1); l_1711.f1 += 1)
                    {
                        int i, j, k;
                        (*g_517) = (safe_lshift_func_uint8_t_u_s(((l_1754[(l_1711.f1 + 2)] >= g_720[(l_1711.f1 + 5)][(l_1711.f1 + 4)][(l_1711.f1 + 2)]) | (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_1806 != (void*)0), 0)), l_1624[l_1590])), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s((*l_1785), 8)), 6))))), 6));
                        if (l_1811)
                            break;
                    }

                                        for (g_430 = 0; (g_430 <= 8); g_430 += 1)
                    {
                        int l_1812 = 0x0B10AA19L;
                        int i;
                        (*l_1664) = l_1812;
                    }
                    if (l_1795)
                        break;
                }
            }
            --g_1814;
        }
        l_1817--;
    }
    return (*g_517);
}







static int func_2(char p_3)
{
    int *l_5 = &g_6[8];
    int l_7 = (-1L);
    int *l_8[5][5] = {{&l_7,&g_6[8],&l_7,&l_7,&g_6[8]},{&g_6[8],&g_6[5],&l_7,&g_6[8],&l_7},{(void*)0,&g_6[8],&g_6[7],&g_6[8],(void*)0},{&l_7,&g_6[7],&g_6[5],&l_7,&g_6[7]},{(void*)0,&g_6[5],&g_6[5],(void*)0,&l_7}};
    unsigned short l_9 = 65526UL;
    int i, j;
    l_9++;
    return (*l_5);
}







static char * func_23(char * p_24, union U0 p_25, int * p_26, char p_27)
{
    unsigned char *l_1130 = &g_143;
    char ***l_1133 = (void*)0;
    char ***l_1134 = (void*)0;
    char ***l_1135 = &g_470;
    char ***l_1136 = &g_470;
    char ***l_1137 = &g_470;
    char ***l_1138 = &g_470;
    char ***l_1139 = &g_470;
    char ***l_1140[6][4][5] = {{{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,(void*)0,&g_470},{&g_470,&g_470,(void*)0,&g_470,&g_470},{&g_470,&g_470,&g_470,(void*)0,(void*)0}},{{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,(void*)0},{&g_470,&g_470,&g_470,(void*)0,&g_470},{(void*)0,&g_470,&g_470,&g_470,&g_470}},{{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,(void*)0,(void*)0,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470}},{{&g_470,&g_470,&g_470,(void*)0,&g_470},{&g_470,&g_470,(void*)0,&g_470,&g_470},{&g_470,&g_470,&g_470,(void*)0,(void*)0},{&g_470,&g_470,&g_470,&g_470,&g_470}},{{&g_470,&g_470,&g_470,&g_470,(void*)0},{&g_470,&g_470,&g_470,(void*)0,&g_470},{(void*)0,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470}},{{&g_470,&g_470,&g_470,&g_470,&g_470},{(void*)0,(void*)0,(void*)0,&g_470,&g_470},{&g_470,&g_470,&g_470,&g_470,&g_470},{&g_470,&g_470,(void*)0,&g_470,&g_470}}};
    char **l_1141 = &g_471;
    unsigned char *l_1142 = &g_442;
    char l_1143 = 1L;
    unsigned char *l_1144 = (void*)0;
    unsigned char *l_1145[4][9][2] = {{{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,&g_30},{(void*)0,&g_30}},{{(void*)0,(void*)0},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,&g_30}},{{(void*)0,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{(void*)0,&g_30}},{{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30},{(void*)0,&g_30},{&g_30,&g_30},{(void*)0,&g_30},{(void*)0,(void*)0},{(void*)0,&g_30}}};
    int l_1155 = 1L;
    int l_1171 = 0xF0CDE398L;
    int *l_1172[4];
    int *******l_1193[3];
    short l_1231 = 1L;
    int *l_1265 = &g_686;
    unsigned l_1337 = 0x0A9374D6L;
    int *l_1350[7][10] = {{&g_1125,&g_50,&l_1155,&g_298[6],&g_298[6],&l_1155,&g_298[6],&g_50,&g_686,&g_298[6]},{&g_50,(void*)0,&g_78,&g_298[6],(void*)0,&g_78,&g_298[6],&g_78,(void*)0,&g_298[6]},{&g_78,&g_298[6],&g_78,(void*)0,&g_298[6],&g_78,(void*)0,&g_50,(void*)0,(void*)0},{&g_50,&g_298[6],&l_1155,&g_298[6],&g_298[6],&l_1155,&g_298[6],&g_50,&g_686,&g_298[6]},{&g_50,(void*)0,&g_78,&g_298[6],(void*)0,&g_78,&g_298[6],&g_78,(void*)0,&g_298[6]},{&g_78,&g_298[6],&g_78,(void*)0,&g_298[6],&g_78,(void*)0,&g_50,(void*)0,(void*)0},{&g_50,&g_298[6],&l_1155,&g_298[6],&g_298[6],&l_1155,&g_298[6],&g_50,&g_686,&g_298[6]}};
    int l_1379 = 0x267692BEL;
    char *l_1394 = &g_1194;
    unsigned char l_1422 = 251UL;
    int *l_1501 = &l_1379;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1172[i] = &l_1155;
    for (i = 0; i < 3; i++)
        l_1193[i] = &g_879[9][2][1];
    if ((safe_sub_func_uint32_t_u_u((!(((*l_1130) |= p_25.f1) < (safe_lshift_func_uint8_t_u_u(((*l_1142) = (&g_471 == (l_1141 = &p_24))), (g_30 = l_1143))))), l_1143)))
    {
        short l_1148 = 1L;
        int l_1156[2];
        short **l_1169 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_1156[i] = 0L;
        for (g_78 = 0; (g_78 != 3); g_78 = safe_add_func_int16_t_s_s(g_78, 6))
        {
            int l_1149 = 0x7D6CC668L;
            int l_1150[7][8] = {{0x91F9C0FEL,0x082371B3L,0x91F9C0FEL,0xC9FC1363L,0xC9FC1363L,0x91F9C0FEL,0x082371B3L,0x91F9C0FEL},{1L,0xC9FC1363L,0xEA720E51L,0xC9FC1363L,1L,1L,0xC9FC1363L,0xEA720E51L},{1L,1L,0xC9FC1363L,0xEA720E51L,0xC9FC1363L,1L,1L,0xC9FC1363L},{0x91F9C0FEL,0xC9FC1363L,0xC9FC1363L,0xC9FC1363L,0xEA720E51L,0xC9FC1363L,1L,1L},{1L,0xEA720E51L,0x91F9C0FEL,0x91F9C0FEL,0xEA720E51L,1L,0xEA720E51L,0x91F9C0FEL},{0xC9FC1363L,0xEA720E51L,0xC9FC1363L,1L,1L,0xC9FC1363L,0xEA720E51L,0xC9FC1363L},{0x082371B3L,1L,0x91F9C0FEL,1L,0x082371B3L,0x082371B3L,1L,0x91F9C0FEL}};
            char l_1170 = 8L;
            int i, j;
            if ((*p_26))
            {
                return &g_111;


            }
            else
            {
                int *l_1151 = (void*)0;
                int *l_1152 = &g_1125;
                int *l_1153 = &g_298[3];
                int *l_1154[5][8][6] = {{{(void*)0,&g_298[6],&g_298[6],&g_298[6],(void*)0,&g_686},{&g_298[6],(void*)0,&g_686,&g_298[2],(void*)0,&g_50},{&g_686,&g_298[6],&g_50,(void*)0,&g_298[6],&g_50},{&g_298[6],&g_686,&g_686,&g_78,&g_78,&g_686},{&g_298[6],&g_298[6],&g_298[6],(void*)0,&l_1150[3][7],&g_762},{&g_686,&g_298[6],&g_298[1],&g_298[2],&g_78,&g_298[6]},{&g_298[6],&g_686,&g_298[1],&g_298[6],&g_298[6],&g_762},{(void*)0,&g_298[6],&g_298[6],&g_298[6],(void*)0,&g_686}},{{&g_298[6],(void*)0,&g_686,&g_298[2],(void*)0,&g_50},{&g_686,&g_298[6],&g_50,(void*)0,&g_298[6],&g_50},{&g_298[6],&g_686,&g_686,&g_78,&g_78,&g_686},{&g_298[6],&g_78,&g_686,&g_686,&g_298[6],&g_298[1]},{&g_298[6],&g_78,&g_50,(void*)0,&g_298[2],&g_686},{&l_1150[3][7],&g_298[6],&g_50,&l_1150[3][7],&g_78,&g_298[1]},{&g_686,&l_1150[3][7],&g_686,&l_1150[3][7],&g_686,&g_762},{&l_1150[3][7],&g_686,&g_762,(void*)0,&g_686,&g_50}},{{&g_298[6],&l_1150[3][7],&g_298[6],&g_686,&g_78,&g_50},{&g_78,&g_298[6],&g_762,&g_298[2],&g_298[2],&g_762},{&g_78,&g_78,&g_686,&g_686,&g_298[6],&g_298[1]},{&g_298[6],&g_78,&g_50,(void*)0,&g_298[2],&g_686},{&l_1150[3][7],&g_298[6],&g_50,&l_1150[3][7],&g_78,&g_298[1]},{&g_686,&l_1150[3][7],&g_686,&l_1150[3][7],&g_686,&g_762},{&l_1150[3][7],&g_686,&g_762,(void*)0,&g_686,&g_50},{&g_298[6],&l_1150[3][7],&g_298[6],&g_686,&g_78,&g_50}},{{&g_78,&g_298[6],&g_762,&g_298[2],&g_298[2],&g_762},{&g_78,&g_78,&g_686,&g_686,&g_298[6],&g_298[1]},{&g_298[6],&g_78,&g_50,(void*)0,&g_298[2],&g_686},{&g_686,&g_78,(void*)0,&g_686,&g_1125,&g_298[2]},{&g_762,&g_686,&g_298[6],&g_686,&g_762,&g_78},{&g_686,&g_762,&g_78,&g_298[4],&g_762,&g_686},{&g_78,&g_686,&l_1150[3][7],&g_762,&g_1125,&g_686},{&g_1125,&g_78,&g_78,&g_50,&g_50,&g_78}},{{&g_1125,&g_1125,&g_298[6],&g_762,&g_298[0],&g_298[2]},{&g_78,&g_1125,(void*)0,&g_298[4],&g_50,&g_298[6]},{&g_686,&g_78,(void*)0,&g_686,&g_1125,&g_298[2]},{&g_762,&g_686,&g_298[6],&g_686,&g_762,&g_78},{&g_686,&g_762,&g_78,&g_298[4],&g_762,&g_686},{&g_78,&g_686,&l_1150[3][7],&g_762,&g_1125,&g_686},{&g_1125,&g_78,&g_78,&g_50,&g_50,&g_78},{&g_1125,&g_1125,&g_298[6],&g_762,&g_298[0],&g_298[2]}}};
                int i, j, k;
                g_1157--;
            }
            for (g_74 = 0; (g_74 < 5); g_74++)
            {
                int l_1166[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1166[i] = 0x4BBF141FL;
                (*g_517) ^= (l_1156[1] = ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*p_26), l_1166[6])), ((((func_57(p_26, (~(safe_lshift_func_int8_t_s_s(((!l_1143) > (l_1169 != (void*)0)), 2))), l_1143, ((*g_304) = l_1166[6])) != 0xEBL) < l_1166[6]) == l_1170) ^ 255UL))) && p_25.f0));
            }
            l_1171 = (l_1156[1] ^= l_1149);
        }
    }
    else
    {
        int *l_1178 = &g_762;
        char *l_1180 = &g_430;
        int l_1251 = 5L;
        int l_1254[10][5] = {{8L,0x254B17ECL,0x03B234DAL,0x03B234DAL,0x254B17ECL},{0x9E59E20BL,(-1L),1L,(-1L),0x9E59E20BL},{0x254B17ECL,0x03B234DAL,0x03B234DAL,0x254B17ECL,8L},{(-9L),(-1L),(-9L),1L,(-9L)},{0x254B17ECL,0x254B17ECL,1L,0x03B234DAL,8L},{0x9E59E20BL,1L,1L,1L,0x9E59E20BL},{8L,0x03B234DAL,1L,0x254B17ECL,0x254B17ECL},{(-9L),1L,(-9L),(-1L),(-9L)},{8L,0x254B17ECL,0x03B234DAL,0x03B234DAL,0x254B17ECL},{0x9E59E20BL,(-1L),1L,(-1L),0x9E59E20BL}};
        unsigned l_1261 = 0x0B6D3274L;
        char *l_1266 = (void*)0;
        char **l_1279 = &g_471;
        char l_1311 = 1L;
        char **l_1346 = &g_471;
        int *l_1349 = &g_298[6];
        union U0 l_1356 = {0xD84AA1E7L};
        int i, j;
        for (g_214.f0 = 0; (g_214.f0 <= 0); g_214.f0 += 1)
        {
            int **l_1173 = &g_517;
            union U0 l_1174 = {4UL};
            int *l_1177 = &g_298[6];
            char *l_1179 = &g_111;
            unsigned **l_1181 = &g_521;
            unsigned **l_1182 = (void*)0;
            unsigned *l_1184[2];
            unsigned **l_1183 = &l_1184[0];
            short *l_1185 = &g_236;
            int i;
            for (i = 0; i < 2; i++)
                l_1184[i] = &g_921.f1;
            (*l_1177) |= func_57(((*l_1173) = p_26), (safe_mul_func_int16_t_s_s(((*l_1185) |= (((*l_1183) = ((*l_1181) = l_1172[1])) == p_26)), 5L)), (*p_26), (*g_304));

            ;
            ;

            return &g_430;



        }
        for (g_111 = (-23); (g_111 <= 17); g_111 = safe_add_func_int32_t_s_s(g_111, 9))
        {
            unsigned short l_1188 = 0UL;
            int l_1205[9][7] = {{1L,0xBC1B739AL,1L,1L,0xBC1B739AL,1L,1L},{0x3FC649B5L,0x3FC649B5L,1L,0x3FC649B5L,0x3FC649B5L,1L,0x3FC649B5L},{0xBC1B739AL,1L,1L,0xBC1B739AL,1L,1L,0xBC1B739AL},{0x02C7EFE1L,0x3FC649B5L,0x02C7EFE1L,0x02C7EFE1L,0x3FC649B5L,0x02C7EFE1L,0x02C7EFE1L},{0xBC1B739AL,0xBC1B739AL,0xC1621739L,0xBC1B739AL,0xBC1B739AL,0xC1621739L,0xBC1B739AL},{0x3FC649B5L,0x02C7EFE1L,0x02C7EFE1L,0x3FC649B5L,0x02C7EFE1L,0x02C7EFE1L,0x3FC649B5L},{1L,0xBC1B739AL,1L,1L,0xBC1B739AL,1L,1L},{0x3FC649B5L,0x3FC649B5L,1L,0x3FC649B5L,0x3FC649B5L,1L,0x3FC649B5L},{0xBC1B739AL,1L,1L,0xBC1B739AL,1L,1L,0xBC1B739AL}};
            int l_1233[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i, j;
            for (g_143 = 0; (g_143 <= 1); g_143 += 1)
            {
                (*l_1178) = (~((*p_26) |= ((*g_878) == (void*)0)));
                for (g_762 = 1; (g_762 >= 0); g_762 -= 1)
                {
                    unsigned l_1195 = 0xB48DED2BL;
                    int i, j, k;
                    (*p_26) = l_1188;
                    for (p_25.f1 = 0; (p_25.f1 <= 1); p_25.f1 += 1)
                    {
                        int l_1196 = 0x2212FEC4L;
                        l_1196 = (safe_add_func_int32_t_s_s((l_1195 = func_57(p_26, g_1194, l_1188, p_25.f0)), (*p_26)));
                    }

                                    }
            }
            p_26 = p_26;
            (*p_26) = (*l_1178);
            for (l_1171 = 0; (l_1171 != 7); l_1171++)
            {
                unsigned short l_1218 = 0UL;
                int l_1230 = 0xB232DF25L;
            }
        }
        if ((((*g_471) = (*l_1178)) ^ (*l_1178)))
        {
            int l_1242 = 0x28AFAE51L;
            int *l_1247 = &g_686;
            int l_1260[5] = {0x4271F6C4L,0x4271F6C4L,0x4271F6C4L,0x4271F6C4L,0x4271F6C4L};
            int i;
            for (g_762 = 0; (g_762 >= (-7)); g_762--)
            {
                (*g_517) |= (*p_26);
            }
            for (l_1155 = 0; (l_1155 <= (-20)); l_1155--)
            {
                unsigned l_1244 = 0xF61F6C23L;
                int l_1249[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1249[i] = 0xDB71AD55L;
                for (g_111 = 3; (g_111 >= 0); g_111 -= 1)
                {
                    short l_1248 = 0xD870L;
                    int l_1250 = (-1L);
                    int l_1252 = (-9L);
                    int l_1255 = 1L;
                    int l_1256[9][5] = {{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L},{8L,0L,0L,8L,0x28F56AC6L}};
                    int i, j;
                    for (l_1171 = 0; (l_1171 <= 2); l_1171 += 1)
                    {
                        int l_1243 = (-2L);
                        int i, j, k;
                        l_1244--;
                        (*l_1178) ^= (~l_1242);
                    }
                    for (g_430 = 0; g_430 < 6; g_430 += 1)
                    {
                        for (g_86 = 0; g_86 < 3; g_86 += 1)
                        {
                            g_525[g_430][g_86] = 0x81F6FAADL;
                        }
                    }
                    for (l_1244 = 0; (l_1244 <= 3); l_1244 += 1)
                    {
                        int l_1253[4];
                        unsigned short l_1257 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_1253[i] = 0L;
                        l_1247 = p_26;

                        ;
                        if ((*p_26))
                            continue;
                        --l_1257;
                    }
                }
            }

            ;
            ++l_1261;
            (*l_1247) = (*p_26);
        }
        else
        {
            char *l_1264 = (void*)0;
            (*g_517) &= (*p_26);
        }
        if ((&l_1141 == &g_470))
        {
            union U0 *l_1267 = &g_921;
            int l_1291 = 0x8449D54BL;
            short l_1294[8] = {(-10L),(-10L),0x3529L,(-10L),(-10L),0x3529L,(-10L),(-10L)};
            int l_1296 = 0x222D6FDBL;
            int l_1299 = 0xD8380FD9L;
            int l_1309 = (-2L);
            int l_1319 = (-8L);
            int i;
            (*l_1265) ^= (*p_26);
            p_26 = p_26;
            (*g_517) = (*g_517);
            if ((*p_26))
            {
                union U0 *l_1270 = &g_214;
                char **l_1280[2];
                int l_1303 = 0x89EA930FL;
                int l_1305 = (-10L);
                int l_1310 = 1L;
                int l_1312 = 0x7EE193A3L;
                int l_1313 = 0x46954904L;
                int l_1316 = 1L;
                int l_1317 = (-10L);
                int l_1318[8];
                unsigned char l_1333 = 0UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1280[i] = &l_1266;
                for (i = 0; i < 8; i++)
                    l_1318[i] = 1L;
                for (g_264 = 0; (g_264 <= 3); g_264 += 1)
                {
                    union U0 **l_1269[2][8] = {{&l_1267,(void*)0,&l_1267,&l_1267,(void*)0,&l_1267,(void*)0,&l_1267},{&l_1267,(void*)0,&l_1267,&l_1267,&l_1267,&l_1267,(void*)0,&l_1267}};
                    short *l_1273 = &g_236;
                    char **l_1278 = &l_1180;
                    unsigned *l_1281 = &g_108[0];
                    unsigned *l_1286 = &g_921.f1;
                    short *l_1289 = (void*)0;
                    short *l_1290 = &l_1231;
                    int l_1292 = 3L;
                    int l_1298 = 0xABC90962L;
                    int l_1300 = 0x3778D282L;
                    int l_1301 = 1L;
                    int l_1306 = 1L;
                    int l_1307 = (-1L);
                    int l_1308 = 1L;
                    int l_1314 = 0x14694512L;
                    int l_1320[8] = {0xA21AF75DL,0xA21AF75DL,0xA21AF75DL,0xA21AF75DL,0xA21AF75DL,0xA21AF75DL,0xA21AF75DL,0xA21AF75DL};
                    int i, j;
                    l_1270 = l_1267;

                    ;
                    if (((safe_add_func_int16_t_s_s(((*l_1273) = (((*g_517) = (*p_26)) | (*l_1178))), (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u((((p_27 || ((l_1278 = (l_1279 = l_1278)) == l_1280[0])) >= ((*l_1290) = ((p_25.f1 = ((*l_1281)++)) > (safe_sub_func_uint32_t_u_u(((*l_1286) = p_27), (safe_add_func_int32_t_s_s((*p_26), (*p_26)))))))) <= ((*g_304) <= 0UL)), 0)) < (*l_1178)), (*p_26))))) <= (*p_26)))
                    {
                        int l_1293 = 0x7B509C41L;
                        int l_1295 = 6L;
                        int l_1297 = 3L;
                        int l_1302 = 1L;
                        int l_1304 = 1L;
                        int l_1315[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1315[i] = (-1L);
                        l_1172[g_264] = &l_1251;
                        g_1321++;
                    }
                    else
                    {
                        unsigned l_1326 = 0xDA149622L;
                        (*p_26) ^= (safe_add_func_int8_t_s_s(l_1326, (safe_add_func_int16_t_s_s((-2L), (safe_mul_func_uint8_t_u_u(((*g_304) | ((+0xCAL) <= (*g_471))), (safe_lshift_func_uint8_t_u_u((l_1312 == p_25.f0), (((-1L) == (((*g_351) == (*g_304)) || l_1333)) ^ 1UL)))))))));
                    }

                                        if ((*p_26))
                        break;
                }


                ;
                ;
            }
            else
            {
                p_26 = p_26;
                for (g_921.f0 = 22; (g_921.f0 <= 57); ++g_921.f0)
                {
                    int *l_1336 = &g_762;
                    p_26 = l_1336;

                    ;
                }

                ;
                p_26 = p_26;
            }

            ;

            ;
        }
        else
        {
            unsigned char l_1338[6] = {0xFCL,255UL,0xFCL,0xFCL,255UL,0xFCL};
            int l_1342[2];
            char *l_1355 = &l_1311;
            int *l_1357 = &g_298[3];
            int i;
            for (i = 0; i < 2; i++)
                l_1342[i] = 0x9889E018L;
            (*g_517) ^= (p_25.f1 ^ l_1337);
            for (g_74 = 3; (g_74 >= 0); g_74 -= 1)
            {
                unsigned short l_1339 = 65529UL;
                char *l_1348 = &g_111;
                union U0 l_1352 = {4294967295UL};
                int *l_1353[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_1353[i] = (void*)0;
            }
        }

        ;

        ;
    }

    ;
    ;

    (*g_116) = p_26;


    if ((*l_1265))
    {
        short l_1372 = 0x9941L;
        int *l_1380 = &l_1171;
        int l_1385 = 4L;
        int l_1386[8][4][7] = {{{(-5L),1L,1L,0x137BC748L,0x8C87DFBAL,2L,0xEF4FED0CL},{7L,0xDEECB0A4L,0xF90CBA6EL,0x25F543DBL,1L,0L,0x685D7B72L},{0xF11007C4L,1L,0xE7DFA1DEL,0xA9B411BEL,0xA08EA27BL,2L,2L},{0x8F0EBFE1L,0x2E73153DL,(-2L),0x2E73153DL,0x8F0EBFE1L,0x6E3A8381L,0x9BF2B560L}},{{9L,4L,0x548B7D96L,0x44B5DE4BL,2L,0xE7DFA1DEL,1L},{0xBC67D454L,0x6E3A8381L,7L,(-5L),0x35F9B05EL,1L,(-1L)},{9L,0x44B5DE4BL,(-1L),0xEF4FED0CL,(-1L),0x44B5DE4BL,9L},{0x8F0EBFE1L,0xBE303FE3L,9L,0x6B4C8DB9L,(-4L),0x61A3605DL,(-2L)}},{{0xF11007C4L,0x8C87DFBAL,(-5L),6L,0xEF4FED0CL,1L,4L},{7L,(-8L),9L,0L,(-9L),0L,9L},{1L,1L,(-1L),0xD01E8FB8L,1L,0x548B7D96L,1L},{(-9L),(-10L),7L,0x32E37063L,(-2L),(-8L),0x9AE7337FL}},{{0x3D2068C2L,0xE7DFA1DEL,0x548B7D96L,2L,1L,8L,1L},{(-1L),0x25F543DBL,(-2L),0L,(-9L),(-1L),9L},{0x44B5DE4BL,9L,0xA08EA27BL,0x137BC748L,4L,0xE7DFA1DEL,(-5L)},{(-2L),(-1L),0x0C93D515L,0x7F84335BL,0x0C93A485L,0x61A3605DL,9L}},{{(-5L),2L,0x3D2068C2L,0x3D2068C2L,2L,(-5L),(-1L)},{0L,0x25F543DBL,0xD951FE0FL,(-1L),0xBC67D454L,0x6E3A8381L,7L},{0xF11007C4L,6L,0xA9B411BEL,1L,0x44B5DE4BL,1L,0x548B7D96L},{(-9L),0x25F543DBL,0x685D7B72L,8L,0xAF577A5EL,0x7F84335BL,(-2L)}},{{4L,2L,1L,1L,1L,0xD8AFD970L,0xE7DFA1DEL},{0x8F0EBFE1L,(-1L),7L,0x61A3605DL,(-1L),0x77EC2EF3L,0xF90CBA6EL},{1L,9L,0xE7DFA1DEL,1L,0xA9B411BEL,0xA9B411BEL,1L},{0x0C93A485L,(-10L),0x0C93A485L,8L,7L,0xBE303FE3L,(-1L)}},{{8L,0xA08EA27BL,(-1L),1L,0xEF4FED0CL,2L,0x8C87DFBAL},{0xF90CBA6EL,0L,1L,(-1L),0x35F9B05EL,0xBE303FE3L,(-9L)},{0xD8AFD970L,0x3D2068C2L,1L,0x3D2068C2L,0xD8AFD970L,0xA9B411BEL,0x44B5DE4BL},{(-4L),0xDEECB0A4L,0xB7381939L,0x7F84335BL,9L,0x4C734CA6L,0xF90CBA6EL}},{{4L,(-1L),2L,1L,0xEF4FED0CL,0x548B7D96L,1L},{0xD951FE0FL,0x25F543DBL,0L,0x7F84335BL,0L,0x25F543DBL,0xD951FE0FL},{0x548B7D96L,0xF11007C4L,0x137BC748L,6L,0xA08EA27BL,0xE7DFA1DEL,0xD8AFD970L},{0xAF577A5EL,0L,0x0C93A485L,1L,0x685D7B72L,(-10L),0x9AE7337FL}}};
        char *l_1395 = &g_74;
        union U0 l_1416 = {0x208A5FA6L};
        int *l_1419 = &g_1125;
        int i, j, k;
        for (g_85 = 21; (g_85 > 16); g_85 = safe_sub_func_int32_t_s_s(g_85, 1))
        {
            int l_1366 = 0x80A938BDL;
            short *l_1381 = &g_232;
            unsigned *l_1382 = (void*)0;
            unsigned *l_1383[1][6][5] = {{{&g_108[0],&g_108[0],&g_108[0],&g_108[0],&g_108[0]},{&g_214.f1,&g_108[0],&g_214.f1,&g_108[0],&g_214.f1},{&g_108[0],&g_108[0],&g_108[0],&g_108[0],&g_108[0]},{&g_214.f1,&g_108[0],&g_214.f1,&g_108[0],&g_214.f1},{&g_108[0],&g_108[0],&g_108[0],&g_108[0],&g_108[0]},{&g_214.f1,&g_108[0],&g_214.f1,&g_108[0],&g_214.f1}}};
            int l_1384 = 1L;
            int *l_1392 = &g_50;
            int i, j, k;
            p_26 = p_26;
            if ((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_57(p_26, (l_1366 & ((*l_1380) = (l_1384 |= ((safe_unary_minus_func_int16_t_s(p_25.f0)) > (safe_add_func_int32_t_s_s((((void*)0 != &g_471) == ((safe_lshift_func_int8_t_s_s(l_1372, 0)) & ((safe_mul_func_int16_t_s_s(((*l_1381) = (safe_add_func_int8_t_s_s(((p_27 != func_57(p_26, (*g_471), (*p_26), (*l_1380))) && 0L), (*g_471)))), 0xAD62L)) != (-2L)))), g_762)))))), (*p_26), l_1366), p_25.f1)), 4)))
            {
                unsigned l_1387 = 0xA6E75E7FL;
                ++l_1387;
                (*l_1380) = l_1387;
            }
            else
            {
                char l_1396 = 0x92L;
                int l_1397 = 5L;
                int l_1398 = 0xEF88A5F5L;
                int l_1415 = 0x225C73D0L;
                for (l_1171 = (-22); (l_1171 >= 8); ++l_1171)
                {
                    char *l_1393 = &g_111;
                    int l_1399 = 0x59D6D0E5L;
                    int *l_1406[10] = {&l_1398,&l_1385,&l_1385,&l_1398,&l_1385,&l_1385,&l_1398,&l_1385,&l_1385,&l_1398};
                    int i;
                    for (p_25.f1 = 0; (p_25.f1 <= 1); p_25.f1 += 1)
                    {
                        int i, j, k;
                        l_1392 = p_26;
                    }

                                        if ((l_1393 != (l_1395 = l_1394)))
                    {
                        unsigned short l_1400 = 65533UL;
                        int *l_1403 = &g_50;
                        (*p_26) = ((**g_350) > 0xD5E5L);
                        --l_1400;
                        p_26 = l_1403;

                        ;
                    }
                    else
                    {
                        unsigned l_1404 = 0xD4586D3FL;
                        int l_1405 = 0xFBDE3564L;
                        (*g_315) = p_26;
                        l_1404 ^= (+(*p_26));
                        l_1405 ^= (*p_26);
                        l_1406[7] = p_26;


                    }

                    ;

                    if (((l_1398 >= 0x71B6EC60L) >= 0xEDL))
                    {
                        int **l_1407 = &l_1172[2];
                        l_1407 = &p_26;

                        ;
                    }
                    else
                    {
                        char *l_1408 = &l_1396;
                        l_1397 = ((*g_471) | (*g_471));
                        if ((*l_1380))
                            continue;
                        return &g_1194;


                    }
                    (*g_517) |= (func_57((l_1392 = p_26), (*g_471), (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(1UL, ((safe_mul_func_int8_t_s_s(l_1415, (p_27 == ((void*)0 == (*g_647))))) > func_57(&l_1399, (*g_471), (*l_1380), (*l_1265))))), g_214.f0)), g_921.f0) != (*p_26));
                }

                ;
            }

            ;
        }

        ;
        ;
        (*g_93) = (((!(func_57(&l_1385, ((-7L) ^ p_25.f1), (*l_1380), (*g_304)) ^ 7L)) & (*l_1419)) || 0xB1L);
        (*g_517) = 0x42AFDC0AL;
        p_26 = p_26;
    }
    else
    {
        int l_1420 = 0x1A3A4847L;
        int l_1421[1];
        short *l_1425 = &l_1231;
        int i;
        for (i = 0; i < 1; i++)
            l_1421[i] = 0x89DDE87BL;
        l_1422--;
        (*g_517) = (((*l_1265) <= (((((*l_1425) ^= (0xE9L || (+func_57(p_26, (*g_471), (*p_26), l_1421[0])))) && ((++(*l_1130)) != 255UL)) > (l_1421[0] > l_1421[0])) < 0x974246F4L)) < (-1L));
    }

    ;
    for (g_236 = 2; (g_236 >= 0); g_236 -= 1)
    {
        int *l_1428[6] = {&g_762,&g_686,&g_762,&g_762,&g_686,&g_762};
        unsigned char l_1430 = 0x95L;
        char l_1457 = 9L;
        unsigned char l_1490 = 0xFCL;
        int i;
        for (g_442 = 0; (g_442 <= 3); g_442 += 1)
        {
            int i, j;
            if (g_525[(g_236 + 1)][g_236])
                break;
            p_26 = l_1428[4];

            ;
            for (p_25.f1 = 0; (p_25.f1 <= 3); p_25.f1 += 1)
            {
                return &g_430;


            }

                    }
        for (g_78 = 3; (g_78 >= 0); g_78 -= 1)
        {
            short l_1452[6] = {0x162BL,0x162BL,0x162BL,0x162BL,0x162BL,0x162BL};
            int l_1471 = (-1L);
            int l_1472 = 2L;
            int l_1473 = 2L;
            int l_1474 = 0L;
            int l_1475 = 0x0B226274L;
            int l_1476 = 0x3E21F723L;
            int l_1477 = 0xE86D7A97L;
            int l_1478 = 0L;
            int l_1479 = 0xFB9BEEA9L;
            int l_1480 = 0xE5E6E0D6L;
            int l_1481 = 0x8BE034E8L;
            int l_1482 = 1L;
            int l_1483 = 1L;
            int l_1484 = 0L;
            int l_1485 = 0x33634ED2L;
            int l_1486 = 0x0FCF61B8L;
            int l_1487 = (-1L);
            int l_1488 = 0x0FD626FAL;
            int l_1489 = 3L;
            int i;
            (*g_517) = (*p_26);
            (*g_517) &= func_57(p_26, p_27, (*p_26), p_25.f0);
            for (g_1125 = 1; (g_1125 >= 0); g_1125 -= 1)
            {
                int l_1429 = (-1L);
                int *l_1458 = &l_1155;
                int i, j, k;
                ++l_1430;
            }
            for (g_1194 = 0; (g_1194 <= 3); g_1194 += 1)
            {
                int l_1470[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1470[i] = (-3L);
                l_1490--;
                l_1501 = (l_1428[4] = l_1428[4]);

                ;
            }
        }
    }

    ;
    ;
    return &g_430;


}







static char * func_28(unsigned p_29)
{
    int *l_49 = &g_50;
    int *l_55 = (void*)0;
    unsigned l_703[7];
    int l_718 = 0x02C52D62L;
    unsigned short l_725[3];
    char *l_726[4];
    int *l_727 = (void*)0;
    int ****l_739 = &g_529;
    short l_757 = 7L;
    int l_768[6] = {0x4AD849FBL,0x4AD849FBL,0x4AD849FBL,0x4AD849FBL,0x4AD849FBL,0x4AD849FBL};
    unsigned l_852 = 8UL;
    int *******l_882[3][10] = {{(void*)0,&g_879[9][2][1],&g_879[9][2][1],(void*)0,&g_879[9][2][1],(void*)0,&g_879[9][2][1],(void*)0,(void*)0,&g_879[6][7][1]},{&g_879[9][2][1],(void*)0,&g_879[2][3][0],&g_879[9][2][1],&g_879[1][7][0],&g_879[9][2][1],(void*)0,(void*)0,&g_879[9][2][1],&g_879[1][7][0]},{&g_879[9][2][1],&g_879[9][2][1],&g_879[9][2][1],&g_879[9][2][1],&g_879[6][7][1],(void*)0,(void*)0,&g_879[9][2][1],(void*)0,&g_879[1][7][0]}};
    int *l_919 = &l_768[1];
    char *l_927 = &g_430;
    int l_944 = 0x7C69281CL;
    char *l_959 = &g_111;
    union U0 l_966 = {1UL};
    char l_968 = 6L;
    union U0 *l_969 = &l_966;
    int *l_991 = &l_768[1];
    char *l_1061 = &l_968;
    union U0 l_1063 = {0x00E05374L};
    int l_1073 = 0xC7E0047CL;
    unsigned char l_1118 = 0x1CL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_703[i] = 4294967295UL;
    for (i = 0; i < 3; i++)
        l_725[i] = 0x11A3L;
    for (i = 0; i < 4; i++)
        l_726[i] = (void*)0;
    for (g_30 = (-3); (g_30 == 27); ++g_30)
    {
        int l_39 = 0x5C1B09C8L;
        char *l_40[5];
        int ***l_687 = &g_530;
        union U0 l_746 = {5UL};
        int l_771[3];
        unsigned char l_830 = 0xBEL;
        int i;
        for (i = 0; i < 5; i++)
            l_40[i] = (void*)0;
        for (i = 0; i < 3; i++)
            l_771[i] = (-1L);
    }
    (***l_739) = (void*)0;


    if ((((*g_304) |= 0x1628L) && (*g_304)))
    {
        int l_849[1];
        int l_850[2][4] = {{0x5EDE777EL,0x5EDE777EL,0x5EDE777EL,0x5EDE777EL},{0x5EDE777EL,0x5EDE777EL,0x5EDE777EL,0x5EDE777EL}};
        int *l_851[1][6][9] = {{{&g_298[6],&l_768[2],&l_850[0][3],&l_850[0][3],&l_768[2],&g_298[6],&l_768[2],&l_850[0][3],&l_850[0][3]},{&l_850[0][3],&g_50,&g_50,(void*)0,&g_50,&g_50,&l_850[0][3],&l_768[5],&l_850[1][2]},{&l_768[2],&l_768[2],&l_768[2],&g_298[6],&g_298[6],&l_768[2],&l_768[2],&l_768[2],&g_298[6]},{&g_298[1],&l_768[5],&g_50,&g_298[5],&g_762,&g_298[5],&g_50,&l_768[5],&g_298[1]},{&g_298[6],&g_298[6],&l_850[0][3],&g_298[6],&g_298[6],&g_298[6],&g_298[6],&l_850[0][3],&g_298[6]},{&g_50,&g_78,&l_850[1][2],(void*)0,&g_762,&l_768[5],&g_762,(void*)0,&l_850[1][2]}}};
        short *l_862 = &g_232;
        union U0 **l_865 = (void*)0;
        unsigned *l_866 = &g_108[1];
        unsigned char *l_867 = &g_143;
        int l_871 = 0xFEDD7872L;
        unsigned short l_967 = 0x69B2L;
        unsigned **l_1002 = &g_521;
        union U0 l_1009 = {0x6A3DEDC1L};
        int *l_1026 = (void*)0;
        char l_1060 = (-10L);
        unsigned l_1096[10][3] = {{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL},{0xDAEFD397L,4294967295UL,4294967295UL}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_849[i] = 0x6FFB7FD8L;
        l_852--;
        if ((l_768[3] |= (l_718 |= ((*l_49) = func_35((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint8_t_u_u(p_29, ((*l_867) = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_862) ^= (0xF84A09C7L > p_29)), func_57((*g_116), (*g_471), (safe_sub_func_uint32_t_u_u(((*l_866) = ((**g_470) == (p_29 | (l_865 != (void*)0)))), 1UL)), (*g_304)))), g_442))))) ^ 8UL))), (*g_470), &l_850[1][3])))))
        {
            unsigned char *l_868 = &g_143;
            int l_886 = 0x36E1F90AL;
            short l_888[7][8] = {{1L,4L,0x1DC6L,(-10L),1L,0x7190L,0x93F2L,4L},{1L,0x2A9CL,0x0B4BL,0x93F2L,0x93F2L,0x0B4BL,0x2A9CL,1L},{0x8202L,0xEB9EL,4L,0x7190L,1L,0x2874L,0x8202L,0x2A9CL},{0xEB9EL,0x7190L,0x7579L,0x680BL,0x7190L,0x2874L,0x93F2L,0x2874L},{(-10L),0xEB9EL,2L,0xEB9EL,(-10L),0x0B4BL,0x680BL,(-10L)},{0x2874L,0x2A9CL,0x8202L,0x2874L,1L,0x7190L,4L,0xEB9EL},{0x2A9CL,4L,0x8202L,0x680BL,0x1DC6L,0x1DC6L,0x680BL,0x8202L}};
            int i, j;
            if ((((l_867 != l_868) | ((safe_mul_func_int8_t_s_s((-1L), (((**l_739) = (void*)0) == (void*)0))) & l_871)) >= (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((*l_49), func_57(&l_871, (*g_471), p_29, p_29))), p_29))))
            {
                unsigned l_887 = 4294967295UL;
                int *l_902 = &g_762;
                char *l_904 = &g_430;
                int *******l_910 = &g_879[9][2][1];
                for (l_852 = 13; (l_852 <= 58); l_852 = safe_add_func_uint32_t_u_u(l_852, 2))
                {
                    int *l_885 = &l_718;
                    union U0 l_918 = {4294967295UL};
                    unsigned short l_920 = 65535UL;
                    for (g_686 = 5; (g_686 >= 0); g_686 -= 1)
                    {
                        int ********l_881 = &g_878;
                        unsigned short *l_889 = (void*)0;
                        unsigned short *l_890 = &g_720[6][1][3];
                        int i;
                        g_298[(g_686 + 1)] &= ((((*l_881) = g_878) == l_882[2][8]) || l_768[g_686]);
                        (*g_517) = (safe_mul_func_int8_t_s_s(func_57(l_885, func_57(&l_871, p_29, p_29, p_29), l_886, ((*l_890) = ((((*l_49) = (((*g_471) = p_29) | (l_887 = p_29))) | l_888[1][3]) & 1UL))), p_29));
                        (*l_49) |= (((func_57(l_885, (((*g_471) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*g_304) = (*g_304)) > p_29), ((!(((safe_sub_func_int16_t_s_s(0x4052L, (safe_add_func_uint16_t_u_u(p_29, 65535UL)))) > g_899[0]) > g_30)) && (1UL < p_29)))), 65534UL))) < g_85), l_888[2][6], g_30) >= p_29) ^ p_29) | (-1L));
                    }
                    if (p_29)
                    {
                        if (l_888[1][3])
                            break;
                    }
                    else
                    {
                        int *l_903 = &g_298[6];
                        if (p_29)
                            break;
                        (*l_902) = (safe_lshift_func_uint16_t_u_u(0x9730L, (*g_304)));
                        if (p_29)
                            break;
                        (*g_93) &= p_29;
                    }
                    for (g_236 = (-24); (g_236 != 21); g_236++)
                    {
                        unsigned l_909 = 4294967290UL;
                        int ********l_911 = &l_882[2][2];
                        (*l_885) |= ((*l_902) &= 0xA5F8D0A0L);
                        (*l_902) = 0x42E611C2L;
                        l_886 = (*g_93);
                        (*l_885) |= ((safe_lshift_func_uint8_t_u_u(l_909, (((*l_902) > (((*l_904) = ((*g_471) |= (((l_910 == ((*l_911) = &g_879[4][4][0])) < g_232) >= p_29))) & (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_29, (safe_rshift_func_uint8_t_u_s(func_57(l_919, p_29, l_920, (*g_304)), 5)))) && 0x3BABD571L), p_29)))) > g_236))) && (**g_350));
                    }
                }
                return l_868;




            }
            else
            {
                return l_868;




            }
        }
        else
        {
            char *l_922 = &g_430;
            int *l_923 = &l_850[0][3];
            union U0 l_924 = {1UL};
            for (l_852 = 0; (l_852 <= 1); l_852 += 1)
            {
                return l_726[0];




            }
            (*g_530) = &l_850[0][3];
            (*g_530) = l_923;
        }


        ;

        for (g_762 = 1; (g_762 <= 5); g_762 += 1)
        {
            union U0 l_925 = {1UL};
            char **l_926 = &l_726[3];
            int *l_928 = &l_871;
            int l_934 = 0x2EBF7E36L;
            int l_935 = 0xA10908A7L;
            int l_936 = (-9L);
            int l_937 = (-1L);
            int l_938 = 0L;
            int l_939 = 0L;
            int l_940 = 0x839A7962L;
            int l_941 = 0x7C916B6EL;
            int l_942 = 0x0303DAB3L;
            int l_943[4][4] = {{(-2L),1L,0L,0L},{1L,1L,(-2L),0L},{0xC16DF7B7L,1L,0xC16DF7B7L,(-2L)},{0xC16DF7B7L,(-2L),(-2L),0xC16DF7B7L}};
            char **l_974[7];
            unsigned l_986 = 0x0DC3E39BL;
            unsigned short l_993[5];
            unsigned **l_1004[5][1];
            unsigned ***l_1003 = &l_1004[0][0];
            unsigned l_1046 = 0UL;
            int ******l_1057 = &g_880;
            int i, j;
            for (i = 0; i < 7; i++)
                l_974[i] = &l_959;
            for (i = 0; i < 5; i++)
                l_993[i] = 1UL;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1004[i][j] = (void*)0;
            }
            if ((func_57(l_928, g_298[(g_762 + 1)], (safe_unary_minus_func_int8_t_s(((*g_471) |= l_768[g_762]))), p_29) || (*l_928)))
            {
                int i;
                g_298[(g_762 + 1)] |= p_29;
            }
            else
            {
                int l_930 = 0xBF75AC40L;
                int l_931 = 0x5AFE1B61L;
                int l_932 = 0x3535C4FCL;
                int l_933[7][7] = {{1L,0L,0L,0L,0xD98758B1L,0xD98758B1L,0L},{0xB8C86BFDL,(-6L),0xB8C86BFDL,0xB8C86BFDL,(-6L),0xB8C86BFDL,0xB8C86BFDL},{0L,0L,1L,0L,0L,1L,0L},{(-6L),0xB8C86BFDL,0xB8C86BFDL,(-6L),0xB8C86BFDL,0xB8C86BFDL,(-6L)},{0xD98758B1L,0L,0xD98758B1L,0xD98758B1L,0L,0xD98758B1L,0xD98758B1L},{(-6L),(-6L),(-3L),(-6L),(-6L),(-3L),(-6L)},{0L,0xD98758B1L,0xD98758B1L,0L,0xD98758B1L,0xD98758B1L,0L}};
                unsigned char l_945 = 0x2EL;
                int ***l_962[6] = {&g_530,&g_530,&g_530,&g_530,&g_530,&g_530};
                char *l_976 = (void*)0;
                union U0 l_990[7] = {{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL}};
                short l_992 = 0x5211L;
                int i, j;
                ++l_945;
                for (l_925.f1 = 0; (l_925.f1 <= 2); l_925.f1 += 1)
                {
                    unsigned char l_958 = 1UL;
                    unsigned short *l_965 = &g_720[6][0][2];
                    char ***l_975 = &l_926;
                    int l_978 = 0x4987E32BL;
                    int l_979 = 0xA543DE01L;
                    int l_980 = 0xDF2BEFD0L;
                    int l_983[8] = {0x7B173EE1L,0x7B173EE1L,(-4L),0x7B173EE1L,0x7B173EE1L,(-4L),0x7B173EE1L,0x7B173EE1L};
                    int i, j;
                    l_968 = ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u(((l_930 && (safe_mod_func_uint32_t_u_u((((*l_867) ^= (((*g_351) != p_29) | 0x459BFA91L)) & l_967), 0x77C1F328L))) == p_29), (*g_304))) >= (*g_304)), 5)), (*l_928))) && p_29);
                    l_969 = &l_925;

                    ;
                    (*l_928) = 0xFCF630DBL;
                    if (func_57((l_851[0][5][6] = ((***g_528) = (void*)0)), p_29, ((((((safe_lshift_func_uint16_t_u_s((((void*)0 != &g_720[6][1][3]) == (*g_304)), 9)) < (*l_49)) != ((safe_sub_func_uint8_t_u_u((&l_726[0] != ((*l_975) = l_974[0])), p_29)) < l_850[0][3])) != l_849[0]) || p_29) && 255UL), p_29))
                    {
                        return l_976;




                    }
                    else
                    {
                        short l_977 = 0x7BDEL;
                        int l_981 = 0x10059C69L;
                        int l_982 = 0L;
                        int l_984 = (-10L);
                        int l_985 = 0xEDC38272L;
                        union U0 l_989 = {0xE33648F9L};
                        (*g_517) &= p_29;
                        --l_986;
                        (*g_530) = &l_985;


                        l_993[0]--;
                    }

                    ;
                }

                                ;
                ;
            }

            ;
            ;
            (*g_517) = (safe_add_func_uint16_t_u_u((((*l_928) >= ((p_29 | (*l_919)) & p_29)) || 0x71L), p_29));
            if ((safe_add_func_uint8_t_u_u((--(*l_867)), func_57((*g_496), (*l_928), (*l_49), ((p_29 | p_29) > 0x8AE7L)))))
            {
                char l_1010[10] = {4L,4L,4L,4L,4L,4L,4L,4L,4L,4L};
                unsigned short **l_1016 = &g_304;
                unsigned short ***l_1015 = &l_1016;
                unsigned short **l_1018[8][7] = {{&g_304,(void*)0,(void*)0,&g_304,(void*)0,&g_304,(void*)0},{&g_304,(void*)0,(void*)0,&g_304,(void*)0,&g_304,(void*)0},{&g_304,(void*)0,(void*)0,&g_304,&g_304,(void*)0,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,(void*)0,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,(void*)0,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,(void*)0,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,(void*)0,&g_304},{&g_304,&g_304,&g_304,&g_304,&g_304,(void*)0,&g_304}};
                unsigned short ***l_1017 = &l_1018[7][1];
                union U0 l_1025 = {0UL};
                int *l_1027 = &l_768[5];
                int l_1030 = 0L;
                int l_1039 = 1L;
                int l_1040 = (-4L);
                int l_1041 = 0x8BFBA383L;
                int l_1042 = 1L;
                int l_1043 = (-2L);
                int l_1044 = 0L;
                int l_1045[8][4] = {{0xCA005A30L,0x33057EF3L,0x33057EF3L,0xCA005A30L},{0xDD4CB946L,0x33057EF3L,0x0D74FF22L,0x33057EF3L},{0x33057EF3L,0x961ED5DCL,0x0D74FF22L,0x0D74FF22L},{0xDD4CB946L,0xDD4CB946L,0x33057EF3L,0x0D74FF22L},{0xCA005A30L,0x961ED5DCL,0xCA005A30L,0x33057EF3L},{0xCA005A30L,0x33057EF3L,0x33057EF3L,0xCA005A30L},{0xDD4CB946L,0x33057EF3L,0x0D74FF22L,0x33057EF3L},{0x33057EF3L,0x961ED5DCL,0x0D74FF22L,0x0D74FF22L}};
                int i, j;
                (*g_517) = func_57(l_1026, p_29, p_29, (*g_304));
                (*l_991) = func_57(l_1027, p_29, p_29, (*l_919));
                for (l_925.f0 = 0; (l_925.f0 < 34); l_925.f0++)
                {
                    unsigned l_1031 = 8UL;
                    unsigned short l_1036 = 65535UL;
                    unsigned l_1037 = 0x69AAEDC3L;
                    int l_1038[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1038[i] = (-1L);
                    ++l_1031;
                    l_1037 = ((safe_lshift_func_int16_t_s_u(p_29, 4)) || l_1036);
                    l_1046++;
                    (*l_928) &= (safe_sub_func_uint16_t_u_u(p_29, ((g_236 = ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(l_1037, 5UL)) >= ((safe_lshift_func_uint8_t_u_s((l_1038[0] = (0xAD07BBDEL < (l_1057 == (void*)0))), (&g_720[2][5][2] == &l_967))) < (((*l_1027) = (safe_sub_func_uint32_t_u_u(4294967295UL, p_29))) || l_1060))), 10)) && 0xA8F7L)) <= p_29)));
                }
                return &g_74;




            }
            else
            {
                unsigned l_1070 = 0x16651CB1L;
                unsigned short l_1082 = 3UL;
                int l_1088 = (-1L);
                int **l_1095 = &g_117[1];
                char *l_1099 = &g_430;
                for (g_430 = 6; (g_430 >= 0); g_430 -= 1)
                {
                    int *l_1071[2][7];
                    char *l_1075 = &g_111;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_1071[i][j] = &g_50;
                    }
                    for (l_1009.f1 = 0; (l_1009.f1 <= 6); l_1009.f1 += 1)
                    {
                        int l_1062 = 0x523E376CL;
                        int *l_1072 = (void*)0;
                        int i;
                        l_1062 = 0xB5607084L;
                        (*l_49) = ((*l_991) = (+((func_57((*g_496), l_1070, p_29, (*g_304)) || 0x0606L) ^ (*l_928))));
                        l_1071[1][3] = l_1071[0][5];
                        (***l_739) = l_1072;
                    }

                                        if (p_29)
                    {
                        char *l_1074 = &g_430;
                        int *l_1076 = &g_50;
                        union U0 l_1077 = {0x919939C9L};
                        (*l_991) = func_57(l_1071[0][5], l_1070, p_29, (*g_304));
                        (**g_529) = (void*)0;
                        (*g_530) = l_1071[0][5];
                        (*l_928) = func_57(((*****l_1057) = &l_936), p_29, ((safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((*g_471), (&l_862 != &g_351))) && (0xF4L || l_1082)) | (*g_471)), (*g_471))) | p_29), (*g_304));
                    }
                    else
                    {
                        unsigned l_1083 = 4294967295UL;
                        if (l_1082)
                            break;
                        l_1083 = p_29;
                        return l_1075;




                    }
                    for (g_143 = 0; (g_143 <= 6); g_143 += 1)
                    {
                        unsigned l_1089 = 0x13F350B1L;
                        unsigned char *l_1094 = &g_30;
                        if (p_29)
                            break;
                        (*l_49) &= (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_29, ((p_29 == 0x785AAF71L) & (l_1088 = g_151)))), p_29));
                        if (l_1089)
                            break;
                        l_1088 = ((**g_350) ^ (((safe_mod_func_uint8_t_u_u(g_143, (*g_471))) == p_29) < (safe_lshift_func_uint8_t_u_s(((*l_1094) = ((p_29 & ((*g_471) < (*g_471))) && l_1070)), 2))));
                    }
                }


                l_1088 = (((l_1095 = (****l_1057)) == (****l_1057)) != p_29);
                l_1096[7][1]++;
                return l_1099;




            }
        }
    }
    else
    {
        unsigned short *l_1108 = &l_725[2];
        int l_1111 = 1L;
        short *l_1114 = (void*)0;
        short *l_1115 = &l_757;
        int l_1116 = 0x25AE9D80L;
        int l_1117 = 0x5EC379C4L;
        int ****l_1121 = &g_529;
        char *l_1122 = &g_111;
        l_1111 = ((*l_991) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((*l_1108) |= (*g_304)), (((0x0C1C7432L ^ ((safe_lshift_func_int16_t_s_u(3L, l_1111)) <= p_29)) && (safe_rshift_func_int16_t_s_s((((*g_351) <= (*g_304)) == g_236), 15))) | ((*l_1115) = ((((*l_49) ^= (*l_991)) | 0x33085FB1L) <= 248UL))))) & g_85), 0x4335L)) < p_29), (*g_471))), l_1111)) || (*g_304)));
        l_1118++;
        (*l_991) = ((~(l_1121 == (*g_880))) > ((*l_919) > (p_29 == p_29)));
    }




    return &g_74;


}







static unsigned short func_35(char p_36, char * p_37, int * p_38)
{
    unsigned short *l_303 = &g_163;
    unsigned short **l_305 = (void*)0;
    unsigned short *l_307[4] = {&g_163,&g_163,&g_163,&g_163};
    unsigned short **l_306 = &l_307[2];
    int l_308 = 6L;
    char l_309 = 0L;
    unsigned l_322 = 0xB469A38AL;
    int l_345 = (-1L);
    union U0 l_367[6] = {{0x8D471A9AL},{0x2DC8A220L},{0x8D471A9AL},{0x8D471A9AL},{0x2DC8A220L},{0x8D471A9AL}};
    int l_455 = (-3L);
    int l_458 = 1L;
    char **l_475 = &g_471;
    unsigned l_512 = 0UL;
    char *l_518[6] = {&g_430,&g_430,&g_430,&g_430,&g_430,&g_430};
    union U0 *l_542 = &l_367[3];
    union U0 l_556 = {1UL};
    int *l_600[7] = {&g_78,&g_78,&g_78,&g_78,&g_78,&g_78,&g_78};
    int *l_608 = &g_298[6];
    int ***l_634[2];
    char l_663 = 1L;
    int *l_683 = (void*)0;
    unsigned l_685 = 4294967291UL;
    int i;
    for (i = 0; i < 2; i++)
        l_634[i] = (void*)0;
    if ((l_303 != ((*l_306) = (g_304 = l_303))))
    {
        char l_312 = (-2L);
        int l_323 = 0x053F47ECL;
        int ***l_333 = (void*)0;
        volatile short **l_353 = &g_351;
        union U0 l_366 = {0x563290B5L};
        unsigned short l_368[3];
        unsigned l_371 = 4294967294UL;
        int l_428 = 0xF0F649D5L;
        int l_450[8][6][5] = {{{0x3050B240L,0x74CCCD61L,0x3050B240L,0x8C08B6E8L,(-1L)},{(-1L),0x009296E4L,0x66DBDAC9L,(-1L),1L},{(-8L),(-3L),0x2AC63BEAL,0x8C08B6E8L,0x2AC63BEAL},{1L,1L,0x9E0550F2L,0x009296E4L,1L},{(-4L),0x8C08B6E8L,(-4L),(-3L),(-1L)},{1L,0x66DBDAC9L,0x66DBDAC9L,1L,(-1L)}},{{(-8L),0x8C08B6E8L,1L,0x8C08B6E8L,(-8L)},{(-1L),1L,0x66DBDAC9L,0x66DBDAC9L,1L},{(-1L),(-3L),(-4L),0x8C08B6E8L,(-4L)},{1L,0x009296E4L,0x9E0550F2L,1L,1L},{0x2AC63BEAL,0x8C08B6E8L,0x2AC63BEAL,(-3L),(-8L)},{1L,(-1L),0x66DBDAC9L,0x009296E4L,(-1L)}},{{(-1L),0x8C08B6E8L,0x3050B240L,0x8C08B6E8L,(-1L)},{(-1L),0x009296E4L,0x66DBDAC9L,(-1L),1L},{(-8L),(-3L),0x2AC63BEAL,0x8C08B6E8L,0x2AC63BEAL},{1L,1L,0x9E0550F2L,0x009296E4L,1L},{(-4L),0x8C08B6E8L,(-4L),(-3L),(-1L)},{1L,0x66DBDAC9L,0x66DBDAC9L,1L,(-1L)}},{{(-8L),0x8C08B6E8L,1L,0x8C08B6E8L,(-8L)},{(-1L),1L,0x66DBDAC9L,0x66DBDAC9L,1L},{(-1L),(-3L),(-4L),0x8C08B6E8L,(-4L)},{1L,0x009296E4L,0x9E0550F2L,1L,1L},{0x2AC63BEAL,0x8C08B6E8L,0x2AC63BEAL,(-3L),(-8L)},{1L,(-1L),0x66DBDAC9L,0x009296E4L,(-1L)}},{{(-1L),0x8C08B6E8L,0x3050B240L,0x8C08B6E8L,(-1L)},{(-1L),0x009296E4L,0x66DBDAC9L,(-1L),1L},{(-8L),(-3L),0x2AC63BEAL,0x8C08B6E8L,0x2AC63BEAL},{1L,1L,0x9E0550F2L,0x009296E4L,1L},{(-4L),0x8C08B6E8L,(-4L),(-3L),(-1L)},{1L,0x66DBDAC9L,0x66DBDAC9L,1L,(-1L)}},{{(-8L),0x8C08B6E8L,1L,0x8C08B6E8L,(-8L)},{(-1L),1L,0x66DBDAC9L,0x66DBDAC9L,1L},{(-1L),(-3L),(-4L),0x8C08B6E8L,(-4L)},{1L,0x009296E4L,0x9E0550F2L,1L,1L},{0x2AC63BEAL,0x8C08B6E8L,0x2AC63BEAL,(-3L),(-8L)},{1L,(-1L),0x66DBDAC9L,0x009296E4L,(-1L)}},{{(-1L),0x8C08B6E8L,0x3050B240L,0x8C08B6E8L,(-1L)},{(-1L),0x009296E4L,0x66DBDAC9L,(-1L),1L},{(-8L),(-3L),0x2AC63BEAL,(-3L),1L},{(-1L),(-1L),0x009296E4L,0x66DBDAC9L,(-1L)},{0x3050B240L,(-3L),0x3050B240L,0x74CCCD61L,(-4L)},{(-1L),0x9E0550F2L,0x9E0550F2L,(-1L),1L}},{{0x2AC63BEAL,(-3L),(-8L),(-3L),0x2AC63BEAL},{1L,(-1L),0x9E0550F2L,0x9E0550F2L,(-1L)},{(-4L),0x74CCCD61L,0x3050B240L,(-3L),0x3050B240L},{(-1L),0x66DBDAC9L,0x009296E4L,(-1L),(-1L)},{1L,(-3L),1L,0x74CCCD61L,0x2AC63BEAL},{(-1L),1L,0x9E0550F2L,0x66DBDAC9L,1L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_368[i] = 1UL;
        l_309 &= l_308;
        l_308 |= (safe_add_func_int8_t_s_s(l_312, (safe_mul_func_int16_t_s_s((g_232 = (((!l_309) | l_312) < (0xB5C6D15EL > g_85))), (*g_304)))));
        (*g_315) = &l_308;


        if (l_308)
        {
            char l_327[1];
            int l_335[3][9] = {{(-1L),0L,(-1L),3L,1L,1L,3L,(-1L),0L},{0L,(-1L),3L,1L,1L,3L,(-1L),0L,(-1L)},{0xD0CE8B55L,0x32876BD8L,3L,3L,0x32876BD8L,0xD0CE8B55L,1L,0xD0CE8B55L,0x32876BD8L}};
            unsigned l_349 = 0x6E28B10FL;
            int l_395 = (-1L);
            int **l_397[5];
            int ***l_396[1][8] = {{&l_397[4],&l_397[4],&l_397[4],&l_397[4],&l_397[4],&l_397[4],&l_397[4],&l_397[4]}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_327[i] = 0x3CL;
            for (i = 0; i < 5; i++)
                l_397[i] = &g_117[1];
            for (g_78 = 0; (g_78 >= (-8)); g_78--)
            {
                unsigned *l_324 = &g_151;
                int *l_332 = &l_308;
                unsigned l_346 = 9UL;
                (*l_332) |= (g_111 != (safe_mod_func_int32_t_s_s((((*p_38) = (safe_sub_func_int8_t_s_s((l_312 >= ((l_323 |= l_322) == ((++(*l_324)) & (*p_38)))), (l_327[0] = g_214.f0)))) > g_298[6]), (safe_mul_func_uint16_t_u_u(((*l_303) = 0x93B6L), (+(safe_unary_minus_func_int8_t_s(((safe_unary_minus_func_uint8_t_u(l_312)) & (255UL > 0xDFL))))))))));
                for (g_143 = 0; (g_143 <= 3); g_143 += 1)
                {
                    short *l_334 = &g_232;
                    int l_338 = 0xDC7968EFL;
                    (*l_332) = ((*g_302) = (l_333 == (void*)0));
                    if (((((void*)0 != &g_93) ^ ((*l_334) ^= g_85)) >= g_298[6]))
                    {
                        int *l_336 = &g_50;
                        int *l_337 = &g_50;
                        int *l_339 = &l_335[0][4];
                        int *l_340 = &l_335[2][3];
                        int *l_341 = &l_338;
                        int *l_342 = &l_335[1][2];
                        int *l_343 = &g_298[1];
                        int *l_344[7][6][6] = {{{(void*)0,(void*)0,&l_335[0][5],&g_298[6],&g_50,&l_338},{(void*)0,&g_50,&g_298[6],&g_298[6],(void*)0,(void*)0},{&l_338,&l_335[0][2],(void*)0,&g_50,&l_335[2][5],&l_338},{&l_335[2][4],(void*)0,&l_323,&g_50,(void*)0,(void*)0},{&g_298[6],&l_335[1][0],&g_50,&l_323,(void*)0,&g_298[6]},{&g_298[6],&l_335[2][5],(void*)0,&g_298[6],(void*)0,&g_298[6]}},{{&g_298[6],(void*)0,&g_298[6],&l_323,&l_323,&l_335[2][5]},{&g_298[6],(void*)0,&l_323,&g_50,&l_335[1][0],&g_298[6]},{&l_335[2][4],(void*)0,&l_338,&g_50,(void*)0,&l_323},{&g_298[6],&l_323,&l_323,&l_323,&l_308,(void*)0},{&g_298[6],&l_335[1][0],&l_323,&g_298[6],(void*)0,&g_298[6]},{&g_298[6],(void*)0,&l_335[2][5],&l_323,&l_335[2][5],&g_298[6]}},{{&g_298[6],&l_308,&l_335[2][4],&g_50,&l_323,(void*)0},{&l_335[2][4],(void*)0,&g_50,&g_50,(void*)0,&l_335[2][4]},{&g_298[6],&l_335[2][5],&l_338,&l_323,&l_335[0][2],&l_338},{&g_298[6],&l_323,&l_335[2][4],&g_298[6],(void*)0,&l_335[2][5]},{&g_298[6],(void*)0,&g_298[6],&l_323,&l_335[1][0],&g_298[6]},{&g_298[6],&l_335[0][2],(void*)0,&g_50,&l_335[2][5],&l_338}},{{&l_335[2][4],&g_50,(void*)0,&l_308,&g_50,&l_335[0][0]},{&l_323,&g_298[6],&l_308,(void*)0,&g_298[6],&l_323},{(void*)0,(void*)0,&l_335[0][0],&l_335[0][2],&l_338,&l_335[0][2]},{(void*)0,&g_50,(void*)0,(void*)0,&l_338,&l_308},{&l_323,&g_298[6],(void*)0,&l_308,&g_298[6],&l_323},{&g_298[2],&l_338,&g_50,&l_308,&l_338,(void*)0}},{{&l_323,&l_338,(void*)0,(void*)0,&g_298[1],&g_298[3]},{(void*)0,&g_298[6],(void*)0,&l_335[0][2],&l_323,(void*)0},{(void*)0,&l_338,&l_308,(void*)0,(void*)0,&l_335[0][2]},{&l_323,&g_298[1],&g_298[2],&l_308,&l_338,&g_298[3]},{&g_298[2],&l_323,&l_308,&l_308,&l_323,&g_298[2]},{&l_323,(void*)0,&g_50,(void*)0,&l_335[0][5],&l_323}},{{(void*)0,&l_338,&g_298[2],&l_335[0][2],&g_50,&l_308},{(void*)0,&l_323,&l_335[0][2],(void*)0,&g_298[6],(void*)0},{&l_323,&l_335[0][5],&l_335[0][0],&l_308,(void*)0,&l_323},{&g_298[2],&g_50,(void*)0,&l_308,&g_50,&l_335[0][0]},{&l_335[0][2],&g_298[6],&g_298[3],&g_50,&l_323,&l_335[0][2]},{&g_78,&g_298[6],(void*)0,&l_335[2][5],&g_298[6],&l_335[2][5]}},{{&g_78,(void*)0,&g_78,&g_50,&l_335[2][5],(void*)0},{&l_335[0][2],&l_323,&g_50,&g_298[3],&g_298[6],&l_335[0][2]},{&l_308,&g_298[6],&l_323,&g_298[3],&g_298[6],&g_50},{&l_335[0][2],&l_335[2][5],&l_323,&g_50,(void*)0,(void*)0},{&g_78,&g_298[6],&g_50,&l_335[2][5],&l_338,&g_78},{&g_78,&g_298[6],(void*)0,&g_50,&g_298[6],&l_335[2][5]}}};
                        int i, j, k;
                        p_38 = p_38;
                        if ((*p_38))
                            break;
                        l_346++;
                        if (l_349)
                            continue;
                    }
                    else
                    {
                        l_353 = g_350;
                        (*l_332) |= ((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_353 != l_353), p_36)), (safe_lshift_func_int16_t_s_s((*g_351), 12)))) || (safe_mod_func_uint16_t_u_u((((*l_324)--) != ((*g_302) = (250UL ^ func_57(p_38, g_214.f0, (*g_302), p_36)))), 1L))) & g_298[6]), l_368[2])) == 0x8AL);
                        (*l_332) ^= (safe_rshift_func_int16_t_s_s(3L, 7));
                    }
                    (*p_38) = (-1L);
                    (*g_302) = 0x1104DD7DL;
                }
                (*p_38) = l_371;
            }
            if ((safe_lshift_func_uint16_t_u_u(((--(*l_303)) ^ ((safe_sub_func_uint16_t_u_u((g_108[1] || (*p_38)), 0UL)) > (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_367[0].f1, (safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((void*)0 != &p_38), 4)), (safe_rshift_func_uint16_t_u_u(p_36, 3)))), 1L)))), (l_322 | 0x5BL))))), 9)))
            {
                unsigned l_390[1][10][3] = {{{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL},{2UL,0xE7520BA3L,2UL}}};
                int i, j, k;
                (*p_38) ^= l_390[0][8][2];
                for (l_322 = 0; (l_322 < 25); l_322 = safe_add_func_uint32_t_u_u(l_322, 8))
                {
                    int ****l_398 = &l_396[0][6];
                    unsigned short l_404[8] = {0x1E36L,0x7937L,0x1E36L,0x1E36L,0x7937L,0x1E36L,0x1E36L,0x7937L};
                    int i;
                    l_345 ^= (((safe_mul_func_uint16_t_u_u(l_395, (((*l_398) = l_396[0][7]) == (void*)0))) < ((func_57(p_38, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((0xBC6F42F2L >= (safe_unary_minus_func_uint8_t_u(func_57(func_41((*p_38), &p_36, p_38, &l_312, &g_111), g_264, l_404[7], (*g_304))))), 6)), g_30)), (*p_38), p_36) >= 0x5465E16EL) > 0x8DL)) | p_36);
                    if (l_367[0].f1)
                        continue;
                    if ((*p_38))
                        continue;
                }
            }
            else
            {
                int *l_418 = (void*)0;
                char *l_432 = &g_430;
                short l_438 = 3L;
                int l_446 = 0xC09CA098L;
                int l_447 = (-9L);
                int l_454[10] = {0xF5B1743CL,0L,0L,0xF5B1743CL,0L,0L,0xF5B1743CL,0L,0L,0L};
                int i;
                for (l_312 = 0; (l_312 <= 2); l_312 += 1)
                {
                    unsigned *l_407[4];
                    unsigned *l_409[8] = {&g_214.f1,&l_367[0].f1,&g_214.f1,&g_214.f1,&l_367[0].f1,&g_214.f1,&g_214.f1,&l_367[0].f1};
                    unsigned **l_408 = &l_409[7];
                    short *l_410 = &g_236;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_407[i] = &l_349;
                    (*p_38) = (~(safe_lshift_func_int16_t_s_s(((*l_410) = (l_407[3] != ((*l_408) = (void*)0))), 11)));


                }
                for (g_50 = 0; (g_50 == 2); ++g_50)
                {
                    unsigned l_413 = 1UL;
                    char *l_431 = &l_327[0];
                    unsigned char *l_445 = &g_442;
                    int l_451 = 0x4DF2417EL;
                    int l_452[6] = {0x13D1EC19L,1L,1L,0x13D1EC19L,1L,1L};
                    int l_456 = 0x0CB603B0L;
                    int i;
                    l_413 = (-2L);
                    if (((safe_lshift_func_int16_t_s_s((-1L), 6)) != (**g_350)))
                    {
                        char *l_417 = &l_309;
                        char **l_416[7] = {&l_417,(void*)0,(void*)0,&l_417,(void*)0,(void*)0,&l_417};
                        unsigned *l_427 = &l_349;
                        int l_429 = (-8L);
                        int *l_433 = (void*)0;
                        int i;
                        p_38 = func_41((*p_38), (p_37 = &l_327[0]), (l_433 = func_41(func_57(l_418, g_214.f0, (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((((*l_427) = g_85) < (l_429 = l_428)) != (-1L)), (g_430 < (+(&g_30 == (void*)0))))), 1UL)), 0xF367L)), 1)), p_36), l_431, &g_78, &g_430, l_432)), l_431, &l_312);

                        ;
                        ;
                        ;
                        if ((*g_302))
                            continue;
                        l_323 = (*p_38);
                    }
                    else
                    {
                        int l_439 = 8L;
                        short *l_440[10][10][2] = {{{&g_236,(void*)0},{&g_232,&g_232},{&g_236,&g_236},{&g_236,&g_236},{&g_236,&g_232},{&g_232,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_236,(void*)0}},{{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_232,&g_232},{&g_236,&g_236},{&g_236,&g_236},{&g_236,&g_232},{&g_232,(void*)0},{&g_236,&g_236},{&g_232,&g_236}},{{&g_236,(void*)0},{&g_236,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_232,&g_232},{&g_236,&g_236},{&g_236,&g_236},{&g_236,&g_232},{&g_232,(void*)0}},{{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_236,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_232,&g_232},{&g_236,&g_236},{&g_236,&g_236}},{{&g_236,&g_232},{&g_232,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_236,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_232,&g_232}},{{&g_236,&g_236},{&g_236,&g_236},{&g_236,&g_232},{&g_232,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_236,(void*)0},{&g_236,&g_236},{&g_232,&g_236}},{{&g_236,(void*)0},{&g_232,&g_232},{&g_236,&g_236},{&g_236,&g_236},{&g_236,&g_232},{&g_232,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_236,(void*)0}},{{&g_236,&g_236},{&g_232,&g_236},{&g_236,(void*)0},{&g_232,&g_232},{&g_236,&g_236},{&g_236,&g_236},{&g_236,&g_232},{&g_232,(void*)0},{&g_236,&g_236},{&g_232,&g_236}},{{&g_236,(void*)0},{&g_236,(void*)0},{&g_236,&g_236},{&g_232,&g_236},{&g_236,&g_232},{&g_236,&l_438},{&g_236,&g_236},{&g_232,&g_236},{&g_236,&l_438},{&g_236,&g_232}},{{(void*)0,&g_236},{&g_236,&l_438},{&g_236,&g_232},{&g_232,&g_232},{&g_236,&l_438},{&g_236,&g_236},{(void*)0,&g_232},{&g_236,&l_438},{&g_236,&g_236},{&g_232,&g_236}}};
                        unsigned short l_441 = 0x47C9L;
                        int i, j, k;
                        if ((*p_38))
                            break;
                        g_442 = (l_441 = (safe_rshift_func_uint8_t_u_u(l_322, func_57(l_418, ((*l_432) = (safe_lshift_func_int16_t_s_s((**g_350), 7))), ((l_345 = (((65532UL != (*g_304)) <= (g_236 &= ((-1L) <= ((l_438 || l_368[1]) ^ (l_439 = (*p_38)))))) ^ p_36)) < p_36), p_36))));
                    }
                    l_428 |= (p_36 > ((*l_445) = (safe_sub_func_uint16_t_u_u(65535UL, (+(*g_304))))));
                    for (p_36 = 0; (p_36 <= 4); p_36 += 1)
                    {
                        short l_448 = 1L;
                        int l_449 = 3L;
                        int l_453 = 0L;
                        int l_457 = 0xF640608BL;
                        g_459--;
                    }
                }

                ;
                (*g_302) = (*p_38);
                p_38 = p_38;
            }

            ;
        }
        else
        {
            int *l_462 = &l_455;
            char l_463 = 0x29L;
            (*l_462) |= func_57(&g_298[6], g_108[0], ((*g_93) = (*p_38)), p_36);
            for (l_312 = 0; (l_312 <= 3); l_312 += 1)
            {
                int l_466 = 0xD53F31A1L;
                char ***l_468 = (void*)0;
                for (g_264 = 0; (g_264 <= 3); g_264 += 1)
                {
                    char l_467 = (-9L);
                    (*l_462) ^= ((((0xDFL & l_463) >= 4294967293UL) != (safe_sub_func_uint8_t_u_u(0x82L, l_466))) == (l_467 & 0x28A5L));
                }
                (*g_469) = &p_37;

                ;
                for (l_455 = 3; (l_455 >= 0); l_455 -= 1)
                {
                    unsigned short l_472 = 1UL;
                    if ((*l_462))
                        break;
                    for (l_466 = 0; (l_466 <= 1); l_466 += 1)
                    {
                        (*g_261) = &l_466;
                    }
                    for (g_85 = 3; (g_85 >= 0); g_85 -= 1)
                    {
                        if (l_472)
                            break;
                        return (*g_304);



                    }
                }


            }

            ;
            for (l_463 = 0; (l_463 == (-20)); l_463 = safe_sub_func_uint8_t_u_u(l_463, 3))
            {
                char ***l_476 = &l_475;
                (*l_476) = l_475;
            }
            (*l_462) &= (*g_93);
        }


        ;
    }
    else
    {
        short *l_486 = (void*)0;
        short **l_485 = &l_486;
        union U0 *l_487[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_514 = 0x6B50D89CL;
        union U0 *l_541 = (void*)0;
        char *l_543 = &g_74;
        int l_547 = 0L;
        unsigned l_559 = 4294967286UL;
        int l_573[7];
        int l_639 = 0x4E68237CL;
        int *****l_642 = (void*)0;
        int ******l_641 = &l_642;
        int l_670[10];
        unsigned char l_671 = 255UL;
        int i;
        for (i = 0; i < 7; i++)
            l_573[i] = (-5L);
        for (i = 0; i < 10; i++)
            l_670[i] = 1L;
        for (l_308 = 29; (l_308 != (-7)); l_308 = safe_sub_func_uint16_t_u_u(l_308, 7))
        {
            unsigned l_488 = 0x26FFD2F1L;
            unsigned l_489[3][7][7] = {{{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL}},{{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L}},{{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL},{0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L,0xCED126D2L,0x441B4D52L},{6UL,6UL,6UL,6UL,6UL,6UL,6UL}}};
            unsigned l_493 = 4294967294UL;
            int l_495 = 0x9DCFF2DCL;
            union U0 l_536 = {0x8891A6DCL};
            int *****l_538 = &g_528;
            unsigned short l_553 = 0x31A6L;
            char l_560 = (-1L);
            int i, j, k;
            l_489[0][4][2] |= (safe_mul_func_int8_t_s_s(((**l_475) &= func_57(p_38, p_36, (((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(g_50, func_57(p_38, ((l_485 != (void*)0) | 0xB5EB85CDL), (l_487[3] != (void*)0), p_36))), g_30)) == g_442) && p_36), p_36)), l_488));
            if ((*p_38))
            {
                return l_489[2][2][2];


            }
            else
            {
                unsigned char l_497[3][4];
                int *l_516 = (void*)0;
                char *l_519 = &g_430;
                int l_524 = 0x8B8946FCL;
                unsigned *l_565 = &l_493;
                int *l_566 = &l_458;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_497[i][j] = 0x0EL;
                }
                for (l_345 = (-29); (l_345 == (-26)); l_345 = safe_add_func_uint32_t_u_u(l_345, 2))
                {
                    char l_510 = 0xDDL;
                    short *l_515 = &g_232;
                    unsigned **l_520 = (void*)0;
                    int l_522 = 3L;
                    int *l_523 = (void*)0;
                    int *****l_537 = (void*)0;
                    int *l_544 = &l_495;
                    int *l_545 = &g_50;
                    int *l_546 = &g_298[6];
                    int *l_548 = &l_522;
                    int *l_549 = &g_78;
                    int *l_550 = &g_50;
                    int *l_551 = (void*)0;
                    int *l_552[4][2] = {{&l_458,&l_458},{&l_458,&l_458},{&l_458,&l_458},{&l_458,&l_458}};
                    int i, j;
                    if (g_492)
                        break;
                    if ((l_493 != (**g_350)))
                    {
                        int *l_494 = &g_298[6];
                        l_495 ^= ((*l_494) ^= (*p_38));
                        (*l_494) = l_493;
                        return p_36;


                    }
                    else
                    {
                        int **l_498 = &g_302;
                        int l_509 = (-1L);
                        unsigned char *l_511 = &l_497[1][1];
                        unsigned *l_513[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_513[i] = &l_367[0].f1;
                        (*g_496) = p_38;


                        if (l_497[1][1])
                            break;
                        (*l_498) = (void*)0;

                        ;
                        (*p_38) |= func_57((*g_496), (safe_rshift_func_uint8_t_u_s(p_36, ((safe_mul_func_int16_t_s_s(g_232, 0x095FL)) || (g_108[0] |= ((safe_add_func_int8_t_s_s(((*g_471) = l_488), g_232)) == (safe_sub_func_int16_t_s_s((~(safe_rshift_func_int8_t_s_u(p_36, ((*l_511) = (l_509 <= l_510))))), l_512))))))), l_514, p_36);
                    }

                    ;
                    if (func_57(&l_495, p_36, (l_524 |= (l_522 ^= ((l_515 != (*g_350)) & (((g_521 = func_41((*p_38), (**g_469), l_516, l_518[5], l_519)) == (void*)0) == (*g_304))))), (*g_304)))
                    {
                        return (*g_304);


                    }
                    else
                    {
                        int *****l_531 = &g_528;
                        int ******l_539 = (void*)0;
                        int ******l_540 = &l_538;
                        (*g_517) ^= func_57((*g_496), p_36, l_514, (*g_304));
                        (*g_517) = ((*p_38) = (((*g_471) > (!g_151)) != (safe_mul_func_uint8_t_u_u(0xADL, l_514))));
                        (*****l_540) = func_41((safe_add_func_uint8_t_u_u((func_57(p_38, p_36, (*p_38), p_36) != 0L), (**g_470))), (*g_470), &l_458, (*g_470), l_543);
                    }
                    --l_553;
                }
                (***g_528) = p_38;
                (****l_538) = l_566;
            }
            (*g_530) = p_38;
            (*p_38) = ((+0xAFL) == p_36);
        }



        for (g_232 = (-9); (g_232 >= 15); ++g_232)
        {
            short l_572 = 0xE6FCL;
            union U0 l_599 = {0x5FB52444L};
            int *l_602 = &g_50;
            char *l_605[3];
            int i;
            for (i = 0; i < 3; i++)
                l_605[i] = &g_74;
            if (((**g_350) <= 0xAB2EL))
            {
                unsigned l_576 = 1UL;
                int l_584 = 0xD8F8F363L;
                int l_591 = (-1L);
                union U0 *l_593[1][6][9] = {{{&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0]},{&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0]},{&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0]},{&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0]},{&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0]},{&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0],&l_367[4],&l_367[0],&l_367[0]}}};
                union U0 **l_594 = &l_487[3];
                char l_601 = 9L;
                int i, j, k;
                for (g_430 = (-11); (g_430 == (-8)); g_430 = safe_add_func_int32_t_s_s(g_430, 1))
                {
                    char l_574 = 0x5AL;
                    int l_575 = 0x4917F6DDL;
                    int l_588 = 1L;
                    for (g_442 = 1; (g_442 <= 6); g_442 += 1)
                    {
                        int *l_571[4] = {&g_298[6],&g_298[6],&g_298[6],&g_298[6]};
                        int i;
                        --l_576;
                    }
                    for (l_455 = 16; (l_455 != 29); ++l_455)
                    {
                        unsigned *l_583[5][9][4] = {{{&l_576,&g_264,&l_559,&g_108[1]},{(void*)0,&l_367[0].f1,&g_151,&l_556.f1},{(void*)0,&g_151,&l_559,(void*)0},{&l_576,&l_556.f1,&l_556.f1,&l_576},{&g_108[1],&l_367[0].f1,&l_576,&l_367[0].f1},{&l_559,&g_264,&g_214.f1,(void*)0},{&l_576,&g_264,&l_576,&l_367[0].f1},{&g_214.f1,&l_367[0].f1,&g_214.f1,&l_576},{&g_108[0],&l_556.f1,&g_264,&g_108[1]}},{{&g_108[0],&l_576,&g_108[1],(void*)0},{&l_576,&l_367[0].f1,&g_108[1],&g_264},{&g_108[0],&g_151,&g_108[0],&l_367[0].f1},{&g_108[0],(void*)0,&l_559,&g_151},{&l_559,&g_151,&l_576,&l_367[0].f1},{&l_576,&l_367[0].f1,&g_264,&l_367[0].f1},{&g_151,&g_151,&l_576,&g_151},{&g_214.f1,(void*)0,&g_151,&l_367[0].f1},{&l_576,&g_151,&g_151,&g_264}},{{&l_559,&l_367[0].f1,&g_214.f1,(void*)0},{&l_559,&l_576,&g_151,&g_108[1]},{&l_576,(void*)0,&g_151,(void*)0},{&g_214.f1,&l_367[0].f1,&l_576,(void*)0},{&g_151,(void*)0,&g_264,&l_556.f1},{&l_576,(void*)0,&l_576,(void*)0},{&l_559,&l_367[0].f1,&l_559,(void*)0},{&g_108[0],(void*)0,&g_108[0],&g_108[1]},{&g_108[0],&l_576,&g_108[1],(void*)0}},{{&l_576,&l_367[0].f1,&g_108[1],&g_264},{&g_108[0],&g_151,&g_108[0],&l_367[0].f1},{&g_108[0],(void*)0,&l_559,&g_151},{&l_559,&g_151,&l_576,&l_367[0].f1},{&l_576,&l_367[0].f1,&g_264,&l_367[0].f1},{&g_151,&g_151,&g_108[0],&l_556.f1},{&g_108[0],&l_367[0].f1,&l_559,(void*)0},{&l_576,&g_264,&g_214.f1,(void*)0},{&l_576,&g_151,&l_559,(void*)0}},{{&l_576,&g_264,&g_214.f1,&g_264},{&l_576,(void*)0,&l_559,&g_151},{&g_108[0],&l_367[0].f1,&g_108[0],&l_367[0].f1},{&g_214.f1,&l_367[0].f1,&g_151,&l_367[0].f1},{&g_108[0],&l_367[0].f1,&l_576,&l_367[0].f1},{&g_151,&l_367[0].f1,&g_151,&g_151},{&g_264,(void*)0,&g_214.f1,&g_264},{&g_108[1],&g_264,&g_108[0],(void*)0},{&g_214.f1,&g_151,&g_108[0],(void*)0}}};
                        int l_592[5][9][5] = {{{0x10610F67L,(-1L),7L,6L,0x229A8898L},{5L,0L,0x2F01044DL,3L,0xD34D9511L},{(-1L),0x58C4BF6AL,0x7AA126F0L,1L,0x99F0B12BL},{0x8AC7112BL,(-1L),6L,5L,7L},{0xECB4645AL,0x1AC08895L,0xB08106D7L,0xD34D9511L,0x0E94A83CL},{7L,0xD1450995L,0xC765149AL,0x5DFC049EL,0x0E94A83CL},{0x54F31DC0L,0xB027EDBDL,0x63285A2EL,0L,7L},{1L,0L,0x58C4BF6AL,0xCE01D9ECL,0x99F0B12BL},{1L,0x015A14DAL,0L,0x43F5FBDEL,0xD34D9511L}},{{1L,0xDEFEE2C8L,0L,9L,0x7AA126F0L},{0x377274C8L,1L,0x8AC7112BL,0x0E94A83CL,9L},{0xD2B7156BL,(-1L),0xF1F2BE47L,0x5DFC049EL,0x64F49C94L},{0x8AC7112BL,0xC5A86433L,(-10L),3L,0x1E0970E1L},{0xB08106D7L,(-3L),8L,8L,(-3L)},{(-6L),0xFB7FCFC5L,8L,0xB08106D7L,0L},{0L,3L,3L,0xF4D86060L,0xFCF771E9L},{0xDEFEE2C8L,1L,1L,(-1L),(-1L)},{0L,(-1L),(-6L),(-1L),0xE1087EE6L}},{{(-6L),0x72C748E5L,6L,0x66C6BABEL,(-1L)},{0xB08106D7L,0L,1L,6L,0x96CA0242L},{0x8AC7112BL,0x8371FA1EL,(-6L),0L,8L},{0xD2B7156BL,0x4FCB5C66L,0x66C6BABEL,0xD1587DE0L,6L},{0x377274C8L,1L,0x1AC08895L,5L,0xD1450995L},{1L,6L,1L,0x7947BA05L,1L},{0xFB7FCFC5L,0xFCF771E9L,0xECB4645AL,7L,8L},{7L,0xD1587DE0L,1L,1L,0x00E9FD98L},{0x45C04FF7L,0L,0xF4D86060L,0xECB4645AL,1L}},{{0x96CA0242L,0L,(-1L),0x3D831EC1L,0x07CA6B39L},{0xCF0D0CCDL,0xFB7FCFC5L,0x8371FA1EL,(-4L),0L},{0x2F01044DL,0xB027EDBDL,3L,0xD2B7156BL,(-1L)},{(-1L),0x1E0970E1L,0xD2B7156BL,0x07CA6B39L,1L},{0xC16C8DF5L,0L,0xF286B381L,(-1L),1L},{0xD9A2ECBFL,3L,0L,8L,5L},{0L,0x090545F8L,0x229A8898L,0xDEFEE2C8L,0xFCF771E9L},{0xF4D86060L,0xC5A86433L,3L,0x0E94A83CL,0x0E94A83CL},{0x72C748E5L,6L,0x72C748E5L,0xCE01D9ECL,(-2L)}},{{(-10L),0x4FCB5C66L,0L,(-1L),0xCE2614B9L},{0x64F49C94L,0xB0BDCCA5L,0xC87E2F8FL,0L,0xC765149AL},{0x10610F67L,0x72C748E5L,0L,0xCE2614B9L,0x00E9FD98L},{(-1L),(-6L),0x72C748E5L,6L,0x66C6BABEL},{0x603225B4L,8L,3L,0x64F49C94L,(-1L)},{8L,0xC16C8DF5L,0x229A8898L,0L,0xCC69A027L},{7L,0x603225B4L,0L,0x58C4BF6AL,0x43F5FBDEL},{6L,1L,0xF286B381L,0x45593A56L,1L},{0L,0x1AC08895L,0xD2B7156BL,0x8AC7112BL,6L}}};
                        int i, j, k;
                        l_588 = (safe_add_func_uint32_t_u_u(0x5F2B1AF4L, (l_575 = ((((l_584 ^= p_36) < (*p_38)) <= (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(func_57(&l_458, l_572, (&l_543 == (*g_469)), ((p_36 == 0UL) <= 0x1AFFL)))), 0x5265L))) && l_574))));
                        l_591 = ((++(*g_304)) >= p_36);
                        (*p_38) = l_592[1][1][4];
                    }
                    if ((*p_38))
                        break;
                }
                (*l_594) = l_593[0][2][1];
                if ((l_601 = (func_57(l_600[3], (**g_470), (*p_38), (*g_304)) || p_36)))
                {
                    char *l_606 = (void*)0;
                    int *l_607 = &l_573[1];
                    l_602 = (void*)0;

                    ;
                    (*g_530) = p_38;
                    (*g_517) = (((((l_514 |= func_57(l_602, ((p_38 == (void*)0) >= ((***g_469) != 0xB6L)), (*p_38), ((((p_36 = (safe_sub_func_int16_t_s_s((g_236 = (!g_236)), ((((void*)0 != (*g_528)) >= g_298[6]) || p_36)))) | g_163) | 2UL) | l_547))) | g_78) ^ 0x69B653E6L) != l_572) <= 65535UL);
                    (*g_530) = p_38;
                }
                else
                {
                    for (l_559 = 0; (l_559 >= 58); ++l_559)
                    {
                        if ((*p_38))
                            break;
                        (***g_528) = (void*)0;
                    }
                }

                ;
            }
            else
            {
                int *l_617[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_617[i] = &g_298[6];
                (*p_38) = (~(((safe_mod_func_int16_t_s_s((((p_36 >= func_57(func_41((p_36 | ((safe_sub_func_uint32_t_u_u(p_36, (func_57(l_617[6], ((*l_608) = ((**l_475) = (!l_573[1]))), (*p_38), l_573[6]) == g_151))) == p_36)), (*g_470), p_38, (*g_470), (*g_470)), p_36, (*p_38), p_36)) >= l_514) > 0x61CEL), 1L)) >= l_514) == 0xF4D9L));
                (*p_38) = (safe_add_func_uint8_t_u_u((*l_602), 0xB9L));
                for (g_50 = (-14); (g_50 != 8); g_50 = safe_add_func_uint8_t_u_u(g_50, 4))
                {
                    unsigned l_626 = 0x9ED0E640L;
                    int l_633 = (-1L);
                    int l_640 = 3L;
                    int ******l_644 = &l_642;
                    (*g_517) = (p_36 || ((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((l_626 >= 0xCFCC5922L), 5)) & 0x7025L), (*g_471))) != (*l_608)));
                    if ((*l_602))
                        continue;
                    for (l_458 = 0; (l_458 <= 2); l_458 += 1)
                    {
                        int *******l_643[5][8][3] = {{{&l_641,&l_641,&l_641},{&l_641,(void*)0,&l_641},{&l_641,&l_641,&l_641},{&l_641,(void*)0,(void*)0},{&l_641,&l_641,(void*)0},{&l_641,(void*)0,&l_641},{(void*)0,(void*)0,&l_641},{(void*)0,&l_641,&l_641}},{{&l_641,(void*)0,&l_641},{&l_641,(void*)0,&l_641},{&l_641,&l_641,&l_641},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_641,(void*)0},{&l_641,&l_641,&l_641},{&l_641,(void*)0,(void*)0},{&l_641,(void*)0,(void*)0}},{{(void*)0,&l_641,(void*)0},{(void*)0,(void*)0,&l_641},{&l_641,(void*)0,(void*)0},{&l_641,&l_641,(void*)0},{&l_641,(void*)0,&l_641},{(void*)0,(void*)0,&l_641},{(void*)0,&l_641,&l_641},{&l_641,(void*)0,&l_641}},{{&l_641,(void*)0,&l_641},{&l_641,&l_641,&l_641},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_641,(void*)0},{&l_641,&l_641,&l_641},{&l_641,(void*)0,(void*)0},{&l_641,(void*)0,(void*)0},{(void*)0,&l_641,(void*)0}},{{(void*)0,(void*)0,&l_641},{&l_641,(void*)0,(void*)0},{&l_641,&l_641,(void*)0},{&l_641,(void*)0,&l_641},{&l_641,&l_641,&l_641},{&l_641,(void*)0,&l_641},{&l_641,&l_641,(void*)0},{(void*)0,&l_641,&l_641}}};
                        unsigned char *l_649[4][7];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_649[i][j] = &g_442;
                        }
                        l_640 &= (0xC8D8F40BL >= (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_525[(l_458 + 2)][l_458], (p_36 < (safe_mod_func_int32_t_s_s(((**g_350) < (g_108[0] ^ ((l_633 = 0UL) <= (((*g_528) == l_634[1]) & (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_298[6], (-6L))), p_36)))))), l_639))))), 0x59L)));
                        (*g_517) = (func_57(((***g_528) = (void*)0), (***g_469), (*p_38), ((g_525[(l_458 + 2)][l_458] & ((l_644 = l_641) == g_645)) <= (g_442--))) ^ ((*l_602) ^ g_430));
                        l_640 ^= ((*g_517) ^= (safe_add_func_uint8_t_u_u(g_85, g_459)));
                    }
                    if ((*p_38))
                        break;
                }
                if ((*p_38))
                    continue;
            }

            ;
        }


        if ((*p_38))
        {
            int *l_658 = (void*)0;
            (*g_517) |= (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((*g_304), 0xB898L)), 10));
            (**g_529) = func_41((*l_608), (*g_470), p_38, (**g_469), &p_36);
            l_658 = p_38;


            (*p_38) &= ((safe_rshift_func_int16_t_s_s((**g_350), (safe_mul_func_uint8_t_u_u(l_663, (safe_unary_minus_func_uint16_t_u(p_36)))))) ^ (safe_mod_func_int16_t_s_s(4L, ((*g_304) = (*g_304)))));
        }
        else
        {
            unsigned short l_667 = 0xD3BDL;
            l_667++;
        }
        --l_671;
    }




    ;
    for (g_85 = (-23); (g_85 > (-2)); ++g_85)
    {
        for (g_232 = (-24); (g_232 != 15); ++g_232)
        {
            int *l_682 = &g_78;
            for (g_74 = (-19); (g_74 <= (-17)); g_74 = safe_add_func_int16_t_s_s(g_74, 7))
            {
                union U0 l_681 = {5UL};
                (*p_38) = (safe_unary_minus_func_uint32_t_u(g_74));
                (***g_528) = l_682;
            }
        }
        if ((*p_38))
            break;
        (***g_528) = p_38;
    }
    g_686 &= ((*l_608) && func_57(p_38, l_685, (*p_38), p_36));
    return (*g_304);



}







static int * func_41(int p_42, char * p_43, int * p_44, char * p_45, char * p_46)
{
    int **l_282 = (void*)0;
    short l_283[8] = {0x9927L,0x9927L,0x9927L,0x9927L,0x9927L,0x9927L,0x9927L,0x9927L};
    unsigned char *l_292 = &g_143;
    int *l_295 = (void*)0;
    int *l_296 = &g_78;
    int *l_297 = &g_298[6];
    int l_300[2];
    int l_301 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_300[i] = 0x0471E1CBL;
    l_282 = &g_117[0];

    ;
    l_300[1] = (+((*l_297) ^= (l_283[0] != (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(p_42, (((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(((+(&p_44 != &p_44)) != ((*l_292) = (g_50 || 4294967295UL))), 4)) > ((-1L) != (4294967287UL && (safe_mod_func_uint8_t_u_u((((*l_296) = p_42) != g_163), g_214.f1))))) >= g_264), g_108[0])) <= p_42) > 0L))), p_42)))));
    (*l_297) &= l_301;
    return g_302;


}







static char * func_51(int * p_52, int * p_53, int * p_54)
{
    int l_56 = 1L;
    union U0 l_72 = {0xA3C9199EL};
    char *l_73 = &g_74;
    int *l_157 = &g_50;
    unsigned short *l_162 = &g_163;
    union U0 l_164 = {4294967295UL};
    unsigned char *l_271[1][3][8] = {{{&g_30,&g_30,(void*)0,&g_30,&g_30,&g_30,&g_30,(void*)0},{&g_30,&g_30,&g_30,(void*)0,&g_30,&g_30,&g_30,&g_30},{&g_143,&g_30,&g_30,&g_143,&g_30,&g_143,&g_30,&g_30}}};
    int *l_274 = &l_56;
    char l_275 = 1L;
    char *l_280 = (void*)0;
    char *l_281 = &g_111;
    int i, j, k;
    (*p_54) = (l_56 == (func_57(func_62((l_157 = func_68(l_72, l_73, &l_56)), l_72, ((*l_162) = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((l_72.f0 == (~0x6BE12579L)) <= (p_54 != (void*)0)), 13)), 65535UL))), l_72.f0, l_164), l_164.f1, g_74, l_164.f0) & 1L));


    ;
    (*l_274) = ((*p_52) = ((-1L) <= func_57(&l_56, (safe_sub_func_int8_t_s_s(((*l_281) ^= (((safe_mul_func_int16_t_s_s(func_57(&l_56, (g_236 > ((*p_54) = (safe_rshift_func_uint8_t_u_u((g_143--), 5)))), ((((((*l_274) = l_164.f0) >= ((((l_275 >= g_214.f1) == l_72.f1) != ((((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_164.f1, l_72.f1)), l_164.f1)) && l_72.f1) | 0x7C90FF42L) <= g_232)) >= l_275)) > g_86) < g_214.f0) <= g_85), g_74), g_85)) >= g_232) > g_74)), (-5L))), g_214.f0, g_108[0])));
    return &g_111;



}







static unsigned short func_57(int * p_58, char p_59, int p_60, unsigned short p_61)
{
    unsigned l_262 = 4294967290UL;
    for (g_163 = 0; (g_163 >= 22); ++g_163)
    {
        int *l_263 = (void*)0;
        (*g_261) = &p_60;
        g_264 = (~l_262);
    }


    return g_78;


}







static int * func_62(int * p_63, union U0 p_64, unsigned short p_65, char p_66, union U0 p_67)
{
    char *l_165 = &g_74;
    int *l_166 = &g_78;
    int l_175[3][6] = {{0L,0xAF34785CL,0xAF34785CL,0L,0xAF34785CL,0xAF34785CL},{0L,0xAF34785CL,0xAF34785CL,0L,0xAF34785CL,0xAF34785CL},{0L,0xAF34785CL,0xAF34785CL,0L,0xAF34785CL,0xAF34785CL}};
    int i, j;
    (*g_116) = p_63;


    for (g_50 = 0; (g_50 >= (-19)); g_50--)
    {
        unsigned l_171 = 4294967287UL;
        unsigned char l_177 = 0x74L;
        int l_184 = 0x2FA1FB79L;
        int **l_196[4][8] = {{&g_117[0],&g_117[1],&g_117[1],&l_166,&g_117[1],&g_117[1],(void*)0,&g_117[1]},{&g_117[1],&l_166,&g_117[1],&l_166,&g_117[1],&g_117[1],&l_166,&g_117[1]},{&g_117[1],&g_117[1],&g_117[1],&g_117[2],&l_166,&g_117[1],&g_117[1],&l_166},{&g_117[0],&g_117[1],&g_117[1],&g_117[0],&g_117[1],&g_117[1],&l_166,&g_117[1]}};
        int i, j;
    }
    return (*g_116);


}







static int * func_68(union U0 p_69, char * p_70, int * p_71)
{
    int l_82 = (-5L);
    int l_84 = (-1L);
    int *l_92 = (void*)0;
    int l_120 = 0x7717E41AL;
    int l_127 = 9L;
    int l_130 = (-1L);
    int l_131[7];
    int i;
    for (i = 0; i < 7; i++)
        l_131[i] = 0x98D0BA58L;
    for (g_50 = (-1); (g_50 > (-18)); --g_50)
    {
        int *l_77 = &g_78;
        int *l_79 = &g_78;
        int *l_80 = &g_78;
        int *l_81 = &g_78;
        int *l_83[8];
        int **l_91 = &l_81;
        int i;
        for (i = 0; i < 8; i++)
            l_83[i] = &g_78;
        if (g_74)
            break;
        --g_86;
        (*l_77) = (l_84 <= (safe_mul_func_uint16_t_u_u(((0x979D795BL > 0L) == g_74), (p_71 != ((*l_91) = p_71)))));


        return &g_50;


    }
    (*g_93) = l_82;
    for (g_85 = 0; (g_85 >= (-2)); --g_85)
    {
        short l_96 = (-10L);
        int l_98 = 0xB98F8D6FL;
        int l_122 = 0xAB2FCBA4L;
        int l_123[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int i;
        if (l_96)
        {
            int *l_97 = &g_50;
            return l_97;


        }
        else
        {
            int *l_99 = &l_84;
            int l_124 = 4L;
            int l_126 = 0x0FF22B77L;
            int l_128 = 0xF0AA6A4DL;
            int l_129[8];
            int i;
            for (i = 0; i < 8; i++)
                l_129[i] = (-6L);
            (*l_99) = l_98;
            if ((safe_rshift_func_uint16_t_u_u((((*g_93) != (safe_sub_func_int16_t_s_s(((&g_74 == &g_74) < p_69.f0), (safe_mod_func_uint8_t_u_u(g_50, 0xE0L))))) > (safe_mul_func_int8_t_s_s((g_108[0] &= (*p_70)), p_69.f0))), (safe_lshift_func_int8_t_s_u((g_111 = (+(g_30 < g_74))), p_69.f0)))))
            {
                unsigned l_115 = 0xFACDC9FFL;
                int l_121 = 0xB5757325L;
                int l_125[4] = {(-1L),(-1L),(-1L),(-1L)};
                int i;
                if (((&p_71 != (void*)0) && ((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(((*p_71) ^ ((~p_69.f1) <= g_85)), (*p_70))))) != ((*p_70) >= l_115))))
                {
                    int *l_118 = &l_98;
                    int *l_119[4][5][7] = {{{(void*)0,(void*)0,&g_50,&g_50,&l_84,(void*)0,&l_84},{&g_78,(void*)0,&l_98,(void*)0,&g_78,&g_50,&l_84},{&g_78,&g_50,&l_84,&l_84,&l_84,&l_98,&g_50},{&l_84,&l_84,&g_78,&g_78,&g_78,&l_84,&l_84},{&l_84,&l_84,&l_98,&l_98,&l_98,(void*)0,&l_84}},{{&g_50,&g_50,(void*)0,&g_50,&l_84,&l_84,&g_78},{&g_78,&g_78,&l_98,&g_78,&l_98,&g_50,&g_78},{&g_78,&g_78,&g_78,&g_78,&g_50,&l_84,(void*)0},{(void*)0,&l_84,&l_84,&l_98,&g_78,&l_84,&l_98},{&g_50,&g_50,&l_98,&l_84,&g_50,&l_84,&g_78}},{{(void*)0,&g_50,&g_50,&l_84,&g_50,&l_84,&l_98},{&g_50,(void*)0,&l_84,&l_84,(void*)0,&g_50,&l_98},{&l_98,&g_78,&l_98,&g_78,&l_84,&g_50,&l_84},{&l_84,&g_78,(void*)0,&g_50,&l_84,&l_84,&g_78},{&g_50,&g_78,&l_98,&l_84,&l_84,&l_98,&l_98}},{{&l_84,&l_98,&g_50,&l_84,&l_84,&l_98,&g_78},{&g_78,&g_78,&g_78,&g_78,&l_84,(void*)0,&l_84},{&l_84,(void*)0,&g_50,&g_78,&l_84,&g_50,(void*)0},{&l_84,&g_50,&g_50,(void*)0,&l_84,(void*)0,(void*)0},{&l_84,&l_98,&l_98,&l_98,&l_84,&l_98,&l_84}}};
                    unsigned short l_132 = 0xC544L;
                    int i, j, k;
                    (*g_116) = p_71;


                    l_132++;
                    for (l_96 = 28; (l_96 != 0); l_96 = safe_sub_func_int32_t_s_s(l_96, 4))
                    {
                        int **l_137 = &l_119[1][2][3];
                        (*l_137) = (*g_116);
                        if ((*p_71))
                            break;
                    }


                }
                else
                {
                    unsigned char *l_142 = &g_143;
                    unsigned *l_144 = (void*)0;
                    unsigned *l_145 = (void*)0;
                    unsigned *l_146 = &g_108[0];
                    unsigned *l_149 = &l_115;
                    unsigned *l_150 = &g_151;
                    (**g_116) = (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_50, ((*l_142) &= p_69.f1))), (((*l_149) ^= (--(*l_146))) > (++(*l_150)))));
                    if ((g_30 == p_69.f1))
                    {
                        (*l_99) = (&l_125[1] != (void*)0);
                    }
                    else
                    {
                        return l_144;


                    }
                    (**g_116) ^= (*p_71);
                }


                return (*g_116);


            }
            else
            {
                unsigned l_154 = 1UL;
                --l_154;
            }
        }
    }
    return (*g_116);


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_108[i], "g_108[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_298[i], "g_298[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_352[i], "g_352[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_525[i][j], "g_525[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_686, "g_686", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_720[i][j][k], "g_720[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_899[i], "g_899[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_921.f0, "g_921.f0", print_hash_value);
    transparent_crc(g_921.f1, "g_921.f1", print_hash_value);
    transparent_crc(g_1125, "g_1125", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1127[i], "g_1127[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1229[i], "g_1229[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1321, "g_1321", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1794, "g_1794", print_hash_value);
    transparent_crc(g_1814, "g_1814", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
