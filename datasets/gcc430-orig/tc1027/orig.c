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
   char * f0;
   unsigned f1;
};

union U1 {
   unsigned char f0;
   unsigned char f1;
   unsigned f2;
   int f3;
};

union U2 {
   unsigned f0;
   unsigned f1 : 7;
   char f2;
   volatile char f3;
   volatile unsigned short f4;
};

union U3 {
   unsigned f0;
   volatile unsigned f1 : 16;
   unsigned short f2;
};

union U4 {
   volatile char f0;
};


static int g_3 = 0x5613717BL;
static char g_12 = 0x39L;
static unsigned char g_14[7][7] = {{0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}, {0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}, {0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}, {0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}, {0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}, {0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}, {0xE0L, 0xA1L, 0xB4L, 255UL, 0xB4L, 0xA1L, 0xE0L}};
static unsigned g_37 = 0x5156BE82L;
static int *g_41 = (void*)0;
static int **g_40 = &g_41;
static int g_46 = 4L;
static unsigned g_49 = 0x1F8487B2L;
static unsigned char g_53 = 0UL;
static unsigned char g_55 = 0xC6L;
static unsigned char *g_54 = &g_55;
static int g_65 = 0L;
static volatile short g_66 = 3L;
static char g_67 = 1L;
static volatile short g_68 = 0x715CL;
static short g_69[9][1] = {{0x5DE1L}, {0x5DE1L}, {0x5DE1L}, {0x5DE1L}, {0x5DE1L}, {0x5DE1L}, {0x5DE1L}, {0x5DE1L}, {0x5DE1L}};
static int g_70[10] = {0x8D8AE6FBL, 0x8D8AE6FBL, 0x9F097201L, 0x8D8AE6FBL, 0x8D8AE6FBL, 0x9F097201L, 0x8D8AE6FBL, 0x8D8AE6FBL, 0x9F097201L, 0x8D8AE6FBL};
static unsigned short g_72 = 0x4C9BL;
static unsigned short g_109 = 2UL;
static union U0 g_113 = {0};
static unsigned short g_143 = 65535UL;
static unsigned g_148 = 0xA1317D21L;
static volatile int g_186 = 0x9BD9AF42L;
static char g_202[10][1][4] = {{{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}, {{(-1L), 0x6EL, 0xD4L, 0x6EL}}};
static short g_215 = 0x6102L;
static unsigned **g_218 = (void*)0;
static int g_223 = 0x34B83A5DL;
static volatile unsigned g_269 = 4294967292UL;
static union U1 g_282 = {0x56L};
static volatile int g_293[7] = {0x709E712BL, 0x7E7AD450L, 0x709E712BL, 0x7E7AD450L, 0x709E712BL, 0x7E7AD450L, 0x709E712BL};
static union U2 g_307[10] = {{0x799FA52FL}, {0xD02BC70BL}, {1UL}, {1UL}, {0xD02BC70BL}, {0x799FA52FL}, {0xD02BC70BL}, {1UL}, {1UL}, {0xD02BC70BL}};
static union U0 *g_320 = &g_113;
static union U0 **g_319 = &g_320;
static union U0 ***g_318 = &g_319;
static union U0 ****g_317 = &g_318;
static volatile short g_353 = 0x8316L;
static unsigned g_403 = 0x29650C28L;
static unsigned char *g_445 = (void*)0;
static short g_485 = 0x5211L;
static int *g_521[1] = {(void*)0};
static volatile int *g_550 = (void*)0;
static union U0 *****g_561 = &g_317;
static union U0 *g_571 = &g_113;
static int g_597[2][3][8] = {{{(-7L), 0x933BF0C1L, 0xA644EFAFL, 0x933BF0C1L, (-7L), 0xDC8A15D8L, (-7L), 0x933BF0C1L}, {(-7L), 0x933BF0C1L, 0xA644EFAFL, 0x933BF0C1L, (-7L), 0xDC8A15D8L, (-7L), 0x933BF0C1L}, {(-7L), 0x933BF0C1L, 0xA644EFAFL, 0x933BF0C1L, (-7L), 0xDC8A15D8L, (-7L), 0x933BF0C1L}}, {{(-7L), 0x933BF0C1L, 0xA644EFAFL, 0x933BF0C1L, (-7L), 0xDC8A15D8L, (-7L), 0x933BF0C1L}, {(-7L), 0x933BF0C1L, 0xA644EFAFL, 0x933BF0C1L, (-7L), 0xDC8A15D8L, (-7L), 0x933BF0C1L}, {(-7L), 0x933BF0C1L, 0xA644EFAFL, 0x933BF0C1L, (-7L), 0xDC8A15D8L, (-7L), 0x933BF0C1L}}};
static union U3 g_627 = {0x8DE5F50FL};
static union U3 *g_626[4] = {&g_627, (void*)0, &g_627, (void*)0};
static unsigned short g_675 = 0xA44CL;
static volatile char g_814 = 0x11L;
static union U4 g_865[9][6] = {{{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}, {{0L}, {0x11L}, {0L}, {0x11L}, {0L}, {0x11L}}};
static union U4 *g_874 = &g_865[6][5];
static union U4 **g_873 = &g_874;
static int g_888[6][9][4] = {{{0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}}, {{0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}}, {{0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}}, {{0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}}, {{0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}}, {{0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}, {0x5862BBB1L, 0xA89DE787L, 0x6434B5B5L, 6L}}};
static int g_893[1] = {(-6L)};
static union U2 *g_941 = &g_307[6];
static union U2 **g_940 = &g_941;
static union U1 *g_963 = (void*)0;
static unsigned char g_994 = 0x08L;
static char g_1021 = 0L;
static int g_1046 = (-9L);
static unsigned short *g_1065 = &g_109;
static unsigned g_1144 = 0x27A996B9L;
static volatile unsigned char g_1239 = 1UL;



static int func_1(void);
static int func_7(unsigned p_8);
static int * func_18(int p_19);
static int func_20(int p_21, unsigned short p_22, unsigned char p_23, unsigned char * p_24, unsigned p_25);
static union U0 * func_75(short p_76, int p_77, unsigned char p_78);
static char func_117(int p_118, union U0 * p_119);
static union U0 * func_121(unsigned char * p_122, int p_123, unsigned char p_124, int p_125);
static unsigned short func_130(union U0 p_131, unsigned char * p_132);
static unsigned char * func_134(char * p_135);
static char * func_136(unsigned p_137, unsigned p_138, unsigned char p_139);
static int func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    int *l_6 = &g_3;
    int **l_5 = &l_6;
    int *l_11 = &g_3;
    unsigned char *l_13 = &g_14[5][4];
    int l_15 = 0xC5860BC2L;
    int *l_1329 = &g_597[0][2][3];
    (*l_5) = ((*l_4) = l_2);
    if (func_7((((*l_13) = (((*l_5) == &g_3) < ((*l_2) = (safe_mul_func_int8_t_s_s(g_3, (((l_11 == &g_3) <= (g_12 &= (g_3 >= (((**l_5) == 0x82E5L) != g_3)))) || 0xE5L)))))) > l_15)))
    {
        (*l_4) = func_18((**l_5));
    }
    else
    {
        (*g_40) = (*g_40);
    }
    (*l_4) = l_1329;
    return (*l_11);
}







static int func_7(unsigned p_8)
{
    int *l_17 = &g_3;
    int **l_16 = &l_17;
    (*l_16) = &g_3;
    return g_3;
}







static int * func_18(int p_19)
{
    unsigned char **l_26 = (void*)0;
    unsigned char **l_27 = (void*)0;
    unsigned char *l_29 = &g_14[5][4];
    unsigned char **l_28 = &l_29;
    unsigned *l_36 = &g_37;
    int *l_44 = (void*)0;
    int *l_45 = &g_46;
    unsigned *l_47 = (void*)0;
    unsigned *l_48 = &g_49;
    unsigned char *l_50 = (void*)0;
    unsigned char *l_51 = &g_14[2][1];
    unsigned char *l_52 = &g_53;
    int l_920[2];
    unsigned short l_921 = 65535UL;
    union U0 l_955 = {0};
    short l_970 = 0x5EE3L;
    short l_1047 = (-1L);
    int l_1060 = (-1L);
    union U2 **l_1119 = (void*)0;
    union U0 *l_1140[2][4] = {{&g_113, &l_955, &g_113, &l_955}, {&g_113, &l_955, &g_113, &l_955}};
    union U4 *l_1176 = &g_865[8][1];
    unsigned l_1201 = 0x69216A65L;
    int *l_1207 = &g_46;
    int l_1217 = 6L;
    union U2 *l_1219 = &g_307[3];
    char l_1247 = 0x1AL;
    union U4 ***l_1289[10][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
    int *l_1328 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_920[i] = 1L;
    if (func_20(p_19, (((*l_28) = (void*)0) == &g_14[5][4]), ((*l_52) = ((*l_51) &= (0xB1C5ADF8L < (safe_mod_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s((~p_19), func_7(((*l_36)--)))) == ((void*)0 == g_40)), ((*l_48) |= (safe_mod_func_int32_t_s_s(((*l_45) = func_7(g_12)), p_19)))))))), g_54, g_12))
    {
        unsigned char *l_905 = &g_282.f1;
        int *l_910 = &g_893[0];
        int *l_911 = &g_46;
        int *l_912 = &g_597[0][2][3];
        int *l_913 = &g_597[0][2][3];
        int *l_914 = &g_893[0];
        int *l_915 = &g_893[0];
        int *l_916 = (void*)0;
        int *l_917 = &g_597[1][2][2];
        int *l_918 = (void*)0;
        int *l_919[2];
        int i;
        for (i = 0; i < 2; i++)
            l_919[i] = &g_46;
        (*l_45) = (safe_lshift_func_uint8_t_u_u(1UL, ((((void*)0 == &g_627) & func_130((*****g_561), l_905)) > (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((g_109 > p_19), 2)) || 0x71FCE1B5L), 5)))));
        l_921++;
        (*l_917) = (p_19 <= p_19);
    }
    else
    {
        unsigned l_946 = 0x7C14DE51L;
        char *l_949 = &g_202[8][0][0];
        union U4 ***l_969[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        int l_981 = 0x60569AFCL;
        int l_982 = 1L;
        int l_984 = 0x4136065CL;
        int l_989 = (-2L);
        int l_990 = 0x79BAC069L;
        int l_992[6][8][3] = {{{(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}}, {{(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}}, {{(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}}, {{(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}}, {{(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}}, {{(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}, {(-1L), 0xE13E9B49L, 0xBC653249L}}};
        unsigned l_1048 = 0xCFED530CL;
        unsigned l_1051 = 1UL;
        int *l_1118 = &g_3;
        int l_1123 = 0x83A9C617L;
        union U3 *l_1127 = &g_627;
        union U0 *****l_1184 = &g_317;
        int i, j, k;
        for (g_49 = (-10); (g_49 <= 42); g_49 = safe_add_func_int16_t_s_s(g_49, 1))
        {
            unsigned char l_926 = 255UL;
            (*l_45) &= l_926;
        }
        if (((*l_45) == 1L))
        {
            unsigned short l_927[6];
            unsigned char l_928[1][4][8] = {{{0xA7L, 252UL, 0UL, 0x9FL, 0x9FL, 0UL, 252UL, 0xA7L}, {0xA7L, 252UL, 0UL, 0x9FL, 0x9FL, 0UL, 252UL, 0xA7L}, {0xA7L, 252UL, 0UL, 0x9FL, 0x9FL, 0UL, 252UL, 0xA7L}, {0xA7L, 252UL, 0UL, 0x9FL, 0x9FL, 0UL, 252UL, 0xA7L}}};
            union U0 *l_929[6] = {&g_113, &g_113, &g_113, &g_113, &g_113, &g_113};
            int l_938[4][7][1] = {{{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}, {{(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}, {(-10L)}}};
            char *l_971 = &g_202[4][0][1];
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_927[i] = 0xDA64L;
            (*l_45) ^= p_19;
            if (func_117((l_927[5] != l_928[0][0][5]), l_929[3]))
            {
                unsigned l_932 = 0UL;
                unsigned short *l_935 = &g_675;
                int l_939 = 0L;
                for (g_282.f1 = (-30); (g_282.f1 != 13); g_282.f1++)
                {
                    if (l_932)
                        break;
                }
                l_939 = (safe_add_func_uint16_t_u_u(((*l_935)--), (l_938[1][3][0] ^= (!g_888[2][0][2]))));
            }
            else
            {
                unsigned l_950[2];
                union U1 *l_962 = &g_282;
                int l_985 = 1L;
                int l_986 = 1L;
                int l_993[6][1] = {{0x074D7754L}, {0x074D7754L}, {0x074D7754L}, {0x074D7754L}, {0x074D7754L}, {0x074D7754L}};
                unsigned char l_1016 = 0x83L;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_950[i] = 4294967295UL;
                if (((g_940 != (void*)0) <= (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_946, ((0L == (safe_mod_func_uint32_t_u_u((p_19 ^ func_117(p_19, func_121(func_134(l_949), p_19, p_19, p_19))), 0xB4D23C5BL))) & l_950[1]))), g_3))))
                {
                    l_938[0][1][0] ^= 0x1C20C2E0L;
                    for (l_921 = 16; (l_921 >= 43); l_921 = safe_add_func_uint32_t_u_u(l_921, 8))
                    {
                        (*l_45) ^= (p_19 & (safe_mod_func_int32_t_s_s(p_19, (safe_sub_func_int16_t_s_s((+l_946), (safe_add_func_int32_t_s_s((p_19 != 1UL), p_19)))))));
                        l_938[1][3][0] ^= p_19;
                    }
                }
                else
                {
                    for (g_67 = 0; (g_67 != (-21)); g_67--)
                    {
                        union U1 **l_964 = &l_962;
                        (*l_964) = (g_963 = l_962);
                        (*l_45) = (safe_rshift_func_uint8_t_u_s((*g_54), 0));
                    }
                }
                for (g_143 = 0; (g_143 >= 56); g_143 = safe_add_func_uint32_t_u_u(g_143, 2))
                {
                    int *l_972 = &g_597[0][1][0];
                    int l_983 = 0xE80554DDL;
                    int l_988 = 0x390279D8L;
                    int l_991[3][7][3] = {{{1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}}, {{1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}}, {{1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}, {1L, 0x80C90788L, 9L}}};
                    int i, j, k;
                    (*l_45) = p_19;
                    if (((*l_972) |= (func_20(p_19, g_202[5][0][0], ((&g_873 == l_969[0]) & l_970), func_134(l_971), l_950[0]) & p_19)))
                    {
                        return (*g_40);
                    }
                    else
                    {
                        int *l_973 = &l_920[0];
                        int *l_974 = &l_938[0][3][0];
                        int l_975 = 0xC2AB98CEL;
                        int *l_976 = &g_282.f3;
                        int *l_977 = (void*)0;
                        int *l_978 = &l_920[0];
                        int *l_979 = &g_597[0][0][0];
                        int *l_980[1][9][7] = {{{&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}, {&g_3, &l_938[1][3][0], &g_3, (void*)0, &g_893[0], &l_938[3][4][0], (void*)0}}};
                        int l_987 = (-1L);
                        int i, j, k;
                        l_44 = &p_19;
                        g_994++;
                        if (p_19)
                            continue;
                    }
                    for (g_72 = 1; (g_72 > 39); ++g_72)
                    {
                        short l_1009[3];
                        char *l_1017 = (void*)0;
                        char *l_1018 = (void*)0;
                        char *l_1019 = &g_307[3].f2;
                        char *l_1020 = (void*)0;
                        unsigned short *l_1033 = &l_927[5];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1009[i] = 0xCA68L;
                        (*l_44) = 0x3DAA9346L;
                        (*l_44) |= (*l_972);
                        (*l_45) = ((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_950[1], (safe_add_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_1009[1], ((func_7(((func_7(p_19) | p_19) != ((g_1021 |= (safe_mod_func_int8_t_s_s(((((-4L) && ((*l_36) = ((func_7(((*l_36)--)) < (safe_mul_func_uint8_t_u_u(l_1009[0], 0x16L))) | (*l_972)))) > 9UL) >= l_1016), (*g_54)))) || (*g_54)))) & 0x5D34L) && p_19))), l_1009[2])) >= g_215), (-10L))))), g_186)) != (-3L));
                        l_938[0][5][0] ^= (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint8_t_u_s(2UL, func_7(((*l_48) = ((safe_add_func_uint32_t_u_u(func_7(p_19), ((0x31L < p_19) <= (safe_mod_func_int16_t_s_s(g_994, p_19))))) != (((*l_51) = (safe_add_func_int16_t_s_s(0xDFB4L, ((*l_1033) = 1UL)))) ^ 255UL)))))) || 0xF8L) | 0x0226DA56L))) & p_19), p_19));
                    }
                }
            }
        }
        else
        {
            int *l_1034 = &l_984;
            int l_1035 = (-2L);
            int *l_1036 = &l_920[0];
            int *l_1037 = &l_920[0];
            int *l_1038 = &g_46;
            int *l_1039 = &g_46;
            int *l_1040 = &l_990;
            int *l_1041 = &l_1035;
            int l_1042 = 7L;
            int *l_1043 = &g_893[0];
            int *l_1044 = &g_282.f3;
            int *l_1045[7] = {&l_992[0][7][2], &l_992[0][7][2], &l_992[5][2][0], &l_992[0][7][2], &l_992[0][7][2], &l_992[5][2][0], &l_992[0][7][2]};
            int i;
            ++l_1048;
        }
        if ((l_1051 >= ((l_990 == func_7((*l_45))) > (*l_45))))
        {
            int l_1059 = 0x8FE7B996L;
            short l_1090 = 0x7CF4L;
            int l_1097 = (-1L);
            int l_1113 = 0x64258B57L;
            unsigned char l_1124 = 3UL;
            unsigned l_1145 = 0xDA657496L;
            int l_1152 = 0x24D687A4L;
            int l_1157 = 0L;
            int l_1158[1][7][9] = {{{(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}, {(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}, {(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}, {(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}, {(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}, {(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}, {(-4L), 1L, (-4L), 0xADC2E7A7L, (-1L), 1L, (-3L), (-3L), 1L}}};
            unsigned l_1159 = 4294967295UL;
            union U2 *l_1167 = &g_307[9];
            union U4 *l_1179 = (void*)0;
            union U0 l_1190 = {0};
            int *l_1204 = &l_989;
            int *l_1205 = (void*)0;
            int *l_1206[9] = {&g_46, &l_981, &g_46, &l_981, &g_46, &l_981, &g_46, &l_981, &g_46};
            int i, j, k;
            for (l_921 = 0; (l_921 < 56); l_921++)
            {
                unsigned short l_1058 = 0x8836L;
                for (g_49 = 0; (g_49 < 60); ++g_49)
                {
                    for (g_72 = 0; (g_72 > 34); g_72 = safe_add_func_uint32_t_u_u(g_72, 7))
                    {
                        (*l_45) = p_19;
                        (*l_45) ^= p_19;
                    }
                    if (l_1058)
                        continue;
                }
                l_1060 &= l_1059;
                if (l_1058)
                    break;
            }
            if (((*l_45) = (l_1059 ^= l_1051)))
            {
                unsigned l_1061 = 4294967295UL;
                unsigned short **l_1064 = (void*)0;
                unsigned char *l_1080 = &g_55;
                int l_1081 = 0xBCB95002L;
                unsigned **l_1104 = (void*)0;
                union U2 ***l_1120 = &g_940;
                if ((l_1059 <= ((*l_52) ^= (((l_1061 != (g_403 >= (safe_mod_func_uint32_t_u_u(1UL, ((!(&g_109 != (g_1065 = &g_675))) | p_19))))) <= (g_888[3][8][0] | (safe_lshift_func_int16_t_s_s(0x5B0FL, p_19)))) < g_675))))
                {
                    short l_1078 = 3L;
                    unsigned l_1098 = 0xD30E06F9L;
                    int *l_1101 = (void*)0;
                    for (g_627.f2 = 0; (g_627.f2 <= 0); g_627.f2 += 1)
                    {
                        int i;
                        (*g_40) = (void*)0;
                        g_293[(g_627.f2 + 3)] = 6L;
                    }
                    for (g_282.f2 = 0; (g_282.f2 <= 56); ++g_282.f2)
                    {
                        unsigned l_1079 = 4294967294UL;
                        l_1081 ^= (safe_mul_func_uint8_t_u_u((((*g_1065) = (*g_1065)) <= func_20(l_981, (((safe_lshift_func_uint16_t_u_u((l_1061 > 0UL), p_19)) != p_19) && (l_1078 < func_20(l_1078, l_1079, l_989, &g_994, p_19))), p_19, l_1080, p_19)), l_992[0][7][2]));
                        if (p_19)
                            break;
                    }
                    for (g_53 = 0; (g_53 < 17); g_53 = safe_add_func_uint8_t_u_u(g_53, 9))
                    {
                        char l_1091 = 0x1FL;
                        int *l_1092 = &g_3;
                        int *l_1093 = (void*)0;
                        int *l_1094 = &l_990;
                        int *l_1095 = (void*)0;
                        int *l_1096[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1096[i] = &l_982;
                        (*l_45) = (safe_lshift_func_int8_t_s_u(((g_994 != (((!255UL) > p_19) < (p_19 && (safe_add_func_uint8_t_u_u((*g_54), p_19))))) ^ 9UL), p_19));
                        l_45 = &p_19;
                        l_1098--;
                        l_984 |= p_19;
                    }
                    return l_1101;
                }
                else
                {
                    unsigned short l_1114 = 0x5C02L;
                    int *l_1117[7] = {&l_989, &l_989, &l_989, &l_989, &l_989, &l_989, &l_989};
                    int i;
                    p_19 = p_19;
                    (*g_873) = (void*)0;
                    if ((~(safe_sub_func_int16_t_s_s(((void*)0 == l_1104), (safe_mul_func_uint16_t_u_u((g_1046 != l_946), ((safe_lshift_func_int8_t_s_s(0x9DL, p_19)) || (p_19 && ((safe_mod_func_uint8_t_u_u(0x58L, 251UL)) >= 1L)))))))))
                    {
                        int *l_1111 = &g_597[0][2][3];
                        int *l_1112[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1112[i] = &l_992[3][6][0];
                        l_1114++;
                    }
                    else
                    {
                        (*g_40) = &p_19;
                        return l_1118;
                    }
                }
                (*l_45) &= ((*l_1118) &= (((*l_1120) = l_1119) == &g_941));
                for (g_46 = 14; (g_46 > 16); g_46++)
                {
                    if (p_19)
                        break;
                }
            }
            else
            {
                char l_1141 = (-2L);
                int l_1149 = (-6L);
                int l_1151 = 0x1543A829L;
                int l_1154[5][6] = {{0xDB7105C7L, 0L, 1L, 0L, 0xDB7105C7L, 0xC2E12304L}, {0xDB7105C7L, 0L, 1L, 0L, 0xDB7105C7L, 0xC2E12304L}, {0xDB7105C7L, 0L, 1L, 0L, 0xDB7105C7L, 0xC2E12304L}, {0xDB7105C7L, 0L, 1L, 0L, 0xDB7105C7L, 0xC2E12304L}, {0xDB7105C7L, 0L, 1L, 0L, 0xDB7105C7L, 0xC2E12304L}};
                int l_1156 = 4L;
                unsigned l_1162[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1162[i] = 0xC1B3FB50L;
                p_19 = (l_1123 <= l_1124);
                for (g_282.f2 = 0; (g_282.f2 <= 0); g_282.f2 += 1)
                {
                    unsigned short *l_1142 = (void*)0;
                    unsigned short *l_1143 = &g_675;
                    short *l_1146 = &g_215;
                    int *l_1147 = &l_1113;
                    int l_1150 = 0L;
                    int l_1155[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1155[i] = (-7L);
                    for (g_46 = 0; (g_46 >= 0); g_46 -= 1)
                    {
                        return &g_597[1][0][1];
                    }
                    (*l_1147) ^= (((*g_1065) <= ((*l_1146) ^= ((!(*g_1065)) && (safe_sub_func_uint16_t_u_u((*l_1118), ((((void*)0 != l_1127) > l_1124) || (safe_add_func_int16_t_s_s((func_20((safe_add_func_uint16_t_u_u(((void*)0 == &g_561), (((*l_36) = (safe_rshift_func_int8_t_s_s(((g_1144 ^= ((*l_1143) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((func_117(p_19, l_1140[1][2]) > 0xD4L), 5)), l_1141)), g_72)))) | 0xBC9DL), p_19))) ^ p_19))), l_1145, p_19, &g_53, g_994) || p_19), g_282.f3)))))))) | p_19);
                    for (l_946 = 2; (l_946 <= 9); l_946 += 1)
                    {
                        int *l_1148[6][10] = {{&g_597[0][2][3], &l_1097, &g_893[0], (void*)0, (void*)0, &l_1097, (void*)0, (void*)0, &g_893[0], &l_1097}, {&g_597[0][2][3], &l_1097, &g_893[0], (void*)0, (void*)0, &l_1097, (void*)0, (void*)0, &g_893[0], &l_1097}, {&g_597[0][2][3], &l_1097, &g_893[0], (void*)0, (void*)0, &l_1097, (void*)0, (void*)0, &g_893[0], &l_1097}, {&g_597[0][2][3], &l_1097, &g_893[0], (void*)0, (void*)0, &l_1097, (void*)0, (void*)0, &g_893[0], &l_1097}, {&g_597[0][2][3], &l_1097, &g_893[0], (void*)0, (void*)0, &l_1097, (void*)0, (void*)0, &g_893[0], &l_1097}, {&g_597[0][2][3], &l_1097, &g_893[0], (void*)0, (void*)0, &l_1097, (void*)0, (void*)0, &g_893[0], &l_1097}};
                        char l_1153 = 3L;
                        int i, j;
                        (*l_45) ^= p_19;
                        l_1159--;
                        p_19 ^= (((*g_54) && (-1L)) | func_7(((l_1162[0]--) >= (*g_54))));
                    }
                }
                if (((safe_rshift_func_int16_t_s_u(g_66, (*g_1065))) > (*l_1118)))
                {
                    union U4 *l_1178 = &g_865[6][5];
                    (*g_940) = l_1167;
                    if (((safe_lshift_func_uint16_t_u_s((*g_1065), 1)) >= 0UL))
                    {
                        (*l_45) &= (safe_mul_func_uint16_t_u_u(func_7(((*l_48) = (p_19 | p_19))), (1L <= ((!(*l_1118)) > (safe_mul_func_uint8_t_u_u((--(*g_54)), 0UL))))));
                        (*g_873) = l_1176;
                    }
                    else
                    {
                        int l_1177 = 9L;
                        (*l_45) ^= (((l_1177 &= 1L) >= func_7((((*g_873) = l_1178) == l_1179))) != (safe_lshift_func_int8_t_s_s(g_148, 4)));
                        (*l_1118) = p_19;
                    }
                }
                else
                {
                    int l_1200 = 0xD01FB39DL;
                    p_19 = (safe_add_func_uint16_t_u_u(((l_1184 == (void*)0) && ((safe_sub_func_uint32_t_u_u(3UL, (*l_1118))) ^ (safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u((*g_1065), (g_888[3][8][0] < (p_19 ^ g_269)))))))), (*l_1118)));
                    for (g_223 = 0; (g_223 != (-19)); g_223 = safe_sub_func_int16_t_s_s(g_223, 5))
                    {
                        (*g_40) = &p_19;
                        (*l_1118) &= p_19;
                        if (p_19)
                            continue;
                        (*g_40) = (*g_40);
                    }
                    (*l_45) |= ((*l_1118) = (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(251UL)), (l_1113 = (safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((*g_1065) &= (*l_1118)) != l_1200), l_1201)), 4294967292UL))))));
                    for (l_1051 = 0; (l_1051 != 59); ++l_1051)
                    {
                        return l_1205;
                    }
                }
            }
            return l_1207;
        }
        else
        {
            volatile int **l_1210 = &g_550;
            for (l_970 = 0; (l_970 != 22); ++l_970)
            {
                if ((*l_1118))
                    break;
            }
            (*l_1210) = &g_293[4];
        }
    }
    if (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((l_1217 >= p_19), (-1L))), 2)), 11)) ^ (*g_1065)))
    {
        int *l_1218 = &l_920[0];
        (*l_1207) = p_19;
        l_1218 = &l_1060;
        (*g_940) = l_1219;
        p_19 = p_19;
    }
    else
    {
        union U3 **l_1222 = &g_626[0];
        int l_1223[9][1] = {{0x33844854L}, {0x33844854L}, {0x33844854L}, {0x33844854L}, {0x33844854L}, {0x33844854L}, {0x33844854L}, {0x33844854L}, {0x33844854L}};
        union U0 *l_1250 = &g_113;
        int l_1278 = (-7L);
        unsigned char *l_1291 = &g_994;
        union U2 *l_1292 = &g_307[3];
        int i, j;
        (*g_873) = l_1176;
        (*g_40) = &l_920[0];
        if (((65527UL >= 0L) <= ((*g_41) |= ((safe_lshift_func_int16_t_s_s(func_7(p_19), (l_1222 != l_1222))) | 0xCF829B77L))))
        {
            (*l_1207) ^= l_1223[4][0];
        }
        else
        {
            int l_1230 = 9L;
            int l_1231 = 0xFBBD68E3L;
            int l_1232 = 0x4B7E86C4L;
            int l_1233 = (-9L);
            int l_1234 = 0xCA625ADDL;
            int l_1235 = 0xF81A9C51L;
            short l_1236 = 0x708CL;
            int l_1237 = 0x090981DFL;
            int l_1238 = (-8L);
            unsigned l_1257 = 0xBF6644DDL;
            short *l_1277[8][6] = {{&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}, {&l_1236, &g_485, (void*)0, &g_215, &g_69[3][0], &g_215}};
            union U4 ***l_1288 = (void*)0;
            union U4 ****l_1290 = &l_1289[9][0];
            union U2 ***l_1302 = &l_1119;
            unsigned char l_1313 = 0UL;
            unsigned l_1326 = 0x9C109CBBL;
            int *l_1327[8][2][8] = {{{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}, {{&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}, {&l_1060, &l_1238, &l_920[0], &l_920[0], &l_1238, &l_1060, &l_1238, &l_920[0]}}};
            int i, j, k;
            for (g_72 = 0; (g_72 <= 9); g_72 += 1)
            {
                union U1 **l_1224[8][6] = {{&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}, {&g_963, &g_963, &g_963, &g_963, &g_963, &g_963}};
                int *l_1225 = &g_1046;
                int *l_1226 = (void*)0;
                int *l_1227 = &l_1223[4][0];
                int *l_1228 = &g_3;
                int *l_1229[8][8] = {{&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}, {&l_920[1], &l_920[0], &l_1060, (void*)0, (void*)0, &l_1060, &l_920[0], &l_920[1]}};
                union U0 ******l_1246 = &g_561;
                unsigned char *l_1268 = &g_994;
                int i, j;
                g_963 = &g_282;
                g_1239--;
                for (l_1233 = 0; (l_1233 <= 9); l_1233 += 1)
                {
                    short l_1253 = (-1L);
                    int l_1267 = (-6L);
                    int i;
                    for (l_1201 = 0; (l_1201 <= 1); l_1201 += 1)
                    {
                        unsigned **l_1254[7] = {(void*)0, (void*)0, &l_47, (void*)0, (void*)0, &l_47, (void*)0};
                        short *l_1260[4];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_1260[i] = &l_1236;
                        (*l_1225) ^= (((safe_mul_func_uint16_t_u_u(g_70[(l_1201 + 7)], g_14[(l_1201 + 5)][(l_1201 + 4)])) >= (g_597[l_1201][l_1201][(l_1201 + 3)] < p_19)) & (+(safe_sub_func_uint32_t_u_u((l_1246 == (void*)0), ((*g_41) &= ((*l_1227) = ((*l_1207) = ((l_1247 < 0x9739E996L) < (safe_sub_func_uint16_t_u_u(func_117(l_1233, l_1250), p_19))))))))));
                        (**g_40) = (**g_40);
                        l_1229[(l_1201 + 2)][(l_1201 + 1)] = (*g_40);
                        (*g_41) = (safe_add_func_int8_t_s_s(0x0EL, ((((*g_54) ^= l_1253) == ((void*)0 != l_1254[1])) >= ((safe_sub_func_uint8_t_u_u(p_19, ((*l_52) = (func_7(l_1257) > (((safe_add_func_int16_t_s_s((g_485 = 0x5FF3L), (safe_add_func_int16_t_s_s((g_69[8][0] = (!p_19)), p_19)))) || p_19) & (*g_1065)))))) >= g_293[5]))));
                    }
                    (*l_1225) ^= (safe_add_func_int16_t_s_s(func_7(((safe_mul_func_uint8_t_u_u((l_1267 = 0x5EL), (l_1235 = (((&g_14[1][5] != ((*l_28) = l_1268)) & func_7(g_70[g_72])) >= (safe_mod_func_uint16_t_u_u(g_70[l_1233], g_70[g_72])))))) & ((++(*l_52)) & (safe_rshift_func_int8_t_s_s(g_403, (*l_1207)))))), 0xA8B6L));
                    if ((*l_1228))
                        break;
                    (**g_40) = (*l_1225);
                }
            }
            if ((safe_mul_func_uint8_t_u_u(((l_1223[4][0] = 0x2262L) & func_20(l_1278, (l_1235 == (safe_add_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(l_1236, func_7(l_1278))) ^ (!(safe_unary_minus_func_uint32_t_u((~(safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(0xD9B3L, ((l_1288 != ((*l_1290) = l_1289[5][0])) > l_1278))), p_19))))))) == l_1234), p_19))), (*g_54), l_1291, p_19)), p_19)))
            {
                (*g_40) = &p_19;
            }
            else
            {
                union U2 **l_1293 = &l_1219;
                int *l_1294 = &g_597[0][2][3];
                int *l_1295[1][10][9] = {{{&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}, {&g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237, &g_893[0], &g_893[0], &l_1237}}};
                union U2 ****l_1303 = &l_1302;
                char *l_1312 = &g_12;
                int i, j, k;
                l_1233 ^= ((((*g_940) = l_1292) == ((*l_1293) = (void*)0)) >= (((p_19 || p_19) == func_130((*****g_561), &g_14[5][4])) ^ ((*l_1294) = (func_7(func_7((((((0x0DE2L ^ (0x9703A697L || 0x6D157369L)) > g_994) != 1UL) | 0xCAL) ^ l_1235))) && p_19))));
                l_1223[7][0] &= p_19;
                p_19 = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((&g_293[5] != (void*)0), 10)) || (((*l_1303) = l_1302) == &l_1119)), (~(safe_mul_func_int16_t_s_s(l_1223[4][0], ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s(((*l_1312) = p_19), p_19)) < ((*l_45) ^= (p_19 == l_1313))) < l_1313), p_19)), p_19)) < 0xEEL))))));
            }
            l_920[0] |= (safe_sub_func_uint8_t_u_u(0xE0L, func_20(((*l_1207) < p_19), p_19, (safe_sub_func_uint16_t_u_u((p_19 >= (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s(((((*l_52) = ((p_19 == (((func_117((l_1223[4][0] = ((l_1326 = (*l_45)) > p_19)), l_1250) | p_19) >= 0x8C07L) || 0xAC08L)) ^ 0L)) >= (*l_45)) != 0x52L), p_19)) ^ 0x4CFBL), l_1278)), l_1278))), (*g_1065))), &l_1313, g_70[8])));
        }
    }
    return l_1328;
}







static int func_20(int p_21, unsigned short p_22, unsigned char p_23, unsigned char * p_24, unsigned p_25)
{
    int *l_56 = &g_3;
    int *l_57 = &g_46;
    int *l_58 = (void*)0;
    int *l_59 = (void*)0;
    int *l_60 = &g_46;
    int l_61 = 0x6A10B913L;
    int *l_62 = &g_46;
    int *l_63 = &g_3;
    int *l_64[9][1][4] = {{{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}, {{&g_3, &g_3, (void*)0, &g_3}}};
    char l_71 = 4L;
    unsigned char **l_99 = &g_54;
    unsigned char *l_100 = &g_14[5][4];
    unsigned l_101 = 0UL;
    int i, j, k;
    --g_72;
    (*g_319) = func_75((safe_rshift_func_int8_t_s_s(((0x02AC2FF0L || (safe_add_func_uint8_t_u_u((p_23 ^= (*p_24)), (safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(func_7((safe_mod_func_int8_t_s_s((func_7(g_70[8]) && func_7(g_70[3])), (*g_54)))), 5)), ((*l_100) = func_7(((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((&g_54 != l_99), (*p_24))) > (*l_56)) || p_22), p_25)), p_21)) & (*p_24)))))), (*l_56))), (*l_57)))))) ^ 0xFCB947DAL), 5)), p_25, l_101);
    return p_25;
}







static union U0 * func_75(short p_76, int p_77, unsigned char p_78)
{
    union U0 *l_112 = &g_113;
    int l_128 = 0xEA77C7A1L;
    for (g_49 = (-23); (g_49 > 41); g_49 = safe_add_func_uint8_t_u_u(g_49, 7))
    {
        short l_120 = (-1L);
        int l_899 = 0xCDAAE026L;
        int *l_902 = &g_893[0];
        for (g_72 = (-15); (g_72 < 40); ++g_72)
        {
            unsigned short *l_108 = &g_109;
            unsigned *l_114 = &g_37;
            char *l_129 = &g_12;
            int *l_892 = &g_893[0];
        }
        (*l_902) = func_7(l_128);
    }
    return l_112;
}







static char func_117(int p_118, union U0 * p_119)
{
    union U0 l_654 = {0};
    int l_655 = 1L;
    union U2 *l_668 = &g_307[7];
    union U2 **l_667 = &l_668;
    union U2 ***l_666 = &l_667;
    unsigned char *l_673 = &g_55;
    unsigned *l_674 = &g_282.f2;
    int l_708 = (-8L);
    int l_710 = 0x615F7628L;
    int l_711 = 0xFB8CC385L;
    int l_714 = 0xF0AFC71EL;
    int l_717 = 0L;
    int l_718[5][5] = {{3L, 0xC4BD1636L, 0xDA2A7721L, 7L, (-1L)}, {3L, 0xC4BD1636L, 0xDA2A7721L, 7L, (-1L)}, {3L, 0xC4BD1636L, 0xDA2A7721L, 7L, (-1L)}, {3L, 0xC4BD1636L, 0xDA2A7721L, 7L, (-1L)}, {3L, 0xC4BD1636L, 0xDA2A7721L, 7L, (-1L)}};
    unsigned char l_719 = 0xDFL;
    int *l_733 = (void*)0;
    char l_780 = (-1L);
    int l_787[3];
    int l_809 = 0xD5785CE5L;
    short l_883 = 0x6D7AL;
    short l_884 = 0x7406L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_787[i] = (-10L);
    if (l_655)
    {
        unsigned char *l_680 = (void*)0;
        short *l_689[4];
        unsigned *l_692 = &g_148;
        unsigned short *l_693 = &g_675;
        unsigned short *l_694 = &g_143;
        int l_697 = 0x02033CA4L;
        unsigned l_699 = 1UL;
        int l_707 = 0L;
        int l_709 = 4L;
        int l_712 = 0x18B2978EL;
        int l_713 = 0L;
        int l_715 = (-6L);
        int l_716[6][5] = {{1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L}, {1L, 1L, 1L, 1L, 1L}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_689[i] = &g_69[1][0];
        if (((safe_sub_func_uint16_t_u_u(((*l_694) = ((*l_693) = ((safe_mod_func_int32_t_s_s(p_118, ((*l_692) = (safe_mul_func_uint16_t_u_u(l_655, (func_7((safe_mul_func_int8_t_s_s((p_118 || (safe_sub_func_uint32_t_u_u(0UL, (p_118 && ((*l_692) &= (safe_lshift_func_uint8_t_u_u((((g_485 |= 4L) != (safe_add_func_uint32_t_u_u(p_118, 0x22FCA3BBL))) ^ 0x6CL), 6))))))), g_353))) || 0x7CEAD608L)))))) | 0UL))), 0x8B61L)) < l_655))
        {
            unsigned short l_695 = 0x0D99L;
            int l_696 = 0x84274B49L;
            int *l_698[2];
            int i;
            for (i = 0; i < 2; i++)
                l_698[i] = &g_597[1][2][3];
            l_696 ^= (~((0x8F33L > p_118) & func_7(l_695)));
            p_118 = l_695;
            l_699 &= l_697;
        }
        else
        {
            int *l_700 = &l_697;
            int *l_701 = (void*)0;
            int *l_702 = &g_282.f3;
            int *l_703 = &g_597[1][1][5];
            int *l_704 = &l_655;
            int *l_705 = (void*)0;
            int *l_706[8] = {&g_597[1][2][2], &l_697, &g_597[1][2][2], &l_697, &g_597[1][2][2], &l_697, &g_597[1][2][2], &l_697};
            int i;
            ++l_719;
        }
        return g_53;
    }
    else
    {
        int l_728 = 0x2E9ABF09L;
        int l_732 = (-1L);
        for (l_714 = 9; (l_714 >= 0); l_714 -= 1)
        {
            int *l_722 = &l_718[2][1];
            int *l_723 = (void*)0;
            int *l_724 = (void*)0;
            int *l_725 = &g_597[0][2][3];
            int *l_726 = &l_655;
            int *l_727[9] = {&l_710, &l_710, &l_710, &l_710, &l_710, &l_710, &l_710, &l_710, &l_710};
            unsigned l_729 = 0x34AEBC7EL;
            int i;
            l_729--;
            if (g_70[l_714])
                continue;
        }
        l_732 &= func_7(l_728);
    }
    p_118 = 5L;
    l_733 = &p_118;
    for (g_55 = 0; (g_55 != 3); g_55 = safe_add_func_uint8_t_u_u(g_55, 5))
    {
        unsigned l_754 = 4294967286UL;
        int l_771 = 0x360FC2C0L;
        int l_772[6] = {0x1A13EE90L, 0x1A13EE90L, 0x16B6D94CL, 0x1A13EE90L, 0x1A13EE90L, 0x16B6D94CL};
        short l_805 = (-1L);
        int l_813 = 0x7B18F230L;
        union U4 **l_877 = &g_874;
        int l_882[9][3][6] = {{{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}, {{(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}, {(-5L), (-5L), 0xB3EAFBDEL, (-1L), 0x8BEA9561L, 0xBFAB034AL}}};
        char l_886[9][6] = {{0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}, {0L, (-1L), 0x8AL, (-1L), 0L, 0xFAL}};
        unsigned char l_889 = 249UL;
        int i, j, k;
    }
    return g_627.f0;
}







static union U0 * func_121(unsigned char * p_122, int p_123, unsigned char p_124, int p_125)
{
    union U0 l_133 = {0};
    unsigned short *l_141 = (void*)0;
    unsigned short *l_142 = &g_143;
    int l_144 = 2L;
    unsigned char **l_460 = &g_54;
    union U1 *l_609 = &g_282;
    int l_651 = 0x5F34C6B3L;
    if ((p_124 >= (((func_130(l_133, ((*l_460) = func_134(func_136((p_124 || ((safe_unary_minus_func_uint32_t_u((((*p_122) < (*p_122)) >= ((p_125 ^ (((*l_142) = func_7(p_123)) <= 0x9491L)) & l_144)))) | l_144)), g_14[3][1], (*g_54))))) || 0xE411L) <= l_144) && g_69[8][0])))
    {
        unsigned l_582 = 3UL;
        unsigned short l_587 = 0xC825L;
        int *l_592 = &g_46;
        char *l_595 = &g_67;
        int *l_596 = &g_597[0][2][3];
        union U0 *l_612[2];
        unsigned *l_615 = &g_49;
        unsigned **l_614 = &l_615;
        unsigned ***l_616 = &l_614;
        unsigned ***l_617 = &g_218;
        int i;
        for (i = 0; i < 2; i++)
            l_612[i] = (void*)0;
        (*l_596) |= ((safe_mul_func_uint16_t_u_u(l_582, (safe_rshift_func_int16_t_s_u(func_7(((safe_rshift_func_int8_t_s_u(((*l_595) = ((l_587 != (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(l_144, (((*l_592) &= 0x52B0EFCAL) > 0x0AAD08C8L))), 1)) < (safe_sub_func_int16_t_s_s(g_67, (((*l_142) |= g_282.f1) | func_7(p_125))))) & p_124)) && (*p_122))), 7)) ^ p_124)), 13)))) & l_582);
        for (p_123 = 0; (p_123 <= 6); p_123 += 1)
        {
            unsigned l_598 = 4294967287UL;
            (*l_592) = (-4L);
            l_598--;
            p_125 = (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(0xA59DL, (+l_598))), ((**l_460) |= (safe_mod_func_int32_t_s_s(1L, (~(safe_add_func_uint32_t_u_u((&g_282 != l_609), l_598))))))));
            for (l_582 = 1; (l_582 <= 6); l_582 += 1)
            {
                unsigned ***l_613 = &g_218;
                for (g_65 = 6; (g_65 >= 0); g_65 -= 1)
                {
                    int *l_610 = &g_46;
                    l_610 = l_592;
                    for (l_144 = 0; (l_144 <= 0); l_144 += 1)
                    {
                        union U0 *l_611 = &g_113;
                        int i, j, k;
                        g_597[(l_144 + 1)][(l_144 + 1)][p_123] = g_14[g_65][l_582];
                        (*g_40) = &p_125;
                        (**g_40) = 0x3785D855L;
                        return l_611;
                    }
                    return l_612[1];
                }
                (*l_592) = (((*l_613) = (void*)0) != (void*)0);
            }
        }
        (*l_596) = ((((*l_617) = ((*l_616) = l_614)) != (void*)0) && (0x8A68A76CL <= p_124));
    }
    else
    {
        union U0 *l_628 = &g_113;
        for (g_67 = (-9); (g_67 == 25); g_67 = safe_add_func_int8_t_s_s(g_67, 1))
        {
            union U0 *l_621 = &l_133;
            union U0 *l_622 = &l_133;
            union U0 *l_623 = &l_133;
            union U3 *l_624 = (void*)0;
            for (g_282.f2 = 0; (g_282.f2 <= 0); g_282.f2 += 1)
            {
                union U0 *l_620 = &l_133;
                return &g_113;
            }
            for (p_123 = 0; (p_123 <= 0); p_123 += 1)
            {
                union U3 **l_625[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_625[i] = &l_624;
                g_521[p_123] = &p_125;
                if (g_69[(p_123 + 7)][p_123])
                    break;
                g_626[1] = l_624;
                for (g_403 = 0; (g_403 <= 0); g_403 += 1)
                {
                    (*g_40) = &l_144;
                }
            }
            return l_628;
        }
        for (g_403 = 0; (g_403 <= 9); g_403 += 1)
        {
            unsigned l_629 = 0x069B3F24L;
            ++l_629;
            for (g_282.f1 = 0; (g_282.f1 <= 0); g_282.f1 += 1)
            {
                unsigned *l_634 = &g_148;
                int l_637 = 0x9424C8E7L;
                int *l_638 = (void*)0;
                p_125 ^= ((safe_mul_func_uint16_t_u_u(g_72, (((((-4L) & l_144) && 1UL) & func_7(((*l_634) ^= 4294967295UL))) > p_123))) > ((safe_lshift_func_int8_t_s_u(((func_7(l_637) > p_124) || (-1L)), l_629)) != 0x8C6440ADL));
                if (p_123)
                    break;
                for (p_124 = 0; (p_124 <= 9); p_124 += 1)
                {
                    union U0 *l_652 = &g_113;
                    int i, j, k;
                    if (func_7(g_202[p_124][g_282.f1][(g_282.f1 + 3)]))
                    {
                        int i, j, k;
                        l_651 ^= (safe_mod_func_int32_t_s_s(0x614DC6E0L, (safe_mod_func_int16_t_s_s((func_7(func_7((safe_mul_func_uint8_t_u_u(func_7(g_202[p_124][g_282.f1][g_282.f1]), (0x98L == (safe_sub_func_int8_t_s_s(func_7(((*l_634) = (p_125 && (safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(p_124, ((l_629 ^ g_202[p_124][g_282.f1][(g_282.f1 + 3)]) >= func_7(l_144)))) <= g_3), g_202[p_124][g_282.f1][(g_282.f1 + 3)]))))), p_124))))))) | 0xC6C5L), l_144))));
                    }
                    else
                    {
                        if (p_125)
                            break;
                    }
                    return l_652;
                }
            }
        }
        for (p_123 = 0; (p_123 <= 0); p_123 += 1)
        {
            union U0 *l_653 = &g_113;
            return l_653;
        }
        (*g_40) = &g_3;
    }
    return &g_113;
}







static unsigned short func_130(union U0 p_131, unsigned char * p_132)
{
    int l_461 = 0x029BF50BL;
    int l_463 = 0x349396FFL;
    int l_499[1];
    union U0 *l_523 = &g_113;
    char l_543 = 0xD2L;
    char l_545 = (-1L);
    union U0 ***l_570[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    union U0 *l_573[4][2] = {{&g_113, &g_113}, {&g_113, &g_113}, {&g_113, &g_113}, {&g_113, &g_113}};
    int *l_579 = &l_463;
    int i, j;
    for (i = 0; i < 1; i++)
        l_499[i] = 0xB931A71AL;
    if (l_461)
    {
        char *l_462[5] = {&g_12, &g_12, &g_12, &g_12, &g_12};
        int l_464 = (-1L);
        int l_465 = 5L;
        unsigned char *l_466 = (void*)0;
        unsigned char *l_467 = (void*)0;
        unsigned char *l_470 = &g_282.f1;
        int *l_471 = &l_464;
        short l_481 = 0L;
        unsigned *l_482 = &g_148;
        short *l_483 = &g_69[1][0];
        short *l_484 = &g_485;
        unsigned short l_488[6][2][5] = {{{0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}, {0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}}, {{0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}, {0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}}, {{0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}, {0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}}, {{0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}, {0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}}, {{0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}, {0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}}, {{0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}, {0x9494L, 4UL, 0x15F2L, 0xC3C6L, 0xC3C6L}}};
        int i, j, k;
        (*g_40) = (*g_40);
        (*l_471) = ((l_463 = g_67) != ((*l_470) = (++g_53)));
        (*l_471) = (func_7((((safe_add_func_uint16_t_u_u(((*l_471) >= (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint8_t_u_s((*l_471), 7)) || 0UL))), 3)), 4294967286UL))), (6UL != g_215))) & l_481) == ((*l_484) = (0x0A1CL >= (((*l_483) = func_7(((*l_482) ^= 0x9A8BA244L))) & (*l_471)))))) < l_461);
        if ((safe_mod_func_int32_t_s_s(l_488[5][1][0], 0x0E585CE4L)))
        {
            int *l_504[4] = {&g_3, &l_465, &g_3, &l_465};
            int i;
            for (g_148 = (-25); (g_148 >= 27); g_148 = safe_add_func_int8_t_s_s(g_148, 1))
            {
                unsigned short *l_495 = &l_488[5][0][0];
                int l_498[3][6][5] = {{{0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}}, {{0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}}, {{0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}, {0xCD3446A8L, (-10L), (-2L), (-10L), 0xCD3446A8L}}};
                int i, j, k;
                l_499[0] |= ((safe_add_func_uint32_t_u_u(l_463, (g_148 < l_463))) >= ((safe_lshift_func_uint16_t_u_s(((*l_495) = l_461), (+(safe_sub_func_uint16_t_u_u(1UL, l_461))))) != l_498[0][4][0]));
            }
            l_465 = (((*l_471) = (l_499[0] > ((++(*g_54)) ^ (safe_rshift_func_uint16_t_u_u(g_68, 1))))) ^ 0x98C10640L);
        }
        else
        {
            char l_507 = (-2L);
            unsigned *l_511 = &g_282.f2;
            if ((safe_lshift_func_int16_t_s_s(((0xE075L ^ l_507) & ((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(g_223)), ((*l_482) = 4294967295UL))) > ((*l_511) = l_507))), 6)))
            {
                unsigned char l_522 = 5UL;
                for (g_55 = 0; (g_55 != 51); ++g_55)
                {
                    unsigned short *l_514 = &l_488[5][1][0];
                    int l_520[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_520[i] = (-1L);
                }
            }
            else
            {
                unsigned short l_531 = 0xA802L;
                for (l_507 = 0; (l_507 <= 6); l_507 += 1)
                {
                    int *l_526 = &g_46;
                    int *l_527 = (void*)0;
                    int *l_528 = &g_46;
                    int *l_529 = &l_499[0];
                    int *l_530[5] = {&l_499[0], (void*)0, &l_499[0], (void*)0, &l_499[0]};
                    int i;
                    (*l_471) ^= (l_523 == (void*)0);
                    if (g_293[l_507])
                        continue;
                    (*l_471) |= (safe_add_func_uint16_t_u_u(g_14[0][0], (+l_463)));
                    l_531++;
                    for (g_215 = 0; (g_215 <= 0); g_215 += 1)
                    {
                        union U1 *l_535[2][3] = {{&g_282, (void*)0, &g_282}, {&g_282, (void*)0, &g_282}};
                        union U1 **l_534 = &l_535[1][2];
                        int i, j;
                        (*l_534) = &g_282;
                        (*l_528) |= ((*l_529) = func_7(g_69[l_507][g_215]));
                    }
                }
            }
            for (g_143 = 0; (g_143 <= 27); g_143 = safe_add_func_int32_t_s_s(g_143, 4))
            {
                (*l_471) &= (safe_rshift_func_int8_t_s_s((4L || l_507), 1));
                return g_70[3];
            }
        }
    }
    else
    {
        int *l_540 = &l_499[0];
        int *l_541 = (void*)0;
        int *l_542[9] = {(void*)0, &l_463, (void*)0, &l_463, (void*)0, &l_463, (void*)0, &l_463, (void*)0};
        char l_544 = 0x9AL;
        unsigned char l_546[10][4][6] = {{{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}, {{0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}, {0xA6L, 0xE4L, 0x82L, 255UL, 0x2AL, 0xBEL}}};
        unsigned l_549 = 8UL;
        unsigned ***l_557[7][5][2] = {{{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}, {{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}, {{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}, {{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}, {{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}, {{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}, {{&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}, {&g_218, (void*)0}}};
        unsigned ****l_556 = &l_557[0][1][1];
        union U0 *****l_560 = &g_317;
        union U0 *****l_563 = (void*)0;
        union U0 ******l_562 = &l_563;
        unsigned l_574 = 4294967288UL;
        int i, j, k;
        ++l_546[5][1][0];
        if (((*l_540) = l_549))
        {
            (*l_540) &= 0x0DC48ED9L;
        }
        else
        {
            volatile int **l_551 = &g_550;
            l_463 = l_463;
            (*l_551) = g_550;
        }
        if (func_7(((*l_540) != ((safe_rshift_func_uint16_t_u_s(((*p_132) != (safe_sub_func_int32_t_s_s((&g_218 != ((*l_556) = &g_218)), (safe_mod_func_int16_t_s_s(((*l_540) <= (g_143 = (1UL < ((((0x46601061L < ((l_560 = &g_317) != ((*l_562) = (g_561 = &g_317)))) && 9L) > l_463) ^ (-1L))))), g_68))))), 3)) < (*l_540)))))
        {
            (*g_40) = &l_499[0];
            (*l_540) = (**g_40);
            for (g_282.f0 = 0; (g_282.f0 > 26); g_282.f0++)
            {
                (*g_41) ^= (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(((void*)0 != l_570[4]), 0x2BL)), 5));
            }
        }
        else
        {
            union U0 *l_572 = &g_113;
            l_463 = ((*l_540) = l_545);
            l_573[0][0] = (l_572 = (g_571 = ((****g_561) = &p_131)));
        }
        --l_574;
    }
    l_499[0] = (!((void*)0 == &g_445));
    l_499[0] = func_7((safe_sub_func_int32_t_s_s(func_7(l_461), 1UL)));
    (*l_579) = l_499[0];
    return g_14[5][4];
}







static unsigned char * func_134(char * p_135)
{
    (*g_40) = (void*)0;
    return p_135;
}







static char * func_136(unsigned p_137, unsigned p_138, unsigned char p_139)
{
    unsigned *l_145 = (void*)0;
    int l_146[6] = {0x24318C78L, 0x23271FE8L, 0x24318C78L, 0x23271FE8L, 0x24318C78L, 0x23271FE8L};
    unsigned *l_147[5][8] = {{&g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49}, {&g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49}, {&g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49}, {&g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49}, {&g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49}};
    int l_155 = 0x4A855424L;
    unsigned char **l_181[1][10] = {{&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}};
    unsigned char **l_184[2][9][8] = {{{&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}}, {{&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}, {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54}}};
    int *l_203 = (void*)0;
    char *l_230 = &g_202[8][0][0];
    unsigned l_300 = 0x50EE98A5L;
    union U0 **l_313 = (void*)0;
    union U0 ***l_312 = &l_313;
    union U0 ****l_311 = &l_312;
    unsigned short l_340 = 0xD38EL;
    int *l_345 = &l_155;
    int *l_346[2][6] = {{&l_146[3], &l_146[1], (void*)0, (void*)0, &l_146[1], &l_146[3]}, {&l_146[3], &l_146[1], (void*)0, (void*)0, &l_146[1], &l_146[3]}};
    short l_347 = 0x15F2L;
    unsigned l_348 = 0xF958B15AL;
    unsigned ***l_366 = (void*)0;
    union U0 ***l_395 = &l_313;
    unsigned l_400 = 0x3DAB5C59L;
    union U0 *l_413 = (void*)0;
    unsigned l_416 = 0x60C207D0L;
    int l_443 = 0xDC856F24L;
    unsigned short l_453 = 9UL;
    unsigned l_459 = 0xC153FC05L;
    int i, j, k;
    if ((((((((-1L) || p_137) == (&p_139 == (void*)0)) || (l_146[3] = (g_148--))) ^ p_138) < (+((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(func_7(g_49), (l_155 || (safe_sub_func_int32_t_s_s(0xC7943488L, p_139))))) & 0xA1L), 0)) & 65535UL))) | 0x33L))
    {
        unsigned char *l_173 = &g_14[5][4];
        volatile int l_187 = 0x298E17D4L;
        unsigned *l_196[4][10] = {{&g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148}, {&g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148}, {&g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148}, {&g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148, &g_49, &g_148}};
        union U0 **l_237 = (void*)0;
        int l_261 = 0x4D604E7EL;
        union U1 *l_281[10][9] = {{&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}, {&g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282, &g_282}};
        short l_294 = (-1L);
        short l_295 = 0xD0CAL;
        int l_296 = 0x8CEC19D3L;
        int l_297 = (-3L);
        int l_298 = 0L;
        int l_299[4][2] = {{0xA6F61996L, 0xA6F61996L}, {0xA6F61996L, 0xA6F61996L}, {0xA6F61996L, 0xA6F61996L}, {0xA6F61996L, 0xA6F61996L}};
        union U2 *l_306 = &g_307[3];
        int i, j;
        for (g_148 = (-25); (g_148 != 36); ++g_148)
        {
            int *l_162 = &l_146[3];
            if (((void*)0 != &g_54))
            {
                char *l_163[3][1][5] = {{{&g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, &g_12, &g_12, &g_12}}};
                int l_164 = 0L;
                unsigned char **l_183 = &g_54;
                int i, j, k;
                for (p_137 = (-1); (p_137 >= 41); ++p_137)
                {
                    l_162 = l_162;
                    return l_163[2][0][2];
                }
                if (l_164)
                    continue;
                (*g_40) = l_162;
                if ((g_3 && ((-1L) <= p_139)))
                {
                    int l_178 = 1L;
                    int l_185 = 0x787CEB11L;
                    unsigned short *l_190 = &g_143;
                    for (g_65 = 0; (g_65 > 9); ++g_65)
                    {
                        int *l_167 = &l_155;
                        unsigned char **l_172[8] = {&g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54, &g_54};
                        int i;
                        (*l_167) ^= (**g_40);
                        (*l_167) ^= (safe_add_func_int8_t_s_s(p_138, (p_139 = (*g_54))));
                        (**g_40) = (safe_lshift_func_int8_t_s_s(1L, ((0x0EL < l_146[3]) >= ((g_54 = &g_14[5][4]) == (l_173 = (void*)0)))));
                        (*l_167) = ((**g_40) = ((p_139 = ((*g_54) |= 0x31L)) || (safe_mul_func_uint8_t_u_u((func_7((((safe_lshift_func_uint8_t_u_u(l_178, 3)) & (safe_add_func_int16_t_s_s((((&g_54 == (l_181[0][8] = l_172[1])) | (l_164 ^= (safe_unary_minus_func_int32_t_s((p_138 | func_7((l_185 = (l_183 != l_184[0][2][5])))))))) ^ g_65), g_69[0][0]))) < p_138)) >= (-8L)), 0xC9L))));
                    }
                    l_187 = g_186;
                    (*g_40) = (*g_40);
                    if ((l_164 || (((void*)0 == &g_12) & ((*l_190) ^= (safe_rshift_func_int8_t_s_u(g_53, 5))))))
                    {
                        if (p_138)
                            break;
                    }
                    else
                    {
                        int *l_191[5][8][6] = {{{&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}}, {{&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}}, {{&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}}, {{&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}}, {{&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}, {&g_46, &g_46, &g_46, &g_46, &g_46, &g_46}}};
                        int i, j, k;
                        g_46 ^= (**g_40);
                        (**g_40) = p_139;
                        (*l_162) = (65535UL && (-1L));
                        (**g_40) ^= (1UL > p_139);
                    }
                }
                else
                {
                    return &g_12;
                }
            }
            else
            {
                short l_199[4] = {1L, 0x3CA0L, 1L, 0x3CA0L};
                int l_200 = (-2L);
                int *l_201[6][10][4] = {{{&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}}, {{&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}}, {{&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}}, {{&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}}, {{&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}}, {{&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}, {&g_46, &g_46, (void*)0, &g_3}}};
                int i, j, k;
                g_202[8][0][0] ^= (g_46 ^= ((l_200 = (l_146[3] = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_155, ((((void*)0 == l_196[1][8]) > 0xF79AL) == (l_187 != ((&g_41 != &g_41) ^ p_138))))), ((((safe_rshift_func_int8_t_s_u((func_7(l_199[3]) || p_137), (*g_54))) < 0x3DC2D1DEL) || g_70[0]) != g_70[8]))))) <= p_139));
                l_155 ^= (-8L);
            }
            (*l_162) |= (0x8C16L != g_69[8][0]);
            (*g_40) = l_203;
            (*l_162) &= (safe_add_func_uint16_t_u_u(p_138, l_187));
        }
        if (p_139)
        {
            unsigned char **l_228 = &g_54;
            for (g_143 = 0; (g_143 <= 5); g_143 += 1)
            {
                int l_220 = 0x98EA977DL;
                int *l_233 = (void*)0;
                int *l_234 = &l_146[2];
                int i;
                if ((g_70[(g_143 + 3)] | g_70[g_143]))
                {
                    char *l_214 = &g_202[8][0][0];
                    int i;
                    g_46 ^= l_146[g_143];
                    l_187 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_137, 4)) && 0xFD13L), p_137)) < ((*l_214) ^= 0xCFL)), 11)), g_215));
                }
                else
                {
                    unsigned l_224[7][8][2] = {{{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}, {{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}, {{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}, {{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}, {{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}, {{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}, {{4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}, {4UL, 0xACBF7365L}}};
                    unsigned l_227 = 4294967294UL;
                    int *l_231 = &l_146[3];
                    char *l_232 = &g_12;
                    int i, j, k;
                    if ((safe_mod_func_int8_t_s_s((!p_137), (*g_54))))
                    {
                        unsigned ***l_219 = &g_218;
                        (*l_219) = g_218;
                    }
                    else
                    {
                        int *l_221 = &g_46;
                        int *l_222[9] = {&l_220, &l_146[3], &l_220, &l_146[3], &l_220, &l_146[3], &l_220, &l_146[3], &l_220};
                        int i;
                        --l_224[1][1][1];
                    }
                    if (func_7((p_138 != (0x5D46L != g_68))))
                    {
                        unsigned char ***l_229 = &l_181[0][3];
                        (*g_40) = (*g_40);
                        l_220 ^= l_227;
                        (*l_229) = l_228;
                        return l_230;
                    }
                    else
                    {
                        l_231 = (void*)0;
                        return l_232;
                    }
                }
                (*l_234) = g_70[g_143];
                return &g_67;
            }
        }
        else
        {
            unsigned l_242[5];
            int l_273 = 0xDDD9E29BL;
            union U1 **l_283 = &l_281[3][7];
            int i;
            for (i = 0; i < 5; i++)
                l_242[i] = 1UL;
            if (l_155)
            {
                return &g_12;
            }
            else
            {
                union U0 ***l_238 = &l_237;
                for (g_46 = 0; (g_46 <= 0); g_46 += 1)
                {
                    int *l_235 = &l_146[3];
                    (*l_235) = 0x96CDAD95L;
                    if ((*l_235))
                        break;
                    for (g_148 = 0; (g_148 <= 0); g_148 += 1)
                    {
                        short *l_236 = &g_69[3][0];
                        int i, j;
                        l_146[3] = (0x4EEEL != ((*l_236) = (func_7(g_69[(g_148 + 1)][g_46]) || (*l_235))));
                    }
                }
                (*l_238) = l_237;
            }
            if (p_137)
            {
                for (g_12 = 15; (g_12 <= (-20)); g_12 = safe_sub_func_int16_t_s_s(g_12, 8))
                {
                    int *l_241 = &l_155;
                    --l_242[0];
                }
            }
            else
            {
                int *l_245 = &l_146[3];
                union U0 ***l_280 = &l_237;
                union U0 ****l_279 = &l_280;
                (*g_40) = l_245;
                for (g_215 = (-8); (g_215 > 5); g_215++)
                {
                    int l_248 = 1L;
                    int l_268 = 0x87FA1743L;
                }
                (*g_41) = func_7(p_138);
                (**g_40) = (safe_mod_func_uint32_t_u_u((((*l_279) = (void*)0) != (void*)0), (*l_245)));
            }
            (*l_283) = l_281[2][8];
        }
        for (g_143 = 0; (g_143 == 40); g_143 = safe_add_func_uint16_t_u_u(g_143, 3))
        {
            int *l_286 = &l_146[2];
            int *l_287 = &g_46;
            int *l_288 = &l_146[3];
            int l_289 = 0x7A0BE0ECL;
            int *l_290 = &l_261;
            int *l_291 = &l_146[3];
            int *l_292[10][2] = {{&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}, {&l_146[3], &l_146[3]}};
            int i, j;
            l_300--;
        }
        for (g_67 = (-8); (g_67 != 1); g_67++)
        {
            int *l_305 = &l_297;
            (*l_305) &= (p_137 <= (-8L));
            if (g_65)
            {
                union U2 **l_308 = &l_306;
                (*l_308) = l_306;
            }
            else
            {
                union U0 *****l_314 = &l_311;
                union U0 ****l_316 = &l_312;
                union U0 *****l_315 = &l_316;
                union U0 *****l_321 = &g_317;
                int l_322 = 0x634A3F4EL;
                unsigned short *l_323 = (void*)0;
                unsigned short *l_324 = &g_143;
                if ((*l_305))
                    break;
                (*l_305) |= (((*l_324) |= (safe_add_func_int8_t_s_s((p_137 <= (((*l_315) = ((*l_314) = l_311)) == ((*l_321) = g_317))), l_322))) >= (func_7((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((l_261 < p_138), (safe_add_func_uint32_t_u_u((((*g_54)++) > l_322), 1UL)))), 6))) > p_137));
            }
        }
    }
    else
    {
        int l_335 = 0x1F6F16E7L;
        for (p_137 = (-30); (p_137 >= 1); p_137 = safe_add_func_int32_t_s_s(p_137, 1))
        {
            char l_341 = 1L;
            l_146[3] = ((p_137 > l_335) || ((safe_mod_func_int16_t_s_s(p_138, (safe_sub_func_uint16_t_u_u(l_340, (func_7(p_137) | (func_7(l_341) ^ (-8L))))))) != l_341));
            return l_230;
        }
    }
    for (g_282.f3 = 0; (g_282.f3 < (-4)); g_282.f3--)
    {
        union U0 *l_344 = &g_113;
        (**g_318) = l_344;
    }
    l_348++;
    if ((safe_lshift_func_int16_t_s_s(((p_138 & p_137) < g_353), ((+(safe_sub_func_uint16_t_u_u(p_139, g_202[2][0][0]))) & (0UL ^ func_7((safe_lshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_138, (func_7(p_137) && p_137))) || p_137), g_65))))))))
    {
        char l_360 = (-2L);
        unsigned ***l_364 = &g_218;
        if (((*l_345) = l_360))
        {
            unsigned char l_363 = 0x19L;
            unsigned ****l_365 = (void*)0;
            int l_369 = 0x5F46D186L;
            short l_380 = 0x2533L;
            int l_381[7] = {1L, 1L, 1L, 1L, 1L, 1L, 1L};
            int i;
            l_369 = ((*l_345) |= ((safe_mul_func_int16_t_s_s(8L, l_363)) || ((p_139 <= ((l_364 = l_364) != l_366)) > (safe_sub_func_int8_t_s_s(p_139, ((*g_54) = l_363))))));
            l_381[3] |= (safe_mod_func_uint32_t_u_u((func_7(((g_12 == p_139) == (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_139, func_7((l_380 = ((((safe_rshift_func_uint16_t_u_u(((l_369 > g_202[8][0][0]) == ((void*)0 == (*g_318))), 11)) >= l_363) >= (func_7((safe_lshift_func_uint8_t_u_s((g_282.f1 = ((*g_54) = 0xA4L)), l_363))) & (-5L))) && l_369))))), g_307[3].f4)))) & p_138), l_360));
            (*l_345) = ((g_148 ^= (g_307[3].f1 = func_7(l_363))) && 0xAA31BCA2L);
        }
        else
        {
            int l_398 = 0xF720654CL;
            int l_399 = (-1L);
            for (g_12 = 0; (g_12 > (-24)); g_12 = safe_sub_func_int32_t_s_s(g_12, 3))
            {
                unsigned char l_384 = 255UL;
                if (l_384)
                    break;
            }
            l_399 = (safe_mod_func_int8_t_s_s((((func_7((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((*g_54) & (((func_7(((g_269 == ((safe_rshift_func_int16_t_s_s(((*g_54) && ((func_7((((*l_311) = (void*)0) == l_395)) <= ((safe_mul_func_int8_t_s_s(l_360, (*l_345))) > func_7((g_307[3].f1 = (l_360 || p_139))))) <= 0x5BD8L)), 15)) && p_139)) & p_139)) ^ l_360) <= l_398) && 0xBD2F8E4DL)), (-3L))), 0L)), 6UL))) < 0UL) | 0x0533L) | (*l_345)), 0x14L));
        }
        --l_400;
        (*l_345) ^= g_403;
        for (g_65 = (-16); (g_65 > (-22)); g_65 = safe_sub_func_int32_t_s_s(g_65, 9))
        {
            unsigned char l_406 = 1UL;
            (*l_345) = g_293[5];
            (*l_345) ^= l_406;
        }
    }
    else
    {
        unsigned l_434 = 0xDAA7D16AL;
        int l_448 = 0xCF23DB82L;
        int l_451[3];
        unsigned short l_456 = 0UL;
        int i;
        for (i = 0; i < 3; i++)
            l_451[i] = 0x63FB4DD9L;
        if ((safe_sub_func_int16_t_s_s((((void*)0 != (*g_318)) > (((*g_54) && (safe_lshift_func_int8_t_s_u(func_7((safe_mul_func_uint16_t_u_u((l_413 != ((***g_317) = (*g_319))), (-1L)))), 7))) < (0x7D9FB095L < ((g_215 < l_416) != 0x33L)))), 65530UL)))
        {
            unsigned char l_421 = 1UL;
            int l_437 = 0xFB11891AL;
            unsigned ***l_446 = &g_218;
            int l_447[3];
            int i;
            for (i = 0; i < 3; i++)
                l_447[i] = 0xA2D1A573L;
            l_421 = (safe_lshift_func_uint16_t_u_s(g_3, (0x97C0ABCFL || (safe_sub_func_uint8_t_u_u(2UL, 0xFBL)))));
            if (p_138)
            {
                return l_230;
            }
            else
            {
                unsigned l_425 = 0UL;
                int l_444[7] = {0x7EEA5A3FL, 0x40EE0FA0L, 0x7EEA5A3FL, 0x40EE0FA0L, 0x7EEA5A3FL, 0x40EE0FA0L, 0x7EEA5A3FL};
                int i;
                for (g_282.f3 = 14; (g_282.f3 >= 16); g_282.f3 = safe_add_func_uint32_t_u_u(g_282.f3, 4))
                {
                    int *l_424[10] = {&l_146[3], &g_3, &l_146[3], &g_3, &l_146[3], &g_3, &l_146[3], &g_3, &l_146[3], &g_3};
                    short *l_438 = &g_215;
                    int i;
                    (*g_40) = l_424[9];
                    (*l_345) = l_425;
                }
                l_451[1] |= (*l_345);
                (*g_40) = &l_146[3];
            }
        }
        else
        {
            l_459 = func_7(l_434);
        }
    }
    return l_230;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_69[i][j], "g_69[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_70[i], "g_70[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_202[i][j][k], "g_202[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_293[i], "g_293[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_307[i].f1, "g_307[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_597[i][j][k], "g_597[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_627.f2, "g_627.f2", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_865[i][j].f0, "g_865[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_888[i][j][k], "g_888[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_893[i], "g_893[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_994, "g_994", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1239, "g_1239", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
