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


struct S0 {
   char f0;
   signed f1 : 19;
   unsigned f2;
   unsigned char f3;
   unsigned char f4;
   int f5;
   int f6;
   short f7;
   unsigned f8;
};

union U1 {
   const int f0;
   char * f1;
};

union U2 {
   int f0;
   int f1;
   unsigned f2;
   const unsigned f3 : 5;
   unsigned f4;
};

union U3 {
   unsigned f0;
   unsigned f1 : 17;
};

union U4 {
   unsigned short f0;
   const char f1;
   unsigned char f2;
   int f3;
};


static char g_5 = 0L;
static struct S0 g_16 = {0xEAL,139,0UL,0x4EL,249UL,0x5AB4D258L,1L,-1L,0x65835A7AL};
static char *g_24 = (void*)0;
static char **g_23 = &g_24;
static char **g_25 = &g_24;
static unsigned short g_27 = 0x40C8L;
static unsigned char g_32[4] = {1UL, 251UL, 1UL, 251UL};
static unsigned char g_53 = 9UL;
static union U2 g_56 = {-3L};
static struct S0 g_62 = {0x7CL,364,0xE4C08A2BL,0x53L,1UL,0x1B7A1713L,1L,0x16D8L,2UL};
static int *g_87[8][2] = {{&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}, {&g_16.f6, &g_16.f6}};
static struct S0 g_91 = {1L,645,0x51B20E94L,0x99L,0xFCL,0x46356B4AL,-3L,-7L,1UL};
static const char g_163 = (-8L);
static const char g_165 = 0x3DL;
static const union U3 g_180 = {0xF9319D2EL};
static union U3 g_186[10][3][2] = {{{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}, {{{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}, {{0x9CEF7823L}, {1UL}}}};
static unsigned g_193 = 0UL;
static const struct S0 *g_265 = (void*)0;
static struct S0 g_268 = {1L,-507,0x8ED091B6L,0x09L,1UL,-1L,0x2C7827C2L,0L,0UL};
static union U2 g_326 = {0x22979685L};
static unsigned char g_350 = 0xF3L;
static union U3 *g_360[7][6] = {{&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}, {&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}, {&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}, {&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}, {&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}, {&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}, {&g_186[5][1][1], &g_186[5][1][1], (void*)0, &g_186[9][2][1], &g_186[9][2][1], &g_186[9][2][1]}};
static int g_365 = (-1L);
static int *g_387 = &g_91.f6;
static int g_406 = 1L;
static union U4 g_441 = {0xD9A0L};
static union U4 g_443[4] = {{0x18A4L}, {0xA164L}, {0x18A4L}, {0xA164L}};
static struct S0 *g_449 = &g_91;
static struct S0 **g_448 = &g_449;
static struct S0 ***g_447 = &g_448;
static union U1 g_452 = {8L};
static union U1 g_455 = {0xA5528012L};
static short *g_580[9][8] = {{&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}, {&g_91.f7, &g_16.f7, &g_91.f7, &g_62.f7, &g_62.f7, &g_91.f7, &g_16.f7, &g_16.f7}};
static unsigned g_600 = 4294967292UL;
static int g_692 = 0xB67B46F7L;
static int ** const g_694 = &g_87[4][1];
static int ** const *g_693[2][4][10] = {{{&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}, {&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}, {&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}, {&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}}, {{&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}, {&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}, {&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}, {&g_694, (void*)0, (void*)0, &g_694, (void*)0, (void*)0, &g_694, &g_694, &g_694, &g_694}}};
static const union U3 g_712 = {0xC89D2A72L};
static unsigned g_718 = 0x25F12D34L;
static union U1 g_795 = {-2L};
static union U2 *g_845[4] = {&g_326, &g_326, &g_326, &g_326};
static union U2 **g_844 = &g_845[3];
static char g_883 = 0x70L;
static unsigned g_888 = 0x2E2C94D0L;
static unsigned short *g_903 = &g_27;
static union U4 g_996 = {65535UL};
static union U4 *g_995 = &g_996;
static union U1 g_1123 = {-1L};
static unsigned char g_1149 = 0x1CL;
static unsigned char g_1168 = 0x0AL;
static unsigned short g_1189 = 0UL;
static union U4 *g_1242 = &g_441;
static union U4 ** const g_1241 = &g_1242;
static union U4 ** const *g_1240 = &g_1241;
static unsigned g_1317 = 0x1394E27DL;
static unsigned **g_1373 = (void*)0;
static unsigned ***g_1372 = &g_1373;
static unsigned char g_1419 = 0xC5L;
static union U2 g_1428 = {0x6A264654L};
static unsigned short **g_1444 = &g_903;
static unsigned short **g_1446[8][7][4] = {{{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}, {{&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}, {&g_903, &g_903, &g_903, &g_903}}};
static unsigned g_1453 = 0x9E7CBD0BL;
static unsigned g_1464[5] = {1UL, 0xD768CE71L, 1UL, 0xD768CE71L, 1UL};
static const char **g_1509 = (void*)0;
static union U1 *g_1548 = &g_452;
static union U1 **g_1547[9] = {&g_1548, &g_1548, &g_1548, &g_1548, &g_1548, &g_1548, &g_1548, &g_1548, &g_1548};
static const union U4 g_1612 = {65533UL};
static const union U4 *g_1611 = &g_1612;
static int **g_1672 = &g_87[0][1];
static int ***g_1671 = &g_1672;
static int ****g_1670 = &g_1671;
static const char *g_1679 = &g_163;
static const char **g_1678 = &g_1679;



static const union U4 func_1(void);
static const char ** func_2(struct S0 p_3);
static unsigned func_6(char * p_7, union U3 p_8, int p_9);
static union U3 func_11(unsigned short p_12, struct S0 p_13, char ** p_14);
static unsigned short func_20(short p_21, union U3 p_22);
static const int func_33(union U2 p_34, int p_35);
static union U2 func_36(const unsigned short p_37);
static const unsigned short func_38(unsigned short * p_39, unsigned short * p_40, const union U3 p_41);
static unsigned short * func_43(union U2 p_44);
static union U2 func_45(union U3 p_46);
static const union U4 func_1(void)
{
    struct S0 l_4 = {0xF9L,-220,4294967295UL,0UL,1UL,-1L,0xC7AB89BDL,5L,1UL};
    const char ***l_1677[4];
    int * const l_1680[9] = {(void*)0, &g_406, (void*)0, &g_406, (void*)0, &g_406, (void*)0, &g_406, (void*)0};
    int *l_1681[10][3] = {{&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}, {&l_4.f6, &g_406, &g_268.f6}};
    unsigned char l_1682 = 1UL;
    unsigned l_1683[1];
    const union U4 l_1684 = {0x4A95L};
    int i, j;
    for (i = 0; i < 4; i++)
        l_1677[i] = &g_1509;
    for (i = 0; i < 1; i++)
        l_1683[i] = 0x0ABC9676L;
    g_1678 = func_2(l_4);
    l_1681[1][1] = l_1680[8];
    l_1683[0] = l_1682;
    return l_1684;
}







static const char ** func_2(struct S0 p_3)
{
    char *l_10 = &g_5;
    int l_15 = (-3L);
    char **l_17 = &l_10;
    int l_1664 = (-1L);
    int **l_1669 = (void*)0;
    int ***l_1668 = &l_1669;
    int ****l_1667[4][2][9] = {{{(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}, {(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}}, {{(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}, {(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}}, {{(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}, {(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}}, {{(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}, {(void*)0, &l_1668, &l_1668, &l_1668, (void*)0, (void*)0, &l_1668, (void*)0, (void*)0}}};
    short *l_1673 = &g_268.f7;
    char l_1674[5][8][6] = {{{7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}}, {{7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}}, {{7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}}, {{7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}}, {{7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}, {7L, 0L, 1L, (-8L), 0x95L, 0xD0L}}};
    const char *l_1676[7][2] = {{&g_16.f0, &g_62.f0}, {&g_16.f0, &g_62.f0}, {&g_16.f0, &g_62.f0}, {&g_16.f0, &g_62.f0}, {&g_16.f0, &g_62.f0}, {&g_16.f0, &g_62.f0}, {&g_16.f0, &g_62.f0}};
    const char **l_1675[9] = {&l_1676[4][1], &l_1676[4][1], &l_1676[4][1], &l_1676[4][1], &l_1676[4][1], &l_1676[4][1], &l_1676[4][1], &l_1676[4][1], &l_1676[4][1]};
    int i, j, k;
    l_1664 ^= (g_5 < func_6(l_10, func_11(l_15, g_16, l_17), (p_3.f6 &= (-9L))));
    for (g_91.f0 = 0; (g_91.f0 > (-11)); g_91.f0 = safe_sub_func_uint8_t_u_u(g_91.f0, 6))
    {
        (**g_1240) = (void*)0;
    }
    p_3.f1 = ((((*l_1673) |= (p_3.f7 = ((g_1670 = l_1667[3][1][3]) == &g_693[0][2][4]))) & (l_1674[1][7][5] | p_3.f0)) > p_3.f6);
    return g_1509;
}







static unsigned func_6(char * p_7, union U3 p_8, int p_9)
{
    short l_1359 = (-1L);
    int l_1367 = 0L;
    unsigned ***l_1376 = (void*)0;
    int **l_1392 = &g_87[0][1];
    union U2 l_1403[2] = {{-8L}, {-8L}};
    struct S0 l_1409 = {0xFEL,540,0xCFEE1698L,254UL,0x65L,1L,-10L,0xF235L,0xB0AC20B6L};
    unsigned short **l_1443 = &g_903;
    short l_1538 = (-9L);
    unsigned char l_1553 = 0UL;
    int l_1606 = 0L;
    const union U3 l_1608[3] = {{0x119A8001L}, {0x119A8001L}, {0x119A8001L}};
    unsigned l_1621[4] = {0x5445E500L, 0x168E0BF4L, 0x5445E500L, 0x168E0BF4L};
    unsigned char l_1633 = 0x89L;
    int l_1660[3];
    unsigned l_1661 = 0UL;
    int i;
    for (i = 0; i < 3; i++)
        l_1660[i] = 0xA255AA24L;
    p_9 = l_1359;
    for (g_268.f7 = 25; (g_268.f7 <= (-12)); g_268.f7 = safe_sub_func_int16_t_s_s(g_268.f7, 6))
    {
        short l_1366 = 0xF730L;
        p_9 &= ((*g_447) != (*g_447));
        l_1367 |= (safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(p_8.f1, 0xE9L)) && l_1366), (*p_7)));
    }
    (*g_694) = &l_1367;
    for (g_996.f2 = 0; (g_996.f2 == 47); g_996.f2++)
    {
        unsigned ***l_1375[10][5][2] = {{{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}, {{&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}, {&g_1373, &g_1373}}};
        int l_1387 = 0xF1598BD6L;
        union U2 l_1425 = {0xDA4E8DD4L};
        int l_1485 = (-1L);
        int l_1486 = 0L;
        int l_1487 = 1L;
        int l_1488 = 0x4F2704F0L;
        unsigned char l_1489 = 1UL;
        int l_1494 = 0L;
        struct S0 **l_1551[4][4][9] = {{{&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}}, {{&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}}, {{&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}}, {{&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}, {&g_449, &g_449, &g_449, &g_449, (void*)0, &g_449, (void*)0, &g_449, &g_449}}};
        unsigned short *l_1559 = &g_27;
        union U4 * const *l_1565 = &g_995;
        unsigned char l_1656 = 1UL;
        int i, j, k;
        for (g_1189 = 0; (g_1189 == 45); g_1189 = safe_add_func_uint8_t_u_u(g_1189, 3))
        {
            unsigned ****l_1374[4] = {(void*)0, &g_1372, (void*)0, &g_1372};
            int l_1377 = 0x01605274L;
            union U2 *l_1380 = (void*)0;
            int *l_1381 = (void*)0;
            int *l_1382 = &g_91.f6;
            int i;
            l_1377 &= ((l_1375[9][0][1] = g_1372) == l_1376);
            (*l_1382) = (p_9 = (safe_sub_func_uint16_t_u_u(0xB59EL, ((void*)0 != l_1380))));
        }
        if (((g_186[9][2][1].f0 ^= ((safe_lshift_func_uint8_t_u_s((p_9 | (safe_rshift_func_int8_t_s_s((p_9 <= (g_1189 = ((((((*g_903) = (*g_903)) != l_1387) & (((0xFBL < ((safe_mod_func_uint8_t_u_u((l_1367 != p_8.f1), g_600)) <= ((l_1392 != (void*)0) < l_1387))) < (*p_7)) <= g_91.f0)) == 0x1CC5314DL) < 8UL))), 5))), 6)) <= p_8.f0)) <= l_1387))
        {
            char l_1395 = 0xF5L;
            short *l_1396 = &g_268.f7;
            unsigned short **l_1404 = &g_903;
            unsigned short *l_1406[10];
            unsigned short **l_1405 = &l_1406[4];
            int *l_1407 = (void*)0;
            int *l_1408 = &g_268.f6;
            int l_1416[8][3] = {{(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}, {(-9L), 0xC7D21149L, (-9L)}};
            int *l_1423 = (void*)0;
            unsigned short l_1437 = 0xE1DDL;
            union U3 l_1515 = {0xE0C48A8EL};
            unsigned short l_1587 = 9UL;
            int i, j;
            for (i = 0; i < 10; i++)
                l_1406[i] = &g_1189;
            if (((safe_lshift_func_int16_t_s_u(((*l_1396) = l_1395), 5)) < ((safe_lshift_func_int16_t_s_u((l_1387 && p_9), 14)) < (0L < ((*l_1408) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((*g_903), 15)), p_8.f1)))))))
            {
                p_9 ^= (&p_8 == (void*)0);
                (***g_447) = l_1409;
            }
            else
            {
                int l_1415[8][7][4] = {{{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}, {{(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}, {(-3L), 1L, 1L, 1L}}};
                int *l_1422 = &g_692;
                union U2 *l_1426 = (void*)0;
                int l_1432 = 0xC5E41CD9L;
                int l_1433 = 0x84110BADL;
                int l_1434 = 0L;
                int l_1435 = 0x2CC4503EL;
                char *l_1475 = &g_62.f0;
                int *l_1476 = &g_62.f6;
                int *l_1477 = (void*)0;
                int *l_1478 = &g_62.f6;
                int *l_1479 = &g_62.f6;
                int *l_1480 = &g_406;
                int *l_1481 = &l_1433;
                int *l_1482 = &l_1434;
                int *l_1483 = &g_16.f6;
                int *l_1484[7][2][4] = {{{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}, {{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}, {{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}, {{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}, {{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}, {{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}, {{(void*)0, &g_62.f6, &g_91.f6, &l_1367}, {(void*)0, &g_62.f6, &g_91.f6, &l_1367}}};
                unsigned l_1520[9] = {0x753CB2E9L, 4294967295UL, 0x753CB2E9L, 4294967295UL, 0x753CB2E9L, 4294967295UL, 0x753CB2E9L, 4294967295UL, 0x753CB2E9L};
                union U1 *l_1546[8][8] = {{(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}, {(void*)0, &g_1123, &g_452, &g_795, &g_1123, (void*)0, &g_1123, &g_795}};
                union U1 **l_1545 = &l_1546[0][1];
                int i, j, k;
                if (p_8.f1)
                {
                    int *l_1412 = &g_406;
                    int l_1417 = 0x88FBF0E9L;
                    int l_1418 = 0x4A561551L;
                    union U2 *l_1427 = &g_1428;
                    int l_1436 = 0x31A5F911L;
                    struct S0 l_1442 = {0xB5L,690,0x8C1B1F03L,253UL,0xADL,0x107D2E57L,0xA3ECDD80L,0xA489L,0x73FB107BL};
                    (*l_1412) ^= ((*p_7) > (safe_mod_func_uint32_t_u_u((*l_1408), p_8.f0)));
                    if ((*l_1412))
                    {
                        int *l_1413 = &g_406;
                        int *l_1414[2][3] = {{&l_1367, &l_1367, &l_1387}, {&l_1367, &l_1367, &l_1387}};
                        int i, j;
                        g_1419++;
                        l_1423 = l_1422;
                    }
                    else
                    {
                        int l_1424 = 5L;
                        return l_1424;
                    }
                    if (l_1425.f4)
                    {
                        l_1427 = l_1426;
                        (*l_1408) &= p_8.f0;
                        return p_8.f0;
                    }
                    else
                    {
                        short l_1429 = (-3L);
                        int *l_1430 = &l_1418;
                        int *l_1431[2][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1431[i][j] = &l_1367;
                        }
                        --l_1437;
                    }
                    for (g_406 = 15; (g_406 <= (-16)); --g_406)
                    {
                        unsigned short **l_1445 = &l_1406[5];
                        (**g_448) = l_1442;
                        (*l_1423) |= ((g_1444 = l_1443) == (g_1446[5][2][3] = l_1445));
                        (*l_1423) = (safe_mod_func_uint8_t_u_u(1UL, 0xE2L));
                    }
                }
                else
                {
                    unsigned short l_1449[10];
                    int l_1461 = 3L;
                    int l_1462 = (-1L);
                    short l_1463 = 0xDFA3L;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1449[i] = 0xCCF7L;
                    (*l_1408) = 0xDEBEC397L;
                    if (l_1449[2])
                        continue;
                    for (g_365 = (-3); (g_365 < 25); g_365++)
                    {
                        unsigned short l_1452 = 0xA04CL;
                        int *l_1454 = &g_692;
                        int *l_1455 = &g_692;
                        int *l_1456 = &l_1435;
                        int *l_1457 = &g_91.f6;
                        int *l_1458 = &g_406;
                        int *l_1459 = &l_1416[1][0];
                        int *l_1460[10][10] = {{&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}, {&g_268.f6, &g_16.f6, &l_1416[5][2], &g_16.f6, &g_268.f6, &l_1432, &l_1409.f6, &g_16.f6, (void*)0, &g_16.f6}};
                        int i, j;
                        (*g_844) = l_1426;
                        p_9 = ((*l_1408) = l_1452);
                        p_9 |= g_1453;
                        g_1464[0]--;
                    }
                    (*l_1422) = ((*l_1408) = ((safe_sub_func_int8_t_s_s((p_8.f0 < (safe_add_func_uint32_t_u_u(((*p_7) != (safe_add_func_int32_t_s_s(l_1387, (*l_1422)))), ((((safe_lshift_func_int8_t_s_s((*p_7), 3)) <= (0x80L == ((*g_23) != l_1475))) && p_8.f0) > (*p_7))))), 1L)) >= p_8.f0));
                }
                l_1489--;
                if ((((*l_1476) == p_8.f0) && (((*l_1396) = (safe_rshift_func_int8_t_s_s((l_1494 |= ((*l_1475) = (*p_7))), 1))) != l_1387)))
                {
                    int l_1501 = 0xCDA45FD9L;
                    union U1 *l_1512 = (void*)0;
                    union U1 **l_1511 = &l_1512;
                    (***g_447) = (*g_449);
                    for (l_1435 = 3; (l_1435 >= 0); l_1435 -= 1)
                    {
                        union U3 l_1508 = {6UL};
                        const char ***l_1510 = &g_1509;
                        int i;
                        (*l_1480) = ((*l_1479) = g_32[l_1435]);
                        (*l_1482) ^= (safe_sub_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((*l_1408) = (l_1501 <= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((((*l_1476) = (((p_8.f1 >= ((*l_1483) ^= (((*l_1510) = g_1509) != &g_24))) & p_9) ^ 6L)) && 0x3E01CE79L) >= p_8.f0) < 0xE6A0L), 7)), 14)))) != p_8.f1), p_9)), 0x77L)) >= (-3L)) & p_8.f0), p_8.f0));
                        (*g_694) = &p_9;
                        (*l_1422) |= (!((*l_1476) = (l_1488 = l_1501)));
                    }
                    (*l_1511) = &g_1123;
                    if (p_8.f1)
                        break;
                }
                else
                {
                    int l_1523[8][4][6] = {{{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}, {{0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}, {0L, 0x467B47E0L, 8L, 0x439CB61DL, 0x2D34CAA8L, 0xB382E580L}}};
                    struct S0 **l_1550[9][8][2] = {{{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}, {{&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}, {&g_449, &g_449}}};
                    int i, j, k;
                    for (l_1395 = (-26); (l_1395 == (-20)); ++l_1395)
                    {
                        l_1520[3] |= ((p_8.f0 && ((p_8.f0 >= (safe_mod_func_uint8_t_u_u(3UL, 0xB0L))) == (l_1485 | l_1425.f4))) || (l_1387 &= (safe_add_func_int8_t_s_s(0x48L, g_452.f0))));
                        if (p_9)
                            break;
                        if (p_9)
                            continue;
                    }
                    (*l_1482) |= p_8.f1;
                    if ((~(safe_mod_func_int16_t_s_s((l_1488 = (~p_8.f0)), p_8.f1))))
                    {
                        short l_1524 = 0x2365L;
                        int l_1525 = 0x0B913A86L;
                        int l_1526 = 0xC0774064L;
                        unsigned l_1527 = 4294967294UL;
                        const struct S0 *l_1530 = (void*)0;
                        const struct S0 **l_1531 = &l_1530;
                        l_1527++;
                        (*l_1531) = l_1530;
                    }
                    else
                    {
                        union U1 ***l_1549 = &g_1547[3];
                        int l_1552 = 0x29496F13L;
                        if ((*l_1483))
                            break;
                        (*l_1478) ^= (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((++(*g_903)), ((**l_1405)++))), ((l_1552 = (safe_lshift_func_int16_t_s_u(((((l_1523[0][1][4] < (*l_1408)) <= (p_8.f0 == ((safe_mul_func_int16_t_s_s(6L, (p_8.f0 <= (l_1545 == ((*l_1549) = g_1547[5]))))) && (((l_1550[3][7][1] = (*g_447)) == l_1551[0][0][7]) && (*p_7))))) != p_8.f1) == l_1425.f3), 13))) >= 0x1C77L)));
                        l_1553++;
                    }
                    for (g_441.f2 = 13; (g_441.f2 > 18); g_441.f2 = safe_add_func_int32_t_s_s(g_441.f2, 6))
                    {
                        union U2 l_1558[4] = {{-6L}, {-6L}, {-6L}, {-6L}};
                        union U3 *l_1560 = (void*)0;
                        union U3 *l_1561 = (void*)0;
                        union U3 *l_1562 = &l_1515;
                        int i;
                        (**g_448) = (**g_448);
                        (*l_1478) = (l_1487 = (*l_1483));
                        if ((*l_1422))
                            break;
                    }
                }
                (*l_1480) = (p_8.f0 != p_9);
            }
            p_9 = (p_9 & l_1487);
            p_9 = ((0xAF263C58L < ((*l_1408) &= ((*g_903) || l_1489))) & p_8.f0);
            for (g_1428.f2 = 0; (g_1428.f2 != 7); g_1428.f2 = safe_add_func_uint8_t_u_u(g_1428.f2, 1))
            {
                unsigned char l_1568 = 0x0CL;
                struct S0 l_1588 = {0x9FL,76,0xB8B10249L,255UL,1UL,0xC1A26C4CL,0x3F3C918EL,0xF83DL,0x6D1B1C2DL};
                int * const l_1596[3] = {(void*)0, (void*)0, (void*)0};
                int i;
                if (((void*)0 != l_1565))
                {
                    int *l_1566 = (void*)0;
                    int *l_1567[10][9] = {{(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}, {(void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0, &l_1488, (void*)0}};
                    int i, j;
                    --l_1568;
                    for (l_1485 = 0; (l_1485 >= (-15)); l_1485--)
                    {
                        short l_1575 = (-1L);
                        l_1575 |= (safe_rshift_func_uint16_t_u_s((l_1487 = (**g_1444)), ((*l_1396) ^= (p_9 <= l_1568))));
                    }
                }
                else
                {
                    union U4 * const **l_1580 = &l_1565;
                    (*g_694) = &l_1485;
                    for (l_1409.f2 = 0; (l_1409.f2 >= 17); l_1409.f2++)
                    {
                        return p_8.f0;
                    }
                    if ((safe_sub_func_uint16_t_u_u((((void*)0 == l_1580) == (0UL != ((+l_1488) < ((safe_mod_func_int8_t_s_s((*p_7), (g_62.f0 = (*p_7)))) != ((((safe_add_func_uint16_t_u_u(0xDBCCL, 5L)) && (0xEDB3878EL != l_1587)) && 0x1ACAL) && l_1568))))), p_8.f1)))
                    {
                        (*l_1408) = (0xD6AEL == l_1486);
                        (*l_1408) |= (0x84L & (*p_7));
                        if (p_8.f1)
                            break;
                    }
                    else
                    {
                        (*l_1408) ^= l_1487;
                        (***g_447) = l_1588;
                        if (p_9)
                            continue;
                    }
                    for (g_406 = (-2); (g_406 == 10); g_406 = safe_add_func_int16_t_s_s(g_406, 4))
                    {
                        int l_1591 = 0xCF2E7E6BL;
                        l_1591 = ((*l_1408) = 0x709BD9AFL);
                        if (l_1485)
                            continue;
                        p_9 ^= ((*l_1408) = (safe_add_func_uint32_t_u_u(l_1425.f1, p_8.f1)));
                        (***g_447) = (***g_447);
                    }
                }
                for (l_1488 = 0; (l_1488 == (-28)); l_1488 = safe_sub_func_int32_t_s_s(l_1488, 5))
                {
                    return l_1487;
                }
                (*l_1392) = l_1596[2];
                for (g_91.f4 = 0; (g_91.f4 < 6); ++g_91.f4)
                {
                    struct S0 l_1601 = {5L,470,0x9921E08CL,0xF1L,0x33L,0L,1L,2L,0x2E99C716L};
                    for (g_268.f0 = 0; (g_268.f0 == 26); g_268.f0 = safe_add_func_uint32_t_u_u(g_268.f0, 1))
                    {
                        l_1601 = (***g_447);
                    }
                    for (g_16.f4 = 0; (g_16.f4 != 48); g_16.f4 = safe_add_func_uint32_t_u_u(g_16.f4, 7))
                    {
                        l_1409 = (*g_449);
                        return p_9;
                    }
                    for (l_1485 = 28; (l_1485 > 26); l_1485--)
                    {
                        return l_1606;
                    }
                }
            }
        }
        else
        {
            const union U4 *l_1610 = &g_996;
            int l_1616 = 0x8DD83BD6L;
            const union U3 l_1619 = {0x972B03FFL};
            char l_1630 = 0x60L;
            int l_1632[2];
            union U2 *l_1636[1];
            int l_1657 = 0L;
            int *l_1659[1][6];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1632[i] = 0xCACBF736L;
            for (i = 0; i < 1; i++)
                l_1636[i] = &g_56;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1659[i][j] = &l_1486;
            }
            if (l_1425.f3)
            {
                union U2 l_1607 = {0xD2B0BF17L};
                char ***l_1609 = &g_25;
                unsigned short *l_1617 = &g_1189;
                for (l_1409.f4 = 0; (l_1409.f4 <= 3); l_1409.f4 += 1)
                {
                    unsigned short *l_1618 = &g_1189;
                    short l_1622 = 0x1678L;
                    struct S0 *l_1623 = &l_1409;
                    if ((p_8.f0 && ((l_1409.f1 = (&g_1509 == l_1609)) == (&l_1392 == (void*)0))))
                    {
                        const union U4 **l_1613 = &l_1610;
                        if (p_9)
                            break;
                        (**g_447) = (**g_447);
                        (*l_1613) = (g_1611 = l_1610);
                    }
                    else
                    {
                        union U2 l_1620 = {0x9A216054L};
                        p_9 |= ((safe_rshift_func_int8_t_s_u((((*g_1444) != (*g_1444)) < (l_1616 >= (*p_7))), ((*p_7) <= g_1428.f0))) != 0x53L);
                        l_1621[1] &= 0x2C571BA3L;
                        (*g_694) = &p_9;
                        if (l_1622)
                            continue;
                    }
                    for (g_91.f7 = 0; (g_91.f7 <= 3); g_91.f7 += 1)
                    {
                        int i, j, k;
                        if (l_1485)
                            break;
                        (*g_448) = l_1623;
                        (*g_1241) = (*g_1241);
                    }
                }
            }
            else
            {
                if (p_8.f1)
                    break;
            }
            for (l_1425.f0 = 0; (l_1425.f0 <= (-29)); --l_1425.f0)
            {
                unsigned char l_1626 = 0UL;
                int l_1629 = 0xA977DB18L;
                int l_1631[7] = {0L, 9L, 0L, 9L, 0L, 9L, 0L};
                union U3 l_1649 = {0UL};
                unsigned short *l_1654 = &g_1189;
                int *l_1655[3];
                union U4 **l_1658 = &g_995;
                int i;
                for (i = 0; i < 3; i++)
                    l_1655[i] = &l_1487;
                if (l_1626)
                {
                    int *l_1627 = &l_1486;
                    int *l_1628[4] = {&l_1409.f6, &l_1616, &l_1409.f6, &l_1616};
                    int i;
                    --l_1633;
                    if (p_9)
                        break;
                    (*g_844) = l_1636[0];
                }
                else
                {
                    short l_1640 = 0x478BL;
                    for (g_91.f2 = 0; (g_91.f2 <= 41); g_91.f2 = safe_add_func_uint16_t_u_u(g_91.f2, 5))
                    {
                        const short l_1639[3][9] = {{(-9L), 0xD408L, 4L, 0xD408L, (-9L), 0xD408L, 4L, 0xD408L, (-9L)}, {(-9L), 0xD408L, 4L, 0xD408L, (-9L), 0xD408L, 4L, 0xD408L, (-9L)}, {(-9L), 0xD408L, 4L, 0xD408L, (-9L), 0xD408L, 4L, 0xD408L, (-9L)}};
                        int i, j;
                        (*g_844) = &g_56;
                        l_1640 |= l_1639[2][7];
                    }
                }
                l_1486 |= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_8.f0, (((-1L) >= (safe_add_func_int32_t_s_s((l_1632[1] >= p_8.f0), l_1649.f1))) >= (((l_1657 = ((**g_1444) >= ((l_1616 = (safe_add_func_uint8_t_u_u((~(g_441.f2 = ((void*)0 == l_1654))), p_8.f1))) == l_1656))) <= p_9) <= 2L)))), (-1L))), 0x94BE0A22L)), 2));
                (*l_1658) = (*l_1565);
            }
            l_1661--;
        }
    }
    return p_9;
}







static union U3 func_11(unsigned short p_12, struct S0 p_13, char ** p_14)
{
    unsigned short *l_26 = &g_27;
    int l_28 = 1L;
    const char *l_30 = &g_5;
    const char **l_29 = &l_30;
    union U3 l_31 = {0x399D012CL};
    int l_1001 = 0x8EE1F93DL;
    int l_1003 = 0L;
    int l_1004 = 1L;
    unsigned l_1008 = 0xC6548AF4L;
    union U4 **l_1051 = &g_995;
    union U2 l_1090 = {8L};
    union U1 *l_1120 = &g_455;
    int l_1162[4];
    int l_1165 = 0xF4D5F5BAL;
    int l_1166 = 0L;
    int *l_1194 = &g_692;
    int l_1197 = 0L;
    unsigned l_1198 = 0x86E0CC49L;
    union U3 **l_1203 = &g_360[4][5];
    unsigned l_1209 = 4294967295UL;
    struct S0 l_1220[5][1][3] = {{{{-1L,290,0x0F9BCF61L,0x0BL,0xABL,0xA55B3A65L,0xC8CD8E2AL,0xE6EFL,4294967294UL}, {-2L,-274,0x448539C7L,0x92L,251UL,0xD411980FL,0x86A6D385L,0x9249L,0x53962C50L}, {0xC7L,-0,0x07851E68L,0x93L,0xFDL,-10L,0x1D35860AL,-4L,0x7B38606AL}}}, {{{-1L,290,0x0F9BCF61L,0x0BL,0xABL,0xA55B3A65L,0xC8CD8E2AL,0xE6EFL,4294967294UL}, {-2L,-274,0x448539C7L,0x92L,251UL,0xD411980FL,0x86A6D385L,0x9249L,0x53962C50L}, {0xC7L,-0,0x07851E68L,0x93L,0xFDL,-10L,0x1D35860AL,-4L,0x7B38606AL}}}, {{{-1L,290,0x0F9BCF61L,0x0BL,0xABL,0xA55B3A65L,0xC8CD8E2AL,0xE6EFL,4294967294UL}, {-2L,-274,0x448539C7L,0x92L,251UL,0xD411980FL,0x86A6D385L,0x9249L,0x53962C50L}, {0xC7L,-0,0x07851E68L,0x93L,0xFDL,-10L,0x1D35860AL,-4L,0x7B38606AL}}}, {{{-1L,290,0x0F9BCF61L,0x0BL,0xABL,0xA55B3A65L,0xC8CD8E2AL,0xE6EFL,4294967294UL}, {-2L,-274,0x448539C7L,0x92L,251UL,0xD411980FL,0x86A6D385L,0x9249L,0x53962C50L}, {0xC7L,-0,0x07851E68L,0x93L,0xFDL,-10L,0x1D35860AL,-4L,0x7B38606AL}}}, {{{-1L,290,0x0F9BCF61L,0x0BL,0xABL,0xA55B3A65L,0xC8CD8E2AL,0xE6EFL,4294967294UL}, {-2L,-274,0x448539C7L,0x92L,251UL,0xD411980FL,0x86A6D385L,0x9249L,0x53962C50L}, {0xC7L,-0,0x07851E68L,0x93L,0xFDL,-10L,0x1D35860AL,-4L,0x7B38606AL}}}};
    int l_1273 = (-1L);
    int l_1296 = 1L;
    int l_1298 = 0xBD31E768L;
    int l_1299 = (-9L);
    int l_1301 = 0L;
    int l_1302 = 3L;
    int l_1303[5][3] = {{0x722586FFL, 0x722586FFL, (-1L)}, {0x722586FFL, 0x722586FFL, (-1L)}, {0x722586FFL, 0x722586FFL, (-1L)}, {0x722586FFL, 0x722586FFL, (-1L)}, {0x722586FFL, 0x722586FFL, (-1L)}};
    short l_1316 = 0x7C5AL;
    int **l_1349[7][10] = {{(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}, {(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}, {(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}, {(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}, {(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}, {(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}, {(void*)0, &g_87[3][1], &g_387, &g_87[0][1], &g_87[0][1], (void*)0, &l_1194, &g_387, &g_387, &g_387}};
    int ***l_1348 = &l_1349[4][8];
    unsigned char *l_1350 = &g_268.f3;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1162[i] = (-1L);
    if ((safe_mul_func_uint16_t_u_u(func_20((((((g_23 == g_25) == (((((g_16.f3 >= (!((*l_26) |= (0L | p_13.f3)))) <= (l_28 == p_13.f0)) == (p_14 != l_29)) > 0x02C9L) ^ g_16.f3)) > l_28) == g_5) <= p_13.f8), l_31), g_883)))
    {
        char l_988 = (-1L);
        union U3 l_989[10] = {{0xCAAC9D64L}, {0xCAAC9D64L}, {0xF1856023L}, {0xCAAC9D64L}, {0xCAAC9D64L}, {0xF1856023L}, {0xCAAC9D64L}, {0xCAAC9D64L}, {0xF1856023L}, {0xCAAC9D64L}};
        unsigned l_990[5];
        int l_1002 = (-1L);
        int l_1005 = 0x325D0A79L;
        int l_1006 = 0L;
        int l_1007[4];
        int i;
        for (i = 0; i < 5; i++)
            l_990[i] = 0x0ECFC882L;
        for (i = 0; i < 4; i++)
            l_1007[i] = 0xEADF1886L;
        l_990[3] = (g_443[0].f1 == (**p_14));
        for (g_268.f3 = 0; (g_268.f3 < 57); g_268.f3 = safe_add_func_uint16_t_u_u(g_268.f3, 7))
        {
            union U4 *l_993 = &g_443[0];
            union U4 **l_994 = &l_993;
            g_995 = ((*l_994) = l_993);
            if (p_13.f7)
                continue;
            if (l_31.f0)
                break;
        }
        for (g_16.f3 = 0; (g_16.f3 < 14); g_16.f3 = safe_add_func_uint32_t_u_u(g_16.f3, 2))
        {
            int *l_999 = &g_62.f6;
            int *l_1000[3][3] = {{&l_28, (void*)0, &l_28}, {&l_28, (void*)0, &l_28}, {&l_28, (void*)0, &l_28}};
            int i, j;
            ++l_1008;
            (*g_694) = l_999;
        }
    }
    else
    {
        int *l_1016 = &g_91.f6;
        unsigned short *l_1058 = &g_996.f0;
        union U1 *l_1119 = &g_455;
        unsigned l_1129 = 0x3DEB282BL;
        int l_1155 = (-2L);
        int l_1160[4][6] = {{0L, 0L, 1L, 0L, 0L, 1L}, {0L, 0L, 1L, 0L, 0L, 1L}, {0L, 0L, 1L, 0L, 0L, 1L}, {0L, 0L, 1L, 0L, 0L, 1L}};
        int l_1175 = (-3L);
        unsigned short l_1180 = 0x46B1L;
        const union U3 l_1206[8] = {{0xEFC6EC84L}, {0xEFC6EC84L}, {0xEFC6EC84L}, {0xEFC6EC84L}, {0xEFC6EC84L}, {0xEFC6EC84L}, {0xEFC6EC84L}, {0xEFC6EC84L}};
        unsigned l_1214 = 0x88899529L;
        int l_1300 = 0x1C6036D8L;
        int i, j;
        if ((safe_mul_func_int16_t_s_s((&p_12 == (void*)0), (safe_lshift_func_uint8_t_u_s(p_13.f6, 7)))))
        {
            struct S0 l_1015 = {-1L,-256,0xEB3F7518L,0x56L,0xF3L,0xA42D6F40L,0x5910764DL,0xEF99L,4294967286UL};
            l_1015 = l_1015;
            l_1016 = l_1016;
            (*l_1016) = p_13.f6;
        }
        else
        {
            const unsigned l_1022 = 0x8FDA6785L;
            const union U4 *l_1040[10][6][4] = {{{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}, {{&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}, {&g_996, &g_443[0], &g_441, &g_996}}};
            int *l_1044 = &l_28;
            union U2 l_1046 = {-1L};
            char *l_1071 = &g_883;
            unsigned char *l_1080 = &g_62.f3;
            unsigned l_1105[5][4] = {{1UL, 0xC1208FE0L, 0x59B006AEL, 0xC1208FE0L}, {1UL, 0xC1208FE0L, 0x59B006AEL, 0xC1208FE0L}, {1UL, 0xC1208FE0L, 0x59B006AEL, 0xC1208FE0L}, {1UL, 0xC1208FE0L, 0x59B006AEL, 0xC1208FE0L}, {1UL, 0xC1208FE0L, 0x59B006AEL, 0xC1208FE0L}};
            union U1 *l_1122 = &g_1123;
            unsigned short l_1140 = 65527UL;
            int l_1158 = 0x15733064L;
            int l_1163 = (-1L);
            int l_1164 = (-1L);
            int l_1167 = 0xA5BADC85L;
            const union U3 l_1215[8][2][1] = {{{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}, {{{0x0477C37EL}}, {{0x0477C37EL}}}};
            short *l_1216[6][10][4] = {{{(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}}, {{(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}}, {{(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}}, {{(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}}, {{(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}}, {{(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}, {(void*)0, &g_16.f7, &g_268.f7, &g_91.f7}}};
            unsigned *l_1217 = (void*)0;
            unsigned l_1218 = 0x926D223EL;
            char l_1219 = 0L;
            int i, j, k;
            for (l_1001 = 0; (l_1001 <= 7); l_1001 += 1)
            {
                unsigned short l_1032 = 0x3268L;
                union U4 *l_1039 = &g_441;
                unsigned short l_1043 = 65531UL;
                struct S0 *l_1064 = &g_91;
                if (p_13.f6)
                    break;
                for (g_406 = 6; (g_406 >= 0); g_406 -= 1)
                {
                    union U4 **l_1017[10];
                    const int l_1023 = (-7L);
                    const union U3 l_1031 = {4294967295UL};
                    short l_1042 = 6L;
                    int *l_1045 = &l_28;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1017[i] = &g_995;
                    for (g_16.f3 = 1; (g_16.f3 <= 7); g_16.f3 += 1)
                    {
                        (**g_448) = p_13;
                    }
                    g_995 = &g_443[0];
                    (*g_449) = p_13;
                    if (p_13.f8)
                    {
                        unsigned char *l_1024 = (void*)0;
                        unsigned char *l_1025 = &g_16.f3;
                        unsigned char *l_1026 = &g_441.f2;
                        (*l_1016) = ((safe_mod_func_uint8_t_u_u(((*l_1025) &= ((safe_mod_func_uint16_t_u_u(l_1022, (*g_903))) != l_1023)), ((*l_1026) = (g_268.f3 = p_13.f5)))) > (+1L));
                    }
                    else
                    {
                        int l_1041 = 0x349636A4L;
                        int i, j;
                        (*l_1016) ^= ((l_1043 &= (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_1032, 4)), (((*l_26) = 65531UL) | (((((safe_rshift_func_uint8_t_u_s(l_1022, 3)) <= (((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((l_1031.f0 < (l_1039 == l_1040[4][1][3])) != l_1022) ^ l_1041), l_1041)), p_13.f5)) ^ 4294967295UL) == l_1042)) != (**p_14)) & 7UL) >= g_268.f5)))) == 0x2CL) && (*g_903))) & 0x37D8L);
                        l_1045 = l_1044;
                    }
                }
                for (g_996.f0 = 1; (g_996.f0 <= 7); g_996.f0 += 1)
                {
                    unsigned char l_1060[7] = {0x3DL, 0x3DL, 255UL, 0x3DL, 0x3DL, 255UL, 0x3DL};
                    union U3 l_1066 = {6UL};
                    int i;
                    for (g_883 = 1; (g_883 <= 7); g_883 += 1)
                    {
                        union U4 **l_1050[10] = {&l_1039, (void*)0, &l_1039, (void*)0, &l_1039, (void*)0, &l_1039, (void*)0, &l_1039, (void*)0};
                        union U4 ***l_1049[2][7][9] = {{{&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}}, {{&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}, {&l_1050[2], &l_1050[2], (void*)0, &l_1050[6], &l_1050[2], &l_1050[6], (void*)0, &l_1050[2], &l_1050[2]}}};
                        const union U3 l_1059 = {0x81898805L};
                        union U2 l_1063 = {0L};
                        unsigned short l_1065 = 65534UL;
                        int i, j, k;
                        (*l_1016) = p_12;
                        (*l_1016) |= (safe_mod_func_uint8_t_u_u((*l_1044), ((!l_1063.f4) && l_1065)));
                        return l_1066;
                    }
                }
            }
            if (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((*l_1071) = (*l_1044)), (safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_31.f0, (*l_1044))), 8)))), (((safe_lshift_func_uint8_t_u_s(g_27, (safe_sub_func_int32_t_s_s((((*l_1080)--) > ((*l_1016) != (*l_1016))), 0xA65849F0L)))) == (*l_1016)) | (safe_sub_func_uint8_t_u_u((*l_1044), p_13.f4))))) || 65528UL))
            {
                unsigned short l_1088 = 0x80BEL;
                union U2 l_1089 = {8L};
                for (g_27 = (-13); (g_27 >= 56); g_27++)
                {
                    int *l_1087 = &l_1004;
                    (*g_694) = l_1087;
                    l_1088 = 0x02943634L;
                }
                (*l_1044) = l_1090.f2;
            }
            else
            {
                union U2 l_1112 = {0x4E3D2C95L};
                union U1 **l_1121[6] = {&l_1119, &l_1119, &l_1120, &l_1119, &l_1119, &l_1120};
                short *l_1124[3];
                int l_1153 = (-7L);
                int l_1154 = (-5L);
                int l_1156 = 0x3390D991L;
                int l_1157 = 1L;
                int l_1159 = 0x5ED9C8F9L;
                int l_1161[8][7][4] = {{{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}, {{0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}, {0xCDF24E35L, 1L, (-7L), (-4L)}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1124[i] = &g_16.f7;
                (*l_1016) = (*l_1016);
                for (l_1004 = 0; (l_1004 < (-1)); l_1004--)
                {
                    for (p_13.f4 = 1; (p_13.f4 <= 5); p_13.f4 += 1)
                    {
                        if (p_13.f3)
                            break;
                    }
                }
                if (((((*l_1080) = (((safe_add_func_int16_t_s_s(0xBA48L, (safe_sub_func_int32_t_s_s((0xDB74L ^ (*l_1016)), p_13.f8)))) & p_13.f5) && (**p_14))) ^ l_1003) && p_13.f6))
                {
                    unsigned l_1132 = 0x680BDD2EL;
                    union U3 *l_1139 = &l_31;
                    (***g_447) = (***g_447);
                    for (l_1112.f4 = 9; (l_1112.f4 < 53); l_1112.f4 = safe_add_func_int32_t_s_s(l_1112.f4, 5))
                    {
                        l_1132++;
                        (**g_448) = p_13;
                    }
                    p_13.f1 = ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0xA62DL, ((p_13.f6 |= (l_1139 == &g_186[9][2][1])) ^ (l_1140 >= (((*g_903) = (safe_add_func_int8_t_s_s(0xBAL, ((*l_1080) = p_13.f4)))) == (((safe_add_func_uint8_t_u_u(l_1112.f1, ((-9L) < 2L))) ^ g_16.f8) <= (**p_14))))))), l_1132)) || (**p_14));
                }
                else
                {
                    unsigned *l_1150 = (void*)0;
                    int *l_1151 = (void*)0;
                    int *l_1152[9][2] = {{&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}, {&g_91.f6, &l_1003}};
                    union U3 l_1176 = {0x90107868L};
                    int i, j;
                    (*l_1044) ^= (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_91.f8 &= g_1149), g_16.f0)), (g_16.f8 != g_365)));
                    ++g_1168;
                    for (p_13.f7 = 0; (p_13.f7 >= (-20)); p_13.f7 = safe_sub_func_int32_t_s_s(p_13.f7, 9))
                    {
                        union U3 *l_1177[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1177[i] = &l_31;
                        (*l_1016) &= (safe_mod_func_uint32_t_u_u((*l_1044), (g_62.f8 = g_350)));
                    }
                    for (p_13.f4 = 0; (p_13.f4 > 37); ++p_13.f4)
                    {
                        int l_1185 = 1L;
                        int l_1186 = 0x9035DE03L;
                        int l_1187 = 0x17152A49L;
                        int l_1188[4][1][6] = {{{0x9AE9FAD6L, 0xDA36F875L, 0xA0F725D5L, 1L, 0L, 0x5CABEFF0L}}, {{0x9AE9FAD6L, 0xDA36F875L, 0xA0F725D5L, 1L, 0L, 0x5CABEFF0L}}, {{0x9AE9FAD6L, 0xDA36F875L, 0xA0F725D5L, 1L, 0L, 0x5CABEFF0L}}, {{0x9AE9FAD6L, 0xDA36F875L, 0xA0F725D5L, 1L, 0L, 0x5CABEFF0L}}};
                        union U3 l_1192 = {0x8A990142L};
                        int i, j, k;
                        ++g_1189;
                        return l_1192;
                    }
                }
                for (g_62.f2 = 0; (g_62.f2 <= 3); g_62.f2 += 1)
                {
                    int *l_1193 = &l_1166;
                    int *l_1195 = &l_1167;
                    int *l_1196[4] = {&g_365, &l_1166, &g_365, &l_1166};
                    const union U3 l_1208 = {0x1F1A5A71L};
                    int i;
                    l_1194 = l_1193;
                    --l_1198;
                    if (l_1162[g_62.f2])
                        continue;
                    for (g_350 = 0; (g_350 <= 3); g_350 += 1)
                    {
                        union U3 **l_1205 = &g_360[3][4];
                        union U3 ***l_1204 = &l_1205;
                        union U3 *l_1207 = &g_186[1][0][0];
                        int i, j;
                        l_1160[g_62.f2][(g_350 + 2)] = l_1160[g_62.f2][(g_62.f2 + 2)];
                        l_1209 = ((*l_1044) = (((l_1160[g_62.f2][g_62.f2] <= (+((safe_add_func_int16_t_s_s(l_1160[g_350][(g_350 + 2)], (l_1203 == ((*l_1204) = &g_360[6][5])))) < l_1160[g_62.f2][(g_62.f2 + 2)]))) | l_1153) == l_1160[g_62.f2][(g_350 + 2)]));
                    }
                }
            }
            (*l_1194) = ((safe_mul_func_int16_t_s_s((!0x92BEL), (((((safe_rshift_func_uint16_t_u_u((p_13.f1 & 0L), p_13.f1)) | (*l_1194)) && (*l_1044)) < l_1219) | 0xF7L))) != (*l_1044));
            (*g_449) = l_1220[4][0][2];
        }
        if ((*l_1194))
        {
            struct S0 l_1223 = {0x93L,-305,4294967287UL,1UL,254UL,-6L,-5L,2L,7UL};
            for (g_1149 = 0; (g_1149 >= 53); g_1149 = safe_add_func_int32_t_s_s(g_1149, 8))
            {
                p_13.f6 &= (*l_1016);
            }
            (***g_447) = l_1223;
        }
        else
        {
            union U3 l_1243 = {4294967295UL};
            int l_1257[7] = {0xA7146110L, 0xA7146110L, 0xE5575622L, 0xA7146110L, 0xA7146110L, 0xE5575622L, 0xA7146110L};
            char l_1272 = 0xDBL;
            int *l_1310 = &l_1160[2][5];
            int *l_1311 = &g_16.f6;
            int *l_1312 = &g_91.f6;
            int *l_1313 = &l_1155;
            int *l_1314 = &l_28;
            int *l_1315[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1315[i] = &l_1303[4][2];
            if ((safe_unary_minus_func_int8_t_s(((*l_1016) & (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((0x270FB119L > (*l_1016)), p_12)), (safe_lshift_func_int16_t_s_u(p_13.f4, 9))))))))
            {
                union U3 l_1232 = {0xB2A9D4CBL};
                for (g_996.f0 = 0; (g_996.f0 <= 3); g_996.f0 += 1)
                {
                    int l_1231 = 0x2EBBCBD0L;
                    (*l_1194) = ((*l_1016) & (g_268.f5 && l_1231));
                    for (g_91.f7 = 1; (g_91.f7 >= 0); g_91.f7 -= 1)
                    {
                        p_13.f1 ^= 0x81263A79L;
                    }
                }
                return l_1232;
            }
            else
            {
                union U1 *l_1233 = &g_452;
                union U1 **l_1234 = &l_1119;
                union U4 ** const *l_1238 = &l_1051;
                union U3 l_1247 = {0xD37533EDL};
                int l_1270[4][6][8] = {{{0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}}, {{0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}}, {{0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}}, {{0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}, {0x0FFCA0DCL, 0x3BE8992BL, 0x22267818L, 0x896DEFE3L, 0x03E92473L, 0L, 0x32FEE52AL, 0x199597BCL}}};
                int *l_1277 = &l_1160[1][4];
                union U2 l_1280 = {-1L};
                unsigned l_1286 = 0x1BC08427L;
                short l_1289 = 0L;
                short l_1306[1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1306[i] = (-10L);
                (*l_1234) = l_1233;
                (*g_694) = (void*)0;
                for (p_13.f3 = 0; (p_13.f3 <= 37); p_13.f3 = safe_add_func_int32_t_s_s(p_13.f3, 7))
                {
                    char l_1237 = 1L;
                    union U4 ** const **l_1239[6];
                    int l_1269 = (-1L);
                    int l_1271[9] = {9L, 2L, 9L, 2L, 9L, 2L, 9L, 2L, 9L};
                    char l_1295 = (-5L);
                    int l_1304 = 3L;
                    short l_1305 = 0x4EC4L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1239[i] = &l_1238;
                    if (l_1237)
                        break;
                    if (p_13.f7)
                    {
                        unsigned short l_1244[5] = {65533UL, 0x1006L, 65533UL, 0x1006L, 65533UL};
                        int i;
                        l_1244[0]--;
                        (*l_1194) = l_1237;
                        g_25 = (void*)0;
                        (*l_1016) = l_1243.f1;
                    }
                    else
                    {
                        return l_1247;
                    }
                    for (l_1214 = 0; (l_1214 < 37); l_1214 = safe_add_func_uint8_t_u_u(l_1214, 2))
                    {
                        short l_1250 = 0x7951L;
                        int *l_1251 = &g_91.f6;
                        int *l_1252 = (void*)0;
                        int *l_1253 = &l_1166;
                        int *l_1254 = &g_365;
                        int *l_1255 = &g_91.f6;
                        int *l_1256 = &g_406;
                        int *l_1258 = (void*)0;
                        int *l_1259 = &l_1175;
                        int *l_1260 = &g_406;
                        int *l_1261 = &l_28;
                        int *l_1262 = &l_1003;
                        int *l_1263 = &g_365;
                        int *l_1264 = &l_1175;
                        int *l_1265 = &g_62.f6;
                        int *l_1266 = &l_1155;
                        int *l_1267 = (void*)0;
                        int *l_1268[2];
                        unsigned short l_1274 = 0xEB75L;
                        unsigned short **l_1281[7];
                        int l_1282 = 0x2AE7E771L;
                        short *l_1283[4];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1268[i] = &g_268.f6;
                        for (i = 0; i < 7; i++)
                            l_1281[i] = (void*)0;
                        for (i = 0; i < 4; i++)
                            l_1283[i] = &g_62.f7;
                        l_1274++;
                        l_1277 = l_1261;
                        l_1269 ^= ((l_1272 < (safe_sub_func_int16_t_s_s((p_13.f7 &= (l_1282 >= (-6L))), ((((safe_lshift_func_uint16_t_u_u(l_1286, 14)) | l_1271[5]) || p_13.f6) >= (*l_1016))))) & (*l_1277));
                    }
                    for (g_1168 = 10; (g_1168 >= 19); g_1168 = safe_add_func_int32_t_s_s(g_1168, 4))
                    {
                        int *l_1290 = &l_1165;
                        int *l_1291 = (void*)0;
                        int *l_1292 = &l_1257[3];
                        int *l_1293 = &g_91.f6;
                        int *l_1294[7][3] = {{(void*)0, &l_1160[2][5], (void*)0}, {(void*)0, &l_1160[2][5], (void*)0}, {(void*)0, &l_1160[2][5], (void*)0}, {(void*)0, &l_1160[2][5], (void*)0}, {(void*)0, &l_1160[2][5], (void*)0}, {(void*)0, &l_1160[2][5], (void*)0}, {(void*)0, &l_1160[2][5], (void*)0}};
                        int l_1297 = (-9L);
                        unsigned l_1307 = 6UL;
                        int i, j;
                        if (p_13.f2)
                            break;
                        l_1307--;
                        (*g_694) = l_1294[4][0];
                    }
                }
                l_1194 = &l_1298;
            }
            ++g_1317;
        }
        (*l_1016) ^= ((*l_1194) | 0x8A97L);
    }
    for (g_350 = 9; (g_350 >= 31); g_350 = safe_add_func_uint8_t_u_u(g_350, 5))
    {
        unsigned l_1322 = 0xAFAC814BL;
        (*l_1194) = l_1322;
    }
    for (g_91.f5 = 29; (g_91.f5 == 3); g_91.f5 = safe_sub_func_int32_t_s_s(g_91.f5, 1))
    {
        int *l_1325[7][7][5] = {{{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}, {{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}, {{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}, {{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}, {{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}, {{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}, {{(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}, {(void*)0, &l_1166, &l_1273, &l_1273, &l_1220[4][0][2].f6}}};
        unsigned l_1326 = 0x8D2E030AL;
        unsigned l_1341 = 4294967293UL;
        int i, j, k;
        l_1326++;
        for (l_1004 = 0; (l_1004 < (-30)); l_1004 = safe_sub_func_uint32_t_u_u(l_1004, 4))
        {
            int l_1336 = 0xA933F07BL;
            p_13.f6 = ((*l_1194) = p_13.f7);
            for (g_16.f3 = 0; (g_16.f3 >= 52); g_16.f3 = safe_add_func_uint16_t_u_u(g_16.f3, 4))
            {
                short l_1340 = 0x6D96L;
                (*l_1203) = (*l_1203);
                if ((p_13.f8 || (p_13.f5 < ((!0x36L) && g_268.f7))))
                {
                    const int l_1335[7] = {0L, 0L, 0L, 0L, 0L, 0L, 0L};
                    int i;
                    if (l_1335[6])
                        break;
                    l_1336 = p_13.f0;
                }
                else
                {
                    (*l_1194) = (p_13.f1 & 0x3ECEL);
                    for (g_350 = (-22); (g_350 < 6); g_350++)
                    {
                        int *l_1339[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1339[i] = &l_1001;
                        l_1339[4] = &l_1336;
                    }
                    l_1336 = p_13.f2;
                }
                l_1341--;
            }
        }
        (*l_1194) = p_13.f7;
    }
    (*l_1194) = (safe_add_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((((*l_1348) = &l_1194) == &l_1194), 255UL)) & (--(*l_1350))) || (0x6211E080L <= p_12)), (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((*l_1194) ^ (*g_903)), 3)), 0x17BAL)), p_13.f6))));
    return l_31;
}







static unsigned short func_20(short p_21, union U3 p_22)
{
    unsigned short *l_42 = &g_27;
    const union U3 l_63 = {0x0D4DDF0FL};
    int l_977 = 0x60489DFAL;
    int *l_978 = &g_406;
    int *l_979 = &g_406;
    int *l_980 = &g_62.f6;
    int *l_981 = (void*)0;
    int *l_982 = (void*)0;
    int *l_983[6][5][1] = {{{&l_977}, {&l_977}, {&l_977}, {&l_977}, {&l_977}}, {{&l_977}, {&l_977}, {&l_977}, {&l_977}, {&l_977}}, {{&l_977}, {&l_977}, {&l_977}, {&l_977}, {&l_977}}, {{&l_977}, {&l_977}, {&l_977}, {&l_977}, {&l_977}}, {{&l_977}, {&l_977}, {&l_977}, {&l_977}, {&l_977}}, {{&l_977}, {&l_977}, {&l_977}, {&l_977}, {&l_977}}};
    unsigned l_984 = 9UL;
    int l_987 = 6L;
    int i, j, k;
    for (g_16.f8 = 0; (g_16.f8 <= 3); g_16.f8 += 1)
    {
        union U3 l_47 = {1UL};
        int i;
        if ((g_32[g_16.f8] > func_33(func_36(func_38(l_42, func_43(func_45(l_47)), l_63)), p_22.f0)))
        {
            return l_977;
        }
        else
        {
            return (*g_903);
        }
    }
    l_984++;
    return l_987;
}







static const int func_33(union U2 p_34, int p_35)
{
    const unsigned l_197 = 3UL;
    int l_222 = 1L;
    int l_235 = 1L;
    int l_236 = 0x8A4D8716L;
    int l_237 = 1L;
    int l_240[6] = {0xA42ADB1AL, 0L, 0xA42ADB1AL, 0L, 0xA42ADB1AL, 0L};
    struct S0 l_266 = {0xE0L,-16,3UL,0UL,0x51L,-1L,0L,0xEE09L,0xF0BD4804L};
    int l_284 = 0x920B3F13L;
    int l_285 = (-1L);
    int l_286 = 0x6B4E3A92L;
    int *l_294[6][7] = {{&l_266.f6, &l_286, &g_16.f6, &g_91.f6, &g_91.f6, &g_91.f6, &g_16.f6}, {&l_266.f6, &l_286, &g_16.f6, &g_91.f6, &g_91.f6, &g_91.f6, &g_16.f6}, {&l_266.f6, &l_286, &g_16.f6, &g_91.f6, &g_91.f6, &g_91.f6, &g_16.f6}, {&l_266.f6, &l_286, &g_16.f6, &g_91.f6, &g_91.f6, &g_91.f6, &g_16.f6}, {&l_266.f6, &l_286, &g_16.f6, &g_91.f6, &g_91.f6, &g_91.f6, &g_16.f6}, {&l_266.f6, &l_286, &g_16.f6, &g_91.f6, &g_91.f6, &g_91.f6, &g_16.f6}};
    char *l_343 = &g_16.f0;
    unsigned short l_400 = 65535UL;
    short l_429 = 0x1BE1L;
    const unsigned l_460 = 0xBB6F4404L;
    const union U3 l_477 = {4294967291UL};
    unsigned short *l_482 = &l_400;
    union U4 *l_505 = &g_443[3];
    union U4 **l_504 = &l_505;
    short l_542 = (-5L);
    unsigned l_595[5] = {0xDFC1AE88L, 0xAB4F1374L, 0xDFC1AE88L, 0xAB4F1374L, 0xDFC1AE88L};
    int l_606 = 0x123C372FL;
    const union U3 *l_609 = &g_186[9][2][1];
    unsigned *l_627 = &l_595[3];
    const unsigned l_640[2][1][4] = {{{7UL, 4294967295UL, 7UL, 4294967295UL}}, {{7UL, 4294967295UL, 7UL, 4294967295UL}}};
    int l_763 = 0x5FD801FFL;
    union U1 *l_793 = &g_452;
    union U3 **l_805 = &g_360[4][5];
    unsigned short l_891 = 0x3D17L;
    union U2 l_896 = {4L};
    int **l_936 = &g_387;
    int ***l_935 = &l_936;
    int ****l_934[10] = {&l_935, &l_935, &l_935, &l_935, &l_935, &l_935, &l_935, &l_935, &l_935, &l_935};
    const unsigned short *l_951[8][9][3] = {{{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}, {{(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}, {(void*)0, &l_891, (void*)0}}};
    const struct S0 **l_954 = &g_265;
    const struct S0 ** const *l_953 = &l_954;
    const struct S0 ** const **l_952 = &l_953;
    int i, j, k;
    for (g_91.f8 = 0; (g_91.f8 <= 1); g_91.f8 += 1)
    {
        unsigned char l_215 = 246UL;
        int l_230 = (-5L);
        int l_238 = 5L;
        int l_239 = 2L;
        int l_241 = 0xC6F29780L;
        int l_242 = (-6L);
        int l_243[9][9] = {{0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}, {0xE760D366L, 0xE760D366L, (-3L), (-1L), 0x350D279CL, 0x78D98D93L, 0x014CE8C8L, 0xE760D366L, 9L}};
        unsigned l_353 = 0xA30EF634L;
        unsigned short l_384 = 4UL;
        int l_386 = (-1L);
        short *l_389 = &l_266.f7;
        unsigned short l_424 = 0x1A70L;
        char l_434 = (-1L);
        unsigned short l_436 = 0UL;
        union U4 *l_442 = &g_443[0];
        union U1 *l_454 = &g_455;
        unsigned *l_457 = &g_91.f8;
        unsigned ** const l_456[6] = {(void*)0, &l_457, (void*)0, &l_457, (void*)0, &l_457};
        int i, j;
        if (l_197)
        {
            unsigned l_204 = 2UL;
            char ** const l_218[5][5] = {{&g_24, &g_24, (void*)0, &g_24, &g_24}, {&g_24, &g_24, (void*)0, &g_24, &g_24}, {&g_24, &g_24, (void*)0, &g_24, &g_24}, {&g_24, &g_24, (void*)0, &g_24, &g_24}, {&g_24, &g_24, (void*)0, &g_24, &g_24}};
            int *l_219 = (void*)0;
            int *l_220 = &g_91.f6;
            int *l_221 = &g_62.f6;
            int *l_223 = &l_222;
            int *l_224 = &g_62.f6;
            int *l_225 = (void*)0;
            int *l_226 = &g_91.f6;
            int *l_227 = &g_62.f6;
            int *l_228 = (void*)0;
            int l_229 = (-5L);
            int *l_231 = &g_62.f6;
            int *l_232 = &g_16.f6;
            int *l_233 = (void*)0;
            int *l_234[5][6][2] = {{{&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}}, {{&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}}, {{&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}}, {{&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}}, {{&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}, {&l_229, &l_229}}};
            unsigned char l_244 = 255UL;
            unsigned l_247 = 0x1A81AF41L;
            unsigned char *l_279 = &g_16.f3;
            char l_289 = 0L;
            int l_290[9] = {(-8L), (-8L), 0x824D9733L, (-8L), (-8L), 0x824D9733L, (-8L), (-8L), 0x824D9733L};
            unsigned l_291 = 0UL;
            union U3 *l_303 = &g_186[9][2][1];
            struct S0 *l_336 = (void*)0;
            struct S0 **l_335 = &l_336;
            struct S0 **l_338 = &l_336;
            struct S0 l_347 = {0L,21,0x8C08D05BL,0xD7L,0UL,0x6D961DEDL,0x9DA8D574L,0x7864L,0UL};
            int i, j, k;
            for (p_34.f1 = 0; (p_34.f1 <= 1); p_34.f1 += 1)
            {
                unsigned *l_211 = &g_62.f8;
                int *l_212 = &g_16.f6;
                (*l_212) = ((safe_mod_func_int32_t_s_s(p_34.f2, (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(l_204, (safe_sub_func_uint8_t_u_u(255UL, (safe_mod_func_int32_t_s_s(p_35, ((safe_sub_func_uint32_t_u_u(((*l_211) &= p_34.f1), (((l_212 != (void*)0) == (safe_mul_func_int8_t_s_s(p_34.f2, (l_204 > 0L)))) != 0x8BA4L))) | (*l_212)))))))), 3)))) > l_215);
                (*l_212) = l_215;
                (*l_212) ^= p_34.f1;
                for (l_204 = 0; (l_204 <= 1); l_204 += 1)
                {
                    int **l_217[5] = {&l_212, &g_87[0][1], &l_212, &g_87[0][1], &l_212};
                    int ***l_216 = &l_217[1];
                    int i;
                    (*l_216) = &g_87[0][1];
                    (*l_212) |= (l_218[2][4] != &g_24);
                }
            }
            l_244++;
            for (g_62.f4 = 0; (g_62.f4 <= 1); g_62.f4 += 1)
            {
                unsigned l_259 = 1UL;
                const struct S0 *l_263 = &g_62;
                int i, j;
                l_247++;
                if (p_34.f0)
                    break;
                if (p_34.f2)
                    break;
                for (l_229 = 1; (l_229 >= 0); l_229 -= 1)
                {
                    short *l_258 = &g_16.f7;
                    struct S0 *l_267 = &l_266;
                    (*l_232) = p_34.f3;
                    if (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((g_62.f0 >= g_91.f1), (safe_rshift_func_uint16_t_u_u(65535UL, ((p_34.f1 && l_230) & ((*l_258) = (safe_mul_func_int16_t_s_s(((g_91.f0 &= (2UL <= 0x9E5DL)) <= g_62.f8), p_34.f1)))))))), l_259)) > p_34.f0))
                    {
                        const char *l_261 = &g_62.f0;
                        const char **l_260 = &l_261;
                        const char ***l_262 = &l_260;
                        if (p_34.f1)
                            break;
                        (*l_262) = l_260;
                        l_243[0][3] = (g_91.f3 >= ((*l_232) = ((*l_227) &= (*l_220))));
                    }
                    else
                    {
                        return l_238;
                    }
                    for (g_16.f7 = 0; (g_16.f7 <= 1); g_16.f7 += 1)
                    {
                        const struct S0 **l_264 = (void*)0;
                        g_265 = l_263;
                    }
                    g_268 = ((*l_267) = l_266);
                }
            }
            if ((safe_mul_func_uint16_t_u_u((~((safe_rshift_func_int16_t_s_u((5UL && (*l_223)), (&g_265 != (void*)0))) < (safe_mul_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((*l_224), l_243[3][1])) & ((safe_lshift_func_uint8_t_u_s(((*l_279)++), 0)) && p_34.f1)), (l_240[0] < 0L))))), 0xF59CL)))
            {
                int l_282 = 1L;
                int l_283 = 0xEC76F50CL;
                int l_287 = (-3L);
                int l_288[3][3][8] = {{{0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}, {0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}, {0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}}, {{0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}, {0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}, {0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}}, {{0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}, {0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}, {0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L, 0xF014C9FEL, 0x9BC50419L, 0x9BC50419L}}};
                int i, j, k;
                --l_291;
                l_294[1][0] = g_87[0][1];
                (*l_226) = (safe_sub_func_int16_t_s_s((g_16.f3 == ((l_242 = (safe_rshift_func_int16_t_s_s(g_180.f1, g_16.f1))) < (safe_add_func_uint8_t_u_u(p_34.f3, (safe_sub_func_uint16_t_u_u((&g_180 != l_303), p_34.f3)))))), (safe_add_func_uint8_t_u_u(0UL, (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(p_34.f0, p_34.f0)) != 0L), g_62.f0))))));
            }
            else
            {
                unsigned char l_312 = 3UL;
                int l_313 = 9L;
                struct S0 **l_337 = &l_336;
                char *l_342 = &g_91.f0;
                struct S0 l_346 = {0xC8L,-14,0UL,1UL,4UL,-9L,5L,0x0D3AL,0x8310E1F8L};
                int l_368 = 0xF1690082L;
                int l_369[2][8][8] = {{{1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}}, {{1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}, {1L, (-1L), 0xEACDEB8FL, 0xAEA02C45L, (-1L), 0xAFBA1694L, 0L, 2L}}};
                int i, j, k;
                if ((safe_mod_func_uint8_t_u_u((l_312 = 250UL), l_313)))
                {
                    union U2 *l_325 = &g_326;
                    unsigned *l_345[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_345[i] = (void*)0;
                    (*l_227) ^= (safe_rshift_func_int8_t_s_u(p_34.f0, 4));
                    if ((p_34.f2 == ((safe_add_func_int32_t_s_s(p_34.f4, (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0x8F39C980L, 0x085F8C4AL)), 0)))) & l_312)))
                    {
                        union U3 **l_324 = &l_303;
                        (*l_227) = (safe_lshift_func_uint8_t_u_u((g_91.f3 = (((*l_324) = &g_186[5][1][1]) == (void*)0)), 0));
                    }
                    else
                    {
                        unsigned *l_327 = &g_56.f4;
                        struct S0 *l_334[2][3];
                        struct S0 **l_333 = &l_334[0][2];
                        struct S0 ***l_332[9];
                        unsigned short *l_339 = &g_27;
                        short *l_344 = &l_266.f7;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_334[i][j] = &g_62;
                        }
                        for (i = 0; i < 9; i++)
                            l_332[i] = &l_333;
                        l_325 = &p_34;
                        (*l_220) = ((l_327 == (void*)0) || (safe_mul_func_int16_t_s_s(((*l_344) = ((0xA94D545FL || (safe_rshift_func_uint16_t_u_u(((l_335 = (void*)0) == (l_338 = l_337)), ((*l_339) |= p_34.f3)))) < (safe_mod_func_uint16_t_u_u((((*g_23) = l_342) != l_343), (*l_227))))), 0x6F7FL)));
                    }
                    (*l_226) = (l_345[5] != g_87[1][1]);
                    l_347 = l_346;
                }
                else
                {
                    int l_352 = 0xC20DDC43L;
                    const unsigned short l_356 = 1UL;
                    union U3 **l_359[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_359[i] = &l_303;
                    if ((safe_add_func_uint32_t_u_u((((*l_342) |= (*l_226)) == (p_34.f3 != g_350)), p_34.f2)))
                    {
                        int l_351 = 0L;
                        ++l_353;
                        if (p_34.f3)
                            break;
                        if (l_356)
                            continue;
                        (*l_220) ^= p_34.f2;
                    }
                    else
                    {
                        union U2 *l_358 = &g_56;
                        union U2 **l_357 = &l_358;
                        (*l_357) = &p_34;
                        return l_346.f7;
                    }
                    l_303 = (g_360[4][5] = l_303);
                }
                if ((g_56.f1 > (*l_223)))
                {
                    int l_361 = 0x3A02E538L;
                    int l_362 = (-1L);
                    int l_364[9][9] = {{(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}, {(-8L), 1L, 0xA9DE29E1L, (-1L), 0x1E4FE405L, (-1L), 0xA9DE29E1L, 1L, (-8L)}};
                    unsigned l_373 = 2UL;
                    unsigned l_382 = 0xE914F3DBL;
                    short *l_383[5][6] = {{&g_16.f7, &g_16.f7, &g_91.f7, &g_16.f7, &g_16.f7, &g_16.f7}, {&g_16.f7, &g_16.f7, &g_91.f7, &g_16.f7, &g_16.f7, &g_16.f7}, {&g_16.f7, &g_16.f7, &g_91.f7, &g_16.f7, &g_16.f7, &g_16.f7}, {&g_16.f7, &g_16.f7, &g_91.f7, &g_16.f7, &g_16.f7, &g_16.f7}, {&g_16.f7, &g_16.f7, &g_91.f7, &g_16.f7, &g_16.f7, &g_16.f7}};
                    unsigned short l_385 = 0x2CFEL;
                    int i, j;
                    for (g_326.f0 = 0; (g_326.f0 <= 1); g_326.f0 += 1)
                    {
                        int l_363 = 1L;
                        int l_366 = 0xDE999B76L;
                        int l_367 = 0x6CCCDC0EL;
                        int l_370 = 0L;
                        int l_371 = 7L;
                        int l_372[6][9][4] = {{{(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}}, {{(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}}, {{(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}}, {{(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}}, {{(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}}, {{(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}, {(-7L), (-2L), 0x1C4B697EL, 0L}}};
                        int i, j, k;
                        l_373++;
                    }
                    (*l_223) |= (safe_add_func_int32_t_s_s((p_34.f0 ^ (p_34.f0 && (p_34.f3 & (((safe_rshift_func_int8_t_s_u(((((safe_rshift_func_int16_t_s_u(p_35, g_91.f2)) <= ((l_382 & g_53) < 4294967295UL)) >= (l_384 = ((l_215 != g_62.f1) || 1UL))) <= 0xC1L), 1)) && l_353) <= l_385)))), l_239));
                    for (l_241 = 1; (l_241 >= 0); l_241 -= 1)
                    {
                        int **l_388 = &l_221;
                        l_230 |= l_386;
                        (*l_388) = g_387;
                    }
                    for (l_291 = 0; (l_291 <= 8); l_291 += 1)
                    {
                        int i, j;
                        g_87[0][1] = &g_365;
                        l_364[(g_91.f8 + 3)][l_291] |= ((void*)0 != l_389);
                    }
                }
                else
                {
                    int **l_390 = &l_227;
                    l_294[1][0] = &g_365;
                    (*l_390) = &l_241;
                    if ((safe_mod_func_uint8_t_u_u(p_34.f0, ((*l_342) ^= ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0x3AA2L, 8)), 1)) || (**l_390))))))
                    {
                        unsigned char l_397 = 0x0AL;
                        --l_397;
                    }
                    else
                    {
                        int * const l_405 = &g_406;
                        int * const *l_404 = &l_405;
                        int * const **l_403 = &l_404;
                        struct S0 *l_407 = &l_347;
                        (*g_387) = l_400;
                        (**l_390) |= (0L | (g_56.f3 > (safe_mod_func_int8_t_s_s((&l_294[1][0] != ((*l_403) = (void*)0)), ((!((*l_279) = ((((*l_337) = l_407) != l_407) > 0xF772L))) & p_35)))));
                    }
                }
                if (((*g_387) = p_34.f3))
                {
                    unsigned short l_408 = 0x7072L;
                    int *l_411 = &g_406;
                    int l_427 = 6L;
                    int l_428 = 1L;
                    int l_430 = 0x1DC69EC8L;
                    int l_431 = 2L;
                    int l_432 = 0x5F9A7BFFL;
                    int l_433 = (-1L);
                    int l_435 = 0xBDCE6545L;
                    if (l_408)
                    {
                        int **l_409 = &l_231;
                        (*l_409) = &g_365;
                        (*l_226) &= p_34.f3;
                        (*l_409) = &g_365;
                        (*l_232) = (**l_409);
                    }
                    else
                    {
                        int l_410 = 0xB9F63C39L;
                        if (p_34.f4)
                            break;
                        if (l_410)
                            break;
                        l_411 = &l_229;
                    }
                    if ((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((*l_227), (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(g_27, (0UL ^ (safe_mul_func_int8_t_s_s(l_424, 0x4EL))))) >= g_91.f4), p_34.f3)), (l_243[3][1] > p_34.f0))))), p_34.f3)))
                    {
                        struct S0 l_425 = {0xE1L,143,0xF7483395L,7UL,0xA6L,6L,0x6561F577L,-10L,0xE574D30CL};
                        struct S0 ***l_426 = &l_337;
                        l_425 = l_266;
                        (*l_231) = (((*l_426) = l_337) == (void*)0);
                        l_436--;
                    }
                    else
                    {
                        union U4 *l_440 = &g_441;
                        union U4 **l_439[9] = {(void*)0, &l_440, (void*)0, &l_440, (void*)0, &l_440, (void*)0, &l_440, (void*)0};
                        int i;
                        l_442 = (void*)0;
                    }
                }
                else
                {
                    int **l_444 = &l_223;
                    (*l_444) = &g_365;
                    for (g_91.f7 = 1; (g_91.f7 >= 0); g_91.f7 -= 1)
                    {
                        if (p_34.f1)
                            break;
                    }
                }
            }
        }
        else
        {
            if (l_424)
            {
                (*g_387) &= (safe_mul_func_uint8_t_u_u((((void*)0 != g_447) && (&l_215 == &g_53)), 0xDFL));
                for (l_436 = 0; (l_436 <= 8); l_436 += 1)
                {
                    int **l_450[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_450[i] = &g_87[0][1];
                    g_87[5][1] = (void*)0;
                    for (l_353 = 0; (l_353 <= 8); l_353 += 1)
                    {
                        union U1 *l_451 = &g_452;
                        union U1 **l_453[2][2][5] = {{{&l_451, &l_451, &l_451, &l_451, &l_451}, {&l_451, &l_451, &l_451, &l_451, &l_451}}, {{&l_451, &l_451, &l_451, &l_451, &l_451}, {&l_451, &l_451, &l_451, &l_451, &l_451}}};
                        unsigned **l_459 = (void*)0;
                        unsigned ***l_458 = &l_459;
                        int i, j, k;
                        (*g_387) |= 0x64B1AF51L;
                        l_454 = l_451;
                        (*l_458) = l_456[3];
                    }
                }
            }
            else
            {
                if ((*g_387))
                    break;
                if (l_460)
                    break;
            }
            l_230 = 0x1880F78DL;
        }
        (*g_387) ^= p_34.f2;
        for (p_34.f4 = 0; (p_34.f4 <= 1); p_34.f4 += 1)
        {
            return p_34.f4;
        }
    }
    if (p_34.f3)
    {
        unsigned l_461[10];
        int **l_462 = (void*)0;
        unsigned short *l_475 = &g_443[0].f0;
        int l_484 = 0L;
        int l_489[1];
        union U3 l_497 = {4294967295UL};
        char l_540 = 0x3DL;
        int l_545 = 7L;
        unsigned char l_546 = 0x7EL;
        unsigned l_559 = 0UL;
        int i;
        for (i = 0; i < 10; i++)
            l_461[i] = 4294967295UL;
        for (i = 0; i < 1; i++)
            l_489[i] = 0L;
        l_461[4] ^= ((*g_387) = 0xC3EB200FL);
        g_387 = &g_365;
        for (g_16.f7 = 0; (g_16.f7 < 10); g_16.f7++)
        {
            struct S0 **l_465[6];
            union U1 *l_466 = &g_452;
            int l_470 = (-5L);
            unsigned short *l_476 = &l_400;
            int l_485 = 0xFECEB4D1L;
            int l_486 = 8L;
            int l_491 = 0x2DE2DA93L;
            unsigned l_494 = 4294967295UL;
            int i;
            for (i = 0; i < 6; i++)
                l_465[i] = &g_449;
            if (((65533UL == g_62.f4) == (&g_25 != (void*)0)))
            {
                return p_34.f1;
            }
            else
            {
                const union U3 l_469 = {0x8790A022L};
                int l_471 = 0x1855FB8FL;
                int l_487 = 1L;
                int l_492 = 0x7974E20CL;
                l_465[1] = ((*g_447) = (*g_447));
                if ((2UL == p_34.f4))
                {
                    union U1 **l_467 = &l_466;
                    (*l_467) = l_466;
                }
                else
                {
                    unsigned short *l_468 = (void*)0;
                    int l_474 = 0x87D195E5L;
                    int *l_478 = &g_62.f6;
                    const union U3 l_483 = {0x4717B7D1L};
                    int l_490 = 0xEFF4A19EL;
                    int l_493 = (-9L);
                    const unsigned l_503 = 0UL;
                    l_471 = l_470;
                    if ((safe_sub_func_uint8_t_u_u(l_474, func_38(l_475, l_476, l_477))))
                    {
                        l_478 = &g_406;
                    }
                    else
                    {
                        unsigned l_479[8][6] = {{1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}, {1UL, 0xA77D6049L, 4294967290UL, 0xA77D6049L, 1UL, 4294967289UL}};
                        int i, j;
                        if ((*g_387))
                            break;
                        l_479[3][4]--;
                    }
                    if (((((*l_343) = p_34.f3) || p_34.f3) && func_38(&g_27, (l_482 = l_468), l_483)))
                    {
                        short l_488 = 0x07F6L;
                        ++l_494;
                        (*g_387) = p_34.f3;
                        (*g_387) = ((p_34.f4 <= p_34.f2) || l_469.f0);
                    }
                    else
                    {
                        short l_500 = 0x1F95L;
                        unsigned *l_501 = (void*)0;
                        unsigned *l_502 = &g_56.f4;
                        if (p_34.f2)
                            break;
                        (*g_387) = p_34.f4;
                        l_492 |= ((*l_478) = (safe_rshift_func_uint16_t_u_u(((l_500 < ((*l_502) = g_62.f0)) <= (!g_441.f0)), l_503)));
                    }
                    (*g_387) = ((void*)0 != (*g_23));
                }
                (*g_387) ^= 0xC9F6C3D2L;
            }
        }
        for (g_91.f2 = 0; (g_91.f2 <= 5); g_91.f2 += 1)
        {
            int l_521 = 0x7237417DL;
            int l_522 = 0xA97EE63EL;
            int l_523 = (-1L);
            int l_524 = 0xDBDDAF05L;
            int l_525[6] = {1L, 1L, 0L, 1L, 1L, 0L};
            union U3 **l_560 = &g_360[2][5];
            short l_561 = 0x6F28L;
            unsigned short l_562[8][4][4] = {{{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}, {{0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}, {0xB163L, 0xD4A6L, 0x640EL, 0xD4A6L}}};
            int i, j, k;
            if (l_240[g_91.f2])
                break;
            if ((*g_387))
                continue;
            for (g_16.f7 = 4; (g_16.f7 >= 1); g_16.f7 -= 1)
            {
                unsigned l_512 = 0x1C3A1BD0L;
                unsigned *l_517 = (void*)0;
                unsigned *l_518[4][5][1] = {{{&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}}, {{&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}}, {{&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}}, {{&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}, {&g_56.f4}}};
                int l_526 = (-7L);
                int l_527 = 0xE8CD0D28L;
                int l_528 = 0x6022DD8CL;
                int l_529 = 1L;
                int l_538 = 0x416CC876L;
                int l_539 = (-3L);
                int l_541 = 4L;
                int l_543[1];
                const struct S0 l_565 = {0xC9L,-435,4UL,3UL,0x74L,9L,0x89BF2ADBL,0xC606L,0UL};
                struct S0 *l_566 = &l_266;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_543[i] = 0L;
                if (((l_504 == (void*)0) >= (l_484 = ((safe_add_func_uint32_t_u_u(1UL, (safe_sub_func_int16_t_s_s(l_240[g_91.f2], (p_34.f3 ^ (l_512 >= (safe_sub_func_uint32_t_u_u(p_34.f4, l_240[g_91.f2])))))))) && (((safe_sub_func_int32_t_s_s((((g_193 & g_91.f4) == 0xB380L) != p_34.f3), p_35)) ^ 65528UL) <= p_34.f4)))))
                {
                    int l_519 = (-10L);
                    int l_520[8][3] = {{(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}, {(-4L), 8L, 0x2C1A3F33L}};
                    unsigned char l_530 = 0xE1L;
                    int i, j;
                    ++l_530;
                    l_294[1][0] = &g_365;
                }
                else
                {
                    int l_533 = 0x11F3767DL;
                    int l_534 = 0x784BBA45L;
                    int l_535 = 0x493F9349L;
                    int l_536 = 0x6750EF64L;
                    int l_537[3];
                    int l_544 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_537[i] = (-1L);
                    l_546++;
                    if ((*g_387))
                        break;
                }
                (*g_387) = (safe_lshift_func_uint8_t_u_s((p_34.f0 && ((safe_mod_func_int8_t_s_s((0x37809752L >= (safe_sub_func_uint8_t_u_u(((void*)0 == &l_475), (safe_mul_func_int16_t_s_s(l_538, (safe_sub_func_uint8_t_u_u(l_559, g_56.f0))))))), (g_91.f4 = ((l_512 ^ ((((void*)0 != l_560) > l_523) && p_34.f1)) && 0xEEL)))) < p_35)), l_524));
                --l_562[4][0][2];
                (*l_566) = l_565;
            }
        }
    }
    else
    {
        unsigned short l_581 = 1UL;
        int l_601 = 0xD3C1BCAEL;
        union U2 *l_626 = &g_326;
        union U4 **l_651 = (void*)0;
        const struct S0 **l_682 = (void*)0;
        const struct S0 ***l_681 = &l_682;
        const union U3 l_725 = {4294967288UL};
        unsigned short *l_739[1];
        union U1 *l_755 = &g_455;
        union U1 **l_754 = &l_755;
        int l_767 = (-1L);
        int l_769 = 0x7BB553E4L;
        int l_826 = 3L;
        short l_828 = 0L;
        unsigned char l_853 = 0x2AL;
        int l_862 = 0xE14EB976L;
        int l_863 = 0L;
        int l_864 = 0xE0195024L;
        int l_866 = 0xF3DA2708L;
        int l_868 = (-3L);
        int l_869 = 7L;
        int l_870 = (-1L);
        int l_873 = 0x204611A6L;
        int l_874 = 0xEBE4C0E2L;
        const union U3 l_897[3] = {{0xC4EF8F3FL}, {0xC4EF8F3FL}, {0xC4EF8F3FL}};
        const union U3 * const *l_900[10][5] = {{&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}, {&l_609, (void*)0, &l_609, (void*)0, &l_609}};
        struct S0 l_926 = {0L,499,4UL,0UL,0x04L,-1L,0x7E438BD9L,0xB0A5L,4294967290UL};
        int i, j;
        for (i = 0; i < 1; i++)
            l_739[i] = &l_400;
        for (p_34.f4 = (-4); (p_34.f4 == 28); p_34.f4 = safe_add_func_uint16_t_u_u(p_34.f4, 2))
        {
            unsigned char l_575 = 1UL;
            short l_582 = 0xBCEFL;
            unsigned short *l_590 = &l_581;
            const int *l_622[4] = {&l_236, (void*)0, &l_236, (void*)0};
            int i;
            if (((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(l_575, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((g_580[5][5] == g_580[5][5]), (p_34.f0 ^ 8UL))), l_581)))) > ((-10L) > g_16.f6)) != l_575), p_34.f0)), l_582)) <= 0L))
            {
                union U2 *l_583 = (void*)0;
                union U2 **l_584 = &l_583;
                const union U3 l_591 = {0x5C08582FL};
                int l_593 = 0xAD4F05D6L;
                unsigned l_603 = 0xD6F6B7B5L;
                (*l_584) = l_583;
                for (l_266.f2 = 0; (l_266.f2 >= 56); l_266.f2 = safe_add_func_uint16_t_u_u(l_266.f2, 2))
                {
                    unsigned char *l_587 = &g_32[3];
                    int l_592 = 0x1AFF1959L;
                    short *l_594 = &l_542;
                    unsigned short *l_596[6][1][1] = {{{&g_27}}, {{&g_27}}, {{&g_27}}, {{&g_27}}, {{&g_27}}, {{&g_27}}};
                    int i, j, k;
                    (*g_387) = (-1L);
                    if (((&g_350 != l_587) & ((((*l_594) = (65534UL != (l_593 = (safe_add_func_uint32_t_u_u(4UL, l_592))))) ^ p_34.f2) != p_34.f0)))
                    {
                        const union U3 l_597 = {0xF6ED5D86L};
                        union U3 *l_598 = (void*)0;
                        union U3 *l_599 = &g_186[9][2][1];
                        int l_602 = (-3L);
                        l_601 &= ((l_595[3] == func_38(l_596[4][0][0], &l_400, ((*l_599) = l_597))) == g_600);
                        l_603--;
                        (**g_448) = l_266;
                        return l_582;
                    }
                    else
                    {
                        const union U3 *l_608 = (void*)0;
                        const union U3 **l_607[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_607[i] = &l_608;
                        l_593 |= ((*g_387) &= l_606);
                        l_609 = &g_180;
                    }
                    for (l_236 = 0; (l_236 != 24); l_236 = safe_add_func_uint32_t_u_u(l_236, 2))
                    {
                        int **l_616 = &g_87[4][1];
                        l_593 |= (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(p_34.f0, 0xC561L)), (*g_387)));
                        (*l_616) = (void*)0;
                    }
                    for (l_606 = (-14); (l_606 >= (-11)); l_606 = safe_add_func_uint8_t_u_u(l_606, 2))
                    {
                        const union U1 *l_619 = &g_452;
                        const union U1 **l_620 = &l_619;
                        struct S0 l_621 = {-1L,-457,0UL,0x26L,0xC9L,0xFD0259E2L,0x70CA3C05L,4L,0UL};
                        const int **l_623 = &l_622[0];
                        const int *l_625 = &l_266.f6;
                        const int **l_624 = &l_625;
                        (*l_620) = l_619;
                        (***g_447) = l_621;
                        (*l_624) = ((*l_623) = l_622[0]);
                        (*l_584) = l_626;
                    }
                }
                (*g_387) |= ((l_627 = &g_600) != &l_595[1]);
                for (l_400 = 0; (l_400 <= 1); l_400 += 1)
                {
                    const int **l_628 = &l_622[2];
                    unsigned short *l_633 = &g_441.f0;
                    (*l_628) = l_622[2];
                    for (g_268.f3 = 0; (g_268.f3 <= 1); g_268.f3 += 1)
                    {
                        int i, j, k;
                        (*g_387) = (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_35 != (safe_mul_func_int16_t_s_s(0xBE49L, ((safe_add_func_int8_t_s_s(((*g_387) > (p_34.f4 || (safe_mul_func_int8_t_s_s(p_34.f4, p_34.f1)))), l_591.f1)) & p_34.f0)))), l_640[0][0][3])), 7));
                        (*g_387) = (0x0AL | 1L);
                        return p_34.f3;
                    }
                }
            }
            else
            {
                int **l_641[3];
                struct S0 *l_655[5][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_641[i] = &l_294[1][0];
                g_387 = &l_237;
                for (g_326.f2 = 0; (g_326.f2 <= 5); g_326.f2 = safe_add_func_int8_t_s_s(g_326.f2, 3))
                {
                    union U2 l_652[5][7] = {{{5L}, {5L}, {9L}, {5L}, {5L}, {9L}, {5L}}, {{5L}, {5L}, {9L}, {5L}, {5L}, {9L}, {5L}}, {{5L}, {5L}, {9L}, {5L}, {5L}, {9L}, {5L}}, {{5L}, {5L}, {9L}, {5L}, {5L}, {9L}, {5L}}, {{5L}, {5L}, {9L}, {5L}, {5L}, {9L}, {5L}}};
                    const union U3 l_653 = {1UL};
                    int i, j;
                    if (l_601)
                        break;
                    for (l_429 = 0; (l_429 != (-15)); --l_429)
                    {
                        return p_34.f2;
                    }
                    for (g_600 = 22; (g_600 < 24); g_600 = safe_add_func_uint8_t_u_u(g_600, 8))
                    {
                        char l_654 = 0xBAL;
                        l_654 = ((*g_387) &= ((safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(g_406)) == g_91.f1), (&l_505 == l_651))) || func_38(&g_27, func_43(l_652[4][6]), l_653)));
                        (*g_387) |= l_654;
                    }
                }
            }
            if (l_581)
            {
                unsigned l_659[3][1][3] = {{{4294967295UL, 0xEE0CE6A2L, 4294967295UL}}, {{4294967295UL, 0xEE0CE6A2L, 4294967295UL}}, {{4294967295UL, 0xEE0CE6A2L, 4294967295UL}}};
                int i, j, k;
                if (p_35)
                    break;
                for (g_62.f3 = 1; (g_62.f3 < 45); g_62.f3++)
                {
                    int **l_658 = &l_294[4][2];
                    (*l_658) = &l_237;
                    if (p_35)
                        continue;
                }
                --l_659[1][0][2];
                for (g_268.f4 = 0; (g_268.f4 != 50); g_268.f4 = safe_add_func_int32_t_s_s(g_268.f4, 9))
                {
                    unsigned char *l_664 = &g_443[0].f2;
                    int l_667 = (-3L);
                    (*g_387) ^= ((--(*l_664)) >= l_667);
                }
            }
            else
            {
                for (g_91.f7 = 5; (g_91.f7 > (-5)); g_91.f7--)
                {
                    return p_34.f3;
                }
            }
        }
        (*g_387) = p_34.f3;
        if (p_35)
        {
            int **l_670[7] = {&l_294[1][0], &g_387, &l_294[1][0], &g_387, &l_294[1][0], &g_387, &l_294[1][0]};
            unsigned short *l_697 = &l_400;
            char l_741[5] = {0x77L, 0x03L, 0x77L, 0x03L, 0x77L};
            unsigned l_747 = 0xF3CEE53CL;
            struct S0 ***l_773 = (void*)0;
            union U3 **l_786 = &g_360[4][5];
            unsigned l_820 = 0x93DD7E24L;
            unsigned char *l_825 = &g_16.f3;
            unsigned char *l_827[9][5] = {{&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}, {&g_268.f3, &g_62.f4, (void*)0, &g_62.f4, &g_268.f3}};
            int i, j;
            g_87[0][1] = &g_365;
            if (p_34.f0)
            {
                int l_671 = 0x7CD7183BL;
                unsigned short *l_673 = &l_581;
                unsigned short **l_672 = &l_673;
                struct S0 ** const *l_680 = (void*)0;
                const union U3 *l_710 = &g_180;
                union U2 l_714[4] = {{0xF9AAEBF5L}, {0xF9AAEBF5L}, {0xF9AAEBF5L}, {0xF9AAEBF5L}};
                const union U3 l_740 = {0x20BD801BL};
                int l_742 = 0xEADF3DDDL;
                int l_758 = 0L;
                int l_760 = 0x768E11BCL;
                int l_761 = 0xCC60F469L;
                int l_764 = (-1L);
                int l_766 = (-1L);
                int l_768 = 4L;
                unsigned l_770 = 1UL;
                union U3 **l_782 = &g_360[4][5];
                union U1 *l_794[6];
                unsigned short l_802[4][9][1] = {{{0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}}, {{0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}}, {{0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}}, {{0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}, {0x2338L}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_794[i] = &g_795;
                (*g_387) ^= (l_601 |= (l_671 != ((l_482 = (void*)0) == ((*l_672) = &g_27))));
                for (l_266.f0 = 2; (l_266.f0 > (-20)); l_266.f0--)
                {
                    const struct S0 ****l_683 = &l_681;
                    int * const l_691[2] = {&g_692, &g_692};
                    int * const *l_690[2];
                    int * const **l_689[4] = {(void*)0, &l_690[1], (void*)0, &l_690[1]};
                    int * const ***l_688 = &l_689[3];
                    const union U3 *l_711 = &g_712;
                    union U3 *l_713 = &g_186[1][2][1];
                    unsigned l_716 = 0x1B4D3DBAL;
                    unsigned short *l_723 = &g_27;
                    unsigned short l_728 = 65530UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_690[i] = &l_691[1];
                    if (((*g_387) <= ((((((p_34.f1 != (~(safe_sub_func_int32_t_s_s((l_680 != ((*l_683) = l_681)), (safe_rshift_func_uint8_t_u_u((8L ^ ((*l_627) ^= (0UL <= ((safe_sub_func_uint32_t_u_u((((*l_688) = (void*)0) != g_693[0][2][4]), (((*l_343) = (safe_mul_func_int16_t_s_s((l_581 == 1UL), g_326.f2))) <= p_35))) <= 0UL)))), p_35)))))) < 0xE422BEC6L) >= p_34.f4) != 0UL) == l_581) < 0UL)))
                    {
                        short *l_698 = (void*)0;
                        short *l_699 = &l_429;
                        int l_706 = (-1L);
                        int l_707 = 0x80A88A68L;
                        union U3 *l_715 = &g_186[7][0][0];
                        int l_717[6] = {9L, 9L, 0xB60ABAF9L, 9L, 9L, 0xB60ABAF9L};
                        int i;
                        l_707 &= ((*g_387) = (((*l_699) = func_38(l_697, &l_581, (*l_609))) <= ((safe_mod_func_uint32_t_u_u(l_671, (p_34.f0 || (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_53, 5)), l_706))))) <= 0x2190L)));
                        l_716 |= (((safe_add_func_uint32_t_u_u(((l_711 = l_710) == l_713), (l_671 = ((6UL & 1UL) & (l_714[2].f0 == 0x169CL))))) != g_16.f6) == p_34.f1);
                        (*g_694) = (*g_694);
                        ++g_718;
                    }
                    else
                    {
                        unsigned short *l_724 = (void*)0;
                        const int *l_729 = &l_284;
                        const int **l_730 = &l_729;
                        (*g_387) = (safe_sub_func_int16_t_s_s(func_38(l_723, l_724, l_725), (l_728 ^= ((*l_697)++))));
                        (*l_730) = l_729;
                    }
                }
                for (g_16.f4 = 0; (g_16.f4 <= 54); g_16.f4 = safe_add_func_int8_t_s_s(g_16.f4, 5))
                {
                    unsigned short l_733 = 0UL;
                    l_601 &= l_671;
                    --l_733;
                }
                if (p_34.f1)
                {
                    unsigned short l_736[6];
                    int l_756[10][4] = {{0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}, {0L, (-1L), 1L, (-1L)}};
                    union U3 ***l_783 = &l_782;
                    union U3 **l_785 = &g_360[6][0];
                    union U3 ***l_784 = &l_785;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_736[i] = 0x2D26L;
                    ++l_736[1];
                    if (func_38(&g_27, l_739[0], l_740))
                    {
                        unsigned l_743 = 0x8E17AB1BL;
                        int l_746[8] = {9L, 9L, 9L, 9L, 9L, 9L, 9L, 9L};
                        const union U3 l_750 = {6UL};
                        union U3 *l_751 = &g_186[6][1][0];
                        unsigned char *l_752 = (void*)0;
                        unsigned char *l_753[4] = {&g_32[3], (void*)0, &g_32[3], (void*)0};
                        int i;
                        l_743++;
                        l_747++;
                        l_746[6] &= (p_34.f1 & (((func_38(&l_400, &g_27, ((*l_751) = l_750)) ^ l_736[3]) >= (((l_601 = g_441.f0) || p_35) ^ p_35)) != l_581));
                        l_756[7][3] = (0x96L ^ (l_746[6] = ((void*)0 == l_754)));
                    }
                    else
                    {
                        char l_757 = 0xEFL;
                        int l_759[2][7][1] = {{{0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}}, {{0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}, {0x1AF3C2DEL}}};
                        short l_762 = 2L;
                        int l_765 = 0xA8AC72D6L;
                        int i, j, k;
                        l_770--;
                    }
                    l_742 = ((l_773 == &g_448) != (safe_add_func_uint16_t_u_u(g_692, ((**l_672) = (((l_756[7][3] ^ p_35) && l_601) & ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_725.f1 & ((((*l_784) = ((*l_783) = l_782)) != l_786) == p_34.f0)), l_601)), p_34.f2)) < p_35))))));
                    for (l_284 = (-6); (l_284 != (-3)); l_284 = safe_add_func_int16_t_s_s(l_284, 3))
                    {
                        l_769 ^= (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(g_91.f6, g_268.f5)), p_34.f3));
                        if (p_34.f2)
                            break;
                    }
                }
                else
                {
                    unsigned short *l_798 = &l_400;
                    const union U3 l_799 = {0x1D578703L};
                    l_794[3] = l_793;
                    if ((safe_mul_func_int16_t_s_s(func_38(l_798, func_43(g_56), l_799), (+p_34.f1))))
                    {
                        (*g_449) = (**g_448);
                    }
                    else
                    {
                        int *l_800 = &l_767;
                        int l_801[10][1][2] = {{{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}, {{1L, 1L}}};
                        int i, j, k;
                        l_800 = ((*g_694) = &l_240[5]);
                        --l_802[2][4][0];
                        l_800 = (void*)0;
                        (*g_694) = (void*)0;
                    }
                }
            }
            else
            {
                union U3 ***l_806 = &l_786;
                int l_807 = 0L;
                l_807 ^= ((*g_387) &= (((*l_806) = l_805) != &g_360[0][5]));
                return p_34.f1;
            }
            (*g_387) = (((*l_697) ^= 0xEA96L) == ((((*l_343) = (((g_91.f3 &= (((safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((0xCE914818L ^ (safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(l_725.f1, ((l_820 == (safe_lshift_func_uint16_t_u_s(l_725.f0, 11))) ^ (0UL & p_34.f1)))), 6)) | ((safe_mul_func_uint8_t_u_u(((*l_825) ^= (p_34.f1 | (p_34.f2 & l_769))), 0x25L)) | l_826)) || g_186[9][2][1].f1), p_34.f2))) >= 0x61L), 0x6636L)), g_163)) < g_16.f4) || 4UL)) <= p_34.f2) <= l_828)) == 0UL) > p_34.f1));
        }
        else
        {
            int l_831 = 0x8DDF0359L;
            int l_834 = 0x5B56D2F8L;
            int l_835 = 0x5DDAFD85L;
            int l_865 = 0L;
            int l_867 = 0x4085AEE1L;
            int l_871 = 2L;
            int l_872 = (-9L);
            unsigned short *l_904 = &g_441.f0;
            unsigned short **l_905 = &l_482;
            short *l_906 = &g_91.f7;
            for (g_326.f4 = 0; (g_326.f4 <= 5); g_326.f4 += 1)
            {
                unsigned char l_837[6] = {0x89L, 0x89L, 0x7EL, 0x89L, 0x89L, 0x7EL};
                struct S0 l_856 = {0xAAL,-573,0xFFF867FCL,1UL,0x19L,0x1D323106L,0x18F72471L,-1L,0xF8A09508L};
                int l_859 = 0xDF44B43DL;
                int l_861[9] = {0L, 0xD49053E7L, 0L, 0xD49053E7L, 0L, 0xD49053E7L, 0L, 0xD49053E7L, 0L};
                int i;
                for (l_763 = 0; (l_763 <= 5); l_763 += 1)
                {
                    unsigned l_829[4][3][9] = {{{0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}}, {{0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}}, {{0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}}, {{0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}, {0x1E1F6288L, 4294967295UL, 4294967293UL, 1UL, 5UL, 4294967287UL, 4294967295UL, 0x5403CB68L, 0x5403CB68L}}};
                    int l_833 = (-1L);
                    int l_836 = 1L;
                    int i, j, k;
                    if (l_829[2][0][2])
                        break;
                    if ((l_829[2][0][2] && g_16.f3))
                    {
                        int l_830 = 0L;
                        int l_832[9][8][3] = {{{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}, {{0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}, {0L, 0x1E3A5787L, 2L}}};
                        short *l_852 = &g_91.f7;
                        short *l_854 = (void*)0;
                        short *l_855 = &g_62.f7;
                        int i, j, k;
                        l_837[5]++;
                        l_834 &= (safe_sub_func_uint32_t_u_u((((((*l_855) = ((safe_sub_func_int32_t_s_s((g_844 == (void*)0), ((*g_387) = (safe_lshift_func_int16_t_s_s(p_34.f0, (safe_mul_func_uint8_t_u_u(((p_35 <= (0xBDC66366L & ((((*l_852) &= (safe_rshift_func_int16_t_s_s(0xBD9FL, 3))) & g_268.f0) ^ ((void*)0 == &l_294[l_763][(l_763 + 1)])))) || 0UL), (-1L)))))))) > l_853)) & l_581) == p_34.f2) < p_34.f1), g_326.f0));
                        if (p_34.f2)
                            break;
                    }
                    else
                    {
                        return p_34.f1;
                    }
                    (*g_694) = &l_769;
                    if (l_837[2])
                        continue;
                }
                (*g_387) ^= p_34.f3;
                if (p_35)
                {
                    int l_857 = 0x78A2C8F9L;
                    int l_858 = 1L;
                    int l_860[4];
                    unsigned l_875 = 0x939B3E69L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_860[i] = 0x0AB00648L;
                    for (l_828 = 0; (l_828 <= 4); l_828 += 1)
                    {
                        int i;
                        if (l_595[l_828])
                            break;
                        (***g_447) = l_856;
                    }
                    --l_875;
                }
                else
                {
                    char l_880 = 0x11L;
                    int l_881[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_881[i][j] = 2L;
                    }
                    for (l_542 = 0; (l_542 != (-26)); --l_542)
                    {
                        int l_882 = 0x188F0F9BL;
                        int l_884 = 1L;
                        int l_885 = (-2L);
                        int l_886 = 1L;
                        int l_887[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_887[i] = 0x8287031EL;
                        if (p_34.f3)
                            break;
                        l_861[6] = (l_834 = (((*g_387) = p_35) | p_34.f2));
                        ++g_888;
                        l_891--;
                    }
                    if (l_828)
                        break;
                }
            }
            l_864 ^= (safe_add_func_uint32_t_u_u(func_38(&l_581, func_43(l_896), l_897[0]), p_34.f4));
            (*g_387) = (safe_lshift_func_uint8_t_u_s(0x02L, ((l_868 = ((l_900[8][1] != &g_360[3][0]) <= (((*l_906) = (safe_mod_func_int8_t_s_s(func_38(g_903, ((*l_905) = l_904), (*l_609)), 1L))) >= (((((*l_627) = (((((*g_844) = &p_34) == (void*)0) < p_35) > 0UL)) || 4294967287UL) == p_34.f1) || p_34.f1)))) && p_34.f0)));
            l_601 ^= ((safe_add_func_int8_t_s_s(((*l_343) = ((l_834 >= 0x4CL) <= p_34.f0)), (g_441.f0 & p_34.f4))) < (safe_lshift_func_uint16_t_u_s((p_35 >= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_34.f0, (((safe_rshift_func_uint16_t_u_s((*g_903), 4)) && ((*g_387) = (safe_sub_func_uint16_t_u_u((*g_903), 0x094AL)))) & 0x81L))), p_35))), 13)));
        }
        for (l_896.f4 = 0; (l_896.f4 > 29); l_896.f4 = safe_add_func_int8_t_s_s(l_896.f4, 6))
        {
            unsigned char l_925 = 252UL;
            int l_942[4][6][8] = {{{(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}}, {{(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}}, {{(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}}, {{(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}, {(-2L), 0x140E3087L, 1L, 0x011C4453L, 0x36E71AD1L, 0x39C8D2C8L, 0x73501168L, 0L}}};
            int l_944[10][1] = {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}};
            struct S0 **l_946 = &g_449;
            unsigned short **l_947[6][5][8] = {{{&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}}, {{&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}}, {{&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}}, {{&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}}, {{&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}}, {{&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}, {&l_482, &l_739[0], &g_903, &l_739[0], &g_903, &g_903, &l_739[0], &l_739[0]}}};
            const union U3 l_948 = {1UL};
            int i, j, k;
            for (l_266.f4 = 0; (l_266.f4 >= 3); l_266.f4 = safe_add_func_int8_t_s_s(l_266.f4, 7))
            {
                (*g_387) &= l_828;
                (*g_387) ^= l_925;
                (*g_694) = (void*)0;
            }
            (*g_449) = l_926;
            for (g_62.f7 = 4; (g_62.f7 >= 1); g_62.f7 -= 1)
            {
                int ****l_937 = &l_935;
                unsigned *l_943[2];
                struct S0 **l_945 = &g_449;
                int i;
                for (i = 0; i < 2; i++)
                    l_943[i] = &g_56.f4;
                l_944[9][0] = (((*g_387) = (l_240[(g_62.f7 + 1)] = (safe_unary_minus_func_int32_t_s((l_595[g_62.f7] | 0x6D3B1292L))))) >= ((safe_mul_func_uint8_t_u_u(2UL, (-8L))) <= (((l_595[g_62.f7] < (-1L)) ^ ((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((l_934[9] = (void*)0) != l_937), (safe_add_func_int8_t_s_s(((g_888 = (g_186[9][2][1].f0 = (safe_add_func_uint16_t_u_u((l_942[2][3][6] |= (&g_903 != &g_903)), p_34.f0)))) == p_34.f3), p_34.f4)))), p_34.f3)) | p_34.f0)) != g_62.f0)));
                if (l_864)
                    continue;
                l_769 ^= (+(l_945 == l_946));
            }
            l_869 |= (func_38((l_482 = &l_581), &l_400, l_948) == (safe_sub_func_uint8_t_u_u((~l_866), (g_580[2][2] == l_951[5][7][2]))));
        }
    }
    if ((0UL & ((void*)0 == l_952)))
    {
        int *l_955 = &l_236;
        int l_956 = 0x94E6F3D2L;
        int l_957[3][4][6] = {{{(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}}, {{(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}}, {{(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}, {(-9L), 1L, (-9L), (-4L), 1L, 0xC07484FDL}}};
        int i, j, k;
        (*g_694) = l_955;
        l_956 |= ((*l_955) ^= (*g_387));
        for (g_193 = 2; (g_193 <= 9); g_193 += 1)
        {
            int l_958 = 0x0DC2AB53L;
            int l_959 = 0x1268222EL;
            int l_960 = 0L;
            unsigned l_961 = 0UL;
            short *l_968 = &g_268.f7;
            int i;
            (*l_955) &= p_34.f1;
            if (p_34.f0)
                break;
            --l_961;
            (*l_955) = ((***l_935) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((*g_903) != (((*l_968) = 1L) <= (p_35 > (g_53 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((*l_955), p_34.f4)), 4)))))), 5)), p_34.f3)));
        }
        return p_34.f0;
    }
    else
    {
        union U2 l_973[10][8] = {{{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}, {{0xD73EAB5AL}, {-6L}, {0L}, {-5L}, {0xA1B81591L}, {-1L}, {0x4279F699L}, {0x4279F699L}}};
        unsigned short *l_974 = &g_27;
        const union U3 l_975 = {4294967291UL};
        int l_976 = 0L;
        int i, j;
        l_976 ^= p_34.f0;
    }
    return p_34.f4;
}







static union U2 func_36(const unsigned short p_37)
{
    union U3 *l_185[3][6][4] = {{{(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}}, {{(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}}, {{(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}, {(void*)0, (void*)0, &g_186[9][2][1], &g_186[9][2][1]}}};
    union U3 **l_184[2];
    int l_189 = (-1L);
    union U2 l_190[7] = {{-1L}, {0xCD52C48CL}, {-1L}, {0xCD52C48CL}, {-1L}, {0xCD52C48CL}, {-1L}};
    unsigned short *l_192 = &g_27;
    unsigned short **l_191 = &l_192;
    int *l_194 = (void*)0;
    int *l_195[2];
    int l_196 = 0x5EE9B9BCL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_184[i] = &l_185[2][0][2];
    for (i = 0; i < 2; i++)
        l_195[i] = &g_16.f6;
    l_196 = (safe_sub_func_uint8_t_u_u((((void*)0 != l_184[0]) && (((-1L) > ((safe_sub_func_int32_t_s_s((0xE7C5L >= (l_189 = 1L)), 4294967286UL)) != p_37)) ^ g_91.f2)), g_193));
    return g_56;
}







static const unsigned short func_38(unsigned short * p_39, unsigned short * p_40, const union U3 p_41)
{
    unsigned short l_66[9] = {65535UL, 7UL, 65535UL, 7UL, 65535UL, 7UL, 65535UL, 7UL, 65535UL};
    int l_70 = 0L;
    struct S0 l_93 = {1L,385,0x83B5975DL,0xC0L,255UL,-1L,3L,0xD150L,0x295FBE9EL};
    unsigned char l_103 = 0xFBL;
    int *l_114 = &g_62.f6;
    int l_143 = 0x8B384F36L;
    int l_145 = 0L;
    int l_146[10] = {(-5L), 0x63CD058DL, 0L, 0L, 0x63CD058DL, (-5L), 0x63CD058DL, 0L, 0L, 0x63CD058DL};
    short l_148 = (-9L);
    char *l_166[6][4] = {{&g_62.f0, &g_5, &g_91.f0, &g_5}, {&g_62.f0, &g_5, &g_91.f0, &g_5}, {&g_62.f0, &g_5, &g_91.f0, &g_5}, {&g_62.f0, &g_5, &g_91.f0, &g_5}, {&g_62.f0, &g_5, &g_91.f0, &g_5}, {&g_62.f0, &g_5, &g_91.f0, &g_5}};
    int i, j;
    for (g_62.f8 = (-20); (g_62.f8 == 44); g_62.f8 = safe_add_func_int32_t_s_s(g_62.f8, 1))
    {
        int *l_67 = &g_62.f6;
        int l_75 = (-1L);
        int l_101 = 0xBCEAF5C8L;
        int l_102[6] = {8L, 8L, 1L, 8L, 8L, 1L};
        int i;
        if (((*l_67) ^= l_66[4]))
        {
            int l_74 = 0x8FEE3948L;
            struct S0 l_90[8][4] = {{{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}, {{1L,-323,0x5527752AL,0UL,0xA8L,0x3BF6274BL,-9L,0xADA6L,0xCFDF4E95L}, {0xE1L,31,0x5E79E523L,0UL,0x42L,0x3C5D46ADL,0xC38D33B6L,0xDBC4L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}, {0xD1L,665,6UL,5UL,0x17L,0x02E8EBDDL,0x8413730FL,0x96B1L,0UL}}};
            int *l_99[4];
            int l_100[9] = {0xC48D9708L, 0xC48D9708L, 1L, 0xC48D9708L, 0xC48D9708L, 1L, 0xC48D9708L, 0xC48D9708L, 1L};
            int i, j;
            for (i = 0; i < 4; i++)
                l_99[i] = &g_91.f6;
            for (g_62.f4 = 3; (g_62.f4 <= 8); ++g_62.f4)
            {
                l_70 &= (-9L);
                for (g_16.f6 = 0; (g_16.f6 <= 8); g_16.f6 += 1)
                {
                    int **l_71 = (void*)0;
                    int **l_72 = (void*)0;
                    int **l_73 = &l_67;
                    int i;
                    (*l_73) = (void*)0;
                    for (g_27 = 0; (g_27 <= 8); g_27 += 1)
                    {
                        int i;
                        l_75 |= (l_66[g_16.f6] & l_74);
                    }
                    if (((g_62.f0 |= (safe_mul_func_uint8_t_u_u(l_66[g_16.f6], (p_41.f1 < g_56.f3)))) ^ 0x41L))
                    {
                        unsigned char l_78 = 4UL;
                        short *l_83[8] = {&g_62.f7, &g_62.f7, &g_62.f7, &g_62.f7, &g_62.f7, &g_62.f7, &g_62.f7, &g_62.f7};
                        char *l_86 = &g_62.f0;
                        int i;
                        l_70 |= ((((*p_39) = l_78) || ((safe_lshift_func_int16_t_s_s((g_62.f7 = (g_5 > ((safe_lshift_func_uint16_t_u_s((g_16.f2 > 253UL), 6)) > p_41.f1))), 1)) > ((*l_86) = ((safe_mul_func_uint8_t_u_u((g_62.f8 || g_62.f0), 8UL)) && (g_16.f1 | p_41.f1))))) >= 0x217AL);
                    }
                    else
                    {
                        g_16.f1 = g_62.f0;
                        (*l_73) = g_87[0][1];
                        (*l_73) = &l_74;
                        (*l_67) ^= ((g_16.f5 | p_41.f1) <= (g_16.f8 ^ (l_66[5] >= (p_41.f1 != p_41.f0))));
                    }
                }
                for (g_62.f3 = 0; (g_62.f3 == 7); g_62.f3 = safe_add_func_uint16_t_u_u(g_62.f3, 3))
                {
                    struct S0 *l_92[7][1];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_92[i][j] = &l_90[0][2];
                    }
                    l_93 = (g_91 = l_90[0][2]);
                }
            }
            for (g_91.f2 = 0; (g_91.f2 > 38); ++g_91.f2)
            {
                int *l_96 = (void*)0;
                int *l_97 = (void*)0;
                int *l_98 = &l_90[0][2].f6;
                (*l_98) = (-1L);
            }
            l_100[8] ^= ((void*)0 == &g_87[0][1]);
            l_103++;
        }
        else
        {
            int *l_106 = &g_16.f6;
            short *l_109[5][2] = {{&g_62.f7, &g_62.f7}, {&g_62.f7, &g_62.f7}, {&g_62.f7, &g_62.f7}, {&g_62.f7, &g_62.f7}, {&g_62.f7, &g_62.f7}};
            unsigned char *l_112 = &l_93.f4;
            unsigned char *l_113 = &l_93.f3;
            int i, j;
            l_70 |= ((*l_106) = ((*l_67) = (*l_67)));
            (*l_106) |= ((-6L) >= (safe_lshift_func_int8_t_s_u(((void*)0 != &g_87[7][1]), l_93.f2)));
            (*l_106) ^= ((l_93.f1 = p_41.f0) <= (safe_mul_func_uint16_t_u_u(((((*l_113) |= ((*l_112) ^= 0x50L)) | 3UL) & 0x18F9L), l_93.f5)));
        }
    }
    if (((*l_114) = (65528UL || g_91.f8)))
    {
        unsigned *l_115 = &l_93.f8;
        int l_118 = 0x86943B6AL;
        char *l_119 = &l_93.f0;
        int *l_122[7][5][7] = {{{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}, {{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}, {{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}, {{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}, {{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}, {{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}, {{&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}, {&l_93.f6, &g_16.f6, &l_93.f6, &l_118, &g_16.f6, &g_16.f6, &l_93.f6}}};
        int i, j, k;
        (*l_114) = (((*l_115)--) != l_118);
        (*l_114) = l_118;
        l_93.f1 = ((*l_114) &= ((l_118 >= ((*l_119) = (((4294967288UL || p_41.f0) >= p_41.f0) > (g_5 ^ 4UL)))) & (safe_mul_func_uint8_t_u_u(p_41.f1, l_118))));
    }
    else
    {
        unsigned char *l_125 = &g_62.f3;
        int l_126 = (-1L);
        int l_140 = 0x99559537L;
        int l_141 = 0xD47E45A5L;
        int l_142 = (-1L);
        int l_144 = 1L;
        int l_147[3];
        unsigned l_149 = 0xDF2DE5E5L;
        const char *l_164 = &g_165;
        int i;
        for (i = 0; i < 3; i++)
            l_147[i] = 0x24E93014L;
        (*l_114) = p_41.f1;
        if ((safe_sub_func_uint8_t_u_u(((*l_125) = g_56.f0), g_16.f6)))
        {
            int *l_127 = &l_93.f6;
            int *l_128 = &l_126;
            int *l_129 = &l_70;
            int *l_130 = &g_62.f6;
            int *l_131 = &l_126;
            int *l_132 = &l_126;
            int *l_133 = &g_62.f6;
            int *l_134 = &l_70;
            int *l_135 = &l_70;
            int *l_136 = (void*)0;
            int *l_137 = &g_62.f6;
            int *l_138 = &l_126;
            int *l_139[3];
            int i;
            for (i = 0; i < 3; i++)
                l_139[i] = &g_62.f6;
            l_149--;
            (*l_134) = p_41.f1;
        }
        else
        {
            int l_153 = 0x2DB43169L;
            int l_154[1][8][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}};
            int l_177 = 0L;
            int i, j, k;
            (*l_114) ^= 0L;
            for (g_56.f1 = 0; (g_56.f1 <= 2); g_56.f1 += 1)
            {
                for (g_62.f6 = 0; (g_62.f6 <= 2); g_62.f6 += 1)
                {
                    return g_91.f1;
                }
            }
            if (l_149)
            {
                int *l_152[4][9] = {{&l_126, &l_141, &l_142, &l_142, &l_141, &l_126, &l_141, &l_142, &l_142}, {&l_126, &l_141, &l_142, &l_142, &l_141, &l_126, &l_141, &l_142, &l_142}, {&l_126, &l_141, &l_142, &l_142, &l_141, &l_126, &l_141, &l_142, &l_142}, {&l_126, &l_141, &l_142, &l_142, &l_141, &l_126, &l_141, &l_142, &l_142}};
                unsigned l_155 = 2UL;
                unsigned short l_158 = 0xA13BL;
                int i, j;
                l_155--;
                (*l_114) ^= l_158;
            }
            else
            {
                const char *l_162 = &g_163;
                const char **l_161[8][3] = {{&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}, {&l_162, &l_162, &l_162}};
                unsigned *l_175 = (void*)0;
                unsigned *l_176 = &g_62.f8;
                const union U3 *l_179 = &g_180;
                const union U3 **l_178 = &l_179;
                int l_181 = 0x379E35B2L;
                int i, j;
                l_177 &= ((safe_sub_func_uint32_t_u_u(((l_164 = l_125) != l_166[2][3]), (safe_rshift_func_uint16_t_u_s(65535UL, ((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((0xA1L <= (((safe_add_func_uint32_t_u_u(((*l_176) &= (p_41.f0 & (((*l_125) |= (l_142 <= p_41.f1)) || l_154[0][6][0]))), p_41.f0)) | p_41.f0) & (*l_114))) ^ 65528UL), 0x7795L)) > g_56.f1) & 0xBA40L), l_153)) & g_62.f2))))) & 0xF16EABE1L);
                (*l_178) = &p_41;
                (*l_114) = l_181;
            }
        }
    }
    return g_32[2];
}







static unsigned short * func_43(union U2 p_44)
{
    unsigned short *l_59 = (void*)0;
    struct S0 l_60 = {0xF8L,433,0x85AC0FE8L,0x85L,0UL,6L,0L,-10L,4294967294UL};
    struct S0 *l_61[6][8] = {{(void*)0, (void*)0, &l_60, (void*)0, (void*)0, &l_60, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_60, (void*)0, (void*)0, &l_60, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_60, (void*)0, (void*)0, &l_60, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_60, (void*)0, (void*)0, &l_60, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_60, (void*)0, (void*)0, &l_60, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_60, (void*)0, (void*)0, &l_60, (void*)0, (void*)0}};
    int i, j;
    for (g_56.f1 = 0; (g_56.f1 != (-19)); g_56.f1 = safe_sub_func_int16_t_s_s(g_56.f1, 4))
    {
        return l_59;
    }
    g_62 = l_60;
    return l_59;
}







static union U2 func_45(union U3 p_46)
{
    int *l_48 = &g_16.f6;
    int *l_49 = &g_16.f6;
    int *l_50 = &g_16.f6;
    int l_51 = 0x00DD038CL;
    int *l_52[5][9] = {{(void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6}, {(void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6}, {(void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6}, {(void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6}, {(void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6, (void*)0, (void*)0, &g_16.f6}};
    int i, j;
    --g_53;
    return g_56;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_16.f0, "g_16.f0", print_hash_value);
    transparent_crc(g_16.f1, "g_16.f1", print_hash_value);
    transparent_crc(g_16.f2, "g_16.f2", print_hash_value);
    transparent_crc(g_16.f3, "g_16.f3", print_hash_value);
    transparent_crc(g_16.f4, "g_16.f4", print_hash_value);
    transparent_crc(g_16.f5, "g_16.f5", print_hash_value);
    transparent_crc(g_16.f6, "g_16.f6", print_hash_value);
    transparent_crc(g_16.f7, "g_16.f7", print_hash_value);
    transparent_crc(g_16.f8, "g_16.f8", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_32[i], "g_32[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_56.f1, "g_56.f1", print_hash_value);
    transparent_crc(g_56.f2, "g_56.f2", print_hash_value);
    transparent_crc(g_56.f3, "g_56.f3", print_hash_value);
    transparent_crc(g_56.f4, "g_56.f4", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_62.f4, "g_62.f4", print_hash_value);
    transparent_crc(g_62.f5, "g_62.f5", print_hash_value);
    transparent_crc(g_62.f6, "g_62.f6", print_hash_value);
    transparent_crc(g_62.f7, "g_62.f7", print_hash_value);
    transparent_crc(g_62.f8, "g_62.f8", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_91.f5, "g_91.f5", print_hash_value);
    transparent_crc(g_91.f6, "g_91.f6", print_hash_value);
    transparent_crc(g_91.f7, "g_91.f7", print_hash_value);
    transparent_crc(g_91.f8, "g_91.f8", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_186[i][j][k].f0, "g_186[i][j][k].f0", print_hash_value);
                transparent_crc(g_186[i][j][k].f1, "g_186[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_268.f1, "g_268.f1", print_hash_value);
    transparent_crc(g_268.f2, "g_268.f2", print_hash_value);
    transparent_crc(g_268.f3, "g_268.f3", print_hash_value);
    transparent_crc(g_268.f4, "g_268.f4", print_hash_value);
    transparent_crc(g_268.f5, "g_268.f5", print_hash_value);
    transparent_crc(g_268.f6, "g_268.f6", print_hash_value);
    transparent_crc(g_268.f7, "g_268.f7", print_hash_value);
    transparent_crc(g_268.f8, "g_268.f8", print_hash_value);
    transparent_crc(g_326.f0, "g_326.f0", print_hash_value);
    transparent_crc(g_326.f1, "g_326.f1", print_hash_value);
    transparent_crc(g_326.f2, "g_326.f2", print_hash_value);
    transparent_crc(g_326.f3, "g_326.f3", print_hash_value);
    transparent_crc(g_326.f4, "g_326.f4", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_441.f1, "g_441.f1", print_hash_value);
    transparent_crc(g_441.f2, "g_441.f2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_443[i].f1, "g_443[i].f1", print_hash_value);
        transparent_crc(g_443[i].f2, "g_443[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_452.f0, "g_452.f0", print_hash_value);
    transparent_crc(g_455.f0, "g_455.f0", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_712.f0, "g_712.f0", print_hash_value);
    transparent_crc(g_712.f1, "g_712.f1", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_795.f0, "g_795.f0", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_996.f1, "g_996.f1", print_hash_value);
    transparent_crc(g_996.f2, "g_996.f2", print_hash_value);
    transparent_crc(g_1123.f0, "g_1123.f0", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1317, "g_1317", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1428.f0, "g_1428.f0", print_hash_value);
    transparent_crc(g_1428.f1, "g_1428.f1", print_hash_value);
    transparent_crc(g_1428.f2, "g_1428.f2", print_hash_value);
    transparent_crc(g_1428.f3, "g_1428.f3", print_hash_value);
    transparent_crc(g_1428.f4, "g_1428.f4", print_hash_value);
    transparent_crc(g_1453, "g_1453", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1464[i], "g_1464[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1612.f0, "g_1612.f0", print_hash_value);
    transparent_crc(g_1612.f1, "g_1612.f1", print_hash_value);
    transparent_crc(g_1612.f2, "g_1612.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
