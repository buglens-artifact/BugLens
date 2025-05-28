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
   short f0;
   char f1;
   unsigned short f2;
   unsigned f3 : 9;
   unsigned char f4;
   int f5;
   int f6;
};

struct S1 {
   signed f0 : 15;
   unsigned f1 : 26;
   signed f2 : 18;
   unsigned f3 : 22;
   signed f4 : 28;
};


static struct S1 g_17 = {180,18,-178,1181,-2691};
static struct S1 *g_16[8] = {&g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17, &g_17};
static int g_61 = 0x7519BA60L;
static int g_63 = 0x16590181L;
static int g_66[5][1] = {{8L}, {8L}, {8L}, {8L}, {8L}};
static struct S0 g_85 = {0L,0xCEL,1UL,12,0UL,0L,0x00082338L};
static int g_88 = (-10L);
static int g_104[9] = {0x0A77380AL, 0x0A77380AL, 0x0A77380AL, 0x0A77380AL, 0x0A77380AL, 0x0A77380AL, 0x0A77380AL, 0x0A77380AL, 0x0A77380AL};
static int *g_111[9][10] = {{(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}, {(void*)0, &g_66[2][0], &g_63, &g_104[4], &g_66[2][0], &g_88, &g_61, &g_61, &g_88, &g_66[2][0]}};
static int **g_110[10][3][8] = {{{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}, {{(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0, &g_111[1][7], (void*)0, (void*)0}}};
static int g_120 = (-1L);
static struct S1 g_143 = {23,5770,-382,1365,-7409};
static struct S1 *g_142 = &g_143;
static struct S0 *g_195 = &g_85;
static struct S0 **g_194[1][1] = {{&g_195}};
static unsigned g_271 = 1UL;
static struct S1 **g_532 = &g_142;
static struct S1 ***g_531[7][9][2] = {{{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}, {{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}, {{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}, {{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}, {{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}, {{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}, {{(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}, {(void*)0, &g_532}}};
static unsigned g_643 = 0xC6E0ABF4L;
static struct S0 g_646 = {6L,1L,0x9F0AL,11,250UL,-8L,0xE2616B56L};
static unsigned short g_658 = 0UL;
static unsigned g_718 = 0x56322214L;
static int g_1030 = 0xAF12901CL;
static unsigned g_1031 = 0x51035151L;



static short func_1(void);
static struct S1 * func_2(int p_3, char p_4, int p_5, struct S1 * p_6, struct S0 p_7);
static int func_8(unsigned short p_9, struct S1 * p_10, struct S1 * p_11);
static struct S1 func_20(struct S1 * p_21, struct S0 p_22, unsigned char p_23);
static struct S1 * func_24(struct S1 * p_25);
static struct S0 func_34(struct S1 * p_35);
static struct S1 * func_36(unsigned short p_37, struct S1 * p_38);
static unsigned short func_41(struct S1 * p_42, short p_43);
static short func_49(struct S1 * p_50);
static unsigned char func_55(char p_56);
static short func_1(void)
{
    struct S1 *l_18 = &g_17;
    struct S1 *l_19 = &g_17;
    int l_642 = 1L;
    struct S1 ***l_706 = &g_532;
    int *l_765 = &l_642;
    struct S0 *l_767 = &g_85;
    int l_785 = (-3L);
    int *l_794 = (void*)0;
    struct S1 *l_861 = &g_17;
    struct S0 ***l_878 = &g_194[0][0];
    unsigned char l_885 = 255UL;
    struct S1 l_896 = {-150,5484,473,1757,399};
    int l_897 = 0x05F21DDCL;
    struct S1 **l_911 = &g_16[5];
    int l_981 = 0x7427E62AL;
    unsigned short l_1055 = 1UL;
    int *l_1067 = &g_66[2][0];
    (*g_532) = func_2(func_8((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((g_16[5] != l_18), 6)), (-1L))), l_19, &g_17), (l_642 ^ g_643), (safe_sub_func_int16_t_s_s(g_643, 1L)), (*g_532), g_646);



    (*l_706) = &l_18;

    ;
    if ((+((l_642 <= ((void*)0 == &g_532)) || g_66[3][0])))
    {
        short l_711 = (-7L);
        int l_721 = 0x712CEB8FL;
        char l_740 = 0x87L;
        unsigned l_741 = 0x6A7AD035L;
        struct S1 l_834 = {-15,7629,-167,367,6967};
        struct S0 *l_835 = &g_646;
        short l_904[10] = {1L, 0L, (-1L), (-1L), 0L, 1L, 0L, (-1L), (-1L), 0L};
        int i;
        for (g_61 = 0; (g_61 > (-23)); g_61 = safe_sub_func_int32_t_s_s(g_61, 8))
        {
            int **l_716 = (void*)0;
            int l_743 = 0x8B653AA2L;
            struct S0 l_750 = {-1L,0L,0UL,13,0x4CL,1L,-1L};
            unsigned short l_755 = 0x6848L;
            for (g_85.f4 = 0; (g_85.f4 <= 0); g_85.f4 += 1)
            {
                int *l_742[8][9] = {{(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}, {(void*)0, &g_66[2][0], &g_66[3][0], &g_66[0][0], &l_721, &g_88, &l_721, &g_66[0][0], &g_66[3][0]}};
                int i, j;
                if ((g_104[g_85.f4] , (safe_div_func_int16_t_s_s(g_17.f4, g_104[g_85.f4]))))
                {
                    int i;
                    g_104[(g_85.f4 + 1)] &= (g_85.f2 < 7L);
                }
                else
                {
                    int *l_722 = &g_63;
                    if (l_711)
                    {
                        int ***l_717 = &g_110[4][2][2];
                        (*l_717) = ((safe_lshift_func_uint16_t_u_u(l_642, (safe_sub_func_int32_t_s_s(l_642, g_646.f1)))) , l_716);
                        if (g_718)
                            break;
                    }
                    else
                    {
                        int *l_719 = (void*)0;
                        int *l_720[7][6][6] = {{{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}, {{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}, {{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}, {{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}, {{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}, {{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}, {{&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}, {&g_120, &g_66[2][0], &g_63, &g_88, &g_63, &g_66[2][0]}}};
                        int i, j, k;
                        l_721 |= (g_17.f1 != 0UL);
                    }
                    (*l_722) = g_104[g_85.f4];
                    (*l_722) &= (g_85.f1 >= g_143.f1);
                }
                if (l_642)
                    break;
                l_743 ^= (safe_add_func_uint32_t_u_u(0x35297A13L, (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(l_642, ((safe_unary_minus_func_int8_t_s(((((safe_mul_func_int16_t_s_s(l_642, l_711)) == g_646.f4) ^ (safe_mod_func_uint32_t_u_u(g_17.f2, (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((g_66[2][0] , (l_642 & (l_642 , l_740))), g_85.f6)) & l_741), l_740))))) , g_17.f3))) >= (-1L)))), 4)), g_104[4]))));
            }
            for (g_88 = 1; (g_88 <= 7); g_88 += 1)
            {
                char l_751[5][5] = {{0x70L, (-1L), 0x70L, (-1L), 0x70L}, {0x70L, (-1L), 0x70L, (-1L), 0x70L}, {0x70L, (-1L), 0x70L, (-1L), 0x70L}, {0x70L, (-1L), 0x70L, (-1L), 0x70L}, {0x70L, (-1L), 0x70L, (-1L), 0x70L}};
                int *l_752 = &g_104[1];
                int *l_764 = &g_104[5];
                int i, j;
            }
        }
        for (g_85.f4 = 0; (g_85.f4 <= 0); g_85.f4 += 1)
        {
            int **l_766 = &g_111[1][7];
            struct S1 *l_776 = &g_143;
            short l_786 = 0L;
            (*l_766) = l_765;
            for (g_271 = 3; (g_271 <= 8); g_271 += 1)
            {
                unsigned l_768 = 0x9A1183A7L;
                struct S1 *l_771 = &g_143;
                struct S0 *l_779 = (void*)0;
                short l_787 = 0xF61CL;
                unsigned char l_807 = 0x85L;
                int i, j;
                if ((&g_66[(g_85.f4 + 1)][g_85.f4] == ((g_85.f5 != (((void*)0 != l_767) >= (((*l_765) < l_768) || (g_85.f1 , (((*l_765) < (safe_rshift_func_uint16_t_u_u(((void*)0 == l_771), g_646.f3))) > l_741))))) , &l_642)))
                {
                    int l_784[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_784[i] = 0x34077601L;
                    (*l_765) |= (safe_mod_func_int32_t_s_s((((((l_721 != (g_85.f2 == g_66[(g_85.f4 + 1)][g_85.f4])) || (safe_div_func_int8_t_s_s(func_41(l_776, func_41(l_771, (safe_mod_func_int32_t_s_s(((void*)0 != l_779), ((g_646.f4 || (safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_41(l_776, g_271), g_646.f6)), 0L))) & l_784[1]))))), g_143.f1))) < l_785) , l_786) ^ g_17.f0), l_787));
                    if ((safe_div_func_int8_t_s_s((g_658 , 0x2BL), (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(255UL, 6)), g_66[2][0])))))
                    {
                        int *l_795 = &g_66[g_85.f4][g_85.f4];
                        (*l_766) = l_794;
                        (*l_766) = l_795;
                        (*l_766) = &l_784[1];


                    }
                    else
                    {
                        int *l_796 = &l_642;
                        (*l_766) = l_796;
                        if ((*l_796))
                            break;
                    }


                }
                else
                {
                    if ((*l_765))
                        break;
                    (*l_766) = &l_642;
                    return g_85.f5;



                }
                (*l_765) = (safe_rshift_func_int16_t_s_s(l_786, (g_85.f6 , (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((0xA230L >= (safe_div_func_uint16_t_u_u((g_85.f5 ^ (safe_mod_func_uint32_t_u_u(g_646.f3, (l_807 , g_646.f5)))), (safe_sub_func_uint16_t_u_u(l_711, 65535UL))))) > g_17.f4), g_646.f2)), g_85.f3)))));
                (*l_766) = &g_66[(g_85.f4 + 1)][g_85.f4];
                for (g_658 = 0; (g_658 <= 0); g_658 += 1)
                {
                    struct S1 *l_816 = (void*)0;
                    unsigned l_822[2][8][8] = {{{8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}}, {{8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}, {8UL, 0x0A356107L, 0x8882BC83L, 4294967295UL, 0x0860D743L, 0x08F29B88L, 0x0A356107L, 0x0A4B7B17L}}};
                    int *l_826[10][4][6] = {{{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}, {{&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}, {&g_104[5], (void*)0, (void*)0, &g_61, &g_61, &g_104[4]}}};
                    char l_827 = 0L;
                    int i, j, k;
                    for (g_646.f5 = 0; (g_646.f5 <= 0); g_646.f5 += 1)
                    {
                        short l_817 = 0xC250L;
                        if (l_721)
                            break;
                        (*l_765) &= (safe_lshift_func_uint8_t_u_s(((((((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_17.f2, g_85.f4)), l_768)) && g_85.f4) ^ (-1L)) || g_104[5]) , l_711) < 1L), g_271));
                        if ((*l_765))
                            break;
                        return l_740;



                    }
                    for (g_120 = 0; (g_120 <= 0); g_120 += 1)
                    {
                        int *l_825[7] = {&g_66[3][0], &g_66[3][0], &g_66[(g_85.f4 + 1)][g_85.f4], &g_66[3][0], &g_66[3][0], &g_66[(g_85.f4 + 1)][g_85.f4], &g_66[3][0]};
                        int i;
                        (*l_765) ^= ((((1L != (safe_mul_func_int16_t_s_s((-1L), (l_825[4] == (l_740 , l_826[3][1][4]))))) ^ g_143.f2) != l_827) || func_41((**l_706), (safe_div_func_uint32_t_u_u(0xBEF90154L, 0xD0FE3C03L))));
                        if (l_807)
                            continue;
                    }
                    if (l_721)
                        continue;
                }
            }
            for (l_711 = 0; (l_711 >= 0); l_711 -= 1)
            {
                int i, j;
                (*l_776) = ((g_66[(l_711 + 4)][g_85.f4] , (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(g_66[(l_711 + 3)][g_85.f4], 0xED6AE502L)), (-7L)))) , l_834);
                if (g_66[(l_711 + 4)][g_85.f4])
                    continue;
            }
        }


        l_767 = l_835;

        ;
        for (g_643 = 0; (g_643 == 22); ++g_643)
        {
            struct S0 l_838 = {1L,0x9EL,0UL,13,0x5BL,-5L,0x137F8764L};
            int l_851 = (-5L);
            unsigned short l_860 = 0xEFEBL;
            struct S1 *l_894 = (void*)0;
            struct S1 **l_906[2];
            int ***l_912 = &g_110[1][1][2];
            int l_927 = 1L;
            int i;
            for (i = 0; i < 2; i++)
                l_906[i] = &g_16[1];
        }
    }
    else
    {
        unsigned char l_936 = 0xC3L;
        int l_942 = 0x2F7F92BCL;
        short l_943 = 1L;
        unsigned l_944 = 0x80CE32C9L;
        struct S1 *l_990 = &g_143;
        struct S0 l_1000[6] = {{0x7645L,-6L,0xD630L,10,0xE3L,-6L,0xC087B510L}, {0x7645L,-6L,0xD630L,10,0xE3L,-6L,0xC087B510L}, {0x7645L,-6L,0xD630L,10,0xE3L,-6L,0xC087B510L}, {0x7645L,-6L,0xD630L,10,0xE3L,-6L,0xC087B510L}, {0x7645L,-6L,0xD630L,10,0xE3L,-6L,0xC087B510L}, {0x7645L,-6L,0xD630L,10,0xE3L,-6L,0xC087B510L}};
        int *l_1049[2][1];
        struct S1 *l_1058 = &l_896;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1049[i][j] = &g_66[4][0];
        }
        if (((safe_rshift_func_uint16_t_u_s((~((safe_mod_func_uint32_t_u_u((0x77503541L | (safe_mod_func_uint16_t_u_u(l_936, 2L))), (((*l_765) & (safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_int16_t_s(0x3364L)) , (safe_div_func_uint32_t_u_u(4294967295UL, (g_271 ^ l_936)))) >= l_942), g_104[5]))) && l_943))) > l_944)), g_718)) > l_944))
        {
            int l_949 = 0xD4C7C346L;
            int *l_973 = &g_66[0][0];
            struct S1 l_994[1][8][7] = {{{{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}, {{-82,7171,495,224,-16069}, {12,7291,-94,126,-10384}, {35,1104,294,1452,-4803}, {12,7291,-94,126,-10384}, {-82,7171,495,224,-16069}, {90,3270,-468,1091,-15255}, {35,1104,294,1452,-4803}}}};
            struct S0 l_997 = {0xCBE2L,2L,65532UL,4,0x92L,-1L,0x2DF9AC0FL};
            unsigned short l_1009 = 0xAE79L;
            int i, j, k;
            for (g_85.f4 = 0; (g_85.f4 <= 7); g_85.f4 += 1)
            {
                struct S0 *l_951 = (void*)0;
                int l_963 = 0xAC8A5602L;
                int **l_974[6][8] = {{&l_794, (void*)0, (void*)0, &l_973, (void*)0, (void*)0, &l_794, (void*)0}, {&l_794, (void*)0, (void*)0, &l_973, (void*)0, (void*)0, &l_794, (void*)0}, {&l_794, (void*)0, (void*)0, &l_973, (void*)0, (void*)0, &l_794, (void*)0}, {&l_794, (void*)0, (void*)0, &l_973, (void*)0, (void*)0, &l_794, (void*)0}, {&l_794, (void*)0, (void*)0, &l_973, (void*)0, (void*)0, &l_794, (void*)0}, {&l_794, (void*)0, (void*)0, &l_973, (void*)0, (void*)0, &l_794, (void*)0}};
                int i, j;
                if ((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u((~l_949), (safe_unary_minus_func_uint8_t_u(g_646.f1)))) && func_41(g_16[g_85.f4], g_85.f4)) , 0x32AFL), 0)))
                {
                    struct S0 l_953 = {-1L,0x52L,0UL,21,254UL,0xC31FD2B1L,-10L};
                    for (g_658 = 1; (g_658 <= 7); g_658 += 1)
                    {
                        struct S0 l_952 = {1L,0xB7L,0UL,17,255UL,3L,8L};
                        int i, j;
                        (**l_878) = l_951;

                        ;
                        if (l_943)
                            break;
                        l_953 = l_952;
                    }
                }
                else
                {
                    short l_962 = 0x4EBBL;
                    struct S1 *l_972 = &l_896;
                    if (((g_85.f0 , (g_17.f3 | ((safe_mul_func_uint16_t_u_u(l_949, (safe_lshift_func_uint16_t_u_s((!((safe_rshift_func_uint8_t_u_u(6UL, g_646.f2)) && ((func_41(g_16[g_85.f4], g_61) != g_658) < 0xBDFAL))), 5)))) <= 0x0179DA90L))) , l_962))
                    {
                        if (l_943)
                            break;
                        (*l_765) |= (-1L);
                        (*l_765) |= ((&g_110[0][1][3] != &g_110[4][2][2]) ^ (((*g_532) == g_16[g_85.f4]) && l_963));
                    }
                    else
                    {
                        if (l_943)
                            break;
                        (*l_765) = (l_949 ^ (l_963 , (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((0x972BE831L >= ((safe_mod_func_int32_t_s_s(((func_41((*l_911), (func_20(l_972, func_34(g_16[g_85.f4]), l_962) , g_646.f3)) == g_85.f0) & l_949), 0x1E06B058L)) , (*l_765))), l_949)), g_271)) == 0xF3EBL), 3))));
                    }
                }
                l_963 = 9L;
                l_973 = l_973;
                for (g_646.f6 = 5; (g_646.f6 >= 0); g_646.f6 -= 1)
                {
                    int i, j;
                    g_111[(g_646.f6 + 2)][(g_85.f4 + 2)] = &l_642;
                    for (g_120 = 0; (g_120 <= 7); g_120 += 1)
                    {
                        return g_85.f0;



                    }
                    if (l_936)
                        break;
                }
            }


            ;
            for (g_85.f4 = 29; (g_85.f4 <= 46); g_85.f4 = safe_add_func_uint32_t_u_u(g_85.f4, 3))
            {
                struct S1 *l_982 = &g_17;
                struct S0 l_983 = {0L,0x62L,0x74CFL,21,254UL,1L,0L};
                int *l_1010 = &l_897;
                if (func_41(func_2((4294967295UL < func_41((*g_532), (g_66[1][0] , (l_942 & (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(g_646.f3, l_936)), (*l_765))))))), g_143.f3, l_981, l_982, l_983), g_646.f1))
                {
                    unsigned short l_993 = 0xDE59L;
                    (*l_973) = (g_646.f2 < ((l_942 > (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((func_34(l_990) , (((safe_mul_func_int8_t_s_s((g_85.f3 && g_61), ((*l_973) , ((g_143.f3 > (l_983.f6 ^ g_85.f4)) | g_85.f2)))) >= g_143.f4) && g_143.f3)), l_993)), 0x5C56L)), 0x32AFFD3EL))) || g_271));
                    for (l_983.f6 = 0; (l_983.f6 >= 0); l_983.f6 -= 1)
                    {
                        int **l_995 = (void*)0;
                        int **l_996 = &l_765;
                        int i, j;
                        (*l_973) = g_66[(l_983.f6 + 4)][l_983.f6];
                        (*l_18) = l_994[0][5][5];
                        (*l_996) = &g_66[(l_983.f6 + 4)][l_983.f6];

                        ;
                    }
                }
                else
                {
                    struct S0 *l_998 = &g_646;
                    int **l_999[6][10] = {{(void*)0, &g_111[1][7], (void*)0, (void*)0, &l_794, &g_111[1][7], (void*)0, &l_765, &l_973, &l_973}, {(void*)0, &g_111[1][7], (void*)0, (void*)0, &l_794, &g_111[1][7], (void*)0, &l_765, &l_973, &l_973}, {(void*)0, &g_111[1][7], (void*)0, (void*)0, &l_794, &g_111[1][7], (void*)0, &l_765, &l_973, &l_973}, {(void*)0, &g_111[1][7], (void*)0, (void*)0, &l_794, &g_111[1][7], (void*)0, &l_765, &l_973, &l_973}, {(void*)0, &g_111[1][7], (void*)0, (void*)0, &l_794, &g_111[1][7], (void*)0, &l_765, &l_973, &l_973}, {(void*)0, &g_111[1][7], (void*)0, (void*)0, &l_794, &g_111[1][7], (void*)0, &l_765, &l_973, &l_973}};
                    struct S0 *l_1011 = &l_983;
                    int i, j;
                    (*l_998) = l_997;
                    for (g_61 = 1; (g_61 <= 8); g_61 += 1)
                    {
                        int i;
                        return g_104[g_61];



                    }
                    l_794 = (void*)0;
                    if ((*l_973))
                    {
                        struct S0 l_1001 = {0xD6CCL,4L,0UL,4,255UL,0xE8755E58L,0x87AD3300L};
                        struct S1 *l_1002 = (void*)0;
                        (*l_998) = l_1000[3];
                        (*g_532) = &l_994[0][5][5];

                        ;
                        l_997 = l_1001;
                        (*l_765) = ((g_104[5] < 0xC708F4A2L) , (-8L));
                    }
                    else
                    {
                        unsigned char l_1012 = 0xA0L;
                        int l_1025 = 0x63EDF641L;
                        int l_1027 = 0xB57D709FL;
                        (*l_19) = func_20((*g_532), l_983, (((((void*)0 != l_1010) , (+g_17.f1)) != ((*l_973) , g_271)) ^ ((*l_1010) && g_718)));
                        l_1011 = l_1011;
                        if (l_1012)
                            break;
                        l_1027 ^= (safe_mul_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((~(&g_110[1][1][1] != &g_110[4][2][2])), ((((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(((*l_765) == g_85.f3), ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_85.f1, 2)), 15)) != ((l_1025 | (g_646.f1 != (((safe_unary_minus_func_int8_t_s((*l_1010))) ^ 251UL) <= 1L))) | 0x56L)))), 10)) ^ g_88) , 8L) ^ 0x1DL) , g_66[4][0]) | l_1012))) , 0x170BL), 0xC050L));
                    }
                }
                g_1030 ^= (safe_sub_func_int16_t_s_s(l_944, g_646.f4));
            }

            ;
            ;
        }
        else
        {
            short l_1032 = (-1L);
            int l_1043[6] = {0xA2FCCF41L, 0xA2FCCF41L, 3L, 0xA2FCCF41L, 0xA2FCCF41L, 3L};
            struct S0 l_1057 = {8L,0x81L,0UL,2,0x55L,-1L,0x670AA7ABL};
            int l_1076[6][1][7] = {{{1L, 0x2E54065EL, 0xBA31C17DL, 0x0BBAFAE9L, (-1L), (-6L), (-1L)}}, {{1L, 0x2E54065EL, 0xBA31C17DL, 0x0BBAFAE9L, (-1L), (-6L), (-1L)}}, {{1L, 0x2E54065EL, 0xBA31C17DL, 0x0BBAFAE9L, (-1L), (-6L), (-1L)}}, {{1L, 0x2E54065EL, 0xBA31C17DL, 0x0BBAFAE9L, (-1L), (-6L), (-1L)}}, {{1L, 0x2E54065EL, 0xBA31C17DL, 0x0BBAFAE9L, (-1L), (-6L), (-1L)}}, {{1L, 0x2E54065EL, 0xBA31C17DL, 0x0BBAFAE9L, (-1L), (-6L), (-1L)}}};
            int i, j, k;
            if (g_1031)
            {
                (*l_765) |= l_1032;
            }
            else
            {
                char l_1039 = 0x29L;
                int *l_1044 = &l_642;
                struct S1 *l_1056 = &g_143;
                int ***l_1059 = &g_110[4][2][2];
                struct S0 l_1066 = {0x2248L,0L,0xDE3AL,8,0UL,0x2DA1B089L,0x39EB7AE3L};
                l_1043[0] = (g_85.f1 && (g_646.f4 && ((((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((((((*l_765) > (l_1000[3].f2 , l_1032)) >= ((safe_rshift_func_int16_t_s_u(g_143.f3, g_63)) || (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(((*l_765) >= g_85.f3))) , g_120), 9L)))) ^ 0x94L) | g_658) ^ l_1032) == 8L), l_1032)) >= g_17.f2), l_1000[3].f1)) , l_990) != (void*)0) , g_17.f1)));
                if (((void*)0 == l_1044))
                {
                    for (g_1031 = 0; (g_1031 >= 31); g_1031++)
                    {
                        short l_1050 = 5L;
                        l_1050 &= (g_104[5] | ((((safe_add_func_int16_t_s_s(((*l_765) , g_85.f1), ((void*)0 == l_1049[0][0]))) <= (-3L)) || g_17.f1) <= l_1032));
                    }
                    for (l_944 = 0; (l_944 <= 7); l_944 += 1)
                    {
                        (*l_706) = (void*)0;

                        ;
                        (*l_765) = 0x486016E5L;
                        (*l_878) = &g_195;
                    }

                    ;
                }
                else
                {
                    for (l_1032 = 0; (l_1032 <= 8); l_1032 += 1)
                    {
                        int **l_1051 = &l_1049[0][0];
                        struct S0 *l_1052 = (void*)0;
                        int i;
                        (*l_1051) = &g_104[l_1032];
                        (**l_878) = l_1052;

                        ;
                        g_104[l_1032] &= l_1043[5];
                        if ((*l_1044))
                            continue;
                    }

                    ;

                }

                ;
                ;

                for (g_1030 = 0; (g_1030 == (-16)); g_1030 = safe_sub_func_int32_t_s_s(g_1030, 7))
                {
                    struct S1 l_1068 = {-81,996,-34,470,-2882};
                    int l_1069 = (-1L);
                    for (l_936 = 0; (l_936 <= 8); l_936 += 1)
                    {
                        (*l_911) = l_1058;
                    }
                    l_1069 ^= (((0x0FE2L & (g_646.f5 == (((void*)0 != (*l_706)) , g_646.f2))) != (l_1059 == ((((safe_rshift_func_int8_t_s_u((!(safe_lshift_func_int16_t_s_u(g_143.f0, (((safe_mul_func_int8_t_s_s(g_1030, (l_1066 , 6UL))) , l_1067) != (void*)0)))), (*l_765))) , 1UL) , l_1068) , &g_110[0][1][6]))) , l_1057.f3);
                }


                (*l_1067) = (((l_1066 , (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(l_1057.f2, (-1L))), (g_85.f6 == (safe_rshift_func_int16_t_s_s(l_1076[5][0][1], g_61)))))) , (safe_mul_func_uint8_t_u_u(((((((safe_mul_func_uint16_t_u_u(((l_1032 == g_85.f4) <= (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((*l_1044) == (*l_1044)), g_646.f5)), (*l_1044)))), g_85.f4)) , &g_194[0][0]) == (void*)0) , 0x2DL) || (*l_765)) | 0xE0L), 0x6AL))) || (*l_765));
            }


            ;
            ;

        }




        ;
        ;
        ;

        return g_646.f5;




    }


    ;
    return g_88;



}







static struct S1 * func_2(int p_3, char p_4, int p_5, struct S1 * p_6, struct S0 p_7)
{
    unsigned char l_656 = 1UL;
    char l_667 = 0x49L;
    struct S1 *l_697 = (void*)0;
    int *l_701 = &g_104[0];
    for (g_646.f2 = 1; (g_646.f2 > 59); g_646.f2++)
    {
        int l_657[1][2][5];
        struct S0 l_659[3][9] = {{{0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x49B2L,1L,0x0011L,20,2UL,2L,-1L}, {0x2BE0L,0x0AL,0x91A7L,15,255UL,0x01B3833FL,0x3E789405L}, {0x374AL,0x2BL,0xDDDCL,20,0x76L,0xA54AA897L,0x297A11BAL}, {0x2BE0L,0x0AL,0x91A7L,15,255UL,0x01B3833FL,0x3E789405L}, {0x49B2L,1L,0x0011L,20,2UL,2L,-1L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}}, {{0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x49B2L,1L,0x0011L,20,2UL,2L,-1L}, {0x2BE0L,0x0AL,0x91A7L,15,255UL,0x01B3833FL,0x3E789405L}, {0x374AL,0x2BL,0xDDDCL,20,0x76L,0xA54AA897L,0x297A11BAL}, {0x2BE0L,0x0AL,0x91A7L,15,255UL,0x01B3833FL,0x3E789405L}, {0x49B2L,1L,0x0011L,20,2UL,2L,-1L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}}, {{0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x49B2L,1L,0x0011L,20,2UL,2L,-1L}, {0x2BE0L,0x0AL,0x91A7L,15,255UL,0x01B3833FL,0x3E789405L}, {0x374AL,0x2BL,0xDDDCL,20,0x76L,0xA54AA897L,0x297A11BAL}, {0x2BE0L,0x0AL,0x91A7L,15,255UL,0x01B3833FL,0x3E789405L}, {0x49B2L,1L,0x0011L,20,2UL,2L,-1L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}, {0x8BB3L,-1L,65535UL,16,0UL,1L,0xFD0C9F99L}}};
        struct S1 *l_672[1];
        int l_681 = 0L;
        char l_695 = 0L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_657[i][j][k] = 0L;
            }
        }
        for (i = 0; i < 1; i++)
            l_672[i] = &g_143;
        if ((safe_unary_minus_func_int32_t_s((safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xAAC2DDF5L, 1UL)), g_85.f1)), (((p_7.f2 , (l_657[0][1][1] , (void*)0)) != (g_658 , (void*)0)) , l_657[0][1][1]))))))
        {
            struct S1 *l_675 = &g_143;
            int *l_698 = &l_681;
            if ((l_659[0][7] , p_4))
            {
                int **l_660 = (void*)0;
                int **l_661 = &g_111[1][7];
                unsigned short l_666 = 0UL;
                (*l_661) = &p_3;


                if (l_656)
                {
                    struct S0 **l_664 = &g_195;
                    int *l_665 = &g_104[5];
                    (*l_665) ^= (safe_mul_func_uint16_t_u_u((l_664 == &g_195), 1UL));
                }
                else
                {
                    int *l_668 = (void*)0;
                    int *l_669 = &g_66[4][0];
                    if (p_7.f6)
                        break;
                    (*l_669) ^= l_667;
                }
            }
            else
            {
                char l_679 = 0x01L;
                int *l_685 = &g_66[0][0];
                for (p_7.f2 = 0; (p_7.f2 <= 2); p_7.f2 += 1)
                {
                    unsigned l_676 = 0xE0E07D7FL;
                    unsigned l_690 = 0x31B5C671L;
                    struct S0 l_696 = {0L,-2L,1UL,0,0x6EL,0xEBB116CAL,-1L};
                    if ((safe_rshift_func_int16_t_s_s(g_17.f1, p_7.f3)))
                    {
                        return l_672[0];


                    }
                    else
                    {
                        int *l_680[6] = {(void*)0, &g_66[2][0], (void*)0, &g_66[2][0], (void*)0, &g_66[2][0]};
                        struct S1 ***l_684 = &g_532;
                        int i, j;
                        l_681 &= (65530UL == ((safe_mod_func_int16_t_s_s(((func_34(p_6) , (((l_676 & ((g_17.f1 , &g_111[1][7]) == (void*)0)) == ((safe_mul_func_uint16_t_u_u(p_7.f5, 0xAE3FL)) && l_679)) , &p_6)) != &p_6), g_120)) | 255UL));
                        p_3 = ((((p_6 != (void*)0) | (l_684 != &g_532)) | l_659[0][7].f2) , l_679);
                        l_685 = &p_5;

                        ;
                        (*l_685) ^= (9UL > (g_66[2][0] == (safe_add_func_uint8_t_u_u(255UL, (safe_div_func_uint8_t_u_u(func_41((**l_684), (func_20(p_6, l_659[p_7.f2][(p_7.f2 + 3)], l_690) , l_659[0][7].f2)), g_143.f1))))));
                    }

                    ;
                    (*l_685) = (p_3 ^ 0xE0L);
                }

                ;
            }


            (*l_698) ^= 0xEE917749L;
        }
        else
        {
            return p_6;


        }


        (*l_701) = ((safe_mul_func_uint8_t_u_u((0xE98307DFL < (p_7.f0 , (l_667 | l_656))), (((l_701 != &p_5) | (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((!g_143.f1) != (p_7.f6 , 0x2C6E30C3L)) , g_61), 5)), 0xDEL))) < l_657[0][1][2]))) || 0xE6B59DC3L);
        return p_6;



    }


    return p_6;



}







static int func_8(unsigned short p_9, struct S1 * p_10, struct S1 * p_11)
{
    struct S0 l_197 = {-5L,0xC7L,0xBEF3L,4,249UL,0x852D9DEAL,0L};
    struct S1 l_208 = {-12,1783,187,762,-5009};
    int *l_214[8] = {&g_104[5], &g_88, &g_104[5], &g_88, &g_104[5], &g_88, &g_104[5], &g_88};
    short l_215 = 0x5D7DL;
    struct S0 **l_224 = &g_195;
    int *l_284 = &g_63;
    struct S1 l_297 = {84,7025,-352,277,-3887};
    struct S0 l_372 = {0x7B8FL,4L,0xE6ECL,19,0xEFL,0x6A039872L,9L};
    unsigned short l_374 = 1UL;
    int ***l_465 = &g_110[4][2][2];
    unsigned char l_487 = 0UL;
    unsigned l_558 = 1UL;
    int *l_623 = &g_61;
    int l_641 = 1L;
    int i;
    l_208 = func_20(func_24(&g_17), l_197, g_17.f1);


    if ((safe_mod_func_uint32_t_u_u(g_85.f1, (safe_mul_func_int8_t_s_s(g_17.f3, (l_197.f2 < (-1L)))))))
    {
        unsigned char l_213 = 4UL;
        char l_235 = 1L;
        struct S1 *l_237 = &g_17;
        struct S0 *l_252 = &g_85;
        unsigned short l_293[4][2] = {{4UL, 0xDE6DL}, {4UL, 0xDE6DL}, {4UL, 0xDE6DL}, {4UL, 0xDE6DL}};
        int l_294 = 0xDD21812BL;
        int ***l_358[5] = {&g_110[8][1][3], &g_110[5][0][2], &g_110[8][1][3], &g_110[5][0][2], &g_110[8][1][3]};
        char l_441 = (-10L);
        struct S1 **l_524[1][4] = {{&g_16[7], &l_237, &g_16[7], &l_237}};
        int *l_538[7];
        int *l_542 = (void*)0;
        int l_571 = 0x21E10B07L;
        int i, j;
        for (i = 0; i < 7; i++)
            l_538[i] = &g_63;
        l_214[6] = (g_17.f4 , l_214[3]);
        if (((l_215 ^ (safe_div_func_int16_t_s_s(g_17.f2, (safe_rshift_func_int8_t_s_s((((((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((func_41(&g_17, (l_224 == &g_195)) && (g_85.f2 > ((((-3L) | (p_9 == l_213)) , 0x30FC9DB4L) == (-6L)))) == g_85.f3), l_213)), l_213)) != (-1L)) >= p_9) , g_143.f0) <= 0x9948L), g_17.f3))))) != p_9))
        {
            struct S0 ***l_225 = &g_194[0][0];
            int l_230 = 1L;
            if (((((void*)0 != l_225) & g_17.f3) , (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_85.f5, p_9)), p_9))))
            {
                struct S1 l_239 = {-41,7689,277,177,-10079};
                int **l_247 = (void*)0;
                int l_248 = (-1L);
                struct S0 l_261[1][10] = {{{0x6020L,0L,1UL,2,0xFAL,8L,1L}, {0xA95CL,0L,65533UL,6,251UL,0x948781A7L,0xB561B192L}, {0x6020L,0L,1UL,2,0xFAL,8L,1L}, {0xA95CL,0L,65533UL,6,251UL,0x948781A7L,0xB561B192L}, {0x6020L,0L,1UL,2,0xFAL,8L,1L}, {0xA95CL,0L,65533UL,6,251UL,0x948781A7L,0xB561B192L}, {0x6020L,0L,1UL,2,0xFAL,8L,1L}, {0xA95CL,0L,65533UL,6,251UL,0x948781A7L,0xB561B192L}, {0x6020L,0L,1UL,2,0xFAL,8L,1L}, {0xA95CL,0L,65533UL,6,251UL,0x948781A7L,0xB561B192L}}};
                int i, j;
                if (l_230)
                {
                    struct S1 *l_236 = &g_17;
                    int l_238 = 1L;
                    int *l_242 = &g_88;
                    if ((l_230 == (!((safe_lshift_func_int8_t_s_u(l_213, (g_17.f3 <= (l_237 == &g_17)))) , l_238))))
                    {
                        l_230 = l_238;
                    }
                    else
                    {
                        int **l_240 = (void*)0;
                        int **l_241[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_241[i] = &l_214[3];
                        (*p_11) = l_239;
                        l_242 = &l_238;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned short l_249 = 0x65B2L;
                    int *l_250[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_250[i] = (void*)0;
                    (***l_225) = (**l_224);
                    l_249 |= (0x4A2F955FL > (safe_mod_func_int16_t_s_s(((p_9 , func_41(&g_17, ((void*)0 == &p_11))) && ((void*)0 == l_247)), l_248)));
                    for (l_197.f1 = 0; (l_197.f1 <= 7); l_197.f1 += 1)
                    {
                        int **l_251 = &l_214[0];
                        int i;
                        (*p_11) = (*p_11);
                        if (l_249)
                            continue;
                        (*l_251) = l_250[2];
                    }


                    (*l_224) = l_252;
                }


                l_239.f2 = ((0x4537L & (+((l_235 , (0UL <= (6UL >= ((safe_div_func_uint16_t_u_u(1UL, (safe_lshift_func_int16_t_s_s(((!g_88) >= (safe_div_func_uint16_t_u_u(((*p_10) , (safe_mod_func_uint8_t_u_u((((l_261[0][8] , 0xA5L) ^ p_9) | 0x93A66112L), g_17.f0))), l_213))), p_9)))) >= 0xC049L)))) ^ g_143.f0))) != 0x2DL);
                for (g_120 = 0; (g_120 >= (-23)); g_120 = safe_sub_func_int8_t_s_s(g_120, 8))
                {
                    struct S0 l_266 = {-1L,0x3FL,0x6ED3L,20,246UL,0L,0x1AC8A185L};
                    if (((safe_lshift_func_uint8_t_u_s(l_230, 7)) < (l_230 , (((p_9 < ((g_85.f2 || p_9) != g_85.f2)) , 0xECL) & 0x2CL))))
                    {
                        struct S0 *l_272 = &g_85;
                        int l_273 = 0x9155A29DL;
                        (**l_225) = l_272;
                        if (l_273)
                            break;
                    }
                    else
                    {
                        if (p_9)
                            break;
                    }
                    if ((p_9 & (func_20(l_237, func_34(p_11), (safe_unary_minus_func_uint32_t_u(p_9))) , (safe_add_func_uint16_t_u_u((((((&g_111[2][4] == (void*)0) ^ (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_9, g_66[2][0])), g_104[2])), 8))) && p_9) || p_9) & p_9), p_9)))))
                    {
                        l_230 = p_9;
                    }
                    else
                    {
                        int *l_283[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_283[i] = &g_88;
                        l_284 = l_283[1];

                        ;
                    }
                }

                ;
            }
            else
            {
                int l_289[7][8] = {{0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}, {0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}, {0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}, {0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}, {0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}, {0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}, {0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL, 0x61E55B3CL, 0x7922EA5CL}};
                int l_318 = 0x7F0A6920L;
                int i, j;
                if (((-5L) >= ((!g_85.f3) != p_9)))
                {
                    struct S0 l_290 = {0L,0x2AL,0x4DA4L,2,1UL,1L,0xA266CB6DL};
                    if (((safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(g_85.f4, g_143.f4)) ^ func_41(p_10, l_289[4][1])), ((l_290 , 6L) , ((safe_mod_func_int8_t_s_s((p_9 , (l_289[1][0] , g_120)), 0xDFL)) & 0x760AL)))) > g_143.f3))
                    {
                        return l_293[1][0];
                    }
                    else
                    {
                        l_294 &= p_9;
                    }
                    for (l_294 = (-3); (l_294 > 20); ++l_294)
                    {
                        (*l_284) |= 0xBC0B29BCL;
                        (*l_237) = l_297;
                    }
                    return l_290.f3;
                }
                else
                {
                    int **l_298 = &l_284;
                    (*l_298) = l_284;
                    (**l_298) ^= l_230;
                }
                for (l_197.f1 = 0; (l_197.f1 >= 19); l_197.f1 = safe_add_func_uint32_t_u_u(l_197.f1, 4))
                {
                    for (l_230 = 2; (l_230 >= 0); l_230 -= 1)
                    {
                        return l_294;
                    }
                }
                for (l_294 = (-30); (l_294 == (-18)); l_294 = safe_add_func_uint8_t_u_u(l_294, 2))
                {
                    unsigned short l_303[8][2][5] = {{{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}, {{1UL, 5UL, 0UL, 1UL, 0x171CL}, {1UL, 5UL, 0UL, 1UL, 0x171CL}}};
                    struct S1 *l_308 = &l_297;
                    int i, j, k;
                    if ((l_303[2][0][3] <= (safe_mul_func_int16_t_s_s(((**l_224) , g_85.f5), g_143.f0))))
                    {
                        (*l_284) &= (safe_sub_func_int8_t_s_s((g_143.f0 , g_85.f0), 0x11L));
                    }
                    else
                    {
                        struct S1 *l_309 = &l_297;
                        (*l_284) = (p_9 & 0xE30F185DL);
                        (*g_142) = func_20(l_308, (*g_195), ((((func_20(l_309, func_34(p_11), ((safe_add_func_uint16_t_u_u(0x528EL, ((253UL == (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((void*)0 != &l_224), p_9)) <= 0xB184F4DFL), 0xCFA40011L)), l_230))) <= g_143.f0))) || p_9)) , 1L) && 1UL) , g_104[5]) && l_289[3][0]));
                    }
                }
                l_318 ^= p_9;
            }


            ;
            return p_9;
        }
        else
        {
            short l_370 = 0L;
            int l_375[2][4][7] = {{{(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}, {(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}, {(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}, {(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}}, {{(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}, {(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}, {(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}, {(-10L), 0xBF67B714L, 0x2451EDD1L, 0xBF67B714L, (-10L), 0xBF67B714L, 0x2451EDD1L}}};
            int *l_418 = &g_104[4];
            int *l_424 = &l_294;
            struct S0 **l_425 = &g_195;
            struct S1 *l_428 = &l_297;
            char l_474[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_474[i] = 0xDEL;
            l_294 &= p_9;
            if ((safe_rshift_func_int16_t_s_s(g_104[5], (7L <= g_17.f2))))
            {
                struct S1 *l_329 = (void*)0;
                struct S0 l_335 = {9L,0L,65532UL,20,0xF3L,-10L,0xB439EF4DL};
                short l_357 = 0xA162L;
                int *l_361 = &g_61;
                for (l_197.f0 = 0; (l_197.f0 < 24); l_197.f0 = safe_add_func_int16_t_s_s(l_197.f0, 6))
                {
                    (*p_11) = func_20(&g_17, func_34(p_11), g_17.f0);
                    for (l_235 = 0; (l_235 < 12); l_235 = safe_add_func_uint8_t_u_u(l_235, 5))
                    {
                        (*l_284) = (safe_sub_func_int16_t_s_s(g_143.f1, p_9));
                    }
                    (*l_284) ^= p_9;
                }
                (*l_284) = (&g_110[3][0][0] == (((safe_unary_minus_func_int32_t_s(((-6L) & (safe_lshift_func_int8_t_s_s((((!p_9) , ((func_41((l_335 , p_11), ((safe_mod_func_uint32_t_u_u(g_88, (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(8L, (safe_mod_func_uint16_t_u_u((l_335.f0 || ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0x73L, g_66[2][0])), g_143.f0)))), l_235)), p_9)), l_335.f3)) , g_85.f0)), g_85.f6)))), p_9)) , p_9), 0UL)))) , g_17.f3)) != p_9) > p_9)) < l_357), 6))))) , (*p_11)) , l_358[2]));
                for (g_85.f0 = 27; (g_85.f0 != 2); --g_85.f0)
                {
                    int **l_373 = &l_214[5];
                    unsigned l_376 = 4294967295UL;
                    l_361 = l_214[7];

                    ;
                    l_375[1][1][6] ^= (((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(g_85.f1, 1L)), g_271)), (((g_143.f2 , p_9) >= (safe_sub_func_uint32_t_u_u(g_85.f5, l_370))) > 0x4AL))) < ((safe_unary_minus_func_uint8_t_u(((((l_372 , l_373) == l_373) <= 1UL) > g_143.f4))) > l_374)) , (*l_361));
                    (*l_361) = l_376;
                }

                ;
            }
            else
            {
                unsigned char l_379 = 255UL;
                int **l_392[9] = {&l_214[3], &l_214[3], &l_214[5], &l_214[3], &l_214[3], &l_214[5], &l_214[3], &l_214[3], &l_214[5]};
                struct S0 l_413[10][10] = {{{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}, {{0x77BAL,0x99L,0x5781L,2,0xD5L,0x2A12572DL,0xF8BF4BCDL}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {-4L,0L,0UL,15,255UL,0L,0x63FF3509L}, {-8L,0x03L,0x8263L,4,250UL,0xAF52DA61L,0x3FE690E7L}, {0x85BAL,0x93L,65535UL,16,0UL,-1L,0xD9756EE1L}, {0x4FE4L,1L,0x7039L,10,0UL,0x6D0839F4L,-1L}, {0L,0x4AL,0UL,0,0x15L,0xDF595689L,-1L}}};
                int i, j;
                if (func_41(l_237, p_9))
                {
                    l_379 = (safe_rshift_func_int16_t_s_u((g_66[0][0] | g_85.f4), 8));
                    if ((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((g_120 , (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u(g_85.f3, (((((0x98C5L >= p_9) , ((safe_sub_func_uint16_t_u_u((l_370 & 0x65B7B6F8L), (&g_111[1][7] != ((safe_lshift_func_uint16_t_u_u(((0L ^ ((p_9 != g_271) >= 4294967295UL)) , l_375[1][1][6]), p_9)) , l_392[8])))) ^ p_9)) && g_17.f2) , g_61) != 4294967288UL))), l_375[0][2][6]))) < p_9), g_143.f2)), 8)))
                    {
                        return p_9;
                    }
                    else
                    {
                        unsigned char l_393 = 0x6FL;
                        l_393 |= p_9;
                    }
                    return p_9;
                }
                else
                {
                    unsigned short l_400 = 65529UL;
                    int ***l_416 = (void*)0;
                    int *l_417 = &g_66[2][0];
                    if ((((((safe_mod_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_400, 0)), ((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_66[0][0], ((((((((safe_lshift_func_uint8_t_u_u(p_9, (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(p_9, (l_413[2][0] , func_41(&g_143, p_9)))) == ((safe_lshift_func_int8_t_s_u(g_85.f6, 2)) | 9L)), 3)))) >= p_9) , l_416) == (void*)0) , g_88) < g_143.f0) > 0L) != g_271))), 246UL)) , p_9))) != (-4L)), p_9)) ^ 1UL) <= 0x65F1L) || 0xDEDD9470L) <= p_9))
                    {
                        l_418 = l_417;

                        ;
                        (*l_417) = p_9;
                        (*l_417) ^= (p_9 & (g_85.f4 , p_9));
                        (*l_418) &= (safe_div_func_uint16_t_u_u(func_41((p_9 , p_11), (&g_16[4] == &g_16[5])), (p_9 ^ (-6L))));
                    }
                    else
                    {
                        int *l_421 = &g_66[2][0];
                        l_421 = l_417;
                    }

                    ;
                    for (l_372.f5 = (-17); (l_372.f5 >= 23); l_372.f5 = safe_add_func_uint32_t_u_u(l_372.f5, 1))
                    {
                        return (*l_418);
                    }
                }

                ;
                (*l_424) = (l_424 == ((*l_418) , (void*)0));
                (*l_424) = (g_143.f2 == (((((void*)0 == l_425) & (safe_mod_func_uint32_t_u_u(p_9, ((*p_10) , 4294967295UL)))) < ((func_41(l_428, p_9) <= g_143.f1) , 1UL)) >= g_143.f1));
            }

            ;
            (*l_418) = p_9;
            for (l_197.f1 = 0; (l_197.f1 != 27); l_197.f1 = safe_add_func_uint32_t_u_u(l_197.f1, 6))
            {
                struct S1 l_442[10][5] = {{{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}, {{3,7544,-164,1498,15810}, {-69,3978,307,1975,-4388}, {-91,48,18,2004,11354}, {-80,4152,-398,613,4019}, {-135,3955,267,390,12326}}};
                unsigned short l_464[2];
                struct S1 *l_466 = &l_297;
                int *l_476 = (void*)0;
                struct S1 *l_483 = &l_442[6][2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_464[i] = 0x2769L;
                if ((g_143.f3 , (*l_284)))
                {
                    (*p_11) = (*p_10);
                    for (g_63 = 7; (g_63 >= 0); g_63 -= 1)
                    {
                        struct S0 *l_436 = (void*)0;
                        int i;
                        g_104[g_63] = (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((((p_9 && (g_85.f4 > (safe_lshift_func_uint16_t_u_s(((*l_424) & g_66[2][0]), 10)))) , (*l_224)) != (g_271 , l_436)))) >= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_9, 1)), l_441))), p_9));
                        return p_9;
                    }
                    l_442[6][2] = (*g_142);
                }
                else
                {
                    l_442[6][2].f0 = (((p_10 != &g_143) == (p_9 <= g_85.f0)) != (safe_sub_func_int32_t_s_s(((void*)0 == &l_375[0][0][1]), (*l_418))));
                    for (l_441 = 25; (l_441 > (-23)); --l_441)
                    {
                        unsigned l_449[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_449[i] = 4294967295UL;
                        (*l_424) = ((safe_add_func_int8_t_s_s((((+(l_449[0] , ((safe_mul_func_uint8_t_u_u((p_9 | (((g_85.f4 , ((!(((safe_div_func_uint8_t_u_u(g_271, ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((0xF9L >= p_9), ((0x29L ^ p_9) , g_143.f3))) ^ p_9), (*l_418))), p_9)) || g_17.f0))) , (*l_424)) & g_85.f6)) ^ 0xE6B0D0ACL)) , p_9) | l_449[0])), 0x3FL)) && p_9))) != p_9) <= 0x8BFE7BD9L), 0xA0L)) , p_9);
                        (*l_284) = (-10L);
                        return l_449[0];
                    }
                }
                if ((((p_9 <= (safe_rshift_func_uint8_t_u_s((l_442[6][2].f0 | (safe_mul_func_int16_t_s_s((((l_464[1] || ((void*)0 != l_465)) , l_466) != l_428), ((safe_add_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_17.f2, 0x11L)), g_88)) <= 0UL))), p_9)) < l_442[6][2].f4)))), l_474[0]))) > p_9) < p_9))
                {
                    int *l_475 = &g_88;
                    l_476 = l_475;

                    ;
                    if (((safe_rshift_func_uint8_t_u_s(((g_17.f3 || (safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((((*l_284) | ((*l_476) == (func_34(func_36((p_9 , ((**l_425) , (p_9 <= 8UL))), (p_9 , p_10))) , (*l_424)))) == p_9), 7)) , 0xBCL), g_17.f2))) && 1L), g_143.f0)) & 0L))
                    {
                        int l_484 = (-1L);
                        if (l_484)
                            break;
                        l_484 = (*l_476);
                    }
                    else
                    {
                        return (*l_284);
                    }
                }
                else
                {
                    return p_9;
                }

                ;
            }
        }
        for (l_197.f5 = 0; (l_197.f5 <= 0); l_197.f5 += 1)
        {
            unsigned short l_502 = 0x207FL;
            int *l_513 = &g_88;
            int *l_533 = (void*)0;
            unsigned char l_550 = 0x73L;
            for (l_197.f2 = 0; (l_197.f2 <= 0); l_197.f2 += 1)
            {
                short l_511 = (-1L);
                int l_512 = 0x75A79E59L;
                struct S0 l_516 = {-2L,3L,65532UL,12,249UL,0L,0x36FAE6D1L};
                struct S1 ***l_529 = &l_524[0][1];
                int *l_530 = &g_66[2][0];
                (*l_284) = ((g_85.f4 , ((0L != (-1L)) , (void*)0)) == (void*)0);
                if ((safe_div_func_int8_t_s_s(((l_487 == (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(p_9, (0UL & ((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_9, (safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_9, ((65535UL == (safe_sub_func_uint16_t_u_u((&l_208 != (void*)0), l_502))) , l_502))), g_17.f1)))), p_9)) < 252UL)))), g_17.f0))) != 0x2C0AL), 255UL)))
                {
                    int l_508[10] = {0xC053E083L, 1L, 0xC053E083L, 1L, 0xC053E083L, 1L, 0xC053E083L, 1L, 0xC053E083L, 1L};
                    int i;
                    for (g_63 = 0; (g_63 >= 0); g_63 -= 1)
                    {
                        int l_503 = 0L;
                        int i, j;
                        (*l_252) = (*g_195);
                        if (p_9)
                            break;
                        l_503 |= p_9;
                        l_513 = (((safe_mod_func_uint8_t_u_u((252UL != (safe_mul_func_int16_t_s_s(l_508[1], (safe_add_func_uint32_t_u_u(l_508[3], (*l_284)))))), 0xB9L)) == (l_511 == l_512)) , &l_508[2]);

                        ;
                    }

                    ;
                    return l_512;
                }
                else
                {
                    int l_523 = 0xCE284FCCL;
                    int i, j;
                    (*l_513) = ((((4UL < (safe_sub_func_int32_t_s_s(6L, ((void*)0 != &g_194[l_197.f2][l_197.f2])))) != (((g_63 != g_120) != (((p_9 || ((0xA4L == ((void*)0 != p_11)) <= 0x85AAL)) != g_120) , p_9)) > 0UL)) , (void*)0) == (void*)0);
                    (*l_284) &= ((((((l_516 , ((~(safe_rshift_func_uint16_t_u_s(g_61, (p_9 || ((safe_add_func_uint32_t_u_u(((((p_9 < g_85.f0) , (*g_195)) , (*l_224)) == (*l_224)), ((((safe_add_func_int16_t_s_s(g_143.f2, (-7L))) , 0x299A8C33L) & l_523) || (*l_513)))) & g_66[2][0]))))) , g_271)) != g_88) & g_143.f0) , (void*)0) == l_524[0][1]) < g_85.f6);
                    for (l_516.f0 = (-30); (l_516.f0 >= (-11)); l_516.f0 = safe_add_func_uint32_t_u_u(l_516.f0, 9))
                    {
                        return l_523;
                    }
                    (*l_284) ^= (safe_mul_func_int16_t_s_s(((p_9 >= 5UL) , p_9), (((l_523 , ((((l_529 == ((0UL ^ 2UL) , (((void*)0 != &g_17) , (void*)0))) , l_530) != l_530) <= 0xB853L)) , g_531[6][5][1]) == &g_532)));
                }
            }
            l_513 = l_214[3];

            ;
            if (p_9)
                break;
            for (g_271 = 0; (g_271 <= 0); g_271 += 1)
            {
                unsigned short l_540 = 0x3038L;
                int l_541 = (-2L);
                l_533 = l_513;

                ;
                for (g_63 = 0; (g_63 >= 0); g_63 -= 1)
                {
                    unsigned char l_536 = 255UL;
                    int l_537 = (-5L);
                    int *l_539 = (void*)0;
                    int *l_543 = &g_104[4];
                    if ((safe_mul_func_int16_t_s_s(l_536, p_9)))
                    {
                        int i, j, k;
                        l_537 &= 1L;
                        l_539 = ((&g_194[g_63][g_63] != &g_194[g_271][g_63]) , l_538[3]);

                        ;
                        if (p_9)
                            continue;
                        l_541 |= (l_540 > (-1L));
                    }
                    else
                    {
                        return l_541;
                    }

                    ;
                    l_543 = l_542;

                    ;
                    for (g_85.f4 = 0; (g_85.f4 <= 1); g_85.f4 += 1)
                    {
                        char l_551 = 0L;
                        int *l_552 = &l_537;
                        struct S0 l_553 = {6L,0L,65535UL,15,0xB1L,0xD15D4A3BL,0x4B14510EL};
                        l_551 |= (safe_div_func_uint32_t_u_u((((*l_539) >= p_9) & (safe_div_func_uint32_t_u_u(((p_9 || (0L >= (4294967291UL && (p_9 & (safe_rshift_func_int8_t_s_u(p_9, 5)))))) , (((void*)0 == &g_110[6][0][4]) == 0L)), (*l_513)))), l_550));
                        l_552 = l_552;
                        (*l_533) = ((p_9 , (*l_552)) & 0x47L);
                        l_553 = func_34(p_11);
                    }
                }
            }

            ;
        }
        for (g_88 = 1; (g_88 <= 7); g_88 += 1)
        {
            int l_570[4];
            struct S0 l_575 = {0L,1L,65535UL,15,0x94L,-7L,0x4767F688L};
            struct S1 *l_591 = &l_208;
            int i;
            for (i = 0; i < 4; i++)
                l_570[i] = 1L;
            for (l_213 = 2; (l_213 <= 7); l_213 += 1)
            {
                return p_9;
            }
            (*p_11) = func_20(&l_208, ((((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_558, g_17.f2)), g_104[5])) | (safe_mul_func_uint8_t_u_u(g_17.f0, p_9))) != g_85.f1) , ((safe_mul_func_int8_t_s_s(g_85.f5, ((g_104[6] , g_66[1][0]) , 0x67L))) , (*g_195))), g_85.f1);
            for (g_85.f0 = 1; (g_85.f0 >= 0); g_85.f0 -= 1)
            {
                int i, j;
                (*l_237) = (*g_142);
                if ((safe_lshift_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(l_293[(g_85.f0 + 1)][g_85.f0])), p_9)) , (((safe_sub_func_int8_t_s_s((((l_358[1] != (func_20(p_10, func_34(p_10), (&g_110[4][2][2] != ((l_358[2] == (void*)0) , &g_110[4][2][2]))) , (void*)0)) <= 0L) || p_9), l_570[2])) || 0xBE62L) <= l_571)) , 0x0ABBL) == p_9), g_17.f0)))
                {
                    return p_9;
                }
                else
                {
                    (*l_284) ^= (safe_add_func_uint16_t_u_u((g_271 < (p_9 < g_104[5])), g_85.f6));
                }
                if (p_9)
                    continue;
            }
            for (g_85.f6 = 0; (g_85.f6 <= 0); g_85.f6 += 1)
            {
                int l_574 = 0xEDFF9126L;
                int *l_577 = (void*)0;
                struct S1 l_578 = {-158,1345,-40,558,12409};
                struct S1 ***l_595 = &g_532;
                if ((*l_284))
                {
                    (*l_284) = p_9;
                }
                else
                {
                    struct S0 *l_576 = &l_372;
                    int i, j;
                    (*l_284) |= l_574;
                    (*l_576) = l_575;
                    l_214[(g_85.f6 + 2)] = l_577;
                    if ((l_578 , ((safe_sub_func_int16_t_s_s(p_9, (g_85.f2 , (((safe_rshift_func_uint8_t_u_s((((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((func_34(l_591) , &l_575) != ((safe_rshift_func_int8_t_s_u(g_143.f3, 6)) , l_252)), ((p_9 != l_570[0]) || g_17.f0))), 10)) >= p_9) , g_63), p_9)), g_17.f2)) || p_9) | g_85.f5), p_9)) , 0x39L) < g_120)))) >= g_85.f0)))
                    {
                        (*l_284) &= p_9;
                    }
                    else
                    {
                        int *l_594[8][9][2] = {{{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}, {{&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}, {&g_104[5], &l_570[2]}}};
                        int i, j, k;
                        l_214[(g_85.f6 + 2)] = l_594[3][5][0];
                        l_570[2] &= ((g_17.f4 , l_595) != (void*)0);
                        (*l_284) |= (((-6L) == p_9) | (0x24L || g_85.f5));
                    }
                }
            }


        }


    }
    else
    {
        int l_598 = 0x675BC51DL;
        int *l_620 = &g_120;
        struct S1 ***l_632 = &g_532;
        for (g_85.f5 = 0; (g_85.f5 >= (-22)); g_85.f5--)
        {
            unsigned l_599 = 4294967286UL;
            int l_611 = 0L;
            unsigned l_613 = 2UL;
            struct S0 l_615 = {1L,-1L,0xFD2BL,14,0xF0L,0L,0x94964647L};
            if (l_598)
            {
                struct S1 *l_612 = &l_208;
                int l_614 = 0xCCEF4C99L;
                struct S0 *l_616 = (void*)0;
                struct S0 *l_617 = &l_615;
                (*l_617) = ((0x073861C2L & (((l_599 , (safe_lshift_func_uint16_t_u_s((l_614 ^ p_9), 3))) && g_88) , 0xC8E99B7FL)) , l_615);
                for (l_197.f1 = (-7); (l_197.f1 != 0); l_197.f1 = safe_add_func_int8_t_s_s(l_197.f1, 6))
                {
                    l_620 = &l_614;

                    ;
                }


            }
            else
            {
                if (p_9)
                    break;
                if (p_9)
                    break;
                return p_9;
            }
        }


    }


    l_641 |= (((((((safe_rshift_func_uint8_t_u_s((l_224 != l_224), 4)) <= ((safe_mul_func_int8_t_s_s(func_41(&l_208, g_17.f2), (p_9 >= g_143.f2))) , ((*l_284) == p_9))) , g_85.f0) < 6UL) < p_9) >= 0x9089E91BL) | 0x86C4B67CL);
    l_214[3] = (void*)0;
    return p_9;
}







static struct S1 func_20(struct S1 * p_21, struct S0 p_22, unsigned char p_23)
{
    char l_198 = (-2L);
    unsigned short l_205 = 0x2622L;
    int *l_206 = &g_104[3];
    int **l_207 = &l_206;
    l_198 = p_23;
    l_205 ^= (safe_div_func_uint16_t_u_u((!(((safe_lshift_func_int16_t_s_u(g_104[8], l_198)) < (safe_add_func_int16_t_s_s(p_22.f4, (p_22.f3 ^ l_198)))) || p_22.f2)), g_85.f2));
    (*l_207) = l_206;
    (*l_207) = (*l_207);
    return (*p_21);
}







static struct S1 * func_24(struct S1 * p_25)
{
    unsigned l_27 = 0x0336AE3DL;
    struct S1 *l_33 = &g_17;
    int *l_178 = &g_66[1][0];
    if ((safe_unary_minus_func_int8_t_s(l_27)))
    {
        unsigned char l_32 = 247UL;
        int l_165 = 0x6C129863L;
        struct S0 *l_173 = &g_85;
        if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((+l_32), (l_33 == (func_34(func_36((safe_lshift_func_uint16_t_u_s(func_41(&g_17, (l_27 , (0xA971L ^ (safe_lshift_func_int16_t_s_s(((-1L) && (safe_div_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(func_49(l_33))) < ((-1L) || g_17.f1)), 1UL))), 6))))), 14)), g_142)) , p_25)))), l_32)))
        {
            int *l_160 = &g_61;
            (*g_142) = (*l_33);
            (*l_160) = l_32;
        }
        else
        {
            int l_168 = 0xD432E6ADL;
            int *l_176 = &g_66[0][0];
            int **l_177[5] = {&g_111[1][7], &l_176, &g_111[1][7], &l_176, &g_111[1][7]};
            struct S1 **l_180[6];
            struct S1 ***l_179 = &l_180[2];
            int i;
            for (i = 0; i < 6; i++)
                l_180[i] = (void*)0;
            l_165 ^= (g_143.f0 , (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0x2A5FL, 0)), g_85.f4)));
            (*l_176) = (safe_lshift_func_int8_t_s_u(l_165, ((l_168 , ((safe_mod_func_uint16_t_u_u(((((l_165 && 0x60B7L) < (safe_add_func_uint8_t_u_u(((void*)0 != l_173), ((((safe_mod_func_uint16_t_u_u(l_168, g_143.f1)) , l_27) , g_17.f4) > 7L)))) , l_168) < l_168), l_27)) ^ l_168)) , g_85.f5)));
            l_178 = &l_165;

            ;
            (*l_179) = &l_33;


        }


        ;
    }
    else
    {
        struct S0 *l_181 = &g_85;
        int l_184 = 0x91684916L;
        int **l_185 = &g_111[0][7];
        (*l_178) |= ((void*)0 != l_181);
        (*l_178) = (safe_add_func_int8_t_s_s(func_49(p_25), l_184));


        (*l_185) = l_178;
        for (g_88 = 0; (g_88 >= 13); g_88++)
        {
            struct S0 **l_191 = (void*)0;
            struct S1 l_193 = {-109,7450,46,1615,-8131};
            struct S0 ***l_196 = (void*)0;
            for (l_27 = 0; (l_27 != 48); ++l_27)
            {
                short l_190[6] = {0x7BCFL, 0x7BCFL, 5L, 0x7BCFL, 0x7BCFL, 5L};
                int i;
                if (l_190[2])
                    break;
                (*l_181) = (*l_181);
                for (g_120 = 0; (g_120 <= 0); g_120 += 1)
                {
                    int i, j;
                    g_66[(g_120 + 1)][g_120] |= 6L;
                    for (g_85.f1 = 0; (g_85.f1 <= 8); g_85.f1 += 1)
                    {
                        struct S0 ***l_192 = &l_191;
                        int i, j;
                        (*l_192) = l_191;
                        if (g_66[(g_120 + 2)][g_120])
                            break;
                        return &g_17;


                    }
                }
                (*g_142) = l_193;
            }
            g_194[0][0] = g_194[0][0];
        }
    }



    return &g_17;


}







static struct S0 func_34(struct S1 * p_35)
{
    unsigned l_155 = 0x2C0EE4DFL;
    struct S1 *l_158 = &g_17;
    int *l_159 = &g_61;
    (*l_159) ^= l_155;
    return g_85;
}







static struct S1 * func_36(unsigned short p_37, struct S1 * p_38)
{
    int *l_145 = &g_66[3][0];
    int l_147 = 0x32D05602L;
    for (g_61 = 7; (g_61 >= 2); g_61 -= 1)
    {
        int *l_144 = &g_104[5];
        int **l_146[4] = {&l_144, &l_144, &l_144, &l_144};
        int i;
        (*l_144) &= p_37;
        l_145 = l_145;
        l_145 = (void*)0;

        ;
        for (g_85.f1 = 0; (g_85.f1 >= 0); g_85.f1 -= 1)
        {
            int i, j;
            g_66[(g_85.f1 + 4)][g_85.f1] = p_37;
        }
    }

    ;
    if (l_147)
    {
        int **l_148 = (void*)0;
        int **l_149[6][10][4] = {{{&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}}, {{&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}}, {{&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}}, {{&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}}, {{&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}}, {{&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}, {&g_111[3][5], (void*)0, &l_145, &g_111[1][7]}}};
        int i, j, k;
        l_145 = (void*)0;

        ;
    }
    else
    {
        struct S0 l_150 = {0x5BA2L,0xC4L,65533UL,3,1UL,0x570BABF4L,0x7C7D0B8DL};
        g_85 = l_150;
        return p_38;


    }

    ;
    return p_38;


}







static unsigned short func_41(struct S1 * p_42, short p_43)
{
    int *l_123 = &g_61;
    int **l_124 = (void*)0;
    struct S1 *l_127 = &g_17;
    l_123 = l_123;
    for (g_85.f5 = 0; (g_85.f5 <= 8); g_85.f5 += 1)
    {
        struct S0 l_130 = {5L,0x99L,6UL,2,0xC8L,0x235839F2L,8L};
        int *l_141 = &g_63;
        for (g_85.f2 = 1; (g_85.f2 <= 8); g_85.f2 += 1)
        {
            int i, j;
            g_104[g_85.f5] = (g_85 , p_43);
            for (g_85.f1 = 0; (g_85.f1 <= 7); g_85.f1 += 1)
            {
                int i, j;
                g_111[g_85.f2][g_85.f5] = (void*)0;
                return (*l_123);
            }
        }
        if ((p_43 < ((safe_mul_func_int16_t_s_s(g_17.f3, p_43)) ^ (*l_123))))
        {
            int l_135 = 0xCEA4A799L;
            for (g_61 = 0; (g_61 <= 8); g_61 += 1)
            {
                return g_85.f1;
            }
            for (g_88 = 0; (g_88 <= 7); g_88 += 1)
            {
                struct S0 l_128 = {0x8504L,0x3EL,65533UL,19,0UL,0x4350B5FEL,0x6E9995DDL};
                struct S0 *l_129[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_129[i] = &l_128;
                l_130 = l_128;
                if (((0L && p_43) >= (!((((safe_rshift_func_uint16_t_u_s((l_128.f6 != ((safe_add_func_int16_t_s_s((p_43 && l_135), (252UL > 7UL))) && (-4L))), 8)) & ((void*)0 != &l_130)) != p_43) == p_43))))
                {
                    int *l_136 = &g_120;
                    for (l_128.f2 = 0; (l_128.f2 <= 7); l_128.f2 += 1)
                    {
                        int **l_137 = (void*)0;
                        int **l_138 = &l_123;
                        (*l_138) = l_136;

                        ;
                    }
                }
                else
                {
                    int *l_139 = (void*)0;
                    int i;
                    l_139 = (l_135 , ((*p_42) , ((p_43 , (*l_123)) , &l_135)));

                    ;
                }
                for (g_63 = 0; (g_63 <= 8); g_63 += 1)
                {
                    if ((*l_123))
                        break;
                }
            }
        }
        else
        {
            int **l_140 = &g_111[4][0];
            int i;
            g_104[g_85.f5] = l_130.f2;
            (*l_140) = &g_104[g_85.f5];
            l_141 = l_141;
        }
    }

    ;
    return (*l_123);
}







static short func_49(struct S1 * p_50)
{
    int l_57 = 0xD3CC114FL;
    int *l_119 = &g_120;
    int *l_121 = &g_63;
    int l_122[6] = {0xA75AA8E5L, 0xA75AA8E5L, 5L, 0xA75AA8E5L, 0xA75AA8E5L, 5L};
    int i;
    (*l_119) ^= (safe_lshift_func_int16_t_s_u(0x7639L, (safe_add_func_int8_t_s_s(0xE7L, func_55(l_57)))));


    (*l_121) &= (*l_119);
    return l_122[2];
}







static unsigned char func_55(char p_56)
{
    int *l_60 = &g_61;
    unsigned l_105[9] = {0x7432CFE0L, 3UL, 0x7432CFE0L, 3UL, 0x7432CFE0L, 3UL, 0x7432CFE0L, 3UL, 0x7432CFE0L};
    int i;
    for (p_56 = 2; (p_56 <= 7); p_56 += 1)
    {
        struct S1 **l_59 = &g_16[p_56];
        struct S1 ***l_58 = &l_59;
        int i;
        g_16[p_56] = &g_17;
        (*l_58) = &g_16[p_56];
    }
    for (p_56 = 0; (p_56 <= 7); p_56 += 1)
    {
        int **l_62 = &l_60;
        unsigned l_71 = 4294967295UL;
        struct S1 l_82 = {-54,6538,-403,263,-70};
        short l_86[9] = {0x35ACL, 0x35ACL, 0x4CA6L, 0x35ACL, 0x35ACL, 0x4CA6L, 0x35ACL, 0x35ACL, 0x4CA6L};
        int i;
        (*l_62) = l_60;
        for (g_61 = 2; (g_61 <= 7); g_61 += 1)
        {
            struct S1 **l_77[5];
            struct S1 ***l_76 = &l_77[2];
            int l_95 = 0x5CF31528L;
            unsigned char l_102 = 0xAFL;
            int i;
            for (i = 0; i < 5; i++)
                l_77[i] = &g_16[7];
            for (g_63 = 2; (g_63 <= 7); g_63 += 1)
            {
                int *l_106 = &g_88;
                g_17.f2 &= (safe_rshift_func_int8_t_s_u(p_56, 2));
                for (g_66[2][0] = 7; (g_66[2][0] >= 0); g_66[2][0] -= 1)
                {
                    int *l_87 = &g_88;
                    int i;
                    (*l_87) = (((((safe_rshift_func_int8_t_s_u(0xE4L, 1)) >= ((!(safe_lshift_func_uint16_t_u_s(l_71, (((safe_add_func_int8_t_s_s(p_56, (safe_mod_func_uint16_t_u_u(((void*)0 == l_76), (safe_lshift_func_uint16_t_u_u(((g_17.f3 , (safe_div_func_uint8_t_u_u((l_82 , (*l_60)), (safe_lshift_func_int16_t_s_s((g_85 , p_56), (**l_62)))))) | (**l_62)), 7)))))) , &g_16[5]) != &g_16[6])))) , 0L)) <= g_17.f2) , l_86[4]) | g_85.f3);
                    for (g_85.f6 = 2; (g_85.f6 <= 7); g_85.f6 += 1)
                    {
                        return g_17.f0;
                    }
                    for (g_88 = 0; (g_88 <= 8); g_88 += 1)
                    {
                        int *l_103 = &g_104[5];
                        int i;
                        (*l_103) |= (safe_mul_func_uint8_t_u_u(((l_86[g_63] && ((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(p_56, (l_95 && (**l_62)))), (p_56 == (safe_add_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((void*)0 != &g_88), g_17.f2)) ^ ((((p_56 && 0xBB50L) , p_56) == g_85.f5) >= p_56)), l_102)) , &g_66[3][0]) != (void*)0) | g_17.f0), g_85.f4))))) < 1UL)) <= p_56), 0x54L));
                        g_104[5] = p_56;
                        if (g_17.f1)
                            continue;
                    }
                    for (l_71 = 0; (l_71 <= 7); l_71 += 1)
                    {
                        int i;
                        if (l_86[(g_61 + 1)])
                            break;
                        (*l_87) = (p_56 , l_86[(g_61 + 1)]);
                        (*l_87) ^= p_56;
                    }
                }
                (*l_106) &= l_105[8];
            }
            if (p_56)
            {
                short l_107[8][1];
                int *l_112 = &g_88;
                int i, j;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_107[i][j] = 0x9998L;
                }
                (*l_112) &= (l_107[6][0] <= (!(safe_rshift_func_uint8_t_u_s((g_110[4][2][2] != &g_111[1][7]), 2))));
            }
            else
            {
                int *l_113 = &g_66[2][0];
                (*l_62) = l_113;

                ;
            }
            for (g_85.f4 = 0; (g_85.f4 <= 7); g_85.f4 += 1)
            {
                if (p_56)
                    break;
            }
            if ((*l_60))
                continue;
        }
    }

    ;
    for (g_63 = 5; (g_63 > 11); g_63 = safe_add_func_int8_t_s_s(g_63, 1))
    {
        (*l_60) = (*l_60);
        if (p_56)
            break;
    }
    for (g_85.f0 = 6; (g_85.f0 == (-29)); g_85.f0--)
    {
        int ***l_118 = &g_110[4][2][2];
        (*l_118) = &l_60;
    }


    return g_88;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_17.f3, "g_17.f3", print_hash_value);
    transparent_crc(g_17.f4, "g_17.f4", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_66[i][j], "g_66[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_85.f5, "g_85.f5", print_hash_value);
    transparent_crc(g_85.f6, "g_85.f6", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_143.f3, "g_143.f3", print_hash_value);
    transparent_crc(g_143.f4, "g_143.f4", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_646.f0, "g_646.f0", print_hash_value);
    transparent_crc(g_646.f1, "g_646.f1", print_hash_value);
    transparent_crc(g_646.f2, "g_646.f2", print_hash_value);
    transparent_crc(g_646.f3, "g_646.f3", print_hash_value);
    transparent_crc(g_646.f4, "g_646.f4", print_hash_value);
    transparent_crc(g_646.f5, "g_646.f5", print_hash_value);
    transparent_crc(g_646.f6, "g_646.f6", print_hash_value);
    transparent_crc(g_658, "g_658", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1031, "g_1031", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
