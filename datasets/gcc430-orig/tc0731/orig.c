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
   unsigned char f0;
};

union U1 {
   char * f0;
};

union U2 {
   const short f0;
   short f1;
   short f2;
   volatile int f3;
   int f4;
};


static unsigned short g_5[2][3][1] = {{{0UL},{0UL},{0UL}},{{0UL},{0UL},{0UL}}};
static int g_17 = (-9L);
static volatile int g_24 = 0xEB256CD2L;
static volatile int g_25 = (-10L);
static volatile int g_26[2] = {0xE7179999L,0xE7179999L};
static int g_27[3] = {(-9L),(-9L),(-9L)};
static char * const g_34 = (void*)0;
static short g_42 = 0x0B87L;
static short g_54 = 0xBD7CL;
static const short *g_53 = &g_54;
static char g_56[7][9][3] = {{{0x46L,0x46L,0xAAL},{0x68L,0x98L,8L},{0xEEL,3L,0x86L},{0x78L,0L,(-1L)},{0x98L,0xEEL,0x86L},{1L,0L,8L},{0x86L,1L,0xAAL},{5L,0x78L,0x78L},{5L,0xAAL,1L}},{{0x86L,8L,0L},{1L,0x86L,0xEEL},{0x98L,(-1L),0xEEL},{0x86L,0xAAL,0L},{0xBCL,3L,0x78L},{(-1L),(-9L),(-3L)},{(-3L),0x86L,(-3L)},{0x42L,(-7L),0x78L},{1L,0x86L,0L}},{{5L,0xBCL,0xEEL},{0x86L,0xEEL,0xBCL},{5L,0L,0x86L},{1L,0x78L,(-7L)},{0x42L,(-3L),0x86L},{(-3L),(-3L),(-9L)},{(-1L),0x78L,3L},{0xBCL,0L,0xAAL},{0x86L,0xEEL,0x98L}},{{0x78L,0xBCL,0xAAL},{(-7L),0x86L,3L},{0x46L,(-7L),(-9L)},{8L,0x86L,0x86L},{8L,(-9L),(-7L)},{0x46L,3L,0x86L},{(-7L),0xAAL,0xBCL},{0x78L,0x98L,0xEEL},{0x86L,0xAAL,0L}},{{0xBCL,3L,0x78L},{(-1L),(-9L),(-3L)},{(-3L),0x86L,(-3L)},{0x42L,(-7L),0x78L},{1L,0x86L,0L},{5L,0xBCL,0xEEL},{0x86L,0xEEL,0xBCL},{5L,0xEEL,8L},{0x98L,5L,0x78L}},{{0L,0L,0x42L},{0L,0L,(-1L)},{0x46L,5L,0L},{(-9L),0xEEL,0x68L},{0x42L,0xAAL,(-3L)},{5L,(-9L),0x68L},{0x78L,8L,0L},{3L,0x78L,(-1L)},{(-7L),0x42L,0x42L}},{{(-7L),(-1L),0x78L},{3L,0L,8L},{0x78L,0x68L,(-9L)},{5L,(-3L),0xAAL},{0x42L,0x68L,0xEEL},{(-9L),0L,5L},{0x46L,(-1L),0L},{0L,0x42L,0L},{0L,0x78L,5L}}};
static char *g_55 = &g_56[5][7][2];
static unsigned short g_58 = 65531UL;
static unsigned short *g_57[1][9] = {{&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58}};
static const union U1 g_69 = {0};
static unsigned char g_155 = 0xDCL;
static union U0 g_192[7][6][2] = {{{{0xE1L},{1UL}},{{246UL},{0xA4L}},{{0x17L},{0xE1L}},{{0xA4L},{252UL}},{{1UL},{0x49L}},{{255UL},{0x49L}}},{{{1UL},{252UL}},{{0xA4L},{0xE1L}},{{0x17L},{0xA4L}},{{246UL},{1UL}},{{0xE1L},{255UL}},{{0x17L},{2UL}}},{{{255UL},{252UL}},{{255UL},{255UL}},{{255UL},{1UL}},{{0UL},{0x1BL}},{{255UL},{255UL}},{{0x9AL},{255UL}}},{{{1UL},{0x9EL}},{{1UL},{255UL}},{{0x9AL},{255UL}},{{255UL},{0x1BL}},{{0UL},{1UL}},{{255UL},{252UL}}},{{{252UL},{0x1BL}},{{255UL},{1UL}},{{0x9AL},{255UL}},{{0x17L},{0x9EL}},{{255UL},{0x02L}},{{0x9AL},{0x17L}}},{{{0x02L},{0x1BL}},{{1UL},{0UL}},{{255UL},{0UL}},{{1UL},{0x1BL}},{{0x02L},{0x17L}},{{0x9AL},{0x02L}}},{{{255UL},{0x9EL}},{{0x17L},{255UL}},{{0x9AL},{1UL}},{{255UL},{0x1BL}},{{252UL},{252UL}},{{255UL},{1UL}}}};
static union U0 * const g_191[3] = {&g_192[6][3][1],&g_192[6][3][1],&g_192[6][3][1]};
static union U2 g_212 = {0xDA4CL};
static union U2 g_215 = {1L};
static union U2 *g_214 = &g_215;
static unsigned short g_216 = 0x8AA4L;
static int *g_225 = &g_215.f4;
static char g_251 = 1L;
static const int g_258 = 2L;
static const int *g_257 = &g_258;
static short g_321 = 7L;
static unsigned g_381 = 1UL;
static int g_385 = 0xAFB7F0A5L;
static union U0 *g_431 = &g_192[4][1][0];
static union U2 g_460 = {0L};
static short g_577 = 1L;
static short g_578 = 0x9DFCL;
static unsigned char g_665 = 0x79L;
static volatile char ** const g_710[1] = {(void*)0};
static volatile char ** const *g_709 = &g_710[0];
static unsigned g_724[3][8] = {{0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL},{0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL},{0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL,0x0F5136A5L,0xA78E9AECL}};
static unsigned char *g_750 = &g_665;
static unsigned char * const *g_749 = &g_750;
static const unsigned **g_758 = (void*)0;
static const unsigned ***g_757[7][7] = {{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,(void*)0,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,(void*)0,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758,&g_758},{&g_758,&g_758,&g_758,&g_758,&g_758,&g_758,&g_758}};
static unsigned *g_762[4][9][5] = {{{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,(void*)0,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,(void*)0,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381}},{{(void*)0,&g_381,(void*)0,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,(void*)0}},{{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381}},{{(void*)0,&g_381,&g_381,&g_381,&g_381},{(void*)0,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_381,&g_381,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,(void*)0},{&g_381,&g_381,&g_381,&g_381,(void*)0},{&g_381,(void*)0,&g_381,&g_381,(void*)0},{&g_381,&g_381,(void*)0,&g_381,&g_381},{&g_381,(void*)0,&g_381,&g_381,(void*)0},{&g_381,&g_381,&g_381,&g_381,(void*)0}}};
static unsigned **g_761 = &g_762[0][5][0];
static unsigned ***g_760 = &g_761;
static int *g_824 = &g_27[1];
static unsigned g_829 = 0x7C401A10L;
static volatile short g_859 = (-9L);
static volatile short *g_858 = &g_859;
static volatile short **g_857 = &g_858;
static volatile short ***g_856 = &g_857;
static volatile unsigned ****g_949 = (void*)0;
static volatile unsigned ***** const g_948 = &g_949;
static union U2 g_1030 = {0x4265L};
static union U2 g_1038 = {0x3045L};
static unsigned char g_1121[4][10] = {{0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L},{0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L},{0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L},{0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L,0x58L}};
static const char g_1192[6] = {0L,0L,0L,0L,0L,0L};
static union U2 g_1236 = {2L};
static union U2 **g_1359 = &g_214;
static unsigned g_1389 = 4294967293UL;
static union U2 g_1394 = {0L};
static char g_1403 = (-1L);
static const union U2 g_1426 = {0L};
static union U2 g_1429 = {4L};
static const union U2 *g_1428 = &g_1429;
static const union U2 **g_1427 = &g_1428;
static short *g_1506 = &g_212.f1;
static union U2 g_1510 = {0xDB67L};
static union U2 g_1514 = {0xB77EL};
static unsigned short *g_1705[2] = {&g_216,&g_216};
static char g_1714[5] = {0x3CL,0x3CL,0x3CL,0x3CL,0x3CL};
static unsigned g_1719 = 4294967289UL;
static union U0 * const *g_1775 = &g_431;
static char g_1780 = 0x05L;
static union U1 g_1784 = {0};
static unsigned char g_1793 = 0xA8L;



static unsigned short func_1(void);
static short func_10(char p_11);
static short func_35(unsigned p_36);
static short func_43(char p_44, unsigned char p_45, int * p_46, unsigned char p_47, int * p_48);
static int * func_49(const short * p_50, char * p_51, unsigned short * p_52);
static unsigned func_59(unsigned p_60, unsigned short * p_61, short * const p_62, int * p_63);
static short * func_65(const union U1 p_66, short p_67, short p_68);
static int * func_71(unsigned short * p_72, char * p_73, short * p_74, const int * p_75, short * p_76);
static char * func_77(short p_78, const int p_79, const unsigned short * p_80);
static int func_135(short p_136, int * p_137);
static unsigned short func_1(void)
{
    unsigned short *l_4 = &g_5[0][0][0];
    int l_12[9][9][3] = {{{0L,(-5L),0x255EBDA1L},{(-1L),(-2L),(-1L)},{0xB0B44CF5L,0x225189D9L,0xB0B44CF5L},{(-1L),0L,0x0AE73598L},{0L,0x225189D9L,0x255EBDA1L},{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L}},{{(-1L),(-1L),0L},{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,0L},{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L}},{{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,0L},{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L},{7L,0x628405CEL,7L}},{{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,0L},{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L},{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL}},{{0x255D5800L,0x628405CEL,0L},{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L},{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,0L}},{{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L},{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,0L},{0x88A97331L,(-1L),0x501874DAL}},{{7L,0x8B15B45BL,7L},{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L},{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,0L},{0x88A97331L,(-1L),0x501874DAL},{7L,0x8B15B45BL,7L}},{{0x88A97331L,0x0AE73598L,0L},{0x255D5800L,0x8B15B45BL,0L},{(-1L),(-1L),0L},{7L,0x628405CEL,7L},{(-1L),0x0AE73598L,0x501874DAL},{0x255D5800L,0x628405CEL,(-7L)},{0x2758E92EL,(-1L),0L},{4L,0L,4L},{0x2758E92EL,0x501874DAL,(-8L)}},{{(-1L),0L,(-7L)},{(-2L),(-1L),(-8L)},{4L,1L,4L},{(-2L),0x501874DAL,0L},{(-1L),1L,(-7L)},{0x2758E92EL,(-1L),0L},{4L,0L,4L},{0x2758E92EL,0x501874DAL,(-8L)},{(-1L),0L,(-7L)}}};
    unsigned char *l_1792 = &g_1793;
    int l_1794 = 0xA32FCAC4L;
    int *l_1795 = (void*)0;
    int *l_1796 = (void*)0;
    int *l_1797 = (void*)0;
    unsigned short l_1814 = 65535UL;
    const union U2 **l_1819[5];
    char *l_1821[8] = {&g_1714[2],&g_1714[2],&g_1714[2],&g_1714[2],&g_1714[2],&g_1714[2],&g_1714[2],&g_1714[2]};
    int *l_1823 = &g_17;
    int *l_1824 = &g_1236.f4;
    int *l_1825 = &g_1030.f4;
    int *l_1826 = &g_27[2];
    int *l_1827[5][5] = {{&l_1794,(void*)0,&l_12[6][0][1],&g_385,&g_27[1]},{&l_12[6][0][1],(void*)0,&l_1794,&l_1794,(void*)0},{&g_27[1],&g_385,&g_27[1],(void*)0,&g_27[1]},{&g_385,&l_1794,&g_27[1],&l_12[6][0][1],&g_27[1]},{&g_27[1],&g_27[1],&l_1794,&g_27[1],&g_27[1]}};
    char l_1828[7];
    unsigned char l_1829[8][1][6] = {{{0x03L,249UL,0x03L,249UL,0x03L,249UL}},{{0x0BL,249UL,0x0BL,249UL,0x0BL,249UL}},{{0x03L,249UL,0x03L,249UL,0x03L,249UL}},{{0x0BL,249UL,0x0BL,249UL,0x0BL,249UL}},{{0x03L,249UL,0x03L,249UL,0x03L,249UL}},{{0x0BL,249UL,0x0BL,249UL,0x0BL,249UL}},{{0x03L,249UL,0x03L,249UL,0x03L,249UL}},{{0x0BL,249UL,0x0BL,249UL,0x0BL,249UL}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1819[i] = &g_1428;
    for (i = 0; i < 7; i++)
        l_1828[i] = 0L;
    l_12[6][0][1] = ((safe_div_func_int8_t_s_s(((((*l_4)++) | ((~(safe_rshift_func_int16_t_s_s(func_10(l_12[6][0][1]), l_12[3][5][2]))) > g_258)) < (l_1794 = func_35(((void*)0 != l_1792)))), ((7UL | l_12[4][8][2]) ^ l_12[3][1][2]))) && l_12[6][0][1]);
    for (g_1793 = 5; (g_1793 <= 12); g_1793 = safe_add_func_int16_t_s_s(g_1793, 7))
    {
        int l_1806 = 0xC5876F33L;
        unsigned ****l_1807 = (void*)0;
        int l_1815 = 0x67A7877CL;
        int l_1816 = 0xD20171CEL;
        unsigned short *l_1820 = &g_58;
        int *l_1822 = &g_27[1];
        l_1816 ^= (safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*g_750) |= (((((safe_mod_func_uint32_t_u_u(4294967295UL, l_1806)) <= ((l_1807 == (void*)0) >= ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-1L), (*g_1506))), ((l_1806 > l_1814) ^ (0x56B9L < 65535UL)))), l_1806)) != l_1806))) || l_1806) != l_1815) == (*g_858))), l_1806)), 1L));
        (*l_1822) = (safe_div_func_uint32_t_u_u((((*g_55) = func_135((l_1815 <= ((*l_4) &= ((void*)0 != l_1819[1]))), &l_1794)) ^ 0x0FL), l_1806));
    }
    ++l_1829[2][0][0];
    return (*l_1826);
}







static short func_10(char p_11)
{
    unsigned l_13 = 0xE9942C3BL;
    int *l_16 = &g_17;
    int *l_18 = &g_17;
    int *l_19 = &g_17;
    int *l_20 = &g_17;
    int *l_21 = &g_17;
    int *l_22 = (void*)0;
    int *l_23[6];
    int l_28 = (-10L);
    unsigned short l_29 = 0x3C34L;
    short *l_41 = &g_42;
    short *l_1779 = &g_1236.f2;
    const union U1 l_1781[6] = {{0},{0},{0},{0},{0},{0}};
    char *l_1787 = &g_56[5][7][2];
    short *l_1788 = &g_578;
    int **l_1789 = &l_16;
    char *l_1790 = &g_1714[1];
    int *l_1791[1][1];
    int i, j;
    for (i = 0; i < 6; i++)
        l_23[i] = &g_17;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1791[i][j] = &g_27[2];
    }
    --l_13;
    --l_29;
    g_1780 |= (safe_add_func_uint16_t_u_u((((void*)0 == g_34) > func_35((safe_add_func_uint32_t_u_u((p_11 < ((((safe_add_func_uint8_t_u_u((((*l_16) = ((*l_41) = (*l_21))) == ((*l_1779) &= (func_43(g_25, p_11, l_21, p_11, func_49(g_53, g_55, g_57[0][6])) == p_11))), p_11)) & p_11) ^ p_11) ^ g_1714[3])), g_1426.f0)))), p_11));
    (*l_1789) = l_1791[0][0];
    return (*l_16);
}







static short func_35(unsigned p_36)
{
    return p_36;
}







static short func_43(char p_44, unsigned char p_45, int * p_46, unsigned char p_47, int * p_48)
{
    int *l_1649[10] = {&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_27[1]};
    int **l_1650 = &l_1649[8];
    unsigned char l_1652[2][6][9] = {{{0x02L,0x5CL,0xC5L,0x51L,0xD0L,4UL,0x51L,0xCEL,254UL},{0x4DL,0xCEL,0x07L,1UL,0xAEL,0x28L,0x6EL,0xAEL,253UL},{0x4DL,0xE7L,0x62L,0x6EL,0x51L,0x07L,7UL,7UL,0x07L},{0x02L,0xCEL,0x62L,0xCEL,0x02L,253UL,0xAEL,0x6EL,0x28L},{0xCEL,0x5CL,0x07L,0x6EL,0x02L,254UL,0xCEL,0x51L,4UL},{7UL,0xD0L,0xC5L,1UL,0x51L,253UL,0xCEL,0xD0L,255UL}},{{0x5CL,1UL,255UL,249UL,2UL,0x51L,2UL,249UL,0xD0L},{2UL,2UL,0x4DL,255UL,0x75L,0x5CL,5UL,252UL,0xE7L},{1UL,2UL,1UL,1UL,255UL,0xE7L,252UL,5UL,0x5CL},{5UL,1UL,0x4DL,1UL,1UL,0xD0L,249UL,2UL,0x51L},{255UL,0x75L,0xD0L,255UL,255UL,0xD0L,0x75L,255UL,7UL},{253UL,1UL,0xAEL,249UL,0x75L,0xE7L,249UL,255UL,0x4DL}}};
    unsigned short *l_1676 = &g_216;
    union U0 *l_1687 = &g_192[3][4][1];
    int l_1733 = 0x82B2EE33L;
    unsigned ****l_1743 = &g_760;
    unsigned *****l_1742 = &l_1743;
    unsigned l_1755 = 0x2B7E5003L;
    short **l_1770 = &g_1506;
    short ***l_1769 = &l_1770;
    short ****l_1768 = &l_1769;
    short *****l_1767[3][1][7] = {{{(void*)0,&l_1768,(void*)0,&l_1768,(void*)0,&l_1768,(void*)0}},{{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768}},{{&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768}}};
    int l_1778 = 0x0DC85872L;
    int i, j, k;
    (*l_1650) = l_1649[8];
    if ((**l_1650))
    {
        g_824 = (void*)0;
    }
    else
    {
        const int l_1651 = 0x875E2DACL;
        unsigned char l_1669 = 246UL;
        int l_1681 = 0xE2753D84L;
        int l_1711 = 0x7F89E4E4L;
        int l_1713 = 1L;
        unsigned char l_1730[4] = {255UL,255UL,255UL,255UL};
        short *l_1763 = &g_1429.f1;
        short *****l_1771[10] = {&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768,&l_1768};
        unsigned *l_1774 = &g_381;
        int i;
        if (l_1651)
        {
            unsigned short l_1670 = 0x981FL;
            int l_1671 = (-2L);
            char *l_1677[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            short *l_1678 = &g_1038.f1;
            const unsigned short *l_1679 = &g_216;
            char l_1680 = 1L;
            const unsigned *l_1708 = &g_381;
            const unsigned ** const l_1707[10][5][5] = {{{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,(void*)0,&l_1708,&l_1708}},{{(void*)0,(void*)0,&l_1708,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,&l_1708}},{{&l_1708,&l_1708,(void*)0,&l_1708,&l_1708},{(void*)0,(void*)0,&l_1708,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708}},{{&l_1708,(void*)0,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,(void*)0,&l_1708,&l_1708},{(void*)0,(void*)0,&l_1708,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0}},{{&l_1708,(void*)0,&l_1708,(void*)0,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,&l_1708},{(void*)0,(void*)0,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0},{(void*)0,&l_1708,&l_1708,&l_1708,&l_1708}},{{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0},{&l_1708,(void*)0,&l_1708,(void*)0,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,&l_1708},{(void*)0,(void*)0,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0}},{{(void*)0,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0},{&l_1708,(void*)0,&l_1708,(void*)0,&l_1708},{&l_1708,(void*)0,&l_1708,&l_1708,&l_1708},{(void*)0,(void*)0,&l_1708,&l_1708,&l_1708}},{{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0},{(void*)0,&l_1708,&l_1708,&l_1708,&l_1708},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0},{&l_1708,(void*)0,(void*)0,&l_1708,&l_1708},{&l_1708,(void*)0,(void*)0,&l_1708,(void*)0}},{{&l_1708,&l_1708,&l_1708,(void*)0,&l_1708},{&l_1708,&l_1708,(void*)0,(void*)0,(void*)0},{&l_1708,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0},{(void*)0,&l_1708,(void*)0,&l_1708,&l_1708}},{{&l_1708,(void*)0,(void*)0,&l_1708,(void*)0},{&l_1708,&l_1708,&l_1708,(void*)0,&l_1708},{&l_1708,&l_1708,(void*)0,(void*)0,(void*)0},{&l_1708,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1708,&l_1708,&l_1708,&l_1708,(void*)0}}};
            int l_1712[2][6] = {{0x519F74CCL,0xD882349FL,0x519F74CCL,0x519F74CCL,0xD882349FL,0x519F74CCL},{0x519F74CCL,0xD882349FL,0x519F74CCL,0x519F74CCL,0xD882349FL,0x519F74CCL}};
            int l_1749 = 8L;
            int i, j, k;
            ++l_1652[0][0][1];
            for (g_1429.f1 = 0; (g_1429.f1 == 0); g_1429.f1++)
            {
                unsigned l_1667 = 4294967294UL;
                int l_1668 = 0xA590B244L;
                l_1671 = ((*p_48) |= ((((*g_55) < 1UL) | 6L) || 1L));
                (**l_1650) = l_1668;
                l_1681 = (((safe_sub_func_uint8_t_u_u(254UL, ((void*)0 != (*g_1427)))) & (safe_lshift_func_uint8_t_u_s(p_47, l_1680))) < (**g_857));
                for (l_1671 = 2; (l_1671 <= 9); l_1671 += 1)
                {
                    return (**g_857);
                }
                if (g_1429.f1)
                    goto lbl_1766;
            }
            if ((**l_1650))
            {
                union U2 *l_1682[9][6] = {{&g_212,(void*)0,(void*)0,&g_212,&g_1236,(void*)0},{(void*)0,(void*)0,&g_460,(void*)0,&g_1030,(void*)0},{&g_1236,&g_460,&g_1236,&g_1030,&g_1030,&g_1510},{&g_460,(void*)0,(void*)0,&g_1236,&g_1236,(void*)0},{(void*)0,(void*)0,&g_1236,&g_1510,&g_460,&g_212},{(void*)0,&g_1236,&g_1030,&g_212,&g_1030,&g_1236},{&g_1510,(void*)0,&g_1030,(void*)0,(void*)0,&g_212},{(void*)0,(void*)0,&g_1236,&g_1236,(void*)0,(void*)0},{&g_1236,(void*)0,(void*)0,&g_460,(void*)0,&g_1030}};
                int i, j;
                (*g_1427) = l_1682[3][0];
                return (*g_1506);
            }
            else
            {
                short ****l_1686 = (void*)0;
                short *****l_1685 = &l_1686;
                int l_1706[2][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
                short l_1725 = 5L;
                const union U2 **l_1759 = &g_1428;
                int i, j;
                if (((safe_mul_func_int16_t_s_s(((*g_1506) = (*g_53)), 0xCC66L)) > ((*p_48) &= l_1671)))
                {
                    if (((void*)0 == l_1685))
                    {
                        return p_44;
                    }
                    else
                    {
                        union U0 **l_1688 = (void*)0;
                        union U0 **l_1689[6][6][2] = {{{&l_1687,&l_1687},{&l_1687,&l_1687},{&l_1687,&l_1687},{&g_431,&l_1687},{&l_1687,&l_1687},{&l_1687,&l_1687}},{{&l_1687,&g_431},{&l_1687,&l_1687},{&l_1687,&l_1687},{&l_1687,&l_1687},{&g_431,&l_1687},{&l_1687,&l_1687}},{{&l_1687,&l_1687},{&l_1687,&g_431},{&l_1687,&l_1687},{&l_1687,&l_1687},{&l_1687,&l_1687},{&g_431,&l_1687}},{{&l_1687,&l_1687},{&l_1687,&l_1687},{&l_1687,&g_431},{&l_1687,&l_1687},{&l_1687,&l_1687},{&l_1687,&l_1687}},{{&l_1687,&g_431},{&l_1687,(void*)0},{(void*)0,&l_1687},{&g_431,&l_1687},{&g_431,&l_1687},{(void*)0,(void*)0}},{{&l_1687,&g_431},{&l_1687,&g_431},{&l_1687,(void*)0},{(void*)0,&l_1687},{&g_431,&l_1687},{&g_431,&l_1687}}};
                        int i, j, k;
                        (**l_1650) = (&g_192[6][3][1] != l_1687);
                        (*l_1650) = &l_1681;
                        g_431 = &g_192[6][3][1];
                        (*l_1650) = &l_1681;
                    }
                }
                else
                {
                    int *l_1690 = &g_27[2];
                    l_1690 = &l_1671;
                }
                (*l_1650) = p_46;
                for (p_44 = 0; (p_44 == (-9)); p_44 = safe_sub_func_uint8_t_u_u(p_44, 8))
                {
                    int l_1715 = 0x7BEB401BL;
                    int l_1724 = 0x9C96C903L;
                    unsigned char l_1744[7][10] = {{0x57L,0x57L,0x5FL,253UL,0x60L,253UL,0x5FL,0x57L,0x57L,0x5FL},{255UL,253UL,0x92L,0x92L,253UL,255UL,0x5FL,255UL,253UL,0x92L},{1UL,0x57L,1UL,0x92L,0x5FL,0x5FL,0x92L,1UL,0x57L,1UL},{1UL,255UL,0x57L,253UL,0x57L,255UL,1UL,1UL,255UL,0x57L},{255UL,1UL,1UL,255UL,0x57L,253UL,0x57L,255UL,1UL,1UL},{0x57L,1UL,0x92L,0x5FL,0x5FL,0x92L,1UL,0x57L,1UL,0x92L},{253UL,255UL,0x5FL,255UL,253UL,0x92L,0x92L,253UL,255UL,0x5FL}};
                    int i, j;
                    for (g_215.f1 = (-1); (g_215.f1 >= (-4)); g_215.f1 = safe_sub_func_int32_t_s_s(g_215.f1, 8))
                    {
                        unsigned l_1704 = 0xDE2CBC3FL;
                        unsigned *l_1709 = &g_829;
                        int l_1710 = 0xB9C0F140L;
                        int l_1716 = (-8L);
                        int l_1717 = 0x13683F58L;
                        int l_1718 = 0xBF10C89DL;
                        (*p_48) = (safe_rshift_func_uint16_t_u_s(func_59((l_1651 == (((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(l_1706[1][8], 6)), 12)) >= (((*l_1709) |= (((void*)0 == l_1707[0][1][3]) == (((((*g_856) == (void*)0) >= (*p_48)) || (-1L)) && 9L))) >= 0x98B522E7L)) ^ p_44)), &g_58, l_1676, p_46), 5));
                        (*l_1650) = l_1709;
                        --g_1719;
                    }
                    for (g_1510.f1 = 17; (g_1510.f1 >= 2); g_1510.f1 = safe_sub_func_int8_t_s_s(g_1510.f1, 5))
                    {
                        unsigned short l_1726 = 0x7F11L;
                        int l_1729 = 0x29633470L;
                        l_1726--;
                        l_1730[2]--;
                        l_1724 = (*p_48);
                        (*l_1650) = &g_27[1];
                    }
                    if ((((p_47 > p_44) < (+(*p_48))) | ((*g_750)--)))
                    {
                        unsigned char *l_1739 = (void*)0;
                        g_385 &= (safe_div_func_int8_t_s_s((((safe_unary_minus_func_uint8_t_u((247UL != (p_45 ^= (*g_750))))) & (l_1713 &= ((func_135((**g_857), &g_27[1]) || ((safe_div_func_uint16_t_u_u((l_1742 == &g_949), (*g_53))) != 1UL)) & l_1744[3][2]))) <= 0x7203CE47L), (**g_749)));
                    }
                    else
                    {
                        unsigned char l_1752 = 0UL;
                        (*p_48) = (safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(func_135((l_1749 == (-1L)), &g_27[2]), l_1744[3][0])) | (safe_lshift_func_int8_t_s_u((!l_1752), 3))), (l_1651 && (safe_sub_func_int8_t_s_s((p_45 < (!p_45)), 0xC3L)))));
                        if (l_1752)
                            continue;
                        (*p_48) = ((6L ^ (l_1755 != 1L)) < (safe_add_func_uint32_t_u_u(((l_1669 || (func_59(p_44, &g_58, &g_577, p_46) ^ l_1752)) >= l_1669), l_1725)));
                        return l_1752;
                    }
                    for (g_577 = 0; (g_577 <= 3); g_577 += 1)
                    {
                        union U2 **l_1758 = &g_214;
                        const union U2 ***l_1760 = (void*)0;
                        const union U2 ***l_1761 = &l_1759;
                        int i;
                        (*l_1650) = l_1649[g_577];
                        l_1711 = (l_1758 == ((*l_1761) = l_1759));
                        (*l_1650) = p_48;
                        return p_44;
                    }
                }
            }
            (*l_1650) = p_48;
        }
        else
        {
            int l_1762 = 0xE6D1CD4DL;
            short *l_1764 = &g_1394.f2;
            unsigned char l_1765 = 3UL;
            l_1762 &= (*p_48);
            (*p_48) = ((l_1762 || 7UL) >= (l_1681 & (p_47 > ((*g_55) & p_45))));
            l_1765 &= (**l_1650);
        }
        if (p_45)
            goto lbl_1766;
lbl_1766:
        l_1713 = l_1730[2];
        (*p_48) = (+(*p_48));
        if ((((l_1767[2][0][5] == l_1771[9]) > (safe_add_func_uint32_t_u_u(((*l_1774) = (((*l_1676) = 8UL) | (-1L))), (!l_1713)))) <= (+func_135((*g_1506), &g_27[1]))))
        {
            (*l_1650) = p_46;
            g_1775 = &g_191[2];
        }
        else
        {
            return p_47;
        }
    }
    l_1778 = (p_45 & (safe_lshift_func_int8_t_s_s((func_135(p_47, &g_27[0]) != (&l_1650 == &l_1650)), 1)));
    return (*g_1506);
}







static int * func_49(const short * p_50, char * p_51, unsigned short * p_52)
{
    int l_64 = 0x01D8B2D2L;
    int * const l_70 = &g_27[1];
    const char l_83 = (-1L);
    short *l_375 = &g_321;
    const int *l_376 = &g_258;
    int **l_817 = &g_225;
    int **l_818 = (void*)0;
    int **l_819 = &g_225;
    int **l_820 = &g_225;
    int **l_821 = (void*)0;
    int **l_822 = &g_225;
    int **l_823[1][9] = {{&g_225,&g_225,&g_225,&g_225,&g_225,&g_225,&g_225,&g_225,&g_225}};
    int l_1334 = 0x8B42931AL;
    int l_1349 = 4L;
    union U2 *l_1393 = &g_1394;
    short l_1438 = 0x0F95L;
    short **l_1456 = (void*)0;
    short ***l_1455 = &l_1456;
    unsigned char l_1508[10][4] = {{249UL,255UL,4UL,0x41L},{255UL,0UL,0UL,255UL},{0x13L,0x41L,0UL,0xECL},{255UL,249UL,4UL,249UL},{249UL,0UL,0x13L,249UL},{0x13L,249UL,0xECL,0xECL},{0x41L,0x41L,4UL,255UL},{0x41L,0UL,0xECL,0x41L},{0x13L,255UL,0x13L,0xECL},{249UL,255UL,4UL,0x41L}};
    unsigned ****l_1540 = &g_760;
    unsigned *****l_1539 = &l_1540;
    char l_1563 = (-10L);
    unsigned l_1574[6];
    short ****l_1585 = (void*)0;
    short *****l_1584 = &l_1585;
    unsigned short *l_1596[7] = {&g_58,&g_58,&g_58,&g_58,&g_58,&g_58,&g_58};
    unsigned ** const *l_1614 = &g_761;
    unsigned ** const **l_1613 = &l_1614;
    int l_1615 = 0xFC268C65L;
    int i, j;
    for (i = 0; i < 6; i++)
        l_1574[i] = 4294967290UL;
    if (((func_59(l_64, &g_58, func_65(g_69, (l_70 != (g_824 = func_71(&g_58, func_77(((safe_sub_func_uint32_t_u_u(0xAE93AC48L, l_83)) && (safe_add_func_int8_t_s_s(((*p_51) = (*p_51)), (safe_sub_func_int16_t_s_s(((*l_70) > 0xC7L), (*g_53)))))), (*l_70), &g_58), l_375, l_376, &g_321))), (*p_50)), g_762[0][5][0]) >= (*l_376)) ^ 4294967290UL))
    {
        unsigned short l_1305 = 0x4BB8L;
        int l_1321 = 2L;
        const unsigned char *l_1331 = &g_155;
        const unsigned char **l_1330 = &l_1331;
        const unsigned char ***l_1329[9][5][5] = {{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}},{{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330},{&l_1330,&l_1330,&l_1330,&l_1330,&l_1330}}};
        union U2 **l_1360 = (void*)0;
        short *l_1385 = (void*)0;
        union U0 *l_1397 = &g_192[6][3][1];
        int l_1410 = (-1L);
        int l_1412 = (-10L);
        int l_1442 = 1L;
        const short **l_1458 = (void*)0;
        const short ***l_1457 = &l_1458;
        const int l_1480 = 0L;
        unsigned short l_1484 = 1UL;
        int i, j, k;
        (*l_70) ^= 0x2980A05AL;
        (*l_819) = &g_385;
        for (g_1030.f1 = 0; (g_1030.f1 >= (-23)); g_1030.f1 = safe_sub_func_int8_t_s_s(g_1030.f1, 8))
        {
            int *l_1304 = &g_27[1];
            unsigned char * const **l_1328 = &g_749;
            int l_1335 = 0x25440165L;
            int l_1337 = 0xD601D3B2L;
            int l_1342 = 1L;
            int l_1343[10] = {1L,0x6C3819CDL,1L,1L,0x6C3819CDL,1L,1L,0x6C3819CDL,1L,1L};
            unsigned short l_1373 = 65535UL;
            short *l_1387[10] = {&g_1030.f1,(void*)0,(void*)0,(void*)0,&g_1030.f1,&g_1030.f1,(void*)0,(void*)0,(void*)0,&g_1030.f1};
            unsigned char l_1419 = 1UL;
            const union U2 *l_1425 = &g_1426;
            const union U2 **l_1424 = &l_1425;
            short **l_1453[10] = {&l_375,&l_1387[1],&l_1387[1],&l_375,&l_1387[1],&l_1387[1],&l_375,&l_1387[1],&l_1387[1],&l_375};
            short ***l_1452 = &l_1453[9];
            char l_1469 = 0x48L;
            const short l_1471 = 0x309AL;
            union U2 *l_1513 = &g_1514;
            int i;
            for (g_212.f1 = (-17); (g_212.f1 >= 29); g_212.f1 = safe_add_func_int32_t_s_s(g_212.f1, 5))
            {
                unsigned short l_1301 = 1UL;
                int l_1320 = (-1L);
                int l_1340 = 0x9F769F4CL;
                int l_1341 = 1L;
                int l_1346 = 0x61E5BB92L;
                int l_1347[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1347[i] = 0xB1C5DCB1L;
                ++l_1301;
                (*l_822) = l_1304;
                l_1305 &= (*l_1304);
                if ((g_385 &= (safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((*g_55), (((safe_mod_func_int16_t_s_s((*l_70), (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_1301, 1)), 6)))) <= (safe_lshift_func_uint8_t_u_u((**g_749), l_1301))) < 0x6F5D6757L))) ^ ((safe_lshift_func_int8_t_s_s((l_1320 = (((l_1321 = l_1320) >= 0x39BB6C60L) >= (*g_750))), l_1305)) || (*l_1304))), 7))))
                {
                    char l_1333[1][3][7] = {{{0L,0L,0L,0L,0L,0L,0L},{0xAAL,0xAAL,0xAAL,0xAAL,0xAAL,0xAAL,0xAAL},{0L,0L,0L,0L,0L,0L,0L}}};
                    int l_1336[10] = {5L,(-6L),5L,5L,(-6L),5L,5L,(-6L),5L,5L};
                    unsigned l_1350 = 0UL;
                    unsigned l_1353 = 0x8500EF90L;
                    int i, j, k;
                    for (g_216 = 0; (g_216 <= 2); g_216 += 1)
                    {
                        unsigned char l_1332 = 247UL;
                        int l_1338 = 0xB6D924C7L;
                        int l_1339 = 3L;
                        int l_1344 = (-1L);
                        int l_1345 = 0x31C9C1A7L;
                        int l_1348[7] = {(-8L),(-8L),(-1L),(-8L),(-8L),(-1L),(-8L)};
                        int i;
                        g_27[g_216] &= (safe_mod_func_int8_t_s_s(((!(((*g_53) || 7L) || (*g_750))) && (safe_sub_func_uint8_t_u_u(0UL, ((0x6B3DL ^ (((*p_51) = ((l_1328 == l_1329[6][1][4]) == ((l_1321 || ((l_1332 = (*g_53)) || (*g_53))) < 0x44L))) >= l_1305)) < l_1333[0][0][1])))), l_1334));
                        ++l_1350;
                        (*l_820) = &l_1343[6];
                        if (l_1353)
                            break;
                    }
                    for (g_321 = 0; (g_321 <= 3); g_321 += 1)
                    {
                        short l_1354 = 1L;
                        short *l_1356 = &g_460.f2;
                        union U2 **l_1358 = (void*)0;
                        union U2 ***l_1357[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1357[i] = &l_1358;
                    }
                    for (g_1038.f4 = 0; (g_1038.f4 > 29); g_1038.f4 = safe_add_func_int8_t_s_s(g_1038.f4, 6))
                    {
                        int *l_1365 = &l_1347[1];
                        return &g_385;
                    }
                }
                else
                {
                    int *l_1368 = &l_1347[1];
                    int l_1372[1][9][6] = {{{1L,1L,0x9E1D7A3EL,0xBFD565C3L,0x2F677402L,2L},{0L,0x9E1D7A3EL,0x81E5AAB9L,0xBFD565C3L,1L,1L},{1L,(-1L),(-1L),1L,1L,0x5D1AD7FCL},{(-8L),0L,2L,0L,0x81E5AAB9L,0xB9722E5AL},{3L,0xBFD565C3L,0xB2B2557BL,1L,0x81E5AAB9L,1L},{1L,0L,1L,0L,0xC75AF198L,0x2F677402L},{0xB9722E5AL,0xBFD565C3L,2L,0xB2B2557BL,1L,0L},{2L,(-8L),0xC75AF198L,0xBFD565C3L,(-1L),0L},{0x2F677402L,1L,2L,2L,1L,0x2F677402L}}};
                    int i, j, k;
                    for (g_1038.f4 = 14; (g_1038.f4 == (-7)); g_1038.f4 = safe_sub_func_uint32_t_u_u(g_1038.f4, 3))
                    {
                        if ((*g_225))
                            break;
                        return &g_385;
                    }
                    for (g_385 = 0; (g_385 == 25); g_385 = safe_add_func_uint32_t_u_u(g_385, 2))
                    {
                        int l_1371 = 0xD8F52AB3L;
                        if (l_1371)
                            break;
                        ++l_1373;
                        (*g_1359) = (void*)0;
                    }
                }
            }
        }
        l_1442 |= l_1480;
    }
    else
    {
        int *l_1541 = &g_385;
        int l_1558 = 1L;
        char l_1573 = 0x4DL;
        unsigned short *l_1594 = &g_58;
        unsigned ****l_1612 = &g_760;
        if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(func_59((+(safe_mul_func_int8_t_s_s((l_1539 == &g_949), (*g_750)))), &g_58, p_52, l_1541), ((safe_div_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u((*l_1541), (*g_53))) ^ 9L) != (*l_1541)), (*g_1506))) != (*l_1541)))), (*l_1541))))
        {
            unsigned *l_1548 = &g_829;
            int l_1557 = 2L;
            int * const *l_1582 = &g_225;
            const unsigned l_1609 = 0x5511436EL;
            int l_1628 = (-1L);
            if ((safe_add_func_int32_t_s_s(0x0820ED99L, (--(*l_1548)))))
            {
                int *l_1556[7] = {&g_27[1],&g_27[0],&g_27[0],&g_27[1],&g_27[0],&g_27[0],&g_27[1]};
                unsigned short *l_1575 = &g_58;
                unsigned short *l_1576 = &g_58;
                unsigned char **l_1578 = &g_750;
                unsigned char ***l_1577 = &l_1578;
                const union U1 l_1580 = {0};
                char *l_1603[9][5];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1603[i][j] = &g_1403;
                }
lbl_1618:
                l_1558 &= (((safe_sub_func_int16_t_s_s(func_59(((*l_1541) = ((safe_unary_minus_func_uint8_t_u(0UL)) >= (safe_sub_func_uint16_t_u_u((*p_52), (*p_52))))), p_52, &g_577, l_1556[4]), l_1557)) & 0x04F25CD2L) < l_1557);
lbl_1621:
                for (g_577 = 3; (g_577 >= 0); g_577 -= 1)
                {
                    int l_1564 = 1L;
                    int *l_1597[4];
                    char *l_1600 = &g_251;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1597[i] = (void*)0;
                    if (((*g_55) > (*p_51)))
                    {
                        int i;
                        l_1556[g_577] = l_1556[(g_577 + 2)];
                        if (g_215.f2)
                            goto lbl_1621;
                    }
                    else
                    {
                        int l_1579 = 0xBBE9625FL;
                        int ***l_1581 = &l_817;
                        int * const **l_1583 = &l_1582;
                        unsigned short **l_1595[1][10] = {{(void*)0,&g_57[0][6],&l_1576,&l_1576,&g_57[0][6],(void*)0,&g_57[0][6],&l_1576,&l_1576,&g_57[0][6]}};
                        char **l_1601 = (void*)0;
                        char **l_1602 = &l_1600;
                        int l_1606[3][5] = {{0x756A108BL,0x756A108BL,0x756A108BL,0x756A108BL,0x756A108BL},{2L,2L,2L,2L,2L},{0x756A108BL,0x756A108BL,0x756A108BL,0x756A108BL,0x756A108BL}};
                        int i, j;
                        l_1579 = ((void*)0 != l_1577);
                        g_225 = l_1597[0];
                        (*l_1541) = ((safe_lshift_func_int16_t_s_s(((((*l_1602) = l_1600) != (g_55 = l_1603[1][3])) ^ (safe_add_func_int16_t_s_s((-2L), l_1606[1][2]))), 14)) | (*l_1541));
                    }
                    if ((safe_mod_func_int16_t_s_s((((l_1558 = ((*l_1541) = ((l_1609 || (safe_add_func_uint32_t_u_u(((((*l_1539) = l_1612) == l_1613) | l_1615), ((*l_1541) | 0x9F4B2E36L)))) < 1L))) || ((*p_52) < (((*l_375) = (safe_mul_func_uint16_t_u_u((*p_52), (*p_50)))) & 0UL))) | 0xBAL), (*p_52))))
                    {
                        short l_1619 = 1L;
                        if (l_1557)
                            goto lbl_1618;
                        (*l_70) = l_1619;
                    }
                    else
                    {
                        int l_1620 = 1L;
                        if ((*l_1541))
                            break;
                        if (l_1620)
                            break;
                    }
                    for (l_1558 = 3; (l_1558 >= 0); l_1558 -= 1)
                    {
                        int i, j;
                        if (g_1121[l_1558][(g_577 + 2)])
                            break;
                    }
                }
                return &g_27[1];
            }
            else
            {
                int l_1622 = 0x4EA5DDC3L;
                union U2 ***l_1623 = &g_1359;
                (*l_1541) = (+l_1622);
                l_1622 |= 0x5CB5DA7DL;
                l_1628 |= func_59(((((&g_214 == ((*l_1623) = &l_1393)) < ((*l_1541) = l_1609)) == ((*g_1506) || ((*l_375) = (*p_50)))) | 0xD3L), &g_58, l_1594, &l_1558);
            }
        }
        else
        {
            int *l_1629 = &g_385;
            int l_1647[3][7] = {{0xA04A90F7L,0xA04A90F7L,1L,0xA04A90F7L,0xA04A90F7L,1L,0xA04A90F7L},{0xA6CB85F0L,(-1L),(-1L),0xA6CB85F0L,(-1L),(-1L),0xA6CB85F0L},{0xABD8A7D6L,0xA04A90F7L,0xABD8A7D6L,0xABD8A7D6L,0xA04A90F7L,0xABD8A7D6L,0xABD8A7D6L}};
            int i, j;
            for (g_155 = 0; (g_155 <= 2); g_155 += 1)
            {
                (*l_822) = &l_1558;
                for (g_1394.f2 = 0; (g_1394.f2 <= 2); g_1394.f2 += 1)
                {
                    int i, j;
                    (*l_1541) |= g_724[g_1394.f2][g_1394.f2];
                    for (g_216 = 0; (g_216 <= 3); g_216 += 1)
                    {
                        int i, j;
                        (*l_1541) = ((**l_820) = g_1121[g_216][g_216]);
                    }
                }
            }
            (*l_817) = &l_1558;
            (*l_70) ^= (*g_225);
            for (g_216 = 0; (g_216 <= 3); g_216 += 1)
            {
                char l_1630 = 0xFDL;
                int l_1631 = 0x3FE15359L;
                unsigned l_1632 = 0x922FC02AL;
                if ((*l_1541))
                {
                    l_1629 = ((*l_820) = (*l_822));
                    ++l_1632;
                    if ((*l_1629))
                        continue;
                    for (g_1510.f1 = 0; (g_1510.f1 <= 3); g_1510.f1 += 1)
                    {
                        char *l_1635 = &g_1403;
                        int i, j;
                        if (l_1508[(g_216 + 4)][g_216])
                            break;
                        (*l_1541) &= (g_1121[g_1510.f1][(g_1510.f1 + 6)] == (((*g_1506) & func_135((*g_1506), &g_27[1])) & (((*l_1635) = 7L) & 0x1DL)));
                        if ((*g_225))
                            continue;
                        (*g_225) = ((*g_1506) < (*p_52));
                    }
                }
                else
                {
                    int l_1636 = 8L;
                    int l_1648 = 7L;
                    l_1648 ^= (l_1636 == ((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((*l_1541), (safe_rshift_func_uint16_t_u_u((l_1558 = ((*p_52)++)), 6)))), 4L)) | (safe_add_func_int16_t_s_s(0x4CA7L, (l_1647[1][1] = ((*g_709) == (void*)0))))));
                }
                for (g_1429.f4 = 0; (g_1429.f4 <= 3); g_1429.f4 += 1)
                {
                    return &g_385;
                }
            }
        }
    }
    return &g_385;
}







static unsigned func_59(unsigned p_60, unsigned short * p_61, short * const p_62, int * p_63)
{
    unsigned char l_1258 = 0x11L;
    int l_1261 = 0x84BBEBF7L;
    int l_1262[3];
    unsigned char l_1263 = 9UL;
    unsigned l_1266 = 4294967295UL;
    int l_1288 = 0x99101119L;
    char *l_1294[7] = {&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2]};
    short *l_1295 = &g_1038.f2;
    int **l_1296[6][4] = {{(void*)0,&g_225,(void*)0,&g_225},{(void*)0,&g_225,(void*)0,&g_225},{(void*)0,&g_225,(void*)0,&g_225},{(void*)0,&g_225,(void*)0,&g_225},{(void*)0,&g_225,(void*)0,&g_225},{(void*)0,&g_225,(void*)0,&g_225}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_1262[i] = 0x51D882C7L;
    if (l_1258)
    {
        int *l_1259 = &g_215.f4;
        int *l_1260[3][4][8] = {{{&g_385,&g_385,&g_27[1],(void*)0,&g_27[1],&g_385,&g_385,&g_27[1]},{&g_27[1],&g_385,&g_385,&g_27[1],&g_27[1],&g_27[1],&g_27[1],&g_385},{&g_385,(void*)0,&g_27[1],&g_27[1],&g_27[1],(void*)0,&g_27[1],(void*)0},{&g_27[1],&g_385,&g_27[1],&g_385,&g_27[1],&g_385,&g_385,(void*)0}},{{&g_385,&g_27[1],&g_27[1],&g_27[1],&g_27[1],(void*)0,&g_27[1],&g_385},{&g_27[1],&g_385,&g_27[1],&g_27[1],&g_385,&g_385,&g_385,&g_27[1]},{&g_27[1],&g_27[1],&g_27[1],(void*)0,&g_27[1],&g_385,&g_27[1],(void*)0},{&g_27[1],&g_385,&g_27[1],&g_385,(void*)0,(void*)0,&g_27[1],(void*)0}},{{&g_27[1],&g_27[1],&g_385,&g_385,&g_27[1],&g_385,&g_385,&g_27[1]},{&g_27[1],&g_385,&g_27[1],&g_385,&g_385,(void*)0,&g_27[1],(void*)0},{&g_27[1],(void*)0,&g_385,&g_385,&g_27[1],&g_27[1],&g_27[1],&g_27[1]},{&g_385,&g_27[1],&g_27[1],&g_385,&g_27[1],&g_27[1],&g_385,&g_385}}};
        int i, j, k;
        l_1263--;
        l_1266++;
lbl_1279:
        for (g_665 = 23; (g_665 >= 32); g_665 = safe_add_func_int16_t_s_s(g_665, 6))
        {
            unsigned short *l_1275[5];
            int l_1276 = 1L;
            int l_1277 = (-8L);
            unsigned l_1278[10] = {0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L,0x3D818EC9L};
            int i;
            for (i = 0; i < 5; i++)
                l_1275[i] = &g_216;
            l_1278[3] = (safe_lshift_func_uint16_t_u_u((l_1277 = ((((*p_61) |= (safe_lshift_func_int8_t_s_s((*g_55), 5))) == (l_1276 = p_60)) & 0UL)), l_1262[1]));
            if (l_1263)
                goto lbl_1279;
            return p_60;
        }
        return l_1262[1];
    }
    else
    {
        unsigned short *l_1286 = &g_216;
        unsigned *l_1287[2][6][7] = {{{&g_829,(void*)0,&g_381,(void*)0,&g_829,(void*)0,&g_381},{&g_381,&g_381,&g_381,&g_829,&g_381,&g_381,&g_829},{&g_829,(void*)0,&g_381,&g_829,&g_381,&g_381,&g_829},{&g_829,&g_381,&g_381,&g_829,&g_381,&g_381,(void*)0},{&g_381,&g_829,&g_381,&g_381,&g_829,&g_829,&g_829},{(void*)0,&l_1266,&g_381,&l_1266,(void*)0,(void*)0,&g_381}},{{&g_829,&g_829,&g_381,&l_1266,&g_829,&g_829,&g_381},{(void*)0,(void*)0,&g_381,&g_829,&g_829,&g_829,&g_381},{&g_829,&l_1266,&g_381,&g_829,(void*)0,&g_381,(void*)0},{(void*)0,&g_381,&g_381,&g_381,&g_381,&g_381,&g_381},{&g_381,&g_829,(void*)0,&g_381,&g_829,&g_829,&g_829},{&g_829,&l_1266,&g_381,&g_381,&g_829,(void*)0,(void*)0}}};
        unsigned char *l_1291 = &g_155;
        int *l_1292 = (void*)0;
        int *l_1293 = &l_1262[1];
        int i, j, k;
        (*l_1293) = (safe_add_func_uint8_t_u_u(((*l_1291) = ((**g_749) = (safe_mul_func_int8_t_s_s((((-10L) <= (safe_mod_func_uint16_t_u_u((*p_61), 8UL))) == (((p_63 == &g_258) | ((*l_1286) = (*p_61))) & (l_1288 = (p_60 = 6UL)))), (l_1262[1] | (safe_rshift_func_uint16_t_u_u(0UL, 14))))))), 0xBBL));
    }
    p_63 = &l_1262[1];
    g_27[1] &= (*p_63);
    return p_60;
}







static short * func_65(const union U1 p_66, short p_67, short p_68)
{
    union U0 *l_825 = (void*)0;
    const unsigned char l_826[5][8] = {{0xB1L,250UL,250UL,0xB1L,0x2CL,1UL,0x2CL,0xB1L},{250UL,0x2CL,250UL,1UL,0x8EL,0x8EL,1UL,250UL},{0x2CL,0x2CL,0x8EL,1UL,0xA1L,1UL,0x8EL,0x2CL},{0x2CL,250UL,1UL,0x8EL,0x8EL,1UL,250UL,0x2CL},{250UL,0xB1L,0x2CL,1UL,0x2CL,0xB1L,250UL,250UL}};
    int l_850 = 0x0920A308L;
    int l_852 = 0xB73F4318L;
    short *l_862[3];
    short **l_861 = &l_862[1];
    short ***l_860 = &l_861;
    int l_870[7] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
    unsigned char **l_908 = &g_750;
    unsigned l_935 = 0x4B136BE3L;
    unsigned ****l_947 = &g_760;
    unsigned *****l_946 = &l_947;
    char *l_975 = &g_56[2][4][1];
    unsigned short l_991 = 65531UL;
    unsigned char ** const l_1085 = &g_750;
    short **l_1099 = &l_862[1];
    char * const *l_1109 = &g_34;
    char * const **l_1108 = &l_1109;
    short l_1113 = 0x9119L;
    int l_1196 = 0x812F9D0BL;
    short l_1214[2];
    unsigned l_1215[1][6][4] = {{{4294967289UL,0xB9D42EF7L,0xB9D42EF7L,4294967289UL},{0xB9D42EF7L,4294967289UL,0xB9D42EF7L,0xB9D42EF7L},{4294967289UL,4294967289UL,0x984F4B2BL,4294967289UL},{4294967289UL,0xB9D42EF7L,0xB9D42EF7L,4294967289UL},{0xB9D42EF7L,4294967289UL,0xB9D42EF7L,0xB9D42EF7L},{4294967289UL,4294967289UL,0x984F4B2BL,4294967289UL}}};
    unsigned short *l_1250 = &g_58;
    unsigned char *l_1253[3];
    int *l_1254 = &g_27[1];
    int *l_1255 = &g_215.f4;
    int *l_1256 = &g_385;
    short *l_1257 = &g_1030.f2;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_862[i] = &g_54;
    for (i = 0; i < 2; i++)
        l_1214[i] = 1L;
    for (i = 0; i < 3; i++)
        l_1253[i] = &g_1121[1][7];
    if (((l_825 == (void*)0) != (p_68 < l_826[4][2])))
    {
        int *l_837[3][3];
        short ***l_864 = &l_861;
        short l_900 = 0xB6D9L;
        unsigned char **l_910 = &g_750;
        const int l_918 = (-9L);
        char * const *l_939[7] = {&g_34,&g_34,&g_34,&g_34,&g_34,&g_34,&g_34};
        char * const **l_938[4] = {&l_939[4],&l_939[4],&l_939[4],&l_939[4]};
        int *l_1011 = &l_870[0];
        unsigned char l_1013 = 0x22L;
        union U2 *l_1037[2];
        unsigned short *l_1058 = &l_991;
        unsigned char l_1081 = 0x52L;
        unsigned l_1114 = 0x98830F1DL;
        int l_1120 = 0x1DD132F7L;
        union U0 **l_1137 = (void*)0;
        unsigned l_1146 = 4294967291UL;
        int l_1151 = 0xDD27ED31L;
        unsigned *l_1152 = &l_935;
        short *l_1169 = &g_54;
        int l_1175 = 2L;
        char l_1176 = 0L;
        unsigned char l_1182 = 0x76L;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_837[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_1037[i] = &g_1038;
        if (l_826[2][3])
        {
            int l_830 = 0x24131926L;
            int l_866 = 0x60C9044AL;
            int l_868 = 3L;
            char l_871 = (-10L);
            int l_873[2];
            unsigned l_883 = 4294967295UL;
            char l_897 = 0x59L;
            unsigned l_901[10] = {0xF85338C7L,0xF85338C7L,4294967286UL,0xF85338C7L,0xF85338C7L,0xF85338C7L,4294967295UL,4294967295UL,0xF85338C7L,4294967295UL};
            unsigned char ***l_909[10] = {(void*)0,(void*)0,&l_908,&l_908,&l_908,(void*)0,(void*)0,&l_908,&l_908,&l_908};
            int **l_911 = &g_225;
            int i;
            for (i = 0; i < 2; i++)
                l_873[i] = (-7L);
            l_830 = ((*g_824) = (safe_lshift_func_int8_t_s_s(g_829, l_826[4][2])));
lbl_842:
            (*g_824) |= (safe_lshift_func_int16_t_s_u((0x53L < (((safe_mul_func_int8_t_s_s((p_67 > (safe_mod_func_uint8_t_u_u(p_68, 4UL))), (*g_55))) && (4294967295UL > l_826[2][3])) ^ l_826[4][2])), 10));
            if (p_67)
            {
                int *l_840 = &l_830;
                unsigned l_845 = 0xE9C34640L;
                int l_867 = 0x510B6D6FL;
                int l_872 = 0x1D71D262L;
                int l_874 = (-6L);
                int l_875 = (-6L);
                for (g_460.f1 = 0; (g_460.f1 < 9); g_460.f1 = safe_add_func_int32_t_s_s(g_460.f1, 1))
                {
                    unsigned short l_851 = 0x7079L;
                    int l_865 = 3L;
                    int l_869[10][10] = {{1L,8L,1L,0x106A884AL,0L,7L,1L,8L,0xFCB5182CL,0xFAB50991L},{0x77E21977L,0x8727F87DL,0xB6128BFEL,8L,1L,0xA4249B89L,1L,8L,0xB6128BFEL,0x8727F87DL},{1L,7L,1L,(-7L),0xFCB5182CL,0x106A884AL,1L,0xFAB50991L,1L,(-7L)},{1L,0x8727F87DL,1L,0x106A884AL,0x77E21977L,0x106A884AL,1L,0x8727F87DL,1L,0xFAB50991L},{1L,8L,0xB6128BFEL,0x8727F87DL,0x77E21977L,0xA4249B89L,0L,(-7L),0xB6128BFEL,(-7L)},{0x77E21977L,7L,0xFCB5182CL,0x8727F87DL,0xFCB5182CL,7L,0x77E21977L,0xFAB50991L,1L,0x8727F87DL},{1L,(-7L),0xFCB5182CL,0x106A884AL,1L,0xFAB50991L,1L,(-7L),1L,0xFAB50991L},{0L,(-7L),0xB6128BFEL,(-7L),0L,0xA4249B89L,0x77E21977L,0x8727F87DL,0xB6128BFEL,8L},{0L,0xFAB50991L,1L,0x8727F87DL,1L,0x106A884AL,0x77E21977L,0x106A884AL,1L,0x8727F87DL},{0xFCB5182CL,0x8727F87DL,0xFCB5182CL,7L,0x77E21977L,0xFAB50991L,1L,0x8727F87DL,1L,0x106A884AL}};
                    int i, j;
                    for (g_212.f2 = 4; (g_212.f2 >= 1); g_212.f2 -= 1)
                    {
                        int **l_841 = &l_837[0][0];
                        (*l_841) = l_840;
                    }
                    for (g_251 = 2; (g_251 >= 0); g_251 -= 1)
                    {
                        if (g_212.f2)
                            goto lbl_842;
                    }
                    if (((safe_add_func_int8_t_s_s((0x2EL | ((*g_55) ^= l_830)), (l_845 & (safe_mod_func_int8_t_s_s(p_67, (*l_840)))))) != ((safe_sub_func_int32_t_s_s(l_850, (*l_840))) ^ (l_852 = l_851))))
                    {
                        unsigned l_855 = 4294967290UL;
                        short ****l_863[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_863[i] = &l_860;
                        (*l_840) = ((*g_750) & (((l_855 |= (safe_add_func_uint32_t_u_u(p_67, p_68))) & (+l_851)) ^ (g_856 == (l_864 = l_860))));
                    }
                    else
                    {
                        unsigned short l_876 = 0x9E4DL;
                        ++l_876;
                        if (l_865)
                            continue;
                    }
                }
            }
            else
            {
                unsigned char l_888 = 0xFAL;
                int l_889 = 0x36503D23L;
                unsigned ** const ** const *l_894[1];
                int l_898 = 0L;
                int l_899[4][2] = {{0x990A38EBL,0x990A38EBL},{0x85E7603BL,0x990A38EBL},{0x990A38EBL,0x85E7603BL},{0x990A38EBL,0x990A38EBL}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_894[i] = (void*)0;
                l_889 |= ((*g_824) = (safe_mod_func_int8_t_s_s(((*g_55) = (((safe_div_func_int16_t_s_s((l_883 | ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_68, 5)), (l_852 != p_68))) && ((*g_750) == p_68))), p_68)) || p_68) == p_68)), (**g_749))));
                l_868 |= ((safe_add_func_uint8_t_u_u(l_870[0], (safe_sub_func_int32_t_s_s(l_850, ((((l_894[0] != l_894[0]) && p_68) == (l_852 != (safe_rshift_func_int16_t_s_u(p_68, 7)))) && (*g_824)))))) != p_67);
                l_901[6]++;
            }
            (*g_824) |= (((safe_sub_func_uint8_t_u_u(((p_67 < (safe_lshift_func_int16_t_s_s((func_135(((l_908 = l_908) == l_910), ((*l_911) = &l_873[1])) || l_826[1][4]), (safe_mod_func_int8_t_s_s(((~(safe_div_func_uint16_t_u_u(p_68, ((**l_861) ^= (safe_add_func_int8_t_s_s((l_870[4] >= p_67), p_68)))))) != l_870[4]), 0x99L))))) || 3L), l_918)) | p_68) ^ p_67);
        }
        else
        {
            int l_919[5][3] = {{0x9304D724L,0x755C1F16L,0x9304D724L},{8L,0xE282AC74L,8L},{0x9304D724L,0x755C1F16L,0x9304D724L},{8L,0xE282AC74L,8L},{0x9304D724L,0x755C1F16L,0x9304D724L}};
            int l_927 = (-7L);
            char * const *l_937[1];
            char * const **l_936 = &l_937[0];
            unsigned l_961 = 0x784FFF19L;
            unsigned short *l_966 = &g_58;
            unsigned char **l_974 = &g_750;
            char *l_984[2][10][10] = {{{&g_56[2][3][1],&g_251,&g_56[2][3][1],&g_251,&g_251,&g_251,&g_251,&g_56[2][3][1],&g_251,&g_56[2][3][1]},{&g_56[2][3][1],&g_56[5][7][2],&g_251,(void*)0,&g_251,&g_56[5][7][2],&g_56[2][3][1],&g_56[2][3][1],&g_56[5][7][2],&g_251},{&g_56[5][7][2],&g_56[2][3][1],&g_56[2][3][1],&g_56[5][7][2],&g_251,(void*)0,&g_251,&g_56[5][7][2],&g_56[2][3][1],&g_56[2][3][1]},{&g_251,&g_56[2][3][1],&g_251,&g_251,&g_251,&g_251,&g_56[2][3][1],&g_251,&g_56[2][3][1],&g_251},{(void*)0,&g_56[5][7][2],&g_251,&g_56[5][7][2],(void*)0,&g_251,&g_251,(void*)0,&g_56[5][7][2],&g_251},{&g_251,&g_251,&g_251,&g_251,&g_56[2][3][1],&g_251,&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2]},{(void*)0,&g_251,&g_251,&g_251,&g_251,(void*)0,&g_56[5][7][2],(void*)0,&g_251,&g_251},{&g_251,&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_251},{&g_251,(void*)0,&g_56[5][7][2],&g_251,&g_56[5][7][2],(void*)0,&g_251,&g_251,(void*)0,&g_56[5][7][2]},{(void*)0,&g_251,&g_251,(void*)0,&g_56[5][7][2],&g_251,&g_56[5][7][2],(void*)0,&g_251,&g_251}},{{&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_251,&g_251},{&g_251,(void*)0,&g_56[5][7][2],(void*)0,&g_251,&g_251,&g_251,&g_251,(void*)0,&g_56[5][7][2]},{&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_251,&g_56[2][3][1],&g_251,&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2],&g_56[5][7][2]},{(void*)0,&g_251,&g_251,&g_251,&g_251,(void*)0,&g_56[5][7][2],(void*)0,&g_251,&g_251},{&g_251,&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],(void*)0},{(void*)0,&g_56[2][3][1],&g_56[5][7][2],&g_251,&g_56[5][7][2],&g_56[2][3][1],(void*)0,(void*)0,&g_56[2][3][1],&g_56[5][7][2]},{&g_56[2][3][1],(void*)0,(void*)0,&g_56[2][3][1],&g_56[5][7][2],&g_251,&g_56[5][7][2],&g_56[2][3][1],(void*)0,(void*)0},{&g_56[5][7][2],(void*)0,&g_251,&g_251,&g_251,&g_251,(void*)0,&g_56[5][7][2],(void*)0,&g_251},{&g_251,&g_56[2][3][1],&g_251,&g_56[2][3][1],&g_251,&g_251,&g_251,&g_251,&g_56[2][3][1],&g_251},{&g_56[5][7][2],&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_251,&g_251,&g_56[5][7][2],&g_56[5][7][2],&g_251}}};
            int l_1012[1];
            short l_1119 = 1L;
            unsigned short l_1139 = 0x7E26L;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_937[i] = &g_55;
            for (i = 0; i < 1; i++)
                l_1012[i] = (-1L);
lbl_1064:
            if (p_67)
            {
                unsigned l_940 = 4294967295UL;
                short *l_965 = &g_321;
                char *l_976 = &g_56[5][7][2];
                const int *l_977 = (void*)0;
                if (l_919[1][2])
                {
                    unsigned *l_924 = (void*)0;
                    unsigned *l_925 = &g_829;
                    int l_926 = 0x227BC95AL;
                    (*g_824) = (safe_rshift_func_int16_t_s_s(func_135(func_135((safe_rshift_func_uint8_t_u_s(((+((*l_925) = p_67)) <= l_926), 3)), &g_27[2]), &l_870[0]), 7));
                    l_927 ^= (*g_824);
                }
                else
                {
lbl_930:
                    (*g_824) = 0xA30A1C5EL;
                    for (g_212.f4 = 19; (g_212.f4 >= 23); ++g_212.f4)
                    {
                        if (g_665)
                            goto lbl_930;
                    }
                    (*g_824) &= p_67;
                }
                if (func_135((safe_sub_func_uint16_t_u_u((l_940 && (0xDEL <= ((p_67 > l_826[4][1]) && 65529UL))), (*g_53))), &g_27[1]))
                {
                    for (l_935 = 0; l_935 < 5; l_935 += 1)
                    {
                        for (g_212.f4 = 0; g_212.f4 < 3; g_212.f4 += 1)
                        {
                            l_919[l_935][g_212.f4] = 2L;
                        }
                    }
                }
                else
                {
                    unsigned char l_950 = 0x00L;
                    int **l_985 = &g_225;
                    const unsigned short *l_986 = &g_216;
                    short *l_987 = &g_460.f1;
                    short ****l_988 = &l_864;
                    if (((**g_749) || (((safe_unary_minus_func_uint32_t_u(((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_67, (l_946 != g_948))), p_68)) & l_950))) | l_852) || (safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((((p_68 <= (func_135((l_852 == l_850), &l_870[1]) ^ l_919[1][2])) ^ 0x0592L) | l_927) & l_927), p_68)) | l_940), l_852)), 0xA2434880L)) != l_961), 0x2275C00CL)) || 0xED7CE4ACL), l_950)))))
                    {
                        const int *l_962 = &g_258;
                        const int **l_963 = (void*)0;
                        const int **l_964 = &g_257;
                        (*l_964) = l_962;
                        (*l_964) = &g_258;
                        return l_965;
                    }
                    else
                    {
                        unsigned char ***l_973 = &l_910;
                        int **l_978 = &g_824;
                        int **l_979 = &g_225;
                        (*l_978) = &g_385;
                        (*l_979) = ((*l_978) = &g_385);
                    }
                    (*l_985) = &g_27[1];
                    (**l_985) = (&l_861 == ((*l_988) = &l_861));
                }
            }
            else
            {
                char l_989 = 1L;
                short *l_990 = &g_460.f2;
                int l_1018 = 0x64B773DAL;
                if (func_135((l_870[5] && p_67), &l_870[3]))
                {
                    int l_992 = (-9L);
                    (*g_824) = l_989;
                    for (p_68 = 0; (p_68 <= 0); p_68 += 1)
                    {
                        return l_990;
                    }
                    l_991 ^= p_68;
                    if (l_992)
                    {
lbl_1009:
                        (*g_824) = p_68;
                        (*g_824) ^= (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*g_53), (p_68 && (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_68 != (((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_989, (**g_749))), 0)) | (safe_div_func_int16_t_s_s(0L, func_135((l_927 = (~l_850)), &l_852)))) != p_68)), (*g_53))), (*g_53)))))), p_67)), 3));
                    }
                    else
                    {
                        if (g_212.f2)
                            goto lbl_1009;
                    }
                }
                else
                {
                    int **l_1010[10][1] = {{&g_225},{&g_225},{&l_837[1][1]},{&l_837[0][2]},{&l_837[1][1]},{&g_225},{&g_225},{&l_837[1][1]},{&l_837[0][2]},{&l_837[1][1]}};
                    short *l_1016[6] = {&g_215.f2,&g_578,&g_215.f2,&g_215.f2,&g_578,&g_215.f2};
                    unsigned l_1020 = 0x1EBCE98BL;
                    int i, j;
                    l_1011 = (l_837[1][1] = l_837[2][0]);
                    if (p_68)
                    {
                        (*g_824) = (*g_824);
                        l_1013--;
                        return &g_578;
                    }
                    else
                    {
                        short l_1017[7][1][10] = {{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}},{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}},{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}},{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}},{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}},{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}},{{0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L,0x3561L}}};
                        int l_1019 = 0x3BC813D4L;
                        int i, j, k;
                        --l_1020;
                        g_385 &= ((safe_lshift_func_int16_t_s_s((p_67 <= ((**g_749) == func_135((*g_53), &g_27[0]))), 10)) | (safe_add_func_uint16_t_u_u((l_870[0] = (p_68 >= p_67)), (-1L))));
                        return &g_321;
                    }
                }
                for (g_212.f4 = 17; (g_212.f4 >= 29); g_212.f4++)
                {
                    union U2 *l_1029 = &g_1030;
                    if (l_927)
                        break;
                    (*l_1011) |= (l_1029 == (void*)0);
                }
            }
            if ((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((*g_750), ((*g_53) || func_135((*g_53), &l_1012[0])))), (((l_927 > ((safe_rshift_func_uint8_t_u_u(((*l_1011) || (*l_1011)), (*l_1011))) | p_68)) >= p_67) > p_68))))
            {
                union U2 **l_1039 = &g_214;
                short **l_1059 = (void*)0;
                const int l_1063[6][7] = {{0x12643176L,0xCF08F72FL,0x55D6FAB7L,0L,0L,0x55D6FAB7L,0xCF08F72FL},{0x12643176L,0x26D7665DL,(-4L),0x12643176L,(-6L),(-6L),0x12643176L},{(-4L),0xCF08F72FL,(-4L),(-6L),0xCF08F72FL,0x26D7665DL,0x26D7665DL},{0xCF08F72FL,0x12643176L,0x55D6FAB7L,0x12643176L,0xCF08F72FL,0x55D6FAB7L,0L},{0L,0x26D7665DL,(-6L),0L,(-6L),0x26D7665DL,0L},{(-4L),0L,0x26D7665DL,(-6L),0L,(-6L),0x26D7665DL}};
                int i, j;
                (*l_1039) = l_1037[0];
                for (g_1038.f4 = 0; (g_1038.f4 >= 0); g_1038.f4 -= 1)
                {
                    unsigned short *l_1046[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1046[i] = &l_991;
                    if ((safe_lshift_func_int8_t_s_s(((*g_55) = l_1012[g_1038.f4]), 3)))
                    {
                        int i;
                        (*g_824) &= ((((((safe_mul_func_uint16_t_u_u(l_1012[g_1038.f4], (0L > (&g_216 != l_1046[0])))) != ((safe_mul_func_int8_t_s_s(func_135((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_1012[g_1038.f4], l_1012[g_1038.f4])), l_1012[g_1038.f4])), p_67)), &l_852), l_1012[g_1038.f4])) >= l_1012[g_1038.f4])) > l_870[3]) <= l_826[4][2]) <= 6L) > p_68);
                    }
                    else
                    {
                        union U2 ***l_1057 = &l_1039;
                        (*l_1057) = &g_214;
                        return l_966;
                    }
                }
                if (func_135(p_68, &g_27[2]))
                {
                    for (g_665 = 0; (g_665 <= 1); g_665 += 1)
                    {
                        unsigned l_1060 = 4294967295UL;
                        l_1012[0] |= ((*l_864) == l_1059);
                        l_1060++;
                        if (l_1063[2][6])
                            break;
                    }
                    (*l_1011) |= (*g_824);
                }
                else
                {
                    unsigned short *l_1065[2];
                    const int *l_1066 = (void*)0;
                    const int **l_1067 = (void*)0;
                    const int **l_1068 = &l_1066;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1065[i] = &g_216;
                    if (g_460.f1)
                        goto lbl_1064;
                    (*l_1068) = l_1066;
                    (*g_824) = p_68;
                }
                return &g_577;
            }
            else
            {
                short l_1079 = 0x4678L;
                int l_1080 = 1L;
                int l_1115 = 1L;
                for (g_215.f1 = 0; (g_215.f1 <= 2); g_215.f1 += 1)
                {
                    unsigned l_1069 = 5UL;
                    unsigned char **l_1084 = &g_750;
                    l_1069 = p_67;
                    if ((l_961 <= func_135(l_1069, &g_27[2])))
                    {
                        unsigned l_1070 = 0xAEA1E6AEL;
                        (*l_1011) = p_67;
                        ++l_1070;
                        if (l_870[0])
                            break;
                    }
                    else
                    {
                        unsigned short l_1073 = 0x58DAL;
                        int *l_1076[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1076[i] = &l_870[0];
                        l_1073++;
                        g_824 = l_1076[0];
                        (*g_824) |= (safe_lshift_func_uint16_t_u_u(p_68, 1));
                        (*g_824) &= func_135(l_1079, &g_27[1]);
                    }
                    l_1081++;
                    for (l_935 = 0; (l_935 <= 2); l_935 += 1)
                    {
                        int i, j;
                        if (g_724[g_215.f1][(l_935 + 4)])
                            break;
                        (*g_824) = (g_724[l_935][(g_215.f1 + 3)] != ((l_908 = l_1084) == l_1085));
                    }
                }
                if ((((*l_861) = (*l_861)) == (void*)0))
                {
                    unsigned l_1090[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1090[i] = 0x7EE09315L;
                    for (g_1030.f4 = 17; (g_1030.f4 == 4); g_1030.f4 = safe_sub_func_uint16_t_u_u(g_1030.f4, 9))
                    {
                        return &g_54;
                    }
                    for (g_460.f4 = 1; (g_460.f4 >= 0); g_460.f4 -= 1)
                    {
                        const int *l_1088[10][5] = {{(void*)0,(void*)0,&g_27[1],(void*)0,(void*)0},{&g_258,(void*)0,&g_258,&g_258,(void*)0},{(void*)0,&g_258,&g_258,(void*)0,&g_258},{(void*)0,(void*)0,&g_27[1],(void*)0,(void*)0},{&g_258,(void*)0,&g_258,&g_258,(void*)0},{(void*)0,&g_258,&g_258,(void*)0,&g_258},{(void*)0,(void*)0,&g_27[1],(void*)0,(void*)0},{&g_258,(void*)0,&g_258,&g_258,(void*)0},{(void*)0,&g_258,&g_258,(void*)0,&g_258},{(void*)0,(void*)0,&g_27[1],(void*)0,(void*)0}};
                        const int **l_1089 = &g_257;
                        int i, j;
                        (*l_1089) = l_1088[7][4];
                        if (l_852)
                            break;
                        (*g_824) = func_135(l_1090[0], &l_1080);
                    }
                }
                else
                {
                    int l_1100[5][5] = {{9L,0L,(-1L),(-1L),0L},{9L,0L,(-1L),(-1L),0L},{9L,0L,(-1L),(-1L),0L},{9L,0L,(-1L),(-1L),0L},{9L,0L,(-1L),(-1L),0L}};
                    int l_1101 = (-9L);
                    short *l_1118 = &g_1038.f2;
                    int i, j;
                    for (g_381 = (-9); (g_381 >= 10); g_381 = safe_add_func_uint16_t_u_u(g_381, 1))
                    {
                        short ***l_1098 = (void*)0;
                        unsigned short l_1102[9][6][4] = {{{65535UL,0x9F97L,0UL,0x2CAFL},{0x3B18L,65535UL,0UL,0x9F97L},{0UL,3UL,0UL,1UL},{0x3B18L,0x20F6L,0UL,0x1D3CL},{65535UL,0xC9F3L,0x5D04L,3UL},{0x5D04L,3UL,0x66F5L,8UL}},{{0x2BBBL,0x262DL,1UL,0x2CAFL},{65535UL,8UL,0x2897L,0x2CAFL},{3UL,1UL,0x5759L,65535UL},{0UL,8UL,0x9776L,8UL},{6UL,0x274CL,65528UL,0xE8FDL},{0xA971L,0xA3DBL,0UL,65534UL}},{{0x2897L,8UL,65535UL,0UL},{0x2897L,65535UL,0UL,65535UL},{0xA971L,0UL,65528UL,0x7B7EL},{6UL,1UL,0x9776L,0UL},{0UL,65534UL,0x5759L,8UL},{3UL,0xA3DBL,65528UL,0x535DL}},{{0UL,0xA3DBL,0xAAE4L,8UL},{0x2897L,65534UL,3UL,0UL},{0UL,1UL,0UL,0x7B7EL},{0UL,0UL,0x3B18L,65535UL},{6UL,65535UL,0x5759L,0UL},{65535UL,8UL,0x5759L,65534UL}},{{6UL,0xA3DBL,0x3B18L,0xE8FDL},{0UL,0x274CL,0UL,8UL},{0UL,8UL,3UL,65535UL},{0x2897L,1UL,0xAAE4L,65535UL},{0UL,65535UL,65528UL,65535UL},{3UL,1UL,0x5759L,65535UL}},{{0UL,8UL,0x9776L,8UL},{6UL,0x274CL,65528UL,65535UL},{1UL,8UL,0xA971L,0UL},{0UL,0xC9F3L,0x9776L,0xA3DBL},{0UL,0x535DL,0xA971L,0UL},{1UL,0xA3DBL,65535UL,65535UL}},{{0x57A7L,0xE8FDL,0x3B18L,0xA3DBL},{0x2897L,0UL,65528UL,0xC9F3L},{0x5759L,8UL,65535UL,0x7B7EL},{0x5D04L,8UL,7UL,0xC9F3L},{0UL,0UL,0x5759L,0xA3DBL},{0xA971L,0xE8FDL,0xA971L,65535UL}},{{0x5D04L,0xA3DBL,65527UL,0UL},{0x57A7L,0x535DL,65528UL,0xA3DBL},{0UL,0xC9F3L,65528UL,0UL},{0x57A7L,8UL,65527UL,65535UL},{0x5D04L,65534UL,0xA971L,0xC9F3L},{0xA971L,0xC9F3L,0x5759L,0x274CL}},{{0UL,0xE8FDL,7UL,0UL},{0x5D04L,0x274CL,65535UL,0UL},{0x5759L,0xE8FDL,65528UL,0x274CL},{0x2897L,0xC9F3L,0x3B18L,0xC9F3L},{0x57A7L,65534UL,65535UL,65535UL},{1UL,8UL,0xA971L,0UL}}};
                        int i, j, k;
                        (*l_1011) &= (safe_add_func_int16_t_s_s(p_68, (p_67 != ((*l_860) != (l_1099 = (*l_860))))));
                        if (l_1080)
                            break;
                        --l_1102[3][2][0];
                        if (p_68)
                            continue;
                    }
                    if (((*l_1011) = p_67))
                    {
                        char *** const l_1110 = (void*)0;
                        int l_1116 = (-2L);
                        int **l_1117 = &g_225;
                        (*l_1011) |= p_67;
                        l_1116 |= ((l_1115 &= (safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(l_927)), (l_1080 = ((l_1108 == l_1110) || ((safe_rshift_func_int16_t_s_u(((**l_1099) = (((**l_1085) &= (p_68 && p_68)) < (((*g_824) &= (((g_212.f1 > (l_1113 ^= (((*l_975) &= l_1100[2][4]) || (&l_927 != &l_870[0])))) | l_1114) >= p_67)) > 0xA51C8B74L))), 14)) >= 2L)))))) != 1L);
                        (*l_1117) = &g_385;
                        (*g_824) ^= (-1L);
                    }
                    else
                    {
                        (*l_1011) ^= p_67;
                        return &g_578;
                    }
                    if (p_68)
                    {
                        return l_1118;
                    }
                    else
                    {
                        return &g_54;
                    }
                }
            }
            g_1121[1][7]++;
            for (l_1013 = (-15); (l_1013 <= 5); l_1013 = safe_add_func_uint16_t_u_u(l_1013, 5))
            {
                unsigned short l_1130[7] = {65535UL,65535UL,3UL,65535UL,65535UL,3UL,6UL};
                int l_1138[9][2][1] = {{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}},{{0x046FDAB3L},{0x102875A2L}}};
                int i, j, k;
                g_1030.f4 = ((*l_1011) = ((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((void*)0 != (*g_749)), (l_1130[5]--))), l_1012[0])) == func_135((safe_mod_func_int8_t_s_s((*g_55), ((p_68 ^ ((*l_1011) | (safe_lshift_func_int8_t_s_s(((-1L) && (l_1012[0] < ((l_1138[0][0][0] = (&l_825 == l_1137)) & 0xA125B08BL))), l_1139)))) ^ 4294967295UL))), &g_27[2])));
            }
        }
lbl_1165:
        l_852 = ((*g_824) ^= (safe_div_func_int8_t_s_s((l_864 == (void*)0), (safe_add_func_uint32_t_u_u((p_68 <= (safe_mod_func_int32_t_s_s((l_850 != l_1146), ((~(((*l_1152) &= (safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_1151, l_1113)), 3))) != l_826[0][4])) ^ l_850)))), p_67)))));
        for (g_212.f1 = 21; (g_212.f1 != 7); g_212.f1 = safe_sub_func_uint32_t_u_u(g_212.f1, 3))
        {
            int l_1172 = 0x5BAD0B7AL;
            int l_1174 = 0xA223DF2AL;
            union U0 *l_1187 = (void*)0;
            char *l_1193 = (void*)0;
            if (func_135((*g_53), l_1152))
            {
                unsigned short l_1155 = 0x1B75L;
                int l_1173 = (-3L);
                const char *l_1191[2][3][5] = {{{&g_1192[0],&g_1192[0],&g_1192[0],(void*)0,&g_1192[5]},{(void*)0,(void*)0,&g_1192[4],(void*)0,(void*)0},{&g_1192[0],(void*)0,&g_1192[0],(void*)0,&g_1192[0]}},{{&g_1192[0],&g_1192[0],&g_1192[4],(void*)0,(void*)0},{(void*)0,&g_1192[0],&g_1192[0],(void*)0,&g_1192[0]},{(void*)0,(void*)0,&g_1192[0],&g_1192[0],(void*)0}}};
                const unsigned l_1194[6][8][3] = {{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}},{{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}}};
                int * const *l_1204 = &l_1011;
                int i, j, k;
                (*g_824) |= p_67;
                for (g_215.f2 = 2; (g_215.f2 >= 0); g_215.f2 -= 1)
                {
                    int l_1162 = 1L;
                    short ****l_1163 = &l_860;
                    short *****l_1164 = &l_1163;
                    for (g_578 = 0; (g_578 <= 2); g_578 += 1)
                    {
                        int i, j;
                        --l_1155;
                        if (p_67)
                            continue;
                    }
                    if (((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((+((*l_1058) &= 1UL)), 4)) & l_1162), 0xB6L)) != (&g_856 != ((*l_1164) = l_1163))))
                    {
                        (*g_824) = p_68;
                        if (l_918)
                            goto lbl_1165;
                    }
                    else
                    {
                        short l_1168 = 0L;
                        g_1038.f4 = (safe_lshift_func_uint8_t_u_s(((*g_53) ^ l_1168), (l_870[1] |= (p_67 != l_1168))));
                        return l_1169;
                    }
                }
                for (l_1120 = 0; (l_1120 == 13); l_1120 = safe_add_func_int8_t_s_s(l_1120, 7))
                {
                    int l_1177[9] = {0x9214361BL,0x9214361BL,0x9214361BL,0x9214361BL,0x9214361BL,0x9214361BL,0x9214361BL,0x9214361BL,0x9214361BL};
                    unsigned *l_1195 = &g_829;
                    int i;
                    if ((*g_824))
                    {
                        unsigned short l_1178 = 6UL;
                        short l_1181[3][9] = {{(-1L),9L,0x40C8L,(-1L),0x40C8L,9L,(-1L),0x65FFL,0x65FFL},{(-1L),9L,0x40C8L,(-1L),0x40C8L,9L,(-1L),0x65FFL,0x65FFL},{(-1L),9L,0x40C8L,(-1L),0x40C8L,9L,(-1L),0x65FFL,0x65FFL}};
                        int i, j;
                        --l_1178;
                        (*l_1011) = l_1181[2][8];
                        if ((*g_824))
                            continue;
                    }
                    else
                    {
                        if (p_68)
                            break;
                        (*l_1011) = l_1182;
                    }
                    if (p_68)
                        break;
                    if (((safe_div_func_uint8_t_u_u(((**l_910) &= (safe_mul_func_uint8_t_u_u((((l_1187 == &g_192[6][3][1]) > ((*g_824) ^ (safe_unary_minus_func_int8_t_s(((((l_1191[0][2][4] = &l_1176) != l_1193) <= l_1194[1][0][2]) >= ((l_1195 == l_1195) > ((p_68 <= l_1177[1]) & (*g_55)))))))) ^ p_68), l_1177[2]))), l_1194[4][6][0])) ^ (*g_55)))
                    {
                        unsigned char l_1197 = 2UL;
                        ++l_1197;
                    }
                    else
                    {
                        int *l_1200 = &g_27[1];
                        int **l_1201 = &g_225;
                        unsigned short *l_1211 = (void*)0;
                        unsigned short *l_1212[1];
                        unsigned char *l_1213 = &g_155;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1212[i] = &g_216;
                        (*l_1201) = l_1200;
                        l_1215[0][0][1] &= ((((*l_1195) = (l_1113 == (*l_1200))) > (safe_mod_func_int8_t_s_s(((((*l_1213) = ((*g_53) != ((**l_1204) = ((*l_1058) &= (!((g_460.f2 = (l_1204 == (void*)0)) || (((((*l_910) = (*l_910)) != l_1193) != ((safe_mul_func_uint16_t_u_u((**l_1204), ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(p_68, p_67)), 6L)) == 1L))) || l_1177[1])) != g_724[1][6]))))))) && (*g_55)) && l_1214[1]), 0xDFL))) == 3UL);
                    }
                }
            }
            else
            {
                union U0 **l_1216 = &g_431;
                l_1174 &= (*g_824);
                (*l_1216) = l_825;
            }
        }
    }
    else
    {
        unsigned l_1219 = 0x8BE41950L;
        unsigned l_1222 = 2UL;
        char *l_1223 = &g_56[0][6][0];
        int *l_1230 = (void*)0;
        int *l_1231[4][10][6] = {{{(void*)0,(void*)0,&l_852,&l_870[0],&l_852,&l_870[0]},{&g_212.f4,&g_27[1],(void*)0,&l_870[0],&l_870[0],&l_870[0]},{&l_870[0],&l_852,&g_27[0],(void*)0,&l_870[0],&g_385},{(void*)0,(void*)0,&l_870[0],&g_27[1],&l_870[0],(void*)0},{&g_27[1],&g_27[1],(void*)0,&l_870[0],&g_27[0],&l_870[5]},{&l_870[0],(void*)0,&g_385,(void*)0,&l_852,&g_27[0]},{&g_27[0],(void*)0,&g_385,&l_870[0],&g_27[0],&g_212.f4},{(void*)0,&g_27[1],&l_852,&g_27[1],&l_870[0],&g_27[2]},{&g_385,(void*)0,(void*)0,&l_852,&l_870[0],&g_27[1]},{&l_870[2],&l_852,&l_870[5],&l_852,&l_870[0],&l_870[0]}},{{&g_27[1],&l_870[0],&g_27[0],&l_852,(void*)0,&l_852},{&l_870[0],&g_385,&l_870[0],(void*)0,&g_27[1],&g_27[2]},{&l_870[0],&l_852,&l_870[0],&g_27[0],&g_27[2],(void*)0},{&l_852,&g_27[1],&l_852,&l_870[0],&l_870[0],&l_852},{&l_852,&l_852,&g_27[1],(void*)0,&g_27[1],(void*)0},{&l_852,(void*)0,&l_870[5],&g_385,&g_27[1],&g_27[1]},{&l_870[0],&l_852,&l_870[5],&g_385,&l_852,(void*)0},{&l_852,&g_385,&g_27[1],&l_852,(void*)0,&l_852},{&l_852,(void*)0,&l_852,(void*)0,&g_27[1],(void*)0},{&l_852,(void*)0,&l_870[0],&l_870[5],&l_870[0],&g_27[2]}},{{&l_870[0],&l_870[0],&l_870[0],&l_852,(void*)0,&l_852},{&l_870[0],&l_870[0],&g_27[0],&g_27[1],(void*)0,&l_870[0]},{(void*)0,&l_870[0],(void*)0,(void*)0,&l_870[0],&l_870[2]},{&g_27[1],&g_27[1],&l_852,&g_27[1],&l_870[0],&g_27[1]},{(void*)0,(void*)0,(void*)0,(void*)0,&g_385,(void*)0},{&g_27[1],&l_870[0],&l_852,&l_870[0],(void*)0,&g_27[1]},{&g_27[0],&g_27[2],&g_212.f4,&l_870[0],&g_27[1],&g_27[1]},{&l_870[5],&g_385,&l_870[0],&g_27[1],&g_27[0],(void*)0},{&g_27[2],&g_27[1],&l_852,&l_870[0],&l_870[0],&g_212.f4},{&l_870[0],&l_852,&l_870[0],&g_27[2],&l_852,&g_385}},{{&l_852,&l_870[5],&l_852,(void*)0,(void*)0,&g_27[1]},{&g_27[2],&g_27[0],&l_852,(void*)0,&l_870[4],(void*)0},{&g_385,&g_212.f4,&l_870[5],&g_27[1],&l_852,&g_27[1]},{&g_385,&l_870[0],&g_27[1],&l_852,&l_852,&l_852},{&l_870[0],(void*)0,(void*)0,&l_870[0],&g_27[1],&g_27[0]},{&l_852,&l_852,(void*)0,&l_870[5],&g_385,&g_27[1]},{&g_27[2],&g_27[1],(void*)0,&l_870[0],&g_385,&l_870[0]},{&l_870[0],&l_852,&l_870[4],(void*)0,&g_27[1],&g_27[1]},{(void*)0,(void*)0,&l_870[2],&g_27[1],&l_852,&g_385},{(void*)0,&l_870[0],(void*)0,&g_27[1],&l_852,(void*)0}}};
        unsigned l_1232 = 4294967288UL;
        union U2 * const l_1235 = &g_1236;
        union U2 **l_1237 = &g_214;
        int i, j, k;
        for (g_1030.f1 = 5; (g_1030.f1 <= 5); g_1030.f1 = safe_add_func_uint8_t_u_u(g_1030.f1, 8))
        {
            if (l_1219)
                break;
            if ((safe_rshift_func_uint16_t_u_u(l_1222, (l_1223 != (*l_1109)))))
            {
                unsigned short l_1224 = 0x9624L;
                int l_1225 = 0x50FE6B4BL;
                l_1224 &= 0x49FFD313L;
                l_1225 = l_1224;
            }
            else
            {
                int *l_1228 = &l_870[0];
                short *l_1229 = &l_1214[0];
                (*l_1228) |= (0x97181FF8L == (safe_mul_func_uint16_t_u_u(l_1219, func_135(p_67, &g_27[1]))));
                return &g_54;
            }
        }
        ++l_1232;
        (*l_1237) = l_1235;
    }
    (*g_824) = ((safe_mod_func_uint8_t_u_u(0UL, (safe_sub_func_int8_t_s_s((-8L), func_135((safe_rshift_func_uint8_t_u_u((l_870[0] && ((func_135((safe_mul_func_int16_t_s_s((l_870[0] = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((**g_749), (0x4BB7L || ((*l_1250) |= ((*l_1108) != (*g_709)))))), ((((***l_860) = ((0xA6B8L != (safe_mod_func_uint8_t_u_u((l_852 = (**g_749)), (*g_750)))) || l_1214[0])) || 7L) == 0x88523913L))) || l_852)), p_68)), l_1254) != 0xC0B8FDA9L) < (**g_749))), (*g_750))), l_1254))))) & 4UL);
    (*l_1256) &= (*l_1254);
    return l_1257;
}







static int * func_71(unsigned short * p_72, char * p_73, short * p_74, const int * p_75, short * p_76)
{
    unsigned l_377 = 0x454D6D26L;
    unsigned *l_380 = &g_381;
    unsigned **l_379[5];
    unsigned ***l_378 = &l_379[4];
    unsigned ***l_382 = &l_379[4];
    unsigned ****l_383 = (void*)0;
    unsigned ****l_384 = &l_382;
    int l_395 = 0xFC4EF459L;
    unsigned l_396 = 1UL;
    union U0 *l_430[5][6] = {{&g_192[6][3][1],(void*)0,(void*)0,&g_192[6][3][1],(void*)0,(void*)0},{&g_192[6][3][1],(void*)0,(void*)0,&g_192[6][3][1],(void*)0,(void*)0},{&g_192[6][3][1],(void*)0,(void*)0,&g_192[6][3][1],(void*)0,(void*)0},{&g_192[6][3][1],(void*)0,(void*)0,&g_192[6][3][1],(void*)0,(void*)0},{&g_192[6][3][1],(void*)0,(void*)0,&g_192[6][3][1],(void*)0,(void*)0}};
    union U0 *l_434[1][6];
    int l_439 = (-1L);
    int l_479 = 0x49448662L;
    int l_484 = 1L;
    int l_485 = (-1L);
    int l_486 = 0x2962290EL;
    unsigned l_497 = 0x12B6CED6L;
    char l_549[4];
    int l_551 = 0x87DF9344L;
    int l_553 = (-5L);
    int l_554 = 0x0F3496EFL;
    int l_555 = 0xBD59CBC7L;
    unsigned l_556 = 0x299E5AF0L;
    unsigned char *l_585 = &g_155;
    unsigned char **l_584 = &l_585;
    short *l_677[1];
    short **l_676[4][8] = {{&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0]},{&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],(void*)0,&l_677[0],&l_677[0]},{&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],(void*)0,&l_677[0],&l_677[0]},{&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0],&l_677[0]}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_379[i] = &l_380;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_434[i][j] = (void*)0;
    }
    for (i = 0; i < 4; i++)
        l_549[i] = (-7L);
    for (i = 0; i < 1; i++)
        l_677[i] = &g_577;
    if (((l_377 |= (*p_75)) <= (((*g_55) = (l_378 == ((*l_384) = l_382))) <= g_385)))
    {
        unsigned short l_386 = 1UL;
        int l_394 = 0x4D57EA80L;
        int *l_435 = &g_27[0];
        int l_464 = 0xA395E772L;
        int l_465 = (-1L);
        int l_467 = (-1L);
        int l_474 = (-8L);
        int l_476[3][6] = {{(-1L),(-1L),0x0BAADC14L,0x28A39EBDL,7L,0x28A39EBDL},{0L,(-1L),0L,1L,0x0BAADC14L,0x0BAADC14L},{0x85CD7077L,0L,0L,0x85CD7077L,(-1L),0x28A39EBDL}};
        unsigned char l_511 = 0x10L;
        const union U0 *l_518 = &g_192[6][3][1];
        const union U0 **l_517 = &l_518;
        int l_664 = 0x56C78814L;
        int i, j;
        if (l_386)
        {
            int *l_389 = &g_385;
            int l_403 = 0xD28C68B4L;
            int l_406[8] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            unsigned char l_514 = 1UL;
            char l_552 = 1L;
            int l_595 = 0x1FE29242L;
            const unsigned short *l_622 = (void*)0;
            int i;
            if (((*l_389) ^= (safe_mul_func_int8_t_s_s(0xA5L, 0x67L))))
            {
                unsigned l_390 = 4294967295UL;
                int *l_393[2][6] = {{&g_215.f4,&g_215.f4,&g_215.f4,&g_215.f4,&g_215.f4,&g_215.f4},{&g_215.f4,&g_215.f4,&g_215.f4,&g_215.f4,&g_215.f4,&g_215.f4}};
                union U0 **l_432 = (void*)0;
                union U0 **l_433[8] = {&g_431,&g_431,&g_431,&g_431,&g_431,&g_431,&g_431,&g_431};
                int l_482 = 8L;
                int l_496 = 0xE531A491L;
                unsigned char l_521 = 0xD4L;
                int i, j;
                l_390++;
                l_396++;
lbl_419:
                for (g_155 = 0; (g_155 < 60); g_155 = safe_add_func_int16_t_s_s(g_155, 9))
                {
                    int l_401 = 1L;
                    unsigned char *l_402 = &g_192[6][3][1].f0;
                    int l_404 = 0x85AF06F7L;
                    int l_405 = 0L;
                    int l_407 = 0x5540FB4FL;
                    int l_408 = 0x4414B9A0L;
                    int l_409 = (-9L);
                    int l_410 = 1L;
                    if (((0x750595D7L || ((***l_378) = (l_396 && (*g_55)))) & ((*l_402) |= l_401)))
                    {
                        unsigned l_411 = 0xAC4C70C9L;
                        l_411--;
                    }
                    else
                    {
                        const int **l_414 = &g_257;
                        (*l_414) = &g_258;
                        if (g_258)
                            goto lbl_419;
                    }
                    for (g_216 = 1; (g_216 <= 50); g_216++)
                    {
                        const int **l_417 = &g_257;
                        union U2 **l_418 = &g_214;
                        (*l_417) = &g_258;
                        (*l_418) = g_214;
                    }
                }
                if (func_135(((safe_lshift_func_int8_t_s_s(((safe_div_func_int32_t_s_s((l_395 = (*l_389)), ((g_215.f0 && 0x2EL) ^ ((safe_rshift_func_int8_t_s_s((((*l_389) < (safe_mul_func_uint16_t_u_u((l_394 = 0xC374L), ((l_430[2][5] != (l_434[0][0] = g_431)) > ((func_135((*p_76), l_435) != (*p_75)) < l_377))))) && (*l_389)), 5)) != (*l_389))))) == (*l_389)), 7)) <= g_381), &l_406[3]))
                {
                    int l_438 = 0xC9AF7551L;
                    unsigned char *l_442 = &g_155;
                    int *l_450 = &l_406[1];
                    short l_463 = 1L;
                    int l_466 = 1L;
                    int l_469 = 0x3F2B5B59L;
                    int l_470 = 0L;
                    int l_472 = 0L;
                    int l_473 = 0x81C32E04L;
                    int l_477 = (-1L);
                    int l_480[6];
                    int l_481 = 1L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_480[i] = 0x33C8AF55L;
                    (*l_389) &= (((l_377 | (safe_lshift_func_int16_t_s_s(l_438, (l_439 >= (&g_385 != &g_385))))) >= (l_393[0][5] != &g_381)) >= (--(*p_72)));
                    (*l_435) |= ((-1L) && (((((*p_76) = (*g_53)) | (l_396 != (*l_389))) && ((*l_442) = 0xC2L)) ^ (l_377 | (&l_386 != &g_58))));
                    if ((*g_257))
                    {
                        unsigned l_449 = 0x0E1E7DF5L;
                        union U2 *l_459 = &g_460;
                        int l_468 = 0xA767A013L;
                        int l_471 = 1L;
                        int l_475 = (-5L);
                        int l_478 = 0x27EDFE20L;
                        int l_483 = 0L;
                        int l_487 = 0x51377743L;
                        int l_488 = 0x96E29B2FL;
                        unsigned short l_489 = 0xDDB5L;
                        (*l_389) |= ((*l_450) = (safe_sub_func_int32_t_s_s(((*g_53) < ((p_73 != l_442) ^ (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0x30FDL, 0xCA10L)), 1UL)))), (func_135(l_449, l_450) | g_215.f1))));
                        (*l_450) = ((safe_add_func_int16_t_s_s((*l_450), (*l_450))) != (((*p_74) = ((safe_rshift_func_uint16_t_u_u(((*l_435) != ((1UL ^ ((*l_450) && (g_460.f2 = (safe_mul_func_uint16_t_u_u(((*p_72) &= (safe_rshift_func_uint8_t_u_s((*l_450), ((void*)0 != l_459)))), (safe_rshift_func_int16_t_s_s((*l_435), l_463))))))) & 3L)), (*l_450))) != (*l_450))) | (*g_53)));
                        --l_489;
                    }
                    else
                    {
                        unsigned char l_492 = 0xE8L;
                        int l_495[2][1][2] = {{{0x29850814L,0x29850814L}},{{0x29850814L,0x29850814L}}};
                        int i, j, k;
                        l_492--;
                        if (g_258)
                            goto lbl_500;
lbl_500:
                        l_497--;
                        g_431 = (void*)0;
                    }
                    return &g_27[2];
                }
                else
                {
                    int l_503 = 0xE9786E2EL;
                    int l_508 = 0x2D7C13ACL;
                    int l_509 = 0x1A6F8D14L;
                    int l_510[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_510[i] = 0x1650615EL;
                    for (g_212.f2 = 0; (g_212.f2 <= 2); g_212.f2 += 1)
                    {
                        char l_501[1][7];
                        int l_502 = (-1L);
                        int l_504 = 0x28A6DAABL;
                        int l_505 = 0xF0EAC689L;
                        int l_506 = 0x72B639BFL;
                        int l_507 = 1L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_501[i][j] = 0x44L;
                        }
                        --l_511;
                        (*l_389) &= func_135((*g_53), &g_27[1]);
                        (*l_435) = l_514;
                        (*l_389) |= ((func_135((*p_76), &l_403) && l_377) >= (*p_74));
                    }
                    (*l_389) = (l_479 |= (safe_sub_func_uint8_t_u_u((&g_431 != l_517), ((safe_unary_minus_func_int32_t_s((*g_257))) >= 0x108B7903L))));
                    (*l_389) |= (*g_257);
                    if ((safe_unary_minus_func_uint32_t_u(l_484)))
                    {
                        (*l_389) &= 4L;
                        (*l_389) = func_135((*g_53), &g_27[1]);
                    }
                    else
                    {
                        int l_524 = 1L;
                        l_521 = ((*l_389) |= (&p_73 == &g_34));
                        l_395 ^= (+func_135(((*p_73) ^ (+(safe_mod_func_uint32_t_u_u(l_524, (*l_389))))), &g_27[1]));
                        l_510[3] |= (0UL > ((((safe_rshift_func_int8_t_s_u((*p_73), (safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u((l_503 ^ ((g_460.f0 < ((safe_rshift_func_int16_t_s_u((*g_53), 0)) && (-4L))) && (safe_lshift_func_int16_t_s_u((!0x8CE5L), (*p_72))))), ((*p_73) <= (*g_55)))))))) ^ (*l_435)) != (-3L)) <= 0xD52749F5L));
                    }
                }
            }
            else
            {
                for (l_439 = (-20); (l_439 != 24); l_439 = safe_add_func_uint8_t_u_u(l_439, 7))
                {
                    char l_540 = 0x5CL;
                    for (l_377 = 3; (l_377 != 24); l_377 = safe_add_func_uint8_t_u_u(l_377, 3))
                    {
                        const int **l_541 = &g_257;
                        (*l_389) = l_540;
                        (*l_541) = (void*)0;
                        (*l_389) |= ((l_540 ^ 4294967287UL) == (&g_58 != (void*)0));
                    }
                }
            }
            for (g_385 = 1; (g_385 >= 0); g_385 -= 1)
            {
                return &g_27[0];
            }
            for (g_251 = 28; (g_251 > 2); g_251 = safe_sub_func_uint8_t_u_u(g_251, 7))
            {
                int *l_546 = &l_464;
                int *l_547 = &l_465;
                int *l_548[4][4][2] = {{{&l_476[2][3],&l_484},{(void*)0,&l_484},{&l_476[2][3],(void*)0},{&l_467,&l_467}},{{&l_467,(void*)0},{&l_476[2][3],&l_484},{(void*)0,&l_484},{&l_476[2][3],(void*)0}},{{&l_467,&l_467},{&l_467,(void*)0},{&l_476[2][3],&l_484},{(void*)0,&l_484}},{{&l_476[2][3],(void*)0},{&l_467,&l_467},{&l_467,(void*)0},{&l_476[2][3],&l_484}}};
                int l_550[9];
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_550[i] = 0x9804E4EFL;
                l_556--;
                for (g_212.f2 = (-3); (g_212.f2 < (-25)); --g_212.f2)
                {
                    unsigned char l_575 = 0x8DL;
                    unsigned char *l_576 = &g_192[6][3][1].f0;
                    unsigned short *l_596 = (void*)0;
                    int l_597 = 0xD1BC8F73L;
                    int l_598 = 0xB690B7C2L;
                    (**l_384) = (*l_382);
                }
            }
            (*l_389) = ((((((*g_55) <= 0x8FL) | (((*l_435) | ((*g_53) | (-10L))) < g_212.f0)) || (safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, 2)), l_484)), (safe_add_func_int32_t_s_s((((*l_584) = &g_155) == &g_155), 0x3715DBC7L)))), (*p_74)))) == (-1L)) && (*l_389));
        }
        else
        {
            unsigned *****l_623 = &l_384;
            int l_624 = (-1L);
            int *l_646 = &g_385;
            int *l_647 = &g_215.f4;
            int *l_648 = &g_27[1];
            int *l_649 = &l_486;
            int *l_650 = (void*)0;
            int *l_651 = &l_467;
            int *l_652 = &l_474;
            int *l_653 = &l_553;
            int *l_654 = &l_484;
            int *l_655 = &l_553;
            int *l_656 = (void*)0;
            int *l_657 = &g_212.f4;
            int *l_658 = &l_465;
            int *l_659 = &l_474;
            int *l_660 = (void*)0;
            int *l_661 = (void*)0;
            int *l_662[10][1][1];
            int l_663[4][4] = {{0x354F340AL,0x354F340AL,0x354F340AL,0x354F340AL},{0x354F340AL,0x354F340AL,0x354F340AL,0x354F340AL},{0x354F340AL,0x354F340AL,0x354F340AL,0x354F340AL},{0x354F340AL,0x354F340AL,0x354F340AL,0x354F340AL}};
            int i, j, k;
            for (i = 0; i < 10; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_662[i][j][k] = (void*)0;
                }
            }
lbl_627:
            l_624 = (&l_378 != ((*l_623) = &l_378));
            for (g_381 = 19; (g_381 < 59); ++g_381)
            {
                if ((*p_75))
                    break;
                if (g_212.f0)
                    goto lbl_627;
                g_257 = &l_624;
                for (g_215.f2 = (-13); (g_215.f2 < 21); g_215.f2 = safe_add_func_int8_t_s_s(g_215.f2, 3))
                {
                    char *l_638 = &l_549[2];
                    const int l_645 = 1L;
                    l_554 = ((safe_sub_func_uint8_t_u_u(0xE4L, g_258)) > (~(safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((*l_638) &= (safe_mul_func_int16_t_s_s(func_135((*p_76), &g_27[1]), (*g_53)))) >= (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(l_624, (safe_rshift_func_uint16_t_u_u(l_645, ((*p_72) = ((l_624 & (*g_257)) <= 5UL)))))), 1UL))), (*p_75))), (*g_53)))));
                }
            }
            ++g_665;
        }
    }
    else
    {
        unsigned short l_672 = 0xFD99L;
        short **l_674 = (void*)0;
        int l_703 = 0xB3457D71L;
        const unsigned ***l_759[10] = {&g_758,(void*)0,&g_758,&g_758,(void*)0,&g_758,&g_758,(void*)0,&g_758,&g_758};
        int l_764 = 1L;
        int l_768 = 0x913E3E0CL;
        int l_770 = 0x1C247BEEL;
        int i;
lbl_713:
        l_551 ^= ((*p_75) && 0xCA17FC1FL);
        for (g_251 = 0; (g_251 < 27); g_251++)
        {
            int l_673 = 3L;
            short ***l_675[7] = {&l_674,&l_674,&l_674,&l_674,&l_674,&l_674,&l_674};
            int **l_704 = &g_225;
            int l_708 = 1L;
            int *l_711 = &l_485;
            unsigned l_751 = 0x3CB8830EL;
            int i;
            if ((*g_257))
                break;
            if ((safe_mul_func_int16_t_s_s((l_395 <= ((l_672 > l_673) < ((l_676[0][7] = l_674) != &p_74))), (*g_53))))
            {
                unsigned l_680 = 4294967295UL;
                unsigned short *l_695 = &g_216;
                int l_696 = 0x591B0FF0L;
                int l_697 = 0xAF6F2565L;
                l_697 ^= (safe_add_func_int16_t_s_s(func_135(l_680, &g_27[0]), (safe_div_func_int16_t_s_s((*p_76), (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((g_665 = l_672) || l_672), (safe_sub_func_uint32_t_u_u((((+((0x70F0F700L < ((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((*l_695) = ((*p_72)--)), (l_696 |= l_485))), (l_672 == 0x07L))) <= (*p_75))) <= l_673)) < (*p_75)) <= l_673), l_680)))), 0x4884L))))));
            }
            else
            {
                int *l_698 = &g_212.f4;
                g_27[1] &= ((-2L) & (~l_672));
                for (l_479 = 0; (l_479 <= (-9)); l_479--)
                {
                    const unsigned l_701 = 0x2EE4BB06L;
                    int *l_702[4][3] = {{&l_554,&l_554,&l_554},{&l_479,&l_439,&l_484},{&l_479,&l_479,&l_439},{&l_554,&l_439,&l_439}};
                    int i, j;
                    l_703 = ((*l_698) = (((((*g_257) ^ ((!(l_701 | 255UL)) & ((*g_53) < (*p_72)))) && (*p_75)) & (*g_55)) < 1L));
                }
            }
            if ((l_703 != (*p_75)))
            {
                int *l_707 = &l_485;
                int l_722 = (-4L);
                int l_723 = 1L;
                unsigned l_734 = 4294967291UL;
                (*l_707) |= (safe_mul_func_int16_t_s_s((*g_53), (*p_72)));
                if ((*g_257))
                {
                    int *l_712 = &l_554;
                    (*l_707) |= (l_708 >= (g_709 == &g_710[0]));
                    return &g_27[2];
                }
                else
                {
                    const int *l_714 = &l_554;
                    int l_716 = 0L;
                    int l_719 = 0xCDFFB605L;
                    int l_720 = (-4L);
                    int l_721[4][2][7] = {{{0xFE936E99L,0xEB56F922L,0x03B29F65L,(-5L),0x2FB027F9L,0xC3EAE05CL,0L},{0x50A4F623L,0x733CCE1CL,(-5L),(-5L),(-5L),(-1L),0xBD5C3A9AL}},{{0x2FB027F9L,7L,6L,0xC3EAE05CL,0x03B29F65L,0x85CE5C20L,0x6A4F6701L},{0x271FFE0FL,0xBD5C3A9AL,(-1L),(-5L),(-5L),(-1L),0xBD5C3A9AL}},{{0x2FB027F9L,7L,6L,0xC3EAE05CL,0x03B29F65L,0x85CE5C20L,0x6A4F6701L},{0x271FFE0FL,0xBD5C3A9AL,(-1L),(-5L),(-5L),(-1L),0xBD5C3A9AL}},{{0x2FB027F9L,7L,6L,0xC3EAE05CL,0x03B29F65L,0x85CE5C20L,0x6A4F6701L},{0x271FFE0FL,0xBD5C3A9AL,(-1L),(-5L),(-5L),(-1L),0xBD5C3A9AL}}};
                    int i, j, k;
                    for (l_672 = 0; (l_672 <= 0); l_672 += 1)
                    {
                        const int **l_715 = &l_714;
                        int *l_717 = &g_27[1];
                        int *l_718[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_718[i] = &g_460.f4;
                        if (g_385)
                            goto lbl_713;
                        (*l_715) = l_714;
                        g_724[1][6]++;
                    }
                    if ((safe_rshift_func_int16_t_s_u(0x153BL, 1)))
                    {
                        if (g_460.f0)
                            goto lbl_713;
                    }
                    else
                    {
                        int *l_729 = &l_395;
                        int *l_730 = &l_553;
                        int *l_731 = &l_721[2][1][4];
                        int *l_732 = &l_484;
                        int *l_733[4][7];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 7; j++)
                                l_733[i][j] = &g_27[1];
                        }
                        (*l_707) = (~(-1L));
                        if ((*l_714))
                            continue;
                        l_734++;
                        (*l_729) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((+1UL), (((safe_mul_func_int8_t_s_s(((*g_55) = func_135((*g_53), (l_707 = &g_27[1]))), (safe_mod_func_uint16_t_u_u(((*p_72) = ((safe_sub_func_uint16_t_u_u(l_734, ((g_665 ^ (g_215.f0 || ((((l_703 >= (safe_add_func_uint32_t_u_u(((void*)0 == g_749), (-1L)))) ^ l_703) || g_251) && (**g_749)))) >= 0xF6A2L))) == 0xD7789B96L)), l_486)))) < 1UL) || (*l_731)))), l_751));
                    }
                }
                (*l_711) &= 0x8B91D640L;
            }
            else
            {
                unsigned char l_752 = 252UL;
                (*l_711) = 8L;
                (*l_711) = l_752;
            }
        }
        for (l_703 = 0; (l_703 > (-9)); l_703 = safe_sub_func_int8_t_s_s(l_703, 4))
        {
            int *l_763 = &l_555;
            int l_766 = 0xE3125815L;
            int l_767 = 1L;
            int l_769 = 0L;
            unsigned short l_791 = 65532UL;
            int **l_816 = &l_763;
            (*l_763) &= (safe_div_func_int32_t_s_s(l_549[2], func_135(((l_759[1] = g_757[2][1]) == ((*l_384) = g_760)), &g_27[1])));
            if (((*p_75) && (*l_763)))
            {
                unsigned char l_771 = 0xADL;
                for (g_460.f1 = 0; (g_460.f1 >= 0); g_460.f1 -= 1)
                {
                    int *l_765[4][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_703,(void*)0,&l_703,(void*)0,&l_703,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_703,(void*)0,&l_703,(void*)0,&l_703,(void*)0}};
                    int **l_774 = &g_225;
                    int i, j;
                    l_771++;
                    (*l_774) = &l_485;
                    (**l_774) &= (safe_mul_func_int8_t_s_s(((*g_55) = func_135(((l_553 = l_377) == (((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((*g_53), (*p_74))), 6)) && 0UL) || (safe_mod_func_int8_t_s_s(l_768, (**g_749))))), &g_27[2])), 249UL));
                    (**l_384) = (void*)0;
                    for (l_768 = 0; (l_768 <= 4); l_768 += 1)
                    {
                        int l_787 = 3L;
                        (*g_225) &= (func_135((*p_76), &l_555) != 0xA27AL);
                        (*l_763) = (safe_mod_func_int16_t_s_s((*g_53), (safe_lshift_func_uint16_t_u_u((l_787 <= (safe_rshift_func_uint8_t_u_u((+l_555), 3))), (((safe_unary_minus_func_uint32_t_u((l_791 <= (*p_75)))) >= l_787) != l_771)))));
                    }
                }
            }
            else
            {
                int l_800 = 0x99228BCAL;
                int l_801 = 0x7EDA25A8L;
                int *l_813[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_813[i] = &g_385;
                l_766 = (safe_add_func_int16_t_s_s((g_212.f1 = (*p_74)), (safe_sub_func_int16_t_s_s((((*l_763) = (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_135((*g_53), (g_225 = &l_555)), (l_800 || l_801))), 12))) | l_703), (safe_rshift_func_uint8_t_u_u(((**g_749) = (*g_750)), 6))))));
                for (l_479 = 0; (l_479 <= (-8)); l_479 = safe_sub_func_uint32_t_u_u(l_479, 2))
                {
                    union U2 **l_806 = &g_214;
                    int **l_807[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_807[i] = &g_225;
                    (*l_806) = g_214;
                    g_225 = &g_27[0];
                    l_439 &= (((safe_div_func_uint32_t_u_u(4294967293UL, l_800)) != ((*l_763) = ((safe_unary_minus_func_int16_t_s(func_135((!(*p_74)), &g_27[2]))) != ((safe_lshift_func_int16_t_s_u((g_578 = (*g_53)), 7)) != l_768)))) != 0UL);
                }
            }
            (*l_816) = &g_27[0];
            if ((*g_257))
                break;
        }
    }
    return &g_27[1];
}







static char * func_77(short p_78, const int p_79, const unsigned short * p_80)
{
    int l_98 = 1L;
    int l_99 = (-7L);
    int l_101 = (-1L);
    int l_107 = (-1L);
    int l_108 = 7L;
    unsigned l_109 = 4UL;
    int l_115[6][5][6] = {{{(-8L),0xB530338EL,0xB530338EL,(-8L),0xAF0014B0L,1L},{0xB530338EL,0x0AB71361L,(-6L),0x0432F2B5L,3L,(-1L)},{4L,0xAC05FCAFL,0x1C4DE7E0L,1L,3L,0x92B028A4L},{0x92B028A4L,0x0AB71361L,0xBB7B1AC9L,2L,0xAF0014B0L,1L},{1L,9L,0x476A2755L,0xAF0014B0L,4L,0xAF0014B0L}},{{0x0432F2B5L,0x92B028A4L,0x0432F2B5L,(-3L),0L,0x0AB71361L},{0xBB7B1AC9L,0x1C4DE7E0L,4L,9L,0x457360C0L,0x476A2755L},{0x0AB71361L,0xAC05FCAFL,3L,9L,(-8L),(-3L)},{0xBB7B1AC9L,(-6L),0xB530338EL,(-3L),0xAC05FCAFL,(-1L)},{0x0432F2B5L,1L,0x2FB4D153L,0xAF0014B0L,0xAF0014B0L,0x2FB4D153L}},{{(-3L),(-3L),(-7L),0x1C4DE7E0L,0x0AB71361L,1L},{(-8L),0x2FB4D153L,0L,0L,0x476A2755L,(-7L)},{0xC3E2E3E2L,(-8L),0L,0x31ADEC5AL,(-3L),1L},{9L,0x31ADEC5AL,(-7L),0L,(-1L),0x2FB4D153L},{0L,(-1L),0x2FB4D153L,1L,0x2FB4D153L,(-1L)}},{{0x457360C0L,0L,0xB530338EL,4L,1L,(-3L)},{1L,0xC3E2E3E2L,3L,(-6L),(-7L),0x476A2755L},{0xAF0014B0L,0xC3E2E3E2L,4L,0xBB7B1AC9L,1L,0x0AB71361L},{1L,0L,0x0432F2B5L,1L,0x2FB4D153L,0xAF0014B0L},{0xAC05FCAFL,(-1L),0x476A2755L,0x476A2755L,(-1L),0xAC05FCAFL}},{{0x2FB4D153L,(-6L),9L,(-5L),3L,0x476A2755L},{1L,0x476A2755L,0xC3E2E3E2L,(-8L),0L,0x31ADEC5AL},{1L,0xAC05FCAFL,(-8L),(-5L),(-1L),0x0AB71361L},{0x2FB4D153L,3L,(-3L),0L,2L,1L},{0xBB7B1AC9L,0xC3E2E3E2L,0x0432F2B5L,0xC3E2E3E2L,0xBB7B1AC9L,0x1C4DE7E0L}},{{9L,0x92B028A4L,0xBB7B1AC9L,0xB530338EL,0x476A2755L,(-5L)},{2L,0xBB7B1AC9L,0x0AB71361L,0x92B028A4L,0x31ADEC5AL,(-5L)},{0xC3E2E3E2L,4L,0xBB7B1AC9L,1L,0x0AB71361L,0x1C4DE7E0L},{0x31ADEC5AL,0x73044D68L,0x0432F2B5L,9L,1L,1L},{(-7L),(-3L),(-3L),(-7L),0x1C4DE7E0L,0x0AB71361L}}};
    unsigned l_117[1];
    unsigned short l_127 = 0x221DL;
    int *l_195 = &g_27[1];
    union U2 *l_211 = &g_212;
    short l_273 = 0xE7E7L;
    unsigned short l_274[6];
    char **l_338 = &g_55;
    int *l_371[2][9] = {{&l_101,&l_107,&l_101,&l_107,&l_101,&l_107,&l_101,&l_107,&l_101},{&g_212.f4,&g_212.f4,&g_212.f4,&g_212.f4,&g_212.f4,&g_212.f4,&g_212.f4,&g_212.f4,&g_212.f4}};
    unsigned l_372 = 4294967287UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_117[i] = 4294967289UL;
    for (i = 0; i < 6; i++)
        l_274[i] = 65531UL;
    for (g_58 = (-24); (g_58 == 45); ++g_58)
    {
        int *l_90 = &g_27[1];
        int *l_91 = (void*)0;
        int *l_92 = &g_27[2];
        int *l_93 = (void*)0;
        int *l_94 = &g_27[1];
        int *l_95 = (void*)0;
        int *l_96 = &g_27[2];
        int *l_97 = &g_27[1];
        int *l_100 = &g_27[0];
        int *l_102 = &l_101;
        int *l_103[5];
        unsigned char l_104 = 1UL;
        int i;
        for (i = 0; i < 5; i++)
            l_103[i] = &l_98;
        ++l_104;
        l_109++;
    }
    for (l_99 = 0; (l_99 < 16); l_99 = safe_add_func_uint32_t_u_u(l_99, 5))
    {
        int *l_114[7][5][6] = {{{(void*)0,&l_107,&l_101,&l_107,(void*)0,&g_27[1]},{(void*)0,&l_98,(void*)0,(void*)0,&l_108,&g_27[1]},{&l_101,&g_27[1],&g_27[0],&l_98,(void*)0,&g_27[1]},{&g_27[1],(void*)0,&l_107,&l_107,(void*)0,(void*)0},{(void*)0,&l_99,&l_99,(void*)0,&g_27[1],(void*)0}},{{&l_107,&l_107,(void*)0,&g_27[1],&l_101,&g_27[1]},{&l_101,&l_98,(void*)0,&l_99,&l_101,&l_107},{&l_98,&l_107,&l_101,&g_27[0],&g_27[1],&g_27[0]},{(void*)0,&l_99,(void*)0,&l_98,(void*)0,&l_101},{&l_101,(void*)0,&g_27[1],(void*)0,(void*)0,&l_107}},{{(void*)0,(void*)0,&l_98,(void*)0,&l_107,&l_98},{&l_101,&l_101,&g_27[1],&l_98,&l_98,&g_27[1]},{(void*)0,(void*)0,(void*)0,&g_27[0],&l_107,(void*)0},{&l_98,&g_27[1],&l_107,&l_99,(void*)0,(void*)0},{&l_101,&l_98,&l_107,&g_27[1],(void*)0,(void*)0}},{{&l_107,&g_27[1],(void*)0,(void*)0,(void*)0,&g_27[1]},{(void*)0,(void*)0,&g_27[1],&l_107,&l_108,&l_98},{&g_27[1],&l_107,&l_98,&l_101,&l_99,&l_107},{&l_99,&l_107,&g_27[1],&l_98,&l_108,&l_98},{&l_107,&g_27[0],&g_27[1],&g_27[1],&g_27[0],&l_107}},{{&l_107,&l_101,(void*)0,&l_98,&g_27[1],&l_107},{&l_108,(void*)0,&l_107,(void*)0,&l_101,(void*)0},{&l_108,(void*)0,(void*)0,&l_98,(void*)0,&l_101},{&l_107,&g_27[1],&l_98,&g_27[1],&l_107,&l_107},{&l_107,(void*)0,&g_27[1],(void*)0,(void*)0,&l_99}},{{&l_98,&l_107,(void*)0,(void*)0,&g_27[1],&l_99},{&l_101,(void*)0,&g_27[1],&l_107,&l_107,&l_107},{&g_27[1],&l_98,&l_98,&g_27[1],&l_101,&l_101},{&l_107,&g_27[1],(void*)0,&l_101,&l_98,(void*)0},{(void*)0,(void*)0,&l_107,&l_98,&l_98,&l_107}},{{(void*)0,&g_27[1],(void*)0,&l_107,&l_101,&l_107},{&g_27[1],&l_98,&g_27[1],&l_107,&l_107,&l_98},{&l_98,(void*)0,(void*)0,&l_108,&g_27[1],&g_27[1]},{(void*)0,&l_107,(void*)0,&l_108,(void*)0,&l_107},{&l_98,(void*)0,&l_101,&l_107,(void*)0,&l_99}}};
        int l_116 = 0x9B1403B7L;
        int i, j, k;
        l_117[0]--;
        for (l_108 = 8; (l_108 == 7); --l_108)
        {
            unsigned l_122[7][9][4] = {{{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL}},{{4294967295UL,4294967295UL,0x80E9A89EL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,0x80E9A89EL,0x80E9A89EL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0x80E9A89EL,0x80E9A89EL,4294967295UL},{0x80E9A89EL,4294967295UL,0x80E9A89EL,0x80E9A89EL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0x80E9A89EL,0x80E9A89EL,4294967295UL},{0x80E9A89EL,4294967295UL,0x80E9A89EL,0x80E9A89EL}},{{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0x80E9A89EL,0x80E9A89EL,4294967295UL},{0x80E9A89EL,4294967295UL,0x80E9A89EL,0x80E9A89EL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0x80E9A89EL,0x80E9A89EL,4294967295UL},{0x80E9A89EL,4294967295UL,0x80E9A89EL,0x80E9A89EL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,0x80E9A89EL,0x80E9A89EL,4294967295UL},{0x80E9A89EL,4294967295UL,0x80E9A89EL,0x80E9A89EL}}};
            int l_125 = 0x95A3B436L;
            int l_126[10] = {0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L,0xECA5C750L};
            unsigned l_130[10][1] = {{0x070FD17AL},{1UL},{0x070FD17AL},{0x070FD17AL},{1UL},{0x070FD17AL},{0x070FD17AL},{1UL},{0x070FD17AL},{0x070FD17AL}};
            int i, j, k;
            l_122[3][7][3]++;
            --l_127;
            l_130[2][0]--;
        }
    }
    for (l_107 = 10; (l_107 == 19); l_107 = safe_add_func_int16_t_s_s(l_107, 6))
    {
        unsigned *l_140 = &l_117[0];
        const int l_141[3][9][8] = {{{0x1CB995FCL,0xACBE982EL,0x6EC0BB68L,0xA2B3F61FL,0x8896DFC1L,1L,0x8896DFC1L,0xA2B3F61FL},{7L,0x8896DFC1L,7L,(-1L),(-2L),0xB74E30DEL,1L,4L},{9L,0x9ECE6E98L,0x3894EB69L,0x6EC0BB68L,1L,7L,(-2L),(-3L)},{9L,0L,0xF9F128CBL,0x3894EB69L,(-2L),(-1L),0L,0x9ECE6E98L},{4L,0x921C0D93L,0x9ECE6E98L,0xACBE982EL,0x5EB302BCL,(-7L),0xA2B3F61FL,0xA2B3F61FL},{0x921C0D93L,0x33A58972L,0x3DB49376L,0x3DB49376L,0x33A58972L,0x921C0D93L,(-1L),0xA16B741FL},{0xACBE982EL,(-1L),0xB74E30DEL,0x921C0D93L,0x6EC0BB68L,(-8L),1L,0xACBE982EL},{(-1L),0xA2B3F61FL,(-1L),0x921C0D93L,9L,7L,0x9ECE6E98L,0xA16B741FL},{0L,9L,0xA2B3F61FL,0x3DB49376L,(-2L),0x0E36697BL,(-1L),0xA2B3F61FL}},{{1L,0x9ECE6E98L,(-2L),0xACBE982EL,0x7890D70BL,0xACBE982EL,(-2L),0x9ECE6E98L},{0x9ECE6E98L,0x1CB995FCL,0x3DB49376L,0x3894EB69L,(-1L),0xF9F128CBL,0x1CB995FCL,(-3L)},{4L,(-1L),1L,0x6EC0BB68L,0x9ECE6E98L,(-7L),0x1CB995FCL,4L},{(-1L),0x6EC0BB68L,0x3DB49376L,0xF9F128CBL,7L,(-1L),(-2L),0xA16B741FL},{7L,(-1L),(-2L),0xA16B741FL,0x0E36697BL,0x5EB302BCL,0x5EB302BCL,0x0E36697BL},{0x6EC0BB68L,(-1L),(-1L),0x6EC0BB68L,0xA16B741FL,(-2L),(-1L),7L},{(-1L),0xA16B741FL,(-8L),1L,0xB409C0A5L,1L,(-3L),(-8L)},{0x921C0D93L,0xA16B741FL,0xC3BF266BL,0x0E36697BL,0L,(-2L),0xB409C0A5L,0x921C0D93L},{(-1L),(-1L),1L,1L,0x7890D70BL,0x5EB302BCL,(-1L),(-7L)}},{{1L,0x33A58972L,(-1L),0xB74E30DEL,(-1L),0x33A58972L,1L,(-1L)},{0x6EC0BB68L,0x0E36697BL,9L,0x9ECE6E98L,0x3894EB69L,0x6EC0BB68L,1L,7L},{0x0E36697BL,5L,0x8896DFC1L,0xACBE982EL,0x3894EB69L,9L,(-3L),0xB74E30DEL},{0x6EC0BB68L,0x3DB49376L,0xF9F128CBL,7L,(-1L),(-2L),0xA16B741FL,0x6EC0BB68L},{1L,(-1L),(-8L),9L,0x7890D70BL,0x7890D70BL,9L,(-8L)},{(-1L),(-1L),1L,0xB74E30DEL,0L,(-1L),0x7890D70BL,(-1L)},{0x921C0D93L,(-1L),9L,0xC3BF266BL,0xB409C0A5L,0x9ECE6E98L,(-1L),(-1L)},{(-1L),5L,(-7L),1L,1L,4L,7L,0x33A58972L},{(-1L),(-1L),0x3894EB69L,0xB74E30DEL,(-8L),(-1L),9L,(-1L)}}};
        unsigned short *l_150 = &l_127;
        int l_153[9][6][4] = {{{6L,0x2B993DDFL,0xE164FB72L,0x1D2F55BAL},{0xEF0E0318L,0xBF2B0EC6L,0x3CC0CA2BL,0xC07765BBL},{0xFCBA1A65L,7L,(-1L),0xC07765BBL},{0xA879EB5DL,0xBF2B0EC6L,(-1L),0x1D2F55BAL},{(-2L),0x2B993DDFL,0L,0xA3BFE583L},{(-1L),0x54E6A2DAL,0xA879EB5DL,0x3778AA8BL}},{{7L,0xC07765BBL,0xCEAFF0F1L,0xC016A648L},{0x293935BCL,(-1L),0x9A8AC3DAL,1L},{(-1L),0xC016A648L,0xA18F7810L,0x46290215L},{0x2DF23361L,0L,(-1L),0L},{1L,0xEF0E0318L,1L,0xFCBA1A65L},{0xFCBA1A65L,0xE164FB72L,0xC016A648L,0x2B993DDFL}},{{0xE164FB72L,0L,0xE164FB72L,0xF230F887L},{(-1L),(-1L),7L,1L},{0xA3BFE583L,6L,0xF230F887L,(-1L)},{0L,0xC07765BBL,0xF230F887L,0xCEAFF0F1L},{0xA3BFE583L,(-10L),7L,0xA3BFE583L},{(-1L),0L,0xE164FB72L,0xBF2B0EC6L}},{{0xE164FB72L,0xBF2B0EC6L,0xC016A648L,7L},{0xFCBA1A65L,0x293935BCL,1L,0xC07765BBL},{1L,0x1D2F55BAL,1L,(-1L)},{1L,0x2DF23361L,0xC1AD6298L,1L},{0L,0xCEAFF0F1L,0L,0xE164FB72L},{0xC016A648L,(-7L),0x4F5D4FD2L,0L}},{{0x3CC0CA2BL,(-1L),0xBE842449L,0xBE842449L},{0L,0L,0x293935BCL,0x54E6A2DAL},{6L,0xC1AD6298L,1L,0x2DF23361L},{0xBE842449L,0xA18F7810L,0x9A8AC3DAL,1L},{0x62A4A423L,0xA18F7810L,0x2B993DDFL,0x2DF23361L},{0xA18F7810L,0xC1AD6298L,0L,0x54E6A2DAL}},{{1L,0L,0xBF95D60CL,0xBE842449L},{0xF230F887L,(-1L),(-10L),0L},{0x2DF23361L,(-7L),7L,0xE164FB72L},{1L,0xCEAFF0F1L,0xBF95D60CL,1L},{(-1L),0x2DF23361L,0L,(-1L)},{0xA18F7810L,0x0304A45FL,0xE6A9968EL,0x1D2F55BAL}},{{1L,0xC016A648L,0x9A8AC3DAL,(-7L)},{0x80EDB35DL,(-1L),0xA3BFE583L,(-1L)},{6L,2L,0xC1AD6298L,0xF230F887L},{0xE6A9968EL,0xCEAFF0F1L,0xBE842449L,0x4F5D4FD2L},{0xC016A648L,0x1D2F55BAL,0xEF0E0318L,0L},{0xC016A648L,1L,0xBE842449L,0x80EDB35DL}},{{0xE6A9968EL,0L,0xC1AD6298L,7L},{6L,7L,0xA3BFE583L,0x2DF23361L},{0x80EDB35DL,0xBE842449L,0xBF95D60CL,0L},{0xE6A9968EL,0x80EDB35DL,0x0304A45FL,1L},{0x80EDB35DL,7L,0L,6L},{0x54E6A2DAL,0x0304A45FL,1L,0xE164FB72L}},{{2L,0x54E6A2DAL,1L,0x0304A45FL},{0x62A4A423L,7L,(-1L),0xA879EB5DL},{0x2DF23361L,1L,1L,0x2DF23361L},{7L,0x62A4A423L,0xBE842449L,0x3CC0CA2BL},{0x80EDB35DL,0xC016A648L,0xFCBA1A65L,7L},{0L,(-7L),0xBF95D60CL,7L}}};
        unsigned char *l_154[7];
        int l_156 = (-1L);
        int *l_162 = &l_115[0][4][0];
        int l_184 = 0L;
        int l_186 = 1L;
        unsigned l_208 = 9UL;
        char l_272 = 1L;
        unsigned char l_318 = 0xE9L;
        unsigned l_335 = 0x5363E0BCL;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_154[i] = &g_155;
        (*l_162) = func_135((((*l_140) = (safe_mul_func_int16_t_s_s(0x2992L, (*g_53)))) != (l_141[0][5][2] <= (0x4D16L < ((l_156 |= (safe_mul_func_uint8_t_u_u(p_78, (~(((*p_80) != (safe_sub_func_uint8_t_u_u((((l_153[0][3][2] &= (safe_rshift_func_uint8_t_u_u(l_108, (safe_mul_func_uint16_t_u_u(((*l_150) |= (*p_80)), (((((g_27[1] = ((safe_add_func_uint8_t_u_u(l_141[0][5][2], l_141[0][5][2])) | g_27[2])) == g_54) ^ 0xD8L) || (*p_80)) < p_78)))))) | 0x21L) || (*p_80)), p_78))) > l_141[1][8][7]))))) || g_58)))), l_140);
        if ((*l_162))
            break;
        for (l_99 = 0; (l_99 >= 0); l_99 -= 1)
        {
            const short **l_163 = (void*)0;
            const short **l_164 = &g_53;
            short *l_165 = &g_54;
            int l_174 = 3L;
            int l_185[3];
            union U0 *l_193[7][3] = {{&g_192[0][4][1],&g_192[1][0][1],&g_192[0][4][1]},{&g_192[6][3][1],&g_192[2][0][1],&g_192[6][3][1]},{&g_192[0][4][1],&g_192[1][0][1],&g_192[0][4][1]},{&g_192[6][3][1],&g_192[2][0][1],&g_192[6][3][1]},{&g_192[0][4][1],&g_192[1][0][1],&g_192[0][4][1]},{&g_192[6][3][1],&g_192[2][0][1],&g_192[6][3][1]},{&g_192[0][4][1],&g_192[1][0][1],&g_192[0][4][1]}};
            int *l_198 = &l_184;
            unsigned char l_237 = 1UL;
            int *l_259 = &l_108;
            int *l_260 = &l_153[3][4][3];
            int *l_261 = &l_174;
            int *l_262 = &l_115[2][1][3];
            int *l_263 = &l_153[6][5][0];
            int *l_264 = &l_174;
            int *l_265 = &l_185[2];
            int *l_266 = &g_215.f4;
            int *l_267 = &l_185[2];
            int *l_268 = (void*)0;
            int *l_269 = (void*)0;
            int *l_270 = &l_153[0][3][2];
            int *l_271[1][5][5] = {{{&l_108,&l_153[0][3][2],&g_27[1],&l_98,&l_98},{&g_27[1],&l_153[0][3][2],&l_108,&l_108,&l_153[0][3][2]},{&l_156,&l_115[0][4][0],&l_98,&l_153[0][3][2],&l_98},{&l_115[0][4][0],&l_108,&l_98,&l_101,&l_98},{&l_98,&l_98,&l_108,&l_156,&g_27[1]}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_185[i] = 0xF9E045A7L;
        }
        for (p_78 = 19; (p_78 <= 27); p_78++)
        {
            short l_281 = (-1L);
            int l_309 = 0x02F0CA72L;
            int l_310 = 0xCC26548FL;
            int l_311 = 0xC723A1F3L;
            char *l_319 = &g_56[4][1][0];
            int l_330[3];
            unsigned char l_363 = 0x3DL;
            int i;
            for (i = 0; i < 3; i++)
                l_330[i] = (-6L);
            for (g_215.f1 = 27; (g_215.f1 <= (-11)); g_215.f1--)
            {
                unsigned short *l_286 = &l_274[5];
                short *l_287 = &l_273;
                int l_288 = 1L;
                short *l_289 = &g_212.f2;
                int l_312[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                unsigned l_313 = 4294967292UL;
                int **l_320 = &g_225;
                int i;
                if (((*l_162) = (~(l_281 == ((*l_289) |= (l_288 = ((*l_287) |= (safe_lshift_func_uint16_t_u_u(((*l_286) = ((*l_150)++)), 9)))))))))
                {
                    char *l_298 = &g_251;
                    if ((func_135((safe_lshift_func_int16_t_s_u((&l_273 != &g_54), 6)), &g_27[1]) != ((*l_298) = (g_215.f0 >= (safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((p_78 || g_212.f1) | ((0x54EE130CL > p_79) | (*l_162))), g_258)) == l_288), (*p_80)))))))
                    {
                        int *l_299[5][3][9] = {{{&l_107,&l_107,&l_153[7][1][1],&l_107,(void*)0,&l_107,&l_153[7][1][1],&l_107,(void*)0},{(void*)0,&l_107,(void*)0,(void*)0,&l_153[7][5][1],&l_99,&l_153[7][5][1],(void*)0,(void*)0},{&l_153[7][5][1],&l_153[7][5][1],(void*)0,&l_101,&l_107,(void*)0,(void*)0,(void*)0,&l_107}},{{(void*)0,&l_153[7][5][1],&l_153[7][5][1],(void*)0,&l_101,&l_107,(void*)0,(void*)0,(void*)0},{(void*)0,&l_107,(void*)0,(void*)0,&l_107,(void*)0,(void*)0,&l_153[7][5][1],&l_99},{&l_153[7][1][1],&l_107,(void*)0,&l_101,&l_101,(void*)0,&l_107,&l_153[7][1][1],&l_107}},{{&l_99,(void*)0,&l_153[7][1][1],(void*)0,&l_107,&l_107,(void*)0,&l_153[7][1][1],(void*)0},{&l_101,&l_153[7][1][1],&l_99,&l_107,&l_153[7][5][1],(void*)0,(void*)0,&l_153[7][5][1],&l_107},{&l_101,&l_98,&l_101,(void*)0,(void*)0,&l_99,(void*)0,(void*)0,&l_99}},{{&l_99,&l_153[7][1][1],&l_101,&l_153[7][1][1],&l_99,&l_107,&l_153[7][5][1],(void*)0,(void*)0},{&l_153[7][1][1],(void*)0,&l_99,(void*)0,&l_99,(void*)0,&l_107,(void*)0,&l_101},{(void*)0,&l_101,&l_107,(void*)0,(void*)0,(void*)0,&l_107,&l_101,(void*)0}},{{&l_153[7][1][1],(void*)0,(void*)0,(void*)0,&l_98,&l_107,&l_98,(void*)0,(void*)0},{&l_98,&l_98,&l_153[7][1][1],&l_153[7][5][1],&l_101,(void*)0,(void*)0,(void*)0,&l_101},{&l_153[7][1][1],&l_98,&l_98,&l_153[7][1][1],&l_153[7][5][1],&l_101,(void*)0,(void*)0,(void*)0}}};
                        unsigned short l_300 = 0x6180L;
                        int i, j, k;
                        if (p_79)
                            break;
                        --l_300;
                    }
                    else
                    {
                        if ((*g_257))
                            break;
                    }
                }
                else
                {
                    int l_308[6][5][8] = {{{4L,(-1L),(-1L),4L,0x16101AD0L,0x51CAB3DBL,4L,0x51CAB3DBL},{4L,0x10F8ABEDL,0L,0x10F8ABEDL,4L,0L,(-2L),(-2L)},{0x51CAB3DBL,0x10F8ABEDL,0x16101AD0L,0x16101AD0L,0x10F8ABEDL,0x51CAB3DBL,(-1L),0x10F8ABEDL},{(-2L),(-1L),0x16101AD0L,(-2L),0x16101AD0L,(-1L),(-2L),0x51CAB3DBL},{0x10F8ABEDL,4L,0L,(-2L),(-2L),0L,4L,0x10F8ABEDL}},{{0x51CAB3DBL,(-2L),(-1L),0x16101AD0L,(-2L),0x16101AD0L,(-1L),(-2L)},{0x10F8ABEDL,(-1L),0x51CAB3DBL,0x10F8ABEDL,0x16101AD0L,0x16101AD0L,0x10F8ABEDL,0x51CAB3DBL},{(-1L),(-1L),4L,0x16101AD0L,0x51CAB3DBL,4L,0x51CAB3DBL,0x16101AD0L},{0L,0x16101AD0L,0L,4L,0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L},{0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L,4L,0L,0x16101AD0L,0L}},{{0x16101AD0L,0x51CAB3DBL,4L,0x51CAB3DBL,0x16101AD0L,4L,(-1L),(-1L)},{0L,0x51CAB3DBL,4L,4L,0x51CAB3DBL,0L,0x04BBAE1BL,0x51CAB3DBL},{(-1L),0x04BBAE1BL,4L,(-1L),4L,0x04BBAE1BL,(-1L),0L},{0x51CAB3DBL,0x16101AD0L,4L,(-1L),(-1L),4L,0x16101AD0L,0x51CAB3DBL},{0L,(-1L),0x04BBAE1BL,4L,(-1L),4L,0x04BBAE1BL,(-1L)}},{{0x51CAB3DBL,0x04BBAE1BL,0L,0x51CAB3DBL,4L,4L,0x51CAB3DBL,0L},{(-1L),(-1L),4L,0x16101AD0L,0x51CAB3DBL,4L,0x51CAB3DBL,0x16101AD0L},{0L,0x16101AD0L,0L,4L,0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L},{0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L,4L,0L,0x16101AD0L,0L},{(-1L),0x16101AD0L,(-2L),0x16101AD0L,(-1L),(-2L),0x51CAB3DBL,0x51CAB3DBL}},{{4L,0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L,4L,0L,0x16101AD0L},{0x51CAB3DBL,0L,0x04BBAE1BL,0x51CAB3DBL,0x04BBAE1BL,0L,0x51CAB3DBL,4L},{0x16101AD0L,(-1L),(-2L),0x51CAB3DBL,0x51CAB3DBL,(-2L),(-1L),0x16101AD0L},{4L,0x51CAB3DBL,0L,0x04BBAE1BL,0x51CAB3DBL,0x04BBAE1BL,0L,0x51CAB3DBL},{0x16101AD0L,0L,4L,0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L,4L}},{{0x51CAB3DBL,0x51CAB3DBL,(-2L),(-1L),0x16101AD0L,(-2L),0x16101AD0L,(-1L)},{4L,(-1L),4L,0x04BBAE1BL,(-1L),0L,0L,(-1L)},{(-1L),0L,0L,(-1L),0x04BBAE1BL,4L,(-1L),4L},{(-1L),0x16101AD0L,(-2L),0x16101AD0L,(-1L),(-2L),0x51CAB3DBL,0x51CAB3DBL},{4L,0x16101AD0L,0x04BBAE1BL,0x04BBAE1BL,0x16101AD0L,4L,0L,0x16101AD0L}}};
                    int i, j, k;
                    for (l_273 = (-29); (l_273 != (-28)); l_273 = safe_add_func_uint8_t_u_u(l_273, 5))
                    {
                        int *l_305 = &l_107;
                        int **l_306 = &l_305;
                        int *l_307[8][6][5] = {{{&l_99,&l_153[5][5][0],(void*)0,&l_108,&l_153[5][5][0]},{(void*)0,&l_288,(void*)0,&l_156,&l_115[0][3][0]},{&l_184,(void*)0,&l_101,&l_184,&l_153[5][5][0]},{&g_27[1],(void*)0,&l_115[3][1][2],&l_156,&l_115[3][1][2]},{&l_153[5][5][0],&l_153[5][5][0],&l_108,(void*)0,&l_153[5][5][0]},{&l_156,&l_156,&l_156,(void*)0,&l_115[0][3][0]}},{{&l_153[5][5][0],&l_101,&l_101,&l_153[5][5][0],&l_184},{&g_27[1],&l_156,&l_115[3][1][2],&l_156,&g_27[1]},{&l_184,&l_153[5][5][0],&l_101,&l_101,&l_153[5][5][0]},{&l_115[0][3][0],(void*)0,&l_156,&l_156,&l_156},{&l_153[5][5][0],(void*)0,&l_108,&l_153[5][5][0],&l_153[5][5][0]},{&l_115[3][1][2],&l_156,&l_115[3][1][2],(void*)0,&g_27[1]}},{{&l_153[5][5][0],&l_184,&l_101,(void*)0,&l_184},{&l_115[0][3][0],&l_156,(void*)0,&l_156,&l_115[0][3][0]},{&l_184,(void*)0,&l_101,&l_184,&l_153[5][5][0]},{&g_27[1],(void*)0,&l_115[3][1][2],&l_156,&l_115[3][1][2]},{&l_153[5][5][0],&l_153[5][5][0],&l_108,(void*)0,&l_153[5][5][0]},{&l_156,&l_156,&l_156,(void*)0,&l_115[0][3][0]}},{{&l_153[5][5][0],&l_101,&l_101,&l_153[5][5][0],&l_184},{&g_27[1],&l_156,&l_115[3][1][2],&l_156,&g_27[1]},{&l_184,&l_153[5][5][0],&l_101,&l_101,&l_153[5][5][0]},{&l_115[0][3][0],(void*)0,&l_156,&l_156,&l_156},{&l_153[5][5][0],(void*)0,&l_108,&l_153[5][5][0],&l_153[5][5][0]},{&l_115[3][1][2],&l_156,&l_115[3][1][2],(void*)0,&g_27[1]}},{{&l_153[5][5][0],&l_184,&l_101,(void*)0,&l_184},{&l_115[0][3][0],&l_156,(void*)0,&l_156,&l_115[0][3][0]},{&l_184,(void*)0,&l_101,&l_184,&l_153[5][5][0]},{&g_27[1],(void*)0,&l_115[3][1][2],&l_156,&l_115[3][1][2]},{&l_153[5][5][0],&l_153[5][5][0],&l_108,(void*)0,&l_153[5][5][0]},{&l_156,&l_156,&l_156,(void*)0,&l_115[0][3][0]}},{{&l_153[5][5][0],&l_101,&l_101,&l_153[5][5][0],&l_184},{&g_27[1],&l_156,&l_115[3][1][2],&l_156,&g_27[1]},{&l_184,&l_153[5][5][0],&l_101,&l_101,&l_153[5][5][0]},{&l_115[0][3][0],(void*)0,&l_156,&l_156,&l_156},{&l_153[5][5][0],(void*)0,&l_108,&l_153[5][5][0],&l_153[5][5][0]},{&l_115[3][1][2],&l_156,&l_115[3][1][2],(void*)0,&g_27[1]}},{{&l_153[5][5][0],&l_184,&l_101,(void*)0,&l_184},{&l_115[0][3][0],&l_156,(void*)0,&l_156,&l_115[0][3][0]},{&l_184,(void*)0,&l_101,&l_184,&l_153[5][5][0]},{&g_27[1],(void*)0,&l_115[3][1][2],(void*)0,&l_115[3][1][2]},{&l_184,&l_184,(void*)0,&l_101,&l_184},{(void*)0,(void*)0,(void*)0,&l_288,&l_156}},{{&l_184,&l_108,&l_108,&l_184,&l_99},{&l_115[3][1][2],(void*)0,&g_27[1],(void*)0,&l_115[3][1][2]},{&l_99,&l_184,&l_108,&l_108,&l_184},{&l_156,&l_288,(void*)0,(void*)0,(void*)0},{&l_184,&l_101,(void*)0,&l_184,&l_184},{&l_115[3][1][2],(void*)0,&l_115[3][1][2],&l_288,&l_115[3][1][2]}}};
                        int i, j, k;
                        (*l_195) ^= (-1L);
                        (*l_306) = l_305;
                        --l_313;
                        (*l_195) = (g_212.f1 != ((*l_195) < l_312[1]));
                    }
                    for (l_208 = (-21); (l_208 == 49); l_208++)
                    {
                        if (l_318)
                            break;
                        (*l_195) ^= l_313;
                    }
                    return l_319;
                }
                (*l_320) = &l_99;
            }
            if (g_321)
                continue;
            for (l_99 = 4; (l_99 > (-19)); l_99 = safe_sub_func_uint8_t_u_u(l_99, 2))
            {
                int l_328 = (-1L);
                int l_329 = (-1L);
                int l_331 = (-1L);
                int l_332 = (-2L);
                int l_333[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                union U0 *l_355 = &g_192[6][3][1];
                int *l_370[3][8][6] = {{{&l_330[0],(void*)0,&l_311,&l_311,&l_310,&l_156},{&l_156,&l_108,&l_184,&l_309,(void*)0,&l_310},{(void*)0,&l_107,&l_311,&l_99,&l_309,&l_330[1]},{&l_309,&l_330[1],&l_309,(void*)0,&l_309,&l_153[4][0][1]},{&l_310,&l_107,&l_108,(void*)0,&l_310,&l_330[2]},{&l_107,&l_329,&l_107,&l_311,(void*)0,(void*)0},{&l_153[0][3][2],(void*)0,(void*)0,&l_153[0][3][2],&l_309,(void*)0},{&l_153[0][3][2],&l_107,&l_330[0],(void*)0,&l_330[1],&l_311}},{{&l_309,&l_107,(void*)0,&l_329,(void*)0,&l_309},{&l_311,&l_153[4][0][1],&l_311,&l_153[0][3][2],&l_330[1],&l_310},{&l_153[0][3][2],(void*)0,(void*)0,&l_310,&l_98,&l_309},{&l_311,(void*)0,&l_330[1],(void*)0,&l_108,&l_156},{&l_153[4][0][1],&l_330[1],&l_310,&l_184,&l_310,&l_101},{&l_153[0][3][2],(void*)0,&l_107,&l_156,&l_330[0],&l_107},{(void*)0,&l_156,(void*)0,&l_108,&l_101,&l_329},{&l_310,&l_153[0][3][2],&l_330[0],&l_310,(void*)0,&l_310}},{{&l_98,&l_101,&l_98,&l_331,&l_107,(void*)0},{(void*)0,(void*)0,&l_309,&l_156,&l_330[2],&l_184},{&l_330[1],&l_309,&l_310,&l_156,&l_311,&l_331},{(void*)0,(void*)0,(void*)0,&l_331,&l_156,&l_330[1]},{&l_98,&l_153[0][3][2],&l_309,&l_310,&l_153[4][0][1],&l_309},{&l_310,&l_309,&l_156,&l_108,(void*)0,&l_330[0]},{(void*)0,(void*)0,&l_153[0][3][2],&l_156,(void*)0,&l_309},{&l_153[0][3][2],&l_108,&l_108,&l_184,&l_153[0][3][2],&l_101}}};
                int i, j, k;
                for (l_272 = 0; (l_272 < 2); ++l_272)
                {
                    int *l_326 = &l_115[0][4][0];
                    int *l_327[8][2][2] = {{{&l_309,&l_309},{&l_115[0][4][0],&l_309}},{{&l_309,&l_115[0][4][0]},{&l_309,&l_309}},{{&l_115[0][4][0],&l_309},{&l_309,&l_115[0][4][0]}},{{&l_309,&l_309},{&l_115[0][4][0],&l_309}},{{&l_309,&l_115[0][4][0]},{&l_309,&l_309}},{{&l_115[0][4][0],&l_309},{&l_309,&l_115[0][4][0]}},{{&l_309,&l_309},{&l_115[0][4][0],&l_309}},{{&l_309,&l_115[0][4][0]},{&l_309,&l_309}}};
                    short l_334 = 0xEE18L;
                    int i, j, k;
                    if (p_78)
                        break;
                    l_335++;
                }
            }
        }
    }
    l_372--;
    return (*l_338);
}







static int func_135(short p_136, int * p_137)
{
    for (g_155 = 0; (g_155 <= 36); g_155 = safe_add_func_uint8_t_u_u(g_155, 8))
    {
        const unsigned l_161 = 0xEC72AD0EL;
        (*p_137) ^= (safe_lshift_func_uint8_t_u_s((l_161 ^ 0x8C9FC60AL), ((*g_55) = p_136)));
        if (g_56[5][7][2])
            break;
    }
    return g_56[3][6][2];
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
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_5[i][j][k], "g_5[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_27[i], "g_27[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_56[i][j][k], "g_56[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_192[i][j][k].f0, "g_192[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_212.f0, "g_212.f0", print_hash_value);
    transparent_crc(g_212.f1, "g_212.f1", print_hash_value);
    transparent_crc(g_212.f2, "g_212.f2", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_215.f2, "g_215.f2", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_460.f0, "g_460.f0", print_hash_value);
    transparent_crc(g_460.f1, "g_460.f1", print_hash_value);
    transparent_crc(g_460.f2, "g_460.f2", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_724[i][j], "g_724[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_1030.f0, "g_1030.f0", print_hash_value);
    transparent_crc(g_1030.f1, "g_1030.f1", print_hash_value);
    transparent_crc(g_1030.f2, "g_1030.f2", print_hash_value);
    transparent_crc(g_1038.f0, "g_1038.f0", print_hash_value);
    transparent_crc(g_1038.f1, "g_1038.f1", print_hash_value);
    transparent_crc(g_1038.f2, "g_1038.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1121[i][j], "g_1121[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1192[i], "g_1192[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1236.f0, "g_1236.f0", print_hash_value);
    transparent_crc(g_1236.f1, "g_1236.f1", print_hash_value);
    transparent_crc(g_1236.f2, "g_1236.f2", print_hash_value);
    transparent_crc(g_1389, "g_1389", print_hash_value);
    transparent_crc(g_1394.f0, "g_1394.f0", print_hash_value);
    transparent_crc(g_1394.f1, "g_1394.f1", print_hash_value);
    transparent_crc(g_1394.f2, "g_1394.f2", print_hash_value);
    transparent_crc(g_1403, "g_1403", print_hash_value);
    transparent_crc(g_1426.f0, "g_1426.f0", print_hash_value);
    transparent_crc(g_1426.f1, "g_1426.f1", print_hash_value);
    transparent_crc(g_1426.f2, "g_1426.f2", print_hash_value);
    transparent_crc(g_1429.f0, "g_1429.f0", print_hash_value);
    transparent_crc(g_1429.f1, "g_1429.f1", print_hash_value);
    transparent_crc(g_1429.f2, "g_1429.f2", print_hash_value);
    transparent_crc(g_1510.f0, "g_1510.f0", print_hash_value);
    transparent_crc(g_1510.f1, "g_1510.f1", print_hash_value);
    transparent_crc(g_1510.f2, "g_1510.f2", print_hash_value);
    transparent_crc(g_1514.f0, "g_1514.f0", print_hash_value);
    transparent_crc(g_1514.f1, "g_1514.f1", print_hash_value);
    transparent_crc(g_1514.f2, "g_1514.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1714[i], "g_1714[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1719, "g_1719", print_hash_value);
    transparent_crc(g_1780, "g_1780", print_hash_value);
    transparent_crc(g_1793, "g_1793", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
