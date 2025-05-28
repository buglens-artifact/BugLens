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



static int g_33 = 0xA3062A4BL;
static short g_39 = 0L;
static unsigned g_79 = 0xE5571BE3L;
static unsigned short g_89 = 0x5192L;
static unsigned char g_98 = 0x1CL;
static unsigned short g_113[9][6] = {{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL},{0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL,0xDD9BL}};
static int g_121 = 0L;
static int *g_142 = &g_33;
static int **g_141 = &g_142;
static unsigned char g_153 = 0xC6L;
static short g_159[8] = {0xA2E5L,0xA2E5L,0xA2E5L,0xA2E5L,0xA2E5L,0xA2E5L,0xA2E5L,0xA2E5L};
static short *g_158 = &g_159[5];
static unsigned g_177 = 0x9923EC18L;
static const unsigned *g_212[8][5] = {{&g_177,&g_177,(void*)0,(void*)0,&g_177},{&g_177,&g_79,&g_177,&g_79,&g_177},{&g_177,(void*)0,(void*)0,&g_177,&g_177},{&g_177,&g_79,&g_177,&g_79,&g_177},{&g_177,&g_177,(void*)0,(void*)0,&g_177},{&g_177,&g_79,&g_177,&g_79,&g_177},{&g_177,(void*)0,(void*)0,&g_177,&g_177},{&g_177,&g_79,&g_177,&g_79,&g_177}};
static const unsigned **g_211 = &g_212[0][4];
static unsigned g_263 = 0x24A29CC7L;
static char g_312 = (-1L);
static char g_314[2] = {0xC8L,0xC8L};
static char g_321 = 0x75L;
static int g_331 = (-9L);
static char g_333 = 1L;
static short g_334 = 0x0D0CL;
static char g_338 = 0xA6L;
static unsigned char g_346 = 7UL;
static unsigned *g_368[8] = {&g_263,&g_263,&g_263,&g_263,&g_263,&g_263,&g_263,&g_263};
static unsigned **g_367 = &g_368[6];
static unsigned short g_376[8] = {65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL};
static unsigned g_381 = 0xE6C3BA41L;
static int g_401 = 0L;
static unsigned short g_404 = 3UL;
static unsigned g_410 = 4294967289UL;
static unsigned char g_416 = 0xA9L;
static unsigned g_439 = 3UL;
static const short g_455[8][9] = {{0x5324L,0L,0x5324L,0x5324L,0L,0x5324L,0x5324L,0L,0x5324L},{0x54CCL,0x04A6L,0x54CCL,0x9A3AL,0xE9B4L,0x9A3AL,0x54CCL,0x04A6L,0x54CCL},{0x5324L,0L,0x5324L,0x5324L,0L,0x5324L,0x5324L,0L,0x5324L},{0x54CCL,0x04A6L,0x54CCL,0x9A3AL,0xE9B4L,0x9A3AL,0x54CCL,0x04A6L,0x54CCL},{0x5324L,0L,0x5324L,0x5324L,0L,0x5324L,0x5324L,0L,0x5324L},{0x54CCL,0x04A6L,0x54CCL,0x9A3AL,0xE9B4L,0x9A3AL,0x54CCL,0x04A6L,0x54CCL},{0x5324L,0L,0x5324L,0x5324L,0L,0x5324L,0x5324L,0L,0x5324L},{0x54CCL,0x04A6L,0x54CCL,0x9A3AL,0xE9B4L,0x9A3AL,0x54CCL,0x04A6L,0x54CCL}};
static int *g_468[3][6] = {{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331},{&g_331,&g_331,&g_331,&g_331,&g_331,&g_331}};
static int **g_467 = &g_468[2][4];
static unsigned g_474 = 0x8F9531F5L;
static int g_484 = 0L;
static int *g_483 = &g_484;
static int *g_487[9] = {&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121,&g_121};
static unsigned g_490[8] = {0x5DA06DAFL,0x5DA06DAFL,0x5DA06DAFL,0x5DA06DAFL,0x5DA06DAFL,0x5DA06DAFL,0x5DA06DAFL,0x5DA06DAFL};
static short **g_530 = &g_158;
static short ***g_529 = &g_530;
static int g_590 = 0x31E68819L;
static int g_599 = 0x4B0035A4L;
static char g_741[3] = {(-1L),(-1L),(-1L)};
static int g_804[7][3][7] = {{{0L,0xD4D24B0FL,0xD46D0B02L,0L,0L,0xD46D0B02L,0xD4D24B0FL},{0x1AD82F90L,0xA056B9CCL,0xA5705256L,0xCD4DD586L,0xA9F5215FL,0x54573CD5L,0xA1F16318L},{1L,0x4FC2AC85L,0xAB794F55L,0x4FC2AC85L,1L,0xD46D0B02L,0xD7262B11L}},{{(-1L),2L,0L,0xCD4DD586L,0x1DD13DEBL,0xCD4DD586L,0L},{0xD7262B11L,0xD7262B11L,0L,0xAB794F55L,0L,0x1FD6E08EL,0xD4D24B0FL},{(-1L),0xCD4DD586L,1L,2L,1L,0x79AF71E2L,0x1DD13DEBL}},{{1L,0L,0x4FC2AC85L,0L,0L,0L,0L},{0x1AD82F90L,0x76C7A56DL,0x1AD82F90L,0x54573CD5L,0x1DD13DEBL,0x23EF9D31L,(-1L)},{0x4FC2AC85L,0L,1L,0x1FD6E08EL,1L,0L,0x4FC2AC85L}},{{1L,0xCD4DD586L,(-1L),0xECC295EBL,0xA9F5215FL,0x23EF9D31L,0xA9F5215FL},{0L,0xD7262B11L,0xD7262B11L,0L,0xAB794F55L,0L,0x1FD6E08EL},{0L,2L,(-1L),(-5L),0x1AD82F90L,0x79AF71E2L,0L}},{{0xAB794F55L,0x4FC2AC85L,1L,0xD46D0B02L,0xD7262B11L,0x1FD6E08EL,0x1FD6E08EL},{0xA5705256L,0xA056B9CCL,0x1AD82F90L,0xA056B9CCL,0xA5705256L,0xCD4DD586L,0xA9F5215FL},{0xD4D24B0FL,0L,0x4FC2AC85L,0xD46D0B02L,0xD4D24B0FL,0x1FD6E08EL,0L}},{{0x30BCBE53L,0x76C7A56DL,0L,0x521830AFL,0x1AD82F90L,0xECC295EBL,1L},{0L,0x1FD6E08EL,0x4FC2AC85L,0x4FC2AC85L,0x1FD6E08EL,0L,0xD4D24B0FL},{1L,0xA056B9CCL,0L,0x79AF71E2L,0x1AD82F90L,(-5L),(-1L)}},{{0xD7262B11L,1L,0xD7262B11L,0L,0xD4D24B0FL,0xD46D0B02L,0L},{0L,0xA056B9CCL,1L,0xECC295EBL,1L,0xA056B9CCL,0L},{0x4FC2AC85L,0x1FD6E08EL,0L,0xD4D24B0FL,0x17A96798L,0xD46D0B02L,0x17A96798L}}};
static unsigned short g_950 = 65528UL;
static unsigned short g_1016[1] = {1UL};
static int g_1038 = 6L;
static int g_1040 = 8L;
static int *g_1047 = &g_804[5][1][5];
static short g_1107 = 0x9781L;
static char g_1116 = (-1L);
static unsigned short *g_1163[9][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static unsigned short **g_1162 = &g_1163[3][0];
static unsigned short ***g_1161 = &g_1162;
static const char *g_1171 = &g_312;
static const char **g_1170[10][1] = {{&g_1171},{&g_1171},{&g_1171},{&g_1171},{&g_1171},{&g_1171},{&g_1171},{&g_1171},{&g_1171},{&g_1171}};
static const char ***g_1169 = &g_1170[2][0];
static const short g_1248 = 0x202EL;
static const short g_1416 = 1L;
static const short *g_1415 = &g_1416;
static const unsigned short **g_1469 = (void*)0;
static int *g_1601 = (void*)0;
static char g_1687 = 0x85L;
static int g_1691 = 0x2718DEA9L;
static unsigned char g_1695 = 0xE8L;
static int *****g_1743 = (void*)0;
static int ****g_1745 = (void*)0;
static int *****g_1744 = &g_1745;
static int *****g_1746[7][1] = {{&g_1745},{&g_1745},{&g_1745},{&g_1745},{&g_1745},{&g_1745},{&g_1745}};
static int g_1750 = 0x88AFBF5FL;
static int g_1751 = 0xB30814EAL;
static unsigned short g_1753[9][10][2] = {{{2UL,9UL},{65527UL,65527UL},{0xD198L,0x3BFBL},{65527UL,0x2E09L},{2UL,0x3068L},{0xD198L,2UL},{0x4444L,9UL},{0x4444L,2UL},{0xD198L,0x3068L},{2UL,0x2E09L}},{{65527UL,0x3BFBL},{0xD198L,65527UL},{65527UL,9UL},{2UL,0x4444L},{0xD198L,0xEADAL},{0x4444L,0x2E09L},{0x4444L,0xEADAL},{0xD198L,0x4444L},{2UL,9UL},{65527UL,65527UL}},{{0xD198L,0x3BFBL},{65527UL,0x2E09L},{2UL,0x3068L},{0xD198L,2UL},{0x4444L,9UL},{0x4444L,2UL},{0xD198L,0x3068L},{2UL,0x2E09L},{65527UL,0x3BFBL},{0xD198L,65527UL}},{{65527UL,9UL},{2UL,0x4444L},{0xD198L,0xEADAL},{0x4444L,0x2E09L},{0x4444L,0xEADAL},{0xD198L,0x4444L},{2UL,9UL},{65527UL,65527UL},{0xD198L,0x3BFBL},{65527UL,0x2E09L}},{{2UL,0x3068L},{0xD198L,65527UL},{2UL,0UL},{2UL,65527UL},{0xFB46L,0xEADAL},{65527UL,0xD198L},{0x4444L,0x3068L},{0xFB46L,0x4444L},{0x4444L,0UL},{65527UL,2UL}},{{0xFB46L,0x3BFBL},{2UL,0xD198L},{2UL,0x3BFBL},{0xFB46L,2UL},{65527UL,0UL},{0x4444L,0x4444L},{0xFB46L,0x3068L},{0x4444L,0xD198L},{65527UL,0xEADAL},{0xFB46L,65527UL}},{{2UL,0UL},{2UL,65527UL},{0xFB46L,0xEADAL},{65527UL,0xD198L},{0x4444L,0x3068L},{0xFB46L,0x4444L},{0x4444L,0UL},{65527UL,2UL},{0xFB46L,0x3BFBL},{2UL,0xD198L}},{{2UL,0x3BFBL},{0xFB46L,2UL},{65527UL,0UL},{0x4444L,0x4444L},{0xFB46L,0x3068L},{0x4444L,0xD198L},{65527UL,0xEADAL},{0xFB46L,65527UL},{2UL,0UL},{2UL,65527UL}},{{0xFB46L,0xEADAL},{65527UL,0xD198L},{0x4444L,0x3068L},{0xFB46L,0x4444L},{0x4444L,0UL},{65527UL,2UL},{0xFB46L,0x3BFBL},{2UL,0xD198L},{2UL,0x3BFBL},{1UL,0xFB46L}}};



static int func_1(void);
static unsigned short func_4(short p_5, unsigned p_6, unsigned short p_7);
static short func_8(unsigned p_9, short p_10, unsigned short p_11);
static short func_12(unsigned short p_13, int p_14, unsigned char p_15, short p_16, unsigned p_17);
static unsigned short func_18(unsigned p_19, char p_20, unsigned p_21, int p_22);
static unsigned char func_36(unsigned p_37);
static unsigned short func_40(unsigned short p_41, unsigned char p_42, unsigned char p_43, const unsigned short p_44, unsigned short p_45);
static unsigned char func_52(const short p_53);
static const int func_61(int * p_62, const short * const p_63, int * p_64, int * p_65, short * p_66);
static int * func_67(const int p_68, unsigned char p_69);
static int func_1(void)
{
    short l_27 = 0L;
    char l_30[3];
    int *l_31 = (void*)0;
    int *l_32 = &g_33;
    char l_570[5][8][5] = {{{0x71L,0xECL,0xECL,0x71L,0x86L},{1L,0xC3L,(-5L),5L,5L},{(-8L),0x71L,(-8L),0x86L,0x71L},{5L,(-1L),0x5DL,5L,0x5DL},{2L,2L,0x54L,0x71L,(-5L)},{0xDEL,1L,0x5DL,0x5DL,1L},{(-5L),0xECL,(-8L),(-5L),0x86L},{0xC3L,1L,(-5L),1L,0xC3L}},{{(-8L),2L,0xECL,0x86L,2L},{0xC3L,(-1L),(-1L),0xC3L,0x5DL},{(-5L),0x71L,0x54L,2L,2L},{0xDEL,0xC3L,0xDEL,0x5DL,0xC3L},{2L,0xECL,0x86L,2L,0x86L},{5L,5L,(-5L),0xC3L,1L},{(-8L),(-5L),0x86L,0x86L,(-5L)},{1L,(-1L),0xDEL,1L,0x5DL}},{{0x71L,(-5L),0x54L,(-5L),0x71L},{0xDEL,5L,(-1L),0x5DL,5L},{0x71L,0xECL,0xECL,0x71L,0xECL},{0xC3L,5L,0x7CL,1L,1L},{0x86L,2L,0x86L,0xECL,2L},{1L,0xDEL,(-1L),1L,(-1L)},{(-5L),(-5L),0x2CL,2L,0x71L},{0x5DL,0xC3L,(-1L),(-1L),0xC3L}},{{0x71L,(-8L),0x86L,0x71L,0xECL},{5L,0xC3L,0x7CL,0xC3L,5L},{0x86L,(-5L),(-8L),0xECL,(-5L)},{5L,0xDEL,0xDEL,5L,(-1L)},{0x71L,2L,0x2CL,(-5L),(-5L)},{0x5DL,5L,0x5DL,(-1L),5L},{(-5L),(-8L),0xECL,(-5L),0xECL},{1L,1L,0x7CL,5L,0xC3L}},{{0x86L,0x71L,0xECL,0xECL,0x71L},{0xC3L,0xDEL,0x5DL,0xC3L,(-1L)},{2L,0x71L,0x2CL,0x71L,2L},{0x5DL,1L,0xDEL,(-1L),1L},{2L,(-8L),(-8L),2L,0xECL},{0xC3L,5L,0x7CL,1L,0xDEL},{0x2CL,0xECL,0x2CL,0xFBL,0xECL},{0xDEL,(-5L),0x7FL,0xDEL,0x7FL}}};
    unsigned *l_1151 = &g_474;
    char l_1734[3];
    unsigned short l_1747 = 65528UL;
    int l_1748 = 0x23769536L;
    int *l_1749[8][3][3] = {{{&g_1750,&g_1750,&g_1750},{&g_1750,(void*)0,(void*)0},{&g_1750,&g_1750,&g_1750}},{{(void*)0,(void*)0,(void*)0},{&g_1750,&g_1750,(void*)0},{&g_1750,(void*)0,&g_1750}},{{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750},{(void*)0,&g_1750,(void*)0}},{{&g_1750,&g_1750,&g_1750},{(void*)0,&g_1750,&g_1750},{&g_1750,&g_1750,(void*)0}},{{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750}},{{(void*)0,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,(void*)0}},{{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,(void*)0}},{{(void*)0,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750},{&g_1750,&g_1750,&g_1750}}};
    unsigned short l_1752 = 0x3D71L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_30[i] = (-6L);
    for (i = 0; i < 3; i++)
        l_1734[i] = 0xB4L;
    g_1753[3][3][0] |= ((((g_1750 &= ((((-7L) & (safe_lshift_func_uint16_t_u_u(func_4(((*g_158) = func_8(((*l_1151) = (func_12(func_18((safe_lshift_func_int8_t_s_u(((((safe_add_func_int32_t_s_s((((**g_530) = ((l_27 | (safe_sub_func_int32_t_s_s(((l_30[1] = 4294967295UL) <= (((*l_32) = 0xCBAE8B01L) && (safe_mod_func_uint8_t_u_u(g_33, func_36((*l_32)))))), ((g_401 && g_338) < 0x7BL)))) & g_455[7][3])) , 0L), 1L)) , (*g_483)) ^ l_27) & g_474), 1)), g_490[2], l_570[1][7][1], (*g_483)), l_570[1][7][1], g_490[2], g_455[7][8], g_401) , 4294967286UL)), l_570[0][3][2], g_321)), g_1248, l_1734[0]), l_1747))) == 0UL) , l_1748)) == g_1751) <= l_1752) > 0xDABBL);
    return (*g_1047);
}







static unsigned short func_4(short p_5, unsigned p_6, unsigned short p_7)
{
    int ***l_1739 = &g_467;
    int ****l_1738 = &l_1739;
    int *****l_1737[6][7][3] = {{{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738}},{{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738}},{{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738}},{{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738}},{{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738}},{{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738},{&l_1738,&l_1738,&l_1738}}};
    const int l_1740[8][3] = {{(-9L),2L,(-9L)},{0xBB5D8377L,2L,6L},{(-1L),(-1L),1L},{8L,2L,2L},{1L,2L,8L},{8L,0x6200182AL,8L},{(-1L),1L,8L},{0xBB5D8377L,0xBB5D8377L,2L}};
    int *****l_1742 = &l_1738;
    int ******l_1741[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1741[i] = &l_1742;
    (*g_483) = (safe_add_func_uint16_t_u_u((l_1737[4][4][2] == (g_1746[3][0] = (l_1740[2][0] , (g_1744 = (g_1743 = &l_1738))))), 0x175BL));
    return l_1740[4][1];
}







static short func_8(unsigned p_9, short p_10, unsigned short p_11)
{
    unsigned l_1152 = 0xCAD0F26CL;
    int *l_1153 = &g_590;
    unsigned l_1202[6][9] = {{0x44E41BB3L,0x44E41BB3L,4294967292UL,0x44E41BB3L,0x44E41BB3L,4294967292UL,0x44E41BB3L,0x44E41BB3L,4294967292UL},{4294967289UL,4294967289UL,0x42672104L,4294967289UL,4294967289UL,0x42672104L,4294967289UL,4294967289UL,0x42672104L},{0x44E41BB3L,0x44E41BB3L,4294967292UL,0x44E41BB3L,0x44E41BB3L,4294967292UL,0x44E41BB3L,0x44E41BB3L,4294967292UL},{4294967289UL,4294967289UL,0x42672104L,4294967289UL,4294967289UL,0x42672104L,4294967289UL,4294967289UL,0x42672104L},{0x44E41BB3L,0x44E41BB3L,4294967292UL,0x44E41BB3L,0x44E41BB3L,4294967292UL,0x44E41BB3L,0x44E41BB3L,4294967292UL},{4294967289UL,4294967289UL,0x42672104L,4294967289UL,4294967289UL,0x42672104L,4294967289UL,4294967289UL,0x42672104L}};
    int l_1209 = (-3L);
    char l_1223 = 1L;
    short ***l_1236 = &g_530;
    const short *l_1247 = &g_1248;
    char *l_1322 = &g_314[1];
    char **l_1321 = &l_1322;
    char ***l_1320 = &l_1321;
    int l_1347 = (-1L);
    int l_1348 = 0x92390EB7L;
    int l_1349 = 0x523A6734L;
    int l_1352 = 0xCB5023D6L;
    unsigned l_1445 = 0UL;
    int *l_1458 = &g_590;
    int *l_1459 = (void*)0;
    unsigned l_1535[5];
    int ***l_1545 = &g_467;
    int ****l_1544[10][10][2] = {{{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545}},{{(void*)0,&l_1545},{(void*)0,&l_1545},{(void*)0,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545}},{{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{(void*)0,&l_1545}},{{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0}},{{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545}},{{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,(void*)0}},{{&l_1545,(void*)0},{&l_1545,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,(void*)0},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545}},{{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545}},{{&l_1545,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{(void*)0,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0}},{{(void*)0,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,(void*)0},{&l_1545,(void*)0},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545},{&l_1545,&l_1545}}};
    unsigned char l_1595 = 255UL;
    short l_1635 = 0xFD4DL;
    short ****l_1652 = (void*)0;
    unsigned short l_1668[9];
    int l_1686 = 0L;
    int l_1688 = 0x0239A655L;
    int l_1689[10] = {0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL,0x44427AAFL};
    unsigned short l_1692 = 7UL;
    const char l_1710[1] = {0L};
    int *l_1732 = &g_804[5][1][5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1535[i] = 1UL;
    for (i = 0; i < 9; i++)
        l_1668[i] = 0x4050L;
    if (l_1152)
    {
        const short * const l_1154 = &g_1107;
        unsigned short *l_1160[4];
        unsigned short **l_1159 = &l_1160[0];
        unsigned short ***l_1158[5];
        int l_1172 = 0L;
        int l_1217 = 0xADDD049EL;
        int ***l_1226 = &g_141;
        short ***l_1235[2][9] = {{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}};
        int l_1246[5] = {6L,6L,6L,6L,6L};
        const short *l_1250 = (void*)0;
        const short **l_1249 = &l_1250;
        const short *l_1252 = &g_455[5][2];
        const short **l_1251 = &l_1252;
        unsigned *l_1253 = (void*)0;
        unsigned *l_1254[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        for (i = 0; i < 4; i++)
            l_1160[i] = (void*)0;
        for (i = 0; i < 5; i++)
            l_1158[i] = &l_1159;
        for (g_321 = 5; (g_321 >= 0); g_321 -= 1)
        {
            int *l_1155[6] = {&g_121,&g_121,&g_121,&g_121,&g_121,&g_121};
            int i;
            if ((func_61(((*g_141) = l_1153), l_1154, l_1155[1], l_1153, (*g_530)) != 4UL))
            {
                short l_1164 = 0xA0B7L;
                int l_1173 = 1L;
                int i;
                for (g_410 = 0; (g_410 <= 7); g_410 += 1)
                {
                    int *l_1156[6];
                    int *l_1157 = &g_331;
                    int *l_1174 = &g_804[1][1][3];
                    short **l_1176 = (void*)0;
                    short ***l_1175 = &l_1176;
                    short **l_1178 = &g_158;
                    short ***l_1177 = &l_1178;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1156[i] = &g_331;
                    l_1174 = func_67(((*l_1157) ^= g_490[(g_321 + 2)]), ((func_40(g_376[g_410], g_376[(g_321 + 1)], g_1107, (l_1158[4] != g_1161), l_1164) || (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((((((g_490[(g_321 + 2)] , (void*)0) != g_1169) >= 1UL) , 0xBCEFL) ^ 65535UL), l_1172)) & 0x65FFL), p_9))) & l_1173));
                    (**g_141) = ((0xFDCB757FL ^ p_10) != ((*g_529) != ((*l_1177) = ((*l_1175) = (*g_529)))));
                }
                for (g_484 = 0; (g_484 <= 7); g_484 += 1)
                {
                    unsigned l_1193[4][7] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
                    int l_1196 = (-3L);
                    int **l_1208[8][6][5] = {{{&g_468[2][4],&g_468[2][4],&g_468[2][4],&g_468[2][5],&g_468[2][2]},{&g_468[2][4],&g_468[2][4],&g_468[2][4],&g_468[2][4],&g_468[2][4]},{&g_468[2][4],&g_468[1][3],(void*)0,&g_468[0][1],(void*)0},{&g_468[2][1],&g_468[2][4],&g_468[0][0],&g_468[2][4],&g_468[2][4]},{&g_468[1][2],&g_468[2][4],&g_468[0][1],&g_468[0][1],&g_468[2][4]},{&g_468[0][3],&g_468[1][5],&g_468[2][4],&g_468[2][4],&g_468[2][4]}},{{(void*)0,&g_468[2][4],&g_468[1][3],&g_468[2][2],(void*)0},{&g_468[1][5],&g_468[0][4],&g_468[2][4],&g_468[1][3],&g_468[1][3]},{(void*)0,&g_468[2][4],(void*)0,&g_468[2][4],&g_468[2][5]},{&g_468[0][3],&g_468[2][4],&g_468[2][4],&g_468[1][5],&g_468[0][2]},{&g_468[1][2],&g_468[2][2],(void*)0,&g_468[1][3],&g_468[1][1]},{&g_468[2][1],&g_468[0][2],&g_468[2][4],&g_468[0][2],&g_468[2][1]}},{{&g_468[2][4],&g_468[2][1],(void*)0,&g_468[2][4],&g_468[1][3]},{&g_468[2][4],&g_468[2][4],&g_468[2][4],&g_468[1][3],&g_468[0][0]},{(void*)0,(void*)0,&g_468[1][3],&g_468[2][1],&g_468[1][3]},{&g_468[1][3],&g_468[1][3],&g_468[2][4],&g_468[2][4],&g_468[2][1]},{&g_468[1][3],(void*)0,&g_468[0][1],(void*)0,&g_468[1][1]},{&g_468[2][4],&g_468[0][3],&g_468[0][0],&g_468[0][4],&g_468[0][2]}},{{&g_468[2][4],(void*)0,(void*)0,&g_468[2][4],&g_468[2][5]},{&g_468[2][4],&g_468[1][3],&g_468[2][4],&g_468[2][1],&g_468[1][3]},{&g_468[0][1],(void*)0,&g_468[1][1],&g_468[1][3],&g_468[2][4]},{&g_468[0][4],&g_468[2][4],&g_468[1][3],&g_468[1][3],&g_468[2][4]},{&g_468[2][4],(void*)0,&g_468[2][5],&g_468[2][1],&g_468[2][4]},{&g_468[2][1],&g_468[0][3],&g_468[0][2],&g_468[2][4],&g_468[2][4]}},{{(void*)0,&g_468[2][4],&g_468[1][1],&g_468[1][1],&g_468[1][1]},{&g_468[2][1],&g_468[2][4],&g_468[2][1],&g_468[0][3],&g_468[2][4]},{&g_468[2][4],&g_468[2][5],&g_468[1][3],(void*)0,&g_468[1][2]},{&g_468[0][4],&g_468[2][4],&g_468[0][0],&g_468[0][2],&g_468[2][4]},{(void*)0,&g_468[1][2],&g_468[1][3],&g_468[1][2],(void*)0},{&g_468[2][4],&g_468[2][4],&g_468[2][1],&g_468[0][3],&g_468[0][2]}},{{&g_468[2][1],&g_468[2][4],&g_468[1][1],&g_468[2][4],(void*)0},{&g_468[1][3],&g_468[2][1],&g_468[0][2],&g_468[2][4],&g_468[0][2]},{&g_468[2][4],&g_468[2][4],&g_468[2][5],&g_468[1][1],(void*)0},{&g_468[0][2],&g_468[2][4],&g_468[1][3],&g_468[0][0],&g_468[2][4]},{&g_468[1][3],&g_468[2][2],(void*)0,&g_468[2][4],&g_468[1][2]},{&g_468[1][5],&g_468[2][4],&g_468[2][4],&g_468[1][5],&g_468[2][4]}},{{&g_468[2][4],&g_468[2][4],&g_468[2][4],(void*)0,&g_468[1][1]},{&g_468[1][3],&g_468[2][1],&g_468[2][4],&g_468[1][3],&g_468[2][4]},{&g_468[2][2],&g_468[2][4],(void*)0,(void*)0,&g_468[2][4]},{&g_468[2][4],&g_468[2][4],&g_468[2][4],&g_468[1][5],&g_468[2][4]},{&g_468[2][5],&g_468[1][3],(void*)0,&g_468[1][2],&g_468[1][1]},{&g_468[2][4],&g_468[0][3],&g_468[2][4],&g_468[2][1],&g_468[2][1]}},{{&g_468[2][5],&g_468[2][2],&g_468[2][5],&g_468[2][4],&g_468[2][4]},{&g_468[2][4],&g_468[0][4],&g_468[1][5],&g_468[2][4],&g_468[1][3]},{&g_468[2][4],&g_468[1][2],&g_468[0][1],(void*)0,&g_468[2][4]},{&g_468[2][4],&g_468[1][3],&g_468[1][5],&g_468[1][3],&g_468[2][4]},{(void*)0,&g_468[2][4],&g_468[2][5],&g_468[1][3],(void*)0},{&g_468[0][3],&g_468[2][4],&g_468[2][4],&g_468[2][4],&g_468[1][3]}}};
                    int i, j, k;
                    for (g_177 = 0; (g_177 <= 4); g_177 += 1)
                    {
                        int l_1192 = 0x6060B1DEL;
                        unsigned char *l_1194 = &g_98;
                        unsigned char l_1195 = 1UL;
                        int i;
                        l_1196 = ((*l_1153) = ((((g_490[g_484] >= ((g_376[g_321] & ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((*g_483), l_1173)), (0xB1L == (safe_rshift_func_int8_t_s_u((((**g_367) = ((safe_mul_func_uint8_t_u_u(((*l_1194) = (safe_add_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((((l_1192 = (p_10 != (safe_unary_minus_func_int16_t_s(((**g_530) >= (*l_1153)))))) || (l_1193[3][3] = l_1173)) , p_10), p_10)) & p_9) != (*l_1153)), 0xBBB571F0L))), l_1195)) , (**g_367))) != 0x881449F3L), 6))))) , (*l_1153))) == 9UL)) | 0L) || 8UL) , p_10));
                    }
                    for (l_1164 = 6; (l_1164 >= 2); l_1164 -= 1)
                    {
                        char *l_1199[7][3] = {{&g_333,&g_741[1],&g_333},{&g_312,&g_741[2],&g_741[2]},{&g_333,&g_741[1],&g_333},{&g_312,&g_312,&g_741[2]},{&g_333,&g_741[1],&g_333},{&g_312,&g_741[2],&g_741[2]},{&g_333,&g_741[1],&g_333}};
                        unsigned char *l_1203 = &g_416;
                        int i, j;
                        l_1209 &= ((((*l_1153) |= (func_52((safe_sub_func_int32_t_s_s((g_490[g_484] & 0UL), g_376[(g_321 + 2)]))) < (p_10 ^ l_1164))) <= ((((safe_sub_func_uint32_t_u_u((((*l_1203) = l_1202[2][2]) || (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(func_52((((p_10 , &g_468[0][4]) != l_1208[5][5][4]) ^ 0xE1L)), l_1172)), 0xF0L))), 0x81DF514CL)) >= 0x3AL) | (**g_367)) >= 0x767FL)) != (*g_1047));
                        if (l_1172)
                            break;
                    }
                }
                (**g_141) |= g_490[g_321];
            }
            else
            {
                unsigned char *l_1214 = &g_346;
                short *l_1218 = (void*)0;
                int i;
                (*g_141) = func_67(((safe_mod_func_uint16_t_u_u((func_61(((*g_141) = &l_1209), ((((g_376[(g_321 + 1)] , (func_40(((((p_9 > func_52((((*l_1214) = (safe_mul_func_uint16_t_u_u((*l_1153), p_9))) , (-1L)))) , (safe_rshift_func_uint16_t_u_u(6UL, ((l_1217 , 250UL) >= g_474)))) , p_10) >= l_1172), g_159[5], g_455[4][4], p_11, l_1217) != (-1L))) && l_1217) == (***g_1169)) , (void*)0), l_1155[1], &l_1209, l_1218) & g_376[(g_321 + 1)]), 0xFE08L)) > p_11), g_338);
            }
        }
        for (g_346 = 0; (g_346 == 56); g_346++)
        {
            int **l_1224 = &g_142;
            unsigned char *l_1225 = &g_98;
            int l_1227 = 0x3C4086FDL;
            short l_1228 = 0xB126L;
            (*g_1047) &= (((safe_mod_func_uint16_t_u_u((g_346 , 0x1CD9L), (l_1223 & (&g_141 == (((*l_1225) |= (l_1224 == (l_1172 , (void*)0))) , l_1226))))) != l_1227) | (*l_1153));
            if (l_1228)
                continue;
        }
        l_1209 &= ((*g_483) = (safe_sub_func_uint8_t_u_u((g_416 ^= (safe_mul_func_int8_t_s_s(((((l_1172 = ((safe_rshift_func_uint16_t_u_s(((*l_1153) = ((~((l_1235[1][8] != l_1236) < (safe_sub_func_int32_t_s_s(0x57E37EB1L, ((**g_367)++))))) < (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(((l_1246[2] & l_1172) | (***g_1169)))) , (*l_1153)), g_121)), 0x06BFL)))), p_11)) == l_1172)) , (*g_1047)) ^ p_10) == p_9), l_1217))), g_321)));
        (*l_1153) = p_9;
    }
    else
    {
        int *l_1257 = &l_1209;
        short *l_1258 = &g_1107;
        char l_1288 = 0x18L;
        short *l_1296[1];
        int l_1305 = 2L;
        int l_1307 = 1L;
        unsigned l_1308 = 0xD14035C3L;
        unsigned short *l_1334 = &g_404;
        int l_1346[2][7] = {{0x73A75FA9L,0xE97F7C4AL,0xE97F7C4AL,0x73A75FA9L,0xE97F7C4AL,0xE97F7C4AL,0x73A75FA9L},{2L,0xF7B93A5BL,2L,2L,0xF7B93A5BL,2L,2L}};
        int *l_1398 = &l_1346[1][4];
        const int l_1407 = 0L;
        unsigned char *l_1429 = (void*)0;
        unsigned char *l_1430[10][2][8] = {{{&g_153,&g_416,&g_346,&g_153,&g_153,&g_153,&g_346,&g_416},{&g_416,&g_346,(void*)0,&g_153,&g_346,&g_416,&g_416,&g_346}},{{&g_346,&g_346,&g_346,&g_346,&g_346,&g_416,&g_153,&g_346},{&g_416,&g_346,&g_153,&g_153,&g_153,&g_346,&g_416,&g_153}},{{&g_153,&g_346,&g_416,&g_153,&g_416,&g_416,&g_153,&g_416},{&g_346,&g_346,&g_346,&g_346,&g_416,&g_153,&g_346,&g_153}},{{&g_153,&g_416,&g_346,&g_416,&g_153,&g_416,&g_346,&g_153},{&g_416,&g_416,&g_346,&g_346,&g_346,&g_346,&g_416,&g_416}},{{&g_346,&g_416,&g_346,&g_153,&g_346,&g_153,&g_346,&g_153},{&g_346,(void*)0,&g_346,&g_153,&g_153,&g_153,&g_346,&g_346}},{{&g_346,&g_416,&g_346,&g_346,&g_416,&g_346,&g_153,&g_346},{&g_346,&g_416,&g_416,&g_416,&g_153,&g_416,&g_416,&g_416}},{{&g_346,&g_416,&g_153,&g_416,&g_346,&g_153,&g_153,&g_346},{&g_346,&g_346,&g_346,&g_346,&g_346,&g_416,&g_153,&g_346}},{{&g_416,&g_346,&g_153,&g_346,&g_153,&g_346,&g_346,&g_416},{&g_153,&g_346,&g_346,&g_416,(void*)0,(void*)0,&g_416,&g_346}},{{&g_416,&g_416,&g_346,&g_153,(void*)0,&g_346,&g_416,&g_346},{&g_153,&g_346,&g_153,&g_346,&g_153,&g_346,&g_416,&g_346}},{{&g_346,(void*)0,&g_416,&g_153,&g_153,&g_416,(void*)0,&g_346},{&g_346,&g_346,&g_416,&g_416,&g_416,&g_153,&g_416,&g_416}}};
        unsigned char l_1435 = 0x93L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1296[i] = &g_159[3];
        for (g_98 = (-27); (g_98 >= 42); ++g_98)
        {
            int *l_1259 = (void*)0;
            int l_1278 = 5L;
            int l_1299 = 0xF58C5F54L;
            for (g_1038 = 2; (g_1038 >= 0); g_1038 -= 1)
            {
                int l_1262 = 0xCBFC943BL;
                unsigned short *l_1263 = &g_376[6];
                int l_1277 = 0x3BCCC73EL;
                int l_1298[9][1] = {{0x626CE205L},{0xD4833E24L},{0x626CE205L},{0xD4833E24L},{0x626CE205L},{0xD4833E24L},{0x626CE205L},{0xD4833E24L},{0x626CE205L}};
                int l_1306 = 1L;
                int i, j;
                (*g_483) = ((*g_1171) | ((**g_530) != p_9));
                (*g_141) = l_1259;
                if (func_52((safe_mul_func_uint16_t_u_u((p_10 , (*l_1153)), p_10))))
                {
                    int *l_1276[3][6];
                    int l_1297 = 0L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_1276[i][j] = &g_804[5][1][5];
                    }
                    if (l_1278)
                    {
                        int *l_1283 = &g_804[0][2][5];
                        if (p_11)
                            break;
                        (*g_483) = (p_9 | ((*l_1257) |= (1UL & (safe_add_func_uint16_t_u_u(((p_11 | 0x6AC06B1AL) != ((*g_467) == l_1153)), p_10)))));
                        (*g_141) = l_1283;
                    }
                    else
                    {
                        unsigned l_1289[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1289[i] = 0xAD929D78L;
                        (*g_483) &= (safe_sub_func_uint8_t_u_u(0UL, ((safe_sub_func_uint16_t_u_u(l_1288, func_52(((g_439 , (1L != p_10)) | (p_11 || 1UL))))) | l_1289[0])));
                        if (p_10)
                            continue;
                        (*g_483) = p_9;
                    }
                    if ((~p_10))
                    {
                        return p_10;
                    }
                    else
                    {
                        const short **l_1292 = &l_1247;
                        const short *l_1294[5][4] = {{&g_1248,&g_455[4][4],&g_455[4][4],&g_1248},{&g_1248,&g_455[4][4],&g_455[3][2],&g_455[4][4]},{&g_455[4][4],&g_1248,&g_455[3][2],&g_455[3][2]},{&g_1248,&g_1248,&g_455[4][4],&g_455[3][2]},{&g_1248,&g_1248,&g_1248,&g_455[4][4]}};
                        const short **l_1293[8] = {(void*)0,(void*)0,&l_1294[0][0],(void*)0,(void*)0,&l_1294[0][0],(void*)0,(void*)0};
                        const short **l_1295 = &l_1294[0][0];
                        unsigned char l_1300[4][7] = {{0UL,255UL,1UL,1UL,255UL,0UL,255UL},{2UL,0UL,0UL,2UL,255UL,2UL,1UL},{2UL,2UL,1UL,0x07L,1UL,2UL,2UL},{2UL,1UL,0x07L,1UL,2UL,2UL,1UL}};
                        int i, j;
                        (*g_141) = l_1257;
                        (*g_141) = (*g_141);
                        (*l_1153) = ((safe_mod_func_uint32_t_u_u(((**g_367) = (((*g_142) = (func_52(func_61(&l_1262, ((*l_1292) = l_1258), (func_61(l_1259, ((*l_1295) = (*g_530)), l_1257, &l_1209, (*g_530)) , (*g_141)), (*g_141), l_1296[0])) , (-1L))) , p_9)), (-2L))) , l_1297);
                        l_1300[3][4]--;
                    }
                }
                else
                {
                    int *l_1303 = &g_590;
                    int *l_1304[6] = {&l_1299,&l_1299,&l_1299,&l_1299,&l_1299,&l_1299};
                    int i;
                    l_1308++;
                    (*g_141) = (*g_141);
                    (*l_1257) |= (safe_lshift_func_int8_t_s_s(p_10, (*g_1171)));
                }
            }
            (*l_1153) = (p_9 , p_11);
        }
        for (g_321 = (-1); (g_321 <= (-6)); g_321 = safe_sub_func_int16_t_s_s(g_321, 3))
        {
            char ***l_1323 = &l_1321;
            int l_1325 = 3L;
            int l_1350[6][2][8] = {{{0x0539EA22L,0x43C5D2BDL,0L,0x771DDF45L,0x005513A4L,0x771DDF45L,0L,0x43C5D2BDL},{(-5L),0L,0L,0x771DDF45L,8L,0x83A61C3FL,0x83A61C3FL,8L}},{{0x780DF2DBL,8L,8L,0x780DF2DBL,(-5L),0x43C5D2BDL,0x83A61C3FL,0x0539EA22L},{0L,0x780DF2DBL,0L,0x83A61C3FL,0L,0x780DF2DBL,0L,0x005513A4L}},{{0L,0x780DF2DBL,0L,0x005513A4L,0x43C5D2BDL,0x43C5D2BDL,0x005513A4L,0L},{8L,8L,0x780DF2DBL,(-5L),0x43C5D2BDL,0x83A61C3FL,0x0539EA22L,0x83A61C3FL}},{{0L,0L,(-5L),0L,0L,0x771DDF45L,8L,0x83A61C3FL},{0L,0x43C5D2BDL,0x0539EA22L,(-5L),(-5L),0x0539EA22L,0x43C5D2BDL,0L}},{{0x780DF2DBL,0x771DDF45L,0x0539EA22L,0x005513A4L,8L,0L,8L,0x005513A4L},{(-5L),1L,0L,0x780DF2DBL,0L,0x005513A4L,0x43C5D2BDL,0x43C5D2BDL}},{{0x43C5D2BDL,0x0539EA22L,(-5L),(-5L),0x0539EA22L,0x43C5D2BDL,0L,0x771DDF45L},{0x43C5D2BDL,1L,8L,0x0539EA22L,0L,0x0539EA22L,8L,1L}}};
            const short * const l_1414 = &g_455[4][4];
            int *l_1417 = &l_1348;
            int **** const *l_1420 = (void*)0;
            int i, j, k;
            if (p_9)
            {
                unsigned char l_1319[5] = {0x34L,0x34L,0x34L,0x34L,0x34L};
                unsigned char *l_1324 = &g_346;
                unsigned short *l_1326 = (void*)0;
                unsigned short *l_1327[5];
                int l_1330 = 0xC049A4CCL;
                int l_1343 = 0L;
                int l_1344 = 0x499910D0L;
                int l_1345[5] = {6L,6L,6L,6L,6L};
                int i;
                for (i = 0; i < 5; i++)
                    l_1327[i] = &g_950;
                (*l_1257) = ((safe_mod_func_int32_t_s_s((*l_1257), (safe_add_func_uint8_t_u_u((1L ^ ((***l_1320) = ((l_1319[2] & ((*l_1324) ^= (l_1320 == l_1323))) & p_10))), ((*l_1153) ^= p_10))))) || func_40((p_11 ^= (l_1319[2] == (((l_1319[2] <= (*l_1257)) , g_484) , l_1325))), l_1325, p_10, l_1325, p_9));
                for (l_1307 = (-10); (l_1307 >= (-3)); l_1307 = safe_add_func_int16_t_s_s(l_1307, 4))
                {
                    int *l_1331 = &g_804[3][0][2];
                    int l_1342[1];
                    unsigned l_1353 = 0x3FF4D3DDL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1342[i] = (-1L);
                    for (g_381 = 0; (g_381 <= 7); g_381 += 1)
                    {
                        int i;
                        (*g_141) = g_368[g_381];
                        l_1330 = (*l_1153);
                        (*g_141) = l_1331;
                    }
                    for (g_950 = 0; (g_950 <= 5); g_950 += 1)
                    {
                        int *l_1335 = &g_484;
                        int *l_1336 = &g_121;
                        int *l_1337 = (void*)0;
                        int *l_1338 = &g_804[1][0][0];
                        int *l_1339 = &g_590;
                        int *l_1340 = &g_804[5][1][5];
                        int *l_1341[2];
                        int l_1351 = 0x2FC7E33BL;
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1341[i] = &g_484;
                        if (l_1202[g_950][(g_950 + 3)])
                            break;
                        (*l_1153) = (safe_add_func_int32_t_s_s(l_1202[g_950][g_950], ((*g_1047) = (((**g_1161) = l_1296[0]) != (l_1334 = (void*)0)))));
                        --l_1353;
                    }
                }
            }
            else
            {
                unsigned char l_1370 = 246UL;
                int ***l_1383 = &g_467;
                int ****l_1382[2];
                int *****l_1381 = &l_1382[1];
                int l_1405 = 0xD90CB99BL;
                int *l_1406 = &l_1350[0][0][4];
                int *l_1410 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1382[i] = &l_1383;
                for (g_599 = 2; (g_599 >= 0); g_599 -= 1)
                {
                    int *l_1358 = &l_1348;
                    int l_1368 = (-1L);
                    int l_1369[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1369[i] = (-4L);
                    (*g_141) = (void*)0;
                    if (func_18(((safe_lshift_func_uint8_t_u_u((&g_474 != &g_381), (((*g_141) = l_1358) == (void*)0))) || ((((safe_lshift_func_int8_t_s_u((*g_1171), 1)) >= 0x266EB897L) , ((((p_11 && (+((safe_rshift_func_int16_t_s_s(((4294967290UL ^ ((safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(5L, l_1350[2][1][3])) >= 65529UL) && 65535UL), 5)) , 0x3B1A367CL)) == 0x99EFL), 13)) , p_9))) <= (*l_1257)) >= p_10) , (*g_1162))) == &p_11)), (*l_1358), p_10, p_10))
                    {
                        return (*g_158);
                    }
                    else
                    {
                        int *l_1367[3][7] = {{&g_33,&l_1348,&l_1348,&g_33,&l_1348,&l_1348,&g_33},{&l_1348,&g_33,&l_1348,&l_1348,&g_33,&l_1348,&l_1348},{&g_33,&g_33,&l_1350[2][1][1],&g_33,&g_33,&l_1350[2][1][1],&g_33}};
                        int i, j;
                        --l_1370;
                        if (p_9)
                            break;
                        (*l_1358) &= l_1350[5][0][0];
                    }
                    (*l_1153) = (*l_1257);
                    for (l_1349 = 0; (l_1349 <= 2); l_1349 += 1)
                    {
                        int i, j, k;
                        (*g_141) = &l_1325;
                        (*g_1047) = ((*l_1153) , (*g_1047));
                        if ((*g_142))
                            break;
                        return p_9;
                    }
                }
                (*l_1257) ^= (*g_483);
                if (p_11)
                {
                    int * const *l_1389 = &g_468[1][2];
                    int * const **l_1388[2];
                    int * const ***l_1387[3][2][7] = {{{&l_1388[0],&l_1388[0],&l_1388[1],&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[0]},{&l_1388[1],&l_1388[0],&l_1388[1],&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[0]}},{{&l_1388[0],(void*)0,&l_1388[1],&l_1388[1],(void*)0,&l_1388[0],(void*)0},{&l_1388[1],&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[0]}},{{&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[1],&l_1388[0],&l_1388[0],&l_1388[0]},{&l_1388[0],&l_1388[0],(void*)0,&l_1388[0],&l_1388[0],&l_1388[0],&l_1388[0]}}};
                    int * const ****l_1386 = &l_1387[1][0][1];
                    int l_1394 = 0x65B22DBEL;
                    unsigned char *l_1397 = &g_346;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1388[i] = &l_1389;
                    for (p_9 = 0; (p_9 <= 2); p_9 += 1)
                    {
                        unsigned char *l_1376 = &g_346;
                        int i, j;
                        (*g_1047) ^= ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint8_t_u((((void*)0 != g_468[p_9][(p_9 + 2)]) < (((*l_1376) = (*l_1153)) == 253UL)))), 15)) > ((--(**g_367)) || 0xC8BF74A7L));
                        (*l_1153) ^= (safe_mul_func_uint8_t_u_u(((void*)0 != l_1381), (safe_sub_func_int16_t_s_s(((l_1386 == &l_1382[1]) & p_10), p_9))));
                        g_487[(p_9 + 5)] = g_468[p_9][(p_9 + 3)];
                        (*g_141) = g_368[(p_9 + 1)];
                    }
                    (*g_141) = l_1398;
                    if ((1L > l_1350[2][1][3]))
                    {
                        short l_1408 = 0L;
                        (*l_1153) = ((*g_483) = ((p_9 || func_12(l_1394, ((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_36((0UL != ((g_416 = (safe_mod_func_uint32_t_u_u(p_9, (((***g_529) != ((l_1405 = l_1394) <= (func_61(&l_1394, l_1334, ((*g_141) = l_1406), &l_1394, (*g_530)) , l_1407))) , p_10)))) != p_10))), p_9)), (*l_1153))) , 0xC676B3ABL), p_11, l_1325, l_1408)) == p_9));
                    }
                    else
                    {
                        int **l_1409 = &l_1406;
                        (*l_1409) = ((*g_141) = func_67((*l_1257), (*l_1153)));
                        l_1410 = (*g_141);
                    }
                }
                else
                {
                    int *l_1413 = &l_1405;
                    (*l_1153) &= ((safe_rshift_func_uint16_t_u_s(func_61((l_1413 = &l_1405), (g_1415 = l_1414), l_1417, ((*g_141) = &g_804[5][2][1]), (**g_529)), (p_10 |= ((safe_add_func_int32_t_s_s(p_9, ((void*)0 != l_1420))) < 0x2237E34BL)))) > g_33);
                }
            }
        }
        l_1153 = func_67(p_9, (safe_mul_func_int16_t_s_s(func_61(((*g_141) = &g_804[4][1][6]), (((*l_1153) || ((safe_add_func_uint32_t_u_u(p_11, ((((*l_1153) = ((safe_mul_func_uint16_t_u_u(p_9, (safe_mul_func_int8_t_s_s(((g_346--) , ((0xA2FBL || (*l_1398)) > (func_40(func_40(((safe_add_func_uint32_t_u_u(p_11, l_1435)) , (*l_1398)), (*l_1398), g_314[1], (*l_1153), p_10), (*l_1153), g_263, p_10, p_11) , p_10))), 0L)))) < (*l_1257))) ^ p_9) < 0x1D2D4FFDL))) >= 2L)) , (void*)0), &l_1352, &l_1305, (*g_530)), p_9)));
    }
    if (p_10)
    {
        (*g_483) |= (safe_mod_func_int8_t_s_s(9L, (*g_1171)));
    }
    else
    {
        unsigned short l_1464 = 1UL;
        unsigned short l_1477 = 0xED71L;
        short * const l_1507[8][3] = {{(void*)0,&g_39,&g_39},{&g_39,&g_159[5],&g_159[5]},{(void*)0,&g_39,&g_39},{&g_39,&g_159[5],&g_159[5]},{(void*)0,&g_39,&g_39},{&g_39,&g_159[5],&g_159[5]},{(void*)0,&g_39,&g_39},{&g_39,&g_159[5],&g_159[5]}};
        int l_1512[2];
        unsigned short l_1520[7][4][7] = {{{8UL,0x46D2L,0UL,65526UL,0UL,0x46D2L,8UL},{0x746DL,9UL,65535UL,0x9A25L,0xA056L,0xA047L,0UL},{65529UL,0UL,0x3FF8L,0UL,0xCCCCL,0xCCCCL,0UL},{65535UL,0UL,65535UL,0UL,0x3AA4L,65533UL,0xA047L}},{{0x46D2L,0xD308L,0UL,0UL,65527UL,1UL,65529UL},{65533UL,0x746DL,0UL,0UL,0x746DL,65533UL,65528UL},{0x5CFFL,0UL,65527UL,65535UL,0x3FF8L,0xCCCCL,65535UL},{1UL,65533UL,65535UL,0xA047L,0x9A25L,0xA047L,65535UL}},{{0UL,0UL,1UL,0x878AL,65535UL,0x46D2L,0x1277L},{65528UL,0x746DL,0UL,0xA056L,65535UL,0x3AA4L,0x3AA4L},{65535UL,0xD308L,0UL,8UL,65535UL,65526UL,0x878AL},{0x746DL,65533UL,65528UL,65526UL,1UL,65535UL,0xA056L}},{{0xCCCCL,0xD308L,65527UL,0x46D2L,0x46D2L,65527UL,0xD308L},{0x746DL,65526UL,65533UL,0UL,65535UL,0UL,9UL},{65535UL,1UL,65535UL,0UL,0x3FF8L,0x46D2L,0x3FF8L},{0UL,7UL,7UL,0UL,0xA047L,9UL,65528UL}},{{65526UL,0x3FF8L,65535UL,0x46D2L,0x5CFFL,0UL,8UL},{65528UL,0UL,9UL,65526UL,9UL,0UL,65528UL},{0x1277L,0xCCCCL,1UL,8UL,65526UL,0xD308L,0x3FF8L},{0xA056L,0x9A25L,65535UL,9UL,0x746DL,0x746DL,9UL}},{{1UL,65529UL,1UL,65527UL,0UL,0UL,0xD308L},{0UL,1UL,9UL,0x9A25L,7UL,65533UL,0xA056L},{0UL,0x1277L,65535UL,65535UL,0x1277L,0UL,0x878AL},{65535UL,9UL,7UL,0x3AA4L,65535UL,0x746DL,0UL}},{{65526UL,0xD308L,0x3FF8L,65529UL,0UL,65529UL,0x3FF8L},{1UL,1UL,0xA047L,0x746DL,65535UL,0x3AA4L,7UL},{0xCCCCL,65527UL,0x5CFFL,8UL,0x3FF8L,1UL,1UL},{65535UL,0xA056L,9UL,0xA056L,65535UL,1UL,65526UL}}};
        short ****l_1527 = &g_529;
        int l_1537 = 0x6584DC55L;
        int *l_1563 = &g_804[6][2][3];
        unsigned short l_1572 = 0xC6ADL;
        int ***l_1581 = &g_141;
        char ***l_1602 = &l_1321;
        short l_1666[8];
        int l_1690 = 0xC86A2715L;
        int *l_1722 = &g_599;
        unsigned char *l_1729 = &g_346;
        short *l_1733 = &g_159[5];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1512[i] = 0xC700BFA8L;
        for (i = 0; i < 8; i++)
            l_1666[i] = 0x7115L;
        for (g_474 = 0; (g_474 > 42); g_474 = safe_add_func_int8_t_s_s(g_474, 3))
        {
            unsigned char l_1457 = 0xEFL;
            for (l_1348 = 0; (l_1348 >= 17); l_1348++)
            {
                unsigned short l_1444[5] = {0x7D71L,0x7D71L,0x7D71L,0x7D71L,0x7D71L};
                int l_1460[8][4][5] = {{{0xB5F5B0DCL,0L,0L,(-1L),0xA0AAEE47L},{0xB5F5B0DCL,0x404AE4A4L,1L,(-1L),(-1L)},{0L,0x404AE4A4L,0L,0xA0AAEE47L,(-1L)},{0xB5F5B0DCL,0L,0L,(-1L),0xA0AAEE47L}},{{0xB5F5B0DCL,0x404AE4A4L,1L,(-1L),(-1L)},{0L,0x404AE4A4L,0L,0xA0AAEE47L,(-1L)},{0xB5F5B0DCL,0L,0L,(-1L),0xA0AAEE47L},{0xB5F5B0DCL,0x404AE4A4L,1L,(-1L),(-1L)}},{{0L,0x404AE4A4L,0L,0xA0AAEE47L,(-1L)},{0xB5F5B0DCL,0L,0L,(-1L),0xA0AAEE47L},{0xB5F5B0DCL,0x404AE4A4L,1L,(-1L),(-1L)},{0L,0x404AE4A4L,0L,0xA0AAEE47L,(-1L)}},{{0xB5F5B0DCL,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L},{0xA0AAEE47L,0x85542E8DL,(-1L),0x861B450BL,0x861B450BL},{0x2142F8F4L,0x85542E8DL,0x2142F8F4L,0xA22F72F3L,0x861B450BL},{0xA0AAEE47L,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L}},{{0xA0AAEE47L,0x85542E8DL,(-1L),0x861B450BL,0x861B450BL},{0x2142F8F4L,0x85542E8DL,0x2142F8F4L,0xA22F72F3L,0x861B450BL},{0xA0AAEE47L,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L},{0xA0AAEE47L,0x85542E8DL,(-1L),0x861B450BL,0x861B450BL}},{{0x2142F8F4L,0x85542E8DL,0x2142F8F4L,0xA22F72F3L,0x861B450BL},{0xA0AAEE47L,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L},{0xA0AAEE47L,0x85542E8DL,(-1L),0x861B450BL,0x861B450BL},{0x2142F8F4L,0x85542E8DL,0x2142F8F4L,0xA22F72F3L,0x861B450BL}},{{0xA0AAEE47L,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L},{0xA0AAEE47L,0x85542E8DL,(-1L),0x861B450BL,0x861B450BL},{0x2142F8F4L,0x85542E8DL,0x2142F8F4L,0xA22F72F3L,0x861B450BL},{0xA0AAEE47L,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L}},{{0xA0AAEE47L,0x85542E8DL,(-1L),0x861B450BL,0x861B450BL},{0x2142F8F4L,0x85542E8DL,0x2142F8F4L,0xA22F72F3L,0x861B450BL},{0xA0AAEE47L,1L,0x2142F8F4L,0x861B450BL,0xA22F72F3L},{0xA0AAEE47L,0x85542E8DL,0L,0L,0L}}};
                int i, j, k;
                for (g_346 = 0; (g_346 >= 42); g_346++)
                {
                    unsigned short *l_1446 = &g_376[6];
                    int *l_1461 = &l_1347;
                    int *l_1462 = &l_1460[1][2][1];
                    int *l_1463[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1463[i] = &g_484;
                    if (((l_1444[0] | l_1445) | (++(*l_1446))))
                    {
                        (*g_1047) = p_10;
                        (*g_1047) = (p_11 <= ((1L || 0x70L) != ((safe_sub_func_int8_t_s_s((((0x7B2E32DDL < (safe_sub_func_int8_t_s_s(((**l_1321) = (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x00L, (l_1457 >= p_9))), func_52((*g_1415))))), (*g_1171)))) & 0L) || 3L), p_9)) >= 0x65L)));
                        (*g_141) = l_1458;
                        (*g_1047) = p_9;
                    }
                    else
                    {
                        (*g_141) = l_1459;
                    }
                    --l_1464;
                }
                if (p_11)
                    break;
                if (l_1464)
                    break;
            }
        }
        for (g_79 = 17; (g_79 < 10); g_79 = safe_sub_func_int32_t_s_s(g_79, 2))
        {
            char l_1480[3];
            int l_1510 = 0x1531D5A4L;
            unsigned char *l_1521 = &g_153;
            unsigned short *l_1524 = &g_950;
            short *****l_1528 = &l_1527;
            unsigned l_1534 = 4294967288UL;
            int *l_1536[1][2];
            int ***l_1543 = (void*)0;
            int ****l_1542 = &l_1543;
            unsigned short * const *l_1580 = &l_1524;
            unsigned short * const **l_1579 = &l_1580;
            char ***l_1603 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1480[i] = 0x1DL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1536[i][j] = &l_1352;
            }
            for (p_10 = 0; (p_10 <= 5); p_10 += 1)
            {
                const unsigned short ***l_1470 = &g_1469;
                unsigned short *l_1475[4];
                int l_1476 = 0xC94E338CL;
                int l_1513 = 0xD12600B4L;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1475[i] = &g_1016[0];
                (*l_1458) = ((*g_1047) = (((g_113[(p_10 + 3)][p_10] , ((((+0xAFL) | (((*l_1470) = g_1469) == (void*)0)) && (safe_mul_func_int8_t_s_s((((safe_add_func_int8_t_s_s(g_113[(p_10 + 2)][p_10], p_11)) > (l_1477 = (l_1476 = (*l_1153)))) && g_314[1]), (((safe_lshift_func_uint8_t_u_u((l_1480[0] != g_113[(p_10 + 3)][p_10]), g_381)) , p_10) != l_1464)))) , 0L)) <= p_9) & 0x2F3CL));
                for (l_1476 = 0; (l_1476 >= 0); l_1476 -= 1)
                {
                    unsigned l_1481 = 0x50755617L;
                    for (g_381 = 0; (g_381 <= 0); g_381 += 1)
                    {
                        l_1481 = p_11;
                        (*l_1153) = p_11;
                        (*l_1153) = (l_1464 && func_52(((***g_529) = (p_11 && p_11))));
                    }
                    return (**g_530);
                }
                for (l_1347 = 0; (l_1347 <= 0); l_1347 += 1)
                {
                    int l_1486 = 0xEB3B8414L;
                    int l_1488[6][9] = {{(-1L),0x719C9FB5L,0x40E54F42L,0x719C9FB5L,(-1L),(-1L),0x5D12A1D3L,0xE2EBF3C0L,0xE2EBF3C0L},{0x719C9FB5L,0x99509E89L,(-1L),0xE2EBF3C0L,(-1L),0x99509E89L,0x719C9FB5L,0x06A2DF16L,0xC3837C29L},{0x71359B08L,0xC3837C29L,0x719C9FB5L,(-1L),0x06A2DF16L,(-1L),0x719C9FB5L,0xC3837C29L,0x71359B08L},{0x99509E89L,(-1L),0x71359B08L,0x06A2DF16L,0x5D12A1D3L,(-1L),0x5D12A1D3L,0x06A2DF16L,0x71359B08L},{0x5D12A1D3L,0x5D12A1D3L,0x99509E89L,0x40E54F42L,0xC3837C29L,0xE2EBF3C0L,0x71359B08L,0xE2EBF3C0L,0xC3837C29L},{0x99509E89L,0x5D12A1D3L,0x5D12A1D3L,0x99509E89L,0x40E54F42L,0xC3837C29L,0xE2EBF3C0L,0x71359B08L,0xE2EBF3C0L}};
                    unsigned char *l_1511[10][7][3] = {{{&g_98,&g_416,&g_346},{&g_416,(void*)0,&g_346},{&g_346,&g_153,(void*)0},{&g_98,(void*)0,&g_346},{&g_153,&g_416,&g_346},{(void*)0,(void*)0,(void*)0},{&g_98,&g_346,&g_346}},{{&g_153,(void*)0,&g_346},{&g_346,&g_416,(void*)0},{&g_98,&g_153,&g_416},{&g_346,&g_98,&g_98},{&g_153,&g_153,&g_153},{&g_98,&g_98,&g_416},{&g_346,&g_153,&g_153}},{{&g_153,&g_153,&g_98},{&g_98,&g_98,&g_98},{&g_98,&g_98,&g_153},{&g_346,&g_153,&g_98},{&g_153,&g_153,&g_416},{&g_98,&g_346,&g_98},{&g_153,(void*)0,&g_153}},{{&g_416,(void*)0,&g_98},{&g_153,&g_416,&g_98},{&g_98,&g_98,&g_153},{&g_98,&g_416,&g_416},{&g_153,&g_416,(void*)0},{&g_416,&g_346,&g_346},{&g_153,&g_98,&g_98}},{{&g_98,(void*)0,&g_153},{&g_153,&g_98,&g_416},{&g_346,&g_346,&g_98},{&g_98,&g_416,&g_346},{&g_98,&g_416,&g_346},{&g_153,&g_98,&g_346},{&g_346,&g_416,&g_346}},{{&g_153,(void*)0,&g_98},{&g_346,(void*)0,&g_416},{&g_98,&g_346,&g_153},{(void*)0,&g_153,&g_98},{&g_98,&g_153,&g_346},{&g_346,&g_98,(void*)0},{&g_153,&g_98,&g_416}},{{&g_346,&g_153,&g_153},{&g_153,&g_153,&g_98},{&g_98,&g_98,&g_153},{&g_416,&g_416,&g_346},{&g_346,&g_153,&g_98},{(void*)0,&g_346,(void*)0},{&g_416,&g_346,&g_98}},{{&g_98,&g_416,&g_346},{&g_98,&g_98,&g_153},{(void*)0,&g_346,&g_346},{&g_98,&g_346,&g_153},{&g_98,&g_98,&g_98},{(void*)0,(void*)0,&g_98},{&g_98,&g_153,&g_346}},{{&g_98,&g_416,&g_153},{&g_416,&g_98,&g_98},{(void*)0,&g_416,&g_153},{&g_346,&g_153,&g_416},{&g_416,(void*)0,&g_153},{&g_98,&g_98,&g_98},{&g_346,&g_346,&g_98}},{{&g_153,&g_346,&g_153},{&g_153,&g_98,&g_416},{(void*)0,&g_416,&g_153},{&g_153,&g_346,&g_98},{&g_98,&g_346,&g_153},{&g_153,&g_153,&g_346},{(void*)0,&g_416,&g_98}}};
                    int i, j, k;
                    for (l_1223 = 0; (l_1223 <= 0); l_1223 += 1)
                    {
                        (*g_141) = &l_1347;
                        return p_10;
                    }
                    for (g_321 = 7; (g_321 >= 2); g_321 -= 1)
                    {
                        int *l_1487 = (void*)0;
                        int *l_1489 = &g_121;
                        int *l_1490 = &l_1348;
                        int *l_1491 = &g_804[(p_10 + 1)][(l_1347 + 2)][p_10];
                        int *l_1492 = &g_590;
                        int *l_1493 = &l_1349;
                        int *l_1494 = &g_804[5][1][5];
                        int *l_1495 = &l_1209;
                        int *l_1496 = &l_1476;
                        int *l_1497 = (void*)0;
                        int *l_1498 = &g_484;
                        int *l_1499 = (void*)0;
                        int *l_1500 = &l_1352;
                        int *l_1501[3][5];
                        unsigned short l_1502 = 0xAE5CL;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_1501[i][j] = &l_1488[1][4];
                        }
                        (*g_1047) = (safe_sub_func_int16_t_s_s(g_804[(p_10 + 1)][(l_1347 + 2)][p_10], (++p_11)));
                        if (p_11)
                            break;
                        (*l_1153) = 0x3E1EB98EL;
                        l_1502--;
                    }
                    l_1513 ^= (((func_40(p_10, func_52((***g_529)), (l_1512[0] = ((((safe_sub_func_int32_t_s_s(l_1488[0][5], (((void*)0 != l_1507[2][0]) || (safe_sub_func_uint16_t_u_u(65534UL, ((l_1510 = p_10) != func_12(((l_1488[1][4] >= p_10) | p_10), (*l_1458), p_9, l_1480[0], g_1107))))))) , p_10) && l_1486) | (*g_1171))), p_10, p_10) == l_1477) != p_11) == l_1476);
                }
            }
            l_1537 |= ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(255UL, ((((l_1520[3][3][6] ^ ((++(*l_1521)) > (p_9 ^ ((--(*l_1524)) & (l_1512[0] = l_1512[0]))))) || ((((((0L > ((((&l_1236 == ((*l_1528) = l_1527)) , ((safe_mod_func_int32_t_s_s((l_1534 &= (safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(0x157A31F1L, ((*g_483) = ((*g_1047) = l_1477))))))), (-3L))) , (*g_1047))) , l_1535[4]) <= (*l_1458))) || (*g_483)) , l_1480[1]) && 0xFF8B1830L) , 1L) , l_1520[3][3][6])) == (-1L)) , l_1510))), 6)) > p_10);
            if ((safe_lshift_func_int16_t_s_u(0xA560L, (safe_add_func_uint16_t_u_u((p_9 < l_1520[3][3][6]), (((***l_1320) = (l_1512[0] <= ((void*)0 != &g_1469))) <= (255UL || (((*l_1458) = 0xF81BFD57L) ^ (((func_52(l_1537) > g_334) <= p_11) || l_1537)))))))))
            {
                unsigned *l_1546 = &g_490[2];
                const int l_1559 = 0x0794EE5EL;
                int l_1570[9][2][5] = {{{1L,0x353AA57AL,0x7C04F6C0L,0x7C04F6C0L,0x353AA57AL},{0x353AA57AL,0xD6EFAE17L,1L,0x353AA57AL,0x7C04F6C0L}},{{0x91743321L,0x353AA57AL,0xB72171D9L,0x353AA57AL,0x91743321L},{1L,0x0748DEE9L,0xD6EFAE17L,0x7C04F6C0L,0xD6EFAE17L}},{{0x7C04F6C0L,0x233F3B8FL,0x233F3B8FL,0x7C04F6C0L,0L},{1L,0x7C04F6C0L,0x91743321L,0xD6EFAE17L,0xD6EFAE17L}},{{0xB72171D9L,0x7C04F6C0L,0xB72171D9L,0L,0x7C04F6C0L},{0xD6EFAE17L,0x233F3B8FL,0L,0xD6EFAE17L,0L}},{{0xD6EFAE17L,0xD6EFAE17L,0x91743321L,0x7C04F6C0L,1L},{0xB72171D9L,1L,0L,0L,1L}},{{1L,0x233F3B8FL,0xB72171D9L,1L,0L},{0x7C04F6C0L,1L,0x91743321L,1L,0x7C04F6C0L}},{{0xB72171D9L,0xD6EFAE17L,0x233F3B8FL,0L,0xD6EFAE17L},{0x7C04F6C0L,0x233F3B8FL,0x233F3B8FL,0x7C04F6C0L,0L}},{{1L,0x7C04F6C0L,0x91743321L,0xD6EFAE17L,0xD6EFAE17L},{0xB72171D9L,0x7C04F6C0L,0xB72171D9L,0L,0x7C04F6C0L}},{{0xD6EFAE17L,0x233F3B8FL,0L,0xD6EFAE17L,0L},{0xD6EFAE17L,0xD6EFAE17L,0x91743321L,0x7C04F6C0L,1L}}};
                int ***l_1582 = &g_141;
                int i, j, k;
                (*l_1153) = (l_1542 == (((*l_1524) = (*l_1153)) , l_1544[1][9][0]));
                if ((((p_10 , p_10) ^ ((*l_1546) ^= (**g_367))) , (((safe_mod_func_uint32_t_u_u(func_52((l_1537 == (((safe_rshift_func_uint8_t_u_u(g_376[6], 3)) , (~(safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((*l_1521) = p_11), ((**l_1321) |= (-1L)))), (--(*l_1524)))))) < (((safe_rshift_func_int16_t_s_s(((func_52(l_1464) && 4294967292UL) ^ (*g_1415)), (***g_529))) | p_10) & p_10)))), (*g_1047))) <= l_1559) , (-1L))))
                {
                    const short **l_1560 = &l_1247;
                    short *l_1561 = (void*)0;
                    if ((((1UL > ((*g_1171) != ((*g_1047) < 1UL))) && p_9) > p_10))
                    {
                        unsigned short l_1562 = 5UL;
                        if (p_9)
                            break;
                        if (l_1562)
                            continue;
                        (*g_141) = (l_1563 = &l_1512[0]);
                    }
                    else
                    {
                        (*g_1047) = (((void*)0 == &p_11) < (safe_rshift_func_uint16_t_u_s(func_52(p_10), (((*l_1524) &= p_11) == (safe_lshift_func_uint16_t_u_s(((**g_530) , (((safe_mul_func_uint8_t_u_u((p_10 , ((*l_1521) = (func_52((**g_530)) ^ (*g_1171)))), 1UL)) ^ (-1L)) , p_10)), p_10))))));
                    }
                }
                else
                {
                    char l_1571 = 9L;
                    int l_1588 = 1L;
                    const short * const l_1589 = &g_159[7];
                    int *l_1590 = &g_33;
                    for (g_312 = 2; (g_312 >= 0); g_312 -= 1)
                    {
                        int i;
                        --l_1572;
                        if (l_1480[g_312])
                            break;
                    }
                    for (l_1445 = 0; (l_1445 <= 24); l_1445 = safe_add_func_uint32_t_u_u(l_1445, 5))
                    {
                        if (p_10)
                            break;
                        (*g_141) = &l_1512[1];
                    }
                    for (p_9 = 0; (p_9 >= 43); p_9 = safe_add_func_int8_t_s_s(p_9, 2))
                    {
                        unsigned l_1587[2][1][3];
                        int * const l_1596[4] = {&g_590,&g_590,&g_590,&g_590};
                        int **l_1597 = (void*)0;
                        int **l_1598 = &g_483;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_1587[i][j][k] = 1UL;
                            }
                        }
                        if (p_11)
                            break;
                        (*g_141) = (func_40((l_1579 != &g_1469), p_9, (p_10 | ((**l_1580) = (l_1581 == l_1582))), (safe_sub_func_uint32_t_u_u((0xE6L ^ (l_1588 &= (safe_mod_func_uint8_t_u_u(func_40(l_1587[1][0][1], ((*l_1521) = (((*g_1171) < 2L) , g_314[0])), g_338, p_11, p_11), p_10)))), 0xB12E4B15L)), l_1587[1][0][1]) , &g_484);
                        l_1595 &= (func_61((*g_141), l_1589, (l_1590 = (**l_1581)), ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_1563) = ((*l_1524) = 0x31F1L)), ((p_9 , (((*l_1458) >= l_1587[1][0][1]) >= func_52(p_9))) && 0xD649L))) == p_9), g_338)) , (*g_141)), (***l_1527)) & p_11);
                        (*l_1598) = l_1596[3];
                    }
                }
                return p_11;
            }
            else
            {
                if (p_10)
                    break;
                for (l_1223 = 23; (l_1223 >= (-11)); l_1223--)
                {
                    (*g_141) = g_1601;
                }
                (*g_141) = &l_1352;
            }
            (*l_1458) |= (l_1602 == l_1603);
        }
        if ((p_9 || (&p_10 == (void*)0)))
        {
            unsigned l_1608[3][2] = {{0x269EA548L,0x269EA548L},{0x38719591L,0x269EA548L},{0x269EA548L,0x38719591L}};
            int l_1633 = 0x4C38E41EL;
            int l_1634 = 0x4A862654L;
            int l_1637 = 0x79B0FA38L;
            int l_1638 = (-1L);
            char l_1655 = 0L;
            int l_1663[10][2][3] = {{{5L,0L,5L},{(-1L),(-8L),(-8L)}},{{0x2E6E5C87L,0L,0x2E6E5C87L},{(-1L),(-1L),(-8L)}},{{5L,0L,5L},{(-1L),(-8L),(-8L)}},{{0x2E6E5C87L,0L,0x2E6E5C87L},{(-1L),(-1L),(-8L)}},{{5L,0L,5L},{(-1L),(-8L),(-8L)}},{{0x2E6E5C87L,0L,0x2E6E5C87L},{(-1L),(-1L),(-8L)}},{{5L,0L,5L},{(-1L),(-8L),(-8L)}},{{0x2E6E5C87L,0L,0x2E6E5C87L},{(-1L),(-1L),(-8L)}},{{5L,0L,5L},{(-1L),(-8L),(-8L)}},{{0x2E6E5C87L,0L,0x2E6E5C87L},{(-1L),(-1L),(-8L)}}};
            int l_1664 = 0x11B728B9L;
            int l_1665 = 0x56157AA3L;
            int l_1667 = (-1L);
            unsigned short l_1674 = 1UL;
            int i, j, k;
            if (((*g_483) &= (((*l_1458) && (*l_1458)) , (((***l_1320) = p_11) == (p_9 ^ (safe_sub_func_int16_t_s_s((**g_530), (func_52((safe_lshift_func_int8_t_s_s((p_9 == func_40(func_40((((l_1608[2][1] , (*l_1153)) == 0xE815L) | l_1608[2][1]), g_89, (*l_1458), (*l_1153), (*l_1563)), g_741[1], l_1608[2][1], p_10, p_11)), p_9))) == l_1608[2][1]))))))))
            {
                short l_1615 = 0xC5FDL;
                int l_1627 = 0L;
                int l_1632[2][1][1];
                int l_1636[5];
                unsigned char l_1639 = 6UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_1632[i][j][k] = 1L;
                    }
                }
                for (i = 0; i < 5; i++)
                    l_1636[i] = 0xBC669AB1L;
                if (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((p_11 && (safe_add_func_int8_t_s_s(((***l_1320) ^= (l_1615 == p_10)), ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((l_1615 && (*l_1153)) ^ ((((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(func_52((*g_158)), ((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint8_t_u_u(((p_9 <= p_11) < 247UL), (*l_1563))))) ^ p_11))), (*l_1563))) | l_1608[2][1]) & p_10) & l_1608[2][1])), l_1615)), 0x6493C4FFL)) || g_177)))), 10)) , (*l_1563)), l_1608[0][1])) == p_9))
                {
                    int *l_1628 = &g_804[4][2][5];
                    int *l_1629 = &l_1349;
                    int *l_1630 = &l_1352;
                    int *l_1631[7] = {&g_804[5][1][5],&g_804[5][1][5],&g_804[5][1][5],&g_804[5][1][5],&g_804[5][1][5],&g_804[5][1][5],&g_804[5][1][5]};
                    int i;
                    l_1639--;
                    (*g_1047) = (*g_483);
                }
                else
                {
                    const short l_1671 = (-1L);
                    int l_1673 = 0L;
                    for (l_1152 = 0; (l_1152 == 32); ++l_1152)
                    {
                        short ****l_1653 = &g_529;
                        short *****l_1654 = &l_1653;
                        char l_1656 = 1L;
                        int l_1657 = 0L;
                        int *l_1658 = &l_1537;
                        int *l_1659 = &l_1347;
                        int *l_1660 = &l_1633;
                        int *l_1661 = &l_1349;
                        int *l_1662[8] = {&l_1209,&l_1209,&l_1209,&l_1209,&l_1209,&l_1209,&l_1209,&l_1209};
                        unsigned char *l_1672[8][7][4] = {{{&l_1639,&g_346,(void*)0,&g_416},{(void*)0,(void*)0,&g_153,&g_346},{&g_416,(void*)0,&g_346,&g_153},{&g_346,(void*)0,(void*)0,&g_346},{&g_416,&g_153,(void*)0,&l_1595},{&l_1639,&g_346,(void*)0,&g_153},{(void*)0,&g_153,&l_1595,&g_153}},{{&g_153,&g_153,&g_346,&l_1639},{&l_1639,&g_346,&g_98,(void*)0},{(void*)0,&l_1639,&l_1595,&l_1595},{(void*)0,(void*)0,&l_1595,(void*)0},{&g_416,&l_1595,(void*)0,&l_1595},{&l_1639,&g_153,&g_416,(void*)0},{&g_346,&g_153,(void*)0,&g_153}},{{(void*)0,&l_1639,&g_98,&l_1595},{&g_98,&l_1639,(void*)0,&g_416},{&l_1595,(void*)0,(void*)0,&l_1639},{(void*)0,&g_346,(void*)0,(void*)0},{&g_153,&g_153,(void*)0,&g_153},{(void*)0,(void*)0,&l_1639,&l_1595},{(void*)0,&l_1595,(void*)0,&l_1639}},{{&l_1595,&l_1595,&g_416,&l_1595},{&l_1595,(void*)0,&l_1639,&g_153},{&g_416,&g_153,(void*)0,(void*)0},{&g_98,&g_346,&l_1595,&l_1639},{&g_416,(void*)0,(void*)0,&g_416},{&g_416,&l_1639,(void*)0,&l_1595},{&l_1595,&l_1639,&g_416,&g_153}},{{&g_153,&g_153,&l_1595,(void*)0},{(void*)0,&g_153,(void*)0,&l_1595},{&g_416,&l_1595,(void*)0,(void*)0},{&g_346,(void*)0,&l_1639,&l_1595},{(void*)0,&l_1639,&g_416,&g_153},{(void*)0,&g_98,&l_1639,&g_346},{&g_153,(void*)0,&g_98,&g_153}},{{&g_98,&g_153,&l_1639,(void*)0},{&g_416,&l_1639,&g_416,(void*)0},{&l_1639,(void*)0,&g_153,&l_1595},{&l_1639,(void*)0,(void*)0,&g_153},{&g_153,&l_1595,&g_346,&l_1639},{&l_1639,(void*)0,(void*)0,&l_1639},{&l_1639,&l_1639,&g_416,&l_1639}},{{(void*)0,&l_1595,&g_416,&g_346},{&g_98,(void*)0,(void*)0,&g_346},{&g_98,&l_1595,(void*)0,&l_1639},{&g_346,&l_1639,&l_1639,&l_1639},{&g_416,(void*)0,&g_153,&l_1639},{(void*)0,&l_1595,(void*)0,&g_153},{&g_98,(void*)0,&l_1639,&l_1595}},{{&l_1639,(void*)0,&l_1595,(void*)0},{&g_98,&l_1639,(void*)0,(void*)0},{(void*)0,&g_153,&g_416,&g_153},{&g_153,(void*)0,(void*)0,&g_346},{&l_1639,&g_98,&l_1639,&g_153},{&g_346,&l_1639,&g_346,(void*)0},{&g_346,(void*)0,&l_1639,&g_346}}};
                        int i, j, k;
                        (*g_1047) &= (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((p_11 < (+(safe_lshift_func_int8_t_s_u((3UL > ((**g_367) = ((l_1652 = (void*)0) != ((*l_1654) = l_1653)))), 5)))), (g_314[1] = l_1632[0][0][0]))), 4)), (*l_1458)));
                        (*l_1458) = ((*g_483) = ((*g_1047) = p_9));
                        l_1668[3]++;
                        (*g_141) = &l_1632[1][0][0];
                    }
                }
                (*g_141) = &l_1632[0][0][0];
            }
            else
            {
                (*g_1047) &= l_1674;
            }
        }
        else
        {
            unsigned l_1675 = 0UL;
            int *l_1678 = &l_1347;
            int *l_1679 = &g_590;
            int *l_1680 = &l_1347;
            int *l_1681 = &g_590;
            int *l_1682 = &l_1352;
            int *l_1683 = &l_1347;
            int *l_1684 = &l_1347;
            int *l_1685[2][7][6] = {{{&l_1209,&g_804[4][1][1],&l_1349,&l_1349,&l_1209,&l_1352},{&g_804[5][1][5],&g_804[5][0][1],&l_1352,&l_1209,&l_1349,&g_484},{(void*)0,&l_1347,&g_590,&g_590,&l_1347,(void*)0},{&g_33,&l_1349,&g_804[5][1][5],&g_804[5][1][5],&l_1209,&g_484},{&l_1512[0],&g_484,&l_1209,&g_33,&g_590,&g_590},{&l_1512[0],&l_1349,&g_33,&g_804[5][1][5],&l_1352,&g_804[5][0][1]},{&g_33,&l_1209,&l_1347,&g_590,&g_484,&l_1349}},{{(void*)0,&l_1209,&l_1347,&l_1209,(void*)0,(void*)0},{&g_804[5][1][5],&l_1347,(void*)0,&l_1349,&g_484,&g_804[5][1][5]},{&g_484,(void*)0,&g_804[5][0][1],&l_1347,&g_590,&g_804[5][1][5]},{&l_1209,&g_33,(void*)0,&l_1349,&g_804[5][0][1],(void*)0},{&g_590,(void*)0,&l_1347,&g_804[5][1][5],&l_1349,&l_1349},{&l_1349,&l_1347,&l_1347,&l_1349,(void*)0,&g_804[5][0][1]},{&l_1347,&l_1352,&g_33,&l_1349,&g_804[5][1][5],&g_590}}};
            unsigned char *l_1708 = (void*)0;
            unsigned char *l_1709 = &g_346;
            int i, j, k;
            ++l_1675;
            --l_1692;
            (*l_1679) = (65535UL | func_40((g_1695 |= ((*l_1563) >= g_1016[0])), ((*l_1709) = (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(0L, (safe_add_func_uint8_t_u_u((g_416 = (safe_sub_func_int16_t_s_s((*l_1683), p_10))), func_52((((safe_rshift_func_int8_t_s_s((*l_1681), (((*g_1171) >= p_10) , 1L))) > p_11) | p_9)))))) > p_11), 0xD7C5L)), p_9))), g_804[0][2][4], l_1710[0], (*l_1679)));
            for (g_79 = (-27); (g_79 > 40); g_79 = safe_add_func_uint32_t_u_u(g_79, 6))
            {
                int *l_1714 = (void*)0;
                short *l_1715 = &l_1666[6];
                short *l_1716 = &g_39;
                short *l_1717 = &l_1666[0];
                for (g_33 = 0; (g_33 <= 7); g_33 += 1)
                {
                    int i;
                    return l_1666[g_33];
                }
                (*g_141) = ((!func_52((func_61(l_1682, (*g_530), ((**l_1581) = ((safe_unary_minus_func_int16_t_s(func_61(l_1714, (*g_530), l_1678, ((*g_141) = l_1684), (l_1716 = (l_1715 = &p_10))))) , &l_1347)), l_1714, l_1717) & (*l_1153)))) , (*g_141));
            }
        }
        (*g_483) &= (((void*)0 != (*g_1169)) > ((safe_sub_func_uint32_t_u_u((++(**g_367)), ((((((*l_1732) = (p_11 | func_61(&l_1209, (**g_529), ((**l_1581) = l_1732), &l_1689[1], l_1733))) , p_9) ^ p_9) >= p_9) <= p_11))) , 0x1DB9B7CEL));
    }
    return (*l_1732);
}







static short func_12(unsigned short p_13, int p_14, unsigned char p_15, short p_16, unsigned p_17)
{
    unsigned char l_1055 = 0x4AL;
    int *l_1056 = &g_590;
    short *l_1059[6] = {(void*)0,&g_159[0],(void*)0,(void*)0,&g_159[0],(void*)0};
    short *l_1060 = (void*)0;
    short *l_1061 = &g_334;
    short *l_1062 = &g_39;
    int * const l_1069 = &g_599;
    int * const *l_1068 = &l_1069;
    int *l_1074 = &g_1040;
    int **l_1073[9][9][3] = {{{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074}},{{&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,(void*)0,(void*)0},{(void*)0,&l_1074,(void*)0},{(void*)0,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074}},{{(void*)0,(void*)0,&l_1074},{(void*)0,&l_1074,(void*)0},{&l_1074,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{(void*)0,(void*)0,(void*)0},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{&l_1074,&l_1074,(void*)0}},{{(void*)0,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{(void*)0,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{(void*)0,&l_1074,(void*)0},{(void*)0,&l_1074,&l_1074},{(void*)0,(void*)0,&l_1074}},{{(void*)0,&l_1074,&l_1074},{(void*)0,&l_1074,(void*)0},{(void*)0,&l_1074,&l_1074},{(void*)0,&l_1074,(void*)0},{(void*)0,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074},{&l_1074,(void*)0,(void*)0},{&l_1074,(void*)0,(void*)0}},{{(void*)0,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{&l_1074,(void*)0,&l_1074},{&l_1074,(void*)0,&l_1074},{(void*)0,&l_1074,(void*)0},{(void*)0,&l_1074,&l_1074}},{{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{(void*)0,(void*)0,(void*)0},{&l_1074,&l_1074,&l_1074},{&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,(void*)0}},{{&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,&l_1074,(void*)0},{(void*)0,&l_1074,(void*)0},{&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,(void*)0},{&l_1074,(void*)0,(void*)0},{(void*)0,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074}},{{&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{(void*)0,&l_1074,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,&l_1074},{&l_1074,(void*)0,&l_1074},{&l_1074,&l_1074,(void*)0}}};
    int l_1101[6][7] = {{0x66E3A150L,0x20887553L,0x3F927896L,0x20887553L,0x66E3A150L,0xD35D0805L,0xD35D0805L},{0x66E3A150L,0x20887553L,0x3F927896L,0x20887553L,0x66E3A150L,0xD35D0805L,0xD35D0805L},{0x66E3A150L,0x20887553L,0x3F927896L,0x20887553L,0x66E3A150L,0xD35D0805L,0xD35D0805L},{0x66E3A150L,0x20887553L,0x3F927896L,0x20887553L,0x66E3A150L,0xD35D0805L,0xD35D0805L},{0x66E3A150L,0x20887553L,0x3F927896L,0x20887553L,0x66E3A150L,0xD35D0805L,0xD35D0805L},{0x66E3A150L,0x20887553L,0x3F927896L,0x20887553L,0x66E3A150L,0xD35D0805L,0xD35D0805L}};
    char l_1115[10] = {0xE3L,6L,0xE3L,6L,0xE3L,6L,0xE3L,6L,0xE3L,6L};
    unsigned *l_1142 = &g_381;
    unsigned char *l_1145 = &l_1055;
    int *l_1146 = &g_1040;
    int i, j, k;
    if ((safe_add_func_uint32_t_u_u(((((*g_1047) = ((((+4294967295UL) ^ (p_14 = ((*g_483) = (!p_13)))) ^ 251UL) && l_1055)) < ((*l_1056) = (*l_1056))) , p_17), 4294967287UL)))
    {
        unsigned char l_1063[3][3][6] = {{{1UL,0xF5L,253UL,250UL,0xA4L,0xA4L},{0xF9L,0x20L,0x20L,0xF9L,0x5FL,0UL},{0x8CL,0xF9L,0xF9L,0UL,0xEDL,0xB1L}},{{0x44L,0xA4L,0xF5L,0UL,0xEDL,0x50L},{250UL,0xF9L,255UL,253UL,0x5FL,250UL},{0xA4L,0x20L,0xF5L,0x20L,0xA4L,0UL}},{{0UL,0xF5L,0xEDL,0xF9L,9UL,252UL},{0xB1L,3UL,0xF9L,0xF5L,250UL,252UL},{0x50L,0xA4L,0xEDL,255UL,0UL,0UL}}};
        int i, j, k;
        return l_1063[1][0][5];
    }
    else
    {
        int ***l_1067 = (void*)0;
        int **** const l_1066[5] = {&l_1067,&l_1067,&l_1067,&l_1067,&l_1067};
        int l_1110 = 0x4626F433L;
        int i;
        for (g_89 = 0; (g_89 <= 5); g_89 += 1)
        {
            int * const **l_1070 = &l_1068;
            int *l_1072 = (void*)0;
            int **l_1071 = &l_1072;
            int l_1099 = (-1L);
            int i;
            if (((((g_159[(g_89 + 2)] , (((*g_467) = (*g_467)) != (((((safe_rshift_func_int16_t_s_s(((p_13 < 0x02L) == (((void*)0 == l_1066[3]) > (((*l_1070) = (p_15 , l_1068)) == (l_1073[4][0][2] = l_1071)))), 14)) , (**g_530)) ^ (***g_529)) >= 65535UL) , (*l_1071)))) | (-1L)) && 0L) | 65535UL))
            {
                unsigned char l_1102 = 1UL;
                for (g_334 = 4; (g_334 >= 0); g_334 -= 1)
                {
                    int *l_1075 = &g_590;
                    unsigned short ***l_1086 = (void*)0;
                    int l_1100[6][8] = {{0x5079179AL,0xAA8E5855L,0x2ABEEE1BL,0x2ABEEE1BL,0xAA8E5855L,0x5079179AL,0x37DCBF17L,0x5079179AL},{0xAA8E5855L,0x5079179AL,0x37DCBF17L,0x5079179AL,0xAA8E5855L,0x2ABEEE1BL,0x2ABEEE1BL,0xAA8E5855L},{0x5079179AL,1L,1L,0x5079179AL,6L,0xAA8E5855L,6L,0x5079179AL},{1L,6L,1L,0x2ABEEE1BL,0x37DCBF17L,0x37DCBF17L,0x2ABEEE1BL,1L},{6L,6L,0x2ABEEE1BL,1L,6L,1L,0x2ABEEE1BL,0x37DCBF17L},{0x37DCBF17L,0x5079179AL,0xAA8E5855L,0x2ABEEE1BL,0x2ABEEE1BL,0xAA8E5855L,0x5079179AL,0x37DCBF17L}};
                    int i, j;
                    for (g_950 = 1; (g_950 <= 5); g_950 += 1)
                    {
                        unsigned short *l_1078 = &g_1016[0];
                        int l_1081 = 0L;
                        unsigned l_1087 = 0x2ED8AE0FL;
                        int *l_1088 = (void*)0;
                        int *l_1089 = &g_33;
                        int *l_1090 = &g_804[5][1][5];
                        int *l_1091 = &g_804[5][1][5];
                        int *l_1092 = &g_804[2][2][3];
                        int *l_1093 = (void*)0;
                        int *l_1094 = (void*)0;
                        int *l_1095 = &g_804[5][1][5];
                        int *l_1096 = &g_33;
                        int *l_1097 = &l_1081;
                        int *l_1098[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        int i, j;
                        (*g_141) = l_1075;
                        (*g_142) = (func_40(((p_15 , ((((safe_mul_func_uint8_t_u_u(2UL, 0xDAL)) && ((*l_1078)--)) && (l_1081 || g_113[5][5])) != (safe_add_func_int8_t_s_s(p_16, g_121)))) || ((**g_367) = (~(safe_sub_func_int32_t_s_s(((*l_1075) = (*g_483)), ((*g_1047) = ((l_1086 == (void*)0) , (*g_483)))))))), l_1087, p_17, p_16, g_113[5][1]) , (**g_141));
                        --l_1102;
                    }
                    return (*l_1075);
                }
            }
            else
            {
                unsigned l_1114[6][5] = {{0xCB0349C5L,4294967289UL,4294967289UL,0xCB0349C5L,4294967294UL},{0xCB0349C5L,4294967292UL,0UL,0xCB0349C5L,0x5ACCBEDAL},{4294967295UL,4294967292UL,4294967289UL,4294967295UL,0x5ACCBEDAL},{0xCB0349C5L,4294967289UL,4294967289UL,0xCB0349C5L,4294967294UL},{0xCB0349C5L,4294967292UL,0UL,0xCB0349C5L,0x5ACCBEDAL},{4294967295UL,4294967292UL,4294967289UL,4294967295UL,0x5ACCBEDAL}};
                int **** const l_1138 = (void*)0;
                int **** const *l_1137 = &l_1138;
                int i, j;
                if (((safe_mul_func_int16_t_s_s(p_17, g_1107)) > (safe_mul_func_uint16_t_u_u(0x537BL, g_950))))
                {
                    const int *l_1113 = &g_331;
                    int l_1141[1][8] = {{0x1DF8766DL,0x1DF8766DL,0x1DF8766DL,0x1DF8766DL,0x1DF8766DL,0x1DF8766DL,0x1DF8766DL,0x1DF8766DL}};
                    int i, j;
                    for (g_404 = 1; (g_404 <= 5); g_404 += 1)
                    {
                        if (l_1110)
                            break;
                    }
                    (*g_483) |= ((((p_13 && ((safe_rshift_func_uint8_t_u_s(g_1038, 2)) <= g_741[0])) != (l_1110 >= ((func_40(p_15, g_1038, (*l_1056), (((*g_467) = (p_15 , (void*)0)) == l_1113), l_1114[1][1]) == g_439) & l_1115[8]))) , (*g_1047)) & 0L);
                    if ((*g_1047))
                    {
                        (*g_1047) = p_13;
                    }
                    else
                    {
                        unsigned short *l_1121[10] = {&g_376[6],&g_376[6],&g_376[6],&g_376[6],&g_376[6],&g_376[6],&g_376[6],&g_376[6],&g_376[6],&g_376[6]};
                        char *l_1126 = &g_741[1];
                        unsigned char *l_1127 = &g_153;
                        const int *l_1129 = (void*)0;
                        const int **l_1128 = &l_1129;
                        int **** const *l_1136 = &l_1066[3];
                        int i;
                        (*g_483) ^= (g_1116 <= (0L >= (((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((((--g_113[5][5]) | (p_14 , (safe_add_func_int8_t_s_s(p_16, (-1L))))) != ((*l_1126) = 8L)) & g_263), ((*l_1127) = g_98))), (((*g_1047) < (*l_1056)) == 0xFBFACB79L))) | g_177) >= 0x5E3746DFL)));
                        (*l_1128) = l_1113;
                        (*g_1047) = ((*g_483) = ((((p_17 <= (safe_mul_func_int8_t_s_s((((((((safe_mod_func_int32_t_s_s((*g_1047), ((safe_add_func_int16_t_s_s((0x844EL & 0x1E59L), ((l_1137 = l_1136) != (void*)0))) , ((8UL > p_14) , (safe_add_func_uint8_t_u_u(((*l_1127) ^= p_17), 2UL)))))) > (*l_1056)) != 0x1176F00BL) <= 0x18BE30D9L) || g_484) | g_113[5][5]) != (-6L)), l_1141[0][6]))) > g_376[6]) < (*l_1056)) | g_376[3]));
                    }
                }
                else
                {
                    for (g_177 = 1; (g_177 <= 5); g_177 += 1)
                    {
                        return p_14;
                    }
                }
                if (p_15)
                    break;
            }
        }
    }
    (*g_141) = &l_1101[3][1];
    (*g_1047) = (**g_141);
    return (*g_158);
}







static unsigned short func_18(unsigned p_19, char p_20, unsigned p_21, int p_22)
{
    unsigned short *l_571[10] = {(void*)0,&g_376[6],&g_404,&g_404,&g_376[6],(void*)0,&g_376[6],&g_404,&g_404,&g_376[6]};
    int l_572 = 1L;
    unsigned *l_577 = &g_79;
    int l_608[4] = {0xC72B0AF8L,0xC72B0AF8L,0xC72B0AF8L,0xC72B0AF8L};
    unsigned l_609 = 0UL;
    const short * const l_639 = &g_334;
    int l_678 = 2L;
    unsigned short l_703 = 9UL;
    int l_707[3][9][8] = {{{0xCBB7E86EL,0xCBB7E86EL,0x24037095L,0L,0x984E23C8L,0L,0x735289CAL,0x8B1F16C4L},{0x24037095L,0x8B1F16C4L,0x24037095L,(-2L),0x8B1F16C4L,1L,1L,0x8B1F16C4L},{0x8B1F16C4L,1L,1L,0x8B1F16C4L,(-2L),0x24037095L,0x8B1F16C4L,0x24037095L},{0x8B1F16C4L,0x735289CAL,0L,0x735289CAL,0x8B1F16C4L,0L,1L,1L},{0x24037095L,0x735289CAL,(-2L),(-2L),0x735289CAL,0x24037095L,1L,0x735289CAL},{1L,1L,(-2L),1L,(-2L),1L,1L,0x24037095L},{0x735289CAL,0x8B1F16C4L,0L,1L,1L,0L,0x8B1F16C4L,0x735289CAL},{0x24037095L,1L,1L,(-2L),1L,(-2L),1L,1L},{0x735289CAL,1L,0x24037095L,0x735289CAL,(-2L),(-2L),0x735289CAL,0x24037095L}},{{1L,1L,0L,0x8B1F16C4L,0x735289CAL,0L,0x735289CAL,0x8B1F16C4L},{0x24037095L,0x8B1F16C4L,0x24037095L,(-2L),0x8B1F16C4L,1L,1L,0x8B1F16C4L},{0x8B1F16C4L,1L,1L,0x8B1F16C4L,(-2L),0x24037095L,0x8B1F16C4L,0x24037095L},{0x8B1F16C4L,0x735289CAL,0L,0x735289CAL,0x8B1F16C4L,0xCBB7E86EL,0x735289CAL,0x735289CAL},{(-2L),0x8B1F16C4L,1L,1L,0x8B1F16C4L,(-2L),0x24037095L,0x8B1F16C4L},{0x735289CAL,0x24037095L,1L,0x735289CAL,1L,0x24037095L,0x735289CAL,(-2L)},{0x8B1F16C4L,1L,0xCBB7E86EL,0x735289CAL,0x735289CAL,0xCBB7E86EL,1L,0x8B1F16C4L},{(-2L),0x735289CAL,0x24037095L,1L,0x735289CAL,1L,0x24037095L,0x735289CAL},{0x8B1F16C4L,0x24037095L,(-2L),0x8B1F16C4L,1L,1L,0x8B1F16C4L,(-2L)}},{{0x735289CAL,0x735289CAL,0xCBB7E86EL,1L,0x8B1F16C4L,0xCBB7E86EL,0x8B1F16C4L,1L},{(-2L),1L,(-2L),1L,1L,0x24037095L,0x24037095L,1L},{1L,0x24037095L,0x24037095L,1L,1L,(-2L),1L,(-2L)},{1L,0x8B1F16C4L,0xCBB7E86EL,0x8B1F16C4L,1L,0xCBB7E86EL,0x735289CAL,0x735289CAL},{(-2L),0x8B1F16C4L,1L,1L,0x8B1F16C4L,(-2L),0x24037095L,0x8B1F16C4L},{0x735289CAL,0x24037095L,1L,0x735289CAL,1L,0x24037095L,0x735289CAL,(-2L)},{0x8B1F16C4L,1L,0xCBB7E86EL,0x735289CAL,0x24037095L,1L,1L,(-2L)},{0xCBB7E86EL,0x24037095L,0L,0x984E23C8L,0x24037095L,0x984E23C8L,0L,0x24037095L},{(-2L),0L,0xCBB7E86EL,(-2L),0x984E23C8L,0x984E23C8L,(-2L),0xCBB7E86EL}}};
    int *l_728 = &g_484;
    char *l_786[6] = {&g_314[1],&g_314[1],(void*)0,&g_314[1],&g_314[1],(void*)0};
    char l_833[10][2][10] = {{{1L,0x5FL,0L,(-8L),(-2L),0xC8L,(-8L),1L,(-10L),1L},{1L,0xF3L,0x17L,0xA9L,0x17L,0xF3L,1L,0x57L,0xF3L,0x5FL}},{{0xF3L,1L,0x57L,0xF3L,0x5FL,1L,0x17L,0x23L,0x57L,0x57L},{0x5FL,1L,(-1L),(-2L),(-2L),(-1L),1L,0x5FL,0L,(-8L)}},{{0xA9L,0xF3L,0L,0x23L,1L,(-1L),(-8L),1L,0xF3L,(-2L)},{0x17L,0x5FL,0L,1L,(-1L),1L,0L,0x5FL,0x17L,0L}},{{0x23L,0xA9L,(-1L),(-8L),0xA9L,1L,(-2L),0x23L,0L,0xA9L},{0x23L,0L,0xF3L,0xA9L,(-1L),(-1L),0xA9L,0xF3L,0L,0x23L}},{{0xF3L,(-1L),0L,0x57L,(-2L),0x1BL,0xF3L,0x23L,0x1BL,0L},{(-1L),0x23L,1L,(-1L),(-2L),0L,(-2L),(-1L),1L,0x23L}},{{(-2L),0xF3L,1L,(-8L),(-1L),1L,0x23L,0L,0xF3L,0xA9L},{0x57L,(-1L),(-1L),0x1BL,1L,1L,1L,1L,0x1BL,(-1L)}},{{(-2L),(-2L),(-1L),1L,0x5FL,0L,(-8L),(-2L),0xC8L,(-8L)},{(-1L),0x57L,1L,0xA9L,0x57L,0x1BL,(-8L),0x1BL,0x57L,0xA9L}},{{0xF3L,(-2L),0xF3L,1L,(-8L),(-1L),1L,0x23L,0L,0xF3L},{0x23L,(-1L),0xC8L,1L,(-2L),0L,0x23L,0x23L,0L,(-2L)}},{{(-1L),0xF3L,0xF3L,(-1L),0L,(-1L),0x1BL,0L,0L,1L},{0L,1L,0xC8L,(-10L),0x17L,0xC8L,0L,0x1BL,0L,0xC8L}},{{(-1L),0x57L,0x5FL,0x57L,(-1L),(-2L),0L,(-1L),1L,0x17L},{0x1BL,0L,(-10L),(-1L),1L,(-1L),0x17L,0L,0L,0x17L}}};
    unsigned short l_835 = 0UL;
    int l_846 = 0xA5B697B1L;
    unsigned l_847[4];
    int ** const *l_864 = &g_467;
    char l_882[10][3][3] = {{{0x06L,0x6FL,0x06L},{0xAFL,(-2L),6L},{0x06L,0x43L,0L}},{{0xAFL,0x19L,0xAFL},{0x06L,(-9L),0x7DL},{0xAFL,0xE6L,0xEEL}},{{0x06L,0x6FL,0x06L},{0xAFL,(-2L),6L},{0x06L,0x43L,0L}},{{0xAFL,0x19L,0xAFL},{0x06L,(-9L),0x7DL},{0xAFL,0xE6L,0xEEL}},{{0x06L,0x6FL,0x06L},{0xAFL,(-2L),6L},{0x06L,0x43L,0L}},{{0xAFL,0x19L,0xAFL},{0x06L,(-9L),0x7DL},{0xAFL,0xE6L,0xEEL}},{{0x06L,0x6FL,0x06L},{0xAFL,(-2L),6L},{0L,0x6FL,0x7DL}},{{0xEEL,(-2L),0xEEL},{0L,0x43L,0x06L},{0xEEL,0x19L,6L}},{{0L,(-9L),0L},{0xEEL,0xE6L,0xAFL},{0L,0x6FL,0x7DL}},{{0xEEL,(-2L),0xEEL},{0L,0x43L,0x06L},{0xEEL,0x19L,6L}}};
    char l_887[7] = {0x93L,0x93L,0x93L,0x93L,0x93L,0x93L,0x93L};
    unsigned ***l_959 = &g_367;
    int ***l_976 = &g_467;
    unsigned l_1044[4][1] = {{4294967295UL},{4UL},{4294967295UL},{4UL}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_847[i] = 0x27A95A1FL;
    if (p_19)
    {
        const unsigned char l_584 = 254UL;
        int *l_592 = &l_572;
        int l_603 = 0x7A3125EEL;
        int l_604 = 0xAD5DA591L;
        int l_605 = 0L;
        int l_606 = 1L;
        int *l_621 = &l_605;
        int l_658 = 0x70F89B13L;
        int l_664 = 1L;
        int l_665 = 0x58861D40L;
        if ((g_113[5][5] ^ (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(1UL, p_20)), (0x84L || (g_39 > p_21))))))
        {
            short *l_585[2];
            short *l_586[1];
            short *l_587 = &g_159[4];
            int l_591 = 0L;
            int l_607 = 0x2708A86EL;
            int i;
            for (i = 0; i < 2; i++)
                l_585[i] = &g_334;
            for (i = 0; i < 1; i++)
                l_586[i] = &g_159[6];
            (*g_483) = ((l_591 > p_19) | 0x6F19L);
            (*g_483) = (((((*l_592) , (safe_sub_func_uint8_t_u_u(l_591, (p_20 | ((func_52((0x8FL ^ p_22)) <= ((**g_367) = ((((((+(*l_592)) & (safe_lshift_func_uint8_t_u_s(p_19, (safe_add_func_uint16_t_u_u(p_22, 1L))))) , (-5L)) < l_591) , 4294967286UL) , p_20))) != p_19))))) , (*g_483)) && g_599) == 254UL);
            if (((p_21 , &p_19) == l_577))
            {
                int *l_600 = &g_33;
                int *l_601 = &g_590;
                int *l_602[10] = {&g_121,&g_484,&g_484,&g_121,&g_484,&g_484,&g_121,&g_484,&g_484,&g_121};
                int **l_616 = &g_468[2][4];
                int ***l_617 = &g_467;
                char *l_620[8][6][5] = {{{&g_314[1],(void*)0,&g_314[0],(void*)0,&g_314[0]},{(void*)0,(void*)0,&g_314[0],&g_312,&g_338},{&g_314[1],&g_314[1],(void*)0,(void*)0,(void*)0},{&g_314[1],&g_333,(void*)0,&g_314[0],&g_333},{(void*)0,&g_314[0],(void*)0,&g_314[0],&g_312},{&g_338,&g_314[0],(void*)0,&g_312,&g_312}},{{&g_333,&g_333,&g_333,&g_338,&g_312},{&g_312,&g_314[1],&g_333,&g_314[0],&g_333},{&g_312,(void*)0,&g_314[0],&g_333,&g_312},{(void*)0,&g_338,(void*)0,&g_314[1],&g_312},{&g_314[0],&g_312,&g_314[0],&g_314[1],&g_333},{(void*)0,(void*)0,&g_314[1],&g_314[0],&g_338}},{{&g_312,&g_333,&g_338,&g_314[0],(void*)0},{&g_314[1],&g_314[1],&g_314[0],&g_314[1],&g_314[1]},{(void*)0,&g_314[1],&g_314[1],&g_314[1],&g_314[1]},{&g_333,&g_312,&g_314[1],&g_314[0],(void*)0},{&g_314[0],(void*)0,&g_333,&g_314[1],&g_314[1]},{&g_314[1],&g_314[0],&g_312,&g_338,&g_314[1]}},{{&g_314[1],&g_333,&g_312,&g_338,(void*)0},{&g_312,(void*)0,&g_312,&g_338,&g_338},{&g_312,&g_338,&g_333,&g_333,&g_333},{&g_314[1],&g_314[1],(void*)0,(void*)0,&g_312},{&g_314[1],(void*)0,&g_338,(void*)0,&g_312},{&g_314[0],(void*)0,&g_314[0],&g_314[1],&g_314[1]}},{{&g_333,(void*)0,&g_338,(void*)0,&g_333},{(void*)0,&g_314[1],&g_333,&g_312,&g_338},{&g_314[1],&g_338,(void*)0,(void*)0,(void*)0},{&g_312,(void*)0,(void*)0,&g_312,&g_314[0]},{&g_314[1],(void*)0,(void*)0,&g_314[1],(void*)0},{&g_314[1],&g_314[1],(void*)0,&g_312,&g_333}},{{&g_338,&g_314[0],&g_338,&g_314[1],&g_314[0]},{&g_314[1],&g_314[0],&g_314[0],&g_312,&g_314[1]},{&g_314[0],&g_312,&g_314[0],&g_314[1],&g_314[1]},{&g_314[1],&g_314[1],&g_314[0],(void*)0,&g_312},{&g_314[0],&g_314[0],(void*)0,&g_314[0],&g_312},{&g_333,&g_314[1],&g_338,&g_338,&g_314[1]}},{{(void*)0,&g_338,&g_333,(void*)0,&g_314[1]},{&g_314[0],&g_338,&g_314[1],(void*)0,&g_314[0]},{&g_338,&g_338,&g_312,&g_314[1],&g_333},{&g_314[0],&g_312,&g_312,&g_338,(void*)0},{(void*)0,(void*)0,&g_333,&g_314[1],&g_314[1]},{&g_333,&g_314[0],&g_338,&g_314[0],&g_312}},{{&g_314[0],&g_314[0],(void*)0,(void*)0,(void*)0},{&g_314[1],(void*)0,&g_314[1],&g_333,&g_314[0]},{&g_314[0],&g_312,&g_314[1],&g_312,(void*)0},{&g_314[1],&g_338,(void*)0,&g_314[1],(void*)0},{&g_338,&g_338,&g_314[1],(void*)0,&g_333},{&g_314[1],(void*)0,&g_312,&g_312,&g_314[1]}}};
                int i, j, k;
                --l_609;
                (*l_601) = (255UL == g_439);
            }
            else
            {
                (*g_141) = l_621;
            }
        }
        else
        {
            const short l_622 = 0x7143L;
            short ****l_623 = &g_529;
            int *l_638 = &l_608[0];
            int l_653 = 1L;
            int l_656 = 0xC096DE22L;
            int l_657 = 1L;
            int l_661 = 0xCF9C9561L;
            int l_662 = 0L;
            int l_663[3];
            int i;
            for (i = 0; i < 3; i++)
                l_663[i] = 0x37CDCB04L;
            (*l_621) |= ((void*)0 != &g_404);
            if ((func_52(l_622) > (((l_623 == (void*)0) && func_40(p_22, (safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((-6L), ((*l_621) = (safe_sub_func_uint16_t_u_u(((*l_592) = ((p_20 |= (-3L)) <= ((((*l_592) ^ (&l_584 == &g_416)) ^ g_333) & l_622))), p_22))))), 5)), g_312, g_376[6], p_21)) , l_608[2])))
            {
                const short *l_631 = &g_455[4][4];
                const short **l_630[5][5] = {{&l_631,&l_631,&l_631,&l_631,&l_631},{&l_631,&l_631,&l_631,&l_631,&l_631},{&l_631,&l_631,&l_631,&l_631,&l_631},{&l_631,&l_631,&l_631,&l_631,&l_631},{&l_631,&l_631,&l_631,&l_631,&l_631}};
                const short **l_632 = &l_631;
                unsigned *l_633[3][9][4] = {{{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}},{{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381}}};
                short *l_640 = &g_334;
                int l_641 = (-1L);
                int l_644 = 0x65EFBB43L;
                int l_651 = 0L;
                int l_652 = 0x63BDB528L;
                int l_655 = 6L;
                int l_659 = 0L;
                int l_660 = (-1L);
                int i, j, k;
                (*l_621) = ((g_381 &= ((p_19 && ((****l_623) |= (-2L))) >= l_572)) , 0xF5B0009BL);
                for (g_439 = 0; (g_439 <= 2); g_439 += 1)
                {
                    char l_650 = (-2L);
                    int l_654[5][3] = {{(-1L),(-1L),(-1L)},{0xD9E99D36L,0xD9E99D36L,0xD9E99D36L},{(-1L),(-1L),(-1L)},{0xD9E99D36L,0xD9E99D36L,0xD9E99D36L},{(-1L),(-1L),(-1L)}};
                    int i, j;
                    (*l_592) |= (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((l_609 != l_641), (((safe_mul_func_int8_t_s_s(l_608[2], (!g_381))) , (*l_638)) >= p_20))), (-1L)));
                    for (g_338 = 0; (g_338 <= 2); g_338 += 1)
                    {
                        int *l_645 = &l_608[2];
                        int *l_646 = &l_572;
                        int *l_647 = &l_572;
                        int *l_648 = (void*)0;
                        int *l_649[8] = {&l_572,&l_572,&l_608[1],&l_572,&l_572,&l_608[1],&l_572,&l_572};
                        unsigned l_666[4][6][6] = {{{7UL,0xC5110F59L,0x74C7D752L,0UL,1UL,1UL},{0xE3EFDA48L,0UL,0xE8245BF1L,0xE8245BF1L,0UL,0xE3EFDA48L},{0xE8245BF1L,0UL,0xE3EFDA48L,0x301C0B37L,1UL,0x74C7D752L},{0x74C7D752L,0xC5110F59L,7UL,0xC5110F59L,0x74C7D752L,0UL},{0x74C7D752L,0xE8245BF1L,0xC5110F59L,0x301C0B37L,0x9E245877L,0x9E245877L},{7UL,0UL,0UL,7UL,0x74C7D752L,0xA6D2179FL}},{{0x9E245877L,0xA6D2179FL,1UL,0xE3EFDA48L,0xC5110F59L,0xE3EFDA48L},{0x74C7D752L,1UL,0x74C7D752L,0xE8245BF1L,0xC5110F59L,0x301C0B37L},{1UL,0xA6D2179FL,0x9E245877L,0x74C7D752L,0x74C7D752L,0x9E245877L},{0UL,0UL,7UL,0x74C7D752L,0xA6D2179FL,0xE8245BF1L},{1UL,7UL,0x301C0B37L,0xE8245BF1L,0x301C0B37L,7UL},{0x74C7D752L,1UL,0x301C0B37L,0xE3EFDA48L,0UL,0xE8245BF1L}},{{0x9E245877L,0xE3EFDA48L,7UL,7UL,0xE3EFDA48L,0x9E245877L},{7UL,0xE3EFDA48L,0x9E245877L,0xC5110F59L,0UL,0x301C0B37L},{0x301C0B37L,1UL,0x74C7D752L,1UL,0x301C0B37L,0xE3EFDA48L},{0x301C0B37L,7UL,1UL,0xC5110F59L,0xA6D2179FL,0xA6D2179FL},{7UL,0UL,0UL,7UL,0x74C7D752L,0xA6D2179FL},{0x9E245877L,0xA6D2179FL,1UL,0xE3EFDA48L,0xC5110F59L,0xE3EFDA48L}},{{0x74C7D752L,1UL,0x74C7D752L,0xE8245BF1L,0xC5110F59L,0x301C0B37L},{1UL,0xA6D2179FL,0x9E245877L,0x74C7D752L,0x74C7D752L,0x9E245877L},{0UL,0UL,7UL,0x74C7D752L,0xA6D2179FL,0xC5110F59L},{0xA6D2179FL,1UL,0xE3EFDA48L,0xC5110F59L,0xE3EFDA48L,1UL},{0UL,0xA6D2179FL,0xE3EFDA48L,0xE8245BF1L,1UL,0xC5110F59L},{7UL,0xE8245BF1L,1UL,1UL,0xE8245BF1L,7UL}}};
                        int i, j, k;
                        l_666[0][2][5]++;
                        (*g_141) = &p_22;
                        if (g_113[g_338][(g_439 + 2)])
                            break;
                        if (l_644)
                            continue;
                    }
                }
            }
            else
            {
                (*l_621) = (p_19 & (safe_mod_func_int32_t_s_s(1L, ((*g_483) |= (1L & p_21)))));
            }
        }
    }
    else
    {
        int l_671[3];
        int l_677[6][10][4] = {{{0x89471F25L,8L,0xBEA50376L,(-1L)},{3L,(-5L),0L,(-5L)},{(-5L),0xBEA50376L,0x89471F25L,(-5L)},{0x89471F25L,(-5L),(-1L),(-1L)},{8L,8L,0L,3L},{8L,0xBEA50376L,(-1L),8L},{0x89471F25L,3L,0x89471F25L,(-1L)},{(-5L),3L,0L,8L},{3L,0xBEA50376L,0xBEA50376L,3L},{0x89471F25L,8L,0xBEA50376L,(-1L)}},{{3L,(-5L),0L,(-5L)},{(-5L),0xBEA50376L,0x89471F25L,(-5L)},{0x89471F25L,(-5L),(-1L),(-1L)},{8L,8L,0L,3L},{8L,0xBEA50376L,(-1L),8L},{0x89471F25L,3L,0x89471F25L,(-1L)},{(-5L),3L,0L,8L},{3L,0xBEA50376L,0xBEA50376L,3L},{0x89471F25L,8L,0xBEA50376L,(-1L)},{(-1L),0x89471F25L,3L,0x89471F25L}},{{0x89471F25L,0x4750D5DCL,0L,0x89471F25L},{0L,0x89471F25L,(-3L),(-3L)},{0xBEA50376L,0xBEA50376L,3L,(-1L)},{0xBEA50376L,0x4750D5DCL,(-3L),0xBEA50376L},{0L,(-1L),0L,(-3L)},{0x89471F25L,(-1L),3L,0xBEA50376L},{(-1L),0x4750D5DCL,0x4750D5DCL,(-1L)},{0L,0xBEA50376L,0x4750D5DCL,(-3L)},{(-1L),0x89471F25L,3L,0x89471F25L},{0x89471F25L,0x4750D5DCL,0L,0x89471F25L}},{{0L,0x89471F25L,(-3L),(-3L)},{0xBEA50376L,0xBEA50376L,3L,(-1L)},{0xBEA50376L,0x4750D5DCL,(-3L),0xBEA50376L},{0L,(-1L),0L,(-3L)},{0x89471F25L,(-1L),3L,0xBEA50376L},{(-1L),0x4750D5DCL,0x4750D5DCL,(-1L)},{0L,0xBEA50376L,0x4750D5DCL,(-3L)},{(-1L),0x89471F25L,3L,0x89471F25L},{0x89471F25L,0x4750D5DCL,0L,0x89471F25L},{0L,0x89471F25L,(-3L),(-3L)}},{{0xBEA50376L,0xBEA50376L,3L,(-1L)},{0xBEA50376L,0x4750D5DCL,(-3L),0xBEA50376L},{0L,(-1L),0L,0x4750D5DCL},{(-1L),0xBEA50376L,8L,0x89471F25L},{0xBEA50376L,0L,0L,0xBEA50376L},{(-3L),0x89471F25L,0L,0x4750D5DCL},{0xBEA50376L,(-1L),8L,(-1L)},{(-1L),0L,(-3L),(-1L)},{(-3L),(-1L),0x4750D5DCL,0x4750D5DCL},{0x89471F25L,0x89471F25L,8L,0xBEA50376L}},{{0x89471F25L,0L,0x4750D5DCL,0x89471F25L},{(-3L),0xBEA50376L,(-3L),0x4750D5DCL},{(-1L),0xBEA50376L,8L,0x89471F25L},{0xBEA50376L,0L,0L,0xBEA50376L},{(-3L),0x89471F25L,0L,0x4750D5DCL},{0xBEA50376L,(-1L),8L,(-1L)},{(-1L),0L,(-3L),(-1L)},{(-3L),(-1L),0x4750D5DCL,0x4750D5DCL},{0x89471F25L,0x89471F25L,8L,0xBEA50376L},{0x89471F25L,0L,0x4750D5DCL,0x89471F25L}}};
        unsigned char l_679 = 0x81L;
        unsigned char l_708[4];
        int **l_724 = &g_487[8];
        char l_738 = (-1L);
        int ***l_768 = &g_467;
        unsigned short l_775 = 0x7AA3L;
        short *l_777 = (void*)0;
        unsigned l_782 = 7UL;
        unsigned *l_829 = &g_79;
        short l_875[2];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_671[i] = 0xA3C75E10L;
        for (i = 0; i < 4; i++)
            l_708[i] = 0x53L;
        for (i = 0; i < 2; i++)
            l_875[i] = 0x7C6FL;
        if (l_671[0])
        {
            int *l_674 = &g_33;
            int *l_675 = &l_608[3];
            int *l_676[4][7] = {{(void*)0,&l_572,(void*)0,(void*)0,&l_572,(void*)0,(void*)0},{&l_572,&l_572,&g_121,&l_572,&l_572,&g_121,&l_572},{&l_572,(void*)0,(void*)0,&l_572,(void*)0,(void*)0,&l_572},{(void*)0,&l_572,(void*)0,(void*)0,&l_572,(void*)0,&g_121}};
            int i, j;
            (*g_483) ^= (safe_rshift_func_uint16_t_u_s(65535UL, 10));
            (*g_483) |= p_20;
            l_679--;
        }
        else
        {
            const unsigned l_696 = 1UL;
            char l_704[4][1][4] = {{{0x4AL,0x4AL,0x4AL,0x4AL}},{{0x4AL,0x4AL,0x4AL,0x4AL}},{{0x4AL,0x4AL,0x4AL,0x4AL}},{{0x4AL,0x4AL,0x4AL,0x4AL}}};
            int l_706[2];
            unsigned char *l_714 = &l_679;
            unsigned char *l_715 = &g_346;
            int ***l_725 = &g_141;
            int ***l_726 = (void*)0;
            int ***l_727 = &l_724;
            short *l_729 = (void*)0;
            char *l_730 = &g_333;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_706[i] = 0x1C2B0825L;
            for (g_484 = 0; (g_484 == (-3)); g_484 = safe_sub_func_uint16_t_u_u(g_484, 7))
            {
                unsigned short l_684 = 0x264EL;
                char *l_695[10];
                short *l_705 = (void*)0;
                int *l_709 = &g_121;
                int i;
                for (i = 0; i < 10; i++)
                    l_695[i] = &g_333;
                ++l_684;
                l_708[1] = ((safe_add_func_uint8_t_u_u(1UL, (((safe_rshift_func_uint16_t_u_s((l_608[2] ^= ((l_706[1] = ((((safe_add_func_int32_t_s_s(4L, (safe_add_func_int8_t_s_s((g_314[1] |= 1L), (l_684 != ((*l_577) = (l_696 == l_684))))))) < g_153) , l_572) , p_21)) , l_677[2][4][1])), p_20)) || 0UL) , 247UL))) <= l_707[1][2][5]);
                if (l_708[1])
                    break;
                (*l_709) = (l_684 > l_706[1]);
            }
            (*g_483) = (safe_unary_minus_func_int8_t_s(((*l_730) = (((((safe_unary_minus_func_uint32_t_u((((g_113[8][3] = ((safe_sub_func_int8_t_s_s((l_708[1] <= ((((***g_529) ^= (p_22 & p_20)) == (((*l_715) &= ((*l_714) = l_572)) != ((safe_mod_func_int16_t_s_s(func_40(((g_416 = (safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_609, g_599)), p_22))) , 0x99F1L), g_401, p_19, g_376[6], p_19), p_21)) ^ 0xAA1ED376L))) , (*l_728))), (*l_728))) , g_321)) , (*l_728)) > p_21))) , g_177) , 0x44L) > (-9L)) && 0x6EE3L))));
            return g_455[4][4];
        }
        for (g_331 = 3; (g_331 >= 0); g_331 -= 1)
        {
            int *l_731 = &l_572;
            int *l_732 = &l_608[3];
            int *l_733 = &l_677[5][2][0];
            int *l_734 = &l_572;
            int *l_735 = (void*)0;
            int *l_736[6][10] = {{&l_678,&l_678,&l_678,&l_678,&l_572,&g_33,&l_678,&g_33,&l_572,&l_678},{&g_33,&l_678,&g_33,&l_572,&l_678,&l_678,&l_678,&l_678,&l_572,&g_33},{(void*)0,(void*)0,(void*)0,&l_678,&l_707[0][3][3],(void*)0,&l_707[0][3][3],&l_678,(void*)0,(void*)0},{&l_707[0][3][3],&l_678,&g_33,&l_707[0][3][3],&l_572,&l_572,&l_707[0][3][3],&g_33,&l_678,&l_707[0][3][3]},{&g_33,(void*)0,&l_678,&l_572,(void*)0,&l_572,&l_678,(void*)0,&g_33,&g_33},{&l_707[0][3][3],&l_678,(void*)0,(void*)0,(void*)0,(void*)0,&l_678,&l_707[0][3][3],(void*)0,&l_707[0][3][3]}};
            char l_737 = 0x57L;
            int l_739 = 0x653D4743L;
            int l_740 = (-5L);
            unsigned l_742 = 0xE5A6DB7FL;
            short *l_826 = &g_159[0];
            unsigned char *l_830 = &l_679;
            char l_834 = 0x5AL;
            char ** const l_865 = &l_786[1];
            short l_888 = 0xE70DL;
            unsigned l_909 = 0xB26E8FEEL;
            int i, j;
            ++l_742;
            if ((*l_728))
            {
                unsigned short l_751 = 0UL;
                char *l_752 = &l_738;
                char l_753 = 0x1EL;
                int l_754[7][4][7] = {{{0L,0x587553D1L,0xCBE4D2CAL,0xBA5B17B0L,(-1L),(-7L),(-3L)},{0xBA5B17B0L,(-1L),0L,0x79BDE172L,1L,(-7L),0xE2B8AAF2L},{0x8772BDA2L,0L,0x6D26F893L,0L,0x8F9ED29AL,0x79BDE172L,0x6D0EBA67L},{(-2L),1L,1L,(-1L),(-1L),3L,1L}},{{0x8F9ED29AL,(-2L),0xA754F231L,0x48BFE516L,0xFD7E7EF5L,0x58435490L,0x3E7B1D41L},{0x0767DB2CL,0x3D2D7353L,(-3L),0xFD7E7EF5L,0xCBE4D2CAL,0xDA168DFBL,0xB8782407L},{0xBBAD80BFL,0x587553D1L,3L,3L,0x587553D1L,0xBBAD80BFL,0L},{(-1L),0x6D0EBA67L,0L,0xA754F231L,0xABD7EDB4L,0x8366E950L,0L}},{{0x3FFDD0D5L,5L,0xBA5B17B0L,0x8772BDA2L,0xDDF4C2DCL,0L,(-5L)},{1L,0x6D0EBA67L,(-3L),(-1L),(-1L),7L,0L},{(-1L),0x587553D1L,0xA78A79C3L,0xFCD5B30CL,0xA754F231L,9L,0xCBE4D2CAL},{(-1L),0x3D2D7353L,0L,(-1L),0L,0xB4596F6EL,(-3L)}},{{1L,(-2L),(-1L),0x0767DB2CL,0L,1L,0x2ACFF4D2L},{(-1L),1L,0x48C52CDCL,0L,(-1L),0xA754F231L,(-4L)},{0xCBE4D2CAL,4L,1L,0x8F9ED29AL,(-5L),(-4L),0x8366E950L},{0x8772BDA2L,0xA754F231L,0x58435490L,0L,(-5L),0xB8782407L,0x8F9ED29AL}},{{0L,(-1L),0x8AA66B16L,0x6D0EBA67L,0x0D3EA9C4L,0xB4596F6EL,(-2L)},{1L,0xBA5B17B0L,0x3FFDD0D5L,0x36CC86D3L,0x58435490L,0L,0L},{0x877E9603L,0x3E7B1D41L,0x8772BDA2L,0x0320C249L,0xE2B8AAF2L,0x3C79F093L,0L},{(-1L),0x8F9ED29AL,(-1L),0x8366E950L,(-2L),0xE2B8AAF2L,0xE2B8AAF2L}},{{0xFCD5B30CL,(-1L),0xDA168DFBL,(-1L),0xFCD5B30CL,0L,0x36CC86D3L},{0x2ACFF4D2L,(-1L),0xE5067B39L,0x0D3EA9C4L,0x877E9603L,(-1L),6L},{0xCBE4D2CAL,0L,0L,0x16F40297L,0x0320C249L,(-1L),0x9CB71441L},{0x2ACFF4D2L,0x0D3EA9C4L,0xDF12378FL,0x3C79F093L,0L,(-4L),0x48BFE516L}},{{0xFCD5B30CL,(-5L),0xED752170L,(-1L),(-1L),(-8L),0x3E7B1D41L},{(-1L),7L,0x587553D1L,0x63C9C8A6L,0x3D2D7353L,9L,0L},{0x877E9603L,5L,0x3E7B1D41L,6L,(-1L),1L,(-7L)},{1L,1L,0L,0L,3L,(-3L),0xDA168DFBL}}};
                int * const **l_767 = (void*)0;
                short ***l_780 = &g_530;
                int i, j, k;
                l_754[2][1][6] |= ((*g_483) = ((*l_732) = (safe_mod_func_uint16_t_u_u(func_40(g_455[3][8], g_153, ((safe_lshift_func_uint8_t_u_u((((*l_752) = (p_22 == (safe_mul_func_uint16_t_u_u(p_20, (p_19 || l_751))))) < l_753), ((func_52(p_19) != 8L) >= l_751))) | l_753), p_22, p_19), 65533UL))));
                if ((safe_mod_func_int8_t_s_s(g_401, l_754[5][3][4])))
                {
                    unsigned short l_765 = 65527UL;
                    unsigned short l_766[7][4] = {{0x585DL,65535UL,0x585DL,65535UL},{0x585DL,65535UL,0x585DL,65535UL},{0x585DL,65535UL,0x585DL,65535UL},{0x585DL,65535UL,0x585DL,65535UL},{0x585DL,65535UL,0x585DL,65535UL},{0x585DL,65535UL,0x585DL,65535UL},{0x585DL,65535UL,0x585DL,65535UL}};
                    int ****l_769 = (void*)0;
                    int ****l_770 = &l_768;
                    int *l_776[2][10] = {{&g_33,&g_590,&l_707[1][2][5],&l_707[1][2][5],&g_590,&g_33,&g_590,&l_707[1][2][5],&l_707[1][2][5],&g_590},{&g_33,&g_590,&l_707[1][2][5],&l_707[1][2][5],&g_590,&g_33,&g_590,&l_707[1][2][5],&l_707[1][2][5],&g_590}};
                    int i, j;
                    for (g_177 = 0; (g_177 <= 4); g_177 += 1)
                    {
                        return l_754[0][1][6];
                    }
                    (*l_733) &= (safe_mul_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((*g_158) = (((((p_21 || (safe_sub_func_int16_t_s_s(l_753, l_765))) >= 0xD0C7L) & (**g_530)) , (l_766[4][0] , l_767)) == ((*l_770) = l_768))), (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((**g_367), l_775)) >= (**g_367)), 6)))), (*l_728))) < p_22) != 0UL) , (*l_728)), g_113[4][2]));
                    for (g_338 = 0; (g_338 <= 2); g_338 += 1)
                    {
                        const int *l_779 = &l_572;
                        const int **l_778 = &l_779;
                        int i, j;
                        (*l_778) = g_212[(g_338 + 1)][(g_331 + 1)];
                        return g_490[3];
                    }
                    for (g_79 = 1; (g_79 <= 4); g_79 += 1)
                    {
                        (*g_141) = &p_22;
                        (**g_141) = (*g_483);
                    }
                }
                else
                {
                    short ***l_781 = &g_530;
                    int l_785 = (-1L);
                    int l_803 = (-2L);
                    if (((l_780 == l_781) | 0x89A15BEFL))
                    {
                        --l_782;
                        (*l_728) |= l_785;
                        return p_22;
                    }
                    else
                    {
                        p_22 = ((void*)0 == l_786[1]);
                    }
                    if (l_754[2][1][6])
                        continue;
                    for (g_439 = 0; (g_439 <= 4); g_439 += 1)
                    {
                        int l_795[2][4][1] = {{{0xD29C3E5DL},{0L},{0xD29C3E5DL},{0L}},{{0xD29C3E5DL},{0L},{0xD29C3E5DL},{0L}}};
                        short *l_802[6];
                        int l_805 = 0x4B34B0FCL;
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_802[i] = (void*)0;
                        (*l_733) = (safe_sub_func_int32_t_s_s((l_754[2][1][6] , 0xCAC8D9DEL), p_20));
                    }
                }
                (*l_733) ^= (p_21 < p_22);
            }
            else
            {
                return p_22;
            }
            if ((((*l_830) = (((1UL <= 0x163FE480L) | func_52(((*l_826) = ((**g_367) || (p_20 ^ (safe_lshift_func_uint8_t_u_s((*l_728), 6))))))) && (((*l_731) &= ((safe_mod_func_int16_t_s_s(0xB46DL, ((*l_732) | (((l_829 = l_829) != (*g_211)) && 0x92406494L)))) <= (*l_728))) < g_416))) ^ 9UL))
            {
                int l_831 = 0x8CF9D77AL;
                int l_832[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_832[i] = 0xF14785DDL;
                (*l_733) ^= p_20;
                l_835++;
                return g_113[5][5];
            }
            else
            {
                int * const *l_856 = &g_468[0][3];
                int * const **l_855[2][2][6] = {{{(void*)0,(void*)0,(void*)0,&l_856,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_856,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_856,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_856,(void*)0,(void*)0}}};
                const int l_862[2] = {0x57DB0C9BL,0x57DB0C9BL};
                int l_863 = 0L;
                const short * const l_873[4][7] = {{&g_39,&g_159[6],&g_159[6],&g_39,&g_455[4][4],&g_455[7][7],(void*)0},{(void*)0,&g_455[7][7],&g_455[4][4],&g_39,&g_159[6],&g_159[6],&g_39},{&g_455[4][4],&g_39,&g_455[4][4],&g_455[7][7],&g_39,&g_455[4][4],(void*)0},{&g_39,&g_334,&g_455[4][4],&g_455[4][4],&g_159[5],(void*)0,&g_39}};
                int l_876 = 0L;
                int l_877 = 0L;
                int l_878 = 0L;
                int l_880 = (-2L);
                int l_881[8];
                unsigned short l_906 = 1UL;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_881[i] = 0xA02A14D0L;
                for (p_22 = 0; (p_22 <= 2); p_22 += 1)
                {
                    short l_839 = 0x17D9L;
                    int l_848 = 0x0444E931L;
                    int *l_859 = &l_608[1];
                    const short *l_861 = &g_455[4][4];
                    const short **l_860 = &l_861;
                    int l_883 = 0x19178668L;
                    int l_884 = (-3L);
                    int l_885[10] = {0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL,0x5AB860FFL};
                    int i;
                    if ((func_40(((safe_unary_minus_func_uint16_t_u((l_848 ^= (l_847[0] |= (((*l_728) |= ((((*l_734) = (!((**g_529) == (**g_529)))) >= (((**g_367) | (!l_839)) , (safe_add_func_uint32_t_u_u((**g_367), (safe_rshift_func_int8_t_s_u((0xBF43L <= p_20), 3)))))) ^ g_79)) , (safe_sub_func_int8_t_s_s(l_846, g_439))))))) > p_22), l_839, g_490[2], p_19, g_455[2][3]) , p_19))
                    {
                        (*g_141) = ((*l_724) = &l_572);
                    }
                    else
                    {
                        if (p_19)
                            break;
                    }
                    if (((!(l_863 |= (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((l_848 &= ((void*)0 != l_855[0][0][0])), (safe_add_func_uint16_t_u_u(func_52((**g_530)), ((p_19 >= ((*l_577) = (((*l_859) ^= func_52(l_862[1])) < g_410))) <= p_20))))), p_20)), p_20)))) , p_19))
                    {
                        char **l_867 = (void*)0;
                        char ***l_866[1];
                        char ***l_868 = &l_867;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_866[i] = &l_867;
                        (*g_483) = (l_864 == l_864);
                        (*l_868) = l_865;
                        (*l_734) &= (((p_21 && (safe_mod_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s(p_22, (+(-5L)))) && ((((**g_367) != p_21) , p_19) == (-6L))) < (***g_529)), 1UL))) , 0x57L) != g_89);
                        l_859 = &p_22;
                    }
                    else
                    {
                        char l_874[5][10] = {{6L,7L,0x12L,1L,0x6DL,0xE2L,0xA8L,0x3FL,0xA8L,0xE2L},{6L,0xCBL,(-1L),0xCBL,6L,1L,0xE2L,0L,7L,0x3EL},{1L,0xE2L,0L,7L,0x3EL,0xE0L,0xC8L,0xC8L,0xE0L,0x3EL},{(-1L),7L,7L,(-1L),6L,7L,0x12L,1L,0x6DL,0xE2L},{0L,6L,7L,0xE0L,0x6DL,0x12L,7L,0x12L,0x6DL,0xE0L}};
                        int l_879 = 0x26170E8CL;
                        int l_886[3][9] = {{0x9C7E903EL,(-5L),(-5L),0x9C7E903EL,0xABD61DD9L,0x9C7E903EL,(-5L),(-5L),0x9C7E903EL},{0xE804FA40L,0x7C325EECL,(-1L),0x7C325EECL,0xE804FA40L,0xE804FA40L,0x7C325EECL,(-1L),0x7C325EECL},{(-5L),0xABD61DD9L,0xEFCE797DL,0xEFCE797DL,0xABD61DD9L,(-5L),0xABD61DD9L,0xEFCE797DL,0xEFCE797DL}};
                        unsigned char l_889 = 1UL;
                        int i, j;
                        l_889++;
                        return g_159[2];
                    }
                    for (l_880 = 0; (l_880 <= 4); l_880 += 1)
                    {
                        unsigned *l_896[3];
                        unsigned l_899 = 4294967286UL;
                        int *l_900 = &l_678;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_896[i] = &l_782;
                        (*g_483) = (safe_sub_func_uint8_t_u_u(((*l_830) &= (func_52(p_21) > ((((*l_732) |= func_52((g_333 , p_22))) && ((&p_20 == (void*)0) <= (safe_add_func_int16_t_s_s(((l_899 ^= (p_19++)) , (((((&p_22 == (l_900 = l_896[1])) == (*l_731)) | 0xD52895C2L) , (*l_728)) > 0x480EL)), (*l_859))))) && 0x7737L))), 0x12L));
                        if (p_22)
                            continue;
                        (*l_900) |= (-5L);
                        return g_410;
                    }
                }
                if ((safe_mul_func_uint8_t_u_u(251UL, (safe_sub_func_int32_t_s_s(p_20, 0xD618FDEEL)))))
                {
                    (*g_141) = &p_22;
                }
                else
                {
                    int l_905 = 0L;
                    l_906++;
                }
                l_909--;
            }
            return p_20;
        }
    }
    for (g_79 = 0; (g_79 <= 59); ++g_79)
    {
        unsigned short l_926 = 1UL;
        const short * const l_931 = &g_455[6][3];
        int *l_932 = &g_484;
        int l_939 = 1L;
        int l_940 = 0x26297B50L;
        int l_941 = (-1L);
        int l_942 = 0x3CEBF024L;
        int l_943 = 0xD1C1AE8EL;
        int l_944 = 0xCC932269L;
        int l_945 = 0L;
        int l_946 = 0xFC9352C4L;
        int l_947 = 0x96AA645FL;
        int l_948 = 0x1DDA29BEL;
        int l_949 = 1L;
        char **l_960 = &l_786[4];
        const unsigned **l_962 = &g_212[0][4];
        int ***l_972 = &g_467;
        unsigned l_998 = 7UL;
        int *l_1010[5];
        int *l_1039 = &l_678;
        int i;
        for (i = 0; i < 5; i++)
            l_1010[i] = &g_804[5][1][5];
        for (g_416 = 16; (g_416 < 53); g_416 = safe_add_func_uint16_t_u_u(g_416, 1))
        {
            unsigned *l_922 = &g_381;
            int l_925 = 0x93959B18L;
            p_22 = ((((p_19 <= (p_22 > 0x8906L)) && ((***g_529) = 0xD8F6L)) || ((((safe_lshift_func_int8_t_s_u(p_22, (+(safe_sub_func_int16_t_s_s((((*l_922)--) , (g_804[5][1][5] , 0xA057L)), (&g_474 != &g_474)))))) | g_599) ^ 0x00L) >= 1L)) & l_925);
        }
    }
    (*l_728) |= (-1L);
    for (g_312 = 7; (g_312 >= 0); g_312 -= 1)
    {
        int i;
        (*g_141) = &p_22;
        (*g_483) = g_159[g_312];
        for (g_333 = 8; (g_333 >= 0); g_333 -= 1)
        {
            unsigned short ***l_1049 = (void*)0;
            unsigned short **l_1051 = &l_571[g_312];
            unsigned short ***l_1050 = &l_1051;
            int *l_1052 = &g_590;
            int i;
            (*l_1050) = &l_571[g_312];
            l_1052 = (void*)0;
            (*g_141) = &p_22;
        }
    }
    return p_20;
}







static unsigned char func_36(unsigned p_37)
{
    short *l_38 = &g_39;
    int l_60 = 0xCAA7054FL;
    short l_261[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    unsigned *l_262 = &g_263;
    int l_264 = 0x867C341AL;
    int *l_288[7] = {&l_60,&l_60,&l_60,&l_60,&l_60,&l_60,&l_60};
    int l_289[3];
    int **l_290 = &l_288[2];
    const short * const l_298 = &l_261[6];
    unsigned char *l_310[9][1][10] = {{{(void*)0,&g_153,&g_153,(void*)0,(void*)0,&g_153,&g_153,&g_153,&g_153,(void*)0}},{{&g_98,&g_153,&g_153,&g_153,&g_98,&g_98,&g_153,&g_153,&g_153,&g_98}},{{&g_98,&g_98,(void*)0,(void*)0,&g_153,&g_153,&g_98,(void*)0,&g_153,(void*)0}},{{(void*)0,&g_98,&g_153,&g_98,&g_153,&g_153,&g_153,&g_153,&g_153,&g_98}},{{&g_153,&g_98,&g_153,&g_98,&g_98,(void*)0,(void*)0,&g_153,(void*)0,(void*)0}},{{&g_98,&g_98,&g_153,(void*)0,(void*)0,(void*)0,&g_153,&g_153,&g_153,&g_153}},{{&g_153,(void*)0,&g_153,&g_153,(void*)0,&g_153,&g_153,&g_153,(void*)0,&g_153}},{{&g_98,&g_153,&g_153,&g_98,&g_98,(void*)0,(void*)0,(void*)0,&g_153,(void*)0}},{{&g_98,&g_153,(void*)0,&g_153,&g_98,&g_153,&g_98,&g_153,&g_98,&g_153}}};
    short **l_378 = &g_158;
    short ***l_377 = &l_378;
    int *l_486 = &g_484;
    unsigned char l_569 = 0xBDL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_289[i] = 0x298D8505L;
    l_289[2] = (((((*l_38) = (g_33 <= p_37)) < func_40((safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((p_37 , ((*l_262) ^= ((l_60 = (safe_lshift_func_uint8_t_u_s(func_52(g_33), (safe_sub_func_uint32_t_u_u(4294967288UL, ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(l_60, 6)), 12)) && (func_61(func_67((~g_33), ((safe_lshift_func_uint8_t_u_s((&l_60 != (void*)0), g_33)) , g_33)), l_38, (*g_141), &l_60, g_158) || l_261[6]))))))) , 4294967295UL))) , p_37), l_261[6])) & 0x8F8F8D08L), 9L)), l_264, p_37, p_37, p_37)) >= l_261[6]) , 1L);
    if (func_61((*g_141), &l_261[6], (*g_141), ((*l_290) = &l_60), (((safe_sub_func_int8_t_s_s((l_289[2] , 0xFBL), p_37)) , ((safe_lshift_func_uint8_t_u_s((g_98 = (p_37 , g_113[5][5])), l_264)) <= (*g_158))) , &g_39)))
    {
        int *l_297 = &l_60;
        int l_339 = 1L;
        int l_340 = (-1L);
        int l_341 = 0x3D1CDC3EL;
        unsigned short *l_359[6][2][6] = {{{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]},{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]}},{{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]},{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]}},{{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]},{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]}},{{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]},{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]}},{{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]},{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]}},{{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]},{&g_113[5][5],&g_89,&g_113[5][5],&g_113[5][5],&g_89,&g_113[5][5]}}};
        char l_407 = (-1L);
        int l_415[5] = {1L,1L,1L,1L,1L};
        int i, j, k;
        if ((g_121 = (safe_add_func_int8_t_s_s(func_61(l_297, l_298, (*l_290), (*l_290), &l_261[0]), (((safe_unary_minus_func_uint16_t_u(((safe_add_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s((((!(*g_158)) | (safe_sub_func_int16_t_s_s((l_297 != (void*)0), 4L))) == p_37), g_33)) , p_37) , g_39) > p_37), (*l_297))) > (*l_297)))) | p_37) && 1UL)))))
        {
            char *l_311 = &g_312;
            char *l_313 = &g_314[1];
            short *l_322 = &l_261[6];
            int l_337 = 0x8598E06BL;
            unsigned char l_342 = 248UL;
            unsigned l_360 = 4294967295UL;
            int l_413 = 0x7D02AF47L;
            int l_414 = 3L;
            (*l_297) = (((*g_158) = func_52((*g_158))) && func_61((*l_290), &g_159[4], func_67((safe_lshift_func_uint16_t_u_u((((((safe_mul_func_int16_t_s_s((((*l_313) = ((*l_311) &= (p_37 < ((*l_262) = ((void*)0 != l_310[7][0][2]))))) != ((safe_rshift_func_uint8_t_u_u(p_37, (safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(0xA0L, g_177)) > (*g_142)), g_79)))) , 0x88L)), 0x20CEL)) && p_37) != g_321) , 0x06L) , p_37), (*l_297))), g_159[5]), l_297, l_322));
            for (g_153 = 0; (g_153 >= 41); g_153 = safe_add_func_uint32_t_u_u(g_153, 4))
            {
                unsigned l_326[6][9][4] = {{{0xCF7E2846L,0x39074622L,0xCF7E2846L,0x3BE30DEAL},{8UL,0x26041929L,0x0828A7E7L,0x3BE30DEAL},{0UL,0x39074622L,3UL,0x26041929L},{0x2718014CL,0UL,0x0828A7E7L,4294967291UL},{3UL,0UL,0x2718014CL,0x3BE30DEAL},{4294967290UL,0UL,8UL,4294967291UL},{8UL,4294967291UL,3UL,0x57CE6F80L},{8UL,0UL,8UL,0x26041929L},{4294967290UL,0x57CE6F80L,0x2718014CL,0x26041929L}},{{3UL,0UL,0x0828A7E7L,0x57CE6F80L},{0xCF7E2846L,4294967291UL,0x0828A7E7L,4294967291UL},{3UL,0UL,0x2718014CL,0x3BE30DEAL},{4294967290UL,0UL,8UL,4294967291UL},{8UL,4294967291UL,3UL,0x57CE6F80L},{8UL,0UL,8UL,0x26041929L},{4294967290UL,0x57CE6F80L,0x2718014CL,0x26041929L},{3UL,0UL,0x0828A7E7L,0x57CE6F80L},{0xCF7E2846L,4294967291UL,0x0828A7E7L,4294967291UL}},{{3UL,0UL,0x2718014CL,0x3BE30DEAL},{4294967290UL,0UL,8UL,4294967291UL},{8UL,4294967291UL,3UL,0x57CE6F80L},{8UL,0UL,8UL,0x26041929L},{4294967290UL,0x57CE6F80L,0x2718014CL,0x26041929L},{3UL,0UL,0x0828A7E7L,0x57CE6F80L},{0xCF7E2846L,4294967291UL,0x0828A7E7L,4294967291UL},{3UL,0UL,0x2718014CL,0x3BE30DEAL},{4294967290UL,0UL,8UL,4294967291UL}},{{8UL,0x57CE6F80L,4294967290UL,0x3BE30DEAL},{0x2718014CL,4294967291UL,0x2718014CL,0UL},{0xCF7E2846L,0x3BE30DEAL,3UL,0UL},{4294967290UL,4294967291UL,0UL,0x3BE30DEAL},{0x0828A7E7L,0x57CE6F80L,0UL,0x57CE6F80L},{4294967290UL,0x26041929L,3UL,0x39074622L},{0xCF7E2846L,0x26041929L,0x2718014CL,0x57CE6F80L},{0x2718014CL,0x57CE6F80L,4294967290UL,0x3BE30DEAL},{0x2718014CL,4294967291UL,0x2718014CL,0UL}},{{0xCF7E2846L,0x3BE30DEAL,3UL,0UL},{4294967290UL,4294967291UL,0UL,0x3BE30DEAL},{0x0828A7E7L,0x57CE6F80L,0UL,0x57CE6F80L},{4294967290UL,0x26041929L,3UL,0x39074622L},{0xCF7E2846L,0x26041929L,0x2718014CL,0x57CE6F80L},{0x2718014CL,0x57CE6F80L,4294967290UL,0x3BE30DEAL},{0x2718014CL,4294967291UL,0x2718014CL,0UL},{0xCF7E2846L,0x3BE30DEAL,3UL,0UL},{4294967290UL,4294967291UL,0UL,0x3BE30DEAL}},{{0x0828A7E7L,0x57CE6F80L,0UL,0x57CE6F80L},{4294967290UL,0x26041929L,3UL,0x39074622L},{0xCF7E2846L,0x26041929L,0x2718014CL,0x57CE6F80L},{0x2718014CL,0x57CE6F80L,4294967290UL,0x3BE30DEAL},{0x2718014CL,4294967291UL,0x2718014CL,0UL},{0xCF7E2846L,0x3BE30DEAL,3UL,0UL},{4294967290UL,0x39074622L,3UL,0x26041929L},{0x2718014CL,0UL,3UL,0UL},{0UL,0x57CE6F80L,0x0828A7E7L,0UL}}};
                int l_329[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_329[i] = 8L;
                (*g_141) = l_297;
                if ((*g_142))
                {
                    unsigned short *l_325 = (void*)0;
                    int l_330 = 0x9F37F70EL;
                    char l_335 = 0xCCL;
                    int l_336[6][5][1] = {{{1L},{1L},{(-9L)},{(-9L)},{1L}},{{1L},{6L},{1L},{1L},{(-9L)}},{{(-9L)},{1L},{1L},{6L},{1L}},{{1L},{(-9L)},{(-9L)},{1L},{1L}},{{6L},{1L},{1L},{(-9L)},{(-9L)}},{{1L},{1L},{6L},{1L},{1L}}};
                    int i, j, k;
                    (*g_142) &= (0x5037L || (l_326[1][5][3] = p_37));
                    for (g_177 = (-17); (g_177 == 6); g_177 = safe_add_func_uint32_t_u_u(g_177, 6))
                    {
                        char l_332 = 1L;
                        int l_345[2][4][1] = {{{0xB8EFAE4AL},{0xC192C8D7L},{0xB8EFAE4AL},{0xC192C8D7L}},{{0xB8EFAE4AL},{0xC192C8D7L},{0xB8EFAE4AL},{0xC192C8D7L}}};
                        int i, j, k;
                        l_342--;
                        --g_346;
                        return p_37;
                    }
                    if (p_37)
                        continue;
                }
                else
                {
                    (*g_142) = (-1L);
                    if ((*g_142))
                        continue;
                    if ((**g_141))
                        continue;
                }
            }
            (*l_297) = l_342;
            for (g_333 = 0; (g_333 <= 1); g_333 += 1)
            {
                unsigned ***l_369 = (void*)0;
                unsigned ***l_370 = (void*)0;
                unsigned ***l_371 = &g_367;
                unsigned char l_379 = 0x11L;
                int l_400[1];
                short *l_431 = &l_261[6];
                int i;
                for (i = 0; i < 1; i++)
                    l_400[i] = 0x742C0025L;
                l_337 = func_40(g_331, g_153, g_346, (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((((l_337 > (safe_mul_func_int8_t_s_s(p_37, ((*l_297) , g_334)))) , (l_322 == l_359[1][1][3])) & p_37), g_98)) <= 1UL), p_37)) , l_360) , g_79) , (*l_297)), p_37)), p_37)), l_342);
                if ((l_379 = (safe_mul_func_uint8_t_u_u((((((p_37 == (safe_mul_func_uint8_t_u_u((p_37 <= (&l_262 != ((*l_371) = g_367))), (safe_mul_func_uint8_t_u_u(l_360, (p_37 >= ((g_376[6] &= (p_37 >= (func_40(p_37, ((+((*l_262) ^= ((--g_113[7][3]) != (((*l_297) != (*g_142)) == l_337)))) , 0x26L), p_37, g_153, p_37) == (**g_141)))) , g_121))))))) == 0x0C2DL) , (void*)0) == l_377) & p_37), 0x47L))))
                {
                    unsigned l_380 = 1UL;
                    for (g_346 = 0; (g_346 <= 1); g_346 += 1)
                    {
                        return l_380;
                    }
                }
                else
                {
                    int *l_395 = (void*)0;
                    int *l_396 = &g_331;
                    int l_397 = 9L;
                    for (g_346 = 2; (g_346 <= 6); g_346 += 1)
                    {
                        int i;
                        g_381++;
                    }
                    l_397 &= (&g_158 == ((*l_377) = (((*l_396) = (((((l_359[1][1][3] = (void*)0) == l_322) , ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_113[7][2], ((safe_add_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((((l_360 && (g_89 = (l_337 ^= ((safe_lshift_func_uint8_t_u_u(((!p_37) && ((p_37 > ((0xB03BL > ((((***l_371)--) , func_52(func_61(l_395, &g_39, &l_337, (*g_141), &g_39))) , (-5L))) & (*g_142))) > p_37)), 7)) | p_37)))) , (*l_297)) != p_37))), p_37)) , (*g_158)))), 0x37C0L)) == p_37)) && g_153) && (-1L))) , &l_322)));
                }
                l_288[(g_333 + 4)] = &l_339;
                (*l_297) = (l_298 != ((((safe_mod_func_int8_t_s_s((*l_297), (g_376[6] & (4UL | 0x40D512D9L)))) <= ((~0L) && (3UL >= 0x3898DC6CL))) , (*g_142)) , &g_376[6]));
                for (g_263 = 0; (g_263 <= 0); g_263 += 1)
                {
                    int l_402 = 0xBD461673L;
                    int l_409 = (-1L);
                    for (g_79 = 0; (g_79 <= 1); g_79 += 1)
                    {
                        int l_403 = (-1L);
                        int l_408[8][8][2] = {{{0x5403E42DL,0xAD110EB2L},{0x0A6C384CL,0x76BE3BD6L},{0x0C4B61EDL,0L},{(-1L),0x20C5512BL},{0x20C5512BL,0xA8C2101AL},{0xC08C63A2L,0xE661A0D6L},{0xDE3F5099L,(-1L)},{1L,0x5823CA98L}},{{0L,0xA145E1BEL},{(-1L),0L},{0xAD110EB2L,0xC23A81BDL},{0xCBC8A12FL,2L},{0x0AE462C7L,0xF980BA09L},{0x1C77E65CL,2L},{1L,0xDE3F5099L},{0xC23A81BDL,0x0067A72BL}},{{9L,0xC08C63A2L},{0x76BE3BD6L,0x6BAAEF25L},{(-7L),0x00E47C7FL},{2L,0x00E47C7FL},{(-7L),0x6BAAEF25L},{0x76BE3BD6L,0xC08C63A2L},{9L,0x0067A72BL},{0x0C4B61EDL,0xC08C63A2L}},{{0L,(-7L)},{1L,0xA145E1BEL},{0x5823CA98L,0xF980BA09L},{9L,0x0C4B61EDL},{0x00E47C7FL,0x20C5512BL},{0x76BE3BD6L,0xAD110EB2L},{1L,1L},{0xF10777FDL,0x76BE3BD6L}},{{0xC08C63A2L,0x2580E910L},{(-1L),0L},{1L,1L},{0x0A6C384CL,0x0067A72BL},{0x1405FE5EL,0xA8C2101AL},{0xCBC8A12FL,0x00E47C7FL},{0xA0FEFC58L,0xCBC8A12FL},{0L,1L}},{{0L,0xCBC8A12FL},{0xA0FEFC58L,0x00E47C7FL},{0xCBC8A12FL,0xA8C2101AL},{0x1405FE5EL,0x0067A72BL},{0x0A6C384CL,1L},{1L,0L},{(-1L),0x2580E910L},{0xC08C63A2L,0x76BE3BD6L}},{{0xF10777FDL,1L},{1L,0xAD110EB2L},{0x76BE3BD6L,0x20C5512BL},{0x00E47C7FL,0x0C4B61EDL},{9L,0xF980BA09L},{0x5823CA98L,0xA145E1BEL},{1L,(-7L)},{0L,0xC08C63A2L}},{{0x0C4B61EDL,0xBF830CF6L},{0x1C77E65CL,(-1L)},{0xA8C2101AL,0x73476CD3L},{0x6BAAEF25L,0xCD933C80L},{0xF980BA09L,0xCD933C80L},{0x6BAAEF25L,0x73476CD3L},{0xA8C2101AL,(-1L)},{0x1C77E65CL,0xBF830CF6L}}};
                        int i, j, k;
                        --g_404;
                        g_410++;
                    }
                    for (l_407 = 0; (l_407 <= 1); l_407 += 1)
                    {
                        return p_37;
                    }
                    --g_416;
                    for (g_153 = 0; (g_153 <= 0); g_153 += 1)
                    {
                        int *l_429 = &l_413;
                        const short * const l_430 = &g_159[3];
                        int i, j, k;
                        (*l_429) = (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((*g_141) == ((*l_290) = (*g_141))), ((((*l_297) = (safe_mul_func_int16_t_s_s(0x54BAL, ((func_52(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((func_61(l_429, l_430, (*g_141), &l_414, l_431) <= 0x76BCL), g_416)), 4)) && 2L)) == l_414) ^ (*l_429))))) , p_37) & p_37))), 6)) <= g_33) & p_37);
                    }
                }
            }
        }
        else
        {
            (*l_297) |= p_37;
        }
    }
    else
    {
        unsigned short l_433 = 65535UL;
        int * const l_463[5] = {&g_401,&g_401,&g_401,&g_401,&g_401};
        int *l_464 = (void*)0;
        short *l_466 = &l_261[6];
        int l_489[7][6] = {{0x8B7C33F0L,0xABE7DC28L,0xEED87206L,0x8B7C33F0L,0xEED87206L,0xABE7DC28L},{9L,0xABE7DC28L,0xEED87206L,0x81A06594L,0xABE7DC28L,0xABE7DC28L},{0x8B7C33F0L,0x37ABF046L,0x37ABF046L,0x8B7C33F0L,0xABE7DC28L,0xEED87206L},{9L,0x37ABF046L,0xABE7DC28L,9L,0xABE7DC28L,0x37ABF046L},{0x81A06594L,0x37ABF046L,0xEED87206L,0x81A06594L,0xABE7DC28L,0xABE7DC28L},{0x8B7C33F0L,0x37ABF046L,0x37ABF046L,0x8B7C33F0L,0xABE7DC28L,0xEED87206L},{9L,0x37ABF046L,0xABE7DC28L,9L,0xABE7DC28L,0x37ABF046L}};
        const short l_556 = (-1L);
        unsigned char l_563 = 1UL;
        unsigned short l_564 = 65532UL;
        int *l_567 = (void*)0;
        int *l_568 = &l_289[1];
        int i, j;
        for (l_60 = 0; (l_60 <= 4); l_60 += 1)
        {
            char l_432[9][10] = {{(-9L),1L,0xF6L,(-9L),(-4L),(-4L),(-9L),0xF6L,1L,(-9L)},{0xF6L,(-10L),1L,(-4L),(-10L),(-4L),1L,(-10L),0xF6L,0xF6L},{(-9L),0xE7L,(-1L),(-10L),(-10L),(-1L),0xE7L,(-9L),(-1L),(-9L)},{(-10L),1L,(-4L),(-10L),(-4L),1L,(-10L),0xF6L,0xF6L,(-10L)},{0xF6L,(-9L),(-4L),(-4L),(-9L),0xF6L,1L,(-9L),1L,0xF6L},{0xE7L,(-9L),(-1L),(-9L),0xE7L,(-1L),(-10L),(-10L),(-1L),0xE7L},{0xE7L,1L,(-8L),(-4L),1L,(-1L),(-4L),(-1L),1L,(-4L)},{(-1L),(-4L),(-1L),1L,(-4L),(-8L),(-8L),(-4L),1L,(-1L)},{1L,1L,0xE7L,(-4L),0xF6L,0xE7L,0xF6L,(-4L),0xE7L,1L}};
            int l_438 = 0x5D59ECB4L;
            int **l_485[1][9] = {{&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464,&l_464}};
            int *l_534[5][5][8] = {{{&g_121,(void*)0,&g_33,&l_438,&l_489[6][1],&l_60,&g_33,&l_60},{&g_121,&g_33,&g_121,&l_489[6][1],(void*)0,&l_264,&g_484,&l_264},{&l_438,&g_484,&l_438,&g_484,&l_438,(void*)0,&l_60,&g_121},{&g_33,&g_33,(void*)0,&l_438,&l_438,&l_438,&g_33,&g_484},{(void*)0,&l_438,(void*)0,&g_121,&g_121,(void*)0,&l_60,(void*)0}},{{&l_438,&g_33,&l_438,&g_121,&l_438,&l_264,&g_484,&l_489[6][1]},{&l_264,&l_60,&g_121,&g_121,&l_264,&g_33,&g_33,(void*)0},{&g_121,&l_60,&l_438,&l_438,&g_484,(void*)0,&l_489[6][1],&l_438},{&l_264,&g_33,&l_60,&g_484,&l_438,&l_264,&l_489[3][1],&l_438},{&l_264,&l_438,&g_33,&l_489[6][1],&l_438,&l_489[4][5],&l_60,&g_121}},{{&l_489[4][5],&g_33,&l_60,&l_489[6][5],(void*)0,&l_60,&l_264,(void*)0},{&l_438,(void*)0,&g_121,&l_264,&g_33,&g_484,&l_489[6][1],&g_121},{(void*)0,&l_489[6][1],&l_438,(void*)0,(void*)0,&l_438,&l_489[6][1],(void*)0},{&l_438,&l_264,&l_489[4][5],(void*)0,&g_484,&g_121,&l_438,&g_484},{&g_33,&l_264,&g_121,&g_121,(void*)0,&g_121,&g_121,&l_489[6][1]}},{{&g_33,&l_264,(void*)0,(void*)0,&g_484,&l_438,&g_33,&l_60},{&l_489[6][1],&l_489[6][1],&g_33,&l_264,(void*)0,&g_484,(void*)0,&l_60},{&l_489[6][1],(void*)0,&g_484,&l_438,&l_264,&l_60,&g_33,&l_489[4][5]},{&l_264,&g_33,&l_438,(void*)0,&g_33,&l_489[4][5],&l_489[6][1],&l_489[6][5]},{&g_484,&l_60,&l_264,(void*)0,&g_121,&l_264,&g_121,&g_121}},{{&l_489[0][5],&l_489[4][5],&g_121,&g_484,&g_33,(void*)0,&l_264,(void*)0},{&l_438,&l_60,(void*)0,&g_33,&g_121,&l_438,&l_438,&g_121},{&l_264,&l_489[6][1],&g_121,(void*)0,&l_60,&g_484,&l_60,(void*)0},{(void*)0,&l_438,(void*)0,&g_33,(void*)0,&g_121,(void*)0,&l_60},{&l_438,&g_33,&l_60,&l_60,(void*)0,&g_121,(void*)0,&l_438}}};
            unsigned short l_555 = 0x0662L;
            int i, j, k;
            ++l_433;
        }
        (*g_141) = func_67(l_556, (safe_sub_func_int16_t_s_s(((p_37 > ((*g_158) || ((g_113[8][1] = ((g_401 , (safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((***g_529), ((-1L) >= (((((g_312 == ((func_52((*l_486)) | l_563) <= 0L)) , p_37) || (*g_483)) || l_564) && g_314[1])))) <= 0xE9L), 0xDF9BL))) > p_37)) , (**g_530)))) , p_37), (**g_530))));
        l_464 = func_67(((*l_568) |= (func_40(func_61((*g_141), (*g_530), (*g_141), (*l_290), (**l_377)), p_37, ((p_37 > (safe_mod_func_uint32_t_u_u((((g_376[4] || p_37) && (-2L)) , 4294967295UL), 0x2741DBB1L))) || p_37), p_37, g_121) >= l_489[6][1])), g_376[6]);
    }
    return l_569;
}







static unsigned short func_40(unsigned short p_41, unsigned char p_42, unsigned char p_43, const unsigned short p_44, unsigned short p_45)
{
    unsigned short l_265 = 1UL;
    const unsigned char l_270 = 0x88L;
    unsigned char *l_271 = &g_153;
    unsigned char *l_272[10];
    int l_273 = 0x8EE7CE54L;
    int l_282[6][7][1] = {{{0L},{3L},{3L},{3L},{0L},{3L},{3L}},{{3L},{0L},{3L},{3L},{3L},{0L},{3L}},{{3L},{3L},{0L},{3L},{3L},{3L},{0L}},{{3L},{3L},{3L},{0L},{3L},{3L},{3L}},{{0L},{3L},{3L},{3L},{0L},{3L},{3L}},{{3L},{0L},{3L},{3L},{3L},{0L},{3L}}};
    int l_283 = 0xC4C8207CL;
    int *l_284 = &l_283;
    int *l_285 = &l_273;
    int *l_286 = (void*)0;
    int *l_287 = &g_121;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_272[i] = &g_98;
    (*l_287) = ((l_265 == (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u((((p_42 && 4294967292UL) < (((((((*l_285) = ((*l_284) = ((l_270 , 0x63DDL) , ((((*l_271) = l_265) >= (g_98--)) > (safe_mul_func_uint8_t_u_u(func_52((safe_rshift_func_uint8_t_u_s((p_44 ^ ((((l_283 ^= ((safe_sub_func_int16_t_s_s((l_273 ^ l_282[5][4][0]), p_43)) , 0x4207287CL)) , 1L) >= p_45) && 0xE8C7L)), 5))), l_282[5][4][0])))))) >= p_45) , (*l_285)) ^ p_43) >= p_42) & 0UL)) <= 0xA3D8L), g_263)), 1))) , (*l_285));
    return g_89;
}







static unsigned char func_52(const short p_53)
{
    return g_33;
}







static const int func_61(int * p_62, const short * const p_63, int * p_64, int * p_65, short * p_66)
{
    return (**g_141);
}







static int * func_67(const int p_68, unsigned char p_69)
{
    short l_77[4];
    unsigned *l_78[7][10] = {{(void*)0,&g_79,(void*)0,(void*)0,&g_79,&g_79,(void*)0,&g_79,&g_79,&g_79},{&g_79,(void*)0,&g_79,(void*)0,&g_79,(void*)0,&g_79,&g_79,(void*)0,&g_79},{(void*)0,&g_79,&g_79,(void*)0,&g_79,(void*)0,&g_79,(void*)0,&g_79,&g_79},{&g_79,&g_79,&g_79,(void*)0,(void*)0,&g_79,&g_79,&g_79,&g_79,&g_79},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_79,&g_79,(void*)0,(void*)0,(void*)0},{&g_79,&g_79,(void*)0,(void*)0,&g_79,(void*)0,(void*)0,&g_79,&g_79,(void*)0},{(void*)0,(void*)0,&g_79,&g_79,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_79}};
    int l_90 = 2L;
    unsigned char * const l_139 = &g_98;
    unsigned l_209 = 4294967290UL;
    int i, j;
    for (i = 0; i < 4; i++)
        l_77[i] = (-6L);
    if (((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint8_t_u_u(((g_79 = ((g_33 == (safe_sub_func_int8_t_s_s((g_33 & (func_52((func_52(g_33) >= l_77[3])) | (&l_77[3] == &l_77[3]))), p_68))) >= g_33)) ^ 0x3D0AE446L), 255UL)) != 1L))) == g_33))
    {
        const unsigned l_84 = 4UL;
        unsigned short *l_88 = &g_89;
        int *l_93 = &l_90;
        int **l_101 = &l_93;
        int *l_103 = (void*)0;
        int **l_102 = &l_103;
        unsigned char *l_140 = (void*)0;
        const short *l_184 = &g_159[1];
        const short **l_183 = &l_184;
        short l_210[10] = {0xF404L,0L,0L,0xF404L,0L,0L,0xF404L,0L,0L,0xF404L};
        unsigned l_223 = 0x4E0D6F03L;
        int i;
        l_90 = ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((g_33 <= l_84), (safe_lshift_func_uint16_t_u_u(((*l_88) = (safe_unary_minus_func_int16_t_s(l_84))), 2)))), 9)) , ((g_79 = g_33) < l_84));
        for (p_69 = 0; (p_69 < 9); p_69 = safe_add_func_int16_t_s_s(p_69, 1))
        {
            int **l_94[8][7] = {{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93},{&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93}};
            unsigned char *l_97 = &g_98;
            int i, j;
            l_93 = l_93;
            if (p_68)
                break;
            l_90 = (func_52((safe_add_func_uint8_t_u_u(((0UL >= (*l_93)) != 0xF43CL), ((*l_97)++)))) > p_68);
            if (g_98)
                continue;
        }
        (*l_102) = ((*l_101) = &g_33);
        for (g_98 = 23; (g_98 > 50); g_98 = safe_add_func_uint16_t_u_u(g_98, 8))
        {
            unsigned short *l_112 = &g_113[5][5];
            int l_122 = 0x2499CBC1L;
            int l_164 = 0x1DCAF161L;
            short **l_165 = &g_158;
            int *l_231 = &g_121;
            if ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((func_52((((*l_88) = p_68) , (safe_add_func_uint32_t_u_u(((void*)0 == l_78[5][0]), g_89)))) == ((*l_112) = (**l_101))) ^ ((safe_mod_func_uint8_t_u_u((*l_103), (g_98 ^ ((safe_rshift_func_int8_t_s_s(2L, 2)) && 1L)))) ^ p_68)), p_68)) , g_89), 0xAF82L)))
            {
                int *l_120 = &g_33;
                unsigned l_137 = 0x1C119C8BL;
                const unsigned ***l_213 = &g_211;
                if ((safe_sub_func_uint32_t_u_u(0xC05799F9L, ((l_122 = (func_52(func_52(g_113[5][5])) , (((*l_102) == l_120) , (p_69 ^ (g_121 &= p_69))))) >= 4294967295UL))))
                {
                    short *l_143 = (void*)0;
                    short *l_144 = &l_77[3];
                    int l_145 = 0x2F8B81D3L;
                    int l_150 = 0x39915A3DL;
                    int l_152 = 0xD825BC70L;
                    if (((safe_add_func_int32_t_s_s(func_52(((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_33, (((safe_lshift_func_int16_t_s_s(((*l_144) = (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(0x87CDL, (((((safe_rshift_func_uint16_t_u_u(func_52((0x304AF2C2L | 0xD2DEF253L)), l_137)) ^ (safe_unary_minus_func_uint8_t_u((l_139 != l_140)))) , g_141) != &l_103) , 65535UL))), g_121))), 14)) , &g_98) != &g_98))), p_69)) == (**l_102))), (**l_102))) != g_113[8][1]))
                    {
                        return l_120;
                    }
                    else
                    {
                        int *l_146 = &l_122;
                        int *l_147 = (void*)0;
                        int *l_148 = &l_90;
                        int *l_149 = &l_122;
                        int *l_151[2];
                        short ***l_166 = &l_165;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_151[i] = &g_121;
                        --g_153;
                        if (p_68)
                            break;
                        l_164 = ((*l_146) = ((((safe_lshift_func_uint16_t_u_s(((g_158 != l_143) , g_98), ((safe_mul_func_uint8_t_u_u((func_52(p_69) != (*l_146)), ((safe_lshift_func_int16_t_s_u(((((*l_88) = (((*l_120) != (**g_141)) , 0x171FL)) , 0x6A65L) || (*l_93)), p_68)) || 0xF8BE3DAAL))) , p_68))) , &l_90) != (void*)0) , p_68));
                        (*l_166) = l_165;
                    }
                }
                else
                {
                    unsigned *l_171 = &g_79;
                    int l_172 = 0x93421386L;
                    int l_180[2];
                    short **l_185[5];
                    unsigned char *l_194[3][5] = {{(void*)0,&g_153,&g_153,&g_98,&g_153},{&g_153,&g_153,&g_98,&g_98,&g_98},{&g_153,(void*)0,(void*)0,&g_153,&g_153}};
                    int *l_195[1][5] = {{&l_90,&l_90,&l_90,&l_90,&l_90}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_180[i] = 0x60892C68L;
                    for (i = 0; i < 5; i++)
                        l_185[i] = (void*)0;
                    for (g_79 = 0; (g_79 <= 7); g_79 += 1)
                    {
                        int i;
                        l_122 ^= (l_180[1] ^= (safe_add_func_int16_t_s_s((255UL >= (((safe_lshift_func_int16_t_s_s(((g_159[g_79] , l_171) == l_171), 13)) < l_172) > g_113[5][5])), (((((safe_lshift_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(l_172, l_164)) && ((g_177++) , (*l_120))), 7)) || (*l_120)) != 65526UL) || 0x6C6A7DDBL) || l_172))));
                    }
                    if (p_68)
                        break;
                    g_121 &= ((*l_93) , (safe_mul_func_int16_t_s_s(((((l_183 == (g_113[8][5] , l_185[3])) && (safe_lshift_func_uint8_t_u_s((~((safe_sub_func_uint16_t_u_u(((*l_88) &= l_172), (((*g_158) , ((safe_mul_func_uint8_t_u_u((l_122 != ((safe_mod_func_int32_t_s_s((func_52((((p_69 = p_68) <= (g_159[5] , p_68)) && p_69)) | 8L), (*g_142))) , l_77[3])), 3L)) < g_98)) || l_172))) , g_33)), g_153))) || 0x510CL) | (*g_158)), g_79)));
                    l_90 = (safe_add_func_int8_t_s_s(func_52(((0x8F89870FL == (((func_52(l_122) , &g_159[5]) == ((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(func_52((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((l_209 = ((*l_120) < (p_69 , (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((*l_120))), (**l_102)))))), l_77[0])), g_89))), g_177)), 0x2D135F38L)) , (void*)0)) < l_210[6])) == p_69)), l_122));
                }
                (*l_213) = g_211;
                for (l_90 = 0; (l_90 != (-23)); l_90--)
                {
                    const int *l_216 = &g_33;
                    const int **l_217 = &l_216;
                    int *l_218 = &g_33;
                    (*l_217) = l_216;
                    return l_218;
                }
            }
            else
            {
                for (g_121 = (-28); (g_121 != (-30)); g_121 = safe_sub_func_int8_t_s_s(g_121, 1))
                {
                    unsigned *l_228[1];
                    const int l_229 = 0L;
                    int *l_230 = &l_122;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_228[i] = &g_79;
                    (*l_230) = ((((safe_lshift_func_int16_t_s_u(((g_153 < ((p_69 ^ l_223) & (((p_68 , (safe_mod_func_uint32_t_u_u((p_68 & (safe_rshift_func_int16_t_s_s((p_69 ^ (l_228[0] == (void*)0)), ((-1L) & p_69)))), 1L))) , l_122) == l_229))) , 0x4295L), (*l_93))) , 0x81452317L) , (-3L)) != 1UL);
                }
            }
            (*l_231) = ((void*)0 == &g_211);
        }
    }
    else
    {
        unsigned short *l_244 = (void*)0;
        unsigned short *l_245 = &g_113[4][2];
        short *l_248 = &l_77[3];
        int l_249[9];
        int *l_250 = &g_121;
        int i;
        for (i = 0; i < 9; i++)
            l_249[i] = 1L;
        (*l_250) = ((((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((safe_mod_func_int16_t_s_s((l_90 = ((*g_158) = p_68)), 1UL)) , ((((*l_248) = ((*g_158) = (l_77[3] <= (0xB7L < ((*l_139) = ((*g_158) || (((safe_lshift_func_uint8_t_u_u((func_52(((safe_rshift_func_uint16_t_u_u(((*l_245)++), 7)) >= ((*l_139) ^= (p_69 = p_69)))) || l_77[3]), g_33)) >= 0x8097L) == 0x68E8L))))))) | 0xA314L) != l_90)) & 0x370EL), 0x6625L)), p_68)) < l_249[4]) , &l_77[3]) == g_158);
    }
    l_90 ^= (func_52(((((p_68 , 0x844572FAL) , 0x9FL) , p_68) && (((safe_rshift_func_uint16_t_u_u(0x4581L, 12)) , 65533UL) | (safe_mod_func_uint8_t_u_u(func_52((((safe_rshift_func_int16_t_s_u(func_52((*g_158)), 13)) , (((func_52((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((p_69 && p_68), 0xB940L)), p_68))) , l_209) | l_77[3]) , l_77[3])) & l_209)), p_68))))) != 8UL);
    return (*g_141);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_113[i][j], "g_113[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_159[i], "g_159[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_314[i], "g_314[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_376[i], "g_376[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_455[i][j], "g_455[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_490[i], "g_490[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_741[i], "g_741[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_804[i][j][k], "g_804[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_950, "g_950", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1016[i], "g_1016[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1038, "g_1038", print_hash_value);
    transparent_crc(g_1040, "g_1040", print_hash_value);
    transparent_crc(g_1107, "g_1107", print_hash_value);
    transparent_crc(g_1116, "g_1116", print_hash_value);
    transparent_crc(g_1248, "g_1248", print_hash_value);
    transparent_crc(g_1416, "g_1416", print_hash_value);
    transparent_crc(g_1687, "g_1687", print_hash_value);
    transparent_crc(g_1691, "g_1691", print_hash_value);
    transparent_crc(g_1695, "g_1695", print_hash_value);
    transparent_crc(g_1750, "g_1750", print_hash_value);
    transparent_crc(g_1751, "g_1751", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1753[i][j][k], "g_1753[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
