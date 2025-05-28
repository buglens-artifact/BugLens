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



static unsigned g_10 = 0x2937A3A1L;
static int g_17 = 1L;
static int *g_56 = &g_17;
static int g_61 = 0x1704D9FAL;
static int g_64 = 0x18EBCCE3L;
static int g_65 = 0x337672A6L;
static unsigned g_80 = 8UL;
static int g_81 = 0L;
static unsigned char g_111 = 1UL;
static unsigned short g_113 = 0xD3BCL;
static const int *g_126 = &g_17;
static const int **g_125 = &g_126;
static unsigned g_128 = 0x8BA9B0DEL;
static unsigned char g_169 = 0UL;
static char g_173[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int g_192 = 0x75EADAE2L;
static unsigned char g_207 = 247UL;
static unsigned short *g_236 = &g_113;
static unsigned short **g_235 = &g_236;
static unsigned short ***g_234 = &g_235;
static unsigned char **g_267 = (void*)0;
static const short *g_323 = (void*)0;
static const short **g_322[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int g_362 = 0x2B42A1A4L;
static const short g_404[1] = {0x8DFAL};
static const unsigned g_421[5][6] = {{0xF6AEAC3AL,1UL,1UL,0xF6AEAC3AL,4294967288UL,0x69EF660DL},{0xBFA01428L,3UL,0x9758B460L,0x69EF660DL,0x5E786042L,4294967293UL},{0x5E786042L,4294967288UL,4294967294UL,4294967288UL,0x5E786042L,6UL},{4294967293UL,3UL,0xA2FCF8A4L,0xF6A7A4DCL,4294967288UL,0x9758B460L},{0x9758B460L,1UL,3UL,3UL,1UL,0x9758B460L}};
static unsigned g_449 = 7UL;
static unsigned g_451 = 0x405343C9L;
static unsigned short g_454[8][2][2] = {{{7UL,65527UL},{0xA305L,0UL}},{{65527UL,0UL},{0xA305L,65527UL}},{{7UL,7UL},{7UL,65527UL}},{{0xA305L,0UL},{65527UL,0UL}},{{0xA305L,65527UL},{7UL,7UL}},{{7UL,65527UL},{0xA305L,0UL}},{{65527UL,0UL},{0xA305L,65527UL}},{{7UL,7UL},{7UL,65527UL}}};
static short g_469[4] = {0x3C41L,0x3C41L,0x3C41L,0x3C41L};
static short g_471[8][9] = {{0xCA10L,(-5L),0xCA10L,0x3414L,(-5L),(-1L),0xAA48L,0xD5A9L,0xD5A9L},{(-8L),(-5L),0xD5A9L,(-5L),0xD5A9L,(-5L),(-8L),0xAA48L,0x22B7L},{0xAA48L,(-1L),(-5L),0x3414L,0xCA10L,(-5L),0xCA10L,0x3414L,(-5L)},{(-5L),(-5L),0x7EE8L,0x716BL,0x22B7L,(-1L),(-5L),0xAA48L,(-5L)},{(-5L),(-8L),(-1L),(-1L),(-8L),(-5L),0x716BL,0xD5A9L,0x1B8FL},{0xAA48L,0x3414L,0x7EE8L,0x1B8FL,(-8L),(-8L),0x1B8FL,0x7EE8L,0x3414L},{(-8L),0x1D5CL,(-5L),0xCA10L,0x22B7L,(-8L),(-1L),(-1L),(-8L)},{0x716BL,0xAA48L,0x7EE8L,0xAA48L,0x716BL,0x1B8FL,0xCA10L,0xD5A9L,0x22B7L}};
static int g_474 = 0L;
static unsigned short ****g_495[7][5][7] = {{{&g_234,&g_234,&g_234,&g_234,&g_234,(void*)0,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,(void*)0,&g_234,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,(void*)0},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,(void*)0}},{{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,(void*)0},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,(void*)0,&g_234,(void*)0,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234}},{{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,(void*)0,(void*)0,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,(void*)0,&g_234,&g_234,&g_234,&g_234}},{{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,(void*)0},{&g_234,&g_234,(void*)0,&g_234,(void*)0,(void*)0,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234}},{{(void*)0,&g_234,&g_234,&g_234,(void*)0,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,(void*)0,&g_234,&g_234,&g_234,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,(void*)0,(void*)0,&g_234,&g_234,&g_234}},{{&g_234,&g_234,(void*)0,(void*)0,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,(void*)0},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234}},{{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{(void*)0,&g_234,(void*)0,&g_234,&g_234,&g_234,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234},{(void*)0,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234}}};
static unsigned short **** const *g_494 = &g_495[1][0][3];
static char g_533 = 0xDBL;
static int g_576[6] = {0xC2CA8116L,0xDE32D066L,0xC2CA8116L,0xC2CA8116L,0xDE32D066L,0xC2CA8116L};
static unsigned g_647 = 4294967295UL;
static short *g_779 = &g_469[0];
static int g_824[7][4] = {{8L,(-10L),0x7A78FD17L,0x7A78FD17L},{0xB58647B4L,0xB58647B4L,8L,0x7A78FD17L},{0L,(-10L),0L,8L},{0L,8L,8L,0L},{0xB58647B4L,8L,0x7A78FD17L,8L},{8L,(-10L),0L,0L},{(-10L),(-10L),0xB58647B4L,0L}};
static int **g_910 = (void*)0;
static int ***g_909 = &g_910;
static unsigned **g_969[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static char *g_1073 = &g_173[2];
static char g_1084 = 1L;
static short g_1123[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static unsigned char g_1172 = 248UL;
static unsigned char * const g_1171 = &g_1172;
static unsigned char * const * const g_1170 = &g_1171;
static unsigned char * const * const *g_1169 = &g_1170;
static unsigned short g_1202 = 65535UL;
static unsigned short g_1203 = 0UL;
static unsigned short g_1204 = 8UL;
static unsigned short g_1205 = 65535UL;
static unsigned short g_1206 = 0x8A23L;
static unsigned short g_1207 = 1UL;
static unsigned short g_1208 = 0xDD82L;
static unsigned short g_1209[7][4][8] = {{{0x76B7L,1UL,0UL,0xCB82L,65533UL,1UL,0x8E76L,0UL},{0UL,65535UL,0x51B1L,65527UL,0x2350L,0x3468L,0UL,0xF584L},{0x3DB3L,0xD480L,0x477BL,0x8E76L,0x51B1L,0xF7C9L,0UL,0xB7ADL},{65526UL,0x3DB3L,0x76B7L,65533UL,65534UL,65533UL,0x76B7L,0x3DB3L}},{{65535UL,65535UL,0x6CE2L,0xA314L,0x477BL,1UL,65533UL,65533UL},{0xCB82L,0xDE34L,9UL,0x31A9L,65535UL,65535UL,65533UL,0x51B1L},{0xD480L,0x31A9L,0x6CE2L,1UL,4UL,65530UL,0x76B7L,1UL},{4UL,65530UL,0x76B7L,1UL,65527UL,0x95B1L,0UL,0x2350L}},{{0xA314L,0xB7ADL,0x477BL,1UL,1UL,0xA48DL,0UL,65527UL},{0x718CL,65534UL,0UL,65535UL,0UL,9UL,65535UL,65535UL},{0xCD28L,1UL,0x6D38L,0xF7C9L,0x3DB3L,0UL,65527UL,65527UL},{0xF7C9L,0x31A9L,0x3DB3L,0x3DB3L,0x31A9L,0xF7C9L,0x5851L,0UL}},{{65535UL,65535UL,9UL,0x153EL,65526UL,7UL,0x477BL,65534UL},{65530UL,0xA48DL,1UL,0x153EL,65535UL,0x6C2EL,0UL,0UL},{0x76B7L,65535UL,1UL,0x3DB3L,0xA314L,0x1500L,0x3468L,65527UL},{0x2350L,65533UL,0x6C2EL,0xF7C9L,65535UL,65535UL,65533UL,65535UL}},{{0x3468L,0xB7ADL,0xCD28L,65535UL,0UL,65535UL,1UL,0x5851L},{0x0D1BL,65527UL,65535UL,0x95B1L,65530UL,65526UL,0x3DB3L,0x76B7L},{0x31A9L,0x1500L,0xE3B5L,1UL,0xDE34L,0x2350L,0xDE34L,1UL},{0UL,0x76B7L,0UL,0xF584L,4UL,0x0D1BL,0UL,0UL}},{{0x1500L,0x3DB3L,1UL,0UL,0x477BL,1UL,4UL,65526UL},{0x2350L,65533UL,1UL,0xA48DL,65534UL,0x0D1BL,0xCD28L,0x31A9L},{0x90FFL,0UL,0xA48DL,65527UL,0x3468L,0x1500L,0xA314L,0x3DB3L},{0xE3B5L,65535UL,9UL,1UL,0x3DB3L,0xDE34L,7UL,0UL}},{{0x76B7L,65535UL,0x6D38L,0UL,0x90FFL,0x95B1L,65535UL,65533UL},{65526UL,0x1500L,1UL,65535UL,1UL,65535UL,0x6D38L,0x5851L},{0x8E76L,65530UL,0x5851L,0UL,0UL,0x5851L,65530UL,0x8E76L},{65535UL,1UL,0xD480L,65534UL,0xF584L,1UL,0x6CE2L,0x6C2EL}}};
static unsigned short g_1210 = 0x46A8L;
static unsigned short g_1211 = 1UL;
static unsigned short g_1212 = 65530UL;
static unsigned short g_1213 = 0x558AL;
static unsigned short g_1214 = 0xAE56L;
static unsigned short g_1215 = 0x0D66L;
static unsigned short g_1216 = 1UL;
static unsigned short g_1217 = 65535UL;
static unsigned short g_1218 = 0x8034L;
static unsigned short g_1219 = 0UL;
static unsigned short g_1220 = 3UL;
static unsigned short g_1221 = 0x428CL;
static unsigned short g_1222[3][10][8] = {{{0UL,0xDE89L,65526UL,0UL,0x0FB3L,8UL,0UL,0UL},{0xDE89L,0x16CDL,65534UL,0UL,0UL,0x279AL,0x7CBBL,1UL},{0x8456L,0x2567L,65535UL,8UL,65533UL,0x16CDL,6UL,0x0753L},{0xD063L,65535UL,0x19ECL,0x16CDL,0UL,65535UL,0xAF86L,65533UL},{0x16CDL,1UL,0xDE89L,65535UL,0UL,65535UL,0UL,0xB1B6L},{65535UL,0x90BFL,65535UL,0x2567L,8UL,65526UL,0x607FL,0UL},{0x19ECL,0x0FB3L,65535UL,1UL,1UL,0x9BD5L,8UL,0UL},{0x19ECL,65535UL,0xD063L,0x6E95L,8UL,0x921AL,0x279AL,0x19ECL},{65535UL,1UL,0x90BFL,0UL,6UL,65535UL,0x16CDL,0x279AL},{65534UL,1UL,65535UL,0x921AL,0x361CL,0xB1B6L,65535UL,65530UL}},{{0UL,0x16C9L,8UL,0x537AL,65531UL,65535UL,65535UL,65531UL},{65535UL,0UL,0UL,65535UL,0x0FB3L,65531UL,6UL,0x16C9L},{7UL,0x8A95L,0x8456L,65533UL,65535UL,65526UL,0x921AL,65535UL},{6UL,0x8A95L,0x6E95L,0xDE89L,1UL,65531UL,1UL,0x90BFL},{0x9F28L,0UL,0UL,0x6E95L,65526UL,65535UL,0x8456L,0x9F28L},{0UL,0x16C9L,0x90BFL,0x7CBBL,0x8A95L,0xB1B6L,65535UL,0x0753L},{1UL,1UL,0x2567L,65535UL,0x9BD5L,65535UL,0UL,0x7CBBL},{1UL,0x361CL,0x5EB7L,0x361CL,1UL,0UL,0x19ECL,0xAF86L},{0x9BD5L,65535UL,0x2567L,1UL,1UL,0x6E95L,0x537AL,0x361CL},{0x607FL,65535UL,0x2567L,0x8A95L,65534UL,0x65A8L,0x19ECL,0UL}},{{1UL,65530UL,0x5EB7L,0xAF86L,0x16CDL,65535UL,0UL,0x16C9L},{65535UL,0xD063L,0x90BFL,0UL,0x5EB7L,6UL,65535UL,65535UL},{0xD063L,0xDE89L,65530UL,0x6E95L,65534UL,0UL,0x607FL,0x607FL},{1UL,8UL,6UL,6UL,8UL,1UL,0x5EB7L,0UL},{1UL,0UL,0UL,0x9BD5L,65535UL,0x9F28L,0UL,0xAF86L},{65531UL,0UL,0x607FL,0x9BD5L,0xB1B6L,65535UL,0x537AL,0UL},{65533UL,0xB1B6L,0x921AL,6UL,0UL,0x65A8L,0x0FB3L,0x607FL},{65530UL,1UL,65527UL,0x6E95L,0x16CDL,8UL,0UL,65535UL},{0x16C9L,0x2567L,0x0FB3L,0UL,1UL,65535UL,0UL,1UL},{1UL,0x279AL,65527UL,0x2567L,65527UL,0x279AL,1UL,0x361CL}}};
static unsigned short g_1223[5] = {7UL,7UL,7UL,7UL,7UL};
static unsigned short g_1224 = 65535UL;
static unsigned ****g_1268 = (void*)0;
static unsigned short * const *g_1312 = &g_236;
static int g_1408 = 1L;
static unsigned short g_1456[7] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static unsigned char ***g_1523 = &g_267;
static unsigned short g_1529 = 0x4B2CL;
static unsigned short g_1565[7] = {0x49B9L,65535UL,0x49B9L,0x49B9L,65535UL,0x49B9L,0x49B9L};
static int g_1576 = 0x5A519308L;
static unsigned *g_1605 = &g_451;
static unsigned * const *g_1604[1] = {&g_1605};
static unsigned * const **g_1603 = &g_1604[0];
static unsigned * const ***g_1602 = &g_1603;



static short func_1(void);
static int * func_2(int * p_3, short p_4, char p_5);
static int * func_6(unsigned char p_7, int * const p_8, const char p_9);
static int * func_11(unsigned char p_12, int * p_13, int * const p_14, const char p_15);
static int * func_18(int p_19, char p_20, int * p_21, unsigned char p_22, unsigned char p_23);
static unsigned short func_26(const int p_27, short p_28);
static int func_34(char p_35);
static char func_36(int * p_37, const unsigned p_38, unsigned short p_39, unsigned p_40);
static int * func_41(short p_42, const int * p_43, int p_44, unsigned p_45, int p_46);
static int func_48(const int * const p_49, int * p_50, int * p_51, int * p_52);
static short func_1(void)
{
    int *l_16 = &g_17;
    const unsigned short l_29 = 0x9F42L;
    short *l_1122 = &g_1123[5];
    int *l_1259 = (void*)0;
    int l_1389[4][10][5] = {{{1L,0L,0xC184BDF8L,0x01A85095L,0x73C74AEEL},{0xD2038FF1L,0xD86F0589L,0xC262E4F2L,1L,(-9L)},{0xB4870ECEL,(-6L),0xC262E4F2L,0x27B09C10L,0xD86F0589L},{1L,0xF53B890EL,0xC184BDF8L,0x312E7E78L,0xD2038FF1L},{0x107F0338L,0x068D4482L,0x40692723L,0x95425F76L,7L},{0xDEE92609L,(-7L),0xFD1BCE5DL,0xA1904DAFL,0xE8770354L},{0xBF3BEFF0L,0x823441E9L,6L,0x716E30A7L,(-3L)},{1L,0x82906597L,0xB8E7C00BL,(-5L),0xB8E7C00BL},{0xC184BDF8L,0xC184BDF8L,(-5L),0xDB1BCC93L,(-9L)},{(-1L),4L,1L,7L,0xA1904DAFL}},{{0xF53B890EL,0xB4870ECEL,0xC4D388FAL,6L,0x2B32DE6AL},{0L,4L,0x82906597L,3L,0x4866F903L},{0xE915E89AL,0xC184BDF8L,0xE8770354L,0L,0L},{0xFD1BCE5DL,0x823441E9L,1L,3L,0xC9E8EC3AL},{0xC184BDF8L,0L,0x312E7E78L,0x73C74AEEL,(-3L)},{(-1L),0xB8E7C00BL,(-7L),1L,(-1L)},{0L,0xA1904DAFL,0x1C2B8082L,0x95425F76L,0x6E5B8489L},{0xC67C79D8L,4L,0xB4870ECEL,(-1L),0x40692723L},{(-1L),(-3L),0xB8E7C00BL,0L,0xC4D388FAL},{(-1L),1L,(-1L),4L,2L}},{{0xC67C79D8L,0xF238B17AL,0xE915E89AL,9L,1L},{0L,0x03E62952L,3L,1L,2L},{(-1L),0x716E30A7L,0xFD1BCE5DL,0xB4870ECEL,1L},{0xC184BDF8L,0x2B32DE6AL,4L,2L,0xE915E89AL},{0xFD1BCE5DL,0xEA84F16FL,0L,0xEA84F16FL,0xFD1BCE5DL},{1L,(-1L),0x27B09C10L,0L,0L},{0x16CE6C4CL,0xFD1BCE5DL,1L,0x312E7E78L,0x2B32DE6AL},{4L,(-9L),(-9L),(-1L),0L},{0xC4D388FAL,0x312E7E78L,(-9L),0xC8ADFAF6L,0xFD1BCE5DL},{0L,0x068D4482L,(-1L),0x16CE6C4CL,0xE915E89AL}},{{0L,(-1L),0xC4D388FAL,0x24437DDEL,1L},{3L,0L,0xF53B890EL,6L,2L},{0x1C2B8082L,1L,(-1L),0xC67C79D8L,0x823441E9L},{0xD86F0589L,0x40692723L,1L,0L,0xE8770354L},{1L,0xD8BDEEE8L,0xB20E8760L,0x27B09C10L,(-5L)},{4L,0x107F0338L,6L,0x27B09C10L,(-1L)},{0L,7L,0xC85EAD02L,0L,0L},{(-9L),(-7L),0x2CDB5D56L,0xC67C79D8L,(-1L)},{0xC262E4F2L,0xFD1BCE5DL,(-1L),(-1L),0xDB1BCC93L},{(-7L),(-3L),3L,0xB4870ECEL,(-1L)}}};
    unsigned short ** const *l_1413 = &g_235;
    unsigned short ** const * const *l_1412 = &l_1413;
    unsigned short ** const * const ** const l_1411 = &l_1412;
    unsigned l_1441 = 0UL;
    unsigned l_1455 = 0x07D7194BL;
    unsigned char l_1457[4];
    unsigned short l_1458[9] = {65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL,65531UL};
    short l_1469 = 0x59DCL;
    char l_1475[3];
    unsigned ***l_1485[4][3] = {{&g_969[1],&g_969[1],&g_969[5]},{&g_969[1],&g_969[1],&g_969[5]},{&g_969[1],&g_969[1],&g_969[5]},{&g_969[1],&g_969[1],&g_969[5]}};
    char *l_1495 = &g_533;
    unsigned char *** const l_1505 = &g_267;
    unsigned char *** const *l_1504 = &l_1505;
    int l_1527 = 0x083017F0L;
    short l_1528 = 0xE088L;
    int *l_1533 = &g_576[1];
    unsigned short ***l_1558 = (void*)0;
    unsigned short l_1573 = 1UL;
    int l_1590[10] = {0L,0L,0xCE25FE78L,0L,0L,0xCE25FE78L,0L,0L,0xCE25FE78L,0L};
    int *l_1610 = &g_824[6][1];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1457[i] = 0x48L;
    for (i = 0; i < 3; i++)
        l_1475[i] = 0x83L;
    (*g_125) = func_2((l_1259 = func_6(g_10, func_11(g_10, l_16, func_18((((*l_16) = (2UL >= ((safe_sub_func_uint16_t_u_u(func_26(l_29, (*l_16)), ((*l_1122) = 0x89F1L))) != (-1L)))) >= l_29), l_29, l_16, g_647, l_29), g_10), l_29)), l_29, l_29);
    for (g_65 = 0; (g_65 == 1); ++g_65)
    {
        int **** const l_1360 = &g_909;
        const int l_1381 = 0xB49E2459L;
        int l_1424 = 1L;
        int l_1438 = (-10L);
        const unsigned short **l_1454 = (void*)0;
    }
    if (((*g_1171) != (((((*l_1259) = l_1457[3]) & ((*l_16) = 0x93B60328L)) != (*g_236)) | l_1458[5])))
    {
        unsigned l_1459 = 1UL;
        int *l_1460 = &l_1389[3][8][4];
        (*l_16) ^= l_1459;
        (*g_125) = l_1460;
    }
    else
    {
        unsigned char *l_1470 = &g_111;
        int l_1474 = 0xAA78B353L;
        int l_1478 = 0xA582DA41L;
        int *l_1499 = &l_1389[2][4][4];
        unsigned short l_1535 = 2UL;
        unsigned short l_1551 = 65531UL;
        int l_1572 = (-7L);
        unsigned l_1589[8][9][3] = {{{7UL,4294967290UL,0x8F955CC3L},{1UL,0UL,0UL},{0x0ACDAE98L,0x478B4BEDL,4294967290UL},{0UL,1UL,0xA4B8A7F6L},{0x7CD5AAB4L,7UL,4294967295UL},{0x817DFD0DL,0xB01B4EEBL,0x8AA2E075L},{0x42CFD6E4L,0x5CB5D812L,0xFDFCD82DL},{5UL,5UL,0xBA015D1DL},{0UL,0x9FA2498FL,4294967292UL}},{{0UL,0x5235E315L,0xE030B8B8L},{0x22BFDF01L,0x1DDBB8C7L,0x8867327BL},{4294967288UL,0UL,0xE030B8B8L},{5UL,0x278B3DE1L,4294967292UL},{4294967295UL,0x5CB5D812L,0x36502155L},{3UL,0xAEFE8B27L,0x7CD5AAB4L},{0x0BD777C3L,1UL,0UL},{0UL,0UL,0x8FFC63F0L},{2UL,3UL,0x8AA2E075L}},{{3UL,2UL,0x5CB5D812L},{0x8F955CC3L,0UL,0x6834B447L},{0xAEFE8B27L,0x478B4BEDL,0x7A3AB0C5L},{0xC33DBBA7L,0xF152DDCEL,7UL},{0xD70A217EL,4294967295UL,3UL},{0x5CB5D812L,0xF4E16B19L,4294967286UL},{0x93E124E9L,4294967290UL,0UL},{0UL,4294967293UL,0x0ACDAE98L},{0xFDFCD82DL,0x8F955CC3L,0xF2761688L}},{{0x8FFC63F0L,4UL,0x817DFD0DL},{0xE8EC456AL,4294967294UL,4294967289UL},{0xE8EC456AL,0x0B2162E6L,0xFDFCD82DL},{0x8FFC63F0L,0UL,0x478B4BEDL},{0xFDFCD82DL,4294967286UL,0x0B2162E6L},{0UL,0x03BF39B9L,4294967286UL},{0x93E124E9L,0x8867327BL,4294967290UL},{0x5CB5D812L,4294967294UL,0x246EE76AL},{0xD70A217EL,2UL,0xC33DBBA7L}},{{0xC33DBBA7L,0xB01B4EEBL,0xE8EC456AL},{0xAEFE8B27L,4294967288UL,0UL},{0x8F955CC3L,0x0BD777C3L,4UL},{3UL,1UL,5UL},{4294967286UL,4294967293UL,0x246EE76AL},{2UL,4294967294UL,4294967295UL},{0xAEFE8B27L,4294967293UL,4294967293UL},{0x03BF39B9L,0xFAD9FFFDL,0x7CD5AAB4L},{0x1DDBB8C7L,0UL,0UL}},{{0UL,1UL,4294967290UL},{0x7CD5AAB4L,0xF2761688L,0x36502155L},{1UL,1UL,4294967294UL},{0xC33DBBA7L,0UL,5UL},{0x5235E315L,0xFAD9FFFDL,4294967295UL},{1UL,4294967293UL,1UL},{0x0BD777C3L,4294967294UL,0xA4B8A7F6L},{4294967294UL,4294967293UL,0x8AA2E075L},{1UL,4UL,0x03BF39B9L}},{{0xF4E16B19L,0xAEFE8B27L,0UL},{4UL,0x7CD5AAB4L,1UL},{0xB01B4EEBL,4UL,2UL},{1UL,4294967286UL,0UL},{4294967290UL,0x478B4BEDL,0x93E124E9L},{0UL,0UL,0xE2EE1967L},{4294967295UL,0x278B3DE1L,0x8FFC63F0L},{0x8F955CC3L,0xF3CFC76CL,3UL},{0UL,1UL,0UL}},{{0xE2EE1967L,0UL,0x278B3DE1L},{0UL,4294967290UL,0x278B3DE1L},{0x478B4BEDL,4294967294UL,0UL},{0UL,7UL,3UL},{0UL,0x22BFDF01L,0x8FFC63F0L},{0UL,0x9FA2498FL,0xE2EE1967L},{0UL,0x8FFC63F0L,0x93E124E9L},{0x246EE76AL,0UL,0UL},{0xB02BA1F1L,0UL,4294967286UL}}};
        unsigned char l_1591 = 247UL;
        unsigned * const ***l_1607 = &g_1603;
        int i, j, k;
        if (((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((*g_1073), (*g_1073))), ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0xC9L, (*g_1171))), 4)) | (*l_16)))) | ((~(*l_1259)) | (g_207 = ((*l_1470) = l_1469)))))
        {
            int l_1473 = 0L;
            int **l_1479 = (void*)0;
            int **l_1480 = &l_16;
            (*g_125) = ((*l_1480) = func_18(((((-1L) || (*g_1073)) ^ (safe_rshift_func_uint16_t_u_s(((*g_1073) ^ ((*g_1171) = (l_1473 == (((void*)0 == &g_909) <= l_1474)))), (l_1475[2] <= (safe_rshift_func_uint8_t_u_u(1UL, 6)))))) ^ (*g_1073)), (*g_1073), &l_1389[0][9][0], l_1478, (*l_1259)));
            if (((safe_rshift_func_int8_t_s_s((!((*g_1073) = (*g_1073))), 2)) && (&g_969[1] != (l_1485[1][1] = &g_969[6]))))
            {
                unsigned l_1492[4];
                int *l_1498 = &g_474;
                int i;
                for (i = 0; i < 4; i++)
                    l_1492[i] = 4294967295UL;
                (*l_1259) |= (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((l_1492[2] = ((void*)0 != &g_910)), l_1474)), (safe_mul_func_uint8_t_u_u((((*g_1073) >= ((&g_533 == l_1495) | (safe_mod_func_int8_t_s_s((((*l_1495) = (-1L)) != (*g_1073)), (*g_1073))))) && (**g_1312)), l_1474)))), (*g_1073)));
                l_1499 = l_1498;
                (*l_1259) = (*l_1259);
            }
            else
            {
                unsigned l_1502 = 0x74A88EA5L;
                unsigned short *** const *l_1503 = (void*)0;
                unsigned char ***l_1508[4][9][7] = {{{(void*)0,&g_267,&g_267,(void*)0,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,(void*)0,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,(void*)0,&g_267,&g_267,(void*)0,&g_267,&g_267},{(void*)0,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,(void*)0,&g_267,(void*)0,&g_267,(void*)0},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,(void*)0},{&g_267,(void*)0,&g_267,&g_267,(void*)0,&g_267,&g_267}},{{&g_267,(void*)0,&g_267,(void*)0,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,(void*)0,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,(void*)0,&g_267,&g_267},{&g_267,&g_267,(void*)0,&g_267,(void*)0,(void*)0,(void*)0},{&g_267,(void*)0,(void*)0,&g_267,&g_267,(void*)0,&g_267},{(void*)0,(void*)0,&g_267,(void*)0,&g_267,&g_267,&g_267},{&g_267,&g_267,(void*)0,&g_267,(void*)0,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,(void*)0,&g_267,(void*)0}},{{&g_267,&g_267,(void*)0,(void*)0,&g_267,&g_267,(void*)0},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,(void*)0,&g_267,(void*)0,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,(void*)0,(void*)0,&g_267,(void*)0,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{(void*)0,(void*)0,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,(void*)0,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,(void*)0,&g_267}},{{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,(void*)0},{&g_267,&g_267,(void*)0,&g_267,&g_267,(void*)0,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,(void*)0,&g_267},{&g_267,&g_267,&g_267,&g_267,(void*)0,&g_267,(void*)0},{&g_267,(void*)0,(void*)0,&g_267,&g_267,&g_267,&g_267},{&g_267,(void*)0,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267},{&g_267,&g_267,&g_267,&g_267,&g_267,&g_267,(void*)0},{(void*)0,&g_267,&g_267,&g_267,&g_267,&g_267,&g_267}}};
                unsigned char ****l_1507 = &l_1508[2][6][6];
                int l_1526 = 1L;
                int i, j, k;
                if (((**l_1480) ^= (l_1502 > 0L)))
                {
                    unsigned l_1515 = 3UL;
                    unsigned l_1516[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1516[i] = 4294967287UL;
                    if (((*l_1499) == (*g_1073)))
                    {
                        return (*l_1259);
                    }
                    else
                    {
                        unsigned char *** const **l_1506 = &l_1504;
                        (*l_1480) = (void*)0;
                        (*g_125) = func_11((((*g_1073) &= (l_1503 != (void*)0)) == (**g_1170)), &l_1474, &g_824[3][3], (*l_1259));
                        (*l_1499) ^= l_1502;
                        (*l_1259) = ((((*l_1506) = l_1504) == l_1507) == (*l_1499));
                    }
                    (*l_1259) &= ((***g_234) ^ (safe_sub_func_uint8_t_u_u((l_1502 < (safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(5L, l_1515)), l_1516[1]))), l_1515)));
                }
                else
                {
                    int l_1519 = 0xC65F948CL;
                    int *l_1520[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1520[i] = (void*)0;
                    for (g_449 = 29; (g_449 != 8); g_449 = safe_sub_func_uint8_t_u_u(g_449, 8))
                    {
                        (*l_1259) = l_1519;
                    }
                    g_61 ^= ((*l_1499) &= (**l_1480));
                    l_1527 &= (((safe_lshift_func_uint16_t_u_s(((*l_16) &= (***g_234)), (((*l_1499) > ((void*)0 == g_1523)) != ((*g_909) != (*g_909))))) <= (0UL >= ((*l_1499) != (safe_mul_func_uint16_t_u_u(l_1502, 65535UL))))) && l_1526);
                }
                (*l_1499) = (l_1528 >= l_1502);
            }
            return (*g_779);
        }
        else
        {
            int l_1530 = 8L;
            int *l_1534 = &g_824[5][2];
            unsigned char l_1536 = 6UL;
            int *l_1544 = &g_824[2][2];
            if (((*g_1073) || (*g_1073)))
            {
                unsigned char l_1537 = 253UL;
                (*l_1499) &= l_1537;
            }
            else
            {
                int *l_1538 = &l_1389[3][8][4];
                int l_1539 = 1L;
                unsigned l_1577[2][4] = {{0xC60A7212L,0xC60A7212L,0xC60A7212L,0xC60A7212L},{0xC60A7212L,0xC60A7212L,0xC60A7212L,0xC60A7212L}};
                int *l_1578[5][3] = {{(void*)0,&l_1474,(void*)0},{&l_1474,(void*)0,(void*)0},{(void*)0,(void*)0,&g_64},{&l_1572,&l_1474,(void*)0},{(void*)0,(void*)0,(void*)0}};
                int i, j;
                if ((*l_1534))
                {
                    unsigned *l_1540 = &l_1441;
                    int *l_1543 = &l_1539;
                    unsigned char l_1548 = 0xC6L;
                    (*l_1534) = (*g_126);
                    for (g_1202 = 0; (g_1202 <= 4); g_1202 += 1)
                    {
                        int i;
                        return g_1223[g_1202];
                    }
                    (*l_1534) = func_36((l_1538 = &l_1389[3][8][4]), g_1218, (*l_1499), ((*l_1540) |= l_1539));
                    for (g_1172 = 0; (g_1172 >= 39); g_1172 = safe_add_func_int16_t_s_s(g_1172, 4))
                    {
                        int **l_1545 = &l_1543;
                        (*g_125) = ((*l_1545) = (l_1544 = l_1543));
                        (*l_1544) &= (safe_mod_func_uint32_t_u_u(((*l_1534) = (((*l_1499) ^= ((l_1548 &= ((*g_909) == (*g_909))) < func_34((*l_16)))) & 8UL)), 0xF1AA872BL));
                        (*l_1545) = &l_1474;
                    }
                }
                else
                {
                    char l_1552 = 0xFBL;
                    (*l_1544) = ((safe_add_func_uint32_t_u_u((((*l_1533) = (*l_1533)) != l_1551), (((*l_16) |= l_1552) <= (safe_rshift_func_uint16_t_u_u((*l_1499), (*l_1544)))))) >= 1L);
                    (*l_1499) = ((*l_1259) = (((*g_1073) = (((((*g_779) |= ((((((*l_1470) = (safe_unary_minus_func_uint16_t_u(((l_1558 != (*l_1412)) | (((*l_1499) != (safe_rshift_func_int16_t_s_s(((*l_1533) <= (**g_1170)), 15))) != (safe_mul_func_uint8_t_u_u(0x55L, (*l_1538)))))))) | 0xDFL) | (((safe_add_func_int32_t_s_s((~((*l_1534) = ((*l_1534) & (**g_1312)))), (*l_1538))) ^ 0x5F1DL) && (*g_1073))) & 0xB0L) | l_1552)) & 1L) || (*l_1499)) && (*l_1534))) == g_1565[0]));
                }
                g_64 |= (((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(func_34((((safe_lshift_func_uint16_t_u_s((l_1572 ^ (0x21F226C9L | l_1573)), 6)) | ((((*l_1538) = (*l_16)) > (*l_1534)) != (~(0xF68531AFL ^ (safe_mod_func_uint8_t_u_u(((*l_1470) |= ((*g_1171) >= ((*l_1544) ^ (((l_1478 = ((((*l_1122) &= (*l_1534)) && (**g_1312)) != (*g_236))) != (*l_1533)) || (*l_1544))))), (*g_1073))))))) || (**g_1312))), (**g_1170))) == (-10L)) && (-1L)), g_1576)) || l_1577[0][1]) || (*l_1538));
                (*g_125) = &l_1539;
                (*l_1538) = func_48((*g_125), (l_1259 = (void*)0), &g_576[1], &l_1572);
            }
        }
        for (g_65 = (-27); (g_65 == (-13)); g_65++)
        {
            int *l_1581 = &l_1389[0][7][2];
            unsigned char l_1582 = 252UL;
            (*g_125) = l_1581;
            l_1582 = (*l_1499);
        }
        (*g_125) = &l_1478;
        if ((safe_mod_func_uint16_t_u_u(((((((*l_1499) == (***g_234)) > (*l_16)) & 6UL) & (-10L)) | (*g_1073)), (***g_234))))
        {
            (*l_1499) ^= (-5L);
        }
        else
        {
            int *l_1593 = (void*)0;
            unsigned l_1609 = 0xDBC5BB66L;
            for (g_362 = 1; (g_362 >= 0); g_362 -= 1)
            {
                short l_1592 = 1L;
                (*l_1533) |= l_1592;
                for (g_169 = 0; (g_169 <= 1); g_169 += 1)
                {
                    unsigned char ***l_1598 = (void*)0;
                    unsigned char **l_1600[4][10][1] = {{{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{(void*)0}},{{&l_1470},{&l_1470},{&l_1470},{(void*)0},{(void*)0},{(void*)0},{&l_1470},{&l_1470},{(void*)0},{(void*)0}},{{(void*)0},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{(void*)0},{(void*)0},{(void*)0},{&l_1470}},{{&l_1470},{(void*)0},{(void*)0},{(void*)0},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{&l_1470},{(void*)0}}};
                    unsigned char ***l_1599 = &l_1600[0][3][0];
                    int **l_1601 = &l_1259;
                    int i, j, k;
                    l_1499 = &l_1389[1][0][4];
                    (*g_125) = l_1593;
                    (*g_125) = ((*l_1601) = func_11(((safe_rshift_func_uint8_t_u_s(((*l_1470) |= ((void*)0 != &g_267)), l_1592)) & ((*g_1523) == ((*l_1599) = (**l_1504)))), &l_1478, &g_64, (*g_1073)));
                    for (g_207 = 0; (g_207 <= 1); g_207 += 1)
                    {
                        int i, j, k;
                        if (g_454[(g_207 + 2)][g_207][g_169])
                            break;
                    }
                }
                for (g_1217 = 0; (g_1217 <= 3); g_1217 += 1)
                {
                    unsigned * const ****l_1606[10][10] = {{&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602},{&g_1602,&g_1602,(void*)0,(void*)0,&g_1602,&g_1602,(void*)0,(void*)0,(void*)0,&g_1602},{(void*)0,(void*)0,(void*)0,&g_1602,&g_1602,&g_1602,&g_1602,(void*)0,&g_1602,&g_1602},{&g_1602,(void*)0,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,(void*)0},{(void*)0,&g_1602,&g_1602,(void*)0,(void*)0,&g_1602,&g_1602,(void*)0,&g_1602,&g_1602},{(void*)0,(void*)0,&g_1602,(void*)0,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,(void*)0},{(void*)0,(void*)0,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,(void*)0,&g_1602},{&g_1602,&g_1602,(void*)0,&g_1602,(void*)0,&g_1602,(void*)0,(void*)0,&g_1602,&g_1602},{(void*)0,(void*)0,(void*)0,&g_1602,&g_1602,&g_1602,(void*)0,(void*)0,&g_1602,(void*)0},{(void*)0,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602,&g_1602}};
                    int l_1608 = (-9L);
                    int i, j;
                    l_1608 &= ((l_1607 = g_1602) != &g_1603);
                    for (g_113 = 0; (g_113 <= 3); g_113 += 1)
                    {
                        (*g_125) = func_11(l_1609, l_1610, &l_1608, l_1608);
                    }
                }
            }
        }
    }
    return (*l_1610);
}







static int * func_2(int * p_3, short p_4, char p_5)
{
    int *l_1265 = &g_65;
    unsigned char *l_1277 = (void*)0;
    int l_1281 = 3L;
    short **l_1286 = &g_779;
    short ***l_1285 = &l_1286;
    for (g_1208 = 7; (g_1208 == 36); ++g_1208)
    {
        unsigned *** const l_1270 = &g_969[1];
        unsigned *** const *l_1269[6][8][5] = {{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{(void*)0,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,(void*)0,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,(void*)0,&l_1270,&l_1270,(void*)0}},{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,(void*)0,&l_1270,&l_1270},{(void*)0,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,(void*)0,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,(void*)0,&l_1270}},{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{(void*)0,&l_1270,&l_1270,&l_1270,(void*)0},{&l_1270,(void*)0,&l_1270,&l_1270,&l_1270}},{{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,(void*)0,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,(void*)0},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270}},{{&l_1270,&l_1270,(void*)0,(void*)0,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,(void*)0},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,(void*)0,&l_1270}},{{&l_1270,&l_1270,&l_1270,&l_1270,(void*)0},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,&l_1270,&l_1270},{&l_1270,&l_1270,(void*)0,&l_1270,&l_1270},{(void*)0,(void*)0,&l_1270,&l_1270,&l_1270},{&l_1270,(void*)0,(void*)0,&l_1270,&l_1270},{&l_1270,&l_1270,&l_1270,(void*)0,&l_1270},{&l_1270,(void*)0,&l_1270,&l_1270,&l_1270}}};
        unsigned short *l_1274 = &g_454[1][0][1];
        unsigned char *l_1275 = (void*)0;
        char l_1278 = 4L;
        char **l_1307 = &g_1073;
        int *l_1313 = &g_824[4][2];
        int i, j, k;
        for (g_1214 = 0; (g_1214 != 54); ++g_1214)
        {
            int * const l_1264 = &g_576[1];
            unsigned short *l_1273 = &g_1202;
            unsigned char *l_1276[1][8] = {{&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207,&g_207}};
            int i, j;
            (*g_125) = func_11(p_4, p_3, l_1264, ((p_5 != func_36(l_1265, p_5, p_4, p_4)) <= 4UL));
            (*l_1265) = (safe_lshift_func_int16_t_s_u((g_1268 != l_1269[3][7][1]), (((((((*g_1073) & (safe_lshift_func_int16_t_s_s((*g_779), 8))) || (((((l_1274 = l_1273) == (void*)0) < ((l_1276[0][7] = l_1275) != l_1277)) <= 0x6C5D5ADFL) == l_1278)) >= p_4) || 65535UL) >= 0x01L) || (**g_1170))));
        }
        (*l_1265) = (+(l_1278 | (safe_mod_func_uint16_t_u_u(func_34((*g_1073)), l_1281))));
    }
    return p_3;
}







static int * func_6(unsigned char p_7, int * const p_8, const char p_9)
{
    unsigned l_1135 = 0x6A40ADEDL;
    short *l_1138 = &g_1123[7];
    char *l_1141 = &g_1084;
    int *l_1142 = &g_474;
    int **l_1143 = &g_56;
    int l_1144 = (-7L);
    int l_1145 = 0L;
    unsigned ** const *l_1149 = &g_969[9];
    unsigned ***l_1150 = (void*)0;
    unsigned char *l_1167 = &g_169;
    unsigned char * const *l_1166[9] = {&l_1167,(void*)0,(void*)0,&l_1167,(void*)0,(void*)0,&l_1167,(void*)0,(void*)0};
    unsigned char * const * const *l_1165 = &l_1166[4];
    short **l_1188[3];
    short ***l_1187[9][5] = {{&l_1188[1],&l_1188[2],&l_1188[2],&l_1188[1],&l_1188[1]},{&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[0]},{&l_1188[0],(void*)0,&l_1188[1],(void*)0,&l_1188[0]},{&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[1],&l_1188[0]},{&l_1188[1],&l_1188[1],&l_1188[1],&l_1188[0],&l_1188[0]},{&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[0]},{(void*)0,&l_1188[0],&l_1188[2],&l_1188[2],&l_1188[0]},{&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[0],&l_1188[0]},{&l_1188[2],&l_1188[1],&l_1188[2],&l_1188[2],&l_1188[1]}};
    int *l_1258 = &g_17;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1188[i] = &l_1138;
    l_1144 &= ((((*g_779) = (((safe_rshift_func_int16_t_s_s((0L < ((safe_sub_func_uint8_t_u_u(l_1135, (safe_mod_func_int32_t_s_s((4294967295UL >= ((l_1138 == l_1138) == 0x8EC9L)), l_1135)))) & ((*l_1142) = func_34(((*g_1073) = func_36(((*l_1143) = func_18(l_1135, ((*l_1141) = ((*g_1073) = (safe_sub_func_uint16_t_u_u(((***g_234) = p_7), p_9)))), l_1142, g_10, p_7)), p_9, p_9, g_111)))))), l_1135)) ^ p_9) | 2L)) != p_9) > p_9);
    l_1145 &= func_34((*g_1073));
    for (g_362 = 0; (g_362 < 12); ++g_362)
    {
        const char l_1148 = 0xA7L;
        unsigned ****l_1151 = &l_1150;
        unsigned short * const l_1201[3][6][10] = {{{&g_1208,&g_1203,(void*)0,&g_1221,(void*)0,&g_1220,&g_1220,(void*)0,&g_1221,(void*)0},{&g_1223[2],&g_1223[2],(void*)0,&g_1202,&g_1204,&g_1208,&g_1211,&g_1215,(void*)0,(void*)0},{&g_1203,&g_1208,(void*)0,&g_1217,(void*)0,&g_1203,&g_1211,(void*)0,&g_1202,(void*)0},{(void*)0,&g_1223[2],(void*)0,&g_1217,(void*)0,&g_1211,&g_1220,(void*)0,(void*)0,(void*)0},{(void*)0,&g_1203,&g_1215,&g_1202,&g_1215,&g_1218,&g_1207,&g_1220,&g_1212,&g_1203},{&g_1218,&g_1207,&g_1220,&g_1212,&g_1203,&g_1219,&g_1213,&g_1208,&g_1224,&g_1220}},{{&g_1213,&g_1207,&g_1223[2],(void*)0,&g_1214,(void*)0,&g_1207,&g_1203,&g_1224,&g_1223[2]},{&g_1219,&g_1218,&g_1214,&g_1212,&g_1211,(void*)0,(void*)0,&g_1211,&g_1212,&g_1214},{&g_1213,&g_1213,&g_1214,&g_1216,(void*)0,&g_1219,&g_1222[0][5][1],&g_1203,&g_1209[0][0][0],&g_1214},{&g_1218,&g_1219,&g_1223[2],&g_1205,&g_1211,&g_1218,&g_1222[0][5][1],&g_1208,&g_1216,&g_1223[2]},{&g_1207,&g_1213,&g_1220,&g_1205,&g_1214,&g_1222[0][5][1],(void*)0,&g_1220,&g_1209[0][0][0],&g_1220},{&g_1207,&g_1218,&g_1203,&g_1216,&g_1203,&g_1218,&g_1207,&g_1220,&g_1212,&g_1203}},{{&g_1218,&g_1207,&g_1220,&g_1212,&g_1203,&g_1219,&g_1213,&g_1208,&g_1224,&g_1220},{&g_1213,&g_1207,&g_1223[2],(void*)0,&g_1214,(void*)0,&g_1207,&g_1203,&g_1224,&g_1223[2]},{(void*)0,(void*)0,&g_1205,(void*)0,&g_1224,(void*)0,(void*)0,&g_1224,(void*)0,&g_1205},{&g_1204,&g_1204,&g_1205,&g_1207,&g_1209[0][0][0],(void*)0,&g_1215,(void*)0,&g_1222[0][5][1],&g_1205},{(void*)0,(void*)0,&g_1216,&g_1219,&g_1224,(void*)0,&g_1215,(void*)0,&g_1207,&g_1216},{(void*)0,&g_1204,&g_1212,&g_1219,&g_1205,&g_1215,(void*)0,&g_1212,&g_1222[0][5][1],&g_1212}}};
        unsigned short * const *l_1200 = &l_1201[2][1][0];
        unsigned short * const *l_1226 = (void*)0;
        int *l_1228[4][6][10] = {{{&l_1145,&l_1145,&g_65,(void*)0,&g_65,&l_1145,&l_1145,&g_65,(void*)0,&g_65},{&l_1145,&l_1145,&g_65,(void*)0,&g_65,&l_1145,&l_1145,&g_65,(void*)0,&g_65},{&l_1145,&l_1145,&g_65,(void*)0,&g_65,&l_1145,&l_1145,&g_65,(void*)0,&g_65},{&l_1145,&l_1145,&g_65,(void*)0,&g_65,&l_1145,&l_1145,&g_65,(void*)0,&g_65},{&l_1145,&l_1145,&g_65,(void*)0,&g_65,&l_1145,&l_1145,&g_65,(void*)0,&g_65},{&l_1145,&l_1145,&g_65,(void*)0,&g_65,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145}},{{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145}},{{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,(void*)0,&l_1145,(void*)0,&l_1145,(void*)0,(void*)0,&l_1145,(void*)0,&l_1145},{(void*)0,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0}},{{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0},{&g_65,&g_65,(void*)0,(void*)0,(void*)0,&g_65,&g_65,(void*)0,(void*)0,(void*)0}}};
        int l_1243[6][3] = {{(-6L),0x1F6CB34DL,(-6L)},{0x6958CF05L,0x6958CF05L,0x6958CF05L},{(-6L),0x1F6CB34DL,(-6L)},{0x6958CF05L,0x6958CF05L,0x6958CF05L},{(-6L),0x1F6CB34DL,(-6L)},{0x6958CF05L,0x6958CF05L,0x6958CF05L}};
        unsigned l_1252 = 4UL;
        int i, j, k;
        if ((l_1148 <= (l_1149 != ((*l_1151) = l_1150))))
        {
            int l_1173 = 0xDF2720A8L;
            unsigned l_1229 = 9UL;
            int *l_1232[2][3][1];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1232[i][j][k] = &g_576[1];
                }
            }
            for (l_1145 = 4; (l_1145 <= 27); l_1145++)
            {
                unsigned char ***l_1164 = &g_267;
                unsigned char * const * const **l_1168[1];
                unsigned *l_1174 = &g_449;
                short ***l_1189 = &l_1188[1];
                int l_1192[3][9] = {{0x3A7FB5D9L,0x0C09AB91L,0x0C09AB91L,0x3A7FB5D9L,0x2FA1E403L,0x42129983L,0x3A7FB5D9L,0x42129983L,0x2FA1E403L},{0x3A7FB5D9L,0x0C09AB91L,0x0C09AB91L,0x3A7FB5D9L,0x2FA1E403L,0x42129983L,0x3A7FB5D9L,0x42129983L,0x2FA1E403L},{0x3A7FB5D9L,0x0C09AB91L,0x0C09AB91L,0x3A7FB5D9L,0x2FA1E403L,0x42129983L,0x3A7FB5D9L,0x42129983L,0x2FA1E403L}};
                unsigned short * const *l_1199 = &g_236;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1168[i] = &l_1165;
                if ((safe_add_func_uint8_t_u_u(((-2L) >= (safe_mod_func_uint32_t_u_u(((*l_1174) = (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_7, p_7)), (safe_add_func_uint32_t_u_u((l_1164 != (g_1169 = l_1165)), (((*g_1171) <= 7L) ^ ((-6L) <= ((l_1173 < 0x20L) >= 0x8861L)))))))), l_1173))), (-1L))))
                {
                    short **l_1184 = (void*)0;
                    short ***l_1183 = &l_1184;
                    short ***l_1186 = (void*)0;
                    short ****l_1185[2][2] = {{&l_1186,&l_1186},{&l_1186,&l_1186}};
                    unsigned l_1227 = 4294967295UL;
                    int i, j;
                    if ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_1141) |= (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((l_1173 | (l_1183 != (l_1189 = (l_1187[6][4] = &l_1184)))), 7)), ((*l_1174) = 0x109EC2C1L)))) | (safe_rshift_func_int8_t_s_u(l_1192[2][4], p_7))), 7)), ((**g_1170) || ((p_7 ^ ((((safe_mul_func_uint8_t_u_u((((p_9 | p_7) ^ 65533UL) || l_1192[2][4]), 0xC3L)) != (*g_236)) < (*g_1171)) != 0UL)) <= 0x9670L)))))
                    {
                        unsigned short * const **l_1225[10] = {&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199};
                        int i;
                        (*l_1142) = (-1L);
                        (*l_1142) = (p_7 || p_7);
                        l_1226 = (l_1200 = l_1199);
                        (*p_8) = l_1227;
                    }
                    else
                    {
                        (*l_1143) = func_11(p_9, l_1228[3][4][3], p_8, (*l_1142));
                        l_1229 &= (*p_8);
                    }
                }
                else
                {
                    for (g_113 = 0; (g_113 == 54); ++g_113)
                    {
                        unsigned short * const **l_1236 = (void*)0;
                        unsigned short * const *** const l_1235 = &l_1236;
                        unsigned short * const *** const *l_1234 = &l_1235;
                        unsigned short * const *** const **l_1233 = &l_1234;
                        char *l_1237 = &g_173[2];
                        int l_1242 = 0L;
                        (*g_125) = func_11((**g_1170), l_1232[0][0][0], p_8, ((*l_1237) = ((*g_236) < (l_1192[0][1] = (((*l_1233) = (void*)0) == &g_495[1][0][3])))));
                        (*l_1143) = func_11(((((safe_lshift_func_uint16_t_u_u((((((((p_7 != 6UL) == (safe_lshift_func_int8_t_s_u(p_7, l_1242))) & p_7) <= p_7) && p_9) & (1L || ((+(8L >= 0x02L)) != p_9))) < 0L), 15)) > l_1243[1][2]) && p_9) >= 0x8558L), &l_1242, &l_1242, (*g_1073));
                        (*p_8) |= (safe_rshift_func_uint16_t_u_s(((0L == (safe_lshift_func_uint16_t_u_u((*g_236), 12))) <= ((safe_mod_func_uint32_t_u_u(((((*l_1174) = p_7) & (((*g_1171) |= p_9) && (safe_mod_func_int16_t_s_s(l_1242, (l_1252 &= 65533UL))))) < p_9), (((void*)0 != &l_1189) || 0L))) == p_9)), (*g_779)));
                        if ((*p_8))
                            break;
                    }
                }
            }
            (*p_8) = (*p_8);
        }
        else
        {
            int *l_1257 = &l_1145;
            for (g_1215 = 5; (g_1215 <= 3); g_1215--)
            {
                const int *l_1255[3];
                unsigned *l_1256 = &l_1252;
                int i;
                for (i = 0; i < 3; i++)
                    l_1255[i] = (void*)0;
                l_1255[2] = p_8;
                (*g_125) = l_1257;
                if ((*p_8))
                    break;
            }
        }
        g_61 |= ((*p_8) = (*l_1142));
        (*l_1143) = (l_1258 = l_1228[1][3][6]);
    }
    return &g_576[3];
}







static int * func_11(unsigned char p_12, int * p_13, int * const p_14, const char p_15)
{
    int *l_1130[5] = {&g_17,&g_17,&g_17,&g_17,&g_17};
    int i;
    return l_1130[3];
}







static int * func_18(int p_19, char p_20, int * p_21, unsigned char p_22, unsigned char p_23)
{
    unsigned short l_1126 = 65535UL;
    int *l_1129[4][1][7] = {{{&g_824[6][1],&g_824[6][1],&g_824[6][1],&g_824[6][1],&g_824[6][1],&g_824[6][1],&g_824[6][1]}},{{&g_474,&g_474,&g_824[4][0],&g_824[4][0],&g_474,&g_474,&g_824[4][0]}},{{&g_17,&g_824[6][1],&g_17,&g_824[6][1],&g_17,&g_824[6][1],&g_17}},{{&g_474,&g_824[4][0],&g_824[4][0],&g_474,&g_474,&g_824[4][0],&g_824[4][0]}}};
    int i, j, k;
    p_19 ^= (0x2456D3E0L >= (((safe_mul_func_uint16_t_u_u(0x9AE0L, (l_1126 < (*p_21)))) & l_1126) >= (safe_sub_func_uint8_t_u_u(255UL, l_1126))));
    (*g_125) = &p_19;
    return l_1129[1][0][0];
}







static unsigned short func_26(const int p_27, short p_28)
{
    const int *l_47 = &g_17;
    int *l_53 = (void*)0;
    int **l_54 = &l_53;
    int *l_55 = (void*)0;
    int **l_57[6][7] = {{&g_56,&g_56,(void*)0,&g_56,&g_56,(void*)0,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,(void*)0,&g_56,&g_56,(void*)0,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56,&g_56}};
    unsigned *l_448 = &g_449;
    unsigned *l_450 = &g_451;
    char *l_1079 = &g_533;
    int l_1082[3];
    char l_1088 = 1L;
    short l_1097[7] = {0xBC48L,0xBC48L,0L,0xBC48L,0xBC48L,0L,0xBC48L};
    unsigned char l_1107 = 1UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1082[i] = 9L;
    if (((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((*l_1079) = ((*g_1073) = (func_34(func_36(func_41(p_27, l_47, func_48(&g_17, ((*l_54) = l_53), l_55, (g_56 = g_56)), ((*l_450) &= ((*l_448) &= (g_404[0] >= p_28))), g_404[0]), p_27, p_27, g_404[0])) & p_27))), p_27)), p_28)) >= p_28) < g_404[0]) || 0x5A13L))
    {
        char *l_1083 = &g_1084;
        int l_1098[1][10] = {{(-1L),8L,8L,(-1L),8L,8L,(-1L),8L,8L,(-1L)}};
        int l_1100 = 7L;
        unsigned short l_1120 = 0x1863L;
        int i, j;
        if ((safe_sub_func_uint32_t_u_u(l_1082[2], func_34(((*g_1073) = (2L == (func_34(p_28) | ((*l_1083) = g_471[7][6]))))))))
        {
            unsigned char *l_1087 = &g_169;
            unsigned char *l_1089 = &g_207;
            unsigned char *l_1096 = &g_111;
            int l_1099 = 0x7C141382L;
            int l_1108 = 0xB24906A4L;
            char l_1109 = 0xDEL;
            l_1100 ^= ((***g_234) && func_36(func_41(((*g_779) = ((safe_mul_func_int16_t_s_s((((*l_1087) = p_28) ^ ((*l_1089) ^= (l_1088 && 1L))), (((g_824[3][1] &= 0L) > (((p_28 || (safe_lshift_func_int8_t_s_u(((*l_1079) = 0x63L), ((*l_1096) ^= ((**g_235) ^ (~((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_28, p_27)), 0x82L)) & 65535UL))))))) < 0xF8L) < l_1097[0])) | p_27))) | 0xD8L)), &g_65, l_1098[0][3], l_1099, p_28), l_1099, l_1098[0][5], p_27));
            l_1108 |= (((safe_mul_func_int8_t_s_s(p_27, l_1099)) < 0x9D53L) == (***g_234));
            g_576[4] |= l_1109;
        }
        else
        {
            l_1098[0][3] = (safe_rshift_func_uint8_t_u_s(249UL, 7));
            l_1100 = 0x708AD3EBL;
        }
        g_65 ^= ((safe_mul_func_uint16_t_u_u(0x1362L, ((***g_234) != l_1098[0][3]))) | ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*g_1073) > (safe_sub_func_uint32_t_u_u(((g_17 = p_28) <= p_27), (7UL && (1L ^ l_1120))))), 4)), 1)) | p_27));
        return p_27;
    }
    else
    {
        unsigned l_1121 = 0xA11D355EL;
        l_1121 = p_27;
    }
    g_576[1] = p_27;
    return p_28;
}







static int func_34(char p_35)
{
    int *l_995 = &g_576[5];
    unsigned short *l_1015 = &g_113;
    int ****l_1030 = &g_909;
    unsigned char **l_1050 = (void*)0;
    const unsigned short l_1068 = 0x2B6DL;
    char *l_1069[1];
    char **l_1070 = &l_1069[0];
    char *l_1071 = (void*)0;
    char **l_1072[10] = {&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071};
    int l_1076[10];
    int l_1077 = 4L;
    unsigned short l_1078[2];
    int i;
    for (i = 0; i < 1; i++)
        l_1069[i] = &g_173[1];
    for (i = 0; i < 10; i++)
        l_1076[i] = 0xF8FF3D41L;
    for (i = 0; i < 2; i++)
        l_1078[i] = 0xEA1CL;
lbl_1039:
    (*l_995) |= 0xEA0C710DL;
    for (g_65 = (-23); (g_65 == (-30)); g_65 = safe_sub_func_uint16_t_u_u(g_65, 9))
    {
        unsigned short l_1000 = 0x1262L;
        const unsigned * const * const *l_1011 = (void*)0;
        unsigned short *l_1012 = &g_454[0][1][1];
        char *l_1023 = &g_173[2];
        unsigned short l_1031 = 0xB17AL;
        unsigned char *l_1032 = &g_169;
        short l_1033 = 1L;
        int * const l_1055 = &g_474;
        (*l_995) = (((*l_1012) = (((safe_mul_func_uint8_t_u_u((0x508DA541L == ((l_1000 | ((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((*l_995) & (4294967295UL && 0xAB5719D5L)), l_1000)), (((((((**g_235) = (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x3AL, (l_1000 | (l_1011 == l_1011)))), (*l_995))), g_169))) <= 65535UL) > (*l_995)) & (*l_995)) | (*l_995)) > p_35))) == 8L)) > (*g_779))), g_824[6][1])) & (*l_995)) > p_35)) >= (*l_995));
        g_824[4][3] = (safe_mul_func_uint8_t_u_u(g_10, (((((*g_235) = (*g_235)) != l_1015) != ((0xBE39L < ((safe_lshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_1000, 0)), ((*l_1023) = (safe_unary_minus_func_int32_t_s(p_35))))) >= p_35) == 0x7EL), ((((safe_lshift_func_int8_t_s_s(((*l_995) = (safe_sub_func_uint8_t_u_u((g_207 = ((*l_1032) = (safe_mul_func_int8_t_s_s(((l_1030 == (void*)0) <= p_35), l_1031)))), p_35))), p_35)) != p_35) <= p_35) && p_35))) & 0xBB1877CBL)) == p_35)) < 65535UL)));
        if (((l_1033 = ((*l_995) |= l_1000)) != 0L))
        {
            int l_1034 = (-8L);
            (*l_995) ^= (-7L);
            return l_1034;
        }
        else
        {
            unsigned l_1052[6][8][5] = {{{4294967287UL,4294967295UL,0x1EBE97C0L,4UL,0x7E75AF10L},{5UL,4294967288UL,4UL,0xF50779DAL,4UL},{1UL,0UL,4294967295UL,4294967295UL,1UL},{0x3FF68A29L,0xD0BCB462L,4294967295UL,0xACA17877L,0x5F3E1515L},{4UL,4294967295UL,0UL,3UL,4294967287UL},{4UL,0xD0BCB462L,0xCD0C5059L,0x872C99C5L,9UL},{0xF0D97B4BL,0UL,0UL,0UL,1UL},{0x1F0755DEL,0x25434BF3L,5UL,0x25434BF3L,0xEA70CC9BL}},{{1UL,4294967295UL,0x36F2E6FCL,4294967291UL,4UL},{0x8C4F463BL,4294967288UL,1UL,0xCAB9F8A3L,5UL},{4294967287UL,3UL,0UL,4294967295UL,4UL},{0x1F0755DEL,0xCAB9F8A3L,4294967289UL,4294967295UL,0xEA70CC9BL},{4UL,0UL,0xE870FA1CL,1UL,4294967287UL},{0xCD0C5059L,0xACA17877L,0xCD0C5059L,0x9F4CDA68L,1UL},{4294967291UL,0x7E75AF10L,0x99AFF91EL,4294967295UL,1UL},{0x8FC40339L,0x25434BF3L,0x01CF0520L,0x872C99C5L,0x3FF68A29L}},{{4294967295UL,4294967295UL,0x99AFF91EL,4294967291UL,0xF0D97B4BL},{4294967294UL,0x0F149897L,0xCD0C5059L,0xF50779DAL,0x8C4F463BL},{4294967287UL,4294967291UL,0xE870FA1CL,0xE870FA1CL,4294967291UL},{0x3FF68A29L,0x3A4F81EAL,4294967289UL,0x2DB4A861L,0x4A4B987BL},{3UL,4294967295UL,0UL,0UL,4294967287UL},{9UL,0xF50779DAL,1UL,0x25434BF3L,9UL},{3UL,0x7E75AF10L,0x36F2E6FCL,4294967295UL,4294967295UL},{0x3FF68A29L,4294967288UL,5UL,0x872C99C5L,8UL}},{{4294967287UL,0UL,0xE393DBE6L,0x7E75AF10L,4UL},{4294967294UL,0x872C99C5L,4UL,4294967295UL,9UL},{4294967295UL,0x7E75AF10L,4294967295UL,0xE870FA1CL,0UL},{0x1F0755DEL,0x2DB4A861L,0x1E46E3EAL,0xCAB9F8A3L,0x5F3E1515L},{3UL,0xC4D64884L,0xE870FA1CL,0xF0D97B4BL,1UL},{4294967294UL,0xD0BCB462L,1UL,0x0F149897L,1UL},{1UL,1UL,1UL,0UL,4294967295UL},{8UL,0x25434BF3L,0x1E46E3EAL,0x188E41CDL,0x4A4B987BL}},{{0UL,0UL,0x1EBE97C0L,4294967291UL,3UL},{1UL,0x25434BF3L,9UL,4294967295UL,4UL},{4294967287UL,1UL,4294967295UL,4294967295UL,0UL},{0x8FC40339L,0xD0BCB462L,4294967289UL,0xD0BCB462L,0x8FC40339L},{0x7E75AF10L,0xC4D64884L,9UL,3UL,4294967287UL},{1UL,0x2DB4A861L,4UL,0x0F149897L,0x8C4F463BL},{0xF0D97B4BL,0x7E75AF10L,0x4F8F536AL,0xC4D64884L,4294967287UL},{8UL,0x0F149897L,0x7BAF2544L,0x872C99C5L,0x8FC40339L}},{{4294967287UL,4294967295UL,0x1EBE97C0L,0UL,0UL},{4294967294UL,8UL,4294967294UL,0xCAB9F8A3L,4UL},{1UL,0xF0D97B4BL,0xE870FA1CL,0xC4D64884L,3UL},{0x1F0755DEL,0xD0BCB462L,5UL,0x3A4F81EAL,0x4A4B987BL},{1UL,9UL,0xE870FA1CL,3UL,4294967295UL},{5UL,0xF50779DAL,9UL,0x0F149897L,5UL},{3UL,0UL,0x99AFF91EL,9UL,1UL},{8UL,0x872C99C5L,5UL,4294967288UL,0x3FF68A29L}}};
            int i, j, k;
            for (g_169 = 0; (g_169 > 44); g_169++)
            {
                const int *l_1040 = &g_824[4][3];
                for (g_111 = (-26); (g_111 == 28); ++g_111)
                {
                    short l_1049[8][6] = {{1L,6L,0L,(-2L),0x7CB2L,(-2L)},{0xA7F3L,(-5L),0xA7F3L,0xFD87L,5L,6L},{0x0781L,0xDDE4L,0x8788L,0xCDD8L,0x8906L,5L},{7L,(-2L),0xFD87L,0xCDD8L,0xCDD8L,0xFD87L},{0x0781L,0x0781L,(-5L),0xFD87L,0x8788L,0xA7F3L},{0xA7F3L,0x7CB2L,0x0781L,(-2L),0xDDE4L,(-5L)},{1L,0xA7F3L,0x0781L,7L,0x0781L,0xA7F3L},{0x8906L,7L,(-5L),(-1L),0x40E6L,0xFD87L}};
                    int l_1051 = 0xAE40094BL;
                    int i, j;
                    if (g_10)
                        goto lbl_1039;
                    for (g_362 = 0; (g_362 <= 3); g_362 += 1)
                    {
                        int i, j;
                        g_824[(g_362 + 2)][g_362] = (*l_995);
                        (*g_125) = l_1040;
                    }
                    l_1052[4][5][2] |= (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0UL, (safe_add_func_uint8_t_u_u((l_1049[0][0] = (*l_995)), ((void*)0 == l_1050))))), ((*g_779) ^= l_1051))), p_35));
                    for (g_474 = 0; (g_474 >= 29); g_474 = safe_add_func_uint16_t_u_u(g_474, 9))
                    {
                        int **l_1056 = &l_995;
                        (*g_125) = l_1040;
                    }
                }
                if ((*l_995))
                    break;
            }
            for (g_362 = 0; (g_362 < 24); g_362 = safe_add_func_int16_t_s_s(g_362, 5))
            {
                int l_1062 = 1L;
                for (g_80 = 0; (g_80 <= 49); g_80 = safe_add_func_uint16_t_u_u(g_80, 1))
                {
                    unsigned char l_1061 = 0xCAL;
                    if (l_1061)
                        break;
                    if (p_35)
                        continue;
                    if ((*l_1055))
                        continue;
                }
                if (p_35)
                {
                    int l_1063 = 7L;
                    if (l_1062)
                        break;
                    if (((*l_995) | l_1063))
                    {
                        return p_35;
                    }
                    else
                    {
                        int *l_1064 = &g_576[1];
                        (*g_125) = l_1064;
                        return l_1062;
                    }
                }
                else
                {
                    int l_1065[10] = {0xBC0F12CDL,0xBC0F12CDL,0x80B8AE1DL,0xBC0F12CDL,0xBC0F12CDL,0x80B8AE1DL,0xBC0F12CDL,0xBC0F12CDL,0x80B8AE1DL,0xBC0F12CDL};
                    int i;
                    (*l_995) = l_1065[9];
                    (*g_125) = (void*)0;
                    return p_35;
                }
            }
        }
    }
    (*l_995) = func_36(&l_1076[3], p_35, p_35, g_404[0]);
    return l_1078[1];
}







static char func_36(int * p_37, const unsigned p_38, unsigned short p_39, unsigned p_40)
{
    int l_575 = 0xA8BDB7FAL;
    int l_619 = 0x31A6136DL;
    unsigned short l_634 = 0UL;
    int l_638 = 0x5E577495L;
    int **l_717 = &g_56;
    unsigned short ** const * const l_732 = (void*)0;
    unsigned l_745 = 0xE07DF4D5L;
    unsigned *l_748[6][6] = {{&g_449,&g_451,&g_647,&g_647,&g_451,&g_449},{&g_451,&g_451,&g_451,&g_647,&g_449,&g_449},{&g_451,&g_647,(void*)0,&g_449,(void*)0,&g_647},{&g_451,&g_449,&g_449,&g_647,&g_451,&g_451},{&g_647,(void*)0,&g_449,&g_451,&g_451,&g_449},{(void*)0,(void*)0,&g_128,&g_647,&g_449,&g_451}};
    int *l_749 = &g_576[5];
    short *l_757 = (void*)0;
    const int **l_777[8][7][4] = {{{&g_126,&g_126,(void*)0,&g_126},{&g_126,(void*)0,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{(void*)0,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,(void*)0,&g_126},{(void*)0,&g_126,&g_126,&g_126},{&g_126,&g_126,(void*)0,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126},{&g_126,(void*)0,&g_126,&g_126},{&g_126,&g_126,(void*)0,&g_126},{&g_126,(void*)0,&g_126,&g_126},{&g_126,&g_126,&g_126,(void*)0},{&g_126,&g_126,(void*)0,&g_126},{(void*)0,(void*)0,(void*)0,&g_126}},{{(void*)0,(void*)0,&g_126,&g_126},{&g_126,&g_126,(void*)0,&g_126},{(void*)0,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,(void*)0,&g_126},{&g_126,&g_126,&g_126,(void*)0},{&g_126,(void*)0,(void*)0,&g_126}},{{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,(void*)0,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,(void*)0,&g_126},{&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126},{&g_126,(void*)0,&g_126,(void*)0},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126}},{{&g_126,(void*)0,&g_126,&g_126},{(void*)0,&g_126,&g_126,&g_126},{(void*)0,&g_126,&g_126,(void*)0},{&g_126,&g_126,&g_126,&g_126},{&g_126,(void*)0,(void*)0,&g_126},{(void*)0,&g_126,&g_126,&g_126},{(void*)0,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,(void*)0},{&g_126,(void*)0,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126},{(void*)0,&g_126,&g_126,&g_126}}};
    short l_791 = 0x2601L;
    int l_834 = 0xB037C95AL;
    int l_835 = 0x21AE320BL;
    const short **l_916 = (void*)0;
    unsigned short *l_948 = &g_113;
    unsigned char l_992 = 0UL;
    int i, j, k;
lbl_759:
    for (g_17 = (-22); (g_17 <= (-16)); g_17 = safe_add_func_int32_t_s_s(g_17, 6))
    {
        short l_569 = 1L;
        int l_582 = 0xDE5CAB97L;
        char l_733 = 0xF3L;
        int *l_734[10];
        int i;
        for (i = 0; i < 10; i++)
            l_734[i] = &g_61;
        if (((0xB84E7ED1L == (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u(p_39, 1L))))) & g_192))
        {
            const unsigned l_570 = 1UL;
            unsigned l_584 = 0x80F3C8EFL;
            int * const l_588 = &g_474;
            for (g_362 = 0; (g_362 <= 1); g_362 += 1)
            {
                int l_566[4][1];
                short **l_596 = (void*)0;
                short l_612 = 0L;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_566[i][j] = 5L;
                }
                if (((((g_17 || p_38) <= l_566[3][0]) <= (safe_lshift_func_int8_t_s_s(((l_569 < l_570) | (safe_rshift_func_uint16_t_u_s(((**g_235) = (0x24L <= (safe_lshift_func_int8_t_s_s(0xCBL, l_575)))), (l_570 || l_569)))), p_39))) | l_575))
                {
                    int *l_577 = &g_576[5];
                    (*l_577) = g_576[1];
                    for (p_40 = 0; (p_40 <= 1); p_40 += 1)
                    {
                        int i, j, k;
                        (*l_577) &= g_454[g_362][g_362][p_40];
                        (*l_577) = ((safe_rshift_func_int8_t_s_s(((void*)0 == &g_56), 0)) <= (p_39 && ((safe_lshift_func_int8_t_s_u(g_454[g_362][g_362][p_40], 7)) <= l_575)));
                        l_582 ^= p_40;
                    }
                    g_474 = p_39;
                }
                else
                {
                    short l_583 = 0L;
                    if (((l_570 ^ p_40) && l_570))
                    {
                        if (l_583)
                            break;
                        if (l_584)
                            continue;
                    }
                    else
                    {
                        int *l_587 = &g_65;
                        (*l_587) = (0x794C4F24L != (safe_rshift_func_uint8_t_u_s(0xEBL, 5)));
                        (*g_125) = l_588;
                        return p_40;
                    }
                }
                if (((p_38 >= (~(+(0UL || (+1L))))) != (*l_588)))
                {
                    for (p_40 = 0; (p_40 <= 1); p_40 += 1)
                    {
                        char l_591 = 0L;
                        (*l_588) = (-8L);
                        (*l_588) |= (safe_mod_func_int16_t_s_s(0xCCA1L, l_591));
                        (*l_588) |= g_81;
                        return g_404[0];
                    }
                }
                else
                {
                    unsigned l_601 = 4294967289UL;
                    short *l_610 = &g_469[3];
                    int *l_611 = &g_65;
                    for (g_65 = 0; (g_65 <= 1); g_65 += 1)
                    {
                        (*l_588) = l_575;
                        if (l_569)
                            break;
                    }
                    (*l_611) ^= ((*l_588) = ((p_39 = ((safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((l_596 == (void*)0) & ((*l_610) = (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((~((p_39 == l_575) > p_40)), p_40)), (l_601 != ((*g_236) = l_566[0][0])))) && (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_454[0][0][1], 0xB8L)), 5)), g_451)), p_40))) >= 7L))), l_575)) == 0xBDE1L), p_39)) ^ (-5L))) | p_40));
                    if (l_612)
                        continue;
                }
                (*g_125) = &g_576[4];
                (*g_125) = (void*)0;
                for (p_39 = 0; (p_39 <= 1); p_39 += 1)
                {
                    for (g_169 = 1; (g_169 <= 4); g_169 += 1)
                    {
                        int i, j, k;
                        if (g_454[(g_169 + 1)][p_39][p_39])
                            break;
                    }
                    for (l_584 = 0; (l_584 <= 1); l_584 += 1)
                    {
                        (*l_588) &= (g_576[1] = (-1L));
                        (*g_125) = (*g_125);
                    }
                }
            }
        }
        else
        {
            int *l_613 = &l_582;
            const char l_661 = 0xCFL;
            (*l_613) &= p_38;
            for (g_80 = 0; (g_80 <= 8); g_80 += 1)
            {
                int *l_618 = &g_61;
                int l_664 = (-10L);
            }
            (*g_125) = &l_619;
            if (((safe_add_func_uint8_t_u_u((l_638 ^= 2UL), ((void*)0 == &p_37))) < (safe_sub_func_int16_t_s_s((-6L), (***g_234)))))
            {
                char l_689 = 0x23L;
                int l_708 = 0xBCB135B7L;
                unsigned char * const l_711 = &g_169;
                if ((safe_lshift_func_uint16_t_u_s(l_689, 14)))
                {
                    (*g_125) = (*g_125);
                }
                else
                {
                    char l_692 = 8L;
                    int l_707 = 0xFC82D865L;
                    for (g_111 = 16; (g_111 == 9); --g_111)
                    {
                        (*l_613) = l_692;
                        (*l_613) = (l_692 && (p_38 ^ (0xBF5A88D7L == l_689)));
                        if ((**g_125))
                            continue;
                    }
                    if (((p_40 >= (safe_sub_func_uint32_t_u_u((l_689 & l_569), (**g_125)))) >= 0x09L))
                    {
                        unsigned l_697 = 0x12F74A39L;
                        char l_706 = 0x24L;
                        (*l_613) = (safe_add_func_int8_t_s_s(l_697, (l_638 == (l_582 && (l_707 = ((*g_126) || (8UL || (l_692 | (safe_mod_func_uint16_t_u_u((g_454[0][0][1] & (safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((p_38 && (safe_add_func_uint16_t_u_u(p_39, l_582))), 2)), l_706))), p_38))))))))));
                        return g_421[2][4];
                    }
                    else
                    {
                        if (l_692)
                            break;
                    }
                    l_708 |= (l_707 != 0x740FL);
                    for (l_569 = 5; (l_569 != 8); ++l_569)
                    {
                        int *l_712 = (void*)0;
                        (*g_125) = &l_708;
                        if ((*g_126))
                            break;
                        if ((*l_613))
                            break;
                        l_707 |= (((p_40 <= g_128) != (*l_613)) < ((void*)0 != l_711));
                    }
                }
                if ((safe_lshift_func_uint16_t_u_s(((g_576[1] = (*l_613)) == (safe_rshift_func_uint8_t_u_u(((*l_711) ^= p_39), 7))), 5)))
                {
                    (*g_125) = p_37;
                    (*l_613) = ((***g_234) || (l_717 == &p_37));
                    for (l_689 = 0; l_689 < 7; l_689 += 1)
                    {
                        for (g_111 = 0; g_111 < 5; g_111 += 1)
                        {
                            for (g_449 = 0; g_449 < 7; g_449 += 1)
                            {
                                g_495[l_689][g_111][g_449] = (void*)0;
                            }
                        }
                    }
                }
                else
                {
                    unsigned l_718 = 4294967295UL;
                    short *l_727 = &g_469[0];
                    const unsigned short **l_731 = (void*)0;
                    const unsigned short *** const l_730[1][10] = {{&l_731,&l_731,&l_731,&l_731,&l_731,&l_731,&l_731,&l_731,&l_731,&l_731}};
                    int i, j;
                    (*l_613) ^= (*g_126);
                    (*l_613) ^= ((g_449 > l_718) == ((!(((safe_rshift_func_int8_t_s_s((!g_471[3][6]), ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((*l_727) = (safe_rshift_func_int8_t_s_s((-10L), 0))), l_689)), l_689)) | (p_40 & g_10)))) <= p_38) < (*g_236))) <= 0xAED1L));
                    for (g_533 = 29; (g_533 > 15); g_533 = safe_sub_func_int8_t_s_s(g_533, 7))
                    {
                        (*l_717) = p_37;
                        if ((**g_125))
                            break;
                        (*l_613) = l_582;
                        return p_40;
                    }
                    for (g_111 = 0; (g_111 <= 4); g_111 += 1)
                    {
                        (*l_613) |= (&g_125 == &g_125);
                        (*g_125) = (*g_125);
                        (*l_613) = (l_730[0][2] != l_732);
                        (*l_613) = l_733;
                    }
                }
                if ((*l_613))
                    continue;
            }
            else
            {
                (*l_717) = p_37;
            }
        }
        l_734[3] = p_37;
        return p_38;
    }
    (*l_749) |= (safe_mul_func_uint8_t_u_u(l_575, (safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((**g_235) < (safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((l_575 != p_39), l_745)), 5UL))) > (safe_add_func_uint32_t_u_u((l_638 = p_39), g_474))), (g_81 & p_39))) >= 0x94C49BCCL), l_634))));
    if (((*l_749) || (*l_749)))
    {
        unsigned l_750[2];
        int *l_758 = &g_474;
        int i;
        for (i = 0; i < 2; i++)
            l_750[i] = 0x266E8090L;
        (*g_125) = p_37;
        (*g_125) = l_758;
    }
    else
    {
        short l_776 = 0x99B5L;
        int *l_781 = &g_474;
        if (g_449)
            goto lbl_759;
        for (p_40 = 0; (p_40 == 19); p_40 = safe_add_func_uint8_t_u_u(p_40, 9))
        {
            int **l_778[10];
            int i;
            for (i = 0; i < 10; i++)
                l_778[i] = &g_56;
            for (g_474 = (-3); (g_474 >= 1); g_474 = safe_add_func_int16_t_s_s(g_474, 9))
            {
                unsigned l_764 = 0x71A5D7CBL;
                int *l_765 = &g_61;
                (*l_765) = (l_764 ^= ((*l_749) = 8L));
            }
            for (g_474 = 0; (g_474 > 6); g_474 = safe_add_func_int8_t_s_s(g_474, 7))
            {
                unsigned short l_770 = 0UL;
                const int **l_780 = &g_126;
                char *l_782[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (g_533 = 0; (g_533 > (-16)); g_533 = safe_sub_func_int8_t_s_s(g_533, 8))
                {
                    if ((l_770 |= 0L))
                    {
                        char l_771 = 0L;
                        (*l_717) = p_37;
                        if (l_771)
                            continue;
                        (*l_749) &= (safe_lshift_func_uint16_t_u_u((0L >= (safe_rshift_func_uint8_t_u_s(0x16L, 4))), 14));
                        return l_776;
                    }
                    else
                    {
                        (*l_749) |= ((l_777[3][4][0] = &g_126) != l_778[7]);
                    }
                    (*l_749) |= ((void*)0 != p_37);
                }
                (*l_749) = ((0x352BL | l_770) <= (g_779 != (void*)0));
                (*l_749) = (g_61 && (g_173[2] = ((*l_749) < 4UL)));
            }
            (*g_125) = p_37;
        }
        (*g_125) = (void*)0;
    }
    for (g_451 = 0; (g_451 > 35); g_451 = safe_add_func_int32_t_s_s(g_451, 1))
    {
        int l_788[1];
        unsigned l_792 = 0xD258F41FL;
        unsigned short l_883[2];
        unsigned char ***l_896 = &g_267;
        int ***l_911 = (void*)0;
        char l_919 = 6L;
        unsigned short l_937[2];
        int *l_991 = (void*)0;
        int *l_993 = &g_576[4];
        int l_994 = (-7L);
        int i;
        for (i = 0; i < 1; i++)
            l_788[i] = 0x1890C85CL;
        for (i = 0; i < 2; i++)
            l_883[i] = 7UL;
        for (i = 0; i < 2; i++)
            l_937[i] = 65526UL;
        for (g_61 = 0; (g_61 <= 3); g_61 += 1)
        {
            unsigned short l_787 = 0xB6C1L;
            int l_803[5][5] = {{0x947B0721L,0x947B0721L,0x947B0721L,0x947B0721L,0x947B0721L},{(-1L),0xF0177ECAL,(-1L),0xF0177ECAL,(-1L)},{0x947B0721L,0x947B0721L,0x947B0721L,0x947B0721L,0x947B0721L},{(-1L),0xF0177ECAL,(-1L),0xF0177ECAL,(-1L)},{0x947B0721L,0x947B0721L,0x947B0721L,0x947B0721L,0x947B0721L}};
            unsigned char *l_812[1];
            unsigned char **l_811[7];
            int l_892 = 1L;
            unsigned short ***l_905 = &g_235;
            int i, j;
            for (i = 0; i < 1; i++)
                l_812[i] = &g_207;
            for (i = 0; i < 7; i++)
                l_811[i] = &l_812[0];
            (*l_749) ^= ((safe_mod_func_uint8_t_u_u(l_787, 0xF8L)) ^ l_788[0]);
        }
        p_37 = p_37;
        (*l_749) = (p_38 < 0x76L);
        l_994 ^= (safe_sub_func_int32_t_s_s(((255UL >= 0xE8L) > (*l_993)), p_39));
    }
    return g_449;
}







static int * func_41(short p_42, const int * p_43, int p_44, unsigned p_45, int p_46)
{
    int l_489 = 0xECF2B62EL;
    const int l_490 = 0x3C9B9288L;
    int *l_542 = (void*)0;
    short *l_546 = (void*)0;
    short ** const l_545 = &l_546;
    unsigned char l_552 = 0x39L;
    unsigned short ***l_557 = &g_235;
    int *l_559 = &g_61;
    const unsigned char *l_560 = &g_111;
    for (g_113 = 0; (g_113 <= 5); g_113 += 1)
    {
        unsigned l_460 = 0x452F02E2L;
        int l_473 = 0L;
        int *l_488 = &g_61;
        unsigned short *****l_496[5][3][9] = {{{&g_495[1][0][3],(void*)0,&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][2][5]},{&g_495[1][0][3],(void*)0,&g_495[1][2][5],&g_495[1][0][3],(void*)0,&g_495[2][2][1],&g_495[1][0][3],&g_495[1][0][3],&g_495[0][4][4]},{&g_495[5][3][6],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][2][5],&g_495[1][0][3],&g_495[1][2][5]}},{{&g_495[1][0][3],&g_495[4][2][5],&g_495[1][0][3],&g_495[1][0][3],&g_495[4][2][5],&g_495[1][0][3],(void*)0,&g_495[1][0][3],&g_495[1][0][3]},{&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[5][3][6],&g_495[1][2][2],&g_495[1][0][3],&g_495[1][0][3]},{&g_495[2][2][1],(void*)0,&g_495[1][0][3],&g_495[1][2][5],(void*)0,&g_495[1][0][3],(void*)0,&g_495[1][0][3],(void*)0}},{{&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][2][5],&g_495[1][0][3],&g_495[0][4][4]},{(void*)0,&g_495[1][2][5],&g_495[1][0][3],(void*)0,&g_495[1][0][3],&g_495[5][3][6],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3]},{&g_495[1][0][3],&g_495[0][4][1],(void*)0,&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],(void*)0}},{{&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],(void*)0,&g_495[1][0][3],&g_495[1][2][2],&g_495[1][2][5],&g_495[1][0][3]},{&g_495[1][0][3],&g_495[4][4][4],&g_495[1][0][3],(void*)0,&g_495[1][0][3],&g_495[2][2][1],&g_495[4][4][4],&g_495[1][0][3],&g_495[1][0][3]},{&g_495[0][4][4],&g_495[1][0][3],(void*)0,(void*)0,&g_495[1][0][3],(void*)0,(void*)0,&g_495[1][0][3],&g_495[4][2][5]}},{{&g_495[0][4][4],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][0][3],&g_495[2][2][1],&g_495[1][0][3],&g_495[1][0][3],(void*)0},{(void*)0,&g_495[1][0][3],(void*)0,&g_495[1][0][3],&g_495[1][2][5],(void*)0,&g_495[1][0][3],&g_495[1][2][2],&g_495[1][2][2]},{&g_495[0][4][4],&g_495[1][0][3],&g_495[1][0][3],&g_495[1][2][2],&g_495[1][0][3],&g_495[1][0][3],&g_495[0][4][4],&g_495[1][0][3],&g_495[1][2][2]}}};
        short l_515[10] = {0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL,0xFD4DL};
        unsigned char *l_536 = &g_207;
        unsigned l_547 = 0x3007EC2CL;
        int i, j, k;
        if (g_173[g_113])
        {
            char l_452 = 0x48L;
            unsigned short *l_453[6] = {&g_454[0][0][1],&g_454[0][0][1],&g_454[0][0][1],&g_454[0][0][1],&g_454[0][0][1],&g_454[0][0][1]};
            int l_455 = 0x97026E02L;
            int *l_461[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned l_475 = 0UL;
            int i;
            if (l_452)
                break;
            if (((l_452 > ((l_455 = p_45) && ((safe_lshift_func_uint16_t_u_u((l_455 = (safe_add_func_int16_t_s_s(g_173[g_113], 0L))), ((p_44 |= ((((l_452 >= (l_460 && 1UL)) < ((+(*p_43)) > (g_169 || (*p_43)))) >= p_45) == 1UL)) & 1L))) | (**g_235)))) | 65532UL))
            {
                for (g_64 = 6; (g_64 >= 0); g_64 -= 1)
                {
                    for (g_111 = 1; (g_111 <= 5); g_111 += 1)
                    {
                        g_17 = (*p_43);
                        return &g_65;
                    }
                    return &g_61;
                }
            }
            else
            {
                unsigned l_465 = 0xDEB1430CL;
                short l_487 = 8L;
                for (p_46 = 0; (p_46 <= 8); p_46 += 1)
                {
                    int l_472 = 0xFF210E48L;
                    char *l_483 = &l_452;
                    short *l_486 = &g_469[0];
                    for (l_452 = 8; (l_452 >= 0); l_452 -= 1)
                    {
                        unsigned short l_464 = 65535UL;
                        short *l_468 = &g_469[0];
                        short *l_470 = &g_471[3][6];
                        int l_476 = 0x87B92F76L;
                        int i;
                        (*g_125) = &l_455;
                        g_17 &= (safe_add_func_uint8_t_u_u(p_44, g_362));
                        p_44 &= l_464;
                        p_44 = (((p_45 <= (l_465 | ((l_476 = (g_61 ^ (((*l_468) = (safe_sub_func_int16_t_s_s(p_45, p_46))) < (((*l_470) = l_464) | (l_472 & (((p_45 || (g_474 = (l_473 = 0L))) | l_475) & 65526UL)))))) || g_81))) == p_46) != 65535UL);
                    }
                    if ((((safe_mod_func_uint32_t_u_u(0xF3D36BC6L, (safe_lshift_func_uint8_t_u_s(0xC5L, 0)))) < (safe_mul_func_uint16_t_u_u((l_460 < (~((((*l_483) |= g_173[2]) | 0x8CL) & (safe_sub_func_uint16_t_u_u(p_46, p_46))))), ((*l_486) = p_44)))) & l_487))
                    {
                        (*g_125) = l_488;
                        (*l_488) = (*p_43);
                        p_44 = 0x60D9BFE8L;
                        if (l_472)
                            continue;
                    }
                    else
                    {
                        return &g_61;
                    }
                }
            }
            (*l_488) = (((*l_488) != p_45) < (((((*l_488) == (l_489 = (g_454[4][0][1] = p_46))) <= g_64) <= (1UL | ((*l_488) <= (*l_488)))) ^ l_490));
            p_44 = l_489;
        }
        else
        {
            unsigned l_528 = 0x64A9A801L;
            int l_540[1];
            int i;
            for (i = 0; i < 1; i++)
                l_540[i] = 2L;
            if (((*l_488) = (*l_488)))
            {
                unsigned l_491 = 4294967295UL;
                int l_538[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_538[i] = 0xE03AE652L;
                (*l_488) = ((((((void*)0 != &l_488) | (((l_491 || p_44) == (*l_488)) >= (safe_add_func_uint16_t_u_u(((p_46 > (g_494 != l_496[0][1][7])) > p_44), 0x1087L)))) && p_42) || 0xB885L) != l_491);
                for (g_81 = 8; (g_81 >= 1); g_81 -= 1)
                {
                    int l_506 = 0L;
                    const unsigned char * const l_537 = &g_169;
                    int i;
                    if (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((0xFBCFL < g_173[g_113]), l_489)), (*g_236))), (((p_45 > (**g_235)) != (safe_unary_minus_func_int8_t_s(p_46))) >= 4294967295UL))) >= (l_506 = (safe_sub_func_uint16_t_u_u(p_45, 65535UL)))))
                    {
                        unsigned char *l_513 = (void*)0;
                        unsigned char *l_514 = (void*)0;
                        (*l_488) = (*l_488);
                        l_515[3] = (safe_rshift_func_uint16_t_u_s((g_173[g_113] && (g_169 &= (safe_sub_func_int8_t_s_s(((*l_488) ^ (safe_mod_func_int32_t_s_s((*p_43), g_469[0]))), p_46)))), 4));
                    }
                    else
                    {
                        char *l_531 = (void*)0;
                        char *l_532 = &g_533;
                        unsigned *l_539[9][9][3] = {{{&g_128,&g_451,&g_449},{&g_128,&g_449,&g_128},{&l_491,&g_128,(void*)0},{&g_128,&g_449,&g_128},{&g_449,&l_491,(void*)0},{&g_451,&g_451,(void*)0},{(void*)0,&g_451,&g_451},{(void*)0,(void*)0,(void*)0},{&g_128,(void*)0,&g_128}},{{(void*)0,(void*)0,(void*)0},{&g_449,&g_451,&g_451},{&g_451,(void*)0,(void*)0},{(void*)0,&g_449,&l_491},{&g_451,(void*)0,&g_449},{&g_128,&g_449,&l_491},{&g_451,&g_451,&l_491},{(void*)0,&l_491,&g_128},{&g_128,&g_451,&g_451}},{{&g_449,&g_128,&g_128},{(void*)0,&g_449,&g_451},{(void*)0,&g_451,&g_449},{&g_128,(void*)0,&g_449},{&g_128,&g_449,&g_449},{&g_449,&g_451,&g_451},{&g_128,&g_128,&g_128},{(void*)0,&g_449,&g_451},{(void*)0,&g_449,(void*)0}},{{&g_128,&g_128,(void*)0},{&g_128,&g_451,&g_449},{&l_491,&g_449,&g_449},{&g_451,(void*)0,&g_128},{&g_451,&g_451,&g_128},{&l_491,&g_449,&g_449},{(void*)0,&g_128,(void*)0},{(void*)0,&g_451,&g_128},{&g_128,&l_491,&l_491}},{{(void*)0,&g_451,&g_451},{&g_449,&g_449,(void*)0},{&g_128,(void*)0,&g_128},{&g_128,&g_449,&g_128},{&g_449,&l_491,&g_451},{&g_451,(void*)0,&g_451},{&g_451,&g_451,&l_491},{&g_451,&g_451,(void*)0},{&g_451,&g_451,(void*)0}},{{&g_449,&g_449,&g_449},{&g_451,&g_128,(void*)0},{&g_451,&g_128,(void*)0},{(void*)0,&g_128,(void*)0},{&g_451,&g_449,&g_451},{&l_491,&g_451,(void*)0},{&l_491,&g_449,&l_491},{(void*)0,&g_128,&l_491},{&g_451,&g_449,&g_451}},{{&l_491,&g_451,&g_128},{&l_491,&l_491,&g_128},{&g_449,&g_451,&g_128},{(void*)0,&g_451,&g_128},{&g_451,&g_128,&g_128},{&g_451,&g_449,&g_128},{&g_451,&l_491,&g_128},{&g_451,&l_491,&g_128},{&l_491,&l_491,&g_128}},{{&g_128,(void*)0,&g_128},{&g_449,(void*)0,&g_128},{&g_451,&g_451,&g_128},{&g_128,&l_491,&g_451},{(void*)0,&g_449,&l_491},{&g_451,&l_491,&l_491},{(void*)0,&g_451,(void*)0},{&g_128,(void*)0,&g_451},{&g_451,&g_449,(void*)0}},{{(void*)0,&g_451,(void*)0},{&g_128,(void*)0,(void*)0},{(void*)0,&l_491,&g_449},{&g_128,&g_449,(void*)0},{&g_128,&g_451,&g_128},{&g_128,&g_128,&l_491},{&l_491,&g_451,(void*)0},{&g_451,&g_449,&g_128},{&g_449,&g_449,&g_449}}};
                        int *l_541 = &l_473;
                        int i, j, k;
                        (*l_541) |= (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u((**g_235), (safe_sub_func_int8_t_s_s((((p_46 > 0xDEL) || (l_540[0] = ((2UL != (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_536) ^= (safe_sub_func_int32_t_s_s(l_528, ((g_173[2] & g_17) == ((l_506 &= (safe_sub_func_uint8_t_u_u((((*l_532) = l_528) <= (safe_sub_func_int32_t_s_s(((*l_488) = ((l_538[0] ^= ((l_536 != l_537) & g_469[2])) && g_65)), p_44))), 1UL))) & 4294967291UL))))), 0)) ^ l_528), p_46))) && l_489))) >= g_173[g_113]), g_469[0])))), g_474));
                    }
                    (*l_488) = l_490;
                    (*l_488) = l_538[0];
                    for (l_528 = 0; (l_528 <= 8); l_528 += 1)
                    {
                        return l_542;
                    }
                }
                (*l_488) &= (*p_43);
            }
            else
            {
                (*l_488) = (*p_43);
            }
            (*l_488) &= (safe_mul_func_int16_t_s_s(((void*)0 == l_545), (-1L)));
        }
        for (p_45 = 1; (p_45 <= 8); p_45 += 1)
        {
            unsigned short *l_551[10] = {&g_454[0][1][1],&g_113,&g_113,&g_454[0][1][1],&g_113,&g_113,&g_454[0][1][1],&g_113,&g_113,&g_454[0][1][1]};
            int l_558 = (-1L);
            int i;
            for (l_460 = 1; (l_460 <= 8); l_460 += 1)
            {
                unsigned short *l_550 = &g_113;
                (*l_488) ^= l_547;
                (*l_488) &= (((0x07L != ((void*)0 == (*l_545))) != ((l_552 = (safe_lshift_func_uint16_t_u_u(1UL, (!(((*g_235) = l_550) != l_551[2]))))) ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_45, 5)), (((void*)0 == l_557) ^ 0x2521L))))) ^ l_558);
            }
            p_43 = &p_44;
            return l_542;
        }
        return &g_61;
    }
    (*l_559) |= l_490;
    (*l_559) |= (&l_552 == l_560);
    return &g_61;
}







static int func_48(const int * const p_49, int * p_50, int * p_51, int * p_52)
{
    int ** const l_68 = (void*)0;
    short l_82 = 0L;
    int *l_115 = &g_64;
    const unsigned char *l_132 = &g_111;
    int l_138 = 4L;
    int l_149[9] = {0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L,0xD8FF0D07L};
    unsigned short l_215 = 0x03DDL;
    unsigned short ****l_237 = &g_234;
    unsigned short ***l_238 = &g_235;
    unsigned l_239 = 0xBC7C8A45L;
    unsigned char *l_240 = &g_111;
    short l_255[5][4] = {{0xB6CCL,0x1098L,0xB6CCL,0xB6CCL},{0x1098L,0x1098L,0x5B51L,0x1098L},{0x1098L,0xB6CCL,0xB6CCL,0x1098L},{0xB6CCL,0x1098L,0xB6CCL,0xB6CCL},{0x1098L,0x1098L,0x5B51L,0x1098L}};
    int l_307 = 0xB6B8FFD3L;
    short * const * const l_324[1][3] = {{(void*)0,(void*)0,(void*)0}};
    int **l_375 = &l_115;
    int i, j;
lbl_254:
    for (g_17 = 0; (g_17 > (-18)); g_17 = safe_sub_func_uint8_t_u_u(g_17, 6))
    {
        char l_60[10] = {0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L};
        int *l_62 = (void*)0;
        int l_79 = 0x8FF013ECL;
        int i;
        for (g_61 = 8; (g_61 >= 2); g_61 -= 1)
        {
            int **l_63[6][3] = {{&l_62,&l_62,&l_62},{&g_56,&g_56,&g_56},{&l_62,&l_62,&l_62},{&g_56,&g_56,&g_56},{&l_62,&l_62,&l_62},{&g_56,&g_56,&g_56}};
            unsigned l_109 = 0x37768238L;
            unsigned short *l_166 = &g_113;
            unsigned short * const *l_165 = &l_166;
            unsigned char *l_172 = &g_169;
            int *l_174 = &g_65;
            int i, j;
            g_56 = l_62;
            for (g_64 = 2; (g_64 >= 0); g_64 -= 1)
            {
                int l_78 = (-1L);
                short *l_97 = &l_82;
                unsigned l_120 = 4294967290UL;
                const unsigned short l_155 = 65529UL;
                unsigned char *l_168 = &g_169;
                int i;
                for (g_65 = 2; (g_65 >= 0); g_65 -= 1)
                {
                    unsigned short l_73[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_73[i] = 65531UL;
                    g_81 &= ((safe_add_func_int8_t_s_s((-1L), 0xD7L)) || ((&l_62 != l_68) || (g_80 &= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((l_60[(g_65 + 6)] ^ l_73[1]) & g_64), (+(safe_mod_func_uint8_t_u_u(((l_79 &= (safe_add_func_int8_t_s_s((l_78 != (0x34L & l_78)), g_17))) && 0x8B1CA070L), l_78))))), g_10)))));
                    return l_82;
                }
            }
            if (l_60[g_61])
                break;
        }
        (*g_125) = (*g_125);
    }
    (*g_125) = &l_149[7];
    if (((*g_126) ^ l_215))
    {
        (*p_52) &= 1L;
    }
    else
    {
        return (*l_115);
    }
    if (((safe_sub_func_uint8_t_u_u(g_65, (g_169 = (safe_mul_func_int8_t_s_s((*l_115), (safe_lshift_func_uint16_t_u_u((*l_115), 12))))))) != ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_207, 5)), (((safe_lshift_func_uint16_t_u_u(g_207, g_80)) >= (safe_add_func_int8_t_s_s(g_128, ((*l_240) = ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*l_237) = g_234) != l_238), (*l_115))), l_239)) && g_111))))) && (*l_115)))) == 0UL) != (*l_115)) > (*l_115))))
    {
        unsigned char l_241 = 0x98L;
        return l_241;
    }
    else
    {
        unsigned short l_256 = 0x8CB6L;
        unsigned char *l_274 = (void*)0;
        int l_319 = 1L;
        unsigned l_325 = 4294967291UL;
        const short *l_401 = &l_255[3][3];
        const unsigned short * const *l_412 = (void*)0;
        const unsigned short * const **l_411[3];
        const unsigned short * const ***l_410[3];
        const unsigned short * const ****l_409[6][6] = {{&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0]},{&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0]},{&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0]},{&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0]},{&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0]},{&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0],&l_410[0]}};
        int l_433 = 0xB9A80423L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_411[i] = &l_412;
        for (i = 0; i < 3; i++)
            l_410[i] = &l_411[0];
        (*g_125) = (void*)0;
        for (g_80 = 0; (g_80 != 3); g_80++)
        {
            short l_248 = (-1L);
            const unsigned short **l_253 = (void*)0;
            if (((safe_lshift_func_int16_t_s_u(g_192, 2)) || (*l_115)))
            {
                for (g_65 = (-17); (g_65 == 9); ++g_65)
                {
                    return (*p_49);
                }
                (*p_52) = (*p_52);
                if (l_248)
                {
                    const int **l_249 = &g_126;
                    int **l_250 = &g_56;
                    (*l_249) = p_49;
                    (*g_125) = (*g_125);
                    (*g_125) = ((*l_250) = p_51);
                    for (g_192 = 2; (g_192 <= 8); g_192 += 1)
                    {
                        int i;
                        l_149[g_192] = (!(l_149[g_192] > (safe_add_func_int16_t_s_s(((void*)0 != l_253), 0x0573L))));
                    }
                }
                else
                {
                    if (g_128)
                        goto lbl_254;
                    (*l_115) = (*p_52);
                }
            }
            else
            {
                (*l_115) |= l_255[4][0];
            }
            for (g_169 = 0; (g_169 <= 5); g_169 += 1)
            {
                short l_259 = 1L;
                int l_264 = 0L;
                if ((*p_52))
                {
                    unsigned short *l_257 = &l_256;
                    int l_260 = 0xC5E243C7L;
                    (*p_52) &= (l_256 && l_248);
                    for (l_248 = 3; (l_248 <= 8); l_248 += 1)
                    {
                        unsigned short *l_258 = &l_215;
                        int i;
                        (*p_52) = l_149[(g_169 + 3)];
                        l_259 |= (l_257 == l_258);
                        (*g_125) = &l_149[(g_169 + 3)];
                    }
                    (*l_115) = l_260;
                }
                else
                {
                    unsigned *l_261[6] = {&g_128,&g_128,&g_128,&g_128,&g_128,&g_128};
                    int l_262 = 0L;
                    int l_263 = 0x762E7AD9L;
                    int i;
                    l_263 |= (((*p_52) = ((*l_115) = l_256)) & (l_262 = l_259));
                    l_264 = (l_263 |= (l_259 | (*p_49)));
                    (*p_52) = (safe_mod_func_int32_t_s_s((&l_132 == g_267), (g_128 = (((*l_115) > (safe_sub_func_uint16_t_u_u(((g_192 < (safe_lshift_func_int8_t_s_s((l_256 || ((safe_lshift_func_uint16_t_u_s((***g_234), g_173[2])) != ((***g_234) != ((void*)0 != l_274)))), 0))) || 9UL), (***g_234)))) && (*l_115)))));
                    if ((((*g_236) = ((*l_115) = (l_263 &= (***g_234)))) <= l_262))
                    {
                        unsigned l_275 = 0UL;
                        int l_276 = 0x8EEA1103L;
                        (*l_115) = ((((l_276 = l_275) & l_263) || l_256) || (0L == l_259));
                        (*l_115) = (safe_rshift_func_uint8_t_u_s((9L != l_256), g_207));
                    }
                    else
                    {
                        int i;
                        (*p_52) |= (safe_mul_func_int8_t_s_s(0L, (g_173[g_169] = (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((*l_115), 10)), (0xB8L == g_80))))));
                    }
                }
                (*g_125) = (*g_125);
                (*g_125) = p_50;
                if (l_248)
                    continue;
            }
        }
        if ((l_256 <= (*l_115)))
        {
            short *l_288 = (void*)0;
            short **l_287 = &l_288;
            int l_305 = 0xBB0FE6DBL;
            const int *l_327[4];
            unsigned l_348[6][9];
            int l_420 = 1L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_327[i] = &g_17;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 9; j++)
                    l_348[i][j] = 0UL;
            }
            if ((safe_sub_func_uint16_t_u_u((+(0UL <= g_65)), (((*l_287) = g_236) != (void*)0))))
            {
                unsigned char l_291 = 9UL;
                const unsigned short l_314 = 65535UL;
                char l_326 = 0xE2L;
                short l_340 = 4L;
                for (g_111 = 18; (g_111 < 56); ++g_111)
                {
                    int l_294 = 0x2399034FL;
                    if (l_291)
                    {
                        short *l_306 = &l_255[4][0];
                        char *l_312[3];
                        int l_313 = (-1L);
                        int i;
                        for (i = 0; i < 3; i++)
                            l_312[i] = (void*)0;
                        (*l_115) &= ((safe_mul_func_uint16_t_u_u((**g_235), (((**g_235) < l_294) > (((safe_add_func_int32_t_s_s((*p_52), g_128)) >= (l_256 != ((*l_306) = (safe_rshift_func_uint8_t_u_u(l_256, (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0xB0L, ((safe_mod_func_int32_t_s_s((l_291 > 0xE3B7B518L), l_305)) == l_291))), l_256))))))) != 4UL)))) < l_307);
                        (*p_52) = (safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((254UL > (l_313 = g_192)) <= l_314), (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s((l_319 = l_305), l_305)) && (safe_add_func_int16_t_s_s(l_305, (((*l_115) == (g_322[1] != l_324[0][2])) <= (**g_235))))) == l_325), l_305)))), l_326));
                        (*l_115) = (-4L);
                        (*g_125) = p_52;
                    }
                    else
                    {
                        l_327[1] = (*g_125);
                        (*p_52) = (*p_52);
                        (*l_115) = (l_294 | (g_111 ^ g_80));
                    }
                    g_64 &= (*p_49);
                    for (g_64 = (-13); (g_64 >= 14); g_64 = safe_add_func_uint8_t_u_u(g_64, 7))
                    {
                        (*g_125) = p_51;
                        return (*p_49);
                    }
                }
                for (g_128 = 0; (g_128 <= 52); g_128 = safe_add_func_uint16_t_u_u(g_128, 7))
                {
                    short l_332 = 0xA876L;
                    return l_332;
                }
                for (l_256 = (-5); (l_256 > 42); l_256++)
                {
                    int l_337[8] = {0x8289FCA1L,0x8289FCA1L,0x8289FCA1L,0x8289FCA1L,0x8289FCA1L,0x8289FCA1L,0x8289FCA1L,0x8289FCA1L};
                    int i;
                    l_340 = (safe_lshift_func_uint8_t_u_u(l_337[3], (safe_lshift_func_uint8_t_u_u(l_314, 6))));
                    (*p_52) = (65529UL != (+((void*)0 != &l_340)));
                    for (g_207 = 0; (g_207 != 13); g_207++)
                    {
                        const char l_343 = (-1L);
                        (*l_115) = l_343;
                        (*l_115) = 0x0D990099L;
                        l_348[3][4] = (((safe_lshift_func_uint8_t_u_s((l_319 = l_337[3]), 3)) > (safe_rshift_func_int16_t_s_s(l_343, 8))) != l_343);
                        if ((*p_49))
                            continue;
                    }
                    (*l_115) = ((*l_115) == (((safe_rshift_func_int16_t_s_s((*l_115), 4)) >= l_256) < g_192));
                }
            }
            else
            {
                unsigned short l_358 = 0x53C2L;
                char *l_388[4][6][5] = {{{&g_173[0],&g_173[2],&g_173[1],&g_173[2],&g_173[1]},{&g_173[1],&g_173[1],&g_173[5],&g_173[5],&g_173[2]},{&g_173[1],&g_173[2],&g_173[2],(void*)0,&g_173[2]},{&g_173[0],(void*)0,&g_173[3],&g_173[4],(void*)0},{(void*)0,&g_173[2],&g_173[2],(void*)0,&g_173[3]},{&g_173[0],&g_173[1],&g_173[2],&g_173[2],(void*)0}},{{&g_173[2],&g_173[2],&g_173[3],&g_173[0],&g_173[2]},{(void*)0,&g_173[0],&g_173[2],&g_173[2],&g_173[0]},{&g_173[2],&g_173[2],&g_173[5],(void*)0,&g_173[0]},{&g_173[2],(void*)0,&g_173[1],&g_173[4],&g_173[2]},{&g_173[2],&g_173[4],&g_173[5],(void*)0,&g_173[2]},{&g_173[5],(void*)0,&g_173[5],&g_173[2],&g_173[4]}},{{&g_173[0],(void*)0,(void*)0,&g_173[2],&g_173[0]},{&g_173[1],(void*)0,&g_173[2],&g_173[2],&g_173[0]},{&g_173[3],&g_173[0],(void*)0,&g_173[0],&g_173[3]},{&g_173[3],&g_173[2],&g_173[5],&g_173[0],&g_173[2]},{&g_173[5],&g_173[3],&g_173[2],&g_173[2],&g_173[2]},{(void*)0,&g_173[5],&g_173[2],&g_173[2],&g_173[2]}},{{&g_173[2],&g_173[2],(void*)0,&g_173[2],&g_173[3]},{&g_173[2],(void*)0,&g_173[3],&g_173[2],&g_173[0]},{(void*)0,&g_173[1],&g_173[2],(void*)0,&g_173[0]},{&g_173[5],(void*)0,(void*)0,&g_173[5],&g_173[4]},{&g_173[3],&g_173[2],(void*)0,&g_173[3],&g_173[2]},{&g_173[3],&g_173[5],&g_173[2],(void*)0,(void*)0}}};
                unsigned short ***l_391 = &g_235;
                unsigned l_394[1];
                const short *l_403[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                short *l_405 = &l_255[0][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_394[i] = 0x14F32640L;
lbl_398:
                for (l_319 = 0; (l_319 <= 3); l_319 += 1)
                {
                    unsigned char l_357 = 0x75L;
                    if (((*l_115) = g_207))
                    {
                        char *l_359 = &g_173[2];
                        int **l_363 = &g_56;
                        int l_364 = 0x8AEF8493L;
                        int i;
                        (*g_125) = (*g_125);
                        (*p_52) = ((safe_sub_func_uint8_t_u_u((((*l_359) = (safe_rshift_func_int16_t_s_u((g_65 > ((**g_235) < (safe_sub_func_int16_t_s_s(l_357, l_358)))), 15))) == ((*l_115) == (((g_362 |= (safe_rshift_func_int8_t_s_u(l_319, 7))) | g_10) > ((*g_125) != ((*l_363) = &l_305))))), l_325)) > l_364);
                    }
                    else
                    {
                        (*l_115) = ((*p_49) <= l_357);
                    }
                    for (g_64 = 0; (g_64 <= 3); g_64 += 1)
                    {
                        unsigned short **** const l_371[8][10][3] = {{{&l_238,&g_234,&g_234},{(void*)0,&g_234,&g_234},{&g_234,&g_234,&l_238},{&l_238,&l_238,&g_234},{(void*)0,&g_234,&g_234},{&g_234,&l_238,&l_238},{&g_234,&g_234,&l_238},{&l_238,&l_238,&g_234},{(void*)0,&g_234,&g_234},{&l_238,&l_238,&l_238}},{{&g_234,(void*)0,&g_234},{&g_234,&g_234,&g_234},{&l_238,(void*)0,&l_238},{&l_238,&l_238,(void*)0},{&l_238,&g_234,&g_234},{&l_238,&g_234,&g_234},{&l_238,&g_234,&l_238},{&g_234,&g_234,&g_234},{&g_234,&g_234,&l_238},{&l_238,(void*)0,&l_238}},{{(void*)0,(void*)0,&l_238},{(void*)0,&l_238,&g_234},{(void*)0,&g_234,&l_238},{&l_238,&l_238,&g_234},{&g_234,&l_238,&g_234},{&g_234,(void*)0,(void*)0},{&g_234,&l_238,&l_238},{&g_234,&l_238,&g_234},{&l_238,&g_234,&g_234},{&l_238,&l_238,&l_238}},{{&l_238,(void*)0,&g_234},{&l_238,(void*)0,&g_234},{&l_238,&g_234,(void*)0},{&l_238,&g_234,&g_234},{&l_238,&g_234,&l_238},{&g_234,&g_234,&l_238},{&g_234,&g_234,&g_234},{&g_234,&l_238,&l_238},{&g_234,(void*)0,&l_238},{&l_238,&l_238,&g_234}},{{&g_234,&g_234,&l_238},{&g_234,(void*)0,&l_238},{&l_238,&l_238,&g_234},{(void*)0,(void*)0,&g_234},{(void*)0,&g_234,(void*)0},{&g_234,&l_238,&g_234},{&g_234,&g_234,(void*)0},{&g_234,&g_234,&l_238},{(void*)0,&g_234,&g_234},{&g_234,&g_234,&g_234}},{{&g_234,&l_238,&g_234},{&g_234,&l_238,&g_234},{(void*)0,(void*)0,&g_234},{(void*)0,&g_234,&l_238},{&l_238,&l_238,&g_234},{&g_234,&l_238,&g_234},{&g_234,(void*)0,&g_234},{&g_234,&l_238,&g_234},{&g_234,&g_234,&g_234},{&g_234,&l_238,&l_238}},{{&g_234,&g_234,(void*)0},{&g_234,&l_238,&g_234},{(void*)0,(void*)0,(void*)0},{&g_234,&l_238,&g_234},{(void*)0,&l_238,&g_234},{&l_238,&g_234,&l_238},{(void*)0,(void*)0,&l_238},{&g_234,&l_238,&g_234},{(void*)0,&l_238,(void*)0},{&g_234,&g_234,&g_234}},{{&g_234,&g_234,&g_234},{&g_234,(void*)0,(void*)0},{(void*)0,&g_234,(void*)0},{&g_234,(void*)0,&g_234},{&g_234,&l_238,&g_234},{&l_238,&g_234,&g_234},{&g_234,&g_234,(void*)0},{&g_234,&g_234,&l_238},{(void*)0,&l_238,(void*)0},{&l_238,(void*)0,&g_234}}};
                        unsigned short *****l_372 = &l_237;
                        int **l_374 = &l_115;
                        int ***l_373[4][10] = {{&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374},{&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374,&l_374}};
                        int i, j, k;
                        (*p_52) |= l_255[(l_319 + 1)][l_319];
                        (*p_52) &= ((safe_rshift_func_int16_t_s_s(0L, 6)) && 9L);
                        (*p_52) |= (((safe_mul_func_uint32_t_u_u(l_255[(g_64 + 1)][l_319], (l_371[6][4][2] != ((*l_372) = (void*)0)))) | (0xFE50L > l_255[(g_64 + 1)][l_319])) >= ((l_375 = &p_51) == &p_52));
                    }
                }
                if (((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_17, (g_173[3] = g_169))) ^ (g_113 != (((**g_235) < (l_391 != &g_235)) != l_325))), 6)), (-1L))) <= (l_325 & l_358)) && l_325), g_65)), 1L)), 3)) >= 255UL))
                {
                    int l_395[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_395[i] = 0x8C5D9795L;
                    for (g_61 = 13; (g_61 <= 1); --g_61)
                    {
                        return (*p_52);
                    }
                    (*l_375) = &l_319;
                    (*p_52) ^= ((((-5L) < l_394[0]) && l_358) < (l_395[2] = g_362));
                }
                else
                {
                    const short **l_402[10] = {&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401,&l_401};
                    int i;
                    for (g_64 = (-19); (g_64 != 5); g_64 = safe_add_func_uint16_t_u_u(g_64, 9))
                    {
                        if (l_307)
                            goto lbl_398;
                    }
                    (*p_52) = ((+l_325) && (!(safe_rshift_func_uint16_t_u_u((&g_56 != (void*)0), (((*l_288) = l_325) || ((l_403[4] = l_401) == l_405))))));
                    l_319 = 1L;
                    (*g_125) = (*g_125);
                }
                for (g_111 = 0; (g_111 <= 3); g_111 += 1)
                {
                    int l_408 = (-1L);
                    char * const l_417 = (void*)0;
                    for (l_358 = 0; (l_358 <= 3); l_358 += 1)
                    {
                        return l_394[0];
                    }
                    g_64 = ((safe_lshift_func_int16_t_s_s((l_408 & l_358), ((l_409[4][2] != &l_410[0]) < g_362))) ^ ((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_u((l_325 < l_408), 15)) ^ l_408) < l_408), 11)) >= (*g_236)));
                    for (l_215 = 0; (l_215 <= 3); l_215 += 1)
                    {
                        (*l_115) ^= 0xDDC807E2L;
                        if ((*p_49))
                            break;
                    }
                    l_305 &= (*p_49);
                    for (l_256 = 0; (l_256 <= 3); l_256 += 1)
                    {
                        unsigned short l_426 = 0UL;
                        const int **l_434 = &l_327[1];
                        (*p_52) = (((void*)0 == l_417) < l_256);
                        (*p_52) ^= (safe_add_func_uint8_t_u_u(((l_420 & l_394[0]) < g_421[2][4]), ((l_408 >= g_64) | (0UL && (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_426, 0)), 0))))));
                        (*l_115) = (safe_sub_func_uint16_t_u_u(((g_169 ^= 0xC4L) != (+(*l_115))), (l_433 &= ((safe_mul_func_uint16_t_u_u((*g_236), ((*p_49) <= (l_325 && (safe_add_func_uint8_t_u_u(l_426, 0L)))))) == 3UL))));
                        (*l_434) = p_49;
                    }
                }
                (*p_52) = (0xBDL && (*l_115));
            }
            (*p_52) = 0xC6600DF7L;
        }
        else
        {
            int l_442 = 0L;
            if ((safe_mod_func_uint32_t_u_u(g_421[1][5], ((1L <= (**l_375)) || ((void*)0 == (**g_234))))))
            {
                int l_437[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_437[i] = 0xBC994F66L;
                (*l_115) |= ((l_437[0] >= (&g_169 != (void*)0)) >= ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((l_442 ^ 255UL), 0x76616252L)) == ((&g_267 != (void*)0) == l_437[0])), l_319)) >= 4294967295UL));
            }
            else
            {
                for (g_192 = (-25); (g_192 <= 5); g_192 = safe_add_func_uint16_t_u_u(g_192, 6))
                {
                    char l_447 = (-10L);
                    for (g_61 = 3; (g_61 >= 0); g_61 -= 1)
                    {
                        int i, j;
                        (*p_52) = (safe_add_func_uint8_t_u_u(l_255[(g_61 + 1)][g_61], (l_447 || (*l_115))));
                    }
                }
            }
        }
    }
    return (*p_52);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_173[i], "g_173[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_404[i], "g_404[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_421[i][j], "g_421[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_454[i][j][k], "g_454[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_469[i], "g_469[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_471[i][j], "g_471[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_576[i], "g_576[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_647, "g_647", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_824[i][j], "g_824[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1084, "g_1084", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1123[i], "g_1123[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1172, "g_1172", print_hash_value);
    transparent_crc(g_1202, "g_1202", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1205, "g_1205", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1209[i][j][k], "g_1209[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1210, "g_1210", print_hash_value);
    transparent_crc(g_1211, "g_1211", print_hash_value);
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1214, "g_1214", print_hash_value);
    transparent_crc(g_1215, "g_1215", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1221, "g_1221", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1222[i][j][k], "g_1222[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1223[i], "g_1223[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1224, "g_1224", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1456[i], "g_1456[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1529, "g_1529", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1565[i], "g_1565[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1576, "g_1576", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
