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



static unsigned short g_7[3][7] = {{0x067EL,0x0FE1L,0x067EL,0x067EL,0x0FE1L,0x067EL,0x067EL},{0x07B5L,0x07B5L,0x1C0FL,0x07B5L,0x07B5L,0x1C0FL,0x07B5L},{0x0FE1L,0x067EL,0x067EL,0x0FE1L,0x067EL,0x067EL,0x0FE1L}};
static unsigned g_38 = 4294967295UL;
static char g_43 = 0x1AL;
static int g_46 = 1L;
static int *g_45 = &g_46;
static int g_86 = 0x1F73439DL;
static int g_88 = 0L;
static unsigned *g_107[10] = {&g_38,&g_38,&g_38,&g_38,&g_38,&g_38,&g_38,&g_38,&g_38,&g_38};
static int g_122 = 0x7E61D9E4L;
static short g_176 = 0x2546L;
static int g_188 = 7L;
static int g_195 = 0xC0B3C359L;
static unsigned char g_197 = 7UL;
static char *g_228 = &g_43;
static char **g_227 = &g_228;
static unsigned short *g_237[4][9] = {{&g_7[1][5],&g_7[2][3],&g_7[1][6],(void*)0,(void*)0,&g_7[1][6],&g_7[2][3],&g_7[1][5],&g_7[2][5]},{(void*)0,&g_7[0][2],&g_7[2][5],&g_7[2][5],(void*)0,&g_7[2][5],&g_7[2][3],(void*)0,(void*)0},{&g_7[2][5],(void*)0,&g_7[1][5],&g_7[2][5],&g_7[1][5],(void*)0,&g_7[2][5],(void*)0,&g_7[1][6]},{(void*)0,&g_7[2][5],&g_7[2][5],&g_7[2][5],(void*)0,&g_7[1][0],&g_7[0][2],&g_7[1][5],&g_7[0][2]}};
static unsigned short **g_236 = &g_237[2][7];
static unsigned g_268[1] = {2UL};
static int g_279[3][7] = {{5L,7L,7L,5L,5L,7L,7L},{(-4L),1L,(-4L),1L,(-4L),1L,(-4L)},{5L,5L,7L,7L,5L,5L,7L}};
static short g_301 = 0x7C67L;
static unsigned short g_302 = 0x42CDL;
static char *g_335 = &g_43;
static char g_347 = 0x93L;
static char g_349 = 0x1FL;
static char g_351 = 0L;
static unsigned char g_369 = 0xEFL;
static int g_372 = 9L;
static unsigned g_373 = 4294967287UL;
static short g_387 = 0L;
static char **g_412 = &g_228;
static char ***g_411[8][7][4] = {{{&g_412,(void*)0,&g_412,&g_412},{(void*)0,&g_412,&g_412,&g_412},{&g_412,(void*)0,(void*)0,&g_412},{&g_412,(void*)0,&g_412,(void*)0},{&g_412,(void*)0,(void*)0,&g_412},{&g_412,(void*)0,&g_412,&g_412},{&g_412,&g_412,(void*)0,&g_412}},{{&g_412,(void*)0,&g_412,&g_412},{(void*)0,&g_412,&g_412,&g_412},{&g_412,&g_412,&g_412,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_412,&g_412,&g_412,(void*)0},{(void*)0,&g_412,&g_412,(void*)0},{&g_412,&g_412,(void*)0,&g_412}},{{(void*)0,&g_412,&g_412,&g_412},{&g_412,(void*)0,(void*)0,(void*)0},{&g_412,(void*)0,&g_412,&g_412},{(void*)0,(void*)0,&g_412,(void*)0},{(void*)0,(void*)0,&g_412,(void*)0},{&g_412,&g_412,&g_412,&g_412},{(void*)0,&g_412,&g_412,&g_412}},{{(void*)0,&g_412,&g_412,(void*)0},{&g_412,(void*)0,(void*)0,(void*)0},{&g_412,&g_412,&g_412,&g_412},{(void*)0,&g_412,(void*)0,&g_412},{&g_412,(void*)0,&g_412,&g_412},{(void*)0,&g_412,(void*)0,&g_412},{(void*)0,(void*)0,&g_412,&g_412}},{{&g_412,&g_412,(void*)0,&g_412},{&g_412,&g_412,&g_412,(void*)0},{&g_412,(void*)0,(void*)0,(void*)0},{(void*)0,&g_412,&g_412,&g_412},{(void*)0,&g_412,&g_412,&g_412},{(void*)0,&g_412,&g_412,(void*)0},{(void*)0,(void*)0,&g_412,(void*)0}},{{(void*)0,(void*)0,&g_412,&g_412},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_412,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_412,&g_412,&g_412,(void*)0},{(void*)0,&g_412,&g_412,&g_412},{&g_412,&g_412,(void*)0,(void*)0}},{{&g_412,&g_412,&g_412,(void*)0},{&g_412,(void*)0,&g_412,(void*)0},{(void*)0,(void*)0,(void*)0,&g_412},{&g_412,&g_412,&g_412,(void*)0},{&g_412,&g_412,&g_412,(void*)0},{&g_412,&g_412,&g_412,&g_412},{&g_412,&g_412,&g_412,&g_412}},{{&g_412,(void*)0,&g_412,(void*)0},{&g_412,(void*)0,&g_412,&g_412},{&g_412,&g_412,(void*)0,(void*)0},{(void*)0,&g_412,&g_412,(void*)0},{&g_412,(void*)0,&g_412,&g_412},{&g_412,(void*)0,(void*)0,(void*)0},{&g_412,&g_412,&g_412,(void*)0}}};
static int g_437 = 0L;
static char g_478[7][4][7] = {{{0xDEL,0xA7L,(-10L),0x6BL,(-10L),0xA7L,0xDEL},{(-2L),6L,0x54L,(-1L),(-1L),0x54L,6L},{(-1L),0xA7L,(-10L),0x7BL,(-1L),0x7BL,(-10L)},{(-1L),1L,0x54L,0x50L,(-2L),(-2L),0x50L}},{{(-10L),0x2EL,(-10L),0x7BL,0xDEL,0x2EL,0xDEL},{1L,0x50L,6L,(-1L),(-2L),1L,1L},{(-1L),0x6BL,1L,0x6BL,(-1L),0x2EL,1L},{0xA3L,1L,0x50L,6L,(-1L),(-2L),1L}},{{0xDEL,0x7BL,(-10L),0x2EL,(-10L),0x7BL,0xDEL},{0xA3L,6L,1L,(-1L),1L,0x54L,0x50L},{(-1L),0x7BL,(-10L),0xA7L,(-1L),0xA7L,(-10L)},{1L,1L,1L,0x50L,0xA3L,(-2L),6L}},{{(-10L),0x6BL,(-10L),0xA7L,0xDEL,0x6BL,0xDEL},{(-1L),0x50L,0x50L,(-1L),0xA3L,1L,0x54L},{(-1L),0x2EL,1L,0x2EL,(-1L),0x6BL,1L},{(-2L),1L,6L,6L,1L,(-2L),0x54L}},{{0xDEL,0xA7L,(-10L),0x6BL,(-10L),0xA7L,0xDEL},{(-2L),6L,0x54L,(-1L),(-1L),0x54L,6L},{(-1L),0xA7L,(-10L),0x7BL,(-1L),0x7BL,(-10L)},{(-1L),1L,0x54L,0x50L,(-2L),(-2L),0x50L}},{{(-10L),0x2EL,(-10L),0x7BL,0xDEL,0x2EL,0xDEL},{1L,0x50L,6L,(-1L),(-2L),1L,1L},{(-1L),0x6BL,1L,0x6BL,(-1L),0x2EL,1L},{0xA3L,1L,0x50L,6L,(-1L),(-2L),1L}},{{0xDEL,0x7BL,(-10L),0x2EL,(-10L),0x7BL,0xDEL},{0xA3L,6L,1L,(-1L),1L,0x54L,0x50L},{(-1L),0x7BL,(-10L),0xA7L,(-1L),0xA7L,(-10L)},{1L,1L,1L,0x50L,0xA3L,(-2L),6L}}};
static unsigned g_491 = 0UL;
static unsigned g_499 = 6UL;
static int g_502 = 0x0A74E29AL;
static unsigned g_526 = 0xF93EBF27L;
static unsigned g_607[3] = {0x9E759B4AL,0x9E759B4AL,0x9E759B4AL};
static char g_613 = 0xC8L;
static int g_614[4][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L}};
static unsigned char *g_627 = &g_369;
static int g_628 = 0x4442EE99L;
static unsigned ***g_632[1] = {(void*)0};
static unsigned **g_659 = &g_107[6];
static unsigned ***g_658 = &g_659;
static unsigned g_664 = 1UL;
static short g_691 = 0L;
static unsigned char g_693[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
static int *g_724 = &g_502;
static int **g_723 = &g_724;
static int *g_759[9] = {&g_614[2][0],&g_614[2][0],&g_614[2][0],&g_614[2][0],&g_614[2][0],&g_614[2][0],&g_614[2][0],&g_614[2][0],&g_614[2][0]};
static unsigned char **g_781[1][8][8] = {{{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627},{&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627,&g_627}}};
static unsigned char ***g_780 = &g_781[0][0][3];
static unsigned g_836 = 1UL;
static unsigned char g_857 = 5UL;
static int g_859 = 0xB857E877L;
static short g_892 = 1L;
static int *g_928 = &g_614[2][0];
static unsigned g_934 = 4294967290UL;
static short *g_1021 = &g_301;
static short **g_1020[8][3][7] = {{{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021}},{{(void*)0,&g_1021,(void*)0,&g_1021,(void*)0,&g_1021,(void*)0},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021}},{{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{(void*)0,&g_1021,(void*)0,&g_1021,(void*)0,&g_1021,(void*)0},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021}},{{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{(void*)0,&g_1021,(void*)0,&g_1021,(void*)0,&g_1021,(void*)0}},{{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021}},{{(void*)0,&g_1021,(void*)0,&g_1021,(void*)0,&g_1021,(void*)0},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021}},{{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{(void*)0,&g_1021,(void*)0,&g_1021,(void*)0,&g_1021,(void*)0},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021}},{{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021,&g_1021},{(void*)0,&g_1021,(void*)0,&g_1021,(void*)0,&g_1021,(void*)0}}};
static unsigned short ***g_1101 = &g_236;
static unsigned short ****g_1100 = &g_1101;
static unsigned short **g_1104 = &g_237[2][7];
static unsigned char g_1187 = 1UL;
static int **g_1239 = (void*)0;
static unsigned g_1256 = 0UL;
static char g_1261 = 0L;
static unsigned *g_1369 = &g_1256;
static unsigned **g_1368 = &g_1369;
static unsigned short g_1449 = 65534UL;
static unsigned char g_1478 = 0x6BL;
static unsigned short g_1489 = 0UL;
static int *g_1491[10][4][1] = {{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}},{{&g_195},{&g_628},{&g_195},{&g_86}}};
static unsigned char g_1534[4] = {0x64L,0x64L,0x64L,0x64L};



static unsigned short func_1(void);
static int * func_2(int * p_3, unsigned char p_4);
static int * func_5(int * p_6);
static unsigned func_12(int * p_13, unsigned p_14, int p_15);
static short func_19(int * p_20, short p_21, int * p_22, short p_23, short p_24);
static int * func_25(char p_26, unsigned short p_27, unsigned short p_28, int * p_29);
static unsigned * func_51(int p_52);
static char func_60(unsigned p_61, unsigned p_62);
static unsigned func_63(unsigned p_64, unsigned * p_65, short p_66);
static unsigned * func_77(int * p_78, char p_79);
static unsigned short func_1(void)
{
    unsigned l_18 = 0xB6FE6D39L;
    int l_36 = (-10L);
    unsigned *l_37[2];
    int l_41 = 0x684ABF0AL;
    char *l_42[5] = {&g_43,&g_43,&g_43,&g_43,&g_43};
    short l_44[1];
    int l_1426 = (-7L);
    int **l_1480 = &g_45;
    int i;
    for (i = 0; i < 2; i++)
        l_37[i] = &g_38;
    for (i = 0; i < 1; i++)
        l_44[i] = 0xC4CEL;
    (*l_1480) = func_2(((*l_1480) = func_5((((g_7[2][5] , g_7[1][5]) , g_7[2][1]) , (((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(func_12(((safe_rshift_func_int16_t_s_s((l_18 & (func_19(func_25((l_44[0] ^= (((safe_add_func_uint32_t_u_u(l_18, (l_41 = (g_7[1][3] , (safe_mod_func_uint8_t_u_u((((((safe_add_func_uint32_t_u_u((g_38++), g_7[2][5])) ^ ((void*)0 != l_37[1])) , 4294967287UL) , g_38) >= l_36), 0x0CL)))))) && l_41) || g_38)), l_18, g_7[1][4], g_45), l_18, l_37[1], l_18, l_18) == 0x8597L)), 1)) , &g_628), l_1426, l_18), 0x44772466L)) >= l_18), 3)) != 0x68C9L) , &g_195)))), (***g_780));
    (*g_928) |= (safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((**l_1480), g_1534[0])) >= (**l_1480)), (**l_1480))), 12)), (**g_227)));
    return (**l_1480);
}







static int * func_2(int * p_3, unsigned char p_4)
{
    int l_1481 = 0L;
    unsigned short ***l_1482 = &g_1104;
    int l_1483 = 0xA099C9EBL;
    unsigned ***l_1487 = &g_1368;
    short l_1488 = 1L;
    int **l_1490 = &g_45;
    unsigned l_1509 = 2UL;
    unsigned l_1524 = 0xB08AAFE5L;
    if (((*g_928) = (l_1481 == ((func_19(func_25((l_1481 != 0xACL), (l_1483 = ((void*)0 != l_1482)), p_4, ((*l_1490) = ((func_19(&l_1481, ((*g_1021) = (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_u(((((((&g_1369 == ((*l_1487) = (void*)0)) , 0x2F66L) > p_4) , 0x6EL) & 0x8EL) != p_4), l_1481)) | l_1488)))), p_3, l_1488, p_4) ^ g_1489) , &l_1481))), p_4, g_1491[5][3][0], p_4, l_1481) > 0x30FCL) & 1L))))
    {
        char l_1501 = (-6L);
        for (g_1489 = 0; (g_1489 < 13); ++g_1489)
        {
            unsigned l_1498 = 0x732DFDDBL;
            int l_1504 = 0x6CDFCF67L;
            l_1509 &= (((*g_928) ^= ((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_1498, ((*g_45) ^ 0x31BA1774L))), 2)) ^ ((safe_sub_func_int32_t_s_s(l_1501, (safe_add_func_int8_t_s_s((l_1504 |= (**g_227)), ((((p_4 ^ ((safe_add_func_int16_t_s_s(l_1498, (safe_mod_func_uint32_t_u_u((l_1498 , 0xBC207D5EL), (**l_1490))))) && l_1498)) <= 0x42L) | 1UL) & p_4))))) == 0xA5L)) , (-7L)) , (*p_3))) | p_4);
        }
    }
    else
    {
        char l_1512 = 0x43L;
        unsigned l_1513 = 0x890399EDL;
        unsigned *l_1516 = &g_373;
        int l_1523[7] = {0x42C39A89L,(-6L),0x42C39A89L,0x42C39A89L,(-6L),0x42C39A89L,0x42C39A89L};
        int i;
        if ((safe_add_func_uint32_t_u_u(((**l_1490) = 0xE79BDA5DL), (((p_4 & (l_1512 == (p_4 & l_1513))) && (safe_lshift_func_uint16_t_u_u((!(((((*l_1516)++) > (((l_1523[6] = ((safe_add_func_uint16_t_u_u(l_1512, (safe_mod_func_uint8_t_u_u(0xE8L, (***g_780))))) & p_4)) | l_1524) , 4294967286UL)) , p_4) == (*p_3))), 12))) < p_4))))
        {
            int *l_1525 = &g_88;
            return l_1525;
        }
        else
        {
            return p_3;
        }
    }
    return p_3;
}







static int * func_5(int * p_6)
{
    int **l_1451 = (void*)0;
    int ***l_1452 = &l_1451;
    int *l_1453 = &g_614[2][0];
    int *l_1454[2];
    short l_1455 = 1L;
    int l_1456 = 0x9408B21AL;
    char l_1457 = 7L;
    int l_1458[1];
    int l_1459 = 0x41A206B7L;
    unsigned short l_1460 = 0xD505L;
    unsigned char l_1465 = 247UL;
    unsigned *l_1472 = &g_268[0];
    unsigned l_1473 = 0x007B7C52L;
    unsigned short *l_1474 = (void*)0;
    unsigned short *l_1475 = &g_1449;
    unsigned char *l_1476 = (void*)0;
    unsigned char *l_1477[3][5][8] = {{{(void*)0,(void*)0,&g_693[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1187,&g_1187,(void*)0,&g_693[5],(void*)0,&g_693[5],(void*)0},{&g_1187,&g_693[5],&g_1187,(void*)0,&g_693[0],&g_693[0],(void*)0,&g_1187},{&g_693[5],&g_693[5],&g_693[0],(void*)0,&g_693[2],(void*)0,&g_693[0],&g_693[5]},{&g_693[5],&g_1187,(void*)0,&g_693[0],&g_693[0],(void*)0,&g_1187,&g_693[5]}},{{&g_1187,(void*)0,&g_693[5],(void*)0,&g_693[5],(void*)0,&g_1187,&g_1187},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_693[0],(void*)0},{(void*)0,(void*)0,&g_693[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1187,&g_1187,(void*)0,&g_693[5],(void*)0,&g_693[5],(void*)0},{(void*)0,&g_693[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_693[0],&g_693[0],(void*)0,&g_1187,&g_693[5],&g_1187,(void*)0,&g_693[0]},{&g_693[0],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_693[0]},{(void*)0,&g_693[2],&g_693[0],&g_1187,&g_693[0],&g_693[2],(void*)0,(void*)0},{&g_693[2],&g_1187,(void*)0,(void*)0,&g_1187,&g_693[2],(void*)0,&g_693[2]},{&g_1187,&g_693[2],(void*)0,&g_693[2],&g_1187,(void*)0,(void*)0,&g_1187}}};
    unsigned l_1479 = 0xC0935631L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1454[i] = &g_188;
    for (i = 0; i < 1; i++)
        l_1458[i] = 0x23F71567L;
    (*l_1452) = l_1451;
    l_1460++;
    (*p_6) = ((*l_1453) > ((safe_sub_func_uint32_t_u_u((l_1465 ^ ((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((***g_780), 6)), ((g_1478 ^= (func_60(((*l_1472) = (*l_1453)), (*g_1369)) & ((*l_1475) = l_1473))) , (*l_1453)))) <= (***g_780)), 65527UL)) > 0xF04FL)), l_1479)) ^ 0x99B18410L));
    return &g_86;
}







static unsigned func_12(int * p_13, unsigned p_14, int p_15)
{
    int l_1427 = 0xBFB58F16L;
    int *l_1434 = &g_188;
    short *l_1435 = (void*)0;
    short *l_1436 = (void*)0;
    short *l_1437[10];
    unsigned *l_1446 = &g_268[0];
    int *l_1447 = (void*)0;
    short l_1448 = 5L;
    int l_1450 = (-6L);
    int i;
    for (i = 0; i < 10; i++)
        l_1437[i] = &g_691;
    (*l_1434) = ((*g_45) |= ((*g_928) = (l_1427 , ((*p_13) |= (safe_mod_func_uint32_t_u_u(((*l_1446) = (l_1427 != (safe_rshift_func_int8_t_s_u((p_14 != ((!p_15) > l_1427)), func_19(l_1434, ((*l_1434) |= (+(*g_1021))), l_1434, func_19(func_25((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int16_t_s_s((!(safe_add_func_uint16_t_u_u(p_14, l_1427))), p_15)) & 0x22413819L) ^ p_15) , p_14), p_14)), l_1427, l_1427, l_1447), l_1448, l_1434, g_1449, (*g_1021)), l_1450))))), 0x5CCB3A96L))))));
    return (*l_1434);
}







static short func_19(int * p_20, short p_21, int * p_22, short p_23, short p_24)
{
    char *l_1208 = (void*)0;
    int l_1211[4];
    unsigned *l_1234 = &g_526;
    unsigned short l_1249 = 1UL;
    int l_1254 = 0x4AAD14D7L;
    int l_1255 = 0xC9DCE49AL;
    short l_1265 = 0xA6BDL;
    unsigned l_1266[4][8][8] = {{{0xC14908B6L,5UL,4294967295UL,0xC14908B6L,0xFDE8E6CEL,4294967295UL,0x4FAE86BEL,7UL},{0x57B7B532L,0x2A40307CL,0x4FFE135EL,1UL,0x558B089EL,1UL,0x4FFE135EL,0x2A40307CL},{5UL,4294967295UL,0xDEC4DBF0L,4294967294UL,4294967290UL,0x3E03D323L,0xA79E5097L,1UL},{7UL,5UL,0x3B0033FCL,0x1AD3B0D7L,5UL,1UL,0xA79E5097L,0x558B089EL},{0x1E2F24DEL,0x1AD3B0D7L,0xDEC4DBF0L,0x3E03D323L,4294967294UL,0x57B7B532L,0x4FFE135EL,4294967289UL},{4294967294UL,0x57B7B532L,0x4FFE135EL,4294967289UL,0xDEC4DBF0L,0x3D69960DL,0x4FAE86BEL,0UL},{0x3D69960DL,0UL,0x2A40307CL,0x3E03D323L,0x3E03D323L,0x2A40307CL,0UL,0x3D69960DL},{0x3B0033FCL,0x5B0BEB9AL,1UL,0UL,0UL,1UL,0x6D865F15L,0UL}},{{1UL,4294967287UL,4294967292UL,0x1E2F24DEL,0UL,1UL,0x4FFE135EL,0x454A89B7L},{0x57B7B532L,0x5B0BEB9AL,0x4FAE86BEL,4294967290UL,4294967295UL,0x2A40307CL,4294967290UL,0x1E2F24DEL},{0x454A89B7L,0UL,4294967287UL,0x3B0033FCL,0xDEC4DBF0L,4294967295UL,0UL,0x57B7B532L},{4294967295UL,0UL,4294967292UL,0UL,4294967292UL,0UL,4294967295UL,1UL},{0x4FFE135EL,0x3E03D323L,7UL,0x3D69960DL,0x1E2F24DEL,0x558B089EL,0UL,0x1E2F24DEL},{0UL,4294967295UL,0x6D865F15L,0UL,0x1E2F24DEL,4294967295UL,1UL,0UL},{0x4FFE135EL,1UL,0UL,0x1E2F24DEL,4294967292UL,4294967287UL,1UL,1UL},{4294967295UL,0UL,0x558B089EL,1UL,0xDEC4DBF0L,5UL,0x3D69960DL,0x3D69960DL}},{{0x454A89B7L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x454A89B7L,0x3B0033FCL,1UL},{0x57B7B532L,4294967295UL,0x454A89B7L,0x5B0BEB9AL,0UL,0UL,1UL,0x6D865F15L},{0x3D69960DL,1UL,0x1AD3B0D7L,4294967295UL,1UL,5UL,0x4FFE135EL,0x1E2F24DEL},{4294967295UL,1UL,1UL,4294967295UL,0x5B0BEB9AL,1UL,4294967292UL,0x3E03D323L},{0x3E03D323L,0x6D865F15L,0x454A89B7L,0x3D69960DL,4294967292UL,0UL,0UL,0UL},{0x3D69960DL,0x57B7B532L,0x4FAE86BEL,0x57B7B532L,0x3D69960DL,4294967295UL,1UL,1UL},{0UL,4294967295UL,1UL,1UL,0UL,1UL,1UL,0x57B7B532L},{1UL,4294967292UL,1UL,0x3E03D323L,0x454A89B7L,4294967295UL,1UL,0UL}},{{0UL,1UL,0x4FAE86BEL,1UL,0x1E2F24DEL,0xA79E5097L,0UL,0x4FFE135EL},{0UL,0x5B0BEB9AL,0x454A89B7L,4294967295UL,0x57B7B532L,4294967292UL,4294967292UL,0x57B7B532L},{0xDEC4DBF0L,1UL,1UL,0xDEC4DBF0L,1UL,0x6D865F15L,0x4FFE135EL,4294967292UL},{1UL,4294967290UL,0x1AD3B0D7L,0x57B7B532L,0x1E2F24DEL,0x47896E3BL,0x3D69960DL,4294967290UL},{1UL,4294967290UL,4294967292UL,0x3B0033FCL,0UL,0x6D865F15L,4294967295UL,0x3E03D323L},{1UL,1UL,4294967295UL,0x5B0BEB9AL,1UL,4294967292UL,4294967295UL,0x47896E3BL},{0UL,0x6D865F15L,0x1E2F24DEL,1UL,4294967295UL,0x3D69960DL,4294967295UL,1UL},{4294967289UL,0x3B0033FCL,4294967289UL,0xC14908B6L,4294967287UL,0x2A40307CL,0xA79E5097L,1UL}}};
    unsigned l_1274 = 4294967287UL;
    unsigned char l_1284 = 0UL;
    short l_1332[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    unsigned char l_1336 = 255UL;
    char **l_1387 = &g_228;
    int l_1411[9] = {(-4L),1L,1L,(-4L),1L,1L,(-4L),1L,1L};
    unsigned l_1423[9][7][1] = {{{0xD56BF81CL},{1UL},{4294967295UL},{4294967289UL},{9UL},{0x860EF50CL},{9UL}},{{4294967289UL},{4294967295UL},{1UL},{0xD56BF81CL},{0UL},{1UL},{0UL}},{{0xD56BF81CL},{1UL},{4294967295UL},{4294967289UL},{9UL},{0x860EF50CL},{9UL}},{{4294967289UL},{4294967295UL},{1UL},{0xD56BF81CL},{0UL},{1UL},{0UL}},{{0xD56BF81CL},{1UL},{4294967295UL},{4294967289UL},{9UL},{0x860EF50CL},{9UL}},{{4294967289UL},{4294967295UL},{1UL},{0xD56BF81CL},{0UL},{1UL},{0UL}},{{0xD56BF81CL},{1UL},{4294967295UL},{4294967289UL},{9UL},{0x860EF50CL},{9UL}},{{4294967289UL},{4294967295UL},{1UL},{0xD56BF81CL},{0UL},{1UL},{0UL}},{{0xD56BF81CL},{1UL},{4294967295UL},{4294967289UL},{0x1A975D50L},{4294967289UL},{0x1A975D50L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1211[i] = 0x941E8E0EL;
    for (g_502 = (-3); (g_502 == 19); g_502 = safe_add_func_uint32_t_u_u(g_502, 6))
    {
        unsigned l_1212 = 0x320C2231L;
        int *l_1241 = &l_1211[3];
        char **l_1259 = &l_1208;
        int l_1264 = 0x833B64AAL;
        int l_1269 = (-9L);
        int l_1270 = 0x7C710E38L;
        int l_1271[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_1273 = 0x0BD06791L;
        unsigned *l_1306 = (void*)0;
        unsigned short **l_1318 = &g_237[2][7];
        unsigned l_1419 = 0xA53E2A1AL;
        int i;
    }
    return p_23;
}







static int * func_25(char p_26, unsigned short p_27, unsigned short p_28, int * p_29)
{
    short l_687 = 8L;
    int l_689 = 0xE872DAC8L;
    char *l_690[9][4] = {{&g_347,&g_347,&g_478[1][2][4],&g_478[1][2][4]},{(void*)0,(void*)0,&g_478[1][2][4],&g_478[1][2][4]},{&g_347,&g_478[1][2][4],(void*)0,&g_347},{&g_351,(void*)0,&g_478[1][2][4],(void*)0},{&g_478[1][2][4],(void*)0,&g_351,&g_347},{(void*)0,&g_478[1][2][4],&g_347,&g_478[1][2][4]},{&g_478[1][2][4],(void*)0,(void*)0,&g_478[1][2][4]},{&g_478[1][2][4],&g_347,&g_347,&g_478[1][2][4]},{(void*)0,&g_478[1][2][4],&g_351,&g_347}};
    short l_698 = 0xD6A8L;
    int l_699 = (-5L);
    unsigned short l_700 = 65532UL;
    unsigned short **l_718 = (void*)0;
    char l_725 = 0x5FL;
    int l_752 = 0xE26DDDBEL;
    char l_773 = 0x51L;
    int l_805 = 1L;
    unsigned **l_819 = (void*)0;
    int l_835[2];
    int **l_977 = &g_724;
    unsigned short l_981 = 0UL;
    int l_1046 = 0x868D7A9AL;
    int l_1086[1][4];
    unsigned short l_1139 = 0x2018L;
    unsigned char l_1160 = 4UL;
    unsigned l_1167 = 0xB6C4E670L;
    int l_1186 = 0L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_835[i] = (-9L);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1086[i][j] = 0L;
    }
    for (p_27 = 0; (p_27 != 55); ++p_27)
    {
        unsigned *l_666 = &g_268[0];
        int l_688[4] = {(-1L),(-1L),(-1L),(-1L)};
        int l_694 = 0xAA3616C3L;
        int *l_721 = &g_502;
        int **l_720 = &l_721;
        unsigned char l_729 = 0UL;
        char l_784 = (-6L);
        unsigned l_834 = 6UL;
        int l_846 = 0xCAEEE53DL;
        unsigned char ***l_856 = &g_781[0][0][3];
        int l_860 = (-4L);
        int *l_937 = &g_628;
        short *l_1019 = &g_691;
        short **l_1018 = &l_1019;
        unsigned short ***l_1027 = (void*)0;
        short l_1033 = 0L;
        unsigned short l_1082 = 0x8395L;
        unsigned short **l_1103 = &g_237[2][4];
        int i;
    }
    return &g_195;
}







static unsigned * func_51(int p_52)
{
    unsigned l_53 = 0xD69FDB81L;
    char *l_71[10][7][1] = {{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}},{{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43},{&g_43}}};
    unsigned l_81 = 0x4A8A5A2DL;
    short *l_417 = &g_176;
    int l_422[5] = {0x7013C0B0L,0x7013C0B0L,0x7013C0B0L,0x7013C0B0L,0x7013C0B0L};
    unsigned l_434 = 0x85E2C5DCL;
    char l_515[5][2][10] = {{{0xFBL,0xFBL,(-9L),(-9L),0xA7L,(-9L),0xA7L,(-9L),(-9L),0xFBL},{0xA7L,0x3FL,0L,0xA7L,0L,0L,0xA7L,0L,0x3FL,0xA7L}},{{0L,0xFBL,0x3FL,0L,0xFBL,0L,0x3FL,0xFBL,0L,0L},{0xA7L,(-9L),(-9L),0xFBL,0xFBL,(-9L),(-9L),0xA7L,(-9L),0xA7L}},{{0xFBL,0x3FL,0L,0xFBL,0L,0x3FL,0xFBL,0L,0L,0xFBL},{0L,0xA7L,0L,0L,0xA7L,0L,0x3FL,0xA7L,0x3FL,0L}},{{(-9L),0xA7L,(-4L),(-9L),0xFBL,(-4L),0xA7L,0xA7L,(-4L),0xFBL},{0xFBL,0L,0L,0xFBL,0x3FL,0L,0xFBL,0L,0x3FL,0xFBL}},{{0L,0xFBL,0L,0x3FL,0xFBL,0L,0L,0xFBL,0x3FL,0L},{0xA7L,0xA7L,(-4L),0xFBL,(-9L),(-4L),(-9L),0xFBL,(-4L),0xA7L}}};
    unsigned **l_563[7] = {&g_107[7],(void*)0,(void*)0,&g_107[7],(void*)0,(void*)0,&g_107[7]};
    int *l_571[4][7][4] = {{{&g_195,&l_422[3],(void*)0,&l_422[3]},{&l_422[3],(void*)0,(void*)0,(void*)0},{&g_195,&g_195,&l_422[3],(void*)0},{(void*)0,(void*)0,(void*)0,&l_422[3]},{(void*)0,&l_422[3],&l_422[3],(void*)0},{&g_195,&l_422[3],(void*)0,&l_422[3]},{&l_422[3],(void*)0,(void*)0,(void*)0}},{{&g_195,&g_195,&l_422[3],(void*)0},{(void*)0,(void*)0,(void*)0,&l_422[3]},{(void*)0,&l_422[3],&l_422[3],(void*)0},{&g_195,&l_422[3],(void*)0,&l_422[3]},{&l_422[3],(void*)0,(void*)0,(void*)0},{&g_195,&g_195,&l_422[3],(void*)0},{&l_422[3],(void*)0,&l_422[3],&g_195}},{{&l_422[3],&g_195,&g_195,&l_422[3]},{(void*)0,&g_195,(void*)0,&g_195},{&g_195,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_195,(void*)0},{&l_422[3],(void*)0,&l_422[3],&g_195},{&l_422[3],&g_195,&g_195,&l_422[3]},{(void*)0,&g_195,(void*)0,&g_195}},{{&g_195,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_195,(void*)0},{&l_422[3],(void*)0,&l_422[3],&g_195},{&l_422[3],&g_195,&g_195,&l_422[3]},{(void*)0,&g_195,(void*)0,&g_195},{&g_195,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_195,(void*)0}}};
    unsigned char **l_577[2][5];
    short l_581[8] = {1L,1L,(-7L),1L,1L,(-7L),1L,1L};
    unsigned l_619 = 0UL;
    unsigned ****l_657 = &g_632[0];
    unsigned ****l_660[5][8][1] = {{{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0}},{{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0}},{{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0}},{{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0}},{{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0},{&g_658},{(void*)0}}};
    unsigned *l_665 = &l_53;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_577[i][j] = (void*)0;
    }
    --l_53;
    if ((&g_38 != &l_53))
    {
        unsigned short l_59 = 0x46EDL;
        unsigned *l_74 = &g_38;
        unsigned *l_76 = &l_53;
        char l_386 = 1L;
        char **l_389[2];
        int i;
        for (i = 0; i < 2; i++)
            l_389[i] = &l_71[2][4][0];
        for (g_46 = (-21); (g_46 == (-26)); g_46 = safe_sub_func_uint8_t_u_u(g_46, 1))
        {
            int *l_58[7][4] = {{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_46},{&g_46,&g_46,&g_46,&g_46}};
            unsigned **l_75[9] = {&l_74,&l_74,&l_74,&l_74,&l_74,&l_74,&l_74,&l_74,&l_74};
            int *l_80[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_80[i] = (void*)0;
        }
    }
    else
    {
        unsigned *l_391 = &g_268[0];
        int l_398 = 0L;
        unsigned char *l_400 = (void*)0;
        unsigned char **l_399[7][7] = {{&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400},{&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,(void*)0},{&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400},{&l_400,(void*)0,&l_400,&l_400,&l_400,&l_400,&l_400},{&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400},{&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,(void*)0},{&l_400,&l_400,&l_400,&l_400,&l_400,&l_400,&l_400}};
        short *l_401 = &g_301;
        int l_433[6][7][4] = {{{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L}},{{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)}},{{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)}},{{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L}},{{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)}},{{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)},{1L,(-10L),1L,1L},{(-10L),(-10L),5L,(-10L)},{(-10L),1L,1L,(-10L)}}};
        int l_456 = (-1L);
        int i, j, k;
        if ((func_63(((*l_391) = (p_52 ^ g_279[2][5])), &l_81, ((*l_401) = (safe_sub_func_uint8_t_u_u(((~1L) & ((((l_391 == (void*)0) , ((l_81 && p_52) | (safe_rshift_func_int16_t_s_u(l_398, p_52)))) , l_399[1][0]) == &l_400)), p_52)))) , l_398))
        {
            char l_402 = (-1L);
            unsigned *l_425 = (void*)0;
            int **l_440 = &g_45;
            if (l_402)
            {
                char ***l_407 = &g_227;
                char **l_409 = &l_71[4][0][0];
                char ***l_408 = &l_409;
                int l_413 = 0xAA3A4A9CL;
                int *l_414[10][7] = {{&g_195,&g_88,&g_195,&g_88,&g_195,&g_88,&g_195},{&l_413,&l_413,&l_413,&l_413,&l_413,&l_413,&l_413},{&g_195,&g_88,&g_195,&g_88,&g_195,&g_88,&g_195},{&l_413,&l_413,&l_413,&l_413,&l_413,&l_413,&l_413},{&g_195,&g_88,&g_195,&g_88,&g_195,&g_88,&g_195},{&l_413,&l_413,&l_413,&l_413,&l_413,&l_413,&l_413},{&g_195,&g_88,&g_195,&g_88,&g_195,&g_88,&g_195},{&l_413,&l_413,&l_413,&l_413,&l_413,&l_413,&l_413},{&g_195,&g_88,&g_195,&g_88,&g_195,&g_88,&g_195},{&l_413,&l_413,&l_413,&l_413,&l_413,&l_413,&l_413}};
                int i, j;
                p_52 = (safe_lshift_func_int8_t_s_s((g_268[0] ^ (l_398 = ((((((safe_add_func_int8_t_s_s((((((*l_407) = &g_228) != (((void*)0 == &g_45) , ((*l_408) = &l_71[8][1][0]))) >= p_52) <= 0x14E63119L), (safe_unary_minus_func_uint8_t_u(((((void*)0 != g_411[6][5][3]) >= l_413) <= p_52))))) > l_402) < l_398) >= l_413) , 1L) <= 0xD736AA3FL))), 6));
            }
            else
            {
                int *l_438 = &g_188;
                int *l_439 = &l_422[3];
                for (g_88 = 2; (g_88 >= 0); g_88 -= 1)
                {
                    unsigned short *l_423 = (void*)0;
                    int l_424 = 0xB41F01BCL;
                    p_52 = ((l_53 , (((l_424 = ((l_422[3] &= (((safe_lshift_func_uint16_t_u_s(((&g_88 == (void*)0) < p_52), ((((l_417 == ((~((safe_mod_func_int8_t_s_s(p_52, (safe_lshift_func_uint8_t_u_s(g_38, (0UL | g_43))))) == g_46)) , (void*)0)) > 0xAA99729BL) != (*g_335)) & 0xD8C16F56L))) > 0x87C36A86L) || l_402)) < g_369)) , l_402) || 0UL)) ^ 1UL);
                    return l_425;
                }
                for (g_38 = 0; (g_38 != 28); g_38 = safe_add_func_uint16_t_u_u(g_38, 6))
                {
                    int *l_428[6];
                    int **l_429 = &l_428[0];
                    int *l_430 = &g_86;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_428[i] = &g_86;
                    (*l_429) = l_428[0];
                    (*l_429) = l_430;
                    for (g_373 = (-15); (g_373 >= 47); g_373 = safe_add_func_int16_t_s_s(g_373, 5))
                    {
                        --l_434;
                    }
                }
                (*l_439) ^= ((*l_438) |= g_437);
            }
            (*l_440) = &g_88;
        }
        else
        {
            int *l_441 = &l_433[1][6][3];
            int l_442 = 1L;
            int *l_443 = (void*)0;
            int *l_444[7][1][9] = {{{&g_188,&g_46,(void*)0,&l_433[1][6][3],&l_433[1][6][3],(void*)0,&g_46,&g_188,&g_46}},{{&l_433[1][6][3],&g_195,&l_433[5][4][0],&l_433[5][4][0],&g_195,&l_433[1][6][3],&g_88,&l_433[1][6][3],&g_195}},{{&l_433[1][6][3],&g_46,&g_46,&l_433[1][6][3],&g_188,(void*)0,&g_188,&l_433[1][6][3],&g_46}},{{&l_398,&l_398,&g_88,&g_195,&g_188,&g_195,&g_88,&l_398,&l_398}},{{&g_46,&l_433[1][6][3],&g_188,(void*)0,&g_188,&l_433[1][6][3],&g_46,&l_433[1][6][3],(void*)0}},{{(void*)0,&g_188,&l_433[5][4][0],&g_188,(void*)0,&g_195,&g_195,(void*)0,&g_188}},{{&l_433[1][6][3],&l_433[1][6][3],&l_433[1][6][3],(void*)0,(void*)0,(void*)0,(void*)0,&l_433[1][6][3],&l_433[1][6][3]}}};
            unsigned short l_445 = 0x8D9DL;
            char l_452[3][2][5] = {{{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xEDL,0xEDL,0xEDL,0xEDL,0xEDL}},{{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xEDL,0xEDL,0xEDL,0xEDL,0xEDL}},{{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xEDL,0xEDL,0xEDL,0xEDL,0xEDL}}};
            int **l_455 = &l_443;
            char l_457 = 9L;
            int i, j, k;
            (*l_441) ^= 0x9E3D3D78L;
            --l_445;
            p_52 = p_52;
        }
    }
    for (g_387 = 0; (g_387 == 9); g_387 = safe_add_func_uint32_t_u_u(g_387, 4))
    {
        unsigned l_465 = 0x159AB37EL;
        int *l_468 = &g_46;
        int l_495[5][6] = {{0xB02DE71BL,0xB02DE71BL,1L,1L,0xB02DE71BL,0xB02DE71BL},{0xB02DE71BL,1L,1L,0xB02DE71BL,0xB02DE71BL,1L},{0xB02DE71BL,0xB02DE71BL,1L,1L,0xB02DE71BL,0xB02DE71BL},{0xB02DE71BL,1L,1L,0xB02DE71BL,0xB02DE71BL,1L},{0xB02DE71BL,0xB02DE71BL,1L,1L,0xB02DE71BL,0xB02DE71BL}};
        unsigned short l_547 = 0UL;
        short *l_560 = &g_176;
        unsigned l_569[3][3] = {{3UL,3UL,3UL},{4294967286UL,0x0C46BBECL,4294967286UL},{3UL,3UL,3UL}};
        unsigned char l_576 = 0x99L;
        unsigned char **l_579 = (void*)0;
        int l_596 = (-1L);
        int l_597 = 0x8D0C5FB6L;
        unsigned char l_616[2][8][8] = {{{249UL,0x3CL,0xFDL,0x49L,0xCEL,0xE7L,255UL,0xE7L},{0xFDL,0xE7L,254UL,0x49L,254UL,0xE7L,0xFDL,8UL},{254UL,0xE7L,0xFDL,8UL,0x64L,254UL,255UL,0x3CL},{0x99L,255UL,0xCEL,3UL,0x64L,0x49L,3UL,0x49L},{254UL,0x3CL,0x3DL,0x3CL,254UL,0x31L,0x99L,0x49L},{0xFDL,254UL,3UL,3UL,0x3DL,0xE7L,0x64L,0x3CL},{0xCEL,0x31L,3UL,8UL,0x99L,0x58L,0x99L,8UL},{0x3DL,0x12L,0x3DL,0x49L,255UL,0x58L,3UL,0xE7L}},{{3UL,0x31L,0xCEL,0xE7L,255UL,0xE7L,255UL,255UL},{3UL,254UL,0xFDL,0x31L,255UL,0x31L,0xFDL,254UL},{0x3DL,0x3CL,254UL,0x31L,0x99L,0x49L,249UL,255UL},{0xCEL,255UL,0x99L,0xE7L,0x3DL,254UL,249UL,0xE7L},{0xFDL,0xE7L,254UL,0x49L,254UL,0xE7L,0x64L,0xE7L},{255UL,0x3CL,0x64L,0xE7L,0x3DL,3UL,3UL,254UL},{255UL,0x12L,0xFDL,255UL,0x3DL,8UL,0xCEL,8UL},{255UL,254UL,0x99L,254UL,255UL,0x49L,255UL,8UL}}};
        int l_648 = 0x6BFEE529L;
        int i, j, k;
        if (l_434)
        {
            int *l_460 = &l_422[2];
            int *l_461 = &g_88;
            int *l_462 = &l_422[4];
            int *l_463 = &g_46;
            int *l_464[8][8][4] = {{{&l_422[4],&l_422[3],&l_422[3],&g_188},{&g_46,&g_195,(void*)0,(void*)0},{(void*)0,&g_188,(void*)0,&l_422[3]},{&g_86,&g_195,&l_422[0],&g_88},{&l_422[3],(void*)0,(void*)0,&l_422[0]},{&l_422[2],(void*)0,&l_422[3],&l_422[3]},{(void*)0,&g_46,&g_46,&g_46},{&g_195,(void*)0,&g_195,&l_422[0]}},{{(void*)0,&g_86,&g_195,(void*)0},{&l_422[3],&l_422[4],&g_188,&g_86},{&g_86,&l_422[3],&g_88,(void*)0},{&l_422[4],&g_46,&g_188,&l_422[3]},{&g_195,&g_195,&l_422[2],(void*)0},{&l_422[3],&g_46,&g_46,&l_422[3]},{&g_46,(void*)0,&g_188,&g_88},{(void*)0,&g_195,&g_88,&l_422[3]}},{{&l_422[0],&g_88,&g_188,&l_422[3]},{&l_422[3],&l_422[3],&g_195,&g_195},{&g_88,&l_422[3],(void*)0,&g_88},{(void*)0,&g_86,&g_195,&g_195},{&g_86,&g_188,&g_46,&g_88},{&g_188,(void*)0,(void*)0,(void*)0},{&g_86,&l_422[0],&l_422[3],&g_46},{&l_422[0],&g_88,&g_195,&l_422[3]}},{{&l_422[0],(void*)0,&l_422[3],(void*)0},{(void*)0,&g_86,(void*)0,(void*)0},{(void*)0,&g_86,&g_195,&l_422[3]},{&g_88,&l_422[2],&g_86,&l_422[0]},{(void*)0,&g_188,&l_422[3],(void*)0},{(void*)0,&l_422[4],&l_422[3],&l_422[2]},{&g_188,&l_422[3],&g_46,&g_195},{(void*)0,&l_422[3],(void*)0,&g_188}},{{&l_422[0],&g_188,&g_195,(void*)0},{(void*)0,&g_188,&l_422[2],&l_422[3]},{&l_422[4],(void*)0,&g_188,&l_422[3]},{&g_86,&g_88,&g_46,&l_422[0]},{(void*)0,&l_422[0],(void*)0,&l_422[3]},{&g_88,(void*)0,&g_88,&g_86},{&g_46,(void*)0,(void*)0,(void*)0},{&g_188,&g_188,(void*)0,&g_88}},{{&g_46,&l_422[2],&g_88,&l_422[3]},{&g_88,&g_88,&g_88,(void*)0},{&g_88,(void*)0,(void*)0,&g_188},{&g_188,&l_422[3],&g_88,(void*)0},{&g_88,&g_86,&g_88,(void*)0},{&g_195,&g_195,&l_422[3],&l_422[2]},{&l_422[3],(void*)0,&l_422[3],(void*)0},{&l_422[3],&l_422[3],(void*)0,&g_195}},{{&l_422[4],&l_422[0],&g_195,(void*)0},{&g_88,&g_46,&l_422[3],&g_86},{&l_422[0],&g_46,&g_86,(void*)0},{(void*)0,&l_422[3],&l_422[3],(void*)0},{&l_422[3],&g_195,&g_88,&g_86},{(void*)0,&g_195,&g_46,&g_46},{&l_422[3],&g_88,(void*)0,&l_422[3]},{&g_46,&l_422[4],&g_195,(void*)0}},{{&g_188,(void*)0,&g_195,&g_88},{&g_88,(void*)0,&l_422[4],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_195,&g_195,&l_422[3],(void*)0},{(void*)0,&g_46,&g_195,&g_195},{&g_195,&l_422[0],(void*)0,&g_195},{&g_46,&l_422[0],&g_88,&g_195},{&l_422[0],&g_46,&g_195,(void*)0}}};
            int **l_471 = (void*)0;
            int *l_473 = (void*)0;
            int **l_472 = &l_473;
            unsigned l_529[1];
            unsigned **l_566[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_529[i] = 1UL;
            for (i = 0; i < 1; i++)
                l_566[i] = &g_107[7];
            --l_465;
            l_468 = func_77(l_468, (*l_468));
            if (((safe_lshift_func_int8_t_s_s(((*l_468) = 8L), 0)) ^ (((p_52 , (+(p_52 > p_52))) , l_460) == ((*l_472) = &g_279[2][5]))))
            {
                int l_488 = 0xBC8F13D0L;
                int l_498 = (-1L);
                unsigned *l_524 = (void*)0;
                for (g_195 = 3; (g_195 >= 0); g_195 -= 1)
                {
                    int l_490 = 1L;
                    int l_496 = 0x7BDC370AL;
                    unsigned l_522 = 3UL;
                    int i, j;
                    if (((*l_463) = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_52, (l_434 ^ l_422[3]))), p_52))))
                    {
                        unsigned **l_485 = &g_107[1];
                        unsigned short l_489 = 8UL;
                        unsigned short *l_492 = &g_7[0][3];
                        int l_497 = 4L;
                        g_478[1][2][4] &= func_60(p_52, g_46);
                        g_491 &= (safe_add_func_uint32_t_u_u(p_52, ((p_52 == (((l_422[3] < (safe_add_func_uint8_t_u_u(((((p_52 && (safe_rshift_func_int8_t_s_u(((**g_412) = func_63(p_52, ((*l_485) = l_473), p_52)), (((safe_add_func_uint8_t_u_u(((((((*l_417) = (l_488 > g_195)) >= g_188) , g_349) > 0x78832135L) && p_52), 0x3EL)) == g_279[2][5]) <= p_52)))) >= (-3L)) && l_489) < l_488), l_489))) && l_490) , l_488)) != 0xDA62L)));
                        (*l_461) = (((*l_492)++) > p_52);
                        g_499++;
                    }
                    else
                    {
                        unsigned l_503[8];
                        int l_514 = 1L;
                        unsigned short *l_516 = &g_7[2][5];
                        unsigned char *l_519 = &g_369;
                        unsigned l_523 = 0x0E0BD1B2L;
                        unsigned *l_525[3][7][7] = {{{&g_373,&g_38,(void*)0,&l_503[3],&g_268[0],&g_373,&g_499},{&g_373,&l_503[3],&g_268[0],&l_434,&l_434,&g_268[0],&l_503[3]},{&l_503[3],&l_53,&g_499,&l_503[3],&g_373,&l_503[1],&g_373},{(void*)0,(void*)0,(void*)0,&l_434,&g_38,&g_499,&g_38},{&g_499,&g_38,&g_268[0],&l_503[3],&l_434,&l_434,(void*)0},{&l_81,&g_38,&l_434,&l_434,&l_81,&l_81,&l_503[1]},{&l_434,&g_499,&l_434,&g_38,&g_499,&l_81,&g_268[0]}},{{&l_503[2],(void*)0,&g_499,&l_81,(void*)0,&l_503[4],&l_503[3]},{&g_268[0],(void*)0,(void*)0,&l_503[3],&l_503[2],&l_503[0],&l_503[3]},{&g_38,&g_499,&g_373,&g_373,&g_373,&l_503[3],&g_373},{&g_268[0],&g_38,&g_38,&g_268[0],&l_503[3],&l_53,&g_499},{&l_434,&g_38,&g_373,&l_503[0],&l_503[3],&g_499,&g_38},{&g_373,(void*)0,&g_373,&l_81,&l_81,&l_53,&g_499},{&l_81,&l_53,&l_81,&l_503[3],&g_373,&l_53,&g_373}},{{(void*)0,&l_503[3],(void*)0,&g_499,&g_268[0],&l_434,&l_53},{(void*)0,&l_503[3],&l_503[3],&l_503[4],&l_503[3],&l_81,&l_503[1]},{&g_268[0],&l_503[3],&g_38,&g_499,&l_503[3],&l_503[0],&g_373},{(void*)0,&l_434,&g_499,&g_268[0],&g_268[0],&l_503[3],(void*)0},{&l_53,&g_38,&g_499,&g_38,&g_499,&g_38,&l_53},{&l_53,&l_81,&g_499,&l_503[3],&g_38,&l_503[3],&g_268[0]},{&g_499,&l_53,&g_268[0],&g_38,&g_268[0],(void*)0,&l_434}}};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_503[i] = 0x58D7FDB6L;
                        --l_503[3];
                        if (p_52)
                            break;
                        (*l_460) = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_373, 0)), ((((1L != (safe_mod_func_int8_t_s_s(l_498, (**g_412)))) , (l_498 = (~((((((*l_468) <= (safe_rshift_func_int8_t_s_s(0x7BL, 5))) < (++(*l_516))) , (l_514 |= ((*l_468) ^= ((~((*l_463) |= (((g_373 || p_52) & p_52) <= (*l_462)))) || p_52)))) , &g_88) == &g_88)))) & l_523) , 0xD5C3L))) <= p_52);
                    }
                    g_526--;
                    return &g_268[0];
                }
                --l_529[0];
            }
            else
            {
                unsigned short l_536 = 1UL;
                int l_548 = 0x3685FFBFL;
                short **l_559 = &l_417;
                unsigned char *l_567 = &g_197;
                int **l_568 = &l_473;
                char ***l_575[3][1];
                int l_603 = 0xC2AC5853L;
                int l_604 = (-6L);
                int l_605 = 0x554BEF7EL;
                int l_606 = 0L;
                char l_615 = 0x80L;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_575[i][j] = (void*)0;
                }
                for (l_434 = 22; (l_434 != 19); l_434--)
                {
                    unsigned *l_534[5][3] = {{&g_268[0],&g_268[0],&g_499},{&g_268[0],&g_268[0],&g_499},{&g_268[0],&g_268[0],&g_499},{&g_268[0],&g_268[0],&g_499},{&g_268[0],&g_268[0],&g_499}};
                    int l_535 = 0xBEEFEE95L;
                    int l_549 = 0xC57527AAL;
                    int l_556 = 0xAF546668L;
                    int i, j;
                }
                (*l_463) |= (*l_460);
                if (((l_569[2][0] = (((((((safe_rshift_func_uint8_t_u_u((((*l_559) = &g_301) == (g_7[2][5] , l_560)), 6)) != ((((*l_567) = (safe_sub_func_int16_t_s_s(((((*l_468) , l_563[6]) == (void*)0) > ((safe_sub_func_uint32_t_u_u(l_515[1][0][9], (p_52 || (l_566[0] == &g_107[7])))) | p_52)), g_197))) != p_52) , (*l_460))) < p_52) , (-4L)) || 1L) , (void*)0) != l_568)) , g_478[1][2][4]))
                {
                    char ***l_574 = &g_227;
                    unsigned char **l_578[8] = {&l_567,&l_567,&l_567,&l_567,&l_567,&l_567,&l_567,&l_567};
                    unsigned short *l_580 = &g_302;
                    int l_586 = 0L;
                    unsigned *l_588 = &g_499;
                    int i;
                    for (g_188 = 0; (g_188 >= 0); g_188 -= 1)
                    {
                        int **l_570 = &l_468;
                        (*l_570) = (void*)0;
                        l_571[1][4][0] = &p_52;
                    }
                    p_52 = p_52;
                    if (((((p_52 & ((*l_580) ^= ((p_52 ^ (*g_228)) > (safe_add_func_uint8_t_u_u((p_52 || (l_574 != (p_52 , l_575[0][0]))), ((l_576 && ((l_578[0] = l_577[0][2]) != l_579)) || g_301)))))) < l_581[7]) && p_52) != p_52))
                    {
                        int *l_582 = (void*)0;
                        int **l_583 = &l_571[1][4][0];
                        (*l_583) = func_77((l_463 = func_77(((*l_583) = func_77(l_582, p_52)), (p_52 != p_52))), ((l_434 , g_176) , ((safe_lshift_func_uint8_t_u_u(g_351, g_369)) | g_122)));
                        (*l_583) = &g_46;
                        (*l_462) &= p_52;
                        (*l_583) = (l_586 , func_77((((func_63(p_52, &g_38, p_52) >= ((*l_567) = 5UL)) ^ (0x8DL < (&g_437 == (void*)0))) , (void*)0), p_52));
                    }
                    else
                    {
                        int **l_587 = (void*)0;
                        g_45 = l_463;
                        (*g_45) = ((*l_462) ^= (*g_45));
                        return l_588;
                    }
                }
                else
                {
                    if (g_372)
                    {
                        unsigned short l_589 = 0x47DCL;
                        int l_602 = 3L;
                        (*l_460) = (((((l_560 != ((*l_559) = &g_301)) , (l_589 | ((*l_417) &= func_60(func_60((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(func_60(p_52, l_596), p_52)), 0)), 4)), g_437), p_52)))) > 1UL) >= l_597) != p_52);
                        (*l_463) |= (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_52, p_52)), (*l_468)));
                        (*l_462) &= (l_602 = p_52);
                        g_607[0]++;
                    }
                    else
                    {
                        int **l_610 = &l_461;
                        int l_611 = 9L;
                        int l_612 = 0x3FEAC2AEL;
                        (*l_610) = &p_52;
                        (*l_463) = (*l_461);
                        (*l_610) = l_464[1][0][2];
                        --l_616[0][4][3];
                    }
                    return &g_373;
                }
            }
            if (l_619)
                continue;
        }
        else
        {
            int **l_625 = &l_571[3][6][1];
            unsigned **l_633 = &g_107[7];
            int l_637[10][8] = {{0xDA98EE99L,0xFBDD4866L,0x06CFA155L,0xFBDD4866L,0xDA98EE99L,0x54340447L,0xFE9A408DL,(-2L)},{0xDA98EE99L,0x54340447L,0xFE9A408DL,(-2L),0xFE9A408DL,0x54340447L,0xDA98EE99L,0xFBDD4866L},{1L,0xFBDD4866L,0xFE9A408DL,(-1L),0L,(-1L),0xFE9A408DL,0xFBDD4866L},{0xFE9A408DL,(-2L),1L,(-1L),0x06CFA155L,0x54340447L,0x06CFA155L,(-1L)},{0xFE9A408DL,(-2L),0xFE9A408DL,0x54340447L,0xDA98EE99L,0xFBDD4866L,0x06CFA155L,0xFBDD4866L},{0L,0x54340447L,1L,0x54340447L,0L,0x0987610FL,0xDA98EE99L,(-1L)},{0L,0x0987610FL,0xDA98EE99L,(-1L),0xDA98EE99L,0x0987610FL,0L,0x54340447L},{0xFE9A408DL,0x54340447L,0xDA98EE99L,0xFBDD4866L,0x06CFA155L,0xFBDD4866L,0xDA98EE99L,0x54340447L},{0xDA98EE99L,(-2L),1L,(-1L),0x06CFA155L,0x54340447L,0x06CFA155L,(-1L)},{0xFE9A408DL,(-2L),0xFE9A408DL,0x54340447L,0xDA98EE99L,0xFBDD4866L,0x06CFA155L,0xFBDD4866L}};
            int l_651 = 0xEAB15CF9L;
            int i, j;
            for (g_351 = 0; (g_351 <= 24); ++g_351)
            {
                int **l_624[5];
                unsigned char *l_626[3];
                int i;
                for (i = 0; i < 5; i++)
                    l_624[i] = &l_571[0][4][1];
                for (i = 0; i < 3; i++)
                    l_626[i] = &l_616[0][4][3];
                (*l_468) = (p_52 < ((((g_45 = &p_52) != &g_86) != (((*l_468) >= ((*l_468) >= ((l_625 != l_625) > (((l_626[2] == (g_627 = &g_197)) , p_52) , p_52)))) < g_628)) >= 0x81AC8CBEL));
                for (g_176 = 2; (g_176 >= 0); g_176 -= 1)
                {
                    short l_639 = (-6L);
                    int l_641[2][10];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_641[i][j] = 0x2DE38261L;
                    }
                }
            }
        }
    }
    g_614[2][0] |= (safe_rshift_func_int16_t_s_s(p_52, p_52));
    return (*g_659);
}







static char func_60(unsigned p_61, unsigned p_62)
{
    char l_159 = (-7L);
    int *l_160 = &g_88;
    unsigned **l_191 = &g_107[7];
    unsigned short *l_266 = &g_7[2][4];
    unsigned *l_267 = &g_268[0];
    int l_271[2];
    unsigned char *l_320 = &g_197;
    unsigned char **l_319 = &l_320;
    int l_341 = 0x5B30C10BL;
    unsigned short l_376 = 0xA6F8L;
    int i;
    for (i = 0; i < 2; i++)
        l_271[i] = 0xAA4EBD65L;
    (*l_160) = l_159;
    for (l_159 = 0; (l_159 <= 2); l_159 += 1)
    {
        unsigned char *l_165 = (void*)0;
        int l_181[10] = {0L,0x69C20454L,0x69C20454L,0L,0x69C20454L,0x69C20454L,0L,0x69C20454L,0x69C20454L,0L};
        unsigned l_208 = 4UL;
        unsigned short **l_260 = &g_237[2][7];
        int l_323 = 0x7D5A770EL;
        unsigned char **l_325 = &l_320;
        short *l_345 = &g_176;
        int l_359 = 0x0CED65FBL;
        int i;
    }
    g_188 |= (func_63((*l_160), &g_373, g_372) < l_376);
    return (*g_335);
}







static unsigned func_63(unsigned p_64, unsigned * p_65, short p_66)
{
    int **l_108 = (void*)0;
    int **l_109[2];
    unsigned l_110 = 0x1B829F48L;
    short l_111 = (-10L);
    unsigned char l_125 = 0xC5L;
    char *l_138 = &g_43;
    unsigned l_150 = 0xAE426BEBL;
    short *l_151 = &l_111;
    unsigned char *l_152 = &l_125;
    unsigned short *l_153 = &g_7[2][0];
    int l_158 = 0x80A48E4EL;
    int i;
    for (i = 0; i < 2; i++)
        l_109[i] = &g_45;
    g_45 = (void*)0;
    l_111 = (g_88 ^ (g_86 = l_110));
    for (l_110 = 0; (l_110 <= 1); l_110 += 1)
    {
        unsigned l_112 = 0xBB087A7CL;
        short *l_115 = &l_111;
        unsigned short *l_116 = &g_7[2][5];
        int *l_121 = &g_122;
        int l_123[3][10][2] = {{{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL},{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)},{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL},{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)},{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL}},{{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)},{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL},{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)},{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL},{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)}},{{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL},{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)},{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL},{0x0287503BL,0xEE0523CFL},{0x701A4A5BL,(-1L)},{0x0287503BL,(-1L)},{0x701A4A5BL,0xEE0523CFL}}};
        int l_124 = 0xACB8C3E1L;
        int *l_126 = &g_88;
        int i, j, k;
        l_124 = (((l_112 >= (safe_sub_func_int16_t_s_s(((*l_115) = p_64), (l_123[2][4][1] = ((((~g_88) & ((*l_116) = g_38)) , 0x8AL) > (safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((1UL && (((*l_121) = (-9L)) , (((g_88 > g_86) > 4L) , 0x1FDDL))), 0xB0L)) != g_46), 1UL))))))) <= p_64) , l_112);
        for (p_64 = 0; (p_64 <= 1); p_64 += 1)
        {
            unsigned char l_128 = 7UL;
            int l_135 = (-1L);
            char **l_139 = &l_138;
            l_126 = func_77(p_65, (l_125 , 0x2EL));
            for (l_112 = 0; (l_112 <= 1); l_112 += 1)
            {
                for (g_88 = 0; (g_88 <= 1); g_88 += 1)
                {
                    short l_129 = 0x774EL;
                    for (g_122 = 0; (g_122 <= 1); g_122 += 1)
                    {
                        unsigned l_127 = 0UL;
                        l_128 = ((*l_126) = (l_127 ^ (&g_45 != &g_45)));
                        return l_129;
                    }
                }
                for (g_38 = 0; (g_38 <= 1); g_38 += 1)
                {
                    for (l_111 = 1; (l_111 >= 0); l_111 -= 1)
                    {
                        unsigned char *l_134 = &l_128;
                        int i, j, k;
                        l_123[(l_111 + 1)][(l_111 + 1)][l_112] = ((((g_7[l_112][(l_111 + 2)] != ((&p_65 != ((l_123[(g_38 + 1)][(l_111 + 4)][l_112] , l_123[l_110][(l_111 + 1)][l_112]) , &g_107[7])) > l_123[(l_110 + 1)][(p_64 + 3)][l_111])) <= (l_123[l_110][(l_111 + 1)][l_112] & p_66)) <= (((*l_134) |= (safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((p_65 != p_65), g_7[0][5])), 65533UL))) || 0UL)) || g_122);
                        g_45 = p_65;
                        l_135 ^= (*g_45);
                    }
                }
            }
            g_86 |= ((*l_126) = (l_135 = ((safe_sub_func_uint8_t_u_u(255UL, 0L)) && (&g_43 == ((*l_139) = l_138)))));
        }
    }
    if ((((*l_153) = ((((*l_152) |= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((p_66 | (safe_add_func_int8_t_s_s(p_66, p_66))) , (-1L)), (*p_65))), 7)) , (~(((*l_151) &= ((g_86 && (-3L)) < (safe_add_func_uint32_t_u_u((*p_65), (((safe_sub_func_uint8_t_u_u((((&l_125 == (void*)0) || p_64) , p_66), 0x9BL)) != l_150) != 0xDE577B4CL))))) , g_7[0][1])))) <= p_64) | (*p_65))) > 0x7B81L))
    {
        g_45 = func_77(p_65, (safe_rshift_func_int8_t_s_s(((*l_138) = (safe_add_func_int8_t_s_s(6L, 0x30L))), (0xD6089050L || l_158))));
        return (*p_65);
    }
    else
    {
        return (*p_65);
    }
}







static unsigned * func_77(int * p_78, char p_79)
{
    for (p_79 = (-17); (p_79 > (-1)); ++p_79)
    {
        unsigned l_97 = 1UL;
        for (g_38 = (-17); (g_38 != 55); g_38++)
        {
            int *l_103 = (void*)0;
            for (g_86 = 2; (g_86 >= 0); g_86 -= 1)
            {
                int *l_87 = &g_88;
                int *l_89 = &g_88;
                int *l_90 = (void*)0;
                int *l_91 = &g_88;
                int *l_92 = (void*)0;
                int *l_93 = &g_88;
                int *l_94 = &g_88;
                int *l_95 = (void*)0;
                int *l_96 = &g_88;
                int *l_104 = &g_88;
                int i, j;
                --l_97;
                for (l_97 = 0; (l_97 <= 2); l_97 += 1)
                {
                    int **l_102[2][3];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_102[i][j] = &l_93;
                    }
                    l_104 = ((g_7[g_86][(g_86 + 1)] && (safe_lshift_func_uint8_t_u_u(0x5AL, 7))) , (p_78 = (l_103 = (void*)0)));
                }
                (*l_93) ^= (safe_mod_func_uint8_t_u_u(0UL, (g_7[g_86][(g_86 + 3)] & g_7[g_86][(g_86 + 1)])));
                (*l_87) = 0x67AB6272L;
            }
        }
    }
    g_86 = (-7L);
    return &g_38;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_7[i][j], "g_7[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_268[i], "g_268[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_279[i][j], "g_279[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_369, "g_369", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_478[i][j][k], "g_478[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_607[i], "g_607[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_613, "g_613", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_614[i][j], "g_614[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_693[i], "g_693[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1256, "g_1256", print_hash_value);
    transparent_crc(g_1261, "g_1261", print_hash_value);
    transparent_crc(g_1449, "g_1449", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1534[i], "g_1534[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
