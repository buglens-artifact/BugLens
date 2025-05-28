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



static volatile int g_2 = 0xD3DF75DCL;
static int g_3[7][6] = {{1L, 1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L, 1L}};
static int g_6 = 0x2E31D832L;
static int g_55[2] = {0L, 0L};
static int g_66 = 0x5D5A10D5L;
static int *g_72 = &g_66;
static unsigned g_91 = 1UL;
static unsigned g_97 = 0xC2DF4B1DL;
static unsigned g_117 = 0x3DF28D60L;
static unsigned g_121 = 2UL;
static unsigned char g_156 = 0x38L;
static unsigned char g_159[2][2][2] = {{{1UL, 1UL}, {1UL, 1UL}}, {{1UL, 1UL}, {1UL, 1UL}}};
static short g_176 = 1L;
static short g_192 = 0xA934L;
static unsigned short g_193 = 0xA157L;
static int g_207[9] = {2L, 2L, 0xF70FADE7L, 2L, 2L, 0xF70FADE7L, 2L, 2L, 0xF70FADE7L};
static unsigned short g_242 = 0xA42BL;
static short * volatile g_251[10][7] = {{&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}, {&g_192, &g_192, &g_176, &g_176, &g_192, &g_192, &g_176}};
static short * volatile *g_250 = &g_251[6][5];
static unsigned char *g_268 = &g_159[1][1][1];
static unsigned char g_280 = 1UL;
static char g_297 = 0xBFL;
static unsigned * volatile g_314[8] = {&g_97, &g_97, &g_97, &g_97, &g_97, &g_97, &g_97, &g_97};
static unsigned * volatile *g_313 = &g_314[3];
static const int *g_345 = &g_66;
static volatile unsigned short g_395[10] = {65535UL, 65535UL, 0xC92DL, 0xC92DL, 65535UL, 65535UL, 65535UL, 0xC92DL, 0xC92DL, 65535UL};
static volatile unsigned short *g_394 = &g_395[9];
static volatile unsigned short * volatile *g_393 = &g_394;
static unsigned char * volatile * volatile *g_539 = (void*)0;
static char g_565[9] = {0x9AL, 0x9AL, 1L, 0x9AL, 0x9AL, 1L, 0x9AL, 0x9AL, 1L};
static char g_570 = 0xA1L;
static unsigned char * volatile *g_572[8][4][2] = {{{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}, {{&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}, {&g_268, &g_268}}};
static unsigned char * volatile **g_571 = &g_572[6][2][0];
static unsigned char **g_593 = &g_268;
static volatile int g_673 = 0L;
static volatile int *g_672 = &g_673;
static volatile int ** const g_671 = &g_672;
static short g_678 = 0x3588L;
static int ** volatile g_755 = (void*)0;
static int ** volatile g_756[6] = {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72};
static int ** volatile g_757 = &g_72;
static int ***g_799 = (void*)0;
static const unsigned g_846 = 0x5254C128L;
static int ** volatile g_857 = &g_72;
static int ** volatile g_865 = &g_72;
static int **g_872 = &g_72;
static int *** volatile g_871 = &g_872;
static int ** volatile g_945 = (void*)0;
static int ** volatile g_946 = (void*)0;
static int ** volatile g_968 = &g_72;
static char g_977[3] = {(-1L), (-1L), (-1L)};
static unsigned short g_993 = 0x7C72L;
static volatile int g_996 = 5L;
static volatile int *g_995 = &g_996;
static volatile int **g_994[7][10][3] = {{{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}, {{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}, {{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}, {{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}, {{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}, {{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}, {{&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}, {&g_995, &g_995, &g_995}}};
static char * volatile g_1005 = (void*)0;
static char * volatile * volatile g_1004 = &g_1005;
static int ** volatile g_1045 = &g_72;



static char func_1(void);
static int * func_9(short p_10, int p_11, int * p_12, int p_13);
static unsigned func_16(char p_17, const unsigned char p_18, unsigned short p_19, int p_20);
static unsigned func_23(int * p_24, char p_25);
static int * const func_33(int * p_34);
static int * func_35(short p_36, const int p_37, int * p_38, int * p_39, short p_40);
static unsigned char func_44(int p_45, int p_46, const short p_47, int * const p_48, unsigned short p_49);
static unsigned short func_51(int * p_52, int * p_53);
static unsigned func_58(unsigned p_59);
static unsigned char func_60(int * p_61, unsigned p_62, int p_63);
static char func_1(void)
{
    unsigned l_21[3];
    int l_710 = (-1L);
    unsigned char l_711 = 254UL;
    unsigned l_748 = 4294967287UL;
    int l_766 = 1L;
    int *l_767 = &g_3[6][0];
    short l_997 = (-1L);
    const int l_998 = (-2L);
    int *l_999 = &g_3[2][2];
    unsigned l_1011 = 0x73F2F64AL;
    const unsigned *l_1037[4][4] = {{&l_748, &l_21[0], (void*)0, (void*)0}, {&l_748, &l_21[0], (void*)0, (void*)0}, {&l_748, &l_21[0], (void*)0, (void*)0}, {&l_748, &l_21[0], (void*)0, (void*)0}};
    const unsigned **l_1036[3][9] = {{&l_1037[0][1], &l_1037[3][2], (void*)0, (void*)0, (void*)0, &l_1037[3][2], &l_1037[0][1], (void*)0, &l_1037[0][1]}, {&l_1037[0][1], &l_1037[3][2], (void*)0, (void*)0, (void*)0, &l_1037[3][2], &l_1037[0][1], (void*)0, &l_1037[0][1]}, {&l_1037[0][1], &l_1037[3][2], (void*)0, (void*)0, (void*)0, &l_1037[3][2], &l_1037[0][1], (void*)0, &l_1037[0][1]}};
    const unsigned ***l_1035[4];
    int l_1039 = 0x3C0AC274L;
    int *l_1051 = (void*)0;
    int ** const l_1050 = &l_1051;
    int ** const *l_1049 = &l_1050;
    int ** const **l_1048 = &l_1049;
    int l_1052 = 0x6C86BCFAL;
    char *l_1057 = &g_565[4];
    int i, j;
    for (i = 0; i < 3; i++)
        l_21[i] = 0xDF5EF889L;
    for (i = 0; i < 4; i++)
        l_1035[i] = &l_1036[1][7];
    for (g_3[2][2] = 0; (g_3[2][2] < (-2)); g_3[2][2] = safe_sub_func_uint32_t_u_u(g_3[2][2], 5))
    {
        const unsigned l_22 = 4294967295UL;
        int *l_42[4][3] = {{&g_3[2][2], &g_3[5][1], (void*)0}, {&g_3[2][2], &g_3[5][1], (void*)0}, {&g_3[2][2], &g_3[5][1], (void*)0}, {&g_3[2][2], &g_3[5][1], (void*)0}};
        int l_764 = 0x829C5727L;
        char * volatile * volatile l_1006 = &g_1005;
        const unsigned l_1030[5][10][5] = {{{0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}}, {{0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}}, {{0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}}, {{0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}}, {{0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}, {0x50D10423L, 9UL, 0x1F8338C3L, 0xED51AEA3L, 1UL}}};
        unsigned char l_1038 = 0x12L;
        int l_1040 = 9L;
        int i, j, k;
        for (g_6 = (-19); (g_6 > (-3)); g_6++)
        {
            int l_32 = 0x86FF18EEL;
            int **l_503 = &l_42[3][0];
            int l_709 = 0xDE203CFCL;
            short *l_765[5] = {&g_678, &g_678, &g_678, &g_678, &g_678};
            unsigned l_1019 = 0x34022B9CL;
            int l_1031 = 8L;
            unsigned short l_1032 = 0x32EFL;
            unsigned *l_1033 = (void*)0;
            char l_1034 = 0L;
            int i;
            (*l_503) = func_9((l_766 = (((safe_mod_func_uint32_t_u_u(func_16((l_21[0] && g_2), l_22, (((func_23(&g_3[6][2], ((safe_mod_func_uint32_t_u_u(0x257A10DDL, ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(l_32, (l_710 = (((((((l_32 > l_21[2]) , func_33(((*l_503) = func_35((((safe_unary_minus_func_int8_t_s(0x36L)) != l_22) , l_21[1]), l_22, l_42[0][0], &g_3[2][2], l_21[0])))) == (void*)0) < g_678) & g_678) <= l_709) == 0xF7C2L)))) , (-1L)), g_117)) , l_711))) != 0x2AL)) && (*g_72)) ^ 0x1EL) <= l_748), g_6), 0xC6994EEEL)) & l_764) , l_710)), g_176, l_767, l_764);
            (*g_872) = &l_766;
            for (g_192 = (-28); (g_192 == 14); ++g_192)
            {
                for (g_97 = 27; (g_97 != 41); ++g_97)
                {
                    l_1006 = g_1004;
                }
            }
            (*g_995) = (((((safe_sub_func_uint32_t_u_u((l_709 || (safe_rshift_func_uint16_t_u_s(func_60(((l_1011 >= (((*l_767) > (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s(((**g_593) = l_1019), 0)))) != ((((*g_394) , (((((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((*g_72) = ((*l_767) && 0x17L)) > l_1031) <= 0x37DE611CL), l_32)), (*l_767))) >= l_1032) > g_395[7]) | (*l_999)) , l_1033) != &l_22) > (*l_999))) , g_395[9]) < (*l_999))) && (*l_767)), 3)) & g_55[1]), g_121))) < (*l_999))) , &l_766), l_1034, (*l_767)), g_570))), 0x2FA13EA1L)) <= g_3[5][1]) , l_1035[1]) == (void*)0) || l_1038);
        }
        (*g_995) = ((((*l_767) , (*l_767)) || ((l_1039 = ((**g_757) = (***g_871))) == ((0L & 0x92L) | (!0UL)))) != l_1040);
        (*g_72) = (((safe_sub_func_int32_t_s_s((**g_757), (g_121 = g_280))) & ((g_193 = g_117) ^ g_192)) ^ (g_117 , ((safe_sub_func_uint16_t_u_u((((((*g_72) , ((void*)0 != &l_997)) ^ g_156) & 4UL) != (*l_999)), g_242)) < g_993)));
    }
    (*g_1045) = func_33((*g_757));
    (*g_995) = ((safe_sub_func_int32_t_s_s((l_1048 == &l_1049), l_1052)) ^ (safe_sub_func_int32_t_s_s((((safe_sub_func_uint8_t_u_u(func_51(&l_710, ((((*l_767) = (***g_871)) & g_193) , (*g_857))), ((*l_1057) = g_678))) < 0x6943L) , (*l_999)), g_176)));
    return (*l_767);
}







static int * func_9(short p_10, int p_11, int * p_12, int p_13)
{
    unsigned char ****l_770 = (void*)0;
    unsigned char *****l_771 = &l_770;
    unsigned char ***l_773 = (void*)0;
    unsigned char ****l_772 = &l_773;
    const int l_774 = (-1L);
    short *l_775[5][6] = {{(void*)0, (void*)0, &g_678, &g_678, &g_678, (void*)0}, {(void*)0, (void*)0, &g_678, &g_678, &g_678, (void*)0}, {(void*)0, (void*)0, &g_678, &g_678, &g_678, (void*)0}, {(void*)0, (void*)0, &g_678, &g_678, &g_678, (void*)0}, {(void*)0, (void*)0, &g_678, &g_678, &g_678, (void*)0}};
    int l_776[2];
    int *l_779[3];
    int l_780 = 0x1C6F8E0AL;
    char l_781 = 0x8CL;
    unsigned l_785 = 0x7C323995L;
    unsigned short l_788[3];
    int *l_802 = &l_780;
    int **l_801 = &l_802;
    int ***l_800 = &l_801;
    unsigned l_957 = 0UL;
    unsigned short **l_987 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_776[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_779[i] = &g_55[1];
    for (i = 0; i < 3; i++)
        l_788[i] = 0x0115L;
    l_781 = (l_780 = (safe_rshift_func_int16_t_s_s((((((*l_771) = l_770) != l_772) | (l_774 >= ((l_776[1] = 0x48ADL) < p_13))) || (safe_rshift_func_int8_t_s_u(((l_776[0] = l_776[1]) >= p_11), p_13))), 7)));
    for (p_10 = 0; (p_10 >= (-17)); p_10 = safe_sub_func_int32_t_s_s(p_10, 7))
    {
        unsigned *l_784 = &g_91;
        int l_789[5];
        char *l_790 = &g_570;
        int l_795 = 0x7753FD46L;
        int l_805 = 1L;
        int l_833[8];
        unsigned char *l_843 = &g_159[1][1][1];
        const unsigned *l_845[3][4] = {{&g_846, &g_846, &g_846, &g_846}, {&g_846, &g_846, &g_846, &g_846}, {&g_846, &g_846, &g_846, &g_846}};
        unsigned l_853 = 0xABF37040L;
        int *l_855 = (void*)0;
        unsigned short *l_862 = (void*)0;
        const unsigned l_876 = 0x9C395E84L;
        int * const l_882[3][9] = {{&g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1]}, {&g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1]}, {&g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1], (void*)0, &g_55[1]}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_789[i] = 0x50A5FCE7L;
        for (i = 0; i < 8; i++)
            l_833[i] = 0x7CC6D2BBL;
        l_789[1] = ((-7L) >= (((*l_784) = g_395[2]) >= ((((l_785 != (!(safe_lshift_func_int16_t_s_s((g_192 = (g_156 < l_789[1])), (~p_13))))) | (((*l_790) = (l_789[1] && g_176)) , p_10)) ^ p_11) >= g_97)));
        for (l_780 = 3; (l_780 <= 8); l_780 += 1)
        {
            int **l_792[7];
            int i;
            for (i = 0; i < 7; i++)
                l_792[i] = &g_72;
            for (g_193 = 1; (g_193 <= 8); g_193 += 1)
            {
                int *l_791 = &g_55[1];
                return l_791;
            }
            l_779[0] = p_12;
        }
        for (g_176 = 0; (g_176 != 6); g_176++)
        {
            int *l_796 = &l_789[1];
            int **l_797[1];
            int *l_798 = &g_55[0];
            int ***l_804 = &l_801;
            int ****l_803 = &l_804;
            int i;
            for (i = 0; i < 1; i++)
                l_797[i] = (void*)0;
            l_795 = (l_789[0] = 1L);
            if ((*p_12))
                continue;
            (*l_796) = (0UL < (p_11 , (p_10 == g_121)));
        }
        for (l_795 = 0; (l_795 != 8); ++l_795)
        {
            char l_820 = (-8L);
            int l_821 = 1L;
            unsigned char *l_844 = &g_280;
            int **l_879 = (void*)0;
            int **l_881 = &l_779[1];
            short l_932 = 1L;
            int *l_938 = (void*)0;
            l_789[0] = ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_821 = ((safe_sub_func_uint8_t_u_u((g_192 && (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_795, 14)), ((((((+(250UL | 255UL)) & ((((l_820 , 0L) <= l_789[1]) && p_11) > (*g_394))) != l_805) > p_10) , (-1L)) ^ g_3[0][0])))), l_805)) & g_6)), 0x536CL)), g_6)) , 0L);
            if ((l_789[1] = l_805))
            {
                unsigned l_842 = 0x2DF4143FL;
                int *l_852 = (void*)0;
                l_821 = l_820;
                for (l_821 = (-18); (l_821 <= (-10)); l_821 = safe_add_func_int32_t_s_s(l_821, 5))
                {
                    char l_831 = 3L;
                    int l_832 = 8L;
                    for (g_117 = 0; (g_117 > 58); g_117++)
                    {
                        l_789[0] = ((safe_unary_minus_func_uint32_t_u(g_570)) < ((safe_add_func_int8_t_s_s((((p_10 < (safe_add_func_int16_t_s_s((l_831 = l_821), (l_832 != (l_833[6] != 0UL))))) , (safe_add_func_int32_t_s_s((g_673 <= l_820), p_13))) || g_159[1][1][1]), 0x0AL)) , (*p_12)));
                    }
                    for (g_156 = 27; (g_156 == 39); g_156++)
                    {
                        char l_838 = 3L;
                        int *l_839[8][10] = {{&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}, {&g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832, &g_66, &l_832}};
                        int i, j;
                        if (l_838)
                            break;
                        l_839[0][9] = func_33(p_12);
                    }
                    for (g_570 = 24; (g_570 < (-24)); g_570--)
                    {
                        if ((*p_12))
                            break;
                        if (l_842)
                            continue;
                    }
                }
                if ((+((((*g_593) = l_843) != l_844) & ((((((*p_12) , l_820) > l_833[6]) | l_833[6]) >= (l_789[0] = 8L)) & 5L))))
                {
                    int l_847[6][9][3] = {{{0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}}, {{0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}}, {{0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}}, {{0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}}, {{0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}}, {{0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}, {0L, 0x79F9A449L, 0x102F84B3L}}};
                    int *l_854 = &g_3[1][4];
                    int i, j, k;
                    if (((l_845[0][3] = &g_91) != (void*)0))
                    {
                        unsigned char l_848 = 255UL;
                        int *l_851 = &g_66;
                        int **l_856 = &l_779[0];
                        (*g_857) = ((*l_856) = (*g_757));
                        if ((*p_12))
                            continue;
                    }
                    else
                    {
                        int **l_858 = &l_854;
                        int l_859 = 1L;
                        (*l_858) = p_12;
                        l_859 = 3L;
                    }
                    if ((*p_12))
                        continue;
                }
                else
                {
                    unsigned short l_863 = 0x30C8L;
                    int *l_864[2][3][6] = {{{(void*)0, (void*)0, &l_795, (void*)0, (void*)0, &g_207[7]}, {(void*)0, (void*)0, &l_795, (void*)0, (void*)0, &g_207[7]}, {(void*)0, (void*)0, &l_795, (void*)0, (void*)0, &g_207[7]}}, {{(void*)0, (void*)0, &l_795, (void*)0, (void*)0, &g_207[7]}, {(void*)0, (void*)0, &l_795, (void*)0, (void*)0, &g_207[7]}, {(void*)0, (void*)0, &l_795, (void*)0, (void*)0, &g_207[7]}}};
                    int i, j, k;
                    if (func_16(((*l_790) = (!(safe_add_func_uint8_t_u_u((**g_593), ((((*g_268) , (void*)0) != l_862) , p_11))))), (**g_593), (*g_394), l_863))
                    {
                        return p_12;
                    }
                    else
                    {
                        if ((*p_12))
                            break;
                    }
                    (*g_865) = p_12;
                }
                for (p_13 = 9; (p_13 < 29); p_13++)
                {
                    unsigned l_868 = 4294967292UL;
                    int **l_870 = &l_855;
                    int ***l_869 = &l_870;
                    l_868 = 1L;
                    (*g_871) = ((*l_869) = &g_72);
                }
            }
            else
            {
                short l_886 = 0L;
                int l_887[2];
                unsigned l_894 = 1UL;
                char l_899 = 2L;
                unsigned *l_900[9][6] = {{&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}, {&l_894, (void*)0, &l_894, &l_785, &g_121, &l_894}};
                char l_931[8][10] = {{0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}, {0xC7L, 0L, 0L, (-10L), 4L, (-10L), 0L, 0L, 0xC7L, 0xFBL}};
                int l_933 = 7L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_887[i] = 0x572733ACL;
                for (l_821 = 0; (l_821 > 3); ++l_821)
                {
                    int l_875[9][4] = {{0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}, {0xFF5D768DL, (-1L), 0xFF5D768DL, (-7L)}};
                    int ***l_880 = &g_872;
                    char *l_883 = (void*)0;
                    char *l_884 = (void*)0;
                    char *l_885 = &g_565[3];
                    unsigned char *l_930 = &g_156;
                    short l_934 = 0x8934L;
                    int i, j;
                    (*l_881) = ((l_887[0] = func_16(l_875[7][2], l_876, (**g_393), ((safe_add_func_int8_t_s_s((-2L), (p_13 >= p_11))) , ((((*l_885) = ((*l_790) = p_11)) > l_886) ^ l_886)))) , (*g_857));
                    (**g_871) = ((*l_881) = p_12);
                    for (g_280 = (-27); (g_280 == 49); g_280 = safe_add_func_int16_t_s_s(g_280, 6))
                    {
                        unsigned short *l_896 = (void*)0;
                        unsigned short *l_897 = (void*)0;
                        unsigned short *l_898 = &g_193;
                        unsigned *l_909 = &l_785;
                        l_899 = (p_10 >= (((safe_mod_func_int32_t_s_s((p_10 | 2L), l_894)) & 6UL) || ((safe_unary_minus_func_uint32_t_u((g_3[2][2] , ((**g_393) > 0UL)))) > ((*l_898) = p_13))));
                        if (l_887[1])
                            continue;
                        (*l_881) = (((((&l_876 == (l_900[0][2] = (void*)0)) & (((safe_mul_func_uint16_t_u_u(p_10, l_886)) , ((((g_159[1][0][0] > (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_887[0] = (*g_394)), (p_13 || (((p_11 == ((safe_mul_func_uint8_t_u_u(p_13, p_10)) <= g_66)) , l_909) == p_12)))), (*g_345)))) > l_894) , 0x0DFD779DL) , l_886)) == p_11)) && p_11) != g_55[1]) , p_12);
                    }
                    l_934 = (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((l_933 = (safe_rshift_func_uint8_t_u_s(((l_887[0] = ((((0x6B7D551EL == (***g_871)) , (func_16(g_176, ((l_931[4][4] = ((safe_add_func_uint32_t_u_u(((***l_880) <= (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((**g_393) != (safe_rshift_func_int8_t_s_u((g_193 , ((safe_add_func_uint8_t_u_u(((*l_844) = ((*g_268) = ((*g_72) == (***l_880)))), ((*l_930) = (p_13 , p_13)))) & g_207[0])), 1))), g_846)), p_13)), g_565[6])) < 1L), p_10))), g_565[4])) , 7L)) || 1UL), g_55[1], g_846) || 0xBFL)) == p_13) != 2L)) <= l_932), 6))), g_55[1])) < g_55[1]), p_11));
                }
            }
            for (g_66 = 23; (g_66 != (-2)); g_66 = safe_sub_func_uint32_t_u_u(g_66, 8))
            {
                for (l_780 = 0; (l_780 <= 4); l_780 += 1)
                {
                    unsigned char l_937 = 0x02L;
                    l_937 = 0x6AD2DBE7L;
                    (*l_881) = l_938;
                }
            }
            for (g_117 = 0; (g_117 >= 23); g_117 = safe_add_func_uint16_t_u_u(g_117, 2))
            {
                return (*g_857);
            }
        }
    }
    for (g_97 = 0; (g_97 <= 58); g_97 = safe_add_func_uint8_t_u_u(g_97, 6))
    {
        int **l_947[7] = {&g_72, &g_72, &g_72, &g_72, &g_72, &g_72, &g_72};
        int **l_948 = (void*)0;
        int **l_949 = (void*)0;
        unsigned *l_969 = (void*)0;
        int l_980[4] = {0x1792DFC0L, 0L, 0x1792DFC0L, 0L};
        int i;
        for (g_156 = 21; (g_156 <= 9); --g_156)
        {
            (*g_872) = (*g_865);
            p_12 = func_33((**g_871));
        }
        l_779[1] = func_33((**g_871));
        if (p_13)
        {
            unsigned short l_960 = 0xC202L;
            int l_961 = (-7L);
            int *l_976[6];
            int i;
            for (i = 0; i < 6; i++)
                l_976[i] = &g_207[2];
            p_12 = ((*g_872) = p_12);
            for (g_280 = (-20); (g_280 == 10); g_280 = safe_add_func_int16_t_s_s(g_280, 1))
            {
                unsigned char *l_954 = (void*)0;
                unsigned char *l_955[4] = {&g_156, &g_159[0][1][0], &g_156, &g_159[0][1][0]};
                int l_956 = (-1L);
                unsigned short *l_959[4][10] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &l_788[1], (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &l_788[1], (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &l_788[1], (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &l_788[1], (void*)0, (void*)0, (void*)0, (void*)0}};
                int l_966 = 0xE8EBD224L;
                int i, j;
                l_961 = (func_16(p_10, (l_956 = (safe_mul_func_int8_t_s_s(0x3AL, g_3[2][2]))), l_957, (p_11 , (safe_unary_minus_func_uint8_t_u(((-10L) || ((l_960 = 65529UL) != p_11)))))) & 0x4098L);
                for (l_960 = (-11); (l_960 >= 46); ++l_960)
                {
                    int *l_967 = &g_66;
                    unsigned **l_970 = (void*)0;
                    unsigned *l_971[8][9] = {{(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}, {(void*)0, (void*)0, &l_957, &l_957, &g_97, (void*)0, &g_117, &g_97, &g_97}};
                    int i, j;
                    for (l_956 = (-11); (l_956 <= (-30)); l_956--)
                    {
                        (*g_872) = p_12;
                        (*g_872) = &l_956;
                        l_966 = (***g_871);
                    }
                    (*g_968) = func_33(l_967);
                    (*l_967) = ((l_961 = (p_11 && (0UL | ((l_969 != (l_971[6][5] = &g_97)) != (((*g_872) = ((safe_rshift_func_int16_t_s_u(l_960, (safe_add_func_uint32_t_u_u(l_966, p_10)))) , (l_779[1] = p_12))) == (l_976[4] = &l_961)))))) != g_977[1]);
                    (*g_872) = p_12;
                }
                if (l_966)
                    continue;
                if (l_956)
                    break;
            }
            for (p_10 = 4; (p_10 >= 0); p_10 -= 1)
            {
                l_980[2] = (safe_add_func_int16_t_s_s(1L, 0x01E1L));
            }
        }
        else
        {
            const unsigned l_988 = 0xD98049A0L;
            unsigned short * const l_992 = &g_993;
            unsigned short * const *l_991 = &l_992;
            for (g_678 = 0; (g_678 <= 28); ++g_678)
            {
                int l_983 = 0xAEB998EFL;
                unsigned char **l_984 = &g_268;
                unsigned short * const l_990 = &g_193;
                unsigned short * const *l_989 = &l_990;
                if (p_13)
                    break;
                if (l_983)
                    continue;
                (*g_571) = ((**g_857) , l_984);
                (*g_72) = (0x62L == (l_987 == (l_988 , (l_991 = l_989))));
            }
        }
    }
    return p_12;
}







static unsigned func_16(char p_17, const unsigned char p_18, unsigned short p_19, int p_20)
{
    int *l_749 = (void*)0;
    int *l_754 = (void*)0;
    (*g_757) = l_749;
    for (p_19 = 0; (p_19 <= 8); p_19 += 1)
    {
        int *l_762 = &g_207[7];
        int **l_763 = &l_754;
        int i;
        for (g_297 = 8; (g_297 >= 0); g_297 -= 1)
        {
            unsigned short l_760 = 9UL;
            int **l_761 = &l_749;
            int i;
            for (g_242 = 2; (g_242 <= 8); g_242 += 1)
            {
                int *l_758 = (void*)0;
                int *l_759[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                int i;
                l_760 = 0x984E226DL;
            }
            (*l_761) = &g_207[p_19];
            (*l_761) = l_762;
        }
        (*l_763) = (void*)0;
        return g_565[p_19];
    }
    return p_19;
}







static unsigned func_23(int * p_24, char p_25)
{
    short l_722 = 0x4F99L;
    char *l_724[8] = {&g_570, &g_565[6], &g_570, &g_565[6], &g_570, &g_565[6], &g_570, &g_565[6]};
    char **l_723[7] = {&l_724[1], &l_724[1], &l_724[1], &l_724[1], &l_724[1], &l_724[1], &l_724[1]};
    int *l_727 = &g_3[2][2];
    int *l_730 = &g_66;
    unsigned short *l_733 = &g_193;
    int **l_739 = &l_727;
    int l_743 = 1L;
    int i;
    for (g_91 = 0; (g_91 > 46); g_91 = safe_add_func_int32_t_s_s(g_91, 1))
    {
        unsigned *l_716 = (void*)0;
        int l_717 = 0x0FCB9467L;
        short *l_720 = &g_678;
        int l_721 = 0x6D0D3721L;
        char **l_725 = (void*)0;
        int *l_726 = &g_207[7];
        (*l_726) = ((l_717 = (safe_lshift_func_int16_t_s_s(((void*)0 != p_24), p_25))) > ((((*l_720) = (safe_rshift_func_uint16_t_u_u(65526UL, 8))) , (l_721 == l_722)) < ((l_723[4] == l_725) > func_58(g_176))));
    }
    (*l_739) = (g_72 = l_727);
    for (g_66 = 0; (g_66 > (-22)); g_66--)
    {
        if ((*p_24))
            break;
        for (g_156 = 0; (g_156 <= 1); g_156 += 1)
        {
            for (p_25 = 0; (p_25 <= 1); p_25 += 1)
            {
                unsigned char l_742 = 0xABL;
                l_743 = l_742;
            }
            return p_25;
        }
        for (g_678 = (-3); (g_678 < (-25)); --g_678)
        {
            for (g_91 = (-28); (g_91 <= 9); g_91++)
            {
                (*l_739) = &g_55[1];
            }
            if ((*g_72))
                continue;
        }
    }
    (*l_739) = p_24;
    return (**l_739);
}







static int * const func_33(int * p_34)
{
    int **l_504 = &g_72;
    int *l_506 = &g_6;
    int **l_505 = &l_506;
    unsigned char * const *l_518 = (void*)0;
    unsigned * const l_567[10] = {&g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117, &g_117};
    unsigned * const *l_566 = &l_567[4];
    unsigned *l_583 = &g_117;
    int l_626[6][2][10];
    char *l_633 = &g_565[1];
    int l_650 = (-1L);
    unsigned char l_651[5][5] = {{5UL, 0xF4L, 0x74L, 247UL, 247UL}, {5UL, 0xF4L, 0x74L, 247UL, 247UL}, {5UL, 0xF4L, 0x74L, 247UL, 247UL}, {5UL, 0xF4L, 0x74L, 247UL, 247UL}, {5UL, 0xF4L, 0x74L, 247UL, 247UL}};
    unsigned short l_658 = 0x1CF8L;
    short *l_705 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
                l_626[i][j][k] = 0xB3C672E5L;
        }
    }
    (*l_505) = ((*l_504) = &g_55[0]);
    for (g_242 = 0; (g_242 >= 24); g_242 = safe_add_func_int32_t_s_s(g_242, 7))
    {
        (*l_504) = &g_207[7];
        (*l_506) = 0x94650841L;
    }
    for (g_297 = 28; (g_297 <= (-26)); g_297 = safe_sub_func_int8_t_s_s(g_297, 1))
    {
        char l_538 = 4L;
        int l_542 = 1L;
        int l_543 = 1L;
        int *l_544 = &g_66;
        unsigned char **l_546 = (void*)0;
        unsigned char ***l_545[7] = {&l_546, &l_546, (void*)0, &l_546, &l_546, (void*)0, &l_546};
        unsigned *l_574 = &g_97;
        unsigned **l_573 = &l_574;
        unsigned char **l_592 = &g_268;
        int l_594 = (-6L);
        int *l_655 = &g_6;
        int i;
        for (g_121 = 27; (g_121 < 31); g_121++)
        {
            unsigned char **l_517 = &g_268;
            unsigned char * const **l_519 = &l_518;
            unsigned short *l_526[2][10] = {{&g_242, &g_193, &g_193, &g_193, &g_242, &g_242, &g_242, &g_193, &g_193, &g_193}, {&g_242, &g_193, &g_193, &g_193, &g_242, &g_242, &g_242, &g_193, &g_193, &g_193}};
            unsigned short ** const l_525[9] = {&l_526[0][3], &l_526[0][7], &l_526[0][3], &l_526[0][7], &l_526[0][3], &l_526[0][7], &l_526[0][3], &l_526[0][7], &l_526[0][3]};
            int *l_531[4];
            unsigned char ****l_547 = &l_545[6];
            int *l_552[2];
            char *l_561 = (void*)0;
            char *l_562 = &l_538;
            unsigned short l_563 = 0x07DCL;
            char *l_564 = &g_565[4];
            unsigned * const **l_568 = &l_566;
            char *l_569 = &g_570;
            int i, j;
            for (i = 0; i < 4; i++)
                l_531[i] = &g_55[1];
            for (i = 0; i < 2; i++)
                l_552[i] = &g_207[7];
        }
        for (l_538 = 0; (l_538 != (-30)); --l_538)
        {
            const char l_629[9][5] = {{(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}, {(-1L), 0x30L, (-1L), 0x30L, (-1L)}};
            int l_686 = 1L;
            int l_687 = 9L;
            int i, j;
        }
    }
    return p_34;
}







static int * func_35(short p_36, const int p_37, int * p_38, int * p_39, short p_40)
{
    unsigned char l_50 = 255UL;
    int *l_54[9][7][4] = {{{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}, {{&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}, {&g_3[2][2], &g_3[0][1], (void*)0, &g_3[2][2]}}};
    unsigned short *l_480 = &g_193;
    int **l_490[7] = {&l_54[4][3][3], &l_54[5][4][0], &l_54[4][3][3], &l_54[5][4][0], &l_54[4][3][3], &l_54[5][4][0], &l_54[4][3][3]};
    unsigned char l_501 = 255UL;
    int l_502 = 0xACD8556FL;
    int i, j, k;
    g_55[1] = (g_207[7] = (1UL ^ (safe_unary_minus_func_int8_t_s(((func_44(l_50, (((*l_480) = func_51(p_38, l_54[3][5][2])) , (safe_unary_minus_func_int32_t_s((*g_72)))), (g_192 , (g_3[2][2] <= ((p_37 != g_6) , 0xE37FL))), p_38, g_3[0][5]) | g_207[7]) == p_36)))));
    g_345 = &g_207[1];
    g_55[1] = (safe_sub_func_int8_t_s_s(func_44(((((*g_72) == (l_502 = (safe_sub_func_int32_t_s_s((p_40 & (safe_add_func_int8_t_s_s(g_159[1][1][1], (g_6 < (((((65535UL != (0xFF21DCC8L < 0xEF42609AL)) >= (safe_add_func_uint32_t_u_u(p_37, (l_501 == (*p_39))))) , (*g_268)) >= 0x9BL) < p_37))))), g_91)))) < p_37) , (*g_72)), (*p_39), p_36, p_38, p_40), p_40));
    return &g_66;
}







static unsigned char func_44(int p_45, int p_46, const short p_47, int * const p_48, unsigned short p_49)
{
    char l_486 = 0L;
    char *l_487[10][9][2] = {{{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}, {{&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}, {&l_486, &g_297}}};
    int *l_488[6][6] = {{&g_55[1], &g_6, &g_207[3], &g_6, &g_55[1], &g_6}, {&g_55[1], &g_6, &g_207[3], &g_6, &g_55[1], &g_6}, {&g_55[1], &g_6, &g_207[3], &g_6, &g_55[1], &g_6}, {&g_55[1], &g_6, &g_207[3], &g_6, &g_55[1], &g_6}, {&g_55[1], &g_6, &g_207[3], &g_6, &g_55[1], &g_6}, {&g_55[1], &g_6, &g_207[3], &g_6, &g_55[1], &g_6}};
    int **l_489[6] = {&l_488[3][4], &l_488[3][4], &l_488[3][3], &l_488[3][4], &l_488[3][4], &l_488[3][3]};
    int i, j, k;
    (*g_72) = ((safe_rshift_func_int16_t_s_u((g_207[1] & (g_297 = (safe_add_func_int32_t_s_s((*g_72), l_486)))), 5)) | l_486);
    l_488[3][4] = &p_46;
    g_55[1] = func_51(&p_45, (p_45 , (g_72 = &g_66)));
    p_46 = (((*g_72) = (*g_345)) > g_91);
    return (*g_268);
}







static unsigned short func_51(int * p_52, int * p_53)
{
    char l_99[4] = {0xF3L, 0x74L, 0xF3L, 0x74L};
    int l_122[2];
    short *l_191 = &g_192;
    int l_237[3];
    unsigned *l_303[2];
    unsigned ** const l_302 = &l_303[1];
    char *l_358 = &l_99[3];
    const int l_365 = 0x3E13BED7L;
    unsigned short *l_372[10][3] = {{(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}, {(void*)0, &g_242, (void*)0}};
    unsigned short **l_371 = &l_372[1][1];
    int l_387 = 0x751F6BFDL;
    int *l_409 = &l_237[2];
    int l_410 = 0xAA90955CL;
    int *l_457 = (void*)0;
    int **l_461 = &l_409;
    unsigned short l_466 = 8UL;
    unsigned l_468 = 0x19806A1CL;
    char l_479[4][2][5] = {{{0x25L, 0x6DL, 4L, 0x6DL, 0x25L}, {0x25L, 0x6DL, 4L, 0x6DL, 0x25L}}, {{0x25L, 0x6DL, 4L, 0x6DL, 0x25L}, {0x25L, 0x6DL, 4L, 0x6DL, 0x25L}}, {{0x25L, 0x6DL, 4L, 0x6DL, 0x25L}, {0x25L, 0x6DL, 4L, 0x6DL, 0x25L}}, {{0x25L, 0x6DL, 4L, 0x6DL, 0x25L}, {0x25L, 0x6DL, 4L, 0x6DL, 0x25L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_122[i] = 2L;
    for (i = 0; i < 3; i++)
        l_237[i] = 0x60E46FA9L;
    for (i = 0; i < 2; i++)
        l_303[i] = &g_97;
    for (g_55[1] = 4; (g_55[1] <= 28); ++g_55[1])
    {
        int *l_64 = &g_6;
        int *l_65 = &g_66;
        unsigned l_230 = 0xAE251091L;
        unsigned char *l_269 = &g_159[1][1][1];
        unsigned short *l_334 = &g_242;
        int * const *l_462[6][8];
        int * const **l_463 = &l_462[2][4];
        unsigned *l_467 = &g_121;
        int *l_472[8][8] = {{&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}, {&g_55[1], &l_122[1], &g_55[1], &g_55[1], &g_55[1], &l_122[0], &g_55[0], &l_122[0]}};
        int * const l_474 = &g_3[2][2];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 8; j++)
                l_462[i][j] = &l_409;
        }
    }
    for (g_91 = 0; (g_91 != 19); g_91 = safe_add_func_uint16_t_u_u(g_91, 1))
    {
        unsigned short l_478 = 0x0798L;
        for (g_242 = 0; (g_242 <= 2); g_242 += 1)
        {
            return l_122[1];
        }
        l_479[2][1][4] = func_60(&g_55[1], (g_97 = 0x7B7EE849L), l_478);
    }
    return g_117;
}







static unsigned func_58(unsigned p_59)
{
    int *l_102 = &g_66;
    (*l_102) = (safe_mod_func_int16_t_s_s(func_60(&g_55[0], g_3[3][5], (*g_72)), g_55[1]));
    return p_59;
}







static unsigned char func_60(int * p_61, unsigned p_62, int p_63)
{
    int l_73 = 8L;
    unsigned l_83 = 0xB3F497EEL;
    unsigned *l_90[10];
    int *l_92 = (void*)0;
    int *l_93[4][6];
    short l_94 = 1L;
    unsigned *l_95 = (void*)0;
    unsigned *l_96 = &g_97;
    int **l_98 = &l_93[3][2];
    int i, j;
    for (i = 0; i < 10; i++)
        l_90[i] = &g_91;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
            l_93[i][j] = (void*)0;
    }
    for (g_66 = 0; (g_66 <= 8); ++g_66)
    {
        return p_63;
    }
    for (p_62 = (-23); (p_62 > 15); p_62 = safe_add_func_int16_t_s_s(p_62, 4))
    {
        int l_78 = 0x6A608834L;
        if (g_55[0])
            break;
        if ((safe_unary_minus_func_int8_t_s(p_62)))
        {
            g_72 = &g_55[1];
        }
        else
        {
            return l_73;
        }
        for (p_63 = 0; (p_63 < (-7)); --p_63)
        {
            l_78 = (!(safe_sub_func_uint16_t_u_u(p_62, (l_73 = p_63))));
        }
        g_66 = 0x401BC10BL;
    }
    (*l_98) = (((*l_96) = (safe_add_func_int16_t_s_s((p_63 , (safe_add_func_uint16_t_u_u((l_83 || p_63), ((safe_mod_func_uint16_t_u_u(0xB1DFL, p_62)) <= ((g_66 = (((g_55[1] , ((safe_mod_func_int16_t_s_s(g_55[1], (((l_73 = (safe_mod_func_int32_t_s_s(l_73, (*g_72)))) == 4294967289UL) && (-1L)))) , &l_73)) == &g_55[1]) | l_83)) <= l_94))))), p_62))) , &g_6);
    return p_63;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_55[i], "g_55[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_159[i][j][k], "g_159[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_207[i], "g_207[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_395[i], "g_395[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_565[i], "g_565[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_977[i], "g_977[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
