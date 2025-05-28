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



static short g_2[7] = {0xB910L,0xB910L,0xB910L,0xB910L,0xB910L,0xB910L,0xB910L};
static int g_4 = 0x1C29000DL;
static short g_57 = 0x9376L;
static unsigned char g_72 = 247UL;
static int g_85 = 0L;
static short g_90 = 0x583EL;
static unsigned char *g_101 = &g_72;
static unsigned char **g_100[7][6][6] = {{{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101},{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,(void*)0,&g_101},{&g_101,&g_101,(void*)0,&g_101,&g_101,&g_101}},{{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,(void*)0,&g_101,&g_101,&g_101},{(void*)0,&g_101,(void*)0,&g_101,&g_101,&g_101}},{{&g_101,&g_101,(void*)0,&g_101,(void*)0,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101}},{{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,(void*)0,&g_101,&g_101,&g_101},{(void*)0,&g_101,(void*)0,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101},{(void*)0,&g_101,&g_101,&g_101,(void*)0,&g_101}},{{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101}},{{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101}}};
static unsigned short g_105 = 0x3CDAL;
static short *g_108 = (void*)0;
static short **g_107 = &g_108;
static unsigned g_119 = 4294967295UL;
static int *g_146 = &g_85;
static unsigned g_147 = 2UL;
static unsigned char g_158 = 0x09L;
static unsigned g_183 = 0xAB72F02FL;
static int g_195 = 0x27D90806L;
static int *g_221[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int **g_220 = &g_221[4];
static unsigned ***g_257 = (void*)0;
static char g_348 = 9L;
static char g_445 = 0x84L;
static unsigned char g_529 = 0xE2L;
static unsigned g_568[3] = {4294967294UL,4294967294UL,4294967294UL};
static unsigned g_576 = 0x900F0AE0L;
static unsigned g_580 = 0x7F9F0E82L;
static int *g_593 = &g_4;
static unsigned *g_617 = (void*)0;
static int g_645[8][7][2] = {{{4L,(-4L)},{0L,0xA1764A3AL},{5L,0x1015D1F0L},{0xC3F32707L,(-7L)},{0x67502073L,0L},{0x1015D1F0L,0L},{0xB16E7476L,(-1L)}},{{1L,0x2AC6FBC5L},{0x1DFB442AL,1L},{0x500FC512L,5L},{0xA3C18AA7L,1L},{0x1DFB442AL,0x5259EDD4L},{1L,(-1L)},{(-1L),0x31114209L}},{{0x1015D1F0L,0x67502073L},{0L,(-7L)},{0x99124AB1L,0L},{5L,(-4L)},{0x31114209L,(-4L)},{5L,0L},{0x99124AB1L,(-7L)}},{{0L,0x67502073L},{0x1015D1F0L,0x31114209L},{(-1L),(-1L)},{1L,0x5259EDD4L},{0x1DFB442AL,1L},{0xA3C18AA7L,5L},{0x500FC512L,1L}},{{0x1DFB442AL,0x2AC6FBC5L},{1L,(-1L)},{0xB16E7476L,0L},{0x1015D1F0L,0L},{0x67502073L,0x1015D1F0L},{0x31114209L,0xD2864D12L},{(-4L),(-1L)}},{{0xA3C18AA7L,(-1L)},{0xA1764A3AL,0xD2864D12L},{0L,0L},{0x5259EDD4L,0x5259EDD4L},{0xB97F092EL,0xA3C18AA7L},{0x99124AB1L,0x6FF6198EL},{0x1DFB442AL,5L}},{{0x3672DC30L,0x1DFB442AL},{0x67502073L,0xA1764A3AL},{0x67502073L,0x1DFB442AL},{0x3672DC30L,5L},{0x1DFB442AL,0x6FF6198EL},{0x99124AB1L,0xA3C18AA7L},{0xB97F092EL,0x5259EDD4L}},{{0x5259EDD4L,0L},{0L,0xD2864D12L},{0xA1764A3AL,(-1L)},{0xA3C18AA7L,(-1L)},{(-4L),0xD2864D12L},{0x31114209L,0x1015D1F0L},{0x5259EDD4L,0x2AC6FBC5L}}};
static unsigned short *g_677[1][10][1] = {{{&g_105},{&g_105},{&g_105},{(void*)0},{(void*)0},{&g_105},{&g_105},{&g_105},{(void*)0},{(void*)0}}};
static unsigned short **g_676 = &g_677[0][4][0];
static char *g_706[6][10] = {{&g_445,&g_445,&g_348,&g_445,&g_348,&g_445,&g_445,&g_348,&g_348,&g_445},{&g_445,&g_445,&g_348,&g_348,&g_445,&g_445,&g_445,&g_445,&g_348,&g_348},{&g_445,&g_445,&g_445,&g_445,&g_445,&g_348,&g_445,&g_445,&g_348,&g_445},{&g_445,&g_445,&g_348,&g_445,&g_348,&g_445,&g_445,&g_348,&g_445,&g_445},{&g_348,&g_445,&g_348,&g_445,&g_445,&g_348,&g_348,&g_445,&g_445,&g_348},{&g_445,&g_445,&g_445,(void*)0,&g_445,&g_348,&g_445,&g_445,&g_348,&g_445}};
static char **g_705 = &g_706[5][3];
static unsigned char g_827 = 0x3BL;
static unsigned g_857 = 0x0EC511A7L;
static short ***g_889 = &g_107;
static short ****g_888 = &g_889;
static int g_908 = (-1L);
static unsigned g_922[8] = {0xABA687A7L,0xF0EB62C7L,0xABA687A7L,0xF0EB62C7L,0xABA687A7L,0xF0EB62C7L,0xABA687A7L,0xF0EB62C7L};
static char g_949 = 0x67L;
static unsigned *g_1056 = &g_922[1];
static unsigned **g_1055 = &g_1056;
static int g_1060[2] = {0xFB6D3AD3L,0xFB6D3AD3L};
static unsigned g_1067 = 0xD65D1323L;
static unsigned g_1069 = 0x937AED7CL;
static unsigned short g_1070 = 5UL;
static int g_1102 = (-7L);
static unsigned g_1150[10][9] = {{0xB7496BE3L,0x97321BE5L,0xB7496BE3L,0x27846603L,0x00ABF508L,0UL,0UL,0xD19F5D20L,0xD19F5D20L},{0UL,0x297BE555L,0xC837EAD3L,0xBFA44D14L,0xC837EAD3L,0x297BE555L,0UL,5UL,0x3FF5893FL},{0UL,0UL,0x00ABF508L,0x27846603L,0xB7496BE3L,0x97321BE5L,0xB7496BE3L,0x27846603L,0x00ABF508L},{0xBFA44D14L,0xBFA44D14L,0x75F557C7L,1UL,0x3FF5893FL,4294967288UL,0x297BE555L,5UL,0x297BE555L},{0x00ABF508L,4294967295UL,0UL,0UL,4294967295UL,0x00ABF508L,0x307C04CEL,0xD19F5D20L,0x92FB7AD0L},{5UL,0UL,0x75F557C7L,0x2CDB18CFL,0UL,0UL,0x2CDB18CFL,0x75F557C7L,0UL},{4294967295UL,0UL,0x00ABF508L,0xB7496BE3L,1UL,0x27846603L,0x307C04CEL,0x307C04CEL,0x27846603L},{6UL,5UL,0x75F557C7L,5UL,1UL,0x2CDB18CFL,6UL,0xC837EAD3L,0x3FF5893FL},{0xB7496BE3L,0x92FB7AD0L,0x307C04CEL,0UL,0xFA71AC1FL,0UL,0x307C04CEL,0x92FB7AD0L,0xB7496BE3L},{4294967288UL,0UL,0xBFA44D14L,1UL,0xC837EAD3L,0x2CDB18CFL,1UL,0x2CDB18CFL,0xC837EAD3L}};
static int **g_1221 = (void*)0;
static int ***g_1220 = &g_1221;
static int **g_1299[7] = {&g_593,&g_593,&g_593,&g_593,&g_593,&g_593,&g_593};
static unsigned g_1323 = 0x79025883L;
static unsigned g_1536 = 0x0440C036L;
static int *g_1558 = &g_1060[1];
static short g_1574 = 1L;
static unsigned char g_1576 = 0UL;
static char **g_1578[8] = {&g_706[4][5],&g_706[4][5],&g_706[4][5],&g_706[4][5],&g_706[4][5],&g_706[4][5],&g_706[4][5],&g_706[4][5]};
static unsigned short g_1580 = 65528UL;
static int g_1742 = (-4L);
static int *g_1746 = &g_1102;
static unsigned char ***g_1760 = &g_100[0][2][1];
static unsigned char ****g_1759[5] = {&g_1760,&g_1760,&g_1760,&g_1760,&g_1760};
static unsigned g_1787 = 4294967295UL;
static unsigned g_1818 = 0xB795C74BL;
static short g_1827 = 0xCDE6L;



static unsigned func_1(void);
static int * func_5(int * p_6, int p_7, unsigned char p_8);
static int * func_9(int * p_10, int * p_11, unsigned char p_12, short p_13);
static int * func_14(int * p_15);
static int func_17(int * p_18, int p_19, int * p_20);
static int * func_21(int * p_22, unsigned char p_23);
static int * func_24(unsigned short p_25, int * p_26, int * p_27);
static unsigned func_29(int * p_30, unsigned p_31);
static int * func_32(int * p_33, unsigned short p_34, unsigned p_35, unsigned char p_36);
static unsigned char func_37(unsigned p_38, int p_39, int * p_40, unsigned p_41);
static unsigned func_1(void)
{
    int *l_3 = &g_4;
    int *l_16 = (void*)0;
    char **l_1559 = &g_706[4][7];
    char ***l_1560[6][2] = {{&g_705,&g_705},{&g_705,&l_1559},{(void*)0,&g_705},{&l_1559,&g_705},{(void*)0,&l_1559},{&g_705,&g_705}};
    int l_1563[5] = {1L,1L,1L,1L,1L};
    char l_1570 = (-1L);
    int l_1571 = (-8L);
    short *l_1572 = (void*)0;
    short *l_1573[9][4] = {{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574},{&g_1574,&g_1574,&g_1574,&g_1574}};
    unsigned char *l_1575 = &g_1576;
    int l_1577 = 0x729F3EF6L;
    unsigned short *l_1579 = &g_1580;
    unsigned char ***l_1756 = &g_100[3][0][3];
    unsigned char ****l_1755[3][4] = {{&l_1756,&l_1756,&l_1756,&l_1756},{&l_1756,&l_1756,&l_1756,&l_1756},{&l_1756,&l_1756,&l_1756,&l_1756}};
    int l_1838 = 1L;
    int *l_1860 = &g_4;
    int i, j;
    (*l_3) = g_2[0];
    l_3 = func_5(func_9(func_14(l_16), l_3, ((((*l_1579) = ((g_705 = l_1559) != (g_1578[5] = ((((l_1577 = ((*l_1575) = ((safe_div_func_int16_t_s_s(l_1563[3], (g_1574 = (safe_rshift_func_uint8_t_u_u(l_1563[3], ((safe_div_func_int16_t_s_s(g_645[6][0][1], 65535UL)) & (!((g_645[7][4][0] & l_1570) >= l_1571)))))))) || l_1571))) < g_445) & 0xF7L) , &g_706[5][3])))) | l_1570) , g_645[5][1][0]), g_1323), l_1563[0], l_1571);
    for (g_72 = 0; (g_72 < 14); ++g_72)
    {
        int l_1749[2];
        unsigned char ***l_1753 = &g_100[3][3][2];
        unsigned char ****l_1752 = &l_1753;
        unsigned char *****l_1754 = (void*)0;
        unsigned char *****l_1757 = (void*)0;
        unsigned char *****l_1758 = &l_1752;
        unsigned char *****l_1761 = &g_1759[4];
        int l_1783 = (-6L);
        int l_1784 = (-5L);
        char l_1791[1][5][3] = {{{2L,2L,0x96L},{2L,2L,0x96L},{2L,2L,0x96L},{2L,2L,0x96L},{2L,2L,0x96L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1749[i] = 0xDEBF9623L;
        (*g_1746) = ((g_922[5] ^ 0L) ^ l_1749[1]);
    }
    return (**g_1055);
}







static int * func_5(int * p_6, int p_7, unsigned char p_8)
{
    unsigned short l_1600 = 9UL;
    int l_1606[7][9] = {{0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L},{0x9754A742L,0x9754A742L,(-6L),0x9754A742L,0x9754A742L,(-6L),0x9754A742L,0x9754A742L,(-6L)},{0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L},{0x9754A742L,0x9754A742L,(-6L),0x9754A742L,0x9754A742L,(-6L),0x9754A742L,0x9754A742L,(-6L)},{0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L},{0x9754A742L,0x9754A742L,(-6L),0x9754A742L,0x9754A742L,(-6L),0x9754A742L,0x9754A742L,(-6L)},{0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L,0x6993B544L,0x6993B544L,1L}};
    int l_1607 = 0x8A0875DCL;
    int *l_1611 = (void*)0;
    unsigned short l_1614 = 65535UL;
    int *l_1617 = &g_1102;
    short *l_1621 = &g_2[4];
    int *l_1665 = &l_1606[2][2];
    unsigned l_1737[6][9] = {{4294967295UL,4294967286UL,0x288B27D3L,4294967295UL,0xDE347532L,4294967288UL,0xDE347532L,4294967295UL,0x288B27D3L},{0xDBAC8657L,0xDBAC8657L,0x288B27D3L,0xCBEAA01AL,0xC3E8F3B6L,4294967288UL,0x5E4DA348L,4294967286UL,0x288B27D3L},{0x499D5812L,0x34CE8D4DL,0x288B27D3L,4294967286UL,0x5E4DA348L,4294967288UL,0xC3E8F3B6L,0xCBEAA01AL,0x288B27D3L},{0x34CE8D4DL,0x499D5812L,0x288B27D3L,4294967295UL,0xDE347532L,4294967288UL,0xDE347532L,4294967295UL,0x288B27D3L},{0xDBAC8657L,0xDBAC8657L,0x288B27D3L,0xCBEAA01AL,0xC3E8F3B6L,4294967288UL,0x5E4DA348L,4294967286UL,0x288B27D3L},{0x499D5812L,0x34CE8D4DL,0x288B27D3L,4294967286UL,0x5E4DA348L,4294967288UL,0xC3E8F3B6L,0xCBEAA01AL,0x288B27D3L}};
    unsigned char l_1741 = 0xF3L;
    char *l_1743 = (void*)0;
    char *l_1744 = &g_445;
    int *l_1745 = &l_1606[0][1];
    int i, j;
    if (l_1600)
    {
        int **l_1601[2];
        short *l_1608 = &g_1574;
        int *l_1609 = &l_1607;
        int *l_1610 = &l_1606[4][7];
        int i;
        for (i = 0; i < 2; i++)
            l_1601[i] = &g_146;
        (*g_1558) = ((((l_1601[0] == &p_6) <= p_7) & ((*g_101) = (safe_div_func_int16_t_s_s(((*l_1608) = (l_1607 = (4294967295UL != (safe_lshift_func_uint16_t_u_s((l_1606[4][7] = l_1600), 0))))), 0x62B7L)))) | p_7);
        (*g_1558) = l_1606[5][5];
        (*g_1558) = l_1606[2][2];
        return l_1611;
    }
    else
    {
        short *l_1620[4][10][5] = {{{(void*)0,&g_57,&g_57,(void*)0,&g_90},{&g_57,&g_2[0],&g_2[0],(void*)0,&g_1574},{&g_57,&g_2[3],&g_2[1],(void*)0,&g_2[4]},{&g_2[0],(void*)0,&g_57,&g_90,&g_2[3]},{&g_2[6],&g_2[4],&g_90,&g_57,&g_57},{&g_57,&g_2[6],&g_57,&g_90,&g_2[0]},{&g_2[2],&g_2[6],&g_57,&g_1574,&g_90},{&g_2[0],&g_57,&g_2[0],(void*)0,&g_90},{(void*)0,&g_90,&g_57,&g_2[0],&g_2[6]},{&g_90,&g_2[3],(void*)0,&g_2[0],&g_1574}},{{&g_90,&g_1574,(void*)0,(void*)0,(void*)0},{&g_2[0],&g_2[0],&g_2[0],&g_2[0],&g_57},{(void*)0,&g_2[4],&g_2[3],&g_90,&g_57},{&g_90,&g_2[0],&g_2[0],&g_2[3],&g_90},{(void*)0,&g_2[4],&g_57,&g_2[3],(void*)0},{&g_57,&g_2[0],&g_2[2],&g_57,&g_90},{&g_57,&g_1574,(void*)0,(void*)0,&g_1574},{(void*)0,&g_2[3],&g_2[0],&g_90,&g_2[0]},{&g_57,(void*)0,&g_90,(void*)0,(void*)0},{&g_57,&g_57,&g_1574,&g_2[2],&g_90}},{{&g_57,&g_1574,(void*)0,&g_2[4],&g_2[1]},{(void*)0,&g_2[0],&g_90,&g_90,&g_90},{&g_57,(void*)0,&g_1574,(void*)0,&g_57},{&g_57,&g_2[6],&g_90,&g_90,&g_2[0]},{(void*)0,&g_90,&g_90,&g_57,&g_90},{&g_90,&g_90,&g_2[3],&g_2[6],&g_2[0]},{(void*)0,&g_57,&g_2[2],&g_57,&g_57},{&g_2[0],&g_2[2],&g_57,&g_90,&g_2[0]},{&g_90,&g_57,&g_57,&g_90,&g_2[4]},{&g_2[2],&g_2[0],(void*)0,&g_2[0],&g_57}},{{&g_57,(void*)0,&g_90,&g_57,&g_90},{&g_90,&g_2[3],&g_2[0],&g_2[0],&g_90},{&g_57,&g_57,&g_57,&g_90,&g_1574},{(void*)0,&g_90,&g_57,&g_90,&g_90},{&g_57,(void*)0,&g_57,&g_90,&g_2[6]},{&g_2[0],(void*)0,&g_90,(void*)0,&g_2[0]},{&g_2[0],(void*)0,&g_2[6],&g_90,(void*)0},{&g_57,&g_57,&g_90,&g_2[0],&g_90},{&g_90,&g_2[6],&g_57,&g_90,&g_57},{&g_2[0],(void*)0,&g_57,&g_2[2],&g_57}}};
        unsigned l_1637 = 0xB5C6FE3FL;
        unsigned l_1638 = 0UL;
        char l_1640 = 1L;
        int *l_1641 = &l_1606[4][7];
        unsigned l_1657 = 0xA63E08C7L;
        int ***l_1678 = &g_1299[2];
        int l_1679 = (-1L);
        int *l_1683 = &l_1606[4][7];
        int l_1699 = (-9L);
        int i, j, k;
        for (g_857 = (-11); (g_857 > 14); ++g_857)
        {
            short l_1642 = (-1L);
            unsigned l_1656 = 0UL;
            int *l_1666 = &g_85;
            unsigned char *l_1724[8][6] = {{&g_1576,(void*)0,&g_529,&g_1576,&g_827,&g_1576},{&g_158,(void*)0,&g_1576,&g_158,(void*)0,&g_158},{&g_158,(void*)0,&g_158,&g_1576,(void*)0,&g_158},{&g_1576,&g_827,&g_1576,&g_529,(void*)0,&g_1576},{&g_1576,(void*)0,&g_529,&g_529,(void*)0,&g_1576},{&g_1576,(void*)0,&g_529,&g_1576,&g_1576,&g_158},{(void*)0,&g_1576,&g_72,(void*)0,&g_529,(void*)0},{(void*)0,&g_529,(void*)0,&g_72,&g_1576,(void*)0}};
            char *l_1727 = &g_348;
            unsigned short l_1728 = 65532UL;
            int i, j;
            if (l_1614)
                break;
            for (g_147 = 26; (g_147 < 49); ++g_147)
            {
                unsigned char l_1626 = 7UL;
                int l_1639[10][6] = {{0x4E96853BL,0x7BBFF8DAL,0x7D16173CL,0xA63FB71CL,9L,7L},{0xA63FB71CL,9L,7L,7L,9L,0xA63FB71CL},{6L,0x7BBFF8DAL,(-9L),0x4E96853BL,1L,0xA63FB71CL},{(-9L),(-9L),7L,0x7D16173CL,(-8L),7L},{(-9L),1L,0x7D16173CL,0x4E96853BL,0xF7EA3D1BL,0x4E96853BL},{6L,1L,6L,7L,(-8L),0x7D16173CL},{0xA63FB71CL,(-9L),6L,0xA63FB71CL,1L,0x4E96853BL},{0x4E96853BL,0x7BBFF8DAL,0x7D16173CL,0xA63FB71CL,9L,7L},{0xA63FB71CL,9L,7L,7L,9L,0xA63FB71CL},{6L,0x7BBFF8DAL,(-9L),0x4E96853BL,1L,0xA63FB71CL}};
                int **l_1643 = &l_1617;
                int i, j;
                (*l_1643) = &p_7;
            }
        }
    }
    (*l_1665) = 0xC3DED10AL;
    (*g_1558) = p_8;
    p_6 = &p_7;
    return g_1746;
}







static int * func_9(int * p_10, int * p_11, unsigned char p_12, short p_13)
{
    int l_1587 = 0x793B1C33L;
    short ***l_1588 = &g_107;
    int ***l_1589 = &g_1299[2];
    int ****l_1590 = (void*)0;
    int ****l_1591 = &g_1220;
    unsigned char l_1596 = 0xDAL;
    int l_1597 = 0xFB82B3CCL;
    unsigned **l_1598[8];
    char *l_1599 = &g_949;
    int i;
    for (i = 0; i < 8; i++)
        l_1598[i] = &g_1056;
    (*p_11) = (safe_add_func_int32_t_s_s(((((*l_1599) = (((((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(p_13, p_12)) >= l_1587), ((l_1588 == ((*g_888) = l_1588)) || ((l_1587 , l_1589) == ((*l_1591) = l_1589))))) , (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((*g_101) = (p_12 = (*g_101))) > l_1587), l_1596)), l_1597))) , l_1598[4]) != (void*)0) | p_13)) , p_12) == (*p_11)), p_13));
    return p_10;
}







static int * func_14(int * p_15)
{
    short l_28 = 0x3923L;
    int **l_1123 = &g_593;
    short **l_1125 = &g_108;
    short ***l_1124[7];
    unsigned l_1301[6] = {0x803F264AL,0x803F264AL,0x803F264AL,0x803F264AL,0x803F264AL,0x803F264AL};
    int i;
    for (i = 0; i < 7; i++)
        l_1124[i] = &l_1125;
    (*g_1558) = func_17(func_21(((*l_1123) = func_24(l_28, p_15, &g_4)), (l_28 , (l_28 <= ((void*)0 != l_1124[4])))), l_1301[1], p_15);
    return p_15;
}







static int func_17(int * p_18, int p_19, int * p_20)
{
    int l_1304 = 0xB9788963L;
    char l_1314[4];
    char l_1319 = 3L;
    int *l_1326 = &g_85;
    short l_1363 = 1L;
    int *l_1373[8];
    unsigned l_1374 = 5UL;
    unsigned *l_1375 = &g_1067;
    int l_1394[6][2] = {{(-6L),(-3L)},{0x21ACC547L,(-6L)},{(-1L),(-1L)},{(-1L),(-6L)},{0x21ACC547L,(-3L)},{(-6L),(-3L)}};
    unsigned l_1395[6];
    unsigned char l_1403 = 0x8CL;
    int ***l_1406 = &g_1221;
    unsigned l_1410 = 0xA8331930L;
    unsigned l_1472[3];
    unsigned char ***l_1487 = &g_100[3][0][3];
    unsigned **l_1494 = &g_1056;
    int l_1545 = 0xAE8C475CL;
    unsigned l_1550[4][6][2] = {{{0x137CEB2DL,0x31B21C1DL},{0x31B21C1DL,0UL},{1UL,0x678344C5L},{0x137CEB2DL,0x2FA3BE26L},{0x08EE5C32L,1UL},{0xA9EEE161L,0x08EE5C32L}},{{0x31B21C1DL,4294967295UL},{0x31B21C1DL,0x08EE5C32L},{0xA9EEE161L,1UL},{0x08EE5C32L,0x2FA3BE26L},{0x137CEB2DL,0x678344C5L},{1UL,0UL}},{{0UL,0UL},{1UL,0x678344C5L},{0x137CEB2DL,0x2FA3BE26L},{0x08EE5C32L,1UL},{0xA9EEE161L,0x08EE5C32L},{0x31B21C1DL,4294967295UL}},{{0x31B21C1DL,0x08EE5C32L},{0xA9EEE161L,1UL},{0x08EE5C32L,0x2FA3BE26L},{0x137CEB2DL,0x678344C5L},{1UL,0UL},{0UL,0UL}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1314[i] = 0x04L;
    for (i = 0; i < 8; i++)
        l_1373[i] = &g_85;
    for (i = 0; i < 6; i++)
        l_1395[i] = 4294967286UL;
    for (i = 0; i < 3; i++)
        l_1472[i] = 0x747457DEL;
    for (g_90 = 6; (g_90 >= 2); g_90 = safe_sub_func_int8_t_s_s(g_90, 9))
    {
        unsigned l_1307[3][3];
        int l_1310 = 0x46CAA68CL;
        int *l_1311 = &g_1060[0];
        int l_1339 = 0x5A30122DL;
        unsigned char ***l_1354 = &g_100[3][0][3];
        unsigned char ***l_1356 = &g_100[1][1][3];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1307[i][j] = 0xFF424BF1L;
        }
        (*l_1311) = ((p_19 , l_1304) || (p_19 & ((l_1304 || p_19) , (safe_div_func_int32_t_s_s(l_1307[1][0], (safe_rshift_func_int8_t_s_u(l_1310, 1)))))));
        for (g_857 = (-18); (g_857 <= 43); g_857 = safe_add_func_uint32_t_u_u(g_857, 2))
        {
            int *l_1340 = &g_1060[0];
            unsigned short l_1365 = 1UL;
            int ***l_1372 = &g_220;
            for (g_827 = 0; (g_827 <= 5); g_827 += 1)
            {
                unsigned short l_1336 = 0xA3D4L;
                char *l_1353 = &l_1314[3];
                unsigned char ****l_1355 = &l_1354;
                int *l_1357 = &l_1339;
                unsigned **l_1359 = (void*)0;
                unsigned ***l_1360 = &l_1359;
            }
        }
        l_1311 = (void*)0;
        return p_19;
    }
    p_18 = func_21(&l_1304, ((*g_101) = (((*l_1375) = p_19) || ((*l_1326) = (8L == (*l_1326))))));
    for (g_147 = 0; (g_147 <= 1); g_147 += 1)
    {
        unsigned short *l_1392[5] = {&g_1070,&g_1070,&g_1070,&g_1070,&g_1070};
        int l_1393 = 0x56CD5C9DL;
        int ***l_1409 = &g_1221;
        int l_1469[5][9];
        short ****l_1471 = &g_889;
        unsigned char ***l_1486 = (void*)0;
        int l_1488[3];
        short l_1495 = 0x9E65L;
        int *l_1546 = &l_1488[0];
        int l_1556[5] = {1L,1L,1L,1L,1L};
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 9; j++)
                l_1469[i][j] = 5L;
        }
        for (i = 0; i < 3; i++)
            l_1488[i] = 0x0FF2C1A4L;
        if ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(l_1314[(g_147 + 1)], p_19)) || l_1395[1]), 2)))
        {
            short l_1396 = (-6L);
            unsigned *l_1404 = &g_568[0];
            int ****l_1405 = &g_1220;
            int ****l_1407 = (void*)0;
            int ****l_1408[3][7] = {{&l_1406,&l_1406,&l_1406,&l_1406,&l_1406,&l_1406,&l_1406},{&l_1406,(void*)0,(void*)0,&l_1406,(void*)0,(void*)0,&l_1406},{&l_1406,&l_1406,&l_1406,&l_1406,&l_1406,&l_1406,&l_1406}};
            short l_1415 = 0xC154L;
            unsigned l_1450 = 0x998ADE0AL;
            int i, j;
            if (l_1314[(g_147 + 2)])
                break;
            if ((p_19 | (((p_19 && ((p_19 , (*l_1326)) < l_1396)) , (safe_lshift_func_int8_t_s_u((((*l_1404) = (l_1393 = ((**g_1055) = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(0xE239453DL, l_1403)), 3))))) , (((*l_1405) = (void*)0) == (l_1409 = l_1406))), 0))) != l_1410)))
            {
                int l_1418 = (-1L);
                short l_1431 = 4L;
                int *l_1432[5][8][6] = {{{&g_85,&l_1304,&g_1102,&l_1304,&g_85,&l_1418},{&g_1060[g_147],&g_1060[1],&g_1060[1],(void*)0,&g_1060[1],&l_1304},{&g_1060[1],&g_85,&l_1393,(void*)0,&g_1060[1],&l_1304},{&g_1060[g_147],&l_1304,(void*)0,&g_1060[1],&g_1060[1],(void*)0},{&g_1060[1],&g_1060[1],&g_1060[g_147],&l_1393,&g_1102,&g_4},{&g_1060[g_147],(void*)0,&g_1060[1],&g_85,&l_1304,&g_1060[g_147]},{&g_1060[1],&g_1060[g_147],&g_1060[1],&g_85,&g_1060[1],&g_4},{(void*)0,&g_85,&g_1060[g_147],&l_1393,&g_1060[g_147],(void*)0}},{{&l_1393,&g_1060[g_147],(void*)0,&g_1060[g_147],&g_4,&l_1393},{&g_1060[1],&g_1060[1],&l_1393,&g_1060[1],&g_85,&g_4},{&g_85,(void*)0,&g_1060[g_147],&g_1060[0],&g_4,(void*)0},{&g_1102,&l_1304,&g_1102,&l_1304,&g_4,(void*)0},{&g_1060[1],&g_1060[g_147],&g_1060[1],&g_85,&g_4,&g_85},{(void*)0,&g_908,&g_1060[g_147],&l_1304,&g_4,&g_1060[g_147]},{&g_908,&g_85,(void*)0,&g_908,&g_908,&g_4},{&l_1418,(void*)0,&l_1393,&l_1418,&g_1060[1],&g_1060[g_147]}},{{&g_908,&g_85,&g_1060[0],&g_4,&g_908,&g_4},{(void*)0,&g_1060[0],(void*)0,&g_1060[1],&l_1304,&g_1060[g_147]},{&l_1418,&g_1060[g_147],&g_908,(void*)0,&l_1418,&l_1304},{&g_1060[1],&g_1060[g_147],&l_1418,&g_1060[1],&g_1060[1],&g_1060[1]},{(void*)0,&g_1060[0],&g_1060[1],&g_1060[1],&g_908,&l_1304},{&g_1060[1],&g_1060[g_147],&l_1304,&g_1060[1],(void*)0,&g_1060[g_147]},{&g_1060[1],&g_1060[g_147],&g_1060[1],(void*)0,&g_4,&g_1060[g_147]},{&g_1060[g_147],&l_1393,&l_1304,&g_1060[1],&g_85,&l_1393}},{{&g_908,&g_1102,&l_1304,&g_1060[1],&g_908,&g_1060[1]},{&g_1060[g_147],&l_1304,&g_1060[g_147],&g_4,&l_1304,&g_908},{&g_1060[1],&g_1060[g_147],(void*)0,&l_1304,&g_85,&l_1418},{&g_85,&g_1060[1],&g_1060[g_147],&g_1102,&g_1060[1],&g_85},{(void*)0,(void*)0,&g_1102,&g_85,&g_1102,&g_1060[g_147]},{(void*)0,&g_1060[1],&g_85,&l_1304,(void*)0,(void*)0},{&g_85,&g_1060[1],&g_1060[1],&g_85,&g_1060[g_147],&g_908},{&g_1060[1],&g_1060[1],&g_1060[g_147],(void*)0,&g_1060[1],&g_1060[g_147]}},{{&g_85,&g_4,(void*)0,&g_1102,&g_1060[1],&g_908},{&l_1304,&g_1060[1],&l_1393,&l_1304,&g_1060[g_147],&g_908},{&l_1304,&g_1060[1],&g_1060[1],&l_1418,(void*)0,&g_1060[1]},{&l_1304,&g_1060[1],&g_4,&g_908,&g_1102,&g_85},{(void*)0,&g_85,&g_1102,&g_1060[0],&g_1060[1],&g_4},{&g_1060[1],&l_1304,&l_1393,&g_1060[g_147],(void*)0,&g_1060[g_147]},{&g_4,&g_4,&g_4,&l_1418,&g_1102,&g_1060[g_147]},{(void*)0,(void*)0,&g_1060[1],&g_1060[g_147],&g_1060[g_147],&g_1060[1]}}};
                int *l_1433 = &l_1393;
                short ****l_1470[5][8][6] = {{{(void*)0,&g_889,&g_889,(void*)0,&g_889,(void*)0},{(void*)0,&g_889,&g_889,&g_889,(void*)0,&g_889},{&g_889,&g_889,&g_889,&g_889,(void*)0,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,(void*)0},{&g_889,(void*)0,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,(void*)0},{(void*)0,&g_889,&g_889,(void*)0,&g_889,&g_889}},{{(void*)0,&g_889,&g_889,(void*)0,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,(void*)0,&g_889,(void*)0,&g_889,&g_889},{&g_889,&g_889,(void*)0,&g_889,&g_889,&g_889},{(void*)0,&g_889,(void*)0,&g_889,(void*)0,(void*)0},{&g_889,&g_889,&g_889,(void*)0,(void*)0,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889}},{{&g_889,&g_889,&g_889,(void*)0,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{(void*)0,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,(void*)0,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,(void*)0},{&g_889,&g_889,(void*)0,(void*)0,&g_889,&g_889},{&g_889,&g_889,(void*)0,&g_889,&g_889,&g_889},{(void*)0,&g_889,(void*)0,&g_889,(void*)0,(void*)0}},{{&g_889,&g_889,&g_889,(void*)0,(void*)0,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,(void*)0,&g_889,(void*)0,&g_889},{&g_889,&g_889,(void*)0,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,(void*)0,&g_889,(void*)0},{(void*)0,&g_889,&g_889,&g_889,(void*)0,(void*)0}},{{(void*)0,&g_889,&g_889,(void*)0,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,(void*)0,(void*)0},{&g_889,&g_889,&g_889,&g_889,(void*)0,(void*)0},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,&g_889,&g_889,&g_889,&g_889},{&g_889,&g_889,(void*)0,&g_889,(void*)0,&g_889},{&g_889,&g_889,(void*)0,&g_889,&g_889,&g_889}}};
                int i, j, k;
                (*p_18) = (((p_19 && (safe_mod_func_int8_t_s_s(((((*l_1326) = p_19) , (p_19 < ((safe_mod_func_uint16_t_u_u(p_19, p_19)) && l_1418))) , p_19), p_19))) >= 0L) > p_19);
                if ((&g_221[0] != &g_221[4]))
                {
                    unsigned char l_1423 = 0x31L;
                    int *l_1424 = (void*)0;
                    int i;
                    (*l_1326) = ((((safe_rshift_func_int8_t_s_s((l_1418 && (safe_rshift_func_uint16_t_u_u((p_19 & 0x26A9L), p_19))), p_19)) ^ p_19) <= 4294967290UL) < 4294967292UL);
                    for (g_183 = 0; (g_183 <= 3); g_183 += 1)
                    {
                        int *l_1434 = (void*)0;
                        short l_1435[8][7] = {{0x6E4CL,0x96B1L,0xBC6EL,0x1CEAL,0x1CEAL,0xBC6EL,0x96B1L},{0xB311L,2L,9L,0xB311L,(-1L),(-1L),0xB311L},{0x3D8CL,0x96B1L,0x2062L,0x9785L,0x1CEAL,0x3D8CL,0x3D8CL},{0xEB1FL,(-3L),0x940AL,(-3L),0xEB1FL,0x940AL,0xB311L},{0x6E4CL,0x3D8CL,0x9785L,0x6E4CL,0x9785L,0x3D8CL,0x6E4CL},{(-1L),0xB311L,9L,2L,0xB311L,2L,9L},{0x6E4CL,0x6E4CL,0x547FL,0x1CEAL,0x96B1L,0x547FL,0x96B1L},{0xEB1FL,9L,9L,0xEB1FL,2L,(-1L),0xEB1FL}};
                        int i, j;
                        (*l_1326) = ((*p_18) = (l_1418 = (*p_18)));
                        l_1432[1][2][4] = &l_1418;
                        l_1434 = (l_1433 = (void*)0);
                        return l_1435[0][2];
                    }
                }
                else
                {
                    unsigned **l_1436 = (void*)0;
                    unsigned ***l_1437 = &l_1436;
                    unsigned char **l_1438[6][10] = {{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{(void*)0,&g_101,&g_101,&g_101,(void*)0,(void*)0,&g_101,&g_101,(void*)0,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101},{&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101,&g_101,(void*)0,&g_101,&g_101},{&g_101,&g_101,(void*)0,&g_101,&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101},{&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,&g_101,(void*)0,&g_101}};
                    int l_1445 = 1L;
                    short *l_1453 = (void*)0;
                    short *l_1454 = &l_1396;
                    int l_1455 = 0xABAEC630L;
                    int *l_1456 = &g_1102;
                    unsigned char ***l_1464 = (void*)0;
                    unsigned char ****l_1463 = &l_1464;
                    int i, j;
                    (*l_1326) = 1L;
                    (*l_1456) = ((*l_1433) = ((*p_18) = ((((*l_1437) = l_1436) != &g_617) < (((*l_1375) = g_827) ^ (*p_18)))));
                    (*l_1433) = ((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((((*l_1375) = (safe_add_func_int16_t_s_s((*l_1326), ((&g_100[3][0][3] == ((*l_1463) = &g_100[3][0][3])) || ((*p_18) = ((((((safe_lshift_func_uint8_t_u_u((((**g_1055) = ((((*l_1456) = (*p_18)) >= 0x01E12F9BL) , (*l_1326))) , (*g_101)), 0)) ^ (((safe_div_func_uint8_t_u_u(((l_1469[1][3] = 0x8EF7L) , (*g_101)), 0xC9L)) < l_1314[(g_147 + 2)]) || g_827)) , p_19) , l_1470[1][0][5]) != l_1471) && p_19)))))) < (*l_1433)), p_19)) <= p_19), p_19)) <= l_1472[2]);
                    p_20 = &p_19;
                }
                for (g_827 = 21; (g_827 == 4); g_827 = safe_sub_func_int8_t_s_s(g_827, 2))
                {
                    unsigned **l_1475[2][5][3];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                        {
                            for (k = 0; k < 3; k++)
                                l_1475[i][j][k] = &g_1056;
                        }
                    }
                    for (g_529 = 3; (g_529 <= 8); g_529 += 1)
                    {
                        unsigned ***l_1476[6][3] = {{(void*)0,&l_1475[1][3][2],&l_1475[0][0][0]},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1475[0][3][2],(void*)0},{(void*)0,&l_1475[1][3][2],&l_1475[0][0][0]},{(void*)0,(void*)0,(void*)0},{(void*)0,&l_1475[0][3][2],(void*)0}};
                        int i, j;
                        g_1055 = l_1475[1][2][2];
                    }
                }
                if ((*p_18))
                    continue;
            }
            else
            {
                p_18 = &p_19;
            }
            p_20 = &p_19;
        }
        else
        {
            int l_1483 = 0xF3DA1B3AL;
            (*p_18) = (safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_19 >= (*l_1326)), 0xB4L)), 4));
        }
        for (g_57 = 29; (g_57 >= (-16)); g_57 = safe_sub_func_int16_t_s_s(g_57, 1))
        {
            int *l_1491 = &g_4;
            l_1491 = &p_19;
            if ((safe_add_func_int8_t_s_s(((l_1494 == &g_1056) , p_19), p_19)))
            {
                p_18 = func_21(l_1491, p_19);
                return l_1495;
            }
            else
            {
                unsigned char l_1502[3][8][1] = {{{0xD8L},{255UL},{2UL},{2UL},{255UL},{0xD8L},{255UL},{2UL}},{{2UL},{255UL},{0xD8L},{255UL},{2UL},{2UL},{255UL},{0xD8L}},{{255UL},{2UL},{2UL},{255UL},{0xD8L},{255UL},{2UL},{2UL}}};
                unsigned char l_1524 = 0x17L;
                int **l_1525 = (void*)0;
                int **l_1526 = (void*)0;
                int **l_1527 = &l_1491;
                int i, j, k;
                if ((safe_lshift_func_uint16_t_u_u((p_19 , (*l_1326)), ((((*l_1491) >= (*g_101)) <= (l_1469[4][5] = (0x9262L == (((safe_mod_func_uint8_t_u_u((l_1502[0][4][0] = ((p_19 > p_19) , ((*p_18) == (safe_add_func_uint32_t_u_u(1UL, 4UL))))), 0xADL)) == p_19) , (*l_1491))))) , 0x01D7L))))
                {
                    int *l_1503 = &g_1060[g_147];
                    unsigned **l_1518 = &g_617;
                    unsigned ***l_1519 = &l_1518;
                    if ((*l_1491))
                    {
                        (*p_18) = (-1L);
                    }
                    else
                    {
                        short **l_1504 = (void*)0;
                        int **l_1517[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1517[i] = &l_1491;
                        p_18 = func_32(l_1503, (*l_1491), ((*l_1375) = ((*g_889) != l_1504)), ((safe_lshift_func_uint8_t_u_s(p_19, 3)) & p_19));
                        (*p_18) = (((*g_101) | (safe_sub_func_int16_t_s_s(0xD247L, ((p_19 > ((*l_1503) | (p_19 == (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(p_19, (p_19 , 0x27L))), 9))))) & (safe_div_func_uint32_t_u_u((*l_1491), (*l_1503))))))) > p_19);
                        p_18 = (void*)0;
                        p_18 = &p_19;
                    }
                    (*l_1519) = l_1518;
                }
                else
                {
                    for (l_1319 = 24; (l_1319 <= 10); --l_1319)
                    {
                        int **l_1522 = &l_1491;
                        int **l_1523 = &g_146;
                        (*l_1523) = ((*l_1522) = &p_19);
                        (*l_1326) = (*g_146);
                        if (l_1524)
                            break;
                    }
                }
                (*l_1527) = &l_1304;
                (*p_18) = (p_19 || 0x3439L);
                (*p_18) = (*l_1491);
            }
            (*l_1491) = (0x9CL != p_19);
            if (((safe_rshift_func_uint8_t_u_s(0x12L, 0)) > (0x4D0DL && ((*l_1326) = (*l_1326)))))
            {
                unsigned char l_1530 = 251UL;
                return l_1530;
            }
            else
            {
                int l_1539 = (-1L);
                unsigned **l_1540 = &g_617;
                short *l_1541 = (void*)0;
                short *l_1542 = &g_90;
                int *l_1543 = &g_908;
                (*l_1491) = ((*l_1491) >= (((*l_1542) = (safe_unary_minus_func_uint8_t_u(((((4294967294UL == ((*l_1326) = 0x396A3152L)) != (safe_add_func_int32_t_s_s(((((((*g_101) = ((((safe_lshift_func_uint8_t_u_s(p_19, g_1536)) , p_19) , (((*l_1540) = &g_580) != &l_1472[2])) >= (*l_1491))) , p_18) == (void*)0) <= p_19) , (*p_18)), 0UL))) & l_1539) , (*g_101))))) <= p_19));
                if (((p_19 , &p_18) == ((*l_1406) = &p_20)))
                {
                    l_1543 = &p_19;
                }
                else
                {
                    short **l_1544 = (void*)0;
                    (**l_1409) = l_1491;
                    if ((*p_18))
                        continue;
                    (*l_1491) = ((l_1544 != ((**g_888) = (void*)0)) & p_19);
                    for (g_580 = 0; g_580 < 3; g_580 += 1)
                    {
                        g_568[g_580] = 4294967295UL;
                    }
                }
                if (l_1545)
                    continue;
                (*l_1491) = (*p_18);
            }
        }
        p_18 = (l_1373[5] = func_21(func_32(l_1546, (!(((*l_1326) = ((*l_1546) = ((255UL <= (((*l_1546) , ((*l_1375) = (((safe_unary_minus_func_uint16_t_u(((*g_889) != (((*l_1546) && p_19) , (void*)0)))) <= ((safe_mod_func_int32_t_s_s(0L, 0x69B26CC7L)) && l_1550[2][0][1])) > 0x61ABB850L))) == 0xEBFDD5B1L)) || (-7L)))) <= (*p_18))), g_580, p_19), p_19));
        for (g_105 = 14; (g_105 > 42); g_105 = safe_add_func_int8_t_s_s(g_105, 8))
        {
            unsigned l_1553 = 4294967293UL;
            short *l_1554 = (void*)0;
            short *l_1555 = &l_1363;
            int **l_1557[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1557[i] = &l_1326;
            p_20 = func_32(((((l_1553 ^ p_19) != (*p_18)) , (p_19 , ((0xB8E6L && (((((p_19 != p_19) < ((*l_1555) = (*l_1546))) && l_1553) , &g_221[4]) != (void*)0)) > p_19))) , &p_19), l_1556[4], p_19, (*g_101));
            p_20 = g_1558;
            p_20 = &p_19;
        }
    }
    return (*l_1326);
}







static int * func_21(int * p_22, unsigned char p_23)
{
    unsigned char *l_1132[8];
    short l_1145 = 0x5799L;
    int l_1146[2];
    unsigned char l_1147 = 1UL;
    char *l_1148 = &g_348;
    int *l_1149 = &g_1060[1];
    int *l_1198 = &l_1146[1];
    char l_1256 = (-7L);
    int l_1267 = (-1L);
    int i;
    for (i = 0; i < 8; i++)
        l_1132[i] = &g_827;
    for (i = 0; i < 2; i++)
        l_1146[i] = (-3L);
    (*l_1149) = ((l_1146[1] = (g_580 = (p_23 , ((safe_mod_func_uint8_t_u_u(0xEEL, ((*l_1148) = (p_23 ^ (safe_mod_func_int16_t_s_s(((*g_101) <= 0x00L), l_1146[1])))))) < p_23)))) >= 8UL);
    (*l_1149) = (g_1150[3][3] < (*l_1149));
    for (p_23 = 0; (p_23 >= 58); p_23 = safe_add_func_uint8_t_u_u(p_23, 2))
    {
        unsigned short l_1153 = 65535UL;
        int **l_1154 = &g_593;
        unsigned short *l_1159 = &g_1070;
        (*l_1149) = ((l_1153 < ((*l_1159) = l_1153)) , p_23);
        for (g_72 = 0; (g_72 <= 1); g_72 += 1)
        {
            int i;
            (*l_1149) = (l_1146[g_72] = (safe_add_func_int8_t_s_s(0xA1L, ((*l_1149) >= (safe_rshift_func_int8_t_s_u(p_23, (*l_1149)))))));
        }
        if (l_1153)
            break;
    }
    if (((*l_1149) = (-1L)))
    {
        return p_22;
    }
    else
    {
        unsigned l_1170 = 0UL;
        unsigned *l_1175 = (void*)0;
        unsigned *l_1176 = &g_857;
        char l_1203 = (-1L);
        unsigned l_1231 = 0x12215BF5L;
        int *l_1249 = &g_908;
        unsigned char ***l_1281 = &g_100[2][3][4];
        int **l_1295[4][6] = {{(void*)0,&l_1149,(void*)0,&l_1149,(void*)0,&l_1149},{(void*)0,&l_1149,(void*)0,&l_1149,(void*)0,&l_1149},{(void*)0,&l_1149,(void*)0,&l_1149,(void*)0,&l_1149},{(void*)0,&l_1149,(void*)0,&l_1149,(void*)0,&l_1149}};
        int i, j;
        if ((((*l_1176) = ((safe_rshift_func_int8_t_s_s((((*l_1149) = p_23) || (safe_div_func_int8_t_s_s(((*l_1148) = (safe_rshift_func_int8_t_s_u((((((-2L) <= p_23) != (-5L)) == l_1170) >= (*g_101)), p_23))), p_23))), p_23)) , (*l_1149))) | 0x3CDC4E2FL))
        {
            int **l_1177 = (void*)0;
            int **l_1178 = (void*)0;
            int **l_1179 = (void*)0;
            int **l_1180 = &g_146;
            g_593 = ((*l_1180) = p_22);
            return &g_908;
        }
        else
        {
            int **l_1189 = &g_146;
            (*l_1189) = func_32(&g_1060[0], p_23, (((void*)0 == &g_220) | (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(1UL, (safe_lshift_func_int8_t_s_s(l_1170, l_1170)))), 0)), l_1170))), (*g_101));
            (*g_146) = (**l_1189);
        }
        for (g_949 = 6; (g_949 >= 0); g_949 -= 1)
        {
            unsigned short *l_1192 = &g_105;
            int l_1197[7][5][6] = {{{0x42E70749L,0x323D5468L,0x467AD23FL,9L,0x07571FBFL,0x4F6F8552L},{0x4F6F8552L,(-3L),1L,(-3L),0x4F6F8552L,0x323D5468L},{0x4F6F8552L,0x42E70749L,(-3L),9L,0xE6BDFC2EL,0xE6BDFC2EL},{0x42E70749L,0x07571FBFL,0x07571FBFL,0x42E70749L,1L,0xE6BDFC2EL},{0x467AD23FL,1L,0xE6BDFC2EL,(-5L),0x467AD23FL,(-5L)}},{{0x07571FBFL,0x4F6F8552L,0x07571FBFL,9L,0x467AD23FL,0x323D5468L},{0xE6BDFC2EL,1L,0x42E70749L,0x07571FBFL,0x07571FBFL,0x42E70749L},{0x504CD876L,0x504CD876L,(-3L),0x07571FBFL,1L,9L},{0xE6BDFC2EL,(-3L),0x323D5468L,9L,0x323D5468L,(-3L)},{0x07571FBFL,0xE6BDFC2EL,0x323D5468L,(-5L),0x504CD876L,9L}},{{0x42E70749L,(-5L),(-3L),(-3L),(-5L),0x42E70749L},{(-3L),(-5L),0x42E70749L,0x467AD23FL,0x504CD876L,0x323D5468L},{0x323D5468L,0xE6BDFC2EL,0x07571FBFL,0xE6BDFC2EL,0x323D5468L,(-5L)},{0x323D5468L,(-3L),0xE6BDFC2EL,0x467AD23FL,1L,1L},{(-3L),0x504CD876L,0x504CD876L,(-3L),0x07571FBFL,1L}},{{0x42E70749L,1L,0xE6BDFC2EL,(-5L),0x467AD23FL,(-5L)},{0x07571FBFL,0x4F6F8552L,0x07571FBFL,9L,0x467AD23FL,0x323D5468L},{0xE6BDFC2EL,1L,0x42E70749L,0x07571FBFL,0x07571FBFL,0x42E70749L},{0x504CD876L,0x504CD876L,(-3L),0x07571FBFL,1L,9L},{0xE6BDFC2EL,(-3L),0x323D5468L,9L,0x323D5468L,(-3L)}},{{0x323D5468L,0x504CD876L,0x467AD23FL,0x42E70749L,(-5L),(-3L)},{1L,0x42E70749L,0x07571FBFL,0x07571FBFL,0x42E70749L,1L},{0x07571FBFL,0x42E70749L,1L,0xE6BDFC2EL,(-5L),0x467AD23FL},{0x467AD23FL,0x504CD876L,0x323D5468L,0x504CD876L,0x467AD23FL,0x42E70749L},{0x467AD23FL,0x07571FBFL,0x504CD876L,0xE6BDFC2EL,0x4F6F8552L,0x4F6F8552L}},{{0x07571FBFL,(-5L),(-5L),0x07571FBFL,0x323D5468L,0x4F6F8552L},{1L,0x4F6F8552L,0x504CD876L,0x42E70749L,0xE6BDFC2EL,0x42E70749L},{0x323D5468L,9L,0x323D5468L,(-3L),0xE6BDFC2EL,0x467AD23FL},{0x504CD876L,0x4F6F8552L,1L,0x323D5468L,0x323D5468L,1L},{(-5L),(-5L),0x07571FBFL,0x323D5468L,0x4F6F8552L,(-3L)}},{{0x504CD876L,0x07571FBFL,0x467AD23FL,(-3L),0x467AD23FL,0x07571FBFL},{0x323D5468L,0x504CD876L,0x467AD23FL,0x42E70749L,(-5L),(-3L)},{1L,0x42E70749L,0x07571FBFL,0x07571FBFL,0x42E70749L,1L},{0x07571FBFL,0x42E70749L,1L,0xE6BDFC2EL,(-5L),0x467AD23FL},{0x467AD23FL,0x504CD876L,0x323D5468L,0x504CD876L,0x467AD23FL,0x42E70749L}}};
            int **l_1199 = &g_146;
            int **l_1200 = &l_1149;
            int l_1215 = 0xA0B7D7D0L;
            short ****l_1227 = &g_889;
            int *l_1246 = &g_85;
            unsigned l_1247 = 0x0AC3A492L;
            int i, j, k;
            for (g_72 = 0; g_72 < 8; g_72 += 1)
            {
                l_1132[g_72] = &g_529;
            }
            if ((safe_lshift_func_uint16_t_u_u(((*l_1192) = 6UL), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0xC682L, ((((((*l_1199) = (l_1197[0][0][1] , l_1198)) == ((*l_1200) = (void*)0)) | p_23) > ((safe_mod_func_uint32_t_u_u(((p_23 > (l_1203 < ((safe_sub_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(0xF7L, 7)) | l_1170) >= p_23), 0UL)) == p_23), l_1170)) > 248UL))) != p_23), (*l_1198))) , p_23)) == p_23))), l_1203)))))
            {
                (*l_1200) = l_1175;
            }
            else
            {
                short l_1212 = 0x2D56L;
                int ***l_1219 = &l_1200;
                int ****l_1218 = &l_1219;
                l_1215 = (safe_sub_func_int16_t_s_s((**l_1199), ((l_1212 , ((p_23 , ((**l_1199) | (safe_add_func_int16_t_s_s(0x7146L, (p_23 < l_1203))))) , p_23)) , l_1203)));
                (*l_1200) = p_22;
                (*l_1199) = func_32(&g_4, p_23, (safe_add_func_int32_t_s_s((*l_1198), (((*l_1218) = (void*)0) != g_1220))), (*l_1198));
            }
            for (g_529 = 0; (g_529 <= 8); g_529 += 1)
            {
                int l_1232 = 0x07CFBC7CL;
                unsigned l_1248 = 0xD0A3AAB9L;
                unsigned **l_1266 = &g_1056;
                char l_1275[2][7][7] = {{{(-1L),0x4EL,1L,0x4EL,(-1L),(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)}},{{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)},{0x7AL,0xEEL,0L,0xEEL,0x7AL,(-1L),(-1L)}}};
                int i, j, k;
            }
        }
        for (p_23 = 0; (p_23 == 25); p_23++)
        {
            int *l_1283 = &g_908;
            (*l_1198) = (-1L);
            for (g_1067 = 1; (g_1067 <= 5); g_1067 += 1)
            {
                unsigned char ***l_1280[5][10] = {{&g_100[3][0][3],(void*)0,&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[2][3][1]},{(void*)0,(void*)0,&g_100[2][3][1],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[2][3][1],(void*)0,(void*)0,&g_100[2][3][1]},{&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3],&g_100[2][3][1],&g_100[3][0][3],&g_100[3][0][3],&g_100[3][0][3]},{(void*)0,(void*)0,(void*)0,&g_100[3][0][3],&g_100[2][3][1],&g_100[2][3][1],&g_100[3][0][3],(void*)0,(void*)0,(void*)0},{(void*)0,&g_100[3][0][3],(void*)0,&g_100[3][0][3],(void*)0,&g_100[3][0][3],(void*)0,(void*)0,&g_100[3][0][3],(void*)0}};
                unsigned char ***l_1282 = &g_100[4][0][5];
                int **l_1292 = &l_1149;
                int i, j;
                for (g_158 = 0; (g_158 <= 8); g_158 += 1)
                {
                    for (l_1145 = 4; (l_1145 >= 0); l_1145 -= 1)
                    {
                        int i, j;
                        if (g_1150[(g_1067 + 4)][(g_1067 + 1)])
                            break;
                        g_593 = p_22;
                        (*l_1198) = (((*g_101) = g_1150[(g_1067 + 4)][(g_1067 + 1)]) & ((l_1280[3][0] != (l_1282 = l_1281)) > 0xD36BEBECL));
                    }
                }
                (*l_1292) = func_32(l_1283, (safe_sub_func_int16_t_s_s(g_1150[(g_1067 + 2)][g_1067], p_23)), g_1150[(g_1067 + 2)][g_1067], (*g_101));
                for (g_827 = 0; (g_827 <= 5); g_827 += 1)
                {
                    int ***l_1298[5][2][8] = {{{&l_1295[2][3],(void*)0,(void*)0,(void*)0,&l_1295[2][3],&l_1292,&l_1295[2][1],(void*)0},{&l_1292,&l_1295[2][3],&l_1295[2][3],&l_1292,(void*)0,&l_1292,&l_1295[2][3],&l_1295[2][3]}},{{&l_1295[0][1],(void*)0,&l_1295[2][3],&l_1292,(void*)0,&l_1292,&l_1295[2][3],(void*)0},{&l_1295[2][3],&l_1295[3][2],&l_1292,(void*)0,(void*)0,&l_1295[2][3],&l_1292,&l_1292}},{{&l_1292,&l_1292,&l_1292,&l_1295[2][3],&l_1295[2][3],&l_1295[1][4],&l_1292,&l_1295[2][3]},{&l_1292,&l_1295[2][3],&l_1292,&l_1295[2][3],&l_1295[2][3],&l_1295[2][3],&l_1295[2][3],&l_1292}},{{&l_1295[2][3],&l_1295[2][3],(void*)0,&l_1292,&l_1292,&l_1292,&l_1295[0][1],&l_1292},{&l_1295[3][2],(void*)0,&l_1292,(void*)0,&l_1295[2][1],&l_1292,&l_1292,&l_1292}},{{(void*)0,&l_1295[2][3],&l_1292,&l_1292,&l_1295[2][3],(void*)0,&l_1295[2][3],&l_1292},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1292,(void*)0,(void*)0,(void*)0}}};
                    short l_1300 = 0x8E94L;
                    int i, j, k;
                }
            }
        }
    }
    return p_22;
}







static int * func_24(unsigned short p_25, int * p_26, int * p_27)
{
    short *l_56 = &g_57;
    int l_58 = 0xB91300D3L;
    int l_59 = 4L;
    unsigned l_370[9];
    char **l_1087[8][2][6] = {{{&g_706[5][3],&g_706[5][3],&g_706[2][5],&g_706[1][9],&g_706[2][8],(void*)0},{&g_706[1][9],&g_706[5][3],&g_706[5][3],(void*)0,&g_706[5][3],(void*)0}},{{&g_706[1][9],&g_706[5][3],&g_706[1][9],&g_706[1][9],&g_706[5][3],&g_706[1][9]},{&g_706[5][3],&g_706[2][8],&g_706[2][3],&g_706[1][9],&g_706[5][1],&g_706[4][8]}},{{&g_706[1][9],&g_706[5][3],&g_706[5][3],(void*)0,&g_706[5][3],&g_706[2][5]},{&g_706[1][9],&g_706[5][3],(void*)0,&g_706[1][9],&g_706[5][3],&g_706[5][3]}},{{&g_706[5][3],&g_706[5][1],(void*)0,&g_706[1][9],&g_706[5][3],&g_706[1][9]},{&g_706[1][9],&g_706[5][3],&g_706[1][9],(void*)0,&g_706[5][3],&g_706[2][3]}},{{&g_706[1][9],&g_706[5][3],&g_706[4][8],&g_706[1][9],&g_706[5][3],&g_706[5][3]},{&g_706[5][3],&g_706[5][3],&g_706[2][5],&g_706[1][9],&g_706[2][8],(void*)0}},{{&g_706[1][9],&g_706[5][3],&g_706[5][3],(void*)0,&g_706[1][9],&g_706[1][1]},{&g_706[5][3],&g_706[5][3],&g_706[5][0],&g_706[5][0],&g_706[5][3],&g_706[5][3]}},{{&g_706[0][4],&g_706[2][5],&g_706[3][9],&g_706[5][0],(void*)0,&g_706[1][1]},{&g_706[5][3],(void*)0,&g_706[5][3],(void*)0,&g_706[4][8],(void*)0}},{{&g_706[5][3],&g_706[5][3],(void*)0,&g_706[5][0],&g_706[5][3],&g_706[0][4]},{&g_706[0][4],(void*)0,&g_706[1][1],&g_706[5][0],&g_706[2][3],&g_706[5][0]}}};
    int *l_1120[10][5][4] = {{{&g_1102,&g_4,(void*)0,&g_1102},{&g_1102,(void*)0,&g_1102,&g_4},{&g_85,&g_908,&g_908,&g_908},{&g_908,&g_908,(void*)0,(void*)0},{&g_1060[0],&g_1102,&g_1060[0],&g_1060[0]}},{{(void*)0,(void*)0,&g_4,&g_908},{&g_1102,&g_908,&l_58,(void*)0},{&g_908,&g_4,(void*)0,&l_58},{&g_4,&g_4,&g_4,(void*)0},{&g_4,&g_908,&g_1102,&g_908}},{{&g_1060[1],(void*)0,&g_1060[0],&g_1060[0]},{(void*)0,&g_1102,&l_58,(void*)0},{&g_1060[0],&g_908,&g_85,&g_908},{&l_58,&g_908,(void*)0,&g_4},{&g_1060[0],(void*)0,(void*)0,&g_1102}},{{&g_908,&g_4,&g_1102,&g_1102},{(void*)0,&g_908,&g_1060[0],&g_1102},{(void*)0,&g_1102,&g_4,&g_1060[0]},{(void*)0,(void*)0,&g_1102,&g_1102},{&g_908,&g_1060[0],&g_1102,&g_1060[0]}},{{&g_1060[0],&g_908,&g_908,&g_1060[0]},{(void*)0,&g_85,&g_1060[0],&g_4},{&g_908,&g_1102,&g_4,&l_58},{&g_1102,&g_1102,&g_1060[0],&l_58},{&g_1060[1],&g_1102,(void*)0,&g_4}},{{(void*)0,&g_85,&g_1102,&g_1060[0]},{&l_58,&g_908,&g_908,&g_1060[0]},{&g_1102,&g_1060[0],&g_85,&g_1102},{&g_4,(void*)0,&g_4,&g_1060[0]},{&g_1102,&g_1102,(void*)0,&g_1102}},{{&g_908,&g_908,&g_1060[0],&g_1102},{&g_1060[0],&g_4,&g_1060[0],&g_908},{&g_908,&g_4,(void*)0,&g_908},{&g_1102,&g_1060[1],&g_4,(void*)0},{&g_4,(void*)0,&g_85,&g_4}},{{&g_1102,&g_1060[0],&g_908,&g_908},{&l_58,&l_58,&g_1102,&g_1060[1]},{(void*)0,&g_1060[0],(void*)0,&g_85},{&g_1060[1],&g_908,&g_1060[0],(void*)0},{&g_1102,&g_908,&g_1102,&g_1060[1]}},{{&l_58,&g_4,&g_1060[0],&g_1060[0]},{(void*)0,&g_1060[0],&g_908,(void*)0},{&g_1060[0],&g_1060[0],(void*)0,&g_1102},{&g_908,&g_1102,(void*)0,&g_1102},{&g_908,&g_1060[0],&g_1102,&l_58}},{{&g_4,&g_1102,&g_4,&g_1102},{&g_1102,&g_1102,&g_908,&g_908},{&g_1102,&g_908,&g_4,(void*)0},{&g_4,&g_908,&g_1102,&g_4},{&g_908,(void*)0,(void*)0,(void*)0}}};
    unsigned short l_1122 = 0xC5C7L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_370[i] = 4294967295UL;
    (*p_27) = (func_29(func_32((func_37((safe_lshift_func_uint8_t_u_s((g_2[3] && p_25), p_25)), (0xB7L > 1UL), p_27, ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(g_2[0], (safe_lshift_func_uint8_t_u_s(((((*l_56) = g_2[4]) != ((!(1UL <= l_58)) ^ l_58)) , 0x3EL), 6)))) < l_58), g_4)), 0x618DE0F4L)), l_59)), 5)) | l_58)) , &g_4), l_370[1], p_25, l_370[1]), l_58) , l_59);
    for (g_1069 = 0; (g_1069 > 38); g_1069 = safe_add_func_int16_t_s_s(g_1069, 2))
    {
        char ***l_1088 = &l_1087[7][1][4];
        short *l_1096 = &g_2[0];
        int l_1101 = 0x804B6816L;
        int l_1111 = 0xF7542417L;
        int *l_1115 = &g_1102;
        short l_1118[4][9];
        int *l_1121 = (void*)0;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 9; j++)
                l_1118[i][j] = 0L;
        }
        (*l_1088) = l_1087[7][1][4];
        for (p_25 = 0; (p_25 <= 1); p_25 += 1)
        {
            int **l_1089[2][10] = {{&g_593,&g_146,&g_146,&g_593,&g_146,&g_593,&g_146,&g_146,&g_593,&g_146},{&g_593,&g_146,&g_146,&g_593,&g_146,&g_593,&g_146,&g_146,&g_593,&g_146}};
            short *l_1099[6][5][1] = {{{&g_90},{&g_90},{&g_57},{&g_90},{&g_90}},{{&g_2[0]},{&g_90},{&g_90},{&g_57},{&g_90}},{{&g_90},{&g_2[0]},{&g_90},{&g_90},{&g_57}},{{&g_90},{&g_90},{&g_2[0]},{&g_90},{&g_90}},{{&g_57},{&g_90},{&g_90},{&g_2[0]},{&g_90}},{{&g_90},{&g_57},{&g_90},{&g_90},{&g_2[0]}}};
            short **l_1100 = &l_1099[5][1][0];
            unsigned l_1112 = 0xEE7E1FF2L;
            int i, j, k;
            g_146 = (((**g_889) == (**g_889)) , &g_1060[1]);
            (*p_27) = (safe_sub_func_uint16_t_u_u(func_37((**g_1055), l_59, &g_908, p_25), g_1102));
            for (g_1067 = 0; (g_1067 <= 4); g_1067 += 1)
            {
                char l_1113 = 0x06L;
                l_1113 = ((*g_593) = (p_25 & (((safe_lshift_func_int16_t_s_s(((*l_1096) = p_25), 10)) && ((((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(p_25, 14)), ((*g_593) , 0x8BF2L))) >= 0x1BL), (l_58 <= l_1101))) && p_25) ^ p_25) && 0xB585E2CAL)) > l_1112)));
            }
            for (g_147 = 0; (g_147 <= 1); g_147 += 1)
            {
                int *l_1119[6][9][4] = {{{&g_908,&l_58,&g_1102,&g_85},{&l_58,&g_1102,&g_85,&g_908},{&l_58,(void*)0,&g_908,&l_1101},{&g_1060[1],(void*)0,&g_1060[1],&g_908},{&g_1102,&g_1102,(void*)0,&g_1102},{(void*)0,&g_908,&g_85,&g_1060[1]},{(void*)0,&g_4,(void*)0,&l_58},{&g_85,&l_58,&g_1102,&l_58},{&g_85,&l_58,(void*)0,&g_4}},{{(void*)0,&l_58,&g_85,&l_58},{(void*)0,&g_908,(void*)0,(void*)0},{&g_1102,&g_4,&g_1060[1],&g_1102},{&g_1060[1],&l_58,&g_908,&g_1102},{&l_58,&g_4,&g_85,(void*)0},{&l_58,&g_908,&l_58,&l_58},{&g_908,&l_58,&g_85,&g_4},{&g_1060[1],&l_58,&g_4,&l_58},{&g_1060[1],&l_58,&g_4,&l_58}},{{&g_1060[1],&g_4,&g_85,&g_1060[1]},{&g_908,&g_908,&l_58,&g_1102},{&l_58,&g_1102,&g_85,&g_908},{&l_58,(void*)0,&g_908,&l_1101},{&g_1060[1],(void*)0,&g_1060[1],&g_908},{&g_1102,&g_1102,(void*)0,&g_1102},{(void*)0,&g_908,&g_85,&l_1101},{&g_1102,&g_1102,&l_58,(void*)0},{&g_85,&l_58,&g_4,&l_58}},{{&g_85,&g_1102,&l_58,&g_908},{&g_1102,&l_58,&g_908,(void*)0},{&g_85,&l_58,&g_1102,&g_4},{&g_4,&g_908,&g_85,&g_908},{&l_58,(void*)0,&g_1060[1],&g_908},{(void*)0,&g_908,&g_1060[1],&g_4},{&g_1060[1],&l_58,&g_1060[1],(void*)0},{&g_1060[1],&l_58,&g_85,&g_908},{(void*)0,&g_1102,&g_1060[0],&l_58}},{{&l_1101,&l_58,&g_1060[0],(void*)0},{(void*)0,&g_1102,&g_85,&l_1101},{&g_1060[1],&g_1060[1],&g_1060[1],&g_4},{&g_1060[1],&g_4,&g_1060[1],&l_58},{(void*)0,&g_85,&g_1060[1],&l_58},{&l_58,&g_85,&g_85,&l_58},{&g_4,&g_4,&g_1102,&g_4},{&g_85,&g_1060[1],&g_908,&l_1101},{&g_1102,&g_1102,&l_58,(void*)0}},{{&g_85,&l_58,&g_4,&l_58},{&g_85,&g_1102,&l_58,&g_908},{&g_1102,&l_58,&g_908,(void*)0},{&g_85,&l_58,&l_58,&g_1060[1]},{&g_1060[1],&l_1101,&l_58,(void*)0},{&g_4,&g_1060[1],&g_1060[1],(void*)0},{(void*)0,&l_1101,&g_1102,&g_1060[1]},{(void*)0,&l_58,(void*)0,&l_58},{&g_1060[1],&g_908,(void*)0,&l_1101}}};
                int i, j, k;
                for (g_1067 = 0; (g_1067 <= 1); g_1067 += 1)
                {
                    int *l_1114[8][10][3] = {{{&g_908,&g_85,&g_1060[1]},{&g_908,(void*)0,&l_1101},{&g_1102,(void*)0,&g_1060[1]},{&g_1060[1],(void*)0,&l_1101},{&g_1060[1],&g_4,&l_58},{(void*)0,&g_1060[1],&l_1101},{&g_1060[1],&g_908,&g_1060[1]},{&g_908,&g_908,&l_1101},{&g_4,&l_58,&g_1060[1]},{&g_4,&l_58,&l_1101}},{{&g_1060[1],(void*)0,&l_58},{&g_4,&g_4,&l_1101},{&g_1060[1],&g_1102,&g_1060[1]},{(void*)0,&g_908,&l_1101},{&l_58,&g_1102,&g_1060[1]},{&g_1060[1],&g_4,&l_1101},{(void*)0,&l_58,&l_58},{&l_58,&g_1060[1],&l_1101},{&g_908,&g_85,&g_1060[1]},{&g_908,(void*)0,&l_1101}},{{&g_1102,(void*)0,&g_1060[1]},{&g_1060[1],(void*)0,&l_1101},{&g_1060[1],&g_4,&l_58},{(void*)0,&g_1060[1],&l_1101},{&g_1060[1],&g_908,&g_1060[1]},{&l_58,&l_58,&g_1060[1]},{(void*)0,&g_908,&g_1060[1]},{&g_908,&g_1060[1],&g_1060[1]},{&g_1102,&l_58,&g_1060[1]},{(void*)0,&g_908,&g_1060[1]}},{{&g_1102,&g_4,&g_1060[1]},{&l_58,&l_58,&g_1060[1]},{(void*)0,&g_1060[1],&g_1060[1]},{&g_1060[0],(void*)0,&g_1060[1]},{&g_908,(void*)0,&g_1060[1]},{&g_1060[1],&l_58,&g_1060[1]},{(void*)0,&l_1101,&g_1060[1]},{&l_58,&l_58,&g_1060[1]},{(void*)0,(void*)0,&g_1060[1]},{&l_58,&g_1060[0],&g_1060[1]}},{{&g_1060[0],&g_85,&g_1060[1]},{&g_1060[0],&g_1060[0],&g_1060[1]},{(void*)0,(void*)0,&g_1060[1]},{&l_58,&l_58,&g_1060[1]},{(void*)0,&g_908,&g_1060[1]},{&g_908,&g_1060[1],&g_1060[1]},{&g_1102,&l_58,&g_1060[1]},{(void*)0,&g_908,&g_1060[1]},{&g_1102,&g_4,&g_1060[1]},{&l_58,&l_58,&g_1060[1]}},{{(void*)0,&g_1060[1],&g_1060[1]},{&g_1060[0],(void*)0,&g_1060[1]},{&g_908,(void*)0,&g_1060[1]},{&g_1060[1],&l_58,&g_1060[1]},{(void*)0,&l_1101,&g_1060[1]},{&l_58,&l_58,&g_1060[1]},{(void*)0,(void*)0,&g_1060[1]},{&l_58,&g_1060[0],&g_908},{(void*)0,&g_4,&g_1060[1]},{&g_1060[0],&l_58,&g_908}},{{&g_1060[0],&g_908,&g_1060[1]},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_85,&g_1060[1]},{&l_58,&g_908,&g_908},{(void*)0,&l_1101,&g_1060[1]},{&l_58,&l_58,&g_908},{&g_1102,&g_1060[1],&g_1060[1]},{&g_1060[1],&g_1060[0],(void*)0},{(void*)0,&l_58,&g_1060[1]},{&l_58,&l_58,&g_908}},{{(void*)0,(void*)0,&g_1060[1]},{&g_908,&l_58,&g_908},{&g_908,(void*)0,&g_1060[1]},{&g_1060[0],&g_1060[1],(void*)0},{&g_1102,(void*)0,&g_1060[1]},{&l_58,&g_1060[0],&g_908},{(void*)0,&g_4,&g_1060[1]},{&g_1060[0],&l_58,&g_908},{&g_1060[0],&g_908,&g_1060[1]},{(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    l_1115 = (l_1114[7][7][0] = p_27);
                }
                for (l_1111 = 1; (l_1111 <= 4); l_1111 += 1)
                {
                    l_1118[3][5] = (l_58 = ((*l_1115) = (safe_lshift_func_uint16_t_u_s(p_25, 3))));
                    l_1120[8][3][1] = func_32(&g_1060[1], p_25, p_25, (*g_101));
                    for (g_1102 = 0; (g_1102 >= 0); g_1102 -= 1)
                    {
                        return p_27;
                    }
                    for (g_119 = 0; (g_119 <= 1); g_119 += 1)
                    {
                        p_27 = (p_26 = &l_1101);
                        return l_1121;
                    }
                }
                (*g_593) = (*g_593);
            }
            for (g_183 = 0; (g_183 <= 4); g_183 += 1)
            {
                l_1120[8][4][1] = p_26;
            }
        }
        if (l_1122)
            break;
        (*l_1115) = (*p_27);
    }
    (*g_593) = 0x731EC5C9L;
    return &g_4;
}







static unsigned func_29(int * p_30, unsigned p_31)
{
    unsigned short l_422 = 0x495DL;
    int l_438 = 0xB48486EEL;
    char l_476 = 0xC3L;
    int *l_478 = &g_85;
    int l_503 = 0xBEAA13F8L;
    int **l_505 = (void*)0;
    unsigned char l_606[1];
    unsigned char **l_660[1];
    short l_670[3];
    char l_704 = 0x1AL;
    int l_727 = 0x1CA9B4B1L;
    unsigned l_748[2];
    unsigned short l_766[5][4][10] = {{{0x9AD9L,0x87A1L,2UL,1UL,0xF55CL,2UL,65535UL,65535UL,8UL,0x95D8L},{0xF55CL,7UL,0xD5ABL,1UL,65533UL,0UL,0xF55CL,3UL,3UL,0xF55CL},{65527UL,65535UL,65533UL,65533UL,65535UL,2UL,0x7D15L,3UL,65532UL,0xDEF1L},{0x2383L,3UL,0x87A1L,65527UL,0xD5ABL,7UL,0UL,65535UL,7UL,65533UL}},{{0x2383L,65532UL,65535UL,0x2383L,65535UL,2UL,65533UL,2UL,65535UL,0x2383L},{2UL,65533UL,2UL,65535UL,0x2383L,65535UL,65532UL,0x2383L,65535UL,0xDEF1L},{65535UL,0UL,7UL,0xD5ABL,65527UL,0x87A1L,3UL,0x2383L,7UL,7UL},{3UL,0x7D15L,2UL,65535UL,65535UL,65535UL,65535UL,2UL,0x7D15L,3UL}},{{0xDEF1L,65535UL,65535UL,65535UL,7UL,0xABCBL,65532UL,65535UL,2UL,8UL},{65535UL,0x2383L,0x87A1L,65535UL,7UL,0x87A1L,0xD5ABL,3UL,65535UL,3UL},{7UL,65532UL,65535UL,0UL,65535UL,65532UL,7UL,0xDEF1L,8UL,7UL},{2UL,65527UL,0xABCBL,65535UL,65527UL,8UL,0x7D15L,65535UL,65535UL,0xDEF1L}},{{65535UL,65533UL,0xF55CL,0x2383L,7UL,65535UL,65535UL,65535UL,65535UL,7UL},{0UL,8UL,8UL,0UL,65532UL,65535UL,65535UL,65535UL,0x7D15L,0UL},{65535UL,7UL,0xABCBL,65532UL,65535UL,2UL,8UL,65535UL,0x7D15L,65535UL},{3UL,65527UL,65535UL,0UL,0xD5ABL,0xF55CL,0xD5ABL,0UL,65535UL,65527UL}},{{65533UL,2UL,65535UL,0x2383L,65535UL,65532UL,0x2383L,65535UL,0xDEF1L,65533UL},{65535UL,3UL,2UL,65535UL,65527UL,65532UL,8UL,3UL,0xABCBL,0xABCBL},{65533UL,0UL,0xF55CL,3UL,3UL,0xF55CL,0UL,65533UL,1UL,0xD5ABL},{3UL,8UL,65532UL,65527UL,65535UL,2UL,3UL,65535UL,65535UL,3UL}}};
    unsigned char l_783[10] = {6UL,253UL,6UL,253UL,6UL,253UL,6UL,253UL,6UL,253UL};
    short l_854 = 7L;
    int l_907 = 1L;
    int **l_917 = &g_221[4];
    unsigned short l_978 = 0x5834L;
    int **l_994 = &g_593;
    unsigned l_1027 = 4294967295UL;
    int l_1032 = (-1L);
    unsigned **l_1059 = (void*)0;
    int l_1083[7];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_606[i] = 0xDCL;
    for (i = 0; i < 1; i++)
        l_660[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_670[i] = 1L;
    for (i = 0; i < 2; i++)
        l_748[i] = 4294967288UL;
    for (i = 0; i < 7; i++)
        l_1083[i] = 0x9B6ED0FBL;
    (*p_30) = (l_422 <= l_422);
    if (((0xD9B0C3B2L < 0x45AA4533L) >= l_422))
    {
        char l_423 = (-1L);
        return l_423;
    }
    else
    {
        char l_446 = 1L;
        int *l_452 = &g_4;
        unsigned l_473 = 0xE0C308B3L;
        unsigned char ***l_521 = &g_100[3][1][2];
        char *l_534 = &g_445;
        char **l_533 = &l_534;
        int l_556[5][10] = {{0xE9C794C2L,0x44D341ACL,0x44D341ACL,0xE9C794C2L,0x7C282B3CL,0x39A00F54L,0xE9C794C2L,0x313EA6C6L,0x6D54DAE2L,0x6D54DAE2L},{0xE9C794C2L,0x6D54DAE2L,0x7C282B3CL,0xE89AD5E6L,0xE89AD5E6L,0x7C282B3CL,0x6D54DAE2L,0xE9C794C2L,0x6D54DAE2L,0x7C282B3CL},{0x39A00F54L,0x313EA6C6L,0xE89AD5E6L,0x313EA6C6L,0x39A00F54L,0x7C282B3CL,0x7C282B3CL,0x39A00F54L,0x313EA6C6L,0xE89AD5E6L},{0xE9C794C2L,0xE9C794C2L,0xE89AD5E6L,0x39A00F54L,0x44D341ACL,0x39A00F54L,0xE89AD5E6L,0xE9C794C2L,0xE9C794C2L,0xE89AD5E6L},{0x313EA6C6L,0x39A00F54L,0x7C282B3CL,0x7C282B3CL,0x39A00F54L,0x313EA6C6L,0xE89AD5E6L,0x313EA6C6L,0x39A00F54L,0x7C282B3CL}};
        unsigned *l_575 = &g_576;
        unsigned *l_579 = &g_580;
        char *l_585 = &l_476;
        char *l_588 = (void*)0;
        char *l_589 = &g_348;
        char l_609 = 3L;
        unsigned short l_647[7] = {0x8E19L,7UL,0x8E19L,0x8E19L,7UL,0x8E19L,0x8E19L};
        unsigned char l_652 = 2UL;
        unsigned l_726 = 0x26E887D2L;
        unsigned char l_759 = 255UL;
        int **l_762 = &g_221[2];
        int l_769 = 0x432A6FAFL;
        int l_829 = 0L;
        short ***l_864[1];
        char l_920 = 0x0EL;
        int l_921 = 0x0EE18B7FL;
        unsigned char l_982[1];
        int l_983 = 0xDF0A0DACL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_864[i] = &g_107;
        for (i = 0; i < 1; i++)
            l_982[i] = 9UL;
        for (g_158 = (-20); (g_158 >= 9); g_158 = safe_add_func_uint16_t_u_u(g_158, 9))
        {
            int l_435 = (-1L);
            int l_437 = (-7L);
            unsigned l_462 = 0UL;
            short *l_481[1][9][4] = {{{&g_57,(void*)0,(void*)0,&g_57},{(void*)0,(void*)0,&g_90,&g_57},{&g_57,(void*)0,(void*)0,&g_57},{(void*)0,(void*)0,&g_90,&g_57},{&g_57,(void*)0,(void*)0,&g_57},{(void*)0,(void*)0,&g_90,&g_57},{&g_57,(void*)0,(void*)0,&g_57},{(void*)0,(void*)0,&g_90,&g_57},{&g_57,(void*)0,(void*)0,&g_57}}};
            int *l_482[10];
            int **l_506 = &g_221[4];
            char *l_531 = &l_476;
            char **l_530[5][5][4] = {{{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0},{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0}},{{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0},{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0}},{{(void*)0,&l_531,&l_531,(void*)0},{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0},{&l_531,(void*)0,&l_531,&l_531}},{{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0},{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0}},{{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0},{(void*)0,&l_531,&l_531,(void*)0},{&l_531,(void*)0,&l_531,&l_531},{(void*)0,(void*)0,&l_531,(void*)0}}};
            int *l_551 = &l_503;
            int l_564 = 0xDEB56899L;
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_482[i] = (void*)0;
        }
        if ((safe_div_func_int8_t_s_s(((*l_452) , (~(((*l_575) = (g_119 = g_445)) < ((*l_579) = (safe_sub_func_uint32_t_u_u(p_31, (*l_478))))))), ((*l_589) = (safe_mod_func_int8_t_s_s((+p_31), (safe_lshift_func_int8_t_s_u(((*l_585) = 0x25L), (safe_sub_func_int32_t_s_s(g_90, 0xDE482C3CL))))))))))
        {
            short l_591 = 0xD04FL;
            int *l_594 = &l_503;
            unsigned char l_608 = 0x0DL;
            int l_614 = 3L;
            int l_628 = 2L;
            int l_702 = 1L;
            for (g_580 = 0; (g_580 <= 2); g_580 += 1)
            {
                unsigned l_599 = 4294967293UL;
                unsigned short *l_602 = (void*)0;
                int l_619 = (-4L);
                unsigned char l_636[1][9][1] = {{{0xB7L},{0xDDL},{0xB7L},{0xDDL},{0xB7L},{0xDDL},{0xB7L},{0xDDL},{0xB7L}}};
                short l_637[9][5][1] = {{{0x9A94L},{0xA0EFL},{(-1L)},{(-1L)},{0xA0EFL}},{{0x9A94L},{(-8L)},{0x82A7L},{(-1L)},{(-8L)}},{{0L},{(-8L)},{(-1L)},{0x82A7L},{(-8L)}},{{0x9A94L},{0xA0EFL},{(-1L)},{(-1L)},{0xA0EFL}},{{0x9A94L},{(-8L)},{0x82A7L},{(-1L)},{(-8L)}},{{0L},{(-8L)},{(-1L)},{0x82A7L},{(-8L)}},{{0x9A94L},{0xA0EFL},{(-1L)},{(-1L)},{0xA0EFL}},{{0x9A94L},{(-8L)},{0x82A7L},{(-1L)},{(-8L)}},{{0L},{(-8L)},{(-1L)},{0x82A7L},{(-8L)}}};
                unsigned char l_638 = 255UL;
                unsigned char ***l_703 = &l_660[0];
                int *l_729[5][4][2] = {{{&l_438,&g_4},{&l_438,&g_4},{(void*)0,&l_556[0][8]},{&l_503,(void*)0}},{{&l_438,&g_85},{&l_438,(void*)0},{&l_503,&l_556[0][8]},{(void*)0,&g_4}},{{&l_438,&g_4},{&l_438,&l_438},{&l_438,&l_503},{(void*)0,&l_503}},{{&l_438,&l_438},{&l_438,&g_4},{&l_438,&g_4},{(void*)0,&l_556[0][8]}},{{&l_503,(void*)0},{&l_438,&g_85},{&l_438,(void*)0},{&l_503,&l_556[0][8]}}};
                int i, j, k;
            }
            (*l_478) = ((*l_452) = (safe_add_func_uint8_t_u_u((l_660[0] == (void*)0), (((*l_452) , (void*)0) != ((safe_div_func_uint16_t_u_u((*l_478), p_31)) , (void*)0)))));
            for (l_446 = 0; (l_446 <= 9); l_446 = safe_add_func_int8_t_s_s(l_446, 2))
            {
                for (g_183 = 0; (g_183 <= 17); ++g_183)
                {
                    (*l_478) = (*p_30);
                    (*p_30) = ((void*)0 == l_505);
                }
            }
        }
        else
        {
            char l_760 = (-1L);
            int ***l_761[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int l_772 = 0xD72DC826L;
            int **l_775 = &g_221[2];
            int i, j;
            for (g_529 = 0; (g_529 > 7); g_529++)
            {
            }
            (*p_30) = (((l_762 = (void*)0) == ((*l_452) , (void*)0)) | (safe_mod_func_int32_t_s_s((l_772 = ((((safe_unary_minus_func_uint32_t_u(4294967291UL)) , (l_766[2][0][0] >= (safe_add_func_int16_t_s_s((l_769 , ((*p_30) >= (+(p_31 ^ (safe_rshift_func_uint16_t_u_u(0x0B83L, 8)))))), 0xC4A3L)))) >= 0UL) != p_31)), 0x1DC600B9L)));
            if ((((l_772 , (*l_478)) || ((safe_lshift_func_uint8_t_u_u(((*g_101) = (p_31 > (&g_221[1] != (l_775 = &g_221[3])))), (5L == (0x51DA50D5L || (safe_sub_func_int32_t_s_s((*p_30), (*p_30))))))) && 65528UL)) == 0xD8AF944FL))
            {
                char l_782 = 0x7EL;
                (*l_478) = (safe_lshift_func_int8_t_s_u(0xD9L, (safe_sub_func_uint32_t_u_u((g_57 , l_782), ((((&l_762 == &g_220) , l_783[4]) , (*l_452)) == ((*g_101) = (((((*l_575) = p_31) && ((safe_sub_func_uint32_t_u_u(((*p_30) , p_31), (*p_30))) > 0x7357L)) , l_760) , l_782)))))));
                (*p_30) = (0x1304L <= 65532UL);
                (*l_452) = (safe_sub_func_uint32_t_u_u(p_31, p_31));
            }
            else
            {
                int **l_790 = &l_452;
                (*l_790) = (((*l_579) = 0xD68A1644L) , (void*)0);
                (*p_30) = (*p_30);
            }
        }
        (*p_30) = (safe_mod_func_uint8_t_u_u(((void*)0 == &g_220), p_31));
        if ((*g_593))
        {
            unsigned short l_796 = 0xA58CL;
            unsigned short *l_804 = (void*)0;
            unsigned short *l_805 = &l_422;
            int *l_810 = &l_769;
            char l_811[2][9][1] = {{{(-5L)},{1L},{0x59L},{1L},{(-5L)},{(-1L)},{(-5L)},{1L},{0x59L}},{{1L},{(-5L)},{(-1L)},{(-5L)},{1L},{0x59L},{1L},{(-5L)},{(-1L)}}};
            int l_848 = 7L;
            int i, j, k;
            (*l_478) = 0xDED3F9DBL;
            for (l_473 = (-7); (l_473 <= 18); ++l_473)
            {
                int **l_795 = &l_452;
                (*l_795) = &g_85;
                (*l_795) = &g_85;
                return l_796;
            }
            if (((((*l_478) = ((*g_593) || ((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u(((*l_805) = 1UL), 4)) <= (*l_478)) ^ ((*g_593) , (safe_rshift_func_int8_t_s_s((p_31 && ((*g_593) = (safe_rshift_func_uint16_t_u_s(((p_31 || ((((*l_810) = l_796) , &l_748[1]) == &l_748[1])) , p_31), 0)))), 6)))) , p_31), l_796)))) >= 2L), p_31)) > p_31))) >= 0xBA9270CFL) & l_811[1][7][0]))
            {
                unsigned short l_820[9] = {0x1A5CL,0x1A5CL,0x1A5CL,0x1A5CL,0x1A5CL,0x1A5CL,0x1A5CL,0x1A5CL,0x1A5CL};
                int *l_828 = &l_503;
                int l_834[2][2];
                unsigned short **l_841 = (void*)0;
                int l_847 = 1L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_834[i][j] = 0x85EE1BFBL;
                }
                if ((p_31 , 0L))
                {
                    int l_832 = 0xC994E930L;
                    for (g_147 = 3; (g_147 > 16); g_147 = safe_add_func_uint32_t_u_u(g_147, 1))
                    {
                        p_30 = func_32(&g_4, ((*l_805) = l_832), p_31, l_832);
                    }
                    return p_31;
                }
                else
                {
                    char l_833 = 0x75L;
                    int **l_844 = &g_146;
                    (*l_844) = func_32(p_30, p_31, (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((l_841 != (void*)0), (safe_div_func_int16_t_s_s(0x512CL, (*l_828))))) <= 0xF4DFL), 0xD7D599FCL)), p_31)), (*g_101));
                }
                l_848 = (safe_mod_func_uint32_t_u_u((*l_478), (l_847 & (p_31 , ((*l_478) != (~(((*l_575) = p_31) || (&l_796 != &l_647[1]))))))));
                for (g_580 = 0; (g_580 <= 0); g_580 += 1)
                {
                    int l_849 = 0x37E84C94L;
                    for (g_57 = 4; (g_57 >= 1); g_57 -= 1)
                    {
                        if (l_849)
                            break;
                    }
                    p_30 = &g_4;
                }
                for (l_848 = (-6); (l_848 != (-26)); --l_848)
                {
                    char l_858[8][1] = {{(-1L)},{(-1L)},{1L},{(-1L)},{(-1L)},{1L},{(-1L)},{(-1L)}};
                    int i, j;
                    for (g_119 = 28; (g_119 < 30); g_119 = safe_add_func_uint32_t_u_u(g_119, 1))
                    {
                        p_30 = &g_85;
                        (*p_30) = ((*l_828) > (*l_828));
                        g_146 = &l_438;
                    }
                    p_30 = ((&g_706[0][7] == &g_706[5][3]) , &g_4);
                    if (l_854)
                        break;
                }
            }
            else
            {
                (*g_593) = 0L;
            }
        }
        else
        {
            int **l_859 = (void*)0;
            int **l_860 = &g_146;
            int *l_873 = (void*)0;
            int l_880 = 1L;
            unsigned l_930 = 0x68D8BE6AL;
            unsigned l_947 = 0xDF575F09L;
            (*l_860) = p_30;
            for (g_827 = 17; (g_827 != 24); ++g_827)
            {
                int *l_863 = (void*)0;
                short ****l_865 = &l_864[0];
                short ***l_866 = &g_107;
                short ***l_868 = &g_107;
                short ****l_867 = &l_868;
                unsigned short *l_874 = &l_422;
                unsigned short *l_875 = (void*)0;
                unsigned short *l_876[4][1] = {{&l_647[3]},{&l_647[1]},{&l_647[3]},{&l_647[1]}};
                unsigned l_966 = 0xEB95833EL;
                unsigned l_977 = 2UL;
                int i, j;
                if (((*l_478) = ((((**l_860) = ((*l_874) = ((((*g_220) = l_873) == &g_645[5][1][0]) || p_31))) , (*l_478)) , (*g_146))))
                {
                    int *l_879 = (void*)0;
                    for (g_576 = 0; (g_576 <= 20); ++g_576)
                    {
                        (*l_478) = 0x371334ACL;
                        (*l_860) = l_879;
                        return l_880;
                    }
                    if ((*g_593))
                        continue;
                    if (((*g_146) = (*p_30)))
                    {
                        unsigned char l_881 = 0UL;
                        int l_892 = 0xC70A3919L;
                        int ***l_893[9] = {&l_762,&l_762,&l_762,&l_762,&l_762,&l_762,&l_762,&l_762,&l_762};
                        int i;
                        (*l_860) = func_32((p_31 , func_32(&g_85, p_31, p_31, p_31)), ((((*l_579) = (l_881 ^ (!(p_31 && ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_31, p_31)) <= (*p_30)), p_31)) || p_31))))) != p_31) == l_881), p_31, p_31);
                        l_505 = (((p_31 , (((*l_579) = (**l_860)) == ((safe_div_func_int32_t_s_s((*g_593), (p_31 | 0L))) , (l_892 = (g_888 == (((safe_sub_func_uint16_t_u_u((~p_31), 6UL)) | 1L) , &l_866)))))) , 0x9E2B92FDL) , (void*)0);
                    }
                    else
                    {
                        char ***l_905[9];
                        int *l_906 = (void*)0;
                        unsigned *l_919 = &g_183;
                        unsigned **l_918 = &l_919;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_905[i] = &g_705;
                        (*g_593) = (safe_add_func_uint8_t_u_u((p_31 , 1UL), 251UL));
                        (**l_860) = ((((p_31 <= (g_908 ^ 1UL)) <= p_31) ^ (((g_90 , (-1L)) , p_31) == (0x6CF5L && p_31))) <= 65534UL);
                        (*g_146) = (((safe_mod_func_uint32_t_u_u((((((-6L) != p_31) & ((*l_585) = (safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((((*g_101) = (((((*g_146) ^ (-1L)) && 0x0D5A9B4AL) < (*g_593)) < 0x6E7BL)) , (**l_860)) > p_31), p_31)), g_922[1])))) , (*p_30)) ^ p_31), 0xFCCB800BL)) < p_31) == p_31);
                    }
                    return p_31;
                }
                else
                {
                    unsigned l_929 = 1UL;
                    unsigned char ***l_944 = (void*)0;
                    int *l_950 = (void*)0;
                    for (l_503 = 18; (l_503 <= 17); l_503--)
                    {
                        int l_925 = (-1L);
                        if ((*p_30))
                            break;
                        (*l_478) = ((p_31 & p_31) | p_31);
                        if ((*p_30))
                            continue;
                        if ((*p_30))
                            break;
                    }
                    for (l_726 = 0; (l_726 >= 18); l_726 = safe_add_func_uint32_t_u_u(l_726, 1))
                    {
                        return p_31;
                    }
                    for (l_652 = 0; (l_652 <= 9); l_652 += 1)
                    {
                        unsigned char l_948 = 0x29L;
                        int l_951 = 1L;
                        int i;
                        (*l_860) = func_32(&g_908, ((safe_mod_func_uint32_t_u_u(func_37(p_31, (p_31 , (*l_478)), &g_908, p_31), p_31)) && (*p_30)), p_31, p_31);
                        return g_445;
                    }
                }
                for (g_183 = 0; (g_183 <= 11); ++g_183)
                {
                    int l_967 = 0x7F11AAB6L;
                    short l_979 = 0x7A55L;
                    (*g_593) = ((((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((p_31 ^ p_31), (*g_593))), 5)) | (((*g_101) = ((safe_lshift_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(p_31, (*l_478))), 1)) <= p_31) == (**l_860)) <= (safe_mod_func_int8_t_s_s(((p_31 && ((((*l_874) = ((*p_30) , l_966)) , (void*)0) != &l_864[0])) & p_31), 0xC1L))), (*l_478))) , p_31)) , p_31)) | l_966) , l_967) | p_31) <= l_967) , p_31) & (*p_30));
                    if ((*p_30))
                    {
                        short l_968[8] = {1L,1L,0x8E31L,1L,1L,0x8E31L,1L,1L};
                        int i;
                        (*l_860) = func_32(func_32(p_30, ((*g_593) , 4UL), (l_967 || p_31), p_31), l_968[6], p_31, p_31);
                        (*g_146) = (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u(((p_31 <= (g_908 <= ((*p_30) || ((safe_mod_func_uint8_t_u_u((1UL & ((((((((0x3BL < l_977) , &p_30) != &g_593) , p_31) | 0x103FL) >= 1L) , (*l_478)) <= 251UL)), p_31)) != (*g_101))))) ^ p_31), 0x0549L)) , (-1L)) <= l_978), (-1L))), l_979));
                        if (l_979)
                            break;
                    }
                    else
                    {
                        (*l_860) = (*l_860);
                    }
                }
                if ((*g_593))
                    continue;
                (*l_860) = func_32(&g_85, ((*l_478) = ((0xC5E195F9L & p_31) != (*g_101))), ((*l_575) = (safe_div_func_uint32_t_u_u(l_982[0], l_982[0]))), p_31);
            }
            return l_983;
        }
    }
    for (l_727 = 6; (l_727 >= 2); l_727 -= 1)
    {
        int l_986[8][10] = {{(-1L),0xE19671B5L,7L,0x165F5212L,0xE19671B5L,0x165F5212L,7L,0xE19671B5L,(-1L),(-1L)},{0x39DFD6B4L,0x6CC30BF8L,0x1EA43557L,0xE19671B5L,0xE19671B5L,0x1EA43557L,0x6CC30BF8L,0x39DFD6B4L,0x1EA43557L,0x39DFD6B4L},{0xE19671B5L,7L,0x165F5212L,0xE19671B5L,0x165F5212L,7L,0xE19671B5L,(-1L),(-1L),0xE19671B5L},{(-1L),0x39DFD6B4L,0x165F5212L,0x165F5212L,0x39DFD6B4L,(-1L),7L,0x39DFD6B4L,7L,0x1EA43557L},{0x165F5212L,(-1L),0x6CC30BF8L,(-1L),0x165F5212L,0x6CC30BF8L,7L,7L,0x6CC30BF8L,0x165F5212L},{0x165F5212L,0xDD557B9DL,0xDD557B9DL,0x165F5212L,0x74D32FD0L,0x1EA43557L,0x165F5212L,0x1EA43557L,0x74D32FD0L,0x165F5212L},{0x1EA43557L,0x165F5212L,0x1EA43557L,0x74D32FD0L,0x165F5212L,0xDD557B9DL,0xDD557B9DL,0x165F5212L,0x74D32FD0L,0x1EA43557L},{7L,7L,0x6CC30BF8L,0x165F5212L,(-1L),0x6CC30BF8L,(-1L),0x165F5212L,0x6CC30BF8L,7L}};
        int l_990 = 1L;
        unsigned l_991[5];
        char l_996 = 0x2DL;
        unsigned char l_1018 = 1UL;
        int l_1019 = 0L;
        short l_1034 = 0xD6A3L;
        int l_1082 = (-1L);
        int l_1084[8];
        int i, j;
        for (i = 0; i < 5; i++)
            l_991[i] = 1UL;
        for (i = 0; i < 8; i++)
            l_1084[i] = 0xB2BB9303L;
        (*l_478) = (-8L);
        for (g_348 = 5; (g_348 >= 0); g_348 -= 1)
        {
            unsigned *l_984 = (void*)0;
            int l_985 = 7L;
            unsigned short *l_989 = (void*)0;
            unsigned *l_992 = &g_568[0];
            int **l_993[7] = {&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146};
            int ***l_995 = &l_993[2];
            unsigned short *l_1007[5][8][6] = {{{&l_978,(void*)0,&g_105,&l_422,(void*)0,(void*)0},{&l_422,(void*)0,&l_766[2][3][6],(void*)0,&l_422,(void*)0},{&l_766[3][2][9],&l_978,&l_422,&l_766[2][0][0],&l_766[0][3][4],&l_766[3][3][7]},{&g_105,&l_422,&l_422,&l_766[2][0][0],&l_766[2][1][8],&l_766[2][0][0]},{(void*)0,&l_766[0][3][4],&l_766[4][0][1],&g_105,&g_105,&l_766[4][0][1]},{&l_766[4][0][1],&l_766[4][0][1],&l_766[2][0][0],(void*)0,&g_105,&l_766[2][1][8]},{&l_766[2][0][0],&l_978,&l_978,&l_766[2][0][0],&l_766[2][3][6],&l_766[2][0][0]},{&l_422,&l_766[2][0][0],&l_978,&g_105,&l_766[4][0][1],&l_766[2][1][8]}},{{&l_766[3][2][9],(void*)0,&l_422,&l_766[2][0][0],&l_766[4][0][1],&l_766[2][0][0]},{&l_766[2][0][0],&l_766[4][0][1],&l_766[2][0][0],&l_766[0][2][5],(void*)0,(void*)0},{&g_105,&l_422,&g_105,&l_766[2][1][8],&g_105,&l_766[2][1][8]},{&g_105,&l_978,&g_105,(void*)0,&l_766[3][2][9],&l_422},{&l_766[2][0][0],&l_422,&l_422,&g_105,&l_422,(void*)0},{(void*)0,&l_978,(void*)0,&g_105,&l_978,(void*)0},{&l_766[2][0][0],&g_105,&g_105,(void*)0,(void*)0,&l_766[1][1][8]},{&g_105,(void*)0,&l_422,&l_766[2][1][8],&g_105,(void*)0}},{{&g_105,&l_766[3][2][9],(void*)0,&l_766[0][2][5],&l_766[2][0][0],&l_766[2][0][0]},{&l_766[2][0][0],&l_422,&l_422,&l_766[2][0][0],&l_766[0][2][5],&g_105},{&l_766[3][2][9],&l_766[3][3][7],&l_766[4][0][1],(void*)0,&l_978,&l_422},{&l_978,&l_766[2][0][0],&l_766[2][3][6],&l_766[2][0][0],&l_978,&l_766[2][3][8]},{&l_766[2][0][0],&l_766[3][3][7],&g_105,&l_978,&l_766[0][2][5],&l_766[0][3][4]},{&l_766[2][0][0],&l_422,&g_105,&l_422,&l_766[2][0][0],(void*)0},{&l_766[2][3][8],&l_766[3][2][9],&l_766[2][1][8],&l_766[2][0][0],&g_105,&l_422},{(void*)0,(void*)0,&l_766[0][3][4],(void*)0,(void*)0,&l_766[2][0][0]}},{{(void*)0,(void*)0,&l_766[2][0][0],&l_766[2][1][8],&l_766[4][3][4],&l_978},{&g_105,(void*)0,&l_978,(void*)0,&g_105,&l_978},{&l_978,&l_766[1][1][8],&l_766[2][0][0],&l_978,&l_766[2][0][0],&l_766[2][0][0]},{&g_105,&l_422,&l_422,&l_978,(void*)0,&l_766[4][0][1]},{&l_766[3][2][9],&l_766[0][2][5],&l_978,&l_978,&l_766[2][3][8],&l_422},{&l_422,&l_766[2][0][0],&l_422,&l_422,&l_766[2][0][0],&l_422},{&l_978,&l_422,&g_105,&l_422,&l_766[2][0][0],&l_766[2][3][6]},{&l_766[1][1][8],&l_766[0][3][4],&l_422,&l_766[2][0][0],&l_978,&g_105}},{{&l_766[1][1][8],(void*)0,&l_766[2][0][0],&l_422,&l_766[3][2][9],&g_105},{&l_978,&l_766[2][0][0],&l_766[4][0][1],&l_422,&l_766[2][0][0],&l_766[0][3][4]},{&l_422,&g_105,(void*)0,&l_978,&g_105,&l_978},{&l_766[3][2][9],(void*)0,&g_105,&l_978,&g_105,(void*)0},{&g_105,&l_422,&l_766[3][2][9],&l_978,&l_766[2][0][0],&l_422},{&l_978,&l_766[2][3][6],&l_422,(void*)0,(void*)0,&l_766[2][3][8]},{&g_105,&l_766[2][3][6],&l_978,&l_766[2][1][8],&l_766[2][0][0],&g_105},{(void*)0,&l_422,(void*)0,&l_766[3][3][7],(void*)0,&g_105}}};
            unsigned *l_1020 = &l_991[2];
            short ***l_1025 = &g_107;
            int *l_1042 = &l_907;
            int l_1043[8][7] = {{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)},{(-1L),(-1L),(-1L),1L,0xFE55E48DL,1L,(-1L)}};
            unsigned short l_1057 = 0xF8D3L;
            int i, j, k;
            (*l_994) = (((l_985 = g_2[l_727]) , (*l_478)) , func_32(p_30, l_996, l_996, (**l_994)));
            if (((*l_478) = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((*l_478), p_31)), (safe_mod_func_uint8_t_u_u((((*g_676) != (l_989 = l_989)) || (safe_sub_func_uint16_t_u_u(((**l_994) = (l_990 = (safe_rshift_func_uint8_t_u_s(p_31, 2)))), (p_31 & p_31)))), ((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s((*l_478), 0)) || (((*l_1020) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_1019 = (safe_lshift_func_int16_t_s_s(l_1018, p_31))), 3)), 7))) >= (*l_478))) != 1L), 5)) && p_31)))))))
            {
                short l_1033 = 0xF735L;
                int l_1039 = 0L;
                for (l_1018 = 0; (l_1018 <= 4); l_1018 += 1)
                {
                    int l_1024 = (-1L);
                    int ***l_1028 = &l_994;
                    short ***l_1029 = (void*)0;
                }
                (*g_593) = (*p_30);
                (*p_30) = 0x1E0A0368L;
            }
            else
            {
                unsigned l_1040 = 0x28501B22L;
                int *l_1041 = &g_645[5][1][0];
                (*g_593) = ((l_1019 = ((*l_478) & l_1040)) >= (((**l_994) < l_990) , (l_1041 != ((*l_917) = l_1042))));
                for (g_576 = 0; (g_576 <= 3); g_576 += 1)
                {
                    int i, j, k;
                    return l_766[g_576][g_576][(g_348 + 1)];
                }
                for (g_195 = 3; (g_195 >= 0); g_195 -= 1)
                {
                    unsigned char l_1050 = 251UL;
                    unsigned l_1054 = 4294967295UL;
                    int *l_1058[9][2] = {{&l_1043[4][4],&g_85},{&l_1043[4][4],&l_1043[4][4]},{&g_85,&l_1043[4][4]},{&l_1043[4][4],&g_85},{&l_1043[4][4],&l_1043[4][4]},{&g_85,&l_1043[4][4]},{&l_1043[4][4],&g_85},{&l_1043[4][4],&l_1043[4][4]},{&g_85,&l_1043[4][4]}};
                    int i, j;
                    for (l_422 = 0; (l_422 <= 6); l_422 += 1)
                    {
                        int *l_1053 = (void*)0;
                        int i, j, k;
                        (*g_593) = (!(((((l_1043[4][4] > ((+((safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((((((p_31 || ((safe_lshift_func_uint16_t_u_u((l_766[(g_195 + 1)][g_195][(g_348 + 2)] = p_31), (l_1050 = p_31))) == (l_1019 == (safe_sub_func_int32_t_s_s((*p_30), (*p_30)))))) , p_30) != (*g_220)) & (*p_30)) <= (*g_101)), (*l_478))) ^ 1UL), p_31)) == 0UL)) , p_31)) >= p_31) & 65534UL) != p_31) , (*g_593)));
                        if ((*p_30))
                            break;
                        l_1058[0][0] = func_32((g_593 = &g_908), p_31, l_1040, p_31);
                    }
                }
                for (g_183 = 0; (g_183 <= 3); g_183 += 1)
                {
                    unsigned short l_1068[9][6] = {{1UL,1UL,0x7B36L,0x8280L,0xBCFEL,0x69B3L},{0x704EL,0x7B36L,0x934CL,0x69B3L,0x934CL,0x7B36L},{0x8280L,0x704EL,0x934CL,0UL,1UL,0x69B3L},{1UL,0UL,0x8280L,0x8280L,1UL,0xBCFEL},{0x8280L,1UL,0xBCFEL,0x704EL,0UL,0UL},{0UL,1UL,0x934CL,1UL,0UL,1UL},{0UL,0x8280L,1UL,0x704EL,0x61BCL,0x61BCL},{0x8280L,0UL,0UL,0x8280L,0x934CL,0x61BCL},{0xBCFEL,0x61BCL,1UL,1UL,0x704EL,1UL}};
                    int i, j;
                    l_1059 = &g_617;
                    for (g_857 = 0; (g_857 <= 6); g_857 += 1)
                    {
                        int i, j;
                        (**l_995) = (l_1043[(g_857 + 1)][(g_183 + 3)] , func_32(&g_85, g_1060[1], (safe_lshift_func_uint16_t_u_u(p_31, l_1040)), ((*g_101) = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u(g_1067, l_1068[1][4])) != (-1L)), p_31)))));
                        (*l_994) = &g_85;
                        p_30 = ((**l_995) = &g_908);
                    }
                    g_1070 = (g_1060[0] = (l_991[0] , (l_1019 = ((*g_593) = g_1069))));
                }
            }
            (*l_994) = p_30;
            (*p_30) = (*p_30);
            for (g_90 = 3; (g_90 >= 0); g_90 -= 1)
            {
                int l_1079 = 0xE827AD96L;
                int i, j, k;
                (*l_478) = ((safe_rshift_func_int16_t_s_s((~((safe_sub_func_int16_t_s_s((g_2[l_727] = (((65535UL != p_31) != p_31) == (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(p_31, ((p_30 = ((*l_994) = p_30)) != &l_1079))), l_1084[1])))), p_31)) & p_31)), l_1034)) || 4294967291UL);
                for (l_1057 = 2; (l_1057 <= 6); l_1057 += 1)
                {
                    return g_645[5][1][0];
                }
            }
        }
    }
    return p_31;
}







static int * func_32(int * p_33, unsigned short p_34, unsigned p_35, unsigned char p_36)
{
    int l_378[6];
    unsigned *l_379[8][10][2] = {{{&g_119,(void*)0},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,&g_119},{&g_119,&g_119},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,(void*)0}},{{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,(void*)0},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,&g_119}},{{&g_119,&g_119},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,(void*)0},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119}},{{&g_119,&g_119},{&g_119,&g_119},{&g_119,(void*)0},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,(void*)0},{&g_119,&g_119},{&g_119,&g_119}},{{&g_119,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,(void*)0},{(void*)0,&g_119},{&g_119,&g_119}},{{&g_119,&g_119},{&g_119,&g_119},{(void*)0,(void*)0},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{(void*)0,&g_119}},{{&g_119,&g_119},{&g_119,&g_119},{&g_119,(void*)0},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,&g_119},{(void*)0,(void*)0},{&g_119,&g_119},{&g_119,&g_119}},{{&g_119,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{(void*)0,&g_119},{&g_119,&g_119},{&g_119,&g_119},{&g_119,(void*)0},{&g_119,&g_119},{&g_119,&g_119}}};
    int l_380 = 0xD276EC15L;
    int *l_418 = &l_378[3];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_378[i] = 0L;
    l_380 = ((safe_unary_minus_func_uint32_t_u(0x0D6DF043L)) || (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_378[3], (p_36 && (((p_35 = p_36) >= 4294967292UL) != 1L)))), g_2[0])), 0x7615L)));
    for (g_158 = (-29); (g_158 == 55); g_158 = safe_add_func_int32_t_s_s(g_158, 2))
    {
        unsigned short l_393 = 1UL;
        int l_406 = 0x934D0153L;
        int *l_419 = &g_4;
        (*p_33) = (+(safe_mod_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s(l_393, ((safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(0x7272L, l_393)) != (safe_div_func_int16_t_s_s(0x1262L, (safe_lshift_func_int16_t_s_u(((((safe_rshift_func_uint16_t_u_s((0xC1L ^ l_378[3]), 10)) | ((safe_lshift_func_uint16_t_u_u(l_406, 11)) <= p_35)) != (251UL | 0x18L)) ^ p_35), l_378[0]))))), p_34)) && 0UL))) || g_2[4]), l_378[3])) == p_34), g_2[0])), g_72)) >= l_378[3]) && l_380), p_35)));
        for (p_35 = 0; (p_35 < 39); p_35 = safe_add_func_int16_t_s_s(p_35, 8))
        {
            int l_411[6][1][5] = {{{6L,0x4290FCF4L,6L,6L,0x4290FCF4L}},{{0L,0x870BC3DAL,0x870BC3DAL,0L,0x870BC3DAL}},{{0x4290FCF4L,0x4290FCF4L,(-6L),0x4290FCF4L,0x4290FCF4L}},{{0x870BC3DAL,0L,0x870BC3DAL,0x870BC3DAL,0L}},{{0x4290FCF4L,6L,6L,0x4290FCF4L,6L}},{{0L,0L,0xB0FFDB39L,0L,0L}}};
            int **l_421[10][9] = {{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418},{&l_418,&l_419,&l_418,&l_418,&l_419,&l_418,&l_418,&l_419,&l_418}};
            int i, j, k;
            if (((safe_lshift_func_int16_t_s_s((l_393 , (l_411[3][0][1] || ((*g_101) = ((*p_33) ^ (l_406 && ((void*)0 != l_379[7][3][1])))))), 14)) , (((*g_101) = (safe_mod_func_int32_t_s_s(l_378[3], p_36))) , ((p_34 >= 1UL) , (*p_33)))))
            {
                int **l_414 = (void*)0;
                int **l_415 = &g_146;
                (*l_415) = (g_158 , &g_4);
            }
            else
            {
                for (g_119 = 23; (g_119 > 7); g_119 = safe_sub_func_int32_t_s_s(g_119, 7))
                {
                    int **l_420 = &g_146;
                    l_419 = l_418;
                    (*l_420) = &g_85;
                }
            }
            g_146 = &l_378[1];
            if ((*g_146))
                continue;
        }
        if ((*l_418))
            continue;
    }
    return &g_4;
}







static unsigned char func_37(unsigned p_38, int p_39, int * p_40, unsigned p_41)
{
    int l_60 = (-8L);
    unsigned short l_94[8][3] = {{65526UL,0UL,65526UL},{0x76A2L,1UL,0x76A2L},{65526UL,0UL,65526UL},{0x76A2L,1UL,0x76A2L},{65526UL,0UL,65526UL},{0x76A2L,1UL,0x76A2L},{65526UL,0UL,65526UL},{0x76A2L,1UL,0x76A2L}};
    unsigned char **l_98 = (void*)0;
    int *l_145 = &g_4;
    unsigned char ***l_148 = &g_100[4][4][1];
    unsigned char ***l_149 = &g_100[2][2][0];
    unsigned char *l_177[6] = {&g_72,&g_72,&g_72,&g_72,&g_72,&g_72};
    int **l_191 = &g_146;
    int *l_194[10] = {&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195,&g_195};
    unsigned char l_228 = 0x14L;
    unsigned l_229 = 0xA7D1E307L;
    unsigned *l_241 = &l_229;
    unsigned **l_240[8][1][10] = {{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}},{{&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241,&l_241}}};
    unsigned ***l_239 = &l_240[3][0][9];
    int l_264 = 0L;
    unsigned char l_339[4];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_339[i] = 0x54L;
    if (l_60)
    {
        int *l_62[4][3][9] = {{{&l_60,&g_4,&l_60,&l_60,(void*)0,&g_4,(void*)0,&l_60,&l_60},{&g_4,&g_4,&g_4,&g_4,&l_60,&l_60,&g_4,&g_4,&g_4},{&l_60,&g_4,&g_4,&l_60,&l_60,&l_60,&g_4,&g_4,&l_60}},{{&l_60,&l_60,&g_4,&g_4,&g_4,&g_4,&l_60,&l_60,&g_4},{(void*)0,&g_4,&l_60,&g_4,&l_60,&g_4,(void*)0,&g_4,(void*)0},{&l_60,&g_4,&l_60,&l_60,&g_4,&l_60,&g_4,&l_60,&g_4}},{{&l_60,&g_4,&g_4,&g_4,&l_60,&g_4,&g_4,&g_4,&l_60},{&g_4,&g_4,&g_4,&g_4,&g_4,&l_60,&g_4,&l_60,&g_4},{&l_60,&g_4,&l_60,&g_4,(void*)0,&g_4,(void*)0,&g_4,&l_60}},{{&g_4,&g_4,&l_60,&g_4,&g_4,&l_60,&l_60,&g_4,&g_4},{&l_60,&l_60,&g_4,&g_4,&l_60,&g_4,&g_4,&l_60,&l_60},{&g_4,&l_60,&l_60,&g_4,&g_4,&g_4,&g_4,&l_60,&l_60}}};
        int **l_61 = &l_62[1][1][7];
        short *l_69 = (void*)0;
        short **l_109 = &l_69;
        int i, j, k;
        (*l_61) = &p_39;
        for (g_4 = 4; (g_4 <= 27); ++g_4)
        {
            unsigned l_70[9] = {0x2090F9CFL,0x2090F9CFL,0x2090F9CFL,0x2090F9CFL,0x2090F9CFL,0x2090F9CFL,0x2090F9CFL,0x2090F9CFL,0x2090F9CFL};
            int l_106 = (-4L);
            short ***l_125[8] = {&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107};
            int i;
            for (l_60 = 2; (l_60 >= 0); l_60 -= 1)
            {
                int l_76 = 0xFC80C526L;
                int l_91 = (-3L);
                (*l_61) = (void*)0;
                if (g_2[0])
                    continue;
                for (g_57 = 2; (g_57 >= 0); g_57 -= 1)
                {
                    unsigned char *l_71 = &g_72;
                    short *l_75 = &g_2[6];
                    int i, j, k;
                    l_62[g_57][g_57][(g_57 + 4)] = l_62[l_60][l_60][(l_60 + 3)];
                    (*l_61) = &p_39;
                    l_76 = (safe_lshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u((((((p_38 | (&g_57 == l_69)) , ((((*l_75) = (((((g_57 | (l_70[6] >= ((*l_71) = g_2[0]))) != 0x76B8L) < ((safe_div_func_uint16_t_u_u(l_60, 0x8E03L)) && (-1L))) , g_2[0]) , 0x0CC1L)) >= g_4) , &l_62[g_57][g_57][(g_57 + 4)])) == (void*)0) , l_70[7]) | 0xE9L), 4294967295UL)) & 0xDDL), 6));
                    l_91 = (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((p_39 <= (0xC4L ^ (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_70[2], 4)), (1L ^ (g_85 = g_72)))))), ((safe_lshift_func_int16_t_s_u(l_60, (safe_mod_func_uint32_t_u_u((~(g_90 = l_70[5])), g_2[0])))) & 4294967293UL))), 1));
                }
            }
            (*l_61) = (void*)0;
            if (l_60)
            {
                (*l_61) = &p_39;
                if (g_72)
                    break;
            }
            else
            {
                unsigned char **l_104 = &g_101;
                (*l_61) = &p_39;
                for (p_41 = 0; (p_41 != 45); p_41 = safe_add_func_int8_t_s_s(p_41, 1))
                {
                    return l_94[3][0];
                }
                if ((g_85 = (g_72 <= 0x75L)))
                {
                    int *l_95 = &g_4;
                    unsigned char **l_102[6] = {&g_101,&g_101,&g_101,&g_101,&g_101,&g_101};
                    int i;
                    (*l_61) = l_95;
                    if ((safe_lshift_func_uint8_t_u_s(g_72, 6)))
                    {
                        unsigned char ***l_99 = &l_98;
                        unsigned char ***l_103 = &g_100[3][0][3];
                        (*l_61) = &p_39;
                        (*l_99) = l_98;
                        if (g_57)
                            continue;
                        l_106 = (g_105 = (g_85 = ((((*l_103) = (l_102[5] = ((*l_99) = g_100[3][0][3]))) != l_104) == 0L)));
                    }
                    else
                    {
                        short ***l_110[7][10][1] = {{{&g_107},{&g_107},{&g_107},{&g_107},{(void*)0},{&g_107},{(void*)0},{&g_107},{(void*)0},{&g_107}},{{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{(void*)0},{(void*)0}},{{(void*)0},{&g_107},{&g_107},{&g_107},{(void*)0},{(void*)0},{(void*)0},{&g_107},{&g_107},{&g_107}},{{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{(void*)0},{&g_107},{(void*)0},{&g_107}},{{(void*)0},{&g_107},{(void*)0},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107}},{{&g_107},{&g_107},{(void*)0},{(void*)0},{(void*)0},{&g_107},{&g_107},{&g_107},{(void*)0},{(void*)0}},{{(void*)0},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107}}};
                        int i, j, k;
                        g_107 = (l_109 = g_107);
                    }
                    for (g_105 = 0; (g_105 != 17); ++g_105)
                    {
                        if ((*p_40))
                            break;
                        (*l_61) = (void*)0;
                        l_60 = (*p_40);
                    }
                }
                else
                {
                    int *l_113 = &g_85;
                    g_85 = (+(-1L));
                    (*l_61) = l_113;
                    for (p_38 = 0; (p_38 <= 5); p_38 += 1)
                    {
                        unsigned *l_118 = &g_119;
                        (*l_61) = &l_106;
                        (*l_113) = ((safe_add_func_uint32_t_u_u(((*l_118) = (safe_lshift_func_int8_t_s_u((p_38 <= p_41), 0))), (safe_div_func_int32_t_s_s((*p_40), (safe_div_func_uint32_t_u_u(7UL, (*p_40))))))) , g_57);
                    }
                    return (*g_101);
                }
            }
            if (((*p_40) | 0UL))
            {
                char l_135 = (-3L);
                unsigned short l_142 = 0xD108L;
                if ((*p_40))
                {
                    int l_124 = 8L;
                    if (l_124)
                        break;
                    if ((l_60 = (l_124 = 1L)))
                    {
                        g_85 = g_105;
                    }
                    else
                    {
                        (*l_61) = &g_85;
                        if ((*p_40))
                            break;
                        p_40 = &g_4;
                        p_39 = g_57;
                    }
                    if ((*p_40))
                        break;
                }
                else
                {
                    short l_143 = 1L;
                    if (((g_72 == (l_125[3] == (void*)0)) & ((*p_40) > (*p_40))))
                    {
                        int l_128 = (-1L);
                        int l_144 = 0xFEDCC949L;
                        g_85 = (safe_mod_func_uint16_t_u_u((0L && (l_128 >= (*p_40))), g_105));
                        l_144 = (((safe_div_func_int16_t_s_s(p_41, (l_135 = (safe_lshift_func_uint16_t_u_s(0x44A5L, (g_2[0] , (safe_rshift_func_uint16_t_u_s((g_90 & p_38), 11)))))))) , (*p_40)) , ((((p_41 , (g_4 == ((safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((~(safe_lshift_func_int8_t_s_u((0x24L > p_41), l_142))), p_38)) == g_119), 4294967295UL)) != g_119))) , l_143) , 0x35L) ^ p_41));
                    }
                    else
                    {
                        return l_143;
                    }
                    for (g_72 = 0; (g_72 <= 2); g_72 += 1)
                    {
                        (*l_61) = &p_39;
                        (*l_61) = &p_39;
                    }
                    (*l_61) = l_145;
                }
            }
            else
            {
                return (*l_145);
            }
        }
        g_146 = &p_39;
        return g_147;
    }
    else
    {
        int *l_156[7][3] = {{&g_4,&g_4,&g_4},{&l_60,&l_60,&l_60},{&g_4,&g_4,&g_4},{&l_60,&l_60,&l_60},{&g_4,&g_4,&g_4},{&l_60,&l_60,&l_60},{&g_4,&g_4,&g_4}};
        unsigned char *l_157 = &g_158;
        int i, j;
        (*g_146) = ((((l_149 = (l_148 = &g_100[6][2][3])) != &l_98) ^ (safe_div_func_uint8_t_u_u((*g_101), ((*l_157) = (safe_mod_func_uint32_t_u_u(0xE9E4A882L, (safe_lshift_func_int8_t_s_s((l_156[6][1] == (void*)0), (*l_145))))))))) >= (safe_unary_minus_func_int16_t_s(9L)));
        for (g_105 = 0; (g_105 < 37); g_105++)
        {
            short l_181 = (-1L);
            int *l_182 = &g_85;
            for (p_38 = 0; (p_38 < 53); ++p_38)
            {
                int l_164 = (-8L);
                if ((*g_146))
                    break;
                (*l_145) = (&p_39 != ((!g_2[6]) , &g_4));
                l_164 = ((*l_145) , (*p_40));
            }
            for (g_72 = 0; (g_72 <= 6); g_72 += 1)
            {
                int **l_165[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_165[i] = &l_145;
                for (g_57 = 0; (g_57 <= 2); g_57 += 1)
                {
                    int i;
                    g_146 = &p_39;
                    return g_2[g_72];
                }
                p_40 = &p_39;
                if (g_2[g_72])
                    continue;
                for (p_38 = 0; (p_38 <= 2); p_38 += 1)
                {
                    unsigned *l_166 = (void*)0;
                    unsigned *l_167[2][6][6] = {{{&g_119,(void*)0,&g_119,&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,(void*)0,&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119,(void*)0,&g_119,&g_119},{&g_119,(void*)0,&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119,(void*)0,&g_119,&g_119},{&g_119,&g_119,(void*)0,&g_119,&g_119,&g_119}}};
                    int l_168 = 6L;
                    unsigned char *l_178 = &g_158;
                    int i, j, k;
                    l_145 = (((l_94[(p_38 + 5)][p_38] <= 0xF56CL) <= (((l_168 = g_119) | (safe_mod_func_uint8_t_u_u(l_94[(p_38 + 5)][p_38], (safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((l_94[(p_38 + 5)][p_38] ^ ((((*l_145) = (l_177[5] != l_178)) | ((*p_40) = (0xEB8E4492L ^ (safe_lshift_func_uint16_t_u_u((p_41 & 0xA9B5L), 2))))) < (*g_101))) , 6UL), p_41)), 4))))) , l_181)) , &g_4);
                    g_146 = l_182;
                }
                for (l_181 = 2; (l_181 >= 0); l_181 -= 1)
                {
                    (*p_40) = (-1L);
                    p_40 = &p_39;
                    if ((*l_145))
                        break;
                }
            }
        }
        for (p_38 = 0; (p_38 <= 2); p_38 += 1)
        {
            int *l_189 = &l_60;
            unsigned char *l_190[7][3][1] = {{{&g_158},{&g_72},{&g_158}},{{&g_72},{&g_72},{&g_158}},{{&g_72},{&g_158},{&g_72}},{{&g_72},{&g_158},{&g_72}},{{&g_158},{&g_72},{&g_72}},{{&g_158},{&g_72},{&g_158}},{{&g_72},{&g_72},{&g_158}}};
            int i, j, k;
            if ((*p_40))
                break;
            for (g_158 = 0; (g_158 <= 2); g_158 += 1)
            {
                int i, j;
                (*g_146) = ((*p_40) || ((*p_40) = (((g_183 = 0x0BL) < (*l_145)) != 252UL)));
                l_156[(g_158 + 1)][g_158] = &p_39;
                for (g_4 = 0; (g_4 <= (-23)); g_4 = safe_sub_func_int8_t_s_s(g_4, 4))
                {
                    int **l_186 = &l_156[5][0];
                    (*l_186) = &p_39;
                    for (g_72 = (-8); (g_72 == 25); g_72 = safe_add_func_uint32_t_u_u(g_72, 8))
                    {
                        (*l_186) = &g_4;
                        if ((*p_40))
                            continue;
                        (*l_186) = &p_39;
                        (*l_186) = l_189;
                    }
                    if ((**l_186))
                        continue;
                    if (((void*)0 != l_190[2][1][0]))
                    {
                        (*l_186) = &p_39;
                    }
                    else
                    {
                        (*l_186) = &p_39;
                        (*l_186) = &p_39;
                        return (*g_101);
                    }
                }
            }
        }
    }
    (*l_191) = &g_4;
    if ((((*p_40) && (safe_add_func_uint8_t_u_u((((*l_145) = p_38) , ((**l_191) = ((*g_101) = (safe_div_func_uint16_t_u_u(p_41, 65535UL))))), (((~(safe_div_func_uint32_t_u_u(((((safe_mod_func_uint16_t_u_u((g_158 | p_38), (safe_lshift_func_uint8_t_u_s((((0L ^ (safe_add_func_int32_t_s_s(p_38, p_39))) , g_183) <= p_38), p_41)))) , g_119) , 0xEB54L) < 0x8739L), p_38))) > p_38) & p_41)))) && 0x53CF96F6L))
    {
        int **l_206 = &l_145;
        unsigned *l_210 = &g_119;
        unsigned **l_209 = &l_210;
        unsigned char ***l_244[6];
        short ***l_267[1][7][8] = {{{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107},{&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107}}};
        int l_308 = 1L;
        int l_328 = 0x7B9D552DL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_244[i] = &g_100[3][0][3];
        (*l_206) = ((*l_191) = (*l_191));
        for (g_72 = (-1); (g_72 == 4); g_72 = safe_add_func_uint8_t_u_u(g_72, 4))
        {
            return (**l_206);
        }
        if ((*p_40))
        {
            unsigned ***l_211 = &l_209;
            unsigned char l_216 = 0xADL;
            int l_292 = 0xCB6C7553L;
            unsigned l_329 = 0x7CEFE5D3L;
            unsigned char l_335 = 249UL;
            unsigned short l_367 = 0xE461L;
            int l_368 = 0x1E4706DBL;
            int *l_369[8] = {&l_308,&l_308,&l_308,&l_308,&l_308,&l_308,&l_308,&l_308};
            int i;
            (*l_211) = l_209;
            for (p_38 = (-5); (p_38 >= 31); p_38++)
            {
                for (g_57 = (-28); (g_57 != 17); g_57++)
                {
                    unsigned short *l_219 = &l_94[3][0];
                    if ((l_216 , (safe_mod_func_uint16_t_u_u(p_41, ((*l_219) = p_39)))))
                    {
                        int ***l_222 = &g_220;
                        (*g_146) = (*p_40);
                        if ((*g_146))
                            continue;
                        (*l_222) = g_220;
                    }
                    else
                    {
                        char l_223 = 0x36L;
                        if (l_223)
                            break;
                        return p_39;
                    }
                    for (g_72 = 1; (g_72 <= 5); g_72 += 1)
                    {
                        (*p_40) = 1L;
                    }
                    return p_41;
                }
            }
            if ((p_39 , (*l_145)))
            {
                short *l_230 = &g_90;
                int l_259 = 0xD1752728L;
                unsigned char **l_276[9][6] = {{&g_101,&g_101,&g_101,(void*)0,&g_101,&g_101},{&g_101,&l_177[0],(void*)0,(void*)0,&l_177[0],&g_101},{&g_101,&g_101,(void*)0,&g_101,&g_101,&g_101},{&l_177[1],&g_101,&g_101,&l_177[1],&l_177[0],&l_177[1]},{&l_177[1],&l_177[0],&l_177[1],&g_101,&g_101,&l_177[1]},{&g_101,&g_101,&g_101,(void*)0,&g_101,&g_101},{&g_101,&l_177[0],(void*)0,(void*)0,&l_177[0],&g_101},{&g_101,&g_101,&g_101,(void*)0,&l_177[1],&l_177[1]},{&l_177[0],(void*)0,(void*)0,&l_177[0],&g_101,&l_177[0]}};
                int i, j;
                (*l_206) = &g_85;
                if ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_228, l_229)), (((*l_230) = p_39) ^ ((safe_mod_func_int8_t_s_s(g_119, (safe_lshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s(p_41, (safe_lshift_func_int8_t_s_s((((**l_206) == (l_239 == ((safe_rshift_func_uint16_t_u_u(((void*)0 == l_244[0]), p_38)) , (void*)0))) < 254UL), 7)))) <= p_39), p_41)))) , 0xF410L)))))
                {
                    int l_262[2];
                    unsigned short *l_265 = &l_94[3][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_262[i] = (-3L);
                    (**l_191) = (*p_40);
                    for (g_85 = (-8); (g_85 == 22); g_85++)
                    {
                        (*p_40) = (safe_div_func_int16_t_s_s((g_4 > 0xD2F0B0CEL), g_90));
                    }
                    (*l_191) = &p_39;
                    for (g_158 = 0; (g_158 != 59); g_158++)
                    {
                        unsigned ***l_258[3];
                        int l_263 = 0x86DC7E6EL;
                        short ***l_266 = &g_107;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_258[i] = &l_240[3][0][9];
                        (**l_206) = (((*g_146) = (*p_40)) < ((p_41 = ((safe_add_func_int32_t_s_s((((((((((safe_lshift_func_int8_t_s_u((((((p_41 || ((g_57 , g_257) != l_258[0])) , (l_259 , 0xCDL)) >= (l_216 <= (safe_rshift_func_int8_t_s_s(l_262[1], g_183)))) == l_263) ^ l_264), 5)) , l_265) != &g_105) < 0x07DCL) , l_266) != l_267[0][0][5]) == l_263) && 0L) || 5L), 0x68B03431L)) , 0xF0C496D3L)) & 1L));
                    }
                }
                else
                {
                    unsigned short l_285[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_285[i] = 65527UL;
                    for (l_264 = 0; (l_264 != 5); l_264++)
                    {
                        (*l_206) = (void*)0;
                        if ((*p_40))
                            break;
                    }
                    if (l_216)
                    {
                        int ***l_270 = &l_191;
                        p_40 = (p_39 , (void*)0);
                        (*l_270) = &p_40;
                    }
                    else
                    {
                        int *l_271[7][1][5] = {{{&g_85,&g_4,&g_4,&l_60,(void*)0}},{{(void*)0,&g_85,&g_85,(void*)0,&l_60}},{{&l_264,&g_4,(void*)0,&g_4,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_85,(void*)0}},{{(void*)0,&g_4,(void*)0,&l_264,&g_85}},{{&l_264,(void*)0,&l_60,&g_4,&l_60}},{{(void*)0,&g_4,&g_4,(void*)0,(void*)0}}};
                        short *l_275 = (void*)0;
                        int l_297 = 4L;
                        int i, j, k;
                        (*l_206) = l_271[0][0][0];
                        p_40 = ((p_41 , (safe_unary_minus_func_int16_t_s(((((p_39 != ((((~(safe_div_func_uint16_t_u_u((((((((void*)0 != l_275) , &g_101) != l_276[6][3]) & (-6L)) | (safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(p_38, ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((l_259 | p_41), p_38)), 5)) , 4UL))), 11))) >= l_285[1]), g_85))) == 0x18A37B5AL) , 0xD740L) || 0x778FL)) < (**l_191)) >= (*g_101)) >= p_41)))) , (*l_206));
                        (*l_191) = l_271[0][0][0];
                        g_4 = (l_259 = (((safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((9UL | l_292), ((((&g_221[4] != &l_194[7]) != l_285[1]) ^ g_105) >= ((safe_div_func_uint32_t_u_u(l_259, l_285[1])) & (safe_rshift_func_int16_t_s_s(((((~((*l_230) = ((void*)0 == &g_146))) >= p_39) & g_195) , g_105), 10)))))), 0xE039L)) , l_259), l_297)) , p_39) | 3UL));
                    }
                    (*l_206) = &p_39;
                }
            }
            else
            {
                unsigned l_304[9];
                int l_307 = 0x5E022920L;
                char l_311 = 0xCFL;
                unsigned **l_344 = (void*)0;
                int i;
                for (i = 0; i < 9; i++)
                    l_304[i] = 2UL;
                (**l_191) = 0L;
                if (((safe_div_func_int16_t_s_s((*l_145), (safe_sub_func_uint8_t_u_u((((**l_191) & ((*p_40) < ((g_85 > (safe_div_func_uint32_t_u_u(l_304[5], (*p_40)))) == (l_307 = (safe_add_func_int32_t_s_s((p_38 == (((*g_146) > (((l_216 , 0x04L) > g_57) && p_39)) , 0xFBL)), (-3L))))))) || p_38), g_2[1])))) , l_308))
                {
                    char l_312 = 0L;
                    short l_313 = 0x1CBDL;
                    char *l_327 = &l_311;
                    for (p_39 = 0; (p_39 == 4); p_39 = safe_add_func_uint32_t_u_u(p_39, 2))
                    {
                        (*g_146) = (l_311 , (**l_206));
                        if ((*l_145))
                            break;
                        if (l_312)
                            continue;
                    }
                    p_40 = &p_39;
                    (*l_206) = (((**l_206) = 1L) , ((*l_191) = (void*)0));
                    if (((((l_313 = (&l_209 != &l_209)) >= ((*l_210) = p_38)) ^ g_72) , (safe_mod_func_uint8_t_u_u(2UL, (safe_lshift_func_uint16_t_u_s((g_85 > (((safe_rshift_func_uint16_t_u_u((g_119 , ((((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(p_39)), (safe_lshift_func_int8_t_s_u(((*l_327) = ((((safe_sub_func_uint16_t_u_u(l_313, g_72)) < 4294967294UL) < (-9L)) >= l_313)), l_328)))) <= l_216) <= p_39) >= 1L)), l_329)) & 0UL) , 6L)), 10))))))
                    {
                        p_40 = (void*)0;
                    }
                    else
                    {
                        (*l_206) = &p_39;
                        (*l_206) = &g_4;
                    }
                }
                else
                {
                    (*g_146) = (*g_146);
                    for (g_72 = 21; (g_72 > 21); g_72++)
                    {
                        (*l_191) = &p_39;
                    }
                    (*l_191) = &p_39;
                    return (*g_101);
                }
                if ((p_38 == l_329))
                {
                    int ***l_332 = &l_206;
                    l_307 = p_39;
                    (*l_332) = &l_145;
                    for (l_292 = 14; (l_292 < 24); ++l_292)
                    {
                        if (g_85)
                            break;
                        g_146 = &g_4;
                        (**l_332) = &g_85;
                    }
                    p_40 = &g_85;
                }
                else
                {
                    int **l_338 = &l_194[7];
                    int *l_345 = (void*)0;
                    p_39 = (l_335 , (0UL > p_38));
                    (*l_239) = ((&g_105 != ((safe_div_func_uint16_t_u_u((g_195 > ((l_338 == (void*)0) != ((((l_339[3] , (safe_sub_func_int8_t_s_s((((p_41 >= (safe_rshift_func_int8_t_s_s(p_39, 7))) == l_292) ^ 0x3EL), p_41))) , p_39) > g_195) , p_39))), p_41)) , &g_105)) , l_344);
                    g_85 = g_158;
                    for (g_119 = (-15); (g_119 != 1); g_119 = safe_add_func_int32_t_s_s(g_119, 1))
                    {
                        return p_39;
                    }
                }
                (*l_191) = (g_348 , (void*)0);
            }
            g_4 = (safe_rshift_func_int16_t_s_u((l_329 || (safe_div_func_uint16_t_u_u(((p_39 <= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((p_41 , (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_292 || ((g_147 & (1L > (p_38 <= (((safe_sub_func_uint16_t_u_u(((g_4 == ((l_368 = ((safe_sub_func_int32_t_s_s((!(((l_367 , &g_220) == (void*)0) ^ (-10L))), l_335)) || 0xA6L)) , g_158)) <= p_38), (-4L))) > p_41) , g_105)))) < (*g_101))), p_39)), 0xA1L))), 10)), p_41))) , 0x9C6BL), p_38))), 7));
        }
        else
        {
            (*l_191) = &g_85;
            (*l_206) = (*l_191);
        }
    }
    else
    {
        return p_39;
    }
    return p_41;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_568[i], "g_568[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_645[i][j][k], "g_645[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_908, "g_908", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_922[i], "g_922[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_949, "g_949", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1060[i], "g_1060[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1067, "g_1067", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1102, "g_1102", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1150[i][j], "g_1150[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1323, "g_1323", print_hash_value);
    transparent_crc(g_1536, "g_1536", print_hash_value);
    transparent_crc(g_1574, "g_1574", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1580, "g_1580", print_hash_value);
    transparent_crc(g_1742, "g_1742", print_hash_value);
    transparent_crc(g_1787, "g_1787", print_hash_value);
    transparent_crc(g_1818, "g_1818", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
