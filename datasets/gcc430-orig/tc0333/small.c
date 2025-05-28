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



static unsigned g_7[5] = {1UL,1UL,1UL,1UL,1UL};
static unsigned g_8 = 1UL;
static unsigned g_20[2][9] = {{0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L},{0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L,0x0F3F8502L}};
static unsigned g_38 = 4294967293UL;
static int g_44 = 0x655505F4L;
static int * volatile g_43 = &g_44;
static int g_91 = 0xB22F2C88L;
static short g_96 = (-2L);
static int * volatile g_97 = &g_91;
static unsigned char g_134 = 0x38L;
static int *g_140[5] = {&g_44,&g_44,&g_44,&g_44,&g_44};
static int ** volatile g_139 = &g_140[3];
static int ** volatile g_141 = &g_140[3];
static const int *g_148 = &g_44;
static const int ** volatile g_147[1][2][5] = {{{&g_148,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,&g_148,&g_148,&g_148}}};
static const int ** volatile g_149 = (void*)0;
static const int ** volatile g_151 = (void*)0;
static int ** volatile g_154 = &g_140[3];
static char g_164 = 0L;
static unsigned short g_198 = 1UL;
static short g_207 = (-1L);
static int ** volatile g_220 = &g_140[3];
static const int ** volatile g_231 = (void*)0;
static const int ** volatile g_232[3][5] = {{&g_148,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,&g_148,&g_148,&g_148}};
static unsigned *g_235 = (void*)0;
static unsigned * const *g_234 = &g_235;
static unsigned short g_239[6][8] = {{1UL,0xDA49L,0UL,65529UL,0x47FEL,65534UL,1UL,0xA7F2L},{65529UL,0UL,0x39CDL,0UL,1UL,1UL,1UL,1UL},{65534UL,0UL,0UL,65534UL,0x39CDL,0x47FEL,65535UL,65526UL},{0x39CDL,0x47FEL,65535UL,65526UL,0x3009L,0xB115L,1UL,0UL},{0x051AL,0x47FEL,9UL,0x5918L,9UL,0x47FEL,0x051AL,65529UL},{0xDA49L,0UL,65529UL,0x47FEL,65534UL,1UL,0xA7F2L,0xE02AL}};
static int ** volatile g_265 = (void*)0;
static unsigned char g_272 = 1UL;
static volatile unsigned short g_289 = 0x48FBL;
static volatile unsigned short *g_288[1] = {&g_289};
static volatile unsigned short * volatile *g_287 = &g_288[0];
static int * volatile g_297 = (void*)0;
static volatile char ** volatile g_299 = (void*)0;
static int * volatile g_301 = &g_91;
static int ** volatile g_308 = &g_140[3];
static int * volatile g_311 = &g_91;
static unsigned short g_318 = 65526UL;
static int * volatile g_325[3] = {(void*)0,(void*)0,(void*)0};
static const unsigned g_350[1][7] = {{0x2C723471L,0x2C723471L,0x2C723471L,0x2C723471L,0x2C723471L,0x2C723471L,0x2C723471L}};
static unsigned ** const *g_363 = (void*)0;
static char g_368 = 0x8FL;
static unsigned *g_371 = (void*)0;
static int ** volatile g_374 = &g_140[1];
static volatile unsigned char g_400 = 1UL;
static unsigned char *g_417[10][9][2] = {{{&g_134,&g_272},{&g_134,(void*)0},{&g_272,&g_134},{&g_134,&g_272},{(void*)0,&g_134},{&g_134,&g_134},{&g_134,&g_272},{&g_272,&g_272},{(void*)0,&g_134}},{{&g_272,&g_134},{&g_134,&g_272},{(void*)0,(void*)0},{(void*)0,&g_272},{&g_134,&g_272},{(void*)0,&g_272},{&g_272,&g_134},{(void*)0,&g_272},{&g_134,&g_134}},{{&g_134,(void*)0},{&g_134,&g_134},{&g_272,&g_272},{&g_272,&g_272},{&g_134,(void*)0},{&g_134,&g_272},{&g_272,&g_272},{&g_272,&g_134},{&g_134,(void*)0}},{{&g_134,&g_134},{&g_134,&g_272},{(void*)0,&g_134},{&g_272,&g_272},{&g_272,(void*)0},{&g_272,&g_134},{&g_134,&g_134},{&g_272,(void*)0},{(void*)0,(void*)0}},{{&g_272,(void*)0},{&g_272,&g_272},{&g_134,(void*)0},{&g_134,&g_272},{&g_272,&g_134},{(void*)0,&g_134},{&g_272,&g_134},{(void*)0,&g_272},{&g_134,&g_134}},{{&g_272,&g_134},{&g_272,&g_272},{(void*)0,(void*)0},{&g_134,(void*)0},{&g_272,(void*)0},{&g_134,(void*)0},{(void*)0,&g_272},{&g_272,&g_134},{&g_272,&g_134}},{{&g_134,&g_272},{(void*)0,&g_134},{&g_272,&g_134},{(void*)0,&g_134},{&g_272,&g_272},{&g_134,(void*)0},{&g_134,&g_272},{&g_272,(void*)0},{&g_272,&g_134}},{{&g_272,&g_272},{&g_134,&g_272},{(void*)0,&g_134},{&g_272,&g_272},{(void*)0,&g_272},{(void*)0,&g_134},{&g_134,(void*)0},{&g_272,&g_272},{&g_272,&g_134}},{{&g_272,&g_134},{(void*)0,&g_134},{&g_272,(void*)0},{&g_272,(void*)0},{&g_272,(void*)0},{&g_272,&g_134},{(void*)0,&g_134},{&g_272,&g_134},{&g_272,&g_272}},{{&g_272,(void*)0},{&g_134,&g_134},{(void*)0,&g_272},{(void*)0,&g_272},{&g_272,&g_134},{(void*)0,&g_272},{&g_134,&g_272},{&g_272,&g_134},{&g_272,&g_134}}};
static unsigned char **g_416 = &g_417[5][6][0];
static int * volatile * const volatile g_421 = &g_297;
static const unsigned g_426 = 0xC8AC68DBL;
static int ** volatile g_440 = &g_140[3];
static int ** volatile g_462 = (void*)0;
static int *g_464 = (void*)0;
static int ** volatile g_463 = &g_464;
static unsigned g_492 = 4294967295UL;
static int g_504 = (-1L);
static int ** volatile g_505[3][5][2] = {{{&g_140[3],&g_140[1]},{&g_140[3],&g_140[3]},{&g_140[3],&g_140[1]},{&g_140[3],&g_140[3]},{&g_140[3],&g_140[1]}},{{&g_140[3],&g_140[3]},{&g_140[3],&g_140[1]},{&g_140[3],&g_140[3]},{&g_140[3],&g_140[1]},{&g_140[3],&g_140[3]}},{{&g_140[3],&g_140[1]},{&g_140[3],&g_140[3]},{&g_140[3],&g_140[1]},{&g_140[3],&g_140[3]},{&g_140[3],&g_140[1]}}};
static int ** volatile g_506 = &g_140[3];
static unsigned g_597 = 4294967290UL;
static int g_608 = 0x09736EBBL;
static unsigned g_610 = 4294967287UL;
static short *g_643[5] = {&g_96,&g_96,&g_96,&g_96,&g_96};
static int ** volatile g_661 = &g_464;
static int ** const volatile g_663[7] = {&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3]};
static int ** volatile g_665 = &g_140[3];
static int g_719 = 6L;
static unsigned * volatile * volatile * volatile g_732 = (void*)0;
static unsigned * volatile * volatile * volatile *g_731 = &g_732;
static unsigned * volatile * volatile * volatile ** volatile g_730 = &g_731;
static const unsigned *g_737[10] = {&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1],&g_350[0][1]};
static const unsigned **g_736 = &g_737[5];
static const unsigned ***g_735 = &g_736;
static const unsigned ****g_734 = &g_735;
static const unsigned *****g_733 = &g_734;
static unsigned short *g_746[10] = {&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2],&g_239[0][2]};
static unsigned short **g_745 = &g_746[8];
static int ** volatile g_771 = &g_464;
static int ** volatile g_808[9] = {&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_464};
static int ** const volatile g_809 = &g_140[4];
static int ** volatile g_874 = &g_140[3];
static int *g_886[2][10] = {{&g_719,&g_719,&g_719,&g_719,&g_719,(void*)0,(void*)0,&g_719,&g_719,&g_719},{&g_719,&g_719,&g_719,&g_719,&g_719,&g_719,&g_719,&g_719,&g_719,&g_719}};
static volatile char g_902 = 0x93L;
static volatile char *g_901 = &g_902;
static volatile char **g_900 = &g_901;
static int * volatile * volatile g_915 = &g_140[3];
static int * volatile g_926 = &g_504;
static int * volatile g_935 = (void*)0;
static int * volatile g_936 = &g_91;
static const int ** volatile g_940 = &g_148;
static int * volatile g_950 = (void*)0;
static int ** volatile g_983 = &g_140[3];
static int g_994 = (-9L);
static int ** volatile g_996 = &g_464;
static int ** volatile g_1010 = &g_140[3];
static int ** volatile g_1012[4][3] = {{&g_140[3],&g_140[3],&g_140[3]},{&g_464,&g_464,&g_464},{&g_140[3],&g_140[3],&g_140[3]},{&g_464,&g_464,&g_464}};
static short *g_1030 = &g_207;
static unsigned char g_1032[10] = {251UL,0x7CL,0xEAL,0xEAL,0x7CL,251UL,0x7CL,0xEAL,0xEAL,0x7CL};
static int ** volatile g_1039 = &g_140[3];
static int ** volatile g_1056 = &g_464;
static int ** volatile g_1071 = &g_140[1];
static int ** volatile g_1087[9] = {&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3],&g_140[3]};
static int ** const volatile g_1088 = &g_140[3];
static int * volatile g_1091 = &g_44;
static volatile short g_1102 = 0x33CAL;
static volatile short *g_1101 = &g_1102;
static volatile short **g_1100 = &g_1101;
static volatile short *** volatile g_1099 = &g_1100;
static unsigned g_1184 = 0x41B19371L;
static int ** volatile g_1205 = &g_140[3];
static int * volatile g_1224 = (void*)0;
static const unsigned char g_1266 = 8UL;
static const unsigned char *g_1265 = &g_1266;
static const unsigned char **g_1264 = &g_1265;
static int g_1284 = 0x12C17D3CL;
static int ** volatile g_1290 = (void*)0;
static unsigned short g_1292[10] = {0x43F8L,0x43F8L,0x43F8L,0x43F8L,0x43F8L,0x43F8L,0x43F8L,0x43F8L,0x43F8L,0x43F8L};
static char *g_1347 = &g_164;
static char **g_1346[4] = {&g_1347,&g_1347,&g_1347,&g_1347};
static int ** volatile g_1369 = &g_140[3];
static int ** volatile g_1373 = &g_464;
static int ** volatile g_1376 = &g_140[3];
static int ** volatile g_1397 = (void*)0;



static int func_1(void);
static const int func_2(short p_3, const char p_4);
static unsigned char func_13(unsigned short p_14);
static unsigned func_15(unsigned short p_16, unsigned p_17, int p_18, unsigned char p_19);
static unsigned char func_25(unsigned short p_26, const unsigned p_27, unsigned p_28, char p_29, const unsigned short p_30);
static int func_31(int p_32, int p_33, unsigned p_34);
static unsigned func_41(unsigned char p_42);
static int * func_47(const int p_48, char p_49, int * p_50, int p_51, int * p_52);
static unsigned char func_56(unsigned * p_57, int * const p_58, unsigned char p_59, unsigned char p_60, unsigned char p_61);
static unsigned * func_62(char p_63, const unsigned * p_64, int * p_65, unsigned short p_66);
static int func_1(void)
{
    unsigned char l_9 = 0xC9L;
    short l_10[6][4][7] = {{{(-1L),0x145BL,0L,0L,0x13B2L,(-1L),(-1L)},{0x5610L,0x5950L,1L,(-1L),0x38F5L,2L,0x72B2L},{0x72B2L,0xDEF9L,8L,0x5BD5L,0xE6BBL,0x5C82L,(-9L)},{(-1L),0xDEF9L,(-1L),0x3531L,1L,0x6FD5L,5L}},{{0x938FL,0x5950L,(-1L),0x4A41L,0x4868L,0xD976L,(-1L)},{(-1L),0x145BL,0x4811L,1L,0xD44CL,(-1L),(-3L)},{0x4811L,0x2045L,5L,2L,0xAC8EL,2L,5L},{0x6B3BL,0x6B3BL,0x744EL,0x4868L,1L,0x13B2L,0L}},{{0x145BL,0x80F8L,(-1L),0x5610L,(-9L),0xAC8EL,0x12A3L},{0x5BD5L,0x3531L,0x5950L,2L,1L,(-1L),8L},{0xA32AL,0x37C1L,2L,1L,0xAC8EL,0x39ECL,0x4A41L},{8L,(-9L),0L,0xDEF9L,0xD44CL,0x938FL,0x25E4L}},{{0x13B2L,0xF574L,1L,5L,0x4868L,0xC8DDL,9L},{(-1L),0x1434L,0xDEF9L,0x5C82L,0L,0x38F5L,0x938FL},{0x80F8L,2L,0L,0xD42AL,(-1L),1L,4L},{0x80F8L,0x37C1L,0x5BD5L,0x1D0BL,0xD42AL,0x1434L,0L}},{{2L,0L,0x2240L,(-1L),0x4811L,5L,(-1L)},{0x4811L,0x1434L,(-1L),0x5BD5L,0x13B2L,1L,1L},{0x3531L,(-1L),0xA32AL,(-9L),(-9L),0xA32AL,(-1L)},{4L,0x145BL,2L,(-1L),0x1D0BL,0L,0x9935L}},{{(-3L),2L,0x744EL,1L,4L,0xAC8EL,(-1L)},{(-9L),0xAC8EL,0x12A3L,(-1L),0x33F2L,0x3531L,0xD42AL},{(-7L),(-1L),(-1L),(-9L),0x5950L,0x1D0BL,(-1L)},{1L,0L,0x025EL,0x5BD5L,(-1L),0x5610L,0xF574L}}};
    int l_1219 = 0x2CB3E312L;
    int *l_1227 = &g_91;
    int *l_1230[4];
    unsigned short **l_1234 = &g_746[7];
    unsigned short **l_1235 = &g_746[8];
    char l_1255[3];
    unsigned short l_1303 = 0x85D5L;
    unsigned short l_1318 = 3UL;
    int l_1319 = 0xBFEEB48BL;
    const unsigned char l_1348 = 0xF6L;
    int *l_1396[10][4][6] = {{{&g_994,&g_44,(void*)0,(void*)0,&g_44,&g_91},{&l_1219,&g_44,&g_44,&g_504,&g_44,&g_504},{&l_1219,&l_1219,&l_1219,(void*)0,&g_44,&l_1219},{&g_994,&g_44,&g_44,&g_91,&l_1219,&l_1219}},{{&g_44,&g_44,(void*)0,&g_504,&g_44,&g_44},{&g_44,&l_1219,(void*)0,&g_91,&l_1219,&l_1219},{&g_44,&g_44,&g_44,&g_44,&g_44,&g_608},{&g_44,&g_44,&g_608,&g_91,&l_1219,(void*)0}},{{&g_44,&l_1219,&g_44,&g_504,&l_1219,&l_1219},{&g_44,&g_44,(void*)0,&l_1219,&g_44,&l_1219},{&g_44,&g_44,(void*)0,&g_44,&l_1219,&l_1219},{&g_44,&l_1219,&g_44,&g_44,&g_44,(void*)0}},{{&g_44,&g_44,&g_608,&g_44,&l_1219,&g_608},{&g_44,&l_1219,&g_44,&l_1219,&l_1219,&l_1219},{&g_44,&g_44,(void*)0,&g_504,&g_44,&g_44},{&g_44,&l_1219,(void*)0,&g_91,&l_1219,&l_1219}},{{&g_44,&g_44,&g_44,&g_44,&g_44,&g_608},{&g_44,&g_44,&g_608,&g_91,&l_1219,(void*)0},{&g_44,&l_1219,&g_44,&g_504,&l_1219,&l_1219},{&g_44,&g_44,(void*)0,&l_1219,&l_1219,(void*)0}},{{&g_44,(void*)0,&l_1219,&g_504,(void*)0,&g_608},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1219,&g_44},{(void*)0,&g_44,&g_44,&g_504,(void*)0,&g_44},{&g_44,(void*)0,(void*)0,&l_1219,(void*)0,(void*)0}},{{&g_504,&g_44,&l_1219,&g_44,&l_1219,(void*)0},{&g_44,(void*)0,&l_1219,&l_1219,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1219,&g_44},{(void*)0,&l_1219,&g_44,&l_1219,(void*)0,&g_44}},{{&g_44,&g_608,(void*)0,&g_44,(void*)0,&g_608},{&g_504,&l_1219,&l_1219,&l_1219,&l_1219,(void*)0},{&g_44,(void*)0,&l_1219,&g_504,(void*)0,&g_608},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1219,&g_44}},{{(void*)0,&g_44,&g_44,&g_504,(void*)0,&g_44},{&g_44,(void*)0,(void*)0,&l_1219,(void*)0,(void*)0},{&g_504,&g_44,&l_1219,&g_44,&l_1219,(void*)0},{&g_44,(void*)0,&l_1219,&g_608,&g_994,&g_994}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_91,&g_504},{(void*)0,&g_91,&g_504,&g_608,(void*)0,&l_1219},{&l_1219,&l_1219,(void*)0,&g_44,(void*)0,&l_1219},{(void*)0,&g_91,&g_91,&g_44,&g_91,(void*)0}}};
    short l_1399 = 0x6E3EL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1230[i] = &g_719;
    for (i = 0; i < 3; i++)
        l_1255[i] = 0x21L;
    (*l_1227) = func_2((safe_lshift_func_uint16_t_u_u((((g_8 = g_7[1]) && (l_9 || (!(l_10[0][1][5] != ((safe_rshift_func_uint16_t_u_s(l_9, 6)) != (l_1219 = func_13((l_10[5][1][2] & (~(func_15(l_10[0][1][5], g_8, g_7[1], g_20[1][3]) != l_10[1][0][4])))))))))) < l_10[0][3][1]), 10)), l_10[0][1][5]);
    if (((*g_301) = ((((safe_sub_func_uint16_t_u_u((**g_745), (*l_1227))) >= func_31((l_1219 = 0x85CBA8CFL), (*l_1227), (0L == (safe_sub_func_uint16_t_u_u((func_31((safe_unary_minus_func_uint16_t_u((*l_1227))), (*l_1227), func_31((*l_1227), func_31((l_1234 != l_1235), (**g_874), (*l_1227)), (*l_1227))) || (*l_1227)), (*l_1227)))))) != 0x3AA832B3L) > 0x83L)))
    {
        const char l_1240 = 0x0EL;
        short **l_1286 = &g_1030;
        short ***l_1285 = &l_1286;
        unsigned l_1289 = 0UL;
        unsigned l_1304 = 0xA8ACF994L;
        int *l_1306[8] = {&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219,&l_1219};
        int l_1337 = 1L;
        int **l_1377 = &l_1306[7];
        int i;
        for (g_492 = 9; (g_492 > 14); g_492 = safe_add_func_uint32_t_u_u(g_492, 1))
        {
            unsigned short l_1241 = 8UL;
            const short *l_1272 = (void*)0;
            const short **l_1271 = &l_1272;
            int l_1273 = 1L;
            char l_1274 = (-1L);
            const unsigned *l_1277 = &g_38;
            short * const *l_1299 = &g_1030;
            const int l_1351 = 0xF6C15970L;
            (*g_141) = (*g_809);
            for (g_96 = 4; (g_96 >= 0); g_96 -= 1)
            {
                unsigned char *l_1242 = &g_1032[6];
                short l_1257 = 0x8D96L;
                unsigned char **l_1260 = &g_417[5][6][0];
                const short **l_1300 = &l_1272;
                unsigned l_1317[7] = {0x095E4FA0L,0x095E4FA0L,0x095E4FA0L,0x095E4FA0L,0x095E4FA0L,0x095E4FA0L,0x095E4FA0L};
                int l_1352[10][10][2] = {{{0x45B35964L,0x61E34C62L},{0x3CDBE2F6L,1L},{4L,1L},{0xA3AA13C7L,(-1L)},{1L,0x8A67C797L},{0xB7399C70L,4L},{(-10L),(-10L)},{(-1L),0x8843DAB7L},{0x3CDBE2F6L,0L},{(-2L),0xBDF5BA57L}},{{0x2FEF9154L,(-2L)},{9L,0x8A67C797L},{9L,(-2L)},{0x2FEF9154L,0xBDF5BA57L},{(-2L),0L},{0x3CDBE2F6L,0x8843DAB7L},{(-1L),(-10L)},{(-10L),4L},{0xB7399C70L,0x8A67C797L},{1L,(-1L)}},{{0xA3AA13C7L,1L},{4L,1L},{0x3CDBE2F6L,0x61E34C62L},{0x45B35964L,0x2FEF9154L},{0xBDF5BA57L,1L},{0L,0x8A67C797L},{0L,0L},{(-2L),0x37A2C053L},{1L,0x7E06397CL},{4L,0xD2B2C6D4L}},{{0x61E34C62L,0x2EDA698DL},{0x4B47CDC8L,0xB7399C70L},{(-1L),0x45B35964L},{0x0EADA23DL,0x61E34C62L},{0x37A2C053L,(-2L)},{0xB7399C70L,0x1BFD83D0L},{4L,0x1BFD83D0L},{0xB7399C70L,(-2L)},{0x37A2C053L,0x61E34C62L},{0x0EADA23DL,0x45B35964L}},{{(-1L),0xB7399C70L},{0x4B47CDC8L,0x2EDA698DL},{0x61E34C62L,0xD2B2C6D4L},{4L,0x7E06397CL},{1L,0x37A2C053L},{(-2L),0L},{0L,0x45B35964L},{0xD2B2C6D4L,1L},{0x09713E9CL,(-1L)},{0L,(-1L)}},{{4L,0L},{0x8843DAB7L,0x4B47CDC8L},{0x2EDA698DL,9L},{0L,0x45B35964L},{0x1BFD83D0L,0x8843DAB7L},{0x7ADBDC89L,0x7ADBDC89L},{9L,0x0EADA23DL},{4L,0L},{0L,0x09713E9CL},{(-1L),0L}},{{0x7E06397CL,0x45B35964L},{0x7E06397CL,0L},{(-1L),0x09713E9CL},{0L,0L},{4L,0x0EADA23DL},{9L,0x7ADBDC89L},{0x7ADBDC89L,0x8843DAB7L},{0x1BFD83D0L,0x45B35964L},{0L,9L},{0x2EDA698DL,0x4B47CDC8L}},{{0x8843DAB7L,0L},{4L,(-1L)},{0L,(-1L)},{0x09713E9CL,1L},{0xD2B2C6D4L,(-6L)},{4L,0x3CDBE2F6L},{0x1BFD83D0L,0L},{0x8A67C797L,1L},{0L,0xFFA81D67L},{0x0C7FCD6CL,0x0EADA23DL}},{{0xD2B2C6D4L,0x65E98FF9L},{(-2L),(-6L)},{0L,0x0C7FCD6CL},{0L,0x1BFD83D0L},{0x65E98FF9L,(-1L)},{0L,(-1L)},{0x65E98FF9L,0x1BFD83D0L},{0L,0x0C7FCD6CL},{0L,(-6L)},{(-2L),0x65E98FF9L}},{{0xD2B2C6D4L,0x0EADA23DL},{0x0C7FCD6CL,0xFFA81D67L},{0L,1L},{0x8A67C797L,0L},{0x1BFD83D0L,0x3CDBE2F6L},{4L,(-6L)},{0xFFA81D67L,0x8A67C797L},{0L,0x7E06397CL},{0x3CDBE2F6L,(-2L)},{0L,0x45B35964L}}};
                const int l_1353[4][10][6] = {{{(-1L),0L,8L,1L,0x91EFEA4BL,0xA95FF096L},{(-2L),0x63CAA0D7L,0xD9CC90E2L,(-4L),0xBC3C5A89L,0xE8BBA8BEL},{0xBB79D3F7L,(-1L),7L,(-1L),0x79182AE9L,0xE6A5CADFL},{0x63CAA0D7L,(-10L),0x91EFEA4BL,0x87F27819L,0xA95FF096L,0xCACFC76EL},{0xE336251DL,0xFA0A6868L,1L,1L,1L,0x5979077DL},{0x79182AE9L,0L,0xE8BBA8BEL,0xE6A5CADFL,4L,4L},{(-1L),(-5L),(-5L),(-1L),0x5B4A14FBL,4L},{0L,(-5L),0x83124298L,0x6A9155AAL,0x8C253FFBL,0x5979077DL},{(-1L),0x1847E929L,0x87F27819L,(-5L),0x8C253FFBL,1L},{5L,0x8A0601ADL,0xD9CC90E2L,0x49F2C4BBL,1L,0L}},{{8L,0x75A0A89BL,0x5ADB0913L,0xBAB461CDL,0L,1L},{(-8L),0L,0xCACFC76EL,0x8A0601ADL,0xF47E48E4L,1L},{0x0217738BL,(-1L),(-8L),0x978AB44FL,(-1L),0x6A9155AAL},{0xA95FF096L,(-1L),(-5L),(-8L),0L,0x87F27819L},{0L,0xFF219230L,1L,(-10L),1L,0x91EFEA4BL},{(-1L),0x82949867L,(-1L),(-1L),9L,(-5L)},{0xBB79D3F7L,0xBAB461CDL,(-5L),(-1L),0L,(-1L)},{4L,0x0E5BE727L,(-1L),0L,7L,0x5B4A14FBL},{(-1L),4L,0x8A0601ADL,4L,(-1L),(-6L)},{0x8C253FFBL,(-8L),(-1L),1L,4L,0xFF219230L}},{{(-1L),(-1L),0xA95FF096L,1L,0x23CA7F7BL,0x49F2C4BBL},{1L,4L,0x8C253FFBL,(-8L),0L,(-8L)},{(-1L),(-5L),0xBAB461CDL,7L,(-2L),(-4L)},{0xD9CC90E2L,0xE8BBA8BEL,1L,0xE8BBA8BEL,0xBB79D3F7L,0x23CA7F7BL},{0xA95FF096L,0xE336251DL,(-1L),7L,0L,0L},{(-4L),(-5L),8L,0xE336251DL,0x0E5BE727L,0L},{1L,4L,(-1L),(-10L),(-10L),0x23CA7F7BL},{0x0E5BE727L,5L,1L,0xBC3C5A89L,(-1L),(-1L)},{8L,0x8A0601ADL,0L,1L,(-4L),0L},{5L,(-1L),1L,1L,0L,1L}},{{4L,1L,(-5L),0x23CA7F7BL,(-2L),0x82949867L},{0xE2858F9DL,0x7C398DD6L,0x8A0601ADL,0L,(-8L),1L},{0x64A3BBDCL,0x5ADB0913L,(-10L),0xA95FF096L,4L,(-2L)},{0x458FC7E3L,1L,7L,1L,0x91EFEA4BL,(-1L)},{(-1L),0x8C253FFBL,1L,(-4L),5L,0xBD552E8BL},{0x1847E929L,0x23CA7F7BL,5L,7L,(-1L),0x49F2C4BBL},{0xE6A5CADFL,0xE2858F9DL,0xDAB05985L,(-1L),1L,(-6L)},{0L,(-10L),0xBD552E8BL,0xFA0A6868L,0x7C398DD6L,1L},{0x5A3C39EFL,0xE6A5CADFL,0L,(-8L),(-8L),7L},{0x6A9155AAL,7L,(-1L),0x1847E929L,0xA8CC7B12L,0x458FC7E3L}}};
                int i, j, k;
            }
            for (g_38 = 16; (g_38 <= 44); g_38++)
            {
                unsigned l_1358 = 0xC05614BEL;
                unsigned l_1367 = 0xA1916A80L;
                int *l_1368 = &g_994;
                int **l_1370 = &g_464;
                (*g_1369) = func_62((+((safe_rshift_func_int16_t_s_u((l_1358 < (*g_148)), (safe_lshift_func_int16_t_s_u(func_13((**g_745)), 6)))) & (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_1273, (safe_mod_func_int16_t_s_s(l_1367, (**g_745))))), ((*g_1347) = (*g_1347)))))), ((*g_736) = (void*)0), l_1368, (**g_745));
                (*l_1370) = (void*)0;
                for (g_610 = 0; (g_610 > 37); g_610++)
                {
                    return (*l_1227);
                }
            }
            (*g_1373) = (*g_665);
        }
        (*g_1376) = func_62((*g_1347), (**g_735), &l_1219, (**g_745));
        (*l_1377) = (*g_1376);
    }
    else
    {
        char l_1382 = 3L;
        int l_1383 = 0x1A2B0AEFL;
        int *l_1384 = &l_1219;
        unsigned l_1385 = 1UL;
        char *l_1386[6] = {&g_368,&g_368,&l_1255[1],&g_368,&g_368,&l_1255[1]};
        char l_1387 = 0L;
        int i;
        if (((l_1387 = (safe_add_func_uint16_t_u_u(((*l_1227) != ((*g_1347) = (((safe_sub_func_int8_t_s_s((((l_1383 = func_2(l_1382, l_1382)) < ((-1L) <= 1UL)) < ((*l_1384) = l_1382)), (l_1385 != ((*g_1030) = ((*g_1265) == 0L))))) == 0x2AL) < l_1385))), 0x7489L))) ^ 247UL))
        {
            unsigned char l_1388[5][4] = {{0x7AL,0x7AL,251UL,0x7AL},{0x7AL,0x68L,0x68L,0x7AL},{0x68L,0x7AL,0x68L,0x68L},{0x7AL,0x7AL,251UL,0x7AL},{0x7AL,0x68L,0x68L,0x7AL}};
            int i, j;
lbl_1395:
            (*l_1384) = (+l_1388[4][1]);
            for (l_1303 = 0; (l_1303 <= 24); ++l_1303)
            {
                unsigned l_1392[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1392[i] = 0x0EFCF140L;
                for (g_504 = 0; (g_504 <= 2); g_504 += 1)
                {
                    unsigned char l_1391 = 0x3BL;
                    if (l_1391)
                    {
                        if ((**g_440))
                            break;
                        if (l_1392[2])
                            continue;
                    }
                    else
                    {
                        int l_1393 = 7L;
                        int *l_1394 = &l_1393;
                        int i;
                        (*l_1384) = l_1391;
                        (*l_1384) = (((func_41((*l_1384)) | ((*l_1394) = (l_1393 <= 1L))) > ((-10L) | (*g_1347))) | (&l_1255[1] != (void*)0));
                        if (g_8)
                            goto lbl_1395;
                    }
                }
                (*l_1384) = (*l_1384);
            }
        }
        else
        {
            int **l_1398 = &g_140[1];
            (*l_1398) = l_1396[3][2][5];
        }
    }
    return l_1399;
}







static const int func_2(short p_3, const char p_4)
{
    const int l_1220 = (-3L);
    int *l_1221 = &g_504;
    unsigned char *l_1222 = &g_272;
    unsigned l_1223[6][9] = {{4294967288UL,0UL,4294967288UL,2UL,0x3695F11EL,2UL,4294967288UL,0UL,4294967288UL},{4294967291UL,1UL,0xA847D351L,0xA847D351L,1UL,4294967291UL,0xA847D351L,0xC5AAF9B2L,4294967291UL},{4294967292UL,0UL,4294967292UL,2UL,0x9C1D60BFL,2UL,4294967292UL,0UL,4294967292UL},{4294967291UL,0xC5AAF9B2L,0xA847D351L,4294967291UL,1UL,0xA847D351L,0xA847D351L,1UL,4294967291UL},{4294967288UL,0UL,4294967288UL,2UL,0x3695F11EL,2UL,4294967288UL,0UL,4294967288UL},{4294967291UL,1UL,0xA847D351L,0xA847D351L,1UL,4294967291UL,0xA847D351L,0xC5AAF9B2L,4294967291UL}};
    int *l_1225 = (void*)0;
    int *l_1226[6] = {&g_608,&g_994,&g_608,&g_608,&g_994,&g_608};
    int i, j;
    (**g_374) = (((((**g_506) & l_1220) > ((*l_1221) = (-6L))) | ((((*g_416) = l_1222) == l_1222) | (((!l_1223[3][4]) | p_3) | p_3))) | ((g_239[1][2] != p_3) | (-7L)));
    (*l_1221) = p_3;
    return (**g_141);
}







static unsigned char func_13(unsigned short p_14)
{
    int *l_1203 = &g_608;
    int **l_1204 = (void*)0;
    (*g_1205) = l_1203;
    if ((*l_1203))
    {
        unsigned l_1214[3];
        int l_1215 = 0x8FDFD486L;
        int i;
        for (i = 0; i < 3; i++)
            l_1214[i] = 4294967286UL;
        l_1215 = (safe_sub_func_int16_t_s_s(0x34B2L, ((safe_lshift_func_uint8_t_u_u((!p_14), (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((((*l_1203) = p_14) != l_1214[1]), (**g_1100))), (*g_1030))))) <= p_14)));
    }
    else
    {
        for (g_91 = 0; (g_91 > 27); g_91++)
        {
            int *l_1218 = &g_994;
            (*g_1010) = l_1218;
            return p_14;
        }
    }
    return p_14;
}







static unsigned func_15(unsigned short p_16, unsigned p_17, int p_18, unsigned char p_19)
{
    short l_824 = 0x18D4L;
    int **l_1098[1][7][10] = {{{&g_140[2],(void*)0,&g_140[2],&g_140[0],&g_140[0],&g_464,&g_464,&g_140[0],&g_464,&g_140[3]},{&g_464,&g_464,(void*)0,&g_140[0],&g_140[2],(void*)0,&g_140[2],&g_140[0],(void*)0,&g_464},{&g_140[2],&g_464,&g_140[3],&g_140[2],&g_464,&g_464,&g_140[2],&g_140[3],&g_464,&g_140[2]},{&g_140[3],&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_140[3],&g_140[3]},{&g_140[2],&g_140[0],(void*)0,&g_464,&g_464,(void*)0,&g_140[0],&g_140[2],(void*)0,&g_140[2]},{&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_464,&g_140[3],&g_140[3],&g_464},{&g_140[3],&g_140[2],&g_464,&g_464,&g_140[2],&g_140[3],&g_464,&g_140[2],&g_464,&g_140[3]}}};
    short l_1133 = 0L;
    unsigned l_1171[3][8] = {{0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L},{0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L},{0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L,0x1A302B55L,0xA74AC2F0L}};
    int i, j, k;
    for (p_17 = 0; (p_17 >= 6); p_17++)
    {
        unsigned *l_37 = &g_38;
        unsigned *l_819 = &g_610;
        unsigned char ***l_821[6] = {&g_416,&g_416,&g_416,&g_416,&g_416,&g_416};
        unsigned char ****l_820[1];
        unsigned char ***l_822 = &g_416;
        int *l_823 = &g_719;
        int l_825 = (-1L);
        char l_1086 = 0x0EL;
        int l_1112 = (-5L);
        int i;
        for (i = 0; i < 1; i++)
            l_820[i] = &l_821[4];
    }
    if ((!((*g_311) = (safe_mod_func_int32_t_s_s(p_16, (safe_rshift_func_uint16_t_u_u(p_19, 11)))))))
    {
        (*g_97) = (1L ^ p_16);
    }
    else
    {
        unsigned char *l_1140[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_1141[7][9] = {{0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L},{0xA0418C1CL,0L,0xA0418C1CL,0xA0418C1CL,0L,0xA0418C1CL,0xA0418C1CL,0L,0xA0418C1CL},{0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L},{0xA0418C1CL,0L,0xA0418C1CL,0xA0418C1CL,0L,0xA0418C1CL,0xA0418C1CL,0L,0xA0418C1CL},{0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L},{0xA0418C1CL,0L,0xA0418C1CL,0xA0418C1CL,0L,0xA0418C1CL,0xA0418C1CL,0L,0xA0418C1CL},{0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L,0x5E1A2E05L,0x472E035BL,0x5E1A2E05L}};
        char l_1142 = 0x53L;
        unsigned *l_1145 = &g_20[1][3];
        int l_1176 = 0xD7A8A35AL;
        const unsigned l_1186[5] = {0xDEEE5C3EL,0xDEEE5C3EL,0xDEEE5C3EL,0xDEEE5C3EL,0xDEEE5C3EL};
        int **l_1189 = &g_886[0][9];
        const short l_1193[6][8] = {{0x8517L,0x3584L,0x8517L,0xEEA7L,0xF1DCL,1L,0xC0C8L,1L},{(-2L),0xEEA7L,0x4E2AL,0xEEA7L,(-2L),1L,0xF1DCL,0x939CL},{(-2L),1L,0xF1DCL,1L,(-2L),0x3584L,0xC0C8L,1L},{0xF1DCL,1L,(-2L),0xEEA7L,0x4E2AL,0xEEA7L,(-2L),1L},{(-2L),0x939CL,0x8517L,1L,0x4E2AL,1L,0x4E2AL,1L},{0xF1DCL,0x939CL,0xF1DCL,1L,(-2L),0xEEA7L,0x4E2AL,0xEEA7L}};
        int *l_1196 = &l_1141[6][0];
        int i, j;
        if ((((l_1141[0][3] = p_18) ^ l_1142) >= (safe_mod_func_uint32_t_u_u(((*l_1145) = ((void*)0 == &g_746[4])), p_16))))
        {
            int *l_1146 = &l_1141[1][1];
            unsigned l_1147 = 0x2B6736C7L;
            l_1146 = func_62(p_19, &p_17, l_1146, p_19);
            for (p_18 = 0; (p_18 >= 0); p_18 -= 1)
            {
                int *l_1148 = &g_44;
                (*l_1146) = (p_18 | p_16);
                for (g_134 = 0; (g_134 <= 0); g_134 += 1)
                {
                    int *l_1149[10] = {&g_91,&g_91,&g_91,&g_91,&g_91,&g_91,&g_91,&g_91,&g_91,&g_91};
                    int i;
                    if (l_1147)
                    {
                        l_1148 = (*g_874);
                    }
                    else
                    {
                        if ((**g_374))
                            break;
                        l_1149[1] = (*g_983);
                        (*l_1146) = 0xDFCC6CEDL;
                        if ((**g_1010))
                            continue;
                    }
                    if ((&g_288[p_18] == &g_288[p_18]))
                    {
                        return (*l_1148);
                    }
                    else
                    {
                        return p_19;
                    }
                }
            }
            return p_19;
        }
        else
        {
            unsigned l_1154 = 4294967287UL;
            unsigned *l_1161 = &g_20[0][4];
            unsigned l_1170 = 7UL;
            int l_1172 = 0L;
            p_18 = ((l_1142 & (((safe_add_func_uint16_t_u_u(0xE6BBL, (safe_mod_func_uint16_t_u_u(((((p_18 ^ (l_1154 < ((safe_sub_func_uint16_t_u_u(((((safe_mod_func_uint16_t_u_u((!func_41((safe_sub_func_int8_t_s_s((l_1172 = l_1171[0][0]), p_19)))), p_16)) < 4294967295UL) > (-1L)) != 0xB4L), p_19)) == p_16))) ^ 0xB305L) == p_16) ^ 249UL), p_18)))) && l_1154) | l_1142)) && p_18);
        }
        for (p_18 = 6; (p_18 < 15); p_18++)
        {
            int l_1175 = 0x929DD548L;
            unsigned short **l_1183 = (void*)0;
            int *l_1185 = &l_1141[0][7];
            int **l_1190 = &g_886[0][9];
            char *l_1194 = (void*)0;
            char *l_1195 = &g_368;
            int l_1202 = (-10L);
        }
        l_1196 = &p_18;
        return p_16;
    }
    return p_18;
}







static unsigned char func_25(unsigned short p_26, const unsigned p_27, unsigned p_28, char p_29, const unsigned short p_30)
{
    short l_828 = 0x2507L;
    short l_843 = (-4L);
    int l_844 = 0x43F0EE6EL;
    int l_895 = 0L;
    unsigned l_911 = 1UL;
    const unsigned l_918[2][3] = {{4294967290UL,0xF313C6E9L,4294967290UL},{4294967290UL,0xF313C6E9L,4294967290UL}};
    unsigned char *l_919 = &g_272;
    unsigned char ***l_925[7][10] = {{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416},{&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416,&g_416}};
    int l_1000 = 2L;
    int l_1024 = 1L;
    unsigned l_1033[5][1];
    int *l_1037 = (void*)0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1033[i][j] = 0x23195725L;
    }
    if (((1L | l_828) <= (p_28 != p_29)))
    {
        int l_835 = (-7L);
        unsigned l_842 = 4294967288UL;
        unsigned char *l_863 = &g_272;
        int *l_879 = &l_835;
        (**g_141) = (safe_mod_func_int32_t_s_s(func_41((l_835 = (((func_31((safe_sub_func_int32_t_s_s(p_28, (safe_add_func_uint16_t_u_u(l_835, (safe_sub_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((**g_809), (safe_mod_func_uint32_t_u_u(l_842, (l_843 && l_842))))) >= l_842) & 1UL), p_30)))))), (*g_148), p_26) && l_844) != l_835) >= p_28))), 0x9CDD07EBL));
        for (l_844 = 0; (l_844 == 6); ++l_844)
        {
            unsigned char ***l_848 = (void*)0;
            unsigned char ****l_847 = &l_848;
            unsigned short l_859 = 0xF34DL;
            char *l_860 = &g_368;
            short **l_868[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int l_871[4][10] = {{0x380B3716L,0x75AD0B53L,1L,0x380B3716L,7L,0x380B3716L,1L,0x75AD0B53L,0x380B3716L,9L},{(-9L),0x75AD0B53L,(-1L),(-9L),7L,(-3L),0x75AD0B53L,0x75AD0B53L,(-3L),7L},{(-9L),1L,1L,(-9L),9L,0x380B3716L,0x75AD0B53L,1L,0x380B3716L,7L},{0x380B3716L,0x75AD0B53L,1L,0x380B3716L,7L,0x380B3716L,1L,0x75AD0B53L,0x380B3716L,9L}};
            int *l_884 = &g_719;
            int i, j;
            if (((((**g_745) = (((void*)0 != l_847) >= 9L)) | (((((safe_lshift_func_int8_t_s_u((((*l_860) = ((0L || (((((func_41(p_30) & 0x2119589AL) > (safe_rshift_func_uint8_t_u_u((p_26 != (safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((((~(p_29 >= l_842)) <= g_164) & l_828) ^ p_30), p_27)), 8UL)), l_843))), p_29))) ^ g_610) || l_859) & g_597)) <= p_27)) <= p_30), l_859)) ^ p_28) || 0x7CF21D6DL) && p_26) == p_28)) & l_828))
            {
                for (g_318 = 3; (g_318 <= 9); g_318 += 1)
                {
                    char l_861 = (-10L);
                    int *l_862 = &g_719;
                    short **l_865 = &g_643[3];
                    short ***l_864 = &l_865;
                    short **l_867 = (void*)0;
                    short ***l_866 = &l_867;
                    if (l_861)
                        break;
                    if ((p_30 | func_31(((*l_862) = (0L && l_828)), ((l_863 == (*g_416)) | ((0x2E5AL != (((*l_866) = ((*l_864) = &g_643[3])) != l_868[1])) & (l_871[3][0] = (((safe_rshift_func_int8_t_s_s(((-1L) | p_27), p_28)) || 0x17E80950L) && 0x30F2A66FL)))), p_26)))
                    {
                        return p_29;
                    }
                    else
                    {
                        unsigned l_872 = 0x49613F3EL;
                        int **l_873 = (void*)0;
                        int i;
                        (*g_874) = func_62((func_31(l_861, (0UL ^ 0x2571L), (func_31(l_872, p_28, l_872) < p_30)) > 0xE9L), g_737[g_318], &l_871[3][6], p_26);
                        l_879 = &l_835;
                    }
                    return l_859;
                }
            }
            else
            {
                int l_892 = 1L;
                int l_904 = 0x280979E7L;
                const int **l_914 = &g_148;
                for (g_91 = 11; (g_91 <= 26); g_91++)
                {
                    int l_891 = 0L;
                    int l_903 = 0x45CC67B1L;
                    if (p_26)
                    {
                        int **l_885[3];
                        unsigned **l_890[5][7] = {{&g_235,&g_235,&g_235,&g_235,&g_235,&g_235,&g_235},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_235,&g_235,&g_235,&g_235,&g_235,&g_235,&g_235},{&g_235,&g_371,&g_235,&g_371,&g_235,&g_371,&g_235},{&g_235,&g_235,&g_235,&g_235,&g_235,&g_235,&g_235}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_885[i] = &l_884;
                        (*l_879) = ((g_164 >= (!(0L ^ (0x539EL > (p_28 != (((&g_719 == (g_886[0][9] = l_884)) < ((safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_uint8_t_u(((g_371 = l_884) != (void*)0))) == (p_29 && l_891)) | (*l_879)), 11)) <= l_891)) != l_892)))))) != l_871[3][8]);
                    }
                    else
                    {
                        int **l_893 = &g_140[4];
                        unsigned short **l_894 = (void*)0;
                        (*l_893) = (*g_139);
                        (**l_893) = ((*l_879) = (((void*)0 != l_894) >= (-9L)));
                        if (l_891)
                            break;
                        l_904 = (((l_895 = (-5L)) <= l_891) & ((**l_893) = (safe_add_func_uint32_t_u_u((l_903 = (((*l_863) = p_29) ^ (((((*l_879) = (((*g_463) == &l_835) < (((!(safe_sub_func_int32_t_s_s(p_28, (p_28 >= (((void*)0 == g_900) ^ 1L))))) > p_26) && p_30))) < p_27) || 0L) & 0L))), l_828))));
                    }
                    l_871[1][4] = (((-10L) & ((*l_879) = ((**g_220) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(65529UL, (l_911 != ((*l_879) & ((safe_sub_func_uint8_t_u_u((&g_207 == (void*)0), (0x55254D94L >= (l_903 = p_26)))) ^ p_27))))), p_29)) > (-1L)), p_28))))) ^ p_29);
                }
                (*l_914) = (void*)0;
                (*l_879) = l_904;
            }
        }
    }
    else
    {
        unsigned *l_916 = &g_20[1][3];
        int l_917 = 0xABB4C0F4L;
        unsigned short **l_964[10][5][5] = {{{&g_746[4],&g_746[8],&g_746[3],&g_746[8],&g_746[8]},{&g_746[8],&g_746[8],&g_746[8],&g_746[8],&g_746[8]},{&g_746[1],&g_746[9],&g_746[8],&g_746[9],&g_746[1]},{&g_746[8],&g_746[1],&g_746[8],&g_746[0],&g_746[6]},{&g_746[8],&g_746[4],&g_746[8],&g_746[1],&g_746[1]}},{{&g_746[1],&g_746[8],&g_746[8],&g_746[1],&g_746[6]},{&g_746[4],&g_746[1],&g_746[3],&g_746[3],&g_746[1]},{&g_746[6],&g_746[8],&g_746[8],&g_746[2],&g_746[8]},{&g_746[8],&g_746[8],&g_746[8],&g_746[3],&g_746[8]},{&g_746[0],&g_746[1],&g_746[8],(void*)0,(void*)0}},{{&g_746[8],&g_746[4],&g_746[4],&g_746[1],&g_746[4]},{&g_746[6],&g_746[6],&g_746[8],(void*)0,&g_746[8]},{&g_746[4],&g_746[8],&g_746[6],&g_746[4],&g_746[8]},{&g_746[1],&g_746[0],&g_746[8],&g_746[8],&g_746[0]},{&g_746[8],&g_746[8],&g_746[4],&g_746[8],&g_746[8]}},{{&g_746[8],&g_746[6],&g_746[8],&g_746[8],&g_746[2]},{&g_746[1],&g_746[4],&g_746[8],&g_746[9],&g_746[4]},{&g_746[8],&g_746[1],&g_746[1],(void*)0,&g_746[6]},{&g_746[4],&g_746[8],&g_746[3],&g_746[6],&g_746[8]},{&g_746[8],(void*)0,(void*)0,&g_746[8],&g_746[8]}},{{&g_746[7],&g_746[8],&g_746[8],&g_746[1],&g_746[8]},{&g_746[8],&g_746[1],&g_746[0],&g_746[8],&g_746[8]},{&g_746[9],&g_746[8],&g_746[4],&g_746[1],&g_746[3]},{&g_746[8],&g_746[8],&g_746[8],&g_746[8],&g_746[8]},{&g_746[4],&g_746[7],&g_746[8],&g_746[6],&g_746[8]}},{{&g_746[2],&g_746[8],&g_746[8],&g_746[8],&g_746[8]},{&g_746[7],&g_746[9],&g_746[8],&g_746[7],&g_746[8]},{&g_746[7],&g_746[8],&g_746[0],&g_746[0],&g_746[8]},{&g_746[8],&g_746[4],&g_746[4],&g_746[3],&g_746[3]},{&g_746[1],&g_746[2],(void*)0,(void*)0,&g_746[8]}},{{&g_746[6],&g_746[7],&g_746[3],&g_746[1],&g_746[8]},{&g_746[1],&g_746[7],&g_746[8],&g_746[8],&g_746[8]},{&g_746[8],&g_746[8],&g_746[4],&g_746[8],&g_746[8]},{&g_746[7],&g_746[1],(void*)0,&g_746[7],&g_746[2]},{&g_746[7],&g_746[6],&g_746[4],&g_746[1],&g_746[6]}},{{&g_746[2],&g_746[1],&g_746[7],&g_746[8],&g_746[8]},{&g_746[4],&g_746[8],&g_746[4],&g_746[4],&g_746[3]},{&g_746[8],&g_746[8],&g_746[1],&g_746[8],&g_746[8]},{&g_746[4],&g_746[6],&g_746[7],&g_746[3],&g_746[1]},{&g_746[8],&g_746[7],&g_746[1],&g_746[8],(void*)0}},{{&g_746[6],&g_746[8],&g_746[8],&g_746[6],(void*)0},{&g_746[8],&g_746[8],&g_746[2],&g_746[8],&g_746[8]},{(void*)0,&g_746[4],&g_746[8],&g_746[1],&g_746[4]},{&g_746[0],&g_746[8],&g_746[7],&g_746[8],&g_746[1]},{&g_746[3],&g_746[6],&g_746[8],&g_746[6],&g_746[3]}},{{&g_746[7],&g_746[8],&g_746[8],&g_746[8],&g_746[7]},{&g_746[1],(void*)0,&g_746[1],&g_746[3],&g_746[8]},{&g_746[8],&g_746[0],(void*)0,&g_746[8],&g_746[7]},{&g_746[8],&g_746[3],&g_746[8],&g_746[8],&g_746[3]},{&g_746[7],&g_746[7],&g_746[8],&g_746[8],&g_746[1]}}};
        int *l_1009[4][4] = {{&l_895,&g_91,&g_91,&l_895},{&l_895,&g_91,(void*)0,&g_91},{&g_91,&l_895,(void*)0,(void*)0},{&l_895,&l_895,&g_91,(void*)0}};
        short *l_1027 = &l_828;
        unsigned *****l_1060 = (void*)0;
        int i, j, k;
        if ((**g_220))
        {
            int **l_920 = &g_464;
            (*g_915) = (*g_421);
            (*l_920) = func_47(func_56(l_916, &l_895, (l_917 == l_918[0][2]), (p_28 > (l_919 != (void*)0)), p_28), l_895, &l_895, p_27, &g_608);
        }
        else
        {
            unsigned l_934 = 4294967294UL;
            for (p_29 = 26; (p_29 == 29); p_29 = safe_add_func_int16_t_s_s(p_29, 2))
            {
                unsigned char ***l_924[1];
                unsigned char ****l_923 = &l_924[0];
                int l_931 = 3L;
                int i;
                for (i = 0; i < 1; i++)
                    l_924[i] = &g_416;
                if (((p_27 && (((*l_923) = &g_416) == l_925[5][4])) & p_27))
                {
                    unsigned char l_928[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_928[i] = 255UL;
                    (*g_926) = p_26;
                    for (g_318 = 0; (g_318 <= 9); g_318 += 1)
                    {
                        const int **l_927 = &g_148;
                        int *l_929 = &g_504;
                        char *l_930 = &g_368;
                        int i;
                        (*l_927) = g_737[g_318];
                        (*l_927) = func_62(l_928[1], (***g_734), l_929, func_31((((**g_745) & (0xD87000B5L ^ (l_931 = (l_917 > (func_31((((*l_930) = (*g_901)) == p_30), (*l_929), l_917) >= l_844))))) && 0xBD953C6BL), p_28, p_29));
                    }
                    (*g_936) = (safe_lshift_func_uint8_t_u_u(p_27, (p_26 ^ l_934)));
                }
                else
                {
                    return l_934;
                }
            }
        }
lbl_1072:
        for (p_28 = 12; (p_28 <= 22); p_28 = safe_add_func_int8_t_s_s(p_28, 3))
        {
            const int *l_939 = (void*)0;
            int l_951 = 3L;
            (*g_940) = l_939;
            l_917 = l_828;
            for (g_198 = 0; (g_198 < 54); g_198 = safe_add_func_uint16_t_u_u(g_198, 6))
            {
                char l_949 = 0L;
                for (g_8 = 24; (g_8 == 34); g_8 = safe_add_func_int16_t_s_s(g_8, 9))
                {
                    unsigned short l_948 = 0x6A43L;
                    for (g_207 = (-4); (g_207 < (-15)); g_207--)
                    {
                        return p_29;
                    }
                    for (g_492 = 0; (g_492 <= 2); g_492 += 1)
                    {
                        short *l_947 = &l_828;
                        l_951 = (((*l_947) = 0x1EB0L) >= (l_948 < (l_917 > (((*l_919) = (p_30 || p_30)) > p_27))));
                    }
                }
            }
        }
        for (l_895 = 17; (l_895 < (-26)); l_895 = safe_sub_func_uint16_t_u_u(l_895, 7))
        {
            int l_954 = (-4L);
            int l_958 = (-1L);
            short l_993[5][9][5] = {{{1L,1L,(-5L),0xF3DCL,0xE894L},{0x5F01L,0xF49FL,1L,1L,1L},{0L,0xF49FL,0L,0xF49FL,0L},{0xEAECL,0L,0L,0x507CL,0L},{0xBA7FL,0L,1L,1L,0x4C24L},{1L,0xF49FL,(-5L),0L,0L},{1L,1L,1L,(-10L),0x5F01L},{0L,0x5F01L,0L,1L,0xE676L},{1L,0L,0L,0L,0L}},{{0xDE5FL,0x251FL,1L,0xF49FL,1L},{0xF49FL,0x5725L,(-5L),0xE676L,0xF3DCL},{0L,(-5L),1L,0xBA7FL,0xEAECL},{0xF49FL,(-10L),0L,0x251FL,(-5L)},{0xDE5FL,(-1L),0L,0xE894L,1L},{1L,0x89A6L,0L,0xE894L,0L},{0L,0L,1L,0x251FL,0xE894L},{1L,1L,0x89A6L,0xBA7FL,0xDE5FL},{1L,0xE894L,0x9A2CL,0xE676L,0x507CL}},{{0xBA7FL,1L,(-1L),0xF49FL,1L},{0xEAECL,0L,0x5F01L,0L,1L},{0x5F01L,0x89A6L,0xE894L,1L,1L},{0xAB01L,(-1L),0xAB01L,(-10L),1L},{(-1L),0x507CL,0x59E1L,0x251FL,0x89A6L},{0xE894L,1L,0L,0xF49FL,0x59E1L},{(-10L),0L,0x59E1L,0x89A6L,0xDE5FL},{0xEAECL,(-10L),0x5725L,0xE894L,0x251FL},{0L,1L,0xDE5FL,1L,0L}},{{0L,0L,0L,0L,1L},{0xEAECL,0xF49FL,0xF3DCL,(-1L),1L},{(-10L),0xE676L,0L,0x59E1L,0xE894L},{0xE894L,0xBA7FL,1L,(-1L),0xF49FL},{0xF3DCL,0x251FL,(-1L),0L,1L},{0x5725L,0xE894L,0x251FL,1L,0L},{0L,0xE894L,0xEAECL,0xE894L,0L},{1L,0x251FL,1L,0x89A6L,0x9A2CL},{0L,0xBA7FL,0x4C24L,0xF49FL,0xAB01L}},{{(-1L),0xE676L,1L,0x251FL,0x9A2CL},{(-5L),0xF49FL,1L,0x507CL,0L},{0x9A2CL,0L,1L,0x4C24L,0L},{0xF49FL,1L,1L,1L,1L},{0x59E1L,(-10L),1L,0xE676L,0xF49FL},{0xE676L,0L,(-1L),0xDE5FL,0L},{0L,(-1L),1L,0x507CL,1L},{0xE894L,(-5L),0L,1L,(-1L)},{0x4C24L,0x9A2CL,0x89A6L,1L,0x251FL}}};
            const int l_1006 = 0xF7E2C47EL;
            int l_1052 = 0x2BFCB4DEL;
            int l_1053[10] = {0x926401D4L,8L,0x926401D4L,(-7L),(-7L),0x926401D4L,8L,0x926401D4L,(-7L),(-7L)};
            unsigned l_1069[4][5][6] = {{{4294967291UL,0UL,0UL,0UL,4294967291UL,0x42F40F77L},{4294967295UL,0x1FAE925EL,4294967291UL,4294967295UL,0xD1260F59L,0x99377954L},{1UL,4294967291UL,4294967294UL,0x1FAE925EL,0x15B35985L,0x99377954L},{0UL,0x29167FBDL,4294967291UL,4294967289UL,4294967294UL,0x42F40F77L},{0x15B35985L,0xBE1AF2B6L,0UL,4294967295UL,4294967289UL,4294967289UL}},{{4294967293UL,7UL,7UL,4294967293UL,0x42F40F77L,4294967294UL},{7UL,3UL,1UL,1UL,0x99377954L,0x15B35985L},{0xF5E1C0D7L,4294967293UL,0UL,4294967294UL,0x99377954L,0xD1260F59L},{0xD1260F59L,3UL,4294967295UL,0x29167FBDL,0x42F40F77L,4294967291UL},{0x23AB9D4DL,7UL,0xA4E175ECL,1UL,4294967289UL,1UL}},{{3UL,0xBE1AF2B6L,3UL,0x23AB9D4DL,4294967294UL,0x4C233AAFL},{4294967295UL,0UL,0xF5E1C0D7L,0xC3993166L,0x1FAE925EL,1UL},{3UL,4294967293UL,0x99377954L,0xC3993166L,4294967293UL,1UL},{4294967295UL,1UL,7UL,1UL,4294967293UL,0x15B35985L},{1UL,4294967294UL,4294967295UL,0x42F40F77L,0x42F40F77L,4294967295UL}},{{1UL,1UL,0x6D1699AAL,0UL,3UL,4294967294UL},{4294967293UL,4294967295UL,0x5968F4D9L,0UL,1UL,0x6D1699AAL},{0x4C233AAFL,4294967293UL,0x5968F4D9L,0xBE1AF2B6L,1UL,4294967294UL},{0xC3993166L,0xBE1AF2B6L,0x6D1699AAL,0x5968F4D9L,0x15B35985L,4294967295UL},{0x5968F4D9L,0x15B35985L,4294967295UL,0x23AB9D4DL,4294967295UL,0x15B35985L}}};
            int i, j, k;
            l_954 = 0x8AD7C2CAL;
            for (g_91 = 1; (g_91 >= 0); g_91 -= 1)
            {
                unsigned l_957[7] = {0x55F0FD45L,0x55F0FD45L,0x55F0FD45L,0x55F0FD45L,0x55F0FD45L,0x55F0FD45L,0x55F0FD45L};
                unsigned **l_977 = &l_916;
                unsigned ***l_976 = &l_977;
                unsigned ****l_975[7][2] = {{&l_976,&l_976},{&l_976,&l_976},{&l_976,&l_976},{&l_976,&l_976},{&l_976,&l_976},{&l_976,&l_976},{&l_976,&l_976}};
                unsigned *****l_974 = &l_975[4][0];
                unsigned ******l_973[3][7] = {{&l_974,&l_974,&l_974,&l_974,&l_974,&l_974,&l_974},{&l_974,&l_974,&l_974,&l_974,&l_974,&l_974,&l_974},{&l_974,&l_974,&l_974,&l_974,&l_974,&l_974,&l_974}};
                char l_980[8] = {0L,0x54L,0L,0L,0x54L,0L,0L,0x54L};
                int *l_981 = &g_91;
                int **l_982 = (void*)0;
                int i, j;
                for (l_911 = 0; (l_911 <= 5); l_911 += 1)
                {
                    short l_963[3][1][7] = {{{0xE280L,0xE280L,1L,0x3E2EL,0x578EL,0x3E2EL,1L}},{{0xE280L,0xE280L,1L,0x3E2EL,0x578EL,0x3E2EL,1L}},{{0xE280L,0xE280L,1L,0x3E2EL,0x578EL,0x3E2EL,1L}}};
                    int i, j, k;
                    if ((l_954 || (0xF02BL != l_957[3])))
                    {
                        int **l_959 = &g_464;
                        int i, j;
                        l_958 = p_26;
                        if (p_27)
                            continue;
                        (*l_959) = g_886[g_91][(g_91 + 5)];
                    }
                    else
                    {
                        int *l_960 = &l_958;
                        int *l_969 = &l_917;
                        const unsigned short *l_972[9][8] = {{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]},{(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91],(void*)0,&g_239[l_911][g_91]}};
                        const unsigned ******l_979 = (void*)0;
                        const unsigned *******l_978 = &l_979;
                        int i, j;
                        (*l_960) = 5L;
                        (*l_969) = (safe_rshift_func_uint16_t_u_s(p_26, 9));
                        l_917 = (safe_mod_func_int8_t_s_s(p_28, l_980[6]));
                        return p_29;
                    }
                }
                (*g_983) = l_981;
            }
            for (g_597 = 0; (g_597 == 1); ++g_597)
            {
                unsigned l_995 = 2UL;
                for (l_911 = 0; (l_911 < 48); l_911++)
                {
                    int *l_988[10];
                    int **l_989 = &l_988[5];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_988[i] = &l_958;
                    (*l_989) = l_988[5];
                    (**l_989) = l_917;
                }
                if (p_30)
                    break;
                for (g_44 = 3; (g_44 >= 0); g_44 -= 1)
                {
                    int **l_990 = &g_140[3];
                    (*l_990) = &l_917;
                }
                (*g_996) = &l_958;
            }
            for (g_198 = 0; (g_198 < 37); g_198++)
            {
                int l_999 = 1L;
                unsigned *l_1019 = &g_610;
                short *l_1028 = &l_828;
                short **l_1029 = &g_643[3];
                unsigned *l_1031[5][1][10] = {{{&g_20[1][0],(void*)0,(void*)0,&l_911,(void*)0,(void*)0,&l_911,(void*)0,(void*)0,&g_20[1][0]}},{{&l_911,&g_20[1][3],(void*)0,(void*)0,(void*)0,&g_20[1][7],&g_20[1][3],(void*)0,&l_911,&g_20[1][0]}},{{&g_20[1][3],&l_911,(void*)0,&g_20[1][3],(void*)0,&g_20[1][0],(void*)0,(void*)0,(void*)0,&g_20[1][0]}},{{(void*)0,&g_20[1][3],&g_20[1][3],&g_20[1][3],(void*)0,&l_911,(void*)0,&g_20[1][3],&g_20[1][3],&g_20[1][0]}},{{&g_20[1][7],(void*)0,(void*)0,(void*)0,(void*)0,&g_20[1][3],&g_20[1][3],(void*)0,&g_20[1][3],&g_20[1][0]}}};
                int i, j, k;
                if ((l_1000 = (l_999 = l_999)))
                {
                    char *l_1007 = &g_368;
                    char *l_1008 = &g_164;
                    int l_1011 = 0xE733DE3FL;
                    (*g_1010) = &l_1000;
                    l_1011 = (p_26 && (p_26 > l_844));
                }
                else
                {
                    int **l_1013 = &g_140[4];
                    (*l_1013) = &l_958;
                    for (g_492 = (-5); (g_492 < 10); g_492 = safe_add_func_uint16_t_u_u(g_492, 2))
                    {
                        short l_1016 = 0x53E9L;
                        return l_1016;
                    }
                }
                if ((*g_301))
                    continue;
                if ((l_958 = (0x5321L | (((safe_mod_func_int32_t_s_s((p_28 && p_26), l_993[1][6][1])) || 65530UL) || p_29))))
                {
                    int *l_1036 = &l_958;
                    for (g_492 = (-9); (g_492 != 42); g_492++)
                    {
                        l_1037 = func_62(l_843, ((*g_736) = (***g_734)), l_1036, p_28);
                    }
                    if (p_29)
                    {
                        int **l_1038 = &l_1009[3][0];
                        char *l_1040 = &g_368;
                        int l_1041 = 0xC865561AL;
                        (*g_1039) = ((*l_1038) = l_1036);
                        (*l_1036) = (1UL | ((*l_1040) = (**g_900)));
                        l_1041 = l_1041;
                    }
                    else
                    {
                        (*l_1036) = 3L;
                        l_958 = l_999;
                        l_1052 = (((l_1036 == (void*)0) == (l_958 = (safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0x0910L, (*g_1030))), p_29)))) <= ((safe_rshift_func_int16_t_s_u((l_993[2][1][0] | (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s((1UL || p_26), 4294967290UL)) || p_30), 1))), (**g_287))) == 1L));
                        (*l_1036) = 0x96F432A2L;
                    }
                    l_1053[8] = (*l_1036);
                    l_999 = (l_958 = (safe_rshift_func_int8_t_s_s((**g_900), l_999)));
                }
                else
                {
                    int *l_1057 = &l_958;
                    int **l_1070 = &l_1009[3][0];
                    (*g_1056) = &l_1024;
                    for (g_164 = 0; (g_164 <= 1); g_164 += 1)
                    {
                        int i;
                        return g_7[(g_164 + 1)];
                    }
                    (*l_1070) = &l_1053[1];
                }
                (*g_1071) = &l_999;
            }
        }
        if (g_610)
            goto lbl_1072;
    }
    return p_30;
}







static int func_31(int p_32, int p_33, unsigned p_34)
{
    int *l_826 = (void*)0;
    int *l_827[2][10][5] = {{{&g_44,&g_91,(void*)0,&g_91,&g_608},{&g_44,&g_44,(void*)0,&g_504,&g_504},{&g_608,(void*)0,&g_608,&g_91,&g_44},{&g_91,&g_44,&g_504,&g_44,&g_91},{&g_608,&g_608,&g_91,&g_91,&g_91},{&g_44,&g_44,&g_504,&g_91,&g_91},{&g_44,&g_608,&g_608,&g_608,&g_91},{&g_44,&g_91,(void*)0,(void*)0,&g_91},{&g_44,&g_608,&g_608,&g_91,(void*)0},{&g_44,&g_504,&g_44,&g_91,(void*)0}},{{&g_608,&g_44,(void*)0,&g_44,&g_608},{&g_44,&g_91,&g_504,&g_44,&g_504},{&g_44,&g_44,(void*)0,&g_608,&g_91},{&g_91,&g_44,&g_44,&g_91,&g_504},{(void*)0,&g_608,&g_608,&g_91,&g_608},{&g_504,&g_44,&g_91,(void*)0,(void*)0},{&g_44,&g_44,&g_44,&g_91,(void*)0},{&g_44,&g_91,(void*)0,&g_91,&g_44},{&g_44,&g_44,&g_44,&g_608,&g_44},{&g_504,&g_504,(void*)0,&g_44,&g_44}}};
    int i, j, k;
    (**g_220) = (p_33 = (-7L));
    return (**g_809);
}







static unsigned func_41(unsigned char p_42)
{
    int l_53 = 0x8F60F1B6L;
    int l_67 = 0x811E3584L;
    unsigned l_68[10] = {4294967295UL,0x33FFCD55L,4294967295UL,0x33FFCD55L,4294967295UL,4294967295UL,0x33FFCD55L,4294967295UL,0x33FFCD55L,4294967295UL};
    unsigned char **l_550 = &g_417[5][6][0];
    unsigned char **l_551 = &g_417[9][8][0];
    char l_583 = 0x3AL;
    int *l_600 = &l_67;
    unsigned char l_613[2][4][5] = {{{252UL,0x0FL,252UL,252UL,0x0FL},{0x0FL,252UL,252UL,0x0FL,252UL},{0x0FL,0x0FL,250UL,0x0FL,0x0FL},{252UL,0x0FL,252UL,252UL,0x0FL}},{{0x0FL,252UL,252UL,0x0FL,252UL},{252UL,252UL,0x0FL,252UL,252UL},{250UL,252UL,250UL,250UL,252UL},{252UL,250UL,250UL,252UL,250UL}}};
    const unsigned *l_633 = &g_610;
    const unsigned **l_632 = &l_633;
    const unsigned ***l_631[9][2] = {{&l_632,&l_632},{&l_632,(void*)0},{&l_632,(void*)0},{&l_632,&l_632},{&l_632,&l_632},{&l_632,&l_632},{&l_632,(void*)0},{&l_632,(void*)0},{&l_632,&l_632}};
    const unsigned ****l_630 = &l_631[7][1];
    unsigned char l_670 = 0x3FL;
    int l_818[10] = {0xA4DDE641L,0xA4DDE641L,0xFB16BEE4L,(-4L),0xFB16BEE4L,0xA4DDE641L,0xA4DDE641L,0xFB16BEE4L,(-4L),0xFB16BEE4L};
    int i, j, k;
    (*g_43) = g_8;
    for (g_44 = 29; (g_44 == (-17)); g_44--)
    {
        char l_69 = 1L;
        const unsigned *l_70 = (void*)0;
        int * const l_298 = &l_53;
        int **l_537 = &g_140[3];
        unsigned char **l_546 = (void*)0;
    }
    (*l_600) = (**g_220);
    for (g_318 = 1; (g_318 <= 5); g_318 += 1)
    {
        unsigned *l_606 = &g_20[1][3];
        int l_618[5][5][3] = {{{0xB0CC41EAL,8L,0x88957D17L},{0xB0CC41EAL,0x3A96EBEDL,0x3A96EBEDL},{0L,(-6L),(-4L)},{0x3A96EBEDL,1L,0xB6AC05D7L},{0x3ECBFC6CL,(-4L),(-1L)}},{{(-4L),(-4L),0x3ECBFC6CL},{(-6L),(-4L),1L},{(-7L),1L,0x9EBC1412L},{0x9EBC1412L,(-6L),1L},{0x8F81571BL,0x3A96EBEDL,3L}},{{0L,8L,3L},{1L,1L,1L},{0x2F6062F9L,(-1L),0x9EBC1412L},{1L,(-1L),1L},{0L,(-7L),0x3ECBFC6CL}},{{0xFFFD93A8L,0L,(-1L)},{0L,0x88957D17L,0xB6AC05D7L},{1L,1L,0x9EBC1412L},{0x88957D17L,(-1L),0x8F81571BL},{0L,(-4L),0L}},{{1L,(-4L),1L},{(-1L),(-1L),0x2F6062F9L},{0x3A96EBEDL,1L,1L},{3L,0L,0L},{0L,1L,0xFFFD93A8L}}};
        const short *l_640[5];
        int * const *l_707[4] = {&l_600,&l_600,&l_600,&l_600};
        unsigned short l_772 = 0x8622L;
        unsigned l_797 = 0x44637995L;
        const unsigned short l_800 = 0xC727L;
        unsigned l_805 = 0x5E614693L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_640[i] = &g_96;
        (*l_600) = (0x3DL == l_68[(g_318 + 3)]);
        for (l_53 = 0; (l_53 >= 0); l_53 -= 1)
        {
            int l_619 = 1L;
            int l_635 = 0xAB3C352FL;
            int i;
        }
        (*l_600) = l_618[2][0][0];
        if ((*g_301))
            break;
        for (g_44 = 5; (g_44 >= 0); g_44 -= 1)
        {
            char *l_680[5] = {&l_583,&l_583,&l_583,&l_583,&l_583};
            unsigned char l_685 = 0x47L;
            const unsigned ****l_688 = &l_631[0][1];
            unsigned **l_704 = &l_606;
            unsigned ***l_703[8] = {&l_704,&l_704,&l_704,&l_704,&l_704,&l_704,&l_704,&l_704};
            unsigned ****l_702 = &l_703[0];
            unsigned short *l_712 = &g_198;
            unsigned short **l_711[6][5][1] = {{{&l_712},{&l_712},{&l_712},{&l_712},{&l_712}},{{&l_712},{&l_712},{&l_712},{&l_712},{&l_712}},{{&l_712},{&l_712},{&l_712},{&l_712},{&l_712}},{{&l_712},{&l_712},{&l_712},{&l_712},{&l_712}},{{&l_712},{&l_712},{&l_712},{&l_712},{&l_712}},{{&l_712},{&l_712},{&l_712},{&l_712},{&l_712}}};
            int l_740 = 6L;
            unsigned short ***l_747 = &l_711[0][0][0];
            unsigned short **l_749 = &g_746[9];
            unsigned short ***l_748 = &l_749;
            unsigned l_761 = 0x2A85D83DL;
            int l_762[9][2] = {{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L},{0xCE50CC64L,4L}};
            const short l_776[7] = {0x748CL,0x748CL,(-7L),0x748CL,0x748CL,(-7L),0x748CL};
            unsigned l_801 = 0xBFBB7E6DL;
            int i, j, k;
            (*l_600) = (safe_mod_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((g_368 = 0x61L), (safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_685, (safe_rshift_func_uint8_t_u_s((&g_234 == (void*)0), (~((void*)0 != l_688)))))), (safe_lshift_func_uint16_t_u_u((p_42 != (((+(*l_600)) & (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_42, 0x3AD8L)), l_618[0][4][0]))) <= p_42)), 0)))))), (-4L))) >= 249UL), (*g_301)));
        }
    }
    return l_818[7];
}







static int * func_47(const int p_48, char p_49, int * p_50, int p_51, int * p_52)
{
    const int l_511[1][7] = {{0xE8EA0CD8L,0xE8EA0CD8L,0xE8EA0CD8L,0xE8EA0CD8L,0xE8EA0CD8L,0xE8EA0CD8L,0xE8EA0CD8L}};
    int l_512 = (-1L);
    int l_525 = 0xB2AF2DE0L;
    int i, j;
    for (g_207 = 4; (g_207 >= 0); g_207 -= 1)
    {
        int l_510[6][10][4] = {{{0L,0xBD6EA76EL,0L,(-1L)},{0x87CD549CL,0xEACA06A5L,0L,(-1L)},{0L,0xBD6EA76EL,0L,0xEACA06A5L},{(-9L),0xB2CD5591L,0L,0xB2CD5591L},{0L,(-1L),0L,0x59D19205L},{0x87CD549CL,(-1L),0L,0xB2CD5591L},{0L,0xB2CD5591L,0L,0xEACA06A5L},{0L,0xBD6EA76EL,0L,(-1L)},{0x87CD549CL,0xEACA06A5L,0L,(-1L)},{0L,0xBD6EA76EL,0L,0xEACA06A5L}},{{(-9L),0xB2CD5591L,0L,0xB2CD5591L},{0L,(-1L),0L,0x59D19205L},{0x87CD549CL,(-1L),0L,0xB2CD5591L},{0L,0xB2CD5591L,0L,0xEACA06A5L},{0L,0xBD6EA76EL,0L,(-1L)},{0x87CD549CL,0xEACA06A5L,0L,(-1L)},{0L,0xBD6EA76EL,0L,0xEACA06A5L},{(-9L),0xB2CD5591L,0L,0xB2CD5591L},{0L,(-1L),0L,0x59D19205L},{0x87CD549CL,(-1L),0L,0xB2CD5591L}},{{0L,0xB2CD5591L,0L,0xEACA06A5L},{0L,0xBD6EA76EL,0L,(-1L)},{0x87CD549CL,(-1L),(-9L),0xEACA06A5L},{0L,0x59D19205L,0L,(-1L)},{0L,0x9938BFF1L,0L,0x9938BFF1L},{0L,0xB2CD5591L,(-9L),(-1L)},{0x6048AC47L,0xB2CD5591L,0x87CD549CL,0x9938BFF1L},{0x87CD549CL,0x9938BFF1L,0L,(-1L)},{0x87CD549CL,0x59D19205L,0x87CD549CL,0xEACA06A5L},{0x6048AC47L,(-1L),(-9L),0xEACA06A5L}},{{0L,0x59D19205L,0L,(-1L)},{0L,0x9938BFF1L,0L,0x9938BFF1L},{0L,0xB2CD5591L,(-9L),(-1L)},{0x6048AC47L,0xB2CD5591L,0x87CD549CL,0x9938BFF1L},{0x87CD549CL,0x9938BFF1L,0L,(-1L)},{0x87CD549CL,0x59D19205L,0x87CD549CL,0xEACA06A5L},{0x6048AC47L,(-1L),(-9L),0xEACA06A5L},{0L,0x59D19205L,0L,(-1L)},{0L,0x9938BFF1L,0L,0x9938BFF1L},{0L,0xB2CD5591L,(-9L),(-1L)}},{{0x6048AC47L,0xB2CD5591L,0x87CD549CL,0x9938BFF1L},{0x87CD549CL,0x9938BFF1L,0L,(-1L)},{0x87CD549CL,0x59D19205L,0x87CD549CL,0xEACA06A5L},{0x6048AC47L,(-1L),(-9L),0xEACA06A5L},{0L,0x59D19205L,0L,(-1L)},{0L,0x9938BFF1L,0L,0x9938BFF1L},{0x6048AC47L,0xEACA06A5L,0L,0xBD6EA76EL},{0L,0xEACA06A5L,(-9L),(-1L)},{(-9L),(-1L),0x6048AC47L,(-1L)},{(-9L),0x9938BFF1L,(-9L),0x59D19205L}},{{0L,(-1L),0L,0x59D19205L},{0x6048AC47L,0x9938BFF1L,0L,(-1L)},{0L,(-1L),0L,(-1L)},{0x6048AC47L,0xEACA06A5L,0L,0xBD6EA76EL},{0L,0xEACA06A5L,(-9L),(-1L)},{(-9L),(-1L),0x6048AC47L,(-1L)},{(-9L),0x9938BFF1L,(-9L),0x59D19205L},{0L,(-1L),0L,0x59D19205L},{0x6048AC47L,0x9938BFF1L,0L,(-1L)},{0L,(-1L),0L,(-1L)}}};
        const int *l_516[5][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int *l_517 = &l_510[2][4][2];
        int l_536 = 0x4EAD3F37L;
        int i, j, k;
        for (g_91 = 4; (g_91 >= 1); g_91 -= 1)
        {
            unsigned l_500 = 0xC4CCF5B0L;
            int *l_503 = &g_504;
            short *l_530 = &g_96;
            short l_534 = 0x2847L;
            if (l_500)
            {
                int l_501 = 1L;
                for (p_49 = 0; (p_49 <= 0); p_49 += 1)
                {
                    int **l_502[8] = {(void*)0,(void*)0,&g_140[3],(void*)0,(void*)0,&g_140[3],(void*)0,(void*)0};
                    int i;
                    for (l_500 = 0; (l_500 <= 0); l_500 += 1)
                    {
                        return p_52;
                    }
                    for (g_492 = 0; (g_492 <= 2); g_492 += 1)
                    {
                        int i, j;
                        (*p_52) = (*p_50);
                        g_140[g_91] = (void*)0;
                        (*p_50) = (p_49 < p_51);
                    }
                    if (l_501)
                        break;
                    (*g_421) = (l_503 = (void*)0);
                }
            }
            else
            {
                int **l_507 = &g_140[3];
                unsigned l_513 = 4294967295UL;
                int *l_514 = &l_510[2][4][2];
                unsigned **l_524 = (void*)0;
                (*g_506) = (*g_463);
                (*l_507) = (void*)0;
                (*l_514) = (((safe_lshift_func_uint16_t_u_u(p_51, ((l_510[2][4][2] | (l_511[0][3] == (!(l_512 != (g_299 == (void*)0))))) < (l_513 || ((*g_148) < ((*p_52) = ((*l_503) = (*p_50)))))))) <= p_49) > 8L);
                if ((*l_503))
                {
                    const int **l_515[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_515[i] = &g_148;
                    l_516[4][6] = &l_511[0][0];
                    if ((*p_52))
                        continue;
                    l_517 = l_503;
                    (*p_50) = (9UL > (safe_add_func_uint32_t_u_u((l_525 = (safe_sub_func_uint8_t_u_u(l_512, (safe_lshift_func_uint8_t_u_u((l_524 == (void*)0), (p_48 & 255UL)))))), l_511[0][4])));
                }
                else
                {
                    for (l_513 = 0; (l_513 <= 0); l_513 += 1)
                    {
                        (*l_507) = (void*)0;
                    }
                }
            }
            if (((safe_mod_func_uint32_t_u_u(0x6DFDA760L, (safe_lshift_func_int16_t_s_u(((*l_517) = ((*l_530) = 0x27ADL)), 1)))) != p_48))
            {
                int **l_531 = &g_140[3];
                (*l_531) = &l_510[2][4][2];
                (*p_50) = (*p_52);
            }
            else
            {
                unsigned *l_535 = &l_500;
                (*l_517) = ((safe_sub_func_int32_t_s_s((p_51 | ((*l_517) || p_51)), l_534)) != ((*p_50) = (((*l_535) = g_20[0][8]) == p_49)));
            }
        }
        (*l_517) = l_536;
    }
    return p_52;
}







static unsigned char func_56(unsigned * p_57, int * const p_58, unsigned char p_59, unsigned char p_60, unsigned char p_61)
{
    int l_300 = 0xB007968BL;
    unsigned l_335 = 8UL;
    unsigned l_376[7];
    volatile int l_401[8] = {1L,(-1L),1L,(-1L),1L,(-1L),1L,(-1L)};
    int *l_434[7] = {&l_300,&l_300,&l_300,&l_300,&l_300,&l_300,&l_300};
    unsigned char **l_448 = &g_417[0][1][1];
    short *l_480 = &g_207;
    const short *l_482 = &g_96;
    int **l_499 = &l_434[0];
    int i;
    for (i = 0; i < 7; i++)
        l_376[i] = 0x6A973241L;
    if (((((void*)0 != g_299) >= l_300) == 251UL))
    {
        unsigned short l_324 = 0x9E8CL;
        const unsigned *l_349 = &g_350[0][5];
        unsigned **l_362 = &g_235;
        unsigned ***l_361 = &l_362;
        (*g_301) = l_300;
        for (g_198 = 0; (g_198 <= 0); g_198 += 1)
        {
            int *l_307 = &g_44;
            const unsigned l_310 = 5UL;
            unsigned char *l_321 = &g_272;
            int l_348 = 0x37B44586L;
            for (g_164 = 0; (g_164 >= 0); g_164 -= 1)
            {
                unsigned l_306 = 5UL;
                int l_309 = 0xB4DC2EF2L;
                int *l_328[2][1];
                char l_334 = 1L;
                unsigned short * const l_360 = &g_198;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_328[i][j] = &l_300;
                }
            }
        }
    }
    else
    {
        int l_375[10] = {0xE32F0E82L,(-1L),0xE32F0E82L,0xE32F0E82L,(-1L),0xE32F0E82L,0xE32F0E82L,(-1L),0xE32F0E82L,0xE32F0E82L};
        volatile unsigned short **l_399 = &g_288[0];
        int *l_418[9] = {&g_91,&g_91,(void*)0,&g_91,&g_91,(void*)0,&g_91,&g_91,(void*)0};
        volatile int *l_494[8][7] = {{&l_401[2],&l_401[2],&l_401[0],&l_401[2],&l_401[2],&l_401[0],&l_401[2]},{&l_401[2],&l_401[4],&l_401[4],&l_401[2],&l_401[4],&l_401[4],&l_401[2]},{&l_401[4],&l_401[2],&l_401[4],&l_401[4],&l_401[2],&l_401[4],&l_401[4]},{&l_401[2],&l_401[2],&l_401[0],&l_401[2],&l_401[2],&l_401[0],&l_401[2]},{&l_401[2],&l_401[4],&l_401[4],&l_401[2],&l_401[4],&l_401[4],&l_401[2]},{&l_401[4],&l_401[2],&l_401[4],&l_401[4],&l_401[2],&l_401[4],&l_401[4]},{&l_401[2],&l_401[2],&l_401[0],&l_401[2],&l_401[2],&l_401[0],&l_401[2]},{&l_401[2],&l_401[4],&l_401[4],&l_401[2],&l_401[0],&l_401[0],&l_401[4]}};
        volatile int **l_493 = &l_494[5][1];
        short *l_497 = &g_96;
        int **l_498 = &l_434[1];
        int i, j;
lbl_436:
        if ((*p_58))
        {
            int *l_377[6][10] = {{&g_91,(void*)0,&g_44,&g_91,&g_91,&g_91,&g_91,(void*)0,&g_91,&g_91},{&g_91,(void*)0,&l_300,(void*)0,&g_91,&g_91,(void*)0,(void*)0,&g_91,&g_91},{&g_91,&g_91,&g_44,(void*)0,&g_91,&g_91,(void*)0,&g_44,&g_91,&g_91},{&g_91,(void*)0,&g_44,&g_91,&g_91,&g_91,&g_91,(void*)0,&g_91,&g_91},{&g_91,(void*)0,&l_300,(void*)0,&g_91,&g_91,(void*)0,(void*)0,&g_91,&g_91},{&g_91,&g_91,&g_44,(void*)0,&g_91,&g_91,(void*)0,&g_44,&g_91,&g_91}};
            int **l_378 = &g_140[4];
            int i, j;
            l_375[3] = (*p_58);
            l_300 = l_376[0];
            l_300 = (*p_58);
            (*l_378) = (void*)0;
        }
        else
        {
            int **l_379 = &g_140[1];
            char *l_393 = (void*)0;
            char **l_392 = &l_393;
            int l_409 = (-6L);
            unsigned char *l_415[8][6][5] = {{{(void*)0,&g_134,(void*)0,&g_272,&g_134},{&g_134,&g_272,&g_272,(void*)0,(void*)0},{(void*)0,&g_134,&g_134,&g_272,&g_134},{(void*)0,&g_134,&g_272,(void*)0,&g_272},{&g_134,&g_134,(void*)0,&g_134,&g_272},{&g_134,&g_134,(void*)0,&g_272,&g_272}},{{&g_272,&g_272,(void*)0,&g_272,&g_134},{&g_134,(void*)0,&g_134,&g_134,(void*)0},{&g_134,&g_134,&g_134,&g_272,&g_134},{&g_272,&g_134,(void*)0,&g_272,(void*)0},{(void*)0,&g_272,&g_272,(void*)0,(void*)0},{&g_272,&g_134,(void*)0,(void*)0,&g_272}},{{(void*)0,&g_272,(void*)0,&g_272,&g_134},{&g_134,&g_272,(void*)0,(void*)0,&g_272},{&g_134,&g_134,&g_134,(void*)0,&g_272},{(void*)0,(void*)0,(void*)0,&g_272,&g_134},{&g_134,&g_272,&g_272,&g_272,&g_134},{&g_272,&g_134,&g_272,&g_134,&g_272}},{{&g_134,&g_134,&g_272,&g_272,(void*)0},{&g_134,&g_272,&g_134,&g_134,&g_134},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_272,&g_134,(void*)0,&g_134,&g_134},{(void*)0,&g_272,&g_272,&g_134,(void*)0},{&g_272,&g_272,(void*)0,&g_134,&g_134}},{{(void*)0,&g_134,&g_134,&g_272,(void*)0},{&g_134,&g_272,(void*)0,(void*)0,(void*)0},{&g_134,(void*)0,(void*)0,&g_134,&g_272},{&g_134,&g_134,&g_134,&g_134,&g_272},{(void*)0,&g_272,&g_134,(void*)0,&g_272},{(void*)0,&g_134,(void*)0,&g_134,&g_134}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_272,(void*)0,&g_134,&g_272,(void*)0},{&g_134,&g_272,&g_134,&g_134,&g_134},{(void*)0,&g_134,(void*)0,&g_272,(void*)0},{&g_134,&g_134,&g_134,&g_272,&g_272},{&g_272,&g_272,(void*)0,&g_134,&g_272}},{{(void*)0,&g_134,&g_272,&g_272,&g_272},{(void*)0,(void*)0,&g_134,&g_272,(void*)0},{(void*)0,&g_134,&g_134,&g_272,&g_272},{&g_134,(void*)0,(void*)0,&g_272,(void*)0},{&g_134,&g_134,&g_272,&g_134,&g_272},{&g_272,&g_272,&g_134,&g_272,(void*)0}},{{&g_272,&g_134,(void*)0,&g_272,&g_272},{&g_134,(void*)0,&g_134,&g_134,(void*)0},{&g_272,&g_134,&g_272,&g_134,&g_134},{(void*)0,&g_272,(void*)0,&g_272,(void*)0},{(void*)0,(void*)0,&g_134,&g_272,(void*)0},{&g_134,&g_272,&g_272,(void*)0,&g_272}}};
            unsigned char **l_414 = &l_415[5][1][1];
            int i, j, k;
lbl_382:
            (*l_379) = (void*)0;
            for (l_300 = 0; (l_300 < 15); ++l_300)
            {
                int *l_383[9][10] = {{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&l_300},{&l_300,&l_300,&g_91,&l_300,&l_300,&l_300,&l_300,&g_91,&l_300,&g_44},{&g_44,&l_300,&g_44,&l_300,&g_44,&g_44,&l_300,&g_44,&l_300,&g_44}};
                unsigned char *l_395 = &g_134;
                unsigned char **l_394 = &l_395;
                int i, j;
                if (l_300)
                    goto lbl_382;
                (*l_379) = l_383[0][5];
                if (g_164)
                    goto lbl_382;
                for (g_318 = (-4); (g_318 <= 54); g_318 = safe_add_func_uint16_t_u_u(g_318, 2))
                {
                    unsigned char ***l_396 = (void*)0;
                    unsigned char ***l_397 = &l_394;
                    const int l_398 = (-1L);
                    if ((safe_mod_func_int16_t_s_s(g_239[0][2], (safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((g_299 == l_392), ((*g_148) ^ (((((*l_397) = l_394) != &l_395) ^ ((0xE7D8L & (0x7084E494L != ((((~p_59) || p_61) && l_398) >= p_59))) < g_20[0][3])) >= g_198)))), 9)))))
                    {
                        short l_402 = 0x3C09L;
                        unsigned short *l_405 = &g_239[3][6];
                        const unsigned *l_406 = &g_350[0][5];
                        l_399 = &g_288[0];
                        if ((*p_58))
                            continue;
                        l_401[0] = g_400;
                        (*l_379) = func_62(((**g_287) && (p_61 < ((l_402 || l_398) || (p_59 <= ((*l_405) = (safe_rshift_func_int8_t_s_u(l_398, 1))))))), l_406, (*l_379), l_402);
                    }
                    else
                    {
                        (*l_379) = (*g_141);
                    }
                    for (g_272 = 0; (g_272 <= 0); g_272 += 1)
                    {
                        int i;
                        l_409 = ((safe_lshift_func_int8_t_s_u(l_376[(g_272 + 4)], 4)) | g_350[0][5]);
                    }
                    for (p_60 = 0; (p_60 != 56); p_60++)
                    {
                        return g_7[3];
                    }
                    for (g_91 = 0; (g_91 <= (-2)); g_91 = safe_sub_func_int8_t_s_s(g_91, 3))
                    {
                        g_416 = l_414;
                    }
                }
            }
        }
        if (((((l_300 = 0xD6536154L) & ((p_61 & (safe_rshift_func_uint8_t_u_s(l_376[0], 6))) >= (*p_58))) & (*g_301)) == l_376[0]))
        {
            int l_422 = 0x451FEA3CL;
            const unsigned *l_425 = &g_426;
            const char l_429 = 2L;
            short l_456 = 5L;
            for (g_272 = 0; (g_272 <= 0); g_272 += 1)
            {
                char l_435 = 0L;
                int l_441 = 0L;
                int *l_443 = &g_91;
                for (g_198 = 0; (g_198 <= 0); g_198 += 1)
                {
                    const unsigned *l_423 = (void*)0;
                    const unsigned **l_424[1];
                    int l_432 = 0x7F1E8732L;
                    unsigned short *l_433 = &g_318;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_424[i] = &l_423;
                    (*g_421) = g_325[g_198];
                    l_434[0] = func_62(l_422, p_57, func_62(g_7[2], (l_425 = l_423), &l_300, (safe_lshift_func_uint8_t_u_u(l_429, 7))), ((*l_433) = (l_422 > (((safe_rshift_func_uint16_t_u_u((0L ^ 65534UL), p_61)) >= l_432) == g_272))));
                }
                for (g_91 = 0; (g_91 <= 0); g_91 += 1)
                {
                    int l_438 = (-1L);
                    if (l_435)
                    {
                        int **l_437 = &l_418[1];
                        if (g_91)
                            goto lbl_436;
                        (*l_437) = &l_300;
                        l_438 = (l_422 = 0x305FA41EL);
                    }
                    else
                    {
                        int *l_439 = (void*)0;
                        (*g_440) = l_439;
                        if (l_435)
                            break;
                    }
                    l_441 = l_429;
                }
                for (g_368 = 0; (g_368 <= 0); g_368 += 1)
                {
                    const int **l_442[4][7] = {{&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148},{&g_148,&g_148,(void*)0,&g_148,&g_148,&g_148,&g_148},{(void*)0,&g_148,&g_148,(void*)0,&g_148,&g_148,&g_148},{&g_148,&g_148,&g_148,(void*)0,&g_148,&g_148,(void*)0}};
                    int i, j;
                    (*g_308) = p_58;
                    l_443 = (void*)0;
                    for (g_198 = 0; g_198 < 10; g_198 += 1)
                    {
                        l_375[g_198] = 0x37ED4D81L;
                    }
                    if (l_300)
                        goto lbl_436;
                }
            }
            for (p_60 = 0; (p_60 == 33); p_60++)
            {
                short l_449 = (-1L);
                int l_450 = 1L;
                l_422 = 0x504E397CL;
                if ((*p_58))
                    break;
                for (g_207 = 0; (g_207 <= 6); g_207 += 1)
                {
                    unsigned l_452 = 8UL;
                    int *l_455 = &l_450;
                    int l_460 = (-4L);
                    char *l_466 = &g_368;
                    char **l_465[1];
                    unsigned char ***l_472 = &l_448;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_465[i] = &l_466;
                    if (((*p_58) >= ((safe_rshift_func_uint16_t_u_u((l_448 != l_448), l_422)) & (l_449 && g_368))))
                    {
                        int **l_451 = &l_434[0];
                        l_422 = (l_450 = (*p_58));
                        if ((*g_311))
                            break;
                        (*l_451) = (void*)0;
                    }
                    else
                    {
                        unsigned **l_453 = (void*)0;
                        unsigned ***l_454 = &l_453;
                        unsigned char *l_459 = &g_272;
                        unsigned short *l_461 = &g_318;
                        char ***l_467 = &l_465[0];
                        l_455 = func_62(((*p_57) < ((*p_57) != (*p_57))), func_62(l_452, func_62(p_59, p_57, &l_450, (&p_57 == ((*l_454) = l_453))), &g_44, g_20[1][3]), p_57, g_20[0][3]);
                        (*g_463) = ((*g_141) = func_62((l_456 < (safe_lshift_func_uint8_t_u_u(((*l_459) = p_59), 0))), p_57, p_57, ((*l_461) = l_460)));
                        (*l_467) = l_465[0];
                    }
                    l_422 = (safe_add_func_uint8_t_u_u(0x96L, ((safe_rshift_func_int8_t_s_s(((void*)0 == l_472), (safe_rshift_func_int8_t_s_s(((1L | 0xDDL) == ((*p_57) != (l_450 < (*l_455)))), (((0x1196L != l_422) <= 4294967295UL) & 1UL))))) | (-1L))));
                }
            }
        }
        else
        {
            char l_475 = 0x45L;
            unsigned char *l_476 = (void*)0;
            unsigned char *l_477 = &g_272;
            short **l_481[2][5] = {{&l_480,&l_480,&l_480,&l_480,&l_480},{&l_480,&l_480,&l_480,&l_480,&l_480}};
            unsigned short l_489[8][1][6] = {{{65533UL,6UL,0x79D5L,0xC850L,0x79D5L,6UL}},{{0xA840L,0UL,0x2609L,0xC850L,0UL,0x79D5L}},{{65533UL,0x79D5L,0x2609L,0xA840L,6UL,6UL}},{{65531UL,0x79D5L,0x79D5L,65531UL,0UL,0x2FF1L}},{{65531UL,0UL,0x2FF1L,0xA840L,0x79D5L,0x2FF1L}},{{65533UL,6UL,0x79D5L,0xC850L,0x79D5L,6UL}},{{0xA840L,0UL,0x2609L,0xC850L,0UL,0x79D5L}},{{65533UL,0x79D5L,0x2609L,0xA840L,0x2FF1L,0x2FF1L}}};
            unsigned short *l_490 = &l_489[0][0][5];
            unsigned *l_491[5][4][10] = {{{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]}},{{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]}},{{&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2],&l_335,&l_376[5],&l_376[5],&l_335,&l_376[2]},{&l_335,&l_376[5],&l_376[5],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0}},{{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0}},{{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0},{&l_376[5],&l_376[2],&l_376[2],&l_376[5],(void*)0,&l_376[5],&l_376[2],&l_376[2],(void*)0,&l_376[2]},{(void*)0,&l_335,&l_335,(void*)0,&l_376[2],(void*)0,&l_335,&l_335,(void*)0,&l_376[2]}}};
            int i, j, k;
            (*g_301) = (((((*l_477) = l_475) == (0xC5L >= (safe_add_func_uint8_t_u_u(((l_480 = l_480) == l_482), ((((safe_add_func_int32_t_s_s((-1L), ((void*)0 != &g_288[0]))) ^ (((g_492 = (safe_add_func_uint16_t_u_u(((*l_490) = l_489[0][0][5]), (((p_59 > (-1L)) >= 0x1BC52FFDL) <= 0x33ADBBC0L)))) <= 0x5EA07931L) > l_475)) <= l_475) || l_489[0][0][5]))))) | l_475) ^ (*p_58));
        }
        (*l_493) = &l_401[1];
        (*l_498) = func_62((safe_add_func_uint16_t_u_u(p_61, (((*l_480) = (p_59 > ((!p_59) > (~g_20[1][4])))) < ((*l_497) = g_134)))), l_418[1], l_418[7], ((p_59 < p_61) == p_61));
    }
    (*l_499) = (*g_220);
    return p_61;
}







static unsigned * func_62(char p_63, const unsigned * p_64, int * p_65, unsigned short p_66)
{
    int *l_92 = &g_91;
    int l_94[4];
    unsigned l_131 = 0xF94CC8AAL;
    int *l_144 = (void*)0;
    unsigned char *l_156 = (void*)0;
    unsigned char **l_155 = &l_156;
    const unsigned short l_200 = 0x7A49L;
    int l_203 = 0x3A1466A0L;
    unsigned * const *l_237 = (void*)0;
    unsigned short *l_238 = &g_239[0][2];
    int i;
    for (i = 0; i < 4; i++)
        l_94[i] = (-4L);
    for (g_8 = 0; (g_8 >= 4); g_8++)
    {
        int *l_90 = &g_91;
        for (p_63 = 22; (p_63 <= (-21)); p_63 = safe_sub_func_uint16_t_u_u(p_63, 6))
        {
            int **l_93 = &l_92;
            short *l_95[7][8] = {{&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96},{(void*)0,&g_96,&g_96,&g_96,&g_96,(void*)0,&g_96,&g_96},{&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,(void*)0},{&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96},{(void*)0,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96},{&g_96,&g_96,(void*)0,&g_96,&g_96,&g_96,&g_96,(void*)0},{&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96,&g_96}};
            int i, j;
            (*g_97) = (0xE9D1BBA4L == (safe_sub_func_uint32_t_u_u(g_7[4], (g_7[3] > ((g_7[1] || ((((&g_20[1][3] != p_64) <= (safe_rshift_func_int16_t_s_u((l_94[2] = (safe_lshift_func_uint8_t_u_s(p_66, ((safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((l_90 = (void*)0) == (p_65 = ((*l_93) = l_92))) == p_63), l_94[2])), g_44)) > 0x9ED0L), 12)) ^ 0x1D611CF5L)))), 1))) >= g_44) & p_66)) != 0xCB16C627L)))));
        }
    }
    return &g_20[1][0];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_239[i][j], "g_239[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_350[i][j], "g_350[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_400, "g_400", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_994, "g_994", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1032[i], "g_1032[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1102, "g_1102", print_hash_value);
    transparent_crc(g_1184, "g_1184", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1284, "g_1284", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1292[i], "g_1292[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
