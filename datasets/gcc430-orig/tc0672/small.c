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
   volatile unsigned f0;
   const unsigned char f1;
   unsigned short f2;
   unsigned f3;
};


static int g_17 = 1L;
static unsigned short g_20[6][5] = {{1UL,65535UL,0x4145L,0x4145L,65535UL},{6UL,5UL,0xCC47L,0xCC47L,5UL},{1UL,65535UL,0x4145L,0x4145L,65535UL},{6UL,5UL,0xCC47L,0xCC47L,5UL},{1UL,65535UL,0x4145L,0x4145L,65535UL},{6UL,5UL,0xCC47L,0xCC47L,5UL}};
static unsigned short g_38 = 0xDE81L;
static unsigned short g_74 = 0x746AL;
static int g_87[8] = {(-1L),(-9L),(-1L),(-1L),(-9L),(-1L),(-1L),(-9L)};
static unsigned g_90 = 0xA73BC0E3L;
static short g_131 = 1L;
static int g_133 = 0x2ED884ACL;
static union U0 g_135 = {0x84738BD3L};
static union U0 g_137[10][7] = {{{4294967287UL},{0x8A8B4E14L},{0xBF2F7726L},{0x5A40E5C4L},{0x1620D8A8L},{0UL},{1UL}},{{0xBF2F7726L},{4294967295UL},{0xDABF61A3L},{0x83135CAFL},{0xBF2F7726L},{0x83BDBB17L},{0x8A8B4E14L}},{{4294967294UL},{1UL},{0x1620D8A8L},{0x8A8B4E14L},{0x1620D8A8L},{1UL},{4294967294UL}},{{0x83BDBB17L},{1UL},{0xF8C8F4DBL},{0x5A40E5C4L},{0xDB194A10L},{4294967294UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{0xEB8B4D83L},{0xF8C8F4DBL},{0x8A8B4E14L},{3UL},{0UL}},{{0xDABF61A3L},{0UL},{0xF8C8F4DBL},{0x524B17E4L},{1UL},{0x524B17E4L},{0xF8C8F4DBL}},{{0xDB194A10L},{0xDB194A10L},{0x1620D8A8L},{0x524B17E4L},{0x0A5AE12EL},{4294967287UL},{0xBF2F7726L}},{{1UL},{0x0A5AE12EL},{0xDABF61A3L},{0xF8C8F4DBL},{4294967295UL},{0UL},{4294967295UL}},{{0x83135CAFL},{0x80BABE52L},{4294967287UL},{0x5A40E5C4L},{0x0A5AE12EL},{0x33599DBFL},{0x0A5AE12EL}},{{0x8A8B4E14L},{4294967295UL},{4294967295UL},{0x8A8B4E14L},{1UL},{0x33599DBFL},{0xEB8B4D83L}}};
static union U0 *g_136[6][1][1] = {{{&g_137[0][1]}},{{&g_137[0][1]}},{{&g_137[0][1]}},{{&g_137[0][1]}},{{&g_137[0][1]}},{{&g_137[0][1]}}};
static unsigned char g_171 = 0xDAL;
static union U0 **g_173 = &g_136[0][0][0];
static int *g_175[6][5][8] = {{{&g_133,&g_87[2],&g_17,&g_87[1],&g_87[2],&g_17,(void*)0,&g_87[2]},{(void*)0,(void*)0,&g_17,&g_87[7],&g_87[7],&g_17,(void*)0,(void*)0},{&g_87[2],&g_87[7],&g_133,(void*)0,&g_133,&g_87[2],&g_87[2],&g_17},{&g_87[1],&g_87[1],&g_133,&g_87[1],&g_87[0],&g_87[2],&g_87[0],&g_87[1]},{&g_17,&g_133,&g_17,&g_17,&g_87[2],&g_87[2],&g_133,(void*)0}},{{&g_87[1],&g_17,&g_87[0],&g_87[7],&g_87[6],&g_133,&g_87[2],&g_87[2]},{&g_87[1],&g_87[2],&g_87[7],&g_87[7],&g_87[2],&g_87[1],&g_133,(void*)0},{&g_17,&g_87[2],&g_133,&g_133,&g_87[0],&g_87[1],(void*)0,(void*)0},{&g_87[6],(void*)0,&g_87[1],&g_133,&g_17,&g_133,&g_87[1],(void*)0},{(void*)0,&g_17,&g_87[7],&g_87[7],(void*)0,&g_17,&g_87[6],&g_87[2]}},{{&g_87[7],&g_87[2],(void*)0,&g_87[7],(void*)0,&g_87[6],&g_87[6],(void*)0},{&g_17,&g_87[7],&g_87[7],&g_17,(void*)0,(void*)0,&g_87[1],&g_87[1]},{(void*)0,(void*)0,&g_87[1],&g_87[1],&g_133,&g_17,(void*)0,&g_87[2]},{&g_133,(void*)0,&g_133,&g_87[0],&g_133,(void*)0,&g_133,&g_87[7]},{&g_17,&g_87[7],&g_87[7],(void*)0,&g_17,&g_87[6],&g_87[2],&g_87[2]}},{{&g_87[2],&g_87[2],&g_87[0],&g_87[0],(void*)0,(void*)0,&g_87[0],(void*)0},{&g_87[1],&g_87[1],&g_87[2],&g_87[2],&g_87[6],&g_17,(void*)0,&g_87[7]},{&g_17,&g_87[2],&g_87[1],&g_87[6],&g_87[0],&g_87[7],&g_133,&g_87[7]},{&g_87[2],&g_87[2],(void*)0,&g_87[2],&g_87[2],(void*)0,&g_87[2],(void*)0},{(void*)0,&g_87[1],&g_17,&g_87[0],&g_87[7],&g_87[6],&g_133,&g_87[2]}},{{&g_133,&g_87[2],&g_17,&g_17,&g_17,&g_17,&g_87[2],&g_133},{&g_87[7],&g_17,(void*)0,(void*)0,&g_87[1],&g_87[1],&g_133,&g_17},{&g_133,&g_87[0],&g_87[1],(void*)0,(void*)0,&g_87[1],(void*)0,(void*)0},{&g_87[2],&g_17,&g_87[2],(void*)0,&g_87[1],&g_17,&g_87[0],&g_87[7]},{(void*)0,&g_87[2],(void*)0,&g_133,&g_133,&g_87[6],&g_87[1],&g_87[1]}},{{(void*)0,&g_87[1],&g_133,&g_133,&g_87[1],(void*)0,&g_17,&g_87[2]},{&g_87[2],&g_87[2],&g_87[6],&g_17,(void*)0,&g_87[7],&g_87[7],&g_17},{&g_133,&g_87[2],&g_133,&g_87[2],&g_87[6],&g_87[2],&g_133,&g_87[2]},{(void*)0,&g_87[6],&g_17,&g_17,&g_133,&g_17,&g_87[2],&g_133},{&g_17,&g_87[1],&g_87[2],&g_17,(void*)0,&g_87[2],&g_87[2],(void*)0}}};
static const unsigned short g_204 = 65535UL;
static unsigned *g_205[3][3][4] = {{{&g_90,&g_90,&g_90,&g_137[0][1].f3},{&g_137[0][1].f3,&g_135.f3,&g_90,&g_135.f3},{&g_135.f3,&g_90,&g_90,&g_135.f3}},{{&g_90,&g_135.f3,&g_137[0][1].f3,&g_137[0][1].f3},{&g_90,&g_90,&g_90,&g_137[0][1].f3},{&g_90,&g_90,&g_137[0][1].f3,&g_90}},{{&g_90,&g_137[0][1].f3,&g_90,&g_137[0][1].f3},{&g_135.f3,&g_137[0][1].f3,&g_90,&g_90},{&g_137[0][1].f3,&g_90,&g_90,&g_137[0][1].f3}}};
static short *g_253 = &g_131;
static short **g_252 = &g_253;
static short *g_353 = &g_131;
static unsigned char g_367 = 0x6BL;
static const int *g_398[9][2] = {{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]}};
static union U0 ***g_424 = &g_173;
static union U0 ***g_426 = &g_173;
static short g_455 = 0xECD8L;
static const union U0 g_512[1] = {{0xED09C11EL}};
static const unsigned short * const *g_592 = (void*)0;
static union U0 * const ***g_598 = (void*)0;
static const unsigned short g_621[2] = {0x2515L,0x2515L};
static int ****g_640 = (void*)0;
static char g_666 = 0x3DL;
static unsigned g_758 = 0x8C3BB58AL;
static volatile short g_841 = (-1L);
static volatile short *g_840 = &g_841;
static volatile short **g_839 = &g_840;
static volatile short ***g_838 = &g_839;
static volatile short ****g_837 = &g_838;
static short ***g_843 = &g_252;
static short ****g_842 = &g_843;
static char g_846[6][6][7] = {{{1L,0xA0L,0L,0x2CL,0x98L,(-3L),7L},{0x44L,(-9L),0x08L,0xB4L,0x60L,0L,5L},{0x4AL,0x09L,(-9L),0x8AL,0xB4L,0xB4L,0x8AL},{0L,4L,0L,1L,0L,0x30L,(-1L)},{0L,0xB4L,0x2CL,0L,1L,0x87L,(-8L)},{5L,1L,0L,0x3AL,(-1L),0x30L,1L}},{{0x52L,(-1L),0x3AL,4L,(-1L),0xB4L,1L},{(-1L),1L,0x4AL,5L,0L,0L,0x67L},{0x30L,4L,1L,(-1L),0x44L,0xE3L,0L},{(-7L),0x08L,0L,(-1L),1L,0x67L,0x30L},{0x95L,1L,0L,0xF4L,0L,(-1L),0x1EL},{0x60L,0xA0L,1L,0x8DL,0xE3L,0x8AL,4L}},{{1L,0x55L,0x4AL,0L,0x09L,5L,0x09L},{0x55L,0x3AL,0x3AL,0x55L,(-1L),(-3L),1L},{0xF4L,0x39L,0L,1L,4L,0x43L,(-9L)},{0x67L,0L,0x2CL,(-9L),(-1L),0x60L,1L},{0x89L,4L,4L,0x39L,0L,1L,5L},{0x52L,0x89L,(-3L),0xF4L,4L,1L,0x55L}},{{7L,1L,(-1L),0x2CL,0L,4L,(-8L)},{0xA0L,1L,0xABL,1L,(-3L),0x67L,1L},{0x6DL,(-1L),5L,1L,(-1L),4L,0x67L},{0x67L,0L,1L,0x2CL,1L,0x4AL,0L},{0x4AL,(-3L),(-7L),0xF4L,0x85L,0x10L,0x10L},{(-1L),0x39L,0x44L,0x39L,(-1L),0x89L,0L}},{{(-3L),0x43L,1L,0xAFL,0x30L,7L,0x4AL},{0L,0x95L,0x39L,0L,(-1L),0x8DL,(-7L)},{(-3L),0xAFL,(-1L),0L,0L,0x87L,(-1L)},{(-1L),1L,(-9L),0x67L,1L,0xA0L,0xE3L},{0x4AL,0x8DL,0L,5L,0xABL,0L,1L},{0x67L,1L,0x60L,0xADL,0x39L,0L,0L}},{{0xABL,1L,0x43L,0x4AL,0x39L,0xAFL,0x2CL},{1L,(-8L),0x87L,1L,0L,0x2CL,0xB4L},{(-9L),0x55L,0xABL,5L,7L,(-1L),(-7L)},{0L,5L,0x89L,0x89L,5L,0L,(-8L)},{0x43L,(-1L),4L,(-9L),0x30L,0x87L,0xABL},{1L,0xAFL,0xF4L,(-3L),0L,(-1L),1L}}};
static unsigned short g_869 = 0xB08BL;
static unsigned short *g_868[4] = {&g_869,&g_869,&g_869,&g_869};
static unsigned g_896[9][9] = {{0x0D3A5F49L,0UL,4294967295UL,0x5FA3EB13L,0x0A87C451L,0x5FA3EB13L,4294967295UL,0UL,0x0D3A5F49L},{1UL,4294967291UL,0x24441C85L,4294967291UL,1UL,1UL,4294967291UL,0x24441C85L,4294967291UL},{4294967295UL,9UL,4294967295UL,4294967293UL,0x0A87C451L,0UL,0x0A87C451L,4294967293UL,4294967295UL},{1UL,1UL,4294967291UL,0x24441C85L,4294967291UL,1UL,1UL,4294967291UL,0x24441C85L},{0x0D3A5F49L,9UL,0x0D3A5F49L,0UL,4294967295UL,0x5FA3EB13L,0x0A87C451L,0x5FA3EB13L,4294967295UL},{0xF38AA488L,4294967291UL,0x24441C85L,1UL,4294967291UL,1UL,0x24441C85L,0x24441C85L,1UL},{0x0D3A5F49L,4294967293UL,0x64A50F9BL,4294967293UL,0x0D3A5F49L,0x5FA3EB13L,4294967295UL,4UL,4294967295UL},{0x24441C85L,4294967291UL,1UL,1UL,4294967291UL,0x24441C85L,4294967291UL,1UL,1UL},{0x0D3A5F49L,0x5FA3EB13L,4294967295UL,4UL,4294967295UL,0x5FA3EB13L,0x0D3A5F49L,4294967293UL,0x64A50F9BL}};
static const union U0 *g_909 = &g_512[0];
static const union U0 **g_908 = &g_909;
static unsigned g_979 = 4294967295UL;
static int g_981 = 9L;
static int *g_984 = &g_17;
static unsigned char g_998 = 0x50L;
static const volatile unsigned char g_1033 = 0x58L;
static unsigned **g_1042 = &g_205[0][1][3];
static unsigned ***g_1041[10][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042,&g_1042}}};
static const unsigned short **g_1049 = (void*)0;
static const unsigned short ***g_1048 = &g_1049;
static char *g_1073[10] = {&g_666,&g_666,&g_666,&g_666,&g_666,&g_666,&g_666,&g_666,&g_666,&g_666};
static char **g_1072 = &g_1073[9];
static const int g_1103[5] = {0x2A9B9ABEL,0x2A9B9ABEL,0x2A9B9ABEL,0x2A9B9ABEL,0x2A9B9ABEL};
static short *****g_1134 = &g_842;
static int **g_1147 = &g_984;



static unsigned char func_1(void);
static int func_2(unsigned p_3, unsigned p_4, char p_5, unsigned short p_6, char p_7);
static unsigned char func_8(int p_9, unsigned char p_10, unsigned p_11, char p_12, unsigned p_13);
static short func_23(int p_24, const unsigned short p_25);
static int * func_30(unsigned p_31, int p_32, unsigned short * p_33, const unsigned p_34, int p_35);
static unsigned func_39(unsigned short * p_40, const unsigned char p_41, unsigned short * p_42, int * p_43);
static unsigned short func_46(int p_47, int * const p_48, int * p_49, unsigned short * p_50, int * p_51);
static int * const func_52(unsigned short * p_53, short p_54);
static short func_56(char p_57);
static int * func_58(unsigned short p_59, unsigned char p_60, unsigned p_61, unsigned short * p_62, const unsigned short * p_63);
static unsigned char func_1(void)
{
    int l_14 = 0L;
    unsigned short *l_18 = (void*)0;
    unsigned short *l_19 = &g_20[5][4];
    unsigned *l_982 = &g_137[0][1].f3;
    unsigned **l_983 = &g_205[1][0][1];
    unsigned short l_1125 = 65535UL;
    int **l_1144 = &g_984;
    int ***l_1145 = &l_1144;
    int **l_1146 = &g_175[0][2][7];
    int l_1148 = 1L;
    (*g_984) = func_2(((func_8(l_14, ((((*l_19) = (safe_mod_func_int8_t_s_s(g_17, g_17))) >= ((safe_lshift_func_int16_t_s_u(func_23(g_17, g_17), 0)) <= ((((*l_983) = l_982) != (void*)0) ^ g_512[0].f1))) > l_14), l_14, l_14, g_621[1]) != l_14) & l_14), l_14, l_14, l_1125, l_14);





    (*g_984) = (((*l_1145) = l_1144) != (g_1147 = l_1146));

    ;
    (*g_1147) = (**l_1145);
    (*l_1144) = (*l_1144);
    return l_1148;
}







static int func_2(unsigned p_3, unsigned p_4, char p_5, unsigned short p_6, char p_7)
{
    unsigned ***l_1126 = &g_1042;
    unsigned ****l_1127 = &l_1126;
    unsigned ****l_1128 = (void*)0;
    union U0 * const *l_1131 = (void*)0;
    union U0 * const **l_1130 = &l_1131;
    union U0 * const *** const l_1129 = &l_1130;
    short *****l_1133 = (void*)0;
    int l_1135 = 0xE72CD5EDL;
    if ((g_758 == (((*l_1127) = l_1126) == (g_1041[6][0][3] = &g_1042))))
    {
        (*g_984) = ((void*)0 == l_1129);
        return p_4;
    }
    else
    {
        union U0 *l_1132 = (void*)0;
        int l_1141 = (-3L);
        (**g_424) = l_1132;


        for (p_6 = 0; (p_6 <= 9); p_6 += 1)
        {
            unsigned short l_1138 = 0x97D2L;
            l_1135 = (l_1133 != (g_1134 = &g_842));
            (*g_984) = (!(((l_1138 & (!p_6)) < (****g_842)) && (safe_sub_func_uint16_t_u_u(65534UL, l_1141))));
        }
        for (p_7 = (-6); (p_7 > (-1)); ++p_7)
        {
            return (*g_984);
        }
    }


    return (*g_984);
}







static unsigned char func_8(int p_9, unsigned char p_10, unsigned p_11, char p_12, unsigned p_13)
{
    int **l_985 = (void*)0;
    int **l_986 = &g_175[0][2][7];
    int **l_987[3];
    unsigned short *l_994[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned short *l_1002[9];
    unsigned l_1009 = 4294967293UL;
    char l_1010 = 0x13L;
    short l_1011 = 0L;
    unsigned l_1022 = 4294967293UL;
    union U0 *l_1026 = &g_135;
    int *l_1045 = &g_87[2];
    const int *l_1102 = &g_1103[2];
    int l_1124 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_987[i] = &g_984;
    for (i = 0; i < 9; i++)
        l_1002[i] = &g_20[5][4];
    g_398[2][0] = ((*l_986) = g_984);


    for (g_135.f3 = 0; (g_135.f3 > 37); g_135.f3++)
    {
        unsigned char l_990 = 7UL;
        int * const l_993[3] = {&g_87[3],&g_87[3],&g_87[3]};
        unsigned short *l_995 = &g_135.f2;
        unsigned char l_999 = 0xEFL;
        unsigned short **l_1000 = &g_868[2];
        unsigned short **l_1001 = &l_994[3];
        const unsigned l_1003 = 0UL;
        int **l_1006 = &g_175[0][2][7];
        int l_1020 = 1L;
        unsigned l_1024 = 0xBE99E163L;
        int *l_1025 = &g_87[2];
        int i;
        (*g_984) = func_46(l_990, func_58((safe_rshift_func_uint16_t_u_s((((*g_984) = (g_74 > g_171)) >= func_46(p_10, l_993[1], &g_981, (g_868[1] = l_994[3]), &g_87[2])), p_13)), p_10, p_11, l_995, &g_621[0]), &g_981, l_995, &g_981);
        (*g_984) = (safe_lshift_func_int8_t_s_s((g_998 | ((p_12 == p_10) != func_46(g_131, l_993[1], func_30(l_999, (((*l_1001) = ((*l_1000) = l_994[3])) != l_1002[8]), l_1002[4], l_1003, p_11), l_1002[8], &g_87[7]))), 2));
        if (((safe_add_func_int8_t_s_s(p_13, (~(func_46(g_896[2][2], ((*l_1006) = l_993[1]), &p_9, (*l_1001), &g_87[2]) > (l_1011 = (safe_div_func_int16_t_s_s(p_11, (l_1010 = l_1009)))))))) >= 0x246EB213L))
        {
            short l_1012 = 0x0F93L;
            unsigned *l_1013 = &g_90;
            unsigned *l_1014[4];
            unsigned char *l_1017 = &g_367;
            char *l_1021 = &l_1010;
            int l_1023[8][4] = {{0xABBA7E13L,0xC79384D8L,0x800896A1L,0L},{0xD414CA8AL,4L,1L,0x800896A1L},{(-10L),4L,(-10L),0L},{4L,0xC79384D8L,0xF2B8DDA1L,(-1L)},{(-1L),0x800896A1L,0xD414CA8AL,0xC79384D8L},{0xCC0AB9D5L,0xD414CA8AL,0xD414CA8AL,0xCC0AB9D5L},{(-1L),0L,0xF2B8DDA1L,(-10L)},{4L,0x4FC2BBC1L,(-10L),0xA074832AL}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_1014[i] = (void*)0;
            l_1025 = ((*l_986) = func_30((p_13 = (p_13 ^ ((*l_1013) = l_1012))), p_9, l_1002[1], p_9, ((*g_984) = (((*l_1017) = (!p_10)) == ((((l_1023[6][3] = (safe_add_func_int32_t_s_s((l_995 != (void*)0), ((((*l_1021) = func_46(l_1020, l_1014[0], &g_17, &g_20[5][4], (*l_1006))) == 6UL) & l_1022)))) > l_1024) & p_10) == p_12)))));

            ;
            (*g_984) = (0xB8L <= g_896[7][5]);
        }
        else
        {
            (*l_1006) = &p_9;


            return g_512[0].f3;


        }

        ;
        (*g_984) = (*l_1025);
    }


    (*g_173) = l_1026;


    for (p_11 = 0; (p_11 <= 4); p_11 += 1)
    {
        int l_1029 = 0x9C81A88CL;
        int *l_1030 = &g_87[2];
        short ****l_1036 = &g_843;
        int l_1046 = 1L;
        unsigned short *l_1059 = &g_74;
        unsigned l_1106 = 0x5ABE41A2L;
    }
    return g_896[8][3];
}







static short func_23(int p_24, const unsigned short p_25)
{
    int *l_28[6][5] = {{&g_17,&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,(void*)0,&g_17,&g_17},{(void*)0,&g_17,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17,&g_17},{(void*)0,&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17,&g_17}};
    unsigned short *l_55 = (void*)0;
    unsigned l_867[1][8] = {{0xB5370A10L,0xB5370A10L,0xB5370A10L,0xB5370A10L,0xB5370A10L,0xB5370A10L,0xB5370A10L,0xB5370A10L}};
    unsigned short *l_976 = &g_135.f2;
    int **l_978 = &g_175[5][0][7];
    int *** const l_977 = &l_978;
    int l_980[10] = {0xD60DE0F7L,1L,0xD60DE0F7L,1L,0xD60DE0F7L,1L,0xD60DE0F7L,1L,0xD60DE0F7L,1L};
    int i, j;
    for (p_24 = 0; (p_24 >= 17); p_24 = safe_add_func_uint16_t_u_u(p_24, 4))
    {
        int **l_29 = &l_28[0][4];
        unsigned l_36 = 4294967295UL;
        unsigned short *l_37[2];
        int l_973[10] = {1L,0x5A26FE6EL,1L,1L,0x5A26FE6EL,1L,1L,0x5A26FE6EL,1L,1L};
        int i;
        for (i = 0; i < 2; i++)
            l_37[i] = &g_38;
        (*l_29) = l_28[1][0];
    }
    g_981 = func_39(&g_38, ((p_24 | (g_841 | ((p_25 ^ ((g_979 = (((((*l_976) = 0xA399L) != (***g_843)) ^ p_25) ^ (l_977 != (void*)0))) & 0L)) > g_204))) > l_980[8]), l_55, (**l_977));
    return p_24;
}







static int * func_30(unsigned p_31, int p_32, unsigned short * p_33, const unsigned p_34, int p_35)
{
    int *l_972 = &g_133;
    (*l_972) = p_31;
    return l_972;


}







static unsigned func_39(unsigned short * p_40, const unsigned char p_41, unsigned short * p_42, int * p_43)
{
    char *l_870 = &g_846[1][2][1];
    int l_871 = 0xC2F5D55BL;
    int *l_872 = &g_133;
    int *l_873[9][3][2] = {{{(void*)0,&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]}},{{&g_87[2],&g_87[2]},{(void*)0,(void*)0},{(void*)0,&g_87[2]}},{{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]}},{{(void*)0,(void*)0},{(void*)0,&g_87[2]},{&g_87[2],&g_87[2]}},{{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{(void*)0,(void*)0}},{{(void*)0,&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]}},{{&g_87[2],&g_87[2]},{(void*)0,(void*)0},{(void*)0,&g_87[2]}},{{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]},{&g_87[2],&g_87[2]}},{{(void*)0,(void*)0},{(void*)0,&g_87[2]},{&g_87[2],&g_87[2]}}};
    int l_874 = 0x3791C3CCL;
    unsigned l_875 = 1UL;
    union U0 ****l_893 = &g_424;
    union U0 ** const *l_895 = &g_173;
    union U0 ** const **l_894 = &l_895;
    unsigned short *l_897 = &g_869;
    const union U0 **l_912 = &g_909;
    unsigned **l_956 = &g_205[0][1][3];
    unsigned *l_968[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_969[5];
    unsigned char *l_970 = &g_367;
    unsigned l_971 = 0x12358489L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_969[i] = (-1L);
    l_875 = (l_874 = ((*l_872) = l_871));
    for (g_455 = 0; (g_455 <= 1); g_455 += 1)
    {
        char **l_886 = &l_870;
        const char *l_888[1][2][5];
        const char **l_887 = &l_888[0][0][0];
        union U0 ****l_892[10][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
        union U0 *****l_891[8][3] = {{(void*)0,&l_892[6][0][0],(void*)0},{&l_892[6][0][0],&l_892[6][0][0],&l_892[6][0][0]},{(void*)0,&l_892[6][0][0],(void*)0},{&l_892[6][0][0],&l_892[6][0][0],&l_892[6][0][0]},{(void*)0,&l_892[6][0][0],(void*)0},{&l_892[6][0][0],&l_892[6][0][0],&l_892[6][0][0]},{(void*)0,&l_892[6][0][0],(void*)0},{&l_892[6][0][0],&l_892[6][0][0],&l_892[6][0][0]}};
        unsigned short *l_898 = &g_869;
        unsigned l_914 = 0x699D5D96L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_888[i][j][k] = (void*)0;
            }
        }
        (*l_872) = (safe_rshift_func_int8_t_s_s((g_137[0][1].f2 | p_41), (safe_add_func_int8_t_s_s(g_17, (safe_mod_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(func_46((g_896[4][7] = (safe_sub_func_int32_t_s_s((((*l_886) = l_870) == ((*l_887) = &g_846[1][2][1])), (safe_add_func_uint8_t_u_u(g_74, ((l_893 = &g_424) != l_894)))))), func_52(l_897, p_41), &l_871, l_898, p_43), (*g_253))) >= 0x14ADL), (-8L)))))));


        for (g_90 = 0; (g_90 <= 1); g_90 += 1)
        {
            unsigned short l_899 = 5UL;
            int l_915 = 0x53503381L;
            unsigned char l_927 = 0UL;
            (**g_424) = (***l_893);
            if (l_899)
                continue;
            for (g_758 = 0; (g_758 <= 0); g_758 += 1)
            {
                char *l_902 = &g_846[1][2][1];
                short *****l_905 = &g_842;
                const union U0 ***l_910 = (void*)0;
                const union U0 ***l_911[5][4][5] = {{{(void*)0,&g_908,&g_908,(void*)0,&g_908},{&g_908,(void*)0,&g_908,&g_908,&g_908},{&g_908,(void*)0,&g_908,&g_908,(void*)0},{&g_908,&g_908,&g_908,&g_908,&g_908}},{{&g_908,&g_908,&g_908,(void*)0,&g_908},{&g_908,&g_908,&g_908,&g_908,&g_908},{&g_908,&g_908,&g_908,&g_908,&g_908},{(void*)0,&g_908,&g_908,&g_908,(void*)0}},{{&g_908,&g_908,&g_908,&g_908,&g_908},{(void*)0,&g_908,&g_908,(void*)0,&g_908},{&g_908,(void*)0,&g_908,&g_908,&g_908},{&g_908,(void*)0,&g_908,&g_908,(void*)0}},{{&g_908,&g_908,&g_908,&g_908,&g_908},{&g_908,&g_908,&g_908,(void*)0,&g_908},{&g_908,(void*)0,&g_908,&g_908,(void*)0},{(void*)0,&g_908,&g_908,(void*)0,&g_908}},{{&g_908,(void*)0,(void*)0,(void*)0,&g_908},{&g_908,&g_908,&g_908,&g_908,&g_908},{&g_908,&g_908,&g_908,&g_908,&g_908},{(void*)0,&g_908,(void*)0,&g_908,&g_908}}};
                char *l_913 = &g_666;
                unsigned *l_916 = &g_896[4][7];
                int i, j, k;
                (*l_872) = ((((*l_886) = &g_846[5][2][0]) == &g_846[1][2][1]) >= (safe_mod_func_uint32_t_u_u(((*l_916) = (((*l_902) = g_896[(g_455 + 3)][g_90]) | (safe_lshift_func_uint8_t_u_s(((void*)0 == l_905), (p_41 > ((safe_sub_func_int16_t_s_s((p_41 != (2UL || (((*l_913) = ((l_912 = g_908) != (*g_426))) >= l_899))), l_914)) > l_915)))))), p_41)));
                for (l_914 = 0; (l_914 <= 0); l_914 += 1)
                {
                    int l_917 = 0x3A9C595FL;
                    for (l_899 = 0; (l_899 <= 0); l_899 += 1)
                    {
                        return l_917;
                    }
                }
                g_175[3][0][3] = p_43;
                (*l_872) = (safe_sub_func_int8_t_s_s((l_914 || p_41), ((!p_41) || p_41)));
            }
            for (l_914 = 0; (l_914 <= 4); l_914 += 1)
            {
                int l_922 = 0x4E831600L;
                union U0 * const *l_928 = &g_136[5][0][0];
                union U0 **l_930 = &g_136[4][0][0];
                int * const l_931 = (void*)0;
                for (g_135.f2 = 0; (g_135.f2 <= 1); g_135.f2 += 1)
                {
                    unsigned l_933 = 0xFD3D4089L;
                    if ((safe_lshift_func_uint8_t_u_s(0xD2L, l_922)))
                    {
                        int i, j, k;
                        (*l_872) = ((p_41 && (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_41, 11)), l_899))) != l_927);
                    }
                    else
                    {
                        union U0 * const **l_929 = &l_928;
                        int *l_932 = &g_87[2];
                        (*l_932) = func_46((((((*l_872) = (p_41 != (((*l_929) = l_928) != l_930))) <= 0x6A23L) <= g_512[0].f2) & p_41), l_931, p_43, &g_869, l_932);
                        (*l_932) = l_933;
                        return p_41;
                    }
                    if (p_41)
                        continue;
                    (*l_872) = (&p_41 == &g_367);
                }
            }
            for (g_74 = 0; (g_74 <= 1); g_74 += 1)
            {
                int l_935 = 1L;
                unsigned **l_951 = &g_205[0][1][3];
                for (g_38 = 0; (g_38 <= 1); g_38 += 1)
                {
                    int l_934 = 1L;
                    int i, j, k;
                    for (g_869 = 0; (g_869 <= 1); g_869 += 1)
                    {
                        int i, j, k;
                        g_175[0][2][7] = l_873[(g_74 + 4)][(g_74 + 1)][g_38];
                        if (l_914)
                            continue;
                    }
                    if (l_934)
                    {
                        l_934 = ((*l_872) = p_41);
                    }
                    else
                    {
                        if (l_935)
                            break;
                        return l_899;
                    }
                }
                (*l_872) = 0L;
                for (l_899 = 0; (l_899 != 55); l_899++)
                {
                    char l_938 = 0x31L;
                    if (l_938)
                        break;
                }
                for (l_899 = 0; (l_899 != 53); l_899++)
                {
                    if (l_935)
                    {
                        unsigned **l_952 = &g_205[0][0][3];
                        int l_953 = 0xF352837EL;
                        (*l_872) = 0L;
                        (*l_872) = (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_uint16_t_u_u(l_935, p_41)), (safe_add_func_int32_t_s_s((l_953 = (l_951 == l_952)), 0x891E10B2L)))), (safe_sub_func_uint32_t_u_u(l_935, (l_956 != (void*)0))))), 0UL));
                    }
                    else
                    {
                        p_43 = &g_17;

                        ;
                        if ((*p_43))
                            break;
                    }
                }
            }
        }

    }
    (*l_872) = (safe_lshift_func_uint16_t_u_s((((func_46((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(g_133, 6)), ((l_971 = (0xDC499ACEL != (safe_unary_minus_func_uint8_t_u(((*l_970) = (((l_969[4] = (p_41 > (safe_mod_func_uint8_t_u_u((func_46(func_46(((-1L) == (safe_lshift_func_int16_t_s_s(func_46((*l_872), p_43, &g_87[2], l_897, &l_871), (*l_872)))), &l_871, &l_871, p_40, &l_871), p_43, p_43, l_897, &g_87[7]) | 0x7AL), g_869)))) <= (*l_872)) >= p_41)))))) < 0x8557C864L))), &l_871, &l_871, &g_869, &l_871) >= 0xB9F7D344L) < (-1L)) && (*l_872)), 0));
    return p_41;
}







static unsigned short func_46(int p_47, int * const p_48, int * p_49, unsigned short * p_50, int * p_51)
{
    int *l_864 = &g_87[3];
    int **l_865 = (void*)0;
    unsigned l_866 = 4294967295UL;
    l_864 = (g_175[4][1][0] = l_864);
    return l_866;
}







static int * const func_52(unsigned short * p_53, short p_54)
{
    unsigned l_664 = 4294967295UL;
    int *l_694 = &g_87[4];
    union U0 ****l_714[6][6] = {{&g_426,&g_426,(void*)0,(void*)0,&g_426,&g_426},{(void*)0,&g_426,(void*)0,&g_426,(void*)0,(void*)0},{&g_426,&g_426,&g_426,&g_426,&g_426,&g_426},{&g_426,&g_426,&g_426,&g_426,&g_426,&g_426},{(void*)0,(void*)0,&g_426,(void*)0,&g_426,(void*)0},{&g_426,&g_426,(void*)0,(void*)0,&g_426,&g_426}};
    unsigned short *l_764[8] = {&g_74,&g_135.f2,&g_74,&g_135.f2,&g_74,&g_135.f2,&g_74,&g_135.f2};
    unsigned **l_804 = &g_205[0][2][2];
    unsigned ***l_803 = &l_804;
    unsigned ****l_802 = &l_803;
    int i, j;
    g_175[0][2][7] = &g_133;
    for (p_54 = 0; (p_54 != (-27)); p_54 = safe_sub_func_int16_t_s_s(p_54, 3))
    {
        unsigned char l_648 = 250UL;
        char l_667 = 0x1FL;
        union U0 **** const l_673 = &g_424;
        int l_674 = 0L;
        const unsigned short *l_675 = &g_621[1];
        int l_691 = 0x0AFDBF24L;
        int *l_701 = &g_133;
        short l_717 = 0xFC6AL;
        short l_743 = 0xDDD6L;
        short l_747[9] = {0xE270L,3L,0xE270L,3L,0xE270L,3L,0xE270L,3L,0xE270L};
        short **l_836 = &g_253;
        int **l_858[7][1][5] = {{{&l_701,&l_694,&l_701,&l_694,&l_694}},{{&l_694,&l_701,&l_694,(void*)0,(void*)0}},{{&l_701,&l_694,&l_694,&g_175[5][0][2],&g_175[5][0][2]}},{{(void*)0,&l_701,(void*)0,&l_701,&l_701}},{{&l_694,&l_701,&l_694,&g_175[5][0][2],&g_175[5][0][2]}},{{(void*)0,&l_701,(void*)0,&l_701,&l_701}},{{&l_694,&l_701,&l_694,&g_175[5][0][2],&g_175[5][0][2]}}};
        int i, j, k;
    }
    for (g_135.f3 = 24; (g_135.f3 != 16); g_135.f3--)
    {
        short l_861 = (-7L);
        if (l_861)
            break;
        for (g_90 = 0; (g_90 == 32); g_90 = safe_add_func_int16_t_s_s(g_90, 9))
        {
            (*l_694) = p_54;
        }
    }

    return l_694;


}







static short func_56(char p_57)
{
    unsigned short *l_64 = &g_38;
    char l_69 = 9L;
    unsigned short *l_73 = &g_74;
    unsigned short **l_72 = &l_73;
    unsigned short *l_76 = &g_74;
    unsigned short **l_75 = &l_76;
    const unsigned short *l_77 = &g_74;
    int *l_110 = &g_87[4];
    short *l_130 = &g_131;
    unsigned l_145 = 0x670F823FL;
    const unsigned short *l_202 = &g_74;
    int l_212 = 0x2CC3962BL;
    int l_222 = 0xB9D12531L;
    int l_231 = (-1L);
    unsigned l_242 = 0x28ED0E52L;
    unsigned l_260 = 0x8F88B38FL;
    char l_346 = (-8L);
    const unsigned short *l_390[4];
    union U0 ***l_425 = &g_173;
    unsigned ***l_436 = (void*)0;
    int l_501[4][8] = {{7L,0x3B56843FL,7L,0L,0L,7L,0x3B56843FL,7L},{0x51144EA5L,0L,(-9L),0L,0x51144EA5L,0x51144EA5L,0L,(-9L)},{0x51144EA5L,0x51144EA5L,0L,(-9L),0L,0x51144EA5L,0x51144EA5L,0L},{7L,0L,0L,7L,0x3B56843FL,7L,0L,0L}};
    const union U0 *l_513 = (void*)0;
    unsigned char l_528[8][2] = {{0x38L,1UL},{1UL,0x38L},{1UL,1UL},{0x38L,1UL},{1UL,0x38L},{1UL,1UL},{0x38L,1UL},{1UL,0x38L}};
    unsigned short **l_542 = &l_64;
    union U0 * const *l_596 = &g_136[5][0][0];
    union U0 * const **l_595 = &l_596;
    union U0 * const ***l_594[9] = {&l_595,(void*)0,&l_595,(void*)0,&l_595,(void*)0,&l_595,(void*)0,&l_595};
    int **l_611 = &g_175[0][2][7];
    int ***l_610 = &l_611;
    int l_641[8][5][6] = {{{0x1029F9DCL,0x1A89F293L,0L,0x80740597L,0xF2062585L,1L},{(-5L),0x5FB412FFL,0x84340749L,0xFCE40A3AL,0xE61B8A9DL,0xF27FB51DL},{0L,0x6F787819L,1L,0x1DBD89F8L,0x1029F9DCL,0x1029F9DCL},{2L,1L,1L,2L,1L,0x4C3C5C75L},{(-3L),(-1L),(-4L),0L,0xA7876DFBL,1L}},{{(-4L),7L,0xA916DC7BL,0x4475F4FEL,0xA7876DFBL,0L},{(-1L),(-1L),(-6L),0x9764AFBDL,1L,0xD5766C82L},{0xF8E1A79DL,1L,0x80740597L,0x972E4EEDL,0x1029F9DCL,0x43C7C1CEL},{0L,0x559879DBL,1L,0xABABC587L,0L,0x6F787819L},{0x20D0B49DL,1L,0x17CC6EFFL,0L,0x2A9CC40BL,0xF0345F46L}},{{0xA5887EA5L,0xABABC587L,0x3B74AD4BL,0x4C3C5C75L,0x1A89F293L,0x6A6A11F1L},{0x1029F9DCL,2L,(-1L),0x6F787819L,(-10L),0x53B436D7L},{0x1CE4E6A6L,0xB10621D9L,0L,1L,7L,(-2L)},{0x2C557175L,0L,0xF2062585L,1L,(-5L),0x68FFE322L},{9L,0xD5766C82L,0xFC79AF9BL,0xD5D7374AL,0x5A6AFE52L,0x1CE4E6A6L}},{{0L,0xF0345F46L,0x88B658DFL,0x138C7D02L,0L,(-1L)},{0x6F787819L,1L,0L,0L,0xF27FB51DL,0x0CD5047BL},{(-4L),0L,0x2C557175L,0xF8E1A79DL,0x138C7D02L,(-1L)},{0x0CD5047BL,0xE1CC61AEL,0x5FB412FFL,0xA5887EA5L,0x101B36D8L,0L},{0xFC79AF9BL,(-6L),0x5AAA577CL,(-6L),0xE1CC61AEL,(-2L)}},{{0xF71D5870L,0L,(-5L),0x1A404466L,1L,2L},{0L,(-9L),(-5L),0xB10621D9L,0x87DFB427L,0xB10621D9L},{0x0CD5047BL,(-1L),0x0CD5047BL,0x5AAA577CL,(-4L),1L},{0x18753A93L,0x5A6AFE52L,(-3L),0x80740597L,0x43271216L,(-10L)},{0xD60402B8L,0x6F787819L,0x5FB412FFL,0x80740597L,7L,0x5AAA577CL}},{{0x18753A93L,0x00CB9760L,0xABABC587L,0x5AAA577CL,0xA7876DFBL,0x43C7C1CEL},{0x0CD5047BL,0x1CE4E6A6L,0x88B658DFL,0xB10621D9L,(-10L),9L},{0L,0L,0xDFC9776FL,0x1A404466L,0xB132E945L,0xF27FB51DL},{0xF71D5870L,0x66E78823L,1L,(-6L),0xF27FB51DL,1L},{0xFC79AF9BL,0x80740597L,0x4475F4FEL,0xA5887EA5L,0L,1L}},{{0L,2L,0xD5D7374AL,0x53B436D7L,0x1378D74DL,0x9764AFBDL},{0L,1L,5L,(-3L),7L,(-5L)},{1L,0x138C7D02L,0x1A404466L,(-6L),0L,0xFC79AF9BL},{0x0A10915DL,0xABABC587L,0x6A6A11F1L,0L,0x00CB9760L,0x101B36D8L},{0x559879DBL,(-10L),0x53B436D7L,0L,(-1L),(-1L)}},{{0x84340749L,7L,0L,0x5A6AFE52L,0xF8E1A79DL,0L},{1L,0x1378D74DL,0x1A404466L,0L,(-6L),(-3L)},{0x0CE49135L,0L,0x80740597L,0L,0x1DBD89F8L,0xA7876DFBL},{0x2A9CC40BL,0xF27FB51DL,0x0CE49135L,(-1L),0xE3A5EE8BL,0L},{0x19A982F2L,0xB132E945L,0xABABC587L,(-4L),(-1L),(-2L)}}};
    unsigned l_644 = 0xF2C7930DL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_390[i] = &g_137[0][1].f2;
    l_110 = func_58(((*l_64) = 1UL), (safe_div_func_int8_t_s_s(p_57, (safe_rshift_func_int8_t_s_u(p_57, 2)))), ((0UL < (0xE1CFL && l_69)) < ((l_64 == ((*l_75) = ((*l_72) = l_64))) > (p_57 != g_74))), l_64, l_77);

    ;
    ;
    ;
    for (g_74 = 0; (g_74 > 24); g_74++)
    {
        int l_138 = 0x174F5884L;
        unsigned short *l_140 = (void*)0;
        int *l_176 = &g_87[2];
        int *l_179 = (void*)0;
        unsigned l_180 = 0x393E8204L;
        union U0 **l_197 = &g_136[5][0][0];
        const unsigned short *l_203 = &g_204;
        for (g_90 = 0; (g_90 < 22); ++g_90)
        {
            int *l_115 = &g_87[2];
            int *l_116[4][5][4] = {{{&g_17,&g_17,&g_17,&g_17},{(void*)0,(void*)0,(void*)0,&g_17},{&g_17,&g_17,(void*)0,&g_17},{(void*)0,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17}},{{&g_17,&g_17,(void*)0,&g_17},{&g_17,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{(void*)0,(void*)0,(void*)0,&g_17},{&g_17,&g_17,(void*)0,&g_17}},{{(void*)0,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,(void*)0,&g_17},{&g_17,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17}},{{(void*)0,(void*)0,&g_17,(void*)0},{(void*)0,&g_17,&g_17,&g_17},{&g_17,&g_17,(void*)0,&g_17},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0}}};
            char l_117 = 0x09L;
            int i, j, k;
            l_117 = ((*l_115) = g_17);
        }
        for (p_57 = 6; (p_57 >= 0); p_57 -= 1)
        {
            int l_127 = 0x7339E942L;
            int *l_132 = &g_133;
            union U0 *l_134 = &g_135;
            const unsigned short *l_141 = (void*)0;
            short *l_187[9] = {&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131,&g_131};
            unsigned l_191 = 4294967295UL;
            int i;
            (*l_132) = (g_87[p_57] = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(1UL)), (+g_87[p_57]))), ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(l_127, 6)) < (g_87[0] > (safe_mod_func_int8_t_s_s(((void*)0 != &g_17), g_90)))), g_87[2])) ^ (l_130 == &g_131)))));
            g_136[5][0][0] = l_134;
        }
    }
    for (p_57 = 0; (p_57 < (-19)); p_57 = safe_sub_func_uint16_t_u_u(p_57, 9))
    {
        int l_226 = 1L;
        l_222 = p_57;
        for (g_171 = 0; g_171 < 8; g_171 += 1)
        {
            g_87[g_171] = 0x573A2297L;
        }
        return l_226;
    }
    if (p_57)
    {
        unsigned l_227 = 9UL;
        l_227 = ((((*l_64) = g_135.f1) != g_131) > ((*l_110) || (*l_110)));
        l_222 = 0xF0F8D778L;
    }
    else
    {
        unsigned l_230 = 0xB9BA44DBL;
        int *l_236 = &g_87[2];
        unsigned *l_239 = &g_137[0][1].f3;
        unsigned l_290 = 4294967295UL;
        short l_308 = (-2L);
        union U0 **l_340[3];
        int l_372 = (-1L);
        unsigned short **l_504 = &l_76;
        unsigned **l_534[5];
        unsigned ** const *l_533 = &l_534[4];
        short l_567[8];
        int ***l_612 = &l_611;
        int l_615 = 1L;
        short ***l_627 = &g_252;
        int l_633 = 0xF9F997E0L;
        int *l_645 = &l_222;
        int i;
        for (i = 0; i < 3; i++)
            l_340[i] = &g_136[1][0][0];
        for (i = 0; i < 5; i++)
            l_534[i] = &g_205[0][1][3];
        for (i = 0; i < 8; i++)
            l_567[i] = 1L;
        if (((safe_rshift_func_uint8_t_u_u(1UL, l_230)) <= ((l_231 || (safe_lshift_func_int8_t_s_u(((p_57 || 0x36EEL) >= (((((safe_sub_func_int16_t_s_s((*l_110), ((*l_73) = (((*l_236) = 0x452CB20AL) & ((*l_110) & ((*l_239) = ((p_57 && 0L) == 65532UL))))))) != p_57) & g_17) <= g_90) ^ g_135.f1)), 4))) == p_57)))
        {
            short l_267 = 0L;
            unsigned short *l_268[8] = {&g_74,&g_137[0][1].f2,&g_74,&g_74,&g_137[0][1].f2,&g_74,&g_74,&g_137[0][1].f2};
            int *l_269 = (void*)0;
            int **l_280 = &l_236;
            unsigned char *l_291 = &g_171;
            int l_310 = 0x0C178906L;
            int i;
            for (l_230 = 0; (l_230 > 31); l_230++)
            {
                short **l_255[1];
                int l_261[4] = {0x1EE1E09EL,0x1EE1E09EL,0x1EE1E09EL,0x1EE1E09EL};
                int i;
                for (i = 0; i < 1; i++)
                    l_255[i] = &l_130;
            }
            (*l_280) = (void*)0;

            ;
            if (((p_57 != ((safe_rshift_func_int8_t_s_s((p_57 || 1UL), (safe_lshift_func_uint16_t_u_u(((*l_64) = (safe_rshift_func_uint8_t_u_u((*l_110), (safe_mod_func_uint32_t_u_u((~((((*l_291) = (safe_unary_minus_func_uint8_t_u(l_290))) >= g_17) >= g_87[0])), p_57))))), ((**g_252) && 0xAA0CL))))) == g_17)) ^ g_137[0][1].f2))
            {
                int **l_302 = &l_110;
                int *l_307 = &l_222;
                int *l_309[10] = {&g_17,&g_133,&g_17,&g_133,&g_17,&g_133,&g_17,&g_133,&g_17,&g_133};
                int i;
                l_310 = (safe_div_func_int32_t_s_s((p_57 != ((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((~(p_57 >= ((safe_rshift_func_int16_t_s_u(p_57, 15)) == ((void*)0 != l_302)))), (((safe_add_func_int8_t_s_s(((l_308 = ((safe_rshift_func_uint8_t_u_s(((p_57 && ((*l_307) = p_57)) != (((*l_72) = &g_38) == &g_74)), 0)) & g_204)) == g_17), 0x25L)) > g_87[2]) ^ 0x8E37L))) < (*l_110)), g_87[2])), p_57)) || g_137[0][1].f3) ^ p_57) > 0x0C9051D6L)), p_57));
            }
            else
            {
                unsigned short l_323 = 65535UL;
                if (p_57)
                {
                    int **l_311 = &g_175[0][2][7];
                    int ***l_312[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_312[i] = &l_311;
                    if ((&g_175[0][2][7] != (l_280 = l_311)))
                    {
                        unsigned short l_313[4][1] = {{2UL},{0x71C5L},{2UL},{0x71C5L}};
                        short *l_320 = &l_308;
                        short **l_321 = &l_130;
                        short **l_322 = &l_320;
                        int i, j;
                        (*l_280) = func_58(g_135.f0, l_313[2][0], (0UL >= (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(p_57, ((*g_253) = (safe_add_func_uint32_t_u_u((((p_57 & ((*l_239) = 0x9259B8EAL)) <= ((*g_252) != ((*l_322) = ((*l_321) = l_320)))) && (*l_110)), l_323))))), (-5L)))), &g_38, l_268[1]);

                        ;
                        l_222 = 0x569A448BL;
                        (*l_311) = (*l_280);
                    }
                    else
                    {
                        int l_324 = 0xACD0642EL;
                        l_324 = (*l_110);
                        (*l_280) = (*l_280);
                    }

                    ;
                    ;
                    for (l_145 = 0; (l_145 <= 2); l_145 += 1)
                    {
                        unsigned l_333[10][6] = {{4294967295UL,0x1FD1CD5BL,6UL,4294967295UL,0x1D2B124CL,0xB1A89167L},{0x6E22EF36L,0x1FD1CD5BL,4294967286UL,4294967286UL,0x1FD1CD5BL,0x6E22EF36L},{0x1FD1CD5BL,0x0BEF41ADL,1UL,4294967293UL,4294967295UL,0x2340B1CCL},{4294967286UL,1UL,0x1D2B124CL,0x2489F6C0L,0xB9388DD8L,2UL},{4294967286UL,4294967293UL,0x2489F6C0L,4294967293UL,4294967286UL,4294967295UL},{0x1FD1CD5BL,4294967295UL,0xB9388DD8L,4294967286UL,2UL,0x58181665L},{0x6E22EF36L,0x2340B1CCL,2UL,4294967295UL,0x58181665L,0x58181665L},{0x0BEF41ADL,0x1FD1CD5BL,0x1FD1CD5BL,0x0BEF41ADL,1UL,4294967293UL},{4294967295UL,0xB1A89167L,4294967295UL,0x2489F6C0L,0x6E22EF36L,0x1D2B124CL},{4294967295UL,0x2340B1CCL,0xB9388DD8L,0x9557001EL,0x6E22EF36L,0x9557001EL}};
                        int i, j;
                        g_175[5][3][3] = func_58(p_57, (*l_110), (safe_lshift_func_int8_t_s_u(((p_57 == ((~(safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_57, ((*l_239) = 4294967289UL))), (((**g_252) = ((*g_253) < (safe_add_func_uint16_t_u_u(0xDF57L, p_57)))) ^ 1L)))) && p_57)) & 0UL), 6)), (*l_75), &g_74);
                        return l_333[8][2];
                    }
                }
                else
                {
                    (*l_280) = &g_87[2];

                    ;
                    (**l_280) = (0xC0AF9B30L || p_57);
                    for (g_74 = (-11); (g_74 <= 55); g_74 = safe_add_func_uint8_t_u_u(g_74, 7))
                    {
                        unsigned short l_336 = 0xF3B6L;
                        (*l_236) = (*l_110);
                        return l_336;
                    }
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
        }
        else
        {
            char l_339 = 1L;
            short *l_352 = (void*)0;
            int l_359[5][5][3] = {{{0L,1L,0x5C36A206L},{(-8L),0x4FCC527BL,0x4FCC527BL},{(-8L),0x5C36A206L,1L},{0L,(-8L),0x32434D86L},{1L,0x08877C9AL,8L}},{{0xBD6667CCL,0L,(-3L)},{0x4FCC527BL,0x08877C9AL,0x468BE79BL},{8L,(-8L),0xBD6667CCL},{0xF4A1E99CL,0x5C36A206L,1L},{1L,0x4FCC527BL,1L}},{{0L,1L,0xBD6667CCL},{(-1L),0x32434D86L,0x468BE79BL},{0x497D43ADL,8L,(-3L)},{0x32434D86L,(-3L),8L},{0x497D43ADL,0x468BE79BL,0x32434D86L}},{{(-1L),0xBD6667CCL,1L},{0L,1L,0x4FCC527BL},{1L,1L,0x5C36A206L},{0xF4A1E99CL,0xBD6667CCL,(-8L)},{8L,0x468BE79BL,0x08877C9AL}},{{0x4FCC527BL,(-3L),0L},{0xBD6667CCL,8L,0x08877C9AL},{1L,0x32434D86L,(-8L)},{0L,1L,0x5C36A206L},{(-8L),0x4FCC527BL,0x4FCC527BL}}};
            unsigned char l_368 = 0xFDL;
            union U0 **l_380 = (void*)0;
            int l_396[8] = {0x83EE477EL,0x8947DD0DL,0xDCC32BC1L,0x8947DD0DL,0xDCC32BC1L,0xDCC32BC1L,0x8947DD0DL,0xDCC32BC1L};
            const int *l_397 = &l_372;
            int i, j, k;
            (*l_236) = (g_137[0][1].f0 > (((safe_sub_func_uint16_t_u_u(g_137[0][1].f3, ((*l_110) > l_339))) && (~p_57)) < (*l_110)));
            if ((((void*)0 == l_340[2]) & ((0xF740049AL == (g_135.f0 <= (((p_57 > p_57) ^ (safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s(l_339, (*l_110))) && (p_57 >= 5L)), l_339))) > p_57))) | g_38)))
            {
                short ***l_345 = &g_252;
                const unsigned char l_356[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
                int i;
                (*l_236) = (*l_110);
                (*l_345) = &l_130;

                ;
                if ((((p_57 & (((**l_75) = p_57) >= ((void*)0 != &l_239))) > (&g_133 == (void*)0)) && (g_137[0][1].f1 == (g_87[1] <= (((((l_346 <= p_57) == (-4L)) | p_57) || 0xA9L) <= 0L)))))
                {
                    int *l_357 = (void*)0;
                    int *l_358[1][5];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_358[i][j] = &g_87[5];
                    }
                    for (g_135.f2 = 0; (g_135.f2 >= 48); g_135.f2 = safe_add_func_int16_t_s_s(g_135.f2, 1))
                    {
                        short *l_349 = &g_131;
                        short **l_350 = (void*)0;
                        short **l_351 = &g_253;
                        short **l_354 = &l_352;
                        int **l_355[8][10] = {{&g_175[0][2][7],(void*)0,&l_236,&g_175[0][2][7],&g_175[0][2][7],(void*)0,&g_175[4][3][1],&l_236,&l_236,&l_110},{&g_175[0][2][7],&g_175[0][2][7],&g_175[2][3][3],&g_175[2][4][2],(void*)0,(void*)0,(void*)0,&g_175[1][3][7],&g_175[1][3][7],(void*)0},{(void*)0,&l_236,&g_175[0][2][7],&g_175[0][2][7],&l_236,(void*)0,&l_236,(void*)0,(void*)0,&g_175[0][2][7]},{&g_175[2][4][2],&g_175[0][2][7],&l_110,&g_175[4][3][1],&g_175[0][2][7],&l_236,&g_175[2][4][2],&l_110,(void*)0,&l_110},{&g_175[2][4][2],&l_236,(void*)0,&g_175[0][2][7],&g_175[2][3][3],(void*)0,&l_110,&g_175[0][2][7],(void*)0,&l_110},{(void*)0,&l_110,&g_175[0][2][7],(void*)0,&l_110,(void*)0,&g_175[0][2][7],&l_110,(void*)0,&g_175[2][3][3]},{&g_175[0][2][7],&g_175[0][2][7],&l_236,&l_110,&l_110,(void*)0,&l_110,&g_175[2][4][2],&l_236,&g_175[0][2][7]},{&g_175[0][2][7],(void*)0,(void*)0,&l_110,&g_175[0][2][7],(void*)0,(void*)0,&l_236,(void*)0,&l_236}};
                        int i, j;
                        l_236 = (g_175[5][1][3] = func_58((((*l_351) = ((*g_252) = l_349)) == ((*l_354) = (g_353 = l_352))), p_57, p_57, &g_74, &g_38));

                        ;
                        ;
                        if (l_356[5])
                            continue;
                    }

                    ;
                    ;
                    l_359[2][2][1] = p_57;
                }
                else
                {
                    unsigned char *l_364 = (void*)0;
                    unsigned char *l_365 = &g_171;
                    unsigned char *l_366 = &g_367;
                    int *l_369 = &l_359[2][2][1];
                    int *l_370 = &g_133;
                    int **l_371 = &l_236;
                    l_372 = ((0x2C06L < (safe_div_func_uint32_t_u_u(0x494FBD02L, (safe_sub_func_uint32_t_u_u(((*l_239) = (g_87[6] && ((*l_366) = ((*l_365) = p_57)))), 0x6F3D0493L))))) >= ((((p_57 >= ((*l_370) = ((*l_369) = (0x4DB512F2L | l_368)))) > ((((((*l_371) = &g_17) != (void*)0) != l_356[5]) & l_356[0]) <= 1UL)) == 0x55BEL) > 4294967294UL));

                    ;
                }

                ;
                ;
                for (l_231 = 0; (l_231 <= 3); l_231 = safe_add_func_int16_t_s_s(l_231, 3))
                {
                    int *l_376 = &g_87[3];
                }
            }
            else
            {
                union U0 ***l_379[4] = {&l_340[2],&l_340[2],&l_340[2],&l_340[2]};
                int **l_381 = &l_110;
                int i;
                l_380 = &g_136[3][0][0];

                ;
                (*l_381) = &g_87[2];

                ;
                return (**g_252);
            }

            ;
            ;
            ;
            for (g_135.f2 = 0; (g_135.f2 < 4); g_135.f2++)
            {
                char l_384 = 0x9AL;
                int l_386 = (-10L);
                int **l_408 = &g_175[2][1][0];
                int *l_409 = &g_87[2];
                if (p_57)
                {
                    int *l_385[1][1][8] = {{{&g_17,&g_17,&g_87[6],&g_17,&g_17,&g_87[6],&g_17,&g_17}}};
                    unsigned short *l_389 = &g_135.f2;
                    int i, j, k;
                    l_386 = (l_339 && (l_384 = (-10L)));
                    l_372 = l_386;
                    for (l_384 = 24; (l_384 < 10); l_384 = safe_sub_func_uint32_t_u_u(l_384, 1))
                    {
                        int **l_391 = &l_385[0][0][0];
                        int **l_394 = (void*)0;
                        int **l_395[4][7][1] = {{{&l_236},{&l_236},{&g_175[0][0][1]},{&l_236},{&g_175[1][2][0]},{&g_175[1][2][0]},{&l_236}},{{&g_175[0][0][1]},{&l_236},{&l_236},{&l_236},{&g_175[0][0][1]},{&l_236},{&g_175[1][2][0]}},{{&g_175[1][2][0]},{&l_236},{&g_175[0][0][1]},{&l_236},{&l_236},{&l_236},{&g_175[0][0][1]}},{{&l_236},{&g_175[1][2][0]},{&g_175[1][2][0]},{&l_236},{&g_175[0][0][1]},{&l_236},{&l_236}}};
                        int i, j, k;
                        (*l_391) = func_58(g_137[0][1].f3, g_131, p_57, l_389, l_390[1]);
                        l_372 = (safe_lshift_func_int16_t_s_u((**g_252), 6));
                        g_175[1][0][6] = ((*l_391) = (*l_391));
                        l_396[1] = p_57;
                    }
                }
                else
                {
                    g_398[2][0] = l_397;
                }
                for (g_38 = 0; (g_38 < 21); g_38++)
                {
                    int *l_404 = &l_359[2][2][1];
                    if ((safe_rshift_func_uint16_t_u_u(p_57, ((safe_unary_minus_func_int16_t_s(p_57)) < (p_57 && (*g_253))))))
                    {
                        int **l_405 = &l_110;
                        (*l_405) = l_404;

                        ;
                        (*l_110) = (*l_110);
                        if (p_57)
                            continue;
                        (*l_405) = &g_133;

                        ;
                    }
                    else
                    {
                        return (**g_252);



                    }

                    ;
                    for (l_290 = 0; (l_290 > 44); l_290++)
                    {
                        (*l_404) = p_57;
                    }
                }
                (*l_408) = (void*)0;
                (*l_409) = (-5L);
            }

            ;

        }


        ;
        ;
        ;
        ;

        for (l_230 = (-4); (l_230 > 60); ++l_230)
        {
            int **l_412 = &g_175[0][2][7];
            unsigned * const **l_421[6][9];
            int l_450 = 0L;
            int l_451 = 7L;
            unsigned short *l_491[5];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 9; j++)
                    l_421[i][j] = (void*)0;
            }
            for (i = 0; i < 5; i++)
                l_491[i] = &g_137[0][1].f2;
            (*l_412) = &g_17;
            for (l_222 = 0; (l_222 < 18); ++l_222)
            {
                unsigned short l_432 = 5UL;
                unsigned **l_439 = &g_205[0][1][3];
                unsigned ***l_438 = &l_439;
                const int l_474 = (-10L);
                int l_475 = 0x1D5544E2L;
                int *l_478 = (void*)0;
                unsigned l_526 = 0xE3A4B9FEL;
                for (l_69 = (-25); (l_69 != (-9)); l_69 = safe_add_func_uint32_t_u_u(l_69, 1))
                {
                    return p_57;




                }
            }
            if (((safe_rshift_func_uint16_t_u_u((g_87[2] | (safe_sub_func_uint8_t_u_u(((void*)0 != l_533), (safe_mod_func_int32_t_s_s(p_57, 1L))))), g_38)) > (g_512[0].f1 > g_90)))
            {
                unsigned l_553 = 0x1803213DL;
                const unsigned short *l_555 = &g_137[0][1].f2;
                int l_568[8][9] = {{0x8B4914C5L,0x2F544ED3L,0x4C1A5A11L,1L,1L,(-1L),0x07E8C983L,1L,0x07E8C983L},{0x5F2EC271L,(-1L),0xDFB23EF8L,0xDFB23EF8L,(-1L),0x5F2EC271L,9L,0xFF9DE862L,0xBBDC8697L},{1L,0x32CCB250L,(-1L),(-1L),0x8B4914C5L,0L,1L,1L,0L},{0xDFB23EF8L,1L,0xBBDC8697L,1L,0xDFB23EF8L,(-1L),9L,0x40987892L,0xE8C5AA48L},{1L,1L,1L,0L,0x32CCB250L,0x2F544ED3L,0x07E8C983L,0x2F544ED3L,0x32CCB250L},{9L,0x3163E402L,0x3163E402L,9L,(-1L),(-1L),0xBBDC8697L,0x5F2EC271L,1L},{0x4FAA71ADL,9L,1L,1L,1L,0L,0L,(-1L),1L},{0x320FFD4DL,0x5F2EC271L,0x320FFD4DL,0x3163E402L,0xE8C5AA48L,(-1L),1L,0x6DF83289L,0x40987892L}};
                int i, j;
                (*l_412) = func_58(g_512[0].f0, g_137[0][1].f3, p_57, (*l_72), &g_74);
                for (l_212 = 0; (l_212 == 20); l_212 = safe_add_func_int16_t_s_s(l_212, 1))
                {
                    short ***l_539 = &g_252;
                    unsigned short **l_543[2];
                    int l_554 = 0L;
                    unsigned char *l_564 = &g_367;
                    int *l_571 = &l_554;
                    int *l_572 = &l_450;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_543[i] = (void*)0;
                    (*l_539) = &g_253;

                    ;
                    l_236 = ((*l_412) = func_58((safe_rshift_func_int16_t_s_u(((*g_253) = ((l_542 != l_543[0]) != p_57)), (((*l_64) = (l_554 = ((safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u((p_57 && p_57), (safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((p_57 != (p_57 > p_57)))), (safe_div_func_int32_t_s_s((g_171 > p_57), 0x2506CC21L)))))) || l_553), (-2L))) || g_137[0][1].f0))) || 0x34FEL))), p_57, g_90, l_491[3], l_555));

                    ;
                    l_451 = ((*l_572) = ((*l_571) = (safe_rshift_func_int16_t_s_s((((((safe_mod_func_int16_t_s_s(((g_135.f1 != 0x92L) ^ (safe_rshift_func_int16_t_s_u((((((*l_564) = 0UL) | (((l_567[5] | ((*g_253) = (g_74 >= (l_568[1][1] = l_553)))) != (safe_lshift_func_int16_t_s_u(p_57, 14))) < ((void*)0 == l_491[1]))) && p_57) > l_554), p_57))), p_57)) > p_57) <= 65535UL) < 0L) ^ g_38), p_57))));
                }
            }
            else
            {
                unsigned short *l_582 = &g_38;
                int *l_584[8] = {&l_450,&l_450,&l_450,&l_450,&l_450,&l_450,&l_450,&l_450};
                unsigned char l_585 = 0xA1L;
                unsigned **l_586 = &g_205[1][0][0];
                unsigned l_600 = 0x8BCE0C53L;
                int i;
                for (l_69 = 16; (l_69 > (-19)); l_69--)
                {
                    int **l_575 = &l_110;
                    const unsigned short *l_583 = (void*)0;
                    unsigned **l_587[5] = {&l_239,&l_239,&l_239,&l_239,&l_239};
                    int i;
                    l_236 = ((*l_575) = ((*l_412) = &g_133));

                    ;
                    ;
                    if ((*l_236))
                    {
                        unsigned char *l_576 = &l_528[6][0];
                        unsigned char *l_577 = &g_367;
                        unsigned char *l_578 = (void*)0;
                        unsigned char *l_579[9] = {(void*)0,&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0,&g_171,(void*)0};
                        int i;
                        l_584[1] = func_58(g_90, (g_171 = ((*l_577) = ((*l_576) = g_74))), (safe_lshift_func_uint16_t_u_u(3UL, 14)), l_582, l_583);


                        return l_585;




                    }
                    else
                    {
                        short l_593 = 1L;
                        union U0 * const ****l_597 = (void*)0;
                        unsigned short *l_599 = &g_135.f2;
                        (**l_575) = (&g_205[0][1][0] == (void*)0);
                        l_587[3] = l_586;


                        (*l_575) = func_58(p_57, (safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((**g_252) || p_57), (g_592 != g_592))) & ((((*l_236) && l_593) < 5L) < (((g_598 = l_594[2]) == (void*)0) >= l_593))), p_57)), p_57, l_599, l_582);

                        ;
                    }

                    ;

                    (*l_575) = (void*)0;

                    ;
                    (*l_236) = 0x969434FFL;
                }
                if (l_600)
                    break;
            }
            if (p_57)
            {
                unsigned l_605 = 0xD2A0CB5DL;
                int ***l_609 = &l_412;
                int ****l_608[9][3] = {{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609},{&l_609,&l_609,&l_609}};
                int i, j;
                if (p_57)
                    break;
                if (p_57)
                    break;
                if ((p_57 || ((p_57 | (safe_div_func_uint8_t_u_u((((((*l_239) = (safe_sub_func_uint16_t_u_u((l_605 || (p_57 || ((l_610 = &l_412) != (l_612 = &l_611)))), g_512[0].f3))) ^ (safe_div_func_uint8_t_u_u((p_57 || l_615), g_512[0].f2))) != 0x0079L) > 0UL), p_57))) || (*g_253))))
                {
                    if (p_57)
                        break;

                }
                else
                {
                    int l_618[1][9][2] = {{{0xB6D8B681L,(-3L)},{(-1L),(-1L)},{0L,(-1L)},{(-1L),(-3L)},{0xB6D8B681L,1L},{0L,0xB6D8B681L},{1L,(-3L)},{1L,0xB6D8B681L},{0L,1L}}};
                    const unsigned short **l_619 = (void*)0;
                    const unsigned short *l_620 = &g_621[1];
                    int i, j, k;
                    l_618[0][4][1] = (g_137[0][1].f2 || ((p_57 != (safe_add_func_uint8_t_u_u(g_512[0].f2, g_74))) || ((*l_130) = p_57)));
                    (**l_612) = func_58(l_618[0][4][1], p_57, p_57, l_491[1], (l_620 = l_491[4]));

                    ;
                }


                if (p_57)
                    break;

            }
            else
            {
                unsigned l_622 = 4294967294UL;
                int *l_623 = (void*)0;
                int *l_624 = &l_222;
                short ****l_628 = &l_627;
                l_622 = p_57;
                if ((0x092CD6A7L | ((*l_624) = ((0xC600478BL >= (l_451 | l_451)) == p_57))))
                {
                    (*l_624) = 1L;
                }
                else
                {
                    for (l_451 = 2; (l_451 <= 7); l_451 += 1)
                    {
                        const int *l_625 = &g_87[2];
                        const int **l_626 = (void*)0;
                        int i;
                        (*l_624) = l_567[l_451];
                        (*l_624) = 5L;
                        g_398[8][1] = l_625;
                    }
                }
                (*l_624) = (((*l_628) = l_627) != &g_252);
                if (p_57)
                    break;
            }


        }


        ;
        ;

        (*l_645) = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(p_57, (((l_633 = p_57) <= (0x70L > ((safe_div_func_uint8_t_u_u(p_57, (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((void*)0 == g_640) & (p_57 < (l_641[6][3][1] ^ ((safe_div_func_uint8_t_u_u(p_57, p_57)) && p_57)))), l_644)), 0)))) == 4294967295UL))) & p_57))), 15)) & p_57);
    }



    ;
    ;

    ;

    return p_57;



}







static int * func_58(unsigned short p_59, unsigned char p_60, unsigned p_61, unsigned short * p_62, const unsigned short * p_63)
{
    short l_80 = 0xA52DL;
    int l_83 = 7L;
    int *l_86 = &g_87[2];
    short *l_88 = &l_80;
    unsigned *l_89 = &g_90;
    (*l_86) = ((safe_add_func_uint16_t_u_u(l_80, l_80)) ^ (p_60 || (~(l_80 != (safe_rshift_func_int16_t_s_u((((l_83 = p_59) <= (safe_add_func_uint8_t_u_u(((*p_62) ^ g_38), (-10L)))) && l_83), g_17))))));
    (*l_86) = ((((*l_88) = ((p_61 == (*l_86)) || 0x7A89A43DL)) != (9L >= g_38)) >= ((*l_89) = g_87[3]));
    l_86 = &l_83;

    ;
    (*l_86) = (safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((+(6UL || (safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int8_t_s((safe_div_func_int16_t_s_s(g_90, (g_38 = (safe_add_func_uint16_t_u_u((*l_86), g_87[1]))))))) | (safe_div_func_uint16_t_u_u(((g_74 == g_87[4]) && ((safe_rshift_func_uint16_t_u_s(((*l_86) ^ ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_74, ((g_90 == (*l_86)) == (*l_86)))), (*l_86))) || g_90)), 13)) || 1L)), p_60))), 4)))), (*l_86))), (*l_86)));
    return &g_17;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_135.f1, "g_135.f1", print_hash_value);
    transparent_crc(g_135.f2, "g_135.f2", print_hash_value);
    transparent_crc(g_135.f3, "g_135.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_137[i][j].f0, "g_137[i][j].f0", print_hash_value);
            transparent_crc(g_137[i][j].f1, "g_137[i][j].f1", print_hash_value);
            transparent_crc(g_137[i][j].f2, "g_137[i][j].f2", print_hash_value);
            transparent_crc(g_137[i][j].f3, "g_137[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_512[i].f0, "g_512[i].f0", print_hash_value);
        transparent_crc(g_512[i].f1, "g_512[i].f1", print_hash_value);
        transparent_crc(g_512[i].f2, "g_512[i].f2", print_hash_value);
        transparent_crc(g_512[i].f3, "g_512[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_621[i], "g_621[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_846[i][j][k], "g_846[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_869, "g_869", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_896[i][j], "g_896[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_981, "g_981", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1103[i], "g_1103[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
