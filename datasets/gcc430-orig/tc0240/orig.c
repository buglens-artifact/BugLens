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



static const unsigned short g_8 = 65530UL;
static char g_15[2][10][9] = {{{0xB0L,0xF4L,(-1L),0x71L,0xD3L,0x21L,(-1L),0x34L,0xF6L},{0xB7L,(-1L),0xDAL,0xB7L,0xE8L,0xB7L,0xDAL,(-1L),0xB7L},{0xF4L,1L,0xB7L,1L,(-4L),(-8L),0xEBL,9L,0x36L},{(-1L),0x79L,0xA0L,0x57L,0x0EL,0x58L,0xC2L,0L,0xD9L},{0xF4L,(-4L),0xEBL,0x55L,0x35L,0x29L,0x58L,0x41L,0x89L},{0xB7L,0xC2L,(-2L),0xCCL,0L,(-1L),(-4L),1L,1L},{(-1L),(-6L),(-1L),0xD3L,0L,0x0EL,7L,(-1L),0x82L},{1L,1L,0L,0x75L,0xF0L,(-6L),0xB0L,(-1L),1L},{(-8L),0x79L,0xE8L,0x82L,(-7L),0xA0L,0x70L,1L,0x36L},{0xD0L,0L,(-8L),0xA0L,0xB0L,1L,0xA5L,0xA5L,1L}},{{0x47L,(-1L),(-4L),(-1L),0x47L,0xB7L,0x2BL,0xA0L,0x21L},{0L,0x57L,1L,0xA8L,0xE8L,0xCCL,(-4L),(-4L),0xF0L},{0xD9L,0xCBL,(-4L),0L,0xB3L,0xB7L,0L,0xF0L,0xA5L},{0L,0x82L,(-1L),(-1L),0L,1L,0xD0L,0x75L,0x29L},{0xB7L,0xA0L,1L,6L,0xF0L,0xA0L,0xD9L,0x21L,0xCBL},{0x57L,1L,0xD0L,0x35L,(-1L),(-6L),(-1L),0xCCL,0xB3L},{0L,0xF4L,0L,0L,0x70L,0xE5L,0x0EL,0L,0x41L},{0xCBL,(-1L),(-2L),(-7L),0xA0L,0x35L,0L,0xCBL,0xF4L},{0xC2L,0L,0x9EL,0x29L,0xD3L,0xD3L,0x29L,0x9EL,0L},{0xD0L,0x9EL,0x82L,0xA8L,0x89L,0xDAL,0x75L,9L,0x21L}}};
static int g_44 = 0x188A746CL;
static int g_57[2][7] = {{0L,0L,0L,0L,0L,0L,0L},{(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)}};
static int g_59 = 0xBB416C01L;
static char g_67[5][8] = {{(-10L),(-10L),0x16L,(-1L),0x16L,(-10L),(-10L),0x16L},{0xE9L,0x16L,0x16L,0xE9L,(-5L),0xE9L,0x16L,0x16L},{0x16L,(-5L),(-1L),(-1L),(-5L),0x16L,(-5L),(-1L)},{0xE9L,(-5L),0xE9L,0x16L,0x16L,0xE9L,(-5L),0xE9L},{(-10L),0x16L,(-1L),0x16L,(-10L),(-10L),0x16L,(-1L)}};
static int **g_68 = (void*)0;
static char *g_70 = &g_67[4][5];
static char * const *g_69 = &g_70;
static int g_71 = 0xD9541138L;
static int *g_96 = (void*)0;
static int ***g_107 = (void*)0;
static unsigned g_112 = 4294967295UL;
static unsigned g_113 = 0x01D3CF30L;
static unsigned short g_121 = 0xE959L;
static unsigned char g_132 = 8UL;
static char g_155 = 0x15L;
static char g_157[5] = {6L,6L,6L,6L,6L};
static unsigned g_214 = 0x00B88687L;
static int g_215 = 0xC7DA2A81L;
static unsigned short g_219 = 0x7A93L;
static int g_251 = (-4L);
static unsigned g_261 = 4294967289UL;
static char **g_277 = (void*)0;
static short g_309 = 0xECC6L;
static int g_417 = 1L;
static short g_467 = 0xF360L;
static const char g_477[6][7][6] = {{{(-4L),0xF2L,0x0EL,(-1L),0x9BL,0L},{0x93L,2L,0x27L,(-1L),0x0EL,0xE5L},{0xE0L,0xC1L,0x9BL,0x2BL,0L,0xE5L},{5L,0x07L,0x27L,0xE0L,0x07L,0L},{0x19L,(-3L),0x0EL,7L,0x27L,0x07L},{0x1BL,0x9BL,0x27L,0L,1L,0xFBL},{0x1BL,0L,0xB5L,7L,0xB5L,0L}},{{0x19L,0x27L,2L,0xE0L,0L,0x0EL},{5L,(-9L),0L,0x2BL,0xE5L,0xB5L},{0xE0L,(-9L),0xC1L,(-1L),0L,0xC1L},{0x93L,0x27L,(-9L),(-1L),0xB5L,(-3L)},{(-4L),0L,0xFBL,5L,1L,(-9L)},{1L,0x9BL,0xFBL,0x1BL,0x27L,(-3L)},{0xB3L,(-3L),(-9L),0x67L,0x07L,0xC1L}},{{0x67L,0x07L,0xC1L,0x4CL,0L,0xB5L},{(-1L),0xC1L,0L,0x93L,0xC1L,0xC1L},{(-1L),0L,0L,(-1L),(-9L),0x27L},{5L,0L,0x0EL,0L,0xFBL,0xE5L},{(-4L),0x27L,0xB5L,0x4CL,0xFBL,2L},{0xB3L,0L,0xC1L,0x19L,(-9L),1L},{0L,0L,(-3L),0xE0L,0xC1L,0x9BL}},{{0x1BL,0x07L,(-9L),(-1L),0L,0x9BL},{0x4CL,2L,(-3L),0x1BL,2L,1L},{7L,1L,0xC1L,0L,0xB5L,2L},{0L,(-9L),0xB5L,0x67L,0x27L,0xE5L},{0L,0x27L,0x0EL,0L,0x0EL,0x27L},{7L,0xB5L,0L,0x1BL,0x27L,0xC1L},{0x4CL,0L,0xFBL,(-1L),0x9BL,0x0EL}},{{0x1BL,0L,0x07L,0xE0L,0x27L,0x07L},{0L,0xB5L,0L,0x19L,0x0EL,1L},{0xB3L,0x27L,0xE5L,0x4CL,0x27L,0L},{(-4L),(-9L),3L,0xC1L,0x5CL,0xD2L},{0L,0xD2L,0L,(-9L),2L,0x5EL},{(-9L),2L,0x5EL,0xFBL,(-3L),0xF8L},{2L,0x5EL,(-1L),0xFBL,0x1EL,0x1EL}},{{(-9L),0x68L,0x68L,(-9L),(-1L),0x4FL},{0L,(-2L),0xF8L,0xC1L,(-1L),3L},{1L,5L,0x5CL,0L,(-1L),2L},{0xF2L,(-2L),0x1EL,2L,(-1L),(-6L)},{0xE5L,0x68L,0xEAL,0xB5L,0x1EL,0x7EL},{0x0EL,0x5EL,(-1L),0x27L,(-3L),0x7EL},{0L,2L,0xEAL,0x0EL,2L,(-6L)}}};
static char ***g_505[4][7][8] = {{{&g_277,&g_277,&g_277,&g_277,(void*)0,(void*)0,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,(void*)0,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,(void*)0,(void*)0,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,(void*)0,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,(void*)0,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,(void*)0,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,(void*)0,&g_277},{&g_277,(void*)0,&g_277,&g_277,&g_277,&g_277,(void*)0,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,(void*)0,&g_277,&g_277,&g_277},{&g_277,(void*)0,&g_277,&g_277,(void*)0,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,(void*)0,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}}};
static char ****g_504 = &g_505[2][1][3];
static unsigned short g_520 = 0x4BA5L;
static const int g_527 = (-1L);
static const int *g_526[7][2] = {{&g_527,&g_527},{&g_527,&g_527},{&g_527,&g_527},{&g_527,&g_527},{&g_527,&g_527},{&g_527,&g_527},{&g_527,&g_527}};
static const int *g_528 = &g_57[0][3];
static char **g_599 = &g_70;
static short *g_606 = (void*)0;
static short **g_605 = &g_606;
static unsigned short *g_749 = &g_121;
static unsigned short **g_748[7] = {&g_749,&g_749,&g_749,&g_749,&g_749,&g_749,&g_749};
static char g_759 = (-1L);
static char g_824 = (-7L);
static unsigned *g_844 = &g_112;
static unsigned **g_843 = &g_844;
static unsigned ***g_842[4] = {&g_843,&g_843,&g_843,&g_843};
static int ****g_997 = &g_107;
static int *****g_996 = &g_997;
static short g_999[4] = {0x9B98L,0x9B98L,0x9B98L,0x9B98L};



static short func_1(void);
static char * func_16(unsigned p_17);
static char func_20(char * p_21, const int p_22);
static char ** func_23(char * p_24, short p_25);
static char * func_26(const unsigned p_27, short p_28, unsigned p_29, char ** p_30, char ** p_31);
static char func_32(int p_33, const char * p_34);
static unsigned func_35(unsigned p_36, char ** p_37, unsigned p_38);
static unsigned short func_46(short p_47, char ** p_48);
static unsigned short func_51(char ** p_52);
static int * func_60(char ** p_61, char ** p_62, int ** p_63, char * const * p_64);
static short func_1(void)
{
    unsigned l_9 = 2UL;
    const unsigned char l_12 = 0UL;
    char *l_13 = (void*)0;
    char *l_14 = &g_15[1][8][1];
    char **l_1014[3];
    char *l_1015 = &g_824;
    char *l_1016 = &g_155;
    int l_1017[10] = {0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L,0xA59843A6L};
    int i;
    for (i = 0; i < 3; i++)
        l_1014[i] = &g_70;
    l_1017[1] |= (!(safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(g_8, l_9)) && ((g_8 ^ (safe_rshift_func_int16_t_s_u((l_12 == ((*l_14) = g_8)), 13))) <= (g_8 & ((l_1016 = (l_1015 = func_16((safe_sub_func_uint8_t_u_u(l_12, func_20(l_13, ((g_8 || g_8) >= (-1L)))))))) == (void*)0)))), 5)), 7)));
    return l_1017[1];
}







static char * func_16(unsigned p_17)
{
    unsigned char l_786 = 0UL;
    int l_787 = (-1L);
    char **l_788 = &g_70;
    char ***l_789[1];
    char **l_790 = &g_70;
    char * const * const l_791 = &g_70;
    int l_793 = 0L;
    unsigned short *l_829[2][1];
    const int **l_850 = (void*)0;
    unsigned char *l_891 = &g_132;
    unsigned char **l_890 = &l_891;
    short l_932 = 0x5493L;
    unsigned l_949 = 6UL;
    int l_962 = (-10L);
    int l_963 = 0xB2BE2F46L;
    int l_964 = 0L;
    short **l_975 = &g_606;
    int l_976[1][8][6] = {{{0x4A719B16L,0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L},{0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L,3L},{0x4A719B16L,0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L},{0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L,3L},{0x4A719B16L,0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L},{0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L,3L},{0x4A719B16L,0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L},{0x4A719B16L,3L,3L,0x4A719B16L,0x4A719B16L,3L}}};
    int ** const **l_993 = (void*)0;
    int ** const ***l_992[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_993},{(void*)0,&l_993,(void*)0,&l_993,&l_993,&l_993,&l_993,&l_993},{&l_993,&l_993,&l_993,&l_993,&l_993,(void*)0,&l_993,(void*)0}};
    char *l_1013 = &g_157[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_789[i] = &g_277;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_829[i][j] = &g_520;
    }
    if ((((safe_unary_minus_func_uint16_t_u(((*g_749) = p_17))) | (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((l_787 = l_786), 12)), 0)), p_17))) && ((l_790 = l_788) != l_791)))
    {
        int *l_792[2][5] = {{&g_59,&g_59,&g_59,&g_59,&g_59},{&g_44,&g_44,&g_44,&g_44,&g_44}};
        const char *l_800 = &g_759;
        unsigned *l_801 = &g_261;
        short *l_806 = &g_309;
        char **l_807 = &g_70;
        const short l_853 = (-1L);
        int l_859 = 1L;
        int i, j;
        l_793 ^= l_787;
        l_787 = (safe_mod_func_uint8_t_u_u(g_59, l_786));
        for (g_44 = (-3); (g_44 != (-6)); g_44 = safe_sub_func_uint16_t_u_u(g_44, 9))
        {
            char **l_814 = (void*)0;
            int l_819 = 0xC966AF89L;
            char ****l_825 = (void*)0;
            if (((safe_sub_func_int32_t_s_s((((+(safe_add_func_int8_t_s_s(p_17, (0xB634L | (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_819 | (((safe_rshift_func_uint8_t_u_u((l_793 || p_17), 6)) < ((-1L) && (safe_rshift_func_int8_t_s_u(p_17, 3)))) | (l_793 < 0xB15734D9L))), g_824)), g_121)))))) & 0x81L) > p_17), l_786)) <= 0xF3L))
            {
                l_793 = l_793;
                return (*g_277);
            }
            else
            {
                unsigned short l_830 = 0x3BF6L;
                const char *l_833 = &g_155;
                int **l_851 = &g_96;
                int l_854[4] = {0xC6E0F8FAL,0xC6E0F8FAL,0xC6E0F8FAL,0xC6E0F8FAL};
                int i;
                if ((&l_789[0] != l_825))
                {
                    unsigned short *l_828 = (void*)0;
                    int l_832 = 0xDFB51276L;
                    int *l_834 = &g_59;
                    char **l_847 = (void*)0;
                    if ((p_17 && (((l_828 == l_829[0][0]) || l_830) >= ((safe_unary_minus_func_int32_t_s(p_17)) != 0x966FL))))
                    {
                        int **l_835 = &l_792[0][0];
                        (*l_835) = l_834;
                    }
                    else
                    {
                        int *l_836 = &g_59;
                        char *l_837[1][9];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 9; j++)
                                l_837[i][j] = &g_824;
                        }
                        l_836 = &l_832;
                        return l_837[0][3];
                    }
                    l_819 |= (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((+((void*)0 == g_842[2])), ((l_787 & ((safe_sub_func_int16_t_s_s(((p_17 & ((*l_834) = (safe_lshift_func_uint8_t_u_u((l_850 != &l_792[0][0]), 1)))) == 0xA7D9L), ((*l_806) = ((void*)0 == l_851)))) || (*l_834))) > 0xFAL))), 4));
                }
                else
                {
                    int l_852 = 0xC063012EL;
                    if (p_17)
                        break;
                    if (p_17)
                        break;
                    l_852 = p_17;
                }
                l_787 = ((p_17 == l_819) <= l_819);
                l_854[2] |= l_853;
                if (p_17)
                {
                    int l_855 = 1L;
                    if (l_819)
                    {
                        if (p_17)
                            break;
                        l_855 = p_17;
                    }
                    else
                    {
                        l_855 &= 2L;
                        g_96 = &l_819;
                        (*g_96) ^= (l_793 = (p_17 & p_17));
                    }
                }
                else
                {
                    const unsigned char l_858 = 1UL;
                    for (g_71 = 0; (g_71 >= 27); ++g_71)
                    {
                        if (l_858)
                            break;
                    }
                    if (l_859)
                        break;
                }
            }
        }
    }
    else
    {
        char l_864 = 8L;
        int l_874[4] = {(-9L),(-9L),(-9L),(-9L)};
        unsigned char **l_889 = (void*)0;
        const char *l_899[6][2][2] = {{{&g_155,&g_155},{&g_155,(void*)0}},{{&g_477[2][6][2],&g_157[2]},{(void*)0,&g_157[2]}},{{&g_477[2][6][2],(void*)0},{&g_155,&g_155}},{{&g_155,(void*)0},{&g_477[2][6][2],&g_157[2]}},{{(void*)0,&g_157[2]},{&g_477[2][6][2],(void*)0}},{{&g_155,&g_155},{&g_155,(void*)0}}};
        const char **l_898 = &l_899[2][1][1];
        const char ***l_897 = &l_898;
        const char ****l_896 = &l_897;
        short *l_902 = &g_309;
        short **l_903 = &l_902;
        short *l_904 = &g_467;
        char *l_905 = (void*)0;
        unsigned *l_925 = (void*)0;
        const int *l_940 = &l_793;
        int i, j, k;
        for (g_467 = 0; (g_467 >= (-20)); g_467 = safe_sub_func_uint8_t_u_u(g_467, 5))
        {
            unsigned char l_865 = 253UL;
            int *l_866 = &g_71;
            (*l_866) = (((*g_749) ^= 65535UL) != (((p_17 && (p_17 < ((safe_sub_func_uint32_t_u_u((p_17 || (p_17 >= (l_864 < (l_864 ^ (((0x2ED162EBL <= (0x8B5FL | l_865)) & l_865) ^ g_251))))), 4294967295UL)) == l_864))) <= l_864) >= p_17));
            l_793 = p_17;
            if (p_17)
                break;
            for (g_214 = (-4); (g_214 < 7); g_214 = safe_add_func_int16_t_s_s(g_214, 1))
            {
                int *l_869 = &g_57[0][1];
                l_866 = l_869;
                (*l_866) = (((*g_749) = p_17) == ((l_874[1] |= (p_17 | ((*l_866) < (6L >= (((safe_rshift_func_uint16_t_u_s(65535UL, 1)) & p_17) > (&g_467 != l_829[0][0])))))) >= (safe_lshift_func_int16_t_s_u((((**g_843) && l_864) ^ p_17), 0))));
            }
        }
        if (((((safe_lshift_func_int8_t_s_u((l_787 = (safe_lshift_func_int16_t_s_s((!4L), ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((*g_844) = ((safe_lshift_func_int8_t_s_u((1L > ((safe_add_func_uint16_t_u_u(((*g_749) = (l_889 == l_890)), l_786)) | ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((void*)0 != l_896), p_17)), (safe_lshift_func_uint16_t_u_s(((l_904 = ((*l_903) = l_902)) != l_829[0][0]), 10)))) >= 0xD94BL))), p_17)) < 0L)) ^ l_874[0]), 1)), p_17)) & p_17)))), 2)) >= p_17) > p_17) <= p_17))
        {
            return l_905;
        }
        else
        {
            char **l_910 = (void*)0;
            int l_911[2][1];
            int *l_915 = &l_874[3];
            const char *l_919 = &g_477[5][0][0];
            short **l_931 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_911[i][j] = 0x0B79566FL;
            }
            if ((safe_mod_func_uint8_t_u_u(p_17, l_864)))
            {
                int *l_913 = &g_59;
                for (g_44 = 0; (g_44 <= 4); g_44 += 1)
                {
                    int *l_912 = &l_874[3];
                    int i;
                    (*l_912) = g_157[g_44];
                    for (g_112 = 1; (g_112 <= 4); g_112 += 1)
                    {
                        int **l_914 = &l_913;
                        int i, j;
                        (*l_914) = l_913;
                        (*l_912) |= g_67[g_44][(g_112 + 1)];
                        if (g_67[g_44][(g_44 + 1)])
                            continue;
                        l_915 = &l_874[0];
                    }
                }
            }
            else
            {
                const char *l_920 = &l_864;
                short l_921 = 0xB7D6L;
                char *l_934 = &g_155;
                for (g_214 = 0; (g_214 == 16); g_214 = safe_add_func_uint16_t_u_u(g_214, 1))
                {
                    unsigned l_918 = 1UL;
                    if (l_921)
                    {
                        int l_922 = (-1L);
                        l_922 = (*l_915);
                    }
                    else
                    {
                        unsigned * const l_926 = &l_918;
                        int l_933 = (-4L);
                        (*l_915) = ((p_17 > (((*l_915) != ((safe_sub_func_uint8_t_u_u((l_925 == l_926), (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(((((((l_931 != &g_606) < p_17) <= 3L) == p_17) > 0xBEL) < (-1L)), l_932)) < p_17), l_933)))) == 0xA3B7L)) & p_17)) | (*g_749));
                        return l_934;
                    }
                }
                for (g_121 = 0; (g_121 <= 6); g_121 += 1)
                {
                    int l_939[1][7][8] = {{{0x666DE9B5L,0x666DE9B5L,0xF4AF11E5L,0x666DE9B5L,0x666DE9B5L,0xF4AF11E5L,0x666DE9B5L,0x666DE9B5L},{0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L},{0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L},{0x666DE9B5L,0x666DE9B5L,0xF4AF11E5L,0x666DE9B5L,0x666DE9B5L,0xF4AF11E5L,0x666DE9B5L,0x666DE9B5L},{0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L},{0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L,0x6A5B1D89L,0x666DE9B5L,0x6A5B1D89L},{0x666DE9B5L,0x666DE9B5L,0xF4AF11E5L,0x666DE9B5L,0x666DE9B5L,0xF4AF11E5L,0x666DE9B5L,0x666DE9B5L}}};
                    int i, j, k;
                    if ((l_864 && (safe_lshift_func_uint16_t_u_u(((*l_915) || 0L), (safe_sub_func_uint16_t_u_u((*g_749), p_17))))))
                    {
                        if (p_17)
                            break;
                        l_874[2] ^= (-1L);
                        (*l_915) = (&g_132 != ((*l_890) = (*l_890)));
                    }
                    else
                    {
                        (*l_915) = ((void*)0 != &l_874[1]);
                        l_939[0][0][1] = p_17;
                    }
                }
                l_940 = (void*)0;
                return (*g_277);
            }
        }
    }
    if (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(((l_949 == ((l_964 ^= (safe_mod_func_int8_t_s_s((l_963 &= (((**g_843) = l_786) & ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((p_17 && ((l_793 = (l_787 |= l_793)) >= p_17)), 12)), ((p_17 ^ (((-1L) ^ (safe_sub_func_int32_t_s_s(((((*l_891) = (safe_add_func_uint16_t_u_u(l_949, (l_962 = (p_17 == 0x018695DBL))))) <= p_17) != 0xF8A1F81EL), 0UL))) > p_17)) >= p_17))), 0x14L)) <= (-1L)))), 255UL))) < 0x324C94D3L)) <= p_17), 4)) <= l_949), 15)) > p_17) >= 0x1164L), 2)), 6)) > 5UL))
    {
        unsigned l_965 = 4294967291UL;
        int *l_966 = &g_71;
        char **l_969 = &g_70;
        short **l_974[6] = {&g_606,&g_606,&g_606,&g_606,&g_606,&g_606};
        int **l_977[9][1] = {{&l_966},{&g_96},{&l_966},{&g_96},{&l_966},{&g_96},{&l_966},{&g_96},{&l_966}};
        int i, j;
        (*l_966) = l_965;
        (*l_966) ^= ((((safe_lshift_func_uint16_t_u_s(0x6C8BL, 7)) & p_17) != (safe_add_func_uint16_t_u_u((+(safe_sub_func_int16_t_s_s((((l_975 = l_974[3]) == &g_606) > ((1UL < (((g_759 || 0xD4E7L) > p_17) < p_17)) && (-9L))), 0xE99AL))), g_467))) < l_976[0][6][4]);
        g_526[3][0] = l_966;
    }
    else
    {
        const unsigned l_984 = 4294967287UL;
        char **l_989 = &g_70;
        int ** const ****l_994[8] = {&l_992[2][3],&l_992[2][3],&l_992[2][3],&l_992[2][3],&l_992[2][3],&l_992[2][3],&l_992[2][3],&l_992[2][3]};
        int ** const ***l_995 = &l_993;
        int l_998 = 5L;
        int l_1006 = (-5L);
        int **l_1008[9];
        int i;
        for (i = 0; i < 9; i++)
            l_1008[i] = (void*)0;
        g_999[1] |= (safe_sub_func_uint16_t_u_u((0xC775FB27L != (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(p_17, l_984)), 1))), (0xD5B5L > (((safe_rshift_func_uint16_t_u_u(l_932, (((l_998 = (safe_mod_func_uint32_t_u_u(((l_984 || (l_984 || ((safe_rshift_func_uint16_t_u_s(((l_995 = l_992[2][2]) != g_996), p_17)) | 7L))) == (*g_749)), p_17))) == p_17) && 0xD9E9C022L))) > 6UL) >= 9L))));
        if ((g_215 | (l_1006 = (p_17 | ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_17, (-1L))), 0)) && (safe_lshift_func_uint8_t_u_s(g_121, 7)))))))
        {
            int *l_1007 = &l_1006;
            l_1007 = l_1007;
            (*l_1007) ^= p_17;
        }
        else
        {
            char * const *l_1009 = &g_70;
            int *l_1010 = &g_57[0][4];
            g_96 = l_1010;
            for (g_467 = 0; (g_467 != 19); ++g_467)
            {
                (*g_96) = p_17;
                (*g_96) ^= (p_17 > p_17);
            }
            (*g_96) = p_17;
            l_1010 = l_1010;
        }
        return (*l_989);
    }
    return l_1013;
}







static char func_20(char * p_21, const int p_22)
{
    char **l_39 = (void*)0;
    int l_40 = (-10L);
    char **l_622 = (void*)0;
    char **l_623 = &g_70;
    char ***l_778 = &l_39;
    (*l_778) = func_23(((*l_623) = func_26(g_8, ((g_8 || (func_32((g_8 | (func_35(p_22, l_39, l_40) >= (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(l_40, (safe_add_func_uint16_t_u_u(l_40, g_417)))), p_22)), 0UL)))), p_21) & 1UL)) <= g_477[5][3][4]), p_22, &g_70, &g_70)), p_22);
    return p_22;
}







static char ** func_23(char * p_24, short p_25)
{
    int l_624 = 0L;
    unsigned *l_637[3];
    unsigned **l_636[2];
    int l_638 = 0xA903840EL;
    int l_640 = 0x57B424C9L;
    int l_641[4];
    char * const *l_647 = (void*)0;
    int *l_648 = &g_44;
    char **l_658 = &g_70;
    short l_710[8][10][3] = {{{(-8L),0x6F41L,0x80A6L},{1L,0xC90AL,1L},{(-1L),7L,(-1L)},{0xB414L,0x63AEL,0x0F9FL},{(-1L),1L,0L},{(-4L),1L,(-1L)},{(-3L),(-4L),0xAEB4L},{(-8L),(-3L),2L},{0L,0L,0L},{1L,0xF75CL,1L}},{{0x58F8L,(-1L),0x646FL},{(-1L),1L,6L},{0xF75CL,0L,(-1L)},{(-4L),0x854FL,0xB1A4L},{0x4B20L,0x4B20L,0L},{(-1L),0xCD3EL,0x22B5L},{1L,0x5050L,0x58F8L},{9L,2L,0L},{(-3L),0L,3L},{1L,0xD2C0L,(-1L)}},{{0xF41AL,0L,(-10L)},{(-1L),(-4L),(-1L)},{(-10L),0xAEB4L,7L},{0xB377L,0L,0L},{1L,0L,(-1L)},{0L,1L,0L},{(-1L),0x0E52L,0x0F9FL},{0L,2L,1L},{(-1L),8L,(-1L)},{0L,9L,7L}},{{(-1L),1L,0xB377L},{3L,0L,(-4L)},{0L,3L,0xD2C0L},{8L,3L,0xF75CL},{0xF043L,(-1L),0L},{0x5ECBL,8L,(-1L)},{(-10L),0x80A6L,(-1L)},{0L,(-1L),1L},{0L,0x2E82L,0x5ECBL},{(-10L),0xB4DBL,0x22B5L}},{{0x5ECBL,1L,0x646FL},{0xF043L,0L,1L},{8L,(-4L),0x747CL},{0L,0x0F6EL,0x0F9FL},{3L,0L,(-1L)},{(-1L),0L,(-1L)},{0L,1L,0x22B5L},{(-1L),3L,(-4L)},{0L,0L,(-10L)},{(-1L),7L,1L}},{{(-1L),1L,0xB1A4L},{(-1L),(-10L),(-4L)},{0L,(-1L),7L},{0xB414L,0L,0L},{0x14C3L,(-3L),0xF813L},{(-1L),0L,0xF75CL},{0x7088L,0L,(-3L)},{1L,1L,0x80A6L},{(-1L),0L,0xC90AL},{1L,0L,1L}},{{(-1L),(-3L),1L},{7L,0L,0x0D6FL},{0L,(-1L),(-1L)},{(-1L),(-10L),(-3L)},{1L,1L,0L},{(-3L),7L,0x338FL},{0x3439L,0L,0L},{(-1L),0xCD3EL,(-3L)},{7L,0x2E82L,2L},{3L,(-1L),0x76B6L}},{{0x7088L,0L,1L},{0x5CD2L,0xB377L,0xF813L},{(-10L),(-10L),0L},{0L,(-1L),0x8EE4L},{1L,(-1L),2L},{7L,0x3439L,0x0D6FL},{(-1L),0L,0xB955L},{0L,(-1L),0xB955L},{0L,0xB4DBL,0x0D6FL},{0xC90AL,1L,2L}}};
    char l_742 = 0x7EL;
    unsigned char l_752 = 0xECL;
    char l_756[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_637[i] = &g_261;
    for (i = 0; i < 2; i++)
        l_636[i] = &l_637[2];
    for (i = 0; i < 4; i++)
        l_641[i] = 0xC5BA30A4L;
    for (i = 0; i < 3; i++)
        l_756[i] = 0xDBL;
    if (l_624)
    {
        char **l_625[2];
        int l_628[6][2][9] = {{{0xAA1A79BEL,0x33CF4F4BL,1L,0x33CF4F4BL,0x83930C6CL,0x25195F9EL,(-1L),1L,0x6F6DF3AFL},{0x5B1E0A17L,5L,(-5L),7L,0x9473F862L,0x9E80FEBCL,1L,0x8EA58E99L,0x7D7BEE1EL}},{{1L,0x878FCB93L,0x6F6DF3AFL,0x25195F9EL,0x25195F9EL,0x6F6DF3AFL,0x878FCB93L,1L,0xAA1A79BEL},{0x5F10B9EDL,(-4L),0xC1514BB7L,0x8EA58E99L,0L,1L,(-6L),5L,0x9E80FEBCL}},{{0xAA1A79BEL,(-1L),0xD4AAB7B5L,(-1L),3L,(-1L),0xD4AAB7B5L,(-1L),0xAA1A79BEL},{1L,7L,0L,0x9473F862L,0x5F10B9EDL,(-6L),(-4L),0x22BB6EC3L,0x7D7BEE1EL}},{{(-1L),0x6F6DF3AFL,0x33CF4F4BL,0L,1L,1L,0L,0x33CF4F4BL,0x6F6DF3AFL},{1L,0x5F10B9EDL,(-4L),0xC1514BB7L,0x8EA58E99L,0L,1L,(-6L),5L}},{{0xAA1A79BEL,0L,3L,0L,0x33CF4F4BL,0x4257B8AEL,0x33CF4F4BL,0L,3L},{0x5F10B9EDL,0x5F10B9EDL,0x5B1E0A17L,5L,(-5L),7L,0x9473F862L,0x9E80FEBCL,1L}},{{1L,0x6F6DF3AFL,(-1L),0x9441107AL,0x1CEB6151L,0xAA1A79BEL,0xAA1A79BEL,0x1CEB6151L,0x9441107AL},{0x7D7BEE1EL,(-2L),0x7D7BEE1EL,0x22BB6EC3L,(-4L),(-6L),0x5F10B9EDL,0x9473F862L,0L}}};
        int l_639 = 0x2D682250L;
        short *l_642 = &g_309;
        unsigned char *l_643 = &g_132;
        int **l_645 = (void*)0;
        char *l_649 = &g_157[3];
        short l_685 = 0xE765L;
        unsigned l_698 = 0xCDA6A2D4L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_625[i] = &g_70;
        if (((((65535UL | l_624) != p_25) <= (safe_mod_func_uint8_t_u_u(g_67[4][5], l_628[2][1][2]))) | ((*l_643) = ((safe_add_func_uint32_t_u_u((p_25 < (((*l_642) &= (safe_unary_minus_func_uint32_t_u(((l_641[3] = (((((safe_rshift_func_uint16_t_u_s(l_624, ((l_640 = (l_639 = (l_638 = (l_636[1] == (void*)0)))) >= g_8))) & 0x4330L) <= 0x97492E2DL) ^ p_25) || l_628[2][1][2])) <= p_25)))) >= l_624)), 4294967292UL)) != p_25))))
        {
            int *l_644 = &g_44;
            (*l_644) = p_25;
        }
        else
        {
            int ***l_646[10] = {&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645,&l_645};
            int i;
            l_648 = &l_628[2][1][2];
        }
        if ((l_639 |= (g_157[1] <= (*l_648))))
        {
            char * const l_650 = (void*)0;
            int l_651 = 0x16EAC639L;
            int l_652 = 0L;
            if ((((*g_277) = l_649) == l_650))
            {
                unsigned short l_655[3][7][1] = {{{0x56E3L},{65527UL},{65527UL},{0x56E3L},{65527UL},{65527UL},{0x56E3L}},{{65527UL},{65527UL},{0x56E3L},{65527UL},{65527UL},{0x56E3L},{65527UL}},{{65527UL},{0x56E3L},{65527UL},{65527UL},{0x56E3L},{65527UL},{65527UL}}};
                int l_661 = (-1L);
                int i, j, k;
                l_652 ^= l_651;
                (*l_648) ^= (g_309 ^ (-5L));
                if (l_652)
                {
                    (*l_648) = p_25;
                }
                else
                {
                    unsigned short l_656[10];
                    int l_657 = 0xA648F9ABL;
                    const char *l_660 = (void*)0;
                    const char **l_659 = &l_660;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_656[i] = 0x9577L;
                    l_661 &= ((safe_add_func_int32_t_s_s((l_655[0][4][0] & p_25), 0x495D15E7L)) | (g_57[1][6] != g_121));
                }
            }
            else
            {
                unsigned l_686 = 0UL;
                const unsigned short l_687 = 0xAFEDL;
                int l_693 = 0xCCEBF11DL;
                int *l_696 = &g_57[1][6];
                for (g_59 = 21; (g_59 <= 7); g_59 = safe_sub_func_int8_t_s_s(g_59, 8))
                {
                    int *l_670[10] = {&l_638,&l_638,&l_638,&l_638,&l_638,&l_638,&l_638,&l_638,&l_638,&l_638};
                    int i;
                    if (((p_25 | (*l_648)) > ((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((*l_643) = (*l_648)), (p_25 > (l_638 |= (l_639 = (g_477[3][0][3] | (g_214 >= (-1L)))))))), l_651)), (*g_70))) && p_25)))
                    {
                        short l_677 = 0x04E7L;
                        int ****l_680 = &g_107;
                        int l_688 = 8L;
                        l_638 = (safe_add_func_int32_t_s_s(((*l_648) = 0x30216C79L), (l_651 = (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_651, l_677)), ((g_261 == 0x46813987L) & (safe_sub_func_int32_t_s_s(l_651, (l_652 = (l_641[3] = (((*l_680) = (void*)0) == (void*)0)))))))))));
                        l_688 = (((safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((l_686 ^= ((*l_648) |= ((*l_649) ^= (((l_685 != g_8) == p_25) & 0x5A95L)))) || (!l_687)), l_687)), 1UL)) == (~(g_67[4][5] >= (((void*)0 == p_24) != p_25)))) <= 247UL);
                        l_693 &= (((safe_add_func_int8_t_s_s(((((((void*)0 != &p_24) ^ l_652) >= ((~p_25) && 0UL)) > (*g_70)) || p_25), (safe_mod_func_uint32_t_u_u(((*l_648) ^= 0xF8B79904L), 4294967295UL)))) != p_25) <= 0x96L);
                        if (l_687)
                            break;
                    }
                    else
                    {
                        l_670[1] = &l_693;
                        return l_658;
                    }
                }
                for (g_155 = 0; (g_155 >= 10); g_155 = safe_add_func_int8_t_s_s(g_155, 1))
                {
                    int **l_697[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    unsigned char **l_700 = &l_643;
                    unsigned char ***l_701 = &l_700;
                    int i;
                    (*l_648) |= 0x7D424B36L;
                    l_696 = l_696;
                    if ((*l_648))
                    {
                        int *l_699[7] = {&g_71,&g_71,&g_71,&g_71,&g_71,&g_71,&g_71};
                        int i;
                        (*l_648) &= l_698;
                        l_699[2] = &g_57[0][4];
                        (*l_696) = ((+p_25) && (p_25 == p_25));
                        if ((*l_648))
                            continue;
                    }
                    else
                    {
                        (*l_648) &= ((*l_696) = ((void*)0 == &g_606));
                    }
                    (*l_701) = l_700;
                }
            }
            l_639 |= ((*l_648) |= p_25);
        }
        else
        {
            unsigned l_707 = 0x80AF894DL;
            int l_708 = 0x3BBBA7ACL;
            unsigned short l_709 = 0xD2CEL;
            for (g_132 = 0; (g_132 <= 4); g_132 += 1)
            {
                unsigned short l_706[7][2][2] = {{{0x8B73L,65528UL},{65528UL,0x8B73L}},{{65528UL,65528UL},{0x8B73L,65528UL}},{{65528UL,0x8B73L},{65528UL,65528UL}},{{0x8B73L,65528UL},{65528UL,0x8B73L}},{{65528UL,65528UL},{0x8B73L,65528UL}},{{65528UL,0x8B73L},{65528UL,65528UL}},{{0x8B73L,65528UL},{65528UL,0x8B73L}}};
                int i, j, k;
                l_708 ^= (l_707 |= (safe_sub_func_int32_t_s_s(p_25, (0x32DCL || (~(0x6AL | (safe_sub_func_int8_t_s_s((*l_648), (l_706[3][0][1] | p_25)))))))));
                (*l_648) |= p_25;
                (*l_648) = (l_707 & ((0x48D94AFEL <= ((l_709 = (-4L)) ^ p_25)) || (p_25 && l_710[0][5][1])));
                for (g_155 = 1; (g_155 <= 4); g_155 += 1)
                {
                    int i, j;
                    (*l_648) = g_67[g_132][(g_155 + 3)];
                }
            }
            return l_658;
        }
    }
    else
    {
        unsigned short l_713 = 0x2697L;
        unsigned char l_715 = 1UL;
        const char *l_719[2][9][3] = {{{&g_157[4],&g_67[4][5],(void*)0},{&g_67[3][3],(void*)0,(void*)0},{&g_157[2],&g_157[4],(void*)0},{&g_157[2],&g_67[0][6],&g_477[3][1][0]},{&g_157[4],&g_477[3][0][3],(void*)0},{&g_477[3][0][3],&g_67[3][3],(void*)0},{&g_157[2],&g_157[2],&g_477[3][1][0]},{&g_477[4][6][5],&g_157[2],(void*)0},{(void*)0,&g_477[4][6][5],(void*)0}},{{&g_67[0][6],&g_157[2],&g_477[3][1][0]},{&g_67[3][3],(void*)0,(void*)0},{&g_157[2],&g_157[4],(void*)0},{&g_157[2],&g_67[0][6],&g_477[3][1][0]},{&g_157[4],&g_477[3][0][3],(void*)0},{&g_477[3][0][3],&g_67[3][3],(void*)0},{&g_157[2],&g_157[2],&g_477[3][1][0]},{&g_477[4][6][5],&g_157[2],(void*)0},{(void*)0,&g_477[4][6][5],(void*)0}}};
        int ** const *l_721 = &g_68;
        int ** const **l_720 = &l_721;
        int **l_725 = &g_96;
        int i, j, k;
        for (g_155 = 13; (g_155 >= (-4)); g_155 = safe_sub_func_int8_t_s_s(g_155, 2))
        {
            int l_714[10][6] = {{0x4B870C29L,0x07D3FC2DL,0L,0x07D3FC2DL,0x4B870C29L,3L},{0x4B870C29L,0xFB3CDC5CL,0x07D3FC2DL,0xE022A351L,0x5C1EED36L,0x5C1EED36L},{0xFB3CDC5CL,0x90FC60A3L,0x90FC60A3L,0xFB3CDC5CL,0L,0x5C1EED36L},{0L,0x5C1EED36L,0x07D3FC2DL,3L,0xE022A351L,3L},{0L,(-5L),0L,9L,0xE022A351L,0x4B870C29L},{0x07D3FC2DL,0x5C1EED36L,0L,0L,0L,0L},{0x90FC60A3L,0x90FC60A3L,0xFB3CDC5CL,0L,0x5C1EED36L,9L},{0x07D3FC2DL,0xFB3CDC5CL,3L,0xE022A351L,3L,0x07D3FC2DL},{0x90FC60A3L,0x5C1EED36L,3L,9L,(-5L),0xE022A351L},{0xFB3CDC5CL,9L,0x07D3FC2DL,0x07D3FC2DL,9L,0xFB3CDC5CL}};
            int i, j;
            (*l_648) &= l_713;
            (*l_648) = ((g_467 || ((+(*l_648)) < (g_309 < (l_714[3][3] = (-6L))))) < (~l_715));
        }
        for (g_215 = 0; (g_215 > (-12)); g_215 = safe_sub_func_uint32_t_u_u(g_215, 3))
        {
            int ** const ***l_722 = &l_720;
            for (g_309 = 0; (g_309 <= 2); g_309 += 1)
            {
                int **l_718 = &g_96;
                int i;
                (*l_648) = 0x61FFBCB5L;
                (*l_718) = (l_648 = l_637[g_309]);
            }
            (*l_648) = ((p_25 >= g_215) || (p_25 > (safe_rshift_func_uint16_t_u_u(0x9A47L, 4))));
        }
        (*l_725) = &l_641[3];
    }
    for (l_640 = 0; (l_640 > 24); l_640++)
    {
        unsigned l_728[6];
        short *l_731[9] = {&g_467,&g_467,&g_467,&g_467,&g_467,&g_467,&g_467,&g_467,&g_467};
        int *l_732 = (void*)0;
        int *l_733 = (void*)0;
        int *l_734 = (void*)0;
        char **l_735[3][5][3] = {{{(void*)0,&g_70,(void*)0},{&g_70,(void*)0,&g_70},{&g_70,&g_70,(void*)0},{&g_70,&g_70,&g_70},{(void*)0,&g_70,(void*)0}},{{&g_70,(void*)0,(void*)0},{&g_70,&g_70,(void*)0},{&g_70,&g_70,(void*)0},{(void*)0,&g_70,(void*)0},{&g_70,(void*)0,&g_70}},{{&g_70,&g_70,(void*)0},{&g_70,&g_70,&g_70},{(void*)0,&g_70,(void*)0},{&g_70,(void*)0,(void*)0},{&g_70,&g_70,(void*)0}}};
        int **l_736 = &l_648;
        char l_741 = 1L;
        unsigned char l_744[8] = {246UL,246UL,246UL,246UL,246UL,246UL,246UL,246UL};
        int l_745 = 0xC5267EB9L;
        short ** const *l_751 = &g_605;
        unsigned ** const l_760[7][5][5] = {{{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]}},{{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]}},{{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]}},{{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]}},{{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]}},{{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]}},{{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]},{&l_637[0],&l_637[0],&l_637[0],&l_637[0],&l_637[0]},{&l_637[2],&l_637[2],&l_637[2],&l_637[2],&l_637[2]}}};
        unsigned char l_775 = 0x2DL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_728[i] = 8UL;
        l_641[0] = (l_728[0] > ((g_157[1] | ((safe_rshift_func_int16_t_s_s((p_25 ^= 5L), 14)) > g_215)) || g_157[2]));
        (*l_736) = &l_641[0];
        for (g_59 = 0; (g_59 <= 4); g_59 += 1)
        {
            int l_743 = 0x82B87A2EL;
            unsigned char *l_766 = &g_132;
            unsigned char **l_765 = &l_766;
            unsigned char ***l_764 = &l_765;
            int *****l_772 = (void*)0;
            const int l_776 = (-1L);
            unsigned short l_777 = 65532UL;
            int i, j;
            (*l_648) = (safe_add_func_int8_t_s_s(g_67[g_59][(g_59 + 3)], 7L));
        }
        (*l_648) = p_25;
    }
    return l_658;
}







static char * func_26(const unsigned p_27, short p_28, unsigned p_29, char ** p_30, char ** p_31)
{
    char **l_500 = &g_70;
    char ***l_501[6][7][6] = {{{&g_277,&g_277,&g_277,(void*)0,&g_277,&g_277},{&l_500,(void*)0,&l_500,(void*)0,&g_277,(void*)0},{(void*)0,&l_500,&l_500,&g_277,&l_500,&l_500},{&g_277,&l_500,&l_500,&g_277,&l_500,&g_277},{&g_277,(void*)0,(void*)0,&g_277,&g_277,&g_277},{&l_500,&l_500,&l_500,&l_500,&l_500,&g_277},{&l_500,&g_277,(void*)0,&g_277,&g_277,(void*)0}},{{&l_500,(void*)0,&g_277,&l_500,(void*)0,&l_500},{&l_500,&l_500,&g_277,&g_277,&l_500,&g_277},{&g_277,&l_500,&g_277,&g_277,&l_500,&g_277},{(void*)0,&g_277,&l_500,&l_500,&g_277,&g_277},{(void*)0,&l_500,&g_277,(void*)0,&g_277,&g_277},{(void*)0,&l_500,(void*)0,&l_500,(void*)0,(void*)0},{(void*)0,&g_277,&l_500,&g_277,&l_500,&g_277}},{{&g_277,&l_500,&l_500,&g_277,(void*)0,&l_500},{&l_500,&g_277,&l_500,&l_500,&l_500,&l_500},{&l_500,(void*)0,&l_500,&g_277,&l_500,&g_277},{&l_500,&g_277,&l_500,&l_500,&l_500,&l_500},{&l_500,(void*)0,&l_500,(void*)0,&g_277,&g_277},{&g_277,&l_500,&g_277,&l_500,(void*)0,&l_500},{(void*)0,&g_277,(void*)0,&g_277,&l_500,(void*)0}},{{&l_500,(void*)0,(void*)0,&l_500,&g_277,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_500},{&g_277,&l_500,(void*)0,&g_277,&g_277,&l_500},{&l_500,&l_500,&g_277,&l_500,(void*)0,&l_500},{&g_277,&l_500,(void*)0,&g_277,&l_500,&l_500},{(void*)0,&g_277,(void*)0,&l_500,&l_500,(void*)0},{&l_500,&l_500,&l_500,&l_500,(void*)0,&g_277}},{{&l_500,&g_277,&l_500,(void*)0,&l_500,&l_500},{&l_500,&l_500,&g_277,&g_277,(void*)0,(void*)0},{(void*)0,&l_500,&l_500,&l_500,&g_277,&g_277},{&l_500,&g_277,(void*)0,&l_500,(void*)0,&g_277},{(void*)0,&l_500,&l_500,&l_500,&l_500,&l_500},{&l_500,&g_277,(void*)0,&l_500,&g_277,&g_277},{&g_277,(void*)0,&l_500,&g_277,&g_277,&g_277}},{{&l_500,&g_277,&g_277,&l_500,(void*)0,&g_277},{(void*)0,&l_500,&l_500,&g_277,(void*)0,&l_500},{(void*)0,&g_277,&l_500,(void*)0,&l_500,(void*)0},{&g_277,&g_277,&l_500,&g_277,&g_277,&g_277},{&g_277,&l_500,(void*)0,&g_277,(void*)0,(void*)0},{&l_500,(void*)0,&l_500,&l_500,&g_277,(void*)0},{&l_500,&l_500,&g_277,&g_277,(void*)0,&l_500}}};
    int **l_502 = (void*)0;
    int **l_503 = &g_96;
    int *l_506 = &g_57[1][6];
    int *l_507 = &g_71;
    unsigned *l_508 = &g_261;
    unsigned *l_509 = &g_112;
    unsigned short *l_514 = &g_121;
    unsigned l_517 = 0UL;
    const unsigned short l_585 = 0xA994L;
    const short **l_589 = (void*)0;
    unsigned short l_601 = 65533UL;
    int i, j, k;
    (*l_503) = func_60((g_277 = (p_30 = l_500)), p_31, l_502, &g_70);
    (*l_507) ^= ((*l_506) = (&l_501[4][4][2] == g_504));
    if ((p_28 > (~((*l_509) = ((*l_508) = (*l_507))))))
    {
        char l_515 = 0x49L;
        const int *l_525 = &g_44;
        int l_529 = 0x351E925DL;
        for (g_214 = 0; (g_214 <= 1); g_214 += 1)
        {
            unsigned l_516 = 0x4D9841A6L;
            unsigned short *l_518 = (void*)0;
            unsigned short *l_519 = &g_520;
            short *l_521 = &g_467;
            int **l_523[2];
            char *l_524 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_523[i] = (void*)0;
            if ((p_27 <= (((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((l_514 != (void*)0) & ((*l_514) = l_515)), l_516)) != g_219), ((*l_519) = l_517))) < l_516) & ((*l_521) = p_27))))
            {
                unsigned short l_522 = 0xCAA8L;
                l_522 = ((void*)0 == &g_467);
            }
            else
            {
                (*l_503) = func_60(p_31, p_30, l_523[0], p_30);
                (*l_507) = l_515;
            }
            for (g_121 = 0; g_121 < 4; g_121 += 1)
            {
                for (g_467 = 0; g_467 < 7; g_467 += 1)
                {
                    for (l_515 = 0; l_515 < 8; l_515 += 1)
                    {
                        g_505[g_121][g_467][l_515] = &l_500;
                    }
                }
            }
            return l_524;
        }
        g_528 = (g_526[0][0] = l_525);
        l_529 &= (0xDFL < p_28);
    }
    else
    {
        char **l_532 = &g_70;
        int l_537 = 0xF0EFAF62L;
        short *l_538 = &g_309;
        int **l_570 = &g_96;
        int l_571[3];
        unsigned short *l_579 = (void*)0;
        const short *l_592 = (void*)0;
        const short **l_591 = &l_592;
        int *l_596 = &g_44;
        unsigned short l_609[4][7] = {{8UL,0x02EFL,65527UL,65527UL,0x02EFL,8UL,0xE4C7L},{2UL,65527UL,0xB25BL,0xE4C7L,0xC6A8L,0xC6A8L,0xE4C7L},{1UL,0x5749L,1UL,2UL,0xE4C7L,2UL,8UL},{0xB25BL,65527UL,2UL,2UL,2UL,65527UL,0xB25BL}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_571[i] = (-1L);
        if (((safe_mod_func_int32_t_s_s((&g_57[1][6] != (void*)0), func_51(l_532))) == ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(0L, ((*l_538) |= l_537))), p_29)) | (((safe_sub_func_uint16_t_u_u(((l_537 == (p_28 | l_537)) == p_27), 0x14CCL)) <= p_28) | g_417))))
        {
            return (*p_30);
        }
        else
        {
            int *l_548[3][2][9] = {{{&g_59,(void*)0,&g_71,&g_57[1][6],&g_44,&g_57[0][0],&l_537,&g_57[0][0],&g_44},{&g_59,&g_57[1][6],&g_57[1][6],&g_59,&l_537,&l_537,&l_537,&g_71,&g_57[1][6]}},{{&g_59,&g_44,&l_537,&g_59,&g_59,&l_537,&g_44,&g_59,(void*)0},{&l_537,&g_57[1][6],&g_57[1][6],&g_59,&l_537,&g_71,&g_71,&l_537,&g_59}},{{&g_57[1][6],(void*)0,&g_57[1][6],&l_537,(void*)0,(void*)0,(void*)0,&g_57[1][6],&g_57[1][6]},{&g_44,&g_59,&l_537,&g_57[1][6],&l_537,&g_59,&g_44,&l_537,&g_71}}};
            int i, j, k;
            for (g_215 = 27; (g_215 >= 10); g_215 = safe_sub_func_uint16_t_u_u(g_215, 4))
            {
                if ((*g_528))
                    break;
            }
            for (l_517 = 3; (l_517 >= 6); l_517 = safe_add_func_uint16_t_u_u(l_517, 1))
            {
                for (g_59 = 0; (g_59 > (-8)); g_59 = safe_sub_func_int16_t_s_s(g_59, 1))
                {
                    int *l_547 = &g_57[1][6];
                    l_548[0][0][2] = l_547;
                }
            }
            for (l_517 = 11; (l_517 != 52); l_517++)
            {
                int *l_551 = &g_71;
                l_551 = l_551;
            }
        }
        for (g_309 = 0; (g_309 >= 7); g_309 = safe_add_func_uint16_t_u_u(g_309, 3))
        {
            int l_554 = 0xE4AD6FE0L;
            char **l_569[8][10] = {{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70}};
            int **l_575 = (void*)0;
            int i, j;
            (*l_507) = l_554;
            for (g_251 = 4; (g_251 >= 0); g_251 -= 1)
            {
                short l_559 = 1L;
                const int *l_574[5] = {&l_571[2],&l_571[2],&l_571[2],&l_571[2],&l_571[2]};
                int i;
                (*l_506) &= ((void*)0 != &g_107);
                for (l_537 = 0; (l_537 <= 4); l_537 += 1)
                {
                    unsigned char *l_566 = &g_132;
                    const int *l_573 = &g_527;
                    int i, j;
                    for (g_520 = 1; (g_520 <= 4); g_520 += 1)
                    {
                        int l_555 = 0x5862950EL;
                        short *l_558 = &g_467;
                        int i, j;
                        (*l_507) = (func_51(p_30) & l_555);
                        (*l_507) = (safe_rshift_func_uint16_t_u_s(l_554, ((*l_558) ^= g_157[2])));
                        l_559 = (*g_528);
                    }
                    if (((safe_add_func_uint8_t_u_u(g_67[g_251][(g_251 + 1)], g_67[g_251][(g_251 + 1)])) & (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((*l_566) = (+g_67[g_251][(l_537 + 1)])), (**p_30))) != (~0x97C0L)), (safe_rshift_func_int16_t_s_s(g_67[g_251][(g_251 + 1)], p_28))))))
                    {
                        char * const **l_572 = &g_69;
                        (*l_570) = func_60(l_569[1][3], (p_31 = l_532), l_570, l_569[4][3]);
                        l_571[0] |= (0xA366L > g_59);
                        if ((*g_528))
                            break;
                        (*l_570) = func_60(p_30, p_31, &l_507, ((*l_572) = p_30));
                    }
                    else
                    {
                        l_574[2] = l_573;
                    }
                    (*l_507) ^= 0xF770B03DL;
                }
            }
            if (p_29)
                break;
            (*l_503) = func_60(l_532, l_532, l_575, p_30);
        }
        if ((((&g_309 != &g_467) > func_51(l_532)) > (-1L)))
        {
            unsigned char * const l_578 = (void*)0;
            unsigned short **l_580 = &l_514;
            int l_583 = 6L;
            const char *l_584 = &g_67[0][6];
            unsigned char *l_586 = &g_132;
            int *l_587 = (void*)0;
            int *l_588 = &l_571[0];
            const short ***l_590 = (void*)0;
            (*l_588) |= (p_27 & ((((safe_add_func_int32_t_s_s(((((void*)0 == l_578) < (l_579 != ((*l_580) = l_538))) || (((safe_rshift_func_uint8_t_u_u(((*l_586) = (((*l_538) = func_46(func_32(l_583, l_584), l_532)) > l_585)), p_28)) | p_29) != l_583)), p_29)) != 0xFC7337A0L) > l_583) || g_467));
            l_591 = l_589;
            for (g_121 = 15; (g_121 == 33); ++g_121)
            {
                const int **l_595[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_595[i] = &g_526[0][1];
                g_526[0][0] = (g_528 = (void*)0);
            }
            (*l_503) = l_596;
        }
        else
        {
            unsigned l_597 = 0x9EE0610CL;
            char **l_598 = (void*)0;
            const int l_600 = 0L;
            int *l_604 = &g_57[0][2];
            unsigned char l_608[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_608[i][j] = 0xDEL;
            }
            if (((*l_596) || ((((func_35(l_597, (g_599 = l_598), (func_46(((*l_538) = l_597), p_30) ^ (p_28 & ((*l_596) || p_28)))) >= l_600) || l_601) != p_27) & 0x28BDL)))
            {
                int *l_607 = (void*)0;
                for (g_121 = 0; (g_121 >= 6); g_121++)
                {
                    l_604 = ((*l_570) = (void*)0);
                    g_605 = (void*)0;
                    (*l_503) = l_607;
                    if (l_608[0][0])
                        continue;
                }
                (*l_503) = l_507;
                return (*l_500);
            }
            else
            {
                short l_613 = 1L;
                char * const *l_616[7] = {&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70};
                char *l_617[5][7] = {{&g_67[4][5],&g_67[4][5],&g_157[2],&g_155,&g_157[2],&g_157[2],&g_155},{&g_155,&g_157[2],&g_155,&g_67[4][5],&g_67[1][0],&g_157[2],&g_67[4][5]},{&g_157[2],&g_157[2],&g_155,&g_157[2],&g_157[2],&g_157[2],&g_155},{&g_67[1][0],&g_67[1][0],&g_157[2],&g_67[4][5],&g_157[1],&g_157[2],&g_157[2]},{&g_67[4][5],&g_67[1][0],&g_157[2],&g_157[2],&g_157[2],&g_157[2],&g_67[1][0]}};
                int i, j;
                (*l_596) = (*g_528);
                if ((*l_596))
                {
                    char l_610 = 1L;
                    (*l_507) ^= (8L < (l_610 = l_609[1][1]));
                    (*l_604) = ((-5L) & (safe_rshift_func_int8_t_s_s(0xC0L, l_613)));
                    for (l_537 = (-27); (l_537 <= 6); l_537 = safe_add_func_uint32_t_u_u(l_537, 4))
                    {
                        (*l_570) = func_60(p_30, l_598, (g_68 = &l_604), l_616[0]);
                        return l_617[0][3];
                    }
                }
                else
                {
                    (*l_507) = 0L;
                }
            }
            (*l_604) = func_46((safe_lshift_func_uint16_t_u_s(((*l_514) = 0x3E3CL), 14)), l_598);
            (*l_507) = (safe_lshift_func_int8_t_s_u((-1L), 1));
            (*l_503) = &l_571[1];
        }
    }
    (*l_503) = l_509;
    return (*p_31);
}







static char func_32(int p_33, const char * p_34)
{
    char **l_497 = &g_70;
    char ***l_498 = &g_277;
    int **l_499 = &g_96;
    (*l_499) = func_60(l_497, ((*l_498) = l_497), l_499, &g_70);
    return (**g_277);
}







static unsigned func_35(unsigned p_36, char ** p_37, unsigned p_38)
{
    int * const l_41 = (void*)0;
    int **l_42 = (void*)0;
    int *l_43[3][8][2] = {{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}},{{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44},{&g_44,&g_44}}};
    int **l_45 = &l_43[0][0][1];
    int l_49 = (-1L);
    unsigned short *l_218 = &g_219;
    unsigned short **l_220 = &l_218;
    int l_253[6] = {0x3FDE38A6L,0x3FDE38A6L,0x3FDE38A6L,0x3FDE38A6L,0x3FDE38A6L,0x3FDE38A6L};
    char l_262 = 0x7CL;
    int *l_313 = (void*)0;
    const int *l_324 = (void*)0;
    unsigned l_332 = 4294967291UL;
    unsigned l_348 = 0xB2F53372L;
    char * const *l_381 = &g_70;
    unsigned **l_440[4][3];
    char **l_453 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_440[i][j] = (void*)0;
    }
    l_43[1][6][0] = l_41;
    (*l_45) = &g_44;
    if (((g_44 != (p_36 == (func_46(l_49, p_37) ^ 0xC2D5L))) < (!(p_38 < (((*l_220) = l_218) == &g_219)))))
    {
        int l_221[3][2][5] = {{{(-10L),0x53E17095L,0x76E15896L,0xB1DBA8B5L,0x53E17095L},{0L,0x76E15896L,0x76E15896L,0L,0xB1DBA8B5L}},{{0L,0L,1L,0x53E17095L,0x53E17095L},{(-10L),0L,(-10L),0xB1DBA8B5L,0L}},{{0x53E17095L,0x76E15896L,0xB1DBA8B5L,0x53E17095L,0xB1DBA8B5L},{0x53E17095L,0x53E17095L,1L,0L,0L}}};
        int i, j, k;
        l_221[1][1][3] = 0x921E530DL;
    }
    else
    {
        unsigned l_228 = 0x1360093FL;
        int l_237 = 0x7F5D7FD6L;
        int *l_265 = &g_71;
        int *l_272 = &g_44;
        unsigned short *l_297 = &g_219;
        unsigned short l_361 = 0UL;
        char ***l_363[6][1] = {{&g_277},{&g_277},{&g_277},{&g_277},{&g_277},{&g_277}};
        const char *l_476[3][8] = {{(void*)0,&g_477[0][6][4],&g_477[3][0][3],&g_477[3][0][3],&g_477[0][6][4],(void*)0,&g_477[3][0][3],(void*)0},{&g_477[0][6][4],(void*)0,&g_477[3][0][3],(void*)0,&g_477[0][6][4],&g_477[3][0][3],&g_477[3][0][3],&g_477[0][6][4]},{(void*)0,&g_477[3][0][3],&g_477[3][0][3],(void*)0,(void*)0,&g_477[0][6][4],(void*)0,(void*)0}};
        const char **l_475 = &l_476[2][6];
        int i, j;
        for (g_214 = 0; (g_214 != 29); g_214 = safe_add_func_uint8_t_u_u(g_214, 7))
        {
            unsigned char l_226 = 0UL;
            int l_227 = 0L;
            int l_347 = 0x66006FFAL;
        }
        if (((l_363[1][0] = l_363[2][0]) == (void*)0))
        {
            int l_370 = 0x583CA0F9L;
            int l_371 = 4L;
            l_371 |= ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_36 < (safe_rshift_func_int16_t_s_u(func_46(p_36, &g_70), 13))), 12)), (*l_272))) > l_370);
            (*l_45) = l_272;
            (*l_45) = (*l_45);
            (*l_45) = &l_370;
        }
        else
        {
            (*l_45) = (*l_45);
        }
        for (l_361 = 0; (l_361 != 8); l_361++)
        {
            int *l_390 = &g_57[1][6];
            char l_396 = 0xA4L;
            char **l_401 = (void*)0;
            int *l_429[10][8] = {{&g_57[1][6],&g_57[1][6],(void*)0,(void*)0,(void*)0,&g_57[1][6],&g_57[1][6],(void*)0},{&g_59,(void*)0,(void*)0,&g_59,&l_253[3],&g_59,(void*)0,(void*)0},{(void*)0,&l_253[3],(void*)0,(void*)0,&l_253[3],(void*)0,&l_253[3],(void*)0},{&g_59,&l_253[3],&g_59,(void*)0,(void*)0,&g_59,(void*)0,(void*)0},{&l_253[3],&g_57[1][6],&g_59,&g_57[1][6],&l_253[3],&l_253[3],&g_57[1][6],&g_59},{&l_253[3],&l_253[3],&g_57[1][6],&g_59,&g_57[1][6],&l_253[3],&l_253[3],&g_57[1][6]},{(void*)0,&g_57[1][6],&g_57[1][6],(void*)0,(void*)0,(void*)0,&g_57[1][6],&g_57[1][6]},{&g_57[1][6],(void*)0,&g_59,&g_59,(void*)0,&g_57[1][6],(void*)0,&g_59},{(void*)0,(void*)0,(void*)0,&g_57[1][6],&g_57[1][6],(void*)0,(void*)0,(void*)0},{&l_253[3],&g_57[1][6],&g_59,&g_57[1][6],&l_253[3],&l_253[3],&g_57[1][6],&g_59}};
            int l_443 = 0x6BA44F3FL;
            int i, j;
            for (g_214 = (-19); (g_214 >= 11); g_214 = safe_add_func_uint32_t_u_u(g_214, 5))
            {
                short l_377 = 0L;
                int **l_388 = &l_265;
                char * const *l_389[4] = {&g_70,&g_70,&g_70,&g_70};
                char l_399 = 0L;
                char *l_410[5] = {&g_67[3][2],&g_67[3][2],&g_67[3][2],&g_67[3][2],&g_67[3][2]};
                int i;
            }
            for (l_228 = 0; l_228 < 5; l_228 += 1)
            {
                for (g_261 = 0; g_261 < 8; g_261 += 1)
                {
                    g_67[l_228][g_261] = 0xB2L;
                }
            }
            (*l_390) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((~((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(((-1L) == (g_67[1][6] ^ ((*l_265) >= p_36))), g_155)) <= ((safe_rshift_func_int16_t_s_s(g_121, g_57[1][6])) < g_157[2])), ((g_467 = (safe_rshift_func_uint16_t_u_u(((void*)0 == &l_42), 1))) < g_214))) < p_38)) | g_261) != (-8L)), p_38)), g_67[3][7]));
            for (l_443 = 0; (l_443 == (-14)); --l_443)
            {
                const char *l_473 = &g_157[0];
                const char **l_472 = &l_473;
                int l_479[9][3] = {{(-6L),0L,8L},{0x3A670A7CL,0xA3FAF08DL,0x3A670A7CL},{4L,6L,0x1FFB2436L},{1L,6L,0xC2D44E66L},{0L,0xA3FAF08DL,(-4L)},{0x55D97A3BL,0L,0L},{0L,0xC615A6BBL,(-6L)},{1L,8L,(-6L)},{4L,(-6L),0L}};
                int i, j;
                for (g_309 = 0; (g_309 != 22); ++g_309)
                {
                    const char ***l_474[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    const int l_478 = 1L;
                    int i;
                    l_479[2][1] |= (((l_475 = l_472) == (void*)0) || l_478);
                    for (g_155 = (-25); (g_155 != 7); g_155 = safe_add_func_int8_t_s_s(g_155, 1))
                    {
                        int l_486 = 0x9D28AE8FL;
                        (*l_265) = (safe_rshift_func_int16_t_s_u(g_214, 7));
                        l_479[0][2] |= ((*l_272) = (g_71 &= (g_57[1][6] < p_38)));
                        (*l_272) |= (safe_sub_func_uint32_t_u_u(p_38, (l_486 != g_57[1][1])));
                    }
                }
                g_96 = (void*)0;
                for (l_332 = 0; (l_332 >= 1); l_332 = safe_add_func_int8_t_s_s(l_332, 4))
                {
                    return g_8;
                }
            }
        }
    }
    return p_36;
}







static unsigned short func_46(short p_47, char ** p_48)
{
    int l_50 = (-1L);
    char *l_54 = (void*)0;
    char **l_53 = &l_54;
    unsigned short *l_213[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_216 = 0x7C6AE3E3L;
    int **l_217 = &g_96;
    int i;
    l_216 |= (((l_50 < func_51(l_53)) > (g_215 = ((g_214 |= l_50) <= 5UL))) == p_47);
    l_50 &= p_47;
    (*l_217) = &l_216;
    return p_47;
}







static unsigned short func_51(char ** p_52)
{
    unsigned char l_55 = 0x74L;
    int *l_56 = &g_57[1][6];
    int *l_58 = &g_59;
    char *l_66[4] = {&g_67[4][5],&g_67[4][5],&g_67[4][5],&g_67[4][5]};
    char **l_65 = &l_66[0];
    int i;
    (*l_58) = ((*l_56) = l_55);
    l_56 = func_60(l_65, &l_66[3], g_68, g_69);
    return (*l_58);
}







static int * func_60(char ** p_61, char ** p_62, int ** p_63, char * const * p_64)
{
    int *l_79 = &g_44;
    int ***l_87 = &g_68;
    char *l_110 = &g_67[4][7];
    unsigned short *l_120 = &g_121;
    unsigned *l_123 = &g_112;
    unsigned **l_122 = &l_123;
    int l_161 = 1L;
    int l_179 = (-9L);
    unsigned char l_207 = 0UL;
    int *l_209[7][8] = {{&l_179,(void*)0,&g_44,&g_59,(void*)0,&g_57[0][3],&l_179,&l_161},{&g_44,(void*)0,&g_59,(void*)0,&g_59,(void*)0,&g_44,&g_57[0][3]},{(void*)0,(void*)0,&g_59,&g_44,&g_57[0][5],&g_59,&g_57[1][4],(void*)0},{&g_57[0][3],(void*)0,&l_179,&g_59,&g_57[0][5],&g_44,(void*)0,(void*)0},{(void*)0,&l_179,&l_179,(void*)0,&g_59,&g_59,(void*)0,&l_179},{&g_44,&g_44,(void*)0,&g_57[1][4],(void*)0,&g_59,&l_161,(void*)0},{&l_179,&g_57[1][4],&l_161,&g_44,(void*)0,&l_179,(void*)0,(void*)0}};
    int *l_210[5][8] = {{&g_57[1][6],&g_57[0][2],&g_57[0][2],&g_57[1][6],&g_59,(void*)0,&g_57[1][6],(void*)0},{&g_57[1][6],&g_59,&l_161,&g_59,&g_57[1][6],&l_161,(void*)0,(void*)0},{(void*)0,&g_59,&g_59,&g_59,&g_59,(void*)0,&g_57[0][2],&g_59},{(void*)0,&g_57[0][2],&g_59,(void*)0,&g_59,&g_57[0][2],(void*)0,(void*)0},{&g_59,&g_59,&g_57[1][6],&g_57[0][2],&g_57[0][2],&g_57[1][6],&g_59,(void*)0}};
    int *l_211 = &l_161;
    int *l_212 = &l_179;
    int i, j;
    for (g_59 = 4; (g_59 >= 0); g_59 -= 1)
    {
        unsigned l_72[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int l_74 = (-1L);
        int *l_77 = (void*)0;
        int *l_78 = &l_74;
        int **l_80 = &l_77;
        int l_89[4] = {0L,0L,0L,0L};
        int l_90[5];
        int i;
        for (i = 0; i < 5; i++)
            l_90[i] = (-1L);
        for (g_71 = 4; (g_71 >= 0); g_71 -= 1)
        {
            int *l_73[5][6] = {{&g_57[1][6],(void*)0,&g_57[1][6],&g_59,&g_71,&g_57[1][6]},{&g_57[1][6],&g_71,&g_59,&g_59,&g_71,&g_57[1][6]},{&g_57[1][6],&g_71,&g_59,&g_57[1][6],(void*)0,&g_57[1][6]},{&g_57[1][6],&g_71,&g_57[1][6],&g_57[1][6],&g_71,&g_57[1][6]},{&g_57[1][6],&g_71,&g_57[1][6],&g_57[1][6],&g_71,&g_57[1][6]}};
            int **l_75[5][6] = {{&l_73[0][5],&l_73[0][5],&l_73[3][4],&l_73[0][5],&l_73[3][4],&l_73[0][5]},{&l_73[3][4],(void*)0,&l_73[0][5],&l_73[0][5],(void*)0,&l_73[3][4]},{&l_73[0][5],&l_73[3][4],&l_73[0][5],&l_73[3][4],&l_73[0][5],&l_73[0][5]},{&l_73[0][5],&l_73[3][4],&l_73[3][4],&l_73[0][5],(void*)0,&l_73[0][5]},{&l_73[0][5],(void*)0,&l_73[0][5],&l_73[3][4],&l_73[3][4],&l_73[0][5]}};
            int *l_76 = &l_74;
            int i, j;
            g_57[0][0] ^= l_72[4];
            l_74 = g_44;
            l_76 = l_73[0][5];
        }
        (*l_78) |= g_67[4][5];
        (*l_80) = l_79;
        for (g_71 = 3; (g_71 >= 1); g_71 -= 1)
        {
            int **l_81 = &l_77;
            int ***l_82 = &l_80;
            (*l_82) = l_81;
            g_57[1][6] = (**l_81);
        }
        for (l_74 = 1; (l_74 <= 4); l_74 += 1)
        {
            int ***l_86[5] = {&l_80,&l_80,&l_80,&l_80,&l_80};
            int ****l_85[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            if ((safe_mod_func_uint8_t_u_u((*l_79), (0xD2B101DDL | ((l_87 = &g_68) == &p_63)))))
            {
                int *l_88 = (void*)0;
                g_57[1][6] = g_59;
                l_88 = (*l_80);
            }
            else
            {
                (*l_80) = (*l_80);
            }
            l_90[2] &= (l_89[3] = (*l_79));
        }
    }
    for (g_59 = (-7); (g_59 != 13); ++g_59)
    {
        int ***l_94 = &g_68;
        int **l_97 = &l_79;
        if ((*l_79))
        {
            int *l_93[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            return l_93[0][3];
        }
        else
        {
            unsigned short l_95 = 65526UL;
            l_95 &= ((void*)0 != l_94);
        }
        (*l_97) = (g_96 = &g_71);
        return &g_57[1][6];
    }
    for (g_71 = (-5); (g_71 <= 23); g_71 = safe_add_func_uint16_t_u_u(g_71, 1))
    {
        int ***l_105 = &g_68;
        int ****l_106[2][5][9] = {{{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87}},{{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87},{&l_105,&l_87,&l_105,&l_105,&l_87,&l_105,&l_105,&l_87,&l_105}}};
        unsigned *l_111 = &g_112;
        int i, j, k;
        for (g_59 = (-9); (g_59 <= 5); g_59++)
        {
            unsigned char l_102 = 255UL;
            g_57[1][6] &= l_102;
        }
        g_113 ^= (((safe_add_func_int32_t_s_s((((!(((g_57[1][4] > ((g_107 = l_105) != &p_63)) <= ((safe_sub_func_int32_t_s_s((((*g_69) == l_110) && (*l_79)), g_59)) | ((*l_111) = 0xBC89C4ABL))) < (*l_79))) < g_44) == 0UL), g_44)) ^ g_71) >= g_67[4][5]);
    }
    if ((((*l_79) != ((*l_120) = (safe_add_func_uint8_t_u_u((*l_79), (safe_sub_func_uint32_t_u_u(g_57[1][3], (((void*)0 != &l_87) & g_57[1][2]))))))) | ((l_79 != ((*l_122) = l_79)) < 0xBF0F89DEL)))
    {
        int l_130 = (-1L);
        unsigned char *l_131 = &g_132;
        int l_137 = 0xF69CA31EL;
        int l_169 = 0xBF0C42BAL;
        const unsigned *l_180[7][9][4] = {{{(void*)0,(void*)0,&g_112,(void*)0},{&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,&g_112,&g_112},{(void*)0,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112},{&g_112,(void*)0,(void*)0,&g_112},{&g_112,&g_112,(void*)0,(void*)0},{&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112}},{{&g_112,&g_112,(void*)0,(void*)0},{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112},{(void*)0,&g_112,&g_112,(void*)0},{&g_112,&g_112,(void*)0,&g_112},{&g_112,(void*)0,&g_112,&g_112},{(void*)0,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112}},{{&g_112,&g_112,(void*)0,(void*)0},{&g_112,(void*)0,(void*)0,&g_112},{&g_112,(void*)0,(void*)0,&g_112},{&g_112,(void*)0,&g_112,&g_112},{(void*)0,&g_112,(void*)0,&g_112},{&g_112,&g_112,&g_112,&g_112},{(void*)0,&g_112,(void*)0,&g_112},{(void*)0,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112},{(void*)0,&g_112,&g_112,&g_112},{&g_112,(void*)0,(void*)0,(void*)0},{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112},{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112}},{{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112},{&g_112,(void*)0,&g_112,&g_112},{(void*)0,&g_112,(void*)0,(void*)0},{&g_112,&g_112,(void*)0,&g_112},{&g_112,(void*)0,&g_112,&g_112},{&g_112,(void*)0,&g_112,&g_112},{&g_112,(void*)0,&g_112,&g_112},{(void*)0,(void*)0,(void*)0,&g_112}},{{(void*)0,&g_112,&g_112,(void*)0},{&g_112,(void*)0,&g_112,&g_112},{&g_112,(void*)0,(void*)0,(void*)0},{&g_112,&g_112,&g_112,(void*)0},{&g_112,&g_112,&g_112,&g_112},{(void*)0,(void*)0,(void*)0,&g_112},{&g_112,&g_112,(void*)0,&g_112},{(void*)0,&g_112,&g_112,(void*)0},{&g_112,&g_112,&g_112,&g_112}},{{&g_112,&g_112,(void*)0,(void*)0},{&g_112,&g_112,&g_112,&g_112},{&g_112,&g_112,&g_112,&g_112},{(void*)0,(void*)0,(void*)0,&g_112},{&g_112,&g_112,&g_112,(void*)0},{&g_112,&g_112,&g_112,(void*)0},{(void*)0,&g_112,&g_112,&g_112},{(void*)0,(void*)0,&g_112,&g_112},{&g_112,&g_112,(void*)0,&g_112}}};
        int l_183 = 1L;
        int *l_206 = &l_130;
        int i, j, k;
        l_130 = (g_113 < (safe_add_func_uint32_t_u_u(((((safe_add_func_uint8_t_u_u(((*l_131) = (safe_lshift_func_uint8_t_u_u((*l_79), l_130))), (safe_lshift_func_uint8_t_u_s((l_137 = (safe_mod_func_int32_t_s_s(l_130, ((65533UL < 9UL) && l_130)))), 7)))) ^ (safe_add_func_int16_t_s_s((((*l_79) | 0xEA80L) ^ l_130), g_67[1][1]))) || g_57[1][6]) == (*l_79)), 0x0ACE2E08L)));
        l_130 = (l_137 ^ (*l_79));
        for (g_113 = 0; (g_113 <= 22); g_113 = safe_add_func_int16_t_s_s(g_113, 1))
        {
            unsigned l_150[1];
            int l_170 = 0x03F5B912L;
            const unsigned **l_181 = (void*)0;
            const unsigned **l_182 = &l_180[6][5][0];
            int i;
            for (i = 0; i < 1; i++)
                l_150[i] = 1UL;
            for (g_121 = 0; (g_121 != 1); g_121++)
            {
                int *l_144[5][10][4] = {{{&l_130,(void*)0,&l_130,&l_137},{&l_130,&l_130,&g_57[1][6],(void*)0},{&g_59,&l_137,&g_57[1][1],(void*)0},{&l_130,&l_130,&l_130,&l_137},{&l_137,(void*)0,&g_59,(void*)0},{&g_71,(void*)0,&g_57[1][1],(void*)0},{&g_57[1][1],(void*)0,&g_59,&l_130},{&g_59,&g_57[1][6],&g_59,(void*)0},{&g_59,&g_57[1][6],&g_59,(void*)0},{&g_57[1][1],(void*)0,&g_57[1][6],&l_137}},{{&g_71,&l_137,&l_130,(void*)0},{&l_130,&l_130,&g_57[1][1],&g_57[1][6]},{&l_130,(void*)0,&g_57[1][6],(void*)0},{(void*)0,(void*)0,&g_44,&g_57[1][6]},{&g_59,&l_130,&l_130,(void*)0},{&g_59,&l_137,&g_59,&l_137},{(void*)0,(void*)0,&g_44,(void*)0},{&g_71,&g_57[1][6],&g_57[1][1],(void*)0},{&l_130,&g_57[1][6],&g_57[1][1],&l_130},{&g_71,(void*)0,&g_44,(void*)0}},{{(void*)0,&g_71,&g_59,&g_57[1][6]},{&g_59,&g_57[1][6],&l_130,(void*)0},{&g_59,&l_137,&g_44,(void*)0},{(void*)0,(void*)0,&g_57[1][6],(void*)0},{&l_130,&l_137,&g_57[1][1],(void*)0},{&l_130,&g_57[1][6],&l_130,&g_57[1][6]},{&g_71,&g_71,&g_57[1][6],(void*)0},{&g_57[1][1],(void*)0,&g_59,&l_130},{&g_59,&g_57[1][6],&g_59,(void*)0},{&g_59,&g_57[1][6],&g_44,&g_57[1][6]}},{{&g_57[1][6],(void*)0,&g_59,&g_71},{&g_57[1][1],&l_130,&g_71,(void*)0},{&g_57[1][1],&l_137,(void*)0,(void*)0},{&l_130,&l_137,&g_59,(void*)0},{&l_130,&l_137,&l_137,(void*)0},{&g_57[1][6],&l_137,&l_130,(void*)0},{&g_44,&l_130,&g_44,&g_71},{&l_130,(void*)0,&g_71,&g_57[1][6]},{&g_57[1][1],&g_57[1][5],(void*)0,(void*)0},{&l_130,(void*)0,(void*)0,&l_137}},{{&g_57[1][1],&l_137,&g_71,(void*)0},{&l_130,&g_57[0][1],&g_44,(void*)0},{&g_44,(void*)0,&l_130,&g_59},{&g_57[1][6],&l_130,&l_137,&g_57[1][6]},{&l_130,&g_59,&g_59,&g_57[1][6]},{&l_130,&l_130,(void*)0,&g_59},{&g_57[1][1],(void*)0,&g_71,(void*)0},{&g_57[1][1],&g_57[0][1],&g_59,(void*)0},{&g_57[1][6],&l_137,&g_44,&l_137},{&g_57[1][6],(void*)0,(void*)0,(void*)0}}};
                int **l_171[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i, j, k;
                l_144[3][6][2] = l_144[3][6][2];
                for (g_59 = 0; (g_59 <= 4); g_59 += 1)
                {
                    int *l_146 = &l_130;
                    int **l_147[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_147[i] = &g_96;
                    for (g_132 = 0; (g_132 <= 4); g_132 += 1)
                    {
                        int **l_145 = &g_96;
                        int i, j;
                        g_57[1][4] ^= 1L;
                        (*l_87) = l_145;
                        l_137 = 0x9AB5F3C9L;
                        l_130 ^= g_67[g_59][(g_59 + 2)];
                    }
                    g_96 = l_146;
                    l_137 &= ((*g_96) |= g_67[g_59][(g_59 + 3)]);
                }
                for (l_130 = (-12); (l_130 != (-8)); l_130 = safe_add_func_int8_t_s_s(l_130, 7))
                {
                    short l_151[5] = {0x29A9L,0x29A9L,0x29A9L,0x29A9L,0x29A9L};
                    int **l_159 = (void*)0;
                    int **l_160 = &g_96;
                    int l_167 = (-1L);
                    int i;
                    if (l_150[0])
                    {
                        g_57[1][6] ^= l_151[3];
                    }
                    else
                    {
                        short *l_152 = (void*)0;
                        short *l_153 = &l_151[1];
                        char *l_154 = &g_155;
                        char *l_156 = &g_157[2];
                        int l_158 = 0x861F81E2L;
                        if (l_130)
                            break;
                        g_57[1][6] = (((**g_69) = ((0xD9C112FEL & l_137) >= (g_67[2][2] & ((*l_153) = ((**p_64) || l_150[0]))))) <= ((*l_156) = ((*l_154) = 0xCCL)));
                        l_79 = &l_137;
                        g_59 ^= l_158;
                    }
                    (*l_160) = &l_137;
                    l_161 = ((**g_69) < l_130);
                    for (l_137 = 6; (l_137 > (-29)); l_137 = safe_sub_func_int8_t_s_s(l_137, 8))
                    {
                        unsigned *l_166 = &g_112;
                        int l_168 = 0x8030A825L;
                        l_167 = (safe_add_func_int32_t_s_s(l_150[0], (((((*l_122) = &g_112) != &l_150[0]) & ((*l_166) = l_137)) != ((void*)0 != &l_166))));
                        l_168 = (+((((*l_122) = &g_112) != (void*)0) < ((+g_57[1][6]) & g_113)));
                        if (l_168)
                            continue;
                        l_170 |= (l_169 |= l_168);
                    }
                }
                l_79 = l_144[3][6][2];
            }
            if (l_170)
            {
                int *l_172[1][10][9] = {{{(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0},{&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59},{(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0},{&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59},{(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0},{&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59},{(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0},{&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59},{(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0,(void*)0,&g_57[1][6],(void*)0},{&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59,&g_59,&g_57[1][6],&g_59}}};
                int i, j, k;
                g_96 = &l_130;
                for (g_71 = 0; (g_71 <= 1); g_71 += 1)
                {
                    int **l_174 = &l_172[0][8][3];
                    int i, j;
                    for (l_137 = 0; (l_137 >= 0); l_137 -= 1)
                    {
                        int **l_173 = &g_96;
                        int i, j;
                    }
                    (*l_174) = &g_57[g_71][(g_71 + 3)];
                }
            }
            else
            {
                int *l_175[4];
                int *l_176 = (void*)0;
                int i;
                for (i = 0; i < 4; i++)
                    l_175[i] = &l_137;
                return l_176;
            }
            (*g_96) = (g_57[1][6] >= (l_179 | (((*l_182) = l_180[6][5][0]) == (*l_122))));
            if (l_183)
            {
                int *l_184 = &g_44;
                return l_184;
            }
            else
            {
                int *l_190 = &l_161;
                int l_205 = (-9L);
                for (g_71 = 1; (g_71 >= 0); g_71 -= 1)
                {
                    const unsigned ***l_185 = &l_182;
                    int i;
                    (*l_185) = l_182;
                }
            }
        }
        l_207 = ((*l_206) = l_183);
    }
    else
    {
        int *l_208 = &g_57[1][6];
        l_208 = l_208;
    }
    return &g_44;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_57[i][j], "g_57[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_67[i][j], "g_67[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_157[i], "g_157[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_477[i][j][k], "g_477[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_999[i], "g_999[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
