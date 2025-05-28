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



static unsigned char g_6[4][5] = {{0x54L,0x54L,0x54L,0x54L,0x54L},{0x54L,0x54L,0x54L,0x54L,0x54L},{0x54L,0x54L,0x54L,0x54L,0x54L},{0x54L,0x54L,0x54L,0x54L,0x54L}};
static int g_13 = (-10L);
static int *g_12 = &g_13;
static int g_52[9] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static char g_70 = 1L;
static unsigned short g_72[7] = {0x47D0L,0x47D0L,0x47D0L,0x47D0L,0x47D0L,0x47D0L,0x47D0L};
static unsigned char g_93 = 0x57L;
static int g_96 = 0x73401CF6L;
static unsigned short *g_136 = &g_72[1];
static int g_151 = (-6L);
static int *g_161 = &g_52[7];
static char g_174 = (-1L);
static char g_177 = 0x27L;
static char *g_176 = &g_177;
static int *g_188 = (void*)0;
static int **g_195 = &g_161;
static int ***g_194 = &g_195;
static unsigned g_197 = 1UL;
static short g_198 = 0xEAC2L;
static short g_213 = 0xDA19L;
static int g_219 = 6L;
static unsigned *g_225 = &g_197;
static unsigned **g_224[7][7][5] = {{{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,(void*)0},{(void*)0,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225}},{{&g_225,&g_225,&g_225,(void*)0,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{(void*)0,(void*)0,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,(void*)0,(void*)0},{(void*)0,&g_225,&g_225,&g_225,(void*)0},{&g_225,&g_225,&g_225,&g_225,&g_225}},{{&g_225,&g_225,&g_225,(void*)0,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,(void*)0,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{(void*)0,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,(void*)0,&g_225,&g_225}},{{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,(void*)0,&g_225,&g_225,(void*)0},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,(void*)0,&g_225,&g_225,&g_225},{(void*)0,&g_225,&g_225,&g_225,&g_225},{(void*)0,(void*)0,&g_225,&g_225,&g_225}},{{&g_225,&g_225,&g_225,&g_225,(void*)0},{&g_225,&g_225,(void*)0,(void*)0,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,(void*)0,&g_225,&g_225},{&g_225,&g_225,&g_225,(void*)0,(void*)0},{(void*)0,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225}},{{(void*)0,(void*)0,&g_225,&g_225,&g_225},{(void*)0,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,(void*)0},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,(void*)0,&g_225,&g_225}},{{(void*)0,&g_225,&g_225,&g_225,&g_225},{(void*)0,&g_225,&g_225,&g_225,&g_225},{&g_225,&g_225,&g_225,&g_225,&g_225},{&g_225,(void*)0,&g_225,&g_225,&g_225},{&g_225,&g_225,(void*)0,(void*)0,&g_225},{&g_225,&g_225,&g_225,&g_225,(void*)0},{&g_225,&g_225,(void*)0,&g_225,&g_225}}};
static unsigned char g_284 = 0x7CL;
static char g_301 = 0x42L;
static unsigned char *g_323 = &g_6[3][1];
static unsigned char **g_322 = &g_323;
static volatile unsigned char g_364 = 0xC8L;
static unsigned short **g_506 = &g_136;
static unsigned short ***g_505 = &g_506;
static unsigned g_582 = 0xC89D4FC9L;
static unsigned short g_614[10][9][2] = {{{0x386FL,0x9185L},{0xFBCEL,65535UL},{1UL,5UL},{0x4067L,0x4B7BL},{0xE8B0L,0x5D67L},{0x5918L,0x42BAL},{65527UL,65527UL},{2UL,8UL},{1UL,0xA270L}},{{65535UL,0UL},{0x910CL,65535UL},{5UL,0x3BC5L},{5UL,65535UL},{0x910CL,0UL},{65535UL,0xA270L},{1UL,8UL},{2UL,65527UL},{65527UL,0x42BAL}},{{0x5918L,0x5D67L},{0xE8B0L,0x4B7BL},{0x4067L,5UL},{1UL,65535UL},{0xFBCEL,0x9185L},{0x386FL,2UL},{0UL,0x910CL},{0x3133L,0UL},{1UL,0xFBCEL}},{{2UL,1UL},{65535UL,0x910CL},{0xA270L,0x11B9L},{65535UL,0UL},{0x910CL,0UL},{0x5918L,0x4200L},{0x42BAL,0x4200L},{0x5918L,0UL},{0x910CL,0UL}},{{65535UL,0x11B9L},{0xA270L,0x910CL},{65535UL,1UL},{2UL,0xFBCEL},{1UL,0UL},{65535UL,0x5D67L},{3UL,0x4067L},{1UL,65535UL},{0xF91CL,65535UL}},{{0xE8B0L,0UL},{0UL,0xB723L},{2UL,2UL},{0x83E8L,65535UL},{0x7A1CL,0x7A1CL},{0x4067L,65527UL},{8UL,65535UL},{0x105CL,65530UL},{0x5D67L,0x105CL}},{{0UL,0xA270L},{0UL,0x105CL},{0x5D67L,65530UL},{0x105CL,65535UL},{8UL,65527UL},{0x4067L,0x7A1CL},{0x7A1CL,65535UL},{0x83E8L,2UL},{2UL,0xB723L}},{{0UL,0UL},{0xE8B0L,65535UL},{0xF91CL,65535UL},{1UL,0x4067L},{3UL,0x5D67L},{65535UL,0UL},{1UL,0xFBCEL},{2UL,1UL},{65535UL,0x910CL}},{{0xA270L,0x11B9L},{0x11B9L,65530UL},{2UL,0xA270L},{0x4067L,1UL},{65535UL,1UL},{0x4067L,0xA270L},{2UL,65530UL},{0x11B9L,0xFBCEL},{0xAE1EL,2UL}},{{0x3133L,0x5918L},{8UL,0x5D67L},{2UL,0x4200L},{65535UL,0x42BAL},{65535UL,0UL},{0x5918L,3UL},{2UL,0x105CL},{5UL,0x7A1CL},{0x4200L,2UL}}};
static unsigned short *g_615 = &g_614[2][3][1];
static int g_697[10] = {0xB81921F7L,(-1L),0L,(-1L),0xB81921F7L,0xB81921F7L,(-1L),0L,(-1L),0xB81921F7L};
static int g_803 = (-1L);



static char func_1(void);
static int * func_2(char p_3, unsigned char p_4, int * p_5);
static int * func_7(int * p_8, int p_9, short p_10, int * p_11);
static int * func_14(short p_15);
static short func_20(int p_21, unsigned p_22, int p_23, unsigned p_24, int * p_25);
static int func_30(int * p_31, int * p_32, char p_33);
static int * func_34(int * p_35, int * p_36, unsigned p_37);
static int * func_38(unsigned p_39);
static unsigned short func_43(short p_44, int p_45, int * p_46);
static int func_47(int * p_48);
static char func_1(void)
{
    unsigned short l_42 = 65526UL;
    int *l_130 = (void*)0;
    int **l_129[8] = {&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,&g_12};
    int *l_131 = &g_13;
    unsigned l_190 = 0x54160E17L;
    int l_215 = (-8L);
    int *l_218 = &g_219;
    int i;
    (*g_195) = func_2(g_6[1][4], ((((*g_195) = func_7(g_12, (((*g_195) = func_14(((safe_sub_func_uint16_t_u_u(g_6[3][4], ((safe_sub_func_int8_t_s_s((func_20(((safe_mod_func_int16_t_s_s((g_6[1][4] && ((safe_mod_func_int32_t_s_s(func_30(func_34(&g_13, (l_131 = func_38(((safe_sub_func_int16_t_s_s((l_42 == l_42), func_43(l_42, (*g_12), &g_13))) < g_6[0][1]))), g_96), g_12, g_6[1][4]), g_96)) != g_6[2][2])), 1UL)) >= g_72[0]), l_190, g_72[5], g_177, g_12) != g_72[5]), 246UL)) >= l_215))) | 0xB1L))) == g_12), g_72[5], l_218)) != g_12) | 0x05L), g_225);


    ;
    ;
    ;
    ;

    ;
    return (*g_176);
}







static int * func_2(char p_3, unsigned char p_4, int * p_5)
{
    unsigned l_418 = 0x6153CF38L;
    unsigned char *l_420 = &g_284;
    int l_440 = 0x0F9DEFF3L;
    unsigned ***l_441 = &g_224[6][4][1];
    unsigned short *l_454 = &g_72[6];
    char l_458 = 0x16L;
    int l_480 = 1L;
    char l_493[5];
    int l_495 = 1L;
    unsigned short ***l_531 = &g_506;
    int *l_545 = &g_52[6];
    short l_580 = (-7L);
    int *l_805[1];
    int i;
    for (i = 0; i < 5; i++)
        l_493[i] = 0xB1L;
    for (i = 0; i < 1; i++)
        l_805[i] = &g_697[9];
    for (g_151 = 12; (g_151 >= 12); g_151 = safe_add_func_uint32_t_u_u(g_151, 2))
    {
        unsigned l_419 = 4294967288UL;
        (*p_5) = (l_418 | g_96);
        (*p_5) = (*p_5);
        (**g_194) = (void*)0;

        ;
        if (l_419)
            break;
    }
    if (((((0x5990F09FL & (((*g_225) = l_418) >= p_4)) ^ p_4) | ((*g_176) = (*g_176))) | (0x752FAC16L >= l_418)))
    {
        int *l_421 = &g_219;
        short *l_439 = (void*)0;
        unsigned char ***l_456 = &g_322;
        l_421 = func_34(func_38((*g_225)), p_5, (((void*)0 != l_420) || (*p_5)));

        ;
        for (g_284 = 7; (g_284 <= 3); g_284 = safe_sub_func_uint32_t_u_u(g_284, 3))
        {
            int *l_428 = (void*)0;
            for (g_213 = (-25); (g_213 <= (-27)); g_213 = safe_sub_func_int16_t_s_s(g_213, 1))
            {
                int l_430 = (-4L);
                for (g_151 = 0; (g_151 > (-8)); --g_151)
                {
                    unsigned char *l_429[1][6][10];
                    int l_432 = 0x23A9A361L;
                    unsigned short **l_433 = &g_136;
                    unsigned short ***l_434 = &l_433;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                        {
                            for (k = 0; k < 10; k++)
                                l_429[i][j][k] = &g_6[1][4];
                        }
                    }
                    (**g_194) = l_428;

                    ;
                    if ((((void*)0 == l_429[0][0][9]) ^ l_430))
                    {
                        int l_431 = 1L;
                        l_431 = func_47((*g_195));
                        (**g_194) = (*g_195);
                        (*g_195) = (*g_195);
                        (*g_12) = func_47(&l_432);
                    }
                    else
                    {
                        (*g_195) = (**g_194);
                    }
                    (*l_434) = l_433;
                }
                for (g_197 = 0; (g_197 <= 8); g_197 += 1)
                {
                    int i;
                    g_52[g_197] = g_52[g_197];
                    (*l_421) = (*p_5);
                    return (*g_195);


                }
                return p_5;


            }
        }
        for (g_197 = 3; (g_197 <= 7); g_197 = safe_add_func_int16_t_s_s(g_197, 4))
        {
            short l_457 = 0L;
        }
        (*g_12) = 0x074A68DBL;
    }
    else
    {
        return (**g_194);


    }
    if ((safe_div_func_int32_t_s_s(((*p_5) = l_418), (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_458, (*g_176))), p_3)))))
    {
        unsigned l_467 = 4294967295UL;
        int *l_481 = (void*)0;
        unsigned short **l_503[6];
        unsigned short ***l_502 = &l_503[0];
        unsigned short l_524 = 2UL;
        int i;
        for (i = 0; i < 6; i++)
            l_503[i] = &l_454;
        (*g_12) = (safe_div_func_uint16_t_u_u((l_467 <= (*p_5)), (safe_div_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s(p_3, 0)) != l_418) && p_3), (safe_div_func_uint32_t_u_u(l_467, p_3))))));
        if ((((*g_176) = (l_440 == ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(func_43(l_418, (g_174 && ((p_5 == p_5) == (*g_225))), func_38((func_47((*g_195)) && l_480))), 0x14085F8CL)), 10)) <= (**g_322)), (*g_136))) && 1UL))) || 0xA8L))
        {
            short l_486 = 8L;
            (*g_195) = func_34(l_481, (*g_195), ((*g_225) = ((p_5 == (*g_195)) || func_43(((safe_rshift_func_int8_t_s_s((~(*g_176)), (p_4 & (*g_12)))) | (l_480 <= (safe_div_func_int32_t_s_s((*g_12), (*g_225))))), (*p_5), (*g_195)))));

            ;
            (***g_194) = l_486;
        }
        else
        {
            int *l_494 = &g_151;
            short *l_543 = &g_198;
            short **l_542 = &l_543;
            short *l_544 = &g_213;
            for (g_284 = (-4); (g_284 != 6); g_284 = safe_add_func_int8_t_s_s(g_284, 2))
            {
                unsigned l_510 = 0xE597F0CCL;
                char **l_513 = &g_176;
                char *l_515 = &g_301;
                char **l_514 = &l_515;
                unsigned l_539 = 6UL;
                for (p_4 = 0; (p_4 != 2); p_4 = safe_add_func_int8_t_s_s(p_4, 1))
                {
                    unsigned short ****l_504[8] = {&l_502,&l_502,&l_502,&l_502,&l_502,&l_502,&l_502,&l_502};
                    short *l_507 = &g_213;
                    int i;
                    (**g_194) = func_34(p_5, p_5, p_4);

                    ;
                    for (g_301 = 3; (g_301 >= 0); g_301 -= 1)
                    {
                        p_5 = p_5;
                        return l_481;



                    }
                    (*p_5) = l_495;
                    (*l_494) = (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((g_505 = l_502) == (void*)0), (-6L))) ^ ((((*l_507) = (*l_494)) >= ((p_4 || (((*l_494) ^ 0x22AF414EL) >= p_4)) ^ ((safe_add_func_int16_t_s_s(((void*)0 != &p_4), l_510)) < p_4))) > (-8L))), p_4)), p_4));

                    ;
                }
                (*g_12) = ((((safe_sub_func_int16_t_s_s(((((*l_513) = &g_301) == ((*l_514) = &p_3)) <= (***g_505)), (safe_add_func_uint8_t_u_u((**g_322), l_510)))) < (safe_lshift_func_uint8_t_u_u((p_4 == (safe_div_func_int8_t_s_s(p_4, (safe_lshift_func_uint16_t_u_s(p_4, (((*l_494) = l_510) || l_524)))))), 6))) != p_4) || 0L);

                ;
                ;
                for (l_480 = (-5); (l_480 < (-5)); l_480 = safe_add_func_int8_t_s_s(l_480, 3))
                {
                    int l_538 = (-1L);
                    if (l_510)
                        break;
                    (*g_12) = ((*l_494) = (0UL == (((void*)0 != &g_323) > ((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((!((*g_225) = (*g_225))) | ((((&g_506 != l_531) & ((-1L) || (((**g_322) || (safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(p_4, l_538)) ^ 0x8053L), 0x58B3L)), 9))) || p_3))) < l_458) & l_539)) != (*g_176)), (-2L))), l_538)) | (-4L)))));
                }
            }

            ;
            ;
            (*l_494) = ((void*)0 != &l_503[0]);
            (*g_195) = &l_440;

            ;
            if (((*l_494) & (((*g_176) = ((((~(((*g_505) != (void*)0) ^ (((((*l_544) = (safe_add_func_uint32_t_u_u(((*g_225) = (*g_225)), (&g_213 == ((*l_542) = &g_213))))) & 0x55C7L) <= func_43(l_458, ((**g_195) <= p_4), (*g_195))) | (*g_323)))) ^ (-1L)) < l_493[0]) || (-9L))) < 2UL)))
            {
                return p_5;




            }
            else
            {
                (*g_195) = l_545;

                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
    }
    else
    {
        int *l_548 = &g_52[4];
        char *l_558 = &g_301;
        unsigned l_568[10][1][7] = {{{0x06845A19L,0x06845A19L,1UL,0x0598351CL,1UL,1UL,1UL}},{{8UL,0UL,0UL,8UL,1UL,7UL,8UL}},{{0x714DF501L,1UL,0x7A3E2A15L,0x7A3E2A15L,1UL,0x714DF501L,0x2EF2367AL}},{{0xF62680E8L,8UL,1UL,1UL,1UL,1UL,8UL}},{{1UL,0x2EF2367AL,0x714DF501L,1UL,0x7A3E2A15L,0x7A3E2A15L,1UL}},{{7UL,1UL,1UL,0UL,1UL,7UL,7UL}},{{0x06845A19L,0x0598351CL,4294967292UL,0x0598351CL,0x06845A19L,4294967292UL,1UL}},{{0xF62680E8L,7UL,0UL,0xF62680E8L,0UL,7UL,0xF62680E8L}},{{0x7A3E2A15L,1UL,0x714DF501L,0x2EF2367AL,1UL,0x2EF2367AL,0x714DF501L}},{{0xF62680E8L,0xF62680E8L,0xB76A7D8EL,1UL,8UL,0xB76A7D8EL,8UL}}};
        unsigned short *l_613 = &g_614[2][3][1];
        short l_696 = 0x395FL;
        int *l_764 = &g_697[0];
        int *l_796 = (void*)0;
        int *l_804[3][10][1] = {{{&g_52[8]},{&g_219},{&g_697[6]},{&g_219},{&g_52[8]},{&g_219},{&g_697[6]},{&g_219},{&g_52[8]},{&g_219}},{{&g_697[6]},{&g_219},{&g_52[8]},{&g_219},{&g_697[6]},{&g_219},{&g_52[8]},{&g_219},{&g_697[6]},{&g_219}},{{&g_52[8]},{&g_219},{&g_697[6]},{&g_219},{&g_52[8]},{&g_219},{&g_697[6]},{&g_219},{&g_52[8]},{&g_219}}};
        int i, j, k;
        if ((p_4 || (+p_3)))
        {
            (**g_194) = (*g_195);
        }
        else
        {
            char l_551[7];
            char **l_567 = &g_176;
            char ***l_566 = &l_567;
            int l_596 = 0x57140D6DL;
            unsigned short *l_612[2];
            int *l_656 = &g_13;
            int i;
            for (i = 0; i < 7; i++)
                l_551[i] = 0xCDL;
            for (i = 0; i < 2; i++)
                l_612[i] = &g_72[0];
            (**g_194) = p_5;

            ;
            for (g_93 = (-6); (g_93 > 47); ++g_93)
            {
                int *l_559 = &l_480;
                (*g_195) = (*g_195);
            }
            if ((((safe_div_func_uint8_t_u_u(((*p_5) & (safe_sub_func_uint16_t_u_u(((*l_454) = 0x4598L), ((((*l_545) != p_3) || ((((***g_194) < (safe_lshift_func_uint8_t_u_s((((*l_566) = &g_176) != (void*)0), (*g_176)))) <= l_568[3][0][4]) == p_3)) > l_551[4])))), 0x71L)) || 1L) | l_551[4]))
            {
                short l_579 = (-4L);
                short l_586[6] = {0x087AL,0x087AL,0x087AL,0x087AL,0x087AL,0x087AL};
                int *l_588[7][10][3] = {{{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151}},{{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151}},{{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151}},{{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151}},{{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151}},{{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151}},{{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151},{&g_52[8],&g_52[6],&g_52[8]},{(void*)0,(void*)0,&g_151},{&l_440,&g_52[6],&l_440},{(void*)0,&g_151,&g_151}}};
                unsigned short ****l_618 = &g_505;
                int i, j, k;
                (*g_12) = (((((*g_161) = (*l_548)) & l_551[4]) | (-7L)) && (safe_mod_func_int32_t_s_s((*l_548), ((*g_225) = 0x026C8300L))));
                if ((safe_rshift_func_uint8_t_u_u((*l_545), 4)))
                {
                    unsigned *l_581 = &g_582;
                    int l_585[7] = {0xA93D07BBL,(-1L),(-1L),0xA93D07BBL,(-1L),(-1L),(-1L)};
                    int *l_587 = &g_219;
                    int i;
                    (*g_161) = (safe_sub_func_int32_t_s_s(((*l_545) = 0x79838588L), (*g_12)));
                    if (func_20((((((*l_545) & (*l_545)) > (safe_div_func_int32_t_s_s((safe_div_func_uint8_t_u_u((((*l_587) = ((**g_195) = ((l_579 <= ((l_580 = 0x8FL) | (+((((**g_506) = (p_3 >= (*p_5))) | ((l_585[1] = (((*g_12) = (((*l_581) = (*l_545)) > (safe_rshift_func_int8_t_s_u(((*g_176) = (-5L)), 1)))) < (-1L))) != l_586[2])) < g_219)))) <= (*p_5)))) && (*p_5)), 249UL)), (*l_545)))) ^ p_4) == (*l_545)), p_3, l_551[3], l_551[4], l_588[0][0][0]))
                    {
                        unsigned short l_589 = 1UL;
                        l_589 = ((*l_545) = 0x5D62980BL);
                        return (*g_195);


                    }
                    else
                    {
                        unsigned short l_590 = 0UL;
                        (**g_194) = func_34((*g_195), l_548, (((**l_567) = (p_4 ^ l_590)) <= (*l_545)));
                        (*l_545) = (*p_5);
                        (*g_195) = (void*)0;

                        ;
                        (*l_587) = ((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_5), (((**g_506) = (***g_505)) ^ p_4))), g_6[1][4])))) | (l_596 = p_3));
                    }

                    ;
                }
                else
                {
                    unsigned l_608[1][3][1];
                    unsigned short *l_616[3];
                    int l_617[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
                    unsigned short *****l_619[2][6][5] = {{{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618}},{{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618},{&l_618,&l_618,&l_618,&l_618,&l_618}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_608[i][j][k] = 0xFDE55B94L;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_616[i] = &g_72[6];
                    (**g_194) = &l_596;

                    ;
                    for (g_284 = 28; (g_284 >= 26); g_284 = safe_sub_func_int32_t_s_s(g_284, 2))
                    {
                        int *l_599 = &g_96;
                        (*g_12) = ((*l_545) = func_20(((*l_599) = func_47((*g_195))), (l_596 = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((***g_505), 0x2ABAL)), (safe_mod_func_int32_t_s_s((l_608[0][0][0] == (((l_617[8] = (((safe_rshift_func_uint16_t_u_u((***g_505), (p_4 <= (safe_unary_minus_func_int8_t_s((*g_176)))))) || (((g_615 = (l_613 = l_612[1])) != l_616[2]) || p_3)) < p_4)) ^ 65535UL) == (*p_5))), p_4))))), (*p_5), (*g_225), p_5));

                        ;
                    }

                    ;
                    ;
                    ;
                    (*p_5) = ((&l_531 != (l_618 = l_618)) & p_4);
                    if (func_47(func_14((*l_548))))
                    {
                        p_5 = (*g_195);

                        ;
                        (*g_161) = (*p_5);
                    }
                    else
                    {
                        return p_5;



                    }

                    ;
                }

                ;
                ;
                ;
                ;
                (*l_548) = (-1L);
            }
            else
            {
                unsigned l_622 = 0x355E8F43L;
                short *l_645 = &g_198;
                unsigned *l_646 = &g_582;
                (***g_194) = (safe_add_func_int16_t_s_s((((l_622 || (*p_5)) && (*p_5)) == (((((*l_545) && (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((9UL == ((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_646) = (safe_lshift_func_uint8_t_u_u((*g_323), (((**g_505) != (*g_506)) & (safe_add_func_int8_t_s_s((((*l_645) = (safe_add_func_int32_t_s_s(((safe_add_func_int16_t_s_s(p_3, 0UL)) || p_3), p_4))) <= p_3), (*l_548))))))) == 4294967291UL), 0)), p_4)), 0xBFL)), p_3)) < 0x5213L)) >= (*g_225)), p_4)), p_3))) >= (*p_5)) && 0x611C5A6DL) == (*l_548))), (*g_615)));
                (**g_194) = l_548;

                ;
                if ((safe_lshift_func_uint8_t_u_s(0x1EL, (((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((*g_161) = (*p_5)), (0x25831930L > p_4))), 0x4480L)) < (l_551[4] ^ p_3)) && 0xB4L))))
                {
                    unsigned l_665 = 0x00A49A9EL;
                    int l_666 = (-1L);
                    for (g_284 = 0; (g_284 < 4); g_284 = safe_add_func_uint16_t_u_u(g_284, 9))
                    {
                        int **l_655[1][5];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_655[i][j] = &g_188;
                        }
                        p_5 = (l_656 = ((*g_195) = (void*)0));

                        ;
                        ;
                        ;
                        (*g_12) = (~func_20((7L | (*g_176)), ((void*)0 == (**l_531)), (safe_div_func_int32_t_s_s(((65529UL && ((*g_615) = ((*l_545) <= 6L))) ^ (!((*l_645) = p_3))), p_4)), p_3, (*g_195)));

                        ;
                        (*g_12) = ((*l_545) = func_20((((p_4 < ((safe_add_func_int8_t_s_s(((*l_558) = 0xE9L), ((+(safe_add_func_int16_t_s_s(func_20(g_614[2][3][1], p_3, l_665, (*l_548), l_548), p_4))) != p_4))) != 251UL)) && l_622) || l_622), g_72[1], l_568[9][0][2], l_665, p_5));
                    }

                    ;
                    ;
                    if (((*g_12) = p_4))
                    {
                        int *l_674 = &g_96;
                        int l_675 = (-5L);
                        l_656 = func_7(l_646, ((l_666 = ((*l_545) <= 0x3E308494L)) || (safe_add_func_uint16_t_u_u(65532UL, (((***g_194) = (safe_unary_minus_func_int8_t_s((((safe_sub_func_uint32_t_u_u(((*l_548) | ((*l_646) = (safe_sub_func_uint32_t_u_u(((*g_225) = (l_674 == (void*)0)), (-6L))))), l_665)) ^ (*l_545)) && (*l_548))))) < l_675)))), p_4, l_646);

                        ;
                        (*g_195) = (void*)0;

                        ;
                        l_666 = (l_665 < ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_675, 0)), (func_20(g_198, p_3, p_3, (p_4 >= l_675), l_646) | l_675))) >= p_4));

                        ;
                        (*g_195) = (*g_195);
                    }
                    else
                    {
                        (*g_12) = ((*g_161) = p_3);
                        (*l_548) = (-1L);
                    }

                    ;
                    (*g_161) = (g_284 && (*g_615));
                }
                else
                {
                    for (g_284 = 0; (g_284 < 16); ++g_284)
                    {
                        int **l_682 = &l_656;
                    }
                    (*g_161) = 0xD68F7721L;
                    (*l_548) = l_622;
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            for (p_4 = 2; (p_4 < 19); p_4 = safe_add_func_uint32_t_u_u(p_4, 8))
            {
                unsigned short *l_687 = &g_72[5];
                int l_690[2];
                int *l_693 = &l_440;
                int i;
                for (i = 0; i < 2; i++)
                    l_690[i] = 0x5E3DA605L;
                (*l_693) = ((safe_add_func_int32_t_s_s(((*g_12) = ((*l_548) = (l_612[1] != l_687))), (g_96 == ((*g_615) = (safe_mod_func_int16_t_s_s(((l_690[1] && 249UL) && ((*l_420) = ((*g_323) = ((safe_sub_func_int8_t_s_s((p_4 ^ 0xCDL), (*g_176))) > p_4)))), 65535UL)))))) > p_3);
            }
        }



        ;
        ;
        g_697[9] = ((~(safe_rshift_func_int8_t_s_u(1L, 1))) != (p_3 ^ (*g_176)));
        if ((*l_545))
        {
            (*l_545) = 0xC5121F99L;
        }
        else
        {
            int *l_698 = &g_697[1];
            char l_767[6][6] = {{0x75L,0xACL,(-7L),(-7L),0xACL,0x75L},{0x75L,(-1L),0x7AL,(-7L),(-1L),(-7L)},{0x75L,(-1L),0x75L,(-7L),(-1L),0x7AL},{0x75L,0xACL,(-7L),(-7L),0xACL,0x75L},{0x75L,0xACL,0x75L,0x7AL,0xACL,0x7AL},{(-7L),(-1L),(-7L),0x7AL,(-1L),0x75L}};
            short *l_792 = &l_696;
            short **l_791 = &l_792;
            unsigned **l_797 = &g_225;
            int i, j;
            (*g_195) = l_698;

            ;
            if ((**g_195))
            {
                int *l_705 = (void*)0;
                int l_726 = 2L;
                unsigned l_729 = 5UL;
                unsigned char ***l_730 = (void*)0;
                int l_736 = 0xA72BCD84L;
                for (g_284 = (-18); (g_284 < 48); g_284++)
                {
                    short *l_711 = (void*)0;
                    short **l_710 = &l_711;
                    unsigned ***l_723 = (void*)0;
                    int l_725 = 0x8A0189A8L;
                    int l_728 = 0x90A24EF3L;
                    unsigned char ***l_731 = &g_322;
                    int l_738 = (-1L);
                }
            }
            else
            {
                g_12 = ((*g_195) = &l_440);

                ;
                ;
                (*l_548) = (safe_unary_minus_func_uint32_t_u(p_3));
                (**g_194) = (*g_195);
                (*g_195) = func_38(p_4);

                ;
            }

            ;
            ;
            (**g_195) = ((*l_698) < p_4);
            if (((**g_322) | (safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((*l_420) = 0x6DL) && (*l_548)), ((safe_mod_func_int16_t_s_s(0xA1B0L, (**g_506))) == ((*g_225) = (((safe_rshift_func_uint16_t_u_u(((*l_545) <= ((*l_548) || p_3)), (+((safe_add_func_int32_t_s_s((*l_545), (*g_225))) != 0x83L)))) == p_4) <= (*g_161)))))), (**g_195)))))
            {
                int *l_754 = &g_52[8];
                if (func_47(l_754))
                {
                    (*g_195) = l_754;

                    ;
                    (*l_531) = (*l_531);
                }
                else
                {
                    return l_698;



                }

                ;
                l_545 = l_698;

                ;
                if (func_43((*l_754), (((*l_545) = 0x2C570C66L) == ((*g_225) = ((g_174 ^ ((*l_548) >= p_3)) != (*g_176)))), l_754))
                {
                    return (*g_195);



                }
                else
                {
                    int *l_763 = &g_219;
                    (*l_764) = (((**g_322) = (*l_698)) != (~((*g_176) = func_43(p_4, (safe_lshift_func_uint16_t_u_s((*l_545), 13)), l_764))));
                    for (l_696 = 0; (l_696 > (-9)); l_696--)
                    {
                    }
                }
                p_5 = func_38(l_767[3][2]);

                ;
            }
            else
            {
                int *l_772[9] = {&g_52[6],&l_440,&g_52[6],&l_440,&g_52[6],&l_440,&g_52[6],&l_440,&g_52[6]};
                short *l_790 = &g_198;
                short **l_789[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_789[i] = &l_790;
                (**g_194) = (void*)0;

                ;
                (*l_698) = p_3;
                for (g_198 = 19; (g_198 != 9); g_198 = safe_sub_func_uint8_t_u_u(g_198, 3))
                {
                    unsigned short l_781 = 0xE966L;
                    unsigned *l_782 = &g_582;
                    for (g_582 = 10; (g_582 >= 60); g_582++)
                    {
                        (*l_698) = (*g_12);
                        return l_548;




                    }
                    (**g_194) = l_772[3];

                    ;
                    (*l_548) = ((*g_176) | ((safe_sub_func_uint32_t_u_u(p_4, (safe_sub_func_uint8_t_u_u((!(safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((0xB4D1F068L ^ (((*l_698) = (*g_12)) != ((*g_225) = (*l_548)))), l_781)), ((*l_782) = p_3)))), (*g_323))))) && 0x36L));
                    (*g_161) = 0xD5BB8D54L;
                }

                ;
                if (((!0x06L) == (*l_698)))
                {
                    return l_698;




                }
                else
                {
                    char l_785 = 9L;
                    int *l_795 = &g_697[0];
                    if ((safe_sub_func_int16_t_s_s(0xC74BL, 65532UL)))
                    {
                        unsigned *l_793 = &l_418;
                        int l_794[4] = {1L,1L,1L,1L};
                        int i;
                        (*g_12) = ((*l_764) = (((func_20(p_4, ((*l_793) = func_47((**g_194))), l_794[1], l_794[1], l_795) <= p_3) < (*l_764)) > (*l_698)));

                        ;
                        (*g_195) = l_795;

                        ;
                        p_5 = ((**g_194) = (**g_194));

                        ;
                    }
                    else
                    {
                        (**g_194) = (*g_195);
                        (*g_195) = l_796;

                        ;
                        (**g_194) = (**g_194);
                        (**g_194) = (**g_194);
                    }

                    ;

                    (*g_195) = l_764;

                    ;
                    if ((l_797 != (void*)0))
                    {
                        return (*g_195);



                    }
                    else
                    {
                        int *l_798 = &g_219;
                        (*g_195) = (*g_195);
                        (**g_194) = l_798;

                        ;
                    }

                    ;
                    for (p_3 = (-20); (p_3 == (-6)); ++p_3)
                    {
                        unsigned short **l_801[10] = {&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136,&g_136};
                        int *l_802 = &g_151;
                        int i;
                    }
                }

                ;

            }

            ;

            ;
        }

        ;


        ;
    }

    ;

    ;


    ;
    ;
    (*g_12) = (*g_12);
    return l_805[0];



}







static int * func_7(int * p_8, int p_9, short p_10, int * p_11)
{
    unsigned l_220[8][3] = {{0UL,0UL,0UL},{0x58A1B903L,0x58A1B903L,0x58A1B903L},{0UL,0UL,0UL},{0x58A1B903L,0x58A1B903L,0x58A1B903L},{0UL,0UL,0UL},{0x58A1B903L,0x58A1B903L,0x58A1B903L},{0UL,0UL,0UL},{0x58A1B903L,0x58A1B903L,0x58A1B903L}};
    int l_263[6] = {(-1L),0x5EE9B9BCL,0x5EE9B9BCL,(-1L),0x5EE9B9BCL,0x5EE9B9BCL};
    unsigned l_265 = 0UL;
    unsigned char **l_324[6] = {&g_323,&g_323,&g_323,&g_323,&g_323,&g_323};
    int *l_363 = (void*)0;
    int ***l_404 = &g_195;
    int l_409[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_409[i] = (-10L);
    (*g_12) = l_220[5][0];
    (*g_195) = (**g_194);
    if (((*p_8) = (*p_11)))
    {
        int *l_223 = &g_151;
        unsigned **l_227 = &g_225;
        for (g_151 = 0; (g_151 < (-17)); g_151 = safe_sub_func_uint8_t_u_u(g_151, 5))
        {
            if ((*p_8))
                break;
            return (*g_195);


        }
        (*g_12) = (~(*p_11));
        (*g_195) = func_34(l_223, ((**g_194) = (*g_195)), l_220[5][0]);

        ;
        if ((~(*p_8)))
        {
            unsigned char ***l_230 = (void*)0;
            int *l_236 = &g_219;
            for (g_70 = 8; (g_70 >= 1); g_70 -= 1)
            {
                unsigned char *l_261 = &g_6[1][4];
                unsigned char **l_260[4][8] = {{&l_261,&l_261,(void*)0,&l_261,(void*)0,&l_261,&l_261,(void*)0},{&l_261,(void*)0,(void*)0,&l_261,&l_261,&l_261,(void*)0,(void*)0},{(void*)0,&l_261,&l_261,&l_261,&l_261,(void*)0,&l_261,&l_261},{&l_261,&l_261,(void*)0,&l_261,&l_261,(void*)0,&l_261,(void*)0}};
                int i, j;
                for (g_151 = 8; (g_151 >= 0); g_151 -= 1)
                {
                    return (*g_195);


                }
                for (g_96 = 8; (g_96 >= 3); g_96 -= 1)
                {
                    unsigned ***l_226 = &g_224[4][1][1];
                    unsigned char *l_233[10][8][3] = {{{&g_6[1][4],&g_6[0][4],&g_93},{&g_6[3][2],&g_6[3][3],&g_6[0][3]},{&g_93,&g_6[1][4],&g_6[1][4]},{&g_6[1][4],&g_6[1][0],&g_6[0][3]},{&g_6[1][4],&g_6[1][4],&g_6[1][3]},{(void*)0,(void*)0,&g_6[1][2]},{&g_6[1][3],&g_6[2][3],(void*)0},{&g_6[1][4],(void*)0,&g_6[1][4]}},{{&g_6[1][4],&g_6[0][0],(void*)0},{&g_6[3][3],&g_93,(void*)0},{&g_6[0][4],&g_6[1][4],&g_6[1][4]},{&g_6[1][4],&g_6[1][4],&g_6[1][4]},{&g_93,&g_6[1][4],&g_93},{&g_6[1][4],&g_6[0][1],&g_6[1][4]},{(void*)0,&g_93,&g_6[1][4]},{&g_6[0][3],&g_6[1][4],&g_93}},{{&g_6[1][4],&g_6[1][4],&g_6[1][4]},{&g_6[2][4],&g_6[0][3],&g_6[1][4]},{(void*)0,&g_93,(void*)0},{&g_6[1][4],&g_6[1][4],(void*)0},{&g_6[1][4],&g_93,&g_6[1][4]},{&g_6[0][3],&g_6[1][4],(void*)0},{(void*)0,&g_6[1][4],&g_6[1][2]},{&g_93,&g_6[0][2],&g_6[1][3]}},{{&g_6[1][4],&g_6[1][4],&g_6[0][3]},{(void*)0,(void*)0,&g_6[1][4]},{&g_6[1][4],(void*)0,&g_6[0][3]},{&g_6[3][1],&g_93,&g_93},{&g_93,&g_6[1][2],&g_93},{&g_6[0][0],&g_6[1][4],&g_6[0][1]},{(void*)0,&g_93,&g_6[0][3]},{&g_6[1][4],&g_93,&g_6[1][4]}},{{&g_6[1][4],&g_93,&g_6[0][0]},{&g_93,&g_6[3][2],&g_6[1][4]},{&g_93,(void*)0,&g_6[1][4]},{&g_93,(void*)0,&g_6[2][3]},{&g_6[1][4],&g_6[1][4],&g_6[3][1]},{&g_6[3][3],&g_6[3][0],&g_93},{(void*)0,&g_6[0][3],&g_93},{(void*)0,&g_6[3][1],&g_6[1][4]}},{{&g_93,&g_6[1][4],&g_6[1][4]},{&g_6[1][4],&g_6[1][4],&g_93},{&g_6[1][4],&g_6[1][4],&g_93},{&g_6[1][4],&g_6[1][4],&g_6[1][3]},{&g_6[1][4],&g_6[2][3],&g_6[3][1]},{&g_6[1][4],&g_6[0][4],&g_6[1][4]},{&g_6[3][1],&g_6[1][0],&g_6[2][3]},{&g_6[1][4],(void*)0,&g_6[3][3]}},{{&g_93,&g_93,&g_6[1][4]},{&g_93,&g_6[1][4],&g_6[3][1]},{&g_6[1][4],(void*)0,(void*)0},{&g_6[3][1],(void*)0,&g_6[3][2]},{&g_6[1][4],&g_6[3][3],&g_93},{&g_6[1][4],&g_6[1][4],&g_6[1][4]},{&g_6[1][4],(void*)0,&g_6[3][3]},{&g_6[1][4],(void*)0,&g_6[1][4]}},{{&g_6[1][4],&g_93,(void*)0},{&g_93,&g_93,&g_6[1][4]},{(void*)0,&g_6[1][4],&g_6[1][4]},{(void*)0,&g_6[1][4],(void*)0},{&g_6[3][3],(void*)0,&g_93},{&g_6[1][4],&g_6[1][4],&g_93},{&g_6[1][3],&g_6[1][3],&g_93},{&g_6[1][4],&g_93,&g_6[1][4]}},{{&g_6[1][4],&g_6[1][4],&g_6[1][4]},{&g_6[0][0],&g_93,&g_6[2][3]},{&g_6[3][2],&g_6[1][4],&g_6[1][4]},{&g_6[1][4],(void*)0,&g_6[1][4]},{&g_6[1][4],&g_93,&g_93},{&g_6[1][4],&g_6[0][4],&g_93},{&g_93,&g_93,(void*)0},{&g_93,&g_6[3][2],&g_6[1][4]}},{{(void*)0,&g_6[0][0],(void*)0},{&g_93,(void*)0,&g_93},{&g_93,&g_6[1][4],(void*)0},{(void*)0,&g_6[3][1],&g_6[1][4]},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_6[1][4],&g_6[3][2]},{&g_6[1][4],(void*)0,&g_6[3][3]},{(void*)0,&g_6[2][3],&g_6[1][4]}}};
                    unsigned char **l_232[9][7] = {{&l_233[0][5][2],&l_233[8][1][2],&l_233[8][1][2],&l_233[0][5][2],(void*)0,&l_233[0][5][2],&l_233[6][3][1]},{(void*)0,&l_233[3][4][0],&l_233[0][5][2],&l_233[7][2][2],&l_233[7][2][2],&l_233[0][5][2],&l_233[3][4][0]},{(void*)0,&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[8][1][2],&l_233[6][3][1],&l_233[6][3][1]},{(void*)0,(void*)0,&l_233[7][2][2],(void*)0,(void*)0,&l_233[0][5][2],(void*)0},{&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2]},{(void*)0,(void*)0,&l_233[5][6][0],&l_233[7][2][2],&l_233[3][4][0],&l_233[7][4][0],&l_233[5][6][0]},{&l_233[0][5][2],&l_233[6][3][1],&l_233[0][5][2],&l_233[0][5][2],&l_233[6][3][1],&l_233[0][5][2],&l_233[0][5][2]},{&l_233[0][5][2],(void*)0,&l_233[3][4][0],&l_233[0][5][2],&l_233[7][2][2],&l_233[7][2][2],&l_233[0][5][2]},{&l_233[8][1][2],&l_233[0][5][2],&l_233[8][1][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2],&l_233[0][5][2]}};
                    unsigned char ***l_231 = &l_232[8][6];
                    int i, j, k;
                    l_227 = ((*l_226) = g_224[4][1][1]);
                }
            }

            ;
            (*p_11) = (p_10 | (~0x689AL));
        }
        else
        {
            unsigned short l_285 = 0UL;
            unsigned l_296 = 0xEF02EE0EL;
            for (p_10 = 24; (p_10 >= 22); p_10 = safe_sub_func_uint8_t_u_u(p_10, 4))
            {
                unsigned char *l_280 = &g_93;
                unsigned char *l_283[8] = {&g_6[1][4],(void*)0,&g_6[1][4],(void*)0,&g_6[1][4],(void*)0,&g_6[1][4],(void*)0};
                unsigned *l_286 = &l_220[6][0];
                int l_289 = 1L;
                int i;
            }
            (*g_195) = func_38(((func_43(p_10, ((*p_8) = (*p_8)), func_14(p_10)) || ((*l_223) = (((safe_add_func_int16_t_s_s(g_197, g_219)) > (((func_43(g_301, (*p_8), &l_263[4]) == 0L) && l_263[1]) ^ (*g_176))) || (*g_225)))) && 0L));
        }

        ;
    }
    else
    {
        unsigned char *l_319 = &g_284;
        unsigned char **l_326 = &g_323;
        int l_328 = 0L;
        int *l_412[5][9] = {{&g_151,(void*)0,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151},{&g_52[8],&g_52[8],&l_263[0],&g_52[2],(void*)0,(void*)0,&g_52[2],&l_263[0],&g_52[8]},{&g_52[1],&g_151,&g_151,&g_151,&g_52[1],&g_151,&g_151,&g_151,&g_52[1]},{(void*)0,&g_52[2],&l_263[0],&g_52[8],&g_52[8],&l_263[0],&g_52[2],(void*)0,(void*)0},{&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151,(void*)0,&g_151}};
        int i, j;
        for (g_96 = 0; (g_96 != (-10)); g_96 = safe_sub_func_int16_t_s_s(g_96, 2))
        {
            unsigned char ***l_339 = &g_322;
            int l_343 = 0x3A89F367L;
        }
        (**g_194) = func_38(l_409[2]);

        ;
        for (l_328 = 0; (l_328 < 21); l_328 = safe_add_func_int8_t_s_s(l_328, 9))
        {
            l_412[0][3] = (**l_404);
            for (g_219 = 3; (g_219 >= 1); g_219 -= 1)
            {
                int i, j;
                (*g_12) = (*g_161);
                (*g_12) = (*g_12);
            }
        }
    }

    ;
    for (p_9 = 0; (p_9 != (-3)); --p_9)
    {
        unsigned l_415 = 0x66269D93L;
        if (l_415)
            break;
    }
    return (**l_404);


}







static int * func_14(short p_15)
{
    short l_216 = 0xBA30L;
    int *l_217[6][9] = {{&g_52[8],&g_52[8],&g_52[8],&g_13,&g_52[8],&g_52[8],&g_52[8],&g_52[8],&g_52[8]},{&g_52[8],(void*)0,(void*)0,(void*)0,&g_52[8],&g_151,&g_151,&g_52[8],(void*)0},{&g_52[8],&g_52[8],(void*)0,&g_52[8],&g_151,&g_151,&g_52[8],(void*)0,&g_52[8]},{(void*)0,&g_151,&g_151,&g_13,&g_13,&g_151,&g_151,(void*)0,&g_151},{&g_13,&g_151,&g_52[8],&g_52[8],&g_151,&g_13,&g_151,&g_13,&g_151},{&g_52[8],&g_151,&g_151,&g_52[8],(void*)0,(void*)0,(void*)0,&g_52[8],&g_151}};
    int i, j;
    (*g_195) = (**g_194);
    (*g_161) = l_216;
    return l_217[2][1];


}







static short func_20(int p_21, unsigned p_22, int p_23, unsigned p_24, int * p_25)
{
    int *l_199 = &g_52[8];
    char **l_210 = (void*)0;
    short *l_211 = (void*)0;
    short *l_212[8] = {&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213,&g_213};
    unsigned l_214 = 0x24FC960DL;
    int i;
    for (g_70 = (-15); (g_70 <= (-8)); g_70++)
    {
        int *l_193 = &g_52[5];
        unsigned *l_196[6][3] = {{&g_197,&g_197,&g_197},{&g_197,(void*)0,(void*)0},{&g_197,&g_197,&g_197},{&g_197,(void*)0,(void*)0},{&g_197,&g_197,&g_197},{&g_197,(void*)0,(void*)0}};
        int i, j;
        l_199 = ((**g_194) = func_34(&g_13, l_193, (g_198 = (!(g_197 = ((void*)0 == g_194))))));

        ;
        ;
        (***g_194) = func_47(l_199);
        for (p_22 = 0; (p_22 <= 6); p_22 += 1)
        {
            int i;
            return g_72[p_22];
        }
    }
    (**g_194) = func_34((**g_194), l_199, ((safe_mod_func_uint16_t_u_u(((*l_199) & (p_21 ^ (*l_199))), (g_213 = ((safe_add_func_uint16_t_u_u(g_93, (((safe_div_func_uint8_t_u_u((((*g_176) = p_23) && (((safe_rshift_func_int16_t_s_u((g_198 = (safe_rshift_func_uint16_t_u_s(((*l_199) >= ((void*)0 == l_210)), g_72[5]))), (*l_199))) || 0L) <= 0x4EL)), (*l_199))) < p_22) | p_22))) ^ p_22)))) || l_214));

    ;
    ;
    (***g_194) = (*g_12);
    return (*l_199);
}







static int func_30(int * p_31, int * p_32, char p_33)
{
    unsigned short l_138 = 0xD097L;
    int l_147 = (-2L);
    unsigned char l_157 = 0x6AL;
    if ((*p_32))
    {
        unsigned short *l_139 = (void*)0;
        int l_152 = 0L;
        int *l_154 = (void*)0;
        int **l_153 = &l_154;
        if (l_138)
        {
            return (*g_12);
        }
        else
        {
            unsigned short **l_140 = &g_136;
            unsigned short *l_142 = (void*)0;
            unsigned short **l_141 = &l_142;
            int *l_150[10] = {&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151};
            int i;
            (*p_32) = ((((*l_140) = l_139) != ((*l_141) = &g_72[2])) == ((g_52[8] || 0L) ^ (g_93 != (safe_div_func_uint8_t_u_u(((l_147 = (*g_12)) != (safe_div_func_int32_t_s_s(((g_151 = (*p_32)) < (g_52[5] > (l_152 < g_52[2]))), (*p_31)))), g_93)))));

            ;
            ;
        }

        ;
        (*l_153) = &g_52[8];

        ;
        (*g_12) = (*g_12);
        for (g_70 = (-20); (g_70 >= (-24)); g_70 = safe_sub_func_int32_t_s_s(g_70, 2))
        {
            (**l_153) = (*g_12);
            if (l_157)
                break;
        }
    }
    else
    {
        int *l_158 = &g_151;
        int l_178 = 0L;
        int **l_180 = &g_12;
        l_158 = &g_13;

        ;
        for (l_138 = 0; (l_138 <= 8); l_138 += 1)
        {
            unsigned char *l_160[8] = {(void*)0,&g_93,(void*)0,(void*)0,&g_93,(void*)0,(void*)0,&g_93};
            int *l_164[7];
            int **l_181[10] = {&l_164[4],&l_164[4],&l_164[4],&l_164[4],&l_164[4],&l_164[4],&l_164[4],&l_164[4],&l_164[4],&l_164[4]};
            int i;
            for (i = 0; i < 7; i++)
                l_164[i] = &g_52[8];
            for (p_33 = 0; (p_33 <= 8); p_33 += 1)
            {
                int *l_159 = &l_147;
                g_161 = func_34(l_159, &l_147, (&l_157 == l_160[1]));

                ;
                for (g_13 = 8; (g_13 >= 0); g_13 -= 1)
                {
                    int **l_162 = (void*)0;
                    int **l_163[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_163[i] = (void*)0;
                    l_164[4] = (void*)0;
                    for (g_70 = 6; (g_70 >= 2); g_70 -= 1)
                    {
                        int l_169 = 1L;
                        char *l_172 = (void*)0;
                        char *l_173 = &g_174;
                        char **l_175[9][3] = {{&l_172,&l_173,&l_173},{&l_172,&l_173,&l_172},{&l_173,&l_173,&l_172},{&l_172,&l_172,&l_172},{&l_173,&l_173,&l_173},{&l_172,&l_172,&l_172},{&l_172,&l_173,&l_172},{&l_173,&l_172,&l_172},{&l_172,&l_172,&l_173}};
                        int l_179 = 1L;
                        int i, j;
                        g_52[p_33] = ((((*l_173) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(l_169, 0x66L)), (safe_div_func_uint8_t_u_u(((*g_12) > (*l_159)), (*l_159)))))) ^ l_157) == ((((l_178 = ((g_52[3] ^ 0x39L) <= (((g_176 = &g_70) != (void*)0) | (-1L)))) ^ p_33) >= l_179) == p_33));

                        ;
                        (*g_161) = (*p_31);
                        (*g_161) = ((l_180 == &g_161) && (g_177 >= p_33));
                    }
                }
                if ((*p_31))
                    break;
            }


            p_32 = l_164[4];

            ;
            if ((g_52[l_138] = func_43(p_33, ((p_32 != (void*)0) || func_47(p_31)), (g_161 = p_31))))
            {
                g_161 = &g_151;

                ;
                for (l_147 = 6; (l_147 >= 0); l_147 -= 1)
                {
                    short l_184 = 0x62F2L;
                    unsigned char **l_185 = (void*)0;
                    unsigned char ***l_186 = &l_185;
                    for (l_178 = 9; (l_178 >= 3); l_178 -= 1)
                    {
                        int i;
                        if ((*p_31))
                            break;
                        if ((*g_12))
                            break;
                    }
                    (*p_31) = (safe_lshift_func_uint8_t_u_s(l_184, 7));
                    (*l_186) = l_185;
                    for (g_70 = 0; (g_70 <= 6); g_70 += 1)
                    {
                        (*g_12) = l_147;
                    }
                }
            }
            else
            {
                int l_187 = 0xB9CE0AD0L;
                int *l_189 = &g_13;
                for (g_93 = 0; (g_93 <= 6); g_93 += 1)
                {
                    (**l_180) = (*g_161);
                    (*g_12) = l_187;
                    for (p_33 = 6; (p_33 >= 0); p_33 -= 1)
                    {
                        return (*g_12);
                    }
                    l_189 = (g_188 = (g_161 = func_38(p_33)));

                    ;
                    ;
                    ;
                }

                ;
                for (g_151 = 0; (g_151 <= 6); g_151 += 1)
                {
                    p_32 = func_34(&g_13, &g_52[8], p_33);

                    ;
                    (*l_158) = (*g_161);
                    for (l_178 = 4; (l_178 >= 0); l_178 -= 1)
                    {
                        return (*g_161);
                    }
                }
                (*l_158) = func_43(p_33, (*g_12), (*l_180));
            }
        }

        ;

        (*l_158) = (*g_161);
    }

    ;
    ;

    (*g_12) = l_147;
    return l_157;
}







static int * func_34(int * p_35, int * p_36, unsigned p_37)
{
    short l_134 = (-5L);
    unsigned short *l_135 = &g_72[5];
    int *l_137 = &g_52[8];
    p_35 = func_38((safe_add_func_int8_t_s_s(l_134, ((g_136 = l_135) != l_135))));

    ;
    ;
    return l_137;


}







static int * func_38(unsigned p_39)
{
    (*g_12) = p_39;
    return &g_52[8];


}







static unsigned short func_43(short p_44, int p_45, int * p_46)
{
    int *l_49 = (void*)0;
    (*g_12) = func_47(l_49);
    return g_13;
}







static int func_47(int * p_48)
{
    int l_50 = 0xC295A527L;
    int *l_51 = &g_52[8];
    unsigned l_73[8][10][3] = {{{0xBABE4A9FL,4294967295UL,1UL},{0x9E06D3C1L,0xE4B4BC07L,0xE7EBAC3FL},{0xE42BF625L,0xAA6B35EDL,4294967292UL},{4294967292UL,0xB5978FFCL,7UL},{1UL,0x08A7CF5EL,0UL},{0x8E6F95D9L,0x93538B87L,0xE4B39C2DL},{5UL,1UL,1UL},{3UL,8UL,4294967290UL},{0UL,0x507BCD5AL,5UL},{4UL,4UL,4294967295UL}},{{1UL,0xE42BF625L,4294967295UL},{0xF49CF94AL,1UL,8UL},{1UL,0UL,0x6F6EC374L},{0x86225270L,0xF49CF94AL,8UL},{0xB16E5D1CL,0x900DD038L,4294967295UL},{0xCA2AE39BL,6UL,4294967295UL},{4294967295UL,0x3F477944L,5UL},{0xB5978FFCL,4294967295UL,4294967290UL},{0x6F6EC374L,0UL,1UL},{0xA9D45C54L,1UL,0xE4B39C2DL}},{{0x6FF57863L,4294967288UL,0UL},{4294967290UL,0xE4B39C2DL,7UL},{0xFE0EC928L,0x6B31B79EL,4294967292UL},{4294967289UL,0xC46406CCL,0xE7EBAC3FL},{4294967292UL,4294967295UL,1UL},{0x4114ABDCL,7UL,0xF49CF94AL},{0x6FF57863L,0UL,0UL},{4294967295UL,4294967292UL,0x8E6F95D9L},{0x900DD038L,1UL,0xBABE4A9FL},{0x07968679L,4294967292UL,7UL}},{{0x26B30262L,0x864CC439L,0xFE0EC928L},{0x86225270L,4294967292UL,4294967290UL},{0UL,1UL,0UL},{0xE4B39C2DL,4294967292UL,4294967286UL},{4294967295UL,0UL,0x26B30262L},{0xB8BF5144L,7UL,6UL},{4294967295UL,8UL,0x507BCD5AL},{4294967287UL,4294967286UL,0xBBB80EAEL},{0x7F440AFAL,1UL,0x5E570971L},{1UL,4294967295UL,0x889E4E2CL}},{{4294967292UL,0xE42BF625L,0x65E429B0L},{3UL,0x2ABF7713L,7UL},{0UL,0xFE0EC928L,0xF1D39FA4L},{0xB5978FFCL,9UL,1UL},{1UL,0x104E0BBEL,1UL},{0xF49CF94AL,0xEAF53593L,1UL},{0x104E0BBEL,4294967292UL,1UL},{0x9E06D3C1L,0x20C99D02L,4294967290UL},{1UL,0xD48947DEL,0UL},{0x9E06D3C1L,0xB8BF5144L,0x07968679L}},{{0x104E0BBEL,0x6B31B79EL,4294967295UL},{0xF49CF94AL,8UL,5UL},{1UL,0xAA6B35EDL,1UL},{0xB5978FFCL,0UL,8UL},{0UL,5UL,0xE42BF625L},{3UL,0xF49CF94AL,4294967295UL},{4294967292UL,0x6FF57863L,0xFE0EC928L},{1UL,4294967292UL,0xBBB80EAEL},{0x08A7CF5EL,6UL,0xD48947DEL},{4294967295UL,0x20C99D02L,0xE4B39C2DL}},{{1UL,4294967286UL,1UL},{0xBBB80EAEL,4294967290UL,4294967295UL},{4294967293UL,4294967293UL,0x5E570971L},{0x20C99D02L,0x93538B87L,0xC46406CCL},{0x3F477944L,0x65E429B0L,1UL},{4UL,1UL,9UL},{4294967295UL,0x3F477944L,1UL},{4294967292UL,4294967290UL,0xC46406CCL},{0x6FF57863L,4294967292UL,0x5E570971L},{4294967295UL,0x2ABF7713L,4294967295UL}},{{4294967295UL,0xB16E5D1CL,1UL},{9UL,5UL,0xE4B39C2DL},{1UL,5UL,0xD48947DEL},{4UL,7UL,0xBBB80EAEL},{4294967292UL,0xD48947DEL,0xFE0EC928L},{8UL,0xF49CF94AL,0x86225270L},{0x864CC439L,0x7F440AFAL,0x507BCD5AL},{0x86225270L,0xC46406CCL,4294967287UL},{0x784865E5L,0UL,6UL},{4294967292UL,0x16E5DCA5L,0x16E5DCA5L}}};
    unsigned l_105 = 0x58AC2CC2L;
    char l_125[6] = {2L,0x38L,2L,2L,0x38L,2L};
    char l_128 = 0x20L;
    int i, j, k;
    (*l_51) = (1L > ((*g_12) = l_50));
    for (g_13 = 1; (g_13 == 4); g_13 = safe_add_func_uint8_t_u_u(g_13, 7))
    {
        int l_67 = 8L;
        for (l_50 = 0; (l_50 <= 8); l_50 += 1)
        {
            unsigned short *l_71[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            char *l_112 = &g_70;
            char **l_111 = &l_112;
            unsigned l_120 = 4294967295UL;
            int i;
        }
        p_48 = p_48;
    }
    return l_128;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_614[i][j][k], "g_614[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_697[i], "g_697[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_803, "g_803", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
