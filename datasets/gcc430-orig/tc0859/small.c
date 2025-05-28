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
   char * f1;
   unsigned char f2;
   unsigned short f3;
   char f4;
};


static int g_4 = 0xA4D073FFL;
static int g_6 = 0x0FC0272AL;
static char g_18 = 0x91L;
static char *g_17[4][6][6] = {{{&g_18,&g_18,&g_18,&g_18,(void*)0,&g_18},{&g_18,&g_18,&g_18,&g_18,(void*)0,(void*)0},{&g_18,&g_18,&g_18,&g_18,&g_18,(void*)0},{&g_18,(void*)0,&g_18,&g_18,&g_18,&g_18},{&g_18,(void*)0,&g_18,&g_18,&g_18,&g_18},{&g_18,(void*)0,(void*)0,&g_18,&g_18,&g_18}},{{(void*)0,&g_18,&g_18,&g_18,(void*)0,&g_18},{(void*)0,&g_18,&g_18,&g_18,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18},{&g_18,(void*)0,&g_18,&g_18,(void*)0,&g_18},{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18},{&g_18,(void*)0,&g_18,&g_18,(void*)0,&g_18}},{{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18},{&g_18,(void*)0,&g_18,&g_18,&g_18,(void*)0},{&g_18,&g_18,&g_18,&g_18,(void*)0,&g_18},{&g_18,&g_18,&g_18,&g_18,(void*)0,(void*)0},{&g_18,&g_18,(void*)0,&g_18,(void*)0,&g_18}},{{&g_18,&g_18,&g_18,&g_18,&g_18,&g_18},{(void*)0,(void*)0,&g_18,&g_18,&g_18,&g_18},{&g_18,&g_18,(void*)0,&g_18,&g_18,&g_18},{(void*)0,&g_18,(void*)0,(void*)0,(void*)0,&g_18},{&g_18,(void*)0,&g_18,&g_18,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18,(void*)0,&g_18}}};
static unsigned g_46 = 0UL;
static unsigned g_60 = 0x8BB6AF83L;
static unsigned g_61 = 0x65392FB3L;
static union U0 g_66 = {0x65455456L};
static char g_71 = 4L;
static short g_77 = (-1L);
static int g_78 = 3L;
static unsigned short g_150[7][9] = {{0x2CA3L,0xC889L,0xEA16L,9UL,65535UL,0x0243L,0UL,0x3CC1L,9UL},{0xF570L,0x2ED7L,0xADBBL,1UL,65535UL,2UL,0x2ED7L,2UL,65535UL},{0xADBBL,0x3CC1L,0x3CC1L,0xADBBL,0x2824L,2UL,1UL,65535UL,0x76CEL},{0x0720L,1UL,1UL,65535UL,0xC889L,0x0243L,0xEA16L,1UL,0x3CC1L},{65535UL,0x236FL,65535UL,0x90D5L,0x2824L,65535UL,0x2824L,0x90D5L,65535UL},{0xC889L,0xC889L,65535UL,0x90D5L,65535UL,0x2CA3L,0UL,1UL,0x90D5L},{0xB7E3L,1UL,0xADBBL,65535UL,65535UL,0xF570L,1UL,2UL,0xEA16L}};
static int *g_216[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int **g_215 = &g_216[3];
static unsigned *g_221 = (void*)0;
static unsigned *g_318 = &g_46;
static int *g_319 = (void*)0;
static union U0 *g_345 = &g_66;
static unsigned g_364 = 4294967294UL;
static unsigned char *g_368 = &g_66.f2;
static unsigned char **g_367 = &g_368;
static char **g_387 = (void*)0;
static unsigned short *g_524 = &g_150[5][3];
static unsigned short **g_523 = &g_524;
static int g_533 = 1L;
static unsigned **g_553[9][9] = {{&g_221,&g_318,&g_318,&g_221,(void*)0,&g_221,&g_318,(void*)0,&g_318},{&g_221,&g_221,&g_221,&g_221,&g_221,&g_221,&g_318,&g_221,(void*)0},{&g_221,&g_221,(void*)0,(void*)0,(void*)0,(void*)0,&g_221,&g_318,(void*)0},{&g_318,(void*)0,&g_221,&g_318,&g_221,&g_221,&g_318,&g_221,(void*)0},{(void*)0,&g_318,&g_221,(void*)0,&g_221,&g_221,&g_221,&g_221,(void*)0},{(void*)0,(void*)0,(void*)0,&g_221,&g_318,&g_318,&g_221,&g_221,&g_318},{&g_221,&g_318,(void*)0,&g_318,&g_221,(void*)0,&g_221,&g_221,&g_221},{&g_221,(void*)0,&g_318,&g_221,&g_318,(void*)0,&g_221,&g_318,&g_221},{&g_221,&g_221,&g_318,(void*)0,&g_221,(void*)0,&g_318,&g_221,&g_221}};
static unsigned ***g_552[5] = {&g_553[6][8],&g_553[6][8],&g_553[6][8],&g_553[6][8],&g_553[6][8]};
static short g_566 = 0x6A4FL;
static int g_657 = 0x8B535252L;
static unsigned char ***g_757 = &g_367;
static unsigned g_857 = 0x1BC3E7B0L;
static short g_913 = 0x0B44L;
static short **g_930 = (void*)0;
static short g_972 = 0x4A0FL;
static unsigned char g_1059 = 255UL;
static int g_1076 = 2L;
static unsigned short g_1109[6][6][7] = {{{0xEFD4L,0x6179L,0x10EEL,1UL,0x8393L,0x4407L,0x1843L},{0x4EEFL,6UL,0xD727L,0UL,0x3942L,0x3AD2L,0x1843L},{0xFF00L,65535UL,65531UL,65534UL,65535UL,0x6D04L,0xEFD4L},{0x8041L,6UL,0xFA16L,65534UL,0xFA16L,6UL,0x8041L},{65535UL,0x6179L,0x7EFDL,0UL,0x8AE9L,0x6D04L,65535UL},{0xFA3CL,0UL,0x88C0L,0x8041L,0xBC75L,1UL,9UL}},{{0x3AD2L,1UL,0x3CA4L,0xD2C3L,0xBC75L,65533UL,65535UL},{65535UL,1UL,0xC424L,65535UL,0x88C0L,0xBEB2L,9UL},{0x6179L,1UL,0xBC75L,0xEA7AL,0xC424L,0xA269L,65535UL},{6UL,1UL,65535UL,65535UL,65530UL,0xA269L,0x3AD2L},{65535UL,0UL,0x0F73L,0xD2C3L,4UL,0xBEB2L,6UL},{6UL,0xA269L,0x0F73L,0x8041L,0x65E1L,65533UL,0x4407L}},{{0x6179L,0x9A8BL,65535UL,0xEFD4L,4UL,1UL,0x4407L},{65535UL,0x15B0L,0xBC75L,0x1843L,65530UL,0x79EFL,6UL},{0x3AD2L,0x9A8BL,0xC424L,0x1843L,0xC424L,0x9A8BL,0x3AD2L},{0xFA3CL,0xA269L,0x3CA4L,0xEFD4L,0x88C0L,0x79EFL,65535UL},{0xFA3CL,0UL,0x88C0L,0x8041L,0xBC75L,1UL,9UL},{0x3AD2L,1UL,0x3CA4L,0xD2C3L,0xBC75L,65533UL,65535UL}},{{65535UL,1UL,0xC424L,0xBE78L,0xA269L,0x8041L,9UL},{65528UL,65527UL,0x79EFL,3UL,0xE726L,65535UL,65534UL},{1UL,0x4EEFL,0UL,0xBE78L,1UL,65535UL,0x150AL},{65534UL,65535UL,65535UL,0xC64EL,0x15B0L,0x8041L,1UL},{1UL,65535UL,65535UL,1UL,65533UL,0xFF00L,65535UL},{65528UL,0xD2C3L,0UL,65535UL,0x15B0L,0x4EEFL,65535UL}},{{0x5538L,0x1843L,0x79EFL,0x201CL,1UL,0xEFD4L,1UL},{0x150AL,0xD2C3L,0xE726L,0x201CL,0xE726L,0xD2C3L,0x150AL},{0x7C2FL,65535UL,1UL,65535UL,0xA269L,0xEFD4L,65534UL},{0x7C2FL,65535UL,0xA269L,1UL,0x79EFL,0x4EEFL,9UL},{0x150AL,0x4EEFL,1UL,0xC64EL,0x79EFL,0xFF00L,65530UL},{0x5538L,65527UL,0xE726L,0xBE78L,0xA269L,0x8041L,9UL}},{{65528UL,65527UL,0x79EFL,3UL,0xE726L,65535UL,65534UL},{1UL,0x4EEFL,0UL,0xBE78L,1UL,65535UL,0x150AL},{65534UL,9UL,5UL,65534UL,0x8393L,0x3AD2L,0xD2C3L},{0xD2C3L,0xFA3CL,5UL,0x150AL,0xD727L,65535UL,0xFF00L},{65535UL,65535UL,0xFA16L,1UL,0x8393L,0x6179L,0xFF00L},{65535UL,0x4407L,0x2D52L,65535UL,65531UL,6UL,0xD2C3L}}};
static int ***g_1139 = &g_215;
static int ****g_1138[1] = {&g_1139};
static unsigned short ****g_1238 = (void*)0;
static union U0 g_1239 = {0x9FCF980BL};
static short g_1298 = 0x6162L;
static unsigned g_1299 = 7UL;



static short func_1(void);
static int * func_2(int p_3);
static int * func_7(unsigned short p_8, int * p_9, unsigned char p_10);
static unsigned short func_11(char * p_12, int p_13, int * p_14, unsigned p_15, union U0 p_16);
static unsigned char func_20(short p_21, union U0 p_22, union U0 p_23, char * p_24);
static union U0 func_25(char * p_26, unsigned p_27);
static char * func_28(unsigned short p_29, unsigned short p_30);
static unsigned short func_31(int * p_32);
static int * func_33(unsigned char p_34);
static union U0 func_47(unsigned p_48, union U0 p_49);
static short func_1(void)
{
    int *l_5 = &g_6;
    int l_1253 = 0x5F1C0F78L;
    char *l_1254 = &g_66.f4;
    char l_1261 = 0xFBL;
    char ***l_1262[8][10][3] = {{{&g_387,&g_387,&g_387},{(void*)0,&g_387,(void*)0},{(void*)0,&g_387,&g_387},{&g_387,(void*)0,&g_387},{(void*)0,&g_387,(void*)0},{&g_387,(void*)0,&g_387},{&g_387,(void*)0,&g_387},{&g_387,&g_387,&g_387},{(void*)0,(void*)0,&g_387},{&g_387,&g_387,&g_387}},{{(void*)0,&g_387,(void*)0},{&g_387,&g_387,&g_387},{(void*)0,(void*)0,(void*)0},{&g_387,&g_387,&g_387},{(void*)0,(void*)0,(void*)0},{&g_387,&g_387,&g_387},{&g_387,(void*)0,(void*)0},{&g_387,&g_387,&g_387},{&g_387,&g_387,(void*)0},{&g_387,(void*)0,&g_387}},{{&g_387,&g_387,(void*)0},{&g_387,&g_387,&g_387},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387},{(void*)0,&g_387,(void*)0},{(void*)0,&g_387,&g_387},{(void*)0,&g_387,&g_387},{(void*)0,(void*)0,&g_387},{&g_387,&g_387,(void*)0},{(void*)0,&g_387,&g_387}},{{&g_387,&g_387,(void*)0},{&g_387,&g_387,&g_387},{&g_387,&g_387,&g_387},{&g_387,(void*)0,&g_387},{&g_387,&g_387,&g_387},{&g_387,(void*)0,&g_387},{(void*)0,&g_387,&g_387},{&g_387,(void*)0,&g_387},{&g_387,&g_387,(void*)0},{&g_387,&g_387,&g_387}},{{&g_387,&g_387,&g_387},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387},{(void*)0,(void*)0,&g_387},{&g_387,&g_387,(void*)0},{&g_387,&g_387,(void*)0},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387},{&g_387,&g_387,&g_387},{&g_387,&g_387,&g_387}},{{&g_387,(void*)0,&g_387},{(void*)0,&g_387,(void*)0},{(void*)0,(void*)0,&g_387},{&g_387,&g_387,&g_387},{&g_387,(void*)0,(void*)0},{&g_387,&g_387,&g_387},{&g_387,(void*)0,&g_387},{&g_387,&g_387,(void*)0},{&g_387,&g_387,&g_387},{&g_387,&g_387,(void*)0}},{{&g_387,&g_387,&g_387},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387},{(void*)0,&g_387,&g_387},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387},{(void*)0,&g_387,(void*)0},{&g_387,&g_387,&g_387},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387}},{{&g_387,&g_387,&g_387},{&g_387,&g_387,&g_387},{&g_387,&g_387,(void*)0},{(void*)0,(void*)0,&g_387},{(void*)0,&g_387,(void*)0},{&g_387,(void*)0,&g_387},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_387,&g_387},{&g_387,&g_387,&g_387},{&g_387,(void*)0,&g_387}}};
    unsigned *l_1263 = &g_1239.f0;
    short l_1264[4][5][7] = {{{1L,(-6L),0xC498L,0x52EFL,(-3L),0xDA4BL,(-2L)},{0x87CEL,0L,0x52EFL,0x291CL,(-3L),0xBBF6L,0xEE5BL},{0xBDF5L,1L,0x65D7L,0x65D7L,0L,(-1L),0xDA4BL},{0xBC6BL,0x5F41L,(-1L),0xC498L,0L,0xDA6DL,0x4808L},{0L,0xBC6BL,0L,0L,0xBDF5L,0xB19CL,0x291CL}},{{0xBBF6L,0x5F41L,0xDA4BL,0xBC6BL,0x1506L,0x4808L,(-3L)},{(-6L),0L,1L,0x1506L,0L,0xBDF5L,0L},{0L,0x30B9L,0xB19CL,0x0DD3L,0x5F41L,0xBDF5L,1L},{0L,0x4808L,(-8L),0x52EFL,(-8L),0x4808L,0L},{0L,(-3L),0x65D7L,0xBDF5L,0x1AF1L,0xB19CL,0xBBF6L}},{{0L,0xDA4BL,0L,0x5F41L,0xEA85L,0xDA6DL,4L},{(-8L),0xEA85L,0x65D7L,0L,0xDA6DL,(-1L),0xBDF5L},{1L,0x9D0EL,(-8L),0xBBF6L,0xC498L,0x5F41L,0x65D7L},{0xE1D6L,0xEE5BL,0xB19CL,(-1L),0x52EFL,0L,0x65D7L},{0x4808L,0xBDF5L,1L,0x65D7L,0x65D7L,1L,0xBDF5L}},{{0xEA85L,(-8L),0xDA4BL,0x30B9L,2L,0xBC6BL,4L},{0x291CL,0x9D0EL,0L,0xBDF5L,0L,0xBBF6L,6L},{0x291CL,0x0DD3L,0L,(-8L),0x1506L,0x5F41L,0xEE5BL},{0x87B0L,6L,0xEE5BL,4L,0L,0L,0xC498L},{(-8L),0x4808L,0x65D7L,0L,0xEA85L,0L,(-1L)}}};
    int l_1282 = 1L;
    int *l_1318 = &g_6;
    int l_1332 = (-10L);
    int l_1333[9] = {0x79A13011L,0x79A13011L,0xDFAD32D8L,0x79A13011L,0x79A13011L,0xDFAD32D8L,0x79A13011L,0x79A13011L,0xDFAD32D8L};
    int i, j, k;
    (**g_1139) = func_2((((*l_5) |= g_4) , (g_4 == 0L)));




    ;
    ;
    (*l_5) = (safe_sub_func_int16_t_s_s((((g_913 = (*l_5)) < (*g_524)) && ((*l_5) >= ((+(*l_5)) || ((*l_1254) = ((*l_5) | (safe_sub_func_uint32_t_u_u((*l_5), l_1253))))))), (*l_5)));

        if (((safe_add_func_int16_t_s_s(((*l_5) && ((((func_31(l_5) != (((*l_5) >= (*l_5)) , ((*l_5) > (*g_318)))) == ((*l_1263) = ((((((safe_div_func_int32_t_s_s(((*g_345) , ((((safe_rshift_func_uint8_t_u_u((*l_5), 0)) || 0xA2L) == (*l_5)) & l_1261)), (*l_5))) , (void*)0) == l_1262[2][6][2]) ^ 4294967295UL) <= (*l_5)) , 0UL))) < 0x6802L) && (*l_5))), 0x1DFAL)) == l_1264[2][0][4]))
    {
        char l_1265 = 0xB3L;
        (*l_5) = (1L ^ 0x3B63L);
        l_1265 |= 0L;
    }
    else
    {
        unsigned l_1270 = 0UL;
        int l_1278 = (-1L);
        int *l_1280[9][9] = {{&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076},{&g_78,(void*)0,(void*)0,(void*)0,&g_78,(void*)0,&g_78,(void*)0,(void*)0},{&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076},{&g_78,(void*)0,(void*)0,(void*)0,&g_78,(void*)0,&g_78,(void*)0,(void*)0},{&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076},{&g_78,(void*)0,(void*)0,(void*)0,&g_78,(void*)0,&g_78,(void*)0,(void*)0},{&g_533,&g_533,&g_1076,&g_533,&g_533,&g_1076,&g_6,&g_6,&g_533},{&g_1076,&g_6,&g_78,&g_6,&g_1076,(void*)0,&g_1076,&g_6,&g_78},{&g_6,&g_6,&g_533,&g_6,&g_6,&g_533,&g_6,&g_6,&g_533}};
        short l_1314[1];
        short l_1323 = 4L;
        unsigned *l_1329[6] = {&g_61,&g_61,&g_61,&g_61,&g_61,&g_61};
        unsigned **l_1328 = &l_1329[5];
        unsigned *l_1331 = &g_61;
        unsigned **l_1330 = &l_1331;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1314[i] = (-6L);
        for (g_6 = (-12); (g_6 != 0); g_6 = safe_add_func_uint32_t_u_u(g_6, 2))
        {
            short l_1271 = 9L;
            int l_1283 = 0x9C2AF9C2L;
            unsigned l_1288[5][9] = {{0x14B8EB94L,0x90A3347AL,0x33C85581L,0x33C85581L,0x90A3347AL,0x14B8EB94L,1UL,0x14B8EB94L,0x90A3347AL},{0x14B8EB94L,0UL,0UL,0x14B8EB94L,5UL,0x90A3347AL,5UL,0x14B8EB94L,0UL},{5UL,5UL,1UL,0x90A3347AL,1UL,0x90A3347AL,1UL,5UL,5UL},{0UL,0x14B8EB94L,5UL,0x90A3347AL,5UL,0x14B8EB94L,0UL,0UL,0x14B8EB94L},{0x90A3347AL,0x14B8EB94L,1UL,0x14B8EB94L,0x90A3347AL,0x33C85581L,0x33C85581L,0x90A3347AL,0x14B8EB94L}};
            char *l_1300[9] = {(void*)0,(void*)0,&g_18,(void*)0,(void*)0,&g_18,(void*)0,(void*)0,&g_18};
            unsigned l_1303 = 0xDAA39EF1L;
            unsigned short l_1306 = 0xA7D0L;
            int i, j;
            for (l_1253 = (-7); (l_1253 == 29); l_1253 = safe_add_func_int32_t_s_s(l_1253, 8))
            {
                int l_1274 = 1L;
                int *l_1277[1][7] = {{&g_533,&g_533,&g_533,&g_533,&g_533,&g_533,&g_533}};
                short l_1279 = (-1L);
                unsigned *l_1281[7][9] = {{&g_857,&g_857,&g_61,(void*)0,(void*)0,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_857,(void*)0,&g_857,(void*)0,&g_61,(void*)0,&g_61,&g_61},{&g_61,&g_61,&g_857,&g_61,&g_61,(void*)0,(void*)0,&g_61,&g_61},{&g_857,&g_61,&g_857,&g_61,&g_61,(void*)0,&g_61,(void*)0,&g_857},{(void*)0,&g_857,&g_857,&g_61,&g_61,&g_61,&g_857,(void*)0,&g_61},{&g_61,&g_61,(void*)0,&g_61,&g_857,&g_857,&g_61,&g_61,&g_61},{&g_61,&g_857,&g_857,&g_61,&g_857,&g_857,&g_61,(void*)0,(void*)0}};
                short *l_1289 = &l_1264[1][0][4];
                char *l_1290 = &g_66.f4;
                int i, j;
                l_1271 ^= (!(((*g_524) ^ g_1109[4][4][6]) , l_1270));
                l_1282 = ((g_61 ^= ((safe_rshift_func_uint16_t_u_u(func_31((((l_1279 = ((l_1274 && l_1271) == (l_1278 = (l_1270 < (safe_sub_func_int32_t_s_s((0x71C3L | 1L), (l_1274 > l_1274))))))) <= func_31(l_1280[7][0])) , l_5)), 13)) | 0x4CL)) , 4L);
                if (l_1283)
                    break;
                if (func_11((((*l_1289) = (((l_1283 > (*l_5)) | ((*g_524) &= (safe_lshift_func_int8_t_s_s(0x1CL, (*l_5))))) , func_31(l_1281[3][3]))) , l_1290), g_972, l_1277[0][0], (*l_5), (*g_345)))
                {
                    int l_1297 = 0xADF14633L;
                    int *l_1301 = (void*)0;
                    union U0 l_1302 = {0x1598CC0EL};
                    int l_1311 = 0xFE4A1846L;
                    if ((func_11(((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((*l_5), (((0xC9L != (((safe_div_func_uint8_t_u_u((l_1297 && g_1298), (*l_5))) > l_1288[2][5]) < l_1297)) > func_31(((*g_215) = &l_1282))) < 0x66L))) != 4L), l_1271)) > g_1299) <= 4UL) , l_1300[2]), g_4, l_1301, l_1288[2][1], l_1302) <= l_1303))
                    {
                        union U0 **l_1307[4][10][6] = {{{&g_345,&g_345,(void*)0,&g_345,(void*)0,&g_345},{(void*)0,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,(void*)0,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345,(void*)0,&g_345},{&g_345,&g_345,&g_345,&g_345,(void*)0,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,(void*)0,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345,(void*)0,&g_345},{&g_345,&g_345,&g_345,(void*)0,(void*)0,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,(void*)0},{&g_345,(void*)0,(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,(void*)0,&g_345,&g_345},{&g_345,&g_345,(void*)0,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,(void*)0,&g_345,(void*)0},{&g_345,&g_345,&g_345,&g_345,(void*)0,(void*)0},{&g_345,&g_345,&g_345,&g_345,(void*)0,(void*)0},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345,&g_345,(void*)0},{&g_345,&g_345,&g_345,(void*)0,(void*)0,&g_345},{&g_345,&g_345,&g_345,&g_345,(void*)0,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345}},{{(void*)0,&g_345,&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,(void*)0,&g_345,(void*)0},{&g_345,(void*)0,&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,(void*)0,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,&g_345,(void*)0,&g_345},{&g_345,&g_345,&g_345,(void*)0,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345,&g_345,&g_345},{(void*)0,&g_345,&g_345,(void*)0,(void*)0,&g_345},{&g_345,&g_345,(void*)0,&g_345,&g_345,(void*)0}}};
                        int l_1310 = 0x49F14B65L;
                        int i, j, k;
                        if ((*l_5))
                            break;
                        l_1283 = (((*l_5) | (safe_sub_func_uint32_t_u_u(l_1303, l_1306))) , 3L);
                        g_345 = &g_1239;

                        ;
                        l_1311 &= (safe_add_func_uint32_t_u_u(((&l_1289 != ((l_1310 , (*l_5)) , (void*)0)) <= (*l_5)), (*g_318)));
                    }
                    else
                    {
                        union U0 **l_1312 = &g_345;
                        int l_1313[2][1][5] = {{{0L,0xADE19CBEL,0xA91E74D1L,0xADE19CBEL,0L}},{{0L,0xADE19CBEL,0xA91E74D1L,0xADE19CBEL,0L}}};
                        int i, j, k;
                        (*l_1312) = &g_66;
                        if (l_1313[0][0][0])
                            break;
                    }

                    ;
                    return l_1314[0];


                }
                else
                {
                    for (g_60 = (-7); (g_60 < 24); g_60 = safe_add_func_uint8_t_u_u(g_60, 8))
                    {
                        union U0 **l_1317 = &g_345;
                        (*l_1317) = &g_66;
                        (*g_215) = (void*)0;
                        (*g_215) = l_1318;
                    }
                }
            }
            l_1283 |= (*l_5);
            (**g_1139) = &l_1278;
        }


        (*l_1318) = (safe_sub_func_uint32_t_u_u(((*l_1318) >= 0x21L), (l_1333[8] = (l_1332 = (l_1282 ^= (safe_sub_func_int8_t_s_s(((*l_1254) = l_1323), ((func_31(&l_1278) <= (safe_add_func_uint8_t_u_u(((g_77 | ((-8L) ^ (((*l_1330) = ((*l_1328) = &g_61)) == l_1318))) , 8UL), (*l_1318)))) > (*l_1318)))))))));
        for (g_857 = 29; (g_857 > 41); g_857 = safe_add_func_int32_t_s_s(g_857, 1))
        {
            for (g_61 = 0; g_61 < 1; g_61 += 1)
            {
                l_1314[g_61] = 0x5115L;
            }
        }
    }


    return g_150[1][4];


}







static int * func_2(int p_3)
{
    int *l_19 = &g_4;
    int **l_40 = (void*)0;
    int *l_42[8] = {&g_4,&g_6,&g_4,&g_4,&g_6,&g_4,&g_4,&g_6};
    int **l_41 = &l_42[0];
    union U0 l_679 = {0x95EA7DCBL};
    char *l_680 = &l_679.f4;
    union U0 l_950[9][6] = {{{1UL},{1UL},{0x1A84D311L},{4294967292UL},{0x05B70FCCL},{4294967295UL}},{{4294967295UL},{0xB60AD45CL},{0UL},{0x1A84D311L},{0x5BC0A50AL},{0x1A84D311L}},{{0UL},{4294967295UL},{0UL},{1UL},{1UL},{4294967295UL}},{{8UL},{1UL},{0x1A84D311L},{0x7AA1BBCDL},{0xC7709E66L},{0xC7709E66L}},{{0x7AA1BBCDL},{0xC7709E66L},{0xC7709E66L},{0x7AA1BBCDL},{0x1A84D311L},{1UL}},{{8UL},{4294967295UL},{1UL},{1UL},{0UL},{4294967295UL}},{{0UL},{0x1A84D311L},{0x5BC0A50AL},{0x1A84D311L},{0UL},{0xB60AD45CL}},{{4294967295UL},{4294967295UL},{0x05B70FCCL},{4294967292UL},{0x1A84D311L},{1UL}},{{1UL},{0xC7709E66L},{4294967295UL},{4294967295UL},{0xC7709E66L},{1UL}}};
    unsigned short *l_1108 = &g_1109[4][4][6];
    union U0 **l_1206 = (void*)0;
    union U0 **l_1207 = (void*)0;
    union U0 **l_1208 = &g_345;
    union U0 *l_1209 = &g_66;
    char ***l_1230 = &g_387;
    unsigned short ***l_1233 = &g_523;
    unsigned short ***l_1235[2][7][7] = {{{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0}},{{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0},{&g_523,&g_523,&g_523,&g_523,(void*)0,&g_523,(void*)0}}};
    int *l_1248[4] = {&g_78,&g_78,&g_78,&g_78};
    int i, j, k;
    (**g_1139) = func_7(((*l_1108) ^= func_11(g_17[0][2][0], p_3, l_19, (((*g_368) = (((func_20(g_6, func_25(func_28(g_4, ((*g_524) = func_31(func_33(((safe_rshift_func_uint8_t_u_s(5UL, (safe_unary_minus_func_int8_t_s((*l_19))))) > (((*l_41) = &g_4) == &g_4)))))), (*l_19)), l_679, l_680) <= 4L) , (void*)0) != l_680)) & p_3), l_950[8][2])), l_19, g_1076);




    ;
        ;
    if (((**l_41) = (p_3 & (((*l_1208) = &g_66) == (l_1209 = l_1209)))))
    {
        unsigned char ***l_1220 = &g_367;
        int l_1222 = 0x26120D56L;
        char **l_1223 = &g_17[1][4][3];
        union U0 l_1224 = {4294967288UL};
        for (g_78 = 0; (g_78 <= 7); g_78 += 1)
        {
            unsigned l_1216 = 0UL;
            int l_1219 = (-1L);
            unsigned char ****l_1221 = (void*)0;
            int l_1225 = 0x1D22CA93L;
            int l_1226[9][10][2] = {{{(-3L),0xF5C665D0L},{(-10L),2L},{0x99342450L,(-2L)},{0x0800FDE6L,0L},{2L,(-1L)},{0L,0x2F72B8ABL},{5L,0xA64ECD7CL},{0x953421ACL,0xF5C665D0L},{(-7L),0L},{2L,0x6CA40EB5L}},{{0L,0x1945CC03L},{0L,(-2L)},{0L,0L},{(-1L),0x0800FDE6L},{0xC3B2C2BEL,0x6CA40EB5L},{0xB2963019L,(-1L)},{(-4L),0xB2963019L},{0x953421ACL,0x9995C503L},{0x953421ACL,0xB2963019L},{(-4L),(-1L)}},{{0xB2963019L,0x6CA40EB5L},{0xC3B2C2BEL,0x0800FDE6L},{(-1L),0L},{0L,(-2L)},{0L,0x1945CC03L},{0L,0x6CA40EB5L},{2L,0L},{(-7L),0xF5C665D0L},{0x953421ACL,0xA64ECD7CL},{5L,0x2F72B8ABL}},{{0L,(-1L)},{2L,0L},{0x6A4A994FL,0x38815630L},{(-1L),(-2L)},{0L,0xB6DEB68AL},{0L,0x1945CC03L},{0xC3B2C2BEL,0L},{0xF5C665D0L,(-1L)},{(-7L),0xB2963019L},{5L,0xDC98D156L}},{{(-3L),0x2F72B8ABL},{(-4L),0L},{0xF5C665D0L,0x748798F1L},{0x6A4A994FL,0x0800FDE6L},{0L,0xB6DEB68AL},{(-2L),0xB6DEB68AL},{0L,0x0800FDE6L},{0x6A4A994FL,0x748798F1L},{0xF5C665D0L,0L},{(-4L),0x2F72B8ABL}},{{(-3L),0xDC98D156L},{0xB6DEB68AL,4L},{1L,2L},{(-4L),(-1L)},{(-1L),0x99342450L},{(-10L),0xA64ECD7CL},{0xDC98D156L,0x95142ADBL},{2L,(-3L)},{0L,(-1L)},{0x6CA40EB5L,0xB2963019L}},{{(-10L),0L},{0xB6DEB68AL,0x6D38ED78L},{0L,(-4L)},{1L,(-10L)},{0x6CA40EB5L,(-3L)},{0xC00516C9L,0x99342450L},{0x2F72B8ABL,0x95142ADBL},{(-2L),(-2L)},{2L,(-1L)},{(-1L),(-3L)}},{{4L,0xB2963019L},{0x1945CC03L,4L},{0L,(-4L)},{0L,4L},{0x1945CC03L,0xB2963019L},{4L,(-3L)},{(-1L),(-1L)},{2L,(-2L)},{(-2L),0x95142ADBL},{0x2F72B8ABL,0x99342450L}},{{0xC00516C9L,(-3L)},{0x6CA40EB5L,(-10L)},{1L,(-4L)},{0L,0x6D38ED78L},{0xB6DEB68AL,0L},{(-10L),0xB2963019L},{0x6CA40EB5L,(-1L)},{0L,(-3L)},{2L,0x95142ADBL},{0xDC98D156L,0xA64ECD7CL}}};
            int i, j, k;
            l_1226[6][0][1] ^= (safe_rshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((l_1225 ^= func_11(l_680, (p_3 , (safe_div_func_int16_t_s_s(l_1216, (((**l_41) | (((l_1219 = (**l_41)) , (((l_1220 != (g_757 = &g_367)) != (p_3 ^ ((l_1222 >= p_3) > 0x4AF6L))) , l_1223)) == (void*)0)) ^ l_1222)))), &l_1222, l_1216, l_1224)), (-1L))) <= p_3), 7));

            ;
        }


        (*g_215) = (*l_41);
    }
    else
    {
        int *l_1227 = &g_1076;
        unsigned short ****l_1234 = &l_1233;
        char *l_1240 = &g_71;
        union U0 l_1241 = {4294967295UL};
        int l_1242[4];
        int l_1243 = 0xB3DBDC97L;
        int i;
        for (i = 0; i < 4; i++)
            l_1242[i] = 0xDB3158CAL;
        for (g_61 = 2; (g_61 <= 8); g_61 += 1)
        {
            (*l_41) = ((**g_1139) = l_1227);
            for (g_533 = 2; (g_533 <= 8); g_533 += 1)
            {
                (*l_1227) = ((*l_19) ^= (*l_1227));
                if (p_3)
                    continue;
                (**g_1139) = l_1227;
            }
        }



        l_1243 |= (~(l_1242[1] |= (p_3 , func_11(((safe_sub_func_uint16_t_u_u((*g_524), (((void*)0 == l_1230) == (((safe_div_func_int32_t_s_s(((**l_41) = ((((*l_1234) = l_1233) == l_1235[1][5][2]) & (((func_11(func_28((**g_523), (255UL > (safe_sub_func_int32_t_s_s((&l_1235[0][1][6] != g_1238), (*l_1227))))), (*l_19), l_1227, (*l_1227), g_1239) >= (**l_41)) < 0x70F1L) & p_3))), 0x998166D3L)) != 0x9098L) >= p_3)))) , l_1240), g_1239.f2, l_1227, p_3, l_1241))));
    }



    for (g_972 = 2; (g_972 <= 7); g_972 += 1)
    {
        int i;
        (**l_41) &= p_3;
        (**l_41) = ((p_3 = 0x48F83EB8L) , ((((safe_rshift_func_uint16_t_u_u(((*l_1209) , func_31(l_42[g_972])), p_3)) , (*g_524)) >= (safe_div_func_uint32_t_u_u((l_42[0] == &g_657), p_3))) & p_3));
        if (p_3)
            continue;
    }
    return l_1248[2];


}







static int * func_7(unsigned short p_8, int * p_9, unsigned char p_10)
{
    int *l_1114[4][3];
    unsigned l_1123 = 0x9C07A40AL;
    char l_1124 = 0x8AL;
    unsigned ****l_1125[3][5][8] = {{{&g_552[2],&g_552[4],&g_552[3],&g_552[2],&g_552[2],(void*)0,&g_552[2],&g_552[2]},{&g_552[4],&g_552[0],&g_552[4],&g_552[2],&g_552[3],&g_552[2],&g_552[2],(void*)0},{(void*)0,&g_552[3],&g_552[2],&g_552[2],&g_552[2],&g_552[2],&g_552[2],&g_552[2]},{&g_552[2],(void*)0,(void*)0,&g_552[2],&g_552[2],&g_552[2],(void*)0,&g_552[2]},{&g_552[0],&g_552[2],&g_552[2],&g_552[4],(void*)0,&g_552[2],&g_552[2],&g_552[2]}},{{&g_552[3],&g_552[2],(void*)0,&g_552[2],&g_552[3],&g_552[2],&g_552[2],&g_552[2]},{&g_552[2],(void*)0,&g_552[3],&g_552[4],&g_552[2],&g_552[2],&g_552[2],&g_552[2]},{&g_552[2],&g_552[3],&g_552[3],&g_552[3],&g_552[3],&g_552[2],&g_552[2],&g_552[2]},{&g_552[2],&g_552[2],(void*)0,&g_552[2],&g_552[2],&g_552[4],&g_552[2],&g_552[2]},{(void*)0,&g_552[0],&g_552[2],&g_552[2],&g_552[2],&g_552[0],(void*)0,&g_552[2]}},{{&g_552[3],&g_552[2],(void*)0,&g_552[3],&g_552[4],&g_552[2],&g_552[2],&g_552[2]},{&g_552[2],&g_552[4],&g_552[2],&g_552[4],&g_552[4],&g_552[2],&g_552[4],&g_552[2]},{&g_552[3],&g_552[2],&g_552[0],&g_552[2],&g_552[2],&g_552[4],(void*)0,&g_552[2]},{(void*)0,&g_552[2],&g_552[2],&g_552[4],&g_552[2],&g_552[4],&g_552[2],&g_552[2]},{&g_552[2],(void*)0,&g_552[2],&g_552[2],&g_552[2],&g_552[2],&g_552[2],(void*)0}}};
    short l_1155 = (-9L);
    char *l_1174[2];
    unsigned short l_1205[8][10][1] = {{{0x5136L},{0xB102L},{0x4637L},{0x4E55L},{0xC143L},{0x4E55L},{0x4637L},{0xB102L},{0x5136L},{0x4E55L}},{{0xB8D0L},{0x4E55L},{0x5136L},{0xB102L},{0x4637L},{0x4E55L},{0xC143L},{0x4E55L},{0x4637L},{0xB102L}},{{0x5136L},{0x4E55L},{0xB8D0L},{0x4E55L},{0x5136L},{0xB102L},{0x4637L},{0x4E55L},{0xC143L},{0x4E55L}},{{0x4637L},{0xB102L},{0x5136L},{0x4E55L},{0xB8D0L},{0x4E55L},{0x5136L},{0xB102L},{0x4637L},{0x4E55L}},{{0xC143L},{0x4E55L},{0x4637L},{0xB102L},{0x5136L},{0x4E55L},{0xB8D0L},{0x4E55L},{0x5136L},{0xB102L}},{{0x4637L},{0x4E55L},{0xC143L},{0x4E55L},{0x4637L},{0xB102L},{0x5136L},{0x4E55L},{0xB8D0L},{0x4E55L}},{{0x5136L},{0xB102L},{0x4637L},{0x4E55L},{0xC143L},{0x4E55L},{0x4637L},{0xB102L},{0x5136L},{0x4E55L}},{{0xB8D0L},{0x4E55L},{0x5136L},{0xB102L},{0x4637L},{0x4E55L},{0xC143L},{0x4E55L},{0x4637L},{0xB102L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_1114[i][j] = &g_533;
    }
    for (i = 0; i < 2; i++)
        l_1174[i] = &l_1124;
    g_1076 ^= (safe_lshift_func_int16_t_s_u((p_8 , p_8), (safe_mod_func_int32_t_s_s(func_31(l_1114[1][1]), (safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_8, (p_10 | (safe_mod_func_int16_t_s_s(l_1123, l_1124))))), 7)) || (*g_368)), (*p_9)))))));
    if (((*p_9) = ((((-1L) && (&g_552[2] == l_1125[1][1][7])) | 0x331B493FL) ^ (**g_523))))
    {
        char **l_1130 = &g_17[0][2][0];
        int l_1133 = 0L;
        int *l_1134[1];
        char l_1135[10][7][3] = {{{(-1L),0x71L,(-1L)},{0x2EL,0x2EL,(-1L)},{(-1L),0x71L,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)}},{{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL}},{{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)}},{{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL}},{{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)}},{{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL}},{{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)}},{{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL}},{{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)}},{{(-8L),(-8L),0x2EL},{0xDEL,0x0DL,(-1L)},{(-8L),(-8L),0x2EL},{0xDEL,0L,0xDEL},{(-1L),(-1L),(-8L)},{(-1L),0L,0xDEL},{(-1L),(-1L),(-8L)}}};
        int ***l_1137 = &g_215;
        int ****l_1136 = &l_1137;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1134[i] = &g_657;
        (*g_215) = (p_10 , p_9);
        l_1133 = (safe_div_func_int32_t_s_s(((((-4L) <= ((safe_div_func_int8_t_s_s((((*p_9) = (p_10 < 6UL)) >= l_1135[4][3][0]), 1UL)) == 0UL)) , l_1136) != g_1138[0]), p_10));
        (*p_9) ^= (func_25(&l_1124, p_8) , func_31(l_1114[1][0]));
        for (g_46 = 0; (g_46 < 57); g_46++)
        {
            (*g_215) = p_9;
            (*p_9) ^= 0x35F72DD8L;
        }
    }
    else
    {
        int l_1146 = 1L;
        unsigned short *l_1156 = &g_66.f3;
        unsigned short *l_1157 = &g_1109[4][4][6];
        char **l_1162 = &g_17[0][2][0];
        int **l_1165 = &g_319;
        int **l_1166 = &g_319;
        int **l_1167 = (void*)0;
        int **l_1168 = &g_216[4];
        int **l_1169[7][6][4] = {{{&g_216[3],&g_319,&l_1114[1][1],&g_319},{&l_1114[1][1],(void*)0,&l_1114[1][1],&g_216[3]},{&g_319,&g_319,&g_216[3],(void*)0},{&l_1114[1][1],&g_216[3],&l_1114[1][1],&g_319},{&g_319,&g_216[3],&l_1114[1][1],&l_1114[0][1]},{&l_1114[1][1],&l_1114[1][1],&g_216[3],&g_216[3]}},{{&g_319,&l_1114[2][2],&l_1114[1][1],&g_319},{&l_1114[1][1],&g_319,&l_1114[1][1],(void*)0},{&g_216[3],&g_216[1],&l_1114[3][2],&g_216[3]},{(void*)0,&l_1114[1][1],(void*)0,&g_216[2]},{&l_1114[1][1],(void*)0,&g_319,&l_1114[1][1]},{&g_216[1],&g_216[3],&g_216[1],(void*)0}},{{&g_319,&l_1114[3][2],&g_319,&g_216[3]},{&g_319,&g_216[3],&g_216[3],&g_319},{(void*)0,&g_216[3],&g_216[3],(void*)0},{&l_1114[1][1],(void*)0,&g_216[0],&g_319},{&l_1114[0][1],&g_216[2],&g_319,&g_216[2]},{&g_216[3],&g_216[3],&g_216[1],&g_216[2]}},{{&l_1114[1][1],&g_216[2],&l_1114[1][1],&g_319},{&l_1114[2][2],(void*)0,&g_319,(void*)0},{&g_216[2],&g_216[3],&g_216[3],&g_319},{&g_216[3],&g_319,(void*)0,(void*)0},{&g_216[3],&g_319,&g_216[3],&g_216[2]},{(void*)0,&l_1114[1][1],(void*)0,&g_319}},{{&g_216[3],&g_319,(void*)0,(void*)0},{&g_216[3],&g_319,&g_319,&g_216[2]},{&g_216[2],&g_216[3],&l_1114[2][2],&g_216[1]},{(void*)0,&g_216[1],&g_216[1],&g_216[1]},{&l_1114[1][1],(void*)0,&l_1114[1][1],&g_319},{&l_1114[3][2],&l_1114[2][0],&g_216[3],&l_1114[1][1]}},{{&l_1114[0][2],(void*)0,(void*)0,&g_319},{&l_1114[0][2],&g_216[3],&g_216[3],&g_216[3]},{&l_1114[3][2],&g_319,&l_1114[1][1],(void*)0},{&l_1114[1][1],&l_1114[3][2],&g_216[1],&g_216[0]},{(void*)0,&l_1114[1][1],&l_1114[2][2],&g_216[3]},{&g_216[2],&l_1114[0][1],&g_319,(void*)0}},{{&g_216[3],&g_319,(void*)0,&g_319},{&g_216[3],&g_216[3],(void*)0,(void*)0},{(void*)0,&g_216[1],&g_216[3],&g_216[3]},{&g_216[3],(void*)0,(void*)0,&g_216[3]},{&g_216[3],&g_319,&g_216[2],&g_216[2]},{(void*)0,(void*)0,&g_216[4],(void*)0}}};
        union U0 l_1172 = {0UL};
        char *l_1173 = &g_71;
        unsigned l_1175 = 0UL;
        unsigned short ***l_1195 = &g_523;
        int i, j, k;
        (*p_9) = (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(l_1146, (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*p_9) >= (*p_9)), p_10)), (*g_368))) , p_10), (*p_9))))), 10));
        for (g_4 = 0; (g_4 <= 2); g_4 += 1)
        {
            unsigned l_1176 = 0x46FC2953L;
            int *l_1178 = &g_6;
            p_9 = (void*)0;

            ;
            for (l_1123 = 0; (l_1123 <= 2); l_1123 += 1)
            {
                unsigned char l_1177 = 0x14L;
                int *l_1181 = (void*)0;
                union U0 l_1182 = {6UL};
                int l_1183[1][4];
                unsigned short ***l_1202 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_1183[i][j] = 0xB572AEF6L;
                }
                l_1177 &= (((l_1175 , (l_1176 , (((*g_318) = l_1176) | p_8))) < p_10) >= p_8);
                l_1183[0][0] ^= func_11(func_28((*g_524), func_31(l_1178)), ((((safe_lshift_func_uint16_t_u_u((((void*)0 != g_930) , (p_10 == p_10)), 6)) && (*g_524)) , 8UL) , 0x06F349D6L), l_1181, p_8, l_1182);
                for (g_46 = 0; (g_46 <= 2); g_46 += 1)
                {
                    short l_1184 = 8L;
                    union U0 **l_1199 = &g_345;
                    for (g_71 = 2; (g_71 >= 0); g_71 -= 1)
                    {
                        return p_9;


                    }
                    for (l_1175 = 0; (l_1175 <= 2); l_1175 += 1)
                    {
                        int l_1198 = 0x553EB72BL;
                        union U0 **l_1201[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        union U0 ***l_1200 = &l_1201[1];
                        int i, j, k;
                        (*l_1178) |= (~l_1184);
                        (*l_1178) = (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(0x83E6L, ((*l_1157) |= (((safe_sub_func_int32_t_s_s((*l_1178), l_1184)) == (safe_sub_func_int32_t_s_s((*l_1178), (((((((*l_1156) = ((safe_rshift_func_uint8_t_u_s((l_1195 == ((safe_div_func_int32_t_s_s((~l_1198), (p_8 || (*l_1178)))) , l_1202)), 1)) , 0xFB43L)) >= (*l_1178)) && p_10) ^ 0x69B035DFL) , &l_1167) != (void*)0)))) & p_10)))) | p_8), 5));

                        (*l_1165) = p_9;

                        ;
                        (*l_1178) = l_1198;
                    }
                    for (p_8 = 28; (p_8 < 59); ++p_8)
                    {
                        return p_9;


                    }
                }
            }
        }

        ;
    }

    ;
    l_1205[6][1][0] = 0x2094EA1BL;
    return p_9;


}







static unsigned short func_11(char * p_12, int p_13, int * p_14, unsigned p_15, union U0 p_16)
{
    int l_953 = 2L;
    int *l_955 = &g_6;
    short *l_1002 = &g_972;
    char *l_1014 = &g_71;
    unsigned l_1036 = 0UL;
    unsigned l_1073 = 0xDD923DF2L;
    for (g_857 = 17; (g_857 == 34); g_857 = safe_add_func_uint8_t_u_u(g_857, 8))
    {
        unsigned char l_959 = 0xDAL;
        int *l_960 = &g_533;
        int ***l_993 = &g_215;
        int ****l_992 = &l_993;
        unsigned short l_998 = 65531UL;
        union U0 *l_1023 = &g_66;
        int *l_1074 = &g_4;
        (*g_215) = p_14;
        (*g_215) = p_14;
    }
    return (*l_955);
}







static unsigned char func_20(short p_21, union U0 p_22, union U0 p_23, char * p_24)
{
    unsigned short l_683 = 0UL;
    union U0 l_684[6][10][4] = {{{{4294967295UL},{1UL},{0xB6B4E998L},{1UL}},{{4294967295UL},{0x9F736F9FL},{0xB9B315E0L},{0xE681E973L}},{{0xE5C5E1D0L},{1UL},{0xB6B4E998L},{0UL}},{{4294967295UL},{1UL},{0x058D4E66L},{0x496F211CL}},{{4294967294UL},{0x3A6E7D92L},{1UL},{9UL}},{{0xBEA70517L},{0x0956B0C3L},{4294967295UL},{5UL}},{{0xB6B4E998L},{0xBEA70517L},{5UL},{0UL}},{{4UL},{0xAEE9AAD6L},{4294967295UL},{0x46952821L}},{{4294967295UL},{0x4402FD3FL},{1UL},{0x4402FD3FL}},{{1UL},{0x41D14726L},{0xA3562DADL},{4294967295UL}}},{{{0x21D0B796L},{0xA74513B7L},{0x84186096L},{0x2748F771L}},{{0x0956B0C3L},{4294967295UL},{4294967294UL},{0x27B91B65L}},{{0x0956B0C3L},{0x382DC217L},{0x84186096L},{9UL}},{{0x21D0B796L},{0x27B91B65L},{0xA3562DADL},{4294967295UL}},{{1UL},{9UL},{1UL},{0xE47D8AAEL}},{{4294967295UL},{4294967295UL},{4294967295UL},{0xA9AC2374L}},{{4UL},{0x11E3D50EL},{5UL},{0UL}},{{0xB6B4E998L},{1UL},{4294967295UL},{0x749215C6L}},{{0xBEA70517L},{0xA3562DADL},{1UL},{4294967295UL}},{{4294967294UL},{2UL},{0x058D4E66L},{2UL}}},{{{4294967295UL},{0x73FD2848L},{0xB6B4E998L},{0x6E1D2F6CL}},{{0xE5C5E1D0L},{4294967294UL},{0xB9B315E0L},{0UL}},{{0x749215C6L},{0UL},{4294967295UL},{0x11E3D50EL}},{{0x4402FD3FL},{4294967295UL},{1UL},{0x7624869AL}},{{0xB9B315E0L},{4294967295UL},{3UL},{0xAEE9AAD6L}},{{7UL},{0xF0160E8BL},{0x2BF7064DL},{1UL}},{{0x658B8469L},{0UL},{4294967295UL},{0xDCDD5A4EL}},{{0x9FB8E3F9L},{0x0956B0C3L},{0x6E1D2F6CL},{9UL}},{{9UL},{0xAEE9AAD6L},{1UL},{1UL}},{{0xABB88693L},{0x3A6E7D92L},{0UL},{0xE488A63AL}}},{{{4294967292UL},{0x62BD1EBAL},{1UL},{4294967295UL}},{{0UL},{0x264366C1L},{0UL},{0x8838C070L}},{{5UL},{9UL},{4294967295UL},{0xF6534FEEL}},{{4294967295UL},{3UL},{9UL},{1UL}},{{0x97067C71L},{0x21D0B796L},{0UL},{0xE47D8AAEL}},{{9UL},{0UL},{0UL},{9UL}},{{4294967295UL},{0xABB88693L},{4UL},{0x2748F771L}},{{0x058D4E66L},{0UL},{4294967290UL},{0xA74513B7L}},{{1UL},{1UL},{0xDCDD5A4EL},{0xA74513B7L}},{{4294967295UL},{0UL},{1UL},{0x2748F771L}}},{{{4294967295UL},{0xABB88693L},{0xF6534FEEL},{9UL}},{{9UL},{0UL},{1UL},{0xE47D8AAEL}},{{1UL},{0x21D0B796L},{0xE681E973L},{1UL}},{{0xB6EE9EC5L},{3UL},{0x382DC217L},{0xF6534FEEL}},{{0x366366D0L},{9UL},{2UL},{0x8838C070L}},{{0x84186096L},{0x264366C1L},{0UL},{4294967295UL}},{{0x2748F771L},{0x62BD1EBAL},{0x21D0B796L},{0xE488A63AL}},{{0xE488A63AL},{0x3A6E7D92L},{0x41D14726L},{1UL}},{{0x809C6EDCL},{0xAEE9AAD6L},{4294967295UL},{9UL}},{{0xA3562DADL},{0UL},{4294967295UL},{5UL}}},{{{1UL},{9UL},{4294967286UL},{1UL}},{{0x0956B0C3L},{0xE488A63AL},{1UL},{0x496F211CL}},{{2UL},{1UL},{4294967295UL},{4294967294UL}},{{0UL},{0x11E3D50EL},{0xF6534FEEL},{4294967295UL}},{{2UL},{4294967295UL},{0x496F211CL},{0x7624869AL}},{{3UL},{1UL},{4294967295UL},{0xDCDD5A4EL}},{{4294967295UL},{1UL},{1UL},{0xB92EAA8AL}},{{4294967295UL},{0x9F736F9FL},{0xB92EAA8AL},{1UL}},{{0x3A6E7D92L},{1UL},{9UL},{0xF0160E8BL}},{{0x6DDC2CBBL},{4294967295UL},{0xFA7BA4BAL},{0xE5C5E1D0L}}}};
    int *l_685[2][10][8] = {{{&g_533,&g_533,&g_6,&g_4,&g_533,&g_6,&g_4,&g_4},{&g_4,&g_533,&g_533,&g_4,(void*)0,&g_4,&g_533,&g_533},{(void*)0,(void*)0,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,(void*)0,&g_4,&g_4,(void*)0,&g_6,&g_4,&g_533},{&g_4,&g_4,&g_4,&g_4,&g_533,&g_533,&g_533,&g_533},{&g_533,&g_533,&g_533,&g_533,&g_4,&g_4,&g_4,&g_4},{&g_533,&g_4,&g_6,(void*)0,&g_4,&g_6,&g_4,(void*)0},{&g_4,&g_533,&g_533,(void*)0,&g_533,&g_4,&g_4,&g_533},{&g_533,(void*)0,(void*)0,&g_4,(void*)0,(void*)0,&g_533,&g_4},{&g_533,&g_4,&g_533,&g_533,(void*)0,&g_533,&g_533,&g_4}},{{&g_4,&g_4,&g_4,(void*)0,(void*)0,&g_533,(void*)0,&g_4},{&g_533,&g_4,&g_4,&g_4,(void*)0,(void*)0,&g_4,&g_4},{&g_533,&g_533,&g_6,&g_533,&g_533,&g_533,&g_533,&g_4},{&g_4,&g_533,&g_533,&g_533,&g_4,&g_4,(void*)0,&g_4},{&g_533,(void*)0,&g_4,&g_533,&g_533,&g_4,(void*)0,&g_4},{(void*)0,&g_4,&g_533,&g_4,(void*)0,&g_6,(void*)0,&g_4},{&g_4,&g_533,(void*)0,(void*)0,&g_533,&g_533,&g_4,&g_4},{(void*)0,(void*)0,(void*)0,&g_533,(void*)0,&g_4,(void*)0,&g_4},{&g_533,(void*)0,&g_533,&g_4,&g_4,&g_4,(void*)0,&g_4},{&g_6,&g_4,&g_4,(void*)0,(void*)0,&g_4,&g_533,&g_4}}};
    unsigned l_686 = 0xAE191B6FL;
    char l_687 = 0xB7L;
    unsigned l_694 = 0UL;
    int *l_726 = (void*)0;
    int l_749 = 0x01DBFE3BL;
    char *l_810[6][6] = {{&l_687,&l_687,&l_687,&g_71,&l_687,&l_687},{&g_18,&l_687,&l_687,&l_687,&g_18,&l_687},{&l_687,&g_71,&l_687,&l_687,&l_687,&g_71},{&g_18,&g_71,&l_687,&g_71,&g_18,&g_71},{&l_687,&l_687,&l_687,&g_71,&l_687,&l_687},{&g_18,&l_687,&l_687,&l_687,&g_18,&l_687}};
    union U0 *l_853 = &g_66;
    int l_860 = 0xD8D06B3EL;
    int *l_891 = &g_4;
    unsigned short **l_901 = &g_524;
    unsigned short **l_903 = &g_524;
    short l_942 = 0xCA26L;
    int i, j, k;
    l_686 &= ((!(func_47(p_23.f4, (l_684[4][8][0] = ((safe_rshift_func_int16_t_s_s(l_683, (l_683 <= l_683))) , func_25(p_24, l_683)))) , 0x7C888D88L)) ^ l_683);
    for (p_21 = 0; (p_21 <= 1); p_21 += 1)
    {
        unsigned char **l_691[6];
        int *l_693 = (void*)0;
        unsigned short ***l_707 = &g_523;
        int l_736 = 0xCFC25D19L;
        int l_742 = (-1L);
        unsigned ***l_768 = &g_553[3][8];
        int i;
        for (i = 0; i < 6; i++)
            l_691[i] = &g_368;
        for (g_6 = 0; (g_6 <= 1); g_6 += 1)
        {
            unsigned short l_688 = 0x9924L;
            for (g_46 = 1; (g_46 <= 4); g_46 += 1)
            {
                int i, j, k;
                if (l_687)
                    break;
                l_688 = p_23.f2;
            }
        }
        for (g_71 = 0; (g_71 <= 1); g_71 += 1)
        {
            short l_692[4] = {0xBEC5L,0xBEC5L,0xBEC5L,0xBEC5L};
            int l_735 = 1L;
            int *l_769 = &l_736;
            int i;
            for (g_46 = 0; (g_46 <= 1); g_46 += 1)
            {
                unsigned char ***l_689 = &g_367;
                unsigned char ***l_690 = (void*)0;
                l_692[0] = ((l_691[1] = (void*)0) == (void*)0);


                return (*g_368);


            }
            l_694 = (l_693 == &g_533);
            for (l_683 = 0; (l_683 <= 1); l_683 += 1)
            {
                unsigned short l_695 = 0xC3A4L;
                char l_708 = (-1L);
                int *l_722 = &g_4;
                int *l_724 = &g_4;
                char l_725 = 0x98L;
                int l_753 = 9L;
                if ((l_695 = l_692[0]))
                {
                    unsigned l_696 = 0UL;
                    int l_709[7] = {0L,(-5L),0L,0L,(-5L),0L,0L};
                    int i, j, k;
                    if (((((l_696 = 0xFD322032L) == (safe_rshift_func_uint8_t_u_u(p_23.f4, (l_708 |= (((**g_523) = ((*p_24) >= (!((8UL || l_692[1]) & (*g_368))))) == ((*g_368) | (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((((void*)0 != l_707) , 0UL), p_21)) , 246UL), (*p_24))), p_22.f3)))))))) > l_709[0]) > l_692[0]))
                    {
                        unsigned l_718 = 4294967295UL;
                        int l_719 = 0x468CB3FDL;
                        int **l_723 = &g_319;
                        (*l_722) &= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((~(safe_add_func_int8_t_s_s(0L, (((*p_24) <= (safe_rshift_func_int8_t_s_u((l_719 ^= (l_718 |= (p_23.f3 & 4294967290UL))), 3))) & func_31(&g_4))))), (safe_sub_func_int16_t_s_s((l_722 != (l_724 = l_722)), (l_725 && g_566))))), p_22.f2));
                        (*g_215) = ((*l_723) = l_726);

                        ;
                    }
                    else
                    {
                        int *l_729 = &g_78;
                        int l_737[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_737[i] = 0x7531DA79L;
                        (*g_215) = &l_709[5];


                        l_736 |= (safe_sub_func_uint8_t_u_u(func_31(l_729), (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((*g_524))), (l_735 |= (p_23.f4 & ((p_23.f4 != ((~(*g_524)) > p_22.f4)) == ((*l_722) & (safe_rshift_func_uint16_t_u_s(((*l_722) || 0x50L), 8))))))))));
                        return l_737[2];


                    }

                    ;
                }
                else
                {
                    (*g_215) = &g_4;
                    (*l_724) &= p_21;
                }
                for (g_77 = 0; (g_77 >= (-2)); --g_77)
                {
                    int l_747 = 9L;
                    for (g_533 = (-28); (g_533 < 5); ++g_533)
                    {
                        int l_748 = 1L;
                        (*l_724) |= l_742;
                        (*l_724) ^= ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(l_747, 1)) && (l_748 , l_748)), 1)) || 0x8DE3L);
                        (*l_724) = (*l_722);
                        if (l_692[0])
                            continue;
                    }
                    (*l_724) = (l_749 | (*p_24));
                    for (g_657 = (-27); (g_657 == 12); g_657 = safe_add_func_int32_t_s_s(g_657, 8))
                    {
                        int *l_752 = &l_736;
                        (*g_215) = l_752;
                        (*g_215) = (void*)0;
                        l_752 = (void*)0;

                        ;
                    }
                }
                for (g_566 = 1; (g_566 >= 0); g_566 -= 1)
                {
                    unsigned char ***l_758 = &g_367;
                    int i, j;
                    if ((((*p_24) = ((l_753 = ((*l_724) = func_31(&l_735))) ^ g_150[(g_71 + 4)][g_566])) || ((*g_524) , ((*g_368) = func_31(&g_533)))))
                    {
                        int l_754 = 0L;
                        short *l_759 = &l_692[0];
                        unsigned short l_766 = 0x21BCL;
                        char *l_767 = &l_684[4][8][0].f4;
                        int i, j, k;
                        l_754 = ((func_31((l_685[l_683][g_566][g_566] = l_685[0][1][6])) & (l_754 || ((*p_24) = (0x9B91L > (safe_sub_func_int8_t_s_s(((g_757 = (void*)0) == l_758), (l_754 < (g_77 = ((*l_759) = g_46))))))))) != (+(safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((((safe_sub_func_int8_t_s_s(((*l_767) = (((((0x146A45A0L ^ p_22.f4) , 65535UL) & l_766) < l_766) | 0x4B7AL)), g_150[(g_71 + 4)][g_566])) , l_735) >= l_735) , l_768) != l_768), l_735)), 0xD6L))));
                    }
                    else
                    {
                        return (*g_368);


                    }
                    l_735 |= p_22.f4;
                }
                for (l_735 = 1; (l_735 <= 4); l_735 += 1)
                {
                    (*g_215) = (l_769 = &l_735);

                    ;
                    for (g_4 = 1; (g_4 <= 4); g_4 += 1)
                    {
                        union U0 **l_770 = &g_345;
                        (*l_770) = &g_66;
                        if (p_22.f0)
                            continue;
                        (*g_215) = &g_78;
                    }
                    l_769 = &l_753;

                    ;
                    (*l_722) = ((*l_769) = func_31((((safe_sub_func_int32_t_s_s(((*l_724) |= p_22.f2), (safe_mod_func_int32_t_s_s(p_23.f0, 0xBB563F35L)))) , (**g_523)) , &g_533)));
                }


            }



            l_735 |= 0x715B8BACL;
        }


    }


            ;
    for (l_687 = 0; (l_687 < (-25)); l_687 = safe_sub_func_uint32_t_u_u(l_687, 3))
    {
        int *l_799 = &g_4;
        unsigned l_801[5][4] = {{1UL,4UL,0xDA164009L,4UL},{4UL,4294967293UL,0xDA164009L,0xDA164009L},{1UL,1UL,4UL,0xDA164009L},{1UL,4294967293UL,1UL,4UL},{1UL,4UL,4UL,1UL}};
        union U0 l_809 = {4294967289UL};
        int ***l_856 = &g_215;
        int l_870[6];
        unsigned short ***l_902[3];
        int i, j;
        for (i = 0; i < 6; i++)
            l_870[i] = 0xA8474068L;
        for (i = 0; i < 3; i++)
            l_902[i] = &g_523;
        for (g_18 = 0; g_18 < 2; g_18 += 1)
        {
            for (l_749 = 0; l_749 < 10; l_749 += 1)
            {
                for (g_533 = 0; g_533 < 8; g_533 += 1)
                {
                    l_685[g_18][l_749][g_533] = &g_78;
                }
            }
        }
    }


    for (g_6 = 0; (g_6 != (-6)); g_6 = safe_sub_func_uint16_t_u_u(g_6, 2))
    {
        unsigned l_908 = 0xA84BDF7BL;
        int l_909 = 0x830E206BL;
        int l_912 = 0x352231F8L;
        char l_945[3][9] = {{0xD4L,0x2BL,0xD4L,0xD4L,0x2BL,0xD4L,0xD4L,0x2BL,0xD4L},{0x8BL,5L,0x8BL,0x8BL,5L,0x8BL,0x8BL,5L,0x8BL},{0xD4L,0x2BL,0xD4L,0xD4L,0x2BL,0xD4L,0xD4L,0x2BL,0xD4L}};
        unsigned short l_948 = 0UL;
        int i, j;
        l_909 |= (0x49C501ACL <= (p_22.f4 , (((!((safe_lshift_func_int8_t_s_u(((*p_24) = (-1L)), (*g_368))) > 0UL)) , ((l_908 != ((5UL || (0xA793L != (g_66.f2 , l_908))) ^ l_908)) <= (*l_891))) || 6L)));
        g_913 |= (l_912 ^= (l_909 <= ((func_25(func_28(((void*)0 == &g_523), ((safe_mod_func_int16_t_s_s(g_78, 3UL)) && func_31(&l_909))), l_909) , g_150[4][3]) || l_908)));
        for (l_686 = 0; (l_686 <= 3); l_686 += 1)
        {
            short l_925 = 0xCA37L;
            short l_931[6][4] = {{1L,1L,1L,1L},{1L,1L,0x1987L,1L},{1L,1L,1L,1L},{1L,1L,1L,1L},{1L,1L,0x1987L,1L},{1L,1L,1L,1L}};
            int *l_933[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_933[i] = &l_860;
            for (g_4 = 0; (g_4 <= 6); g_4 += 1)
            {
                int l_916[9][8] = {{1L,(-4L),0xBF3A10D3L,1L,0L,(-1L),0x6993D325L,0x6993D325L},{0x4896C25CL,0xE7E328C3L,0xBF3A10D3L,0xBF3A10D3L,0xE7E328C3L,0x4896C25CL,0x944A2D82L,0L},{0L,5L,0L,0xADC096AEL,0x6993D325L,1L,0x4896C25CL,1L},{0L,1L,1L,0xADC096AEL,1L,1L,0L,0L},{0xE7E328C3L,1L,(-4L),0xBF3A10D3L,1L,0L,(-1L),0x6993D325L},{0xADC096AEL,(-1L),(-1L),1L,1L,(-1L),(-1L),0xADC096AEL},{0xE7E328C3L,0xADC096AEL,1L,0x6993D325L,1L,(-1L),(-4L),5L},{0L,0x4896C25CL,(-1L),(-1L),0L,0x6993D325L,0xBF3A10D3L,1L},{0xE7E328C3L,0L,0x4896C25CL,(-1L),(-1L),(-4L),0xADC096AEL,0xBF3A10D3L}};
                int i, j;
                if ((!(p_23.f4 , p_22.f3)))
                {
                    if (p_23.f2)
                    {
                        char l_914 = 0x85L;
                        int l_915[8][3][8] = {{{0xD767763AL,4L,5L,0xD641A8E4L,(-1L),0xB98EBEE0L,0xB33D944EL,1L},{0xADED02D1L,5L,0xAEEC674DL,1L,1L,0xAEEC674DL,5L,0xADED02D1L},{0xB98EBEE0L,3L,(-1L),0x29AB1EA7L,0xAEEC674DL,0xADED02D1L,0xF7B0E5B3L,6L}},{{0xBBD452D9L,2L,6L,0xB33D944EL,0x29AB1EA7L,0xADED02D1L,0xD767763AL,0L},{(-10L),3L,0L,2L,1L,0xAEEC674DL,(-1L),0x97585F5CL},{0L,5L,0xC761AFB7L,0x55AD2FD7L,0x464374CEL,0xB98EBEE0L,4L,0xB98EBEE0L}},{{3L,4L,0L,4L,3L,2L,0xD641A8E4L,1L},{0xB33D944EL,(-9L),0x55AD2FD7L,0L,0xF1EFE597L,0x97585F5CL,6L,4L},{0L,0xADED02D1L,0x55AD2FD7L,0L,2L,0xF1EFE597L,0xD641A8E4L,3L}},{{0xF1EFE597L,0x29AB1EA7L,0L,1L,0xD767763AL,0xF7B0E5B3L,4L,0xC78BBB5DL},{(-9L),(-10L),0xC761AFB7L,0xB98EBEE0L,0L,0L,0xB98EBEE0L,0x97585F5CL},{1L,1L,(-1L),0xC761AFB7L,(-10L),(-9L),3L,0xD641A8E4L}},{{0L,0L,0x55AD2FD7L,0xAEEC674DL,0xBBD452D9L,0xD767763AL,1L,0xD641A8E4L},{0L,0xD641A8E4L,0xC78BBB5DL,0xC761AFB7L,0xB98EBEE0L,5L,0xD767763AL,0x97585F5CL},{0xB33D944EL,0xAEEC674DL,1L,0xB98EBEE0L,0xADED02D1L,0L,0L,(-10L)}},{{(-10L),1L,0xD767763AL,0x29AB1EA7L,0xD767763AL,1L,(-10L),0xF1EFE597L},{4L,3L,2L,0xD641A8E4L,1L,0xBBD452D9L,0L,0L},{0x97585F5CL,0xC761AFB7L,0xF1EFE597L,(-1L),1L,0xF7B0E5B3L,(-1L),0x29AB1EA7L}},{{4L,1L,3L,0L,0xD767763AL,0x464374CEL,0xC78BBB5DL,(-1L)},{(-10L),(-1L),0x464374CEL,0xBBD452D9L,0xADED02D1L,0xF1EFE597L,0xF1EFE597L,0xADED02D1L},{0xB33D944EL,1L,1L,0xB33D944EL,0xB98EBEE0L,(-1L),0xD641A8E4L,5L}},{{0L,0x97585F5CL,0x29AB1EA7L,0L,0xBBD452D9L,(-1L),0L,0x55AD2FD7L},{0L,0x97585F5CL,1L,0L,0L,0xC78BBB5DL,6L,0x55AD2FD7L},{0L,0xAEEC674DL,2L,0xB33D944EL,5L,0L,0x29AB1EA7L,1L}}};
                        int i, j, k;
                        l_915[0][0][3] &= (l_914 || 0xE049L);
                    }
                    else
                    {
                        int i;
                        l_916[6][1] ^= 0x270C0F14L;
                        return (*g_368);


                    }
                }
                else
                {
                    int l_921 = 1L;
                    int *l_922 = &l_860;
                    int i, j;
                    l_916[8][5] = func_31(((safe_mod_func_int8_t_s_s((*p_24), (((p_23.f2 , ((safe_rshift_func_uint16_t_u_u(p_23.f3, 9)) >= (g_150[g_4][(l_686 + 5)] = (*g_524)))) <= l_921) & (p_22.f4 , (*p_24))))) , (l_922 = ((&l_921 != (void*)0) , (void*)0))));

                    ;
                }
            }
            (*l_891) = (0x3EC6L > g_150[1][1]);
            l_909 = ((*l_891) = ((safe_add_func_uint16_t_u_u(l_925, ((0x8FF4A6ABL < (safe_add_func_uint16_t_u_u(((p_22.f3 & (65535UL | ((l_912 , (l_931[0][1] = ((safe_add_func_uint16_t_u_u((((p_23 , (((0UL || l_912) != ((void*)0 == g_930)) > (-1L))) | p_22.f2) && 0xD031L), (*g_524))) ^ 255UL))) & (*l_891)))) < l_912), p_21))) && l_912))) & 0x8DAAL));
            (*l_891) = l_931[4][2];
            for (g_60 = 0; (g_60 <= 3); g_60 += 1)
            {
                int *l_932 = (void*)0;
                for (g_46 = 0; (g_46 <= 3); g_46 += 1)
                {
                    unsigned l_937 = 8UL;
                    unsigned char l_939 = 0UL;
                    for (g_857 = 0; (g_857 <= 3); g_857 += 1)
                    {
                        (*g_215) = l_932;
                        (*g_215) = l_933[0];
                    }
                    for (l_909 = 0; (l_909 <= 3); l_909 += 1)
                    {
                        int l_936[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_936[i] = (-1L);
                        l_936[0] = (safe_lshift_func_uint16_t_u_u(((0x490EFEDCL >= ((l_684[(g_46 + 1)][(l_686 + 3)][l_686] , p_23.f4) <= (+(p_23.f0 && (*g_368))))) , ((**g_523) , p_22.f4)), 10));
                    }
                    l_912 &= l_937;
                    for (g_4 = 3; (g_4 >= 0); g_4 -= 1)
                    {
                        int l_938[10][10] = {{(-3L),0xB948C26FL,1L,0L,0L,1L,(-1L),0x17510360L,(-1L),1L},{1L,0L,0x5DC6D296L,0L,1L,0xDE20B140L,3L,1L,0L,0L},{0x17510360L,(-3L),0L,1L,1L,0x61B0745AL,0L,(-3L),(-3L),0L},{0x29CC8E8DL,1L,1L,1L,1L,0x29CC8E8DL,0L,0L,0x61B0745AL,1L},{0xB948C26FL,0x17510360L,(-1L),3L,0L,0x5DC6D296L,3L,0xB948C26FL,0xC034E7A2L,0xB948C26FL},{0xB948C26FL,0x29CC8E8DL,(-3L),1L,(-3L),0x29CC8E8DL,0xB948C26FL,(-1L),0x29CC8E8DL,0x17510360L},{0x29CC8E8DL,0xB948C26FL,(-1L),0x29CC8E8DL,0x17510360L,0x61B0745AL,(-3L),0L,(-1L),(-1L)},{0x17510360L,0xB948C26FL,0xDE20B140L,0L,0L,0xDE20B140L,0xB948C26FL,0x17510360L,(-1L),3L},{1L,0x29CC8E8DL,1L,0xA8F3DFFBL,(-1L),0x61B0745AL,1L,(-1L),1L,3L},{0L,0L,1L,(-1L),0x17510360L,(-1L),1L,0L,0L,1L}};
                        int i, j;
                        l_909 = (~(l_912 &= 0x63AF9397L));
                        l_939 = l_938[6][1];
                        l_912 ^= 0x6856EA24L;
                    }
                }
            }
        }
        if (((((l_948 = ((((((safe_mod_func_uint8_t_u_u(((((*g_368) = 0xEFL) | p_21) ^ l_942), (safe_add_func_int32_t_s_s((*l_891), (((l_909 |= (l_945[2][5] || l_908)) < (p_22.f2 | (safe_rshift_func_uint8_t_u_u((p_21 || ((p_23.f3 <= l_912) != p_23.f0)), p_22.f0)))) & l_945[2][5]))))) <= p_22.f4) > p_23.f4) | p_21) != (*l_891)) > 0x1AL)) && (*l_891)) && 0xDBC9C625L) ^ 248UL))
        {
            unsigned short l_949 = 0xB814L;
            return l_949;


        }
        else
        {
            if (p_23.f2)
                break;
        }
    }


    return p_23.f3;


}







static union U0 func_25(char * p_26, unsigned p_27)
{
    int *l_677 = &g_78;
    union U0 l_678 = {5UL};
    (*l_677) = ((safe_sub_func_int16_t_s_s(g_66.f2, (g_77 |= p_27))) < p_27);
    return l_678;


    }







static char * func_28(unsigned short p_29, unsigned short p_30)
{
    int *l_542 = (void*)0;
    int l_545 = 0xB70E39FEL;
    unsigned ***l_554[2];
    union U0 l_556 = {0x80031B0BL};
    int l_571[6][1] = {{1L},{1L},{0x19CDF985L},{1L},{1L},{0x19CDF985L}};
    unsigned short l_576 = 8UL;
    char l_598 = 1L;
    short l_604[9];
    unsigned short ***l_671 = &g_523;
    int i, j;
    for (i = 0; i < 2; i++)
        l_554[i] = &g_553[6][8];
    for (i = 0; i < 9; i++)
        l_604[i] = (-5L);
    if (func_31(l_542))
    {
        int l_543 = 7L;
        int *l_544[10][10][2] = {{{&g_533,&g_533},{&g_533,(void*)0},{&g_533,(void*)0},{&g_6,&g_78},{&g_78,&g_78},{&g_6,(void*)0},{&g_533,(void*)0},{&g_533,&g_533},{&g_533,&g_4},{(void*)0,&g_533}},{{(void*)0,&g_533},{(void*)0,&g_6},{&g_78,(void*)0},{&g_6,&g_6},{(void*)0,&g_4},{&g_6,(void*)0},{&g_4,(void*)0},{&g_4,&g_78},{&g_6,&g_6},{&g_78,&g_6}},{{&g_533,&g_533},{&g_78,(void*)0},{&g_6,&g_533},{(void*)0,(void*)0},{(void*)0,(void*)0},{&g_78,&g_533},{&g_4,&g_6},{&g_533,&g_78},{&g_4,&g_78},{(void*)0,(void*)0}},{{&g_6,&g_78},{&g_78,(void*)0},{&g_4,&g_6},{&g_533,(void*)0},{&g_78,&g_533},{(void*)0,&g_6},{(void*)0,(void*)0},{&g_78,&g_6},{&g_533,&g_6},{&g_533,&g_533}},{{&g_533,&g_533},{&g_4,&g_533},{&g_4,&g_533},{&g_533,&g_533},{&g_533,&g_6},{&g_533,&g_6},{&g_78,(void*)0},{(void*)0,&g_6},{(void*)0,&g_6},{&g_6,&g_78}},{{&g_78,(void*)0},{(void*)0,(void*)0},{&g_4,&g_78},{&g_78,&g_533},{&g_533,&g_6},{&g_6,&g_78},{&g_4,&g_533},{(void*)0,&g_78},{&g_6,&g_78},{&g_533,&g_533}},{{(void*)0,&g_4},{&g_533,(void*)0},{(void*)0,(void*)0},{&g_533,(void*)0},{&g_6,&g_533},{&g_6,&g_6},{&g_4,(void*)0},{&g_6,&g_533},{&g_6,&g_78},{&g_533,(void*)0}},{{(void*)0,&g_6},{(void*)0,&g_533},{(void*)0,&g_4},{&g_6,&g_6},{&g_533,(void*)0},{&g_78,&g_78},{&g_78,(void*)0},{&g_4,(void*)0},{&g_78,&g_6},{&g_6,&g_6}},{{&g_78,(void*)0},{&g_4,(void*)0},{&g_78,&g_78},{(void*)0,(void*)0},{&g_4,&g_6},{&g_78,(void*)0},{&g_78,&g_6},{&g_533,&g_78},{&g_533,&g_533},{&g_4,(void*)0}},{{&g_78,&g_4},{&g_6,&g_78},{(void*)0,(void*)0},{&g_78,&g_78},{(void*)0,&g_533},{&g_6,&g_6},{&g_533,&g_78},{&g_6,(void*)0},{&g_533,(void*)0},{&g_4,&g_78}}};
        unsigned **l_551 = (void*)0;
        unsigned ***l_550 = &l_551;
        unsigned ****l_555 = &g_552[4];
        union U0 **l_557 = &g_345;
        char **l_564 = &g_17[0][2][0];
        short *l_565 = &g_566;
        int i, j, k;
        (*l_557) = (func_47(p_30, func_47(((((l_543 > ((l_545 ^= l_543) && (safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((p_30 == (*g_368)) ^ (l_550 == ((*l_555) = (l_554[1] = g_552[2])))), 0x10L)), func_31((((func_31(&l_545) | 65535UL) || 9L) , &l_545)))))) < 0x4944L) || p_29) , 0xC41F70F2L), l_556)) , &g_66);
        l_544[6][0][1] = &g_78;
    }
    else
    {
        unsigned char l_572 = 255UL;
        char **l_573[8];
        int l_584 = 0xD418378FL;
        int l_586 = 6L;
        int l_616[9][5] = {{0L,0x084A1313L,0x850BDF1DL,0L,(-5L)},{0xE3FB34E9L,0x850BDF1DL,0x850BDF1DL,0xE3FB34E9L,(-1L)},{0xE3FB34E9L,0x084A1313L,0x8008E90DL,0xE3FB34E9L,(-5L)},{0L,0x084A1313L,0x850BDF1DL,0L,(-5L)},{0xE3FB34E9L,0x850BDF1DL,0x850BDF1DL,0xE3FB34E9L,(-1L)},{0xE3FB34E9L,0x084A1313L,0x8008E90DL,0xE3FB34E9L,(-5L)},{0L,0x084A1313L,0x850BDF1DL,0L,(-5L)},{0xE3FB34E9L,0x850BDF1DL,0x850BDF1DL,0xE3FB34E9L,(-1L)},{0xE3FB34E9L,0x084A1313L,0x8008E90DL,0xE3FB34E9L,(-5L)}};
        int i, j;
        for (i = 0; i < 8; i++)
            l_573[i] = (void*)0;
        for (g_566 = (-9); (g_566 == 10); g_566 = safe_add_func_int32_t_s_s(g_566, 3))
        {
            unsigned l_569[4];
            int **l_570[3][5][8] = {{{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542}},{{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542}},{{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542},{&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_569[i] = 0UL;
            g_319 = ((*g_215) = ((((l_569[1] , l_569[1]) == l_569[3]) ^ l_569[2]) , &l_545));

            ;
            (*g_319) = func_31(&l_545);
            (*g_215) = &g_533;
            l_571[5][0] = (*g_319);
        }



        if (((((**g_523) , l_572) , l_573[0]) == l_573[6]))
        {
            int l_583 = (-5L);
            int *l_585[6][2] = {{&l_545,&l_545},{&l_545,&l_545},{&l_545,&l_545},{&l_545,&l_545},{&l_545,&l_545},{&l_545,&l_545}};
            int i, j;
            l_586 = (l_584 = ((safe_add_func_int16_t_s_s(l_572, (p_30 == l_576))) , ((~(0x6DL ^ (safe_add_func_uint8_t_u_u(p_30, (0x588701BEL != (((*g_318) = (((safe_rshift_func_uint16_t_u_s((**g_523), 15)) >= (safe_div_func_uint32_t_u_u((((&l_572 == (void*)0) && p_29) < l_572), p_30))) < l_572)) , l_583)))))) | 246UL)));
        }
        else
        {
            int l_587 = 0xF5166529L;
            l_584 = l_587;
            l_586 = func_31(&g_4);
        }
        l_584 &= p_30;
        if (l_586)
        {
            int *l_601 = &l_586;
            char *l_606 = &l_556.f4;
            short *l_608[7][1][8];
            unsigned short l_631[3];
            unsigned **l_670 = &g_318;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 8; k++)
                        l_608[i][j][k] = (void*)0;
                }
            }
            for (i = 0; i < 3; i++)
                l_631[i] = 1UL;
            for (l_572 = 13; (l_572 <= 42); l_572 = safe_add_func_uint8_t_u_u(l_572, 5))
            {
                (*g_215) = &g_4;
                if (p_30)
                {
                    int *l_590 = (void*)0;
                    int *l_591[2][3][1] = {{{&l_584},{&g_78},{&l_584}},{{&g_78},{&l_584},{&g_78}}};
                    unsigned ***l_605 = &g_553[5][3];
                    int i, j, k;
                    l_584 ^= (-1L);
                    for (g_61 = 0; (g_61 <= 6); g_61 += 1)
                    {
                        if (p_30)
                            break;
                    }
                    (*l_601) = (safe_rshift_func_int16_t_s_s(g_4, (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_598 ^ (safe_lshift_func_int16_t_s_u(func_31(l_601), 11))), ((((*g_368) = (65535UL == ((p_29 | p_29) != (safe_sub_func_int32_t_s_s((((((void*)0 == &l_601) , 0x36CC264DL) != p_30) <= l_604[3]), p_29))))) , l_605) != (void*)0))), p_30))));
                    return &g_71;




                }
                else
                {
                    char *l_607 = (void*)0;
                    for (g_18 = 0; (g_18 <= 6); g_18 += 1)
                    {
                        int i, j;
                        if (g_150[g_18][(g_18 + 2)])
                            break;
                        if (l_584)
                            break;
                    }
                    return l_607;




                }
            }
            (*g_215) = (p_30 , l_601);


            if ((*l_601))
            {
                int l_615 = 0x24A055F5L;
                unsigned l_624 = 4294967288UL;
                short *l_627 = &g_77;
                short **l_628 = (void*)0;
                short **l_629 = &l_608[0][0][1];
                short *l_630[4];
                int *l_634 = &g_6;
                union U0 **l_641 = &g_345;
                union U0 ***l_640[6];
                union U0 ***l_642 = &l_641;
                int i;
                for (i = 0; i < 4; i++)
                    l_630[i] = &g_566;
                for (i = 0; i < 6; i++)
                    l_640[i] = &l_641;
                for (p_30 = 0; (p_30 != 24); ++p_30)
                {
                    unsigned char l_621[7] = {0xAFL,0xAFL,0xAFL,0xAFL,0xAFL,0xAFL,0xAFL};
                    int i;
                    for (g_364 = 0; (g_364 <= 40); g_364 = safe_add_func_int32_t_s_s(g_364, 5))
                    {
                        (*l_601) &= (&l_604[3] == (void*)0);
                        (*l_601) = l_615;
                    }
                    if (l_616[7][0])
                        break;
                    for (g_77 = (-20); (g_77 == 6); ++g_77)
                    {
                        union U0 **l_619 = (void*)0;
                        union U0 **l_620 = &g_345;
                        (*g_215) = (void*)0;
                        (*g_215) = &g_4;
                        (*l_620) = &g_66;
                        if (l_621[5])
                            continue;
                    }
                }
                (*l_601) = ((safe_div_func_uint32_t_u_u(((((((*l_606) ^= l_624) , (((*g_368) == 8L) && (safe_rshift_func_int8_t_s_u(((!(((l_627 = &g_77) != ((*l_629) = &g_77)) && p_30)) >= p_29), 3)))) | (g_566 = (p_30 & ((g_77 = (-1L)) , l_631[0])))) | 0x50L) | g_150[5][8]), 0x3D2AD775L)) | 1UL);


                for (l_615 = 0; (l_615 == (-18)); l_615--)
                {
                    union U0 *l_639 = &g_66;
                    for (g_533 = 0; (g_533 <= 4); g_533 += 1)
                    {
                        (*g_215) = l_634;
                        (*l_601) &= (p_30 , (p_30 & p_29));
                    }
                    for (g_364 = 0; (g_364 <= 6); g_364 += 1)
                    {
                        (*g_215) = (((l_616[8][1] ^ (+((((safe_rshift_func_uint16_t_u_s((((safe_add_func_int8_t_s_s((*l_634), (&g_66 == l_639))) , l_640[1]) == l_642), g_364)) , (safe_mod_func_uint32_t_u_u(2UL, 0x2AE69BD7L))) ^ 0xDFA2L) , (*l_601)))) == p_29) , (void*)0);
                    }
                }
                l_584 = 0x8FD8D455L;
            }
            else
            {
                unsigned l_647 = 0xDBADC516L;
                char *l_668 = (void*)0;
                unsigned **l_669 = (void*)0;
                for (g_71 = 0; (g_71 == (-24)); g_71 = safe_sub_func_int8_t_s_s(g_71, 9))
                {
                    int *l_661 = (void*)0;
                    (*l_601) ^= ((((*g_524) < g_533) > l_647) == 6UL);
                    if ((*l_601))
                    {
                        int *l_656 = &g_533;
                        int *l_658 = (void*)0;
                        int *l_659 = (void*)0;
                        int *l_660 = &l_545;
                        (*l_660) ^= func_31(((safe_mod_func_uint16_t_u_u(p_29, (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((!p_30), (safe_sub_func_uint16_t_u_u(((func_31(((*g_215) = l_656)) != l_586) , ((void*)0 == l_606)), (0x3DL != (g_657 ^= (*g_368))))))) >= (*g_368)), p_30)))) , l_601));
                        (*g_215) = ((func_31(l_661) == (safe_add_func_uint32_t_u_u(p_29, ((safe_sub_func_uint8_t_u_u(2UL, (*l_660))) != l_647)))) , &l_545);
                        (*l_601) |= ((*l_660) &= p_29);
                        if ((*l_656))
                            break;
                    }
                    else
                    {
                        (*l_601) = ((*l_601) , (safe_lshift_func_int16_t_s_s(1L, 4)));
                        return &g_18;




                    }
                    return l_668;




                }
                l_670 = l_669;

                ;
            }


            ;
        }
        else
        {
            unsigned short l_672 = 1UL;
            int *l_673[1][9][4] = {{{&g_6,&l_545,&l_545,&g_6},{&l_584,&l_545,&l_584,&l_545},{&l_545,&l_545,&l_584,&l_584},{&l_584,&l_584,&l_545,&l_584},{&g_6,&l_545,&g_6,&l_545},{&g_6,&l_545,&l_545,&g_6},{&l_584,&l_545,&l_584,&l_545},{&l_545,&l_545,&l_584,&l_584},{&l_584,&l_584,&l_545,&l_584}}};
            int l_674 = (-2L);
            int i, j, k;
            l_672 |= (l_671 == (void*)0);
            l_674 = l_672;
        }


            }



        l_545 = p_29;
    return &g_18;




}







static unsigned short func_31(int * p_32)
{
    union U0 l_531 = {0xA1F4D014L};
    int l_534 = 0L;
    for (g_78 = 0; (g_78 > (-23)); --g_78)
    {
        int l_529 = 9L;
        char *l_530 = &g_18;
        int *l_532[7];
        int i;
        for (i = 0; i < 7; i++)
            l_532[i] = &g_533;
        l_534 = (((*l_530) = l_529) , (l_531 , l_531.f4));
        for (g_533 = 3; (g_533 >= 1); g_533 -= 1)
        {
            int i, j;
            if (g_150[g_533][(g_533 + 4)])
                break;
        }
        for (g_533 = 14; (g_533 == 6); g_533--)
        {
            union U0 l_539[6] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
            int l_540 = 0x7AB968F1L;
            int l_541 = (-8L);
            int i;
            (*g_215) = &l_534;
            for (g_60 = 0; g_60 < 7; g_60 += 1)
            {
                l_532[g_60] = &g_78;
            }
            l_541 |= (safe_mod_func_uint16_t_u_u((l_539[0] , (l_540 = (**g_523))), (**g_523)));
        }



        return (**g_523);


    }
    return (*g_524);
}







static int * func_33(unsigned char p_34)
{
    unsigned *l_45 = &g_46;
    int l_50 = 1L;
    union U0 l_51 = {4294967293UL};
    char *l_55[7];
    int *l_58 = (void*)0;
    unsigned *l_59[2];
    unsigned l_62 = 1UL;
    int *l_63 = &l_50;
    char **l_64 = &l_55[0];
    int **l_65 = &l_58;
    unsigned char l_67 = 1UL;
    char l_68[3];
    short l_83 = 0xD7E0L;
    unsigned short *l_149[1][8] = {{&g_150[5][6],&g_150[5][6],&g_150[5][3],&g_150[5][6],&g_150[5][6],&g_150[5][3],&g_150[5][6],&g_150[5][6]}};
    unsigned short l_172 = 5UL;
    char l_187 = 0x0AL;
    int l_238 = 0L;
    unsigned short l_251[3];
    char l_357[6] = {0x44L,0x44L,0x44L,0x44L,0x44L,0x44L};
    unsigned char *l_366 = &l_51.f2;
    unsigned char **l_365 = &l_366;
    unsigned l_369 = 4294967286UL;
    unsigned l_426[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
    unsigned l_455 = 0UL;
    unsigned short l_498[4] = {65528UL,65528UL,65528UL,65528UL};
    int i, j;
    for (i = 0; i < 7; i++)
        l_55[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_59[i] = &g_60;
    for (i = 0; i < 3; i++)
        l_68[i] = 0xF9L;
    for (i = 0; i < 3; i++)
        l_251[i] = 0x912FL;
    (*l_63) = (safe_sub_func_uint16_t_u_u(((((*l_45) = g_18) & (((p_34 , func_47(l_50, l_51)) , l_55[0]) != (((g_61 = (1UL || (p_34 < (g_60 = (safe_rshift_func_uint8_t_u_u(((l_58 = (void*)0) == &l_50), l_51.f4)))))) || p_34) , l_55[0]))) , l_62), 65531UL));
    if (((p_34 > (((p_34 >= (0L != ((((*l_64) = &g_18) == &g_18) >= (((l_65 != ((g_6 , g_66) , &l_63)) == p_34) , 1L)))) >= l_67) && l_68[2])) , g_66.f4))
    {
        int *l_69 = &g_6;
        int **l_70[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        short *l_76 = &g_77;
        int i;
        l_63 = ((*l_65) = l_69);

        ;
        ;
        g_71 ^= (*l_58);
        g_78 |= (g_60 || (safe_rshift_func_uint16_t_u_u((1L || ((*l_76) = (safe_add_func_int16_t_s_s(p_34, p_34)))), g_6)));
        l_83 |= ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((1UL | 0UL), p_34)), 0x6467BE22L)) < (l_51 , p_34));
    }
    else
    {
        unsigned short l_90[8] = {0xF3D9L,0xF3D9L,0xF3D9L,0xF3D9L,0xF3D9L,0xF3D9L,0xF3D9L,0xF3D9L};
        unsigned char *l_91 = &g_66.f2;
        unsigned l_118 = 0x103C12D2L;
        int l_158[9] = {0xB2A03D7EL,0L,0L,0xB2A03D7EL,0L,0L,0xB2A03D7EL,0L,0L};
        union U0 *l_194 = (void*)0;
        int i;
        if ((g_78 || ((safe_div_func_uint8_t_u_u(((*l_91) = (safe_sub_func_uint8_t_u_u((6L < (l_90[0] != p_34)), p_34))), l_90[0])) || p_34)))
        {
            char l_99 = (-7L);
            char l_126 = 8L;
            int *l_193 = &l_158[2];
            for (l_62 = 0; (l_62 != 45); l_62 = safe_add_func_int16_t_s_s(l_62, 4))
            {
                unsigned char **l_96 = &l_91;
                unsigned char *l_98 = (void*)0;
                unsigned char **l_97 = &l_98;
                unsigned short *l_100 = &l_51.f3;
                int l_117[5] = {0x91CC1712L,0x91CC1712L,0x91CC1712L,0x91CC1712L,0x91CC1712L};
                int i;
                (*l_63) ^= (((safe_add_func_int16_t_s_s((((*l_97) = ((*l_96) = (void*)0)) != (void*)0), ((*l_100) = (((void*)0 == &g_60) , l_99)))) != p_34) , 3L);

                                ;
                g_78 = g_46;
                if ((0xA94EL == (safe_add_func_uint16_t_u_u((~(safe_add_func_int8_t_s_s((!((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((~((((((safe_div_func_uint8_t_u_u(5UL, (safe_div_func_uint8_t_u_u((((*l_45) = (((0x80L >= (safe_rshift_func_int16_t_s_u((0x65E0L | (p_34 & p_34)), 7))) | ((safe_mod_func_int32_t_s_s((l_99 , 0x0AD0C79EL), p_34)) <= 0xADL)) < p_34)) != p_34), 0x91L)))) < p_34) || 0x8538E7D4L) < 0xB5F4L) | 0xED53B0E2L) < (*l_63))) | l_117[1]), l_99)), 12)) , l_118)), (-1L)))), l_99))))
                {
                    for (p_34 = 0; (p_34 < 7); ++p_34)
                    {
                        int *l_121 = &l_117[1];
                        (*l_63) = (p_34 >= (l_117[0] , 0x89L));
                        (*l_65) = (*l_65);
                        return &g_78;


                    }
                }
                else
                {
                    for (l_118 = (-22); (l_118 >= 31); ++l_118)
                    {
                        short *l_127[6][3][4] = {{{(void*)0,&g_77,&l_83,(void*)0},{(void*)0,&l_83,(void*)0,(void*)0},{&g_77,&g_77,&g_77,(void*)0}},{{&g_77,(void*)0,&g_77,&g_77},{&l_83,(void*)0,&g_77,&g_77},{(void*)0,&g_77,&g_77,(void*)0}},{{(void*)0,&g_77,&g_77,(void*)0},{(void*)0,&g_77,&g_77,&g_77},{&l_83,&l_83,&g_77,(void*)0}},{{&g_77,(void*)0,&g_77,&g_77},{&g_77,&g_77,(void*)0,&g_77},{(void*)0,(void*)0,&l_83,&l_83}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_77,&g_77,&g_77,(void*)0},{&l_83,&g_77,&g_77,&l_83}},{{&g_77,(void*)0,&g_77,&l_83},{(void*)0,&g_77,&l_83,&g_77},{&l_83,&g_77,(void*)0,(void*)0}}};
                        int l_128 = 8L;
                        int i, j, k;
                        (*l_63) ^= (l_118 == (safe_lshift_func_int16_t_s_s((l_126 , (l_128 ^= (-4L))), 4)));
                        (*l_63) |= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_34, 7)) < (g_71 , ((safe_rshift_func_uint16_t_u_s(g_4, 13)) || g_60))), p_34));
                        if (l_128)
                            break;
                        l_128 = p_34;
                    }
                    for (p_34 = 0; (p_34 > 25); p_34 = safe_add_func_int16_t_s_s(p_34, 2))
                    {
                        union U0 *l_139 = &l_51;
                        (*l_63) = ((safe_rshift_func_int8_t_s_u((((*l_139) = g_66) , ((void*)0 != &g_17[0][3][3])), 3)) ^ 0xEC31A112L);
                    }

                                        (*l_63) ^= g_71;
                    for (g_71 = 0; (g_71 >= 9); g_71 = safe_add_func_int32_t_s_s(g_71, 5))
                    {
                        int *l_142 = &g_78;
                        if (l_118)
                            break;
                        return l_142;


                    }
                }

                            }

                        ;
            if (l_99)
            {
                union U0 *l_153 = &g_66;
                (*l_63) = ((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(9UL, (safe_add_func_uint32_t_u_u(((*l_45) = ((p_34 , l_149[0][1]) == &g_150[5][3])), (safe_mod_func_uint16_t_u_u(0x3717L, (((*l_153) = g_66) , (p_34 ^ p_34)))))))), ((safe_rshift_func_int16_t_s_s(g_60, l_99)) >= 0xE0AEL))) , 4L);
            }
            else
            {
                unsigned l_166 = 0xB455570BL;
                int *l_177 = &g_4;
                char *l_180 = &g_71;
                if (p_34)
                {
                    union U0 *l_160 = &l_51;
                    unsigned short *l_167 = &l_90[0];
                    int l_173[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_173[i] = 3L;
                    for (l_83 = 0; (l_83 > 24); l_83++)
                    {
                        int l_159[7][2][5] = {{{6L,0L,(-1L),(-1L),0xE6694988L},{0x7E967E9FL,(-1L),(-2L),0xD666DE7AL,(-2L)}},{{(-8L),(-8L),0xE6694988L,(-1L),(-1L)},{7L,0L,(-8L),0x4BBC70BFL,0x7E967E9FL}},{{(-9L),0xE6694988L,0x55C0660AL,0xE6694988L,(-9L)},{1L,0L,0x25DDC992L,0x4559E295L,0xD666DE7AL}},{{(-1L),(-8L),(-6L),0L,0L},{0x4559E295L,(-1L),0x4559E295L,0L,0xD666DE7AL}},{{0xEADF9545L,0L,(-8L),8L,(-9L)},{0xD666DE7AL,0x7E967E9FL,1L,1L,0x7E967E9FL}},{{(-6L),1L,(-8L),(-9L),(-1L)},{(-1L),0xD010A2F6L,0x4559E295L,(-8L),(-2L)}},{{(-6L),(-6L),(-6L),(-6L),0xE6694988L},{(-1L),1L,0x25DDC992L,1L,(-8L)}}};
                        union U0 **l_161 = &l_160;
                        int i, j, k;
                        if (l_158[7])
                            break;
                        if (l_159[5][0][3])
                            continue;
                        (*l_161) = l_160;
                    }
                    if ((safe_sub_func_uint16_t_u_u(((((l_166 |= (safe_rshift_func_uint16_t_u_s(((void*)0 == &g_18), 7))) > ((*l_167) &= (((void*)0 == l_167) != (p_34 >= ((g_150[1][2] != (safe_lshift_func_int16_t_s_s(p_34, (p_34 <= (safe_add_func_uint8_t_u_u((l_172 <= g_18), p_34)))))) >= 0UL))))) != p_34) , 0xAE95L), l_173[1])))
                    {
                        (*l_65) = &l_158[7];

                        ;
                        (*l_63) = (safe_unary_minus_func_uint16_t_u((((!(safe_add_func_int32_t_s_s(8L, g_78))) ^ p_34) <= (((*l_65) = l_177) == &g_78))));

                        ;
                    }
                    else
                    {
                        int *l_183 = &l_158[7];
                        int l_188[6] = {(-1L),0xE7450B37L,0xE7450B37L,(-1L),0xE7450B37L,0xE7450B37L};
                        int i;
                        l_158[2] = ((+((4294967292UL > (((safe_lshift_func_uint8_t_u_s(g_60, (l_173[1] = ((*l_63) = p_34)))) & 5L) & (&g_71 != l_180))) <= p_34)) || (safe_rshift_func_int16_t_s_u((((((void*)0 != l_183) ^ 3UL) & g_6) >= (-3L)), p_34)));
                        g_78 ^= ((safe_sub_func_uint8_t_u_u(p_34, (safe_unary_minus_func_int16_t_s(l_187)))) & l_188[3]);
                    }

                    ;
                    (*l_65) = &l_158[6];

                    ;
                }
                else
                {
                    short *l_191 = (void*)0;
                    short *l_192 = &l_83;
                    if ((safe_add_func_int16_t_s_s(g_66.f4, (((*l_192) &= p_34) >= g_61))))
                    {
                        union U0 **l_195 = &l_194;
                        l_193 = &g_4;

                        ;
                        g_78 = l_158[0];
                        (*l_63) &= (&g_150[5][3] != &l_172);
                        (*l_195) = l_194;
                    }
                    else
                    {
                        int l_196 = 2L;
                        l_196 = p_34;
                        (*l_65) = &g_4;

                        ;
                        return &g_78;


                    }

                    ;
                    (*l_65) = (void*)0;
                }

                ;
                ;
            }

            ;
            ;
            for (g_60 = 10; (g_60 == 20); ++g_60)
            {
                int *l_199 = &g_6;
                return l_199;


            }
        }
        else
        {
            int *l_200 = &g_6;
            (*l_65) = l_200;

            ;
            for (g_18 = 0; (g_18 <= 6); g_18 += 1)
            {
                char l_204 = 6L;
                int l_205 = (-4L);
                int l_206 = 0xB6824987L;
                int **l_211 = (void*)0;
            }
            (*l_65) = l_200;
        }

                ;
                ;
    }



    ;
        if (p_34)
    {
        int *l_239 = &l_50;
        int *l_260[7][4] = {{&l_50,&g_4,&l_50,&l_50},{&l_50,&l_50,&l_238,&l_238},{&g_4,&g_4,(void*)0,&l_50},{&g_4,&g_78,&l_238,&g_4},{(void*)0,&l_50,(void*)0,&l_238},{&l_50,&l_50,(void*)0,&g_4},{&l_50,&g_78,&g_78,&l_50}};
        unsigned **l_261[1];
        unsigned ***l_262 = &l_261[0];
        unsigned l_275 = 4294967293UL;
        int l_286 = 0L;
        unsigned char l_340 = 0x47L;
        char l_341 = 0x6FL;
        union U0 *l_343 = &g_66;
        int i, j;
        for (i = 0; i < 1; i++)
            l_261[i] = &g_221;
        if (l_238)
        {
            (*l_65) = (func_47(p_34, g_66) , l_239);

            ;
            return (*g_215);


        }
        else
        {
            short *l_246[9] = {&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77,&g_77};
            union U0 l_256 = {0UL};
            int l_258 = (-2L);
            int i;
            for (g_78 = 1; (g_78 >= 0); g_78 -= 1)
            {
                unsigned char *l_257 = &l_51.f2;
                int *l_259[7][10][1] = {{{&g_4},{&l_50},{&g_4},{(void*)0},{&l_258},{&g_4},{&g_4},{&l_238},{&g_6},{(void*)0}},{{&g_6},{&l_238},{&g_4},{&g_4},{&l_258},{(void*)0},{&g_4},{&l_50},{&g_4},{&l_50}},{{&g_4},{(void*)0},{&l_258},{&g_4},{&g_4},{&l_238},{&g_6},{(void*)0},{&g_6},{&l_238}},{{&g_4},{&g_4},{&l_258},{(void*)0},{&g_4},{&l_50},{&g_4},{&l_50},{&g_4},{(void*)0}},{{&l_258},{&g_4},{&g_4},{&l_238},{&g_6},{(void*)0},{&g_6},{&l_238},{&g_4},{&g_4}},{{&l_258},{(void*)0},{&g_4},{&l_50},{&g_4},{&l_50},{&g_4},{(void*)0},{&l_258},{&g_4}},{{&g_4},{&l_238},{&g_6},{(void*)0},{&l_258},{&l_50},{&l_238},{&l_238},{&g_4},{&l_238}}};
                int i, j, k;
                for (g_61 = 0; (g_61 <= 6); g_61 += 1)
                {
                    (*l_239) = 0xC25EFED8L;
                }
                l_258 = ((0UL || ((safe_mod_func_uint8_t_u_u(((*l_257) ^= (((&g_77 == l_246[0]) != (((safe_add_func_uint16_t_u_u(((*l_239) = (safe_add_func_int16_t_s_s(l_251[1], (safe_div_func_int32_t_s_s((((((safe_lshift_func_uint16_t_u_u((g_66 , g_150[5][3]), (p_34 || ((((*l_239) < g_150[6][0]) < p_34) | 9L)))) , l_256) , (-1L)) || 0L) , 0x13E70040L), 0x37839183L))))), p_34)) >= p_34) <= p_34)) != 4294967295UL)), 0x04L)) == p_34)) >= p_34);
                return (*g_215);


            }
            (*l_65) = (void*)0;

            ;
        }

        ;
        (*l_262) = l_261[0];
        (*l_239) |= p_34;
        for (g_61 = 0; (g_61 <= 1); g_61 += 1)
        {
            short l_276 = 1L;
            int l_278 = 0x9C20EA0EL;
            int l_296 = 0x6F2E0499L;
            unsigned short l_315 = 0x80B8L;
            unsigned char l_316 = 0xF0L;
            for (g_78 = 1; (g_78 >= 0); g_78 -= 1)
            {
                int l_285[4][9][4] = {{{(-2L),0L,0L,0L},{0x085DB9D8L,0x085DB9D8L,0L,0x3726885EL},{(-2L),0xFF62609AL,1L,0L},{1L,1L,0x3726885EL,1L},{0x3726885EL,1L,1L,0L},{1L,0xFF62609AL,(-2L),0x3726885EL},{0L,0x085DB9D8L,0x085DB9D8L,0L},{0L,0L,(-2L),0L},{1L,0L,1L,0x5113CCDAL}},{{0x3726885EL,(-1L),0x3726885EL,0x5113CCDAL},{1L,0L,1L,0L},{(-2L),0L,0L,0L},{0x085DB9D8L,0x085DB9D8L,0L,0x3726885EL},{(-2L),0xFF62609AL,1L,0L},{1L,1L,0x3726885EL,1L},{0x3726885EL,1L,1L,0L},{1L,0xFF62609AL,(-2L),0x3726885EL},{0L,0x085DB9D8L,0x085DB9D8L,0L}},{{0L,0L,(-2L),0L},{1L,0L,1L,0x5113CCDAL},{0x3726885EL,(-1L),0x3726885EL,0x5113CCDAL},{1L,0L,1L,0L},{(-2L),0L,0x3726885EL,0x3726885EL},{0L,0L,0x3726885EL,1L},{0xFF62609AL,(-1L),0x085DB9D8L,(-2L)},{0L,0x085DB9D8L,1L,0x085DB9D8L},{1L,0x085DB9D8L,0L,(-2L)}},{{0x085DB9D8L,(-1L),0xFF62609AL,1L},{0x3726885EL,0L,0L,0x3726885EL},{0x3726885EL,(-2L),0xFF62609AL,1L},{0x085DB9D8L,0x3726885EL,0L,0L},{1L,0x5113CCDAL,1L,0L},{0L,0x3726885EL,0x085DB9D8L,1L},{0xFF62609AL,(-2L),0x3726885EL,0x3726885EL},{0L,0L,0x3726885EL,1L},{0xFF62609AL,(-1L),0x085DB9D8L,(-2L)}}};
                short *l_293 = &g_77;
                int i, j, k;
                for (l_62 = 0; (l_62 <= 1); l_62 += 1)
                {
                    int l_263 = 0L;
                    int l_277 = 0xC0F58D22L;
                    for (l_172 = 0; (l_172 <= 1); l_172 += 1)
                    {
                        union U0 l_281 = {0xFD6B91F2L};
                        short *l_284 = &g_77;
                        int i;
                        l_278 |= (l_263 | ((*l_239) = (p_34 != (l_277 = (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(g_18, (safe_unary_minus_func_uint16_t_u((p_34 != p_34))))) < (l_263 == (g_77 != g_150[5][3]))), (safe_sub_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((l_275 <= 0x838EL), 1L)) , l_276), 1L))))))));
                        (*l_239) |= ((((&l_51 != &g_66) , p_34) ^ (func_47((l_277 = p_34), l_281) , ((*l_284) = ((safe_add_func_uint16_t_u_u((+l_263), ((0xF1L | (p_34 && 1UL)) != p_34))) == p_34)))) ^ 0x6764L);
                        if (p_34)
                            break;
                        l_285[2][3][1] = ((*l_239) |= l_277);
                    }
                }
                (*l_239) &= 0x57FC6094L;
                (*l_239) = ((p_34 , (g_150[6][6] ^= l_286)) , (((*l_293) = (safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(0UL, ((safe_rshift_func_uint8_t_u_u(g_18, 2)) , p_34))) > p_34), (*l_63)))) || g_61));
                if ((safe_lshift_func_int8_t_s_s((((((*l_45) = (((l_296 |= p_34) && (((*l_239) &= 0xDA734AD2L) != (safe_add_func_uint16_t_u_u((g_150[1][3] |= (safe_lshift_func_int16_t_s_u((-1L), 8))), ((~(safe_rshift_func_int16_t_s_s(g_61, p_34))) ^ (-10L)))))) > p_34)) | l_276) , (((!(l_285[2][3][1] | (*l_63))) == l_276) > p_34)) , p_34), 3)))
                {
                    for (l_50 = 0; (l_50 <= 3); l_50 += 1)
                    {
                        int i, j;
                        if (l_251[g_78])
                            break;
                        if (p_34)
                            continue;
                        l_260[l_50][l_50] = (*g_215);
                        if (p_34)
                            break;
                    }
                }
                else
                {
                    unsigned short *l_311[3];
                    int *l_312 = &l_296;
                    unsigned **l_314[10] = {&l_45,(void*)0,&l_59[0],&l_59[0],(void*)0,&l_45,(void*)0,&l_59[0],&l_59[0],(void*)0};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_311[i] = &l_172;
                    l_296 = (p_34 < ((&g_221 == &g_221) | ((*l_293) = (g_150[5][3] == (g_66.f3 = (safe_sub_func_uint32_t_u_u(p_34, (safe_div_func_int32_t_s_s(((g_66.f2 , (safe_mod_func_int32_t_s_s(l_276, (safe_mod_func_uint8_t_u_u(((l_149[0][1] = &g_150[0][2]) != &g_150[5][3]), 9UL))))) <= 4294967289UL), (*l_239))))))))));

                                        if (p_34)
                    {
                        return (*g_215);


                    }
                    else
                    {
                        short l_313 = 1L;
                        (*l_312) ^= l_313;
                        if (p_34)
                            continue;
                    }
                    (*l_312) = ((l_276 & g_66.f2) < (&g_221 != l_314[8]));
                    for (l_286 = 1; (l_286 >= 0); l_286 -= 1)
                    {
                        char ***l_317 = &l_64;
                        l_316 = l_315;
                        (*l_317) = &g_17[0][2][0];

                        ;
                    }
                }
            }
            for (l_83 = 1; (l_83 >= 0); l_83 -= 1)
            {
                int i;
                (*l_65) = l_59[l_83];

                ;
                (*l_239) = 0L;
                l_239 = (*l_65);

                ;
            }
            if ((0xD9L == (g_318 != ((g_77 , p_34) , (void*)0))))
            {
                l_296 = ((*l_239) = p_34);
                l_296 = (p_34 | (g_71 >= l_296));
                (*g_215) = l_239;


                return g_319;



            }
            else
            {
                unsigned l_329[2];
                union U0 *l_330 = &l_51;
                int i;
                for (i = 0; i < 2; i++)
                    l_329[i] = 0UL;
                for (l_275 = 0; (l_275 <= 1); l_275 += 1)
                {
                    short *l_324 = &l_276;
                    int l_327[9][1][2] = {{{0x05023016L,0xAAA4A644L}},{{0L,0xAAA4A644L}},{{0x05023016L,0xAAA4A644L}},{{0L,0xAAA4A644L}},{{0x05023016L,0xAAA4A644L}},{{0L,0xAAA4A644L}},{{0x05023016L,0xAAA4A644L}},{{0L,0xAAA4A644L}},{{0x05023016L,0xAAA4A644L}}};
                    int **l_328 = (void*)0;
                    short *l_356 = &g_77;
                    int i, j, k;
                    l_327[0][0][1] |= (safe_div_func_int8_t_s_s((((p_34 | (!p_34)) & (g_6 , p_34)) ^ (-3L)), (safe_add_func_uint32_t_u_u(((l_316 , ((+((*l_324) = (-6L))) , (safe_add_func_uint32_t_u_u(0x815A9018L, (((*l_239) >= l_278) & 3UL))))) < g_150[5][3]), 4294967295UL))));
                    l_329[1] = ((void*)0 != l_328);
                    if (p_34)
                    {
                        union U0 **l_331 = &l_330;
                        (*l_331) = l_330;
                        (*l_331) = &l_51;
                    }
                    else
                    {
                        unsigned char *l_337 = &l_316;
                        unsigned char **l_336 = &l_337;
                        int l_342 = 0x0399C950L;
                        union U0 **l_344[2][6][8] = {{{&l_343,(void*)0,(void*)0,(void*)0,(void*)0,&l_343,&l_330,&l_330},{&l_330,(void*)0,&l_343,(void*)0,(void*)0,(void*)0,&l_330,(void*)0},{&l_330,&l_330,&l_343,(void*)0,&l_343,&l_330,&l_330,&l_343},{(void*)0,&l_330,(void*)0,(void*)0,&l_330,&l_330,(void*)0,(void*)0},{&l_330,&l_343,(void*)0,&l_330,&l_330,&l_330,&l_330,(void*)0},{(void*)0,&l_343,&l_330,(void*)0,&l_343,&l_330,(void*)0,(void*)0}},{{&l_330,&l_330,&l_343,&l_343,&l_330,&l_330,&l_330,(void*)0},{(void*)0,&l_330,&l_343,&l_343,&l_343,(void*)0,(void*)0,&l_343},{(void*)0,&l_343,&l_343,&l_343,&l_330,&l_330,&l_330,(void*)0},{&l_330,&l_330,&l_330,&l_343,(void*)0,(void*)0,&l_343,(void*)0},{&l_330,(void*)0,(void*)0,(void*)0,&l_330,&l_330,&l_343,(void*)0},{(void*)0,&l_330,&l_330,&l_330,&l_343,(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        l_342 = (safe_mod_func_int8_t_s_s(((p_34 , 1L) || (g_77 , ((((*l_336) = g_17[2][0][5]) == ((~((l_341 = (0x2D0EL == ((p_34 > p_34) >= (l_340 < p_34)))) >= g_150[2][5])) , g_17[1][4][2])) >= 0L))), p_34));

                        ;
                        g_345 = l_343;
                    }
                    (*l_65) = (((*l_45) = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((*l_324) &= g_46), ((1L != ((safe_add_func_int8_t_s_s(p_34, (safe_rshift_func_int16_t_s_u(l_315, (+p_34))))) < l_278)) | p_34))), (safe_div_func_int8_t_s_s(((*g_215) != (((*l_356) = g_78) , l_260[6][2])), (-5L))))) <= l_357[0])) , (void*)0);

                    ;
                }
            }
        }

        ;
        ;
        ;

    }
    else
    {
        unsigned short l_358 = 0xB41FL;
        int l_359 = 6L;
        l_359 |= l_358;
    }


    ;
    if ((func_47(((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((*l_64) != (*l_64)) > g_18) , (0L == (~g_364))), 4294967288UL)), g_6)) < ((g_367 = l_365) == &g_368)), (*g_345)) , p_34))
    {
        unsigned l_374 = 0x2BD29416L;
        int l_375 = (-1L);
        unsigned short l_390[4][5];
        int l_402 = 4L;
        int *l_403 = &l_375;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_390[i][j] = 65535UL;
        }
        if ((l_369 = (*l_63)))
        {
            unsigned short l_372 = 0x8432L;
            int l_373[9][1];
            char **l_384 = (void*)0;
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_373[i][j] = 0x5B41A43FL;
            }
            for (l_238 = 2; (l_238 >= 0); l_238 -= 1)
            {
                int *l_370 = (void*)0;
                int *l_371[9] = {&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6};
                char ***l_376 = &l_64;
                short l_377 = 0L;
                int i;
                l_373[5][0] |= (l_372 = l_251[l_238]);
                l_375 ^= (((l_68[l_238] > ((l_374 > (*g_318)) || 0xCA90D645L)) , p_34) > p_34);
                if (((((*l_376) = &l_55[0]) == (void*)0) , l_377))
                {
                    char **l_383 = &l_55[0];
                    char ***l_382 = &l_383;
                    char **l_386 = (void*)0;
                    char ***l_385[6][3][10] = {{{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,(void*)0,&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386}},{{&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{(void*)0,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386}},{{&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,(void*)0,&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386}},{{&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,(void*)0},{&l_386,&l_386,&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,(void*)0,(void*)0}},{{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,(void*)0,&l_386},{&l_386,&l_386,&l_386,(void*)0,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386,(void*)0}},{{&l_386,&l_386,&l_386,&l_386,(void*)0,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,(void*)0,(void*)0},{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,(void*)0,&l_386}}};
                    int l_391 = (-1L);
                    int i, j, k;
                    l_391 = (safe_sub_func_int32_t_s_s(p_34, (safe_sub_func_uint32_t_u_u(((((p_34 || ((l_384 = ((*l_382) = ((*l_376) = &l_55[4]))) != (g_387 = &g_17[0][2][0]))) > (((safe_mod_func_int8_t_s_s((l_68[l_238] = p_34), 5UL)) , p_34) , (*g_368))) >= ((*l_366) = (g_66.f2 | g_77))) , p_34), l_390[0][4]))));
                }
                else
                {
                    char l_395 = 0xD2L;
                    int *l_400 = &l_375;
                    for (g_364 = 0; (g_364 <= 4); g_364 += 1)
                    {
                        unsigned l_394 = 0UL;
                        int i;
                        l_395 = (safe_lshift_func_uint8_t_u_u(l_394, 1));
                        if (p_34)
                            continue;
                    }
                    for (g_71 = (-24); (g_71 <= 1); g_71 = safe_add_func_uint16_t_u_u(g_71, 8))
                    {
                        int *l_398 = &l_238;
                        int **l_399[9][7][1] = {{{(void*)0},{&g_319},{(void*)0},{&l_398},{(void*)0},{&l_398},{(void*)0}},{{&g_319},{(void*)0},{&l_398},{(void*)0},{&l_398},{(void*)0},{&g_319}},{{(void*)0},{&g_319},{&g_319},{&g_319},{(void*)0},{&l_370},{(void*)0}},{{&g_319},{&g_319},{&g_319},{(void*)0},{&l_370},{(void*)0},{&g_319}},{{&g_319},{&g_319},{(void*)0},{&l_370},{(void*)0},{&g_319},{&g_319}},{{&g_319},{(void*)0},{&l_370},{(void*)0},{&g_319},{&g_319},{&g_319}},{{(void*)0},{&l_370},{(void*)0},{&g_319},{&g_319},{&g_319},{(void*)0}},{{&l_370},{(void*)0},{&g_319},{&g_319},{&g_319},{(void*)0},{&l_370}},{{(void*)0},{&g_319},{&g_319},{&g_319},{(void*)0},{&l_370},{(void*)0}}};
                        int i, j, k;
                        l_373[2][0] ^= l_390[0][2];
                        g_319 = ((*g_215) = ((*l_65) = l_398));

                        ;
                        ;
                        l_375 = 0xD76638F2L;
                        l_375 &= (*l_58);
                    }



                    ;
                    return l_371[4];





                }

                ;
                if (l_373[7][0])
                    break;
            }

            ;
            ;
        }
        else
        {
            int l_401 = 0x3039616EL;
            int *l_404 = &g_4;
            l_402 = (((p_34 > (l_375 ^= l_401)) >= (*l_63)) > 255UL);
            (*g_215) = &l_402;


            return l_404;




        }

        ;
        (*g_215) = (*g_215);
    }
    else
    {
        short l_425 = (-2L);
        int *l_437 = (void*)0;
        char l_447[2][5] = {{(-9L),(-10L),(-9L),(-10L),(-9L)},{0xEEL,0xEEL,0xEEL,0xEEL,0xEEL}};
        int l_492[2];
        unsigned short ***l_525 = (void*)0;
        unsigned short ***l_526[7];
        int i, j;
        for (i = 0; i < 2; i++)
            l_492[i] = (-4L);
        for (i = 0; i < 7; i++)
            l_526[i] = &g_523;
        for (g_364 = 0; (g_364 <= 14); ++g_364)
        {
            int *l_407 = (void*)0;
            int *l_408 = &l_238;
            int *l_409 = &l_50;
            unsigned char *l_412[6][5] = {{&g_66.f2,&g_66.f2,&g_66.f2,&g_66.f2,&g_66.f2},{&l_51.f2,&l_51.f2,&l_51.f2,&l_51.f2,&l_51.f2},{&g_66.f2,&g_66.f2,&g_66.f2,&g_66.f2,&g_66.f2},{&l_51.f2,&l_51.f2,&l_51.f2,&l_51.f2,&l_51.f2},{&g_66.f2,&g_66.f2,&g_66.f2,&g_66.f2,&g_66.f2},{&l_51.f2,&l_51.f2,&l_51.f2,&l_51.f2,&l_51.f2}};
            int **l_470 = &l_409;
            int l_489 = (-6L);
            char **l_503 = &l_55[0];
            int i, j;
            (*l_409) |= (+((*l_408) = p_34));
        }
        g_523 = g_523;
    }

    ;
    ;
    return (*g_215);



}







static union U0 func_47(unsigned p_48, union U0 p_49)
{
    int *l_52 = (void*)0;
    int **l_53 = &l_52;
    union U0 l_54[10] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
    int i;
    (*l_53) = l_52;
    return l_54[9];


    }





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f4, "g_66.f4", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_150[i][j], "g_150[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1076, "g_1076", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1109[i][j][k], "g_1109[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1239.f0, "g_1239.f0", print_hash_value);
    transparent_crc(g_1239.f2, "g_1239.f2", print_hash_value);
    transparent_crc(g_1239.f3, "g_1239.f3", print_hash_value);
    transparent_crc(g_1239.f4, "g_1239.f4", print_hash_value);
    transparent_crc(g_1298, "g_1298", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
