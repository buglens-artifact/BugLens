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
   signed f0 : 1;
   char f1;
};

struct S1 {
   unsigned f0 : 10;
   char f1;
   unsigned f2 : 7;
   unsigned f3 : 15;
   unsigned f4 : 12;
};

struct S2 {
   unsigned char f0;
   short f1;
   unsigned f2;
   short f3;
   struct S0 f4;
};

struct S3 {
   char f0;
   unsigned f1 : 27;
   signed f2 : 13;
};


static int g_6 = 0x2B21A35CL;
static struct S0 g_26 = {-0,-3L};
static struct S1 g_27 = {4,-7L,7,86,49};
static unsigned short g_36[3][1][1] = {{{0x6BBBL}}, {{0x6BBBL}}, {{0x6BBBL}}};
static struct S1 g_68[4][1] = {{{10,0x6AL,3,152,25}}, {{10,0x6AL,3,152,25}}, {{10,0x6AL,3,152,25}}, {{10,0x6AL,3,152,25}}};
static unsigned short g_75 = 5UL;
static char g_79 = (-1L);
static unsigned short g_80[8][7][4] = {{{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}, {{0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}, {0x2509L, 0xBD4CL, 1UL, 0xD2A8L}}};
static struct S3 g_83 = {4L,6716,-87};
static unsigned short g_91 = 0UL;
static unsigned g_96 = 0x54E5BA69L;
static unsigned short g_108 = 6UL;
static unsigned char g_109 = 0xC1L;
static int g_115 = (-6L);
static unsigned short g_177 = 0xD1B3L;
static unsigned short g_178 = 0x06BCL;
static struct S3 g_208 = {-1L,6979,-89};
static struct S1 g_216 = {29,0x77L,2,172,18};
static int g_225 = 1L;
static short g_227 = 0x4AC5L;
static unsigned short g_238 = 1UL;
static char g_308 = 0x0FL;
static short g_309[1] = {0x11FEL};
static unsigned g_310 = 0xDFEFB0E1L;
static int g_348 = 0x6AF894EEL;
static struct S0 g_353[3] = {{0,7L}, {0,7L}, {0,7L}};
static short g_374[10][3] = {{0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}, {0x6828L, (-1L), 0x6828L}};
static unsigned g_375 = 0UL;
static unsigned g_485 = 8UL;
static struct S2 g_497[6] = {{1UL,0x209DL,0x55048935L,9L,{0,1L}}, {248UL,1L,0x052F839DL,-1L,{0,0x09L}}, {1UL,0x209DL,0x55048935L,9L,{0,1L}}, {248UL,1L,0x052F839DL,-1L,{0,0x09L}}, {1UL,0x209DL,0x55048935L,9L,{0,1L}}, {248UL,1L,0x052F839DL,-1L,{0,0x09L}}};
static char g_572 = (-9L);
static unsigned short g_573 = 8UL;
static struct S2 g_576 = {0x59L,1L,0xC7AF0E5EL,4L,{0,0xA6L}};
static unsigned g_601 = 1UL;
static char g_702 = 0x11L;
static struct S3 g_793 = {0xF6L,10396,-12};
static short g_884 = 0x339BL;
static unsigned short g_885 = 65533UL;
static unsigned g_935[6] = {0xAA348ED8L, 0xAA348ED8L, 0xAA348ED8L, 0xAA348ED8L, 0xAA348ED8L, 0xAA348ED8L};
static unsigned short g_967 = 0x32CDL;
static short g_991 = 0x6FE8L;
static short g_1005 = 6L;
static int g_1007[7][2][9] = {{{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}, {{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}, {{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}, {{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}, {{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}, {{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}, {{3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}, {3L, 0xE2CD9EB2L, 0x34B21AF1L, 0xE7B6DC76L, 1L, (-1L), 0L, 3L, 0xEA896396L}}};



static unsigned func_1(void);
static struct S3 func_2(unsigned short p_3, unsigned short p_4, int p_5);
static unsigned short func_10(short p_11, struct S1 p_12);
static short func_15(struct S1 p_16, char p_17, struct S1 p_18, int p_19);
static char func_20(struct S0 p_21, struct S1 p_22, char p_23, unsigned char p_24, short p_25);
static struct S1 func_38(unsigned p_39, unsigned p_40, struct S2 p_41);
static unsigned func_42(int p_43, int p_44, unsigned p_45, struct S1 p_46);
static struct S1 func_49(unsigned p_50);
static short func_58(struct S3 p_59, struct S0 p_60, int p_61, char p_62);
static struct S3 func_63(unsigned short p_64);
static unsigned func_1(void)
{
    struct S0 l_9[6] = {{0,-3L}, {0,8L}, {0,-3L}, {0,8L}, {0,-3L}, {0,8L}};
    struct S1 l_13[5][2] = {{{1,0x48L,1,31,34}, {1,0x48L,1,31,34}}, {{1,0x48L,1,31,34}, {1,0x48L,1,31,34}}, {{1,0x48L,1,31,34}, {1,0x48L,1,31,34}}, {{1,0x48L,1,31,34}, {1,0x48L,1,31,34}}, {{1,0x48L,1,31,34}, {1,0x48L,1,31,34}}};
    unsigned l_28 = 0x5DC32C75L;
    struct S0 l_926 = {0,0xEFL};
    int l_932 = 1L;
    int l_948[7][6][5] = {{{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}, {{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}, {{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}, {{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}, {{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}, {{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}, {{0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}, {0L, 0x42BCD9C6L, 0x796AB37EL, 0xCAA25291L, 0x72174DA2L}}};
    int l_959 = 0x0174AF5FL;
    int l_961[5];
    int l_975 = 0x6C9D540FL;
    char l_1001 = 7L;
    short l_1016 = 0x9E5CL;
    char l_1017 = 5L;
    int l_1018[6][9];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_961[i] = 0x66ACCCFDL;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
            l_1018[i][j] = 0L;
    }
    if ((func_2(g_6, (safe_rshift_func_uint16_t_u_s((l_9[3] , func_10(g_6, l_13[4][0])), func_15(l_13[4][0], (func_20(g_26, (g_27 = l_13[1][0]), g_26.f1, l_13[4][0].f1, l_28) , 0x3BL), l_13[0][1], l_13[4][0].f4))), g_216.f3) , g_108))
    {
        int l_927 = 3L;
        char l_928 = 0x29L;
        struct S1 l_931 = {24,0xC9L,3,112,3};
        int l_933 = 0x891EB7D4L;
        int l_934[9] = {(-3L), 4L, (-3L), 4L, (-3L), 4L, (-3L), 4L, (-3L)};
        int i;
        l_932 |= ((g_485 != (func_58(g_83, l_926, l_927, l_928) < g_27.f4)) <= (safe_mod_func_uint8_t_u_u(l_926.f1, func_42(((l_9[3].f0 = (l_13[4][0].f2 || 0x07E8L)) & 0L), g_227, g_308, l_931))));
        g_935[2]--;
        return g_576.f4.f1;
    }
    else
    {
        unsigned l_950 = 0x74855A32L;
        int l_960[8];
        char l_962[2][7][5] = {{{1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}}, {{1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}, {1L, 0x2DL, 0xDDL, 0x2DL, 1L}}};
        unsigned short l_986 = 1UL;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_960[i] = 0x7DBA7E2BL;
        if ((safe_mul_func_uint16_t_u_u(0x5756L, (safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(l_9[3].f0, g_497[1].f4.f1)), ((g_216.f4 || 0xF00CL) && ((safe_mul_func_uint8_t_u_u(g_68[2][0].f0, g_576.f4.f1)) ^ (safe_unary_minus_func_uint8_t_u(g_216.f1)))))))))
        {
            int l_947 = (-7L);
            int l_949 = 0x3EC3ECACL;
            struct S1 l_956 = {4,4L,6,5,27};
            unsigned l_978 = 0x227BEC46L;
            struct S3 l_981[6][6][6] = {{{{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}}, {{{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}}, {{{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}}, {{{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}}, {{{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}}, {{{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}, {{1L,10792,-17}, {0L,848,9}, {0xC8L,10702,69}, {0x79L,7051,64}, {0x71L,6496,50}, {-1L,1695,61}}}};
            int i, j, k;
            l_950--;
            for (g_885 = 0; (g_885 < 47); g_885 = safe_add_func_uint16_t_u_u(g_885, 5))
            {
                struct S1 l_955 = {12,0xE7L,8,9,30};
                int l_963 = 0xC63F5B50L;
                int l_964 = 0x40F53265L;
                int l_965 = 0x38A6FC92L;
                int l_966[6] = {0x70F51517L, 0x70F51517L, 1L, 0x70F51517L, 0x70F51517L, 1L};
                int i;
                l_960[2] = func_15(l_955, g_702, l_956, (l_956.f2 == (safe_sub_func_uint8_t_u_u(l_959, (g_83.f0 = g_115)))));
                ++g_967;
                if (l_955.f1)
                    break;
                for (g_576.f4.f1 = 0; (g_576.f4.f1 < 13); g_576.f4.f1 = safe_add_func_int32_t_s_s(g_576.f4.f1, 4))
                {
                    struct S1 l_972 = {20,0x88L,4,100,17};
                    l_955 = l_972;
                    l_975 = (safe_rshift_func_uint16_t_u_u(l_956.f2, 0));
                    l_966[4] = (((safe_mul_func_int8_t_s_s(l_955.f1, (+0x99L))) <= g_83.f2) && l_926.f0);
                    if (l_956.f0)
                        break;
                }
            }
            l_978 = ((g_374[2][1] < g_497[1].f4.f1) > g_310);
            for (l_959 = 24; (l_959 != 29); l_959++)
            {
                g_208 = l_981[2][5][0];
            }
        }
        else
        {
            unsigned char l_987 = 255UL;
            struct S1 l_990[3] = {{4,-9L,8,152,33}, {4,-9L,8,152,33}, {4,-9L,8,152,33}};
            unsigned short l_992 = 0UL;
            int l_998 = 0x8CD92F44L;
            int l_1002 = 0x8BB05F5EL;
            int l_1004[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1004[i] = 6L;
            if (func_15((g_353[0] , func_49((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_962[1][3][0], (func_20((((l_986 || 0xBCB0L) != (l_987 , ((safe_mul_func_uint16_t_u_u(g_576.f4.f0, ((((l_961[0] = l_932) >= (g_178 , g_68[2][0].f3)) && g_225) == l_962[1][0][3]))) ^ l_950))) , g_353[2]), l_990[2], g_109, l_948[2][5][1], g_991) <= l_28))), l_926.f0)))), g_27.f3, l_13[1][0], l_992))
            {
                g_353[0].f0 |= l_990[2].f2;
            }
            else
            {
                unsigned char l_993[5] = {255UL, 0x8FL, 255UL, 0x8FL, 255UL};
                int l_996 = 1L;
                int l_997 = (-1L);
                char l_999 = (-10L);
                int l_1000 = 0L;
                int l_1003 = 0L;
                int l_1006[1][9][4] = {{{0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}, {0xCBE15458L, 0xD3D0570CL, 0xA64D3FB9L, 0L}}};
                unsigned l_1008 = 4294967295UL;
                int i, j, k;
                ++l_993[1];
                l_1008++;
                return g_27.f2;
            }
        }
        l_960[2] = func_15(l_13[3][1], func_20(l_926, g_68[2][0], (g_27.f1 = ((((safe_sub_func_int16_t_s_s(func_10(l_986, g_68[2][0]), l_926.f1)) || (safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(g_884)), ((l_13[4][0].f3 >= g_79) || l_960[6])))) ^ l_1016) || (-6L))), l_13[4][0].f3, l_1017), g_216, l_1018[2][7]);
        for (g_109 = (-12); (g_109 <= 28); g_109 = safe_add_func_int32_t_s_s(g_109, 4))
        {
            unsigned char l_1021 = 1UL;
            g_497[1].f4.f0 = l_975;
            l_1021++;
            if (g_375)
                continue;
        }
    }
    return l_975;
}







static struct S3 func_2(unsigned short p_3, unsigned short p_4, int p_5)
{
    struct S0 l_477 = {0,-5L};
    struct S1 l_484[10] = {{6,0x92L,4,152,25}, {28,0x4BL,1,70,57}, {6,0x92L,4,152,25}, {28,0x4BL,1,70,57}, {6,0x92L,4,152,25}, {28,0x4BL,1,70,57}, {6,0x92L,4,152,25}, {28,0x4BL,1,70,57}, {6,0x92L,4,152,25}, {28,0x4BL,1,70,57}};
    char l_493 = 1L;
    short l_495[5] = {(-1L), 0L, (-1L), 0L, (-1L)};
    struct S2 l_496 = {0xF5L,2L,3UL,-7L,{0,0x1DL}};
    int l_517 = (-1L);
    char l_541 = 0xFAL;
    unsigned l_542 = 0x313D84D9L;
    struct S2 l_577 = {255UL,4L,2UL,0x38DFL,{0,-8L}};
    struct S3 l_593[6][10] = {{{0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}, {0xD5L,6202,50}, {0L,7471,27}, {0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}}, {{0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}, {0xD5L,6202,50}, {0L,7471,27}, {0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}}, {{0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}, {0xD5L,6202,50}, {0L,7471,27}, {0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}}, {{0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}, {0xD5L,6202,50}, {0L,7471,27}, {0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}}, {{0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}, {0xD5L,6202,50}, {0L,7471,27}, {0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}}, {{0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}, {0xD5L,6202,50}, {0L,7471,27}, {0xD5L,6202,50}, {0x98L,7941,48}, {0L,5806,-80}, {0x98L,7941,48}}};
    unsigned l_612 = 1UL;
    struct S0 l_630 = {0,-1L};
    unsigned l_735[4][3] = {{0x301D4C45L, 0x074FA1B0L, 4294967290UL}, {0x301D4C45L, 0x074FA1B0L, 4294967290UL}, {0x301D4C45L, 0x074FA1B0L, 4294967290UL}, {0x301D4C45L, 0x074FA1B0L, 4294967290UL}};
    char l_753 = 0x99L;
    unsigned l_758[3];
    unsigned short l_780 = 4UL;
    struct S2 l_853 = {249UL,0x09E5L,4294967291UL,0x9D9DL,{-0,0xF3L}};
    unsigned short l_854 = 65528UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_758[i] = 0x89F67EC3L;
    g_485 |= ((l_477 = l_477) , func_15(func_49(((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((((0xAF48BD29L < l_477.f0) >= p_5) || ((g_375 = (l_477.f1 == p_4)) < (func_10((0x552E7C1CL != (p_5 , (g_225 |= g_353[0].f0))), g_216) != p_5))) < l_477.f0) > l_477.f1), g_83.f0)) > 0x9DL), 4)) , g_216.f1)), p_3, l_484[2], g_227));
    if ((0xC92BL & ((l_484[2].f3 <= p_5) && 0x6A1BL)))
    {
        unsigned char l_488 = 0x12L;
        struct S1 l_494[7][3][6] = {{{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}, {{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}, {{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}, {{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}, {{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}, {{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}, {{{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}, {{20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}, {20,-2L,6,91,52}}}};
        int l_498 = (-10L);
        int l_499 = 0x3AAEB57BL;
        int l_500 = 0xE86EB070L;
        struct S0 l_528[9] = {{0,0x7CL}, {-0,0x7BL}, {0,0x7CL}, {-0,0x7BL}, {0,0x7CL}, {-0,0x7BL}, {0,0x7CL}, {-0,0x7BL}, {0,0x7CL}};
        unsigned l_556 = 0x998F23B2L;
        int l_558 = 1L;
        struct S3 l_604 = {-1L,11,23};
        int l_647 = 2L;
        int i, j, k;
        if (((0xD4L < p_3) | ((((func_10((p_3 >= (safe_sub_func_uint32_t_u_u(l_488, ((((safe_lshift_func_int16_t_s_u(g_216.f2, 8)) & (g_83 , l_484[2].f4)) || ((func_15((p_3 , func_49((((safe_mul_func_uint16_t_u_u(p_3, 0x813CL)) >= 4UL) , 0xDFAAF6EBL))), l_493, g_216, p_4) != l_493) ^ p_3)) , g_374[6][1])))), l_494[5][2][5]) , g_36[1][0][0]) , l_494[5][2][5].f0) <= l_495[1]) || l_488)))
        {
            unsigned l_501[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_501[i][j] = 0xD05C234DL;
            }
            g_497[1] = l_496;
            ++l_501[0][0];
        }
        else
        {
            l_496.f4.f0 ^= (0xCB29C3B7L > ((l_477.f0 |= 0UL) , (g_216.f2 = p_5)));
            return g_83;
        }
        for (p_4 = 16; (p_4 == 32); p_4++)
        {
            unsigned l_511 = 4294967295UL;
            int l_516 = 0L;
            struct S3 l_527 = {0x31L,6876,-19};
            if ((p_5 = g_208.f2))
            {
                struct S3 l_506 = {0xD3L,7066,79};
                return l_506;
            }
            else
            {
                unsigned char l_521 = 0xBCL;
                for (p_5 = 9; (p_5 == 20); p_5 = safe_add_func_int8_t_s_s(p_5, 7))
                {
                    int l_509 = (-1L);
                    int l_510 = 0x2EC4D8D8L;
                    int l_519 = 0L;
                    --l_511;
                    for (g_208.f0 = 0; (g_208.f0 != (-12)); g_208.f0--)
                    {
                        int l_518 = 0xF62FD211L;
                        int l_520[4][7][2] = {{{0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}}, {{0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}}, {{0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}}, {{0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}, {0x1CBC9DA2L, 8L}}};
                        unsigned l_524 = 0x3274B58AL;
                        int i, j, k;
                        l_521++;
                        l_524 = ((g_26.f0 & g_68[2][0].f4) > 0xE9L);
                        if (l_519)
                            continue;
                    }
                    for (g_208.f0 = 0; (g_208.f0 > (-14)); g_208.f0--)
                    {
                        if (p_5)
                            break;
                        if (p_4)
                            break;
                        g_353[0].f0 ^= p_5;
                    }
                }
                if (g_310)
                    break;
                return l_527;
            }
        }
        if (func_20(l_528[3], g_68[2][0], (l_542 &= func_42((g_208.f2 = g_26.f0), (l_496 , (p_3 > (safe_mul_func_int8_t_s_s(((p_3 <= g_308) == (safe_sub_func_int32_t_s_s(func_10((l_477.f0 = (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((l_499 = ((safe_sub_func_uint8_t_u_u((~p_4), (0x5856L ^ 0xC7F4L))) , l_541)), 1)), l_494[5][2][5].f4)), l_488))), l_484[9]), 0x6764E20AL))), 0x16L)))), p_3, l_484[9])), g_115, l_488))
        {
            l_494[4][0][3] = g_216;
        }
        else
        {
            int l_543 = 0x0325D843L;
            int l_544 = 0x16CE7469L;
            unsigned l_559 = 4294967295UL;
            int l_564 = 0xBBAB8AAAL;
            int l_566 = 9L;
            int l_567 = (-1L);
            int l_568 = 0x2B9DF8E0L;
            struct S1 l_580 = {20,0xF7L,6,3,23};
            int l_590 = (-2L);
            unsigned l_609 = 0xB76C8654L;
            unsigned l_637[5][4][9] = {{{4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}}, {{4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}}, {{4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}}, {{4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}}, {{4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}, {4294967295UL, 1UL, 0UL, 1UL, 4294967295UL, 4294967295UL, 0UL, 4294967295UL, 4294967295UL}}};
            struct S0 l_650 = {-0,0xA0L};
            unsigned short l_659 = 1UL;
            struct S2 l_673 = {0x12L,0L,0UL,-3L,{-0,0L}};
            int i, j, k;
            for (g_75 = 0; (g_75 <= 3); g_75 += 1)
            {
                struct S1 l_557[8] = {{12,-1L,1,170,13}, {12,0xBBL,2,162,26}, {12,-1L,1,170,13}, {12,0xBBL,2,162,26}, {12,-1L,1,170,13}, {12,0xBBL,2,162,26}, {12,-1L,1,170,13}, {12,0xBBL,2,162,26}};
                int l_565 = 0xDF3CAC41L;
                int l_569 = 0x790F0307L;
                int l_570 = 0x7EF48A28L;
                int l_571 = (-1L);
                struct S2 l_596 = {1UL,0xFB2AL,0xCE09B10FL,-2L,{-0,0L}};
                int i;
                for (l_496.f0 = 0; (l_496.f0 <= 3); l_496.f0 += 1)
                {
                    struct S1 l_550[1] = {{30,-1L,3,121,9}};
                    int l_555 = 0x530749D9L;
                    struct S2 l_563 = {0x6DL,0x4C36L,0xCD1B3183L,0x4756L,{-0,0x34L}};
                    int i;
                    for (g_91 = 0; (g_91 <= 3); g_91 += 1)
                    {
                        unsigned short l_545 = 4UL;
                        struct S1 l_551 = {18,7L,7,110,61};
                        int i, j, k;
                        l_545++;
                        g_115 = (safe_rshift_func_uint16_t_u_s(((((g_80[(g_91 + 3)][(g_75 + 3)][l_496.f0] != g_497[1].f3) == func_10(l_545, l_550[0])) > (l_551 , 0xADC43C1DL)) == (g_497[1].f2 && (g_26.f1 && p_5))), 13));
                        if (l_494[5][2][5].f0)
                            continue;
                    }
                    if ((((safe_rshift_func_uint16_t_u_s(p_4, ((g_216.f4 , (g_374[6][1] ^= (safe_unary_minus_func_int16_t_s((l_555 |= (l_499 = 1L)))))) == func_42((g_26.f0 = g_208.f1), ((l_556 , g_216.f3) ^ l_544), p_3, (l_557[7] = l_557[1]))))) , p_4) | p_5))
                    {
                        struct S2 l_562 = {249UL,0x8D63L,8UL,0x96E6L,{0,6L}};
                        ++l_559;
                        l_563 = l_562;
                        --g_573;
                        l_563 = (l_577 = g_576);
                    }
                    else
                    {
                        unsigned l_589[7] = {1UL, 1UL, 4294967295UL, 1UL, 1UL, 4294967295UL, 1UL};
                        int i;
                        g_353[2] = g_353[2];
                        l_517 |= (((((safe_add_func_uint32_t_u_u(((+func_10((!0xCB73L), l_580)) <= 0xF3L), (p_4 > func_42((safe_sub_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s(func_42(g_96, (safe_mod_func_int8_t_s_s((g_353[0].f1 = (((0x55L >= 250UL) , (safe_lshift_func_uint8_t_u_s(func_42(p_3, p_4, l_550[0].f1, g_216), g_309[0]))) , 0x58L)), g_485)), p_5, l_550[0]), l_589[0])) >= 0xFC4BF825L) , g_497[1].f0), 0x37AF0FDFL)), l_550[0].f0, g_79, l_557[1])))) <= 4294967295UL) & 1UL) || p_4) != 0xCC658987L);
                        g_353[1] = l_563.f4;
                    }
                    for (l_542 = 0; (l_542 <= 3); l_542 += 1)
                    {
                        l_590 = g_96;
                        l_577.f4.f0 = p_4;
                        l_499 |= p_5;
                    }
                }
                if (g_576.f4.f1)
                    break;
                for (g_227 = 0; (g_227 <= 2); g_227 += 1)
                {
                    int l_610 = 2L;
                    int l_611[9][3][4] = {{{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}, {{(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}, {(-1L), (-1L), 0x4A03E599L, (-4L)}}};
                    int i, j, k;
                    for (l_569 = 0; (l_569 <= 3); l_569 += 1)
                    {
                        int i, j, k;
                        p_5 = (safe_rshift_func_uint16_t_u_u((g_80[g_75][(l_569 + 3)][l_569] = (g_80[(g_227 + 2)][(g_75 + 2)][g_75] < ((p_3 != l_484[2].f0) || p_4))), 6));
                        return l_593[0][6];
                    }
                    if ((safe_lshift_func_uint8_t_u_u((((l_570 = ((func_42((((l_596 , (p_3 && l_528[3].f0)) || (safe_mul_func_uint8_t_u_u(250UL, ((g_374[(g_75 + 3)][g_227] |= (safe_add_func_uint32_t_u_u(func_42(((g_601 & (l_568 = (safe_add_func_uint32_t_u_u((((l_604 , (safe_sub_func_int16_t_s_s(func_10((g_576.f1 != ((safe_add_func_uint8_t_u_u((g_26 , p_5), 0x4AL)) == 6L)), l_484[g_75]), p_5))) || g_115) >= p_3), l_558)))) != g_227), l_528[3].f0, p_4, l_484[(g_227 + 4)]), 0xF780DDFEL))) , g_68[2][0].f4)))) ^ l_609), g_216.f4, g_79, g_216) & g_348) , l_528[3].f1)) & l_496.f4.f1) , 0xAEL), g_80[1][4][3])))
                    {
                        g_83.f2 = (p_3 > ((l_567 &= (p_5 = g_497[1].f4.f0)) & 0UL));
                        if (p_4)
                            continue;
                        if (p_3)
                            continue;
                    }
                    else
                    {
                        unsigned l_621 = 0xC934F8C5L;
                        l_612++;
                        p_5 = (g_497[1] , ((safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((g_109 = func_10((g_576.f1 |= (safe_rshift_func_int8_t_s_u(l_570, 4))), g_216)), ((g_208.f0 = (+l_621)) || (safe_sub_func_uint8_t_u_u(0x26L, (safe_mod_func_uint8_t_u_u((g_576.f0++), (g_497[1].f0 &= g_27.f3)))))))) >= (((((safe_lshift_func_int8_t_s_u(g_238, g_80[1][4][2])) && 0x67L) , l_580.f4) || 0xD97B3058L) != 0x08L)), g_576.f4.f0)) < 0L));
                        g_497[1].f4.f0 |= (+g_26.f1);
                        l_630 = g_576.f4;
                    }
                    for (g_177 = 0; (g_177 <= 0); g_177 += 1)
                    {
                        struct S1 l_635 = {8,0L,5,16,47};
                        int l_636[7] = {0x24232A1AL, 0x248B4D92L, 0x24232A1AL, 0x248B4D92L, 0x24232A1AL, 0x248B4D92L, 0x24232A1AL};
                        int i, j, k;
                        l_636[6] = (safe_add_func_uint16_t_u_u((g_80[(g_177 + 4)][(g_227 + 1)][(g_177 + 1)] & ((g_80[(g_75 + 3)][(g_177 + 3)][(g_227 + 1)] <= (((g_309[g_177] < ((safe_mod_func_int8_t_s_s((g_309[g_177] || func_10((g_27 , ((g_572 , l_635) , 0L)), l_484[g_75])), g_216.f3)) >= g_310)) && g_75) , 0L)) & 0x0588L)), 1L));
                        ++l_637[1][2][5];
                    }
                }
                for (l_496.f4.f1 = 2; (l_496.f4.f1 >= 0); l_496.f4.f1 -= 1)
                {
                    struct S2 l_646 = {0xB9L,0x76DFL,4294967288UL,0x9F4FL,{-0,1L}};
                    struct S1 l_654[4] = {{21,0x4DL,10,62,35}, {21,0x4DL,10,62,35}, {21,0x4DL,10,62,35}, {21,0x4DL,10,62,35}};
                    char l_666[2][3] = {{(-7L), 6L, (-7L)}, {(-7L), 6L, (-7L)}};
                    struct S1 l_674 = {29,0x5DL,1,89,22};
                    int i, j;
                    if ((p_3 & (safe_add_func_int16_t_s_s((g_374[(l_496.f4.f1 + 5)][l_496.f4.f1] = (-5L)), 1L))))
                    {
                        l_647 = (0x6FL || (safe_rshift_func_uint8_t_u_s(0x2CL, ((p_5 |= 0L) == ((safe_mod_func_int8_t_s_s(((0x8E4EL && (l_565 = 0UL)) != ((((0x667654A7L > (l_646 , (p_4 || 0x8A9EL))) && 0x53BFL) , l_566) >= l_590)), g_601)) , g_83.f0)))));
                    }
                    else
                    {
                        unsigned l_651[3][7][2] = {{{0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}}, {{0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}}, {{0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}, {0UL, 0xB7CBBC40L}}};
                        int i, j, k;
                        g_208.f2 ^= (g_115 = ((safe_rshift_func_int16_t_s_s(func_42(p_5, ((((l_647 = (l_650 , (l_484[2].f2 | l_577.f4.f0))) | (g_497[1].f0 = (((~(l_651[2][5][1] &= (-8L))) != (p_4 >= ((safe_mul_func_int16_t_s_s(func_42(l_604.f2, p_3, g_238, g_68[2][0]), g_6)) , l_528[3].f1))) == g_68[2][0].f2))) > g_68[2][0].f1) || l_570), p_3, l_654[2]), 15)) || l_646.f0));
                        if (l_556)
                            break;
                        if (g_68[2][0].f4)
                            break;
                        g_576 = g_576;
                    }
                    for (g_26.f1 = 3; (g_26.f1 >= 0); g_26.f1 -= 1)
                    {
                        struct S1 l_675 = {7,-1L,6,54,50};
                        int l_676 = (-8L);
                        p_5 |= ((-7L) ^ func_42(((g_353[0].f0 != (l_630.f0 | (((((~65535UL) < (safe_mod_func_int32_t_s_s(g_216.f0, g_497[1].f2))) >= ((p_3 , (safe_lshift_func_int16_t_s_u((g_216.f3 ^ g_80[1][4][3]), g_497[1].f1))) == l_500)) && g_80[3][3][3]) , l_659))) , l_650.f1), g_83.f2, p_3, l_654[2]));
                        g_83.f2 = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(l_646.f3, 2)) , (safe_rshift_func_int8_t_s_s(p_3, 3))), func_42(g_353[0].f1, l_666[1][1], ((p_4 != g_497[1].f4.f1) & (safe_rshift_func_int16_t_s_s(func_42((func_42(((l_558 > (safe_mod_func_uint8_t_u_u(((0x589AL & (safe_rshift_func_uint8_t_u_u((l_673 , g_497[1].f3), l_477.f1))) <= 0x1B13L), (-5L)))) > l_494[5][2][5].f2), l_580.f4, g_353[0].f0, l_557[3]) ^ 0x3FL), p_4, l_494[5][2][5].f1, l_674), 13))), g_68[2][0])));
                        l_557[5] = l_675;
                        g_83.f2 = (l_528[3] , (l_646.f4.f0 = ((255UL & (l_676 = l_484[2].f3)) == (((safe_lshift_func_int16_t_s_s(g_80[1][4][3], 12)) <= 0L) == func_42((0x8A8CL || (safe_mod_func_int32_t_s_s(l_654[2].f2, (l_577.f2 ^ ((g_27.f2 <= g_225) , l_494[5][2][5].f0))))), g_485, g_374[6][1], l_557[0])))));
                    }
                }
                for (g_27.f1 = 0; (g_27.f1 <= 3); g_27.f1 += 1)
                {
                    struct S3 l_681 = {0xB9L,10071,11};
                    return l_681;
                }
            }
            if (p_4)
            {
                unsigned l_684 = 4294967292UL;
                for (g_573 = 0; (g_573 != 35); g_573 = safe_add_func_uint8_t_u_u(g_573, 1))
                {
                    return g_208;
                }
                ++l_684;
                l_630.f0 = 0x636E92E7L;
            }
            else
            {
                p_5 = (safe_lshift_func_int8_t_s_s(p_3, (0x81L < g_177)));
                g_26.f0 = p_4;
                for (g_348 = 6; (g_348 >= 3); g_348 -= 1)
                {
                    struct S0 l_701 = {0,1L};
                    int i;
                    l_650.f0 &= (l_528[(g_348 + 2)] , (safe_rshift_func_int16_t_s_u((g_227 = (safe_mod_func_uint16_t_u_u((g_238 &= func_42(p_5, ((g_216.f1 != (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((l_528[(g_348 + 2)].f0 = p_4) <= ((l_564 = (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(g_68[2][0].f4, func_42(((l_528[(g_348 + 2)].f1 != func_10(g_208.f0, (l_701 , g_68[2][0]))) ^ g_497[1].f0), p_4, l_528[(g_348 + 2)].f1, g_27))), 2))) == 0x3DL)), 4)), 0x4839A983L))) >= g_6), l_673.f2, l_484[9])), l_488))), 11)));
                    if (g_702)
                        continue;
                }
            }
            for (g_96 = 24; (g_96 != 17); g_96 = safe_sub_func_uint16_t_u_u(g_96, 4))
            {
                p_5 = (safe_mod_func_int16_t_s_s((g_26.f0 >= ((safe_sub_func_int32_t_s_s(p_4, (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((--g_80[3][2][0]), p_3)) <= (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(func_10(l_484[2].f0, g_68[2][0]), (safe_add_func_uint16_t_u_u(func_10(((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((g_75 &= g_6) && (safe_mod_func_uint32_t_u_u(l_558, func_42(((g_497[1].f3 = (safe_rshift_func_uint8_t_u_u(((l_593[0][6] , 0x28L) && (-1L)), 2))) != 0x2B7EL), p_5, l_735[0][2], l_580)))), l_484[2].f0)), p_3)) , p_5), g_68[0][0]), 0x3156L)))), 0x40L)), g_91))), 15)), 5)), 0xA31E2A14L)))) < 0x67L)), l_496.f2));
            }
        }
        for (g_75 = 0; (g_75 <= 5); g_75 += 1)
        {
            return g_208;
        }
    }
    else
    {
        struct S3 l_738 = {1L,2165,12};
        struct S0 l_752 = {-0,-6L};
        struct S1 l_765 = {13,0L,10,27,33};
        for (g_216.f1 = 8; (g_216.f1 <= 23); g_216.f1++)
        {
            struct S0 l_751 = {-0,1L};
            if (p_5)
                break;
            l_738 = (l_593[0][6] = g_83);
            l_752.f0 = ((g_576.f4.f0 = (l_484[2] , (l_738.f2 = (p_5 = (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((~g_702) == (((g_497[1].f4.f0 = 0L) || (safe_sub_func_int8_t_s_s(l_496.f1, func_20(((l_484[2].f4 , (l_751 = l_751)) , (l_630 = l_752)), g_27, (g_497[1].f4 , g_348), p_5, p_3)))) == l_753)), p_5)), 0xC8749723L)), p_3)), p_5)), (-6L))))))) > p_4);
            p_5 = (safe_sub_func_int32_t_s_s((g_26.f0 = g_572), (l_751.f0 || (((p_5 > ((safe_sub_func_int16_t_s_s(l_758[2], g_353[0].f0)) && ((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((0x6DB5L >= (safe_add_func_int32_t_s_s((func_10(l_593[0][6].f0, l_765) , l_752.f0), (-1L)))), g_576.f4.f1)), 5L)) != 0xF4L))) <= p_5) && g_177))));
        }
    }
    for (g_310 = 0; (g_310 <= 25); g_310 = safe_add_func_uint32_t_u_u(g_310, 1))
    {
        char l_783 = (-10L);
        int l_785[2][4] = {{(-1L), 0x50185A77L, (-1L), 0x50185A77L}, {(-1L), 0x50185A77L, (-1L), 0x50185A77L}};
        struct S3 l_792 = {1L,7946,46};
        struct S3 l_796 = {0x17L,9539,24};
        struct S1 l_825[6] = {{8,7L,0,81,42}, {8,7L,0,81,42}, {8,7L,0,81,42}, {8,7L,0,81,42}, {8,7L,0,81,42}, {8,7L,0,81,42}};
        struct S1 l_860 = {7,1L,1,78,11};
        int i, j;
        p_5 = g_225;
        for (g_308 = 0; (g_308 >= 0); g_308 -= 1)
        {
            int l_786 = 1L;
            struct S1 l_799 = {12,0xFAL,8,82,13};
            struct S0 l_867[10] = {{0,0x6BL}, {-0,0x44L}, {0,0x63L}, {0,0x63L}, {-0,0x44L}, {0,0x6BL}, {-0,0x44L}, {0,0x63L}, {0,0x63L}, {-0,0x44L}};
            unsigned l_868 = 0x3DAA0E11L;
            int l_883 = 1L;
            struct S3 l_923 = {9L,8717,37};
            int i, j;
            g_576.f4.f0 &= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((g_497[1] , ((func_10((g_497[1].f1 = 1L), func_49(g_309[g_308])) > ((safe_mod_func_uint8_t_u_u((l_735[(g_308 + 3)][(g_308 + 1)] != ((safe_mod_func_uint32_t_u_u(((l_780 = (safe_sub_func_uint16_t_u_u(l_593[0][6].f0, 0x672DL))) | ((safe_mul_func_uint16_t_u_u((g_497[1].f0 >= l_541), 0x7DBFL)) < p_4)), 0x4E74E52AL)) > 0UL)), 0xBFL)) ^ g_576.f0)) && l_783)), l_735[(g_308 + 3)][(g_308 + 1)])), 0x21EBL));
            if (l_496.f0)
            {
                struct S3 l_784[5] = {{1L,10548,-40}, {0x59L,9598,30}, {1L,10548,-40}, {0x59L,9598,30}, {1L,10548,-40}};
                int i;
                return l_784[0];
            }
            else
            {
                unsigned l_787[9][6][4] = {{{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}, {{0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}, {0xF0FD45E4L, 5UL, 0xEBC928E9L, 0x1ADDDDC9L}}};
                int i, j, k;
                l_787[2][1][2]++;
            }
            l_630.f0 = l_783;
            if (((safe_sub_func_uint16_t_u_u(65527UL, (l_630 , p_4))) , 0xEE7D8B7CL))
            {
                g_793 = l_792;
            }
            else
            {
                short l_823 = (-2L);
                int l_826 = 0xDB768934L;
                struct S0 l_827 = {0,0x3FL};
                unsigned l_831 = 0xF19C8AD1L;
                int l_850 = 0xF7CE1A05L;
                struct S1 l_859[4] = {{24,-4L,0,135,43}, {19,0L,1,113,29}, {24,-4L,0,135,43}, {19,0L,1,113,29}};
                char l_900 = 0x2BL;
                int l_912 = (-1L);
                int l_917 = 1L;
                int i;
                for (g_572 = 0; (g_572 <= 0); g_572 += 1)
                {
                    int i, j, k;
                    if ((p_5 ^= ((g_36[(g_572 + 1)][g_308][g_572] > p_4) == (safe_mul_func_int16_t_s_s(g_374[6][1], (!(p_3 = g_216.f2)))))))
                    {
                        p_5 &= g_178;
                        return l_796;
                    }
                    else
                    {
                        return g_793;
                    }
                }
                if ((((safe_rshift_func_int16_t_s_s(l_517, 7)) <= (func_10(l_735[(g_308 + 3)][(g_308 + 1)], (p_4 , l_799)) > 4294967291UL)) | (--g_91)))
                {
                    struct S1 l_824 = {1,0x76L,0,91,12};
                    if ((safe_add_func_uint8_t_u_u(254UL, 0xE6L)))
                    {
                        int l_808 = (-7L);
                        struct S2 l_809 = {0UL,0x4E12L,0UL,-8L,{-0,1L}};
                        g_27 = func_38(((((g_576.f1 = p_5) & (((g_374[1][1] > func_20(l_496.f4, g_68[2][0], g_216.f4, (l_495[0] ^ p_4), func_42((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_309[0] = g_216.f3), (-1L))), 9)), l_577.f4.f0, l_792.f1, g_68[2][0]))) , g_374[3][1]) & p_4)) >= g_374[6][1]) , p_5), l_808, l_809);
                        if (l_786)
                            continue;
                    }
                    else
                    {
                        unsigned short l_810 = 0xD61BL;
                        l_785[0][3] |= (l_810 |= g_68[2][0].f2);
                    }
                    l_826 = (l_792.f2 ^= (safe_lshift_func_uint8_t_u_u(func_20(g_353[0], func_49(((g_68[2][0].f3 = p_5) >= (g_601++))), ((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((g_238 == func_10(func_10((l_796.f2 = (p_4 && ((l_823 ^ g_36[2][0][0]) < g_216.f2))), l_824), l_825[5])), 0x238C9665L)), 11)), g_576.f2)), l_593[0][6].f0)) , p_4), l_792.f1, l_496.f1), l_785[0][3])));
                    p_5 = (0xE756L | (l_827 , g_91));
                    g_115 = 1L;
                }
                else
                {
                    struct S2 l_830 = {0x75L,0xD6BBL,0xCF93C8DAL,1L,{0,1L}};
                    struct S1 l_851 = {18,0L,0,142,54};
                    char l_852 = (-1L);
                    for (g_115 = (-7); (g_115 <= 6); g_115 = safe_add_func_int16_t_s_s(g_115, 6))
                    {
                        p_5 |= p_4;
                        p_5 |= g_36[2][0][0];
                        g_576 = l_830;
                        l_831++;
                    }
                    l_830.f4 = l_827;
                    l_854 = (safe_lshift_func_int16_t_s_s(((g_576.f4.f1 | g_208.f0) > (safe_rshift_func_uint8_t_u_s(func_20(l_630, func_38((safe_mod_func_int8_t_s_s(1L, (safe_add_func_uint8_t_u_u((g_96 < ((p_3 & ((safe_sub_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(l_830.f2, func_42(g_485, (safe_add_func_int16_t_s_s(((((((((((safe_add_func_uint16_t_u_u((((-1L) >= 0x94L) >= g_108), l_850)) == l_830.f1) | 0xEDFCA07DL) | g_115) , p_5) & 0x25L) || l_830.f4.f1) ^ l_825[5].f3) | (-1L)) > 0xBBL), 1UL)), l_823, l_851))) , 0x66F4258AL), p_4)) != l_852)) & g_177)), 0x8FL)))), g_353[0].f0, l_853), g_309[0], l_853.f3, l_577.f4.f1), 4))), p_5));
                    l_786 ^= (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((p_3 & (l_496.f4.f0 = l_792.f1)) & ((p_5 > (((l_859[1] , l_860) , (((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(0x110407D0L, l_577.f4.f1)), (((l_630.f0 = 0x3F5E8646L) < 0xAFA2A213L) , l_830.f4.f1))) , 0x8D01E076L) | g_576.f2)) == p_3)) == l_735[(g_308 + 3)][(g_308 + 1)])), 0x1887B4D2L)), 0));
                }
                if ((1L & (g_576.f0 = ((((l_799.f0 & (-6L)) , func_58(func_63((g_68[2][0] , (l_785[1][0] , ((((safe_sub_func_int32_t_s_s(l_484[2].f1, (253UL ^ p_4))) | p_3) > g_497[1].f4.f0) && l_859[1].f4)))), l_867[3], l_825[5].f1, g_572)) > 0x2326L) | l_868))))
                {
                    char l_881 = (-1L);
                    int l_882[10][10][2] = {{{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}, {{0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}, {0xD44DECE1L, 3L}}};
                    unsigned short l_922 = 65535UL;
                    int i, j, k;
                    if ((0L & (safe_sub_func_int32_t_s_s((p_5 |= (safe_rshift_func_uint8_t_u_s(p_3, 1))), 3L))))
                    {
                        int l_880[3][2] = {{0x9149FC25L, (-5L)}, {0x9149FC25L, (-5L)}, {0x9149FC25L, (-5L)}};
                        int i, j;
                        l_881 ^= (safe_unary_minus_func_int16_t_s(((((safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((g_96 || (safe_lshift_func_uint16_t_u_s((g_36[2][0][0] > (l_577 , g_216.f0)), l_859[1].f3))), (p_5 ^ l_880[2][0]))), p_3)) >= (g_572 == g_178)) , 0xEE56L) < g_309[0])));
                        l_796 = func_63(l_881);
                        p_5 = g_601;
                        if (g_485)
                            break;
                    }
                    else
                    {
                        g_83 = g_83;
                    }
                    g_885++;
                    l_785[0][3] &= ((safe_lshift_func_uint16_t_u_s((0x2B6C0411L > g_576.f3), 13)) || (l_867[3].f0 = ((+l_577.f1) & p_4)));
                    if ((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_576.f0 = l_786), (safe_sub_func_uint32_t_u_u(g_216.f4, (l_799.f4 || ((safe_lshift_func_uint16_t_u_s((l_900 = l_853.f2), (((((((l_796.f2 >= (l_882[9][4][1] = (safe_mul_func_int8_t_s_s(0L, (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint8_t_u((safe_mod_func_int32_t_s_s(5L, (safe_add_func_int32_t_s_s(g_216.f4, (((-8L) <= g_353[0].f1) , g_216.f0))))))) < p_4), p_5)))))) || 0x4FFDL) , g_68[2][0]) , l_859[1].f3) != l_799.f0) | l_881) ^ 1L))) != p_4)))))), 0xA5L)) , (-10L)), 5)))
                    {
                        if (l_882[5][1][0])
                            break;
                        g_115 = g_216.f2;
                        p_5 |= g_497[1].f4.f0;
                    }
                    else
                    {
                        p_5 ^= 1L;
                        g_225 = (safe_sub_func_int16_t_s_s(((g_497[1] , (+(g_576.f0 , (g_68[2][0].f0 || p_4)))) | l_912), (!(((safe_lshift_func_int8_t_s_u(0xCAL, 3)) ^ (safe_lshift_func_int8_t_s_s((func_42(l_917, (safe_add_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(((g_702 == p_5) != p_4), l_922)) >= l_753) & l_882[2][8][1]), p_4)), p_5, l_859[1]) != g_68[2][0].f1), 4))) | g_27.f3))));
                        return l_923;
                    }
                }
                else
                {
                    g_208.f2 = (p_3 > g_68[2][0].f0);
                }
            }
        }
        g_497[1].f4.f0 = (l_796.f2 = g_497[1].f4.f0);
    }
    return l_593[2][5];
}







static unsigned short func_10(short p_11, struct S1 p_12)
{
    struct S1 l_14 = {22,1L,6,60,47};
    l_14 = l_14;
    return g_6;
}







static short func_15(struct S1 p_16, char p_17, struct S1 p_18, int p_19)
{
    struct S3 l_286 = {0x31L,7119,-61};
    struct S0 l_287 = {0,0x7EL};
    int l_288 = 0xC7DFE44CL;
    int l_289 = 4L;
    unsigned l_345[10][3] = {{1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}, {1UL, 4294967295UL, 1UL}};
    unsigned l_415[5] = {0x9D2878E2L, 1UL, 0x9D2878E2L, 1UL, 0x9D2878E2L};
    struct S2 l_425 = {0xACL,0x4D19L,0x372DF971L,0x1D62L,{0,0x0FL}};
    struct S1 l_430 = {12,1L,6,18,50};
    unsigned l_452 = 4294967295UL;
    int i, j;
    l_289 ^= (((-7L) > func_42(g_6, (l_286.f2 = (p_18.f0 == ((safe_mod_func_uint32_t_u_u(((p_16.f3 > func_58(l_286, l_287, ((l_288 = g_68[2][0].f1) < ((func_10(g_26.f0, p_18) , 0UL) , l_287.f1)), g_91)) & g_27.f2), g_216.f3)) >= l_286.f0))), g_225, g_216)) <= g_208.f1);
    if (g_6)
    {
        struct S0 l_290 = {0,5L};
        unsigned l_300[2];
        int l_305 = 0xEE73A911L;
        int l_306[5][8][6] = {{{0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}}, {{0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}}, {{0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}}, {{0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}}, {{0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}, {0x0B4AEAAAL, 0xB0B8F56AL, 0x8483F44FL, 0x8483F44FL, 0xB0B8F56AL, 0x0B4AEAAAL}}};
        short l_351 = 0x7A24L;
        int l_352 = (-6L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_300[i] = 0UL;
        if (func_20(l_290, g_216, l_290.f0, p_16.f2, p_18.f2))
        {
            int l_303[9][1];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_303[i][j] = 0xD07A03BFL;
            }
            for (g_227 = (-15); (g_227 > (-17)); g_227--)
            {
                short l_299 = (-1L);
                int l_304 = (-1L);
                int l_307[9][1][10] = {{{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}, {{(-9L), 0xFC479670L, (-1L), 0xFC479670L, (-9L), 0x71706491L, 0L, 0xFC479670L, (-8L), 0xFC479670L}}};
                int i, j, k;
                for (g_208.f0 = 5; (g_208.f0 <= (-9)); g_208.f0 = safe_sub_func_uint8_t_u_u(g_208.f0, 2))
                {
                    p_19 ^= (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(0x995CL, (-1L))), ((g_109 = 255UL) && l_290.f0)));
                    ++l_300[0];
                    return l_299;
                }
                g_310++;
            }
            l_305 |= func_42(p_18.f4, (l_287.f0 < 1UL), (((l_303[8][0] && p_16.f0) != p_18.f2) > (p_16.f1 ^= 0x42L)), p_18);
        }
        else
        {
            char l_337[9] = {0L, 0xEBL, 0L, 0xEBL, 0L, 0xEBL, 0L, 0xEBL, 0L};
            int i;
            for (g_216.f1 = 5; (g_216.f1 != 25); g_216.f1++)
            {
                unsigned l_333 = 1UL;
                int l_334[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_334[i] = 0x9624D617L;
                g_225 ^= (((func_49((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((((func_63((l_334[1] = (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_287.f0 |= g_68[2][0].f0), p_16.f1)), (safe_mod_func_uint32_t_u_u((l_306[4][3][0] = (safe_add_func_int16_t_s_s(l_305, (safe_rshift_func_uint8_t_u_s(0UL, 2))))), (safe_add_func_int16_t_s_s(l_333, l_333)))))))) , g_27.f2) && g_177) <= 3UL) > l_333), 1L)), p_18.f1)) ^ 0x03L), p_18.f1)) && p_18.f3) , 7UL)) , g_83.f1) >= 2L) , 0x48B77A76L);
            }
            for (l_287.f1 = 9; (l_287.f1 <= 3); l_287.f1--)
            {
                return l_337[8];
            }
        }
        for (g_308 = 9; (g_308 != 18); ++g_308)
        {
            unsigned l_340[10] = {0UL, 0UL, 0x2BED963FL, 0UL, 0UL, 0x2BED963FL, 0UL, 0UL, 0x2BED963FL, 0UL};
            int i;
            ++l_340[5];
        }
        l_352 |= ((safe_sub_func_int8_t_s_s(((l_306[3][7][4] = 0xD8L) || (g_68[2][0].f2 & (l_345[0][1] >= (l_290.f0 , (safe_mul_func_uint8_t_u_u(l_305, (p_16.f4 > ((g_348 ^= p_18.f1) <= (safe_rshift_func_int16_t_s_s((l_351 && p_16.f4), l_289)))))))))), 0x8EL)) ^ g_96);
    }
    else
    {
        unsigned l_363 = 0UL;
        int l_369 = (-1L);
        int l_389[7][7][5] = {{{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}, {{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}, {{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}, {{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}, {{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}, {{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}, {{0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}, {0xC78678FEL, 0x9324946EL, 0xD8FB97BDL, 5L, 0xA43EE4E5L}}};
        int l_398 = 0x99C49847L;
        unsigned l_468 = 0x216C4AE4L;
        int i, j, k;
        if (g_348)
        {
            struct S0 l_354 = {0,0L};
            int l_357 = 0xCC9CBEE7L;
            int l_366 = 0xCBFD89FBL;
            int l_372 = 1L;
            if (func_58(func_63(l_287.f1), (l_354 = g_353[0]), func_42(((safe_mul_func_int8_t_s_s(((l_357 = p_18.f4) < ((0xC16DL != p_16.f4) >= (safe_unary_minus_func_uint8_t_u((((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((p_19 & l_363), 5)) , (func_10((safe_sub_func_int16_t_s_s(((g_309[0] = 0xF09CL) == l_366), g_216.f0)), p_18) & 0L)), g_216.f3)) & p_18.f3) || 0x6AC79A04L))))), l_366)) | p_18.f3), p_18.f3, p_16.f1, p_16), l_286.f0))
            {
                int l_367 = (-6L);
                int l_368 = (-4L);
                int l_370 = 0L;
                int l_371 = 5L;
                int l_373 = 0x00F2DCCAL;
                --g_375;
                l_354.f0 ^= (safe_mul_func_uint16_t_u_u((l_363 <= (-4L)), l_363));
            }
            else
            {
                unsigned char l_380 = 0x93L;
                l_289 &= l_380;
            }
        }
        else
        {
            unsigned short l_383 = 0xBE73L;
            struct S1 l_408 = {13,0x1CL,2,134,5};
            struct S3 l_409[1][2] = {{{0xC5L,5657,26}, {0xC5L,5657,26}}};
            int l_438 = 0x3E7E1D9EL;
            int l_449 = 0x747E805BL;
            int i, j;
            for (g_26.f1 = 25; (g_26.f1 >= 6); g_26.f1--)
            {
                unsigned char l_401 = 0x30L;
                unsigned char l_414[3][4][3] = {{{4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}}, {{4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}}, {{4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}, {4UL, 4UL, 0xC2L}}};
                unsigned short l_428 = 0xC511L;
                struct S1 l_429 = {15,-1L,6,71,10};
                int l_436 = 0x322722ADL;
                int l_437 = 6L;
                int i, j, k;
                l_383--;
                for (l_369 = (-20); (l_369 < 24); l_369 = safe_add_func_uint8_t_u_u(l_369, 6))
                {
                    unsigned l_388 = 0x49CCEE4BL;
                    int l_399 = 1L;
                    int l_400 = 1L;
                    struct S1 l_416 = {10,-8L,6,4,55};
                    if (g_91)
                    {
                        if (l_388)
                            break;
                    }
                    else
                    {
                        int l_396 = 0x6DFDA760L;
                        int l_397[5] = {0x9E58C16AL, 0xADA7AEEEL, 0x9E58C16AL, 0xADA7AEEEL, 0x9E58C16AL};
                        int i;
                        g_83.f2 = (g_115 = func_42((l_389[3][5][2] = (-10L)), (l_398 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(p_18.f0, (safe_mod_func_int16_t_s_s(1L, ((l_287.f0 = (l_396 = (0xE32CC7B7L == ((-1L) >= 0x7409L)))) | 255UL))))), l_397[2]))), g_26.f0, g_216));
                        l_401++;
                    }
                    if ((safe_mul_func_uint8_t_u_u((l_400 = (~p_16.f3)), ((func_10(func_10((((p_16.f2 > (func_42((((((safe_lshift_func_uint16_t_u_u((l_286.f2 = ((((l_408 , (l_409[0][1] , p_17)) >= 0x052FL) , ((((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((func_42((0x19L != ((g_68[2][0].f2 >= ((l_409[0][1].f2 = 0xDD66L) , l_409[0][1].f0)) != p_19)), g_27.f2, l_345[0][1], g_68[2][0]) <= p_17), p_16.f3)), 4294967287UL)) , l_409[0][1].f1) & l_399) == g_83.f2)) >= l_414[2][1][1])), 14)) ^ 4294967293UL) | 2UL) | 0xE806L) >= 9L), l_414[2][0][2], l_388, p_18) , p_18.f1)) <= l_287.f0) || l_415[4]), l_416), g_216) ^ 1UL) & p_16.f4))))
                    {
                        p_19 |= ((l_409[0][1].f2 = func_42(l_409[0][1].f0, (safe_mul_func_int8_t_s_s((-1L), 1UL)), (safe_sub_func_uint16_t_u_u(p_16.f3, ((safe_lshift_func_int16_t_s_u((-1L), 0)) > func_10(p_16.f2, (((safe_add_func_int8_t_s_s((p_18.f1 = func_42((l_425 , (l_414[2][1][1] == (((6UL | 0L) <= l_428) , 0x26D5L))), g_238, l_345[0][1], l_429)), g_374[4][2])) > g_27.f0) , l_430))))), g_68[2][0])) | 0x05BFL);
                    }
                    else
                    {
                        unsigned l_431[4] = {0xC1A73431L, 1UL, 0xC1A73431L, 1UL};
                        int i;
                        l_431[1]--;
                    }
                    return g_374[6][1];
                }
                l_449 &= (((l_437 = func_42((p_19 = ((((l_438 = (safe_add_func_uint32_t_u_u(((g_68[2][0].f3 = (g_375--)) | (l_409[0][1].f2 &= (0x424FL ^ (safe_mod_func_uint16_t_u_u(4UL, ((((safe_sub_func_uint16_t_u_u(g_80[1][4][3], (l_408.f4 > (safe_rshift_func_uint8_t_u_u((p_17 & (~(safe_add_func_int32_t_s_s(0x129888E9L, 0L)))), l_408.f0))))) , l_389[3][6][1]) < 0xC5CDFFDCL) , p_18.f2)))))), g_27.f2))) < g_91) < (-7L)) == p_18.f3)), p_16.f1, p_18.f1, g_216)) , 8UL) & g_208.f2);
            }
        }
        for (g_79 = (-13); (g_79 == 25); ++g_79)
        {
            unsigned l_463 = 2UL;
            struct S1 l_464 = {20,6L,1,90,15};
            unsigned l_465 = 0x37B953ADL;
            int l_474 = 6L;
            ++l_452;
            g_208.f2 &= (safe_rshift_func_uint16_t_u_s((((p_19 = 7L) < ((0L & ((safe_lshift_func_int8_t_s_s(0x00L, 1)) == func_10(l_389[3][5][2], ((g_374[6][1] &= (g_227 ^= (g_310 ^ (l_369 = 0x9A8D835AL)))) , g_68[0][0])))) | (((((safe_lshift_func_int16_t_s_u(func_42((~(((safe_sub_func_int32_t_s_s(func_42((l_463 = l_425.f4.f0), g_6, p_16.f4, p_18), g_91)) > g_80[1][4][3]) >= 1L)), l_398, g_26.f0, l_464), 9)) || l_465) != 0xE1F2L) , g_68[2][0].f0) != g_79))) > 1UL), 5));
            for (l_425.f3 = 6; (l_425.f3 >= (-28)); l_425.f3--)
            {
                unsigned l_471 = 1UL;
                l_471 = ((l_430.f2 == func_10(((l_398 >= p_18.f2) && l_468), ((--g_91) , g_68[2][0]))) > g_68[2][0].f0);
            }
            p_19 |= ((((p_17 || (l_474 |= (safe_lshift_func_int8_t_s_s((l_464 , l_363), p_18.f1)))) && 4294967289UL) >= func_42(l_425.f2, (l_389[1][0][0] , (safe_add_func_uint8_t_u_u(func_42(p_17, l_452, l_398, l_464), 0L))), g_83.f1, p_18)) || 0x93L);
        }
    }
    return g_27.f3;
}







static char func_20(struct S0 p_21, struct S1 p_22, char p_23, unsigned char p_24, short p_25)
{
    struct S0 l_37 = {-0,0xA7L};
    unsigned char l_179 = 1UL;
    unsigned l_180 = 0x62F4CF31L;
    struct S2 l_181 = {0UL,9L,0xC775F1AEL,0L,{0,0xA0L}};
    unsigned l_280 = 0UL;
    struct S3 l_283 = {0x1CL,6373,-82};
    l_37.f0 = ((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((p_23 && g_27.f3))), g_36[2][0][0])), (l_37 , (func_38(func_42(l_37.f1, (((safe_lshift_func_int16_t_s_u(((l_37.f1 <= ((p_24 , (g_27.f3 | (func_49((func_10((((g_36[0][0][0] ^ g_6) | l_37.f1) , g_27.f4), p_22) == g_27.f4)) , 0xF2F5L))) > l_179)) && 0xB4B2L), 4)) >= p_22.f4) < l_180), l_180, p_22), g_27.f2, l_181) , 247UL)))), p_22.f4)) >= l_37.f1);
    g_83.f2 = (safe_mul_func_uint16_t_u_u((0x5496L != (safe_mul_func_uint8_t_u_u(((((((safe_lshift_func_uint8_t_u_u((p_22.f0 != 0x4BL), 5)) <= (l_280 && l_180)) , (l_181.f2 , g_27.f3)) >= ((safe_mod_func_int8_t_s_s((-1L), func_10((l_283 , p_22.f4), g_68[3][0]))) && p_21.f0)) != 65533UL) >= l_280), 1UL))), l_37.f1));
    return p_21.f1;
}







static struct S1 func_38(unsigned p_39, unsigned p_40, struct S2 p_41)
{
    short l_182 = 0x3470L;
    struct S1 l_188 = {26,-4L,6,150,15};
    struct S3 l_217 = {0x12L,6287,32};
    unsigned l_224[10][5][5] = {{{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}, {{0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}, {0x15C216B3L, 0UL, 0x1D46F6AFL, 4294967286UL, 4294967286UL}}};
    struct S1 l_249[6][1][9] = {{{{11,0x89L,1,143,34}, {5,0xEAL,8,68,19}, {11,0x42L,4,164,5}, {20,0xB0L,10,25,61}, {11,6L,2,32,33}, {18,0x0EL,9,39,6}, {4,0L,1,129,55}, {7,0x47L,4,34,43}, {4,0L,1,129,55}}}, {{{11,0x89L,1,143,34}, {5,0xEAL,8,68,19}, {11,0x42L,4,164,5}, {20,0xB0L,10,25,61}, {11,6L,2,32,33}, {18,0x0EL,9,39,6}, {4,0L,1,129,55}, {7,0x47L,4,34,43}, {4,0L,1,129,55}}}, {{{11,0x89L,1,143,34}, {5,0xEAL,8,68,19}, {11,0x42L,4,164,5}, {20,0xB0L,10,25,61}, {11,6L,2,32,33}, {18,0x0EL,9,39,6}, {4,0L,1,129,55}, {7,0x47L,4,34,43}, {4,0L,1,129,55}}}, {{{11,0x89L,1,143,34}, {5,0xEAL,8,68,19}, {11,0x42L,4,164,5}, {20,0xB0L,10,25,61}, {11,6L,2,32,33}, {18,0x0EL,9,39,6}, {4,0L,1,129,55}, {7,0x47L,4,34,43}, {4,0L,1,129,55}}}, {{{11,0x89L,1,143,34}, {5,0xEAL,8,68,19}, {11,0x42L,4,164,5}, {20,0xB0L,10,25,61}, {11,6L,2,32,33}, {18,0x0EL,9,39,6}, {4,0L,1,129,55}, {7,0x47L,4,34,43}, {4,0L,1,129,55}}}, {{{11,0x89L,1,143,34}, {5,0xEAL,8,68,19}, {11,0x42L,4,164,5}, {20,0xB0L,10,25,61}, {11,6L,2,32,33}, {18,0x0EL,9,39,6}, {4,0L,1,129,55}, {7,0x47L,4,34,43}, {4,0L,1,129,55}}}};
    int l_255[3][4][9] = {{{0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}}, {{0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}}, {{0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}, {0x2994B8CAL, 0xE1CBAA4CL, 3L, 0x6590DE7DL, 0L, 0xEAB51653L, 0L, 0x6590DE7DL, 3L}}};
    int i, j, k;
    l_182 = p_41.f4.f0;
    for (g_26.f1 = (-11); (g_26.f1 <= 29); g_26.f1 = safe_add_func_int32_t_s_s(g_26.f1, 2))
    {
        unsigned l_187 = 3UL;
        int l_204 = (-1L);
        int l_241 = (-1L);
        int l_263 = 0L;
        int l_264 = (-2L);
        unsigned l_269 = 9UL;
        char l_270 = (-1L);
        struct S1 l_271 = {15,0L,9,105,14};
        for (g_91 = (-5); (g_91 >= 41); ++g_91)
        {
            unsigned l_191 = 0UL;
            struct S1 l_202[4] = {{7,0xDFL,1,28,44}, {1,0xDFL,2,157,31}, {7,0xDFL,1,28,44}, {1,0xDFL,2,157,31}};
            int l_218 = (-1L);
            int l_246 = 0xECDA24C8L;
            int l_262[5][7][7] = {{{(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}}, {{(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}}, {{(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}}, {{(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}}, {{(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}, {(-4L), 0xFBCABF82L, 0x0C7AC6AEL, 0x1A93FC22L, 0xEDF3B505L, 1L, 0xF1C0D498L}}};
            int i, j, k;
            if ((g_115 = (0xE94C89D1L | l_187)))
            {
                return l_188;
            }
            else
            {
                unsigned l_201[6] = {4294967287UL, 4294967287UL, 0xF6B8001EL, 4294967287UL, 4294967287UL, 0xF6B8001EL};
                struct S3 l_209[1] = {{-1L,4458,54}};
                struct S1 l_219[5] = {{22,0L,3,168,50}, {22,0L,3,168,50}, {22,0L,3,168,50}, {22,0L,3,168,50}, {22,0L,3,168,50}};
                int i;
                for (g_178 = (-4); (g_178 > 41); g_178 = safe_add_func_uint32_t_u_u(g_178, 1))
                {
                    struct S3 l_194 = {-6L,10448,-4};
                    struct S1 l_203 = {11,1L,7,53,15};
                    l_204 = (l_191 ^ (safe_rshift_func_int16_t_s_u((((l_194 , (((safe_add_func_int8_t_s_s((-5L), ((p_41.f0 != g_96) | g_26.f0))) >= (!0UL)) ^ ((((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(func_10((!((func_42((l_201[4] = 0x168084E1L), p_41.f0, p_41.f4.f0, l_202[1]) && g_68[2][0].f2) >= l_194.f1)), l_203), g_79)), p_39)) , (-1L)) ^ p_39) & 0x206AL))) != g_91) || 1L), 3)));
                    for (l_204 = 2; (l_204 != (-17)); l_204 = safe_sub_func_uint32_t_u_u(l_204, 8))
                    {
                        struct S1 l_207[2] = {{18,7L,6,24,47}, {18,7L,6,24,47}};
                        int i;
                        return l_207[1];
                    }
                    for (g_79 = 0; (g_79 >= 0); g_79 -= 1)
                    {
                        int i, j;
                        l_209[0] = g_208;
                        p_41.f4.f0 &= func_10(p_40, g_68[g_79][g_79]);
                        g_115 = (safe_mod_func_uint32_t_u_u((p_41.f4.f1 != (safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((0x30L & (-1L)), ((p_41.f4.f0 = (((func_10((l_209[0].f2 = p_41.f4.f1), g_216) < 0x16DEF22CL) | (l_218 = (l_217 , func_10(func_10(((l_194.f2 = (l_194.f0 == l_202[1].f2)) < p_41.f0), l_203), l_203)))) , p_40)) & g_80[4][6][2]))), 2L))), l_201[4]));
                        g_115 |= g_68[2][0].f0;
                    }
                    if ((func_10(l_187, l_188) >= (l_219[0] , ((g_36[2][0][0] , ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((0x031FL && (g_225 ^= func_10(l_224[3][0][3], g_27))), g_208.f0)), l_203.f2)) > 0UL)) , l_203.f1))))
                    {
                        if (g_26.f1)
                            break;
                        g_83.f2 = p_39;
                        return g_216;
                    }
                    else
                    {
                        struct S3 l_226 = {-1L,7278,-48};
                        p_41.f4.f0 = ((((((l_226 = l_209[0]) , (p_41.f3 , (((g_227 = func_42(g_225, l_226.f1, g_68[2][0].f3, ((p_41.f4.f0 && (l_191 ^ (l_202[1] , g_80[5][1][1]))) , g_68[2][0]))) , 1UL) != l_226.f1))) , l_219[0].f1) && 0x37B4L) | l_203.f3) , p_41.f3);
                        return l_202[2];
                    }
                }
                l_209[0].f2 &= ((((safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_41.f1 != (l_219[0].f1 > l_187)), (p_40 <= func_42(l_219[0].f1, ((g_80[0][0][3] | (((safe_mul_func_uint16_t_u_u((g_178 > (((func_42(p_41.f2, func_10((safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(g_83.f1, (-1L))) < p_41.f4.f0) <= 0x1041L), 0UL)), g_216), g_208.f1, g_68[0][0]) && l_219[0].f0) , 0xA9C512B7L) >= l_187)), l_219[0].f0)) != g_27.f1) , (-5L))) , g_68[2][0].f4), g_26.f0, g_216)))), p_41.f2)) <= l_187) && g_238) >= l_202[1].f1);
                p_41.f4.f0 = (((g_115 = (safe_rshift_func_int8_t_s_s(((g_80[1][4][3] || func_10(l_182, g_68[3][0])) , (l_241 & (g_177--))), ((func_10(func_10(((safe_mod_func_int32_t_s_s((p_41.f1 , ((g_27.f4 = l_188.f3) == (--p_40))), 0x8E972006L)) & ((func_10(func_10((g_238 , g_227), l_249[2][0][1]), g_68[0][0]) , l_188.f0) <= 2UL)), l_202[2]), l_249[2][0][1]) , 5UL) | p_41.f1)))) > l_218) > l_246);
            }
            for (g_75 = 0; (g_75 <= 4); g_75 += 1)
            {
                return g_216;
            }
            l_217.f2 ^= func_42((g_26.f0 &= (((+(safe_mul_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((!(safe_unary_minus_func_int16_t_s(((l_246 = 5UL) || (l_204 = 0x56B9L))))), l_255[0][3][5])) ^ (((safe_mod_func_int8_t_s_s((~((safe_rshift_func_uint16_t_u_s((++g_80[2][1][1]), 5)) || p_40)), g_216.f2)) >= ((safe_mul_func_int16_t_s_s(p_39, l_241)) , (!4294967295UL))) || (func_42(func_42(p_41.f4.f1, l_269, g_83.f1, g_216), l_191, l_224[5][1][4], g_68[2][0]) == p_41.f0))) || g_80[1][4][3]), l_255[2][1][1]))) && (-1L)) > l_202[1].f1)), g_109, l_270, g_216);
        }
        return l_271;
    }
    g_208.f2 = (safe_add_func_int32_t_s_s(p_41.f3, g_26.f0));
    return l_249[2][0][1];
}







static unsigned func_42(int p_43, int p_44, unsigned p_45, struct S1 p_46)
{
    return g_177;
}







static struct S1 func_49(unsigned p_50)
{
    int l_51 = 0L;
    struct S1 l_67 = {28,0L,7,152,9};
    struct S0 l_69[10][2] = {{{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}, {{0,0xC6L}, {0,-10L}}};
    struct S3 l_84 = {0x40L,3574,-62};
    int i, j;
    g_26.f0 = (-1L);
    l_69[2][1].f0 = ((l_51 = (-1L)) <= func_10((g_178 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((g_177 |= (func_58(func_63((safe_rshift_func_uint8_t_u_s((((g_68[2][0] = l_67) , g_27.f2) , (l_69[2][1] , p_50)), 1))), l_69[5][0], (l_84 , 0x2378B10DL), l_84.f0) , p_50)) >= g_27.f2), 5)), 9)), p_50))), l_67));
    return g_68[2][0];
}







static short func_58(struct S3 p_59, struct S0 p_60, int p_61, char p_62)
{
    int l_85[5] = {(-8L), 0x69C2BC1CL, (-8L), 0x69C2BC1CL, (-8L)};
    struct S2 l_86 = {1UL,0x1B5AL,0x6CAC88EEL,-3L,{-0,0xD0L}};
    unsigned char l_87[2][1];
    struct S1 l_167 = {20,1L,3,160,47};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_87[i][j] = 255UL;
    }
    l_87[0][0] |= ((l_85[3] != p_59.f0) >= (l_86 , ((g_75 = 0x3543L) || (0xFD8C3401L <= l_86.f1))));
    l_85[4] |= g_75;
    for (g_79 = 0; (g_79 >= 6); g_79++)
    {
        char l_90[5];
        int i;
        for (i = 0; i < 5; i++)
            l_90[i] = 1L;
        ++g_91;
    }
    if ((safe_sub_func_int16_t_s_s(g_96, 0xBAF6L)))
    {
        int l_97 = 0xE95A61D4L;
        struct S1 l_114 = {31,0L,1,167,42};
        int l_124 = (-5L);
        unsigned char l_151 = 0x99L;
        unsigned char l_172[7];
        int i;
        for (i = 0; i < 7; i++)
            l_172[i] = 253UL;
        if (l_97)
        {
            unsigned l_107 = 0x1D1B06CCL;
            int l_137 = (-4L);
            struct S2 l_141 = {255UL,0x1FEEL,0x7C6D75ADL,6L,{0,0L}};
            for (g_26.f1 = 4; (g_26.f1 >= 0); g_26.f1 -= 1)
            {
                int i;
                l_97 &= ((g_27.f1 &= l_85[g_26.f1]) | ((0xD22C8C08L >= p_59.f2) ^ g_83.f0));
                if (l_97)
                    continue;
            }
            for (p_59.f0 = 0; (p_59.f0 >= 17); p_59.f0 = safe_add_func_uint32_t_u_u(p_59.f0, 7))
            {
                unsigned l_100 = 4UL;
                struct S3 l_147 = {0L,3800,69};
                struct S1 l_148 = {8,-2L,2,177,25};
                l_100--;
                p_61 = (safe_sub_func_int16_t_s_s(g_26.f0, (safe_mul_func_int8_t_s_s(0x28L, (l_85[4] = (g_109 = (g_108 &= (l_107 < (l_97 = p_60.f1)))))))));
                if (((((safe_add_func_int8_t_s_s(((((((g_108 = (safe_sub_func_int16_t_s_s((l_86.f0 > func_10(p_59.f1, l_114)), (g_115 = g_75)))) >= (safe_lshift_func_int8_t_s_u(p_61, g_26.f1))) > (p_59 , (safe_mod_func_uint32_t_u_u(((0xC179L <= l_107) && l_87[0][0]), (-6L))))) , l_86.f3) <= g_83.f1) & g_83.f2), g_36[2][0][0])) || g_83.f2) == l_86.f2) && 0x27L))
                {
                    for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                    {
                        int l_125 = 0x586B99F0L;
                        int i, j;
                        l_125 = (((l_97 = l_87[g_96][g_96]) ^ ((~(safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((l_107 >= (g_108 , g_79)), l_124)), 0))) && (g_26 , (0xB3L | 0x4DL)))) , l_86.f4.f1);
                        p_61 &= (g_115 ^= l_85[3]);
                        return g_68[2][0].f0;
                    }
                    if (p_61)
                        continue;
                    if (p_60.f0)
                        continue;
                }
                else
                {
                    char l_130 = 0x09L;
                    int l_146[2][3] = {{0L, 1L, 0L}, {0L, 1L, 0L}};
                    int i, j;
                    l_137 &= (((safe_rshift_func_int8_t_s_u((p_59.f1 > (l_107 | func_10((safe_mod_func_int8_t_s_s(g_27.f2, l_130)), l_114))), 6)) | g_91) , (safe_add_func_uint32_t_u_u((0xEBL <= (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(0UL, 0xBDBEL)), g_68[2][0].f1))), l_100)));
                    if (l_100)
                    {
                        unsigned char l_140 = 0x31L;
                        l_97 = (safe_lshift_func_uint8_t_u_s((l_85[1] , l_140), ((g_79 , l_100) | (l_141 , (p_60 , ((safe_sub_func_uint8_t_u_u(l_100, (l_146[0][2] = (((safe_mod_func_int8_t_s_s(p_59.f2, (-1L))) <= g_26.f1) | p_60.f0)))) , g_68[2][0].f3))))));
                        g_83 = l_147;
                    }
                    else
                    {
                        if (g_27.f2)
                            break;
                        l_148 = (g_68[2][0] = l_148);
                    }
                    l_151 ^= (safe_mul_func_uint16_t_u_u(p_59.f1, g_115));
                    if (l_114.f2)
                    {
                        return l_124;
                    }
                    else
                    {
                        int l_165 = 0x2D161A44L;
                        unsigned char l_166 = 255UL;
                        p_61 = (p_60 , (safe_add_func_int32_t_s_s(((p_60.f1 ^= (l_86.f4 , ((l_130 & (safe_rshift_func_int8_t_s_s(l_87[0][0], 7))) , (0x9DE4L || func_10(g_68[2][0].f0, g_68[2][0]))))) <= (l_165 = (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s((l_86.f0 >= p_60.f0), 65529UL)))), 8L)) ^ g_68[2][0].f1), 11)), 0)) , 0UL) >= p_62))), l_166)));
                    }
                }
            }
        }
        else
        {
            g_83.f2 = func_10(p_60.f0, l_167);
            l_86.f4.f0 = p_60.f1;
            for (l_124 = 0; (l_124 <= (-3)); --l_124)
            {
                char l_173 = 0xE7L;
                l_172[2] |= (safe_sub_func_uint32_t_u_u(l_86.f1, (((-2L) < 4UL) , (((g_115 &= (l_97 = p_60.f1)) , func_10(p_61, l_114)) != g_27.f4))));
                l_173 = g_36[0][0][0];
            }
        }
        p_59.f2 = 0x0DCD383CL;
        for (l_167.f1 = (-13); (l_167.f1 <= (-24)); l_167.f1 = safe_sub_func_uint32_t_u_u(l_167.f1, 2))
        {
            if (p_62)
                break;
        }
    }
    else
    {
        struct S2 l_176[6] = {{4UL,-7L,0x9E9AA08BL,0x20ADL,{0,-1L}}, {4UL,-7L,0x9E9AA08BL,0x20ADL,{0,-1L}}, {4UL,-7L,0x9E9AA08BL,0x20ADL,{0,-1L}}, {4UL,-7L,0x9E9AA08BL,0x20ADL,{0,-1L}}, {4UL,-7L,0x9E9AA08BL,0x20ADL,{0,-1L}}, {4UL,-7L,0x9E9AA08BL,0x20ADL,{0,-1L}}};
        int i;
        p_60.f0 = 0xA6307D7EL;
        l_176[3] = (l_176[3] , l_176[2]);
    }
    return p_59.f0;
}







static struct S3 func_63(unsigned short p_64)
{
    struct S0 l_70[3][4][6] = {{{{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}}, {{{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}}, {{{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}, {{-0,0x9BL}, {0,1L}, {0,0x0EL}, {0,0x7FL}, {0,0x6CL}, {-0,0xC6L}}}};
    int l_71 = 0L;
    int l_72 = 0x35321785L;
    int l_73 = 5L;
    int l_74[5];
    short l_78 = 0x1D28L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_74[i] = 0x5F560565L;
    g_26 = l_70[1][0][4];
    ++g_75;
    l_78 = 0L;
    g_80[1][4][3]--;
    return g_83;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_36[i][j][k], "g_36[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_68[i][j].f0, "g_68[i][j].f0", print_hash_value);
            transparent_crc(g_68[i][j].f1, "g_68[i][j].f1", print_hash_value);
            transparent_crc(g_68[i][j].f2, "g_68[i][j].f2", print_hash_value);
            transparent_crc(g_68[i][j].f3, "g_68[i][j].f3", print_hash_value);
            transparent_crc(g_68[i][j].f4, "g_68[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_80[i][j][k], "g_80[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_208.f0, "g_208.f0", print_hash_value);
    transparent_crc(g_208.f1, "g_208.f1", print_hash_value);
    transparent_crc(g_208.f2, "g_208.f2", print_hash_value);
    transparent_crc(g_216.f0, "g_216.f0", print_hash_value);
    transparent_crc(g_216.f1, "g_216.f1", print_hash_value);
    transparent_crc(g_216.f2, "g_216.f2", print_hash_value);
    transparent_crc(g_216.f3, "g_216.f3", print_hash_value);
    transparent_crc(g_216.f4, "g_216.f4", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_309[i], "g_309[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_353[i].f0, "g_353[i].f0", print_hash_value);
        transparent_crc(g_353[i].f1, "g_353[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_374[i][j], "g_374[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_497[i].f0, "g_497[i].f0", print_hash_value);
        transparent_crc(g_497[i].f1, "g_497[i].f1", print_hash_value);
        transparent_crc(g_497[i].f2, "g_497[i].f2", print_hash_value);
        transparent_crc(g_497[i].f3, "g_497[i].f3", print_hash_value);
        transparent_crc(g_497[i].f4.f0, "g_497[i].f4.f0", print_hash_value);
        transparent_crc(g_497[i].f4.f1, "g_497[i].f4.f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_576.f0, "g_576.f0", print_hash_value);
    transparent_crc(g_576.f1, "g_576.f1", print_hash_value);
    transparent_crc(g_576.f2, "g_576.f2", print_hash_value);
    transparent_crc(g_576.f3, "g_576.f3", print_hash_value);
    transparent_crc(g_576.f4.f0, "g_576.f4.f0", print_hash_value);
    transparent_crc(g_576.f4.f1, "g_576.f4.f1", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    transparent_crc(g_702, "g_702", print_hash_value);
    transparent_crc(g_793.f0, "g_793.f0", print_hash_value);
    transparent_crc(g_793.f1, "g_793.f1", print_hash_value);
    transparent_crc(g_793.f2, "g_793.f2", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_935[i], "g_935[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1007[i][j][k], "g_1007[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
