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
   volatile unsigned char f0;
   const short f1;
   volatile char f2;
   unsigned f3;
};

union U1 {
   unsigned short f0;
};

union U2 {
   unsigned f0;
   short f1;
   const volatile char * const volatile f2;
   volatile char * f3;
   unsigned short f4;
};


static char g_7 = 1L;
static int g_9 = 9L;
static unsigned char g_24 = 255UL;
static int g_25 = (-1L);
static unsigned g_48 = 0x585FAFE4L;
static unsigned g_57 = 0UL;
static unsigned g_71 = 0xED469F41L;
static int g_92 = 0x4AB72231L;
static int * volatile g_93 = (void*)0;
static int g_95 = 0x04BB84A8L;
static const int ** volatile g_96 = (void*)0;
static const int *g_98 = &g_95;
static const int ** volatile g_97 = &g_98;
static unsigned char *g_105 = &g_24;
static unsigned char ** const g_104 = &g_105;
static unsigned char **g_121 = &g_105;
static unsigned char *** volatile g_120 = &g_121;
static union U1 g_123 = {0x372BL};
static int * volatile g_130 = &g_9;
static const union U0 g_132 = {255UL};
static const union U0 *g_134 = (void*)0;
static const union U0 ** volatile g_133 = &g_134;
static int g_141 = 0x0146E063L;
static union U0 g_147 = {0x6DL};
static const int ** volatile g_169 = (void*)0;
static const int ** volatile g_170 = (void*)0;
static const int ** volatile g_171 = &g_98;
static const int ** volatile g_181 = &g_98;
static int * volatile g_193 = &g_95;
static volatile union U2 *g_197 = (void*)0;
static volatile union U2 ** volatile g_198 = &g_197;
static unsigned short *g_203 = &g_123.f0;
static unsigned short g_216 = 0x224EL;
static short g_249 = 0L;
static union U2 g_251 = {1UL};
static union U0 g_261 = {255UL};
static char *g_265 = &g_7;
static char **g_264 = &g_265;
static char *** volatile g_266 = &g_264;
static int *g_282 = &g_95;
static unsigned short **g_285 = (void*)0;
static int * volatile g_290 = &g_141;
static volatile union U2 ** const volatile g_304 = &g_197;
static char g_307 = (-1L);
static volatile int g_324 = (-4L);
static unsigned **g_349 = (void*)0;
static unsigned *g_352 = (void*)0;
static unsigned **g_351 = &g_352;
static const int ** volatile g_372 = &g_98;
static int *g_383 = (void*)0;
static int ** const g_382 = &g_383;
static int ** const *g_381 = &g_382;
static const int ** volatile g_397 = &g_98;
static volatile int g_398 = 0x513A6BB2L;
static union U0 *g_411 = (void*)0;
static union U0 *g_413 = &g_147;
static union U0 ** volatile g_412 = &g_413;
static union U0 ** volatile g_415 = (void*)0;
static union U0 ** volatile g_420 = &g_411;
static union U0 ** volatile g_421 = &g_411;
static const union U1 g_422 = {65535UL};
static int * volatile g_433 = (void*)0;
static int * volatile g_434 = &g_9;
static int * volatile g_451 = &g_95;
static union U0 g_466 = {248UL};
static int **g_494 = &g_383;
static int ***g_493 = &g_494;
static int ***g_500 = (void*)0;
static union U1 *g_503 = &g_123;
static union U1 ** volatile g_502 = &g_503;
static int ** volatile g_508 = &g_282;
static int * const volatile g_510 = (void*)0;
static int ** volatile g_523 = &g_282;
static unsigned *** volatile g_534 = &g_349;
static unsigned ***g_552 = &g_351;
static volatile unsigned short g_564 = 65527UL;
static unsigned char g_571 = 1UL;
static union U2 ** volatile g_612 = (void*)0;
static const int ** volatile g_654 = &g_98;
static unsigned char ***g_679 = (void*)0;
static int * volatile g_712 = &g_141;
static volatile union U2 g_718 = {0x5C5CA445L};
static union U0 ** volatile g_733 = &g_411;
static const int ** volatile g_748 = (void*)0;
static const int ** volatile g_749 = &g_98;
static const short *g_757 = &g_251.f1;
static const short **g_756 = &g_757;
static unsigned char ** const *g_766 = &g_104;
static unsigned char ** const **g_765 = &g_766;
static int ** volatile g_774 = &g_282;
static int ** volatile g_793 = &g_282;
static int ** volatile g_809 = &g_282;
static int ** volatile g_813 = &g_282;
static volatile int *g_858 = &g_398;
static volatile int ** volatile g_857 = &g_858;
static volatile int ** volatile *g_856 = &g_857;
static volatile int ** volatile ** volatile g_855 = &g_856;
static volatile int ** volatile ** volatile * const volatile g_854 = &g_855;
static int * volatile g_865 = &g_141;
static int * volatile g_901 = &g_95;
static const int ** volatile g_915 = &g_98;
static const int ** volatile g_935 = &g_98;
static union U1 *g_952 = &g_123;
static int ** volatile g_953 = &g_282;
static int ** volatile g_979 = &g_282;
static union U1 *g_999 = &g_123;
static unsigned g_1006 = 4294967289UL;
static unsigned g_1032 = 4294967295UL;
static volatile char g_1041 = (-1L);
static int ** volatile g_1050 = &g_282;
static int * volatile g_1069 = &g_141;
static int *** volatile g_1091 = (void*)0;
static int **g_1094 = &g_282;
static int *** volatile g_1093 = &g_1094;
static int * volatile g_1095 = &g_92;
static const int ** volatile g_1117 = &g_98;
static volatile unsigned g_1135 = 3UL;
static char * const *g_1146 = &g_265;
static char * const ** volatile g_1145 = &g_1146;
static int * const *g_1151 = &g_383;
static int * const **g_1150 = &g_1151;
static int * const ***g_1149 = &g_1150;
static unsigned g_1173 = 1UL;
static const int ** volatile g_1196 = &g_98;
static volatile int *g_1206 = (void*)0;
static volatile int *g_1237 = &g_324;
static const int ** volatile g_1252 = (void*)0;
static const int ** volatile g_1253 = (void*)0;
static const int ** volatile g_1254 = &g_98;
static union U2 g_1262 = {0xF00193CFL};
static union U1 g_1305 = {0x74BEL};
static union U1 *g_1304 = &g_1305;
static char g_1346 = (-6L);
static const volatile union U1 ** const volatile * volatile g_1350 = (void*)0;
static const volatile union U1 ** const volatile * volatile *g_1349 = &g_1350;
static union U2 *g_1364 = &g_1262;
static union U2 ** volatile g_1363 = &g_1364;
static union U2 ** volatile g_1386 = (void*)0;



static unsigned func_1(void);
static union U1 * func_2(char * p_3, unsigned p_4, int p_5);
static char func_12(union U1 p_13, unsigned short p_14, union U1 * p_15, unsigned short p_16, unsigned p_17);
static union U1 * func_21(unsigned char p_22);
static int * func_26(unsigned p_27, const int * p_28, unsigned p_29, const union U1 p_30);
static int * func_31(int p_32);
static int * func_36(union U1 * p_37, unsigned short * p_38, int * p_39);
static union U1 * func_40(short p_41);
static unsigned char ** const func_51(unsigned p_52, unsigned char p_53, int p_54);
static const int * const func_73(unsigned short p_74, short p_75, const int p_76, char p_77, char * p_78);
static unsigned func_1(void)
{
    char *l_6 = &g_7;
    int *l_8 = &g_9;
    union U1 **l_1429 = &g_999;
    (*l_1429) = func_2(l_6, g_7, ((*l_8) = 0x166941FCL));
    (*g_1094) = l_8;
    (*g_282) = ((*l_8) ^ ((*g_105) > (*g_265)));
    (*l_8) = (safe_add_func_int32_t_s_s((*l_8), (*l_8)));
    return g_261.f2;
}







static union U1 * func_2(char * p_3, unsigned p_4, int p_5)
{
    union U1 l_18 = {65533UL};
    unsigned short *l_19 = (void*)0;
    int l_20 = (-1L);
    unsigned char *l_23 = &g_24;
    unsigned short **l_429 = &l_19;
    unsigned short ***l_428 = &l_429;
    union U1 l_442 = {65535UL};
    unsigned l_445 = 0x3B8C4658L;
    char ***l_459 = &g_264;
    int ***l_501 = &g_494;
    union U1 **l_506 = &g_503;
    union U1 l_515 = {0x051BL};
    int l_519 = (-3L);
    union U1 *l_521 = &l_515;
    const int *l_522 = &l_20;
    unsigned l_583 = 0xA4064B14L;
    unsigned char ***l_585 = &g_121;
    unsigned short l_607 = 65535UL;
    union U2 *l_611 = &g_251;
    const int *l_651 = &g_95;
    unsigned l_666 = 0x0442BE3EL;
    union U1 *l_672 = &g_123;
    volatile union U2 *l_717 = &g_718;
    union U0 *l_732 = &g_261;
    int l_777 = 0x98C12A87L;
    unsigned **l_853 = &g_352;
    const union U1 * const **l_899 = (void*)0;
    union U1 *l_951 = &l_442;
    union U1 *l_961 = &l_18;
    union U1 *l_962 = &l_515;
    union U1 *l_1008 = (void*)0;
    unsigned short l_1044 = 0xA868L;
    const unsigned l_1045 = 0x1A35BF74L;
    int l_1067 = 6L;
    int l_1077 = 0x8D74EBE6L;
    unsigned l_1134 = 4294967295UL;
    unsigned char l_1384 = 0x0EL;
    (*g_290) = (safe_mod_func_int8_t_s_s(func_12(l_18, (l_20 = (p_5 || 0xDDD9L)), func_21((g_25 = ((*l_23) = g_9))), (p_5 < (safe_rshift_func_uint8_t_u_u(((l_428 != &l_429) == 0x8C10D492L), 2))), l_18.f0), p_5));
    if ((**g_171))
    {
        union U1 l_439 = {0UL};
        int l_446 = 0xA3469817L;
        union U2 *l_460 = &g_251;
        union U0 *l_465 = &g_466;
        unsigned *l_481 = &g_251.f0;
        int l_485 = 0xC116A2CAL;
        union U1 **l_504 = &g_503;
        unsigned short *l_518 = (void*)0;
        int *l_520 = &l_485;
        if ((safe_rshift_func_uint8_t_u_u(func_12(l_439, l_439.f0, func_40(((safe_mod_func_uint8_t_u_u((**g_121), func_12(l_442, (safe_lshift_func_int16_t_s_u(l_445, l_446)), &g_123, l_439.f0, (p_5 < p_4)))) < l_439.f0)), p_4, p_4), 6)))
        {
            const int **l_447 = &g_98;
            union U1 *l_450 = &l_439;
            unsigned *l_454 = &g_48;
            unsigned char l_455 = 0UL;
            int *l_456 = &g_92;
            (*l_447) = (*g_171);
            (*g_451) = func_12(g_422, (safe_sub_func_uint32_t_u_u((**l_447), 4294967290UL)), l_450, l_442.f0, l_439.f0);
            (*l_456) = (func_12(l_18, ((l_446 = ((**g_104) = ((void*)0 != l_23))) & (safe_add_func_uint8_t_u_u((&p_4 == ((*g_351) = &p_4)), ((l_454 = &l_445) != &p_4)))), &l_18, (~(l_445 >= 0xE1L)), g_261.f2) <= l_455);
        }
        else
        {
            int *l_461 = &g_9;
            union U0 *l_462 = &g_261;
            union U0 **l_463 = (void*)0;
            union U0 **l_464 = &g_413;
            (*l_461) = (safe_sub_func_int8_t_s_s((l_459 != &g_264), ((void*)0 == l_460)));
            l_465 = ((*l_464) = l_462);
        }
        if ((safe_lshift_func_int16_t_s_u(l_442.f0, (*g_203))))
        {
            const int **l_469 = &g_98;
            unsigned l_470 = 0xD88ABFC8L;
            int l_484 = (-10L);
            union U1 l_492 = {1UL};
            int ****l_495 = (void*)0;
            int ****l_496 = (void*)0;
            int ****l_497 = (void*)0;
            int ****l_498 = (void*)0;
            int ****l_499 = &g_493;
            union U1 ***l_505 = (void*)0;
            int *l_507 = &g_95;
            (*l_469) = (*g_181);
            (*g_434) = (l_470 = (-1L));
            for (g_147.f3 = (-19); (g_147.f3 == 15); g_147.f3 = safe_add_func_uint16_t_u_u(g_147.f3, 1))
            {
                int *l_473 = &l_446;
                int *l_478 = &g_95;
                (*l_469) = (l_473 = &g_9);
                l_20 = ((safe_sub_func_uint32_t_u_u(p_5, ((*l_478) = ((*l_473) = ((!p_4) <= (**l_469)))))) && ((safe_add_func_int32_t_s_s((l_446 = p_4), (0xC7L != ((**g_121) && ((*g_351) == (l_481 = &p_4)))))) != ((safe_rshift_func_uint16_t_u_u((((+(l_485 = (l_484 = (*g_203)))) == g_132.f0) > p_5), p_4)) ^ p_4)));
                for (g_249 = 0; (g_249 != 24); g_249 = safe_add_func_int32_t_s_s(g_249, 1))
                {
                    short *l_488 = &g_251.f1;
                    union U1 *l_491 = &l_18;
                    (*l_478) = (((*l_488) = 0x3959L) | (((void*)0 == (*g_381)) == (**g_104)));
                    for (l_484 = 0; (l_484 >= (-5)); l_484 = safe_sub_func_uint16_t_u_u(l_484, 1))
                    {
                        return &g_123;
                    }
                    return &g_123;
                }
                (*l_478) = p_5;
            }
            (*l_507) = (!func_12(l_492, p_4, &g_123, (g_502 == (l_506 = l_504)), l_485));
        }
        else
        {
            int *l_509 = &g_9;
            (*g_508) = &p_5;
            l_509 = (void*)0;
            (*g_282) = l_446;
        }
        l_20 = p_4;
        (*g_523) = func_26((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((func_12(l_515, l_515.f0, (*l_506), l_439.f0, p_4) || func_12((*g_503), l_20, (l_521 = func_40((safe_add_func_int32_t_s_s(((*l_520) = (l_446 = ((l_519 = l_18.f0) > p_4))), p_4)))), p_5, l_439.f0)), 3)) && 0x7385L), p_5)), l_522, p_4, (*g_503));
    }
    else
    {
        int l_526 = 1L;
        unsigned short *l_529 = &g_251.f4;
        union U1 *l_545 = &g_123;
        int *l_630 = &l_519;
        short l_655 = 0x215BL;
        union U1 l_671 = {0x801BL};
        unsigned char ***l_678 = &g_121;
        unsigned short l_729 = 0x34CBL;
        char *l_747 = &g_307;
        unsigned char l_771 = 0UL;
        char ***l_783 = &g_264;
        union U0 *l_788 = &g_147;
        int *l_812 = &l_20;
        const int *l_823 = &l_20;
        unsigned l_843 = 0x5568DCDDL;
        unsigned char *l_861 = &g_24;
        unsigned short l_880 = 0xFFDBL;
        union U0 **l_926 = &l_788;
        union U0 ***l_925 = &l_926;
        unsigned l_948 = 0UL;
        union U1 *l_950 = &l_671;
        union U1 *l_998 = &l_671;
        if ((safe_lshift_func_int16_t_s_s(((+((l_526 || 0x11E88380L) < ((((**g_104) = (((**g_264) = (safe_lshift_func_int16_t_s_s(func_12(((*l_521) = (*g_503)), ((*l_529) = l_526), func_40((*l_522)), g_216, (safe_lshift_func_int16_t_s_s((((0x8FCCC502L || (*l_522)) >= g_307) && p_5), g_249))), 13))) == 0xDFL)) ^ g_141) >= (*l_522)))) > 5UL), (*l_522))))
        {
            const short l_537 = 0x438EL;
            unsigned ***l_551 = &g_349;
            short l_565 = (-2L);
            union U1 l_572 = {65532UL};
            unsigned l_608 = 0x6D5E3203L;
            short *l_620 = &g_251.f1;
            short **l_619 = &l_620;
            int ****l_634 = &g_500;
            unsigned char ***l_639 = (void*)0;
            const unsigned char l_645 = 0xD4L;
            char l_646 = 0x35L;
            int l_662 = 4L;
            unsigned short ***l_677 = (void*)0;
            if ((*l_522))
            {
                unsigned **l_532 = &g_352;
                unsigned ***l_533 = &g_351;
                int l_538 = 0xF09E82F9L;
                int *l_539 = &g_92;
                int *l_540 = &g_95;
                unsigned *l_567 = &g_48;
                short *l_568 = &l_565;
                union U1 *l_590 = &l_572;
                (*g_534) = ((*l_533) = l_532);
                (*l_540) = (+((*l_539) = ((safe_lshift_func_int8_t_s_u(l_537, 4)) < (0xCA85L <= l_538))));
                if (((-3L) | (safe_sub_func_uint8_t_u_u((1UL > 0xB173L), ((safe_rshift_func_int16_t_s_u(0xE6C3L, 9)) < 1L)))))
                {
                    return l_545;
                }
                else
                {
                    unsigned l_553 = 0x9BC15D0EL;
                    int **l_566 = &l_539;
                    for (g_141 = 0; (g_141 >= (-5)); g_141--)
                    {
                        int **l_548 = &g_282;
                        (*l_548) = &p_5;
                        l_553 = ((((*l_540) = (+(safe_sub_func_int8_t_s_s(((***l_459) = ((void*)0 != p_3)), p_5)))) != (((g_552 = l_551) == (void*)0) > (***g_120))) ^ p_5);
                        return (*l_506);
                    }
                    (*l_506) = (*l_506);
                    (*l_566) = &l_519;
                    (*l_506) = (*g_502);
                }
                if ((func_12(((*l_545) = (**g_502)), (l_519 = 7UL), g_503, g_95, p_4) <= ((*l_568) = ((l_20 = ((*l_567) = p_5)) < l_526))))
                {
                    unsigned l_569 = 3UL;
                    unsigned char *l_570 = &g_571;
                    unsigned short l_593 = 0xA2EFL;
                    int **l_594 = (void*)0;
                    int **l_595 = &g_282;
                    if (((((((*g_502) = (*g_502)) == (void*)0) && ((*l_428) != &g_203)) < p_5) < ((*l_570) = (l_569 = ((*l_23) = 0x74L)))))
                    {
                        union U1 *l_584 = &l_515;
                        (*l_540) = func_12(l_572, (((func_12((**g_502), (safe_lshift_func_int8_t_s_u((l_537 ^ (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_569, (((*l_23) = (**g_121)) > (*p_3)))), ((*l_570) = (((-1L) && (l_526 & (safe_lshift_func_int16_t_s_u(l_569, (*g_203))))) & 1UL)))), 0x1E056168L))), l_569)), &g_123, (*g_203), l_583) & 65535UL) < l_526) && l_526), l_584, l_526, l_526);
                        (*l_540) = ((((((void*)0 == l_585) | (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((l_526 & (func_12((*l_545), (*g_203), l_590, p_5, (safe_sub_func_int16_t_s_s((&l_572 != (void*)0), l_565))) ^ l_526)), l_593)), 3))) >= l_526) == (*p_3)) ^ g_92);
                    }
                    else
                    {
                        (*l_539) = (0x1A9BFB08L == 0xF55CD5EAL);
                        (*g_130) = ((*l_539) = p_4);
                    }
                    (*l_595) = (void*)0;
                    p_5 = p_5;
                    for (g_95 = (-1); (g_95 <= 5); g_95 = safe_add_func_int16_t_s_s(g_95, 6))
                    {
                        return (*g_502);
                    }
                }
                else
                {
                    union U1 *l_601 = &g_123;
                    (*l_540) = l_565;
                    (*l_540) = (-10L);
                    for (g_216 = 0; (g_216 < 52); g_216++)
                    {
                        union U1 *l_600 = &l_572;
                        return l_601;
                    }
                }
            }
            else
            {
                union U1 l_604 = {0x0068L};
                int ***l_622 = &g_494;
                l_519 = (((((safe_rshift_func_int8_t_s_s(func_12(l_604, p_4, (*g_502), l_604.f0, l_526), (safe_sub_func_uint8_t_u_u(l_607, ((1L != l_608) != 0x9EL))))) > l_526) == (*g_265)) | p_4) <= (*p_3));
                for (l_442.f0 = (-4); (l_442.f0 < 32); l_442.f0++)
                {
                    union U2 **l_613 = &l_611;
                    short *l_615 = (void*)0;
                    short **l_614 = &l_615;
                    short ***l_616 = &l_614;
                    short ***l_617 = (void*)0;
                    short ***l_618 = (void*)0;
                    int **l_621 = &g_282;
                    (*l_613) = l_611;
                    l_619 = ((*l_616) = l_614);
                    (*l_621) = &p_5;
                }
                (*g_552) = (*g_552);
                if (((void*)0 == l_622))
                {
                    int *l_623 = &l_20;
                    int *l_624 = &g_141;
                    (*l_624) = ((*l_623) = 1L);
                    for (g_9 = (-22); (g_9 == 22); ++g_9)
                    {
                        (*l_624) = (-1L);
                        (*l_624) = l_604.f0;
                    }
                    for (l_604.f0 = (-2); (l_604.f0 <= 26); l_604.f0++)
                    {
                        unsigned short **l_629 = &g_203;
                        int **l_631 = &l_624;
                        (*l_631) = func_36(l_545, ((*l_629) = ((**l_428) = (**l_428))), l_630);
                        l_519 = p_5;
                    }
                }
                else
                {
                    int l_644 = 0x3386B898L;
                    union U2 * const *l_650 = &l_611;
                    const int **l_652 = &l_522;
                    const int **l_653 = (void*)0;
                    if ((0xE7L <= (*g_105)))
                    {
                        int ****l_633 = &g_500;
                        int *****l_632 = &l_633;
                        unsigned char ****l_640 = (void*)0;
                        unsigned char ****l_641 = &l_585;
                        int l_647 = (-4L);
                        l_646 = ((((*l_632) = &l_501) != l_634) ^ (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((*l_641) = l_639) != l_639), 6)), (safe_add_func_int8_t_s_s(((**g_264) = l_644), l_645)))));
                        p_5 = func_12(((*l_521) = (**g_502)), (*g_203), &g_123, ((*l_630) = l_604.f0), ((p_4 <= ((p_5 || ((*g_265) > (*g_105))) > ((((p_4 & 2UL) ^ (-7L)) && l_644) | l_647))) != l_644));
                        l_519 = l_647;
                        (*l_630) = ((*p_3) & ((*l_23) = (*l_630)));
                    }
                    else
                    {
                        union U2 * const *l_648 = &l_611;
                        union U2 * const **l_649 = (void*)0;
                        l_650 = l_648;
                    }
                    (*g_654) = ((*l_652) = l_651);
                }
            }
            (*l_630) = l_655;
            for (l_442.f0 = 13; (l_442.f0 >= 45); l_442.f0 = safe_add_func_uint16_t_u_u(l_442.f0, 5))
            {
                union U0 **l_658 = (void*)0;
                union U1 l_661 = {0xB55CL};
                unsigned short *l_663 = &l_18.f0;
                union U1 **l_673 = (void*)0;
                union U1 **l_674 = (void*)0;
                (*g_412) = (void*)0;
                (*l_630) = (safe_lshift_func_int16_t_s_u(func_12(l_661, (l_662 = ((*l_529) = p_4)), ((*l_506) = &l_572), ((*l_663) = (g_25 >= 0x8841L)), (*l_630)), (safe_rshift_func_uint8_t_u_u((*l_651), 4))));
                (*l_630) = l_666;
                (*l_630) = (((l_20 = (safe_mod_func_int16_t_s_s(l_661.f0, g_251.f1))) || (**g_121)) && (safe_lshift_func_int16_t_s_s(func_12(l_671, func_12((*g_503), l_661.f0, (l_545 = l_672), p_5, ((((-1L) == p_5) > 3L) >= 4L)), (*l_506), p_4, l_661.f0), 3)));
            }
            for (l_526 = (-19); (l_526 >= (-11)); l_526 = safe_add_func_int8_t_s_s(l_526, 8))
            {
                (*l_630) = (l_677 != l_677);
            }
        }
        else
        {
            int l_698 = 0x3324D81DL;
            int l_699 = 0xB7D34FA7L;
            union U1 l_702 = {0x71C4L};
            const int *l_758 = &g_9;
            char ****l_780 = &l_459;
            char ***l_782 = &g_264;
            char ****l_781 = &l_782;
            char ****l_784 = &l_783;
            unsigned short *** const l_818 = &l_429;
            unsigned char l_839 = 255UL;
            unsigned char *l_862 = &g_24;
            if (((void*)0 == (*l_585)))
            {
                unsigned char ****l_680 = &l_585;
                unsigned char ***l_682 = &g_121;
                unsigned char ****l_681 = &l_682;
                int l_707 = 1L;
                union U1 l_716 = {9UL};
                union U1 ***l_728 = &l_506;
                (*l_630) = (((g_679 = l_678) != ((*l_681) = ((*l_680) = l_585))) > (*l_651));
                for (l_526 = 0; (l_526 < 9); ++l_526)
                {
                    unsigned char l_697 = 0xFAL;
                    (*l_630) = func_12((**g_502), (*l_651), &g_123, ((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((*l_630), 3)), (**g_264))) || (((*l_630) > (*g_265)) >= (safe_mod_func_int8_t_s_s(0xFBL, l_697)))), (*l_630))) == 0x07F79F79L), 1)), p_5)) ^ (***g_679)), p_5);
                }
                (*l_630) = ((l_698 = p_4) | (((**g_181) && (0x502D2056L <= ((*p_3) && (*g_265)))) == (l_699 = (*p_3))));
                if (((safe_sub_func_int16_t_s_s(g_123.f0, (*g_203))) | 0x2ED97A23L))
                {
                    int *l_711 = (void*)0;
                    p_5 = ((*g_193) = func_12(((*g_503) = l_702), (g_216 = 0UL), &l_671, ((*l_529) = 65526UL), ((&p_4 != (*g_351)) <= (*g_98))));
                    if (((*g_434) = ((((*l_630) = (safe_lshift_func_uint8_t_u_s(((((void*)0 != &g_104) & 0UL) <= (((*g_203) | l_702.f0) < p_4)), 5))) && (p_5 || ((**g_121) = (***g_679)))) || (((***l_585) = ((((*l_506) = (*g_502)) == &g_123) | 246UL)) != l_707))))
                    {
                        int **l_708 = (void*)0;
                        (*g_181) = &p_5;
                    }
                    else
                    {
                        const int * const l_709 = &l_699;
                        const int **l_710 = &l_651;
                        (*l_710) = l_709;
                        (*l_710) = l_711;
                        (*l_710) = &p_5;
                        (*g_712) = ((*l_630) = (0x8D240F8BL | p_4));
                    }
                }
                else
                {
                    union U0 *l_720 = (void*)0;
                    if ((safe_sub_func_uint8_t_u_u(1UL, (***g_266))))
                    {
                        int **l_715 = &g_282;
                        (*l_715) = &p_5;
                        return (*g_502);
                    }
                    else
                    {
                        (*l_630) = p_4;
                    }
                    if (func_12(l_716, (*g_203), ((*l_506) = (*l_506)), (*g_203), l_699))
                    {
                        int **l_719 = &g_282;
                        p_5 = ((+p_4) ^ p_4);
                        l_717 = (*g_304);
                        (*l_719) = &p_5;
                        (*l_630) = (*l_522);
                    }
                    else
                    {
                        union U0 **l_721 = &g_413;
                        (*l_721) = l_720;
                    }
                    for (g_48 = 0; (g_48 != 21); g_48++)
                    {
                        (*l_506) = &l_671;
                    }
                    p_5 = func_12((*l_545), ((safe_rshift_func_uint16_t_u_u(((*g_203) | (g_251.f4 > (safe_sub_func_uint8_t_u_u(func_12((*g_503), ((((3UL < (((void*)0 == l_728) || l_698)) != p_5) & 0L) ^ (*p_3)), &l_671, (*l_651), l_729), (*l_522))))), (*g_203))) ^ (-1L)), &g_123, (*l_630), (*l_651));
                }
            }
            else
            {
                union U1 l_734 = {0x6B52L};
                const int *l_741 = (void*)0;
                const int **l_740 = &l_741;
                const int ***l_739 = &l_740;
                short l_768 = (-5L);
                for (l_442.f0 = 9; (l_442.f0 == 44); ++l_442.f0)
                {
                    union U1 *l_735 = (void*)0;
                    char l_736 = 4L;
                    int l_769 = (-1L);
                    (*g_733) = l_732;
                    (*l_630) = (func_12(l_734, l_698, &l_671, (*l_651), p_4) && (3UL | ((0x16L | func_12(l_734, (*l_522), l_735, l_736, p_4)) & 0xEBC7L)));
                    if ((p_4 || (safe_add_func_int8_t_s_s(l_698, ((void*)0 == l_739)))))
                    {
                        unsigned l_744 = 0x0223DF25L;
                        unsigned short *l_745 = &l_515.f0;
                        union U1 *l_746 = &l_734;
                        short *l_755 = (void*)0;
                        short **l_754 = &l_755;
                        p_5 = p_5;
                        (*l_630) = p_5;
                        (*g_749) = func_73(((*l_529) = (*l_651)), ((safe_mod_func_uint32_t_u_u(p_5, p_4)) | ((*l_630) = l_744)), p_4, func_12(l_702, ((*l_745) = (((5L ^ l_734.f0) ^ func_12((**l_506), l_736, (*g_502), p_4, p_5)) || l_744)), l_746, p_5, (*l_522)), l_747);
                        l_758 = func_73(func_12(l_734, p_5, ((*l_506) = func_40(g_261.f0)), (*g_203), (safe_lshift_func_uint16_t_u_u(l_744, (safe_lshift_func_int16_t_s_s((l_754 != g_756), 3))))), (*g_757), (*l_630), g_251.f4, p_3);
                    }
                    else
                    {
                        unsigned char ** const ***l_767 = &g_765;
                        short *l_770 = &l_768;
                        int *l_772 = &g_9;
                        int **l_773 = &l_772;
                        l_758 = func_26(g_9, (*g_181), (safe_unary_minus_func_uint16_t_u(l_734.f0)), l_734);
                        l_771 = (((*l_770) = (safe_unary_minus_func_uint8_t_u(((l_769 = (p_4 = func_12(l_702, (safe_lshift_func_int16_t_s_s((((-8L) != ((!((+(safe_rshift_func_int8_t_s_u((&l_585 != ((*l_767) = g_765)), l_736))) > (**g_756))) & func_12(l_702, (func_12((*g_503), (&l_655 != (*g_756)), (*g_502), p_4, p_4) < 0UL), &g_123, l_768, p_4))) || 65535UL), (*l_630))), &g_123, (*g_203), (*l_522)))) || p_4)))) || p_4);
                        (*l_772) = ((**g_654) & ((*l_630) = (*g_98)));
                        (*l_773) = &p_5;
                    }
                    (*g_774) = &p_5;
                }
            }
            if ((safe_add_func_uint32_t_u_u(((l_777 != (safe_lshift_func_uint8_t_u_u((((*l_781) = ((*l_780) = &g_264)) == ((*l_784) = l_783)), 1))) && func_12((*l_545), (*l_522), (*l_506), p_4, (*l_522))), p_4)))
            {
                const int **l_785 = &l_522;
                const union U0 **l_787 = &g_134;
                const union U0 ***l_786 = &l_787;
                unsigned short *l_789 = &l_442.f0;
                (*l_785) = (*g_397);
                (*l_786) = (void*)0;
                (*g_420) = l_788;
                (*l_785) = func_36(((*l_506) = &l_702), l_789, (*g_774));
            }
            else
            {
                (*g_97) = &p_5;
            }
            for (p_4 = 0; (p_4 == 27); p_4++)
            {
                int l_792 = 0x9E3E75BFL;
                char **l_801 = &g_265;
                char ***l_800 = &l_801;
                const union U1 l_806 = {0x37A0L};
                int *l_816 = &l_777;
                unsigned short * const **l_817 = (void*)0;
                (*g_793) = &l_699;
                if (((*l_630) = ((*g_757) != (((***g_266) = (***g_266)) & ((safe_sub_func_uint16_t_u_u(65535UL, (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_s((*l_630), 0)) ^ (((*l_800) = &g_265) == &g_265)) <= (safe_mod_func_int32_t_s_s(0x74AC2885L, (+0x3B20F2B8L)))), 7)))) < p_5)))))
                {
                    union U1 *l_807 = &l_515;
                    int **l_808 = (void*)0;
                    (*g_809) = func_26(p_4, func_31((safe_rshift_func_int8_t_s_u(0x9CL, (***g_766)))), p_4, ((*l_807) = l_806));
                    for (l_20 = 2; (l_20 < 15); l_20 = safe_add_func_int8_t_s_s(l_20, 6))
                    {
                    }
                    for (g_57 = 0; (g_57 != 26); g_57 = safe_add_func_int32_t_s_s(g_57, 6))
                    {
                        (*l_630) = (*l_522);
                        (*g_282) = (*l_651);
                        (*g_282) = (p_5 = (**g_181));
                    }
                    l_758 = (l_816 = func_36(((*l_506) = &l_702), &g_216, (*g_508)));
                }
                else
                {
                    int *l_819 = (void*)0;
                    int *l_820 = &l_792;
                    int *l_821 = &l_20;
                    const int **l_822 = &l_651;
                    p_5 = (0xC9E7L <= (l_817 == l_818));
                    (*l_822) = func_73(p_5, p_5, ((*l_821) = ((*l_820) = (+(**g_508)))), (*l_758), (*g_264));
                    (*l_812) = ((****g_765) != 252UL);
                    l_823 = (*l_822);
                }
                (*l_630) = (*l_758);
                (*l_812) = (**g_372);
            }
            for (l_20 = (-11); (l_20 > 12); l_20++)
            {
                int **l_826 = &l_630;
                short *l_833 = (void*)0;
                int l_838 = 0xCCE578D3L;
                union U1 *l_846 = &l_515;
                union U1 *l_849 = &l_515;
                unsigned char *l_863 = &l_839;
                const union U1 * const ***l_900 = &l_899;
                (*l_826) = (*g_793);
                if (p_4)
                    break;
                if (((*g_434) = ((((l_698 = ((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0L, 0x8EL)), (l_699 = (*l_522)))), (+((safe_rshift_func_uint16_t_u_s(p_5, 2)) <= ((l_838 = ((safe_rshift_func_uint8_t_u_s((*l_651), 1)) | p_5)) < l_839))))) & (safe_lshift_func_int16_t_s_u(p_4, 1)))) ^ p_4) & p_5) <= (*g_265))))
                {
                    unsigned char l_842 = 0xA7L;
                    union U1 *l_848 = &l_702;
                    l_843 = ((***g_120) >= l_842);
                    for (l_699 = (-24); (l_699 > 26); ++l_699)
                    {
                        union U1 *l_847 = &l_671;
                        union U1 *l_850 = &g_123;
                        return l_850;
                    }
                }
                else
                {
                    unsigned char **l_859 = (void*)0;
                    unsigned char **l_860 = (void*)0;
                    int l_864 = 0x6446FEF6L;
                    int *l_878 = &g_9;
                    int *l_879 = &l_519;
                    const union U1 l_898 = {0xF2F5L};
                    (*l_506) = func_40((*g_757));
                    (*g_865) = (((((9L >= func_12((*g_503), (safe_lshift_func_int8_t_s_u(((*g_552) != l_853), ((void*)0 != g_854))), &g_123, p_4, (((l_862 = (l_861 = ((**l_678) = p_3))) == l_863) < l_864))) <= p_4) >= (-7L)) == (*p_3)) < 0L);
                    l_651 = func_73((*g_203), ((*g_203) & 0x4C66L), ((*l_879) = ((*l_878) = (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((safe_sub_func_uint16_t_u_u((*l_651), (((*g_290) && ((safe_lshift_func_uint16_t_u_s((*l_651), ((p_5 > ((safe_mod_func_int16_t_s_s(p_4, (~((*g_451) != 0x51F32855L)))) && (*g_203))) & (*g_105)))) >= (-1L))) > (***g_766)))) ^ (*g_203)) || p_5), (*g_203))), 0x9AL)), 6)))), l_880, p_3);
                    if (p_5)
                    {
                        unsigned *l_885 = &l_843;
                        (*l_879) = (((**g_372) > p_5) != (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(p_5, ((*l_885) = 0x4230E89EL))) == (*l_651)), (*g_98))));
                    }
                    else
                    {
                        short *l_896 = &g_249;
                        const int l_897 = 0L;
                        (*l_826) = func_26((safe_lshift_func_int8_t_s_u((*p_3), func_12(((*l_545) = (**g_502)), p_5, g_503, p_5, (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((*l_896) = ((safe_rshift_func_uint8_t_u_s((*l_812), 1)) < ((((*l_747) = (safe_sub_func_uint16_t_u_u((*l_758), (l_777 = 0x8823L)))) < ((*l_651) <= (*g_98))) || 0x74L))), 0x5C7EL)), l_897))))), &l_20, p_5, l_898);
                    }
                }
                (*g_901) = (1UL && (&g_502 == ((*l_900) = l_899)));
            }
        }
        for (l_18.f0 = 0; (l_18.f0 <= 19); l_18.f0++)
        {
            const char l_909 = 0x42L;
            int **l_920 = &g_383;
            int l_945 = 1L;
            union U1 *l_949 = &l_515;
            for (g_9 = 10; (g_9 == 0); g_9 = safe_sub_func_int32_t_s_s(g_9, 4))
            {
                unsigned l_906 = 4294967295UL;
                char *l_907 = &g_307;
                int l_910 = 1L;
                int l_913 = 8L;
                int *l_914 = &g_141;
                const int *l_922 = &l_526;
                const int **l_921 = &l_922;
                union U0 ****l_927 = (void*)0;
                union U0 ****l_928 = (void*)0;
                union U0 ***l_930 = &l_926;
                union U0 ****l_929 = &l_930;
                short *l_931 = (void*)0;
                short *l_932 = &g_249;
                unsigned short *l_933 = (void*)0;
                unsigned short *l_934 = &l_442.f0;
                (*l_812) = (*g_290);
                if (p_4)
                {
                    (*l_812) = (((void*)0 == &g_133) | p_5);
                }
                else
                {
                    const int **l_908 = &l_651;
                    (*l_908) = func_73(p_4, (**g_756), (**g_171), l_906, ((*g_264) = l_907));
                }
                (*g_915) = func_73(l_906, (**g_756), ((*l_914) = (!((l_910 = ((l_906 | p_4) <= l_909)) ^ (0x0B8FL ^ (g_249 = ((safe_lshift_func_int8_t_s_u((***g_266), (l_913 = (((**g_264) < p_4) != (-5L))))) != p_4)))))), (*l_823), (*g_264));
                if ((((safe_rshift_func_uint16_t_u_u(((*l_934) = (((*l_932) = ((((safe_add_func_uint8_t_u_u(((p_5 = (((l_920 = ((*l_501) = (void*)0)) != l_921) && ((*l_529) = (!(safe_sub_func_uint16_t_u_u((p_4 && (*l_522)), p_5)))))) > (*g_434)), 5UL)) != (l_925 == ((*l_929) = (void*)0))) < (*g_98)) < (*l_914))) || (*g_757))), p_4)) & (****g_765)) != 0UL))
                {
                    if (p_5)
                        break;
                    if (p_5)
                        continue;
                    (*g_935) = (*g_654);
                }
                else
                {
                    (*l_914) = ((*l_812) = (**g_749));
                    for (g_71 = 0; (g_71 > 39); ++g_71)
                    {
                        union U2 ***l_938 = (void*)0;
                        union U2 **l_940 = &l_611;
                        union U2 ***l_939 = &l_940;
                        (*l_939) = (void*)0;
                    }
                }
            }
            if (p_5)
                break;
            (*l_812) = func_12(g_422, ((safe_rshift_func_uint8_t_u_u(0x51L, 4)) > ((safe_mul_func_int8_t_s_s((**g_264), (p_4 == (l_945 = (0x65L <= l_909))))) == (safe_mod_func_uint16_t_u_u(p_5, (*l_522))))), &g_123, l_909, l_948);
            return g_952;
        }
        (*g_953) = func_26(g_261.f2, &l_519, (*l_651), (*l_545));
        if (((**g_935) > (safe_lshift_func_uint8_t_u_s(((**g_104) = (**g_121)), 4))))
        {
            union U0 ***l_974 = &l_926;
            int l_975 = (-7L);
            union U1 *l_994 = &l_442;
            union U1 *l_997 = &l_515;
            for (p_4 = 0; (p_4 <= 21); p_4++)
            {
                union U2 *l_958 = &g_251;
                union U1 *l_963 = (void*)0;
                if ((**g_793))
                {
                    union U2 *l_959 = &g_251;
                    union U2 **l_960 = (void*)0;
                    l_611 = l_958;
                    l_611 = l_959;
                }
                else
                {
                    return l_963;
                }
                for (l_519 = 15; (l_519 != 18); l_519 = safe_add_func_int16_t_s_s(l_519, 5))
                {
                    int l_968 = (-7L);
                    int l_969 = (-1L);
                    l_969 = (safe_rshift_func_uint16_t_u_s((l_968 = p_5), 9));
                }
            }
            if ((((safe_lshift_func_int16_t_s_s((+((!p_5) & (((p_4 >= (-4L)) | ((~(((safe_sub_func_uint8_t_u_u((+((**g_104) = 255UL)), p_5)) && ((*l_522) > (&g_421 == l_974))) ^ ((*l_823) == l_975))) ^ (*g_757))) & (*l_522)))), (**g_756))) != 0L) < p_5))
            {
                int l_976 = 1L;
                (*g_282) = (0x89C33635L != l_976);
            }
            else
            {
                unsigned l_980 = 0x6179B44EL;
                unsigned short l_989 = 0x7AAEL;
                union U1 *l_995 = &l_18;
                for (l_729 = 0; (l_729 == 33); l_729 = safe_add_func_int32_t_s_s(l_729, 9))
                {
                    (*g_979) = &p_5;
                }
                if (l_980)
                {
                    int *l_990 = &l_975;
                    char l_993 = 1L;
                    union U1 *l_996 = &l_18;
                    p_5 = (safe_sub_func_int8_t_s_s(((***l_459) = (safe_mod_func_uint32_t_u_u((((0x62E4L <= ((*l_529) = (safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((l_989 == (*l_812)) & ((p_5 & 0L) == ((*l_990) = (**g_181)))), (l_989 < 1L))), (safe_rshift_func_uint8_t_u_s(((*p_3) | (*p_3)), 3)))))) >= 1UL) && (**g_756)), l_993))), p_5));
                    return g_999;
                }
                else
                {
                    char l_1002 = 0xB0L;
                    for (l_515.f0 = 0; (l_515.f0 <= 50); ++l_515.f0)
                    {
                        unsigned short ***l_1005 = (void*)0;
                        const int **l_1007 = &l_522;
                        (*g_774) = (void*)0;
                        (*l_1007) = func_73((p_4 | func_12((*l_545), ((func_12((*l_961), l_1002, &g_123, p_5, (safe_add_func_int8_t_s_s((*p_3), ((l_1005 == &g_285) | (*g_265))))) < 0x95CF8AEEL) && (*g_757)), l_994, l_1002, g_1006)), (*g_757), l_975, (*g_265), &l_1002);
                        if (p_4)
                            break;
                        (*l_812) = 0x30B5206EL;
                    }
                }
            }
            return l_1008;
        }
        else
        {
            short l_1021 = 1L;
            unsigned char ****l_1024 = &l_678;
            int l_1025 = (-5L);
            int l_1035 = 0x765892C4L;
            (*g_282) = ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((!(safe_mod_func_int16_t_s_s((*g_757), (safe_add_func_int32_t_s_s(((*p_3) > ((**g_508) < ((((*l_651) == ((+l_1021) > (l_783 == l_783))) >= p_4) > (*g_282)))), 1L))))), 0x42L)), l_1021)), l_1021)) || (*l_651));
            for (l_20 = (-17); (l_20 <= 4); l_20 = safe_add_func_int8_t_s_s(l_20, 8))
            {
                short l_1036 = 0x6C5CL;
                (*g_282) = (l_1025 = ((void*)0 != l_1024));
                (*g_282) = (0xA401L || ((p_5 <= (safe_rshift_func_uint16_t_u_u(((*l_529) = ((safe_add_func_int8_t_s_s(((-1L) && (***g_766)), (g_1032 = (p_5 & (*p_3))))) >= (l_1025 >= ((((safe_sub_func_uint32_t_u_u(((l_1035 = ((&p_4 != ((*l_853) = func_26((*l_651), &l_20, g_92, (*l_545)))) == p_4)) & 1UL), (*l_823))) | l_1036) < (*g_282)) < 4294967289UL)))), p_4))) > l_1036));
            }
        }
    }
    if ((((void*)0 != l_853) ^ ((((((*g_282) = (((safe_rshift_func_int16_t_s_s((((***g_120) && (safe_lshift_func_int16_t_s_u((g_1041 < (*l_651)), (*l_651)))) < (*l_522)), 4)) || 0x0FL) == (safe_lshift_func_int16_t_s_s((**g_756), 3)))) != p_4) != l_1044) > l_1045) || (*l_651))))
    {
        int *l_1048 = &l_777;
        int **l_1061 = &g_282;
        const int **l_1062 = &l_522;
        short *l_1063 = (void*)0;
        short *l_1064 = (void*)0;
        short *l_1065 = &g_249;
        int l_1066 = 0L;
        unsigned short *l_1068 = &l_1044;
        int **l_1074 = &g_383;
        const char l_1079 = 0xEEL;
        if ((**g_171))
        {
            return &g_123;
        }
        else
        {
            int *l_1049 = (void*)0;
            for (l_519 = (-30); (l_519 < (-5)); l_519 = safe_add_func_int16_t_s_s(l_519, 4))
            {
                l_1049 = l_1048;
            }
        }
        (*g_1050) = l_1048;
        (*g_1069) = ((*l_1048) = (((*l_1048) >= (0x51L == ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*l_1068) = (((*l_651) >= (safe_rshift_func_uint16_t_u_s(((0L | p_5) ^ (safe_lshift_func_int16_t_s_u(0x9AA2L, 9))), (safe_add_func_uint32_t_u_u((p_4 = (l_1066 = ((!(((*l_1065) = (((*l_1061) = (*g_809)) == ((*l_1062) = &p_5))) ^ (*l_651))) != p_5))), l_1067))))) > p_5)), (-1L))), 6)) < (*g_98)))) || (*g_265)));
        if ((**l_1061))
        {
            int **l_1075 = &g_383;
            int **l_1076 = &g_383;
            const int *l_1078 = &l_519;
            l_1078 = func_73((*l_1048), ((*p_3) || ((safe_add_func_int32_t_s_s(0x02452959L, 0x31556F67L)) || (safe_sub_func_int8_t_s_s(((&g_422 != (void*)0) && ((p_4 < (((p_4 ^ ((((l_1075 = l_1074) != l_1076) <= 0x70340AA4L) < 1L)) < (-6L)) || p_4)) ^ (*p_3))), 0x43L)))), (*l_1048), l_1077, p_3);
        }
        else
        {
            short l_1084 = (-10L);
            int l_1085 = 0L;
            union U0 *l_1089 = &g_147;
            if (l_1079)
            {
                int ** const l_1090 = &g_282;
                for (l_1066 = 0; (l_1066 != 0); l_1066++)
                {
                    short *l_1086 = &g_251.f1;
                    (**l_1061) = ((safe_lshift_func_int16_t_s_s(((*l_1065) = l_1084), ((*l_1086) = (func_12((*g_999), ((((!(*l_522)) > (****g_765)) ^ (*l_522)) != ((l_1085 = p_5) || (-1L))), &g_123, l_1084, (**l_1061)) <= p_4)))) >= 253UL);
                    for (l_1044 = 0; (l_1044 < 29); ++l_1044)
                    {
                        int ***l_1092 = (void*)0;
                        (*g_733) = l_1089;
                        (*g_1093) = l_1090;
                        (*l_1062) = &p_5;
                    }
                }
                (**l_1090) = 0x7A4B8767L;
            }
            else
            {
                (*g_1095) = ((*g_282) = 0xB5A37740L);
                for (l_607 = 7; (l_607 < 25); l_607 = safe_add_func_int32_t_s_s(l_607, 3))
                {
                    const int * const l_1098 = (void*)0;
                    const int *l_1099 = &l_519;
                    l_1099 = l_1098;
                }
            }
        }
    }
    else
    {
        union U1 l_1108 = {1UL};
        int *l_1123 = &l_20;
        short l_1142 = 0x32ACL;
        unsigned short *l_1159 = &g_251.f4;
        union U1 l_1163 = {1UL};
        int l_1166 = 0xF364D4CDL;
        short l_1193 = 0xCFD1L;
        int l_1194 = 0xCCF91B48L;
        union U0 **l_1231 = &g_411;
        unsigned char l_1294 = 1UL;
        unsigned short l_1357 = 0xE0BFL;
        union U1 **l_1379 = &l_672;
        union U1 **l_1383 = &l_961;
        int **l_1422 = &g_383;
        (**g_1094) = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((*l_651), p_5)), ((g_251.f4 = 1UL) || (**g_756))));
        if (p_5)
        {
            const int l_1114 = 0x6103D7A4L;
            unsigned l_1115 = 0x46A59AC4L;
            unsigned l_1116 = 4294967295UL;
            unsigned short *l_1118 = &l_515.f0;
            union U1 *l_1121 = &g_123;
            short *l_1122 = (void*)0;
            union U0 *l_1136 = &g_261;
            int *l_1138 = &g_92;
            unsigned l_1157 = 4294967295UL;
            int *l_1161 = &l_777;
            char l_1174 = 0xF3L;
            volatile int *l_1207 = (void*)0;
            union U2 *l_1257 = &g_251;
            const unsigned short *l_1268 = &g_422.f0;
            const unsigned short * const *l_1267 = &l_1268;
            const unsigned short * const **l_1266 = &l_1267;
            (*g_1117) = func_73((7L ^ ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_12(l_1108, (*l_522), &l_1108, ((8UL && (*l_651)) > (((safe_unary_minus_func_int8_t_s(((***l_459) = (2UL > ((*p_3) | (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((*l_651), l_1108.f0)), l_1114))))))) > 0xD06FL) > l_1114)), l_1115), g_1032)), p_5)) < l_1116)), l_1108.f0, p_5, g_48, p_3);
            (*g_1094) = func_36(&g_123, l_1118, func_36(func_40((g_249 = ((-4L) <= ((((*l_23) = (safe_lshift_func_uint16_t_u_s(p_5, func_12(l_1108, l_1108.f0, l_1121, p_4, (((*p_3) = (*p_3)) != p_4))))) | l_1108.f0) || p_4)))), &g_216, l_1123));
            if ((((**g_264) = (((*g_282) = 0xAAD448A6L) >= (safe_rshift_func_uint16_t_u_u(1UL, (safe_add_func_int32_t_s_s(0x5C17CE26L, ((((l_1115 & (safe_mod_func_uint32_t_u_u(p_5, l_1115))) && ((*l_1123) & (safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((l_1134 != g_1135), 0x8C7CAAA6L)) & p_4), (*g_757))))) != (-1L)) == (****g_765)))))))) >= (*l_1123)))
            {
                unsigned char l_1137 = 0xEBL;
                unsigned short l_1139 = 0x962AL;
                int ****l_1153 = &g_500;
                union U1 *l_1158 = (void*)0;
                unsigned l_1164 = 0x8791B528L;
                int l_1165 = 0xD9CFA320L;
                unsigned short *** const l_1204 = &g_285;
                const short l_1226 = 0x713DL;
                const unsigned char l_1248 = 0xDDL;
                union U2 *l_1261 = &g_1262;
                if ((*l_651))
                {
                    (**g_1094) = (65532UL != ((void*)0 != l_1136));
                    (*l_1123) = (1L || (l_1137 = (*p_3)));
                    (*g_290) = (*l_1123);
                    l_1138 = func_26(g_324, (*g_1094), g_141, (*g_999));
                }
                else
                {
                    unsigned short l_1140 = 65526UL;
                    int l_1141 = 0L;
                    char * const *l_1144 = &g_265;
                    union U1 *l_1156 = (void*)0;
                    unsigned short *l_1160 = &g_123.f0;
                    union U1 l_1162 = {65529UL};
                    if ((+l_1139))
                    {
                        (*l_1138) = ((*g_757) >= (g_249 = l_1140));
                        l_1141 = (**g_935);
                        (*l_506) = func_40((l_1142 = (+0xA934L)));
                        (*l_1138) = p_5;
                    }
                    else
                    {
                        short *l_1143 = &g_251.f1;
                        int * const ****l_1152 = &g_1149;
                        (*g_282) = (0x2411L && ((*l_1143) = p_5));
                        (*g_1145) = l_1144;
                        (*l_1138) = (safe_lshift_func_uint8_t_u_u(((((*l_1152) = g_1149) == l_1153) & (*l_1138)), func_12((*g_999), ((p_4 = 4294967295UL) >= ((safe_sub_func_uint8_t_u_u(func_12(l_1108, ((*l_1118) = 0xAE4AL), l_1156, ((*l_1123) = p_5), l_1157), (*l_1138))) < p_5)), l_1158, l_1137, p_5)));
                    }
                    (*g_1094) = func_36(&l_1108, (l_1160 = l_1159), func_36(&g_123, &g_216, &l_1141));
                    l_1123 = ((*g_1094) = l_1161);
                    (*g_282) = ((*l_1138) = (((***g_766) = func_12(l_1162, p_5, l_1158, ((func_12(l_1163, func_12((*g_999), ((*l_1118) = p_4), &l_18, l_1164, (l_1165 = (p_4 >= (***g_120)))), l_1121, p_4, (*l_1138)) && (*l_522)) | 0x7F4FL), l_1139)) > l_1162.f0));
                }
                if ((l_1166 > (safe_add_func_uint32_t_u_u((*l_1161), (((p_5 != func_12(((*g_952) = ((*l_962) = (*l_1121))), (l_1165 = (((*g_757) && (((*l_1159) = (safe_mod_func_int8_t_s_s((*p_3), (-7L)))) & 0xEFBCL)) || (safe_rshift_func_int8_t_s_s((*p_3), (*p_3))))), l_1121, g_1173, (*l_1161))) && l_1174) | (*l_1161))))))
                {
                    unsigned *l_1181 = &l_1115;
                    int l_1184 = 0L;
                    union U1 l_1210 = {65534UL};
                    (*l_1161) = (65530UL < (*l_651));
                    (**g_1094) = (safe_sub_func_uint8_t_u_u((*l_522), (+((((p_4 || p_5) > ((*l_1118) = p_5)) <= ((safe_add_func_uint16_t_u_u(p_4, l_1137)) || 0xC89F2087L)) < (p_4 ^ (p_5 > (*g_1095)))))));
                    if ((((safe_lshift_func_int16_t_s_s((*g_757), 3)) == ((*l_1181) = p_4)) || (l_1184 | 0L)))
                    {
                        union U0 **l_1185 = &g_413;
                        int l_1186 = 0x009CF393L;
                        short *l_1195 = &l_1142;
                        (*l_1185) = l_1136;
                        (*l_1138) = ((*l_1161) = func_12(l_1108, func_12(((*l_672) = (*l_962)), l_1186, func_40((safe_mod_func_int16_t_s_s((*l_1138), (safe_rshift_func_uint8_t_u_s(((*l_1161) = (safe_rshift_func_uint8_t_u_s((((p_5 != (l_1193 && (l_1121 != (void*)0))) == p_5) != p_4), (*l_1161)))), (*p_3)))))), l_1163.f0, p_4), &l_1108, l_1137, l_1186));
                        (*g_1196) = func_73(l_1164, ((*l_1195) = (((*p_3) = l_1194) ^ (*l_1123))), (+(p_4 == func_12((*l_961), (p_5 & ((*l_522) & l_1186)), &l_1108, p_4, p_4))), l_1165, p_3);
                    }
                    else
                    {
                        short *l_1201 = &l_1142;
                        union U1 *l_1205 = &l_1108;
                        int l_1215 = 0xE4DED741L;
                        (*g_1094) = (void*)0;
                        l_1207 = g_1206;
                        l_1215 = (safe_rshift_func_uint16_t_u_u(((*l_1161) = func_12(((*g_999) = l_1210), (p_4 < (*l_522)), ((*l_506) = l_1158), p_5, (safe_rshift_func_uint8_t_u_s(((***g_120) >= ((p_5 || (safe_sub_func_uint8_t_u_u((**g_104), (*g_265)))) > 0x67L)), (**g_1146))))), g_71));
                    }
                }
                else
                {
                    unsigned short *l_1216 = &l_1044;
                    unsigned *l_1225 = &l_1115;
                    union U1 *l_1229 = &l_515;
                    int l_1234 = 1L;
                    (*l_1161) = (p_5 = ((void*)0 == l_1216));
                    if (((p_5 & (safe_rshift_func_uint8_t_u_s(((*l_1123) = (((**g_104) = (((*l_651) > (((*l_1123) || 0x8947L) == (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*l_1225) = (safe_lshift_func_uint8_t_u_u((((*g_766) != (*g_766)) && p_4), 6))), 0xE11CA4C9L)), (((-2L) || (**g_181)) || p_5))))) < 0xA9L)) > l_1226)), 3))) != 65526UL))
                    {
                        unsigned short l_1230 = 65535UL;
                        union U1 *l_1235 = (void*)0;
                        (**g_1094) = ((((safe_lshift_func_int8_t_s_u(((**g_1146) = (func_12(l_1163, ((*l_1159) = ((****g_765) | (func_12((*l_1121), p_4, l_1229, (l_1230 ^ (l_1231 == (void*)0)), (safe_add_func_uint32_t_u_u(l_1230, l_1234))) > (*g_757)))), l_1235, p_4, p_4) == (**g_1146))), p_5)) ^ p_5) ^ 6L) | 0x89L);
                    }
                    else
                    {
                        int *l_1236 = &g_9;
                        l_1236 = l_1236;
                        (*g_1094) = &p_5;
                        g_1237 = (void*)0;
                    }
                    if ((*l_1123))
                    {
                        union U1 *l_1238 = &g_123;
                        (*l_1161) = ((((*l_1118) = p_4) || 0xD761L) != 0x6E069AB6L);
                        (*l_1138) = ((*l_1161) = (l_1226 == func_12((*l_672), (*l_1138), l_1238, (*l_1138), p_4)));
                        (*g_282) = (!p_4);
                        (**g_1094) = (1UL == (&g_855 == &g_855));
                    }
                    else
                    {
                        (*g_1094) = &p_5;
                    }
                    (*g_1094) = &p_5;
                }
                (*l_1161) = 8L;
                for (g_261.f3 = 0; (g_261.f3 == 34); g_261.f3 = safe_add_func_int16_t_s_s(g_261.f3, 2))
                {
                    int *l_1247 = &l_777;
                    (*l_1123) = ((*g_757) > (((((p_4 <= l_1164) > (*l_1161)) < (safe_mod_func_int32_t_s_s(((l_1165 = (*l_1123)) ^ p_4), p_5))) <= (safe_mod_func_uint8_t_u_u((*l_1123), (g_718.f0 | p_5)))) && 4UL));
                    for (l_1108.f0 = (-4); (l_1108.f0 > 51); l_1108.f0 = safe_add_func_int8_t_s_s(l_1108.f0, 4))
                    {
                        int *l_1249 = &g_9;
                        char *l_1250 = &g_307;
                        const int **l_1251 = (void*)0;
                        l_1247 = &l_1194;
                        (*g_1254) = func_73(p_5, p_4, ((*l_1249) = l_1248), (*l_1247), l_1250);
                    }
                    for (l_1194 = 0; (l_1194 > (-19)); l_1194--)
                    {
                        union U2 *l_1258 = (void*)0;
                        union U2 **l_1259 = (void*)0;
                        union U2 **l_1260 = &l_1257;
                        char *l_1263 = &l_1174;
                        l_1261 = ((*l_1260) = (l_1258 = l_1257));
                        (*l_1138) = p_4;
                        (*l_1123) = (((~((*l_1263) = ((*g_265) = (*l_1138)))) && (p_4 == ((safe_rshift_func_int8_t_s_u((**g_1146), 5)) | (-1L)))) <= 1L);
                        (*l_1123) = 0xE035AED7L;
                    }
                }
            }
            else
            {
                unsigned short ***l_1269 = &l_429;
                int * const l_1274 = &l_20;
                unsigned char ***l_1279 = (void*)0;
                l_777 = (l_1266 != l_1269);
                for (l_1115 = 0; (l_1115 == 51); l_1115++)
                {
                    unsigned l_1290 = 4294967295UL;
                    const union U1 l_1292 = {2UL};
                    for (l_1067 = 0; (l_1067 >= 26); l_1067 = safe_add_func_uint16_t_u_u(l_1067, 9))
                    {
                        unsigned char ***l_1280 = (void*)0;
                        unsigned char ****l_1281 = &l_1280;
                        int l_1291 = 0L;
                        (*g_372) = l_1274;
                        (*l_1138) = ((*l_1274) | (safe_lshift_func_uint8_t_u_s((*l_1161), (((safe_mod_func_uint32_t_u_u((((l_1279 == ((*l_1281) = l_1280)) <= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((*l_1161) != (safe_mod_func_int16_t_s_s(p_5, (*l_1123)))) >= (*l_651)), ((safe_rshift_func_int16_t_s_s(((*l_1123) <= l_1290), 3)) ^ (**g_104)))), 5))) <= p_4), 0x8342F3FAL)) && (*p_3)) || l_1291))));
                        (*g_1094) = &p_5;
                        (*g_1094) = func_26(g_1135, (*g_1094), g_123.f0, l_1292);
                    }
                }
            }
        }
        else
        {
            union U1 l_1293 = {0x4627L};
            char l_1318 = 0x95L;
            union U1 *l_1362 = &l_1293;
            int *l_1370 = &g_9;
            union U2 * const l_1385 = &g_251;
            unsigned char ****l_1391 = &l_585;
            unsigned char *****l_1390 = &l_1391;
            int l_1405 = 0xE37199DFL;
            unsigned *l_1428 = &g_48;
            unsigned **l_1427 = &l_1428;
            if (((*l_651) ^ ((((*g_265) = (*p_3)) & 7L) == 0x58B0L)))
            {
                const int *l_1300 = &g_25;
                const int **l_1299 = &l_1300;
                int l_1301 = 9L;
                union U1 l_1303 = {1UL};
                int l_1319 = 0x88FEE66AL;
                if ((func_12(l_1293, l_1294, &l_442, (safe_add_func_uint8_t_u_u(p_5, (safe_rshift_func_uint16_t_u_u(((((void*)0 != l_1299) != p_5) != l_1301), (((*l_651) > (*l_651)) | p_5))))), p_5) == p_5))
                {
                    int **l_1302 = (void*)0;
                    (*g_97) = ((*g_1094) = &p_5);
                    (*l_459) = (void*)0;
                    (*l_1123) = p_5;
                }
                else
                {
                    unsigned char *l_1320 = (void*)0;
                    (*l_1123) = func_12(((*g_999) = l_1303), (((*p_3) > ((*l_23) = p_5)) <= func_12(l_1293, p_5, g_1304, (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_1123) = ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_5, l_1318)), 1UL)) | l_1319), p_4)) <= 0UL)), p_5)), p_4)) && p_5), (**g_756))), (*l_651))), &g_1305, p_4, p_5);
                }
                if ((**g_181))
                {
                    volatile union U2 **l_1321 = &g_197;
                    (*l_1321) = (*g_198);
                    (*g_1094) = &p_5;
                }
                else
                {
                    return &g_1305;
                }
                (*g_1094) = (*g_1094);
            }
            else
            {
                union U1 *l_1322 = &l_442;
                int l_1324 = 0x9440F505L;
                unsigned short *l_1369 = &l_1044;
                union U1 *l_1378 = &l_1108;
                int l_1404 = 0x0AFFDDFEL;
                if (((*l_1123) = p_5))
                {
                    union U1 l_1323 = {1UL};
                    int l_1326 = 7L;
                    unsigned short ***l_1367 = &l_429;
                    union U1 ***l_1380 = &l_1379;
                    union U1 ***l_1381 = (void*)0;
                    union U1 ***l_1382 = &l_506;
                    union U2 *l_1387 = (void*)0;
                    if ((**g_97))
                    {
                        return &g_123;
                    }
                    else
                    {
                        int l_1325 = 0x61E84D40L;
                        char *l_1345 = &g_1346;
                        (*g_1237) = p_5;
                        (*g_1094) = &p_5;
                        (*g_1237) = ((*g_282) = func_12(l_1323, (func_12(l_1293, p_4, func_40((*g_757)), l_1324, (p_5 & ((1UL & (-2L)) < l_1325))) > (**g_1094)), &l_1323, l_1326, p_4));
                        (*l_1123) = ((safe_mod_func_uint8_t_u_u(((*l_23) = (safe_lshift_func_int8_t_s_u(l_1318, (safe_mod_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((**g_1146) = 0xD6L) <= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((*l_1345) = (safe_sub_func_int16_t_s_s((*l_651), p_5))), (safe_lshift_func_int16_t_s_s(((void*)0 == g_1349), (safe_rshift_func_uint8_t_u_u(l_1324, 1)))))), l_1325)), (l_1324 ^ p_5)))), (-1L))), 15)) && p_5) == 1L), 0x351937E7L))))), 0xFAL)) == 0xC5DCL);
                    }
                    if (p_4)
                    {
                        unsigned l_1361 = 9UL;
                        (*g_1094) = &l_1077;
                        (*g_1237) = l_1324;
                        (*g_1237) = (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_1357, 14)), (safe_sub_func_int16_t_s_s(func_12(l_1108, l_1323.f0, &l_1108, (safe_unary_minus_func_int16_t_s(func_12((*g_952), (((**g_756) == p_4) != ((l_1324 > ((**g_756) & p_5)) ^ 1L)), &l_1293, (*l_1123), l_1361))), p_4), 0x673BL))));
                        l_1362 = (void*)0;
                    }
                    else
                    {
                        unsigned short ****l_1368 = &l_428;
                        int l_1375 = 0x0BB53D1BL;
                        (*g_1363) = l_611;
                        (*g_1095) = (safe_sub_func_uint16_t_u_u((l_1367 != ((*l_1368) = &g_285)), (*g_757)));
                        (*g_1094) = func_36(l_1322, l_1369, l_1370);
                        (*l_1370) = ((l_1375 = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((void*)0 == &l_1067), (***g_1093))), 0))) != l_1324);
                    }
                    p_5 = (((safe_rshift_func_uint8_t_u_s(func_12((*g_952), p_5, l_1378, ((*l_1159) = 0x7F25L), ((~(***g_266)) > (((*l_1380) = l_1379) == (l_1383 = ((*l_1382) = &l_1378))))), l_1384)) | (*p_3)) != l_1324);
                    l_1387 = l_1385;
                }
                else
                {
                    unsigned char *****l_1392 = &l_1391;
                    int l_1393 = (-1L);
                    union U1 l_1406 = {1UL};
                    unsigned l_1413 = 0x07CF6C27L;
                    int l_1424 = 1L;
                    if (((*l_1123) == ((safe_rshift_func_int16_t_s_s((p_5 != (l_1390 == l_1392)), l_1393)) || (0xF0L >= (p_5 && ((void*)0 == &g_285))))))
                    {
                        (*l_1379) = (*l_1383);
                        (**g_1094) = l_1393;
                    }
                    else
                    {
                        int l_1423 = 1L;
                        (*g_1237) = ((**g_1094) = p_5);
                        (*g_1237) = (((l_1324 & ((****g_765) > (((*l_1370) = (((((((safe_sub_func_int32_t_s_s(l_1324, p_5)) != (safe_rshift_func_uint8_t_u_u(0xB1L, 3))) ^ ((safe_lshift_func_int8_t_s_s(((*l_1370) & (p_4 = (safe_rshift_func_int8_t_s_s(((*l_651) ^ ((*l_1123) = (l_1405 = (safe_sub_func_uint32_t_u_u((l_1404 = 8UL), p_5))))), 6)))), 3)) | (*l_651))) == (-1L)) | (*p_3)) != l_1393) == p_5)) & p_5))) & 0x91L) < 0x95L);
                        (*l_1370) = ((func_12(l_1406, ((*l_1159) = (safe_sub_func_uint16_t_u_u(((*l_1369) = p_5), ((safe_mod_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(l_1413, (safe_rshift_func_uint8_t_u_u(((****g_765) >= ((-3L) >= p_5)), 4)))) & (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((*g_451), (safe_lshift_func_uint16_t_u_u(p_5, 9)))), 3))) ^ (l_1422 != (void*)0)), l_1423)) >= p_4)))), &l_1406, g_1346, l_1424) ^ p_4) != l_1393);
                    }
                }
            }
            (*g_953) = &l_1194;
            (*l_1123) = ((*l_522) <= (((**g_552) = func_26(((safe_rshift_func_int16_t_s_u(0L, 15)) & (*l_522)), (*g_793), ((*g_1149) != l_501), (*g_952))) != ((*l_1427) = l_1370)));
        }
    }
    l_651 = &l_20;
    return &g_1305;
}







static char func_12(union U1 p_13, unsigned short p_14, union U1 * p_15, unsigned short p_16, unsigned p_17)
{
    int l_435 = 0x94E078AEL;
    int *l_436 = &g_9;
    for (g_57 = 0; (g_57 < 56); g_57 = safe_add_func_int16_t_s_s(g_57, 3))
    {
        unsigned short l_432 = 0xC39DL;
        return l_432;
    }
    (*g_434) = (*g_98);
    (*l_436) = l_435;
    (*l_436) = p_17;
    return p_17;
}







static union U1 * func_21(unsigned char p_22)
{
    int l_33 = 1L;
    int *l_425 = &g_9;
    l_425 = func_26(p_22, func_31(l_33), l_33, g_422);
    return &g_123;
}







static int * func_26(unsigned p_27, const int * p_28, unsigned p_29, const union U1 p_30)
{
    short l_423 = 0xB5C4L;
    int *l_424 = &g_9;
    l_423 = (**g_97);
    return l_424;
}







static int * func_31(int p_32)
{
    int l_42 = 0L;
    int *l_136 = (void*)0;
    int l_167 = (-2L);
    char *l_192 = (void*)0;
    unsigned short *l_253 = &g_216;
    unsigned char ** const l_256 = &g_105;
    union U0 *l_259 = &g_147;
    unsigned short **l_334 = &l_253;
    union U2 *l_388 = &g_251;
    union U2 **l_387 = &l_388;
    int l_407 = 0x29BAADCFL;
    for (p_32 = 0; (p_32 == (-17)); p_32 = safe_sub_func_uint16_t_u_u(p_32, 1))
    {
        unsigned short *l_135 = (void*)0;
        int **l_137 = &l_136;
        int **l_138 = (void*)0;
        int *l_140 = &g_141;
        int **l_139 = &l_140;
        int l_168 = 0x47C661B5L;
        unsigned short ** const l_286 = (void*)0;
        const union U1 **l_305 = (void*)0;
        union U0 **l_344 = &l_259;
        union U1 *l_361 = &g_123;
        (*l_139) = func_36(func_40(l_42), l_135, ((*l_139) = ((*l_137) = l_136)));
        if (p_32)
            break;
        if (p_32)
        {
            union U1 *l_172 = &g_123;
            int l_179 = (-10L);
            unsigned short *l_202 = &g_123.f0;
            int *l_204 = (void*)0;
            unsigned short **l_207 = &g_203;
            if ((safe_add_func_uint8_t_u_u(0x79L, ((**g_121) = (!(*l_140))))))
            {
                unsigned char ***l_163 = &g_121;
                int l_166 = 0xD17E59D8L;
                char *l_180 = &g_7;
                if (((0xBD5AD9A1L | (0x2335DC65L >= (!0xCF54F23DL))) ^ (l_163 == l_163)))
                {
                    (*g_171) = func_73(((**l_139) < (safe_mod_func_int32_t_s_s((**g_97), (p_32 & l_166)))), (l_167 < (**g_121)), ((4294967295UL < (~l_166)) && l_168), g_48, &g_7);
                    l_172 = &g_123;
                }
                else
                {
                    for (g_147.f3 = 0; (g_147.f3 < 22); g_147.f3 = safe_add_func_int16_t_s_s(g_147.f3, 2))
                    {
                        (*l_137) = (void*)0;
                    }
                    for (g_48 = 15; (g_48 > 16); g_48 = safe_add_func_int8_t_s_s(g_48, 4))
                    {
                        (*l_140) = (*g_98);
                    }
                    l_166 = (safe_add_func_int32_t_s_s(l_179, (*g_130)));
                }
                (*g_130) = (**g_171);
                (*g_181) = func_73(p_32, p_32, p_32, ((*l_180) = ((**l_139) != 0x8F030F79L)), l_180);
            }
            else
            {
                const unsigned l_184 = 0x8DEE8705L;
                unsigned char **l_187 = &g_105;
                unsigned short *l_199 = &g_123.f0;
                int *l_205 = &g_141;
                const int **l_206 = &g_98;
                if (l_179)
                {
                    unsigned char ** const l_188 = &g_105;
                    int l_191 = 0x6921F8CFL;
                    (**l_139) = p_32;
                    if (p_32)
                        break;
                    (*l_139) = l_136;
                    (*g_193) = (*g_130);
                }
                else
                {
                    union U1 *l_201 = &g_123;
                    union U1 **l_200 = &l_201;
                    if (p_32)
                    {
                        unsigned short *l_196 = &g_123.f0;
                        (*l_140) = (safe_mod_func_int16_t_s_s((-1L), (g_147.f0 | ((*l_196) = g_48))));
                        return &g_9;
                    }
                    else
                    {
                        if ((**g_171))
                            break;
                    }
                    (*g_198) = g_197;
                    if (p_32)
                        continue;
                    (*l_137) = func_36(l_172, l_199, func_36(((*l_200) = (void*)0), (g_203 = l_202), &g_92));
                }
                (*l_137) = l_204;
                (*l_206) = func_73((p_32 <= 0xB1ABL), ((~0x71019901L) & p_32), ((*l_205) = (-8L)), g_92, &g_7);
            }
            (*l_139) = func_36(func_40(g_147.f2), ((*l_207) = g_203), ((*l_139) = (*l_139)));
            (*l_140) = ((safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(255UL, (**l_139))), l_179)), (safe_mod_func_int16_t_s_s(g_216, (*g_203))))) & (g_147.f0 >= l_179));
        }
        else
        {
            unsigned *l_217 = &g_57;
            const int l_231 = 0x209F72DDL;
            int **l_247 = (void*)0;
            unsigned short *l_254 = &g_251.f4;
            int l_258 = 0x4C827FE7L;
            unsigned char l_289 = 0xE8L;
            char *l_306 = &g_307;
            char ** const *l_356 = &g_264;
            int *l_362 = &g_92;
            if ((((*l_217) = p_32) & p_32))
            {
                return &g_92;
            }
            else
            {
                int l_228 = 0xB31AE2F7L;
                int l_240 = (-1L);
                union U2 *l_250 = &g_251;
                union U0 *l_260 = &g_261;
                if ((((safe_add_func_int8_t_s_s(((*g_203) > ((safe_rshift_func_int16_t_s_s((l_228 = (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x7BL, 1)), ((safe_lshift_func_uint8_t_u_s((p_32 < ((((*l_217) = l_228) <= ((l_240 = (safe_rshift_func_uint8_t_u_u((((p_32 & (p_32 || ((*l_140) = ((l_231 >= p_32) && ((((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_32, 3)), 0L)) != (**l_139)) || p_32), 13)) | p_32) == l_228) >= (*g_203)), 1)) == p_32) | p_32) == p_32))))) ^ 0x2DEDL) >= p_32), (**g_104)))) > (*g_203))) == 0x6EL)), g_147.f0)) != g_24)))), 3)) == 0x26711C34L)), p_32)) > p_32) ^ (*g_203)))
                {
                    union U0 *l_242 = &g_147;
                    union U0 **l_241 = &l_242;
                    (*l_241) = (void*)0;
                }
                else
                {
                    short *l_248 = &g_249;
                    unsigned char **l_255 = &g_105;
                    int l_257 = 0x8259F371L;
                    (*g_130) = p_32;
                    if ((safe_rshift_func_uint16_t_u_s(((safe_add_func_int8_t_s_s((p_32 | (l_231 | 0x2772L)), 0x52L)) || ((void*)0 == l_247)), ((*l_248) = g_92))))
                    {
                        union U2 **l_252 = &l_250;
                        (*l_252) = l_250;
                        (*l_139) = func_36(&g_123, l_253, func_36(&g_123, l_254, &g_95));
                        l_257 = ((l_255 == l_256) & (g_147.f0 | (l_257 ^ (*g_105))));
                        (*l_137) = (void*)0;
                    }
                    else
                    {
                        l_240 = l_257;
                        (*g_130) = (**l_139);
                        (*l_140) = (((*l_217) = (p_32 > (l_240 ^ (**g_171)))) | g_48);
                    }
                }
                l_258 = p_32;
                l_260 = l_259;
                if ((*g_98))
                    continue;
            }
            for (g_48 = 0; (g_48 >= 7); g_48 = safe_add_func_int16_t_s_s(g_48, 2))
            {
                union U0 *l_267 = (void*)0;
                short *l_268 = &g_249;
                unsigned *l_273 = &g_71;
                int l_281 = 7L;
                int *l_283 = &l_258;
                unsigned short **l_284 = &l_253;
                char *l_345 = &g_307;
                const int *l_354 = &g_92;
                (*g_266) = g_264;
                if ((((*l_254) = p_32) < ((*l_268) = ((*g_133) == l_267))))
                {
                    int *l_271 = &g_95;
                    for (g_9 = 0; (g_9 <= (-10)); g_9 = safe_sub_func_uint32_t_u_u(g_9, 9))
                    {
                        int *l_272 = &g_95;
                        int l_280 = (-4L);
                        l_272 = l_271;
                        (*l_271) = (((((l_273 == &g_57) == (*l_271)) || ((((1L | g_147.f0) & (safe_rshift_func_int16_t_s_s(((((p_32 == 0xAEE4L) == (!((safe_sub_func_int32_t_s_s(0x34984787L, ((*l_273) = (safe_mod_func_int32_t_s_s((0xA4208AA5L > (*l_271)), 0x70AA57C4L))))) > g_216))) == p_32) <= (*l_271)), 6))) & l_280) ^ 4294967295UL)) && g_132.f2) && l_281);
                        l_283 = (g_282 = ((*l_139) = l_272));
                        (*l_283) = ((g_285 = l_284) == l_286);
                    }
                    (*g_290) = ((*l_140) = ((safe_sub_func_uint8_t_u_u(0xEFL, (!l_289))) ^ 255UL));
                }
                else
                {
                    int l_295 = (-1L);
                    const int *l_303 = &g_95;
                    const int **l_308 = &l_303;
                    if ((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((*g_265), 2)))))
                    {
                        int l_294 = (-1L);
                        const unsigned short l_300 = 65527UL;
                        l_303 = func_73(l_294, (9L || l_295), (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(l_300, 4)) ^ (safe_rshift_func_int8_t_s_s(0L, 2))), (((**l_284) = 65531UL) || g_261.f2))), (*g_265), (*g_264));
                    }
                    else
                    {
                        (**l_139) = (*g_98);
                        (*g_304) = (*g_198);
                    }
                    (*l_140) = (((+(l_305 != (void*)0)) | (*g_203)) < (**l_139));
                    (*l_308) = func_73((*l_303), g_147.f0, ((**g_121) | ((**g_264) = 4L)), (*l_283), l_306);
                }
                (*l_139) = ((*l_137) = (*l_139));
                if ((((*l_268) = (safe_rshift_func_int8_t_s_u((p_32 > (safe_mod_func_int8_t_s_s((**g_264), (p_32 | (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((0xBDB752B4L <= p_32), 0xEFL)), 5)))))), ((((safe_sub_func_uint8_t_u_u(((*l_283) > ((g_261.f0 > (p_32 & l_231)) < p_32)), (*l_283))) <= p_32) >= (**g_264)) ^ p_32)))) < p_32))
                {
                    unsigned short ***l_323 = &l_284;
                    int *l_333 = &g_92;
                    int l_337 = 0x9EBCAD0BL;
                    union U1 *l_348 = &g_123;
                    if (((safe_add_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u((l_253 == (void*)0), p_32)) == p_32) || (&g_203 != ((*l_323) = l_284))) <= ((g_324 | ((safe_lshift_func_uint16_t_u_u(0x338BL, ((*l_253) = ((safe_mod_func_int32_t_s_s(((*l_140) = (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*g_265) >= (-1L)), (**l_137))), p_32))), 1UL)) < p_32)))) == p_32)) || g_25)), 255UL)) > (-1L)))
                    {
                        (**l_139) = ((*g_266) != &l_192);
                    }
                    else
                    {
                        return l_333;
                    }
                    if (((+(&g_203 != ((*l_323) = l_334))) & (safe_sub_func_int8_t_s_s((*l_136), l_337))))
                    {
                        const union U1 *l_339 = &g_123;
                        const union U1 **l_338 = &l_339;
                        const int **l_346 = &g_98;
                        unsigned **l_347 = &l_217;
                        (*l_338) = (void*)0;
                        (*l_346) = func_73((*g_203), (safe_lshift_func_uint8_t_u_s(p_32, ((safe_lshift_func_int8_t_s_s(((void*)0 != l_344), (((**g_171) || (((**g_104) < p_32) != 0x85L)) > (+(~((*l_333) = ((*l_136) >= p_32))))))) > p_32))), p_32, p_32, l_345);
                        (*g_282) = (0L & (((*l_347) = &g_71) != (void*)0));
                    }
                    else
                    {
                        l_348 = l_348;
                        (**l_137) = 0x13E9DE08L;
                    }
                    (**l_139) = (*l_283);
                }
                else
                {
                    unsigned ***l_350 = &g_349;
                    const int l_355 = 0xB8BD90C6L;
                    (**l_139) = (p_32 & (p_32 > (p_32 <= ((**g_264) = ((0x72L && (-9L)) > (((*l_350) = g_349) != g_351))))));
                    if (((**g_264) <= p_32))
                    {
                        int l_353 = 0x1973102DL;
                        l_354 = (*g_97);
                    }
                    else
                    {
                        int l_359 = (-1L);
                        const int **l_360 = &l_354;
                        (*l_360) = (*g_181);
                        (*g_130) = (**l_137);
                        if ((**g_181))
                            continue;
                        (*l_360) = (*g_171);
                    }
                }
            }
            l_136 = func_36(l_361, (*l_334), &g_92);
            l_362 = func_36(&g_123, (g_203 = l_254), (*l_137));
        }
        (*l_139) = func_36(l_361, l_135, (*l_139));
    }
    if (l_167)
    {
        unsigned char l_365 = 0x28L;
        const int *l_377 = &g_9;
        const int *l_386 = &g_25;
        const int **l_385 = &l_386;
        const int ***l_384 = &l_385;
        union U2 *l_389 = &g_251;
        char *l_395 = &g_307;
        union U0 *l_410 = &g_261;
        for (g_24 = 0; (g_24 != 10); g_24 = safe_add_func_uint8_t_u_u(g_24, 3))
        {
            int *l_375 = &g_141;
        }
        return l_136;
    }
    else
    {
        union U0 **l_416 = &g_411;
        int **l_417 = &g_282;
        (*l_416) = l_259;
        (*l_417) = l_136;
        (*l_417) = (void*)0;
        for (p_32 = 1; (p_32 == 21); p_32++)
        {
            if (p_32)
                break;
        }
    }
    (*g_420) = l_259;
    (*g_421) = l_259;
    return &g_141;
}







static int * func_36(union U1 * p_37, unsigned short * p_38, int * p_39)
{
    char l_154 = 0x42L;
    int *l_158 = &g_92;
    int **l_160 = (void*)0;
    int ***l_159 = &l_160;
    for (g_24 = 3; (g_24 < 44); ++g_24)
    {
        union U0 *l_146 = &g_147;
        char *l_148 = &g_7;
        char *l_150 = &g_7;
        char **l_149 = &l_150;
        int l_153 = (-1L);
        unsigned *l_155 = &g_48;
        (*g_130) = (1UL != g_71);
        if ((safe_sub_func_uint8_t_u_u(((((void*)0 == l_146) != (((((l_148 == ((*l_149) = &g_7)) <= (***g_120)) & ((g_71 != (safe_rshift_func_int16_t_s_u(l_153, 15))) || g_24)) ^ ((*l_155) = l_154)) >= l_153)) || 0xA1794A77L), l_154)))
        {
            int *l_156 = &g_9;
            (*l_156) = l_154;
        }
        else
        {
            int *l_157 = &g_92;
            (*l_157) = 0x34744A69L;
            return &g_92;
        }
    }
    (*l_158) = (*g_98);
    (*l_159) = (void*)0;
    (*l_158) = (**g_97);
    return &g_9;
}







static union U1 * func_40(short p_41)
{
    unsigned l_45 = 4294967295UL;
    int l_112 = 0xDB4C2A73L;
    int **l_127 = (void*)0;
    int *l_129 = &g_9;
    int **l_128 = &l_129;
    const union U0 *l_131 = &g_132;
    for (g_24 = 0; (g_24 >= 38); g_24 = safe_add_func_uint16_t_u_u(g_24, 7))
    {
        int *l_46 = &g_9;
        int *l_47 = (void*)0;
        unsigned l_111 = 0xB735D465L;
        int **l_124 = (void*)0;
        int **l_125 = (void*)0;
        int **l_126 = &l_47;
        g_48 = ((*l_46) = l_45);
        for (g_9 = 13; (g_9 != 25); ++g_9)
        {
            unsigned *l_55 = &g_48;
            unsigned *l_56 = &g_57;
            int l_60 = (-1L);
            int l_67 = 5L;
            unsigned *l_70 = &g_71;
            int *l_72 = &g_25;
            unsigned char **l_107 = &g_105;
            unsigned char ***l_106 = &l_107;
            (*l_106) = func_51(((*l_56) = ((*l_55) = l_45)), l_45, ((*l_72) = (safe_add_func_uint32_t_u_u((l_60 = g_9), (0xEED0L | (((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_45, 3)), p_41)) != (safe_sub_func_uint16_t_u_u(p_41, l_67))) | ((*l_70) = (safe_add_func_uint16_t_u_u(((0L || l_45) || g_7), l_67)))) != 0x8BA8L) == p_41))))));
            if (p_41)
                break;
        }
        for (g_95 = 11; (g_95 <= 27); ++g_95)
        {
            int l_119 = 0x3373E763L;
            union U1 *l_122 = &g_123;
            (*l_46) = (safe_unary_minus_func_int16_t_s(g_25));
            (*l_46) = ((p_41 & ((((p_41 && (l_112 = l_111)) & ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(255UL, 5)), (safe_rshift_func_int8_t_s_u(((*g_105) | g_95), 2)))) || l_119)) < l_119) ^ (g_95 && l_45))) & (*l_46));
            if (p_41)
            {
                (*g_120) = &g_105;
            }
            else
            {
                return l_122;
            }
        }
        (*l_126) = &l_112;
    }
    (*l_128) = (void*)0;
    (*g_130) = (p_41 ^ 1L);
    (*g_133) = l_131;
    return &g_123;
}







static unsigned char ** const func_51(unsigned p_52, unsigned char p_53, int p_54)
{
    int l_79 = (-1L);
    unsigned short l_80 = 0x5348L;
    int *l_101 = &g_95;
    unsigned char *l_103 = (void*)0;
    unsigned char ** const l_102 = &l_103;
    (*g_97) = func_73(l_79, g_48, g_57, (l_79 < l_80), &g_7);
    (*l_101) = (safe_lshift_func_int16_t_s_u(l_80, 3));
    return g_104;
}







static const int * const func_73(unsigned short p_74, short p_75, const int p_76, char p_77, char * p_78)
{
    int l_83 = 0xF0936A74L;
    int *l_84 = (void*)0;
    int *l_85 = &l_83;
    unsigned *l_88 = (void*)0;
    unsigned short *l_90 = (void*)0;
    unsigned short **l_89 = &l_90;
    int *l_91 = &g_92;
    int *l_94 = &g_95;
    (*l_94) = (safe_add_func_int32_t_s_s((~(((*p_78) = (((*l_85) = (254UL < (l_83 >= (l_83 >= l_83)))) > (safe_lshift_func_int16_t_s_u(((l_88 = l_84) != l_85), g_48)))) <= 254UL)), ((*l_91) = (((*l_89) = &p_74) != &p_74))));
    return &g_9;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f2, "g_147.f2", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_251.f1, "g_251.f1", print_hash_value);
    transparent_crc(g_251.f4, "g_251.f4", print_hash_value);
    transparent_crc(g_261.f0, "g_261.f0", print_hash_value);
    transparent_crc(g_261.f2, "g_261.f2", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_422.f0, "g_422.f0", print_hash_value);
    transparent_crc(g_466.f0, "g_466.f0", print_hash_value);
    transparent_crc(g_466.f2, "g_466.f2", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_718.f0, "g_718.f0", print_hash_value);
    transparent_crc(g_718.f1, "g_718.f1", print_hash_value);
    transparent_crc(g_718.f4, "g_718.f4", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    transparent_crc(g_1173, "g_1173", print_hash_value);
    transparent_crc(g_1262.f0, "g_1262.f0", print_hash_value);
    transparent_crc(g_1262.f1, "g_1262.f1", print_hash_value);
    transparent_crc(g_1262.f4, "g_1262.f4", print_hash_value);
    transparent_crc(g_1305.f0, "g_1305.f0", print_hash_value);
    transparent_crc(g_1346, "g_1346", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
