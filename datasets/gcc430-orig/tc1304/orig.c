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



static short g_13 = 8L;
static volatile int g_14 = (-1L);
static int g_17 = (-1L);
static int g_27 = 0xCC9CA319L;
static volatile short g_29 = 0x88C5L;
static volatile short *g_28[7] = {&g_29,&g_29,&g_29,&g_29,&g_29,&g_29,&g_29};
static unsigned char g_37 = 255UL;
static short g_62[6] = {0L,0L,(-7L),0L,0L,(-7L)};
static unsigned g_100 = 4294967286UL;
static int g_133[1] = {0L};
static unsigned short g_139[6][6][2] = {{{65535UL,65535UL},{65535UL,0x56B3L},{1UL,2UL},{0x56B3L,2UL},{1UL,0x56B3L},{65535UL,65535UL}},{{65535UL,0x56B3L},{1UL,2UL},{0x56B3L,2UL},{1UL,0x56B3L},{65535UL,65535UL},{65535UL,0x56B3L}},{{1UL,2UL},{0x56B3L,2UL},{1UL,0x56B3L},{65535UL,65535UL},{2UL,65535UL},{0x56B3L,0x361EL}},{{65535UL,0x361EL},{0x56B3L,65535UL},{2UL,2UL},{2UL,65535UL},{0x56B3L,0x361EL},{65535UL,0x361EL}},{{0x56B3L,65535UL},{2UL,2UL},{2UL,65535UL},{0x56B3L,0x361EL},{65535UL,0x361EL},{0x56B3L,65535UL}},{{2UL,2UL},{2UL,65535UL},{0x56B3L,0x361EL},{65535UL,0x361EL},{0x56B3L,65535UL},{2UL,2UL}}};
static int *g_142[9] = {&g_17,&g_17,&g_17,&g_17,&g_17,&g_17,&g_17,&g_17,&g_17};
static int **g_141[9] = {&g_142[6],&g_142[6],&g_142[6],&g_142[6],&g_142[6],&g_142[6],&g_142[6],&g_142[6],&g_142[6]};
static int g_146 = (-1L);
static char g_166[8][3][1] = {{{1L},{(-9L)},{1L}},{{(-1L)},{0x16L},{(-1L)}},{{1L},{(-9L)},{1L}},{{(-1L)},{0x16L},{(-1L)}},{{1L},{(-9L)},{1L}},{{(-1L)},{0x16L},{(-1L)}},{{1L},{(-9L)},{1L}},{{(-1L)},{0x16L},{(-1L)}}};
static char g_168 = 0L;
static unsigned g_177[7] = {0xBB44D923L,0x23DBE8D7L,0x23DBE8D7L,0xBB44D923L,0x23DBE8D7L,0x23DBE8D7L,0xBB44D923L};
static short g_345 = 1L;
static short g_389 = 0x7F1CL;
static unsigned char g_483 = 255UL;
static short **g_562 = (void*)0;
static char g_642[5][9][3] = {{{0x31L,0x48L,(-4L)},{(-2L),0x2FL,(-1L)},{0x09L,0x97L,0x09L},{(-2L),2L,0xE1L},{0x31L,0x97L,(-4L)},{0x33L,0x2FL,0xE1L},{0x09L,0x48L,0x09L},{0x33L,2L,(-1L)},{0x31L,0x48L,(-4L)}},{{(-2L),0x2FL,(-1L)},{0x09L,0x97L,0x09L},{(-2L),2L,0xE1L},{0x31L,0x97L,(-4L)},{0x33L,0x2FL,0xE1L},{0x09L,0x48L,0x09L},{0x33L,2L,(-1L)},{0x31L,0x48L,(-4L)},{(-2L),0x2FL,(-1L)}},{{0x09L,0x97L,0x09L},{(-2L),2L,0xE1L},{0x31L,0x97L,(-4L)},{0x33L,0x2FL,0xE1L},{0x09L,0x48L,0x09L},{0x33L,2L,(-1L)},{0x31L,0x48L,(-4L)},{(-2L),0x2FL,(-1L)},{0x09L,0x97L,0x09L}},{{(-2L),2L,0xE1L},{0x31L,0x97L,(-4L)},{0x33L,0x2FL,0xE1L},{0x09L,0x48L,0x09L},{0x33L,2L,(-1L)},{0x31L,0x48L,(-4L)},{(-2L),0x2FL,(-1L)},{0L,0L,0L},{0L,(-1L),0x5DL}},{{1L,0L,0xEAL},{(-3L),0x33L,0x5DL},{0L,(-1L),0L},{(-3L),(-1L),7L},{1L,(-1L),0xEAL},{0L,0x33L,7L},{0L,0L,0L},{0L,(-1L),0x5DL},{1L,0L,0xEAL}}};
static volatile char ***g_672 = (void*)0;
static char g_735 = 1L;
static unsigned *g_761 = &g_177[2];
static unsigned **g_760 = &g_761;
static unsigned short g_779 = 0x1FF3L;
static unsigned char *g_785 = &g_483;
static unsigned char *g_786[10] = {&g_37,&g_483,&g_37,&g_37,&g_483,&g_37,&g_483,&g_37,&g_37,&g_483};
static unsigned short *g_818 = &g_139[0][2][0];
static short g_834 = 0x9F0FL;
static int *g_912 = &g_146;
static short *g_948[9][6][4] = {{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}},{{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345},{&g_345,&g_345,&g_345,&g_345}}};
static int *g_964 = &g_27;
static unsigned g_967 = 4294967295UL;
static unsigned char g_1022 = 0xB1L;
static char ***g_1030 = (void*)0;
static unsigned g_1101 = 9UL;
static unsigned char g_1114 = 247UL;
static int g_1179 = 0x40F37D1DL;
static short g_1206 = (-1L);
static unsigned g_1336[6] = {0x1344290EL,0x1344290EL,0x1344290EL,0x1344290EL,0x1344290EL,0x1344290EL};
static char *g_1353[1][9] = {{&g_168,&g_168,&g_168,&g_168,&g_168,&g_168,&g_168,&g_168,&g_168}};
static char **g_1352 = &g_1353[0][6];
static volatile int g_1524 = (-1L);
static volatile int *g_1523 = &g_1524;
static volatile int **g_1522[6] = {&g_1523,&g_1523,&g_1523,&g_1523,&g_1523,&g_1523};
static volatile int ***g_1521 = &g_1522[1];
static volatile int ****g_1520 = &g_1521;
static unsigned short g_1534 = 0x6D19L;
static unsigned g_1594[5] = {0xF096EE5DL,0xF096EE5DL,0xF096EE5DL,0xF096EE5DL,0xF096EE5DL};
static int *g_1652 = (void*)0;
static unsigned short g_1736 = 65531UL;



static short func_1(void);
static char func_2(unsigned p_3, unsigned short p_4, int p_5, int p_6);
static int func_20(char p_21, unsigned p_22);
static unsigned short func_58(short * p_59, unsigned char p_60);
static unsigned short func_72(unsigned p_73);
static int func_86(int * p_87, unsigned char * p_88, short p_89, unsigned p_90, int p_91);
static int * func_92(int * p_93, int p_94, short p_95, short p_96);
static int ** func_108(int ** p_109, unsigned char * p_110, unsigned char * p_111);
static unsigned char func_114(unsigned char * p_115, short * p_116);
static short func_127(char p_128, unsigned p_129);
static short func_1(void)
{
    short *l_11 = (void*)0;
    short *l_12 = &g_13;
    int l_25 = 0xF4E79753L;
    int *l_26 = &g_27;
    unsigned l_30 = 1UL;
    unsigned char l_31 = 4UL;
    char l_1647 = 0x28L;
    char l_1648 = (-9L);
    unsigned short l_1688 = 7UL;
    int l_1700 = 0L;
    unsigned l_1767 = 0x5B324EDFL;
    unsigned short l_1769 = 65526UL;
    if ((func_2((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*l_12) = 0x942AL), g_14)), ((safe_sub_func_int16_t_s_s(((((*g_818) = (g_17 >= (safe_sub_func_int32_t_s_s(func_20(((safe_mul_func_uint8_t_u_u(((l_25 == ((*l_26) |= g_17)) ^ ((g_17 , l_11) != g_28[0])), (l_30 = g_17))) >= l_31), g_17), l_25)))) ^ l_31) ^ l_1647), 8L)) , (*g_785)))), l_31, l_1648, l_31) != g_1336[5]))
    {
        unsigned short l_1686 = 4UL;
        int *l_1689 = &g_146;
        unsigned *l_1690 = &g_1336[5];
        unsigned l_1693[4];
        int i;
        for (i = 0; i < 4; i++)
            l_1693[i] = 1UL;
        for (g_100 = 0; (g_100 <= 32); g_100 = safe_add_func_int16_t_s_s(g_100, 4))
        {
            char l_1668 = 0x4EL;
            int *l_1671 = &g_146;
            unsigned char l_1685 = 0x73L;
            unsigned short l_1687 = 0xF762L;
            (***g_1521) = (safe_add_func_int8_t_s_s(l_1668, (safe_div_func_int32_t_s_s(func_86(l_1671, &l_31, ((*l_12) = (0L | ((*l_26) = ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((((safe_unary_minus_func_int8_t_s((safe_mod_func_int8_t_s_s(((*l_1671) & ((*g_818) = (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x1354L, (*g_818))), (l_1685 ^ (((((*g_785) = func_86(l_1671, &g_1022, (*l_1671), l_1686, g_1114)) , (void*)0) != (void*)0) , (*l_26))))))), (*l_26))))) ^ 8L) | (*g_1523)) != (*l_26)), l_1687)), (*l_1671))) < (*l_1671))))), g_1101, l_1688), (**g_760)))));
        }
        l_26 = func_92(l_1689, g_14, ((safe_mod_func_uint8_t_u_u((!func_127(l_1693[2], (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x1D38L, ((*l_12) ^= (*l_1689)))), (*l_26))))), (*l_26))) , (*l_1689)), (*l_26));

        ;
    }
    else
    {
        (***g_1521) = (*l_26);
        for (g_27 = 0; (g_27 >= 11); g_27 = safe_add_func_uint8_t_u_u(g_27, 9))
        {
            (****g_1520) |= (-1L);
        }
        return l_1700;
    }

    ;



    ;



    ;
    for (g_17 = 0; (g_17 <= 5); g_17 += 1)
    {
        int *l_1701[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned char *l_1730 = &l_31;
        unsigned l_1768 = 1UL;
        int i;
        for (g_483 = 0; (g_483 <= 5); g_483 += 1)
        {
            int l_1704 = 5L;
            int **l_1705[7][7][2] = {{{&l_26,(void*)0},{&l_1701[5],&l_1701[5]},{&g_912,&l_1701[5]},{&l_1701[5],(void*)0},{&l_26,&g_964},{&g_912,&l_26},{&g_964,(void*)0}},{{&g_964,&l_26},{&g_912,&g_964},{&l_26,(void*)0},{&l_1701[5],&l_1701[5]},{&g_912,&l_1701[5]},{&l_1701[5],(void*)0},{&l_26,&g_964}},{{&g_912,&l_26},{&g_964,(void*)0},{&g_964,&l_26},{&g_912,&g_964},{&l_26,(void*)0},{&l_1701[5],&l_1701[5]},{&g_912,&l_1701[5]}},{{&l_1701[5],(void*)0},{&l_26,&g_964},{&g_912,&l_26},{&g_964,(void*)0},{&g_964,&l_26},{&g_912,&g_964},{&l_26,(void*)0}},{{&l_1701[5],&l_1701[5]},{&g_912,&l_1701[5]},{&l_1701[5],(void*)0},{&l_26,&g_964},{&g_912,&l_26},{&g_964,(void*)0},{&g_964,&l_26}},{{&g_912,&g_964},{&l_26,(void*)0},{&l_1701[5],&l_1701[5]},{&g_912,&l_1701[5]},{&l_1701[5],(void*)0},{&l_26,&g_964},{&g_912,&l_26}},{{&g_964,(void*)0},{&g_964,&l_26},{(void*)0,&g_912},{&l_26,&g_142[0]},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,&g_142[0]}}};
            short ***l_1713[2];
            short ****l_1712[7][4][5] = {{{&l_1713[1],&l_1713[1],(void*)0,&l_1713[1],&l_1713[1]},{(void*)0,&l_1713[0],&l_1713[0],&l_1713[1],&l_1713[0]},{&l_1713[1],(void*)0,&l_1713[0],&l_1713[0],&l_1713[0]},{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[1]}},{{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[0],&l_1713[0]},{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[1]},{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[0],&l_1713[0]},{&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[1],&l_1713[1]}},{{&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[0],&l_1713[1]},{&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[0],&l_1713[1]},{&l_1713[0],&l_1713[0],&l_1713[0],&l_1713[0],&l_1713[0]},{&l_1713[0],&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[1]}},{{&l_1713[1],(void*)0,(void*)0,&l_1713[1],&l_1713[0]},{&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[0],&l_1713[1]},{&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[1],&l_1713[1]},{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[0],&l_1713[1]}},{{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[0]},{&l_1713[1],&l_1713[1],&l_1713[0],&l_1713[0],&l_1713[1]},{&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[0],&l_1713[1]},{(void*)0,&l_1713[0],&l_1713[1],&l_1713[1],&l_1713[0]}},{{&l_1713[0],&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[0]},{&l_1713[0],&l_1713[1],&l_1713[1],(void*)0,(void*)0},{&l_1713[1],&l_1713[1],&l_1713[0],&l_1713[1],&l_1713[1]},{&l_1713[0],&l_1713[1],&l_1713[1],&l_1713[1],(void*)0}},{{&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[1],&l_1713[0]},{(void*)0,&l_1713[0],&l_1713[0],&l_1713[0],&l_1713[0]},{&l_1713[0],(void*)0,&l_1713[0],&l_1713[1],&l_1713[1]},{&l_1713[1],(void*)0,&l_1713[0],&l_1713[1],&l_1713[1]}}};
            unsigned char l_1733 = 0x10L;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1713[i] = (void*)0;
        }
    }
    for (l_1647 = 0; (l_1647 > (-11)); l_1647 = safe_sub_func_int32_t_s_s(l_1647, 7))
    {
        char l_1774 = 0x2BL;
        if (l_1774)
            break;
    }
    (*l_26) = 4L;
    return (*l_26);
}







static char func_2(unsigned p_3, unsigned short p_4, int p_5, int p_6)
{
    int *l_1650 = &g_17;
    unsigned char *l_1659[9][4][7] = {{{&g_483,(void*)0,&g_1022,&g_37,(void*)0,&g_37,&g_1114},{&g_1022,(void*)0,(void*)0,&g_1114,&g_1022,&g_37,&g_1114},{(void*)0,&g_1022,(void*)0,&g_1022,&g_1022,&g_1114,&g_483},{&g_483,&g_483,&g_1022,&g_483,&g_483,&g_1022,&g_1114}},{{&g_1022,&g_1114,&g_1022,&g_1022,(void*)0,&g_483,&g_1022},{&g_1022,&g_1022,&g_1114,&g_483,&g_37,&g_483,&g_1114},{&g_1022,&g_1022,&g_37,&g_37,&g_1114,&g_1022,&g_37},{&g_1022,&g_37,&g_37,&g_1114,&g_37,&g_1114,&g_1114}},{{&g_1114,&g_1022,&g_483,&g_1114,(void*)0,&g_1114,&g_1022},{&g_1022,&g_37,&g_483,&g_1022,&g_1022,&g_1022,&g_1022},{&g_1114,&g_483,&g_1114,&g_37,&g_1022,&g_1114,&g_37},{&g_1022,&g_1022,&g_37,&g_1022,&g_1114,&g_37,&g_1022}},{{&g_1114,&g_1114,&g_1022,&g_1114,&g_37,&g_1114,&g_1022},{&g_1022,&g_1022,(void*)0,&g_1022,&g_1022,&g_1022,&g_1114},{(void*)0,&g_37,&g_37,(void*)0,(void*)0,&g_1114,(void*)0},{&g_483,&g_483,&g_37,&g_483,&g_1022,&g_1022,&g_1114}},{{&g_1114,&g_483,(void*)0,&g_37,&g_37,(void*)0,&g_37},{&g_1114,&g_483,&g_483,&g_483,&g_1114,&g_483,&g_1114},{&g_1114,&g_1114,(void*)0,&g_37,&g_1022,&g_1114,&g_1022},{&g_37,&g_483,&g_1114,&g_37,&g_37,&g_1114,&g_1022}},{{&g_37,&g_37,&g_1114,&g_37,&g_37,(void*)0,&g_1114},{&g_37,&g_1022,&g_1114,&g_1114,&g_1022,&g_1114,&g_37},{&g_483,&g_483,&g_37,&g_483,&g_1022,&g_1114,&g_37},{&g_37,&g_1022,&g_1022,&g_483,&g_37,&g_1114,&g_1114}},{{&g_483,&g_1022,&g_1022,&g_37,&g_1022,&g_1114,&g_1022},{&g_37,&g_37,(void*)0,(void*)0,&g_1022,&g_483,&g_37},{&g_1114,&g_483,&g_483,&g_1022,&g_37,&g_37,&g_1022},{(void*)0,&g_37,&g_37,(void*)0,&g_1114,&g_37,&g_483}},{{&g_37,&g_1022,&g_1114,&g_1114,&g_1022,&g_37,&g_1114},{&g_37,&g_1114,(void*)0,(void*)0,&g_483,(void*)0,(void*)0},{(void*)0,&g_1114,&g_1022,&g_1114,&g_483,&g_37,&g_1114},{&g_37,&g_1114,&g_1022,&g_1022,&g_37,(void*)0,&g_1022}},{{&g_1022,&g_1022,(void*)0,&g_37,&g_1022,&g_37,(void*)0},{&g_1114,&g_1022,&g_1114,&g_483,&g_1022,&g_1022,(void*)0},{&g_37,&g_1114,(void*)0,(void*)0,&g_483,&g_1022,&g_1022},{&g_1114,&g_1022,(void*)0,&g_1022,&g_37,&g_1114,&g_1022}}};
    unsigned l_1661 = 0x959DABDEL;
    int i, j, k;
    if ((***g_1521))
    {
        char l_1649 = 0x3AL;
        int **l_1651[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1651[i] = &g_964;
        l_1649 &= (***g_1521);
        g_1652 = func_92(l_1650, (*l_1650), p_4, p_6);

        ;
        for (g_1534 = (-24); (g_1534 != 18); g_1534 = safe_add_func_int16_t_s_s(g_1534, 1))
        {
            unsigned short l_1662[7];
            int i;
            for (i = 0; i < 7; i++)
                l_1662[i] = 0x1849L;
            for (g_1101 = 0; (g_1101 != 38); g_1101++)
            {
                return p_6;
            }
            for (g_37 = 0; (g_37 < 51); ++g_37)
            {
                short *l_1660 = &g_1206;
                (****g_1520) |= func_114(l_1659[1][1][4], l_1660);
            }
            l_1662[1] ^= ((*g_761) , l_1661);
            for (g_37 = 0; g_37 < 9; g_37 += 1)
            {
                for (p_6 = 0; p_6 < 6; p_6 += 1)
                {
                    for (g_389 = 0; g_389 < 4; g_389 += 1)
                    {
                        g_948[g_37][p_6][g_389] = &g_345;
                    }
                }
            }
        }
    }
    else
    {
        unsigned short l_1663 = 0x90D0L;
        return l_1663;
    }

    ;
    return (*l_1650);
}







static int func_20(char p_21, unsigned p_22)
{
    unsigned char *l_36[5][1][3] = {{{(void*)0,&g_37,&g_37}},{{&g_37,&g_37,&g_37}},{{&g_37,(void*)0,&g_37}},{{(void*)0,&g_37,&g_37}},{{&g_37,&g_37,&g_37}}};
    int l_38 = (-6L);
    int l_39 = (-5L);
    int l_40 = (-1L);
    int l_41 = 2L;
    int l_42 = 0xD514FAF1L;
    int l_43[10][3][7] = {{{(-1L),0x9389D0E1L,(-5L),8L,0xFE1F230BL,4L,(-5L)},{1L,(-10L),1L,0xE65C5BCCL,(-10L),0xA8360E56L,1L},{1L,(-1L),(-1L),0xA3F0AEACL,(-1L),(-1L),1L}},{{9L,0xE65C5BCCL,0xC46983C1L,(-6L),0L,0xC46983C1L,0x1158E584L},{0xFE1F230BL,0L,0x3632E6BAL,0L,0xFE1F230BL,(-2L),1L},{0L,(-7L),0xC46983C1L,0xA1DD7933L,9L,9L,0xA1DD7933L}},{{(-1L),0x9389D0E1L,(-1L),0xD98E87BBL,1L,8L,0L},{(-10L),0xA1DD7933L,1L,0L,1L,0xBDFDDCA6L,(-3L)},{0xFE1F230BL,4L,(-5L),0xA3F0AEACL,(-1L),8L,0xD4AD4463L}},{{0x5EAC84C9L,(-10L),0xCEA0262BL,0x1158E584L,0L,9L,1L},{1L,0L,0L,0x9389D0E1L,0x17530975L,(-2L),1L},{7L,0x1158E584L,1L,0L,(-7L),0xC46983C1L,0xA1DD7933L}},{{(-1L),0L,5L,(-1L),0xFE1F230BL,(-1L),5L},{(-10L),(-10L),0xBDFDDCA6L,0xA1DD7933L,7L,0xA8360E56L,0xE65C5BCCL},{0x17530975L,4L,(-1L),0L,0L,4L,1L}},{{(-6L),0xA1DD7933L,0xCEA0262BL,(-6L),7L,1L,0xC46983C1L},{0xFE1F230BL,0x9389D0E1L,0x909D073DL,0x9389D0E1L,0xFE1F230BL,0xD28CDD50L,0xD4AD4463L},{1L,(-7L),0x1158E584L,0xE65C5BCCL,(-7L),9L,1L}},{{0L,0L,(-1L),4L,0x17530975L,(-1L),0L},{1L,0xE65C5BCCL,0x28EC7DFFL,0L,0L,0x28EC7DFFL,0xE65C5BCCL},{0xFE1F230BL,(-1L),5L,0L,(-1L),0xD98E87BBL,1L}},{{(-6L),(-10L),0xC46983C1L,0xCEA0262BL,1L,9L,0xCEA0262BL},{0x17530975L,8L,0x17530975L,0xD98E87BBL,0L,0x9389D0E1L,0L},{(-7L),0x350C1656L,1L,(-6L),0xA8360E56L,0xBDFDDCA6L,1L}},{{3L,4L,0x909D073DL,0xD28CDD50L,(-1L),0xC94681C3L,0x909D073DL},{0x5EAC84C9L,(-7L),0xA1DD7933L,0x1158E584L,(-6L),1L,1L},{0L,(-2L),0L,8L,0L,(-2L),0L}},{{1L,0x1158E584L,0xBDFDDCA6L,0x90C63B88L,(-7L),0x28EC7DFFL,0x350C1656L},{(-1L),0xD98E87BBL,1L,(-1L),(-1L),0L,5L},{(-7L),0xA3DA7981L,0xBDFDDCA6L,0xCEA0262BL,1L,0xA8360E56L,0x1158E584L}}};
    int l_1533 = 0L;
    int l_1535 = 2L;
    char **l_1551 = (void*)0;
    char l_1598 = 1L;
    int i, j, k;
    if ((safe_lshift_func_uint8_t_u_s((~(safe_mul_func_uint8_t_u_u((g_37++), l_39))), 7)))
    {
        short *l_61 = &g_62[0];
        unsigned char l_1510[3][9] = {{0UL,0x19L,0UL,0UL,0x19L,0UL,0UL,0x19L,0UL},{0UL,0x19L,0UL,0UL,0x19L,0UL,0UL,0x19L,0UL},{0UL,0x19L,0UL,0UL,0x19L,0UL,0UL,0x19L,0UL}};
        int *l_1532[9] = {&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39};
        char **l_1555[10][4] = {{&g_1353[0][6],&g_1353[0][0],&g_1353[0][0],&g_1353[0][0]},{&g_1353[0][6],&g_1353[0][6],&g_1353[0][5],&g_1353[0][6]},{&g_1353[0][5],&g_1353[0][6],&g_1353[0][5],(void*)0},{&g_1353[0][1],&g_1353[0][6],&g_1353[0][6],&g_1353[0][1]},{&g_1353[0][6],&g_1353[0][5],&g_1353[0][0],(void*)0},{&g_1353[0][0],(void*)0,&g_1353[0][6],&g_1353[0][6]},{&g_1353[0][0],&g_1353[0][1],&g_1353[0][0],&g_1353[0][6]},{(void*)0,(void*)0,&g_1353[0][0],(void*)0},{&g_1353[0][6],&g_1353[0][5],(void*)0,&g_1353[0][1]},{&g_1353[0][6],&g_1353[0][6],(void*)0,(void*)0}};
        unsigned short ***l_1558 = (void*)0;
        unsigned l_1586 = 0UL;
        int l_1627 = 0xDCB323D4L;
        int l_1632 = 0xD8BB3C9AL;
        int i, j;
        l_42 |= (safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(p_21, p_21)) , (safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((((l_40 ^ ((safe_sub_func_uint16_t_u_u(func_58(l_61, ((((((safe_unary_minus_func_int16_t_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_22, (g_37 & (func_72((safe_rshift_func_uint16_t_u_s(65527UL, 7))) >= l_1510[2][3])))), p_21)), p_22)))) , g_177[6]) , 0xD8B2L) != l_1510[2][3]) || l_1510[2][3]) , p_22)), l_1510[2][3])) ^ p_22)) > p_22) == p_21) || p_22), 0x8CB7L)) , (-2L)) < 65535UL), p_21)) > p_21), 11))), p_22));






        l_43[9][1][2] ^= (p_21 , func_127(((g_1534 = ((*g_785) = ((~((**g_760) , ((void*)0 != l_61))) == func_86(l_1532[1], &l_1510[1][8], l_1533, g_483, p_21)))) , 4L), p_22));
        if (p_22)
        {
            return p_22;
        }
        else
        {
            unsigned l_1538 = 1UL;
            int **l_1547 = &l_1532[5];
lbl_1548:
            (*l_1547) = func_92(func_92((func_127(l_1535, ((safe_mul_func_int8_t_s_s(l_1538, 0xE1L)) & l_1538)) , func_92(l_1532[4], (((*g_818) > (safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((p_21 , p_21), p_21)), p_22)), (*g_761))) , 0xE5L), l_1538))) ^ p_21), l_40, p_22)), g_62[0], p_22, p_21), g_177[5], p_22, p_22);
            (*g_964) = 0xE10B54C0L;
            if (g_1114)
                goto lbl_1548;
        }
        for (l_41 = 1; (l_41 <= 6); l_41 += 1)
        {
            unsigned char **l_1549 = &l_36[4][0][0];
            short *l_1550 = &g_1206;
            char ***l_1552 = &g_1352;
            char ***l_1553 = (void*)0;
            char ***l_1554 = (void*)0;
            int l_1573 = 0x5EE95F34L;
            int l_1580 = (-3L);
            int l_1581 = 0x598160CEL;
            int l_1582 = (-5L);
            int l_1583 = (-1L);
            int l_1584[5];
            char l_1599 = 2L;
            unsigned l_1622 = 0x3C01349AL;
            int i;
            for (i = 0; i < 5; i++)
                l_1584[i] = 8L;
        }
    }
    else
    {
        int *l_1634 = (void*)0;
        int **l_1635 = (void*)0;
        int **l_1636 = (void*)0;
        int **l_1637 = &g_912;
        int **l_1638 = &l_1634;
        (*l_1638) = ((*l_1637) = l_1634);

        ;
        return l_42;
    }






    for (g_834 = 0; (g_834 <= (-14)); g_834 = safe_sub_func_uint32_t_u_u(g_834, 3))
    {
        int l_1643 = 0xB3DF2B36L;
        int **l_1644 = &g_964;
        l_40 = (safe_mul_func_int8_t_s_s(p_22, l_1643));
        (*l_1644) = &l_1533;

        ;
    }

    ;
    for (p_21 = 0; (p_21 > (-18)); p_21 = safe_sub_func_int32_t_s_s(p_21, 1))
    {
        (***g_1520) = (**g_1521);
    }
    return (*g_912);


}







static unsigned short func_58(short * p_59, unsigned char p_60)
{
    unsigned l_1511 = 0x577090BAL;
    int l_1512[8][6][2] = {{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}},{{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L},{0xF35EE732L,0L}}};
    int *l_1513 = &g_146;
    int *l_1514 = &l_1512[5][5][1];
    int *l_1515 = (void*)0;
    int *l_1516[10];
    unsigned short l_1517 = 0x79FAL;
    int **l_1529 = &l_1515;
    int **l_1530[10];
    int *l_1531 = &l_1512[0][5][1];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1516[i] = (void*)0;
    for (i = 0; i < 10; i++)
        l_1530[i] = &g_964;
    l_1511 = ((*g_964) &= p_60);
    l_1517++;
    l_1531 = ((*l_1529) = func_92((((void*)0 == g_1520) , &l_1512[2][2][0]), p_60, (*p_59), (safe_mul_func_int8_t_s_s(((*l_1513) |= ((((*p_59) && 0xE9F1L) == ((~(((safe_add_func_int32_t_s_s(p_60, p_60)) || p_60) <= (*g_818))) | 1UL)) == 0xADBDL)), (*l_1514)))));

    ;
    return p_60;
}







static unsigned short func_72(unsigned p_73)
{
    int *l_97 = (void*)0;
    int **l_991 = &g_142[6];
    unsigned char *l_992 = &g_37;
    short *l_994 = &g_834;
    char l_995 = 0x8AL;
    short *l_996[10][3] = {{&g_345,&g_62[3],&g_62[4]},{&g_62[3],&g_389,&g_62[0]},{&g_345,&g_389,(void*)0},{&g_62[0],&g_62[3],&g_62[0]},{&g_62[0],&g_62[0],&g_62[4]},{&g_345,&g_62[3],&g_62[4]},{&g_62[3],&g_389,&g_62[0]},{&g_345,&g_389,(void*)0},{&g_62[0],&g_62[3],&g_62[0]},{&g_62[0],&g_62[0],&g_62[4]}};
    int l_997 = 0x475AB14EL;
    char *l_998 = &g_642[2][4][1];
    short l_1017[1][10][10] = {{{(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L},{0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L},{(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L},{0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L},{(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L},{0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L},{(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L},{0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L},{(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L,(-7L),0x0B57L},{0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L,0L,0x0B57L}}};
    unsigned short l_1020 = 0x162AL;
    unsigned l_1021 = 3UL;
    int l_1035 = 1L;
    int l_1036 = 0x92E7C577L;
    int l_1040 = 0xEA3F8038L;
    int l_1041 = (-3L);
    int l_1042 = 0L;
    int l_1045 = 0xB0169AF3L;
    unsigned l_1049 = 0xADB2D81EL;
    unsigned short **l_1055 = &g_818;
    char l_1080[6];
    char l_1107 = 0x7DL;
    unsigned l_1109 = 0x5ED87175L;
    unsigned l_1137 = 0x178AC923L;
    short ***l_1149 = &g_562;
    short l_1157 = 0x3045L;
    short l_1215 = 0x497BL;
    int l_1290[4][10] = {{1L,(-8L),(-8L),1L,0xCA829473L,1L,1L,1L,0xCA829473L,1L},{1L,1L,1L,0xCA829473L,1L,(-8L),(-8L),1L,0xCA829473L,1L},{(-8L),(-8L),0L,1L,4L,1L,1L,0xCA829473L,1L,(-8L)},{1L,0xF28E18CCL,0L,1L,0xEDA67382L,0xEDA67382L,1L,0L,0xF28E18CCL,1L}};
    unsigned l_1389[2][1][10] = {{{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}},{{4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL,4294967291UL}}};
    int *l_1404 = &g_133[0];
    int **l_1403 = &l_1404;
    unsigned l_1459 = 0x6C114A2CL;
    int **l_1493 = &g_142[6];
    int l_1496 = (-7L);
    int l_1497 = 0L;
    int l_1500 = 0x9A97B71DL;
    int l_1503 = 0x4854EE20L;
    int l_1506 = 0xE4F24C7AL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1080[i] = 7L;
    if (((p_73 != (safe_add_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((g_62[0] || (((*l_998) = ((l_997 |= (safe_div_func_uint32_t_u_u((((*l_994) |= ((g_37 >= (safe_mod_func_int8_t_s_s((0x63B6BA6FL & (safe_mod_func_uint32_t_u_u(0UL, ((func_86(((*l_991) = func_92(l_97, p_73, p_73, g_37)), l_992, p_73, p_73, p_73) || (**g_760)) , (**g_760))))), p_73))) < (*g_818))) && (*g_818)), l_995))) || 0xE53EL)) | (-8L))), 2L)) && p_73), 0x255CL))) , p_73))
    {
        short **l_1001 = &l_994;
        unsigned char *l_1008 = &g_483;
        int l_1009 = 0x4A3D1A5CL;
        unsigned short **l_1014 = &g_818;
        unsigned short **l_1016 = &g_818;
        unsigned short ***l_1015 = &l_1016;
        int l_1023 = (-4L);
        int l_1037 = 0x03F6AF99L;
        int l_1038[2];
        int i;
        for (i = 0; i < 2; i++)
            l_1038[i] = 0xA9BEA341L;
        (*g_964) = ((safe_div_func_uint8_t_u_u((+(l_1001 == (void*)0)), (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((*g_818), (safe_div_func_uint16_t_u_u(func_86(&l_997, l_1008, l_1009, l_1009, ((*g_912) , (p_73 && g_166[6][0][0]))), 0x9B51L)))) , 1UL), 7)))) ^ p_73);
        (*l_991) = func_92(&l_997, p_73, l_1009, (((((((*g_761)++) && ((*g_912) ^= (safe_rshift_func_int16_t_s_s((0xF015L ^ ((**l_1014) = ((p_73 , l_1014) != ((*l_1015) = l_1014)))), ((**l_1001) = l_1017[0][0][1]))))) > (((g_672 == g_672) & 2UL) ^ 65535UL)) != l_1009) != 1L) , l_1009));


        l_1023 |= (func_127(p_73, (((safe_div_func_uint16_t_u_u(((-1L) | func_127(g_146, l_1020)), p_73)) && (*g_818)) | ((g_1022 ^= l_1021) , p_73))) , l_1009);


        for (l_1023 = 0; (l_1023 <= (-6)); --l_1023)
        {
            char **l_1029 = &l_998;
            char ***l_1028 = &l_1029;
            int *l_1031 = &g_27;
            int l_1034 = 0xEA2727F7L;
            int l_1039 = 0L;
            int l_1043 = 0x7F396773L;
            int l_1044 = 1L;
            int l_1046 = 0x5A895418L;
            int l_1047 = 0L;
            int l_1048[8][10] = {{(-3L),1L,0xE0129107L,0x8898C89DL,1L,(-10L),0L,(-1L),9L,1L},{0xBBA2A75FL,0x8898C89DL,9L,0x3D4FC40FL,1L,0xE0129107L,0xBBA2A75FL,0L,9L,9L},{0x028FD76DL,1L,0x8CF0EE6CL,4L,4L,0x8CF0EE6CL,1L,0x028FD76DL,(-3L),0L},{(-3L),9L,0xBBA2A75FL,0xFB5C58BFL,0xC9886FBAL,1L,0x028FD76DL,9L,(-10L),4L},{9L,0x8898C89DL,0xBBA2A75FL,0xC9886FBAL,1L,9L,0xC9886FBAL,0x028FD76DL,0xE0129107L,9L},{0x8898C89DL,0xFB5C58BFL,0x8CF0EE6CL,0L,1L,0xEB376BBDL,1L,0L,0x8CF0EE6CL,0xFB5C58BFL},{1L,9L,1L,0x3B7805A7L,0x841C57C5L,0xC9886FBAL,0L,0x841C57C5L,0x3D4FC40FL,0xFB5C58BFL},{0x841C57C5L,0x2748816AL,0xBBA2A75FL,(-1L),4L,0xC9886FBAL,0xE0129107L,0L,0x534309D2L,(-1L)}};
            char l_1060 = 4L;
            short *l_1102 = (void*)0;
            int i, j;
            if ((safe_rshift_func_uint16_t_u_u(((*g_818) ^= ((g_1030 = l_1028) == g_672)), 11)))
            {
                int *l_1032[10] = {&g_27,&l_1009,&g_27,&l_1009,&g_27,&l_1009,&g_27,&l_1009,&g_27,&l_1009};
                int i;
                (*l_991) = l_1031;
                (*l_991) = l_1032[9];
            }
            else
            {
                int *l_1033[9] = {&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023,&l_1023};
                int i;
                for (g_834 = 8; (g_834 >= 2); g_834 -= 1)
                {
                    return (*g_818);



                }
                l_1049++;
                l_1009 &= l_1037;
            }

            ;
            for (g_735 = 19; (g_735 > (-9)); --g_735)
            {
                int *l_1054 = &g_27;
                (*l_991) = l_1054;
                l_1038[1] = (((*l_1015) = l_1055) == &g_818);
            }
            for (g_1022 = 27; (g_1022 == 2); --g_1022)
            {
                unsigned l_1058 = 0xB8559295L;
                int *l_1059 = &l_1037;
                unsigned char *l_1075 = &g_483;
                unsigned short l_1079 = 65533UL;
                unsigned short l_1084 = 0xD582L;
                (*g_964) = l_1058;
                if (p_73)
                {
                    unsigned *l_1061 = &l_1058;
                    (*l_991) = func_92(((*l_991) = l_1059), p_73, (((*l_1061) = l_1060) , ((*g_761) ^ 0xB969479DL)), p_73);
                    if ((*l_1059))
                        continue;
                    if (p_73)
                        break;
                }
                else
                {
                    (*l_991) = func_92(func_92(&l_1009, p_73, (*l_1059), (safe_add_func_int16_t_s_s(((*l_994) = (((*l_1031) , ((safe_lshift_func_int16_t_s_u(p_73, 11)) < (*l_1059))) == p_73)), (*l_1031)))), p_73, p_73, p_73);
                    (*l_991) = &l_1046;
                    (*l_991) = &l_1039;
                    for (l_1020 = 0; (l_1020 == 49); l_1020 = safe_add_func_int16_t_s_s(l_1020, 2))
                    {
                        return (*g_818);



                    }
                }
                (*l_1059) = ((*l_1059) , 0L);
                for (l_1039 = 0; (l_1039 <= 2); l_1039 += 1)
                {
                    int *l_1068[9][5][5] = {{{&l_1036,&l_1035,&l_1034,&l_1042,&l_1035},{&l_1037,&l_1042,&l_1047,(void*)0,(void*)0},{&l_1046,&l_1034,&l_1046,&l_1034,&l_1038[1]},{&l_1044,&l_1042,&l_1042,(void*)0,&l_1043},{(void*)0,&l_1036,(void*)0,(void*)0,&l_1034}},{{&l_1038[1],&l_1037,&l_1042,&l_1043,&l_1048[1][8]},{&l_1036,&l_1046,&l_1046,&l_1036,&l_1038[1]},{(void*)0,&l_1044,&l_1047,(void*)0,&l_1044},{&l_1038[1],(void*)0,&l_1034,(void*)0,&l_1038[1]},{&l_1042,&l_1038[1],&l_1036,(void*)0,&l_1042}},{{(void*)0,&l_1036,&l_997,&l_1036,(void*)0},{&l_1036,&l_1043,&l_1040,&l_1048[3][1],&l_1042},{&l_1048[1][9],&l_1046,&l_1041,(void*)0,&g_27},{&l_1043,&l_1045,(void*)0,&l_1043,&l_1042},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1042,&l_1047,&l_1038[1],&l_1042,&l_1043},{&l_1034,&l_1048[1][9],&l_1042,&l_1038[1],(void*)0},{&l_1048[3][1],&l_1043,&l_1043,&l_1009,&l_1042},{&l_1034,(void*)0,&l_1046,(void*)0,&l_1046},{&l_1042,&l_1042,&l_1048[1][8],&l_1042,&l_1036}},{{(void*)0,&l_1034,&l_1037,(void*)0,&l_1048[1][9]},{&l_1043,&l_1048[3][1],&l_1038[1],&l_1038[1],&l_1048[3][1]},{&l_1048[1][9],&l_1034,&l_1034,(void*)0,(void*)0},{&l_1047,&l_1042,&l_1047,&l_1038[1],&l_1042},{(void*)0,(void*)0,&l_1041,&l_1035,&l_997}},{{&l_1045,&l_1043,(void*)0,&l_1042,&l_1042},{&l_1046,&l_1048[1][9],&l_1041,&l_997,&l_1046},{&l_1043,&l_1047,&l_1047,&l_1043,&l_1040},{&l_1035,(void*)0,&l_1034,&l_1038[1],(void*)0},{&l_1040,&l_1045,&l_1038[1],&l_1043,&l_1042}},{{&l_1034,&l_1046,(void*)0,(void*)0,(void*)0},{&l_1045,&l_1036,&l_1037,&l_1036,&l_1045},{(void*)0,&l_1046,&l_1041,&l_1037,(void*)0},{&l_1042,&l_1043,&l_1038[1],&l_1045,&l_1040},{&l_1046,&l_1035,(void*)0,&l_1046,(void*)0}},{{&l_1043,&l_1045,&l_1048[3][1],&l_1048[3][1],&l_1045},{(void*)0,(void*)0,&l_997,&l_1038[1],(void*)0},{&l_1043,&l_1042,&l_1044,&l_1042,&l_1038[1]},{&l_1037,&l_1046,(void*)0,&g_27,&l_1034},{&l_1043,&l_1043,&l_1043,&l_1045,&l_1043}},{{(void*)0,(void*)0,&l_1034,&l_1034,&l_1048[1][9]},{&l_1043,&l_1043,&l_1009,&l_1043,&l_1042},{&l_1046,&l_1037,&l_997,(void*)0,&l_1037},{&l_1042,&l_1043,(void*)0,&l_1038[1],&l_1038[1]},{(void*)0,(void*)0,(void*)0,&l_997,&l_1038[1]}}};
                    int l_1078 = 0L;
                    int **l_1081 = &l_1031;
                    int i, j, k;
                    (*l_1081) = ((*l_991) = func_92((g_642[(l_1039 + 2)][(l_1039 + 2)][l_1039] , func_92(l_1068[4][4][1], (*l_1059), p_73, (((*l_1059) | ((*g_912) ^= (safe_mul_func_uint16_t_u_u((*g_818), ((l_1079 |= ((***g_1030) = (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u((func_86(&l_1048[0][5], (l_1008 = l_1075), ((safe_lshift_func_uint8_t_u_s(p_73, l_1078)) , p_73), p_73, g_967) , (***g_1030)), 4)) >= p_73) && p_73), p_73)))) != 0x5AL))))) & g_62[4]))), l_1080[4], p_73, p_73));


                    ;
                    if ((safe_add_func_uint32_t_u_u((((**g_760) , (*g_761)) > (((*l_998) = (***g_1030)) , ((*l_1059) |= (func_127(l_1084, ((*g_964) && p_73)) , (0xD61DL >= (*g_818)))))), p_73)))
                    {
                        (*l_1081) = &l_1009;

                        ;
                        (*g_964) ^= (((**l_1016) ^= (0x277C6289L & p_73)) <= p_73);
                        (*l_991) = &l_1043;
                        return (*g_818);



                    }
                    else
                    {
                        return p_73;



                    }
                }
            }


            for (l_1021 = (-24); (l_1021 > 2); ++l_1021)
            {
                unsigned l_1089 = 0xDBBEC1F3L;
                int l_1103 = 0x61893E06L;
                int *l_1104 = &l_1041;
                for (g_967 = (-23); (g_967 > 27); g_967 = safe_add_func_int32_t_s_s(g_967, 9))
                {
                    unsigned char *l_1092[2];
                    int *l_1110 = &l_1034;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1092[i] = &g_483;
                    for (g_146 = 1; (g_146 >= 0); g_146 -= 1)
                    {
                        (*g_964) = (l_1089 , p_73);
                        (*g_964) = 0x149DA59BL;
                        (*l_1031) = (safe_rshift_func_int16_t_s_s(func_86((p_73 , ((*l_991) = &l_1044)), l_1092[1], p_73, g_483, l_1089), 8));
                        (*g_964) |= 4L;
                    }
                    (*l_991) = &l_1023;
                    if (func_127((l_1089 , (p_73 , ((((((*l_1031) & ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((((l_1089 || (((*g_761) , &l_1049) != (void*)0)) >= (safe_div_func_int16_t_s_s(g_1101, (*g_818)))) ^ 0xF074L) != p_73), p_73)) >= 0x9932L), l_1089)) > (***g_1030))) , (-4L)) ^ 0UL) && (*g_761)) , 0xA7L))), p_73))
                    {
                        l_1103 = func_114(&g_483, l_1102);
                    }
                    else
                    {
                        unsigned char l_1108 = 0x13L;
                        int *l_1111 = &l_1103;
                        int *l_1112 = &l_997;
                        int *l_1113[2][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1113[i][j] = (void*)0;
                        }
                        l_1104 = &l_1023;

                        ;
                        l_1110 = ((*l_991) = (((safe_mod_func_uint16_t_u_u((0UL >= (*l_1031)), (*g_818))) && 8UL) , func_92(((*l_991) = func_92(&l_1044, ((((g_1101 , l_1107) || ((l_1108 || (((0x05AC4746L > (*l_1031)) > l_1109) , 0x62L)) | 0x1A2FBF39L)) | l_1023) || 65534UL), p_73, p_73)), g_37, p_73, p_73)));

                        ;
                        --g_1114;
                    }

                    ;
                }

                ;
                (*g_964) ^= p_73;
                for (g_967 = 0; (g_967 <= 29); g_967++)
                {
                    for (l_1035 = 0; (l_1035 <= 3); l_1035 += 1)
                    {
                        unsigned l_1119 = 1UL;
                        ++l_1119;
                        return p_73;



                    }
                    for (g_389 = (-22); (g_389 < (-26)); g_389 = safe_sub_func_int8_t_s_s(g_389, 9))
                    {
                        l_1031 = &l_1103;

                        ;
                    }

                    ;
                    if ((*l_1031))
                    {
                        return (*g_818);



                    }
                    else
                    {
                        return p_73;



                    }
                }
            }


        }



    }
    else
    {
        short *l_1130[8] = {&g_834,&g_834,&g_834,&g_834,&g_834,&g_834,&g_834,&g_834};
        short **l_1131[5] = {&l_1130[5],&l_1130[5],&l_1130[5],&l_1130[5],&l_1130[5]};
        int l_1132 = 0x193C146DL;
        int l_1145 = (-8L);
        unsigned *l_1162 = &l_1137;
        unsigned char *l_1192[9] = {&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37};
        unsigned l_1201 = 4294967291UL;
        int l_1216 = 4L;
        int l_1218 = 0x0129BEDEL;
        int l_1219 = (-3L);
        unsigned char l_1261 = 0xECL;
        unsigned char l_1275 = 0x8CL;
        unsigned l_1315 = 5UL;
        char **l_1330 = &l_998;
        short l_1383 = 0x9C18L;
        int l_1387 = 0x1DA3EEDDL;
        int i;
        if ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(func_114(((safe_div_func_int32_t_s_s(func_114(&g_483, (l_996[0][0] = l_1130[3])), (p_73 , (((0x3DAF8D72L != (((((l_1132 == (safe_rshift_func_uint8_t_u_u(p_73, (safe_sub_func_int16_t_s_s((1L > 1UL), p_73))))) < 255UL) , l_1132) != l_1137) || p_73)) | 0xF1L) && 0x5AF2L)))) , &g_483), &g_834), l_1132)), g_37)))
        {
            short l_1140 = (-1L);
            unsigned char *l_1146 = (void*)0;
            int *l_1156 = (void*)0;
            unsigned short l_1169 = 1UL;
            int l_1182 = (-1L);
            int l_1183 = (-1L);
            int l_1188 = 0xD85D9701L;
            unsigned l_1189 = 0x0E45D03AL;
            unsigned short l_1204 = 0UL;
            int l_1210 = 0x4FAD239CL;
            char l_1220 = (-6L);
            int l_1259 = 0x483D69BBL;
            unsigned l_1306 = 0xB9D4DC36L;
            unsigned short l_1310 = 1UL;
            int l_1313 = 0L;
            unsigned l_1341 = 0x4622669BL;
            unsigned short *l_1363 = &l_1169;
lbl_1338:
            if ((p_73 <= (((*g_761) = ((func_86(((l_1140 ^ (0x2AL & (p_73 , ((*l_998) = (safe_mod_func_int8_t_s_s((l_1132 = (safe_div_func_int16_t_s_s(p_73, (((*g_761) = ((func_114(l_992, &l_1017[0][0][9]) | p_73) , (**g_760))) || (**g_760))))), l_1145)))))) , &l_1145), l_1146, l_1140, g_17, g_133[0]) , l_1140) & 0x13L)) >= l_1107)))
            {
                unsigned l_1159 = 4294967295UL;
                int l_1185 = 0xA984BCABL;
                int l_1187[10] = {0x87C5E5FFL,4L,0x87C5E5FFL,4L,0x87C5E5FFL,4L,0x87C5E5FFL,4L,0x87C5E5FFL,4L};
                int i;
                (*g_912) = l_1140;
                for (g_345 = 2; (g_345 >= 0); g_345 -= 1)
                {
                    short ***l_1148 = &l_1131[3];
                    short ****l_1147 = &l_1148;
                    int l_1158 = (-1L);
                    int l_1184 = 1L;
                    int l_1186 = (-1L);
                    int i;
                    for (g_834 = 0; g_834 < 8; g_834 += 1)
                    {
                        l_1130[g_834] = &l_1017[0][8][9];
                    }
                    if (((((*l_1147) = &l_1131[0]) == l_1149) , ((l_1140 || (safe_lshift_func_int8_t_s_u((p_73 | ((*l_994) &= (p_73 , (l_1157 = (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((((((void*)0 != l_1156) & (((((*g_785) , func_127(p_73, p_73)) , (*g_761)) , l_1132) != p_73)) , l_1035) | 0x54L), g_1101)), 0xD9L)))))), p_73))) || l_1132)))
                    {
                        l_1159++;
                    }
                    else
                    {
                        (*g_912) = (&l_1132 == (void*)0);
                        return l_1158;


                    }
                    (*l_991) = func_92(((&l_1159 != l_1162) , &l_1158), (p_73 ^ (safe_sub_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(p_73, p_73)) && ((safe_div_func_uint8_t_u_u(((((*l_998) = (l_1080[(g_345 + 1)] = ((l_1159 & l_1159) , l_1158))) != 1L) || l_1158), p_73)) ^ 0xA93EL)) ^ (*g_761)), l_1169))), p_73, p_73);


                    for (g_834 = 0; (g_834 >= 0); g_834 -= 1)
                    {
                        int *l_1178 = &g_1179;
                        unsigned char *l_1180[1][10] = {{&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37,&g_37}};
                        int *l_1181[8][8] = {{&g_17,&l_1041,(void*)0,&l_1042,(void*)0,&l_1041,&g_17,&l_1041},{&g_17,&l_1042,&l_1035,&l_1042,&g_17,&l_1145,&g_17,&l_1042},{(void*)0,&l_1042,(void*)0,&l_1041,&g_17,&l_1041,(void*)0,&l_1042},{&g_17,&l_1041,(void*)0,&l_1042,(void*)0,&l_1041,&g_17,&l_1041},{&g_17,&l_1042,&l_1035,&l_1042,&g_17,&l_1145,&g_17,&l_1042},{(void*)0,&l_1042,(void*)0,&l_1041,&g_17,&l_1041,(void*)0,&l_1042},{&g_17,&l_1041,(void*)0,&l_1042,(void*)0,&l_1041,&g_17,&l_1041},{&g_17,&l_1042,&l_1035,&l_1042,&g_17,&l_1145,&g_17,&l_1042}};
                        int i, j;
                        (*l_991) = l_1156;
                        (*g_964) = (func_127((g_62[0] , p_73), (safe_mod_func_int8_t_s_s(((**g_760) == (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(func_127(g_166[5][1][0], p_73), (func_86(func_92(&g_27, ((*l_1178) = (safe_rshift_func_uint8_t_u_u(((((*g_785) |= (((*l_998) = ((((((void*)0 != &g_912) > p_73) | p_73) | p_73) | p_73)) < (-7L))) || 6UL) , 0xEFL), 6))), p_73, p_73), l_1180[0][0], p_73, p_73, p_73) > (*g_912)))) != p_73) || (*g_818)), p_73))), l_1158))) >= p_73);
                        l_1189++;
                        if (p_73)
                            break;
                    }
                    for (l_997 = 2; (l_997 >= 0); l_997 -= 1)
                    {
                        (*g_964) ^= ((*g_912) = (-7L));
                    }
                }
            }
            else
            {
                short *l_1193 = &l_1157;
                int l_1198 = 1L;
                int l_1202 = 0x304838BFL;
                int l_1214 = 0x92689F7BL;
                int l_1217 = (-3L);
                int l_1221 = 3L;
                int l_1260 = (-1L);
                unsigned char *l_1267 = &l_1261;
                unsigned *l_1268 = &l_1109;
                unsigned char l_1289 = 0UL;
                if (func_114(l_1192[6], l_1193))
                {
                    int l_1203 = 0L;
                    (*g_964) &= (((safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((p_73 , 0xD53B7E0BL), p_73)), (l_1198 = 0x7BL))) | (safe_div_func_uint8_t_u_u(p_73, 0x8AL))) > ((l_1201 == ((l_1202 ^ func_86(((*l_991) = ((((**g_760) , 4UL) || p_73) , &l_1145)), &g_37, l_1203, p_73, l_1204)) == p_73)) == p_73));
                }
                else
                {
                    short *l_1205 = &g_62[1];
                    (*g_964) ^= ((l_1201 == (p_73 | func_114(l_1146, l_1205))) ^ g_1206);
                }
                for (l_1198 = 23; (l_1198 < (-19)); l_1198 = safe_sub_func_int32_t_s_s(l_1198, 4))
                {
                    int *l_1209 = &l_1188;
                    int *l_1211 = (void*)0;
                    int *l_1212 = &l_1035;
                    int *l_1213[8] = {&l_1045,&g_27,&l_1045,&g_27,&l_1045,&g_27,&l_1045,&g_27};
                    unsigned short l_1222 = 0x13D1L;
                    int l_1238 = 0L;
                    int *l_1239 = &g_1179;
                    unsigned l_1246 = 0x4FEA66E2L;
                    int i;
                    ++l_1222;
                    for (g_1179 = 0; (g_1179 == (-5)); g_1179 = safe_sub_func_uint16_t_u_u(g_1179, 5))
                    {
                        unsigned *l_1237 = &g_967;
                        (*l_1209) |= ((g_133[0] , ((((((safe_sub_func_int8_t_s_s(l_1218, ((*l_998) &= (safe_sub_func_uint8_t_u_u(p_73, 0x50L))))) | ((((((*g_761) >= ((func_86(&l_1217, &g_483, p_73, (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(((*g_818) = (((*l_1237) ^= (safe_rshift_func_uint16_t_u_u(l_1145, 7))) < 0xB607794CL)), 4)) && p_73), 0xD2L)) , 0x81L) , 0x08D85D63L), g_345) <= p_73) <= 0xF463L)) < p_73) , 1L) , &p_73) != g_964)) <= 0x75D8L) , 0x9C93L) , p_73) < (*g_912))) | 0xCAL);
                    }
                    if (p_73)
                        continue;
                    (*l_991) = (l_1211 = func_92(func_92(&l_1188, ((*g_785) , ((*l_1239) = (func_127(p_73, l_1238) ^ 0x2F592CC5L))), (safe_rshift_func_uint8_t_u_s((p_73 >= (safe_mod_func_uint32_t_u_u(((*g_761) = ((l_1217 <= ((((safe_lshift_func_uint16_t_u_u(p_73, 12)) && p_73) , l_1219) , (*g_964))) , 9UL)), l_1132))), 7)), p_73), p_73, l_1246, p_73));

                    ;
                }
                if (p_73)
                {
                    return (*g_818);


                }
                else
                {
                    unsigned l_1251 = 0x5821E008L;
                    int l_1252 = 8L;
                    int l_1253 = (-1L);
                    int *l_1254 = &l_1252;
                    int *l_1255 = &l_1219;
                    int *l_1256 = (void*)0;
                    int *l_1257 = &l_1202;
                    int *l_1258[3][5][8] = {{{&l_1221,(void*)0,&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0},{&l_1221,(void*)0,&l_1132,(void*)0,&l_1221,(void*)0,&l_1221,(void*)0},{&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0,&l_1218,(void*)0},{&l_1221,(void*)0,&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0},{&l_1221,(void*)0,&l_1132,(void*)0,&l_1221,(void*)0,&l_1221,(void*)0}},{{&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0,&l_1218,(void*)0},{&l_1221,(void*)0,&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0},{&l_1221,(void*)0,&l_1132,(void*)0,&l_1221,(void*)0,&l_1221,(void*)0},{&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0,&l_1218,(void*)0},{&l_1221,(void*)0,&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0}},{{&l_1221,(void*)0,&l_1132,(void*)0,&l_1221,(void*)0,&l_1221,(void*)0},{&l_1218,(void*)0,&l_1218,(void*)0,&l_1221,(void*)0,&l_1218,(void*)0},{&l_1221,(void*)0,&l_1218,(void*)0,&l_1132,(void*)0,&l_1218,(void*)0},{&l_1218,(void*)0,&l_1221,(void*)0,&l_1218,(void*)0,&l_1218,(void*)0},{&l_1132,(void*)0,&l_1132,(void*)0,&l_1218,(void*)0,&l_1132,(void*)0}}};
                    int i, j, k;
                    (*g_912) ^= ((*g_964) ^= (safe_sub_func_uint8_t_u_u(p_73, 0UL)));
                    for (l_1145 = 0; (l_1145 < (-18)); --l_1145)
                    {
                        (*g_964) |= (!func_114(&g_37, &g_389));
                        if (l_1251)
                            break;
                    }
                    l_1261--;
                }
                for (l_1145 = (-2); (l_1145 < (-30)); l_1145 = safe_sub_func_uint32_t_u_u(l_1145, 3))
                {
                    int *l_1266 = &l_1188;
                    if ((g_177[6] , ((1UL | (((*l_1162) = (l_1202 , p_73)) , func_86(((*l_991) = func_92(l_1266, func_86(l_1266, l_1267, (l_1268 == (void*)0), p_73, g_139[4][0][1]), p_73, l_1132)), &g_37, p_73, g_483, g_1022))) < l_1261)))
                    {
                        int l_1269 = 0xB59F83EDL;
                        int *l_1270 = &l_1202;
                        int *l_1271 = &l_1183;
                        int *l_1272 = &l_1260;
                        int *l_1273 = &l_1188;
                        int *l_1274[6] = {&l_1259,(void*)0,(void*)0,&l_1259,(void*)0,(void*)0};
                        int i;
                        (*g_912) ^= l_1269;
                        l_1275--;
                        (*l_1266) |= p_73;
                        (*l_1271) ^= p_73;
                    }
                    else
                    {
                        unsigned short l_1280[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        int l_1281[10] = {0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL,0x1A42722BL};
                        short l_1288[7][5][7] = {{{(-8L),0x1E53L,0xAD09L,0xD3F8L,0x7EEAL,(-5L),0x5792L},{0x5748L,0L,(-1L),1L,0L,2L,0x3FB4L},{0x1C56L,0xCDCCL,1L,0x8DD1L,(-1L),0xB37EL,0xAD09L},{0x398CL,(-1L),0x553BL,0xDD4DL,0x68E2L,0x41E4L,2L},{0x1E53L,(-1L),(-2L),5L,(-1L),0xEE3EL,(-1L)}},{{0x67FFL,0x8E59L,0x41E4L,0xCB6BL,2L,0xC4E0L,(-6L)},{(-5L),0xB9B2L,(-1L),1L,(-1L),1L,(-1L)},{0x1C3CL,0x1C3CL,0x39F7L,8L,0x9ADCL,(-4L),0x4177L},{5L,(-10L),5L,0x538DL,0xD3F8L,0x8EC6L,(-9L)},{(-6L),0L,0x398CL,0x68E2L,0x9ADCL,3L,0x0D90L}},{{2L,(-8L),0x538DL,(-1L),1L,0xFCA1L,0xD776L},{1L,1L,0x6E01L,0L,0x41E4L,0x9FB5L,0x9BA0L},{0x1DA1L,1L,0x2883L,0L,(-1L),1L,0x8DD1L},{0xC4E0L,0L,3L,0xCB6BL,8L,0x666AL,1L},{(-1L),0x8EC6L,0xEE3EL,0x5072L,0L,0x5792L,0x5792L}},{{0x9FB5L,(-1L),(-1L),(-1L),0x9FB5L,2L,(-4L)},{0x290CL,1L,0x7EEAL,(-8L),(-5L),0x538DL,0x5072L},{0x5748L,0x8045L,(-1L),0x9FB5L,1L,0L,8L},{0x290CL,(-8L),0x7F85L,0xEE3EL,0xC9FDL,0x5B50L,(-10L)},{0x9FB5L,0x398CL,0x666AL,0x4177L,0x39F7L,(-1L),(-9L)}},{{(-1L),0x5B50L,(-9L),0xFCA1L,0x1E53L,0x84AEL,0L},{(-1L),1L,0xDD4DL,0x67FFL,0x8E59L,0x41E4L,0xCB6BL},{0x10F5L,0x926BL,(-1L),0x7EEAL,0xFCA1L,0x1DA1L,0x5072L},{(-9L),(-1L),0x666AL,0x0D90L,0x0D90L,0x666AL,(-1L)},{0xE9A6L,0x1C56L,0x4CF6L,0L,0x1DA1L,0xCDCCL,(-8L)}},{{0xE3C2L,0L,0xC4E0L,0xB275L,0x398CL,0L,0x9FB5L},{0xB7A0L,(-1L),(-5L),0L,(-1L),7L,0xEE3EL},{0L,0x9FB5L,1L,0x0D90L,0x8EE7L,0x67FFL,0x4177L},{7L,0xB37EL,8L,0x7EEAL,0x4CF6L,0L,0xFCA1L},{0x39F7L,0x553BL,0L,0x67FFL,0xDCC1L,1L,0x9ADCL}},{{(-5L),(-1L),0xEE3EL,0x5792L,0x7F85L,0x926BL,0xB9B2L},{1L,0x5748L,0xCB6BL,1L,2L,0x9ADCL,2L},{(-2L),0xA43DL,0xA43DL,(-2L),0L,0xC7F3L,0xB37EL},{1L,1L,0L,1L,(-1L),(-1L),0x398CL},{(-8L),1L,(-1L),(-1L),0x538DL,0xEE3EL,0L}}};
                        int i, j, k;
                        if (l_1218)
                            break;
                        if (l_1198)
                            continue;
                        (*g_912) ^= (((!(*l_1266)) != func_86(((*l_991) = (((*l_1268) = (safe_add_func_int16_t_s_s((((l_1281[2] = l_1280[7]) && (safe_mod_func_int32_t_s_s((-9L), p_73))) , (+((*l_994) = (safe_lshift_func_int16_t_s_u((p_73 , func_86(&l_1216, l_1267, (l_1281[6] &= ((safe_sub_func_uint32_t_u_u(((*l_1268) = (*g_761)), l_1288[1][3][3])) , (*l_1266))), l_1132, g_967)), p_73))))), (*l_1266)))) , l_1266)), l_1267, l_1289, l_1290[3][9], g_139[4][0][1])) < p_73);
                    }
                    (*g_964) = p_73;
                    l_1216 = p_73;
                }
            }
            for (g_834 = 1; (g_834 >= 0); g_834 -= 1)
            {
                int *l_1299 = &l_1041;
                unsigned short ***l_1334 = &l_1055;
                unsigned char *l_1335 = &g_1022;
                unsigned char l_1350 = 255UL;
                short *l_1386[10] = {&l_1215,(void*)0,&g_389,&g_389,(void*)0,&l_1215,(void*)0,&g_389,&g_389,(void*)0};
                int *l_1388[6][1] = {{&l_1045},{&l_1132},{&l_1045},{&l_1132},{&l_1045},{&l_1132}};
                int i, j;
                for (g_100 = 0; (g_100 <= 9); g_100 += 1)
                {
                    int i;
                    (*g_912) |= ((safe_mul_func_uint8_t_u_u(l_1080[g_834], (safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((g_139[2][2][0] , (safe_mod_func_uint16_t_u_u((*g_818), func_86(l_1299, l_1146, ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(l_1218, p_73)), (safe_add_func_int32_t_s_s(((l_1306 | p_73) , p_73), p_73)))) ^ 0x0BL), g_389, g_642[4][5][0])))), p_73)), p_73)))) | (**g_760));
                    if (l_1216)
                        break;
                    for (g_483 = 0; (g_483 <= 5); g_483 += 1)
                    {
                        int *l_1307 = (void*)0;
                        int *l_1308 = (void*)0;
                        int *l_1309[10][8] = {{&l_1182,&l_1218,&l_1045,&l_1218,&l_1182,&l_1145,&l_1219,(void*)0},{&l_1182,&l_1145,&l_1219,(void*)0,&l_1219,&l_1145,&l_1182,&l_1218},{(void*)0,&l_1218,&l_1219,(void*)0,(void*)0,(void*)0,&l_1219,&l_1218},{&l_1219,(void*)0,&l_1045,(void*)0,(void*)0,&l_1218,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_1218,&l_1219,(void*)0,(void*)0,(void*)0},{&l_1182,&l_1218,&l_1045,&l_1218,&l_1182,&l_1145,&l_1219,(void*)0},{&l_1182,&l_1145,&l_1219,(void*)0,&l_1219,&l_1145,&l_1182,&l_1218},{(void*)0,&l_1218,&l_1219,(void*)0,(void*)0,(void*)0,&l_1219,&l_1218},{&l_1219,(void*)0,&l_1045,(void*)0,(void*)0,&l_1218,(void*)0,(void*)0},{(void*)0,(void*)0,&l_1219,&l_1145,&l_1182,&l_1218,&l_1045,&l_1218}};
                        int i, j, k;
                        --l_1310;
                        l_1132 = (((**g_760) |= g_139[g_483][g_483][g_834]) <= (p_73 ^ ((g_786[g_483] = (p_73 , (void*)0)) != (void*)0)));
                    }
                }
                (*l_1299) = l_1313;
                for (g_1179 = 9; (g_1179 >= 0); g_1179 -= 1)
                {
                    int *l_1314[7] = {&l_1045,&l_1216,&l_1216,&l_1045,&l_1216,&l_1216,&l_1045};
                    int i;
                    l_1315++;
                    (*g_912) |= (safe_lshift_func_uint8_t_u_s(((**g_760) ^ p_73), p_73));
                    for (l_1219 = 9; (l_1219 >= 0); l_1219 -= 1)
                    {
                        char **l_1331[1][8][8] = {{{(void*)0,&l_998,&l_998,&l_998,(void*)0,(void*)0,&l_998,&l_998},{&l_998,(void*)0,&l_998,&l_998,(void*)0,(void*)0,&l_998,&l_998},{&l_998,&l_998,&l_998,&l_998,&l_998,&l_998,&l_998,&l_998},{(void*)0,&l_998,&l_998,&l_998,(void*)0,(void*)0,(void*)0,&l_998},{&l_998,&l_998,(void*)0,(void*)0,&l_998,(void*)0,&l_998,(void*)0},{&l_998,&l_998,&l_998,&l_998,(void*)0,&l_998,&l_998,(void*)0},{(void*)0,&l_998,&l_998,(void*)0,&l_998,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_998,&l_998,(void*)0,(void*)0,&l_998,(void*)0}}};
                        char ***l_1332 = (void*)0;
                        char ***l_1333 = &l_1331[0][7][4];
                        int l_1337 = 0x600EAFD2L;
                        int i, j, k;
                        (*g_964) ^= ((*g_912) ^= (safe_mod_func_int8_t_s_s(g_139[(g_834 + 2)][(g_834 + 1)][g_834], (safe_mod_func_uint32_t_u_u(g_139[(g_834 + 4)][g_834][g_834], ((safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_139[(g_834 + 2)][(g_834 + 1)][g_834], p_73)), (safe_mod_func_uint16_t_u_u(func_86((l_1299 = (void*)0), ((l_1330 == ((*l_1333) = l_1331[0][5][7])) , l_1146), ((((l_1334 = l_1334) == (void*)0) ^ p_73) <= 1UL), g_166[1][2][0], g_177[1]), l_1261)))) && p_73))))));

                        ;
                        l_1337 = func_86(l_1299, l_1335, p_73, (p_73 , l_1275), g_1336[5]);
                        if (l_1137)
                            goto lbl_1338;
                    }
                }

                ;
                if (func_114(((safe_mod_func_int32_t_s_s(((*g_964) | p_73), l_1341)) , &l_1275), &l_1140))
                {
                    (*g_912) = func_114(l_992, &l_1017[0][9][8]);
                }
                else
                {
                    short *l_1348 = &l_1017[0][6][8];
                    int l_1349 = 0xC9301E3BL;
                    int *l_1351[5] = {&l_1216,&l_1216,&l_1216,&l_1216,&l_1216};
                    unsigned short **l_1357[8] = {&g_818,&g_818,&g_818,&g_818,&g_818,&g_818,&g_818,&g_818};
                    int i;
                    l_1218 ^= (safe_mod_func_uint8_t_u_u(((((**g_760) = ((p_73 , &l_1131[2]) != &g_562)) > ((*g_964) = (safe_mod_func_int8_t_s_s(l_1275, p_73)))) , (l_1349 = ((((*g_964) = p_73) | (safe_mul_func_int16_t_s_s(((func_114(l_998, l_1348) | l_1349) > l_1350), l_1219))) , p_73))), l_1315));
                    for (l_1157 = 0; (l_1157 <= 9); l_1157 += 1)
                    {
                        short *l_1356[5];
                        int *l_1358[3];
                        int l_1366 = 0x04CC151CL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1356[i] = &l_1140;
                        for (i = 0; i < 3; i++)
                            l_1358[i] = &l_1313;
                        g_1352 = &l_998;

                        ;
                        (*l_991) = (p_73 , func_92(l_1299, g_133[0], (!p_73), ((safe_sub_func_uint32_t_u_u((func_114(&l_1350, l_1356[0]) , 0x1ECD1C7CL), ((void*)0 != l_1357[7]))) , p_73)));
                        (*l_991) = func_92(&l_1145, (g_133[0] = p_73), p_73, ((*l_1348) = (safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((func_86(func_92(l_1299, ((*l_1055) != l_1363), (((void*)0 == l_992) && (safe_sub_func_uint8_t_u_u(p_73, 0x86L))), p_73), &g_483, p_73, g_62[0], g_1114) || l_1261) & 7UL), 0x5169L)) != (**g_1352)), p_73))));
                        return l_1366;



                    }
                    for (l_1259 = 0; (l_1259 <= 9); l_1259 += 1)
                    {
                        (*g_964) = ((*g_964) == l_1145);
                    }
                    for (g_483 = 0; (g_483 <= 1); g_483 += 1)
                    {
                        unsigned char ***l_1367 = (void*)0;
                        unsigned char ***l_1368 = (void*)0;
                        unsigned char **l_1370 = &l_1146;
                        unsigned char ***l_1369 = &l_1370;
                        (*l_1369) = (void*)0;

                        ;
                    }
                }
                for (l_1210 = 0; (l_1210 <= 1); l_1210 += 1)
                {
                    unsigned short l_1373 = 7UL;
                    unsigned char *l_1380 = (void*)0;
                    (*l_991) = l_1299;
                    (*l_991) = (void*)0;
                    (*l_991) = func_92((((((*g_785) , (((0x27L == (safe_sub_func_int32_t_s_s(((l_1373 & ((safe_mod_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((((void*)0 != l_1380) , (safe_lshift_func_int8_t_s_u(l_1383, ((safe_sub_func_int8_t_s_s((func_114(&g_1022, l_1386[1]) || 1L), p_73)) , p_73)))), p_73)) != p_73), 6)) < 0x8CD5BFDAL) & (-1L)), l_1387)) == p_73)) & p_73), 0x762A16D5L))) >= 4294967294UL) , l_1373)) , (*g_818)) <= 65535UL) , l_1388[4][0]), p_73, l_1132, l_1389[0][0][9]);
                    for (g_345 = 1; (g_345 >= 0); g_345 -= 1)
                    {
                        (*g_912) &= l_1201;
                        return (*g_818);


                    }
                }
            }
        }
        else
        {
            int *l_1390 = (void*)0;
            unsigned *l_1395[2];
            int l_1396 = 0xB4BCCB4EL;
            int *l_1400 = &l_1387;
            int **l_1399 = &l_1400;
            int ***l_1401[2][4] = {{&l_1399,&l_1399,&l_1399,&l_1399},{&l_1399,&l_1399,&l_1399,&l_1399}};
            int **l_1402 = (void*)0;
            char l_1413[7][4] = {{0x52L,0xEFL,0x52L,0x9FL},{0x52L,0x9FL,0x9FL,0x52L},{0x5BL,0x9FL,(-1L),0x9FL},{0x9FL,0xEFL,(-1L),(-1L)},{0x5BL,0x5BL,0x9FL,(-1L)},{0x52L,0xEFL,0x52L,0x9FL},{0x52L,0x9FL,0x9FL,0x52L}};
            unsigned short *l_1414[2][5] = {{&l_1020,(void*)0,&l_1020,(void*)0,&l_1020},{&g_779,&g_779,&g_779,&g_779,&g_779}};
            unsigned l_1415 = 0x0BFDE210L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1395[i] = &l_1049;
            (*l_991) = func_92(func_92(l_1390, (safe_add_func_uint8_t_u_u((&l_1137 == &g_1336[0]), ((++(*g_761)) | (((l_1396 = p_73) | (0x99L == ((**g_1352) = ((l_1402 = l_1399) != (l_1403 = l_1403))))) >= func_127((safe_rshift_func_int16_t_s_s((!((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((l_1415 = (safe_lshift_func_uint16_t_u_u((((l_1413[3][3] = p_73) , ((*g_818) = (0L >= p_73))) , (*g_818)), 7))), 0x8C41L)) == 0xEDL) , p_73), 6)) | p_73)), l_1315)), p_73))))), p_73, p_73), g_62[2], p_73, l_1387);

            ;
        }






        for (g_779 = 0; (g_779 > 15); g_779 = safe_add_func_uint32_t_u_u(g_779, 6))
        {
            int **l_1418 = &l_97;
            (*l_1418) = ((*l_991) = &l_1145);

            ;
            (*g_964) = (p_73 && ((safe_lshift_func_int8_t_s_u((((safe_mod_func_int16_t_s_s(p_73, (*l_97))) | 0x71788A03L) < (func_86(&l_1042, &g_1114, (**l_1418), ((safe_mul_func_int16_t_s_s((**l_1418), (safe_add_func_uint32_t_u_u((*g_761), (*g_761))))) , g_642[2][4][1]), (**l_1418)) <= p_73)), (*g_785))) , 0UL));
        }

        ;
    }







    for (l_995 = 0; (l_995 <= 0); l_995 += 1)
    {
        unsigned short l_1427[1];
        int *l_1428 = &l_997;
        int l_1458 = 0x44D63457L;
        char *l_1463 = &g_735;
        int ***l_1481 = &l_991;
        char l_1485 = 0x7BL;
        int l_1494 = 0x4CFCE722L;
        int l_1495 = (-5L);
        int l_1498 = 0x958ED744L;
        int l_1499 = (-9L);
        int l_1502 = 3L;
        int l_1504 = 0xCDD14248L;
        int l_1505[9][5] = {{0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL},{0L,0L,0L,0L,0L},{0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL},{0L,0L,0L,0L,0L},{0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL},{0L,0L,0L,0L,0L},{0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL},{0L,0L,0L,0L,0L},{0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL,0x34FB2790L,0xDF8F0F9CL}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1427[i] = 0xD74DL;
        (*g_912) &= l_1080[(l_995 + 1)];
        for (l_1020 = 0; (l_1020 <= 5); l_1020 += 1)
        {
            int l_1429 = 9L;
            int l_1441[1][7];
            char *l_1462 = &l_995;
            int **l_1464[8][9] = {{&g_912,&l_1428,&g_912,&g_912,&l_1428,&g_912,&g_912,&l_1428,&g_912},{&g_912,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97},{&l_97,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97},{&l_97,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97},{&l_97,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97},{&l_97,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97},{&l_97,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97},{&l_97,&g_912,&l_97,&l_97,&g_912,&l_97,&l_97,&g_912,&l_97}};
            unsigned short ***l_1486 = &l_1055;
            unsigned char *l_1491 = &g_1022;
            unsigned l_1507 = 0xA06B8FABL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1441[i][j] = (-8L);
            }
            if (l_1427[0])
            {
                unsigned char *l_1430 = &g_1022;
                int l_1433 = (-1L);
                (*g_964) = func_86(l_1428, &g_483, l_1429, g_139[4][0][1], func_86(&l_1429, l_1430, (safe_add_func_int8_t_s_s(p_73, 254UL)), l_1433, p_73));
                return p_73;


            }
            else
            {
                int *l_1434 = (void*)0;
                int *l_1435 = (void*)0;
                int *l_1436 = &l_997;
                int *l_1437 = (void*)0;
                int *l_1438 = (void*)0;
                int l_1439 = 0x9B755C9AL;
                int *l_1440 = &l_1036;
                int *l_1442 = (void*)0;
                int *l_1443 = &l_1040;
                int *l_1444 = &l_1040;
                int *l_1445 = &l_1439;
                int *l_1446 = &g_27;
                int l_1447 = (-1L);
                int *l_1448 = &l_1447;
                int *l_1449 = &l_1447;
                int *l_1450 = &l_1035;
                int *l_1451 = &l_1447;
                int *l_1452 = &l_1045;
                int *l_1453 = &l_1429;
                int *l_1454 = (void*)0;
                int *l_1455 = (void*)0;
                int *l_1456 = &g_27;
                int *l_1457[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_1457[i] = (void*)0;
                ++l_1459;
                (*l_1452) = ((*l_1444) = (l_1462 == (l_1463 = &l_1080[(l_995 + 1)])));

                ;
            }

            ;
            l_97 = ((*l_991) = &l_1458);

            ;
            (*l_991) = (void*)0;
            for (g_483 = 0; (g_483 <= 0); g_483 += 1)
            {
                int *l_1465 = &l_1041;
                int ***l_1484[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1484[i] = &l_1464[6][5];
                for (l_1049 = 0; (l_1049 <= 5); l_1049 += 1)
                {
                    for (g_1114 = 0; (g_1114 <= 0); g_1114 += 1)
                    {
                        int *l_1468[2][2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1468[i][j] = &l_1441[0][0];
                        }
                        l_1468[1][0] = func_92(l_1465, l_1017[g_1114][(g_483 + 4)][(l_1020 + 1)], l_1017[g_483][(g_1114 + 2)][(g_1114 + 6)], ((safe_rshift_func_int8_t_s_s(l_1017[g_1114][(l_1020 + 4)][(g_1114 + 3)], 0)) & ((~(!(g_133[g_483] = 0x87994DE6L))) , 8UL)));


                    }
                }
                for (l_997 = 2; (l_997 <= 9); l_997 += 1)
                {
                    int ****l_1482 = (void*)0;
                    int ****l_1483 = &l_1481;
                    int i, j, k;
                    (*g_912) = l_1389[(l_995 + 1)][g_483][(g_483 + 1)];
                    l_1485 ^= (safe_mul_func_uint8_t_u_u((*l_1465), (((**g_760) & func_127(p_73, (*l_1465))) < (((safe_sub_func_uint16_t_u_u((p_73 ^ ((((*l_1483) = ((safe_div_func_uint32_t_u_u((((*l_97) = (safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((*g_785) > ((l_1080[l_1020] = (safe_add_func_uint8_t_u_u(p_73, p_73))) , 0x44L)) >= 0x8EL), p_73)), p_73))) <= (*g_964)), (*g_761))) , l_1481)) != l_1484[3]) | p_73)), g_1336[2])) , (*g_785)) != 0L))));
                }
            }
            for (l_997 = 0; (l_997 <= 5); l_997 += 1)
            {
                unsigned short ***l_1488 = &l_1055;
                unsigned short ****l_1487 = &l_1488;
                int ***l_1492[2];
                char l_1501 = (-9L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1492[i] = &l_1464[7][3];
                (*l_97) |= func_127(((l_1486 == ((*l_1487) = l_1486)) , (safe_rshift_func_int8_t_s_u(((*l_1481) == (l_1493 = (*l_1481))), 7))), l_1017[l_995][(l_1020 + 4)][(l_997 + 4)]);
                --l_1507;
                for (g_345 = 1; (g_345 <= 4); g_345 += 1)
                {
                    int i, j, k;
                    return l_1017[l_995][(l_995 + 2)][(l_1020 + 2)];


                }
            }
        }



        ;
    }
    return (*g_818);


}







static int func_86(int * p_87, unsigned char * p_88, short p_89, unsigned p_90, int p_91)
{
    unsigned l_993[1];
    int i;
    for (i = 0; i < 1; i++)
        l_993[i] = 1UL;
    return l_993[0];
}







static int * func_92(int * p_93, int p_94, short p_95, short p_96)
{
    short l_102[5] = {0x5A5EL,0x5A5EL,0x5A5EL,0x5A5EL,0x5A5EL};
    unsigned char *l_744 = &g_483;
    int *l_756 = &g_133[0];
    int l_794 = (-4L);
    int l_795 = (-10L);
    int *l_802 = (void*)0;
    unsigned **l_905[7][2][9] = {{{&g_761,&g_761,(void*)0,(void*)0,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,(void*)0,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761}},{{&g_761,(void*)0,(void*)0,(void*)0,(void*)0,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761}},{{&g_761,(void*)0,&g_761,&g_761,(void*)0,&g_761,&g_761,&g_761,(void*)0},{&g_761,&g_761,&g_761,&g_761,(void*)0,&g_761,(void*)0,(void*)0,&g_761}},{{&g_761,&g_761,(void*)0,&g_761,(void*)0,&g_761,&g_761,(void*)0,&g_761},{&g_761,&g_761,&g_761,&g_761,(void*)0,(void*)0,&g_761,(void*)0,&g_761}},{{&g_761,&g_761,&g_761,&g_761,(void*)0,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761}},{{&g_761,&g_761,&g_761,&g_761,&g_761,(void*)0,&g_761,(void*)0,&g_761},{&g_761,&g_761,(void*)0,&g_761,&g_761,(void*)0,&g_761,&g_761,&g_761}},{{&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761,&g_761},{&g_761,&g_761,&g_761,&g_761,(void*)0,&g_761,&g_761,&g_761,&g_761}}};
    int *l_910 = &l_794;
    int l_924 = 1L;
    int l_926 = 0L;
    int l_927 = 9L;
    int l_931 = 0xCC0FBC2EL;
    int l_933[2][9][8] = {{{0x9F1F9793L,(-1L),0x8EE46539L,(-1L),0x9F1F9793L,0x845E6E23L,0x9464BA09L,0x200C2B67L},{0x0229138CL,0xFD8D14C6L,0xB41A00DFL,0L,0x1914BF23L,(-4L),1L,(-1L)},{(-8L),7L,0xB41A00DFL,0xFA3AAFE7L,0xF86E90B7L,0xF975DD27L,0x9464BA09L,0x1DAED583L},{0x1914BF23L,0xB6F9A967L,0x8EE46539L,0x200C2B67L,0x365D2734L,0L,0L,0x71A0752DL},{(-1L),2L,0x73511429L,(-1L),0x90598663L,1L,0x9F1F9793L,0L},{0L,0x7CC7D8C0L,0x365D2734L,0x11DC920DL,(-1L),0xC8C5CC61L,(-1L),0x845E6E23L},{0xABCC7234L,0xF975DD27L,0x50F650A7L,0x0F758E2DL,0xA7CED94DL,(-2L),0xC8C5CC61L,(-1L)},{1L,(-1L),0x200C2B67L,0xABCC7234L,0L,(-1L),0xBE45FDB5L,0x90598663L},{9L,0x71A0752DL,0L,0xB55BA9BBL,0xB55BA9BBL,0L,0x71A0752DL,9L}},{{0xC8C5CC61L,1L,(-3L),(-2L),0x8EE46539L,2L,0x0F758E2DL,(-4L)},{0L,9L,0L,0L,(-2L),2L,2L,0x365D2734L},{0x43E0175AL,1L,(-1L),0x1A85E2AFL,0xBD808884L,0x200C2B67L,(-3L),0x9464BA09L},{0xB41A00DFL,0L,0x84D4A0C7L,0xFA3AAFE7L,0x365D2734L,0x863B4F47L,7L,0x11DC920DL},{0xABA06BFBL,7L,0x1A85E2AFL,0x90598663L,(-8L),2L,0x95E9E53EL,(-3L)},{(-4L),0x71A0752DL,7L,0x0FED7118L,0xABCC7234L,0x65CC2F59L,0x71EC4C99L,(-1L)},{0xBD808884L,0x43E0175AL,0x9464BA09L,0xB41A00DFL,(-2L),0x71EC4C99L,0L,(-8L)},{0x84D4A0C7L,0xBD808884L,0x1DAED583L,(-4L),(-3L),1L,(-3L),(-4L)},{0xFD8D14C6L,0x90598663L,0xFD8D14C6L,(-1L),0x9F1F9793L,0x71A0752DL,0xFA3AAFE7L,0x43E0175AL}}};
    unsigned l_935 = 0xFB9131F1L;
    int *l_962 = &l_933[1][1][0];
    int l_976[5][5] = {{1L,0xEE41B7C6L,1L,0xEE41B7C6L,1L},{(-4L),(-4L),0x4B07DC11L,0x4B07DC11L,(-4L)},{0x3FA4F608L,0xEE41B7C6L,0x3FA4F608L,0xEE41B7C6L,0x3FA4F608L},{(-4L),0x4B07DC11L,0x4B07DC11L,(-4L),(-4L)},{1L,0xEE41B7C6L,1L,0xEE41B7C6L,1L}};
    int *l_989 = &l_933[1][1][0];
    int **l_990 = &g_142[6];
    int i, j, k;
    for (g_27 = 0; (g_27 > (-18)); g_27 = safe_sub_func_int16_t_s_s(g_27, 6))
    {
        int l_101 = (-1L);
        unsigned *l_754 = &g_177[3];
        unsigned short *l_791 = &g_139[1][5][1];
        int *l_804 = &l_794;
        char *l_828 = &g_168;
        int l_837 = 0L;
        int *l_841 = &g_146;
        int l_925 = 0x8917FEF1L;
        int l_929[1][10];
        short l_938 = (-3L);
        unsigned char l_939 = 0xFAL;
        unsigned l_970 = 0xF79DA83AL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 10; j++)
                l_929[i][j] = 0xC9407D25L;
        }
        g_100 = p_94;
        l_102[2] = l_101;
        for (g_100 = 0; (g_100 >= 30); g_100++)
        {
            unsigned char l_105 = 0x89L;
            int **l_743 = &g_142[6];
            unsigned l_747[3][7][10] = {{{4294967295UL,0x689C885DL,4294967295UL,0xBDFE6BAAL,0x52A6CE1DL,2UL,0x169D0C59L,4294967295UL,0xBDFE6BAAL,0x07DD75AAL},{0x9E26992DL,0x73F9426EL,1UL,0x52A6CE1DL,0UL,1UL,0xADDEEF47L,4294967295UL,0xE825B920L,0UL},{0x07DD75AAL,0x39188120L,0xE825B920L,0x66CA0B49L,4294967287UL,0xABA8D58DL,0x730DF7BBL,0xE825B920L,4294967295UL,0x66CA0B49L},{0xE825B920L,4294967295UL,2UL,4294967287UL,0UL,0xABA8D58DL,0x39188120L,4294967295UL,4294967286UL,4294967286UL},{0x07DD75AAL,4294967295UL,0x52A6CE1DL,0UL,0UL,0x52A6CE1DL,4294967295UL,0x07DD75AAL,4294967295UL,0x66CA0B49L},{4294967295UL,0x39188120L,0xABA8D58DL,0UL,4294967287UL,2UL,4294967295UL,0xE825B920L,4294967286UL,0UL},{0xE825B920L,0x730DF7BBL,0xABA8D58DL,4294967287UL,0x66CA0B49L,0xE825B920L,0x39188120L,0x07DD75AAL,4294967295UL,4294967286UL}},{{0xBDFE6BAAL,0x730DF7BBL,0x52A6CE1DL,0x66CA0B49L,0UL,0x52A6CE1DL,4294967295UL,4294967295UL,4294967295UL,0UL},{0xBDFE6BAAL,0x39188120L,2UL,0UL,4294967287UL,0xE825B920L,4294967295UL,0xE825B920L,4294967287UL,0UL},{0xE825B920L,4294967295UL,0xE825B920L,4294967287UL,0UL,2UL,0x39188120L,0xBDFE6BAAL,4294967287UL,4294967286UL},{4294967295UL,4294967295UL,0x52A6CE1DL,0UL,0x66CA0B49L,0x52A6CE1DL,0x730DF7BBL,0xBDFE6BAAL,4294967295UL,0UL},{0x07DD75AAL,0x39188120L,0xE825B920L,0x66CA0B49L,4294967287UL,0x39188120L,0UL,0x99057763L,1UL,0xBBD98953L},{0x99057763L,0x66CA0B49L,4294967295UL,0x2229A571L,4294967295UL,0x39188120L,4294967286UL,0x730DF7BBL,0UL,0UL},{4294967295UL,0UL,0x98A83DB0L,4294967295UL,4294967295UL,0x98A83DB0L,0UL,4294967295UL,0x9E26992DL,0xBBD98953L}},{{0x730DF7BBL,4294967286UL,0x39188120L,4294967295UL,0x2229A571L,4294967295UL,0x66CA0B49L,0x99057763L,0UL,4294967295UL},{0x99057763L,0UL,0x39188120L,0x2229A571L,0xBBD98953L,0x99057763L,4294967286UL,4294967295UL,1UL,0UL},{4294967295UL,0UL,0x98A83DB0L,0xBBD98953L,2UL,0x98A83DB0L,0x66CA0B49L,0x730DF7BBL,0x9E26992DL,2UL},{4294967295UL,4294967286UL,4294967295UL,2UL,0x2229A571L,0x99057763L,0UL,0x99057763L,0x2229A571L,2UL},{0x99057763L,0UL,0x99057763L,0x2229A571L,2UL,4294967295UL,4294967286UL,4294967295UL,0x2229A571L,0UL},{0x730DF7BBL,0x66CA0B49L,0x98A83DB0L,2UL,0xBBD98953L,0x98A83DB0L,0UL,4294967295UL,0x9E26992DL,4294967295UL},{4294967295UL,4294967286UL,0x99057763L,0xBBD98953L,0x2229A571L,0x39188120L,0UL,0x99057763L,1UL,0xBBD98953L}}};
            short *l_755 = &g_62[0];
            int *l_762 = &g_146;
            unsigned *l_768 = &l_747[1][5][1];
            int l_807[8][1] = {{(-6L)},{1L},{(-6L)},{1L},{(-6L)},{1L},{(-6L)},{1L}};
            short ***l_819 = &g_562;
            unsigned l_867 = 0x58EFE885L;
            unsigned short l_906[1];
            int *l_908 = &l_794;
            int *l_911 = &l_101;
            short l_951 = 1L;
            int *l_966[4][2] = {{&l_794,&l_925},{&l_794,&l_794},{&l_925,&l_794},{&l_794,&l_925}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_906[i] = 0x6F4EL;
        }
    }
    (*l_990) = l_989;


    return p_93;



}







static int ** func_108(int ** p_109, unsigned char * p_110, unsigned char * p_111)
{
    unsigned char l_189 = 1UL;
    int l_195 = 0x149DF445L;
    int l_196 = 0x74CFE09AL;
    int l_197 = (-2L);
    int l_199 = 2L;
    int l_202 = 0x4BD1F0D1L;
    int l_203 = 0xAC731D9BL;
    int l_205 = 0xA1803D16L;
    int l_206 = 0x48B0955FL;
    int l_207[5][2] = {{(-6L),(-6L)},{(-6L),0xC672968DL},{0x024EE241L,0x5D410D00L},{0xC672968DL,0x5D410D00L},{0x024EE241L,0xC672968DL}};
    unsigned l_208 = 1UL;
    int *l_221 = &l_206;
    short *l_258 = (void*)0;
    char l_283 = 0x31L;
    unsigned short l_338 = 8UL;
    unsigned l_351 = 4294967293UL;
    short l_423 = 0x59CDL;
    int **l_429 = &g_142[4];
    unsigned char l_493 = 254UL;
    int *l_602 = (void*)0;
    int **l_601 = &l_602;
    unsigned short l_684 = 0xBF3DL;
    int l_731[1][4][2] = {{{1L,1L},{1L,1L},{1L,1L},{1L,1L}}};
    int *l_733[1][2];
    int l_734 = 0x443B2608L;
    int l_736 = (-1L);
    int l_737 = 0xB1444D54L;
    unsigned l_738[3];
    int **l_741 = &l_733[0][0];
    int **l_742 = &g_142[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_733[i][j] = &l_205;
    }
    for (i = 0; i < 3; i++)
        l_738[i] = 6UL;
    if (l_189)
    {
        return p_109;


    }
    else
    {
        int l_192 = 2L;
        int l_198 = 0x958DDEBAL;
        int l_200 = 2L;
        int l_201 = 0x83550C48L;
        int l_204[1];
        int *l_250 = &l_201;
        unsigned l_264 = 0xEF95A972L;
        short *l_275[2][3][10] = {{{&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3],&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3]},{&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3],&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3]},{&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3],&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3]}},{{&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3],&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3]},{&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3],&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3]},{&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3],&g_62[0],&g_62[0],&g_62[0],&g_62[0],&g_62[3]}}};
        short *l_387 = (void*)0;
        unsigned l_424[1][4][6] = {{{0UL,5UL,4294967295UL,0UL,0xE3EBE484L,0x08B3ED97L},{1UL,4294967295UL,0xDB93289EL,0x08B3ED97L,0xDB93289EL,4294967295UL},{0UL,1UL,0xDB93289EL,1UL,5UL,0x08B3ED97L},{4294967295UL,1UL,4294967295UL,4294967295UL,1UL,4294967295UL}}};
        int *l_444 = &l_207[0][0];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_204[i] = 0L;
        for (l_189 = 2; (l_189 < 50); l_189 = safe_add_func_int8_t_s_s(l_189, 5))
        {
            int *l_193 = &g_146;
            int *l_194[4];
            int i;
            for (i = 0; i < 4; i++)
                l_194[i] = &g_146;
            l_208++;
        }
        for (l_196 = 27; (l_196 != 26); l_196 = safe_sub_func_int8_t_s_s(l_196, 3))
        {
            int l_226 = (-8L);
            int l_229 = 1L;
            int l_230 = 0x19A5450BL;
            int l_231[2][10] = {{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)}};
            int *l_260 = (void*)0;
            short *l_346 = &g_62[0];
            int **l_368 = &g_142[8];
            unsigned char l_454[5][6][4] = {{{0x1CL,0UL,249UL,0xE5L},{0x5FL,255UL,249UL,0xF7L},{0x1CL,0xEEL,252UL,0x5FL},{251UL,255UL,246UL,0UL},{246UL,0UL,0x47L,1UL},{0x2DL,4UL,0xB7L,0x14L}},{{0xEEL,0x2CL,0x36L,0UL},{0x7EL,0x36L,0x43L,0x31L},{0x14L,0x8AL,0x5FL,254UL},{252UL,249UL,0x2DL,1UL},{255UL,1UL,0UL,0x36L},{252UL,0x26L,0xAEL,0UL}},{{249UL,251UL,0x8AL,0x8AL},{0UL,255UL,0xAEL,0xEEL},{252UL,0x0FL,0xC5L,255UL},{251UL,0x36L,0x14L,0xC5L},{1UL,0x36L,0xADL,255UL},{0x36L,0x0FL,1UL,0xEEL}},{{6UL,255UL,0xF7L,0UL},{251UL,0x43L,251UL,0x4EL},{0xADL,255UL,251UL,0x76L},{0x5FL,251UL,0xB7L,254UL},{252UL,0x2DL,0x39L,1UL},{0xEEL,0UL,1UL,0UL}},{{1UL,0x76L,0x4EL,0UL},{255UL,252UL,0UL,249UL},{0x6BL,0xEEL,0x8AL,0UL},{0x26L,0UL,254UL,0UL},{0UL,4UL,252UL,0x31L},{0UL,0x2DL,1UL,0x26L}}};
            char l_467 = 0x40L;
            int i, j, k;
        }
        (*l_221) &= (**l_429);
    }
    for (g_168 = 0; (g_168 == (-2)); g_168 = safe_sub_func_int32_t_s_s(g_168, 4))
    {
        char l_513 = 4L;
        char *l_555 = (void*)0;
        char **l_554 = &l_555;
        char ***l_553 = &l_554;
        int l_580 = 0L;
        int l_582 = 5L;
        int l_584 = 0x828F3937L;
        int l_586 = (-1L);
        int l_587 = 0x4D778D01L;
        int l_611 = 0x95FDA6C1L;
        int l_612 = 0x97BAC9C0L;
        int l_613 = 0xA225B5FFL;
        int l_614 = 0x85ADF4A8L;
        int **l_650 = (void*)0;
        unsigned l_681 = 0x034D032AL;
        short *l_695 = &l_423;
        short l_720 = 0x1903L;
        unsigned short l_723 = 0x66F6L;
        int *l_732[10] = {&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611};
        int i;
    }
    --l_738[0];
    return l_742;


}







static unsigned char func_114(unsigned char * p_115, short * p_116)
{
    short l_153 = (-10L);
    int *l_162 = &g_146;
    char *l_165 = &g_166[1][2][0];
    char *l_167 = &g_168;
    unsigned short *l_175[2];
    unsigned *l_176 = &g_177[6];
    int l_178 = 0x231147FAL;
    int *l_179 = &l_178;
    int *l_180 = &g_146;
    int *l_181 = &l_178;
    int *l_182 = &g_146;
    int *l_183 = &g_146;
    int *l_184[5][9] = {{&g_27,&g_27,&l_178,&g_17,&g_17,&l_178,&g_17,&g_17,&l_178},{&g_27,&g_27,&l_178,&g_17,&g_17,&l_178,&g_17,&g_17,&l_178},{&g_17,&g_17,&g_146,&g_27,&g_17,&g_146,&g_17,&g_27,&g_146},{&g_17,&g_17,&g_146,&g_27,&g_17,&g_146,&g_17,&g_27,&g_146},{&g_17,&g_17,&g_146,&g_27,&g_17,&g_146,&g_17,&g_27,&g_146}};
    int l_185 = 0xD3741DADL;
    unsigned short l_186 = 0UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_175[i] = &g_139[5][2][1];
    (*l_162) = (safe_div_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((0x01L | l_153) >= (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(func_127((((((((safe_rshift_func_int8_t_s_u(l_153, 5)) , 1UL) != l_153) > (safe_mod_func_uint8_t_u_u((g_100 < g_100), 0x37L))) , (g_146 || 0x59AD7A1AL)) , (void*)0) == &g_142[6]), l_153), l_153)), 6))), l_153)), g_17));
    (*l_162) = ((*l_162) > ((*l_176) = (((safe_div_func_uint8_t_u_u((&l_162 != &l_162), ((*l_167) = ((*l_165) = g_133[0])))) && ((g_139[0][3][1] = (((safe_lshift_func_int8_t_s_s((*l_162), 5)) | (safe_mod_func_uint16_t_u_u(((*l_162) >= ((*l_162) , (safe_mod_func_int32_t_s_s((((((g_166[1][2][0] != (g_168 & g_166[1][2][0])) ^ 0UL) < 0xA2021D83L) & 0x26L) | (*l_162)), (*l_162))))), (*l_162)))) , (*l_162))) >= (*l_162))) == g_17)));
    l_186++;
    return g_17;
}







static short func_127(char p_128, unsigned p_129)
{
    unsigned short l_130 = 65535UL;
    int *l_131 = (void*)0;
    int *l_132[10] = {&g_133[0],&g_133[0],&g_133[0],&g_133[0],&g_133[0],&g_133[0],&g_133[0],&g_133[0],&g_133[0],&g_133[0]};
    int l_134 = 0xC05DAD87L;
    int *l_136[6];
    int **l_135 = &l_136[3];
    int ***l_137 = &l_135;
    unsigned short *l_138 = &g_139[4][0][1];
    int ***l_140 = (void*)0;
    unsigned l_143[3][5][4] = {{{0xDBCCDF92L,0x12FBA818L,0UL,5UL},{4294967295UL,0x7D46BBF9L,1UL,0UL},{0UL,0x7D46BBF9L,3UL,5UL},{0x7D46BBF9L,0x12FBA818L,0x7D46BBF9L,0xE0F9FDB8L},{4UL,3UL,0xEAD6BFE3L,4294967295UL}},{{4294967295UL,4UL,0xE0F9FDB8L,3UL},{5UL,0UL,0xE0F9FDB8L,3UL},{4294967295UL,0xEAD6BFE3L,0xEAD6BFE3L,4294967295UL},{4UL,5UL,0x7D46BBF9L,1UL},{0x7D46BBF9L,1UL,3UL,0UL}},{{0UL,0xBE2EA708L,1UL,0UL},{4294967295UL,1UL,0UL,1UL},{0xDBCCDF92L,5UL,0x12FBA818L,4294967295UL},{3UL,0xEAD6BFE3L,4294967295UL,3UL},{0xBE2EA708L,0UL,0x7D46BBF9L,5UL}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_136[i] = &g_27;
    l_143[2][3][2] = ((l_130 >= p_129) && (((*l_137) = ((l_134 &= (p_128 != l_130)) , l_135)) == (g_141[3] = (((p_129 >= ((*l_138) ^= p_128)) | g_133[0]) , &l_136[0]))));


    return p_129;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_139[i][j][k], "g_139[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_166[i][j][k], "g_166[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_177[i], "g_177[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_642[i][j][k], "g_642[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1022, "g_1022", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1114, "g_1114", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1336[i], "g_1336[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1524, "g_1524", print_hash_value);
    transparent_crc(g_1534, "g_1534", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1594[i], "g_1594[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1736, "g_1736", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
