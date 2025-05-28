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



static volatile unsigned char g_6[2][4][5] = {{{0xA5L,0xA6L,0xA5L,0xA5L,0xA6L},{251UL,253UL,0x65L,0xEFL,0x65L},{0xA6L,0xA6L,0x9DL,0xA6L,0xA6L},{0x65L,0xEFL,0x65L,253UL,251UL}},{{0xA6L,0xA5L,0xA5L,0xA6L,0xA5L},{251UL,0xEFL,0x25L,0xEFL,251UL},{0xA5L,0xA6L,0xA5L,0xA5L,0xA6L},{251UL,253UL,0x65L,0xEFL,0x65L}}};
static int g_7 = 9L;
static int g_33 = 4L;
static int *g_36 = &g_33;
static int **g_35[5] = {&g_36,&g_36,&g_36,&g_36,&g_36};
static int *** volatile g_34[8] = {&g_35[3],&g_35[3],&g_35[1],&g_35[1],&g_35[3],&g_35[1],&g_35[1],&g_35[3]};
static int ** volatile g_70 = (void*)0;
static int ** volatile g_71 = &g_36;
static int g_75[2] = {6L,6L};
static int **g_144 = (void*)0;
static int **g_198 = &g_36;
static int **g_331[8] = {&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36,&g_36};
static int **g_337 = &g_36;
static int g_400[5] = {8L,8L,8L,8L,8L};
static short g_524 = 0xB5C0L;
static int * volatile g_651[8][10] = {{&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,&g_75[1]},{&g_75[1],&g_75[0],&g_75[1],&g_75[1],(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0},{&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,&g_75[1]},{&g_75[1],&g_75[0],&g_75[1],&g_75[1],(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0},{&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,&g_75[1]},{&g_75[1],&g_75[0],&g_75[1],&g_75[1],(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0},{&g_75[1],&g_75[1],&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0,&g_75[1]},{&g_75[1],&g_75[0],&g_75[1],&g_75[1],&g_33,&g_75[0],&g_75[1],&g_75[1],&g_33,&g_33}};
static char g_781 = 0xB0L;
static int * volatile * volatile g_782[5][10][4] = {{{&g_36,&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[4][9],&g_36,&g_36,&g_36},{&g_36,&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[4][9],&g_36,&g_651[5][5],&g_36},{&g_36,&g_36,&g_36,&g_36},{&g_651[4][9],&g_36,&g_651[7][1],&g_651[5][5]},{&g_36,&g_36,&g_36,&g_36},{&g_651[5][5],&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[5][5],&g_36,&g_651[5][5],&g_36},{&g_651[5][5],&g_36,&g_36,&g_36}},{{&g_36,&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[4][9],&g_36,&g_36,&g_36},{&g_36,&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[4][9],&g_36,&g_651[5][5],&g_36},{&g_36,&g_36,&g_36,&g_36},{&g_651[4][9],&g_36,&g_651[7][1],&g_651[5][5]},{&g_36,&g_36,&g_36,&g_36},{&g_651[5][5],&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[5][5],&g_36,&g_651[5][5],&g_36},{&g_651[5][5],&g_36,&g_36,&g_36}},{{&g_36,&g_36,&g_651[5][5],&g_651[5][5]},{&g_651[4][9],&g_36,&g_36,&g_36},{&g_36,&g_36,&g_651[5][5],&g_36},{&g_651[5][5],&g_651[5][5],&g_651[7][1],&g_36},{&g_651[6][5],&g_36,&g_36,&g_36},{&g_651[4][9],&g_651[5][5],&g_36,&g_36},{&g_651[5][5],&g_36,&g_36,&g_651[5][5]},{(void*)0,&g_36,&g_651[7][1],&g_36},{&g_36,&g_651[5][5],&g_651[5][5],&g_36},{(void*)0,&g_36,&g_651[3][7],&g_36}},{{&g_651[5][5],&g_651[5][5],&g_36,&g_36},{&g_651[4][9],&g_36,&g_651[3][7],&g_651[5][5]},{&g_651[6][5],&g_36,&g_651[5][5],&g_36},{&g_651[5][5],&g_651[5][5],&g_651[7][1],&g_36},{&g_651[6][5],&g_36,&g_36,&g_36},{&g_651[4][9],&g_651[5][5],&g_36,&g_36},{&g_651[5][5],&g_36,&g_36,&g_651[5][5]},{(void*)0,&g_36,&g_651[7][1],&g_36},{&g_36,&g_651[5][5],&g_651[5][5],&g_36},{(void*)0,&g_36,&g_651[3][7],&g_36}},{{&g_651[5][5],&g_651[5][5],&g_36,&g_36},{&g_651[4][9],&g_36,&g_651[3][7],&g_651[5][5]},{&g_651[6][5],&g_36,&g_651[5][5],&g_36},{&g_651[5][5],&g_651[5][5],&g_651[7][1],&g_36},{&g_651[6][5],&g_36,&g_36,&g_36},{&g_651[4][9],&g_651[5][5],&g_36,&g_36},{&g_36,&g_651[5][5],&g_651[5][5],&g_36},{&g_651[4][9],&g_651[5][5],&g_651[2][8],&g_36},{&g_36,&g_36,&g_36,&g_651[6][5]},{&g_651[4][9],&g_36,&g_651[7][1],&g_651[6][5]}}};
static int * volatile * volatile g_783 = &g_36;
static unsigned g_826 = 0x080DF3B5L;
static int g_838 = 0xD956217DL;
static volatile unsigned char g_866 = 0x3CL;
static volatile short g_1001[9][9] = {{(-3L),0xC84EL,(-2L),(-1L),(-1L),(-2L),0xC84EL,(-3L),(-1L)},{0xB9A5L,0xA071L,0x0EC8L,(-10L),0xE04FL,(-10L),0x0EC8L,0xA071L,0xB9A5L},{(-4L),(-1L),0x96F9L,0x1D27L,(-4L),(-4L),0x1D27L,0x96F9L,(-1L)},{0x2BEEL,0x13A7L,0x2C7EL,0x3021L,0x8E0AL,0xA071L,0x8E0AL,0x3021L,0x2C7EL},{(-4L),0L,0x1D27L,2L,(-1L),0L,0L,(-1L),2L},{0xB9A5L,0x13A7L,0xB9A5L,0xA071L,0x0EC8L,(-10L),0xE04FL,(-10L),0x0EC8L},{(-3L),(-1L),0x1D27L,(-2L),0x282CL,(-3L),0x1D27L,0x1D27L,(-3L)},{1L,0xA071L,0x2C7EL,0xA071L,1L,8L,0x2BEEL,0x3021L,0x2BEEL},{(-1L),0xC84EL,0x96F9L,2L,0x282CL,0x1D27L,0xC84EL,(-3L),(-3L)}};



static unsigned func_1(void);
static int func_2(unsigned char p_3, unsigned p_4);
static short func_8(unsigned char p_9, int p_10, char p_11, char p_12);
static int func_15(unsigned p_16, unsigned p_17, unsigned char p_18, int p_19);
static int func_47(int *** p_48, int *** p_49);
static int *** func_50(int *** p_51);
static int * func_52(unsigned p_53, int *** p_54, int * p_55);
static unsigned char func_64(int * p_65, int p_66, int p_67);
static int * func_68(int p_69);
static int ** func_76(int * p_77, int *** p_78, int p_79, int p_80, int ** p_81);
static unsigned func_1(void)
{
    unsigned char l_5 = 0x4CL;
    char l_20 = 0xC6L;
    unsigned l_613 = 0UL;
    int l_787 = 0xDD347EA0L;
    unsigned char l_819 = 0x95L;
    unsigned char l_857 = 0xC6L;
    unsigned l_879 = 3UL;
    int l_882 = 0xABCAEAA2L;
    int ***l_889 = &g_35[1];
    short l_919 = 0x0FE3L;
    int *l_957 = &l_787;
    char l_962[5];
    unsigned l_1008[5];
    int l_1011 = (-3L);
    unsigned l_1034 = 4294967290UL;
    unsigned short l_1039 = 0xF785L;
    unsigned short l_1046 = 65527UL;
    short l_1047 = (-1L);
    int i;
    for (i = 0; i < 5; i++)
        l_962[i] = 0x86L;
    for (i = 0; i < 5; i++)
        l_1008[i] = 0xDF1C4BF9L;
    if (func_2(l_5, ((g_6[1][2][3] >= (g_7 > (0xEE87F6FBL != (g_7 > (g_7 >= g_7))))) || func_8((safe_sub_func_int32_t_s_s(func_15(l_5, g_6[1][2][3], l_5, l_20), l_613)), l_613, g_524, g_400[1]))))
    {
        unsigned short l_788 = 0xAA77L;
        int *l_793 = &g_75[1];
        unsigned short l_827 = 0xACACL;
        unsigned short l_830 = 0x459EL;
        int ***l_837 = &g_144;
        unsigned l_847 = 0x02AE1660L;
        int l_925 = 0x0870F0FBL;
        int ***l_930 = &g_144;
        unsigned char l_931[10][3];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 3; j++)
                l_931[i][j] = 0x79L;
        }
        for (l_613 = 2; (l_613 <= 7); l_613 += 1)
        {
            unsigned l_784 = 4294967295UL;
            if (l_5)
            {
                unsigned l_785 = 4294967293UL;
                int **l_786 = &g_36;
                for (g_33 = 0; (g_33 <= 7); g_33 += 1)
                {
                    int i, j;
                    (*g_783) = g_651[l_613][l_613];

                    ;
                }
                l_785 &= (~l_784);
                l_787 = ((void*)0 != l_786);
                for (l_784 = 0; (l_784 <= 4); l_784 += 1)
                {
                    int i, j;
                    l_788 = l_784;
                }
            }
            else
            {
                int l_789[8][9];
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_789[i][j] = 1L;
                }
                l_789[0][1] = 1L;
            }
        }
        for (l_788 = (-22); (l_788 != 57); l_788++)
        {
            unsigned l_792[1][1][10] = {{{4294967295UL,4294967295UL,0xCECAEA59L,0xAF50D45CL,0xCECAEA59L,4294967295UL,4294967295UL,0xCECAEA59L,0xAF50D45CL,0xCECAEA59L}}};
            int *l_800[1][7][9] = {{{&g_75[1],&g_75[1],&g_33,&g_75[1],&g_33,&g_33,(void*)0,(void*)0,&g_33},{&g_33,&g_33,&g_75[1],&g_33,&g_33,&g_75[1],&g_75[1],&g_33,&g_75[1]},{&g_33,&g_75[1],&g_33,&g_75[1],&g_75[1],&g_75[1],(void*)0,&g_33,(void*)0},{&g_75[1],(void*)0,&l_787,&l_787,(void*)0,&g_75[1],&l_787,&g_33,&l_787},{&g_75[1],(void*)0,&g_33,&g_75[1],(void*)0,&g_33,&l_787,&g_33,&g_33},{&l_787,&g_75[1],&g_33,&g_33,&g_33,&g_75[1],&l_787,&l_787,&g_33},{&g_75[1],&g_33,&g_33,&l_787,&g_33,&g_33,(void*)0,&g_75[1],&g_75[1]}}};
            int ***l_828 = &g_35[1];
            int *l_829 = &g_75[1];
            int i, j, k;
            if (l_792[0][0][4])
                break;
            (*l_793) |= (l_793 != l_793);
            for (l_787 = 0; (l_787 <= (-15)); l_787 = safe_sub_func_int32_t_s_s(l_787, 7))
            {
                short l_796[10][6][4] = {{{0xD9D3L,0x6F89L,2L,(-7L)},{(-9L),0x5006L,1L,0x8DC8L},{0x583DL,(-1L),0xAEB3L,0xD6BDL},{6L,1L,0x5006L,(-2L)},{(-1L),0xDEB1L,3L,0L},{0xAC34L,0x4DD5L,1L,0xAEB3L}},{{(-1L),1L,1L,(-1L)},{0xAA5DL,1L,0x41A3L,0L},{1L,0L,2L,0x3DF3L},{0xD6BDL,0L,(-2L),0x3DF3L},{(-7L),0L,(-1L),0L},{5L,1L,1L,(-1L)}},{{0L,1L,0x0553L,0xAEB3L},{0x8DC8L,0x4DD5L,0x583DL,0x57D7L},{1L,0L,0xC7FAL,0xAA5DL},{0L,1L,0xE418L,0L},{0L,0x583DL,1L,1L},{0xAC34L,0x6F89L,6L,(-2L)}},{{(-2L),0xDB07L,0x7675L,0x583DL},{0L,(-1L),0x3DF3L,8L},{0xE418L,(-1L),8L,(-1L)},{1L,0xC434L,1L,0xFA0FL},{(-8L),(-8L),0L,0xD9D3L},{0x1A8EL,1L,0x8DC8L,(-8L)}},{{1L,0xAA5DL,0x8DC8L,0xDB07L},{0x1A8EL,0L,0L,1L},{(-8L),0x5C69L,1L,0xC7FAL},{1L,0xC7FAL,8L,6L},{0xE418L,3L,0x3DF3L,0xAC34L},{(-5L),0L,(-1L),0x57D7L}},{{0xAC34L,(-1L),0x5C69L,0L},{0x8DC8L,0L,0xDEB1L,6L},{0xDE36L,0xE418L,(-1L),0xDAF1L},{0xAEB3L,(-8L),0L,(-1L)},{0x583DL,0xAA5DL,(-1L),(-1L)},{0xE418L,6L,0L,0L}},{{0x41A3L,0x41A3L,0x583DL,0L},{0L,0xAEB3L,0x4DD5L,0L},{(-6L),0x7675L,0xAC34L,0x4DD5L},{0xFA0FL,0x7675L,1L,0L},{0x7675L,0xAEB3L,0x5006L,0L},{2L,0x41A3L,0xDB07L,0L}},{{0L,6L,(-8L),(-1L)},{1L,0xAA5DL,0L,(-1L)},{1L,(-8L),0x3DF3L,0xDAF1L},{1L,0xE418L,0L,6L},{0L,0L,1L,0L},{6L,(-1L),(-1L),0x57D7L}},{{0x5C69L,0L,0L,0x8DC8L},{0xD6BDL,0L,0x0553L,1L},{(-9L),0L,0x6F89L,0L},{0xC7FAL,3L,0L,0xDEB1L},{0L,(-5L),0xFA0FL,(-9L)},{6L,1L,0xDE36L,0xDB07L}},{{6L,0x583DL,(-7L),0x5C69L},{0L,0xDB07L,0L,(-6L)},{5L,0xFA0FL,0xDB07L,(-1L)},{0xDAF1L,(-5L),0xC7FAL,6L},{0L,0x0553L,0x57D7L,0L},{0xE418L,0xDAF1L,0x583DL,2L}}};
                int *l_825 = &l_787;
                int i, j, k;
                if (l_796[9][5][0])
                {
                    return g_400[1];


                }
                else
                {
                    char l_799 = 0x89L;
                    int **l_824 = &g_36;
                    for (g_524 = 0; (g_524 == 27); g_524++)
                    {
                        (*g_198) = l_800[0][2][5];

                        ;
                    }
                    (*l_793) = (safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((g_400[3] < (g_75[1] & (safe_mod_func_uint16_t_u_u(g_6[1][0][2], l_799)))) == g_400[1]), 7UL)) >= g_400[1]), (safe_rshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((*l_793), (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(g_524, g_400[1])), g_400[4])))) > g_781), 1))));
                    (*l_824) = &l_787;

                    ;
                    if ((*g_36))
                        continue;
                }

                ;
                if ((l_828 == &g_71))
                {
                    l_829 = l_793;
                    if ((*l_825))
                        break;
                    (*g_198) = l_793;

                    ;
                    return g_781;
                }
                else
                {
                    return g_6[1][2][3];


                }
            }
            (*l_793) ^= l_830;
        }


        g_838 ^= (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((*l_793) > (func_8((*l_793), l_613, (safe_rshift_func_int16_t_s_s(l_787, l_20)), (((func_8(l_787, l_819, (*l_793), ((((&g_144 != l_837) >= 1L) != 0x49ECL) | 0x0AFBACE6L)) && g_75[0]) <= (-5L)) > g_6[0][1][2])) & g_400[2])) || g_7), g_75[1])) | g_75[1]), 2));
        if (l_5)
        {
            unsigned l_856 = 0x313EBEE3L;
            char l_865 = 0x61L;
            int *l_870[3];
            int l_881 = 0L;
            char l_883 = 0x5FL;
            int ***l_884 = &g_144;
            unsigned char l_900 = 8UL;
            int *l_955 = &g_33;
            int i;
            for (i = 0; i < 3; i++)
                l_870[i] = &g_75[1];
            if ((safe_rshift_func_int8_t_s_s(((g_6[1][2][3] != (func_8(l_847, (*l_793), g_781, (((safe_mod_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(g_7, 14)), (safe_sub_func_uint32_t_u_u(0UL, 0x2AD806F0L)))) | 0x68B4L) >= (l_856 ^ l_857)) && g_75[0]), l_613)) | l_5) >= 0UL)) > l_857)) | 1UL), 7)))
            {
                int ***l_864 = (void*)0;
                unsigned short l_867[10][4] = {{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL},{65535UL,65535UL,0x234CL,0x234CL}};
                int i, j;
                for (g_33 = 11; (g_33 >= (-19)); --g_33)
                {
                    (*l_793) ^= (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(func_47(l_864, &g_35[1]), 5)), 5));
                    (*g_198) = &l_787;

                    ;
                }
                l_867[3][2] ^= g_866;
            }
            else
            {
                int l_878 = 0x0E6D0B69L;
                short l_880 = (-1L);
                int *l_885[2];
                int ***l_897 = &g_337;
                int ***l_906 = &g_337;
                int **l_916 = &l_870[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_885[i] = (void*)0;
                for (l_20 = (-28); (l_20 > 25); l_20++)
                {
                    int *l_871[6][3] = {{&g_33,&g_33,&g_33},{&g_838,&g_33,&g_838},{&g_33,&g_33,&g_33},{&g_838,&g_33,&g_838},{&g_33,&g_33,&g_33},{&g_838,&g_33,&g_838}};
                    int i, j;
                    l_883 ^= l_882;
                    if (l_882)
                        continue;
                }
                if (((l_880 || g_33) || (l_884 != (void*)0)))
                {
                    int *l_886[7][1][6] = {{{&g_33,&g_75[1],&g_75[1],&g_33,&g_75[1],&g_75[0]}},{{(void*)0,&g_75[1],&g_75[1],&g_75[1],&g_75[1],(void*)0}},{{&g_75[0],(void*)0,&l_882,&g_75[0],&g_75[1],&g_75[1]}},{{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],&l_882}},{{&g_75[1],(void*)0,&g_75[1],&g_75[1],&g_75[1],(void*)0}},{{&g_75[0],(void*)0,&l_882,&g_75[0],&g_75[1],&g_75[1]}},{{&g_75[1],(void*)0,(void*)0,&g_75[1],&g_75[1],&l_882}}};
                    int i, j, k;
                    (*g_198) = l_886[4][0][2];

                    ;
                }
                else
                {
                    int *l_901 = &g_75[1];
                    for (l_5 = 0; (l_5 < 8); l_5++)
                    {
                        int *l_890 = &l_787;
                        (*g_198) = &l_787;

                        ;
                        (*l_793) = (safe_sub_func_int8_t_s_s(g_75[0], 0xB0L));
                        (*g_71) = l_901;

                        ;
                        (**g_198) &= (g_400[1] == ((safe_lshift_func_uint16_t_u_u(g_781, g_838)) <= (((((+255UL) >= g_6[1][3][1]) != ((0xA7D8L & func_47(l_837, &g_337)) == g_7)) && g_400[1]) & g_826)));
                    }
                }


                if (((safe_mul_func_int16_t_s_s(9L, (g_7 || (-7L)))) ^ func_47(&g_337, l_906)))
                {
                    unsigned short l_909[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_909[i] = 2UL;
                    if (((g_781 < (safe_rshift_func_uint8_t_u_u(g_400[1], (&g_331[4] == &g_198)))) & g_6[1][2][3]))
                    {
                        unsigned char l_924 = 0x65L;
                        (**l_916) = l_924;
                    }
                    else
                    {
                        return l_925;


                    }
                }
                else
                {
                    int ***l_926 = &g_331[4];
                    unsigned l_927[1];
                    int *l_932 = &l_925;
                    short l_944 = 0xBFFBL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_927[i] = 0x230F5A18L;
                    l_931[7][1] ^= func_8((&l_916 != l_926), l_927[0], func_8((g_33 > (safe_add_func_int32_t_s_s(((+func_47(l_930, l_837)) & g_6[1][2][3]), (g_75[0] || 1L)))), l_927[0], g_75[0], g_826), g_524);
                    if ((g_7 & g_400[1]))
                    {
                        l_870[2] = l_932;


                    }
                    else
                    {
                        int l_937 = (-1L);
                        (*l_932) &= (**l_916);
                        l_944 &= (*l_932);
                        (*l_916) = &l_882;


                        (**l_916) = (&l_787 != (void*)0);
                    }


                }


            }



            (*l_793) &= (0x29L ^ ((g_400[1] != 0UL) == (safe_mul_func_int8_t_s_s(g_6[1][2][3], (((0xE9L == (safe_rshift_func_int8_t_s_s(1L, g_826))) && (g_7 == (((void*)0 == &g_198) || l_882))) <= g_838)))));
            (*g_198) = l_955;

            ;
        }
        else
        {
            int *l_956 = &g_75[1];
            (*g_198) = l_956;

            ;
            (*g_198) = l_957;

            ;
            l_957 = (*g_198);
            (*l_956) = (**g_71);
        }

        ;
    }
    else
    {
        int *l_1000[7][4] = {{&g_838,&g_838,&g_838,&g_838},{&g_838,&g_838,&g_838,&g_838},{&g_838,&g_838,&g_838,&g_838},{&g_838,&g_838,&g_838,&g_838},{&g_838,&g_838,&g_838,&g_838},{&g_838,&g_838,&g_838,&g_838},{&g_838,&g_838,&g_838,&g_838}};
        int ***l_1016 = (void*)0;
        int i, j;
        for (g_33 = 17; (g_33 <= (-1)); g_33 = safe_sub_func_int32_t_s_s(g_33, 1))
        {
            int l_973 = (-1L);
            int l_983 = (-1L);
            int l_1002 = (-7L);
            int l_1003 = 0x1E09BCE4L;
            int *l_1004 = (void*)0;
            short l_1010 = (-7L);
            for (l_819 = 0; (l_819 > 29); l_819 = safe_add_func_uint8_t_u_u(l_819, 4))
            {
                char l_969 = (-7L);
                int **l_976[4][3][1] = {{{&l_957},{(void*)0},{&l_957}},{{(void*)0},{&l_957},{(void*)0}},{{&l_957},{(void*)0},{&l_957}},{{(void*)0},{&l_957},{(void*)0}}};
                unsigned char l_1007 = 0xA8L;
                int i, j, k;
                for (l_787 = (-24); (l_787 >= 11); l_787 = safe_add_func_int16_t_s_s(l_787, 7))
                {
                    unsigned l_972 = 0xB0846455L;
                    int ***l_990 = (void*)0;
                    int *l_999 = &l_787;
                    for (l_857 = 0; (l_857 <= 1); l_857 += 1)
                    {
                        int i, j;
                        if (l_969)
                            break;
                    }
                    if (l_969)
                    {
                        int *l_977 = &g_75[1];
                        (*l_977) = (((safe_mod_func_int32_t_s_s(l_972, l_973)) >= ((safe_mul_func_uint16_t_u_u(((void*)0 == l_976[0][1][0]), ((void*)0 == l_977))) >= ((+(safe_mul_func_uint16_t_u_u(g_866, g_524))) > (1UL > 4294967295UL)))) == (*l_977));
                    }
                    else
                    {
                        int ***l_982 = &l_976[3][2][0];
                        l_983 ^= ((g_7 != g_866) > func_47(l_982, &g_331[4]));
                        l_882 &= ((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(0x2DC4L, g_33)) != g_826), l_983)) && (safe_sub_func_uint8_t_u_u((l_990 == l_990), g_866)));
                        l_1003 = (safe_mul_func_int8_t_s_s(((g_781 & func_47(l_982, &g_35[1])) || (((safe_add_func_int32_t_s_s(0x659C8A79L, (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_983 && ((l_999 == l_1000[6][3]) >= g_1001[2][0])), l_1002)), l_1003)))) <= (*l_999)) ^ l_983)), (*l_999)));
                    }
                }
                l_1004 = l_1000[6][3];
                l_1007 ^= (safe_mod_func_int8_t_s_s(0xF6L, g_866));
            }

            ;
            if ((l_1008[2] || (*l_957)))
            {
                int l_1009 = (-4L);
                l_1010 = l_1009;
                (*l_957) = ((l_1011 >= 0xDB00L) > (&l_1009 != l_1000[1][2]));
                (*l_889) = &l_1004;


            }
            else
            {
                int ***l_1012 = &g_337;
                int l_1014[4][5] = {{(-9L),1L,1L,(-9L),0xC0DE1126L},{(-1L),1L,1L,(-1L),0x321E394AL},{(-9L),1L,1L,(-9L),0xC0DE1126L},{(-1L),1L,1L,(-1L),0x321E394AL}};
                int i, j;
                if (func_47(l_889, l_1012))
                {
                    unsigned char l_1013 = 0xA3L;
                    l_1014[2][0] = l_1013;
                }
                else
                {
                    unsigned short l_1015 = 0x885DL;
                    (*g_198) = &l_1003;

                    ;
                    (*l_957) ^= 0L;
                    (*g_36) = func_47(l_1016, &g_35[1]);
                    for (l_919 = (-7); (l_919 >= (-27)); l_919 = safe_sub_func_uint8_t_u_u(l_919, 6))
                    {
                        unsigned char l_1019 = 0xA7L;
                        if (l_1019)
                            break;
                    }
                }


            }



        }
        for (g_33 = 3; (g_33 >= 0); g_33 -= 1)
        {
            int *l_1020 = (void*)0;
            int **l_1032 = (void*)0;
            int i;
            (*g_198) = l_1020;

            ;
            for (l_882 = 0; (l_882 <= 7); l_882 += 1)
            {
                int l_1021 = 0L;
                int l_1031 = 0x30FB0E4AL;
                int i;
                for (g_826 = 2; (g_826 <= 7); g_826 += 1)
                {
                    int l_1028 = 0x0C2A9AFFL;
                    int i, j, k;
                    (*l_957) ^= l_1021;
                    (*l_957) = ((0x87L | ((((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(g_524, (safe_lshift_func_uint8_t_u_s(l_1021, 6)))), (((l_1028 == (safe_rshift_func_uint16_t_u_u((g_826 & ((l_1021 != g_75[1]) && g_826)), (&l_1020 == (void*)0)))) < (*l_957)) < g_781))) ^ l_1031) < g_75[1]) | 3UL)) < g_1001[2][0]);
                }
                g_331[(g_33 + 1)] = l_1032;
            }
        }
    }




    (*l_957) = 1L;
    if (((((safe_unary_minus_func_int8_t_s((((*l_957) <= (*l_957)) >= l_1034))) | (((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((((l_1039 > ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((&l_957 != &l_957), l_1046)) & l_1047), (safe_sub_func_int8_t_s_s((-2L), g_781)))), g_400[2])) < (*l_957)) != g_838) < g_6[1][2][3])) ^ (*l_957)) < (*l_957)) < (*l_957)) & g_826), g_400[1])), 0UL)) || g_1001[1][6]) & g_7)) | 0x9AL) == g_524))
    {
        unsigned char l_1050 = 0x22L;
        return l_1050;


    }
    else
    {
        unsigned short l_1053[7] = {65535UL,1UL,1UL,65535UL,1UL,1UL,65535UL};
        int i;
        (*g_198) = &l_787;

        ;
        for (l_857 = 27; (l_857 > 58); l_857 = safe_add_func_int32_t_s_s(l_857, 3))
        {
            (**g_71) = l_1053[0];
        }
    }

    ;
    return g_400[3];


}







static int func_2(unsigned char p_3, unsigned p_4)
{
    int l_622[8] = {9L,3L,9L,3L,9L,3L,9L,3L};
    int *l_642 = (void*)0;
    int ***l_676[4];
    short l_677 = 1L;
    int *l_682 = &g_75[1];
    int ***l_747 = &g_198;
    unsigned char l_757 = 246UL;
    int i;
    for (i = 0; i < 4; i++)
        l_676[i] = &g_337;
    l_622[5] |= 0x4B6A1280L;
    for (g_7 = 0; (g_7 >= (-5)); g_7 = safe_sub_func_uint32_t_u_u(g_7, 7))
    {
        int l_631 = (-5L);
        int **l_640 = &g_36;
        short l_708 = 0xB0BAL;
        int *l_778 = &g_75[0];
        l_631 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(g_6[1][0][4], l_631)), 0)), (p_4 ^ (p_4 < (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_622[5] != (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(4294967291UL, ((((void*)0 != l_640) == func_47(&l_640, &l_640)) > 0x155CL))), g_524))), 0x7E2FL)), p_3))))));
        if (((void*)0 == &l_631))
        {
            unsigned char l_641 = 255UL;
            int l_643 = (-1L);
            int *l_644 = &l_631;
            l_641 |= func_47(&g_35[1], &l_640);
            l_643 ^= (~((void*)0 != l_642));
            (*l_644) ^= p_3;
        }
        else
        {
            return p_3;
        }
        if ((safe_lshift_func_uint16_t_u_s((l_640 == l_640), (safe_add_func_int16_t_s_s(p_3, (g_400[1] < g_33))))))
        {
            int *l_652 = &g_75[1];
            int ***l_662[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned l_707 = 4294967295UL;
            unsigned short l_733 = 0x5852L;
            int i;
            (*l_652) ^= ((safe_lshift_func_uint16_t_u_u(p_3, 4)) <= 1L);
            if (p_3)
            {
                unsigned char l_667[3][1][5] = {{{246UL,1UL,255UL,255UL,1UL}},{{0xA5L,0x8DL,255UL,0x2DL,0x2DL}},{{0x8DL,0xA5L,0x8DL,255UL,0x2DL}}};
                int *l_683 = &g_75[1];
                int ***l_706 = &g_35[2];
                int i, j, k;
                for (p_3 = 0; (p_3 <= 7); p_3 += 1)
                {
                    int * volatile *l_653[2][6][1] = {{{&g_651[p_3][(p_3 + 2)]},{&g_651[p_3][(p_3 + 2)]},{&l_652},{&g_651[p_3][(p_3 + 2)]},{&g_651[p_3][(p_3 + 2)]},{&l_652}},{{&g_651[p_3][(p_3 + 2)]},{&g_651[p_3][(p_3 + 2)]},{&l_652},{&g_651[p_3][(p_3 + 2)]},{&g_651[p_3][(p_3 + 2)]},{&l_652}}};
                    int i, j, k;
                    g_651[5][1] = g_651[p_3][(p_3 + 2)];
                    (*l_652) |= (((safe_lshift_func_int16_t_s_u(g_6[1][2][3], 10)) == (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_47(&g_331[2], l_662[0]), 9)), (p_4 >= 1L))), (safe_sub_func_int32_t_s_s(p_4, ((safe_add_func_uint32_t_u_u((l_640 != &g_36), g_400[2])) < l_667[0][0][0])))))) | g_33);
                    (*g_198) = l_642;

                    ;
                }
                l_677 &= ((((safe_add_func_uint32_t_u_u(g_75[1], 1UL)) > g_75[1]) | p_3) ^ ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_7, 1)), (65526UL ^ (p_4 || (+(safe_mod_func_uint32_t_u_u(func_47(&l_640, l_676[1]), g_75[1]))))))) < g_75[1]));
                for (g_524 = 2; (g_524 > (-27)); --g_524)
                {
                    int ***l_693 = &g_144;
                    unsigned l_709 = 0x7D1B19DDL;
                    if ((((((func_47(&g_331[4], &g_35[0]) > p_4) > (p_3 <= (l_682 != l_683))) && (g_75[1] <= (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_3, g_33)), p_4)))) ^ 1L) ^ (*l_683)))
                    {
                        (*l_682) &= func_47(&g_331[4], &g_144);
                    }
                    else
                    {
                        unsigned short l_692 = 0x8F97L;
                        int l_694 = (-2L);
                        int ***l_695 = &l_640;
                        l_694 ^= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x659CL, l_692)), func_47(&g_35[0], l_693)));
                        (*l_652) = p_3;
                        (*l_682) = func_47(l_693, l_662[0]);
                        (*l_683) &= func_47(l_695, &g_144);
                    }
                    l_709 &= (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((1UL > 0x4BL) && ((((safe_lshift_func_uint16_t_u_s((func_47(l_706, &g_35[1]) && ((((g_400[0] != (((p_3 | (p_4 < g_75[1])) ^ 6L) && 0xE0615D26L)) >= 0x5F2B9C31L) || (*l_683)) == 0x5FL)), g_6[1][2][3])) || (-5L)) != l_707) >= g_75[1])), p_4)), p_3)) <= l_708), p_3));
                }
                if (p_3)
                    break;
            }
            else
            {
                int *l_712 = &g_33;
                unsigned l_714 = 0x45566DBEL;
                if ((safe_mul_func_uint16_t_u_u((4294967294UL < ((l_712 != &l_631) ^ (p_3 > (safe_unary_minus_func_uint8_t_u(g_33))))), (l_714 & (safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_524, (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((*l_682), ((safe_mul_func_uint8_t_u_u(p_4, p_4)) ^ g_75[0]))), g_400[1])))), p_3))))))
                {
                    (*g_198) = (void*)0;

                    ;
                    (*l_682) = 0xF221EA9CL;
                }
                else
                {
                    unsigned l_725 = 4294967286UL;
                    int l_726 = 0xE455EE8EL;
                    (*l_640) = l_712;

                    ;
                    l_726 = l_725;
                    for (l_726 = 0; (l_726 == (-30)); l_726--)
                    {
                        (*l_712) = (safe_mod_func_int32_t_s_s(7L, p_3));
                    }
                }

                ;
                (*l_712) = ((g_75[0] <= ((g_6[1][2][3] >= (((((safe_mul_func_int8_t_s_s(l_733, ((*g_198) == (*g_198)))) || p_4) && (p_3 | 9L)) ^ (p_4 ^ 0x92L)) == p_4)) && (-1L))) > 0xBC29CA7BL);
            }
            if (p_3)
                break;
        }
        else
        {
            int **l_736 = &l_682;
            int l_758 = 0xAA1CD6E9L;
            int l_767 = 7L;
            if ((safe_mul_func_int16_t_s_s(func_47(&l_640, &g_331[4]), ((void*)0 == l_736))))
            {
                unsigned l_741[1][10] = {{0x92204360L,0xE64543E6L,0x92204360L,0xE64543E6L,0x92204360L,0xE64543E6L,0x92204360L,0xE64543E6L,0x92204360L,0xE64543E6L}};
                int i, j;
                (*l_682) = p_4;
                (**l_736) = ((safe_mod_func_int16_t_s_s(1L, p_3)) != ((safe_rshift_func_uint8_t_u_u(0UL, 6)) < 0L));
                (**l_736) = (l_741[0][5] | p_3);
                (*l_682) = 0xA3C59669L;
            }
            else
            {
                int *l_742 = (void*)0;
                l_742 = (void*)0;
            }
            if (p_3)
            {
                (*l_640) = (*l_736);

                ;
                for (l_677 = (-19); (l_677 >= (-14)); ++l_677)
                {
                    (*g_36) = ((~(&g_70 != &l_736)) | (safe_lshift_func_int8_t_s_s((p_4 ^ 0x7A102A6CL), 3)));
                }
            }
            else
            {
                int ***l_756 = &l_640;
                l_758 &= ((func_47(&g_337, l_747) ^ ((p_4 && ((g_33 || (safe_sub_func_int16_t_s_s((**l_736), 0UL))) || ((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((((void*)0 != l_756) && 0x32F8L) >= p_3), 7)), 4)), g_33)) || p_4) & p_4) == 0x29L))) < (*l_682))) == l_757);
                if (func_47(&g_331[4], &l_640))
                {
                    int l_765 = (-1L);
                    for (p_3 = (-27); (p_3 == 40); p_3 = safe_add_func_int32_t_s_s(p_3, 2))
                    {
                        int **l_766 = &l_682;
                        (**l_736) = (safe_lshift_func_uint8_t_u_s(g_524, 3));
                        (**l_736) = p_4;
                        (**l_736) |= ((safe_mul_func_int16_t_s_s(func_47(&l_640, &l_736), g_400[1])) ^ ((l_765 <= p_4) == ((((l_640 == l_766) < (l_767 <= 0xECL)) < p_3) & 0x1AC7CFADL)));
                    }
                    if (p_3)
                        break;
                    if ((p_4 ^ 0UL))
                    {
                        int *l_768[10][2] = {{(void*)0,&g_75[1]},{(void*)0,(void*)0},{&g_75[1],(void*)0},{(void*)0,&g_75[1]},{(void*)0,(void*)0},{&g_75[1],(void*)0},{(void*)0,&g_75[1]},{(void*)0,(void*)0},{&g_75[1],(void*)0},{(void*)0,&g_75[1]}};
                        int i, j;
                        l_768[4][0] = (void*)0;
                    }
                    else
                    {
                        return p_4;
                    }
                    (*l_736) = (*l_736);
                }
                else
                {
                    (*l_682) |= (safe_rshift_func_uint16_t_u_u(p_3, 10));
                }
                (**l_736) &= (func_47(&g_331[4], &l_736) && (&l_631 != (*l_736)));
            }
            for (p_3 = 0; (p_3 <= 4); p_3 += 1)
            {
                int **l_773 = (void*)0;
                int l_779 = 0x063C1715L;
                for (l_758 = 0; (l_758 <= 7); l_758 += 1)
                {
                    int i;
                    if ((safe_rshift_func_uint16_t_u_u(((((l_773 != (void*)0) ^ (+(&g_331[1] == &g_331[4]))) & g_75[0]) && (p_3 >= 0xBE45L)), g_33)))
                    {
                        int i, j;
                        (*l_682) = 0xEC138229L;
                    }
                    else
                    {
                        (*l_682) = p_4;
                    }
                    (**l_736) = (((((**l_736) != 0x67D2L) || g_6[1][3][4]) != (p_3 ^ func_47(&l_640, l_747))) == (**l_736));
                }
                for (l_767 = 0; (l_767 > (-15)); l_767 = safe_sub_func_int32_t_s_s(l_767, 3))
                {
                    unsigned char l_780 = 255UL;
                    if (((safe_mul_func_uint16_t_u_u((((l_747 == (void*)0) & p_4) & ((void*)0 == l_736)), p_3)) != (func_47(&g_331[4], &g_198) <= 1L)))
                    {
                        if ((**l_736))
                            break;
                        (**l_747) = l_778;

                        ;
                        (**l_640) = l_779;
                        (*l_736) = (**l_747);
                    }
                    else
                    {
                        l_780 = 0xABB58B72L;
                        (**l_736) ^= (l_780 < (((*l_736) != (*l_736)) > (&l_640 != &l_773)));
                    }
                }
                l_767 ^= (4L & (*l_778));
                if (p_4)
                    break;
            }
        }
    }
    return g_781;
}







static short func_8(unsigned char p_9, int p_10, char p_11, char p_12)
{
    int *l_614 = &g_33;
    unsigned short l_621 = 0x9CEAL;
    l_614 = l_614;
    for (p_9 = 17; (p_9 == 29); ++p_9)
    {
        for (p_11 = (-17); (p_11 < (-4)); p_11 = safe_add_func_int32_t_s_s(p_11, 5))
        {
            int l_619[10][1] = {{0L},{0L},{0L},{0x5AA89EB6L},{0x5AA89EB6L},{0L},{0L},{0L},{0x5AA89EB6L},{0x5AA89EB6L}};
            int i, j;
            p_10 = l_619[2][0];
            if ((*l_614))
                continue;
        }
    }
    for (p_12 = 4; (p_12 >= 0); p_12 -= 1)
    {
        int l_620 = 0x0834FE81L;
        int i;
        p_10 = l_620;
        for (g_7 = 4; (g_7 >= 0); g_7 -= 1)
        {
            (*l_614) = func_47(&g_35[p_12], &g_331[6]);
        }
    }
    (*l_614) = p_10;
    return l_621;
}







static int func_15(unsigned p_16, unsigned p_17, unsigned char p_18, int p_19)
{
    unsigned char l_25 = 1UL;
    int *l_32[9];
    int ***l_37 = &g_35[1];
    unsigned l_505[3][5][2] = {{{0UL,0x4E2AC11FL},{0UL,0UL},{0x4E2AC11FL,0UL},{0UL,0x4E2AC11FL},{0UL,0UL}},{{0x4E2AC11FL,0x4E2AC11FL},{0x4E2AC11FL,0UL},{0x4E2AC11FL,0x4E2AC11FL},{0UL,0x4E2AC11FL},{0x4E2AC11FL,0UL}},{{0x4E2AC11FL,0x4E2AC11FL},{0UL,0x4E2AC11FL},{0x4E2AC11FL,0UL},{0x4E2AC11FL,0x4E2AC11FL},{0UL,0x4E2AC11FL}}};
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_32[i] = &g_33;
    g_33 ^= ((0xA74ADF29L == ((((safe_mod_func_uint16_t_u_u((3UL && (((l_25 & (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(((g_7 ^ (g_6[0][0][2] < (p_19 == ((((4294967295UL && (safe_add_func_uint16_t_u_u(l_25, (l_25 == l_25)))) > l_25) | l_25) | g_7)))) ^ p_16), 0)) <= p_16) == g_7), 8))) != g_7) < g_7)), g_7)) <= 0x9E8AL) <= l_25) != g_7)) != 0x00L);
    (*l_37) = &l_32[4];


    for (p_19 = 5; (p_19 <= (-14)); p_19 = safe_sub_func_uint32_t_u_u(p_19, 6))
    {
        int l_44 = 0x207789B6L;
        int ***l_46 = (void*)0;
        unsigned l_432 = 0x77876F87L;
        unsigned char l_449 = 0xE4L;
        int l_475 = 0xA332E212L;
        char l_487[9] = {0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL,0xBBL};
        int l_499 = 6L;
        int i;
        if (((p_16 < ((((((safe_add_func_uint32_t_u_u((((0L < ((((-1L) <= 0xB039B7C3L) ^ ((void*)0 == (*l_37))) <= g_6[0][1][1])) >= g_33) || (l_44 == p_16)), g_7)) >= 0UL) && p_19) ^ p_19) < 0UL) ^ (-1L))) <= (-7L)))
        {
            int **l_45 = &l_32[4];
            int l_433[6][7] = {{0xA2B44F4BL,0x8C8D2567L,0x78C0CBD5L,0x8C8D2567L,0xA2B44F4BL,0x6E27426DL,0x6E27426DL},{0L,0x5616F7F0L,0x5343EE5DL,0x5616F7F0L,0L,0x40D90B64L,0x40D90B64L},{0xA2B44F4BL,0x8C8D2567L,0x78C0CBD5L,0x8C8D2567L,0xA2B44F4BL,0x6E27426DL,0x6E27426DL},{0L,0x5616F7F0L,0x5343EE5DL,0x5616F7F0L,0L,0x40D90B64L,0x40D90B64L},{0xA2B44F4BL,0x8C8D2567L,0x78C0CBD5L,0x8C8D2567L,0xA2B44F4BL,0x6E27426DL,0x6E27426DL},{0L,0x5616F7F0L,0x5343EE5DL,0x5616F7F0L,0L,0x40D90B64L,0x40D90B64L}};
            int l_473[7][2][5] = {{{(-1L),0x5D246567L,0x878E1EB5L,0L,0xA7284F1CL},{0x1CB56B94L,(-1L),0x8E5C7D3FL,(-1L),0x1CB56B94L}},{{0xA96E44A0L,(-1L),(-2L),(-1L),0x5D246567L},{0L,(-1L),0L,0xA3481F0EL,(-1L)}},{{0xA7284F1CL,0x5D246567L,(-1L),(-1L),0x5D246567L},{0x1CB56B94L,0xA3481F0EL,1L,0L,0x1CB56B94L}},{{0x5D246567L,0L,(-1L),(-1L),0xA7284F1CL},{(-1L),0L,0L,0xB4067BA0L,0L}},{{0x5D246567L,0x5D246567L,(-2L),0L,0xA96E44A0L},{0x1CB56B94L,0xB4067BA0L,0x8E5C7D3FL,0xB4067BA0L,0x1CB56B94L}},{{0xA7284F1CL,(-1L),0x878E1EB5L,(-1L),(-1L)},{0L,0xB4067BA0L,0L,0L,(-1L)}},{{0xA96E44A0L,0x5D246567L,0L,(-1L),(-1L)},{0x1CB56B94L,0L,1L,0xA3481F0EL,0x1CB56B94L}}};
            int i, j, k;
            (*l_45) = (void*)0;


            if (((l_46 == (void*)0) & func_47(func_50(l_46), &l_45)))
            {
                int ***l_416 = &g_337;
                int l_445 = 0x42CDAE55L;
                (**g_337) ^= (!p_19);
                for (g_7 = 3; (g_7 <= 8); g_7 += 1)
                {
                    int ***l_426 = &g_337;
                }
                if ((safe_lshift_func_int8_t_s_s(g_400[3], (p_18 & ((((8UL & l_433[5][2]) ^ func_47(func_50(&l_45), &l_45)) < g_400[4]) == l_449)))))
                {
                    int ***l_462 = (void*)0;
                    int l_469 = 0x48C148BAL;
                    (***l_416) = (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(g_400[1], (safe_mod_func_uint8_t_u_u(((void*)0 == &p_19), ((&l_45 != l_462) & ((g_75[1] < 1UL) & (safe_unary_minus_func_uint16_t_u(((*l_37) == l_45))))))))) > 0xCA4FL), g_6[1][0][4])) <= p_17), g_7)), g_400[0])), 9L));
                    for (l_432 = 29; (l_432 >= 22); --l_432)
                    {
                        int **l_466 = &l_32[3];
                        (*l_416) = l_466;

                        ;
                        (**g_198) = p_18;
                        l_469 = ((p_18 >= (safe_add_func_int32_t_s_s(p_16, p_17))) >= (func_47(l_416, &g_35[2]) >= (0xCFE587BAL > (-5L))));
                    }

                    ;
                }
                else
                {
                    (*g_337) = &p_19;

                    ;
                }

                ;
                ;
            }
            else
            {
                int l_477 = (-1L);
                int l_492 = 0x25211780L;
                if ((safe_mul_func_uint8_t_u_u(func_47(func_50(l_46), &l_45), (-8L))))
                {
                    int *l_472 = (void*)0;
                    int l_474 = 8L;
                    (*g_337) = l_472;

                    ;
                    l_44 = p_17;
                    for (p_16 = 0; p_16 < 9; p_16 += 1)
                    {
                        l_32[p_16] = &l_433[5][4];
                    }

                    if (func_47(l_37, l_46))
                    {
                        l_474 ^= l_473[3][1][0];
                        (*g_337) = &p_19;

                        ;
                        l_474 = (g_75[0] > ((*l_37) != (*l_37)));
                    }
                    else
                    {
                        unsigned l_476 = 0UL;
                        l_475 ^= p_17;
                        l_477 ^= (l_476 >= l_476);
                    }

                    ;
                }
                else
                {
                    short l_478 = 0xAD85L;
                    (**g_337) = p_16;
                    l_478 = (**g_337);
                }


                ;
                l_473[3][1][0] = ((safe_lshift_func_uint16_t_u_u((l_477 || (((((safe_mul_func_uint8_t_u_u(((g_75[1] <= g_7) < (((&p_19 == &p_19) >= (0xBD1DA202L > (~((safe_rshift_func_int8_t_s_s(g_400[1], 0)) != (((safe_mul_func_uint16_t_u_u((l_487[6] != (p_17 && g_6[1][0][2])), 0xABE0L)) || p_16) | 0x74L))))) || 0UL)), 0xFCL)) <= g_75[1]) && 2L) > g_7) && p_16)), 9)) && g_400[1]);
                l_492 ^= (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_75[1], 7)), (~8UL)));
            }


            ;
            ;
            l_433[4][1] &= (safe_sub_func_int32_t_s_s(0xBA2E6B74L, ((p_19 || func_47(&g_35[3], &g_35[1])) >= p_17)));
            return p_18;




        }
        else
        {
            int l_504 = 0L;
            int *l_506 = &g_75[1];
            int ***l_514 = &g_35[1];
            int l_523 = 0x9FAFFA96L;
            unsigned char l_535 = 0x44L;
            if (((safe_mod_func_int8_t_s_s((p_17 | (4294967287UL & (((p_19 > (l_499 && 0x00L)) <= (func_64(&p_19, p_18, (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_504, (+l_505[2][3][1]))), l_504))) || p_18)) > p_18))), (-8L))) >= g_400[1]))
            {
                int *l_515 = &g_33;
                for (l_432 = 0; (l_432 <= 4); l_432 += 1)
                {
                    int ***l_513 = &g_35[4];
                    (*g_198) = l_506;

                    ;
                    (*l_515) = func_64(func_52((safe_mod_func_uint16_t_u_u(((-1L) & (g_7 || (p_19 ^ (safe_rshift_func_int16_t_s_s(g_400[2], (g_6[1][0][3] <= p_16)))))), (safe_sub_func_uint32_t_u_u(g_33, (func_47(l_513, l_37) | g_75[1]))))), l_514, l_515), g_400[1], p_16);

                    ;
                    (*g_36) = 1L;
                }
            }
            else
            {
                int l_518[3][4] = {{(-2L),1L,(-2L),(-2L)},{1L,1L,0xDDFF6099L,1L},{1L,(-2L),(-2L),1L}};
                int ***l_519[6];
                short l_522 = 1L;
                int i, j;
                for (i = 0; i < 6; i++)
                    l_519[i] = &g_35[3];
                l_523 &= (safe_sub_func_int32_t_s_s((l_518[1][0] | (g_75[0] != func_47(l_519[0], l_519[0]))), (safe_sub_func_int16_t_s_s((65529UL <= l_522), 0x30D2L))));
            }
            (*g_337) = func_68(g_524);
            (*l_506) = 1L;
            for (l_449 = 0; (l_449 <= 1); l_449 += 1)
            {
                int *l_553 = &l_44;
                for (p_16 = 0; (p_16 <= 1); p_16 += 1)
                {
                    int *l_552 = &g_75[1];
                    int ***l_559 = &g_198;
                    int i, j, k;
                    for (g_33 = 1; (g_33 <= 4); g_33 += 1)
                    {
                        int *l_525 = &l_499;
                        int *l_526 = &l_499;
                        int i;
                        l_526 = l_525;
                    }
                }
                for (l_475 = (-19); (l_475 != 0); ++l_475)
                {
                    return (**g_337);


                }
                (*g_337) = func_68((safe_sub_func_uint16_t_u_u((0x45092A16L != 0xCCDCA8E7L), (safe_mod_func_int32_t_s_s((*l_553), 1L)))));
                for (p_16 = 0; (p_16 <= 8); p_16 += 1)
                {
                    int **l_566 = &l_32[6];
                    (**l_566) |= (g_75[1] || ((void*)0 != l_566));
                }
            }
        }
        if ((**g_198))
            break;
    }

    ;
    if (p_18)
    {
        unsigned short l_569[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
        int *l_577 = &g_33;
        int ***l_588[9][6][4] = {{{&g_144,&g_331[1],&g_144,&g_144},{&g_144,&g_35[4],&g_198,&g_337},{&g_35[1],(void*)0,(void*)0,&g_35[4]},{&g_331[4],&g_331[5],(void*)0,(void*)0},{&g_35[1],&g_144,&g_198,(void*)0},{&g_144,&g_337,&g_144,&g_337}},{{&g_144,&g_337,&g_144,&g_337},{(void*)0,(void*)0,&g_144,&g_337},{&g_144,&g_331[5],(void*)0,&g_198},{&g_144,&g_337,&g_35[1],&g_144},{&g_144,(void*)0,(void*)0,&g_35[4]},{&g_144,&g_144,&g_144,&g_331[5]}},{{&g_35[1],(void*)0,&g_337,(void*)0},{&g_35[1],(void*)0,&g_35[1],&g_331[5]},{&g_144,&g_144,(void*)0,&g_35[4]},{&g_35[4],(void*)0,&g_35[1],&g_144},{&g_198,&g_337,&g_35[1],&g_198},{&g_35[4],&g_331[5],(void*)0,&g_337}},{{&g_144,(void*)0,&g_35[1],(void*)0},{&g_35[1],(void*)0,&g_337,(void*)0},{&g_35[1],(void*)0,&g_144,&g_337},{&g_144,&g_331[5],(void*)0,&g_198},{&g_144,&g_337,&g_35[1],&g_144},{&g_144,(void*)0,(void*)0,&g_35[4]}},{{&g_144,&g_144,&g_144,&g_331[5]},{&g_35[1],(void*)0,&g_337,(void*)0},{&g_35[1],(void*)0,&g_35[1],&g_331[5]},{&g_144,&g_144,(void*)0,&g_35[4]},{&g_35[4],(void*)0,&g_35[1],&g_144},{&g_198,&g_337,&g_35[1],&g_198}},{{&g_35[4],&g_331[5],(void*)0,&g_337},{&g_144,&g_198,&g_35[4],&g_331[1]},{&g_35[4],&g_331[1],(void*)0,&g_331[1]},{&g_331[4],&g_198,&g_337,&g_35[4]},{&g_144,&g_337,&g_144,(void*)0},{&g_337,(void*)0,(void*)0,&g_331[5]}},{{&g_337,&g_337,&g_144,&g_144},{&g_144,&g_331[5],&g_337,&g_337},{&g_331[4],&g_337,(void*)0,&g_337},{&g_35[4],&g_337,&g_35[4],&g_337},{&g_35[1],&g_331[5],&g_144,&g_144},{&g_35[1],&g_337,&g_331[4],&g_331[5]}},{{(void*)0,(void*)0,&g_331[4],(void*)0},{&g_35[1],&g_337,&g_144,&g_35[4]},{&g_35[1],&g_198,&g_35[4],&g_331[1]},{&g_35[4],&g_331[1],(void*)0,&g_331[1]},{&g_331[4],&g_198,&g_337,&g_35[4]},{&g_144,&g_337,&g_144,(void*)0}},{{&g_337,(void*)0,(void*)0,&g_331[5]},{&g_337,&g_337,&g_144,&g_144},{&g_144,&g_331[5],&g_337,&g_337},{&g_331[4],&g_337,(void*)0,&g_337},{&g_35[4],&g_337,&g_35[4],&g_337},{&g_35[1],&g_331[5],&g_144,&g_144}}};
        char l_602[8] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
        int ***l_612 = (void*)0;
        int i, j, k;
        l_569[3] |= ((safe_lshift_func_uint16_t_u_u(p_18, 14)) >= 0x7303L);
        for (p_19 = 7; (p_19 >= 0); p_19 -= 1)
        {
            unsigned l_574 = 0x11542FE5L;
            int l_583 = 0x5A36A37BL;
        }
        (*l_37) = (*l_37);
        (**g_337) = (safe_rshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(255UL, ((-1L) != ((void*)0 == &p_19)))) || g_33), p_18)) ^ func_47(l_612, &g_337)), 4));
    }
    else
    {
        (*g_198) = &p_19;

        ;
    }

    ;
    return p_17;



}







static int func_47(int *** p_48, int *** p_49)
{
    short l_411 = 0x67C2L;
    return l_411;
}







static int *** func_50(int *** p_51)
{
    int l_56 = 3L;
    unsigned l_59 = 5UL;
    int *l_410 = &g_75[1];
    l_410 = func_52((l_56 >= ((safe_mod_func_uint16_t_u_u(65535UL, l_59)) != (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((func_64(&l_56, l_56, l_56) > (safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s(g_400[1], l_59)) && l_56) | 0x03L), l_56))), l_59)), 6)))), &g_331[4], &l_56);

    ;
    return &g_331[4];


}







static int * func_52(unsigned p_53, int *** p_54, int * p_55)
{
    int l_404 = 0xFEA08B1EL;
    int *l_409 = &g_33;
    if (((void*)0 == (*p_54)))
    {
        (*g_337) = func_68((((!p_53) && ((void*)0 == p_55)) | p_53));

        ;
        (**g_337) = (*g_36);
    }
    else
    {
        int *l_403 = &g_75[1];
        unsigned short l_408 = 6UL;
        for (g_33 = 7; (g_33 != (-23)); g_33 = safe_sub_func_uint32_t_u_u(g_33, 4))
        {
            (*g_337) = l_403;

            ;
            if (l_404)
                break;
            for (p_53 = (-25); (p_53 != 17); p_53 = safe_add_func_int8_t_s_s(p_53, 3))
            {
                short l_407 = 0x12DBL;
                l_407 &= (*p_55);
            }
            if ((*p_55))
                break;
        }
    }
    return l_409;


}







static unsigned char func_64(int * p_65, int p_66, int p_67)
{
    unsigned l_395 = 4294967295UL;
    for (g_33 = 4; (g_33 >= 0); g_33 -= 1)
    {
        int i;
        (*g_198) = func_68(((void*)0 == g_35[g_33]));

        ;
    }
    return l_395;
}







static int * func_68(int p_69)
{
    unsigned l_72 = 0UL;
    int ***l_83 = (void*)0;
    int l_84 = 0xBFFE0AB0L;
    int *l_394 = &g_75[0];
    for (p_69 = 1; (p_69 <= 7); p_69 += 1)
    {
        unsigned l_73 = 0x7BB9FEC4L;
        int *l_360 = &g_75[1];
        unsigned char l_376 = 0UL;
        int l_390 = 8L;
        for (g_7 = 6; (g_7 >= 1); g_7 -= 1)
        {
            int l_87 = (-1L);
            int ***l_88 = &g_35[1];
            unsigned char l_387[10];
            short l_392[6][7][5] = {{{0xD50DL,(-5L),0xC7B5L,0xF31AL,8L},{0L,1L,0xE573L,(-1L),(-10L)},{0xD50DL,0xF8ACL,0x37E8L,(-8L),0x6C99L},{(-7L),(-1L),5L,(-1L),0x7B6DL},{0L,0x67C1L,(-5L),8L,0x9ABEL},{1L,0xE938L,0L,0x0B1BL,0x0B1BL},{(-1L),0x613DL,(-1L),(-1L),7L}},{{0xB33AL,0x8E29L,(-1L),0xE573L,(-1L)},{(-2L),(-8L),0xF04DL,(-1L),0x4FF1L},{(-7L),0L,(-1L),(-1L),(-4L)},{0xFAFEL,0L,(-1L),0x76DEL,0x67C1L},{0x777AL,(-1L),0L,0x66B8L,0L},{0L,7L,(-5L),0x6C99L,0xD50DL},{0xE573L,0L,5L,0L,0xE573L}},{{0xF04DL,0x5A87L,0x37E8L,0x613DL,3L},{(-1L),1L,0xE573L,0x7B6DL,1L},{0L,0xD50DL,0xC7B5L,0x5A87L,3L},{0L,0x7B6DL,(-4L),0xBD2AL,0xE573L},{3L,1L,1L,1L,0L},{0xB33AL,0x66B8L,0L,(-10L),1L},{7L,(-1L),(-1L),0x613DL,(-1L)}},{{0L,0L,0x66B8L,0L,0xB33AL},{(-10L),0xD0D2L,0L,0x37E8L,(-2L)},{(-1L),0L,1L,(-4L),(-7L)},{0x613DL,0xD0D2L,1L,(-8L),0xFAFEL},{1L,0L,(-1L),0x0B1BL,0x777AL},{0x4FF1L,(-1L),0x37E8L,0L,0L},{0x0B1BL,0x66B8L,0x4DF8L,0L,0xE573L}},{{0xF31AL,1L,1L,0xF31AL,0xF04DL},{0L,0xE573L,0x777AL,(-5L),(-1L)},{0xD0D2L,0L,8L,3L,0L},{0x4DF8L,0x6622L,(-10L),(-5L),0L},{0xFAFEL,0x4FF1L,0x6C99L,0xF31AL,3L},{0xE573L,0x8E29L,0x7B6DL,0L,(-4L)},{0x6DFBL,0xFAFEL,0x9ABEL,0L,1L}},{{0xE938L,0L,0x0B1BL,0x0B1BL,0L},{(-2L),1L,7L,(-8L),0xF31AL},{5L,0L,(-7L),0x66B8L,(-1L)},{9L,(-6L),(-2L),1L,0x613DL},{0xE938L,0L,0xB33AL,0L,1L},{0x37E8L,0xD0D2L,(-1L),0L,0x4FF1L},{0x7B6DL,0xE573L,1L,(-1L),0x0B1BL}}};
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_387[i] = 0x52L;
            (*g_71) = &p_69;

            ;
            l_73 = (l_72 >= 0x7EL);
            for (l_72 = 1; (l_72 <= 7); l_72 += 1)
            {
                int *l_82[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_82[i] = &g_33;
                if (p_69)
                {
                    int *l_74 = &g_75[1];
                    int i;
                    (*l_74) = 0xDDC797A3L;
                    (*l_88) = func_76(l_82[2], l_83, l_84, (((g_6[0][3][2] ^ 0xC3L) > ((g_33 || (safe_add_func_int32_t_s_s(l_87, (l_88 != l_83)))) > 0x60L)) & 0x2DL), &g_36);


                    (*g_337) = l_82[2];

                    ;
                }
                else
                {
                    unsigned l_348 = 1UL;
                    int l_361 = 0xDEAFAA86L;
                    for (l_73 = (-19); (l_73 != 29); l_73++)
                    {
                        unsigned l_359 = 6UL;
                        l_359 = (l_348 | (((*g_36) || (safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(g_6[1][2][3], 4294967295UL)) >= (((safe_sub_func_int8_t_s_s(g_7, g_33)) < (safe_sub_func_uint8_t_u_u(g_75[1], (safe_sub_func_uint32_t_u_u((p_69 != 0UL), g_75[1]))))) != (-1L))), g_75[0]))) | 0x59L));
                        return l_360;



                    }
                    l_361 &= (65532UL && (((void*)0 == &l_82[2]) || g_75[0]));
                }

                ;
                (*g_337) = &p_69;

                ;
                if (p_69)
                    break;
            }
            if ((safe_mul_func_int16_t_s_s((p_69 == g_75[1]), (g_75[1] ^ (safe_mul_func_uint8_t_u_u(p_69, p_69))))))
            {
                short l_368 = 0x9158L;
                unsigned l_378 = 2UL;
                int *l_386 = &g_33;
                for (l_87 = (-19); (l_87 < 27); l_87++)
                {
                    unsigned char l_374[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
                    int **l_375 = (void*)0;
                    int **l_377 = &l_360;
                    int i;
                    if ((*l_360))
                    {
                        short l_371 = (-8L);
                        (*l_360) |= l_368;
                        (*l_360) = (safe_mul_func_int16_t_s_s(g_7, p_69));
                        (*l_360) = l_371;
                        l_376 ^= (((+(((safe_lshift_func_int16_t_s_s(g_7, 11)) == (*l_360)) ^ g_7)) && l_374[1]) & ((((4294967291UL && g_6[1][2][3]) & g_7) && (((((-10L) | ((l_375 != l_375) <= p_69)) <= 1L) <= 0UL) | l_374[5])) ^ l_371));
                    }
                    else
                    {
                        (*g_198) = &p_69;
                        if ((*g_36))
                            break;
                    }
                    if ((l_375 != l_377))
                    {
                        (*l_360) = l_378;
                        if ((**g_198))
                            continue;
                        if (p_69)
                            continue;
                        if (p_69)
                            break;
                    }
                    else
                    {
                        unsigned l_379 = 0x5904FA5CL;
                        (**l_377) = (~(l_379 < (safe_mul_func_int16_t_s_s(((void*)0 == &g_35[4]), ((&l_360 != (void*)0) ^ (safe_lshift_func_uint16_t_u_s(g_7, 6)))))));
                        l_84 ^= (*l_360);
                        (*l_360) |= (!0x40B1C1F8L);
                    }
                    for (l_378 = 0; (l_378 < 34); l_378++)
                    {
                        return l_386;



                    }
                    (**l_377) = (*l_386);
                }
                for (l_73 = 0; (l_73 <= 1); l_73 += 1)
                {
                    int i;
                    l_390 &= (((+l_387[7]) != g_75[0]) || (safe_mod_func_uint32_t_u_u(1UL, p_69)));
                }
            }
            else
            {
                int *l_391 = &g_33;
                int *l_393 = &g_75[1];
                for (l_87 = 2; (l_87 <= 7); l_87 += 1)
                {
                    if (p_69)
                    {
                        (*g_198) = l_391;

                        ;
                        if ((**g_337))
                            break;
                    }
                    else
                    {
                        int i;
                        (*l_360) = (*l_391);
                        (*l_360) &= (l_392[5][3][2] == (*l_391));
                        l_393 = (void*)0;

                        ;
                    }
                }

                ;
                ;
                (*l_88) = (void*)0;
            }

            ;
        }
    }


    return l_394;



}







static int ** func_76(int * p_77, int *** p_78, int p_79, int p_80, int ** p_81)
{
    char l_89 = 0L;
    int *l_90[3];
    char l_93 = 0x92L;
    unsigned char l_113 = 0x9EL;
    int *l_134 = &g_75[1];
    unsigned l_217 = 4294967295UL;
    unsigned l_254 = 0x7AE1F0B0L;
    int l_289[1][4] = {{(-5L),(-5L),(-5L),(-5L)}};
    int **l_334 = &l_90[0];
    int **l_338 = &l_90[0];
    int **l_339 = &l_90[0];
    int **l_340 = &l_90[0];
    int **l_341 = &g_36;
    int **l_342 = &l_90[0];
    int **l_343[5];
    int **l_344 = &l_134;
    int **l_345 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_90[i] = &g_33;
    for (i = 0; i < 5; i++)
        l_343[i] = &l_134;
    for (p_79 = 0; (p_79 <= 1); p_79 += 1)
    {
        int i;
        l_89 = (0xE83EL == (g_75[p_79] != g_6[1][2][3]));
        (*p_81) = l_90[0];

        ;
    }


    if ((safe_add_func_int8_t_s_s((p_80 < g_33), ((l_93 == 0x25L) & ((((void*)0 == l_90[1]) & p_79) ^ (safe_sub_func_uint32_t_u_u(p_79, ((0x328DBD82L | 0x9807A6E4L) == (-1L)))))))))
    {
        int ***l_98 = &g_35[3];
        int l_99 = 3L;
        int **l_197[8][10][3] = {{{(void*)0,&l_134,&g_36},{&l_90[0],&l_90[0],&l_134},{&l_134,&l_134,&l_90[1]},{&l_134,&g_36,&l_90[0]},{&g_36,&g_36,&l_134},{&l_134,&l_134,(void*)0},{&l_90[0],&l_90[0],&l_90[1]},{&l_90[0],&l_90[0],(void*)0},{&g_36,(void*)0,&l_134},{&g_36,&l_134,&l_134}},{{&g_36,&l_90[1],&l_134},{&g_36,&g_36,&l_90[1]},{&l_90[0],&g_36,&g_36},{&l_90[1],&l_90[2],&l_90[2]},{(void*)0,&l_90[0],&l_90[0]},{&l_90[0],(void*)0,&l_134},{&l_90[2],(void*)0,&g_36},{&l_90[2],(void*)0,(void*)0},{&l_90[0],&l_90[0],&l_90[0]},{(void*)0,&l_134,&l_90[0]}},{{&l_90[1],&g_36,&g_36},{&l_90[1],&l_90[0],&l_90[0]},{&l_90[0],&l_134,&l_134},{(void*)0,&g_36,&g_36},{&g_36,(void*)0,&l_90[0]},{&l_90[0],(void*)0,&l_134},{&l_90[2],(void*)0,&l_90[0]},{&g_36,&l_134,&l_134},{&g_36,&l_90[0],(void*)0},{(void*)0,&l_134,&g_36}},{{&l_90[2],&g_36,&l_90[1]},{&l_90[1],(void*)0,&l_90[0]},{&g_36,&g_36,&g_36},{&g_36,(void*)0,(void*)0},{&g_36,&l_134,&g_36},{&l_90[1],&g_36,&g_36},{&l_90[0],(void*)0,(void*)0},{&l_90[2],&g_36,&g_36},{&g_36,&l_134,&l_90[1]},{&l_90[0],(void*)0,&g_36}},{{&l_90[0],&g_36,&g_36},{(void*)0,(void*)0,&l_134},{&g_36,&g_36,&g_36},{(void*)0,&l_134,&l_90[0]},{(void*)0,&l_90[0],&l_134},{&g_36,&l_134,&g_36},{(void*)0,(void*)0,(void*)0},{&l_90[1],(void*)0,&g_36},{&g_36,(void*)0,&l_90[0]},{&l_90[1],&g_36,(void*)0}},{{&g_36,&l_134,(void*)0},{&l_90[0],&l_90[0],&l_90[1]},{&g_36,&l_90[1],&g_36},{&l_134,&g_36,&g_36},{&l_134,(void*)0,&g_36},{&l_134,(void*)0,(void*)0},{(void*)0,&g_36,(void*)0},{&l_134,&l_90[0],&g_36},{(void*)0,&l_134,&g_36},{&l_90[0],&l_134,&g_36}},{{&l_134,&l_90[0],&g_36},{&l_90[0],&l_134,&l_90[1]},{&l_134,&l_134,&l_90[2]},{&l_134,&l_90[0],(void*)0},{&g_36,&l_134,&l_90[1]},{&g_36,&l_134,&l_134},{&l_134,&l_90[1],&g_36},{&l_90[0],&l_90[0],(void*)0},{&l_90[0],(void*)0,&l_90[1]},{&g_36,&l_90[1],&l_134}},{{&g_36,&l_134,(void*)0},{&g_36,&l_134,&g_36},{(void*)0,&l_90[2],(void*)0},{(void*)0,&g_36,&l_134},{&l_134,&g_36,(void*)0},{&l_134,(void*)0,&l_90[2]},{(void*)0,&l_134,&l_134},{&l_134,&l_90[0],(void*)0},{&l_134,&l_90[0],&l_90[1]},{(void*)0,&l_90[0],&g_36}}};
        int **l_200[2];
        int **l_201 = (void*)0;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_200[i] = &l_90[2];
        p_80 = (*p_77);
        l_99 = (safe_add_func_uint8_t_u_u((l_98 == &p_81), ((((((*g_71) == (*p_81)) <= l_99) < (*p_77)) & 0x7E63684AL) || ((safe_rshift_func_int8_t_s_s(l_99, 5)) || p_80))));
        if ((((-2L) | (safe_rshift_func_uint16_t_u_u(l_99, ((g_75[1] || 1UL) < g_7)))) > 1L))
        {
            int *l_152 = &g_75[1];
            int l_179 = 0x8EB9DC2BL;
            for (l_99 = 0; (l_99 >= 29); l_99 = safe_add_func_uint16_t_u_u(l_99, 8))
            {
                int l_106 = 0x206BB7C9L;
                int l_128 = (-5L);
                short l_147 = 0x5E05L;
            }
            l_90[0] = (*g_71);


            (*p_81) = (void*)0;

            ;
            if (((p_80 | (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(5L, 0L)), 0))) && (0x156CL ^ ((void*)0 != (*p_81)))))
            {
                unsigned short l_166[6] = {0x4C13L,0x4C13L,0x4C13L,0x4C13L,0x4C13L,0x4C13L};
                int i;
                (*l_152) &= l_166[2];
                for (l_99 = (-13); (l_99 == (-11)); ++l_99)
                {
                    char l_171 = (-4L);
                    for (l_113 = 0; (l_113 >= 27); ++l_113)
                    {
                        (*p_81) = (void*)0;

                        ;
                        (*g_71) = l_152;

                        ;
                        (*l_152) = (*l_152);
                    }
                    (*l_134) = ((l_171 | g_75[1]) && g_6[1][2][3]);
                }

                ;
                (*l_152) &= (safe_rshift_func_uint16_t_u_u(0x57B0L, 12));
                (*l_152) ^= (~(((void*)0 != &p_81) == l_166[2]));
            }
            else
            {
                char l_178[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_178[i] = 4L;
                (*l_134) ^= ((safe_sub_func_uint8_t_u_u(g_33, p_79)) || (safe_add_func_int8_t_s_s(p_80, g_6[1][2][3])));
                l_179 ^= l_178[2];
                (*l_152) ^= (-7L);
                for (l_179 = 0; (l_179 <= 2); l_179 += 1)
                {
                    int l_184 = 0x6197552EL;
                    int i;
                    l_184 &= ((safe_add_func_uint8_t_u_u((l_178[l_179] != 4294967294UL), ((~(l_178[l_179] || ((*l_152) < ((safe_rshift_func_int16_t_s_s(0x8B61L, 10)) <= ((void*)0 == &p_81))))) != ((*p_77) && (0x63C88BFDL ^ 1UL))))) == p_80);
                    for (l_93 = 0; (l_93 <= (-1)); l_93 = safe_sub_func_uint32_t_u_u(l_93, 2))
                    {
                        int *l_187[6][10][4] = {{{&g_33,&g_33,&g_75[1],&g_33},{&g_75[1],&g_33,&g_33,(void*)0},{&g_33,&g_33,&g_75[1],&l_184},{&g_33,&g_33,&g_33,(void*)0},{&g_33,(void*)0,&g_33,&g_33},{&g_33,&l_184,&g_33,(void*)0},{&g_75[1],&g_33,&g_33,&g_75[1]},{&g_33,(void*)0,&g_33,&g_33},{&g_33,(void*)0,&g_33,&g_75[1]},{&g_33,&g_75[1],&g_75[1],&g_75[1]}},{{&g_33,(void*)0,&l_184,&g_33},{&l_99,(void*)0,&g_75[1],&g_75[1]},{&l_184,&g_33,(void*)0,(void*)0},{&l_184,&l_184,&g_75[1],&g_33},{&l_99,(void*)0,&l_184,(void*)0},{&g_33,&g_33,&g_75[1],&l_184},{&g_33,&g_33,&g_33,(void*)0},{&g_33,(void*)0,&g_33,&g_33},{&g_33,&l_184,&g_33,(void*)0},{&g_75[1],&g_33,&g_33,&g_75[1]}},{{&g_33,(void*)0,&g_33,&g_33},{&g_33,(void*)0,&g_33,&g_75[1]},{&g_33,&g_75[1],&g_75[1],&g_75[1]},{&g_33,(void*)0,&l_184,&g_33},{&l_99,(void*)0,&g_75[1],&g_75[1]},{&l_184,&g_33,(void*)0,(void*)0},{&g_75[1],&g_75[1],&l_99,(void*)0},{&g_33,(void*)0,&g_75[1],&g_33},{(void*)0,&g_33,&g_75[1],&g_75[1]},{&g_33,&g_33,&g_33,&g_33}},{{&g_33,(void*)0,&l_184,(void*)0},{(void*)0,&g_75[1],(void*)0,(void*)0},{&g_33,(void*)0,(void*)0,&g_33},{(void*)0,&g_33,&l_184,&g_33},{&g_33,&g_75[1],&g_33,&l_99},{&g_33,&l_99,&g_75[1],&l_99},{(void*)0,&g_75[1],&g_75[1],&g_33},{&g_33,&g_33,&l_99,&g_33},{&g_75[1],(void*)0,(void*)0,(void*)0},{&g_75[1],&g_75[1],&l_99,(void*)0}},{{&g_33,(void*)0,&g_75[1],&g_33},{(void*)0,&g_33,&g_75[1],&g_75[1]},{&g_33,&g_33,&g_33,&g_33},{&g_33,(void*)0,&l_184,(void*)0},{(void*)0,&g_75[1],(void*)0,(void*)0},{&g_33,(void*)0,(void*)0,&g_33},{(void*)0,&g_33,&l_184,&g_33},{&g_33,&g_75[1],&g_33,&l_99},{&g_33,&l_99,&g_75[1],&l_99},{(void*)0,&g_33,&g_75[1],(void*)0}},{{&g_33,(void*)0,&g_33,&l_184},{&g_75[1],&g_75[1],&g_33,&g_33},{&g_75[1],&g_75[1],&g_33,(void*)0},{&g_33,&g_33,&g_75[1],(void*)0},{&g_75[1],&g_33,&l_99,&g_75[1]},{(void*)0,&g_33,(void*)0,(void*)0},{&g_33,&g_33,&g_75[1],(void*)0},{(void*)0,&g_75[1],&g_75[1],&g_33},{&l_184,&g_75[1],&g_75[1],&l_184},{(void*)0,(void*)0,&g_75[1],(void*)0}}};
                        int i, j, k;
                        (*p_81) = l_187[0][7][3];

                        ;
                    }


                }


            }


        }
        else
        {
            int l_194[4][3] = {{0x44B73ACFL,0x524142CDL,0x44B73ACFL},{1L,1L,1L},{0x44B73ACFL,0x524142CDL,0x44B73ACFL},{1L,1L,1L}};
            int i, j;
            (*l_134) = (((*p_81) != l_90[1]) != (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xD6L, (g_6[1][2][3] || (*p_77)))), ((&g_36 != (*l_98)) <= g_75[1]))));
            (*l_134) &= (safe_add_func_uint8_t_u_u(p_79, l_194[1][2]));
        }



        if ((safe_lshift_func_uint16_t_u_s((0L != p_79), 6)))
        {
            int **l_199 = &l_134;
            return l_201;



        }
        else
        {
            unsigned l_204 = 0xBE8019E2L;
            int **l_209 = &l_90[0];
            unsigned l_216 = 0UL;
            p_80 = (*l_134);
            l_217 |= (safe_add_func_uint8_t_u_u((l_204 > (safe_rshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(((&p_81 != (void*)0) < (l_209 != (void*)0)), g_7)) >= (safe_add_func_int16_t_s_s((g_7 & ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((p_80 <= (g_6[1][2][3] || g_75[1])), g_75[1])), 4294967295UL)) < l_216)), p_80))), 8))), g_7));
        }
    }
    else
    {
        int **l_222[6][8][5] = {{{&l_90[0],&g_36,&l_90[0],(void*)0,&g_36},{&g_36,&l_134,&l_90[2],(void*)0,&g_36},{&l_134,&l_134,&l_134,&l_90[0],&l_134},{(void*)0,&l_90[0],&l_134,&l_134,(void*)0},{&g_36,&g_36,&l_90[0],&g_36,&l_90[0]},{(void*)0,(void*)0,&l_90[0],&g_36,&l_90[1]},{(void*)0,&g_36,&l_90[1],&l_90[0],&l_90[0]},{&g_36,(void*)0,(void*)0,&l_134,&l_90[0]}},{{&l_134,&l_90[0],(void*)0,&l_90[1],(void*)0},{&l_90[2],&l_134,&l_134,&l_90[2],&l_134},{&l_134,&l_90[2],&l_90[0],(void*)0,(void*)0},{&l_90[0],&g_36,&l_90[0],&g_36,&l_90[0]},{&l_90[2],&l_90[1],&l_134,&l_90[1],&l_90[0]},{&l_134,&l_90[0],&l_90[2],(void*)0,&l_90[0]},{&l_90[0],(void*)0,&l_90[0],&l_90[1],&l_90[0]},{&l_134,(void*)0,(void*)0,&l_90[0],&l_90[0]}},{{&l_90[0],&l_90[0],&l_90[2],&l_90[0],(void*)0},{&g_36,(void*)0,&l_90[1],&l_134,&l_134},{&l_90[0],&l_90[1],&l_90[0],&l_134,(void*)0},{&l_134,&l_90[2],&l_134,&l_90[2],&l_90[2]},{&l_90[0],&l_90[0],&l_134,&l_90[0],&l_90[0]},{(void*)0,(void*)0,&l_134,&l_90[2],(void*)0},{&l_134,&l_90[0],&l_90[0],(void*)0,&l_90[0]},{(void*)0,&l_90[2],&l_90[1],&l_90[0],&l_134}},{{&l_134,&l_90[1],&l_90[2],&l_90[2],&l_90[1]},{&l_134,&l_134,(void*)0,&l_90[2],&l_134},{(void*)0,&l_90[0],&l_90[0],&g_36,&l_134},{&l_134,&g_36,&l_134,&l_134,&l_134},{&l_90[0],&l_90[0],&l_90[2],&l_90[0],&l_90[0]},{&l_134,&l_90[0],&l_90[0],&l_90[0],&l_134},{&l_90[2],&l_90[0],(void*)0,&l_134,&l_134},{&g_36,(void*)0,(void*)0,&g_36,&l_134}},{{&l_90[1],(void*)0,&l_90[0],&l_134,&l_90[0]},{&l_90[0],(void*)0,&l_134,&l_90[2],&l_90[2]},{(void*)0,&l_134,&l_90[2],&l_134,&l_134},{(void*)0,&l_134,(void*)0,&g_36,&l_134},{&l_90[0],&l_90[0],&l_90[0],&l_134,&l_90[1]},{(void*)0,&l_134,&l_90[0],&l_90[0],&l_90[0]},{&l_90[1],&l_90[1],(void*)0,&l_90[0],&l_90[0]},{&l_90[2],&l_134,&l_90[2],&l_134,&l_134}},{{&l_90[0],&l_90[0],&l_90[0],(void*)0,&l_134},{(void*)0,&l_134,&l_134,&l_134,&l_134},{&l_90[0],&l_90[1],&l_134,&l_90[0],&l_90[0]},{&l_90[2],&l_134,&l_90[2],&l_134,&l_90[0]},{&l_90[1],&l_90[0],&l_134,&l_90[0],&l_90[1]},{&l_134,&l_134,&l_90[2],&l_90[0],&g_36},{&l_90[0],&l_90[0],&l_134,&l_90[0],&l_90[0]},{&l_90[0],(void*)0,&l_134,&l_90[2],&l_90[0]}}};
        int **l_310 = &g_36;
        int **l_332 = &l_134;
        int i, j, k;
        (*l_134) = (*p_77);
        if ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0x3DBA2F45L, (l_222[2][7][0] != l_222[2][7][0]))), g_75[0])))
        {
            short l_238 = 0x0224L;
            int **l_239 = &g_36;
            unsigned l_258 = 4294967290UL;
            short l_282[9][6][1] = {{{0xC26DL},{0x4592L},{0xAD5EL},{0xC26DL},{4L},{4L}},{{0xC26DL},{0xAD5EL},{0x4592L},{0xC26DL},{0x4592L},{0xAD5EL}},{{0xC26DL},{4L},{4L},{0xC26DL},{0xAD5EL},{0x4592L}},{{0xC26DL},{0x4592L},{0xAD5EL},{0xC26DL},{4L},{4L}},{{0xC26DL},{0xAD5EL},{0x4592L},{0xC26DL},{0x4592L},{0xAD5EL}},{{0xC26DL},{4L},{4L},{0xC26DL},{0xAD5EL},{0x4592L}},{{0xC26DL},{0x4592L},{0xAD5EL},{0xC26DL},{4L},{4L}},{{0xC26DL},{0xAD5EL},{0x4592L},{0xC26DL},{0x4592L},{0xAD5EL}},{{0xC26DL},{4L},{4L},{0xC26DL},{0xAD5EL},{0x4592L}}};
            int i, j, k;
            for (p_80 = (-28); (p_80 == (-29)); --p_80)
            {
                int l_237 = 0L;
                for (l_113 = 0; (l_113 <= 4); l_113 = safe_add_func_int8_t_s_s(l_113, 6))
                {
                    (*l_134) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_75[0], 2)), (safe_add_func_uint16_t_u_u(p_79, (safe_add_func_int8_t_s_s(p_80, ((void*)0 == &l_222[5][2][3])))))));
                    for (p_79 = 0; (p_79 <= 7); p_79 = safe_add_func_int32_t_s_s(p_79, 2))
                    {
                        (*l_134) = 0x4F471C6FL;
                        l_238 |= l_237;
                        return l_239;


                    }
                    for (l_238 = 0; (l_238 <= 4); l_238 += 1)
                    {
                        int l_240 = 0x2DA18387L;
                        unsigned l_241[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_241[i] = 0xC3E68B0BL;
                        l_241[1] &= l_240;
                        (*l_239) = (*g_198);
                        (*p_81) = (void*)0;

                        ;
                    }
                }
                for (l_113 = (-4); (l_113 == 44); l_113++)
                {
                    unsigned l_267 = 4294967295UL;
                    if ((safe_mul_func_uint32_t_u_u((*l_134), ((g_75[1] || (safe_add_func_int8_t_s_s(((((p_80 == g_6[0][1][1]) >= p_80) || (safe_sub_func_uint32_t_u_u(((*l_239) == (void*)0), p_80))) & (g_33 <= l_237)), 251UL))) == (*l_134)))))
                    {
                        (*l_134) ^= (&g_198 == (void*)0);
                        (*l_134) = (safe_lshift_func_uint8_t_u_s(p_80, (safe_lshift_func_int16_t_s_s(((*p_81) == (void*)0), 3))));
                        (*l_134) &= l_254;
                    }
                    else
                    {
                        int l_257 = 0xC335714BL;
                        l_257 |= (6UL & ((+g_75[1]) & (safe_add_func_int16_t_s_s((&g_71 != (void*)0), p_80))));
                        (*l_134) = l_258;
                    }
                    (*l_134) |= (-8L);
                    (*l_134) |= (((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(p_80, (~(((safe_sub_func_uint16_t_u_u(l_267, g_7)) < 0x4710L) >= l_258)))), 0x81L)), 8)) || (p_79 ^ g_7)) < 1UL);
                }
            }


            (*l_239) = (*l_239);
            (*l_134) ^= (~(((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((~((*g_198) == (*l_239))), 4L)) || (0x55788511L && (0x2BL == (safe_sub_func_uint16_t_u_u(p_80, (((safe_mod_func_uint8_t_u_u((0L != (safe_rshift_func_int16_t_s_s((g_6[1][2][3] && (safe_mul_func_uint16_t_u_u(g_6[1][2][3], l_258))), g_7))), p_79)) || 0x21C25903L) ^ p_80)))))), p_79)), p_79)) > 4L) <= l_282[8][3][0]));
            l_289[0][0] &= (safe_mul_func_uint8_t_u_u(((-3L) | ((safe_mod_func_uint16_t_u_u(p_79, (p_80 & (safe_rshift_func_int16_t_s_s(g_75[0], ((+g_6[1][2][3]) != (g_75[1] > (((*p_77) || (*p_77)) & 0xF977L)))))))) == g_33)), (-3L)));
        }
        else
        {
            unsigned l_303 = 0x5D49FE40L;
            int **l_307 = &l_90[0];
            for (l_217 = 0; (l_217 >= 15); l_217++)
            {
                int **l_308 = &l_90[0];
                int **l_309[9][9] = {{&l_134,&l_90[0],&l_90[0],&g_36,(void*)0,&g_36,&l_134,&l_90[0],&l_134},{&l_90[0],&l_90[0],&l_134,&l_90[0],&l_90[0],&l_90[0],&l_90[0],&l_134,&l_90[0]},{&l_90[0],(void*)0,&l_134,&g_36,&l_134,&l_90[0],(void*)0,&l_90[0],(void*)0},{(void*)0,&l_90[0],&l_90[0],&l_90[0],&l_90[0],&l_90[0],&l_134,&g_36,&l_90[0]},{&l_134,&l_90[0],(void*)0,&l_134,&l_134,(void*)0,&l_90[0],&l_134,&l_90[0]},{&l_134,&l_134,&l_90[0],(void*)0,&l_90[0],(void*)0,(void*)0,&l_134,&l_90[0]},{&g_36,&g_36,&l_90[0],(void*)0,&l_90[0],&g_36,&l_90[0],&l_90[0],&l_90[0]},{&g_36,&l_134,&g_36,&g_36,&l_134,&g_36,&l_90[0],&l_90[0],&l_90[0]},{&g_36,&l_90[0],(void*)0,&l_90[0],&g_36,&g_36,&l_134,&l_134,&l_90[0]}};
                int i, j;
                if ((**p_81))
                    break;
                for (l_89 = 0; (l_89 <= 4); l_89 += 1)
                {
                    unsigned short l_292 = 0x0805L;
                    int l_304 = (-1L);
                    for (p_79 = 3; (p_79 >= 0); p_79 -= 1)
                    {
                        int i, j, k;
                        l_222[(p_79 + 2)][(p_79 + 1)][l_89] = l_222[p_79][(l_89 + 3)][p_79];
                        l_292 |= (**p_81);
                        l_304 = ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(g_75[1], (((p_80 ^ ((safe_sub_func_int16_t_s_s(g_6[1][2][3], (safe_sub_func_uint32_t_u_u(g_75[1], 0x2B3C9330L)))) > p_80)) == (-5L)) ^ (~(!l_303))))) || (l_303 < l_303)) <= 3UL) && 0xFEDEL), p_79)), 1UL)) == g_7);
                    }
                    for (l_93 = 4; (l_93 >= 0); l_93 -= 1)
                    {
                        unsigned l_305 = 0xD98C76D8L;
                        int *l_306[5][6][2] = {{{&l_289[0][0],(void*)0},{&g_33,&g_33},{&g_75[0],&l_304},{&l_304,(void*)0},{(void*)0,(void*)0},{&l_304,&l_304}},{{&g_75[0],&g_33},{&g_33,(void*)0},{&l_289[0][0],&l_304},{(void*)0,&l_289[0][0]},{&g_33,&g_75[1]},{&g_33,&l_289[0][0]}},{{(void*)0,&l_304},{&l_289[0][0],(void*)0},{&g_33,&g_33},{&g_75[0],&l_304},{&l_304,(void*)0},{(void*)0,(void*)0}},{{&l_304,&l_304},{&g_75[0],&g_33},{&g_33,(void*)0},{&l_289[0][0],&l_304},{(void*)0,&l_289[0][0]},{&g_33,&g_33}},{{&g_75[0],&g_33},{&l_304,(void*)0},{&g_33,&g_33},{&l_289[0][0],(void*)0},{(void*)0,&l_289[0][3]},{&l_289[0][3],&l_304}}};
                        int i, j, k;
                        l_305 = (*p_77);
                    }
                }
                return l_310;


            }
            (*l_310) = &l_289[0][0];

            ;
            for (l_254 = 0; (l_254 <= 2); l_254 += 1)
            {
                unsigned short l_319 = 8UL;
                int *l_329 = &g_75[0];
                int **l_335[5][5] = {{&l_90[0],&l_90[0],(void*)0,&g_36,&l_90[2]},{&l_90[0],(void*)0,&g_36,(void*)0,&l_90[0]},{&l_90[0],&g_36,(void*)0,&g_36,(void*)0},{(void*)0,&g_36,&l_90[0],&l_90[0],&g_36},{&g_36,(void*)0,&l_90[0],&g_36,(void*)0}};
                int i, j;
            }
        }


        p_80 = (*p_77);
    }



    return l_345;



}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_400[i], "g_400[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_524, "g_524", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_838, "g_838", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1001[i][j], "g_1001[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
