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
   int f0;
   unsigned char f1;
};

union U1 {
   short f0;
};

union U2 {
   volatile char * f0;
};

union U3 {
   char f0;
   char f1;
   unsigned f2;
   short f3;
   int f4;
};


static volatile unsigned short g_2 = 0xC633L;
static char g_10[3][10] = {{0x5CL, 0xB6L, 0x47L, 0xB6L, 0x5CL, 0L, 0x5CL, 0xB6L, 0x47L, 0xB6L}, {0x5CL, 0xB6L, 0x47L, 0xB6L, 0x5CL, 0L, 0x5CL, 0xB6L, 0x47L, 0xB6L}, {0x5CL, 0xB6L, 0x47L, 0xB6L, 0x5CL, 0L, 0x5CL, 0xB6L, 0x47L, 0xB6L}};
static unsigned char g_18 = 252UL;
static int g_49[10][6] = {{0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}, {0x8DE677DAL, (-10L), 0x1D5BC3FAL, 8L, 8L, 0x1D5BC3FAL}};
static volatile int g_51[4][6] = {{0x25EA9B86L, 1L, 0x25EA9B86L, 1L, 0x25EA9B86L, 1L}, {0x25EA9B86L, 1L, 0x25EA9B86L, 1L, 0x25EA9B86L, 1L}, {0x25EA9B86L, 1L, 0x25EA9B86L, 1L, 0x25EA9B86L, 1L}, {0x25EA9B86L, 1L, 0x25EA9B86L, 1L, 0x25EA9B86L, 1L}};
static int g_52[10] = {0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL, 0x96ABB4AAL};
static int g_55[1][8] = {{0xEE06DCF8L, 0xEE06DCF8L, 0xEE06DCF8L, 0xEE06DCF8L, 0xEE06DCF8L, 0xEE06DCF8L, 0xEE06DCF8L, 0xEE06DCF8L}};
static unsigned char **g_63 = (void*)0;
static unsigned char ***g_62[1][5][1] = {{{&g_63}, {&g_63}, {&g_63}, {&g_63}, {&g_63}}};
static volatile int g_64[3][3] = {{0xA932E4B4L, 0xA932E4B4L, 3L}, {0xA932E4B4L, 0xA932E4B4L, 3L}, {0xA932E4B4L, 0xA932E4B4L, 3L}};
static int g_65[9][6] = {{0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}, {0x99DBF4B6L, 0L, 0x99DBF4B6L, 1L, 0x1A385A40L, (-9L)}};
static volatile int g_67 = 0xA88EB8B4L;
static int g_68 = 0L;
static unsigned g_77 = 4294967295UL;
static volatile struct S0 g_100 = {-2L,0x38L};
static unsigned char g_104 = 5UL;
static unsigned char g_106 = 0x20L;
static volatile union U2 g_116 = {0};
static volatile union U2 *g_115[2][3] = {{&g_116, &g_116, &g_116}, {&g_116, &g_116, &g_116}};
static volatile int *g_119[3][2][8] = {{{&g_51[3][2], &g_51[2][3], &g_51[2][5], (void*)0, &g_64[1][1], (void*)0, &g_64[1][1], (void*)0}, {&g_51[3][2], &g_51[2][3], &g_51[2][5], (void*)0, &g_64[1][1], (void*)0, &g_64[1][1], (void*)0}}, {{&g_51[3][2], &g_51[2][3], &g_51[2][5], (void*)0, &g_64[1][1], (void*)0, &g_64[1][1], (void*)0}, {&g_51[3][2], &g_51[2][3], &g_51[2][5], (void*)0, &g_64[1][1], (void*)0, &g_64[1][1], (void*)0}}, {{&g_51[3][2], &g_51[2][3], &g_51[2][5], (void*)0, &g_64[1][1], (void*)0, &g_64[1][1], (void*)0}, {&g_51[3][2], &g_51[2][3], &g_51[2][5], (void*)0, &g_64[1][1], (void*)0, &g_64[1][1], (void*)0}}};
static unsigned char g_130 = 255UL;
static short g_152 = 0x77E2L;
static unsigned g_173 = 0x86CB6A13L;
static union U2 g_188[7][4][2] = {{{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}, {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}, {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}, {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}, {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}, {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}, {{{0}, {0}}, {{0}, {0}}, {{0}, {0}}, {{0}, {0}}}};
static union U2 *g_187[10] = {(void*)0, &g_188[6][0][1], (void*)0, &g_188[6][0][1], (void*)0, &g_188[6][0][1], (void*)0, &g_188[6][0][1], (void*)0, &g_188[6][0][1]};
static union U2 **g_186[10][10] = {{&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}, {&g_187[0], &g_187[0], &g_187[0], &g_187[4], &g_187[0], &g_187[5], &g_187[0], &g_187[0], &g_187[0], &g_187[5]}};
static struct S0 g_191 = {1L,248UL};
static short g_205 = (-9L);
static int *g_208[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static unsigned short g_214 = 8UL;
static struct S0 g_259 = {0L,1UL};
static union U1 g_263 = {-1L};
static unsigned short g_291[10] = {0x2121L, 0x2121L, 0x2121L, 0x2121L, 0x2121L, 0x2121L, 0x2121L, 0x2121L, 0x2121L, 0x2121L};
static char g_349 = 0x07L;
static union U3 *g_382 = (void*)0;
static volatile int *g_416 = &g_64[1][0];
static union U2 ***g_424[7] = {&g_186[8][4], &g_186[8][4], &g_186[8][4], &g_186[8][4], &g_186[8][4], &g_186[8][4], &g_186[8][4]};
static volatile unsigned short g_444 = 0UL;
static union U2 ****g_451 = (void*)0;
static union U1 *g_472 = &g_263;
static short *g_485 = &g_152;
static short **g_484 = &g_485;
static union U3 g_500 = {0xDCL};
static char g_511 = 0xFCL;
static struct S0 *g_588 = &g_259;
static unsigned char g_600 = 7UL;
static int *g_678 = (void*)0;
static volatile unsigned char g_702 = 0xA1L;
static char *g_730 = &g_10[1][3];
static char **g_729 = &g_730;
static unsigned short **g_816 = (void*)0;
static unsigned short ***g_815 = &g_816;
static short g_835 = 0L;



static union U3 func_1(void);
static int func_4(int p_5, char * p_6, char * p_7, char * p_8);
static short func_20(char p_21, char p_22, unsigned p_23, unsigned short p_24, char * p_25);
static char func_26(char * p_27, unsigned char * p_28, unsigned char * p_29, unsigned p_30, int p_31);
static char * func_32(char * p_33, union U1 p_34, union U3 p_35);
static char * func_36(char * p_37);
static char * func_38(char * p_39, char p_40, int p_41);
static int * func_56(char * p_57, unsigned char *** p_58);
static union U2 * func_69(unsigned char *** p_70, unsigned p_71, int * p_72, unsigned p_73, unsigned char **** p_74);
static int * func_78(char p_79, union U1 p_80, int * p_81, unsigned char * p_82, char p_83);
static union U3 func_1(void)
{
    volatile short l_3[8][6] = {{0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}, {0xA29CL, 0xEFA4L, (-1L), 0xEFA4L, 0xA29CL, 0x952EL}};
    char *l_9[2][5][3] = {{{&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}}, {{&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}, {&g_10[2][3], (void*)0, &g_10[2][4]}}};
    int *l_836 = &g_65[8][0];
    int **l_837 = &g_208[0];
    union U1 l_838[5][7][7] = {{{{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}}, {{{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}}, {{{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}}, {{{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}}, {{{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}, {{0xB82AL}, {0x2F5DL}, {0xCBEFL}, {0x3AF7L}, {-4L}, {0x5B1FL}, {0xC8EBL}}}};
    union U2 ****l_839 = &g_424[5];
    int i, j, k;
    l_3[2][5] = g_2;
    (*l_836) = func_4(g_2, l_9[1][3][0], &g_10[1][5], l_9[0][3][1]);
    (*l_837) = (void*)0;
    (*l_837) = &g_55[0][5];
    return g_500;
}







static int func_4(int p_5, char * p_6, char * p_7, char * p_8)
{
    unsigned char *l_17 = &g_18;
    int l_19 = 5L;
    char *l_42 = (void*)0;
    union U1 l_458 = {6L};
    union U3 l_459 = {0x73L};
    unsigned char *l_599 = &g_600;
    unsigned char *l_601 = &g_600;
    unsigned l_796[8] = {4294967290UL, 4294967288UL, 4294967290UL, 4294967288UL, 4294967290UL, 4294967288UL, 4294967290UL, 4294967288UL};
    short *l_809 = (void*)0;
    unsigned char ***l_832 = &g_63;
    unsigned char ****l_833 = &g_62[0][3][0];
    int **l_834 = &g_208[2];
    int i;
    if (((((safe_rshift_func_int8_t_s_u((&g_10[2][1] != &g_10[1][8]), (safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((g_10[1][5] | (*p_7)), ((*l_17) = 0xD9L))) != ((l_19 == ((-7L) & func_20(func_26(func_32(func_36(func_38(l_42, g_2, p_5)), l_458, l_459), l_599, l_601, l_458.f0, g_10[1][5]), g_600, l_459.f1, g_10[0][4], l_42))) ^ 0x32L)), (-1L))))) ^ g_10[0][7]) & l_459.f1) < l_796[0]))
    {
        int *l_801 = &l_19;
        unsigned short ***l_817 = &g_816;
        union U3 *l_828 = &l_459;
        for (g_104 = 0; (g_104 <= 0); g_104 += 1)
        {
            unsigned l_797 = 0x5BD939F3L;
            struct S0 l_802 = {0xE3216126L,2UL};
            unsigned char *l_813 = &g_130;
            struct S0 l_822[7][2][3] = {{{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}, {{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}, {{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}, {{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}, {{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}, {{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}, {{{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}, {{1L,0x6AL}, {1L,0x6AL}, {0x2A333B44L,0x3EL}}}};
            union U1 *l_824 = &g_263;
            int i, j, k;
            if (l_797)
                break;
            if (p_5)
                break;
            for (l_459.f4 = 0; (l_459.f4 <= 0); l_459.f4 += 1)
            {
                short l_805 = 1L;
                int **l_814 = &l_801;
                unsigned short ***l_818 = (void*)0;
                (*g_416) = p_5;
                for (g_191.f0 = 0; (g_191.f0 <= 0); g_191.f0 += 1)
                {
                    int *l_798[4][2] = {{&g_52[8], &g_52[8]}, {&g_52[8], &g_52[8]}, {&g_52[8], &g_52[8]}, {&g_52[8], &g_52[8]}};
                    int **l_799 = &l_798[1][1];
                    int **l_800[8][1] = {{&g_208[0]}, {&g_208[0]}, {&g_208[0]}, {&g_208[0]}, {&g_208[0]}, {&g_208[0]}, {&g_208[0]}, {&g_208[0]}};
                    struct S0 l_804 = {-1L,0x31L};
                    short *l_808 = &l_459.f3;
                    int i, j;
                    l_801 = ((*l_799) = l_798[1][0]);
                    for (g_191.f1 = 0; (g_191.f1 <= 0); g_191.f1 += 1)
                    {
                        struct S0 *l_803[7] = {&l_802, (void*)0, &l_802, (void*)0, &l_802, (void*)0, &l_802};
                        short **l_810 = &g_485;
                        int i;
                        (**l_799) = (-8L);
                        l_804 = l_802;
                        l_805 = l_19;
                        p_5 = ((p_5 | ((l_809 = l_808) == ((*l_810) = l_808))) != (safe_lshift_func_int16_t_s_s(p_5, 14)));
                    }
                    if (p_5)
                        break;
                    g_208[1] = &p_5;
                }
                (*l_814) = &p_5;
                for (g_130 = 0; (g_130 <= 0); g_130 += 1)
                {
                    int l_819 = 0L;
                    for (g_106 = 0; (g_106 <= 1); g_106 += 1)
                    {
                        (**l_814) = ((((l_817 = g_815) != l_818) ^ 0xA46DL) < l_819);
                    }
                    (*l_801) = p_5;
                    for (g_349 = 0; (g_349 <= 0); g_349 += 1)
                    {
                        union U1 **l_820 = &g_472;
                        union U1 ***l_821 = &l_820;
                        (**l_814) = ((((*l_821) = l_820) != &g_472) >= p_5);
                    }
                    (*g_588) = l_822[2][1][1];
                }
            }
            for (g_600 = 0; (g_600 <= 0); g_600 += 1)
            {
                union U1 **l_823[4][2];
                int **l_825 = &g_208[0];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_823[i][j] = (void*)0;
                }
                l_824 = (void*)0;
                (*l_825) = &g_49[7][5];
                (*g_588) = (*g_588);
                for (g_500.f2 = 0; (g_500.f2 <= 0); g_500.f2 += 1)
                {
                    union U3 *l_827[7] = {&g_500, &l_459, &g_500, &l_459, &g_500, &l_459, &g_500};
                    int i;
                    (*g_416) = p_5;
                    if (p_5)
                    {
                        (*l_825) = &p_5;
                    }
                    else
                    {
                        volatile int **l_826 = &g_119[0][0][0];
                        (*l_825) = &g_52[7];
                        (*l_826) = &g_64[1][0];
                        l_828 = l_827[6];
                    }
                    if ((safe_lshift_func_int8_t_s_s(1L, 7)))
                    {
                        (*g_588) = (*g_588);
                        if (l_822[2][1][1].f0)
                            continue;
                    }
                    else
                    {
                        volatile int **l_831 = &g_119[0][0][0];
                        if (p_5)
                            break;
                        (*l_831) = &g_67;
                        (*g_416) = ((*l_801) = p_5);
                    }
                }
            }
        }
    }
    else
    {
        g_119[1][0][5] = (void*)0;
    }
    (*l_834) = func_56(&g_349, ((*l_833) = l_832));
    return g_835;
}







static short func_20(char p_21, char p_22, unsigned p_23, unsigned short p_24, char * p_25)
{
    int l_679 = (-6L);
    char *l_697 = &g_511;
    union U2 *l_716 = &g_188[6][0][1];
    union U3 *l_745 = (void*)0;
    struct S0 *l_747 = &g_191;
    struct S0 *l_763 = &g_191;
    int *l_766 = &g_191.f0;
    union U1 l_767[4] = {{0L}, {0L}, {0L}, {0L}};
    unsigned l_795 = 0UL;
    int i;
    for (g_68 = 8; (g_68 >= 0); g_68 -= 1)
    {
        char *l_680 = &g_500.f1;
        int l_693 = 0x9D2DFAF3L;
        int *l_705 = (void*)0;
        int *l_743 = &g_55[0][5];
        volatile int *l_762 = &g_64[1][0];
        struct S0 l_765 = {0xAB6BEFAFL,255UL};
        if ((0x5AL && ((*l_680) = ((*g_485) ^ (((l_679 != 0UL) > p_24) >= l_679)))))
        {
            unsigned short l_687 = 1UL;
            unsigned char *l_692 = &g_600;
            int l_694 = 4L;
            union U1 l_695 = {0xC572L};
            int **l_696[8] = {&g_678, &g_678, (void*)0, &g_678, &g_678, (void*)0, &g_678, &g_678};
            int i;
            (*g_416) = (p_21 > 0x46FBBB24L);
            l_694 = (l_679 = (safe_sub_func_uint32_t_u_u(g_259.f0, (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_687, ((0x628BL != (safe_rshift_func_int8_t_s_s(g_51[0][4], 7))) != ((*g_485) = (*g_485))))), (((safe_rshift_func_int8_t_s_s((p_24 || (((*l_692) = ((g_65[8][0] >= g_77) <= p_22)) & (-1L))), l_693)) | 0x9002L) < l_687))))));
            l_705 = l_705;
        }
        else
        {
            unsigned l_708 = 0xFCCB2F1AL;
            int l_710 = 0xEEEA553AL;
            union U1 *l_718[6][8];
            int *l_734[8][6];
            unsigned char l_742 = 0UL;
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 8; j++)
                    l_718[i][j] = &g_263;
            }
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 6; j++)
                    l_734[i][j] = &g_55[0][5];
            }
            for (g_500.f4 = 1; (g_500.f4 <= 9); g_500.f4 += 1)
            {
                union U1 l_721[9] = {{-1L}, {-9L}, {-1L}, {-9L}, {-1L}, {-9L}, {-1L}, {-9L}, {-1L}};
                int *l_725[9][7][4] = {{{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}, {{&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}, {&g_49[6][3], (void*)0, (void*)0, &g_55[0][5]}}};
                int i, j, k;
                if (p_21)
                    break;
                for (g_77 = 0; (g_77 <= 1); g_77 += 1)
                {
                    unsigned l_709[2][3][2];
                    int l_715[9] = {2L, 0xDF1B8805L, 2L, 0xDF1B8805L, 2L, 0xDF1B8805L, 2L, 0xDF1B8805L, 2L};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_709[i][j][k] = 0UL;
                        }
                    }
                    for (g_214 = 3; (g_214 <= 9); g_214 += 1)
                    {
                        l_715[8] = ((safe_mul_func_int16_t_s_s(((*g_485) = (p_24 < ((l_708 ^ (l_679 | (g_100.f0 <= ((l_710 = l_709[1][2][0]) != p_23)))) > (((0x30L && (safe_add_func_uint16_t_u_u(g_214, (safe_rshift_func_int8_t_s_u(0xB8L, 5))))) ^ l_709[1][2][0]) < 0x23L)))), p_22)) | p_21);
                    }
                    return p_24;
                }
                g_187[(g_68 + 1)] = l_716;
                for (g_349 = 0; (g_349 <= 1); g_349 += 1)
                {
                    struct S0 l_717 = {0L,0x69L};
                    int *l_723 = &g_65[8][0];
                    (*g_588) = l_717;
                    if (l_710)
                    {
                        union U1 **l_719 = &g_472;
                        int l_720 = 0x91FE1095L;
                        int **l_722[6][4][9] = {{{&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}}, {{&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}}, {{&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}}, {{&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}}, {{&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}}, {{&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}, {&g_208[0], &g_208[0], &l_705, (void*)0, (void*)0, &l_705, &g_208[2], &g_678, &g_208[2]}}};
                        int i, j, k;
                        (*l_719) = (l_718[0][7] = l_718[3][1]);
                        l_723 = &l_720;
                    }
                    else
                    {
                        int **l_724[1][10] = {{(void*)0, &g_208[0], &g_208[1], &g_208[1], &g_208[0], (void*)0, &g_208[0], &g_208[1], &g_208[1], &g_208[0]}};
                        int i, j;
                        g_678 = &g_52[8];
                        return p_24;
                    }
                    if (p_22)
                    {
                        return p_21;
                    }
                    else
                    {
                        int **l_726 = &l_725[4][2][3];
                        (*l_726) = l_725[4][2][3];
                        (*l_726) = (void*)0;
                    }
                    if ((p_21 && 0x2DCCL))
                    {
                        char **l_728[1];
                        char ***l_727[2][3];
                        int l_731 = 0L;
                        unsigned char *l_732 = (void*)0;
                        int **l_733[6][6] = {{&g_678, &g_208[0], &g_678, &l_705, &g_678, &g_208[0]}, {&g_678, &g_208[0], &g_678, &l_705, &g_678, &g_208[0]}, {&g_678, &g_208[0], &g_678, &l_705, &g_678, &g_208[0]}, {&g_678, &g_208[0], &g_678, &l_705, &g_678, &g_208[0]}, {&g_678, &g_208[0], &g_678, &l_705, &g_678, &g_208[0]}, {&g_678, &g_208[0], &g_678, &l_705, &g_678, &g_208[0]}};
                        union U1 l_737 = {0x569DL};
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_728[i] = &l_697;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_727[i][j] = &l_728[0];
                        }
                        g_729 = &p_25;
                        l_734[6][2] = &g_52[8];
                        (*g_588) = l_717;
                        l_743 = (l_705 = l_725[8][0][0]);
                    }
                    else
                    {
                        int l_744 = 7L;
                        return l_744;
                    }
                }
            }
            return p_23;
        }
        l_745 = (void*)0;
        for (g_349 = 1; (g_349 >= 0); g_349 -= 1)
        {
            int l_746 = 1L;
            return l_746;
        }
        (*g_588) = (*g_588);
        for (g_511 = 0; (g_511 <= 1); g_511 += 1)
        {
            struct S0 **l_748 = &l_747;
            union U1 l_749 = {0L};
            int *l_750[6] = {(void*)0, (void*)0, &g_55[0][5], (void*)0, (void*)0, &g_55[0][5]};
            unsigned *l_754[9] = {&g_77, (void*)0, &g_77, (void*)0, &g_77, (void*)0, &g_77, (void*)0, &g_77};
            unsigned **l_753 = &l_754[5];
            unsigned short *l_761[7][7] = {{&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}, {&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}, {&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}, {&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}, {&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}, {&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}, {&g_291[3], &g_291[3], &g_291[3], &g_291[3], (void*)0, &g_214, (void*)0}};
            struct S0 **l_764[1][4][10] = {{{&l_763, &g_588, (void*)0, &l_763, &l_763, &g_588, &l_763, &l_763, (void*)0, &g_588}, {&l_763, &g_588, (void*)0, &l_763, &l_763, &g_588, &l_763, &l_763, (void*)0, &g_588}, {&l_763, &g_588, (void*)0, &l_763, &l_763, &g_588, &l_763, &l_763, (void*)0, &g_588}, {&l_763, &g_588, (void*)0, &l_763, &l_763, &g_588, &l_763, &l_763, (void*)0, &g_588}}};
            int i, j, k;
            (*l_748) = l_747;
            l_762 = &g_51[3][2];
            g_588 = ((*l_748) = l_763);
            for (g_349 = 0; (g_349 <= 1); g_349 += 1)
            {
                (*l_763) = (**l_748);
                (*l_747) = l_765;
            }
        }
    }
    for (g_191.f1 = 0; (g_191.f1 <= 1); g_191.f1 += 1)
    {
        int **l_768 = &g_208[0];
        union U3 **l_776[9] = {&l_745, &g_382, &l_745, &g_382, &l_745, &g_382, &l_745, &g_382, &l_745};
        char *l_792 = &g_500.f0;
        struct S0 l_793 = {9L,1UL};
        int i;
        l_766 = &g_52[(g_191.f1 + 4)];
        (*l_768) = &l_679;
        for (g_106 = 0; (g_106 <= 1); g_106 += 1)
        {
            unsigned short *l_782 = (void*)0;
            unsigned short **l_781 = &l_782;
            unsigned short ***l_783 = &l_781;
            union U1 **l_785[3][1][6] = {{{&g_472, (void*)0, (void*)0, (void*)0, (void*)0, &g_472}}, {{&g_472, (void*)0, (void*)0, (void*)0, (void*)0, &g_472}}, {{&g_472, (void*)0, (void*)0, (void*)0, (void*)0, &g_472}}};
            union U1 ***l_784[4] = {&l_785[2][0][0], &l_785[1][0][1], &l_785[2][0][0], &l_785[1][0][1]};
            struct S0 *l_794[10];
            int i, j, k;
            for (i = 0; i < 10; i++)
                l_794[i] = &l_793;
            if ((safe_sub_func_int32_t_s_s((g_52[(g_106 + 5)] = 0xEE1A6C4DL), g_49[7][5])))
            {
                struct S0 *l_771 = &g_191;
                struct S0 *l_773 = &g_259;
                for (g_511 = 0; (g_511 >= 0); g_511 -= 1)
                {
                    struct S0 **l_772 = &l_747;
                    for (g_130 = 0; (g_130 <= 1); g_130 += 1)
                    {
                        int i, j;
                        return g_55[g_511][(g_130 + 1)];
                    }
                    if (g_52[(g_106 + 5)])
                        continue;
                    (*l_772) = l_771;
                }
                (*l_773) = (*l_771);
            }
            else
            {
                union U3 **l_775 = (void*)0;
                union U3 ***l_774[1];
                struct S0 l_778[1][1][4] = {{{{1L,254UL}, {1L,254UL}, {1L,254UL}, {1L,254UL}}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_774[i] = &l_775;
                for (g_259.f0 = 0; (g_259.f0 <= 1); g_259.f0 += 1)
                {
                    (*l_768) = &g_52[(g_106 + 5)];
                    (*l_768) = &l_679;
                }
                if (((*l_766) = ((l_776[8] = &g_382) != (void*)0)))
                {
                    unsigned l_777[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_777[i] = 0xA91B30C7L;
                    for (g_205 = 1; (g_205 >= 0); g_205 -= 1)
                    {
                        if (l_777[0])
                            break;
                        if (p_23)
                            break;
                        if ((*l_766))
                            break;
                    }
                    l_778[0][0][2] = (*g_588);
                }
                else
                {
                    return p_24;
                }
            }
            if ((*g_416))
                break;
            (*g_416) = (safe_add_func_int16_t_s_s((((*l_783) = l_781) == (void*)0), (((void*)0 == l_784[3]) == ((((safe_lshift_func_int8_t_s_s((*l_766), 7)) == 4294967295UL) && (safe_rshift_func_int16_t_s_s((*g_485), 13))) < (safe_rshift_func_int8_t_s_u(p_21, p_23))))));
            g_259 = l_793;
        }
    }
    return l_795;
}







static char func_26(char * p_27, unsigned char * p_28, unsigned char * p_29, unsigned p_30, int p_31)
{
    int l_625[1][6] = {{0x322E2017L, 0x322E2017L, 1L, 0x322E2017L, 0x322E2017L, 1L}};
    union U1 *l_628 = &g_263;
    int l_633 = 0x0C369FC8L;
    int l_653 = 0L;
    struct S0 l_674 = {-1L,0x4AL};
    int **l_675 = &g_208[0];
    int *l_677 = &l_674.f0;
    int **l_676[8][1][4] = {{{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}, {{&l_677, &l_677, &l_677, &l_677}}};
    int i, j, k;
    for (g_500.f4 = (-5); (g_500.f4 < (-23)); g_500.f4 = safe_sub_func_uint16_t_u_u(g_500.f4, 5))
    {
        int l_612 = 0x6DFB26F7L;
        int l_613 = (-6L);
        unsigned char ***l_643 = &g_63;
        for (g_173 = 0; (g_173 != 48); ++g_173)
        {
            unsigned l_608 = 0xA89F293DL;
            short *l_611[4];
            unsigned *l_616 = &g_77;
            unsigned char *l_622 = &g_104;
            unsigned char **l_621 = &l_622;
            unsigned short *l_623 = (void*)0;
            unsigned short *l_624 = &g_291[7];
            union U1 l_626 = {0x6A11L};
            volatile int **l_627 = &g_119[2][1][5];
            int i;
            for (i = 0; i < 4; i++)
                l_611[i] = (void*)0;
            (*l_627) = &g_51[3][5];
        }
        (*g_416) = p_30;
        if (p_31)
        {
            union U1 **l_629 = &l_628;
            int l_630 = 0x71C2DC8BL;
            union U3 **l_634 = &g_382;
            char *l_644[1][5][4] = {{{&g_349, &g_349, (void*)0, &g_349}, {&g_349, &g_349, (void*)0, &g_349}, {&g_349, &g_349, (void*)0, &g_349}, {&g_349, &g_349, (void*)0, &g_349}, {&g_349, &g_349, (void*)0, &g_349}}};
            int *l_654 = &g_49[6][5];
            char l_661 = 0x61L;
            int i, j, k;
            (*l_629) = l_628;
            if ((~(*g_416)))
            {
                if (p_30)
                {
                    l_630 = 1L;
                    return (*p_27);
                }
                else
                {
                    (*g_416) = ((65528UL || (safe_lshift_func_uint8_t_u_s(((void*)0 == p_27), ((*p_27) != l_633)))) && (*p_27));
                }
            }
            else
            {
                for (p_31 = 0; (p_31 <= 3); p_31 += 1)
                {
                    return (*p_27);
                }
            }
            (*l_634) = &g_500;
            if ((~((*l_654) = (safe_rshift_func_uint16_t_u_s(g_65[8][0], ((((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((p_30 > (safe_sub_func_int8_t_s_s((l_613 = (l_633 ^ ((void*)0 == l_643))), (safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(l_612, (safe_add_func_uint32_t_u_u(p_31, (l_653 = l_630))))), l_630)) < 4294967286UL) != l_612), 0xC926185CL))))), p_31)), g_130)) != l_630) ^ l_612) == l_633))))))
            {
                unsigned char l_664 = 0x95L;
                unsigned short *l_665 = &g_214;
                for (g_77 = 0; (g_77 <= 2); g_77 += 1)
                {
                    int **l_655 = (void*)0;
                    int **l_656 = &g_208[1];
                    (*l_656) = (void*)0;
                }
                for (p_31 = 0; (p_31 == 11); p_31++)
                {
                    for (l_613 = 0; (l_613 != (-1)); l_613--)
                    {
                        (*l_634) = (void*)0;
                        (*g_588) = (*g_588);
                        if (p_31)
                            break;
                        (*l_654) = l_661;
                    }
                }
                (*g_416) = (g_104 != (*l_654));
                (*g_416) = ((((*l_665) = ((safe_sub_func_int32_t_s_s((l_664 >= l_625[0][1]), (*l_654))) >= (*l_654))) && p_31) | (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((*l_654), (l_625[0][2] ^ (safe_lshift_func_uint16_t_u_u((p_31 <= ((!(!p_31)) != p_31)), 11))))), 0xEEBCL)) & p_31) | (*p_27)));
            }
            else
            {
                int *l_672 = &g_65[3][5];
                for (l_630 = 3; (l_630 >= 0); l_630 -= 1)
                {
                    int i;
                    g_208[l_630] = l_672;
                }
            }
        }
        else
        {
            int l_673 = 1L;
            (*g_416) = (l_653 = l_673);
            return (*p_27);
        }
    }
    (*g_588) = l_674;
    g_678 = ((*l_675) = &l_653);
    (*g_588) = l_674;
    return (*p_27);
}







static char * func_32(char * p_33, union U1 p_34, union U3 p_35)
{
    struct S0 l_493 = {0x86FB1533L,0x07L};
    union U3 *l_499 = &g_500;
    unsigned char *l_514[10];
    unsigned char **l_513 = &l_514[5];
    unsigned char **l_519 = (void*)0;
    union U2 *l_527 = &g_188[6][0][1];
    int *l_541[5];
    unsigned short l_576 = 0xE538L;
    int i;
    for (i = 0; i < 10; i++)
        l_514[i] = &g_259.f1;
    for (i = 0; i < 5; i++)
        l_541[i] = (void*)0;
    for (p_35.f1 = 0; (p_35.f1 == (-9)); --p_35.f1)
    {
        short l_477[4] = {0x5514L, 0x9D6CL, 0x5514L, 0x9D6CL};
        unsigned char **l_518 = &l_514[5];
        unsigned char **l_520 = &l_514[5];
        union U2 *l_526 = &g_188[4][2][1];
        int *l_537[5][6] = {{&l_493.f0, &l_493.f0, &g_68, (void*)0, &g_52[4], (void*)0}, {&l_493.f0, &l_493.f0, &g_68, (void*)0, &g_52[4], (void*)0}, {&l_493.f0, &l_493.f0, &g_68, (void*)0, &g_52[4], (void*)0}, {&l_493.f0, &l_493.f0, &g_68, (void*)0, &g_52[4], (void*)0}, {&l_493.f0, &l_493.f0, &g_68, (void*)0, &g_52[4], (void*)0}};
        int **l_542 = (void*)0;
        int **l_543 = &l_541[3];
        unsigned char ****l_584 = (void*)0;
        unsigned char *****l_583 = &l_584;
        union U1 l_590 = {1L};
        int i, j;
        for (g_349 = 4; (g_349 != 18); g_349++)
        {
            char *l_486 = &g_349;
            struct S0 l_489 = {0L,0x1EL};
            union U1 *l_497 = &g_263;
            int *l_501 = &g_55[0][5];
            int **l_538 = (void*)0;
            int **l_539 = &l_537[0][3];
            int **l_540[4][9] = {{&g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0]}, {&g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0]}, {&g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0]}, {&g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0], &g_208[0]}};
            int i, j;
            if ((safe_mod_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s((+0xF9L), (~(&g_263 != (g_472 = &g_263))))), ((safe_rshift_func_uint8_t_u_s(0xE1L, 6)) > (g_2 < l_477[0])))) ^ (g_68 > p_34.f0)), (+l_477[3]))), 4294967295UL)))
            {
                short *l_482 = &g_263.f0;
                short **l_481 = &l_482;
                for (g_191.f0 = 14; (g_191.f0 > 21); g_191.f0 = safe_add_func_uint8_t_u_u(g_191.f0, 9))
                {
                    union U1 **l_480 = &g_472;
                    short ***l_483[4] = {&l_481, &l_481, &l_481, &l_481};
                    int i;
                    (*l_480) = (void*)0;
                    g_484 = l_481;
                }
                return l_486;
            }
            else
            {
                struct S0 *l_490 = (void*)0;
                for (g_191.f0 = 0; (g_191.f0 <= (-27)); g_191.f0--)
                {
                    struct S0 **l_491 = &l_490;
                    struct S0 l_494 = {0L,6UL};
                    union U1 **l_498 = &g_472;
                    l_489 = g_191;
                    (*l_491) = l_490;
                    if (p_34.f0)
                    {
                        struct S0 *l_492[10] = {&g_259, &g_259, &g_259, &g_259, &g_259, &g_259, &g_259, &g_259, &g_259, &g_259};
                        int i;
                        g_100 = l_489;
                        l_494 = l_493;
                        g_119[2][1][7] = &g_64[2][2];
                        return p_33;
                    }
                    else
                    {
                        union U3 *l_495 = (void*)0;
                        union U3 **l_496[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_496[i] = &l_495;
                        (*g_416) = (-8L);
                        g_382 = l_495;
                    }
                    (*l_498) = l_497;
                }
            }
            if (((*l_501) = (&p_35 != l_499)))
            {
                int l_510 = 0x09C41B56L;
                unsigned *l_512[5][6];
                unsigned char ***l_515 = (void*)0;
                unsigned char ***l_516 = (void*)0;
                unsigned char ***l_517[5] = {&g_63, (void*)0, &g_63, (void*)0, &g_63};
                int l_521 = 7L;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_512[i][j] = &g_173;
                }
                l_521 = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s((!((safe_add_func_int8_t_s_s((*p_33), ((safe_lshift_func_uint8_t_u_s((l_510 = 0x6EL), 3)) | ((-1L) > ((*l_501) = g_511))))) & (l_513 != (l_520 = (l_519 = (l_518 = (void*)0)))))), (l_493.f1 & (0L > p_34.f0)))) < l_493.f0), p_35.f0));
            }
            else
            {
                struct S0 *l_523 = &l_489;
                struct S0 **l_522 = &l_523;
                (*l_522) = &g_259;
            }
            for (g_500.f1 = (-25); (g_500.f1 <= 22); g_500.f1++)
            {
                char l_530 = 0x9DL;
                struct S0 l_535 = {0xC5B40987L,0UL};
                l_527 = l_526;
                for (g_104 = 0; (g_104 < 42); g_104 = safe_add_func_uint16_t_u_u(g_104, 6))
                {
                    if (l_530)
                        break;
                    (*l_501) = (safe_rshift_func_uint16_t_u_u((p_35.f0 == g_291[3]), 11));
                    for (g_67 = 0; g_67 < 4; g_67 += 1)
                    {
                        l_477[g_67] = 1L;
                    }
                    for (g_191.f0 = 0; (g_191.f0 > (-27)); g_191.f0--)
                    {
                        struct S0 *l_536 = &g_259;
                        (*l_536) = l_535;
                        (*l_536) = l_493;
                        if (p_35.f1)
                            break;
                        return &g_10[1][3];
                    }
                }
            }
            g_208[0] = ((*l_539) = l_537[3][2]);
        }
    }
    return p_33;
}







static char * func_36(char * p_37)
{
    int *l_50 = &g_49[0][3];
    unsigned char **l_60[3];
    unsigned char ***l_59 = &l_60[2];
    unsigned char ****l_61[6][9][4] = {{{(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}}, {{(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}}, {{(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}}, {{(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}}, {{(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}}, {{(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}, {(void*)0, (void*)0, &l_59, (void*)0}}};
    int **l_303 = &l_50;
    int l_304 = (-1L);
    union U1 l_314 = {1L};
    short l_390 = 0x9383L;
    union U2 *l_393 = &g_188[3][0][1];
    char l_407 = 0xEAL;
    unsigned short *l_438 = &g_291[0];
    union U2 ****l_450 = &g_424[4];
    int *l_454 = &g_49[7][5];
    union U1 *l_456 = (void*)0;
    union U1 **l_455 = &l_456;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_60[i] = (void*)0;
    (*l_50) = g_49[7][5];
    for (g_52[8] = 0; (g_52[8] > 13); g_52[8] = safe_add_func_uint16_t_u_u(g_52[8], 9))
    {
        for (g_2 = 0; g_2 < 10; g_2 += 1)
        {
            for (g_55[0][5] = 0; g_55[0][5] < 6; g_55[0][5] += 1)
            {
                g_49[g_2][g_55[0][5]] = (-1L);
            }
        }
    }
    (*l_303) = func_56(p_37, (g_62[0][3][0] = l_59));
    if (l_304)
    {
        struct S0 l_305 = {0x90A0EE0BL,0x4EL};
        struct S0 *l_306[8][8][3];
        struct S0 l_307 = {0x62773BEEL,7UL};
        int i, j, k;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 3; k++)
                    l_306[i][j][k] = &l_305;
            }
        }
        l_307 = l_305;
        l_307.f0 = (0xB1L <= (safe_sub_func_int32_t_s_s(((l_305.f0 < g_64[1][0]) != l_305.f0), g_291[4])));
        l_304 = 0xAD811E5AL;
    }
    else
    {
        unsigned l_322 = 0x14A52CCEL;
        unsigned char *l_325 = &g_259.f1;
        unsigned l_356 = 9UL;
        unsigned char ***l_373 = &g_63;
        union U1 *l_378 = &l_314;
        int l_394 = 4L;
        volatile int *l_434[5][7][7] = {{{&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}}, {{&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}}, {{&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}}, {{&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}}, {{&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}, {&g_64[1][0], &g_64[1][0], (void*)0, &g_67, &g_67, &g_100.f0, &g_100.f0}}};
        unsigned short *l_437 = &g_214;
        unsigned short *l_439 = (void*)0;
        int **l_453[3];
        union U1 ***l_457[6][5][7] = {{{&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}}, {{&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}}, {{&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}}, {{&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}}, {{&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}}, {{&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}, {&l_455, &l_455, &l_455, &l_455, &l_455, &l_455, &l_455}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_453[i] = &g_208[0];
        for (g_263.f0 = (-21); (g_263.f0 <= 9); g_263.f0++)
        {
            unsigned l_312 = 4294967295UL;
            int *l_324 = &g_65[0][2];
            unsigned char *l_326[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            unsigned l_341[1];
            struct S0 *l_400 = (void*)0;
            union U2 ***l_422[3][5][8] = {{{&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}}, {{&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}}, {{&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}, {&g_186[8][4], &g_186[4][2], (void*)0, (void*)0, &g_186[6][6], &g_186[2][2], (void*)0, &g_186[8][4]}}};
            unsigned l_428 = 6UL;
            unsigned short *l_436 = &g_291[1];
            unsigned short **l_435[6] = {&l_436, &l_436, &l_436, &l_436, &l_436, &l_436};
            union U2 ****l_449[7][6][6] = {{{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}, {{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}, {{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}, {{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}, {{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}, {{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}, {{&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}, {&l_422[1][0][5], &g_424[4], &g_424[5], &l_422[0][4][2], &g_424[5], &g_424[4]}}};
            union U2 *****l_448 = &l_449[6][2][2];
            unsigned *l_452[4][10][6] = {{{&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}}, {{&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}}, {{&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}}, {{&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}, {&l_356, &g_77, &l_356, &l_312, (void*)0, &l_356}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_341[i] = 8UL;
            if (l_312)
            {
                unsigned char ****l_313[10][2][3] = {{{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}, {{(void*)0, &g_62[0][3][0], (void*)0}, {(void*)0, &g_62[0][3][0], (void*)0}}};
                union U1 *l_315 = &l_314;
                int l_318 = 0x5966B01AL;
                int l_321 = 0x1E203101L;
                short *l_323[8][3] = {{&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}, {&g_152, &g_205, &g_152}};
                struct S0 l_362 = {1L,0x42L};
                struct S0 *l_368 = &g_259;
                struct S0 **l_367 = &l_368;
                unsigned short *l_389 = &g_291[3];
                int i, j, k;
                (*l_303) = l_324;
                if ((l_322 != (4294967292UL != (((*l_50) ^ (((l_325 != l_326[2]) || g_49[1][5]) != (+l_321))) ^ ((-6L) == ((l_322 && (**l_303)) != 65535UL))))))
                {
                    unsigned char l_327 = 255UL;
                    char l_344 = 0xD4L;
                    int l_357 = (-1L);
                    struct S0 *l_365 = &g_191;
                    struct S0 **l_364 = &l_365;
                    (**l_303) = (g_291[3] || l_327);
                    for (g_214 = (-26); (g_214 < 56); g_214++)
                    {
                        unsigned short *l_340[10][10][2] = {{{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}, {{&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}, {&g_291[3], &g_291[9]}}};
                        int *l_345 = &g_191.f0;
                        char *l_348[2][7] = {{&g_10[1][8], &g_10[0][0], &l_344, &g_10[0][0], &g_10[1][8], &g_10[0][4], &g_10[1][8]}, {&g_10[1][8], &g_10[0][0], &l_344, &g_10[0][0], &g_10[1][8], &g_10[0][4], &g_10[1][8]}};
                        int *l_358 = &g_55[0][5];
                        unsigned *l_359 = &l_356;
                        int i, j, k;
                        (*l_358) = ((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((1L & ((safe_mod_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((*l_345) = (((*l_324) = (*l_50)) | ((l_341[0] = (!l_321)) && (safe_lshift_func_uint8_t_u_s(l_327, l_344))))) || 9UL), ((safe_mod_func_int8_t_s_s((g_349 = 0x43L), (safe_lshift_func_uint8_t_u_u((g_52[9] >= ((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(l_322, l_344)) == l_312), l_327)) && l_344)), l_322)))) > l_318))), l_356)) & (*p_37)) != (*p_37)) != 1UL), l_322)) < 1L)) <= 1L), l_322)) || 0x09F09360L), l_357)) != l_321);
                        (*l_345) = (((*l_359) = g_49[8][0]) >= (safe_add_func_uint8_t_u_u(l_322, l_327)));
                    }
                    if (l_322)
                    {
                        struct S0 *l_363 = &g_191;
                        (*l_363) = l_362;
                        (*l_324) = l_357;
                    }
                    else
                    {
                        struct S0 ***l_366[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_366[i] = (void*)0;
                        (*l_50) = (g_67 == ((-8L) < (0x99L < 0xA3L)));
                        (*l_303) = &g_49[7][5];
                        (*l_303) = func_56(&g_10[1][2], &g_63);
                        l_364 = (l_367 = l_364);
                    }
                    (*l_324) = (safe_mul_func_int16_t_s_s(0x9E2DL, l_362.f0));
                }
                else
                {
                    volatile int *l_375 = &g_51[3][3];
                    for (l_318 = 2; (l_318 >= (-30)); --l_318)
                    {
                    }
                    if ((*l_50))
                    {
                        unsigned *l_374 = &l_312;
                        (**l_303) = (&g_77 == l_374);
                    }
                    else
                    {
                        (*l_303) = l_324;
                        l_375 = &g_64[1][0];
                    }
                    for (l_362.f0 = 0; (l_362.f0 != (-23)); l_362.f0--)
                    {
                        union U1 **l_379[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_379[i] = &l_378;
                        l_378 = l_378;
                        (*l_303) = (*l_303);
                    }
                    for (g_259.f0 = 0; (g_259.f0 > 29); g_259.f0 = safe_add_func_int16_t_s_s(g_259.f0, 4))
                    {
                        union U3 **l_383 = (void*)0;
                        union U3 **l_384 = &g_382;
                        (*l_384) = g_382;
                    }
                }
                if ((!(+(safe_mul_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_318, ((g_100.f0 == ((*l_389) = g_10[1][3])) & (l_390 == g_173)))) >= g_349) || ((safe_rshift_func_uint8_t_u_s((l_393 == (void*)0), 6)) < l_356)), l_362.f0)))))
                {
                    l_394 = l_322;
                }
                else
                {
                    union U1 **l_395 = &l_378;
                    union U1 ***l_396 = &l_395;
                    struct S0 *l_401[1];
                    unsigned short l_402 = 1UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_401[i] = &g_259;
                    if ((((*l_396) = l_395) == &l_315))
                    {
                        int *l_397 = &g_191.f0;
                        unsigned *l_408 = (void*)0;
                        char *l_413 = &g_349;
                        (*l_303) = l_397;
                        (*l_397) = (0x7AL > ((l_362.f0 && (l_402 = (safe_add_func_uint16_t_u_u((+(**l_303)), ((l_401[0] = l_400) != (void*)0))))) && (-1L)));
                        if ((**l_303))
                            continue;
                        (*l_50) = (safe_mod_func_int8_t_s_s((l_318 = ((safe_add_func_uint32_t_u_u(l_407, ((g_173 = (**l_303)) < (((l_322 && (safe_rshift_func_int8_t_s_u(((((*l_389) = (safe_mul_func_uint8_t_u_u(249UL, 0x4EL))) >= (l_318 != l_362.f0)) > ((*l_413) = (*p_37))), 0))) < l_322) ^ l_394)))) & g_100.f1)), 0xB9L));
                    }
                    else
                    {
                        int *l_414 = (void*)0;
                        char *l_415 = &g_349;
                        volatile int **l_417 = &g_119[0][1][2];
                        (*l_417) = g_416;
                        (*l_324) = (-6L);
                    }
                    (*l_368) = (*l_368);
                    (*l_324) = 0x91659351L;
                    (*l_303) = (*l_303);
                }
            }
            else
            {
                union U2 ***l_421[8];
                union U2 ****l_420 = &l_421[7];
                union U2 ****l_423 = (void*)0;
                int l_425 = 1L;
                unsigned *l_429 = (void*)0;
                int i;
                for (i = 0; i < 8; i++)
                    l_421[i] = &g_186[9][8];
                (*g_416) = (safe_mul_func_int16_t_s_s(0xAC9FL, (((*l_420) = &g_186[8][4]) == (g_424[5] = l_422[0][4][2]))));
                if ((l_425 | ((*l_324) = (safe_lshift_func_int8_t_s_u((l_428 != (*l_324)), 5)))))
                {
                    int l_430 = 0x889C9659L;
                    if (l_430)
                        break;
                    if (((*l_324) = (safe_mul_func_uint16_t_u_u(0x93FFL, g_10[2][9]))))
                    {
                        (*l_303) = &g_55[0][5];
                    }
                    else
                    {
                        volatile int **l_433 = &g_416;
                        if (l_356)
                            break;
                        (*l_324) = ((g_173 = 4294967287UL) > l_425);
                        (*l_303) = &l_425;
                        (*l_433) = &g_51[3][2];
                    }
                    (**l_303) = (*l_324);
                }
                else
                {
                    l_434[3][3][6] = &g_64[0][0];
                }
                for (g_106 = 0; (g_106 <= 2); g_106 += 1)
                {
                    return p_37;
                }
            }
            (*g_416) = ((l_437 = &g_214) != (l_439 = l_438));
            (*g_416) = ((g_173 = (safe_mul_func_uint16_t_u_u(((*l_439) = g_106), ((((safe_mod_func_uint8_t_u_u(g_444, (*p_37))) && 0xBB52L) >= (((*l_324) < (safe_add_func_uint16_t_u_u(((*l_324) <= (((safe_unary_minus_func_uint32_t_u(0UL)) > (((((*l_448) = &g_424[0]) != (g_451 = l_450)) < (*l_324)) > 0x3EL)) > 4294967293UL)), 0L))) > 65535UL)) | 1UL)))) != 0xF8942DD2L);
            (*l_303) = &g_49[7][5];
        }
        l_454 = ((*l_303) = &g_55[0][5]);
        (*g_416) = ((l_455 = l_455) != &l_456);
    }
    return p_37;
}







static char * func_38(char * p_39, char p_40, int p_41)
{
    unsigned char **l_44 = (void*)0;
    unsigned char ***l_43 = &l_44;
    unsigned l_45[9][3][7] = {{{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}, {{0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}, {0x142ACE07L, 0x5EBB4EE0L, 0x75F98A97L, 0xA6652F52L, 0x8A615B38L, 0x9E96C9F9L, 0x6AEAB669L}}};
    char *l_46[1];
    int *l_47 = (void*)0;
    int *l_48 = &g_49[7][5];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_46[i] = &g_10[0][2];
    (*l_43) = (void*)0;
    for (p_41 = 0; (p_41 <= 2); p_41 += 1)
    {
        return l_46[0];
    }
    (*l_48) = g_10[1][5];
    return &g_10[1][5];
}







static int * func_56(char * p_57, unsigned char *** p_58)
{
    unsigned short l_75 = 1UL;
    int *l_85 = &g_65[8][0];
    union U2 *l_266 = &g_188[6][0][0];
    int *l_302 = &g_68;
    for (g_65[8][0] = 0; (g_65[8][0] >= 0); g_65[8][0] -= 1)
    {
        int *l_66 = (void*)0;
        return l_66;
    }
    for (g_68 = 9; (g_68 >= 0); g_68 -= 1)
    {
        unsigned *l_76 = &g_77;
        union U1 l_84[6] = {{6L}, {3L}, {6L}, {3L}, {6L}, {3L}};
        int l_292 = 0xF678EF2CL;
        unsigned char *l_294 = &g_191.f1;
        short *l_299[7][8][4] = {{{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}, {{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}, {{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}, {{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}, {{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}, {{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}, {{&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}, {&g_205, &g_263.f0, &g_152, &g_152}}};
        int i, j, k;
        l_266 = func_69(p_58, ((*l_76) = (g_52[g_68] & l_75)), func_78(l_75, l_84[4], l_85, p_57, (g_10[1][5] != (safe_sub_func_uint8_t_u_u(g_52[g_68], (*p_57))))), g_52[8], &g_62[0][4][0]);
        for (g_130 = 0; (g_130 <= 3); g_130 += 1)
        {
            unsigned char *l_267 = &g_106;
            int l_282 = (-1L);
            unsigned char ****l_284 = &g_62[0][3][0];
            unsigned char *****l_283 = &l_284;
            char l_287 = 0x62L;
        }
        for (g_173 = 0; (g_173 <= 9); g_173 += 1)
        {
            char l_296 = (-2L);
            if (l_296)
                break;
        }
        g_52[g_68] = (0x57B24ACDL <= (((((*l_85) & ((safe_lshift_func_uint16_t_u_s(g_51[3][2], 11)) >= (*l_85))) ^ (g_152 = l_84[4].f0)) >= (l_84[4].f0 || (((void*)0 != &l_75) == (safe_mod_func_int8_t_s_s(g_106, 0xA5L))))) != g_49[7][5]));
    }
    return l_302;
}







static union U2 * func_69(unsigned char *** p_70, unsigned p_71, int * p_72, unsigned p_73, unsigned char **** p_74)
{
    char l_142 = 0L;
    union U2 *l_181 = (void*)0;
    union U2 **l_180 = &l_181;
    struct S0 *l_190 = &g_191;
    struct S0 **l_189 = &l_190;
    unsigned l_215[4][8];
    int l_218 = 0xAA7F5FDCL;
    int l_234 = 0xDC50922CL;
    union U2 *l_265 = (void*)0;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
            l_215[i][j] = 0x15336B33L;
    }
    for (g_104 = 0; (g_104 <= 0); g_104 += 1)
    {
        unsigned char l_137 = 0xA4L;
        struct S0 **l_254 = &l_190;
        for (g_106 = 0; (g_106 <= 0); g_106 += 1)
        {
            int *l_124 = (void*)0;
            int *l_125 = (void*)0;
            int *l_126 = &g_65[2][3];
            unsigned char *l_129 = &g_130;
            int *l_131 = (void*)0;
            int *l_132 = &g_52[(g_106 + 6)];
            short *l_151 = &g_152;
            union U2 **l_184 = (void*)0;
            int i, j;
            (*l_132) = (((safe_mod_func_uint32_t_u_u((g_52[(g_106 + 6)] >= (((((*l_126) = (safe_mod_func_int32_t_s_s((-5L), (g_55[g_106][(g_106 + 1)] = g_55[g_106][(g_106 + 6)])))) == 8L) | p_71) || (safe_mul_func_int8_t_s_s((g_104 > (*p_72)), ((*l_129) = p_73))))), 0xD34ED2CBL)) <= 0x9A9D96BDL) || 0xCF38L);
            if ((safe_mod_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((l_137 & (0xB4B3L != (safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_142, (&g_10[2][5] == &g_10[1][0]))) & l_137), (safe_rshift_func_int16_t_s_s(((*l_151) = (safe_mul_func_uint8_t_u_u(l_142, (safe_mod_func_int16_t_s_s(0x8843L, (safe_mod_func_int16_t_s_s((*l_132), p_71))))))), 9)))))), (-1L))) == l_142), (*p_72))))
            {
                unsigned short l_157 = 0UL;
                char *l_164 = &l_142;
                int l_171 = 9L;
                (*p_72) = ((*l_126) = (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_157 > ((-1L) | p_73)) | p_73), (safe_mul_func_int8_t_s_s(g_52[5], (safe_mod_func_int16_t_s_s(l_137, (safe_mul_func_uint16_t_u_u((((*l_164) = l_137) >= (safe_lshift_func_uint8_t_u_s(((~(l_157 | ((((void*)0 != &g_77) >= 0L) >= l_157))) > 253UL), p_73))), g_55[0][5])))))))), g_65[8][0])));
                for (p_73 = 0; (p_73 <= 1); p_73 += 1)
                {
                    unsigned *l_170 = &g_77;
                    unsigned *l_172 = &g_173;
                    int i, j, k;
                    (*p_72) = (p_73 & ((!((*l_172) = (l_171 = ((*l_170) = (p_73 == (safe_unary_minus_func_int8_t_s((safe_mod_func_uint8_t_u_u(l_142, 0x50L))))))))) > (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((&g_10[1][5] != (void*)0) >= (safe_mul_func_uint8_t_u_u(l_142, 0x4EL))), ((-8L) < g_152))), l_137))));
                    for (p_71 = 1; (p_71 <= 9); p_71 += 1)
                    {
                        union U2 ***l_182 = (void*)0;
                        union U2 ***l_183 = &l_180;
                        union U2 ***l_185[3];
                        struct S0 ***l_192[3][7] = {{(void*)0, &l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {(void*)0, &l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}, {(void*)0, &l_189, (void*)0, &l_189, &l_189, (void*)0, &l_189}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_185[i] = &l_184;
                        g_52[(g_104 + 8)] = (l_171 < (((*l_183) = l_180) == (g_186[8][4] = l_184)));
                        l_189 = l_189;
                    }
                }
            }
            else
            {
                for (g_152 = 1; (g_152 >= 0); g_152 -= 1)
                {
                    int **l_193[5] = {&l_125, &l_131, &l_125, &l_131, &l_125};
                    int i;
                    p_72 = p_72;
                    (*l_190) = (**l_189);
                }
            }
            if ((*p_72))
                continue;
        }
        for (g_77 = 0; (g_77 <= 9); g_77 += 1)
        {
            union U2 *l_194 = &g_188[6][0][1];
            struct S0 l_225[7] = {{0xFF6A6F7FL,0xE4L}, {0xFF6A6F7FL,0xE4L}, {0xFF6A6F7FL,0xE4L}, {0xFF6A6F7FL,0xE4L}, {0xFF6A6F7FL,0xE4L}, {0xFF6A6F7FL,0xE4L}, {0xFF6A6F7FL,0xE4L}};
            int i;
            for (g_100.f1 = 0; g_100.f1 < 1; g_100.f1 += 1)
            {
                for (g_67 = 0; g_67 < 5; g_67 += 1)
                {
                    for (p_71 = 0; p_71 < 1; p_71 += 1)
                    {
                        g_62[g_100.f1][g_67][p_71] = &g_63;
                    }
                }
            }
            if (g_52[g_104])
                continue;
            (*l_180) = l_194;
        }
    }
    return l_265;
}







static int * func_78(char p_79, union U1 p_80, int * p_81, unsigned char * p_82, char p_83)
{
    int *l_92 = &g_49[3][4];
    unsigned l_99 = 0xC8C39940L;
    unsigned short l_107[10] = {0x3FF4L, 0x39C8L, 1UL, 1UL, 0x39C8L, 0x3FF4L, 0x39C8L, 1UL, 1UL, 0x39C8L};
    int i;
    for (p_80.f0 = (-28); (p_80.f0 == (-24)); p_80.f0 = safe_add_func_uint8_t_u_u(p_80.f0, 1))
    {
        unsigned l_118 = 0x2BF1337BL;
        for (p_79 = (-20); (p_79 != 14); ++p_79)
        {
            int **l_93 = &l_92;
            (*l_93) = l_92;
            (*p_81) = (safe_rshift_func_int8_t_s_s((&p_81 != (void*)0), 5));
            if (((*p_82) > (p_79 >= (((g_55[0][6] & (l_99 = ((g_49[5][5] = ((0xE0L > ((p_79 > ((*p_81) != (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((!((-1L) > 0UL)) == (*p_82)))), g_64[1][1])))) & g_10[1][5])) < g_68)) && (*l_92)))) & g_55[0][4]) && p_79))))
            {
                volatile struct S0 *l_101 = &g_100;
                (*l_101) = g_100;
            }
            else
            {
                unsigned short l_102 = 0x006BL;
                unsigned char *l_103 = &g_104;
                unsigned char *l_105[4];
                volatile union U2 **l_117 = &g_115[0][0];
                int i;
                for (i = 0; i < 4; i++)
                    l_105[i] = &g_106;
                if ((l_102 < ((*l_92) = ((*l_103) = (*p_82)))))
                {
                    int *l_112 = (void*)0;
                    int *l_113 = &g_55[0][5];
                    if (l_107[0])
                        break;
                    (*p_81) = (p_83 >= (g_10[1][5] & (+(safe_rshift_func_uint8_t_u_s(0x3FL, (safe_mul_func_uint16_t_u_u(0x26D7L, p_83)))))));
                    (*l_113) = ((*p_81) = ((*l_92) = g_49[7][5]));
                }
                else
                {
                    unsigned char l_114 = 247UL;
                    (**l_93) = ((p_83 > p_80.f0) | l_114);
                }
                (*l_117) = g_115[0][0];
                return l_92;
            }
        }
        (*p_81) = (((void*)0 == &p_81) || l_118);
    }
    g_119[1][0][5] = &g_51[3][2];
    return &g_55[0][3];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_49[i][j], "g_49[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_55[i][j], "g_55[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_64[i][j], "g_64[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_191.f0, "g_191.f0", print_hash_value);
    transparent_crc(g_191.f1, "g_191.f1", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_291[i], "g_291[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_500.f0, "g_500.f0", print_hash_value);
    transparent_crc(g_500.f1, "g_500.f1", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
