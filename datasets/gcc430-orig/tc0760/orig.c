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
   int f0;
   char f1;
   char * f2;
   unsigned char f3;
   char * f4;
};

union U1 {
   unsigned short f0;
   char f1;
   short f2;
   int f3;
};


static int g_3 = 0xC2285FAAL;
static char g_58 = (-3L);
static char *g_57[7][3][7] = {{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}},{{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58},{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}}};
static int g_60[2] = {0x11B4C510L,0x11B4C510L};
static int *g_68 = &g_60[0];
static int * const *g_67 = &g_68;
static union U0 g_69 = {1L};
static char **g_90 = &g_57[5][1][0];
static char ***g_89 = &g_90;
static int g_107[2][8][3] = {{{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL},{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL},{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL},{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL}},{{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL},{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL},{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL},{0x7BD3F7DAL,(-4L),0x0193F488L},{0x6613FCEAL,0xB2AC20ADL,0xB2AC20ADL}}};
static unsigned g_110 = 4294967289UL;
static int g_159 = 0x0B4FE36AL;
static unsigned short g_164 = 0UL;
static union U1 g_169 = {1UL};
static union U1 *g_168 = &g_169;
static char g_222 = (-1L);
static union U0 *g_236 = &g_69;
static int g_260 = 1L;
static unsigned g_263 = 4294967288UL;
static union U0 g_295[4][9][7] = {{{{2L},{2L},{0x8DF98412L},{0xABEB55A9L},{1L},{-6L},{0x643B7A80L}},{{0x1BDDE95BL},{0x5BC0CF6CL},{0x974E3EA0L},{-4L},{0x2EFC536DL},{0xF8A94D58L},{0x5E644F59L}},{{-7L},{0x92A26966L},{-4L},{0xAC231663L},{0L},{1L},{0x8DF98412L}},{{0xFF0C87CBL},{1L},{-1L},{0xAC231663L},{-1L},{1L},{4L}},{{2L},{0xDD45D628L},{0L},{-4L},{1L},{0x92A26966L},{2L}},{{0L},{-4L},{0x54289F8FL},{0xABEB55A9L},{0xDD45D628L},{0x2EFC536DL},{0xD9BE98BEL}},{{0xD6A88F2DL},{0xDD45D628L},{0xBB89AA48L},{-1L},{0xF8A94D58L},{0xEAF58D7DL},{0L}},{{0L},{7L},{0xA935BD54L},{0x1422DF22L},{0xD6A88F2DL},{7L},{-8L}},{{0x643B7A80L},{0x68315309L},{0L},{0xF8A94D58L},{0xA58F7B16L},{0xB67A100FL},{-4L}}},{{{-8L},{0x5A8DAC34L},{0L},{0L},{0x5A8DAC34L},{-8L},{-1L}},{{0x974E3EA0L},{0x1BDDE95BL},{0x51B81445L},{0xC7A7F3AAL},{1L},{0x82D39D8BL},{-7L}},{{1L},{0L},{-7L},{0x8E642376L},{0L},{1L},{0L}},{{0L},{0x1BDDE95BL},{0L},{-1L},{0x3FF188E0L},{4L},{0x1BDDE95BL}},{{0x92A26966L},{0x5A8DAC34L},{1L},{0xE2530089L},{0xB666E975L},{0x7062B328L},{0x131B508AL}},{{0x1422DF22L},{0x68315309L},{0xA20BAB50L},{-6L},{0xE6B6D801L},{9L},{-5L}},{{1L},{7L},{0x51B81445L},{0x73950678L},{0L},{0x7B059254L},{0xE2530089L}},{{0xEFDE8491L},{0xDD45D628L},{0xA58F7B16L},{0L},{-7L},{0L},{0xD6A88F2DL}},{{0x4CC8821AL},{9L},{-1L},{0xBB89AA48L},{0xEAF58D7DL},{1L},{0x5BC0CF6CL}}},{{{-1L},{-1L},{0x70A286CEL},{-1L},{0xB666E975L},{2L},{0x5384E1B4L}},{{-1L},{-5L},{0x3FF188E0L},{0x413135EFL},{1L},{-1L},{0xE41D468FL}},{{0x131B508AL},{-9L},{-1L},{-1L},{0xE41D468FL},{0L},{0x8E642376L}},{{0x92A26966L},{0L},{0xABEB55A9L},{4L},{7L},{0x54289F8FL},{1L}},{{-4L},{0xDC7D5EA3L},{-9L},{0L},{0x974E3EA0L},{0x643B7A80L},{0L}},{{1L},{0x1BDDE95BL},{1L},{-6L},{0xA935BD54L},{0x131B508AL},{-1L}},{{0L},{0xD9BE98BEL},{0xEFDE8491L},{0xA6713826L},{0xF8A94D58L},{0x8E642376L},{0x5BC0CF6CL}},{{0x5A8DAC34L},{-9L},{2L},{-1L},{0x1BDDE95BL},{-1L},{2L}},{{0x70A286CEL},{0x70A286CEL},{0L},{1L},{0xE49F88D6L},{0x92A26966L},{0x2EFC536DL}}},{{{0x643B7A80L},{0xE49F88D6L},{1L},{2L},{0x7062B328L},{0x82D39D8BL},{-1L}},{{0x23AFD62DL},{-7L},{0x69DAE4EDL},{-6L},{0xE49F88D6L},{0x5384E1B4L},{1L}},{{0L},{-1L},{0x3FF188E0L},{4L},{0x1BDDE95BL},{0x16FBC5D3L},{0xA58F7B16L}},{{-4L},{-1L},{0xA20BAB50L},{0x23AFD62DL},{0xF8A94D58L},{0xBD2D97CDL},{0xFF0C87CBL}},{{1L},{1L},{0xE49F88D6L},{1L},{0xA935BD54L},{0x92A26966L},{0x9BBE5D6BL}},{{0x73950678L},{0L},{0x413135EFL},{0xA935BD54L},{0x974E3EA0L},{0x73950678L},{0x974E3EA0L}},{{0L},{0x3FF188E0L},{0xA20BAB50L},{2L},{0x92A26966L},{-1L},{1L}},{{0x7062B328L},{0xA6713826L},{0x5A8DAC34L},{0x627E4599L},{1L},{0x70A286CEL},{0xD6A88F2DL}},{{0xDC7D5EA3L},{0x7062B328L},{-1L},{-6L},{-3L},{0x8E642376L},{0x7062B328L}}}};
static const union U0 *g_360[7] = {&g_69,&g_69,&g_69,&g_69,&g_69,&g_69,&g_69};
static const union U0 **g_359[10][5] = {{&g_360[4],&g_360[4],&g_360[4],&g_360[4],&g_360[4]},{&g_360[0],&g_360[0],&g_360[0],&g_360[0],&g_360[0]},{&g_360[4],&g_360[4],&g_360[4],&g_360[4],&g_360[4]},{&g_360[0],&g_360[0],&g_360[0],&g_360[0],&g_360[0]},{&g_360[4],&g_360[4],&g_360[4],&g_360[4],&g_360[4]},{&g_360[0],&g_360[0],&g_360[0],&g_360[0],&g_360[0]},{&g_360[4],&g_360[4],&g_360[4],&g_360[4],&g_360[4]},{&g_360[0],&g_360[0],&g_360[0],&g_360[0],&g_360[0]},{&g_360[4],&g_360[4],&g_360[4],&g_360[4],&g_360[4]},{&g_360[0],&g_360[0],&g_360[0],&g_360[0],&g_360[0]}};
static int g_410 = 1L;
static unsigned g_423 = 0x1B22846BL;
static unsigned char g_429 = 255UL;
static int g_462 = 0xA8234CD3L;
static int **g_506[6][6] = {{&g_68,(void*)0,&g_68,&g_68,&g_68,&g_68},{&g_68,(void*)0,(void*)0,&g_68,&g_68,&g_68},{&g_68,(void*)0,&g_68,&g_68,&g_68,&g_68},{&g_68,&g_68,&g_68,&g_68,(void*)0,(void*)0},{&g_68,&g_68,&g_68,&g_68,(void*)0,&g_68},{&g_68,&g_68,(void*)0,&g_68,(void*)0,&g_68}};
static int g_609 = (-10L);
static unsigned char g_697 = 0UL;
static int g_767 = 0x8DD32E1BL;
static union U0 g_780 = {0xB63164F5L};
static char g_840 = 1L;
static unsigned short g_875 = 65535UL;
static short g_950 = 2L;
static unsigned char g_976 = 0x15L;
static unsigned g_1075 = 0xA802C327L;
static char ***g_1260 = &g_90;
static char g_1267 = 0L;
static unsigned g_1282[10][7] = {{4294967293UL,0xF5E5B382L,1UL,1UL,0xF5E5B382L,4294967293UL,1UL},{0x5A3720F4L,0xD0A830D1L,1UL,0x4DB74FA3L,0x5418B177L,0x9122759DL,0xF5E5B382L},{0x9122759DL,0x4B70A4D1L,0x5A3720F4L,4294967293UL,0x3199E125L,0xF5E5B382L,0x3199E125L},{0x5418B177L,0xD0A830D1L,0xD0A830D1L,0x5418B177L,0UL,0x4DB74FA3L,0x30EE7901L},{0x5418B177L,0xF5E5B382L,0UL,0x4B70A4D1L,7UL,0xDAD43AE1L,1UL},{0x9122759DL,0UL,0x30EE7901L,1UL,0x5A3720F4L,1UL,0x30EE7901L},{0x5A3720F4L,0x5A3720F4L,3UL,0xBBE16640L,0xDAD43AE1L,1UL,0x3199E125L},{4294967293UL,3UL,0x3199E125L,0xD0A830D1L,0x9122759DL,0xDAD43AE1L,0xF5E5B382L},{1UL,0x4DB74FA3L,0xDAD43AE1L,0x3199E125L,0xDAD43AE1L,0x4DB74FA3L,1UL},{7UL,1UL,0x5418B177L,0x3199E125L,0x5A3720F4L,0xF5E5B382L,0xD0A830D1L}};
static char g_1305 = 1L;



static short func_1(void);
static unsigned func_9(char p_10, const int * p_11, char * p_12);
static char * func_13(char p_14, int ** p_15, unsigned p_16, int * p_17);
static unsigned func_20(short p_21, int * p_22);
static unsigned func_24(const char * p_25, unsigned short p_26, int * p_27, char p_28);
static char * func_29(int * p_30, union U1 p_31, int * p_32, const int * p_33, unsigned char p_34);
static char func_35(unsigned char p_36, unsigned p_37, union U0 p_38, int ** p_39, char p_40);
static unsigned char func_45(int * const * p_46, union U0 p_47);
static int * const * func_48(char * p_49, int p_50);
static char * func_51(union U0 p_52, int * p_53, char * p_54);
static short func_1(void)
{
    int *l_2 = &g_3;
    unsigned char l_4[10][9][2] = {{{0x8EL,252UL},{255UL,0x8EL},{1UL,252UL},{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL},{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL}},{{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL},{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL},{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL}},{{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL},{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL},{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL}},{{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL},{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL},{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL}},{{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL},{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL},{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL}},{{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL},{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL},{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL}},{{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL},{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL},{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL}},{{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL},{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL},{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL}},{{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL},{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL},{248UL,0xFDL},{0x11L,1UL},{0x8EL,0xFDL}},{{1UL,0x8EL},{0x11L,255UL},{0x11L,0x8EL},{1UL,0xFDL},{0x8EL,1UL},{0x11L,0xFDL},{248UL,0x8EL},{0x8EL,255UL},{0x8EL,0x8EL}}};
    int l_1063 = 0xD75DB132L;
    int l_1073 = (-1L);
    int l_1074[4];
    unsigned short l_1105 = 5UL;
    union U0 l_1153[4] = {{0xBFC08D9EL},{0xBFC08D9EL},{0xBFC08D9EL},{0xBFC08D9EL}};
    short l_1198[10][1][7] = {{{(-1L),2L,0x35B8L,(-5L),(-1L),0xD3A0L,0xEBF2L}},{{0x7B89L,0x37A8L,(-1L),(-5L),(-1L),0x37A8L,0x7FF7L}},{{0x35B8L,(-1L),(-9L),1L,1L,(-10L),0x8066L}},{{(-3L),1L,1L,(-3L),(-1L),2L,0x37A8L}},{{0x7FF7L,2L,(-9L),(-1L),0xD3A0L,(-9L),0L}},{{0xD3A0L,0x7FF7L,(-10L),0x6F3EL,1L,0x185BL,0x185BL}},{{2L,0x7FF7L,0xD2D1L,0x7FF7L,2L,0xEBF2L,1L}},{{0x22C1L,2L,0x5810L,(-1L),1L,0x6F3EL,0x7FF7L}},{{0x8066L,1L,0x35B8L,0xD3A0L,0L,0x185BL,(-9L)}},{{0x22C1L,(-1L),(-1L),(-3L),(-1L),0x66F1L,6L}}};
    char ***l_1202 = &g_90;
    union U1 * const l_1243 = &g_169;
    const int *l_1294 = &l_1074[1];
    unsigned char l_1312 = 8UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1074[i] = 1L;
    (*l_2) = 0x664DC9EDL;
lbl_1300:
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    {
        int *l_5 = &g_3;
        int **l_6 = &l_5;
        int l_1072 = 0xC3155CE4L;
        const int *l_1095 = &g_3;
        int l_1107 = 4L;
        union U0 l_1172 = {0xF68C5460L};
        char *l_1174[10] = {&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222,&g_222};
        int **l_1196 = (void*)0;
        int **l_1197 = &l_2;
        int l_1203 = 0x30F642ABL;
        union U0 *l_1206 = &l_1153[3];
        int l_1223 = 0L;
        int l_1224 = 0x7387BACDL;
        int l_1225 = 1L;
        int l_1226 = 0L;
        unsigned char l_1227 = 0x65L;
        int * const l_1280 = &l_1225;
        short l_1290 = 0x6899L;
        unsigned char l_1293 = 0x05L;
        int i;
        (*l_6) = l_5;
    }
    for (g_462 = 26; (g_462 < 20); --g_462)
    {
        return g_110;
    }
    for (g_423 = 0; (g_423 <= 6); g_423 += 1)
    {
        int **l_1298 = &g_68;
        int l_1306 = 0xEB5F8B22L;
        int l_1307[3];
        short l_1308 = (-1L);
        int l_1309[8][5] = {{0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL},{(-8L),(-7L),(-8L),(-7L),(-8L)},{0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL},{(-8L),(-7L),(-8L),(-7L),(-8L)},{0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL},{(-8L),(-7L),(-8L),(-7L),(-8L)},{0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL,0x6210ED2CL},{(-8L),(-7L),(-8L),(-7L),(-8L)}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1307[i] = (-1L);
        (*l_1298) = &l_1074[1];
        for (g_950 = 0; (g_950 >= 0); g_950 -= 1)
        {
            char l_1299 = (-1L);
            int l_1303[9][4] = {{(-1L),(-1L),0xA33B657EL,(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0xA33B657EL,(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0xA33B657EL,(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
            int l_1311 = 0xA8D15E2AL;
            int i, j;
            (**g_67) = l_1299;
            if (g_950)
                goto lbl_1300;
            for (l_1073 = 0; (l_1073 >= 0); l_1073 -= 1)
            {
                int *l_1301 = &g_410;
                int *l_1302 = &g_60[1];
                int *l_1304[2];
                char l_1310 = 0xF6L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1304[i] = &g_169.f3;
                l_1312--;
            }
        }
    }
    return g_462;
}







static unsigned func_9(char p_10, const int * p_11, char * p_12)
{
    int *l_1057[9] = {&g_410,&g_410,&g_410,&g_410,&g_410,&g_410,&g_410,&g_410,&g_410};
    union U1 l_1058 = {0xBA99L};
    int i;
    (**g_67) ^= (*p_11);
    (*g_68) &= ((l_1058 , 0xF6F6L) || (((safe_add_func_uint32_t_u_u(g_950, p_10)) , (safe_rshift_func_int8_t_s_u(p_10, 6))) , g_423));
    return g_263;
}







static char * func_13(char p_14, int ** p_15, unsigned p_16, int * p_17)
{
    int * const *l_504 = &g_68;
    int **l_509 = (void*)0;
    union U0 l_533 = {1L};
    union U0 l_537[6] = {{0x29FB792FL},{0x29FB792FL},{1L},{0x29FB792FL},{0x29FB792FL},{1L}};
    char *l_539 = &g_222;
    unsigned l_542 = 1UL;
    int l_554 = 1L;
    int l_560 = 1L;
    int l_561 = (-2L);
    int l_562 = 0L;
    unsigned char l_574 = 253UL;
    union U1 *l_577 = &g_169;
    union U0 l_578 = {1L};
    int **l_579 = (void*)0;
    int *l_593 = &g_462;
    union U0 l_650[6] = {{0x71E8DF26L},{0x71E8DF26L},{0x71E8DF26L},{0x71E8DF26L},{0x71E8DF26L},{0x71E8DF26L}};
    int *l_677 = &g_462;
    char l_760 = 0xC9L;
    int l_764 = 0x72C788FAL;
    int l_766 = 0xA7469592L;
    int l_773 = 1L;
    union U0 **l_806 = &g_236;
    char l_833 = 0x38L;
    int l_834 = 0x4E7501F1L;
    int l_838 = 0x31043C36L;
    int l_839[8];
    unsigned char l_911[1][6];
    union U0 * const l_925 = &l_537[0];
    int l_932 = 2L;
    unsigned l_954 = 4UL;
    unsigned l_971 = 4294967295UL;
    int i, j;
    for (i = 0; i < 8; i++)
        l_839[i] = 4L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_911[i][j] = 3UL;
    }
lbl_807:
    for (p_16 = 0; (p_16 <= 1); p_16 += 1)
    {
        unsigned char l_503 = 0xF9L;
        union U0 l_505 = {0x11DE1272L};
        int l_511 = 0x689DB267L;
        char *l_536 = &g_295[0][5][2].f1;
        union U1 * const *l_543 = &g_168;
        int l_558[6] = {0xB211D238L,0xB211D238L,0xB211D238L,0xB211D238L,0xB211D238L,0xB211D238L};
        int i;
    }
    if ((safe_add_func_uint16_t_u_u((**l_504), (((safe_mod_func_int32_t_s_s((((safe_sub_func_int32_t_s_s((**l_504), (safe_mod_func_int32_t_s_s(l_574, (safe_sub_func_int32_t_s_s(0x014B66FDL, func_35((**l_504), ((void*)0 != l_577), l_578, l_579, p_16))))))) , p_14) && (**l_504)), 1L)) ^ 0UL) , g_3))))
    {
        union U0 l_594 = {0xC45C7F01L};
        int l_597 = (-1L);
        unsigned short l_636 = 65531UL;
        const union U0 **l_641 = &g_360[4];
        char **l_659 = &g_57[5][1][0];
        unsigned short l_680 = 65532UL;
        short l_698 = 6L;
        int l_706 = 0x52F71C07L;
        for (g_169.f3 = 27; (g_169.f3 >= 7); --g_169.f3)
        {
            int **l_618 = &g_68;
            union U1 *l_620[3];
            const char *l_627 = &l_594.f1;
            union U0 l_645 = {-1L};
            char *l_678 = &g_222;
            int l_699 = 0x0C7D4FFAL;
            int *l_700 = &l_560;
            int *l_701 = (void*)0;
            int *l_702 = &l_560;
            int *l_703 = &g_60[0];
            int *l_704 = (void*)0;
            int *l_705[6];
            unsigned short l_707 = 1UL;
            char *l_712[4][4] = {{&g_169.f1,&g_169.f1,&l_650[4].f1,&g_169.f1},{&g_169.f1,(void*)0,(void*)0,&g_169.f1},{(void*)0,&g_169.f1,(void*)0,(void*)0},{&g_169.f1,&g_169.f1,&l_650[4].f1,&g_169.f1}};
            unsigned char l_716 = 1UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_620[i] = &g_169;
            for (i = 0; i < 6; i++)
                l_705[i] = &l_699;
        }
        (*l_641) = (*l_641);
        (**g_67) ^= ((*l_593) != 0UL);
    }
    else
    {
        short l_722 = 0xCEEEL;
        int **l_727 = &l_677;
        int l_737[3][8] = {{1L,(-2L),1L,(-2L),1L,(-2L),1L,(-2L)},{1L,(-2L),1L,(-2L),1L,(-2L),1L,(-2L)},{1L,(-2L),1L,(-2L),1L,(-2L),1L,(-2L)}};
        unsigned short l_745 = 1UL;
        int *l_787 = &l_764;
        int *l_792 = &l_764;
        unsigned l_813 = 4294967295UL;
        unsigned char l_842 = 0UL;
        char l_849[4][2][7] = {{{0x12L,4L,1L,1L,4L,0x12L,(-9L)},{0x12L,1L,3L,0L,0x74L,0x67L,0L}},{{1L,0x6AL,0L,0L,(-1L),1L,0x74L},{(-1L),1L,0xF3L,0x1CL,0x1CL,0xF3L,1L}},{{0x85L,4L,0xF3L,1L,0xADL,0x1CL,3L},{0x8BL,0L,0L,0xCDL,0x41L,0x29L,0L}},{{0xF3L,0xCDL,3L,1L,0L,0L,1L},{1L,0L,1L,0x1CL,0L,(-1L),0x85L}}};
        unsigned short l_851 = 5UL;
        short l_900 = 0x4224L;
        unsigned l_903 = 0x24AFE5B6L;
        union U1 l_904 = {1UL};
        char ***l_923 = &g_90;
        int *l_972 = &g_462;
        unsigned short l_973 = 0x2D64L;
        unsigned l_1024[2][10] = {{8UL,4294967290UL,4294967294UL,7UL,4294967294UL,4294967290UL,8UL,8UL,4294967290UL,4294967294UL},{4294967290UL,8UL,8UL,4294967290UL,4294967294UL,7UL,4294967294UL,4294967290UL,8UL,8UL}};
        union U0 l_1049[2][4][1] = {{{{0xA8A30BAEL}},{{-1L}},{{0xA8A30BAEL}},{{-1L}}},{{{0xA8A30BAEL}},{{-1L}},{{0xA8A30BAEL}},{{-1L}}}};
        int i, j, k;
        if ((((safe_lshift_func_int8_t_s_s((**l_504), 3)) < (**l_504)) || ((l_722 && ((((((((p_16 > ((l_722 != g_58) | ((safe_div_func_uint32_t_u_u((p_16 == (safe_div_func_int8_t_s_s(func_35((l_722 | g_295[0][5][2].f1), (**l_504), l_650[4], l_727, (**l_504)), 0x96L))), g_159)) & g_263))) & (**l_504)) > p_16) >= g_410) , 0x6FDBL) >= (**l_727)) ^ (*l_593)) & g_169.f1)) , g_3)))
        {
            int l_730 = 1L;
            int l_739 = 0L;
            int l_740 = 0x68964661L;
            int l_741[10] = {0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL,0x8870449AL};
            unsigned l_742 = 1UL;
            int *l_748 = &g_410;
            int i;
            for (g_263 = (-27); (g_263 == 4); g_263 = safe_add_func_int8_t_s_s(g_263, 6))
            {
                int *l_731 = &l_561;
                int *l_732 = (void*)0;
                int *l_733 = &l_560;
                int l_734[6][10][3] = {{{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L}},{{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL}},{{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0xC565FC9BL},{0xC565FC9BL,8L,0x6DF7CDE7L},{0xC565FC9BL,1L,0xAAEBE736L},{0xC565FC9BL,(-1L),0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL}},{{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)}},{{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L}},{{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,(-2L)},{0x364C6E73L,0xAAEBE736L,0x364C6E73L},{0x364C6E73L,0x6DF7CDE7L,0xCEB553DBL},{0x364C6E73L,0xC565FC9BL,0xCEB553DBL},{(-2L),0x6DF7CDE7L,(-2L)},{(-2L),0xC565FC9BL,0x364C6E73L}}};
                int *l_735 = (void*)0;
                int *l_736 = &g_462;
                int *l_738[6][8] = {{&l_737[0][4],&l_560,&l_737[0][4],&l_737[0][4],&l_560,&l_737[0][4],&l_737[0][4],&l_560},{&l_560,&l_737[0][4],&l_737[0][4],&l_560,&l_737[0][4],&l_737[0][4],&l_560,&l_737[0][4]},{&l_560,&l_560,&g_60[1],&l_560,&l_560,&g_60[1],&l_560,&l_560},{&l_737[0][4],&l_560,&l_737[0][4],&l_737[0][4],&l_560,&l_737[0][4],&l_737[0][4],&l_560},{&l_560,&l_737[0][4],&l_737[0][4],&l_560,&l_737[0][4],&l_737[0][4],&l_560,&l_737[0][4]},{&l_560,&l_560,&g_60[1],&l_560,&l_560,&g_60[1],&l_560,&l_560}};
                int i, j, k;
                l_742++;
                --l_745;
                l_748 = (*p_15);
                if ((**p_15))
                    break;
            }
        }
        else
        {
            unsigned l_754 = 0x64B43F06L;
            int l_757 = 0xF05B168BL;
            int l_758 = 0x3AC2CF3AL;
            int l_761 = 0xF03687DBL;
            int l_762[1][4] = {{0xED9EC8C9L,0xED9EC8C9L,0xED9EC8C9L,0xED9EC8C9L}};
            union U1 * const *l_784 = (void*)0;
            char **l_791 = (void*)0;
            union U0 l_805[5] = {{4L},{4L},{4L},{4L},{4L}};
            int *l_808 = (void*)0;
            int *l_809 = &l_764;
            int *l_810 = &l_561;
            int *l_811 = (void*)0;
            int *l_812[4][2][7] = {{{&l_766,&l_758,&l_737[0][4],&l_562,&l_561,&l_757,&l_761},{&l_562,&l_757,&l_554,&l_757,&l_757,&l_554,&l_757}},{{&l_766,&l_562,&l_758,&l_562,&l_757,&l_554,&l_562},{&g_60[0],&l_773,&l_758,&l_737[0][4],(void*)0,&l_757,(void*)0}},{{&l_562,(void*)0,(void*)0,&l_554,&l_757,&l_562,&l_562},{&l_562,&l_757,&g_410,&l_773,&l_757,&l_757,&l_737[0][4]}},{{&l_562,&l_758,&l_562,&l_766,&l_562,&l_758,&l_562},{&l_758,&l_766,&l_758,&l_737[0][4],&l_562,&l_561,&l_757}}};
            unsigned char l_846 = 255UL;
            int l_850 = 1L;
            int i, j, k;
            for (g_169.f1 = 14; (g_169.f1 > 19); g_169.f1 = safe_add_func_uint32_t_u_u(g_169.f1, 5))
            {
                int *l_751 = &l_562;
                int l_752 = 3L;
                int *l_753[6][2] = {{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561}};
                unsigned l_775 = 2UL;
                int *l_793[10][10] = {{&l_762[0][1],&l_764,&l_764,&l_762[0][1],&l_554,&l_761,&l_762[0][1],&l_562,(void*)0,&l_758},{&g_462,&l_554,&g_60[0],&g_410,(void*)0,&l_762[0][1],&l_764,&l_762[0][1],(void*)0,&g_410},{&l_758,&g_462,&l_758,&l_762[0][1],&g_60[0],&g_410,(void*)0,&l_752,&g_410,&l_562},{&l_562,&g_410,&l_554,&l_764,&l_752,&l_764,&l_764,&l_752,&l_764,&l_554},{&g_60[0],&g_60[0],&l_758,&l_762[0][2],&g_410,&g_462,&l_764,&l_762[0][1],&l_752,&l_761},{&l_764,(void*)0,&g_60[0],&l_562,&l_764,&g_60[0],&l_764,&l_562,&g_410,&g_60[0]},{&l_764,&g_410,&l_761,&g_462,&l_562,&g_410,&l_554,&l_764,&l_752,&l_764},{&l_752,&g_60[0],&l_762[0][1],&g_60[0],&g_410,&g_410,&g_60[0],&l_762[0][1],&g_60[0],&l_752},{&l_764,&g_60[1],&g_410,&l_762[0][1],&g_410,&l_764,&l_761,&g_60[0],(void*)0,&l_762[0][2]},{&l_554,&l_758,&l_764,&g_60[1],&g_410,&g_60[1],&l_764,&l_758,&l_554,&l_752}};
                char l_800 = 0L;
                int i, j;
                --l_754;
                if ((*g_68))
                {
                    int l_759 = 0xC2F0C947L;
                    int l_763 = 1L;
                    int l_765 = (-1L);
                    char l_768 = 4L;
                    int l_769 = 0x3CD07BCAL;
                    int l_770 = 0x410B9C65L;
                    int l_771 = 1L;
                    int l_772 = 0x38432A1DL;
                    int l_774[5][2][10] = {{{0x5CCC7AF1L,0xC84C09EDL,0x5CCC7AF1L,0x1F5969C7L,0xFE0152B3L,0x5CCC7AF1L,(-9L),0x01B82497L,0x1F5969C7L,0x1F5969C7L},{0x01B82497L,0xC84C09EDL,0x960C5C86L,0xFE0152B3L,0xFE0152B3L,0x960C5C86L,0xC84C09EDL,0x01B82497L,(-8L),0xFE0152B3L}},{{0x01B82497L,(-9L),0x5CCC7AF1L,0xFE0152B3L,0x1F5969C7L,0x5CCC7AF1L,0xC84C09EDL,0x5CCC7AF1L,0x1F5969C7L,0xFE0152B3L},{0x5CCC7AF1L,0xC84C09EDL,0x5CCC7AF1L,0x1F5969C7L,0xFE0152B3L,0x5CCC7AF1L,(-9L),0x01B82497L,0x1F5969C7L,0x1F5969C7L}},{{0x01B82497L,0xC84C09EDL,0x960C5C86L,0xFE0152B3L,0xFE0152B3L,0x960C5C86L,0xC84C09EDL,0x01B82497L,(-8L),0xFE0152B3L},{0x01B82497L,(-9L),0x5CCC7AF1L,0xFE0152B3L,0x2139C61CL,(-8L),0x122A9208L,(-8L),0x2139C61CL,0xCB2CDD15L}},{{(-8L),0x122A9208L,(-8L),0x2139C61CL,0xCB2CDD15L,(-8L),0x93A7A6D1L,0x1F5969C7L,0x2139C61CL,0x2139C61CL},{0x1F5969C7L,0x122A9208L,0xFE0152B3L,0xCB2CDD15L,0xCB2CDD15L,0xFE0152B3L,0x122A9208L,0x1F5969C7L,1L,0xCB2CDD15L}},{{0x1F5969C7L,0x93A7A6D1L,(-8L),0xCB2CDD15L,0x2139C61CL,(-8L),0x122A9208L,(-8L),0x2139C61CL,0xCB2CDD15L},{(-8L),0x122A9208L,(-8L),0x2139C61CL,0xCB2CDD15L,(-8L),0x93A7A6D1L,0x1F5969C7L,0x2139C61CL,0x2139C61CL}}};
                    int i, j, k;
                    l_775++;
                    if ((**p_15))
                    {
                        char *l_781 = &g_295[0][5][2].f1;
                        (*l_751) |= (safe_lshift_func_uint8_t_u_s(func_24(func_51(g_780, (*p_15), l_781), ((safe_add_func_uint32_t_u_u(((void*)0 != l_784), (**l_727))) && (((safe_sub_func_uint8_t_u_u(((p_14 > 0L) > (*p_17)), 0xC7L)) , g_767) > p_14)), l_787, p_16), 5));
                        (*l_727) = (*p_15);
                        return (**g_89);
                    }
                    else
                    {
                        unsigned l_788 = 4294967292UL;
                        (*l_727) = (*p_15);
                        if ((*l_751))
                            continue;
                        if ((*p_17))
                            break;
                        --l_788;
                    }
                    if (((*g_89) == l_791))
                    {
                        l_793[3][4] = l_792;
                        p_17 = (*p_15);
                    }
                    else
                    {
                        if ((*g_68))
                            break;
                    }
                }
                else
                {
                    unsigned short l_796 = 0x6352L;
                    int * const *l_799 = &l_793[7][5];
                    for (g_767 = 0; (g_767 <= 0); ++g_767)
                    {
                        (*l_787) ^= (((-6L) | ((l_796 && (((((((safe_lshift_func_int8_t_s_s(l_800, ((g_260 , ((func_35((safe_mod_func_uint16_t_u_u(func_45(&l_593, ((safe_lshift_func_int16_t_s_u(l_754, 4)) , l_805[4])), 0xDAE3L)), p_14, (*g_236), g_506[2][4], p_16) , g_780.f1) | g_107[1][6][1])) ^ g_295[0][5][2].f0))) , l_806) != &g_360[4]) , 5L) | 65533UL) & l_762[0][2]) < 0L)) | (*l_751))) <= 6L);
                        if (g_169.f1)
                            goto lbl_807;
                    }
                }
                return (**g_89);
            }
            --l_813;
            for (g_169.f2 = (-15); (g_169.f2 < 13); ++g_169.f2)
            {
                short l_821 = 0x6F5BL;
                short l_822 = 0x6E0EL;
                int l_835 = 0x55D1535EL;
                int l_836[4] = {(-1L),(-1L),(-1L),(-1L)};
                short l_845 = 1L;
                int i;
                if ((*l_810))
                    break;
                for (p_14 = 8; (p_14 == 9); p_14++)
                {
                    union U1 *l_820 = &g_169;
                    int l_831 = 0xBEBB95C7L;
                    int l_837[9] = {8L,1L,1L,8L,1L,1L,8L,1L,1L};
                    int i;
                    l_820 = l_820;
                    if ((*g_68))
                    {
                        (*l_810) &= ((~(**l_504)) < (((0L || ((func_35((p_14 , (g_295[0][5][2].f0 , ((func_35(g_780.f0, (+p_14), l_805[4], &l_809, p_16) && p_14) <= 6UL))), p_16, l_805[4], &g_68, l_821) | l_822) , l_822)) <= p_16) ^ 65535UL));
                        (*l_727) = (void*)0;
                    }
                    else
                    {
                        union U1 ***l_823 = (void*)0;
                        union U1 **l_825 = &l_820;
                        union U1 ***l_824 = &l_825;
                        union U0 l_830 = {0x7AC3122BL};
                        int **l_832[2][7] = {{&l_808,&l_812[3][0][6],&l_809,&l_812[3][0][6],&l_808,&l_808,&l_812[3][0][6]},{&l_809,&l_812[3][1][6],&l_809,&l_812[3][0][6],&l_812[3][0][6],&l_809,&l_812[3][1][6]}};
                        int l_841 = 0x47B3F08DL;
                        int i, j;
                        (*l_824) = &g_168;
                        (*l_810) ^= ((safe_mod_func_int16_t_s_s((((p_16 ^ (safe_sub_func_int8_t_s_s(0x2FL, ((func_45(&g_68, l_830) & g_169.f2) > ((func_35(p_16, l_831, (*g_236), l_832[1][3], p_16) , p_16) , p_14))))) | g_767) != 0x88L), p_16)) >= l_833);
                        (*l_809) ^= (*g_68);
                        l_842++;
                    }
                }
                l_846++;
                ++l_851;
            }
        }
        for (l_542 = 24; (l_542 > 54); ++l_542)
        {
            unsigned l_863[2][5];
            int l_868[3];
            int l_873[8][2] = {{0xCB149763L,0x90712A5BL},{0xDF9EB3A3L,0xCB149763L},{0x1FAC9C49L,0x1FAC9C49L},{0x1FAC9C49L,0xCB149763L},{0xDF9EB3A3L,0x90712A5BL},{0xCB149763L,0x90712A5BL},{0xDF9EB3A3L,0xCB149763L},{0x1FAC9C49L,0x1FAC9C49L}};
            char l_882 = 0x18L;
            unsigned short l_885 = 0x99FAL;
            union U0 *l_905 = &l_578;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_863[i][j] = 0x86CB45CCL;
            }
            for (i = 0; i < 3; i++)
                l_868[i] = 0xD6076EE6L;
            for (g_58 = 0; (g_58 == (-15)); g_58--)
            {
                unsigned char l_858 = 1UL;
                int l_866[8] = {(-3L),0L,0L,(-3L),0L,0L,(-3L),0L};
                char l_874 = 0xCEL;
                int i;
                for (l_562 = 2; (l_562 >= 0); l_562 -= 1)
                {
                    int *l_861 = &l_838;
                    int l_869 = 0x512E8A6CL;
                    int l_870 = (-3L);
                    int l_871[4][8][7] = {{{0x76534A92L,0x015BE61BL,0xE9165D3CL,(-7L),(-5L),0x6CDCFC4EL,0xE9B29F2AL},{0x3EE46852L,1L,(-1L),0xE9B29F2AL,(-2L),0xF44DFC49L,0x160403E4L},{0x3EE46852L,0x0179743AL,(-9L),0x015BE61BL,(-1L),0xED7F45EAL,6L},{0x76534A92L,(-1L),0x3261C893L,0xF46987C3L,0xCEA7DD30L,0xA1B5BFD5L,(-5L)},{0xCEA7DD30L,0L,0xAFA0D91AL,0x4DF45518L,1L,(-2L),0L},{0xC0ABEAADL,(-5L),6L,(-1L),5L,6L,1L},{(-5L),0x106EEBD3L,(-2L),0L,0xC7F02BB0L,0L,(-5L)},{1L,0xC587FB3EL,(-3L),(-3L),0xC587FB3EL,1L,0xAFA0D91AL}},{{0xF46987C3L,0x4BF7A2BAL,0L,0xDF4BA375L,(-1L),(-5L),9L},{(-1L),(-3L),(-7L),(-1L),1L,0x106EEBD3L,(-2L)},{0xE9165D3CL,0x4BF7A2BAL,(-1L),1L,6L,4L,0x6B5E5A2AL},{0x3B998EACL,0xC587FB3EL,0xF40E9DBDL,0x63BBDAE1L,0xF46987C3L,(-3L),6L},{5L,0x106EEBD3L,0x1323E2D0L,(-2L),0x76534A92L,(-1L),0L},{(-10L),(-5L),(-5L),0x63BBDAE1L,0xC0ABEAADL,0L,(-4L)},{0x797BD153L,0x0FB8CBB6L,1L,(-7L),0x91E61BA0L,0x3EE46852L,(-7L)},{(-2L),0xA1B5BFD5L,(-1L),0L,0x6B5E5A2AL,0xC7F02BB0L,0x9E081B0EL}},{{0xF40E9DBDL,(-4L),0xCE1900F9L,0x1323E2D0L,(-2L),1L,(-2L)},{(-5L),0x35980FF9L,0xCE1900F9L,0L,0xBD43E602L,(-2L),0xAFA0D91AL},{0L,(-6L),(-1L),0xCEA7DD30L,(-2L),1L,0x4BF7A2BAL},{0x51A004C4L,0x09FE9D5BL,1L,0x029DC78DL,(-1L),0L,(-1L)},{(-1L),(-2L),(-5L),0xF24D5521L,(-2L),1L,0x76534A92L},{0x3EE46852L,0x3261C893L,0xD359E01DL,0L,(-4L),(-5L),1L},{(-1L),0xCD7C3422L,9L,0L,0L,9L,0xCD7C3422L},{0xD359E01DL,0x1323E2D0L,(-3L),0x9E081B0EL,0xAFA0D91AL,0xC12331EEL,(-2L)}},{{0L,0xAFA0D91AL,1L,0x0FB8CBB6L,0x80BBE383L,(-10L),(-5L)},{0x5E7E9A10L,0xBD43E602L,0L,0x9E081B0EL,0x51A004C4L,0L,0x91E61BA0L},{0xCEA7DD30L,(-5L),0x09FE9D5BL,0L,1L,(-5L),(-1L)},{0xCE1900F9L,4L,0xDF4BA375L,9L,(-2L),0x6A74126EL,0xCD7C3422L},{0xCD7C3422L,1L,0xF24D5521L,0x6CDCFC4EL,0x35980FF9L,0L,0L},{4L,1L,(-9L),0x4DF45518L,5L,(-2L),(-1L)},{(-9L),0xDF4BA375L,(-5L),0xC0ABEAADL,0L,(-3L),0xCEA7DD30L},{1L,0xCD7C3422L,(-1L),(-10L),(-3L),(-7L),0L}}};
                    int l_872[10][7] = {{0xA4B9152DL,(-1L),6L,2L,0xB555D1B7L,(-1L),0xAD3C6CB2L},{(-1L),1L,0x0C33F74CL,0x0DB6C616L,(-10L),0xAD3C6CB2L,(-1L)},{0x997631CEL,(-3L),6L,0x0D504F37L,1L,0x0DB6C616L,(-2L)},{0x5661F6C4L,(-1L),(-1L),5L,0xD546FA9EL,0xD546FA9EL,5L},{0x5661F6C4L,0xBE771FE2L,0x5661F6C4L,(-3L),0x0099DDFCL,0xA4B9152DL,0xFC7DABB5L},{0x997631CEL,0xFC7DABB5L,1L,0xD546FA9EL,(-1L),0xC94AC4BAL,0xEDB81328L},{(-1L),(-10L),(-2L),0xC94AC4BAL,0x0DB6C616L,0xA4B9152DL,0xE484789FL},{0xA4B9152DL,0xB555D1B7L,0xAD3C6CB2L,0x76C713D0L,(-1L),0xD546FA9EL,0x0D504F37L},{0x0DB6C616L,6L,0x76C713D0L,0x76C713D0L,(-1L),0x997631CEL,0xFC7DABB5L},{0xA4B9152DL,0x997631CEL,(-1L),0xBE771FE2L,0x0099DDFCL,0x76C713D0L,1L}};
                    int *l_880 = &l_866[3];
                    int *l_881 = &l_764;
                    int *l_883 = &g_169.f3;
                    int *l_884[10] = {(void*)0,(void*)0,&l_868[0],(void*)0,(void*)0,&l_868[0],(void*)0,(void*)0,&l_868[0],(void*)0};
                    int i, j, k;
                    if ((**p_15))
                    {
                        int *l_862[6] = {&l_737[0][4],&l_764,&l_764,&l_737[0][4],&l_764,&l_764};
                        int i;
                        l_858--;
                        (*l_727) = l_861;
                        if ((**l_504))
                            break;
                        l_863[1][4]++;
                    }
                    else
                    {
                        int *l_867[7] = {&l_866[7],&l_866[7],&l_866[7],&l_866[7],&l_866[7],&l_866[7],&l_866[7]};
                        int i, j, k;
                        g_875--;
                        return g_57[(l_562 + 4)][l_562][(l_562 + 2)];
                    }
                    (*l_861) |= (safe_lshift_func_uint8_t_u_u(g_767, p_16));
                    ++l_885;
                    for (l_874 = 0; (l_874 < 7); l_874++)
                    {
                        (*l_792) |= (*g_68);
                    }
                }
                (*l_593) = (((safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((0x59947EF6L ^ ((0xD416L != ((((((*g_68) | (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_900, g_69.f0)), 4))) > (((*g_168) , (0xD71BL & (safe_lshift_func_int8_t_s_s((0L < g_69.f0), 2)))) , l_874)) ^ (*g_68)) >= 254UL) <= l_866[7])) && l_866[5])), l_903)) >= 0xEA19L), p_16)) , l_866[7]), 0x4CCA306FL)) , p_16) , (*g_68));
                if (l_868[1])
                    break;
                if (l_874)
                    continue;
            }
            (*l_806) = (l_904 , l_905);
        }
        (*l_787) = 1L;
        for (l_760 = 0; (l_760 <= 3); l_760 += 1)
        {
            unsigned char l_909 = 0x6CL;
            union U0 l_910 = {0xE4CCA56AL};
            int **l_913 = &l_787;
            union U0 l_924 = {0x97AA697BL};
            int l_939 = 0x46757618L;
            int l_951 = 0x1D50CAA7L;
            int l_952 = 0x0BCF3E4BL;
            int l_953 = 0x8B478D9EL;
            const union U1 l_957[4] = {{0xEC2BL},{0xEC2BL},{0xEC2BL},{0xEC2BL}};
            const char *l_977 = &l_910.f1;
            union U0 **l_978 = (void*)0;
            int l_984 = 0xA483D0C2L;
            int l_985 = 0x611DB2D5L;
            int l_986 = (-1L);
            int l_987[1][9][9] = {{{0x3D242955L,0x43F15F92L,0L,0L,0x43F15F92L,0x3D242955L,0x43F15F92L,0L,0L},{(-8L),(-8L),0x1DFC8EB1L,0L,0x1DFC8EB1L,(-8L),(-8L),0x1DFC8EB1L,0L},{0xCC063E44L,0x43F15F92L,0xCC063E44L,0x3D242955L,0x3D242955L,0xCC063E44L,0x43F15F92L,0xCC063E44L,0x3D242955L},{0x2EF07381L,0x1DFC8EB1L,0x1DFC8EB1L,0x2EF07381L,(-9L),0x2EF07381L,0x1DFC8EB1L,0x1DFC8EB1L,0x2EF07381L},{0xAED58DB4L,0x3D242955L,0L,0x3D242955L,0xAED58DB4L,0xAED58DB4L,0x3D242955L,0L,0x3D242955L},{0x1DFC8EB1L,(-9L),0L,0L,(-9L),0x1DFC8EB1L,(-9L),0L,0L},{0xAED58DB4L,0xAED58DB4L,0x3D242955L,0L,0L,0xCC063E44L,0xCC063E44L,0L,0xAED58DB4L},{(-9L),0x1DFC8EB1L,(-9L),0L,0L,(-9L),0x1DFC8EB1L,(-9L),0L},{0x43F15F92L,0L,0L,0x43F15F92L,0x3D242955L,0x43F15F92L,0L,0L,0x43F15F92L}}};
            int i, j, k;
        }
    }
    for (g_169.f3 = 0; (g_169.f3 < (-10)); --g_169.f3)
    {
        short l_1054 = 0x497EL;
        int * const l_1055[10] = {&g_60[0],&g_60[0],&g_60[0],&g_60[0],&g_60[0],&g_60[0],&g_60[0],&g_60[0],&g_60[0],&g_60[0]};
        int **l_1056 = &l_677;
        int i;
        if (l_1054)
            break;
        (**g_67) = (-4L);
        for (g_159 = 1; (g_159 >= 0); g_159 -= 1)
        {
            (*g_68) ^= 0L;
        }
        (*l_1056) = (l_1054 , l_1055[0]);
    }
    return (**g_89);
}







static unsigned func_20(short p_21, int * p_22)
{
    unsigned char l_23[7][10] = {{0UL,0x1BL,255UL,246UL,255UL,0x1BL,0UL,0x1BL,255UL,246UL},{0x4FL,246UL,0x4FL,0x1BL,0x67L,0x1BL,0x4FL,246UL,0x4FL,0x1BL},{0UL,246UL,1UL,246UL,0UL,0x79L,0UL,246UL,1UL,246UL},{0x67L,0x1BL,0x4FL,246UL,0x4FL,0x1BL,0x67L,0x1BL,0x4FL,246UL},{255UL,246UL,255UL,0x1BL,0UL,0x1BL,255UL,246UL,255UL,0x1BL},{0x67L,246UL,0x75L,246UL,0x67L,0x79L,0x67L,246UL,0x75L,246UL},{0UL,0x1BL,255UL,0x1BL,1UL,0x79L,255UL,0x79L,1UL,0x1BL}};
    union U0 l_55 = {0x0BC5DE30L};
    union U1 l_388 = {0xD88DL};
    int *l_389 = &g_3;
    int l_411 = 0xC4D4CF3EL;
    int l_418 = 0x4B1917BDL;
    int l_419 = 0xCA403D06L;
    int l_420 = 0x91EC579CL;
    int l_421 = (-7L);
    int l_422[2];
    const char *l_428 = &l_55.f1;
    unsigned l_433 = 0x0F80CBDDL;
    int **l_497 = (void*)0;
    int **l_498[5][10] = {{&l_389,&g_68,&l_389,&g_68,&g_68,&g_68,&g_68,&g_68,&g_68,&l_389},{(void*)0,(void*)0,&l_389,&g_68,&l_389,&l_389,&l_389,&g_68,&l_389,(void*)0},{&l_389,&g_68,&l_389,&l_389,&g_68,&g_68,&l_389,&l_389,&g_68,&l_389},{&l_389,(void*)0,&g_68,&g_68,(void*)0,&g_68,&g_68,(void*)0,&l_389,&l_389},{&l_389,&g_68,&l_389,(void*)0,(void*)0,&l_389,&g_68,&l_389,&l_389,&l_389}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_422[i] = 1L;
    for (p_21 = 0; (p_21 <= 6); p_21 += 1)
    {
        char *l_56 = &l_55.f1;
        int l_82 = 0xD390861EL;
        union U0 l_83[3] = {{0L},{0L},{0L}};
        int *l_85 = &g_3;
        int **l_84 = &l_85;
        int l_403 = 0x54FC0839L;
        int *l_409 = &g_410;
        union U1 * const *l_430 = &g_168;
        int l_436 = 0xA19177B9L;
        int l_443 = (-3L);
        int l_444 = 0xC10AAB86L;
        int l_445[3];
        unsigned short l_447 = 0UL;
        union U0 **l_490[10] = {&g_236,(void*)0,(void*)0,&g_236,(void*)0,(void*)0,&g_236,(void*)0,(void*)0,&g_236};
        int i;
        for (i = 0; i < 3; i++)
            l_445[i] = 1L;
        (*l_409) ^= ((p_21 , ((((g_3 || func_24(func_29(((func_35(((safe_mod_func_int8_t_s_s(((((((((safe_add_func_int32_t_s_s(0x6A952366L, g_3)) == func_45(func_48(func_51(l_55, &g_3, l_56), (*p_22)), g_69)) < 0x383A4A27L) != 0x5C50L) , l_23[4][2]) ^ 0x0842E3BEL) || l_55.f0) , l_55.f3), p_21)) , 255UL), l_82, l_83[2], l_84, (*l_85)) || (*l_85)) , p_22), l_388, l_389, l_389, g_295[0][5][2].f1), g_69.f0, (*l_84), l_403)) || 0x72L) , (*g_67)) != p_22)) , (*p_22));
        for (g_164 = 0; (g_164 <= 6); g_164 += 1)
        {
            int *l_412 = &l_388.f3;
            int *l_413 = &g_169.f3;
            int *l_414 = &l_82;
            int l_415 = 1L;
            int *l_416 = &l_415;
            int *l_417[9] = {&l_388.f3,&l_388.f3,&l_388.f3,&l_388.f3,&l_388.f3,&l_388.f3,&l_388.f3,&l_388.f3,&l_388.f3};
            union U1 *l_454[3][4] = {{&l_388,&l_388,&l_388,(void*)0},{&l_388,(void*)0,(void*)0,&l_388},{&l_388,(void*)0,(void*)0,(void*)0}};
            unsigned l_480 = 2UL;
            union U0 **l_495 = (void*)0;
            int i, j;
            --g_423;
            if (((func_24(l_428, l_23[g_164][(g_164 + 3)], &l_415, g_429) != ((void*)0 == l_430)) , func_45(func_48((*g_90), (((p_21 <= (*l_389)) || 0x88FAFBCDL) < (*l_409))), l_55)))
            {
                char l_437 = 5L;
                int l_439[6][8][5] = {{{6L,(-8L),0x54F13C02L,(-8L),6L},{0x1C23FB7FL,0x49CA7C12L,0L,0L,0L},{6L,(-8L),6L,(-9L),1L},{0L,0xBC92F24FL,(-1L),0x49CA7C12L,0L},{6L,(-9L),(-1L),0L,6L},{0L,(-1L),(-1L),0L,0L},{1L,0L,6L,0x590BB7B8L,6L},{0L,0xBC92F24FL,0L,(-1L),0x1C23FB7FL}},{{6L,0x590BB7B8L,0x54F13C02L,0x590BB7B8L,6L},{0L,0x49CA7C12L,5L,0L,0xBC92F24FL},{6L,0x590BB7B8L,6L,0L,1L},{0x1C23FB7FL,0xBC92F24FL,0x49CA7C12L,0x49CA7C12L,0xBC92F24FL},{6L,0L,(-1L),(-9L),6L},{0xBC92F24FL,(-1L),0x49CA7C12L,0L,0x1C23FB7FL},{1L,(-9L),6L,(-8L),6L},{0xBC92F24FL,0xBC92F24FL,5L,(-1L),0L}},{{6L,(-8L),0x54F13C02L,(-8L),6L},{0x1C23FB7FL,0x49CA7C12L,0L,0L,0L},{6L,(-8L),6L,(-9L),1L},{0L,0xBC92F24FL,(-1L),0x49CA7C12L,0L},{6L,(-9L),(-1L),0L,6L},{0L,(-1L),(-1L),0L,0L},{1L,0L,6L,0x590BB7B8L,6L},{0L,0xBC92F24FL,0L,(-1L),0x1C23FB7FL}},{{6L,0x590BB7B8L,0x54F13C02L,0x590BB7B8L,6L},{0L,0x49CA7C12L,5L,0L,0xBC92F24FL},{6L,0x590BB7B8L,6L,0L,1L},{0x1C23FB7FL,0xBC92F24FL,0x49CA7C12L,0x49CA7C12L,0xBC92F24FL},{6L,0L,(-1L),(-9L),6L},{0xBC92F24FL,(-1L),0x49CA7C12L,0L,0x1C23FB7FL},{1L,(-9L),6L,(-8L),6L},{0xBC92F24FL,0xBC92F24FL,5L,(-1L),0L}},{{6L,(-8L),0x54F13C02L,(-8L),6L},{0x1C23FB7FL,0x49CA7C12L,0L,0L,0L},{6L,(-8L),6L,(-9L),1L},{0L,0xBC92F24FL,(-1L),0x49CA7C12L,0L},{6L,(-9L),(-1L),0L,6L},{0L,(-1L),(-1L),0L,0L},{1L,0L,6L,0x590BB7B8L,6L},{0L,0xBC92F24FL,0L,(-1L),0x1C23FB7FL}},{{6L,0x590BB7B8L,0x54F13C02L,0x590BB7B8L,6L},{0L,0x49CA7C12L,5L,0L,0xBC92F24FL},{6L,0x590BB7B8L,6L,0L,1L},{0x1C23FB7FL,0xBC92F24FL,0x49CA7C12L,0x49CA7C12L,0xBC92F24FL},{6L,0L,(-1L),(-9L),6L},{0xBC92F24FL,(-1L),0x49CA7C12L,0L,0x1C23FB7FL},{1L,(-9L),6L,(-8L),6L},{0xBC92F24FL,0xBC92F24FL,5L,(-1L),0L}}};
                union U0 *l_450 = (void*)0;
                int l_466 = 0xA16BF239L;
                unsigned l_473 = 9UL;
                int i, j, k;
                (*l_416) = (-3L);
                (*l_414) |= ((g_169.f1 , ((1L && g_159) , (safe_mod_func_uint16_t_u_u(((((p_21 , func_45(&g_68, l_55)) | g_107[1][6][0]) , 0x5AED07BDL) >= g_3), l_433)))) >= 0x65F4L);
                for (l_420 = 4; (l_420 >= 0); l_420 -= 1)
                {
                    int l_434[3];
                    int l_435 = 0xC41005D4L;
                    int l_438 = 0xC6196EC6L;
                    int l_440 = (-3L);
                    int l_441 = 0L;
                    int l_442 = 0xC8DF95EBL;
                    int l_446[6] = {0x5D9E15D9L,0x5D9E15D9L,0x5D9E15D9L,0x5D9E15D9L,0x5D9E15D9L,0x5D9E15D9L};
                    union U0 *l_451 = &g_295[0][1][6];
                    int l_460 = 0x4B63FBB3L;
                    char l_464[4] = {0xBEL,0xBEL,0xBEL,0xBEL};
                    char l_468 = 9L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_434[i] = 0xFC24A00DL;
                    l_447++;
                    for (l_437 = 6; (l_437 >= 1); l_437 -= 1)
                    {
                        int **l_452 = (void*)0;
                        int **l_453 = (void*)0;
                        union U1 **l_455 = &l_454[2][2];
                        l_451 = l_450;
                        p_22 = (*g_67);
                        (*l_84) = &l_419;
                        (*l_455) = l_454[0][1];
                    }
                    for (l_388.f0 = 1; (l_388.f0 <= 6); l_388.f0 += 1)
                    {
                        short l_456 = 0x2AEBL;
                        int l_457 = 0x610EA2DBL;
                        int l_458 = (-10L);
                        int l_459 = 0xEABFF752L;
                        int l_461 = 8L;
                        int l_463 = 1L;
                        int l_465 = 1L;
                        int l_467 = 4L;
                        int l_469 = 0x905E7D21L;
                        int l_470 = 7L;
                        int l_471 = 0xCBCCEF71L;
                        int l_472[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_472[i] = 0L;
                        --l_473;
                    }
                }
            }
            else
            {
                int l_487[9];
                union U0 l_496 = {-1L};
                int i;
                for (i = 0; i < 9; i++)
                    l_487[i] = (-7L);
                (*l_84) = (*l_84);
                (*l_414) &= ((((safe_rshift_func_uint16_t_u_s(g_222, (((safe_lshift_func_uint8_t_u_u(((*l_389) <= (p_21 & (l_480 != (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((g_263 , (((-1L) >= (**g_67)) < p_21)), ((**g_67) | (*p_22)))) == l_487[3]), l_487[2])), l_487[3]))))), g_107[1][6][1])) && g_110) & 0x9D47FD82L))) , p_21) < p_21) ^ 0xB88D4948L);
                (*l_409) = (safe_add_func_uint16_t_u_u(((l_490[5] == (((safe_add_func_int32_t_s_s(l_487[3], func_35(((l_55 , (func_35((l_487[3] || (g_423 && (safe_add_func_int8_t_s_s((&g_236 == (((0x91L || (l_487[2] ^ p_21)) , g_164) , l_495)), (*l_389))))), (*l_416), (*g_236), &l_414, (*l_389)) , p_21)) <= 0x50EDL), p_21, l_496, &g_68, p_21))) , 0x46092804L) , &g_360[2])) & (*l_409)), g_69.f0));
            }
            return (*l_389);
        }
    }
    p_22 = &l_418;
    return g_222;
}







static unsigned func_24(const char * p_25, unsigned short p_26, int * p_27, char p_28)
{
    union U1 *l_407 = &g_169;
    int l_408 = 0L;
    for (g_159 = 0; (g_159 < 29); g_159 = safe_add_func_uint8_t_u_u(g_159, 4))
    {
        union U1 *l_406 = &g_169;
        l_407 = l_406;
        (*g_68) &= ((*g_168) , (*p_27));
    }
    return l_408;
}







static char * func_29(int * p_30, union U1 p_31, int * p_32, const int * p_33, unsigned char p_34)
{
    unsigned short l_399 = 0xE8F0L;
    char *l_402 = (void*)0;
    for (g_169.f3 = 0; (g_169.f3 <= 17); g_169.f3 = safe_add_func_uint16_t_u_u(g_169.f3, 2))
    {
        int *l_392 = &g_60[0];
        int *l_393 = &g_60[0];
        int *l_394 = &g_60[0];
        int *l_395 = &g_60[1];
        int *l_396 = &g_60[1];
        int *l_397 = &g_60[0];
        int *l_398 = &g_60[0];
        --l_399;
    }
    return l_402;
}







static char func_35(unsigned char p_36, unsigned p_37, union U0 p_38, int ** p_39, char p_40)
{
    int l_86 = 9L;
    char ***l_91 = (void*)0;
    int l_109 = (-1L);
    int **l_119 = &g_68;
    int l_132 = 1L;
    int l_133 = 9L;
    int l_136[7][7][5] = {{{0xE6EE1648L,1L,0xA3FE0BE3L,0xE6FD65F5L,0L},{7L,0x3C690F1CL,7L,0xC6411B73L,7L},{(-1L),(-1L),7L,0xE0B6EC3EL,1L},{1L,0xB3826BC8L,0xA3FE0BE3L,9L,0xC6411B73L},{0x9514C475L,1L,(-8L),0xE6EE1648L,1L},{0x3C690F1CL,0xB3826BC8L,(-4L),7L,(-8L)},{8L,(-1L),0xE6EE1648L,(-1L),8L}},{{8L,0x3C690F1CL,0x9514C475L,1L,(-1L)},{(-7L),7L,0x2A38F906L,0xE6EE1648L,1L},{0xE6EE1648L,0x2A38F906L,7L,(-7L),9L},{0x3C690F1CL,0xE6EE1648L,(-7L),0xBAD39F9CL,0xBAD39F9CL},{9L,1L,9L,0xBAD39F9CL,0xE6FD65F5L},{(-1L),0xA3FE0BE3L,7L,(-7L),0x3C690F1CL},{1L,0xE6FD65F5L,0x9514C475L,0xE6EE1648L,(-4L)}},{{8L,0L,7L,0x3C690F1CL,7L},{1L,1L,9L,9L,1L},{(-4L),1L,(-7L),(-1L),0L},{0x2A38F906L,0L,7L,1L,0xC6411B73L},{7L,0xE6FD65F5L,0x2A38F906L,8L,0xB3826BC8L},{0x2A38F906L,0xA3FE0BE3L,0xE6EE1648L,1L,(-7L)},{(-4L),1L,1L,(-4L),(-7L)}},{{1L,0xE6EE1648L,0xA3FE0BE3L,0x2A38F906L,0xB3826BC8L},{8L,0x2A38F906L,0xE6FD65F5L,7L,0xC6411B73L},{1L,7L,0L,0x2A38F906L,0L},{(-1L),(-7L),1L,(-4L),1L},{9L,9L,1L,1L,7L},{0x3C690F1CL,7L,0L,8L,(-4L)},{0xE6EE1648L,9L,7L,0xBAD39F9CL,0x9514C475L}},{{0xE6EE1648L,(-4L),(-8L),0xA3FE0BE3L,7L},{0xB3826BC8L,0L,0xBAD39F9CL,0L,0xB3826BC8L},{0xB3826BC8L,0xE6EE1648L,8L,0x9514C475L,0L},{0xE6EE1648L,0xE0B6EC3EL,1L,8L,0xBAD39F9CL},{8L,1L,0xE0B6EC3EL,0xE6EE1648L,0L},{0x9514C475L,8L,0xE6EE1648L,0xB3826BC8L,0xB3826BC8L},{0L,0xBAD39F9CL,0L,0xB3826BC8L,7L}},{{0xA3FE0BE3L,(-8L),(-4L),0xE6EE1648L,0x9514C475L},{0xBAD39F9CL,7L,9L,8L,(-7L)},{0L,0xE6FD65F5L,(-4L),0x9514C475L,0xE0B6EC3EL},{(-1L),1L,0L,0L,1L},{(-7L),1L,0xE6EE1648L,0xA3FE0BE3L,0x2A38F906L},{1L,0xE6FD65F5L,0xE0B6EC3EL,0xBAD39F9CL,0x3C690F1CL},{(-4L),7L,1L,0L,0xC6411B73L}},{{1L,(-8L),8L,(-1L),0xE6EE1648L},{(-7L),0xBAD39F9CL,0xBAD39F9CL,(-7L),0xE6EE1648L},{(-1L),8L,(-8L),1L,0xC6411B73L},{0L,1L,7L,(-4L),0x3C690F1CL},{0xBAD39F9CL,1L,0x2A38F906L,0x3C690F1CL,0xC6411B73L},{0L,1L,0x9514C475L,(-8L),0x9514C475L},{0L,0L,0x9514C475L,9L,1L}}};
    short l_157 = 0L;
    const int *l_191 = &g_60[1];
    unsigned char l_194 = 0xA7L;
    int l_228 = 6L;
    union U0 *l_231 = &g_69;
    union U0 **l_230[10] = {&l_231,&l_231,&l_231,&l_231,&l_231,&l_231,&l_231,&l_231,&l_231,&l_231};
    unsigned l_261 = 0x6DA2EC2AL;
    unsigned l_318 = 0UL;
    unsigned l_347 = 0x1AA7512BL;
    char *l_361 = (void*)0;
    union U0 l_374 = {0x39E85AC3L};
    int *l_387 = &l_132;
    int i, j, k;
    return p_40;
}







static unsigned char func_45(int * const * p_46, union U0 p_47)
{
    int *l_70 = &g_60[0];
    int *l_71[10][7][3] = {{{&g_60[0],(void*)0,&g_3},{&g_60[1],&g_3,&g_60[1]},{&g_3,(void*)0,&g_60[0]},{(void*)0,&g_60[1],&g_60[1]},{&g_3,&g_60[0],&g_3},{(void*)0,(void*)0,(void*)0},{&g_3,&g_3,&g_60[0]}},{{(void*)0,(void*)0,(void*)0},{&g_3,(void*)0,(void*)0},{&g_60[1],(void*)0,(void*)0},{&g_60[0],&g_60[1],&g_60[0]},{&g_60[1],&g_60[0],(void*)0},{&g_3,&g_3,&g_3},{(void*)0,&g_60[0],&g_60[1]}},{{&g_60[0],&g_60[1],&g_60[0]},{(void*)0,(void*)0,&g_60[1]},{(void*)0,(void*)0,&g_3},{(void*)0,(void*)0,(void*)0},{&g_60[0],&g_3,&g_3},{(void*)0,(void*)0,(void*)0},{&g_3,&g_60[0],&g_3}},{{&g_60[1],&g_60[1],(void*)0},{&g_60[0],(void*)0,&g_3},{&g_60[1],&g_3,(void*)0},{&g_60[0],&g_60[0],&g_3},{&g_60[1],&g_60[1],(void*)0},{(void*)0,&g_60[1],(void*)0},{&g_3,&g_3,(void*)0}},{{(void*)0,&g_60[0],&g_60[1]},{&g_60[1],(void*)0,&g_60[0]},{&g_60[0],&g_3,&g_3},{(void*)0,&g_60[1],&g_60[0]},{&g_3,&g_3,&g_60[1]},{(void*)0,&g_60[0],(void*)0},{(void*)0,&g_3,(void*)0}},{{(void*)0,&g_60[0],(void*)0},{&g_60[1],&g_3,&g_3},{&g_60[0],&g_60[1],(void*)0},{&g_3,&g_3,&g_60[0]},{&g_60[0],(void*)0,&g_60[1]},{&g_60[1],&g_60[0],(void*)0},{(void*)0,&g_3,&g_3}},{{(void*)0,&g_60[1],(void*)0},{(void*)0,&g_60[1],&g_60[1]},{&g_3,&g_60[0],&g_60[0]},{(void*)0,(void*)0,(void*)0},{&g_60[0],&g_60[0],&g_3},{&g_60[1],&g_60[1],(void*)0},{(void*)0,&g_60[1],(void*)0}},{{&g_3,&g_3,(void*)0},{(void*)0,&g_60[0],&g_60[1]},{&g_60[1],(void*)0,&g_60[0]},{&g_60[0],&g_3,&g_3},{(void*)0,&g_60[1],&g_60[0]},{&g_3,&g_3,&g_60[1]},{(void*)0,&g_60[0],(void*)0}},{{(void*)0,&g_3,(void*)0},{(void*)0,(void*)0,&g_60[1]},{&g_3,&g_3,&g_3},{&g_60[1],&g_3,&g_60[0]},{&g_60[0],&g_60[0],(void*)0},{&g_60[1],(void*)0,&g_3},{&g_3,(void*)0,&g_60[0]}},{{(void*)0,&g_60[0],&g_60[0]},{(void*)0,&g_3,&g_60[0]},{&g_60[1],(void*)0,&g_3},{&g_3,&g_3,(void*)0},{&g_60[0],&g_60[1],&g_60[0]},{(void*)0,&g_3,&g_3},{&g_3,(void*)0,&g_60[1]}}};
    int l_72 = 0x80E459F6L;
    unsigned l_73[9] = {0x7F434AC2L,0x7F434AC2L,0x7F434AC2L,0x7F434AC2L,0x7F434AC2L,0x7F434AC2L,0x7F434AC2L,0x7F434AC2L,0x7F434AC2L};
    char * const *l_78 = (void*)0;
    int i, j, k;
    ++l_73[6];
    for (g_58 = (-13); (g_58 >= (-11)); g_58 = safe_add_func_uint32_t_u_u(g_58, 1))
    {
        char * const **l_79[9] = {&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78};
        int **l_80 = &g_68;
        int l_81 = 6L;
        int i;
        l_78 = l_78;
        (*l_80) = (*g_67);
        l_81 |= ((p_47 , ((**p_46) & (((g_69.f0 <= 0xC017L) | (**l_80)) < ((**g_67) && (**l_80))))) && (*l_70));
    }
    return p_47.f3;
}







static int * const * func_48(char * p_49, int p_50)
{
    unsigned char l_62[6] = {0x08L,0x08L,0x08L,0x08L,0x08L,0x08L};
    int *l_63 = &g_60[0];
    int i;
    (*l_63) = (l_62[1] | 0xB4L);
    (*l_63) = p_50;
    for (p_50 = 0; (p_50 > 15); p_50++)
    {
        int **l_66 = &l_63;
        (*l_66) = &g_60[0];
        if ((**l_66))
            break;
    }
    return g_67;
}







static char * func_51(union U0 p_52, int * p_53, char * p_54)
{
    int *l_59 = &g_60[0];
    char *l_61 = &g_58;
    (*l_59) &= (g_3 >= ((g_3 >= ((void*)0 != g_57[5][1][0])) != p_52.f0));
    return l_61;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f3, "g_69.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_107[i][j][k], "g_107[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_169.f0, "g_169.f0", print_hash_value);
    transparent_crc(g_169.f1, "g_169.f1", print_hash_value);
    transparent_crc(g_169.f2, "g_169.f2", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_295[i][j][k].f0, "g_295[i][j][k].f0", print_hash_value);
                transparent_crc(g_295[i][j][k].f1, "g_295[i][j][k].f1", print_hash_value);
                transparent_crc(g_295[i][j][k].f3, "g_295[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_780.f0, "g_780.f0", print_hash_value);
    transparent_crc(g_780.f1, "g_780.f1", print_hash_value);
    transparent_crc(g_780.f3, "g_780.f3", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_950, "g_950", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1267, "g_1267", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1282[i][j], "g_1282[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1305, "g_1305", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
